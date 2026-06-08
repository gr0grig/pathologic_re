# Edition Differences: Alpha / HD / Void

Three shipping (or near-shipping) builds of the same engine are in
this source tree:

| Edition           | Build dir          | Engine variant                  | Scripts | Round-trip status                   |
|-------------------|--------------------|---------------------------------|--------:|-------------------------------------|
| **Alpha (2005)**  | `alpha/`           | Pathologic 2005 (`Engine.dll`)  | 373     | 373/373 byte-identical              |
| **Pathologic Classic HD** | `HD/`      | HD remaster (`Engine.dll`)      | 972     | 972/972 byte-identical (`compare_asm.py`) |
| **The Void**      | `VOID/`            | `GameModule.dll` — different VM | 483     | 483/483 byte-identical (no BFS filter) |

This document collects the format-level and toolchain-level
differences between them.

---

## 1. Same VFS container, same primitives

All three editions use the **same `.vfs` archive format**
([vfs_format.md](vfs_format.md)) — "LP1C" magic, same directory tree,
same length-prefixed strings. `pkutil` builds for all three from one
codebase.

All three use the same length-prefixed-string encoding for both
`CEString` (ASCII) and `CEStringW` (UTF-16) — see
[vfs_format.md §3.4](vfs_format.md).

---

## 2. Script bytecode differences

### 2.1 Alpha vs HD — opcode-table shift

The HD release adds **2 new opcodes** at positions 0x4D-0x4E:

| Opcode | Name      | Action                                       |
|--------|-----------|----------------------------------------------|
| 0x4D   | `CString` | Convert value on stack to char string         |
| 0x4E   | `CString2`| Variant with width parameter                  |

All opcodes that were at `>= 0x4D` in alpha shift by **+2** in HD.
`Call+` therefore appears at a different opcode value across the two
editions.

The assembler (`pathologic_re/parser/asm.py`) handles the split by:
- Setting the `0x8000` marker bit when emitting HD-only opcodes
  (`CString`, `CString2`) — they pass through without shifting.
- Re-applying the `+2` shift for all standard opcodes when the target
  is HD.

### 2.2 Alpha/HD vs Void — totally different VM

Void uses a **register-based VM** in `GameModule.dll` (IDA instance
`qut7`), with **80 opcodes** (0x00-0x4F, with 0x2C-0x2D unused). It
is **not** PathologicScript; the disassembler/assembler/decompiler
pair live in `disasm/void_re/` and are distinct programs.

| Feature             | Alpha / HD ("PathologicScript")           | Void ("gscript")                                        |
|---------------------|-------------------------------------------|---------------------------------------------------------|
| VM type             | Stack machine                              | Register machine (24-bit `reg` field per instruction)   |
| Opcode count        | ~ 78 (alpha) / ~ 80 (HD)                   | 80 (with 2 reserved)                                    |
| Instruction width   | Variable (1-byte op + operands)            | Fixed 4-byte header + 0-2 extra DWORDs                  |
| Stack slot          | One value                                  | 8 bytes: `value:4` + `type_tag:4`                       |
| Branch addressing   | Relative to instruction                    | Absolute from bytecode base                              |
| Strings             | Mostly UTF-16, ASCII for method names     | Mixed ASCII (`GetDotStr`) and UTF-16LE (`LoadString`)  |
| File container      | See [bin_format.md](bin_format.md)         | Separate format with explicit pool/func_table headers   |
| Round-trip tool     | `pathologic_re/parser/`                   | `disasm/void_re/`                                       |

See `disasm/void_re/opcodes.md` for the Void opcode reference. The
container differences are summarised below.

### 2.3 Void `.bin` container

