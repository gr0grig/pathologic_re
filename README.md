# pathologic_re — Pathologic Script Reverse Engineering Toolkit

Toolchain for disassembling, decompiling, editing, recompiling and reassembling
compiled scripts (.bin) from **Pathologic** (Engine.dll).

Based on reverse engineering of Engine.dll and Game.exe via IDA Pro.
Articles: [Part 1](https://hackmag.com/coding/pathologic-reverse) | [Part 2](https://hackmag.com/coding/pathologic-decompile)

## Status

- **373/373** alpha scripts: byte-identical round-trip (.bin -> .asm -> .c -> .asm -> .bin)
- **963/963** HD scripts: byte-identical round-trip with `--hd` flag
- 88 opcodes (alpha) / 90 opcodes (HD) fully documented
- Binary format fully reverse-engineered
- VM internals mapped from Engine.dll via IDA Pro
- ~400 script API functions documented

## Quick Start

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

### Batch processing

```bash
python parser/disasm.py Scripts/ -o Scripts_asm/
python parser/decompile.py Scripts/ -o Scripts_c/
python parser/compile.py Scripts_c/ -o Scripts_compiled/
python parser/asm.py Scripts_compiled/ -o Scripts_assembled/
```

### HD version (Pathologic Classic HD)

HD scripts use 2 extra opcodes (CString/CString2 at 0x4D-0x4E). Pass `--hd`:

```bash
python parser/disasm.py HD_Scripts/ --hd -o HD_asm/
python parser/decompile.py HD_Scripts/ --hd -o HD_c/
python parser/asm.py HD_compiled/ --hd -o HD_assembled/
```

## Tools

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

## Documentation

| File | Contents |
|------|----------|
| [docs/bin_format.md](docs/bin_format.md) | .bin file binary layout, CScript memory structure |
| [docs/opcodes.md](docs/opcodes.md) | All VM opcodes with encoding, alpha vs HD differences |
| [docs/vm.md](docs/vm.md) | VM architecture: stack, addressing, tasks, events, native calls |
| [docs/script_api.md](docs/script_api.md) | ~400 script API functions (Func/ObjFunc) by context |
| [docs/pipeline.md](docs/pipeline.md) | Toolchain usage, batch processing, C pseudocode format |

## C Pseudocode Example

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

## Architecture

Pathologic uses a custom stack-based scripting VM in Engine.dll:

- **Stack-based** with typed variables (bool, int, float, string, object, cvector)
- **88 opcodes** (alpha) / **90 opcodes** (HD): moves, arithmetic, branches, calls
- **Task system**: scripts organized into tasks with event handlers
- **Shared stack**: subroutines share the caller's stack frame
- **Native calls**: `Func` dispatches to C++ via context chain (~400 functions)
- **UTF-16LE** string pool, VLE-encoded names, little-endian binary format

### Engine.dll (IDA)

| Address | Function |
|---------|----------|
| `0x100661e0` | `CScript::CScript` — .bin parser |
| `0x10065030` | `CScript::CreateInstruction` — opcode factory |
| `0x100626c0` | `CScriptRun::CScriptRun` — VM constructor |
| `0x10063100` | `CScriptRun::Run` — main execution loop |
| `0x10063380` | `CScriptRun::SendEvent` — event dispatch |

## Examples

Pre-generated disassembly and decompilation of all game scripts:

| Directory | Version | Contents |
|-----------|---------|----------|
| `examples/alpha/Scripts_asm/` | Alpha | 373 disassembled .asm files |
| `examples/alpha/Scripts_c/` | Alpha | 373 decompiled .c files |
| `examples/HD/Scripts_asm/` | HD | 963 disassembled .asm files |
| `examples/HD/Scripts_c/` | HD | 963 decompiled .c files |
