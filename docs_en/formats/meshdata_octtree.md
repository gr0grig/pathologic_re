# `MeshData` + `OctTree` — Collision Geometry Blocks

These two structures are **not** standalone files. They appear **embedded
inside `Actors.vfs` placement files** (see [actor_placement.md](actor_placement.md)),
typically as two consecutive pairs per static actor:

1. **Ray-trace pair** — `MeshData` + `OctTree` used for line-of-sight
   tests (bullet hits, eye-ray, shadow casting).
2. **Physics pair** — same two structures but a (possibly different)
   simpler envelope used for character–world collision.

The same code path also reads them stand-alone for `ACTOR_DUMMY`
(`ActorDummy.cpp:64`) and a few other actor classes.

- **Reader**: `CMeshData::CMeshData(const char *& p)` —
  `Game/Physics/MeshData.cpp:176`.
- **Reader**: `COctTree::COctTree(const char *& pP, CMeshData *,
  ICollisionNotify *)` — `Game/Physics/OctTree.cpp:5`.

Both readers **advance** the caller's pointer (`const char *&`) so they
can be chained back-to-back in a containing stream.

---

## 1. Outer framing — zlib wrapper

Each of `MeshData` and `OctTree` is wrapped in the engine's
`CZipReader<CStringReader>` template (`Game/Common/ZipReader.h`):

```
+----------------------+
| u32 uncompressedSize |   header read by CZipReader
+----------------------+
| deflate stream       |   raw zlib (78 DA …) → contents below
+----------------------+
```

After the reader exits the `CZipReader` scope, the outer `CStringReader`
is automatically advanced past the compressed bytes. The two blocks
therefore share the same container pattern as
[`.pfd`](pfd.md) — same `78 DA` magic, same in-place layout.

Empirical: in `Actors.vfs/Bench01`, the bytes immediately after the
mesh-name CEString and the `dynamic_shadows` flag are
`00 6D 00 00 78 DA …`. `0x00006D00 = 27904` is the uncompressed size
of the *first* (ray-trace) `MeshData`+`OctTree` payload, followed by
the deflate stream.

---

## 2. `MeshData` (decompressed layout)

`Game/Physics/MeshData.cpp:176-219`:

```
+----------------------+
| u32  m_dwNVertices                   |  vertex count
| CVector m_pVertices[m_dwNVertices]   |  12 bytes each (xyz)
+----------------------+
| u32  m_dwNFaces                      |  triangle count
+----------------------+
| MESHDATA_FACE_RAW[m_dwNFaces]        |  7 bytes each, see 2.1
+----------------------+
```

### 2.1 `MESHDATA_FACE_RAW` (on-disk, 7 bytes per face)

```
u16  vIndex[0]      // vertex index 0
u16  vIndex[1]      // vertex index 1
u16  vIndex[2]      // vertex index 2
u8   m_idMaterial   // material ID (0..255)
```

That's the **only** thing the file stores per face. Everything else
(plane equation, edge planes for inside-triangle tests) is **computed
on-load** in `MeshData.cpp:203-215`:

```cpp
vNormal       = normalize((v[1] - v[0]) ^ (v[2] - v[1]));
m_Plane       = {vNormal, -(vNormal · v[0])};
m_TriPlanes[i] = … // 2 per-edge bisecting planes, used for fast point-in-tri tests
```

The in-memory `MESHDATA_FACE` struct therefore contains the vertex
pointers (not indices), one face plane, and two edge planes — see
`Physics/MeshData.h` for the runtime layout.

### 2.2 Vertex limit

Because vertex indices are `u16`, a single `MeshData` block tops out at
**65 535 vertices**. The engine has no spec for splitting larger
meshes; the asset cooker either declines or refines until each chunk
fits.

---

## 3. `OctTree` (decompressed layout)

`Game/Physics/OctTree.cpp:5-63`:

```
+----------------------+
| u32  m_dwNNodes                                       |  count of internal nodes
+----------------------+
| OCTNODE_NORMAL[m_dwNNodes]                            |  see 3.1
+----------------------+
| u32  m_dwTotalFaces                                   |  total face references over all leaves
| u16  m_pAllFaces[m_dwTotalFaces]                      |  face indices into MeshData
+----------------------+
| u32  m_dwNLeaves                                      |  count of leaves
+----------------------+
| OCTNODE_LEAF[m_dwNLeaves]                             |  see 3.2
+----------------------+
```

