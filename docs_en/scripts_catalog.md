# Catalogue of Shipped Scripts (`Scripts.vfs`)

The alpha build ships **373** compiled scripts in `Scripts.vfs`,
covering everything from per-item interactions to top-level world
logic. This document groups them by naming convention so you can find
the right file to read when investigating a behaviour.

All entries are `<name>.bin`; the `.bin` byte layout is in
[bin_format.md](bin_format.md). Source files (where present) live in
`SRC/PlagueCity/Game/script_sources/`.

---

## 1. Summary

| Prefix / category   | Count |
|---------------------|------:|
| `NPC_*`             | 29    |
| `citizen_*`         | 30    |
| `item_*`            | 47    |
| `ui_*`              | 47    |
| `actor_*`           | 5     |
| `arena_*`           | 3     |
| `world_*`           | 2     |
| `bonfire*`          | 2     |
| Cinematics (`cs_*`) | 1     |
| Doors (`door_*`)    | 1     |
| Other ambient (`agony1`, `barricade`, `sound_fake3d`, `weather`, `music`, `blood`, `bull`, …) | ~ 200 |

The "other ambient" bucket is the majority: each entry is one
specific actor's behaviour in the game world.

---

## 2. World-level scripts

| File                | Role                                                          |
|---------------------|---------------------------------------------------------------|
| `world_danko.bin`   | The Bachelor (Danko) campaign's top-level logic.              |
| `world_min.bin`     | Minimal world scaffold — used for test scenes / debug startup. |
| `weather.bin`       | Drives the weather state machine.                              |
| `music.bin`         | Drives music-region transitions.                               |

Loaded from [`formats/world_xml.md`](formats/world_xml.md):

```xml
<Script>world_danko.bin</Script>
<Weather><Script>weather.bin</Script></Weather>
<Music><Script>music.bin</Script></Music>
```

---

## 3. Actor-class base scripts (`actor_*.bin`)

5 base classes that other scripts derive from via inheritance in
`.sc` source. Source: `script_sources/actor_*.sc{i,}`.

| File                  | Source `.sc(i)`                  | Role                                        |
|-----------------------|----------------------------------|---------------------------------------------|
| `actor_item.bin`      | `actor_item.sc` + `actor_item_base.sci` | Pickable inventory item.                  |
| `actor_item_disp.bin` | `actor_item_disp.sc`             | Inventory item with custom dispatch.         |
| `actor_item_dummy.bin`| `actor_item_dummy.sc`            | Decoration item (not pickable).              |
| `actor_item_steal.bin`| `actor_item_steal.sc`            | Stealable item (raises crime flag on take).  |
| `actor_disp.bin`      | `actor_disp.sc`                  | Generic dispatcher (event router).           |

---

## 4. Item-class scripts (`item_*.bin`, 47 files)

One script per item type that has special on-use behaviour: medical
items, weapons, food, quest items. Examples:

| File                    | Behaviour                                       |
|-------------------------|-------------------------------------------------|
| `item_alpha_pills.bin`  | Alpha pills (medical — partial healing)         |
| `item_beta_pills.bin`   | Beta pills (advanced healing)                   |
| `item_white_vaccine.bin`, `item_black_vaccine.bin`, `item_blue_vaccine.bin` | Vaccines — Powder Plague immunisation |
| `item_bandage.bin`      | Bandage (bleed-stop)                            |
| `item_burah_serum.bin`  | The Bachelor's serum (quest-critical)           |
| `item_bottle_water.bin` | Water bottle (thirst)                           |
| `item_bread.bin`        | Bread (hunger)                                  |
| `item_boot_army.bin`, `item_boot_repel.bin` | Footwear (stat bonuses)         |
| `item_balahon.bin`      | Balakhon (worn coat — exposure bonus)           |
| `item_detector.bin`     | Plague detector                                  |
| `item_etorfin.bin`, `item_fenol.bin`, `item_feromicin.bin` | Drugs / poisons    |
| …                       | (37 more — full list under `Scripts/item_*.bin`) |

Items without a script use the default `actor_item.bin` from §3.

---

## 5. NPC scripts

Two parallel sets:

### 5.1 `NPC_*` (29 files) — named NPC dialogue trees

Per-NPC conversation logic for the Bachelor's campaign. Naming
convention: `NPC_<character>_<other>.bin` for character `<character>`
when talking to `<other>`.

Examples:

```
NPC_Danko_Aglaja.bin     — Bachelor talks to Aglaja
NPC_Danko_Andrei.bin     — Bachelor talks to Andrei
NPC_Danko_Burah.bin      — Bachelor talks to himself
NPC_Burah_Danko.bin      — (legacy from cross-campaign test)
```

