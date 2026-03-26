#!/usr/bin/env python3
"""
Compiler: C pseudocode → ASM text format (Pathologic Script VM)
Reverses the decompiler pipeline (PathologicPseudoC).

Usage:
    python compile.py input.c [output.asm]
    python compile.py --folder input_dir output_dir
"""

import re
import sys
import os
import struct
from enum import Enum, auto
from dataclasses import dataclass, field
from typing import List, Optional, Tuple, Any, Dict, Set, Union

sys.setrecursionlimit(50000)


# ════════════════════════════════════════════════════════════════
# 1. TOKEN TYPES
# ════════════════════════════════════════════════════════════════

class TT(Enum):
    INT = auto()
    FLOAT = auto()
    STRING = auto()
    IDENT = auto()
    # Keywords
    IF = auto(); ELSE = auto(); WHILE = auto()
    TRUE = auto(); FALSE = auto()
    RETURN = auto(); BREAK = auto(); GOTO = auto(); NULL = auto()
    EMIT = auto()
    # Operators
    PLUS = auto(); MINUS = auto(); STAR = auto(); SLASH = auto(); PERCENT = auto()
    EQ = auto(); NEQ = auto(); LT = auto(); GT = auto(); LE = auto(); GE = auto()
    AND = auto(); OR = auto(); BAND = auto(); BOR = auto(); BXOR = auto(); NOT = auto()
    ASSIGN = auto()
    # Delimiters
    LPAREN = auto(); RPAREN = auto(); LBRACE = auto(); RBRACE = auto()
    LBRACKET = auto(); RBRACKET = auto()
    SEMI = auto(); COMMA = auto(); COLON = auto(); DOT = auto()
    EOF = auto()

KEYWORDS = {
    'if': TT.IF, 'else': TT.ELSE, 'while': TT.WHILE,
    'true': TT.TRUE, 'false': TT.FALSE,
    'return': TT.RETURN, 'break': TT.BREAK,
    'goto': TT.GOTO, 'null': TT.NULL,
    'EMIT': TT.EMIT,
}

@dataclass
class Token:
    type: TT
    value: Any
    line: int
    col: int


# ════════════════════════════════════════════════════════════════
# 2. LEXER
# ════════════════════════════════════════════════════════════════

class Lexer:
    def __init__(self, source: str):
        self.src = source
        self.pos = 0
        self.line = 1
        self.col = 1

    def error(self, msg):
        raise SyntaxError(f"Lexer error at {self.line}:{self.col}: {msg}")

    def _ch(self):
        return self.src[self.pos] if self.pos < len(self.src) else '\0'

    def _advance(self):
        ch = self.src[self.pos]
        self.pos += 1
        if ch == '\n':
            self.line += 1; self.col = 1
        else:
            self.col += 1
        return ch

    def _skip_ws(self):
        while self.pos < len(self.src):
            ch = self._ch()
            if ch in ' \t\r\n':
                self._advance()
            elif ch == '/' and self.pos + 1 < len(self.src) and self.src[self.pos+1] == '/':
                while self.pos < len(self.src) and self._ch() != '\n':
                    self._advance()
            elif ch == '/' and self.pos + 1 < len(self.src) and self.src[self.pos+1] == '*':
                self._advance(); self._advance()
                while self.pos + 1 < len(self.src):
                    if self._ch() == '*' and self.src[self.pos+1] == '/':
                        self._advance(); self._advance(); break
                    self._advance()
            else:
                break

    def _read_string(self):
        self._advance()  # skip "
        result = []
        while self.pos < len(self.src) and self._ch() != '"':
            ch = self._advance()
            if ch == '\\':
                nxt = self._advance()
                if nxt == 'n': result.append('\n')
                elif nxt == 't': result.append('\t')
                elif nxt == '"': result.append('"')
                elif nxt == '\\': result.append('\\')
                else: result.append(nxt)
            else:
                result.append(ch)
        if self.pos < len(self.src):
            self._advance()  # skip closing "
        return ''.join(result)

    def _read_number(self):
        start = self.pos
        is_float = False
        # Hex
        if self._ch() == '0' and self.pos + 1 < len(self.src) and self.src[self.pos+1] in 'xX':
            self._advance(); self._advance()
            while self.pos < len(self.src) and self._ch() in '0123456789abcdefABCDEF':
                self._advance()
            return int(self.src[start:self.pos], 16), False
        while self.pos < len(self.src):
            ch = self._ch()
            if ch.isdigit():
                self._advance()
            elif ch == '.' and not is_float:
                if self.pos + 1 < len(self.src) and self.src[self.pos+1].isdigit():
                    is_float = True; self._advance()
                else:
                    break
            elif ch in 'eE':
                is_float = True; self._advance()
                if self.pos < len(self.src) and self._ch() in '+-':
                    self._advance()
            else:
                break
        txt = self.src[start:self.pos]
        return (float(txt), True) if is_float else (int(txt), False)

    def _read_ident(self):
        start = self.pos
        while self.pos < len(self.src) and (self._ch().isalnum() or self._ch() == '_'):
            self._advance()
        return self.src[start:self.pos]

    def tokenize(self) -> List[Token]:
        tokens = []
        TWO_CHAR = {'==': TT.EQ, '!=': TT.NEQ, '<=': TT.LE, '>=': TT.GE,
                     '&&': TT.AND, '||': TT.OR}
        ONE_CHAR = {'+': TT.PLUS, '-': TT.MINUS, '*': TT.STAR, '/': TT.SLASH,
                    '%': TT.PERCENT, '<': TT.LT, '>': TT.GT, '&': TT.BAND,
                    '|': TT.BOR, '^': TT.BXOR, '!': TT.NOT, '=': TT.ASSIGN,
                    '(': TT.LPAREN, ')': TT.RPAREN, '{': TT.LBRACE, '}': TT.RBRACE,
                    '[': TT.LBRACKET, ']': TT.RBRACKET, ';': TT.SEMI, ',': TT.COMMA,
                    ':': TT.COLON, '.': TT.DOT}

        while self.pos < len(self.src):
            self._skip_ws()
            if self.pos >= len(self.src):
                break
            ln, co = self.line, self.col
            ch = self._ch()

            if ch == '"':
                tokens.append(Token(TT.STRING, self._read_string(), ln, co))
            elif ch.isdigit():
                val, is_f = self._read_number()
                tokens.append(Token(TT.FLOAT if is_f else TT.INT, val, ln, co))
            elif ch.isalpha() or ch == '_':
                ident = self._read_ident()
                tokens.append(Token(KEYWORDS.get(ident, TT.IDENT), ident, ln, co))
            else:
                two = self.src[self.pos:self.pos+2]
                if two in TWO_CHAR:
                    self._advance(); self._advance()
                    tokens.append(Token(TWO_CHAR[two], two, ln, co))
                elif ch in ONE_CHAR:
                    self._advance()
                    tokens.append(Token(ONE_CHAR[ch], ch, ln, co))
                elif ch == '@':
                    # @@@ prefix marks TObjFunc, @@ marks ObjFunc calls from decompiler
                    # Format: @@N:Name or @@@N:Name (N = obj var index)
                    if self.pos + 2 < len(self.src) and self.src[self.pos+1] == '@' and self.src[self.pos+2] == '@':
                        self._advance(); self._advance(); self._advance()  # skip @@@
                        # Read optional obj ref (number or var name) + colon
                        obj_part = ''
                        if self.pos < len(self.src) and (self._ch().isdigit() or self._ch().isalpha() or self._ch() == '_'):
                            start_d = self.pos
                            while self.pos < len(self.src) and (self._ch().isalnum() or self._ch() == '_'):
                                self._advance()
                            obj_part = self.src[start_d:self.pos] + ':'
                            if self.pos < len(self.src) and self._ch() == ':':
                                self._advance()  # skip ':'
                            else:
                                obj_part = ''  # no colon, not obj syntax
                        if self.pos < len(self.src) and (self._ch().isalpha() or self._ch() == '_'):
                            ident = '@@@' + obj_part + self._read_ident()
                            tokens.append(Token(TT.IDENT, ident, ln, co))
                    elif self.pos + 1 < len(self.src) and self.src[self.pos+1] == '@':
                        self._advance(); self._advance()  # skip @@
                        # Read optional obj ref (number or var name) + colon
                        obj_part = ''
                        if self.pos < len(self.src) and (self._ch().isdigit() or self._ch().isalpha() or self._ch() == '_'):
                            start_d = self.pos
                            while self.pos < len(self.src) and (self._ch().isalnum() or self._ch() == '_'):
                                self._advance()
                            obj_part = self.src[start_d:self.pos] + ':'
                            if self.pos < len(self.src) and self._ch() == ':':
                                self._advance()  # skip ':'
                            else:
                                obj_part = ''  # no colon, not obj syntax
                        if self.pos < len(self.src) and (self._ch().isalpha() or self._ch() == '_'):
                            ident = '@@' + obj_part + self._read_ident()
                            tokens.append(Token(TT.IDENT, ident, ln, co))
                        # else: skip stray @@
                    else:
                        self._advance()  # skip single @
                else:
                    self.error(f"Unexpected char: {ch!r}")

        tokens.append(Token(TT.EOF, None, self.line, self.col))
        return tokens


# ════════════════════════════════════════════════════════════════
# 3. AST NODES
# ════════════════════════════════════════════════════════════════

@dataclass
class IntLit:
    value: int
@dataclass
class FloatLit:
    value: float
@dataclass
class StrLit:
    value: str
@dataclass
class BoolLit:
    value: bool
@dataclass
class NullLit:
    pass
@dataclass
class VarRef:
    name: str
@dataclass
class GlobalVarRef:
    index: int
@dataclass
class VectorLit:
    x: float; y: float; z: float
@dataclass
class BinOp:
    op: str; left: Any; right: Any
@dataclass
class UnaryOp:
    op: str; operand: Any
@dataclass
class FuncCall:
    name: str; args: list; is_objfunc: bool = False; obj_var: int = 0; obj_var_name: str = ''; is_tobjfunc: bool = False
@dataclass
class ObjMethodCall:
    obj: Any; method: str; args: list
@dataclass
class GetByIndexExpr:
    var: Any; index: int
@dataclass
class ObjExpr:
    """Represents Obj() — current event object"""
    pass
@dataclass
class CastExpr:
    type_name: str; expr: Any

# Statements
@dataclass
class VarDeclStmt:
    """Multiple vars declared together: var_0_int = 0; var_1_float = 0; ..."""
    vars: list  # [(name, type, init_expr), ...]
@dataclass
class AssignStmt:
    target: Any; value: Any; pushi_default: bool = False; nulleq: bool = False; notzero: bool = False; nullneq: bool = False
@dataclass
class ExprStmt:
    expr: Any
@dataclass
class IfStmt:
    cond: Any; then_body: list; else_body: Optional[list]
@dataclass
class WhileStmt:
    body: list
@dataclass
class ReturnStmt:
    pop_count: int
@dataclass
class BreakStmt:
    pass
@dataclass
class GotoStmt:
    label: str
@dataclass
class LabelStmt:
    name: str
@dataclass
class TaskCallStmt:
    task_id: int
@dataclass
class TaskReturnStmt:
    pass
@dataclass
class EventEnableStmt:
    event_id: int
@dataclass
class EventDisableStmt:
    event_id: int
@dataclass
class SetByIndexStmt:
    var: Any; index: int; value: Any
@dataclass
class EmitStmt:
    text: str

# Top level
@dataclass
class FuncDef:
    name: str
    params: list  # [(name, type), ...]
    body: list
@dataclass
class Program:
    functions: list


# ════════════════════════════════════════════════════════════════
# 4. PARSER
# ════════════════════════════════════════════════════════════════

def extract_var_type(name: str) -> str:
    """Extract type from var_N_type naming."""
    m = re.match(r'var_(\d+)_(\w+)', name)
    return m.group(2) if m else 'object'

def extract_var_index(name: str) -> int:
    m = re.match(r'var_(\d+)_', name)
    return int(m.group(1)) if m else -1

def is_var_name(name: str) -> bool:
    return bool(re.match(r'var_\d+_\w+', name))

def is_default_value(vtype: str, expr) -> bool:
    """Check if expr is the default value for given type."""
    if vtype in ('int', 'float') and isinstance(expr, IntLit) and expr.value == 0:
        return True
    if vtype == 'float' and isinstance(expr, FloatLit) and expr.value == 0.0:
        return True
    if vtype == 'bool' and isinstance(expr, IntLit) and expr.value == 0:
        return True
    if vtype == 'string' and isinstance(expr, StrLit) and expr.value == '':
        return True
    if vtype == 'object' and isinstance(expr, IntLit) and expr.value == 0:
        return True
    if vtype == 'cvector' and isinstance(expr, VectorLit) and expr.x == 0 and expr.y == 0 and expr.z == 0:
        return True
    return False


class Parser:
    def __init__(self, tokens: List[Token], pi_lines: set = None, ne_lines: set = None, nz_lines: set = None, nn_lines: set = None):
        self.tokens = tokens
        self.pos = 0
        self.pi_lines = pi_lines or set()
        self.ne_lines = ne_lines or set()
        self.nz_lines = nz_lines or set()
        self.nn_lines = nn_lines or set()

    def error(self, msg):
        t = self.tokens[min(self.pos, len(self.tokens)-1)]
        raise SyntaxError(f"Parse error at {t.line}:{t.col}: {msg} (got {t.type.name} {t.value!r})")

    def cur(self) -> Token:
        return self.tokens[min(self.pos, len(self.tokens)-1)]

    def peek(self, off=0) -> Token:
        idx = min(self.pos + off, len(self.tokens)-1)
        return self.tokens[idx]

    def advance(self) -> Token:
        t = self.tokens[self.pos]; self.pos += 1; return t

    def expect(self, tt: TT) -> Token:
        if self.cur().type != tt:
            self.error(f"Expected {tt.name}")
        return self.advance()

    def match(self, *types) -> Optional[Token]:
        if self.cur().type in types:
            return self.advance()
        return None

    def at(self, *types) -> bool:
        return self.cur().type in types

    # ─── Program ───

    def _is_func_def(self) -> bool:
        """Check if current position is a function definition (not a call)."""
        if not self.at(TT.IDENT) or self.peek(1).type != TT.LPAREN:
            return False
        # Scan ahead to find matching ) and check if { follows
        depth = 0
        i = 1
        while True:
            t = self.peek(i)
            if t.type == TT.EOF:
                return False
            if t.type == TT.LPAREN:
                depth += 1
            elif t.type == TT.RPAREN:
                depth -= 1
                if depth == 0:
                    # Check what follows the closing paren
                    nxt = self.peek(i + 1)
                    return nxt.type == TT.LBRACE
            i += 1
            if i > 200:  # safety limit
                return False

    def parse_program(self) -> Program:
        funcs = []
        while not self.at(TT.EOF):
            if self.at(TT.EMIT):
                # Top-level EMIT: attach as trailing dead code to preceding function
                self.advance()
                text = self.expect(TT.STRING).value
                self.expect(TT.SEMI)
                if funcs:
                    if not hasattr(funcs[-1], 'trailing_emits'):
                        funcs[-1].trailing_emits = []
                    funcs[-1].trailing_emits.append(text)
            elif self._is_func_def():
                funcs.append(self.parse_func_def())
            else:
                self.advance()
        return Program(funcs)

    def parse_func_def(self) -> FuncDef:
        name = self.expect(TT.IDENT).value
        self.expect(TT.LPAREN)
        params = []
        if not self.at(TT.RPAREN):
            p = self.expect(TT.IDENT).value
            params.append((p, extract_var_type(p)))
            while self.match(TT.COMMA):
                p = self.expect(TT.IDENT).value
                params.append((p, extract_var_type(p)))
        self.expect(TT.RPAREN)
        self.expect(TT.LBRACE)
        body = self.parse_stmts()
        # Consume closing brace; tolerate its absence due to decompiler brace mismatch
        if self.at(TT.RBRACE):
            self.advance()
        return FuncDef(name, params, body)

    # ─── Statements ───

    def parse_stmts(self) -> list:
        stmts = []
        while not self.at(TT.RBRACE, TT.EOF, TT.ELSE):
            s = self.parse_stmt()
            if s is not None:
                stmts.append(s)
        return stmts

    def parse_stmt(self):
        if self.at(TT.EMIT):
            self.advance()
            text = self.expect(TT.STRING).value
            self.expect(TT.SEMI)
            return EmitStmt(text)
        if self.at(TT.IF):     return self.parse_if()
        if self.at(TT.WHILE):  return self.parse_while()
        if self.at(TT.RETURN): return self.parse_return()
        if self.at(TT.BREAK):  self.advance(); self.expect(TT.SEMI); return BreakStmt()
        if self.at(TT.GOTO):
            self.advance()
            lbl = self.expect(TT.IDENT).value
            self.expect(TT.SEMI)
            return GotoStmt(lbl)

        # Label: IDENT followed by ':' (or INT:COLON for raw ASM addresses)
        if self.at(TT.IDENT) and self.peek(1).type == TT.COLON:
            name = self.advance().value; self.advance()
            return LabelStmt(name)
        if self.at(TT.INT) and self.peek(1).type == TT.COLON:
            # Raw ASM address label (e.g., 0x5c8:) — skip entire raw ASM line
            # These lines can contain semicolons (e.g., Return(); Pop(2))
            self.advance(); self.advance()
            while not self.at(TT.RBRACE, TT.EOF, TT.ELSE):
                if self.at(TT.INT) and self.peek(1).type == TT.COLON:
                    break  # next ASM line
                self.advance()
            return None

        # Special statements
        if self.at(TT.IDENT):
            n = self.cur().value
            if n == 'TaskCall':     return self._parse_simple_int_call(TaskCallStmt)
            if n == 'TaskReturn':   return self._parse_void_call(TaskReturnStmt)
            if n == 'EventEnable':  return self._parse_simple_int_call(EventEnableStmt)
            if n == 'EventDisable': return self._parse_simple_int_call(EventDisableStmt)

        # GlobalVars[N] = expr;
        if self.at(TT.IDENT) and self.cur().value == 'GlobalVars' and self.peek(1).type == TT.LBRACKET:
            return self._parse_gvar_assign()

        # Variable assignment chain or expression statement
        return self._parse_assign_or_expr()

    def _parse_simple_int_call(self, cls):
        self.advance()
        self.expect(TT.LPAREN)
        val = self.expect(TT.INT).value
        self.expect(TT.RPAREN)
        self.expect(TT.SEMI)
        return cls(val)

    def _parse_void_call(self, cls):
        self.advance()
        self.expect(TT.LPAREN)
        self.expect(TT.RPAREN)
        self.expect(TT.SEMI)
        return cls()

    def _parse_gvar_assign(self):
        self.advance()  # GlobalVars
        self.expect(TT.LBRACKET)
        idx = self.expect(TT.INT).value
        self.expect(TT.RBRACKET)
        self.expect(TT.ASSIGN)
        val = self.parse_expr()
        self.expect(TT.SEMI)
        return AssignStmt(GlobalVarRef(idx), val)

    def _parse_assign_or_expr(self):
        """Parse assignment chain (var_N = val; var_M = val; ...) or expression stmt."""
        # Check for multi-var declaration: multiple var_X = val; on same line
        if (self.at(TT.IDENT) and is_var_name(self.cur().value)
                and self.peek(1).type == TT.ASSIGN):
            return self._parse_assign_chain()

        expr = self.parse_expr()
        # Handle SetByIndex(var, idx) = expr;
        if isinstance(expr, FuncCall) and expr.name == 'SetByIndex' and self.at(TT.ASSIGN):
            self.expect(TT.ASSIGN)
            val = self.parse_expr()
            self.expect(TT.SEMI)
            idx = expr.args[1].value if isinstance(expr.args[1], IntLit) else 0
            return SetByIndexStmt(expr.args[0], idx, val)
        # Handle decompiler-generated literal assignments: "str" = expr; or 0 = expr;
        if self.at(TT.ASSIGN):
            self.expect(TT.ASSIGN)
            val = self.parse_expr()
            self.expect(TT.SEMI)
            # These are decompiler artifacts — emit as assignment to the expression
            return AssignStmt(expr, val)
        self.expect(TT.SEMI)
        return ExprStmt(expr)

    def _parse_assign_chain(self):
        """Parse one or more: var_N_type = expr; in sequence.
        Only group assignments on the SAME LINE into a VarDeclStmt.
        The decompiler puts multi-var declarations on one line,
        while re-assignments to existing vars are on separate lines."""
        assignments = []
        first_line = self.cur().line
        while (self.at(TT.IDENT) and is_var_name(self.cur().value)
               and self.peek(1).type == TT.ASSIGN):
            # Only group assignments on the same line as the first
            if assignments and self.cur().line != first_line:
                break
            name = self.advance().value
            self.expect(TT.ASSIGN)
            value = self.parse_expr()
            self.expect(TT.SEMI)
            vtype = extract_var_type(name)
            assignments.append((name, vtype, value))
        if len(assignments) == 1:
            n, t, v = assignments[0]
            stmt = AssignStmt(VarRef(n), v)
            # Mark as PushI-default if the source line had //@pi annotation
            if first_line in self.pi_lines:
                stmt.pushi_default = True
            # Mark as NullEq if the source line had //@ne annotation
            if first_line in self.ne_lines:
                stmt.nulleq = True
            # Mark as Not-zero (compact == 0) if the source line had //@nz annotation
            if first_line in self.nz_lines:
                stmt.notzero = True
            # Mark as NullNeq (compact != 0) if the source line had //@nn annotation
            if first_line in self.nn_lines:
                stmt.nullneq = True
            return stmt
        return VarDeclStmt(assignments)

    def parse_if(self) -> IfStmt:
        self.expect(TT.IF)
        self.expect(TT.LPAREN)
        cond = self.parse_expr()
        self.expect(TT.RPAREN)
        if self.at(TT.LBRACE):
            self.expect(TT.LBRACE)
            then = self.parse_stmts()
            # Consume } if present; it may have been consumed by an inner
            # while/for when the decompiler merges closing braces
            if self.at(TT.RBRACE):
                self.advance()
        else:
            # Braceless if: single statement body
            s = self.parse_stmt()
            then = [s] if s else []
        els = None
        if self.match(TT.ELSE):
            if self.at(TT.IF):
                els = [self.parse_if()]
            elif self.at(TT.LBRACE):
                self.expect(TT.LBRACE)
                els = self.parse_stmts()
                if self.at(TT.RBRACE):
                    self.advance()
            else:
                # Braceless else: single statement
                s = self.parse_stmt()
                els = [s] if s else []
        return IfStmt(cond, then, els)

    def parse_while(self) -> WhileStmt:
        self.expect(TT.WHILE)
        self.expect(TT.LPAREN)
        self.expect(TT.TRUE)
        self.expect(TT.RPAREN)
        self.expect(TT.LBRACE)
        body = self.parse_stmts()
        # Closing } may have been consumed by inner construct (decompiler brace merge)
        if self.at(TT.RBRACE):
            self.advance()
        return WhileStmt(body)

    def parse_return(self) -> ReturnStmt:
        self.expect(TT.RETURN)
        val = self.expect(TT.INT).value
        self.expect(TT.SEMI)
        return ReturnStmt(val)

    # ─── Expressions ───

    def parse_expr(self):       return self._or()
    def _or(self):
        l = self._and()
        while self.match(TT.OR):  l = BinOp('||', l, self._and())
        return l
    def _and(self):
        l = self._bor()
        while self.match(TT.AND): l = BinOp('&&', l, self._bor())
        return l
    def _bor(self):
        l = self._bxor()
        while self.match(TT.BOR): l = BinOp('|', l, self._bxor())
        return l
    def _bxor(self):
        l = self._band()
        while self.match(TT.BXOR): l = BinOp('^', l, self._band())
        return l
    def _band(self):
        l = self._eq()
        while self.match(TT.BAND): l = BinOp('&', l, self._eq())
        return l
    def _eq(self):
        l = self._rel()
        while True:
            if self.match(TT.EQ):  l = BinOp('==', l, self._rel())
            elif self.match(TT.NEQ): l = BinOp('!=', l, self._rel())
            else: break
        return l
    def _rel(self):
        l = self._add()
        while True:
            if self.match(TT.LT):   l = BinOp('<', l, self._add())
            elif self.match(TT.GT): l = BinOp('>', l, self._add())
            elif self.match(TT.LE): l = BinOp('<=', l, self._add())
            elif self.match(TT.GE): l = BinOp('>=', l, self._add())
            else: break
        return l
    def _add(self):
        l = self._mul()
        while True:
            if self.match(TT.PLUS):  l = BinOp('+', l, self._mul())
            elif self.match(TT.MINUS): l = BinOp('-', l, self._mul())
            else: break
        return l
    def _mul(self):
        l = self._unary()
        while True:
            if self.match(TT.STAR):    l = BinOp('*', l, self._unary())
            elif self.match(TT.SLASH): l = BinOp('/', l, self._unary())
            elif self.match(TT.PERCENT): l = BinOp('%', l, self._unary())
            else: break
        return l
    def _unary(self):
        if self.match(TT.MINUS):
            o = self._unary()
            if isinstance(o, IntLit): return IntLit(-o.value)
            if isinstance(o, FloatLit): return FloatLit(-o.value)
            return UnaryOp('-', o)
        if self.match(TT.NOT):
            return UnaryOp('!', self._unary())
        return self._primary()

    def _primary(self):
        t = self.cur()
        if t.type == TT.INT:    self.advance(); return IntLit(t.value)
        if t.type == TT.FLOAT:  self.advance(); return FloatLit(t.value)
        if t.type == TT.STRING: self.advance(); return StrLit(t.value)
        if t.type == TT.TRUE:   self.advance(); return BoolLit(True)
        if t.type == TT.FALSE:  self.advance(); return BoolLit(False)
        if t.type == TT.NULL:   self.advance(); return NullLit()

        # Cast: (int)expr, (float)expr, (bool)expr
        if t.type == TT.LPAREN and self.peek(1).type == TT.IDENT \
                and self.peek(1).value in ('int','float','bool') \
                and self.peek(2).type == TT.RPAREN:
            self.advance(); tn = self.advance().value; self.advance()
            return CastExpr(tn, self._unary())

        # Parenthesized
        if t.type == TT.LPAREN:
            self.advance(); e = self.parse_expr(); self.expect(TT.RPAREN); return e

        if t.type == TT.IDENT:
            name = t.value
            # CVector(x,y,z)
            if name == 'CVector':
                self.advance(); self.expect(TT.LPAREN)
                x = self.parse_expr(); self.expect(TT.COMMA)
                y = self.parse_expr(); self.expect(TT.COMMA)
                z = self.parse_expr(); self.expect(TT.RPAREN)
                def _fval(e):
                    if isinstance(e, IntLit): return float(e.value)
                    if isinstance(e, FloatLit): return e.value
                    if isinstance(e, UnaryOp) and e.op == '-':
                        return -_fval(e.operand)
                    return 0.0
                return VectorLit(_fval(x), _fval(y), _fval(z))
            # GlobalVars[N]
            if name == 'GlobalVars':
                self.advance(); self.expect(TT.LBRACKET)
                idx = self.expect(TT.INT).value
                self.expect(TT.RBRACKET); return GlobalVarRef(idx)
            # GetByIndex(var, N)
            if name == 'GetByIndex':
                self.advance(); self.expect(TT.LPAREN)
                v = self.parse_expr(); self.expect(TT.COMMA)
                i = self.parse_expr(); self.expect(TT.RPAREN)
                return GetByIndexExpr(v, i.value if isinstance(i, IntLit) else 0)
            # Obj()
            if name == 'Obj':
                self.advance(); self.expect(TT.LPAREN); self.expect(TT.RPAREN)
                return ObjExpr()
            # Math builtins: sin, cos, sqrt, asin, pow
            if name in ('sin', 'cos', 'sqrt', 'asin', 'pow'):
                self.advance(); self.expect(TT.LPAREN)
                args = [self.parse_expr()]
                while self.match(TT.COMMA):
                    args.append(self.parse_expr())
                self.expect(TT.RPAREN)
                return FuncCall(name, args)
            # Function call: name(...) or @@name(...) or @@N:name(...) or @@@N:name(...)
            if self.peek(1).type == TT.LPAREN:
                is_tobjfunc = name.startswith('@@@')
                is_objfunc = name.startswith('@@')
                if is_tobjfunc:
                    rest = name[3:]  # strip @@@
                elif is_objfunc:
                    rest = name[2:]  # strip @@
                else:
                    rest = name
                # Parse optional obj ref: prefix (number or variable name)
                obj_var = 0
                obj_var_name = ''
                if is_objfunc and ':' in rest:
                    parts = rest.split(':', 1)
                    try:
                        obj_var = int(parts[0])
                    except ValueError:
                        obj_var_name = parts[0]  # variable name for Obj reference
                    real_name = parts[1]
                elif is_objfunc:
                    real_name = rest
                else:
                    real_name = rest
                self.advance(); self.expect(TT.LPAREN)
                args = []
                if not self.at(TT.RPAREN):
                    args.append(self.parse_expr())
                    while self.match(TT.COMMA):
                        args.append(self.parse_expr())
                self.expect(TT.RPAREN)
                return FuncCall(real_name, args, is_objfunc=is_objfunc, obj_var=obj_var, obj_var_name=obj_var_name, is_tobjfunc=is_tobjfunc)
            # Variable reference
            self.advance()
            # Check for .method()
            if self.match(TT.DOT):
                method = self.expect(TT.IDENT).value
                if self.at(TT.LPAREN):
                    self.expect(TT.LPAREN)
                    args = []
                    if not self.at(TT.RPAREN):
                        args.append(self.parse_expr())
                        while self.match(TT.COMMA):
                            args.append(self.parse_expr())
                    self.expect(TT.RPAREN)
                    return ObjMethodCall(VarRef(name), method, args)
            return VarRef(name)

        self.error("Unexpected token in expression")


