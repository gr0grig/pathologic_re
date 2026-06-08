"""CLI: decompile a single .bin to .sc, optionally round-trip-check it.

Usage:
    python -m sc_decompiler path/to/file.bin                   # writes file.sc
    python -m sc_decompiler file.bin -o /tmp/file.sc           # explicit out
    python -m sc_decompiler file.bin --roundtrip               # also compile+compare
    python -m sc_decompiler file.bin --roundtrip -v            # show emitted .sc
"""

from __future__ import annotations

import argparse
import sys
from pathlib import Path

from .emit import emit_sc
from .lift import lift_bin
from .lift.lifter import LiftError
from .verify.scomp_runner import compile_sc_text


def _cmd_one(bin_path: Path, out: Path, roundtrip: bool, verbose: bool) -> int:
    try:
        ast = lift_bin(str(bin_path))
    except LiftError as e:
        print(f"LIFT FAILED: {e}", file=sys.stderr)
        return 3
    sc_text = emit_sc(ast)
    out.write_text(sc_text, encoding="utf-8")
    print(f"-> {out}")
    if verbose:
        print("--- emitted .sc ---")
        print(sc_text)
    if not roundtrip:
        return 0
    result = compile_sc_text(sc_text, stem=bin_path.stem)
    if not result.ok:
        print(f"SCOMP FAILED: {result.error_msg}", file=sys.stderr)
        print(result.stdout, file=sys.stderr)
        return 4
    original = bin_path.read_bytes()
    if result.bin_bytes == original:
        print(f"BYTE-IDENTICAL: {len(original)} bytes")
        return 0
    print(f"BYTE MISMATCH: ours={len(result.bin_bytes)} orig={len(original)}")
    for i, (a, b) in enumerate(zip(result.bin_bytes, original)):
        if a != b:
            print(f"  first diff at offset 0x{i:x}: ours=0x{a:02x} orig=0x{b:02x}")
            break
    return 5


def main(argv=None) -> int:
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument("input", type=Path, help=".bin file to decompile")
    p.add_argument("-o", "--output", type=Path, help="output .sc path (default: same dir as input)")
    p.add_argument("--roundtrip", action="store_true", help="compile the emitted .sc and compare to input")
    p.add_argument("-v", "--verbose", action="store_true")
    args = p.parse_args(argv)

    out = args.output or args.input.with_suffix(".sc")
    return _cmd_one(args.input, out, args.roundtrip, args.verbose)


if __name__ == "__main__":
    sys.exit(main())
