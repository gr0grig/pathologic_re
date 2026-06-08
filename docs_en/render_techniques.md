# Render Techniques and Shaders (D3D9)

Catalogue of every rendering technique the engine's D3D9 backend ships,
together with the vertex / pixel shader files they bind. All paths are
relative to `SRC/PlagueCity/Game/Renderers/D3D9/`.

The renderer (`CRenderer`) creates one technique instance per material
variant per geometry; geometries pick which technique to use through
their material descriptor.

---

## 1. Class hierarchy

```
CTechBase                                  abstract — VB/IB management, draw callbacks
 ├ CTechBaseDiffuse                        diffuse-only base
 │   ├ CTechniqueDiffuse<TVPMode, TMod>    plain diffuse
 │   ├ CTechniqueDiffuseMaps               diffuse + baked lightmap
 │   ├ CTechniqueDiffuseS                  diffuse + specular
 │   ├ CTechniqueDiffuseSMaps              diffuse + specular + lightmap
 │   ├ CTechniqueDiffuseSF                 diffuse + specular (fixed-function)
 │   ├ CTechniqueDiffuseSOpMaps            diffuse + specular + opacity + lightmap
 │   ├ CTechniqueDiffuseSOpF                ↳ FFP variant
 │   ├ CTechniqueDiffuseSOpMapsF            ↳ FFP variant
 │   ├ CTechniqueDiffuseOp                 diffuse + opacity
 │   ├ CTechniqueDiffuseOpMaps             diffuse + opacity + lightmap
 │   └ CTechniqueSpecial1                  special: cube-texture environment
 │
 ├ CTechBaseDiffuseBump                    bump-mapped base
 │   ├ CTechniqueDiffuseBump               diffuse + normal map
 │   ├ CTechniqueDiffuseBumpMaps           +lightmap
 │   ├ CTechniqueDiffuseBumpNB             bump w/o specular
 │   └ CTechniqueDiffuseBumpNBMaps         +lightmap
 │
 ├ CTechniqueNoTex                          flat-shaded (no texture)
 │   └ CTechniqueNoTexMaps                  +lightmap
 │
 └ CTechniqueBone                           skinned animated base
     └ CTechniqueBoneDiffuse<TVPMode>       skinned diffuse
```

### Typed-data variants (`TD*`)

Three `TD*` classes act as **type descriptors** for the lightmap-aware
build path, used by the static-light system:

| Class                | Counterpart                |
|----------------------|----------------------------|
| `CTDDiffuse`         | `CTechniqueDiffuse`        |
| `CTDDiffuseNB`       | `CTechniqueDiffuseBumpNB`  |
| `CTDDiffuseBump`     | `CTechniqueDiffuseBump`    |

They expose the same byte layouts so static-light build can write the
same blob the runtime technique will consume.

### Total count

~ 28 technique classes × multiple template instantiations (vertex
shader mode `TVPMode`, modifier `TMod`) = **over 100 compiled
variants** in the final renderer DLL.

---

## 2. Vertex declarations

Standard layouts emitted by the various techniques (offsets in bytes):

### 2.1 Diffuse / DiffuseS / DiffuseOp

```
0   FLOAT3   POSITION
12  FLOAT3   NORMAL          (skipped if "no normal" variant)
24  FLOAT2   TEXCOORD0       diffuse UV
                              ──┐
32  FLOAT2   TEXCOORD1       │ (lightmap UV, "Maps" variants only)
                              ──┘
```

### 2.2 DiffuseBump

```
0    FLOAT3   POSITION
12   FLOAT3   TANGENT (T1)
24   FLOAT3   TANGENT (T2)    binormal = T1 × T2 in shader
36   FLOAT2   TEXCOORD0       diffuse UV
44   FLOAT2   TEXCOORD1       bump UV
52   FLOAT2   TEXCOORD2       lightmap UV (Maps variants)
```

### 2.3 Bone variants (declared in `RawGeometry.cpp` + `BoneGeometry`)

| Decl  | Stride | Layout                                                       |
|-------|-------:|--------------------------------------------------------------|
| Decl1 | 20     | POSITION(F3) + TEXCOORD0(F2)                                  |
| Decl2 | 32     | POSITION(F3) + NORMAL(F3) + TEXCOORD0(F2)                     |
| Decl3 | 12     | POSITION(F3) only (shadow / depth pass)                       |

### 2.4 Plain (no texture)

```
0   FLOAT3   POSITION
12  D3DCOLOR DIFFUSE         (per-vertex colour, 4 bytes)
```

---

## 3. Shaders

All HLSL/asm shaders live under `Renderers/D3D9/Shaders/`. The build
compiles them ahead of time and embeds them in the renderer DLL. The
table below lists the shipping shader files and what each does.

