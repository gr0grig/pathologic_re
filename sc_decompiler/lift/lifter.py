"""Lift PathologicScript (.bin parse) into an SC-AST (ScFile).

Stack-simulating lifter.  Walks each function's instructions in order while
maintaining a simulated stack of AST expression nodes.  Each opcode handler
either pushes a new expression, consumes existing ones, or completes a
statement and appends it to the current block.

Naming conventions for slots we synthesise:
    args        a0, a1, ...           function parameters
    locals      L0, L1, ...           allocated by INSTR_PUSHV at function entry
    task vars   tv0, tv1, ...         task-scope variables
    globals     g0, g1, ...           (or the embedded `property` name)
    discovered  f_<addr>@<argc><ret>  internal CALL targets

The lifter raises LiftError when it sees a bytecode pattern it does not yet
know how to invert.  The batch verifier groups by error string so we can
prioritise the next pattern to implement.
"""

from __future__ import annotations

import os
import sys
from typing import Dict, List, Optional, Tuple

# Reuse the existing .bin parser library.
_PARSER_LIB = os.path.join(
    os.path.dirname(os.path.dirname(os.path.dirname(os.path.abspath(__file__)))),
    "parser", "lib",
)
if _PARSER_LIB not in sys.path:
    sys.path.insert(0, _PARSER_LIB)

import PathologicScript as PS

from ..ast import (
    AssignType, EventDecl, Function, GlobalVar, Op1Type, Op2Type, Op3Type, OpBlock,
    OpBreak, OpContinue, OpDisableEvent, OpDoWhile, OpEnableEvent, OpExprStmt,
    OpFor, OpIf, OpReturn, OpVar, OpWhile, ScFile, Task, VarType,
    ENAssign, ENAssignStruct, ENBool, ENFloat, ENFunc, ENFuncExtern, ENFuncGlobal,
    ENFuncSuper, ENId, ENIdStruct, ENInt, ENOp1, ENOp2, ENOp3, ENString, ENTask,
    ENTypeC, ENVector,
)


class LiftError(Exception):
    """Raised when we hit a pattern the lifter does not yet support."""


# Map event IDs to their canonical names from std.sci (pathologic_re/docs/events_2005.md).
# When a script's event id matches one of these, we emit the documented name
# instead of the synthetic `evt_<id>` — this matches what the original .sc
# source had and (since names are arbitrary) doesn't affect bytecode output.
_STD_EVENT_NAMES = {
    0: "OnUse", 1: "OnSee", 2: "OnStopSee", 3: "OnHear", 4: "OnStopHear",
    5: "OnLoad", 6: "OnUnload", 7: "OnTimer", 8: "OnRegionChange",
    9: "OnGameTime", 10: "OnCollision",
    # 11 has no script alias (CGameDialogReply) — keep evt_11
    12: "OnMusicChange",
    13: "OnPlayerStartShooting", 14: "OnPlayerStopShooting",
    15: "OnPlayerHolsterWeapon", 16: "OnPropertyChange",
    17: "OnAttacked", 18: "OnAction", 19: "OnPlayerLand",
    20: "OnPlayerStartWalking", 21: "OnPlayerStopWalking",
    22: "OnHit", 23: "OnIntersection", 24: "OnKeyDown", 25: "OnKeyUp",
    26: "OnTrigger", 27: "OnStopIntersection", 28: "OnActorStuck",
    # 29 unused
    30: "OnPlayerDamage", 31: "OnReputationChange", 32: "OnDispose",
    33: "OnInventoryAddItem", 34: "OnInventoryRemoveItem",
    35: "OnInventorySelChange",
    36: "OnPlayerStartAltShooting", 37: "OnPlayerStopAltShooting",
    38: "OnClearPath", 39: "OnFallDamage", 40: "OnSteal",
    41: "OnDeath", 42: "OnMessage", 43: "OnHit2",
    44: "OnPlayerEnemy", 45: "OnLSHAnimationEnd",
    1000: "OnConsole",
}

# UI events from UI/ui_events.sci — a SEPARATE numbering space.  Some IDs
# overlap numerically with game events but have completely different
# semantics (CUIWindow dispatch vs CGame*).  We tell game from UI scripts by
# the presence of UI-exclusive IDs (100/101/102/200/201) anywhere in the
# script — if any appear, treat ALL event IDs in this script as UI events.
_UI_EVENT_NAMES = {
    0: "OnDraw", 1: "OnUpdate",
    2: "OnLButtonDown", 3: "OnLButtonUp",
    4: "OnMButtonDown", 5: "OnMButtonUp",
    6: "OnRButtonDown", 7: "OnRButtonUp",
    8: "OnMouseMove", 9: "OnMouseEnter", 10: "OnMouseLeave",
    11: "OnDragBegin", 12: "OnDragEnd", 13: "OnDrop",
    14: "OnDestroyWindow", 15: "OnMouseWheel", 16: "OnCursorWndChange",
    100: "OnChar", 101: "OnKeyDown", 102: "OnKeyUp",
    200: "OnMessage", 201: "OnGameMessage",
}
_UI_EXCLUSIVE_IDS = {100, 101, 102, 200, 201}


def _is_ui_script(event_ids: List[int], source_path: Optional[str]) -> bool:
    if any(eid in _UI_EXCLUSIVE_IDS for eid in event_ids):
        return True
    if source_path:
        import os
        name = os.path.basename(source_path).lower()
        if name.startswith("ui_") or name.startswith("hud_") or "/ui/" in source_path.lower():
            return True
    return False


def _make_event_namer(event_ids: List[int], source_path: Optional[str] = None):
    """Return a function `event_id -> name` for this script — UI or game."""
    if _is_ui_script(event_ids, source_path):
        table = _UI_EVENT_NAMES
    else:
        table = _STD_EVENT_NAMES
    def namer(eid: int) -> str:
        return table.get(eid, f"evt_{eid}")
    return namer


def _not_expr(e):
    """Construct `!e` with peephole NOT(NOT(x)) → x simplification.

    Both forms compile to the same bytecode in scomp (NOT folds back), but
    keeping the source tidy means our `.sc` matches the original `.sc`
    shape more often and also produces cleaner round-trip output."""
    if isinstance(e, ENOp1) and e.op == Op1Type.NOT:
        return e.node
    return ENOp1(Op1Type.NOT, e)


def _expr_refs_name(expr, name: str) -> bool:
    """Walk expression tree looking for ENId / ENIdStruct / ENAssign[Struct]
    referencing `name`."""
    if expr is None:
        return False
    if isinstance(expr, ENId):
        return expr.name == name
    if isinstance(expr, ENIdStruct):
        return expr.name == name
    if isinstance(expr, ENAssign):
        if expr.name == name:
            return True
        return _expr_refs_name(expr.expr, name)
    if isinstance(expr, ENAssignStruct):
        if expr.name == name:
            return True
        return _expr_refs_name(expr.expr, name)
    if isinstance(expr, ENOp1):
        return _expr_refs_name(expr.node, name)
    if isinstance(expr, ENOp2):
        return _expr_refs_name(expr.left, name) or _expr_refs_name(expr.right, name)
    if isinstance(expr, ENOp3):
        return (_expr_refs_name(expr.a, name) or _expr_refs_name(expr.b, name)
                or _expr_refs_name(expr.c, name))
    if isinstance(expr, (ENFunc, ENFuncExtern, ENFuncGlobal, ENFuncSuper)):
        for a in expr.args:
            if _expr_refs_name(a, name):
                return True
        if isinstance(expr, ENFunc) and getattr(expr, "obj", None) is not None:
            if _expr_refs_name(expr.obj, name):
                return True
        return False
    if isinstance(expr, ENTask):
        for a in expr.args:
            if _expr_refs_name(a, name):
                return True
        return False
    if isinstance(expr, ENTypeC):
        return _expr_refs_name(expr.node, name)
    return False


def _op_refs_name(op, name: str) -> bool:
    """True iff statement `op` (or any nested statement) references `name`."""
    if isinstance(op, OpExprStmt):
        return _expr_refs_name(op.expr, name)
    if isinstance(op, OpReturn):
        return _expr_refs_name(op.expr, name)
    if isinstance(op, OpIf):
        if _expr_refs_name(op.cond, name):
            return True
        if any(_op_refs_name(s, name) for s in op.then_block.ops):
            return True
        if op.else_block and any(_op_refs_name(s, name) for s in op.else_block.ops):
            return True
        return False
    if isinstance(op, OpFor):
        return (any(_op_refs_name(s, name) for s in op.init.ops)
                or _expr_refs_name(op.cond, name)
                or _expr_refs_name(op.loop, name)
                or any(_op_refs_name(s, name) for s in op.body.ops))
    if isinstance(op, OpWhile):
        return (_expr_refs_name(op.cond, name)
                or any(_op_refs_name(s, name) for s in op.body.ops))
    if isinstance(op, OpDoWhile):
        return (_expr_refs_name(op.cond, name)
                or any(_op_refs_name(s, name) for s in op.body.ops))
    if isinstance(op, OpBlock):
        return any(_op_refs_name(s, name) for s in op.ops)
    return False


def _find_using_blocks(parent_block: OpBlock, name: str) -> List[OpBlock]:
    """Return the child OpBlock(s) of `parent_block` that contain references
    to `name`.  Returns multiple if more than one sibling references it."""
    using = []
    for op in parent_block.ops:
        # Inspect the immediate child blocks of each compound op.
        if isinstance(op, OpIf):
            if _expr_refs_name(op.cond, name):
                return [parent_block]  # cond references → keep at parent
            if any(_op_refs_name(s, name) for s in op.then_block.ops):
                using.append(op.then_block)
            if op.else_block and any(_op_refs_name(s, name) for s in op.else_block.ops):
                using.append(op.else_block)
        elif isinstance(op, OpFor):
            if (any(_op_refs_name(s, name) for s in op.init.ops)
                or _expr_refs_name(op.cond, name)
                or _expr_refs_name(op.loop, name)):
                return [parent_block]
            if any(_op_refs_name(s, name) for s in op.body.ops):
                using.append(op.body)
        elif isinstance(op, (OpWhile, OpDoWhile)):
            if _expr_refs_name(op.cond, name):
                return [parent_block]
            if any(_op_refs_name(s, name) for s in op.body.ops):
                using.append(op.body)
        else:
            # A statement at parent-block level that references `name` means
            # it's used in the parent scope; can't narrow.
            if _op_refs_name(op, name):
                return [parent_block]
    return using


def _narrow_local_scopes(body: OpBlock, local_types: List[VarType],
                         protected_slots: Optional[set] = None) -> None:
    """In-place: move OBJECT-typed OpVar declarations from `body` into the
    innermost child block that contains all references to that local.

    Slot allocation: scomp's ProcessVariables walks the body DFS in source
    order, adding each OpVar it encounters to the local-slot table.  To keep
    slot indices stable, we narrow vars only when the DFS encounter order
    of the resulting decls matches the original `local_types` order.

    Strategy:
      * Collect all function-top OpVars in declaration order.
      * For each OBJECT-typed var that has a single using sub-block, move
        it into that sub-block.
      * After moving, verify the DFS walk reproduces the same type sequence
        as `local_types`.  If not, revert that one move.
    """
    vroot = body
    protected_slots = protected_slots or set()

    def _is_protected(var: OpVar) -> bool:
        """True if `var` is a FUNCTION-scope object (scomp cleans it at fn-end);
        must NOT be narrowed into an inner block."""
        try:
            return (var.name.startswith("L")
                    and int(var.name[1:]) in protected_slots)
        except ValueError:
            return False

    top_vars: List[Tuple[int, OpVar]] = []
    for i, op in enumerate(body.ops):
        if isinstance(op, OpVar):
            top_vars.append((i, op))
        else:
            break

    expected_names = [f"L{i}" for i in range(len(local_types))]
    expected_set = set(expected_names)

    def _dfs_var_types(block: OpBlock) -> List[VarType]:
        """Walk DFS, returning types of FUNCTION-LEVEL OpVars (those whose
        names match the expected L0..L{N-1} sequence).  Inner-scope OpVars
        created during lifting (e.g. for loop-scope locals declared inside
        bodies) get separate names like L7, L8, ... when local_types only
        has 7 entries — those are skipped so the DFS sequence matches the
        function-entry PushV order rather than the full local set."""
        out: List[VarType] = []
        def walk(blk: OpBlock):
            for op in blk.ops:
                if isinstance(op, OpVar):
                    if op.name in expected_set:
                        out.append(op.type)
                elif isinstance(op, OpIf):
                    walk(op.then_block)
                    if op.else_block is not None:
                        walk(op.else_block)
                elif isinstance(op, OpFor):
                    walk(op.init)
                    walk(op.body)
                elif isinstance(op, (OpWhile, OpDoWhile)):
                    walk(op.body)
                elif isinstance(op, OpBlock):
                    walk(op)
        walk(block)
        return out

    def _dfs_var_names(block: OpBlock) -> List[str]:
        """Walk DFS, returning names of FUNCTION-LEVEL OpVars (those in
        the expected L0..L{N-1} set)."""
        out: List[str] = []
        def walk(blk: OpBlock):
            for op in blk.ops:
                if isinstance(op, OpVar):
                    if op.name in expected_set:
                        out.append(op.name)
                elif isinstance(op, OpIf):
                    walk(op.then_block)
                    if op.else_block is not None:
                        walk(op.else_block)
                elif isinstance(op, OpFor):
                    walk(op.init)
                    walk(op.body)
                elif isinstance(op, (OpWhile, OpDoWhile)):
                    walk(op.body)
                elif isinstance(op, OpBlock):
                    walk(op)
        walk(block)
        return out

    # Snapshot the WHOLE body so we can roll back if the final result doesn't
    # preserve slot order.  We walk all OBJECT-typed top vars and try to move
    # each into its single using block; partial intermediate states may
    # temporarily violate the DFS-type invariant, so we only verify at the end.
    def _deep_copy_ops(blk: OpBlock):
        """Save (block, original-ops-list) pairs to allow rollback."""
        out = [(blk, list(blk.ops))]
        for op in blk.ops:
            if isinstance(op, OpIf):
                out.extend(_deep_copy_ops(op.then_block))
                if op.else_block is not None:
                    out.extend(_deep_copy_ops(op.else_block))
            elif isinstance(op, OpFor):
                out.extend(_deep_copy_ops(op.init))
                out.extend(_deep_copy_ops(op.body))
            elif isinstance(op, (OpWhile, OpDoWhile)):
                out.extend(_deep_copy_ops(op.body))
            elif isinstance(op, OpBlock):
                out.extend(_deep_copy_ops(op))
        return out

    snapshot = _deep_copy_ops(vroot)

    def _try_narrow(var: OpVar) -> None:
        if _is_protected(var):
            return
        # Determine var's slot index from its name (L<idx>) — used to detect
        # whether the CURRENT block already contains an OpVar from a LATER
        # slot (placed by an earlier narrow attempt).  In that case we
        # should not descend further: `var` must share depth with the later
        # sibling so DFS visits them in slot order.
        try:
            var_slot = int(var.name[1:]) if var.name.startswith("L") else -1
        except ValueError:
            var_slot = -1
        def _block_has_later_slot_opvar(blk: OpBlock) -> bool:
            for op in blk.ops:
                if isinstance(op, OpVar) and op.name.startswith("L"):
                    try:
                        other = int(op.name[1:])
                    except ValueError:
                        continue
                    if other > var_slot:
                        return True
            return False
        block_chain: List[OpBlock] = [body]
        current = body
        while True:
            using = _find_using_blocks(current, var.name)
            if len(using) != 1:
                break
            if using[0] is current:
                break
            # If we've already descended at least once AND the current block
            # contains a later-slot OpVar from a previous narrow, stop here
            # to preserve DFS slot-order.
            if (var_slot >= 0
                    and current is not body
                    and _block_has_later_slot_opvar(current)):
                break
            current = using[0]
            block_chain.append(current)

        if len(block_chain) <= 1:
            return

        body.ops.remove(var)
        current.ops.insert(0, var)
        # Look for a `var = null;` statement at the TRAILING position of the
        # new scope (= the only thing after it is more `X = null` cleanup
        # statements for other narrowed vars).  Pop it — scomp's auto-
        # cleanup at scope close will emit the SetNull there.  We do NOT
        # pop a `var = null;` in the middle of the block (other code after
        # it indicates the source placed it explicitly at that position).
        idx = len(current.ops) - 1
        while idx >= 0:
            op = current.ops[idx]
            if not isinstance(op, OpExprStmt):
                break
            tail = op.expr
            if not (isinstance(tail, ENAssign) and tail.op == AssignType.NULL):
                break
            if tail.name == var.name:
                current.ops.pop(idx)
                break
            idx -= 1

    # Try narrowing each top var into its single using block.  We narrow
    # ALL types (not just OBJECT) so the DFS slot allocation order is
    # preserved.  scomp's auto-cleanup only fires for OBJECT locals, but
    # narrowing INT/BOOL/etc. is otherwise harmless and helps keep the slot
    # indices stable when an OBJECT local that originally came AFTER them
    # gets narrowed too.
    #
    # Iterate in REVERSE declaration order: each _try_narrow inserts the var
    # at position 0 of its target block, so processing later-declared vars
    # first means earlier-declared vars end up before them — preserving the
    # original declaration sequence inside the destination block.  Also
    # require that each narrowed var sits in the TRAILING position of the
    # remaining function-top decls — narrowing a middle var while leaving
    # later vars at function-top changes the runtime stack layout (the
    # later vars stay at lower slot indices but their relative position to
    # the narrowed var changes).
    remaining_top_obj_count = sum(1 for _, v in top_vars
                                   if v.type == VarType.OBJECT and v.init is None)
    # Try narrowing each var individually, verifying DFS-order after each.
    # Per-attempt verification catches when narrowing one var disrupts the
    # slot allocation order for OTHER vars (= different sub-blocks visited
    # in unexpected order).  We revert per-attempt instead of all-at-end so
    # earlier successful narrows aren't lost when a later one fails.
    for _idx, var in reversed(top_vars):
        if var.init is not None:
            continue
        try:
            cur_pos = body.ops.index(var)
        except ValueError:
            continue
        # All ops after cur_pos at function-top should NOT be OpVars
        # (= var is the LAST OpVar at function top, post-prior-narrows).
        trailing = True
        for op in body.ops[cur_pos + 1:]:
            if isinstance(op, OpVar):
                trailing = False
                break
            else:
                break  # any non-OpVar stops the OpVar prefix
        if not trailing:
            continue
        # Per-attempt snapshot.
        per_attempt = _deep_copy_ops(body)
        _try_narrow(var)
        # Verify this attempt didn't disrupt DFS order globally — match BOTH
        # types (for slot type compatibility) AND names (for slot index
        # mapping: scomp assigns slot k to the k-th OpVar in DFS order).
        if (_dfs_var_types(vroot) != local_types
                or _dfs_var_names(vroot) != expected_names):
            for blk, ops_list in per_attempt:
                blk.ops[:] = ops_list

    # SECOND PASS: try narrowing MID-DECLARATION vars (skipping trailing check).
    # When a later OpVar still at function-top blocks the narrow, provisionally
    # narrow ANYWAY and RELOCATE later OpVars to their first-use positions so
    # DFS order remains intact.  Per-attempt verify reverts if relocation fails.
    # Loop to fixpoint — relocation may unblock another var's narrowing.
    # Cap iterations to N+1 (each iteration narrows at most one var); the cap
    # guards against pathological cases where progress flag isn't reset.
    max_iters = len(top_vars) + 1
    for _ in range(max_iters):
        progress = False
        cur_top: List[OpVar] = []
        for op in body.ops:
            if isinstance(op, OpVar):
                cur_top.append(op)
            else:
                break
        for var in reversed(cur_top):
            if var.init is not None:
                continue
            try:
                cur_pos = body.ops.index(var)
            except ValueError:
                continue
            has_later_top_var = False
            for op in body.ops[cur_pos + 1:]:
                if isinstance(op, OpVar):
                    has_later_top_var = True
                    break
                else:
                    break
            if not has_later_top_var:
                continue
            per_attempt = _deep_copy_ops(body)
            _try_narrow(var)
            if var in body.ops:
                continue
            _relocate_top_decls(body)
            if (_dfs_var_types(vroot) != local_types
                    or _dfs_var_names(vroot) != expected_names):
                for blk, ops_list in per_attempt:
                    blk.ops[:] = ops_list
            else:
                progress = True
                break
        if not progress:
            break

    # THIRD PASS: try narrowing TRAILING vars again — relocation may have
    # unblocked them by moving later OpVars further down.
    for _idx, var in reversed(top_vars):
        if var.init is not None:
            continue
        try:
            cur_pos = body.ops.index(var)
        except ValueError:
            continue
        # All ops after must be non-OpVar (trailing).
        trailing = True
        for op in body.ops[cur_pos + 1:]:
            if isinstance(op, OpVar):
                trailing = False
                break
            else:
                break
        if not trailing:
            continue
        per_attempt = _deep_copy_ops(body)
        _try_narrow(var)
        if (_dfs_var_types(vroot) != local_types
                or _dfs_var_names(vroot) != expected_names):
            for blk, ops_list in per_attempt:
                blk.ops[:] = ops_list

    # FOURTH PASS: BLOCK narrow.  When a contiguous prefix of function-top
    # OpVars ALL have the same single using sub-block, move them as a block
    # into that sub-block (preserving order).  This handles the common case
    # `if (cond) { ...uses L0..LN... }` where each LK can't be individually
    # narrowed (other LKs at top block their trailing) but together they can.
    cur_top_block: List[OpVar] = []
    for op in body.ops:
        if isinstance(op, OpVar):
            cur_top_block.append(op)
        else:
            break
    if len(cur_top_block) >= 2:
        # Find a common single using-block for ALL of them.
        common_block = None
        all_share = True
        for var in cur_top_block:
            if var.init is not None or _is_protected(var):
                all_share = False
                break
            using = _find_using_blocks(body, var.name)
            if len(using) != 1 or using[0] is body:
                all_share = False
                break
            if common_block is None:
                common_block = using[0]
            elif using[0] is not common_block:
                all_share = False
                break
        if all_share and common_block is not None:
            per_attempt = _deep_copy_ops(body)
            # Remove all from body.ops top.
            for var in cur_top_block:
                if var in body.ops:
                    body.ops.remove(var)
            # Insert at start of common_block in original order.
            for i, var in enumerate(cur_top_block):
                common_block.ops.insert(i, var)
            # Strip trailing `var = null;` for each (cleanup auto-emitted by
            # scomp at scope close).
            for var in cur_top_block:
                idx = len(common_block.ops) - 1
                while idx >= 0:
                    op = common_block.ops[idx]
                    if not isinstance(op, OpExprStmt):
                        break
                    tail = op.expr
                    if not (isinstance(tail, ENAssign) and tail.op == AssignType.NULL):
                        break
                    if tail.name == var.name:
                        common_block.ops.pop(idx)
                        break
                    idx -= 1
            # Verify.
            if (_dfs_var_types(vroot) != local_types
                    or _dfs_var_names(vroot) != expected_names):
                for blk, ops_list in per_attempt:
                    blk.ops[:] = ops_list

    # FOURTH-B PASS: contiguous MIDDLE-run block narrow (+ dead-local placement).
    # A maximal run of consecutive function-top OpVars that ALL share the SAME
    # single using sub-block (e.g. L2,L3 used only inside an `if`, while L0,L1
    # stay function-scope and L4.. are used after) is moved together into that
    # block; the remaining top decls are relocated to first-use.  DEAD (unused)
    # non-object top-vars can't be relocated by first-use (no use), so after
    # relocation they are placed at index-adjacency (right after their nearest
    # lower-index decl) so the DFS visit order still reproduces the slot indices.
    # The _is_protected gate (objects scomp cleans at fn-end) + DFS verify keep
    # it correct: only objects ORIG block-scoped get a block-close cleanup;
    # moving dead non-object vars is byte-neutral (no cleanup, alloc by index).
    def _opvar_loc(name: str):
        """(block, index) of the OpVar named `name` in vroot (DFS); or None."""
        def walk(blk: OpBlock):
            for i, op in enumerate(blk.ops):
                if isinstance(op, OpVar) and op.name == name:
                    return (blk, i)
                if isinstance(op, OpIf):
                    r = walk(op.then_block)
                    if r:
                        return r
                    if op.else_block is not None:
                        r = walk(op.else_block)
                        if r:
                            return r
                elif isinstance(op, OpFor):
                    r = walk(op.init) or walk(op.body)
                    if r:
                        return r
                elif isinstance(op, (OpWhile, OpDoWhile)):
                    r = walk(op.body)
                    if r:
                        return r
                elif isinstance(op, OpBlock):
                    r = walk(op)
                    if r:
                        return r
            return None
        return walk(vroot)

    def _place_dead_top_vars(blk: OpBlock):
        top = []
        for op in blk.ops:
            if isinstance(op, OpVar):
                top.append(op)
            else:
                break
        dead = [v for v in top
                if v.type != VarType.OBJECT and v.init is None
                and v.name in expected_set
                and not _find_using_blocks(blk, v.name)]
        for v in dead:
            if v in blk.ops:
                blk.ops.remove(v)

        def _idx(v):
            try:
                return int(v.name[1:]) if v.name.startswith("L") else -1
            except ValueError:
                return -1
        for v in sorted(dead, key=_idx):
            k = _idx(v)
            placed = False
            for p in range(k - 1, -1, -1):
                loc = _opvar_loc(f"L{p}")
                if loc:
                    b2, i = loc
                    b2.ops.insert(i + 1, v)
                    placed = True
                    break
            if not placed:
                blk.ops.insert(0, v)

    def _narrow_runs(blk: OpBlock):
        cur_top_b: List[OpVar] = []
        for op in blk.ops:
            if isinstance(op, OpVar):
                cur_top_b.append(op)
            else:
                break
        # Collect ALL maximal runs (consecutive top OpVars sharing one single
        # using sub-block) first, then apply them together — sibling runs into
        # different sub-blocks are interdependent for DFS slot order (e.g. an
        # `if(c){...L8..L15...}else{...L16,L17...}`: narrowing only one run
        # mis-relocates the other), so verify once after all are moved.
        runs: List[Tuple[OpBlock, List[OpVar]]] = []
        a = 0
        while a < len(cur_top_b):
            var_a = cur_top_b[a]
            if (var_a.init is not None or _is_protected(var_a)
                    or var_a not in blk.ops):
                a += 1
                continue
            ua = _find_using_blocks(blk, var_a.name)
            if len(ua) != 1 or ua[0] is blk:
                a += 1
                continue
            common = ua[0]
            b = a
            while b + 1 < len(cur_top_b):
                nxt = cur_top_b[b + 1]
                if nxt.init is not None or _is_protected(nxt) or nxt not in blk.ops:
                    break
                un = _find_using_blocks(blk, nxt.name)
                if len(un) != 1 or un[0] is not common:
                    break
                b += 1
            runs.append((common, cur_top_b[a:b + 1]))
            a = b + 1
        if not runs:
            return
        per_attempt = _deep_copy_ops(vroot)
        for common, run in runs:
            for var in run:
                if var in blk.ops:
                    blk.ops.remove(var)
            for i, var in enumerate(run):
                common.ops.insert(i, var)
            for var in run:
                _k = len(common.ops) - 1
                while _k >= 0:
                    o = common.ops[_k]
                    if not isinstance(o, OpExprStmt):
                        break
                    t = o.expr
                    if not (isinstance(t, ENAssign) and t.op == AssignType.NULL):
                        break
                    if t.name == var.name:
                        common.ops.pop(_k)
                        break
                    _k -= 1
        _relocate_top_decls(blk)
        _place_dead_top_vars(blk)
        if (_dfs_var_types(vroot) != local_types
                or _dfs_var_names(vroot) != expected_names):
            for b3, ops_list in per_attempt:
                b3.ops[:] = ops_list

    # Apply the run-narrowing to the function body AND recursively to every
    # descendant block (e.g. a contiguous run of locals declared in an else-
    # block but used only inside a for-loop in that else-block — ui_inventory).
    def _runs_recursive(blk: OpBlock):
        _narrow_runs(blk)
        for op in list(blk.ops):
            if isinstance(op, OpIf):
                _runs_recursive(op.then_block)
                if op.else_block is not None:
                    _runs_recursive(op.else_block)
            elif isinstance(op, OpFor):
                _runs_recursive(op.init)
                _runs_recursive(op.body)
            elif isinstance(op, (OpWhile, OpDoWhile)):
                _runs_recursive(op.body)
            elif isinstance(op, OpBlock):
                _runs_recursive(op)
    _runs_recursive(body)

    # FIFTH PASS (recursive): an OBJECT var declared INSIDE a sub-block but used
    # only in a deeper sub-block of it should be narrowed there — scomp scopes it
    # deep and emits its SetNull cleanup at THAT block's close, not the parent's
    # (else we emit an extra parent-close SetNull, e.g. morlok OnUse `object L9`
    # used only in an else-block).  The earlier passes only narrow from function-
    # top; this recurses.  For each block we first relocate its leading decls to
    # first-use (so later-slot siblings used AFTER an inner sub-block move past
    # it, keeping DFS slot order), then move the object var into its single deeper
    # using-block.  Per-attempt global DFS verify+revert keeps slot indices exact.
    def _child_blocks(parent: OpBlock) -> List[OpBlock]:
        out: List[OpBlock] = []
        for op in parent.ops:
            if isinstance(op, OpIf):
                out.append(op.then_block)
                if op.else_block is not None:
                    out.append(op.else_block)
            elif isinstance(op, OpFor):
                out.append(op.init)
                out.append(op.body)
            elif isinstance(op, (OpWhile, OpDoWhile)):
                out.append(op.body)
            elif isinstance(op, OpBlock):
                out.append(op)
        return out

    def _recurse_narrow(parent: OpBlock):
        for cb in _child_blocks(parent):
            objvars = [op for op in cb.ops
                       if isinstance(op, OpVar) and op.type == VarType.OBJECT
                       and op.init is None and op.name in expected_set
                       and not _is_protected(op)]
            for var in objvars:
                using = _find_using_blocks(cb, var.name)
                if len(using) != 1 or using[0] is cb:
                    continue
                per = _deep_copy_ops(vroot)
                _relocate_top_decls(cb)
                target_list = _find_using_blocks(cb, var.name)
                if len(target_list) != 1 or target_list[0] is cb or var not in cb.ops:
                    for blk, ops_list in per:
                        blk.ops[:] = ops_list
                    continue
                target = target_list[0]
                cb.ops.remove(var)
                target.ops.insert(0, var)
                # Strip a trailing `var = null;` in the target (scomp's auto-
                # cleanup at the new scope's close re-emits it).
                _i = len(target.ops) - 1
                while _i >= 0:
                    o = target.ops[_i]
                    if not isinstance(o, OpExprStmt):
                        break
                    t = o.expr
                    if not (isinstance(t, ENAssign) and t.op == AssignType.NULL):
                        break
                    if t.name == var.name:
                        target.ops.pop(_i)
                        break
                    _i -= 1
                if (_dfs_var_types(vroot) != local_types
                        or _dfs_var_names(vroot) != expected_names):
                    for blk, ops_list in per:
                        blk.ops[:] = ops_list
            _recurse_narrow(cb)
    _recurse_narrow(body)

    # Final defensive verify.
    if (_dfs_var_types(vroot) != local_types
            or _dfs_var_names(vroot) != expected_names):
        for blk, ops_list in snapshot:
            blk.ops[:] = ops_list


