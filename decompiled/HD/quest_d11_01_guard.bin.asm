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
	in
	fdie
	GetPosition
	bdie
	GetScriptProperty
	Owner
	HasScriptProperty
	GetScriptProperty
	@GetEyesHeight
	GetEyesHeight
	head
	fire
	bullet
	phys
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
	RemoveStationaryActor

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
	UnlookAsync (1 args)
	RemoveEnvelope (0 args)
	StopSecondaryAnimation (0 args)
	IsDead (1 args)
	GetSecondaryAnimationType (1 args)
	FadeSecondaryAnimation (4 args)
	CreateVectorVector (1 args)
	RotateAsync (2 args)
	GetEyesHeight (1 args)
	IsExisting3DSound (2 args)
	Is3DSoundLoaded (2 args)
	PlayGlobalSound (2 args)
	self (1 args)
	CreateObjectSet (1 args)
	CreateFloatVector (1 args)
	RumblePlay (2 args)
	SendWorldWndMessage (2 args)
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
		EVENT_1 Op = 0x282 Vars = (object)
		EVENT_3 Op = 0x28e Vars = (object)
		EVENT_17 Op = 0x29a Vars = (object)
	GTASK_4 Vars = (cvector, cvector) Params = 1
		EVENT_3 Op = 0x2b8 Vars = (object)
		EVENT_17 Op = 0x2d6 Vars = (object)
		EVENT_30 Op = 0x2ea Vars = (object, object, bool)
		EVENT_1 Op = 0x2f7 Vars = (object)
	GTASK_5  Params = 1
		EVENT_0 Op = 0x374 Vars = (object)
		EVENT_22 Op = 0x3f3 Vars = (object, int, float, float)
		EVENT_16 Op = 0x3f5 Vars = (object, string)
		EVENT_41 Op = 0x3f7 Vars = (object)

Events:
EVENT_22 Op = 0x649 Vars = (object, int, float, float)
EVENT_43 Op = 0x651 Vars = (object, int, float, float, cvector, cvector)
EVENT_16 Op = 0x65b Vars = (object, string)
EVENT_41 Op = 0x668 Vars = (object)

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
0xd: Call2 0x499

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
0x26: Call2 0x668

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
0x3b: Call2 0x52f

0x3c: Pop(1)
0x3d: Return(); Pop(0)

0x3e: PushEmpty()
0x3f: PushEmpty(bool, object)
0x40: Stack[-1] = Stack[-3]
0x41: Call2 0x499

0x42: Pop(1)
0x43: Pop(1); Push((bool) Stack[-1] == 0)
0x44: IF (Stack[-1] == 0) GOTO 0x4a; Pop(1)

0x45: PushEmpty(object)
0x46: Stack[-1] = Stack[-2]
0x47: Call2 0x714

0x48: Pop(1)
0x49: Return(); Pop(0)

0x4a: PushEmpty()
0x4b: Call2 0x18

0x4c: Pop(0)
0x4d: PushEmpty(object)
0x4e: Stack[-1] = Stack[-2]
0x4f: Call2 0x72c

0x50: Pop(1)
0x51: Return(); Pop(0)

0x52: PushEmpty()
0x53: PushEmpty(bool, object, object, bool)
0x54: Stack[-3] = Stack[-7]
0x55: Stack[-2] = Stack[-6]
0x56: Stack[-1] = Stack[-5]
0x57: Call2 0x7c0

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
0x62: Call2 0x7a4

0x63: Pop(1)
0x64: IF (Stack[-1] == 0) GOTO 0x6c; Pop(1)

0x65: PushEmpty()
0x66: Call2 0x18

0x67: Pop(0)
0x68: PushEmpty(object)
0x69: Stack[-1] = Stack[-2]
0x6a: Call2 0x7ba

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
0x7c: Call2 0x622

0x7d: Pop(1)
0x7e: @ CanSee(Stack[-1], Stack[-0])
0x7f: Pop(0)
0x80: Push( Stack[1 + Tasks[-1].StackPointer] )
0x81: IF (Stack[-1] == 0) GOTO 0x8f; Pop(1)

0x82: PushEmpty(bool, object)
0x83: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x84: Call2 0x74c

0x85: Pop(1)
0x86: IF (Stack[-1] == 0) GOTO 0x8d; Pop(1)

0x87: PushEmpty(object, bool)
0x88: Stack[-2] = Stack[0 + Tasks[-1].StackPointer]
0x89: Stack[-1] = (bool) 1
0x8a: Call2 0x709

0x8b: Pop(2)
0x8c: Return(); Pop(6)

0x8d: @ Face(Stack[-0])
0x8e: Pop(0)
0x8f: PushEmpty()
0x90: Call2 0x62b

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
0xb9: Call2 0x622

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
0xc8: Call2 0x74c

0xc9: Pop(1)
0xca: IF (Stack[-1] == 0) GOTO 0xd4; Pop(1)

0xcb: PushEmpty()
0xcc: Call2 0x112

0xcd: Pop(0)
0xce: PushEmpty(object, bool)
0xcf: Stack[-2] = Stack[0 + Tasks[-1].StackPointer]
0xd0: Stack[-1] = (bool) 0
0xd1: Call2 0x709

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
0xee: Call2 0x709

0xef: Pop(2)
0xf0: Return(); Pop(6)

0xf1: PushEmpty()
0xf2: PushEmpty(bool, object)
0xf3: Stack[-1] = Stack[-3]
0xf4: Call2 0x499

0xf5: Pop(1)
0xf6: Pop(1); Push((bool) Stack[-1] == 0)
0xf7: IF (Stack[-1] == 0) GOTO 0xfd; Pop(1)

0xf8: PushEmpty(object)
0xf9: Stack[-1] = Stack[-2]
0xfa: Call2 0x714

0xfb: Pop(1)
0xfc: Return(); Pop(0)

0xfd: PushEmpty()
0xfe: Call2 0x112

0xff: Pop(0)
0x100: PushEmpty(object)
0x101: Stack[-1] = Stack[-2]
0x102: Call2 0x72c

0x103: Pop(1)
0x104: Return(); Pop(0)

0x105: PushEmpty()
0x106: PushEmpty(bool, object, object, bool)
0x107: Stack[-3] = Stack[-7]
0x108: Stack[-2] = Stack[-6]
0x109: Stack[-1] = Stack[-5]
0x10a: Call2 0x7c0

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
0x11f: Call2 0x668

0x120: Pop(1)
0x121: Return(); Pop(0)

0x122: PushEmpty(bool, bool, bool, bool)
0x123: Stack[0 + Tasks[-1].StackPointer] = Stack[-6]
0x124: PushEmpty(object)
0x125: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x126: Call2 0x622

0x127: Pop(1)
0x128: PushEmpty()
0x129: Call2 0x62b

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
0x13e: Call2 0x499

0x13f: Pop(1)
0x140: IF (Stack[-1] == 0) GOTO 0x1a6; Pop(1)

0x141: @ CanSee(Stack[-1], Stack[-0])
0x142: Pop(0)
0x143: Push(Stack[-1])
0x144: IF (Stack[-1] == 0) GOTO 0x14d; Pop(1)

0x145: PushEmpty(object)
0x146: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x147: Call2 0x622

0x148: Pop(1)
0x149: PushEmpty()
0x14a: Call2 0x1d6

0x14b: Pop(0)
0x14c: GOTO 0x19c

0x14d: PushEmpty(object)
0x14e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x14f: Call2 0x52f

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
0x166: Call2 0x499

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
0x18b: Call2 0x499

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
0x1bd: Call2 0x52f

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
0x1d9: Call2 0x622

0x1da: Pop(1)
0x1db: @ ReportAttack(Stack[-0])
0x1dc: Pop(0)
0x1dd: PushEmpty(bool, object)
0x1de: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1df: Call2 0x416

0x1e0: Pop(1)
0x1e1: IF (Stack[-1] == 0) GOTO 0x1e7; Pop(1)

0x1e2: PushEmpty(object)
0x1e3: Call2 0x5c1

0x1e4: Pop(0)
0x1e5: @ SendPlayerEnemy(Stack[-0], Stack[-1])
0x1e6: Pop(1)
0x1e7: @ GetDirection(Stack[-14])
0x1e8: Pop(0)
0x1e9: PushEmpty(cvector, object)
0x1ea: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1eb: Call2 0x407

0x1ec: Stack[-15] = Stack[-2]
0x1ed: Pop(2)
0x1ee: PushEmpty(float, cvector, cvector)
0x1ef: Stack[-2] = Stack[-17]
0x1f0: Stack[-1] = Stack[-16]
0x1f1: Call2 0x600

0x1f2: Pop(2)
0x1f3: Push((float)0.99939)
0x1f4: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x1f5: IF (Stack[-1] == 0) GOTO 0x1f7; Pop(1)

0x1f6: Return(); Pop(28)

0x1f7: PushEmpty()
0x1f8: Call2 0x62b

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
0x218: Call2 0x407

0x219: Stack[-15] = Stack[-2]
0x21a: Pop(2)
0x21b: Push(CvectorIndex(Stack[-13], 1))
0x21c: PushEmpty(float, object)
0x21d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x21e: Call2 0x53a

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
0x22f: Call2 0x427

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
0x255: Call2 0x499

0x256: Pop(1)
0x257: Pop(1); Push((bool) Stack[-1] == 0)
0x258: IF (Stack[-1] == 0) GOTO 0x25a; Pop(1)

0x259: Return(); Pop(0)

0x25a: PushEmpty(object)
0x25b: Stack[-1] = Stack[-2]
0x25c: Call2 0x714

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
0x26f: Call2 0x7c0

