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
	PlayGlobalSound (4 args)
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
	RumblePlay (2 args)
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

RunOp = 0x277
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
		EVENT_17 Op = 0xf1 Vars = (object)
		EVENT_30 Op = 0x105 Vars = (object, object, bool)
		EVENT_41 Op = 0x119 Vars = (object)
	GTASK_2 Vars = (object, object, bool) Params = 2
		EVENT_3 Op = 0x1b2 Vars = (object)
		EVENT_1 Op = 0x1c0 Vars = (object)
		EVENT_17 Op = 0x252 Vars = (object)
		EVENT_30 Op = 0x26a Vars = (object, object, bool)
	GTASK_3  Params = 0
		EVENT_1 Op = 0x27b Vars = (object)
		EVENT_17 Op = 0x291 Vars = (object)
		EVENT_26 Op = 0x298 Vars = (string)
	GTASK_4 Vars = (object, bool) Params = 1
		EVENT_2 Op = 0x2b7 Vars = (object)
		EVENT_17 Op = 0x2be Vars = (object)
		EVENT_26 Op = 0x2c5 Vars = (string)
	GTASK_5 Vars = (object) Params = 2
		EVENT_6 Op = 0x330 Vars = ()
		EVENT_2 Op = 0x333 Vars = (object)
		EVENT_17 Op = 0x339 Vars = (object)
		EVENT_26 Op = 0x340 Vars = (string)
	GTASK_6 Vars = (cvector, cvector) Params = 1
		EVENT_3 Op = 0x364 Vars = (object)
		EVENT_17 Op = 0x382 Vars = (object)
		EVENT_30 Op = 0x396 Vars = (object, object, bool)
		EVENT_1 Op = 0x3a3 Vars = (object)
	GTASK_7  Params = 1
		EVENT_0 Op = 0x420 Vars = (object)
		EVENT_22 Op = 0x49f Vars = (object, int, float, float)
		EVENT_16 Op = 0x4a1 Vars = (object, string)
		EVENT_41 Op = 0x4a3 Vars = (object)

Events:
EVENT_22 Op = 0x713 Vars = (object, int, float, float)
EVENT_43 Op = 0x71b Vars = (object, int, float, float, cvector, cvector)
EVENT_16 Op = 0x725 Vars = (object, string)
EVENT_41 Op = 0x732 Vars = (object)

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
0xd: Call2 0x54c

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
0x26: Call2 0x732

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
0x3b: Call2 0x5e2

0x3c: Pop(1)
0x3d: Return(); Pop(0)

0x3e: PushEmpty()
0x3f: PushEmpty(bool, object)
0x40: Stack[-1] = Stack[-3]
0x41: Call2 0x54c

0x42: Pop(1)
0x43: Pop(1); Push((bool) Stack[-1] == 0)
0x44: IF (Stack[-1] == 0) GOTO 0x4a; Pop(1)

0x45: PushEmpty(object)
0x46: Stack[-1] = Stack[-2]
0x47: Call2 0x7de

0x48: Pop(1)
0x49: Return(); Pop(0)

0x4a: PushEmpty()
0x4b: Call2 0x18

0x4c: Pop(0)
0x4d: PushEmpty(object)
0x4e: Stack[-1] = Stack[-2]
0x4f: Call2 0x7f6

0x50: Pop(1)
0x51: Return(); Pop(0)

0x52: PushEmpty()
0x53: PushEmpty(bool, object, object, bool)
0x54: Stack[-3] = Stack[-7]
0x55: Stack[-2] = Stack[-6]
0x56: Stack[-1] = Stack[-5]
0x57: Call2 0x88a

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
0x62: Call2 0x86e

0x63: Pop(1)
0x64: IF (Stack[-1] == 0) GOTO 0x6c; Pop(1)

0x65: PushEmpty()
0x66: Call2 0x18

0x67: Pop(0)
0x68: PushEmpty(object)
0x69: Stack[-1] = Stack[-2]
0x6a: Call2 0x884

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
0x7c: Call2 0x6ec

0x7d: Pop(1)
0x7e: @ CanSee(Stack[-1], Stack[-0])
0x7f: Pop(0)
0x80: Push( Stack[1 + Tasks[-1].StackPointer] )
0x81: IF (Stack[-1] == 0) GOTO 0x8f; Pop(1)

0x82: PushEmpty(bool, object)
0x83: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x84: Call2 0x816

0x85: Pop(1)
0x86: IF (Stack[-1] == 0) GOTO 0x8d; Pop(1)

0x87: PushEmpty(object, bool)
0x88: Stack[-2] = Stack[0 + Tasks[-1].StackPointer]
0x89: Stack[-1] = (bool) 1
0x8a: Call2 0x7d3

0x8b: Pop(2)
0x8c: Return(); Pop(6)

