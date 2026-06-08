# `.osc` — Outdoor Scene Definition (XML)

- **Archive**: `Scenes.vfs` (2 files: `city.osc`, `city_base.osc`).
- **Reader**: `CSceneOutdoor::CSceneOutdoor(CWorld *, ISceneInterface *,
  ICustomSceneOutdoor *, IXMLParser *)` — `Game/Engine/SceneOutdoor.cpp:85`.
- **XML parser**: same `CSimpleXML` as [`.isc`](isc.md).

---

## 1. Format

`.osc` is the outdoor counterpart of [`.isc`](isc.md). Same XML
container, same `<reference filename="…">` inheritance mechanism, same
`<Actor>` / `<Group>` / `<SceneLocators>` / `<PathFinding>` /
`<Cache>` blocks.

The differences are:

| Section          | `.isc`                                        | `.osc`                                            |
|------------------|-----------------------------------------------|--------------------------------------------------|
| Main geometry    | `<Level>name</Level>` — static BSP mesh       | `<Land>name</Land>` — terrain "Land" actor      |
| Map UI           | rare                                          | `<Map FileName="city.map"/>` typical            |
| Regions          | absent                                        | `<Regions FileName="regions.xml"/>` typical     |
| Sky              | implicit via level                            | `CRenderer::CreateSkyBox()` always              |
| Rain             | absent                                        | `CRenderer::CreateRainGeometry()` always        |
| Weather          | usually fixed                                 | `WeatherData*.cpp` drives swappable schemes     |

Otherwise the schema is identical.

---

## 2. Worked example

`Scenes.vfs/city.osc` (30 710 bytes), abbreviated:

```xml
<Scene>
    <Name>city</Name>
    <reference filename="city_base.osc" node="Scene"/>

    <Group id="0"/>
    <Group id="1"/>
    …
    <Group id="116"/>

    <Map FileName="city.map"/>
    <Regions FileName="regions.xml"/>

    <Actor Name="…" StaticID="…" Extras="…" Location="…"/>
    …
</Scene>
```

`Scenes.vfs/city_base.osc` carries the heavy actor list (thousands of
buildings, props, lights). Both files are XML; `city.osc` adds the
groupings and UI links on top.

---

## 3. Elements unique to `.osc`

### 3.1 `<Land>actor_name</Land>`

**Required.** Names the terrain actor (a noext placement file in
[Actors.vfs](actor_placement.md)). The terrain actor in turn references a
height-field `.mesh` and the terrain texture set.

### 3.2 `<Map FileName="city.map"/>`

Names the binary world-map UI file in `Scenes.vfs`. See [map.md](map.md).
`CSceneOutdoor` opens this when the player presses the world-map key.

### 3.3 `<Regions FileName="regions.xml"/>`

A separate XML file (lives in `World.vfs/regions.xml`) that subdivides the
outdoor map into polygonal **regions** — used by music/weather systems
(`MusicRegionData.cpp`), by ambient sound zones, and by the world-map
highlight system. See [world_xml.md](world_xml.md).

### 3.4 Weather setup

Inherited from `world.xml` (`World.vfs`) — the outdoor scene does not
re-declare weather, it just listens for region transitions.

---

## 4. Pathfinding

`<PathFinding DataFile="city.osc.pfd"/>` is read **synchronously** by the
constructor (`SceneOutdoor.cpp:152-163`) into a `CPathFinding` object via
the `CStringReader` returned by `CreateMappedLoadObject` over
`Scenes.vfs`. See [pfd.md](pfd.md) for the binary layout.

The 21 `.pfd` files in the alpha build are mostly the
`*.isc.pfd` indoors; `city.osc.pfd` is not present in the archive listing
seen in the alpha — possibly the outdoor navmesh is regenerated at scene
load instead of being shipped.

---

## 5. Compression

None. Plain XML.

---

## 6. Cross-references

- Indoor counterpart: [isc.md](isc.md).
- Land actor: noext placement file in [actor_placement.md](actor_placement.md).
- City UI bitmap: [map.md](map.md).
- Navmesh: [pfd.md](pfd.md).
- Per-actor override XML: [actor_xml.md](actor_xml.md).
- Region definitions: [world_xml.md](world_xml.md).