def _scope_loop_body_locals(root: OpBlock, local_types: List[VarType],
                            protected_slots: Optional[set] = None) -> None:
    """Move declaration-only locals that are used ONLY inside a loop body into
    that loop body, and locals used ONLY after a loop to just after the loop.

    Motivation: scomp emits a per-iteration object SetNull cleanup at a loop
    body's close ONLY for objects whose SCOPE is the loop body.  Our lifter
    often declares such an object in the ENCLOSING block (esp. when the loop is
    nested inside an `if` whose locals all land at the block top), so scomp
    re-generates the cleanup at the WRONG place (block close, after the loop)
    instead of inside the loop — producing an off-by-one Jump target / a missing
    SetNull (the sub-pattern-B family: quest_b4_01_teleport, ui_container, ...).

    Reproducing the original requires the loop-body object to be loop-scoped.
    The move must preserve scomp's slot allocation (slot k = k-th OpVar in DFS
    declaration order), so we ALSO push trailing after-loop-only locals to after
    the loop and verify the global DFS name/type sequence is unchanged; any
    attempt that perturbs it is reverted.
    """
    expected_names = [f"L{i}" for i in range(len(local_types))]
    expected_set = set(expected_names)
    protected_slots = protected_slots or set()

    def _is_protected(var: OpVar) -> bool:
        try:
            return (var.name.startswith("L")
                    and int(var.name[1:]) in protected_slots)
        except ValueError:
            return False

    def _dfs_names(block: OpBlock) -> List[str]:
        out: List[str] = []
        def walk(blk: OpBlock):
            for op in blk.ops:
                if isinstance(op, OpVar):
                    if op.name in expected_set:
                        out.append(op.name)
                elif isinstance(op, OpIf):
                    walk(op.then_block)
                    if op.else_block is not None:
                        walk(op.else_block)
                elif isinstance(op, OpFor):
                    walk(op.init)
                    walk(op.body)
                elif isinstance(op, (OpWhile, OpDoWhile)):
                    walk(op.body)
                elif isinstance(op, OpBlock):
                    walk(op)
        walk(block)
        return out

    def _dfs_types(block: OpBlock) -> List[VarType]:
        out: List[VarType] = []
        def walk(blk: OpBlock):
            for op in blk.ops:
                if isinstance(op, OpVar):
                    if op.name in expected_set:
                        out.append(op.type)
                elif isinstance(op, OpIf):
                    walk(op.then_block)
                    if op.else_block is not None:
                        walk(op.else_block)
                elif isinstance(op, OpFor):
                    walk(op.init)
                    walk(op.body)
                elif isinstance(op, (OpWhile, OpDoWhile)):
                    walk(op.body)
                elif isinstance(op, OpBlock):
                    walk(op)
        walk(block)
        return out

    def _snapshot(blk: OpBlock):
        out = [(blk, list(blk.ops))]
        for op in blk.ops:
            if isinstance(op, OpIf):
                out.extend(_snapshot(op.then_block))
                if op.else_block is not None:
                    out.extend(_snapshot(op.else_block))
            elif isinstance(op, OpFor):
                out.extend(_snapshot(op.init))
                out.extend(_snapshot(op.body))
            elif isinstance(op, (OpWhile, OpDoWhile)):
                out.extend(_snapshot(op.body))
            elif isinstance(op, OpBlock):
                out.extend(_snapshot(op))
        return out

    def _loop_body(L):
        return L.body

    def _header_refs(L, name: str) -> bool:
        if isinstance(L, OpFor):
            return (any(_op_refs_name(s, name) for s in L.init.ops)
                    or _expr_refs_name(L.cond, name)
                    or _expr_refs_name(L.loop, name))
        if isinstance(L, (OpWhile, OpDoWhile)):
            return _expr_refs_name(L.cond, name)
        return False

    # Collect (block, loop_index) pairs across the whole function (top-down).
    def _collect(blk: OpBlock, acc):
        for i, op in enumerate(blk.ops):
            if isinstance(op, (OpFor, OpWhile, OpDoWhile)):
                acc.append((blk, i, op))
        for op in blk.ops:
            if isinstance(op, OpIf):
                _collect(op.then_block, acc)
                if op.else_block is not None:
                    _collect(op.else_block, acc)
            elif isinstance(op, OpFor):
                _collect(op.init, acc)
                _collect(op.body, acc)
            elif isinstance(op, (OpWhile, OpDoWhile)):
                _collect(op.body, acc)
            elif isinstance(op, OpBlock):
                _collect(op, acc)

    changed = True
    guard = 0
    while changed and guard < 200:
        changed = False
        guard += 1
        pairs: list = []
        _collect(root, pairs)
        for blk, _li, L in pairs:
            li = blk.ops.index(L) if L in blk.ops else -1
            if li < 0:
                continue
            body = _loop_body(L)
            lead = [op for op in blk.ops[:li]
                    if isinstance(op, OpVar) and op.init is None]
            if not lead:
                continue
            before_ops = [op for j, op in enumerate(blk.ops)
                          if j < li and not isinstance(op, OpVar)]
            after_ops = blk.ops[li + 1:]
            into_loop = []
            after_loop = []
            for v in lead:
                if _is_protected(v):
                    continue  # function-scope object — keep at fn-top, don't move into loop
                n = v.name
                in_body = any(_op_refs_name(s, n) for s in body.ops)
                in_header = _header_refs(L, n)
                used_before = any(_op_refs_name(o, n) for o in before_ops)
                used_after = any(_op_refs_name(o, n) for o in after_ops)
                if in_body and not in_header and not used_before and not used_after:
                    into_loop.append(v)
                elif used_after and not in_body and not in_header and not used_before:
                    after_loop.append(v)
            if not into_loop:
                continue
            snap = _snapshot(root)
            for v in into_loop + after_loop:
                blk.ops.remove(v)
            for v in reversed(into_loop):
                body.ops.insert(0, v)
            li2 = blk.ops.index(L)
            for k, v in enumerate(after_loop):
                blk.ops.insert(li2 + 1 + k, v)
            if (_dfs_types(root) != local_types
                    or _dfs_names(root) != expected_names):
                for b, ops_list in snap:
                    b.ops[:] = ops_list
            else:
                changed = True
                break


def _relocate_top_decls(body: OpBlock) -> None:
    """Move each function-top OpVar to just before its first reference in
    body.ops.  Only OpVars whose first-use index is BEYOND a later position
    than the next op get moved (no-op if first use is immediately next).

    Used after mid-declaration narrowing to keep DFS visit order matching
    the original slot indices."""
    # Cap iterations to total OpVar count (each iteration moves at most 1).
    initial_top = 0
    for op in body.ops:
        if isinstance(op, OpVar):
            initial_top += 1
        else:
            break
    for _ in range(initial_top + 1):
        moved = False
        top_pairs: List[Tuple[int, OpVar]] = []
        for i, op in enumerate(body.ops):
            if isinstance(op, OpVar):
                top_pairs.append((i, op))
            else:
                break
        for i, var in top_pairs:
            first_use_idx = -1
            for j in range(i + 1, len(body.ops)):
                if _op_refs_name(body.ops[j], var.name):
                    first_use_idx = j
                    break
            if first_use_idx < 0:
                continue
            if first_use_idx > i + 1:
                body.ops.pop(i)
                body.ops.insert(first_use_idx - 1, var)
                moved = True
                break
        if not moved:
            break


def lift_bin(path: str, *, is_alpha: bool = False) -> ScFile:
    PS.IS_ALPHA = is_alpha
    script = PS.PathologicScript(path)
    return _lift_script(script, source_path=path)


# Instruction classes that unambiguously read/write task-scope state.
_TASK_SCOPE_CLASSES = (
    PS.CInstructionMovT,
    PS.CInstructionTMov, PS.CInstructionTMovB, PS.CInstructionTMovI,
    PS.CInstructionTMovF, PS.CInstructionTMovS, PS.CInstructionTMovV,
    PS.CInstructionTMovT,
    PS.CInstructionPushT,
    PS.CInstructionSetNullT,
    PS.CInstructionEventEnable, PS.CInstructionEventDisable,
    PS.CInstructionTObjFunc,   # @@@ task-obj method call (self.Var is task-var)
    # NB: do NOT include CInstructionTaskReturn — it appears in the
    # caller-side task-spawn sequence (TaskCall+Call+TaskReturn) and does
    # not by itself indicate the function must be a task method.  Globals
    # can spawn tasks too.
)

# Binary/unary opcode classes that pack `TaskVar` as a bitmask (bit 0x80 =
# operand 1 is task-var, bit 0x40 = operand 2 is task-var, bits 0-5 = pop
# count).  Other opcodes use `TaskVar` as a plain flag or not at all.
_BITMASK_TASKVAR_CLASSES = (
    PS.CInstructionAdd, PS.CInstructionSub, PS.CInstructionMult, PS.CInstructionDiv,
    PS.CInstructionMod, PS.CInstructionAnd, PS.CInstructionOr, PS.CInstructionXor,
    PS.CInstructionEq, PS.CInstructionNeq, PS.CInstructionLT, PS.CInstructionGT,
    PS.CInstructionLE, PS.CInstructionGE, PS.CInstructionNullEq, PS.CInstructionNullNeq,
    PS.CInstructionNeg, PS.CInstructionNot, PS.CInstructionSqrt,
    PS.CInstructionSin, PS.CInstructionCos, PS.CInstructionASin, PS.CInstructionPow,
    PS.CInstructionAdd2, PS.CInstructionSub2, PS.CInstructionMult2, PS.CInstructionDiv2,
    PS.CInstructionMod2, PS.CInstructionAnd2, PS.CInstructionOr2, PS.CInstructionXor2,
    PS.CInstructionEq2, PS.CInstructionNeq2, PS.CInstructionLT2, PS.CInstructionGT2,
    PS.CInstructionLE2, PS.CInstructionGE2,
    PS.CInstructionNullEq2, PS.CInstructionNullNeq2,
    PS.CInstructionNeg2, PS.CInstructionNot2, PS.CInstructionSqrt2,
    PS.CInstructionSin2, PS.CInstructionCos2, PS.CInstructionASin2, PS.CInstructionPow2,
)


def _func_touches_task_scope(instrs, start: int, end: int) -> bool:
    """True if any instruction in [start, end] reads/writes task-scope state
    (task variables or task events).  Such a function must be emitted as a
    method of some task — it cannot compile as a global function."""
    for i in range(start, end + 1):
        op = instrs[i].opcode
        if isinstance(op, _TASK_SCOPE_CLASSES):
            return True
        if isinstance(op, _BITMASK_TASKVAR_CLASSES):
            tv = getattr(op, "TaskVar", 0) or 0
            if tv & 0xC0:
                return True
        elif isinstance(op, PS.CInstructionPushE) and getattr(op, "TaskVar", 0):
            return True
        elif isinstance(op, PS.CInstructionPopE) and (getattr(op, "Flags", 0) & 1):
            return True
        # @ Func / @@ ObjFunc may have FUNC_VAR args with Task=1 (task var
        # passed as argument).  TObjFunc is fully task-scoped already (above).
        elif isinstance(op, (PS.CInstructionFunc, PS.CInstructionObjFunc)):
            for fv in getattr(op, "fvar", ()):
                if getattr(fv, "Task", 0):
                    return True
    return False


# ============================================================================
# script-wide context
# ============================================================================

class _ScriptCtx:
    """Shared state across all function lifts in one .bin."""

    def __init__(self, script: "PS.PathologicScript", source_path: Optional[str] = None):
        self.script = script
        self.source_path = source_path
        self.instrs = script.code.instr
        self.task_names: List[str] = [f"t{i}" for i in range(len(script.gtasks.tasks))]
        self.task_var_types_by_index: List[List[VarType]] = [
            [_ps_type_to_var(t) for t in g.VarTypes] for g in script.gtasks.tasks
        ]
        # Populated by _lift_script's pre-pass once task_init_info is known.
        # task_is_nonvoid[i] is True iff task `i` has a non-void init (it
        # returns a value via TaskCall+Mov+Pop, i.e. the call site reserves a
        # return slot at the bottom of the PushV batch).
        self.task_is_nonvoid: List[bool] = [False] * len(script.gtasks.tasks)
        self.global_var_types: List[VarType] = [_ps_type_to_var(gv.type) for gv in script.gvar.GvarTypes]
        self.global_var_names: List[str] = [
            gv.str if gv.flag else f"g{i}" for i, gv in enumerate(script.gvar.GvarTypes)
        ]

        # addr -> CallSig (resolved while lifting; the matching function body is
        # lifted in a second pass once all call sites have been observed).
        self.calls: Dict[int, _CallSig] = {}

        # Event-id → human name resolver, branched on game vs UI script.
        _all_eids: List[int] = []
        for t in script.gtasks.tasks:
            for ev in t.events:
                _all_eids.append(ev.ulEventID)
        for ev in script.gevents.events:
            _all_eids.append(ev.ulEventID)
        for inst in script.code.instr:
            op = inst.opcode
            if isinstance(op, (PS.CInstructionEventEnable, PS.CInstructionEventDisable)):
                _all_eids.append(op.VarIn)
        self.event_name = _make_event_namer(_all_eids, source_path=source_path)
        # addr -> task_index it was first observed from (None = from a global
        # event handler, -1 = called from multiple distinct tasks → emit as
        # global function).  Used in pass 2 to decide whether to emit the
        # discovered function as a task method or a global function — task
        # vars are only accessible from task methods.
        self.call_task_owner: Dict[int, Optional[int]] = {}

        # addr -> explicit function name to emit at CALL sites.  Populated
        # from task event handlers + global event handlers so that an event
        # handler that's also called directly via INSTR_CALL is emitted with
        # its event name (matching the function definition), not as
        # f_<addr>_aN_x.  scomp resolves CALLs by name.
        self.addr_to_name: Dict[int, str] = {}
        # addr -> task_index (None for globals).  Filled by Pass 1/2 of
        # _lift_script.  Used by _make_call_func_node to detect cross-scope
        # calls (e.g. global function shadowed by a task method of same name).
        self.addr_to_task: Dict[int, Optional[int]] = {}
        for ti, gtask in enumerate(script.gtasks.tasks):
            for ev in gtask.events:
                self.addr_to_name[ev.ulOp] = self.event_name(ev.ulEventID)
        for ev in script.gevents.events:
            self.addr_to_name[ev.ulOp] = self.event_name(ev.ulEventID)
            self.addr_to_task[ev.ulOp] = None  # global event handler
        # Main task's init at RunOp is named "init" in scomp source.
        self.addr_to_name[self.script.gtasks.RunOp] = "init"
        # Note: non-main task inits are reached via TaskCall+Call, not plain
        # Call.  They don't need an addr_to_name entry.

    def note_call_origin(self, addr: int, task_index: Optional[int]) -> None:
        if addr not in self.call_task_owner:
            self.call_task_owner[addr] = task_index
        else:
            prev = self.call_task_owner[addr]
            if prev != task_index:
                self.call_task_owner[addr] = -1  # ambiguous → global

    def find_func_end(self, start: int) -> int:
        """The function at `start` ends at its LAST Return — not the first, because
        explicit `return;` statements in the middle of the function emit additional
        Returns.  We bound the search by the next entry point's start address so
        we don't run past the end of this function into the next."""
        next_entry = self._next_entry_after(start)
        last_ret = None
        i = start
        while i < len(self.instrs) and self.instrs[i].index < next_entry:
            if isinstance(self.instrs[i].opcode, PS.CInstructionReturn):
                last_ret = i
            i += 1
        if last_ret is None:
            raise LiftError(f"no Return found from address {start}")
        return last_ret

    def _next_entry_after(self, addr: int) -> int:
        entries = self._all_entry_addrs()
        for e in entries:
            if e > addr:
                return e
        # No further entry — function may extend to end of code section.
        return 1 << 30

    def _all_entry_addrs(self) -> List[int]:
        cached = getattr(self, "_cached_entries", None)
        if cached is not None:
            return cached
        entries = {self.script.gtasks.RunOp}
        for t in self.script.gtasks.tasks:
            for ev in t.events:
                entries.add(ev.ulOp)
        for ev in self.script.gevents.events:
            entries.add(ev.ulOp)
        # Pre-scan CALL targets so per-function slicing knows them up-front.
        for inst in self.instrs:
            op = inst.opcode
            if isinstance(op, (PS.CInstructionCall,)):
                entries.add(op.VarIn)
        out = sorted(entries)
        self._cached_entries = out
        return out

    def _all_function_addrs(self) -> List[int]:
        """Like _all_entry_addrs, but also includes DEAD-CODE functions that
        scomp emitted (because they were declared in the source) but no CALL
        instruction targets them.  We detect them as addresses right after
        a Return instruction (= the start of the next function's body)."""
        cached = getattr(self, "_cached_function_addrs", None)
        if cached is not None:
            return cached
        entries = set(self._all_entry_addrs())
        # Add function-start addresses by walking instructions and recording
        # the instruction right after each Return as a candidate function start.
        for i in range(len(self.instrs) - 1):
            op = self.instrs[i].opcode
            if isinstance(op, PS.CInstructionReturn):
                entries.add(self.instrs[i + 1].index)
        out = sorted(entries)
        self._cached_function_addrs = out
        return out

    def register_call(self, addr: int, arg_types: List[VarType], ret_type: Optional[VarType]):
        prev = self.calls.get(addr)
        if prev is None:
            self.calls[addr] = _CallSig(arg_types=list(arg_types), ret_type=ret_type)
            return
        # Merge: prefer non-void; arg_count must be consistent across sites.
        # If sites disagree (usually because our caller-side count is off due
        # to obscured PUSHV batching), pick the LARGER count and pad — at
        # least scomp will compile, and round-trip will catch byte mismatch.
        if len(prev.arg_types) != len(arg_types):
            if len(arg_types) > len(prev.arg_types):
                prev.arg_types = list(arg_types)
        # Prefer the non-None ret_type.
        if prev.ret_type is None and ret_type is not None:
            prev.ret_type = ret_type
        if prev.ret_type is not None and ret_type is not None and prev.ret_type != ret_type:
            # Conflict — keep the first; round-trip will catch it.
            pass


class _CallSig:
    __slots__ = ("arg_types", "ret_type")

    def __init__(self, arg_types: List[VarType], ret_type: Optional[VarType]):
        self.arg_types = arg_types
        self.ret_type = ret_type


# ============================================================================
# top-level lift
# ============================================================================

def _lift_script(script: "PS.PathologicScript", source_path: Optional[str] = None) -> ScFile:
    ctx = _ScriptCtx(script, source_path=source_path)

    # Global vars -----------------------------------------------------------
    globals_: List[GlobalVar] = []
    for i, gv in enumerate(script.gvar.GvarTypes):
        vtype = _ps_type_to_var(gv.type)
        if gv.flag:
            globals_.append(GlobalVar(type=vtype, name=gv.str, kind="property"))
        else:
            globals_.append(GlobalVar(type=vtype, name=f"g{i}", kind="var"))

    # Events ----------------------------------------------------------------
    # Collect every event id mentioned anywhere — task events, global events,
    # AND any INSTR_ENABLE_EVENT / INSTR_DISABLE_EVENT in the bytecode (those
    # produce `enable/disable evt_N` statements in our emitted .sc and need
    # the matching `event evt_N N;` declaration at file scope).
    event_ids: List[int] = []
    for t in script.gtasks.tasks:
        for ev in t.events:
            if ev.ulEventID not in event_ids:
                event_ids.append(ev.ulEventID)
    for ev in script.gevents.events:
        if ev.ulEventID not in event_ids:
            event_ids.append(ev.ulEventID)
    for inst in script.code.instr:
        op = inst.opcode
        if isinstance(op, (PS.CInstructionEventEnable, PS.CInstructionEventDisable)):
            if op.VarIn not in event_ids:
                event_ids.append(op.VarIn)
    events = [EventDecl(name=ctx.event_name(eid), event_id=eid) for eid in event_ids]

    # Pre-pass: scan all TaskCall+Call sites to learn each non-main task's
    # init() address + its caller-side argument signature.
    #
    # scomp's task ParmCount in the .bin header = arg_count + (non_void?1:0).
    # We disambiguate void vs non-void by inspecting the post-TaskReturn
    # instructions at the spawn site:
    #   - TaskReturn + Pop only          → void, args = ParmCount, ret = None
    #   - TaskReturn + Mov + Pop         → non-void, args = ParmCount-1
    # (Both shapes share PushV(ParmCount), but the Mov+Pop reveals a ret.)
    task_init_info: Dict[int, Tuple[int, List[VarType], Optional[VarType]]] = {}
    instrs = script.code.instr
    for i, inst in enumerate(instrs):
        op = inst.opcode
        if not isinstance(op, PS.CInstructionTaskCall):
            continue
        if i + 1 >= len(instrs):
            continue
        nxt = instrs[i + 1].opcode
        if not isinstance(nxt, (PS.CInstructionCall,)):
            continue
        init_addr = nxt.VarIn
        task_idx = op.VarIn
        gtask = script.gtasks.tasks[task_idx]
        parm = gtask.ParmCount
        if parm == 0:
            if task_idx not in task_init_info:
                task_init_info[task_idx] = (init_addr, [], None)
            continue
        # Look past TaskReturn to see whether the spawn is non-void:
        #   - TaskReturn + Mov + Pop(u_args)        → non-void (ret captured)
        #   - TaskReturn + Pop(u_args - 1)          → non-void (expr context,
        #                                              ret left on stack)
        #   - TaskReturn + Pop(u_args), and the TaskCall's PushCount < parm,
        #                                            → non-void with the
        #     return slot at the bottom of the PushV batch (discarded result).
        is_nonvoid = False
        if i + 2 < len(instrs) and isinstance(instrs[i + 2].opcode, PS.CInstructionTaskReturn):
            after = instrs[i + 3].opcode if i + 3 < len(instrs) else None
            if isinstance(after, _CALL_FOLLOWUP_MOVS):
                is_nonvoid = True
            elif isinstance(after, PS.CInstructionPop) and after.PopCount < parm:
                is_nonvoid = True
            elif isinstance(after, PS.CInstructionPop):
                # PopCount >= parm (discarded result): ambiguous.  The old gate
                # `op.PushCount < parm` missed non-void tasks whose discarded
                # spawn has PushCount == parm (e.g. quest_b9_03_enemy task 6:
                # parm=1, PushCount=1 — a non-void `t{}` whose bool ret is
                # dropped).  Run the reliable body-scan discriminator for ALL
                # discarded-Pop spawns instead.
                # Ambiguous: caller's PushV(parm) is either
                #   (A) NON-void: (parm-1) args + 1 return slot, or
                #   (B) VOID: `parm` args (e.g. a task init whose first arg is
                #       the implicit actor object).
                # RELIABLE discriminator (replaces the old mid-body-return
                # heuristic, which mis-classified BOTH directions): a NON-void
                # init WRITES its return slot — the DEEPEST caller-reserved slot,
                # at VarOut == (init's local frame Pop) + parm — via a
                # `return X`.  A VOID init only READS its args (never writes the
                # bottom slot), so its actor/arg object stays an arg instead of
                # becoming an unassigned `_null_obj` return.  Bound the scan to
                # the init's body (next entry addr); take the frame Pop from its
                # first Return; non-void iff any local-slot Mov-family write
                # targets that bottom slot.  Verified: fog t0 -> VOID (no write
                # to Stack[-9]); NPC_Burah_Eva t5 -> NON-void (Stack[-10]=-2);
                # grabitel t2 -> NON-void (Stack[-4]=...).
                body_end = ctx._next_entry_after(init_addr)
                frame_pop = None
                for k in range(init_addr, len(instrs)):
                    if instrs[k].index >= body_end:
                        break
                    if isinstance(instrs[k].opcode, PS.CInstructionReturn):
                        frame_pop = instrs[k].opcode.VarIn
                        break
                if frame_pop is not None:
                    ret_slot_varout = frame_pop + parm
                    _RW = (PS.CInstructionMovB, PS.CInstructionMovI,
                           PS.CInstructionMovF, PS.CInstructionMovS,
                           PS.CInstructionMovV, PS.CInstructionMov,
                           PS.CInstructionSetNull)
                    for k in range(init_addr, len(instrs)):
                        if instrs[k].index >= body_end:
                            break
                        ko = instrs[k].opcode
                        if not isinstance(ko, _RW):
                            continue
                        vo = getattr(ko, "VarOut", -1)
                        # A genuine `return X` writes the ret slot IMMEDIATELY
                        # before a Return; a VOID init that merely REASSIGNS its
                        # deepest ARG (also at ret_slot_varout) does so mid-body.
                        # Require the write to be right before a Return (allowing
                        # one trailing Pop) to avoid false non-void (which would
                        # turn an actor arg into an unassigned `_null_obj`).
                        nxt = instrs[k + 1].opcode if k + 1 < len(instrs) else None
                        nxt2 = instrs[k + 2].opcode if k + 2 < len(instrs) else None
                        before_ret = (
                            isinstance(nxt, PS.CInstructionReturn)
                            or (isinstance(nxt, PS.CInstructionPop)
                                and isinstance(nxt2, PS.CInstructionReturn)))
                        if not before_ret:
                            continue
                        # Standard (regular-function) ret slot at frame_pop+parm,
                        # OR a TASK-init `return f(...)` whose ret write sits just
                        # BELOW the popped call batch: `Mov VarOut=N; Pop(N);
                        # Return` (frame_pop==0 for task inits makes the standard
                        # ret_slot_varout wrong, so match VarOut == that Pop's
                        # count instead).
                        if (vo == ret_slot_varout
                                or (isinstance(nxt, PS.CInstructionPop)
                                    and vo == nxt.PopCount and nxt.PopCount > 0)):
                            is_nonvoid = True
                            break
        # Walk back to find the PushV that opened this task's call frame.
        for j in range(i - 1, max(-1, i - 50), -1):
            pv = instrs[j].opcode
            if not isinstance(pv, PS.CInstructionPushV):
                continue
            if pv.VarCount == parm:
                pushv_types = [_ps_type_to_var(t) for t in pv.VarTypes]
                if task_idx not in task_init_info:
                    if is_nonvoid:
                        task_init_info[task_idx] = (
                            init_addr, pushv_types[1:], pushv_types[0],
                        )
                        ctx.task_is_nonvoid[task_idx] = True
                    else:
                        task_init_info[task_idx] = (init_addr, pushv_types, None)
                break

    # Tasks (each task's init + events) -------------------------------------
    # scomp processes functions in DECLARATION order, which equals BYTECODE
    # ADDRESS order (each function's compiled bytecode immediately follows
    # the previous one).  String pool insertion order tracks this walk, so to
    # match the original .bin's pool layout we must emit functions sorted by
    # their entry address.  Track (addr, fn) per task and per global, then
    # sort before constructing the AST.
    tasks: List[Task] = []
    task_funcs_with_addr: List[List[Tuple[int, Function]]] = []
    start_task_index = script.gtasks.RunTask
    for ti, gtask in enumerate(script.gtasks.tasks):
        is_main = (ti == start_task_index)
        task_vars = [(_ps_type_to_var(t), f"tv{i}") for i, t in enumerate(gtask.VarTypes)]
        funcs_addr: List[Tuple[int, Function]] = []

        if is_main:
            init_addr = script.gtasks.RunOp
            ctx.addr_to_task[init_addr] = ti
            funcs_addr.append((init_addr, _lift_func_with_ctx(
                ctx, init_addr, ctx.find_func_end(init_addr),
                num_args=0, arg_types=[], name="init",
                return_type=VarType.VOID,
                task_var_types=ctx.task_var_types_by_index[ti],
                task_index=ti,
            )))
        elif ti in task_init_info:
            init_addr, arg_types_for_init, ret_type = task_init_info[ti]
            if ret_type is None:
                ret_type = VarType.VOID
            ctx.addr_to_task[init_addr] = ti
            funcs_addr.append((init_addr, _lift_func_with_ctx(
                ctx, init_addr, ctx.find_func_end(init_addr),
                num_args=len(arg_types_for_init),
                arg_types=list(arg_types_for_init),
                name="init",
                return_type=ret_type,
                task_var_types=ctx.task_var_types_by_index[ti],
                task_index=ti,
            )))
        else:
            # Unused task or its init address wasn't discoverable — empty stub
            # gets address -1 so it stays at the top of the task's method list.
            funcs_addr.append((-1, Function(name="init", return_type=VarType.VOID, args=[], body=OpBlock())))

        for ev in gtask.events:
            arg_types = [_ps_type_to_var(t) for t in ev.pVarTypes]
            ctx.addr_to_task[ev.ulOp] = ti
            funcs_addr.append((ev.ulOp, _lift_func_with_ctx(
                ctx, ev.ulOp, ctx.find_func_end(ev.ulOp),
                num_args=len(arg_types), arg_types=arg_types,
                name=ctx.event_name(ev.ulEventID),
                return_type=VarType.VOID,
                task_var_types=ctx.task_var_types_by_index[ti],
                task_index=ti,
            )))
        task_funcs_with_addr.append(funcs_addr)
        tasks.append(Task(
            name=f"t{ti}", is_main=is_main, base=None,
            vars=task_vars, funcs=[],  # filled in after Pass 2 sort
        ))

    # Global event handlers -> top-level functions named evt_<id>.
    global_funcs_with_addr: List[Tuple[int, Function]] = []
    for ev in script.gevents.events:
        arg_types = [_ps_type_to_var(t) for t in ev.pVarTypes]
        global_funcs_with_addr.append((ev.ulOp, _lift_func_with_ctx(
            ctx, ev.ulOp, ctx.find_func_end(ev.ulOp),
            num_args=len(arg_types), arg_types=arg_types,
            name=ctx.event_name(ev.ulEventID),
            return_type=VarType.VOID,
            task_var_types=[],
        )))

    # Compute address-range ownership for discovered CALL targets, matching
    # scomp's compile order:
    #   for each task in m_Tasks (declaration) order:
    #       compile every function (init + events + non-event helpers) in
    #       source-declaration order;
    #   then compile every global function.
    # All of task[k]'s functions therefore live at addresses BELOW task[k+1]'s
    # first entry; globals live BEYOND the last task's last function.  We can
    # recover this banding from the .bin: each task's entry addresses (init +
    # event ulOps) bracket its method bodies.
    task_addr_range: Dict[int, Tuple[int, int]] = {}
    task_min_addr: Dict[int, int] = {}
    task_max_addr: Dict[int, int] = {}
    for ti, gtask in enumerate(script.gtasks.tasks):
        addrs = []
        if ti == script.gtasks.RunTask:
            addrs.append(script.gtasks.RunOp)
        elif ti in task_init_info:
            addrs.append(task_init_info[ti][0])
        for ev in gtask.events:
            addrs.append(ev.ulOp)
        if addrs:
            task_min_addr[ti] = min(addrs)
            task_max_addr[ti] = max(addrs)
    task_order_by_addr = sorted(task_min_addr.keys(), key=lambda i: task_min_addr[i])
    for k, ti in enumerate(task_order_by_addr):
        if k == 0:
            # First task in compile order: scomp emits its methods from the
            # very start of the code section (addr 0), even if its lowest
            # entry point (init or event) sits higher because child-task
            # methods declared *before* init in source compile first.
            start = 0
        else:
            start = task_min_addr[ti]
        if k + 1 < len(task_order_by_addr):
            end_exclusive = task_min_addr[task_order_by_addr[k + 1]]
        else:
            # LAST task — methods can only appear up to and including the
            # bytecode region of its last entry.  Anything strictly above the
            # last event entry's bytecode is treated as a global function.
            end_exclusive = task_max_addr[ti] + 1
        task_addr_range[ti] = (start, end_exclusive)

    def _owning_task_for_addr(a: int) -> Optional[int]:
        for tti, (lo, hi) in task_addr_range.items():
            if lo <= a < hi:
                return tti
        return None

    # Build per-function CALL graph by scanning the bytecode region of each
    # known function (init + events + CALL-discovered targets).  Used to
    # transitively propagate task ownership: if a global function calls a
    # task method, scomp's name lookup will fail — so the caller must also
    # be inside the same task.  Task methods calling globals is fine.
    discovered_call_addrs: set = set()
    for inst in script.code.instr:
        op = inst.opcode
        if isinstance(op, PS.CInstructionCall):
            discovered_call_addrs.add(op.VarIn)
    # Initial owner_map: events + init are pre-assigned by Pass 1; discovered
    # CALL targets get their address-range guess.
    owner_map: Dict[int, Optional[int]] = {}
    for ti, gtask in enumerate(script.gtasks.tasks):
        if ti == script.gtasks.RunTask:
            owner_map[script.gtasks.RunOp] = ti
        elif ti in task_init_info:
            owner_map[task_init_info[ti][0]] = ti
        for ev in gtask.events:
            owner_map[ev.ulOp] = ti
    for ev in script.gevents.events:
        owner_map[ev.ulOp] = None
    for addr in discovered_call_addrs:
        if addr in owner_map:
            continue
        owner_map[addr] = _owning_task_for_addr(addr)
    # Per-function CALL targets (callee set) and task-scope touch flag.
    # Exclude Calls that immediately follow a TaskCall — those are part of
    # the task-spawn sequence (init invocation) and can fire from any
    # context, so they shouldn't pull the caller into the spawnee's task.
    all_func_addrs = sorted(owner_map.keys())
    addr_to_calls: Dict[int, set] = {}
    addr_touches_task: Dict[int, bool] = {}
    for k, addr in enumerate(all_func_addrs):
        next_addr = all_func_addrs[k + 1] if k + 1 < len(all_func_addrs) else (1 << 30)
        end_idx = min(next_addr, len(script.code.instr)) - 1
        calls = set()
        for i in range(addr, end_idx + 1):
            inst = script.code.instr[i]
            if not isinstance(inst.opcode, PS.CInstructionCall):
                continue
            prev = script.code.instr[i - 1].opcode if i > 0 else None
            if isinstance(prev, PS.CInstructionTaskCall):
                continue  # task-spawn's init call; not a function call edge
            calls.add(inst.opcode.VarIn)
        addr_to_calls[addr] = calls
        addr_touches_task[addr] = _func_touches_task_scope(script.code.instr, addr, end_idx)
    # Reverse call graph for incoming-direction propagation.
    callers_of: Dict[int, set] = {}
    for caller, callees in addr_to_calls.items():
        for callee in callees:
            callers_of.setdefault(callee, set()).add(caller)
    # Iterative propagation, three rules:
    #   A. F calls G; G is in task k → F must be in task k (scomp's name
    #      lookup forbids global → task-method).
    #   B. F touches task-scope state and some caller is in task k → F must
    #      be in task k (its task-var refs can only resolve in that scope).
    #   C. Address bracketing — if F's address lies strictly between two
    #      functions both already classified as task k, F is also task k.
    #      Justification: scomp compiles all of task k's methods contiguously
    #      before moving on to task k+1 or globals.  This catches inherited
    #      methods that don't touch task scope themselves but live inside
    #      the task's bytecode region.
    # Rule D (pre-pass): single-task scripts have only one possible task
    # owner; any function that touches task scope must belong to it.  This
    # seeds the propagation so Rule A can then pull the callers into the
    # task as well.  Without this, Rule B can't fire because the caller
    # chain leading up to a touch-task function may itself sit outside the
    # task's address range (helper functions after the last event).
    if len(script.gtasks.tasks) == 1:
        for addr in all_func_addrs:
            if owner_map.get(addr) is not None:
                continue
            if addr_touches_task.get(addr):
                owner_map[addr] = 0

    # Fixed-point because newly-promoted entries may force further moves.
    changed = True
    while changed:
        changed = False
        for addr in all_func_addrs:
            owner = owner_map.get(addr)
            if isinstance(owner, int) and owner >= 0:
                continue
            # Rule A: outgoing — calling a task method
            for callee in addr_to_calls.get(addr, ()):
                t_owner = owner_map.get(callee)
                if isinstance(t_owner, int) and t_owner >= 0:
                    owner_map[addr] = t_owner
                    changed = True
                    break
            if isinstance(owner_map.get(addr), int) and owner_map[addr] >= 0:
                continue
            # Rule B: incoming — a task method calls F and F touches task scope
            if addr_touches_task.get(addr):
                for caller in callers_of.get(addr, ()):
                    c_owner = owner_map.get(caller)
                    if isinstance(c_owner, int) and c_owner >= 0:
                        owner_map[addr] = c_owner
                        changed = True
                        break
            if isinstance(owner_map.get(addr), int) and owner_map[addr] >= 0:
                continue
            # Rule C: bracketing — both nearest task-k entries above and below
            # this addr exist and agree on task k.
            below_task = above_task = None
            for other in all_func_addrs:
                if other >= addr:
                    break
                ow = owner_map.get(other)
                if isinstance(ow, int) and ow >= 0:
                    below_task = ow
            for other in all_func_addrs:
                if other <= addr:
                    continue
                ow = owner_map.get(other)
                if isinstance(ow, int) and ow >= 0:
                    above_task = ow
                    break
            if below_task is not None and below_task == above_task:
                owner_map[addr] = below_task
                changed = True

    # Cross-task callee demotion (applied AFTER bracketing rule C): if a
    # function's callers are all in a task other than its current owner,
    # scomp's name lookup fails on the cross-task call.  Demote to global
    # when safe (no task-scope state in the body).  Event/init addresses
    # are skipped — those are explicitly task-bound.
    _entry_addrs: set = set()
    for ti, gtask in enumerate(script.gtasks.tasks):
        if ti == script.gtasks.RunTask:
            _entry_addrs.add(script.gtasks.RunOp)
        elif ti in task_init_info:
            _entry_addrs.add(task_init_info[ti][0])
        for ev in gtask.events:
            _entry_addrs.add(ev.ulOp)
    for ev in script.gevents.events:
        _entry_addrs.add(ev.ulOp)
    # Iterate to a FIXED POINT: moving one function to its caller's task can
    # change the caller-task of ITS callees, which must then move too.  Without
    # this, a helper called only by f_2db (e.g. f_2d0) is checked while f_2db is
    # still at its address-band owner (task 3); after f_2db is later moved to
    # task 4, f_2d0 is left stranded at task 3 -> scomp `Function f_2d0@... not
    # found` when compiling t4::f_2db (player_burah/danko/klara SCOMP cluster).
    _demote_changed = True
    _demote_guard = 0
    while _demote_changed and _demote_guard < len(all_func_addrs) + 2:
        _demote_changed = False
        _demote_guard += 1
        for addr in all_func_addrs:
            if addr in _entry_addrs:
                continue
            owner = owner_map.get(addr)
            if not (isinstance(owner, int) and owner >= 0):
                continue
            touches = addr_touches_task.get(addr)
            caller_tasks: set = set()
            for caller in callers_of.get(addr, ()):
                c_owner = owner_map.get(caller)
                if isinstance(c_owner, int) and c_owner >= 0:
                    caller_tasks.add(c_owner)
            # When callers span MULTIPLE tasks, the address-band owner is wrong:
            # demote to global (a non-task-touching helper) — but a TASK-TOUCHING
            # helper can't be global (it uses task vars), so leave it (no safe
            # move).  When all callers are a SINGLE task different from the
            # address-band owner, the function is really that task's method
            # (e.g. an inherited base-method compiled outside the task's event
            # band); move it there.  This applies even to task-touching helpers
            # (their tv accesses resolve against the caller task) and fixes the
            # cross-task `Function f_X@N not found` SCOMP cluster.
            if len(caller_tasks) >= 2:
                if not touches and owner is not None:
                    owner_map[addr] = None
                    _demote_changed = True
            elif caller_tasks and owner not in caller_tasks:
                (only_task,) = caller_tasks
                owner_map[addr] = only_task
                _demote_changed = True

    # Pass 2: lift every discovered internal CALL target.  Each gets emitted
    # as either a global function or a method of the task whose bytecode
    # region contains its address.  Discovery is iterative because newly-
    # lifted functions may CALL further targets.
    #
    # Pre-populate lifted_addrs with addresses already emitted in Pass 1
    # (task inits, task events, global event handlers).  Otherwise an event
    # handler that's also called via INSTR_CALL would be lifted twice — once
    # under its event name and once under f_<addr>_aN_v — and the duplicate
    # CALL would fail to resolve (scomp's lookup is by-name).
    lifted_addrs = set()
    for ti, gtask in enumerate(script.gtasks.tasks):
        if ti == script.gtasks.RunTask:
            lifted_addrs.add(script.gtasks.RunOp)
        elif ti in task_init_info:
            lifted_addrs.add(task_init_info[ti][0])
        for ev in gtask.events:
            lifted_addrs.add(ev.ulOp)
    for ev in script.gevents.events:
        lifted_addrs.add(ev.ulOp)
    while True:
        pending = [addr for addr in ctx.calls if addr not in lifted_addrs]
        if not pending:
            break
        for addr in sorted(pending):
            sig = ctx.calls[addr]
            ret = sig.ret_type if sig.ret_type is not None else VarType.VOID
            # Use the pre-computed owner_map (address-range + transitive
            # call-graph propagation) as the primary classifier.
            owning_task_idx = owner_map.get(addr)
            if owning_task_idx is None:
                # Last-chance fallback: even if propagation didn't reach this
                # function, its body might directly access task-scope state.
                end_addr = ctx.find_func_end(addr)
                if _func_touches_task_scope(ctx.instrs, addr, end_addr):
                    owner = ctx.call_task_owner.get(addr)
                    if isinstance(owner, int) and owner >= 0:
                        owning_task_idx = owner
                    elif len(script.gtasks.tasks) == 1:
                        # Single-task script: there's only one possible owner
                        # for any function that touches task scope.  Assign it.
                        # This catches helper functions that sit after the
                        # task's last event (e.g. world_final.bin).
                        owning_task_idx = 0
            if owning_task_idx is not None:
                tvars = ctx.task_var_types_by_index[owning_task_idx]
            else:
                tvars = []
            ctx.addr_to_task[addr] = owning_task_idx
            fn = _lift_func_with_ctx(
                ctx, addr, ctx.find_func_end(addr),
                num_args=len(sig.arg_types), arg_types=sig.arg_types,
                name=_call_name(addr, len(sig.arg_types), sig.ret_type, ctx),
                return_type=ret,
                task_var_types=tvars,
                task_index=owning_task_idx,
            )
            if owning_task_idx is not None:
                task_funcs_with_addr[owning_task_idx].append((addr, fn))
            else:
                global_funcs_with_addr.append((addr, fn))
            lifted_addrs.add(addr)

    # Sort each task's methods by entry address so emission order matches
    # scomp's compile walk (which drives string-pool layout).  init() ends up
    # first naturally because it's emitted at the lowest address in the .bin.
    for ti, t in enumerate(tasks):
        t.funcs = [fn for _addr, fn in sorted(task_funcs_with_addr[ti], key=lambda p: p[0])]
    global_funcs: List[Function] = [fn for _addr, fn in sorted(global_funcs_with_addr, key=lambda p: p[0])]

    # Task inheritance inference (disabled): scomp uses single inheritance,
    # but our tv0/tv1/... naming collides across tasks → triggers "Variable
    # already declared in base" errors.  Need per-task unique tv names to
    # enable.  Left as future work.
    # _infer_task_inheritance(tasks, task_funcs_with_addr, ctx)

    return ScFile(
        events=events, globals=globals_, tasks=tasks, global_funcs=global_funcs,
    )