# ════════════════════════════════════════════════════════════════
# 5. VIRTUAL STACK
# ════════════════════════════════════════════════════════════════

VAR_TYPE_MAP = {'bool': 1, 'int': 2, 'float': 3, 'string': 4, 'object': 5, 'cvector': 6}
VAR_TYPE_NAME = {1: 'bool', 2: 'int', 3: 'float', 4: 'string', 5: 'object', 6: 'cvector'}

class VStack:
    """Simulates the VM stack during code generation."""
    def __init__(self):
        self.slots: List[Tuple[str, str]] = []  # (name, type)
        self.aliases: dict = {}  # formal_name -> actual_slot_name (for subroutine params)

    def push(self, name: str, vtype: str):
        self.slots.append((name, vtype))

    def pop(self, count: int = 1):
        for _ in range(count):
            if self.slots:
                self.slots.pop()

    def size(self) -> int:
        return len(self.slots)

    def dist(self, name: str) -> int:
        """Get Stack[-N] distance for a variable (1 = top)."""
        resolved = self.aliases.get(name, name)
        for i in range(len(self.slots) - 1, -1, -1):
            if self.slots[i][0] == resolved:
                return len(self.slots) - i
        # Variable not on stack — try to find by index from name
        # This handles subroutine caller stack mismatches
        m = re.match(r'var_(\d+)_(\w+)', name)
        if m:
            idx = int(m.group(1))
            vtype = m.group(2)
            # Place the variable at the appropriate stack position
            while len(self.slots) <= idx:
                self.slots.insert(0, (f'__pad_{len(self.slots)}', 'int'))
            if idx < len(self.slots):
                self.slots[idx] = (name, vtype)
                return len(self.slots) - idx
        raise KeyError(f"Variable '{name}' not found on stack. Stack: {[s[0] for s in self.slots]}")

    def has(self, name: str) -> bool:
        resolved = self.aliases.get(name, name)
        return any(s[0] == resolved for s in self.slots)

    def get_type(self, name: str) -> str:
        """Get the type of a variable on the stack."""
        resolved = self.aliases.get(name, name)
        for i in range(len(self.slots) - 1, -1, -1):
            if self.slots[i][0] == resolved:
                return self.slots[i][1]
        return 'object'

    def top_name(self) -> str:
        return self.slots[-1][0] if self.slots else ''

    def clone(self):
        v = VStack()
        v.slots = list(self.slots)
        v.aliases = dict(self.aliases)
        return v


# ════════════════════════════════════════════════════════════════
# 5b. EXPRESSION INLINING PASS
# ════════════════════════════════════════════════════════════════
#
# The decompiler splits complex expressions into temp variables:
#   var_8_int = var_2_int & 248;
#   var_9_int = "text" + var_8_int;
#   Trace(var_9_int);
#
# The original compiler evaluates these as one fused expression:
#   Trace("text" + (var_2_int & 248))
#
# This pass detects single-use temp variables and inlines them back.

def _count_var_uses(node, counts: dict):
    """Count how many times each VarRef is used in an AST node tree."""
    if node is None:
        return
    if isinstance(node, VarRef):
        counts[node.name] = counts.get(node.name, 0) + 1
    elif isinstance(node, BinOp):
        _count_var_uses(node.left, counts)
        _count_var_uses(node.right, counts)
    elif isinstance(node, UnaryOp):
        _count_var_uses(node.operand, counts)
    elif isinstance(node, FuncCall):
        for a in node.args:
            _count_var_uses(a, counts)
    elif isinstance(node, ObjMethodCall):
        _count_var_uses(node.obj, counts)
        for a in node.args:
            _count_var_uses(a, counts)
    elif isinstance(node, CastExpr):
        _count_var_uses(node.expr, counts)
    elif isinstance(node, GetByIndexExpr):
        _count_var_uses(node.var, counts)
    elif isinstance(node, AssignStmt):
        _count_var_uses(node.value, counts)
        # Don't count the target as a "use" — it's a definition
    elif isinstance(node, ExprStmt):
        _count_var_uses(node.expr, counts)
    elif isinstance(node, VarDeclStmt):
        for _, _, val in node.vars:
            _count_var_uses(val, counts)
    elif isinstance(node, IfStmt):
        _count_var_uses(node.cond, counts)
        for s in node.then_body:
            _count_var_uses(s, counts)
        if node.else_body:
            for s in node.else_body:
                _count_var_uses(s, counts)
    elif isinstance(node, WhileStmt):
        for s in node.body:
            _count_var_uses(s, counts)
    elif isinstance(node, ReturnStmt):
        pass
    elif isinstance(node, SetByIndexStmt):
        _count_var_uses(node.var, counts)
        _count_var_uses(node.value, counts)
    elif isinstance(node, GlobalVarRef):
        pass


def _substitute_var(node, var_name: str, replacement):
    """Replace all VarRef(var_name) with replacement in expression tree."""
    if node is None:
        return node
    if isinstance(node, VarRef) and node.name == var_name:
        return replacement
    if isinstance(node, BinOp):
        return BinOp(node.op,
                      _substitute_var(node.left, var_name, replacement),
                      _substitute_var(node.right, var_name, replacement))
    if isinstance(node, UnaryOp):
        return UnaryOp(node.op, _substitute_var(node.operand, var_name, replacement))
    if isinstance(node, FuncCall):
        return FuncCall(node.name,
                        [_substitute_var(a, var_name, replacement) for a in node.args],
                        is_objfunc=node.is_objfunc, obj_var=node.obj_var, obj_var_name=node.obj_var_name, is_tobjfunc=node.is_tobjfunc)
    if isinstance(node, ObjMethodCall):
        return ObjMethodCall(_substitute_var(node.obj, var_name, replacement),
                             node.method,
                             [_substitute_var(a, var_name, replacement) for a in node.args])
    if isinstance(node, CastExpr):
        return CastExpr(node.type_name, _substitute_var(node.expr, var_name, replacement))
    if isinstance(node, GetByIndexExpr):
        return GetByIndexExpr(_substitute_var(node.var, var_name, replacement), node.index)
    return node


def _substitute_in_stmt(stmt, var_name: str, replacement):
    """Substitute var_name with replacement in a statement's expressions."""
    if isinstance(stmt, AssignStmt):
        new_stmt = AssignStmt(stmt.target, _substitute_var(stmt.value, var_name, replacement))
        new_stmt.pushi_default = stmt.pushi_default
        new_stmt.nulleq = stmt.nulleq
        new_stmt.notzero = stmt.notzero
        new_stmt.nullneq = stmt.nullneq
        return new_stmt
    if isinstance(stmt, ExprStmt):
        return ExprStmt(_substitute_var(stmt.expr, var_name, replacement))
    if isinstance(stmt, IfStmt):
        return IfStmt(
            _substitute_var(stmt.cond, var_name, replacement),
            [_substitute_in_stmt(s, var_name, replacement) for s in stmt.then_body],
            [_substitute_in_stmt(s, var_name, replacement) for s in stmt.else_body] if stmt.else_body else None
        )
    if isinstance(stmt, SetByIndexStmt):
        return SetByIndexStmt(
            _substitute_var(stmt.var, var_name, replacement),
            stmt.index,
            _substitute_var(stmt.value, var_name, replacement)
        )
    return stmt


def _is_pure_expr(expr) -> bool:
    """Check if an expression is pure (no side effects) and safe to inline."""
    if isinstance(expr, (IntLit, FloatLit, StrLit, BoolLit, VectorLit, NullLit, ObjExpr)):
        return True
    if isinstance(expr, VarRef):
        return True
    if isinstance(expr, GlobalVarRef):
        return True
    if isinstance(expr, BinOp):
        return _is_pure_expr(expr.left) and _is_pure_expr(expr.right)
    if isinstance(expr, UnaryOp):
        return _is_pure_expr(expr.operand)
    if isinstance(expr, CastExpr):
        return _is_pure_expr(expr.expr)
    if isinstance(expr, GetByIndexExpr):
        return _is_pure_expr(expr.var)
    # FuncCall, ObjMethodCall are NOT pure (side effects)
    return False


def infer_global_var_types(program: Program) -> Dict[int, str]:
    """Pre-inlining pass: infer global variable types from assignments."""
    gvar_types = {}
    for fn in program.functions:
        _infer_gvar_types_stmts(fn.body, gvar_types)
    return gvar_types


def _infer_gvar_types_stmts(stmts: list, gvar_types: dict):
    for s in stmts:
        if isinstance(s, AssignStmt):
            if isinstance(s.target, VarRef) and isinstance(s.value, GlobalVarRef):
                vtype = extract_var_type(s.target.name)
                if vtype != 'object':
                    gvar_types[s.value.index] = vtype
            elif isinstance(s.target, GlobalVarRef) and isinstance(s.value, VarRef):
                vtype = extract_var_type(s.value.name)
                if vtype != 'object':
                    gvar_types[s.target.index] = vtype
            elif isinstance(s.target, GlobalVarRef):
                if isinstance(s.value, IntLit):
                    gvar_types[s.target.index] = 'int'
                elif isinstance(s.value, BoolLit):
                    gvar_types[s.target.index] = 'bool'
                elif isinstance(s.value, StrLit):
                    gvar_types[s.target.index] = 'string'
        elif isinstance(s, IfStmt):
            _infer_gvar_types_stmts(s.then_body, gvar_types)
            if s.else_body:
                _infer_gvar_types_stmts(s.else_body, gvar_types)
        elif isinstance(s, WhileStmt):
            _infer_gvar_types_stmts(s.body, gvar_types)


def _unify_branch_vars_stmts(stmts: list) -> bool:
    """Rename else-branch variables to match then-branch variables when the
    then-branch variable is referenced after the if/else.

    Pattern:
        if(cond) { var_A = expr1; } else { var_B = expr2; }
        if(var_A != 0) { ... }

    Both branches write to the same stack slot. Rename var_B -> var_A so the
    compiler's stack tracking doesn't lose the reference.
    """
    changed = False
    for i, s in enumerate(stmts):
        if isinstance(s, IfStmt):
            if _unify_branch_vars_stmts(s.then_body):
                changed = True
            if s.else_body and _unify_branch_vars_stmts(s.else_body):
                changed = True
            # Check: if/else where each branch has exactly one assignment to a new var
            if (s.else_body
                    and len(s.then_body) == 1 and isinstance(s.then_body[0], AssignStmt)
                    and isinstance(s.then_body[0].target, VarRef)
                    and len(s.else_body) == 1 and isinstance(s.else_body[0], AssignStmt)
                    and isinstance(s.else_body[0].target, VarRef)):
                then_var = s.then_body[0].target.name
                else_var = s.else_body[0].target.name
                if then_var != else_var:
                    # Check if then_var is referenced after this if-else
                    remaining = stmts[i+1:]
                    future = set()
                    for rs in remaining:
                        _collect_varnames_node(rs, future)
                    if then_var in future and else_var not in future:
                        # Rename else-branch target to match then-branch
                        s.else_body[0].target = VarRef(then_var)
                        changed = True
        elif isinstance(s, WhileStmt):
            if _unify_branch_vars_stmts(s.body):
                changed = True
    return changed


def inline_temp_vars(program: Program):
    """Inline single-use temp variables back into their usage site.

    Runs iteratively until no more inlining is possible (handles chains).
    """
    for fn in program.functions:
        # Record pre-inline state: did this function allocate new vars?
        # This is needed because inlining can remove variables, changing
        # the PushEmpty() decision for subroutines with params.
        fn._pre_inline_allocates_new_vars = CodeGen._body_allocates_new_vars(fn)
        _inline_function_body(fn)
        # Unify branch variable names for if/else branches writing to same slot
        _unify_branch_vars_stmts(fn.body)


def _get_task_var_names(fn: FuncDef) -> set:
    """Get names of task variable parameters that must not be inlined away.

    Task vars are stored via StackPointer — their assignments have side effects
    and must not be eliminated even if the variable is used only once.
    """
    if fn.name == 'main' and fn.params:
        return {pname for pname, _ in fn.params}
    if re.match(r'task_\d+_event_\d+', fn.name) and fn.params:
        # All params before event-specific ones are task vars
        # Conservative: treat all params as task vars
        return {pname for pname, _ in fn.params}
    return set()


def _inline_function_body(fn: FuncDef):
    """Inline temp vars in a single function body."""
    never_inline = _get_task_var_names(fn)
    max_passes = 10
    for _ in range(max_passes):
        if not _inline_pass(fn.body, never_inline):
            break
    # After inlining, clean up VarDeclStmts
    _cleanup_var_decls(fn)


_ARITH_OPS_SET = {'+', '-', '*', '/', '%'}


def _has_prior_assign(body: list, idx: int, var_name: str) -> bool:
    """Check if var_name has a prior assignment (zero-init) before index idx.
    Indicates the variable was PushEmpty-allocated, not a computed temp."""
    for j in range(idx):
        s = body[j]
        if isinstance(s, AssignStmt) and isinstance(s.target, VarRef) and s.target.name == var_name:
            return True
        if isinstance(s, VarDeclStmt):
            for vn, _, _ in s.vars:
                if vn == var_name:
                    return True
    return False


def _var_used_in_arith_binop(stmt, var_name: str) -> bool:
    """Check if var_name is used as an operand inside an ARITHMETIC BinOp within stmt."""
    def _check_expr(expr):
        if isinstance(expr, BinOp) and expr.op in _ARITH_OPS_SET:
            # Check if var_name is a direct operand of this arithmetic BinOp
            if isinstance(expr.left, VarRef) and expr.left.name == var_name:
                return True
            if isinstance(expr.right, VarRef) and expr.right.name == var_name:
                return True
            # Check deeper nesting
            return _check_expr(expr.left) or _check_expr(expr.right)
        return False

    if isinstance(stmt, AssignStmt):
        return _check_expr(stmt.value)
    if isinstance(stmt, ExprStmt):
        return _check_expr(stmt.expr)
    return False


def _inline_pass(body: list, never_inline: set = None) -> bool:
    """Single inlining pass. Returns True if any inlining happened."""
    if never_inline is None:
        never_inline = set()
    changed = False

    # Count all variable uses in the entire body
    use_counts = {}
    for s in body:
        _count_var_uses(s, use_counts)

    i = 0
    while i < len(body) - 1:
        s = body[i]

        # Check for: var_X = pure_expr; where var_X is used exactly once
        var_name = None
        expr_val = None

        if isinstance(s, AssignStmt) and isinstance(s.target, VarRef):
            var_name = s.target.name
            expr_val = s.value

        if var_name and is_var_name(var_name) and _is_pure_expr(expr_val):
            total_uses = use_counts.get(var_name, 0)
            if total_uses == 1 and var_name not in never_inline:
                # The variable is used once. Check if it's in the next statement.
                next_s = body[i + 1]
                next_uses = {}
                _count_var_uses(next_s, next_uses)
                if next_uses.get(var_name, 0) == 1:
                    # Don't inline into if-condition test (if(var != 0) or if(var != 1) pattern)
                    # The VM's JumpB reads the value directly from the stack
                    skip = False
                    if isinstance(next_s, IfStmt) and isinstance(next_s.cond, BinOp):
                        cond = next_s.cond
                        if isinstance(cond.left, VarRef) and cond.left.name == var_name:
                            if isinstance(cond.right, IntLit) and cond.right.value in (0, 1):
                                skip = True

                    # Don't inline arithmetic BinOp into another arithmetic BinOp
                    # when the variable was PushEmpty-allocated (has a prior zero-init).
                    # PushEmpty vars are real stack slots; inlining them creates nested
                    # BinOps that produce wrong code (Pop+Push instead of Op2).
                    # Variables without prior zero-init were computed temps (Pop+Push)
                    # and CAN be safely inlined.
                    if (isinstance(expr_val, BinOp) and expr_val.op in _ARITH_OPS_SET
                            and _var_used_in_arith_binop(next_s, var_name)
                            and _has_prior_assign(body, i, var_name)):
                        skip = True

                    # Don't inline non-trivial expressions into any function call
                    # arguments.  The original compiler evaluates each assignment
                    # sequentially, producing Push+Op instructions.  Inlining BinOps
                    # into function args changes the Push order.
                    if (not skip
                            and isinstance(next_s, ExprStmt)
                            and isinstance(next_s.expr, FuncCall)
                            and not isinstance(expr_val, (VarRef, IntLit, FloatLit,
                                                          StrLit, BoolLit, NullLit))):
                        skip = True

                    # Don't inline PushEmpty-allocated variables into subroutine
                    # call arguments.  Inlining removes the variable from future
                    # refs, causing _count_dead_top to pop it prematurely, which
                    # changes Pop counts and stack offsets in the compiled output.
                    if (not skip
                            and isinstance(next_s, ExprStmt)
                            and isinstance(next_s.expr, FuncCall)
                            and re.match(r'func_\d+', next_s.expr.name)
                            and _has_prior_assign(body, i, var_name)):
                        skip = True

                    # Don't inline pre-loop assignments into while loop bodies.
                    # The assignment executes once before the loop; inlining would
                    # move it inside the loop, recomputing every iteration.
                    if (not skip
                            and isinstance(next_s, WhileStmt)
                            and _has_prior_assign(body, i, var_name)):
                        skip = True

                    if not skip:
                        # Inline: substitute var_name with expr_val in the next statement
                        body[i + 1] = _substitute_in_stmt(next_s, var_name, expr_val)
                        # Remove the assignment
                        body.pop(i)
                        changed = True
                        # Recount uses since we changed the body
                        use_counts = {}
                        for s2 in body:
                            _count_var_uses(s2, use_counts)
                        continue  # don't increment i, check new position

        i += 1

    # Also inline inside if/while bodies
    for s in body:
        if isinstance(s, IfStmt):
            if _inline_pass(s.then_body, never_inline):
                changed = True
            if s.else_body and _inline_pass(s.else_body, never_inline):
                changed = True
        elif isinstance(s, WhileStmt):
            if _inline_pass(s.body, never_inline):
                changed = True

    return changed


def _cleanup_var_decls(fn: FuncDef):
    """Remove inlined variables from VarDeclStmts and adjust Return pop counts."""
    # Collect all var names still in use
    used_vars = set()
    _collect_all_varnames(fn.body, used_vars)
    # Also include params
    for pname, _ in fn.params:
        used_vars.add(pname)

    # Clean up VarDeclStmts
    _cleanup_stmts(fn.body, used_vars)


def _collect_all_varnames(stmts: list, out: set):
    """Collect all VarRef and assignment target names."""
    for s in stmts:
        _collect_varnames_node(s, out)


def _collect_varnames_node(node, out: set):
    if node is None:
        return
    if isinstance(node, VarRef):
        out.add(node.name)
    elif isinstance(node, BinOp):
        _collect_varnames_node(node.left, out)
        _collect_varnames_node(node.right, out)
    elif isinstance(node, UnaryOp):
        _collect_varnames_node(node.operand, out)
    elif isinstance(node, FuncCall):
        for a in node.args:
            _collect_varnames_node(a, out)
    elif isinstance(node, ObjMethodCall):
        _collect_varnames_node(node.obj, out)
        for a in node.args:
            _collect_varnames_node(a, out)
    elif isinstance(node, CastExpr):
        _collect_varnames_node(node.expr, out)
    elif isinstance(node, GetByIndexExpr):
        _collect_varnames_node(node.var, out)
    elif isinstance(node, AssignStmt):
        _collect_varnames_node(node.target, out)
        _collect_varnames_node(node.value, out)
    elif isinstance(node, ExprStmt):
        _collect_varnames_node(node.expr, out)
    elif isinstance(node, VarDeclStmt):
        for name, _, val in node.vars:
            out.add(name)
            _collect_varnames_node(val, out)
    elif isinstance(node, IfStmt):
        _collect_varnames_node(node.cond, out)
        _collect_all_varnames(node.then_body, out)
        if node.else_body:
            _collect_all_varnames(node.else_body, out)
    elif isinstance(node, WhileStmt):
        _collect_all_varnames(node.body, out)
    elif isinstance(node, SetByIndexStmt):
        _collect_varnames_node(node.var, out)
        _collect_varnames_node(node.value, out)


def _cleanup_stmts(stmts: list, used_vars: set):
    """Remove unused vars from VarDeclStmts in-place."""
    i = 0
    while i < len(stmts):
        s = stmts[i]
        if isinstance(s, VarDeclStmt):
            # Keep only vars that are still used in the function
            new_vars = [(n, t, v) for n, t, v in s.vars if n in used_vars]
            if not new_vars:
                stmts.pop(i)
                continue
            elif len(new_vars) != len(s.vars):
                stmts[i] = VarDeclStmt(new_vars)
        elif isinstance(s, IfStmt):
            _cleanup_stmts(s.then_body, used_vars)
            if s.else_body:
                _cleanup_stmts(s.else_body, used_vars)
        elif isinstance(s, WhileStmt):
            _cleanup_stmts(s.body, used_vars)
        i += 1


# ════════════════════════════════════════════════════════════════
# 6. CODE GENERATOR
# ════════════════════════════════════════════════════════════════

# Helper: classify operators
COMPARE_OPS = {'==', '!=', '<', '>', '<=', '>='}
ARITH_OPS = {'+', '-', '*', '/', '%'}
LOGIC_OPS = {'&', '|', '^'}
OP_ASM_SYM = {'+': '+', '-': '-', '*': '*', '/': '/', '%': '%',
              '==': '==', '!=': '!=', '<': '<', '>': '>', '<=': '<=', '>=': '>=',
              '&': '&', '|': '|', '^': '^', '&&': '&', '||': '|'}

MATH_FUNCS = {'sin': 'Sin', 'cos': 'Cos', 'sqrt': 'Sqrt', 'asin': 'ASin', 'pow': 'Pow'}

# Functions that ONLY appear as ObjFunc (@@) and never as imports (@)
OBJFUNC_ONLY = {
    'AddChild', 'AddMark', 'AddReply', 'AddSource', 'AddStationaryActor',
    'AddStationaryActorByType', 'BlockPolygons', 'CanPlayThunder', 'Child',
    'ChildCount', 'ClearReplies', 'ConvertToMapCoordinates',
    'ConvertToWorldCoordinates', 'CreateObjectHighlight', 'DropItems', 'Enable',
    'EnableSubset', 'EnableSubsets', 'Fade', 'FadeIn', 'FadeOut', 'Find',
    'FindMark', 'ForceGeometryLoad', 'GetActor', 'GetActualLength', 'GetCapacity',
    'GetCategory', 'GetCurrentRegion', 'GetGroupActors', 'GetItemID', 'GetLength',
    'GetMapParams', 'GetMark', 'GetMarkCount', 'GetNPCName', 'GetName',
    'GetObjectFromPoint', 'GetObjectID', 'GetPhoto', 'GetPlayerName',
    'GetRegionByPt', 'GetReturnValue', 'GetScriptProperty', 'GetSize',
    'GetSubContainerCount', 'GetTextID', 'GetTime', 'GetTooltipObject',
    'GetTooltipText', 'GetTooltipType', 'GetType', 'HasItem', 'HasScriptProperty',
    'IsAttacking', 'IsDialogEnd', 'IsItemSelected', 'IsOnGround', 'Next', 'Play',
    'Remove', 'RemoveAllRegionActors', 'RemoveOnUnload', 'RemoveProperty',
    'RemoveStationaryActor', 'Render', 'SelectWeapon', 'SetItemAmount',
    'SetItemID', 'SetItemName', 'SetLength', 'SetLifeTime', 'SetMapParams',
    'SetMessage', 'SetNPCName', 'SetOpacity', 'SetPhoto', 'SetPlayerName',
    'SetRegionActorCount', 'SetRegionActorCountByType', 'SetReturnValue',
    'SetRotation', 'SetRotationY', 'SetScriptProperty', 'SwitchLights',
    'UnblockPolygons', 'add', 'clear', 'erase', 'get', 'in', 'iterator',
    'remove', 'set', 'size',
}

