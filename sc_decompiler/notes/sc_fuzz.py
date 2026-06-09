"""SC-variant fuzzer: mutate AST of failing .sc until scomp-compiled bin matches ORIG.

Strategy:
1. lift .bin → ScFile (AST).
2. compile current ScFile via scomp.exe → bin'.
3. Compare bin' to ORIG byte-wise. If identical, save.
4. Else, identify the FUNCTION whose bytecode differs and apply mutations
   (greedy, one mutation at a time) to that function's AST.
5. Re-emit + recompile + check. Keep improvements.

Mutations tried (in order):
  M1: OpIf cond `ENId(X)` ↔ `ENOp1(NOTNULL, ENId(X))` ↔ `ENOp1(NOT, ENOp1(NULL, ENId(X)))`
  M2: OpIf cond `ENOp1(NOT, ENId(X))` ↔ `ENOp1(NULL, ENId(X))`
  M3: while-cond comma fold: `expr_stmt; while (cond)` → `while (expr_stmt, cond)`
  M4: `if (X) {} else { body }` ↔ `if (!X) { body }`

Usage:
  python pathologic_re/sc_decompiler/notes/sc_fuzz.py <file.bin>
"""
from __future__ import annotations

import argparse
import copy
import os
import sys
from pathlib import Path

PROJ_ROOT = Path(__file__).resolve().parents[3]
PARSER_LIB = PROJ_ROOT / "pathologic_re" / "parser" / "lib"

if str(PARSER_LIB) not in sys.path:
    sys.path.insert(0, str(PARSER_LIB))
if str(PROJ_ROOT) not in sys.path:
    sys.path.insert(0, str(PROJ_ROOT))

from pathologic_re.sc_decompiler.lift.lifter import lift_bin  # noqa: E402
from pathologic_re.sc_decompiler.emit.emitter import emit_sc  # noqa: E402
from pathologic_re.sc_decompiler.verify.scomp_runner import compile_sc_text  # noqa: E402
from pathologic_re.sc_decompiler.ast import (  # noqa: E402
    OpIf, OpFor, OpWhile, OpDoWhile, OpBlock, OpExprStmt,
    ENOp1, ENId, Op1Type,
)


def collect_opifs(block, out=None):
    """Recursively collect all OpIf nodes (with parent block reference)."""
    if out is None:
        out = []
    for op in block.ops:
        if isinstance(op, OpIf):
            out.append(op)
            collect_opifs(op.then_block, out)
            if op.else_block:
                collect_opifs(op.else_block, out)
        elif isinstance(op, OpFor):
            collect_opifs(op.init, out)
            collect_opifs(op.body, out)
        elif isinstance(op, (OpWhile, OpDoWhile)):
            collect_opifs(op.body, out)
        elif isinstance(op, OpBlock):
            collect_opifs(op, out)
    return out


def cond_variants(cond):
    """Yield alternate cond expressions semantically-equivalent for bool/object."""
    yield cond  # the original
    if isinstance(cond, ENId):
        yield ENOp1(Op1Type.NOTNULL, cond)
        yield ENOp1(Op1Type.NOT, ENOp1(Op1Type.NULL, cond))
    elif isinstance(cond, ENOp1) and cond.op == Op1Type.NOT:
        inner = cond.node
        if isinstance(inner, ENId):
            yield ENOp1(Op1Type.NULL, inner)
        # !ENOp1(NULL, x) → x != null  (= NOTNULL)
        if isinstance(inner, ENOp1) and inner.op == Op1Type.NULL:
            yield ENOp1(Op1Type.NOTNULL, inner.node)
    elif isinstance(cond, ENOp1) and cond.op == Op1Type.NULL:
        # x == null → !(x != null)  (also semantically same)
        yield ENOp1(Op1Type.NOT, ENOp1(Op1Type.NOTNULL, cond.node))
    elif isinstance(cond, ENOp1) and cond.op == Op1Type.NOTNULL:
        yield ENOp1(Op1Type.NOT, ENOp1(Op1Type.NULL, cond.node))


def try_compile(sc, name):
    text = emit_sc(sc)
    r = compile_sc_text(text, stem=name)
    if not r.ok:
        return None
    return r.bin_bytes


