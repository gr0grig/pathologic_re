# Particle System Data Format

Per-actor XML particle systems are declared inside
`<particlesystems>` blocks (see
[`formats/actor_xml.md`](formats/actor_xml.md) §3.6). The actual
per-particle behaviour comes from the `<data>` element — a
`;`-separated string of floats consumed by
`CActorScripted::_PSInitFromString` in
`Game/Game/ActorScripted.cpp:810`.

This document explains exactly which value means what.

---

## 1. Surrounding container

```xml
<particlesystems>
    <torch>
        <texture>fire.tex</texture>          <!-- texture used for each particle sprite -->
        <maxparticles>40</maxparticles>      <!-- max live particles at once -->
        <lifetime>1.00</lifetime>            <!-- seconds, per particle -->
        <texx>2</texx>                       <!-- texture frames horizontally -->
        <texy>2</texy>                       <!-- texture frames vertically -->
        <lit>1</lit>                         <!-- optional, default 1 (true) -->
        <data>1.00;0.00;0.00;0.00;0.00;0.00; …</data>   <!-- 54 floats, see §3 -->
    </torch>
</particlesystems>
```

| Sub-element       | Meaning                                                              |
|-------------------|----------------------------------------------------------------------|
| `<texture>`       | Sprite atlas filename (resolved against `Textures.vfs`).              |
| `<maxparticles>`  | Pool size. Particles past this count overwrite the oldest.            |
| `<lifetime>`      | Each particle's lifetime in seconds.                                  |
| `<texx>`, `<texy>`| Sub-frames in the sprite atlas. Combined with the **Frame** channel, lets a particle animate through `texx × texy` sub-images. |
| `<lit>`           | Optional `0`/`1`. If 1, particles receive scene lighting; if 0, fullbright. Default 1. |
| `<data>`          | Per-channel curve parameters — see §3.                                |

---

## 2. Per-channel structure

`_PSInitFromString` reads the `<data>` string into 9 channels in this
fixed order:

```c
PARTICLE_SYSTEM_ENTRY *entries[] = {
    &ps.m_Red, &ps.m_Green, &ps.m_Blue, &ps.m_Alpha,
    &ps.m_Size, &ps.m_Angle, &ps.m_Gravity, &ps.m_Viscosity,
    &ps.m_Frame
};
```

| Index | Channel    | What it controls                                                |
|------:|------------|------------------------------------------------------------------|
| 0     | Red        | Per-particle red colour multiplier `[0, 1]`.                      |
| 1     | Green      | Per-particle green colour multiplier.                             |
| 2     | Blue       | Per-particle blue colour multiplier.                              |
| 3     | Alpha      | Per-particle opacity `[0, 1]`.                                    |
| 4     | Size       | Particle size in world units (usually centimetres).               |
| 5     | Angle      | Sprite rotation around the camera axis (radians).                 |
| 6     | Gravity    | Vertical (Y-axis) acceleration acting on particles.               |
| 7     | Viscosity  | Velocity damping (drag) coefficient.                              |
| 8     | Frame      | Sub-frame index into the texture atlas (cycles `texx × texy`).    |

Each channel is a `PARTICLE_SYSTEM_ENTRY` of **6 floats**.

---

## 3. `PARTICLE_SYSTEM_ENTRY` (6 floats per channel)

For each channel, the engine reads:

| Float index | Field              | Meaning                                              |
|------------:|--------------------|------------------------------------------------------|
| 0           | `m_fValAverage`    | Initial value at spawn — mean.                       |
| 1           | `m_fValDisp`       | Initial value at spawn — dispersion (± random).       |
| 2           | `m_fValSpeedAverage` | First derivative — mean rate of change per second.  |
| 3           | `m_fValSpeedDisp`    | First derivative — dispersion.                       |
| 4           | `m_fValAccelAverage` | Second derivative — mean rate of change of speed.   |
| 5           | `m_fValAccelDisp`    | Second derivative — dispersion.                      |

Per-particle effective value at age `t`:

```
v(t)  = vInit  +  speedInit * t  + 0.5 * accelInit * t²

where
    vInit     = m_fValAverage      + uniform(-m_fValDisp,      +m_fValDisp)
    speedInit = m_fValSpeedAverage + uniform(-m_fValSpeedDisp, +m_fValSpeedDisp)
    accelInit = m_fValAccelAverage + uniform(-m_fValAccelDisp, +m_fValAccelDisp)
```

So each channel is a **stochastic quadratic** in time, sampled
independently per particle at spawn.

---

## 4. Worked example — torch (`torch.xml`)

The `<data>` block (semicolons added for readability, 9 channels × 6
floats = 54 floats):

```
1.00;0.00;0.00;0.00;0.00;0.00;     // Red:     const 1.0
1.00;0.00;0.00;0.00;0.00;0.00;     // Green:   const 1.0
1.00;0.00;0.00;0.00;0.00;0.00;     // Blue:    const 1.0
0.00;0.00;1.00;0.00;-1.00;0.00;    // Alpha:   starts at 0, fades in (+1 / s), then back out (-1 / s²)
30.00;0.00;70.00;0.00;0.00;0.00;   // Size:    starts at 30, grows at +70 / s
0.00;0.00;3.14;0.00;2.00;0.00;     // Angle:   starts at 0, rotates +π rad / s, accelerating
2.00;300.00;0.00;0.00;0.00;0.00;   // Gravity: starts at 2 ± 300 (huge dispersion — random upward jets)
0.00;0.00;0.00;0.00;0.00;0.00;     // Viscosity: 0
0.00;2.00;2.00;0.00;0.00;0.00;     // Frame:   starts at 0 ± 2, cycles +2 / s through the 2×2 atlas
```

Visual result: a flickering, slowly rotating, expanding fire sprite
that fades out. Particles get random initial heights from the Gravity
dispersion (`±300`), producing the visible "flames" effect.

---

## 5. Spawning model

`CActorScripted::ParticleSystem` owns a pool of `m_ulMaxParticles`
slots. Each frame the actor's task can `EmitParticle(pos, vel)` via
a host call (see [script_api.md](script_api.md)); the system picks the
oldest slot, generates fresh `vInit / speedInit / accelInit` from the
channel curves, and starts rendering it as a quad billboard sampling
the sprite atlas at index `floor(Frame.value) % (texx * texy)`.

Lifetime is bounded by `<lifetime>`; when a particle ages past that
value its slot is freed.

---

## 6. Rendering

Particle rendering uses one of the billboard render techniques (see
[render_techniques.md](render_techniques.md), `CGeometryParticleSystem`).
The shader samples the texture using
`(u + frame_col / texx, v + frame_row / texy, u + 1/texx, v + 1/texy)`
so the same atlas can hold up to `texx × texy` sub-frames in a single
draw call.

Particles are blended additively when `m_bLit == false` and
modulatively (alpha-blended) when `m_bLit == true`. The choice is
made at scene-render time; the channel data does not control it.

---

## 7. Cross-references

- Container XML: [`formats/actor_xml.md`](formats/actor_xml.md) §3.6.
- Atlas texture format: [`formats/tex.md`](formats/tex.md).
- Rendering technique: [render_techniques.md](render_techniques.md).
- Host-side particle-emitter API (script calls):
  [script_api.md](script_api.md).
