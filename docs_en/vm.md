# Pathologic Script Virtual Machine

## Architecture

Stack-based VM embedded in Engine.dll. Scripts are compiled `.bin` files executed
by a bytecode interpreter.

Two versions exist:
- **Alpha** (original Pathologic): opcodes 0x00-0x57
- **HD** (Pathologic Classic HD): opcodes 0x00-0x59 (2 extra: CString/CString2 at 0x4D-0x4E)

```
┌─────────────────────────────────────────┐
│             CScriptManager              │
│  - Loads .bin files via IFileSystem     │
│  - Caches CScript by name              │
│  - Creates CScriptRun instances        │
├─────────────────────────────────────────┤
│    CScript (compiled script)            │
│  - Global variables and types           │
│  - Data pool (strings)                  │
│  - Global function table                │
│  - Tasks with events                    │
│  - Instruction array                    │
├─────────────────────────────────────────┤
│    CScriptRun (execution instance)      │
│  - Variable stack                       │
│  - Call stack (FUNCTION_CALL)           │
│  - Task stack (TASK_CALL)               │
│  - Global variable instances            │
│  - Context (IScriptContext)             │
└─────────────────────────────────────────┘
```

## Execution Model

### Main Loop (`CScriptRun::Run` @ `0x10063100`)

```
counter = 0
while counter < 1,000,000:
    instruction = code[currentOp]
    currentOp++
    if instruction.Execute(data, deltaTime):
        yield  // suspend until next frame
    counter++
```

- **Limit**: 1,000,000 instructions per frame
- **Yield**: instruction returns `true` to pause execution
- **deltaTime**: frame time passed to Execute as `float`

## Variable Types

| Tag | Type | C++ Class | Object Size | Description |
|-----|------|-----------|-------------|-------------|
| 1 | bool | `CVariableBool` | 0x0C | Boolean value |
| 2 | int | `CVariableInt` | 0x0C | 32-bit signed integer |
| 3 | float | `CVariableFloat` | 0x0C | 32-bit IEEE float |
| 4 | string | `CVariableString` | 0x14 | UTF-16LE string |
| 5 | object | `CVariableObject` | 0x14 | Object reference (IScriptClass*) |
| 6 | cvector | `CVariableVector` | 0x14 | 3D vector (x, y, z floats) |

### Type Conversions

- `Bool <-> Int` — automatic
- `Int -> Float` — automatic
- `Float -> Int` — truncation
- `String + *` — string representation concatenation

## Stack

The VM uses a single contiguous stack (`vector<IVariableEx*>`, capacity 512) for all operations.

### Two Addressing Modes

**Normal addressing** (from stack top):
```c
IVariableEx* var = stack.finish[-varRef];
// varRef=1 -> top, varRef=2 -> second from top, etc.
```

**Task addressing** (from task base):
```c
u32 base = tasks.back().stackPtr;
IVariableEx* var = stack.start[base + varRef];
// varRef=0 -> first task var, varRef=1 -> second, etc.
```

### Stack Visualization

```
stack.start                                    stack.finish
     │                                              │
     ▼                                              ▼
┌────┬────┬────┬────┬────┬────┬────┬────┬────┬────┐
│ t0 │ t1 │ t2 │ s0 │ s1 │ s2 │ s3 │ s4 │ s5 │ s6 │
└────┴────┴────┴────┴────┴────┴────┴────┴────┴────┘
     ▲                                         ▲
     │                                         │
  stackPtr=0                            finish[-1] = s6
  (task base)                           finish[-2] = s5
  task varRef 0 -> t0                   finish[-3] = s4
  task varRef 1 -> t1                   ...
```

### PushStack (`0x100632b0`)

```c
void PushStack(u32 varCount, u8* varTypes, u32 offset);
```

Inserts `varCount` new variables at `stack_size - offset`:
- `offset = 0` — append to end (PushV, SendEvent)
- `offset > 0` — insert before last `offset` elements (TaskCall)

### PopStack (`0x10063320`)

```c
void PopStack(u32 popSize, u32 offset);
```

Removes `popSize` elements starting at `stack_size - offset - popSize`:
- `offset = 0` — remove from end (Pop, JumpB, Return, arithmetic)
- `offset > 0` — remove from middle, tail shifts down (TaskReturn)

## taskVar Bitfield

**Important**: The `taskVar` byte in arithmetic instructions is NOT a simple 0/1 flag.
It is a bitfield encoding the addressing mode of each operand AND the pop count.

**Binary "in-place" ops** (Add..GE, Pow):
```
Bit 7 (0x80): var1 = task addressing
Bit 6 (0x40): var2 = task addressing
Bits 5-0 (0x3F): popCount
```
Semantics: `result = var1.Op(var2)` → `PopStack(popCount)` → `Push(result)`

**Binary output ops** (Add2..GE2, Pow2):
```
Bit 7 (0x80): var1 = task addressing
Bit 6 (0x40): var2 = task addressing
Bit 5 (0x20): varOut = task addressing
Bits 4-0 (0x1F): popCount
```
Semantics: `var1.Op(varOut, var2)` → `PopStack(popCount)`

**Unary "in-place" ops** (NullEq..ASin):
```
Bit 7 (0x80): var = task addressing
Bits 6-0 (0x7F): popCount
```
Semantics: `result = var.Op()` → `PopStack(popCount)` → `Push(result)`

