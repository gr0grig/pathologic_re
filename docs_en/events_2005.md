# Pathologic 2005 — Event ID Reference

Mapping of script-level event numbers to their names in the original game source.

## Two numbering systems

The 2005 source uses **two independent numbering schemes** for events:

1. **Script event IDs** — declared in `.sci` headers via the `event Name N;` directive.
   These IDs are baked into compiled `.bin` script files and are what scripts use to
   register handlers (`EventEnable` / `EventDisable` instructions).
2. **C++ `GAME_EVENT_TYPE` enum** — internal C++ ordering of event classes
   (`SRC/PlagueCity/Game/Game/Events.h`, lines 20–35). These enum values do **not**
   match the script IDs; they are only used internally for type dispatch
   (`IGame::GetType()`).

The bridge between the two is `CGameXxx::SendScriptEvent()` in
`SRC/PlagueCity/Game/Game/Events.cpp`, which calls
`pScript->SendEvent(<script-id>, ...)`. The C++ class → script-ID mapping is
extracted from those `SendEvent()` calls below.

---

## Main game events — `std.sci`

Source: `SRC/Scripts/script_sources/std.sci` (lines 4–53).

Bound on each game/quest object via `EventEnable(<ID>)`.

| Script ID | Script name (`std.sci`)     | C++ class (`Events.h/Events.cpp`)   | `GAME_EVENT_TYPE` enum value |
|----------:|-----------------------------|-------------------------------------|------------------------------|
|         0 | `OnUse`                     | `CGamePlayerUse`                    | `GAME_EVENTT_PLAYERUSE` (0)  |
|         1 | `OnSee`                     | `CGameSee`                          | `GAME_EVENTT_SEE` (1)        |
|         2 | `OnStopSee`                 | `CGameStopSee`                      | `GAME_EVENTT_STOPSEE` (2)    |
|         3 | `OnHear`                    | `CGameHear`                         | `GAME_EVENTT_HEAR` (3)       |
|         4 | `OnStopHear`                | `CGameStopHear`                     | `GAME_EVENTT_STOPHEAR` (4)   |
|         5 | `OnLoad`                    | `CGameActorLoad`                    | `GAME_EVENTT_ACTORLOAD` (5)  |
|         6 | `OnUnload`                  | `CGameActorUnload`                  | `GAME_EVENTT_ACTORUNLOAD` (6)|
|         7 | `OnTimer`                   | `CGameTimer`                        | `GAME_EVENTT_TIMER` (7)      |
|         8 | `OnRegionChange`            | `CGameRegionChange`                 | `GAME_EVENTT_REGION_CHANGE` (8) |
|         9 | `OnGameTime`                | `CGameGameTime`                     | `GAME_EVENTT_GAME_TIME` (9)  |
|        10 | `OnCollision`               | `CGameCollision`                    | `GAME_EVENTT_COLLISION` (10) |
|        11 | *(no script alias)*         | `CGameDialogReply`                  | `GAME_EVENTT_DIALOG_REPLY` (11) |
|        12 | `OnMusicChange`             | `CGameMusicChange`                  | `GAME_EVENTT_MUSIC_CHANGE` (12) |
|        13 | `OnPlayerStartShooting`     | `CGamePlayerStartShooting`          | `GAME_EVENTT_PLAYER_START_SHOOTING` (13) |
|        14 | `OnPlayerStopShooting`      | `CGamePlayerStopShooting`           | `GAME_EVENTT_PLAYER_STOP_SHOOTING` (14) |
|        15 | `OnPlayerHolsterWeapon`     | `CGamePlayerHolsterWeapon`          | `GAME_EVENTT_PLAYER_HOLSTER_WEAPON` (17) |
|        16 | `OnPropertyChange`          | `CGamePropChanged`, `CGamePropChanged2` | `GAME_EVENTT_PROP_CHANGED` (18), `..._PROP_CHANGED2` (19) |
|        17 | `OnAttacked`                | `CGameAttacked`                     | `GAME_EVENTT_ATTACKED` (20)  |
|        18 | `OnAction`                  | `CGameAction`                       | `GAME_EVENTT_ACTION` (21)    |
|        19 | `OnPlayerLand`              | `CGamePlayerLand`                   | `GAME_EVENTT_PLAYER_LAND` (22) |
|        20 | `OnPlayerStartWalking`      | `CGamePlayerStartWalking`           | `GAME_EVENTT_PLAYER_START_WALKING` (23) |
|        21 | `OnPlayerStopWalking`       | `CGamePlayerStopWalking`            | `GAME_EVENTT_PLAYER_STOP_WALKING` (24) |
|        22 | `OnHit`                     | `CGameHit`                          | `GAME_EVENTT_HIT` (25)       |
|        23 | `OnIntersection`            | `CGameIntersection` *(bIntersect=true)* | `GAME_EVENTT_INTERSECTION` (27) |
|        24 | `OnKeyDown`                 | `CGameKeyDown`                      | `GAME_EVENTT_KEY_DOWN` (28)  |
|        25 | `OnKeyUp`                   | `CGameKeyUp`                        | `GAME_EVENTT_KEY_UP` (29)    |
|        26 | `OnTrigger`                 | `CGameTrigger`                      | `GAME_EVENTT_TRIGGER` (30)   |
|        27 | `OnStopIntersection`        | `CGameIntersection` *(bIntersect=false)* | `GAME_EVENTT_STOPINTERSECTION` (31) |
|        28 | `OnActorStuck`              | `CGameActorStuck`                   | `GAME_EVENTT_ACTOR_STUCK` (32) |
|        29 | *(unused)*                  | `CGameInventoryChange` *(removed; see `Events.cpp:437`)* | — |
|        30 | `OnPlayerDamage`            | `CGamePlayerDamage`                 | `GAME_EVENTT_PLAYER_DAMAGE` (36) |
|        31 | `OnReputationChange`        | `CGameReputationChange`             | `GAME_EVENTT_REPUTATION_CHANGE` (37) |
|        32 | `OnDispose`                 | `CGameDispose`                      | `GAME_EVENTT_DISPOSE` (38)   |
|        33 | `OnInventoryAddItem`        | `CGameInventoryAddItem`             | `GAME_EVENTT_INVENTORY_ADDITEM` (33) |
|        34 | `OnInventoryRemoveItem`     | `CGameInventoryRemoveItem`          | `GAME_EVENTT_INVENTORY_REMOVEITEM` (34) |
|        35 | `OnInventorySelChange`      | `CGameInventorySelChange`           | `GAME_EVENTT_INVENTORY_SELCHANGE` (35) |
|        36 | `OnPlayerStartAltShooting`  | `CGamePlayerStartAltShooting`       | `GAME_EVENTT_PLAYER_START_ALTSHOOTING` (15) |
|        37 | `OnPlayerStopAltShooting`   | `CGamePlayerStopAltShooting`        | `GAME_EVENTT_PLAYER_STOP_ALTSHOOTING` (16) |
|        38 | `OnClearPath`               | `CGameClearPath`                    | `GAME_EVENTT_CLEAR_PATH` (39) |
|        39 | `OnFallDamage`              | `CGameFallDamage`                   | `GAME_EVENTT_FALL_DAMAGE` (40) |
|        40 | `OnSteal`                   | `CGameSteal`                        | `GAME_EVENTT_STEAL` (41)     |
|        41 | `OnDeath`                   | `CGameDeath`                        | `GAME_EVENTT_DEATH` (42)     |
|        42 | `OnMessage`                 | `CGameMessage`                      | `GAME_EVENTT_MESSAGE` (43)   |
|        43 | `OnHit2`                    | `CGameHit2`                         | `GAME_EVENTT_HIT2` (26)      |
|        44 | `OnPlayerEnemy` / `OnPlayerStartSneaking` *(aliases)* | *(no dedicated `CGame*` class)* | — |
|        45 | `OnLSHAnimationEnd` / `OnPlayerStopSneaking` *(aliases)* | *(no dedicated `CGame*` class)* | — |
|      1000 | `OnConsole`                 | dispatched directly by `CScriptManager::ProcessConsoleCommand` (`ScriptManager.cpp:477`) | — |

