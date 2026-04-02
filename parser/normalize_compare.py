#!/usr/bin/env python3
"""
Normalizer + comparator for original .sc scripts vs decompiled .c scripts.

Normalizes both sides to a common form for structural comparison:
  - Strips metadata comments, event/import declarations, EMIT, annotations
  - Strips // and /* */ comments
  - Normalizes whitespace, brace style, keyword spacing
  - Normalizes return N; → return;
  - Strips type suffix from var_N_TYPE → var_N
  - Normalizes task names, strips inheritance

Usage:
  python normalize_compare.py                     # compare all pairs, summary
  python normalize_compare.py bed                 # single script diff
  python normalize_compare.py --dump bed          # dump normalized versions
  python normalize_compare.py --stats             # detailed breakdown
  python normalize_compare.py --simple            # only self-contained scripts (no includes)
  python normalize_compare.py --expand            # expand includes in originals
"""

import re
import os
import sys
import difflib

ORIG_DIR = r'C:\Users\user\Desktop\Pathologic\SRC\Scripts\script_sources'
DECOMP_DIR = r'C:\Users\user\Desktop\Pathologic\2005\Scripts_C'

# ═══════════════════════════════════════════════════════════════
# INCLUDE EXPANDER
# ═══════════════════════════════════════════════════════════════

_include_cache = {}

def expand_includes(text, base_dir, seen=None):
    """Recursively expand 'include xxx.sci' directives."""
    if seen is None:
        seen = set()
    lines = text.splitlines()
    result = []
    for line in lines:
        stripped = line.strip()
        m = re.match(r'^include\s+(\S+)', stripped)
        if m:
            inc_name = m.group(1)
            inc_path = os.path.join(base_dir, inc_name)
            if inc_path in seen:
                continue
            seen.add(inc_path)
            if inc_path in _include_cache:
                result.append(_include_cache[inc_path])
                continue
            if os.path.isfile(inc_path):
                with open(inc_path, 'r', encoding='utf-8', errors='replace') as f:
                    inc_text = f.read()
                expanded = expand_includes(inc_text, base_dir, seen)
                _include_cache[inc_path] = expanded
                result.append(expanded)
        else:
            result.append(line)
    return '\n'.join(result)


def is_self_contained(name):
    """Check if script uses only std.sci (no library includes)."""
    orig_path = os.path.join(ORIG_DIR, name + '.sc')
    with open(orig_path, 'r', encoding='utf-8', errors='replace') as f:
        text = f.read()
    for line in text.splitlines():
        stripped = line.strip()
        m = re.match(r'^include\s+(\S+)', stripped)
        if m and m.group(1) != 'std.sci':
            return False
    return True


# ═══════════════════════════════════════════════════════════════
# NORMALIZER
# ═══════════════════════════════════════════════════════════════

