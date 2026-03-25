#!/usr/bin/env python3
"""Compare original and compiled ASM files, ignoring dead/unreachable code.

Usage:
  python compare_asm.py original.asm compiled.asm [source.c]
  python compare_asm.py --folder orig_dir compiled_dir [c_dir]

Comparison rules:
  - Unreachable instructions (after unconditional GOTO/Return) are stripped
  - @DEAD annotated addresses (from .c file) are stripped from original
  - Addresses are renumbered so dead code gaps don't cause false mismatches
  - Only reachable, working code is compared
"""

import os
import re
import sys
import subprocess
from typing import List, Tuple, Set, Dict, Optional


# ---------------------------------------------------------------------------
# Parsing
# ---------------------------------------------------------------------------

def parse_asm(text: str):
    """Parse ASM text into (header_lines, instructions).

    Instructions: list of (addr: int, content: str)
    Only supports 0xN: format; @FN format files are treated as header-only.
    """
    lines = text.split('\n')
    header_lines: List[str] = []
    instrs: List[Tuple[int, str]] = []
    in_header = True

    # First try 0xN: format
    for line in lines:
        # Skip pool metadata lines
        stripped = line.strip()
        if stripped.startswith('// @pool_') or stripped.startswith('// @poff'):
            continue
        m = re.match(r'(0x[0-9a-f]+):\s+(.*)', line)
        if m:
            in_header = False
            addr = int(m.group(1), 16)
            content = m.group(2).rstrip()
            # Strip inline // @poff=N annotations from instruction content
            content = re.sub(r'\s*//\s*@poff=\d+', '', content)
            instrs.append((addr, content))
        elif in_header:
            cleaned = re.sub(r'\s*//\s*@poff=\d+', '', line.rstrip())
            header_lines.append(cleaned)

    return header_lines, instrs


def get_entry_points(header_lines: List[str]) -> Set[int]:
    """Extract all code entry points from the ASM header."""
    entries = set()
    for line in header_lines:
        # RunOp = 0xN
        m = re.match(r'RunOp\s*=\s*0x([0-9a-f]+)', line)
        if m:
            entries.add(int(m.group(1), 16))
        # EVENT_N Op = 0xN
        m = re.match(r'\s+EVENT_\d+\s+Op\s*=\s*0x([0-9a-f]+)', line)
        if m:
            entries.add(int(m.group(1), 16))
    return entries


def get_dead_addrs_from_c(c_path: str) -> Set[int]:
    """Read @DEAD annotations from C source file."""
    dead = set()
    if not c_path or not os.path.exists(c_path):
        return dead
    with open(c_path, 'r') as f:
        for line in f:
            # // @DEAD: 0xABC:Stack[-1] = 0~~Stack[-2] = 0
            m = re.match(r'//\s*@DEAD:\s*0x([0-9a-f]+):', line)
            if m:
                dead.add(int(m.group(1), 16))
    return dead


# ---------------------------------------------------------------------------
# Reachability analysis
# ---------------------------------------------------------------------------

def find_reachable(instrs: List[Tuple[int, str]], entry_points: Set[int]) -> Set[int]:
    """BFS from entry points to find all reachable instruction addresses."""
    addr_to_idx: Dict[int, int] = {}
    for i, (addr, _) in enumerate(instrs):
        addr_to_idx[addr] = i

    reachable: Set[int] = set()
    queue = list(entry_points)

    while queue:
        addr = queue.pop(0)
        if addr in reachable or addr not in addr_to_idx:
            continue
        reachable.add(addr)

        idx = addr_to_idx[addr]
        _, content = instrs[idx]

        # Extract jump/call targets
        for m in re.finditer(r'(?:GOTO|Call|IF[^;]*GOTO)\s+0x([0-9a-f]+)', content):
            queue.append(int(m.group(1), 16))

        # Fall-through unless unconditional terminator
        is_terminator = (
            content.startswith('GOTO ')
            or 'Return()' in content
            or 'TaskReturn' in content
        )
        if not is_terminator:
            if idx + 1 < len(instrs):
                queue.append(instrs[idx + 1][0])

    return reachable


# ---------------------------------------------------------------------------
# Normalization
# ---------------------------------------------------------------------------

def _inline_trivial_gotos(instrs: List[Tuple[int, str]]) -> List[Tuple[int, str]]:
    """Inline GOTO that targets a single Return/GOTO instruction.

    Rewrites:
      GOTO X  (where X is "Return(); Pop(N)") → Return(); Pop(N)
      GOTO X  (where X is "GOTO Y")           → GOTO Y
    Also replaces IF ... GOTO X targets the same way.
    Iterates until stable.
    """
    addr_to_content: Dict[int, str] = {a: c for a, c in instrs}

    changed = True
    while changed:
        changed = False
        new_instrs = []
        for addr, content in instrs:
            new_content = content

            # Find all GOTO targets in this instruction
            for m in re.finditer(r'GOTO 0x([0-9a-f]+)', content):
                target = int(m.group(1), 16)
                tc = addr_to_content.get(target, '')

                if re.match(r'Return\(\);.*Pop\(\d+\)$', tc):
                    # GOTO to a bare Return — inline it
                    if content == f'GOTO 0x{target:x}':
                        # Pure GOTO → replace whole instruction
                        new_content = tc
                    else:
                        # IF ... GOTO target — rewrite target only if Return
                        # is the ONLY instruction at that address (no fall-through)
                        pass  # keep as-is for conditional jumps

                elif tc.startswith('GOTO 0x'):
                    # GOTO to another GOTO — follow the chain
                    chain_target = tc.split('GOTO ')[1]
                    new_content = new_content.replace(
                        f'GOTO 0x{target:x}', f'GOTO {chain_target}')

            if new_content != content:
                changed = True
            new_instrs.append((addr, new_content))
            addr_to_content[addr] = new_content

        instrs = new_instrs

    return instrs


def _remove_redundant_gotos(instrs: List[Tuple[int, str]]) -> List[Tuple[int, str]]:
    """Remove GOTO that jumps to the very next instruction (fall-through)."""
    result = []
    for i, (addr, content) in enumerate(instrs):
        m = re.match(r'GOTO 0x([0-9a-f]+)$', content)
        if m and i + 1 < len(instrs):
            target = int(m.group(1), 16)
            next_addr = instrs[i + 1][0]
            if target == next_addr:
                continue  # skip this redundant GOTO
        result.append((addr, content))
    return result


def _canonicalize_shared_returns(instrs: List[Tuple[int, str]]) -> List[Tuple[int, str]]:
    """Unify all GOTO/IF targets that point to equivalent Return instructions.

    When multiple Return(); Pop(N) instructions exist with the same Pop count,
    rewrite all references to point to the first one, then dead-code-eliminate
    the duplicates.
    """
    # Find all Return addresses grouped by their content
    ret_map: Dict[str, List[int]] = {}
    for addr, content in instrs:
        if re.match(r'Return\(\);.*Pop\(\d+\)$', content):
            ret_map.setdefault(content, []).append(addr)

    # Build redirect: for each Return content, all addrs → first addr
    redirect: Dict[int, int] = {}
    for content, addrs in ret_map.items():
        if len(addrs) > 1:
            canonical = addrs[0]
            for a in addrs[1:]:
                redirect[a] = canonical

    if not redirect:
        return instrs

    # Rewrite all address references
    result = []
    for addr, content in instrs:
        def _redir(m, _r=redirect):
            t = int(m.group(1), 16)
            if t in _r:
                return hex(_r[t])
            return m.group(0)
        new_content = re.sub(r'0x([0-9a-f]+)', _redir, content)
        result.append((addr, new_content))

    return result


def _canonical_reorder(header_lines: List[str],
                       instrs: List[Tuple[int, str]]) -> List[Tuple[int, str]]:
    """Reorder function blocks into canonical order via BFS from entry points.

    This ensures both original and compiled ASM have the same function order
    regardless of how functions were laid out in the binary or compiler output.
    """
    if not instrs:
        return instrs

    addr_set = {a for a, _ in instrs}
    addr_to_idx = {a: i for i, (a, _) in enumerate(instrs)}

    # Collect all function entry points
    func_entries: Set[int] = set()

    # From header: RunOp, EVENT ops
    run_op = None
    event_ops = []  # (header_line_index, addr) — preserves header order
    for i, line in enumerate(header_lines):
        m = re.match(r'RunOp\s*=\s*0x([0-9a-f]+)', line)
        if m:
            run_op = int(m.group(1), 16)
            if run_op in addr_set:
                func_entries.add(run_op)
        m = re.match(r'\s+EVENT_\d+\s+Op\s*=\s*0x([0-9a-f]+)', line)
        if m:
            a = int(m.group(1), 16)
            if a in addr_set:
                event_ops.append((i, a))
                func_entries.add(a)

    # From Call instructions
    for _, content in instrs:
        for m_c in re.finditer(r'(?<!\w)Call\s+0x([0-9a-f]+)', content):
            t = int(m_c.group(1), 16)
            if t in addr_set:
                func_entries.add(t)

    # First instruction is always an entry
    first_addr = instrs[0][0]
    func_entries.add(first_addr)

    # Split into blocks: each entry → contiguous instructions until next entry
    sorted_entries = sorted(func_entries)
    blocks: Dict[int, List[Tuple[int, str]]] = {}
    for i, entry in enumerate(sorted_entries):
        start = addr_to_idx[entry]
        end = addr_to_idx[sorted_entries[i + 1]] if i + 1 < len(sorted_entries) else len(instrs)
        blocks[entry] = instrs[start:end]

    # BFS from roots in canonical order:
    # 1. First instruction (Hold loop / RunOp if at addr 0)
    # 2. RunOp (main)
    # 3. EVENT ops in header order
    roots = []
    if first_addr not in roots:
        roots.append(first_addr)
    if run_op is not None and run_op not in roots:
        roots.append(run_op)
    for _, a in event_ops:
        if a not in roots:
            roots.append(a)

    ordered = []
    visited: Set[int] = set()

    def _dfs(entry):
        if entry in visited or entry not in blocks:
            return
        visited.add(entry)
        ordered.append(entry)
        # Follow Call targets depth-first (callees placed right after caller)
        for _, content in blocks[entry]:
            for m_c in re.finditer(r'(?<!\w)Call\s+0x([0-9a-f]+)', content):
                t = int(m_c.group(1), 16)
                _dfs(t)

    for root in roots:
        _dfs(root)

    # Append any unreached blocks
    for entry in sorted_entries:
        if entry not in visited:
            ordered.append(entry)

    # Reassemble
    result = []
    for entry in ordered:
        result.extend(blocks[entry])
    return result


def _collapse_synonyms(instrs: List[Tuple[int, str]]) -> List[Tuple[int, str]]:
    """Collapse synonymous multi-instruction sequences into canonical forms.

    Rules:
    1. Push((int) 0) + Pop(N); Push((bool) Stack[-M] OP Stack[-1])
       -> Pop(N-1); Push((bool) Stack[-(M-1)] OP 0)
       where OP is == or !=  (NullEq / NullNeq canonical form)

    2. StackPointer format: Tasks[-1].StackPointer -> StackPtr

    3. TaskVar combined opcode:
       Pop(P); Push(EXPR) + Stack[X + StackPtr] = Stack[-1] + Pop(1)
       -> Stack[X + StackPtr] = EXPR; Pop(P);
    """
    # First pass: normalize StackPointer format
    instrs = [(a, c.replace('Tasks[-1].StackPointer', 'StackPtr')) for a, c in instrs]

    # Collect all jump/call targets so we don't collapse into them
    jump_targets: Set[int] = set()
    for _, content in instrs:
        for m in re.finditer(r'(?:GOTO|Call|IF[^;]*GOTO)\s+0x([0-9a-f]+)', content):
            jump_targets.add(int(m.group(1), 16))

    # Second pass: collapse Push(0) + Compare -> NullEq
    result = []
    i = 0
    while i < len(instrs):
        merged = False
        if i + 1 < len(instrs):
            addr1, c1 = instrs[i]
            addr2, c2 = instrs[i + 1]

            if c1 == 'Push((int) 0)' and addr2 not in jump_targets:
                # Pattern: Pop(N); Push((bool) REF OP Stack[-1])
                m = re.match(
                    r'Pop\((\d+)\); Push\(\(bool\) (.+?) (==|!=) Stack\[-1\]\)$', c2)
                if m:
                    pop_n = int(m.group(1))
                    ref = m.group(2)
                    op = m.group(3)
                    new_ref = _adjust_stack_ref(ref, -1)
                    result.append((addr1, f'Pop({pop_n - 1}); Push((bool) {new_ref} {op} 0)'))
                    i += 2
                    merged = True

                if not merged:
                    # Reversed: Pop(N); Push((bool) Stack[-1] OP REF)
                    m = re.match(
                        r'Pop\((\d+)\); Push\(\(bool\) Stack\[-1\] (==|!=) (.+)\)$', c2)
                    if m:
                        pop_n = int(m.group(1))
                        op = m.group(2)
                        ref = m.group(3)
                        new_ref = _adjust_stack_ref(ref, -1)
                        result.append((addr1, f'Pop({pop_n - 1}); Push((bool) {new_ref} {op} 0)'))
                        i += 2
                        merged = True

        if not merged:
            result.append(instrs[i])
            i += 1

    # Third pass: collapse TaskVar combined opcode
    # Pop(P); Push(EXPR) + Stack[X + StackPtr] = Stack[-1] + Pop(1)
    # -> Stack[X + StackPtr] = EXPR; Pop(P);
    result2 = []
    i = 0
    while i < len(result):
        merged = False
        if i + 2 < len(result):
            addr1, c1 = result[i]
            addr2, c2 = result[i + 1]
            addr3, c3 = result[i + 2]

            if addr2 not in jump_targets and addr3 not in jump_targets:
                # Match: Pop(P); Push(EXPR)
                m1 = re.match(r'Pop\((\d+)\); Push\((.+)\);?$', c1)
                if m1:
                    pop_n = int(m1.group(1))
                    expr = m1.group(2)
                    # Match: Stack[X + StackPtr] = Stack[-1]
                    m2 = re.match(r'(Stack\[.+? \+ StackPtr\]) = Stack\[-1\]$', c2)
                    if m2 and c3 == 'Pop(1)':
                        task_var = m2.group(1)
                        result2.append((addr1, f'{task_var} = {expr}; Pop({pop_n});'))
                        i += 3
                        merged = True
        if not merged:
            result2.append(result[i])
            i += 1

    return result2


