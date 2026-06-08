# Pathologic Script VM Opcodes

## Instruction Format

Each instruction begins with a 1-byte opcode. Operands follow as uint32/int32/uint8/float
depending on the opcode. Instructions are variable-length (1-17 bytes).

## Type Tags

- 1 = bool
- 2 = int
- 3 = float
- 4 = string
- 5 = object
- 6 = cvector (3 floats)

## Opcode Table

### Move / Load Constants (0x00-0x0D)
| Op | Name | Operands | Description |
|----|------|----------|-------------|
| 0x00 | Mov | src:u32, dst:u32 ⚠️ | Stack[-dst] = Stack[-src] |
| 0x01 | MovB | dst:u32, val:u8 | Stack[-dst] = (bool)val |
| 0x02 | MovI | dst:u32, val:i32 | Stack[-dst] = (int)val |
| 0x03 | MovF | dst:u32, val:f32 | Stack[-dst] = (float)val |
| 0x04 | MovS | dst:u32, pool_off:u32 | Stack[-dst] = string from pool |
| 0x05 | MovV | dst:u32, x:f32, y:f32, z:f32 | Stack[-dst] = CVector(x,y,z) |
| 0x06 | MovT | src:u32, dst:u32 | Stack[-dst] = TaskVar[src] |
| 0x07 | TMov | src:u32, dst:u32 | TaskVar[dst] = Stack[-src] |
| 0x08 | TMovB | dst:u32, val:u8 | TaskVar[dst] = (bool)val |
| 0x09 | TMovI | dst:u32, val:i32 | TaskVar[dst] = (int)val |
| 0x0A | TMovF | dst:u32, val:f32 | TaskVar[dst] = (float)val |
| 0x0B | TMovS | dst:u32, pool_off:u32 | TaskVar[dst] = string from pool |
| 0x0C | TMovV | dst:u32, x:f32, y:f32, z:f32 | TaskVar[dst] = CVector(x,y,z) |
| 0x0D | TMovT | src:u32, dst:u32 | TaskVar[dst] = TaskVar[src] |

⚠️ **Mov (0x00) quirk:** Per the canonical 2005 source `InstructionMov.cpp`
(`reader >> m_ulVarIn >> m_ulVarOut`) the first u32 in bytecode is `src`,
second is `dst` — same order as `MovT/TMov/TMovT`. Note that `PathologicScript.py`
disasm assigns these fields **inverted** (`self.VarOut = 1st u32, self.VarIn =
2nd u32`) for `Mov` only, so the `.asm` text `Stack[-X] = Stack[-Y]` displays
X = src, Y = dst — the visual LHS/RHS is opposite of normal assignment
semantics. This is a known tool quirk and does not change the bytecode.

### Control Flow (0x0E-0x0F)
| Op | Name | Operands | Description |
|----|------|----------|-------------|
| 0x0E | Jump | target:u32 | Unconditional jump to bytecode offset |
| 0x0F | JumpB | var:u32, target:u32, cond:u8, pop:u16 | Conditional branch + pop |

### Stack Operations (0x10-0x1E)
| Op | Name | Operands | Description |
|----|------|----------|-------------|
| 0x10 | Push | var:u32 | Push Stack[-var] onto stack |
| 0x11 | PushB | val:u8 | Push bool literal |
| 0x12 | PushI | val:i32 | Push int literal |
| 0x13 | PushF | val:f32 | Push float literal |
| 0x14 | PushS | pool_off:u32 | Push string from pool |
| 0x15 | PushT | var:u32 | Push TaskVar[var] |
| 0x16 | PushVec | x:f32, y:f32, z:f32 | Push CVector literal |
| 0x17 | PushV | count:u32, varTypes:u8[count] | Allocate count stack slots (local vars), one per type |
| 0x18 | PushE | varIn:u32, isTask:u8, lIndex:i32 | Push event-var: clone of `var[lIndex]` |
| 0x19 | PushGE | varIn:u32 | Push global event-var: clone of `globalVars[varIn]` |
| 0x1A | Pop | popSize:u32 | Pop popSize stack slots |
| 0x1B | PopE | varOut:u32, lIndex:i32, flags:u8 | Pop into event-var: `var[lIndex] = stack.top()`; pop iff `(flags & 2) == 0`. Bit 0 of flags selects task addressing for varOut |
| 0x1C | PopGE | varOut:u32, flags:u8 | Pop into global event-var: `globalVars[varOut] = stack.top()`; pop iff `(flags & 1) == 0` |
| 0x1D | SetNull | var:u32 | Stack[-var] = null |
| 0x1E | SetNullT | var:u32 | TaskVar[var] = null |

