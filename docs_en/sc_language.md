# `.sc` — PathologicScript Source Language

The original C-like scripting language consumed by
[`scomp`](toolchain.md) and emitted as the `.bin` bytecode the runtime
VM executes ([bin_format.md](bin_format.md), [vm.md](vm.md),
[opcodes.md](opcodes.md)).

Source samples ship in `SRC/PlagueCity/Game/script_sources/` — both
`.sc` (top-level files compiled to `.bin`) and `.sci` (include-only
headers). The standard library is in `std.sci`.

---

## 1. File extensions

| Extension | Role                                              |
|-----------|---------------------------------------------------|
| `.sc`     | Top-level source. Compiled to one `.bin`.         |
| `.sci`    | Include-only header. Never compiled by itself.    |

`scomp` resolves `include foo.sci` by searching the include path
(`-d`) supplied on the command line. See
[toolchain.md §3](toolchain.md) for compiler flags.

---

## 2. Top-level constructs

A `.sc` file is a sequence of top-level declarations:

| Construct          | Purpose                                                                                       |
|--------------------|-----------------------------------------------------------------------------------------------|
| `include path`     | Pulls in another `.sci` (no quotes, no semicolon — see std.sci:1).                            |
| `event NAME ID;`   | Declares an event channel (e.g. `event OnUse 0;`). The numeric ID is the event ordinal.       |
| `const T NAME = …;`| File-scope constant (typed). `const float PI = 3.1415926535897932;`                            |
| `task NAME { … }`  | A *callable* task. Re-entrant; can be started via `RunTask`.                                  |
| `maintask NAME : BASE { … }` | The script's entry point. Inherits from `BASE` (which is also a `task` or `maintask`). |
| `T func(args) { … }` | Free function returning type `T`.                                                            |

Example minimal `.sc`:

```c
include std.sci
include actor_item_base.sci

maintask TInventoryObject : TActorItem
{
}
```

The `maintask` is implicit: it has no body of its own and gets
everything from the base `TActorItem`. The compiler emits a `RunTask`
opcode that bootstraps it on script load.

---

## 3. Types

Built-in scalar / value types:

| Type      | Notes                                                              |
|-----------|--------------------------------------------------------------------|
| `int`     | 32-bit signed.                                                     |
| `float`   | 32-bit IEEE 754.                                                   |
| `bool`    | 1-byte. `true` / `false`.                                          |
| `string`  | Variable-length, immutable. Stored as UTF-16 inside the VM string pool. |
| `Vector`  | 3 × `float`. Constructed with `[x, y, z]` literal syntax.          |
| `object`  | Opaque reference to a host-side entity (actor, scene, geometry, set, vector). |

There is **no array type and no struct type in user code**. Sets and
vectors of objects exist as host-managed types created with
`CreateObjectSet()` / `CreateObjectVector()`.

### 3.1 Vector literals and operators

```c
Vector v = [1, 2, 3];        // literal
Vector d = v2 - v1;          // componentwise subtract
float dot = v1 | v2;         // dot product
Vector cross = v1 ^ v2;      // cross product
```

`|` and `^` are language-level operators on `Vector`. They do not
work for `int` / `float`.

### 3.2 Member access

`Vector` exposes `.x`, `.y`, `.z`. Examples from `std.sci:191`:

```c
float Dot2D(Vector v1, Vector v2) {
    return v1.x * v2.x + v1.z * v2.z;
}
```

`object` has no user-accessible members — calls are routed through
method syntax (see §6.2).

---

## 4. Statements

Standard C-like:

- Declarations: `int x;`, `float f = 0.5;`.
- Assignment: `x = 1;`, `+=`, `-=`, `*=`, `/=`, `%=`.
- Compound: `{ … }`.
- `if (cond) … else …`.
- `while (cond) …`, `do … while (cond);`, `for (init; cond; step) …`.
- `return [value];`.
- `break;`, `continue;`.
- Ternary `cond ? a : b` (used heavily — see `std.sci:95`).

