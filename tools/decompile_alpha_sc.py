"""Decompile all alpha scripts (.bin) to .sc into a temp folder. No round-trip.

Assesses validity in two cheap ways that do NOT require byte-matching:
  1. lift + emit succeed (the decompiler produced source at all)
  2. scomp.exe accepts the emitted .sc (it is syntactically valid PathologicScript)

Writes a CSV report and the .sc files.
"""
from __future__ import annotations

import csv
import sys
import traceback
from pathlib import Path

from sc_decompiler.lift import lift_bin
from sc_decompiler.lift.lifter import LiftError
from sc_decompiler.emit import emit_sc
from sc_decompiler.verify.scomp_runner import compile_sc_text

BIN_DIR = Path(r"C:\Users\user\Desktop\Pathologic\alpha\data\Scripts")
OUT_DIR = Path(r"C:\Users\user\Desktop\Pathologic\alpha\tmp_sc_alpha")
REPORT = OUT_DIR / "_report.csv"


def one(bin_path: Path) -> dict:
    rec = {"name": bin_path.name, "lift": "", "emit": "", "scomp": "",
           "sc_bytes": 0, "detail": ""}
    try:
        ast = lift_bin(str(bin_path), is_alpha=True)
        rec["lift"] = "OK"
    except LiftError as e:
        rec["lift"] = "LIFT_ERROR"; rec["detail"] = str(e); return rec
    except Exception as e:  # noqa: BLE001
        rec["lift"] = "EXC"; rec["detail"] = f"{type(e).__name__}: {e}"; return rec
    try:
        sc = emit_sc(ast)
        rec["emit"] = "OK"; rec["sc_bytes"] = len(sc)
    except Exception as e:  # noqa: BLE001
        rec["emit"] = "EXC"; rec["detail"] = f"emit: {type(e).__name__}: {e}"; return rec

    (OUT_DIR / (bin_path.stem + ".sc")).write_text(sc, encoding="utf-8")

    # validity probe: does the 2005 scomp.exe even accept it as valid source?
    res = compile_sc_text(sc, stem=bin_path.stem)
    rec["scomp"] = "ACCEPTS" if res.ok else "REJECTS"
    if not res.ok:
        rec["detail"] = (res.error_msg or "").strip()
    return rec


def main() -> int:
    OUT_DIR.mkdir(parents=True, exist_ok=True)
    bins = sorted(BIN_DIR.glob("*.bin"))
    print(f"Decompiling {len(bins)} alpha scripts -> {OUT_DIR}")
    rows = []
    counts: dict = {}
    for i, b in enumerate(bins, 1):
        try:
            rec = one(b)
        except Exception as e:  # noqa: BLE001
            rec = {"name": b.name, "lift": "FATAL", "emit": "", "scomp": "",
                   "sc_bytes": 0, "detail": f"{type(e).__name__}: {e}"}
        rows.append(rec)
        key = f"{rec['lift']}/{rec['emit']}/{rec['scomp']}"
        counts[key] = counts.get(key, 0) + 1
        if i % 50 == 0 or i == len(bins):
            print(f"  {i}/{len(bins)}")
    rows.sort(key=lambda r: r["name"])
    with REPORT.open("w", newline="", encoding="utf-8") as f:
        w = csv.DictWriter(f, fieldnames=list(rows[0].keys()))
        w.writeheader(); w.writerows(rows)
    print(f"\nReport -> {REPORT}")
    lift_ok = sum(1 for r in rows if r["lift"] == "OK")
    emit_ok = sum(1 for r in rows if r["emit"] == "OK")
    accepts = sum(1 for r in rows if r["scomp"] == "ACCEPTS")
    print(f"lift OK:        {lift_ok}/{len(rows)}")
    print(f"emit OK:        {emit_ok}/{len(rows)}")
    print(f"scomp ACCEPTS:  {accepts}/{len(rows)}")
    print("breakdown (lift/emit/scomp):")
    for k in sorted(counts):
        print(f"  {k}: {counts[k]}")
    return 0


if __name__ == "__main__":
    sys.exit(main())
