# Script API Reference

Complete API reference for functions available to Pathologic scripts.
Reverse-engineered from `Game.exe` (alpha/bin/Final/) and cross-checked with
the original C++ sources under `SRC/PlagueCity/Game/Game/*.{cpp,h}`.

Functions are called via two bytecode opcodes:

- **`Func`** — free function dispatched against the current script's context chain
  (`CStdScriptContext::GetFunction`). Used for "global" things (`Sleep`, `Trace`,
  `rand`, `PlaySound`, `AddActor`, …).
- **`ObjFunc`** — method on a specific object. The object must implement
  `IScriptClass`; dispatch goes through `pObject->ExecuteFunction(name, args)`,
  which looks the function up in the object's static `m_ClassTable`.

A function suspends the script (yields one or more frames before returning) when
its dispatch wrapper is `MakeContextLatentClass` instead of `MakeContextClass`.
Latent functions are flagged **Latent** below — at the assembly level they
produce a stack hold and the VM resumes only after the corresponding
`IScriptFunctionInst::Execute` returns `true`.

Argument 0 is almost always the **out** parameter when a return value is needed
(scripts pass results via `out var` slots, not as a function-call return). The
last unsigned-long argument to every C++ implementation is `ulParmCount`, which
the function uses to dispatch between overloads with the same name — that's why
the tables below list `Params` (the arity scripts must supply).

## Dispatch Chain

```
Func opcode → IScriptContext::GetFunction(name, paramCount)

  Each concrete context chains up. For the player (CCPPlayer::CScriptContext):
    1.  CActorScriptContext      (RayTrace, Intersect, IsLoaded, …) — 11 entries
    2.  CCPPlayer::CScriptContext (HasAnimation, GetVictim, …)      — 34 entries
    3.  CStdScriptContext        (rand, Sleep, AddActor, …)        — 141 entries

  Static actors / fog / biped chain up similarly to CActorScriptContext +
  CStdScriptContext, plus their own per-class context table (Stop, MovePoint,
  PlayAnimation, FollowPath, etc.).

ObjFunc opcode → IScriptClass::ExecuteFunction(name, args)
  → object's m_ClassTable lookup (one table per concrete C++ class). The class
    tables form an inheritance chain via fall-through in ExecuteFunction:
    e.g. CActorScripted falls through to CContainerScriptClass falls through
    to CPropertyScriptClass.
```

**Overloads**: same name, different `paramCount`, different function — every
overload is a separate entry in the dispatch table, so calling
`Sleep(5)` vs `Sleep(5, dt)` hits different C++ implementations.

**Conventions used in the tables**:
- `out X` — out slot the script must pass; the function `Set`s it.
- `var`   — variant cell (int / float / bool / string / object / vector).
- `Latent`— execution yields; script resumes when the internal func-instance
  signals completion (see "Latent function lifetime" below).

### Latent function lifetime

Every latent call constructs an `IScriptFunctionInst *` that lives on the
context's group list (`m_Groups[0]`, `m_Syncs`, `m_pCameraGroup`, etc.). On
each frame `UpdateScriptContext` calls `Execute(dt)` — when it returns `true`
the script's `Hold`/`Sleep`/`Wait*` opcode unblocks. Calling `StopGroup0()`
sets `m_bStop` on every `CStoppableFunc` in group 0, which on the next
`Execute` immediately reports completion (and sets the optional `out bool`
result variable to `false` to signal "stopped, not finished naturally").

---

## 1. CStdScriptContext — Global Functions (141 entries)

Source: `Game/Game/StdScriptContext.{h,cpp}`. Mounted as the deepest fallback
context for every actor with a script. `GetWorld()` is the only thing
`CStdScriptContext` itself relies on from subclasses — everything else uses
the cached `m_pContextClass` (the actor/owner this script is attached to).

### Debug

| Function | Params | Description |
|----------|--------|-------------|
| `bpt()` | 0 | Issues `int 3` — debugger trap, hangs the game without an attached debugger. Useful only during development. |
| `self(out object)` | 1 | Stores the script's owner (`m_pContextClass`) into the out slot — returns the actor/object the script runs on. |
| `Trace(string)` | 1 | Prints to the in-game console (`AddConsoleMessageReply`) with the context's prefix (e.g. actor name) prepended. |
| `Console_Error(string)` | 1 | Same as `Trace` but routes through `AddConsoleMessageError` (red, raises console). |

### Random

Uses a single static `CRandGenStd s_RandGen` shared across all script contexts —
**not** seeded per save, so identical scripts in identical states still diverge
across runs. `frand()` returns `[0, 1)`.

| Function | Params | Description |
|----------|--------|-------------|
| `rand(out float)` | 1 | `frand()` — uniform `[0, 1)`. |
| `rand(out float, float max)` | 2 | `frand() * max` — uniform `[0, max)`. Negative `max` produces `[max, 0)`. |
| `rand(out float, float min, float max)` | 3 | `frand() * (max-min) + min` — uniform `[min, max)`. **Note:** no swap if `min > max`. |
| `RandVec2D(out x, out y, float r)` | 2 | **Wrong name in old docs.** Actually writes a unit 2D direction: `pVars[0]=cos(angle)`, `pVars[1]=sin(angle)` — the `r` parameter is unused. Use two `out float`s, not an `out vector`. |
| `RandVec3D(out vector)` | 1 | Uniformly distributed point on the unit sphere via `CVector::Random(v1, v2, v3)` (three independent `frand()`s as parameters to the sphere sampler). |
| `RandVecCone3D(out vector, vector dir, float angle)` | 3 | Random direction within a cone of half-angle `angle` (radians) around `dir`. |
| `irand(out int, int max)` | 2 | Integer `[0, max)`. If `max < 0`, returns `(-max, 0]` (negated). Uses `s_RandGen.rand(|max|)`. |

There are also two unregistered helpers in the header — `_ScriptRandMulti` and
`_ScriptRandOneOf` — but they are **not** in `s_ContextEntries`, so they are
unreachable from scripts in this build.

### Flow Control

The `sync` / `Sleep` / `GameSleep` / `Hold` family all push a
`CStoppableFunc`-derived instance onto `m_Groups[0]` (except `sync(0)`, which
goes into the separate `m_Syncs` list). `StopGroup0()` aborts the entire group
in one call — every queued latent on this script context terminates and reports
`false` into its result var, if any.

| Function | Params | Description |
|----------|--------|-------------|
| `sync()` | 0 | **Latent.** Yields exactly one tick — `Execute` returns `false` the first call and `true` the second. No group registration. |
| `sync(out float dt)` | 1 | **Latent.** Same as above, but stores the actual delta-time of the resumption frame into the out var (set via `SetDeltaTime` from the world tick). Goes into `m_Syncs`. |
| `Sleep(float secs)` | 1 | **Latent.** Real-time pause; `pResult->SetErrorMessage("Negative wait time")` on negative input. Sleeps in tick-real-seconds regardless of game-time scale. |
| `Sleep(float secs, out bool finished)` | 2 | **Latent.** As above, but writes `true` to the out bool if the timer expired naturally, `false` if `StopGroup0`/`Stop()` interrupted. |
| `GameSleep(float gameSecs)` | 1 | **Latent.** Waits until `world.GetGameTime() >= now + gameSecs`. Affected by `GetGameTimeScale()`. |
| `GameSleep(float gameSecs, out bool finished)` | 2 | **Latent.** As above, with completion-vs-stop result var. |
| `Hold()` | 0 | **Latent.** Blocks indefinitely until something else calls `StopGroup0()` (or the script is killed). |
| `Hold(...)` | 1 | **Latent.** Header declares a 1-arg variant, but only the 0-arg form is registered in `s_ContextEntries`. The 1-arg overload is *unreachable* in this build. |
| `StopGroup0()` | 0 | Aborts every latent function in `m_Groups[0]` (Sleep/GameSleep/Hold/Wait*). Returns immediately; the aborted latents finish on their next tick. |

### Timers & Time Events

Timers are repeating: each frame, `m_fTimeLeft -= dt`; when it hits zero a
`CGameTimer` event is sent to every receiver registered on this timer ID and
the timer rearms (`m_fTimeLeft = m_fElapse`). Time events are one-shot:
they fire when `world.GetGameTime()` crosses the threshold.

| Function | Params | Description |
|----------|--------|-------------|
| `SetTimer(int id, float interval)` | 2 | Creates or **replaces** an existing timer with the same `id`. Interval is in tick-seconds. |
| `KillTimer(int id)` | 1 | Removes the timer; no error if it didn't exist. |
| `KillTimer(int id, out bool existed)` | 2 | As above; the out bool is `true` if a timer was actually removed. |
| `SetTimeEvent(int id, float gameTime)` | 2 | Schedules a `CGameGameTime` event at the absolute game-time threshold. **Returns false** if `gameTime` is already in the past. Replacing an existing event with the same `id` is allowed (unregisters the old one first). |
| `ReleaseTimeEvent(int id)` | 1 | Unregisters a pending one-shot. No-op if the id isn't pending. |
| `GetGameTime(out float)` | 1 | Current game-time hours since the game-time epoch. |
| `GetGameTimeScale(out float)` | 1 | Real→game time multiplier (e.g. 1 game-hour per 1 minute real time). |
| `AdvanceGameTime(float dt)` | 1 | Adds `dt` to current game time. **Returns false** on negative input (with error "Negative time"). Does **not** advance subsystems gracefully — use sparingly. |

### Global Variables

