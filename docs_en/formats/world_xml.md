# World `.xml` — Top-Level World Configuration

- **Archive**: `World.vfs` (5 files).
- **Files**:
  - `world_danko.xml` (11.2 KB) — root world descriptor for the Danko
    campaign (the only campaign in the alpha).
  - `items.xml` (39.4 KB) — global item database.
  - `items_base.xml` (8.3 KB) — shared item-class descriptions.
  - `sounds.xml` (237 bytes) — global named sound aliases.
  - `danko_hands.xml` (406 bytes) — weapon → hand-rig mapping.
- **Reader**: `CGameWorld::Load(...)` —
  `Game/Game/GameWorld.cpp`, especially `GameWorld.cpp:1145` for
  `LoadSoundList`.
- **Wiring**: the engine looks for the world XML named in
  `Config/init.cfg` (`World="world_danko.xml"`) and loads it at boot.

---

## 1. Root: `<World>` (only `world_danko.xml`)

`world_danko.xml` is the **campaign manifest**. It enumerates every
scene the campaign uses, names the bootstrap scripts (world / weather /
music), and inherits supporting databases via `<reference filename=…>`.

```xml
<World>
    <reference filename="items.xml"/>
    <reference filename="danko_hands.xml"/>
    <reference filename="sounds.xml"/>

    <Script>world_danko.bin</Script>
    <Weather>
        <Script>weather.bin</Script>
    </Weather>
    <Music>
        <Script>music.bin</Script>
    </Music>
    <OutdoorScene>city</OutdoorScene>
    <Scenes>
        <Outdoor>city.osc</Outdoor>
        <Indoor>vagon_mishka.isc</Indoor>
        …
    </Scenes>
</World>
```

### 1.1 Elements

| Element                       | Meaning                                                                                                        |
|-------------------------------|----------------------------------------------------------------------------------------------------------------|
| `<reference filename="…"/>`   | XML inheritance — loads the named file into this place (same mechanism as in [isc.md](isc.md)).             |
| `<Script>name.bin</Script>`   | Top-level world script (game logic, time-of-day, story flags).                                                 |
| `<Weather><Script>…</Script></Weather>` | Weather-controller script.                                                                            |
| `<Music><Script>…</Script></Music>`     | Music-region controller script.                                                                       |
| `<OutdoorScene>name</OutdoorScene>` | Name of the default outdoor scene (resolves to a child `<Outdoor>` below).                                 |
| `<Scenes>`                    | Enumerated list of scene files in this campaign.                                                               |
| `<Scenes><Outdoor>…</Outdoor></Scenes>` | One [`.osc`](osc.md) per outdoor scene.                                                              |
| `<Scenes><Indoor>…</Indoor></Scenes>`   | One [`.isc`](isc.md) per indoor scene.                                                               |

The order of `<Indoor>` elements is the load priority; the engine
preloads the first few and demand-loads the rest.

---

## 2. `items.xml` and `items_base.xml`

### 2.1 Purpose

The global **item database**. Every inventory item the player can
hold — herbs, vials, weapons, organs, household objects — is defined
once in this file. Actor `<Items>` blocks in
[actor_xml.md](actor_xml.md) reference these definitions by name.

### 2.2 Structure

```xml
<Items>
    <props>
        <peanut>
            <Description type="int">3223</Description>
            <!-- additional per-item attributes -->
        </peanut>
        <boot_army>
            <Description type="int">3224</Description>
        </boot_army>
        …
    </props>
</Items>
```

The `<props>` block contains one child per item name. Recognised
sub-elements per item (extracted from `Game/Game/WeaponData.cpp` and
related loaders):

| Sub-element              | Type        | Meaning                                                            |
|--------------------------|-------------|--------------------------------------------------------------------|
| `<Description>`          | `int`       | String-database ID for the inspect-screen description ([dat_strings.md](dat_strings.md)). |
| `<Icon>`                 | string      | Filename of the UI inventory icon (in `Textures.vfs`).             |
| `<Class>`                | string      | Item class (`weapon`, `medical`, `food`, `quest`, …).              |
| `<Weapon>`               | substruct   | Weapon-specific stats (damage, range, ammo type). See `WeaponData.cpp`. |
| `<Stack>`                | `int`       | Max stack size in inventory.                                       |
| `<Value>`                | `int`       | Default monetary value for the trade UI.                            |
| Plus per-actor flags and script tie-ins.                                                                                      |

`items_base.xml` carries common defaults that `items.xml` then extends
via `<reference>` inheritance — same pattern as
[isc.md](isc.md): tiny override files referencing larger bases.

---

## 3. `sounds.xml` — World ambient/SFX aliases

A flat list of named sound aliases used by scripts and overrides:

```xml
<sounds>
    <thunder1>Thunder1.ogg</thunder1>
    <thunder2>Thunder2.ogg</thunder2>
    <thunder3>Thunder3.ogg</thunder3>
    <givemoney>givemoney.ogg</givemoney>
    <giveitem>giveitem.ogg</giveitem>
    <mapmark>mapmark.ogg</mapmark>
</sounds>
```

Each tag is a script-visible alias; the body is the `.ogg` filename
resolved against `Sounds.vfs`. Loaded by `LoadSoundList`
(`GameWorld.cpp:1145`).

Different from per-actor `<Sounds>` blocks in
[actor_xml.md](actor_xml.md): these are **world-global**, addressable
from any script as `PlaySound(NULL, "thunder1")`.

---

## 4. `danko_hands.xml` — Weapon → hand-rig map

A small table that pairs each weapon item ID with the hand mesh that
should be drawn when it is equipped:

```xml
<Hands>
    <Weapon FileName="danko.hand">empty</Weapon>
    <Weapon FileName="danko.hand">scalpel</Weapon>
    <Weapon FileName="danko.hand">lockpick</Weapon>
    <Weapon FileName="danko.hand">knife</Weapon>
    <Weapon FileName="danko.hand">revolver</Weapon>
    <Weapon FileName="danko.hand">rifle</Weapon>
    <Weapon FileName="danko.hand">ognemet</Weapon>
    <Weapon FileName="danko.hand">bottle</Weapon>
</Hands>
```

| Attribute   | Meaning                                                       |
|-------------|---------------------------------------------------------------|
| `FileName`  | A [`.hand`](hand.md) mesh in `Geometries.vfs`.                |
| body text   | Item name (matches an `<Items>` entry).                        |

All weapons in this campaign map to `danko.hand` because Danko is the
only first-person playable in the alpha — every weapon uses his arms
with a different child weapon mesh.

---

## 5. Compression

**None.** All `World.vfs` files are plain XML.

---

## 6. Cross-references

- Scene file format: [isc.md](isc.md), [osc.md](osc.md).
- Items referenced by actors: [actor_xml.md](actor_xml.md) §3.4.
- String IDs referenced by `<Description>`: [dat_strings.md](dat_strings.md).
- Hand mesh referenced by `<Weapon FileName>`: [hand.md](hand.md).
- World/Weather/Music scripts: [bin.md](bin.md).
