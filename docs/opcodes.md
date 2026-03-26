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
| 0x00 | Mov | dst:u32, src:u32 | Stack[-dst] = Stack[-src] |
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
| 0x17 | PushV | count:u32 | Allocate count stack slots (local vars) |
| 0x18 | PushE | count:u32 | Push event vars |
| 0x19 | PushGE | count:u32 | Push global event vars |
| 0x1A | Pop | count:u32 | Pop count stack slots |
| 0x1B | PopE | count:u32 | Pop event vars |
| 0x1C | PopGE | count:u32 | Pop global event vars |
| 0x1D | SetNull | var:u32 | Stack[-var] = null |
| 0x1E | SetNullT | var:u32 | TaskVar[var] = null |

### Arithmetic (0x1F-0x23) — Pop 2, push result
| Op | Name | Description |
|----|------|-------------|
| 0x1F | Add | a + b |
| 0x20 | Sub | a - b |
| 0x21 | Mult | a * b |
| 0x22 | Div | a / b |
| 0x23 | Mod | a % b |

### Logic / Comparison (0x24-0x2E) — Pop 2, push result
| Op | Name | Description |
|----|------|-------------|
| 0x24 | And | a && b |
| 0x25 | Or | a \|\| b |
| 0x26 | Xor | a ^ b |
| 0x27 | Eq | a == b |
| 0x28 | Neq | a != b |
| 0x29 | LT | a < b |
| 0x2A | GT | a > b |
| 0x2B | LE | a <= b |
| 0x2C | GE | a >= b |
| 0x2D | NullEq | a == null |
| 0x2E | NullNeq | a != null |

### Unary (0x2F-0x30) — Pop 1, push result
| Op | Name | Description |
|----|------|-------------|
| 0x2F | Neg | -a |
| 0x30 | Not | !a |

### In-place Arithmetic (0x31-0x35) — Modify Stack[-dst] with popped operand
| Op | Name | Description |
|----|------|-------------|
| 0x31 | Add2 | Stack[-dst] += popped |
| 0x32 | Sub2 | Stack[-dst] -= popped |
| 0x33 | Mult2 | Stack[-dst] *= popped |
| 0x34 | Div2 | Stack[-dst] /= popped |
| 0x35 | Mod2 | Stack[-dst] %= popped |

### In-place Logic / Comparison (0x36-0x42) — Modify Stack[-dst]
| Op | Name | Description |
|----|------|-------------|
| 0x36 | And2 | &= |
| 0x37 | Or2 | \|= |
| 0x38 | Xor2 | ^= |
| 0x39 | Eq2 | == (in-place) |
| 0x3A | Neq2 | != (in-place) |
| 0x3B | LT2 | < (in-place) |
| 0x3C | GT2 | > (in-place) |
| 0x3D | LE2 | <= (in-place) |
| 0x3E | GE2 | >= (in-place) |
| 0x3F | NullEq2 | == null (in-place) |
| 0x40 | NullNeq2 | != null (in-place) |
| 0x41 | Neg2 | Negate in-place |
| 0x42 | Not2 | Logical not in-place |

### Math Functions (0x43-0x4C) — Unary math, Pop/In-place variants
| Op | Name | Description |
|----|------|-------------|
| 0x43 | Sqrt | sqrt(a) — pop 1, push result |
| 0x44 | Sqrt2 | sqrt in-place |
| 0x45 | Sin | sin(a) |
| 0x46 | Sin2 | sin in-place |
| 0x47 | Cos | cos(a) |
| 0x48 | Cos2 | cos in-place |
| 0x49 | ASin | asin(a) |
| 0x4A | ASin2 | asin in-place |
| 0x4B | Pow | pow(a, b) |
| 0x4C | Pow2 | pow in-place |

### Function Calls & Control (0x4D+) — Version-dependent

**Alpha version** (IS_ALPHA = True):
| Op | Name | Description |
|----|------|-------------|
| 0x4D | Call | Call subroutine |
| 0x4E | Return | Return from subroutine |
| 0x4F | TaskCall | Call task function |
| 0x50 | TaskReturn | Return from task |
| 0x51 | Func | Call native function by name |
| 0x52 | ObjFunc | Call object method |
| 0x53 | TObjFunc | Call object method (task variant) |
| 0x54 | EventEnable | Enable event handler |
| 0x55 | EventDisable | Disable event handler |
| 0x56 | FuncExist | Check if function exists |
| 0x57 | FuncExist2 | Check if function exists (variant) |

**HD version** (IS_ALPHA = False) — 2 extra opcodes at 0x4D-0x4E:
| Op | Name | Description |
|----|------|-------------|
| 0x4D | CString | Convert to char string |
| 0x4E | CString2 | Convert to char string (variant) |
| 0x4F | (new_2) | Unknown HD-only instruction |
| 0x50 | Return | Return from subroutine |
| 0x51 | TaskCall | Call task function |
| 0x52 | TaskReturn | Return from task |
| 0x53 | Func | Call native function by name |
| 0x54 | ObjFunc | Call object method |
| 0x55 | TObjFunc | Call object method (task variant) |
| 0x56 | EventEnable | Enable event handler |
| 0x57 | EventDisable | Disable event handler |
| 0x58 | FuncExist | Check if function exists |
| 0x59 | FuncExist2 | Check if function exists (variant) |

## Notes

- Opcodes 0x00-0x4C are identical between alpha and HD
- HD inserts CString/CString2 at 0x4D-0x4E, shifting Call+ by +2
- The assembler handles this via `is_alpha` flag
- Stack addressing: negative offsets (`Stack[-N]`) are relative to current stack top
- Task vars: `Stack[I + Tasks[-1].StackPointer]` — separate task variable area
- All string references use byte offsets into the DataPool