def _infer_task_inheritance(tasks, task_funcs_with_addr, ctx):
    """Set task.base based on cross-task Call patterns."""
    from collections import Counter
    for ti, t in enumerate(tasks):
        callee_tasks = Counter()
        for _addr, fn in task_funcs_with_addr[ti]:
            _walk_calls(fn.body, callee_tasks, ctx, ti)
        if callee_tasks:
            most_common = callee_tasks.most_common(1)
            if most_common[0][1] > 0:
                base_ti = most_common[0][0]
                base_task = tasks[base_ti]
                # Only set inheritance if derived task has NO task vars OR
                # all of derived's task vars are accommodated by base.
                # Our tv0/tv1/... naming collides across tasks → don't inherit
                # if derived has its own task vars.
                if not t.vars:
                    t.base = base_task.name


def _walk_calls(block, counter, ctx, self_ti):
    from pathologic_re.sc_decompiler.ast import OpIf, OpFor, OpWhile, OpDoWhile, OpBlock, OpExprStmt, OpReturn, ENFunc, ENFuncSuper
    def visit_expr(e):
        if e is None:
            return
        if isinstance(e, ENFunc):
            # Try to find target task via name resolution
            # name format: f_NNN_a*_? — addr in hex
            n = e.name
            if n.startswith('f_'):
                try:
                    hex_part = n.split('_')[1]
                    addr = int(hex_part, 16)
                    callee_ti = ctx.addr_to_task.get(addr)
                    if callee_ti is not None and callee_ti != self_ti:
                        counter[callee_ti] += 1
                except (ValueError, IndexError):
                    pass
            for a in e.args:
                visit_expr(a)
            if getattr(e, 'obj', None):
                visit_expr(e.obj)
        elif hasattr(e, 'args'):
            for a in e.args:
                visit_expr(a)
        # Recurse common nested-expr fields
        for f in ('node', 'left', 'right', 'a', 'b', 'c', 'expr', 'cond'):
            if hasattr(e, f):
                visit_expr(getattr(e, f))
    def walk(blk):
        for op in blk.ops:
            if isinstance(op, OpExprStmt):
                visit_expr(op.expr)
            elif isinstance(op, OpReturn):
                visit_expr(op.expr)
            elif isinstance(op, OpIf):
                visit_expr(op.cond)
                walk(op.then_block)
                if op.else_block: walk(op.else_block)
            elif isinstance(op, OpFor):
                walk(op.init)
                visit_expr(op.cond)
                visit_expr(op.loop)
                walk(op.body)
            elif isinstance(op, (OpWhile, OpDoWhile)):
                visit_expr(op.cond)
                walk(op.body)
            elif isinstance(op, OpBlock):
                walk(op)
    walk(block)


def _lift_func_with_ctx(
    ctx: _ScriptCtx,
    start: int, end_return: int,
    *,
    num_args: int,
    arg_types: List[VarType],
    name: str,
    return_type: VarType,
    task_var_types: List[VarType],
    task_index: Optional[int] = None,
) -> Function:
    """Lift one function. Returns a Function AST node."""
    func_args = [(arg_types[i], f"a{i}") for i in range(num_args)]
    body_instrs = ctx.instrs[start:end_return]

    # Determine the EXACT local count from the trailing Return's operand.
    #
    # scomp emits `INSTR_RETURN total_vars - arg_count` (Program.cpp:884).
    # Since args were added once and locals twice (the double-walk bug in
    # ProcessVariables, see Program.cpp:873-877), this equals 2 × N_locals
    # regardless of arg count.  So Return.VarIn / 2 gives us the precise
    # number of declared locals — eliminating the entry-vs-call PushV
    # ambiguity that would otherwise plague short functions whose first
    # instruction happens to be a call setup using PushV.
    end_ret_op = ctx.instrs[end_return].opcode
    if end_ret_op.VarIn % 2 != 0:
        raise LiftError(
            f"function at 0x{start:x}: trailing Return.VarIn={end_ret_op.VarIn} is odd"
        )
    n_locals = end_ret_op.VarIn // 2

    local_types: List[VarType] = []
    skipped = 0
    if n_locals > 0:
        if not body_instrs or not isinstance(body_instrs[0].opcode, PS.CInstructionPushV):
            raise LiftError(
                f"function at 0x{start:x}: Return claims {n_locals} locals but no entry PushV"
            )
        pv = body_instrs[0].opcode
        if pv.VarCount != n_locals * 2:
            raise LiftError(
                f"function at 0x{start:x}: entry PushV size {pv.VarCount} != expected {n_locals*2}"
            )
        raw_types = [_ps_type_to_var(t) for t in pv.VarTypes]
        local_types = raw_types[: n_locals]
        skipped = 1
    # If n_locals == 0 there's no entry PushV.  A PushV at body_instrs[0] in
    # that case is a regular call setup and is handled by h_PushV.

    # Address of the function's terminating Return (the one we stripped from
    # body_instrs).  Used by h_Jump to recognise jumps-to-end as `return;`.
    return_addr = ctx.instrs[end_return].index
    def _make_state():
        return _FuncLifter(
            ctx=ctx,
            instrs=body_instrs[skipped:],
            num_args=num_args,
            arg_types=arg_types,
            local_types=local_types,
            task_var_types=task_var_types,
            return_type=return_type,
            return_addr=return_addr,
            task_index=task_index,
            func_name=name,
            func_addr=start,
        )
    state = _make_state()
    body = state.lift()

    # Prepend local var declarations in slot order so scomp's ProcessVariables
    # (DFS over the body) re-allocates them to the same indices.
    var_decls = [OpVar(type=t, name=f"L{i}") for i, t in enumerate(local_types)]
    body.ops[:0] = var_decls

    # Scope narrowing: move object-typed locals from function scope into the
    # Non-void functions need an explicit final `return X;` — scomp rejects
    # non-void bodies that fall off the end.  Use the bottom-of-frame
    # _Reserved's expression (which captures the last assignment scomp emitted
    # to the return slot).  If the body already ends with a Return we leave
    # it alone.  IMPORTANT: emit BEFORE _narrow_local_scopes so the narrow
    # pass sees the return's reference to a local and keeps it at function
    # scope instead of demoting it into an inner block.
    if return_type != VarType.VOID:
        # If the return slot was NEVER assigned (the function doesn't actually
        # produce a return value), the function is effectively VOID even
        # though the caller's PushV reserved a return slot.  Demote to VOID
        # to avoid emitting an invalid `return _uninit_X;`.  This happens
        # when scomp's ParmCount mis-suggests a non-void task (heuristic
        # PushCount < parm fires but the init body never assigns).
        ret_slot = state.stack[0] if state.stack else None
        if (isinstance(ret_slot, _Reserved)
                and not ret_slot.was_assigned):
            return_type = VarType.VOID
            # Strip any return-expressions we may have emitted; replace with bare returns.
            def _strip_returns(blk: OpBlock):
                for i, op in enumerate(blk.ops):
                    if isinstance(op, OpReturn):
                        op.expr = None
                    elif isinstance(op, OpIf):
                        _strip_returns(op.then_block)
                        if op.else_block:
                            _strip_returns(op.else_block)
                    elif isinstance(op, OpFor):
                        _strip_returns(op.init)
                        _strip_returns(op.body)
                    elif isinstance(op, (OpWhile, OpDoWhile)):
                        _strip_returns(op.body)
                    elif isinstance(op, OpBlock):
                        _strip_returns(op)
            _strip_returns(body)
        elif not body.ops or not isinstance(body.ops[-1], OpReturn):
            ret_expr = ret_slot.expr if isinstance(ret_slot, _Reserved) else _zero_literal(return_type)
            body.ops.append(OpReturn(expr=ret_expr))
        else:
            # Body already ends with an OpReturn (mid-body explicit return).
            # But the LAST instructions of body_instrs (right before the
            # function-end Return we stripped) might be a Mov to the ret slot
            # that scomp emitted as dead-code after an early return.  For
            # non-void functions like `T f() { return X; return Y; }`, both
            # returns must be emitted to match scomp's output.
            #
            # Detect: body_instrs[-1] is a Mov{B,I,F,S} writing to the ret
            # slot AND we have at least 1 Return in body_instrs (= multiple
            # paths).  The Mov's value becomes the trailing return.
            if (return_type != VarType.VOID
                    and len(body_instrs) >= 2
                    and isinstance(ret_slot, _Reserved)):
                last_instr = body_instrs[-1].opcode
                ret_depth = len(state.stack)
                trailing_val = None
                if (isinstance(last_instr, PS.CInstructionMovB)
                        and last_instr.VarOut == ret_depth
                        and return_type == VarType.BOOL):
                    trailing_val = ENBool(bool(last_instr.bVal))
                elif (isinstance(last_instr, PS.CInstructionMovI)
                        and last_instr.VarOut == ret_depth
                        and return_type == VarType.INT):
                    trailing_val = ENInt(int(last_instr.lVal))
                elif (isinstance(last_instr, PS.CInstructionMovF)
                        and last_instr.VarOut == ret_depth
                        and return_type == VarType.FLOAT):
                    trailing_val = ENFloat(float(last_instr.fVal))
                elif (isinstance(last_instr, PS.CInstructionMovS)
                        and last_instr.VarOut == ret_depth
                        and return_type == VarType.STRING):
                    trailing_val = ENString(last_instr.String)
                if trailing_val is not None:
                    n_returns = sum(1 for bi in body_instrs
                                    if isinstance(bi.opcode, PS.CInstructionReturn))
                    # Only synthesise the trailing `return Y` when the last
                    # ret-slot Mov is genuine DEAD-CODE after an early return
                    # (scomp's `T f(){ return X; return Y; }` shape) — i.e. it
                    # is NOT a branch target.  When the Mov IS a jump target it
                    # is the else-branch of an if/else or ternary that the
                    # ternary-return / if-else detection ALREADY consumed (e.g.
                    # `return c ? 2 : 0;`'s `: 0` writes the ret slot at a
                    # JumpB target); synthesising another return there emits a
                    # spurious `return 0;` (+2 instrs) — see citizen_morlok
                    # f_c33_a1_i (0xc40 JumpB→0xc43 `Stack[-2]=0`).
                    last_idx = body_instrs[-1].index
                    is_branch_target = any(
                        isinstance(bi.opcode, (PS.CInstructionJump,
                                               PS.CInstructionJumpB))
                        and bi.opcode.VarIn == last_idx
                        for bi in body_instrs)
                    if n_returns >= 1 and not is_branch_target:
                        body.ops.append(OpReturn(expr=trailing_val))

    # innermost block where they're actually used.  This matches scomp's
    # original-source declaration pattern and prevents scomp from emitting a
    # second auto-cleanup SetNull at function end.  Slot allocation isn't
    # affected — scomp's ProcessVariables walks the whole function regardless
    # of where the OpVar lives.
    # Function-SCOPE object locals: scomp emits their SetNull cleanup as a dead
    # block-close run AFTER the function's terminating Return (COperators::
    # Compile, IOperator.cpp:67).  Each such SetNull's VarOut maps to a local
    # via L_{n_locals - VarOut} (scomp's `totalVars - varIndex`, double-walked
    # frame na+2·nl).  These objects are FUNCTION-scoped — narrowing them into a
    # loop/if-block makes scomp emit the cleanup at the WRONG (inner) place
    # (f_40a `object L1` used only in a for-body but cleaned at fn-end → ui_trade
    # over-narrow).  Protect them from the narrowing passes.
    protected_slots: set = set()
    k = end_return + 1
    while k < len(ctx.instrs) and isinstance(ctx.instrs[k].opcode, PS.CInstructionSetNull):
        vo = ctx.instrs[k].opcode.VarIn   # SetNull's slot is in VarIn
        sidx = n_locals - vo
        if 0 <= sidx < n_locals:
            protected_slots.add(sidx)
        k += 1
    # Move sibling terminators into the else of 3-GOTO else-skip ifs (tagged by
    # h_JumpB).  Run before narrowing/for-conversion so the if and its sibling
    # are still adjacent in their original block.
    _pull_terminator_into_else(body)

    _narrow_local_scopes(body, local_types, protected_slots)
    _scope_loop_body_locals(body, local_types, protected_slots)

    # NOTE: `_strip_inverted_empty_then` was previously called here to convert
    # `if (!X) {} else { body }` → `if (X) { body }` — but that ALWAYS loses
    # byte-identity, because the empty-then-else shape only arises in the AST
    # when scomp's bytecode genuinely had Not + JumpB + Jump (3 instrs), and
    # stripping it makes the recompile emit Push + JumpB (2 instrs).

    # Convert `for (;;) { if (!cond) break; body; }` → `while (cond) { body }`.
    # scomp compiles `while(cond) {body}` as JumpB(false→break) + body + GOTO
    # back.  Our lifter often produces the infinite-for-with-leading-break
    # shape instead, which compiles to a longer Eq + JumpB + Jump pattern.
    _infinite_for_to_while(body)

    # Convert `init; while (cond) { body; iter; }` → `for (init; cond; iter) { body }`.
    # This shifts the scope-close (auto-cleanup of body-scope objects) from
    # AFTER the iter step to BEFORE it, matching scomp's C-style-for emission.
    _while_to_for(body)

    # Post-pass: after for-conversion, the iter step moves OUT of the body.
    # An object local's trailing `L = null;` may now sit at the body's end —
    # safe to pop (scomp's auto-cleanup at body-scope close handles it).
    _pop_trailing_null_assigns(body)

    # NOTE: `_simplify_if_continue_then_return` was REMOVED here.  It rewrote
    # `if (cond) { continue; } break/return;` → `if (!cond) break/return;`
    # believing the original was the shorter 3-instr form.  But a faithful lift
    # only produces an `if(c){continue;}` shape when the BYTECODE actually has a
    # GOTO-to-continue-addr (the 4-instr form); the 3-instr `if(!c) break;`
    # lifts directly with no continue.  So the pass only ever converted faithful
    # 4-instr lifts INTO 3-instr → guaranteed byte-mismatch.  Disabling it gained
    # +10 (guard, *_patrol, butcher, ui_apparatus) with ZERO regressions (rt112).

    # An empty `if (cond) {}` (empty then, no else) is always a lift artifact:
    # the region-slicing split a conditional `if (cond) <break/continue/return>`
    # so the action landed as the NEXT (unconditional) statement.  Fold the
    # trailing control-flow statement back into the empty if.  scomp compiles
    # `if (cond) {} break;` (JumpB skips the empty body → lands on the break =
    # unconditional) differently from `if (cond) break;` (JumpB skips the break
    # → conditional); since the empty-if form never appears in real source,
    # folding restores the intended conditional shape.
    _fold_empty_if_cf(body)

    return Function(
        name=name, return_type=return_type, args=func_args, body=body,
    )


def _fold_empty_if_cf(body: OpBlock) -> None:
    """Recursively fold `if (cond) {}` immediately followed by a single
    break/continue/return into `if (cond) { <that statement> }`."""
    def walk(blk: OpBlock):
        i = 0
        while i < len(blk.ops):
            op = blk.ops[i]
            if (isinstance(op, OpIf)
                    and op.else_block is None
                    and not op.then_block.ops
                    and i + 1 < len(blk.ops)
                    and isinstance(blk.ops[i + 1], (OpBreak, OpContinue, OpReturn))):
                cf = blk.ops[i + 1]
                op.then_block = OpBlock(ops=[cf])
                del blk.ops[i + 1]
                # fall through to recurse into the now-non-empty then_block
            if isinstance(op, OpIf):
                walk(op.then_block)
                if op.else_block is not None:
                    walk(op.else_block)
            elif isinstance(op, OpFor):
                walk(op.init)
                walk(op.body)
            elif isinstance(op, (OpWhile, OpDoWhile)):
                walk(op.body)
            elif isinstance(op, OpBlock):
                walk(op)
            i += 1
    walk(body)


def _simplify_if_continue_then_return(body: OpBlock) -> None:
    """Rewrite inside loop bodies:
        if (cond) { continue; }
        return;   /  break;
    →   if (!cond) return;  /  break;

    Also rewrite:
        if (cond) { continue; }
        rest_of_body...
    →   if (!cond) { rest_of_body... }
    when at the end of a loop body — the inverted-cond if-body shape
    compiles to 1-3 fewer instructions than the if-continue-then-rest.
    """
    def walk(blk: OpBlock, in_loop: bool):
        i = 0
        while i < len(blk.ops):
            op = blk.ops[i]
            if (in_loop
                    and isinstance(op, OpIf)
                    and op.else_block is None
                    and len(op.then_block.ops) == 1
                    and isinstance(op.then_block.ops[0], OpContinue)
                    and i + 1 < len(blk.ops)
                    and isinstance(blk.ops[i + 1], (OpReturn, OpBreak))
                    and i + 2 == len(blk.ops)):  # the term stmt is the last in block
                terminator = blk.ops[i + 1]
                new_if = OpIf(
                    cond=_not_expr(op.cond),
                    then_block=OpBlock(ops=[terminator]),
                )
                blk.ops[i:] = [new_if]
                return
            # Narrow inverse: `if (!(A && B)) continue; rest` (at end of loop)
            # → `if (A && B) { rest }`.  Fires only when cond is `!(...)` with
            # a compound inner expression (AND/OR/binop) — those are most
            # likely from `if (cond_chain) { body }` source where scomp
            # emitted Push+JumpB+body (3 instr) rather than `if(!chain)
            # continue;` which emits Not+JumpB+GOTO+body (4 instr).
            # Skip when inner cond is plain ENId (covered by other shapes).
            if (in_loop
                    and isinstance(op, OpIf)
                    and op.else_block is None
                    and len(op.then_block.ops) == 1
                    and isinstance(op.then_block.ops[0], OpContinue)
                    and isinstance(op.cond, ENOp1)
                    and op.cond.op == Op1Type.NOT
                    and not isinstance(op.cond.node, ENId)
                    and i + 1 < len(blk.ops)):
                rest = blk.ops[i + 1:]
                # Skip if any rest stmt contains a break/continue/return.
                def _has_term(ops):
                    for s in ops:
                        if isinstance(s, (OpBreak, OpContinue, OpReturn)):
                            return True
                        if isinstance(s, OpIf):
                            if _has_term(s.then_block.ops):
                                return True
                            if s.else_block and _has_term(s.else_block.ops):
                                return True
                    return False
                if not _has_term(rest):
                    new_if = OpIf(cond=op.cond.node, then_block=OpBlock(ops=rest))
                    blk.ops[i:] = [new_if]
                    walk(new_if.then_block, in_loop)
                    return
            if isinstance(op, OpIf):
                walk(op.then_block, in_loop)
                if op.else_block:
                    walk(op.else_block, in_loop)
            elif isinstance(op, OpFor):
                walk(op.init, in_loop)
                walk(op.body, True)
            elif isinstance(op, (OpWhile, OpDoWhile)):
                walk(op.body, True)
            elif isinstance(op, OpBlock):
                walk(op, in_loop)
            i += 1
    walk(body, False)


def _pop_trailing_null_assigns(body: OpBlock) -> None:
    """For each for/while/do-while body, walk backwards through trailing
    OpExprStmt(ENAssign NULL) statements and remove them — scomp's auto-
    cleanup at scope close emits the SetNull anyway.  Only pops null-assigns
    targeting vars declared INSIDE the loop body (so the cleanup we're
    relying on actually fires)."""
    def collect_decls_in_block(blk: OpBlock):
        names = set()
        for op in blk.ops:
            if isinstance(op, OpVar):
                names.add(op.name)
        return names

    def walk(blk: OpBlock):
        for op in blk.ops:
            if isinstance(op, OpIf):
                walk(op.then_block)
                if op.else_block:
                    walk(op.else_block)
            elif isinstance(op, OpFor):
                walk(op.init)
                _try_pop_trailing(op.body)
                walk(op.body)
            elif isinstance(op, (OpWhile, OpDoWhile)):
                _try_pop_trailing(op.body)
                walk(op.body)
            elif isinstance(op, OpBlock):
                walk(op)

    def _try_pop_trailing(blk: OpBlock):
        decls = collect_decls_in_block(blk)
        idx = len(blk.ops) - 1
        while idx >= 0:
            op = blk.ops[idx]
            if not isinstance(op, OpExprStmt):
                break
            e = op.expr
            if not (isinstance(e, ENAssign) and e.op == AssignType.NULL):
                break
            if e.name not in decls:
                break
            blk.ops.pop(idx)
            idx -= 1

    walk(body)


def _is_iter_step(stmt, loop_var_name: str) -> bool:
    """True if `stmt` is `<loop_var> = <loop_var> + <const>` or `<loop_var> = <loop_var> - <const>`."""
    if not isinstance(stmt, OpExprStmt):
        return False
    e = stmt.expr
    if not isinstance(e, ENAssign) or e.op != AssignType.NONE or e.name != loop_var_name:
        return False
    rhs = e.expr
    if not isinstance(rhs, ENOp2):
        return False
    if rhs.op not in (Op2Type.PLUS, Op2Type.MINUS):
        return False
    if not isinstance(rhs.left, ENId) or rhs.left.name != loop_var_name:
        return False
    return isinstance(rhs.right, (ENInt, ENFloat))


def _pull_terminator_into_else(body: OpBlock) -> None:
    """Move a sibling terminator that immediately follows a 3-GOTO else-skip
    OpIf (tagged `_pull_else` by h_JumpB's else-skip intercept) into that if's
    else-branch.  Converts our flattened `if(c){break} <sibling continue>` back
    into `if(c){break} else {continue}` so scomp re-emits the explicit-else end-
    jump (the else-skip), reproducing the original 3-GOTO bytecode."""
    def walk(blk: OpBlock):
        ops = blk.ops
        i = 0
        while i < len(ops):
            op = ops[i]
            if isinstance(op, OpIf):
                want = getattr(op, "_pull_else", None)
                if (want is not None and op.else_block is None
                        and i + 1 < len(ops)
                        and isinstance(ops[i + 1], want)):
                    op.else_block = OpBlock(ops=[ops[i + 1]])
                    op._pull_else = None
                    del ops[i + 1]
                walk(op.then_block)
                if op.else_block is not None:
                    walk(op.else_block)
            elif isinstance(op, (OpWhile, OpDoWhile)):
                walk(op.body)
            elif isinstance(op, OpFor):
                walk(op.init)
                walk(op.body)
            elif isinstance(op, OpBlock):
                walk(op)
            i += 1
    walk(body)


