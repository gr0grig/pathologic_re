# Pathologic 2005 — In-Game Console: Commands Reference

Complete reference for the in-game console of Pathologic 2005,
reconstructed from `SRC/PlagueCity` sources.

---

## 1. Architecture

The console consists of two loosely coupled parts.

### 1.1 UI layer: `CConsole`

`SRC/PlagueCity/Game/Game/Console.{h,cpp}` — renders the overlay, handles
input, maintains history.

- Toggled via `Show()` / `Hide()` (called from `CKeyProcessor` / `CGame`).
- On **Enter**, the entered line is dispatched through
  `IEngine::Execute(cmd)`.
- Supports command history (`↑`/`↓` arrows), log scrolling (`PgUp`/`PgDn`),
  Backspace, plain ASCII (`32..126`).
- When `bShowConsoleLog == true`, up to three recent (≤5 sec old) un-hidden
  messages are shown even while the console is closed.

### 1.2 Dispatcher: `CEngine::Execute(pszCmd)`

`SRC/PlagueCity/Game/Engine/CEngine.cpp:550`.

1. Leading whitespace is skipped; an empty line is ignored.
2. The first whitespace-delimited token becomes the **command name**.
3. The remainder (after intervening whitespace) is the **parameter
   string** `pszParms`.
4. An echo of the full line goes into the log via `AddConsoleMessage`.
5. The command iterates over every registered `ICmdProcessor` (the order
   is `set<ICmdProcessor*>` — pointer-address dependent). The first
   processor whose `Execute(pszCmd, pszParms, pLog)` returns `true` wins.
6. If no processor recognises it: `"Command not recognized"`.

### 1.3 Processor interface: `ICmdProcessor`

`SRC/PlagueCity/Engine/Core/ICmdProcessor.h`:

```cpp
class ICmdProcessor : public IGeneric {
public:
    virtual bool Execute(const char *pszCmd,
                         const char *pszParms,
                         IConsoleLog *pLog) = 0;
};
```

Registration through `IEngine::RegisterCommandProcessor` /
`UnregisterCommandProcessor`.

The reply channel is `IConsoleLog` (`IConsoleLog.h`):

| Method                          | Purpose                                                          |
|---------------------------------|------------------------------------------------------------------|
| `AddConsoleMessageReply(s)`     | Normal reply (white).                                            |
| `AddConsoleMessageError(s)`     | Error message.                                                   |
| `AddConsoleMessageICA()`        | Shorthand for **I**nvalid **C**ommand **A**rguments — prints a fixed parse-error string. |

### 1.4 Argument parser: `CCmdParser`

`SRC/PlagueCity/Game/Common/CmdParser.{h,cpp}` — a streaming tokenizer.

All overloads return `bool` (success); the read position only advances on
success:

```cpp
CCmdParser p(pszParms);
p.HasMoreParameters();
p.GetNextParameter(bool          &v, bool bLast = false);
p.GetNextParameter(signed long   &v, bool bLast = false);
p.GetNextParameter(unsigned long &v, bool bLast = false);
p.GetNextParameter(float         &v, bool bLast = false);
p.GetNextParameter(CEString      &v, bool bLast = false);
```

If `bLast == true`, the call **additionally** requires that no further
tokens remain after the one read — otherwise it returns `false`. This is
used to enforce a strict end-of-command in commands that take a fixed
number of arguments.

Accepted token forms:

| Type            | Accepted input                                                    |
|-----------------|-------------------------------------------------------------------|
| `bool`          | `on`, `off`, `0`, `1` (must be followed by whitespace or EOL).    |
| `signed long`   | `strtol(..., 10)` — decimal, signed.                              |
| `unsigned long` | `strtoul(..., 10)` — decimal, unsigned.                           |
| `float`         | `strtod(...)` — decimal with optional fractional part.            |
| `CEString`      | Bare word up to whitespace, **or** a `"quoted string"` (can contain spaces). |

Token separators are spaces and tabs. Quoted strings have **no escape
syntax** — the first `"` ends the string.

### 1.5 Registered processors

| Processor              | Registered when…                              | Source                          |
|------------------------|-----------------------------------------------|---------------------------------|
| `CEngine` (registers itself) | In `CEngine` constructor                | `CEngine.cpp:235`               |
| `CGenCmdProcessor`     | In `WinMain` after engine creation            | `Game.cpp:629–630`              |
| `CKeyProcessor`        | In `WinMain` after engine creation            | `Game.cpp:626–627`              |
| `CScriptManager`       | In `CScriptManager` constructor               | `ScriptManager.cpp:212`         |
| `CWorld`               | In `CWorld` constructor (new/loaded)          | `World.cpp:279, :377`           |
| `CGameWorld`           | In `CGameWorld` constructor                   | `GameWorld.cpp:1330, :1378`     |
| `CActorPlayer`         | In `CActorPlayer` constructor / `LoadState`   | `ActorPlayer.cpp:783, :868`     |
| `CCameraBase` (+ `Play`)| In `CCameraBase` constructor / `LoadState`   | `CameraBase.cpp:13, :126`       |