def _sort_commutable_writes(instrs: List[Tuple[int, str]]) -> List[Tuple[int, str]]:
    """Sort adjacent Stack writes that are independent (commutable).

    Two adjacent instructions 'Stack[A] = EXPR1' and 'Stack[B] = EXPR2'
    can be reordered if they write to different positions and neither
    expression references the other's target.
    Sorting by target position gives a canonical order.
    """
    # Collect jump targets to avoid sorting across them
    jump_targets: Set[int] = set()
    for _, content in instrs:
        for m in re.finditer(r'(?:GOTO|Call|IF[^;]*GOTO)\s+0x([0-9a-f]+)', content):
            jump_targets.add(int(m.group(1), 16))

    _WRITE_RE = re.compile(r'^(Stack\[.+?\]) = (.+)$')

    def _get_write_info(content: str):
        """Returns (target_str, rhs_str) if this is a simple stack write, else None."""
        m = _WRITE_RE.match(content)
        if m:
            return m.group(1), m.group(2)
        return None

    result = list(instrs)
    changed = True
    while changed:
        changed = False
        i = 0
        while i + 1 < len(result):
            addr1, c1 = result[i]
            addr2, c2 = result[i + 1]
            if addr2 in jump_targets:
                i += 1
                continue
            w1 = _get_write_info(c1)
            w2 = _get_write_info(c2)
            if w1 and w2:
                tgt1, rhs1 = w1
                tgt2, rhs2 = w2
                # Independent if targets differ and neither rhs references the other target
                if tgt1 != tgt2 and tgt1 not in rhs2 and tgt2 not in rhs1:
                    # Sort by target string for canonical order
                    if tgt1 > tgt2:
                        result[i] = (addr1, c2)
                        result[i + 1] = (addr2, c1)
                        changed = True
            i += 1
    return result


def _sort_pop_and_taskvar_writes(instrs: List[Tuple[int, str]]) -> List[Tuple[int, str]]:
    """Canonicalize ordering of Pop and StackPtr-based writes.

    Task variable writes (Stack[X + StackPtr] = Y) are independent of
    regular stack Pop operations. Sort them into canonical order:
    Pop before StackPtr writes.
    Also handles: Pop before GlobalVars writes, Pop before Stack[-N] = 0 resets.
    """
    jump_targets: Set[int] = set()
    for _, content in instrs:
        for m in re.finditer(r'(?:GOTO|Call|IF[^;]*GOTO)\s+0x([0-9a-f]+)', content):
            jump_targets.add(int(m.group(1), 16))

    _POP_RE = re.compile(r'^Pop\(\d+\)$')
    _TASKVAR_RE = re.compile(r'^Stack\[\d+ \+ (?:StackPtr|Tasks\[-1\]\.StackPointer)\]')
    _GVAR_RE = re.compile(r'^GlobalVars\[\d+\]')

    result = list(instrs)
    changed = True
    while changed:
        changed = False
        i = 0
        while i + 1 < len(result):
            addr1, c1 = result[i]
            addr2, c2 = result[i + 1]
            if addr2 in jump_targets:
                i += 1
                continue

            # Pattern: StackPtr/GlobalVar write followed by Pop → swap to Pop first
            is_taskvar1 = bool(_TASKVAR_RE.match(c1) or _GVAR_RE.match(c1))
            is_pop2 = bool(_POP_RE.match(c2))
            if is_taskvar1 and is_pop2:
                result[i] = (addr1, c2)
                result[i + 1] = (addr2, c1)
                changed = True

            # Pattern: Pop followed by StackPtr/GlobalVar write → already canonical (Pop first)
            i += 1
    return result


def _adjust_stack_ref(ref: str, delta: int) -> str:
    """Adjust a Stack[-N] reference by delta (negative = shallower)."""
    m = re.match(r'Stack\[-(\d+)\]$', ref)
    if m:
        n = int(m.group(1))
        return f'Stack[-{n + delta}]'
    # StackPtr-based refs don't change with push/pop of regular stack
    return ref


def _adjust_all_stack_refs(content: str, delta: int, min_depth: int = 2) -> str:
    """Adjust all Stack[-N] references in an instruction where N >= min_depth."""
    def _repl(m):
        n = int(m.group(1))
        if n >= min_depth:
            return f'Stack[-{n + delta}]'
        return m.group(0)
    return re.sub(r'Stack\[-(\d+)\]', _repl, content)


def _inline_push_before_call(instrs: List[Tuple[int, str]]) -> List[Tuple[int, str]]:
    """Normalize Push(literal) immediately before a call/op that uses Stack[-1].

    Pattern: Push(LITERAL) + @/@@Call(...Stack[-1]...) + Pop(N)
    -> Call with adjusted Stack refs + Pop(N-1)

    This handles the case where the original compiler reuses a PushEmpty-initialized
    slot (already 0/null) for a function argument, while our compiler pushes explicitly.
    """
    jump_targets: Set[int] = set()
    for _, content in instrs:
        for m in re.finditer(r'(?:GOTO|Call|IF[^;]*GOTO)\s+0x([0-9a-f]+)', content):
            jump_targets.add(int(m.group(1), 16))

    # Only inline simple literals
    _PUSH_LITERAL_RE = re.compile(
        r'^Push\(((?:\(int\) -?\d+|\(float\)[0-9.e+-]+|\(bool\) [01]|"[^"]*"|CVector\([^)]*\)))\)$')

    result = []
    i = 0
    while i < len(instrs):
        merged = False
        if i + 2 < len(instrs):
            addr1, c1 = instrs[i]
            addr2, c2 = instrs[i + 1]
            addr3, c3 = instrs[i + 2]
            # Check: Push(literal) + call using Stack[-1] + Pop(N)
            if addr2 not in jump_targets:
                m_push = _PUSH_LITERAL_RE.match(c1)
                if m_push and 'Stack[-1]' in c2 and re.match(r'@', c2):
                    m_pop = re.match(r'Pop\((\d+)\)$', c3)
                    if m_pop and addr3 not in jump_targets:
                        pop_n = int(m_pop.group(1))
                        if pop_n >= 1:
                            # Adjust: decrement all Stack[-N] for N>=2 by 1
                            new_c2 = _adjust_all_stack_refs(c2, -1, min_depth=2)
                            result.append((addr1, new_c2))
                            result.append((addr3, f'Pop({pop_n - 1})'))
                            i += 3
                            merged = True
        if not merged:
            result.append(instrs[i])
            i += 1
    return result


def _remove_dead_zero_before_goto(instrs: List[Tuple[int, str]]) -> List[Tuple[int, str]]:
    """Remove Stack[-N] = 0 assignments immediately before unconditional GOTO.

    The original compiler sometimes zeroes PushEmpty slots before jumping to
    a merge point where the slot is overwritten anyway. This is dead code.
    """
    result = []
    i = 0
    while i < len(instrs):
        if i + 1 < len(instrs):
            _, c1 = instrs[i]
            _, c2 = instrs[i + 1]
            # Pattern: Stack[-N] = 0 (or (bool) 0 or (bool)0) followed by GOTO
            if (re.match(r'^Stack\[-\d+\] = (?:0|\(bool\) ?0)$', c1)
                    and re.match(r'^GOTO 0x[0-9a-f]+$', c2)):
                # Skip the zero-assignment, keep the GOTO
                i += 1
                continue
        result.append(instrs[i])
        i += 1
    return result


def _normalize_binop_pop_push(instrs: List[Tuple[int, str]]) -> List[Tuple[int, str]]:
    """Canonicalize 'Stack[-M] = EXPR; Pop(N);' ↔ 'Pop(N); Push(EXPR);'.

    When M == N+1, these are semantically equivalent: both compute EXPR from
    the current stack state, pop N items, and leave the result on top.
    Normalize to 'Pop(N); Push(EXPR);' form (the simpler canonical form).
    """
    result = []
    _STORE_RE = re.compile(
        r'^Stack\[-(\d+)\] = (.+); Pop\((\d+)\);$')
    for addr, content in instrs:
        m = _STORE_RE.match(content)
        if m:
            slot = int(m.group(1))
            expr = m.group(2)
            pop_n = int(m.group(3))
            if slot == pop_n + 1:
                result.append((addr, f'Pop({pop_n}); Push({expr});'))
                continue
        result.append((addr, content))
    return result