**Unary output ops** (NullEq2..ASin2):
```
Bit 7 (0x80): var = task addressing
Bit 6 (0x40): varOut = task addressing
Bits 5-0 (0x3F): popCount
```
Semantics: `var.Op(varOut)` → `PopStack(popCount)`

**Func/ObjFunc args**: Each argument has a separate `isTask` byte — simple 0/1 flag.

## Control Flow

### JumpB (Conditional Branch) — `0x10068010`

```
1. var = stack.finish[-varRef]
2. var.Get(&bResult)          // reads bool value
3. if (bResult == bVal) goto target; else currentOp++
4. PopStack(popCount, 0)      // pop AFTER branch decision
```

Pop always executes regardless of branch outcome.

### Call/Return — Subroutine Calls

**Call** (`0x1006baf0`):
1. Save FUNCTION_CALL: `{returnOp, extraPop=0, savedObject}`
2. Jump to target

**Return** (`0x1006bb60`):
1. `PopStack(popSize + fc.extraPop, 0)`
2. Restore IP and object from FUNCTION_CALL

Stack is shared — callee accesses caller's variables via offsets beyond its own locals.

```c
struct FUNCTION_CALL {          // 12 bytes
    u32        returnOp;        // return address
    u32        extraPop;        // extra pop on return (used by SendEvent)
    IGeneric*  savedObject;
};
```

## Task System

### TaskCall (`0x1006bbd0`)

```
Before: [...caller_vars...][param_0]...[param_N-1]

1. Create TASK_CALL: taskID, stackPtr = stack_size - parmCount
2. PushStack(task.varCount, task.varTypes, task.parmCount)
   → inserts task vars BEFORE parameters

After: [...caller_vars...][task_var_0]...[task_var_M-1][param_0]...[param_N-1]
                           ^                           ^
                           stackPtr                    caller's params
```

### TaskReturn (`0x1006bd40`)

```
1. PopStack(task.varCount, task.parmCount)
   → removes task vars, KEEPS caller's parameters
2. Pop TASK_CALL
```

```c
struct TASK_CALL {                      // 32 bytes
    u32                  taskID;
    u32                  stackPtr;      // stack base for task vars
    vector<FUNCTION_CALL> calls;        // call stack within task
    map<u32, u32>        disabledEvents;
};
```

## Event System

### SendEvent (`0x10063380`)

1. Check if eventID is disabled → skip
2. Find EVENT in current task, then in global events
3. `PushStack(varCount, varTypes, 0)` — create event vars on top
4. Fill event vars from external values
5. Push FUNCTION_CALL with `extraPop = varCount`
6. Jump to handler, call `CScriptRun::Run(0.0)` immediately

On Return from handler, `extraPop` automatically cleans up event variables.

### EventEnable/EventDisable

Toggle entries in `TASK_CALL::disabledEvents` for the current task.

## Native Function Dispatch

### Func (`0x1006be70`)

1. Resolve function via `IScriptContext::GetFunction(name, paramCount)` (cached)
2. Collect arguments from stack (respecting isTask flags)
3. `pFunc->Execute(&pInstance, args, argCount, &result)`
4. If `pInstance != NULL` → async (latent): store instance, yield each frame until done

### ObjFunc (`0x1006c2d0`)

1. Get object: `stack.finish[-varObj].GetObject()`
2. Get method name from DataPool (ASCII)
3. `obj->ExecuteFunction(context, name, args, argCount, &result)`

### TObjFunc

Same as ObjFunc but object via task addressing: `stack.start[varObj + task.stackPtr]`

### Context Chain (Game.exe)

```
CActorScriptContext::m_ContextTable     (11 entries)
  └─> CCPPlayer::CScriptContext         (32 entries)
        └─> CStdScriptContext            (141 entries)
```

Lookup key: `(functionName, paramCount)`.

## Key Engine.dll Addresses

| Function | Address | Description |
|----------|---------|-------------|
| `CScriptManager::CScriptManager` | `0x1002f150` | Script manager constructor |
| `CScriptManager::RunScript` | `0x1002f5e0` | Load and run script |
| `CScript::CScript` | `0x100661e0` | Parse .bin format |
| `CScript::CreateInstruction` | `0x10065030` | Instruction factory |
| `CScriptRun::CScriptRun` | `0x100626c0` | VM constructor |
| `CScriptRun::Run` | `0x10063100` | Main execution loop |
| `Data::PushStack` | `0x100632b0` | Push variables onto stack |
| `Data::PopStack` | `0x10063320` | Pop variables from stack |
| `CScriptRun::SendEvent` | `0x10063380` | Event dispatch |
| `CScriptRun::CreateScriptVariable` | `0x100624f0` | Variable factory |
| `CInstructionJumpB::Execute` | `0x10068010` | Conditional branch |
| `CInstructionCall::Execute` | `0x1006baf0` | Subroutine call |
| `CInstructionReturn::Execute` | `0x1006bb60` | Return |
| `CInstructionTaskCall::Execute` | `0x1006bbd0` | Task call |
| `CInstructionTaskReturn::Execute` | `0x1006bd40` | Task return |
| `CInstructionFunc::Execute` | `0x1006be70` | Native function call |
| `CInstructionObjFunc::Execute` | `0x1006c2d0` | Object method call |