def _strip_inverted_empty_then(body: OpBlock) -> None:
    """Recursively rewrite:
        `if (!X) {} else { body }`     → `if (X) { body }`
        `if (X==literal) {} else { body }`  (no recompile gain — left as is)

    Also: convert `if (X) {} else { if (Y) { else_body } }` (nested if-else
    in else-block of an empty-then if) into `else if` chain in source form
    by recognizing scomp's "next condition" pattern — but only at AST level,
    not changing bytecode.  Stripping the inversion matches scomp's bytecode
    pattern on re-compile, saving 1-3 instructions per occurrence.
    """
    def walk(blk: OpBlock):
        for i, op in enumerate(blk.ops):
            if isinstance(op, OpIf):
                # Strip outer !X → X with empty-then-else-body.
                if (op.else_block is not None
                        and not op.then_block.ops
                        and isinstance(op.cond, ENOp1)
                        and op.cond.op == Op1Type.NOT):
                    inner_cond = op.cond.node
                    op.cond = inner_cond
                    op.then_block = op.else_block
                    op.else_block = None
                walk(op.then_block)
                if op.else_block:
                    walk(op.else_block)
            elif isinstance(op, OpFor):
                walk(op.init)
                walk(op.body)
            elif isinstance(op, (OpWhile, OpDoWhile)):
                walk(op.body)
            elif isinstance(op, OpBlock):
                walk(op)
    walk(body)


def _infinite_for_to_while(body: OpBlock) -> None:
    """Recursively rewrite `for (;;) { if (!cond) break; body; }` → `while (cond) { body }`.

    scomp compiles `while(cond) { body }` to:
        LOOP_TOP: cond_expr; JumpB(false→END); body; GOTO LOOP_TOP; END:
    Our lifter often produces the infinite-for-with-leading-break shape:
        for (;;) { if (!cond) break; body; }
    which compiles to:
        cond_expr; Not(Eq); JumpB(false→body_start); Jump(END); body; GOTO; END
    (3 extra instructions per use).  This pass detects the equivalent shape
    and rewrites it as a `while` so re-compilation produces matching bytecode.
    """
    def _is_negated_if_break(op):
        """True if `op` is `if (X) break;` with no else."""
        return (isinstance(op, OpIf)
                and op.else_block is None
                and len(op.then_block.ops) == 1
                and isinstance(op.then_block.ops[0], OpBreak))


    def _strip_outer_not(expr):
        """If expr is `!X`, return X; otherwise return None.  Used to extract
        the positive cond from a `if (!cond) break;` shape."""
        if isinstance(expr, ENOp1) and expr.op == Op1Type.NOT:
            return expr.node
        return None

    def walk(blk: OpBlock):
        i = 0
        while i < len(blk.ops):
            op = blk.ops[i]
            # Detect: infinite for(;;) {  [var decls]; if(!cond) break;  body... }
            if (isinstance(op, OpFor)
                    and op.cond is None
                    and op.loop is None
                    and (not op.init.ops)
                    and op.body.ops):
                # Skip leading OpVar decls — they don't affect control flow.
                first_stmt_idx = 0
                while (first_stmt_idx < len(op.body.ops)
                       and isinstance(op.body.ops[first_stmt_idx], OpVar)):
                    first_stmt_idx += 1
                if (first_stmt_idx < len(op.body.ops)
                        and _is_negated_if_break(op.body.ops[first_stmt_idx])):
                    if_op = op.body.ops[first_stmt_idx]
                    pos_cond = _strip_outer_not(if_op.cond)
                    if pos_cond is not None:
                        # Move OpVars to AFTER the while's cond (they live
                        # inside the while body in source).  Remove the if.
                        leading_vars = op.body.ops[:first_stmt_idx]
                        new_body_ops = leading_vars + op.body.ops[first_stmt_idx + 1:]
                        new_body = OpBlock(ops=new_body_ops)
                        walk(new_body)  # recurse for nested transforms
                        while_op = OpWhile(cond=pos_cond, body=new_body)
                        blk.ops[i] = while_op
                        i += 1
                        continue
            # Recurse into children.
            if isinstance(op, OpIf):
                walk(op.then_block)
                if op.else_block:
                    walk(op.else_block)
            elif isinstance(op, OpFor):
                walk(op.init)
                walk(op.body)
            elif isinstance(op, (OpWhile, OpDoWhile)):
                walk(op.body)
            elif isinstance(op, OpBlock):
                walk(op)
            i += 1
    walk(body)


def _while_to_for(body: OpBlock) -> None:
    """Recursively rewrite loop patterns into C-style for-loops.

    Three patterns handled:
      * `init; while (cond) { body; iter; }` → `for (init; cond; iter) { body }`
      * `init; for (;;) { body; iter; }`     → `for (init; ; iter) { body }`
      * Bare `while (cond) { body; iter; }` (no init) and
        `for (;;) { body; iter; }`           → leave as-is (the iter must be
        recoverable from a preceding init for scomp's scope to match).

    For all cases, the iter step is the LAST statement of the body and must
    be `loop_var = loop_var +/- const;` on a var referenced in the cond.
    """
    def _try_rewrite(blk: OpBlock, i: int) -> bool:
        """Attempt the rewrite at position i in `blk.ops`.  Returns True iff
        a rewrite occurred.  Pattern: blk.ops[i] is an assignment, blk.ops[i+1]
        is a loop whose body's last stmt is the iter step."""
        op = blk.ops[i]
        if not (isinstance(op, OpExprStmt)
                and isinstance(op.expr, ENAssign)
                and op.expr.op == AssignType.NONE):
            return False
        if i + 1 >= len(blk.ops):
            return False
        loop_op = blk.ops[i + 1]
        loop_var = op.expr.name

        if isinstance(loop_op, OpWhile):
            cond = loop_op.cond
            body_blk = loop_op.body
            # cond must reference loop_var.
            if not _expr_refs_name(cond, loop_var):
                return False
        elif isinstance(loop_op, OpFor) and loop_op.cond is None and loop_op.loop is None and not loop_op.init.ops:
            # Infinite for (;;) — convertible.
            cond = None
            body_blk = loop_op.body
        else:
            return False

        if not body_blk.ops or not _is_iter_step(body_blk.ops[-1], loop_var):
            return False
        # Disallow other assignments to loop_var inside the body.
        for s in body_blk.ops[:-1]:
            if isinstance(s, OpExprStmt) and isinstance(s.expr, ENAssign) and s.expr.name == loop_var:
                return False

        iter_stmt = body_blk.ops[-1]
        new_body = OpBlock(ops=body_blk.ops[:-1])
        for_op = OpFor(
            init=OpBlock(ops=[op]),
            cond=cond,
            loop=iter_stmt.expr,
            body=new_body,
        )
        blk.ops[i:i + 2] = [for_op]
        return True

    def walk(blk: OpBlock):
        i = 0
        while i < len(blk.ops):
            op = blk.ops[i]
            if _try_rewrite(blk, i):
                # Recurse into the new for-body.
                walk(blk.ops[i].body)
                i += 1
                continue
            # Recurse into children.
            if isinstance(op, OpIf):
                walk(op.then_block)
                if op.else_block:
                    walk(op.else_block)
            elif isinstance(op, OpFor):
                walk(op.init)
                walk(op.body)
            elif isinstance(op, (OpWhile, OpDoWhile)):
                walk(op.body)
            elif isinstance(op, OpBlock):
                walk(op)
            i += 1
    walk(body)


# ============================================================================
# stack slot kinds
# ============================================================================

class _Slot:
    """A stack slot bound to a *named* variable (arg or local).

    Reads produce `ENId(name)`; writes produce a visible `name = expr;`.
    """
    __slots__ = ("name", "type")

    def __init__(self, name: str, type: VarType):
        self.name = name
        self.type = type


class _Reserved:
    """A stack slot reserved by INSTR_PUSHV for a call/cast/short-circuit.

    Writes silently update `.expr` (scomp's internal arg setup, not source).
    Reads return whatever was last assigned, or `default_expr` if untouched.

    Also reused for PUSHGE / PUSHE — those push the current value of a global
    or vector member onto the stack as a "scratch" cell.  Subsequent writes
    update `.expr`; a matching POPGE/POPE later turns the cell into an
    assignment statement.  If no POPGE/POPE follows, the cell is just being
    read (the .expr keeps its default = read of the source location).
    """
    __slots__ = ("type", "expr", "batch_id", "was_assigned")

    def __init__(self, type: VarType, default_expr=None, batch_id: int = 0):
        self.type = type
        # `batch_id` lets us tell apart different reserved regions on the
        # stack: a PUSHV for a call vs an earlier PUSHE/PUSHGE/AND-OR
        # scratch.  Zero = not from a counted PUSHV batch.
        self.batch_id = batch_id
        # True once any explicit assignment overwrites the default.  Used to
        # distinguish a CALL's return slot (bottom of PUSHV batch, never
        # filled by the caller) from a "real" argument.
        self.was_assigned = False
        if default_expr is not None:
            self.expr: object = default_expr
        else:
            self.expr = _zero_literal(type)


def _zero_literal(t: VarType):
    if t == VarType.BOOL:   return ENBool(False)
    if t == VarType.INT:    return ENInt(0)
    if t == VarType.FLOAT:  return ENFloat(0.0)
    if t == VarType.STRING: return ENString("")
    if t == VarType.VECTOR: return ENVector(0.0, 0.0, 0.0)
    if t == VarType.OBJECT:
        # scomp's parser doesn't accept `null` as a literal expression.
        # We synthesize an uninitialized `object _null` local at function
        # scope and reference it here.  See `_finalize_func` for the decl.
        return ENId("_null_obj")
    return ENId(f"_uninit_{t.keyword}")


# ============================================================================
# function-level lifter
# ============================================================================

class _FuncLifter:
    def __init__(
        self,
        ctx: _ScriptCtx,
        instrs,
        num_args: int,
        arg_types: List[VarType],
        local_types: List[VarType],
        task_var_types: List[VarType],
        return_type: VarType,
        return_addr: int,
        task_index: Optional[int] = None,
        func_name: Optional[str] = None,
        func_addr: Optional[int] = None,
    ):
        self.ctx = ctx
        self.instrs = instrs
        # Stable reference to the WHOLE function's instruction stream.  `instrs`
        # above is swapped out to the current slice during subblock lifting, so
        # this preserves a way to look up instructions (e.g. an if-else's
        # else-label) that fall just past the current slice boundary.
        self.func_instrs = instrs
        self.num_args = num_args
        self.arg_types = arg_types
        self.local_types = local_types
        self.task_var_types = task_var_types
        self.return_type = return_type
        self.return_addr = return_addr
        # task this function belongs to (None = global function); discovered
        # CALL targets we encounter inherit this so they end up as methods of
        # the same task in pass 2.
        self.task_index = task_index
        # Name and entry address of the function being lifted.  Used to detect
        # super-calls: when the current function's name matches a CALL target's
        # name but the addresses differ (= a sibling task's method with same
        # event name), emit `super.X()` instead of `X()` to disambiguate.
        self.func_name = func_name
        self.func_addr = func_addr

        # Mirror scomp's stack layout.  The callee enters on a stack that
        # already contains the caller's PUSHV slots (return-slot if any, then
        # args).  After the callee's own entry PUSHV: args, dead copies, and
        # real locals.  The dead copies come from scomp's bug of running
        # ProcessVariables twice (Program.cpp:873-877).
        self.stack: list = []
        if return_type != VarType.VOID:
            # Caller reserved a slot at the BOTTOM of our frame for our return
            # value.  Compiling `return expr;` emits a Mov writing to this slot.
            # batch_id=-1 marks it as "not from a mid-body PushV" so the
            # binop2 cast detection doesn't mistake it for an explicit cast
            # temp (which would add a spurious outer `(T)` to the returned expr).
            self.stack.append(_Reserved(return_type, batch_id=-1))
        for i in range(num_args):
            self.stack.append(_Slot(f"a{i}", arg_types[i]))
        for t in local_types:
            self.stack.append(_Reserved(t))  # dead local copy (unreferenced)
        for i, t in enumerate(local_types):
            self.stack.append(_Slot(f"L{i}", t))

        self.statements: List = []
        self.pos = 0
        # Pre-scan: SetNull instructions that are scomp's auto-cleanup at
        # function end — they appear as a contiguous run of SetNulls
        # IMMEDIATELY preceding the function-end Return.  Skipping these in
        # h_SetNull prevents `L = null;` from being emitted twice on
        # re-compile (once explicit + once auto-cleanup).
        cleanups: set = set()
        # Find the last Return in this function's instruction range.
        last_ret_idx = -1
        for k, ins in enumerate(instrs):
            if isinstance(ins.opcode, PS.CInstructionReturn):
                last_ret_idx = k
        if last_ret_idx > 0:
            k = last_ret_idx - 1
            while k >= 0 and isinstance(instrs[k].opcode, PS.CInstructionSetNull):
                cleanups.add(instrs[k].index)
                k -= 1

        # ALSO mark scope-close SetNulls that occur inside loops: right before
        # a backward Jump (or right before the iter-step preceding a back-Jump)
        # scomp emits auto-cleanup SetNulls for object locals declared inside
        # the loop body.
        # A backward Jump is `CInstructionJump` whose VarIn < its own address.
        addr_to_pos = {ins.index: k for k, ins in enumerate(instrs)}
        for k, ins in enumerate(instrs):
            if not isinstance(ins.opcode, PS.CInstructionJump):
                continue
            target = ins.opcode.VarIn
            if target >= ins.index:
                continue  # forward jump
            # Walk backward from this back-Jump's position, skipping the iter
            # step pattern (Push <lit> + Stack[var] = Stack[var] +/- Stack[-1];
            # Pop), then collect any contiguous SetNulls = scope-close cleanup.
            j = k - 1
            # Skip iter step heuristically.  The iter-step ends with a binop
            # writing to the loop var with PopCount 1.  Walk past it.
            while j >= 0:
                jop = instrs[j].opcode
                # The Add2/Sub2 with TaskVar low bits = 1 (Pop 1) at the loop
                # var slot is the iter step.  More liberally: skip arithmetic
                # binop2 + the Push that feeds it.
                if isinstance(jop, (PS.CInstructionAdd2, PS.CInstructionSub2,
                                     PS.CInstructionMult2, PS.CInstructionDiv2,
                                     PS.CInstructionMod2)):
                    j -= 1
                    # The preceding instruction is the Push of the literal/var
                    # operand consumed by the binop2.
                    if j >= 0 and isinstance(instrs[j].opcode, (PS.CInstructionPushI,
                                                                PS.CInstructionPushF,
                                                                PS.CInstructionPushB,
                                                                PS.CInstructionPush)):
                        j -= 1
                    break
                # No iter step (while/do-while) — stop scanning, SetNulls
                # right before the back-Jump are still scope-close.
                break
            # Collect contiguous SetNulls before j+1.
            while j >= 0 and isinstance(instrs[j].opcode, PS.CInstructionSetNull):
                cleanups.add(instrs[j].index)
                j -= 1

        # ALSO handle DO-WHILE back-edges (backward CInstructionJumpB): scomp
        # emits the do-body object cleanup SetNulls AFTER the body and BEFORE
        # the loop-test COND expression (which precedes the back-JumpB).  Walk
        # back from the JumpB past the cond (a bounded run of non-SetNull, non-
        # control-flow instrs) to the contiguous SetNull run.  Without this we
        # emit an explicit `L=null` AND scomp re-emits the scope-close SetNull
        # → duplicate (player_klara `do { object L5; ...; } while(f_3bf())`).
        for k, ins in enumerate(instrs):
            if not isinstance(ins.opcode, PS.CInstructionJumpB):
                continue
            if ins.opcode.VarIn >= ins.index:
                continue  # forward
            j = k - 1
            skipped = 0
            while (j >= 0 and skipped < 8
                   and not isinstance(instrs[j].opcode, PS.CInstructionSetNull)):
                if isinstance(instrs[j].opcode, (PS.CInstructionJump,
                                                 PS.CInstructionJumpB,
                                                 PS.CInstructionReturn)):
                    break
                j -= 1
                skipped += 1
            while j >= 0 and isinstance(instrs[j].opcode, PS.CInstructionSetNull):
                cleanups.add(instrs[j].index)
                j -= 1

        self._cleanup_positions: set = cleanups
        # Stack of currently-enclosing loops (innermost last).  Each entry is
        # a tuple (continue_addr, break_addr) — addresses (instr indices)
        # that Jump/JumpB might target to mean continue/break respectively.
        self.loops: List[Tuple[int, int]] = []
        # back_jump_addr of loops emitted as INFINITE `for(;;)` (no cond/iter).
        # scomp routes `continue;` in such loops to the BACK-JUMP, not the loop
        # head — so a then-block continue whose target is the loop HEAD must NOT
        # be emitted as OpContinue for these (it would mis-route); keep the
        # if/else handling instead.  Distinguishes the 82 infinite-for false
        # positives from the citizen while-loop true continues.
        self.infinite_backs: set = set()
        # Stack of merge addresses for currently-open subblocks (innermost
        # last).  An inner JumpB/Jump whose target equals an entry here is
        # a "skip-to-outer-merge" — recognised as if-else merging into outer
        # rather than as an unstructured Jump.
        self.subblock_exits: List[int] = []
        # Monotonic batch id for h_PushV — each PUSHV stamps its slots so we
        # can tell different reservation groups apart on a mixed stack.
        self._pushv_batch_seq: int = 0

    # ----- stack helpers ----------------------------------------------------

    def _slot_at(self, k_from_top: int):
        idx = len(self.stack) - k_from_top
        if idx < 0 or idx >= len(self.stack):
            raise LiftError(f"stack slot {k_from_top} out of range (depth {len(self.stack)})")
        return self.stack[idx]

    def _slot_to_expr(self, k_from_top: int):
        v = self._slot_at(k_from_top)
        if isinstance(v, _Slot):
            return ENId(v.name)
        if isinstance(v, _Reserved):
            return v.expr
        return v

    def _slot_target_name(self, k_from_top: int) -> str:
        v = self._slot_at(k_from_top)
        if isinstance(v, _Slot):
            return v.name
        raise LiftError(f"expected named var at stack slot {k_from_top}, got {type(v).__name__}")

    def _push(self, val):
        self.stack.append(val)

    def _pop(self, n: int):
        if n > 0:
            del self.stack[-n:]

    def _task_var_expr(self, idx: int):
        if idx >= len(self.task_var_types):
            raise LiftError(f"task-var index {idx} >= task-var count {len(self.task_var_types)}")
        return ENId(f"tv{idx}")

    def _global_var_expr(self, idx: int):
        return ENId(self.ctx.global_var_names[idx])

    def _count_reserved_at_top(self) -> int:
        n = 0
        for v in reversed(self.stack):
            if isinstance(v, _Reserved):
                n += 1
            else:
                break
        return n

    def _count_top_pushv_batch(self) -> int:
        """Count consecutive top _Reserved entries sharing the same nonzero
        batch_id — that's the size of the most recent PUSHV reservation.

        batch_id values: 0 = caller-pushed args/locals (no batch);
                         >0 = mid-body PushV (one per emission);
                         -1 = function's return slot (caller-pre-reserved).
        We count ONLY positive batch_ids — the return slot and pre-existing
        non-batched cells are NOT part of any local PushV batch."""
        if not self.stack or not isinstance(self.stack[-1], _Reserved):
            return 0
        top = self.stack[-1].batch_id
        if top <= 0:
            return 0
        n = 0
        for v in reversed(self.stack):
            if isinstance(v, _Reserved) and v.batch_id == top:
                n += 1
            else:
                break
        return n

    # ----- main loop --------------------------------------------------------

    def lift(self) -> OpBlock:
        self.pos = 0
        # AND/OR-via-return-slot detection at function start (before main lift).
        if self._try_lift_return_short_circuit():
            return OpBlock(ops=self.statements)
        try:
            self._lift_main_loop()
        except IndexError as e:
            raise LiftError(f"internal stack/instr index error: {e}") from e
        return OpBlock(ops=self.statements)

    def _try_lift_return_short_circuit(self) -> bool:
        """Detect `return cond1 && cond2;` / `return cond1 || cond2;` pattern
        compiled with direct writes to the function's return slot.  Returns
        True iff the pattern matched and the whole function body was lifted
        as a single OpReturn statement.

        Pattern in `self.instrs` (body, excluding function-end Return):
            [PushV(0)]?         # optional, only if 0 locals
            MovB(slot=N, V0)    # init return slot
            <cond1> JumpB(target=Return_addr, b0=V0, sPop=1)
            <cond2> JumpB(...)
            ...
            MovB(slot=N, !V0)   # set on all-pass
        """
        if self.return_type == VarType.VOID:
            return False
        # Stack should have a Reserved at bottom = return slot.
        if not self.stack or not isinstance(self.stack[0], _Reserved):
            return False
        if self.stack[0].type != VarType.BOOL:
            return False
        n = len(self.instrs)
        if n < 2:
            return False
        # Skip leading no-op PushV(VarCount=0).
        start = 0
        if isinstance(self.instrs[0].opcode, PS.CInstructionPushV) and self.instrs[0].opcode.VarCount == 0:
            start = 1
        if start + 1 >= n:
            return False
        movb_init = self.instrs[start].opcode
        if not isinstance(movb_init, PS.CInstructionMovB):
            return False
        ret_slot_depth = len(self.stack)
        if movb_init.VarOut != ret_slot_depth:
            return False
        v0 = bool(movb_init.bVal)
        movb_close = self.instrs[-1].opcode
        if not isinstance(movb_close, PS.CInstructionMovB):
            return False
        if movb_close.VarOut != ret_slot_depth:
            return False
        if bool(movb_close.bVal) == v0:
            return False
        # All JumpBs in cond regions target the function-end Return address.
        end_addr = self.return_addr
        close_pos = n - 1
        jumpbs: List[int] = []
        cond_starts: List[int] = [start + 1]
        i = start + 1
        while i < close_pos:
            iop = self.instrs[i].opcode
            if isinstance(iop, PS.CInstructionJumpB):
                if iop.lVar == 1 and iop.bVal == int(v0) and iop.sPop == 1 and iop.VarIn == end_addr:
                    jumpbs.append(i)
                    cond_starts.append(i + 1)
            i += 1
        if not jumpbs:
            return False
        op2 = Op2Type.OR if v0 else Op2Type.AND
        saved_stack = list(self.stack)
        saved_stmts = list(self.statements)
        try:
            cond_exprs: List[object] = []
            for k in range(len(jumpbs)):
                cs = cond_starts[k]
                ce = jumpbs[k]
                cond_instrs = self.instrs[cs:ce]
                if not cond_instrs:
                    raise LiftError("empty cond region")
                _lift_subblock(self, cond_instrs, allow_imbalance=1)
                cond_exprs.append(self._slot_to_expr(1))
                self._pop(1)
        except (LiftError, IndexError, KeyError):
            self.stack = saved_stack
            self.statements = saved_stmts
            return False
        combined: object = cond_exprs[0]
        for ex in cond_exprs[1:]:
            combined = ENOp2(op2, combined, ex)
        self.statements.append(OpReturn(expr=combined))
        self.stack[0].was_assigned = True
        self.stack[0].expr = combined
        self.pos = len(self.instrs)
        return True

    def _lift_main_loop(self) -> None:
        """Main lift loop body — runs inline-for / do-while detection per
        iteration then dispatches to handlers.  Used both at function entry
        (via lift) and inside _lift_subblock so that nested loops are
        recognised too."""
        guard = 0
        while self.pos < len(self.instrs):
            guard += 1
            if guard > 100000:
                raise LiftError(f"lift loop guard exceeded at pos={self.pos}")
            # Infinite-for detection BEFORE short-circuit: a `for(;;)` loop HEAD
            # can itself be an && / || scaffold (sanitar/rats:
            # `for(;;){ if(A && B) break; ... }`).  If short-circuit ran first it
            # would consume the head's scaffold, leaving the back-Jump
            # unstructured.  `_find_infinite_loop_end`'s while-disambiguation now
            # skips the leading scaffold, so it returns None for genuine
            # `while(A&&B)` heads (no false fire) and non-None only for true
            # for(;;) heads.  Inside the lifted body the back-Jump is excluded,
            # so the && is handled there normally.
            if self._try_lift_infinite_for():
                continue

            # Short-circuit AND/OR detection: PushV(BOOL)+MovB+...+JumpB+...+MovB.
            if self._try_lift_short_circuit():
                continue

            # Do-while detection: a backward JumpB later in the slice
            # targeting our current address closes a `do { body } while(cond);`.
            dw_end = self._find_do_while_end()
            if dw_end is not None:
                self._lift_do_while_at(dw_end)
                continue

            # Inline `while (expr_chain, cond) {}` detection.  Pattern at
            # head H:
            #   H:    cond setup (may include side-effect calls)
            #   B-1:  JumpB(if !cond goto B+1=EXIT) bVal=0
            #   B:    Jump GOTO H (back to head)
            #   B+1:  EXIT
            # scomp emits this for `while (expr1, expr2, ..., cond) ;`.  The
            # body is empty; each side-effect call inside the comma chain
            # runs once per iteration.  Recompiles round-trip only if we
            # reconstruct the comma chain (a single back-Jump-targeting Jump
            # without the JumpB exit is the do-while case, handled above).
            wt_end = self._find_while_trailing_cond()
            if wt_end is not None:
                self._lift_while_trailing_cond_at(wt_end)
                continue

            op = self.instrs[self.pos].opcode
            cls = type(op).__name__
            handler = _HANDLERS.get(cls)
            if handler is None:
                raise LiftError(f"unhandled opcode {cls} at instruction {self.instrs[self.pos].index:#x}")
            handler(self, op)

    def _try_lift_infinite_for(self) -> bool:
        """If a later unconditional Jump targets the current address, this is an
        infinite-for head: lift [pos, back-Jump) as the body, register the loop,
        and skip past the closing Jump.  Returns True if a loop was lifted."""
        loop_end = self._find_infinite_loop_end()
        if loop_end is None:
            return False
        body_instrs = self.instrs[self.pos:loop_end]
        continue_addr = self.instrs[self.pos].index
        # break-target = the address right after the closing Jump.  Addresses
        # are sequential instruction indices in the .bin, so (Jump.index + 1) is
        # the post-loop address even if the next instruction isn't in our slice.
        back_jump_addr = self.instrs[loop_end].index
        break_addr = back_jump_addr + 1
        # Inner jumps targeting either the head (continue_addr) OR the back-Jump
        # instruction itself (back_jump_addr) both achieve a `continue`.
        self.loops.append((continue_addr, break_addr, back_jump_addr))
        self.infinite_backs.add(back_jump_addr)  # emitted as for(;;)
        try:
            body_block = _lift_subblock(self, body_instrs)
        finally:
            self.loops.pop()
        self.statements.append(OpFor(
            init=OpBlock(ops=[]), cond=None, loop=None, body=body_block,
        ))
        self.pos = loop_end + 1
        return True

    def _try_lift_short_circuit(self) -> bool:
        """Recognise scomp's AND/OR short-circuit pattern (Expression.cpp:1657-1691):

            PushV(1, BOOL)
            MovB slot=1, bSet            (bSet = 1 for OR, 0 for AND)
            <cond1 setup>
            JumpB slot=1, target=END_ADDR, b0=bSet, sPop=1
            <cond2 setup>
            JumpB slot=1, target=END_ADDR, b0=bSet, sPop=1
            ... (any number of cond/JumpB pairs) ...
            MovB slot=1, !bSet
            END_ADDR: ...

        Lifts to a single combined `cond1 OR cond2 OR ...` (OR) or
        `cond1 AND cond2 AND ...` (AND) expression and pushes the result
        as a _Reserved cell so it can be consumed by the following
        instruction (typically an outer JumpB).
        """
        if self.pos + 1 >= len(self.instrs):
            return False
        pv = self.instrs[self.pos].opcode
        if not isinstance(pv, PS.CInstructionPushV):
            return False
        if pv.VarCount != 1 or pv.VarTypes[0] != 1:  # not (BOOL,)
            return False
        movb = self.instrs[self.pos + 1].opcode
        if not isinstance(movb, PS.CInstructionMovB) or movb.VarOut != 1:
            return False
        b_set = bool(movb.bVal)

        # Try the RECURSIVE _parse_andor parser FIRST — it correctly handles
        # arbitrary NESTED &&/|| (OR-of-ANDs, &&-of-ORs, >=3-term) that the flat
        # scan below mis-counts (its _find_inner_close miscounts the multi-slot
        # scaffolds in quest_d2_02 / NPC_Danko_Eva / sanitar-rats &&-bodies).
        # On ANY structural mismatch it raises → we restore and fall back to the
        # flat scan (which still handles the special arg-init-MovB cases).
        _sv_stack = list(self.stack)
        _sv_stmts = list(self.statements)
        _sv_pos = self.pos
        _sv_instrs = self.instrs
        try:
            self._push(_Reserved(VarType.BOOL))   # scomp's PushV(1,BOOL) dest slot
            expr, end_pos = _parse_andor(self, self.pos + 1)
            self.stack[-1].expr = expr
            self.stack[-1].was_assigned = True
            self.pos = end_pos
            return True
        except (LiftError, IndexError, KeyError):
            self.stack[:] = _sv_stack
            self.statements[:] = _sv_stmts
            self.pos = _sv_pos
            self.instrs = _sv_instrs

        # Scan forward for the closing MovB(slot=1, !bSet) and collect JumpBs.
        # When we encounter a nested PushV(1, BOOL)+MovB(slot=1) inside a cond
        # region, skip OVER the inner scaffold (find its matching closing MovB
        # and resume after) — its MovB(slot=1) would otherwise be mistaken
        # for the outer's closing.
        jumpbs: List[int] = []
        cond_starts: List[int] = [self.pos + 2]
        closing_pos: Optional[int] = None
        i = self.pos + 2

        def _find_inner_close(start: int, inner_b_set: bool) -> int:
            """Return the position of the inner closing MovB, or -1 on failure."""
            depth = 1
            k = start
            while k < len(self.instrs):
                kop = self.instrs[k].opcode
                if (isinstance(kop, PS.CInstructionPushV)
                        and kop.VarCount == 1 and kop.VarTypes[0] == 1
                        and k + 1 < len(self.instrs)):
                    next_op = self.instrs[k + 1].opcode
                    if (isinstance(next_op, PS.CInstructionMovB)
                            and next_op.VarOut == 1):
                        depth += 1
                        k += 2
                        continue
                if (isinstance(kop, PS.CInstructionMovB)
                        and kop.VarOut == 1
                        and bool(kop.bVal) == (not inner_b_set)):
                    depth -= 1
                    if depth == 0:
                        return k
                k += 1
            return -1

        while i < len(self.instrs):
            iop = self.instrs[i].opcode
            # Nested AND/OR scaffold start?
            if (isinstance(iop, PS.CInstructionPushV)
                    and iop.VarCount == 1 and iop.VarTypes[0] == 1
                    and i + 1 < len(self.instrs)):
                inner_movb = self.instrs[i + 1].opcode
                if (isinstance(inner_movb, PS.CInstructionMovB)
                        and inner_movb.VarOut == 1):
                    inner_b_set = bool(inner_movb.bVal)
                    inner_close = _find_inner_close(i + 2, inner_b_set)
                    if inner_close > 0:
                        # Skip past the inner scaffold's closing MovB.
                        i = inner_close + 1
                        continue
            if isinstance(iop, PS.CInstructionMovB):
                if iop.VarOut == 1 and bool(iop.bVal) == (not b_set):
                    # Candidate closing.  But a MovB(slot=1, !bSet) INSIDE a
                    # cond's CALL frame (a bool arg init, e.g. ui_trade `if(A &&
                    # f(...,true))` 0x1c5) has VarOut==1 relative to the pushed
                    # frame, NOT the andor slot — accepting it closes early.
                    # The TRUE closing's post-address (index+1) is where ALL the
                    # andor's cond JumpBs land.  Require that before accepting;
                    # otherwise it's an inner MovB → keep scanning.
                    if jumpbs and all(self.instrs[j].opcode.VarIn == self.instrs[i].index + 1
                                      for j in jumpbs):
                        closing_pos = i
                        break
            elif isinstance(iop, PS.CInstructionJumpB):
                if iop.lVar == 1 and iop.bVal == int(b_set) and iop.sPop == 1:
                    jumpbs.append(i)
                    cond_starts.append(i + 1)
            i += 1

        if closing_pos is None or not jumpbs:
            return False

        post_addr = self.instrs[closing_pos].index + 1
        for j in jumpbs:
            if self.instrs[j].opcode.VarIn != post_addr:
                return False

        # Try lifting each cond region; bail out if anything fails (and
        # restore state) — let the regular handler chain take over.
        op2 = Op2Type.OR if b_set else Op2Type.AND
        saved_stack = list(self.stack)
        saved_stmts = list(self.statements)
        saved_pos = self.pos
        saved_instrs = self.instrs
        try:
            # Simulate scomp's PushV(BOOL)+MovB scratch on stack so the cond
            # sub-blocks see the same `Stack[-K]` indexing scomp emitted
            # against (everything underneath gets shifted by 1 — without
            # this, Push Stack[-3] reads a dead-slot copy instead of the
            # intended named local).
            scratch = _Reserved(VarType.BOOL, default_expr=ENBool(b_set))
            self._push(scratch)
            cond_exprs: List[object] = []
            # Each cond is followed by a JumpB; there are N JumpBs and N
            # conds (cond_starts has an extra entry beyond closing_pos which
            # we ignore here).
            for k in range(len(jumpbs)):
                cs = cond_starts[k]
                ce = jumpbs[k]
                cond_instrs = self.instrs[cs:ce]
                if not cond_instrs:
                    raise LiftError("empty cond region")
                _lift_subblock(self, cond_instrs, allow_imbalance=1)
                cond_exprs.append(self._slot_to_expr(1))
                self._pop(1)
            # Pop the simulated scratch slot — we replace it below with a
            # _Reserved holding the combined AND/OR expression.
            self._pop(1)
        except (LiftError, IndexError, KeyError):
            self.stack = saved_stack
            self.statements = saved_stmts
            self.pos = saved_pos
            self.instrs = saved_instrs
            return False

        combined: object = cond_exprs[0]
        for ex in cond_exprs[1:]:
            combined = ENOp2(op2, combined, ex)

        # Push the AND/OR result on stack as a Reserved cell carrying the
        # combined expression (this is what scomp's PushV(1,BOOL) slot
        # represents — the result of the short-circuit chain).
        self._push(_Reserved(VarType.BOOL, default_expr=combined))
        self.pos = closing_pos + 1
        return True

    def _find_while_trailing_cond(self) -> Optional[int]:
        """Return position B of the back-Jump for a `while(...comma..., cond){}`
        pattern starting at self.pos, or None.  Pattern:
            H = self.pos:    cond setup (any number of statements, leaves
                             cond on top of stack at the end)
            B-1:             JumpB(target == B+1's addr, b0=0)
            B:               Jump(target == H's addr)  [unconditional back]

        Returns the LAST such back-Jump (= the LAST one targeting head_addr).
        Earlier back-Jumps to head_addr are `continue` from within the body
        and must not be mistaken for the loop's closing back-edge.
        """
        if self.pos >= len(self.instrs):
            return None
        head_addr = self.instrs[self.pos].index
        # Find the LAST unconditional Jump back to head_addr in the slice.
        last_back = None
        for i in range(self.pos + 1, len(self.instrs)):
            op = self.instrs[i].opcode
            if isinstance(op, PS.CInstructionJump) and op.VarIn == head_addr:
                last_back = i
        if last_back is None:
            return None
        i = last_back
        if i - 1 <= self.pos:
            return None
        prev = self.instrs[i - 1].opcode
        if not isinstance(prev, PS.CInstructionJumpB):
            return None
        if prev.bVal != 0:
            return None
        if i + 1 < len(self.instrs):
            exit_addr = self.instrs[i + 1].index
        else:
            exit_addr = self.instrs[i].index + 1
        if prev.VarIn != exit_addr:
            return None
        return i

    def _lift_while_trailing_cond_at(self, back_jump_pos: int) -> None:
        """Lift `while (expr_chain, cond) {}` at self.pos with back-Jump at
        back_jump_pos.  The cond-setup region is [self.pos, back_jump_pos-1),
        the JumpB is at back_jump_pos-1, the back-Jump at back_jump_pos."""
        head_pos = self.pos
        jumpb_pos = back_jump_pos - 1
        cond_setup_instrs = self.instrs[head_pos:jumpb_pos]

        head_addr = self.instrs[head_pos].index
        # Continue jumps to the head; break exits past the back-Jump.
        continue_addr = head_addr
        if back_jump_pos + 1 < len(self.instrs):
            break_addr = self.instrs[back_jump_pos + 1].index
        else:
            break_addr = self.instrs[back_jump_pos].index + 1
        back_jump_addr = self.instrs[back_jump_pos].index

        self.loops.append((continue_addr, break_addr, back_jump_addr))
        try:
            # Lift the cond-setup region.  `allow_imbalance=1` because the
            # JumpB at back_jump_pos consumes the cond — it's still on stack
            # at the end of our sub-region.
            body_block = _lift_subblock(self, cond_setup_instrs, allow_imbalance=1)
        finally:
            self.loops.pop()

        # The cond is on top of the stack now; consume it the same way JumpB
        # would have.
        jumpb_op = self.instrs[jumpb_pos].opcode
        cond_raw = self._slot_to_expr(1)
        self._pop(jumpb_op.sPop)
        # JumpB bVal=0 ⇒ exit when cond is FALSE ⇒ continue while cond is TRUE.
        # Hence the loop condition is exactly cond_raw (no negation).
        cond_expr = cond_raw

        # Build the comma chain from the side-effect statements in body_block.
        # Each statement should be an OpExprStmt; we splice their exprs into a
        # left-leaning comma tree with the final cond.
        chain: Optional[object] = None
        for stmt in body_block.ops:
            if not isinstance(stmt, OpExprStmt):
                # Fall back: emit as a `while` with the cond and a non-empty
                # body containing whatever didn't fit (rare, but safe).
                chain = None
                break
            piece = stmt.expr
            chain = piece if chain is None else ENOp2(Op2Type.COMMA, chain, piece)
        if chain is None and body_block.ops:
            # Non-expression statements in the cond region — emit as a while
            # loop with explicit body and a trailing conditional-break.  This
            # is byte-different from the original but at least valid.
            body_block.ops.append(OpIf(
                cond=_not_expr(cond_expr),
                then_block=OpBlock(ops=[OpBreak()]),
            ))
            self.statements.append(OpFor(
                init=OpBlock(ops=[]), cond=None, loop=None, body=body_block,
            ))
        else:
            full_cond = cond_expr if chain is None else ENOp2(Op2Type.COMMA, chain, cond_expr)
            self.statements.append(OpWhile(cond=full_cond, body=OpBlock(ops=[])))
        self.pos = back_jump_pos + 1

    def _find_do_while_end(self) -> Optional[int]:
        """Return the position of the LAST backward JumpB targeting self.pos
        (the closing test of a do-while loop), or None if no such JumpB."""
        if self.pos >= len(self.instrs):
            return None
        cur_addr = self.instrs[self.pos].index
        last = None
        for i in range(self.pos + 1, len(self.instrs)):
            jop = self.instrs[i].opcode
            if isinstance(jop, PS.CInstructionJumpB) and jop.VarIn == cur_addr:
                last = i
        return last

    def _lift_do_while_at(self, dw_end: int) -> None:
        """Lift a do-while whose body is self.instrs[self.pos:dw_end] and
        whose closing JumpB is at self.instrs[dw_end]."""
        jumpb = self.instrs[dw_end].opcode
        body_instrs = self.instrs[self.pos:dw_end]
        dw_addr = self.instrs[dw_end].index
        continue_addr = dw_addr  # default: the closing JumpB's address
        # For a do-while, scomp's `continue;` jumps to the START of the
        # condition region (where the loop-test expression begins), NOT the
        # back-JumpB.  The cond region is the trailing run of expression
        # instructions before dw_end; it begins right after the last
        # control-flow Jump/Return in the body.  Adopt that cond-start as the
        # continue target ONLY when some body GOTO actually targets it (i.e.
        # there really is a `continue;`), so non-continue do-whiles are
        # unaffected.
        cond_start = None
        for k in range(len(body_instrs) - 1, -1, -1):
            kop = body_instrs[k].opcode
            if isinstance(kop, (PS.CInstructionJump, PS.CInstructionReturn)):
                if k + 1 < len(body_instrs):
                    cond_start = body_instrs[k + 1].index
                break
        # The walk-back cond_start can land one or more statements BEFORE the
        # actual cond-eval start when a trailing `if(x) return;`/statement sits
        # between the last body terminator and the cond expression (player_klara
        # `do{...; if(m_bWC) return; continue;}while(f())` — last Return at
        # 0x3a6, then `Stack[-14]=0` at 0x3a7, then the cond `f()` at 0x3a8; the
        # `continue;` targets 0x3a8).  So accept the EARLIEST body-GOTO target
        # that lands inside the cond region [cond_start, dw_addr] (a forward
        # jump from the body proper, index < cond_start) as the continue addr.
        if cond_start is not None:
            cont_cands = [
                b.opcode.VarIn for b in body_instrs
                if isinstance(b.opcode, PS.CInstructionJump)
                and b.index < cond_start
                and cond_start <= b.opcode.VarIn <= dw_addr]
            if cont_cands:
                continue_addr = min(cont_cands)
        # break exits past the JumpB.
        break_addr = dw_addr + 1
        self.loops.append((continue_addr, break_addr, None))
        try:
            body_block = _lift_subblock(self, body_instrs, allow_imbalance=1)
        finally:
            self.loops.pop()
        # The cond was left on top of the stack by the body's tail.
        # JumpB has bVal=1 meaning "jump back if cond is true" (do-while
        # repeats while cond holds).  Pop the cond and emit.
        cond_expr = self._slot_to_expr(1)
        self._pop(jumpb.sPop)
        if jumpb.bVal == 0:
            # Repeating while cond is FALSE → do-while with inverted cond.
            cond_final = _not_expr(cond_expr)
        else:
            cond_final = cond_expr
        self.statements.append(OpDoWhile(body=body_block, cond=cond_final))
        self.pos = dw_end + 1

    def _find_infinite_loop_end(self) -> Optional[int]:
        """If any later unconditional Jump in self.instrs targets the address
        at self.pos, return the position of the LAST such Jump (which is the
        loop's closing back-edge — `continue`s inside the body produce earlier
        back-edges to the same target).

        Returns None if no such Jump exists, OR if the region between self.pos
        and that Jump looks like a `while`/`for` cond-test (a near-leading
        JumpB whose target is right past the back-Jump — that's the loop's
        conditional exit, handled by h_JumpB's while-loop detection instead).
        """
        if self.pos >= len(self.instrs):
            return None
        cur_addr = self.instrs[self.pos].index
        last = None
        for i in range(self.pos + 1, len(self.instrs)):
            jop = self.instrs[i].opcode
            if isinstance(jop, PS.CInstructionJump) and jop.VarIn == cur_addr:
                last = i
        if last is None:
            return None
        # While-loop disambiguation: scomp's `while (cond) body` emits
        # [cond setup][JumpB skip-if-false target=END_ADDR][body][JUMP back][END].
        # If the first JumpB after self.pos has target == END_ADDR (i.e.
        # right past `last`), and is positioned near the start (within a
        # plausible cond-setup distance), let h_JumpB handle this as a
        # while loop rather than treating it as `for(;;)`.
        end_addr = self.instrs[last].index + 1
        # Scan the LINEAR cond-setup prefix up to the first branch.  A `while
        # (cond) body` has purely sequential cond-setup (possibly a Call with
        # many arg pushes — e.g. `while (!f(a,b,c,d)) {...}`, kactor1) ending
        # in a JumpB whose target is END_ADDR (just past the back-Jump).  A
        # `for(;;)` whose body starts with an `if`/`if(!c) break` instead has
        # its first JumpB target END_if (the body merge), never END_ADDR, so it
        # falls through to the `for(;;)` interpretation.  Stop at the first
        # Jump/JumpB: anything past it belongs to the body, not the cond, so a
        # deeper break/continue can't masquerade as the loop's conditional exit
        # (no fixed distance cap — the cond's call args can be arbitrarily long).
        # If the head is a value-producing short-circuit scaffold (PushV(bool);
        # MovB(slot=1,v0); ...; MovB(slot=1,!v0)) — i.e. `while(A&&B)` — the
        # scaffold's internal cond-JumpBs target the scaffold END, not the loop
        # END, so the naive "first JumpB" check below mis-reads it as a for(;;)
        # (citizen_boy 0xb84).  Skip the leading scaffold (depth-counted over
        # nested scaffolds) so the scan sees the REAL loop-exit JumpB after it.
        scan_start = self.pos
        sp = self.pos
        if (sp + 1 < len(self.instrs)
                and isinstance(self.instrs[sp].opcode, PS.CInstructionPushV)
                and self.instrs[sp].opcode.VarCount == 1
                and self.instrs[sp].opcode.VarTypes[0] == 1
                and isinstance(self.instrs[sp + 1].opcode, PS.CInstructionMovB)
                and self.instrs[sp + 1].opcode.VarOut == 1):
            v0 = bool(self.instrs[sp + 1].opcode.bVal)
            depth = 1
            k = sp + 2
            while k < last:
                kop = self.instrs[k].opcode
                if (isinstance(kop, PS.CInstructionPushV)
                        and kop.VarCount == 1 and kop.VarTypes[0] == 1
                        and k + 1 < len(self.instrs)
                        and isinstance(self.instrs[k + 1].opcode, PS.CInstructionMovB)
                        and self.instrs[k + 1].opcode.VarOut == 1):
                    depth += 1
                    k += 2
                    continue
                if (isinstance(kop, PS.CInstructionMovB)
                        and kop.VarOut == 1
                        and bool(kop.bVal) == (not v0)):
                    depth -= 1
                    if depth == 0:
                        scan_start = k + 1
                        break
                k += 1
        for i in range(scan_start, last):
            op = self.instrs[i].opcode
            if isinstance(op, PS.CInstructionJumpB):
                if op.VarIn == end_addr:
                    return None  # while-loop pattern
                break
            if isinstance(op, PS.CInstructionJump):
                break  # hit body control-flow before any cond JumpB → for(;;)
        return last


