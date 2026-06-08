# Dialogue, Diary, and World-Map UI

How the game's three "reading" UIs are structured. They share the
same data layer (string database + scripted UI forms) but each has
its own override context class.

- **Dialogue**: `CUIDialogContext` —
  `Game/Game/UIDialogContext.{cpp,h}`. UI form: `UI.vfs/dialog.xml`.
  Override factory: `Game/Game/DialogOverride.{cpp,h}`.
  Conversation logic: `Game/Game/Conversation.{cpp,h}`.
- **Diary** (player journal): `CUIDiaryContext` —
  `UIDiaryContext.{cpp,h}`. UI form: `UI.vfs/diary.xml`.
  Override: `DiaryOverride.{cpp,h}`. Data: `Diary.{cpp,h}`.
- **World map**: `CUIMapContext` — `UIMapContext.{cpp,h}`.
  UI form: `UI.vfs/worldmap.xml`. Override:
  `MapOverride.{cpp,h}`. Map bitmap + per-pixel pick:
  [`formats/map.md`](formats/map.md). Marks: `WorldMap.cpp` (see
  `CWorldMap::CMark`, `IWorldMapMark`).

---

## 1. The Override stack

UI contexts are pushed onto an **override queue**
(`IOverrideQueue` — `Game/Game/IOverrideQueue.h`). Each override:

- Pauses world simulation (or doesn't — `WorldStopOverride.cpp`
  controls this).
- Switches input focus to its own UI script.
- On dismissal, pops itself and resumes the underlying state.

Override classes (`Game/Game/*Override.cpp`):

| Class                          | What it overrides                                                |
|--------------------------------|------------------------------------------------------------------|
| `CDialogOverride`              | NPC dialogue screen                                              |
| `CDiaryOverride`               | Player diary                                                     |
| `CMapOverride`                 | World map                                                        |
| `CInventoryOverride`           | Inventory UI                                                      |
| `CTradeOverride`               | Trade with NPC                                                    |
| `CChooseItemOverride`          | Item-picker prompt                                                |
| `CPlayerStatOverride`          | Stats / HUD detail screen                                         |
| `CMessageOverride`             | One-line message popup                                            |
| `CGameMenuOverride`            | Pause / settings menu                                             |
| `CGameOverOverride`            | Death screen                                                      |
| `CInitGameOverride`            | New-game character select                                         |
| `CInitMovieOverride`           | Intro cinematic                                                   |
| `CInGameMovieOverride`         | Cinematic interlude                                               |
| `CMovieOverride`               | Generic movie playback                                            |
| `COverrideFactoryPlayMovie`    | Factory creating `CMovieOverride`s on demand                       |
| `CSleepLoopOverride`           | "Sleep until …" loop                                               |
| `CWorldStopOverride`           | Pauses world updates without showing a UI                          |
| `CWindowOverride`              | Generic window (parent class for several of the above)             |

---

## 2. Dialogue

### 2.1 Triggering

Scripts initiate a conversation by calling a host API (see
[script_api.md](script_api.md)) like
`@StartConversation(npc, dialogue_id)`. The engine queues a
`CDialogOverride` on the override stack and instantiates a
`CConversation` with the dialogue's "tree" data.

### 2.2 Conversation data

A `CConversation` carries:

- A **current node** (a question + a list of player replies).
- The full **node graph** (loaded from the bound dialogue script and
  the string database).
- Per-node **conditions** (script flags / variables that must hold).
- Per-reply **side effects** (give item, change reputation, set flag).

Each conversation node is keyed by an integer ID into
`Strings.vfs/main.dat` (`formats/dat_strings.md`). The NPC's voice
line in that node is a string-ID lookup; the audio is in
`Sounds.vfs` ([`formats/ogg.md`](formats/ogg.md)) under a name
matching the string ID convention.

### 2.3 UI binding

The `dialog.xml` form (`UI.vfs/dialog.xml`) defines the visual layout:
NPC portrait, scrolling text area, reply buttons. Its bound script
(`Scripts.vfs/ui_dialog.bin`) receives node state from the C++ side
through `CUIDialogContext` and renders accordingly.

When the player selects a reply, the script fires the script-side
event back to the conversation object, which advances the graph and
triggers any side effects (likely through `RunScript("dialog_…")`).

---

## 3. Diary

The diary is the **persistent player journal**: unlocked entries,
character notes, quest summaries.

- `CDiary` (`Diary.cpp`) holds an ordered list of `CDiaryEntry`s.
- Each entry: title string ID, body string ID, date, character it
  refers to, **read flag**.
- `AddEntry(stringID, …)` is called from scripts when a new entry
  unlocks; the UI then shows the "new entry" notification.

Save format: `CDiary::SaveObject` writes the entries directly into
the save stream ([save_format.md](save_format.md)). String IDs are
interned by the save system, so a thousand-entry diary doesn't
bloat the save.

UI form: `UI.vfs/diary.xml` + script `ui_diary.bin`. The script
queries `CDiary` for entry counts, populates list items, handles
scrolling.

---

## 4. World map

The world-map UI uses three data sources together:

1. **Background bitmap** — the painted city map, stored as a `.tex`
   or `.tga` in `Textures.vfs`. Loaded indirectly through
   [`formats/map.md`](formats/map.md).
2. **Region grid** — the polygonal partition from the same `.map`
   file's PlaneGrid prefix. Used for region-name labels and
   highlight rendering.
3. **Per-pixel object grid** — 16-bit indices into the OBJECT_DATA
   array, also from `.map`. Resolves a mouse click to an object id
   in O(1).

`CWorldMap::CMark` (`WorldMap.cpp:405`) represents a **mark**: a pin
placed on the map by the player or by a script. Each mark has a
position (in map texture pixels), a colour, a tooltip string ID, and
an associated world location (so "find the way to this mark"
queries can run pathfinding).

UI form: `UI.vfs/worldmap.xml` + script `ui_worldmap.bin`. The
script handles pan/zoom, mark placement, and the "fast travel" reply
flow (which is itself another override push on confirm).

---

## 5. Cross-references

- World-map bitmap format: [`formats/map.md`](formats/map.md).
- String database backing all three UIs:
  [`formats/dat_strings.md`](formats/dat_strings.md).
- UI form schema: [`formats/ui_xml.md`](formats/ui_xml.md).
- Bound scripts: [`formats/bin.md`](formats/bin.md) plus
  [bin_format.md](bin_format.md).
- Save state: [save_format.md](save_format.md).
- Inventory and trade flows: [inventory.md](inventory.md).
