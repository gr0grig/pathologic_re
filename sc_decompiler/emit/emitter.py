"""SC-AST -> .sc text.

Whitespace and indentation are cosmetic — they do not affect scomp's output bytes.
The order of nodes (tasks, functions, statements, expressions) DOES matter for
byte-identity, so the emitter walks the AST in strict declaration order.
"""

from __future__ import annotations

import io
from typing import List, Optional

from ..ast import (
    AssignType, Op1Type, Op2Type, Op3Type, VarType,
    ENAssign, ENAssignStruct, ENBool, ENFloat, ENFunc, ENFuncExtern,
    ENFuncGlobal, ENFuncSuper, ENId, ENIdStruct, ENInt, ENOp1, ENOp2, ENOp3,
    ENString, ENTask, ENTypeC, ENVector, EventDecl, Function, GlobalVar,
    OpBlock, OpBreak, OpConst, OpContinue, OpDisableEvent, OpDoWhile,
    OpEnableEvent, OpExprStmt, OpFor, OpIf, OpReturn, OpVar, OpWhile, ScFile, Task,
)

# Precedence table mirrors the %left/%right declarations in parser.y.
# Higher number = binds tighter. Used only to insert parentheses when a child
# binds looser than its parent (otherwise we'd misparse on reread).
_OP2_PREC = {
    Op2Type.COMMA: 1,
    # assignment (=, +=, ...) is right-associative at 2 but handled separately in ENAssign
    Op2Type.OR:    4,
    Op2Type.AND:   5,
    Op2Type.BOR:   6,
    Op2Type.BXOR:  7,
    Op2Type.BAND:  8,
    Op2Type.EQ:    9,  Op2Type.NEQ: 9,
    Op2Type.LT:   10,  Op2Type.GT: 10,  Op2Type.LE: 10,  Op2Type.GE: 10,
    Op2Type.PLUS: 11,  Op2Type.MINUS: 11,
    Op2Type.MULT: 12,  Op2Type.DIV: 12,  Op2Type.MOD: 12,
    # POW has no infix syntax; rendered as pow(a, b)
}
_PREC_UNARY = 14   # NOT / UPLUS / UMINUS / INCR / DECR
_PREC_PRIMARY = 100

_OP2_SYM = {
    Op2Type.OR: "||", Op2Type.AND: "&&",
    Op2Type.BOR: "|", Op2Type.BXOR: "^", Op2Type.BAND: "&",
    Op2Type.EQ: "==", Op2Type.NEQ: "!=",
    Op2Type.LT: "<", Op2Type.GT: ">", Op2Type.LE: "<=", Op2Type.GE: ">=",
    Op2Type.PLUS: "+", Op2Type.MINUS: "-",
    Op2Type.MULT: "*", Op2Type.DIV: "/", Op2Type.MOD: "%",
}

_ASSIGN_SYM = {
    AssignType.NONE: "=",
    AssignType.PLUS: "+=", AssignType.MINUS: "-=",
    AssignType.MULT: "*=", AssignType.DIV: "/=", AssignType.MOD: "%=",
    AssignType.BAND: "&=", AssignType.BOR: "|=", AssignType.BXOR: "^=",
}


def emit_sc(file: ScFile) -> str:
    w = _Writer()
    _emit_file(w, file)
    return w.text()


# ----- writer ----------------------------------------------------------------

class _Writer:
    def __init__(self):
        self._buf = io.StringIO()
        self._indent = 0

    def text(self) -> str:
        return self._buf.getvalue()

    def line(self, s: str = "") -> None:
        if s:
            self._buf.write("\t" * self._indent)
            self._buf.write(s)
        self._buf.write("\n")

    def write(self, s: str) -> None:
        self._buf.write(s)

    def indent(self) -> None:
        self._indent += 1

    def dedent(self) -> None:
        self._indent -= 1


# ----- file-level emit -------------------------------------------------------

def _emit_file(w: _Writer, f: ScFile) -> None:
    for ev in f.events:
        w.line(f"event {ev.name} {ev.event_id};")
    if f.events and (f.globals or f.consts or f.tasks or f.global_funcs):
        w.line()

    for gv in f.globals:
        _emit_global_var(w, gv)
    if f.globals and (f.consts or f.tasks or f.global_funcs):
        w.line()

    for (ct, cn, ce) in f.consts:
        w.line(f"const {ct.keyword} {cn} = {_expr(ce, 0)};")
    if f.consts and (f.tasks or f.global_funcs):
        w.line()

    for t in f.tasks:
        _emit_task(w, t)
        w.line()

    for fn in f.global_funcs:
        _emit_function(w, fn, indent_member=False)
        w.line()