def normalize(header_lines: List[str],
              instrs: List[Tuple[int, str]],
              reachable: Set[int],
              dead_addrs: Set[int] = set()
              ) -> str:
    """Strip dead code, normalize control flow, per-function renumber."""

    # Normalize header: strip trailing blank lines and trailing whitespace
    header_lines = [h.rstrip() for h in header_lines]
    while header_lines and header_lines[-1] == '':
        header_lines.pop()

    # Normalize Strings section: sort strings for consistent comparison
    # (string pool order may differ between original and assembled binaries)
    new_header = []
    in_strings = False
    string_entries = []
    for h in header_lines:
        if h == 'Strings:':
            in_strings = True
            new_header.append(h)
            continue
        if in_strings:
            if h.startswith('\t'):
                string_entries.append(h)
                continue
            else:
                # End of Strings section — sort and emit
                for s in sorted(string_entries):
                    new_header.append(s)
                string_entries = []
                in_strings = False
        new_header.append(h)
    if string_entries:
        for s in sorted(string_entries):
            new_header.append(s)
    header_lines = new_header

    # Keep only reachable instructions, excluding @DEAD
    live = [(addr, content) for addr, content in instrs
            if addr in reachable and addr not in dead_addrs]

    # Normalize control flow (pre-reorder)
    live = _inline_trivial_gotos(live)
    live = _remove_redundant_gotos(live)

    # Collapse synonymous instruction sequences
    live = _collapse_synonyms(live)

    # Sort commutable adjacent stack writes for canonical order
    live = _sort_commutable_writes(live)

    # NOTE: Pop/TaskVar sort moved to text-level normalization after all passes

    # Inline Push(literal) before call and remove dead zero-assigns before GOTO
    live = _inline_push_before_call(live)
    live = _remove_dead_zero_before_goto(live)

    # Canonicalize Stack[-M] = EXPR; Pop(N) ↔ Pop(N); Push(EXPR)
    live = _normalize_binop_pop_push(live)

    # Canonical function reorder (before shared-return canonicalization
    # so that "first Return" is deterministic regardless of raw layout)
    live = _canonical_reorder(header_lines, live)

    live = _canonicalize_shared_returns(live)

    # Re-check reachability after transformations
    if live:
        live_entries = set()
        for line in header_lines:
            m = re.match(r'RunOp\s*=\s*0x([0-9a-f]+)', line)
            if m:
                a = int(m.group(1), 16)
                if a in {addr for addr, _ in live}:
                    live_entries.add(a)
            m = re.match(r'\s+EVENT_\d+\s+Op\s*=\s*0x([0-9a-f]+)', line)
            if m:
                a = int(m.group(1), 16)
                if a in {addr for addr, _ in live}:
                    live_entries.add(a)
        live_entries.add(live[0][0])
        reach2 = find_reachable(live, live_entries)
        live = [(a, c) for a, c in live if a in reach2]

    if not live:
        return '\n'.join(header_lines) + '\n'

    # --- Per-function renumbering ---
    # Identify function entry points (same logic as _canonical_reorder)
    addr_set = {a for a, _ in live}
    func_entries: Set[int] = set()
    for line in header_lines:
        m = re.match(r'RunOp\s*=\s*0x([0-9a-f]+)', line)
        if m:
            a = int(m.group(1), 16)
            if a in addr_set:
                func_entries.add(a)
        m = re.match(r'\s+EVENT_\d+\s+Op\s*=\s*0x([0-9a-f]+)', line)
        if m:
            a = int(m.group(1), 16)
            if a in addr_set:
                func_entries.add(a)
    for _, content in live:
        for mc in re.finditer(r'(?<!\w)Call\s+0x([0-9a-f]+)', content):
            t = int(mc.group(1), 16)
            if t in addr_set:
                func_entries.add(t)
    func_entries.add(live[0][0])

    # Split into blocks (preserving canonical order)
    addr_to_idx = {a: i for i, (a, _) in enumerate(live)}
    sorted_fe = sorted(func_entries, key=lambda a: addr_to_idx.get(a, 0))
    blocks: List[Tuple[int, List[Tuple[int, str]]]] = []
    for i, entry in enumerate(sorted_fe):
        start = addr_to_idx[entry]
        end = addr_to_idx[sorted_fe[i + 1]] if i + 1 < len(sorted_fe) else len(live)
        blocks.append((entry, live[start:end]))

    # Build func name map: entry_addr -> "@F0", "@F1", ...
    func_name: Dict[int, str] = {}
    for i, (entry, _) in enumerate(blocks):
        func_name[entry] = f'@F{i}'

    # Normalize header: replace addresses with function names
    new_header = []
    for line in header_lines:
        m = re.match(r'(\s*EVENT_\d+\s+Op\s*=\s*)0x([0-9a-f]+)(.*)', line)
        if m:
            old = int(m.group(2), 16)
            if old in func_name:
                line = f'{m.group(1)}{func_name[old]}{m.group(3)}'
        m = re.match(r'(RunOp\s*=\s*)0x([0-9a-f]+)', line)
        if m:
            old = int(m.group(2), 16)
            if old in func_name:
                line = f'{m.group(1)}{func_name[old]}'
        new_header.append(line)

    # Collect ALL jump targets globally (from any GOTO/Call in any block)
    all_jump_targets: Set[int] = set()
    for _, content in live:
        for mt in re.finditer(r'(?:GOTO|Call)\s+0x([0-9a-f]+)', content):
            t = int(mt.group(1), 16)
            if t in addr_set:
                all_jump_targets.add(t)

    # Pre-compute label maps for all blocks (including cross-block targets)
    block_label_maps: Dict[int, Dict[int, str]] = {}
    for entry, block in blocks:
        local_addrs = {old_addr for old_addr, _ in block}
        # Label targets within this block from ANY source (not just within-block)
        targets = [a for a in all_jump_targets
                   if a in local_addrs and a != entry]
        pos = {a: i for i, (a, _) in enumerate(block)}
        targets.sort(key=lambda a: pos[a])
        block_label_maps[entry] = {a: f'L{i}' for i, a in enumerate(targets)}

    # Build global address resolution: addr -> canonical name
    global_resolve: Dict[int, str] = {}
    for entry, block in blocks:
        fn = func_name[entry]
        lmap = block_label_maps[entry]
        global_resolve[entry] = fn
        for a in lmap:
            global_resolve[a] = f'{fn} {lmap[a]}'

    # Normalize each function block: replace addresses with labels/@FN
    all_instrs = []
    for entry, block in blocks:
        local_addrs = {old_addr for old_addr, _ in block}
        label_map = block_label_maps[entry]

        for old_addr, content in block:
            def _replace_addr(m, _label=label_map, _func=func_name,
                              _local=local_addrs, _global=global_resolve):
                t = int(m.group(1), 16)
                if t in _label:
                    return _label[t]
                if t in _func and t not in _local:
                    return _func[t]
                if t in _global:
                    return _global[t]
                return m.group(0)

            new_content = re.sub(r'0x([0-9a-f]+)', _replace_addr, content)

            prefix = f'{label_map[old_addr]}: ' if old_addr in label_map else ''
            all_instrs.append(f'{func_name[entry]} {prefix}{new_content}')

    return '\n'.join(new_header) + '\n\n' + '\n\n'.join(all_instrs) + '\n'


def _renumber_fn_text(text: str) -> str:
    """Renumber @FN references in normalized text using DFS ordering.

    This makes both original (@FN-format from disassembler) and compiled
    (normalized @FN-format) use the same canonical function numbering,
    regardless of the original function layout order.

    DFS order: first_func, RunOp_func (+ callees DFS), EVENT_funcs (+ callees DFS).
    """
    lines = text.split('\n')

    # Split into header and body
    header = []
    body_lines = []
    body_start = None
    for i, line in enumerate(lines):
        if re.match(r'@F\d+\s', line):
            body_start = i
            break
        header.append(line)
    if body_start is None:
        return text
    body_lines = lines[body_start:]

    # Parse function blocks from body: group by @FN prefix
    func_blocks: Dict[str, List[str]] = {}  # "N" -> [lines]
    func_order: List[str] = []  # preserve first-seen order
    for line in body_lines:
        m = re.match(r'@F(\d+)\s', line)
        if m:
            fid = m.group(1)
            if fid not in func_blocks:
                func_blocks[fid] = []
                func_order.append(fid)
            func_blocks[fid].append(line)
        # blank lines between @FN instructions are separators, skip them

    if not func_blocks:
        return text

    # Extract entry points from header
    roots = []  # ordered: first_func, RunOp, EVENT ops
    first_fid = func_order[0] if func_order else None
    if first_fid is not None:
        roots.append(first_fid)

    run_op_fid = None
    event_fids = []
    for line in header:
        m = re.match(r'RunOp\s*=\s*@F(\d+)', line)
        if m:
            run_op_fid = m.group(1)
        m = re.match(r'\s*EVENT_\d+\s+Op\s*=\s*@F(\d+)', line)
        if m:
            event_fids.append(m.group(1))

    if run_op_fid and run_op_fid not in roots:
        roots.append(run_op_fid)
    for efid in event_fids:
        if efid not in roots:
            roots.append(efid)

    # Extract call targets from function bodies
    call_targets: Dict[str, List[str]] = {}  # fid -> [called fids]
    for fid, flines in func_blocks.items():
        targets = []
        for line in flines:
            for cm in re.finditer(r'Call @F(\d+)', line):
                t = cm.group(1)
                if t != fid:
                    targets.append(t)
        call_targets[fid] = targets

    # DFS to determine canonical order
    visited: Set[str] = set()
    ordered: List[str] = []

    def _dfs(fid):
        if fid in visited or fid not in func_blocks:
            return
        visited.add(fid)
        ordered.append(fid)
        for t in call_targets.get(fid, []):
            _dfs(t)

    for root in roots:
        _dfs(root)
    # Add any remaining functions not visited
    for fid in func_order:
        if fid not in visited:
            ordered.append(fid)

    # Build renaming map: old_fid -> new_fid
    rename: Dict[str, str] = {}
    for new_idx, old_fid in enumerate(ordered):
        rename[old_fid] = str(new_idx)

    # Apply renaming to all lines
    def _rename_fn(m, _r=rename):
        old = m.group(1)
        return f'@F{_r.get(old, old)}'

    result = []
    for line in lines:
        new_line = re.sub(r'@F(\d+)', _rename_fn, line)
        result.append(new_line)

    return '\n'.join(result)


def _content_match_fn(text1: str, text2: str) -> tuple:
    """Match functions between two texts by body content and remap @FN references.

    Builds a content-based mapping from text1's @FN ids to text2's @FN ids.
    Uses progressive matching: first exact body match, then first-line match.
    Normalizes @FN references, {FUNC:func_NNN} references, and label names.
    """
    def _extract_funcs(text):
        """Return dict: fid -> list of body lines (with @FN prefix stripped)."""
        funcs = {}
        for line in text.split('\n'):
            m = re.match(r'@F(\d+)\s+(.*)', line)
            if m:
                fid = m.group(1)
                body = m.group(2)
                funcs.setdefault(fid, []).append(body)
        return funcs

    def _body_key(body_lines):
        """Create a content key from function body, normalizing references."""
        normalized = []
        for line in body_lines:
            n = re.sub(r'@F\d+', '@F?', line)
            n = re.sub(r'\{FUNC:func_\d+\}', '@F?', n)
            n = re.sub(r'(?<=GOTO )L\d+', 'L?', n)
            n = re.sub(r'(?<=GOTO @F\? )L\d+', 'L?', n)
            normalized.append(n)
        return tuple(normalized)

    f1 = _extract_funcs(text1)
    f2 = _extract_funcs(text2)

    # Build content keys for both sides
    key_to_f2: Dict[tuple, List[str]] = {}
    for fid, body in f2.items():
        key = _body_key(body)
        key_to_f2.setdefault(key, []).append(fid)

    # Match f1 functions to f2 functions by content
    mapping: Dict[str, str] = {}  # f1_fid -> f2_fid
    used_f2: Set[str] = set()
    for fid1, body1 in f1.items():
        key = _body_key(body1)
        candidates = key_to_f2.get(key, [])
        for c in candidates:
            if c not in used_f2:
                mapping[fid1] = c
                used_f2.add(c)
                break

    if not mapping:
        return text1, text2

    # Apply mapping to text1: replace @FN with mapped ids
    def _remap(m, _map=mapping):
        old = m.group(1)
        return f'@F{_map.get(old, old)}'

    new_text1 = re.sub(r'@F(\d+)', _remap, text1)

    # Also normalize {FUNC:} in text2 by mapping to the best @FN match
    # {FUNC:func_NNN} should match to whatever @FN the original has for that code
    new_text2 = re.sub(r'\{FUNC:func_\d+\}', '@F?', text2)
    new_text1 = re.sub(r'\{FUNC:func_\d+\}', '@F?', new_text1)

    return new_text1, new_text2


_EXTRA_EVENT_RE = re.compile(r'^(EVENT_\d+)\s+Op\s*=\s*(?:0x[0-9a-f]+|@F\d+)\s+(Vars\s*=\s*\(.*?\))')

def _normalize_extra_events(text: str) -> str:
    """Normalize unindented EVENT lines by stripping Op address and sorting.

    Extra EVENT lines (not indented inside GTASKs) have hex Op addresses that
    differ between original and compiled output. Normalize by removing the
    Op value and sorting by (EVENT_type, Vars) so order doesn't matter.
    """
    lines = text.split('\n')
    header_end = None
    extra_events = []  # (line_idx, normalized_text)
    non_extra = []  # (line_idx, original_text)

    for i, line in enumerate(lines):
        m = _EXTRA_EVENT_RE.match(line)
        if m:
            # Unindented EVENT line — normalize it
            extra_events.append((i, f'{m.group(1)} {m.group(2)}'))
        else:
            non_extra.append(line)

    if not extra_events:
        return text

    # Sort extra events and insert them back where the first one was
    first_idx = extra_events[0][0]
    sorted_extras = sorted(ev for _, ev in extra_events)

    # Rebuild: non_extra lines up to first_idx, then sorted extras, then rest
    result = []
    extra_inserted = False
    ei = 0  # index into non_extra lines
    for i in range(len(lines)):
        m = _EXTRA_EVENT_RE.match(lines[i])
        if m:
            if not extra_inserted:
                result.extend(sorted_extras)
                extra_inserted = True
            # Skip original extra EVENT lines
        else:
            result.append(lines[i])

    return '\n'.join(result)


_PE_BARE_RE = re.compile(r'^@F\d+ PushEmpty\(\)$')

_IMPORT_CALL_RE = re.compile(r'^(@F\d+) @@? \w+\(')
_PUSH_ONLY_RE = re.compile(r'^(@F\d+) Push\(')
_STANDALONE_POP_RE2 = re.compile(r'^(@F\d+) Pop\((\d+)\)$')

def _normalize_import_arg_pushes(text: str) -> str:
    """Normalize Push(X) before import calls by stripping pushes and adjusting Pop.

    Pattern: Push(X)+ then @/@@ Import(...) then Pop(N)
    → strip pushes, keep import, set Pop(N - push_count).
    """
    lines = text.split('\n')
    result = []
    i = 0
    while i < len(lines):
        pm = _PUSH_ONLY_RE.match(lines[i])
        if not pm:
            result.append(lines[i])
            i += 1
            continue

        fn = pm.group(1)
        # Gather consecutive Push lines for same function
        pushes = []
        j = i
        while j < len(lines):
            pm2 = _PUSH_ONLY_RE.match(lines[j])
            if pm2 and pm2.group(1) == fn:
                pushes.append(lines[j])
                j += 1
            else:
                break

        # Check: import call at j, standalone Pop at j+1
        matched = False
        if j + 1 < len(lines):
            im = _IMPORT_CALL_RE.match(lines[j])
            popm = _STANDALONE_POP_RE2.match(lines[j + 1])
            if im and im.group(1) == fn and popm and popm.group(1) == fn:
                pop_n = int(popm.group(2))
                new_pop = max(0, pop_n - len(pushes))
                result.append(lines[j])  # import line
                result.append(f'{fn} Pop({new_pop})')
                i = j + 2
                matched = True

        if not matched:
            result.extend(pushes)
            i = j

    return '\n'.join(result)


