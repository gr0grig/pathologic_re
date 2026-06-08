# Pathologic 2005 — Script VM: Tasks and `TaskCall`

How **tasks** work in the Pathologic 2005 script VM — what they are, how
they execute, how they nest, how events dispatch into them, and how the
compiler (`scomp.exe`) lowers the source-level `task` / `maintask`
keywords into bytecode.

All references are to `SRC/PlagueCity/Game/Script/` (engine) and
`SRC/PlagueCity/tools/sbuild/` (compiler).

---

## 1. What a task is

A **task** is the script-side unit of:

1. **A bag of local variables** (the *task vars*) that persist across
   event invocations as long as the task is on the stack.
2. **A set of event handlers** (`OnUse`, `OnHit`, `OnTimer`, …) that the
   engine can dispatch into while this task is the currently active one.
3. **An `init()` function** that runs once when the task is entered.

A task is *not*:

- A thread — only one task is "current" at any moment; nesting is via
  an explicit call stack.
- A function — functions live inside tasks; a task is the lexical
  container.
- A coroutine — there is no language-level suspension other than what
  built-in `@Sleep` / `@Hold` script externals do via the host.

The closest analogy is a **state-machine state** with its own local
variables and event handlers. Switching tasks switches both the local
storage and which events are eligible for dispatch.

