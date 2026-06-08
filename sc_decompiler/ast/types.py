"""Enums mirrored from the scomp 2005 source.

See:
  SRC/PlagueCity/tools/sbuild/variables.h    -> VAR_TYPE
  SRC/PlagueCity/tools/sbuild/Expression.h   -> OP1_TYPE / OP2_TYPE / OP3_TYPE / ASSIGN_TYPE
"""

from __future__ import annotations

from enum import IntEnum


class VarType(IntEnum):
    VOID = 0
    BOOL = 1
    INT = 2
    FLOAT = 3
    STRING = 4
    OBJECT = 5
    VECTOR = 6

    @property
    def keyword(self) -> str:
        return {
            VarType.VOID: "void",
            VarType.BOOL: "bool",
            VarType.INT: "int",
            VarType.FLOAT: "float",
            VarType.STRING: "string",
            VarType.OBJECT: "object",
            VarType.VECTOR: "Vector",
        }[self]


class Op1Type(IntEnum):
    MINUS = 0
    NOT = 1
    SQRT = 2
    SIN = 3
    COS = 4
    ASIN = 5
    NULL = 6        # x == null
    NOTNULL = 7     # x != null
    CSTRING = 8     # cstring(x)


class Op2Type(IntEnum):
    PLUS = 0
    MINUS = 1
    MULT = 2
    DIV = 3
    MOD = 4
    AND = 5         # &&
    OR = 6          # ||
    BAND = 7        # &
    BOR = 8         # |
    BXOR = 9        # ^
    EQ = 10
    NEQ = 11
    LT = 12
    GT = 13
    LE = 14
    GE = 15
    COMMA = 16
    POW = 17        # pow(a, b)


class Op3Type(IntEnum):
    IF = 0          # cond ? a : b
    FUNC_EXIST = 1  # obj->FuncExist(name, args)


class AssignType(IntEnum):
    NONE = 0        # =
    PLUS = 1        # +=
    MINUS = 2       # -=
    MULT = 3        # *=
    DIV = 4         # /=
    MOD = 5         # %=
    BAND = 6        # &=
    BOR = 7         # |=
    BXOR = 8        # ^=
    INCR = 9        # ++x
    DECR = 10       # --x
    INCRP = 11      # x++
    DECRP = 12      # x--
    NULL = 13       # = null