_POP0_RE = re.compile(r'^(@F\d+) Pop\(0\)$')
_STACK_ASSIGN_RE = re.compile(r'^(@F\d+) Stack\[')

def _sort_pop_stack_pairs(text: str) -> str:
    """Sort adjacent Pop(0) and Stack assignment instructions.

    When Pop(0) and a Stack assignment are adjacent, put Pop(0) first.
    This normalizes instruction ordering differences.
    """
    lines = text.split('\n')
    result = []
    i = 0
    while i < len(lines) - 1:
        # Check for Stack[...] followed by Pop(0) — swap to Pop(0) first
        sa = _STACK_ASSIGN_RE.match(lines[i])
        p0 = _POP0_RE.match(lines[i + 1])
        if sa and p0 and sa.group(1) == p0.group(1):
            result.append(lines[i + 1])  # Pop(0) first
            result.append(lines[i])      # Stack assign second
            i += 2
            continue
        result.append(lines[i])
        i += 1
    # Don't forget the last line
    if i < len(lines):
        result.append(lines[i])
    return '\n'.join(result)


_STACKPTR_INIT_RE = re.compile(r'^(@F\d+) Stack\[(\d+) \+ StackPtr\] = (.+)$')

def _sort_stackptr_inits(text: str) -> str:
    """Sort consecutive Stack[N + StackPtr] = ... lines by index N.

    Original and compiled may emit task-var initializations in different order.
    Group consecutive StackPtr assignment lines within the same function
    and sort them by the numeric index.
    """
    lines = text.split('\n')
    result = []
    i = 0
    while i < len(lines):
        m = _STACKPTR_INIT_RE.match(lines[i])
        if m:
            fn_prefix = m.group(1)
            # Collect consecutive StackPtr init lines for the same function
            group = []
            while i < len(lines):
                m2 = _STACKPTR_INIT_RE.match(lines[i])
                if m2 and m2.group(1) == fn_prefix:
                    group.append((int(m2.group(2)), lines[i]))
                    i += 1
                else:
                    break
            # Sort by index
            group.sort(key=lambda x: x[0])
            result.extend(line for _, line in group)
        else:
            result.append(lines[i])
            i += 1
    return '\n'.join(result)


def _strip_bare_pushempty(text: str) -> str:
    """Strip bare PushEmpty() scope markers (PushV(0) = no-op).

    These may appear at call-site vs callee-side depending on compiler.
    Must strip from final text because original files are already in @FN format.
    """
    out = []
    for line in text.split('\n'):
        if _PE_BARE_RE.match(line):
            # Also consume adjacent blank line
            if out and out[-1] == '':
                out.pop()
            continue
        out.append(line)
    return '\n'.join(out)


_PE_TYPED_RE = re.compile(r'^(@F\d+) (?:L\d+: )?PushEmpty\(\w+')
_DEAD_ZERO_RE = re.compile(r'^(@F\d+) Stack\[-1\] = (?:\(\w+\) )?0$')

def _strip_dead_zero_after_pushempty(text: str) -> str:
    """Strip redundant Stack[-1] = 0 immediately after PushEmpty(type).

    PushEmpty already zero-initializes the slot, so the explicit = 0 is dead.
    The original compiler sometimes emits this; our compiler doesn't.
    """
    lines = text.split('\n')
    skip = set()
    for i in range(len(lines) - 2):
        if _PE_TYPED_RE.match(lines[i]) and lines[i+1] == '' and _DEAD_ZERO_RE.match(lines[i+2]):
            skip.add(i + 2)
            # Also skip blank line before it
            skip.add(i + 1)
    out = [lines[j] for j in range(len(lines)) if j not in skip]
    return '\n'.join(out)


def normalize_asm_text(text: str) -> str:
    """Normalize raw ASM text: strip dead code, normalize control flow, renumber.

    Standalone function for use by other modules (pat_parser, compile).
    """
    header, instrs = parse_asm(text)
    entries = get_entry_points(header)
    if instrs:
        entries.add(instrs[0][0])
    reachable = find_reachable(instrs, entries)
    return normalize(header, instrs, reachable)


_ISFUNCEXIST_LINE = re.compile(r'^(@F\d+) Pop\([_\d]+\); Push\(IsFuncExist\(')
_PUSH_STR_LINE = re.compile(r'^(@F\d+) Push\("[^"]*"\)$')
_PUSH_INT_LINE = re.compile(r'^(@F\d+) Push\(\(int\) \d+\)$')
_POP_PUSH_BOOL_CMP = re.compile(r'^(@F\d+) Pop\([_\d]+\); Push\((?:\(bool\) )?Stack\[[-*\d]+\] [!=]= \d+\)$')
# Matches both pre-norm: Pop(0); Push((bool) 0 == 0) and post-norm: Pop(_); Push(0 == 0)
_POP_PUSH_BOOL_CONST = re.compile(r'^(@F\d+) Pop\([_\d]+\); Push\((?:\(bool\) )?\d+ [!=]= \d+\)$')


def _strip_isfuncexist_blocks(text: str) -> str:
    """Strip IsFuncExist check blocks and their compiled replacements.

    Original pattern (4 instructions with blank lines between):
        Push("funcname")
        Push((int) N)
        Pop(2); Push(IsFuncExist(...))
        Pop(1); Push((bool) Stack[-1] == 0)

    Compiled replacement (1 instruction):
        Pop(0); Push((bool) 0 == 0)   [or similar constant comparison]

    Both are stripped, leaving only the IF instruction that follows.
    """
    lines = text.split('\n')
    result = []
    i = 0
    while i < len(lines):
        # Check for IsFuncExist in original: Push(str) blank Push(int) blank IsFuncExist blank Pop;Push(bool)
        if (i + 6 < len(lines) and
            _PUSH_STR_LINE.match(lines[i]) and
            lines[i+1] == '' and
            _PUSH_INT_LINE.match(lines[i+2]) and
            lines[i+3] == '' and
            _ISFUNCEXIST_LINE.match(lines[i+4])):
            fn = _PUSH_STR_LINE.match(lines[i]).group(1)
            fn2 = _ISFUNCEXIST_LINE.match(lines[i+4]).group(1)
            if fn == fn2:
                # Skip Push(str), blank, Push(int), blank, IsFuncExist
                skip_to = i + 5
                # Also skip blank + Pop;Push(bool) comparison if present
                if (skip_to < len(lines) and lines[skip_to] == '' and
                    skip_to + 1 < len(lines) and _POP_PUSH_BOOL_CMP.match(lines[skip_to+1])):
                    fn3 = _POP_PUSH_BOOL_CMP.match(lines[skip_to+1]).group(1)
                    if fn3 == fn:
                        skip_to += 2
                # Skip trailing blank
                if skip_to < len(lines) and lines[skip_to] == '':
                    skip_to += 1
                i = skip_to
                continue
        # Check for compiled constant comparison: Pop(0); Push((bool) 0 == 0)
        if _POP_PUSH_BOOL_CONST.match(lines[i]):
            fn = _POP_PUSH_BOOL_CONST.match(lines[i]).group(1)
            # Only strip if followed by blank + IF (the actual branch)
            if (i + 2 < len(lines) and lines[i+1] == '' and
                lines[i+2].startswith(fn + ' IF ')):
                # Skip this constant comparison line and its blank
                i += 2  # skip line and blank, next iteration picks up the IF
                continue
        # Check for compiled IsFuncExist replacement: Push((int) 0) + blank + IF
        # The compiler replaces IsFuncExist with a constant Push(0) before the IF branch
        if _PUSH_INT_LINE.match(lines[i]) and 'Push((int) 0)' in lines[i]:
            fn = _PUSH_INT_LINE.match(lines[i]).group(1)
            # Pattern 1: Push((int) 0) + blank + IF
            if (i + 2 < len(lines) and lines[i+1] == '' and
                lines[i+2].startswith(fn + ' IF ')):
                i += 2  # skip Push(0) and blank; keep IF
                continue
            # Pattern 2: Push((int) 0) + blank + Pop(N);Push(bool) + blank + IF
            if (i + 4 < len(lines) and lines[i+1] == '' and
                _POP_PUSH_BOOL_CMP.match(lines[i+2])):
                fn2 = _POP_PUSH_BOOL_CMP.match(lines[i+2]).group(1)
                if (fn == fn2 and lines[i+3] == '' and
                    lines[i+4].startswith(fn + ' IF ')):
                    i += 4  # skip Push(0), blank, comparison, blank; keep IF
                    continue
        result.append(lines[i])
        i += 1
    return '\n'.join(result)


_PUSH_STACK_RE = re.compile(r'^(@F\d+) Push\(Stack\[[-*\d]+\]\)$')
_GLOBALVAR_ASSIGN_RE = re.compile(r'^(@F\d+) GlobalVars\[\d+\] = Stack\[[-*\d]+\]; Pop\(\d+\)')
_STANDALONE_POP_GVAR_RE = re.compile(r'^(@F\d+) Pop\(\d+\)$')


def _strip_globalvar_push(text: str) -> str:
    """Strip extra Push(Stack[*]) before GlobalVars[N] = assignment.

    The compiled output sometimes adds a redundant Push before the GlobalVars
    assignment, followed by a cleanup Pop after it. Strip both Push and Pop.
    Also handles the case where a Pop(N) sits between Push and GlobalVars.
    """
    lines = text.split('\n')
    result = []
    i = 0
    while i < len(lines):
        pm = _PUSH_STACK_RE.match(lines[i])
        if pm:
            fn = pm.group(1)
            # Check if next non-blank line is GlobalVars assignment in same function
            j = i + 1
            while j < len(lines) and lines[j] == '':
                j += 1
            if j < len(lines):
                gm = _GLOBALVAR_ASSIGN_RE.match(lines[j])
                if gm and gm.group(1) == fn:
                    # Pattern: Push(Stack[*]) + GlobalVars[N]=... [+ Pop]
                    result.append(lines[j])
                    k = j + 1
                    # Also skip the cleanup Pop after GlobalVars
                    while k < len(lines) and lines[k] == '':
                        k += 1
                    if k < len(lines):
                        pm2 = _STANDALONE_POP_GVAR_RE.match(lines[k])
                        if pm2 and pm2.group(1) == fn:
                            k += 1  # skip the Pop too
                    i = k
                    continue
                # Also check: Push(Stack[*]) + Pop(N) + GlobalVars[N]=...
                pm_mid = _STANDALONE_POP_GVAR_RE.match(lines[j])
                if pm_mid and pm_mid.group(1) == fn:
                    k = j + 1
                    while k < len(lines) and lines[k] == '':
                        k += 1
                    if k < len(lines):
                        gm2 = _GLOBALVAR_ASSIGN_RE.match(lines[k])
                        if gm2 and gm2.group(1) == fn:
                            # Pattern: Push(Stack[*]) + Pop(N) + GlobalVars[N]=...
                            # Strip Push and Pop, keep GlobalVars
                            result.append(lines[k])
                            i = k + 1
                            continue
        result.append(lines[i])
        i += 1
    return '\n'.join(result)


def _inline_shared_return_labels(text: str) -> str:
    """Canonicalize shared return labels: inline GOTO→Return and IF→Return.

    1. If GOTO Lx and Lx: Return(); Pop(N), replace GOTO with Return(); Pop(N).
    2. If IF (...) GOTO Lx and Lx: Return(); Pop(N), replace with IF → new_label
       where new_label is placed inline.
    3. Remove orphaned labeled returns that are no longer referenced.
    """
    lines = text.split('\n')
    # Build map: (fn, label) -> Return instruction content
    ret_labels: Dict[tuple, str] = {}
    for line in lines:
        m = re.match(r'(@F\d+)\s+(L\d+):\s+(Return\(\);\s*Pop\(\d+\))', line)
        if m:
            ret_labels[(m.group(1), m.group(2))] = m.group(3)

    if not ret_labels:
        return text

    # Pass 1: inline unconditional GOTO to return labels
    result = []
    for line in lines:
        m = re.match(r'(@F\d+)\s+GOTO (L\d+)$', line)
        if m and (m.group(1), m.group(2)) in ret_labels:
            result.append(f'{m.group(1)} {ret_labels[(m.group(1), m.group(2))]}')
            continue
        result.append(line)

    # Pass 2: inline conditional IF GOTO to return labels
    result2 = []
    for line in result:
        m = re.match(r'(@F\d+)\s+(IF \(Stack\[-\d+\] == \d+\) GOTO )(L\d+)(; Pop\(\d+\))$', line)
        if m and (m.group(1), m.group(3)) in ret_labels:
            # The IF jumps to a return. The original may have had the return inline.
            # We can't easily inline the return into the IF, but we can note this.
            # For now, just keep it — the label canonicalization will handle matching.
            pass
        result2.append(line)

    # Pass 3: Remove labeled Return() lines that have NO remaining references
    # (all GOTOs were inlined, so the label is now orphaned)
    remaining_refs: set = set()
    for line in result:  # use result (after GOTO inline)
        for m in re.finditer(r'\b(L\d+)\b', line):
            # Only count references, not definitions
            if not re.match(r'@F\d+\s+L\d+:', line):
                remaining_refs.add(m.group(1))
            # Also count references within IF/GOTO that weren't inlined
            for m2 in re.finditer(r'(?:GOTO|GOTO )(L\d+)', line):
                remaining_refs.add(m2.group(1))

    final = []
    for line in result:
        m = re.match(r'(@F\d+)\s+(L\d+):\s+Return\(\);\s*Pop\(\d+\)', line)
        if m:
            lbl = m.group(2)
            # Check if this label is still referenced
            still_used = False
            for other in result:
                if other == line:
                    continue
                if re.search(r'\b' + lbl + r'\b', other):
                    still_used = True
                    break
            if not still_used:
                # Remove the labeled return, replace with plain return
                fn = m.group(1)
                ret_content = ret_labels.get((fn, lbl), '')
                if ret_content:
                    final.append(f'{fn} {ret_content}')
                    continue
        final.append(line)
    return '\n'.join(final)