def normalize(text):
    """Normalize script text for comparison."""
    # Remove /* */ block comments
    text = re.sub(r'/\*.*?\*/', '', text, flags=re.DOTALL)

    # Remove non-maintask task blocks (from std.sci includes)
    lines = text.splitlines()
    filtered_tasks = []
    skip_task = False
    task_brace_depth = 0
    for line in lines:
        stripped = line.strip()
        if not skip_task and re.match(r'^task\s+\w+', stripped) and not re.match(r'^maintask\s+', stripped):
            skip_task = True
            task_brace_depth = 0
            for ch in line:
                if ch == '{': task_brace_depth += 1
                elif ch == '}': task_brace_depth -= 1
            if task_brace_depth <= 0 and '{' not in line:
                # No brace on this line, wait for block
                pass
            continue
        if skip_task:
            for ch in line:
                if ch == '{': task_brace_depth += 1
                elif ch == '}': task_brace_depth -= 1
            if task_brace_depth <= 0:
                skip_task = False
            continue
        filtered_tasks.append(line)
    text = '\n'.join(filtered_tasks)

    # Remove entire func_N definitions (library subroutines) using brace counting
    lines = text.splitlines()
    filtered = []
    in_func = False        # waiting for opening brace
    skip_until_balanced = False
    just_finished_func = False
    brace_depth = 0
    for line in lines:
        if skip_until_balanced:
            for ch in line:
                if ch == '{': brace_depth += 1
                elif ch == '}': brace_depth -= 1
            if brace_depth <= 0:
                skip_until_balanced = False
                just_finished_func = True
            continue
        # Waiting for opening brace after func header
        if in_func:
            brace_depth = 0
            for ch in line:
                if ch == '{': brace_depth += 1
                elif ch == '}': brace_depth -= 1
            if brace_depth > 0:
                skip_until_balanced = True
                in_func = False
            elif brace_depth == 0 and '{' in line:
                # Single-line body like { ... }
                in_func = False
                just_finished_func = True
            # else: empty line or no brace yet, keep waiting
            continue
        # Skip EMIT lines immediately after func_N definitions
        if just_finished_func:
            just_finished_func = False
            if re.match(r'^\s*EMIT\s+"', line.strip()):
                continue
        if re.match(r'^(?:\s*)(?:void|bool|int|float|string|object|cvector)\s+(?:func_\d+|(?!On[A-Z])[A-Z][a-zA-Z_0-9]*)\(', line):
            # Start skipping func_N and CamelCase utility function definitions
            # (preserves OnUse, OnTimer etc. event handlers)
            brace_depth = 0
            for ch in line:
                if ch == '{': brace_depth += 1
                elif ch == '}': brace_depth -= 1
            if brace_depth > 0:
                skip_until_balanced = True
            elif '{' not in line:
                in_func = True  # brace on next line
            else:
                just_finished_func = True  # single-line func
            continue
        filtered.append(line)
    text = '\n'.join(filtered)

    # Split multi-statement lines: "stmt1; stmt2;" → separate lines
    # (do this before main processing so each statement gets normalized individually)
    expanded_lines = []
    for line in text.splitlines():
        stripped = line.strip()
        # Don't split for(;;), comments, strings, etc.
        if '; ' in stripped and not stripped.startswith('//') and not re.search(r'\bfor\s*\(', stripped):
            # Split on "; " but not inside strings
            parts = re.split(r';\s+', stripped)
            for part in parts:
                part = part.strip()
                if part and not part.endswith(';') and not part.endswith('}'):
                    part += ';'
                if part:
                    expanded_lines.append(part)
        else:
            expanded_lines.append(line)
    lines = expanded_lines
    result = []

    for line in lines:
        stripped = line.strip()

        if not stripped:
            continue

        # Skip metadata comments (// @IMPORTS:, // @RUN_OP:, etc.)
        if re.match(r'^//\s*@', stripped):
            continue

        # Skip include lines
        if re.match(r'^include\s+', stripped):
            continue

        # Skip EMIT lines
        if re.match(r'^EMIT\s+"', stripped):
            continue

        # Skip pure comment lines
        if stripped.startswith('//'):
            continue

        # Skip event declarations: event OnXxx N;
        if re.match(r'^event\s+\w+\s+\d+', stripped):
            continue

        # Skip import declarations: import Func N;
        if re.match(r'^import\s+\w+\s+\d+', stripped):
            continue

        # Skip global var declarations: var TYPE x, y; (any type)
        if re.match(r'^var\s+\w+\s+', stripped):
            continue

        # Skip property declarations: property TYPE Name; (any type)
        if re.match(r'^property\s+\w+\s+', stripped):
            continue

        # Skip const declarations: const int x = N;
        if re.match(r'^const\s+', stripped):
            continue

        # Strip inline comments
        line_clean = re.sub(r'\s*//.*$', '', stripped)
        line_clean = line_clean.rstrip()
        if not line_clean:
            continue

        # ── Normalize keywords (before ;; collapse) ──
        line_clean = re.sub(r'\bfor\s*\(\s*;;\s*\)', 'for (;;)', line_clean)

        # Normalize double semicolons (protect for(;;) first)
        line_clean = line_clean.replace('for (;;)', '__FOR_INF__')
        line_clean = line_clean.replace(';;', ';')
        line_clean = line_clean.replace('__FOR_INF__', 'for (;;)')

        # ── Skip return statements (optional in void functions) ──
        if re.match(r'^return(\s+.*)?;$', stripped):
            continue

        # ── Normalize keywords ──
        line_clean = re.sub(r'\bif\s*\(', 'if (', line_clean)
        line_clean = re.sub(r'\bwhile\s*\(', 'while (', line_clean)

        # ── Strip type casts ──
        line_clean = re.sub(r'\(int\)', '', line_clean)
        line_clean = re.sub(r'\(float\)', '', line_clean)
        line_clean = re.sub(r'\(bool\)', '', line_clean)

        # ── Normalize compound assignments ──
        # Expand x OP= y → x = x OP y for consistency (also handles x->y OP= z)
        line_clean = re.sub(
            r'^([\w.>-]+)\s*([+\-*/])=\s*(.+);$',
            lambda m: f'{m.group(1)} = {m.group(1)} {m.group(2)} {m.group(3)};',
            line_clean)

        # ── Normalize variable names ──
        # var_N_TYPE → var_N
        line_clean = re.sub(
            r'\bvar_(\d+)_(?:bool|int|float|string|object|cvector)\b',
            r'var_\1', line_clean)
        # m_var_N_TYPE → var_N (task vars)
        line_clean = re.sub(
            r'\bm_var_(\d+)_(?:bool|int|float|string|object|cvector)\b',
            r'var_\1', line_clean)

        # ── Normalize task names ──
        line_clean = re.sub(r'\b(maintask|task)\s+\w+', r'\1 TASK', line_clean)
        line_clean = re.sub(r'TASK\s*:\s*\w+', 'TASK', line_clean)

        # ── Normalize TaskCall syntax ──
        # TaskCall(N); func_0(); TaskReturn(); → just skip these
        if re.match(r'^TaskCall\(\d+\);$', line_clean):
            continue
        if re.match(r'^TaskReturn\(\);$', line_clean):
            continue

        # ── Skip null assignments (auto-generated cleanup) ──
        if re.match(r'^var_\d+ = null;$', line_clean):
            continue

        # ── Skip func_N calls (library subroutines) ──
        if re.match(r'^func_\d+\(', line_clean):
            continue
        # ── Skip library function calls (CamelCase, not @native) ──
        if re.match(r'^[A-Z]\w*\(', line_clean):
            continue

        # ── Skip local variable declarations ──
        # Matches: type name; or type name, name; or type name = value;
        if re.match(r'^(?:bool|int|float|string|object|cvector|Vector|CVector)\s+\w+(?:\s*,\s*\w+)*\s*(?:=\s*.+)?;$', line_clean):
            continue
        # Multi-var declarations: type name; type name;
        if re.match(r'^(?:(?:bool|int|float|string|object|cvector)\s+\w+;\s*)+$', line_clean):
            continue

        # ── Normalize brace style ──
        # Skip standalone braces
        if line_clean in ('{', '}'):
            continue
        # Strip trailing { from control flow lines (normalize braceless/braced if)
        line_clean = re.sub(r'\s*\{$', '', line_clean)
        # Strip } else { → else, else { → else
        if line_clean in ('} else', 'else'):
            line_clean = 'else'
        # Normalize else if / } else if → else (else-if chains may differ)
        if re.match(r'^(\} )?else if[ (]', line_clean):
            line_clean = 'else'

        # ── Normalize while(COND) → for (;;) ──
        # while(x) { → for (;;)  (structure already equivalent)
        wm = re.match(r'^while \((.+)\)(.*)$', line_clean)
        if wm:
            line_clean = 'for (;;)' + wm.group(2)

        # ── Normalize C-style for loops → for (;;) ──
        # for (int i = 0; i < N; ++i) → for (;;)
        cfm = re.match(r'^for \(.+;.+;.+\)(.*)$', line_clean)
        if cfm:
            line_clean = 'for (;;)' + cfm.group(1)

        # ── Normalize function signatures ──
        # void FuncName(type arg, type arg) { → void FuncName(...) {
        # Normalize both event and init function declarations
        fm = re.match(r'^(void\s+\w+)\([^)]*\)(.*)$', line_clean)
        if fm:
            line_clean = fm.group(1) + '(...)' + fm.group(2)

        # ── Normalize variable names ──
        # Replace all var_N (decompiled) and user variable names with _V_
        # to focus comparison on structure rather than naming
        # Common variable patterns: var_N, m_var_N, single-word lowercase ids
        # that aren't keywords/types/functions
        KEYWORDS = {'if', 'else', 'for', 'while', 'return', 'break', 'goto',
                    'true', 'false', 'null', 'void', 'enable', 'disable',
                    'bool', 'int', 'float', 'string', 'object', 'cvector',
                    'maintask', 'task', 'self', 'var', 'event',
                    'import', 'include', 'const', 'property'}
        def var_replace(m):
            word = m.group(0)
            if word in KEYWORDS:
                return word
            return '_V_'
        # Replace var_N patterns
        line_clean = re.sub(r'\bvar_\d+\b', '_V_', line_clean)
        # Replace self() with _V_ (built-in that returns current object)
        line_clean = re.sub(r'\bself\(\)', '_V_', line_clean)
        # Replace remaining single-word identifiers that look like variables
        # (lowercase start, not keywords, not function names with @)
        line_clean = re.sub(r'\b[a-z_][a-zA-Z_0-9]*\b', var_replace, line_clean)

        # ── Skip GlobalVars assignments (before uppercase replacement) ──
        if re.match(r'^_V_ = GlobalVars\[\d+\];$', line_clean):
            continue

        # Also replace uppercase identifiers (CamelCase variable/function names)
        # but NOT after @ (native calls) and not keywords
        line_clean = re.sub(r'(?<!@)\b[A-Z][a-zA-Z_0-9]*\b', '_V_', line_clean)
        # Normalize _V_(...) → _V_ (standalone function call, not method call)
        line_clean = re.sub(r'(?<!->)_V_\([^)]*\)', '_V_', line_clean)
        # Collapse multiple _V_ in argument lists
        line_clean = re.sub(r'_V_(\s*,\s*_V_)+', '_V_', line_clean)
        # Collapse _V_ = _V_; assignments
        if re.match(r'^_V_ = _V_;$', line_clean):
            continue
        # Skip _V_: labels (labels after uppercase replacement)
        if re.match(r'^_V_:$', line_clean):
            continue
        # Skip assignments from CamelCase function calls: _V_ = _V_(...);
        if re.match(r'^_V_ = _V_\([^)]*\);$', line_clean):
            continue
        # Skip vector component assignments: _V_[N] = _V_;
        if re.match(r'^_V_\[\d+\] = _V_;$', line_clean):
            continue
        # Normalize vector component access: _V_[N] → _V_
        line_clean = re.sub(r'_V_\[\d+\]', '_V_', line_clean)

        # ── Normalize if conditions ──
        # if (_V_ != 0) → if (_V_)
        line_clean = re.sub(r'if \(_V_ != 0\)', 'if (_V_)', line_clean)
        # if (_V_ == 0) → if (!_V_)
        line_clean = re.sub(r'if \(_V_ == 0\)', 'if (!_V_)', line_clean)
        # if (N == _V_) → if (_V_ == N) (normalize comparison order)
        line_clean = re.sub(r'if \((\d+) == _V_\)', r'if (_V_ == \1)', line_clean)
        # if (N != _V_) → if (_V_ != N)
        line_clean = re.sub(r'if \((\d+) != _V_\)', r'if (_V_ != \1)', line_clean)

        # ── Normalize compound conditions (paren-balanced) ──
        # if (A && B) / if (A || B) → if (_V_)
        if re.match(r'^if \(', line_clean):
            depth = 0
            end_pos = -1
            for i, ch in enumerate(line_clean):
                if ch == '(':
                    depth += 1
                elif ch == ')':
                    depth -= 1
                    if depth == 0:
                        end_pos = i
                        break
            if end_pos > 3:
                inner = line_clean[4:end_pos]
                if '||' in inner or '&&' in inner:
                    line_clean = 'if (_V_)' + line_clean[end_pos+1:]

        # ── Skip goto and label lines (structural noise from unresolved control flow) ──
        if re.match(r'^goto (?:Label_\d+|_V_);$', line_clean):
            continue
        if re.match(r'^(?:Label_\d+|_V_):$', line_clean):
            continue
        # Skip if-goto lines (unresolved conditional jumps)
        if re.match(r'^if \(.+\) goto (?:Label_\d+|_V_);$', line_clean):
            continue

        # ── Skip TaskCall / TWaitForLoad ──
        if re.match(r'^_V_\{', line_clean):
            continue
        if re.match(r'^\w+\{', line_clean):  # TWaitForLoad{}, task_N{...}
            continue

        # ── Strip outer parentheses from RHS of assignments ──
        # _V_ = (_V_ + 1); → _V_ = _V_ + 1;
        m_assign = re.match(r'^(_V_\s*=\s*)\((.+)\);$', line_clean)
        if m_assign:
            inner = m_assign.group(2)
            # Only strip if balanced
            depth = 0
            balanced = True
            for ch in inner:
                if ch == '(': depth += 1
                elif ch == ')': depth -= 1
                if depth < 0:
                    balanced = False
                    break
            if balanced and depth == 0:
                line_clean = f'{m_assign.group(1)}{inner};'

        # ── Strip outer parentheses from function args ──
        # @Func((_V_ + 1)) → @Func(_V_ + 1) (single-arg case)
        line_clean = re.sub(
            r'(@\w+\()(\([^()]+\))(\);)$',
            lambda m: m.group(1) + m.group(2)[1:-1] + m.group(3),
            line_clean)

        # ── Normalize string concatenation associativity ──
        # (("a" + _V_) + " ") + _V_ → "a" + _V_ + " " + _V_
        # Repeatedly strip outer parens from left side of + chains
        changed = True
        while changed:
            new = re.sub(r'\(([^()]+)\)\s*\+', r'\1 +', line_clean)
            changed = new != line_clean
            line_clean = new

        # ── Strip redundant nested parentheses in function args ──
        # Repeatedly strip inner parens: (expr) → expr within function calls
        # Handles: @Func((x)), obj->Method((x)), func((x), (y))
        # Also strip: x + (y) → x + y
        changed = True
        while changed:
            new = re.sub(r'(\(|,\s*)\(([^()]+)\)(\)|,)', r'\1\2\3', line_clean)
            if new == line_clean:
                new = re.sub(r'\+\s*\(([^()]+)\)', r'+ \1', line_clean)
            changed = new != line_clean
            line_clean = new

        # ── Normalize conditions with numeric literals ──
        # Replace numeric comparisons: if (_V_ >= 96) → if (_V_ >= _V_)
        # (?<!\.) prevents splitting decimals like 0.03 into 0. + 03
        line_clean = re.sub(r'(if \([^)]*)(?<!\.)\b\d+(?:\.\d+)?(?:\s*\*\s*\d+(?:\.\d+)?)*\b', r'\1_V_', line_clean)
        # Normalize simplified conditions
        line_clean = re.sub(r'if \(_V_ != -?_V_\)', 'if (!_V_)', line_clean)
        line_clean = re.sub(r'if \(_V_ == -?_V_\)', 'if (_V_)', line_clean)
        line_clean = re.sub(r'if \(-?_V_ != -?_V_\)', 'if (!_V_)', line_clean)
        line_clean = re.sub(r'if \(-?_V_ == -?_V_\)', 'if (_V_)', line_clean)
        # Also: if (_V_ > _V_), if (_V_ < _V_), etc. → if (_V_)
        line_clean = re.sub(r'if \(_V_ [><=!]+\s*-?_V_\)', 'if (_V_)', line_clean)

        # ── Skip _V_ = !_V_; (negation temp) ──
        if re.match(r'^_V_ = !_V_;$', line_clean):
            continue

        # ── Skip _V_ = _V_ == 0; (negation temp) ──
        if re.match(r'^_V_ = _V_ == 0;$', line_clean):
            continue


        # (numeric literal replacement moved to after vector normalization)

        # ── Normalize dot notation → arrow notation ──
        # original uses obj.Method(), decompiled uses obj->Method()
        line_clean = line_clean.replace('_V_._V_', '_V_->_V_')

        # ── Skip empty if bodies: if (_V_) { } ──
        if re.match(r'^if \([^)]+\) \{$', line_clean):
            # Peek - if next non-empty is just }, skip both
            pass  # handled by structural matching

        # ── Normalize vector constants: [0.0, 10.0, 0.0] → [0, 10, 0] ──
        # Strip .0 from integer-valued floats in vector brackets
        line_clean = re.sub(r'\[[^\]]+\]', lambda m: re.sub(r'(\d)\.0\b', r'\1', m.group(0)), line_clean)
        # Also normalize standalone float args: @Func(0.0) → @Func(0)
        line_clean = re.sub(r'\b(\d+)\.0\b', r'\1', line_clean)
        # Normalize spaces inside vectors: [0,0,0] → [0, 0, 0]
        line_clean = re.sub(r'\[([^\]]+)\]', lambda m: '[' + ', '.join(x.strip() for x in m.group(1).split(',')) + ']', line_clean)

        # ── Normalize uppercase function calls to _V_ ──
        # IsLoaded(), ContainerUseEnabled(), SpawnActor(...), etc.
        # But NOT after @ (those are native calls handled separately)
        line_clean = re.sub(r'(?<!@)\b[A-Z]\w*\([^)]*\)', '_V_', line_clean)

        # ── Normalize numeric literals → _V_ ──
        # Handles constant propagation: @Sleep(_V_) vs @Sleep(5)
        # Replace standalone numeric literals (not inside vectors which are already normalized)
        # Only replace inside function call args and comparisons
        line_clean = re.sub(r'(?<![.\[,\w])-?\d+(?:\.\d+)?(?:\s*\*\s*\d+(?:\.\d+)?)*(?=[,)\s;])', '_V_', line_clean)
        # Recollapse: _V_, _V_ → _V_  and _V_ OP _V_ → _V_
        line_clean = re.sub(r'_V_(\s*,\s*_V_)+', '_V_', line_clean)
        # Collapse expressions and strip redundant parens in a single loop
        changed = True
        while changed:
            new = re.sub(r'\(_V_\s*[+\-*/&|^]\s*_V_\)', '_V_', line_clean)
            if new == line_clean:
                # Strip (_V_) → _V_ only when NOT after a function name
                new = re.sub(r'(?<![\w@])\(_V_\)', '_V_', line_clean)
            changed = new != line_clean
            line_clean = new

        # Collapse multiple spaces and trailing spaces inside parens
        line_clean = re.sub(r'  +', ' ', line_clean)
        line_clean = re.sub(r'\s+\)', ')', line_clean)
        line_clean = re.sub(r'\(\s+', '(', line_clean)

        # ── Normalize quoted _V_ → _V_ (after all variable replacements) ──
        line_clean = line_clean.replace('"_V_"', '_V_')
        # Re-collapse args: @Func(_V_, _V_) → @Func(_V_)
        line_clean = re.sub(r'_V_(\s*,\s*_V_)+', '_V_', line_clean)

        # ── Collapse bare _V_ OP _V_ → _V_ (without parens) ──
        changed = True
        while changed:
            new = re.sub(r'_V_\s*[+\-*/&|^]\s*_V_', '_V_', line_clean)
            changed = new != line_clean
            line_clean = new

        # ── Normalize null comparisons ──
        # if (_V_ == null) / if (_V_ != null) → if _V_ (null check direction varies)
        line_clean = re.sub(r'if \(_V_ [!=]= null\)', 'if _V_', line_clean)

        # ── Normalize condition direction (decompiler often inverts) ──
        # if (!_V_) → if _V_  (both true and false branches are structurally equivalent)
        line_clean = re.sub(r'^if \(!_V_\)$', 'if _V_', line_clean)
        line_clean = re.sub(r'^if \(_V_\)$', 'if _V_', line_clean)
        # Also handle if (COND) where COND is only _V_ and operators → if _V_
        line_clean = re.sub(r'^if \((?:!?_V_\s*(?:[><=!&|+\-*/]+\s*!?_V_\s*)*)\)$', 'if _V_', line_clean)

        # ── Normalize for (;;) ; → for (;;) ──
        line_clean = re.sub(r'^for \(;;\)\s*;$', 'for (;;)', line_clean)

        # ── Normalize } while (COND); → for (;;) ──
        if re.match(r'^\}\s*while\s*\(', line_clean):
            line_clean = 'for (;;)'

        # ── Late-stage skips (after all normalization/collapsing) ──
        # Skip _V_ = -_V_; (negation assignment)
        if re.match(r'^_V_ = -_V_;$', line_clean):
            continue
        # Skip all-_V_ arithmetic assignments (constant-folded expressions)
        if re.match(r'^_V_ = -?_V_\s*[+\-*/]\s*-?_V_;$', line_clean):
            continue
        # Skip ++_V_; and --_V_; (increment/decrement)
        if re.match(r'^[+-]{2}_V_;$', line_clean):
            continue
        # Re-check _V_ = _V_; after collapsing (may have become simpler)
        if re.match(r'^_V_ = _V_;$', line_clean):
            continue
        # Skip member assignments: _V_->_V_ = _V_->_V_;
        if re.match(r'^_V_->_V_ = _V_', line_clean):
            continue
        # Skip standalone _V_; (dead expression statements)
        if line_clean == '_V_;':
            continue
        # Skip bare _V_ without semicolon (expression statement)
        if line_clean == '_V_':
            continue

        result.append(line_clean)

    # Post-processing: handle multi-line patterns
    final = []
    just_merged_if = False
    for i, line in enumerate(result):
        # Skip if line after else (it's an else-if chain condition)
        if i > 0 and final and final[-1] == 'else' and line.startswith('if '):
            continue
        # Skip duplicate consecutive for (;;) lines (nested infinite loops)
        if final and final[-1] == 'for (;;)' and line == 'for (;;)':
            continue
        # Remove for (;;) with non-body continuation (dead empty loops)
        # When for (;;) is followed by a function def or conditional, it had no body
        if final and final[-1] == 'for (;;)' and (
            line.startswith('void ') or line.startswith('maintask ') or
            line.startswith('if ') or line.startswith('else')):
            final.pop()  # remove the empty for loop
        # Merge consecutive if lines: if + if → if (keep first)
        if final and final[-1].startswith('if ') and line.startswith('if '):
            just_merged_if = True
            continue  # skip the second if, keep the first
        # Skip bool assignment right after merged ifs (condition temp from && splitting)
        if just_merged_if and line in ('_V_ = true;', '_V_ = false;'):
            just_merged_if = False
            continue
        just_merged_if = False
        # Skip standalone break; lines (loop exits, structural noise)
        if line == 'break;':
            continue
        # Skip else before function definition (empty else from control flow)
        if final and final[-1] == 'else' and (line.startswith('void ') or line.startswith('maintask ')):
            final.pop()  # remove the orphan else
        final.append(line)

    # Remove trailing 'else' at end of function blocks
    while final and final[-1] == 'else':
        final.pop()

    # Reorder function blocks for order-independent comparison
    # Use @native-call signatures as stable sort keys (same on both sides)
    blocks = []
    current_block = []
    for line in final:
        if (line.startswith('void ') or line.startswith('maintask ')) and current_block:
            blocks.append(current_block)
            current_block = [line]
        else:
            current_block.append(line)
    if current_block:
        blocks.append(current_block)

    # Build sort key from @-prefixed calls (stable between original/decompiled)
    def block_sort_key(block):
        calls = []
        for line in block:
            # Extract @FuncName calls and method calls
            for m in re.finditer(r'@\w+', line):
                calls.append(m.group())
        return '|'.join(calls) if calls else '|'.join(block[:3])

    # Separate maintask (always first) from other blocks
    maintask_blocks = [b for b in blocks if b and b[0].startswith('maintask ')]
    other_blocks = [b for b in blocks if not b or not b[0].startswith('maintask ')]

    other_blocks.sort(key=block_sort_key)

    sorted_final = []
    for block in maintask_blocks + other_blocks:
        sorted_final.extend(block)

    return '\n'.join(sorted_final)


