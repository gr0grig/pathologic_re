# `.pfd` — Pathfinding Data (Binary, zlib)

- **Archive**: `Scenes.vfs` (21 files in the alpha build).
- **Examples**: `factory_base.isc.pfd`, `house1_base.isc.pfd`,
  `isobortrup_base.isc.pfd`.
- **Reader**: `CPathFinding::CPathFinding(CEngine *, CStringReader &,
  IPathFindingScene *)` — `Game/Engine/PathFinding.cpp:10`.
- **Header file**: `Game/Engine/PathFinding.h`.

---

## 1. Purpose

`.pfd` is the **precomputed navigation mesh** for a scene. It pairs 1-to-1
with an [`.isc`](isc.md) (or `.osc`) and is referenced from that file's
`<PathFinding DataFile="…"/>` tag. The runtime path-planner uses it to
answer `FindPath(src, dst)` queries.

The data is a planar navmesh: each navigable surface is a convex polygon
projected onto its own plane, polygons are connected by **inner edges**,
and the world is partitioned by a 2D **grid** for fast spatial lookup.

---

## 2. On-disk wrapper

Each `.pfd` is a **zlib-compressed** stream, framed by the engine's
`CZipReader` (`Game/Common/ZipReader.h`):

```
+----------------------+
| u32  uncompressedSize|   total decompressed payload size
+----------------------+
| deflate stream       |   raw zlib (78 DA …) producing the structures below
+----------------------+
```

Empirical: `Scenes.vfs/factory_base.isc.pfd` begins with
`06 0D 00 00 78 DA …` → `0x00000D06` = 3334 bytes uncompressed, then
`78 DA` deflate.

The reader hands `CZipReader<CStringReader>` a `CStringReader` opened
over the memory-mapped file, and consumes everything that follows
inline.

---

## 3. Decompressed structure

Top-down, in read order (`PathFinding.cpp:17`):

```
+---------------------------------------+
| u32  m_ulNVertices                    |
| CVector m_pVertices[m_ulNVertices]    |   12 bytes each (xyz floats)
+---------------------------------------+
| u32  m_ulNInnerEdges                  |
| INNER_EDGE[m_ulNInnerEdges]           |   variable size (see 3.1)
+---------------------------------------+
| u32  m_ulNOuterEdges                  |
| OUTER_EDGE[m_ulNOuterEdges]           |   fixed-size struct (see 3.2)
+---------------------------------------+
| u32  m_ulNPolys                       |
| POLY[m_ulNPolys]                      |   variable size (see 3.3)
+---------------------------------------+
| u16  m_pPolyProps[m_ulNPolys]         |   per-polygon flags (see 3.4)
+---------------------------------------+
| u32  m_ulNPlanes                      |
| PF_PLANE[m_ulNPlanes]                 |   plane + basis (see 3.5)
+---------------------------------------+
| u32  m_ulGridWidth                    |
| u32  m_ulGridHeight                   |
| f32  m_fGridMinX                      |
| f32  m_fGridMinY                      |
| f32  m_fCellWidth                     |
| f32  m_fCellHeight                    |
| GRID_CELL[height][width]              |   variable size (see 3.6)
+---------------------------------------+
```

### 3.1 `INNER_EDGE`

```
u32  m_ulVertices[0]   // start vertex (index into m_pVertices)
u32  m_ulVertices[1]   // end vertex
u32  m_ulPoly          // index of one of the two polygons this edge borders
u32  m_ulNNeighbours   // count of EDGE_NEIGHBOUR entries that follow
EDGE_NEIGHBOUR[m_ulNNeighbours]   // adjacency descriptors
```

`m_vCenter` (midpoint) is computed at load time and **not** stored.

### 3.2 `OUTER_EDGE`

Fixed-size POD (no count prefixes). Boundary edges of the navmesh (e.g. a
wall a character cannot path through). Layout is whatever the
`OUTER_EDGE` struct in `PathFinding.h` declares; read via
`ReadArray(...)` so it is a raw `memcpy`.

### 3.3 `POLY`