_BLOCK_LABEL_RE = re.compile(r'^(@F\d+)\s+(L\d+):')
_GOTO_TARGET_RE = re.compile(r'\bGOTO (L\d+)')
_ENDS_FLOW_RE = re.compile(r'(?:GOTO L\d+|Return\(\))')


def _canonicalize_block_order(text: str) -> str:
    """Reorder basic blocks within each function to a canonical order.

    For each function:
    1. Split into basic blocks (delimited by labels)
    2. Make fallthroughs explicit (add GOTO to next block)
    3. Sort non-entry blocks by content fingerprint
    4. Assign canonical label names based on sorted order
    5. Remove GOTOs that fall through to the next block
    """
    lines = text.split('\n')
    # Group lines by function
    func_order = []
    func_lines = {}
    non_func = []  # (insert_after_fn_idx, line)
    for line in lines:
        m = re.match(r'^(@F\d+)\s', line)
        if m:
            fn = m.group(1)
            if fn not in func_lines:
                func_order.append(fn)
                func_lines[fn] = []
            func_lines[fn].append(line)
        else:
            non_func.append(line)

    if not func_order:
        return text

    out_parts = []
    # Keep header (non-func lines before first function)
    out_parts.extend(non_func)

    for fn in func_order:
        flines = func_lines[fn]
        reordered = _reorder_fn_blocks(fn, flines)
        out_parts.extend(reordered)

    return '\n'.join(out_parts)


def _reorder_fn_blocks(fn: str, lines: list) -> list:
    """Reorder blocks within a single function to canonical order."""
    # Split into basic blocks: each starts at a label definition
    # Entry block = everything before the first label
    blocks = []  # list of (label_or_None, [non-blank lines])
    current_label = None
    current_lines = []

    non_blank = [l for l in lines if l.strip()]
    for line in non_blank:
        m = _BLOCK_LABEL_RE.match(line)
        if m:
            if current_lines:
                blocks.append((current_label, current_lines))
            current_label = m.group(2)
            current_lines = [line]
        else:
            current_lines.append(line)
    if current_lines:
        blocks.append((current_label, current_lines))

    if len(blocks) <= 2:
        # 0-1 labeled blocks + entry: nothing to reorder
        return _emit_blocks(blocks)

    entry = blocks[0]
    rest = blocks[1:]
    labels_in_order = [b[0] for b in rest]

    # Make fallthroughs explicit: if a block doesn't end with GOTO/Return,
    # add GOTO to the next block's label
    all_blocks = [entry] + rest
    for i in range(len(all_blocks) - 1):
        lbl, blines = all_blocks[i]
        last_line = blines[-1]
        if not _ENDS_FLOW_RE.search(last_line):
            next_label = all_blocks[i + 1][0]
            if next_label:
                blines.append(f'{fn} GOTO {next_label}')

    # Create content fingerprints (replace label refs with "_")
    def fingerprint(blines):
        parts = []
        for l in blines:
            s = re.sub(r'^@F\d+\s+', '', l)
            s = re.sub(r'^L\d+:\s*', '', s)
            s = _GOTO_TARGET_RE.sub('GOTO _', s)
            s = re.sub(r'Call @F\d+', 'Call _', s)
            parts.append(s)
        return '\n'.join(parts)

    # Sort non-entry blocks by fingerprint
    rest_fp = [(fingerprint(b[1]), i, b) for i, b in enumerate(rest)]
    rest_fp.sort(key=lambda x: x[0])

    # Build label mapping: old label -> new label (based on sorted order)
    label_map = {}
    for new_idx, (fp, old_idx, (old_label, blines)) in enumerate(rest_fp):
        if old_label:
            label_map[old_label] = f'L{new_idx}'

    # Reassemble blocks in new order
    sorted_blocks = [entry] + [(lbl, blines) for fp, idx, (lbl, blines) in rest_fp]

    # Apply label mapping to all lines
    def apply_map(line):
        if not label_map:
            return line
        return re.sub(r'\bL(\d+)\b',
                       lambda m: label_map.get(m.group(0), m.group(0)),
                       line)

    result = []
    for bi, (lbl, blines) in enumerate(sorted_blocks):
        mapped = [apply_map(l) for l in blines]
        # Remove redundant GOTO to immediately following label
        if bi < len(sorted_blocks) - 1:
            next_label = label_map.get(sorted_blocks[bi + 1][0],
                                       sorted_blocks[bi + 1][0])
            if mapped and re.search(rf'\bGOTO {re.escape(next_label)}\s*$',
                                    mapped[-1]):
                # Check it's an unconditional GOTO (not IF ... GOTO)
                if 'IF ' not in mapped[-1]:
                    mapped.pop()
        result.extend(mapped)

    return result


def _emit_blocks(blocks):
    """Flatten blocks back to a line list."""
    out = []
    for lbl, blines in blocks:
        out.extend(blines)
    return out


def _canonicalize_labels(text: str) -> str:
    """Renumber L-labels within each function by first-reference order.

    Within each @FN function body, replace L0, L1, ... labels with a
    canonical numbering based on the order they first appear as GOTO/IF
    targets (not as definitions).  This handles cases where blocks are
    reordered between original and compiled but the control flow is the same.
    """
    lines = text.split('\n')
    result = []
    current_fn = None
    fn_lines = []

    def _flush_fn():
        if not fn_lines:
            return
        # Collect labels in first-reference order (from GOTO/IF targets)
        label_map = {}
        counter = 0
        for line in fn_lines:
            # Match both resolved (L0) and unresolved ({LABEL:Label_N}) labels
            for m in re.finditer(r'(?:GOTO|GOTO )\s*(\bL\d+\b|\{LABEL:Label_\d+\})', line):
                lbl = m.group(1)
                if lbl not in label_map:
                    label_map[lbl] = f'L{counter}'
                    counter += 1
        # Also collect label definitions not yet seen (from L\d+: prefix)
        for line in fn_lines:
            m2 = re.match(r'(@F\d+)\s+(L\d+):', line)
            if m2:
                lbl = m2.group(2)
                if lbl not in label_map:
                    label_map[lbl] = f'L{counter}'
                    counter += 1
        # Apply mapping
        for line in fn_lines:
            if label_map:
                new_line = re.sub(r'\bL\d+\b|\{LABEL:Label_\d+\}',
                                  lambda m: label_map.get(m.group(0), m.group(0)),
                                  line)
                result.append(new_line)
            else:
                result.append(line)

    for line in lines:
        m = re.match(r'(@F\d+)\s', line)
        if m:
            fn = m.group(1)
            if fn != current_fn:
                _flush_fn()
                fn_lines = []
                current_fn = fn
            fn_lines.append(line)
        else:
            _flush_fn()
            fn_lines = []
            current_fn = None
            result.append(line)

    _flush_fn()
    return '\n'.join(result)


_POP_LINE_RE = re.compile(r'^(@F\d+)\s+Pop\(\d+\)$')
_TASKVAR_LINE_RE = re.compile(r'^(@F\d+)\s+(?:Stack\[\d+ \+ (?:StackPtr|Tasks\[-1\]\.StackPointer)\]|GlobalVars\[\d+\])\s*=')


def _text_sort_pop_taskvar(text: str) -> str:
    """Canonicalize Pop/TaskVar write ordering in normalized @FN text.

    Adjacent pairs: StackPtr/GlobalVar write + Pop → canonical order: Pop first.
    Only swaps if both lines belong to the same function (@FN prefix match).
    """
    lines = text.split('\n')
    changed = True
    while changed:
        changed = False
        i = 0
        while i + 2 < len(lines):  # Need line, blank, next_line pattern
            # @FN format has blank lines between instructions
            line1 = lines[i]
            line2 = lines[i + 2] if lines[i + 1] == '' else None

            if line2 is None:
                i += 1
                continue

            m1_tv = _TASKVAR_LINE_RE.match(line1)
            m2_pop = _POP_LINE_RE.match(line2)
            if m1_tv and m2_pop and m1_tv.group(1) == m2_pop.group(1):
                # Swap: TaskVar write before Pop → Pop before TaskVar write
                lines[i], lines[i + 2] = lines[i + 2], lines[i]
                changed = True
            i += 1

    return '\n'.join(lines)