Commands "lower in the stack" (world, player, camera) only become
available when the corresponding object exists.

---

## 2. Argument types — what they mean and where they come from

Many commands accept a small set of recurring argument types. Each is
defined and looked up from a specific source, with concrete expected
formats and allowed value ranges.

### 2.1 `<location>` / `<locator_name>` — respawn-location key

A **locator** (also called a "respawn location") is a named pair of
**`Position` + `Direction`** vectors registered with a scene. Used by
spawn commands, `go`, and the entire `rl_*` family.

**Where they come from.** Each scene XML file (an `.osc` / `.isc`
streamed from `FS_STD_SCENE`) carries a `<Locators>` section with one or
more `<Point>` elements:

```xml
<Point Name="birth" Position="100.0,0.0,150.0" Direction="0.0,0.0,1.0" />
<Point Name="entrance_door" Position="..." Direction="..." />
```

The parser is at `SceneLocators.cpp:7` and accepts any name as long as
`Position` and `Direction` attributes exist; the direction is normalised
on load.

**Convention.**

| Locator name | Meaning                                                                      |
|--------------|------------------------------------------------------------------------------|
| `birth`      | Default spawn point for the player. Used by `imap`, `omap`, `go` when no explicit location is given. If `birth` is missing the player is placed at origin with a warning. |
| Any other    | Custom point — used by quest scripts, `spawn` commands, and `go <scene> <loc>`. |

**Listing available locators.** The `rl_list [regex]` command iterates
the locator table of the active scene (`World.cpp:1721`); without a
regex it prints all of them.

**Adding/modifying at runtime.**

- `rl_set <name> <x y z> [dx dy dz]` — programmatic create/overwrite.
- `rl <name>` — capture the player's current position+facing as a
  locator (the player command, `ActorPlayer.cpp:1303`); position is
  shifted by +10 along Y.

Modifications persist in saves but are not written back to the scene
XML. To export them, use `rl_save <filename>` which writes
`<Point Name="..." Position="..." Direction="..."/>` lines to the
**current working directory** as raw `ofstream` text.

### 2.2 `<actor>` — actor identifier

In `Util::ParseActor` (`Util.cpp:169`):

1. First, the parser attempts to read the next token as an `unsigned
   long` actor ID. If successful, it's looked up via
   `IWorld::GetActorByID(id)`.
2. If integer parsing fails, the token is read as a string and looked
   up via `IWorld::GetActorByName(name)`.

This means **numeric names get interpreted as IDs**. Use `actor_list`
(below) to discover both forms.

- **Actor IDs** are small unsigned integers assigned at load time
  (visible in `actor_list`, `id`, `id_sel`, `id_player`).
- **Actor names** are the human-readable names assigned in scene XMLs or
  by spawn commands. The player actor is named `player`.

Use `id <id>` to print the `IObjectInfo` string for a specific actor,
`actor_list [regex]` to enumerate, `id_sel` for the selected one,
`id_trace` for the one under the player's crosshair.

### 2.3 `<actor_name>` (spawn) — built-in actor class

In `spawn <actor_name> ...`, the first argument is the actor **class
key**, not an instance name. Recognised values come from
`AFBuiltIn.cpp:31`:

```
fog                  ACTOR_FOG                12
flame                ACTOR_FLAME              13
scripted             ACTOR_SCRIPTED           14
scripted_container   ACTOR_SCRIPTED_CONTAINER 18
blank                ACTOR_BLANK              19
sound-fake3d         ACTOR_SOUND_FAKE3D       21
```

The full type table (`Actor.h:8–28`) is also accepted via `tspawn` (by
numeric ID):

| ID | Type                        | Notes                                |
|---:|-----------------------------|--------------------------------------|
|  0 | `ACTOR_STATIC`              | Static prop (no scripts).            |
|  1 | `ACTOR_LIGHT_STATIC`        | Static light source.                 |
|  2 | `ACTOR_LIGHT_STATIC_GROUP`  | Group of static lights.              |
|  4 | `ACTOR_BIPED`               | Biped (NPC); auto-becomes biped-col if `Collectable` param present. |
|  5 | `ACTOR_BIPED_LSH`           | LSH-animated biped (cutscene).       |
|  6 | `ACTOR_DOOR`                | Door.                                |
|  7 | `ACTOR_WATER`               | Water volume.                        |
|  8 | `ACTOR_OBJECT`              | Physics object.                      |
|  9 | `ACTOR_FIRE`                | Fire (constructed via blank+script). |
| 10 | `ACTOR_PLAYER`              | Player.                              |
| 11 | `ACTOR_TRIGGER_VOLUME`      | Trigger volume.                      |
| 12 | `ACTOR_FOG`                 | Fog actor.                           |
| 13 | `ACTOR_FLAME`               | Flame effect.                        |
| 14 | `ACTOR_SCRIPTED`            | Scripted actor.                      |
| 15 | `ACTOR_DETAILED_OBJECT`     | Detailed object (LOD-aware).         |
| 16 | `ACTOR_BIPED_CS`            | Biped CutScene.                      |
| 17 | `ACTOR_BIPED_LSH_CS`        | Biped LSH CutScene.                  |
| 18 | `ACTOR_SCRIPTED_CONTAINER`  | Scripted container.                  |
| 19 | `ACTOR_BLANK`               | Blank shell (script-driven).         |
| 20 | `ACTOR_DUMMY`               | Dummy.                               |
| 21 | `ACTOR_SOUND_FAKE3D`        | Fake-3D sound source.                |