```
u32           m_ulPlane          // index into m_pPlanes
u32           m_ulDegree         // number of vertices in this polygon
u32           m_pVertices[m_ulDegree]   // vertex indices, ordered CCW around plane
f32           m_fArea             // pre-computed area, in plane units
CLine2D       m_pEdges[m_ulDegree]      // 2D edge lines (in plane basis)
u32           m_ulNInnerEdges    // count
u32           m_pInnerEdges[m_ulNInnerEdges * 2]   // pairs (inner-edge idx, neighbour-poly idx)
```

`CLine2D` is two 2D points + cached `2D` normal in plane coords (used for
streamlined inside-polygon tests).

### 3.4 `m_pPolyProps`

`u16` per polygon, two semantic bits documented in `PathFinding.cpp`:

```cpp
static const unsigned short c_usBlockedMask = 0xC000;   // bits 14-15
```

Bits 14–15 indicate runtime blockage (script-set, e.g. a door currently
shut). The remaining low 14 bits are **user property bits** (per
designer/region). `FindPath()` accepts `(usVal, usMask)` and skips
polygons whose `(prop & usMask) != usVal`.

### 3.5 `PF_PLANE`

```
CPlane   m_Plane     // (ax + by + cz + d = 0) — 16 bytes
CVector  m_vBasisX   // 12 bytes — tangent
CVector  m_vBasisY   // 12 bytes — bitangent
```

Each polygon is flattened onto its plane using `(m_vBasisX, m_vBasisY)`
to give the 2D coords stored in `POLY::m_pEdges`.

### 3.6 `GRID_CELL`

For each `(row, col)` in `m_ulGridHeight × m_ulGridWidth`:

```
u32  m_ulFaceCount
u32  m_pFaces[m_ulFaceCount]    // indices of polygons that overlap this cell
u32  m_ulPlaneCount
u32  strides[m_ulPlaneCount]    // per-plane runlengths into m_pFaces
                                // converted on load into a prefix-sum
                                // (m_pOffsets array, m_ulPlaneCount + 1)
```

The grid covers the rectangle
`[m_fGridMinX, m_fGridMinX + m_ulGridWidth*m_fCellWidth] ×
 [m_fGridMinY, …]` in the XZ plane and partitions polygons by their 2D
bounding box for O(1)-per-cell candidate lookups.

---

## 4. Lifecycle

1. `CPathFinding::CPathFinding(...)` reads everything above into the
   class member arrays (`m_pVertices`, `m_pInnerEdges`, `m_pPolys`,
   `m_pPlanes`, `m_Grid`).
2. Two per-instance scratch buffers are allocated:
   - `m_pPlaneDists` — `FIND_POLY_DATA` per plane, used during
     `FindPath` to memoize plane-edge distances.
   - `m_pEdgeVisited` — `VISITED_EDGE` per inner edge, used as the open
     set during the A* search.
3. After `CScript`-driven `BlockPolys(...)`, blocked polygons have their
   top two property bits set, removing them from valid candidate sets.
4. `FindPath(src, dst, …)` does ground projection + A* over polygons,
   returning a `TPath` (a `vector<PathPoint>`).

---

## 5. Compression details

The deflate stream is **raw zlib** (with the `78 DA` two-byte CMF/FLG
header). No raw deflate, no gzip wrapper. The `CZipReader` reads in 16 KB
chunks, decompresses on-demand, and exposes a `>>`-style stream interface
identical to `CStringReader`.

There is **no checksum** stored on disk; corruption manifests as a
zlib `Z_DATA_ERROR` mid-stream, which the reader throws as an exception
caught by the scene loader.

---

## 6. Cross-references

- Owning scene: [`.isc`](isc.md) / [`.osc`](osc.md), via
  `<PathFinding DataFile="…"/>`.
- Runtime API: `IPathFinding` interface (mostly used by AI tasks under
  `Game/Game/TAB*.cpp`).
- Block-list semantics are scripted from `.bin` scripts — see
  [bin.md](bin.md) and `Game/Engine/Engine.cpp` for the
  `BlockPathfinding` cmd.
