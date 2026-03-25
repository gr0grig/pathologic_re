"""
Assembler: .asm → .bin
Converts text ASM format (from disassembler or compiler) to Pathologic script binary.

Usage:
  python asm.py input.asm [output.bin]
  python asm.py --folder input_dir output_dir
"""

import os
import re
import sys
import struct

# ── Binary writer helpers ──

def w_uint32(val):
    return struct.pack('<I', val & 0xFFFFFFFF)

def w_int32(val):
    return struct.pack('<i', val)

def w_uint16(val):
    return struct.pack('<H', val & 0xFFFF)

def w_uint8(val):
    return struct.pack('<B', val & 0xFF)

def w_int8(val):
    return struct.pack('<b', val)

def w_float(val):
    return struct.pack('<f', val)

def w_vle_string(s):
    """Write a VLE-length-prefixed string (UTF-8)."""
    encoded = s.encode('utf-8')
    length = len(encoded)
    if length < 0x80:
        return w_uint8(length) + encoded
    else:
        lo = (length & 0x7F) | 0x80
        hi = (length >> 7) & 0xFF
        return w_uint8(lo) + w_uint8(hi) + encoded


# ── Type constants ──

TYPE_MAP = {
    'bool': 1, 'int': 2, 'float': 3, 'string': 4, 'object': 5, 'cvector': 6,
}


# ── String pool builder ──

def _get_strlen_a(data):
    """Get ASCII string length (bytes until null)."""
    for i in range(len(data)):
        if data[i] == 0:
            return i
    return len(data)

def _get_strlen_w(data):
    """Get UTF-16LE string length (chars until null pair)."""
    length = 0
    for i in range(0, len(data) - 1, 2):
        if data[i] != 0 or data[i+1] != 0:
            length += 1
        else:
            break
    return length

def _get_str_from_pool_addr(data):
    """Read a string from pool data, auto-detecting encoding."""
    if len(data) >= 2 and data[0] != 0 and data[1] == 0:
        length = _get_strlen_w(data)
        return data[:length*2].decode('utf-16-le')
    else:
        length = _get_strlen_a(data)
        return data[:length].decode('utf-8', errors='replace')

def _build_offsets_from_raw_pool(pool_bytes):
    """Build string→offset maps from raw pool bytes, split by encoding.
    Returns (data_offsets, func_offsets):
      data_offsets: prefers UTF-16LE offset for data strings (PushS, MovS)
      func_offsets: prefers UTF-8 offset for function names (ObjFunc, TObjFunc)"""
    utf8_map = {}
    utf16le_map = {}
    any_map = {}
    pos = 0
    data = pool_bytes
    while pos < len(data):
        remaining = data[pos:]
        len_a = _get_strlen_a(remaining) + 1
        len_w = _get_strlen_w(remaining) + 1
        if len_a == 1:
            break
        s = _get_str_from_pool_addr(remaining)
        any_map.setdefault(s, pos)
        # Detect encoding: if len_a == 2, it's a single char treated as UTF-16LE
        # Otherwise, check if second byte is 0 (UTF-16LE pattern)
        is_utf16le = (len_a == 2) or (len(remaining) >= 2 and remaining[0] != 0 and remaining[1] == 0)
        if is_utf16le:
            utf16le_map.setdefault(s, pos)
        else:
            utf8_map.setdefault(s, pos)
        advance = len_w * 2 if len_a == 2 else len_a
        pos += advance
    # data_offsets: prefer UTF-16LE, fall back to any
    data_offsets = dict(any_map)
    data_offsets.update(utf16le_map)
    # func_offsets: prefer UTF-8, fall back to any
    func_offsets = dict(any_map)
    func_offsets.update(utf8_map)
    return data_offsets, func_offsets

def build_string_pool(strings, encoding='utf16le'):
    """Build the binary data pool from a list of strings.
    strings: list of str OR list of (encoding_char, str) tuples.
      If tuples, encoding_char is 'A' (ASCII/UTF-8) or 'W' (UTF-16LE).
      If plain strings, the encoding parameter is used for all.
    encoding: default encoding when strings are plain ('utf16le' or 'utf8').
    Returns (pool_bytes, offset_map) where offset_map maps string → offset in pool."""
    pool = bytearray()
    offset_map = {}

    for item in strings:
        if isinstance(item, tuple):
            enc_char, s = item
            use_wide = (enc_char == 'W')
        else:
            s = item
            use_wide = (encoding == 'utf16le')

        offset_map[s] = len(pool)
        if use_wide:
            encoded = s.encode('utf-16-le')
            pool.extend(encoded)
            pool.extend(b'\x00\x00')  # UTF-16LE null terminator
        else:
            encoded = s.encode('utf-8')
            pool.extend(encoded)
            pool.extend(b'\x00')  # UTF-8 null terminator

    return bytes(pool), offset_map


# ── Parse ASM text ──