| File                 | Stage  | Purpose                                                                 |
|----------------------|--------|--------------------------------------------------------------------------|
| `common.vsh`         | VS     | Shared helpers: `CalculateSpecular`, `CalculateFog`, matrix constants.   |
| `diffuse.vsh`        | VS     | Diffuse lighting (ambient + directional + point), incl. lightmap + specular variants. |
| `diffusebump.vsh`    | VS     | Bump-mapped: transforms the light vector into per-vertex tangent space.  |
| `OriginLitDiffuse.vsh` | VS   | Light at origin (e.g. explosions, lanterns) — diffuse path.              |
| `OriginLitNoTex.vsh` | VS     | Light at origin — no texture (flat-shaded debris).                       |
| `notex.vsh`          | VS     | Plain vertex-colour path (debug rendering, particle sprites).             |
| `general.vsh`        | VS     | General-purpose vertex transform + UV passthrough.                       |
| `special1.vsh`       | VS     | Cube-texture environment mapping (used by `CTechniqueSpecial1`).         |
| `crowd.vsh`          | VS     | Crowd / NPC instancing (basic).                                          |
| `crowd_imp.vsh`      | VS     | Crowd instancing — importance/LOD aware.                                  |
| `shadows.vsh`        | VS     | Shadow-map generation (depth only).                                       |
| `water2.vsh`         | VS     | Water surface: camera direction + half-vector for reflection sampling.   |
| `water2.psh`         | PS     | Water pixel shader (procedural waves, normal-map sampling, refraction). |

Both vertex- and pixel-shader compilation targets are SM 1.x / 2.0
era — the engine was authored against D3D9 ps_1_1..2_0, vs_1_1..2_0.

### Fixed-function fallbacks

For hardware that can't run shaders, techniques whose name ends in
`F` (`CTechniqueDiffuseSOpF`, `CTechniqueDiffuseSOpMapsF`) use the
D3D9 fixed-function pipeline. Selection happens at renderer-init time
based on `D3DCAPS9::PixelShaderVersion`.

---

## 4. Technique → geometry map

| Geometry class                  | Technique(s)                                                       |
|---------------------------------|--------------------------------------------------------------------|
| `CGeometryStatic` (`.mesh`)     | `CTechniqueDiffuse*`, `CTechniqueDiffuseBump*` — chosen by material |
| `CGeometryDetailedObject`       | `CTechniqueDiffuse` with per-instance light + animation             |
| `CGeometryAnimBone` (`.mms`)    | `CTechniqueBoneDiffuse`                                             |
| `CGeometryBSP` (level mesh)     | `CTechniqueDiffuseBumpMaps`, `CTechniqueLightmaps*`                  |
| `CGeometryLand` (terrain)       | `CTechniqueDiffuseBump*` (heavy lightmap use)                       |
| `CGeometryTrans` (transparent)  | `CTechniqueDiffuse` + alpha blend setup                             |
| `CGeometryTransVLit`            | `CTechniqueDiffuse` + per-vertex light pre-computed                  |
| `CGeometryBillboard*`           | Custom billboard shader path                                         |
| `CGeometryWater` (`water.dat`)  | `water2.vsh` + `water2.psh`                                           |
| `CGeometrySky`                  | direct D3D9 calls (cube/skybox, no technique)                       |
| `CGeometryClouds`               | billboard + transparency                                              |
| `CGeometryRain`                  | particle billboard                                                  |
| `CGeometryFlame`                | particle system (`CTechniqueParticle`)                              |
| `CGeometryParticleSystem`       | particle billboard with the 60-float parameter block                |

---

## 5. Post-processing

Post-process effects implement `IPostProcessEffect` and stack on top
of the main rendered scene. Shipping effects:

| Class                | Effect                                       | Header                      |
|----------------------|----------------------------------------------|-----------------------------|
| `CPPNegateImage`     | Colour-inverted screen (horror scene gimmick) | `Engine/Renderer/IPPNegateImage.h` |
| (additional ones)    | Bloom, blur, distortion — listed in `IPostProcessEffectEnumerator` |                          |

Effects are added with `IRenderer::AddPostProcessEffect(...)` and
removed with `RemovePostProcessEffect`. Application order matters —
effects compose as render-target ping-pong passes.

---

## 6. Selecting a technique

The renderer doesn't have a single "select technique" function.
Instead, every geometry that needs rendering builds an explicit
`ITechnique *` instance at load time and stores it. The constructor
chains look like:

```
CGeometryStatic::CGeometryStatic(name, …)
  ↓
loads <name>.mesh → has texture, no normal map
  ↓
new CTechniqueDiffuse<TVPModeShaders, …>(…)
```

The choice is therefore **material-driven**, not runtime-dynamic. To
add a new path, you typically need to: (a) write a new technique
class deriving from `CTechBase*`; (b) wire it into the geometry's
constructor; (c) optionally add a typed-data variant for build-time
lightmap baking.

---

## 7. Cross-references

- Bone mesh format consumed by `CTechniqueBoneDiffuse`:
  [animation.md](animation.md).
- Static mesh format: [`formats/mesh.md`](formats/mesh.md).
- Water source data: [`formats/dat_water.md`](formats/dat_water.md).
- Texture loaders: [`formats/tex.md`](formats/tex.md),
  [`formats/png_tga.md`](formats/png_tga.md),
  [`formats/bump.md`](formats/bump.md).
- Particle system data:
  [particle_system.md](particle_system.md).