`CScript::TASK` ([Script.h:28-33](SRC/PlagueCity/Game/Script/Script.h#L28-L33)):

```cpp
struct TASK {
    unsigned long m_ulVarCount;                          // # of task vars
    boost::scoped_array<unsigned char> m_pVarTypes;      // their VAR_TYPEs
    unsigned long m_ulParmCount;                         // # leading vars that are init() parameters
    TEvents m_Events;                                    // event handlers, keyed by event ID
};
```

`TEvents` is `map<unsigned long, EVENT>` where each `EVENT` carries the
entry-point code offset (`m_ulOp`) plus the count/types of its
arguments.

---

## 2. Source-level syntax

Tasks are declared with the `task` or `maintask` keyword. The grammar
([parser.y:188-253](SRC/PlagueCity/tools/sbuild/parser.y#L188-L253)):

```
task        NAME                { vars… funcs… }
task        NAME : BASE         { vars… funcs… }
maintask    NAME                { vars… funcs… }
maintask    NAME : BASE         { vars… funcs… }
```

A task body contains, in any order:

- `var TYPE name[, name2…];` — **task variables**, persistent across
  event invocations into this task.
- Regular `void` / typed functions, including event handlers
  (functions whose name matches an `event NAME ID;` declaration in
  scope; see [events_2005.md](events_2005.md)).
- A special function named `init(...)` — see §3.

`task NAME : BASE { … }` *inherits* — at parse time `TaskUnion`
([parser.y:8-29](SRC/PlagueCity/tools/sbuild/parser.y#L8-L29)) prepends
the base task's vars and clones its functions, incrementing
`m_ulLevel` (used by `super.foo()` to disambiguate overrides). Inherited
funcs without overrides in the derived task become directly callable;
overrides shadow them. Inherited vars cannot be redeclared (compile
error).

`maintask` is identical in body but flags the task as the **start
task** (`m_bStart = true`, [parser.y:226](SRC/PlagueCity/tools/sbuild/parser.y#L226))
— exactly one per script. The compiler aborts with
`"Several main tasks found"` or `"No starting task defined"` otherwise
([Program.cpp:691,919](SRC/PlagueCity/tools/sbuild/Program.cpp#L691)).

### Example

```c
// quest_b1_01.sc
maintask TQuest {
    var object m_Whitemask;
    var object m_Birdmask1, m_Birdmask2;
    var object m_Trigger;

    void init(void) {
        @SetTimeEvent(0, 11);
        object scene; @GetMainOutdoorScene(scene);
        m_Whitemask = SpawnStationaryActorForce(scene, "pt_b1q01_whitemask",
                                                "pers_whitemask",
                                                "b1q01_whitemask.xml");
        ...
        for (;;) { @Hold(); }
    }

    void OnGameTime(int id, float fTime) { ... }   // event handler
    void OnTrigger(string name)          { ... }   // event handler

    void Fail(void)    { ... }                     // private helper
    void Cleanup(void) { disable OnTrigger; ... }
}
```

---

## 3. The `init()` function: task entry point

Every task **must** have an `init()` function — it's the function
called when the task is entered.

- For the **maintask**, `init()` must take no parameters and is the
  script's entry point ([Program.cpp:649](SRC/PlagueCity/tools/sbuild/Program.cpp#L649)).
- For **callee tasks** (entered via `TaskCall`), `init()` may take
  parameters. These become the **leading slots of the task's local
  frame** (`m_ulParmCount` of `m_ulVarCount`). The caller pushes
  argument values on the stack before issuing `TaskCall`; the new
  task's `init()` sees them as its first vars.

In bytecode terms, the entry point of a task is stored in the script
header as `m_ulRunOp` (start task only) and otherwise discovered via
the task's compiled `init` function record. The compiler emits
`init`'s code offset as the start of the maintask's first byte of
executable code ([Program.cpp:951-952](SRC/PlagueCity/tools/sbuild/Program.cpp#L951-L952)).

---

## 4. Runtime data structures

Active task state lives in `CScriptRun::Data`
([ScriptRun.h:57-91](SRC/PlagueCity/Game/Script/ScriptRun.h#L57-L91)):

```cpp
class Data {
    ...
    boost::scoped_array< CSerPtr<IVariableEx*, AID_Variable> > m_pGlobalVars;
    TTasks m_Tasks;     // call stack of tasks
    TStack m_Stack;     // single flat variable stack, shared by all tasks
    unsigned long m_ulCurOp;
    CSerPtr<IGeneric*, AID_Serializable> m_pOpData;
};
```

Each entry in `m_Tasks` is a `TASK_CALL`
([ScriptRun.h:47-53](SRC/PlagueCity/Game/Script/ScriptRun.h#L47-L53)):

```cpp
struct TASK_CALL {
    unsigned long m_ulTaskID;       // index into CScript::m_pTasks
    unsigned long m_ulStackPtr;     // base of this task's frame in m_Stack
    TCalls        m_Calls;          // per-task function-call stack
    TDisabledEvents m_DisabledEvents;   // refcounted event-id → disable count
};
```

Three things to note:

- **`m_Stack` is global** — there is one variable stack shared by every
  active task. Each task's local frame starts at its `m_ulStackPtr` and
  extends upward.
- **`m_Calls` is per-task** — function calls within the active task
  push/pop here; you cannot return out of a function across task
  boundaries.
- **`m_DisabledEvents` is per-task** — `disable EventName` / `enable
  EventName` instructions affect only the topmost task (with a refcount
  for nested disable/enable pairs).

### Stack frame layout

For one nested task at the top of `m_Tasks`:

```
m_Stack:  [ ... caller frames ... | arg0 arg1 … argN local0 local1 … ]
                                  ^
                                  m_ulStackPtr of current task
```

The args were pushed by the caller, *before* `TaskCall` ran. `PushStack`
inside `TaskCall` adds the rest of the locals on top of them
([InstructionTaskCall.cpp:25](SRC/PlagueCity/Game/Script/InstructionTaskCall.cpp#L25)):

```cpp
data.PushStack(task.m_ulVarCount, task.m_pVarTypes.get(), task.m_ulParmCount);
```

The `uOffset = m_ulParmCount` argument tells `PushStack` to insert the
new locals **before** the last `m_ulParmCount` existing stack entries
([ScriptRun.cpp:200-207](SRC/PlagueCity/Game/Script/ScriptRun.cpp#L200-L207))
— that's how the args end up below the locals.

---

## 5. Bytecode: TaskCall / TaskReturn

### `TaskCall <task_id>`

Bytecode form: 1 instruction code + 1 `u32` operand (the target task
index). Stack semantics:

1. Caller has previously pushed N argument values, matching the target
   task's `m_ulParmCount`.
2. Read `task = pScript->GetTask(m_ulTaskID)`. Throws
   `"Invalid task ID 'N'"` if out of range.
3. Push a new `TASK_CALL` onto `m_Tasks` with
   `m_ulStackPtr = m_Stack.size() - task.m_ulParmCount` (so the arg
   slots are now the first slots of the new task's frame).
4. Push the rest of the task vars (`m_ulVarCount - m_ulParmCount`
   slots), typed per `task.m_pVarTypes`.
5. Increment `m_ulCurOp` (continue at next instruction — which the
   compiler will arrange to be the body of `init`).

Implementation: [InstructionTaskCall.cpp:13-28](SRC/PlagueCity/Game/Script/InstructionTaskCall.cpp#L13-L28).

### `TaskReturn`

Bytecode form: 1 instruction code, no operands.

1. Asserts `m_Tasks.back().m_Calls.empty()` — i.e. *no pending function
   call frames* in the current task. You can only exit a task from the
   outermost level.
2. Reads back the same task record. Pops `m_ulVarCount` slots, with
   `uOffset = m_ulParmCount` — i.e. removes both the locals *and* the
   parameter slots the caller pushed
   ([InstructionTaskReturn.cpp:18](SRC/PlagueCity/Game/Script/InstructionTaskReturn.cpp#L18)):
   ```cpp
   data.PopStack(task.m_ulVarCount, task.m_ulParmCount);
   ```
   …leaving the parent task's stack as it was before `TaskCall` ran.
   Hold on, that's not quite right — see the note below.
3. Pops the `TASK_CALL` from `m_Tasks`.
4. Increments `m_ulCurOp`.

> **Subtlety — argument cleanup.** `PopStack(N, K)` removes `N` slots
> starting `K` from the top
> ([ScriptRun.cpp:209-218](SRC/PlagueCity/Game/Script/ScriptRun.cpp#L209-L218)).
> With `N = m_ulVarCount`, `K = m_ulParmCount`, the cleanup removes
> exactly the slots between `m_ulStackPtr` and `m_ulStackPtr + (varCount
> - parmCount)` — that is, **only the non-parameter locals**. The
> parameter slots survive — they were pushed by the caller and remain
> visible to it as ordinary stack values. The caller is then
> responsible for popping them (`Pop` or the function epilogue).

### Comparison with the function call mechanism

Tasks and functions use **two different call stacks**:

| | `Call` / `Return` | `TaskCall` / `TaskReturn` |
|---|---|---|
| Storage | `m_Tasks.back().m_Calls` (per-task vector) | `m_Tasks` (global vector) |
| Operand of call | code offset (`m_ulOp`) | task index (`m_ulTaskID`) |
| Local frame? | none — uses caller's stack | yes (`m_ulStackPtr` + own vars) |
| Cross-task? | no — fails with `"Call stack underflow"` if `m_Calls` is empty | yes — it's the cross-task mechanism |
| Event dispatch | irrelevant | each task has its own event handlers |

`Call`: pushes only the resume `m_ulOp` onto `m_Calls`, jumps to the
operand offset ([InstructionCall.cpp:13-25](SRC/PlagueCity/Game/Script/InstructionCall.cpp#L13-L25)).

`Return`: pops `m_ulPopSize` slots, restores `m_ulOp` from
`m_Calls.back()` ([InstructionReturn.cpp:13-25](SRC/PlagueCity/Game/Script/InstructionReturn.cpp#L13-L25)).
The `m_ulStackExtraPop` mechanism here is what handles the cleanup of
event-handler argument slots that the engine pushed when dispatching
into the task — see §7.

---

## 6. Addressing task variables — `TMov*` vs `Mov*`

Every "Mov" family instruction comes in two flavours:

- **`Mov`, `MovB`, `MovI`, `MovF`, `MovS`, `MovV`, `MovT`** — operands are
  offsets **from the top of `m_Stack`**. Example
  ([InstructionMov.cpp:13-21](SRC/PlagueCity/Game/Script/InstructionMov.cpp#L13-L21)):
  ```cpp
  IVariableEx *pOut = *(data.m_Stack.end() - m_ulVarOut);
  ```
  Used for arguments, locals of the *current function call*, etc.
- **`TMov`, `TMovB`, `TMovI`, `TMovF`, `TMovS`, `TMovV`, `TMovT`,
  `SetNullT`** — operands are offsets **from the current task's
  `m_ulStackPtr`**. Example
  ([InstructionTMov.cpp:13-21](SRC/PlagueCity/Game/Script/InstructionTMov.cpp#L13-L21)):
  ```cpp
  IVariableEx *pOut = *(data.m_Stack.begin()
                       + (data.m_Tasks.back().m_ulStackPtr + m_ulVarOut));
  ```
  Used to read/write **task vars** and **task `init()` parameters** —
  values that need to survive function call/return cycles.

The compiler picks the `T*` variant whenever the addressed symbol
resolves to a task-level binding; otherwise it picks the plain variant.
This is invisible at the language level — `m_Whitemask` looks like an
ordinary variable in source.

---

## 7. Events and tasks

Events are the *primary* mechanism for the engine to call into a
script. The complete event-ID table is in
[events_2005.md](events_2005.md); here we focus on how dispatch
intersects with the task stack.

### Per-task event table

Every task can register handlers for any subset of event IDs (the
`m_Events` field of `CScript::TASK`). Additionally there's a single
script-wide `m_GlobalEvents` table for events not bound to a specific
task. The compiler serialises both:

```
[ulTaskCount] [task records...]                     # each task's events
[ulGlobalEventCount] [global event records]         # script-wide fallback
```

([Program.cpp:954-985,987-1004](SRC/PlagueCity/tools/sbuild/Program.cpp#L954-L985);
[Script.cpp:315-348](SRC/PlagueCity/Game/Script/Script.cpp#L315-L348)).

### Dispatch order

`CScriptRun::SendEvent(eventID, varCount, vars)`
([ScriptRun.cpp:242-301](SRC/PlagueCity/Game/Script/ScriptRun.cpp#L242-L301)):

1. Look at `m_Tasks.back()` — the **topmost task only**. No walking
   down the task stack.
2. If `m_DisabledEvents[eventID]` is non-zero → `SEVENTERR_DISABLED`,
   skip.
3. Look up `eventID` in `task.m_Events`. If not found, fall back to the
   script's `m_GlobalEvents`.
4. If not found in either → `SEVENTERR_NOEVENT`. Engine moves on
   without complaint.
5. Check arity (`m_ulVarCount`). Mismatch → `SEVENTERR_VARCOUNT`.
6. Push `varCount` slots typed per the handler signature, copying in
   the `EXTERNAL_VARIABLE` values from the engine. Type mismatch in
   any slot → pop, return `SEVENTERR_BADARGS`.
7. Push a `FUNCTION_CALL` onto `m_Tasks.back().m_Calls` with
   `m_ulStackExtraPop = varCount` (so when the handler returns, the
   pushed argument slots are cleaned up automatically — see
   [InstructionReturn.cpp:19](SRC/PlagueCity/Game/Script/InstructionReturn.cpp#L19)).
8. Jump to `event.m_ulOp` and run inline (`Run(0.0f)` — the engine
   blocks until the handler completes via `return` or `TaskReturn`).

The key consequence: **a script can ignore an event by being inside a
task that doesn't define a handler for it**, and the engine doesn't
need to know that. Switching tasks switches which events you handle.

### `enable` / `disable` instructions

Source-level `enable OnTrigger;` / `disable OnTrigger;` compile to
`INSTR_ENABLE_EVENT` / `INSTR_DISABLE_EVENT`. Both:

- Affect **only the topmost task** (`m_Tasks.back()`).
- Modify `m_DisabledEvents[eventID]`, which is a refcounted counter
  ([InstructionEventDisable.cpp:18](SRC/PlagueCity/Game/Script/InstructionEventDisable.cpp#L18),
  [InstructionEventEnable.cpp:18-23](SRC/PlagueCity/Game/Script/InstructionEventEnable.cpp#L18-L23)).
- Assert (debug only) that the event ID actually exists in this task's
  `m_Events`.

Refcounting lets nested `disable`/`enable` pairs compose:

```c
disable OnTrigger;   // count = 1
disable OnTrigger;   // count = 2
enable  OnTrigger;   // count = 1, still disabled
enable  OnTrigger;   // count = 0, erased → now enabled
```

This state is **per task-frame** and discarded when the task returns;
re-entering the same task starts with an empty `m_DisabledEvents`.

---

## 8. Lifecycle: end-to-end

### 8.1 Script load

[Script.cpp:285-358](SRC/PlagueCity/Game/Script/Script.cpp#L285-L358):

1. Read globals (count + types).
2. Read data pool.
3. Read list of external/global function references (name + arg count
   pairs).
4. Read `m_ulRunTask` (u32) and `m_ulRunOp` (u32) — the start task
   index and code offset.
5. Read `m_ulTaskCount`, then each `TASK` record: var count, var
   types, parameter count, event count, then per-event `(id, op,
   varCount, varTypes)`.
6. Read `m_GlobalEvents` the same way.
7. Read code: `m_ulCodeSize` instructions, each decoded by
   `CreateInstruction(opcode, …)`.

### 8.2 Script run construction

`CScriptRun::CScriptRun(script, context)`
([ScriptRun.cpp:42-73](SRC/PlagueCity/Game/Script/ScriptRun.cpp#L42-L73)):

1. Allocate global variable slots (one per script-level global).
2. Allocate the global-function resolution cache.
3. Build the initial `TASK_CALL` with `m_ulTaskID = GetRunTask()`,
   `m_ulStackPtr = 0`.
4. Push a sentinel `FUNCTION_CALL` with `m_ulOp = -1` (so a stray
   `Return` exits the script cleanly).
5. `PushStack(task.m_ulVarCount, ...)` — allocate the task vars. The
   `ASSERT(!task.m_ulParmCount)` enforces the rule that the maintask's
   `init()` takes no parameters.
6. Set `m_ulCurOp = GetRunOp()` — jump to the start task's `init`.
7. Notify subscribers via `SCRIPT_NOTIFY_START`.

### 8.3 Running

`CScriptRun::Run(deltaTime)`
([ScriptRun.cpp:176-198](SRC/PlagueCity/Game/Script/ScriptRun.cpp#L176-L198)):

A simple fetch-decode-execute loop with a 1 000 000 instruction
hard cap per call. Stops when `m_ulCurOp == -1` (reached when the
sentinel `FUNCTION_CALL`'s `m_ulOp` is restored — i.e. the script's
top-level execution has returned). Engine externals that "block"
(`@Sleep`, `@Hold`, etc.) return `true` from `Execute()` to yield —
the loop returns `false` and the script will resume from the same
instruction next frame.

### 8.4 Cross-frame state

Both `m_Tasks` and `m_Stack` are serialised in
`CScriptRun::SaveState` / restored in the load constructor — full
state, including all in-progress task frames, function call records,
event-disable counts, and the variable stack
([ScriptRun.cpp:119-152, 75-117](SRC/PlagueCity/Game/Script/ScriptRun.cpp#L75-L152)).
This is what makes `save`/`load` work mid-quest.

---

## 9. Task numbers — a reminder

Task IDs are **positional indices into `m_pTasks`**, assigned by the
compiler in source declaration order (after dead-task removal).
No task ID has any engine-side semantic meaning — the only "special"
task is whichever one the script header's `m_ulRunTask` field points
at.

Adding, removing, reordering, or making unreachable a `task` block in
the source will shift the IDs of every subsequent task. This is fine
because `TaskCall` operands are baked at compile time and the engine
treats IDs as opaque.

(See the full analysis at the bottom — search for "Task numbers" in
the chat history.)

---

## 10. Putting it together — `TQuest` walkthrough

For the `quest_b1_01.sc` snippet in §2:

1. Compile-time: one `maintask TQuest` is the only task — the script
   has a single entry in `m_pTasks`, ID 0, with
   `m_ulVarCount = 4` (`m_Whitemask`, `m_Birdmask1`, `m_Birdmask2`,
   `m_Trigger`), `m_ulParmCount = 0`. `m_Events` contains entries for
   the script event IDs of `OnGameTime` and `OnTrigger`.
   `m_ulRunTask = 0`, `m_ulRunOp` points at the entry of `init`.
2. Engine instantiates the script. `m_Tasks = [ { taskID=0,
   stackPtr=0, calls=[{op=-1}], disabled={} } ]`, `m_Stack` has 4 NULL
   variable slots for the task vars.
3. `init` runs: `@SetTimeEvent(0,11)` (which presumably registers the
   actor for `OnGameTime`), spawns actors, stores them into the
   `m_*mask` slots via `TMovT`, finally `for (;;) @Hold();` — yields
   on every frame.
4. At time 11h, the engine sends event 9 (`OnGameTime`) with two
   args. `SendEvent`: `m_Tasks.back().m_Events[9]` is the `OnGameTime`
   handler. Two slots pushed on the stack, a `FUNCTION_CALL`
   `{ m_ulOp = m_ulCurOp /* the @Hold opcode */, m_ulStackExtraPop = 2 }`
   is pushed onto `m_Calls`, `m_ulCurOp` jumps to the handler's
   entry, `Run(0)` is called. Handler does its work, hits `Return`
   which pops the 2 arg slots and restores execution at the
   `@Hold` instruction.
5. Eventually a `OnTrigger` cascade leads to `Cleanup()`, which calls
   `@RemoveActor(self())` and runs out of code. The function returns
   to its caller; the call chain eventually unwinds to the sentinel
   `m_ulOp = -1`; the `Run` loop exits with `true`; the script is
   notified `SCRIPT_NOTIFY_STOP` and ultimately released.

There is only ever one task on the stack throughout this script's
life. The richer cases (multi-task scripts) use `TaskCall` to nest a
child task — typically a base-class behaviour like `TAttackMeleeBase`
in `arena_fighter.sc` — and `TaskReturn` to come back to the parent.

---

## 11. Source map

| Concept                       | File / Line                                                                                  |
|-------------------------------|----------------------------------------------------------------------------------------------|
| `task` / `maintask` grammar   | `tools/sbuild/parser.y:188-253`                                                              |
| Task inheritance (`TaskUnion`) | `tools/sbuild/parser.y:8-29`                                                                 |
| `m_bStart` resolution         | `tools/sbuild/Program.cpp:686-694`                                                           |
| Dead-task removal             | `tools/sbuild/Program.cpp:792-817`                                                           |
| `.bin` task section layout    | `tools/sbuild/Program.cpp:950-985`                                                           |
| `.bin` task section parsing   | `Game/Script/Script.cpp:285-358`                                                             |
| Task struct (`CScript::TASK`) | `Game/Script/Script.h:28-33`                                                                 |
| Task call frame               | `Game/Script/ScriptRun.h:47-53`                                                              |
| `TaskCall` impl               | `Game/Script/InstructionTaskCall.cpp:13-28`                                                  |
| `TaskReturn` impl             | `Game/Script/InstructionTaskReturn.cpp:12-22`                                                |
| `Call` / `Return` impl        | `Game/Script/InstructionCall.cpp` / `InstructionReturn.cpp`                                  |
| `TMov*` family (task-relative)| `Game/Script/InstructionTMov*.cpp`, `InstructionSetNullT.cpp`                                |
| `Mov*` family (stack-relative)| `Game/Script/InstructionMov*.cpp`                                                            |
| Event dispatch                | `Game/Script/ScriptRun.cpp:242-301` (`SendEvent`)                                            |
| `enable` / `disable` impl     | `Game/Script/InstructionEventEnable.cpp`, `InstructionEventDisable.cpp`                      |
| Stack push/pop                | `Game/Script/ScriptRun.cpp:200-218`                                                          |
| State save/load               | `Game/Script/ScriptRun.cpp:75-152`                                                           |