def parse_asm(text):
    """Parse the text .asm format into structured sections."""
    lines = text.replace('\r\n', '\n').split('\n')

    result = {
        'global_var_count': 0,
        'global_vars': [],      # [(type_id, flag, name_str), ...]
        'strings': [],
        'pool_encoding': 'utf16le',  # default encoding for string pool
        'imports': [],          # [(name, argc), ...]
        'run_op': 0,
        'run_task': 0,
        'tasks': [],            # [(var_types, params, events), ...] where events = [(eid, op, var_types), ...]
        'standalone_events': [],  # [(eid, op, var_types), ...]
        'instructions': [],     # [(addr, text), ...]
    }

    section = None
    current_task = None
    task_dict = {}  # index → (var_types, params, events)

    i = 0
    while i < len(lines):
        line = lines[i]
        stripped = line.strip()
        i += 1

        if not stripped:
            continue

        # Metadata: pool encoding
        m = re.match(r'//\s*@pool_encoding:\s*(\w+)', stripped)
        if m:
            result['pool_encoding'] = m.group(1).lower()
            continue

        # Metadata: raw pool bytes (hex)
        m = re.match(r'//\s*@pool_raw:\s*([0-9a-fA-F]+)', stripped)
        if m:
            result['pool_raw'] = bytes.fromhex(m.group(1))
            continue

        # GlobalVarCount
        m = re.match(r'GlobalVarCount\s*=\s*(\d+)', stripped)
        if m:
            result['global_var_count'] = int(m.group(1))
            section = 'gvars'
            continue

        # G_VAR_N type [name]
        m = re.match(r'G_VAR_(\d+)\s+(\w+)\s*(.*)', stripped)
        if m:
            idx = int(m.group(1))
            vtype = m.group(2).lower()
            vname = m.group(3).strip()
            type_id = TYPE_MAP.get(vtype, 5)
            flag = 1 if vname else 0
            result['global_vars'].append((type_id, flag, vname))
            continue

        # Strings section
        if stripped == 'Strings:':
            section = 'strings'
            continue

        if section == 'strings' and line.startswith('\t'):
            s = line[1:]  # strip leading tab, preserve content
            # Parse optional A:/W: encoding prefix
            if len(s) >= 2 and s[1] == ':' and s[0] in ('A', 'W'):
                enc_char = s[0]
                s = s[2:]
                result['strings'].append((enc_char, s))
            else:
                result['strings'].append(s)
            continue

        # Import section
        if stripped == 'Import:':
            section = 'imports'
            continue

        if section == 'imports' and line.startswith('\t'):
            m = re.match(r'\t(.+?)\s+\((\d+)\s+args\)', line)
            if m:
                result['imports'].append((m.group(1), int(m.group(2))))
            continue

        # RunOp
        m = re.match(r'RunOp\s*=\s*(0x[0-9a-fA-F]+|\d+)', stripped)
        if m:
            val = m.group(1)
            result['run_op'] = int(val, 16) if val.startswith('0x') else int(val)
            section = None
            continue

        # RunTask
        m = re.match(r'RunTask\s*=\s*(\d+)', stripped)
        if m:
            result['run_task'] = int(m.group(1))
            continue

        # GlobalTasks section
        if stripped.startswith('GlobalTasks'):
            section = 'tasks'
            continue

        # GTASK_N ...
        m = re.match(r'GTASK_(\d+)\s*(.*)', stripped)
        if m:
            section = 'tasks'
            tid = int(m.group(1))
            rest = m.group(2)
            # Parse Vars
            vm = re.search(r'Vars\s*=\s*\(([^)]*)\)', rest)
            if vm:
                types_str = vm.group(1).strip()
                var_types = [TYPE_MAP.get(t.strip().lower(), 5) for t in types_str.split(',') if t.strip()] if types_str else []
            else:
                var_types = []
            # Parse Params
            pm = re.search(r'Params\s*=\s*(\d+)', rest)
            params = int(pm.group(1)) if pm else 0
            current_task = tid
            task_dict[tid] = (var_types, params, [])
            continue

        # EVENT_N Op = 0xNN Vars = (...)
        em = re.match(r'EVENT_(\d+)\s+Op\s*=\s*(0x[0-9a-fA-F]+|\d+)\s+Vars\s*=\s*\(([^)]*)\)', stripped)
        if em:
            eid = int(em.group(1))
            op_val = em.group(2)
            op = int(op_val, 16) if op_val.startswith('0x') else int(op_val)
            vars_str = em.group(3).strip()
            ev_types = [TYPE_MAP.get(t.strip().lower(), 5) for t in vars_str.split(',') if t.strip()] if vars_str else []
            if section == 'standalone_events':
                result['standalone_events'].append((eid, op, ev_types))
            elif current_task is not None:
                task_dict[current_task][2].append((eid, op, ev_types))
            continue

        # Events: (standalone)
        if stripped == 'Events:':
            section = 'standalone_events'
            current_task = None
            continue

        # Instructions: 0xN: text
        m = re.match(r'(0x[0-9a-fA-F]+):\s*(.*)', stripped)
        if m:
            section = 'instructions'
            addr = int(m.group(1), 16)
            inst_text = m.group(2)
            # Handle multi-line string literals: if Push(" is unclosed, read continuation lines
            # Strip @poff annotation for the endswith check
            inst_check = re.sub(r'\s*//\s*@poff=\d+$', '', inst_text)
            if 'Push("' in inst_text and not inst_check.endswith('")'):
                while i < len(lines):
                    cont_line = lines[i]
                    i += 1
                    inst_text += '\n' + cont_line
                    if '")' in cont_line:
                        break
                inst_text = inst_text.strip()
            result['instructions'].append((addr, inst_text))
            continue

    # Build task list in order
    if task_dict:
        max_tid = max(task_dict.keys())
        for tid in range(max_tid + 1):
            if tid in task_dict:
                result['tasks'].append(task_dict[tid])
            else:
                result['tasks'].append(([], 0, []))

    return result


# ── Parse stack reference ──

# Regex that matches a full Stack[...] reference (handles nested brackets like Tasks[-1])
SREF = r'Stack\[(?:[^\[\]]|\[[^\]]*\])*\]'
# Short alias for Tasks[-1].StackPointer | StackPtr
TP = r'(?:Tasks\[-1\]\.StackPointer|StackPtr)'

def parse_stack_ref(s):
    """Parse a stack reference, return (value, is_task_var).
    Stack[-N] → (N, False)
    Stack[N + Tasks[-1].StackPointer] → (N, True)
    Stack[N + StackPtr] → (N, True)
    """
    m = re.match(r'Stack\[-(\d+)\]$', s)
    if m:
        return int(m.group(1)), False

    m = re.match(r'Stack\[(\d+)\s*\+\s*(?:Tasks\[-1\]\.StackPointer|StackPtr)\]$', s)
    if m:
        return int(m.group(1)), True

    raise ValueError(f'Cannot parse stack ref: {s!r}')


def split_binop(expr, op):
    """Split 'V1 OP V2' on ' OP ' respecting bracket depth."""
    target = f' {op} '
    depth = 0
    for i in range(len(expr)):
        if expr[i] == '[':
            depth += 1
        elif expr[i] == ']':
            depth -= 1
        elif depth == 0 and expr[i:i+len(target)] == target:
            return expr[:i].strip(), expr[i+len(target):].strip()
    return None


# ── Parse function arguments ──

def _parse_func_args(args_str):
    """Parse function argument list like 'Stack[-1], Stack[-0]T, Stack[2 + StackPtr]' into [(var, task), ...].
    Suffix T on Stack[-N]T means Task=1."""
    fvars = []
    if not args_str:
        return fvars
    for arg in args_str.split(','):
        arg = arg.strip()
        # Stack[-N]T — task flag
        m = re.match(r'Stack\[-(\d+)\]T', arg)
        if m:
            fvars.append((int(m.group(1)), 1))
            continue
        # Stack[-N] — regular
        m = re.match(r'Stack\[-(\d+)\]', arg)
        if m:
            fvars.append((int(m.group(1)), 0))
            continue
        # Stack[N + StackPtr] — task var
        m = re.match(rf'Stack\[(\d+) \+ {TP}\]', arg)
        if m:
            fvars.append((int(m.group(1)), 1))
            continue
        fvars.append((1, 0))  # fallback
    return fvars


# ── Instruction assembler ──