def _emit_global_var(w: _Writer, gv: GlobalVar) -> None:
    if gv.kind == "var":
        w.line(f"var {gv.type.keyword} {gv.name};")
    elif gv.kind == "property":
        w.line(f"property {gv.type.keyword} {gv.name};")
    elif gv.kind == "var_property":
        w.line(f"var property {gv.type.keyword} {gv.name};")
    else:
        raise ValueError(f"unknown global var kind: {gv.kind!r}")


def _emit_task(w: _Writer, t: Task) -> None:
    head = "maintask" if t.is_main else "task"
    suffix = f" : {t.base}" if t.base else ""
    w.line(f"{head} {t.name}{suffix}")
    w.line("{")
    w.indent()
    for (vt, vn) in t.vars:
        w.line(f"var {vt.keyword} {vn};")
    if t.vars and t.funcs:
        w.line()
    for i, fn in enumerate(t.funcs):
        if i:
            w.line()
        _emit_function(w, fn, indent_member=True)
    w.dedent()
    w.line("}")


def _emit_function(w: _Writer, fn: Function, indent_member: bool) -> None:
    args = ", ".join(f"{a_type.keyword} {a_name}" for (a_type, a_name) in fn.args) or "void"
    w.line(f"{fn.return_type.keyword} {fn.name}({args})")
    w.line("{")
    w.indent()
    for op in fn.body.ops:
        _emit_op(w, op)
    w.dedent()
    w.line("}")


# ----- statement emit --------------------------------------------------------

def _emit_op(w: _Writer, op) -> None:
    if isinstance(op, OpVar):
        if op.is_null_init:
            w.line(f"{op.type.keyword} {op.name} = null;")
        elif op.init is not None:
            w.line(f"{op.type.keyword} {op.name} = {_expr(op.init, 0)};")
        else:
            w.line(f"{op.type.keyword} {op.name};")
    elif isinstance(op, OpConst):
        w.line(f"const {op.type.keyword} {op.name} = {_expr(op.expr, 0)};")
    elif isinstance(op, OpExprStmt):
        w.line(f"{_expr(op.expr, 0)};")
    elif isinstance(op, OpReturn):
        if op.expr is None:
            w.line("return;")
        else:
            w.line(f"return {_expr(op.expr, 0)};")
    elif isinstance(op, OpBreak):
        w.line("break;")
    elif isinstance(op, OpContinue):
        w.line("continue;")
    elif isinstance(op, OpEnableEvent):
        w.line(f"enable {op.name};")
    elif isinstance(op, OpDisableEvent):
        w.line(f"disable {op.name};")
    elif isinstance(op, OpIf):
        w.line(f"if ({_expr(op.cond, 0)}) {{")
        w.indent()
        for sub in op.then_block.ops:
            _emit_op(w, sub)
        w.dedent()
        if op.else_block is not None:
            w.line("} else {")
            w.indent()
            for sub in op.else_block.ops:
                _emit_op(w, sub)
            w.dedent()
        w.line("}")
    elif isinstance(op, OpFor):
        init = "; ".join(_inline_op(o) for o in op.init.ops) if op.init.ops else ""
        cond = _expr(op.cond, 0) if op.cond is not None else ""
        # For-iter compact form: scomp does NOT call Optimize on COperatorFor's
        # loop expr (only on its cond — see IOperator.cpp:130).  So
        # `slot = slot + -1` lowers to PushI(1) + Neg + Add2 (3 instrs) instead
        # of PushI(-1) + Add2 (2 instrs).  ASS_DECR/INCR have a dedicated
        # emission path in Expression.cpp:182 that always emits PushI(±1) +
        # Add2 — same bytecode as the constant-folded version.  Rewrite the
        # iter to `++slot` / `--slot` when applicable to match original .bin.
        loop_expr = _compact_for_iter(op.loop) if op.loop is not None else None
        loop = _expr(loop_expr, 0) if loop_expr is not None else ""
        w.line(f"for ({init}; {cond}; {loop}) {{")
        w.indent()
        for sub in op.body.ops:
            _emit_op(w, sub)
        w.dedent()
        w.line("}")
    elif isinstance(op, OpWhile):
        w.line(f"while ({_expr(op.cond, 0)}) {{")
        w.indent()
        for sub in op.body.ops:
            _emit_op(w, sub)
        w.dedent()
        w.line("}")
    elif isinstance(op, OpDoWhile):
        w.line("do {")
        w.indent()
        for sub in op.body.ops:
            _emit_op(w, sub)
        w.dedent()
        w.line(f"}} while ({_expr(op.cond, 0)});")
    else:
        raise NotImplementedError(f"emit: unhandled op {type(op).__name__}")


