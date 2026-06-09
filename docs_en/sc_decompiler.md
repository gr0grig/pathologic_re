# sc_decompiler — Source-Level Decompiler for PathologicScript

`sc_decompiler` reconstructs the **original `.sc` source language** from a
compiled PathologicScript `.bin`, and proves it correct by **round-tripping
through the real game compiler** (`scomp.exe`):

```
.bin  ──lift_bin()──▶  SC-AST  ──emit_sc()──▶  .sc  ──scomp.exe──▶  .bin'
                                                              compare ▲
                       byte-identical  ⇔  .bin' == .bin  ───────────┘
```

Unlike the older `parser/` pipeline (which produces a *C-like pseudocode*
that round-trips through our own re-implemented assembler), this decompiler
emits source in the **actual `.sc` grammar** that the shipped LEMON-based
`scomp` compiler accepts, and verifies byte-identity against the original by
compiling with the genuine `scomp.exe` + `sbuild.dll`.

## Status

| Corpus | Files | Round-trip result |
|--------|-------|-------------------|
| **2005** (`2005/Scripts/*.bin`) | 972 | **972 / 972 byte-identical (100 %)** |
| **HD / Classic HD** (`HD/Original/*.bin`) | 963 | **963 / 963 byte-identical (100 %)** |

"Byte-identical" means: for every file, `scomp.exe(emit_sc(lift_bin(f)))`
produces a `.bin` that is **byte-for-byte equal** to the original `f` —
identical bytecode, pool, header, patches, and inline strings. There is no
fuzzy matching, BFS dead-code stripping, or canonicalisation step: the
emitted `.sc` compiles to exactly the original bytes.

Pre-decompiled `.sc` output lives in:

- `examples/2005/Scripts_sc/` — 972 `.sc` files
- `examples/HD/Scripts_sc/` — 963 `.sc` files

## Why a second decompiler?

The `parser/` toolchain answers *"what bytecode does this script contain?"* —
it disassembles to `.asm` and lifts to a transparent C pseudocode that keeps
1:1 with instructions. `sc_decompiler` answers a harder question:
*"what source did the developer write?"* It must reproduce the exact
high-level constructs (`for`/`while`/`do-while`, `&&`/`||` short-circuits,
ternaries, scoped locals) that scomp **lowers away** into bytecode, such that
recompiling reproduces the original byte stream — including the artifacts of
scomp's own code generator.

This is what makes the result usable as **editable source**: you can change a
`.sc`, recompile with `scomp.exe`, and get a drop-in `.bin`.

## Pipeline components

```
sc_decompiler/
├── __main__.py            CLI: decompile one .bin, optionally --roundtrip
├── lift/lifter.py         stack-simulating lifter:  .bin → SC-AST   (~5900 lines)
├── ast/
│   ├── nodes.py           SC-AST node classes (mirror scomp's CENode hierarchy)
│   └── types.py           VarType / Op1Type / Op2Type / Op3Type / AssignType
├── emit/emitter.py        SC-AST → .sc source text  (Visitor)
├── verify/
│   ├── scomp_runner.py    subprocess wrapper around scomp.exe + sbuild.dll
│   ├── roundtrip_all.py   batch round-trip over a whole directory → CSV report
│   └── oracle_check.py    single-file oracle comparison
└── notes/
    ├── bcdiff.py          show first diverging bytecode instruction (debug)
    ├── classify_fail.py   bucket failures by coarse signature (triage)
    ├── classify_mismatches.py
    └── sc_fuzz.py         fuzzer used during development
```

### 1. Lifter (`lift/lifter.py`)

A **stack-simulating lifter**. It parses the `.bin` with
`parser/lib/PathologicScript.py` (`PS.IS_ALPHA = False` for 2005/HD), then
walks the instruction stream maintaining a simulated operand stack, recovering
expression trees and control flow. Key insight: scomp's stack machine is
deterministic, so the lifter can replay its codegen in reverse.

The hard parts are the high-level constructs scomp lowers into flat jumps:

