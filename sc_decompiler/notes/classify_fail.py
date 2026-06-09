"""Classify every failing file (BIN_MISMATCH / SCOMP_ERROR / LIFT_ERROR) by a
coarse signature, to find the largest single-cause sub-cluster for a focused fix.

Signatures:
  LIFT:<first-words-of-error>
  SCOMP:<first-words>
  MM:jumptgt   - bytecode instr streams identical except Jump/Call TARGET operands
                 (the off-by-one loop-framing / region-CFG family)
  MM:structural-<origOpcode>/<compOpcode>  - first opcode-class divergence
  MM:pool      - instruction streams fully identical (pool/header/patch only)

Usage: python pathologic_re/sc_decompiler/notes/classify_fail.py [report.csv]
"""
from __future__ import annotations
import csv
import sys
import collections
from pathlib import Path

PROJ = Path(__file__).resolve().parents[3]
for p in (str(PROJ / "pathologic_re" / "parser" / "lib"), str(PROJ)):
    if p not in sys.path:
        sys.path.insert(0, p)

import PathologicScript as PS  # noqa: E402
from pathologic_re.sc_decompiler.lift.lifter import lift_bin, LiftError  # noqa: E402
from pathologic_re.sc_decompiler.emit.emitter import emit_sc  # noqa: E402
from pathologic_re.sc_decompiler.verify.scomp_runner import compile_sc_text  # noqa: E402

BIN_DIR = PROJ / "2005" / "Scripts"


def instrs(data: bytes, stem: str):
    p = Path("/tmp") / f"_cf_{stem}.bin"
    p.write_bytes(data)
    PS.IS_ALPHA = False
    return PS.PathologicScript(str(p)).code.instr


def sig_for(name: str) -> str:
    binp = BIN_DIR / name
    try:
        ast = lift_bin(str(binp), is_alpha=False)
    except LiftError as e:
        return "LIFT:" + " ".join(str(e).split()[:4])
    except Exception as e:  # noqa: BLE001
        return f"LIFT-EXC:{type(e).__name__}"
    try:
        sc = emit_sc(ast)
        r = compile_sc_text(sc, stem=binp.stem)
    except Exception as e:  # noqa: BLE001
        return f"EMIT-EXC:{type(e).__name__}"
    if not r.ok:
        return "SCOMP:" + " ".join((r.error_msg or "").split()[2:6])
    o = binp.read_bytes()
    c = r.bin_bytes
    if c == o:
        return "OK"
    oi = PS.PathologicScript(str(binp)).code.instr
    ci = instrs(c, binp.stem)
    if len(oi) != len(ci):
        return "MM:instrcount"
    # opcode-class divergence?
    classdiv = None
    reprdiv = None
    for i in range(len(oi)):
        if type(oi[i].opcode).__name__ != type(ci[i].opcode).__name__:
            classdiv = (type(oi[i].opcode).__name__, type(ci[i].opcode).__name__)
            break
        if repr(oi[i]) != repr(ci[i]) and reprdiv is None:
            reprdiv = i
    if classdiv is not None:
        return f"MM:struct-{classdiv[0]}->{classdiv[1]}"
    if reprdiv is None:
        return "MM:pool"   # instr streams identical, only pool/patch differ
    # same opcode classes throughout, but some operand (Jump/Call target) differs
    return "MM:jumptgt"


def main():
    rep = sys.argv[1] if len(sys.argv) > 1 else "tmp_diff/rt87.csv"
    rows = [r for r in csv.DictReader(open(rep)) if r["status"] != "OK_ROUNDTRIP"]
    buckets = collections.Counter()
    examples: dict = {}
    for i, r in enumerate(rows):
        s = sig_for(r["name"])
        buckets[s] += 1
        examples.setdefault(s, []).append(r["name"][:-4])
        if (i + 1) % 20 == 0:
            print(f"  ...{i+1}/{len(rows)}", file=sys.stderr)
    print(f"\n=== {len(rows)} failing files, by signature ===")
    for s, n in buckets.most_common():
        ex = ", ".join(examples[s][:3])
        print(f"{n:4d}  {s:40s}  e.g. {ex}")


if __name__ == "__main__":
    main()
