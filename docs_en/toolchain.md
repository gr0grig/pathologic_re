# Asset-Build Toolchain

The Pathologic 2005 source tree ships **six command-line tools** that
together turn raw editor output into the `.vfs` archives the engine
loads. All live under `SRC/PlagueCity/tools/` and link against the same
engine support libraries as the runtime.

| Tool        | Source                       | Role                                                            |
|-------------|------------------------------|------------------------------------------------------------------|
| `smake.exe` | `tools/smake/smake.cpp`      | Top-level build orchestrator (reads `.smk` Makefile-like jobs)   |
| `pkutil.exe`| `tools/pkutil/pkutil.cpp`    | VFS archive packer / lister                                      |
| `scomp.exe` | `tools/scomp/scomp.cpp`      | PathologicScript compiler (`.sc` → `.bin`)                       |
| `sbuild.exe`| `tools/sbuild/sbuild.cpp`    | Build-script / variable evaluator (used internally by smake)     |
| `gdpconv.exe`| `tools/gdpconv/gdpconv.cpp` | Geometry converter (`.gdp` editor file → `.mesh` runtime file)   |
| `tile.exe`  | `tools/tile/`                | Terrain / tile-set builder (lightmap baking, mesh splitting)     |
| `FontGen.exe`| `tools/FontGen/`            | Bitmap font generator (TTF → `.ft`)                              |
| `FontGenNew/`| `tools/FontGenNew/`         | Newer C#/CLR rewrite of FontGen (same output format)             |

Two helpers (build-time, not in this list) live alongside:
- `LemonParser.exe` — pre-built Lemon LALR parser-generator binary
  (compiles `parser.y` into a parser table for `sbuild` and `scomp`).
- `lempar.c` — the Lemon parser template.

---

## 1. `smake` — top-level orchestrator

A miniature `make` clone. Reads an XML-style "smakefile" that
enumerates source files, target archives, and the tool to run on each.
The asset pipeline of `make/pak.xml` is consumed by `smake` to build
all VFS archives in one pass.

### Command line

```
smake <smakefile>
```

### Output

For each target it knows about, runs the named tool with the named
arguments and writes the output to the configured location. Tracks
file timestamps to skip up-to-date targets.

Key support files:
- `tools/smake/MakeList.cpp` — dependency-graph builder.
- `tools/smake/SimpleXML.cpp` — the XML parser (same one the game uses;
  shared via copy).
- `tools/smake/D3DXInclude.cpp` — handles `#include` resolution for
  HLSL shader builds.

---

## 2. `pkutil` — VFS packer

Fully documented at [vfs_format.md §6](vfs_format.md). Brief:

```
pkutil c <archive.vfs> <source_dir> [pattern]   # create, strict name check
pkutil f <archive.vfs> <source_dir> [pattern]   # create, force (warn on bad names)
pkutil l <archive.vfs>                          # list contents
```

Source files in `tools/pkutil/`:
- `pkutil.cpp` — CLI dispatch.
- `PakFile.cpp` / `PakDirectory.cpp` — directory tree builder + writer.
  Mirror the runtime reader's expectations exactly
  ([vfs_format.md](vfs_format.md)).

Driven by `make/pak.xml` for the 10 archives shipped with the alpha
(Actors, Fonts, Geometries, …).

---

## 3. `scomp` — script compiler

Compiles PathologicScript source (`.sc`) into the `.bin` bytecode the
engine VM runs. Details on the language are in
[sc_language.md](sc_language.md); the resulting `.bin` layout is
[bin_format.md](bin_format.md).

### Command line

```
scomp <source.sc> [-o <out.bin>] [-d <include_dir>]…
```

### Pipeline

```
.sc → preprocessor (#include) → lexer → Lemon-generated parser → AST
    → semantic analysis (declarations, types, scopes)
    → bytecode emitter → .bin
```

Source files in `tools/scomp/`:
- `scomp.cpp` — CLI driver.
- `BuildInclude.cpp` — `#include` path resolution.
- `parser.y` (in `sbuild/`, shared) — Lemon grammar for the
  language.

The compiler's source tree is fairly small (~1500 lines) — most of the
language semantics live in the runtime VM, not in the compiler.

---

## 4. `sbuild` — build-script evaluator

