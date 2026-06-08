# `.lsh` — LifeStudio HEAD Facial Model

- **Archive**: `Geometries.vfs` (29 files; one per main character head).
- **Examples**: `rubin_2.lsh`, `andrei.lsh`, `aglaja.lsh`, `klara.lsh` …
- **Reader**: `CLSHead::CASCache::CreateInstance()` in
  `Game/Game/LSHead.cpp:30`. Format parsing is delegated to the proprietary
  **LifeStudio HEAD 2.5 SDK** (`tools/LifeStudioHeadAPIS.dll`).
- **Owning interfaces**: `IRLSHead` (renderer side) + `ILSHeadData` (data
  side). The high-level `IGeometryLSHead` plugs the LS head into the
  geometry pipeline.

---

## 1. What `.lsh` is

`.lsh` is the **head model + facial rig** for character lip-sync, eye
tracking, blink/smile/frown morphs, and procedural muscle deformation. It is
the binary serialised form of the SDK's `IMMTree` class — a hierarchical
"macro-muscle tree".

Each character has at most one `.lsh` (plus one [`.mma`](mma.md) and one
[`.mms`](mms.md) for animation curves and sequencer data, and one
[`.hand`](hand.md) for the attached weapon-bearing hand mesh). The 29 `.lsh`
files mirror the 29 named NPC heads with talking dialogue.

---

## 2. On-disk layout — opaque to engine source

The engine treats the file body as an **opaque blob** passed straight to the
SDK:

```cpp
// LSHead.cpp ~30 (paraphrased)
release_ptr<IMMLoadObject> pLoad(pFS->CreateMappedLoadObject(strLSHName));
LifeStudioHeadAPI::IMMTree *pTree;
pTree->Load(pLoad->GetMemoryPointer(), pLoad->GetSize());
```

The byte layout is not exposed in the open Pathologic source tree. The SDK
ships only as a closed `LifeStudioHeadAPIS.dll`. What is known from the
header `Game/LSHead/h/LifeStudioHeadAPI.h` and from how the engine drives
the result:

| Concept                | Engine use                                              |
|------------------------|---------------------------------------------------------|
| Skull mesh             | Base triangle mesh, same format philosophy as `.mesh`. |
| Skin vertex            | Position + 1–N muscle weights.                          |
| Macro-muscle           | Bone-like deformer with an OBB of influence.            |
| Pupil / iris descriptor| Per-eye texture rect + pivot. Drives `UVPupil.dll`.    |
| Blendshape / morph     | Indexed delta-vertex array (loaded from `.mma`).        |
| Sequencer linkage      | Names of timelines that the `.mms` will key.            |
| Locators               | Named attachment points (left eye, right eye, jaw, …). |

The header file does declare a fixed C-API entry point that the engine
calls. The internal binary structure is **vendor-private** and was never
released by Lifestudio.

---

## 3. Loading sequence inside the engine

`CLSHead::Load()` (LSHead.cpp:90+) is the orchestrator. For each character
LS head it loads three files in this order:

1. `<name>.lsh` — the head model (this file).
2. `<name>.mma` — morph-animation curves (see [mma.md](mma.md)).
3. `<name>.mms` — sequencer file (see [mms.md](mms.md)).

The three are then **stapled together** via `pTree->AttachAnimation()` and
`pTree->AttachSequencer()`, producing a single in-memory rig that the
renderer queries each frame.

```
.lsh  ── geometry + muscles ──┐
.mma  ── morph keyframes     ─┤──→ IMMTree (in memory)  ──→ IRLSHead
.mms  ── sequencer timeline  ─┘
```

Audio drives the `mms` sequencer through the dialogue system
(`UIDialogContext.cpp`), which advances morph weights every frame; the
result is rendered by `GeometryLSHeadData.cpp`.

---

## 4. External tools

- Editing was done in the LifeStudio HEAD authoring tool (a Maya/Max plugin
  bundle, **not** present in this source drop).
- `tools/LifeStudioHeadAPIS.dll` is the runtime parser; it has **no**
  documented header layout in the open code.
- `tools/UVPupil.dll` performs the iris-deformation pass at render time.

For reverse-engineering purposes the format is best treated as a **black
box**: there is no first-party importer/exporter outside the SDK. Empirical
analysis of an `.lsh` header byte pattern is required if you need to
modify it.

---

## 5. Cross-references

- [`.mma`](mma.md) and [`.mms`](mms.md) are the companion files; an `.lsh`
  by itself does nothing observable.
- [`.hand`](hand.md) is a separate per-character mesh that rides along — it
  is **not** part of the LS head proper, but is loaded by the same
  `CLSHead` object for convenience.
- Per-character textures (skin, eye, hair) live in `Textures.vfs` as
  `.tex` / `.png` — see [tex.md](tex.md), [png_tga.md](png_tga.md).
