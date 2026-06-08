# Actor `.xml` — Per-instance "Extras" Configuration

- **Archive**: `Actors.vfs` (484 files).
- **Examples**: `agony_common.xml`, `blood.xml`, `torch.xml`,
  `sound_river.xml`, `named.xml`, `indoor_door.xml`.
- **Parser**: `CSimpleXML` (`IXMLParser`) at
  `Game/Engine/SimpleXML.cpp`.
- **Consumer**: `CCreateParamsActor`
  (`Game/Engine/CreateParamsActor.cpp`) — wraps the parsed XML in the
  `ICreateParams` interface that every actor constructor consumes.
- **Wiring**: referenced from [`.isc`](isc.md) / [`.osc`](osc.md) via
  `<Actor Name="..." Extras="filename.xml"/>`.

---

## 1. Purpose

Actor XMLs supply **per-instance overrides** on top of the binary actor
data ([actor_placement.md](actor_placement.md)). The binary file
describes "what this actor is" (mesh, collision, type ID); the XML
describes "how this particular placement behaves" — its script, its
inventory, its sound list, its scriptable properties.

Many small variants share a single binary placement and differ only in
their XML — e.g. every door actor uses one of a handful of base XMLs
(`indoor_door.xml`, `outdoor_door.xml`) and overrides one or two
attributes.

---

## 2. Root element: `<Extras>`

Every file is wrapped in a single `<Extras>` root. The smallest valid
file is therefore:

```xml
<Extras>
</Extras>
```

(`Actors.vfs/agony_common.xml`, 21 bytes — a placeholder for an
actor that needs nothing per-instance.)

The XML is parsed by `CSceneIndoor::CreateActor` /
`CSceneOutdoor::CreateActor` which call
`pParser->FindNodePtr(NULL, "Extras")` and feed that node to
`CCreateParamsActor`. From that point everything is a name-based
lookup on the `Extras` node and its descendants.

---

## 3. Recognised children of `<Extras>`

### 3.1 `<ID>name</ID>`

Optional. Overrides the lookup name used to register the actor with
`CWorld`. If empty, the actor name from the parent `<Actor Name="…">`
is used. Used so multiple scenes can reference the same actor by a
stable name.

### 3.2 `<Script>name.bin</Script>`

References a compiled script (in `Scripts.vfs`, see [bin.md](bin.md))
that drives this actor's logic. The script is run at actor creation;
its `init()` task receives the actor as `this`.

### 3.3 `<Properties>…</Properties>`

Named per-instance variables exposed to the bound script. Each child is
one property — the tag name is the property name. The optional `type`
attribute selects the value's storage type:

```xml
<Properties>
    <reference_distance type="float">1000</reference_distance>
    <sound_distance     type="float">3000</sound_distance>
    <num_sounds         type="int">1</num_sounds>
    <night>1</night>                       <!-- default type = string -->
</Properties>
```

Recognised `type` values: `int`, `float`, `string` (default).

Properties are exposed as global variables to the bound script (see
`Properties` and `HasProperty` in [`script_api.md`](../script_api.md)).

### 3.4 `<Items>…</Items>`

Initial inventory contents — one child per item type, e.g.
`<peanut amount="3"/>`. Resolved against the global item database in
[world_xml.md](world_xml.md). `AddInvItemsFromParams` performs the
loading; see `Game/Game/InvItemContainer.cpp`.

### 3.5 `<Sounds>…</Sounds>`

Named sound aliases. Each child maps a script-visible alias to an
`.ogg` filename:

```xml
<Sounds>
    <sound01>River.ogg</sound01>
</Sounds>
```

Scripts then call `PlaySound(self, "sound01")` etc. The sound list is
loaded by `LoadSoundList(ISoundManager *, ICreateParams *)`
(`Game/Game/SoundList.cpp`).

### 3.6 `<Particlesystems>…</Particlesystems>` (also `<particlesystems>`)

Particle effects this actor can spawn. Each child is one named system
with a fixed schema:

```xml
<particlesystems>
    <torch>
        <texture>fire.tex</texture>
        <maxparticles>40</maxparticles>
        <lifetime>1.00</lifetime>
        <texx>2</texx>
        <texy>2</texy>
        <data>1.00;0.00;…</data>          <!-- 60 semicolon-separated floats -->
    </torch>
</particlesystems>
```

The `<data>` element is a flat list of `;`-separated floats — exactly
**54 values** (9 channels × 6 floats each: avg, disp, speedAvg, speedDisp,
accelAvg, accelDisp) for the particle-system parameter block. Channels
in order: Red, Green, Blue, Alpha, Size, Angle, Gravity, Viscosity, Frame.
Parsed by `CActorScripted::_PSInitFromString`
(`Game/Game/ActorScripted.cpp:810`). See
[particle_system.md](../particle_system.md) for the full schema.
Trailing extra tokens (some files have 60 separators with empty trailing
fields) are silently ignored.

### 3.7 Flags

Bareword children act as boolean flags. Recognised:

| Tag                | Effect                                                  |
|--------------------|---------------------------------------------------------|
| `<usable/>`        | Actor can be activated by the player (`E` key).         |
| `<Collectable/>`   | Actor is an inventory pickup.                           |
| `<keep/>`          | Persists across scene unloads (force-keep).             |
| `<nokeep/>`        | Force-discard on scene unload (overrides smart dispose).|

The presence of the tag is what counts; the body is irrelevant.

### 3.8 `<ContainerCapacity>N</ContainerCapacity>`

Inventory capacity for container actors. Defaults to
`CONTAINER_CAPACITY` (defined in `Config.h`) if omitted.

### 3.9 `<Group id="N"/>`

Same as in [isc.md](isc.md) — links the actor to a scripting group.
Most often present in `<Actor>` inside the scene XML, but legal here
too.

---

## 4. Auto-injected parameters

`CCreateParamsActor` adds two synthetic parameters that are **not**
present on disk but are visible to the actor constructor:

- `#SourceXML` — the XML filename this Extras came from (used for
  diagnostics: `m_strXMLName` is logged when the actor goes wrong).
- `#Actor` — the parent actor pointer (for nested params).

The leading `#` denotes "internal" parameters that scripts cannot
override.

---

## 5. Compression

**None.** Plain XML.

---

## 6. Cross-references

- Binary half of an actor: [actor_placement.md](actor_placement.md).
- Where actor XMLs are referenced: [isc.md](isc.md), [osc.md](osc.md)
  via `<Actor Extras="…">`.
- The script bound through `<Script>`: see [bin.md](bin.md) and
  [`../script_api.md`](../script_api.md).
- Item database referenced by `<Items>`: [world_xml.md](world_xml.md).