### Binary arithmetic / logic (0x1F-0x2C) — push result
All entries take **`var1:u32, var2:u32, taskVar:u8`**. taskVar bits:
`0x80` → var1 is task-addressed, `0x40` → var2 is task-addressed,
low 6 bits (`& 0x3F`) → pop count. Result is `dnew CVariableXxx(...)` pushed
on top.

| Op | Name | Description |
|----|------|-------------|
| 0x1F | Add | push (a + b) |
| 0x20 | Sub | push (a - b) |
| 0x21 | Mult | push (a * b) |
| 0x22 | Div | push (a / b) |
| 0x23 | Mod | push (a % b) |
| 0x24 | And | push (a & b) |
| 0x25 | Or | push (a \| b) |
| 0x26 | Xor | push (a ^ b) |
| 0x27 | Eq | push (a == b) |
| 0x28 | Neq | push (a != b) |
| 0x29 | LT | push (a < b) |
| 0x2A | GT | push (a > b) |
| 0x2B | LE | push (a <= b) |
| 0x2C | GE | push (a >= b) |

### Unary arithmetic / logic (0x2D-0x30) — push result
All entries take **`var:u32, taskVar:u8`**. taskVar bits: `0x80` → task
addressing for var, low 7 bits (`& 0x7F`) → pop count.

| Op | Name | Description |
|----|------|-------------|
| 0x2D | NullEq | push (a == null) |
| 0x2E | NullNeq | push (a != null) |
| 0x2F | Neg | push (-a) |
| 0x30 | Not | push (!a) |

### "2"-suffix variants — explicit destination slot

The `*2` suffix is a VM-wide naming convention. The non-suffix variant
allocates a fresh `CVariable*` for the result and pushes it; the `*2`
variant takes an **extra `varOut` operand** and writes the result into an
existing slot via the destination's `Set` virtual (no allocation, no push).
Each extra var consumes one addressing-mode bit (`0x80, 0x40, 0x20, …`) in
the trailing flag byte, so the pop-count mask shrinks by one bit:

| Group | Operands | taskVar bit map | pop mask |
|-------|----------|-----------------|----------|
| Binary push (Add..GE, Pow) | var1, var2, taskVar | 0x80 var1, 0x40 var2 | `& 0x3F` |
| Binary "2" (Add2..GE2, Pow2) | var1, var2, varOut, taskVar | 0x80 var1, 0x40 var2, 0x20 varOut | `& 0x1F` |
| Unary push (NullEq..Not, Sqrt..ASin, CString) | var, taskVar | 0x80 var | `& 0x7F` |
| Unary "2" (NullEq2..Not2, Sqrt2..ASin2, CString2) | var, varOut, taskVar | 0x80 var, 0x40 varOut | `& 0x3F` |
| FuncExist (3 args) | var1, var2, var3, taskVar | 0x80 var1, 0x40 var2, 0x20 var3 | `& 0x1F` |
| FuncExist2 (4 args) | var1, var2, var3, varOut, taskVar | 0x80 var1, 0x40 var2, 0x20 var3, 0x10 varOut | `& 0x0F` |

### Binary "2" — explicit dst slot (0x31-0x3E)
All entries take **`var1:u32, var2:u32, varOut:u32, taskVar:u8`**. taskVar bits:
`0x80` → var1 task, `0x40` → var2 task, `0x20` → varOut task, low 5 bits
(`& 0x1F`) → pop count. Result is written directly into `varOut` via the
destination's `Set` virtual; no allocation, no push.

| Op | Name | Description |
|----|------|-------------|
| 0x31 | Add2 | dst = a + b |
| 0x32 | Sub2 | dst = a - b |
| 0x33 | Mult2 | dst = a * b |
| 0x34 | Div2 | dst = a / b |
| 0x35 | Mod2 | dst = a % b |
| 0x36 | And2 | dst = a & b |
| 0x37 | Or2 | dst = a \| b |
| 0x38 | Xor2 | dst = a ^ b |
| 0x39 | Eq2 | dst = (a == b) |
| 0x3A | Neq2 | dst = (a != b) |
| 0x3B | LT2 | dst = (a < b) |
| 0x3C | GT2 | dst = (a > b) |
| 0x3D | LE2 | dst = (a <= b) |
| 0x3E | GE2 | dst = (a >= b) |

### Unary "2" — explicit dst slot (0x3F-0x42)
All entries take **`var:u32, varOut:u32, taskVar:u8`**. taskVar bits:
`0x80` → var task, `0x40` → varOut task, low 6 bits (`& 0x3F`) → pop count.

