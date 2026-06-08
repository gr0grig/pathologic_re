#!/usr/bin/env python3
"""Compile every reference .sc with scomp.exe, compare each output to the matching 2005 .bin.

This is a pre-flight diagnostic, not a hard gate: even if 0/858 match byte-for-byte, the
decompiler effort proceeds (our round-trip closes the loop bin -> .sc -> bin' without
relying on the reference .sc). What we learn from this check:

* Does scomp.exe run cleanly across the whole corpus?  (infrastructure smoke test)
* Roughly what fraction of reference .sc happens to match the shipped .bin?  (informational)
"""

from __future__ import annotations

import argparse
import csv
import shutil
import subprocess
import sys
import tempfile
from concurrent.futures import ProcessPoolExecutor, as_completed
from pathlib import Path

DEFAULT_SRC_DIR = Path(r"C:\Users\user\Desktop\Pathologic\pathologic_re\examples\2005\script_sources")
DEFAULT_BIN_DIR = Path(r"C:\Users\user\Desktop\Pathologic\2005\Scripts")
DEFAULT_SCOMP_DIR = Path(r"C:\Users\user\Desktop\Pathologic\SRC\Scripts\build\tools")
DEFAULT_AUX_SCRIPTS = Path(r"C:\Users\user\Desktop\Pathologic\SRC\GameEditor\data\Scripts")


def build_work_tree(src_dir: Path, scomp_dir: Path, aux_scripts: Path) -> Path:
    """Lay out a single work directory: all .sc/.sci + .dlg + scomp.exe + sbuild.dll."""
    work = Path(tempfile.mkdtemp(prefix="sc_oracle_"))
    for entry in src_dir.iterdir():
        if entry.is_dir():
            shutil.copytree(entry, work / entry.name)
        else:
            shutil.copy2(entry, work / entry.name)
    # GameEditor .sci/.dlg are referenced by `include` directives from main sources.
    for pattern in ("*.sci", "*.dlg"):
        for f in aux_scripts.glob(pattern):
            dest = work / f.name
            if not dest.exists():
                shutil.copy2(f, dest)
    shutil.copy2(scomp_dir / "scomp.exe", work / "scomp.exe")
    shutil.copy2(scomp_dir / "sbuild.dll", work / "sbuild.dll")
    return work


def compile_one(work: Path, sc_name: str, original_bin_dir: Path) -> dict:
    sc_path = work / sc_name
    bin_path = sc_path.with_suffix(".bin")
    if bin_path.exists():
        bin_path.unlink()
    proc = subprocess.run(
        [str(work / "scomp.exe"), sc_name],
        cwd=work,
        capture_output=True,
        text=True,
        timeout=60,
    )
    stem = sc_path.stem
    original = original_bin_dir / f"{stem}.bin"
    result = {
        "name": stem,
        "compile_ok": bin_path.exists(),
        "scomp_stdout": proc.stdout.strip(),
        "scomp_stderr": proc.stderr.strip(),
        "has_original": original.exists(),
        "byte_match": False,
        "size_compiled": bin_path.stat().st_size if bin_path.exists() else 0,
        "size_original": original.stat().st_size if original.exists() else 0,
    }
    if result["compile_ok"] and result["has_original"]:
        result["byte_match"] = bin_path.read_bytes() == original.read_bytes()
    return result


def main() -> int:
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument("--src-dir", type=Path, default=DEFAULT_SRC_DIR)
    p.add_argument("--bin-dir", type=Path, default=DEFAULT_BIN_DIR)
    p.add_argument("--scomp-dir", type=Path, default=DEFAULT_SCOMP_DIR)
    p.add_argument("--aux-scripts", type=Path, default=DEFAULT_AUX_SCRIPTS)
    p.add_argument("--report-csv", type=Path, default=Path("oracle_report.csv"))
    p.add_argument("--limit", type=int, default=0, help="0 = all")
    args = p.parse_args()

    print(f"Building work tree from {args.src_dir}...")
    work = build_work_tree(args.src_dir, args.scomp_dir, args.aux_scripts)
    print(f"  -> {work}")

    sc_files = sorted(p.name for p in work.glob("*.sc"))
    if args.limit:
        sc_files = sc_files[: args.limit]
    print(f"Compiling {len(sc_files)} .sc files sequentially...")

    rows = []
    n_compile_ok = n_match = n_no_orig = 0
    for i, name in enumerate(sc_files, 1):
        r = compile_one(work, name, args.bin_dir)
        rows.append(r)
        if r["compile_ok"]:
            n_compile_ok += 1
        if r["byte_match"]:
            n_match += 1
        if not r["has_original"]:
            n_no_orig += 1
        if i % 50 == 0 or i == len(sc_files):
            print(
                f"  {i}/{len(sc_files)}  ok={n_compile_ok}  match={n_match}  no_orig={n_no_orig}"
            )

    with args.report_csv.open("w", newline="", encoding="utf-8") as f:
        w = csv.DictWriter(f, fieldnames=list(rows[0].keys()))
        w.writeheader()
        w.writerows(rows)
    print(f"Report -> {args.report_csv}")
    print(
        f"Summary: total={len(sc_files)}  compile_ok={n_compile_ok}  "
        f"byte_match={n_match}  no_original={n_no_orig}"
    )
    return 0


if __name__ == "__main__":
    sys.exit(main())
