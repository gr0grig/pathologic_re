# Inventory, Items, and Weapons

How the engine models player and NPC inventories, item definitions,
and weapons.

- **Item definitions**: `World.vfs/items.xml` (+ `items_base.xml`).
  See [`formats/world_xml.md`](formats/world_xml.md) §2.
- **Per-actor inventory**: `Actors.vfs/<name>.xml` `<Items>` block.
  See [`formats/actor_xml.md`](formats/actor_xml.md) §3.4.
- **Source files** (all in `SRC/PlagueCity/Game/Game/`):
  - `IInvItemDatabase.h`, `IInvItemContainer.h`, `IInvItemInfo.h`,
    `IInvItemProxy.h`, `IInvItemSubContainer.h`
  - `InvItemClass.{cpp,h}` — per-item-type metadata.
  - `InvItemContainer.{cpp,h}` — generic container.
  - `InvItemContainerBase.{cpp,h}` — backing store.
  - `InvItemMultiContainer.{cpp,h}` — multi-section containers (e.g.
    player inventory with equipment slots + free slots).
  - `InvItemSubContainer.{cpp,h}` — sub-container for stacking.
  - `WeaponData.{cpp,h}` — weapon-specific stat block.
  - `HandsData.{cpp,h}` / `HandsDesc.{cpp,h}` — first-person rig
    coupling.

---

## 1. Levels of abstraction

```
IInvItemDatabase          (one per world)
   │
   │  contains many
   ▼
IInvItemInfo              (per item *type*, e.g. "fenol")
   │
   │  instantiated as
   ▼
IInvItemProxy             (per stack — points back at IInvItemInfo + count)
   │
   │  held in
   ▼
IInvItemContainer         (per actor inventory or static container)
```

- **`IInvItemInfo`** is the static prototype: name, description string
  ID, icon, base value, weight, stack limit, class flags (weapon /
  food / medicine / quest).
- **`IInvItemProxy`** is a runtime stack instance: refers to an
  `IInvItemInfo`, carries a count, and may carry per-stack data
  (current charge, ammo count for a weapon).
- **`IInvItemContainer`** is the holder. Lives on an actor or a
  scripted container (`ACTOR_SCRIPTED_CONTAINER` = id 18).

---

## 2. Item database — `items.xml`

The database is the union of `items.xml` and `items_base.xml`. The
top-level structure is:

```xml
<Items>
    <props>
        <peanut>
            <Description type="int">3223</Description>
            <Icon>ui/items/peanut.tga</Icon>
            <Class>food</Class>
            <Stack>10</Stack>
            <Value>4</Value>
        </peanut>
        <revolver>
            <Description type="int">3245</Description>
            <Icon>ui/items/revolver.tga</Icon>
            <Class>weapon</Class>
            <Stack>1</Stack>
            <Weapon>
                <Damage>35</Damage>
                <Range>500</Range>
                <Ammo>bullets</Ammo>
            </Weapon>
        </revolver>
        …
    </props>
</Items>
```

Per-item sub-elements recognised by `CInvItemClass::CInvItemClass`:

| Sub-element     | Type       | Meaning                                                              |
|-----------------|------------|----------------------------------------------------------------------|
| `<Description>` | `int`      | String-database ID for the inspect-screen description.                |
| `<Icon>`        | `string`   | Path to the UI icon (in `Textures.vfs`).                              |
| `<Class>`       | `string`   | Item class: `weapon`, `medical`, `food`, `quest`, `tool`, `ammo`, etc.|
| `<Stack>`       | `int`      | Max stack size in inventory. `1` for unique items.                    |
| `<Value>`       | `int`      | Base trade value.                                                     |
| `<Weight>`      | `float`    | Per-unit weight (encumbrance).                                        |
| `<Weapon>`      | substruct  | Weapon stats — see §3.                                                |
| `<Stat>`        | substruct  | Optional stat-bonus block applied while held / equipped.              |
| `<Use>`         | string     | Name of the script function to call on consumption.                   |