0x270: Pop(3)
0x271: IF (Stack[-1] == 0) GOTO 0x276; Pop(1)

0x272: PushEmpty(object)
0x273: Stack[-1] = Stack[-4]
0x274: Call2 0x252

0x275: Pop(1)
0x276: Return(); Pop(0)

0x277: EventDisable(1)
0x278: EventDisable(3)
0x279: Push((int) 1)
0x27a: @ Sleep(Stack[-1])
0x27b: Pop(1)
0x27c: EventEnable(1)
0x27d: EventEnable(3)
0x27e: @ Hold()
0x27f: Pop(0)
0x280: GOTO 0x27e

0x281: Return(); Pop(0)

0x282: PushEmpty(bool, bool)
0x283: @ IsPlayerActor(Stack[-3], Stack[-1])
0x284: Pop(0)
0x285: Push(Stack[-1])
0x286: IF (Stack[-1] == 0) GOTO 0x28d; Pop(1)

0x287: PushEmpty(object)
0x288: Stack[-1] = Stack[-4]
0x289: Push(-1, 2); TaskCall(4)
0x28a: Call2 0x2a2

0x28b: Pop(-1, 2); TaskReturn
0x28c: Pop(1)
0x28d: Return(); Pop(2)

0x28e: PushEmpty(bool, bool)
0x28f: @ IsPlayerActor(Stack[-3], Stack[-1])
0x290: Pop(0)
0x291: Push(Stack[-1])
0x292: IF (Stack[-1] == 0) GOTO 0x299; Pop(1)

0x293: PushEmpty(object)
0x294: Stack[-1] = Stack[-4]
0x295: Push(-1, 2); TaskCall(4)
0x296: Call2 0x2a2

0x297: Pop(-1, 2); TaskReturn
0x298: Pop(1)
0x299: Return(); Pop(2)

0x29a: PushEmpty()
0x29b: PushEmpty(object)
0x29c: Stack[-1] = Stack[-2]
0x29d: Push(-1, 2); TaskCall(4)
0x29e: Call2 0x2a2

0x29f: Pop(-1, 2); TaskReturn
0x2a0: Pop(1)
0x2a1: Return(); Pop(0)

0x2a2: PushEmpty()
0x2a3: PushEmpty()
0x2a4: Call2 0x702

0x2a5: Pop(0)
0x2a6: PushEmpty(object)
0x2a7: Stack[-1] = Stack[-2]
0x2a8: Call2 0x2d6

0x2a9: Pop(1)
0x2aa: PushEmpty()
0x2ab: Call2 0x2af

0x2ac: Pop(0)
0x2ad: GOTO 0x2aa

0x2ae: Return(); Pop(0)

0x2af: PushEmpty()
0x2b0: Call2 0x702

0x2b1: Pop(0)
0x2b2: PushEmpty()
0x2b3: Call2 0x305

0x2b4: Pop(0)
0x2b5: GOTO 0x2b2

0x2b6: Return(); Pop(0)

0x2b7: Return(); Pop(0)

0x2b8: PushEmpty(bool, bool)
0x2b9: PushEmpty(bool, object)
0x2ba: Stack[-1] = Stack[-5]
0x2bb: Call2 0x499

0x2bc: Pop(1)
0x2bd: Pop(1); Push((bool) Stack[-1] == 0)
0x2be: IF (Stack[-1] == 0) GOTO 0x2c0; Pop(1)

0x2bf: Return(); Pop(2)

0x2c0: PushEmpty(bool, object)
0x2c1: Stack[-1] = Stack[-5]
0x2c2: Call2 0x754

0x2c3: Pop(1)
0x2c4: Pop(1); Push((bool) Stack[-1] == 0)
0x2c5: IF (Stack[-1] == 0) GOTO 0x2cc; Pop(1)

0x2c6: Push(GlobalVars[0])
0x2c7: @@ in(Stack[-2], Stack[-4])
0x2c8: Pop(1)
0x2c9: Pop(0); Push((bool) Stack[-1] == 0)
0x2ca: IF (Stack[-1] == 0) GOTO 0x2cc; Pop(1)

0x2cb: Return(); Pop(2)

0x2cc: PushEmpty()
0x2cd: Call2 0x359

0x2ce: Pop(0)
0x2cf: PushEmpty(object)
0x2d0: Stack[-1] = Stack[-4]
0x2d1: Push(-1, 1); TaskCall(0)
0x2d2: Call2 0x0

0x2d3: Pop(-1, 1); TaskReturn
0x2d4: Pop(1)
0x2d5: Return(); Pop(2)

0x2d6: PushEmpty()
0x2d7: PushEmpty(bool, object)
0x2d8: Stack[-1] = Stack[-3]
0x2d9: Call2 0x499

0x2da: Pop(1)
0x2db: Pop(1); Push((bool) Stack[-1] == 0)
0x2dc: IF (Stack[-1] == 0) GOTO 0x2e2; Pop(1)

0x2dd: PushEmpty(object)
0x2de: Stack[-1] = Stack[-2]
0x2df: Call2 0x714

0x2e0: Pop(1)
0x2e1: Return(); Pop(0)

0x2e2: PushEmpty()
0x2e3: Call2 0x359

0x2e4: Pop(0)
0x2e5: PushEmpty(object)
0x2e6: Stack[-1] = Stack[-2]
0x2e7: Call2 0x72c

0x2e8: Pop(1)
0x2e9: Return(); Pop(0)

0x2ea: PushEmpty()
0x2eb: PushEmpty(bool, object, object, bool)
0x2ec: Stack[-3] = Stack[-7]
0x2ed: Stack[-2] = Stack[-6]
0x2ee: Stack[-1] = Stack[-5]
0x2ef: Call2 0x7c0

0x2f0: Pop(3)
0x2f1: IF (Stack[-1] == 0) GOTO 0x2f6; Pop(1)

0x2f2: PushEmpty(object)
0x2f3: Stack[-1] = Stack[-4]
0x2f4: Call2 0x2d6

0x2f5: Pop(1)
0x2f6: Return(); Pop(0)

0x2f7: PushEmpty()
0x2f8: PushEmpty(bool, object)
0x2f9: Stack[-1] = Stack[-3]
0x2fa: Call2 0x7a4

0x2fb: Pop(1)
0x2fc: IF (Stack[-1] == 0) GOTO 0x304; Pop(1)

0x2fd: PushEmpty()
0x2fe: Call2 0x359

0x2ff: Pop(0)
0x300: PushEmpty(object)
0x301: Stack[-1] = Stack[-2]
0x302: Call2 0x7da

0x303: Pop(1)
0x304: Return(); Pop(0)

0x305: PushEmpty(int, bool, cvector, object, int, bool, cvector, object)
0x306: @ GetPFPosition(Stack[-1])
0x307: Pop(0)
0x308: @ GetDirection(Stack[-0])
0x309: Pop(0)
0x30a: PushEmpty()
0x30b: Call2 0x35e

0x30c: Pop(0)
0x30d: Push((int) 10)
0x30e: @ irand(Stack[-5], Stack[-1])
0x30f: Pop(1)
0x310: Push((int) 5)
0x311: Pop(1); Push(Stack[-5] + Stack[-1]);
0x312: @ Sleep(Stack[-1], Stack[-4])
0x313: Pop(1)
0x314: Push(Stack[-3])
0x315: IF (Stack[-1] == 0) GOTO 0x31a; Pop(1)

0x316: PushEmpty()
0x317: Call2 0x2b7

0x318: Pop(0)
0x319: GOTO 0x357

0x31a: PushEmpty()
0x31b: Call2 0x35e

0x31c: Pop(0)
0x31d: @ GetPFPosition(Stack[-2])
0x31e: Pop(0)
0x31f: PushEmpty(float, cvector, cvector)
0x320: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x321: Stack[-1] = Stack[-5]
0x322: Call2 0x5d1

0x323: Pop(2)
0x324: Push((int) 40000)
0x325: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x326: IF (Stack[-1] == 0) GOTO 0x349; Pop(1)