A general-purpose preprocessor and expression evaluator used by other
tools when they need configurable build rules. Has its own little
language with variables, conditionals, and arithmetic; the Lemon
grammar is in `tools/sbuild/parser.y`.

Components:
- `sbuild.cpp` — CLI.
- `Program.cpp` — top-level interpreter loop.
- `Expression.cpp` — expression node evaluator.
- `Variables.cpp` — `$name` substitution.
- `IOperator.cpp` — built-in operators (`+`, `==`, string concat).
- `DataPool.cpp` — string interning + symbol table.

Used both internally by `scomp` (to evaluate `#if` expressions during
preprocessing) and as a standalone tool in `pak.xml` to construct
file lists.

---

## 5. `gdpconv` — geometry converter

Reads `.gdp` files produced by the level editor (`GameEditor/`) and
emits the engine's `.mesh` files. The `.gdp` format is the
**editor-side** representation (with editor metadata: groups, named
materials, snap planes, lightmap UVs); `gdpconv` strips the editor
data, packs the vertex/index buffers, computes the bounding box and
radius, and outputs the format documented in
[`formats/mesh.md`](formats/mesh.md).

### Command line

```
gdpconv <source.gdp> <output.mesh>
```

Key file:
- `gdpconv/gdpconv.cpp` — main conversion routine.
- `gdpconv/FakeD3D.cpp` — provides a stub D3D device so that
  D3DX-based geometry transforms work without a real GPU.

For animated meshes (`.mms`), there is a separate path (not in
`gdpconv` — see the LifeStudio HEAD plugin chain) that produces the
zlib-wrapped skeleton+keyframe blob described in
[animation.md](animation.md).

---

## 6. `tile` — terrain / tile builder

Handles the chunked outdoor terrain (the city's "Land" actor). Takes
a heightmap + texture tile-set and produces:
- A `Land` static mesh.
- A 2D BSP / grid for per-tile collision.
- Lightmap textures via offline shadowmap baking.

Not commonly invoked by content authors after the city itself was
baked — but the source is shipped for reproducibility.

---

## 7. `FontGen` / `FontGenNew` — bitmap-font generator

Takes a system TrueType font (via FreeType) and renders every needed
glyph into a packed `.ft` file (see
[`formats/ft.md`](formats/ft.md)).

- `FontGen/` — original MFC/Win32 GUI version (`FontGen.cpp`,
  `FontDataBase.cpp`, `FontRendererFT.cpp`).
- `FontGenNew/` — newer C# / CLR rewrite (`FontGenCore/FontFace.cpp`).
  Same output bit-for-bit.

---

## 8. Typical end-to-end flow

```
GameEditor → .gdp / .lsh / .png / .sc → smake (runs:)
   ├ gdpconv  ──→ .mesh
   ├ scomp    ──→ .bin
   ├ FontGen  ──→ .ft
   ├ tile     ──→ land/.mesh + lightmaps
   └ ...
… plus copies of .png/.tga/.tex/.ogg ...
       │
       ▼
   pkutil c → Actors.vfs / Geometries.vfs / Scripts.vfs / Sounds.vfs /
              Textures.vfs / Fonts.vfs / Scenes.vfs / Strings.vfs /
              UI.vfs / World.vfs
       │
       ▼
   alpha/data/*.vfs  →  ready to ship
```

`make/pak.xml` orchestrates which intermediate goes into which archive
— the file is the **source of truth** for the asset taxonomy that
[`formats/README.md`](formats/README.md) documents on the runtime side.

---

## 9. Build prerequisites

All tools statically link the engine's support libraries (STLport,
boost, custom-allocator infrastructure). They target Windows
**x86-32 only**; building under modern 64-bit toolchains requires
porting STLport.

The `Intel.CPP.Compiler.v7.1/` directory under `SRC/` carries the
exact compiler the original team used. Visual C++ 2005 (8.0) is also
compatible.

---

## 10. Cross-references

- VFS container format the packer writes:
  [vfs_format.md](vfs_format.md).
- Script bytecode that `scomp` emits:
  [bin_format.md](bin_format.md).
- Static mesh format `gdpconv` emits:
  [`formats/mesh.md`](formats/mesh.md).
- Bitmap font format FontGen emits:
  [`formats/ft.md`](formats/ft.md).
- All other shipped archive contents:
  [`formats/README.md`](formats/README.md).
