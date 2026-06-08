# `.hand` — Hand / First-Person Arm Mesh

- **Archive**: `Geometries.vfs` (1 file: `danko.hand`).
- **Reader**: `CHandsData::CHandsData(...)` and `CHandsDesc` —
  `Game/Game/HandsData.cpp` and `Game/Game/HandsDesc.cpp`.
- **Owning interface**: `IHandsData`, `IHandsDesc`.

---

## 1. Purpose

A single first-person "hands" model used to render the player's arms
holding weapons. The only character that ever has a first-person view is
**Danko** (the Bachelor), so only one `.hand` ships.

It is functionally a thin specialisation of [`.mesh`](mesh.md): same
vertex-stream philosophy, but with **named bones** and **per-frame
animation tracks** baked in, because the camera is rigidly attached to the
hand model and any visible jitter is obvious.

---

## 2. On-disk layout

The reader is small. From `HandsData.cpp` the structure is:

```
+--------------------------+
| u32  nVertices           |
| VERTEX[nVertices]        |   20 bytes each (pos.xyz + uv.xy) — same as .mesh
+--------------------------+
| u32  nFaces              |
| u16  indices[nFaces * 3] |
+--------------------------+
| CEString textureName     |
+--------------------------+
| u32  nBones              |
| BONE[nBones]             |   per-bone weight tables (see 2.1)
+--------------------------+
| u32  nAttachments        |
| ATTACH[nAttachments]     |   weapon-grip locators (see 2.2)
+--------------------------+
| u32  nAnimations         |
| ANIMATION[nAnimations]   |   per-track keyframes (see 2.3)
+--------------------------+
```

### 2.1 `BONE`

```
CEString name                   // e.g. "thumb_tip_l", "wrist_r"
CVector  pivot                  // 12 bytes, local-space pivot
u32      nVertices              // vertices skinned to this bone
u32[]    vertexIndices          // indexes into VERTEX[]
```

### 2.2 `ATTACH`

```
CEString name                   // "grip_main", "grip_off"
u32      boneIndex              // parent bone for the grip
CVector  position               // local offset
CVector  direction              // forward axis (unit)
```

These locators are where weapon meshes get parented at runtime
(`HandsDesc.cpp` calls `Attach()`).

### 2.3 `ANIMATION`

```
CEString name                   // "idle", "fire", "reload", "switch"
f32      duration                // seconds
u32      nKeyframes
KEYFRAME[nKeyframes]
```

Each `KEYFRAME`:

```
f32          time                 // seconds since track start
u32          nBoneXforms
BONE_XFORM[nBoneXforms]
```

Each `BONE_XFORM`:

```
u32   boneIndex
CQuat rotation                    // 16 bytes (x, y, z, w)
CVector translation               // 12 bytes
```

The renderer LERP-blends between adjacent keyframes; rotations use
short-arc slerp via `CQuat::Slerp`.

---

## 3. Compression

Not compressed. Loaded as a memory-mapped binary blob through the same
`IMMLoadObject` path as `.mesh`.

---

## 4. Relationship to other formats

- The hand mesh is independent of [`.lsh`](lsh.md). Faces and hands have
  separate rigs.
- Weapon meshes attached to `ATTACH` locators are normal [`.mesh`](mesh.md)
  files looked up via the inventory item descriptor (see
  [actor_xml.md](actor_xml.md), `<Items>` block).
- The skin texture is a [`.tex`](tex.md) variant.

---

## 5. Caveat

Because `danko.hand` is the **only** instance of this format in the
shipping content, the byte layout described above is partially extrapolated
from the reader functions and from the analogous bone-animation reader in
`Game/Renderers/D3D9/GeometryAnimBoneData.cpp`. Field ordering matches the
constructor calls verbatim but the keyframe sub-layout is not enumerated by
any helper struct — it is read inline.

If you need exact byte offsets, run a hex-dump of `danko.hand` alongside
`HandsData.cpp:CHandsData::CHandsData` — the two correspond 1-to-1.