`items_base.xml` defines a base set; `items.xml` extends/overrides
via `<reference filename="items_base.xml"/>` inheritance (same
mechanism as scene XML — see [`formats/isc.md`](formats/isc.md) §2.2).

---

## 3. Weapon block

Inside an item's body:

```xml
<Weapon>
    <Damage>35</Damage>            <!-- per-shot damage              -->
    <Range>500</Range>             <!-- max effective range          -->
    <Ammo>bullets</Ammo>           <!-- item name of compatible ammo -->
    <Capacity>6</Capacity>         <!-- magazine size               -->
    <ReloadTime>2.5</ReloadTime>   <!-- seconds                     -->
    <Sound>revolver_fire</Sound>   <!-- world-level <sounds.xml> alias -->
    <Mesh>revolver.mesh</Mesh>     <!-- 3rd-person weapon mesh      -->
    <HandPose>revolver</HandPose>  <!-- 1st-person hand pose name   -->
</Weapon>
```

Parsed by `CWeaponData::CWeaponData(ICreateParams *)` in
`WeaponData.cpp`. The `<HandPose>` value maps to a `<Weapon>` entry
in `World.vfs/danko_hands.xml` (see
[`formats/world_xml.md`](formats/world_xml.md) §4), which in turn
points at a `.hand` rig.

---

## 4. Containers

`CInvItemContainer` (`InvItemContainer.cpp`) is a fixed-capacity
slot array. Each slot is an `IInvItemProxy *` or `NULL`.

Operations:

- `AddItem(infoOrProxy, count)` — try to add; merges into existing
  stacks where possible. Returns `false` if capacity exhausted.
- `RemoveItem(slot, count)` — decrement. Removes the stack when
  count hits 0.
- `FindItemByName(name)` — linear scan; returns first matching
  proxy.
- `Iterate(IItemEnumerator *)` — visitor pattern.

### 4.1 `CInvItemMultiContainer`

Special container with **named sub-sections**, used by the player:

```
default:    free-form item slots
equipment:  worn-item slots (hat, coat, …)
quickbar:   numbered fast-use slots
```

Each section is a `CInvItemSubContainer` with its own capacity.

### 4.2 Capacity

Per-actor capacity comes from the `<ContainerCapacity>` XML element
in the actor's Extras (see
[`formats/actor_xml.md`](formats/actor_xml.md) §3.8), or defaults to
`CONTAINER_CAPACITY` in `Game/Game/Config.h`.

---

## 5. Per-actor inventory at scene start

When an actor is created, its `<Items>` block populates the
container:

```xml
<Items>
    <peanut amount="3"/>
    <bandage amount="2"/>
    <revolver/>            <!-- amount defaults to 1 -->
</Items>
```

Processed by `CInvItemContainer::AddInvItemsFromParams` (called from
each actor class's constructor).

---

## 6. Save / load

`CInvItemContainer::SaveState` (`InvItemContainerBase.cpp`) writes the
slot count, then per-slot `IInvItemProxy*` references through the
factory mechanism (see [save_format.md](save_format.md)).
`IInvItemInfo`s themselves are loaded once at world start from
`items.xml` and never serialised — they're identified by name in
saves and re-resolved on load.

---

## 7. Trade UI

`Game/Game/TradeOverride.cpp` drives the player↔NPC trade screen.
It uses `IInvItemInfo::GetValue()` and a per-NPC trade-modifier
script function for pricing. The UI itself is one of the standard
`UI.vfs/*.xml` forms; the script wires it up.

---

## 8. Cross-references

- Item database XML schema:
  [`formats/world_xml.md`](formats/world_xml.md) §2.
- Per-actor `<Items>` blocks:
  [`formats/actor_xml.md`](formats/actor_xml.md) §3.4.
- Weapon hand rig: [`formats/hand.md`](formats/hand.md),
  [`formats/world_xml.md`](formats/world_xml.md) §4.
- Description string IDs:
  [`formats/dat_strings.md`](formats/dat_strings.md).
- Save layout: [save_format.md](save_format.md).