- **`_try_lift_short_circuit`** — recovers `&&` / `||` chains. scomp emits a
  *scaffold* (`PushV(bool); MovB(slot, v0); …; MovB(slot, !v0)`) per operand.
  The lifter routes through a recursive **`_parse_andor`** (2 CFG regions per
  level) to handle nested mixes like `A && (B || C)`, falling back to a flat
  scan on failure.
- **`_try_lift_infinite_for` / `_find_infinite_loop_end`** — distinguishes a
  genuine `for(;;)` back-jump from a `while(A && B)` head. The disambiguator
  **skips a leading value-producing short-circuit scaffold** (depth-counted
  over nesting) before testing whether the next `JumpB` targets the loop end.
- **`_find_do_while_end` / `_lift_do_while_at`** — recovers `do { } while(c)`.
- **`h_JumpB`** — turns conditional jumps into `if`/`else`, and into a
  **value-producing ternary** (`cond ? A : B`) when both branches push a value
  and emit no statements (recovered by retrying both branches with
  `allow_imbalance=1`).
- **`h_Mov` cast-suppression** — suppresses spurious `(int)`/`(float)` casts
  by checking the *argument consumer* past a trailing `Pop`.
- **`_narrow_local_scopes`** — places local declarations in the tightest block
  that dominates their uses, matching scomp's DFS slot-allocation order.
- **`h_Call` / `h_ObjFunc` / `h_PopGE`** — function calls, `obj->method(...)`
  calls, and global-variable `++`/`--` and event-variable access.

`lift_bin(path, is_alpha=False)` returns an `ScFile` AST. It raises
`LiftError` if a construct cannot be recovered.

### 2. SC-AST (`ast/nodes.py`)

The AST mirrors scomp's `CENode` / `COperator` hierarchy
(`SRC/PlagueCity/tools/sbuild/parser.y`) so that the text the emitter produces
parses back into a structurally-equivalent tree:

- **Expressions** (`_Expr`): `ENBool`, `ENInt`, `ENFloat`, `ENString`,
  `ENVector`, `ENId`, `ENIdStruct` (vector `.x/.y/.z`), `ENFunc`
  (bare/`obj->method`), `ENFuncSuper`, `ENFuncExtern` (`@native`),
  `ENFuncGlobal`, `ENTask` (`name{args}` spawn), `ENOp1/2/3`, `ENTypeC` (cast),
  `ENAssign`, `ENAssignStruct`.
- **Statements** (`_Op`): `OpBlock`, `OpVar`, `OpConst`, `OpExprStmt`,
  `OpReturn`, `OpBreak`, `OpContinue`, `OpIf`, `OpFor`, `OpWhile`,
  `OpDoWhile`, `OpEnableEvent`, `OpDisableEvent`.
- **File scope**: `ScFile` { `events[]`, `globals[]`, `consts[]`, `tasks[]`,
  `global_funcs[]` }, with `EventDecl`, `GlobalVar`, `Function`, `Task`.

The **order** of `OpVar` nodes during a DFS over the body is significant: it
controls scomp's local-slot allocation, so the lifter must emit declarations
in the same order scomp's `ProcessVariables` would assign them.

### 3. Emitter (`emit/emitter.py`)

A Visitor that renders the AST as `.sc` source text — operator precedence,
indentation, string C-escaping, type keywords, event/task declarations.
`emit_sc(scfile)` returns the source string.

### 4. Verify (`verify/scomp_runner.py`, `verify/roundtrip_all.py`)

`compile_sc_text(sc_text, stem=...)` copies `scomp.exe` **and** `sbuild.dll`
(from `SRC/Scripts/build/tools/`) into a temp dir, writes the `.sc`, runs
`scomp.exe file.sc`, and returns the produced `.bin` bytes. (scomp requires
its DLL co-located, hence the temp-dir copy.)

`roundtrip_all.py` runs the full pipeline over a directory in parallel and
writes a CSV report classifying each file as `OK_ROUNDTRIP`, `BIN_MISMATCH`,
`SCOMP_ERROR`, or `LIFT_ERROR`.

## Usage

### Decompile a single file

