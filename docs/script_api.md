# Script API Reference

Complete API reference for functions available to Pathologic scripts.
Reverse-engineered from Game.exe (alpha/bin/Final/).

Functions are called via `Func` and `ObjFunc` opcodes. **Latent** functions suspend
the script until completion (VM yields each frame).

## Dispatch Chain

```
Func opcode → IScriptContext::GetFunction(name, paramCount)
  1. CActorScriptContext     (11 entries)
  2. CCPPlayer::CScriptContext (32 entries)
  3. CStdScriptContext        (141 entries)

ObjFunc opcode → IScriptClass::ExecuteFunction(name, args)
  → object's m_ClassTable lookup
```

Overloads: same name, different `paramCount` → different function.

---

## 1. CStdScriptContext — Global Functions (141 entries)

Available to **all** scripts.

### Debug

| Function | Params | Description |
|----------|--------|-------------|
| `bpt()` | 0 | Breakpoint |
| `self(out object)` | 1 | Script owner object |
| `Trace(string)` | 1 | Console message |
| `Console_Error(string)` | 1 | Console error |

### Random

| Function | Params | Description |
|----------|--------|-------------|
| `rand(out float)` | 1 | Random [0, 1) |
| `rand(out float, float max)` | 2 | Random [0, max) |
| `rand(out float, float min, float max)` | 3 | Random [min, max) |
| `RandVec2D(out vector, float radius)` | 2 | Random 2D vector in circle |
| `RandVec3D(out vector)` | 1 | Random 3D unit vector |
| `RandVecCone3D(out vector, vector dir, float angle)` | 3 | Random vector in cone |
| `irand(out int, int max)` | 2 | Random integer [0, \|max\|) |

### Flow Control

| Function | Params | Description |
|----------|--------|-------------|
| `sync()` | 0 | **Latent.** Sync point |
| `sync(object)` | 1 | **Latent.** Sync with target |
| `Sleep(float secs)` | 1 | **Latent.** Pause (real seconds) |
| `Sleep(float secs, float)` | 2 | **Latent.** Pause with param |
| `GameSleep(float gameSecs)` | 1 | **Latent.** Pause (game seconds) |
| `GameSleep(float, float)` | 2 | **Latent.** Game sleep with param |
| `Hold()` | 0 | **Latent.** Hold until released |
| `Hold(object)` | 1 | **Latent.** Hold with object |
| `StopGroup0()` | 0 | Stop group 0 tasks |

### Timers & Events

| Function | Params | Description |
|----------|--------|-------------|
| `SetTimer(int id, float interval)` | 2 | Create/update repeating timer |
| `KillTimer(int id)` | 1 | Kill timer |
| `KillTimer(int id, out bool)` | 2 | Kill timer, return success |
| `SetTimeEvent(int id, float gameTime)` | 2 | One-shot event at game time |
| `ReleaseTimeEvent(int id)` | 1 | Cancel time event |
| `GetGameTime(out float)` | 1 | Current game time |
| `GetGameTimeScale(out float)` | 1 | Game time scale |
| `AdvanceGameTime(float dt)` | 1 | Advance game time |

### Global Variables

| Function | Params | Description |
|----------|--------|-------------|
| `SetVariable(string name, int value)` | 2 | Set global variable |
| `GetVariable(string name, out int)` | 2 | Get global variable |

### Camera

| Function | Params | Description |
|----------|--------|-------------|
| `LockCamera()` | 0 | Lock camera control |
| `UnlockCamera()` | 0 | Unlock camera |
| `CameraPlay(string motion)` | 1 | Play camera motion |
| `CameraPlay(string, bool wide)` | 2 | With widescreen mode |
| `CameraPlayRel(string)` | 1 | Relative camera motion |
| `CameraPlayRel(string, bool)` | 2 | With relative flag |
| `CameraTransit(vector, vector)` | 2 | Smooth camera transition |
| `CameraSwitchToNormal()` | 0 | Return to normal camera |
| `CameraWaitForPlayFinish()` | 0 | **Latent.** Wait for motion end |
| `GetCameraCurrentFOV(out float)` | 1 | Current camera FOV |
| `GetCameraFarDistance(out float)` | 1 | Camera far distance |

