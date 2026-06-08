# Actor Placement (no-extension) — Binary Per-Actor Data

- **Archive**: `Actors.vfs` (**4524** entries — the entire archive
  except for the 484 `.xml` files documented in
  [actor_xml.md](actor_xml.md)).
- **Examples**: `Bench01`, `isobortrup`, `iboiny`, `d2q01_ithouse1_table3`,
  `s_ihouse1`, `agony1`, `ihouse1`, `river`, `warehouse1`.
- **Reader entry point**: `CWorld::CreateActor(const char *pszActorName,
  ...)` → `CWorld::_CreateActor(...)` —
  `Game/Engine/World.cpp:552` and `:569`.
- **Per-class readers**: `CActorStatic`, `CActorDoor`, `CActorBiped*`,
  `CActorLight*`, `CActorTriggerVolume`, `CActorWater`, `CActorObject`,
  `CActorDetailedObject`, `CActorDummy`, `CActorAnimBone`, … — all
  dispatched by `CAFBuiltIn::CreateActor` at `Game/Game/AFBuiltIn.cpp:50`.

---

## 1. Overall layout

Every file in `Actors.vfs` that lacks a `.xml` extension is a **binary
actor instance**:

```
+--------------------+ 0
| u32   ulActorID    |   actor-type discriminator (see §2)
+--------------------+ 4
| body (class-       |   layout depends on ulActorID
|  specific binary)  |
+--------------------+ size
```

`CWorld::CreateActor` reads the first 4 bytes and dispatches:

```cpp
release_ptr<IMMLoadObject> pLoad(pFS->CreateMappedLoadObject(pszActorName));
unsigned long ulActorID = *(unsigned long *)pLoad->GetMemoryPointer();
return _CreateActor(pLoad.get(), ulActorID, pszActorName, …);
```

(`World.cpp:559-566`)

The class-specific reader then opens its own `CStringReader` starting at
**offset 4** (`pLoad->GetMemoryPointer() + 4`) — see e.g.
`ActorStatic.cpp:350`, `ActorDummy.cpp:64`, `ActorTriggerVolume.cpp:122`.

---

## 2. Actor type IDs

```cpp
// from Game/Game/Actor.h / AFBuiltIn.h
enum ACTOR_TYPE {
    ACTOR_STATIC               =  0,
    ACTOR_LIGHT_STATIC         =  1,
    ACTOR_LIGHT_STATIC_GROUP   =  2,
    ACTOR_DOOR                 =  6,
    ACTOR_WATER                =  7,
    ACTOR_OBJECT               =  8,
    ACTOR_PLAYER               = 10,
    ACTOR_TRIGGER_VOLUME       = 11,
    ACTOR_FOG                  = 12,
    ACTOR_FLAME                = 13,
    ACTOR_SCRIPTED             = 14,
    ACTOR_DETAILED_OBJECT      = 15,
    ACTOR_BIPED                =  4,
    ACTOR_BIPED_LSH            =  5,
    ACTOR_BIPED_CS             = 16,
    ACTOR_BIPED_LSH_CS         = 17,
    ACTOR_SCRIPTED_CONTAINER   = 18,
    ACTOR_BLANK                = 19,
    ACTOR_DUMMY                = 20,
    ACTOR_SOUND_FAKE3D         = 21,
    ACTOR_ANIM_BONE            = 22,
};
```

On disk the value is little-endian, so an `ACTOR_STATIC` file begins
with `00 00 00 00`, an `ACTOR_DETAILED_OBJECT` with `0F 00 00 00`, etc.

Actors created **programmatically** (`ACTOR_PLAYER`, `ACTOR_FOG`,
`ACTOR_FLAME`, `ACTOR_SCRIPTED`, `ACTOR_SCRIPTED_CONTAINER`,
`ACTOR_BLANK`, `ACTOR_SOUND_FAKE3D`) have **no** disk file —
they are instantiated via `CWorld::CreateActor(ulActorID, …)` from XML
attributes only. The placement files in `Actors.vfs` are the
"file-backed" subset.

---

## 3. Body layout by class

### 3.1 `ACTOR_STATIC` (id 0) — most common

`Game/Game/ActorStatic.cpp:47` (constructor) and `:342` (PerformLoad):

```
+----------------------+
| CBox3D  m_Box        |   24 bytes — world AABB (center + extent)
| CVector m_vPivot     |   12 bytes — local pivot point
| CEString m_strGeomName |  mesh name (e.g. "Bench01.mesh")
| u8       m_bDynamicShadows |  1 = casts shadows
| MeshData m_pExactMesh|   ray-tracing collision (variable size)
| OctTree  m_pExactOct |   spatial accelerator over the ray-tracing mesh
| u32      ulEnvelopeType|   0 = physics-envelope follows; 5 = none
|   if ulEnvelopeType == 0:
|     u8      bUseRay   |   1 = reuse the ray-tracing oct-tree; 0 = own envelope
|     if !bUseRay:
|       MeshData m_pMesh|  separate physics-mesh
|       OctTree  m_pOct |  oct-tree over the physics-mesh
+----------------------+
```

`CBox3D` here is read with a single `Read(&m_Box, sizeof(CBox3D))`, so
the layout is exactly the C++ struct (24 bytes — two consecutive
`CVector` halves: `m_vCenter` then `m_vExtent`).

