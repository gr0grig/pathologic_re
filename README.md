# pathologic_re — Pathologic Script Reverse Engineering Toolkit

Toolchain for disassembling, **decompiling to original `.sc` source**, editing,
and recompiling compiled scripts (`.bin`) from **Pathologic** (Engine.dll).

Based on reverse engineering of Engine.dll and Game.exe via IDA Pro.
Articles: [Part 1](https://hackmag.com/coding/pathologic-reverse) | [Part 2](https://hackmag.com/coding/pathologic-decompile)

> Русская версия: [README_ru.md](README_ru.md).

---

## ⭐ Source-level decompiler (`sc_decompiler`)

`sc_decompiler` reconstructs the **original `.sc` source language** from a
compiled `.bin`, and proves it correct by **round-tripping through the real
game compiler** (`scomp.exe`):

```
.bin  ──lift_bin()──▶  SC-AST  ──emit_sc()──▶  .sc  ──scomp.exe──▶  .bin'
                                                              compare ▲
                       byte-identical  ⇔  .bin' == .bin  ───────────┘
```

It emits source in the **actual `.sc` grammar** the shipped LEMON-based `scomp`
compiler accepts — recovering `for`/`while`/`do-while`, `&&`/`||`
short-circuits, ternaries, and scoped locals that scomp lowers away into flat
bytecode — and verifies byte-identity by compiling with the genuine
`scomp.exe` + `sbuild.dll`.

### Status

| Corpus | Files | Round-trip result |
|--------|-------|-------------------|
| **2005** (`2005/Scripts/*.bin`) | 972 | **972 / 972 byte-identical (100 %)** |
| **HD / Classic HD** (`HD/Original/*.bin`) | 963 | **963 / 963 byte-identical (100 %)** |

No fuzzy matching, no dead-code stripping, no canonicalisation: the emitted
`.sc` compiles to *exactly* the original bytes — identical bytecode, pool,
header, patches, and inline strings. The result is **editable source**: change
a `.sc`, recompile with `scomp.exe`, get a drop-in `.bin`.

### Quick start

```bash
# Decompile one .bin to .sc
python -m sc_decompiler path/to/script.bin                 # → script.sc

# Decompile and verify byte-identity against the original
python -m sc_decompiler script.bin --roundtrip
python -m sc_decompiler script.bin --roundtrip -v          # also print the .sc

# Batch round-trip verification over a directory → CSV report
python -m sc_decompiler.verify.roundtrip_all \
    --bin-dir 2005/Scripts --report-csv report.csv --workers 8
```

```python
from sc_decompiler.lift.lifter import lift_bin
from sc_decompiler.emit.emitter import emit_sc
sc_text = emit_sc(lift_bin("script.bin", is_alpha=False))
```

### Components

| Path | Role |
|------|------|
| `sc_decompiler/lift/lifter.py` | Stack-simulating lifter: `.bin` → SC-AST (~5900 lines) |
| `sc_decompiler/ast/nodes.py` | SC-AST node classes (mirror scomp's `CENode` hierarchy) |
| `sc_decompiler/emit/emitter.py` | SC-AST → `.sc` source text (Visitor) |
| `sc_decompiler/verify/scomp_runner.py` | Subprocess wrapper around `scomp.exe` + `sbuild.dll` |
| `sc_decompiler/verify/roundtrip_all.py` | Batch round-trip → CSV report |
| `sc_decompiler/notes/bcdiff.py` | Show first diverging bytecode instruction (debug) |
| `sc_decompiler/notes/classify_fail.py` | Bucket failures by signature (triage) |

**Requires** `scomp.exe` + `sbuild.dll` at `SRC/Scripts/build/tools/`
(configurable). The same compiler pair handles both 2005 and HD scripts.

### Pre-decompiled output

| Directory | Version | Contents |
|-----------|---------|----------|
| `examples/2005/Scripts_sc/` | 2005 | 972 decompiled `.sc` files |
| `examples/HD/Scripts_sc/`   | HD   | 963 decompiled `.sc` files |

### Getting edited scripts back into the game

> **Important — the shipping engine does *not* compile `.sc` on the fly.**
> At runtime `CScriptManager::CreateInstance` loads the script *verbatim* and
> parses it as **bytecode** (`new CScript(ptr, size)`) — there is no extension
> probing and no `.sc` → `.bin` fallback
> (`SRC/PlagueCity/Game/Engine/ScriptManager.cpp:371-408`,
> `Script.cpp:285`). A runtime-compiler hook exists — the constructor does
> `LoadLibrary("sbuild.dll")` + `GetProcAddress("_BuildScript@16")`
> (`ScriptManager.cpp:197-208`) — but the resulting function pointer
> `m_pBuildFunc` is **never called** anywhere in the engine. This is verified
> in the shipping `Engine.dll` (IDA): in the constructor at `0x1002f1c5` the
> field is loaded; across the entire binary it is referenced exactly three
> times — two writes and one `if(!m_pBuildFunc)` null-check for the log line —
> with **zero indirect calls**. The actual loader `CScriptManager::CreateInstance`
> (`0x1002fdfb`) unconditionally does `m_pFS->CreateMappedLoadObject(name)` →
> `new CScript(ptr, size)` (bytecode parse). It logs *"Runtime script
> compilation disabled"* and loads bytecode regardless. So dropping a loose
> `.sc` — **even with `sbuild.dll` present** — will not make the game compile
> it; the DLL is loaded but its entry point is never invoked. You must compile
> to `.bin` yourself.

The practical drop-in workflow takes advantage of the fact that the script
filesystem defaults to **loose files**: `InitFileSystem` mounts
`FS.dll` over `../../data/scripts` unless the game ini has an
`[FS] scriptsType` key (`Game.cpp:201-214`, `Game.cpp:456`). So a compiled
`.bin` placed in `data/scripts` is picked up with **no VFS repack**.

1. Make sure the game uses loose files for scripts: in the game ini, either
   leave the `[FS] scriptsType` key absent (default) or set it so scripts come
   from `data/scripts`. (If it is set to `VFS`, the engine reads from the
   packed archive instead — remove the key to use loose files, or repack.)
2. Compile your edited `.sc` to `.bin` with the genuine compiler:
   ```bash
   # scomp.exe needs sbuild.dll co-located; it writes <name>.bin next to the .sc
   scomp.exe player.sc            # → player.bin
   ```
3. Drop the resulting `player.bin` into `<game>\data\scripts\`. The engine loads
   it by name on the next `RunScript` / `CreateInstance`.

To approximate "edit-and-it's-live", run the compiler as an **external
file-watcher** that rebuilds `.bin` into `data/scripts` whenever you save a
`.sc` (the game still only ever loads the `.bin`). Keep `scomp.exe` +
`sbuild.dll` next to your sources, e.g.:

```powershell
# Watch a folder of .sc sources and auto-compile each on save.
# This folder holds scomp.exe, sbuild.dll, and your .sc files; .bin lands beside them.
$dir = "C:\Games\Pathologic\data\scripts"
$seen = @{}
while ($true) {
    Get-ChildItem $dir -Filter *.sc | ForEach-Object {
        if ($seen[$_.FullName] -ne $_.LastWriteTimeUtc) {
            $seen[$_.FullName] = $_.LastWriteTimeUtc
            Push-Location $dir
            & .\scomp.exe $_.Name      # writes <name>.bin next to the .sc
            Pop-Location
            Write-Host "compiled $($_.Name)"
        }
    }
    Start-Sleep -Seconds 1
}
```

This is the closest supported equivalent of "drop `.sc` in and the game runs
it": the watcher compiles on save, and the loose-file FS makes the fresh `.bin`
live without repacking. (Scripts are cached per name once instantiated, so a
brand-new `.bin` is picked up on the next fresh load of that script.)

#### True on-the-fly compilation (custom FS driver)

The dead `sbuild.dll` hook is not the only seam — genuine transparent `.sc`
compilation *is* achievable without patching the executable, by replacing the
**filesystem driver** for the scripts mount. Scripts are fetched through
`IFileSystem::CreateMappedLoadObject(name)`, and the driver itself is a DLL:
the FS shell loads `<name>.dll` and calls its `_CreateFileSystem@4` export
(`FSShell.cpp:68-73`), where `<name>` comes from the `[FS] scriptsType` ini key
(`Game.cpp:201-214`). A custom driver can therefore intercept a request for
`player.bin`, look for a sibling `player.sc`, compile it to bytecode on demand
(via `sbuild`'s `_BuildScript@16`, a `scomp.exe` shell-out, or its own
compiler), and return the freshly compiled bytes — falling back to the real
file otherwise. Selecting it is just `[FS] scriptsType=<YourDriver>` in the ini,
so only the script mount is affected. This is the architecturally correct hook
(the FS interface, not the unused build pointer). The heavier alternative is a
binary patch to `Engine.dll` so `CreateInstance` actually calls `m_pBuildFunc`
for `.sc` names — version-specific and fragile by comparison.

📖 Full documentation: **[docs_en/sc_decompiler.md](docs_en/sc_decompiler.md)**.

---

## Old — `.asm` / `.c` pseudocode pipeline (`parser/`)

The original toolchain disassembles `.bin` to `.asm` and lifts to a
transparent **C-like pseudocode** that stays 1:1 with the instruction stream.
It round-trips through our own re-implemented assembler (not `scomp.exe`), and
answers *"what bytecode does this script contain?"* — whereas `sc_decompiler`
(above) answers *"what source did the developer write?"*.

### Status

- **373/373** alpha scripts: byte-identical round-trip (.bin → .asm → .c → .asm → .bin)
- **963/963** HD scripts: byte-identical round-trip with `--hd` flag
- 88 opcodes (alpha) / 90 opcodes (HD) fully documented
- Binary format fully reverse-engineered
- VM internals mapped from Engine.dll via IDA Pro
- ~400 script API functions documented

### Quick Start

```bash
# Disassemble
python parser/disasm.py scripts/quest_d1_01.bin -o quest_d1_01.asm

# Decompile to C pseudocode
python parser/decompile.py scripts/quest_d1_01.bin -o quest_d1_01.c

# Edit quest_d1_01.c ...

# Compile back to assembly
python parser/compile.py quest_d1_01.c -o quest_d1_01.compiled.asm

# Assemble to binary
python parser/asm.py quest_d1_01.compiled.asm -o quest_d1_01.bin
```

#### Batch processing

```bash
python parser/disasm.py Scripts/ -o Scripts_asm/
python parser/decompile.py Scripts/ -o Scripts_c/
python parser/compile.py Scripts_c/ -o Scripts_compiled/
python parser/asm.py Scripts_compiled/ -o Scripts_assembled/
```

#### HD version (Pathologic Classic HD)

HD scripts use 2 extra opcodes (CString/CString2 at 0x4D-0x4E). Pass `--hd`:

```bash
python parser/disasm.py HD_Scripts/ --hd -o HD_asm/
python parser/decompile.py HD_Scripts/ --hd -o HD_c/
python parser/asm.py HD_compiled/ --hd -o HD_assembled/
```

### Tools

| Script | Direction | Description |
|--------|-----------|-------------|
| `parser/disasm.py` | .bin -> .asm | Disassembler |
| `parser/decompile.py` | .bin -> .c | Decompiler (C pseudocode) |
| `parser/compile.py` | .c -> .asm | Compiler |
| `parser/asm.py` | .asm -> .bin | Assembler |

Internal libraries (in `parser/lib/`):
- `PathologicScript.py` — binary parser and disassembler core (~2050 lines)
- `PathologicHL.py` — CFG builder and stack simulation (~280 lines)
- `PathologicPseudoC.py` — C pseudocode generator (~2380 lines)

Additional tools (in `tools/`):
- `AlphaPatScript.bt` — 010 Editor binary template
- `dump_vm_state2.py` — IDA Pro debug script for VM state dump

### Documentation

| File | Contents |
|------|----------|
| [docs_en/sc_decompiler.md](docs_en/sc_decompiler.md) | **Source-level `.sc` decompiler (above)** |
| [docs_en/bin_format.md](docs_en/bin_format.md) | .bin file binary layout, CScript memory structure |
| [docs_en/opcodes.md](docs_en/opcodes.md) | All VM opcodes with encoding, alpha vs HD differences |
| [docs_en/vm.md](docs_en/vm.md) | VM architecture: stack, addressing, tasks, events, native calls |
| [docs_en/script_api.md](docs_en/script_api.md) | ~400 script API functions (Func/ObjFunc) by context |
| [docs_en/pipeline.md](docs_en/pipeline.md) | Toolchain usage, batch processing, C pseudocode format |

Full English documentation index: [docs_en/README.md](docs_en/README.md). Russian: [docs_ru/](docs_ru/).

### C Pseudocode Example

```c
// @import "constructor" 0
// @import "destructor" 0
// @import "SetTimer" 2
// @string 0x0000 "all"
// @string 0x0008 "hunt"

// GLOBALS
object g0;

// GTASK patrol
// @task_params object
// @task_vars int bool float
// GEVENT 1(int, float)
//   @event_vars bool
{
    // --- constructor ---
    self(g0);
    int v3 = 0;
    bool v2 = false;
    float v1 = 0.0;
    SetTimer(1, 5.0);
    // --- event 1 ---
    // ...
}
```

### Architecture

Pathologic uses a custom stack-based scripting VM in Engine.dll:

- **Stack-based** with typed variables (bool, int, float, string, object, cvector)
- **88 opcodes** (alpha) / **90 opcodes** (HD): moves, arithmetic, branches, calls
- **Task system**: scripts organized into tasks with event handlers
- **Shared stack**: subroutines share the caller's stack frame
- **Native calls**: `Func` dispatches to C++ via context chain (~400 functions)
- **UTF-16LE** string pool, VLE-encoded names, little-endian binary format

#### Engine.dll (IDA)

| Address | Function |
|---------|----------|
| `0x100661e0` | `CScript::CScript` — .bin parser |
| `0x10065030` | `CScript::CreateInstruction` — opcode factory |
| `0x100626c0` | `CScriptRun::CScriptRun` — VM constructor |
| `0x10063100` | `CScriptRun::Run` — main execution loop |
| `0x10063380` | `CScriptRun::SendEvent` — event dispatch |

### Examples

Pre-generated disassembly and decompilation of all game scripts:

| Directory | Version | Contents |
|-----------|---------|----------|
| `examples/alpha/Scripts_asm/` | Alpha | 373 disassembled .asm files |
| `examples/alpha/Scripts_c/` | Alpha | 373 decompiled .c files |
| `examples/HD/Scripts_asm/` | HD | 963 disassembled .asm files |
| `examples/HD/Scripts_c/` | HD | 963 decompiled .c files |