### Actors & Scenes

| Function | Params | Description |
|----------|--------|-------------|
| `IsPlayerActor(object, out bool)` | 2 | Check if actor is player |
| `FindActor(out object, string name)` | 2 | Find actor by name |
| `AddActor(out, scene, name, script)` | 4 | Create actor in scene |
| `AddActor(out, scene, name, script, vector)` | 5 | With position |
| `AddActor(out, scene, name, script, vector, vector)` | 6 | With position + direction |
| `AddActorByType(out, scene, name, script)` | 4 | Create actor by type |
| `AddActorByType(out, scene, name, script, vector)` | 5 | With position |
| `AddActorByType(out, scene, name, script, vector, vector)` | 6 | With direction |
| `AddScriptedActor(out, scene, name, script, type)` | 5 | Scripted actor |
| `AddScriptedActor(out, scene, name, script, type, vector)` | 6 | With position |
| `AddScriptedActorByType(out, scene, name, script, type)` | 5 | By type |
| `AddScriptedActorByType(out, scene, name, script, type, vector)` | 6 | With position |
| `AddBlankActor(out, scene, name, script)` | 4 | Blank actor |
| `AddBlankActorFromXml(out, scene, name, script)` | 4 | From XML |
| `AddItemActor(out, scene, name, script, type, vector)` | 6 | Item actor |
| `RemoveActor(object)` | 1 | Remove actor |
| `GetActiveScene(out object)` | 1 | Current active scene |
| `GetSceneByName(out object, string)` | 2 | Scene by name |
| `GetMainOutdoorScene(out object)` | 1 | Main outdoor scene |
| `Teleport(object, object scene, vector, vector)` | 4 | Teleport actor |
| `ReplaceScene(out object, string)` | 2 | Replace scene |

### Sound & Music

| Function | Params | Description |
|----------|--------|-------------|
| `PlayGlobalMusic(string)` | 1 | Play global music |
| `IsExistingSound(out bool, string)` | 2 | Check sound exists |
| `PlaySound(string)` | 1 | Play sound |
| `PlaySound(string, float vol)` | 2 | With volume |
| `PlaySound(string, float, float pitch)` | 3 | With volume + pitch |
| `PlaySharedSound(string)` | 1 | Shared sound |
| `PlaySharedSound(string, float)` | 2 | With volume |
| `PlayNSSound(string)` | 1 | Non-spatial sound |
| `PlayNSSound(string, float)` | 2 | With volume |
| `WaitForSoundToLoad(string)` | 1 | **Latent.** Wait for sound load |
| `PlayMovie(string)` | 1 | Play video |

### UI & Dialogs

| Function | Params | Description |
|----------|--------|-------------|
| `ShowMessage()` | 0 | Show message |
| `ShowMessage(string)` | 1 | Show message with text |
| `ShowMap(object)` | 1 | Show map |
| `ShowDiary()` | 0 | Open diary |
| `ShowDiary(object)` | 1 | Diary at entry |
| `ShowPlayerStats()` | 0 | Player stats |
| `ShowWindow(string, string)` | 2 | Show window |
| `ShowWindow(string, string, object)` | 3 | With object |
| `ShowWindow(string, string, object, object)` | 4 | With two objects |
| `RegisterKeyCallback(string)` | 1 | Register key callback |
| `UnregisterKeyCallback(string)` | 1 | Unregister key callback |
| `GetVirtualKeyCode(out int, string)` | 2 | Virtual key code |

### Inventory