# ============================================================================
# opcode handlers
# ============================================================================

def _h_push_literal(state: _FuncLifter, expr):
    state._push(expr); state.pos += 1


def h_PushB(s, op):  _h_push_literal(s, ENBool(bool(op.VarIn)))
def h_PushI(s, op):  _h_push_literal(s, ENInt(int(op.VarIn)))
def h_PushF(s, op):  _h_push_literal(s, ENFloat(float(op.VarIn)))
def h_PushS(s, op):  _h_push_literal(s, ENString(op.String))
def h_PushVec(s, op):
    v = op.CVector
    _h_push_literal(s, ENVector(v.x, v.y, v.z))


def h_Push(s: _FuncLifter, op):
    """Push(Stack[-K]) — copy a value already on stack onto a new top slot."""
    s._push(s._slot_to_expr(op.VarIn)); s.pos += 1


def h_PushT(s: _FuncLifter, op):
    """Push task var by index."""
    s._push(s._task_var_expr(op.VarIn)); s.pos += 1


def h_PushGE(s: _FuncLifter, op):
    """Push a copy of GlobalVars[N] as a scratch cell.

    Default expr is `ENId(g_N)` (the global itself, for plain reads).  If a
    later Mov*/Push* writes to this cell and a POPGE pops it without the
    leave-on-stack flag, the cell becomes a global-var assignment."""
    gname = s.ctx.global_var_names[op.VarIn]
    gtype = s.ctx.global_var_types[op.VarIn]
    s._push(_Reserved(gtype, default_expr=ENId(gname)))
    s.pos += 1


def h_PushE(s: _FuncLifter, op):
    if op.TaskVar:
        base = s._task_var_expr(op.VarIn)
    else:
        base = s._slot_to_expr(op.VarIn)
    if not isinstance(base, ENId):
        raise LiftError("PushE on non-ENId base not yet supported (vector cmpt)")
    member = {0: "x", 1: "y", 2: "z"}.get(op.Index)
    if member is None:
        raise LiftError(f"PushE bad vector index {op.Index}")
    s._push(_Reserved(VarType.FLOAT, default_expr=ENIdStruct(base.name, member)))
    s.pos += 1


def h_PushV(s: _FuncLifter, op):
    if op.VarCount == 0:
        # PUSHV(0) — no-op, but still advance.
        s.pos += 1
        return
    s._pushv_batch_seq += 1
    bid = s._pushv_batch_seq
    for t in op.VarTypes:
        s._push(_Reserved(_ps_type_to_var(t), batch_id=bid))
    s.pos += 1


def h_Pop(s: _FuncLifter, op):
    s._pop(op.PopCount); s.pos += 1


def h_PopE(s: _FuncLifter, op):
    """`x.member = expr;` for a vector x or its task-var equivalent.

    Compiler emits: PUSHE base, ix → ASSIGN to stack[-1] → POPE base, ix, flags.
    Flags: bit 1 (0x02) = "leave value on stack" (used when the assign is an
    expression context); bit 0 (0x01) = "base is task var".

    Phase A only handles the simple statement-context POPE (flags & 2 == 0)
    where the assigned value comes from a temp at stack[-1].
    """
    if op.Flags & 0x02:
        raise LiftError("PopE with leave-on-stack flag not yet handled")
    if op.Flags & 0x01:
        base_name = f"tv{op.VarOut}"
    else:
        try:
            base_name = s._slot_target_name(op.VarOut)
        except LiftError as e:
            raise LiftError(f"PopE base not named: {e}")
    member = {0: "x", 1: "y", 2: "z"}.get(op.Index)
    if member is None:
        raise LiftError(f"PopE bad vector index {op.Index}")
    # The value being written was pushed via the preceding setup; it's now at
    # stack[-1]. Take it as our RHS, then pop it.
    rhs = s._slot_to_expr(1)
    s._pop(1)
    # Detect compound-assign shape: rhs == `base.member OP other`.  scomp
    # compiles `v.y += other` with a single PushE+Add2+PopE; the plain
    # `v.y = v.y + other` would compile to PushE+PushE+Add+PopE (one extra
    # PushE).  When our rhs syntactically matches the LHS member, emit the
    # compound form so scomp re-emits the shorter shape.
    _COMPOUND_FROM_OP2 = {
        Op2Type.PLUS: AssignType.PLUS,
        Op2Type.MINUS: AssignType.MINUS,
        Op2Type.MULT: AssignType.MULT,
        Op2Type.DIV: AssignType.DIV,
        Op2Type.MOD: AssignType.MOD,
        Op2Type.BAND: AssignType.BAND,
        Op2Type.BOR: AssignType.BOR,
        Op2Type.BXOR: AssignType.BXOR,
    }
    assign_op = AssignType.NONE
    assign_value = rhs
    if isinstance(rhs, ENOp2) and rhs.op in _COMPOUND_FROM_OP2:
        if (isinstance(rhs.left, ENIdStruct)
                and rhs.left.name == base_name
                and rhs.left.member == member):
            assign_op = _COMPOUND_FROM_OP2[rhs.op]
            assign_value = rhs.right
    s.statements.append(OpExprStmt(expr=ENAssignStruct(
        assign_op, base_name, member, assign_value,
    )))
    s.pos += 1


def _as_global_incr(gname: str, rhs):
    """If `rhs` is `gname + 1` / `gname - 1` (or `gname + -1`), return the
    compact INCRP/DECRP assign — scomp compiles a global `g++`/`g--` WITHOUT
    re-pushing the global ref, so the optimized bytecode our lifter sees must
    round-trip as `g++`/`g--`, not `g = g + 1` (which adds an extra global
    push).  Other increments (g + N, N!=1) are left as ordinary assigns."""
    if not isinstance(rhs, ENOp2):
        return None
    if not (isinstance(rhs.left, ENId) and rhs.left.name == gname):
        return None
    if not isinstance(rhs.right, ENInt):
        return None
    if rhs.op == Op2Type.PLUS and rhs.right.value == 1:
        return ENAssign(op=AssignType.INCRP, name=gname, expr=None)
    if rhs.op == Op2Type.PLUS and rhs.right.value == -1:
        return ENAssign(op=AssignType.DECRP, name=gname, expr=None)
    if rhs.op == Op2Type.MINUS and rhs.right.value == 1:
        return ENAssign(op=AssignType.DECRP, name=gname, expr=None)
    return None


def h_PopGE(s: _FuncLifter, op):
    """Global var assignment: `g_N = expr;`. Flags bit 0 = leave-on-stack."""
    if op.Flags & 0x01:
        raise LiftError("PopGE with leave-on-stack flag not yet handled")
    gname = s.ctx.global_var_names[op.VarOut]
    rhs = s._slot_to_expr(1)
    s._pop(1)
    incr = _as_global_incr(gname, rhs)
    s.statements.append(OpExprStmt(
        expr=incr if incr is not None
        else ENAssign(AssignType.NONE, gname, rhs)))
    s.pos += 1


# ----- local-slot moves -----------------------------------------------------

def _assign_local_slot(s: _FuncLifter, k_from_top: int, expr):
    target = s._slot_at(k_from_top)
    if isinstance(target, _Slot):
        s.statements.append(OpExprStmt(expr=ENAssign(AssignType.NONE, target.name, expr)))
    elif isinstance(target, _Reserved):
        target.expr = expr
        target.was_assigned = True
    else:
        raise LiftError(f"cannot assign to slot of type {type(target).__name__}")


def h_MovB(s, op):
    # AND/OR-chain-to-return-slot detection.
    # Pattern: MovB(slot=ret_slot, V0); <cond1>; JumpB(end, V0);
    # ... <condN>; JumpB(end, V0); MovB(slot=ret_slot, !V0).
    # Lift as `<ret_slot> = cond1 [&& cond2 ...];` (V0=0 → AND, V0=1 → OR).
    if _try_lift_andor_to_ret_slot(s, op):
        return
    if _try_lift_andor_nested(s, op):
        return
    _assign_local_slot(s, op.VarOut, ENBool(bool(op.bVal))); s.pos += 1


def _try_lift_andor_to_ret_slot(s: _FuncLifter, op) -> bool:
    """When MovB writes to the function's return slot (the bottom-of-frame
    Reserved with batch_id=-1) with value V0, scan forward for the
    `<cond>; JumpB(end, V0)` chain followed by `MovB(slot=ret_slot, !V0)`.
    Lift the whole chain as a single assignment to the return slot.

    This matches scomp's emission for `result = cond1 && cond2 [&& ...];`
    (or || when V0=1) where `result` is a function return-slot.  Previously
    our lifter treated each JumpB as `if(cond) return;`, fragmenting the
    expression and producing different bytecode on round-trip.
    """
    if s.return_type == VarType.VOID:
        return False
    # Stack[0] must be the return slot (batch_id=-1 reserved).
    if not s.stack or not isinstance(s.stack[0], _Reserved):
        return False
    if getattr(s.stack[0], "batch_id", 0) != -1:
        return False
    if s.stack[0].type != VarType.BOOL:
        return False
    ret_depth = len(s.stack)
    if op.VarOut != ret_depth:
        return False
    v0 = bool(op.bVal)
    # Scan forward: cond regions separated by JumpB(merge, V0).
    # The chain's JumpBs all target the MERGE point = the instruction right
    # AFTER the closing `MovB(ret, !v0)` — NOT necessarily the function's
    # canonical return_addr.  When the AND/OR result is returned at a LOCAL
    # return (one of several `Return`s) the merge differs from s.return_addr
    # (e.g. fog_hunter: JumpBs -> 0x3cc local return, but return_addr=0x3ce).
    # Pre-scan to the first MovB to find that closing MovB and the merge addr.
    _pscan = s.pos + 1
    _close = None
    while _pscan < len(s.instrs):
        _io = s.instrs[_pscan].opcode
        if isinstance(_io, PS.CInstructionMovB):
            if _io.VarOut == ret_depth and bool(_io.bVal) != v0:
                _close = _pscan
            break
        _pscan += 1
    if _close is None:
        return False
    end_addr = (s.instrs[_close + 1].index
                if _close + 1 < len(s.instrs) else s.return_addr)
    pos = s.pos + 1
    jumpbs: List[int] = []
    cond_starts: List[int] = [pos]
    while pos < len(s.instrs):
        iop = s.instrs[pos].opcode
        if isinstance(iop, PS.CInstructionJumpB):
            if (iop.lVar == 1 and iop.bVal == int(v0)
                    and iop.sPop == 1 and iop.VarIn == end_addr):
                jumpbs.append(pos)
                cond_starts.append(pos + 1)
                pos += 1
                continue
        if isinstance(iop, PS.CInstructionMovB):
            if iop.VarOut == ret_depth and bool(iop.bVal) != v0:
                # Closing MovB found.
                close_pos = pos
                if not jumpbs:
                    return False
                # Lift each cond region as a 1-extra-push subblock.
                saved_stack = list(s.stack)
                saved_stmts = list(s.statements)
                saved_pos = s.pos
                cond_exprs: List[object] = []
                try:
                    for k in range(len(jumpbs)):
                        cs = cond_starts[k]
                        ce = jumpbs[k]
                        cond_instrs = s.instrs[cs:ce]
                        if not cond_instrs:
                            raise LiftError("empty cond region")
                        _lift_subblock(s, cond_instrs, allow_imbalance=1)
                        cond_exprs.append(s._slot_to_expr(1))
                        s._pop(1)
                except (LiftError, IndexError, KeyError):
                    s.stack = saved_stack
                    s.statements = saved_stmts
                    s.pos = saved_pos
                    return False
                op2 = Op2Type.OR if v0 else Op2Type.AND
                combined = cond_exprs[0]
                for ex in cond_exprs[1:]:
                    combined = ENOp2(op2, combined, ex)
                # Record as a return-slot assignment statement.  The function's
                # post-body return-emission then uses this expression.
                s.stack[0].was_assigned = True
                s.stack[0].expr = combined
                # Skip to past the closing MovB.
                s.pos = close_pos + 1
                return True
            # Other MovB to non-return slot: bail.
            return False
        pos += 1
    return False


def _is_bool_pushv(op) -> bool:
    """PushV reserving exactly one BOOL slot — scomp's andor sub-result scaffold."""
    return (isinstance(op, PS.CInstructionPushV)
            and op.VarCount == 1 and len(op.VarTypes) == 1 and op.VarTypes[0] == 1)


def _parse_andor(s: _FuncLifter, movb_pos: int):
    """Recursively parse scomp's value-producing OR/AND short-circuit codegen
    (Expression.cpp CENodeOp2::Compile + IOperator.cpp CompileCondJump):

        MovB(dest, v0)                       ; v0=true → OR, v0=false → AND
        <region0 value>;  JumpB(==v0, sPop=1, target=END)
        <region1 value>;  JumpB(==v0, sPop=1, target=END)
        MovB(dest, !v0)
        END:

    Each region's value is either a simple expression (lifted via
    _lift_subblock) or a NESTED andor (`PushV(bool); MovB(top, v0'); ...`,
    which scomp emits for a sub-`||`/`&&` because `node->Compile(ulRet=0)`
    reserves a fresh bool slot).  Always exactly 2 regions per level
    (left-assoc `a||b||c` = `(a||b)||c` nests on region0).

    Mutates s.stack to keep depth consistent for the simple-region lifts; the
    caller must save/restore on failure.  Returns (expr_node, end_pos).  Raises
    LiftError if the structure doesn't match."""
    if movb_pos >= len(s.instrs):
        raise LiftError("andor: movb_pos OOB")
    movb = s.instrs[movb_pos].opcode
    if not isinstance(movb, PS.CInstructionMovB):
        raise LiftError("andor: expected opening MovB")
    v0 = bool(movb.bVal)
    dest_depth = movb.VarOut
    if dest_depth < 1 or dest_depth > len(s.stack):
        raise LiftError("andor: dest depth out of range")
    if not isinstance(s._slot_at(dest_depth), _Reserved):
        raise LiftError("andor: dest not a reserved slot")
    op2 = Op2Type.OR if v0 else Op2Type.AND
    pos = movb_pos + 1
    operands = []
    region_jumpbs = []
    for _ in range(2):
        expr, pos = _parse_andor_region(s, pos, v0)
        operands.append(expr)
        if pos >= len(s.instrs):
            raise LiftError("andor: missing region JumpB")
        jb = s.instrs[pos].opcode
        if not (isinstance(jb, PS.CInstructionJumpB) and jb.lVar == 1
                and jb.bVal == int(v0) and jb.sPop == 1):
            raise LiftError("andor: expected region JumpB(==v0,sPop=1)")
        region_jumpbs.append(pos)
        s._pop(1)            # the JumpB consumes the operand value
        pos += 1
    if pos >= len(s.instrs):
        raise LiftError("andor: missing closing MovB")
    close = s.instrs[pos].opcode
    if not (isinstance(close, PS.CInstructionMovB)
            and close.VarOut == dest_depth and bool(close.bVal) != v0):
        raise LiftError("andor: expected closing MovB(dest,!v0)")
    end_addr = (s.instrs[pos + 1].index if pos + 1 < len(s.instrs)
                else s.return_addr)
    for jbp in region_jumpbs:
        if s.instrs[jbp].opcode.VarIn != end_addr:
            raise LiftError("andor: region JumpB target != END")
    return ENOp2(op2, operands[0], operands[1]), pos + 1


def _parse_andor_region(s: _FuncLifter, pos: int, v0: bool):
    """Parse one operand region; leave its value on the stack (+1 net) and
    return (expr, pos_of_terminating_JumpB)."""
    if pos >= len(s.instrs):
        raise LiftError("andor region: OOB")
    op = s.instrs[pos].opcode
    nxt = s.instrs[pos + 1].opcode if pos + 1 < len(s.instrs) else None
    if (_is_bool_pushv(op) and isinstance(nxt, PS.CInstructionMovB)
            and nxt.VarOut == 1):
        # Nested andor: the PushV(bool) reserves this sub-expression's slot.
        s._push(_Reserved(VarType.BOOL))
        expr, end = _parse_andor(s, pos + 1)
        # value now lives on the pushed slot (still on stack → +1 net).
        s.stack[-1].expr = expr
        s.stack[-1].was_assigned = True
        return expr, end
    # Simple region: everything up to the next JumpB(==v0, sPop=1).
    jb_pos = pos
    while jb_pos < len(s.instrs):
        iop = s.instrs[jb_pos].opcode
        if (isinstance(iop, PS.CInstructionJumpB) and iop.lVar == 1
                and iop.bVal == int(v0) and iop.sPop == 1):
            break
        jb_pos += 1
    if jb_pos <= pos or jb_pos >= len(s.instrs):
        raise LiftError("andor region: no terminating JumpB")
    region_instrs = s.instrs[pos:jb_pos]
    _lift_subblock(s, region_instrs, allow_imbalance=1)
    return s._slot_to_expr(1), jb_pos


def _try_lift_andor_nested(s: _FuncLifter, op) -> bool:
    """Recursive andor lift for the function RETURN slot, handling NESTED
    operands (which the flat _try_lift_andor_to_ret_slot bails on, e.g.
    soldier_stationary f_6d8 `return cls=="worker"||cls=="butcher"||...`).
    Fires only when MovB writes the ret slot (batch_id -1, BOOL) AND region0
    begins with a nested andor scaffold (`PushV(bool)+MovB`)."""
    if s.return_type == VarType.VOID:
        return False
    if not s.stack or not isinstance(s.stack[0], _Reserved):
        return False
    if getattr(s.stack[0], "batch_id", 0) != -1 or s.stack[0].type != VarType.BOOL:
        return False
    ret_depth = len(s.stack)
    if op.VarOut != ret_depth:
        return False
    p = s.pos + 1
    if not (p + 1 < len(s.instrs) and _is_bool_pushv(s.instrs[p].opcode)
            and isinstance(s.instrs[p + 1].opcode, PS.CInstructionMovB)):
        return False
    saved_stack = list(s.stack)
    saved_stmts = list(s.statements)
    saved_pos = s.pos
    try:
        expr, end_pos = _parse_andor(s, s.pos)
    except (LiftError, IndexError, KeyError, AttributeError):
        s.stack = saved_stack
        s.statements = saved_stmts
        s.pos = saved_pos
        return False
    if len(s.stack) != len(saved_stack):
        s.stack = saved_stack
        s.statements = saved_stmts
        s.pos = saved_pos
        return False
    s.stack[0].was_assigned = True
    s.stack[0].expr = expr
    s.pos = end_pos
    return True


def h_MovI(s, op): _assign_local_slot(s, op.VarOut, ENInt(int(op.lVal))); s.pos += 1
def h_MovF(s, op): _assign_local_slot(s, op.VarOut, ENFloat(float(op.fVal))); s.pos += 1
def h_MovS(s, op): _assign_local_slot(s, op.VarOut, ENString(op.String)); s.pos += 1
def h_MovV(s, op):
    v = op.CVector
    _assign_local_slot(s, op.VarOut, ENVector(v.x, v.y, v.z)); s.pos += 1