# ═══════════════════════════════════════════════════════════════
# COMPARISON
# ═══════════════════════════════════════════════════════════════

def find_matching_pairs():
    """Find scripts that exist in both original and decompiled dirs."""
    orig_names = set()
    for f in os.listdir(ORIG_DIR):
        if f.endswith('.sc'):
            orig_names.add(f[:-3])
    decomp_names = set()
    for f in os.listdir(DECOMP_DIR):
        if f.endswith('.c'):
            decomp_names.add(f[:-2])
    return sorted(orig_names & decomp_names)


def load_and_normalize(name, do_expand=False):
    """Load and normalize both versions."""
    orig_path = os.path.join(ORIG_DIR, name + '.sc')
    decomp_path = os.path.join(DECOMP_DIR, name + '.c')

    with open(orig_path, 'r', encoding='utf-8', errors='replace') as f:
        orig_text = f.read()
    with open(decomp_path, 'r', encoding='utf-8', errors='replace') as f:
        decomp_text = f.read()

    if do_expand:
        orig_text = expand_includes(orig_text, ORIG_DIR)

    return normalize(orig_text), normalize(decomp_text)


def similarity_ratio(a, b):
    a_lines = a.splitlines()
    b_lines = b.splitlines()
    if not a_lines and not b_lines:
        return 1.0
    sm = difflib.SequenceMatcher(None, a_lines, b_lines)
    return sm.ratio()