There is **no `goto`**, no `switch` (the original team's choice), and
no exceptions.

### 4.1 Infinite loop (idiom)

The canonical "wait forever until events arrive" loop is:

```c
for (;;) {
    @Hold();
}
```

`@Hold()` yields the task indefinitely; events resume it. See
[tasks.md](tasks.md) for the cooperative scheduling model.

---

## 5. Function definitions

```c
int min_of(int v1, int v2, int v3) {
    if (v1 < v2)
        return (v1 < v3)? 0 : 2;
    return (v2 < v3)? 1 : 2;
}
```

- Return type declared first; `void` allowed.
- Parameters are positional, by-value.
- **Overloading** is allowed on parameter types (see `std.sci:151`
  `rndbool(float)` vs `rndbool(int, int)`).
- **No default arguments.**
- Recursion is allowed.

### 5.1 Out-parameters via host calls

Because host calls cannot return a `Vector` or `object` directly in
the bytecode, the convention is:

```c
Vector v;
@FindGeometryCenter("door", v);   // host fills v
```

`v` is passed by reference because it appears in the argument list
without being initialized — the compiler emits a pointer-to-local.

---

## 6. Calling conventions

### 6.1 Local function call

```c
float d = VectorDist(v1, v2);
```

Emits a `Func` / `Call` opcode chain.

### 6.2 Host call (`@name`)

A leading `@` denotes a **host-side built-in**. The compiler emits a
`Call+` opcode with an external function ID. These are the only way
to talk to the engine.

```c
@SetUsable(true, 50);
@FindGeometry("object", geo);
@PlaySound(self(), "hit");
```

See [script_api.md](script_api.md) for the catalogue of host calls.

### 6.3 Method call (`obj->name(...)`)

```c
geo->Enable(true);
scene->GetLocator(name, bFound, vPos);
```

Methods are dispatched virtually through the object's host class
table. Equivalent to `@<ClassName>::name(obj, args…)` after compile.

### 6.4 `self()`

The current task's owning actor. Defined in `std.sci:53`:

```c
object self(void) {
    object obj;
    @self(obj);
    return obj;
}
```

---

## 7. Tasks and `maintask`

A `task` is a coroutine. Tasks can be started with `@RunTask(…)`,
suspended with `@Hold()`, and they receive **events** through `event`
declarations.

A `maintask` is the **single** entry-point of a `.sc`. There is
exactly one per compiled `.bin`. The runtime invokes its `init()`
method on load.

```c
maintask TInventoryObject : TActorItem
{
}
```

Inheritance is **single** (one base `task` or `maintask`); the
derived class can add new event handlers and overload methods. There
is no virtual dispatch keyword — overrides happen by name.

See [tasks.md](tasks.md) for the full task model.

---

## 8. Event handlers

An `event` declaration registers a numeric ordinal:

```c
event OnUse 0;
```

A `task` can define a method with the same name; the runtime calls it
when the host fires that event for the actor owning the task.

```c
void OnUse(object actor) {
    if (!IsAccessible(actor)) return;
    object item;
    @GetItem(item, 0);
    ...
}
```

Events documented in detail in [events_2005.md](events_2005.md). The
core IDs (from `std.sci:5-41`) cover use / sense / load / timer /
attack / damage / inventory / dispose lifecycles.

---

## 9. Properties (per-actor variables)

`@GetProperty(name, out)` / `@SetProperty(name, value)` access
per-actor properties declared in the actor's XML `<Properties>`
block (see [`formats/actor_xml.md`](formats/actor_xml.md) §3.3).
There is no compile-time property declaration in the script — names
are resolved dynamically at runtime.

```c
int iCount;
@GetProperty("ammo_count", iCount);
@SetProperty("ammo_count", iCount - 1);
```

---

## 10. Standard library (`std.sci`)

Roughly 250 lines of reusable helpers. Categories:

- **Common events**: `OnUse`, `OnSee`, `OnAttacked`, `OnDeath`,
  `OnDispose`, `OnInventoryAddItem`, etc.
- **Math**: `min_of`, `max_of`, `clampf`, `signf`, `betweenf`,
  `SolveQuadraticMinPos`, `Normalize`.
- **Vector helpers**: `VectorDist`, `Dot2D`, `Length2D`,
  `CosAngle`, `CosAngle2D`.
- **RNG**: `rndbool(prob)`, `rndbool(num, denom)`.
- **Strings**: `strchr`, `strsub`.
- **Globals**: `GetVariable`, `IncVariable`, `DecVariable`,
  `SetVariable` — wrap `@GetVariable` / `@SetVariable` host calls.
- **Scene locators**: `GetLocatorPosition(scene, name)`.

Always `include std.sci` as the first line; most other `.sci`s
already include it transitively.

---

## 11. Compilation specifics

- Comments: `// line` and `/* block */` (no nesting).
- Preprocessor: only `include` is supported; no `#define`, no
  `#if`. Constants use the `const` syntax instead.
- String literals: `"…"` — escape `\"`, `\\`, `\n`, `\t` recognised.
- Numeric literals: decimal `int` (`-123`), hex `0x…`, `float` with
  decimal point (`3.14`) or exponent (`1e-5`).

Identifier rules:
- Alphanumeric + underscore, starting with a letter or underscore.
- Case-sensitive.
- Local variables and parameters live in a per-task stack frame.

---

## 12. What it compiles to

`scomp` lowers each function body to a stream of stack-VM opcodes
([opcodes.md](opcodes.md)), constructing:

- a **string pool** (UTF-16 for literals, ASCII for host-call names),
- a **function table** (name → bytecode offset),
- a **bytecode buffer** (instruction stream),
- optional **debug info** (source file / line table).

The full file layout is [bin_format.md](bin_format.md). The
round-tripping decompiler `decompile.py` recovers a C-like form;
it is approximate, not lossless (this language has no canonical AST
serialisation, so some `.sc → .bin → .sc` round-trips end up
slightly reordered).

---

## 13. Cross-references

- Bytecode the compiler emits: [bin_format.md](bin_format.md).
- VM that executes the bytecode: [vm.md](vm.md),
  [opcodes.md](opcodes.md).
- Task model: [tasks.md](tasks.md).
- Event ordinals: [events_2005.md](events_2005.md).
- Host call catalogue: [script_api.md](script_api.md).
- Compiler: [toolchain.md §3](toolchain.md).
- Sample sources: `SRC/PlagueCity/Game/script_sources/*.sc{i,}`.
