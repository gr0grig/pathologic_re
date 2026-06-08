# `.map` — World-Map UI Bitmap

- **Archive**: `Scenes.vfs` (1 file: `city.map`).
- **Reader**: `CWorldMap::LoadData(IEngine *, const char *pszFileName)` —
  `Game/Game/WorldMap.cpp:680`.
- **Owning interface**: `IWorldMap` (`Game/Game/IWorldMap.h`).
- **Referenced from**: `<Map FileName="city.map"/>` inside an
  [`.osc`](osc.md).

---

## 1. Purpose

`.map` is the **UI world map** the player opens with the in-game map key.
It carries:

- The polygonal **region grid** (so the UI can highlight quarters of the
  city — see `Regions FileName="regions.xml"/>` in
  [world_xml.md](world_xml.md)).
- A name reference to a **background texture** (the painted map image,
  found as a [`.tex`](tex.md) in `Textures.vfs`).
- A per-pixel **object index map** so clicking on the map identifies
  which actor/region was clicked.
- An object table — pickable items / fast-travel destinations.
- Default view position & zoom for the UI camera.

`Scenes.vfs/city.map` is the only one shipped because the alpha has one
outdoor scene (`city.osc`) and indoor scenes do not use a UI map.

---

## 2. On-disk layout

The file is split into two regions: an uncompressed **PlaneGrid prefix**
followed by a **zlib-compressed payload**.

```
+----------------------------------------+
| PlaneGrid (uncompressed, var size)     |   see 2.1
+----------------------------------------+
| u32  uncompressedPayloadSize           |   CZipReader header
| deflate stream                         |   contents see 2.2
+----------------------------------------+
```

### 2.1 PlaneGrid (region polygon mesh)

Created by `IFactory::CreatePlaneGrid(const char *pszData)`. The
implementation in `Game/Engine/PlaneGrid.cpp` parses the byte stream
in-place and advances a pointer that the caller skips past:

```cpp
const char *pszData = reader.GetPointer();
m_pRegions.reset(g_factory->CreatePlaneGrid(pszData));
reader.Skip(pszData - reader.GetPointer());
```

The PlaneGrid is essentially a 2-D triangulation grouped into named
**regions**. Empirical layout (verified against `city.map`'s first 16
bytes `10 00 00 00 02 00 00 00 08 00 00 00 …`):

```
u32  regionCount       // 0x10 = 16 regions in city.map
u32  ??                // 0x02 — probably a version or flags
u32  vertexCount       // 0x08 — start of the shared vertex pool
CVector2[vertexCount]  // 8 bytes each (x, y) in world units

Per region:
  u32   triangleCount
  TRI[] triangleCount   // each tri = 3 vertex indices, possibly u16 or u32
  …
```

The exact per-region sub-record layout is encapsulated inside
`CreatePlaneGrid`'s implementation (`PlaneGrid.cpp` / `PlaneGrid.h`) and
is not exposed in the reader code above. Consumers only need:

- `m_pRegions->GetRegionCount()` — number of regions.
- `m_pRegions->GetTriangleCount()` — total triangles across all regions.
- `m_pRegions->EnumTriangles(ITriangleEnum*)` — iterate `(NewRegion(i),
  Triangle(p1, p2, p3) × N)` callbacks.

The triangulation is **only used for hit-testing and region
highlighting**. The visible map background is a separate texture (next
section).

### 2.2 Compressed payload

After `CreatePlaneGrid` advances past the PlaneGrid block, the rest is
wrapped in `CZipReader<CStringReader>` and contains:

```
u32       m_ulTexWidth        // pixel width of the background texture
u32       m_ulTexHeight       // pixel height
CEString  textureName         // name of the .tex / .png to load
                              // (e.g. "city_map.tex")
u16[m_ulTexWidth * m_ulTexHeight]  m_pObjMap
                              // per-pixel object lookup (0 = none)
f32       m_vViewPos.x        // default UI camera centre, in texture-px
f32       m_vViewPos.y
f32       m_fZoom             // default UI zoom factor
u32       m_ulObjCount        // number of clickable objects
OBJECT_DATA[m_ulObjCount]     // fixed-size POD (id, world position, label id…)
```

The `m_pObjMap` is the most distinctive field: a 16-bit grid the same
size as the map texture, where each pixel carries the object index that
would be selected if the player clicked there. Index 0 = "no object".
This shifts the entire pick-test to an O(1) texture lookup.

`OBJECT_DATA` is a packed C struct read with `ReadArray`, so it is a raw
`memcpy`. Its layout is in `WorldMap.h` and includes (at minimum) a
world-space position, a region index, and the string ID for the object
label (resolved via `IStringDatabase` — see
[dat_strings.md](dat_strings.md)).

---

## 3. Compression

The leading PlaneGrid block is **not** compressed (it's read in-place).
The payload from `m_ulTexWidth` onward **is** zlib-compressed (`78 DA …`)
inside the `CZipReader` wrapper. See [README.md §Conventions](README.md).

---

## 4. Related assets

- The textured background and the object icons live in
  `Textures.vfs` (typically `<name>.tex` — see [tex.md](tex.md)).
- The polygonal regions are referenced symbolically by
  `World.vfs/regions.xml` (see [world_xml.md](world_xml.md)), which
  carries region **names** and **string-ID labels**.
- The map is loaded lazily on first UI open by
  `CUIMapContext` (`Game/Game/UIMapContext.cpp`).

---

## 5. Caveat

The PlaneGrid section's byte-level layout is **partly inferred** because
`CreatePlaneGrid` parses it from a `const char *&` and is wrapped in the
`Game/Engine/PlaneGrid.cpp` private file — only the leading three u32s
were verified empirically. Add a hex-dump pass over `city.map` against
`PlaneGrid.cpp` if you need bit-exact offsets.