| Function | Params | Description |
|----------|--------|-------------|
| `GetInvItemByName(out object, string)` | 2 | Find item by name |
| `HasInvItemProperty(out bool, object, string)` | 3 | Item has property? |
| `GetInvItemProperty(out var, object, string)` | 3 | Item property value |
| `GetInvItemSprite(out string, object)` | 2 | Item sprite |
| `GetInvItemSprite2(out string, object)` | 2 | Item sprite 2 |
| `GetInvItemName(out string, object)` | 2 | Item name |
| `GetInvItemMaxStackSize(out int, object)` | 2 | Max stack size |
| `CreateInvItem(out object)` | 1 | Create new item |

### Collections

| Function | Params | Description |
|----------|--------|-------------|
| `CreateBoolVector(out object)` | 1 | Create bool vector |
| `CreateIntVector(out object)` | 1 | Create int vector |
| `CreateFloatVector(out object)` | 1 | Create float vector |
| `CreateStringVector(out object)` | 1 | Create string vector |
| `CreateVectorVector(out object)` | 1 | Create vector vector |
| `CreateObjectVector(out object)` | 1 | Create object vector |
| `CreateIntSet(out object)` | 1 | Create int set |
| `CreateFloatSet(out object)` | 1 | Create float set |
| `CreateStringSet(out object)` | 1 | Create string set |
| `CreateObjectSet(out object)` | 1 | Create object set |

### Strings

| Function | Params | Description |
|----------|--------|-------------|
| `_strchr(out int, string, string)` | 3 | Find char position |
| `_strsub(out string, string, int)` | 3 | Substring from position |
| `_strsub(out string, string, int, int)` | 4 | Substring with length |
| `_strupr(string)` | 1 | Uppercase |
| `_strlwr(string)` | 1 | Lowercase |
| `_strtoi(out int, string)` | 2 | String to int |
| `GetStringByID(out string, string)` | 2 | String from database |

### Messages & Diary

| Function | Params | Description |
|----------|--------|-------------|
| `GetMessageCount(out int)` | 1 | Message count |
| `GetMessage(out, out, out, int)` | 4 | Get message by index |
| `AddMessage(string, string)` | 2 | Add message |
| `AddMessage(string, string, string)` | 3 | With icon |
| `CreateDiaryEntry(out, string, string, int)` | 4 | Create diary entry |
| `GetDiaryRoot(out object)` | 1 | Diary root |
| `SetDiarySection(string)` | 1 | Set diary section |
| `GetDiarySection(out string)` | 1 | Get diary section |

### Game Actions

| Function | Params | Description |
|----------|--------|-------------|
| `BroadcastPlayerDamage(object, float, int)` | 3 | Broadcast player damage |
| `BroadcastSteal(object, float)` | 2 | Broadcast steal |
| `BroadcastMessage(string, float, float)` | 3 | Broadcast message |
| `RequestClearPath(object)` | 1 | Request clear path |
| `GetPlayerSelectedObject(out object)` | 1 | Player selected object |
| `IsOverrideActive(out bool)` | 1 | Override active? |
| `SimulateAttack(object, float)` | 2 | Simulate attack |
| `ReportHit(obj, obj, float, float, vector)` | 5 | Report hit |
| `SignalDeath(object)` | 1 | Signal death |
| `ActivateSleepMode(bool)` | 1 | Activate sleep mode |
| `ModBlurLevel(float)` | 1 | Blur level |
| `ModDarkenLevel(float)` | 1 | Darken level |

### Dialog System

| Function | Params | Description |
|----------|--------|-------------|
| `GetReplic(out string)` | 1 | Current reply |
| `GetAnswerCount(out int)` | 1 | Answer count |
| `GetAnswer(out, out, int)` | 3 | Answer by index |
| `SelectAnswer(int, out bool)` | 2 | Select answer |
| `GetConversation(out object)` | 1 | Current conversation |
| `NewGame(string, string)` | 2 | Start new game |

---

## 2. CActorScriptContext — Actor Context (11 entries)

Available to scripts running in an actor context.