(29 named NPC files in total, mostly one per quest-NPC.)

### 5.2 `citizen_*` (30 files) — generic citizen behaviour

NPC scripts not tied to a specific character — generic citizens that
populate the city.

| Pattern                    | Meaning                                          |
|----------------------------|--------------------------------------------------|
| `citizen_<name>.bin`       | Alive variant                                    |
| `citizen_<name>_d.bin`     | "Dead" / dying variant (different dispatch tree) |

Examples: `citizen_boy`, `citizen_girl`, `citizen_butcher`,
`citizen_dohodyaga`, `citizen_alkash` (drunk), `citizen_dog`,
`citizen_littleboy`.

---

## 6. UI scripts (`ui_*`, 47 files)

One script per UI form in `UI.vfs/*.xml`
([`formats/ui_xml.md`](formats/ui_xml.md)). Examples:

| File                       | Bound UI form                                                 |
|----------------------------|----------------------------------------------------------------|
| `ui_dialog.bin`            | NPC dialogue screen                                            |
| `ui_diary.bin`             | Player diary                                                   |
| `ui_inventory.bin`         | Inventory                                                       |
| `ui_worldmap.bin`          | World map                                                       |
| `ui_playerstat.bin`        | Player stats HUD                                                |
| `ui_mail.bin`              | In-game letter / message                                        |
| `ui_cursor.bin`            | Cursor swap on hover                                            |
| `ui_button.bin`            | Reusable button widget                                          |
| `ui_container_slot.bin`    | One slot in a container UI                                      |
| `ui_corpse.bin`, `ui_corpse_slot.bin`, `ui_corpse_tool.bin` | Looting a dead body |
| `ui_dialog_history.bin`    | Conversation history view                                       |
| `ui_dialog_photo.bin`      | NPC photo in dialogue                                            |
| `ui_agony.bin`             | "Player is dying" overlay                                       |
| `ui_game_pers_choose.bin`  | New-game character pick                                          |
| `ui_game_button_highlight.bin` | Hover-highlight on game-menu buttons                         |
| …                          | (37 more)                                                        |

---

## 7. Other categories

| File / family                | Role                                                          |
|------------------------------|---------------------------------------------------------------|
| `door_locked.bin`            | Locked door — requires lockpick or key                         |
| `bonfire.bin`, `bonfire_geom.bin` | Burning bonfire (light + heat + particle emitter)        |
| `barricade.bin`              | Wooden barricade actor (HP, destroyable)                       |
| `arena_fighter.bin`, `arena_manager.bin`, `arena_spectator.bin` | Bull-fighting arena minigame |
| `bull.bin`                   | Bull behaviour for the arena                                   |
| `agony1.bin`                 | Dying-NPC behaviour (slow death animation + last words)        |
| `bomber.bin`                 | Suicide bomber                                                 |
| `big_gun.bin`                | Heavy weapon emplacement                                       |
| `bed.bin`                    | Bed actor (sleep until)                                         |
| `barrel_water.bin`           | Water barrel (drink to slake thirst)                            |
| `blood.bin`                  | Blood particle effect                                            |
| `container*.bin`             | Container UI / behaviour family                                  |
| `cs_play_all.bin`            | Cinematic chooser / dev tool — plays every CS in sequence        |
| `sound_fake3d.bin`           | Bound to `ACTOR_SOUND_FAKE3D` placement                          |

---

## 8. How to find which script binds to which actor

Each scene XML (`Actors.vfs/*.xml`, see
[`formats/actor_xml.md`](formats/actor_xml.md)) declares
`<Script>name.bin</Script>` if the actor has one. Two ways to
search:

- `grep -r "Script>foo.bin"  alpha/data/Actors/` (when extracted).
- Inspect `Actors.vfs` via `pkutil l Actors.vfs` and look at the
  `.xml` files of interest.

---

## 9. Round-trip status

All 373 scripts in this catalogue pass the
`pathologic_re/parser/batch_test_2005.py` byte-identical round-trip
(`.bin → .asm → .c → .asm → .bin`). The 972 HD scripts also pass
100 %; the 483 Void scripts pass 100 % through
`disasm/void_re/`. See [editions_diff.md](editions_diff.md).

---

## 10. Cross-references

- Bytecode format: [bin_format.md](bin_format.md).
- VM / opcodes: [vm.md](vm.md), [opcodes.md](opcodes.md).
- Task / event model: [tasks.md](tasks.md),
  [events_2005.md](events_2005.md).
- Host-call catalogue: [script_api.md](script_api.md).
- Source `.sc` files: `SRC/PlagueCity/Game/script_sources/`.