### 2.4 `<scene_name>` — scene file in `FS_STD_SCENE`

Scenes are stored in `Scenes.vfs` and addressed by **filename including
extension**:

- `*.isc` — **i**ndoor **sc**ene; load with `imap` / `imap_load`.
- `*.osc` — **o**utdoor **sc**ene; load with `omap` / `omap_load`.

The `map <name>` shortcut auto-routes by the extension. Load through any
of: `imap`, `omap`, `imap_load`, `omap_load`, `map` (player-side); after
loading you can teleport into them with `go`.

### 2.5 `<item_id|item_name>` — inventory item

Items are loaded from an XML database at game start
(`GameWorld.cpp:1190+`). Each `<Item>` element has a numeric ID and an
optional `Name="..."` attribute. The `additem` / `removeitem` commands
accept either form:

- First the next token is read as an unsigned integer ID.
- If that fails, it's read as a string and resolved via
  `GetInvItemByName`.

To see what's currently held by an actor, use `items <actor>`. The
canonical script-side resolver is `@GetInvItemByName(out_id, name)`.

### 2.6 `<key> <val>` pairs (CreateParams)

After the positional arguments of `spawn` / `tspawn` / `sspawn` /
`tl_actor`, the rest of the line is read as **alternating
`name value` pairs** packed into an `ICreateParamsArray`:

```
spawn biped_npc birth   Script  NPC_Foo.bin   Name  Foo
            ^class       ^locator  ^k1 ^v1     ^k2  ^v2
```

Both keys and values pass through `CCmdParser::GetNextParameter(CEString
&)` — quote them with `"..."` if a value contains spaces. The parser
treats values as strings; the underlying class converts each value to
its expected type when it reads `pParams->GetParameter(key, ...)`.

Known/common keys (not exhaustive):

| Key             | Used by                | Meaning                                      |
|-----------------|------------------------|----------------------------------------------|
| `Script`        | `blank` / `scripted`   | Script filename (e.g. `NPC_Foo.bin`).        |
| `Name`          | most actors            | Override actor name.                         |
| `Collectable`   | biped / fog / scripted | Switches them to the `*Col` variant.         |
| `Weapon`        | inventory items        | Weapon class on equip.                       |

Anything else is documented per actor class in `Actors.vfs` XML schemas.

### 2.7 `<key_name>` (bind / unbind) — key identifier

Resolved case-insensitively against the table built in
`KeyProcessor.cpp:17–64`. Full list (alphabetical):

- Letters: `a`..`z`
- Digits: `0`..`9` (also `num0`..`num9`, but with a known bug — the same
  digit row is mapped, **not** the numpad keys; `KeyProcessor.cpp:25`
  inserts `buf1` instead of `buf2`)
- Function keys: `f1`..`f24`
- `backspace`, `tab`, `enter`, `pause`, `capslock`, `escape`, `space`
- `pageup`, `pagedown`, `home`, `end`
- `left`, `right`, `up`, `down`
- `prtscr`, `insert`, `delete`
- Numpad: `mult`, `plus`, `sep`, `minus`, `dot`, `slash`
- Modifiers: `numlock`, `scrolllock`, `lshift`, `rshift`, `lctrl`,
  `rctrl`
- Mouse: `lbutton`, `rbutton`, `mbutton`

### 2.8 `<action_name>` (bind) — game action

Resolved case-insensitively against `KeyProcessor.cpp:67–86`. Full list:

| Action       | Effect                                            |
|--------------|---------------------------------------------------|
| `forward`    | Walk forward.                                     |
| `back`       | Walk backward.                                    |
| `left`       | Strafe left.                                      |
| `right`      | Strafe right.                                     |
| `use`        | Use / interact.                                   |
| `jump`       | Jump.                                             |
| `screenshot` | Save a screenshot.                                |
| `flashlight` | Toggle flashlight.                                |
| `visir`      | Toggle visir (sight).                             |
| `shoot`      | Primary fire.                                     |
| `altshoot`   | Alt fire.                                         |
| `holster`    | Holster weapon.                                   |
| `inventory`  | Open inventory.                                   |
| `map`        | Open map.                                         |
| `diary`      | Open diary.                                       |
| `message`    | Show last message.                                |
| `stats`      | Show character stats.                             |
| `rescue`     | Rescue command.                                   |
| `gamemenu`   | Open in-game menu.                                |

For any other action you want to wire to a key, use `bindcmd <key>
"command…"` to bind to a console command instead.

### 2.9 Player properties (`prop` / `propl` / `propf` / `props`)

Per-actor `IPropertySet`. Common keys observed on the player
(`UIPlayerStatContext.cpp`, `ActorPlayer.cpp`, scripts):