def _inline_op(op) -> str:
    """Render a statement in inline (no-trailing-semicolon, no-newline) form for `for(...)` headers."""
    if isinstance(op, OpVar):
        if op.is_null_init:
            return f"{op.type.keyword} {op.name} = null"
        if op.init is not None:
            return f"{op.type.keyword} {op.name} = {_expr(op.init, 0)}"
        return f"{op.type.keyword} {op.name}"
    if isinstance(op, OpExprStmt):
        return _expr(op.expr, 0)
    raise NotImplementedError(f"_inline_op: {type(op).__name__}")


# ----- expression emit (with precedence parentheses) -------------------------

def _expr(e, parent_prec: int) -> str:
    if isinstance(e, ENBool):
        return "true" if e.value else "false"
    if isinstance(e, ENInt):
        return str(e.value)
    if isinstance(e, ENFloat):
        return _format_float(e.value)
    if isinstance(e, ENString):
        return '"' + _escape_string(e.value) + '"'
    if isinstance(e, ENVector):
        return f"[{_format_float(e.x)}, {_format_float(e.y)}, {_format_float(e.z)}]"
    if isinstance(e, ENId):
        return e.name
    if isinstance(e, ENIdStruct):
        return f"{e.name}.{e.member}"
    if isinstance(e, ENFunc):
        args = ", ".join(_expr(a, 0) for a in e.args)
        if e.obj is None:
            return f"{e.name}({args})"
        return f"{_expr(e.obj, _PREC_PRIMARY)}->{e.name}({args})"
    if isinstance(e, ENFuncSuper):
        return f"super.{e.name}({', '.join(_expr(a, 0) for a in e.args)})"
    if isinstance(e, ENFuncExtern):
        return f"@{e.name}({', '.join(_expr(a, 0) for a in e.args)})"
    if isinstance(e, ENFuncGlobal):
        return f"global.{e.name}({', '.join(_expr(a, 0) for a in e.args)})"
    if isinstance(e, ENTask):
        return f"{e.name}{{{', '.join(_expr(a, 0) for a in e.args)}}}"
    if isinstance(e, ENOp1):
        return _render_op1(e, parent_prec)
    if isinstance(e, ENOp2):
        return _render_op2(e, parent_prec)
    if isinstance(e, ENOp3):
        return _render_op3(e, parent_prec)
    if isinstance(e, ENTypeC):
        return f"({e.target.keyword}){_expr(e.node, _PREC_UNARY)}"
    if isinstance(e, ENAssign):
        return _render_assign(e)
    if isinstance(e, ENAssignStruct):
        return _render_assign_struct(e)
    raise NotImplementedError(f"_expr: unhandled {type(e).__name__}")


def _render_op1(e: ENOp1, parent_prec: int) -> str:
    if e.op == Op1Type.MINUS:
        return _maybe_paren(f"-{_expr(e.node, _PREC_UNARY)}", _PREC_UNARY, parent_prec)
    if e.op == Op1Type.NOT:
        return _maybe_paren(f"!{_expr(e.node, _PREC_UNARY)}", _PREC_UNARY, parent_prec)
    if e.op == Op1Type.SQRT:
        return f"sqrt({_expr(e.node, 0)})"
    if e.op == Op1Type.SIN:
        return f"sin({_expr(e.node, 0)})"
    if e.op == Op1Type.COS:
        return f"cos({_expr(e.node, 0)})"
    if e.op == Op1Type.ASIN:
        return f"asin({_expr(e.node, 0)})"
    if e.op == Op1Type.NULL:
        return _maybe_paren(f"{_expr(e.node, 9)} == null", 9, parent_prec)
    if e.op == Op1Type.NOTNULL:
        return _maybe_paren(f"{_expr(e.node, 9)} != null", 9, parent_prec)
    if e.op == Op1Type.CSTRING:
        return f"(cstring){_expr(e.node, _PREC_UNARY)}"
    raise ValueError(f"unknown Op1Type {e.op}")