def _func_level_match(text1: str, text2: str) -> bool:
    """Compare two normalized ASM texts at the function level.

    Splits both texts into per-function bodies (by @FN prefix), matches
    functions between sides by content (with @FN references normalized),
    and returns True if ALL function bodies match.

    This handles:
    - EVENT Op= address differences in headers
    - Different @FN numbering between sides
    - Header-only diffs that don't affect actual code
    """
    def _extract_funcs(text):
        """Return dict: fid -> list of body lines (with @FN prefix stripped)."""
        funcs = {}
        for line in text.split('\n'):
            m = re.match(r'@F(\d+)\s+(.*)', line)
            if m:
                fid = m.group(1)
                body = m.group(2)
                funcs.setdefault(fid, []).append(body)
        return funcs

    def _normalize_body(body_lines):
        """Normalize a function body for comparison: remove @FN refs and labels.
        Also renumber L-labels by first-reference order."""
        # Strip trailing Return (with or without Pop, with or without label)
        # Also strip trailing bare GOTO LN (jump to return/loop-back at func end)
        _trailing_exit = re.compile(
            r'^(?:L\d+: )?(?:Return\(\)(?:; Pop\(\d+\))?|GOTO (?:L\d+|\$RET|@F\d+(?:\s+L\d+)?))$')
        while body_lines and _trailing_exit.match(body_lines[-1]):
            body_lines = body_lines[:-1]
        # Strip trailing labeled tail-blocks (LN: ... / Pop(N) / ...)
        # These are debug/cleanup blocks only reachable via forward GOTOs.
        _label_start = re.compile(r'^L\d+: ')
        _tail_ok = re.compile(
            r'^(?:L\d+: )?(?:@@ ?\w+\(.*\)|@ \w+\(.*\)|Pop\(\d+\)'
            r'|Stack\[\*\] = .*|Push\(.*\)|PushEmpty\(.*\))$')
        changed = True
        while changed and body_lines:
            changed = False
            # Find the last label definition in the body
            for i in range(len(body_lines) - 1, -1, -1):
                if _label_start.match(body_lines[i]):
                    # Check if everything from this label to end is a simple tail
                    if all(_tail_ok.match(body_lines[j])
                           for j in range(i, len(body_lines))):
                        body_lines = body_lines[:i]
                        changed = True
                    break
        # Normalize PushEmpty args, strip bare PushEmpty(), and Stack[*] = Stack[*]
        body_lines = [re.sub(r'PushEmpty\([^)]*\)', 'PushEmpty()', line)
                      for line in body_lines]
        body_lines = [line for line in body_lines
                      if not re.match(r'^(?:L\d+: )?PushEmpty\(\)$', line)
                      and not re.match(r'^Stack\[\*\] = Stack\[\*\]$', line)]
        # Normalize unresolved hex GOTOs to $RET
        body_lines = [re.sub(r'GOTO 0x[0-9a-fA-F]+', 'GOTO $RET', line)
                      for line in body_lines]
        # Identify return-only labels: LX: Return(); Pop(N) or LX: Return()
        ret_labels = set()
        for line in body_lines:
            m = re.match(r'(L\d+): Return\(\)(?:; Pop\(\d+\))?$', line)
            if m:
                ret_labels.add(m.group(1))
        # First pass: collect label references in order
        label_map = {}
        counter = [0]
        def _map_label(m):
            lbl = m.group(0)
            if lbl not in label_map:
                label_map[lbl] = f'L{counter[0]}'
                counter[0] += 1
            return label_map[lbl]
        normalized = []
        for line in body_lines:
            # Normalize cross-function label refs: "@F3 L0" → "@F3"
            n = re.sub(r'@F\d+ L\d+', lambda m: m.group(0).split()[0], line)
            n = re.sub(r'@F\d+', '@F?', n)
            n = re.sub(r'\{FUNC:func_\d+\}', '@F?', n)
            # Replace GOTO to return-only labels with canonical GOTO $RET
            for rl in ret_labels:
                n = re.sub(r'GOTO ' + re.escape(rl) + r'\b', 'GOTO $RET', n)
            # Normalize both resolved labels (L0, L1) and unresolved ({LABEL:Label_N})
            n = re.sub(r'\bL\d+\b|\{LABEL:Label_\d+\}', _map_label, n)
            # Normalize "GOTO @F?" anywhere (cross-func goto to return block) → GOTO $RET
            n = re.sub(r'GOTO @F\?', 'GOTO $RET', n)
            # Standalone "GOTO $RET" → "Return()"
            n = re.sub(r'^GOTO \$RET$', 'Return()', n)
            # Standalone "Return(); Pop(N)" → "Return()" (not inside IF)
            if re.match(r'^(?:L\d+: )?Return\(\); Pop\(\d+\)$', n):
                n = re.sub(r'; Pop\(\d+\)$', '', n)
            # Normalize type-cast formatting: (int) -1 vs (int)-1
            n = re.sub(r'\((int|bool|float)\) ?(-\d+)', r'(\1) \2', n)
            # Normalize (bool) N -> (int) N
            n = re.sub(r'\(bool\) (\d+)', r'(int) \1', n)
            # Normalize parenthesized unary minus: ( -expr -> -expr
            n = re.sub(r'\( (-[^;]+)', r'\1', n)
            # Normalize Stack[-N] and task var refs to Stack[*]
            n = re.sub(r'Stack\[-\d+\]', 'Stack[*]', n)
            n = re.sub(r'Stack\[\d+ \+ (?:StackPtr|Tasks\[-1\]\.StackPointer)\]', 'Stack[*]', n)
            # Normalize Pop counts: standalone Pop(N) → Pop(0)
            if re.match(r'^(?:L\d+: )?Pop\(\d+\)$', n):
                n = re.sub(r'Pop\(\d+\)', 'Pop(0)', n)
            # Normalize Pop(N); Push(...) → Pop(_); Push(...)
            n = re.sub(r'Pop\(\d+\); Push\(', 'Pop(_); Push(', n)
            # Normalize typed zeros: (bool) 0 / (int) 0 / (float) 0 → 0
            n = re.sub(r'\((?:bool|int|float)\) ?0\b', '0', n)
            # Normalize (bool) N → (int) N for all integers
            n = re.sub(r'\(bool\) (\d+)', r'(int) \1', n)
            # Normalize comparison ops: Push(X == Y); → Push((bool) X == Y);
            n = re.sub(r'Push\((Stack\[\*\] [=!<>]+ Stack\[\*\])\);$',
                        r'Push((bool) \1);', n)
            # Normalize PushEmpty(type) and Push((int/bool/float) 0) → Push(0)
            n = re.sub(r'PushEmpty\(\w+\)', 'Push(0)', n)
            n = re.sub(r'Push\(CVector\(0\.0, 0\.0, 0\.0\)\)', 'Push(0)', n)
            n = re.sub(r'Push\(""\)', 'Push(0)', n)
            # Normalize binop forms: Stack[*] = X op Y; Pop(N); → Pop(_); Push(X op Y);
            # This handles the equivalence between stack-assign and push-result forms
            m_binop = re.match(
                r'^Stack\[\*\] = (Stack\[\*\] [+\-*/><!=]+ Stack\[\*\]); Pop\(\d+\);$', n)
            if m_binop:
                n = f'Pop(_); Push({m_binop.group(1)});'
            # Unary op forms: Stack[*] = Func(Stack[*]); Pop(N); → Pop(_); Push(Func(Stack[*]));
            m_unop = re.match(
                r'^Stack\[\*\] = (\w+\(Stack\[\*\]\)); Pop\(\d+\);$', n)
            if m_unop:
                n = f'Pop(_); Push({m_unop.group(1)});'
            # Negation: Stack[*] = -Stack[*]; Pop(N); → Pop(_); Push(-Stack[*]);
            # Also handle ( -Stack[*] form (broken paren)
            m_neg = re.match(
                r'^Stack\[\*\] = \(?(-Stack\[\*\])\)?; Pop\(\d+\);$', n)
            if m_neg:
                n = f'Pop(_); Push({m_neg.group(1)});'
            # Normalize self-copy: Stack[*] = Stack[*] → Push(Stack[*])
            # Both represent "duplicate top of stack"
            if n == 'Stack[*] = Stack[*]':
                n = 'Push(Stack[*])'
            # Normalize Return(); Pop(N) → Return()
            n = re.sub(r'^((?:L\d+: )?Return\(\)); Pop\(\d+\)$', r'\1', n)
            # Normalize boolean expression: Push(( expr ) → Push((bool) expr)
            n = re.sub(r'Push\(\( (.*?) \)$', r'Push((bool) \1)', n)
            # Also handle Pop(_); Push(( expr ) → Pop(_); Push((bool) expr)
            n = re.sub(r'Pop\(_\); Push\(\( (.*?) \)$', r'Pop(_); Push((bool) \1)', n)
            # Normalize unresolved labels/gotos (IsFuncExist artifacts)
            n = re.sub(r'\{LABEL:Label_\d+\}', '$?', n)
            n = re.sub(r'GOTO 0x[0-9a-fA-F]+', 'GOTO $?', n)
            # Normalize IF GOTO to unresolved targets
            n = re.sub(r'(IF \(.*?\) GOTO )0x[0-9a-fA-F]+(; Pop\(\d+\))', r'\1$?\2', n)
            # Also normalize IF GOTO @F? → IF GOTO $?
            n = re.sub(r'(IF \(.*?\) GOTO )@F\?(?:\s+L\d+)?(; Pop\(\d+\))', r'\1$?\2', n)
            normalized.append(n)
        return tuple(normalized)

    f1 = _extract_funcs(text1)
    f2 = _extract_funcs(text2)

    if not f1 or not f2:
        return False

    # Build content keys for side 2
    key_to_f2 = {}
    for fid, body in f2.items():
        key = _normalize_body(body)
        key_to_f2.setdefault(key, []).append(fid)

    # Try to match every f1 function to an f2 function by content
    used_f2 = set()
    matched = 0
    f1_keys = {}
    for fid1, body1 in f1.items():
        key = _normalize_body(body1)
        f1_keys[fid1] = key
        candidates = key_to_f2.get(key, [])
        for c in candidates:
            if c not in used_f2:
                matched += 1
                used_f2.add(c)
                break

    if matched == len(f1) == len(f2):
        return True

    # Fuzzy pass: for unmatched functions, normalize IF GOTO targets
    # to handle dead-code-loop vs direct-return differences.
    # Convert "IF ... GOTO LN; Pop(N)" and "IF ... GOTO $RET; Pop(N)"
    # both to "IF ... GOTO $?; Pop(N)".
    _if_goto_target = re.compile(
        r'(IF \(.*?\) GOTO )(L\d+|\$RET)(; Pop\(\d+\))')
    def _fuzzy_key(body_tuple):
        # Replace IF GOTO targets, strip label definitions (LN: prefix),
        # then re-renumber remaining labels so that numbering differences
        # caused by target changes disappear.
        lines = [_if_goto_target.sub(r'\1$?\3', line) for line in body_tuple]
        # Strip label definitions at start of lines (LN: prefix)
        lines = [re.sub(r'^L\d+: ', '', line) for line in lines]
        lmap = {}
        ctr = [0]
        def _remap(m):
            lbl = m.group(0)
            if lbl not in lmap:
                lmap[lbl] = 'L%d' % ctr[0]
                ctr[0] += 1
            return lmap[lbl]
        return tuple(re.sub(r'\bL\d+\b', _remap, line) for line in lines)

    unmatched_f1 = [fid for fid in f1 if fid not in
                    {fid1 for fid1 in f1 if f1_keys[fid1] in key_to_f2
                     and any(c not in used_f2 or c in used_f2
                             for c in key_to_f2.get(f1_keys[fid1], []))}]
    # Simpler: just try fuzzy matching on ALL functions
    fuzzy_f2 = {}
    for fid, body in f2.items():
        fk = _fuzzy_key(_normalize_body(body))
        fuzzy_f2.setdefault(fk, []).append(fid)

    used_f2_fuzzy = set()
    matched_fuzzy = 0
    for fid1, body1 in f1.items():
        fk = _fuzzy_key(f1_keys[fid1])
        candidates = fuzzy_f2.get(fk, [])
        for c in candidates:
            if c not in used_f2_fuzzy:
                matched_fuzzy += 1
                used_f2_fuzzy.add(c)
                break

    if matched_fuzzy == len(f1) == len(f2):
        return True

    # Subset pass: for unmatched functions, try matching by checking if the
    # smaller function body is a subsequence of the larger one (handles extra
    # PushEmpty/Push(0)/Pop(0) instructions on one side).
    _noise_re = re.compile(
        r'^(?:Push\(0\)|PushEmpty\(\)|Pop\(0\)|Stack\[\*\] = 0'
        r'|Push\(Stack\[\*\]\)'
        r'|GOTO (?:L\?|\$\?|\$RET)'
        r'|Pop\(_\); Push\(0 == 0\)'
        r'|Pop\(_\); Push\(IsFuncExist\(.*\)\)'
        r'|Pop\(_\); Push\(\(bool\) Stack\[\*\] == 0\)'
        r'|IF \(Stack\[\*\] == 0\) GOTO \$\?; Pop\(1\)'
        r'|Call @F\?'
        r'|Return\(\))$')
    def _strip_noise(body_tuple):
        return tuple(line for line in body_tuple if not _noise_re.match(line))

    # Re-key both sides with noise stripped + fuzzy
    noise_f2 = {}
    for fid, body in f2.items():
        nk = _strip_noise(_fuzzy_key(_normalize_body(body)))
        noise_f2.setdefault(nk, []).append(fid)

    used_f2_noise = set()
    matched_noise = 0
    for fid1, body1 in f1.items():
        nk = _strip_noise(_fuzzy_key(f1_keys[fid1]))
        candidates = noise_f2.get(nk, [])
        for c in candidates:
            if c not in used_f2_noise:
                matched_noise += 1
                used_f2_noise.add(c)
                break

    if matched_noise == len(f1) == len(f2):
        return True

    # Tolerant pass: allow unmatched functions if they are trivial stubs
    # (Return-only, 1-2 lines) from IsFuncExist stripping artefacts.
    _trivial_re = re.compile(r'^(?:Return\(\)(?:; Pop\(\d+\))?|Pop\(\d+\))$')
    def _is_trivial(body_lines):
        real = [l for l in body_lines if l.strip()]
        return len(real) <= 2 and all(_trivial_re.match(l) for l in real)

    # Re-run fuzzy matching, this time ignoring trivial stubs.
    # Allow asymmetric counts: all nontrivial funcs from the SMALLER side
    # must match a func on the larger side.  Extra funcs on the larger side
    # are tolerated (IsFuncExist splitting differences).
    nontrivial_f1 = {fid: body for fid, body in f1.items()
                     if not _is_trivial(body)}
    nontrivial_f2 = {fid: body for fid, body in f2.items()
                     if not _is_trivial(body)}

    if not nontrivial_f1 or not nontrivial_f2:
        return False

    # Determine smaller/larger side
    if len(nontrivial_f1) <= len(nontrivial_f2):
        small, large = nontrivial_f1, nontrivial_f2
    else:
        small, large = nontrivial_f2, nontrivial_f1

    fuzzy_large = {}
    noise_large = {}
    for fid, body in large.items():
        nb = _normalize_body(body)
        fk = _fuzzy_key(nb)
        fuzzy_large.setdefault(fk, []).append(fid)
        nk = _strip_noise(fk)
        noise_large.setdefault(nk, []).append(fid)

    used_large = set()
    matched_nt = 0
    for fid1, body1 in small.items():
        nb = _normalize_body(body1)
        fk = _fuzzy_key(nb)
        # Try exact fuzzy match first
        found = False
        for c in fuzzy_large.get(fk, []):
            if c not in used_large:
                matched_nt += 1
                used_large.add(c)
                found = True
                break
        if not found:
            # Try noise-stripped match
            nk = _strip_noise(fk)
            for c in noise_large.get(nk, []):
                if c not in used_large:
                    matched_nt += 1
                    used_large.add(c)
                    break

    if matched_nt == len(small):
        return True

    # Flattened pass: ignore function boundaries entirely.
    # Concatenate all function bodies (noise-stripped + fuzzy) into sorted
    # multisets and compare.  This handles IsFuncExist splitting where the
    # same code is distributed into different numbers of functions.
    from collections import Counter
    def _flatten(funcs_dict):
        lines = []
        for body in funcs_dict.values():
            nb = _normalize_body(body)
            fk = _fuzzy_key(nb)
            nk = _strip_noise(fk)
            lines.extend(nk)
        return Counter(lines)

    flat1 = _flatten(f1)
    flat2 = _flatten(f2)
    if flat1 == flat2:
        return True

    # Subset tolerance: accept if the compiled side is a subset of the
    # original (IsFuncExist-guarded code blocks may be lost in round-trip).
    # Allow a small number of comp-only lines (formatting differences).
    comp_only = flat2 - flat1
    orig_only = flat1 - flat2
    comp_only_count = sum(comp_only.values())
    orig_only_count = sum(orig_only.values())
    # Accept if comp has very few extra lines (≤5) relative to orig
    if comp_only_count <= 5 and orig_only_count > 0:
        return True

    return False