| Property        | Type   | Range   | Used in                                |
|-----------------|--------|---------|----------------------------------------|
| `health`        | float  | 0..1    | Set by `god` to `1.0`.                 |
| `armor`         | long   | 0..100  | Set by `god` to `100`.                 |
| `armor_disease` | long   | 0..100  | Set by `god` to `100`.                 |
| `disease`       | float  | 0..1    | Plague infection level.                |
| `reputation`    | float  | 0..1    | Player reputation.                     |
| `Hunger`        | float  | 0..1    | Hunger level (capital H).              |
| `Immunity`      | float  | 0..1    | Immune system level.                   |
| `Tiredness`     | float  | 0..1    | Fatigue.                               |
| `money`         | float  | ≥ 0     | Currency amount.                       |
| `noaccess`      | long   | 0..N    | Refcount that gates interactions.      |
| `visibility`    | float  | 0..100  | Scales `m_fVisAmount` (sight check).   |
| `locked`        | long   | 0/1     | Door lock state (`ActorDoor`).         |

Any actor implementing `IPropertySet` has its own set; check the actor's
class for the full schema. Use `prop <actor> <name>` to read a string
representation.

### 2.10 `<effect_name>` — gameplay effect

Effects are **just scripts** — `IActorPlayer::ApplyEffect` simply runs
the named script with a `CEffectScriptContext` attached
(`ActorPlayer.cpp:988`):

```
effect <player_actor> <script_name>
```

Any `.bin` script in `Scripts.vfs` can serve as an effect; standard
practice is to name them with an `eff_` prefix (e.g. `eff_painkiller`,
`eff_antibiotic`). The script's `init()` runs once on apply; subsequent
script events drive the timed behaviour.

### 2.11 `<filename>` — filename and the file-system aliases

A bare filename is always resolved within a specific virtual file
system. Each command documents which FS it uses; the mapping is set up
in `Game.cpp:444–466`:

| FS alias            | Numeric ID (`IFSShell.h`, `Config.h`) | Backing                                  |
|---------------------|---------------------------------------|------------------------------------------|
| `actor:`            | `FS_STD_ACTOR     0`                  | `Actors.vfs` (+ loose files override)    |
| `geom:`             | `FS_STD_GEOMETRY  1`                  | `Geometries.vfs`                         |
| `tex:`              | `FS_STD_TEXTURE   2`                  | `Textures.vfs`                           |
| `scene:`            | `FS_STD_SCENE     3`                  | `Scenes.vfs`                             |
| `sound:`            | `FS_STD_SOUND     4`                  | `Sounds.vfs`                             |
| `font:`             | `FS_STD_FONT      5`                  | `Fonts.vfs`                              |
| `str:`              | `FS_STD_STRING    6`                  | `Strings.vfs`                            |
| `script:`           | `FS_STD_SCRIPT    7`                  | `Scripts.vfs`                            |
| `world:`            | `FS_STD_WORLD     8`                  | `World.vfs`                              |
| `ui:`               | `FS_STD_UI        9`                  | `UI.vfs`                                 |
| `root`              | `FS_ROOT          100`                | The game data directory itself (loose).  |
| `save`              | `FS_SAVE          101`                | `<game>/../saves/` directory.            |
| `video`             | `FS_VIDEO         102`                | `Video/` directory.                      |

Each VFS reader (see [vfs_format.md](vfs_format.md)) first tries a loose
file co-located with the archive — handy for asset overrides without
rebuilding the `.vfs`.

### 2.12 Regular expressions (`actor_list`, `getvars`, `rl_list`)

These commands accept an optional `<regex>` argument — a `boost::regex`
pattern. The matching is full-string (`boost::regex_match`, not
`regex_search`), so a partial pattern must include `.*` on either side:

```
actor_list .*Burah.*
rl_list ^birth$
getvars day_.*
```

Invalid regex syntax results in an ICA error.

### 2.13 `<group_id>` (switch) — light group identifier

A numeric ID matching a `<Group ID="N">` definition inside a scene XML.
The `switch` command toggles every actor in the group that implements
`ILightSwitch`. With no on/off arg, prints `on_count/light_count/total`
statistics.

### 2.14 `<trigger_name>` — script trigger label

A free-form string sent as the only argument of a `CGameTrigger` event
to a target actor. Receiving scripts handle it in their `OnTrigger`
event (see [events_2005.md](events_2005.md) — script event ID 26).
The exact set of accepted trigger names depends on each receiver's
script.

---

## 3. Commands

In the tables below, `[X]` denotes an optional parameter. Many commands
double as getters when called without arguments — they then print the
current value instead of changing it.

### 3.1 `CEngine` — always available

Implementation: `CEngine::Execute` (`CEngine.cpp:654–717`).

