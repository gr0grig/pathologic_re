# Save-Game Binary Format

How the Pathologic 2005 engine serialises the running game state to disk
and reads it back. Save files live in `alpha/saves/` (extension
`.sav`); the format is a streaming binary blob with no compression and
no checksum.

- **Top-level writer**: `CGameWorld::SaveObject(IStorObject *, ISaveStateData *)` —
  `Game/Engine/GameWorld.cpp:1383-1412`.
- **Top-level reader**: matching `CGameWorld::CGameWorld(const char *&,
  ILoadStateData *)` constructor at `GameWorld.cpp:1339-1381`.
- **CLI entrypoints**: `CGenCmdProcessor::Save` / `Load`
  (`GenCmdProcessor.cpp:471, :505`) — bound to the console
  `save` / `load` commands.
- **Framework**: `CSerWriter` / `CSerReader` template wrappers around
  `IStorObject` / `IMMLoadObject` (`Game/Common/StdFactory.h:250-371`).

---

## 1. Streaming model

A save file is a **flat byte stream**. Each object writes its
serialisable fields one after another in `operator<<` order; the load
constructor reads them in the same order. There are no per-field tags,
no length prefixes around objects, and no padding for alignment —
position in the stream is the only "schema".

The stream is *self-describing only at the boundary of each
serialised pointer*: the writer emits a **factory ID** before each new
object instance so the reader knows which constructor to dispatch
to. Everything inside an object is positional.

---

## 2. Primitive encoding

All scalars are **little-endian** (the only target is x86-32 Windows).

| Type      | Bytes | Notes                                         |
|-----------|------:|-----------------------------------------------|
| `bool`    | 1     | 0 = false, anything else true.                |
| `u8`/`i8` | 1     |                                               |
| `u16`/`i16` | 2   |                                               |
| `u32`/`i32` | 4   |                                               |
| `u64`/`i64` | 8   |                                               |
| `f32`     | 4     | IEEE 754                                       |
| `f64`     | 8     | IEEE 754                                       |
| `CVector` | 12    | three `f32`                                    |
| `CBox3D`  | 24    | two consecutive `CVector` halves (center + extent) |
| `CMatrix` | varies| usually 48 bytes (4 × 4 of `f32`)              |
| `CQuat`   | 16    | four `f32` (x, y, z, w)                        |

Compound structs use `swriter.Write(&obj, sizeof(obj))` — a raw
memcpy. There is no portable format; the struct's C++ layout is the
on-disk layout.

---

## 3. Strings — interning + length prefix

The save framework **interns** every string written, deduplicating
repeated names like `"head.mot"`, `"Bench01.mesh"`, asset paths, etc.
The encoding is in `CSerWriterPolicy` (`StdFactory.h:270-295`):

```
1-byte flag:
    0x00 → new string (inline)
    0x01 → reference to previously interned string

if flag == 0x00:           // first occurrence
    CEString               // length-prefixed (1 or 2 bytes) + ASCII bytes
                           // ─ see VFS doc §3.4 for the exact length encoding

if flag == 0x01:           // back-reference
    u32 stringID           // 0-based table index of the previously written CEString
```

`ISaveStateData::RegisterString` (`SaveStateData.cpp:31-41`)
maintains a `std::map<CEString, u32>` and returns `-1` on first
occurrence (so the writer emits an inline copy) or the existing ID
(so the writer emits the reference form).

Wide strings (`CEStringW`) use the same scheme with UTF-16LE bytes
instead of ASCII.

---

## 4. Pointers — factory-dispatched polymorphism

Object pointers are serialised through `CSerPtr<T, AID>` and friends
(`StdFactory.h:600-630`):

```
u32 objectID:
    -1 (0xFFFFFFFF) → new object follows
    else            → reference to previously written object ID

if objectID == -1:
    u32 factoryID
    <constructor body>     // calls the registered constructor for that factory ID
```

`factoryID` keys into `IGlobalFactory` (`Game/Game/GlobalFactory.cpp:51-58`).
Two ID ranges:

| Range      | Owner                       | Examples                                    |
|------------|-----------------------------|---------------------------------------------|
| 0–999      | Game-side `TGame*Factory`   | `TGameWorldFactory=0`, `TInvItemClassFactory=61` (see `FactoryList.h:44-113`) |
| 1000+      | Engine-side                 | 1000 = scripts, 2000-2007 = actors / scenes (see `EngineGlobalFactory.cpp`) |

Each factory entry stores **two function pointers**: a `SaveObject`
callback and a `(const char *&, ILoadStateData *)` constructor
pointer. Dispatch is therefore O(1) hash-map lookup.

---

## 5. Vectors / sets / maps

STL containers serialise as `(u32 count, element × count)`. There is
no end-marker; the count is authoritative.