def assemble_instruction(text, string_offsets, import_table, task_info, func_name_offsets=None):
    """Convert a single instruction text to (opcode, operands_bytes).
    Returns (opcode_uint16, operands_bytes).
    func_name_offsets: separate offset map for ObjFunc/TObjFunc method names (last occurrence in pool)."""

    # Extract // @poff=N annotation if present (exact pool offset from disassembler)
    poff_override = None
    poff_m = re.search(r'\s*//\s*@poff=(\d+)$', text)
    if poff_m:
        poff_override = int(poff_m.group(1))
        text = text[:poff_m.start()]

    # ── Mov variants ──

    # Stack[-V] = Stack[-V]
    m = re.match(r'Stack\[-(\d+)\] = Stack\[-(\d+)\]$', text)
    if m:
        return 0x00, w_uint32(int(m.group(1))) + w_uint32(int(m.group(2)))

    # Stack[-V] = (bool) V
    m = re.match(r'Stack\[-(\d+)\] = \(bool\)\s*(\d+)$', text)
    if m:
        return 0x01, w_uint32(int(m.group(1))) + w_uint8(int(m.group(2)))

    # Stack[-V] = (int) V  (may be negative using (int)V format — also covers (int)V)
    # Also handle "Stack[-V] = (int)V" without space
    m = re.match(r'Stack\[-(\d+)\] = \(int\)\s*(-?\d+)$', text)
    if m:
        return 0x02, w_uint32(int(m.group(1))) + w_int32(int(m.group(2)))

    # Stack[-V] = (float) V
    m = re.match(r'Stack\[-(\d+)\] = \(float\)\s*(-?[\d.]+(?:e[+-]?\d+)?)$', text)
    if m:
        return 0x03, w_uint32(int(m.group(1))) + w_float(float(m.group(2)))

    # Stack[-V] = "string"
    m = re.match(r'Stack\[-(\d+)\] = "(.*)"$', text)
    if m:
        var_out = int(m.group(1))
        s = m.group(2)
        offset = poff_override if poff_override is not None else string_offsets.get(s, 0)
        return 0x04, w_uint32(var_out) + w_uint32(offset)

    # Stack[-V] = CVector(x, y, z)
    m = re.match(r'Stack\[-(\d+)\] = CVector\((-?[\d.]+(?:e[+-]?\d+)?),\s*(-?[\d.]+(?:e[+-]?\d+)?),\s*(-?[\d.]+(?:e[+-]?\d+)?)\)$', text)
    if m:
        return 0x05, w_uint32(int(m.group(1))) + w_float(float(m.group(2))) + w_float(float(m.group(3))) + w_float(float(m.group(4)))

    # Stack[-V] = Stack[V + Tasks[-1].StackPointer] (MovT: read from task stack to regular)
    m = re.match(rf'Stack\[-(\d+)\] = Stack\[(\d+) \+ {TP}\]$', text)
    if m:
        return 0x06, w_uint32(int(m.group(2))) + w_uint32(int(m.group(1)))

    # ── TMov variants (write to task stack) ──

    # Stack[V + Tasks[-1].StackPointer] = Stack[-V]
    m = re.match(rf'Stack\[(\d+) \+ {TP}\] = Stack\[-(\d+)\]$', text)
    if m:
        return 0x07, w_uint32(int(m.group(2))) + w_uint32(int(m.group(1)))

    # Stack[V + Tasks[-1].StackPointer] = (bool)V
    m = re.match(rf'Stack\[(\d+) \+ {TP}\] = \(bool\)\s*(\d+)$', text)
    if m:
        return 0x08, w_uint32(int(m.group(1))) + w_uint8(int(m.group(2)))

    # Stack[V + Tasks[-1].StackPointer] = (int)V
    m = re.match(rf'Stack\[(\d+) \+ {TP}\] = \(int\)\s*(-?\d+)$', text)
    if m:
        return 0x09, w_uint32(int(m.group(1))) + w_int32(int(m.group(2)))

    # Stack[V + Tasks[-1].StackPointer] = (float)V
    m = re.match(rf'Stack\[(\d+) \+ {TP}\] = \(float\)\s*(-?[\d.]+(?:e[+-]?\d+)?)$', text)
    if m:
        return 0x0A, w_uint32(int(m.group(1))) + w_float(float(m.group(2)))

    # Stack[V + Tasks[-1].StackPointer] = "string"
    m = re.match(rf'Stack\[(\d+) \+ {TP}\] = "(.*)"$', text)
    if m:
        var_out = int(m.group(1))
        s = m.group(2)
        offset = poff_override if poff_override is not None else string_offsets.get(s, 0)
        return 0x0B, w_uint32(var_out) + w_uint32(offset)

    # Stack[V + Tasks[-1].StackPointer] = CVector(x, y, z)
    m = re.match(rf'Stack\[(\d+) \+ {TP}\] = CVector\((-?[\d.]+(?:e[+-]?\d+)?),\s*(-?[\d.]+(?:e[+-]?\d+)?),\s*(-?[\d.]+(?:e[+-]?\d+)?)\)$', text)
    if m:
        return 0x0C, w_uint32(int(m.group(1))) + w_float(float(m.group(2))) + w_float(float(m.group(3))) + w_float(float(m.group(4)))

    # Stack[V + Tasks[-1].StackPointer] = Stack[V + Tasks[-1].StackPointer] (TMovT)
    m = re.match(rf'Stack\[(\d+) \+ {TP}\] = Stack\[(\d+) \+ {TP}\]$', text)
    if m:
        return 0x0D, w_uint32(int(m.group(2))) + w_uint32(int(m.group(1)))

    # ── SetNull variants ──

    # Stack[-V] = 0  (SetNull)
    m = re.match(r'Stack\[-(\d+)\] = 0$', text)
    if m:
        return 0x1D, w_uint32(int(m.group(1)))

    # Stack[V + Tasks[-1].StackPointer] = 0  (SetNullT)
    m = re.match(rf'Stack\[(\d+) \+ {TP}\] = 0$', text)
    if m:
        return 0x1E, w_uint32(int(m.group(1)))

    # ── Stack[V + ...] = NULL  →  SetNull variants ──
    m = re.match(r'Stack\[-(\d+)\] = NULL$', text)
    if m:
        return 0x1D, w_uint32(int(m.group(1)))

    m = re.match(rf'Stack\[(\d+) \+ {TP}\] = NULL$', text)
    if m:
        return 0x1E, w_uint32(int(m.group(1)))

    # ── Jump/JumpB ──

    # GOTO 0xADDR
    m = re.match(r'GOTO (0x[0-9a-fA-F]+|\d+)$', text)
    if m:
        val = m.group(1)
        addr = int(val, 16) if val.startswith('0x') else int(val)
        return 0x0E, w_uint32(addr)

    # IF (Stack[-V] == B) GOTO ADDR; Pop(N)
    m = re.match(r'IF \(Stack\[-(\d+)\] == (\d+)\) GOTO (0x[0-9a-fA-F]+|\d+); Pop\((\d+)\)$', text)
    if m:
        lvar = int(m.group(1))
        bval = int(m.group(2))
        tgt = m.group(3)
        addr = int(tgt, 16) if tgt.startswith('0x') else int(tgt)
        pop = int(m.group(4))
        return 0x0F, w_uint32(lvar) + w_uint32(addr) + w_uint8(bval) + w_uint16(pop)

    # ── Push variants ──

    # Push( Stack[-V] )  — note spaces around Stack
    m = re.match(r'Push\(\s*Stack\[-(\d+)\]\s*\)$', text)
    if m:
        return 0x10, w_uint32(int(m.group(1)))

    # Push( Stack[V + Tasks[-1].StackPointer] )  (PushT)
    m = re.match(rf'Push\(\s*Stack\[(\d+) \+ {TP}\]\s*\)$', text)
    if m:
        return 0x15, w_uint32(int(m.group(1)))

    # Push((bool) V)
    m = re.match(r'Push\(\(bool\)\s*(\d+)\)$', text)
    if m:
        return 0x11, w_uint8(int(m.group(1)))

    # Push((int) V)
    m = re.match(r'Push\(\(int\)\s*(-?\d+)\)$', text)
    if m:
        return 0x12, w_int32(int(m.group(1)))

    # Push((float)V)
    m = re.match(r'Push\(\(float\)\s*(-?[\d.]+(?:e[+-]?\d+)?)\)$', text)
    if m:
        return 0x13, w_float(float(m.group(1)))

    # Push("string") — may contain newlines
    m = re.match(r'Push\("(.*)"\)$', text, re.DOTALL)
    if m:
        s = m.group(1)
        offset = poff_override if poff_override is not None else string_offsets.get(s, 0)
        return 0x14, w_uint32(offset)

    # Push(CVector(x, y, z)) — PushVec
    m = re.match(r'Push\(CVector\((-?[\d.]+(?:e[+-]?\d+)?),\s*(-?[\d.]+(?:e[+-]?\d+)?),\s*(-?[\d.]+(?:e[+-]?\d+)?)\)\)$', text)
    if m:
        return 0x16, w_float(float(m.group(1))) + w_float(float(m.group(2))) + w_float(float(m.group(3)))

    # PushEmpty(type, type, ...) — PushV
    m = re.match(r'PushEmpty\(([^)]*)\)$', text)
    if m:
        types_str = m.group(1).strip()
        if types_str:
            type_names = [t.strip().lower() for t in types_str.split(',')]
            type_bytes = bytes([TYPE_MAP.get(t, 5) for t in type_names])
        else:
            type_bytes = b''
        return 0x17, w_uint32(len(type_bytes)) + type_bytes

    # PushEmpty(int, int) format — also PushV
    m = re.match(r'PushEmpty\((.+)\)$', text)
    if m:
        types_str = m.group(1).strip()
        type_names = [t.strip().lower() for t in types_str.split(',')]
        type_bytes = bytes([TYPE_MAP.get(t, 5) for t in type_names])
        return 0x17, w_uint32(len(type_bytes)) + type_bytes

    # Push(CvectorIndex(Stack[-V], I)) — PushE (regular stack)
    m = re.match(r'Push\(CvectorIndex\(Stack\[-(\d+)\],\s*(-?\d+)\)\)$', text)
    if m:
        var_in = int(m.group(1))
        index = int(m.group(2))
        # PushE: VarIn(4) + TaskFlag(1) + Index(1) + pad(2) + pad(1)
        return 0x18, w_uint32(var_in) + w_uint8(0) + w_int8(index) + w_uint8(0) + w_uint8(0) + w_int8(0)

    # Push(CvectorIndex(Stack[V + Tasks[-1].StackPointer], I)) — PushE (task stack)
    m = re.match(rf'Push\(CvectorIndex\(Stack\[(\d+) \+ {TP}\],\s*(-?\d+)\)\)$', text)
    if m:
        var_in = int(m.group(1))
        index = int(m.group(2))
        # PushE: VarIn(4) + TaskFlag(1) + Index(1) + pad(2) + pad(1)
        return 0x18, w_uint32(var_in) + w_uint8(1) + w_int8(index) + w_uint8(0) + w_uint8(0) + w_int8(0)

    # Push(GlobalVars[V]) — PushGE
    m = re.match(r'Push\(GlobalVars\[(\d+)\]\)$', text)
    if m:
        return 0x19, w_uint32(int(m.group(1)))

    # ── Pop variants ──

    # Pop(N)
    m = re.match(r'Pop\((\d+)\)$', text)
    if m:
        return 0x1A, w_uint32(int(m.group(1)))

    # CvectorIndex(Stack[-V], I) = Stack[-1]; — PopE (regular stack)
    m = re.match(r'CvectorIndex\(Stack\[-(\d+)\],\s*(\d+)\) = Stack\[-1\];$', text)
    if m:
        var_out = int(m.group(1))
        index = int(m.group(2))
        return 0x1B, w_uint32(var_out) + w_uint32(index) + w_uint8(0)

    # CvectorIndex(Stack[V + Tasks[-1].StackPointer], I) = Stack[-1]; — PopE (task var)
    m = re.match(rf'CvectorIndex\(Stack\[(\d+) \+ {TP}\],\s*(\d+)\) = Stack\[-1\];$', text)
    if m:
        var_out = int(m.group(1))
        index = int(m.group(2))
        return 0x1B, w_uint32(var_out) + w_uint32(index) + w_uint8(1)

    # GlobalVars[V] = Stack[-1]; Pop(N) — PopGE
    m = re.match(r'GlobalVars\[(\d+)\] = Stack\[-1\]; Pop\((\d+)\)$', text)
    if m:
        var_out = int(m.group(1))
        pop_n = int(m.group(2))
        # Flags: bit 0 = no pop if set
        flags = 0 if pop_n == 1 else 1
        return 0x1C, w_uint32(var_out) + w_uint8(flags)

    # ── Comparison ops (push bool result) ──
    # Pop(P); Push((bool) V1 == V2)
    cmp_patterns = [
        ('==', 0x27),  # Eq
        ('!=', 0x28),  # Neq
        ('<',  0x29),  # LT
        ('>',  0x2A),  # GT
        ('<=', 0x2B),  # LE
        ('>=', 0x2C),  # GE
    ]

    for op_str, opcode in cmp_patterns:
        escaped = re.escape(op_str)
        # All comparison ops use: Pop(P); Push((bool) V1 OP V2)
        pat = rf'Pop\((\d+)\); Push\(\(bool\) ({SREF}) {escaped} ({SREF}|0)\)$'
        m = re.match(pat, text)
        if m:
            pop_n = int(m.group(1))
            v1_str = m.group(2).strip()
            v2_str = m.group(3).strip()
            # Check it's not a == 0 or != 0 pattern (NullEq/NullNeq/Not)
            if v2_str == '0' and op_str in ('==', '!='):
                break  # Handle NullEq/NullNeq below
            var1, tv1 = parse_stack_ref(v1_str)
            var2, tv2 = parse_stack_ref(v2_str)
            task_byte = pop_n & 0x3F
            if tv1:
                task_byte |= 0x80
            if tv2:
                task_byte |= 0x40
            return opcode, w_uint32(var1) + w_uint32(var2) + w_int8(task_byte if task_byte < 128 else task_byte - 256)

    # ── NullEq: Pop(P); PushNull((bool) V == 0) ──
    m = re.match(rf'Pop\((\d+)\); PushNull\(\(bool\) ({SREF}) == 0\)$', text)
    if m:
        pop_n = int(m.group(1))
        v_str = m.group(2).strip()
        var, tv = parse_stack_ref(v_str)
        task_byte = pop_n & 0x7F
        if tv:
            task_byte |= 0x80
        return 0x2D, w_uint32(var) + w_int8(task_byte if task_byte < 128 else task_byte - 256)

    # ── Not: Pop(P); Push((bool) V == 0) ──
    m = re.match(rf'Pop\((\d+)\); Push\(\(bool\) ({SREF}) == 0\)$', text)
    if m:
        pop_n = int(m.group(1))
        v_str = m.group(2).strip()
        var, tv = parse_stack_ref(v_str)
        task_byte = pop_n & 0x7F
        if tv:
            task_byte |= 0x80
        return 0x30, w_uint32(var) + w_int8(task_byte if task_byte < 128 else task_byte - 256)

    # ── NullNeq: Pop(P); Push(( V != 0 )  or  Pop(P); Push((bool) V != 0) ──
    m = re.match(rf'Pop\((\d+)\); Push\(\(\s*({SREF}) != 0\s*\)$', text)
    if not m:
        m = re.match(rf'Pop\((\d+)\); Push\(\(bool\) ({SREF}) != 0\)$', text)
    if m:
        pop_n = int(m.group(1))
        v_str = m.group(2).strip()
        var, tv = parse_stack_ref(v_str)
        task_byte = pop_n & 0x7F
        if tv:
            task_byte |= 0x80
        return 0x2E, w_uint32(var) + w_int8(task_byte if task_byte < 128 else task_byte - 256)

    # ── Neg: Pop(P); Push(( -V) ──
    m = re.match(rf'Pop\((\d+)\); Push\(\(\s*-({SREF})\)$', text)
    if m:
        pop_n = int(m.group(1))
        v_str = m.group(2).strip()
        var, tv = parse_stack_ref(v_str)
        task_byte = pop_n & 0x7F
        if tv:
            task_byte |= 0x80
        return 0x2F, w_uint32(var) + w_int8(task_byte if task_byte < 128 else task_byte - 256)

    # ── Math unary (push result): Sqrt, Sin, Cos, ASin ──
    math_unary = [
        ('Sqrt', 0x43),
        ('Sin',  0x45),
        ('Cos',  0x47),
        ('ASin', 0x49),
    ]
    for fname, opcode in math_unary:
        pat = rf'Pop\((\d+)\); Push\({fname}\((.+?)\)\)$'
        m = re.match(pat, text)
        if m:
            pop_n = int(m.group(1))
            v_str = m.group(2).strip()
            var, tv = parse_stack_ref(v_str)
            task_byte = pop_n & 0x7F
            if tv:
                task_byte |= 0x80
            return opcode, w_uint32(var) + w_int8(task_byte if task_byte < 128 else task_byte - 256)

    # ── Pow (binary, push result) ──
    m = re.match(r'Pop\((\d+)\); Push\(Pow\((.+?),\s*(.+?)\)\);$', text)
    if m:
        pop_n = int(m.group(1))
        v1_str = m.group(2).strip()
        v2_str = m.group(3).strip()
        var1, tv1 = parse_stack_ref(v1_str)
        var2, tv2 = parse_stack_ref(v2_str)
        task_byte = pop_n & 0x3F
        if tv1:
            task_byte |= 0x80
        if tv2:
            task_byte |= 0x40
        return 0x4B, w_uint32(var1) + w_uint32(var2) + w_int8(task_byte if task_byte < 128 else task_byte - 256)

    # ── 3-operand binary ops (op2 variants) ──
    # Format: VarOut = V1 OP V2; Pop(P);
    binop2_ops = [
        ('==',  0x39),   # Eq2 — check multi-char ops first
        ('!=',  0x3A),   # Neq2
        ('<=',  0x3D),   # LE2
        ('>=',  0x3E),   # GE2
        ('+',   0x31),   # Add2
        ('-',   0x32),   # Sub2
        ('*',   0x33),   # Mult2
        ('/',   0x34),   # Div2
        ('%',   0x35),   # Mod2
        ('&',   0x36),   # And2
        ('|',   0x37),   # Or2
        ('^',   0x38),   # Xor2
        ('<',   0x3B),   # LT2
        ('>',   0x3C),   # GT2
    ]

    # Match: VarOut = expr; Pop(P);
    m = re.match(rf'({SREF}) = (.+); Pop\((\d+)\);$', text)
    if m:
        vout_str = m.group(1).strip()
        expr = m.group(2).strip()
        pop_n = int(m.group(3))
        for op_str, opcode in binop2_ops:
            result = split_binop(expr, op_str)
            if result:
                v1_str, v2_str = result
                try:
                    var1, tv1 = parse_stack_ref(v1_str)
                    var2, tv2 = parse_stack_ref(v2_str)
                    var_out, tv_out = parse_stack_ref(vout_str)
                except ValueError:
                    continue
                task_byte = pop_n & 0x1F
                if tv1:
                    task_byte |= 0x80
                if tv2:
                    task_byte |= 0x40
                if tv_out:
                    task_byte |= 0x20
                return opcode, w_uint32(var1) + w_uint32(var2) + w_uint32(var_out) + w_int8(task_byte if task_byte < 128 else task_byte - 256)

    # ── 2-operand unary ops2: NullEq2, NullNeq2, Neg2, Not2 ──

    # VarOut = V == 0; Pop(P);   — NullEq2 (0x3F)
    m = re.match(rf'({SREF}) = ({SREF}) == 0; Pop\((\d+)\);$', text)
    if m:
        vout_str = m.group(1).strip()
        v_str = m.group(2).strip()
        pop_n = int(m.group(3))
        var, tv = parse_stack_ref(v_str)
        var_out, tv_out = parse_stack_ref(vout_str)
        task_byte = pop_n & 0x3F
        if tv:
            task_byte |= 0x80
        if tv_out:
            task_byte |= 0x40
        return 0x3F, w_uint32(var) + w_uint32(var_out) + w_int8(task_byte if task_byte < 128 else task_byte - 256)

    # VarOut = V != 0; Pop(P);  — NullNeq2
    m = re.match(rf'({SREF}) = ({SREF}) != 0; Pop\((\d+)\);$', text)
    if m:
        vout_str = m.group(1).strip()
        v_str = m.group(2).strip()
        pop_n = int(m.group(3))
        var, tv = parse_stack_ref(v_str)
        var_out, tv_out = parse_stack_ref(vout_str)
        task_byte = pop_n & 0x3F
        if tv:
            task_byte |= 0x80
        if tv_out:
            task_byte |= 0x40
        return 0x40, w_uint32(var) + w_uint32(var_out) + w_int8(task_byte if task_byte < 128 else task_byte - 256)

    # VarOut = -V; Pop(P);  — Neg2
    m = re.match(rf'({SREF}) = -({SREF}); Pop\((\d+)\);$', text)
    if m:
        vout_str = m.group(1).strip()
        v_str = m.group(2).strip()
        pop_n = int(m.group(3))
        var, tv = parse_stack_ref(v_str)
        var_out, tv_out = parse_stack_ref(vout_str)
        task_byte = pop_n & 0x3F
        if tv:
            task_byte |= 0x80
        if tv_out:
            task_byte |= 0x40
        return 0x41, w_uint32(var) + w_uint32(var_out) + w_int8(task_byte if task_byte < 128 else task_byte - 256)

    # VarOut = !V; Pop(P);  — Not2
    _not2_pat = '(' + SREF + r') = !(' + SREF + r'); Pop\((\d+)\);$'
    m = re.match(_not2_pat, text)
    if m:
        vout_str = m.group(1).strip()
        v_str = m.group(2).strip()
        pop_n = int(m.group(3))
        var, tv = parse_stack_ref(v_str)
        var_out, tv_out = parse_stack_ref(vout_str)
        task_byte = pop_n & 0x3F
        if tv:
            task_byte |= 0x80
        if tv_out:
            task_byte |= 0x40
        return 0x42, w_uint32(var) + w_uint32(var_out) + w_int8(task_byte if task_byte < 128 else task_byte - 256)

    # ── Math unary ops2: Sqrt2, Sin2, Cos2, ASin2 ──
    math_unary2 = [
        ('Sqrt', 0x44),
        ('Sin',  0x46),
        ('Cos',  0x48),
        ('ASin', 0x4A),
    ]
    for fname, opcode in math_unary2:
        pat = rf'(.+?) = {fname}\((.+?)\); Pop\((\d+)\);$'
        m = re.match(pat, text)
        if m:
            vout_str = m.group(1).strip()
            v_str = m.group(2).strip()
            pop_n = int(m.group(3))
            var, tv = parse_stack_ref(v_str)
            var_out, tv_out = parse_stack_ref(vout_str)
            task_byte = pop_n & 0x3F
            if tv:
                task_byte |= 0x80
            if tv_out:
                task_byte |= 0x40
            return opcode, w_uint32(var) + w_uint32(var_out) + w_int8(task_byte if task_byte < 128 else task_byte - 256)

    # ── Pow2 ──
    m = re.match(r'(.+?) = Pow\((.+?),\s*(.+?)\); Pop\((\d+)\);$', text)
    if m:
        vout_str = m.group(1).strip()
        v1_str = m.group(2).strip()
        v2_str = m.group(3).strip()
        pop_n = int(m.group(4))
        var1, tv1 = parse_stack_ref(v1_str)
        var2, tv2 = parse_stack_ref(v2_str)
        var_out, tv_out = parse_stack_ref(vout_str)
        task_byte = pop_n & 0x1F
        if tv1:
            task_byte |= 0x80
        if tv2:
            task_byte |= 0x40
        if tv_out:
            task_byte |= 0x20
        return 0x4C, w_uint32(var1) + w_uint32(var2) + w_uint32(var_out) + w_int8(task_byte if task_byte < 128 else task_byte - 256)

    # ── FuncExist: Pop(P); Push(IsFuncExist(V1, V2, V3)) ──
    m = re.match(r'Pop\((\d+)\); Push\(IsFuncExist\((.+?),\s*(.+?),\s*(.+?)\)\)$', text)
    if m:
        pop_n = int(m.group(1))
        v1_str = m.group(2).strip()
        v2_str = m.group(3).strip()
        v3_str = m.group(4).strip()
        var1, tv1 = parse_stack_ref(v1_str)
        var2, tv2 = parse_stack_ref(v2_str)
        var3, tv3 = parse_stack_ref(v3_str)
        task_byte = pop_n & 0x1F
        if tv1:
            task_byte |= 0x80
        if tv2:
            task_byte |= 0x40
        if tv3:
            task_byte |= 0x20
        return 0x56, w_uint32(var1) + w_uint32(var2) + w_uint32(var3) + w_int8(task_byte if task_byte < 128 else task_byte - 256)

    # ── FuncExist2: VarOut = FuncExist2(V1, V2, V3) ──
    m = re.match(r'(.+?) = FuncExist2\((.+?),\s*(.+?),\s*(.+?)\)$', text)
    if m:
        vout_str = m.group(1).strip()
        v1_str = m.group(2).strip()
        v2_str = m.group(3).strip()
        v3_str = m.group(4).strip()
        var1, tv1 = parse_stack_ref(v1_str)
        var2, tv2 = parse_stack_ref(v2_str)
        var3, tv3 = parse_stack_ref(v3_str)
        var_out, tv_out = parse_stack_ref(vout_str)
        task_byte = 0
        if tv1:
            task_byte |= 0x80
        if tv2:
            task_byte |= 0x40
        if tv3:
            task_byte |= 0x20
        if tv_out:
            task_byte |= 0x10
        return 0x57, w_uint32(var1) + w_uint32(var2) + w_uint32(var3) + w_uint32(var_out) + w_int8(task_byte if task_byte < 128 else task_byte - 256)

    # ── Call ──
    m = re.match(r'Call (0x[0-9a-fA-F]+|\d+)$', text)
    if m:
        val = m.group(1)
        addr = int(val, 16) if val.startswith('0x') else int(val)
        return 0x4D, w_uint32(addr)

    # ── Return ──
    m = re.match(r'Return\(\); Pop\((\d+)\)$', text)
    if m:
        return 0x4E, w_uint32(int(m.group(1)))

    # ── TaskCall: Push(-offset, count); TaskCall(task_id) ──
    m = re.match(r'Push\(-(\d+),\s*(\d+)\); TaskCall\((\d+)\)$', text)
    if m:
        task_id = int(m.group(3))
        return 0x4F, w_uint32(task_id)

    # ── TaskReturn: Pop(-offset, count); TaskReturn ──
    m = re.match(r'Pop\(-(\d+),\s*(\d+)\); TaskReturn$', text)
    if m:
        return 0x50, b''

    # ── Func: @ name(args) ──
    m = re.match(r'@ (\w+)\(([^)]*)\)$', text)
    if m:
        name = m.group(1)
        args_str = m.group(2).strip()

        # Parse args first to know argc
        fvars = _parse_func_args(args_str)
        argc = len(fvars)

        # Find import index — match by name AND arg count
        func_index = None
        for idx, (iname, iargc) in enumerate(import_table):
            if iname == name and iargc == argc:
                func_index = idx
                break
        # Fallback: match by name only (for cases where argc might differ)
        if func_index is None:
            for idx, (iname, iargc) in enumerate(import_table):
                if iname == name:
                    func_index = idx
                    break
        if func_index is None:
            raise ValueError(f'Unknown import function: {name}')

        operands = w_uint32(func_index)
        for var, task in fvars:
            operands += w_uint32(var) + w_uint8(task)
        return 0x51, operands

    # ── TObjFunc: @@@ name(args); Obj=N ──
    m = re.match(r'@@@ (\w+)\(([^)]*)\)(?:;\s*Obj=(\d+))?$', text)
    if m:
        name = m.group(1)
        args_str = m.group(2).strip()
        obj_var = int(m.group(3)) if m.group(3) else 0
        if poff_override is not None:
            name_offset = poff_override
        else:
            fn_offsets = func_name_offsets if func_name_offsets else string_offsets
            name_offset = fn_offsets.get(name, 0)
        fvars = _parse_func_args(args_str)
        operands = w_uint32(obj_var) + w_uint32(name_offset) + w_uint32(len(fvars))
        for var, task in fvars:
            operands += w_uint32(var) + w_uint8(task)
        return 0x53, operands

    # ── ObjFunc: @@ name(args); Obj=N ──
    m = re.match(r'@@ (\w+)\(([^)]*)\)(?:;\s*Obj=(\d+))?$', text)
    if m:
        name = m.group(1)
        args_str = m.group(2).strip()
        obj_var = int(m.group(3)) if m.group(3) else 0
        if poff_override is not None:
            name_offset = poff_override
        else:
            fn_offsets = func_name_offsets if func_name_offsets else string_offsets
            name_offset = fn_offsets.get(name, 0)
        fvars = _parse_func_args(args_str)
        operands = w_uint32(obj_var) + w_uint32(name_offset) + w_uint32(len(fvars))
        for var, task in fvars:
            operands += w_uint32(var) + w_uint8(task)
        return 0x52, operands

    # ── EventEnable/EventDisable ──
    m = re.match(r'EventEnable\((\d+)\)$', text)
    if m:
        return 0x54, w_uint32(int(m.group(1)))

    m = re.match(r'EventDisable\((\d+)\)$', text)
    if m:
        return 0x55, w_uint32(int(m.group(1)))

    # ── NEW_1: VarOut = NEW1(V1); Pop(P) ──
    m = re.match(r'(.+?) = NEW1\((.+?)\); Pop\((\d+)\)$', text)
    if m:
        vout_str = m.group(1).strip()
        v_str = m.group(2).strip()
        pop_n = int(m.group(3))
        var_in, tv_in = parse_stack_ref(v_str)
        var_out, tv_out = parse_stack_ref(vout_str)
        task_byte = pop_n & 0x3F
        if tv_in:
            task_byte |= 0x80
        if tv_out:
            task_byte |= 0x40
        return 0x4E, w_uint32(var_in) + w_uint32(var_out) + w_int8(task_byte if task_byte < 128 else task_byte - 256)

    # ── Call2 (NEW_2) ──
    m = re.match(r'Call2 (0x[0-9a-fA-F]+|\d+)$', text)
    if m:
        val = m.group(1)
        addr = int(val, 16) if val.startswith('0x') else int(val)
        return 0x4E, w_uint32(addr)  # Non-ALPHA only

    # ── Fallback: 2-operand binary ops (retry with careful parsing) ──
    # Pop(P); Push(V1 OP V2);
    # Handle carefully to avoid ambiguity between & and &&, | and ||
    m = re.match(r'Pop\((\d+)\); Push\((.+)\);$', text)
    if m:
        pop_n = int(m.group(1))
        inner = m.group(2).strip()

        # Try each operator
        ops_ordered = [
            ('&&', 0x24),   # And — must check before &
            ('||', 0x25),   # Or — must check before |
            ('^',  0x26),   # Xor
            ('&',  0x24),   # Also And (single & in disasm output)
            ('|',  0x25),   # Also Or (single | in disasm output)
            ('+',  0x1F),   # Add
            ('-',  0x20),   # Sub
            ('*',  0x21),   # Mult
            ('/',  0x22),   # Div
            ('%',  0x23),   # Mod
        ]

        for op_str, opcode in ops_ordered:
            # Split on operator respecting bracket depth
            result = split_binop(inner, op_str)
            if result:
                v1_str, v2_str = result
                try:
                    var1, tv1 = parse_stack_ref(v1_str)
                    var2, tv2 = parse_stack_ref(v2_str)
                except ValueError:
                    continue
                task_byte = pop_n & 0x3F
                if tv1:
                    task_byte |= 0x80
                if tv2:
                    task_byte |= 0x40
                return opcode, w_uint32(var1) + w_uint32(var2) + w_int8(task_byte if task_byte < 128 else task_byte - 256)

    # ── PushAsType(V) ── (PushT opcode 0x15)
    m = re.match(r'PushAsType\((\d+)\)$', text)
    if m:
        return 0x15, w_uint32(int(m.group(1)))

    raise ValueError(f'Cannot assemble instruction: {text!r}')