0x327: @ FindPathTo(Stack[-1], Stack[-1])
0x328: Pop(0)
0x329: Pop(0); Push(( Stack[-1] != 0 )
0x32a: IF (Stack[-1] == 0) GOTO 0x344; Pop(1)

0x32b: @ RotatePath(Stack[-1], Stack[-3])
0x32c: Pop(0)
0x32d: Pop(0); Push((bool) Stack[-3] == 0)
0x32e: IF (Stack[-1] == 0) GOTO 0x330; Pop(1)

0x32f: GOTO 0x356

0x330: Push((bool) 0)
0x331: @ FollowPath(Stack[-2], Stack[-1], Stack[-4])
0x332: Pop(1)
0x333: Pop(0); Push((bool) Stack[-3] == 0)
0x334: IF (Stack[-1] == 0) GOTO 0x336; Pop(1)

0x335: GOTO 0x356

0x336: Push(CvectorIndex(Stack[-0], 0))
0x337: Push(CvectorIndex(Stack[-0], 2))
0x338: @ Rotate(Stack[-2], Stack[-1], Stack[-5])
0x339: Pop(2)
0x33a: Pop(0); Push((bool) Stack[-3] == 0)
0x33b: IF (Stack[-1] == 0) GOTO 0x33d; Pop(1)

0x33c: GOTO 0x356

0x33d: @ WaitForAnimEnd(Stack[-3])
0x33e: Pop(0)
0x33f: Pop(0); Push((bool) Stack[-3] == 0)
0x340: IF (Stack[-1] == 0) GOTO 0x342; Pop(1)

0x341: GOTO 0x356

0x342: GOTO 0x357

0x343: GOTO 0x347

0x344: Push((int) 1)
0x345: @ Sleep(Stack[-1])
0x346: Pop(1)
0x347: Stack[-1] = 0
0x348: GOTO 0x356

0x349: Push(CvectorIndex(Stack[-0], 0))
0x34a: Push(CvectorIndex(Stack[-0], 2))
0x34b: @ Rotate(Stack[-2], Stack[-1], Stack[-5])
0x34c: Pop(2)
0x34d: Pop(0); Push((bool) Stack[-3] == 0)
0x34e: IF (Stack[-1] == 0) GOTO 0x350; Pop(1)

0x34f: GOTO 0x356

0x350: @ WaitForAnimEnd(Stack[-3])
0x351: Pop(0)
0x352: Pop(0); Push((bool) Stack[-3] == 0)
0x353: IF (Stack[-1] == 0) GOTO 0x355; Pop(1)

0x354: GOTO 0x356

0x355: GOTO 0x357

0x356: GOTO 0x31a

0x357: GOTO 0x30a

0x358: Return(); Pop(8)

0x359: @ StopGroup0()
0x35a: Pop(0)
0x35b: @ Stop()
0x35c: Pop(0)
0x35d: Return(); Pop(0)

0x35e: Return(); Pop(0)

0x35f: PushEmpty()
0x360: PushEmpty(object)
0x361: Stack[-1] = Stack[-2]
0x362: Call2 0x365

0x363: Pop(1)
0x364: Return(); Pop(0)

0x365: PushEmpty()
0x366: EventDisable(0)
0x367: PushEmpty(object)
0x368: Stack[-1] = Stack[-2]
0x369: Call2 0x37e

0x36a: Pop(1)
0x36b: Push((int) 50)
0x36c: Push((int) 40)
0x36d: @ SetRTEnvelope(Stack[-2], Stack[-1])
0x36e: Pop(2)
0x36f: EventEnable(0)
0x370: @ Hold()
0x371: Pop(0)
0x372: GOTO 0x370

0x373: Return(); Pop(0)

0x374: PushEmpty(bool, bool)
0x375: @ IsOverrideActive(Stack[-1])
0x376: Pop(0)
0x377: Pop(0); Push((bool) Stack[-1] == 0)
0x378: IF (Stack[-1] == 0) GOTO 0x37d; Pop(1)

0x379: PushEmpty(object)
0x37a: Stack[-1] = Stack[-4]
0x37b: Call2 0x63c

0x37c: Pop(1)
0x37d: Return(); Pop(2)

0x37e: PushEmpty(cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector, cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector)
0x37f: Pop(0); Push((bool) Stack[-21] == 0)
0x380: IF (Stack[-1] == 0) GOTO 0x386; Pop(1)

0x381: PushEmpty(string)
0x382: Stack[-1] = "fdie"
0x383: Call2 0x3d9

0x384: Pop(1)
0x385: GOTO 0x3d8

0x386: @@ GetPosition(Stack[-10])
0x387: Pop(0)
0x388: @ GetPosition(Stack[-9])
0x389: Pop(0)
0x38a: @ GetDirection(Stack[-8])
0x38b: Pop(0)
0x38c: Stack[-7] = Stack[-9] - Stack[-10]; Pop(0);
0x38d: Push(CvectorIndex(Stack[-7], 0))
0x38e: Push(CvectorIndex(Stack[-9], 0))
0x38f: Pop(2); Push(Stack[-2] * Stack[-1]);
0x390: Push(CvectorIndex(Stack[-8], 2))
0x391: Push(CvectorIndex(Stack[-10], 2))
0x392: Pop(2); Push(Stack[-2] * Stack[-1]);
0x393: Pop(2); Push(Stack[-2] + Stack[-1]);
0x394: Push((int) 0)
0x395: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x396: IF (Stack[-1] == 0) GOTO 0x399; Pop(1)

0x397: Stack[-6] = "fdie"
0x398: GOTO 0x39a

0x399: Stack[-6] = "bdie"
0x39a: @ RemoveRTEnvelope()
0x39b: Pop(0)
0x39c: @ SetDeathState()
0x39d: Pop(0)
0x39e: @ Stop()
0x39f: Pop(0)
0x3a0: @ StopAsync()
0x3a1: Pop(0)
0x3a2: Stack[-5] = Stack[-21]
0x3a3: Push("GetScriptProperty")
0x3a4: Push((int) 2)
0x3a5: Pop(2); Push(IsFuncExist(Stack[-23], Stack[-2], Stack[-1]))
0x3a6: IF (Stack[-1] == 0) GOTO 0x3b2; Pop(1)

0x3a7: Push("Owner")
0x3a8: @@ HasScriptProperty(Stack[-5], Stack[-1])
0x3a9: Pop(1)
0x3aa: Push(Stack[-4])
0x3ab: IF (Stack[-1] == 0) GOTO 0x3b2; Pop(1)

0x3ac: Push("Owner")
0x3ad: @@ GetScriptProperty(Stack[-6], Stack[-1])
0x3ae: Pop(1)
0x3af: Pop(0); Push((bool) Stack[-5] == 0)
0x3b0: IF (Stack[-1] == 0) GOTO 0x3b2; Pop(1)

0x3b1: Stack[-5] = Stack[-21]
0x3b2: Push("@GetEyesHeight")
0x3b3: Push((int) 1)
0x3b4: Pop(2); Push(IsFuncExist(Stack[-7], Stack[-2], Stack[-1]))
0x3b5: IF (Stack[-1] == 0) GOTO 0x3c1; Pop(1)

0x3b6: @@ GetEyesHeight(Stack[-2])
0x3b7: Pop(0)
0x3b8: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x3b9: Push(CvectorIndex(Stack[-1], 1))
0x3ba: Stack[-1] = Stack[-3]
0x3bb: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x3bc: Push("head")
0x3bd: @ LookAsync(Stack[-22], Stack[-1], Stack[-2])
0x3be: Pop(1)
0x3bf: Stack[-3] = (bool) 1
0x3c0: GOTO 0x3c2

0x3c1: Stack[-3] = (bool) 0
0x3c2: PushEmpty(string)
0x3c3: Stack[-1] = Stack[-7]
0x3c4: Call2 0x541

0x3c5: Pop(1)
0x3c6: Push("all")
0x3c7: @ PlayAnimation(Stack[-1], Stack[-7])
0x3c8: Pop(1)
0x3c9: @ WaitForAnimEnd()
0x3ca: Pop(0)
0x3cb: Push(Stack[-3])
0x3cc: IF (Stack[-1] == 0) GOTO 0x3d2; Pop(1)

0x3cd: @ StopAsync()
0x3ce: Pop(0)
0x3cf: Push("head")
0x3d0: @ UnlookAsync(Stack[-1])
0x3d1: Pop(1)
0x3d2: Push("all")
0x3d3: @ LockAnimationEnd(Stack[-1], Stack[-7])
0x3d4: Pop(1)
0x3d5: @ RemoveEnvelope()
0x3d6: Pop(0)
0x3d7: Stack[-5] = 0
0x3d8: Return(); Pop(20)

0x3d9: PushEmpty()
0x3da: @ RemoveRTEnvelope()
0x3db: Pop(0)
0x3dc: @ SetDeathState()
0x3dd: Pop(0)
0x3de: @ Stop()
0x3df: Pop(0)
0x3e0: @ StopAsync()
0x3e1: Pop(0)
0x3e2: @ StopSecondaryAnimation()
0x3e3: Pop(0)
0x3e4: PushEmpty(string)
0x3e5: Stack[-1] = Stack[-2]
0x3e6: Call2 0x541

0x3e7: Pop(1)
0x3e8: Push("all")
0x3e9: @ PlayAnimation(Stack[-1], Stack[-2])
0x3ea: Pop(1)
0x3eb: @ WaitForAnimEnd()
0x3ec: Pop(0)
0x3ed: Push("all")
0x3ee: @ LockAnimationEnd(Stack[-1], Stack[-2])
0x3ef: Pop(1)
0x3f0: @ RemoveEnvelope()
0x3f1: Pop(0)
0x3f2: Return(); Pop(0)

0x3f3: PushEmpty()
0x3f4: Return(); Pop(0)

0x3f5: PushEmpty()
0x3f6: Return(); Pop(0)

0x3f7: PushEmpty()
0x3f8: Return(); Pop(0)

0x3f9: PushEmpty()
0x3fa: Push((int) 2)
0x3fb: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3fc: IF (Stack[-1] == 0) GOTO 0x400; Pop(1)

0x3fd: Stack[-2] = "fire"
0x3fe: Return(); Pop(0)

0x3ff: GOTO 0x405

0x400: Push((int) 1)
0x401: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x402: IF (Stack[-1] == 0) GOTO 0x405; Pop(1)

0x403: Stack[-2] = "bullet"
0x404: Return(); Pop(0)

0x405: Stack[-2] = "phys"
0x406: Return(); Pop(0)

0x407: PushEmpty(cvector, cvector, cvector, cvector)
0x408: @ GetPosition(Stack[-2])
0x409: Pop(0)
0x40a: @@ GetPosition(Stack[-1])
0x40b: Pop(0)
0x40c: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x40d: Return(); Pop(4)

0x40e: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x40f: @ GetPosition(Stack[-3])
0x410: Pop(0)
0x411: @@ GetPosition(Stack[-2])
0x412: Pop(0)
0x413: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x414: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x415: Return(); Pop(6)

0x416: PushEmpty(bool, bool)
0x417: @ IsPlayerActor(Stack[-3], Stack[-1])
0x418: Pop(0)
0x419: Stack[-4] = Stack[-1]
0x41a: Return(); Pop(2)

0x41b: PushEmpty(bool, bool)
0x41c: Push("HasProperty")
0x41d: Push((int) 2)
0x41e: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x41f: Pop(1); Push((bool) Stack[-1] == 0)
0x420: IF (Stack[-1] == 0) GOTO 0x423; Pop(1)

0x421: Stack[-5] = (bool) 0
0x422: Return(); Pop(2)

0x423: @@ HasProperty(Stack[-3], Stack[-1])
0x424: Pop(0)
0x425: Stack[-5] = Stack[-1]
0x426: Return(); Pop(2)

0x427: PushEmpty(int, string, int, float, float, float, int, string, int, float, float, float)
0x428: PushEmpty(bool, object, string)
0x429: Stack[-2] = Stack[-18]
0x42a: Stack[-1] = "health"
0x42b: Call2 0x41b

0x42c: Pop(2)
0x42d: Pop(1); Push((bool) Stack[-1] == 0)
0x42e: IF (Stack[-1] == 0) GOTO 0x431; Pop(1)

0x42f: Stack[-16] = (float) 0.0
0x430: Return(); Pop(12)

0x431: PushEmpty(bool, object, string)
0x432: Stack[-2] = Stack[-18]
0x433: Stack[-1] = "armor"
0x434: Call2 0x41b

0x435: Pop(2)
0x436: Pop(1); Push((bool) Stack[-1] == 0)
0x437: IF (Stack[-1] == 0) GOTO 0x43a; Pop(1)

0x438: Stack[-6] = (int) 0
0x439: GOTO 0x43d

0x43a: Push("armor")
0x43b: @@ GetProperty(Stack[-1], Stack[-7])
0x43c: Pop(1)
0x43d: Push("armor_")
0x43e: PushEmpty(string, int)
0x43f: Stack[-1] = Stack[-16]
0x440: Call2 0x3f9

0x441: Pop(1)
0x442: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x443: PushEmpty(bool, object, string)
0x444: Stack[-2] = Stack[-18]
0x445: Stack[-1] = Stack[-8]
0x446: Call2 0x41b

0x447: Pop(2)
0x448: Pop(1); Push((bool) Stack[-1] == 0)
0x449: IF (Stack[-1] == 0) GOTO 0x44c; Pop(1)

0x44a: Stack[-4] = (int) 0
0x44b: GOTO 0x44e

0x44c: @@ GetProperty(Stack[-5], Stack[-4])
0x44d: Pop(0)
0x44e: PushEmpty(float, float, float)
0x44f: Pop(0); Push(Stack[-9] + Stack[-7]);
0x450: Push((float)100.0)
0x451: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0x452: Stack[-1] = (int) 1
0x453: Call2 0x5d5

0x454: Stack[-6] = Stack[-3]
0x455: Pop(3)
0x456: Push("health")
0x457: @@ GetProperty(Stack[-1], Stack[-3])
0x458: Pop(1)
0x459: Push((int) 1)
0x45a: Pop(1); Push(Stack[-1] - Stack[-4]);
0x45b: Stack[-2] = Stack[-15] * Stack[-1]; Pop(1);
0x45c: Push("health")
0x45d: PushEmpty(float, float, float, float)
0x45e: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0x45f: Stack[-2] = (int) 0
0x460: Stack[-1] = (int) 1
0x461: Call2 0x5dc

0x462: Pop(3)
0x463: @@ SetProperty(Stack[-2], Stack[-1])
0x464: Pop(2)
0x465: PushEmpty(bool, object)
0x466: Stack[-1] = Stack[-17]
0x467: Call2 0x416

0x468: Pop(1)
0x469: IF (Stack[-1] == 0) GOTO 0x46e; Pop(1)

0x46a: PushEmpty(float)
0x46b: Stack[-1] = -Stack[-2]; Pop(0);
0x46c: Call2 0x611

0x46d: Pop(1)
0x46e: Stack[-16] = Stack[-1]
0x46f: Return(); Pop(12)

0x470: PushEmpty(bool, bool)
0x471: @@ IsDead(Stack[-1])
0x472: Pop(0)
0x473: Stack[-4] = Stack[-1]
0x474: Return(); Pop(2)

0x475: PushEmpty(object, object, object, object)
0x476: Pop(0); Push((bool) Stack[-5] == 0)
0x477: IF (Stack[-1] == 0) GOTO 0x47a; Pop(1)

0x478: Stack[-6] = (bool) 0
0x479: Return(); Pop(4)

0x47a: PushEmpty(bool)
0x47b: Stack[-1] = (bool) 0
0x47c: Push("IsDead")
0x47d: Push((int) 1)
0x47e: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x47f: IF (Stack[-1] == 0) GOTO 0x486; Pop(1)

0x480: PushEmpty(bool, object)
0x481: Stack[-1] = Stack[-8]
0x482: Call2 0x470

0x483: Pop(1)
0x484: IF (Stack[-1] == 0) GOTO 0x486; Pop(1)

0x485: Stack[-1] = (bool) 1
0x486: IF (Stack[-1] == 0) GOTO 0x489; Pop(1)

0x487: Stack[-6] = (bool) 0
0x488: Return(); Pop(4)

0x489: @ GetScene(Stack[-2])
0x48a: Pop(0)
0x48b: Pop(0); Push((bool) Stack[-2] == 0)
0x48c: IF (Stack[-1] == 0) GOTO 0x48f; Pop(1)

0x48d: Stack[-6] = (bool) 0
0x48e: Return(); Pop(4)

0x48f: @@ GetScene(Stack[-1])
0x490: Pop(0)
0x491: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x492: IF (Stack[-1] == 0) GOTO 0x495; Pop(1)

0x493: Stack[-6] = (bool) 0
0x494: Return(); Pop(4)

0x495: Stack[-6] = (bool) 1
0x496: Return(); Pop(4)

0x497: Stack[-1] = 0
0x498: Stack[-2] = 0
0x499: PushEmpty(int, int)
0x49a: PushEmpty(bool, object)
0x49b: Stack[-1] = Stack[-5]
0x49c: Call2 0x475

0x49d: Pop(1)
0x49e: Pop(1); Push((bool) Stack[-1] == 0)
0x49f: IF (Stack[-1] == 0) GOTO 0x4a2; Pop(1)

0x4a0: Stack[-4] = (bool) 0
0x4a1: Return(); Pop(2)

0x4a2: PushEmpty(bool, object, string)
0x4a3: Stack[-2] = Stack[-6]
0x4a4: Stack[-1] = "noaccess"
0x4a5: Call2 0x41b

0x4a6: Pop(2)
0x4a7: Pop(1); Push((bool) Stack[-1] == 0)
0x4a8: IF (Stack[-1] == 0) GOTO 0x4ab; Pop(1)

0x4a9: Stack[-4] = (bool) 1
0x4aa: Return(); Pop(2)

0x4ab: Push("noaccess")
0x4ac: @@ GetProperty(Stack[-1], Stack[-2])
0x4ad: Pop(1)
0x4ae: Push((int) 0)
0x4af: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x4b0: Return(); Pop(2)

0x4b1: PushEmpty(bool, int, cvector, cvector, cvector, cvector, string, bool, int, cvector, cvector, cvector, cvector, string)
0x4b2: Pop(0); Push((bool) Stack[-15] == 0)
0x4b3: IF (Stack[-1] == 0) GOTO 0x4b5; Pop(1)

0x4b4: Return(); Pop(14)

0x4b5: @ IsDead(Stack[-7])
0x4b6: Pop(0)
0x4b7: Push(Stack[-7])
0x4b8: IF (Stack[-1] == 0) GOTO 0x4ba; Pop(1)

0x4b9: Return(); Pop(14)

0x4ba: @ GetSecondaryAnimationType(Stack[-6])
0x4bb: Pop(0)
0x4bc: Push((int) 0)
0x4bd: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x4be: IF (Stack[-1] == 0) GOTO 0x4c0; Pop(1)

0x4bf: Return(); Pop(14)

0x4c0: @@ GetPosition(Stack[-5])
0x4c1: Pop(0)
0x4c2: @ GetPosition(Stack[-4])
0x4c3: Pop(0)
0x4c4: @ GetDirection(Stack[-3])
0x4c5: Pop(0)
0x4c6: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0x4c7: Push(CvectorIndex(Stack[-2], 0))
0x4c8: Push(CvectorIndex(Stack[-4], 0))
0x4c9: Pop(2); Push(Stack[-2] * Stack[-1]);
0x4ca: Push(CvectorIndex(Stack[-3], 2))
0x4cb: Push(CvectorIndex(Stack[-5], 2))
0x4cc: Pop(2); Push(Stack[-2] * Stack[-1]);
0x4cd: Pop(2); Push(Stack[-2] + Stack[-1]);
0x4ce: Push((int) 0)
0x4cf: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x4d0: IF (Stack[-1] == 0) GOTO 0x4d3; Pop(1)

0x4d1: Stack[-1] = "fhit"
0x4d2: GOTO 0x4d4

0x4d3: Stack[-1] = "bhit"
0x4d4: Push("hit_react")
0x4d5: Push("1")
0x4d6: Pop(1); Push(Stack[-3] + Stack[-1]);
0x4d7: Push("2")
0x4d8: Pop(1); Push(Stack[-4] + Stack[-1]);
0x4d9: Push((int) -10)
0x4da: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x4db: Pop(4)
0x4dc: Return(); Pop(14)

0x4dd: PushEmpty(cvector, object, int, bool, cvector, cvector, int, int, cvector, cvector, object, int, bool, cvector, cvector, int, int, cvector)
0x4de: PushEmpty(bool)
0x4df: Stack[-1] = (bool) 0
0x4e0: PushEmpty(bool)
0x4e1: Stack[-1] = (bool) 0
0x4e2: Push(Stack[-23])
0x4e3: IF (Stack[-1] == 0) GOTO 0x4e8; Pop(1)

0x4e4: Push((int) 4)
0x4e5: Pop(1); Push((bool) Stack[-23] != Stack[-1])
0x4e6: IF (Stack[-1] == 0) GOTO 0x4e8; Pop(1)

0x4e7: Stack[-1] = (bool) 1
0x4e8: IF (Stack[-1] == 0) GOTO 0x4ed; Pop(1)

0x4e9: Push((int) 5)
0x4ea: Pop(1); Push((bool) Stack[-22] != Stack[-1])
0x4eb: IF (Stack[-1] == 0) GOTO 0x4ed; Pop(1)

0x4ec: Stack[-1] = (bool) 1
0x4ed: IF (Stack[-1] == 0) GOTO 0x51c; Pop(1)

0x4ee: PushEmpty(cvector, cvector)
0x4ef: PushEmpty(cvector, object)
0x4f0: Stack[-1] = Stack[-25]
0x4f1: Call2 0x407

0x4f2: Stack[-3] = Stack[-2]
0x4f3: Pop(2)
0x4f4: Call2 0x5c7

0x4f5: Stack[-11] = Stack[-2]
0x4f6: Pop(2)
0x4f7: @ CreateVectorVector(Stack[-8])
0x4f8: Pop(0)
0x4f9: Stack[-7] = (int) 1
0x4fa: Push("hit")
0x4fb: Pop(1); Push(Stack[-1] + Stack[-8]);
0x4fc: @ GetGeometryLocator(Stack[-1], Stack[-7], Stack[-6], Stack[-5])
0x4fd: Pop(1)
0x4fe: Pop(0); Push((bool) Stack[-6] == 0)
0x4ff: IF (Stack[-1] == 0) GOTO 0x501; Pop(1)

0x500: GOTO 0x50a

0x501: Pop(0); Push(Stack[-4] | Stack[-9]);
0x502: Push((float)0.70711)
0x503: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x504: IF (Stack[-1] == 0) GOTO 0x507; Pop(1)

0x505: @@ add(Stack[-5])
0x506: Pop(0)
0x507: Push((int) 1)
0x508: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x509: GOTO 0x4fa

0x50a: @@ size(Stack[-3])
0x50b: Pop(0)
0x50c: Push(Stack[-3])
0x50d: IF (Stack[-1] == 0) GOTO 0x51b; Pop(1)

0x50e: @ irand(Stack[-2], Stack[-3])
0x50f: Pop(0)
0x510: @@ get(Stack[-1], Stack[-2])
0x511: Pop(0)
0x512: PushEmpty(object, int, float, cvector, cvector)
0x513: Stack[-5] = Stack[-26]
0x514: Stack[-4] = Stack[-25]
0x515: Stack[-3] = Stack[-24]
0x516: Stack[-2] = Stack[-6]
0x517: Stack[-1] = -Stack[-14]; Pop(0);
0x518: Call2 0x521

0x519: Pop(5)
0x51a: Return(); Pop(18)

0x51b: Stack[-8] = 0
0x51c: PushEmpty(object)
0x51d: Stack[-1] = Stack[-22]
0x51e: Call2 0x4b1

0x51f: Pop(1)
0x520: Return(); Pop(18)

0x521: PushEmpty(object, object, object, object)
0x522: @ GetScene(Stack[-2])
0x523: Pop(0)
0x524: Push("scripted")
0x525: Push("blood_dir.xml")
0x526: @ AddActorByType(Stack[-3], Stack[-2], Stack[-4], Stack[-8], Stack[-7], Stack[-1])
0x527: Pop(2)
0x528: PushEmpty(object)
0x529: Stack[-1] = Stack[-10]
0x52a: Call2 0x4b1

0x52b: Pop(1)
0x52c: Return(); Pop(4)

0x52d: Stack[-1] = 0
0x52e: Stack[-2] = 0
0x52f: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x530: @@ GetPosition(Stack[-3])
0x531: Pop(0)
0x532: @ GetPosition(Stack[-2])
0x533: Pop(0)
0x534: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0x535: Push(CvectorIndex(Stack[-1], 0))
0x536: Push(CvectorIndex(Stack[-2], 2))
0x537: @ RotateAsync(Stack[-2], Stack[-1])
0x538: Pop(2)
0x539: Return(); Pop(6)

0x53a: PushEmpty(float, float, float, float)
0x53b: @ GetEyesHeight(Stack[-2])
0x53c: Pop(0)
0x53d: @@ GetEyesHeight(Stack[-1])
0x53e: Pop(0)
0x53f: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x540: Return(); Pop(4)

0x541: PushEmpty(bool, int, bool, int, bool, float, cvector, cvector, bool, int, bool, int, bool, float, cvector, cvector)
0x542: @ IsExisting3DSound(Stack[-8], Stack[-17])
0x543: Pop(0)
0x544: Pop(0); Push((bool) Stack[-8] == 0)
0x545: IF (Stack[-1] == 0) GOTO 0x55a; Pop(1)

0x546: Stack[-7] = (int) 0
0x547: Push((int) 1)
0x548: Pop(1); Push(Stack[-8] + Stack[-1]);
0x549: Pop(1); Push(Stack[-18] + Stack[-1]);
0x54a: @ IsExisting3DSound(Stack[-7], Stack[-1])
0x54b: Pop(1)
0x54c: Pop(0); Push((bool) Stack[-6] == 0)
0x54d: IF (Stack[-1] == 0) GOTO 0x54f; Pop(1)

0x54e: GOTO 0x552

0x54f: Push((int) 1)
0x550: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x551: GOTO 0x547

0x552: Pop(0); Push((bool) Stack[-7] == 0)
0x553: IF (Stack[-1] == 0) GOTO 0x555; Pop(1)

0x554: Return(); Pop(16)

0x555: @ irand(Stack[-5], Stack[-7])
0x556: Pop(0)
0x557: Push((int) 1)
0x558: Pop(1); Push(Stack[-6] + Stack[-1]);
0x559: Stack[-18] = Stack[-18] + Stack[-1]; Pop(1);
0x55a: @ Is3DSoundLoaded(Stack[-4], Stack[-17])
0x55b: Pop(0)
0x55c: Push(Stack[-4])
0x55d: IF (Stack[-1] == 0) GOTO 0x569; Pop(1)

0x55e: @ GetEyesHeight(Stack[-3])
0x55f: Pop(0)
0x560: @ GetDirection(Stack[-2])
0x561: Pop(0)
0x562: Push((int) 50)
0x563: Stack[-2] = Stack[-3] * Stack[-1]; Pop(1);
0x564: Push(CvectorIndex(Stack[-1], 1))
0x565: Stack[-1] = Stack[-1] + Stack[-4]; Pop(0);
0x566: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x567: @ PlayGlobalSound(Stack[-17], Stack[-1])
0x568: Pop(0)
0x569: Return(); Pop(16)

0x56a: PushEmpty()
0x56b: Stack[-2] = (bool) 1
0x56c: PushEmpty(bool)
0x56d: Stack[-1] = (bool) 1
0x56e: PushEmpty(bool)
0x56f: Stack[-1] = (bool) 1
0x570: PushEmpty(bool)
0x571: Stack[-1] = (bool) 1
0x572: PushEmpty(bool)
0x573: Stack[-1] = (bool) 1
0x574: PushEmpty(bool)
0x575: Stack[-1] = (bool) 1
0x576: PushEmpty(bool)
0x577: Stack[-1] = (bool) 1
0x578: PushEmpty(bool)
0x579: Stack[-1] = (bool) 1
0x57a: PushEmpty(bool)
0x57b: Stack[-1] = (bool) 1
0x57c: PushEmpty(bool)
0x57d: Stack[-1] = (bool) 1
0x57e: PushEmpty(bool)
0x57f: Stack[-1] = (bool) 1
0x580: PushEmpty(bool)
0x581: Stack[-1] = (bool) 1
0x582: Push("woman")
0x583: Pop(1); Push((bool) Stack[-13] == Stack[-1])
0x584: IF (Stack[-1] == 0) GOTO 0x589; Pop(1)

0x585: Push("worker")
0x586: Pop(1); Push((bool) Stack[-13] == Stack[-1])
0x587: IF (Stack[-1] == 0) GOTO 0x589; Pop(1)

0x588: Stack[-1] = (bool) 0
0x589: IF (Stack[-1] == 0) GOTO 0x58e; Pop(1)

0x58a: Push("butcher")
0x58b: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0x58c: IF (Stack[-1] == 0) GOTO 0x58e; Pop(1)

0x58d: Stack[-1] = (bool) 0
0x58e: IF (Stack[-1] == 0) GOTO 0x593; Pop(1)

0x58f: Push("wasted_girl")
0x590: Pop(1); Push((bool) Stack[-11] == Stack[-1])
0x591: IF (Stack[-1] == 0) GOTO 0x593; Pop(1)

0x592: Stack[-1] = (bool) 0
0x593: IF (Stack[-1] == 0) GOTO 0x598; Pop(1)

0x594: Push("boy")
0x595: Pop(1); Push((bool) Stack[-10] == Stack[-1])
0x596: IF (Stack[-1] == 0) GOTO 0x598; Pop(1)

0x597: Stack[-1] = (bool) 0
0x598: IF (Stack[-1] == 0) GOTO 0x59d; Pop(1)

0x599: Push("vaxxabitka")
0x59a: Pop(1); Push((bool) Stack[-9] == Stack[-1])
0x59b: IF (Stack[-1] == 0) GOTO 0x59d; Pop(1)

0x59c: Stack[-1] = (bool) 0
0x59d: IF (Stack[-1] == 0) GOTO 0x5a2; Pop(1)

0x59e: Push("unosha")
0x59f: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x5a0: IF (Stack[-1] == 0) GOTO 0x5a2; Pop(1)

0x5a1: Stack[-1] = (bool) 0
0x5a2: IF (Stack[-1] == 0) GOTO 0x5a7; Pop(1)

0x5a3: Push("wasted_male")
0x5a4: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x5a5: IF (Stack[-1] == 0) GOTO 0x5a7; Pop(1)

0x5a6: Stack[-1] = (bool) 0
0x5a7: IF (Stack[-1] == 0) GOTO 0x5ac; Pop(1)

0x5a8: Push("alkash")
0x5a9: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x5aa: IF (Stack[-1] == 0) GOTO 0x5ac; Pop(1)

0x5ab: Stack[-1] = (bool) 0
0x5ac: IF (Stack[-1] == 0) GOTO 0x5b1; Pop(1)

0x5ad: Push("dohodyaga")
0x5ae: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x5af: IF (Stack[-1] == 0) GOTO 0x5b1; Pop(1)

0x5b0: Stack[-1] = (bool) 0
0x5b1: IF (Stack[-1] == 0) GOTO 0x5b6; Pop(1)

0x5b2: Push("vaxxabit")
0x5b3: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x5b4: IF (Stack[-1] == 0) GOTO 0x5b6; Pop(1)

0x5b5: Stack[-1] = (bool) 0
0x5b6: IF (Stack[-1] == 0) GOTO 0x5bb; Pop(1)

0x5b7: Push("nudegirl")
0x5b8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5b9: IF (Stack[-1] == 0) GOTO 0x5bb; Pop(1)

0x5ba: Stack[-1] = (bool) 0
0x5bb: IF (Stack[-1] == 0) GOTO 0x5c0; Pop(1)

0x5bc: Push("morlok")
0x5bd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5be: IF (Stack[-1] == 0) GOTO 0x5c0; Pop(1)

0x5bf: Stack[-2] = (bool) 0
0x5c0: Return(); Pop(0)

0x5c1: PushEmpty(object, object)
0x5c2: @ self(Stack[-1])
0x5c3: Pop(0)
0x5c4: Stack[-3] = Stack[-1]
0x5c5: Return(); Pop(2)

0x5c6: Stack[-1] = 0
0x5c7: PushEmpty(float, float)
0x5c8: Pop(0); Push(Stack[-3] | Stack[-3]);
0x5c9: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x5ca: Push((float)0.0)
0x5cb: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x5cc: IF (Stack[-1] == 0) GOTO 0x5cf; Pop(1)

0x5cd: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x5ce: Return(); Pop(2)

0x5cf: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x5d0: Return(); Pop(2)

0x5d1: PushEmpty(cvector, cvector)
0x5d2: Stack[-1] = Stack[-3] - Stack[-4]; Pop(0);
0x5d3: Stack[-5] = Stack[-1] | Stack[-1]; Pop(0);
0x5d4: Return(); Pop(2)

0x5d5: PushEmpty()
0x5d6: Pop(0); Push((bool) Stack[-2] < Stack[-1])
0x5d7: IF (Stack[-1] == 0) GOTO 0x5da; Pop(1)

0x5d8: Stack[-3] = Stack[-2]
0x5d9: GOTO 0x5db

0x5da: Stack[-3] = Stack[-1]
0x5db: Return(); Pop(0)

0x5dc: PushEmpty()
0x5dd: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x5de: IF (Stack[-1] == 0) GOTO 0x5e1; Pop(1)

0x5df: Stack[-4] = Stack[-2]
0x5e0: Return(); Pop(0)

0x5e1: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x5e2: IF (Stack[-1] == 0) GOTO 0x5e5; Pop(1)

0x5e3: Stack[-4] = Stack[-1]
0x5e4: Return(); Pop(0)

0x5e5: Stack[-4] = Stack[-3]
0x5e6: Return(); Pop(0)

0x5e7: PushEmpty(object, object)
0x5e8: @ CreateObjectSet(Stack[-1])
0x5e9: Pop(0)
0x5ea: Stack[-3] = Stack[-1]
0x5eb: Return(); Pop(2)

0x5ec: Stack[-1] = 0
0x5ed: PushEmpty()
0x5ee: Push(CvectorIndex(Stack[-2], 0))
0x5ef: Push(CvectorIndex(Stack[-2], 0))
0x5f0: Pop(2); Push(Stack[-2] * Stack[-1]);
0x5f1: Push(CvectorIndex(Stack[-3], 2))
0x5f2: Push(CvectorIndex(Stack[-3], 2))
0x5f3: Pop(2); Push(Stack[-2] * Stack[-1]);
0x5f4: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x5f5: Return(); Pop(0)

0x5f6: PushEmpty()
0x5f7: Push(CvectorIndex(Stack[-1], 0))
0x5f8: Push(CvectorIndex(Stack[-2], 0))
0x5f9: Pop(2); Push(Stack[-2] * Stack[-1]);
0x5fa: Push(CvectorIndex(Stack[-2], 2))
0x5fb: Push(CvectorIndex(Stack[-3], 2))
0x5fc: Pop(2); Push(Stack[-2] * Stack[-1]);
0x5fd: Pop(2); Push(Stack[-2] + Stack[-1]);
0x5fe: Stack[-3] = Sqrt(Stack[-1]); Pop(1);
0x5ff: Return(); Pop(0)

0x600: PushEmpty()
0x601: PushEmpty(float, cvector, cvector)
0x602: Stack[-2] = Stack[-5]
0x603: Stack[-1] = Stack[-4]
0x604: Call2 0x5ed

0x605: Pop(2)
0x606: PushEmpty(float, cvector)
0x607: Stack[-1] = Stack[-5]
0x608: Call2 0x5f6

0x609: Pop(1)
0x60a: PushEmpty(float, cvector)
0x60b: Stack[-1] = Stack[-5]
0x60c: Call2 0x5f6

0x60d: Pop(1)
0x60e: Pop(2); Push(Stack[-2] * Stack[-1]);
0x60f: Stack[-5] = Stack[-2] / Stack[-1]; Pop(2);
0x610: Return(); Pop(0)

0x611: PushEmpty(object, object)
0x612: @ CreateFloatVector(Stack[-1])
0x613: Pop(0)
0x614: @@ add(Stack[-3])
0x615: Pop(0)
0x616: Push((int) 0)
0x617: Pop(1); Push((bool) Stack[-4] < Stack[-1])
0x618: IF (Stack[-1] == 0) GOTO 0x61d; Pop(1)

0x619: Push((float)0.7)
0x61a: Push((int) 500)
0x61b: @ RumblePlay(Stack[-2], Stack[-1])
0x61c: Pop(2)
0x61d: Push((int) 15)
0x61e: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x61f: Pop(1)
0x620: Return(); Pop(2)

0x621: Stack[-1] = 0
0x622: PushEmpty(bool, bool)
0x623: @ IsPlayerActor(Stack[-3], Stack[-1])
0x624: Pop(0)
0x625: Push(Stack[-1])
0x626: IF (Stack[-1] == 0) GOTO 0x62a; Pop(1)

0x627: Push("attack")
0x628: @ PlayGlobalMusic(Stack[-1])
0x629: Pop(1)
0x62a: Return(); Pop(2)

0x62b: PushEmpty(object, object)
0x62c: @ GetScene(Stack[-1])
0x62d: Pop(0)
0x62e: Push("battle")
0x62f: PushEmpty(object)
0x630: Call2 0x5c1

0x631: Pop(0)
0x632: @ BroadcastMessage(Stack[-2], Stack[-1], Stack[-3])
0x633: Pop(2)
0x634: Return(); Pop(2)

0x635: Stack[-1] = 0
0x636: PushEmpty(int, int)
0x637: Push("branch")
0x638: @ GetVariable(Stack[-1], Stack[-2])
0x639: Pop(1)
0x63a: Stack[-3] = Stack[-1]
0x63b: Return(); Pop(2)

0x63c: PushEmpty()
0x63d: PushEmpty(int)
0x63e: Call2 0x636

0x63f: Pop(0)
0x640: Push((int) 1)
0x641: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x642: IF (Stack[-1] == 0) GOTO 0x646; Pop(1)

0x643: @ WorkWithCorpse(Stack[-1])
0x644: Pop(0)
0x645: GOTO 0x648

0x646: @ Barter(Stack[-1])
0x647: Pop(0)
0x648: Return(); Pop(0)

0x649: PushEmpty()
0x64a: PushEmpty(object, int, float)
0x64b: Stack[-3] = Stack[-7]
0x64c: Stack[-2] = Stack[-6]
0x64d: Stack[-1] = Stack[-5]
0x64e: Call2 0x4dd

0x64f: Pop(3)
0x650: Return(); Pop(0)

0x651: PushEmpty()
0x652: PushEmpty(object, int, float, cvector, cvector)
0x653: Stack[-5] = Stack[-11]
0x654: Stack[-4] = Stack[-10]
0x655: Stack[-3] = Stack[-9]
0x656: Stack[-2] = Stack[-7]
0x657: Stack[-1] = Stack[-6]
0x658: Call2 0x521

0x659: Pop(5)
0x65a: Return(); Pop(0)

0x65b: PushEmpty(float, float)
0x65c: Push("health")
0x65d: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x65e: IF (Stack[-1] == 0) GOTO 0x667; Pop(1)

0x65f: Push("health")
0x660: @ GetProperty(Stack[-1], Stack[-2])
0x661: Pop(1)
0x662: Push((int) 0)
0x663: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x664: IF (Stack[-1] == 0) GOTO 0x667; Pop(1)

0x665: @ SignalDeath(Stack[-4])
0x666: Pop(0)
0x667: Return(); Pop(2)

0x668: PushEmpty()
0x669: PushEmpty(bool, object)
0x66a: Stack[-1] = Stack[-3]
0x66b: Call2 0x416

0x66c: Pop(1)
0x66d: IF (Stack[-1] == 0) GOTO 0x675; Pop(1)

0x66e: PushEmpty(object)
0x66f: Call2 0x5c1

0x670: Pop(0)
0x671: Push((float)0.05)
0x672: Push((bool) 1)
0x673: @ ReportReputationChange(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x674: Pop(3)
0x675: PushEmpty(object)
0x676: Stack[-1] = Stack[-2]
0x677: Call2 0x7e0

0x678: Pop(1)
0x679: Return(); Pop(0)

0x67a: PushEmpty(string, string)
0x67b: PushEmpty(bool, object, string)
0x67c: Stack[-2] = Stack[-7]
0x67d: Stack[-1] = "class"
0x67e: Call2 0x41b

0x67f: Pop(2)
0x680: Pop(1); Push((bool) Stack[-1] == 0)
0x681: IF (Stack[-1] == 0) GOTO 0x684; Pop(1)

0x682: Stack[-5] = (bool) 0
0x683: Return(); Pop(2)

0x684: Push("class")
0x685: @@ GetProperty(Stack[-1], Stack[-2])
0x686: Pop(1)
0x687: PushEmpty(bool)
0x688: Stack[-1] = (bool) 1
0x689: PushEmpty(bool)
0x68a: Stack[-1] = (bool) 1
0x68b: PushEmpty(bool)
0x68c: Stack[-1] = (bool) 1
0x68d: PushEmpty(bool)
0x68e: Stack[-1] = (bool) 1
0x68f: PushEmpty(bool)
0x690: Stack[-1] = (bool) 1
0x691: PushEmpty(bool)
0x692: Stack[-1] = (bool) 1
0x693: PushEmpty(bool)
0x694: Stack[-1] = (bool) 1
0x695: PushEmpty(bool)
0x696: Stack[-1] = (bool) 1
0x697: PushEmpty(bool)
0x698: Stack[-1] = (bool) 1
0x699: PushEmpty(bool)
0x69a: Stack[-1] = (bool) 1
0x69b: Push("patrol")
0x69c: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0x69d: IF (Stack[-1] == 0) GOTO 0x6a2; Pop(1)

0x69e: Push("sanitar")
0x69f: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0x6a0: IF (Stack[-1] == 0) GOTO 0x6a2; Pop(1)

0x6a1: Stack[-1] = (bool) 0
0x6a2: IF (Stack[-1] == 0) GOTO 0x6a7; Pop(1)

0x6a3: Push("soldier")
0x6a4: Pop(1); Push((bool) Stack[-11] == Stack[-1])
0x6a5: IF (Stack[-1] == 0) GOTO 0x6a7; Pop(1)

0x6a6: Stack[-1] = (bool) 0
0x6a7: IF (Stack[-1] == 0) GOTO 0x6ac; Pop(1)

0x6a8: Push("woman")
0x6a9: Pop(1); Push((bool) Stack[-10] == Stack[-1])
0x6aa: IF (Stack[-1] == 0) GOTO 0x6ac; Pop(1)

0x6ab: Stack[-1] = (bool) 0
0x6ac: IF (Stack[-1] == 0) GOTO 0x6b1; Pop(1)

0x6ad: Push("wasted_girl")
0x6ae: Pop(1); Push((bool) Stack[-9] == Stack[-1])
0x6af: IF (Stack[-1] == 0) GOTO 0x6b1; Pop(1)

0x6b0: Stack[-1] = (bool) 0
0x6b1: IF (Stack[-1] == 0) GOTO 0x6b6; Pop(1)

0x6b2: Push("vaxxabitka")
0x6b3: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x6b4: IF (Stack[-1] == 0) GOTO 0x6b6; Pop(1)

0x6b5: Stack[-1] = (bool) 0
0x6b6: IF (Stack[-1] == 0) GOTO 0x6bb; Pop(1)

0x6b7: Push("vaxxabit")
0x6b8: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x6b9: IF (Stack[-1] == 0) GOTO 0x6bb; Pop(1)

0x6ba: Stack[-1] = (bool) 0
0x6bb: IF (Stack[-1] == 0) GOTO 0x6c0; Pop(1)

0x6bc: Push("little_girl")
0x6bd: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x6be: IF (Stack[-1] == 0) GOTO 0x6c0; Pop(1)

0x6bf: Stack[-1] = (bool) 0
0x6c0: IF (Stack[-1] == 0) GOTO 0x6c5; Pop(1)

0x6c1: Push("girl")
0x6c2: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x6c3: IF (Stack[-1] == 0) GOTO 0x6c5; Pop(1)

0x6c4: Stack[-1] = (bool) 0
0x6c5: IF (Stack[-1] == 0) GOTO 0x6ca; Pop(1)

0x6c6: Push("dohodyaga")
0x6c7: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x6c8: IF (Stack[-1] == 0) GOTO 0x6ca; Pop(1)

0x6c9: Stack[-1] = (bool) 0
0x6ca: IF (Stack[-1] == 0) GOTO 0x6cf; Pop(1)

0x6cb: Push("nudegirl")
0x6cc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6cd: IF (Stack[-1] == 0) GOTO 0x6cf; Pop(1)

0x6ce: Stack[-1] = (bool) 0
0x6cf: IF (Stack[-1] == 0) GOTO 0x6d2; Pop(1)

0x6d0: Stack[-5] = (bool) 1
0x6d1: Return(); Pop(2)

0x6d2: Push(Stack[-3])
0x6d3: IF (Stack[-1] == 0) GOTO 0x6d6; Pop(1)

0x6d4: Stack[-5] = (bool) 0
0x6d5: Return(); Pop(2)

0x6d6: Stack[-5] = (bool) 1
0x6d7: PushEmpty(bool)
0x6d8: Stack[-1] = (bool) 1
0x6d9: PushEmpty(bool)
0x6da: Stack[-1] = (bool) 1
0x6db: PushEmpty(bool)
0x6dc: Stack[-1] = (bool) 1
0x6dd: PushEmpty(bool)
0x6de: Stack[-1] = (bool) 1
0x6df: PushEmpty(bool)
0x6e0: Stack[-1] = (bool) 1
0x6e1: Push("worker")
0x6e2: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x6e3: IF (Stack[-1] == 0) GOTO 0x6e8; Pop(1)

0x6e4: Push("butcher")
0x6e5: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x6e6: IF (Stack[-1] == 0) GOTO 0x6e8; Pop(1)

0x6e7: Stack[-1] = (bool) 0
0x6e8: IF (Stack[-1] == 0) GOTO 0x6ed; Pop(1)

0x6e9: Push("boy")
0x6ea: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x6eb: IF (Stack[-1] == 0) GOTO 0x6ed; Pop(1)

0x6ec: Stack[-1] = (bool) 0
0x6ed: IF (Stack[-1] == 0) GOTO 0x6f2; Pop(1)

0x6ee: Push("unosha")
0x6ef: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x6f0: IF (Stack[-1] == 0) GOTO 0x6f2; Pop(1)

0x6f1: Stack[-1] = (bool) 0
0x6f2: IF (Stack[-1] == 0) GOTO 0x6f7; Pop(1)

0x6f3: Push("wasted_male")
0x6f4: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x6f5: IF (Stack[-1] == 0) GOTO 0x6f7; Pop(1)

0x6f6: Stack[-1] = (bool) 0
0x6f7: IF (Stack[-1] == 0) GOTO 0x6fc; Pop(1)

0x6f8: Push("alkash")
0x6f9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6fa: IF (Stack[-1] == 0) GOTO 0x6fc; Pop(1)

0x6fb: Stack[-1] = (bool) 0
0x6fc: IF (Stack[-1] == 0) GOTO 0x701; Pop(1)

0x6fd: Push("morlok")
0x6fe: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6ff: IF (Stack[-1] == 0) GOTO 0x701; Pop(1)

0x700: Stack[-5] = (bool) 0
0x701: Return(); Pop(2)

0x702: Push(GlobalVars[0])
0x703: PushEmpty(object)
0x704: Call2 0x5e7

0x705: Stack[-2] = Stack[-1]
0x706: Pop(1)
0x707: GlobalVars[0] = Stack[-1]; Pop(1)
0x708: Return(); Pop(0)

0x709: PushEmpty()
0x70a: PushEmpty(object, bool)
0x70b: Stack[-2] = Stack[-4]
0x70c: Stack[-1] = Stack[-3]
0x70d: Push(-2, 3); TaskCall(2)
0x70e: Call2 0x122

0x70f: Pop(-2, 3); TaskReturn
0x710: Pop(2)
0x711: @ ResetAAS()
0x712: Pop(0)
0x713: Return(); Pop(0)

0x714: PushEmpty(bool, bool)
0x715: Pop(0); Push((bool) Stack[-3] == 0)
0x716: IF (Stack[-1] == 0) GOTO 0x718; Pop(1)

0x717: Return(); Pop(2)

0x718: Push(GlobalVars[0])
0x719: @@ in(Stack[-2], Stack[-4])
0x71a: Pop(1)
0x71b: Pop(0); Push((bool) Stack[-1] == 0)
0x71c: IF (Stack[-1] == 0) GOTO 0x720; Pop(1)

0x71d: Push(GlobalVars[0])
0x71e: @@ add(Stack[-4])
0x71f: Pop(1)
0x720: PushEmpty(bool, object)
0x721: Stack[-1] = Stack[-5]
0x722: Call2 0x416

0x723: Pop(1)
0x724: IF (Stack[-1] == 0) GOTO 0x72b; Pop(1)

0x725: PushEmpty(object)
0x726: Call2 0x5c1

0x727: Pop(0)
0x728: Push((float)0.0)
0x729: @ ReportReputationChange(Stack[-5], Stack[-2], Stack[-1])
0x72a: Pop(2)
0x72b: Return(); Pop(2)

0x72c: PushEmpty()
0x72d: PushEmpty(object)
0x72e: Stack[-1] = Stack[-2]
0x72f: Call2 0x714

0x730: Pop(1)
0x731: PushEmpty(object, bool)
0x732: Stack[-2] = Stack[-3]
0x733: Stack[-1] = (bool) 1
0x734: Call2 0x709

0x735: Pop(2)
0x736: Return(); Pop(0)

0x737: PushEmpty(bool, bool)
0x738: Push(GlobalVars[0])
0x739: @@ in(Stack[-2], Stack[-4])
0x73a: Pop(1)
0x73b: Push(Stack[-1])
0x73c: IF (Stack[-1] == 0) GOTO 0x743; Pop(1)

0x73d: PushEmpty(object, bool)
0x73e: Stack[-2] = Stack[-5]
0x73f: Stack[-1] = (bool) 1
0x740: Call2 0x709

0x741: Pop(2)
0x742: GOTO 0x74b

0x743: PushEmpty(object)
0x744: Stack[-1] = Stack[-4]
0x745: Push(-1, 2); TaskCall(1)
0x746: Call2 0x78

0x747: Pop(-1, 2); TaskReturn
0x748: Pop(1)
0x749: @ ResetAAS()
0x74a: Pop(0)
0x74b: Return(); Pop(2)

0x74c: PushEmpty()
0x74d: PushEmpty(float, object)
0x74e: Stack[-1] = Stack[-3]
0x74f: Call2 0x40e

0x750: Pop(1)
0x751: Push((float)40000.0)
0x752: Stack[-4] = Stack[-2] <= Stack[-1]; Pop(2);
0x753: Return(); Pop(0)

0x754: PushEmpty(float, string, float, float, string, float)
0x755: PushEmpty(bool, object)
0x756: Stack[-1] = Stack[-9]
0x757: Call2 0x499

0x758: Pop(1)
0x759: Pop(1); Push((bool) Stack[-1] == 0)
0x75a: IF (Stack[-1] == 0) GOTO 0x75d; Pop(1)

0x75b: Stack[-8] = (bool) 0
0x75c: Return(); Pop(6)

0x75d: PushEmpty(bool, object)
0x75e: Stack[-1] = Stack[-9]
0x75f: Call2 0x416

0x760: Pop(1)
0x761: IF (Stack[-1] == 0) GOTO 0x768; Pop(1)

0x762: Push("reputation")
0x763: @@ GetProperty(Stack[-1], Stack[-4])
0x764: Pop(1)
0x765: Push((float)0.33)
0x766: Stack[-9] = Stack[-4] < Stack[-1]; Pop(1);
0x767: Return(); Pop(6)

0x768: PushEmpty(bool, object, string)
0x769: Stack[-2] = Stack[-10]
0x76a: Stack[-1] = "class"
0x76b: Call2 0x41b

0x76c: Pop(2)
0x76d: Pop(1); Push((bool) Stack[-1] == 0)
0x76e: IF (Stack[-1] == 0) GOTO 0x771; Pop(1)

0x76f: Stack[-8] = (bool) 0
0x770: Return(); Pop(6)

0x771: Push("class")
0x772: @@ GetProperty(Stack[-1], Stack[-3])
0x773: Pop(1)
0x774: PushEmpty(bool)
0x775: Stack[-1] = (bool) 1
0x776: PushEmpty(bool)
0x777: Stack[-1] = (bool) 1
0x778: Push("bomber")
0x779: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x77a: IF (Stack[-1] == 0) GOTO 0x77f; Pop(1)

0x77b: Push("hunter")
0x77c: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x77d: IF (Stack[-1] == 0) GOTO 0x77f; Pop(1)

0x77e: Stack[-1] = (bool) 0
0x77f: IF (Stack[-1] == 0) GOTO 0x784; Pop(1)

0x780: Push("grabitel")
0x781: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x782: IF (Stack[-1] == 0) GOTO 0x784; Pop(1)

0x783: Stack[-1] = (bool) 0
0x784: IF (Stack[-1] == 0) GOTO 0x787; Pop(1)

0x785: Stack[-8] = (bool) 1
0x786: Return(); Pop(6)

0x787: PushEmpty(bool, object, string)
0x788: Stack[-2] = Stack[-10]
0x789: Stack[-1] = "disease"
0x78a: Call2 0x41b

0x78b: Pop(2)
0x78c: Pop(1); Push((bool) Stack[-1] == 0)
0x78d: IF (Stack[-1] == 0) GOTO 0x790; Pop(1)

0x78e: Stack[-8] = (bool) 0
0x78f: Return(); Pop(6)

0x790: PushEmpty(bool)
0x791: Stack[-1] = (bool) 1
0x792: PushEmpty(bool, string)
0x793: Stack[-1] = Stack[-5]
0x794: Call2 0x56a

0x795: Pop(1)
0x796: IF (Stack[-1] == 0) GOTO 0x79b; Pop(1)

0x797: Push("dog")
0x798: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x799: IF (Stack[-1] == 0) GOTO 0x79b; Pop(1)

0x79a: Stack[-1] = (bool) 0
0x79b: IF (Stack[-1] == 0) GOTO 0x7a2; Pop(1)

0x79c: Push("disease")
0x79d: @@ GetProperty(Stack[-1], Stack[-2])
0x79e: Pop(1)
0x79f: Push((int) 0)
0x7a0: Stack[-9] = Stack[-2] > Stack[-1]; Pop(1);
0x7a1: Return(); Pop(6)

0x7a2: Stack[-8] = (bool) 0
0x7a3: Return(); Pop(6)

0x7a4: PushEmpty(bool, bool)
0x7a5: PushEmpty(bool, object)
0x7a6: Stack[-1] = Stack[-5]
0x7a7: Call2 0x499

0x7a8: Pop(1)
0x7a9: Pop(1); Push((bool) Stack[-1] == 0)
0x7aa: IF (Stack[-1] == 0) GOTO 0x7ad; Pop(1)

0x7ab: Stack[-4] = (bool) 0
0x7ac: Return(); Pop(2)

0x7ad: Push(GlobalVars[0])
0x7ae: @@ in(Stack[-2], Stack[-4])
0x7af: Pop(1)
0x7b0: Push(Stack[-1])
0x7b1: IF (Stack[-1] == 0) GOTO 0x7b4; Pop(1)

0x7b2: Stack[-4] = (bool) 1
0x7b3: Return(); Pop(2)

0x7b4: PushEmpty(bool, object)
0x7b5: Stack[-1] = Stack[-5]
0x7b6: Call2 0x754

0x7b7: Stack[-6] = Stack[-2]
0x7b8: Pop(2)
0x7b9: Return(); Pop(2)

0x7ba: PushEmpty()
0x7bb: PushEmpty(object)
0x7bc: Stack[-1] = Stack[-2]
0x7bd: Call2 0x7da

0x7be: Pop(1)
0x7bf: Return(); Pop(0)

0x7c0: PushEmpty(bool, bool)
0x7c1: PushEmpty(bool, object, bool)
0x7c2: Stack[-2] = Stack[-7]
0x7c3: Stack[-1] = !Stack[-6]; Pop(0);
0x7c4: Call2 0x67a

0x7c5: Pop(2)
0x7c6: IF (Stack[-1] == 0) GOTO 0x7d8; Pop(1)

0x7c7: @ CanSee(Stack[-1], Stack[-5])
0x7c8: Pop(0)
0x7c9: PushEmpty(bool)
0x7ca: Stack[-1] = (bool) 1
0x7cb: Push(Stack[-2])
0x7cc: IF (Stack[-1] == 0) GOTO 0x7d5; Pop(1)

0x7cd: PushEmpty(float, object)
0x7ce: Stack[-1] = Stack[-8]
0x7cf: Call2 0x40e

0x7d0: Pop(1)
0x7d1: Push((float)490000.0)
0x7d2: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x7d3: IF (Stack[-1] == 0) GOTO 0x7d5; Pop(1)

0x7d4: Stack[-1] = (bool) 0
0x7d5: IF (Stack[-1] == 0) GOTO 0x7d8; Pop(1)

0x7d6: Stack[-6] = (bool) 1
0x7d7: Return(); Pop(2)

0x7d8: Stack[-6] = (bool) 0
0x7d9: Return(); Pop(2)

0x7da: PushEmpty()
0x7db: PushEmpty(object)
0x7dc: Stack[-1] = Stack[-2]
0x7dd: Call2 0x737

0x7de: Pop(1)
0x7df: Return(); Pop(0)

0x7e0: PushEmpty(object, object)
0x7e1: @ GetScene(Stack[-1])
0x7e2: Pop(0)
0x7e3: PushEmpty(object)
0x7e4: Call2 0x5c1

0x7e5: Pop(0)
0x7e6: @@ RemoveStationaryActor(Stack[-1])
0x7e7: Pop(1)
0x7e8: PushEmpty(object)
0x7e9: Stack[-1] = Stack[-4]
0x7ea: Push(-1, 0); TaskCall(5)
0x7eb: Call2 0x35f

0x7ec: Pop(-1, 0); TaskReturn
0x7ed: Pop(1)
0x7ee: Return(); Pop(2)

0x7ef: Stack[-1] = 0
