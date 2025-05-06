GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	all
	shoot_begin
	shot
	shoot_end
	attack_off
	attack_on
	hunt
	@Stop hunt
	attack_begin1
	attack
	light-dynamic
	soldier_fire.xml
	scripted
	richochet.xml
	Material
	SetScriptProperty
	attack_end1
	quest_d11_01
	soldier_attack
	spine
	GetEyesHeight
	in
	fdie
	GetPosition
	bdie
	GetScriptProperty
	Owner
	HasScriptProperty
	GetScriptProperty
	@GetEyesHeight
	head
	fire
	bullet
	phys
	player
	HasProperty
	HasProperty
	health
	armor
	GetProperty
	armor_
	SetProperty
	IsDead
	IsDead
	GetScene
	noaccess
	fhit
	bhit
	hit_react
	2
	add
	size
	get
	blood_dir.xml
	woman
	worker
	butcher
	wasted_girl
	boy
	vaxxabitka
	unosha
	wasted_male
	alkash
	dohodyaga
	vaxxabit
	nudegirl
	morlok
	battle
	branch
	class
	patrol
	sanitar
	soldier
	little_girl
	reputation
	bomber
	hunter
	grabitel
	disease
	dog
	d11q01SoldierAttack
	RemoveStationaryActor
	soldier_death

Import:
	Face (1 args)
	Sleep (2 args)
	StopAsync (0 args)
	KillTimer (1 args)
	StopGroup0 (0 args)
	SetTimer (2 args)
	CanSee (2 args)
	PlayAnimation (2 args)
	WaitForAnimEnd (1 args)
	Speak (1 args)
	LockAnimationEnd (2 args)
	WaitForAnimEnd (0 args)
	Stop (0 args)
	SetAttackState (1 args)
	Sleep (1 args)
	Trace (1 args)
	StopAnimation (0 args)
	ReportAttack (1 args)
	SendPlayerEnemy (2 args)
	GetDirection (1 args)
	GetGeometryLocator (4 args)
	GetScene (1 args)
	AddActorByType (6 args)
	RandVecCone3D (3 args)
	GetVictimMaterial (4 args)
	ReportHit (4 args)
	Hold (0 args)
	IsPlayerActor (2 args)
	UnlookAsync (1 args)
	GetEyesHeight (1 args)
	DirLookAsyncRel (3 args)
	GetPFPosition (1 args)
	irand (2 args)
	FindPathTo (2 args)
	RotatePath (2 args)
	FollowPath (3 args)
	Rotate (3 args)
	SetRTEnvelope (2 args)
	IsOverrideActive (1 args)
	GetPosition (1 args)
	RemoveRTEnvelope (0 args)
	SetDeathState (0 args)
	LookAsync (3 args)
	RemoveEnvelope (0 args)
	StopSecondaryAnimation (0 args)
	FindActor (2 args)
	IsDead (1 args)
	GetSecondaryAnimationType (1 args)
	FadeSecondaryAnimation (4 args)
	CreateVectorVector (1 args)
	RotateAsync (2 args)
	RotateAsync (3 args)
	IsExisting3DSound (2 args)
	Is3DSoundLoaded (2 args)
	PlayGlobalSound (2 args)
	self (1 args)
	CreateObjectSet (1 args)
	CreateFloatVector (1 args)
	SendWorldWndMessage (2 args)
	Trigger (2 args)
	PlayGlobalMusic (1 args)
	BroadcastMessage (3 args)
	GetVariable (2 args)
	WorkWithCorpse (1 args)
	Barter (1 args)
	GetProperty (2 args)
	SignalDeath (1 args)
	ReportReputationChange (4 args)
	ResetAAS (0 args)
	ReportReputationChange (3 args)

RunOp = 0x271
RunTask = 3

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 1
		EVENT_41 Op = 0x20 Vars = (object)
		EVENT_3 Op = 0x29 Vars = (object)
		EVENT_4 Op = 0x32 Vars = (object)
		EVENT_17 Op = 0x3e Vars = (object)
		EVENT_30 Op = 0x52 Vars = (object, object, bool)
		EVENT_1 Op = 0x5f Vars = (object)
		EVENT_7 Op = 0x6d Vars = (int)
	GTASK_1 Vars = (object, bool) Params = 1
		EVENT_17 Op = 0xee Vars = (object)
		EVENT_30 Op = 0x102 Vars = (object, object, bool)
		EVENT_41 Op = 0x116 Vars = (object)
	GTASK_2 Vars = (object, object, bool) Params = 2
		EVENT_3 Op = 0x1af Vars = (object)
		EVENT_1 Op = 0x1bd Vars = (object)
		EVENT_17 Op = 0x24c Vars = (object)
		EVENT_30 Op = 0x264 Vars = (object, object, bool)
	GTASK_3  Params = 0
		EVENT_1 Op = 0x275 Vars = (object)
		EVENT_17 Op = 0x28b Vars = (object)
		EVENT_26 Op = 0x292 Vars = (string)
	GTASK_4 Vars = (object, bool) Params = 1
		EVENT_2 Op = 0x2b1 Vars = (object)
		EVENT_17 Op = 0x2b8 Vars = (object)
		EVENT_26 Op = 0x2bf Vars = (string)
	GTASK_5 Vars = (object) Params = 2
		EVENT_6 Op = 0x32a Vars = ()
		EVENT_2 Op = 0x32d Vars = (object)
		EVENT_17 Op = 0x333 Vars = (object)
		EVENT_26 Op = 0x33a Vars = (string)
	GTASK_6 Vars = (cvector, cvector) Params = 1
		EVENT_3 Op = 0x35e Vars = (object)
		EVENT_17 Op = 0x37c Vars = (object)
		EVENT_30 Op = 0x390 Vars = (object, object, bool)
		EVENT_1 Op = 0x39d Vars = (object)
	GTASK_7  Params = 1
		EVENT_0 Op = 0x41a Vars = (object)
		EVENT_22 Op = 0x499 Vars = (object, int, float, float)
		EVENT_16 Op = 0x49b Vars = (object, string)
		EVENT_41 Op = 0x49d Vars = (object)

Events:
EVENT_22 Op = 0x706 Vars = (object, int, float, float)
EVENT_43 Op = 0x70e Vars = (object, int, float, float, cvector, cvector)
EVENT_16 Op = 0x718 Vars = (object, string)
EVENT_41 Op = 0x725 Vars = (object)

0x0: PushEmpty(bool, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-3]
0x2: @ Face(Stack[-3])
0x3: Pop(0)
0x4: Push((float)0.5)
0x5: @ Sleep(Stack[-1], Stack[-2])
0x6: Pop(1)
0x7: PushEmpty(bool)
0x8: Stack[-1] = (bool) 1
0x9: Pop(0); Push((bool) Stack[-2] == 0)
0xa: IF (Stack[-1] == 0) GOTO 0x12; Pop(1)

0xb: PushEmpty(bool, object)
0xc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd: Call2 0x546

0xe: Pop(1)
0xf: Pop(1); Push((bool) Stack[-1] == 0)
0x10: IF (Stack[-1] == 0) GOTO 0x12; Pop(1)

0x11: Stack[-1] = (bool) 0
0x12: IF (Stack[-1] == 0) GOTO 0x14; Pop(1)

0x13: GOTO 0x15

0x14: GOTO 0x4

0x15: @ StopAsync()
0x16: Pop(0)
0x17: Return(); Pop(2)

0x18: @ StopAsync()
0x19: Pop(0)
0x1a: Push((int) 100)
0x1b: @ KillTimer(Stack[-1])
0x1c: Pop(1)
0x1d: @ StopGroup0()
0x1e: Pop(0)
0x1f: Return(); Pop(0)

0x20: PushEmpty()
0x21: PushEmpty()
0x22: Call2 0x18

0x23: Pop(0)
0x24: PushEmpty(object)
0x25: Stack[-1] = Stack[-2]
0x26: Call2 0x725

0x27: Pop(1)
0x28: Return(); Pop(0)

0x29: PushEmpty()
0x2a: Pop(0); Push((bool) Stack[-1] == Stack[0 + Tasks[-1].StackPointer])
0x2b: IF (Stack[-1] == 0) GOTO 0x31; Pop(1)

0x2c: Push((int) 100)
0x2d: @ KillTimer(Stack[-1])
0x2e: Pop(1)
0x2f: @ Face(Stack[-0])
0x30: Pop(0)
0x31: Return(); Pop(0)

0x32: PushEmpty()
0x33: Pop(0); Push((bool) Stack[-1] == Stack[0 + Tasks[-1].StackPointer])
0x34: IF (Stack[-1] == 0) GOTO 0x3d; Pop(1)

0x35: Push((int) 100)
0x36: Push((float)3.0)
0x37: @ SetTimer(Stack[-2], Stack[-1])
0x38: Pop(2)
0x39: PushEmpty(object)
0x3a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3b: Call2 0x5dc

0x3c: Pop(1)
0x3d: Return(); Pop(0)

0x3e: PushEmpty()
0x3f: PushEmpty(bool, object)
0x40: Stack[-1] = Stack[-3]
0x41: Call2 0x546

0x42: Pop(1)
0x43: Pop(1); Push((bool) Stack[-1] == 0)
0x44: IF (Stack[-1] == 0) GOTO 0x4a; Pop(1)

0x45: PushEmpty(object)
0x46: Stack[-1] = Stack[-2]
0x47: Call2 0x7d1

0x48: Pop(1)
0x49: Return(); Pop(0)

0x4a: PushEmpty()
0x4b: Call2 0x18

0x4c: Pop(0)
0x4d: PushEmpty(object)
0x4e: Stack[-1] = Stack[-2]
0x4f: Call2 0x7e9

0x50: Pop(1)
0x51: Return(); Pop(0)

0x52: PushEmpty()
0x53: PushEmpty(bool, object, object, bool)
0x54: Stack[-3] = Stack[-7]
0x55: Stack[-2] = Stack[-6]
0x56: Stack[-1] = Stack[-5]
0x57: Call2 0x87d

0x58: Pop(3)
0x59: IF (Stack[-1] == 0) GOTO 0x5e; Pop(1)

0x5a: PushEmpty(object)
0x5b: Stack[-1] = Stack[-4]
0x5c: Call2 0x3e

0x5d: Pop(1)
0x5e: Return(); Pop(0)

0x5f: PushEmpty()
0x60: PushEmpty(bool, object)
0x61: Stack[-1] = Stack[-3]
0x62: Call2 0x861

0x63: Pop(1)
0x64: IF (Stack[-1] == 0) GOTO 0x6c; Pop(1)

0x65: PushEmpty()
0x66: Call2 0x18

0x67: Pop(0)
0x68: PushEmpty(object)
0x69: Stack[-1] = Stack[-2]
0x6a: Call2 0x877

0x6b: Pop(1)
0x6c: Return(); Pop(0)

0x6d: PushEmpty()
0x6e: Push((int) 100)
0x6f: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x70: IF (Stack[-1] == 0) GOTO 0x72; Pop(1)

0x71: Return(); Pop(0)

0x72: Push((int) 100)
0x73: @ KillTimer(Stack[-1])
0x74: Pop(1)
0x75: @ StopGroup0()
0x76: Pop(0)
0x77: Return(); Pop(0)

0x78: PushEmpty(bool, int, int, bool, int, int)
0x79: Stack[0 + Tasks[-1].StackPointer] = Stack[-7]
0x7a: PushEmpty(object)
0x7b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x7c: Call2 0x6df

0x7d: Pop(1)
0x7e: @ CanSee(Stack[-1], Stack[-0])
0x7f: Pop(0)
0x80: Push( Stack[1 + Tasks[-1].StackPointer] )
0x81: IF (Stack[-1] == 0) GOTO 0x8f; Pop(1)

0x82: PushEmpty(bool, object)
0x83: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x84: Call2 0x809

0x85: Pop(1)
0x86: IF (Stack[-1] == 0) GOTO 0x8d; Pop(1)

0x87: PushEmpty(object, bool)
0x88: Stack[-2] = Stack[0 + Tasks[-1].StackPointer]
0x89: Stack[-1] = (bool) 1
0x8a: Call2 0x7c6

0x8b: Pop(2)
0x8c: Return(); Pop(6)

0x8d: @ Face(Stack[-0])
0x8e: Pop(0)
0x8f: PushEmpty()
0x90: Call2 0x6e8

0x91: Pop(0)
0x92: Push("all")
0x93: Push("shoot_begin")
0x94: @ PlayAnimation(Stack[-2], Stack[-1])
0x95: Pop(2)
0x96: @ WaitForAnimEnd(Stack[-3])
0x97: Pop(0)
0x98: Pop(0); Push((bool) Stack[-3] == 0)
0x99: IF (Stack[-1] == 0) GOTO 0x9d; Pop(1)

0x9a: @ StopAsync()
0x9b: Pop(0)
0x9c: Return(); Pop(6)

0x9d: Push("shot")
0x9e: @ Speak(Stack[-1])
0x9f: Pop(1)
0xa0: Push("all")
0xa1: Push("shoot_end")
0xa2: @ PlayAnimation(Stack[-2], Stack[-1])
0xa3: Pop(2)
0xa4: @ WaitForAnimEnd(Stack[-3])
0xa5: Pop(0)
0xa6: Pop(0); Push((bool) Stack[-3] == 0)
0xa7: IF (Stack[-1] == 0) GOTO 0xab; Pop(1)

0xa8: @ StopAsync()
0xa9: Pop(0)
0xaa: Return(); Pop(6)