The mesh name is just an identifier; the actual mesh is loaded later
from `Geometries.vfs` (see [mesh.md](mesh.md)) by
`CStaticLOD::LoadLODs` (`ActorStatic.cpp:417`).

**Empirical example — `Actors.vfs/Bench01` (535 bytes)**:

```
00 00 00 00              ulActorID = 0 (ACTOR_STATIC)
9D 1D EA 43 7A 83 AB 44 43 75 AB 41   m_Box.m_vCenter = (468.23, 1372.11, 21.43)
04 B9 24 43 C6 35 7F 42 2C A2 6E 42   m_Box.m_vExtent = (164.72,   63.80, 59.65)
A0 1D EA 43 02 8D A3 44 10 75 AB 41   m_vPivot        = (468.23, 1308.41, 21.43)
0C 42 65 6E 63 68 30 31 2E 6D 65 73 68   "Bench01.mesh"  (length 0x0C = 12)
01                                        m_bDynamicShadows = true
00 6D 00 00 …                             MeshData / OctTree blob …
```

### 3.2 `ACTOR_DETAILED_OBJECT` (id 15)

`Game/Game/ActorDetailedObject.cpp:38`:

```
+----------------------+
| u32      ulActorID = 15                     |
| CEString m_strGeomName                      |   detailed-object cluster name
| COBB2D   m_OBB                              |   16 bytes — 2D OBB
+----------------------+
```

The 4524-entry inflation in `Actors.vfs` is driven by detail-object
clusters such as grass bunches and leaf swarms: each scene places
hundreds of them.

### 3.3 `ACTOR_DUMMY` (id 20)

`Game/Game/ActorDummy.cpp:57`:

```
+----------------------+
| u32      ulActorID = 20                     |
| CBox3D   m_Box                              |   24 bytes
| MeshData m_pMeshData                        |   collision mesh
| OctTree  m_pOctTree                         |   accelerator
+----------------------+
```

A pure collision proxy with no visible geometry — used for invisible
collision blockers (clip volumes around prop pivot edges).

### 3.4 Other classes

Each `ACTOR_*` constructor in `Game/Game/Actor*.cpp` follows the same
pattern: read the class members in the order declared in the
constructor signature. Some highlights:

| Class                      | File                          | Distinctive payload                           |
|----------------------------|-------------------------------|------------------------------------------------|
| `ACTOR_DOOR` (6)           | `ActorDoor.cpp`               | Static body + hinge axis + open/close angles.  |
| `ACTOR_BIPED*` (4, 5, 16, 17) | `ActorBiped*.cpp`           | Skeleton mesh + bone-anim track set.           |
| `ACTOR_ANIM_BONE` (22)     | `ActorAnimBone.cpp`           | Bone-driven mesh + per-track animation refs.    |
| `ACTOR_WATER` (7)          | `ActorWater.cpp`              | Water bbox + reference to [`water.dat`](dat_water.md). |
| `ACTOR_OBJECT` (8)         | `ActorObject.cpp`             | Movable static — adds COBB3D and an initial velocity. |
| `ACTOR_TRIGGER_VOLUME` (11)| `ActorTriggerVolume.cpp`      | Bbox + trigger volume mesh.                    |
| `ACTOR_LIGHT_STATIC` (1, 2)| `ActorLightStatic*.cpp`       | Position + colour + radius + falloff curve.    |

The `Actors.vfs` files are produced by the editor (`GameEditor`) at
asset-build time; the engine never writes them.

---

## 4. "Alias" placement files

Some entries are extremely small (12–15 bytes). For example,
`Actors.vfs/iboiny` (12 bytes) contains only:

```
0B 69 62 6F 69 6E 79 2E 6D 65 73 68
└── len 11 ──┘└── "iboiny.mesh" ──┘
```

No 4-byte type prefix — the first byte is the CEString length 0x0B,
which would parse as `ulActorID = 0x6F62690B` (garbage) if you fed it
through `CWorld::CreateActor`. These are **not** loaded as actors by
the world loader — they are loaded by the **detailed-object** geometry
pipeline (`Game/Renderers/D3D9/GeometryDetailedObject.cpp`), which
treats them as plain length-prefixed strings naming the underlying
`.mesh` to spawn (`Geometries.vfs/iboiny.mesh`).

In other words: the `Actors.vfs` filesystem is shared between two
consumers — the actor factory (expects `[u32 type, …]`) and the
detail-object geometry loader (expects `CEString`). The disambiguation
is by **who is asking**, not by file content.

---

## 5. Compression

**None at the wrapper level.** Embedded mesh/oct-tree blobs may be
compressed inside their own readers (`CCollisionManager::CreateMeshData`
and `CreateOctTree`), but the outer file is raw.

---

## 6. Cross-references

- Companion XML: [actor_xml.md](actor_xml.md) — per-instance overrides.
- Mesh referenced by `m_strGeomName`: [mesh.md](mesh.md).
- Scene references: `<Actor Name="…"/>` in [isc.md](isc.md) /
  [osc.md](osc.md).
- Dispatch table: `CAFBuiltIn::CreateActor`
  (`Game/Game/AFBuiltIn.cpp:50`).
- Collision data layout (the trailing `MeshData` / `OctTree` blob): see
  `Game/Engine/IPhysics.h` and `CCollisionManager.cpp`.