### Notes
- **Script ID 11 (`CGameDialogReply`)** has no `event` alias in `std.sci` — it is sent
  from dialog code, not subscribed to by ordinary scripts via name.
- **Script ID 16** is shared by two C++ classes — `CGamePropChanged` (object + name,
  2 args) and `CGamePropChanged2` (name only, 1 arg). Scripts disambiguate by arity.
- **Script ID 29** is reserved but unused — the corresponding `CGameInventoryChange`
  class is commented out in `Events.cpp:437` (note also the stray `\bool` typo).
- **Script ID 44/45 aliases.** `std.sci` declares two names per ID (`OnPlayerEnemy` /
  `OnPlayerStartSneaking` both = 44; `OnLSHAnimationEnd` / `OnPlayerStopSneaking`
  both = 45). Both aliases are referenced by separate `.sci` files
  (`player_common.sci`, `player_steps.sci`); the event source decides which handler
  fires by context.
- **Script ID 1000 (`OnConsole`)** is dispatched from
  `ScriptManager.cpp:477` for console commands, bypassing the `IGameEvent` framework.
- **The `GAME_EVENT_TYPE` enum ordering is unrelated** to script IDs — it reflects
  the addition order of event types in the C++ source. Use only as an internal type
  tag when reading C++ code or Engine.dll IDA disassembly.