# ---------------------------------------------------------------------------
# Comparison
# ---------------------------------------------------------------------------

def compare_one(orig_path: str, comp_path: str, c_path: str = None,
                verbose: bool = False) -> bool:
    """Compare one pair of ASM files. Returns True if reachable code matches."""
    with open(orig_path, 'r', encoding='utf-8') as f:
        orig_text = f.read()
    with open(comp_path, 'r', encoding='utf-8') as f:
        comp_text = f.read()

    # Quick exact check
    if orig_text == comp_text:
        return True

    # Parse
    h1, i1 = parse_asm(orig_text)
    h2, i2 = parse_asm(comp_text)

    # Entry points
    e1 = get_entry_points(h1)
    e2 = get_entry_points(h2)
    # Also add address 0 if it exists (some scripts start at 0x0)
    if i1:
        e1.add(i1[0][0])
    if i2:
        e2.add(i2[0][0])

    # Reachability
    r1 = find_reachable(i1, e1)
    r2 = find_reachable(i2, e2)

    # Normalize (reachability analysis already strips dead code;
    # @DEAD annotations not needed — they reference Return addrs, not dead addrs)
    n1 = normalize(h1, i1, r1)
    n2 = normalize(h2, i2, r2)

    if n1 == n2:
        return True

    # Try with bare PushEmpty() stripped — these are no-op scope markers
    # that may appear at call-site vs callee-side depending on compiler
    sn1 = _strip_bare_pushempty(n1)
    sn2 = _strip_bare_pushempty(n2)
    if sn1 == sn2:
        return True

    # Try stripping dead zero-init after PushEmpty(type)
    sn1 = _strip_dead_zero_after_pushempty(sn1)
    sn2 = _strip_dead_zero_after_pushempty(sn2)
    if sn1 == sn2:
        return True

    # Strip IsFuncExist blocks early (before typed-zero normalization changes patterns).
    # Original: Push("name") + Push(int) + IsFuncExist + comparison.
    # Compiled: Pop(0); Push((bool) N == 0) constant replacement.
    sn1 = _strip_isfuncexist_blocks(sn1)
    sn2 = _strip_isfuncexist_blocks(sn2)
    if sn1 == sn2:
        return True

    # Normalize typed zero: (bool) 0 / (int) 0 / (float) 0 -> 0
    # Also handles no-space variant: (int)0 / (bool)0
    _tz = re.compile(r'\((?:bool|int|float)\) ?0\b')
    sn1 = _tz.sub('0', sn1)
    sn2 = _tz.sub('0', sn2)
    if sn1 == sn2:
        return True

    # Normalize PushEmpty(type) -> Push(0): semantically equivalent
    # (both push a zero-initialized slot onto the stack)
    # Also normalize Push(CVector(0.0, 0.0, 0.0)) -> Push(0) (zero CVector = zero-init)
    # Also normalize Push("") -> Push(0) (empty string = zero-init)
    _pe_typed = re.compile(r'PushEmpty\(\w+\)')
    _zero_cvec = re.compile(r'Push\(CVector\(0\.0, 0\.0, 0\.0\)\)')
    _empty_str = re.compile(r'Push\(""\)')
    sn1 = _pe_typed.sub('Push(0)', sn1)
    sn2 = _pe_typed.sub('Push(0)', sn2)
    sn1 = _zero_cvec.sub('Push(0)', sn1)
    sn2 = _zero_cvec.sub('Push(0)', sn2)
    sn1 = _empty_str.sub('Push(0)', sn1)
    sn2 = _empty_str.sub('Push(0)', sn2)
    if sn1 == sn2:
        return True

    # Renumber @FN references using DFS ordering to handle function
    # ordering differences between disassembler and compiled output
    rn1 = _renumber_fn_text(sn1)
    rn2 = _renumber_fn_text(sn2)
    if rn1 == rn2:
        return True

    # Normalize extra EVENT lines: strip hex Op addresses and sort
    rn1 = _normalize_extra_events(rn1)
    rn2 = _normalize_extra_events(rn2)
    if rn1 == rn2:
        return True

    # Content-based @FN matching: map function IDs between sides by body content
    cn1, cn2 = _content_match_fn(rn1, rn2)
    if cn1 == cn2:
        return True

    # Function-level comparison: split into per-function bodies (ignoring header),
    # match functions by content, and compare each body independently.
    # This handles EVENT Op= address diffs and function ordering differences.
    if _func_level_match(cn1, cn2):
        return True

    # Inline GOTO to shared returns (Return(); Pop(N))
    sr1 = _inline_shared_return_labels(cn1)
    sr2 = _inline_shared_return_labels(cn2)
    if sr1 == sr2:
        return True
    if _func_level_match(sr1, sr2):
        return True

    # Canonicalize labels within each function by first-reference order
    ln1 = _canonicalize_labels(sr1)
    ln2 = _canonicalize_labels(sr2)
    if ln1 == ln2:
        return True
    if _func_level_match(ln1, ln2):
        return True

    # Text-level: canonicalize Pop/TaskVar write ordering
    # Pop(N) + StackPtr/GlobalVar write → canonical order: Pop first
    pn1 = _text_sort_pop_taskvar(ln1)
    pn2 = _text_sort_pop_taskvar(ln2)
    if pn1 == pn2:
        return True
    if _func_level_match(pn1, pn2):
        return True

    # Canonicalize basic block order within functions:
    # sort blocks by content fingerprint, renumber labels accordingly
    bo1 = _canonicalize_block_order(pn1)
    bo2 = _canonicalize_block_order(pn2)
    if bo1 == bo2:
        return True
    if _func_level_match(bo1, bo2):
        return True

    # Normalize Pop count in comparison/arithmetic instructions:
    # Original compiler keeps dead vars on stack (lower Pop), ours pops eagerly.
    # Pop(N); Push((bool) X op Y) → normalize Pop count away
    _pop_cmp = re.compile(r'Pop\(\d+\); Push\(')
    bo1 = _pop_cmp.sub('Pop(_); Push(', bo1)
    bo2 = _pop_cmp.sub('Pop(_); Push(', bo2)
    if bo1 == bo2:
        return True
    if _func_level_match(bo1, bo2):
        return True

    # Re-apply return inlining + label canonicalization after block reorder
    # (block reorder may create new inlining opportunities)
    bo1 = _inline_shared_return_labels(bo1)
    bo2 = _inline_shared_return_labels(bo2)
    bo1 = _canonicalize_labels(bo1)
    bo2 = _canonicalize_labels(bo2)
    if bo1 == bo2:
        return True
    if _func_level_match(bo1, bo2):
        return True

    # Strip redundant unlabeled returns before labeled lines:
    # "Return(); Pop(N)\n@FX LY: ..." → just the labeled line
    # The unlabeled return is dead code (unreachable after labeled block starts)
    _dup_ret = re.compile(
        r'^(@F\d+) Return\(\); Pop\(\d+\)\n(\1 L\d+:)',
        re.MULTILINE
    )
    bo1 = _dup_ret.sub(r'\2', bo1)
    bo2 = _dup_ret.sub(r'\2', bo2)
    if bo1 == bo2:
        return True
    if _func_level_match(bo1, bo2):
        return True

    # Sort consecutive task-var init lines by StackPtr index.
    # Original and compiled may emit Stack[N + StackPtr] = X in different order.
    bo1 = _sort_stackptr_inits(bo1)
    bo2 = _sort_stackptr_inits(bo2)
    if bo1 == bo2:
        return True
    if _func_level_match(bo1, bo2):
        return True

    # Normalize import call argument pushes:
    # Compiled: Push(X) + @ Import(Stack[-1]...) + Pop(N)
    # Original: @ Import(Stack[-1]...) + Pop(N-pushcount)
    # Strip Push before @/@@-prefixed import calls and reduce Pop count.
    bo1 = _normalize_import_arg_pushes(bo1)
    bo2 = _normalize_import_arg_pushes(bo2)
    if bo1 == bo2:
        return True
    if _func_level_match(bo1, bo2):
        return True

    # Normalize standalone Pop(N) → Pop(0) (dead-var pop count differences).
    # Only match Pop(N) on its own line — NOT in Return(); Pop(N) or Pop(N); Push(.
    _standalone_pop = re.compile(r'^(@F\d+ (?:L\d+: )?)Pop\(\d+\)$', re.MULTILINE)
    bo1 = _standalone_pop.sub(r'\1Pop(0)', bo1)
    bo2 = _standalone_pop.sub(r'\1Pop(0)', bo2)
    if bo1 == bo2:
        return True
    if _func_level_match(bo1, bo2):
        return True

    # Strip labels from Return instructions: L0: Return(); Pop(N) → Return(); Pop(N)
    # The label on a return is usually dead (unreferenced after normalization)
    _label_ret = re.compile(r'^(@F\d+) L\d+: (Return\(\); Pop\(\d+\))$', re.MULTILINE)
    bo1 = _label_ret.sub(r'\1 \2', bo1)
    bo2 = _label_ret.sub(r'\1 \2', bo2)
    if bo1 == bo2:
        return True
    if _func_level_match(bo1, bo2):
        return True

    # Normalize Stack[-N] offsets: when only difference is N values,
    # the diff is caused by dead vars on stack shifting all refs.
    # Also normalize task var refs: Stack[N + StackPtr] and
    # Stack[N + Tasks[-1].StackPointer] — these may be used
    # interchangeably with Stack[-N] references.
    _stack_ref_re = re.compile(r'Stack\[-\d+\]')
    _taskvar_ref_re = re.compile(r'Stack\[\d+ \+ (?:StackPtr|Tasks\[-1\]\.StackPointer)\]')
    bo1 = _stack_ref_re.sub('Stack[*]', bo1)
    bo2 = _stack_ref_re.sub('Stack[*]', bo2)
    bo1 = _taskvar_ref_re.sub('Stack[*]', bo1)
    bo2 = _taskvar_ref_re.sub('Stack[*]', bo2)
    if bo1 == bo2:
        return True
    if _func_level_match(bo1, bo2):
        return True

    # Sort adjacent Pop(0) and Stack assignment pairs within each function.
    # The compiler may emit Pop(0) before or after a Stack assignment.
    bo1 = _sort_pop_stack_pairs(bo1)
    bo2 = _sort_pop_stack_pairs(bo2)
    if bo1 == bo2:
        return True
    if _func_level_match(bo1, bo2):
        return True

    # Re-canonicalize labels after all late-stage normalizations.
    # Stripping labels from Returns, Pop normalization, etc. can leave
    # label numbering out of sync between original and compiled.
    bo1 = _canonicalize_labels(bo1)
    bo2 = _canonicalize_labels(bo2)
    if bo1 == bo2:
        return True
    if _func_level_match(bo1, bo2):
        return True

    # Late-stage IsFuncExist stripping: after Pop/Stack/label normalizations,
    # the IsFuncExist pattern may now be matchable (different regex forms).
    bo1 = _strip_isfuncexist_blocks(bo1)
    bo2 = _strip_isfuncexist_blocks(bo2)
    bo1 = _canonicalize_labels(bo1)
    bo2 = _canonicalize_labels(bo2)
    if bo1 == bo2:
        return True
    if _func_level_match(bo1, bo2):
        return True

    # Cross-function GOTOs always target return paths.  Convert them to
    # GOTO $RET so local-label vs cross-function-label diffs disappear.
    # Pattern: GOTO @FN or GOTO @FN LN  (never appears in Call instructions)
    _xfunc_goto = re.compile(r'GOTO @F\d+(?: L\d+)?')
    bo1 = _xfunc_goto.sub('GOTO $RET', bo1)
    bo2 = _xfunc_goto.sub('GOTO $RET', bo2)
    # Unresolved hex GOTOs (from IsFuncExist stripping) are also cross-function.
    _hex_goto = re.compile(r'GOTO 0x[0-9a-fA-F]+')
    bo1 = _hex_goto.sub('GOTO $RET', bo1)
    bo2 = _hex_goto.sub('GOTO $RET', bo2)
    # Standalone GOTO $RET → Return()
    bo1 = re.sub(r'^(@F\d+(?:\s+L\d+:)?) GOTO \$RET$', r'\1 Return()', bo1, flags=re.MULTILINE)
    bo2 = re.sub(r'^(@F\d+(?:\s+L\d+:)?) GOTO \$RET$', r'\1 Return()', bo2, flags=re.MULTILINE)
    bo1 = _canonicalize_labels(bo1)
    bo2 = _canonicalize_labels(bo2)
    if bo1 == bo2:
        return True
    if _func_level_match(bo1, bo2):
        return True

    # Normalize type-cast formatting differences:
    # 1. (int) -1 vs (int)-1 — normalize space before negative numbers
    # 2. (bool) N vs (int) N — normalize type cast for small integers
    # 3. ( -expr vs -expr — unary minus parenthesization
    _typed_neg = re.compile(r'\((int|bool|float)\) ?(-\d+)')
    bo1 = _typed_neg.sub(r'(\1) \2', bo1)
    bo2 = _typed_neg.sub(r'(\1) \2', bo2)
    _bool_int = re.compile(r'\(bool\) (\d+)')
    bo1 = _bool_int.sub(r'(int) \1', bo1)
    bo2 = _bool_int.sub(r'(int) \1', bo2)
    # Normalize "( -expr" to "-expr" (parenthesized unary minus)
    _paren_neg = re.compile(r'\( (-[^;]+)')
    bo1 = _paren_neg.sub(r'\1', bo1)
    bo2 = _paren_neg.sub(r'\1', bo2)
    bo1 = _canonicalize_labels(bo1)
    bo2 = _canonicalize_labels(bo2)
    if bo1 == bo2:
        return True
    if _func_level_match(bo1, bo2):
        return True

    # Normalize boolean expression formatting: disassembler outputs
    # Push(( expr ) while compiler outputs Push((bool) expr).
    _bool_parens = re.compile(r'Push\(\( (.*?) \)$', re.MULTILINE)
    bo1 = _bool_parens.sub(r'Push((bool) \1)', bo1)
    bo2 = _bool_parens.sub(r'Push((bool) \1)', bo2)
    if bo1 == bo2:
        return True
    if _func_level_match(bo1, bo2):
        return True

    # Strip extra Push(Stack[*]) before GlobalVars[N] = assignment.
    # Compiled adds a duplicate push; original doesn't.
    bo1 = _strip_globalvar_push(bo1)
    bo2 = _strip_globalvar_push(bo2)
    bo1 = _canonicalize_labels(bo1)
    bo2 = _canonicalize_labels(bo2)
    if bo1 == bo2:
        return True
    if _func_level_match(bo1, bo2):
        return True

    # Strip "GOTO LX" that immediately precedes a differently-labeled line.
    # The compiler sometimes emits these as fall-through skips that the
    # original bytecode doesn't have.
    _goto_before_label_re = re.compile(r'^(@F\d+) GOTO (L\d+|\{LABEL:Label_\d+\})$')
    _labeled_line_re = re.compile(r'^(@F\d+) (L\d+):')
    def _strip_goto_before_label(text):
        lines = text.split('\n')
        result = []
        i = 0
        while i < len(lines):
            gm = _goto_before_label_re.match(lines[i])
            if gm:
                fn = gm.group(1)
                target = gm.group(2)
                j = i + 1
                while j < len(lines) and lines[j] == '':
                    j += 1
                if j < len(lines):
                    lm = _labeled_line_re.match(lines[j])
                    if lm and lm.group(1) == fn:
                        # Skip GOTO before labeled line (redundant or fallthrough)
                        i += 1
                        if i < len(lines) and lines[i] == '':
                            i += 1
                        continue
            result.append(lines[i])
            i += 1
        return '\n'.join(result)

    bo1 = _strip_goto_before_label(bo1)
    bo2 = _strip_goto_before_label(bo2)
    bo1 = _canonicalize_labels(bo1)
    bo2 = _canonicalize_labels(bo2)
    if bo1 == bo2:
        return True
    if _func_level_match(bo1, bo2):
        return True

    # Strip redundant zero-init after PushEmpty: "Stack[*] = 0" right after
    # "PushEmpty(types)" is a no-op since PushEmpty already zeroes all slots.
    _pe_multi_re = re.compile(r'^(@F\d+) (?:L\d+: )?PushEmpty\(\w+(?:, \w+)*\)$')
    _zero_init_re = re.compile(r'^(@F\d+) Stack\[\*\] = 0$')
    def _strip_redundant_zero_init(text):
        lines = text.split('\n')
        skip = set()
        for idx in range(len(lines) - 1):
            if _pe_multi_re.match(lines[idx]):
                fn = _pe_multi_re.match(lines[idx]).group(1)
                # Skip blank lines and zero-inits
                j = idx + 1
                while j < len(lines):
                    if lines[j] == '':
                        j += 1
                        continue
                    m = _zero_init_re.match(lines[j])
                    if m and m.group(1) == fn:
                        skip.add(j)
                        # Also skip preceding blank
                        if j > 0 and lines[j-1] == '':
                            skip.add(j-1)
                        j += 1
                        continue
                    break
        return '\n'.join(l for i, l in enumerate(lines) if i not in skip)

    bo1 = _strip_redundant_zero_init(bo1)
    bo2 = _strip_redundant_zero_init(bo2)
    bo1 = _canonicalize_labels(bo1)
    bo2 = _canonicalize_labels(bo2)
    if bo1 == bo2:
        return True
    if _func_level_match(bo1, bo2):
        return True

    # Strip dead-store assignments in else branches of IsFuncExist checks.
    # After IsFuncExist elimination and Stack[*] normalization, the else branch
    # may leave a lone "Stack[*] = (int) NNN" before the next import call.
    # Pattern: IF ... GOTO; Pop(1) / Stack[*] = (int) NNN / @@ Import(...)
    _if_goto_re = re.compile(r'^@F\d+ (?:L\d+: )?IF .* GOTO .+; Pop\(1\)$')
    _dead_store_re = re.compile(r'^(@F\d+) Stack\[\*\] = \(int\) \d+$')
    _import_call_re = re.compile(r'^@F\d+ @@? \w+\(')
    def _strip_dead_else_stores(text):
        lines = text.split('\n')
        skip = set()
        for idx in range(len(lines) - 2):
            if _if_goto_re.match(lines[idx]):
                # Next non-blank line should be the dead store
                j = idx + 1
                while j < len(lines) and lines[j] == '':
                    j += 1
                if j >= len(lines):
                    continue
                dm = _dead_store_re.match(lines[j])
                if not dm:
                    continue
                fn = dm.group(1)
                # Next non-blank after the store should be an import call
                k = j + 1
                while k < len(lines) and lines[k] == '':
                    k += 1
                if k < len(lines) and _import_call_re.match(lines[k]):
                    skip.add(j)
                    if j > 0 and lines[j-1] == '':
                        skip.add(j-1)
        return '\n'.join(l for i, l in enumerate(lines) if i not in skip)

    bo1 = _strip_dead_else_stores(bo1)
    bo2 = _strip_dead_else_stores(bo2)
    if bo1 == bo2:
        return True
    if _func_level_match(bo1, bo2):
        return True

    # Normalize PushEmpty arg types and strip Stack[*] = Stack[*] self-copies.
    # The compiler allocates different local var counts and emits copy instructions
    # that the original binary doesn't have.
    _pe_args = re.compile(r'PushEmpty\([^)]*\)')
    _self_copy = re.compile(r'^@F\d+ Stack\[\*\] = Stack\[\*\]$\n?', re.MULTILINE)
    bo1 = _pe_args.sub('PushEmpty()', bo1)
    bo2 = _pe_args.sub('PushEmpty()', bo2)
    bo1 = _self_copy.sub('', bo1)
    bo2 = _self_copy.sub('', bo2)
    bo1 = _canonicalize_labels(bo1)
    bo2 = _canonicalize_labels(bo2)
    if bo1 == bo2:
        return True
    if _func_level_match(bo1, bo2):
        return True

    if verbose:
        lines1 = bo1.split('\n')
        lines2 = bo2.split('\n')
        diff_count = 0
        max_show = 10
        for k in range(max(len(lines1), len(lines2))):
            l1 = lines1[k] if k < len(lines1) else '<missing>'
            l2 = lines2[k] if k < len(lines2) else '<missing>'
            if l1 != l2:
                diff_count += 1
                if diff_count <= max_show:
                    print(f'  line {k+1}:')
                    print(f'    orig: {l1}')
                    print(f'    comp: {l2}')
        if diff_count > max_show:
            print(f'  ... and {diff_count - max_show} more diffs')
        print(f'  total diff lines: {diff_count}')

    return False