| Function | Params | Description |
|----------|--------|-------------|
| `RayTrace(out, vector, vector, out float)` | 4-7 | Ray trace |
| `Intersect(out, vector, vector)` | 3-4 | Geometry intersection |
| `GetGroundMaterial(out string, vector)` | 2 | Ground material at point |
| `IsLoaded(out bool)` | 1 | Actor loaded? |
| `ReportReputationChange(object, float, string)` | 3 | Reputation change |
| `StopWorld()` | 0 | Stop world |
| `ResumeWorld()` | 0 | Resume world |

---

## 3. CCPPlayer::CScriptContext — Player Context (32 entries)

### Animations

| Function | Params | Description |
|----------|--------|-------------|
| `HasAnimation(out bool, string)` | 2 | Has animation? |
| `PlayAnimation(string)` | 1 | Play animation |
| `LockAnimationEnd(string)` | 1 | Lock on last frame |
| `WaitForAnimEnd()` | 0 | **Latent.** Wait for anim end |
| `StopAnimation()` | 0 | Stop animation |

### Weapons & Items

| Function | Params | Description |
|----------|--------|-------------|
| `GetCurrentWeapon(out object)` | 1 | Current weapon |
| `RemoveCurrentWeapon()` | 0 | Remove weapon |
| `SelectAnyItemByID(out bool, string, string)` | 3 | Select item by ID |
| `SetWeaponHolster(bool)` | 1 | Holster weapon |
| `IsWeaponHolstered(out bool)` | 1 | Weapon holstered? |
| `GetWeaponItem(out object)` | 1 | Weapon item |
| `GetWeaponProperty(out, string, string)` | 3 | Weapon property |
| `SetWeaponProperty(string, string, var)` | 3 | Set weapon property |
| `SetHandsItem(string)` | 1 | Hands item |

### Combat

| Function | Params | Description |
|----------|--------|-------------|
| `GetVictim(out object)` | 1 | Attack victim |
| `GetVictim(out object, out int)` | 2 | With type |
| `GetVictimMaterial(out, out, out)` | 3-4 | Victim material |
| `GetTouchDistance(out float)` | 1 | Touch distance |
| `ReportAttack(float)` | 1 | Report attack |
| `ReportHit(object, float, float, vector)` | 4 | Report hit |
| `IsShooting(out bool)` | 1 | Shooting? |
| `IsAltShooting(out bool)` | 1 | Alt shooting? |
| `SetAttackState(int)` | 1 | Attack state |

---

## 4. CActorBiped — Bipedal Actor / NPC (45 entries)

### Movement

| Function | Params | Description |
|----------|--------|-------------|
| `Stop()` | 0 | Stop all actions |
| `MovePoint(vector)` | 1 | **Latent.** Walk to point |
| `MovePoint(vector, int mode)` | 2 | **Latent.** 0=walk, 1=run |
| `MovePoint(vector, int, out)` | 3 | **Latent.** With result |
| `MoveDir(float, float, int)` | 3 | **Latent.** Move in direction |
| `Rotate(float, float)` | 2 | **Latent.** Rotate to direction |
| `Face(object)` | 1 | Face actor |
| `IsInWalkMode(out bool)` | 1 | Walk mode? |
| `SwitchToWalk()` | 0 | Switch to walk |
| `SwitchToRun()` | 0 | Switch to run |
| `FollowPath(object, bool)` | 2 | **Latent.** Follow path |
| `FollowPath(object, bool, out)` | 3 | **Latent.** With result |
| `FollowPath(object, bool, out, string)` | 4 | With walk anim prefix |
| `FollowPath(object, bool, out, string, string)` | 5 | With walk + run prefix |
| `RotatePath(object)` | 1 | Rotate along path |
| `RotatePath(object, out)` | 2 | With result |

### Animations