### 3.1 `OCTNODE_NORMAL` (internal node, 40 bytes on disk)

```
CBox3D m_Box                  //  24 bytes — m_vCenter + m_vExtent
u16    m_pNodes[8]            //  16 bytes — eight 16-bit child references
```

Each `m_pNodes[i]` is a child reference:

| Pattern (16 bits)                             | Meaning                       |
|------------------------------------------------|-------------------------------|
| `0xFFFF`                                      | empty child (no geometry)     |
| `0x8XXX` (top bit set, value ≠ `0xFFFF`)      | leaf index = low 15 bits      |
| `0x0XXX` (top bit clear)                      | inner node index = low 15 bits|

At load time the reader expands the `u16` into a `u32` per child slot
(`ReadConv<WORD, DWORD>`), so the in-memory node is wider than its
on-disk representation. There is therefore a hard cap of **32 767**
internal nodes and **32 767** leaves per tree.

### 3.2 `OCTNODE_LEAF` (leaf, 26 bytes on disk)

```
CBox3D m_Box                  //  24 bytes
u16    m_dwNFaces             //  face count (≤ 65535)
```

Face indices for this leaf are **not stored inside the leaf** — they
live in the **shared** `m_pAllFaces` array (read just before the leaf
list). Leaves consume `m_pAllFaces` sequentially in iteration order:
the first leaf takes the first `m_dwNFaces` entries, the next leaf the
next `m_dwNFaces` entries, etc. The reader sets up an in-memory
`leaf.m_pFaces` pointer into the shared array
(`OctTree.cpp:30-43`).

This packing reduces overhead (no per-leaf length prefix on the face
list, just one shared array) and keeps memory-locality good for tree
traversal.

### 3.3 Geometry ownership

`OctTree.m_pMeshData` is the **non-owning** pointer to the matching
`MeshData`. The OctTree references faces by index into that MeshData's
face table. The convention is therefore: read the `MeshData` first,
then read the `OctTree` passing the just-created `MeshData *` to its
constructor.

---

## 4. Pointer-advancing protocol

Both readers follow the **"consume from a pointer"** pattern:

```cpp
// caller side:
const char *p = somewhere;
CMeshData *m = new CMeshData(p);     // p is advanced past the MeshData block
COctTree  *t = new COctTree(p, m, nullptr);  // p is advanced past the OctTree
```

In `ActorStatic::PerformLoad` this lets two pairs be chained:

```cpp
m_pExactMeshData = CreateMeshData(p);
m_pExactOctTree  = CreateOctTree(p, m_pExactMeshData, this);  // ray-trace pair

reader >> ulEnvelopeType;            // 0 = own envelope, 5 = no envelope
if (ulEnvelopeType == 0) {
    reader >> bUseRay;
    if (!bUseRay) {
        m_pMeshData = CreateMeshData(p);
        m_pOctTree  = CreateOctTree(p, m_pMeshData, this);  // physics pair
    }
}
```

`ulEnvelopeType == 5` means **no physics envelope** — the object is
non-colliding for characters (decorations, light sources, etc.).
`ulEnvelopeType == 0 && bUseRay == true` reuses the ray-trace pair as
the physics envelope (a hint that the mesh is simple enough).

---

## 5. Compression facts

- Algorithm: **zlib deflate** (`78 DA …`).
- Buffering: 16 KB internal window in `CZipReader`.
- Checksum: none stored externally; deflate-internal Adler-32 only.
- Decompression is streaming, in-place into the destination arrays.
- The 4-byte uncompressed-size prefix is **mandatory** — the reader
  pre-allocates buffers based on it before any inflate calls.

---

## 6. Cross-references

- Where the pair is consumed: [actor_placement.md](actor_placement.md)
  (`ACTOR_STATIC`, `ACTOR_DUMMY`, etc.).
- Sister structure with similar framing: [`.pfd`](pfd.md) (same
  `CZipReader<CStringReader>` wrapper, different inner payload).
- Runtime API consumers: `ICollisionManager`,
  `Game/Game/CollisionFilter*.cpp`, `Game/Game/AntiStuckSystem.cpp`.