0xab: Push("all")
0xac: Push("shoot_end")
0xad: @ LockAnimationEnd(Stack[-2], Stack[-1])
0xae: Pop(2)
0xaf: Stack[-2] = (int) 0
0xb0: Stack[-1] = (int) 0
0xb1: Push((int) 20)
0xb2: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xb3: IF (Stack[-1] == 0) GOTO 0xe5; Pop(1)

0xb4: PushEmpty(object)
0xb5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb6: Call2 0x6df

0xb7: Pop(1)
0xb8: Push((float)0.5)
0xb9: @ Sleep(Stack[-1], Stack[-4])
0xba: Pop(1)
0xbb: Pop(0); Push((bool) Stack[-3] == 0)
0xbc: IF (Stack[-1] == 0) GOTO 0xbe; Pop(1)

0xbd: Return(); Pop(6)

0xbe: @ CanSee(Stack[-1], Stack[-0])
0xbf: Pop(0)
0xc0: Push( Stack[1 + Tasks[-1].StackPointer] )
0xc1: IF (Stack[-1] == 0) GOTO 0xd4; Pop(1)

0xc2: Stack[-2] = (int) 0
0xc3: PushEmpty(bool, object)
0xc4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc5: Call2 0x809

0xc6: Pop(1)
0xc7: IF (Stack[-1] == 0) GOTO 0xd1; Pop(1)

0xc8: PushEmpty()
0xc9: Call2 0x10f

0xca: Pop(0)
0xcb: PushEmpty(object, bool)
0xcc: Stack[-2] = Stack[0 + Tasks[-1].StackPointer]
0xcd: Stack[-1] = (bool) 0
0xce: Call2 0x7c6

0xcf: Pop(2)
0xd0: Return(); Pop(6)

0xd1: @ Face(Stack[-0])
0xd2: Pop(0)
0xd3: GOTO 0xe2

0xd4: @ StopAsync()
0xd5: Pop(0)
0xd6: Push((int) 1)
0xd7: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0xd8: Push((int) 4)
0xd9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xda: IF (Stack[-1] == 0) GOTO 0xe2; Pop(1)

0xdb: Push("all")
0xdc: Push("attack_off")
0xdd: @ PlayAnimation(Stack[-2], Stack[-1])
0xde: Pop(2)
0xdf: @ WaitForAnimEnd()
0xe0: Pop(0)
0xe1: Return(); Pop(6)

0xe2: Push((int) 1)
0xe3: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0xe4: GOTO 0xb1

0xe5: PushEmpty()
0xe6: Call2 0x10f

0xe7: Pop(0)
0xe8: PushEmpty(object, bool)
0xe9: Stack[-2] = Stack[-9]
0xea: Stack[-1] = (bool) 0
0xeb: Call2 0x7c6

0xec: Pop(2)
0xed: Return(); Pop(6)

0xee: PushEmpty()
0xef: PushEmpty(bool, object)
0xf0: Stack[-1] = Stack[-3]
0xf1: Call2 0x546

0xf2: Pop(1)
0xf3: Pop(1); Push((bool) Stack[-1] == 0)
0xf4: IF (Stack[-1] == 0) GOTO 0xfa; Pop(1)

0xf5: PushEmpty(object)
0xf6: Stack[-1] = Stack[-2]
0xf7: Call2 0x7d1

0xf8: Pop(1)
0xf9: Return(); Pop(0)

0xfa: PushEmpty()
0xfb: Call2 0x10f

0xfc: Pop(0)
0xfd: PushEmpty(object)
0xfe: Stack[-1] = Stack[-2]
0xff: Call2 0x7e9

0x100: Pop(1)
0x101: Return(); Pop(0)

0x102: PushEmpty()
0x103: PushEmpty(bool, object, object, bool)
0x104: Stack[-3] = Stack[-7]
0x105: Stack[-2] = Stack[-6]
0x106: Stack[-1] = Stack[-5]
0x107: Call2 0x87d

0x108: Pop(3)
0x109: IF (Stack[-1] == 0) GOTO 0x10e; Pop(1)

0x10a: PushEmpty(object)
0x10b: Stack[-1] = Stack[-4]
0x10c: Call2 0xee

0x10d: Pop(1)
0x10e: Return(); Pop(0)

0x10f: @ StopAsync()
0x110: Pop(0)
0x111: @ StopGroup0()
0x112: Pop(0)
0x113: @ Stop()
0x114: Pop(0)
0x115: Return(); Pop(0)

0x116: PushEmpty()
0x117: PushEmpty()
0x118: Call2 0x10f

0x119: Pop(0)
0x11a: PushEmpty(object)
0x11b: Stack[-1] = Stack[-2]
0x11c: Call2 0x725

0x11d: Pop(1)
0x11e: Return(); Pop(0)

0x11f: PushEmpty(bool, bool, bool, bool)
0x120: Stack[0 + Tasks[-1].StackPointer] = Stack[-6]
0x121: PushEmpty(object)
0x122: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x123: Call2 0x6df

0x124: Pop(1)
0x125: PushEmpty()
0x126: Call2 0x6e8

0x127: Pop(0)
0x128: @ Face(Stack[-0])
0x129: Pop(0)
0x12a: Push(Stack[-5])
0x12b: IF (Stack[-1] == 0) GOTO 0x132; Pop(1)

0x12c: Push("all")
0x12d: Push("attack_on")
0x12e: @ PlayAnimation(Stack[-2], Stack[-1])
0x12f: Pop(2)
0x130: @ WaitForAnimEnd()
0x131: Pop(0)
0x132: Push("all")
0x133: Push("attack_on")
0x134: @ LockAnimationEnd(Stack[-2], Stack[-1])
0x135: Pop(2)
0x136: Push((bool) 1)
0x137: @ SetAttackState(Stack[-1])
0x138: Pop(1)
0x139: PushEmpty(bool, object)
0x13a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x13b: Call2 0x546

0x13c: Pop(1)
0x13d: IF (Stack[-1] == 0) GOTO 0x1a3; Pop(1)

0x13e: @ CanSee(Stack[-1], Stack[-0])
0x13f: Pop(0)
0x140: Push(Stack[-1])
0x141: IF (Stack[-1] == 0) GOTO 0x14a; Pop(1)

0x142: PushEmpty(object)
0x143: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x144: Call2 0x6df

0x145: Pop(1)
0x146: PushEmpty()
0x147: Call2 0x1d3

0x148: Pop(0)
0x149: GOTO 0x199

0x14a: PushEmpty(object)
0x14b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x14c: Call2 0x5dc

0x14d: Pop(1)
0x14e: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x14f: Push("all")
0x150: Push("hunt")
0x151: @ PlayAnimation(Stack[-2], Stack[-1])
0x152: Pop(2)
0x153: @ WaitForAnimEnd(Stack[-2])
0x154: Pop(0)
0x155: Pop(0); Push((bool) Stack[-2] == 0)
0x156: IF (Stack[-1] == 0) GOTO 0x161; Pop(1)