| Function | Params | Description |
|----------|--------|-------------|
| `StopAnimation()` | 0 | Stop animation |
| `StopSecondaryAnimation()` | 0 | Stop secondary anim |
| `PlayAnimation(string, int track)` | 2 | Play on track |
| `PlaySecondaryAnimation(string, int)` | 2 | Secondary anim |
| `LockAnimationEnd(string, int)` | 2 | Lock last frame |
| `IsAnimationPlaying(out bool)` | 1 | Animation playing? |
| `WaitForAnimEnd()` | 0 | **Latent.** Wait for end |

### Dialogs & Trade

| Function | Params | Description |
|----------|--------|-------------|
| `DoDialog(object conversation)` | 1 | Start dialog |
| `CreateDialog(object)` | 1 | Create dialog |
| `StopDialog(object)` | 1 | Stop dialog |
| `DoTrade()` | 0 | Open trade |
| `StopTrade()` | 0 | Close trade |

---

## 5. CActorAnimBone — Bone Actor (31 entries)

Inherits Biped functions. Adds pathfinding, sensing, combat.

| Function | Params | Description |
|----------|--------|-------------|
| `SetDirection(vector)` | 1 | Set direction |
| `Speak(string)` | 1 | Speak line |
| `FindPathTo(out object, vector)` | 2 | Find path to point |
| `GetRandomPFPoint(out vector)` | 1 | Random pathfinding point |
| `GetRandomPFPointInCircle(out, vector, float, float)` | 4 | In circle |
| `SetSpeed(float)` | 1 | Set speed |
| `SetHearThreshold(float)` | 1 | Hearing threshold |
| `SetSeeThreshold(float)` | 1 | Sight threshold |
| `SetSeeFOV(float)` | 1 | Sight FOV |
| `SetAttackState(int)` | 1 | Attack state |
| `SetDeathState()` | 0 | Death state |
| `SetDeathStateAndRemove()` | 0 | Death + remove |
| `ResetAAS()` | 0 | Reset AAS |
| `SensePlayerOnly(bool)` | 1 | Sense player only |

---

## 6. CActorFog — Fog NPC (37 entries)

Main NPC type with AI and movement.

| Function | Params | Description |
|----------|--------|-------------|
| `PutOnGrid()` | 0 | Place on nav grid |
| `PutOnGrid(bool)` | 1 | With snap flag |
| `GetRandomPFPoint(out vector)` | 1 | Random PF point |
| `FindPathTo(out object, vector)` | 2 | Find path |
| `MovePoint(vector, int)` | 2 | **Latent.** Move to point |
| `Stop()` | 0 | Stop movement |
| `FollowPath(object, bool)` | 2 | **Latent.** Follow path |
| `FogLinear(float start, float end)` | 2 | Linear fog |
| `SetVisirVisibility(bool)` | 1 | Visor visibility |
| `GetForce(out float)` | 1 | Get force |
| `SetForce(float)` | 1 | Set force |
| `GetSpeed(out float)` | 1 | Get speed |
| `SetSpeed(float)` | 1 | Set speed |
| `SwitchFlashlight(bool)` | 1 | Flashlight |
| `SwitchVisir(bool)` | 1 | Visor |
| `GetScene(out object)` | 1 | Actor's scene |

---

## 7. CGameWeather — Weather (8 entries)

| Function | Params | Description |
|----------|--------|-------------|
| `ChangeWeather(18 params)` | 18 | **Latent.** Smooth weather transition |
| `ForceWeather(17 params)` | 17 | Instant weather change |
| `Bright()` | 0 | Clear modifier |
| `Rain()` | 0 | Rain modifier |
| `ModNothing()` | 0 | Remove modifier |
| `ModLinear(float, float)` | 2 | Linear modifier interpolation |
| `GetModifierLevel(out float)` | 1 | Current modifier level |
| `GetGameTime(out float)` | 1 | Weather game time |

---

## 8. CGameMusic — Music (20 entries)