| Op | Name | Description |
|----|------|-------------|
| 0x3F | NullEq2 | dst = (a == null) |
| 0x40 | NullNeq2 | dst = (a != null) |
| 0x41 | Neg2 | dst = -a |
| 0x42 | Not2 | dst = !a |

### Math Functions (0x43-0x4C) — paired push / explicit-dst variants
Unary push (Sqrt/Sin/Cos/ASin) take `var:u32, taskVar:u8` (same masks as unary
push group). Unary "2" (Sqrt2/Sin2/Cos2/ASin2) take `var:u32, varOut:u32,
taskVar:u8` (same masks as unary "2" group). Pow is binary push
(`var1:u32, var2:u32, taskVar:u8`); Pow2 is binary "2"
(`var1:u32, var2:u32, varOut:u32, taskVar:u8`).

| Op | Name | Description |
|----|------|-------------|
| 0x43 | Sqrt | push sqrt(a) |
| 0x44 | Sqrt2 | dst = sqrt(a) |
| 0x45 | Sin | push sin(a) |
| 0x46 | Sin2 | dst = sin(a) |
| 0x47 | Cos | push cos(a) |
| 0x48 | Cos2 | dst = cos(a) |
| 0x49 | ASin | push asin(a) |
| 0x4A | ASin2 | dst = asin(a) |
| 0x4B | Pow | push pow(a, b) |
| 0x4C | Pow2 | dst = pow(a, b) |

### Function Calls & Control (0x4D+) — Version-dependent

**Alpha version** (IS_ALPHA = True):
| Op | Name | Operands | Description |
|----|------|----------|-------------|
| 0x4D | Call | target:u32 | Push return frame (PC+1), jump to `target` |
| 0x4E | Return | popSize:u32 | Pop `popSize + frame.extraPop` slots, restore PC from top frame |
| 0x4F | TaskCall | taskID:u32 | Push new task frame for task `taskID`, allocate its var scope |
| 0x50 | TaskReturn | — | Pop task scope and the task frame; back to caller |
| 0x51 | Func | funcIndex:u32, [varRef:u32, isTask:u8] × N | Call native global by **index** into globals table (N = `globals[funcIndex].VarCount`). Name is held in the globals table, not in bytecode. |
| 0x52 | ObjFunc | varObj:u32, nameOffset:u32, parmCount:u32, [varRef:u32, isTask:u8] × parmCount | Call method `pool[nameOffset]` (ASCII) on object at `Stack[-varObj]` |
| 0x53 | TObjFunc | varObj:u32, nameOffset:u32, parmCount:u32, [varRef:u32, isTask:u8] × parmCount | Same as ObjFunc but `varObj` is task-addressed |
| 0x54 | EventEnable | eventID:i32 | Decrement disable-counter for event; handler runs only when counter==0 |
| 0x55 | EventDisable | eventID:i32 | Increment disable-counter for event; calls balance EventEnable |
| 0x56 | FuncExist | var1:u32, var2:u32, var3:u32, taskVar:u8 | Push bool: does `var1`(obj) have method `var2`(name) with arg count `var3`(int)? |
| 0x57 | FuncExist2 | var1:u32, var2:u32, var3:u32, varOut:u32, taskVar:u8 | Same as FuncExist but writes bool to `varOut` slot |

**HD version** (IS_ALPHA = False) — 2 extra opcodes at 0x4D-0x4E, everything else shifted by +2:
| Op | Name | Operands | Description |
|----|------|----------|-------------|
| 0x4D | CString | varRef:u32, taskVar:u8 | Build 1-char wide string from int codepoint; push result |
| 0x4E | CString2 | varRef:u32, varOut:u32, taskVar:u8 | Build 1-char wide string from int codepoint; write to `varOut` slot |
| 0x4F | Call | target:u32 | Same as alpha 0x4D |
| 0x50 | Return | popSize:u32 | Same as alpha 0x4E |
| 0x51 | TaskCall | taskID:u32 | Same as alpha 0x4F |
| 0x52 | TaskReturn | — | Same as alpha 0x50 |
| 0x53 | Func | funcIndex:u32, [varRef:u32, isTask:u8] × N | Same as alpha 0x51 |
| 0x54 | ObjFunc | varObj:u32, nameOffset:u32, parmCount:u32, [varRef:u32, isTask:u8] × parmCount | Same as alpha 0x52 |
| 0x55 | TObjFunc | (same as ObjFunc) | Same as alpha 0x53 |
| 0x56 | EventEnable | eventID:i32 | Same as alpha 0x54 |
| 0x57 | EventDisable | eventID:i32 | Same as alpha 0x55 |
| 0x58 | FuncExist | var1:u32, var2:u32, var3:u32, taskVar:u8 | Same as alpha 0x56 |
| 0x59 | FuncExist2 | var1:u32, var2:u32, var3:u32, varOut:u32, taskVar:u8 | Same as alpha 0x57 |

