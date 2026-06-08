# `.mma` — LifeStudio Morph Animation Curves

- **Archive**: `Geometries.vfs` (1 file: `klara.mma`).
- **Owner**: `LifeStudioHeadAPI::IMMAnimation` (closed-source SDK).
- **Loaded by**: `CLSHead::CASCache::CreateInstance()` →
  `LifeStudioHeadAPI::IMMAnimation::Load(...)` (`Game/Game/LSHead.cpp` ~149).

---

## 1. Purpose

`.mma` holds **animation curves** for the morph targets defined inside the
matching [`.lsh`](lsh.md) head file. One `.mma` per character. Curves
describe per-frame morph weights for eyes (blink, look-direction), brows
(raise, knit), lips (smile, frown, pucker, jaw-open) and any custom
expression channels authored in LifeStudio.

`klara.mma` is the only one shipped because Klara is the only character
that runs a fully-pre-canned facial cinematic in the alpha build. Other
characters lip-sync procedurally and use only the keyword morphs baked
into `.lsh` itself.

---

## 2. On-disk layout — opaque

Identical situation to [`.lsh`](lsh.md): the format is a private SDK
binary serialised by LifeStudio HEAD 2.5. The engine treats the file body
as an opaque blob.

What can be inferred from how the engine uses the resulting object:

| Concept                | Engine API call           |
|------------------------|--------------------------|
| Animation registration | `IMMTree::AttachAnimation(IMMAnimation*, name)` |
| Time-base resolution   | Float-second timeline scrubbed each frame |
| Channel count          | Equals the number of morph targets in the matching `.lsh` |
| Curve representation   | Per-channel keyframe array — interpolation handled by SDK |

The SDK exposes `Play()`, `Stop()`, `SetWeight()` and `Update(dt)` on the
animation object — there is no public byte-layout method.

---

## 3. Compression

Unknown / opaque. The file is small (≈ 120 KB), and the engine's
`IMMLoadObject` simply memory-maps it and hands the pointer to the SDK.

---

## 4. Related formats

- [`.lsh`](lsh.md) — the head model and rig that `.mma` curves animate.
- [`.mms`](mms.md) — the **sequencer** that orchestrates which `.mma`
  animations play and when. `.mma` is data; `.mms` is the script that
  references it.

---

## 5. Bottom line

If you want to modify `klara.mma` you cannot do so without the LifeStudio
HEAD 2.5 authoring tool (or a thorough RE pass on
`tools/LifeStudioHeadAPIS.dll`). For everyone else, treat it as an opaque
asset and keep it next to the matching `.lsh` and `.mms` files in
`Geometries.vfs`.
