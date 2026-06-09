# Pathologic 2005 — Reverse-Engineering Documentation (English)

Technical documentation for the engine and content pipeline of
**Pathologic** (2005 / Classic HD) and **The Void**. Material is
derived from the open `SRC/PlagueCity/` source tree shipped alongside
the game and from IDA-based reverse-engineering of the runtime DLLs.

The Russian translation lives in `../docs_ru/`.

---

## Reading order

If you are new to the project, read in this order:

1. **[engine_architecture.md](engine_architecture.md)** — Module map,
   COM-style interface model, factory entry point.
2. **[vfs_format.md](vfs_format.md)** — The `.vfs` archive container.
3. **[formats/README.md](formats/README.md)** — Index of every file
   format inside the archives.
4. **[bin_format.md](bin_format.md)**, **[vm.md](vm.md)**,
   **[opcodes.md](opcodes.md)** — PathologicScript bytecode and VM.
5. **[toolchain.md](toolchain.md)** — How to build the archives back
   from source.

---

## Engine internals

| Document                                          | Topic                                           |
|---------------------------------------------------|-------------------------------------------------|
| [engine_architecture.md](engine_architecture.md)   | Module layout, `IGeneric` / `IEngineFactory`.   |
| [save_format.md](save_format.md)                  | Save-game serialisation format.                  |
| [streaming.md](streaming.md)                      | Async I/O + asset streaming model.               |
| [lighting.md](lighting.md)                        | Static / dynamic lights, coronas, ambient.       |
| [render_techniques.md](render_techniques.md)      | D3D9 technique catalogue + shaders.              |
| [animation.md](animation.md)                      | Bone tracks, skinned meshes, blend curves.        |
| [ai_tasks.md](ai_tasks.md)                        | TAB / CAB / APMotion AI controllers.             |
| [particle_system.md](particle_system.md)          | 54-float particle parameter block.                |
| [inventory.md](inventory.md)                      | Items, weapons, containers.                      |
| [dialogue.md](dialogue.md)                        | Conversation, diary, world-map UI flow.           |

## Asset / file formats

See [formats/README.md](formats/README.md) for the master index. Brief
list:

- **VFS container**: [vfs_format.md](vfs_format.md).
- **Geometry & animation**: [formats/mesh.md](formats/mesh.md),
  [formats/lsh.md](formats/lsh.md),
  [formats/hand.md](formats/hand.md),
  [formats/mma.md](formats/mma.md),
  [formats/mms.md](formats/mms.md),
  [formats/meshdata_octtree.md](formats/meshdata_octtree.md).
- **Scenes**: [formats/isc.md](formats/isc.md),
  [formats/osc.md](formats/osc.md),
  [formats/pfd.md](formats/pfd.md),
  [formats/map.md](formats/map.md).
- **Actors**: [formats/actor_xml.md](formats/actor_xml.md),
  [formats/actor_placement.md](formats/actor_placement.md).
- **Strings / fonts / UI**:
  [formats/dat_strings.md](formats/dat_strings.md),
  [formats/txt_strings.md](formats/txt_strings.md),
  [formats/ft.md](formats/ft.md),
  [formats/ui_xml.md](formats/ui_xml.md),
  [formats/world_xml.md](formats/world_xml.md).
- **Textures**: [formats/tex.md](formats/tex.md),
  [formats/png_tga.md](formats/png_tga.md),
  [formats/bump.md](formats/bump.md),
  [formats/dat_water.md](formats/dat_water.md).
- **Audio**: [formats/ogg.md](formats/ogg.md).
- **Scripts** (bytecode): [formats/bin.md](formats/bin.md).

## Script subsystem (PathologicScript)

| Document                                | Topic                                                  |
|-----------------------------------------|--------------------------------------------------------|
| [sc_language.md](sc_language.md)         | Source-language reference (`.sc` / `.sci`).            |
| [bin_format.md](bin_format.md)           | Compiled `.bin` byte layout.                           |
| [opcodes.md](opcodes.md)                 | Every opcode and its semantics.                         |
| [vm.md](vm.md)                           | VM model: stack, dispatch, types.                       |
| [tasks.md](tasks.md)                     | Task / coroutine model.                                  |
| [events_2005.md](events_2005.md)         | Event ordinals (`OnUse`, `OnHit`, …).                   |
| [script_api.md](script_api.md)           | Host-callable API (`@`-functions).                       |
| [console_commands.md](console_commands.md) | In-game console commands.                              |
| [scripts_catalog.md](scripts_catalog.md) | Catalogue of all 373 shipped scripts.                   |
| [pipeline.md](pipeline.md)               | The reverse-engineering toolchain (asm/c round-trip).   |
| [sc_decompiler.md](sc_decompiler.md)     | Source-level (`.sc`) decompiler, verified byte-identical via real `scomp.exe`. |

## Tooling and edition differences

| Document                              | Topic                                              |
|---------------------------------------|----------------------------------------------------|
| [toolchain.md](toolchain.md)          | `smake` / `pkutil` / `scomp` / `sbuild` / `gdpconv` / `tile` / `FontGen`. |
| [editions_diff.md](editions_diff.md)  | Alpha vs HD vs Void — what differs.                  |

---

## How this documentation was made

- **Primary source**: `SRC/PlagueCity/` — the original 2005 C++ tree.
- **Cross-checks**: hex dumps of files extracted from `alpha/data/*.vfs`,
  IDA Pro analysis of the shipping `Engine.dll`, and the
  byte-identical round-trip status of the script toolchain.
- **Format**: every byte-level claim is annotated with the reader's
  `path:line`. Where a layout could only be inferred (closed-source
  SDK formats, partly-empirical structs), the document flags it.

---

## Status snapshot

- **VFS container** — fully documented.
- **22 file formats inside the archives** — fully documented.
- **373 alpha + 972 HD + 483 Void scripts** — 100 % byte-identical
  round-trip in `pathologic_re/parser/` and `disasm/void_re/`.
- **Save format** — fully documented at structural level (factory
  IDs, primitive layout, top-level sequence).
- **Engine architecture** — `IGeneric` model, factory entrypoint,
  subsystems, file-system shell — all documented.
- **AI tasks** — 13 TAB classes + CAB + APMotion documented.
- **Render techniques** — 28 technique classes + shader catalogue.
- **Bone animation** — full `.mms` byte layout, keyframe model,
  skinning pipeline.
- **Particle system** — 54-float parameter block fully decoded.
- **Lighting, inventory, dialogue, streaming** — covered at
  systems level.

## Cross-references outside this folder

- Russian docs: `../docs_ru/`.
- Reverse-engineering toolchain code: `../parser/`,
  `../sc_decompiler/`, `../examples/`.
- IDA `.bt` template: `../tools/AlphaPatScript.bt`.
- VM-state dump for IDA Pro: `../tools/dump_vm_state2.py`.
