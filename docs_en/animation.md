# Bone Animation and Skinned Meshes

How the engine stores and plays back **skeletal animations** for
characters and articulated objects. This complements
[`formats/mesh.md`](formats/mesh.md) (static meshes),
[`formats/hand.md`](formats/hand.md) (first-person hand), and
[`formats/lsh.md`](formats/lsh.md) (LifeStudio face rig).

- **Asset extension**: `.mms` (e.g. `aglaya_e.mms`, `andrey_e.mms`)
  shipped alongside `.mesh` files in `Geometries.vfs` and the editor
  data tree.
- **Reader**: `CGeometryAnimBoneData::CGeometryAnimBoneData(...)` —
  `Game/Renderers/D3D9/GeometryAnimBoneData.cpp:25`.
- **Owning interfaces**: `IGeometryAnimBone` /
  `IGeometryAnimBoneRaytracer` / `IGeometryAnimBoneSimple` in
  `Engine/Renderer/`.
- **Animation API**: `IBoneAnimation`, `IBoneTrack`,
  `IBoneTrackEnum`, `IBoneAnimationQuery`,
  `IBoneAnimationSpeedQuery`.

---

## 1. Outer framing

The entire file body is wrapped in **one** `CZipReader<CStringReader>`
(zlib deflate, 4-byte uncompressed-size prefix — same wrapper used by
[`.pfd`](formats/pfd.md) and [`MeshData`/`OctTree`](formats/meshdata_octtree.md)).

```
+---------------------+
| u32 uncompressedSize|
+---------------------+
| deflate stream      |
+---------------------+
```

Inside the deflate stream is the structure described below.

---

## 2. Decompressed layout

`GeometryAnimBoneData.cpp:25-111`:

```
+--------------------------------------+
| u32  m_dwNBones                      |   bone count
+--------------------------------------+
| CSkeleton    skeleton                |   vertex-skinning data, see §3
+--------------------------------------+
| u32  TechniqueType                   |   = TECHNIQUE_BONE_DIFFUSE = 9
| <technique payload>                  |   vertex/index/material buffers, see §4
+--------------------------------------+
| u32  ulFaceCount                     |   = pTechnique->GetFaceCount()
| u8   materials[ulFaceCount]          |   material ID per face
+--------------------------------------+
| BONE_PROP[m_dwNBones]                |   per-bone properties, see §5
+--------------------------------------+
| u32  m_dwNLocators                   |   named attachment-point count
| LOCATOR[m_dwNLocators]               |   see §6
+--------------------------------------+
| u32  dwNTracks                       |   named animation track count
| TRACK[dwNTracks]                     |   see §7
+--------------------------------------+
```

---

## 3. `CSkeleton` — vertex skinning

A flat per-vertex weight list:

```
u32  m_ulNVertices
u32  ulSize                            // size in bytes of the data block
u8   m_pData[ulSize]                   // packed weight records
```

`m_pData` is consumed sequentially, one record per vertex
(`Skeleton.cpp:4-43`):

```
For vertex i (i = 0 .. m_ulNVertices - 1):
    u32   ulNWeights                   // 1..N
    Repeat ulNWeights times:
        u32   ulBone                   // index into the bone array
        f32   fWeight                  // [0, 1], sum ≈ 1
```

There is no fixed cap on weights per vertex; the asset cooker keeps
the number small (usually 1–4) for performance.

---

## 4. Technique payload

Only one bone technique is implemented: `TECHNIQUE_BONE_DIFFUSE = 9`
(`Renderers/D3D9/object_ids.h`). The payload is a triple
(vertex-buffer, index-buffer, material-table) read by
`CTechniqueBoneDiffuse::LoadData(...)`. Vertex format is one of three
declarations depending on the per-mesh shading mode:

| Decl  | Layout                                       | Used for…                       |
|-------|----------------------------------------------|---------------------------------|
| Decl1 | Position(FLOAT3) + Texcoord(FLOAT2) = 20 B   | Geometry-only passes (shadow)   |
| Decl2 | Position(FLOAT3) + Normal(FLOAT3) + UV(FLOAT2) = 32 B | Lit characters         |
| Decl3 | Position(FLOAT3)                              = 12 B   | Picking / depth-only    |

Index buffer is 16-bit triangle list, same as static meshes.

---

## 5. `BONE_PROP` (per bone)

```
CVector  m_vPivot                      // 12 B — local pivot
u32      m_dwParent                    // parent bone index (0xFFFFFFFF for root)
u32      m_dwNChildren
u32      m_pChildren[m_dwNChildren]    // child bone indices
u32      m_dwFaceCount
u32      m_pFaces[m_dwFaceCount]       // triangles "owned" by this bone
u8       m_bOBB                        // 0 = no OBB, 1 = OBB follows
if (m_bOBB):
    COBB3D m_OBB                       // bone-space oriented bounding box
```

Face ownership is used for per-bone collision and per-bone visibility
culling. The OBB (when present) is recomputed during animation by
transforming the static OBB through the current bone matrix.

---

## 6. `LOCATOR` (attachment point)