0x8d: @ Face(Stack[-0])
0x8e: Pop(0)
0x8f: PushEmpty()
0x90: Call2 0x6f5

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
0x9e: Push(CVector(0.0, 150.0, 0.0))
0x9f: Push((int) 800)
0xa0: Push((int) 100000)
0xa1: @ PlayGlobalSound(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xa2: Pop(4)
0xa3: Push("all")
0xa4: Push("shoot_end")
0xa5: @ PlayAnimation(Stack[-2], Stack[-1])
0xa6: Pop(2)
0xa7: @ WaitForAnimEnd(Stack[-3])
0xa8: Pop(0)
0xa9: Pop(0); Push((bool) Stack[-3] == 0)
0xaa: IF (Stack[-1] == 0) GOTO 0xae; Pop(1)

0xab: @ StopAsync()
0xac: Pop(0)
0xad: Return(); Pop(6)

0xae: Push("all")
0xaf: Push("shoot_end")
0xb0: @ LockAnimationEnd(Stack[-2], Stack[-1])
0xb1: Pop(2)
0xb2: Stack[-2] = (int) 0
0xb3: Stack[-1] = (int) 0
0xb4: Push((int) 20)
0xb5: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xb6: IF (Stack[-1] == 0) GOTO 0xe8; Pop(1)

0xb7: PushEmpty(object)
0xb8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb9: Call2 0x6ec

0xba: Pop(1)
0xbb: Push((float)0.5)
0xbc: @ Sleep(Stack[-1], Stack[-4])
0xbd: Pop(1)
0xbe: Pop(0); Push((bool) Stack[-3] == 0)
0xbf: IF (Stack[-1] == 0) GOTO 0xc1; Pop(1)

0xc0: Return(); Pop(6)

0xc1: @ CanSee(Stack[-1], Stack[-0])
0xc2: Pop(0)
0xc3: Push( Stack[1 + Tasks[-1].StackPointer] )
0xc4: IF (Stack[-1] == 0) GOTO 0xd7; Pop(1)

0xc5: Stack[-2] = (int) 0
0xc6: PushEmpty(bool, object)
0xc7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc8: Call2 0x816

0xc9: Pop(1)
0xca: IF (Stack[-1] == 0) GOTO 0xd4; Pop(1)

0xcb: PushEmpty()
0xcc: Call2 0x112

0xcd: Pop(0)
0xce: PushEmpty(object, bool)
0xcf: Stack[-2] = Stack[0 + Tasks[-1].StackPointer]
0xd0: Stack[-1] = (bool) 0
0xd1: Call2 0x7d3

0xd2: Pop(2)
0xd3: Return(); Pop(6)

0xd4: @ Face(Stack[-0])
0xd5: Pop(0)
0xd6: GOTO 0xe5

0xd7: @ StopAsync()
0xd8: Pop(0)
0xd9: Push((int) 1)
0xda: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0xdb: Push((int) 4)
0xdc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xdd: IF (Stack[-1] == 0) GOTO 0xe5; Pop(1)

0xde: Push("all")
0xdf: Push("attack_off")
0xe0: @ PlayAnimation(Stack[-2], Stack[-1])
0xe1: Pop(2)
0xe2: @ WaitForAnimEnd()
0xe3: Pop(0)
0xe4: Return(); Pop(6)

0xe5: Push((int) 1)
0xe6: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0xe7: GOTO 0xb4

0xe8: PushEmpty()
0xe9: Call2 0x112

0xea: Pop(0)
0xeb: PushEmpty(object, bool)
0xec: Stack[-2] = Stack[-9]
0xed: Stack[-1] = (bool) 0
0xee: Call2 0x7d3

0xef: Pop(2)
0xf0: Return(); Pop(6)

0xf1: PushEmpty()
0xf2: PushEmpty(bool, object)
0xf3: Stack[-1] = Stack[-3]
0xf4: Call2 0x54c

0xf5: Pop(1)
0xf6: Pop(1); Push((bool) Stack[-1] == 0)
0xf7: IF (Stack[-1] == 0) GOTO 0xfd; Pop(1)

0xf8: PushEmpty(object)
0xf9: Stack[-1] = Stack[-2]
0xfa: Call2 0x7de

0xfb: Pop(1)
0xfc: Return(); Pop(0)

0xfd: PushEmpty()
0xfe: Call2 0x112

0xff: Pop(0)
0x100: PushEmpty(object)
0x101: Stack[-1] = Stack[-2]
0x102: Call2 0x7f6

0x103: Pop(1)
0x104: Return(); Pop(0)

0x105: PushEmpty()
0x106: PushEmpty(bool, object, object, bool)
0x107: Stack[-3] = Stack[-7]
0x108: Stack[-2] = Stack[-6]
0x109: Stack[-1] = Stack[-5]
0x10a: Call2 0x88a

0x10b: Pop(3)
0x10c: IF (Stack[-1] == 0) GOTO 0x111; Pop(1)

0x10d: PushEmpty(object)
0x10e: Stack[-1] = Stack[-4]
0x10f: Call2 0xf1

0x110: Pop(1)
0x111: Return(); Pop(0)

0x112: @ StopAsync()
0x113: Pop(0)
0x114: @ StopGroup0()
0x115: Pop(0)
0x116: @ Stop()
0x117: Pop(0)
0x118: Return(); Pop(0)

0x119: PushEmpty()
0x11a: PushEmpty()
0x11b: Call2 0x112

0x11c: Pop(0)
0x11d: PushEmpty(object)
0x11e: Stack[-1] = Stack[-2]
0x11f: Call2 0x732

0x120: Pop(1)
0x121: Return(); Pop(0)

0x122: PushEmpty(bool, bool, bool, bool)
0x123: Stack[0 + Tasks[-1].StackPointer] = Stack[-6]
0x124: PushEmpty(object)
0x125: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x126: Call2 0x6ec

0x127: Pop(1)
0x128: PushEmpty()
0x129: Call2 0x6f5

0x12a: Pop(0)
0x12b: @ Face(Stack[-0])
0x12c: Pop(0)
0x12d: Push(Stack[-5])
0x12e: IF (Stack[-1] == 0) GOTO 0x135; Pop(1)

0x12f: Push("all")
0x130: Push("attack_on")
0x131: @ PlayAnimation(Stack[-2], Stack[-1])
0x132: Pop(2)
0x133: @ WaitForAnimEnd()
0x134: Pop(0)
0x135: Push("all")
0x136: Push("attack_on")
0x137: @ LockAnimationEnd(Stack[-2], Stack[-1])
0x138: Pop(2)
0x139: Push((bool) 1)
0x13a: @ SetAttackState(Stack[-1])
0x13b: Pop(1)
0x13c: PushEmpty(bool, object)
0x13d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x13e: Call2 0x54c

0x13f: Pop(1)
0x140: IF (Stack[-1] == 0) GOTO 0x1a6; Pop(1)

0x141: @ CanSee(Stack[-1], Stack[-0])
0x142: Pop(0)
0x143: Push(Stack[-1])
0x144: IF (Stack[-1] == 0) GOTO 0x14d; Pop(1)

0x145: PushEmpty(object)
0x146: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x147: Call2 0x6ec

0x148: Pop(1)
0x149: PushEmpty()
0x14a: Call2 0x1d6

0x14b: Pop(0)
0x14c: GOTO 0x19c

0x14d: PushEmpty(object)
0x14e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x14f: Call2 0x5e2

0x150: Pop(1)
0x151: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x152: Push("all")
0x153: Push("hunt")
0x154: @ PlayAnimation(Stack[-2], Stack[-1])
0x155: Pop(2)
0x156: @ WaitForAnimEnd(Stack[-2])
0x157: Pop(0)
0x158: Pop(0); Push((bool) Stack[-2] == 0)
0x159: IF (Stack[-1] == 0) GOTO 0x164; Pop(1)

0x15a: Pop(0); Push(( Stack[1 + Tasks[-1].StackPointer] != 0 )
0x15b: IF (Stack[-1] == 0) GOTO 0x15f; Pop(1)

0x15c: PushEmpty()
0x15d: Call2 0x1d1

0x15e: Pop(0)
0x15f: Push("all")
0x160: Push("attack_on")
0x161: @ LockAnimationEnd(Stack[-2], Stack[-1])
0x162: Pop(2)
0x163: GOTO 0x13c

0x164: PushEmpty(bool, object)
0x165: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x166: Call2 0x54c

0x167: Pop(1)
0x168: Pop(1); Push((bool) Stack[-1] == 0)
0x169: IF (Stack[-1] == 0) GOTO 0x16b; Pop(1)

0x16a: GOTO 0x1a6

0x16b: @ CanSee(Stack[-1], Stack[-0])
0x16c: Pop(0)
0x16d: Push(Stack[-1])
0x16e: IF (Stack[-1] == 0) GOTO 0x176; Pop(1)

0x16f: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x170: @ Face(Stack[-0])
0x171: Pop(0)
0x172: PushEmpty()
0x173: Call2 0x1d6

0x174: Pop(0)
0x175: GOTO 0x19c

0x176: Push("all")
0x177: Push("attack_on")
0x178: @ LockAnimationEnd(Stack[-2], Stack[-1])
0x179: Pop(2)
0x17a: Push((int) 3)
0x17b: @ Sleep(Stack[-1], Stack[-3])
0x17c: Pop(1)
0x17d: Pop(0); Push((bool) Stack[-2] == 0)
0x17e: IF (Stack[-1] == 0) GOTO 0x189; Pop(1)

0x17f: Pop(0); Push(( Stack[1 + Tasks[-1].StackPointer] != 0 )
0x180: IF (Stack[-1] == 0) GOTO 0x184; Pop(1)

0x181: PushEmpty()
0x182: Call2 0x1d1

0x183: Pop(0)
0x184: Push("all")
0x185: Push("attack_on")
0x186: @ LockAnimationEnd(Stack[-2], Stack[-1])
0x187: Pop(2)
0x188: GOTO 0x13c

0x189: PushEmpty(bool, object)
0x18a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x18b: Call2 0x54c

0x18c: Pop(1)
0x18d: Pop(1); Push((bool) Stack[-1] == 0)
0x18e: IF (Stack[-1] == 0) GOTO 0x190; Pop(1)

0x18f: GOTO 0x1a6

0x190: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x191: @ CanSee(Stack[-1], Stack[-0])
0x192: Pop(0)
0x193: Push(Stack[-1])
0x194: IF (Stack[-1] == 0) GOTO 0x19b; Pop(1)

0x195: @ Face(Stack[-0])
0x196: Pop(0)
0x197: PushEmpty()
0x198: Call2 0x1d6

0x199: Pop(0)
0x19a: GOTO 0x19c

0x19b: GOTO 0x1a6

0x19c: Pop(0); Push(( Stack[1 + Tasks[-1].StackPointer] != 0 )
0x19d: IF (Stack[-1] == 0) GOTO 0x1a2; Pop(1)

0x19e: PushEmpty()
0x19f: Call2 0x1d1

0x1a0: Pop(0)
0x1a1: GOTO 0x1a5

0x1a2: Push((int) 2)
0x1a3: @ Sleep(Stack[-1])
0x1a4: Pop(1)
0x1a5: GOTO 0x13c

0x1a6: Push((bool) 0)
0x1a7: @ SetAttackState(Stack[-1])
0x1a8: Pop(1)
0x1a9: @ StopAsync()
0x1aa: Pop(0)
0x1ab: Push("all")
0x1ac: Push("attack_off")
0x1ad: @ PlayAnimation(Stack[-2], Stack[-1])
0x1ae: Pop(2)
0x1af: @ WaitForAnimEnd()
0x1b0: Pop(0)
0x1b1: Return(); Pop(4)

0x1b2: PushEmpty()
0x1b3: PushEmpty(bool)
0x1b4: Stack[-1] = (bool) 0
0x1b5: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1b6: IF (Stack[-1] == 0) GOTO 0x1ba; Pop(1)

0x1b7: Pop(0); Push((bool) Stack[-2] == Stack[0 + Tasks[-1].StackPointer])
0x1b8: IF (Stack[-1] == 0) GOTO 0x1ba; Pop(1)

0x1b9: Stack[-1] = (bool) 1
0x1ba: IF (Stack[-1] == 0) GOTO 0x1bf; Pop(1)

0x1bb: PushEmpty(object)
0x1bc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1bd: Call2 0x5e2

0x1be: Pop(1)
0x1bf: Return(); Pop(0)

0x1c0: PushEmpty()
0x1c1: PushEmpty(bool)
0x1c2: Stack[-1] = (bool) 0
0x1c3: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1c4: IF (Stack[-1] == 0) GOTO 0x1c8; Pop(1)

0x1c5: Pop(0); Push((bool) Stack[-2] == Stack[0 + Tasks[-1].StackPointer])
0x1c6: IF (Stack[-1] == 0) GOTO 0x1c8; Pop(1)

0x1c7: Stack[-1] = (bool) 1
0x1c8: IF (Stack[-1] == 0) GOTO 0x1d0; Pop(1)

0x1c9: Push("@Stop hunt")
0x1ca: @ Trace(Stack[-1])
0x1cb: Pop(1)
0x1cc: @ StopAnimation()
0x1cd: Pop(0)
0x1ce: @ StopGroup0()
0x1cf: Pop(0)
0x1d0: Return(); Pop(0)

0x1d1: Stack[0 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer]
0x1d2: Stack[1 + Tasks[-1].StackPointer] = 0
0x1d3: @ Face(Stack[-0])
0x1d4: Pop(0)
0x1d5: Return(); Pop(0)

0x1d6: PushEmpty(cvector, cvector, bool, cvector, cvector, object, object, cvector, object, int, cvector, float, object, object, cvector, cvector, bool, cvector, cvector, object, object, cvector, object, int, cvector, float, object, object)
0x1d7: PushEmpty(object)
0x1d8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1d9: Call2 0x6ec

0x1da: Pop(1)
0x1db: @ ReportAttack(Stack[-0])
0x1dc: Pop(0)
0x1dd: PushEmpty(bool, object)
0x1de: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1df: Call2 0x4c9

0x1e0: Pop(1)
0x1e1: IF (Stack[-1] == 0) GOTO 0x1e7; Pop(1)

0x1e2: PushEmpty(object)
0x1e3: Call2 0x67f

0x1e4: Pop(0)
0x1e5: @ SendPlayerEnemy(Stack[-0], Stack[-1])
0x1e6: Pop(1)
0x1e7: @ GetDirection(Stack[-14])
0x1e8: Pop(0)
0x1e9: PushEmpty(cvector, object)
0x1ea: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1eb: Call2 0x4b3

0x1ec: Stack[-15] = Stack[-2]
0x1ed: Pop(2)
0x1ee: PushEmpty(float, cvector, cvector)
0x1ef: Stack[-2] = Stack[-17]
0x1f0: Stack[-1] = Stack[-16]
0x1f1: Call2 0x6be

0x1f2: Pop(2)
0x1f3: Push((float)0.99939)
0x1f4: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x1f5: IF (Stack[-1] == 0) GOTO 0x1f7; Pop(1)

0x1f6: Return(); Pop(28)

0x1f7: PushEmpty()
0x1f8: Call2 0x6f5

0x1f9: Pop(0)
0x1fa: Push("all")
0x1fb: Push("attack_begin1")
0x1fc: @ PlayAnimation(Stack[-2], Stack[-1])
0x1fd: Pop(2)
0x1fe: Push("attack")
0x1ff: @ GetGeometryLocator(Stack[-1], Stack[-13], Stack[-12], Stack[-11])
0x200: Pop(1)
0x201: Push(Stack[-12])
0x202: IF (Stack[-1] == 0) GOTO 0x20c; Pop(1)

0x203: @ GetScene(Stack[-8])
0x204: Pop(0)
0x205: Push("light-dynamic")
0x206: Push("soldier_fire.xml")
0x207: @ AddActorByType(Stack[-11], Stack[-2], Stack[-10], Stack[-13], Stack[-12], Stack[-1])
0x208: Pop(2)
0x209: Stack[-8] = 0
0x20a: Stack[-9] = 0
0x20b: GOTO 0x20e

0x20c: @ WaitForAnimEnd()
0x20d: Pop(0)
0x20e: Push("shot")
0x20f: Push(CVector(0.0, 150.0, 0.0))
0x210: Push((int) 800)
0x211: Push((int) 100000)
0x212: @ PlayGlobalSound(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x213: Pop(4)
0x214: @ GetDirection(Stack[-14])
0x215: Pop(0)
0x216: PushEmpty(cvector, object)
0x217: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x218: Call2 0x4b3

0x219: Stack[-15] = Stack[-2]
0x21a: Pop(2)
0x21b: Push(CvectorIndex(Stack[-13], 1))
0x21c: PushEmpty(float, object)
0x21d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x21e: Call2 0x5f8

0x21f: Pop(1)
0x220: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x221: CvectorIndex(Stack[-14], 1) = Stack[-1];
0x222: Push((float)0.03491)
0x223: @ RandVecCone3D(Stack[-8], Stack[-14], Stack[-1])
0x224: Pop(1)
0x225: @ GetVictimMaterial(Stack[-7], Stack[-6], Stack[-5], Stack[-4])
0x226: Pop(0)
0x227: Pop(0); Push(( Stack[-6] != 0 )
0x228: IF (Stack[-1] == 0) GOTO 0x246; Pop(1)

0x229: Pop(0); Push((bool) Stack[-6] == Stack[0 + Tasks[-1].StackPointer])
0x22a: IF (Stack[-1] == 0) GOTO 0x237; Pop(1)

0x22b: PushEmpty(float, object, float, int)
0x22c: Stack[-3] = Stack[0 + Tasks[-1].StackPointer]
0x22d: Stack[-2] = (float) 1.5
0x22e: Stack[-1] = (int) 1
0x22f: Call2 0x4da

0x230: Stack[-7] = Stack[-4]
0x231: Pop(4)
0x232: Push((int) 2)
0x233: Push((float)1.5)
0x234: @ ReportHit(Stack[-0], Stack[-2], Stack[-5], Stack[-1])
0x235: Pop(2)
0x236: GOTO 0x246

0x237: Push((int) -1)
0x238: Pop(1); Push((bool) Stack[-6] != Stack[-1])
0x239: IF (Stack[-1] == 0) GOTO 0x246; Pop(1)

0x23a: @ GetScene(Stack[-2])
0x23b: Pop(0)
0x23c: Push("scripted")
0x23d: Push(CVector(0.0, 0.0, 1.0))
0x23e: Push("richochet.xml")
0x23f: @ AddActorByType(Stack[-4], Stack[-3], Stack[-5], Stack[-7], Stack[-2], Stack[-1])
0x240: Pop(3)
0x241: Push("Material")
0x242: @@ SetScriptProperty(Stack[-1], Stack[-6])
0x243: Pop(1)
0x244: Stack[-1] = 0
0x245: Stack[-2] = 0
0x246: Push("all")
0x247: Push("attack_end1")
0x248: @ PlayAnimation(Stack[-2], Stack[-1])
0x249: Pop(2)
0x24a: @ WaitForAnimEnd()
0x24b: Pop(0)
0x24c: Push("all")
0x24d: Push("attack_on")
0x24e: @ LockAnimationEnd(Stack[-2], Stack[-1])
0x24f: Pop(2)
0x250: Return(); Pop(28)

0x251: Stack[-6] = 0
0x252: PushEmpty()
0x253: PushEmpty(bool, object)
0x254: Stack[-1] = Stack[-3]
0x255: Call2 0x54c

0x256: Pop(1)
0x257: Pop(1); Push((bool) Stack[-1] == 0)
0x258: IF (Stack[-1] == 0) GOTO 0x25a; Pop(1)

0x259: Return(); Pop(0)

0x25a: PushEmpty(object)
0x25b: Stack[-1] = Stack[-2]
0x25c: Call2 0x7de

0x25d: Pop(1)
0x25e: Pop(0); Push((bool) Stack[-1] == Stack[0 + Tasks[-1].StackPointer])
0x25f: IF (Stack[-1] == 0) GOTO 0x262; Pop(1)

0x260: Stack[1 + Tasks[-1].StackPointer] = 0
0x261: GOTO 0x269

0x262: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x263: Push( Stack[2 + Tasks[-1].StackPointer] )
0x264: IF (Stack[-1] == 0) GOTO 0x269; Pop(1)

0x265: @ StopAnimation()
0x266: Pop(0)
0x267: @ StopGroup0()
0x268: Pop(0)
0x269: Return(); Pop(0)

0x26a: PushEmpty()
0x26b: PushEmpty(bool, object, object, bool)
0x26c: Stack[-3] = Stack[-7]
0x26d: Stack[-2] = Stack[-6]
0x26e: Stack[-1] = Stack[-5]
0x26f: Call2 0x88a

0x270: Pop(3)
0x271: IF (Stack[-1] == 0) GOTO 0x276; Pop(1)

0x272: PushEmpty(object)
0x273: Stack[-1] = Stack[-4]
0x274: Call2 0x252

0x275: Pop(1)
0x276: Return(); Pop(0)

0x277: @ Hold()
0x278: Pop(0)
0x279: GOTO 0x277

0x27a: Return(); Pop(0)

0x27b: PushEmpty(bool, bool)
0x27c: @ IsPlayerActor(Stack[-3], Stack[-1])
0x27d: Pop(0)
0x27e: Push(Stack[-1])
0x27f: IF (Stack[-1] == 0) GOTO 0x290; Pop(1)

0x280: PushEmpty(bool)
0x281: Call2 0x8a4

0x282: Pop(0)
0x283: IF (Stack[-1] == 0) GOTO 0x28a; Pop(1)

0x284: PushEmpty(bool, string, string)
0x285: Stack[-2] = "quest_d11_01"
0x286: Stack[-1] = "soldier_attack"
0x287: Call2 0x6e0

0x288: Pop(3)
0x289: GOTO 0x290

0x28a: PushEmpty(object)
0x28b: Stack[-1] = Stack[-4]
0x28c: Push(-1, 2); TaskCall(4)
0x28d: Call2 0x2a6

0x28e: Pop(-1, 2); TaskReturn
0x28f: Pop(1)
0x290: Return(); Pop(2)

0x291: PushEmpty()
0x292: PushEmpty(bool, string, string)
0x293: Stack[-2] = "quest_d11_01"
0x294: Stack[-1] = "soldier_attack"
0x295: Call2 0x6e0

0x296: Pop(3)
0x297: Return(); Pop(0)

0x298: PushEmpty()
0x299: Push("attack")
0x29a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x29b: IF (Stack[-1] == 0) GOTO 0x2a5; Pop(1)

0x29c: PushEmpty(object)
0x29d: PushEmpty(object)
0x29e: Call2 0x4c2

0x29f: Stack[-2] = Stack[-1]
0x2a0: Pop(1)
0x2a1: Push(-1, 2); TaskCall(6)
0x2a2: Call2 0x34e

0x2a3: Pop(-1, 2); TaskReturn
0x2a4: Pop(1)
0x2a5: Return(); Pop(0)

0x2a6: PushEmpty()
0x2a7: PushEmpty(bool, object)
0x2a8: Stack[-1] = Stack[-3]
0x2a9: Push(-2, 1); TaskCall(5)
0x2aa: Call2 0x31a

0x2ab: Pop(-2, 1); TaskReturn
0x2ac: Pop(1)
0x2ad: IF (Stack[-1] == 0) GOTO 0x2b6; Pop(1)

0x2ae: PushEmpty(object)
0x2af: Stack[-1] = Stack[-2]
0x2b0: Call2 0x2d8

0x2b1: Pop(1)
0x2b2: Push("all")
0x2b3: Push("attack_off")
0x2b4: @ PlayAnimation(Stack[-2], Stack[-1])
0x2b5: Pop(2)
0x2b6: Return(); Pop(0)

0x2b7: PushEmpty()
0x2b8: Pop(0); Push((bool) Stack[-1] == Stack[0 + Tasks[-1].StackPointer])
0x2b9: IF (Stack[-1] == 0) GOTO 0x2bd; Pop(1)

0x2ba: PushEmpty()
0x2bb: Call2 0x316

0x2bc: Pop(0)
0x2bd: Return(); Pop(0)

0x2be: PushEmpty()
0x2bf: PushEmpty(bool, string, string)
0x2c0: Stack[-2] = "quest_d11_01"
0x2c1: Stack[-1] = "soldier_attack"
0x2c2: Call2 0x6e0

0x2c3: Pop(3)
0x2c4: Return(); Pop(0)

0x2c5: PushEmpty()
0x2c6: Push("attack")
0x2c7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2c8: IF (Stack[-1] == 0) GOTO 0x2d2; Pop(1)

0x2c9: PushEmpty(object)
0x2ca: PushEmpty(object)
0x2cb: Call2 0x4c2

0x2cc: Stack[-2] = Stack[-1]
0x2cd: Pop(1)
0x2ce: Push(-1, 2); TaskCall(6)
0x2cf: Call2 0x34e

0x2d0: Pop(-1, 2); TaskReturn
0x2d1: Pop(1)
0x2d2: Return(); Pop(0)

0x2d3: Push("all")
0x2d4: Push("attack_on")
0x2d5: @ LockAnimationEnd(Stack[-2], Stack[-1])
0x2d6: Pop(2)
0x2d7: Return(); Pop(0)

0x2d8: PushEmpty(cvector, cvector, cvector, cvector)
0x2d9: Stack[0 + Tasks[-1].StackPointer] = Stack[-5]
0x2da: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x2db: PushEmpty()
0x2dc: Call2 0x309

0x2dd: Pop(0)
0x2de: @ GetDirection(Stack[-2])
0x2df: Pop(0)
0x2e0: PushEmpty(cvector, object)
0x2e1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2e2: Call2 0x4b3

0x2e3: Stack[-3] = Stack[-2]
0x2e4: Pop(2)
0x2e5: PushEmpty(float, cvector, cvector)
0x2e6: Stack[-2] = Stack[-5]
0x2e7: Stack[-1] = Stack[-4]
0x2e8: Call2 0x6be

0x2e9: Pop(2)
0x2ea: Push((float)0.70711)
0x2eb: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x2ec: IF (Stack[-1] == 0) GOTO 0x2f5; Pop(1)

0x2ed: PushEmpty(object, float)
0x2ee: Stack[-2] = Stack[0 + Tasks[-1].StackPointer]
0x2ef: Stack[-1] = (float) 4.71239
0x2f0: Call2 0x5ed

0x2f1: Pop(2)
0x2f2: PushEmpty()
0x2f3: Call2 0x2d3

0x2f4: Pop(0)
0x2f5: Push((float)0.5)
0x2f6: @ Sleep(Stack[-1])
0x2f7: Pop(1)
0x2f8: PushEmpty(bool)
0x2f9: Stack[-1] = (bool) 0
0x2fa: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == 0)
0x2fb: IF (Stack[-1] == 0) GOTO 0x302; Pop(1)

0x2fc: PushEmpty(bool, object)
0x2fd: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2fe: Call2 0x54c

0x2ff: Pop(1)
0x300: IF (Stack[-1] == 0) GOTO 0x302; Pop(1)

0x301: Stack[-1] = (bool) 1
0x302: IF (Stack[-1] == 0) GOTO 0x2de; Pop(1)

0x303: @ StopAsync()
0x304: Pop(0)
0x305: Push("spine")
0x306: @ UnlookAsync(Stack[-1])
0x307: Pop(1)
0x308: Return(); Pop(4)

0x309: PushEmpty(float, float, cvector, float, float, cvector)
0x30a: @ GetEyesHeight(Stack[-3])
0x30b: Pop(0)
0x30c: @@ GetEyesHeight(Stack[-2])
0x30d: Pop(0)
0x30e: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x30f: Push(CvectorIndex(Stack[-1], 1))
0x310: Stack[-1] = Stack[-3] - Stack[-4]; Pop(0);
0x311: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x312: Push("spine")
0x313: @ DirLookAsyncRel(Stack[-0], Stack[-1], Stack[-2])
0x314: Pop(1)
0x315: Return(); Pop(6)

0x316: @ StopGroup0()
0x317: Pop(0)
0x318: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x319: Return(); Pop(0)

0x31a: PushEmpty(bool, bool)
0x31b: Stack[0 + Tasks[-1].StackPointer] = Stack[-3]
0x31c: PushEmpty(object)
0x31d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x31e: Call2 0x5e2

0x31f: Pop(1)
0x320: Push("all")
0x321: Push("attack_on")
0x322: @ PlayAnimation(Stack[-2], Stack[-1])
0x323: Pop(2)
0x324: @ WaitForAnimEnd(Stack[-1])
0x325: Pop(0)
0x326: Pop(0); Push((bool) Stack[-1] == 0)
0x327: IF (Stack[-1] == 0) GOTO 0x32a; Pop(1)

0x328: Stack[-4] = (bool) 0
0x329: Return(); Pop(2)

0x32a: Push("all")
0x32b: Push("attack_on")
0x32c: @ LockAnimationEnd(Stack[-2], Stack[-1])
0x32d: Pop(2)
0x32e: Stack[-4] = (bool) 1
0x32f: Return(); Pop(2)

0x330: @ StopAnimation()
0x331: Pop(0)
0x332: Return(); Pop(0)

0x333: PushEmpty()
0x334: Pop(0); Push((bool) Stack[-1] == Stack[0 + Tasks[-1].StackPointer])
0x335: IF (Stack[-1] == 0) GOTO 0x338; Pop(1)

0x336: @ StopAnimation()
0x337: Pop(0)
0x338: Return(); Pop(0)

0x339: PushEmpty()
0x33a: PushEmpty(bool, string, string)
0x33b: Stack[-2] = "quest_d11_01"
0x33c: Stack[-1] = "soldier_attack"
0x33d: Call2 0x6e0

0x33e: Pop(3)
0x33f: Return(); Pop(0)

0x340: PushEmpty()
0x341: Push("attack")
0x342: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x343: IF (Stack[-1] == 0) GOTO 0x34d; Pop(1)

0x344: PushEmpty(object)
0x345: PushEmpty(object)
0x346: Call2 0x4c2

0x347: Stack[-2] = Stack[-1]
0x348: Pop(1)
0x349: Push(-1, 2); TaskCall(6)
0x34a: Call2 0x34e

0x34b: Pop(-1, 2); TaskReturn
0x34c: Pop(1)
0x34d: Return(); Pop(0)

0x34e: PushEmpty()
0x34f: PushEmpty()
0x350: Call2 0x7cc

0x351: Pop(0)
0x352: PushEmpty(object)
0x353: Stack[-1] = Stack[-2]
0x354: Call2 0x382

0x355: Pop(1)
0x356: PushEmpty()
0x357: Call2 0x35b

0x358: Pop(0)
0x359: GOTO 0x356

0x35a: Return(); Pop(0)

0x35b: PushEmpty()
0x35c: Call2 0x7cc

0x35d: Pop(0)
0x35e: PushEmpty()
0x35f: Call2 0x3b1

0x360: Pop(0)
0x361: GOTO 0x35e

0x362: Return(); Pop(0)

0x363: Return(); Pop(0)

0x364: PushEmpty(bool, bool)
0x365: PushEmpty(bool, object)
0x366: Stack[-1] = Stack[-5]
0x367: Call2 0x54c

0x368: Pop(1)
0x369: Pop(1); Push((bool) Stack[-1] == 0)
0x36a: IF (Stack[-1] == 0) GOTO 0x36c; Pop(1)

0x36b: Return(); Pop(2)

0x36c: PushEmpty(bool, object)
0x36d: Stack[-1] = Stack[-5]
0x36e: Call2 0x81e

0x36f: Pop(1)
0x370: Pop(1); Push((bool) Stack[-1] == 0)
0x371: IF (Stack[-1] == 0) GOTO 0x378; Pop(1)

0x372: Push(GlobalVars[0])
0x373: @@ in(Stack[-2], Stack[-4])
0x374: Pop(1)
0x375: Pop(0); Push((bool) Stack[-1] == 0)
0x376: IF (Stack[-1] == 0) GOTO 0x378; Pop(1)

0x377: Return(); Pop(2)

0x378: PushEmpty()
0x379: Call2 0x405

0x37a: Pop(0)
0x37b: PushEmpty(object)
0x37c: Stack[-1] = Stack[-4]
0x37d: Push(-1, 1); TaskCall(0)
0x37e: Call2 0x0

0x37f: Pop(-1, 1); TaskReturn
0x380: Pop(1)
0x381: Return(); Pop(2)

0x382: PushEmpty()
0x383: PushEmpty(bool, object)
0x384: Stack[-1] = Stack[-3]
0x385: Call2 0x54c

0x386: Pop(1)
0x387: Pop(1); Push((bool) Stack[-1] == 0)
0x388: IF (Stack[-1] == 0) GOTO 0x38e; Pop(1)

0x389: PushEmpty(object)
0x38a: Stack[-1] = Stack[-2]
0x38b: Call2 0x7de

0x38c: Pop(1)
0x38d: Return(); Pop(0)

0x38e: PushEmpty()
0x38f: Call2 0x405

0x390: Pop(0)
0x391: PushEmpty(object)
0x392: Stack[-1] = Stack[-2]
0x393: Call2 0x7f6

0x394: Pop(1)
0x395: Return(); Pop(0)

0x396: PushEmpty()
0x397: PushEmpty(bool, object, object, bool)
0x398: Stack[-3] = Stack[-7]
0x399: Stack[-2] = Stack[-6]
0x39a: Stack[-1] = Stack[-5]
0x39b: Call2 0x88a

0x39c: Pop(3)
0x39d: IF (Stack[-1] == 0) GOTO 0x3a2; Pop(1)

0x39e: PushEmpty(object)
0x39f: Stack[-1] = Stack[-4]
0x3a0: Call2 0x382

0x3a1: Pop(1)
0x3a2: Return(); Pop(0)

0x3a3: PushEmpty()
0x3a4: PushEmpty(bool, object)
0x3a5: Stack[-1] = Stack[-3]
0x3a6: Call2 0x86e

0x3a7: Pop(1)
0x3a8: IF (Stack[-1] == 0) GOTO 0x3b0; Pop(1)

0x3a9: PushEmpty()
0x3aa: Call2 0x405

0x3ab: Pop(0)
0x3ac: PushEmpty(object)
0x3ad: Stack[-1] = Stack[-2]
0x3ae: Call2 0x8ab

0x3af: Pop(1)
0x3b0: Return(); Pop(0)

0x3b1: PushEmpty(int, bool, cvector, object, int, bool, cvector, object)
0x3b2: @ GetPFPosition(Stack[-1])
0x3b3: Pop(0)
0x3b4: @ GetDirection(Stack[-0])
0x3b5: Pop(0)
0x3b6: PushEmpty()
0x3b7: Call2 0x40a

0x3b8: Pop(0)
0x3b9: Push((int) 10)
0x3ba: @ irand(Stack[-5], Stack[-1])
0x3bb: Pop(1)
0x3bc: Push((int) 5)
0x3bd: Pop(1); Push(Stack[-5] + Stack[-1]);
0x3be: @ Sleep(Stack[-1], Stack[-4])
0x3bf: Pop(1)
0x3c0: Push(Stack[-3])
0x3c1: IF (Stack[-1] == 0) GOTO 0x3c6; Pop(1)

0x3c2: PushEmpty()
0x3c3: Call2 0x363

0x3c4: Pop(0)
0x3c5: GOTO 0x403

0x3c6: PushEmpty()
0x3c7: Call2 0x40a

0x3c8: Pop(0)
0x3c9: @ GetPFPosition(Stack[-2])
0x3ca: Pop(0)
0x3cb: PushEmpty(float, cvector, cvector)
0x3cc: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x3cd: Stack[-1] = Stack[-5]
0x3ce: Call2 0x68f

0x3cf: Pop(2)
0x3d0: Push((int) 40000)
0x3d1: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x3d2: IF (Stack[-1] == 0) GOTO 0x3f5; Pop(1)

0x3d3: @ FindPathTo(Stack[-1], Stack[-1])
0x3d4: Pop(0)
0x3d5: Pop(0); Push(( Stack[-1] != 0 )
0x3d6: IF (Stack[-1] == 0) GOTO 0x3f0; Pop(1)

0x3d7: @ RotatePath(Stack[-1], Stack[-3])
0x3d8: Pop(0)
0x3d9: Pop(0); Push((bool) Stack[-3] == 0)
0x3da: IF (Stack[-1] == 0) GOTO 0x3dc; Pop(1)

0x3db: GOTO 0x402

0x3dc: Push((bool) 0)
0x3dd: @ FollowPath(Stack[-2], Stack[-1], Stack[-4])
0x3de: Pop(1)
0x3df: Pop(0); Push((bool) Stack[-3] == 0)
0x3e0: IF (Stack[-1] == 0) GOTO 0x3e2; Pop(1)

0x3e1: GOTO 0x402

0x3e2: Push(CvectorIndex(Stack[-0], 0))
0x3e3: Push(CvectorIndex(Stack[-0], 2))
0x3e4: @ Rotate(Stack[-2], Stack[-1], Stack[-5])
0x3e5: Pop(2)
0x3e6: Pop(0); Push((bool) Stack[-3] == 0)
0x3e7: IF (Stack[-1] == 0) GOTO 0x3e9; Pop(1)

0x3e8: GOTO 0x402

0x3e9: @ WaitForAnimEnd(Stack[-3])
0x3ea: Pop(0)
0x3eb: Pop(0); Push((bool) Stack[-3] == 0)
0x3ec: IF (Stack[-1] == 0) GOTO 0x3ee; Pop(1)

0x3ed: GOTO 0x402

0x3ee: GOTO 0x403

0x3ef: GOTO 0x3f3

0x3f0: Push((int) 1)
0x3f1: @ Sleep(Stack[-1])
0x3f2: Pop(1)
0x3f3: Stack[-1] = 0
0x3f4: GOTO 0x402

0x3f5: Push(CvectorIndex(Stack[-0], 0))
0x3f6: Push(CvectorIndex(Stack[-0], 2))
0x3f7: @ Rotate(Stack[-2], Stack[-1], Stack[-5])
0x3f8: Pop(2)
0x3f9: Pop(0); Push((bool) Stack[-3] == 0)
0x3fa: IF (Stack[-1] == 0) GOTO 0x3fc; Pop(1)

0x3fb: GOTO 0x402

0x3fc: @ WaitForAnimEnd(Stack[-3])
0x3fd: Pop(0)
0x3fe: Pop(0); Push((bool) Stack[-3] == 0)
0x3ff: IF (Stack[-1] == 0) GOTO 0x401; Pop(1)

0x400: GOTO 0x402

0x401: GOTO 0x403

0x402: GOTO 0x3c6

0x403: GOTO 0x3b6

0x404: Return(); Pop(8)

0x405: @ StopGroup0()
0x406: Pop(0)
0x407: @ Stop()
0x408: Pop(0)
0x409: Return(); Pop(0)

0x40a: Return(); Pop(0)

0x40b: PushEmpty()
0x40c: PushEmpty(object)
0x40d: Stack[-1] = Stack[-2]
0x40e: Call2 0x411

0x40f: Pop(1)
0x410: Return(); Pop(0)

0x411: PushEmpty()
0x412: EventDisable(0)
0x413: PushEmpty(object)
0x414: Stack[-1] = Stack[-2]
0x415: Call2 0x42a

0x416: Pop(1)
0x417: Push((int) 50)
0x418: Push((int) 40)
0x419: @ SetRTEnvelope(Stack[-2], Stack[-1])
0x41a: Pop(2)
0x41b: EventEnable(0)
0x41c: @ Hold()
0x41d: Pop(0)
0x41e: GOTO 0x41c

0x41f: Return(); Pop(0)

0x420: PushEmpty(bool, bool)
0x421: @ IsOverrideActive(Stack[-1])
0x422: Pop(0)
0x423: Pop(0); Push((bool) Stack[-1] == 0)
0x424: IF (Stack[-1] == 0) GOTO 0x429; Pop(1)

0x425: PushEmpty(object)
0x426: Stack[-1] = Stack[-4]
0x427: Call2 0x706

0x428: Pop(1)
0x429: Return(); Pop(2)

0x42a: PushEmpty(cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector, cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector)
0x42b: Pop(0); Push((bool) Stack[-21] == 0)
0x42c: IF (Stack[-1] == 0) GOTO 0x432; Pop(1)

0x42d: PushEmpty(string)
0x42e: Stack[-1] = "fdie"
0x42f: Call2 0x485

0x430: Pop(1)
0x431: GOTO 0x484

0x432: @@ GetPosition(Stack[-10])
0x433: Pop(0)
0x434: @ GetPosition(Stack[-9])
0x435: Pop(0)
0x436: @ GetDirection(Stack[-8])
0x437: Pop(0)
0x438: Stack[-7] = Stack[-9] - Stack[-10]; Pop(0);
0x439: Push(CvectorIndex(Stack[-7], 0))
0x43a: Push(CvectorIndex(Stack[-9], 0))
0x43b: Pop(2); Push(Stack[-2] * Stack[-1]);
0x43c: Push(CvectorIndex(Stack[-8], 2))
0x43d: Push(CvectorIndex(Stack[-10], 2))
0x43e: Pop(2); Push(Stack[-2] * Stack[-1]);
0x43f: Pop(2); Push(Stack[-2] + Stack[-1]);
0x440: Push((int) 0)
0x441: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x442: IF (Stack[-1] == 0) GOTO 0x445; Pop(1)

0x443: Stack[-6] = "fdie"
0x444: GOTO 0x446

0x445: Stack[-6] = "bdie"
0x446: @ RemoveRTEnvelope()
0x447: Pop(0)
0x448: @ SetDeathState()
0x449: Pop(0)
0x44a: @ Stop()
0x44b: Pop(0)
0x44c: @ StopAsync()
0x44d: Pop(0)
0x44e: Stack[-5] = Stack[-21]
0x44f: Push("GetScriptProperty")
0x450: Push((int) 2)
0x451: Pop(2); Push(IsFuncExist(Stack[-23], Stack[-2], Stack[-1]))
0x452: IF (Stack[-1] == 0) GOTO 0x45e; Pop(1)

0x453: Push("Owner")
0x454: @@ HasScriptProperty(Stack[-5], Stack[-1])
0x455: Pop(1)
0x456: Push(Stack[-4])
0x457: IF (Stack[-1] == 0) GOTO 0x45e; Pop(1)

0x458: Push("Owner")
0x459: @@ GetScriptProperty(Stack[-6], Stack[-1])
0x45a: Pop(1)
0x45b: Pop(0); Push((bool) Stack[-5] == 0)
0x45c: IF (Stack[-1] == 0) GOTO 0x45e; Pop(1)

0x45d: Stack[-5] = Stack[-21]
0x45e: Push("@GetEyesHeight")
0x45f: Push((int) 1)
0x460: Pop(2); Push(IsFuncExist(Stack[-7], Stack[-2], Stack[-1]))
0x461: IF (Stack[-1] == 0) GOTO 0x46d; Pop(1)

0x462: @@ GetEyesHeight(Stack[-2])
0x463: Pop(0)
0x464: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x465: Push(CvectorIndex(Stack[-1], 1))
0x466: Stack[-1] = Stack[-3]
0x467: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x468: Push("head")
0x469: @ LookAsync(Stack[-22], Stack[-1], Stack[-2])
0x46a: Pop(1)
0x46b: Stack[-3] = (bool) 1
0x46c: GOTO 0x46e

0x46d: Stack[-3] = (bool) 0
0x46e: PushEmpty(string)
0x46f: Stack[-1] = Stack[-7]
0x470: Call2 0x5ff

0x471: Pop(1)
0x472: Push("all")
0x473: @ PlayAnimation(Stack[-1], Stack[-7])
0x474: Pop(1)
0x475: @ WaitForAnimEnd()
0x476: Pop(0)
0x477: Push(Stack[-3])
0x478: IF (Stack[-1] == 0) GOTO 0x47e; Pop(1)

0x479: @ StopAsync()
0x47a: Pop(0)
0x47b: Push("head")
0x47c: @ UnlookAsync(Stack[-1])
0x47d: Pop(1)
0x47e: Push("all")
0x47f: @ LockAnimationEnd(Stack[-1], Stack[-7])
0x480: Pop(1)
0x481: @ RemoveEnvelope()
0x482: Pop(0)
0x483: Stack[-5] = 0
0x484: Return(); Pop(20)

0x485: PushEmpty()
0x486: @ RemoveRTEnvelope()
0x487: Pop(0)
0x488: @ SetDeathState()
0x489: Pop(0)
0x48a: @ Stop()
0x48b: Pop(0)
0x48c: @ StopAsync()
0x48d: Pop(0)
0x48e: @ StopSecondaryAnimation()
0x48f: Pop(0)
0x490: PushEmpty(string)
0x491: Stack[-1] = Stack[-2]
0x492: Call2 0x5ff

0x493: Pop(1)
0x494: Push("all")
0x495: @ PlayAnimation(Stack[-1], Stack[-2])
0x496: Pop(1)
0x497: @ WaitForAnimEnd()
0x498: Pop(0)
0x499: Push("all")
0x49a: @ LockAnimationEnd(Stack[-1], Stack[-2])
0x49b: Pop(1)
0x49c: @ RemoveEnvelope()
0x49d: Pop(0)
0x49e: Return(); Pop(0)

0x49f: PushEmpty()
0x4a0: Return(); Pop(0)

0x4a1: PushEmpty()
0x4a2: Return(); Pop(0)

0x4a3: PushEmpty()
0x4a4: Return(); Pop(0)

0x4a5: PushEmpty()
0x4a6: Push((int) 2)
0x4a7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4a8: IF (Stack[-1] == 0) GOTO 0x4ac; Pop(1)

0x4a9: Stack[-2] = "fire"
0x4aa: Return(); Pop(0)

0x4ab: GOTO 0x4b1

0x4ac: Push((int) 1)
0x4ad: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4ae: IF (Stack[-1] == 0) GOTO 0x4b1; Pop(1)

0x4af: Stack[-2] = "bullet"
0x4b0: Return(); Pop(0)

0x4b1: Stack[-2] = "phys"
0x4b2: Return(); Pop(0)

0x4b3: PushEmpty(cvector, cvector, cvector, cvector)
0x4b4: @ GetPosition(Stack[-2])
0x4b5: Pop(0)
0x4b6: @@ GetPosition(Stack[-1])
0x4b7: Pop(0)
0x4b8: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x4b9: Return(); Pop(4)

0x4ba: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x4bb: @ GetPosition(Stack[-3])
0x4bc: Pop(0)
0x4bd: @@ GetPosition(Stack[-2])
0x4be: Pop(0)
0x4bf: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x4c0: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x4c1: Return(); Pop(6)

0x4c2: PushEmpty(object, object)
0x4c3: Push("player")
0x4c4: @ FindActor(Stack[-2], Stack[-1])
0x4c5: Pop(1)
0x4c6: Stack[-3] = Stack[-1]
0x4c7: Return(); Pop(2)

0x4c8: Stack[-1] = 0
0x4c9: PushEmpty(bool, bool)
0x4ca: @ IsPlayerActor(Stack[-3], Stack[-1])
0x4cb: Pop(0)
0x4cc: Stack[-4] = Stack[-1]
0x4cd: Return(); Pop(2)

0x4ce: PushEmpty(bool, bool)
0x4cf: Push("HasProperty")
0x4d0: Push((int) 2)
0x4d1: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x4d2: Pop(1); Push((bool) Stack[-1] == 0)
0x4d3: IF (Stack[-1] == 0) GOTO 0x4d6; Pop(1)

0x4d4: Stack[-5] = (bool) 0
0x4d5: Return(); Pop(2)

0x4d6: @@ HasProperty(Stack[-3], Stack[-1])
0x4d7: Pop(0)
0x4d8: Stack[-5] = Stack[-1]
0x4d9: Return(); Pop(2)

0x4da: PushEmpty(int, string, int, float, float, float, int, string, int, float, float, float)
0x4db: PushEmpty(bool, object, string)
0x4dc: Stack[-2] = Stack[-18]
0x4dd: Stack[-1] = "health"
0x4de: Call2 0x4ce

0x4df: Pop(2)
0x4e0: Pop(1); Push((bool) Stack[-1] == 0)
0x4e1: IF (Stack[-1] == 0) GOTO 0x4e4; Pop(1)

0x4e2: Stack[-16] = (float) 0.0
0x4e3: Return(); Pop(12)

0x4e4: PushEmpty(bool, object, string)
0x4e5: Stack[-2] = Stack[-18]
0x4e6: Stack[-1] = "armor"
0x4e7: Call2 0x4ce

0x4e8: Pop(2)
0x4e9: Pop(1); Push((bool) Stack[-1] == 0)
0x4ea: IF (Stack[-1] == 0) GOTO 0x4ed; Pop(1)

0x4eb: Stack[-6] = (int) 0
0x4ec: GOTO 0x4f0

0x4ed: Push("armor")
0x4ee: @@ GetProperty(Stack[-1], Stack[-7])
0x4ef: Pop(1)
0x4f0: Push("armor_")
0x4f1: PushEmpty(string, int)
0x4f2: Stack[-1] = Stack[-16]
0x4f3: Call2 0x4a5

0x4f4: Pop(1)
0x4f5: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x4f6: PushEmpty(bool, object, string)
0x4f7: Stack[-2] = Stack[-18]
0x4f8: Stack[-1] = Stack[-8]
0x4f9: Call2 0x4ce

0x4fa: Pop(2)
0x4fb: Pop(1); Push((bool) Stack[-1] == 0)
0x4fc: IF (Stack[-1] == 0) GOTO 0x4ff; Pop(1)

0x4fd: Stack[-4] = (int) 0
0x4fe: GOTO 0x501

0x4ff: @@ GetProperty(Stack[-5], Stack[-4])
0x500: Pop(0)
0x501: PushEmpty(float, float, float)
0x502: Pop(0); Push(Stack[-9] + Stack[-7]);
0x503: Push((float)100.0)
0x504: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0x505: Stack[-1] = (int) 1
0x506: Call2 0x693

0x507: Stack[-6] = Stack[-3]
0x508: Pop(3)
0x509: Push("health")
0x50a: @@ GetProperty(Stack[-1], Stack[-3])
0x50b: Pop(1)
0x50c: Push((int) 1)
0x50d: Pop(1); Push(Stack[-1] - Stack[-4]);
0x50e: Stack[-2] = Stack[-15] * Stack[-1]; Pop(1);
0x50f: Push("health")
0x510: PushEmpty(float, float, float, float)
0x511: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0x512: Stack[-2] = (int) 0
0x513: Stack[-1] = (int) 1
0x514: Call2 0x69a

0x515: Pop(3)
0x516: @@ SetProperty(Stack[-2], Stack[-1])
0x517: Pop(2)
0x518: PushEmpty(bool, object)
0x519: Stack[-1] = Stack[-17]
0x51a: Call2 0x4c9

0x51b: Pop(1)
0x51c: IF (Stack[-1] == 0) GOTO 0x521; Pop(1)

0x51d: PushEmpty(float)
0x51e: Stack[-1] = -Stack[-2]; Pop(0);
0x51f: Call2 0x6cf

0x520: Pop(1)
0x521: Stack[-16] = Stack[-1]
0x522: Return(); Pop(12)

0x523: PushEmpty(bool, bool)
0x524: @@ IsDead(Stack[-1])
0x525: Pop(0)
0x526: Stack[-4] = Stack[-1]
0x527: Return(); Pop(2)

0x528: PushEmpty(object, object, object, object)
0x529: Pop(0); Push((bool) Stack[-5] == 0)
0x52a: IF (Stack[-1] == 0) GOTO 0x52d; Pop(1)

0x52b: Stack[-6] = (bool) 0
0x52c: Return(); Pop(4)

0x52d: PushEmpty(bool)
0x52e: Stack[-1] = (bool) 0
0x52f: Push("IsDead")
0x530: Push((int) 1)
0x531: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x532: IF (Stack[-1] == 0) GOTO 0x539; Pop(1)

0x533: PushEmpty(bool, object)
0x534: Stack[-1] = Stack[-8]
0x535: Call2 0x523

0x536: Pop(1)
0x537: IF (Stack[-1] == 0) GOTO 0x539; Pop(1)

0x538: Stack[-1] = (bool) 1
0x539: IF (Stack[-1] == 0) GOTO 0x53c; Pop(1)

0x53a: Stack[-6] = (bool) 0
0x53b: Return(); Pop(4)

0x53c: @ GetScene(Stack[-2])
0x53d: Pop(0)
0x53e: Pop(0); Push((bool) Stack[-2] == 0)
0x53f: IF (Stack[-1] == 0) GOTO 0x542; Pop(1)

0x540: Stack[-6] = (bool) 0
0x541: Return(); Pop(4)

0x542: @@ GetScene(Stack[-1])
0x543: Pop(0)
0x544: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x545: IF (Stack[-1] == 0) GOTO 0x548; Pop(1)

0x546: Stack[-6] = (bool) 0
0x547: Return(); Pop(4)

0x548: Stack[-6] = (bool) 1
0x549: Return(); Pop(4)

0x54a: Stack[-1] = 0
0x54b: Stack[-2] = 0
0x54c: PushEmpty(int, int)
0x54d: PushEmpty(bool, object)
0x54e: Stack[-1] = Stack[-5]
0x54f: Call2 0x528

0x550: Pop(1)
0x551: Pop(1); Push((bool) Stack[-1] == 0)
0x552: IF (Stack[-1] == 0) GOTO 0x555; Pop(1)

0x553: Stack[-4] = (bool) 0
0x554: Return(); Pop(2)

0x555: PushEmpty(bool, object, string)
0x556: Stack[-2] = Stack[-6]
0x557: Stack[-1] = "noaccess"
0x558: Call2 0x4ce

0x559: Pop(2)
0x55a: Pop(1); Push((bool) Stack[-1] == 0)
0x55b: IF (Stack[-1] == 0) GOTO 0x55e; Pop(1)

0x55c: Stack[-4] = (bool) 1
0x55d: Return(); Pop(2)

0x55e: Push("noaccess")
0x55f: @@ GetProperty(Stack[-1], Stack[-2])
0x560: Pop(1)
0x561: Push((int) 0)
0x562: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x563: Return(); Pop(2)

0x564: PushEmpty(bool, int, cvector, cvector, cvector, cvector, string, bool, int, cvector, cvector, cvector, cvector, string)
0x565: Pop(0); Push((bool) Stack[-15] == 0)
0x566: IF (Stack[-1] == 0) GOTO 0x568; Pop(1)

0x567: Return(); Pop(14)

0x568: @ IsDead(Stack[-7])
0x569: Pop(0)
0x56a: Push(Stack[-7])
0x56b: IF (Stack[-1] == 0) GOTO 0x56d; Pop(1)

0x56c: Return(); Pop(14)

0x56d: @ GetSecondaryAnimationType(Stack[-6])
0x56e: Pop(0)
0x56f: Push((int) 0)
0x570: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x571: IF (Stack[-1] == 0) GOTO 0x573; Pop(1)

0x572: Return(); Pop(14)

0x573: @@ GetPosition(Stack[-5])
0x574: Pop(0)
0x575: @ GetPosition(Stack[-4])
0x576: Pop(0)
0x577: @ GetDirection(Stack[-3])
0x578: Pop(0)
0x579: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0x57a: Push(CvectorIndex(Stack[-2], 0))
0x57b: Push(CvectorIndex(Stack[-4], 0))
0x57c: Pop(2); Push(Stack[-2] * Stack[-1]);
0x57d: Push(CvectorIndex(Stack[-3], 2))
0x57e: Push(CvectorIndex(Stack[-5], 2))
0x57f: Pop(2); Push(Stack[-2] * Stack[-1]);
0x580: Pop(2); Push(Stack[-2] + Stack[-1]);
0x581: Push((int) 0)
0x582: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x583: IF (Stack[-1] == 0) GOTO 0x586; Pop(1)

0x584: Stack[-1] = "fhit"
0x585: GOTO 0x587

0x586: Stack[-1] = "bhit"
0x587: Push("hit_react")
0x588: Push("1")
0x589: Pop(1); Push(Stack[-3] + Stack[-1]);
0x58a: Push("2")
0x58b: Pop(1); Push(Stack[-4] + Stack[-1]);
0x58c: Push((int) -10)
0x58d: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x58e: Pop(4)
0x58f: Return(); Pop(14)

0x590: PushEmpty(cvector, object, int, bool, cvector, cvector, int, int, cvector, cvector, object, int, bool, cvector, cvector, int, int, cvector)
0x591: PushEmpty(bool)
0x592: Stack[-1] = (bool) 0
0x593: PushEmpty(bool)
0x594: Stack[-1] = (bool) 0
0x595: Push(Stack[-23])
0x596: IF (Stack[-1] == 0) GOTO 0x59b; Pop(1)

0x597: Push((int) 4)
0x598: Pop(1); Push((bool) Stack[-23] != Stack[-1])
0x599: IF (Stack[-1] == 0) GOTO 0x59b; Pop(1)

0x59a: Stack[-1] = (bool) 1
0x59b: IF (Stack[-1] == 0) GOTO 0x5a0; Pop(1)

0x59c: Push((int) 5)
0x59d: Pop(1); Push((bool) Stack[-22] != Stack[-1])
0x59e: IF (Stack[-1] == 0) GOTO 0x5a0; Pop(1)

0x59f: Stack[-1] = (bool) 1
0x5a0: IF (Stack[-1] == 0) GOTO 0x5cf; Pop(1)

0x5a1: PushEmpty(cvector, cvector)
0x5a2: PushEmpty(cvector, object)
0x5a3: Stack[-1] = Stack[-25]
0x5a4: Call2 0x4b3

0x5a5: Stack[-3] = Stack[-2]
0x5a6: Pop(2)
0x5a7: Call2 0x685

0x5a8: Stack[-11] = Stack[-2]
0x5a9: Pop(2)
0x5aa: @ CreateVectorVector(Stack[-8])
0x5ab: Pop(0)
0x5ac: Stack[-7] = (int) 1
0x5ad: Push("hit")
0x5ae: Pop(1); Push(Stack[-1] + Stack[-8]);
0x5af: @ GetGeometryLocator(Stack[-1], Stack[-7], Stack[-6], Stack[-5])
0x5b0: Pop(1)
0x5b1: Pop(0); Push((bool) Stack[-6] == 0)
0x5b2: IF (Stack[-1] == 0) GOTO 0x5b4; Pop(1)

0x5b3: GOTO 0x5bd

0x5b4: Pop(0); Push(Stack[-4] | Stack[-9]);
0x5b5: Push((float)0.70711)
0x5b6: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x5b7: IF (Stack[-1] == 0) GOTO 0x5ba; Pop(1)

0x5b8: @@ add(Stack[-5])
0x5b9: Pop(0)
0x5ba: Push((int) 1)
0x5bb: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x5bc: GOTO 0x5ad

0x5bd: @@ size(Stack[-3])
0x5be: Pop(0)
0x5bf: Push(Stack[-3])
0x5c0: IF (Stack[-1] == 0) GOTO 0x5ce; Pop(1)

0x5c1: @ irand(Stack[-2], Stack[-3])
0x5c2: Pop(0)
0x5c3: @@ get(Stack[-1], Stack[-2])
0x5c4: Pop(0)
0x5c5: PushEmpty(object, int, float, cvector, cvector)
0x5c6: Stack[-5] = Stack[-26]
0x5c7: Stack[-4] = Stack[-25]
0x5c8: Stack[-3] = Stack[-24]
0x5c9: Stack[-2] = Stack[-6]
0x5ca: Stack[-1] = -Stack[-14]; Pop(0);
0x5cb: Call2 0x5d4

0x5cc: Pop(5)
0x5cd: Return(); Pop(18)

0x5ce: Stack[-8] = 0
0x5cf: PushEmpty(object)
0x5d0: Stack[-1] = Stack[-22]
0x5d1: Call2 0x564

0x5d2: Pop(1)
0x5d3: Return(); Pop(18)

0x5d4: PushEmpty(object, object, object, object)
0x5d5: @ GetScene(Stack[-2])
0x5d6: Pop(0)
0x5d7: Push("scripted")
0x5d8: Push("blood_dir.xml")
0x5d9: @ AddActorByType(Stack[-3], Stack[-2], Stack[-4], Stack[-8], Stack[-7], Stack[-1])
0x5da: Pop(2)
0x5db: PushEmpty(object)
0x5dc: Stack[-1] = Stack[-10]
0x5dd: Call2 0x564

0x5de: Pop(1)
0x5df: Return(); Pop(4)

0x5e0: Stack[-1] = 0
0x5e1: Stack[-2] = 0
0x5e2: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x5e3: @@ GetPosition(Stack[-3])
0x5e4: Pop(0)
0x5e5: @ GetPosition(Stack[-2])
0x5e6: Pop(0)
0x5e7: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0x5e8: Push(CvectorIndex(Stack[-1], 0))
0x5e9: Push(CvectorIndex(Stack[-2], 2))
0x5ea: @ RotateAsync(Stack[-2], Stack[-1])
0x5eb: Pop(2)
0x5ec: Return(); Pop(6)

0x5ed: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x5ee: @@ GetPosition(Stack[-3])
0x5ef: Pop(0)
0x5f0: @ GetPosition(Stack[-2])
0x5f1: Pop(0)
0x5f2: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0x5f3: Push(CvectorIndex(Stack[-1], 0))
0x5f4: Push(CvectorIndex(Stack[-2], 2))
0x5f5: @ RotateAsync(Stack[-2], Stack[-1], Stack[-9])
0x5f6: Pop(2)
0x5f7: Return(); Pop(6)

0x5f8: PushEmpty(float, float, float, float)
0x5f9: @ GetEyesHeight(Stack[-2])
0x5fa: Pop(0)
0x5fb: @@ GetEyesHeight(Stack[-1])
0x5fc: Pop(0)
0x5fd: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x5fe: Return(); Pop(4)

0x5ff: PushEmpty(bool, int, bool, int, bool, float, cvector, cvector, bool, int, bool, int, bool, float, cvector, cvector)
0x600: @ IsExisting3DSound(Stack[-8], Stack[-17])
0x601: Pop(0)
0x602: Pop(0); Push((bool) Stack[-8] == 0)
0x603: IF (Stack[-1] == 0) GOTO 0x618; Pop(1)

0x604: Stack[-7] = (int) 0
0x605: Push((int) 1)
0x606: Pop(1); Push(Stack[-8] + Stack[-1]);
0x607: Pop(1); Push(Stack[-18] + Stack[-1]);
0x608: @ IsExisting3DSound(Stack[-7], Stack[-1])
0x609: Pop(1)
0x60a: Pop(0); Push((bool) Stack[-6] == 0)
0x60b: IF (Stack[-1] == 0) GOTO 0x60d; Pop(1)

0x60c: GOTO 0x610

0x60d: Push((int) 1)
0x60e: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x60f: GOTO 0x605

0x610: Pop(0); Push((bool) Stack[-7] == 0)
0x611: IF (Stack[-1] == 0) GOTO 0x613; Pop(1)

0x612: Return(); Pop(16)

0x613: @ irand(Stack[-5], Stack[-7])
0x614: Pop(0)
0x615: Push((int) 1)
0x616: Pop(1); Push(Stack[-6] + Stack[-1]);
0x617: Stack[-18] = Stack[-18] + Stack[-1]; Pop(1);
0x618: @ Is3DSoundLoaded(Stack[-4], Stack[-17])
0x619: Pop(0)
0x61a: Push(Stack[-4])
0x61b: IF (Stack[-1] == 0) GOTO 0x627; Pop(1)

0x61c: @ GetEyesHeight(Stack[-3])
0x61d: Pop(0)
0x61e: @ GetDirection(Stack[-2])
0x61f: Pop(0)
0x620: Push((int) 50)
0x621: Stack[-2] = Stack[-3] * Stack[-1]; Pop(1);
0x622: Push(CvectorIndex(Stack[-1], 1))
0x623: Stack[-1] = Stack[-1] + Stack[-4]; Pop(0);
0x624: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x625: @ PlayGlobalSound(Stack[-17], Stack[-1])
0x626: Pop(0)
0x627: Return(); Pop(16)

0x628: PushEmpty()
0x629: Stack[-2] = (bool) 1
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
0x63a: PushEmpty(bool)
0x63b: Stack[-1] = (bool) 1
0x63c: PushEmpty(bool)
0x63d: Stack[-1] = (bool) 1
0x63e: PushEmpty(bool)
0x63f: Stack[-1] = (bool) 1
0x640: Push("woman")
0x641: Pop(1); Push((bool) Stack[-13] == Stack[-1])
0x642: IF (Stack[-1] == 0) GOTO 0x647; Pop(1)

0x643: Push("worker")
0x644: Pop(1); Push((bool) Stack[-13] == Stack[-1])
0x645: IF (Stack[-1] == 0) GOTO 0x647; Pop(1)

0x646: Stack[-1] = (bool) 0
0x647: IF (Stack[-1] == 0) GOTO 0x64c; Pop(1)

0x648: Push("butcher")
0x649: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0x64a: IF (Stack[-1] == 0) GOTO 0x64c; Pop(1)

0x64b: Stack[-1] = (bool) 0
0x64c: IF (Stack[-1] == 0) GOTO 0x651; Pop(1)

0x64d: Push("wasted_girl")
0x64e: Pop(1); Push((bool) Stack[-11] == Stack[-1])
0x64f: IF (Stack[-1] == 0) GOTO 0x651; Pop(1)

0x650: Stack[-1] = (bool) 0
0x651: IF (Stack[-1] == 0) GOTO 0x656; Pop(1)

0x652: Push("boy")
0x653: Pop(1); Push((bool) Stack[-10] == Stack[-1])
0x654: IF (Stack[-1] == 0) GOTO 0x656; Pop(1)

0x655: Stack[-1] = (bool) 0
0x656: IF (Stack[-1] == 0) GOTO 0x65b; Pop(1)

0x657: Push("vaxxabitka")
0x658: Pop(1); Push((bool) Stack[-9] == Stack[-1])
0x659: IF (Stack[-1] == 0) GOTO 0x65b; Pop(1)

0x65a: Stack[-1] = (bool) 0
0x65b: IF (Stack[-1] == 0) GOTO 0x660; Pop(1)

0x65c: Push("unosha")
0x65d: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x65e: IF (Stack[-1] == 0) GOTO 0x660; Pop(1)

0x65f: Stack[-1] = (bool) 0
0x660: IF (Stack[-1] == 0) GOTO 0x665; Pop(1)

0x661: Push("wasted_male")
0x662: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x663: IF (Stack[-1] == 0) GOTO 0x665; Pop(1)

0x664: Stack[-1] = (bool) 0
0x665: IF (Stack[-1] == 0) GOTO 0x66a; Pop(1)

0x666: Push("alkash")
0x667: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x668: IF (Stack[-1] == 0) GOTO 0x66a; Pop(1)

0x669: Stack[-1] = (bool) 0
0x66a: IF (Stack[-1] == 0) GOTO 0x66f; Pop(1)

0x66b: Push("dohodyaga")
0x66c: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x66d: IF (Stack[-1] == 0) GOTO 0x66f; Pop(1)

0x66e: Stack[-1] = (bool) 0
0x66f: IF (Stack[-1] == 0) GOTO 0x674; Pop(1)

0x670: Push("vaxxabit")
0x671: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x672: IF (Stack[-1] == 0) GOTO 0x674; Pop(1)

0x673: Stack[-1] = (bool) 0
0x674: IF (Stack[-1] == 0) GOTO 0x679; Pop(1)

0x675: Push("nudegirl")
0x676: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x677: IF (Stack[-1] == 0) GOTO 0x679; Pop(1)

0x678: Stack[-1] = (bool) 0
0x679: IF (Stack[-1] == 0) GOTO 0x67e; Pop(1)

0x67a: Push("morlok")
0x67b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x67c: IF (Stack[-1] == 0) GOTO 0x67e; Pop(1)

0x67d: Stack[-2] = (bool) 0
0x67e: Return(); Pop(0)

0x67f: PushEmpty(object, object)
0x680: @ self(Stack[-1])
0x681: Pop(0)
0x682: Stack[-3] = Stack[-1]
0x683: Return(); Pop(2)

0x684: Stack[-1] = 0
0x685: PushEmpty(float, float)
0x686: Pop(0); Push(Stack[-3] | Stack[-3]);
0x687: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x688: Push((float)0.0)
0x689: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x68a: IF (Stack[-1] == 0) GOTO 0x68d; Pop(1)

0x68b: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x68c: Return(); Pop(2)

0x68d: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x68e: Return(); Pop(2)

0x68f: PushEmpty(cvector, cvector)
0x690: Stack[-1] = Stack[-3] - Stack[-4]; Pop(0);
0x691: Stack[-5] = Stack[-1] | Stack[-1]; Pop(0);
0x692: Return(); Pop(2)

0x693: PushEmpty()
0x694: Pop(0); Push((bool) Stack[-2] < Stack[-1])
0x695: IF (Stack[-1] == 0) GOTO 0x698; Pop(1)

0x696: Stack[-3] = Stack[-2]
0x697: GOTO 0x699

0x698: Stack[-3] = Stack[-1]
0x699: Return(); Pop(0)

0x69a: PushEmpty()
0x69b: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x69c: IF (Stack[-1] == 0) GOTO 0x69f; Pop(1)

0x69d: Stack[-4] = Stack[-2]
0x69e: Return(); Pop(0)

0x69f: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x6a0: IF (Stack[-1] == 0) GOTO 0x6a3; Pop(1)

0x6a1: Stack[-4] = Stack[-1]
0x6a2: Return(); Pop(0)

0x6a3: Stack[-4] = Stack[-3]
0x6a4: Return(); Pop(0)

0x6a5: PushEmpty(object, object)
0x6a6: @ CreateObjectSet(Stack[-1])
0x6a7: Pop(0)
0x6a8: Stack[-3] = Stack[-1]
0x6a9: Return(); Pop(2)

0x6aa: Stack[-1] = 0
0x6ab: PushEmpty()
0x6ac: Push(CvectorIndex(Stack[-2], 0))
0x6ad: Push(CvectorIndex(Stack[-2], 0))
0x6ae: Pop(2); Push(Stack[-2] * Stack[-1]);
0x6af: Push(CvectorIndex(Stack[-3], 2))
0x6b0: Push(CvectorIndex(Stack[-3], 2))
0x6b1: Pop(2); Push(Stack[-2] * Stack[-1]);
0x6b2: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x6b3: Return(); Pop(0)

0x6b4: PushEmpty()
0x6b5: Push(CvectorIndex(Stack[-1], 0))
0x6b6: Push(CvectorIndex(Stack[-2], 0))
0x6b7: Pop(2); Push(Stack[-2] * Stack[-1]);
0x6b8: Push(CvectorIndex(Stack[-2], 2))
0x6b9: Push(CvectorIndex(Stack[-3], 2))
0x6ba: Pop(2); Push(Stack[-2] * Stack[-1]);
0x6bb: Pop(2); Push(Stack[-2] + Stack[-1]);
0x6bc: Stack[-3] = Sqrt(Stack[-1]); Pop(1);
0x6bd: Return(); Pop(0)

0x6be: PushEmpty()
0x6bf: PushEmpty(float, cvector, cvector)
0x6c0: Stack[-2] = Stack[-5]
0x6c1: Stack[-1] = Stack[-4]
0x6c2: Call2 0x6ab

0x6c3: Pop(2)
0x6c4: PushEmpty(float, cvector)
0x6c5: Stack[-1] = Stack[-5]
0x6c6: Call2 0x6b4

0x6c7: Pop(1)
0x6c8: PushEmpty(float, cvector)
0x6c9: Stack[-1] = Stack[-5]
0x6ca: Call2 0x6b4

0x6cb: Pop(1)
0x6cc: Pop(2); Push(Stack[-2] * Stack[-1]);
0x6cd: Stack[-5] = Stack[-2] / Stack[-1]; Pop(2);
0x6ce: Return(); Pop(0)

0x6cf: PushEmpty(object, object)
0x6d0: @ CreateFloatVector(Stack[-1])
0x6d1: Pop(0)
0x6d2: @@ add(Stack[-3])
0x6d3: Pop(0)
0x6d4: Push((int) 0)
0x6d5: Pop(1); Push((bool) Stack[-4] < Stack[-1])
0x6d6: IF (Stack[-1] == 0) GOTO 0x6db; Pop(1)

0x6d7: Push((float)0.7)
0x6d8: Push((int) 500)
0x6d9: @ RumblePlay(Stack[-2], Stack[-1])
0x6da: Pop(2)
0x6db: Push((int) 15)
0x6dc: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x6dd: Pop(1)
0x6de: Return(); Pop(2)

0x6df: Stack[-1] = 0
0x6e0: PushEmpty(object, object)
0x6e1: @ FindActor(Stack[-1], Stack[-4])
0x6e2: Pop(0)
0x6e3: Pop(0); Push((bool) Stack[-1] == 0)
0x6e4: IF (Stack[-1] == 0) GOTO 0x6e7; Pop(1)

0x6e5: Stack[-5] = (bool) 0
0x6e6: Return(); Pop(2)

0x6e7: @ Trigger(Stack[-1], Stack[-3])
0x6e8: Pop(0)
0x6e9: Stack[-5] = (bool) 1
0x6ea: Return(); Pop(2)

0x6eb: Stack[-1] = 0
0x6ec: PushEmpty(bool, bool)
0x6ed: @ IsPlayerActor(Stack[-3], Stack[-1])
0x6ee: Pop(0)
0x6ef: Push(Stack[-1])
0x6f0: IF (Stack[-1] == 0) GOTO 0x6f4; Pop(1)

0x6f1: Push("attack")
0x6f2: @ PlayGlobalMusic(Stack[-1])
0x6f3: Pop(1)
0x6f4: Return(); Pop(2)

0x6f5: PushEmpty(object, object)
0x6f6: @ GetScene(Stack[-1])
0x6f7: Pop(0)
0x6f8: Push("battle")
0x6f9: PushEmpty(object)
0x6fa: Call2 0x67f

0x6fb: Pop(0)
0x6fc: @ BroadcastMessage(Stack[-2], Stack[-1], Stack[-3])
0x6fd: Pop(2)
0x6fe: Return(); Pop(2)

0x6ff: Stack[-1] = 0
0x700: PushEmpty(int, int)
0x701: Push("branch")
0x702: @ GetVariable(Stack[-1], Stack[-2])
0x703: Pop(1)
0x704: Stack[-3] = Stack[-1]
0x705: Return(); Pop(2)

0x706: PushEmpty()
0x707: PushEmpty(int)
0x708: Call2 0x700

0x709: Pop(0)
0x70a: Push((int) 1)
0x70b: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x70c: IF (Stack[-1] == 0) GOTO 0x710; Pop(1)

0x70d: @ WorkWithCorpse(Stack[-1])
0x70e: Pop(0)
0x70f: GOTO 0x712

0x710: @ Barter(Stack[-1])
0x711: Pop(0)
0x712: Return(); Pop(0)

0x713: PushEmpty()
0x714: PushEmpty(object, int, float)
0x715: Stack[-3] = Stack[-7]
0x716: Stack[-2] = Stack[-6]
0x717: Stack[-1] = Stack[-5]
0x718: Call2 0x590

0x719: Pop(3)
0x71a: Return(); Pop(0)

0x71b: PushEmpty()
0x71c: PushEmpty(object, int, float, cvector, cvector)
0x71d: Stack[-5] = Stack[-11]
0x71e: Stack[-4] = Stack[-10]
0x71f: Stack[-3] = Stack[-9]
0x720: Stack[-2] = Stack[-7]
0x721: Stack[-1] = Stack[-6]
0x722: Call2 0x5d4

0x723: Pop(5)
0x724: Return(); Pop(0)

0x725: PushEmpty(float, float)
0x726: Push("health")
0x727: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x728: IF (Stack[-1] == 0) GOTO 0x731; Pop(1)

0x729: Push("health")
0x72a: @ GetProperty(Stack[-1], Stack[-2])
0x72b: Pop(1)
0x72c: Push((int) 0)
0x72d: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x72e: IF (Stack[-1] == 0) GOTO 0x731; Pop(1)

0x72f: @ SignalDeath(Stack[-4])
0x730: Pop(0)
0x731: Return(); Pop(2)

0x732: PushEmpty()
0x733: PushEmpty(bool, object)
0x734: Stack[-1] = Stack[-3]
0x735: Call2 0x4c9

0x736: Pop(1)
0x737: IF (Stack[-1] == 0) GOTO 0x73f; Pop(1)

0x738: PushEmpty(object)
0x739: Call2 0x67f

0x73a: Pop(0)
0x73b: Push((float)0.05)
0x73c: Push((bool) 1)
0x73d: @ ReportReputationChange(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x73e: Pop(3)
0x73f: PushEmpty(object)
0x740: Stack[-1] = Stack[-2]
0x741: Call2 0x8b1

0x742: Pop(1)
0x743: Return(); Pop(0)

0x744: PushEmpty(string, string)
0x745: PushEmpty(bool, object, string)
0x746: Stack[-2] = Stack[-7]
0x747: Stack[-1] = "class"
0x748: Call2 0x4ce

0x749: Pop(2)
0x74a: Pop(1); Push((bool) Stack[-1] == 0)
0x74b: IF (Stack[-1] == 0) GOTO 0x74e; Pop(1)

0x74c: Stack[-5] = (bool) 0
0x74d: Return(); Pop(2)

0x74e: Push("class")
0x74f: @@ GetProperty(Stack[-1], Stack[-2])
0x750: Pop(1)
0x751: PushEmpty(bool)
0x752: Stack[-1] = (bool) 1
0x753: PushEmpty(bool)
0x754: Stack[-1] = (bool) 1
0x755: PushEmpty(bool)
0x756: Stack[-1] = (bool) 1
0x757: PushEmpty(bool)
0x758: Stack[-1] = (bool) 1
0x759: PushEmpty(bool)
0x75a: Stack[-1] = (bool) 1
0x75b: PushEmpty(bool)
0x75c: Stack[-1] = (bool) 1
0x75d: PushEmpty(bool)
0x75e: Stack[-1] = (bool) 1
0x75f: PushEmpty(bool)
0x760: Stack[-1] = (bool) 1
0x761: PushEmpty(bool)
0x762: Stack[-1] = (bool) 1
0x763: PushEmpty(bool)
0x764: Stack[-1] = (bool) 1
0x765: Push("patrol")
0x766: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0x767: IF (Stack[-1] == 0) GOTO 0x76c; Pop(1)

0x768: Push("sanitar")
0x769: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0x76a: IF (Stack[-1] == 0) GOTO 0x76c; Pop(1)

0x76b: Stack[-1] = (bool) 0
0x76c: IF (Stack[-1] == 0) GOTO 0x771; Pop(1)

0x76d: Push("soldier")
0x76e: Pop(1); Push((bool) Stack[-11] == Stack[-1])
0x76f: IF (Stack[-1] == 0) GOTO 0x771; Pop(1)

0x770: Stack[-1] = (bool) 0
0x771: IF (Stack[-1] == 0) GOTO 0x776; Pop(1)

0x772: Push("woman")
0x773: Pop(1); Push((bool) Stack[-10] == Stack[-1])
0x774: IF (Stack[-1] == 0) GOTO 0x776; Pop(1)

0x775: Stack[-1] = (bool) 0
0x776: IF (Stack[-1] == 0) GOTO 0x77b; Pop(1)

0x777: Push("wasted_girl")
0x778: Pop(1); Push((bool) Stack[-9] == Stack[-1])
0x779: IF (Stack[-1] == 0) GOTO 0x77b; Pop(1)

0x77a: Stack[-1] = (bool) 0
0x77b: IF (Stack[-1] == 0) GOTO 0x780; Pop(1)

0x77c: Push("vaxxabitka")
0x77d: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x77e: IF (Stack[-1] == 0) GOTO 0x780; Pop(1)

0x77f: Stack[-1] = (bool) 0
0x780: IF (Stack[-1] == 0) GOTO 0x785; Pop(1)

0x781: Push("vaxxabit")
0x782: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x783: IF (Stack[-1] == 0) GOTO 0x785; Pop(1)

0x784: Stack[-1] = (bool) 0
0x785: IF (Stack[-1] == 0) GOTO 0x78a; Pop(1)

0x786: Push("little_girl")
0x787: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x788: IF (Stack[-1] == 0) GOTO 0x78a; Pop(1)

0x789: Stack[-1] = (bool) 0
0x78a: IF (Stack[-1] == 0) GOTO 0x78f; Pop(1)

0x78b: Push("girl")
0x78c: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x78d: IF (Stack[-1] == 0) GOTO 0x78f; Pop(1)

0x78e: Stack[-1] = (bool) 0
0x78f: IF (Stack[-1] == 0) GOTO 0x794; Pop(1)

0x790: Push("dohodyaga")
0x791: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x792: IF (Stack[-1] == 0) GOTO 0x794; Pop(1)

0x793: Stack[-1] = (bool) 0
0x794: IF (Stack[-1] == 0) GOTO 0x799; Pop(1)

0x795: Push("nudegirl")
0x796: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x797: IF (Stack[-1] == 0) GOTO 0x799; Pop(1)

0x798: Stack[-1] = (bool) 0
0x799: IF (Stack[-1] == 0) GOTO 0x79c; Pop(1)

0x79a: Stack[-5] = (bool) 1
0x79b: Return(); Pop(2)

0x79c: Push(Stack[-3])
0x79d: IF (Stack[-1] == 0) GOTO 0x7a0; Pop(1)

0x79e: Stack[-5] = (bool) 0
0x79f: Return(); Pop(2)

0x7a0: Stack[-5] = (bool) 1
0x7a1: PushEmpty(bool)
0x7a2: Stack[-1] = (bool) 1
0x7a3: PushEmpty(bool)
0x7a4: Stack[-1] = (bool) 1
0x7a5: PushEmpty(bool)
0x7a6: Stack[-1] = (bool) 1
0x7a7: PushEmpty(bool)
0x7a8: Stack[-1] = (bool) 1
0x7a9: PushEmpty(bool)
0x7aa: Stack[-1] = (bool) 1
0x7ab: Push("worker")
0x7ac: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x7ad: IF (Stack[-1] == 0) GOTO 0x7b2; Pop(1)

0x7ae: Push("butcher")
0x7af: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x7b0: IF (Stack[-1] == 0) GOTO 0x7b2; Pop(1)

0x7b1: Stack[-1] = (bool) 0
0x7b2: IF (Stack[-1] == 0) GOTO 0x7b7; Pop(1)

0x7b3: Push("boy")
0x7b4: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x7b5: IF (Stack[-1] == 0) GOTO 0x7b7; Pop(1)

0x7b6: Stack[-1] = (bool) 0
0x7b7: IF (Stack[-1] == 0) GOTO 0x7bc; Pop(1)

0x7b8: Push("unosha")
0x7b9: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x7ba: IF (Stack[-1] == 0) GOTO 0x7bc; Pop(1)

0x7bb: Stack[-1] = (bool) 0
0x7bc: IF (Stack[-1] == 0) GOTO 0x7c1; Pop(1)

0x7bd: Push("wasted_male")
0x7be: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x7bf: IF (Stack[-1] == 0) GOTO 0x7c1; Pop(1)

0x7c0: Stack[-1] = (bool) 0
0x7c1: IF (Stack[-1] == 0) GOTO 0x7c6; Pop(1)

0x7c2: Push("alkash")
0x7c3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7c4: IF (Stack[-1] == 0) GOTO 0x7c6; Pop(1)

0x7c5: Stack[-1] = (bool) 0
0x7c6: IF (Stack[-1] == 0) GOTO 0x7cb; Pop(1)

0x7c7: Push("morlok")
0x7c8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7c9: IF (Stack[-1] == 0) GOTO 0x7cb; Pop(1)

0x7ca: Stack[-5] = (bool) 0
0x7cb: Return(); Pop(2)

0x7cc: Push(GlobalVars[0])
0x7cd: PushEmpty(object)
0x7ce: Call2 0x6a5

0x7cf: Stack[-2] = Stack[-1]
0x7d0: Pop(1)
0x7d1: GlobalVars[0] = Stack[-1]; Pop(1)
0x7d2: Return(); Pop(0)

0x7d3: PushEmpty()
0x7d4: PushEmpty(object, bool)
0x7d5: Stack[-2] = Stack[-4]
0x7d6: Stack[-1] = Stack[-3]
0x7d7: Push(-2, 3); TaskCall(2)
0x7d8: Call2 0x122

0x7d9: Pop(-2, 3); TaskReturn
0x7da: Pop(2)
0x7db: @ ResetAAS()
0x7dc: Pop(0)
0x7dd: Return(); Pop(0)

0x7de: PushEmpty(bool, bool)
0x7df: Pop(0); Push((bool) Stack[-3] == 0)
0x7e0: IF (Stack[-1] == 0) GOTO 0x7e2; Pop(1)

0x7e1: Return(); Pop(2)

0x7e2: Push(GlobalVars[0])
0x7e3: @@ in(Stack[-2], Stack[-4])
0x7e4: Pop(1)
0x7e5: Pop(0); Push((bool) Stack[-1] == 0)
0x7e6: IF (Stack[-1] == 0) GOTO 0x7ea; Pop(1)

0x7e7: Push(GlobalVars[0])
0x7e8: @@ add(Stack[-4])
0x7e9: Pop(1)
0x7ea: PushEmpty(bool, object)
0x7eb: Stack[-1] = Stack[-5]
0x7ec: Call2 0x4c9

0x7ed: Pop(1)
0x7ee: IF (Stack[-1] == 0) GOTO 0x7f5; Pop(1)

0x7ef: PushEmpty(object)
0x7f0: Call2 0x67f

0x7f1: Pop(0)
0x7f2: Push((float)0.0)
0x7f3: @ ReportReputationChange(Stack[-5], Stack[-2], Stack[-1])
0x7f4: Pop(2)
0x7f5: Return(); Pop(2)

0x7f6: PushEmpty()
0x7f7: PushEmpty(object)
0x7f8: Stack[-1] = Stack[-2]
0x7f9: Call2 0x7de

0x7fa: Pop(1)
0x7fb: PushEmpty(object, bool)
0x7fc: Stack[-2] = Stack[-3]
0x7fd: Stack[-1] = (bool) 1
0x7fe: Call2 0x7d3

0x7ff: Pop(2)
0x800: Return(); Pop(0)

0x801: PushEmpty(bool, bool)
0x802: Push(GlobalVars[0])
0x803: @@ in(Stack[-2], Stack[-4])
0x804: Pop(1)
0x805: Push(Stack[-1])
0x806: IF (Stack[-1] == 0) GOTO 0x80d; Pop(1)

0x807: PushEmpty(object, bool)
0x808: Stack[-2] = Stack[-5]
0x809: Stack[-1] = (bool) 1
0x80a: Call2 0x7d3

0x80b: Pop(2)
0x80c: GOTO 0x815

0x80d: PushEmpty(object)
0x80e: Stack[-1] = Stack[-4]
0x80f: Push(-1, 2); TaskCall(1)
0x810: Call2 0x78

0x811: Pop(-1, 2); TaskReturn
0x812: Pop(1)
0x813: @ ResetAAS()
0x814: Pop(0)
0x815: Return(); Pop(2)

0x816: PushEmpty()
0x817: PushEmpty(float, object)
0x818: Stack[-1] = Stack[-3]
0x819: Call2 0x4ba

0x81a: Pop(1)
0x81b: Push((float)40000.0)
0x81c: Stack[-4] = Stack[-2] <= Stack[-1]; Pop(2);
0x81d: Return(); Pop(0)

0x81e: PushEmpty(float, string, float, float, string, float)
0x81f: PushEmpty(bool, object)
0x820: Stack[-1] = Stack[-9]
0x821: Call2 0x54c

0x822: Pop(1)
0x823: Pop(1); Push((bool) Stack[-1] == 0)
0x824: IF (Stack[-1] == 0) GOTO 0x827; Pop(1)

0x825: Stack[-8] = (bool) 0
0x826: Return(); Pop(6)

0x827: PushEmpty(bool, object)
0x828: Stack[-1] = Stack[-9]
0x829: Call2 0x4c9

0x82a: Pop(1)
0x82b: IF (Stack[-1] == 0) GOTO 0x832; Pop(1)

0x82c: Push("reputation")
0x82d: @@ GetProperty(Stack[-1], Stack[-4])
0x82e: Pop(1)
0x82f: Push((float)0.33)
0x830: Stack[-9] = Stack[-4] < Stack[-1]; Pop(1);
0x831: Return(); Pop(6)

0x832: PushEmpty(bool, object, string)
0x833: Stack[-2] = Stack[-10]
0x834: Stack[-1] = "class"
0x835: Call2 0x4ce

0x836: Pop(2)
0x837: Pop(1); Push((bool) Stack[-1] == 0)
0x838: IF (Stack[-1] == 0) GOTO 0x83b; Pop(1)

0x839: Stack[-8] = (bool) 0
0x83a: Return(); Pop(6)

0x83b: Push("class")
0x83c: @@ GetProperty(Stack[-1], Stack[-3])
0x83d: Pop(1)
0x83e: PushEmpty(bool)
0x83f: Stack[-1] = (bool) 1
0x840: PushEmpty(bool)
0x841: Stack[-1] = (bool) 1
0x842: Push("bomber")
0x843: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x844: IF (Stack[-1] == 0) GOTO 0x849; Pop(1)

0x845: Push("hunter")
0x846: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x847: IF (Stack[-1] == 0) GOTO 0x849; Pop(1)

0x848: Stack[-1] = (bool) 0
0x849: IF (Stack[-1] == 0) GOTO 0x84e; Pop(1)

0x84a: Push("grabitel")
0x84b: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x84c: IF (Stack[-1] == 0) GOTO 0x84e; Pop(1)

0x84d: Stack[-1] = (bool) 0
0x84e: IF (Stack[-1] == 0) GOTO 0x851; Pop(1)

0x84f: Stack[-8] = (bool) 1
0x850: Return(); Pop(6)

0x851: PushEmpty(bool, object, string)
0x852: Stack[-2] = Stack[-10]
0x853: Stack[-1] = "disease"
0x854: Call2 0x4ce

0x855: Pop(2)
0x856: Pop(1); Push((bool) Stack[-1] == 0)
0x857: IF (Stack[-1] == 0) GOTO 0x85a; Pop(1)

0x858: Stack[-8] = (bool) 0
0x859: Return(); Pop(6)

0x85a: PushEmpty(bool)
0x85b: Stack[-1] = (bool) 1
0x85c: PushEmpty(bool, string)
0x85d: Stack[-1] = Stack[-5]
0x85e: Call2 0x628

0x85f: Pop(1)
0x860: IF (Stack[-1] == 0) GOTO 0x865; Pop(1)

0x861: Push("dog")
0x862: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x863: IF (Stack[-1] == 0) GOTO 0x865; Pop(1)

0x864: Stack[-1] = (bool) 0
0x865: IF (Stack[-1] == 0) GOTO 0x86c; Pop(1)

0x866: Push("disease")
0x867: @@ GetProperty(Stack[-1], Stack[-2])
0x868: Pop(1)
0x869: Push((int) 0)
0x86a: Stack[-9] = Stack[-2] > Stack[-1]; Pop(1);
0x86b: Return(); Pop(6)

0x86c: Stack[-8] = (bool) 0
0x86d: Return(); Pop(6)

0x86e: PushEmpty(bool, bool)
0x86f: PushEmpty(bool, object)
0x870: Stack[-1] = Stack[-5]
0x871: Call2 0x54c

0x872: Pop(1)
0x873: Pop(1); Push((bool) Stack[-1] == 0)
0x874: IF (Stack[-1] == 0) GOTO 0x877; Pop(1)

0x875: Stack[-4] = (bool) 0
0x876: Return(); Pop(2)

0x877: Push(GlobalVars[0])
0x878: @@ in(Stack[-2], Stack[-4])
0x879: Pop(1)
0x87a: Push(Stack[-1])
0x87b: IF (Stack[-1] == 0) GOTO 0x87e; Pop(1)

0x87c: Stack[-4] = (bool) 1
0x87d: Return(); Pop(2)

0x87e: PushEmpty(bool, object)
0x87f: Stack[-1] = Stack[-5]
0x880: Call2 0x81e

0x881: Stack[-6] = Stack[-2]
0x882: Pop(2)
0x883: Return(); Pop(2)

0x884: PushEmpty()
0x885: PushEmpty(object)
0x886: Stack[-1] = Stack[-2]
0x887: Call2 0x8ab

0x888: Pop(1)
0x889: Return(); Pop(0)

0x88a: PushEmpty(bool, bool)
0x88b: PushEmpty(bool, object, bool)
0x88c: Stack[-2] = Stack[-7]
0x88d: Stack[-1] = !Stack[-6]; Pop(0);
0x88e: Call2 0x744

0x88f: Pop(2)
0x890: IF (Stack[-1] == 0) GOTO 0x8a2; Pop(1)

0x891: @ CanSee(Stack[-1], Stack[-5])
0x892: Pop(0)
0x893: PushEmpty(bool)
0x894: Stack[-1] = (bool) 1
0x895: Push(Stack[-2])
0x896: IF (Stack[-1] == 0) GOTO 0x89f; Pop(1)

0x897: PushEmpty(float, object)
0x898: Stack[-1] = Stack[-8]
0x899: Call2 0x4ba

0x89a: Pop(1)
0x89b: Push((float)490000.0)
0x89c: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x89d: IF (Stack[-1] == 0) GOTO 0x89f; Pop(1)

0x89e: Stack[-1] = (bool) 0
0x89f: IF (Stack[-1] == 0) GOTO 0x8a2; Pop(1)

0x8a0: Stack[-6] = (bool) 1
0x8a1: Return(); Pop(2)

0x8a2: Stack[-6] = (bool) 0
0x8a3: Return(); Pop(2)

0x8a4: PushEmpty(int, int)
0x8a5: Push("d11q01SoldierAttack")
0x8a6: @ GetVariable(Stack[-1], Stack[-2])
0x8a7: Pop(1)
0x8a8: Push((int) 0)
0x8a9: Stack[-4] = Stack[-2] != Stack[-1]; Pop(1);
0x8aa: Return(); Pop(2)

0x8ab: PushEmpty()
0x8ac: PushEmpty(object)
0x8ad: Stack[-1] = Stack[-2]
0x8ae: Call2 0x801

0x8af: Pop(1)
0x8b0: Return(); Pop(0)

0x8b1: PushEmpty(object, object)
0x8b2: @ GetScene(Stack[-1])
0x8b3: Pop(0)
0x8b4: PushEmpty(object)
0x8b5: Call2 0x67f

0x8b6: Pop(0)
0x8b7: @@ RemoveStationaryActor(Stack[-1])
0x8b8: Pop(1)
0x8b9: PushEmpty(bool, string, string)
0x8ba: Stack[-2] = "quest_d11_01"
0x8bb: Stack[-1] = "soldier_death"
0x8bc: Call2 0x6e0

0x8bd: Pop(3)
0x8be: PushEmpty(object)
0x8bf: Stack[-1] = Stack[-4]
0x8c0: Push(-1, 0); TaskCall(7)
0x8c1: Call2 0x40b

0x8c2: Pop(-1, 0); TaskReturn
0x8c3: Pop(1)
0x8c4: Return(); Pop(2)

0x8c5: Stack[-1] = 0