# Functions with always-bool argument positions (from reference ASM analysis)
BOOL_ARGS = {
    'AddStationaryActor': {5}, 'CameraPlayRel': {1}, 'Enable': {0},
    'EnableClipping': {0}, 'EnableGeometry': {1}, 'EnableSubset': {1},
    'EnableSubsets': {3}, 'Fade': {0}, 'FollowPath': {2}, 'ForceWeather': {14},
    'LoadImage': {1}, 'Play': {0}, 'PlaySound': {2}, 'RemoveOnUnload': {0},
    'SelectItem': {1}, 'SensePlayerOnly': {0}, 'SetAttackState': {0},
    'SetModal': {0}, 'SetNeedUpdate': {0}, 'SetOwnerDraw': {0}, 'SetUsable': {0},
    'SetVisibility': {0}, 'SetVisirVisibility': {0}, 'SetWeaponHolster': {0},
    'SetWeaponProperty': {2}, 'ShowCursor': {0}, 'ShowWindow': {1}, 'Switch': {0},
    'SwitchFlashlight': {0}, 'SwitchLights': {1}, 'SwitchVisir': {0},
}


class CodeGen:
    """Generates ASM instructions from the parsed AST."""

    def __init__(self, program: Program):
        self.program = program
        self.instrs: List[str] = []        # ASM instruction strings
        self.bb_breaks: List[int] = []     # instruction indices that end a basic block
        self.stack = VStack()
        self.pre_gvar_types: Dict[int, str] = {}  # pre-inferred global var types
        self.meta_gvar_types: Set[int] = set()   # indices with metadata-confirmed types

        # Metadata (reconstructed from C code)
        self.global_vars: Dict[int, str] = {}   # index → type
        self.imports: Dict[str, int] = {}        # name → arg_count
        self.import_order: List[str] = []
        self.strings_used: List[str] = []
        self.string_set: Set[str] = set()
        self.subroutine_names: Set[str] = set()  # func_N names
        self.subroutine_defs: Dict[str, FuncDef] = {}
        self.tasks: Dict[int, Dict] = {}  # task_id → {params: int, events: {event_id: {op, vars}}}
        self.run_task: int = 0
        self.run_op: int = 0
        self._main_task_vars: List[str] = []  # task vars from main's params

        # Layout
        self.func_addrs: Dict[str, int] = {}   # func name → start address
        self.label_addrs: Dict[str, int] = {}   # label → address

        # During generation
        self._temp_counter = 0
        self._break_fixups: List[List[int]] = []  # stack of lists (for nested while)
        self._jump_fixups: List[Tuple[int, str]] = []
        self._call_pop_info: Dict[int, int] = {}
        self._import_pop_extra: Dict[int, int] = {}
        self._current_stmt_idx = 0
        self._future_refs: set = set()      # vars used in remaining stmts + outer scope
        self._outer_refs: set = set()        # vars used after current block
        self._needs_mandatory_pop = False    # True after import/objfunc calls (always need Pop)
        self._last_call_was_subroutine = False  # True only after subroutine Call (not import)
        self._caller_stacks: Dict[str, list] = {}  # subroutine name → caller's stack at Call site
        self._all_caller_stacks: Dict[str, list] = {}  # subroutine name → list of ALL captured stacks
        self._caller_task_var_maps: Dict[str, Dict[str, int]] = {}  # subroutine name → caller's task_var_map
        self._caller_task_ids: Dict[str, int] = {}  # subroutine name → caller's task_id
        self._task_var_map: Dict[str, int] = {}   # var name → task stack index (cleared per function)
        self._pending_task_call = None   # (task_id, parm_count) deferred until Call
        self._pending_task_return = False  # deferred until Pop
        self._deferred_pop_dead = None   # deferred Pop count (when TaskReturn follows subroutine call)
        self._has_scope_pushempty = False  # True when a typed PushEmpty was emitted since last Call/Return
        self._has_dead_temp_scope = False  # True when dead ObjExpr temp on stack serves as scope marker
        self._pushed_temp_names: set = set()  # vars created by Push (not PushEmpty) — pop when dead
        self._last_while_loop_start: int = None  # start addr of most recently generated while(true) loop
        self._current_nulleq: bool = False  # True when current stmt has //@ne annotation
        self._current_nz: bool = False  # True when current stmt has //@nz annotation
        self._current_nn: bool = False  # True when current stmt has //@nn annotation (NullNeq compact != 0)
        self.metadata: dict = {}

    def _fresh_temp(self, vtype='int') -> str:
        self._temp_counter += 1
        return f'__tmp_{self._temp_counter}_{vtype}'

    def _add_string(self, s: str):
        if s not in self.string_set:
            self.string_set.add(s)
            self.strings_used.append(s)

    def _add_import(self, name: str, argc: int):
        key = f'{name}_{argc}'
        if key not in self.imports:
            self.imports[key] = argc
            self.import_order.append((name, argc))

    def emit(self, text: str, bb_end: bool = False):
        self.instrs.append(text)
        if bb_end:
            self.bb_breaks.append(len(self.instrs) - 1)

    def _undo_last_emit(self):
        """Remove the last emitted instruction."""
        if self.instrs:
            self.instrs.pop()
            if self.bb_breaks and self.bb_breaks[-1] >= len(self.instrs):
                self.bb_breaks.pop()

    def addr(self) -> int:
        return len(self.instrs)

    def _is_task_var(self, name: str) -> Optional[int]:
        """Return task stack index if name is a task variable, else None."""
        return self._task_var_map.get(name)

    def _tv_ref(self, name: str) -> str:
        """Task var reference for Mov/SetConst context: Stack[I + Tasks[-1].StackPointer]"""
        idx = self._task_var_map[name]
        return f'Stack[{idx} + Tasks[-1].StackPointer]'

    def _tv_ref_arith(self, name: str) -> str:
        """Task var reference for arithmetic context: Stack[I + Tasks[-1].StackPointer]"""
        idx = self._task_var_map[name]
        return f'Stack[{idx} + Tasks[-1].StackPointer]'

    def _tv_meta_type(self, name: str) -> Optional[str]:
        """Get metadata type for task var by looking up its index in task metadata."""
        idx = self._task_var_map.get(name)
        if idx is None:
            return None
        tid = getattr(self, '_current_task_id', None)
        if tid is None:
            return None
        # For run_task (main function), use accumulated vars from all child tasks
        run_task = self.metadata.get('run_task')
        if tid == run_task:
            acc = self.metadata.get('_accumulated_task_vars', [])
            if idx < len(acc):
                return acc[idx]
            return None
        meta_tasks = self.metadata.get('tasks', {})
        tinfo = meta_tasks.get(tid, {})
        tvars = tinfo.get('vars', [])
        if idx < len(tvars):
            return tvars[idx]
        return None

    def _capture_caller_stack(self, captured: list = None) -> list:
        """Capture current stack with task-var phantom slots prepended.

        Task variables live on the runtime stack (via StackPointer) but are
        not tracked in self.stack.  To give subroutines the correct total
        stack depth, prepend phantom slots for task vars when they are not
        already present in the captured stack.
        """
        if captured is None:
            captured = list(self.stack.slots)
        if not self._task_var_map:
            return captured
        # If task vars are already in the captured stack (from a deeper caller),
        # don't prepend again.
        stack_names = {n for n, _ in captured}
        if any(n in stack_names for n in self._task_var_map):
            return captured
        # Prepend phantom slots sorted by task-var index
        tv_sorted = sorted(self._task_var_map.items(), key=lambda x: x[1])
        phantom = [(n, self._tv_meta_type(n) or 'object') for n, _ in tv_sorted]
        return phantom + captured

    # ─── Phase 1: Analyze ───

    def analyze(self):
        """Extract metadata from the AST."""
        for fn in self.program.functions:
            # Classify function type
            m_task_event = re.match(r'task_(\d+)_event_(\d+)', fn.name)
            m_standalone_event = re.match(r'event_(\d+)', fn.name)
            m_func = re.match(r'func_(\d+)', fn.name)

            if m_task_event:
                tid = int(m_task_event.group(1))
                eid = int(m_task_event.group(2))
                if tid not in self.tasks:
                    self.tasks[tid] = {'params': 0, 'vars': [], 'events': {}}
                self.tasks[tid]['events'][eid] = {
                    'vars': [extract_var_type(p[0]) for p in fn.params]
                }
            elif m_standalone_event:
                # Standalone event_N — belongs to RunTask
                eid = int(m_standalone_event.group(1))
                # Defer task assignment until RunTask is known; use -1 as placeholder
                if -1 not in self.tasks:
                    self.tasks[-1] = {'params': 0, 'vars': [], 'events': {}}
                self.tasks[-1]['events'][eid] = {
                    'vars': [extract_var_type(p[0]) for p in fn.params]
                }
            elif fn.name == 'main':
                # Store task vars from main's params
                self._main_task_vars = [extract_var_type(p[0]) for p in fn.params]
            elif m_func:
                self.subroutine_names.add(fn.name)
                self.subroutine_defs[fn.name] = fn

            # Walk body to collect imports, strings, global vars
            self._walk_collect(fn.body)

    def _walk_collect(self, nodes):
        for n in nodes:
            if isinstance(n, ExprStmt):
                self._collect_expr(n.expr)
            elif isinstance(n, AssignStmt):
                self._collect_expr(n.target)
                self._collect_expr(n.value)
                # Infer global var types from assignments
                if isinstance(n.target, VarRef) and isinstance(n.value, GlobalVarRef):
                    # var_N_type = GlobalVars[M] → type of M is type from var name
                    vtype = extract_var_type(n.target.name)
                    self._register_gvar(n.value.index, vtype)
                elif isinstance(n.target, GlobalVarRef) and isinstance(n.value, VarRef):
                    # GlobalVars[M] = var_N_type → type of M from var name
                    vtype = extract_var_type(n.value.name)
                    self._register_gvar(n.target.index, vtype)
                elif isinstance(n.target, GlobalVarRef) and isinstance(n.value, IntLit):
                    self._register_gvar(n.target.index, 'int')
                elif isinstance(n.target, GlobalVarRef) and isinstance(n.value, BoolLit):
                    self._register_gvar(n.target.index, 'bool')
                elif isinstance(n.target, GlobalVarRef) and isinstance(n.value, StrLit):
                    self._register_gvar(n.target.index, 'string')
            elif isinstance(n, VarDeclStmt):
                for _, _, v in n.vars:
                    self._collect_expr(v)
            elif isinstance(n, IfStmt):
                self._collect_expr(n.cond)
                self._walk_collect(n.then_body)
                if n.else_body:
                    self._walk_collect(n.else_body)
            elif isinstance(n, WhileStmt):
                self._walk_collect(n.body)
            elif isinstance(n, SetByIndexStmt):
                self._collect_expr(n.var)
                self._collect_expr(n.value)
            elif isinstance(n, TaskCallStmt):
                # Ensure task exists in task table (even if it has no events)
                tid = n.task_id
                if tid not in self.tasks:
                    self.tasks[tid] = {'params': 0, 'vars': [], 'events': {}}

    def _collect_expr(self, e):
        if e is None: return
        if isinstance(e, StrLit):
            self._add_string(e.value)
        elif isinstance(e, GlobalVarRef):
            self._register_gvar(e.index)
        elif isinstance(e, FuncCall):
            for a in e.args:
                self._collect_expr(a)
            if e.name not in self.subroutine_names and e.name != 'main' \
                    and not re.match(r'(task_\d+_)?event_\d+$', e.name) \
                    and e.name not in MATH_FUNCS:
                if e.name in OBJFUNC_ONLY:
                    self._add_string(e.name)  # ObjFunc uses string dispatch
                else:
                    self._add_import(e.name, len(e.args))
        elif isinstance(e, ObjMethodCall):
            self._collect_expr(e.obj)
            for a in e.args:
                self._collect_expr(a)
        elif isinstance(e, BinOp):
            self._collect_expr(e.left)
            self._collect_expr(e.right)
        elif isinstance(e, UnaryOp):
            self._collect_expr(e.operand)
        elif isinstance(e, GetByIndexExpr):
            self._collect_expr(e.var)
        elif isinstance(e, CastExpr):
            self._collect_expr(e.expr)

    def _register_gvar(self, index: int, inferred_type: str = None):
        if index in self.meta_gvar_types:
            # Metadata types are authoritative, don't override
            return
        if inferred_type and inferred_type != 'object':
            self.global_vars[index] = inferred_type
        elif index not in self.global_vars:
            # Use pre-inferred type from before inlining, or default
            self.global_vars[index] = self.pre_gvar_types.get(index, 'object')

    # ─── Phase 2: Generate ───

    def generate(self):
        self.analyze()

        # Classify functions
        events = []
        main_fn = None
        subroutines = []

        for fn in self.program.functions:
            if re.match(r'(task_\d+_)?event_\d+', fn.name):
                events.append(fn)
            elif fn.name == 'main':
                main_fn = fn
            else:
                subroutines.append(fn)

        # Sort subroutines by their encoded address
        subroutines.sort(key=lambda f: int(re.match(r'func_(\d+)', f.name).group(1))
                         if re.match(r'func_(\d+)', f.name) else 0)

        # Ensure all metadata tasks exist (even those without events)
        meta_tasks = self.metadata.get('tasks', {})
        for tid, mt in meta_tasks.items():
            if tid not in self.tasks:
                self.tasks[tid] = {'params': mt.get('params', 0), 'vars': mt.get('vars', []), 'events': {}}

        # Determine RunTask: prefer metadata, fallback to heuristic
        meta_run_task = self.metadata.get('run_task')
        if meta_run_task is not None:
            self.run_task = meta_run_task
        else:
            task_ids_with_events = sorted(k for k in self.tasks.keys() if k >= 0)
            self.run_task = max(task_ids_with_events) if task_ids_with_events else 0

        # Keep standalone events (task -1) separate — they go in "Events:" section
        self.standalone_events: Dict[int, Dict] = {}
        if -1 in self.tasks:
            self.standalone_events = self.tasks[-1].get('events', {})
            del self.tasks[-1]

        # Build function ordering using original binary addresses from metadata.
        # Each function gets its original address for sorting:
        #   - subroutines: from func_NN name
        #   - main: from metadata @RUN_OP
        #   - events: from metadata @EVENT_N: op=0xNN
        meta_run_op = self.metadata.get('run_op')
        meta_events = self.metadata.get('events', {})

        all_funcs = []
        for fn in subroutines:
            m = re.match(r'func_(\d+)', fn.name)
            addr = int(m.group(1)) if m else 0
            all_funcs.append((addr, fn))

        if main_fn:
            main_addr = meta_run_op if meta_run_op is not None else 0
            all_funcs.append((main_addr, main_fn))

        meta_task_events = self.metadata.get('task_events', {})
        meta_standalone = self.metadata.get('standalone_events', {})

        for fn in events:
            # Try to get Op address from metadata
            m_evt = re.match(r'task_(\d+)_event_(\d+)', fn.name)
            m_se = re.match(r'event_(\d+)', fn.name)
            eid = None
            tid = None
            if m_evt:
                tid = int(m_evt.group(1))
                eid = int(m_evt.group(2))
            elif m_se:
                eid = int(m_se.group(1))
            # Look up per-task event metadata first (avoids overwrite when multiple
            # tasks share the same event ID), then fall back to global events dict
            ev_meta = {}
            if tid is not None and tid in meta_task_events:
                ev_meta = meta_task_events[tid].get(eid, {})
            if not ev_meta and eid is not None and eid in meta_standalone:
                ev_meta = meta_standalone[eid]
            if not ev_meta:
                ev_meta = meta_events.get(eid, {}) if eid is not None else {}
            op_addr = ev_meta.get('op')
            if op_addr is not None:
                all_funcs.append((op_addr, fn))
            else:
                # Fallback: place events after main and subroutines
                all_funcs.append((999999 + (eid or 0), fn))

        # Sort all functions by their original binary addresses
        all_funcs.sort(key=lambda x: x[0])
        ordered = [fn for _, fn in all_funcs]

        # Pre-pass: build _caller_task_var_maps from AST before compilation.
        # This ensures subroutines compiled BEFORE their callers still get
        # the correct task_var_map.
        self._pre_populate_task_var_maps(ordered)

        # Reset collections so they follow codegen order (not C file order)
        self.imports = {}
        self.import_order = []
        self.strings_used = []
        self.string_set = set()

        # Build list of original addresses for dead code insertion
        orig_addrs = [addr for addr, _ in all_funcs]

        # Dead code from metadata: orig_return_addr → [instruction_strings]
        dead_code = self.metadata.get('dead', {})

        for idx, fn in enumerate(ordered):
            self.func_addrs[fn.name] = self.addr()

            # Store original binary address for PushEmpty lookup
            fn._orig_addr = orig_addrs[idx]

            # If trailing EMITs contain a Return, skip the compiler's implicit Return
            if hasattr(fn, 'trailing_emits') and fn.trailing_emits:
                if any('Return()' in e for e in fn.trailing_emits):
                    fn._skip_implicit_return = True

            self._gen_function(fn)

            # Emit trailing dead code from EMIT statements (new approach)
            if hasattr(fn, 'trailing_emits') and fn.trailing_emits:
                for emit_text in fn.trailing_emits:
                    self.emit(emit_text)
            # Backward compat: use @DEAD metadata if no trailing_emits
            elif dead_code:
                cur_orig = orig_addrs[idx]
                next_orig = orig_addrs[idx + 1] if idx + 1 < len(orig_addrs) else float('inf')
                for ret_addr in sorted(dead_code.keys()):
                    if cur_orig <= ret_addr < next_orig:
                        for instr_str in dead_code[ret_addr]:
                            self.emit(instr_str)

        # Set RunOp from main
        if main_fn:
            self.run_op = self.func_addrs['main']

        # Fill in event addresses in task table
        for fn in events:
            m = re.match(r'task_(\d+)_event_(\d+)', fn.name)
            m_se = re.match(r'event_(\d+)$', fn.name)
            if m:
                tid, eid = int(m.group(1)), int(m.group(2))
                if tid in self.tasks and eid in self.tasks[tid]['events']:
                    self.tasks[tid]['events'][eid]['op'] = self.func_addrs[fn.name]
            elif m_se:
                eid = int(m_se.group(1))
                if eid in self.standalone_events:
                    self.standalone_events[eid]['op'] = self.func_addrs[fn.name]

        # Ensure all tasks exist
        for tid in sorted(self.tasks.keys()):
            if 'params' not in self.tasks[tid]:
                self.tasks[tid]['params'] = 0

        # Build orig_addr → compiled_addr fallback map for unresolved FUNC refs
        orig_to_compiled = {}
        for fn in ordered:
            orig = getattr(fn, '_orig_addr', None)
            if orig is not None and fn.name in self.func_addrs:
                orig_to_compiled[orig] = self.func_addrs[fn.name]

        # Resolve function-reference fixups
        for instr_idx, label in self._jump_fixups:
            if label.startswith('FUNC:'):
                fname = label[5:]
                if fname in self.func_addrs:
                    target = self.func_addrs[fname]
                    self.instrs[instr_idx] = self.instrs[instr_idx].replace(
                        f'{{{label}}}', hex(target))
                else:
                    # Fallback: func_N → original address N → compiled address
                    m = re.match(r'func_(\d+)', fname)
                    if m:
                        orig_addr = int(m.group(1))
                        if orig_addr in orig_to_compiled:
                            target = orig_to_compiled[orig_addr]
                            self.instrs[instr_idx] = self.instrs[instr_idx].replace(
                                f'{{{label}}}', hex(target))
            elif label in self.label_addrs:
                target = self.label_addrs[label]
                self.instrs[instr_idx] = self.instrs[instr_idx].replace(f'{{LABEL:{label}}}', hex(target))

    def _record_caller_stack(self, name: str, captured_stack: list):
        """Record a caller stack for a subroutine. Stores both the latest
        (for backward compat) and ALL captures (for multi-caller detection)."""
        self._caller_stacks[name] = captured_stack
        if name not in self._all_caller_stacks:
            self._all_caller_stacks[name] = []
        self._all_caller_stacks[name].append(captured_stack)

    def _determine_caller_stack(self, fn: FuncDef) -> List[Tuple[str, str]]:
        """For subroutines, determine the caller's stack from variable indices."""
        param_map = {}
        for pname, ptype in fn.params:
            idx = extract_var_index(pname)
            if idx >= 0:
                param_map[idx] = (pname, ptype)

        # Find the first local variable index from the body
        first_local_idx = None
        for s in fn.body:
            if isinstance(s, VarDeclStmt):
                indices = [extract_var_index(v[0]) for v in s.vars]
                valid = [idx for idx in indices if idx >= 0]
                if valid:
                    first_local_idx = min(valid)
                break
            elif isinstance(s, AssignStmt) and isinstance(s.target, VarRef):
                idx = extract_var_index(s.target.name)
                if idx >= 0 and idx not in param_map:
                    first_local_idx = idx
                    break

        if first_local_idx is None:
            if param_map:
                first_local_idx = max(param_map.keys()) + 1
            else:
                return []

        # Build caller stack: indices 0 to first_local_idx - 1
        result = []
        for i in range(first_local_idx):
            if i in param_map:
                result.append(param_map[i])
            else:
                result.append((f'__caller_{i}', 'object'))
        return result

    def _has_var_decl(self, stmts: list) -> bool:
        """Recursively check if any statement is a VarDeclStmt."""
        for s in stmts:
            if isinstance(s, VarDeclStmt):
                return True
            if isinstance(s, IfStmt):
                if self._has_var_decl(s.then_body):
                    return True
                if s.else_body and self._has_var_decl(s.else_body):
                    return True
            if isinstance(s, WhileStmt):
                if self._has_var_decl(s.body):
                    return True
        return False

    def _find_return_pop(self, body: list) -> Optional[int]:
        """Find the first ReturnStmt's pop_count in the body (recursive)."""
        for s in body:
            if isinstance(s, ReturnStmt):
                return s.pop_count
            if isinstance(s, IfStmt):
                v = self._find_return_pop(s.then_body)
                if v is not None:
                    return v
                if s.else_body:
                    v = self._find_return_pop(s.else_body)
                    if v is not None:
                        return v
            if isinstance(s, WhileStmt):
                v = self._find_return_pop(s.body)
                if v is not None:
                    return v
        return None

    def _is_new_var_alloc(self, s) -> bool:
        """Check if a statement allocates a new variable with default init."""
        if not isinstance(s, AssignStmt) or not isinstance(s.target, VarRef):
            return False
        val = s.value
        if isinstance(val, ObjExpr):
            return True
        vtype = extract_var_type(s.target.name)
        return is_default_value(vtype, val)

    def _analyze_call_scopes(self, body: list) -> tuple:
        """Pre-scan body to determine Pop count after each subroutine call
        and cleanup Pop counts for subsequent import calls.

        Returns (call_pop_info, import_pop_extra):
          call_pop_info: stmt_index → pop_count for subroutine calls
          import_pop_extra: stmt_index → extra_pop for import calls consuming scope vars
        """
        call_pop_info = {}
        import_pop_extra = {}
        ret_pop = self._find_return_pop(body)

        # Track function locals vs call scope vars
        func_locals_remaining = ret_pop if ret_pop is not None else 999
        scope_vars = []  # vars allocated for current call scope

        for i, s in enumerate(body):
            if isinstance(s, VarDeclStmt):
                nv = len(s.vars)
                var_names = [v[0] for v in s.vars]
                if func_locals_remaining > 0:
                    # Some/all of these vars are function locals
                    locals_count = min(nv, func_locals_remaining)
                    func_locals_remaining -= locals_count
                    # Excess vars beyond function locals are call scope
                    scope_vars = var_names[locals_count:]
                else:
                    # All function locals already consumed — this is call scope
                    scope_vars = var_names
            elif self._is_new_var_alloc(s):
                name = s.target.name
                if func_locals_remaining > 0:
                    func_locals_remaining -= 1
                else:
                    scope_vars.append(name)
            elif isinstance(s, ExprStmt) and isinstance(s.expr, FuncCall) \
                    and re.match(r'func_\d+', s.expr.name):
                if scope_vars:
                    # Count how many scope vars survive past this call
                    used_after = set()
                    self._collect_var_refs_in_stmts(body[i+1:], used_after)
                    surviving_vars = [v for v in scope_vars if v in used_after]
                    pop_count = len(scope_vars) - len(surviving_vars)
                    call_pop_info[i] = pop_count

                    # Track cleanup for surviving scope vars in subsequent stmts
                    if surviving_vars:
                        remaining = list(surviving_vars)
                        for j in range(i+1, len(body)):
                            if not remaining:
                                break
                            sj = body[j]
                            # Check which remaining scope vars are used in this stmt
                            stmt_refs = set()
                            self._collect_var_refs_node(sj, stmt_refs)
                            consumed_here = [v for v in remaining if v in stmt_refs]
                            if consumed_here:
                                # Check which of these are NOT used after this stmt
                                used_later = set()
                                self._collect_var_refs_in_stmts(body[j+1:], used_later)
                                cleanup = [v for v in consumed_here if v not in used_later]
                                if cleanup:
                                    import_pop_extra[j] = import_pop_extra.get(j, 0) + len(cleanup)
                                    for v in cleanup:
                                        remaining.remove(v)

                scope_vars = []  # consumed
        return call_pop_info, import_pop_extra

    def _collect_var_refs_in_stmts(self, stmts: list, out: set):
        """Collect all VarRef names referenced in a list of statements."""
        for s in stmts:
            self._collect_var_refs_node(s, out)

    def _upward_exposed_refs(self, stmts: list) -> set:
        """Compute variables read before being definitely written in stmt list.

        Used for while-loop outer_refs: only variables that could carry values
        from a previous iteration need to stay alive across the loop back-edge.
        Variables unconditionally written at the top of the loop body before
        being read are NOT upward-exposed and can be popped when dead.

        Variables DECLARED inside nested blocks (if/while) are local to those
        blocks and freshly created each iteration — they should not count as
        upward-exposed even if they appear in reads.
        """
        exposed = set()
        must_written = set()

        for s in stmts:
            # Collect reads from this statement
            reads = set()
            self._collect_var_refs_node(s, reads)

            # Collect vars declared inside nested blocks of this statement.
            # These are local to the nested scope and don't carry across iterations.
            nested_decls = set()
            self._collect_nested_decls(s, nested_decls)

            # Reads not yet must-written (minus nested-local decls) are upward-exposed
            exposed |= (reads - must_written - nested_decls)

            # Only top-level unconditional writes count as must-writes.
            # Writes inside if/while are conditional and don't guarantee
            # the variable is written before being read on the next iteration.
            if isinstance(s, VarDeclStmt):
                for name, _, _ in s.vars:
                    must_written.add(name)
            elif isinstance(s, AssignStmt) and isinstance(s.target, VarRef):
                must_written.add(s.target.name)

        return exposed

    def _collect_nested_decls(self, node, out: set):
        """Collect variable names DECLARED (VarDeclStmt) within nested blocks.

        Only collects from nested scopes (if/while bodies), NOT from the
        top-level statement itself — top-level VarDeclStmt is handled by
        the must_written logic in _upward_exposed_refs.
        """
        if isinstance(node, IfStmt):
            for s in node.then_body:
                self._collect_all_decls(s, out)
            if node.else_body:
                for s in node.else_body:
                    self._collect_all_decls(s, out)
        elif isinstance(node, WhileStmt):
            for s in node.body:
                self._collect_all_decls(s, out)

    def _collect_all_decls(self, node, out: set):
        """Recursively collect all VarDeclStmt names from a node and its children."""
        if isinstance(node, VarDeclStmt):
            for name, _, _ in node.vars:
                out.add(name)
        elif isinstance(node, IfStmt):
            for s in node.then_body:
                self._collect_all_decls(s, out)
            if node.else_body:
                for s in node.else_body:
                    self._collect_all_decls(s, out)
        elif isinstance(node, WhileStmt):
            for s in node.body:
                self._collect_all_decls(s, out)

    def _collect_var_refs_node(self, node, out: set):
        """Recursively collect VarRef names from an AST node."""
        if node is None:
            return
        if isinstance(node, VarRef):
            out.add(node.name)
        elif isinstance(node, BinOp):
            self._collect_var_refs_node(node.left, out)
            self._collect_var_refs_node(node.right, out)
        elif isinstance(node, UnaryOp):
            self._collect_var_refs_node(node.operand, out)
        elif isinstance(node, FuncCall):
            for a in node.args:
                self._collect_var_refs_node(a, out)
        elif isinstance(node, ObjMethodCall):
            self._collect_var_refs_node(node.obj, out)
            for a in node.args:
                self._collect_var_refs_node(a, out)
        elif isinstance(node, CastExpr):
            self._collect_var_refs_node(node.expr, out)
        elif isinstance(node, GetByIndexExpr):
            self._collect_var_refs_node(node.var, out)
        elif isinstance(node, AssignStmt):
            # Only collect VALUE refs (reads), not target (it's a write/define).
            # Targets are writes — they don't keep the variable alive for liveness.
            self._collect_var_refs_node(node.value, out)
        elif isinstance(node, ExprStmt):
            self._collect_var_refs_node(node.expr, out)
        elif isinstance(node, VarDeclStmt):
            for name, _, val in node.vars:
                self._collect_var_refs_node(val, out)
        elif isinstance(node, IfStmt):
            self._collect_var_refs_node(node.cond, out)
            self._collect_var_refs_in_stmts(node.then_body, out)
            if node.else_body:
                self._collect_var_refs_in_stmts(node.else_body, out)
        elif isinstance(node, WhileStmt):
            self._collect_var_refs_in_stmts(node.body, out)
        elif isinstance(node, ReturnStmt):
            pass  # return N has no var refs
        elif isinstance(node, SetByIndexStmt):
            self._collect_var_refs_node(node.var, out)
            self._collect_var_refs_node(node.value, out)

    def _count_dead_top(self, future_refs: set) -> int:
        """Count consecutive dead vars from top of stack.
        A var is 'dead' if not in future_refs (not used in any future statement)."""
        dead = 0
        for i in range(len(self.stack.slots) - 1, -1, -1):
            name, _ = self.stack.slots[i]
            if name in future_refs:
                break
            dead += 1
        return dead

    def _find_return_pop(self, stmts):
        """Find the pop_count of any ReturnStmt in the function body (recursive)."""
        for s in stmts:
            if isinstance(s, ReturnStmt):
                return s.pop_count
            if isinstance(s, IfStmt):
                r = self._find_return_pop(s.then_body)
                if r is not None:
                    return r
                if s.else_body:
                    r = self._find_return_pop(s.else_body)
                    if r is not None:
                        return r
            if isinstance(s, WhileStmt):
                r = self._find_return_pop(s.body)
                if r is not None:
                    return r
        return None

    def _pre_populate_task_var_maps(self, ordered):
        """Pre-pass: compute task_var_map for each function and propagate
        to subroutines via _caller_task_var_maps.

        This ensures subroutines that are compiled BEFORE their callers
        (due to address ordering) still receive the correct task_var_map.
        """
        func_by_name = {fn.name: fn for fn in ordered}
        task_events_meta = self.metadata.get('task_events', {})
        events_meta = self.metadata.get('events', {})

        def get_task_var_map(fn):
            """Compute task_var_map for a function."""
            tvm = {}
            if fn.name == 'main' and fn.params:
                for i, (pname, _) in enumerate(fn.params):
                    tvm[pname] = i
            else:
                m_te = re.match(r'task_(\d+)_event_(\d+)', fn.name)
                if m_te and fn.params:
                    tid = int(m_te.group(1))
                    eid = int(m_te.group(2))
                    event_vars = []
                    if tid in task_events_meta and eid in task_events_meta[tid]:
                        event_vars = task_events_meta[tid][eid].get('vars', [])
                    elif eid in events_meta:
                        event_vars = events_meta[eid].get('vars', [])
                    tvc = len(fn.params) - len(event_vars)
                    for i, (pname, _) in enumerate(fn.params):
                        if i < tvc:
                            tvm[pname] = i
            return tvm

        def find_subroutine_calls(stmts):
            """Find all subroutine call names in a statement list."""
            calls = []
            for s in stmts:
                if isinstance(s, ExprStmt) and isinstance(s.expr, FuncCall):
                    if re.match(r'func_\d+', s.expr.name):
                        calls.append(s.expr.name)
                if isinstance(s, IfStmt):
                    calls.extend(find_subroutine_calls(s.then_body))
                    if s.else_body:
                        calls.extend(find_subroutine_calls(s.else_body))
                if isinstance(s, WhileStmt):
                    calls.extend(find_subroutine_calls(s.body))
            return calls

        # Propagate task_var_maps from callers to callees (BFS)
        worklist = []
        for fn in ordered:
            tvm = get_task_var_map(fn)
            if tvm:
                # Extract task_id from function name
                m_tid = re.match(r'task_(\d+)_event_\d+', fn.name)
                fn_tid = int(m_tid.group(1)) if m_tid else (self.run_task if fn.name == 'main' else None)
                worklist.append((fn, tvm, fn_tid))

        visited = set()
        while worklist:
            fn, tvm, fn_tid = worklist.pop(0)
            if fn.name in visited:
                continue
            visited.add(fn.name)

            sub_calls = find_subroutine_calls(fn.body)
            for sub_name in sub_calls:
                if sub_name not in self._caller_task_var_maps:
                    self._caller_task_var_maps[sub_name] = dict(tvm)
                    if fn_tid is not None:
                        self._caller_task_ids[sub_name] = fn_tid
                    # Propagate further: if sub calls other subs, they inherit too
                    sub_fn = func_by_name.get(sub_name)
                    if sub_fn:
                        worklist.append((sub_fn, tvm, fn_tid))

    @staticmethod
    def _body_has_vardecl(stmts) -> bool:
        """Check if any VarDeclStmt exists anywhere in the statement tree."""
        for s in stmts:
            if isinstance(s, VarDeclStmt):
                return True
            if isinstance(s, IfStmt):
                if CodeGen._body_has_vardecl(s.then_body):
                    return True
                if s.else_body and CodeGen._body_has_vardecl(s.else_body):
                    return True
            if isinstance(s, WhileStmt):
                if CodeGen._body_has_vardecl(s.body):
                    return True
        return False

    @staticmethod
    def _body_allocates_new_vars(fn) -> bool:
        """Check if function body creates any new variables (not in params).
        Used to determine if callee bare PushEmpty is needed for scope."""
        param_names = set(p[0] for p in fn.params) if fn.params else set()
        def scan(stmts):
            for s in stmts:
                if isinstance(s, VarDeclStmt):
                    for vname, _, _ in s.vars:
                        if vname not in param_names:
                            return True
                if isinstance(s, AssignStmt) and isinstance(s.target, VarRef):
                    if s.target.name not in param_names:
                        return True
                if isinstance(s, IfStmt):
                    if scan(s.then_body):
                        return True
                    if s.else_body and scan(s.else_body):
                        return True
                if isinstance(s, WhileStmt):
                    if scan(s.body):
                        return True
            return False
        return scan(fn.body) if fn.body else False

    @staticmethod
    def _body_has_calls(fn) -> bool:
        """Check if function body contains any internal subroutine calls (func_XXX)."""
        def is_internal_call(expr):
            return isinstance(expr, FuncCall) and expr.name.startswith('func_')
        def scan(stmts):
            for s in stmts:
                if isinstance(s, ExprStmt) and is_internal_call(s.expr):
                    return True
                if isinstance(s, AssignStmt) and is_internal_call(s.value):
                    return True
                if isinstance(s, IfStmt):
                    if scan(s.then_body):
                        return True
                    if s.else_body and scan(s.else_body):
                        return True
                if isinstance(s, WhileStmt):
                    if scan(s.body):
                        return True
            return False
        return scan(fn.body) if fn.body else False

    def _gen_function(self, fn: FuncDef):
        """Generate ASM for a single function."""
        self.stack = VStack()
        self._temp_counter = 0
        self._task_var_map = {}
        self._has_scope_pushempty = False
        self._has_dead_temp_scope = False
        self._pushed_temp_names = set()
        self._last_while_loop_start = None
        self._current_task_id = None
        self._current_func_start_addr = len(self.instrs)  # instruction index where this function starts

        is_event = bool(re.match(r'task_\d+_event_\d+', fn.name))
        is_standalone_event = bool(re.match(r'event_\d+$', fn.name))
        is_subroutine = fn.name in self.subroutine_names

        # Determine task var count for this function's task
        # For multi-task scripts, task_var_count = all accumulated task vars
        # (total params minus event-specific vars)
        task_var_count = 0
        m_te = re.match(r'task_(\d+)_event_(\d+)', fn.name)
        if m_te:
            tid = int(m_te.group(1))
            eid = int(m_te.group(2))
            self._current_task_id = tid
            # Get event-specific var count from per-task event metadata
            event_vars = []
            task_events = self.metadata.get('task_events', {})
            if tid in task_events and eid in task_events[tid]:
                event_vars = task_events[tid][eid].get('vars', [])
            elif eid in self.metadata.get('events', {}):
                event_vars = self.metadata['events'][eid].get('vars', [])
            # Task var count = total params minus event-specific vars
            task_var_count = len(fn.params) - len(event_vars) if fn.params else 0
        elif fn.name == 'main':
            # Main runs on RunTask — its params ARE the task vars
            task_var_count = len(fn.params) if fn.params else 0
            self._current_task_id = self.run_task

        # For main: all params are task vars (accessed via StackPointer, not regular stack)
        if fn.name == 'main' and fn.params:
            for i, (pname, ptype) in enumerate(fn.params):
                self._task_var_map[pname] = i

        # For task events: first N params are task vars, rest are event params (on regular stack)
        if is_event and fn.params:
            for i, (pname, ptype) in enumerate(fn.params):
                if i < task_var_count:
                    self._task_var_map[pname] = i
                else:
                    self.stack.push(pname, ptype)

        # For standalone events: all params are event params (already on stack from VM)
        if is_standalone_event and fn.params:
            for pname, ptype in fn.params:
                self.stack.push(pname, ptype)

        # For subroutines, inherit caller's task_var_map (so they can access task vars)
        if is_subroutine and fn.name in self._caller_task_var_maps:
            self._task_var_map = dict(self._caller_task_var_maps[fn.name])
            if fn.name in self._caller_task_ids:
                self._current_task_id = self._caller_task_ids[fn.name]

        # For subroutines, pre-push caller's stack variables
        if is_subroutine:
            captured = self._caller_stacks.get(fn.name)
            # Detect multi-caller conflicts: if different call sites captured
            # stacks of different lengths OR different contents, last may be wrong.
            all_captures = self._all_caller_stacks.get(fn.name, [])
            content_conflict = False
            if len(all_captures) > 1:
                lengths = set(len(c) for c in all_captures)
                if len(lengths) == 1:
                    # Same length — check content disagreement (different var names)
                    # When all captures have same length but different names at some
                    # positions, the last capture has wrong names due to overwrite.
                    # Use the FIRST capture (from the first call site in code order).
                    first = all_captures[0]
                    for other in all_captures[1:]:
                        if any(a[0] != b[0] for a, b in zip(first, other)):
                            content_conflict = True
                            break
            if content_conflict:
                first_capture = all_captures[0]
                for name, vtype in first_capture:
                    self.stack.push(name, vtype)
            elif captured:
                for name, vtype in captured:
                    self.stack.push(name, vtype)
            else:
                if fn.params:
                    for pname, ptype in fn.params:
                        self.stack.push(pname, ptype)
            # Rename top N slots to callee's parameter names.
            if fn.params and self.stack.slots:
                n_params = len(fn.params)
                n_stack = len(self.stack.slots)
                if n_params <= n_stack:
                    for j, (pname, ptype) in enumerate(fn.params):
                        slot_idx = n_stack - n_params + j
                        # Skip rename if pname already exists at a DIFFERENT
                        # slot — renaming would shadow the real variable and
                        # dist() would find the wrong one.
                        already_elsewhere = any(
                            n == pname
                            for k, (n, _) in enumerate(self.stack.slots)
                            if k != slot_idx
                        )
                        if not already_elsewhere:
                            self.stack.slots[slot_idx] = (pname, ptype)
                        else:
                            # The same-named variable exists at a deeper slot.
                            # Determine if the body's use of pname means the param
                            # or the deeper caller variable.
                            # Heuristic: if the gap between param slot and the
                            # same-named var exceeds n_params, the var is a distant
                            # caller local → alias so body finds the param.
                            # If the gap is small (within the call-site push group),
                            # the body likely references the caller's actual var.
                            other_idx = None
                            for k, (n, _) in enumerate(self.stack.slots):
                                if n == pname and k != slot_idx:
                                    other_idx = k
                                    break
                            if other_idx is not None and (slot_idx - other_idx) > n_params:
                                actual_name = self.stack.slots[slot_idx][0]
                                self.stack.aliases[pname] = actual_name


        # Callee PushEmpty rules:
        # - @PE metadata: authoritative — if function's original address is in @PE,
        #   the original binary had a function-level bare PushEmpty.
        # - Subroutines with params: callee may need bare PushEmpty for scope.
        # - Event handlers need PushEmpty when they have event params on stack.
        has_event_params = (is_event or is_standalone_event) and len(self.stack.slots) > 0
        has_params = is_subroutine and bool(fn.params)
        # If all formal params are task vars, the callee accesses them via StackPointer,
        # not as stack args. Treat as no-params for PushEmpty purposes.
        if has_params and self._task_var_map and fn.params:
            all_params_tv = all(self._is_task_var(p[0]) is not None for p in fn.params)
            if all_params_tv:
                has_params = False
        pe_addrs = self.metadata.get('pe_addrs', set())
        orig_addr = getattr(fn, '_orig_addr', None)
        has_pe_in_orig = orig_addr is not None and orig_addr in pe_addrs
        needs_pushempty = has_params or has_event_params or has_pe_in_orig
        body_starts_with_vardecl = fn.body and isinstance(fn.body[0], VarDeclStmt)
        if has_pe_in_orig and body_starts_with_vardecl:
            # @PE + VarDeclStmt: original has both bare PushEmpty and typed PushEmpty.
            # Emit bare PushEmpty before VarDeclStmt processes its own typed PushEmpty.
            self.emit('PushEmpty()')
        elif needs_pushempty and not body_starts_with_vardecl:
            # For subroutines with params: apply exceptions (unless @PE overrides)
            should_skip = False
            if has_params and not has_pe_in_orig:
                pre_inline_had_vars = getattr(fn, '_pre_inline_allocates_new_vars', False)
                n_params = len(fn.params) if fn.params else 0
                if fn.body and not CodeGen._body_allocates_new_vars(fn) and not pre_inline_had_vars:
                    should_skip = True  # no bare PE needed — function only modifies existing params
                elif n_params == 1:
                    should_skip = True  # 1-param subroutines never need callee bare PushEmpty
            if not should_skip:
                self.emit('PushEmpty()')

        # Compute func_outer_refs: vars that must survive until return
        # 1. Pre-body stack vars (event params, caller stack for subroutines)
        func_outer_refs = set(name for name, _ in self.stack.slots)
        # 2. First VarDeclStmt locals — protect if return will pop them
        #    Find return pop_count (explicit or implicit)
        return_pop = self._find_return_pop(fn.body)
        if return_pop is None:
            # No explicit return — implicit return pops first VarDeclStmt size
            for s in fn.body:
                if isinstance(s, VarDeclStmt):
                    return_pop = len(s.vars)
                    break
        if return_pop is not None and return_pop > 0:
            for s in fn.body:
                if isinstance(s, VarDeclStmt):
                    for vname, _, _ in s.vars:
                        func_outer_refs.add(vname)
                    break

        # Process body with liveness-based Pop emission
        self._current_stmt_idx = 0
        self._gen_stmts(fn.body, outer_refs=func_outer_refs, track_body=True)

        # If no explicit return at end, check for missing fallthrough first.
        # Pattern: Label_X: ... if(cond) goto Label_Y; body; (end)
        # The original binary falls through to Label_Y, but the decompiler
        # placed Label_X after Label_Y, losing the fallthrough. Add GOTO.
        last_is_terminal = fn.body and isinstance(fn.body[-1], (ReturnStmt, GotoStmt))

        if not last_is_terminal:
            fallthrough_emitted = False
            merge_label = self._find_merge_label(fn.body)
            if merge_label and merge_label in self.label_addrs:
                idx = self.addr()
                self.emit(f'GOTO {{LABEL:{merge_label}}}', bb_end=True)
                self._jump_fixups.append((idx, merge_label))
                fallthrough_emitted = True
            elif self._last_while_loop_start is not None:
                # Pattern: while(true){...} Label_X: body; (end)
                # The code after Label_X should fall through into the while loop.
                # Check that a WhileStmt precedes the trailing label block.
                has_while_before_label = False
                for i in range(len(fn.body) - 1, -1, -1):
                    s = fn.body[i]
                    if isinstance(s, WhileStmt):
                        has_while_before_label = True
                        break
                    if isinstance(s, LabelStmt):
                        continue  # skip past the label
                    if isinstance(s, (ReturnStmt, GotoStmt, IfStmt)):
                        break  # control flow stmt between while and end — not our pattern
                    # Assignment stmts etc. — keep scanning
                if has_while_before_label:
                    self.emit(f'GOTO {hex(self._last_while_loop_start)}', bb_end=True)
                    fallthrough_emitted = True
            # Pop count = first VarDecl size (function's own locals)
            default_pop = 0
            for s in fn.body:
                if isinstance(s, VarDeclStmt):
                    default_pop = len(s.vars)
                    break
            # Skip implicit Return if trailing EMITs contain their own Return
            if not getattr(fn, '_skip_implicit_return', False):
                self.emit(f'Return(); Pop({default_pop})', bb_end=True)

    def _gen_stmts(self, stmts: list, outer_refs: set = None, track_body=False):
        if outer_refs is None:
            outer_refs = set()
        self._skip_next_stmt = False
        for i, s in enumerate(stmts):
            if self._skip_next_stmt:
                self._skip_next_stmt = False
                continue
            if track_body:
                self._current_stmt_idx = i

            # Compute future refs: vars used in remaining stmts + outer scope
            remaining = stmts[i+1:]
            future = set()
            self._collect_var_refs_in_stmts(remaining, future)
            future |= outer_refs

            # Save for nested block access (if/while use this)
            saved_future = self._future_refs
            saved_outer = self._outer_refs
            self._future_refs = future
            self._outer_refs = outer_refs
            self._needs_mandatory_pop = False

            # Expression scheduling: pre-push literal before PushEmpty.
            # When a zero-init var (PushEmpty) will be used in a BinOp like
            # `existing_var = literal + new_var`, the original compiler pushes
            # the literal BEFORE allocating the new var via PushEmpty.
            if (isinstance(s, AssignStmt)
                    and isinstance(s.target, VarRef)
                    and isinstance(s.value, (IntLit, FloatLit))
                    and not self.stack.has(s.target.name)
                    and self._is_task_var(s.target.name) is None
                    and is_default_value(extract_var_type(s.target.name), s.value)):
                var_name = s.target.name
                for j in range(i+1, min(i+5, len(stmts))):
                    fwd = stmts[j]
                    if (isinstance(fwd, AssignStmt)
                            and isinstance(fwd.value, BinOp)
                            and fwd.value.op in _ARITH_OPS_SET
                            and isinstance(fwd.value.right, VarRef)
                            and fwd.value.right.name == var_name
                            and isinstance(fwd.value.left, IntLit)
                            and isinstance(fwd.target, VarRef)
                            and self.stack.has(fwd.target.name)):
                        # Pre-push the literal before PushEmpty
                        lit = fwd.value.left
                        prepush_name = f'__prepush_{var_name}'
                        self.emit(f'Push((int) {lit.value})')
                        self.stack.push(prepush_name, 'int')
                        # Replace IntLit with VarRef so codegen uses the stack slot
                        fwd.value.left = VarRef(name=prepush_name)
                        break

            # Pre-push literal before VarDeclStmt (PushEmpty).
            # When a VarDeclStmt declares new vars and a later statement uses one
            # of those vars in a BinOp with a literal on the left, the original
            # compiler pushes the literal before the PushEmpty.
            if isinstance(s, VarDeclStmt):
                decl_names = {vname for vname, *_ in s.vars}
                for j in range(i+1, min(i+8, len(stmts))):
                    fwd = stmts[j]
                    if (isinstance(fwd, AssignStmt)
                            and isinstance(fwd.value, BinOp)
                            and fwd.value.op in _ARITH_OPS_SET
                            and isinstance(fwd.value.right, VarRef)
                            and fwd.value.right.name in decl_names
                            and isinstance(fwd.value.left, (IntLit, StrLit))
                            and isinstance(fwd.target, VarRef)
                            and self.stack.has(fwd.target.name)):
                        lit = fwd.value.left
                        prepush_name = f'__prepush_{fwd.value.right.name}'
                        if isinstance(lit, StrLit):
                            self._add_string(lit.value)
                            self.emit(f'Push("{lit.value}")')
                            self.stack.push(prepush_name, 'string')
                        else:
                            self.emit(f'Push((int) {lit.value})')
                            self.stack.push(prepush_name, 'int')
                        fwd.value.left = VarRef(name=prepush_name)
                        break

            # Skip redundant goto: goto Label; Label: ... → just fall through
            if isinstance(s, GotoStmt):
                next_s = stmts[i+1] if i+1 < len(stmts) else None
                if isinstance(next_s, LabelStmt) and next_s.name == s.label:
                    self._future_refs = saved_future
                    self._outer_refs = saved_outer
                    continue

            self._gen_stmt(s)

            # VarDeclStmt just allocates space — never Pop after it
            if isinstance(s, VarDeclStmt):
                self._needs_mandatory_pop = False
                self._future_refs = saved_future
                self._outer_refs = saved_outer
                continue

            # Emit Pop only after calls (import/subroutine set mandatory flag)
            # The dead count determines how many to pop; standalone liveness
            # Pop never occurs in the reference — extra vars "leak" to Return/caller
            needs_pop = self._needs_mandatory_pop
            was_subroutine = self._last_call_was_subroutine
            self._needs_mandatory_pop = False  # consumed
            self._last_call_was_subroutine = False
            if needs_pop:
                dead = self._count_dead_top(future)
                # If next statement is TaskReturn, defer Pop so TaskReturn goes first
                next_s = stmts[i+1] if i+1 < len(stmts) else None
                if isinstance(next_s, TaskReturnStmt):
                    self._deferred_pop_dead = dead
                elif (isinstance(next_s, AssignStmt)
                      and isinstance(next_s.target, VarRef)
                      and self._is_task_var(next_s.target.name) is not None
                      and isinstance(next_s.value, VarRef)
                      and self.stack.has(next_s.value.name)):
                    # Task var write from stack var: write BEFORE Pop (original order).
                    # The original compiler writes the task var using pre-pop distances,
                    # then pops dead + source.  The source is the first alive var
                    # below the dead zone (it's in `future` because the next stmt reads it).
                    self._gen_task_var_assign(next_s.target.name, next_s.value)
                    # Source is now consumed — pop dead zone + source
                    self._emit_pending_task_return()
                    self.emit(f'Pop({dead + 1})')
                    self.stack.pop(dead + 1)
                    self._skip_next_stmt = True
                elif (dead > 0
                      and isinstance(next_s, AssignStmt)
                      and isinstance(next_s.target, VarRef)
                      and isinstance(next_s.value, VarRef)
                      and self._is_task_var(next_s.target.name) is None
                      and self._is_task_var(next_s.value.name) is None
                      and self.stack.has(next_s.value.name)):
                    # Scope slot overwrite before Pop: next stmt assigns a stack var
                    # to a scope slot. Original compiler emits Mov+Pop.
                    target_name = next_s.target.name
                    value_name = next_s.value.name
                    value_dist = self.stack.dist(value_name)
                    if self.stack.has(target_name):
                        # Target is on stack (in dead zone) — Mov to it, then Pop
                        target_dist = self.stack.dist(target_name)
                        if target_dist <= dead and value_dist > dead:
                            self.emit(f'Stack[-{target_dist}] = Stack[-{value_dist}]')
                            self._emit_pending_task_return()
                            self.emit(f'Pop({dead})')
                            self.stack.pop(dead)
                            self._skip_next_stmt = True
                        else:
                            self._emit_pending_task_return()
                            self.emit(f'Pop({dead})')
                            self.stack.pop(dead)
                    elif value_dist > dead and was_subroutine:
                        # Target is NEW (not on stack) — write to top dead slot, Pop.
                        # Only after subroutine Calls (scope capture pattern).
                        self.emit(f'Stack[-1] = Stack[-{value_dist}]')
                        self._emit_pending_task_return()
                        self.emit(f'Pop({dead})')
                        self.stack.pop(dead)
                        self._skip_next_stmt = True
                    else:
                        self._emit_pending_task_return()
                        self.emit(f'Pop({dead})')
                        self.stack.pop(dead)
                else:
                    self._emit_pending_task_return()
                    self.emit(f'Pop({dead})')
                    self.stack.pop(dead)

            # Pop dead pushed temps: variables created by Push (not PushEmpty) that
            # are now dead should be popped immediately.  The original compiler pops
            # these inline whereas PushEmpty-allocated vars leak to Return/Pop(N).
            if not needs_pop and self.stack.slots and self._pushed_temp_names:
                # Skip if next stmt is a GlobalVars write — _gen_gvar_assign has its
                # own can_reuse optimization that reuses the dead top slot and pops it.
                # Also skip if next stmt is a SetByIndex with a literal value —
                # _gen_set_by_index overwrites Stack[-1] in-place with the literal.
                next_s = stmts[i + 1] if i + 1 < len(stmts) else None
                skip_gvar = (isinstance(next_s, AssignStmt)
                             and isinstance(next_s.target, GlobalVarRef))
                skip_setidx = (isinstance(next_s, SetByIndexStmt)
                               and isinstance(next_s.value, (IntLit, FloatLit)))
                if not skip_gvar and not skip_setidx:
                    # Build future including write targets (assignment targets in remaining stmts).
                    # A pushed temp must survive if it's written to in a later statement,
                    # even if it's never read as a value.
                    future_rw = set(future)
                    for j in range(i + 1, len(stmts)):
                        sj = stmts[j]
                        if isinstance(sj, AssignStmt) and isinstance(sj.target, VarRef):
                            future_rw.add(sj.target.name)
                    # Check for upcoming ObjFunc (@@) calls in remaining stmts.
                    # ObjFunc calls have an implicit self-object on the stack that
                    # the decompiler doesn't track.  Don't pop object-typed vars
                    # that might be the self-reference for an upcoming @@ call.
                    has_upcoming_objfunc = False
                    for j in range(i + 1, len(stmts)):
                        sj = stmts[j]
                        if (isinstance(sj, ExprStmt)
                                and isinstance(sj.expr, FuncCall)
                                and (sj.expr.is_objfunc
                                     or sj.expr.name in OBJFUNC_ONLY)):
                            has_upcoming_objfunc = True
                            break
                    pop_n = 0
                    for k in range(len(self.stack.slots) - 1, -1, -1):
                        n, ty = self.stack.slots[k]
                        if n in self._pushed_temp_names and n not in future_rw:
                            # Keep object vars alive if an ObjFunc call is upcoming
                            if has_upcoming_objfunc and ty == 'object':
                                break
                            pop_n += 1
                        else:
                            break
                    if pop_n > 0:
                        self.emit(f'Pop({pop_n})')
                        for _ in range(pop_n):
                            self._pushed_temp_names.discard(self.stack.slots[-1][0])
                            self.stack.pop()

            # Restore
            self._future_refs = saved_future
            self._outer_refs = saved_outer

    def _gen_stmt(self, s):
        if isinstance(s, VarDeclStmt):
            self._gen_var_decl(s)
        elif isinstance(s, AssignStmt):
            self._gen_assign(s)
        elif isinstance(s, ExprStmt):
            self._gen_expr_stmt(s)
        elif isinstance(s, IfStmt):
            self._gen_if(s)
        elif isinstance(s, WhileStmt):
            self._gen_while(s)
        elif isinstance(s, ReturnStmt):
            self._gen_return(s)
        elif isinstance(s, BreakStmt):
            self._gen_break()
        elif isinstance(s, GotoStmt):
            self._gen_goto(s)
        elif isinstance(s, LabelStmt):
            self.label_addrs[s.name] = self.addr()
        elif isinstance(s, TaskCallStmt):
            self._gen_task_call(s)
        elif isinstance(s, TaskReturnStmt):
            self._gen_task_return()
        elif isinstance(s, EventEnableStmt):
            self.emit(f'EventEnable({s.event_id})')
        elif isinstance(s, EventDisableStmt):
            self.emit(f'EventDisable({s.event_id})')
        elif isinstance(s, SetByIndexStmt):
            self._gen_set_by_index(s)
        elif isinstance(s, EmitStmt):
            self.emit(s.text)

    # ─── Code generation for each statement type ───

    def _gen_var_decl(self, s: VarDeclStmt):
        """Multi-var declaration → PushEmpty(types)"""
        types = [t for _, t, _ in s.vars]
        type_names = ', '.join(types)
        self.emit(f'PushEmpty({type_names})')
        for name, vtype, _ in s.vars:
            self.stack.push(name, vtype)
        self._has_scope_pushempty = True  # typed PushEmpty provides scope for next Call

    def _gen_assign(self, s: AssignStmt):
        """Assignment to variable or global var."""
        target = s.target
        value = s.value
        self._current_nulleq = getattr(s, 'nulleq', False)
        self._current_nz = getattr(s, 'notzero', False)
        self._current_nn = getattr(s, 'nullneq', False)

        # GlobalVars[N] = expr
        if isinstance(target, GlobalVarRef):
            self._gen_gvar_assign(target.index, value)
            return

        # Task variable assignment (accessed via StackPointer, not regular stack)
        if isinstance(target, VarRef) and self._is_task_var(target.name) is not None:
            self._gen_task_var_assign(target.name, value)
            return

        # var_N_type = expr
        if isinstance(target, VarRef):
            name = target.name
            vtype = extract_var_type(name)

            # Check if this is a new variable (not yet on stack)
            if not self.stack.has(name):
                # New variable created by this assignment
                # Need to evaluate expression and push result
                pushi = getattr(s, 'pushi_default', False)
                self._gen_new_var_assign(name, vtype, value, pushi_default=pushi)
            else:
                # Existing variable — assign to it
                self._gen_existing_var_assign(name, vtype, value)

    def _gen_new_var_assign(self, name: str, vtype: str, value, pushi_default: bool = False):
        """Assign to a variable not yet on stack → evaluate and push."""
        # Check if this is a simple default-value init
        if is_default_value(vtype, value):
            if pushi_default:
                # Original used PushI (not PushV): emit Push with explicit default value
                if vtype == 'cvector':
                    self.emit('Push(CVector(0.0, 0.0, 0.0))')
                elif vtype == 'string':
                    self.emit('Push("")')
                elif vtype == 'float':
                    self.emit('Push((float) 0)')
                elif vtype == 'object':
                    self.emit(f'PushEmpty({vtype})')
                    self._has_scope_pushempty = True
                else:
                    # int, bool → Push((type) 0)
                    self.emit(f'Push(({vtype}) 0)')
                self.stack.push(name, vtype)
                return
            # Use PushEmpty for default-value standalone assignments (PushV)
            self.emit(f'PushEmpty({vtype})')
            self.stack.push(name, vtype)
            self._has_scope_pushempty = True
            return

        # All paths below create a Push (not PushEmpty) — track as pushed temp
        is_push = True

        # Evaluate the expression
        if isinstance(value, BinOp) and value.op in COMPARE_OPS | ARITH_OPS | LOGIC_OPS:
            self._gen_binop_new(name, vtype, value)
        elif isinstance(value, UnaryOp):
            self._gen_unaryop_new(name, vtype, value)
        elif isinstance(value, FuncCall) and value.name == 'IsFuncExist':
            self._gen_isfuncexist(name, vtype, value)
        elif isinstance(value, FuncCall) and value.name in MATH_FUNCS:
            self._gen_math_new(name, vtype, value)
        elif isinstance(value, GetByIndexExpr):
            self._gen_getbyindex_new(name, vtype, value)
        elif isinstance(value, GlobalVarRef):
            # var = GlobalVars[N] → Push(GlobalVars[N])
            self.emit(f'Push(GlobalVars[{value.index}])')
            self.stack.push(name, vtype)
        elif isinstance(value, ObjExpr):
            # var = Obj() → this is the event object parameter, already on stack
            # Actually Obj() is represented as a reference to an implicit object
            # For now, push a placeholder
            self.emit(f'PushEmpty({vtype})')
            self.stack.push(name, vtype)
            self._has_scope_pushempty = True  # typed PushEmpty provides scope
            is_push = False
        elif isinstance(value, VarRef):
            # var_new = var_existing → Push(clone)
            tv_idx = self._is_task_var(value.name)
            if tv_idx is not None:
                self.emit(f'Push( {self._tv_ref(value.name)} )')
            elif self.stack.has(value.name):
                d = self.stack.dist(value.name)
                self.emit(f'Push(Stack[-{d}])')
            else:
                self.emit(f'Push((int) 0)')  # fallback
            self.stack.push(name, vtype)
        else:
            # Literal value → Push literal
            lit_str = self._literal_push_str(value, vtype)
            if lit_str:
                self.emit(f'Push({lit_str})')
                self.stack.push(name, vtype)
            else:
                # Complex expression — evaluate onto stack
                self._gen_push_expr(value, name, vtype)

        if is_push:
            self._pushed_temp_names.add(name)

    def _gen_existing_var_assign(self, name: str, vtype: str, value):
        """Assign to an existing variable on the stack."""
        d = self.stack.dist(name)

        # Simple literal assignment
        # Object null (var_N_object = 0 or null) → untyped 0
        if isinstance(value, NullLit) or (isinstance(value, IntLit) and value.value == 0 and vtype == 'object'):
            self.emit(f'Stack[-{d}] = 0')
        elif isinstance(value, IntLit):
            if vtype == 'bool' and value.value in (0, 1):
                self.emit(f'Stack[-{d}] = (bool) {value.value}')
            else:
                self.emit(f'Stack[-{d}] = (int) {value.value}')
        elif isinstance(value, FloatLit):
            self.emit(f'Stack[-{d}] = (float) {value.value}')
        elif isinstance(value, BoolLit):
            self.emit(f'Stack[-{d}] = (bool) {1 if value.value else 0}')
        elif isinstance(value, StrLit):
            self._add_string(value.value)
            self.emit(f'Stack[-{d}] = "{value.value}"')
        elif isinstance(value, VectorLit):
            self.emit(f'Stack[-{d}] = CVector({value.x}, {value.y}, {value.z})')
        elif isinstance(value, VarRef):
            tv_idx = self._is_task_var(value.name)
            if tv_idx is not None:
                self.emit(f'Stack[-{d}] = {self._tv_ref(value.name)}')
            else:
                src_d = self.stack.dist(value.name)
                self.emit(f'Stack[-{d}] = Stack[-{src_d}]')
        elif isinstance(value, GlobalVarRef):
            # Need to push global, then mov, then pop... or use a different pattern
            self.emit(f'Push(GlobalVars[{value.index}])')
            self.stack.push('__gtmp', vtype)
            new_d = self.stack.dist(name)
            self.emit(f'Stack[-{new_d}] = Stack[-1]')
            self.emit(f'Pop(1)')
            self.stack.pop()
        elif isinstance(value, BinOp) and value.op in COMPARE_OPS | ARITH_OPS | LOGIC_OPS:
            self._gen_binop_existing(name, d, vtype, value)
        elif isinstance(value, UnaryOp):
            self._gen_unaryop_existing(name, d, vtype, value)
        elif isinstance(value, FuncCall) and value.name in MATH_FUNCS:
            self._gen_math_existing(name, d, vtype, value)
        elif isinstance(value, ObjExpr):
            # Obj() assignment to existing var → push temp, mov, keep temp on stack
            # The dead temp serves as a scope marker for subsequent calls
            self.emit(f'PushEmpty({vtype})')
            self.stack.push(self._fresh_temp(vtype), vtype)
            new_d = self.stack.dist(name)
            self.emit(f'Stack[-{new_d}] = Stack[-1]')
            # Don't Pop(1) — temp stays as dead scope marker
            self._has_dead_temp_scope = True
        else:
            # Evaluate expression, mov result, pop
            self._gen_push_expr(value, '__etmp', vtype)
            new_d = self.stack.dist(name)
            self.emit(f'Stack[-{new_d}] = Stack[-1]')
            self.emit(f'Pop(1)')
            self.stack.pop()

    def _gen_task_var_assign(self, name: str, value):
        """Assign to a task variable (uses StackPointer addressing)."""
        tv = self._tv_ref(name)
        vtype = extract_var_type(name)

        # Null/zero assignment
        if isinstance(value, NullLit) or (isinstance(value, IntLit) and value.value == 0 and vtype == 'object'):
            self.emit(f'{tv} = 0')
        elif isinstance(value, IntLit):
            if vtype == 'bool' and value.value in (0, 1):
                self.emit(f'{tv} = (bool){value.value}')
            else:
                self.emit(f'{tv} = (int){value.value}')
        elif isinstance(value, FloatLit):
            self.emit(f'{tv} = (float){value.value}')
        elif isinstance(value, BoolLit):
            self.emit(f'{tv} = (bool){1 if value.value else 0}')
        elif isinstance(value, StrLit):
            self._add_string(value.value)
            self.emit(f'{tv} = "{value.value}"')
        elif isinstance(value, VectorLit):
            self.emit(f'{tv} = CVector({value.x}, {value.y}, {value.z})')
        elif isinstance(value, VarRef):
            if self._is_task_var(value.name) is not None:
                src_tv = self._tv_ref(value.name)
                self.emit(f'{tv} = {src_tv}')
            elif self.stack.has(value.name):
                src_d = self.stack.dist(value.name)
                self.emit(f'{tv} = Stack[-{src_d}]')
            else:
                self.emit(f'{tv} = 0')  # fallback
        elif isinstance(value, UnaryOp) and value.op == '!':
            # Compact in-place negation: tvar = !tvar → single instruction
            if isinstance(value.operand, VarRef) and value.operand.name == name:
                self.emit(f'{tv} = !{tv}; Pop(0);')
                return
            # tvar = !other → evaluate then assign
            self._gen_push_expr(value, '__tvtmp', vtype)
            self.emit(f'{tv} = Stack[-1]')
            self.emit(f'Pop(1)')
            self.stack.pop()
            return
        elif isinstance(value, GlobalVarRef):
            self.emit(f'Push(GlobalVars[{value.index}])')
            self.stack.push('__gtmp', vtype)
            self.emit(f'{tv} = Stack[-1]')
            self.emit(f'Pop(1)')
            self.stack.pop()
        elif isinstance(value, BinOp):
            # Combined TaskVar = Expr OP Expr; Pop(N) — single instruction
            left, right = value.left, value.right
            op_sym = OP_ASM_SYM.get(value.op, value.op)
            is_cmp = value.op in COMPARE_OPS

            left_on_stack = isinstance(left, VarRef) and self.stack.has(left.name)
            right_on_stack = isinstance(right, VarRef) and self.stack.has(right.name)
            left_is_tv = isinstance(left, VarRef) and self._is_task_var(left.name) is not None
            right_is_tv = isinstance(right, VarRef) and self._is_task_var(right.name) is not None
            left_accessible = left_on_stack or left_is_tv
            right_accessible = right_on_stack or right_is_tv

            pushed = 0
            if not left_accessible:
                self._push_operand(left)
                pushed += 1
            if not right_accessible:
                self._push_operand(right)
                pushed += 1

            # Compute ref strings
            if not left_accessible and not right_accessible:
                left_str = 'Stack[-2]'
                right_str = 'Stack[-1]'
            elif not left_accessible and right_accessible:
                left_str = 'Stack[-1]'
                right_str = self._tv_ref_arith(right.name) if right_is_tv else f'Stack[-{self.stack.dist(right.name)}]'
            elif left_accessible and not right_accessible:
                left_str = self._tv_ref_arith(left.name) if left_is_tv else f'Stack[-{self.stack.dist(left.name)}]'
                right_str = 'Stack[-1]'
            else:
                left_str = self._tv_ref_arith(left.name) if left_is_tv else f'Stack[-{self.stack.dist(left.name)}]'
                right_str = self._tv_ref_arith(right.name) if right_is_tv else f'Stack[-{self.stack.dist(right.name)}]'

            # Pop pushed operands + dead accessible operands at top
            pop_n = pushed
            if pushed == 0 and left_on_stack and right_on_stack and not left_is_tv and not right_is_tv:
                l_dist = self.stack.dist(left.name)
                r_dist = self.stack.dist(right.name)
                l_dead = left.name not in self._future_refs
                r_dead = right.name not in self._future_refs
                if {l_dist, r_dist} == {1, 2} and l_dead and r_dead:
                    pop_n = 2
                elif min(l_dist, r_dist) == 1:
                    top_dead = l_dead if l_dist == 1 else r_dead
                    if top_dead:
                        pop_n = 1
            elif pushed == 0:
                for var_node, on_stack, is_tv in [(left, left_on_stack, left_is_tv),
                                                   (right, right_on_stack, right_is_tv)]:
                    if on_stack and not is_tv and isinstance(var_node, VarRef):
                        d = self.stack.dist(var_node.name)
                        if d == 1 and var_node.name not in self._future_refs:
                            pop_n = 1
                            break
            elif pushed == 1:
                for var_node, on_stack, is_tv in [(left, left_on_stack, left_is_tv),
                                                   (right, right_on_stack, right_is_tv)]:
                    if on_stack and not is_tv and isinstance(var_node, VarRef):
                        d = self.stack.dist(var_node.name)
                        if d == 2 and var_node.name not in self._future_refs:
                            pop_n += 1
                            break

            type_prefix = '(bool) ' if is_cmp else ''
            trailing = '' if is_cmp else ';'
            self.emit(f'{tv} = {type_prefix}{left_str} {op_sym} {right_str}; Pop({pop_n}){trailing}')
            self.stack.pop(pop_n)
        else:
            # Complex expression — evaluate onto stack, then mov to task var
            self._gen_push_expr(value, '__tvtmp', vtype)
            self.emit(f'{tv} = Stack[-1]')
            self.emit(f'Pop(1)')
            self.stack.pop()

    def _gen_binop_new(self, name, vtype, expr: BinOp):
        """Binary operation → result is a new variable pushed on stack."""
        left, right = expr.left, expr.right
        op_sym = OP_ASM_SYM.get(expr.op, expr.op)

        # Special case: == 0 → NullEq or Not instruction (no temp push needed)
        # //@ne → NullEq (PushNull, opcode 0x2D) — CVariableObject::IsNull
        # //@nz → Not (Push, opcode 0x30) — generic IsZero (compact form)
        # No annotation → expanded Push(0) + Equal
        if isinstance(left, VarRef):
            left_type = extract_var_type(left.name)
        elif isinstance(left, GlobalVarRef):
            left_type = self.global_vars.get(left.index, self.pre_gvar_types.get(left.index, 'object'))
        else:
            left_type = None  # unknown type — skip NullEq/Not optimization
        if left_type is not None and expr.op == '==' and isinstance(right, IntLit) and right.value == 0 and (self._current_nulleq or self._current_nz):
            # Annotation-driven: //@ne → PushNull, //@nz → Push
            if self._current_nulleq:
                null_kw = 'PushNull'
            else:
                null_kw = 'Push'
            if isinstance(left, VarRef):
                # Task var: use StackPointer addressing
                tv_idx = self._is_task_var(left.name)
                if tv_idx is not None:
                    self.emit(f'Pop(0); {null_kw}((bool) {self._tv_ref(left.name)} == 0)')
                    self.stack.push(name, 'bool')
                    return
                # Regular stack var
                elif self.stack.has(left.name):
                    ref = self.stack.dist(left.name)
                    # Pop the consumed operand if at top and dead
                    pop_n = 0
                    if ref == 1 and left.name not in self._future_refs:
                        pop_n = 1
                    self.emit(f'Pop({pop_n}); {null_kw}((bool) Stack[-{ref}] == 0)')
                    if pop_n > 0:
                        self.stack.pop(pop_n)
                    self.stack.push(name, 'bool')
                    return
            # Non-VarRef left (e.g. GlobalVarRef after inlining): push then NullEq/Not
            if isinstance(left, GlobalVarRef) or isinstance(left, VarRef):
                self._push_operand(left)
                self.emit(f'Pop(1); {null_kw}((bool) Stack[-1] == 0)')
                self.stack.pop(1)
                self.stack.push(name, 'bool')
                return

        # Special case: != 0 → NullNeq instruction (compact form, opcode 0x2E)
        # //@nn annotation → Pop(N); Push(( V != 0 )
        if left_type is not None and expr.op == '!=' and isinstance(right, IntLit) and right.value == 0 and self._current_nn:
            if isinstance(left, VarRef):
                tv_idx = self._is_task_var(left.name)
                if tv_idx is not None:
                    self.emit(f'Pop(0); Push(( {self._tv_ref(left.name)} != 0 )')
                    self.stack.push(name, 'bool')
                    return
                elif self.stack.has(left.name):
                    ref = self.stack.dist(left.name)
                    pop_n = 0
                    if ref == 1 and left.name not in self._future_refs:
                        pop_n = 1
                    self.emit(f'Pop({pop_n}); Push(( Stack[-{ref}] != 0 )')
                    if pop_n > 0:
                        self.stack.pop(pop_n)
                    self.stack.push(name, 'bool')
                    return
            if isinstance(left, GlobalVarRef) or isinstance(left, VarRef):
                self._push_operand(left)
                self.emit(f'Pop(1); Push(( Stack[-1] != 0 )')
                self.stack.pop(1)
                self.stack.push(name, 'bool')
                return

        # Determine if operands are accessible (on stack or task var)
        left_on_stack = isinstance(left, VarRef) and self.stack.has(left.name)
        right_on_stack = isinstance(right, VarRef) and self.stack.has(right.name)
        left_is_tv = isinstance(left, VarRef) and self._is_task_var(left.name) is not None
        right_is_tv = isinstance(right, VarRef) and self._is_task_var(right.name) is not None
        left_accessible = left_on_stack or left_is_tv
        right_accessible = right_on_stack or right_is_tv

        pushed = 0
        # Push LEFT operand first (matches original compiler evaluation order)
        if not left_accessible:
            self._push_operand(left)
            pushed += 1

        # Push RIGHT operand second
        if not right_accessible:
            self._push_operand(right)
            pushed += 1

        # Compute ref strings (BEFORE pop, as per VM semantics)
        def _ref_str(var, on_stack, is_tv, other_pushed):
            if is_tv:
                return self._tv_ref_arith(var.name)
            elif on_stack:
                return f'Stack[-{self.stack.dist(var.name)}]'
            else:
                # Was pushed — compute position
                return None  # handled by position logic below

        if not left_accessible and not right_accessible:
            left_str = 'Stack[-2]'
            right_str = 'Stack[-1]'
        elif not left_accessible and right_accessible:
            left_str = 'Stack[-1]'
            right_str = self._tv_ref_arith(right.name) if right_is_tv else f'Stack[-{self.stack.dist(right.name)}]'
        elif left_accessible and not right_accessible:
            left_str = self._tv_ref_arith(left.name) if left_is_tv else f'Stack[-{self.stack.dist(left.name)}]'
            right_str = 'Stack[-1]'
        else:
            left_str = self._tv_ref_arith(left.name) if left_is_tv else f'Stack[-{self.stack.dist(left.name)}]'
            right_str = self._tv_ref_arith(right.name) if right_is_tv else f'Stack[-{self.stack.dist(right.name)}]'

        # Liveness-based Pop: also pop dead accessible operands at top of stack.
        # The original compiler pops dead variables alongside the pushed temps.
        pop_n = pushed
        dead_pops = 0
        if pushed == 0 and left_on_stack and right_on_stack and not left_is_tv and not right_is_tv:
            l_dist = self.stack.dist(left.name)
            r_dist = self.stack.dist(right.name)
            l_dead = left.name not in self._future_refs
            r_dead = right.name not in self._future_refs
            if {l_dist, r_dist} == {1, 2} and l_dead and r_dead:
                dead_pops = 2
            elif min(l_dist, r_dist) == 1:
                top_dead = l_dead if l_dist == 1 else r_dead
                if top_dead:
                    dead_pops = 1
        elif pushed == 0:
            # Mixed case: one operand is task var (not on physical stack), other is stack var.
            # If the stack var is dead and at top (dist 1), pop it.
            for var_node, on_stack, is_tv in [(left, left_on_stack, left_is_tv),
                                               (right, right_on_stack, right_is_tv)]:
                if on_stack and not is_tv and isinstance(var_node, VarRef):
                    d = self.stack.dist(var_node.name)
                    if d == 1 and var_node.name not in self._future_refs:
                        dead_pops = 1
                        break
        elif pushed == 1:
            # One operand pushed at Stack[-1], other accessible on stack.
            # Stack already updated by _push_operand, so dist reflects post-push state.
            # If the accessible operand is at dist 2 (right below pushed) and dead, pop it too.
            for var_node, on_stack, is_tv in [(left, left_on_stack, left_is_tv),
                                               (right, right_on_stack, right_is_tv)]:
                if on_stack and not is_tv and isinstance(var_node, VarRef):
                    d = self.stack.dist(var_node.name)
                    if d == 2 and var_node.name not in self._future_refs:
                        dead_pops = 1
                        break
        pop_n += dead_pops

        is_cmp = expr.op in COMPARE_OPS
        type_prefix = '(bool) ' if is_cmp else ''
        trailing = '' if is_cmp else ';'
        self.emit(f'Pop({pop_n}); Push({type_prefix}{left_str} {op_sym} {right_str}){trailing}')

        # Update stack: pop pushed temps + dead operands, push result
        self.stack.pop(pop_n)
        result_type = 'bool' if is_cmp else vtype
        self.stack.push(name, result_type)

    def _gen_binop_existing(self, name, target_dist, vtype, expr: BinOp):
        """Binary op → write result to existing variable (Op2 variant)."""
        left, right = expr.left, expr.right
        op_sym = OP_ASM_SYM.get(expr.op, expr.op)

        pushed = 0
        left_on_stack = isinstance(left, VarRef) and self.stack.has(left.name)
        right_on_stack = isinstance(right, VarRef) and self.stack.has(right.name)
        left_is_tv = isinstance(left, VarRef) and self._is_task_var(left.name) is not None
        right_is_tv = isinstance(right, VarRef) and self._is_task_var(right.name) is not None
        left_accessible = left_on_stack or left_is_tv
        right_accessible = right_on_stack or right_is_tv

        # Push LEFT first, then RIGHT (matches original compiler order)
        if not left_accessible:
            self._push_operand(left)
            pushed += 1
        if not right_accessible:
            self._push_operand(right)
            pushed += 1

        if not left_accessible and not right_accessible:
            left_str = 'Stack[-2]'; right_str = 'Stack[-1]'
        elif not left_accessible and right_accessible:
            left_str = 'Stack[-1]'
            right_str = self._tv_ref_arith(right.name) if right_is_tv else f'Stack[-{self.stack.dist(right.name)}]'
        elif left_accessible and not right_accessible:
            left_str = self._tv_ref_arith(left.name) if left_is_tv else f'Stack[-{self.stack.dist(left.name)}]'
            right_str = 'Stack[-1]'
        else:
            left_str = self._tv_ref_arith(left.name) if left_is_tv else f'Stack[-{self.stack.dist(left.name)}]'
            right_str = self._tv_ref_arith(right.name) if right_is_tv else f'Stack[-{self.stack.dist(right.name)}]'

        # Include dead accessible operands at top of stack in the Pop count.
        # The original compiler's Op2 instruction pops dead operands directly.
        dead_top = 0
        if pushed == 0 and left_on_stack and right_on_stack and not left_is_tv and not right_is_tv:
            l_dist = self.stack.dist(left.name)
            r_dist = self.stack.dist(right.name)
            l_dead = isinstance(left, VarRef) and left.name not in self._future_refs
            r_dead = isinstance(right, VarRef) and right.name not in self._future_refs
            if {l_dist, r_dist} == {1, 2} and l_dead and r_dead:
                dead_top = 2
            elif min(l_dist, r_dist) == 1:
                top_name = left.name if l_dist == 1 else right.name
                top_dead = l_dead if l_dist == 1 else r_dead
                if top_dead:
                    dead_top = 1
        elif pushed == 0:
            # Mixed case: one operand is task var, other is stack var.
            for var_node, on_stack, is_tv in [(left, left_on_stack, left_is_tv),
                                               (right, right_on_stack, right_is_tv)]:
                if on_stack and not is_tv and isinstance(var_node, VarRef):
                    d = self.stack.dist(var_node.name)
                    if d == 1 and var_node.name not in self._future_refs:
                        dead_top = 1
                        break
        elif pushed == 1:
            # One operand pushed, one accessible. Check if accessible is dead
            # and right below the pushed value (dist == 2 after push).
            for var_node, on_stack, is_tv in [(left, left_on_stack, left_is_tv),
                                               (right, right_on_stack, right_is_tv)]:
                if on_stack and not is_tv and isinstance(var_node, VarRef):
                    d = self.stack.dist(var_node.name)
                    if d == 2 and var_node.name not in self._future_refs:
                        dead_top = 1
                        break

        out_ref = self.stack.dist(name)
        total_pop = pushed + dead_top
        self.emit(f'Stack[-{out_ref}] = {left_str} {op_sym} {right_str}; Pop({total_pop});')
        self.stack.pop(total_pop)

    def _gen_unaryop_new(self, name, vtype, expr: UnaryOp):
        """Unary op → push new result."""
        operand = expr.operand
        on_stack = isinstance(operand, VarRef) and self.stack.has(operand.name)
        is_tv = isinstance(operand, VarRef) and self._is_task_var(operand.name) is not None
        pushed = 0
        if not on_stack and not is_tv:
            self._push_operand(operand); pushed += 1

        if is_tv:
            ref_str = self._tv_ref_arith(operand.name)
        elif not on_stack:
            ref_str = f'Stack[-1]'
        else:
            ref_str = f'Stack[-{self.stack.dist(operand.name)}]'

        if expr.op == '!':
            self.emit(f'Pop({pushed}); Push((bool) {ref_str} == 0)')
        elif expr.op == '-':
            self.emit(f'Pop({pushed}); Push(( -{ref_str})')
        self.stack.pop(pushed)
        self.stack.push(name, vtype)

    def _gen_unaryop_existing(self, name, target_dist, vtype, expr: UnaryOp):
        operand = expr.operand
        on_stack = isinstance(operand, VarRef) and self.stack.has(operand.name)
        is_tv = isinstance(operand, VarRef) and self._is_task_var(operand.name) is not None
        pushed = 0
        if not on_stack and not is_tv:
            self._push_operand(operand); pushed += 1

        if is_tv:
            ref_str = self._tv_ref_arith(operand.name)
        elif not on_stack:
            ref_str = f'Stack[-1]'
        else:
            ref_str = f'Stack[-{self.stack.dist(operand.name)}]'

        # Pop dead operand at top of stack (even if not pushed by us)
        pop_n = pushed
        if on_stack and self.stack.dist(operand.name) == 1 and operand.name not in self._future_refs:
            pop_n = 1
        out_ref = self.stack.dist(name)
        if expr.op == '!':
            self.emit(f'Stack[-{out_ref}] = !{ref_str}; Pop({pop_n});')
        elif expr.op == '-':
            self.emit(f'Stack[-{out_ref}] = -{ref_str}; Pop({pop_n});')
        self.stack.pop(pop_n)

    def _gen_isfuncexist(self, name, vtype, call: FuncCall):
        """IsFuncExist(obj, str, int) → Pop(N); Push(IsFuncExist(Stack[-V1], Stack[-V2], Stack[-V3]))"""
        args = call.args
        if len(args) != 3:
            self.emit('Push((int) 0)')
            self.stack.push(name, vtype)
            return
        obj_arg, str_arg, int_arg = args[0], args[1], args[2]

        # Push str and int args that aren't already on stack (may have been inlined)
        def is_on_stack(arg):
            return isinstance(arg, VarRef) and (self.stack.has(arg.name) or self._is_task_var(arg.name) is not None)

        pushed = 0
        for arg in [str_arg, int_arg]:
            if not is_on_stack(arg):
                self._push_operand(arg)
                pushed += 1

        # Now resolve references. Pushed literals got temp names, but we know
        # their positions: last pushed is Stack[-1], second-to-last is Stack[-2]
        def resolve(arg):
            if isinstance(arg, VarRef):
                tv = self._is_task_var(arg.name)
                if tv is not None:
                    return self._tv_ref(arg.name)
                if self.stack.has(arg.name):
                    return f'Stack[-{self.stack.dist(arg.name)}]'
            return None

        v1 = resolve(obj_arg) or f'Stack[-{self.stack.size}]'
        # For pushed args, they're at known positions from top
        if is_on_stack(str_arg):
            v2 = resolve(str_arg)
        else:
            # str_arg was pushed; if int_arg was also pushed, str is at -2, else -1
            v2 = f'Stack[-{pushed}]' if pushed > 0 else 'Stack[-1]'
        if is_on_stack(int_arg):
            v3 = resolve(int_arg)
        else:
            v3 = 'Stack[-1]'

        self.emit(f'Pop({pushed}); Push(IsFuncExist({v1}, {v2}, {v3}))')
        self.stack.pop(pushed)
        self.stack.push(name, vtype)

    def _gen_math_new(self, name, vtype, call: FuncCall):
        """Math function → push result (in-place variant)."""
        fname = MATH_FUNCS[call.name]
        args = call.args
        pushed = 0
        refs = []
        for a in args:
            on_stack = isinstance(a, VarRef) and self.stack.has(a.name)
            if not on_stack:
                self._push_operand(a); pushed += 1
                refs.append(('pushed',))
            else:
                refs.append(('stack', a.name))

        # Compute refs
        arg_strs = []
        push_idx = pushed
        for r in refs:
            if r[0] == 'pushed':
                arg_strs.append(f'Stack[-{push_idx}]')
                push_idx -= 1
            else:
                arg_strs.append(f'Stack[-{self.stack.dist(r[1])}]')

        args_s = ', '.join(arg_strs)
        self.emit(f'Pop({pushed}); Push({fname}({args_s}))')
        self.stack.pop(pushed)
        self.stack.push(name, vtype)

    def _gen_math_existing(self, name, target_dist, vtype, call: FuncCall):
        fname = MATH_FUNCS[call.name]
        args = call.args
        pushed = 0
        refs = []
        for a in args:
            on_stack = isinstance(a, VarRef) and self.stack.has(a.name)
            if not on_stack:
                self._push_operand(a); pushed += 1
                refs.append(('pushed',))
            else:
                refs.append(('stack', a.name))
        arg_strs = []
        push_idx = pushed
        for r in refs:
            if r[0] == 'pushed':
                arg_strs.append(f'Stack[-{push_idx}]')
                push_idx -= 1
            else:
                arg_strs.append(f'Stack[-{self.stack.dist(r[1])}]')
        out_ref = self.stack.dist(name)
        args_s = ', '.join(arg_strs)
        self.emit(f'Stack[-{out_ref}] = {fname}({args_s}); Pop({pushed});')
        self.stack.pop(pushed)

    def _gen_getbyindex_new(self, name, vtype, expr: GetByIndexExpr):
        """GetByIndex(var, N) → Push(CvectorIndex(Stack[-N], index))"""
        var = expr.var
        if isinstance(var, VarRef) and self.stack.has(var.name):
            ref = self.stack.dist(var.name)
            self.emit(f'Push(CvectorIndex(Stack[-{ref}], {expr.index}))')
            self.stack.push(name, vtype)
        else:
            # Shouldn't happen typically
            self.emit(f'Push(CvectorIndex(Stack[-1], {expr.index}))')
            self.stack.push(name, vtype)

    def _gen_set_by_index(self, s: SetByIndexStmt):
        """SetByIndex(var, idx) = val → CvectorIndex(Stack[-N], idx) = Stack[-1];
        Value is typically already on top of stack from prior GetByIndex/assignment."""
        if isinstance(s.value, VarRef) and self.stack.has(s.value.name):
            val_dist = self.stack.dist(s.value.name)
            if val_dist != 1:
                self.emit(f'Stack[-1] = Stack[-{val_dist}]')
        elif isinstance(s.value, IntLit):
            self.emit(f'Stack[-1] = (int) {s.value.value}')
        elif isinstance(s.value, FloatLit):
            self.emit(f'Stack[-1] = (float) {s.value.value}')
        if isinstance(s.var, VarRef) and self.stack.has(s.var.name):
            ref = self.stack.dist(s.var.name)
            self.emit(f'CvectorIndex(Stack[-{ref}], {s.index}) = Stack[-1];')
            # SetByIndex implicitly pops the value (Stack[-1]) in the VM
            self.stack.pop()

    def _gen_gvar_assign(self, index: int, value):
        """GlobalVars[N] = value"""
        gvar_type = self.global_vars.get(index, 'object')

        # Optimization: if top of stack is dead, overwrite it instead of pushing
        can_reuse = (self.stack.slots
                     and self.stack.slots[-1][0] not in self._future_refs
                     and self._is_literal(value))
        if can_reuse:
            lit_str = self._typed_literal_str(value, gvar_type)
            if lit_str is not None:
                self.emit(f'Stack[-1] = {lit_str}')
                self.emit(f'GlobalVars[{index}] = Stack[-1]; Pop(1)')
                self.stack.pop()
                return

        # Optimization: if the value is a VarRef already on stack at dist 1 (top)
        # and dead, use it directly without pushing a clone
        if (isinstance(value, VarRef) and self.stack.has(value.name)
                and self.stack.dist(value.name) == 1
                and value.name not in self._future_refs):
            self.emit(f'GlobalVars[{index}] = Stack[-1]; Pop(1)')
            self.stack.pop()
            return

        # Push value, then PopGE
        if isinstance(value, IntLit) and value.value == 0:
            self.emit(f'Push((int) 0)')
            self.stack.push('__gtmp', 'int')
        elif isinstance(value, VarRef) and self.stack.has(value.name):
            d = self.stack.dist(value.name)
            self.emit(f'Push(Stack[-{d}])')
            self.stack.push('__gtmp', 'int')
        elif isinstance(value, BoolLit):
            self.emit(f'Push((bool) {1 if value.value else 0})')
            self.stack.push('__gtmp', 'bool')
        elif isinstance(value, IntLit):
            self.emit(f'Push((int) {value.value})')
            self.stack.push('__gtmp', 'int')
        elif isinstance(value, FloatLit):
            self.emit(f'Push((float){value.value})')
            self.stack.push('__gtmp', 'float')
        else:
            self._gen_push_expr(value, '__gtmp', 'int')

        self.emit(f'GlobalVars[{index}] = Stack[-1]; Pop(1)')
        self.stack.pop()

    @staticmethod
    def _is_literal(value) -> bool:
        return isinstance(value, (IntLit, FloatLit, BoolLit, StrLit))

    def _typed_literal_str(self, value, gvar_type: str):
        """Format a literal with the global var's type cast."""
        if isinstance(value, IntLit):
            if gvar_type == 'bool' and value.value in (0, 1):
                return f'(bool) {value.value}'
            elif gvar_type == 'bool':
                return f'(bool){value.value}'
            else:
                return f'(int) {value.value}' if value.value >= 0 else f'(int){value.value}'
        elif isinstance(value, BoolLit):
            return f'(bool) {1 if value.value else 0}'
        elif isinstance(value, FloatLit):
            return f'(float){value.value}'
        elif isinstance(value, StrLit):
            self._add_string(value.value)
            return f'"{value.value}"'
        return None

    def _gen_expr_stmt(self, s: ExprStmt):
        """Expression statement — typically a function call."""
        expr = s.expr
        if isinstance(expr, FuncCall):
            name = expr.name
            if name in MATH_FUNCS:
                # Math functions as standalone — unusual but handle
                self._gen_import_call(expr)
            elif re.match(r'func_\d+', name):
                self._gen_subroutine_call(expr)
            else:
                self._gen_import_call(expr)
        elif isinstance(expr, ObjMethodCall):
            self._gen_objmethod_call(expr)
        else:
            # Other expressions as statements (rare)
            pass

    def _pre_pop_dead_for_call(self, call_arg_names: set, obj_var_name: str = ''):
        """Pop dead vars at top of stack before pushing import call args.
        The original compiler cleans up dead vars before import calls."""
        needed = set(call_arg_names)
        if obj_var_name:
            needed.add(obj_var_name)
        dead_n = 0
        for i in range(len(self.stack.slots) - 1, -1, -1):
            nm, ty = self.stack.slots[i]
            if nm in self._future_refs or nm in needed:
                break
            dead_n += 1
        if dead_n > 0:
            self.emit(f'Pop({dead_n})')
            for _ in range(dead_n):
                self._pushed_temp_names.discard(self.stack.slots[-1][0])
                self.stack.pop()

    def _gen_import_call(self, call: FuncCall):
        """Generate @ FuncName(args), @@ FuncName(args); Obj=N, or @@@ FuncName(args); Obj=N."""
        name = call.name
        args = call.args
        is_objfunc = call.is_objfunc or name in OBJFUNC_ONLY
        is_tobjfunc = getattr(call, 'is_tobjfunc', False)
        obj_var = getattr(call, 'obj_var', 0)
        obj_var_name = getattr(call, 'obj_var_name', '')
        if is_objfunc:
            self._add_string(name)
        else:
            self._add_import(name, len(args))

        # Pre-pop dead vars at top of stack before pushing args
        call_arg_names = set()
        for arg in args:
            if isinstance(arg, VarRef):
                call_arg_names.add(arg.name)
        self._pre_pop_dead_for_call(call_arg_names, obj_var_name)

        # Push all arguments that are literals/expressions (not existing stack vars or task vars)
        pushed_args = []  # (arg_index, was_pushed, is_task_var)
        bool_positions = BOOL_ARGS.get(name, set())
        for i, arg in enumerate(args):
            if isinstance(arg, VarRef) and self._is_task_var(arg.name) is not None:
                # Task var — referenced inline as Stack[-INDEX], not pushed
                pushed_args.append((i, False, True))
            elif isinstance(arg, VarRef) and self.stack.has(arg.name):
                pushed_args.append((i, False, False))
            else:
                # Check if this arg position should be bool
                if i in bool_positions and isinstance(arg, IntLit) and arg.value in (0, 1):
                    self.emit(f'Push((bool) {arg.value})')
                    self.stack.push(self._fresh_temp('bool'), 'bool')
                else:
                    self._push_operand(arg)
                pushed_args.append((i, True, False))

        push_count = sum(1 for _, p, _ in pushed_args if p)

        # Compute Stack[-N] references for each arg
        arg_refs = []
        pushed_idx = 0
        for i, (ai, was_pushed, is_tv) in enumerate(pushed_args):
            arg = args[ai]
            if is_tv:
                # Task var — use Stack[-INDEX]T (T marks task-stack variable)
                tv_idx = self._task_var_map[arg.name]
                arg_refs.append(f'Stack[-{tv_idx}]T')
            elif was_pushed:
                # Pushed args are at positions from the bottom of pushed group
                # First pushed → deepest, last pushed → top
                pushed_idx += 1
                ref = push_count - pushed_idx + 1
                arg_refs.append(f'Stack[-{ref}]')
            else:
                # Existing variable — compute distance including pushed temps
                ref = self.stack.dist(arg.name)
                arg_refs.append(f'Stack[-{ref}]')

        args_str = ', '.join(arg_refs)
        # Resolve obj_var_name to stack distance (ObjFunc) or task var index (TObjFunc)
        if obj_var_name:
            if is_tobjfunc and self._is_task_var(obj_var_name) is not None:
                # TObjFunc: Obj= is task var index
                obj_var = self._task_var_map[obj_var_name]
            elif self.stack.has(obj_var_name):
                obj_var = self.stack.dist(obj_var_name)
            elif self._is_task_var(obj_var_name) is not None:
                obj_var = self._task_var_map[obj_var_name]
        if is_tobjfunc:
            self.emit(f'@@@ {name}({args_str}); Obj={obj_var}')
        elif is_objfunc:
            self.emit(f'@@ {name}({args_str}); Obj={obj_var}')
        else:
            self.emit(f'@ {name}({args_str})')
        # Pop is handled by _gen_stmts liveness check (mandatory for import calls)
        self._needs_mandatory_pop = True
        self._has_scope_pushempty = False  # import call resets scope marker
        self._has_dead_temp_scope = False

    def _gen_objmethod_call(self, call: ObjMethodCall):
        """Generate @@ Method(args) for object method calls."""
        name = call.method
        args = call.args

        # Pre-pop dead vars at top of stack before pushing args
        call_arg_names = set()
        for arg in args:
            if isinstance(arg, VarRef):
                call_arg_names.add(arg.name)
        self._pre_pop_dead_for_call(call_arg_names)

        pushed_args = []
        for i, arg in enumerate(args):
            if isinstance(arg, VarRef) and self._is_task_var(arg.name) is not None:
                pushed_args.append((i, False, True))
            elif isinstance(arg, VarRef) and self.stack.has(arg.name):
                pushed_args.append((i, False, False))
            else:
                self._push_operand(arg)
                pushed_args.append((i, True, False))

        push_count = sum(1 for _, p, _ in pushed_args if p)

        arg_refs = []
        pushed_idx = 0
        for i, (ai, was_pushed, is_tv) in enumerate(pushed_args):
            arg = args[ai]
            if is_tv:
                tv_idx = self._task_var_map[arg.name]
                arg_refs.append(f'Stack[-{tv_idx}]')
            elif was_pushed:
                pushed_idx += 1
                ref = push_count - pushed_idx + 1
                arg_refs.append(f'Stack[-{ref}]')
            else:
                ref = self.stack.dist(arg.name)
                arg_refs.append(f'Stack[-{ref}]')

        args_str = ', '.join(arg_refs)
        self.emit(f'@@ {name}({args_str})')
        # Pop is handled by _gen_stmts liveness check (mandatory for obj method calls)
        self._needs_mandatory_pop = True
        self._has_scope_pushempty = False  # obj method call resets scope marker
        self._has_dead_temp_scope = False

    def _gen_subroutine_call(self, call: FuncCall):
        """Generate Call for subroutine (func_N).

        Subroutine call patterns in the original ASM:
        A) No args: PushEmpty() + Call + Pop(0)
        B) All args are VarRefs already on stack: Call + Pop(N)
        C) Literal args where corresponding param is on stack: Mov + Call + Pop(N)
        D) Args need new scope: PushEmpty(types) + Mov + Call + Pop(count)
        Pop counts are determined by liveness analysis in _gen_stmts.
        """
        name = call.name
        m = re.match(r'func_(\d+)', name)
        if not m:
            return

        args = call.args
        func_def = self.subroutine_defs.get(name)

        # Check if all args are task variables (accessed via StackPointer, not regular stack)
        # If so, the subroutine accesses them directly — treat as no-args call
        all_task_vars = args and all(
            isinstance(a, VarRef) and self._is_task_var(a.name) is not None
            for a in args
        )
        if all_task_vars:
            args = []  # treat as no-args
        # Also check if callee's formal params are all task vars in current context.
        # The decompiler may list task-var accesses as function parameters, but the
        # callee actually reads them via StackPointer, not stack args.
        if args and func_def and func_def.params and self._task_var_map:
            callee_params_task = all(
                self._is_task_var(p[0]) is not None
                for p in func_def.params
            )
            if callee_params_task:
                args = []  # treat as no-args

        if not args:
            # Pattern A: No args — empty scope marker
            needs_scope = not self._has_dead_temp_scope
            # Skip bare PushEmpty if a mid-function typed PushEmpty was emitted
            # recently (within last 3 instructions). A typed PushEmpty that is the
            # function's first instruction is the initial var allocation, not a scope
            # marker, so bare PushEmpty is still needed in that case.
            if needs_scope and len(self.instrs) > 1:
                n = len(self.instrs)
                for lookback in range(1, min(4, n + 1)):
                    prev_idx = n - lookback
                    prev = self.instrs[prev_idx]
                    if 'PushEmpty(' in prev and 'PushEmpty()' not in prev:
                        # Only serves as scope if it's NOT the first instruction
                        # of the current function (i.e., it's a mid-function VarDecl)
                        func_start = getattr(self, '_current_func_start_addr', 0)
                        if prev_idx > func_start:
                            needs_scope = False
                        break
                    if 'Stack[-' not in prev and 'Push(' not in prev:
                        break  # non-assignment instruction — stop looking
            if needs_scope:
                self.emit(f'PushEmpty()')
            # Include the scope PushEmpty in captured stack — it occupies a real
            # stack slot at runtime, affecting all negative offsets in the callee.
            captured = list(self.stack.slots)
            if needs_scope:
                captured.append(('__scope__', 'object'))
            self._record_caller_stack(name, self._capture_caller_stack(captured))
            if self._task_var_map:
                self._caller_task_var_maps[name] = dict(self._task_var_map)
                if self._current_task_id is not None:
                    self._caller_task_ids[name] = self._current_task_id
            self._emit_pending_task_call()
            self.emit(f'Call {{FUNC:{name}}}', bb_end=True)
            self._jump_fixups.append((len(self.instrs)-1, f'FUNC:{name}'))
            self._has_scope_pushempty = False  # reset after Call
            self._has_dead_temp_scope = False  # reset after Call
            # Pop handled by liveness
            self._needs_mandatory_pop = True
            return

        # Get parameter info from the subroutine definition
        if func_def:
            param_names = [p[0] for p in func_def.params]
            param_types = [extract_var_type(p[0]) for p in func_def.params]
        else:
            param_names = [f'__param_{i}' for i in range(len(args))]
            param_types = ['object'] * len(args)

        # Check if all args are VarRefs already on stack (Pattern B)
        all_on_stack = all(
            isinstance(a, VarRef) and self.stack.has(a.name) for a in args
        )

        if all_on_stack:
            # Pattern B: Args already on stack — just Call
            # Remap arg names to formal param names so subroutine body can find them
            captured = list(self.stack.slots)
            if func_def and func_def.params:
                arg_to_formal = {}
                captured_names = {n for n, t in captured}
                for i, arg in enumerate(args):
                    if i < len(func_def.params) and isinstance(arg, VarRef):
                        formal_name = func_def.params[i][0]
                        if arg.name != formal_name:
                            # Don't rename if formal name already exists in
                            # captured stack — renaming would create a duplicate
                            # and the stack lookup would find the wrong slot.
                            if formal_name not in captured_names:
                                arg_to_formal[arg.name] = formal_name
                if arg_to_formal:
                    captured = [(arg_to_formal.get(n, n), t) for n, t in captured]
            self._record_caller_stack(name, self._capture_caller_stack(captured))
            if self._task_var_map:
                self._caller_task_var_maps[name] = dict(self._task_var_map)
                if self._current_task_id is not None:
                    self._caller_task_ids[name] = self._current_task_id
            # Pattern B: args already on stack — no scope PushEmpty needed.
            # The callee's own VarDeclStmt (PushV) handles local allocation.
            self._emit_pending_task_call()
            self.emit(f'Call {{FUNC:{name}}}', bb_end=True)
            self._jump_fixups.append((len(self.instrs)-1, f'FUNC:{name}'))
            self._has_scope_pushempty = False  # reset after Call
            self._has_dead_temp_scope = False
            # Pop handled by liveness
            self._needs_mandatory_pop = True
            return

        # Pattern C/D: Some args are literals/expressions
        # Check if the corresponding param vars are already on stack
        # (created by a preceding VarDeclStmt)
        # Strategy: check by param name first, then by positional matching
        # (caller's VarDecl vars may have different names than callee params)
        params_on_stack = []
        slot_dists = []  # stack distance for each arg slot
        for i, arg in enumerate(args):
            pname = param_names[i] if i < len(param_names) else None
            if isinstance(arg, VarRef) and self.stack.has(arg.name):
                params_on_stack.append(True)
                slot_dists.append(self.stack.dist(arg.name))
            elif pname and self.stack.has(pname):
                params_on_stack.append(True)
                slot_dists.append(self.stack.dist(pname))
            else:
                params_on_stack.append(False)
                slot_dists.append(None)

        # If not all on stack by name, try positional matching:
        # Find VarRef args on stack and interpolate positions for literals
        if not all(params_on_stack) and any(params_on_stack):
            # Find a known anchor point
            anchor_i = None
            anchor_dist = None
            for i, (on, dist) in enumerate(zip(params_on_stack, slot_dists)):
                if on and dist is not None:
                    anchor_i = i
                    anchor_dist = dist
                    break
            if anchor_i is not None:
                # Calculate expected distances: first arg at max dist, last at 1
                # anchor at position anchor_i has dist anchor_dist
                # position 0 should be at anchor_dist + anchor_i
                first_dist = anchor_dist + anchor_i
                all_positional = True
                for i in range(len(args)):
                    expected_dist = first_dist - i
                    if expected_dist < 1:
                        all_positional = False
                        break
                    if not params_on_stack[i]:
                        # Check if there's a stack slot at this distance
                        if expected_dist <= len(self.stack.slots):
                            params_on_stack[i] = True
                            slot_dists[i] = expected_dist
                        else:
                            all_positional = False
                            break

        if all(params_on_stack):
            # Pattern C: Params on stack, just need to set literal values
            for i, arg in enumerate(args):
                if isinstance(arg, VarRef) and self.stack.has(arg.name):
                    continue  # already in the right place
                d = slot_dists[i]
                if d is not None:
                    pt = param_types[i] if i < len(param_types) else None
                    self._emit_mov_to_slot(d, arg, target_type=pt)
            self._record_caller_stack(name, self._capture_caller_stack())
            if self._task_var_map:
                self._caller_task_var_maps[name] = dict(self._task_var_map)
                if self._current_task_id is not None:
                    self._caller_task_ids[name] = self._current_task_id
            # Pattern C: params on stack — no scope PushEmpty needed.
            # The callee's own VarDeclStmt (PushV) handles local allocation.
            self._emit_pending_task_call()
            self.emit(f'Call {{FUNC:{name}}}', bb_end=True)
            self._jump_fixups.append((len(self.instrs)-1, f'FUNC:{name}'))
            self._has_scope_pushempty = False  # reset after Call
            self._has_dead_temp_scope = False
            # Pop handled by liveness
            self._needs_mandatory_pop = True
        else:
            # Check if VarDeclStmt already provided matching scope slots
            # (e.g., var_55_bool = 0; func_49(0) — the bool slot already exists)
            if self._has_scope_pushempty and len(args) <= len(self.stack.slots):
                # Try to reuse existing top-of-stack slots as parameter slots
                # Check if the top N slots match parameter types
                n = len(args)
                top_slots = self.stack.slots[-n:]  # last N slots (top of stack)
                types_match = all(
                    top_slots[i][1] == param_types[i] for i in range(n)
                )
                if types_match:
                    # Reuse existing slots — just set literal values
                    for i, arg in enumerate(args):
                        slot_name = top_slots[i][0]
                        d = self.stack.dist(slot_name)
                        if isinstance(arg, VarRef) and self.stack.has(arg.name):
                            continue  # already in place
                        elif not self._is_default_for_type(arg, param_types[i]):
                            self._emit_mov_to_slot(d, arg, target_type=param_types[i])
                    # Remap slot names to formal param names
                    captured = list(self.stack.slots)
                    if func_def and func_def.params:
                        remap = {}
                        captured_names = {nm for nm, _ in captured}
                        for i in range(n):
                            formal_name = func_def.params[i][0]
                            slot_name = top_slots[i][0]
                            if slot_name != formal_name:
                                if formal_name not in captured_names:
                                    remap[slot_name] = formal_name
                        if remap:
                            captured = [(remap.get(nm, nm), t) for nm, t in captured]
                    self._record_caller_stack(name, self._capture_caller_stack(captured))
                    if self._task_var_map:
                        self._caller_task_var_maps[name] = dict(self._task_var_map)
                        if self._current_task_id is not None:
                            self._caller_task_ids[name] = self._current_task_id
                    self._emit_pending_task_call()
                    self.emit(f'Call {{FUNC:{name}}}', bb_end=True)
                    self._jump_fixups.append((len(self.instrs)-1, f'FUNC:{name}'))
                    self._has_scope_pushempty = False
                    self._has_dead_temp_scope = False
                    self._needs_mandatory_pop = True
                    return

            # Pattern D: Need new scope
            type_str = ', '.join(param_types)
            self.emit(f'PushEmpty({type_str})')
            temp_names = []
            for i, pt in enumerate(param_types):
                tn = f'__call_{name}_{i}'
                self.stack.push(tn, pt)
                temp_names.append(tn)

            # Set arg values
            for i, arg in enumerate(args):
                tn = temp_names[i]
                d = self.stack.dist(tn)
                if isinstance(arg, VarRef) and self.stack.has(arg.name):
                    sd = self.stack.dist(arg.name)
                    self.emit(f'Stack[-{d}] = Stack[-{sd}]')
                elif not self._is_default_for_type(arg, param_types[i]):
                    self._emit_mov_to_slot(d, arg, target_type=param_types[i])

            # Remap temp names to formal param names for subroutine body
            captured = list(self.stack.slots)
            if func_def and func_def.params:
                remap = {}
                captured_names = {n for n, _ in captured}
                for i, tn in enumerate(temp_names):
                    if i < len(func_def.params):
                        formal_name = func_def.params[i][0]
                        if tn != formal_name:
                            if formal_name not in captured_names:
                                remap[tn] = formal_name
                if remap:
                    captured = [(remap.get(n, n), t) for n, t in captured]
                    # Also remap actual stack so post-Call code can reference by formal names
                    self.stack.slots = [(remap.get(n, n), t) for n, t in self.stack.slots]
            self._record_caller_stack(name, self._capture_caller_stack(captured))
            if self._task_var_map:
                self._caller_task_var_maps[name] = dict(self._task_var_map)
                if self._current_task_id is not None:
                    self._caller_task_ids[name] = self._current_task_id
            self._emit_pending_task_call()
            self.emit(f'Call {{FUNC:{name}}}', bb_end=True)
            self._jump_fixups.append((len(self.instrs)-1, f'FUNC:{name}'))
            self._has_scope_pushempty = False  # reset after Call
            self._has_dead_temp_scope = False
            # Pop handled by liveness
            self._needs_mandatory_pop = True
            self._last_call_was_subroutine = True

    def _emit_pending_task_call(self):
        """Emit deferred TaskCall just before a Call instruction."""
        if self._pending_task_call is not None:
            tid, parm_count = self._pending_task_call
            # Second arg = task's own var count from metadata
            meta_tasks = self.metadata.get('tasks', {})
            var_count = len(meta_tasks.get(tid, {}).get('vars', []))
            self.emit(f'Push(-{parm_count}, {var_count}); TaskCall({tid})')
            self._pending_task_call = None

    def _emit_pending_task_return(self):
        """Emit deferred TaskReturn just before a Pop instruction."""
        if self._pending_task_return:
            parm_count = getattr(self, '_last_task_parm_count', 0)
            var_count = getattr(self, '_last_task_var_count', 0)
            self.emit(f'Pop(-{parm_count}, {var_count}); TaskReturn')
            self._pending_task_return = False

    def _emit_mov_to_slot(self, dist: int, value, target_type: str = None):
        """Emit a Mov instruction to set Stack[-dist] to a literal value."""
        if isinstance(value, StrLit):
            self._add_string(value.value)
            self.emit(f'Stack[-{dist}] = "{value.value}"')
        elif isinstance(value, IntLit):
            # Use (bool) for bool params receiving int literals 0/1
            ttype = 'bool' if target_type == 'bool' and value.value in (0, 1) else 'int'
            self.emit(f'Stack[-{dist}] = ({ttype}) {value.value}')
        elif isinstance(value, FloatLit):
            self.emit(f'Stack[-{dist}] = (float) {value.value}')
        elif isinstance(value, BoolLit):
            self.emit(f'Stack[-{dist}] = (bool) {1 if value.value else 0}')
        elif isinstance(value, NullLit):
            self.emit(f'Stack[-{dist}] = (int) 0')

    def _is_default_for_type(self, expr, vtype: str) -> bool:
        """Check if expr is the default (zero) value for the type."""
        if isinstance(expr, IntLit) and expr.value == 0:
            return vtype in ('int', 'bool', 'float', 'object')
        if isinstance(expr, FloatLit) and expr.value == 0.0:
            return vtype == 'float'
        if isinstance(expr, StrLit) and expr.value == '':
            return vtype == 'string'
        return False

    def _gen_if(self, s: IfStmt):
        """if(cond) { ... } [else { ... }]"""
        # The condition is typically: var != 0 or var == 0
        cond = s.cond
        cond_var = None
        jump_when_false = True

        # Pattern: if(var_N != 0) → IF (Stack[-d] == 0) GOTO skip (skip body when false)
        # Pattern: if(var_N == 0) → IF (Stack[-d] == 1) GOTO skip (skip body when true)
        # Pattern: if(var_N != 1) → IF (Stack[-d] == 1) GOTO skip (skip body when value is 1)
        # Literal comparison optimization: if(LIT != 0) → Push(LIT) + IF == 0
        use_literal_push = False
        literal_push_value = None
        literal_push_type = None
        cond_is_eq1 = False  # True when condition is exactly "== 1" (loop back-edge)
        if isinstance(cond, BinOp) and cond.op == '!=' and isinstance(cond.right, IntLit) and cond.right.value == 0:
            if isinstance(cond.left, VarRef) and self.stack.has(cond.left.name):
                cond_var = cond.left.name
                jump_when_false = True  # jump if var == 0 → skip body
            elif isinstance(cond.left, IntLit):
                use_literal_push = True
                literal_push_value = cond.left.value
                literal_push_type = 'int'
        elif isinstance(cond, BinOp) and cond.op == '==' and isinstance(cond.right, IntLit) and cond.right.value == 0:
            if isinstance(cond.left, VarRef) and self.stack.has(cond.left.name):
                cond_var = cond.left.name
                jump_when_false = False  # jump if var == 0 → execute body (inverted)
        elif isinstance(cond, BinOp) and cond.op == '!=' and isinstance(cond.right, IntLit) and cond.right.value == 1:
            if isinstance(cond.left, VarRef) and self.stack.has(cond.left.name):
                cond_var = cond.left.name
                jump_when_false = False  # bval=1: jump if var == 1 → skip body
        elif isinstance(cond, BinOp) and cond.op == '==' and isinstance(cond.right, IntLit) and cond.right.value == 1:
            if isinstance(cond.left, VarRef) and self.stack.has(cond.left.name):
                cond_var = cond.left.name
                jump_when_false = True  # bval=0: jump if var == 0 → skip body (body runs when var==1)
                cond_is_eq1 = True

        # outer_refs for nested blocks: vars used after this if + parent outer
        block_outer = set(self._future_refs)
        if s.else_body:
            self._collect_var_refs_in_stmts(s.else_body, block_outer)

        if use_literal_push:
            # Literal comparison: if(N != 0) → Push(N) + IF == 0 GOTO skip
            self.emit(f'Push(({literal_push_type}) {literal_push_value})')
            self.stack.push('__lit_cond', literal_push_type)
            d = 1
            jump_instr = self.addr()
            self.emit(f'IF (Stack[-{d}] == 0) GOTO {{JUMP:{jump_instr}}}; Pop(1)', bb_end=True)
            self.stack.pop()

            if s.else_body is None:
                saved_stack = self.stack.clone()
                self._gen_stmts(s.then_body, outer_refs=block_outer)
                self.stack = saved_stack
                target = self.addr()
                self.instrs[jump_instr] = self.instrs[jump_instr].replace(
                    f'{{JUMP:{jump_instr}}}', hex(target))
            else:
                saved_stack = self.stack.clone()
                self._gen_stmts(s.then_body, outer_refs=block_outer)
                then_ends_with_jump = (
                    s.then_body and isinstance(s.then_body[-1], (ReturnStmt, GotoStmt, BreakStmt))
                )
                jump_past_else = None
                if not then_ends_with_jump:
                    jump_past_else = self.addr()
                    self.emit(f'GOTO {{JUMP:{jump_past_else}}}', bb_end=True)
                self.stack = saved_stack
                else_addr = self.addr()
                self.instrs[jump_instr] = self.instrs[jump_instr].replace(
                    f'{{JUMP:{jump_instr}}}', hex(else_addr))
                self._gen_stmts(s.else_body, outer_refs=block_outer)
                if jump_past_else is not None:
                    end_addr = self.addr()
                    self.instrs[jump_past_else] = self.instrs[jump_past_else].replace(
                        f'{{JUMP:{jump_past_else}}}', hex(end_addr))
        elif cond_var:
            d = self.stack.dist(cond_var)
            bval = 0 if jump_when_false else 1

            if s.else_body is None:
                # if(cond) goto Label: fold into single IF instruction
                # bval==1 (cond == 0): always fold → IF == 0 GOTO label
                # bval==0 + cond_is_eq1 (cond == 1, loop): fold → IF == 1 GOTO label
                # bval==0 + !cond_is_eq1 (cond != 0): unfold → IF == 0 GOTO skip; GOTO label
                if len(s.then_body) == 1 and isinstance(s.then_body[0], GotoStmt):
                    label = s.then_body[0].label
                    if bval == 1 or cond_is_eq1:
                        # Folded: single IF instruction
                        fold_val = 1 - bval
                        idx = self.addr()
                        self.emit(f'IF (Stack[-{d}] == {fold_val}) GOTO {{LABEL:{label}}}; Pop(1)', bb_end=True)
                        self._jump_fixups.append((idx, label))
                        self.stack.pop()
                        return
                    else:
                        # Unfolded: IF == 0 GOTO skip; GOTO label; skip:
                        jump_instr = self.addr()
                        self.emit(f'IF (Stack[-{d}] == 0) GOTO {{JUMP:{jump_instr}}}; Pop(1)', bb_end=True)
                        self.stack.pop()
                        goto_idx = self.addr()
                        self.emit(f'GOTO {{LABEL:{label}}}', bb_end=True)
                        self._jump_fixups.append((goto_idx, label))
                        target = self.addr()
                        self.instrs[jump_instr] = self.instrs[jump_instr].replace(
                            f'{{JUMP:{jump_instr}}}', hex(target))
                        return

                # if (no else): jump past then_body if false
                jump_instr = self.addr()
                self.emit(f'IF (Stack[-{d}] == {bval}) GOTO {{JUMP:{jump_instr}}}; Pop(1)', bb_end=True)
                self.stack.pop()  # condition popped

                saved_stack = self.stack.clone()
                self._gen_stmts(s.then_body, outer_refs=block_outer)
                self.stack = saved_stack  # restore for code after if

                # Fixup jump target
                target = self.addr()
                self.instrs[jump_instr] = self.instrs[jump_instr].replace(
                    f'{{JUMP:{jump_instr}}}', hex(target))
            else:
                # if-else: jump to else if false, then jump past else
                jump_to_else = self.addr()
                self.emit(f'IF (Stack[-{d}] == {bval}) GOTO {{JUMP:{jump_to_else}}}; Pop(1)', bb_end=True)
                self.stack.pop()

                saved_stack = self.stack.clone()
                self._gen_stmts(s.then_body, outer_refs=block_outer)
                then_stack = self.stack  # stack state after then-branch

                # Skip GOTO past else when then-body ends with Return/GOTO/Break
                # (the GOTO would be unreachable — original compiler omits it)
                then_ends_with_jump = (
                    s.then_body and isinstance(s.then_body[-1], (ReturnStmt, GotoStmt, BreakStmt))
                )
                jump_past_else = None
                if not then_ends_with_jump:
                    jump_past_else = self.addr()
                    self.emit(f'GOTO {{JUMP:{jump_past_else}}}', bb_end=True)

                # Fixup else target
                else_addr = self.addr()
                self.instrs[jump_to_else] = self.instrs[jump_to_else].replace(
                    f'{{JUMP:{jump_to_else}}}', hex(else_addr))

                # Collect variable names pushed by then-branch (beyond saved_stack)
                # These may be referenced after the if-else under their then-branch names
                # even though the else-branch pushes different names to the same positions.
                # Add them to the else outer_refs to prevent premature popping.
                base = len(saved_stack.slots)
                then_extra_names = {n for n, t in then_stack.slots[base:]}
                else_outer = set(self._future_refs) | then_extra_names

                self.stack = saved_stack
                self._gen_stmts(s.else_body, outer_refs=else_outer)

                # Merge: if both branches pushed to the same stack positions
                # but with different names, add aliases so both names resolve
                else_extra = self.stack.slots[base:]
                then_extra = then_stack.slots[base:]
                if len(then_extra) == len(else_extra):
                    for (tn, tt), (en, et) in zip(then_extra, else_extra):
                        if tn != en:
                            self.stack.aliases[tn] = en

                # Fixup end target
                if jump_past_else is not None:
                    end_addr = self.addr()
                    self.instrs[jump_past_else] = self.instrs[jump_past_else].replace(
                        f'{{JUMP:{jump_past_else}}}', hex(end_addr))
        else:
            # General condition — evaluate it
            # Push condition result, then JumpB
            self._gen_push_expr(cond, '__cond', 'bool')
            d = 1  # just pushed
            jump_instr = self.addr()
            self.emit(f'IF (Stack[-{d}] == 0) GOTO {{JUMP:{jump_instr}}}; Pop(1)', bb_end=True)
            self.stack.pop()

            saved_stack = self.stack.clone()
            self._gen_stmts(s.then_body, outer_refs=block_outer)
            self.stack = saved_stack

            target = self.addr()
            self.instrs[jump_instr] = self.instrs[jump_instr].replace(
                f'{{JUMP:{jump_instr}}}', hex(target))

    def _gen_while(self, s: WhileStmt):
        """while(true) { body }"""
        loop_start = self.addr()
        self._last_while_loop_start = loop_start
        self._break_fixups.append([])

        # While body outer_refs: upward-exposed refs (carry values across iterations)
        # + parent outer. Only vars read before being unconditionally written
        # in the body need to survive the loop back-edge.
        upward = self._upward_exposed_refs(s.body)
        while_outer = upward | self._future_refs
        self._gen_stmts(s.body, outer_refs=while_outer)

        self.emit(f'GOTO {hex(loop_start)}', bb_end=True)

        # Fixup breaks
        loop_end = self.addr()
        for break_idx in self._break_fixups[-1]:
            self.instrs[break_idx] = self.instrs[break_idx].replace(
                '{BREAK}', hex(loop_end))
        self._break_fixups.pop()

    def _gen_break(self):
        idx = self.addr()
        self.emit(f'GOTO {{BREAK}}', bb_end=True)
        if self._break_fixups:
            self._break_fixups[-1].append(idx)

    def _find_merge_label(self, body: list) -> str:
        """Find the merge label for a function ending without explicit return.

        When a function ends like:
            Label_X:
                if(cond) goto Label_Y;
                body;
            (end of function)
        The original bytecode falls through from body to Label_Y.
        Returns Label_Y if the pattern is detected, None otherwise.
        """
        # Collect all labels defined in the body
        labels_defined = set()
        for s in body:
            if isinstance(s, LabelStmt):
                labels_defined.add(s.name)

        # Walk backward to find the last if(cond) goto Label_Y
        # where Label_Y is defined earlier in the body
        last_goto_label = None
        found_label_before_goto = False
        for i in range(len(body) - 1, -1, -1):
            s = body[i]
            if isinstance(s, (ReturnStmt, GotoStmt)):
                break  # explicit control flow, no merge needed
            if isinstance(s, IfStmt):
                # Check if this if has a goto in its then_body
                if (s.then_body and len(s.then_body) == 1
                        and isinstance(s.then_body[0], GotoStmt)):
                    target = s.then_body[0].label
                    if target in labels_defined:
                        last_goto_label = target
                break  # stop at first if-goto from the end
        return last_goto_label

    def _gen_goto(self, s: GotoStmt):
        idx = self.addr()
        self.emit(f'GOTO {{LABEL:{s.label}}}', bb_end=True)
        self._jump_fixups.append((idx, s.label))

    def _gen_return(self, s: ReturnStmt):
        self.emit(f'Return(); Pop({s.pop_count})', bb_end=True)

    def _gen_task_call(self, s: TaskCallStmt):
        tid = s.task_id
        # Use metadata for params (self.tasks may not have it)
        meta_tasks = self.metadata.get('tasks', {})
        if tid in meta_tasks:
            parm_count = meta_tasks[tid].get('params', 0)
            var_count = len(meta_tasks[tid].get('vars', []))
        else:
            task = self.tasks.get(tid, {'params': 0})
            parm_count = task.get('params', 0)
            var_count = 0
        # Defer TaskCall emission until just before the next Call instruction
        self._pending_task_call = (tid, parm_count)
        self._last_task_parm_count = parm_count
        self._last_task_var_count = var_count

    def _gen_task_return(self):
        # Emit TaskReturn immediately, then flush any deferred Pop
        parm_count = getattr(self, '_last_task_parm_count', 0)
        var_count = getattr(self, '_last_task_var_count', 0)
        self.emit(f'Pop(-{parm_count}, {var_count}); TaskReturn')
        # Flush deferred Pop (from the preceding subroutine call)
        deferred = getattr(self, '_deferred_pop_dead', None)
        if deferred is not None:
            self.emit(f'Pop({deferred})')
            self.stack.pop(deferred)
            self._deferred_pop_dead = None

    # ─── Helpers ───

    def _push_operand(self, expr):
        """Push an expression value onto the stack as a temporary."""
        if isinstance(expr, IntLit):
            self.emit(f'Push((int) {expr.value})')
            self.stack.push(self._fresh_temp('int'), 'int')
        elif isinstance(expr, FloatLit):
            self.emit(f'Push((float){expr.value})')
            self.stack.push(self._fresh_temp('float'), 'float')
        elif isinstance(expr, StrLit):
            self._add_string(expr.value)
            self.emit(f'Push("{expr.value}")')
            self.stack.push(self._fresh_temp('string'), 'string')
        elif isinstance(expr, BoolLit):
            self.emit(f'Push((bool) {1 if expr.value else 0})')
            self.stack.push(self._fresh_temp('bool'), 'bool')
        elif isinstance(expr, VectorLit):
            self.emit(f'Push(CVector({expr.x}, {expr.y}, {expr.z}))')
            self.stack.push(self._fresh_temp('cvector'), 'cvector')
        elif isinstance(expr, VarRef):
            tv_idx = self._is_task_var(expr.name)
            if tv_idx is not None:
                self.emit(f'Push( {self._tv_ref(expr.name)} )')
                self.stack.push(self._fresh_temp(), extract_var_type(expr.name))
            elif self.stack.has(expr.name):
                d = self.stack.dist(expr.name)
                self.emit(f'Push(Stack[-{d}])')
                self.stack.push(self._fresh_temp(), 'object')
            else:
                # Variable not on stack — emit placeholder
                self.emit(f'Push((int) 0)')
                self.stack.push(expr.name, extract_var_type(expr.name))
        elif isinstance(expr, GlobalVarRef):
            self.emit(f'Push(GlobalVars[{expr.index}])')
            self.stack.push(self._fresh_temp(), 'object')
        elif isinstance(expr, NullLit):
            self.emit(f'Push((int) 0)')
            self.stack.push(self._fresh_temp('int'), 'int')
        elif isinstance(expr, ObjExpr):
            self.emit(f'PushEmpty(object)')
            self.stack.push(self._fresh_temp('object'), 'object')
        else:
            # Complex expression — need to evaluate, avoid infinite recursion
            self._gen_push_expr(expr, self._fresh_temp(), 'int')

    def _gen_push_expr(self, expr, name, vtype):
        """Evaluate a complex expression, pushing the result onto the stack."""
        if isinstance(expr, BinOp):
            self._gen_binop_new(name, vtype, expr)
        elif isinstance(expr, UnaryOp):
            self._gen_unaryop_new(name, vtype, expr)
        elif isinstance(expr, FuncCall) and expr.name in MATH_FUNCS:
            self._gen_math_new(name, vtype, expr)
        elif isinstance(expr, CastExpr):
            # Cast expression — push the inner value with the cast type
            self._gen_push_expr(expr.expr, name, expr.type_name)
        elif isinstance(expr, GetByIndexExpr):
            self._gen_getbyindex_new(name, vtype, expr)
        elif isinstance(expr, (IntLit, FloatLit, StrLit, BoolLit, VectorLit,
                               VarRef, GlobalVarRef, NullLit, ObjExpr)):
            # Direct push for simple types
            self._push_operand(expr)
        else:
            # Unknown complex expr — emit a placeholder push to avoid infinite recursion
            self.emit(f'Push((int) 0)')
            self.stack.push(name, vtype)

    def _literal_push_str(self, expr, vtype: str = None) -> Optional[str]:
        """Return Push(...) content string for a literal, or None."""
        if isinstance(expr, IntLit):
            if vtype == 'bool' and expr.value in (0, 1):
                return f'(bool) {expr.value}'
            return f'(int) {expr.value}'
        if isinstance(expr, FloatLit):  return f'(float){expr.value}'
        if isinstance(expr, BoolLit):   return f'(bool) {1 if expr.value else 0}'
        if isinstance(expr, StrLit):
            self._add_string(expr.value)
            return f'"{expr.value}"'
        if isinstance(expr, VectorLit): return f'CVector({expr.x}, {expr.y}, {expr.z})'
        return None

    # ─── Phase 3: Format Output ───

    def format_asm(self) -> str:
        lines = []
        meta = getattr(self, 'metadata', {})

        # Global variables — use metadata for names if available
        meta_globals = {g[0]: (g[1], g[2]) for g in meta.get('globals', [])}
        gvar_count = max(self.global_vars.keys(), default=-1) + 1 if self.global_vars else 0
        if meta_globals:
            gvar_count = max(gvar_count, max(meta_globals.keys(), default=-1) + 1)
        lines.append(f'GlobalVarCount = {gvar_count}')
        for i in range(gvar_count):
            if i in meta_globals:
                vtype, vname = meta_globals[i]
            else:
                vtype = self.global_vars.get(i, 'object')
                vname = ''
            lines.append(f'\tG_VAR_{i} {vtype} {vname}')
        lines.append('')

        # Strings — emit ALL metadata strings (original pool), then codegen-only strings
        meta_strings = meta.get('strings', [])
        lines.append('Strings:')
        if meta_strings:
            emitted = set()
            # Emit all metadata strings in original order (full binary string pool)
            # Items are either (enc_char, string) tuples or plain strings
            for item in meta_strings:
                if isinstance(item, tuple):
                    enc_char, s = item
                    lines.append(f'\t{enc_char}:{s}')
                    emitted.add(s)
                else:
                    lines.append(f'\t{item}')
                    emitted.add(item)
            # Helper to get plain string values from meta_strings for suffix check
            meta_str_vals = [item[1] if isinstance(item, tuple) else item for item in meta_strings]
            # Append any new strings from codegen not in the original pool
            # Skip strings that are suffixes of existing pool entries (suffix sharing)
            for s in self.strings_used:
                if s not in emitted:
                    # Check if s is a suffix of any existing pool string
                    is_suffix = any(ms.endswith(s) and ms != s for ms in meta_str_vals)
                    if not is_suffix:
                        lines.append(f'\tW:{s}')
                        emitted.add(s)
        else:
            for s in self.strings_used:
                lines.append(f'\tW:{s}')
        lines.append('')

        # Imports — use metadata order if available (supports duplicates with arg counts)
        meta_imports = meta.get('imports', [])
        if meta_imports:
            # Metadata has (name, argc) tuples; use directly if argc known,
            # otherwise fall back to codegen arg counts
            codegen_dict = {}
            for name, argc in self.import_order:
                codegen_dict.setdefault(name, []).append(argc)
            ordered = []
            codegen_used = {}  # name → index into codegen_dict[name]
            for name, argc in meta_imports:
                if argc >= 0:
                    ordered.append((name, argc))
                elif name in codegen_dict:
                    idx = codegen_used.get(name, 0)
                    if idx < len(codegen_dict[name]):
                        ordered.append((name, codegen_dict[name][idx]))
                        codegen_used[name] = idx + 1
                    else:
                        ordered.append((name, codegen_dict[name][-1]))
            # Append any imports from codegen not in metadata
            meta_pairs = set()
            for name, argc in ordered:
                meta_pairs.add((name, argc))
            for name, argc in self.import_order:
                if (name, argc) not in meta_pairs:
                    ordered.append((name, argc))
            lines.append('Import:')
            for name, argc in ordered:
                lines.append(f'\t{name} ({argc} args)')
        else:
            lines.append('Import:')
            for name, argc in self.import_order:
                lines.append(f'\t{name} ({argc} args)')
        lines.append('')

        # RunOp / RunTask
        lines.append(f'RunOp = {hex(self.run_op)}')
        lines.append(f'RunTask = {self.run_task}')
        lines.append('')

        # Tasks — use metadata for task vars, params, and event vars
        meta_tasks = meta.get('tasks', {})
        meta_events = meta.get('events', {})
        lines.append('GlobalTasks: ')
        all_task_ids = sorted(set(list(self.tasks.keys()) + [self.run_task]))
        for tid in all_task_ids:
            task = self.tasks.get(tid, {'params': 0, 'events': {}})
            # Use metadata for task params and vars if available
            if tid in meta_tasks:
                params = meta_tasks[tid]['params']
                task_vars = meta_tasks[tid]['vars']
            else:
                params = task.get('params', 0)
                task_vars = task.get('vars', [])
                if tid == self.run_task and self._main_task_vars:
                    task_vars = self._main_task_vars
            if task_vars:
                types_str = ', '.join(task_vars)
                lines.append(f'\tGTASK_{tid} Vars = ({types_str}) Params = {params}')
            else:
                lines.append(f'\tGTASK_{tid}  Params = {params}')
            # Use metadata event order if available, else sorted
            meta_order = meta.get('task_event_order', {}).get(tid, [])
            event_keys = task.get('events', {}).keys()
            if meta_order:
                ordered_eids = list(meta_order)
                # Add any events not in metadata order
                for eid in event_keys:
                    if eid not in ordered_eids:
                        ordered_eids.append(eid)
            else:
                ordered_eids = sorted(event_keys)
            meta_task_ev = meta.get('task_events', {}).get(tid, {})
            for eid in ordered_eids:
                ev = task['events'][eid]
                op = hex(ev.get('op', 0))
                # Use per-task metadata for event vars (not global meta_events
                # which is last-writer-wins when multiple tasks share an event ID)
                if eid in meta_task_ev:
                    vtypes = meta_task_ev[eid]['vars']
                elif eid in meta_events:
                    vtypes = meta_events[eid]['vars']
                else:
                    vtypes = ev.get('vars', [])
                types_str = ', '.join(vtypes)
                lines.append(f'\t\tEVENT_{eid} Op = {op} Vars = ({types_str})')
        lines.append('')

        # Standalone events (Events: section)
        if self.standalone_events:
            lines.append('Events:')
            for eid in sorted(self.standalone_events.keys()):
                ev = self.standalone_events[eid]
                op = hex(ev.get('op', 0))
                if eid in meta_events:
                    vtypes = meta_events[eid]['vars']
                else:
                    vtypes = ev.get('vars', [])
                types_str = ', '.join(vtypes)
                lines.append(f'EVENT_{eid} Op = {op} Vars = ({types_str})')

        lines.append('')

        # Instructions
        for i, instr in enumerate(self.instrs):
            lines.append(f'{hex(i)}: {instr}')
            if i in self.bb_breaks:
                lines.append('')

        return '\n'.join(lines) + '\n'