```
CEString  m_strName                    // e.g. "LeftHand", "Head", "Eye_L"
CMatrix   m_Transform                  // 48 B — local transform relative to parent bone
u32       m_dwParent                   // parent bone index
```

Locators are queried at runtime by `GetLocatorByName` and used to
attach weapons, the LSHead face mesh, particle systems, and sound
emitters to the right anatomical place on the character.

---

## 7. Animation tracks

```
For each track (dwNTracks total):
    CEString  trackName                  // e.g. "Humanoid", "Root", "Cinematic"
    u32       m_dwNBones
    u32       m_pBones[m_dwNBones]       // bone indices affected by this track

    u32       dwNAnimations
    For each animation:
        CEString  animName                // e.g. "walk_forward", "idle_a"
        u8        bSpeedTrack             // 0 / 1 (does this anim carry a speed track?)
        CBoneAnimation                    // keyframe data, see §7.1
```

### 7.1 `CBoneAnimation` (per-animation keyframes)

```
CVector              m_vOffset           // root-motion offset baked into this anim
u32                  m_pTrackParents[m_dwNBones]  // per-bone parent within this track
                                                  //   (track-local, not full skeleton)

For each bone in the track (m_dwNBones total):
    u32              ulKeyCount
    f32              m_pTimes[ulKeyCount]
    CTransform       m_pKeys[ulKeyCount]
        // each CTransform = CQuat (16 B) + CVector (12 B) = 28 bytes

if (bSpeedTrack):
    u32              ulSpeedKeyCount
    f32              m_pTimes[ulSpeedKeyCount]
    CVector2         m_pSpeeds[ulSpeedKeyCount]    // 8 B each (horizontal speed)
```

`CKeyframeData<float, CTransform, CQTInterpolator>` is the generic
container template; the on-disk layout is what is shown above.

### 7.2 Interpolation

`CQTInterpolator` (`Game/Renderers/D3D9/QTInterpolator.h:9-12`):

```
t      = (curTime - tk0) / (tk1 - tk0);    // [0, 1] between adjacent keyframes
rot    = Slerp(rot[k0], rot[k1], t);       // short-arc spherical interpolation
trans  = Lerp (trans[k0], trans[k1], t);    // linear
```

For speed tracks, `CLinearInterpolator` does componentwise linear
blend on the 2D speed vector.

A `CQuery` object retains the current keyframe index so successive
queries (typical: 60 fps re-sampling) skip the binary search and
advance the cursor in O(1).

### 7.3 Track parents

`m_pTrackParents` is **track-local**: bones inside a track are
re-parented for the purposes of that animation. This is how a single
biped skeleton can play "walking" (root motion in `m_vOffset`) and a
"sit on bench" anim (root stationary, lower body re-rooted on the
chair) without authoring two skeletons.

---

## 8. Skeleton evaluation pipeline

Each frame, for each animated actor:

1. **Time advance** — animation playback head moves forward by
   `dt * speed`.
2. **Per-bone keyframe sample** —
   `CBoneAnimation::CTransformsQuery::GetData(t, outTransforms[])`
   evaluates the keyframe stream for every bone in the active track
   (`BoneAnimation.cpp:69-78`).
3. **Track-parent fix-up** — `CorrectTransforms()` converts the
   per-bone local transforms into world-space absolute matrices by
   walking the track-local parent indices.
4. **Skin** — `CSkeleton::Transform(srcVerts, outVerts, matrices[])`
   (`Skeleton.cpp:4-43`) blends each vertex through its
   `ulNWeights` bone matrices.
5. **Render** — the resulting vertex buffer is drawn through the bone
   technique (Decl2 for lit, Decl1 for shadow).

SSE versions exist (`CSkeletonSSE`, `Skeleton.h`) for hardware that
supports it.

---

## 9. Where the file is referenced

- `CActorAnimBone` (id 22) and its subclasses
  `CActorBiped` (4) / `CActorBipedLSH` (5) /
  `CActorBipedCS` (16) / `CActorBipedLSHCS` (17) all consume
  `.mms` files via
  `pRenderer->CreateGeometry(AID_GeometryAnimBone, m_strGeomName,
  …)`. Constructor at `ActorAnimBone.cpp:857`.
- Per-actor placement files in `Actors.vfs` carry the geometry name
  exactly as the constructor expects — see
  [`formats/actor_placement.md`](formats/actor_placement.md).

---

## 10. Cross-references

- Static meshes (no bones): [`formats/mesh.md`](formats/mesh.md).
- First-person arm rig (different format!):
  [`formats/hand.md`](formats/hand.md).
- Facial rig (closed-source SDK):
  [`formats/lsh.md`](formats/lsh.md),
  [`formats/mma.md`](formats/mma.md),
  [`formats/mms.md`](formats/mms.md) — note: the LifeStudio
  `.mms` is **a different file** from the bone-animation `.mms`
  described here. Same extension, different parser. The LifeStudio
  one is keyed off a `CLSHead`-owned filename; the bone one is
  loaded through `IGeometry` path.
- Animation playback API: [`tasks.md`](tasks.md) for the per-actor
  task that drives the animation phase.