| Function | Params | Description |
|----------|--------|-------------|
| `PlayMusic1(string)` | 1 | Play on channel 1 |
| `PlayMusic2(string)` | 1 | Play on channel 2 |
| `StopMusic1()` | 0 | Stop channel 1 |
| `StopMusic2()` | 0 | Stop channel 2 |
| `FadeMusic1()` / `FadeMusic1(float)` | 0-1 | Fade channel 1 |
| `FadeMusic2()` / `FadeMusic2(float)` | 0-1 | Fade channel 2 |
| `IsPlayingMusic1(out bool)` | 1 | Channel 1 playing? |
| `IsPlayingMusic2(out bool)` | 1 | Channel 2 playing? |
| `GetRegionMusic(out string)` | 1 | Region music |
| `AdvanceRegionMusic()` | 0 | Next region track |
| `IsExistingMusic(out bool, string)` | 2 | Music file exists? |
| `WaitForMusicEnd1()` | 0 | **Latent.** Wait music 1 |
| `WaitForMusicEnd2()` | 0 | **Latent.** Wait music 2 |

---

## 9. ObjFunc — Object Methods

Called via `ObjFunc` opcode on a specific object.

### CPropertyScriptClass — Properties (base class)

| Method | Params | Description |
|--------|--------|-------------|
| `HasProperty(out bool, string)` | 2 | Has property? |
| `GetProperty(out var, string)` | 2 | Get property |
| `SetProperty(string, var)` | 2 | Set property |
| `RemoveProperty(string)` | 1 | Remove property |

### CConversation — Dialog

| Method | Params | Description |
|--------|--------|-------------|
| `SetReturnValue(var)` | 1 | Set return value |
| `GetReturnValue(out var)` | 1 | Get return value |
| `SetMessage(string)` | 1 | Set reply text |
| `ClearReplies()` | 0 | Clear reply options |
| `AddReply(string, ...)` | 1+ | Add reply option |
| `SetPhoto(string)` | 1 | NPC photo |
| `SetNPCName(string)` | 1 | NPC name |
| `SetPlayerName(string)` | 1 | Player name in dialog |
| `IsFinished(out bool)` | 1 | Dialog finished? |
| `IsDialogEnd(out bool)` | 1 | Dialog end? |

### CDiaryEntry — Diary Entry

| Method | Params | Description |
|--------|--------|-------------|
| `Remove()` | 0 | Remove entry |
| `GetCategory(out int)` | 1 | Category |
| `GetTextID(out string)` | 1 | Text ID |
| `SetTextID(string)` | 1 | Set text ID |
| `ChildCount(out int)` | 1 | Child count |
| `Child(out object, int)` | 2 | Child by index |
| `AddChild(out object, string)` | 2 | Add child |
| `Find(out object, string)` | 2 | Find by ID |

### CContainerScriptClass — Container (30 entries)

| Method | Params | Description |
|--------|--------|-------------|
| `GetItemCount(out int)` | 1 | Item count |
| `GetItemCount(out int, int sub)` | 2 | In sub-container |
| `GetItemCountOfType(out int, string)` | 2 | By type |
| `AddItem(object, int sub, int amount)` | 3 | Add item |
| `RemoveItem(int idx)` | 1 | Remove by index |
| `RemoveItemByType(string, int)` | 2 | Remove by type |
| `RemoveAllItems()` | 0 | Remove all |
| `GetItem(out object, int idx)` | 2 | Item by index |
| `GetItemPosByID(out int, string, int)` | 3 | Position by ID |
| `GetItemAmount(out int, int idx)` | 2 | Item amount |
| `SetItem(object, int, int)` | 3 | Set item |
| `SelectItem(int, int)` | 2 | Select item |
| `GetCapacity(out int)` | 1 | Container capacity |
| `Barter(object partner)` | 1 | Barter |
| `WorkWithCorpse(object)` | 1 | Work with corpse |

### CActorScripted — Scripted Actor

