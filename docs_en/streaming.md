# Asset Streaming and Async I/O

How the engine loads heavy assets (meshes, textures, scenes) without
blocking the main thread.

- **Job pool**: `IStreamerPool` (`Engine/Core/IStreamerPool.h`) —
  manages a fixed number of background worker threads.
- **Job descriptor**: `IStreamerJob` (`IStreamerJob.h`) — one unit of
  background work.
- **Driver**: `IStreamer` (`IStreamer.h`) — per-subsystem submission
  queue (one per actor scene, one for textures, etc.).
- **Streamed-load helpers**: `CStreamLoading` in
  `Game/Engine/StreamLoading.cpp` — adapts the streamer to the
  scene-loading flow.
- **AsyncIO** (`Game/Game/AsyncIO.cpp`): low-level file-read primitives.
- **AsyncStream** (`Game/Sound/AsyncStream.cpp`): the same pattern for
  Ogg Vorbis playback.

---

## 1. Threading model

```
Main thread:
    game tick
        → queue IStreamerJob into IStreamer
    rendering, input, scripts

Worker pool (N threads, fixed at startup):
    pop next job from a priority queue
    perform I/O + decompression + parsing
    when done, mark the job complete (atomic flag)

Main thread (next tick):
    poll completed jobs
        → publish their results (e.g. swap a placeholder mesh for the loaded one)
```

The engine is **otherwise single-threaded** for game logic. Workers
only touch their own job's output buffer and the input file (which is
memory-mapped read-only from the VFS archive). Synchronisation is by
atomic completion flag, not locks.

---

## 2. Job lifecycle

`IStreamerJob` typically owns:

- A target `IMMLoadObject *` (memory-mapped file from the VFS).
- A scratch buffer for the decompressed payload (zlib output, mesh
  vertex array, …).
- A "ready" atomic.
- A target slot pointer on the main side (where the parsed object
  will be installed).

Main thread → background:

```cpp
IStreamerJob *job = …;
job->Start(streamerPool);    // queue it; returns immediately
…
// next tick
if (job->IsCompleted()) {
    actor->m_pGeometry = job->TakeResult();   // hand off
    delete job;
}
```

If a job is **abandoned** (actor unloaded before its data arrived),
the engine sets a cancellation flag; the worker still finishes its
current step but discards the result on completion.

---

## 3. Priority

`IStreamer::Submit(job, priority)` puts the job in a min-heap keyed
on priority. `CSceneOutdoor` computes per-actor priority each tick
based on **distance from player camera** (`FillStreamData(...)` in
`SceneOutdoor.cpp`). The closer the actor, the higher the priority,
so the next assets loaded are the ones the player is about to see.

---

## 4. `CStreamLoading` — the scene's adapter

For each scene, a `CStreamLoading` object batches actor-data jobs:

- On scene load it iterates the actor list and submits one job per
  actor.
- Each job opens the actor's noext placement file in `Actors.vfs`,
  parses the leading u32 type discriminator, then calls into the
  actor class's `Load(IActorStreamData *)` to populate stream data
  (the heavy stuff: mesh, oct-tree, collision blobs).
- When the job finishes the actor's `PerformLoad(pStreamData)`
  attaches the streamed data to the live actor on the main thread.

This is why every actor class has a **two-stage load**: a cheap
constructor that just remembers parameters, and a heavyweight
`PerformLoad(pStreamData)` that consumes either streamed data (when
called from the streamer's completion handler) or freshly read data
(when called synchronously without a streamer).

See `ActorStatic.cpp:342` for the canonical pattern:

```cpp
void CActorStatic::PerformLoad(IActorStreamData *pData) {
    if (!pData) {
        // synchronous fallback — no streamer used
        ...
    } else {
        // streamer-provided data — just clone in
        m_pExactMeshData = pStreamData->m_pExactMeshData->Clone();
        m_pExactOctTree  = pStreamData->m_pExactOctTree->Clone(m_pExactMeshData);
        ...
    }
}
```

---

## 5. AsyncStream — same pattern for audio

`CAsyncStream` (`Game/Sound/AsyncStream.cpp:59`) uses an essentially
identical model for Ogg Vorbis playback (see
[`formats/ogg.md`](formats/ogg.md)). A background thread:

1. Opens the Ogg through `ov_open_callbacks` over the VFS
   memory-mapped pointer.
2. Decodes ~ 0.25 s into one of four OpenAL buffers.
3. Hands the buffer to OpenAL for playback.
4. Sleeps until OpenAL frees up a buffer.

The main thread never blocks on audio decode.

---

## 6. Memory pressure

The streamer pool has no built-in memory accounting — jobs allocate
through the engine's heap and trust the actor unload path to free
unreferenced data. The "small file cache" at the VFS layer
([vfs_format.md §5.2](vfs_format.md)) caps memory growth from
small-asset reloads, but large meshes are loaded once per actor
instance.

A real bottleneck the engine handles is **mesh deduplication at the
oct-tree level**: `CCollisionManager::CreateMeshData` and
`CreateOctTree` return clone-able objects, and
`CActorStaticPerformLoad` calls `Clone(m_pExactMeshData)` so multiple
actor instances of the same mesh share one underlying buffer.

---

## 7. Failure modes

| Symptom                                  | Cause                                                            |
|------------------------------------------|------------------------------------------------------------------|
| Actor pops in late (placeholder visible) | Stream job priority lower than camera distance ranking suggests. |
| Hitch on scene load                      | Synchronous fallback path hit (streamer unavailable / disabled). |
| Sound stutter                            | OpenAL buffer underrun (worker thread starved).                  |
| "File not found" log + missing actor     | Actor file referenced from `.isc` but not present in `Actors.vfs`. |

The log subsystem (`Game/Game/LogFile.cpp`) records every async load
event in debug builds.

---

## 8. Cross-references

- VFS reader the jobs read through:
  [vfs_format.md](vfs_format.md).
- Per-actor data the streamer populates:
  [`formats/actor_placement.md`](formats/actor_placement.md).
- Pathfinding pre-load: [`formats/pfd.md`](formats/pfd.md).
- Audio streaming variant: [`formats/ogg.md`](formats/ogg.md).
- Scene-load flow: [`formats/isc.md`](formats/isc.md),
  [`formats/osc.md`](formats/osc.md).
