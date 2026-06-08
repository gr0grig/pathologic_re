# `.mesh` — Static Triangle Geometry

- **Archive**: `Geometries.vfs` (4292 files; the bulk of the archive)
- **Examples**: `leaves01.mesh`, `Bench01.mesh`, `iboiny.mesh`,
  `d2q01_ithouse1_table3.mesh`
- **Reader**: `CRawGeometry::CRawGeometry(CRenderer *, CStringReader &)` —
  `Game/Renderers/D3D9/RawGeometry.cpp:15`
- **Owning interface**: `IGeometryStatic` (created indirectly through
  `CRenderer::TextureCreate` callbacks).

---

## 1. On-disk layout

```
+------------------------+
| u32  m_ulNVertices     |   number of vertices N
+------------------------+
| VERTEX[N]              |   20 bytes each (see 1.1)
+------------------------+
| u32  m_ulNFaces        |   number of triangles M
+------------------------+
| u16  indices[M * 3]    |   triangle list; 3 indices per face
+------------------------+
| CEString textureName   |   length-prefixed ASCII (1- or 2-byte len)
+------------------------+
| f32  m_fRadius         |   bounding-sphere radius (Y-axis-aligned)
| f32  m_fMinY           |   minimum Y of any vertex (object space)
| f32  m_fMaxY           |   maximum Y of any vertex
+------------------------+
| CBox3D m_Box           |   24 bytes (CVector m_vCenter + CVector m_vExtent)
+------------------------+
```

The constructor reads the entire block sequentially with `CStringReader`
overloads and a single `Read(&m_Box, sizeof(CBox3D))` raw struct copy at the
end (`RawGeometry.cpp:32`).

### 1.1 `VERTEX` (20 bytes)

```
offset  size  type     field
   0    12    f32[3]   position (x, y, z) — object space
  12     8    f32[2]   texcoord (u, v)
```

Declared as a Direct3D 9 vertex declaration in `RawGeometry.cpp:5`:

```cpp
{0,  0, D3DDECLTYPE_FLOAT3, D3DDECLMETHOD_DEFAULT, D3DDECLUSAGE_POSITION, 0},
{0, 12, D3DDECLTYPE_FLOAT2, D3DDECLMETHOD_DEFAULT, D3DDECLUSAGE_TEXCOORD, 0},
```

There are **no per-vertex normals or colors** — the mesh is a flat
texture-mapped triangle list. Lighting comes from the surrounding light grid
and corona system, not from the vertex stream.

### 1.2 Indices

Plain triangle-list, 16-bit (u16) per index. Maximum addressable vertex count
is therefore 65 535. No degenerate-strip framing.

### 1.3 Texture name

Referred-to texture is looked up through the renderer's texture-mapper
(`ITextureMapper`), which resolves the unqualified name against `Textures.vfs`
and chooses the right `.tex` / `.png` / `.tga` variant. See
[tex.md](tex.md) and [png_tga.md](png_tga.md).

### 1.4 Bounding data

Three independent culling hints:
- `m_fRadius` — squared-distance bounding sphere centred on the geometry
  origin. Used by the LOD/culling system.
- `m_fMinY` / `m_fMaxY` — vertical extents used for ground-clamped objects
  (grass, doors).
- `m_Box` — `CBox3D` (`(centre, extent)` pair, 32 bytes on disk; see
  [README.md §Conventions](README.md)). Used for OBB intersection tests.

These are pre-computed at build time and **must** match the vertex data:
the engine does not recompute them at load.

---

## 2. Compression

**No compression**. `.mesh` files in `Geometries.vfs` are raw binary.
They are loaded via `IMMLoadObject::GetMemoryPointer()` (`VFS.dll`
memory-mapped view) and consumed in-place. See [../vfs_format.md §5.2](../vfs_format.md)
for the small-file caching policy.

There is a **separate** zlib-compressed wrapper used by the
`CGeometryDetailedObject` system that *embeds* multiple `.mesh` payloads
(grass clusters, fences, leaf bunches). It is read by
`Game/Renderers/D3D9/GeometryDetailedObject.cpp:780` and lives inside
`Geometries.vfs` alongside the plain `.mesh` files. Short version: open a
`CZipReader<CStringReader>` on the file, then read

```
u32      m_ulTypeCount
CEString geomName[m_ulTypeCount]                  // each is a .mesh basename
f32      m_vBoxMin.x, m_vBoxMin.y                  // 2D world bbox
u32      ulWidth, ulHeight                         // chunk grid extent
f32      m_vSize.x, m_vSize.y                      // chunk cell size
f32      m_fCenterY, m_fExtentY                    // Y extent
u8       m_ulNLights
LIGHT_INFO[m_ulNLights]
GCHUNK[ulHeight][ulWidth]                          // grass/leaf chunks
```

Each `<name>` is then resolved through the normal `.mesh` path
documented in this file. The wrapper is itself referenced from
detailed-object placement aliases in [actor_placement.md §4](actor_placement.md).

---

## 3. Empirical example

`Geometries.vfs/iboiny.mesh`, first 32 bytes:

```
00000000: 0100 0000 0200 0080 bf00 0000 0000 0000  ................
00000010: 000e 9c8e c502 0000 0000 0000 0080 0000  ................
```

Decoded:

| Offset | Bytes               | Field            | Value                   |
|-------:|---------------------|------------------|-------------------------|
| 0x00   | `01 00 00 00`       | `m_ulNVertices`  | 1                       |
| 0x04   | `02 00 00 80 bf …`  | `VERTEX[0]`      | pos+uv (20 bytes)       |
| 0x18   | …                   | `m_ulNFaces`     | (next u32)              |

A larger asset such as `Bench01.mesh` follows the same layout with thousands
of vertices.

---

## 4. Cross-references

- Wrapper for detail-object clusters: see the zlib-wrapped header read in
  `Game/Renderers/D3D9/GeometryDetailedObject.cpp:780` and the placement
  files in [actor_placement.md](actor_placement.md).
- The mesh name (without extension) is referenced from
  [actor_placement.md](actor_placement.md) (each placed `ACTOR_STATIC`
  carries the `<name>.mesh` string).
- The `.lsh` head models supersede `.mesh` for character faces — see
  [lsh.md](lsh.md).