```
[version:u32=0] [pool_size:u32] [pool: pool_size bytes]
[s1_size:u32]                          // globals count + byte-skip size
[s2_size:u32] [func_table: s2_size bytes]
[bc_size:u32]  [bytecode: bc_size bytes]
[sentinel:u32=-1] [remaining_size:u32]
[inline_str_count:u32] [inline_strs: UTF-16LE null-term]
[align to 4 relative to inline_str_count offset]
[patch_count:u32] [patches: 12B each (bc_off:u32, str_idx:u32, value:i32)]
```

The Void parser is `sub_10150860` in `GameModule.dll`. Patches in
Void are **debug info** (source file + line numbers), not code
modifications — completely different role from anything in
PathologicScript.

---

## 3. Scene / actor format

Identical between Alpha and HD (same `.isc`, `.osc`, noext
placement files, MeshData/OctTree pairs). Void uses a different
scene system entirely — `GameModule.dll` has its own world loader
(`sub_101E3450` handles `.sc` / `.bin` loads).

---

## 4. String database

Alpha and HD: identical `main.dat` format ([formats/dat_strings.md](formats/dat_strings.md)).
Localised strings shifted but the layout is binary-compatible.

Void: not yet documented in this tree; expected to differ.

---

## 5. Renderer

Alpha and HD share the D3D9 renderer + technique catalogue ([render_techniques.md](render_techniques.md)).
HD adds support for newer GPU caps and slightly different shader
defines but uses the same `.tex` / `.mesh` files.

Void: bigger rewrite — different shader set, different scene
graph, different LSHead integration. Still D3D9-era.

---

## 6. Decompiler pass differences

The PathologicScript pseudo-C decompiler
(`pathologic_re/parser/decompile.py` / `PathologicPseudoC.py`) runs
**~ 20 passes** on the AST:

```
WhileTrue → StructureIfGoto → FixLoopReturn → InlineConstants →
InlineExpressions → StripTrailingReturn → InlineNot → InlineIfCondition →
StructureIfGoto(2nd) → ElseToElseIf → IfElseChain → LoopBreak → ForToWhile →
RenameEventParams → RemoveUnusedDecls → MoveDecls → MergeDeclAssign →
CompoundAssign → StripRedundantParens → BracelessSingleIf →
RemoveEmptyForLoops → RemoveUnusedLabels
```

For HD/Void this same pipeline mostly works; Void's
`disasm/void_re/decompile.py` uses a **trivial 1-to-1 mapping**
because the register-VM bytecode is already linear.

---

## 7. .bin → .sc round-trip

For the 972 HD scripts, `pathologic_re/sc_decompiler/` attempts to
reproduce the original `.sc` source that scomp would compile back to
the exact `.bin`. Current status:

- 102 / 972 (10.5 %) byte-identical round-trips
  (Scripts_sc/ has the OK files).
- Bottleneck: `CInstructionMov`'s **swapped** VarOut/VarIn fields
  (relative to scomp bytecode) needed per-class handling — only
  plain MOV swaps, other Mov-family classes are normal.

The PathologicScript pseudo-C decompiler (working from .asm → .c)
is byte-perfect for all 373 alpha and 972 HD scripts already.

---

## 8. Toolchain reuse

`scomp`, `smake`, `sbuild`, `pkutil`, `gdpconv`, `tile`,
`FontGen` — all six tools come from the `SRC/PlagueCity/tools/`
source tree and target Alpha+HD. Void uses a separate (closed,
unshipped) compiler.

---

## 9. The Void's LifeStudio chain

Void ships the same `LifeStudioHeadAPIS.dll` for facial animation,
but its actor classes invoke it directly through a thinner wrapper
(no `CLSHead` go-between like PathologicScript has).

---

## 10. Cross-references

- PathologicScript `.bin` layout: [bin_format.md](bin_format.md).
- VM: [vm.md](vm.md). Opcodes: [opcodes.md](opcodes.md).
- Void disassembler/compiler: `disasm/void_re/` source tree.
- Void opcode reference: `disasm/void_re/opcodes.md`.
- Round-trip test scripts: `pathologic_re/parser/batch_test_2005.py`,
  `HD/batch_hd.py`.