These hit `IVariableSet` on the world's custom-world object (a flat
string-keyed integer map), **not** per-actor properties. Used for global flags
like quest state.

| Function | Params | Description |
|----------|--------|-------------|
| `SetVariable(string name, int value)` | 2 | Writes the variable; creates it if missing. Value is `signed long`. |
| `GetVariable(string name, out int)` | 2 | Reads. Returns 0/default if the name isn't set. |

### Camera

`LockCamera` / `CameraPlay` / etc. transparently call `LockInput()` to install
a `CCPLocked` controller on the player actor — the player can't move, look,
attack while a cinematic camera is active. `CameraSwitchToNormal` /
`UnlockCamera` restore `CCPPlayer`. The lock count is reference-counted via
the `"noaccess"` property on the player actor — calling LockInput N times
requires N matching unlocks.

| Function | Params | Description |
|----------|--------|-------------|
| `LockCamera()` | 0 | `LockInput()`. Increments noaccess. |
| `UnlockCamera()` | 0 | `UnlockInput()`. Decrements / removes noaccess. |
| `CameraPlay(string motion)` | 1 | Loads a `.cmot` (camera-motion) file and plays it widescreen. Errors `"Camera motion file \"X\" not found"` on miss. If the current camera already implements `ICameraPlayback`, it reuses it. |
| `CameraPlay(string motion, bool wide)` | 2 | As above; `wide=false` skips the letterbox `CCameraWideScr` wrapper. |
| `CameraPlayRel(string)` | 1 | Plays the motion relative to the current camera transform (its quat+trans becomes the motion's identity frame). |
| `CameraPlayRel(string, bool allowEffects)` | 2 | As above; the bool enables continued post-effects (blur/darken) during playback. |
| `CameraTransit(vector pos, vector dir)` | 2 | Smooth interpolation from the current camera to `(pos, dir)`. Installs a `CCameraTransit`. |
| `CameraSwitchToNormal()` | 0 | Returns to the player-attached camera (`CCameraAttached`). No-op if already attached. Releases the cinematic camera group. |
| `CameraWaitForPlayFinish()` | 0 | **Latent.** Yields until the playback camera fires `OnPlayFinish`. Cancels any previously waiting `m_pCameraGroup`. |
| `GetCameraCurrentFOV(out float)` | 1 | Current vertical FOV (radians). 0 if no camera. |
| `GetCameraFarDistance(out float)` | 1 | Camera far-plane distance. 0 if no camera. |

### Actors & Scenes

`AddActor*` is overloaded by both arity *and* parameter shape — the 6-arg
`AddActor` variant treats the last string as an XML override file for actor
extras (loaded from `FS_STD_ACTOR`).

| Function | Params | Description |
|----------|--------|-------------|
| `IsPlayerActor(object, out bool)` | 2 | True iff the passed object's `IScriptClass` supports `AID_ActorPlayer`. |
| `FindActor(out object, string name)` | 2 | `world.GetActorByName(name)` → script class. NULL if missing. |
| `AddActor(out, string type, object scene, vector pos)` | 4 | Default direction `(0,0,1)`. |
| `AddActor(out, string type, object scene, vector pos, vector dir)` | 5 | Explicit direction. |
| `AddActor(out, string type, object scene, vector pos, vector dir, string xmlFile)` | 6 | Reads `Extras` node from the XML for create-params, takes optional `ID` sub-node as lookup name. |
| `AddActorByType(out, string typeName, object scene, vector pos[, dir[, xmlFile]])` | 4-6 | Same as `AddActor` but `typeName` is looked up via `engine.GetActorTypeID()` — fails with "Actor type 'X' not found" if unknown. |
| `AddScriptedActor(out, string type, string script, object scene, vector pos[, vector dir])` | 5-6 | Convenience: creates the actor with a single create-param `Script=<scriptName>`. No XML override. |
| `AddScriptedActorByType(out, string typeName, string script, object scene, vector pos[, vector dir])` | 5-6 | Same with type-ID lookup. |
| `AddBlankActor(out, object scene, string name, string script)` | 4 | Spawns `ACTOR_BLANK` (an actor with no geometry / no physics). Placed at the scene's default location. |
| `AddBlankActorFromXml(out, object scene, string name, string xmlFile)` | 4 | Like `AddBlankActor`, but extras come from the XML file. |
| `AddItemActor(out, object scene, string itemName, vector pos, vector dir, string script)` | 6 | Spawns `ACTOR_SCRIPTED_CONTAINER` with a single embedded item (`inv_<itemName>.mesh` as geometry and one inventory entry). **Bug in source**: the very first line is `if (ulParmCount != 6 \|\| ulParmCount) return false;` — the trailing `\|\| ulParmCount` is always true for 6 args, so **this function is unreachable in this build.** |
| `RemoveActor(object)` | 1 | `world.RemoveActor(actor)`. The actor's script (if any) gets `OnDestroy` and is freed. |
| `GetActiveScene(out object)` | 1 | Currently-rendered scene (player's scene). |
| `GetSceneByName(out object, string)` | 2 | Lookup by scene name. NULL on miss. |
| `GetMainOutdoorScene(out object)` | 1 | The custom-world's `IMainOutdoorSceneData::GetScene()` — typically the city scene in Pathologic. |
| `Teleport(object actor, object scene, vector pos, vector dir)` | 4 | Re-places the actor into the target scene at `(pos, dir)`. Effectively `world.PlaceActor`. |
| `ReplaceScene(out object, string newSceneName)` | 2 | Removes the existing scene from the scene manager and inserts a new one under the same slot. Used for hot-swapping outdoor → indoor. |

### Sound & Music

`PlaySound` requires `GetSoundByName` to resolve a registered sound. The
`bLoop` parameter is at index 1 (despite the docs in old code marking it as
"volume" — it's actually the loop flag); the float at index 2 is volume.
Final volume is `volume * g_config->GetRealSoundsVolume()`.

| Function | Params | Description |
|----------|--------|-------------|
| `PlayGlobalMusic(string name)` | 1 | Sends a `CGameMusicChange` event to the custom-world receiver. Doesn't actually play sound here — handled by `CGameWorld::CGameMusic`. |
| `IsExistingSound(out bool, string name)` | 2 | True iff `GetSoundByName` returns non-NULL. |
| `PlaySound(string name)` | 1 | Plays once; volume=1.0. |
| `PlaySound(string name, bool loop)` | 2 | Loops if true. |
| `PlaySound(string name, bool loop, float vol)` | 3 | Custom volume. |
| `PlaySharedSound(string)` / `PlaySharedSound(string, bool)` | 1-2 | Adds with `SC_FLAGS_SCENE_GLOBAL \| SC_FLAGS_NONSTOPPABLE` — survives scene transitions. |
| `PlayNSSound(string)` / `PlayNSSound(string, bool)` | 1-2 | `SC_FLAGS_NONSTOPPABLE` only. NS = "non-stoppable", not "non-spatial". |
| `WaitForSoundToLoad(string)` | 1 | **Latent.** Yields until the sound's `IAsyncLoaded` reports load completion. Returns `true` immediately if not async. |
| `PlayMovie(string filename)` | 1 | Installs `CInGameMovieOverride` (full-screen video). Fails if another override is already active or the file doesn't exist. |
| `QueuePlayMovie(string filename)` | 1 | Queues a movie via the world's `IOverrideQueue` instead of installing immediately. |

### UI & Dialogs

All of these install a `ILoopOverride` that takes over input handling. The
helper `IsOverrideActive(out bool)` lets the script see whether *something*
is already overriding. Trying to show two overrides at once silently no-ops
on the second (returns `true` without doing anything).

| Function | Params | Description |
|----------|--------|-------------|
| `ShowMessage()` | 0 | **Latent.** Shows the latest message with `lMessage = -1`. |
| `ShowMessage(int messageIdx)` | 1 | **Latent.** Shows a specific message index. |
| `ShowMap(object map)` | 1 | **Latent.** Opens the world-map UI rooted on the passed `IWorldMap` object. |
| `ShowDiary()` | 0 | **Latent.** Opens the diary on its currently-selected section. |
| `ShowDiary(int section)` | 1 | **Latent.** Sets `SetDiarySelectedSection` then opens. |
| `ShowPlayerStats()` | 0 | **Latent.** Opens the player-stats UI. |
| `ShowWindow(string xml, bool needRender)` | 2 | **Latent.** Generic XML-driven window. `needRender` keeps the world rendered behind. |
| `ShowWindow(string xml, bool needRender, bool needUpdate)` | 3 | As above; `needUpdate=true` keeps the world simulating. |
| `ShowWindow(string xml, bool needRender, bool needUpdate, object data)` | 4 | As above, plus an arbitrary script-class data object passed to the window XML. |
| `GameOver(string xmlFile)` | 1 | **Latent.** Installs `CGameOverOverride` with the named splash. Note: passed to `SetLoopOverride(..., true)` (force flag). |
| `RemoveOverride()` | 0 | Forces `engine.SetLoopOverride(NULL)`. **Dangerous** — escapes whatever UI is up. |
| `ChooseItem(object container, out object selected)` | 2 | **Latent.** Opens the choose-item dialog rooted on a container; populates `selected` when the user picks. |
| `RegisterKeyCallback(string keyName)` | 1 | Routes the named virtual key to `CStdScriptContext::OnKeyDown`. Keyname is resolved via `g_keys->GetVirtualKeyCode`. Errors `"Invalid virtual key 'X'"` on unknown name. |
| `UnregisterKeyCallback(string keyName)` | 1 | Mirror. |
| `GetVirtualKeyCode(out int, string keyName)` | 2 | Looks up the VK_ code. Returns -1 on unknown. |
| `IsOverrideActive(out bool)` | 1 | True iff `engine.GetNextLoopOverride() != NULL`. |

### Inventory (Item Database — by item-ID, not by container)

These query the global `IInvItemDatabase` on the world's custom-world. Items are
defined in XML on disk; the database loads them at startup. `lItemID` is the
database index, **not** an inventory slot. Use `GetInvItemByName` to convert.

| Function | Params | Description |
|----------|--------|-------------|
| `GetInvItemByName(out int id, string name)` | 2 | Database ID. -1 (cast to long) if not found — script sees a negative int. |
| `HasInvItemProperty(out bool, int id, string propName)` | 3 | True iff the item's properties bag contains `propName`. |
| `GetInvItemProperty(out var, int id, string propName)` | 3 | Reads a property into the variant out (typed by the params array). |
| `GetInvItemSprite(out string, int id)` | 2 | UTF-16 path to the item's main inventory sprite. |
| `GetInvItemSprite2(out string, int id)` | 2 | Secondary sprite (used by trade UI for stacked counts). |
| `GetInvItemName(out string, int id)` | 2 | Localized name (wide string). |
| `GetInvItemMaxStackSize(out int, int id)` | 2 | Max items per stack for this type. |
| `CreateInvItem(out object)` | 1 | Allocates a fresh `CInvItemClass` with no ID set yet — script must `SetItemID` / `SetItemName` / `SetProperty` to fill it. The new object is garbage-collected. |

### Collections (Vectors and Sets)

`CScriptVector<T>` and `CScriptSet<T>` are templated containers, one
specialization per element type. Methods on the **collection objects** (called
via `ObjFunc`) are **lowercase** in the source — `add`/`size`/`clear`/`in`/
`erase`/`get`/`set`/`resize`/`remove`/`find`/`in`. The old docs incorrectly
listed them as title-case.

| Function | Params | Description |
|----------|--------|-------------|
| `CreateBoolVector(out object)` | 1 | `CScriptVector<bool>`. |
| `CreateIntVector(out object)` | 1 | `CScriptVector<signed long>`. |
| `CreateFloatVector(out object)` | 1 | `CScriptVector<float>`. |
| `CreateStringVector(out object)` | 1 | `CScriptVector<CEStringW>` (wide strings). |
| `CreateVectorVector(out object)` | 1 | `CScriptVector<CVector>` (3D vectors of vectors). |
| `CreateObjectVector(out object)` | 1 | `CScriptVector<IScriptClass *>` — holds refs to script-class objects. |
| `CreateIntSet(out object)` | 1 | `CScriptSet<signed long>`. |
| `CreateFloatSet(out object)` | 1 | `CScriptSet<float>`. |
| `CreateStringSet(out object)` | 1 | `CScriptSet<CEStringW>`. |
| `CreateObjectSet(out object)` | 1 | `CScriptSet<IScriptClass *>` with reference-target tracking — auto-removes destroyed entries. |

### Strings

| Function | Params | Description |
|----------|--------|-------------|
| `_strchr(out int, string s, string chars)` | 3 | `wcscspn(s, chars)` — index of first char in `s` that appears in `chars`. Returns -1 (cast to long) if no match. |
| `_strsub(out string, string s, int start)` | 3 | `s.substr(start)` (UTF-16). |
| `_strsub(out string, string s, int start, int end)` | 4 | `s.substr(start, end-start)`. **Note the second arg is `end`, not `length`.** |
| `_strupr(string)` | 1 | `CharUpperW` — uppercases in place via a temporary `_wcsdup`. |
| `_strlwr(string)` | 1 | `CharLowerW` — same. |
| `_strtoi(out int, string s)` | 2 | `wcstol(s, &end, 10)`. **Returns 0 on partial parse** (if any trailing non-digit, the whole result is zeroed). |
| `_strlen(out int, string)` | 2 | UTF-16 character length. |
| `_chr2str(out string, int codepoint)` | 2 | One-char string from a `wchar_t` code point. |
| `GetStringByID(out string, int id)` | 2 | Looks up `id` in the engine's `IStringDatabase` (the localized .lst tables). |

### Messages & Diary

Diary is a tree (`CDiaryEntry`) with one virtual root containing a stable
section-id hierarchy. "Messages" are a flat append-only list (`m_MessageEntries`).

| Function | Params | Description |
|----------|--------|-------------|
| `GetMessageCount(out int)` | 1 | Length of the message list. |
| `GetMessage(out string title, out string text, out float gameTime, int idx)` | 4 | Resolves `ulTitleID`/`ulTextID` against `IStringDatabase`. |
| `AddMessage(int titleID, int textID)` | 2 | Appends, timestamped with current game time. |
| `AddMessage(int titleID, int textID, out int newIndex)` | 3 | As above; out-writes the inserted index. |
| `CreateDiaryEntry(out object, int id, int category, int textID)` | 4 | Allocates a `CDiaryEntry` (script-managed). Needs `AddChild` to actually attach. |
| `GetDiaryRoot(out object)` | 1 | The hidden root `CDiaryEntry` (id=-1, category=-1, textID=-1). |
| `SetDiarySection(int)` | 1 | Sets `m_lSelectedSection` used by `ShowDiary()`. |
| `GetDiarySection(out int)` | 1 | Reads `m_lSelectedSection`. |

The commented-out `_ScriptAddDiaryEntry` / `_ScriptClearDiary` / `_ScriptGetDiaryEntryCount` / `_ScriptGetDiaryEntry`
functions in `StdScriptContext.cpp` are **not registered** — the new API is via
`GetDiaryRoot` and `CDiaryEntry`'s ObjFunc methods (see §9).

### Game Actions / Events

These broadcast `IGameEvent`s through `IBroadcastMessageReceiver`s in the scene.
A "broadcast" iterates every actor in the target scene and calls
`BroadcastMessage(&event)` if the actor implements the receiver interface — so
NPCs in the same scene can react to e.g. player damage.

| Function | Params | Description |
|----------|--------|-------------|
| `BroadcastPlayerDamage(object damager, object scene, object player)` | 3 | Sends `CGamePlayerDamage(player, damager)` to all actors in `scene`. **Arg order:** the damager is `pVars[0]`, the scene is `pVars[1]`, the player is `pVars[2]`. |
| `BroadcastSteal(object thief, object scene)` | 2 | Sends `CGameSteal(thief)`. |
| `BroadcastMessage(string text, object actor, object scene)` | 3 | Sends a `CGameMessage(actor, text)`. |
| `RequestClearPath(object target)` | 1 | Sends `CGameClearPath(self)` to `target` — used by NPCs to politely ask another NPC to move out of the way. |
| `GetPlayerSelectedObject(out object)` | 1 | The object the player crosshair is on right now. |
| `SimulateAttack(object target, object attacker)` | 2 | Sends `CGameAttacked(attacker)` to `target`. The "attacker" parameter is what gets baked into the event. |
| `ReportHit(object victim, object attacker, int hitType, float damage, float hit)` | 5 | Sends `CGameHit(attacker, hitType, damage, hit)`. (Distinct from the player-context 4-arg `ReportHit`.) |
| `SignalDeath(object actor)` | 1 | Sends `CGameDeath(actor)` to **self** (not the passed object — the script's owner is the receiver). Used by NPCs to notify themselves of having killed something. |
| `ActivateSleepMode(object player)` | 1 | Installs `CSleepLoopOverride` — the "wait until morning" UI. |
| `ModBlurLevel(float level)` | 1 | Registers/updates this script as a blur contributor at the given strength. Combined additively across all contributors. |
| `ModDarkenLevel(float level)` | 1 | Same idea for darken (vignette/black-fade). |

### Dialog System

Old docs had a "Dialog System" section that mostly didn't exist as registered
functions in `CStdScriptContext` — they're either on `CConversation` (ObjFunc,
see §10) or on `CCPPlayer::CScriptContext`. Removed entries:
- `GetReplic` / `GetAnswerCount` / `GetAnswer` / `SelectAnswer` /
  `GetConversation` — not present in this build.

### Game Lifecycle

| Function | Params | Description |
|----------|--------|-------------|
| `NewGame(string world, string playerXml)` | 2 | **Not on CStdScriptContext** — lives on `CUIGameMenuContext` (game-menu script context only). |
| `LoadGame(out bool, string filename)` | 2 | `CUIGameMenuContext` only. |
| `SaveGame(out bool, string filename)` | 2 | `CUIGameMenuContext` only. |
| `Quit()` | 0 | `CUIGameMenuContext` only. |
| `LoadMap(out bool, string filename)` | 2 | `CUIGameMenuContext` only. |

---

## 2. CActorScriptContext — Actor Context (11 entries)

Source: `Game/Game/ActorScriptContext.{h,cpp}`. Mounted between
`CStdScriptContext` and concrete actor classes (biped, fog, scripted, …).
Adds physics/raycasting helpers that need the actor's own collision filter
(`GetSkipSelfCollisionFilter()` → don't hit yourself).

| Function | Params | Description |
|----------|--------|-------------|
| `RayTrace(vector origin, vector dir, float maxDist, out bool hit)` | 4 | Normalizes `dir` internally. Skip-self filter. |
| `RayTrace(.., out vector hitPos)` | 5 | As above, plus contact position. |
| `RayTrace(.., .., out object hitObject)` | 6 | Plus the hit `IScriptClass`. |
| `RayTrace(.., .., .., out int materialID)` | 7 | Plus the material ID. |
| `Intersect(vector center, float radius, out bool intersect)` | 3 | Sphere overlap test; no per-object output. |
| `Intersect(.., out object[] hits)` | 4 | As above; `hits` is filled with a `CScriptObjectArray` of intersected `IScriptClass`es. |
| `GetGroundMaterial(out bool, out int materialID)` | 2 | Vertical raycast from actor center down 5000 units; out: hit flag + material. **Note arg order**: `pVars[0]` is the hit-bool, `pVars[1]` is the material ID. |
| `IsLoaded(out bool)` | 1 | `actor->IsLoaded()` — whether the actor's scene has streamed in. |
| `ReportReputationChange(object target, object instigator, float delta)` | 3 | Sends `CGameReputationChange(instigator, delta)` to `target`. No-op if `target` is NULL or doesn't receive events. |
| `StopWorld()` | 0 | Installs a `CWorldStopOverride` — pauses the world but keeps the actor's script alive (used for one-actor cinematics). Fails if any other override is already active. |
| `ResumeWorld()` | 0 | Removes the `CWorldStopOverride` installed by this actor. Asserts that the current override is in fact ours. |

---

## 3. CCPPlayer::CScriptContext — Player Controller Context (34 entries)

Source: `Game/Game/CPPlayer.{h,cpp}`. This is the script context that runs
inside the **player's control controller** (not the player actor itself — those
are §11 `CActorPlayer`). Chains as: `CActorScriptContext` → this →
`CStdScriptContext`. The C++ class is `CCPPlayer::CScriptContext`. There's a
separate `CPlayerWeaponScriptContext` (see §4) for weapon-attached scripts.

### Animations (first-person hands)

| Function | Params | Description |
|----------|--------|-------------|
| `HasAnimation(out bool, string animName)` | 2 | Whether the hands geometry knows this animation. False if no `IHandsDesc` is attached. |
| `PlayAnimation(string animName)` | 1 | Sets `SetHandsAnimation(ulAnim)` and unlocks the lock-on-last-frame flag. |
| `LockAnimationEnd(string animName)` | 1 | Plays then immediately seeks to the last frame and freezes there (`m_bLockAnimationFrame = true`). Useful for "weapon stays drawn" poses. |
| `WaitForAnimEnd()` | 0 | **Latent.** Suspends until current animation finishes (or is changed). |
| `StopAnimation()` | 0 | `SetHandsAnimation(-1)` — clears the active anim, drops the lock-on-end. |

### Weapons & Items

The "weapon" is whatever item is currently selected in subcontainer 0 (the
hands subcontainer) that has the `"Weapon"` property.

| Function | Params | Description |
|----------|--------|-------------|
| `RemoveCurrentWeapon()` | 0 | Finds the currently-selected item in subcontainer 0 that has `"Weapon"` property and removes it. No-op if no weapon is selected. |
| `SelectAnyItemByID(out bool found, int itemID, int containerID)` | 3 | Searches the given subcontainer for the first item matching `itemID` and selects it. Returns false if none. |
| `SetWeaponHolster(bool holster)` | 1 | `SetWeaponVis(!holster)` — true hides the weapon (lowers it), false shows. |
| `GetWeaponItem(out int idx)` | 1 | Index of the selected weapon in subcontainer 0. -1 if no weapon selected. |
| `GetWeaponProperty(out bool found, string propName, out var value)` | 3 | Reads a per-instance property bag entry (the item-stack's own params, not the item-type's defaults). |
| `SetWeaponProperty(out bool ok, string propName, var value)` | 3 | Mutates the selected weapon stack's params. Creates the params bag if absent. |
| `SetHandsItem(int itemID)` | 1 | Forces the hands geometry to a particular item ID (visual only — no inventory change). |
| `SwitchFlashlight(bool on)` | 1 | Routes through `m_pContr->SetFlashlightOn`. |
| `SwitchVisir(bool on)` | 1 | Routes through `m_pContr->EnableVisir` ("visor"/night-vision-ish overlay). |

### Combat / Aiming

`GetVictim*` / `GetVictimMaterial*` all raycast from the camera transform
forward and respect the `CCollisionFilterVictim` filter (skip self, skip
non-attackable). The result is the target the player would hit if they
fired right now.

| Function | Params | Description |
|----------|--------|-------------|
| `GetVictim(out object victim)` | 1 | Raycast 10000 units forward from camera. |
| `GetVictim(float dist, out object victim)` | 2 | Custom max distance. |
| `GetVictimMaterial(out object, out int matID, out vector hitPos)` | 3 | Raycast forward; hit pos is offset back by 7 units to give the camera some clearance. |
| `GetVictimMaterial(out object, out int matID, out vector hitPos, vector customDir)` | 4 | Override ray direction. |
| `GetVictimMaterialExact(out object, out int matID, out vector hitPos)` | 3 | Like `GetVictimMaterial` but uses `RayTraceCustom` (per-pixel/per-poly, more expensive). |
| `GetVictimMaterialExact(.., vector dir)` | 4 | Custom direction. |
| `GetVictimMaterialExact(.., vector dir, float maxDist)` | 5 | Custom direction + max dist. |
| `GetTouchDistance(out float)` | 1 | Player's current melee-range distance (varies by weapon). |
| `ReportAttack(object victim)` | 1 | Sends `CGameAttacked(self)` to `victim`. |
| `ReportHit(object victim, int hitType, float damage, float hit)` | 4 | Sends `CGameHit(self, hitType, damage, hit)`. |
| `ReportHit(.., vector pos, vector dir)` | 6 | Sends `CGameHit2` instead — includes hit position/direction. |
| `IsShooting(out bool)` | 1 | True while primary fire is held. |
| `IsAltShooting(out bool)` | 1 | True while alt-fire is held. |
| `SetAttackState(out bool current)` | 1 | **Note**: actually `Get`s the m_bAttacking flag (the function name is misleading — it reads, not sets). |
| `CreateAttachPoint(string name, vector pos)` | 2 | Adds a named locator on the player rig at the given position. |
| `RemoveAttachPoint(string name)` | 1 | Mirror. |
| `Inventory()` | 0 | **Latent**-style override: opens the inventory UI rooted on the player's container. Tries to detect nearby `IRubbishHeap` actors (within ~42 units) to populate the "other side" panel. |
| `Diary()` | 0 | **Latent.** Opens the diary; managed as a `CDiaryInst` so it can be canceled if the script is killed. |
| `ModNoise(int amount)` | 1 | Adds to the player's noise level (AI hearing). Both the controller and `m_lNoiseMod` are updated. |
| `BroadcastPlayerDamage(object damager)` | 1 | Player-controller variant: sends `CGamePlayerDamage(self, damager)` to the **player's current scene**. |

---

## 4. CPlayerWeaponScriptContext — Weapon Script Context (5 entries)

Source: `Game/Game/PlayerWeaponScriptContext.{h,cpp}`. **Distinct context** —
mounted for scripts running on the *weapon itself* (rather than the player).
Chains to `CStdScriptContext`. Old docs incorrectly merged this into §3.

| Function | Params | Description |
|----------|--------|-------------|
| `GetGeometryLocator(string locatorName, out bool found, out vector pos)` | 3 | Looks up a named locator on the hands geometry; out-writes its translation row. |
| `MakeBillboard(string id, string image, vector pos, float size)` | 4 | Creates (or updates) a named alpha-blended billboard attached to the weapon. The image is resolved via `pRenderer->CreateImage`. |
| `RemoveBillboard(string id)` | 1 | Mirror. |
| `GetLitColor(out vector)` | 1 | Reads the cached flashlight/lit color on the weapon. |
| `SetLitColor(vector)` | 1 | Writes it; triggers `UpdateFlashlight`. |

---

## 5. CActorBiped — Bipedal Actor (46 entries)

Source: `Game/Game/ActorBiped.{h,cpp}`. Only one class-method (`GetAttackDistance`),
everything else is on the script context table (`s_ContextEntries`). Most
movement/animation latents go into `m_Groups[0]`.

### Movement (latent)

`MovePoint` / `MoveDir` / `Rotate` / `FollowPath` create per-call task
objects (`TABMoveLine`, `TABMoveDir`, `TABRotate`, `TABFollowPath`) and
hand the script a function-inst that completes when the task does.

| Function | Params | Description |
|----------|--------|-------------|
| `Stop()` | 0 | Cancels current movement / animation tasks. |
| `StopAsync()` | 0 | Stops async (non-latent) tasks only. |
| `MovePoint(vector target)` | 1 | **Latent.** Walk (default mode). |
| `MovePoint(vector target, int mode)` | 2 | **Latent.** Mode: 0=walk, 1=run. |
| `MovePoint(vector target, int mode, out bool reached)` | 3 | **Latent.** Out flag: true if reached, false if stopped/blocked. |
| `MoveDir(float angle, float dist)` | 2 | **Latent.** Move in a direction relative to current facing. |
| `MoveDir(float, float, int mode)` | 3 | **Latent.** With walk/run mode. |
| `MoveDir(float, float, int, out bool)` | 4 | **Latent.** With completion flag. |
| `Rotate(float yaw, float pitch)` | 2 | **Latent.** Rotate to absolute direction. |
| `Rotate(.., float speed)` | 3 | **Latent.** With angular speed. |
| `RotateAsync(.., ..)` / `RotateAsync(.., .., ..)` / `RotateAsync(.., .., .., ..)` | 2-4 | Non-latent variants — start rotation, return immediately. |
| `Face(object target)` | 1 | Snap facing to look at the target's position. Non-latent, instantaneous. |
| `LookAsync(vector pos, float blendIn, float blendOut)` | 3 | Start a head-look at `pos` with blend timings. |
| `LookAsyncRel(vector pos, float, float)` | 3 | Relative variant. |
| `DirLookAsyncRel(vector dir, float)` | 2 | Look in a direction. |
| `DirLookAsyncRel(.., .., ..)` | 3 | With second blend param. |
| `UnlookAsync(float blendOut)` | 1 | Drop the look. |
| `IsInWalkMode(out bool)` | 1 | True if walking (vs running). |
| `SwitchToWalk()` / `SwitchToRun()` | 0 | Set the locomotion mode flag. Doesn't move; affects the *next* MovePoint. |
| `FollowPath(object path, bool loop)` | 2 | **Latent.** Walk-follow a path object (path = sequence of waypoints). |
| `FollowPath(.., .., out bool)` | 3 | **Latent.** Completion flag. |
| `FollowPath(.., .., .., string walkAnimPrefix)` | 4 | **Latent.** Override walk anim names (e.g. "walk_drunken_"). |
| `FollowPath(.., .., .., string walkAnimPrefix, string runAnimPrefix)` | 5 | **Latent.** Both prefixes. |
| `RotatePath(object path)` | 1 | **Latent.** Walk a path applying its rotation keyframes. |
| `RotatePath(object path, out bool)` | 2 | **Latent.** Completion flag. |

### Animations

NPC animations use **tracks** (multiple anims can mix). `LockAnimation` /
`LockAnimationEnd` freeze on the first / last frame.

| Function | Params | Description |
|----------|--------|-------------|
| `StopAnimation()` | 0 | Stops the primary animation. |
| `StopSecondaryAnimation()` | 0 | Stops the secondary animation. |
| `PlayAnimation(string name, int track)` | 2 | Play on the given track index. |
| `PlaySecondaryAnimation(string, int)` | 2 | Secondary track. |
| `PlaySecondaryAnimation(string, int, int extraArg)` | 3 | With extra arg (track-specific behavior). |
| `FadeSecondaryAnimation(string, int, float fadeIn)` | 3 | Crossfade in. |
| `FadeSecondaryAnimation(.., .., .., float fadeOut)` | 4 | Both fade timings. |
| `GetSecondaryAnimationType(out int)` | 1 | Identifies the secondary slot. |
| `LockAnimation(string, int track, int mode)` | 3 | Freeze on a specific frame mode. |
| `LockAnimationEnd(string name, int track)` | 2 | Freeze on last frame. |
| `InterpolateAnimation(string, int, float t)` | 3 | Interpolate to a specific time. |
| `IsAnimationPlaying(out bool)` | 1 | Whether any anim is currently active. |
| `WaitForAnimEnd()` | 0 | **Latent.** Block until anim finishes. |
| `WaitForAnimEnd(out bool finished)` | 1 | **Latent.** With completion flag. |

### Dialogs & Trade

| Function | Params | Description |
|----------|--------|-------------|
| `DoDialog(object conversation)` | 1 | Push a dialog UI rooted on the given `CConversation`. The NPC is the "speaker". |
| `CreateDialog(object conv)` | 1 | Like `DoDialog` but in async/staging mode. |
| `StopDialog(object conv)` | 1 | Force-close. |
| `DoTrade()` | 0 | Open the trade window between player and this NPC. |
| `StopTrade()` | 0 | Close trade. |

---

## 6. CActorAnimBone — Animated NPC Common Base (49 entries)

Source: `Game/Game/ActorAnimBone.{h,cpp}`. Shared base for skeletal NPCs.
Adds pathfinding (PF), sensing, attack/hit reporting.

### Class methods (ObjFunc — called on the actor)

| Method | Params | Description |
|--------|--------|-------------|
| `GetPosition(out vector)` | 1 | Actor world position. |
| `GetDirection(out vector)` | 1 | Forward direction. |
| `GetPFPosition(out vector)` | 1 | Pathfinding-graph position (snapped to grid). |
| `HasAnimationTrack(out bool, int track)` | 2 | Whether a given track has a playing anim. |
| `HasAnimation(out bool, string name, int track)` | 3 | Whether an animation by name exists for track. |
| `IsDead(out bool)` | 1 | Self-explanatory. |
| `IsAttacking(out bool)` | 1 | Is currently in an attack state. |
| `GetWidth(out float)` | 1 | Collision radius / width. |
| `GetHeight(out float)` | 1 | Stand height. |
| `GetEyesHeight(out float)` | 1 | Camera/look height. |
| `GetAnimationProperty(out var, string propName)` | 2 | Per-animation custom prop. |
| `GetGeometryLocator(string name, out bool found, out vector pos)` | 3 | Look up a locator's translation. |
| `GetGeometryLocator(.., .., .., int boneIdx)` | 4 | Bone-specific lookup. |
| `TransformPointByBone(vector localPt, string boneName, out vector worldPt)` | 3 | Bone-relative → world transform. |
| `GetBrightness(out float)` | 1 | Approximate brightness at actor position (for stealth/AI lighting). |
| `CanSee(out bool, object target)` | 2 | LOS + FOV + see-threshold check. |
| `CanHear(out bool, object source)` | 2 | Noise-vs-hear-threshold check. |
| `GetActorName(out string)` | 1 | Internal actor name. |

### Context functions (Func — called inside the actor's script)

| Function | Params | Description |
|----------|--------|-------------|
| `SetPosition(vector)` | 1 | Snap world position. |
| `SetDirection(vector)` | 1 | Snap facing. |
| `Speak(string)` | 1 | Trigger a speech bubble / TTS line. |
| `FindPathTo(out object path, vector target)` | 2 | Compute a path; the out object is a path script-class. |
| `FindShiftedPathTo(out, vector)` | 2 | Path that prefers an offset from the target (e.g. flanking). |
| `FindDirLength(vector dir, float maxLen, out float actualLen)` | 3 | Ray-cast-like: how far can the actor move in `dir` before hitting something? |
| `FindLongestDir(out vector, out float, vector dirBase, float maxAngle, int numRays, float maxLen)` | 6 | Sweep an arc of rays; return the longest free direction. |
| `CanReachByPF(out bool, vector)` | 2 | Whether pathfinding can reach this point. |
| `GetRandomPFPoint(out vector)` | 1 | Random reachable PF point. |
| `GetRandomPFPointInCircle(out vector, vector center, float rMin, float rMax)` | 4 | Random PF point within an annulus. |
| `RemoveEnvelope()` / `RemoveRTEnvelope()` | 0 | Drop the collision envelope (capsule/box) / raytrace envelope. |
| `SetRTEnvelopeAuto()` | 0 | Restore auto-fit RT envelope. |
| `SetRTEnvelope(vector half, vector center)` | 2 | Manual RT envelope. |
| `GetVictim(out object)` | 1 | Forward raycast for "what would I attack?". |
| `GetVictim(out, float maxDist)` | 2 | With distance cap. |
| `GetVictimMaterial(out, out, out, out)` | 4-5 | Forward raycast + material + hitpos. |
| `GetTouchDistance(out float)` | 1 | This NPC's melee range. |
| `ReportAttack(object target)` | 1 | Send attack event. |
| `ReportHit(object target, int hitType, float damage, float hit)` | 4 | Send hit event. |
| `SetDeathState()` | 0 | Switch the AAS (animation/state machine) to "death" state. |
| `ResetAAS()` | 0 | Reset the AAS to the default state. |
| `SetSpeed(float)` | 1 | Locomotion speed. |
| `SetHearThreshold(float)` / `GetHearThreshold(out float)` | 1 | Hearing sensitivity (decibel-equiv). |
| `SetSeeThreshold(float)` / `GetSeeThreshold(out float)` | 1 | Sight sensitivity. |
| `SetSeeFOV(float)` / `GetSeeFOV(out float)` | 1 | Cone half-angle (radians). |
| `GetAnimationOffset(string name, int track, out vector)` | 3 | Root-motion offset baked into an anim. |
| `SetAttackState(int)` | 1 | Forces the AAS into a numbered attack state. |
| `SensePlayerOnly(bool)` | 1 | If true, ignore non-player actors for sense checks. |

### CActorAnimBoneCS — Cutscene Animated NPC (extra entries)

Source: `ActorAnimBoneCS.{h,cpp}`. Adds:

| Function | Params | Description |
|----------|--------|-------------|
| `ForceGeometryLoad()` / `ForceGeometryLoad(bool wait)` | 0-1 | Synchronous geometry stream-in. |
| `PlayAnimation()` | 0 | Cutscene-anim variant. |
| `PlayAnimation(string)` | 1 | Cutscene-anim variant. |
| `StopAnimation()` | 0 | Cutscene-anim variant. |
| `WaitForAnimEnd()` / `WaitForAnimEnd(out bool)` | 0-1 | **Latent.** |
| `GetFrameRate(out float)` | 1 | FPS of the CS anim. |

---

## 7. CActorFog — Fog NPC (32 entries)

Source: `Game/Game/ActorFog.{h,cpp}`. Main "ambient horror" NPC type (the
sickness-fog patrols). Mixes locomotion with fog-cloud rendering.

### Class methods (ObjFunc)

| Method | Params | Description |
|--------|--------|-------------|
| `HasProperty(out bool, string)` | 2 | Property check (overrides CPropertyScriptClass). |
| `GetPosition(out vector)` | 1 | World position. |
| `GetPFPosition(out vector)` | 1 | PF-grid position. |
| `GetFogAmount(out float)` | 1 | Current fog density [0..1]. |
| `GetFogColor(out vector)` | 1 | RGB tint of the fog cloud. |
| `GetHeight(out float)` | 1 | Fog volume height. |

### Context functions

| Function | Params | Description |
|----------|--------|-------------|
| `PutOnGrid()` / `PutOnGrid(bool)` | 0-1 | Snap to PF grid; bool toggles snap-to-walkable. |
| `GetRandomPFPoint(out vector)` | 1 | Random reachable point. |
| `GetRandomPFPointInCircle(out vector, vector center, float rMin, float rMax)` | 4 | Annulus. |
| `FindPathTo(out, vector)` | 2 | Path. |
| `FindShiftedPathTo(out, vector)` | 2 | Offset path. |
| `MovePoint(vector, int mode)` | 2 | **Latent.** Move. |
| `MovePoint(vector, int, out bool)` | 3 | **Latent.** With completion. |
| `Stop()` | 0 | Halt. |
| `FollowPath(object, bool loop)` | 2 | **Latent.** |
| `FollowPath(.., .., out bool)` | 3 | **Latent.** |
| `FollowPath(.., .., .., string walkAnim)` | 4 | **Latent.** |
| `FollowPath(.., .., .., string walkAnim, string runAnim)` | 5 | **Latent.** |
| `RotatePath(object)` / `RotatePath(object, out bool)` | 1-2 | **Latent.** |
| `ResetAAS()` | 0 | State-machine reset. |
| `FogLinear(float start, float end)` | 2 | Linearly interpolate fog amount from `start` to `end` over the current locomotion. |
| `SetFogAmount(float)` | 1 | Direct write. |
| `SetVisirVisibility(bool)` | 1 | Whether the fog is visible through the visor overlay. |
| `SetHearThreshold(float)` / `GetHearThreshold(out float)` | 1 | Hearing. |
| `SetSeeThreshold(float)` / `GetSeeThreshold(out float)` | 1 | Sight. |
| `SetSpotRating(float)` | 1 | How "spottable" the fog is by other NPCs. |
| `ReportHit(object, int, float, float)` | 4 | Send hit event. |

Note: `SwitchFlashlight` / `SwitchVisir` / `GetForce` / `SetForce` / `GetSpeed` /
`SetSpeed` listed in old docs are **not** registered on CActorFog. They live on
`CActorPlayer::CEffectScriptContext` (see §11) or on `CCPPlayer::CScriptContext`
(see §3).

---

## 8. CGameWeather — Weather (8 entries)

Source: `Game/Game/GameWorld.cpp` (nested `CGameWorld::CGameWeather`). Per-world
singleton. Mounts as a script context the game can target via `ObjFunc` on the
weather object.

| Function | Params | Description |
|----------|--------|-------------|
| `ChangeWeather(18 params)` | 18 | **Latent.** Smooth transition over time. Args encode start/end weather state (cloud cover, fog distance, wind, etc.). |
| `ForceWeather(17 params)` | 17 | Instant snap. One fewer param than `ChangeWeather` (no transition time). |
| `Bright()` | 0 | Switch to "bright/clear" modifier (no rain). |
| `Rain()` | 0 | Switch to rain modifier — actually changes the active `IModWeatherData` to `CModWeatherDataRain`. |
| `ModNothing()` | 0 | Drop the modifier. |
| `ModLinear(float to, float duration)` | 2 | Linearly interpolate the current modifier's strength. |
| `GetModifierLevel(out float)` | 1 | Current modifier intensity. |
| `GetGameTime(out float)` | 1 | Weather's view of game time (typically same as world). |

---

## 9. CGameMusic — Music (22 entries)

Source: `Game/Game/GameWorld.cpp` (nested `CGameWorld::CGameMusic`). Two music
channels (1 and 2) for crossfading layers.

| Function | Params | Description |
|----------|--------|-------------|
| `PlayMusic1(string)` / `PlayMusic1(string, bool loop)` | 1-2 | Play on channel 1 (default looping). |
| `PlayMusic2(string)` / `PlayMusic2(string, bool loop)` | 1-2 | Channel 2. |
| `StopMusic1()` / `StopMusic2()` | 0 | Instant stop. |
| `FadeMusic1()` / `FadeMusic1(float)` | 0-1 | Fade out channel 1 (default duration if no arg). |
| `FadeMusic2()` / `FadeMusic2(float)` | 0-1 | Channel 2. |
| `SwitchMusic1(string)` / `SwitchMusic1(string, float fadeTime)` | 1-2 | Crossfade channel 1 to a new track. |
| `IsPlayingMusic1(out bool)` / `IsPlayingMusic2(out bool)` | 1 | Channel state. |
| `HasMusicAttribute(out bool, string)` | 2 | Whether the active track has a metadata key. |
| `GetMusicAttribute(out string, string)` | 2 | Read the attribute. |
| `HasMusicValue(out bool, string attr, var)` | 3 | Equality check. |
| `GetMusicValue(out var, string attr, var defaultVal)` | 3 | Typed read with default. |
| `WaitForMusicEnd1()` / `WaitForMusicEnd1(out bool)` | 0-1 | **Latent.** Block until channel 1 finishes. |
| `WaitForMusicEnd2()` / `WaitForMusicEnd2(out bool)` | 0-1 | **Latent.** Channel 2. |

Also exposes `GetRegionMusic`, `AdvanceRegionMusic`, `IsExistingMusic` —
these live on the `CMusicRegionData` / outdoor-scene side, see `MusicRegionData.cpp`.

---

## 10. ObjFunc — Object Methods (by class)

### CPropertyScriptClass — Property Bag (base)

Source: `Game/Game/PropertyScriptClass.{h,cpp}`. Inherited by most actors —
provides a typed key→value bag attached to the object.

| Method | Params | Description |
|--------|--------|-------------|
| `HasProperty(out bool, string)` | 2 | Key presence. |
| `GetProperty(out var, string)` | 2 | Typed read. |
| `SetProperty(string, var)` | 2 | Write / overwrite. |
| `RemoveProperty(string)` | 1 | Delete. |

### CConversation — Dialog Object (19 entries)

Source: `Game/Game/Conversation.{h,cpp}`. The dialog NPC pushes one of these,
the player UI reads from it. `m_strMessage` / `m_Replies` are the displayed
state; `ReportChange()` notifies registered listeners (the UI).

| Method | Params | Description |
|--------|--------|-------------|
| `SetReturnValue(int)` | 1 | The script's "answer" to the caller; default -1. |
| `GetReturnValue(out int)` | 1 | Read. |
| `SetMessage(int stringID)` | 1 | Looks up `stringID` in `IStringDatabase` and sets it as the displayed NPC line. Notifies UI. |
| `ClearReplies()` | 0 | Wipes the reply list. |
| `AddReply(int stringID, int nextReplicID, int replyID)` | 3 | Append a clickable answer. `nextReplicID` is the next dialog node; `replyID` is the return-value if the user picks this one. |
| `GetPhoto(out string)` / `SetPhoto(int stringID)` | 1 | Main NPC photo path. |
| `GetPhoto2(out string)` / `SetPhoto2(int stringID)` | 1 | Secondary photo. |
| `GetNPCName(out string)` / `SetNPCName(int stringID)` | 1 | Display name. |
| `GetNPCDescription(out string)` / `SetNPCDescription(int stringID)` | 1 | Tooltip text. |
| `GetPlayerName(out string)` / `SetPlayerName(int stringID)` | 1 | Override the displayed "player name" for this exchange. |
| `ShowMap(object map)` | 1 | Transition the conversation to `MAP_STATE` — the UI will switch to a map view. |
| `ShowDiary()` | 0 | Transition to `DIARY_STATE`. |
| `IsFinished(out bool)` | 1 | True after the user/script ended the dialog. |
| `IsDialogEnd(out bool)` | 1 | True when state is back to `DIALOG_STATE` (not in a map/diary subview). |

### CDiaryEntry — Diary Tree Node (10 entries)

Source: `Game/Game/Diary.{h,cpp}`. Tree node with `id`, `category`, `textID`,
parent, children. The diary has one hidden root (id=-1).

| Method | Params | Description |
|--------|--------|-------------|
| `Remove()` | 0 | Detach from parent and free. No-op if root. |
| `GetCategory(out int)` | 1 | Category ID. |
| `GetTextID(out string)` / `SetTextID(int)` | 1 | Text-database ID. |
| `GetID(out int)` / `SetID(int)` | 1 | This node's stable ID. |
| `ChildCount(out int)` | 1 | Number of direct children. |
| `Child(out object, int idx)` | 2 | Child by index. Errors `"Diary child index is out of range"`. |
| `AddChild(object child)` | 1 | Append. Errors `"Adding null diary entries is not permitted"` on NULL. |
| `Find(int id, out object)` | 2 | DFS by ID. NULL if not found. |

### CContainerScriptClass — Container (30 entries)

Source: `Game/Game/ContainerScriptClass.{h,cpp}`. Most actors that hold items
(NPC corpses, rubbish heaps, containers, the player) implement this. Items
live in **subcontainers** (zero or more); subcontainer 0 is the "primary".

| Method | Params | Description |
|--------|--------|-------------|
| `GetItemCount(out int)` | 1 | Item count in subcontainer 0. |
| `GetItemCount(out int, int subID)` | 2 | Item count in a specific subcontainer. |
| `GetItemCountOfType(out int, int itemID \| string itemName)` | 2 | Total across all subcontainers. Accepts either DB id or name (resolved via `GetInvItemByName`). |
| `AddItem(out bool, item, int subID)` | 3 | Adds 1; `item` can be an `IInvItemProxy` object, a DB id, or a name. Stacks up to `MaxStackSize`. |
| `AddItem(out bool, item, int subID, int count)` | 4 | Adds N; returns false if no room. |
| `RemoveItem(int idx)` | 1 | Remove 1 from subcontainer 0 at index. |
| `RemoveItem(int idx, int count)` | 2 | Remove N. |
| `RemoveItem(int idx, int count, int subID)` | 3 | From a specific subcontainer. |
| `RemoveItemByType(out int actuallyRemoved, item)` | 2 | Remove 1 of the type. Returns 0 if not found. |
| `RemoveItemByType(out int, item, int amount)` | 3 | Remove N. |
| `RemoveAllItems()` / `RemoveAllItems(int subID)` | 0-1 | Wipe. |
| `GetItem(out object, int idx)` | 2 | Returns a `CInvItemClass` script object (a copy snapshot). |
| `GetItem(out object, int idx, int subID)` | 3 | Specific subcontainer. |
| `GetItemPosByID(out int, int idHi, int idLo)` | 3 | Find by 64-bit unique stack ID (split into two 32-bit halves). |
| `GetItemPosByID(out int, int, int, int subID)` | 4 | With subcontainer. |
| `GetItemAmount(out int, int idx)` | 2 | Stack count at index. |
| `GetItemAmount(out int, int idx, int subID)` | 3 | With subcontainer. |
| `SetItem(object item, int amount, int idx)` | 3 | Replace at index. |
| `SetItem(.., .., .., int subID)` | 4 | With subcontainer. |
| `SetItemAmount(int amount, int idx)` | 2 | Just change the count. |
| `SetItemAmount(.., .., int subID)` | 3 | With subcontainer. |
| `IsItemSelected(out bool, int idx)` / `IsItemSelected(out bool, int idx, int subID)` | 2-3 | Selection state. |
| `SelectItem(int idx, int subID)` / `SelectItem(int idx, int subID, bool select)` | 2-3 | Set selection. |
| `ClearSubContainer(int subID)` | 1 | Empty a specific subcontainer. |
| `GetSubContainerCount(out int)` | 1 | Number of subcontainers. |
| `GetCapacity(out int)` | 1 | Subcontainer 0 capacity. |
| `GetCapacity(out int, int subID)` | 2 | Specific subcontainer. |

`Barter(object partner)` and `WorkWithCorpse(object)` are not on
`CContainerScriptClass` itself — they live in `CContainerScriptContext`
(latent, opens UI).

### CInvItemClass — Item Instance (9 entries)

Source: `Game/Game/InvItemClass.{h,cpp}`. Created by `CreateInvItem()` (§1) or
returned by `CContainerScriptClass::GetItem`.

| Method | Params | Description |
|--------|--------|-------------|
| `GetItemID(out int)` / `SetItemID(int)` | 1 | DB id. |
| `SetItemName(string)` | 1 | Look up DB id by name, set. |
| `HasProperty(out bool, string)` | 2 | Property bag check. |
| `GetProperty(out var, string)` / `SetProperty(string, var)` | 2 | RW. |
| `RemoveProperty(string)` | 1 | Delete property. |
| `Compare(out bool equal, object other)` | 2 | Deep equality (id + properties). |
| `Clone(out object)` | 1 | Returns a new `CInvItemClass` with the same id + properties. |

### CActorScripted — Scripted Actor (11 entries)

Source: `Game/Game/ActorScripted.{h,cpp}`. The "generic" actor type; can host
multiple `GeoTrans` (sub-geometries with their own transform) and
`ParticleSystem`s. Inherits `CContainerScriptClass` (chained fallback).

| Method | Params | Description |
|--------|--------|-------------|
| `FindGeometry(string name, out object)` | 2 | Find a named sub-geometry. NULL on miss. |
| `FindParticleSystem(string name, out object)` | 2 | Find a named particle system. NULL on miss. |
| `SetPosition(vector)` / `GetPosition(out vector)` | 1 | World position (uses `m_vPos` directly — not the physics body). |
| `PlaceOnGround()` | 0 | Vertical raycast 200 down, snap to hit. |
| `Attach(object rigidBody)` | 1 | Follow another rigid body. |
| `Detach()` | 0 | Detach. |
| `CreateRigidBody(out object, vector pos, float radius)` | 3 | Physics body. |
| `CreateRigidBody(.., .., .., vector linearVel)` | 4 | With linear velocity. |
| `CreateRigidBody(.., .., .., .., vector angularVel)` | 5 | With angular velocity. |
| `CreateRigidBody(.., .., .., .., .., object skipActor)` | 6 | With "skip-collision" actor (don't collide with parent). |
| `ReportAttack(object target, object attacker)` | 2 | Send `CGameAttacked(attacker)` to `target`. |

#### Sub-objects (created by FindGeometry / FindParticleSystem):

**GeoTrans** (9 methods): `SetTranslation(v)`, `SetRotationX/Y/Z(angle)`,
`SetRotationYPR(yaw, pitch, roll)`, `SetRotation(dir)`, `SetRotation(dir, up)`,
`Enable()` / `Enable(bool)`.

**ParticleSystem** (5 methods): `AddSource(pos, dir, spreadAngle)`,
`UpdateSource(idx, pos, dir, spreadAngle)`, `GetSourceCount(out int)`,
`Enable()` / `Enable(bool)`, `Fade()` / `Fade(float t)`.

**RigidBody** (1 method): `Enable()` / `Enable(bool)`.

### CActorDoor — Door (5 methods)

| Method | Params | Description |
|--------|--------|-------------|
| `ClassifyActor(out bool isNegativeSide, object actor)` | 2 | True if the actor is on the door's "minus" side relative to its pivot plane. |
| `Open(bool negativeSide)` | 1 | Rotates to `m_fOpenMinusAngle` (true) or `m_fOpenPlusAngle` (false), with motion. |
| `Close()` | 0 | Rotates to 0, with motion. |
| `IsMoving(out bool)` | 1 | True during rotation. |
| `GetOpenSide(out int)` | 1 | -1 / 0 / +1 depending on `m_fCurAngle`. |

### CActorLight — Light Actor (1 method)

Source: `Game/Game/ActorLight.{h,cpp}`. Only:

| Method | Params | Description |
|--------|--------|-------------|
| `IsOn(out bool)` | 1 | On/off state. |

(The `Switch` / `SetColor` / `GetColor` methods are on **CActorLightStatic**,
its subclass — see below.)

### CActorLightStatic — Static Light Actor (3 methods)

Source: `Game/Game/ActorLightStatic.{h,cpp}`. Inherits CActorLight.

| Method | Params | Description |
|--------|--------|-------------|
| `Switch(bool on)` | 1 | Toggle. |
| `SetColor(vector rgb)` | 1 | RGB color (0..1). |
| `GetColor(out vector)` | 1 | Read RGB. |

### CActorStatic — Static Actor (8 methods)

Source: `Game/Game/ActorStatic.{h,cpp}`. Inherits CContainerScriptClass.

| Method | Params | Description |
|--------|--------|-------------|
| `GetActorName(out string)` | 1 | Internal name. |
| `SetVisibility(bool)` | 1 | Render on/off. |
| `GetPosition(out vector)` | 1 | Position. |
| `GetPFPolyID(out int)` | 1 | Pathfinding polygon under the actor. |
| `EnableSubset(string name, bool on)` | 2 | Toggle named mesh subset (e.g. variant material). |
| `EnableSubset(.., .., int slot)` | 3 | With slot index. |
| `SetUsable()` / `SetUsable(bool)` | 0-1 | Player can interact (E key). |

Plus a script context (1 entry): `DisableUpdate()` / `DisableUpdate(bool)` —
stop ticking the actor when unloaded.

### CActorPlayer — Player Actor (29 methods + 12 effect-context entries)

Source: `Game/Game/ActorPlayer.{h,cpp}`. The actor (world-side) — not the
controller (input-side). Methods are queries about player state.

| Method | Params | Description |
|--------|--------|-------------|
| `GetPosition(out vector)` | 1 | World pos. |
| `GetDirection(out vector)` | 1 | Look direction. |
| `GetPFPosition(out vector)` | 1 | PF-snapped position. |
| `HasItem(out bool, object item)` | 2 | Inventory check. |
| `IsOnGround(out bool)` | 1 | Standing? |
| `ApplyEffect(string name)` | 1 | Trigger a named effect (camera shake, vignette, …). |
| `SetDeathState()` | 0 | Trigger death cutscene/state. |
| `IsDead(out bool)` | 1 | Death state. |
| `IsAttacking(out bool)` | 1 | Attack state. |
| `IsWalking(out bool)` | 1 | Walking vs running. |
| `IsFlashlightOn(out bool)` / `IsVisirOn(out bool)` | 1 | Flashlight / visor state. |
| `GetTouchDistance(out float)` | 1 | Reach distance. |
| `GetHeight(out float)` / `GetEyesHeight(out float)` | 1 | Body / camera height. |
| `GetAttackDistance(out float)` | 1 | Melee range. |
| `LockCameraRoll(float)` / `UnlockCameraRoll(...)` / `SetCameraRoll(float)` / `GetCameraRoll(out float)` | 1 | Camera roll control (for tilt effects). |
| `LockCameraFOV(float)` / `UnlockCameraFOV(...)` / `SetCameraFOV(float)` / `GetCameraFOV(out float)` | 1 | FOV control. |
| `SelectWeapon()` / `SelectWeapon(int slotIdx)` | 0-1 | Pick a weapon. |
| `GetCurrentWeapon(out object)` | 1 | Currently-selected weapon item. |
| `DropItems(int subID)` / `DropItems(int subID, vector pos)` | 1-2 | Drop the entire subcontainer as a pile in front of the player (or at `pos`). |
| `IsWeaponHolstered(out bool)` | 1 | Holster state. |

**`CEffectScriptContext` sub-context** (12 entries) — accessed when a script
context is the player's effect-channel (e.g. shake/dizziness scripts):

| Function | Params | Description |
|----------|--------|-------------|
| `GetForce(out vector)` / `SetForce(vector)` | 1 | Player force vector (knockback). |
| `GetSpeed(out vector)` / `SetSpeed(vector)` | 1 | Velocity. |
| `SwitchFlashlight(bool)` | 1 | Toggle flashlight. |
| `SetFlashlightColor(vector rgb)` | 1 | Flashlight tint. |
| `SwitchVisir(bool)` | 1 | Toggle visor. |
| `PlayCameraMotion(string)` | 1 | Camera motion file. |
| `InterpolateCameraMotion(string, float)` / `InterpolateCameraMotion(string, float, float)` | 2-3 | Blend in/out. |
| `WaitForCameraMotionEnd()` | 0 | **Latent.** |
| `StopCameraMotion()` | 0 | **Latent.** Cancels the current motion. |

### CGameSceneOutdoor — Outdoor Scene (15 methods)

Source: `Game/Game/GameSceneOutdoor.{h,cpp}`. The outdoor city scene root.

| Method | Params | Description |
|--------|--------|-------------|
| `GetRegionCount(out int)` | 1 | Total regions on the world map (0 if no map). |
| `GetCurrentRegion(out int)` | 1 | Region the player is in. |
| `GetRegionByPt(out int, vector)` | 2 | Region ID at world point. -1 if outside. |
| `RemoveStationaryActor(object)` | 1 | Despawn a "stationary" NPC (region-bound). |
| `RemoveAllRegionActors(int regionID)` | 1 | Despawn every region-bound actor in the region. |
| `SetRegionActorCount(string actorClass, int regionID, int min, int max)` | 4 | Set spawn count bounds for a class in a region. |
| `SetRegionActorCount(.., int, int, vector pos, vector dir)` | 6 | With explicit spawn transform. |
| `SetRegionActorCountByType(string typeName, .., ..)` / `(.., .., .., .., vector, vector)` | 4-6 | Same with type-id lookup. |
| `AddStationaryActor(string class, object scriptOwner, int regionID, vector pos, vector dir)` / `(.., .., .., .., .., string xml)` | 5-6 | Spawn a region-bound NPC. |
| `AddStationaryActorByType(...)` | 5-6 | Same with type-id lookup. |
| `GetMap(out object)` | 1 | The scene's `IWorldMap`. |
| `CanPlayThunder(out bool)` | 1 | Whether the scene is currently in an "open sky" state allowing thunder. |

#### Stationary actor sub-object (returned by AddStationaryActor):

| Method | Params | Description |
|--------|--------|-------------|
| `Remove()` | 0 | Despawn. |
| `GetActor(out object)` | 1 | Underlying actor; NULL if not yet loaded. |

### CWorldMap — World Map (15 methods)

Source: `Game/Game/WorldMap.{h,cpp}`. The map UI's data source.

| Method | Params | Description |
|--------|--------|-------------|
| `GetMarkCount(out int)` | 1 | Linear count of marks. |
| `GetMark(out object, int idx)` | 2 | Mark by index — uses the enumerator to walk to `idx`. |
| `GetSize(out int w, out int h)` | 2 | Map dimensions in map-pixels. |
| `ConvertToMapCoordinates(out vector mapXY, vector worldXYZ)` | 2 | World→map. |
| `ConvertToWorldCoordinates(out vector world, vector mapXY)` | 2 | Map→world. |
| `AddMark(out object mark, string name, vector pos, int kind, float)` | 5 | Add a mark. |
| `AddMark(.., .., .., .., .., float)` | 6 | With extra float (varies). |
| `FindMark(string name, out object)` | 2 | Lookup. |
| `ClearMarks()` | 0 | Wipe all. |
| `GetMapParams(out, out, out)` | 3 | Read three params (kind/zoom/etc). |
| `SetMapParams(.., ..)` / `SetMapParams(.., .., ..)` | 2-3 | Write. |
| `GetObjectFromPoint(out object, vector mapXY, float radius)` | 3 | Map-coord hit-test. |
| `GetObjectID(out int, object)` | 2 | Reverse lookup. |
| `CreateObjectHighlight(out object, int objectID)` | 2 | Allocate a highlight overlay. |

#### CMark sub-object:

| Method | Params | Description |
|--------|--------|-------------|
| `Remove()` | 0 | Delete this mark. |
| `GetLocator(out vector)` | 1 | Mark position. |
| (plus 3 more: `GetID`, `GetKind`, `GetTime`) | 1 | |

#### CHighlight sub-object:

| Method | Params | Description |
|--------|--------|-------------|
| `Render(8 params)` | 8 | Issue a draw for the highlight at given map coords. |

### CScriptVector — Vector Collection

Source: `Game/Game/ScriptVector.h` (templated). **Methods are lowercase**.

| Method | Params | Description |
|--------|--------|-------------|
| `add(value)` | 1 | Append. |
| `set(int idx, value)` | 2 | Overwrite at index. Returns false on OOB. |
| `size(out int)` | 1 | Length. |
| `resize(int)` | 1 | Resize (default-constructs new elements). |
| `get(int idx, out value)` | 2 | Read at index. |
| `clear()` | 0 | Empty. |
| `remove(int idx)` / `remove(int idx, int count)` | 1-2 | Remove by index. |
| `erase(value)` / `erase(value, out bool removed)` | 1-2 | Remove first matching element. |
| `find(value, out int idx)` | 2 | Linear search. -1 if missing. |
| `in(value, out bool)` | 2 | Existence check. |

### CScriptSet — Set Collection

Source: `Game/Game/ScriptSet.h` (templated). **Methods are lowercase**. No
`Iterator()` (old docs were wrong) — iterate with `CScriptObjectArray` returned
by other APIs (e.g. `Intersect`).

| Method | Params | Description |
|--------|--------|-------------|
| `add(value)` / `add(value, out bool inserted)` | 1-2 | Returns whether it was actually a new element. |
| `size(out int)` | 1 | Cardinality. |
| `clear()` | 0 | Empty. |
| `in(value, out bool)` | 2 | Membership check. |
| `erase(value)` / `erase(value, out bool removed)` | 1-2 | Remove. |

### CScriptObjectArray — Iterator over IScriptClass*

Source: `Game/Game/ScriptObjectArray.{h,cpp}`. Returned by APIs like
`Intersect` (with 4 args) and the actor enumerators. Not directly constructible
from scripts.

| Method | Params | Description |
|--------|--------|-------------|
| `Restart()` | 0 | Reset cursor to 0. |
| `Next(out bool more)` | 1 | Advance; out-bool is `true` if there was an element. |
| `Next(out bool more, out object element)` | 2 | As above, plus the element. |

---

## Cross-reference — old-docs inaccuracies fixed in this pass

While auditing the original sources I found these issues in the prior doc and
corrected them above:

1. **`NewGame` is NOT in CStdScriptContext.** It lives on `CUIGameMenuContext`
   (the game-menu script context only — invoked from the main-menu UI scripts).
2. **`RandVec2D` takes two `out float` args**, not `(out vector, float radius)`.
   The float param is **unused**.
3. **`AddItemActor` is unreachable** in this build due to a tautological
   `if (ulParmCount != 6 || ulParmCount)` early-return.
4. **`Hold(object)` (1-arg) is unreachable** — declared but not registered.
5. **Player-Context functions live in `CCPPlayer::CScriptContext`**, not in
   `CPlayerWeaponScriptContext`. The weapon context (§4) is a separate, small
   context with only 5 entries (`GetGeometryLocator`, `MakeBillboard`,
   `RemoveBillboard`, `GetLitColor`, `SetLitColor`).
6. **`CActorLight` only has `IsOn`**. The `Switch`/`SetColor`/`GetColor` methods
   are on its subclass `CActorLightStatic`.
7. **`CActorFog::SwitchFlashlight`/`SwitchVisir`/`Get/SetForce`/`Get/SetSpeed`
   do not exist.** The Switch/Set methods listed in old docs belong to
   `CCPPlayer::CScriptContext` or `CActorPlayer::CEffectScriptContext`.
8. **`CScriptVector` and `CScriptSet` method names are lowercase**
   (`add`, `size`, `clear`, `in`, `erase`, `get`, `set`, `resize`, `remove`,
   `find`), not the title-case shown previously. There is no `Iterator()`
   method.
9. **`SetAttackState` on the player controller actually READS the m_bAttacking
   flag** (the implementation uses `pVars[0]->Get(...)` rather than `Set`).
   This is a likely bug in the original code; documented as observed.
10. **`SignalDeath(object)`** sends the death event to **self**, not to the
    passed object. The argument is the *deceased*, but the receiver is the
    script's owner.
11. **`Intersect`** and **`Trigger`** are documented based on the actual order
    in the source: `BroadcastPlayerDamage(damager, scene, player)` etc.
