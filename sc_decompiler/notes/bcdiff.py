"""Disassemble-and-diff: compile our lifted .sc, then show the first diverging
bytecode instructions between ORIG .bin and our compiled .bin.

Usage:
  python pathologic_re/sc_decompiler/notes/bcdiff.py <name>   # e.g. ui_apparatus
"""
from __future__ import annotations
import sys
from pathlib import Path

PROJ_ROOT = Path(__file__).resolve().parents[3]
PARSER_LIB = PROJ_ROOT / "pathologic_re" / "parser" / "lib"
for p in (str(PARSER_LIB), str(PROJ_ROOT)):
    if p not in sys.path:
        sys.path.insert(0, p)

import PathologicScript as PS  # noqa: E402
from pathologic_re.sc_decompiler.lift.lifter import lift_bin  # noqa: E402
from pathologic_re.sc_decompiler.emit.emitter import emit_sc  # noqa: E402
from pathologic_re.sc_decompiler.verify.scomp_runner import compile_sc_text  # noqa: E402


def instrs_of(path):
    PS.IS_ALPHA = False
    s = PS.PathologicScript(path)
    return s.code.instr


def instrs_of_bytes(data: bytes, stem):
    tmp = Path("/tmp") / f"_bcdiff_{stem}.bin"
    tmp.write_bytes(data)
    return instrs_of(str(tmp))


def fmt(ins):
    return f"{ins!r}"


def main():
    name = sys.argv[1]
    if not name.endswith(".bin"):
        name += ".bin"
    binp = PROJ_ROOT / "2005" / "Scripts" / name
    orig = binp.read_bytes()
    sc = lift_bin(str(binp), is_alpha=False)
    text = emit_sc(sc)
    r = compile_sc_text(text, stem=Path(name).stem)
    if not r.ok:
        print("SCOMP FAIL:", r.error_msg)
        return
    comp = r.bin_bytes
    print(f"orig={len(orig)} comp={len(comp)} delta={len(comp)-len(orig):+d}")
    # byte diff
    fd = None
    for i in range(min(len(orig), len(comp))):
        if orig[i] != comp[i]:
            fd = i
            break
    print("first byte diff:", hex(fd) if fd is not None else "none(prefix)")

    oi = instrs_of(str(binp))
    ci = instrs_of_bytes(comp, Path(name).stem)
    print(f"orig instrs={len(oi)} comp instrs={len(ci)}")
    # walk in parallel, find first diverging index by FULL repr (operands
    # included).  NOTE: a class-only comparison MASKS operand diffs such as
    # Jump/Call target off-by-ones and pool-offset shifts — which are exactly
    # the kind of bug in the structurally-close files.  Use --class to fall
    # back to class-only (skips downstream target-shift noise).
    class_only = "--class" in sys.argv
    n = min(len(oi), len(ci))
    div = None
    for i in range(n):
        if class_only:
            differ = type(oi[i].opcode).__name__ != type(ci[i].opcode).__name__
        else:
            differ = repr(oi[i]) != repr(ci[i])
        if differ:
            div = i
            break
    if div is None:
        print("instruction streams identical for", n, "instrs; diff is in header/pool")
        div = 0
    print(f"first diverging instr index: {div}")
    ctx = next((int(a) for a in sys.argv[2:] if a.isdigit()), 14)
    lo = max(0, div - ctx)
    hi = min(n, div + ctx)
    print("=== ORIG ===            === COMP ===")
    for i in range(lo, max(hi, min(len(oi), div+ctx))):
        o = fmt(oi[i]) if i < len(oi) else "---"
        c = fmt(ci[i]) if i < len(ci) else "---"
        mark = "  <<<" if (i < len(oi) and i < len(ci) and repr(oi[i]) != repr(ci[i])) else ""
        print(f"O {o}")
        print(f"C {c}{mark}")


if __name__ == "__main__":
    main()