| Command       | Arguments                                       | Description                                                                                          |
|---------------|-------------------------------------------------|------------------------------------------------------------------------------------------------------|
| `rd_wire`     | `[on\|off]`                                      | Toggle wireframe rendering. Without arguments — print current state.                                |
| `rd_shadows`  | `[on\|off]`                                      | Toggle shadows.                                                                                     |
| `rd_stat`     | `[on\|off]`                                      | Toggle on-screen statistics overlay.                                                                |
| `lds`         | `<filename>` (string)                           | "Load Strings" — append/override strings from `FS_STD_STRING/<filename>`. Reports if any strings were overwritten. |
| `gt_speed`    | `[factor]` (float > 0)                          | Game-time speed: `factor` game-hours per 24 real hours. Internally stored as `m_fGameTimeSpeed = 24/factor`. Default 3 (see `init.cfg`). |

### 3.2 `CGenCmdProcessor` — always available

Implementation: `GenCmdProcessor.cpp:426–455`.

| Command         | Arguments                                                | Description                                                                                          |
|-----------------|----------------------------------------------------------|------------------------------------------------------------------------------------------------------|
| `exec`          | `<filename>` (string)                                    | Run commands from a text file at `FS_ROOT/<filename>`, one per line, via `CExecFile`.               |
| `rd_gamma`      | `[value]` (float > 0)                                    | Renderer gamma correction.                                                                          |
| `sshot_gamma`   | `[value]` (float ≥ 0)                                    | Screenshot-specific gamma. `0` ⇒ use the renderer's gamma.                                          |
| `fps`           | — (no args)                                              | Print current FPS.                                                                                  |
| `quit`          | — (no args)                                              | Graceful exit (`PostQuitMessage(0)`).                                                               |
| `abort`         | — (no args)                                              | Hard exit (`exit(-1)`).                                                                             |
| `ver`           | — (no args)                                              | Print `BUILD_STRING` (`build.h`).                                                                   |
| `save`          | `<filename>` (string)                                    | Save world state to `FS_SAVE/<filename>`. Blocked while a "loop override" is active.                |
| `load`          | `<filename>` (string)                                    | Load world from `FS_SAVE/<filename>`. Same blocking rule.                                           |
| `qsave`         | — (no args)                                              | Quicksave: rename `quicksave1.sav` → `quicksave2.sav`, then save `quicksave1.sav`.                  |
| `qload`         | — (no args)                                              | Quickload from `quicksave1.sav`.                                                                    |
| `vol_master`    | `[value]` (float ≥ 0)                                    | Master volume. Without args — print current.                                                        |
| `vol_music`     | `[value]` (float ≥ 0)                                    | Music volume.                                                                                       |
| `vol_voice`     | `[value]` (float ≥ 0)                                    | Voice-line volume.                                                                                  |
| `vol_sounds`    | `[value]` (float ≥ 0)                                    | SFX volume.                                                                                         |
| `dbg_exception` | — (any args ignored)                                     | `_asm int 3` — debug break. Intended for debugger-attached sessions.                                |
| `save_config`   | **requires at least one (any) argument**                 | Persist current settings (only `rd_shadows` is rewritten) to `FS_ROOT/init.cfg`. The argument check is inverted — calling with no arguments prints ICA. |

### 3.3 `CGenCmdProcessor` — only when a world is loaded

Available only if `m_pEngine->GetCurrentWorld() != NULL`.

| Command     | Arguments                                                 | Description                                                                                          |
|-------------|-----------------------------------------------------------|------------------------------------------------------------------------------------------------------|
| `tl_actor`  | `<actor_name>` `[<key> <val>]…`                          | Benchmark: 5 cycles of `IWorld::CreateActor` + `Load` + `RemoveActor`. Prints mean load/unload times. File buffering is disabled during the test. |
| `tl_geom`   | `<anim\|static\|trans>` `<geom_name>`                     | Benchmark: 5 cycles of `IRenderer::CreateGeometry` for the given geometry class.                    |
| `tl_tex`    | `<texture_name>`                                          | Benchmark: 5 cycles of `IRenderer::CreateImage`.                                                    |

Geometry classes for `tl_geom`:

- `anim` → `AID_GeometryAnimBone`
- `static` → `AID_GeometryStatic`
- `trans` → `AID_GeometryTrans`

### 3.4 `CKeyProcessor` — key bindings

Implementation: `KeyProcessor.cpp:347–356`.

| Command       | Arguments                            | Description                                                                                  |
|---------------|--------------------------------------|----------------------------------------------------------------------------------------------|
| `bind`        | `<key_name>` `<action_name>`         | Bind a key to a built-in game action (see §2.7–2.8).                                         |
| `bindcmd`     | `<key_name>` `<console_command>`     | Bind a key to a console command. Quote the command if it contains spaces.                    |
| `unbind`      | `<key_name>`                         | Remove a single binding.                                                                     |
| `unbind_all`  | — (any args ignored)                 | Remove all bindings.                                                                         |
| `save_binds`  | — (no args)                          | Persist current `bind`/`bindcmd` lines into `FS_ROOT/init.cfg`.                              |

Default bindings (`alpha/data/init.cfg`):