```bash
python -m pathologic_re.sc_decompiler path/to/script.bin            # → script.sc
python -m pathologic_re.sc_decompiler script.bin -o out.sc          # explicit out
python -m pathologic_re.sc_decompiler script.bin --roundtrip        # also verify
python -m pathologic_re.sc_decompiler script.bin --roundtrip -v     # print the .sc
```

`--roundtrip` compiles the emitted `.sc` with the real `scomp.exe` and reports
`BYTE-IDENTICAL` or the first diverging offset.

### Decompile in code

```python
from pathologic_re.sc_decompiler.lift.lifter import lift_bin
from pathologic_re.sc_decompiler.emit.emitter import emit_sc

sc_text = emit_sc(lift_bin("script.bin", is_alpha=False))
open("script.sc", "w", encoding="utf-8").write(sc_text)
```

### Batch round-trip verification

```bash
python -m pathologic_re.sc_decompiler.verify.roundtrip_all \
    --bin-dir 2005/Scripts \
    --report-csv tmp_diff/report.csv \
    --workers 8
```

### Debugging a mismatch

```bash
# show the first diverging bytecode instruction between orig and recompiled
python pathologic_re/sc_decompiler/notes/bcdiff.py ui_apparatus

# bucket all failing files by coarse signature to find the biggest cluster
python pathologic_re/sc_decompiler/notes/classify_fail.py tmp_diff/report.csv
```

## Requirements

- `scomp.exe` + `sbuild.dll` — the genuine game compiler. A copy is bundled in
  `pathologic_re/tools/`; they originate from the leaked game source at
  `SRC/Scripts/build/tools/` (2005-03-10 build). The verify harness reads them
  from `SRC/Scripts/build/tools/` by default (configurable via `scomp_dir`).
  The same pair compiles both 2005 and HD scripts.
- `parser/lib/PathologicScript.py` (the `.bin` parser) on the path; the
  modules add it automatically.

## Notes on editions

The 2005 and HD `.bin` files use the same PathologicScript bytecode and the
same `scomp.exe`. HD adds the `CString` / `CString2` handlers (opcodes
`0x4D`–`0x4E`); these are already handled by `PathologicScript.py` and the
lifter, so HD scripts round-trip with no special flag. (The unrelated
opcode-shift quirk applies only to the separate **The Void** /
`GameModule.dll` engine, not to these PathologicScript files.)

## Getting edited scripts back into the game

A common question is whether you can drop a loose `.sc` into the game's
`scripts` folder and have the engine compile it on the fly. **You cannot — the
shipping engine never compiles source at runtime.** What it does is load
precompiled `.bin` files; the decompiler exists so you can edit that source and
recompile it offline with the real `scomp.exe`.

### What the engine actually does

- The runtime loader `CScriptManager::CreateInstance`
  (`SRC/PlagueCity/Game/Engine/ScriptManager.cpp:371-408`) fetches a script by
  its **verbatim** name via `m_pFS->CreateMappedLoadObject(pszScriptName)` and
  hands the bytes to `new CScript(ptr, size)`
  (`Script.cpp:285`), which is a pure **bytecode deserializer**. There is no
  extension probing and no `.sc`/`.bin` fallback — callers pass names that
  already end in `.bin` (e.g. `ActorPlayer.cpp:745` `"player.bin"`).
- A runtime-compiler hook *exists but is dead*: the `CScriptManager`
  constructor (`ScriptManager.cpp:197-208`; in the binary at `0x1002f1c5`) does
  `LoadLibrary("sbuild.dll")` + `GetProcAddress("_BuildScript@16")` and stores
  it in `m_pBuildFunc` (signature: compile a source string with an include
  path). **`m_pBuildFunc` is never invoked anywhere.** Verified in the shipping
  `Engine.dll` (IDA): across the whole binary the field is referenced exactly
  three times — two writes and one `if(!m_pBuildFunc)` null-check for the log
  line — with **zero indirect calls**, and `CreateInstance` (`0x1002fdfb`) never
  touches it. When the DLL is absent it logs *"Runtime script compilation
  disabled"* and proceeds to load bytecode either way. So even shipping
  `sbuild.dll` alongside the game will not make it compile loose `.sc` — the DLL
  loads, but its entry point is never called.
