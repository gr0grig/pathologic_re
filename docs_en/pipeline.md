# Pathologic Script Toolchain

## Overview

Four tools for working with Pathologic compiled scripts (.bin):

```
.bin ──disasm──> .asm ──────────────────────> .bin
  │                                            ▲
  │              .c ──compile──> .asm ──asm──┘
  └──decompile──>
```

| Tool | Input | Output | Description |
|------|-------|--------|-------------|
| `disasm.py` | `.bin` | `.asm` | Disassemble bytecode to text assembly |
| `decompile.py` | `.bin` | `.c` | Decompile bytecode to C-like pseudocode |
| `compile.py` | `.c` | `.asm` | Compile C pseudocode to assembly |
| `asm.py` | `.asm` | `.bin` | Assemble text assembly to bytecode |

Full round-trip: `.bin` → `.asm` → `.c` → `.asm` → `.bin` produces byte-identical output.

## Quick Start

### Single file

```bash
# Disassemble
python parser/disasm.py scripts/quest_d1_01.bin -o output/quest_d1_01.asm

# Decompile
python parser/decompile.py scripts/quest_d1_01.bin -o output/quest_d1_01.c

# Compile C back to assembly
python parser/compile.py output/quest_d1_01.c -o output/quest_d1_01.compiled.asm

# Assemble to binary
python parser/asm.py output/quest_d1_01.compiled.asm -o output/quest_d1_01.bin
```

### Batch processing

```bash
# Disassemble all scripts in a directory
python parser/disasm.py Scripts/ -o Scripts_asm/

# Decompile all scripts
python parser/decompile.py Scripts/ -o Scripts_c/

# Compile all C files
python parser/compile.py Scripts_c/ -o Scripts_compiled/

# Assemble all .asm files
python parser/asm.py Scripts_compiled/ -o Scripts_assembled/
```

Default output directories when `-o` is omitted:
- `disasm.py`: `{input}_asm/`
- `decompile.py`: `{input}_c/`
- `compile.py`: replaces `_c` with `_compiled` in input path
- `asm.py`: replaces `_compiled` with `_assembled` in input path

## HD Version (Classic HD)

HD scripts use a different opcode table (2 extra opcodes at 0x4D-0x4E). Use `--hd` flag:

```bash
python parser/disasm.py HD_Scripts/ --hd -o HD_Scripts_asm/
python parser/decompile.py HD_Scripts/ --hd -o HD_Scripts_c/
python parser/asm.py HD_Scripts_compiled/ --hd -o HD_Scripts_assembled/
```

The `compile.py` tool does not need `--hd` — it produces version-neutral assembly.

### Alpha vs HD differences

| | Alpha (original) | HD (Classic HD) |
|---|---|---|
| Opcodes | 0x00-0x57 (88 total) | 0x00-0x59 (90 total) |
| Extra opcodes | — | CString (0x4D), CString2 (0x4E) |
| Call opcode | 0x4D | 0x4F |
| Func opcode | 0x51 | 0x53 |
| String encoding | UTF-16LE | UTF-16LE |

Opcodes 0x00-0x4C are identical between versions. HD inserts 2 extra opcodes at 0x4D-0x4E, shifting all subsequent opcodes by +2.

## Round-trip Statistics

| Version | Scripts | Disasm | Decompile | Full round-trip |
|---------|---------|--------|-----------|-----------------|
| Alpha | 373 | 373/373 | 373/373 | 373/373 byte-identical |
| HD | 963 | 963/963 | 963/963 | 963/963 byte-identical |

## C Pseudocode Format

The decompiler produces C-like pseudocode with metadata in `// @` comment headers.

### Structure

```c
// @import "function_name" nargs
// @string pool_offset "string value"

// GLOBALS
object g0;

// GTASK task_name
// @task_params int float
// @task_vars bool string object
// GEVENT event_name(int, float)
//   @event_vars bool
{
    // function body
    // ...
}
```

### Metadata comments

| Prefix | Meaning |
|--------|---------|
| `// @import` | Native function declaration (name + arg count) |
| `// @string` | String pool entry (offset + value) |
| `// @task_params` | Task parameter types |
| `// @task_vars` | Task local variable types |
| `// @event_vars` | Event handler variable types |
| `// @dead_code` | Unreachable code block |

### Variable naming

- `g0`, `g1`, ... — global variables
- `v1`, `v2`, ... — local variables (stack slots, 1-indexed from stack top)
- `t0`, `t1`, ... — task variables (0-indexed from task base)
- `ev0`, `ev1`, ... — event handler variables

### Types

| Type | C keyword | Description |
|------|-----------|-------------|
| bool | `bool` | Boolean (1 byte) |
| int | `int` | 32-bit signed integer |
| float | `float` | 32-bit IEEE float |
| string | `string` | UTF-16LE string |
| object | `object` | Object reference |
| cvector | `vector` | 3D vector (x, y, z) |

## Assembly Format

The disassembler produces a text format with labeled sections:

```asm
; DATA POOL
; 0x0000: "string_value"

; GLOBALS
; g0: object

; GLOBAL FUNCTIONS
; [0] constructor(0)
; [1] destructor(0)

; ENTRY: task=0 op=42

; TASK 0 (vars: 3, params: 1)
;   EVENT 1 -> op 100 (vars: 2)

; CODE
0000: PushV 3 [int, int, bool]
0001: MovI 3 0
0002: PushI 42
...
```

## Tool CLI Reference

### disasm.py

```
usage: disasm.py [-h] [-o OUTPUT] [--batch] [--hd] [-v] [input]

Disassemble Pathologic script .bin files

positional arguments:
  input                 Input .bin file or directory

options:
  -o, --output          Output .asm file or directory
  --batch               Process all .bin in directory
  --hd                  HD version format
  -v, --verbose         Print to stdout
```

### decompile.py

```
usage: decompile.py [-h] [-o OUTPUT] [--batch] [--hd] [input]

Decompile Pathologic script .bin to C

positional arguments:
  input                 Input .bin file or directory

options:
  -o, --output          Output .c file or directory
  --batch               Process all .bin in directory
  --hd                  HD version format
```

### compile.py

```
usage: compile.py [-h] [-o OUTPUT] [--batch] [input]

Compile Pathologic script C to ASM

positional arguments:
  input                 Input .c file or directory

options:
  -o, --output          Output .asm file or directory
  --batch               Process directory
```

### asm.py

```
usage: asm.py [-h] [-o OUTPUT] [--batch] [--hd] [input]

Assemble Pathologic script .asm to .bin

positional arguments:
  input                 Input .asm file or directory

options:
  -o, --output          Output .bin file or directory
  --batch               Process all .asm in directory
  --hd                  HD version format
```