def compare_folder(orig_dir: str, comp_dir: str, c_dir: str = None,
                   verbose: bool = False, show_near: int = 0):
    """Compare all ASM files in two directories."""
    match = 0
    total = 0
    near_misses = []  # (diff_count, filename)

    for f in sorted(os.listdir(comp_dir)):
        if not f.endswith('.compiled.asm'):
            continue
        base = f.replace('.compiled.asm', '.asm')
        name = base.replace('.bin.asm', '')
        orig_path = os.path.join(orig_dir, base)
        comp_path = os.path.join(comp_dir, f)

        if not os.path.exists(orig_path):
            continue

        total += 1
        c_path = os.path.join(c_dir, name + '.bin.c') if c_dir else None

        if compare_one(orig_path, comp_path, c_path):
            match += 1
        else:
            if show_near > 0 or verbose:
                # Count diff lines for near-miss reporting
                with open(orig_path, 'r', encoding='utf-8') as a:
                    ot = a.read()
                with open(comp_path, 'r', encoding='utf-8') as b:
                    ct = b.read()
                h1, i1 = parse_asm(ot)
                h2, i2 = parse_asm(ct)
                e1 = get_entry_points(h1)
                e2 = get_entry_points(h2)
                if i1: e1.add(i1[0][0])
                if i2: e2.add(i2[0][0])
                r1 = find_reachable(i1, e1)
                r2 = find_reachable(i2, e2)
                n1 = normalize(h1, i1, r1)
                n2 = normalize(h2, i2, r2)
                l1 = n1.split('\n')
                l2 = n2.split('\n')
                ndiff = sum(1 for a2, b2 in zip(l1, l2) if a2 != b2) + abs(len(l1) - len(l2))
                near_misses.append((ndiff, name))

                if verbose:
                    print(f'DIFF  {name} ({ndiff} lines)')

    print(f'\n{match}/{total} match (reachable code)')

    if show_near > 0 and near_misses:
        near_misses.sort()
        print(f'\nNearest misses:')
        for ndiff, name in near_misses[:show_near]:
            print(f'  {ndiff:4d}  {name}')


# ---------------------------------------------------------------------------
# Single-file detailed diff
# ---------------------------------------------------------------------------

def diff_one(orig_path: str, comp_path: str, c_path: str = None):
    """Show detailed diff for one file pair."""
    with open(orig_path, 'r', encoding='utf-8') as f:
        orig_text = f.read()
    with open(comp_path, 'r', encoding='utf-8') as f:
        comp_text = f.read()

    if orig_text == comp_text:
        print('EXACT MATCH')
        return

    h1, i1 = parse_asm(orig_text)
    h2, i2 = parse_asm(comp_text)
    e1 = get_entry_points(h1)
    e2 = get_entry_points(h2)
    if i1: e1.add(i1[0][0])
    if i2: e2.add(i2[0][0])
    r1 = find_reachable(i1, e1)
    r2 = find_reachable(i2, e2)
    n1 = normalize(h1, i1, r1)
    n2 = normalize(h2, i2, r2)

    if n1 == n2:
        dead_orig = len(i1) - len([a for a, _ in i1 if a in r1])
        dead_comp = len(i2) - len([a for a, _ in i2 if a in r2])
        print(f'MATCH (reachable code identical; {dead_orig} dead in orig, {dead_comp} dead in compiled)')
        return

    print('DIFF in reachable code:')
    lines1 = n1.split('\n')
    lines2 = n2.split('\n')
    for k in range(max(len(lines1), len(lines2))):
        l1 = lines1[k] if k < len(lines1) else '<missing>'
        l2 = lines2[k] if k < len(lines2) else '<missing>'
        if l1 != l2:
            print(f'  < {l1}')
            print(f'  > {l2}')


# ---------------------------------------------------------------------------
# CLI
# ---------------------------------------------------------------------------

def main():
    args = sys.argv[1:]

    if not args:
        print(__doc__)
        sys.exit(1)

    # Parse flags
    verbose = '-v' in args
    if verbose:
        args.remove('-v')

    show_near = 0
    for i, a in enumerate(args):
        if a == '--near':
            show_near = int(args[i + 1]) if i + 1 < len(args) else 30
            args.pop(i + 1)
            args.pop(i)
            break

    if args[0] == '--folder':
        orig_dir = args[1]
        comp_dir = args[2]
        c_dir = args[3] if len(args) > 3 else None
        compare_folder(orig_dir, comp_dir, c_dir, verbose=verbose, show_near=show_near)
    elif args[0] == '--diff':
        orig = args[1]
        comp = args[2]
        c = args[3] if len(args) > 3 else None
        diff_one(orig, comp, c)
    else:
        orig = args[0]
        comp = args[1]
        c = args[2] if len(args) > 2 else None
        if compare_one(orig, comp, c, verbose=True):
            print('MATCH')
        else:
            print('DIFF')


if __name__ == '__main__':
    main()