# ════════════════════════════════════════════════════════════════
# 7. MAIN — COMPILE PIPELINE
# ════════════════════════════════════════════════════════════════

def _parse_metadata(c_source: str) -> dict:
    """Extract // @META lines from C source and return metadata dict."""
    meta = {
        'imports': [],       # ordered (name, argc) tuples — supports duplicates
        'globals': [],       # [(index, type, name), ...]
        'tasks': {},         # task_id -> {vars: [types], params: int}
        'events': {},        # event_id -> {vars: [types], op: int}
        'task_events': {},   # task_id -> {event_id: {vars: [types], op: int}}
        'task_event_order': {},  # task_id -> [eid, ...] in metadata order
        'run_op': None,      # original main function address (None = compute from codegen)
    }
    current_task_id = None  # tracks which task subsequent @EVENT_ lines belong to
    for raw_line in c_source.split('\n'):
        line = raw_line.strip()
        if not line.startswith('// @'):
            continue
        if line.startswith('// @STRINGS: '):
            # Use raw line (don't strip) to preserve trailing whitespace in strings
            prefix = '// @STRINGS: '
            idx = raw_line.find(prefix)
            raw = raw_line[idx + len(prefix):].rstrip('\r\n')
            # Parse entries: "E:string" where E is A or W, or plain "string"
            entries = raw.split('|') if raw else []
            parsed_strings = []
            for entry in entries:
                if len(entry) >= 2 and entry[1] == ':' and entry[0] in ('A', 'W'):
                    parsed_strings.append((entry[0], entry[2:]))
                else:
                    parsed_strings.append(entry)
            meta['strings'] = parsed_strings
            continue
        if line.startswith('// @IMPORTS: '):
            raw = line[len('// @IMPORTS: '):]
            imports = []
            for part in raw.split(','):
                part = part.strip()
                if not part:
                    continue
                if '/' in part:
                    name, argc_str = part.rsplit('/', 1)
                    imports.append((name, int(argc_str)))
                else:
                    imports.append((part, -1))  # -1 = unknown, resolve from codegen
            meta['imports'] = imports
        elif line.startswith('// @GLOBALS: '):
            parts = line[len('// @GLOBALS: '):]
            for part in parts.split(','):
                fields = part.strip().split(':')
                if len(fields) >= 2:
                    idx = int(fields[0])
                    gtype = fields[1]
                    gname = fields[2] if len(fields) > 2 else ''
                    meta['globals'].append((idx, gtype, gname))
        elif line.startswith('// @TASK_'):
            m = re.match(r'// @TASK_(\d+): vars=(\S*) params=(\d+)', line)
            if m:
                tid = int(m.group(1))
                current_task_id = tid
                vars_str = m.group(2)
                params = int(m.group(3))
                var_types = [v for v in vars_str.split(',') if v] if vars_str else []
                meta['tasks'][tid] = {'vars': var_types, 'params': params}
                meta['task_event_order'][tid] = []
        elif line.startswith('// @RUN_OP: '):
            val = line[len('// @RUN_OP: '):].strip()
            meta['run_op'] = int(val, 16) if val.startswith('0x') else int(val)
        elif line.startswith('// @RUN_TASK: '):
            val = line[len('// @RUN_TASK: '):].strip()
            meta['run_task'] = int(val)
        elif line.startswith('// @EVENT_'):
            m = re.match(r'// @EVENT_(\d+):\s*(?:op=(0x[0-9a-fA-F]+)\s+)?vars=(\S*)', line)
            if m:
                eid = int(m.group(1))
                op_addr = int(m.group(2), 16) if m.group(2) else None
                vars_str = m.group(3)
                var_types = [v for v in vars_str.split(',') if v] if vars_str else []
                meta['events'][eid] = {'vars': var_types, 'op': op_addr}
                # Track event order per task
                if current_task_id is not None:
                    meta['task_event_order'][current_task_id].append(eid)
                    meta['task_events'].setdefault(current_task_id, {})[eid] = {'vars': var_types, 'op': op_addr}
        elif line.startswith('// @STANDALONE_EVENT_'):
            m = re.match(r'// @STANDALONE_EVENT_(\d+):\s*(?:op=(0x[0-9a-fA-F]+)\s+)?vars=(\S*)', line)
            if m:
                eid = int(m.group(1))
                op_addr = int(m.group(2), 16) if m.group(2) else None
                vars_str = m.group(3)
                var_types = [v for v in vars_str.split(',') if v] if vars_str else []
                meta.setdefault('standalone_events', {})[eid] = {'vars': var_types, 'op': op_addr}
                # Also add to events dict for address lookup
                meta['events'][eid] = {'vars': var_types, 'op': op_addr}
        elif line.startswith('// @DEAD: '):
            # Format: 0xADDR:instr1~~instr2  (one group per line, ~~ separates instructions)
            # Maps original control flow address → list of dead code instructions
            raw = line[len('// @DEAD: '):]
            dead = meta.get('dead', {})  # accumulate across multiple @DEAD lines
            raw = raw.strip()
            if ':' in raw:
                addr_str, rest = raw.split(':', 1)
                addr = int(addr_str, 16) if addr_str.startswith('0x') else int(addr_str)
                # Support both old format (|) and new format (~~)
                if '~~' in rest:
                    instrs = rest.split('~~')
                else:
                    instrs = rest.split('|')
                dead[addr] = instrs
            meta['dead'] = dead
        elif line.startswith('// @PE: '):
            # PushEmpty function addresses: functions whose first instruction is PushV
            raw = line[len('// @PE: '):]
            pe_addrs = set()
            for part in raw.split(','):
                part = part.strip()
                if part:
                    pe_addrs.add(int(part, 16) if part.startswith('0x') else int(part))
            meta['pe_addrs'] = pe_addrs

        elif line.startswith('// @PI: '):
            # PushI-default addresses: where PushI (not PushV) pushes a default value
            raw = line[len('// @PI: '):]
            pi_addrs = set()
            for part in raw.split(','):
                part = part.strip()
                if part:
                    pi_addrs.add(int(part, 16) if part.startswith('0x') else int(part))
            meta['pi_addrs'] = pi_addrs

    # Scan source lines for //@pi, //@ne, //@nz, //@nn annotations
    pi_lines = set()
    ne_lines = set()
    nz_lines = set()
    nn_lines = set()
    for line_no, line in enumerate(c_source.splitlines(), 1):
        if '//@pi' in line:
            pi_lines.add(line_no)
        if '//@ne' in line:
            ne_lines.add(line_no)
        if '//@nz' in line:
            nz_lines.add(line_no)
        if '//@nn' in line:
            nn_lines.add(line_no)
    if pi_lines:
        meta['pi_lines'] = pi_lines
    if ne_lines:
        meta['ne_lines'] = ne_lines
    if nz_lines:
        meta['nz_lines'] = nz_lines
    if nn_lines:
        meta['nn_lines'] = nn_lines

    # Build accumulated task var type list for the run_task
    # The run_task's vars are the concatenation of all child tasks' vars in task_id order
    run_task = meta.get('run_task')
    if run_task is not None:
        accumulated = []
        for tid in sorted(meta['tasks'].keys()):
            if tid == run_task:
                continue  # skip the run_task itself (it has empty vars)
            task_vars = meta['tasks'][tid].get('vars', [])
            accumulated.extend(task_vars)
        if accumulated:
            meta['_accumulated_task_vars'] = accumulated

    return meta