# ── Assemble full binary ──

def assemble(parsed, is_alpha=True):
    """Assemble parsed ASM data into binary .bin format."""

    # Build string pool — use raw bytes if available, otherwise reconstruct
    func_name_offsets = None
    if 'pool_raw' in parsed and parsed['pool_raw']:
        pool_bytes = parsed['pool_raw']
        # Build string_offsets from raw pool by parsing it (same logic as disassembler)
        # first_map for data strings, last_map for ObjFunc/TObjFunc method names
        string_offsets, func_name_offsets = _build_offsets_from_raw_pool(pool_bytes)
    else:
        all_strings = list(parsed['strings'])
        # Build known set from string values (handle both tuples and plain strings)
        known = set()
        for item in all_strings:
            known.add(item[1] if isinstance(item, tuple) else item)

        pool_encoding = parsed.get('pool_encoding', 'utf16le')

        for addr, text in parsed['instructions']:
            # ObjFunc/TObjFunc method names: @@ name(...) or @@@ name(...)
            m = re.match(r'@@?@ (\w+)\(', text)
            if m and m.group(1) not in known:
                all_strings.append(('A', m.group(1)))
                known.add(m.group(1))

            # Push("string")
            m = re.match(r'Push\("(.*)"\)$', text, re.DOTALL)
            if m and m.group(1) not in known:
                all_strings.append(('W', m.group(1)))
                known.add(m.group(1))

            # Stack[-N] = "string" or Stack[N + TP] = "string"
            m = re.search(r'= "(.*)"$', text)
            if m and m.group(1) not in known:
                all_strings.append(('W', m.group(1)))
                known.add(m.group(1))

        pool_bytes, string_offsets = build_string_pool(all_strings, encoding=pool_encoding)

    # ── Section 1: GlobalVars ──
    gvar_data = w_uint32(parsed['global_var_count'])
    for i in range(parsed['global_var_count']):
        if i < len(parsed['global_vars']):
            type_id, flag, name = parsed['global_vars'][i]
        else:
            type_id, flag, name = 5, 0, ''  # default object type
        gvar_data += w_uint8(type_id) + w_uint8(flag)
        if flag:
            gvar_data += w_vle_string(name)

    # ── Section 2: DataPool ──
    pool_data = w_uint32(len(pool_bytes)) + pool_bytes

    # ── Section 3: GlobFuncs (imports) ──
    imports = parsed['imports']
    gfunc_data = w_uint32(len(imports))
    for name, argc in imports:
        gfunc_data += w_vle_string(name) + w_uint32(argc)

    # ── Section 4: GlobTasks ──
    tasks = parsed['tasks']
    run_task = parsed['run_task']
    run_op = parsed['run_op']

    gtask_data = w_uint32(run_task) + w_uint32(run_op) + w_uint32(len(tasks))
    for var_types, params, events in tasks:
        gtask_data += w_uint32(len(var_types))
        gtask_data += bytes(var_types)
        gtask_data += w_uint32(params)
        gtask_data += w_uint32(len(events))
        for eid, op, ev_types in events:
            gtask_data += w_uint32(eid) + w_uint32(op) + w_uint32(len(ev_types))
            gtask_data += bytes(ev_types)

    # ── Section 5: Standalone Events (GlobEvents) ──
    standalone = parsed['standalone_events']
    gevents_data = w_uint32(len(standalone))
    for eid, op, ev_types in standalone:
        gevents_data += w_uint32(eid) + w_uint32(op) + w_uint32(len(ev_types))
        gevents_data += bytes(ev_types)

    # ── Section 6: Instructions ──
    instructions = parsed['instructions']
    import_table = parsed['imports']
    task_info = {}  # for future use

    # Pre-process: resolve {LABEL:xxx} and {FUNC:xxx} references
    # Build address map from instruction addresses
    addr_map = {addr: idx for idx, (addr, _) in enumerate(instructions)}
    # Build func name→address map (func_N names map to their first instruction address)
    func_addr_map = {}
    for idx, (addr, text) in enumerate(instructions):
        # Look for patterns that define function entry points
        # Functions are indicated by their address in GOTO/Call targets
        pass  # Addresses in the .asm ARE the instruction indices

    # Resolve {LABEL:xxx} and {FUNC:xxx} unresolved references from compile.py.
    # These are typically in dead code. Use RunOp as fallback target (always valid).
    fallback_addr = hex(parsed['run_op'])
    resolved = []
    for addr, text in instructions:
        text = re.sub(r'\{LABEL:\w+\}', fallback_addr, text)
        text = re.sub(r'\{FUNC:\w+\}', fallback_addr, text)
        resolved.append((addr, text))
    instructions = resolved

    code_data = bytearray()
    for addr, text in instructions:
        opcode, operands = assemble_instruction(text, string_offsets, import_table, task_info, func_name_offsets)
        code_data += w_uint16(opcode) + operands

    script_data = w_uint32(len(instructions)) + bytes(code_data)

    # Combine all sections
    return gvar_data + pool_data + gfunc_data + gtask_data + gevents_data + script_data


