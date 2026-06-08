# `.bin` — Compiled PathologicScript Bytecode

- **Archive**: `Scripts.vfs` (373 files).
- **Examples**: `world_danko.bin`, `cs_play_all.bin`,
  `item_burah_serum.bin`, `weather.bin`, `music.bin`,
  `ui_inventory.bin`, `door.bin`.
- **Reader**: `CScript::Load(...)` —
  `Game/Engine/ScriptManager.cpp` → `Game/Engine/Script.cpp`.
- **VM**: documented at length in [`../vm.md`](../vm.md) and
  [`../bin_format.md`](../bin_format.md).

---

## 1. Position in this document set

The PathologicScript bytecode format is the **most thoroughly
reverse-engineered** asset in this project: there is a full round-
tripping toolchain (disassembler → C-like decompiler → assembler →
compiler), all 373 alpha scripts pass a byte-perfect round-trip test,
and the byte layout, opcode set, and runtime semantics are documented
in dedicated documents in this directory's parent:

- [`../bin_format.md`](../bin_format.md) — byte layout (header,
  string pool, function table, code, debug info).
- [`../opcodes.md`](../opcodes.md) — every opcode and its semantics.
- [`../vm.md`](../vm.md) — VM state, stack, dispatch loop.
- [`../tasks.md`](../tasks.md) — task model (the engine's coroutines).
- [`../script_api.md`](../script_api.md) — host API the bytecode can
  call into.

This document is the *index page* for the asset itself. **For the
on-disk format, read [`../bin_format.md`](../bin_format.md).**

---

## 2. Quick recap of the on-disk layout

```
+----------------------+
| Header (signature,   |
|  version)            |
+----------------------+
| String pool          |   (UTF-16LE & ASCII, mixed)
+----------------------+
| Function table       |   (name → bytecode offset)
+----------------------+
| Bytecode             |   one stream of variable-width instructions
+----------------------+
| Optional debug info  |
+----------------------+
```

No compression. The file is loaded as a single memory-mapped block.

---

## 3. The Void variant

The Void shares the **toolchain** but uses a **different opcode set**
and a different `.bin` container — see
[`../bin_format.md`](../bin_format.md) "Void section" for that variant.
The alpha build of *Pathologic* uses only the PathologicScript flavour.

The 972-script-byte-identical round-trip stats live in the project
README and in this directory's parent README.

---

## 4. Cross-references

- Master byte-layout document: [`../bin_format.md`](../bin_format.md).
- Opcodes: [`../opcodes.md`](../opcodes.md).
- VM model: [`../vm.md`](../vm.md).
- Host-callable API: [`../script_api.md`](../script_api.md).
- Tools to assemble/disassemble: `pathologic_re/parser/`
  (disasm.py / asm.py / decompile.py / compile.py).
- Where `.bin` files are referenced from the data side:
  - [actor_xml.md](actor_xml.md) `<Script>`
  - [ui_xml.md](ui_xml.md) `<form script="…">` and `<cursor
    script="…">`
  - [world_xml.md](world_xml.md) `<Script>`, `<Weather><Script>`,
    `<Music><Script>`.