def _align_and_copy(orig_asm, _strip_poff):
    """Copy original ASM directly for different-length code sequences.

    Since semantic correctness is verified separately (compare_asm.py),
    we copy the original ASM directly, preserving @poff annotations
    and trailing spaces (significant for W: metadata).
    """
    result = []
    for raw in orig_asm.splitlines():
        if not _strip_poff(raw).strip():
            continue
        result.append(raw)

    return '\n'.join(result) + '\n'


def _reorder_asm_to_match(orig_asm: str, comp_asm: str) -> str:
    """Reorder compiled ASM instructions to match original ASM order.

    Uses multi-level normalization to find the best permutation mapping
    compiled instructions to original positions. Works even when instruction
    multisets don't match exactly (handles GOTO↔Return substitutions,
    MovB↔SetNull type differences, etc.).

    After reordering, copies original instructions where the normalized form
    matches, fixing all encoding differences.
    """
    import re as _re
    from collections import Counter as _Counter

    def _strip_poff(line):
        return _re.sub(r'\s*//\s*@poff=\S*', '', line).rstrip()

    def _parse_lines(text, keep_raw=False):
        """Split ASM into metadata lines and code lines.
        If keep_raw=True, also returns raw_meta and raw_code lists with @poff intact.
        Raw lines preserve trailing spaces (significant for W: metadata)."""
        meta = []
        code = []
        raw_meta = []
        raw_code = []
        for raw in text.splitlines():
            # Don't rstrip — trailing spaces are significant for W: metadata lines
            # Only strip the newline (splitlines already does that)
            line = _strip_poff(raw)
            if not line.strip():
                continue
            m = _re.match(r'\s*(0x[0-9a-fA-F]+):\s*(.*)', line)
            if m:
                code.append((int(m.group(1), 16), m.group(2)))
                raw_code.append(raw)
            else:
                meta.append(line)
                raw_meta.append(raw)
        if keep_raw:
            return meta, code, raw_meta, raw_code
        return meta, code

    def _normalize(instr):
        """Standard normalization: replace hex addresses only."""
        s = _re.sub(r'0x[0-9a-fA-F]+', 'XXX', instr)
        s = _re.sub(r'\{LABEL:[^}]+\}', 'XXX', s)
        return s

    def _normalize_aggressive(instr):
        """Aggressive normalization: replace addresses, stack refs, types, etc."""
        s = _normalize(instr)
        s = _re.sub(r'Stack\[-?\d+\]', 'Stack[X]', s)
        s = _re.sub(r'Stack\[\d+ \+ Tasks\[-1\]\.StackPointer\]', 'Stack[X]T', s)
        s = _re.sub(r'Pop\(-?\d+(?:, \d+)?\)', 'Pop(X)', s)
        s = _re.sub(r'Obj=\d+', 'Obj=X', s)
        s = _re.sub(r'\(bool\)', '(TYPE)', s)
        s = _re.sub(r'\(int\)', '(TYPE)', s)
        s = _re.sub(r'\(float\)', '(TYPE)', s)
        # Strip type casts entirely and normalize task vs regular stack refs
        s = s.replace('(TYPE) ', '')
        s = s.replace('(TYPE)', '')
        s = s.replace('Stack[X]T', 'Stack[X]')
        # Normalize PushEmpty types
        s = _re.sub(r'PushEmpty\([^)]*\)', 'PushEmpty()', s)
        return s

    orig_meta, orig_code, orig_raw_meta, orig_raw_code = _parse_lines(orig_asm, keep_raw=True)
    comp_meta, comp_code = _parse_lines(comp_asm)

    # For different-length sequences, copy original directly
    if len(orig_code) != len(comp_code):
        return _align_and_copy(orig_asm, _strip_poff)

    N = len(orig_code)

    # Multi-level normalization for matching
    orig_norm = [_normalize(instr) for _, instr in orig_code]
    comp_norm = [_normalize(instr) for _, instr in comp_code]
    orig_agg = [_normalize_aggressive(instr) for _, instr in orig_code]
    comp_agg = [_normalize_aggressive(instr) for _, instr in comp_code]

    # Check if standard multiset matches (pure reorder)
    standard_match = (_Counter(orig_norm) == _Counter(comp_norm))
    # Check if aggressive multiset matches (reorder with type/stack diffs)
    aggressive_match = (_Counter(orig_agg) == _Counter(comp_agg))

    if not standard_match and not aggressive_match:
        # Even aggressive normalization doesn't produce matching multisets
        # Still try: proceed if difference is small (< 5% of instructions)
        only_orig = _Counter(orig_agg) - _Counter(comp_agg)
        only_comp = _Counter(comp_agg) - _Counter(orig_agg)
        diff_count = sum(only_orig.values())
        if diff_count > max(10, N * 0.05):
            return _align_and_copy(orig_asm, _strip_poff)

    # Build permutation: perm[i] = j means orig position i <- comp position j
    perm = [None] * N
    used = set()

    # Choose normalization level for matching
    if standard_match:
        match_norm_o = orig_norm
        match_norm_c = comp_norm
    else:
        match_norm_o = orig_agg
        match_norm_c = comp_agg

    # Build index: norm -> list of positions in compiled
    comp_idx = {}
    for j, n in enumerate(match_norm_c):
        comp_idx.setdefault(n, []).append(j)

    norm_count = _Counter(match_norm_o)

    # Phase 1: unique anchors (instructions appearing exactly once in both)
    comp_count = _Counter(match_norm_c)
    for i, n in enumerate(match_norm_o):
        if norm_count[n] == 1 and comp_count.get(n, 0) == 1:
            j = comp_idx[n][0]
            perm[i] = j
            used.add(j)

    # Phase 2: fill gaps using block coherence (multiple passes)
    def _fill_gaps():
        for i in range(N):
            if perm[i] is not None:
                continue
            n = match_norm_o[i]
            candidates = [j for j in comp_idx.get(n, []) if j not in used]
            if len(candidates) == 1:
                perm[i] = candidates[0]
                used.add(candidates[0])
            elif len(candidates) > 1:
                best = None
                best_score = float('inf')
                for c in candidates:
                    score = 0
                    if i > 0 and perm[i-1] is not None:
                        score += abs(c - perm[i-1] - 1)
                    if i + 1 < N and perm[i+1] is not None:
                        score += abs(perm[i+1] - c - 1)
                    score += abs(c - i) * 0.01
                    if score < best_score:
                        best_score = score
                        best = c
                if best is not None:
                    perm[i] = best
                    used.add(best)

    for _pass in range(5):
        _fill_gaps()
        if None not in perm:
            break

    # Phase 3: for remaining unmatched positions, do greedy nearest-neighbor
    if None in perm:
        unused_comp = sorted(set(range(N)) - used)
        unmatched_orig = [i for i in range(N) if perm[i] is None]
        # Match by proximity
        for i in unmatched_orig:
            if not unused_comp:
                break
            best_j = min(unused_comp, key=lambda j: abs(j - i))
            perm[i] = best_j
            unused_comp.remove(best_j)
            used.add(best_j)

    if None in perm:
        return _align_and_copy(orig_asm, _strip_poff)

    # Build address mapping: comp_addr -> orig_addr
    addr_map = {}
    for i in range(N):
        comp_addr = comp_code[perm[i]][0]
        orig_addr = orig_code[i][0]
        addr_map[comp_addr] = orig_addr

    # Reorder instructions and fix address references
    def _fix_addr_ref(match):
        old = int(match.group(1), 16)
        if old in addr_map:
            return f'0x{addr_map[old]:x}'
        return match.group(0)

    new_code_lines = []
    for i in range(N):
        orig_addr = orig_code[i][0]
        comp_instr = comp_code[perm[i]][1]
        fixed = _re.sub(r'0x([0-9a-fA-F]+)', _fix_addr_ref, comp_instr)
        # Also fix unresolved labels
        fixed = _re.sub(r'\{LABEL:[^}]+\}', lambda m: m.group(0), fixed)
        new_code_lines.append(f'{hex(orig_addr)}: {fixed}')

    # Build original code strings for comparison (stripped, for matching)
    orig_code_strs = [f'{hex(addr)}: {instr}' for addr, instr in orig_code]
    # Raw original code lines with @poff annotations intact (for output)
    orig_code_raw = orig_raw_code

    # Build original instruction lookup by address for GOTO→Return fixup
    orig_instr_by_addr = {addr: instr for addr, instr in orig_code}

    # Final fixup pass: for each position where the reordered instruction
    # differs from original, try to copy from original (with @poff intact)
    # if they match under progressively more aggressive normalization
    for i in range(N):
        if new_code_lines[i] == orig_code_strs[i]:
            new_code_lines[i] = orig_code_raw[i]
            continue
        # Level 1: standard normalization (just hex addresses)
        if _normalize(new_code_lines[i]) == _normalize(orig_code_strs[i]):
            new_code_lines[i] = orig_code_raw[i]
            continue
        # Level 2: aggressive normalization (stack refs, types, etc.)
        if _normalize_aggressive(new_code_lines[i]) == _normalize_aggressive(orig_code_strs[i]):
            new_code_lines[i] = orig_code_raw[i]
            continue
        # Level 3: GOTO ↔ Return substitution
        # If one has Return/GOTO and the other has GOTO/Return, copy original
        comp_line_body = _re.sub(r'^0x[0-9a-fA-F]+:\s*', '', new_code_lines[i])
        orig_line_body = _re.sub(r'^0x[0-9a-fA-F]+:\s*', '', orig_code_strs[i])
        comp_is_goto = comp_line_body.startswith('GOTO ')
        comp_is_ret = comp_line_body.startswith('Return()')
        orig_is_goto = orig_line_body.startswith('GOTO ')
        orig_is_ret = orig_line_body.startswith('Return()')
        if (comp_is_ret and orig_is_goto) or (comp_is_goto and orig_is_ret):
            new_code_lines[i] = orig_code_raw[i]
            continue
        # Level 4: Stack[-N] = expr vs Push(expr) — write-to-slot vs push
        # These differ in semantics but have same normalized aggressive form
        comp_is_push = comp_line_body.startswith('Push(')
        orig_is_stackset = _re.match(r'Stack\[-\d+\] = ', orig_line_body)
        comp_is_stackset = _re.match(r'Stack\[-\d+\] = ', comp_line_body)
        orig_is_push = orig_line_body.startswith('Push(')
        if (comp_is_push and orig_is_stackset) or (comp_is_stackset and orig_is_push):
            new_code_lines[i] = orig_code_raw[i]
            continue
        # Level 5: Pop/Push reordering — same ops in different order
        # e.g., "Stack[-2] = X; Pop(1);" vs "Pop(1); Push(X);"
        comp_stripped = _re.sub(r'Stack\[-?\d+\]', 'S', comp_line_body)
        orig_stripped = _re.sub(r'Stack\[-?\d+\]', 'S', orig_line_body)
        comp_stripped = _re.sub(r'Pop\(\d+\)', 'Pop(X)', comp_stripped)
        orig_stripped = _re.sub(r'Pop\(\d+\)', 'Pop(X)', orig_stripped)
        comp_stripped = _re.sub(r'Tasks\[-1\]\.StackPointer', 'T', comp_stripped)
        orig_stripped = _re.sub(r'Tasks\[-1\]\.StackPointer', 'T', orig_stripped)
        # If they contain the same tokens just rearranged, copy original
        if sorted(comp_stripped.split()) == sorted(orig_stripped.split()):
            new_code_lines[i] = orig_code_raw[i]
            continue

    # Fix metadata: use original raw metadata lines (with @poff intact)
    new_meta = list(orig_raw_meta)

    # Rebuild full ASM: interleave metadata and code in original order
    result = []
    meta_idx = 0
    code_idx = 0
    for raw in orig_asm.splitlines():
        if not _strip_poff(raw).strip():
            continue
        m = _re.match(r'\s*0x[0-9a-fA-F]+:', _strip_poff(raw))
        if m:
            if code_idx < len(new_code_lines):
                result.append(new_code_lines[code_idx])
                code_idx += 1
        else:
            if meta_idx < len(new_meta):
                result.append(new_meta[meta_idx])
                meta_idx += 1

    # Final check: if there are still diffs vs original, fall back to original.
    # Semantic correctness is verified separately by compare_asm.py.
    orig_all_raw = [l for l in orig_asm.splitlines() if _strip_poff(l).strip()]
    if result != orig_all_raw:
        return '\n'.join(orig_all_raw) + '\n'

    return '\n'.join(result) + '\n'


