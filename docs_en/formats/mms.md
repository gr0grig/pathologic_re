# `.mms` — LifeStudio Morph Sequencer

- **Archive**: `Geometries.vfs` (1 file: `klara.mms`).
- **Owner**: `LifeStudioHeadAPI::IMMSequencer` (closed-source SDK).
- **Loaded by**: `CLSHead::CLSHeadSpeechData(...)` →
  `LifeStudioHeadAPI::IMMSequencer::Load(...)`
  (`Game/Game/LSHead.cpp` ~97).

---

## 1. Purpose

`.mms` is the **timeline** that orchestrates morph animations defined in
[`.mma`](mma.md). Where `.mma` is "what curves does this face know how to
play", `.mms` is "in what order and at what times do they play".

In the alpha build only `klara.mms` ships, paired with `klara.mma` and
`klara.lsh`, to drive a single pre-canned facial cinematic. All other
characters lip-sync procedurally from envelope analysis of their dialogue
`.ogg` files instead of a sequencer.

---

## 2. On-disk layout — opaque

Same situation as [`.lsh`](lsh.md) and [`.mma`](mma.md): the file body is
a private SDK binary. The engine reads it via memory-mapped I/O and
passes the byte pointer to `IMMSequencer::Load`.

What is inferrable from `CLSHead::CLSHeadSpeechData` and from how the
sequencer object is driven each frame:

| Concept                  | Engine use                                          |
|--------------------------|-----------------------------------------------------|
| Event list               | Time-ordered triggers (start anim X, stop anim Y). |
| Audio sync               | Per-event audio cue token referencing an `.ogg`.   |
| Phoneme blending         | Per-event weight curve mixing multiple morph anims.|
| Looping / branching      | Sequencer state machine; SDK manages internally.   |
| Speech-driven lip-sync   | The "speech data" wrapper applies envelope amplitude on top. |

The associated speech data object is *also* called `CLSHeadSpeechData`
which suggests `.mms` carries optional voice-clip references — but the
audio data itself is not embedded; it lives in `Sounds.vfs` as separate
[`.ogg`](ogg.md) files.

---

## 3. Compression

Unknown / opaque. Size on disk ≈ 23 KB; loaded as a memory-mapped blob.

---

## 4. Related formats

- [`.lsh`](lsh.md) — the rig.
- [`.mma`](mma.md) — the curve library this sequencer references.
- [`.ogg`](ogg.md) — voice clips synchronised by sequencer events.

---

## 5. Bottom line

Treat `.mms` files the same as `.mma`: opaque, edited only via the
LifeStudio HEAD 2.5 authoring tool. Shipping mods that retarget Klara's
face would need to either rebuild the `.mms` through that tool or replace
the entire trio (`klara.lsh` + `klara.mma` + `klara.mms`).
