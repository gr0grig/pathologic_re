# AI Tasks and Motion Controllers

How NPC behaviour is structured at the C++ level. Three layers cooperate:

1. **TAB** (Task Animation Bone) — per-channel **animation-driven**
   primitive tasks. "Walk forward", "rotate to face", "play a lookAt
   anim". Each TAB runs the matching animation track on the actor's
   bone rig (see [animation.md](animation.md)).
2. **CAB** (Composite Animation Behaviour) — higher-level **task
   container** that sequences TABs into multi-step actions.
   "Approach the player, then attack" is a CAB.
3. **APMotion** — utility classes for **smooth interpolation** of
   actor pose values between two TABs (so transitions don't snap).

This is the engine's actor-side scheduler; it is independent of (and
runs on top of) the script-side `task` mechanism documented in
[tasks.md](tasks.md). Scripts drive AI by `RunTask`-ing the right TAB
or CAB classes.

---

## 1. Source layout

All under `SRC/PlagueCity/Game/Game/`:

```
IBaseTask.h           — common abstract interface
ITask.h               — extended task interface
ITaskScripted.h       — script-bindable task base
ICABTask.h            — CAB-specific interface
IAPMotion.h           — motion-interpolation interface

TABBase.{cpp,h}       — TAB factory and base type
TAB*.{cpp,h}          — 13 concrete TAB classes (see §2)

CABBase.{cpp,h}       — CAB base, sequencer
CABTasked.{cpp,h}     — script-driven CAB

APMotionBase.{cpp,h}        — abstract motion interpolator
APMotionInterpolate.{cpp,h}  — value-blend implementation
APMotionPlay.{cpp,h}         — playback driver

TaskBase.{cpp,h}      — generic task base (for non-AI tasks too)
TaskScripted.{cpp,h}  — task hosting a script context
```

---

## 2. TAB catalogue

`CTABBase` (`TABBase.h:19`) declares the factory's class list — exactly
**13 concrete TABs**:

| Class                          | What it does                                                         |
|--------------------------------|----------------------------------------------------------------------|
| `CTABFace`                     | Turn the head to face a target. Runs LookAt over the face bone subset. |
| `CTABFadeAnimation`            | Blend one animation **out** while a successor blends in.             |
| `CTABFollowPath`               | Walk along a `CScenePath` (a sequence of waypoints). Uses navmesh.   |
| `CTABInterpolateAnimation`     | Smoothly interpolate from current pose to a target animation pose.   |
| `CTABLockAnimation`            | Hold a single keyframe pose (freeze on a specific anim frame).        |
| `CTABMoveDir`                  | Move in a given direction at a given speed.                          |
| `CTABMoveLine`                 | Move in a straight line to a target world position.                  |
| `CTABPlayAnimation`            | Play one named animation track to completion.                        |
| `CTABPlayLook`                 | Play a "look at" pose (procedural — uses bone IK, not a baked anim). |
| `CTABPlayLookLSH`              | Same as `CTABPlayLook` but drives the LSHead facial rig.             |
| `CTABPlayLookRel`              | "Look at" with the target specified relative to the actor's local frame. |
| `CTABPlayWalk`                 | Walk-loop animation gated by movement speed (avoids feet-sliding).   |
| `CTABRotate`                   | Rotate in place toward a heading.                                    |

All inherit `IBaseTask`. The factory (`CTABBase::TTABFactory`) is
constructed from this type list (`TYPELIST_13(...)`) — a compile-time
type-erased registration so the script side can construct any TAB by
factory ID without manual switch tables.

### 2.1 Common TAB API

Each TAB exposes:

- `Update(dt)` — called every game tick to advance state.
- `IsFinished()` — when this TAB has reached its goal.
- A constructor taking the parameters specific to its job
  (target position, animation name, speed, …).
- `SaveObject` / load-state constructor (so a save mid-walk resumes
  correctly — see [save_format.md](save_format.md)).

---

## 3. CAB — composite behaviours

`CCABBase` (`CABBase.cpp`) is a queue of TABs (or sub-CABs) executed
in order. A CAB exposes:

- `AddTask(IBaseTask *)` — append a step.
- `Cancel()` — abort the current step and stop.
- `Update(dt)` — advances the head of the queue; pops it when
  finished and starts the next.

`CCABTasked` (`CABTasked.cpp`) is the script-bindable subclass: it
holds an `IScriptContext` and emits `OnComplete` / `OnCancelled`
events back to the script when each step finishes or the whole CAB
finishes.

Typical NPC behaviour:

```
ApproachAndKill(target):
    CAB:
        TABFollowPath(path to target, speed=walk)
        TABMoveLine(within attack range, speed=run)
        TABRotate(face target)
        TABPlayAnimation("attack_a")
        TABPlayAnimation("idle")
```

The script `RunTask`s the CAB and waits for an `OnComplete` event.

---

## 4. APMotion — smooth interpolation

When transitioning between two TABs that both touch the same bone or
pose value, a hard cut looks bad. `APMotion*` classes implement
**per-channel ease-in/ease-out** blending:

| Class                       | Role                                                  |
|-----------------------------|-------------------------------------------------------|
| `CAPMotionBase`             | Abstract; defines `Start`, `Update(dt)`, `IsDone`.    |
| `CAPMotionInterpolate`      | Linear or smoothstep interpolation between two values.|
| `CAPMotionPlay`             | Time-driven motion (advance a curve at a fixed rate). |

Used both inside TABs (e.g. `CTABInterpolateAnimation` uses
`CAPMotionInterpolate` for its bone-pose blend) and stand-alone by
scripts that want to smoothly move a non-actor value (camera, fade
overlay).

---

## 5. Pathfinding hookup

`CTABFollowPath` calls into `CPathFinding::FindPath(src, dst, …)`
(see [`formats/pfd.md`](formats/pfd.md)) at start, then walks the
returned `TPath` waypoint-by-waypoint, requesting straight-line
movement (`CTABMoveLine` semantics) between waypoints. The actor's
position is checked each tick against the next waypoint; on arrival,
the index advances.

If a path becomes blocked mid-walk (an `OnClearPath` event), the
follow-path task re-queries the pathfinder for a new route.

---

## 6. Where scripts plug in

Script-side, an actor "owns" zero or more running tasks. The
`taskbase.sci` family (in `Game/script_sources/`) wraps the C++
TAB/CAB API in `task` types the `.sc` source can extend. Typical
pattern:

```c
task TMoveToPlayer : TTaskBase {
    void OnStart(void) {
        @RunCAB(self());                       // create empty CAB
        @CABAdd(@TABFollowPath(playerPath));   // queue follow-path
        @CABAdd(@TABRotate(facePlayer));       // then face player
    }
    void OnComplete(void) {
        // queue exhausted — fire next behaviour
    }
}
```

The exact host-API names are in [script_api.md](script_api.md).

---

## 7. Save-game interactions

Every TAB and CAB implements `SaveObject` /
`(const char *&, ILoadStateData *)`-constructor pairs. The factory
ID (registered through `TFClassList` above) is written first, then
the per-class state. This means:

- A character mid-walk resumes correctly from a saved game.
- A multi-step CAB resumes at the right step.
- An interpolating APMotion resumes mid-blend (current `t` is saved).

---

## 8. Why three layers (TAB / CAB / APMotion)?

Each layer answers one question:

- **TAB**: "What single thing should the actor do now?" — a primitive.
- **CAB**: "In what order should the actor do several things?" — a
  sequence.
- **APMotion**: "How does a numeric value smoothly become another
  numeric value over time?" — a curve.

Keeping them separate means scripts only need to know about CABs,
TABs are reusable building blocks, and APMotions can be reused inside
any TAB or directly by scripts without dragging the animation
infrastructure along.

---

## 9. Cross-references

- Underlying bone animation: [animation.md](animation.md).
- Path-planner backend: [`formats/pfd.md`](formats/pfd.md).
- Script-side task model: [tasks.md](tasks.md).
- Host-call wrappers: [script_api.md](script_api.md).
- Save layout: [save_format.md](save_format.md).