def h_Mov(s: _FuncLifter, op):
    """INSTR_MOV: copy local slot to local slot.

    NOTE: PathologicScript's CInstructionMov has its VarOut/VarIn fields
    swapped relative to scomp's emit order — scomp writes
    `<< ulVar << ulRet` (Program.cpp inside CompileMoveVar) i.e. SRC first
    then DEST.  PathologicScript reads them in that order but names them
    VarOut (first/SRC) and VarIn (second/DEST), the opposite of every
    other Mov-family class (MovT/TMov/TMovT use VarIn for the first byte =
    SRC).  Below we use the *semantic* meaning, not the misleading names.
    """
    src_slot = op.VarOut   # first byte read = scomp's ulVar (SRC)
    dest_slot = op.VarIn   # second byte = scomp's ulRet (DEST)
    src_expr = s._slot_to_expr(src_slot)
    # Type-cast detection: if SRC and DEST have different (scalar) types,
    # the Mov was scomp's emission for `(T)expr` cast.  Wrap src_expr with
    # ENTypeC(dest.type, ...) so re-emit produces the PushV[T] + Mov pattern.
    src_type = _expr_slot_type(s, src_slot)
    try:
        dest_v = s._slot_at(dest_slot)
    except LiftError:
        dest_v = None
    dest_type = getattr(dest_v, "type", None)
    # SKIP cast when next instruction is the Call/typed-literal-Mov for the
    # following arg setup — that's the scomp implicit-conversion pattern of
    # `Test(z)` (z=int, Test takes bool): one Mov directly into the typed
    # arg slot, no source-level cast.  Explicit cast `(bool)z` always emits
    # an extra `Mov(temp→arg) + Pop` after the first Mov, so the next instr
    # would NOT be Call/MovI/etc.
    next_is_arg_consumer = False
    # The arg-setup Mov for a direct (last) call arg is followed by a Pop that
    # cleans up the value temp before the Call: `Push(v); Mov(arg=v); Pop(1);
    # Call`.  Look PAST that single Pop so the implicit conversion is detected
    # (ui_map `f_119(tv25.x)` — float vec component into an int arg).  An
    # EXPLICIT cast `(T)x` instead has `cast-Mov; Pop; plain-Mov(arg=temp); ...`
    # — past the Pop is a plain CInstructionMov (NOT in the consumer list
    # below), so the cast is still correctly kept.
    np = s.pos + 1
    if np < len(s.instrs) and isinstance(s.instrs[np].opcode, PS.CInstructionPop):
        np += 1
    if np < len(s.instrs):
        nxt = s.instrs[np].opcode
        if isinstance(nxt, (PS.CInstructionCall,
                            PS.CInstructionFunc,
                            PS.CInstructionObjFunc,
                            PS.CInstructionTObjFunc,
                            PS.CInstructionTaskCall,
                            PS.CInstructionMovI,
                            PS.CInstructionMovB,
                            PS.CInstructionMovF,
                            PS.CInstructionMovS,
                            PS.CInstructionMovV,
                            PS.CInstructionMovT)):
            next_is_arg_consumer = True
    if (src_type is not None
            and dest_type is not None
            and src_type != dest_type
            and src_type in (VarType.INT, VarType.FLOAT, VarType.BOOL)
            and dest_type in (VarType.INT, VarType.FLOAT, VarType.BOOL)
            and isinstance(dest_v, _Reserved)
            and not dest_v.was_assigned
            and getattr(dest_v, "batch_id", 0) > 0
            and not next_is_arg_consumer):
        # Only wrap with cast when dest is a mid-body PushV temp slot
        # (batch_id > 0).  Function-entry / return slots (batch_id <= 0)
        # implicitly convert via the Mov itself — adding `(T)` to source
        # would emit extra PushV+Mov+Pop instructions.
        src_expr = ENTypeC(dest_type, src_expr)
    _assign_local_slot(s, dest_slot, src_expr)
    s.pos += 1


def h_MovT(s: _FuncLifter, op):
    """Stack[-Out] = task_var[In]"""
    _assign_local_slot(s, op.VarOut, s._task_var_expr(op.VarIn)); s.pos += 1


# ----- task-var assignments -------------------------------------------------

def _assign_task_var(s: _FuncLifter, idx: int, expr):
    if idx >= len(s.task_var_types):
        raise LiftError(f"task-var idx {idx} out of range")
    s.statements.append(OpExprStmt(expr=ENAssign(AssignType.NONE, f"tv{idx}", expr)))


def h_TMov(s, op):
    _assign_task_var(s, op.VarOut, s._slot_to_expr(op.VarIn)); s.pos += 1
def h_TMovB(s, op): _assign_task_var(s, op.VarOut, ENBool(bool(op.bVal))); s.pos += 1
def h_TMovI(s, op): _assign_task_var(s, op.VarOut, ENInt(int(op.lVal))); s.pos += 1
def h_TMovF(s, op): _assign_task_var(s, op.VarOut, ENFloat(float(op.fVal))); s.pos += 1
def h_TMovS(s, op): _assign_task_var(s, op.VarOut, ENString(op.String)); s.pos += 1
def h_TMovV(s, op):
    v = op.CVector
    _assign_task_var(s, op.VarOut, ENVector(v.x, v.y, v.z)); s.pos += 1
def h_TMovT(s, op):
    _assign_task_var(s, op.VarOut, s._task_var_expr(op.VarIn)); s.pos += 1


# ----- set-null ------------------------------------------------------------

def h_SetNull(s: _FuncLifter, op):
    target = s._slot_at(op.VarIn)
    if s.instrs[s.pos].index in s._cleanup_positions:
        # scomp's automatic cleanup for an object local going out of scope;
        # source had no explicit `x = null;` here and re-emitting one would
        # cause scomp to compile two SetNulls.
        s.pos += 1
        return
    if isinstance(target, _Slot):
        s.statements.append(OpExprStmt(expr=ENAssign(AssignType.NULL, target.name, None)))
    elif isinstance(target, _Reserved):
        # SetNull on a reserved slot is normally scomp's auto cleanup at
        # block end — silently no-op for us.  EXCEPT when the slot was
        # just pushed by PushGE (its default_expr is ENId(global_name)) AND
        # the next instruction is PopGE writing back to the same global —
        # that's scomp's `g_var = null;` assignment pattern.  Emit the
        # explicit null-assign and consume both SetNull + PopGE.
        if (isinstance(target.expr, ENId)
                and s.pos + 1 < len(s.instrs)
                and isinstance(s.instrs[s.pos + 1].opcode, PS.CInstructionPopGE)
                and not (s.instrs[s.pos + 1].opcode.Flags & 0x01)):
            popge_op = s.instrs[s.pos + 1].opcode
            gname = s.ctx.global_var_names[popge_op.VarOut]
            if target.expr.name == gname:
                s.statements.append(
                    OpExprStmt(expr=ENAssign(AssignType.NULL, gname, None)))
                s._pop(1)
                s.pos += 2
                return
    else:
        raise LiftError(f"SetNull on slot of type {type(target).__name__}")
    s.pos += 1


def h_SetNullT(s: _FuncLifter, op):
    s.statements.append(OpExprStmt(expr=ENAssign(AssignType.NULL, f"tv{op.VarIn}", None)))
    s.pos += 1


# ----- extern call ---------------------------------------------------------

def _resolve_fvar(s: _FuncLifter, fv):
    if fv.Task:
        return s._task_var_expr(fv.Var)
    return s._slot_to_expr(fv.Var)


def h_Func(s: _FuncLifter, op):
    """Extern @name(args). Push-args + FUNC + POP."""
    args = [_resolve_fvar(s, fv) for fv in op.fvar]
    s.pos += 1
    push_count = _consume_trailing_pop(s)
    s._pop(push_count)
    s.statements.append(OpExprStmt(expr=ENFuncExtern(name=op.func_name, args=args)))


def _consume_trailing_pop(s: _FuncLifter) -> int:
    if s.pos >= len(s.instrs):
        raise LiftError("trailing Pop expected after call but reached end")
    nxt = s.instrs[s.pos].opcode
    if not isinstance(nxt, PS.CInstructionPop):
        raise LiftError(f"expected Pop after call, found {type(nxt).__name__}")
    s.pos += 1
    return nxt.PopCount


# ----- return / control flow stubs ----------------------------------------

def h_Return(s: _FuncLifter, op):
    """Lift an explicit (mid-body) Return.

    The trailing Return appended by scomp at function end is stripped from
    body_instrs at slicing time, so anything we see here is a `return [X];`
    statement the user wrote.  For non-void functions, the return value
    was just Mov'd into the bottom-of-frame _Reserved cell (which we
    pre-allocated at function entry) — read it from there."""
    if s.return_type == VarType.VOID:
        s.statements.append(OpReturn())
    else:
        # Bottom of our stack is the caller-allocated return slot.
        ret_slot = s.stack[0]
        if isinstance(ret_slot, _Reserved):
            if ret_slot.was_assigned:
                s.statements.append(OpReturn(expr=ret_slot.expr))
            else:
                # No explicit return value was computed — emit a bare return.
                # The function will be demoted to VOID in _finalize_func if
                # this remains the only return shape.
                s.statements.append(OpReturn())
        else:
            # Shouldn't happen if frame was set up correctly.
            s.statements.append(OpReturn(expr=_zero_literal(s.return_type)))
    s.pos += 1


def h_EventEnable(s, op):
    s.statements.append(OpEnableEvent(name=s.ctx.event_name(op.VarIn))); s.pos += 1


def h_EventDisable(s, op):
    s.statements.append(OpDisableEvent(name=s.ctx.event_name(op.VarIn))); s.pos += 1


# ----- control flow: JumpB / Jump ------------------------------------------

def _find_pos_by_addr(instrs, addr: int) -> Optional[int]:
    for i, inst in enumerate(instrs):
        if inst.index == addr:
            return i
    return None


def _lift_subblock(
    s: _FuncLifter,
    sub_instrs,
    exit_addrs: Optional[List[int]] = None,
    allow_imbalance: int = 0,
) -> OpBlock:
    """Lift an inner instruction range using the current lifter's state.

    Saves and restores the outer (instrs, pos, statements) so the caller
    can continue after the sub-region.  The stack must end at the same
    depth it started (sub-statements are balanced).

    `exit_addrs` (if given) is a list of addresses to which an inner
    Jump/JumpB might target to mean "exit this subblock and merge back
    into the outer flow".  Typically this includes both the address of
    the outer's trailing Jump AND that Jump's target.
    """
    saved_instrs = s.instrs
    saved_pos = s.pos
    saved_stmts = s.statements
    saved_depth = len(s.stack)

    pushed = 0
    if exit_addrs:
        for a in exit_addrs:
            s.subblock_exits.append(a)
            pushed += 1
    s.instrs = sub_instrs
    s.pos = 0
    s.statements = []
    raised = False
    try:
        try:
            s._lift_main_loop()
        except BaseException:
            raised = True
            raise
    finally:
        for _ in range(pushed):
            s.subblock_exits.pop()
        if raised:
            # Restore outer state so callers that catch the exception see a
            # consistent lifter (no half-swapped instrs/pos/statements).
            s.instrs = saved_instrs
            s.pos = saved_pos
            s.statements = saved_stmts
    block = OpBlock(ops=s.statements)
    if len(s.stack) != saved_depth + allow_imbalance:
        # Stack must be balanced across the sub-block (the caller may opt in
        # to a specific extra-push count via allow_imbalance, e.g. do-while's
        # body leaves the cond expression on top).
        raise LiftError(
            f"subblock unbalanced stack: depth {saved_depth} -> {len(s.stack)}"
        )

    s.instrs = saved_instrs
    s.pos = saved_pos
    s.statements = saved_stmts
    return block