0x157: Pop(0); Push(( Stack[1 + Tasks[-1].StackPointer] != 0 )
0x158: IF (Stack[-1] == 0) GOTO 0x15c; Pop(1)

0x159: PushEmpty()
0x15a: Call2 0x1ce

0x15b: Pop(0)
0x15c: Push("all")
0x15d: Push("attack_on")
0x15e: @ LockAnimationEnd(Stack[-2], Stack[-1])
0x15f: Pop(2)
0x160: GOTO 0x139

0x161: PushEmpty(bool, object)
0x162: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x163: Call2 0x546

0x164: Pop(1)
0x165: Pop(1); Push((bool) Stack[-1] == 0)
0x166: IF (Stack[-1] == 0) GOTO 0x168; Pop(1)

0x167: GOTO 0x1a3

0x168: @ CanSee(Stack[-1], Stack[-0])
0x169: Pop(0)
0x16a: Push(Stack[-1])
0x16b: IF (Stack[-1] == 0) GOTO 0x173; Pop(1)

0x16c: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x16d: @ Face(Stack[-0])
0x16e: Pop(0)
0x16f: PushEmpty()
0x170: Call2 0x1d3

0x171: Pop(0)
0x172: GOTO 0x199

0x173: Push("all")
0x174: Push("attack_on")
0x175: @ LockAnimationEnd(Stack[-2], Stack[-1])
0x176: Pop(2)
0x177: Push((int) 3)
0x178: @ Sleep(Stack[-1], Stack[-3])
0x179: Pop(1)
0x17a: Pop(0); Push((bool) Stack[-2] == 0)
0x17b: IF (Stack[-1] == 0) GOTO 0x186; Pop(1)

0x17c: Pop(0); Push(( Stack[1 + Tasks[-1].StackPointer] != 0 )
0x17d: IF (Stack[-1] == 0) GOTO 0x181; Pop(1)

0x17e: PushEmpty()
0x17f: Call2 0x1ce

0x180: Pop(0)
0x181: Push("all")
0x182: Push("attack_on")
0x183: @ LockAnimationEnd(Stack[-2], Stack[-1])
0x184: Pop(2)
0x185: GOTO 0x139

0x186: PushEmpty(bool, object)
0x187: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x188: Call2 0x546

0x189: Pop(1)
0x18a: Pop(1); Push((bool) Stack[-1] == 0)
0x18b: IF (Stack[-1] == 0) GOTO 0x18d; Pop(1)

0x18c: GOTO 0x1a3

0x18d: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x18e: @ CanSee(Stack[-1], Stack[-0])
0x18f: Pop(0)
0x190: Push(Stack[-1])
0x191: IF (Stack[-1] == 0) GOTO 0x198; Pop(1)

0x192: @ Face(Stack[-0])
0x193: Pop(0)
0x194: PushEmpty()
0x195: Call2 0x1d3

0x196: Pop(0)
0x197: GOTO 0x199

0x198: GOTO 0x1a3

0x199: Pop(0); Push(( Stack[1 + Tasks[-1].StackPointer] != 0 )
0x19a: IF (Stack[-1] == 0) GOTO 0x19f; Pop(1)

0x19b: PushEmpty()
0x19c: Call2 0x1ce

0x19d: Pop(0)
0x19e: GOTO 0x1a2

0x19f: Push((int) 2)
0x1a0: @ Sleep(Stack[-1])
0x1a1: Pop(1)
0x1a2: GOTO 0x139

0x1a3: Push((bool) 0)
0x1a4: @ SetAttackState(Stack[-1])
0x1a5: Pop(1)
0x1a6: @ StopAsync()
0x1a7: Pop(0)
0x1a8: Push("all")
0x1a9: Push("attack_off")
0x1aa: @ PlayAnimation(Stack[-2], Stack[-1])
0x1ab: Pop(2)
0x1ac: @ WaitForAnimEnd()
0x1ad: Pop(0)
0x1ae: Return(); Pop(4)

0x1af: PushEmpty()
0x1b0: PushEmpty(bool)
0x1b1: Stack[-1] = (bool) 0
0x1b2: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1b3: IF (Stack[-1] == 0) GOTO 0x1b7; Pop(1)

0x1b4: Pop(0); Push((bool) Stack[-2] == Stack[0 + Tasks[-1].StackPointer])
0x1b5: IF (Stack[-1] == 0) GOTO 0x1b7; Pop(1)

0x1b6: Stack[-1] = (bool) 1
0x1b7: IF (Stack[-1] == 0) GOTO 0x1bc; Pop(1)

0x1b8: PushEmpty(object)
0x1b9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1ba: Call2 0x5dc

0x1bb: Pop(1)
0x1bc: Return(); Pop(0)

0x1bd: PushEmpty()
0x1be: PushEmpty(bool)
0x1bf: Stack[-1] = (bool) 0
0x1c0: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1c1: IF (Stack[-1] == 0) GOTO 0x1c5; Pop(1)

0x1c2: Pop(0); Push((bool) Stack[-2] == Stack[0 + Tasks[-1].StackPointer])
0x1c3: IF (Stack[-1] == 0) GOTO 0x1c5; Pop(1)

0x1c4: Stack[-1] = (bool) 1
0x1c5: IF (Stack[-1] == 0) GOTO 0x1cd; Pop(1)

0x1c6: Push("@Stop hunt")
0x1c7: @ Trace(Stack[-1])
0x1c8: Pop(1)
0x1c9: @ StopAnimation()
0x1ca: Pop(0)
0x1cb: @ StopGroup0()
0x1cc: Pop(0)
0x1cd: Return(); Pop(0)

0x1ce: Stack[0 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer]
0x1cf: Stack[1 + Tasks[-1].StackPointer] = 0
0x1d0: @ Face(Stack[-0])
0x1d1: Pop(0)
0x1d2: Return(); Pop(0)

0x1d3: PushEmpty(cvector, cvector, bool, cvector, cvector, object, object, cvector, object, int, cvector, float, object, object, cvector, cvector, bool, cvector, cvector, object, object, cvector, object, int, cvector, float, object, object)
0x1d4: PushEmpty(object)
0x1d5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1d6: Call2 0x6df

0x1d7: Pop(1)
0x1d8: @ ReportAttack(Stack[-0])
0x1d9: Pop(0)
0x1da: PushEmpty(bool, object)
0x1db: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1dc: Call2 0x4c3

0x1dd: Pop(1)
0x1de: IF (Stack[-1] == 0) GOTO 0x1e4; Pop(1)

0x1df: PushEmpty(object)
0x1e0: Call2 0x679

0x1e1: Pop(0)
0x1e2: @ SendPlayerEnemy(Stack[-0], Stack[-1])
0x1e3: Pop(1)
0x1e4: @ GetDirection(Stack[-14])
0x1e5: Pop(0)
0x1e6: PushEmpty(cvector, object)
0x1e7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1e8: Call2 0x4ad

0x1e9: Stack[-15] = Stack[-2]
0x1ea: Pop(2)
0x1eb: PushEmpty(float, cvector, cvector)
0x1ec: Stack[-2] = Stack[-17]
0x1ed: Stack[-1] = Stack[-16]
0x1ee: Call2 0x6b8

0x1ef: Pop(2)
0x1f0: Push((float)0.99939)
0x1f1: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x1f2: IF (Stack[-1] == 0) GOTO 0x1f4; Pop(1)

0x1f3: Return(); Pop(28)

0x1f4: PushEmpty()
0x1f5: Call2 0x6e8

0x1f6: Pop(0)
0x1f7: Push("all")
0x1f8: Push("attack_begin1")
0x1f9: @ PlayAnimation(Stack[-2], Stack[-1])
0x1fa: Pop(2)
0x1fb: Push("attack")
0x1fc: @ GetGeometryLocator(Stack[-1], Stack[-13], Stack[-12], Stack[-11])
0x1fd: Pop(1)
0x1fe: Push(Stack[-12])
0x1ff: IF (Stack[-1] == 0) GOTO 0x209; Pop(1)

0x200: @ GetScene(Stack[-8])
0x201: Pop(0)
0x202: Push("light-dynamic")
0x203: Push("soldier_fire.xml")
0x204: @ AddActorByType(Stack[-11], Stack[-2], Stack[-10], Stack[-13], Stack[-12], Stack[-1])
0x205: Pop(2)
0x206: Stack[-8] = 0
0x207: Stack[-9] = 0
0x208: GOTO 0x20b

0x209: @ WaitForAnimEnd()
0x20a: Pop(0)
0x20b: Push("shot")
0x20c: @ Speak(Stack[-1])
0x20d: Pop(1)
0x20e: @ GetDirection(Stack[-14])
0x20f: Pop(0)
0x210: PushEmpty(cvector, object)
0x211: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x212: Call2 0x4ad

0x213: Stack[-15] = Stack[-2]
0x214: Pop(2)
0x215: Push(CvectorIndex(Stack[-13], 1))
0x216: PushEmpty(float, object)
0x217: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x218: Call2 0x5f2

0x219: Pop(1)
0x21a: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x21b: CvectorIndex(Stack[-14], 1) = Stack[-1];
0x21c: Push((float)0.03491)
0x21d: @ RandVecCone3D(Stack[-8], Stack[-14], Stack[-1])
0x21e: Pop(1)
0x21f: @ GetVictimMaterial(Stack[-7], Stack[-6], Stack[-5], Stack[-4])
0x220: Pop(0)
0x221: Pop(0); Push(( Stack[-6] != 0 )
0x222: IF (Stack[-1] == 0) GOTO 0x240; Pop(1)

0x223: Pop(0); Push((bool) Stack[-6] == Stack[0 + Tasks[-1].StackPointer])
0x224: IF (Stack[-1] == 0) GOTO 0x231; Pop(1)

0x225: PushEmpty(float, object, float, int)
0x226: Stack[-3] = Stack[0 + Tasks[-1].StackPointer]
0x227: Stack[-2] = (float) 1.5
0x228: Stack[-1] = (int) 1
0x229: Call2 0x4d4

0x22a: Stack[-7] = Stack[-4]
0x22b: Pop(4)
0x22c: Push((int) 2)
0x22d: Push((float)1.5)
0x22e: @ ReportHit(Stack[-0], Stack[-2], Stack[-5], Stack[-1])
0x22f: Pop(2)
0x230: GOTO 0x240

0x231: Push((int) -1)
0x232: Pop(1); Push((bool) Stack[-6] != Stack[-1])
0x233: IF (Stack[-1] == 0) GOTO 0x240; Pop(1)

0x234: @ GetScene(Stack[-2])
0x235: Pop(0)
0x236: Push("scripted")
0x237: Push(CVector(0.0, 0.0, 1.0))
0x238: Push("richochet.xml")
0x239: @ AddActorByType(Stack[-4], Stack[-3], Stack[-5], Stack[-7], Stack[-2], Stack[-1])
0x23a: Pop(3)
0x23b: Push("Material")
0x23c: @@ SetScriptProperty(Stack[-1], Stack[-6])
0x23d: Pop(1)
0x23e: Stack[-1] = 0
0x23f: Stack[-2] = 0
0x240: Push("all")
0x241: Push("attack_end1")
0x242: @ PlayAnimation(Stack[-2], Stack[-1])
0x243: Pop(2)
0x244: @ WaitForAnimEnd()
0x245: Pop(0)
0x246: Push("all")
0x247: Push("attack_on")
0x248: @ LockAnimationEnd(Stack[-2], Stack[-1])
0x249: Pop(2)
0x24a: Return(); Pop(28)

0x24b: Stack[-6] = 0
0x24c: PushEmpty()
0x24d: PushEmpty(bool, object)
0x24e: Stack[-1] = Stack[-3]
0x24f: Call2 0x546

0x250: Pop(1)
0x251: Pop(1); Push((bool) Stack[-1] == 0)
0x252: IF (Stack[-1] == 0) GOTO 0x254; Pop(1)

0x253: Return(); Pop(0)

0x254: PushEmpty(object)
0x255: Stack[-1] = Stack[-2]
0x256: Call2 0x7d1

0x257: Pop(1)
0x258: Pop(0); Push((bool) Stack[-1] == Stack[0 + Tasks[-1].StackPointer])
0x259: IF (Stack[-1] == 0) GOTO 0x25c; Pop(1)

0x25a: Stack[1 + Tasks[-1].StackPointer] = 0
0x25b: GOTO 0x263

0x25c: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x25d: Push( Stack[2 + Tasks[-1].StackPointer] )
0x25e: IF (Stack[-1] == 0) GOTO 0x263; Pop(1)

0x25f: @ StopAnimation()
0x260: Pop(0)
0x261: @ StopGroup0()
0x262: Pop(0)
0x263: Return(); Pop(0)

0x264: PushEmpty()
0x265: PushEmpty(bool, object, object, bool)
0x266: Stack[-3] = Stack[-7]
0x267: Stack[-2] = Stack[-6]
0x268: Stack[-1] = Stack[-5]
0x269: Call2 0x87d

0x26a: Pop(3)
0x26b: IF (Stack[-1] == 0) GOTO 0x270; Pop(1)

0x26c: PushEmpty(object)
0x26d: Stack[-1] = Stack[-4]
0x26e: Call2 0x24c

0x26f: Pop(1)
0x270: Return(); Pop(0)

0x271: @ Hold()
0x272: Pop(0)
0x273: GOTO 0x271

0x274: Return(); Pop(0)

0x275: PushEmpty(bool, bool)
0x276: @ IsPlayerActor(Stack[-3], Stack[-1])
0x277: Pop(0)
0x278: Push(Stack[-1])
0x279: IF (Stack[-1] == 0) GOTO 0x28a; Pop(1)

0x27a: PushEmpty(bool)
0x27b: Call2 0x897

0x27c: Pop(0)
0x27d: IF (Stack[-1] == 0) GOTO 0x284; Pop(1)

0x27e: PushEmpty(bool, string, string)
0x27f: Stack[-2] = "quest_d11_01"
0x280: Stack[-1] = "soldier_attack"
0x281: Call2 0x6d3

0x282: Pop(3)
0x283: GOTO 0x28a

0x284: PushEmpty(object)
0x285: Stack[-1] = Stack[-4]
0x286: Push(-1, 2); TaskCall(4)
0x287: Call2 0x2a0

0x288: Pop(-1, 2); TaskReturn
0x289: Pop(1)
0x28a: Return(); Pop(2)

0x28b: PushEmpty()
0x28c: PushEmpty(bool, string, string)
0x28d: Stack[-2] = "quest_d11_01"
0x28e: Stack[-1] = "soldier_attack"
0x28f: Call2 0x6d3

0x290: Pop(3)
0x291: Return(); Pop(0)

0x292: PushEmpty()
0x293: Push("attack")
0x294: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x295: IF (Stack[-1] == 0) GOTO 0x29f; Pop(1)

0x296: PushEmpty(object)
0x297: PushEmpty(object)
0x298: Call2 0x4bc

0x299: Stack[-2] = Stack[-1]
0x29a: Pop(1)
0x29b: Push(-1, 2); TaskCall(6)
0x29c: Call2 0x348

0x29d: Pop(-1, 2); TaskReturn
0x29e: Pop(1)
0x29f: Return(); Pop(0)

0x2a0: PushEmpty()
0x2a1: PushEmpty(bool, object)
0x2a2: Stack[-1] = Stack[-3]
0x2a3: Push(-2, 1); TaskCall(5)
0x2a4: Call2 0x314

0x2a5: Pop(-2, 1); TaskReturn
0x2a6: Pop(1)
0x2a7: IF (Stack[-1] == 0) GOTO 0x2b0; Pop(1)

0x2a8: PushEmpty(object)
0x2a9: Stack[-1] = Stack[-2]
0x2aa: Call2 0x2d2

0x2ab: Pop(1)
0x2ac: Push("all")
0x2ad: Push("attack_off")
0x2ae: @ PlayAnimation(Stack[-2], Stack[-1])
0x2af: Pop(2)
0x2b0: Return(); Pop(0)

0x2b1: PushEmpty()
0x2b2: Pop(0); Push((bool) Stack[-1] == Stack[0 + Tasks[-1].StackPointer])
0x2b3: IF (Stack[-1] == 0) GOTO 0x2b7; Pop(1)

0x2b4: PushEmpty()
0x2b5: Call2 0x310

0x2b6: Pop(0)
0x2b7: Return(); Pop(0)

0x2b8: PushEmpty()
0x2b9: PushEmpty(bool, string, string)
0x2ba: Stack[-2] = "quest_d11_01"
0x2bb: Stack[-1] = "soldier_attack"
0x2bc: Call2 0x6d3

0x2bd: Pop(3)
0x2be: Return(); Pop(0)

0x2bf: PushEmpty()
0x2c0: Push("attack")
0x2c1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2c2: IF (Stack[-1] == 0) GOTO 0x2cc; Pop(1)

0x2c3: PushEmpty(object)
0x2c4: PushEmpty(object)
0x2c5: Call2 0x4bc

0x2c6: Stack[-2] = Stack[-1]
0x2c7: Pop(1)
0x2c8: Push(-1, 2); TaskCall(6)
0x2c9: Call2 0x348

0x2ca: Pop(-1, 2); TaskReturn
0x2cb: Pop(1)
0x2cc: Return(); Pop(0)

0x2cd: Push("all")
0x2ce: Push("attack_on")
0x2cf: @ LockAnimationEnd(Stack[-2], Stack[-1])
0x2d0: Pop(2)
0x2d1: Return(); Pop(0)

0x2d2: PushEmpty(cvector, cvector, cvector, cvector)
0x2d3: Stack[0 + Tasks[-1].StackPointer] = Stack[-5]
0x2d4: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x2d5: PushEmpty()
0x2d6: Call2 0x303

0x2d7: Pop(0)
0x2d8: @ GetDirection(Stack[-2])
0x2d9: Pop(0)
0x2da: PushEmpty(cvector, object)
0x2db: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2dc: Call2 0x4ad

0x2dd: Stack[-3] = Stack[-2]
0x2de: Pop(2)
0x2df: PushEmpty(float, cvector, cvector)
0x2e0: Stack[-2] = Stack[-5]
0x2e1: Stack[-1] = Stack[-4]
0x2e2: Call2 0x6b8

0x2e3: Pop(2)
0x2e4: Push((float)0.70711)
0x2e5: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x2e6: IF (Stack[-1] == 0) GOTO 0x2ef; Pop(1)

0x2e7: PushEmpty(object, float)
0x2e8: Stack[-2] = Stack[0 + Tasks[-1].StackPointer]
0x2e9: Stack[-1] = (float) 4.71239
0x2ea: Call2 0x5e7

0x2eb: Pop(2)
0x2ec: PushEmpty()
0x2ed: Call2 0x2cd

0x2ee: Pop(0)
0x2ef: Push((float)0.5)
0x2f0: @ Sleep(Stack[-1])
0x2f1: Pop(1)
0x2f2: PushEmpty(bool)
0x2f3: Stack[-1] = (bool) 0
0x2f4: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == 0)
0x2f5: IF (Stack[-1] == 0) GOTO 0x2fc; Pop(1)

0x2f6: PushEmpty(bool, object)
0x2f7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2f8: Call2 0x546

0x2f9: Pop(1)
0x2fa: IF (Stack[-1] == 0) GOTO 0x2fc; Pop(1)

0x2fb: Stack[-1] = (bool) 1
0x2fc: IF (Stack[-1] == 0) GOTO 0x2d8; Pop(1)

0x2fd: @ StopAsync()
0x2fe: Pop(0)
0x2ff: Push("spine")
0x300: @ UnlookAsync(Stack[-1])
0x301: Pop(1)
0x302: Return(); Pop(4)

0x303: PushEmpty(float, float, cvector, float, float, cvector)
0x304: @ GetEyesHeight(Stack[-3])
0x305: Pop(0)
0x306: @@ GetEyesHeight(Stack[-2])
0x307: Pop(0)
0x308: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x309: Push(CvectorIndex(Stack[-1], 1))
0x30a: Stack[-1] = Stack[-3] - Stack[-4]; Pop(0);
0x30b: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x30c: Push("spine")
0x30d: @ DirLookAsyncRel(Stack[-0], Stack[-1], Stack[-2])
0x30e: Pop(1)
0x30f: Return(); Pop(6)

0x310: @ StopGroup0()
0x311: Pop(0)
0x312: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x313: Return(); Pop(0)

0x314: PushEmpty(bool, bool)
0x315: Stack[0 + Tasks[-1].StackPointer] = Stack[-3]
0x316: PushEmpty(object)
0x317: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x318: Call2 0x5dc

0x319: Pop(1)
0x31a: Push("all")
0x31b: Push("attack_on")
0x31c: @ PlayAnimation(Stack[-2], Stack[-1])
0x31d: Pop(2)
0x31e: @ WaitForAnimEnd(Stack[-1])
0x31f: Pop(0)
0x320: Pop(0); Push((bool) Stack[-1] == 0)
0x321: IF (Stack[-1] == 0) GOTO 0x324; Pop(1)

0x322: Stack[-4] = (bool) 0
0x323: Return(); Pop(2)

0x324: Push("all")
0x325: Push("attack_on")
0x326: @ LockAnimationEnd(Stack[-2], Stack[-1])
0x327: Pop(2)
0x328: Stack[-4] = (bool) 1
0x329: Return(); Pop(2)

0x32a: @ StopAnimation()
0x32b: Pop(0)
0x32c: Return(); Pop(0)

0x32d: PushEmpty()
0x32e: Pop(0); Push((bool) Stack[-1] == Stack[0 + Tasks[-1].StackPointer])
0x32f: IF (Stack[-1] == 0) GOTO 0x332; Pop(1)

0x330: @ StopAnimation()
0x331: Pop(0)
0x332: Return(); Pop(0)

0x333: PushEmpty()
0x334: PushEmpty(bool, string, string)
0x335: Stack[-2] = "quest_d11_01"
0x336: Stack[-1] = "soldier_attack"
0x337: Call2 0x6d3

0x338: Pop(3)
0x339: Return(); Pop(0)

0x33a: PushEmpty()
0x33b: Push("attack")
0x33c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x33d: IF (Stack[-1] == 0) GOTO 0x347; Pop(1)

0x33e: PushEmpty(object)
0x33f: PushEmpty(object)
0x340: Call2 0x4bc

0x341: Stack[-2] = Stack[-1]
0x342: Pop(1)
0x343: Push(-1, 2); TaskCall(6)
0x344: Call2 0x348

0x345: Pop(-1, 2); TaskReturn
0x346: Pop(1)
0x347: Return(); Pop(0)

0x348: PushEmpty()
0x349: PushEmpty()
0x34a: Call2 0x7bf

0x34b: Pop(0)
0x34c: PushEmpty(object)
0x34d: Stack[-1] = Stack[-2]
0x34e: Call2 0x37c

0x34f: Pop(1)
0x350: PushEmpty()
0x351: Call2 0x355

0x352: Pop(0)
0x353: GOTO 0x350

0x354: Return(); Pop(0)

0x355: PushEmpty()
0x356: Call2 0x7bf

0x357: Pop(0)
0x358: PushEmpty()
0x359: Call2 0x3ab

0x35a: Pop(0)
0x35b: GOTO 0x358

0x35c: Return(); Pop(0)

0x35d: Return(); Pop(0)

0x35e: PushEmpty(bool, bool)
0x35f: PushEmpty(bool, object)
0x360: Stack[-1] = Stack[-5]
0x361: Call2 0x546

0x362: Pop(1)
0x363: Pop(1); Push((bool) Stack[-1] == 0)
0x364: IF (Stack[-1] == 0) GOTO 0x366; Pop(1)

0x365: Return(); Pop(2)

0x366: PushEmpty(bool, object)
0x367: Stack[-1] = Stack[-5]
0x368: Call2 0x811

0x369: Pop(1)
0x36a: Pop(1); Push((bool) Stack[-1] == 0)
0x36b: IF (Stack[-1] == 0) GOTO 0x372; Pop(1)

0x36c: Push(GlobalVars[0])
0x36d: @@ in(Stack[-2], Stack[-4])
0x36e: Pop(1)
0x36f: Pop(0); Push((bool) Stack[-1] == 0)
0x370: IF (Stack[-1] == 0) GOTO 0x372; Pop(1)

0x371: Return(); Pop(2)

0x372: PushEmpty()
0x373: Call2 0x3ff

0x374: Pop(0)
0x375: PushEmpty(object)
0x376: Stack[-1] = Stack[-4]
0x377: Push(-1, 1); TaskCall(0)
0x378: Call2 0x0

0x379: Pop(-1, 1); TaskReturn
0x37a: Pop(1)
0x37b: Return(); Pop(2)

0x37c: PushEmpty()
0x37d: PushEmpty(bool, object)
0x37e: Stack[-1] = Stack[-3]
0x37f: Call2 0x546

0x380: Pop(1)
0x381: Pop(1); Push((bool) Stack[-1] == 0)
0x382: IF (Stack[-1] == 0) GOTO 0x388; Pop(1)

0x383: PushEmpty(object)
0x384: Stack[-1] = Stack[-2]
0x385: Call2 0x7d1

0x386: Pop(1)
0x387: Return(); Pop(0)

0x388: PushEmpty()
0x389: Call2 0x3ff

0x38a: Pop(0)
0x38b: PushEmpty(object)
0x38c: Stack[-1] = Stack[-2]
0x38d: Call2 0x7e9

0x38e: Pop(1)
0x38f: Return(); Pop(0)

0x390: PushEmpty()
0x391: PushEmpty(bool, object, object, bool)
0x392: Stack[-3] = Stack[-7]
0x393: Stack[-2] = Stack[-6]
0x394: Stack[-1] = Stack[-5]
0x395: Call2 0x87d

0x396: Pop(3)
0x397: IF (Stack[-1] == 0) GOTO 0x39c; Pop(1)

0x398: PushEmpty(object)
0x399: Stack[-1] = Stack[-4]
0x39a: Call2 0x37c

0x39b: Pop(1)
0x39c: Return(); Pop(0)

0x39d: PushEmpty()
0x39e: PushEmpty(bool, object)
0x39f: Stack[-1] = Stack[-3]
0x3a0: Call2 0x861

0x3a1: Pop(1)
0x3a2: IF (Stack[-1] == 0) GOTO 0x3aa; Pop(1)

0x3a3: PushEmpty()
0x3a4: Call2 0x3ff

0x3a5: Pop(0)
0x3a6: PushEmpty(object)
0x3a7: Stack[-1] = Stack[-2]
0x3a8: Call2 0x89e

0x3a9: Pop(1)
0x3aa: Return(); Pop(0)

0x3ab: PushEmpty(int, bool, cvector, object, int, bool, cvector, object)
0x3ac: @ GetPFPosition(Stack[-1])
0x3ad: Pop(0)
0x3ae: @ GetDirection(Stack[-0])
0x3af: Pop(0)
0x3b0: PushEmpty()
0x3b1: Call2 0x404

0x3b2: Pop(0)
0x3b3: Push((int) 10)
0x3b4: @ irand(Stack[-5], Stack[-1])
0x3b5: Pop(1)
0x3b6: Push((int) 5)
0x3b7: Pop(1); Push(Stack[-5] + Stack[-1]);
0x3b8: @ Sleep(Stack[-1], Stack[-4])
0x3b9: Pop(1)
0x3ba: Push(Stack[-3])
0x3bb: IF (Stack[-1] == 0) GOTO 0x3c0; Pop(1)

0x3bc: PushEmpty()
0x3bd: Call2 0x35d

0x3be: Pop(0)
0x3bf: GOTO 0x3fd

0x3c0: PushEmpty()
0x3c1: Call2 0x404

0x3c2: Pop(0)
0x3c3: @ GetPFPosition(Stack[-2])
0x3c4: Pop(0)
0x3c5: PushEmpty(float, cvector, cvector)
0x3c6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x3c7: Stack[-1] = Stack[-5]
0x3c8: Call2 0x689

0x3c9: Pop(2)
0x3ca: Push((int) 40000)
0x3cb: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x3cc: IF (Stack[-1] == 0) GOTO 0x3ef; Pop(1)

0x3cd: @ FindPathTo(Stack[-1], Stack[-1])
0x3ce: Pop(0)
0x3cf: Pop(0); Push(( Stack[-1] != 0 )
0x3d0: IF (Stack[-1] == 0) GOTO 0x3ea; Pop(1)

0x3d1: @ RotatePath(Stack[-1], Stack[-3])
0x3d2: Pop(0)
0x3d3: Pop(0); Push((bool) Stack[-3] == 0)
0x3d4: IF (Stack[-1] == 0) GOTO 0x3d6; Pop(1)

0x3d5: GOTO 0x3fc

0x3d6: Push((bool) 0)
0x3d7: @ FollowPath(Stack[-2], Stack[-1], Stack[-4])
0x3d8: Pop(1)
0x3d9: Pop(0); Push((bool) Stack[-3] == 0)
0x3da: IF (Stack[-1] == 0) GOTO 0x3dc; Pop(1)

0x3db: GOTO 0x3fc

0x3dc: Push(CvectorIndex(Stack[-0], 0))
0x3dd: Push(CvectorIndex(Stack[-0], 2))
0x3de: @ Rotate(Stack[-2], Stack[-1], Stack[-5])
0x3df: Pop(2)
0x3e0: Pop(0); Push((bool) Stack[-3] == 0)
0x3e1: IF (Stack[-1] == 0) GOTO 0x3e3; Pop(1)

0x3e2: GOTO 0x3fc

0x3e3: @ WaitForAnimEnd(Stack[-3])
0x3e4: Pop(0)
0x3e5: Pop(0); Push((bool) Stack[-3] == 0)
0x3e6: IF (Stack[-1] == 0) GOTO 0x3e8; Pop(1)

0x3e7: GOTO 0x3fc

0x3e8: GOTO 0x3fd

0x3e9: GOTO 0x3ed

0x3ea: Push((int) 1)
0x3eb: @ Sleep(Stack[-1])
0x3ec: Pop(1)
0x3ed: Stack[-1] = 0
0x3ee: GOTO 0x3fc

0x3ef: Push(CvectorIndex(Stack[-0], 0))
0x3f0: Push(CvectorIndex(Stack[-0], 2))
0x3f1: @ Rotate(Stack[-2], Stack[-1], Stack[-5])
0x3f2: Pop(2)
0x3f3: Pop(0); Push((bool) Stack[-3] == 0)
0x3f4: IF (Stack[-1] == 0) GOTO 0x3f6; Pop(1)

0x3f5: GOTO 0x3fc

0x3f6: @ WaitForAnimEnd(Stack[-3])
0x3f7: Pop(0)
0x3f8: Pop(0); Push((bool) Stack[-3] == 0)
0x3f9: IF (Stack[-1] == 0) GOTO 0x3fb; Pop(1)

0x3fa: GOTO 0x3fc

0x3fb: GOTO 0x3fd

0x3fc: GOTO 0x3c0

0x3fd: GOTO 0x3b0

0x3fe: Return(); Pop(8)

0x3ff: @ StopGroup0()
0x400: Pop(0)
0x401: @ Stop()
0x402: Pop(0)
0x403: Return(); Pop(0)

0x404: Return(); Pop(0)

0x405: PushEmpty()
0x406: PushEmpty(object)
0x407: Stack[-1] = Stack[-2]
0x408: Call2 0x40b

0x409: Pop(1)
0x40a: Return(); Pop(0)

0x40b: PushEmpty()
0x40c: EventDisable(0)
0x40d: PushEmpty(object)
0x40e: Stack[-1] = Stack[-2]
0x40f: Call2 0x424

0x410: Pop(1)
0x411: Push((int) 50)
0x412: Push((int) 40)
0x413: @ SetRTEnvelope(Stack[-2], Stack[-1])
0x414: Pop(2)
0x415: EventEnable(0)
0x416: @ Hold()
0x417: Pop(0)
0x418: GOTO 0x416

0x419: Return(); Pop(0)

0x41a: PushEmpty(bool, bool)
0x41b: @ IsOverrideActive(Stack[-1])
0x41c: Pop(0)
0x41d: Pop(0); Push((bool) Stack[-1] == 0)
0x41e: IF (Stack[-1] == 0) GOTO 0x423; Pop(1)

0x41f: PushEmpty(object)
0x420: Stack[-1] = Stack[-4]
0x421: Call2 0x6f9

0x422: Pop(1)
0x423: Return(); Pop(2)

0x424: PushEmpty(cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector, cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector)
0x425: Pop(0); Push((bool) Stack[-21] == 0)
0x426: IF (Stack[-1] == 0) GOTO 0x42c; Pop(1)

0x427: PushEmpty(string)
0x428: Stack[-1] = "fdie"
0x429: Call2 0x47f

0x42a: Pop(1)
0x42b: GOTO 0x47e

0x42c: @@ GetPosition(Stack[-10])
0x42d: Pop(0)
0x42e: @ GetPosition(Stack[-9])
0x42f: Pop(0)
0x430: @ GetDirection(Stack[-8])
0x431: Pop(0)
0x432: Stack[-7] = Stack[-9] - Stack[-10]; Pop(0);
0x433: Push(CvectorIndex(Stack[-7], 0))
0x434: Push(CvectorIndex(Stack[-9], 0))
0x435: Pop(2); Push(Stack[-2] * Stack[-1]);
0x436: Push(CvectorIndex(Stack[-8], 2))
0x437: Push(CvectorIndex(Stack[-10], 2))
0x438: Pop(2); Push(Stack[-2] * Stack[-1]);
0x439: Pop(2); Push(Stack[-2] + Stack[-1]);
0x43a: Push((int) 0)
0x43b: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x43c: IF (Stack[-1] == 0) GOTO 0x43f; Pop(1)

0x43d: Stack[-6] = "fdie"
0x43e: GOTO 0x440

0x43f: Stack[-6] = "bdie"
0x440: @ RemoveRTEnvelope()
0x441: Pop(0)
0x442: @ SetDeathState()
0x443: Pop(0)
0x444: @ Stop()
0x445: Pop(0)
0x446: @ StopAsync()
0x447: Pop(0)
0x448: Stack[-5] = Stack[-21]
0x449: Push("GetScriptProperty")
0x44a: Push((int) 2)
0x44b: Pop(2); Push(IsFuncExist(Stack[-23], Stack[-2], Stack[-1]))
0x44c: IF (Stack[-1] == 0) GOTO 0x458; Pop(1)

0x44d: Push("Owner")
0x44e: @@ HasScriptProperty(Stack[-5], Stack[-1])
0x44f: Pop(1)
0x450: Push(Stack[-4])
0x451: IF (Stack[-1] == 0) GOTO 0x458; Pop(1)

0x452: Push("Owner")
0x453: @@ GetScriptProperty(Stack[-6], Stack[-1])
0x454: Pop(1)
0x455: Pop(0); Push((bool) Stack[-5] == 0)
0x456: IF (Stack[-1] == 0) GOTO 0x458; Pop(1)

0x457: Stack[-5] = Stack[-21]
0x458: Push("@GetEyesHeight")
0x459: Push((int) 1)
0x45a: Pop(2); Push(IsFuncExist(Stack[-7], Stack[-2], Stack[-1]))
0x45b: IF (Stack[-1] == 0) GOTO 0x467; Pop(1)

0x45c: @@ GetEyesHeight(Stack[-2])
0x45d: Pop(0)
0x45e: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x45f: Push(CvectorIndex(Stack[-1], 1))
0x460: Stack[-1] = Stack[-3]
0x461: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x462: Push("head")
0x463: @ LookAsync(Stack[-22], Stack[-1], Stack[-2])
0x464: Pop(1)
0x465: Stack[-3] = (bool) 1
0x466: GOTO 0x468

0x467: Stack[-3] = (bool) 0
0x468: PushEmpty(string)
0x469: Stack[-1] = Stack[-7]
0x46a: Call2 0x5f9

0x46b: Pop(1)
0x46c: Push("all")
0x46d: @ PlayAnimation(Stack[-1], Stack[-7])
0x46e: Pop(1)
0x46f: @ WaitForAnimEnd()
0x470: Pop(0)
0x471: Push(Stack[-3])
0x472: IF (Stack[-1] == 0) GOTO 0x478; Pop(1)

0x473: @ StopAsync()
0x474: Pop(0)
0x475: Push("head")
0x476: @ UnlookAsync(Stack[-1])
0x477: Pop(1)
0x478: Push("all")
0x479: @ LockAnimationEnd(Stack[-1], Stack[-7])
0x47a: Pop(1)
0x47b: @ RemoveEnvelope()
0x47c: Pop(0)
0x47d: Stack[-5] = 0
0x47e: Return(); Pop(20)

0x47f: PushEmpty()
0x480: @ RemoveRTEnvelope()
0x481: Pop(0)
0x482: @ SetDeathState()
0x483: Pop(0)
0x484: @ Stop()
0x485: Pop(0)
0x486: @ StopAsync()
0x487: Pop(0)
0x488: @ StopSecondaryAnimation()
0x489: Pop(0)
0x48a: PushEmpty(string)
0x48b: Stack[-1] = Stack[-2]
0x48c: Call2 0x5f9

0x48d: Pop(1)
0x48e: Push("all")
0x48f: @ PlayAnimation(Stack[-1], Stack[-2])
0x490: Pop(1)
0x491: @ WaitForAnimEnd()
0x492: Pop(0)
0x493: Push("all")
0x494: @ LockAnimationEnd(Stack[-1], Stack[-2])
0x495: Pop(1)
0x496: @ RemoveEnvelope()
0x497: Pop(0)
0x498: Return(); Pop(0)

0x499: PushEmpty()
0x49a: Return(); Pop(0)

0x49b: PushEmpty()
0x49c: Return(); Pop(0)

0x49d: PushEmpty()
0x49e: Return(); Pop(0)

0x49f: PushEmpty()
0x4a0: Push((int) 2)
0x4a1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4a2: IF (Stack[-1] == 0) GOTO 0x4a6; Pop(1)

0x4a3: Stack[-2] = "fire"
0x4a4: Return(); Pop(0)

0x4a5: GOTO 0x4ab

0x4a6: Push((int) 1)
0x4a7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4a8: IF (Stack[-1] == 0) GOTO 0x4ab; Pop(1)

0x4a9: Stack[-2] = "bullet"
0x4aa: Return(); Pop(0)

0x4ab: Stack[-2] = "phys"
0x4ac: Return(); Pop(0)

0x4ad: PushEmpty(cvector, cvector, cvector, cvector)
0x4ae: @ GetPosition(Stack[-2])
0x4af: Pop(0)
0x4b0: @@ GetPosition(Stack[-1])
0x4b1: Pop(0)
0x4b2: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x4b3: Return(); Pop(4)

0x4b4: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x4b5: @ GetPosition(Stack[-3])
0x4b6: Pop(0)
0x4b7: @@ GetPosition(Stack[-2])
0x4b8: Pop(0)
0x4b9: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x4ba: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x4bb: Return(); Pop(6)

0x4bc: PushEmpty(object, object)
0x4bd: Push("player")
0x4be: @ FindActor(Stack[-2], Stack[-1])
0x4bf: Pop(1)
0x4c0: Stack[-3] = Stack[-1]
0x4c1: Return(); Pop(2)

0x4c2: Stack[-1] = 0
0x4c3: PushEmpty(bool, bool)
0x4c4: @ IsPlayerActor(Stack[-3], Stack[-1])
0x4c5: Pop(0)
0x4c6: Stack[-4] = Stack[-1]
0x4c7: Return(); Pop(2)

0x4c8: PushEmpty(bool, bool)
0x4c9: Push("HasProperty")
0x4ca: Push((int) 2)
0x4cb: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x4cc: Pop(1); Push((bool) Stack[-1] == 0)
0x4cd: IF (Stack[-1] == 0) GOTO 0x4d0; Pop(1)

0x4ce: Stack[-5] = (bool) 0
0x4cf: Return(); Pop(2)

0x4d0: @@ HasProperty(Stack[-3], Stack[-1])
0x4d1: Pop(0)
0x4d2: Stack[-5] = Stack[-1]
0x4d3: Return(); Pop(2)

0x4d4: PushEmpty(int, string, int, float, float, float, int, string, int, float, float, float)
0x4d5: PushEmpty(bool, object, string)
0x4d6: Stack[-2] = Stack[-18]
0x4d7: Stack[-1] = "health"
0x4d8: Call2 0x4c8

0x4d9: Pop(2)
0x4da: Pop(1); Push((bool) Stack[-1] == 0)
0x4db: IF (Stack[-1] == 0) GOTO 0x4de; Pop(1)

0x4dc: Stack[-16] = (float) 0.0
0x4dd: Return(); Pop(12)

0x4de: PushEmpty(bool, object, string)
0x4df: Stack[-2] = Stack[-18]
0x4e0: Stack[-1] = "armor"
0x4e1: Call2 0x4c8

0x4e2: Pop(2)
0x4e3: Pop(1); Push((bool) Stack[-1] == 0)
0x4e4: IF (Stack[-1] == 0) GOTO 0x4e7; Pop(1)

0x4e5: Stack[-6] = (int) 0
0x4e6: GOTO 0x4ea

0x4e7: Push("armor")
0x4e8: @@ GetProperty(Stack[-1], Stack[-7])
0x4e9: Pop(1)
0x4ea: Push("armor_")
0x4eb: PushEmpty(string, int)
0x4ec: Stack[-1] = Stack[-16]
0x4ed: Call2 0x49f

0x4ee: Pop(1)
0x4ef: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x4f0: PushEmpty(bool, object, string)
0x4f1: Stack[-2] = Stack[-18]
0x4f2: Stack[-1] = Stack[-8]
0x4f3: Call2 0x4c8

0x4f4: Pop(2)
0x4f5: Pop(1); Push((bool) Stack[-1] == 0)
0x4f6: IF (Stack[-1] == 0) GOTO 0x4f9; Pop(1)

0x4f7: Stack[-4] = (int) 0
0x4f8: GOTO 0x4fb

0x4f9: @@ GetProperty(Stack[-5], Stack[-4])
0x4fa: Pop(0)
0x4fb: PushEmpty(float, float, float)
0x4fc: Pop(0); Push(Stack[-9] + Stack[-7]);
0x4fd: Push((float)100.0)
0x4fe: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0x4ff: Stack[-1] = (int) 1
0x500: Call2 0x68d

0x501: Stack[-6] = Stack[-3]
0x502: Pop(3)
0x503: Push("health")
0x504: @@ GetProperty(Stack[-1], Stack[-3])
0x505: Pop(1)
0x506: Push((int) 1)
0x507: Pop(1); Push(Stack[-1] - Stack[-4]);
0x508: Stack[-2] = Stack[-15] * Stack[-1]; Pop(1);
0x509: Push("health")
0x50a: PushEmpty(float, float, float, float)
0x50b: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0x50c: Stack[-2] = (int) 0
0x50d: Stack[-1] = (int) 1
0x50e: Call2 0x694

0x50f: Pop(3)
0x510: @@ SetProperty(Stack[-2], Stack[-1])
0x511: Pop(2)
0x512: PushEmpty(bool, object)
0x513: Stack[-1] = Stack[-17]
0x514: Call2 0x4c3

0x515: Pop(1)
0x516: IF (Stack[-1] == 0) GOTO 0x51b; Pop(1)

0x517: PushEmpty(float)
0x518: Stack[-1] = -Stack[-2]; Pop(0);
0x519: Call2 0x6c9

0x51a: Pop(1)
0x51b: Stack[-16] = Stack[-1]
0x51c: Return(); Pop(12)

0x51d: PushEmpty(bool, bool)
0x51e: @@ IsDead(Stack[-1])
0x51f: Pop(0)
0x520: Stack[-4] = Stack[-1]
0x521: Return(); Pop(2)

0x522: PushEmpty(object, object, object, object)
0x523: Pop(0); Push((bool) Stack[-5] == 0)
0x524: IF (Stack[-1] == 0) GOTO 0x527; Pop(1)

0x525: Stack[-6] = (bool) 0
0x526: Return(); Pop(4)

0x527: PushEmpty(bool)
0x528: Stack[-1] = (bool) 0
0x529: Push("IsDead")
0x52a: Push((int) 1)
0x52b: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x52c: IF (Stack[-1] == 0) GOTO 0x533; Pop(1)

0x52d: PushEmpty(bool, object)
0x52e: Stack[-1] = Stack[-8]
0x52f: Call2 0x51d

0x530: Pop(1)
0x531: IF (Stack[-1] == 0) GOTO 0x533; Pop(1)

0x532: Stack[-1] = (bool) 1
0x533: IF (Stack[-1] == 0) GOTO 0x536; Pop(1)

0x534: Stack[-6] = (bool) 0
0x535: Return(); Pop(4)

0x536: @ GetScene(Stack[-2])
0x537: Pop(0)
0x538: Pop(0); Push((bool) Stack[-2] == 0)
0x539: IF (Stack[-1] == 0) GOTO 0x53c; Pop(1)

0x53a: Stack[-6] = (bool) 0
0x53b: Return(); Pop(4)

0x53c: @@ GetScene(Stack[-1])
0x53d: Pop(0)
0x53e: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x53f: IF (Stack[-1] == 0) GOTO 0x542; Pop(1)

0x540: Stack[-6] = (bool) 0
0x541: Return(); Pop(4)

0x542: Stack[-6] = (bool) 1
0x543: Return(); Pop(4)

0x544: Stack[-1] = 0
0x545: Stack[-2] = 0
0x546: PushEmpty(int, int)
0x547: PushEmpty(bool, object)
0x548: Stack[-1] = Stack[-5]
0x549: Call2 0x522

0x54a: Pop(1)
0x54b: Pop(1); Push((bool) Stack[-1] == 0)
0x54c: IF (Stack[-1] == 0) GOTO 0x54f; Pop(1)

0x54d: Stack[-4] = (bool) 0
0x54e: Return(); Pop(2)

0x54f: PushEmpty(bool, object, string)
0x550: Stack[-2] = Stack[-6]
0x551: Stack[-1] = "noaccess"
0x552: Call2 0x4c8

0x553: Pop(2)
0x554: Pop(1); Push((bool) Stack[-1] == 0)
0x555: IF (Stack[-1] == 0) GOTO 0x558; Pop(1)

0x556: Stack[-4] = (bool) 1
0x557: Return(); Pop(2)

0x558: Push("noaccess")
0x559: @@ GetProperty(Stack[-1], Stack[-2])
0x55a: Pop(1)
0x55b: Push((int) 0)
0x55c: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x55d: Return(); Pop(2)

0x55e: PushEmpty(bool, int, cvector, cvector, cvector, cvector, string, bool, int, cvector, cvector, cvector, cvector, string)
0x55f: Pop(0); Push((bool) Stack[-15] == 0)
0x560: IF (Stack[-1] == 0) GOTO 0x562; Pop(1)

0x561: Return(); Pop(14)

0x562: @ IsDead(Stack[-7])
0x563: Pop(0)
0x564: Push(Stack[-7])
0x565: IF (Stack[-1] == 0) GOTO 0x567; Pop(1)

0x566: Return(); Pop(14)

0x567: @ GetSecondaryAnimationType(Stack[-6])
0x568: Pop(0)
0x569: Push((int) 0)
0x56a: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x56b: IF (Stack[-1] == 0) GOTO 0x56d; Pop(1)

0x56c: Return(); Pop(14)

0x56d: @@ GetPosition(Stack[-5])
0x56e: Pop(0)
0x56f: @ GetPosition(Stack[-4])
0x570: Pop(0)
0x571: @ GetDirection(Stack[-3])
0x572: Pop(0)
0x573: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0x574: Push(CvectorIndex(Stack[-2], 0))
0x575: Push(CvectorIndex(Stack[-4], 0))
0x576: Pop(2); Push(Stack[-2] * Stack[-1]);
0x577: Push(CvectorIndex(Stack[-3], 2))
0x578: Push(CvectorIndex(Stack[-5], 2))
0x579: Pop(2); Push(Stack[-2] * Stack[-1]);
0x57a: Pop(2); Push(Stack[-2] + Stack[-1]);
0x57b: Push((int) 0)
0x57c: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x57d: IF (Stack[-1] == 0) GOTO 0x580; Pop(1)

0x57e: Stack[-1] = "fhit"
0x57f: GOTO 0x581

0x580: Stack[-1] = "bhit"
0x581: Push("hit_react")
0x582: Push("1")
0x583: Pop(1); Push(Stack[-3] + Stack[-1]);
0x584: Push("2")
0x585: Pop(1); Push(Stack[-4] + Stack[-1]);
0x586: Push((int) -10)
0x587: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x588: Pop(4)
0x589: Return(); Pop(14)

0x58a: PushEmpty(cvector, object, int, bool, cvector, cvector, int, int, cvector, cvector, object, int, bool, cvector, cvector, int, int, cvector)
0x58b: PushEmpty(bool)
0x58c: Stack[-1] = (bool) 0
0x58d: PushEmpty(bool)
0x58e: Stack[-1] = (bool) 0
0x58f: Push(Stack[-23])
0x590: IF (Stack[-1] == 0) GOTO 0x595; Pop(1)

0x591: Push((int) 4)
0x592: Pop(1); Push((bool) Stack[-23] != Stack[-1])
0x593: IF (Stack[-1] == 0) GOTO 0x595; Pop(1)

0x594: Stack[-1] = (bool) 1
0x595: IF (Stack[-1] == 0) GOTO 0x59a; Pop(1)

0x596: Push((int) 5)
0x597: Pop(1); Push((bool) Stack[-22] != Stack[-1])
0x598: IF (Stack[-1] == 0) GOTO 0x59a; Pop(1)

0x599: Stack[-1] = (bool) 1
0x59a: IF (Stack[-1] == 0) GOTO 0x5c9; Pop(1)

0x59b: PushEmpty(cvector, cvector)
0x59c: PushEmpty(cvector, object)
0x59d: Stack[-1] = Stack[-25]
0x59e: Call2 0x4ad

0x59f: Stack[-3] = Stack[-2]
0x5a0: Pop(2)
0x5a1: Call2 0x67f

0x5a2: Stack[-11] = Stack[-2]
0x5a3: Pop(2)
0x5a4: @ CreateVectorVector(Stack[-8])
0x5a5: Pop(0)
0x5a6: Stack[-7] = (int) 1
0x5a7: Push("hit")
0x5a8: Pop(1); Push(Stack[-1] + Stack[-8]);
0x5a9: @ GetGeometryLocator(Stack[-1], Stack[-7], Stack[-6], Stack[-5])
0x5aa: Pop(1)
0x5ab: Pop(0); Push((bool) Stack[-6] == 0)
0x5ac: IF (Stack[-1] == 0) GOTO 0x5ae; Pop(1)

0x5ad: GOTO 0x5b7

0x5ae: Pop(0); Push(Stack[-4] | Stack[-9]);
0x5af: Push((float)0.70711)
0x5b0: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x5b1: IF (Stack[-1] == 0) GOTO 0x5b4; Pop(1)

0x5b2: @@ add(Stack[-5])
0x5b3: Pop(0)
0x5b4: Push((int) 1)
0x5b5: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x5b6: GOTO 0x5a7

0x5b7: @@ size(Stack[-3])
0x5b8: Pop(0)
0x5b9: Push(Stack[-3])
0x5ba: IF (Stack[-1] == 0) GOTO 0x5c8; Pop(1)

0x5bb: @ irand(Stack[-2], Stack[-3])
0x5bc: Pop(0)
0x5bd: @@ get(Stack[-1], Stack[-2])
0x5be: Pop(0)
0x5bf: PushEmpty(object, int, float, cvector, cvector)
0x5c0: Stack[-5] = Stack[-26]
0x5c1: Stack[-4] = Stack[-25]
0x5c2: Stack[-3] = Stack[-24]
0x5c3: Stack[-2] = Stack[-6]
0x5c4: Stack[-1] = -Stack[-14]; Pop(0);
0x5c5: Call2 0x5ce

0x5c6: Pop(5)
0x5c7: Return(); Pop(18)

0x5c8: Stack[-8] = 0
0x5c9: PushEmpty(object)
0x5ca: Stack[-1] = Stack[-22]
0x5cb: Call2 0x55e

0x5cc: Pop(1)
0x5cd: Return(); Pop(18)

0x5ce: PushEmpty(object, object, object, object)
0x5cf: @ GetScene(Stack[-2])
0x5d0: Pop(0)
0x5d1: Push("scripted")
0x5d2: Push("blood_dir.xml")
0x5d3: @ AddActorByType(Stack[-3], Stack[-2], Stack[-4], Stack[-8], Stack[-7], Stack[-1])
0x5d4: Pop(2)
0x5d5: PushEmpty(object)
0x5d6: Stack[-1] = Stack[-10]
0x5d7: Call2 0x55e

0x5d8: Pop(1)
0x5d9: Return(); Pop(4)

0x5da: Stack[-1] = 0
0x5db: Stack[-2] = 0
0x5dc: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x5dd: @@ GetPosition(Stack[-3])
0x5de: Pop(0)
0x5df: @ GetPosition(Stack[-2])
0x5e0: Pop(0)
0x5e1: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0x5e2: Push(CvectorIndex(Stack[-1], 0))
0x5e3: Push(CvectorIndex(Stack[-2], 2))
0x5e4: @ RotateAsync(Stack[-2], Stack[-1])
0x5e5: Pop(2)
0x5e6: Return(); Pop(6)

0x5e7: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x5e8: @@ GetPosition(Stack[-3])
0x5e9: Pop(0)
0x5ea: @ GetPosition(Stack[-2])
0x5eb: Pop(0)
0x5ec: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0x5ed: Push(CvectorIndex(Stack[-1], 0))
0x5ee: Push(CvectorIndex(Stack[-2], 2))
0x5ef: @ RotateAsync(Stack[-2], Stack[-1], Stack[-9])
0x5f0: Pop(2)
0x5f1: Return(); Pop(6)

0x5f2: PushEmpty(float, float, float, float)
0x5f3: @ GetEyesHeight(Stack[-2])
0x5f4: Pop(0)
0x5f5: @@ GetEyesHeight(Stack[-1])
0x5f6: Pop(0)
0x5f7: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x5f8: Return(); Pop(4)

0x5f9: PushEmpty(bool, int, bool, int, bool, float, cvector, cvector, bool, int, bool, int, bool, float, cvector, cvector)
0x5fa: @ IsExisting3DSound(Stack[-8], Stack[-17])
0x5fb: Pop(0)
0x5fc: Pop(0); Push((bool) Stack[-8] == 0)
0x5fd: IF (Stack[-1] == 0) GOTO 0x612; Pop(1)

0x5fe: Stack[-7] = (int) 0
0x5ff: Push((int) 1)
0x600: Pop(1); Push(Stack[-8] + Stack[-1]);
0x601: Pop(1); Push(Stack[-18] + Stack[-1]);
0x602: @ IsExisting3DSound(Stack[-7], Stack[-1])
0x603: Pop(1)
0x604: Pop(0); Push((bool) Stack[-6] == 0)
0x605: IF (Stack[-1] == 0) GOTO 0x607; Pop(1)

0x606: GOTO 0x60a

0x607: Push((int) 1)
0x608: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x609: GOTO 0x5ff

0x60a: Pop(0); Push((bool) Stack[-7] == 0)
0x60b: IF (Stack[-1] == 0) GOTO 0x60d; Pop(1)

0x60c: Return(); Pop(16)

0x60d: @ irand(Stack[-5], Stack[-7])
0x60e: Pop(0)
0x60f: Push((int) 1)
0x610: Pop(1); Push(Stack[-6] + Stack[-1]);
0x611: Stack[-18] = Stack[-18] + Stack[-1]; Pop(1);
0x612: @ Is3DSoundLoaded(Stack[-4], Stack[-17])
0x613: Pop(0)
0x614: Push(Stack[-4])
0x615: IF (Stack[-1] == 0) GOTO 0x621; Pop(1)

0x616: @ GetEyesHeight(Stack[-3])
0x617: Pop(0)
0x618: @ GetDirection(Stack[-2])
0x619: Pop(0)
0x61a: Push((int) 50)
0x61b: Stack[-2] = Stack[-3] * Stack[-1]; Pop(1);
0x61c: Push(CvectorIndex(Stack[-1], 1))
0x61d: Stack[-1] = Stack[-1] + Stack[-4]; Pop(0);
0x61e: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x61f: @ PlayGlobalSound(Stack[-17], Stack[-1])
0x620: Pop(0)
0x621: Return(); Pop(16)

0x622: PushEmpty()
0x623: Stack[-2] = (bool) 1
0x624: PushEmpty(bool)
0x625: Stack[-1] = (bool) 1
0x626: PushEmpty(bool)
0x627: Stack[-1] = (bool) 1
0x628: PushEmpty(bool)
0x629: Stack[-1] = (bool) 1
0x62a: PushEmpty(bool)
0x62b: Stack[-1] = (bool) 1
0x62c: PushEmpty(bool)
0x62d: Stack[-1] = (bool) 1
0x62e: PushEmpty(bool)
0x62f: Stack[-1] = (bool) 1
0x630: PushEmpty(bool)
0x631: Stack[-1] = (bool) 1
0x632: PushEmpty(bool)
0x633: Stack[-1] = (bool) 1
0x634: PushEmpty(bool)
0x635: Stack[-1] = (bool) 1
0x636: PushEmpty(bool)
0x637: Stack[-1] = (bool) 1
0x638: PushEmpty(bool)
0x639: Stack[-1] = (bool) 1
0x63a: Push("woman")
0x63b: Pop(1); Push((bool) Stack[-13] == Stack[-1])
0x63c: IF (Stack[-1] == 0) GOTO 0x641; Pop(1)

0x63d: Push("worker")
0x63e: Pop(1); Push((bool) Stack[-13] == Stack[-1])
0x63f: IF (Stack[-1] == 0) GOTO 0x641; Pop(1)

0x640: Stack[-1] = (bool) 0
0x641: IF (Stack[-1] == 0) GOTO 0x646; Pop(1)

0x642: Push("butcher")
0x643: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0x644: IF (Stack[-1] == 0) GOTO 0x646; Pop(1)

0x645: Stack[-1] = (bool) 0
0x646: IF (Stack[-1] == 0) GOTO 0x64b; Pop(1)

0x647: Push("wasted_girl")
0x648: Pop(1); Push((bool) Stack[-11] == Stack[-1])
0x649: IF (Stack[-1] == 0) GOTO 0x64b; Pop(1)

0x64a: Stack[-1] = (bool) 0
0x64b: IF (Stack[-1] == 0) GOTO 0x650; Pop(1)

0x64c: Push("boy")
0x64d: Pop(1); Push((bool) Stack[-10] == Stack[-1])
0x64e: IF (Stack[-1] == 0) GOTO 0x650; Pop(1)

0x64f: Stack[-1] = (bool) 0
0x650: IF (Stack[-1] == 0) GOTO 0x655; Pop(1)

0x651: Push("vaxxabitka")
0x652: Pop(1); Push((bool) Stack[-9] == Stack[-1])
0x653: IF (Stack[-1] == 0) GOTO 0x655; Pop(1)

0x654: Stack[-1] = (bool) 0
0x655: IF (Stack[-1] == 0) GOTO 0x65a; Pop(1)

0x656: Push("unosha")
0x657: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x658: IF (Stack[-1] == 0) GOTO 0x65a; Pop(1)

0x659: Stack[-1] = (bool) 0
0x65a: IF (Stack[-1] == 0) GOTO 0x65f; Pop(1)

0x65b: Push("wasted_male")
0x65c: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x65d: IF (Stack[-1] == 0) GOTO 0x65f; Pop(1)

0x65e: Stack[-1] = (bool) 0
0x65f: IF (Stack[-1] == 0) GOTO 0x664; Pop(1)

0x660: Push("alkash")
0x661: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x662: IF (Stack[-1] == 0) GOTO 0x664; Pop(1)

0x663: Stack[-1] = (bool) 0
0x664: IF (Stack[-1] == 0) GOTO 0x669; Pop(1)

0x665: Push("dohodyaga")
0x666: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x667: IF (Stack[-1] == 0) GOTO 0x669; Pop(1)

0x668: Stack[-1] = (bool) 0
0x669: IF (Stack[-1] == 0) GOTO 0x66e; Pop(1)

0x66a: Push("vaxxabit")
0x66b: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x66c: IF (Stack[-1] == 0) GOTO 0x66e; Pop(1)

0x66d: Stack[-1] = (bool) 0
0x66e: IF (Stack[-1] == 0) GOTO 0x673; Pop(1)

0x66f: Push("nudegirl")
0x670: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x671: IF (Stack[-1] == 0) GOTO 0x673; Pop(1)

0x672: Stack[-1] = (bool) 0
0x673: IF (Stack[-1] == 0) GOTO 0x678; Pop(1)

0x674: Push("morlok")
0x675: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x676: IF (Stack[-1] == 0) GOTO 0x678; Pop(1)

0x677: Stack[-2] = (bool) 0
0x678: Return(); Pop(0)

0x679: PushEmpty(object, object)
0x67a: @ self(Stack[-1])
0x67b: Pop(0)
0x67c: Stack[-3] = Stack[-1]
0x67d: Return(); Pop(2)

0x67e: Stack[-1] = 0
0x67f: PushEmpty(float, float)
0x680: Pop(0); Push(Stack[-3] | Stack[-3]);
0x681: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x682: Push((float)0.0)
0x683: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x684: IF (Stack[-1] == 0) GOTO 0x687; Pop(1)

0x685: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x686: Return(); Pop(2)

0x687: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x688: Return(); Pop(2)

0x689: PushEmpty(cvector, cvector)
0x68a: Stack[-1] = Stack[-3] - Stack[-4]; Pop(0);
0x68b: Stack[-5] = Stack[-1] | Stack[-1]; Pop(0);
0x68c: Return(); Pop(2)

0x68d: PushEmpty()
0x68e: Pop(0); Push((bool) Stack[-2] < Stack[-1])
0x68f: IF (Stack[-1] == 0) GOTO 0x692; Pop(1)

0x690: Stack[-3] = Stack[-2]
0x691: GOTO 0x693

0x692: Stack[-3] = Stack[-1]
0x693: Return(); Pop(0)

0x694: PushEmpty()
0x695: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x696: IF (Stack[-1] == 0) GOTO 0x699; Pop(1)

0x697: Stack[-4] = Stack[-2]
0x698: Return(); Pop(0)

0x699: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x69a: IF (Stack[-1] == 0) GOTO 0x69d; Pop(1)

0x69b: Stack[-4] = Stack[-1]
0x69c: Return(); Pop(0)

0x69d: Stack[-4] = Stack[-3]
0x69e: Return(); Pop(0)

0x69f: PushEmpty(object, object)
0x6a0: @ CreateObjectSet(Stack[-1])
0x6a1: Pop(0)
0x6a2: Stack[-3] = Stack[-1]
0x6a3: Return(); Pop(2)

0x6a4: Stack[-1] = 0
0x6a5: PushEmpty()
0x6a6: Push(CvectorIndex(Stack[-2], 0))
0x6a7: Push(CvectorIndex(Stack[-2], 0))
0x6a8: Pop(2); Push(Stack[-2] * Stack[-1]);
0x6a9: Push(CvectorIndex(Stack[-3], 2))
0x6aa: Push(CvectorIndex(Stack[-3], 2))
0x6ab: Pop(2); Push(Stack[-2] * Stack[-1]);
0x6ac: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x6ad: Return(); Pop(0)

0x6ae: PushEmpty()
0x6af: Push(CvectorIndex(Stack[-1], 0))
0x6b0: Push(CvectorIndex(Stack[-2], 0))
0x6b1: Pop(2); Push(Stack[-2] * Stack[-1]);
0x6b2: Push(CvectorIndex(Stack[-2], 2))
0x6b3: Push(CvectorIndex(Stack[-3], 2))
0x6b4: Pop(2); Push(Stack[-2] * Stack[-1]);
0x6b5: Pop(2); Push(Stack[-2] + Stack[-1]);
0x6b6: Stack[-3] = Sqrt(Stack[-1]); Pop(1);
0x6b7: Return(); Pop(0)

0x6b8: PushEmpty()
0x6b9: PushEmpty(float, cvector, cvector)
0x6ba: Stack[-2] = Stack[-5]
0x6bb: Stack[-1] = Stack[-4]
0x6bc: Call2 0x6a5

0x6bd: Pop(2)
0x6be: PushEmpty(float, cvector)
0x6bf: Stack[-1] = Stack[-5]
0x6c0: Call2 0x6ae

0x6c1: Pop(1)
0x6c2: PushEmpty(float, cvector)
0x6c3: Stack[-1] = Stack[-5]
0x6c4: Call2 0x6ae

0x6c5: Pop(1)
0x6c6: Pop(2); Push(Stack[-2] * Stack[-1]);
0x6c7: Stack[-5] = Stack[-2] / Stack[-1]; Pop(2);
0x6c8: Return(); Pop(0)

0x6c9: PushEmpty(object, object)
0x6ca: @ CreateFloatVector(Stack[-1])
0x6cb: Pop(0)
0x6cc: @@ add(Stack[-3])
0x6cd: Pop(0)
0x6ce: Push((int) 15)
0x6cf: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x6d0: Pop(1)
0x6d1: Return(); Pop(2)

0x6d2: Stack[-1] = 0
0x6d3: PushEmpty(object, object)
0x6d4: @ FindActor(Stack[-1], Stack[-4])
0x6d5: Pop(0)
0x6d6: Pop(0); Push((bool) Stack[-1] == 0)
0x6d7: IF (Stack[-1] == 0) GOTO 0x6da; Pop(1)

0x6d8: Stack[-5] = (bool) 0
0x6d9: Return(); Pop(2)

0x6da: @ Trigger(Stack[-1], Stack[-3])
0x6db: Pop(0)
0x6dc: Stack[-5] = (bool) 1
0x6dd: Return(); Pop(2)

0x6de: Stack[-1] = 0
0x6df: PushEmpty(bool, bool)
0x6e0: @ IsPlayerActor(Stack[-3], Stack[-1])
0x6e1: Pop(0)
0x6e2: Push(Stack[-1])
0x6e3: IF (Stack[-1] == 0) GOTO 0x6e7; Pop(1)

0x6e4: Push("attack")
0x6e5: @ PlayGlobalMusic(Stack[-1])
0x6e6: Pop(1)
0x6e7: Return(); Pop(2)

0x6e8: PushEmpty(object, object)
0x6e9: @ GetScene(Stack[-1])
0x6ea: Pop(0)
0x6eb: Push("battle")
0x6ec: PushEmpty(object)
0x6ed: Call2 0x679

0x6ee: Pop(0)
0x6ef: @ BroadcastMessage(Stack[-2], Stack[-1], Stack[-3])
0x6f0: Pop(2)
0x6f1: Return(); Pop(2)

0x6f2: Stack[-1] = 0
0x6f3: PushEmpty(int, int)
0x6f4: Push("branch")
0x6f5: @ GetVariable(Stack[-1], Stack[-2])
0x6f6: Pop(1)
0x6f7: Stack[-3] = Stack[-1]
0x6f8: Return(); Pop(2)

0x6f9: PushEmpty()
0x6fa: PushEmpty(int)
0x6fb: Call2 0x6f3

0x6fc: Pop(0)
0x6fd: Push((int) 1)
0x6fe: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x6ff: IF (Stack[-1] == 0) GOTO 0x703; Pop(1)

0x700: @ WorkWithCorpse(Stack[-1])
0x701: Pop(0)
0x702: GOTO 0x705

0x703: @ Barter(Stack[-1])
0x704: Pop(0)
0x705: Return(); Pop(0)

0x706: PushEmpty()
0x707: PushEmpty(object, int, float)
0x708: Stack[-3] = Stack[-7]
0x709: Stack[-2] = Stack[-6]
0x70a: Stack[-1] = Stack[-5]
0x70b: Call2 0x58a

0x70c: Pop(3)
0x70d: Return(); Pop(0)

0x70e: PushEmpty()
0x70f: PushEmpty(object, int, float, cvector, cvector)
0x710: Stack[-5] = Stack[-11]
0x711: Stack[-4] = Stack[-10]
0x712: Stack[-3] = Stack[-9]
0x713: Stack[-2] = Stack[-7]
0x714: Stack[-1] = Stack[-6]
0x715: Call2 0x5ce

0x716: Pop(5)
0x717: Return(); Pop(0)

0x718: PushEmpty(float, float)
0x719: Push("health")
0x71a: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x71b: IF (Stack[-1] == 0) GOTO 0x724; Pop(1)

0x71c: Push("health")
0x71d: @ GetProperty(Stack[-1], Stack[-2])
0x71e: Pop(1)
0x71f: Push((int) 0)
0x720: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x721: IF (Stack[-1] == 0) GOTO 0x724; Pop(1)

0x722: @ SignalDeath(Stack[-4])
0x723: Pop(0)
0x724: Return(); Pop(2)

0x725: PushEmpty()
0x726: PushEmpty(bool, object)
0x727: Stack[-1] = Stack[-3]
0x728: Call2 0x4c3

0x729: Pop(1)
0x72a: IF (Stack[-1] == 0) GOTO 0x732; Pop(1)

0x72b: PushEmpty(object)
0x72c: Call2 0x679

0x72d: Pop(0)
0x72e: Push((float)0.05)
0x72f: Push((bool) 1)
0x730: @ ReportReputationChange(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x731: Pop(3)
0x732: PushEmpty(object)
0x733: Stack[-1] = Stack[-2]
0x734: Call2 0x8a4

0x735: Pop(1)
0x736: Return(); Pop(0)

0x737: PushEmpty(string, string)
0x738: PushEmpty(bool, object, string)
0x739: Stack[-2] = Stack[-7]
0x73a: Stack[-1] = "class"
0x73b: Call2 0x4c8

0x73c: Pop(2)
0x73d: Pop(1); Push((bool) Stack[-1] == 0)
0x73e: IF (Stack[-1] == 0) GOTO 0x741; Pop(1)

0x73f: Stack[-5] = (bool) 0
0x740: Return(); Pop(2)

0x741: Push("class")
0x742: @@ GetProperty(Stack[-1], Stack[-2])
0x743: Pop(1)
0x744: PushEmpty(bool)
0x745: Stack[-1] = (bool) 1
0x746: PushEmpty(bool)
0x747: Stack[-1] = (bool) 1
0x748: PushEmpty(bool)
0x749: Stack[-1] = (bool) 1
0x74a: PushEmpty(bool)
0x74b: Stack[-1] = (bool) 1
0x74c: PushEmpty(bool)
0x74d: Stack[-1] = (bool) 1
0x74e: PushEmpty(bool)
0x74f: Stack[-1] = (bool) 1
0x750: PushEmpty(bool)
0x751: Stack[-1] = (bool) 1
0x752: PushEmpty(bool)
0x753: Stack[-1] = (bool) 1
0x754: PushEmpty(bool)
0x755: Stack[-1] = (bool) 1
0x756: PushEmpty(bool)
0x757: Stack[-1] = (bool) 1
0x758: Push("patrol")
0x759: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0x75a: IF (Stack[-1] == 0) GOTO 0x75f; Pop(1)

0x75b: Push("sanitar")
0x75c: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0x75d: IF (Stack[-1] == 0) GOTO 0x75f; Pop(1)

0x75e: Stack[-1] = (bool) 0
0x75f: IF (Stack[-1] == 0) GOTO 0x764; Pop(1)

0x760: Push("soldier")
0x761: Pop(1); Push((bool) Stack[-11] == Stack[-1])
0x762: IF (Stack[-1] == 0) GOTO 0x764; Pop(1)

0x763: Stack[-1] = (bool) 0
0x764: IF (Stack[-1] == 0) GOTO 0x769; Pop(1)

0x765: Push("woman")
0x766: Pop(1); Push((bool) Stack[-10] == Stack[-1])
0x767: IF (Stack[-1] == 0) GOTO 0x769; Pop(1)

0x768: Stack[-1] = (bool) 0
0x769: IF (Stack[-1] == 0) GOTO 0x76e; Pop(1)

0x76a: Push("wasted_girl")
0x76b: Pop(1); Push((bool) Stack[-9] == Stack[-1])
0x76c: IF (Stack[-1] == 0) GOTO 0x76e; Pop(1)

0x76d: Stack[-1] = (bool) 0
0x76e: IF (Stack[-1] == 0) GOTO 0x773; Pop(1)

0x76f: Push("vaxxabitka")
0x770: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x771: IF (Stack[-1] == 0) GOTO 0x773; Pop(1)

0x772: Stack[-1] = (bool) 0
0x773: IF (Stack[-1] == 0) GOTO 0x778; Pop(1)

0x774: Push("vaxxabit")
0x775: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x776: IF (Stack[-1] == 0) GOTO 0x778; Pop(1)

0x777: Stack[-1] = (bool) 0
0x778: IF (Stack[-1] == 0) GOTO 0x77d; Pop(1)

0x779: Push("little_girl")
0x77a: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x77b: IF (Stack[-1] == 0) GOTO 0x77d; Pop(1)

0x77c: Stack[-1] = (bool) 0
0x77d: IF (Stack[-1] == 0) GOTO 0x782; Pop(1)

0x77e: Push("girl")
0x77f: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x780: IF (Stack[-1] == 0) GOTO 0x782; Pop(1)

0x781: Stack[-1] = (bool) 0
0x782: IF (Stack[-1] == 0) GOTO 0x787; Pop(1)

0x783: Push("dohodyaga")
0x784: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x785: IF (Stack[-1] == 0) GOTO 0x787; Pop(1)

0x786: Stack[-1] = (bool) 0
0x787: IF (Stack[-1] == 0) GOTO 0x78c; Pop(1)

0x788: Push("nudegirl")
0x789: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x78a: IF (Stack[-1] == 0) GOTO 0x78c; Pop(1)

0x78b: Stack[-1] = (bool) 0
0x78c: IF (Stack[-1] == 0) GOTO 0x78f; Pop(1)

0x78d: Stack[-5] = (bool) 1
0x78e: Return(); Pop(2)

0x78f: Push(Stack[-3])
0x790: IF (Stack[-1] == 0) GOTO 0x793; Pop(1)

0x791: Stack[-5] = (bool) 0
0x792: Return(); Pop(2)

0x793: Stack[-5] = (bool) 1
0x794: PushEmpty(bool)
0x795: Stack[-1] = (bool) 1
0x796: PushEmpty(bool)
0x797: Stack[-1] = (bool) 1
0x798: PushEmpty(bool)
0x799: Stack[-1] = (bool) 1
0x79a: PushEmpty(bool)
0x79b: Stack[-1] = (bool) 1
0x79c: PushEmpty(bool)
0x79d: Stack[-1] = (bool) 1
0x79e: Push("worker")
0x79f: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x7a0: IF (Stack[-1] == 0) GOTO 0x7a5; Pop(1)

0x7a1: Push("butcher")
0x7a2: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x7a3: IF (Stack[-1] == 0) GOTO 0x7a5; Pop(1)

0x7a4: Stack[-1] = (bool) 0
0x7a5: IF (Stack[-1] == 0) GOTO 0x7aa; Pop(1)

0x7a6: Push("boy")
0x7a7: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x7a8: IF (Stack[-1] == 0) GOTO 0x7aa; Pop(1)

0x7a9: Stack[-1] = (bool) 0
0x7aa: IF (Stack[-1] == 0) GOTO 0x7af; Pop(1)

0x7ab: Push("unosha")
0x7ac: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x7ad: IF (Stack[-1] == 0) GOTO 0x7af; Pop(1)

0x7ae: Stack[-1] = (bool) 0
0x7af: IF (Stack[-1] == 0) GOTO 0x7b4; Pop(1)

0x7b0: Push("wasted_male")
0x7b1: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x7b2: IF (Stack[-1] == 0) GOTO 0x7b4; Pop(1)

0x7b3: Stack[-1] = (bool) 0
0x7b4: IF (Stack[-1] == 0) GOTO 0x7b9; Pop(1)

0x7b5: Push("alkash")
0x7b6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7b7: IF (Stack[-1] == 0) GOTO 0x7b9; Pop(1)

0x7b8: Stack[-1] = (bool) 0
0x7b9: IF (Stack[-1] == 0) GOTO 0x7be; Pop(1)

0x7ba: Push("morlok")
0x7bb: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7bc: IF (Stack[-1] == 0) GOTO 0x7be; Pop(1)

0x7bd: Stack[-5] = (bool) 0
0x7be: Return(); Pop(2)

0x7bf: Push(GlobalVars[0])
0x7c0: PushEmpty(object)
0x7c1: Call2 0x69f

0x7c2: Stack[-2] = Stack[-1]
0x7c3: Pop(1)
0x7c4: GlobalVars[0] = Stack[-1]; Pop(1)
0x7c5: Return(); Pop(0)

0x7c6: PushEmpty()
0x7c7: PushEmpty(object, bool)
0x7c8: Stack[-2] = Stack[-4]
0x7c9: Stack[-1] = Stack[-3]
0x7ca: Push(-2, 3); TaskCall(2)
0x7cb: Call2 0x11f

0x7cc: Pop(-2, 3); TaskReturn
0x7cd: Pop(2)
0x7ce: @ ResetAAS()
0x7cf: Pop(0)
0x7d0: Return(); Pop(0)

0x7d1: PushEmpty(bool, bool)
0x7d2: Pop(0); Push((bool) Stack[-3] == 0)
0x7d3: IF (Stack[-1] == 0) GOTO 0x7d5; Pop(1)

0x7d4: Return(); Pop(2)

0x7d5: Push(GlobalVars[0])
0x7d6: @@ in(Stack[-2], Stack[-4])
0x7d7: Pop(1)
0x7d8: Pop(0); Push((bool) Stack[-1] == 0)
0x7d9: IF (Stack[-1] == 0) GOTO 0x7dd; Pop(1)

0x7da: Push(GlobalVars[0])
0x7db: @@ add(Stack[-4])
0x7dc: Pop(1)
0x7dd: PushEmpty(bool, object)
0x7de: Stack[-1] = Stack[-5]
0x7df: Call2 0x4c3

0x7e0: Pop(1)
0x7e1: IF (Stack[-1] == 0) GOTO 0x7e8; Pop(1)

0x7e2: PushEmpty(object)
0x7e3: Call2 0x679

0x7e4: Pop(0)
0x7e5: Push((float)0.0)
0x7e6: @ ReportReputationChange(Stack[-5], Stack[-2], Stack[-1])
0x7e7: Pop(2)
0x7e8: Return(); Pop(2)

0x7e9: PushEmpty()
0x7ea: PushEmpty(object)
0x7eb: Stack[-1] = Stack[-2]
0x7ec: Call2 0x7d1

0x7ed: Pop(1)
0x7ee: PushEmpty(object, bool)
0x7ef: Stack[-2] = Stack[-3]
0x7f0: Stack[-1] = (bool) 1
0x7f1: Call2 0x7c6

0x7f2: Pop(2)
0x7f3: Return(); Pop(0)

0x7f4: PushEmpty(bool, bool)
0x7f5: Push(GlobalVars[0])
0x7f6: @@ in(Stack[-2], Stack[-4])
0x7f7: Pop(1)
0x7f8: Push(Stack[-1])
0x7f9: IF (Stack[-1] == 0) GOTO 0x800; Pop(1)

0x7fa: PushEmpty(object, bool)
0x7fb: Stack[-2] = Stack[-5]
0x7fc: Stack[-1] = (bool) 1
0x7fd: Call2 0x7c6

0x7fe: Pop(2)
0x7ff: GOTO 0x808

0x800: PushEmpty(object)
0x801: Stack[-1] = Stack[-4]
0x802: Push(-1, 2); TaskCall(1)
0x803: Call2 0x78

0x804: Pop(-1, 2); TaskReturn
0x805: Pop(1)
0x806: @ ResetAAS()
0x807: Pop(0)
0x808: Return(); Pop(2)

0x809: PushEmpty()
0x80a: PushEmpty(float, object)
0x80b: Stack[-1] = Stack[-3]
0x80c: Call2 0x4b4

0x80d: Pop(1)
0x80e: Push((float)40000.0)
0x80f: Stack[-4] = Stack[-2] <= Stack[-1]; Pop(2);
0x810: Return(); Pop(0)

0x811: PushEmpty(float, string, float, float, string, float)
0x812: PushEmpty(bool, object)
0x813: Stack[-1] = Stack[-9]
0x814: Call2 0x546

0x815: Pop(1)
0x816: Pop(1); Push((bool) Stack[-1] == 0)
0x817: IF (Stack[-1] == 0) GOTO 0x81a; Pop(1)

0x818: Stack[-8] = (bool) 0
0x819: Return(); Pop(6)

0x81a: PushEmpty(bool, object)
0x81b: Stack[-1] = Stack[-9]
0x81c: Call2 0x4c3

0x81d: Pop(1)
0x81e: IF (Stack[-1] == 0) GOTO 0x825; Pop(1)

0x81f: Push("reputation")
0x820: @@ GetProperty(Stack[-1], Stack[-4])
0x821: Pop(1)
0x822: Push((float)0.33)
0x823: Stack[-9] = Stack[-4] < Stack[-1]; Pop(1);
0x824: Return(); Pop(6)

0x825: PushEmpty(bool, object, string)
0x826: Stack[-2] = Stack[-10]
0x827: Stack[-1] = "class"
0x828: Call2 0x4c8

0x829: Pop(2)
0x82a: Pop(1); Push((bool) Stack[-1] == 0)
0x82b: IF (Stack[-1] == 0) GOTO 0x82e; Pop(1)

0x82c: Stack[-8] = (bool) 0
0x82d: Return(); Pop(6)

0x82e: Push("class")
0x82f: @@ GetProperty(Stack[-1], Stack[-3])
0x830: Pop(1)
0x831: PushEmpty(bool)
0x832: Stack[-1] = (bool) 1
0x833: PushEmpty(bool)
0x834: Stack[-1] = (bool) 1
0x835: Push("bomber")
0x836: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x837: IF (Stack[-1] == 0) GOTO 0x83c; Pop(1)

0x838: Push("hunter")
0x839: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x83a: IF (Stack[-1] == 0) GOTO 0x83c; Pop(1)

0x83b: Stack[-1] = (bool) 0
0x83c: IF (Stack[-1] == 0) GOTO 0x841; Pop(1)

0x83d: Push("grabitel")
0x83e: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x83f: IF (Stack[-1] == 0) GOTO 0x841; Pop(1)

0x840: Stack[-1] = (bool) 0
0x841: IF (Stack[-1] == 0) GOTO 0x844; Pop(1)

0x842: Stack[-8] = (bool) 1
0x843: Return(); Pop(6)

0x844: PushEmpty(bool, object, string)
0x845: Stack[-2] = Stack[-10]
0x846: Stack[-1] = "disease"
0x847: Call2 0x4c8

0x848: Pop(2)
0x849: Pop(1); Push((bool) Stack[-1] == 0)
0x84a: IF (Stack[-1] == 0) GOTO 0x84d; Pop(1)

0x84b: Stack[-8] = (bool) 0
0x84c: Return(); Pop(6)

0x84d: PushEmpty(bool)
0x84e: Stack[-1] = (bool) 1
0x84f: PushEmpty(bool, string)
0x850: Stack[-1] = Stack[-5]
0x851: Call2 0x622

0x852: Pop(1)
0x853: IF (Stack[-1] == 0) GOTO 0x858; Pop(1)

0x854: Push("dog")
0x855: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x856: IF (Stack[-1] == 0) GOTO 0x858; Pop(1)

0x857: Stack[-1] = (bool) 0
0x858: IF (Stack[-1] == 0) GOTO 0x85f; Pop(1)

0x859: Push("disease")
0x85a: @@ GetProperty(Stack[-1], Stack[-2])
0x85b: Pop(1)
0x85c: Push((int) 0)
0x85d: Stack[-9] = Stack[-2] > Stack[-1]; Pop(1);
0x85e: Return(); Pop(6)

0x85f: Stack[-8] = (bool) 0
0x860: Return(); Pop(6)

0x861: PushEmpty(bool, bool)
0x862: PushEmpty(bool, object)
0x863: Stack[-1] = Stack[-5]
0x864: Call2 0x546

0x865: Pop(1)
0x866: Pop(1); Push((bool) Stack[-1] == 0)
0x867: IF (Stack[-1] == 0) GOTO 0x86a; Pop(1)

0x868: Stack[-4] = (bool) 0
0x869: Return(); Pop(2)

0x86a: Push(GlobalVars[0])
0x86b: @@ in(Stack[-2], Stack[-4])
0x86c: Pop(1)
0x86d: Push(Stack[-1])
0x86e: IF (Stack[-1] == 0) GOTO 0x871; Pop(1)

0x86f: Stack[-4] = (bool) 1
0x870: Return(); Pop(2)

0x871: PushEmpty(bool, object)
0x872: Stack[-1] = Stack[-5]
0x873: Call2 0x811

0x874: Stack[-6] = Stack[-2]
0x875: Pop(2)
0x876: Return(); Pop(2)

0x877: PushEmpty()
0x878: PushEmpty(object)
0x879: Stack[-1] = Stack[-2]
0x87a: Call2 0x89e

0x87b: Pop(1)
0x87c: Return(); Pop(0)

0x87d: PushEmpty(bool, bool)
0x87e: PushEmpty(bool, object, bool)
0x87f: Stack[-2] = Stack[-7]
0x880: Stack[-1] = !Stack[-6]; Pop(0);
0x881: Call2 0x737

0x882: Pop(2)
0x883: IF (Stack[-1] == 0) GOTO 0x895; Pop(1)

0x884: @ CanSee(Stack[-1], Stack[-5])
0x885: Pop(0)
0x886: PushEmpty(bool)
0x887: Stack[-1] = (bool) 1
0x888: Push(Stack[-2])
0x889: IF (Stack[-1] == 0) GOTO 0x892; Pop(1)

0x88a: PushEmpty(float, object)
0x88b: Stack[-1] = Stack[-8]
0x88c: Call2 0x4b4

0x88d: Pop(1)
0x88e: Push((float)490000.0)
0x88f: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x890: IF (Stack[-1] == 0) GOTO 0x892; Pop(1)

0x891: Stack[-1] = (bool) 0
0x892: IF (Stack[-1] == 0) GOTO 0x895; Pop(1)

0x893: Stack[-6] = (bool) 1
0x894: Return(); Pop(2)

0x895: Stack[-6] = (bool) 0
0x896: Return(); Pop(2)

0x897: PushEmpty(int, int)
0x898: Push("d11q01SoldierAttack")
0x899: @ GetVariable(Stack[-1], Stack[-2])
0x89a: Pop(1)
0x89b: Push((int) 0)
0x89c: Stack[-4] = Stack[-2] != Stack[-1]; Pop(1);
0x89d: Return(); Pop(2)

0x89e: PushEmpty()
0x89f: PushEmpty(object)
0x8a0: Stack[-1] = Stack[-2]
0x8a1: Call2 0x7f4

0x8a2: Pop(1)
0x8a3: Return(); Pop(0)

0x8a4: PushEmpty(object, object)
0x8a5: @ GetScene(Stack[-1])
0x8a6: Pop(0)
0x8a7: PushEmpty(object)
0x8a8: Call2 0x679

0x8a9: Pop(0)
0x8aa: @@ RemoveStationaryActor(Stack[-1])
0x8ab: Pop(1)
0x8ac: PushEmpty(bool, string, string)
0x8ad: Stack[-2] = "quest_d11_01"
0x8ae: Stack[-1] = "soldier_death"
0x8af: Call2 0x6d3

0x8b0: Pop(3)
0x8b1: PushEmpty(object)
0x8b2: Stack[-1] = Stack[-4]
0x8b3: Push(-1, 0); TaskCall(7)
0x8b4: Call2 0x405

0x8b5: Pop(-1, 0); TaskReturn
0x8b6: Pop(1)
0x8b7: Return(); Pop(2)

0x8b8: Stack[-1] = 0