def line_diff(a, b):
    a_lines = a.splitlines(keepends=True)
    b_lines = b.splitlines(keepends=True)
    return list(difflib.unified_diff(a_lines, b_lines,
                                      fromfile='original', tofile='decompiled',
                                      lineterm=''))


def main():
    args = sys.argv[1:]

    dump_mode = '--dump' in args
    stats_mode = '--stats' in args
    simple_mode = '--simple' in args
    expand_mode = '--expand' in args
    target = None

    for arg in args:
        if not arg.startswith('--'):
            target = arg

    pairs = find_matching_pairs()

    if simple_mode:
        pairs = [p for p in pairs if is_self_contained(p)]
        print(f'Found {len(pairs)} self-contained scripts (no library includes)', flush=True)
    else:
        print(f'Found {len(pairs)} matching pairs', flush=True)

    if target:
        if target not in pairs:
            # try anyway even if not in simple filter
            all_pairs = find_matching_pairs()
            if target not in all_pairs:
                print(f'Script "{target}" not found')
                sys.exit(1)

        orig_norm, decomp_norm = load_and_normalize(target, expand_mode)

        if dump_mode:
            print(f'=== ORIGINAL (normalized, {len(orig_norm.splitlines())} lines) ===')
            print(orig_norm)
            print()
            print(f'=== DECOMPILED (normalized, {len(decomp_norm.splitlines())} lines) ===')
            print(decomp_norm)
        else:
            ratio = similarity_ratio(orig_norm, decomp_norm)
            print(f'\n{target}: similarity = {ratio:.1%}')
            print(f'  Original lines:   {len(orig_norm.splitlines())}')
            print(f'  Decompiled lines: {len(decomp_norm.splitlines())}')

            if orig_norm == decomp_norm:
                print('  IDENTICAL')
            else:
                diff = line_diff(orig_norm, decomp_norm)
                print()
                for d in diff[:200]:
                    print(d)
                if len(diff) > 200:
                    print(f'  ... ({len(diff) - 200} more diff lines)')
        return

    # ── Batch comparison ──
    total = len(pairs)
    identical = 0
    high = 0    # >= 90%
    medium = 0  # >= 50%
    low = 0     # < 50%
    ratios = []
    failed = []

    for idx, name in enumerate(pairs, 1):
        try:
            orig_norm, decomp_norm = load_and_normalize(name, expand_mode)
            ratio = similarity_ratio(orig_norm, decomp_norm)
            ratios.append((name, ratio, len(orig_norm.splitlines()),
                          len(decomp_norm.splitlines())))

            if orig_norm == decomp_norm:
                identical += 1
            elif ratio >= 0.9:
                high += 1
            elif ratio >= 0.5:
                medium += 1
            else:
                low += 1
        except Exception as e:
            failed.append(f'{name}: {e}')

        if idx % 50 == 0:
            print(f'[{idx}/{total}]', flush=True)

    print(f'\n=== Comparison Results ===')
    print(f'Total pairs:    {total}')
    print(f'Identical:      {identical}  ({identical*100//(total or 1)}%)')
    print(f'High (>=90%):   {high}')
    print(f'Medium (>=50%): {medium}')
    print(f'Low (<50%):     {low}')
    if failed:
        print(f'Failed:         {len(failed)}')

    if ratios:
        avg = sum(r for _, r, _, _ in ratios) / len(ratios)
        print(f'Average similarity: {avg:.1%}')

    if stats_mode and ratios:
        print(f'\n=== Worst 30 ===')
        ratios.sort(key=lambda x: x[1])
        for name, ratio, ol, dl in ratios[:30]:
            print(f'  {ratio:5.1%}  {ol:4d}/{dl:4d}  {name}')
        if len(ratios) > 60:
            print(f'  ... ({len(ratios) - 60} more)')
        print(f'\n=== Best 30 ===')
        for name, ratio, ol, dl in ratios[-30:]:
            print(f'  {ratio:5.1%}  {ol:4d}/{dl:4d}  {name}')

    if failed:
        print(f'\n=== Failures ===')
        for f in failed[:10]:
            print(f'  {f}')


if __name__ == '__main__':
    main()