## CString / CString2 (0x4D / 0x4E, HD layout)

Implementing classes: `CInstructionCString`, `CInstructionCString2`. Operands:

```
CString  : varRef:u32, taskVar:u8                  (object size = 0xC bytes)
CString2 : varRef:u32, varOut:u32, taskVar:u8      (object size = 0x10 bytes)
```

Semantics — verified against canonical 2005 source (`SRC/PlagueCity/Game/Script/
InstructionCString.cpp` / `InstructionCString2.cpp`) and IDA `Exec` at
`0x101397F0` / `0x10139990` in HD `Engine.dll`:

1. Resolve source via `taskVar` high bit (`0x80` → task addressing, otherwise
   stack addressing) — same convention as the unary group.
2. The source variable's `GetVariableType()` **must equal `VART_INT`**;
   otherwise the VM throws `CScriptRun::Error("Type mismatch when converting
   to char-string")`. CString/CString2 take an **integer**, not a string.
3. The instruction builds an empty `CEStringW` and appends the int value cast
   to `wchar_t`: `str += (wchar_t)pInt->m_lVal`. The result is a **1-character
   wide string** whose code point equals the int — semantically `chr(int)`.
4. `CString` allocates a new `CVariableString(str)` and pushes it onto the
   stack, then pops `taskVar & 0x7F` slots.
5. `CString2` resolves `varOut` (bit `0x40` selects task addressing for it)
   and writes the wide-string result into that slot via `pOut->Set(str)`;
   then pops `taskVar & 0x3F` slots. No allocation, no push.

Despite the class name, the output is a normal wide-string `CVariableString`
(UTF-16LE internally) — there is no ASCII / `CSafeString` conversion. The
opcode is the bytecode equivalent of `Chr(int)` / `String.fromCharCode(int)`.

## FuncExist / FuncExist2 (0x56/0x58, 0x57/0x59)

Implementing classes: `CInstructionFuncExist`, `CInstructionFuncExist2`. Operands:

```
FuncExist  : obj:u32, name:u32, parmCount:u32,           flags:u8   (object size = 0x14)
FuncExist2 : obj:u32, name:u32, parmCount:u32, dst:u32,  flags:u8   (object size = 0x18)
```

Semantics — verified from `Exec` at `0x1013B430` (FuncExist) and `0x1013B6B0`
(FuncExist2):

1. Resolves all operands via `flags`. For FuncExist the addressing-mode bits
   are `0x80/0x40/0x20` (obj/name/parmCount); for FuncExist2 the layout extends
   to `0x80/0x40/0x20/0x10` (obj/name/parmCount/dst). The low bits are the
   pop count: `flags & 0x1F` for FuncExist, `flags & 0x0F` for FuncExist2.
2. `obj.vtable[12]` extracts the raw game-object pointer.
3. `name.vtable[14]` materializes the method name into a `CSafeString`.
4. `parmCount.vtable[16]` reads the int.
5. `obj.vtable[3](name, parmCount)` → bool — the actual existence check.
6. FuncExist allocates a fresh `CVariableBool(result)` and pushes it.
7. FuncExist2 writes the bool into the existing `dst` slot via
   `dst.vtable[10](result)`. No allocation, no push.
8. On any extraction failure both throw `CScriptRun::Error("Type mismatch in 'FuncExist'")`.

## Notes

- The HD opcode table 0x00-0x59 matches the canonical 2005 source
  (`SRC/PlagueCity/Game/Script/IInstruction.h`); the "alpha" build is an
  earlier variant whose dispatch lacks `CString/CString2` at 0x4D-0x4E.
- Opcodes 0x00-0x4C are identical between alpha and HD.
- Calling `is_alpha=False` in the assembler activates the +2 shift for
  `Call` and everything past it.
- The HD dispatch switch has exactly 90 cases (0-89) vs alpha's 88 (0-87) —
  no opcodes other than CString/CString2 differ.
- Stack addressing: negative offsets (`Stack[-N]`) are relative to current stack top.
- Task vars: `Stack[I + Tasks[-1].StackPointer]` — separate task variable area.
- All string references use byte offsets into the DataPool.
