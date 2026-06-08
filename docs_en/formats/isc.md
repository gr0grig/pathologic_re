# `.isc` — Indoor Scene Definition (XML)

- **Archive**: `Scenes.vfs` (796 files).
- **Examples**: `sobor_trup.isc`, `sobortrup_base.isc`, `house1_base.isc`,
  `factory_base.isc`.
- **Reader**: `CSceneIndoor::CSceneIndoor(CWorld *, ISceneInterface *,
  ICustomSceneIndoor *, IXMLParser *)` — `Game/Engine/SceneIndoor.cpp:72`.
- **XML parser**: `CSimpleXML` (`Game/Engine/SimpleXML.cpp`), accessed via
  the `IXMLParser` interface.

---

## 1. Format: plain XML

`.isc` is **text XML**, not binary. UTF-8 (ASCII-compatible) without
explicit declaration or BOM. The on-disk file body is fed directly to
`IXMLParser::Parse(buffer, size)`.

A small example, `Scenes.vfs/sobor_trup.isc` (96 bytes total):

```xml
<Scene>
    <Name>sobor</Name>
    <reference filename="sobortrup_base.isc" node="Scene"/>
</Scene>
```

The whole archive is full of these tiny "delta" `.isc` files that
`<reference …/>` a richer `*_base.isc` and then add/override a handful of
elements.

---

## 2. Element schema

### 2.1 `<Scene>` (root)

The single root element. All other elements appear as direct children. The
indoor variant must contain a `<Level>` (the static BSP mesh).

### 2.2 `<reference filename="…" node="…"/>` — XML inheritance

`CSimpleXML` resolves `<reference>` nodes by loading the referenced file
through the same `IFileSystem` (`FS_STD_SCENE`) and **inlining** the
contents of `node="…"` at the position of the `<reference>` tag. This is
the engine's flavour of XInclude.

This is why `Scenes.vfs/sobor_trup.isc` is only 96 bytes: it imports
`sobortrup_base.isc` and substitutes the title.

### 2.3 `<Name>title</Name>`

Display title for the scene (debug log + UI).

### 2.4 `<Ambient>R G B</Ambient>`

Ambient light colour. Three space-separated floats; clamped to [0, 1].
Falls back to (0, 0, 0) if missing.

### 2.5 `<Level>actor_name</Level>`

**Required.** Names the BSP/level actor (a placement file in
[Actors.vfs](actor_placement.md)) that supplies the static walls, floors,
and ceilings of the indoor scene.

### 2.6 `<PathFinding DataFile="<name>.pfd"/>`

Optional. References a [`.pfd`](pfd.md) file in `Scenes.vfs` that contains
the precomputed navmesh.

### 2.7 `<Cache>…</Cache>`

Optional. Pre-cached lists of geometries/textures to pin into memory
before actor loading runs. See `CSceneBase::LoadCachedData`
(`SceneBase.cpp`).

### 2.8 `<SceneLocators>…</SceneLocators>`

Named respawn/spawn points referenced by actors via the `Location="…"`
attribute. Each child is a `<Locator Name="…" Pos="x y z" Dir="x y z"/>`.

### 2.9 `<Group id="N"/>`

Declares an actor-grouping ID used for script-driven mass operations
(e.g. "hide all actors in group 7"). See `CSceneBase::LoadGroups`.

### 2.10 `<Actor …/>` — placement

The main per-scene element. Recognised attributes:

| Attribute     | Type     | Meaning                                                  |
|---------------|----------|----------------------------------------------------------|
| `Name`        | string   | Actor file name (resolves to `Actors.vfs/<Name>`). Required unless `Type` is given. |
| `Type`        | string   | Actor type name (`fog`, `flame`, `scripted`, `blank`, `scripted_container`, `sound-fake3d`). Used for programmatically created actors with no on-disk file. |
| `Extras`      | string   | Per-instance XML override (resolves to `Actors.vfs/<Extras>`). See [actor_xml.md](actor_xml.md). |
| `StaticID`    | u32      | Identifier used by the BSP level mesh to disambiguate co-located props. |
| `Location`    | string   | Name of a `<Locator>` to spawn at. Optional. |
| `Group`       | child    | One or more `<Group id="N"/>` children link this actor to scripting groups. |

### 2.11 `<Map FileName="…"/>` — UI map link

Optional. Names a [`.map`](map.md) bitmap (in `Scenes.vfs`) that drives
the world-map UI for this region. Indoor scenes rarely have one.

### 2.12 `<Regions FileName="regions.xml"/>` — region descriptor

Outer-world only; see [osc.md §3.3](osc.md). Indoor `.isc` files do not
usually carry this.

---

## 3. Inheritance and override semantics

When `<reference>` inlines content, the engine **does not deduplicate**:
the base file's `<Actor>` list is copied in literally, and any
`<Actor>` lines following the `<reference>` simply add to (or override
within a `StaticID`) the base list. There is no XML-level diff/merge —
it's a textual concatenation through the parser.

The pattern is therefore:

```
project_base.isc  ← all the heavy lifting (BSP, hundreds of actor lines)
project.isc       ← tiny stub that inherits and adds/changes a few props
```

This keeps the per-scene file lightweight while letting hundreds of
"variant" scenes share one heavy base.

---

## 4. Compression

None. `.isc` files are plain text.

---

## 5. Cross-references

- The Level actor in `<Level>…</Level>` is a noext placement file: see
  [actor_placement.md](actor_placement.md).
- The actors referenced by `<Actor Name="…">` are noext placement files
  in `Actors.vfs`; the `<Actor Extras="…">` value is an
  [actor_xml.md](actor_xml.md) XML file.
- Pathfinding pair: see [pfd.md](pfd.md).
- Outdoor counterpart: see [osc.md](osc.md). Structurally identical XML
  except `<Land>` replaces `<Level>` and outdoor-only sections
  (`<Regions>`, `<Map>`) appear.