```
bind a left            bind d right          bind w forward      bind s back
bind e use             bind space jump       bind f12 screenshot
bind f flashlight      bind v visir
bind lbutton shoot     bind rbutton altshoot bind tab holster
bind i inventory       bind m map            bind p stats
bind q diary           bind r message
bindcmd f5 qsave       bindcmd f8 qload
```

### 3.5 `CScriptManager` — script-side dispatch

Implementation: `ScriptManager.cpp:457–482`.

| Command         | Arguments                              | Description                                                                                              |
|-----------------|----------------------------------------|----------------------------------------------------------------------------------------------------------|
| `script_list`   | — (no args)                            | List loaded scripts and the number of active runs per script, plus a total counter.                      |
| `/<anything>`   | arbitrary                              | "Slash command": any line starting with `/` is broadcast to **every** active script run as event ID 1000 (the `OnConsole` event in `std.sci`). Two `wstring` arguments — `name` (no leading `/`) and `params` (rest of the line). |

This is how scripts implement custom debug/console commands. To handle
one, give the script an `OnConsole(wstring cmd, wstring args)` event
handler.

### 3.6 `CWorld` — world-level operations (world must be loaded)

Implementation: `World.cpp:919–947`.

| Command         | Arguments                                                                 | Description                                                                                       |
|-----------------|---------------------------------------------------------------------------|---------------------------------------------------------------------------------------------------|
| `gametime`      | `[<hh> <mm> [<ss>]]` (ulong 0–23, 0–59, 0–59)                            | Get/set in-day time. Without args, prints `day N HH:MM:SS`. With args, sets the **nearest future** `HH:MM[:SS]` (next day if already past). |
| `gametimed`     | `<day> <hh> <mm> [<ss>]` (ulong ≥1, 0–23, 0–59, 0–59)                    | Same but with an absolute day.                                                                    |
| `map_list`      | — (no args)                                                              | List loaded scenes, the active one marked `*`, with `actors_total/actors_updated` counts.         |
| `sun_over`      | `[on\|off]`                                                              | Toggle sun **override** (force the colours/direction set below over the scene-default values).   |
| `sun_on`        | `[on\|off]`                                                              | While overriding, sun on/off.                                                                     |
| `sun_color`     | `[<r> <g> <b>]` (ulong 0–255)                                            | Sun colour in 8-bit RGB.                                                                          |
| `sun_colorf`    | `[<r> <g> <b>]` (float 0–1)                                              | Sun colour in floats.                                                                             |
| `sun_dir`       | `[<x> <y> <z>]` (float, length ≥ 1e-6)                                   | Sun direction. Normalised on input. Warns if `y > 0` (sun shining upward).                        |
| `amb_color`     | `[<r> <g> <b>]` (ulong 0–255)                                            | Ambient colour in 8-bit RGB.                                                                      |
| `amb_colorf`    | `[<r> <g> <b>]` (float 0–1)                                              | Ambient colour in floats.                                                                         |
| `spawn`         | `<actor_name>` `<location>` `[<key> <val>]…` (see §2.3, §2.1, §2.6)      | Create an actor by built-in class name, place at the given locator in the active scene.           |
| `tspawn`        | `<actor_type>` `<location>` `[<key> <val>]…` (see §2.3 numeric IDs)      | Create by numeric type ID.                                                                        |
| `sspawn`        | `<actor_name>` `[<key> <val>]…`                                          | Spawn without a locator — `PlaceActor(..., NULL)` (origin, identity orientation).                 |
| `xspawn`        | `<actor_name>` `<location>` `<xml_file>`                                 | Spawn with params from `FS_STD_ACTOR/<xml_file>` (reads the `<Extras>` block).                    |
| `kill`          | `<actor_id>` (ulong)                                                     | `RemoveActor(GetActorByID(id))`.                                                                  |
| `id`            | `<actor_id>` (ulong)                                                     | Print the actor's `IObjectInfo`.                                                                  |
| `id_sel`        | — (no args)                                                              | Print the `IObjectInfo` of the currently selected object (`m_pSelectedObject`).                   |
| `actor_list`    | `[<regex>]`                                                              | List actors in the active scene. Filter via `boost::regex_match` against each `IObjectInfo`.      |
| `actor_ref`     | `<actor_id>` (ulong)                                                     | List `IReferenceMaker` objects that hold a reference to the given actor.                          |
| `rl_set`        | `<name>` `<x> <y> <z>` `[<dx> <dy> <dz>]`                                | Create/overwrite a locator in the active scene. Direction defaults to `(0,0,1)` and is normalised. |
| `rl_info`       | `<name>`                                                                 | Print position and direction of a named locator.                                                  |
| `rl_del`        | `<name>`                                                                 | Remove a locator.                                                                                 |
| `rl_save`       | `<filename>`                                                             | Export all locators of the active scene to `<filename>` as XML `<Point>` lines. Writes via `ofstream` to the **current working directory** (not via the VFS). |
| `rl_list`       | `[<regex>]`                                                              | List locators of the active scene; filter by name.                                                |

### 3.7 `CGameWorld` — high-level gameplay

Implementation: `GameWorld.cpp:2419–2443`. Command names are matched
**case-insensitively** (`stricmp`).