def h_JumpB(s: _FuncLifter, op):
    """JumpB <cond_slot=1>, <target>, b0=bVal, sPop=1.

    Compiler always emits this immediately after the condition expression has
    been pushed onto the stack (CompileCondJump, IOperator.cpp:5-17).  So the
    cond is at stack[-1] right now; we consume it and identify the control
    structure based on the target address.
    """
    cond_expr = s._slot_to_expr(1)
    s._pop(op.sPop)

    target_addr = op.VarIn
    bVal = op.bVal  # 0 = jump if false, 1 = jump if true

    # Explicit `if (c) { break/return } else { continue/break }` where scomp
    # emitted the ELSE-SKIP jump (3 consecutive GOTOs):
    #     i:     JumpB(bVal=0 -> T)
    #     i+1:   GOTO A          (then-branch terminator)
    #     i+2:   GOTO (T+1)      (else-skip = scomp's if-else end-jump)
    #     T=i+3: GOTO B          (else-branch terminator)
    #     T+1:   merge
    # Our default lift flattens this to `if(c){break}` + a SIBLING `continue;`
    # which scomp re-compiles WITHOUT the else-skip (only 2 GOTOs) -> 6 bytes
    # short.  We want the explicit if-else so scomp re-emits the else-skip.  The
    # else-label B-GOTO usually sits one instruction PAST the current slice (it
    # is the enclosing block's trailing jump), and the sibling `continue;` is
    # already produced by the existing machinery — so rather than duplicating
    # it, we emit the then-only `if(c){break}` TAGGED, and a post-pass
    # (_pull_terminator_into_else) moves the following sibling terminator into
    # the else.  Discriminator vs a genuine `{break; continue;}` plain-if (a
    # 2-GOTO pattern where g2 -> the loop continue, NOT -> T+1): require g2 to
    # jump to T+1 (= just past the else-label) AND the instruction at T to be a
    # GOTO that itself resolves to a control-flow terminator.
    if bVal == 0 and s.pos + 2 < len(s.instrs):
        _i = s.pos
        _g1 = s.instrs[_i + 1].opcode
        _g2 = s.instrs[_i + 2].opcode
        if (isinstance(_g1, PS.CInstructionJump)
                and isinstance(_g2, PS.CInstructionJump)
                and target_addr == s.instrs[_i + 2].index + 1
                and _g2.VarIn == target_addr + 1):
            # Locate the else-label instruction (at target_addr): in-slice if
            # present, otherwise just past the slice -> use func_instrs.
            _gt = None
            if _i + 3 < len(s.instrs) and s.instrs[_i + 3].index == target_addr:
                _gt = s.instrs[_i + 3].opcode
            else:
                for _it in s.func_instrs:
                    if _it.index == target_addr:
                        _gt = _it.opcode
                        break
            if isinstance(_gt, PS.CInstructionJump):
                _then = _resolve_cf(s, _g1.VarIn)
                _else = _resolve_cf(s, _gt.VarIn)
                if _then is not None and _else is not None:
                    # JumpB(==0->T): cond FALSE -> T (else); cond TRUE -> fall
                    # to i+1 (then).  Emit `if(cond){then}` and tag it so the
                    # post-pass pulls the sibling `else` terminator in.
                    _ifop = OpIf(cond=cond_expr,
                                 then_block=OpBlock(ops=[_then]))
                    _ifop._pull_else = type(_else)  # OpContinue/OpBreak/OpReturn
                    s.statements.append(_ifop)
                    s.pos = _i + 3  # consumed JumpB, then-GOTO, else-skip
                    return

    # Stack-ternary pattern: each branch pushes exactly one literal/expr
    # and they merge.  Pattern:
    #     JumpB(target=ELSE, sPop=1)
    #     <Push x0>            -- then-branch: one push
    #     Jump --> AFTER
    #     ELSE: <Push x1>      -- else-branch: one push
    #     AFTER: ...
    # Lift as `cond ? x0 : x1` and push the result onto the stack so the
    # next consumer sees it.  Used by scomp for inline ternaries inside
    # function arguments (e.g. `f(cond ? 1 : 0)`).
    if s.pos + 4 <= len(s.instrs):
        i_push_then = s.pos + 1
        i_jump = s.pos + 2
        i_push_else = s.pos + 3
        push_then = s.instrs[i_push_then].opcode
        jump_skip = s.instrs[i_jump].opcode
        push_else = s.instrs[i_push_else].opcode
        # Recognise the simple-push case (any single-push instruction):
        # PushI/PushF/PushS/PushB (literals), Push (local-slot read),
        # PushT (task-var read), PushGE (global var read).
        _SINGLE_PUSH = (PS.CInstructionPushI, PS.CInstructionPushF,
                        PS.CInstructionPushS, PS.CInstructionPushB,
                        PS.CInstructionPush, PS.CInstructionPushT,
                        PS.CInstructionPushGE)
        if (isinstance(push_then, _SINGLE_PUSH)
                and isinstance(jump_skip, PS.CInstructionJump)
                and isinstance(push_else, _SINGLE_PUSH)
                and target_addr == s.instrs[i_push_else].index
                and jump_skip.VarIn == s.instrs[i_push_else].index + 1):
            def _push_expr(p):
                if isinstance(p, PS.CInstructionPushI):
                    return ENInt(int(p.VarIn))
                if isinstance(p, PS.CInstructionPushF):
                    return ENFloat(float(p.VarIn))
                if isinstance(p, PS.CInstructionPushS):
                    return ENString(p.String)
                if isinstance(p, PS.CInstructionPushB):
                    return ENBool(bool(p.VarIn))
                if isinstance(p, PS.CInstructionPush):
                    return s._slot_to_expr(p.VarIn)
                if isinstance(p, PS.CInstructionPushT):
                    return s._task_var_expr(p.VarIn)
                if isinstance(p, PS.CInstructionPushGE):
                    return s._global_var_expr(p.VarIn)
                return None
            try:
                then_expr = _push_expr(push_then)
                else_expr = _push_expr(push_else)
            except (LiftError, IndexError):
                then_expr = else_expr = None
            if then_expr is not None and else_expr is not None:
                cond_take = cond_expr if bVal == 0 else _not_expr(cond_expr)
                ternary = ENOp3(Op3Type.IF, cond_take, then_expr, else_expr)
                ttype = (_expr_node_type(then_expr, s)
                         or _expr_node_type(else_expr, s)
                         or VarType.INT)
                s._push(_Reserved(ttype, default_expr=ternary))
                s.pos = i_push_else + 1
                return

    # Stack-ternary with single binop1/unop1 producing the value (e.g.
    # `cond ? (a < b) : (b < a)`).  Pattern:
    #     JumpB(target=ELSE)
    #     <single binop1 or unop1 instruction>  -- produces 1 push
    #     Jump --> AFTER
    #     ELSE: <single binop1 or unop1>        -- produces 1 push
    #     AFTER: ...
    # We restrict to binop1/unop1 (not arbitrary push) to avoid false matches
    # on `if(c) { X = ...; } else { Y = ...; }` blocks that share the same
    # 3-instruction span but don't have ternary semantics.
    _BINOP1_NOSTORE = (
        PS.CInstructionAdd, PS.CInstructionSub, PS.CInstructionMult,
        PS.CInstructionDiv, PS.CInstructionMod,
        PS.CInstructionAnd, PS.CInstructionOr, PS.CInstructionXor,
        PS.CInstructionEq, PS.CInstructionNeq,
        PS.CInstructionLT, PS.CInstructionGT, PS.CInstructionLE, PS.CInstructionGE,
        PS.CInstructionPow,
        PS.CInstructionNeg, PS.CInstructionNot, PS.CInstructionSqrt,
        PS.CInstructionSin, PS.CInstructionCos, PS.CInstructionASin,
        PS.CInstructionNullEq, PS.CInstructionNullNeq,
    )
    if s.pos + 4 <= len(s.instrs):
        i_then = s.pos + 1
        i_jump = s.pos + 2
        i_else = s.pos + 3
        op_then = s.instrs[i_then].opcode
        jump_skip = s.instrs[i_jump].opcode
        op_else = s.instrs[i_else].opcode
        if (isinstance(op_then, _BINOP1_NOSTORE)
                and isinstance(jump_skip, PS.CInstructionJump)
                and isinstance(op_else, _BINOP1_NOSTORE)
                and target_addr == s.instrs[i_else].index
                and jump_skip.VarIn == s.instrs[i_else].index + 1):
            # Speculative lift of each branch as a 1-instruction subblock.
            saved_depth = len(s.stack)
            then_expr = else_expr = None
            try:
                _lift_subblock(s, [s.instrs[i_then]], allow_imbalance=1)
                top = s.stack[-1]
                then_expr = (ENId(top.name) if isinstance(top, _Slot)
                             else (top.expr if isinstance(top, _Reserved) else top))
                s._pop(1)
            except Exception:
                pass
            if then_expr is not None:
                try:
                    _lift_subblock(s, [s.instrs[i_else]], allow_imbalance=1)
                    top = s.stack[-1]
                    else_expr = (ENId(top.name) if isinstance(top, _Slot)
                                 else (top.expr if isinstance(top, _Reserved) else top))
                    s._pop(1)
                except Exception:
                    pass
            if (then_expr is not None and else_expr is not None
                    and len(s.stack) == saved_depth):
                cond_take = cond_expr if bVal == 0 else _not_expr(cond_expr)
                ternary = ENOp3(Op3Type.IF, cond_take, then_expr, else_expr)
                ttype = _expr_node_type(then_expr, s) or _expr_node_type(else_expr, s) or VarType.BOOL
                s._push(_Reserved(ttype, default_expr=ternary))
                s.pos = i_else + 1
                return

    # MovB-to-Reserved-slot ternary pattern: scomp's `f(cond ? false : true)`
    # for a Reserved bool slot (typically a function arg allocated by PushV).
    #     JumpB(target=ELSE, sPop=1)
    #     MovB(slot=N, V0)
    #     Jump --> AFTER
    #     ELSE: MovB(slot=N, V1)    (V0 != V1)
    #     AFTER: ...
    # Where slot N is a _Reserved bool.  Lift the if-else as a single
    # ternary expression and store it as the Reserved slot's expr.
    if s.pos + 4 <= len(s.instrs):
        i_movb_then = s.pos + 1
        i_jump = s.pos + 2
        i_movb_else = s.pos + 3
        movb_then = s.instrs[i_movb_then].opcode
        jump_skip = s.instrs[i_jump].opcode
        movb_else = s.instrs[i_movb_else].opcode
        if (isinstance(movb_then, PS.CInstructionMovB)
                and isinstance(jump_skip, PS.CInstructionJump)
                and isinstance(movb_else, PS.CInstructionMovB)
                and movb_then.VarOut == movb_else.VarOut
                and bool(movb_then.bVal) != bool(movb_else.bVal)
                and target_addr == s.instrs[i_movb_else].index
                and jump_skip.VarIn == s.instrs[i_movb_else].index + 1):
            try:
                target_slot = s._slot_at(movb_then.VarOut)
            except LiftError:
                target_slot = None
            if isinstance(target_slot, _Reserved) and target_slot.type == VarType.BOOL:
                cond_take = cond_expr if bVal == 0 else _not_expr(cond_expr)
                if bool(movb_then.bVal):
                    # then-MovB writes true; result = (cond_take ? true : false) = cond_take
                    result_expr = cond_take
                else:
                    # then-MovB writes false; result = (cond_take ? false : true) = !cond_take
                    result_expr = ENOp3(Op3Type.IF, cond_take,
                                         ENBool(False), ENBool(True))
                target_slot.expr = result_expr
                target_slot.was_assigned = True
                s.pos = i_movb_else + 1
                return

    target_pos = _find_pos_by_addr(s.instrs, target_addr)
    # Special case: a JumpB whose target == function's end Return falls
    # off the end of the body slice but might still be part of a while
    # pattern whose loop end coincides with the function-end Return.
    # Treat target_pos as len(s.instrs) so the standard while detection
    # below can match the back-Jump at the body's last instruction.
    if target_pos is None and target_addr == s.return_addr:
        target_pos = len(s.instrs)
    # Inner while nested inside outer infinite-for: the inner while's
    # exit target is one past the outer body slice (= outer back-jump's
    # address).  Recognise this when the slice's LAST instruction is a
    # backward Jump pointing BEFORE this JumpB — that's the inner while's
    # own back-Jump.  Then treat target_pos as len(s.instrs) so the
    # standard while-detection below matches.
    if (target_pos is None
            and len(s.instrs) > 0
            and target_addr == s.instrs[-1].index + 1):
        last_op = s.instrs[-1].opcode
        if isinstance(last_op, PS.CInstructionJump):
            last_target_pos = _find_pos_by_addr(s.instrs, last_op.VarIn)
            if last_target_pos is not None and last_target_pos < s.pos:
                target_pos = len(s.instrs)
    if target_pos is None:
        # Target is outside our current (sub-)block.  Could be:
        #   - conditional break  (jump to loop.break_addr)
        #   - conditional continue (jump to loop.continue_addr)
        #   - conditional return  (jump to function-end Return)
        # NOTE bVal=1 means "jump if cond is true" (i.e. take the action when
        # cond is true → `if (cond) action;`), bVal=0 is the inverse.
        cond_take = cond_expr if bVal == 1 else _not_expr(cond_expr)

        def _emit_if(action_op):
            s.statements.append(OpIf(cond=cond_take, then_block=OpBlock(ops=[action_op])))

        # Check loop control flow BEFORE the function-end-Return shortcut.
        # When the innermost loop's break_addr coincides with the function-
        # end Return (loop sits at function tail), `break;` and `return;`
        # produce the same Jump bytecode — but scomp emits a `break;` as
        # Jump to break_addr, NOT Return.  Preferring break here matches
        # scomp's emission for the common source shape.
        for cont_addr, brk_addr, back_addr in reversed(s.loops):
            if target_addr == brk_addr:
                _emit_if(OpBreak()); s.pos += 1; return
            if target_addr == cont_addr or (back_addr is not None and target_addr == back_addr):
                # If the NEXT instruction is an unconditional Jump to this
                # loop's break_addr, the source shape was `if (!cond) break;`
                # rather than `if (cond) continue; break;`.  scomp emits the
                # former with an explicit Not + JumpB(target=loop-back) +
                # Jump(target=break); detecting this here produces the same
                # bytecode shape on recompile.
                nxt_pos = s.pos + 1
                if nxt_pos < len(s.instrs):
                    nxt = s.instrs[nxt_pos].opcode
                    if isinstance(nxt, PS.CInstructionJump) and nxt.VarIn == brk_addr:
                        inv_cond = _not_expr(cond_take)
                        s.statements.append(OpIf(
                            cond=inv_cond,
                            then_block=OpBlock(ops=[OpBreak()]),
                        ))
                        s.pos += 2  # consumed JumpB + Jump
                        return
                # When target == back_addr (the trailing Jump itself) AND
                # there's MORE body after this JumpB AND the next instruction
                # is NOT a Jump-to-cont/brk/return, the source shape was
                # `if (body_cond) { rest_of_body }` — NOT `if (cond) continue;
                # rest`.  Detection: scomp emits `if (X) { body }` at end of
                # loop body as `JumpB(false-skip) → back_jump_addr; body`
                # (no extra Jump).  Compare to `if (cond) continue; rest`
                # which emits `JumpB(false-skip) → past_continue; Jump →
                # cont_addr; rest` (extra Jump).  Distinguishing on the
                # presence/absence of that follow-up Jump.
                if (back_addr is not None
                        and target_addr == back_addr
                        and target_addr != cont_addr
                        and nxt_pos < len(s.instrs)):
                    nxt = s.instrs[nxt_pos].opcode
                    is_cf_jump = (
                        isinstance(nxt, PS.CInstructionJump)
                        and nxt.VarIn in (cont_addr, brk_addr, s.return_addr)
                    )
                    if not is_cf_jump:
                        body_cond = cond_expr if bVal == 0 else _not_expr(cond_expr)
                        rest_instrs = s.instrs[s.pos + 1:]
                        body_block = _lift_subblock(s, rest_instrs)
                        s.statements.append(OpIf(cond=body_cond, then_block=body_block))
                        s.pos = len(s.instrs)
                        return
                # Same shape but target == cont_addr (the loop's continue /
                # iter-step position) with bVal==0 (skip-to-cont when cond is
                # FALSE) and body following DIRECTLY (no GOTO between).  scomp
                # compiles `if (cond) { body }` at end of a loop body as a
                # single `JumpB(false→cont_addr); body` — the body falls
                # through to the iter step.  A genuine `if(!cond) continue;`
                # would instead emit Not/NullEq + JumpB(→past) + GOTO(→cont)
                # (an explicit follow-up Jump), so the ABSENCE of a follow-up
                # control-flow Jump after the JumpB is the discriminator.
                # (`if(cond)continue;` is the bVal==1 case — handled below.)
                if (target_addr == cont_addr
                        and bVal == 0
                        and nxt_pos < len(s.instrs)):
                    nxt = s.instrs[nxt_pos].opcode
                    is_cf_jump = (
                        isinstance(nxt, PS.CInstructionJump)
                        and nxt.VarIn in (cont_addr, brk_addr, s.return_addr)
                    )
                    if not is_cf_jump:
                        body_cond = cond_expr
                        rest_instrs = s.instrs[s.pos + 1:]
                        body_block = _lift_subblock(s, rest_instrs)
                        s.statements.append(OpIf(cond=body_cond, then_block=body_block))
                        s.pos = len(s.instrs)
                        return
                _emit_if(OpContinue()); s.pos += 1; return
        if target_addr == s.return_addr:
            # If there's body after this JumpB (within the slice), the source
            # form is `if (cond) { rest_of_body; }` rather than `if (!cond)
            # return;` — both round-trip to similar bytecode shapes but the
            # former matches scomp's emission exactly (no NOT, no early
            # return slot).  Empty body → conditional return.
            if s.pos + 1 < len(s.instrs):
                rest_instrs = s.instrs[s.pos + 1:]
                # body_cond is "cond is TRUE → enter body".  bVal=0 means
                # `JumpB skip if cond false`, so entering body needs cond.
                body_cond = cond_expr if bVal == 0 else _not_expr(cond_expr)
                body_block = _lift_subblock(s, rest_instrs)
                s.statements.append(OpIf(cond=body_cond, then_block=body_block))
                s.pos = len(s.instrs)
                return
            _emit_if(OpReturn()); s.pos += 1; return
        # JumpB to a subblock_exit: this is `if (cond) skip rest of subblock`,
        # which corresponds in source to `if (!cond) { rest_of_subblock; }`.
        # We rewrite by lifting the rest of the subblock as the body of an
        # inverted-cond if and consuming all of it.
        if target_addr in s.subblock_exits:
            rest_instrs = s.instrs[s.pos + 1:]
            # Cond to enter the body: opposite of the "take the jump" cond.
            body_cond = _not_expr(cond_take)
            # If the rest ends with a GOTO straight back to THIS same exit, that
            # trailing Jump is the else-skip of an `if (cond) { then } else { }`
            # with an EMPTY else — scomp emits the else-skip Jump even for an
            # empty else (player_common.sci `if(iCharge>=10){...}else{}`).  Lift
            # the then-block (minus the trailing Jump) and a preserved empty
            # else so the Jump round-trips; otherwise the plain-if drops it.
            if (len(rest_instrs) >= 2
                    and isinstance(rest_instrs[-1].opcode, PS.CInstructionJump)
                    and rest_instrs[-1].opcode.VarIn == target_addr
                    # Nested-if guard: if an inner JumpB in the rest targets the
                    # SAME exit, the trailing GOTO is THAT nested if-else's else-
                    # skip, not this if's empty else.  Skip so the inner JumpB
                    # claims it (else we attach the empty else to the wrong,
                    # outer block — same instrs but wrong debug-line offset).
                    and not any(
                        isinstance(bi.opcode, PS.CInstructionJumpB)
                        and bi.opcode.VarIn == target_addr
                        for bi in rest_instrs[:-1])):
                then_block = _lift_subblock(
                    s, rest_instrs[:-1], exit_addrs=[target_addr])
                s.statements.append(OpIf(
                    cond=body_cond,
                    then_block=then_block,
                    else_block=OpBlock(ops=[]),
                ))
                s.pos = len(s.instrs)
                return
            body_block = _lift_subblock(s, rest_instrs)
            s.statements.append(OpIf(cond=body_cond, then_block=body_block))
            s.pos = len(s.instrs)  # consumed the rest
            return
        raise LiftError(f"JumpB target 0x{target_addr:x} not in current body")

    cur_pos = s.pos + 1  # the instruction right after JumpB

    # Pattern: `JumpB(skip if cond=bVal) target=cur_pos+1; GOTO X`.
    # This is scomp's `if (cond_take) <goto X action>;` shape where
    # cond_take is the cond that makes the GOTO fire (opposite of the bVal
    # skip cond).  If X is a known loop break/continue, function-end Return,
    # or subblock exit, emit the appropriate single-statement body.
    if (
        target_pos is not None
        and target_pos == cur_pos + 1
        and cur_pos < len(s.instrs)
        and isinstance(s.instrs[cur_pos].opcode, PS.CInstructionJump)
    ):
        goto_target = s.instrs[cur_pos].opcode.VarIn
        # Cond that makes the GOTO fire = the JumpB's "skip" condition,
        # because the GOTO is right after JumpB and only executes if JumpB
        # didn't take its skip.  bVal=0 = skip if cond false; if it DIDN'T
        # skip, cond was true.  So cond_take = cond_expr if bVal==0 else NOT.
        cond_take = cond_expr if bVal == 0 else _not_expr(cond_expr)
        action: Optional[object] = None
        # Prefer loop break/continue over return when both match — see
        # h_Jump and the function-end branch above for rationale.
        for cont_addr, brk_addr, back_addr in reversed(s.loops):
            if goto_target == brk_addr:
                action = OpBreak(); break
            if goto_target == cont_addr or (back_addr is not None and goto_target == back_addr):
                action = OpContinue(); break
        # Only emit `if (cond) return;` when there is no body after this
        # JumpB+Jump pair.  When body follows AND the goto targets the
        # function-end Return, the source shape that round-trips is
        # `if (cond) {} else { body; }` (empty-then-else falls through to
        # the body in the else, which then hits the function-end Return).
        # The bare `if (cond) return;` compiles to JumpB+Return+body
        # instead of the original JumpB+Jump+body, which doesn't match.
        if action is None and goto_target == s.return_addr and cur_pos + 1 >= len(s.instrs):
            action = OpReturn()
        if action is not None:
            s.statements.append(OpIf(cond=cond_take, then_block=OpBlock(ops=[action])))
            s.pos = cur_pos + 1  # past JumpB and GOTO
            return
        # If goto target matches a subblock exit, treat as `if(cond) {} else { rest }`.
        # This emits the empty-then-else shape that scomp compiles to JumpB+
        # GOTO+body — matching ORIG bytecode pattern (where source was
        # `if (cond) goto_subblock_exit; rest`).  Previously we emitted
        # `if (!cond) { rest }` which compiles to Not+JumpB+body (extra Not).
        if goto_target in s.subblock_exits:
            rest_start = cur_pos + 1
            rest_instrs = s.instrs[rest_start:]
            body_block = _lift_subblock(s, rest_instrs)
            s.statements.append(OpIf(
                cond=cond_take,
                then_block=OpBlock(ops=[]),
                else_block=body_block,
            ))
            s.pos = len(s.instrs)
            return
        # JumpB+Jump → forward-T not matching any control-flow keyword.
        # Lift as `if (cond_take) {} else { body_until_T }` — that's the
        # exact shape scomp emits for the empty-then-else and the nested
        # `if(c){}else{if(c2){...}}` patterns.  The AND/OR detector above
        # has already consumed the scaffolded short-circuit pattern, so we
        # know we're not stepping on it here.
        if goto_target == s.return_addr:
            # Target is the function-end Return — body runs to end of slice.
            body_instrs = s.instrs[cur_pos + 1 :]
            else_block = _lift_subblock(s, body_instrs, exit_addrs=[goto_target])
            s.statements.append(OpIf(
                cond=cond_take,
                then_block=OpBlock(ops=[]),
                else_block=else_block,
            ))
            s.pos = len(s.instrs)
            return
        gt_pos = _find_pos_by_addr(s.instrs, goto_target)
        if gt_pos is not None and gt_pos > cur_pos + 1:
            body_instrs = s.instrs[cur_pos + 1 : gt_pos]
            else_block = _lift_subblock(s, body_instrs, exit_addrs=[goto_target])
            s.statements.append(OpIf(
                cond=cond_take,
                then_block=OpBlock(ops=[]),
                else_block=else_block,
            ))
            s.pos = gt_pos
            return

    if target_pos > s.pos:
        # ---- Forward JumpB: `if`, `if-else`, or `while` -------------------
        end_then_pos = target_pos
        # Inspect the instruction right before target_pos.
        # - Jump back (< s.pos): this is a while loop (or `for` with body)
        # - Jump forward (> target_pos): if-else
        # - No Jump (or other): plain if-then
        end_else_pos: Optional[int] = None
        is_while = False
        # Detect trailing Jump in then-body — only if there's actual then-body
        # content BEFORE that Jump.  If then-body is JUST the Jump (i.e.
        # `if (cond) goto X;`), this isn't an if-else, it's a conditional
        # break/continue/return/skip pattern, which the rest of h_JumpB handles
        # via cond_take + action emit.
        then_terminator: Optional[object] = None
        if end_then_pos > cur_pos + 1:
            last = s.instrs[end_then_pos - 1]
            if isinstance(last.opcode, PS.CInstructionJump):
                jt_addr = last.opcode.VarIn
                jt_pos = _find_pos_by_addr(s.instrs, jt_addr)
                if jt_pos is not None:
                    # A trailing Jump to a loop break/continue (or the
                    # function-end Return) is a control-flow ACTION inside the
                    # then-block — e.g. `if (c1) { ...; if (c2) break; }` —
                    # NOT a skip-else jump.  Treating it as if-else wrongly
                    # splits the inner `if (c2)` and mis-scopes the rest.  Only
                    # treat a forward trailing Jump as the else-skip when it
                    # targets a plain forward merge (not a CF target).
                    # Nested-if guard: an INNER JumpB in the then-body targeting
                    # this if's OWN merge (target_addr) means the trailing Jump is
                    # that inner if's then-body (action), NOT this if's continue/
                    # else-skip.  Treat as a plain-if so the inner if claims the
                    # trailing Jump (arena_manager `if(L4){...; if(L6) continue;}`
                    # — 0x454 JumpB→0x456 + 0x455 GOTO iter).  Without this the
                    # inner if(L6) gets an empty then and the continue is dropped.
                    _nested_inner = any(
                        isinstance(bi.opcode, PS.CInstructionJumpB)
                        and bi.opcode.VarIn == target_addr
                        for bi in s.instrs[cur_pos:end_then_pos - 1])
                    if _nested_inner:
                        pass  # plain-if: leave end_else_pos / then_terminator None
                    elif jt_pos > target_pos:
                        # A trailing forward Jump to a loop CONTINUE target can
                        # be a `continue` ACTION — original source `if (cond) {
                        # then; continue; } rest` rather than `if (cond) { then }
                        # else { rest }`.  These two shapes are byte-identical
                        # EXCEPT when scomp auto-emits an object SetNull cleanup
                        # at loop-body close (just before the iter step): the
                        # if-continue `continue` jumps PAST that cleanup to
                        # cont_addr, whereas the if-else merge lands ON the
                        # cleanup → off-by-one Jump target (world_burah's
                        # plant/grave loops).  Gate strictly on the cleanup's
                        # presence (instr at cont_addr-1 is SetNull): without
                        # it, converting only adds a redundant continue Jump
                        # (+6 bytes) and regresses files like ui_agony/
                        # ui_playerstat/ui_repair.
                        cont_cleanup = False
                        for _c, _b, _bk in reversed(s.loops):
                            if jt_addr == _c or (_bk is not None and jt_addr == _bk):
                                cpos = _find_pos_by_addr(s.instrs, _c)
                                if (cpos is not None and cpos > 0
                                        and isinstance(s.instrs[cpos - 1].opcode,
                                                       PS.CInstructionSetNull)):
                                    cont_cleanup = True
                                break
                        if cont_cleanup:
                            then_terminator = OpContinue()
                            end_else_pos = len(s.instrs)
                        else:
                            end_else_pos = jt_pos
                    elif jt_pos == target_pos:
                        # Trailing Jump targets EXACTLY the JumpB merge: the
                        # then-block's else-skip jumps straight to the merge with
                        # NO else body — an `if (cond) { then } else { }` with an
                        # EMPTY else.  scomp emits the else-skip Jump for the
                        # empty else; dropping it (plain-if) loses that Jump.
                        # Preserve the (empty) else so it round-trips.
                        end_else_pos = jt_pos
                    elif jt_pos < s.pos:
                        is_while = True
                else:
                    # Nested-if guard: if an inner JumpB in the then-block
                    # targets the SAME merge (target_addr), then this trailing
                    # break/continue/return GOTO is the inner if's ACTION (e.g.
                    # `if(c1){ if(c2){ body; break } }`), NOT the outer then's
                    # terminator.  Extracting it as the terminator wrongly
                    # places the break AFTER the inner if (unconditional) and
                    # mis-targets its JumpB.  Skip extraction → fall through to
                    # the plain-if path, which keeps the trailing GOTO in the
                    # then-block so the nested if absorbs it.
                    nested_signal = any(
                        isinstance(bi.opcode, PS.CInstructionJumpB)
                        and bi.opcode.VarIn == target_addr
                        for bi in s.instrs[cur_pos:end_then_pos - 1])
                    # Check loops FIRST: when a loop sits at the function
                    # tail, brk_addr can equal return_addr.  scomp's
                    # if-else-with-break emits Jump → brk_addr (post-loop),
                    # and scomp's if-else at function tail emits Jump →
                    # return_addr — same address in both cases.  When the
                    # if is inside a loop, the BREAK shape is the correct
                    # match (an outer if-else can't span across a loop).
                    matched = nested_signal  # skip extraction when nested
                    # A bare `continue;` continues the INNERMOST loop, so only
                    # emit OpContinue when the target is the innermost loop's
                    # continue addr — matching an OUTER loop's cont would emit a
                    # `continue;` that scomp routes to the INNER loop (wrong;
                    # broke gatherer1 etc. when applied to all loop levels).
                    _innermost_cont = s.loops[-1][0] if s.loops else None
                    _innermost_back = s.loops[-1][2] if s.loops else None
                    for cont_addr, brk_addr, back_addr in (() if nested_signal else reversed(s.loops)):
                        if jt_addr == brk_addr:
                            end_else_pos = len(s.instrs)
                            then_terminator = OpBreak()
                            matched = True
                            break
                        if jt_addr == cont_addr or (back_addr is not None and jt_addr == back_addr):
                            end_else_pos = len(s.instrs)
                            # A then-block trailing Jump to the loop's CONTINUE
                            # addr (distinct from the back-jump) is an EXPLICIT
                            # `continue;` (scomp routes it DIRECTLY to the loop
                            # top) — emit it + flatten the rest as siblings, so
                            # it doesn't degrade into an if/else whose arm-skip
                            # lands on the cascade-merge trampoline (sub-pattern
                            # A, e.g. attack_melee `if(!bCanReach){...;continue;}`
                            # citizen 0x48d).  But a Jump to the BACK-JUMP addr
                            # is an IMPLICIT arm-skip / merge (citizen 0x475,
                            # arm1's fall-through to the cascade end) — keep the
                            # old no-terminator if/else behavior for that.
                            if (jt_addr == cont_addr and jt_addr != back_addr
                                    and jt_addr == _innermost_cont
                                    and jt_addr != _innermost_back
                                    and _innermost_back not in s.infinite_backs):
                                then_terminator = OpContinue()
                            matched = True
                            break
                    if not matched:
                        if jt_addr == s.return_addr:
                            # For `if (cond) { ... } else { ... }` at function
                            # tail, the Jump-past-else target is the function-
                            # end Return.  Keep if-else interpretation; do not
                            # add a terminator (no enclosing loop).
                            end_else_pos = len(s.instrs)
                        elif jt_addr in s.subblock_exits:
                            end_else_pos = len(s.instrs)

        if is_while:
            # While body: between JumpB+1 and the trailing Jump (exclusive).
            body_instrs = s.instrs[cur_pos:end_then_pos - 1]
            # continue jumps to where the cond setup starts (the back-Jump's target).
            continue_addr = s.instrs[end_then_pos - 1].opcode.VarIn
            # break exits past the while loop's end (the post-loop instruction).
            # When end_then_pos == len(s.instrs) the loop ends at end of body
            # slice — break address is the instruction RIGHT AFTER the last,
            # which (since addresses are sequential) equals last.index + 1.
            if end_then_pos < len(s.instrs):
                break_addr = s.instrs[end_then_pos].index
            else:
                break_addr = s.instrs[end_then_pos - 1].index + 1
            # back_addr = the trailing Jump's own address — inner Jumps to
            # this address effectively `continue` (they fall straight into
            # the back-Jump).
            back_jump_addr = s.instrs[end_then_pos - 1].index
            # For-loop iter-step detection: scomp's `for (init; cond; iter)`
            # sets `m_rpLoopContinue` to the START of the iter step.  An
            # explicit `continue;` in source jumps THERE (not to cond check).
            # Detect the typical iter step pattern at the end of body_instrs:
            # `PushI(±N) + Add2(slot)` or similar in-place increment.  When
            # found, override continue_addr to point at the iter step start
            # so inner Jumps to that address are recognised as `continue;`.
            iter_continue_addr = None
            if len(body_instrs) >= 2:
                last2 = body_instrs[-1]
                last1 = body_instrs[-2]
                if (isinstance(last2.opcode, (PS.CInstructionAdd2,
                                              PS.CInstructionSub2,
                                              PS.CInstructionMult2,
                                              PS.CInstructionDiv2))
                        and isinstance(last1.opcode, (PS.CInstructionPushI,
                                                      PS.CInstructionPushF,
                                                      PS.CInstructionPushB))):
                    iter_continue_addr = last1.index
            # Only use iter_continue_addr when the body actually has a Jump
            # to it — otherwise we'd misclassify perfectly normal `if (cond)
            # body` patterns as `if (!cond) continue; rest` (which scomp
            # compiles to a different shape and gives us +6 bytes per
            # occurrence).
            used_iter_continue = False
            if iter_continue_addr is not None and any(
                    isinstance(b.opcode, PS.CInstructionJump) and b.opcode.VarIn == iter_continue_addr
                    and b.index != iter_continue_addr
                    for b in body_instrs):
                s.loops.append((iter_continue_addr, break_addr, back_jump_addr))
                used_iter_continue = True
            else:
                s.loops.append((continue_addr, break_addr, back_jump_addr))
            try:
                body_block = _lift_subblock(s, body_instrs)
            finally:
                s.loops.pop()
            cond_final = cond_expr if bVal == 0 else _not_expr(cond_expr)
            # Detect `for (init; cond; ) { body }` vs `init; while (cond)
            # { body }` for explicit-continue handling.  scomp's continue
            # emission differs:
            #   * `for (; cond; )`: `continue;` → `Jump → back_jump_addr`
            #     (continues through SetNull cleanup region naturally).
            #   * `while (cond)`:   `continue;` → `Jump → cond_check_addr`
            #     (direct, skipping inner cleanup).
            # The two compile to differing bytecode.  Scan the body's Jumps
            # for targets equal to back_jump_addr: if any, the source was
            # a for-loop with empty iter — emit OpFor so the recompile
            # matches.
            # for(;cond;) continue -> back_jump_addr (the back-Jump INSTRUCTION);
            # while(cond) continue -> the back-Jump's TARGET (the cond re-check /
            # loop top).  The old check only looked for jumps to back_jump_addr,
            # but a WHILE loop's object-cleanup TRAMPOLINE also does
            # `GOTO back_jump_addr` (falls into the back-jump) — which falsely
            # flagged for-style and routed continues through the trampoline
            # instead of direct to the loop top (sub-pattern A, citizen/soldier
            # families).  Discriminator: for-style iff the body jumps to
            # back_jump_addr AND does NOT jump to the cond-check (loop top);
            # a body jump to the loop top is a while-continue.
            back_jump_target = s.instrs[end_then_pos - 1].opcode.VarIn
            hits_backjump = False
            hits_condcheck = False
            for binst in body_instrs:
                if not isinstance(binst.opcode, PS.CInstructionJump):
                    continue
                if binst.index == back_jump_addr:
                    continue
                if binst.opcode.VarIn == back_jump_addr:
                    hits_backjump = True
                elif binst.opcode.VarIn == back_jump_target:
                    hits_condcheck = True
            is_for_style = hits_backjump and not hits_condcheck
            # in the while cond — `while (pre_call, cond) { body }`.
            # ONLY fire when the last statement is a method call on a task
            # variable (e.g. `tv0->Next(L2, L3)`) — these are the iterator-
            # style patterns where scomp emits `Method(args); Pop; Push cond;
            # JumpB → exit; body; GOTO Method`.  Restricted form to avoid
            # over-collapsing legitimate pre-loop calls.
            jumpb_addr = s.instrs[s.pos].index
            jumpb_pos = s.pos
            try:
                continue_pos = _find_pos_by_addr(s.instrs, continue_addr)
            except Exception:
                continue_pos = None
            if (continue_pos is not None
                    and jumpb_pos - continue_pos >= 3
                    and s.statements
                    and isinstance(s.statements[-1], OpExprStmt)
                    and isinstance(s.statements[-1].expr, ENFunc)
                    and s.statements[-1].expr.obj is not None
                    and isinstance(s.statements[-1].expr.obj, ENId)):
                comma_parts = [s.statements.pop().expr]
                cond_final = ENOp2(Op2Type.COMMA, comma_parts[0], cond_final)
            # When continue routes to the ITER STEP (iter_continue_addr used),
            # this is `for (init; cond; iter)` with a NON-empty iter — the iter
            # is the last body statement.  Extract it into the for-header so a
            # recompiled `continue;` jumps to the iter (not the cond-check, as a
            # `while` would).  Without this we emit `while(cond){...; iter}` and
            # continues mis-route (arena_manager `for(L1=0;L1<L0;L1++){...;L1--}`).
            if (used_iter_continue and body_block.ops
                    and isinstance(body_block.ops[-1], OpExprStmt)
                    and isinstance(body_block.ops[-1].expr, ENAssign)):
                iter_expr = body_block.ops[-1].expr
                new_body = OpBlock(ops=body_block.ops[:-1])
                s.statements.append(OpFor(
                    init=OpBlock(ops=[]), cond=cond_final, loop=iter_expr,
                    body=new_body,
                ))
            elif is_for_style:
                s.statements.append(OpFor(
                    init=OpBlock(ops=[]), cond=cond_final, loop=None,
                    body=body_block,
                ))
            else:
                s.statements.append(OpWhile(cond=cond_final, body=body_block))
            s.pos = end_then_pos
            return

        if end_else_pos is not None:
            then_instrs = s.instrs[cur_pos:end_then_pos - 1]  # drop trailing Jump
            else_instrs = s.instrs[end_then_pos:end_else_pos]
            # exit_addr for both branches = where outer falls to after the
            # whole if-else.  We pass BOTH:
            #   * the trailing-Jump's target (the natural merge point), AND
            #   * the address OF the trailing Jump itself (jumping here is
            #     equivalent to taking the trailing Jump to the merge).
            exit_addrs = []
            tj_addr = s.instrs[end_then_pos - 1].index
            exit_addrs.append(tj_addr)
            tj_op = s.instrs[end_then_pos - 1].opcode
            if isinstance(tj_op, PS.CInstructionJump):
                exit_addrs.append(tj_op.VarIn)
            # Also treat the merge / else-start address as a then-block exit.
            # A nested `if(c1){ ...; if(c2) <action> }` compiles c2's skip-jump
            # to the SAME address as c1's (the merge after the whole if), which
            # is the else-start here.  Without this, that inner JumpB raises
            # "target not in current body".  Safe: an OK file can't already
            # have a then-block JumpB to the else-start (it would be LIFT_ERROR
            # today), so adding this exit only affects currently-failing files.
            if end_then_pos < len(s.instrs):
                merge_addr = s.instrs[end_then_pos].index
                if merge_addr not in exit_addrs:
                    exit_addrs.append(merge_addr)
            # Snapshot ret_slot.expr to detect per-branch silent writes.
            # Used below to convert `if(c){silent_ret=X}else{silent_ret=Y}` →
            # `if(c) return X; return Y;` shape when both branches assign the
            # return slot only.
            ret_slot_pre = None
            if (s.stack and isinstance(s.stack[0], _Reserved)
                    and getattr(s.stack[0], "batch_id", 0) == -1):
                ret_slot_pre = s.stack[0].expr
            # Snapshot ALL _Reserved slots' exprs to also catch a ternary into a
            # CALL-ARG slot: `f(cond ? A : B)` compiles to `if(cond){arg=A}else
            # {arg=B}` (both branches silently write the same pushed arg slot),
            # which our empty-both-branches lift otherwise drops (taking only the
            # else value) — scene_normal `f_2bc(a2 ? 0.05 : 0.2)`.
            depth_pre = len(s.stack)
            pre_exprs = {i: sl.expr for i, sl in enumerate(s.stack)
                         if isinstance(sl, _Reserved)}
            # Value-producing if-else (stack-leaving ternary): when a branch
            # leaves a VALUE on the stack consumed by the op AFTER the if-else
            # (e.g. `m->SetLength(g3 ? f(..) : 0.05)` — sanitar/rats), the
            # statement-if lift (allow_imbalance=0) raises "unbalanced".  Retry
            # lifting BOTH branches as value-producers (+1 each, no statements)
            # and push `cond ? A : B`.  Only triggers on currently-failing
            # (unbalanced) lifts, so it can't regress passing files.
            _vt_stack = list(s.stack)
            _vt_stmts = list(s.statements)
            _vt_pos = s.pos
            _vt_instrs = s.instrs
            try:
                then_block = _lift_subblock(s, then_instrs, exit_addrs=exit_addrs)
            except LiftError as _vt_e:
                if "unbalanced" not in str(_vt_e):
                    raise
                s.stack[:] = _vt_stack
                s.statements[:] = _vt_stmts
                s.pos = _vt_pos
                s.instrs = _vt_instrs
                tvb = _lift_subblock(s, then_instrs, exit_addrs=exit_addrs,
                                     allow_imbalance=1)
                then_val = s._slot_to_expr(1)
                s._pop(1)
                evb = _lift_subblock(s, else_instrs, exit_addrs=exit_addrs,
                                     allow_imbalance=1)
                else_val = s._slot_to_expr(1)
                s._pop(1)
                if tvb.ops or evb.ops:
                    raise _vt_e  # branches have statements → not a simple ternary
                cond_take = cond_expr if bVal == 0 else _not_expr(cond_expr)
                vt_type = (_expr_node_type(then_val, s)
                           or _expr_node_type(else_val, s) or VarType.FLOAT)
                s._push(_Reserved(vt_type, default_expr=ENOp3(
                    Op3Type.IF, cond_take, then_val, else_val)))
                s.pos = end_else_pos
                return
            then_exprs = ({i: sl.expr for i, sl in enumerate(s.stack)
                           if isinstance(sl, _Reserved)}
                          if len(s.stack) == depth_pre else None)
            then_ret = None
            if (s.stack and isinstance(s.stack[0], _Reserved)
                    and getattr(s.stack[0], "batch_id", 0) == -1
                    and not then_block.ops):
                # Then-block had no visible ops but ret slot's expr may have
                # changed silently — capture that.
                if s.stack[0].expr is not ret_slot_pre:
                    then_ret = s.stack[0].expr
            if then_terminator is not None:
                # The then-branch terminates (break/return).  scomp emits the
                # post-then Jump as the break/return itself, and the "else
                # block" is actually sibling code that the JumpB-if-false
                # skips into.  Emit:
                #     if (cond) { ...; <terminator>; }
                #     <else_instrs as siblings>
                # rather than:
                #     if (cond) { ...; <terminator>; } else { ... }
                # because scomp would otherwise emit a redundant Jump after
                # the terminator to skip the else-block (+6 bytes).
                then_block.ops.append(then_terminator)
                if bVal == 0:
                    stmt = OpIf(cond=cond_expr, then_block=then_block)
                else:
                    stmt = OpIf(cond=_not_expr(cond_expr), then_block=then_block)
                s.statements.append(stmt)
                # Inline-lift else_instrs at the SAME level as the if.
                s.pos = end_then_pos
                # Mark that the trailing Jump (s.pos points to it indirectly:
                # end_then_pos - 1) should be skipped — actually the structure
                # is: cur Jump is at end_then_pos-1, else starts at end_then_pos.
                # Since we already consumed up to and including the Jump (by
                # turning it into the terminator), advance s.pos to skip the
                # Jump and start at end_then_pos (= else_instrs start).
                return
            else_block = _lift_subblock(s, else_instrs, exit_addrs=exit_addrs)
            else_ret = None
            if (s.stack and isinstance(s.stack[0], _Reserved)
                    and getattr(s.stack[0], "batch_id", 0) == -1
                    and not else_block.ops):
                if s.stack[0].expr is not (then_ret if then_ret is not None else ret_slot_pre):
                    else_ret = s.stack[0].expr

            # Detect `if (cond) {silent ret = X} else {silent ret = Y}` followed
            # immediately by a Return.  This is scomp's emission for `return
            # cond ? X : Y;` (ternary at return).  Convert to that — drop the
            # if-else, emit `return cond ? X : Y;` and consume the Return.
            # Two cases trigger:
            #   (a) end_else_pos == len(s.instrs): if-else at end of slice
            #   (b) instrs[end_else_pos] is a Return: if-else followed by Return
            # cond_take: cond expression such that "cond_take is TRUE → take
            # then-branch".  JumpB with bVal=0 skips if cond is false, so
            # then-branch fires when cond is true → cond_take = cond_expr.
            ternary_ok = (then_ret is not None and else_ret is not None
                    and not then_block.ops and not else_block.ops
                    and s.stack and isinstance(s.stack[0], _Reserved)
                    and getattr(s.stack[0], "batch_id", 0) == -1)
            if ternary_ok:
                consume_return = False
                if end_else_pos == len(s.instrs):
                    pass  # at end of slice
                elif (end_else_pos < len(s.instrs)
                        and isinstance(s.instrs[end_else_pos].opcode,
                                       PS.CInstructionReturn)):
                    consume_return = True
                else:
                    ternary_ok = False
            if ternary_ok:
                cond_take = cond_expr if bVal == 0 else _not_expr(cond_expr)
                ternary = ENOp3(Op3Type.IF, cond_take, then_ret, else_ret)
                s.statements.append(OpReturn(expr=ternary))
                s.stack[0].expr = ternary
                s.stack[0].was_assigned = True
                s.pos = end_else_pos + (1 if consume_return else 0)
                return

            # Generic CALL-ARG ternary: both branches empty, both silently wrote
            # the SAME non-return _Reserved slot with different values → fold to
            # `slot = cond ? then_val : else_val` (silent; the slot is consumed
            # by the following Call/arg-setup).  No statement emitted; the
            # if-else collapses.  (scene family `f(cond ? A : B)`.)
            if (not then_block.ops and not else_block.ops
                    and then_exprs is not None
                    and len(s.stack) == depth_pre):
                else_exprs = {i: sl.expr for i, sl in enumerate(s.stack)
                              if isinstance(sl, _Reserved)}
                # A slot written in BOTH branches (then & else each changed it
                # vs pre, and to different values).  Exclude the function return
                # slot (idx 0, batch_id -1) — handled by the ret-ternary above.
                cand = [i for i in pre_exprs
                        if i in then_exprs and i in else_exprs
                        and then_exprs[i] is not pre_exprs[i]
                        and else_exprs[i] is not then_exprs[i]
                        and else_exprs[i] is not pre_exprs[i]
                        and not (i == 0 and getattr(s.stack[0], "batch_id", 0) == -1)]
                if len(cand) == 1:
                    i = cand[0]
                    cond_take = cond_expr if bVal == 0 else _not_expr(cond_expr)
                    s.stack[i].expr = ENOp3(Op3Type.IF, cond_take,
                                            then_exprs[i], else_exprs[i])
                    s.stack[i].was_assigned = True
                    s.pos = end_else_pos
                    return
            if bVal == 0:
                stmt = OpIf(cond=cond_expr, then_block=then_block, else_block=else_block)
            else:
                stmt = OpIf(
                    cond=_not_expr(cond_expr),
                    then_block=then_block, else_block=else_block,
                )
            s.statements.append(stmt)
            s.pos = end_else_pos
        else:
            then_instrs = s.instrs[cur_pos:end_then_pos]
            # Plain if's body merges to whatever comes right after it.
            after_addr = s.instrs[end_then_pos].index if end_then_pos < len(s.instrs) else s.return_addr
            then_block = _lift_subblock(s, then_instrs, exit_addrs=[after_addr])
            if bVal == 0:
                stmt = OpIf(cond=cond_expr, then_block=then_block)
            else:
                stmt = OpIf(cond=_not_expr(cond_expr), then_block=then_block)
            s.statements.append(stmt)
            s.pos = end_then_pos
        return

    # ---- Backward JumpB: end of do-while -------------------------------
    # Pattern: body...; cond setup; JumpB(target=start, b0=1, sPop=1).
    # The body was lifted before the cond, and the cond's setup statements
    # are intermixed with the body (no clean separation in our linear lift).
    # For now, raise — to be implemented when we have a region-based structurer.
    raise LiftError(f"backward JumpB at 0x{s.instrs[s.pos].index:x} -> 0x{target_addr:x}; do-while not yet supported")


def _resolve_cf(s: _FuncLifter, target_addr):
    """Map an unconditional-GOTO target to OpBreak/OpContinue/OpReturn using the
    same loop-stack precedence as h_Jump.  Returns None if it doesn't resolve to
    a control-flow terminator (so callers can fall back to default handling)."""
    for cont_addr, brk_addr, back_addr in reversed(s.loops):
        if target_addr == brk_addr:
            return OpBreak()
        if target_addr == cont_addr or (back_addr is not None and target_addr == back_addr):
            return OpContinue()
    if target_addr == s.return_addr:
        return OpReturn()
    return None


def h_Jump(s: _FuncLifter, op):
    """Unconditional Jump that wasn't consumed by an enclosing pattern.

    Recognised forms:
      - Jump to (loop.break_addr)    → `break;`
      - Jump to (loop.continue_addr) → `continue;`
      - Jump to function-end Return  → `return;` (early return)
    Anything else is unstructured and we raise so we can prioritise it.
    """
    target_addr = op.VarIn
    # Loop control flow takes precedence over return — when the innermost
    # loop's break_addr happens to coincide with the function-end Return
    # (loop at function tail), `break;` and `return;` produce the same
    # bytecode but scomp's emission for `break;` is a plain Jump to
    # break_addr, so prefer that to match the original.
    for cont_addr, brk_addr, back_addr in reversed(s.loops):
        if target_addr == brk_addr:
            s.statements.append(OpBreak()); s.pos += 1; return
        if target_addr == cont_addr or (back_addr is not None and target_addr == back_addr):
            s.statements.append(OpContinue()); s.pos += 1; return
    if target_addr == s.return_addr:
        s.statements.append(OpReturn()); s.pos += 1; return
    # A Jump straight to a known outer-subblock merge is just "fall out of
    # this subblock early" — emit nothing; the natural fall-through after
    # the subblock will reach the same place.
    if target_addr in s.subblock_exits:
        s.pos += 1
        return
    # Unreachable Jump after a previous terminator (= scomp's redundant
    # "skip-past-else" Jump after a then-branch that ended with GOTO).
    # If the last emitted statement was already a terminator (OpReturn,
    # OpBreak, OpContinue) OR the previous bytecode instruction was already
    # an unconditional Jump / Return, this Jump is dead code; silently skip.
    if s.pos > 0:
        prev_op = s.instrs[s.pos - 1].opcode
        if isinstance(prev_op, (PS.CInstructionJump, PS.CInstructionReturn)):
            s.pos += 1
            return
    # ALSO: if our last emitted statement was a terminator (Return / Break /
    # Continue) that we previously synthesised, this Jump is unreachable.
    if s.statements and isinstance(s.statements[-1], (OpReturn, OpBreak, OpContinue)):
        s.pos += 1
        return
    raise LiftError(f"unstructured Jump at 0x{s.instrs[s.pos].index:x} -> 0x{target_addr:x}")


# ----- binary / unary ops --------------------------------------------------