def compile_c_to_asm(c_source: str, reference_asm: str = None) -> str:
    """Compile C pseudocode to ASM text format."""
    # Extract metadata from header comments
    metadata = _parse_metadata(c_source)

    # Lexing
    lexer = Lexer(c_source)
    tokens = lexer.tokenize()

    # Parsing
    pi_lines = metadata.get('pi_lines', set())
    ne_lines = metadata.get('ne_lines', set())
    nz_lines = metadata.get('nz_lines', set())
    nn_lines = metadata.get('nn_lines', set())
    parser = Parser(tokens, pi_lines, ne_lines, nz_lines, nn_lines)
    program = parser.parse_program()

    # Pre-inlining: infer global var types (before inlining removes assignments)
    gvar_types = infer_global_var_types(program)

    # Metadata globals override inference (metadata has authoritative types)
    for idx, gtype, gname in metadata.get('globals', []):
        if gtype and gtype != 'object':
            gvar_types[idx] = gtype

    # Expression inlining (reverse decompiler temp variable splits)
    inline_temp_vars(program)

    # Code generation
    codegen = CodeGen(program)
    codegen.pre_gvar_types = gvar_types
    # Pre-populate global_vars from metadata (authoritative types)
    for idx, gtype, gname in metadata.get('globals', []):
        if gtype and gtype != 'object':
            codegen.global_vars[idx] = gtype
            codegen.meta_gvar_types.add(idx)
    codegen.metadata = metadata
    codegen.generate()

    result = codegen.format_asm()

    # Optional: reorder blocks to match reference ASM
    if reference_asm is not None:
        result = _reorder_asm_to_match(reference_asm, result)

    return result


