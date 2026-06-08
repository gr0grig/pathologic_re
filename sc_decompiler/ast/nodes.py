"""SC-AST node classes, mirroring the scomp 2005 CENode / COperator hierarchy.

The byte-identity strategy relies on this AST being structurally equivalent to what
the LEMON parser in scomp would produce from the emitted .sc text. Each node here
maps to a specific grammar rule in SRC/PlagueCity/tools/sbuild/parser.y.
"""

from __future__ import annotations

from dataclasses import dataclass, field
from typing import List, Optional, Tuple

from .types import VarType, Op1Type, Op2Type, Op3Type, AssignType


# ---------------- expression nodes (mirror CENode hierarchy) ----------------


@dataclass
class _Expr:
    """Base marker for expression-level nodes."""
    pass


@dataclass
class ENBool(_Expr):
    value: bool


@dataclass
class ENInt(_Expr):
    value: int


@dataclass
class ENFloat(_Expr):
    value: float


@dataclass
class ENString(_Expr):
    # Stored as Python str; emitter renders C-escape syntax inside double quotes.
    value: str


@dataclass
class ENVector(_Expr):
    # Vector literal: [x, y, z]
    x: float
    y: float
    z: float


@dataclass
class ENId(_Expr):
    """Bare identifier reference: local var, task var, or global var."""
    name: str


@dataclass
class ENIdStruct(_Expr):
    """Struct member access: x.y (only legal for Vector .x/.y/.z in scomp)."""
    name: str
    member: str


@dataclass
class ENFunc(_Expr):
    """Function call.

    If `obj` is None     -> bare call    f(args)            (task or global func)
    If `obj` is not None -> method call  obj->f(args)       (INSTR_OBJFUNC)
    """
    name: str
    args: List[_Expr]
    obj: Optional[_Expr] = None


@dataclass
class ENFuncSuper(_Expr):
    """super.name(args)  — within a child task, call parent's method."""
    name: str
    args: List[_Expr]


@dataclass
class ENFuncExtern(_Expr):
    """@name(args)  — extern (native C++) call. Maps to INSTR_FUNC."""
    name: str
    args: List[_Expr]


@dataclass
class ENFuncGlobal(_Expr):
    """global.name(args)  — explicit global script function call."""
    name: str
    args: List[_Expr]


@dataclass
class ENTask(_Expr):
    """name{args}  — spawn task. Maps to INSTR_TASKCALL."""
    name: str
    args: List[_Expr]


@dataclass
class ENOp1(_Expr):
    op: Op1Type
    node: _Expr


@dataclass
class ENOp2(_Expr):
    op: Op2Type
    left: _Expr
    right: _Expr


@dataclass
class ENOp3(_Expr):
    op: Op3Type
    a: _Expr
    b: _Expr
    c: _Expr


@dataclass
class ENTypeC(_Expr):
    """Explicit type cast: (T)expr."""
    target: VarType
    node: _Expr


@dataclass
class ENAssign(_Expr):
    """Bare-identifier assignment / compound-assign / pre-/post-increment.

    For ASS_INCR/DECR/INCRP/DECRP/NULL, `expr` is None.
    """
    op: AssignType
    name: str
    expr: Optional[_Expr]


@dataclass
class ENAssignStruct(_Expr):
    """Struct-member assignment: name.member = expr (vector .x/.y/.z)."""
    op: AssignType
    name: str
    member: str
    expr: Optional[_Expr]


# ---------------- operator (statement-level) nodes ----------------


@dataclass
class _Op:
    """Base marker for statement-level nodes."""
    pass


@dataclass
class OpBlock(_Op):
    """Sequence of operators. Maps to LEMON's `func_ops`/`op_block`."""
    ops: List[_Op] = field(default_factory=list)


@dataclass
class OpVar(_Op):
    """Local var declaration. Maps to COperatorVar.

    The order of OpVar nodes during DFS over the function body controls
    scomp's local-slot allocation (see Program.cpp:863-885 ProcessVariables).
    The optional `init` expression (when not None) is emitted as
    `<type> <name> = <expr>;` and lowered by the parser as a separate
    assignment expression — identical bytecode either way.
    """
    type: VarType
    name: str
    init: Optional[_Expr] = None
    is_null_init: bool = False  # `<type> <name> = null;`


@dataclass
class OpConst(_Op):
    """Local const declaration.  `const <type> <name> = <expr>;`"""
    type: VarType
    name: str
    expr: _Expr


@dataclass
class OpExprStmt(_Op):
    """Expression statement.  `<expr>;`  — covers calls, assignments, etc."""
    expr: _Expr


@dataclass
class OpReturn(_Op):
    expr: Optional[_Expr] = None  # None -> bare `return;`


@dataclass
class OpBreak(_Op):
    pass


@dataclass
class OpContinue(_Op):
    pass


@dataclass
class OpIf(_Op):
    cond: _Expr
    then_block: OpBlock
    else_block: Optional[OpBlock] = None


@dataclass
class OpFor(_Op):
    """for (init; cond; loop) body

    All three header parts are optional: an empty init is represented by an
    OpBlock with no ops; `cond` and `loop` may be None.
    """
    init: OpBlock
    cond: Optional[_Expr]
    loop: Optional[_Expr]
    body: OpBlock


@dataclass
class OpWhile(_Op):
    cond: _Expr
    body: OpBlock


@dataclass
class OpDoWhile(_Op):
    body: OpBlock
    cond: _Expr


@dataclass
class OpEnableEvent(_Op):
    name: str  # event name (matches an `event NAME ID;` top-level decl)


@dataclass
class OpDisableEvent(_Op):
    name: str


# ---------------- top-level (file) nodes ----------------


@dataclass
class EventDecl:
    """`event NAME ID;` at file scope."""
    name: str
    event_id: int


@dataclass
class GlobalVar:
    """File-scope variable.

    kind:
      "var"           -> `var TYPE name;`
      "property"      -> `property TYPE name;`
      "var_property"  -> `var property TYPE name;`
    """
    type: VarType
    name: str
    kind: str = "var"


@dataclass
class Function:
    """Function — global, task method, or task init."""
    name: str
    return_type: VarType
    args: List[Tuple[VarType, str]]  # ordered (type, name)
    body: OpBlock


@dataclass
class Task:
    """Task / maintask. base is the parent task name for inheritance, or None."""
    name: str
    is_main: bool = False
    base: Optional[str] = None
    vars: List[Tuple[VarType, str]] = field(default_factory=list)
    funcs: List[Function] = field(default_factory=list)


@dataclass
class ScFile:
    """One .sc file = top-level objects in scomp's grammar."""
    events: List[EventDecl] = field(default_factory=list)
    globals: List[GlobalVar] = field(default_factory=list)
    consts: List[Tuple[VarType, str, _Expr]] = field(default_factory=list)
    tasks: List[Task] = field(default_factory=list)
    global_funcs: List[Function] = field(default_factory=list)
