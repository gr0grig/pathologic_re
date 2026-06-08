# Engine Architecture (COM-style)

How the engine is structured at the **module + interface** level — how
subsystems are loaded, how they communicate, and how custom code (game
logic, renderers, sound backends) plugs in.

This is a software-engineering view; the bytes-on-disk view is in the
per-format documents.

---

## 1. Module map

The runtime consists of several DLLs that load in a fixed order:

```
Game.exe         (the executable; main loop)
   ↓ links/loads
Engine.dll       (subsystems orchestration, scene graph, scripts)
Renderer.dll     (D3D9 backend — Renderers/D3D9/)
Sound.dll        (OpenAL backend — Sound/)
UI.dll           (UIManager + override stack — UI/)
VFS.dll          (asset archives — see vfs_format.md)
GameLogic.dll    (game-specific actor classes — Game/Game/)
                 (this is the only one that knows about Pathologic
                  specifics; everything below is generic engine)
LifeStudioHeadAPIS.dll  (closed-source face rig — see formats/lsh.md)
zlib1.dll        (compression)
```

`Engine.dll` is the keystone — it exposes the `IEngineFactory`
interface (`Engine/Core/IEngineFactory.h`) that the executable uses
to construct everything else. Renderer / Sound / UI are loaded by
name via `IEngineFactory::CreateRenderer / CreateSoundManager /
CreateInterface`. Their DLL paths come from `init.cfg`.

---

## 2. The `IGeneric` interface model

Every interface in the engine derives from `IGeneric`, a thin
COM-clone defined in `Engine/Common/IGeneric.h`:

```cpp
class IGeneric : public IBase {
public:
    virtual bool       Release(void) = 0;
    virtual IGeneric *QueryInterface(InterfaceAID AID) = 0;
};
```

- `Release()` decrements the refcount; returns `true` when the object
  was actually destroyed. There is **no `AddRef`** — the COM model is
  simplified to "the creator owns one reference". Helper RAII type
  `release_ptr<T>` (`IGeneric.h:50`) calls `Release` automatically.
- `QueryInterface(AID)` returns a pointer cast to whichever
  *secondary* interface the AID identifies, or `NULL`. AIDs are
  32-bit hash constants (e.g. `AID_EngineFactory = 0x7c706f87`)
  declared in each interface header.

Convenience macros expand to canonical `Release` + `QueryInterface`
implementations:

| Macro                         | Effect                                                    |
|-------------------------------|-----------------------------------------------------------|
| `STD_REFS`                    | `Release` deletes `this`.                                  |
| `STD_REFS_NODELETE`           | `Release` is a no-op (singletons).                         |
| `STD_QUERY1(name)`            | Single-interface QueryInterface.                           |
| `STD_QUERY2`…`STD_QUERY5`     | Two- to five-interface QueryInterface (switch table).     |
| `STD_QUERY_BEGIN` … `STD_QUERY_END` | Open-ended switch.                                  |
| `STD_QUERY_DEFAULT(par)`      | Forward unknown AIDs to a parent class.                    |

There is **no IUnknown-equivalent thread-safety guarantee**. The
engine is single-threaded for game logic; the streamer and audio run
on background threads, but they only touch their own objects.

---

## 3. The factory entry-point

The executable's startup code does roughly:

```cpp
HMODULE hEngine = LoadLibrary("Engine.dll");
auto pCreate    = (CreateFactoryInstance_t)GetProcAddress(hEngine, "CreateFactoryInstance");
IEngineFactory *pFactory = pCreate();
IRenderer      *pR  = pFactory->CreateRenderer("Renderers/D3D9.dll", hwnd, …);
ISoundManager  *pSM = pFactory->CreateSoundManager("Sound/OpenAL.dll", …);
IUIManager     *pUI = pFactory->CreateInterface("UI.dll", pEngine, log);
IEngine        *pE  = pFactory->CreateEngine(pStrDB, pStreamerPool,
                                             pR, pSM, log, pShell);
```

`CreateFactoryInstance` is the **only exported function** in
`Engine.dll` (stdcall, ordinal 1). All other subsystem creation
flows through `IEngineFactory` methods (`IEngineFactory.h`):

| Method                      | What it constructs                              |
|-----------------------------|-------------------------------------------------|
| `CreateParamsArray`         | Empty `ICreateParamsArray`                       |
| `CreateParamsFromXML`       | `ICreateParams` wrapping an XML node              |
| `CreateIniParser`           | `IIniParser` (uses `Game/Engine/IniParser.cpp`)  |
| `CreateXMLParser`           | `IXMLParser` (`SimpleXML.cpp`)                    |
| `CreateLoadStateData`       | `ILoadStateData` for save loading                 |
| `CreateSaveStateData`       | `ISaveStateData` for save writing                 |
| `CreateFileSystemShell`     | `IFSShell` — mount-point manager                  |
| `CreateRenderer`            | Loads + initialises the renderer DLL              |
| `CreateSoundManager`        | Loads + initialises the sound DLL                 |
| `CreateInterface`           | Loads + initialises the UI DLL                    |
| `CreateEngine`              | The big one — central `IEngine` instance         |
| `CreateStringDatabase`      | `IStringDatabase`                                 |
| `CreatePlaneGrid`           | World-map region grid (see formats/map.md)        |
| `CreateStreamer`            | `IStreamer` for async I/O                         |

---

## 4. The `IEngine` object

`IEngine` (`Engine/Core/IEngine.h`) is the engine's main running
state. Implementation: `CEngine` in `Game/Engine/CEngine.cpp`. It
holds:

- The `IFSShell` (mounted file systems — Actors, Geometries, …).
- The `IRenderer`, `ISoundManager`, `IUIManager` pointers.
- The `IEventManager` (global event pump).
- The `IScriptManager` (compiled scripts + running tasks — see
  [tasks.md](tasks.md)).
- The `IConsole` + log readers + ICmdProcessor.
- The `IStringDatabase` (`formats/dat_strings.md`).
- The `IStreamerPool` + a queue of `IStreamerJob`s.
- The `ISceneManager` (currently-loaded scenes).
- A list of registered `IActorFactory`s (one of which is
  `CAFBuiltIn` from `Game/Game/AFBuiltIn.cpp` — see
  [`formats/actor_placement.md`](formats/actor_placement.md) §2).

The game's main loop (`Game.cpp::Run`) drives `IEngine` by repeatedly
calling `Update(dt)`. Each tick advances scripts, evaluates events,
runs streaming, then renders.

---

## 5. The mount-point file system

`IFSShell` (`Game/Engine/FSShell.cpp`) translates the **named mount
points** used throughout the code into `IFileSystem` instances:

```cpp
m_NameMap.insert("actor", FS_STD_ACTOR);
m_NameMap.insert("geom",  FS_STD_GEOMETRY);
m_NameMap.insert("tex",   FS_STD_TEXTURE);
m_NameMap.insert("scene", FS_STD_SCENE);
m_NameMap.insert("sound", FS_STD_SOUND);
m_NameMap.insert("font",  FS_STD_FONT);
m_NameMap.insert("str",   FS_STD_STRING);
m_NameMap.insert("world", FS_STD_WORLD);
m_NameMap.insert("ui",    FS_STD_UI);
```

Each mount points at one `.vfs` archive (`Actors.vfs`,
`Geometries.vfs`, …). The runtime obtains a mount by calling
`pEngine->GetShell()->GetFileSystem(FS_STD_ACTOR)` and then uses
`IFileSystem::CreateMappedLoadObject(name)` to read a file. Loose
files on disk override the archive ([vfs_format.md §5.1](vfs_format.md)).

---

## 6. World, scene, actor model

```
ICustomWorld         ◀── game-defined; lives in GameLogic.dll
   │
   │ owns
   ▼
IWorld               ◀── engine; CWorld in World.cpp
   │
   ├── ISceneManager
   │     └── IScene*[]        // currently loaded scenes
   │              │
   │              ├── ISceneIndoor   (one of two flavours)
   │              ├── ISceneOutdoor
   │              └── …
   │
   ├── IActorFactory*[]       // registered factories (CAFBuiltIn + game-defined)
   ├── m_Actors set           // every live IActor in the world
   └── IEventManager*         // global broadcast
```

- `IWorld::CreateActor(name, params)` reads `Actors.vfs/<name>`, gets
  the u32 type, dispatches through `m_ActorFactories` until one
  accepts. See [`formats/actor_placement.md`](formats/actor_placement.md) §2.
- `IScene*` owns its actor lifetime (created via
  `CreateActor` then `AddActor(scene)`).

---

## 7. The script subsystem

`IScriptManager` (`Game/Engine/ScriptManager.cpp`) compiles + caches
`.bin` scripts, runs them as cooperative tasks, dispatches events.
Bound to:

- An `IScript*` per loaded script.
- A `IScriptContext*` per running instance (one actor may own one or
  many script instances).
- The VM that executes opcodes — see [vm.md](vm.md).

Event flow:

```
host fires event  →  IEventManager broadcasts to receivers
                  →  matching IEventReceiver-implementing actor
                  →  its bound IScriptContext->OnEvent(eventID, params)
                  →  VM resumes the task waiting on that event id
```

---

## 8. Subsystem boundaries

The engine uses interface-only boundaries between DLLs:

- The renderer never sees actor classes; it only takes geometry +
  texture + light-list parameters through `IRenderer`,
  `IGeometryStatic`, `IRImage`, `ILight*`. The game side passes
  these objects through opaque `IGeneric *` references.
- The sound manager never sees actor classes; sounds are
  position-only.
- The UI manager doesn't know what a "diary" is; it just renders
  forms and dispatches input events to a script (`UIDialogContext`,
  `UIDiaryContext`, … are the game-side bridges).

This is what makes the same `Engine.dll` reusable for *The Void* with
a different `Game.dll` (the [editions_diff.md](editions_diff.md)
covers the divergence).

---

## 9. Memory and pointer rules

- All long-lived heap allocations go through the engine's custom
  allocator (`Engine/Common/mem_alloc.cpp`, `Engine/Common/malloc/`).
- `new`/`delete` are replaced by the `dnew` / `delete` macros that
  forward to the custom allocator with debug-build tagging.
- Object lifetime is **refcounted by Release** at the interface
  boundary, but most engine-internal pointers are direct (with
  `release_ptr<T>` RAII).
- No exceptions cross DLL boundaries; the engine catches them at the
  interface line and logs.

---

## 10. Cross-references

- VFS asset archives the FSShell wraps:
  [vfs_format.md](vfs_format.md).
- File-format catalogue: [`formats/README.md`](formats/README.md).
- Script VM: [vm.md](vm.md), [tasks.md](tasks.md).
- Save format (uses the same factory mechanism for polymorphic
  serialisation): [save_format.md](save_format.md).
- Render pipeline plugged in through `IRenderer`:
  [render_techniques.md](render_techniques.md).