_BINOP_TABLE = {
    "Add":   (Op2Type.PLUS,  False, 0x3F),
    "Sub":   (Op2Type.MINUS, False, 0x3F),
    "Mult":  (Op2Type.MULT,  False, 0x3F),
    "Div":   (Op2Type.DIV,   False, 0x3F),
    "Mod":   (Op2Type.MOD,   False, 0x3F),
    # scomp's CInstructionAnd/Or/Xor are the BITWISE operators (& | ^).
    # Logical && and || compile to the AND/OR short-circuit scaffold
    # (PushV+MovB+JumpBs+MovB) — see `_try_lift_short_circuit`.
    "And":   (Op2Type.BAND,  False, 0x3F),
    "Or":    (Op2Type.BOR,   False, 0x3F),
    "BAnd":  (Op2Type.BAND,  False, 0x3F),
    "BOr":   (Op2Type.BOR,   False, 0x3F),
    "BXor":  (Op2Type.BXOR,  False, 0x3F),
    "Eq":    (Op2Type.EQ,    False, 0x3F),
    "Neq":   (Op2Type.NEQ,   False, 0x3F),
    "LT":    (Op2Type.LT,    False, 0x3F),
    "GT":    (Op2Type.GT,    False, 0x3F),
    "LE":    (Op2Type.LE,    False, 0x3F),
    "GE":    (Op2Type.GE,    False, 0x3F),
    "Pow":   (Op2Type.POW,   False, 0x3F),
    "Xor":   (Op2Type.BXOR,  False, 0x3F),

    "Add2":  (Op2Type.PLUS,  True, 0x1F),
    "Sub2":  (Op2Type.MINUS, True, 0x1F),
    "Mult2": (Op2Type.MULT,  True, 0x1F),
    "Div2":  (Op2Type.DIV,   True, 0x1F),
    "Mod2":  (Op2Type.MOD,   True, 0x1F),
    "And2":  (Op2Type.BAND,  True, 0x1F),
    "Or2":   (Op2Type.BOR,   True, 0x1F),
    "BAnd2": (Op2Type.BAND,  True, 0x1F),
    "BOr2":  (Op2Type.BOR,   True, 0x1F),
    "BXor2": (Op2Type.BXOR,  True, 0x1F),
    "Eq2":   (Op2Type.EQ,    True, 0x1F),
    "Neq2":  (Op2Type.NEQ,   True, 0x1F),
    "LT2":   (Op2Type.LT,    True, 0x1F),
    "GT2":   (Op2Type.GT,    True, 0x1F),
    "LE2":   (Op2Type.LE,    True, 0x1F),
    "GE2":   (Op2Type.GE,    True, 0x1F),
    "Pow2":  (Op2Type.POW,   True, 0x1F),
    "Xor2":  (Op2Type.BXOR,  True, 0x1F),
}


def _make_binop_handler(op2type, has_result_slot, pop_mask):
    def handler(s: _FuncLifter, op):
        pop_count = op.TaskVar & pop_mask
        op1_task = op.TaskVar < 0
        op2_task = (op.TaskVar & 0x40) != 0
        # IMPORTANT (Expression.cpp:1782-1846): VarOut is interpreted in the
        # current frame BEFORE the pop.  Assign first, then pop.
        op1 = s._task_var_expr(op.Var1) if op1_task else s._slot_to_expr(op.Var1)
        op2 = s._task_var_expr(op.Var2) if op2_task else s._slot_to_expr(op.Var2)
        expr = ENOp2(op2type, op1, op2)
        if has_result_slot:
            dest_task = (op.TaskVar & 0x20) != 0
            if dest_task:
                _assign_task_var(s, op.VarOut, expr)
            else:
                # Type-cast detection: if the destination slot's type differs
                # from the natural binop result type, scomp's `binop2` was
                # emitted for an explicit cast.  Wrap the expression in
                # ENTypeC(dest_type, ...) so re-emit produces the same cast
                # pattern (PushV[dest_type] + ... + binop2).
                dest_slot = s._slot_at(op.VarOut)
                src1_slot = (s.task_var_types[op.Var1] if op1_task
                             else _expr_slot_type(s, op.Var1))
                src2_slot = (s.task_var_types[op.Var2] if op2_task
                             else _expr_slot_type(s, op.Var2))
                nat_type = _natural_binop_type(op2type, src1_slot, src2_slot)
                # Only wrap with cast when dest is a fresh Reserved temp —
                # named-Slot assignments do an implicit conversion via the
                # Mov (no source-level cast needed).
                # SKIP when the very next instruction is a Call/typed-Mov
                # (which is arg-setup for an upcoming Call, not a cast Mov)
                # — in that case the binop wrote directly into a function's
                # arg slot whose type happens to differ from the binop's
                # natural type (scomp implicit conversion of `Test(x % 2)`
                # where Test takes bool but `x % 2` is int — no source
                # cast was emitted).  The explicit-cast pattern always has
                # an intermediate plain `Mov` (slot-to-slot, not literal)
                # between the binop and the next consumer.
                next_is_arg_consumer = False
                if s.pos + 1 < len(s.instrs):
                    nxt = s.instrs[s.pos + 1].opcode
                    if isinstance(nxt, (PS.CInstructionCall,
                                        PS.CInstructionFunc,
                                        PS.CInstructionObjFunc,
                                        PS.CInstructionTObjFunc,
                                        PS.CInstructionTaskCall,
                                        # Typed-literal Movs for arg setup
                                        PS.CInstructionMovI,
                                        PS.CInstructionMovB,
                                        PS.CInstructionMovF,
                                        PS.CInstructionMovS,
                                        PS.CInstructionMovV,
                                        PS.CInstructionMovT)):
                        next_is_arg_consumer = True
                if (isinstance(dest_slot, _Reserved)
                        and not dest_slot.was_assigned
                        and getattr(dest_slot, "batch_id", 0) > 0
                        and nat_type is not None
                        and dest_slot.type != nat_type
                        and dest_slot.type in (VarType.INT, VarType.FLOAT, VarType.BOOL)
                        and nat_type in (VarType.INT, VarType.FLOAT, VarType.BOOL)
                        and not next_is_arg_consumer):
                    expr = ENTypeC(dest_slot.type, expr)
                _assign_local_slot(s, op.VarOut, expr)
            s._pop(pop_count)
        else:
            s._pop(pop_count)
            s._push(expr)
        s.pos += 1
    return handler


def _resolve_id_type(s: "_FuncLifter", name: str):
    """Resolve an ENId(name) back to a VarType using the lifter's symbol tables.
    Returns None for names we can't deduce (e.g. function-name placeholders)."""
    if not name:
        return None
    if name.startswith("L") and name[1:].isdigit():
        i = int(name[1:])
        if 0 <= i < len(s.local_types):
            return s.local_types[i]
    elif name.startswith("a") and name[1:].isdigit():
        i = int(name[1:])
        if 0 <= i < len(s.arg_types):
            return s.arg_types[i]
    elif name.startswith("tv") and name[2:].isdigit():
        i = int(name[2:])
        if 0 <= i < len(s.task_var_types):
            return s.task_var_types[i]
    elif name.startswith("g") and name[1:].isdigit():
        i = int(name[1:])
        gtypes = getattr(s.ctx, "global_types", None) or []
        if 0 <= i < len(gtypes):
            return gtypes[i]
    else:
        # Property name (e.g. ItemID1, Container) — look up by name.
        for g in getattr(s.ctx, "globals", []) or []:
            if getattr(g, "name", None) == name:
                return getattr(g, "type", None)
    return None


def _expr_node_type(expr, s: "_FuncLifter" = None):
    """Infer the VarType of any expression node, recursively.  Returns None
    when the type cannot be deduced (object refs, ENFunc, etc.).  Pass the
    lifter `s` so ENId-name lookups can resolve back to local/arg/global types."""
    if expr is None:
        return None
    if isinstance(expr, ENInt):
        return VarType.INT
    if isinstance(expr, ENFloat):
        return VarType.FLOAT
    if isinstance(expr, ENBool):
        return VarType.BOOL
    if isinstance(expr, ENString):
        return VarType.STRING
    if isinstance(expr, ENVector):
        return VarType.VECTOR
    if isinstance(expr, ENTypeC):
        return expr.target
    if isinstance(expr, ENOp2):
        return _natural_binop_type(expr.op, _expr_node_type(expr.left, s), _expr_node_type(expr.right, s))
    if isinstance(expr, ENOp1):
        # Unary on float/int preserves operand type; logical NOT -> BOOL.
        if expr.op == Op1Type.NOT or expr.op in (Op1Type.NULL, Op1Type.NOTNULL):
            return VarType.BOOL
        return _expr_node_type(expr.node, s)
    if isinstance(expr, ENOp3):
        # Ternary: result type from either branch (both should match scomp-side).
        t = _expr_node_type(expr.op2, s)
        if t is not None:
            return t
        return _expr_node_type(expr.op3, s)
    if isinstance(expr, ENId):
        if s is not None:
            return _resolve_id_type(s, expr.name)
        return None
    if isinstance(expr, ENAssign):
        # Assignment value's type = type of value being assigned.
        return _expr_node_type(getattr(expr, "value", None), s)
    # _Slot / _Reserved style: inspect .type attr.
    t = getattr(expr, "type", None)
    return t


def _expr_slot_type(s: _FuncLifter, k_from_top: int):
    """Return the VarType of the slot at depth `k_from_top`, or None.

    Handles _Slot/_Reserved (use .type) and direct expression nodes pushed
    by h_PushI / h_PushF / etc (infer from literal class).  For compound
    expressions (ENOp1 / ENOp2 / ENTypeC) we recurse on the children so the
    binop2-cast detection sees the *value* type, not just the .type attr."""
    try:
        v = s._slot_at(k_from_top)
    except LiftError:
        return None
    t = getattr(v, "type", None)
    if t is not None:
        return t
    return _expr_node_type(v, s)


def _natural_binop_type(op: "Op2Type", t1, t2):
    """Compute the binop's natural result type (= what scomp's `Div/Mult/Sub/...`
    would produce without an explicit cast).  Returns None if either operand
    type is unknown.

    Promotion rule (matches scomp's Expression.cpp): float ⨉ anything → float;
    int ⨉ int → int; bool ⨉ bool → bool (comparison ops).  Returns None for
    string/vector/object operands (no implicit promotion involved)."""
    if t1 is None or t2 is None:
        return None
    if op in (Op2Type.EQ, Op2Type.NEQ, Op2Type.LT, Op2Type.GT, Op2Type.LE, Op2Type.GE):
        return VarType.BOOL
    if VarType.FLOAT in (t1, t2):
        if t1 in (VarType.INT, VarType.FLOAT, VarType.BOOL) and t2 in (VarType.INT, VarType.FLOAT, VarType.BOOL):
            return VarType.FLOAT
    if t1 == VarType.INT and t2 == VarType.INT:
        return VarType.INT
    if t1 == VarType.BOOL and t2 == VarType.BOOL:
        return VarType.BOOL
    return None


_UNOP_TABLE = {
    "Neg":     (Op1Type.MINUS,   False),
    "Not":     (Op1Type.NOT,     False),
    "Sqrt":    (Op1Type.SQRT,    False),
    "Sin":     (Op1Type.SIN,     False),
    "Cos":     (Op1Type.COS,     False),
    "ASin":    (Op1Type.ASIN,    False),
    "NullEq":  (Op1Type.NULL,    False),
    "NullNeq": (Op1Type.NOTNULL, False),
    "CString": (Op1Type.CSTRING, False),

    "Neg2":     (Op1Type.MINUS,   True),
    "Not2":     (Op1Type.NOT,     True),
    "Sqrt2":    (Op1Type.SQRT,    True),
    "Sin2":     (Op1Type.SIN,     True),
    "Cos2":     (Op1Type.COS,     True),
    "ASin2":    (Op1Type.ASIN,    True),
    "NullEq2":  (Op1Type.NULL,    True),
    "NullNeq2": (Op1Type.NOTNULL, True),
    "CString2": (Op1Type.CSTRING, True),
}


def _make_unop_handler(op1type, has_result_slot):
    def handler(s: _FuncLifter, op):
        src = getattr(op, "Var", None)
        if src is None:
            src = op.VarIn
        if has_result_slot:
            pop_count = op.TaskVar & 0x3F
        else:
            pop_count = op.TaskVar & 0x7F
        op1_task = (op.TaskVar & 0x80) != 0
        inner = s._task_var_expr(src) if op1_task else s._slot_to_expr(src)
        expr = ENOp1(op1type, inner)
        if has_result_slot:
            dest_task = (op.TaskVar & 0x40) != 0
            if dest_task:
                _assign_task_var(s, op.VarOut, expr)
            else:
                _assign_local_slot(s, op.VarOut, expr)
            s._pop(pop_count)
        else:
            s._pop(pop_count)
            s._push(expr)
        s.pos += 1
    return handler


# ----- method calls --------------------------------------------------------

def h_ObjFunc(s: _FuncLifter, op):
    args = [_resolve_fvar(s, fv) for fv in op.fvar]
    obj = s._slot_to_expr(op.Var)
    s.pos += 1
    push_count = _consume_trailing_pop(s)
    s._pop(push_count)
    # scomp quirk: when a method call's RECEIVER is itself a function call,
    # `F()->Method(a1..aM)` re-evaluates the receiver F() once per argument as
    # a separate DISCARDED call (Expression.cpp obj-method codegen).  h_Call
    # lifted each such reeval as a bare statement; drop the trailing M (= arg
    # count) that exactly match the receiver expression — they are NOT real
    # source statements, just scomp's per-argument receiver re-evaluations.
    if (isinstance(obj, (ENFunc, ENFuncGlobal))
            and getattr(obj, "obj", None) is None):
        m = len(args)
        if m and len(s.statements) >= m and all(
                isinstance(st, OpExprStmt) and st.expr == obj
                for st in s.statements[-m:]):
            del s.statements[-m:]
    s.statements.append(OpExprStmt(expr=ENFunc(name=op.func_name, args=args, obj=obj)))


def h_TObjFunc(s: _FuncLifter, op):
    args = [_resolve_fvar(s, fv) for fv in op.fvar]
    obj = s._task_var_expr(op.Var)
    s.pos += 1
    push_count = _consume_trailing_pop(s)
    s._pop(push_count)
    s.statements.append(OpExprStmt(expr=ENFunc(name=op.func_name, args=args, obj=obj)))


# ----- internal CALL -------------------------------------------------------

def _collect_reserved_args(s: _FuncLifter, count: int, deepest_first: bool) -> List:
    """Take the top `count` _Reserved slots' expressions. If deepest_first,
    the deepest slot's expr is first in the returned list (matching the
    parameter order at the call site)."""
    vals = []
    for d in range(count, 0, -1):
        v = s._slot_at(d)
        if isinstance(v, _Reserved):
            vals.append(v.expr)
        elif isinstance(v, _Slot):
            vals.append(ENId(v.name))
        else:
            vals.append(v)
    return vals if deepest_first else list(reversed(vals))


def _pushv_types_at_top(s: _FuncLifter, count: int) -> List[VarType]:
    """Recover the original PushV types from the top `count` reserved slots."""
    out = []
    for d in range(count, 0, -1):
        v = s._slot_at(d)
        if isinstance(v, _Reserved):
            out.append(v.type)
        else:
            raise LiftError(f"expected reserved slot at depth {d}, got {type(v).__name__}")
    return out


def h_Call(s: _FuncLifter, op):
    """INSTR_CALL <addr>.

    Pattern (Expression.cpp:349-363):
        INSTR_PUSHV uArgs (types)
        ...arg setup (Mov*/Push*) into reserved slots...
        INSTR_CALL <addr>
        [INSTR_Mov dest, uArgs   # for non-void with consumed result]
        INSTR_POP <ulPopSize>
    """
    addr = op.VarIn
    s.pos += 1
    u_args = s._count_top_pushv_batch()
    pushv_types = _pushv_types_at_top(s, u_args) if u_args else []

    nxt = s.instrs[s.pos].opcode if s.pos < len(s.instrs) else None
    if isinstance(nxt, PS.CInstructionPop):
        pop_n = nxt.PopCount
        s.pos += 1
        if pop_n == u_args:
            # Either a void function called in statement context, OR a non-
            # void function whose return value the caller is discarding (both
            # produce pop_n == u_args).  Distinguishing signal: the BOTTOM
            # slot of the PushV batch.  If it was filled by some arg-setup
            # Mov/Push, this is a regular void call.  If it's still its raw
            # uninitialised _Reserved with the zero-literal default, it's
            # really the return slot for a non-void call.
            # If we've already learned this function is non-void from another
            # call site, prefer that signature.
            prev_sig = s.ctx.calls.get(addr)
            known_nonvoid = prev_sig is not None and prev_sig.ret_type is not None
            ret_slot = s._slot_at(u_args) if u_args > 0 else None
            looks_like_ret_slot = (
                u_args > 0
                and isinstance(ret_slot, _Reserved)
                and not ret_slot.was_assigned
            )
            if known_nonvoid or looks_like_ret_slot:
                arg_count = u_args - 1
                ret_type = prev_sig.ret_type if known_nonvoid else pushv_types[0]
                arg_types = pushv_types[1:]
                args = _collect_reserved_args(s, arg_count, deepest_first=True)
                s._pop(u_args)
                s.ctx.register_call(addr, arg_types, ret_type)
                s.ctx.note_call_origin(addr, s.task_index)
                s.statements.append(OpExprStmt(expr=_make_call_func_node(
                    s, addr, arg_count, ret_type, args,
                )))
                return
            arg_count = u_args
            arg_types = pushv_types
            ret_type = None
            args = _collect_reserved_args(s, arg_count, deepest_first=True)
            s._pop(u_args)
            s.ctx.register_call(addr, arg_types, ret_type)
            s.ctx.note_call_origin(addr, s.task_index)
            s.statements.append(OpExprStmt(expr=_make_call_func_node(
                s, addr, arg_count, ret_type, args,
            )))
            return
        if pop_n == u_args - 1:
            # expression-context non-void call: result left on top of stack.
            arg_count = u_args - 1
            ret_type = pushv_types[0]
            arg_types = pushv_types[1:]
            args = []
            for d in range(arg_count, 0, -1):
                v = s._slot_at(d)
                args.append(v.expr if isinstance(v, _Reserved) else (ENId(v.name) if isinstance(v, _Slot) else v))
            s._pop(u_args)
            call_expr = _make_call_func_node(s, addr, arg_count, ret_type, args)
            s._push(call_expr)
            s.ctx.register_call(addr, arg_types, ret_type)
            s.ctx.note_call_origin(addr, s.task_index)
            return
        raise LiftError(
            f"CALL pop={pop_n} doesn't match expected u_args={u_args} or u_args-1 (addr=0x{addr:x})"
        )

    if isinstance(nxt, _CALL_FOLLOWUP_MOVS):
        mov = nxt
        # Compiler emits MovX dest, u_args (copying the ret slot to dest).
        s.pos += 1
        if s.pos >= len(s.instrs) or not isinstance(s.instrs[s.pos].opcode, PS.CInstructionPop):
            raise LiftError(f"CALL+Mov not followed by Pop (addr=0x{addr:x})")
        pop_n = s.instrs[s.pos].opcode.PopCount
        s.pos += 1
        if pop_n != u_args:
            raise LiftError(f"CALL+Mov pop={pop_n} != u_args={u_args} (addr=0x{addr:x})")
        arg_count = u_args - 1
        ret_type = pushv_types[0]
        arg_types = pushv_types[1:]
        args = []
        for d in range(arg_count, 0, -1):
            v = s._slot_at(d)
            args.append(v.expr if isinstance(v, _Reserved) else (ENId(v.name) if isinstance(v, _Slot) else v))
        call_expr = ENFunc(name=_call_name(addr, arg_count, ret_type, s.ctx), args=args)
        # Determine destination from Mov variant: VarOut is always the local
        # slot dest (Mov/MovB/MovI/MovF/MovS/MovV), or task-var index
        # (TMov/TMovB/...).  Even though the Mov also encodes a "value" (the
        # one being copied), in the post-CALL pattern that value is the
        # return slot at depth u_args — we ignore the value side here.
        # Determine the Mov destination.  Three cases:
        #   1. local slot, named  → emit `name = call;`
        #   2. local slot, _Reserved → silently update slot.expr (the call
        #      result feeds into an outer reservation, e.g. outer call arg)
        #   3. task var → emit `tvN = call;`
        # After CALL, scomp always uses a slot-to-slot Mov (or TMov) to copy
        # the return value out — never a Mov<literal>.  Determine dest slot:
        if isinstance(mov, PS.CInstructionMov):
            # Mov field naming is INVERTED in PathologicScript (see h_Mov
            # comment): for CInstructionMov, VarIn is the DEST slot.
            # scomp's CompileTaskFuncCall passes `ulRet + uArgs` to
            # CompileMoveVar so the slot index encoded into the Mov is
            # already in the pre-pop frame — read it directly.
            dest_slot_pre_pop = mov.VarIn
            target = s._slot_at(dest_slot_pre_pop)
            s._pop(u_args)
            s.ctx.register_call(addr, arg_types, ret_type)
            s.ctx.note_call_origin(addr, s.task_index)
            if isinstance(target, _Slot):
                s.statements.append(OpExprStmt(expr=ENAssign(
                    AssignType.NONE, target.name, call_expr,
                )))
            elif isinstance(target, _Reserved):
                target.expr = call_expr
                target.was_assigned = True
            else:
                raise LiftError(f"CALL+Mov dest unknown {type(target).__name__}")
            return
        elif isinstance(mov, PS.CInstructionTMov):
            # TMov: VarOut is the task-var index (dest), VarIn is the source
            # local slot (which is u_args — the ret slot).
            dest_name = f"tv{mov.VarOut}"
            s._pop(u_args)
            s.ctx.register_call(addr, arg_types, ret_type)
            s.ctx.note_call_origin(addr, s.task_index)
            s.statements.append(OpExprStmt(expr=ENAssign(
                AssignType.NONE, dest_name, call_expr,
            )))
            return
        else:
            raise LiftError(f"unsupported Mov variant after CALL: {type(mov).__name__}")

    raise LiftError(
        f"CALL not followed by simple Pop or Mov+Pop (next={type(nxt).__name__ if nxt else 'EOF'}) "
        f"at addr=0x{addr:x}"
    )


# Mov-family classes that can carry a function's return value back to a destination.
# Only slot-to-slot / slot-to-task variants — scomp never uses literal-Movs to
# capture a CALL result because the call already produced the value at a slot.
_CALL_FOLLOWUP_MOVS = (
    PS.CInstructionMov, PS.CInstructionTMov,
)


def _call_name(addr: int, arg_count: int, ret_type: Optional[VarType], ctx: "_ScriptCtx" = None) -> str:
    if ctx is not None:
        nm = ctx.addr_to_name.get(addr)
        if nm is not None:
            return nm
    rt = "v" if ret_type is None or ret_type == VarType.VOID else ret_type.keyword[0]
    return f"f_{addr:x}_a{arg_count}_{rt}"


def _make_call_func_node(s: "_FuncLifter", addr: int, arg_count: int,
                          ret_type: Optional[VarType], args: list):
    """Build the call AST node.  When the current function is INSIDE a task
    and the target is a GLOBAL function of the SAME name, emit `global.X()`
    so scomp's name lookup skips the task scope (which would otherwise find
    the current task's same-named method and emit a recursive call).
    """
    target_name = _call_name(addr, arg_count, ret_type, s.ctx)
    cur_name = getattr(s, "func_name", None)
    cur_task = getattr(s, "task_index", None)
    target_task = s.ctx.addr_to_task.get(addr, "?")
    if (cur_task is not None
            and target_task is None
            and cur_name is not None
            and target_name == cur_name):
        return ENFuncGlobal(name=target_name, args=args)
    return ENFunc(name=target_name, args=args)


# ----- task spawn ----------------------------------------------------------

def h_TaskCall(s: _FuncLifter, op):
    """Pattern (Expression.cpp:2272-2305):
        PUSHV [ret_type? + arg_types]
        ...args setup...
        TASKCALL <task_id>
        CALL <init_addr>
        TASKRETURN
        [optional MovX <dest>, uArgs   # non-void init with consumed result]
        POP <ulPopSize>
    """
    task_id = op.VarIn
    s.pos += 1
    if s.pos >= len(s.instrs):
        raise LiftError("TaskCall at end of body")
    call_op = s.instrs[s.pos].opcode
    if not isinstance(call_op, (PS.CInstructionCall,)):
        raise LiftError(f"TaskCall not immediately followed by Call (got {type(call_op).__name__})")
    s.pos += 1
    if s.pos >= len(s.instrs):
        raise LiftError("TaskCall+Call at end without TaskReturn")
    tr_op = s.instrs[s.pos].opcode
    if not isinstance(tr_op, PS.CInstructionTaskReturn):
        raise LiftError(f"TaskCall+Call not followed by TaskReturn (got {type(tr_op).__name__})")
    s.pos += 1
    if s.pos >= len(s.instrs):
        raise LiftError("TaskCall sequence missing trailing Pop")

    nxt = s.instrs[s.pos].opcode
    u_args = s._count_top_pushv_batch()

    if isinstance(nxt, PS.CInstructionPop):
        # Void task init OR non-void with discarded result OR expression context.
        pop_n = nxt.PopCount
        s.pos += 1
        if pop_n == u_args:
            # Void or discarded non-void.  For non-void tasks the BOTTOM slot
            # of the PushV batch is the (unused) return slot — exclude it
            # from the arg list so the spawn emits `t{args}` without the
            # extra leading default-zero arg.
            is_nonvoid = (0 <= task_id < len(s.ctx.task_is_nonvoid)
                          and s.ctx.task_is_nonvoid[task_id])
            arg_count = u_args - 1 if is_nonvoid else u_args
            args = _collect_reserved_args(s, arg_count, deepest_first=True) if arg_count > 0 else []
            s._pop(u_args)
            s.statements.append(OpExprStmt(expr=ENTask(name=s.ctx.task_names[task_id], args=args)))
            return
        if pop_n == u_args - 1:
            # Expression context — task spawn result left on stack.
            arg_count = u_args - 1
            args = []
            for d in range(arg_count, 0, -1):
                v = s._slot_at(d)
                args.append(v.expr if isinstance(v, _Reserved)
                            else (ENId(v.name) if isinstance(v, _Slot) else v))
            s._pop(u_args)
            s._push(ENTask(name=s.ctx.task_names[task_id], args=args))
            return
        raise LiftError(f"TaskCall pop={pop_n} != u_args={u_args} or u_args-1")

    if isinstance(nxt, _CALL_FOLLOWUP_MOVS):
        # Non-void task init: MovX dest, uArgs; Pop uArgs.
        mov = nxt
        s.pos += 1
        if s.pos >= len(s.instrs) or not isinstance(s.instrs[s.pos].opcode, PS.CInstructionPop):
            raise LiftError("TaskCall+Mov not followed by Pop")
        pop_n = s.instrs[s.pos].opcode.PopCount
        s.pos += 1
        if pop_n != u_args:
            raise LiftError(f"TaskCall+Mov pop={pop_n} != u_args={u_args}")
        arg_count = u_args - 1
        args = []
        for d in range(arg_count, 0, -1):
            v = s._slot_at(d)
            args.append(v.expr if isinstance(v, _Reserved)
                        else (ENId(v.name) if isinstance(v, _Slot) else v))
        task_expr = ENTask(name=s.ctx.task_names[task_id], args=args)
        if isinstance(mov, PS.CInstructionMov):
            # VarIn = dest slot (Mov field naming is inverted in PS).
            # scomp's slot computation already accounts for the still-pushed
            # u_args slots, so read directly.
            target = s._slot_at(mov.VarIn)
            s._pop(u_args)
            if isinstance(target, _Slot):
                s.statements.append(OpExprStmt(expr=ENAssign(AssignType.NONE, target.name, task_expr)))
            elif isinstance(target, _Reserved):
                target.expr = task_expr
                target.was_assigned = True
            else:
                raise LiftError(f"TaskCall+Mov dest unknown {type(target).__name__}")
        elif isinstance(mov, PS.CInstructionTMov):
            dest_name = f"tv{mov.VarOut}"
            s._pop(u_args)
            s.statements.append(OpExprStmt(expr=ENAssign(AssignType.NONE, dest_name, task_expr)))
        else:
            raise LiftError(f"unsupported Mov after TaskCall: {type(mov).__name__}")
        return

    raise LiftError(
        f"TaskCall not followed by simple Pop or Mov+Pop (got {type(nxt).__name__})"
    )


# ============================================================================
# dispatch table
# ============================================================================

_HANDLERS = {
    "CInstructionPushB":   h_PushB,
    "CInstructionPushI":   h_PushI,
    "CInstructionPushF":   h_PushF,
    "CInstructionPushS":   h_PushS,
    "CInstructionPushVec": h_PushVec,
    "CInstructionPush":    h_Push,
    "CInstructionPushT":   h_PushT,
    "CInstructionPushGE":  h_PushGE,
    "CInstructionPushE":   h_PushE,
    "CInstructionPushV":   h_PushV,
    "CInstructionPop":     h_Pop,
    "CInstructionPopE":    h_PopE,
    "CInstructionPopGE":   h_PopGE,

    "CInstructionMov":  h_Mov,
    "CInstructionMovB": h_MovB,
    "CInstructionMovI": h_MovI,
    "CInstructionMovF": h_MovF,
    "CInstructionMovS": h_MovS,
    "CInstructionMovV": h_MovV,
    "CInstructionMovT": h_MovT,

    "CInstructionTMov":  h_TMov,
    "CInstructionTMovB": h_TMovB,
    "CInstructionTMovI": h_TMovI,
    "CInstructionTMovF": h_TMovF,
    "CInstructionTMovS": h_TMovS,
    "CInstructionTMovV": h_TMovV,
    "CInstructionTMovT": h_TMovT,

    "CInstructionSetNull":  h_SetNull,
    "CInstructionSetNullT": h_SetNullT,

    "CInstructionFunc":   h_Func,
    "CInstructionReturn": h_Return,

    "CInstructionEventEnable":  h_EventEnable,
    "CInstructionEventDisable": h_EventDisable,

    "CInstructionJumpB": h_JumpB,
    "CInstructionJump":  h_Jump,

    "CInstructionObjFunc":  h_ObjFunc,
    "CInstructionTObjFunc": h_TObjFunc,
    "CInstructionCall":     h_Call,
    "CInstructionTaskCall": h_TaskCall,
    "CInstructionFuncExist":  None,   # filled in below
    "CInstructionFuncExist2": None,
}


def h_FuncExist(s: _FuncLifter, op):
    """obj->FuncExist(name, args) — INSTR_FUNC_EXIST.

    Layout (Expression.cpp:1872-1916): three operands (obj, name, args slot)
    plus optional task-var flags.  No PUSHV before, no POP after — the result
    is pushed onto the stack.  PathologicScript exposes fields:
        Var1, Var2, VarOut, TaskVar  (one slot ref each + flag byte).
    """
    pop_count = op.TaskVar & 0x1F
    a_task = op.TaskVar < 0
    b_task = (op.TaskVar & 0x40) != 0
    c_task = (op.TaskVar & 0x20) != 0
    a = s._task_var_expr(op.Var1) if a_task else s._slot_to_expr(op.Var1)
    b = s._task_var_expr(op.Var2) if b_task else s._slot_to_expr(op.Var2)
    c = s._task_var_expr(op.VarOut) if c_task else s._slot_to_expr(op.VarOut)
    expr = ENOp3(Op3Type.FUNC_EXIST, a, b, c)
    s._pop(pop_count)
    s._push(expr)
    s.pos += 1


def h_FuncExist2(s: _FuncLifter, op):
    """Result-slot variant — writes result to a specific slot."""
    pop_count = op.TaskVar & 0xF
    a_task = op.TaskVar < 0
    b_task = (op.TaskVar & 0x40) != 0
    c_task = (op.TaskVar & 0x20) != 0
    dest_task = (op.TaskVar & 0x10) != 0
    a = s._task_var_expr(op.Var1) if a_task else s._slot_to_expr(op.Var1)
    b = s._task_var_expr(op.Var2) if b_task else s._slot_to_expr(op.Var2)
    c = s._task_var_expr(op.Var3) if c_task else s._slot_to_expr(op.Var3)
    expr = ENOp3(Op3Type.FUNC_EXIST, a, b, c)
    if dest_task:
        _assign_task_var(s, op.VarOut, expr)
    else:
        _assign_local_slot(s, op.VarOut, expr)
    s._pop(pop_count)
    s.pos += 1


_HANDLERS["CInstructionFuncExist"]  = h_FuncExist
_HANDLERS["CInstructionFuncExist2"] = h_FuncExist2

for _name, (_t, _has_dst, _mask) in _BINOP_TABLE.items():
    _HANDLERS[f"CInstruction{_name}"] = _make_binop_handler(_t, _has_dst, _mask)
for _name, (_t, _has_dst) in _UNOP_TABLE.items():
    _HANDLERS[f"CInstruction{_name}"] = _make_unop_handler(_t, _has_dst)


# ============================================================================
# helpers
# ============================================================================

def _ps_type_to_var(raw: int) -> VarType:
    return VarType(int(raw))