---

## UI events — `UI/ui_events.sci`

Source: `SRC/Scripts/script_sources/UI/ui_events.sci`.

These are a **separate** event ID space used by UI widget scripts; they overlap
numerically with game events but are dispatched by `CUIWindow` and friends.

| Script ID | Script name           | Description                       |
|----------:|-----------------------|-----------------------------------|
|         0 | `OnDraw`              | Window draw tick                  |
|         1 | `OnUpdate`            | Window update tick                |
|         2 | `OnLButtonDown`       | Left mouse button down            |
|         3 | `OnLButtonUp`         | Left mouse button up              |
|         4 | `OnMButtonDown`       | Middle mouse button down          |
|         5 | `OnMButtonUp`         | Middle mouse button up            |
|         6 | `OnRButtonDown`       | Right mouse button down           |
|         7 | `OnRButtonUp`         | Right mouse button up             |
|         8 | `OnMouseMove`         | Mouse moved over window           |
|         9 | `OnMouseEnter`        | Mouse entered window              |
|        10 | `OnMouseLeave`        | Mouse left window                 |
|        11 | `OnDragBegin`         | Drag started                      |
|        12 | `OnDragEnd`           | Drag ended                        |
|        13 | `OnDrop`              | Drop received                     |
|        14 | `OnDestroyWindow`     | Window being destroyed            |
|        15 | `OnMouseWheel`        | Mouse wheel scrolled              |
|        16 | `OnCursorWndChange`   | Mouse cursor moved to other wnd   |
|       100 | `OnChar`              | Text char input (translated)      |
|       101 | `OnKeyDown`           | Key down (raw VK code)            |
|       102 | `OnKeyUp`             | Key up (raw VK code)              |
|       200 | `OnMessage`           | UI-internal message               |
|       201 | `OnGameMessage`       | Game → UI message                 |

---

## Internal C++ enum reference

For completeness — `GAME_EVENT_TYPE` from `SRC/PlagueCity/Game/Game/Events.h:20`:

| Enum value | Name                                  |
|-----------:|---------------------------------------|
| 0          | `GAME_EVENTT_PLAYERUSE`               |
| 1          | `GAME_EVENTT_SEE`                     |
| 2          | `GAME_EVENTT_STOPSEE`                 |
| 3          | `GAME_EVENTT_HEAR`                    |
| 4          | `GAME_EVENTT_STOPHEAR`                |
| 5          | `GAME_EVENTT_ACTORLOAD`               |
| 6          | `GAME_EVENTT_ACTORUNLOAD`             |
| 7          | `GAME_EVENTT_TIMER`                   |
| 8          | `GAME_EVENTT_REGION_CHANGE`           |
| 9          | `GAME_EVENTT_GAME_TIME`               |
| 10         | `GAME_EVENTT_COLLISION`               |
| 11         | `GAME_EVENTT_DIALOG_REPLY`            |
| 12         | `GAME_EVENTT_MUSIC_CHANGE`            |
| 13         | `GAME_EVENTT_PLAYER_START_SHOOTING`   |
| 14         | `GAME_EVENTT_PLAYER_STOP_SHOOTING`    |
| 15         | `GAME_EVENTT_PLAYER_START_ALTSHOOTING`|
| 16         | `GAME_EVENTT_PLAYER_STOP_ALTSHOOTING` |
| 17         | `GAME_EVENTT_PLAYER_HOLSTER_WEAPON`   |
| 18         | `GAME_EVENTT_PROP_CHANGED`            |
| 19         | `GAME_EVENTT_PROP_CHANGED2`           |
| 20         | `GAME_EVENTT_ATTACKED`                |
| 21         | `GAME_EVENTT_ACTION`                  |
| 22         | `GAME_EVENTT_PLAYER_LAND`             |
| 23         | `GAME_EVENTT_PLAYER_START_WALKING`    |
| 24         | `GAME_EVENTT_PLAYER_STOP_WALKING`     |
| 25         | `GAME_EVENTT_HIT`                     |
| 26         | `GAME_EVENTT_HIT2`                    |
| 27         | `GAME_EVENTT_INTERSECTION`            |
| 28         | `GAME_EVENTT_KEY_DOWN`                |
| 29         | `GAME_EVENTT_KEY_UP`                  |
| 30         | `GAME_EVENTT_TRIGGER`                 |
| 31         | `GAME_EVENTT_STOPINTERSECTION`        |
| 32         | `GAME_EVENTT_ACTOR_STUCK`             |
| 33         | `GAME_EVENTT_INVENTORY_ADDITEM`       |
| 34         | `GAME_EVENTT_INVENTORY_REMOVEITEM`    |
| 35         | `GAME_EVENTT_INVENTORY_SELCHANGE`     |
| 36         | `GAME_EVENTT_PLAYER_DAMAGE`           |
| 37         | `GAME_EVENTT_REPUTATION_CHANGE`       |
| 38         | `GAME_EVENTT_DISPOSE`                 |
| 39         | `GAME_EVENTT_CLEAR_PATH`              |
| 40         | `GAME_EVENTT_FALL_DAMAGE`             |
| 41         | `GAME_EVENTT_STEAL`                   |
| 42         | `GAME_EVENTT_DEATH`                   |
| 43         | `GAME_EVENTT_MESSAGE`                 |

---

## Source files

- `SRC/Scripts/script_sources/std.sci` — script-side game event declarations
- `SRC/Scripts/script_sources/UI/ui_events.sci` — script-side UI event declarations
- `SRC/PlagueCity/Game/Game/Events.h` — C++ event class declarations and `GAME_EVENT_TYPE` enum
- `SRC/PlagueCity/Game/Game/Events.cpp` — `CGameXxx::SendScriptEvent()` definitions (the script-ID dispatch)
- `SRC/PlagueCity/Game/Engine/EventManager.cpp` — generic receiver/event manager
- `SRC/PlagueCity/Game/Engine/ScriptManager.cpp:477` — `OnConsole` (ID 1000) dispatch
