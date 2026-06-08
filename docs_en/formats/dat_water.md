# `water.dat` — Animated Water Normal-Map Frames

- **Archive**: `Textures.vfs` (1 file: `water.dat`, 741 388 bytes).
- **Reader**: `CGeometryWaterData::CGeometryWaterData(CRenderer *,
  TWaterGeometries::iterator, CStringReader &)` —
  `Game/Renderers/D3D9/GeometryWaterData.cpp:4`.
- **Loader entry**: `CRenderer::CreateWaterGeometry()`
  (`Renderer.cpp:4571`).

---

## 1. Purpose

`water.dat` is a **cyclic stack of height-field frames** that the engine
converts into a stack of normal-map textures at load time. The rendered
water surface (`IGeometryWater`) samples the current frame each tick to
get its rippling normals. It is the only `.dat` file in
`Textures.vfs` and is unrelated to `Strings.vfs/main.dat`
(see [dat_strings.md](dat_strings.md)).

---

## 2. On-disk layout

```
+----------------------------+
| u32  m_ulSeq               |   number of frames in the cycle
| u32  m_ulWidth             |   per-frame width  in pixels
| u32  m_ulHeight            |   per-frame height in pixels
+----------------------------+
| u8[m_ulSeq][m_ulHeight][m_ulWidth]   raw heightfield frames
+----------------------------+
```

Each byte is a height value in [0, 255]. No padding, no per-frame
header. The reader consumes the entire stream in order
(`GeometryWaterData.cpp:9-11`):

```cpp
reader >> m_ulSeq >> m_ulWidth >> m_ulHeight;
for (i = 0; i < m_ulSeq; ++i, reader.Skip(m_ulWidth * m_ulHeight)) {
    …convert this frame to a normal-map…
}
```

For the shipping file the dimensions imply roughly
`(741 388 − 12) / (W·H·Seq)`-byte budget per frame. The exact W×H×Seq
triple is encoded in the first 12 bytes; you can read them directly to
get the precise count.

---

## 3. Height-to-normal conversion (load-time)

For each pixel `(x, y)` of a frame, the loader runs `CALC_WATER`
(`GeometryWaterData.cpp:51`):

```c
float nx = (long)height[x-1, y] - (long)height[x+1, y];   // ∂h/∂x
float ny = (long)height[x, y-1] - (long)height[x, y+1];   // ∂h/∂y
float l  = length(nx, 150, ny);                            // 3D length
DWORD r  = ((nx/l)/2 + 0.5) * 255;                         // → 0..255
DWORD g  = ((150/l)/2 + 0.5) * 255;
DWORD b  = ((ny/l)/2 + 0.5) * 255;
dest_pixel = (b << 16) | (g << 8) | r;                     // X8R8G8B8
```

- Both row and column indices wrap (top row uses the bottom row as
  "previous", etc.), producing seamlessly tilable normal maps.
- The hard-coded `150` is the up-axis weighting: bigger values make the
  water surface look flatter; smaller, more bumpy. The choice is a
  visual constant.
- Output is stored as `D3DFMT_X8R8G8B8` (32-bit `B8G8R8X8` in memory
  layout).

After conversion the source heightfield bytes are discarded — only the
resulting textures are retained.

---

## 4. Compression

**None.** The whole file is raw bytes, memory-mapped from `Textures.vfs`
and walked once at load.

---

## 5. Cross-references

- The water surface geometry is created in
  `CGeometryWater` (D3D9-side: `Game/Renderers/D3D9/GeometryWaterData.h`
  and `GeometryWater.cpp`).
- An actor of type `ACTOR_WATER` (id 7) attaches the geometry to the
  scene — see [actor_placement.md](actor_placement.md) for that wiring.
- The single-byte greyscale height representation is unrelated to the
  `.bump` heightfield documented in [bump.md](bump.md) — different
  consumer, different shader.