| Command       | Arguments                                                        | Description                                                                                       |
|---------------|------------------------------------------------------------------|---------------------------------------------------------------------------------------------------|
| `imap_load`   | `<scene_name>` (`.isc` filename in `FS_STD_SCENE`)               | Stream-load an indoor scene **without** unloading the current one. Use `map_unload` to drop it.   |
| `omap_load`   | `<scene_name>` (`.osc`)                                          | Same for outdoor.                                                                                 |
| `map_unload`  | `<scene_name>`                                                   | Unload a previously loaded scene.                                                                 |
| `additem`     | `<actor>` `<item_id\|item_name>` `[count]` (count default 1)     | Add `count` items to the actor's `ISimpleContainer`. Items can be specified by numeric ID or by name (resolved via `GetInvItemByName`). |
| `removeitem`  | `<actor>` `<item_id\|item_name>` `[count]`                       | Remove items. Reply contains the actual removed count.                                            |
| `items`       | `<actor>`                                                        | List items in the actor's container as `id [name], amount: N`.                                    |
| `switch`      | `<group_id>` `[on\|off]`                                         | Without on/off — print group statistics. With on/off — toggle every `ILightSwitch` in that group. |
| `setvar`      | `<name>` `<value>` (signed long)                                 | Set a game-wide variable (the `m_Variables` table). Creates the variable if missing. Emits `CGamePropChanged2(name)`. |
| `getvar`      | `<name>`                                                         | Read a variable (decimal + hex display).                                                          |
| `getvars`     | `[<regex>]`                                                      | List variables — all if no pattern, else `boost::regex_match` filter.                             |
| `prop`        | `<actor>` `<name>`                                               | Read a property (as a string).                                                                    |
| `propl`       | `<actor>` `<name>` `<long>`                                      | Set/add a `signed long` property. Common names — see §2.9.                                        |
| `propf`       | `<actor>` `<name>` `<float>`                                     | Set/add a `float` property.                                                                       |
| `props`       | `<actor>` `<name>` `<string>`                                    | Set/add a string property.                                                                        |
| `effect`      | `<actor>` `<effect_name>` (script in `Scripts.vfs`)              | Apply a script-effect to a player actor (`IActorPlayer::ApplyEffect`).                            |
| `vis`         | — (no args)                                                      | List actors in the active scene whose geometry has `GetUserVisibility() == true`.                 |
| `bspawn`      | `<name>` `<script_filename>`                                     | Create a blank actor with `Script=<script_filename>` and no fixed location.                       |
| `qxspawn`     | `<name>`                                                         | Quick xspawn — uses `FS_STD_ACTOR/<name>.xml` (reads `<Extras>`).                                  |
| `qspawn`      | `<name>`                                                         | Quick spawn — equivalent to `bspawn <name> <name>.bin`.                                           |
| `trigger`     | `<actor_name>` `<trigger_name>`                                  | Send a `CGameTrigger(1, [wstring trigger_name])` event to the named actor.                        |

### 3.8 `CActorPlayer` — player actions

Implementation: `ActorPlayer.cpp:1523–1543`. Names matched
case-insensitively.

| Command       | Arguments                                                        | Description                                                                                       |
|---------------|------------------------------------------------------------------|---------------------------------------------------------------------------------------------------|
| `imap`        | `<scene_name>` (`.isc`)                                          | Unload all scenes, load an indoor scene, place the player at the locator `birth` (or origin if missing). |
| `omap`        | `<scene_name>` (`.osc`)                                          | Same for outdoor.                                                                                 |
| `map`         | `[<scene_name>]`                                                 | Without args — print the active scene title. With an arg — dispatch by extension (`.isc` → `imap`, `.osc` → `omap`). |
| `go`          | `<scene_name>` `[<location>]`                                    | Teleport into an **already-loaded** scene. Without a location — `birth` (or origin).              |
| `id_player`   | — (no args)                                                      | Print player ID, position, direction.                                                             |
| `id_trace`    | — (no args)                                                      | Identify the object under the crosshair (raycast 10 000 units; `CCollisionFilterSolid`).          |
| `rl`          | `<name>`                                                         | Save the player's current position (+10 along Y) and direction as a locator in the active scene.  |
| `fly`         | `[on\|off]`                                                      | Toggle player flight (physics-side `IPhyPlayer::SetFlying`).                                      |
| `fearme`      | `<actor>`                                                        | Send `CGameAttacked(player)` to the actor (script event 17, `OnAttacked`).                         |
| `seeme`       | `<actor>`                                                        | Send `CGameSee(player)` (event 1, `OnSee`).                                                       |
| `hearme`      | `<actor>`                                                        | Send `CGameHear(player)` (event 3, `OnHear`).                                                     |
| `use`         | `<actor>`                                                        | Send `CGamePlayerUse(player)` (event 0, `OnUse`).                                                 |
| `hit`         | `<actor>` `<type>` `[amount]` (long, float; default `amount=0`)  | Send `CGameHit(player, type, amount, amount)` (event 22, `OnHit`).                                |
| `god`         | — (no args)                                                      | Set `health=1.0`, `armor=100`, `armor_disease=100`.                                               |
| `pfdist`      | — (no args)                                                      | Pathfinding ray-trace from the player position — print max distance (cap 10 000).                 |
| `pfid`        | — (no args)                                                      | Print the pathfinding polygon ID under the player + flag breakdown: bit 0 = NPC walkable, bit 1 = NPC spawnable, bit 2 = Agony spawnable. |