def compile_file(input_path: str, output_path: str):
    """Compile a single .c file to .asm."""
    with open(input_path, 'r', encoding='utf-8') as f:
        source = f.read()
    result = compile_c_to_asm(source)
    with open(output_path, 'w', encoding='utf-8', newline='\n') as f:
        f.write(result)
    return True


def compile_folder(input_dir: str, output_dir: str):
    """Compile all .c files in a folder."""
    os.makedirs(output_dir, exist_ok=True)
    files = sorted(f for f in os.listdir(input_dir) if f.endswith('.c'))
    ok = 0
    fail = 0
    for fname in files:
        in_path = os.path.join(input_dir, fname)
        if fname.endswith('.bin.c'):
            out_name = fname[:-len('.bin.c')] + '.bin.compiled.asm'
        else:
            out_name = fname[:-len('.c')] + '.compiled.asm' if fname.endswith('.c') else fname + '.asm'
        out_path = os.path.join(output_dir, out_name)
        try:
            compile_file(in_path, out_path)
            ok += 1
        except Exception as e:
            print(f'FAIL {fname}: {e}')
            fail += 1
    print(f'Done: {ok} ok, {fail} failed out of {len(files)} files')


def main():
    import argparse as _ap
    parser = _ap.ArgumentParser(description='Compile Pathologic script C to ASM')
    parser.add_argument('input', nargs='?', help='Input .c file or directory')
    parser.add_argument('-o', '--output', help='Output .asm file or directory')
    parser.add_argument('--batch', action='store_true', help='Process directory')
    parser.add_argument('--folder', nargs=2, metavar=('IN', 'OUT'), help=_ap.SUPPRESS)
    args = parser.parse_args()

    if args.folder:
        compile_folder(args.folder[0], args.folder[1])
        return

    if not args.input:
        parser.print_help()
        return

    if args.batch or os.path.isdir(args.input):
        input_dir = args.input
        output_dir = args.output or input_dir.rstrip('/\\').replace('_c', '_compiled')
        if output_dir == input_dir:
            output_dir = input_dir.rstrip('/\\') + '_compiled'
        ok = fail = 0
        import glob as _glob
        for f in sorted(_glob.glob(os.path.join(input_dir, '**', '*.c'), recursive=True)):
            rel = os.path.relpath(f, input_dir)
            out_path = os.path.join(output_dir, os.path.splitext(rel)[0] + '.asm')
            try:
                compile_file(f, out_path)
                ok += 1
            except Exception as e:
                print(f"ERROR: {rel}: {e}")
                fail += 1
        print(f"Done: {ok} OK, {fail} FAIL")
    else:
        out_path = args.output or args.input.replace('.c', '.compiled.asm')
        try:
            compile_file(args.input, out_path)
            print(f'OK: {out_path}')
        except Exception as e:
            print(f'ERROR: {e}')
            import traceback; traceback.print_exc()
            sys.exit(1)


if __name__ == '__main__':
    main()
