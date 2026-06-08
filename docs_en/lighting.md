# Lighting System

Three categories of light contribute to the rendered frame:

1. **Static lights** — placed at scene-build time, baked into
   lightmaps where the geometry is static.
2. **Dynamic lights** — runtime lights (lanterns, fire, scripted
   spawns), evaluated per vertex / per pixel each frame.
3. **Ambient + sky** — a constant base contribution from the scene's
   `<Ambient>` plus the skybox's directional sun.

Interfaces (under `SRC/PlagueCity/Engine/Renderer/`):

- `ILight` — base light.
- `ILightStatic` — pre-baked.
- `ILightPoint` — point light, position + colour + radius.
- `ILightGroup` — collection of lights that move together.
- `ILightOccluder` — geometry that **casts** shadow / blocks light.
- `ILightArray` — per-actor view of which lights affect this object.
- `ILightEnumerator` — visitor interface.

Actor wrappers (in `SRC/PlagueCity/Game/Game/`):

- `CActorLightStatic` (id 1) — single static light actor.
- `CActorLightStaticGroup` (id 2) — group of static lights baked
  together.
- `CLightPoint` (`LightPoint.cpp`) — dynamic point light primitive
  attached to scripted actors (torches, lanterns, explosions).
- Corona overlay system: `CCoronaStandard`, `CoronaList.cpp`.

---

## 1. Static lights — baked

A static-light actor (id 1) is a noext placement file in
`Actors.vfs` whose body contains:

```
u32 ulActorID = 1
CVector m_vPosition
COLORVALUE m_cvColor              (R, G, B as 3 floats)
f32 m_fRadius                     (linear falloff distance)
f32 m_fIntensity                  (1.0 default)
... (light-group ID, occluder flags, etc.)
```

(Exact layout from `CActorLightStatic::CActorLightStatic` in
`ActorLightStatic.cpp`.)

These lights are not re-evaluated at runtime: their contribution
is **baked into lightmap textures** by the asset cooker
(`tools/tile` for terrain, the editor's lightmap baker for static
meshes — see [toolchain.md](toolchain.md)). The lightmap is then
sampled by techniques whose name ends in `Maps`
(`CTechniqueDiffuseMaps`, `CTechniqueDiffuseBumpMaps`, etc. — see
[render_techniques.md](render_techniques.md) §1).

---

## 2. Static light groups

`CActorLightStaticGroup` (id 2) collects multiple static lights that
the editor wants to manage as one entity (e.g. all chandeliers in a
room, or all street lamps on one block). The group has its own
position/visibility toggle; toggling it on/off at runtime triggers a
lightmap-channel switch (the geometry shaders sample one of two
lightmap textures, the "on" and "off" variants).

The shading model treats every `CActorLightStaticGroup` as a fixed
pair of baked lightmap pages. Scripts can call `Enable(bool)` on the
group to swap between them.

---

## 3. Dynamic point lights — runtime

`CLightPoint` is the runtime point-light implementation. Created by
scripted actors (e.g. a torch actor's script calls
`@CreatePointLight(self(), colour, radius)` on init).

Per-light data:

```
CVector  position
COLORVALUE colour
f32      radius        (linear-falloff cutoff)
f32      brightness    (multiplier)
bool     bShadows      (whether this light casts dynamic shadows)
```

Dynamic lights are evaluated per-vertex for static geometry
(through the `CTechniqueDiffuseS*` family — diffuse + specular) and
per-pixel for animated bone meshes
(`CTechniqueBoneDiffuse` — [render_techniques.md](render_techniques.md)).
At most a fixed number of dynamic lights per draw call (typically 4)
is selected via `ILightArray::SelectClosest(...)` and shipped to the
shader as constant registers.

---

## 4. Light arrays and culling

Each actor maintains an `ILightArray *` listing the dynamic lights
that **could** affect it (computed each frame from world position +
light radii). The renderer queries this array per actor and picks the
top-N closest for the actual draw. Lights outside the actor's view
volume are pre-culled at the scene level.

Static lights bypass this array entirely — their contribution is
already in the lightmap.

---

## 5. Light occluders

`ILightOccluder` is a geometry that **blocks** dynamic light. Set on
an actor by passing `bDynamicShadows = true` (see static-actor body
in [`formats/actor_placement.md`](formats/actor_placement.md) §3.1).
The renderer projects shadow geometry from each dynamic light through
each occluder; the result is a stencil mask blended into the lit
surface.

There is no full shadow-map pipeline in this build — shadows are
stencil-projected. Performance-permitting, the engine renders one
shadow pass per dynamic light per occluder.

---

## 6. Corona system

`CCoronaStandard` (`CoronaStandard.cpp`) renders a 2D billboard
**bloom-style glow** around bright light sources. Each
`CActorLightStatic` and each `CLightPoint` can declare a corona
texture; the corona pipeline:

1. Reads each light's screen-space position.
2. Ray-tests visibility through the depth buffer.
3. Draws the corona texture additively at the projected position,
   modulated by the fraction of pixels that pass the visibility test.

The result is the "glow halo" around lanterns when looking directly
at them.

---

## 7. Ambient and sky

The scene's `<Ambient>R G B</Ambient>` element in
[`formats/isc.md`](formats/isc.md) / [`formats/osc.md`](formats/osc.md)
sets a flat per-channel ambient term added to every pixel of the
scene.

Outdoor scenes additionally have a **sky** (`CRenderer::CreateSkyBox`),
which contributes a strong directional **sun** light. The sun's
direction and colour are driven by the **time-of-day** values stored
on `CGameWorld` (`m_fTimeDawn` / `m_fTimeSunset` / `m_fAngleDawn` /
`m_fAngleSunset` — see [save_format.md](save_format.md) §6).

Weather (rain, fog) modulates these globals — see
`Game/Game/ModWeatherData*.cpp`.

---

## 8. Cross-references

- Render techniques that consume the lighting data:
  [render_techniques.md](render_techniques.md).
- Static-light placement (binary): see
  [`formats/actor_placement.md`](formats/actor_placement.md) §3.4.
- The `<Ambient>` setting: [`formats/isc.md`](formats/isc.md) §2.4.
- Hand-mounted lantern hand rig (the source of many dynamic lights):
  [`formats/hand.md`](formats/hand.md).
