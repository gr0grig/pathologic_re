"""Hand-built AST round-trip test for the simplest .bin in the corpus.

This verifies the emitter end-to-end before we have a lifter: we construct
the SC-AST that we believe corresponds to `scene_factory_klara.bin`, emit
it as .sc text, compile via scomp.exe, and check byte-equality with the
original .bin.

Reference dump (alpha disasm, HD-format opcodes):

    GlobalVarCount = 0
    Import: Hold (0 args)
    GlobalTasks:
        GTASK_0  Params = 0
            EVENT_6 Op = 0x4

    0x0: @ Hold()
    0x1: Pop(0)
    0x2: GOTO 0x0
    0x3: Return(); Pop(0)
    0x4: Return(); Pop(0)
"""

from __future__ import annotations

import sys
from pathlib import Path

# allow running this file directly: add project root to sys.path
ROOT = Path(__file__).resolve().parents[2]
sys.path.insert(0, str(ROOT))

from sc_decompiler.ast import (
    EventDecl, Function, OpBlock, OpExprStmt, OpFor, OpReturn,
    ScFile, Task, VarType, ENFuncExtern,
)
from sc_decompiler.emit import emit_sc
from sc_decompiler.verify.scomp_runner import compile_sc_text


ORIGINAL_BIN = Path(r"C:\Users\user\Desktop\Pathologic\2005\Scripts\scene_factory_klara.bin")


def build_ast() -> ScFile:
    init = Function(
        name="init",
        return_type=VarType.VOID,
        args=[],
        body=OpBlock(ops=[
            OpFor(
                init=OpBlock(ops=[]),
                cond=None,
                loop=None,
                body=OpBlock(ops=[
                    OpExprStmt(expr=ENFuncExtern(name="Hold", args=[])),
                ]),
            ),
        ]),
    )
    evt_6 = Function(
        name="evt_6",
        return_type=VarType.VOID,
        args=[],
        body=OpBlock(ops=[]),
    )
    main_task = Task(
        name="t0",
        is_main=True,
        base=None,
        vars=[],
        funcs=[init, evt_6],
    )
    return ScFile(
        events=[EventDecl(name="evt_6", event_id=6)],
        tasks=[main_task],
    )


def main() -> int:
    ast = build_ast()
    sc_text = emit_sc(ast)
    print("--- emitted .sc ---")
    print(sc_text)
    print("--- compiling ---")
    result = compile_sc_text(sc_text, stem="scene_factory_klara")
    if not result.ok:
        print(f"COMPILE FAILED: {result.error_msg}")
        print("stdout:", result.stdout)
        return 1
    original = ORIGINAL_BIN.read_bytes()
    if result.bin_bytes == original:
        print(f"BYTE-IDENTICAL: {len(original)} bytes")
        return 0
    print(f"BYTE MISMATCH: ours={len(result.bin_bytes)} orig={len(original)}")
    # Show first divergence
    for i, (a, b) in enumerate(zip(result.bin_bytes, original)):
        if a != b:
            print(f"  first diff at offset 0x{i:x}: ours=0x{a:02x} orig=0x{b:02x}")
            break
    return 2


if __name__ == "__main__":
    sys.exit(main())