# ── File operations ──

def assemble_file(input_path, output_path, is_alpha=True):
    """Assemble a single .asm file to .bin."""
    with open(input_path, 'r', encoding='utf-8') as f:
        text = f.read()
    parsed = parse_asm(text)
    bin_data = assemble(parsed, is_alpha=is_alpha)
    with open(output_path, 'wb') as f:
        f.write(bin_data)
    return True


def assemble_folder(input_dir, output_dir, is_alpha=True):
    """Assemble all .asm files in a folder."""
    os.makedirs(output_dir, exist_ok=True)
    files = sorted(f for f in os.listdir(input_dir) if f.endswith('.asm'))
    ok = 0
    fail = 0
    failed = []
    for fname in files:
        in_path = os.path.join(input_dir, fname)
        # Convert .bin.compiled.asm → .bin, .bin.asm → .bin
        if fname.endswith('.bin.compiled.asm'):
            out_name = fname[:-len('.compiled.asm')]
        elif fname.endswith('.bin.asm'):
            out_name = fname[:-len('.asm')]
        elif fname.endswith('.asm'):
            out_name = fname[:-len('.asm')] + '.bin'
        else:
            out_name = fname + '.bin'
        out_path = os.path.join(output_dir, out_name)
        try:
            assemble_file(in_path, out_path, is_alpha=is_alpha)
            ok += 1
        except Exception as e:
            print(f'FAIL {fname}: {e}')
            fail += 1
            failed.append((fname, str(e)))
    print(f'Done: {ok} ok, {fail} failed out of {len(files)} files')
    for name, err in failed:
        print(f'  FAILED: {name}: {err}')


if __name__ == '__main__':
    if len(sys.argv) < 2:
        print('Usage:')
        print('  python asm.py input.asm [output.bin]')
        print('  python asm.py --folder input_dir output_dir')
        sys.exit(1)

    if sys.argv[1] == '--folder':
        if len(sys.argv) < 4:
            print('Usage: python asm.py --folder input_dir output_dir')
            sys.exit(1)
        assemble_folder(sys.argv[2], sys.argv[3])
    else:
        in_path = sys.argv[1]
        out_path = sys.argv[2] if len(sys.argv) > 2 else in_path.replace('.asm', '.bin')
        try:
            assemble_file(in_path, out_path)
            print(f'OK: {out_path}')
        except Exception as e:
            print(f'ERROR: {e}')
            import traceback; traceback.print_exc()
            sys.exit(1)
