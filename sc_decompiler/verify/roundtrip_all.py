"""Batch round-trip over a directory of .bin files. Writes a CSV report.

Status taxonomy:
    OK_ROUNDTRIP    - decompile + scomp + byte-equal
    BIN_MISMATCH    - scomp succeeded but bytes differ from original
    SCOMP_ERROR     - emitter produced .sc that scomp rejected
    LIFT_ERROR      - lifter raised LiftError (unsupported pattern)
    UNKNOWN_ERROR   - any other exception
"""

from __future__ import annotations

import argparse
import csv
import sys
import traceback
from concurrent.futures import ProcessPoolExecutor, as_completed
from pathlib import Path

from ..emit import emit_sc
from ..lift import lift_bin
from ..lift.lifter import LiftError
from .scomp_runner import compile_sc_text


def _one(bin_path: Path) -> dict:
    rec = {
        "name": bin_path.name,
        "status": "",
        "detail": "",
        "size_orig": bin_path.stat().st_size,
        "size_compiled": 0,
        "first_diff_offset": "",
    }
    try:
        ast = lift_bin(str(bin_path))
    except LiftError as e:
        rec["status"] = "LIFT_ERROR"
        rec["detail"] = str(e)
        return rec
    except Exception as e:  # noqa: BLE001
        rec["status"] = "UNKNOWN_ERROR"
        rec["detail"] = f"{type(e).__name__}: {e}"
        return rec
    try:
        sc_text = emit_sc(ast)
    except Exception as e:  # noqa: BLE001
        rec["status"] = "UNKNOWN_ERROR"
        rec["detail"] = f"emit: {type(e).__name__}: {e}"
        return rec
    result = compile_sc_text(sc_text, stem=bin_path.stem)
    if not result.ok:
        rec["status"] = "SCOMP_ERROR"
        rec["detail"] = (result.error_msg or "").strip()
        return rec
    rec["size_compiled"] = len(result.bin_bytes)
    original = bin_path.read_bytes()
    if result.bin_bytes == original:
        rec["status"] = "OK_ROUNDTRIP"
        return rec
    rec["status"] = "BIN_MISMATCH"
    for i, (a, b) in enumerate(zip(result.bin_bytes, original)):
        if a != b:
            rec["first_diff_offset"] = f"0x{i:x}"
            break
    if not rec["first_diff_offset"]:
        rec["first_diff_offset"] = f"0x{min(len(result.bin_bytes), len(original)):x}"
    return rec


def main(argv=None) -> int:
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument("--bin-dir", type=Path, default=Path(r"C:\Users\user\Desktop\Pathologic\2005\Scripts"))
    p.add_argument("--report-csv", type=Path, default=Path("roundtrip_report.csv"))
    p.add_argument("--limit", type=int, default=0)
    p.add_argument("--workers", type=int, default=4)
    args = p.parse_args(argv)

    bins = sorted(args.bin_dir.glob("*.bin"))
    if args.limit:
        bins = bins[: args.limit]
    print(f"Running round-trip on {len(bins)} .bin files, {args.workers} workers...")

    rows = []
    counts: dict = {}
    with ProcessPoolExecutor(max_workers=args.workers) as ex:
        futs = {ex.submit(_one, b): b for b in bins}
        for i, fut in enumerate(as_completed(futs), 1):
            try:
                rec = fut.result()
            except Exception as e:  # noqa: BLE001
                rec = {
                    "name": futs[fut].name, "status": "UNKNOWN_ERROR",
                    "detail": f"{type(e).__name__}: {e}", "size_orig": 0,
                    "size_compiled": 0, "first_diff_offset": "",
                }
            rows.append(rec)
            counts[rec["status"]] = counts.get(rec["status"], 0) + 1
            if i % 100 == 0 or i == len(bins):
                summary = "  ".join(f"{k}={v}" for k, v in sorted(counts.items()))
                print(f"  {i}/{len(bins)}  {summary}")

    rows.sort(key=lambda r: r["name"])
    with args.report_csv.open("w", newline="", encoding="utf-8") as f:
        w = csv.DictWriter(f, fieldnames=list(rows[0].keys()))
        w.writeheader()
        w.writerows(rows)
    print(f"Report -> {args.report_csv}")
    print("Final tallies:")
    for status in sorted(counts):
        print(f"  {status}: {counts[status]}")
    return 0


if __name__ == "__main__":
    sys.exit(main())