def fuzz(bin_path: Path) -> bool:
    target = bin_path.read_bytes()
    print(f"target size: {len(target)} bytes")
    sc = lift_bin(str(bin_path), is_alpha=False)

    current_bin = try_compile(sc, bin_path.stem)
    if current_bin is None:
        print("BASE FAILS: scomp won't compile current lift")
        return False
    if current_bin == target:
        print("ALREADY MATCHES — no fuzz needed")
        return True
    base_diff = first_diff(current_bin, target)
    print(f"base diff at byte 0x{base_diff:x}, len ours={len(current_bin)} target={len(target)}")

    # Greedy: walk all OpIfs, try each variant; keep if matches OR closer to match.
    best_score = (len(target) - len(current_bin)) if current_bin else float("-inf")
    best_diff = base_diff
    n_tries = 0

    # Collect all OpIfs across all functions.
    all_ifs = []
    for t in sc.tasks:
        for f in t.funcs:
            all_ifs.extend(collect_opifs(f.body))
    for f in sc.global_funcs:
        all_ifs.extend(collect_opifs(f.body))

    print(f"got {len(all_ifs)} OpIfs to try variants on")

    max_passes = 5
    for pass_num in range(max_passes):
        any_improved = False
        for idx, ifnode in enumerate(all_ifs):
            # Mutation #1: cond variants.
            original_cond = ifnode.cond
            local_best_diff = best_diff
            local_best_score = best_score
            local_best_action = None  # (kind, payload)
            for variant in cond_variants(original_cond):
                if variant is original_cond:
                    continue
                ifnode.cond = variant
                n_tries += 1
                cur = try_compile(sc, bin_path.stem)
                if cur == target:
                    print(f"MATCH at if[{idx}] cond-variant (pass {pass_num})")
                    out = bin_path.with_suffix(".sc")
                    out.write_text(emit_sc(sc), encoding="utf-8")
                    return True
                if cur is None:
                    continue
                new_diff = first_diff(cur, target)
                new_score = (len(target) - len(cur))
                if new_diff > local_best_diff or (new_diff == local_best_diff and abs(new_score) < abs(local_best_score)):
                    local_best_diff = new_diff
                    local_best_score = new_score
                    local_best_action = ("cond", variant)
            ifnode.cond = original_cond

            # Mutation #2: if-else inversion (swap branches + negate cond).
            if ifnode.else_block is not None and ifnode.then_block.ops and ifnode.else_block.ops:
                orig_then = ifnode.then_block
                orig_else = ifnode.else_block
                orig_cond = ifnode.cond
                # Apply inversion
                if isinstance(orig_cond, ENOp1) and orig_cond.op == Op1Type.NOT:
                    new_cond = orig_cond.node
                else:
                    new_cond = ENOp1(Op1Type.NOT, orig_cond)
                ifnode.cond = new_cond
                ifnode.then_block = orig_else
                ifnode.else_block = orig_then
                n_tries += 1
                cur = try_compile(sc, bin_path.stem)
                if cur == target:
                    print(f"MATCH at if[{idx}] if-else swap (pass {pass_num})")
                    out = bin_path.with_suffix(".sc")
                    out.write_text(emit_sc(sc), encoding="utf-8")
                    return True
                if cur is not None:
                    new_diff = first_diff(cur, target)
                    new_score = (len(target) - len(cur))
                    if new_diff > local_best_diff or (new_diff == local_best_diff and abs(new_score) < abs(local_best_score)):
                        local_best_diff = new_diff
                        local_best_score = new_score
                        local_best_action = ("swap", (orig_cond, orig_then, orig_else, new_cond))
                # revert
                ifnode.cond = orig_cond
                ifnode.then_block = orig_then
                ifnode.else_block = orig_else

            # Mutation #3: empty-then ↔ collapsed `if (!X) { body }` toggle.
            if (ifnode.else_block is not None
                    and not ifnode.then_block.ops
                    and ifnode.else_block.ops):
                orig_cond = ifnode.cond
                orig_else = ifnode.else_block
                if isinstance(orig_cond, ENOp1) and orig_cond.op == Op1Type.NOT:
                    new_cond = orig_cond.node
                else:
                    new_cond = ENOp1(Op1Type.NOT, orig_cond)
                ifnode.cond = new_cond
                ifnode.then_block = orig_else
                ifnode.else_block = None
                n_tries += 1
                cur = try_compile(sc, bin_path.stem)
                if cur == target:
                    print(f"MATCH at if[{idx}] empty-then collapse (pass {pass_num})")
                    out = bin_path.with_suffix(".sc")
                    out.write_text(emit_sc(sc), encoding="utf-8")
                    return True
                if cur is not None:
                    new_diff = first_diff(cur, target)
                    new_score = (len(target) - len(cur))
                    if new_diff > local_best_diff or (new_diff == local_best_diff and abs(new_score) < abs(local_best_score)):
                        local_best_diff = new_diff
                        local_best_score = new_score
                        local_best_action = ("collapse_empty_then", (orig_cond, orig_else))
                # revert
                ifnode.cond = orig_cond
                ifnode.then_block = OpBlock(ops=[])
                ifnode.else_block = orig_else

            # Apply the best action if any.
            if local_best_action is not None and local_best_diff > best_diff:
                kind, payload = local_best_action
                if kind == "cond":
                    ifnode.cond = payload
                elif kind == "swap":
                    _, _, _, new_cond = payload
                    ifnode.cond = new_cond
                    ifnode.then_block, ifnode.else_block = ifnode.else_block, ifnode.then_block
                elif kind == "collapse_empty_then":
                    orig_cond, orig_else = payload
                    if isinstance(orig_cond, ENOp1) and orig_cond.op == Op1Type.NOT:
                        ifnode.cond = orig_cond.node
                    else:
                        ifnode.cond = ENOp1(Op1Type.NOT, orig_cond)
                    ifnode.then_block = orig_else
                    ifnode.else_block = None
                best_diff = local_best_diff
                best_score = local_best_score
                any_improved = True
                print(f"  pass {pass_num} if[{idx}] {kind}: diff now 0x{best_diff:x}")
        if not any_improved:
            print(f"pass {pass_num}: no improvements, stopping")
            break

    cur = try_compile(sc, bin_path.stem)
    final_diff = first_diff(cur, target)
    print(f"after {n_tries} tries: final diff at 0x{final_diff:x} (size ours={len(cur)} target={len(target)})")
    # Always write the final .sc — even if not matching, it's the best we got
    out = bin_path.with_suffix(".sc")
    out.write_text(emit_sc(sc), encoding="utf-8")
    return cur == target


def first_diff(a, b):
    """Return first byte offset where a differs from b."""
    if a is None or b is None:
        return -1
    for i in range(min(len(a), len(b))):
        if a[i] != b[i]:
            return i
    if len(a) != len(b):
        return min(len(a), len(b))
    return -1  # identical


def main(argv=None):
    ap = argparse.ArgumentParser()
    ap.add_argument("file", help="Path to .bin to fuzz")
    args = ap.parse_args(argv)
    p = Path(args.file).resolve()
    if not p.is_absolute():
        p = (PROJ_ROOT / args.file).resolve()
    ok = fuzz(p)
    print("OK" if ok else "FAIL")
    return 0 if ok else 1


if __name__ == "__main__":
    sys.exit(main())
