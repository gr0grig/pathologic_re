"""Regenerate .sc for a version (2005 / HD), write to its Scripts_sc dir, and
round-trip verify (lift -> emit -> scomp.exe -> compare to original .bin).

Usage: python regen_sc.py <bin_dir> <out_dir>
"""
from __future__ import annotations

import sys
from concurrent.futures import ProcessPoolExecutor, as_completed
from pathlib import Path

from sc_decompiler.lift import lift_bin
from sc_decompiler.lift.lifter import LiftError
from sc_decompiler.emit import emit_sc
from sc_decompiler.verify.scomp_runner import compile_sc_text


def one(args):
    bin_path, out_dir = args
    bin_path = Path(bin_path); out_dir = Path(out_dir)
    try:
        ast = lift_bin(str(bin_path))  # is_alpha=False (2005/HD layout)
    except LiftError as e:
        return (bin_path.name, "LIFT_ERROR", str(e))
    except Exception as e:  # noqa: BLE001
        return (bin_path.name, "EXC", f"{type(e).__name__}: {e}")
    try:
        sc = emit_sc(ast)
    except Exception as e:  # noqa: BLE001
        return (bin_path.name, "EMIT_EXC", f"{type(e).__name__}: {e}")
    res = compile_sc_text(sc, stem=bin_path.stem)
    if not res.ok:
        return (bin_path.name, "SCOMP_ERROR", (res.error_msg or "").strip())
    orig = bin_path.read_bytes()
    if res.bin_bytes != orig:
        off = next((i for i, (a, b) in enumerate(zip(res.bin_bytes, orig)) if a != b),
                   min(len(res.bin_bytes), len(orig)))
        return (bin_path.name, "BIN_MISMATCH", f"first diff 0x{off:x}")
    # only write the .sc once round-trip is proven byte-identical
    (out_dir / (bin_path.stem + ".sc")).write_text(sc, encoding="utf-8")
    return (bin_path.name, "OK_ROUNDTRIP", "")


def main():
    bin_dir = Path(sys.argv[1]); out_dir = Path(sys.argv[2])
    out_dir.mkdir(parents=True, exist_ok=True)
    bins = sorted(bin_dir.glob("*.bin"))
    print(f"{bin_dir} -> {out_dir}: {len(bins)} scripts")
    counts = {}; fails = []
    with ProcessPoolExecutor(max_workers=8) as ex:
        futs = {ex.submit(one, (str(b), str(out_dir))): b for b in bins}
        for i, fut in enumerate(as_completed(futs), 1):
            name, status, detail = fut.result()
            counts[status] = counts.get(status, 0) + 1
            if status != "OK_ROUNDTRIP":
                fails.append((name, status, detail))
            if i % 100 == 0 or i == len(bins):
                print(f"  {i}/{len(bins)}  " + "  ".join(f"{k}={v}" for k, v in sorted(counts.items())))
    print("Final:", "  ".join(f"{k}={v}" for k, v in sorted(counts.items())))
    if fails:
        print("FAILURES:")
        for n, s, d in fails[:50]:
            print(f"  {n}: {s} {d}")
    return 0 if counts.get("OK_ROUNDTRIP", 0) == len(bins) else 1


if __name__ == "__main__":
    sys.exit(main())