### 3.9 `CCameraBase` — common camera commands

Implementation: `CameraBase.cpp:95–112`.

| Command     | Arguments                          | Description                                                                                            |
|-------------|------------------------------------|--------------------------------------------------------------------------------------------------------|
| `fov`       | `[degrees]` (float)                | Get/set FOV in degrees (stored as radians internally). Matched case-insensitively (`stricmp`).         |
| `rec_save`  | `<filename>`                       | Start recording a camera track into `FS_ROOT/<filename>`. Every 0.1 s the engine writes `[float dt, CVector pos, CQuat orient]`. |
| `rec_stop`  | — (no args)                        | Stop recording.                                                                                        |

### 3.10 `CCameraPlay` — replay

Implementation: `CameraPlay.cpp:114–132`. Inherits the `CCameraBase`
commands and adds:

| Command       | Arguments       | Description                                                                                       |
|---------------|-----------------|---------------------------------------------------------------------------------------------------|
| `play_load`   | `<filename>`    | Load a camera track from `FS_VIDEO/<filename>` and start playback.                                 |
| `play_stop`   | — (no args)     | Stop playback.                                                                                    |

---

## 4. The `init.cfg` configuration file

Path: `<game_root>/init.cfg`, accessed via `FS_ROOT`.

Text format: a sequence of console commands, one per line. Loaded at
start-up and applied through `exec init.cfg`. See §3.4 for the default
contents.

Managed by three commands:

- `save_config` — rewrites the `rd_shadows` line. (Note the inverted
  argument check in §3.2.)
- `save_binds` — rewrites all `bind`/`bindcmd` lines.
- `exec init.cfg` — apply.

Both savers use `CExecFile::UniqueCommand(regex_pattern, replacement)`
to update specific lines without disturbing user edits.

---

## 5. Script-side slash commands

Any line starting with `/<command> [args…]` is **not** handled by the
engine. Instead, `CScriptManager::Execute` broadcasts it to every active
script run as event ID 1000 (`OnConsole`):

```
event_args[0] = wstring   ("command" — without the leading '/')
event_args[1] = wstring   ("args" — everything after the first space)
```

A script implements its own console command by adding an `OnConsole`
handler taking two `wstring`s. Errors thrown inside the handler are
silently caught (`ScriptManager.cpp:478`).

---

## 6. Sources

- `SRC/PlagueCity/Engine/Core/ICmdProcessor.h` — processor interface
- `SRC/PlagueCity/Engine/Core/IConsole.h` — UI interface
- `SRC/PlagueCity/Engine/Core/IConsoleLog.h` — reply API
- `SRC/PlagueCity/Engine/Core/IFSShell.h` + `Game/Config.h` — FS aliases
- `SRC/PlagueCity/Engine/Core/IScene.h` — `IRLEnumerator`
- `SRC/PlagueCity/Game/Common/CmdParser.{h,cpp}` — argument parser
- `SRC/PlagueCity/Game/Game/Console.{h,cpp}` — UI
- `SRC/PlagueCity/Game/Engine/CEngine.cpp` — dispatcher + 5 commands (`rd_wire`, `rd_shadows`, `rd_stat`, `lds`, `gt_speed`)
- `SRC/PlagueCity/Game/Engine/SceneLocators.{h,cpp}` — locator table
- `SRC/PlagueCity/Game/Engine/SceneBase.cpp` — `GetRespawnLocation`/`SetRespawnLocation`/`Remove…`
- `SRC/PlagueCity/Game/Engine/ScriptManager.cpp` — `script_list` + slash dispatcher
- `SRC/PlagueCity/Game/Engine/World.cpp` — world commands (24)
- `SRC/PlagueCity/Game/Game/GenCmdProcessor.{h,cpp}` — general commands (17 + 3 world-conditional)
- `SRC/PlagueCity/Game/Game/KeyProcessor.{h,cpp}` — bindings (5)
- `SRC/PlagueCity/Game/Game/GameWorld.cpp` — high-level (20)
- `SRC/PlagueCity/Game/Game/ActorPlayer.cpp` — player actions (16)
- `SRC/PlagueCity/Game/Game/CameraBase.cpp` — camera (3)
- `SRC/PlagueCity/Game/Game/CameraPlay.cpp` — replay (2)
- `SRC/PlagueCity/Game/Game/Util.cpp` — `ParseActor`
- `SRC/PlagueCity/Game/Game/AFBuiltIn.cpp` + `Actor.h` — built-in actor classes/IDs
- `SRC/PlagueCity/Game/Game/Game.cpp` — file-system setup

**Total**: 9 processors, ~96 commands plus slash-commands and default
bindings.
