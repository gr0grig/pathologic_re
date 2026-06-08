# `.ogg` — Ogg Vorbis Audio

- **Archive**: `Sounds.vfs` (298 files).
- **Examples**: `hit_vozduh_hammer_22.ogg`, `Thunder1.ogg`,
  `mail_received.ogg`, `River.ogg`.
- **Reader**: `libvorbis` / `libvorbisfile`. Engine integration in
  `Game/Sound/SoundManager.cpp:205` (preloaded buffers) and
  `Game/Sound/AsyncStream.cpp:59` (streaming).
- **Playback backend**: OpenAL — `alBufferData(...)` at
  `SoundManager.cpp:234` and `Stream.cpp:82, :106`.

---

## 1. Format

The files are **standard Ogg Vorbis** streams (RFC 3533 / RFC 5334). No
engine-specific framing, no encryption, no zlib wrapper. You can open
them in any audio player that handles Vorbis.

File signature: `4F 67 67 53` (`"OggS"`) at offset 0 — the standard
Ogg-stream header.

Encoding parameters used by the asset cook:

- **Vorbis I** (the only Vorbis profile; libvorbis default).
- **Mono or stereo** — the playback path branches on
  `m_pReader->IsMono()` at `Stream.cpp:82, :106`.
- Variable bit-rate; the alpha files target around 96–128 kbps.
- Sample rates vary (`m_pReader->GetRate()` is forwarded to OpenAL).

---

## 2. Engine pipeline

There are **two playback paths**, chosen per sound by the
`stream="0|1"` attribute in UI XMLs ([ui_xml.md](ui_xml.md)) and by
actor sound list flags ([actor_xml.md](actor_xml.md), §3.5):

### 2.1 Preload (one-shot effects)

`CSoundManager::CreateSoundData(...)`
(`Game/Sound/SoundManager.cpp:205`):

```cpp
OggVorbis_File vf;
if (ov_open_callbacks(&ld, &vf, NULL, 0, *m_pOGGCallbacks)) { /* error */ }
// decode entire stream into a contiguous PCM buffer
…
alBufferData(uiBuffer, uiFormat, pSoundData, uiBufferBytes, uiRate);
```

The whole file is decoded to 16-bit PCM in memory at load time, then
uploaded to a single OpenAL buffer. Best for short SFX (under a few
seconds).

### 2.2 Streaming (music, ambient loops, dialogue)

`CAsyncStream` (`Game/Sound/AsyncStream.cpp:59`) opens the OGG via
`ov_open_callbacks` but **decodes incrementally** into a fixed-size
ring of OpenAL buffers (typically four buffers, ~ 0.25 s each). A
background thread refills consumed buffers via `FillBuffer(...)`
(`oggfile.cpp:57`).

This is the path used for:
- All music (`<sound stream="1" loop="1">…</sound>`).
- River / wind / fire ambients.
- Dialogue voice lines (long, single-use).
- Cinematic narration.

---

## 3. Loop handling

`FillBuffer(void *, unsigned long, bool bLoop, OggVorbis_File &)`
takes an explicit `bLoop` flag (`oggfile.cpp:57`). When set, the
reader seeks back to sample 0 when it hits end-of-stream and continues
filling — so loops are **sample-accurate** (no perceptible gap if the
audio editor closes the loop properly in samples).

The `loop="0|1"` attribute in UI XML and the actor sound list
controls this flag.

---

## 4. 3D positional audio

The OpenAL backend supports HRTF / panning via `alSource3f(AL_POSITION,
…)`. The world side wires this up through:

- `ACTOR_SOUND_FAKE3D` (id 21) — emits from a fixed world position
  ([actor_placement.md](actor_placement.md), [actor_xml.md](actor_xml.md)
  `sound_river.xml` example).
- `Sound3D.cpp` — general-purpose 3D source attached to any actor.

Listener position follows the camera. Distance attenuation parameters
(`reference_distance`, `sound_distance`) come from per-actor XML
`<Properties>`.

---

## 5. Compression

Vorbis-internal (perceptual). No extra outer compression — `.ogg`
files in `Sounds.vfs` are stored exactly as the encoder produced them.

---

## 6. Cross-references

- World-wide sound aliases: [world_xml.md](world_xml.md) §3.
- Per-actor sound lists: [actor_xml.md](actor_xml.md) §3.5.
- UI sound events: [ui_xml.md](ui_xml.md) §3.2.
- The LifeStudio facial sequencer ([mms.md](mms.md)) references `.ogg`
  files to drive procedural lip-sync amplitude analysis.
- OpenAL backend lives in `Game/Sound/SoundManager.cpp`; the no-sound
  stub backend (used in headless builds) is at `Game/nosound/`.