- Scripts come from the `FS_STD_SCRIPT` filesystem, mounted by
  `InitFileSystem` (`Game.cpp:201-214`, called at `Game.cpp:456`). With no
  `[FS] scriptsType` ini key it defaults to **loose files** — `FS.dll` over
  `../../data/scripts`. If `scriptsType` is set (e.g. `VFS`) it mounts
  `<Type>.dll` over `<reldir>\scripts` instead.

### The supported drop-in workflow

1. Use loose files for scripts (default): leave `[FS] scriptsType` absent so the
   engine reads `data/scripts` via `FS.dll`. A `.bin` placed there is picked up
   with **no VFS repack**. (If the ini forces `VFS`, remove the key or repack
   the archive.)
2. Compile your edited `.sc` with the genuine compiler (`scomp.exe` needs
   `sbuild.dll` co-located; with no `-o` it writes `<name>.bin` next to the
   source). Full CLI — see [toolchain.md](toolchain.md#3-scomp--script-compiler):
   ```
   scomp <source.sc> [-o <out.bin>] [-d <include_dir>]…
   ```
   ```bash
   scomp.exe player.sc                       # → player.bin (beside the .sc)
   scomp.exe player.sc -o out\player.bin      # explicit output path
   scomp.exe player.sc -d include\            # add an #include search dir
   ```
   (`scomp` runs the preprocessor `#include` → lexer → Lemon parser → semantic
   analysis → bytecode emitter; this is exactly the compiler `roundtrip_all`
   invokes to verify byte-identity.)
3. Drop `player.bin` into `<game>\data\scripts\`. The engine loads it by name on
   the next `RunScript` / `CreateInstance` (each script is cached per name once
   instantiated, so a fresh `.bin` is read on the next fresh load).

To approximate an edit-and-run loop, run `scomp.exe` from an **external
file-watcher** that rebuilds `.bin` into `data/scripts` on every `.sc` save (see
the PowerShell snippet in the project [README](../README.md)). The game still
only ever loads the `.bin`; the watcher just keeps it current.

### True on-the-fly compilation (custom FS driver)

Genuine transparent `.sc` compilation *is* possible without patching the
executable — not via the dead build hook, but via the **filesystem driver**.
Scripts are fetched through `IFileSystem::CreateMappedLoadObject(name)`
(`FileSystem.h:32`), and the driver is a DLL: the FS shell loads `<name>.dll`
and calls its `_CreateFileSystem@4` export (`FSShell.cpp:68-73`), where
`<name>` is the `[FS] scriptsType` ini key (`Game.cpp:201-214`). A custom driver
can intercept a request for `player.bin`, look for a sibling `player.sc`,
compile it to bytecode on demand (via `sbuild`'s `_BuildScript@16`, a
`scomp.exe` shell-out, or its own compiler), and return the freshly compiled
bytes — falling back to the real file otherwise. It is enabled per-mount with
`[FS] scriptsType=<YourDriver>`, so only scripts are affected. This is the
architecturally correct seam (the FS interface, not the unused build pointer).
The heavier alternative is a binary patch to `Engine.dll` so `CreateInstance`
calls `m_pBuildFunc` for `.sc` names — version-specific and fragile.

## How byte-identity was reached

The corpus went from partial to 100 % through a series of construct-recovery
fixes, each driven by `classify_fail.py` triage and `bcdiff.py` inspection:

- nested `&&`/`||` via recursive `_parse_andor` routing;
- infinite-`for` vs `while(A&&B)` disambiguation via scaffold-skip in
  `_find_infinite_loop_end`;
- value-producing ternary recovery in `h_JumpB`;
- cast-suppression in `h_Mov` (look past a trailing `Pop`);
- `do { } while()` continue-address handling;
- empty-`else` preservation;
- task-init non-void detection and global `++`/`--` (`h_PopGE`);
- recursive scope-narrowing of local declarations;
- method-receiver re-evaluation quirk in `h_ObjFunc`.

The result is a decompiler whose output, compiled by the original game
compiler, reproduces every shipped script byte-for-byte.