```
swriter << myVector;       // → [u32 size][elem0][elem1]…
swriter << myMap;          // → [u32 size]{[key][value]} × size
```

---

## 6. Top-level layout

`CGameWorld::SaveObject` writes the following sequence
(`GameWorld.cpp:1383-1412`):

```
1.  CSerPtr<IWorld*>         — the engine-side world pointer (recursive serialise)
2.  CEString                 — world filename (e.g. "world_danko.xml")
3.  Flush()                  — commit the writer (no on-disk side-effect; runtime only)
4.  CSerPtr<IScene*>         — main outdoor scene (city.osc)
5.  CSerPtr<IActor*>         — the player actor
6.  CEString × 2             — music script filename, weather script filename
7.  f32 × 4                  — time-of-day breakpoints
                              (m_fTimeDawn, m_fTimeSunset, m_fAngleDawn, m_fAngleSunset)
8.  Map<…>                   — script-side game variables
9.  CSerPtr<IScene*>         — last active scene (last room player was in)
10. CSerPtr<IOverrideQueue*> — UI override queue state
11. CSerPtr<CDiary*>         — diary entries unlocked
12. CSerPtr<IScriptContext*> — global script context
13. CSerPtr<IMusic*>         — music subsystem state
14. CSerPtr<IWeather*>       — weather subsystem state
15. CSerPtr<IScript*>        — world-level script (world_danko.bin)
```

`IWorld` (step 1) is the heaviest pointer: serialising it recurses
into every actor in every loaded scene plus all per-actor inventories,
script states, sound list positions, and animation phases.

Empirical sample from `quicksave1.sav` first 64 bytes:

```
01 0A 00 00 00              flag=ref, ID 0x0A (probably from string table)
FF FF FF FF                 -1: new object
00 00 00 00                 factory ID 0 = TGameWorldFactory
C2 B8 B2 3F                 f32 = 1.396 (time-of-day fragment)
01 0B 00 00 00              another ref
FF FF FF FF
0A 00 00 00                 factory ID 10
01 00 00 00                 …
04 68 65 61 64              inline string "head"
08 68 65 61 64 2E 6D 6F 74  inline string "head.mot"
01                          flag=ref
D0 07 00 00                 0x07D0 = 2000 = scene factory ID
…
```

---

## 7. Per-actor example: `CActorStatic`

`ActorStatic.cpp:165-190` (`SaveObject`) writes:

```cpp
CSerPtr<ICustomWorld *, AID_CustomWorld>   // world ref
                                            //   (typically already-seen → 5-byte reference)
swriter.Flush();
CInvItemContainer::SaveState(...);          // inventory contents
CSerPtr<ISceneInterface *>                  // owning scene
CEString m_strActorName                     // actor filename
CEString m_strXMLName                       // Extras XML filename
bool      m_bUsable
CSerPtr<IScript *>                          // bound script (if any)
bool      m_bVisible
bool      m_bNoUpdateUnloaded
raw       CBox3D m_Box (24 bytes)
CVector   m_vPivot (12 bytes)
CEString  m_strGeomName
bool      m_bDynamicShadows
vector    m_DisabledSubsets                  // u32 count + items
u32       m_ulDisposeState
CSerPtr<ICreateParamsArray *> m_pProperties
```

The matching load constructor (`ActorStatic.cpp:118-150`) reads in
**exact** same order. Every actor class follows the same pattern.

---

## 8. No compression, no checksum

- The whole save file is raw bytes.
- No file magic / signature in the header — the first bytes are the
  beginning of the first serialised pointer (factory-ID prefix).
- No length-of-file field.
- No checksum; a corrupted save manifests as a string-length read
  going past EOF, throwing an exception that the loader catches by
  abandoning the load.

This makes save files easy to inspect with a hex editor, but also
easy to corrupt silently.

---

## 9. Patching saves

Two practical approaches:

1. **Replace strings** — change `"world_danko.xml"` → another filename
   at the same length, or any actor name string. Strings are intern-
   compressed, so finding them is straightforward.
2. **Toggle bools** — the booleans next to `usable`, `visible`,
   `dynamicShadows` are 1-byte and easy to flip.

Changing **anything that affects subsequent offsets** (string
lengths, vector sizes, anything other than fixed-size scalars)
requires walking the file from the start to maintain stream
positions. There is no random access.

---

## 10. Cross-references

- VFS string length encoding (used here): [vfs_format.md §3.4](vfs_format.md).
- Per-actor `SaveObject` / load constructor pairs: every
  `Game/Game/Actor*.cpp`.
- Factory ID list: `Game/Game/FactoryList.h`,
  `Game/Engine/EngineGlobalFactory.cpp`.
- Engine-side serialisation primitives (interfaces, not
  implementations): `Engine/Common/ISerializable.h`,
  `Engine/FileSystem/IStorObject.h`.
