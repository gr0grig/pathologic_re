# Pathologic 2005 / The Void — VFS Asset File Formats

Per-format technical documentation of every file extension that ships inside
the game's `.vfs` archives (`alpha/data/*.vfs`). The VFS container itself is
described in [../vfs_format.md](../vfs_format.md); these documents cover what
is **inside** each archive entry.

Sources cross-referenced throughout:
- Engine readers: `SRC/PlagueCity/Game/Engine/` and `SRC/PlagueCity/Game/Game/`
- D3D9 renderer readers: `SRC/PlagueCity/Game/Renderers/D3D9/`
- Sound: `SRC/PlagueCity/Game/Sound/`
- LifeStudio HEAD SDK: `SRC/LifeStudio HEAD 2.5 SDK/`

---

## Index by archive

| Archive          | Extension(s)                 | Count | Document(s) |
|------------------|------------------------------|------:|-------------|
| `Actors.vfs`     | (no extension)               | 4524  | [actor_placement.md](actor_placement.md) |
| `Actors.vfs`     | `.xml`                       | 484   | [actor_xml.md](actor_xml.md) |
| `Fonts.vfs`      | `.ft`                        | 10    | [ft.md](ft.md) |
| `Geometries.vfs` | `.mesh`                      | 4292  | [mesh.md](mesh.md) |
| `Geometries.vfs` | `.lsh`                       | 29    | [lsh.md](lsh.md) |
| `Geometries.vfs` | `.hand`                      | 1     | [hand.md](hand.md) |
| `Geometries.vfs` | `.mma`                       | 1     | [mma.md](mma.md) |
| `Geometries.vfs` | `.mms`                       | 1     | [mms.md](mms.md) |
| `Scenes.vfs`     | `.isc`                       | 796   | [isc.md](isc.md) |
| `Scenes.vfs`     | `.osc`                       | 2     | [osc.md](osc.md) |
| `Scenes.vfs`     | `.pfd`                       | 21    | [pfd.md](pfd.md) |
| `Scenes.vfs`     | `.map`                       | 1     | [map.md](map.md) |
| `Scripts.vfs`    | `.bin`                       | 373   | [bin.md](bin.md) (script bytecode — see also [../bin_format.md](../bin_format.md)) |
| `Sounds.vfs`     | `.ogg`                       | 298   | [ogg.md](ogg.md) |
| `Strings.vfs`    | `.dat` (`main.dat`)          | 1     | [dat_strings.md](dat_strings.md) |
| `Strings.vfs`    | `.txt`                       | 2     | [txt_strings.md](txt_strings.md) |
| `Textures.vfs`   | `.tex`                       | 904   | [tex.md](tex.md) |
| `Textures.vfs`   | `.png`                       | 181   | [png_tga.md](png_tga.md) |
| `Textures.vfs`   | `.tga`                       | 13    | [png_tga.md](png_tga.md) |
| `Textures.vfs`   | `.bump`                      | 1     | [bump.md](bump.md) |
| `Textures.vfs`   | `.dat` (`water.dat`)         | 1     | [dat_water.md](dat_water.md) |
| `UI.vfs`         | `.xml`                       | 17    | [ui_xml.md](ui_xml.md) |
| `World.vfs`      | `.xml`                       | 5     | [world_xml.md](world_xml.md) |

---

## Index by category

### Geometry & animation
- [mesh.md](mesh.md) — static triangle meshes (`.mesh`)
- [lsh.md](lsh.md) — LifeStudio HEAD facial models (`.lsh`)
- [hand.md](hand.md) — hand attachment model (`.hand`)
- [mma.md](mma.md) — morph-target animation (`.mma`)
- [mms.md](mms.md) — morph-target sequencer (`.mms`)

### Scenes & navigation
- [isc.md](isc.md) — indoor scene definition (`.isc`)
- [osc.md](osc.md) — outdoor scene definition (`.osc`)
- [pfd.md](pfd.md) — pathfinding data (`.pfd`)
- [map.md](map.md) — world-map UI bitmap (`.map`)

### Actors
- [actor_xml.md](actor_xml.md) — actor "Extras" XML config (in `Actors.vfs`)
- [actor_placement.md](actor_placement.md) — actor instance binary (`Actors.vfs/<name>`)

### Strings, fonts, UI
- [dat_strings.md](dat_strings.md) — binary string database (`Strings.vfs/main.dat`)
- [txt_strings.md](txt_strings.md) — UTF-16 BOM text strings (`Strings.vfs/*.txt`)
- [ft.md](ft.md) — bitmap font (`.ft`)
- [ui_xml.md](ui_xml.md) — UI dialog/widget definitions (`UI.vfs`)
- [world_xml.md](world_xml.md) — world-level XML (`World.vfs`)

### Textures
- [tex.md](tex.md) — engine texture (`.tex`)
- [png_tga.md](png_tga.md) — standard PNG/TGA assets
- [bump.md](bump.md) — bump heightfield (`.bump`)
- [dat_water.md](dat_water.md) — animated water normal-map frames (`water.dat`)

### Audio & scripts
- [ogg.md](ogg.md) — Ogg/Vorbis audio (`.ogg`)
- [bin.md](bin.md) — PathologicScript bytecode (`.bin`)

---

## Conventions used in these documents

All format docs follow the same layout:
1. **Locator**: archive name + sample file + reader source path.
2. **Byte layout**: little-endian, types listed as `u8 / u16 / u32 / i32 /
   f32 / wchar (16-bit)`; structures named after the engine class.
3. **Strings**: unless noted, strings use the engine's `CEString` /
   `CEStringW` length-prefix:
   - byte 0 < 0x80 → length = byte 0 (1 .. 127).
   - byte 0 ≥ 0x80 → length = (byte 0 & 0x7F) | (byte 1 << 7) (0 .. 32767).
   - ASCII (`CEString`) or UTF-16LE (`CEStringW`) follows; **no NUL terminator**.
   This is exactly the VFS directory name encoding; see
   [../vfs_format.md §3.4](../vfs_format.md).
4. **Compression**: where present, the engine uses zlib via the
   `CZipReader<TBaseReader>` template (`Game/Common/ZipReader.h`). The on-disk
   prefix is a `u32` *uncompressed* size, followed by a raw deflate stream
   (`78 DA …` header).
5. **Coordinate system**: right-handed, Y up. `CVector` = 3×`f32`, `CBox3D` =
   two consecutive `CVector`s (centre, then half-extent — 24 bytes), `COBB2D`
   = 4×`f32` (centre.xy + extent.xy = 16 bytes), `COBB3D` = `CBox3D` + a
   `CMatrix3` rotation (24 + 36 = 60 bytes).

Verified empirically by hex-dumping example files extracted from
`alpha/data/*.vfs`; cross-referenced against the engine's reader code in
`SRC/PlagueCity/`.