def _render_op2(e: ENOp2, parent_prec: int) -> str:
    if e.op == Op2Type.POW:
        return f"pow({_expr(e.left, 0)}, {_expr(e.right, 0)})"
    if e.op == Op2Type.COMMA:
        # comma binds loosest; almost always needs parens unless we're at statement root
        text = f"{_expr(e.left, 1)}, {_expr(e.right, 1)}"
        return _maybe_paren(text, 1, parent_prec)
    prec = _OP2_PREC[e.op]
    sym = _OP2_SYM[e.op]
    # All non-comma OP2 are left-associative in parser.y.
    text = f"{_expr(e.left, prec)} {sym} {_expr(e.right, prec + 1)}"
    return _maybe_paren(text, prec, parent_prec)


def _render_op3(e: ENOp3, parent_prec: int) -> str:
    if e.op == Op3Type.IF:
        # Ternary at LEMON precedence QMARK = right-assoc, between comma and ||.
        text = f"{_expr(e.a, 3)} ? {_expr(e.b, 0)} : {_expr(e.c, 3)}"
        return _maybe_paren(text, 3, parent_prec)
    if e.op == Op3Type.FUNC_EXIST:
        return f"{_expr(e.a, _PREC_PRIMARY)}->FuncExist({_expr(e.b, 0)}, {_expr(e.c, 0)})"
    raise ValueError(f"unknown Op3Type {e.op}")


def _compact_for_iter(e):
    """Rewrite for-loop iter `slot = slot + 1` / `slot = slot + -1` into
    `++slot` / `--slot` — see comment at OpFor emission for the why."""
    if not isinstance(e, ENAssign) or e.op != AssignType.NONE or e.expr is None:
        return e
    rhs = e.expr
    if not isinstance(rhs, ENOp2) or rhs.op != Op2Type.PLUS:
        return e
    if not isinstance(rhs.left, ENId) or rhs.left.name != e.name:
        return e
    if not isinstance(rhs.right, ENInt):
        return e
    if rhs.right.value == 1:
        return ENAssign(op=AssignType.INCRP, name=e.name, expr=None)
    if rhs.right.value == -1:
        return ENAssign(op=AssignType.DECRP, name=e.name, expr=None)
    return e


def _render_assign(e: ENAssign) -> str:
    if e.op == AssignType.INCR:
        return f"++{e.name}"
    if e.op == AssignType.DECR:
        return f"--{e.name}"
    if e.op == AssignType.INCRP:
        return f"{e.name}++"
    if e.op == AssignType.DECRP:
        return f"{e.name}--"
    if e.op == AssignType.NULL:
        return f"{e.name} = null"
    sym = _ASSIGN_SYM[e.op]
    return f"{e.name} {sym} {_expr(e.expr, 0)}"


def _render_assign_struct(e: ENAssignStruct) -> str:
    if e.op == AssignType.INCR:
        return f"++{e.name}.{e.member}"
    if e.op == AssignType.DECR:
        return f"--{e.name}.{e.member}"
    if e.op == AssignType.INCRP:
        return f"{e.name}.{e.member}++"
    if e.op == AssignType.DECRP:
        return f"{e.name}.{e.member}--"
    if e.op == AssignType.NULL:
        return f"{e.name}.{e.member} = null"
    sym = _ASSIGN_SYM[e.op]
    return f"{e.name}.{e.member} {sym} {_expr(e.expr, 0)}"


# ----- helpers ---------------------------------------------------------------

def _maybe_paren(text: str, my_prec: int, parent_prec: int) -> str:
    return f"({text})" if my_prec < parent_prec else text


def _format_float(f: float) -> str:
    # scomp's lexer accepts standard float literals; scomp parses them via strtod.
    # Use Python's repr (round-trippable) but ensure a decimal point is present.
    s = repr(f)
    if "." not in s and "e" not in s and "n" not in s and "i" not in s:
        s += ".0"
    return s


def _escape_string(s: str) -> str:
    """Escape per scomp lexer rules (Program.cpp:551-590).

    Accepted escapes:  \\  \"  \'  \t  \n      (no \r — \r is silently consumed in source)
    The scomp lexer rejects raw control characters; we escape only the supported set.
    Other characters pass through as-is (UTF-8 -> stored as UTF-16LE in the data pool).
    """
    out = []
    for ch in s:
        if ch == "\\":
            out.append("\\\\")
        elif ch == '"':
            out.append('\\"')
        elif ch == "\t":
            out.append("\\t")
        elif ch == "\n":
            out.append("\\n")
        elif ord(ch) < 0x20:
            # scomp's lexer would reject this; we keep the round-trip honest by raising.
            raise ValueError(
                f"string contains unencodable control byte 0x{ord(ch):02x}; "
                f"scomp lexer would reject this literal"
            )
        else:
            out.append(ch)
    return "".join(out)