| Method | Params | Description |
|--------|--------|-------------|
| `SetPosition(vector)` | 1 | Set position |
| `GetPosition(out vector)` | 1 | Get position |
| `GetPFPosition(out vector)` | 1 | PF position |
| `IsDead(out bool)` | 1 | Is dead? |
| `SetDeathStateAndRemove()` | 0 | Death + remove |
| `Attach(object parent)` | 1 | Attach to parent |
| `Detach()` | 0 | Detach |
| `PlaceOnGround()` | 0 | Place on ground |
| `FindGeometry(out object, string)` | 2 | Find geometry |
| `FindParticleSystem(out object, string)` | 2 | Find particle system |

### CActorDoor — Door

| Method | Params | Description |
|--------|--------|-------------|
| `Open(float speed)` | 1 | Open door |
| `Close()` | 0 | Close door |
| `IsMoving(out bool)` | 1 | Door moving? |
| `ClassifyActor(out int, object)` | 2 | Classify actor vs door |

### CActorLight — Light

| Method | Params | Description |
|--------|--------|-------------|
| `IsOn(out bool)` | 1 | Light on? |
| `Switch(bool)` | 1 | Toggle light |
| `SetColor(vector)` | 1 | Set color |
| `GetColor(out vector)` | 1 | Get color |

### CActorStatic — Static Actor

| Method | Params | Description |
|--------|--------|-------------|
| `GetActorName(out string)` | 1 | Actor name |
| `SetVisibility(bool)` | 1 | Visibility |
| `GetPosition(out vector)` | 1 | Position |
| `SetUsable(bool)` | 1 | Interactivity |
| `EnableSubset(string, bool)` | 2 | Enable subset |

### CActorPlayer — Player Object

| Method | Params | Description |
|--------|--------|-------------|
| `GetPosition(out vector)` | 1 | Player position |
| `GetDirection(out vector)` | 1 | Look direction |
| `HasItem(out bool, object)` | 2 | Has item? |
| `IsOnGround(out bool)` | 1 | On ground? |
| `IsDead(out bool)` | 1 | Dead? |
| `IsAttacking(out bool)` | 1 | Attacking? |
| `IsWalking(out bool)` | 1 | Walking? |

### CGameSceneOutdoor — Outdoor Scene

| Method | Params | Description |
|--------|--------|-------------|
| `GetRegionCount(out int)` | 1 | Region count |
| `GetCurrentRegion(out int)` | 1 | Current region |
| `GetRegionByPt(out int, vector)` | 2 | Region by point |
| `RemoveStationaryActor(object)` | 1 | Remove stationary actor |
| `RemoveAllRegionActors(int)` | 1 | Remove all region actors |
| `GetMap(out object)` | 1 | Scene map |

### CWorldMap — World Map

| Method | Params | Description |
|--------|--------|-------------|
| `GetMarkCount(out int)` | 1 | Mark count |
| `GetMark(out object, int)` | 2 | Mark by index |
| `GetSize(out vector)` | 1 | Map size |
| `ConvertToMapCoordinates(out, vector)` | 2 | World → map |
| `ConvertToWorldCoordinates(out, vector)` | 2 | Map → world |
| `AddMark(out, string, vector, int, float)` | 5 | Add mark |
| `FindMark(out object, string)` | 2 | Find mark |
| `ClearMarks()` | 0 | Clear marks |

### CScriptSet — Collections

| Method | Params | Description |
|--------|--------|-------------|
| `Add(var)` | 1 | Add element |
| `Size(out int)` | 1 | Size |
| `Clear()` | 0 | Clear |
| `IsInCollection(out bool, var)` | 2 | Contains? |
| `Erase(var)` | 1 | Remove element |
| `Iterator(out object)` | 1 | Get iterator |

### CScriptObjectArray — Array Iterator

| Method | Params | Description |
|--------|--------|-------------|
| `Restart()` | 0 | Restart iterator |
| `Next(out var)` | 1 | Next element |
