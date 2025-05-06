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
		EVENT_1 Op = 0x27c Vars = (object)
		EVENT_3 Op = 0x288 Vars = (object)
		EVENT_17 Op = 0x294 Vars = (object)
	GTASK_4 Vars = (cvector, cvector) Params = 1
		EVENT_3 Op = 0x2b2 Vars = (object)
		EVENT_17 Op = 0x2d0 Vars = (object)
		EVENT_30 Op = 0x2e4 Vars = (object, object, bool)
		EVENT_1 Op = 0x2f1 Vars = (object)
	GTASK_5  Params = 1
		EVENT_0 Op = 0x36e Vars = (object)
		EVENT_22 Op = 0x3ed Vars = (object, int, float, float)
		EVENT_16 Op = 0x3ef Vars = (object, string)
		EVENT_41 Op = 0x3f1 Vars = (object)

Events:
EVENT_22 Op = 0x63c Vars = (object, int, float, float)
EVENT_43 Op = 0x644 Vars = (object, int, float, float, cvector, cvector)
EVENT_16 Op = 0x64e Vars = (object, string)
EVENT_41 Op = 0x65b Vars = (object)

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
0xd: Call2 0x493

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
0x26: Call2 0x65b

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
0x3b: Call2 0x529

0x3c: Pop(1)
0x3d: Return(); Pop(0)

0x3e: PushEmpty()
0x3f: PushEmpty(bool, object)
0x40: Stack[-1] = Stack[-3]
0x41: Call2 0x493

0x42: Pop(1)
0x43: Pop(1); Push((bool) Stack[-1] == 0)
0x44: IF (Stack[-1] == 0) GOTO 0x4a; Pop(1)

0x45: PushEmpty(object)
0x46: Stack[-1] = Stack[-2]
0x47: Call2 0x707

0x48: Pop(1)
0x49: Return(); Pop(0)

0x4a: PushEmpty()
0x4b: Call2 0x18

0x4c: Pop(0)
0x4d: PushEmpty(object)
0x4e: Stack[-1] = Stack[-2]
0x4f: Call2 0x71f

0x50: Pop(1)
0x51: Return(); Pop(0)

0x52: PushEmpty()
0x53: PushEmpty(bool, object, object, bool)
0x54: Stack[-3] = Stack[-7]
0x55: Stack[-2] = Stack[-6]
0x56: Stack[-1] = Stack[-5]
0x57: Call2 0x7b3

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
0x62: Call2 0x797

0x63: Pop(1)
0x64: IF (Stack[-1] == 0) GOTO 0x6c; Pop(1)

0x65: PushEmpty()
0x66: Call2 0x18

0x67: Pop(0)
0x68: PushEmpty(object)
0x69: Stack[-1] = Stack[-2]
0x6a: Call2 0x7ad

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
0x7c: Call2 0x615

0x7d: Pop(1)
0x7e: @ CanSee(Stack[-1], Stack[-0])
0x7f: Pop(0)
0x80: Push( Stack[1 + Tasks[-1].StackPointer] )
0x81: IF (Stack[-1] == 0) GOTO 0x8f; Pop(1)

0x82: PushEmpty(bool, object)
0x83: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x84: Call2 0x73f

0x85: Pop(1)
0x86: IF (Stack[-1] == 0) GOTO 0x8d; Pop(1)

0x87: PushEmpty(object, bool)
0x88: Stack[-2] = Stack[0 + Tasks[-1].StackPointer]
0x89: Stack[-1] = (bool) 1
0x8a: Call2 0x6fc

0x8b: Pop(2)
0x8c: Return(); Pop(6)

0x8d: @ Face(Stack[-0])
0x8e: Pop(0)
0x8f: PushEmpty()
0x90: Call2 0x61e

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
0xb6: Call2 0x615

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
0xc5: Call2 0x73f

0xc6: Pop(1)
0xc7: IF (Stack[-1] == 0) GOTO 0xd1; Pop(1)

0xc8: PushEmpty()
0xc9: Call2 0x10f

0xca: Pop(0)
0xcb: PushEmpty(object, bool)
0xcc: Stack[-2] = Stack[0 + Tasks[-1].StackPointer]
0xcd: Stack[-1] = (bool) 0
0xce: Call2 0x6fc

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
0xeb: Call2 0x6fc

0xec: Pop(2)
0xed: Return(); Pop(6)

0xee: PushEmpty()
0xef: PushEmpty(bool, object)
0xf0: Stack[-1] = Stack[-3]
0xf1: Call2 0x493

0xf2: Pop(1)
0xf3: Pop(1); Push((bool) Stack[-1] == 0)
0xf4: IF (Stack[-1] == 0) GOTO 0xfa; Pop(1)

0xf5: PushEmpty(object)
0xf6: Stack[-1] = Stack[-2]
0xf7: Call2 0x707

0xf8: Pop(1)
0xf9: Return(); Pop(0)

0xfa: PushEmpty()
0xfb: Call2 0x10f

0xfc: Pop(0)
0xfd: PushEmpty(object)
0xfe: Stack[-1] = Stack[-2]
0xff: Call2 0x71f

0x100: Pop(1)
0x101: Return(); Pop(0)

0x102: PushEmpty()
0x103: PushEmpty(bool, object, object, bool)
0x104: Stack[-3] = Stack[-7]
0x105: Stack[-2] = Stack[-6]
0x106: Stack[-1] = Stack[-5]
0x107: Call2 0x7b3

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
0x11c: Call2 0x65b

0x11d: Pop(1)
0x11e: Return(); Pop(0)

0x11f: PushEmpty(bool, bool, bool, bool)
0x120: Stack[0 + Tasks[-1].StackPointer] = Stack[-6]
0x121: PushEmpty(object)
0x122: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x123: Call2 0x615

0x124: Pop(1)
0x125: PushEmpty()
0x126: Call2 0x61e

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
0x13b: Call2 0x493

0x13c: Pop(1)
0x13d: IF (Stack[-1] == 0) GOTO 0x1a3; Pop(1)

0x13e: @ CanSee(Stack[-1], Stack[-0])
0x13f: Pop(0)
0x140: Push(Stack[-1])
0x141: IF (Stack[-1] == 0) GOTO 0x14a; Pop(1)

0x142: PushEmpty(object)
0x143: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x144: Call2 0x615

0x145: Pop(1)
0x146: PushEmpty()
0x147: Call2 0x1d3

0x148: Pop(0)
0x149: GOTO 0x199

0x14a: PushEmpty(object)
0x14b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x14c: Call2 0x529

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
0x163: Call2 0x493

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
0x188: Call2 0x493

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
0x1ba: Call2 0x529

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
0x1d6: Call2 0x615

0x1d7: Pop(1)
0x1d8: @ ReportAttack(Stack[-0])
0x1d9: Pop(0)
0x1da: PushEmpty(bool, object)
0x1db: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1dc: Call2 0x410

0x1dd: Pop(1)
0x1de: IF (Stack[-1] == 0) GOTO 0x1e4; Pop(1)

0x1df: PushEmpty(object)
0x1e0: Call2 0x5bb

0x1e1: Pop(0)
0x1e2: @ SendPlayerEnemy(Stack[-0], Stack[-1])
0x1e3: Pop(1)
0x1e4: @ GetDirection(Stack[-14])
0x1e5: Pop(0)
0x1e6: PushEmpty(cvector, object)
0x1e7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1e8: Call2 0x401

0x1e9: Stack[-15] = Stack[-2]
0x1ea: Pop(2)
0x1eb: PushEmpty(float, cvector, cvector)
0x1ec: Stack[-2] = Stack[-17]
0x1ed: Stack[-1] = Stack[-16]
0x1ee: Call2 0x5fa

0x1ef: Pop(2)
0x1f0: Push((float)0.99939)
0x1f1: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x1f2: IF (Stack[-1] == 0) GOTO 0x1f4; Pop(1)

0x1f3: Return(); Pop(28)

0x1f4: PushEmpty()
0x1f5: Call2 0x61e

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
0x212: Call2 0x401

0x213: Stack[-15] = Stack[-2]
0x214: Pop(2)
0x215: Push(CvectorIndex(Stack[-13], 1))
0x216: PushEmpty(float, object)
0x217: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x218: Call2 0x534

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
0x229: Call2 0x421

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
0x24f: Call2 0x493

0x250: Pop(1)
0x251: Pop(1); Push((bool) Stack[-1] == 0)
0x252: IF (Stack[-1] == 0) GOTO 0x254; Pop(1)

0x253: Return(); Pop(0)

0x254: PushEmpty(object)
0x255: Stack[-1] = Stack[-2]
0x256: Call2 0x707

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
0x269: Call2 0x7b3

0x26a: Pop(3)
0x26b: IF (Stack[-1] == 0) GOTO 0x270; Pop(1)

0x26c: PushEmpty(object)
0x26d: Stack[-1] = Stack[-4]
0x26e: Call2 0x24c

0x26f: Pop(1)
0x270: Return(); Pop(0)

0x271: EventDisable(1)
0x272: EventDisable(3)
0x273: Push((int) 1)
0x274: @ Sleep(Stack[-1])
0x275: Pop(1)
0x276: EventEnable(1)
0x277: EventEnable(3)
0x278: @ Hold()
0x279: Pop(0)
0x27a: GOTO 0x278

0x27b: Return(); Pop(0)

0x27c: PushEmpty(bool, bool)
0x27d: @ IsPlayerActor(Stack[-3], Stack[-1])
0x27e: Pop(0)
0x27f: Push(Stack[-1])
0x280: IF (Stack[-1] == 0) GOTO 0x287; Pop(1)

0x281: PushEmpty(object)
0x282: Stack[-1] = Stack[-4]
0x283: Push(-1, 2); TaskCall(4)
0x284: Call2 0x29c

0x285: Pop(-1, 2); TaskReturn
0x286: Pop(1)
0x287: Return(); Pop(2)

0x288: PushEmpty(bool, bool)
0x289: @ IsPlayerActor(Stack[-3], Stack[-1])
0x28a: Pop(0)
0x28b: Push(Stack[-1])
0x28c: IF (Stack[-1] == 0) GOTO 0x293; Pop(1)

0x28d: PushEmpty(object)
0x28e: Stack[-1] = Stack[-4]
0x28f: Push(-1, 2); TaskCall(4)
0x290: Call2 0x29c

0x291: Pop(-1, 2); TaskReturn
0x292: Pop(1)
0x293: Return(); Pop(2)

0x294: PushEmpty()
0x295: PushEmpty(object)
0x296: Stack[-1] = Stack[-2]
0x297: Push(-1, 2); TaskCall(4)
0x298: Call2 0x29c

0x299: Pop(-1, 2); TaskReturn
0x29a: Pop(1)
0x29b: Return(); Pop(0)

0x29c: PushEmpty()
0x29d: PushEmpty()
0x29e: Call2 0x6f5

0x29f: Pop(0)
0x2a0: PushEmpty(object)
0x2a1: Stack[-1] = Stack[-2]
0x2a2: Call2 0x2d0

0x2a3: Pop(1)
0x2a4: PushEmpty()
0x2a5: Call2 0x2a9

0x2a6: Pop(0)
0x2a7: GOTO 0x2a4

0x2a8: Return(); Pop(0)

0x2a9: PushEmpty()
0x2aa: Call2 0x6f5

0x2ab: Pop(0)
0x2ac: PushEmpty()
0x2ad: Call2 0x2ff

0x2ae: Pop(0)
0x2af: GOTO 0x2ac

0x2b0: Return(); Pop(0)

0x2b1: Return(); Pop(0)

0x2b2: PushEmpty(bool, bool)
0x2b3: PushEmpty(bool, object)
0x2b4: Stack[-1] = Stack[-5]
0x2b5: Call2 0x493

0x2b6: Pop(1)
0x2b7: Pop(1); Push((bool) Stack[-1] == 0)
0x2b8: IF (Stack[-1] == 0) GOTO 0x2ba; Pop(1)

0x2b9: Return(); Pop(2)

0x2ba: PushEmpty(bool, object)
0x2bb: Stack[-1] = Stack[-5]
0x2bc: Call2 0x747

0x2bd: Pop(1)
0x2be: Pop(1); Push((bool) Stack[-1] == 0)
0x2bf: IF (Stack[-1] == 0) GOTO 0x2c6; Pop(1)

0x2c0: Push(GlobalVars[0])
0x2c1: @@ in(Stack[-2], Stack[-4])
0x2c2: Pop(1)
0x2c3: Pop(0); Push((bool) Stack[-1] == 0)
0x2c4: IF (Stack[-1] == 0) GOTO 0x2c6; Pop(1)

0x2c5: Return(); Pop(2)

0x2c6: PushEmpty()
0x2c7: Call2 0x353

0x2c8: Pop(0)
0x2c9: PushEmpty(object)
0x2ca: Stack[-1] = Stack[-4]
0x2cb: Push(-1, 1); TaskCall(0)
0x2cc: Call2 0x0

0x2cd: Pop(-1, 1); TaskReturn
0x2ce: Pop(1)
0x2cf: Return(); Pop(2)

0x2d0: PushEmpty()
0x2d1: PushEmpty(bool, object)
0x2d2: Stack[-1] = Stack[-3]
0x2d3: Call2 0x493

0x2d4: Pop(1)
0x2d5: Pop(1); Push((bool) Stack[-1] == 0)
0x2d6: IF (Stack[-1] == 0) GOTO 0x2dc; Pop(1)

0x2d7: PushEmpty(object)
0x2d8: Stack[-1] = Stack[-2]
0x2d9: Call2 0x707

0x2da: Pop(1)
0x2db: Return(); Pop(0)

0x2dc: PushEmpty()
0x2dd: Call2 0x353

0x2de: Pop(0)
0x2df: PushEmpty(object)
0x2e0: Stack[-1] = Stack[-2]
0x2e1: Call2 0x71f

0x2e2: Pop(1)
0x2e3: Return(); Pop(0)

0x2e4: PushEmpty()
0x2e5: PushEmpty(bool, object, object, bool)
0x2e6: Stack[-3] = Stack[-7]
0x2e7: Stack[-2] = Stack[-6]
0x2e8: Stack[-1] = Stack[-5]
0x2e9: Call2 0x7b3

0x2ea: Pop(3)
0x2eb: IF (Stack[-1] == 0) GOTO 0x2f0; Pop(1)

0x2ec: PushEmpty(object)
0x2ed: Stack[-1] = Stack[-4]
0x2ee: Call2 0x2d0

0x2ef: Pop(1)
0x2f0: Return(); Pop(0)

0x2f1: PushEmpty()
0x2f2: PushEmpty(bool, object)
0x2f3: Stack[-1] = Stack[-3]
0x2f4: Call2 0x797

0x2f5: Pop(1)
0x2f6: IF (Stack[-1] == 0) GOTO 0x2fe; Pop(1)

0x2f7: PushEmpty()
0x2f8: Call2 0x353

0x2f9: Pop(0)
0x2fa: PushEmpty(object)
0x2fb: Stack[-1] = Stack[-2]
0x2fc: Call2 0x7cd

0x2fd: Pop(1)
0x2fe: Return(); Pop(0)

0x2ff: PushEmpty(int, bool, cvector, object, int, bool, cvector, object)
0x300: @ GetPFPosition(Stack[-1])
0x301: Pop(0)
0x302: @ GetDirection(Stack[-0])
0x303: Pop(0)
0x304: PushEmpty()
0x305: Call2 0x358

0x306: Pop(0)
0x307: Push((int) 10)
0x308: @ irand(Stack[-5], Stack[-1])
0x309: Pop(1)
0x30a: Push((int) 5)
0x30b: Pop(1); Push(Stack[-5] + Stack[-1]);
0x30c: @ Sleep(Stack[-1], Stack[-4])
0x30d: Pop(1)
0x30e: Push(Stack[-3])
0x30f: IF (Stack[-1] == 0) GOTO 0x314; Pop(1)

0x310: PushEmpty()
0x311: Call2 0x2b1

0x312: Pop(0)
0x313: GOTO 0x351

0x314: PushEmpty()
0x315: Call2 0x358

0x316: Pop(0)
0x317: @ GetPFPosition(Stack[-2])
0x318: Pop(0)
0x319: PushEmpty(float, cvector, cvector)
0x31a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x31b: Stack[-1] = Stack[-5]
0x31c: Call2 0x5cb

0x31d: Pop(2)
0x31e: Push((int) 40000)
0x31f: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x320: IF (Stack[-1] == 0) GOTO 0x343; Pop(1)

0x321: @ FindPathTo(Stack[-1], Stack[-1])
0x322: Pop(0)
0x323: Pop(0); Push(( Stack[-1] != 0 )
0x324: IF (Stack[-1] == 0) GOTO 0x33e; Pop(1)

0x325: @ RotatePath(Stack[-1], Stack[-3])
0x326: Pop(0)
0x327: Pop(0); Push((bool) Stack[-3] == 0)
0x328: IF (Stack[-1] == 0) GOTO 0x32a; Pop(1)

0x329: GOTO 0x350

0x32a: Push((bool) 0)
0x32b: @ FollowPath(Stack[-2], Stack[-1], Stack[-4])
0x32c: Pop(1)
0x32d: Pop(0); Push((bool) Stack[-3] == 0)
0x32e: IF (Stack[-1] == 0) GOTO 0x330; Pop(1)

0x32f: GOTO 0x350

0x330: Push(CvectorIndex(Stack[-0], 0))
0x331: Push(CvectorIndex(Stack[-0], 2))
0x332: @ Rotate(Stack[-2], Stack[-1], Stack[-5])
0x333: Pop(2)
0x334: Pop(0); Push((bool) Stack[-3] == 0)
0x335: IF (Stack[-1] == 0) GOTO 0x337; Pop(1)

0x336: GOTO 0x350

0x337: @ WaitForAnimEnd(Stack[-3])
0x338: Pop(0)
0x339: Pop(0); Push((bool) Stack[-3] == 0)
0x33a: IF (Stack[-1] == 0) GOTO 0x33c; Pop(1)

0x33b: GOTO 0x350

0x33c: GOTO 0x351

0x33d: GOTO 0x341

0x33e: Push((int) 1)
0x33f: @ Sleep(Stack[-1])
0x340: Pop(1)
0x341: Stack[-1] = 0
0x342: GOTO 0x350

0x343: Push(CvectorIndex(Stack[-0], 0))
0x344: Push(CvectorIndex(Stack[-0], 2))
0x345: @ Rotate(Stack[-2], Stack[-1], Stack[-5])
0x346: Pop(2)
0x347: Pop(0); Push((bool) Stack[-3] == 0)
0x348: IF (Stack[-1] == 0) GOTO 0x34a; Pop(1)

0x349: GOTO 0x350

0x34a: @ WaitForAnimEnd(Stack[-3])
0x34b: Pop(0)
0x34c: Pop(0); Push((bool) Stack[-3] == 0)
0x34d: IF (Stack[-1] == 0) GOTO 0x34f; Pop(1)

0x34e: GOTO 0x350

0x34f: GOTO 0x351

0x350: GOTO 0x314

0x351: GOTO 0x304

0x352: Return(); Pop(8)

0x353: @ StopGroup0()
0x354: Pop(0)
0x355: @ Stop()
0x356: Pop(0)
0x357: Return(); Pop(0)

0x358: Return(); Pop(0)

0x359: PushEmpty()
0x35a: PushEmpty(object)
0x35b: Stack[-1] = Stack[-2]
0x35c: Call2 0x35f

0x35d: Pop(1)
0x35e: Return(); Pop(0)

0x35f: PushEmpty()
0x360: EventDisable(0)
0x361: PushEmpty(object)
0x362: Stack[-1] = Stack[-2]
0x363: Call2 0x378

0x364: Pop(1)
0x365: Push((int) 50)
0x366: Push((int) 40)
0x367: @ SetRTEnvelope(Stack[-2], Stack[-1])
0x368: Pop(2)
0x369: EventEnable(0)
0x36a: @ Hold()
0x36b: Pop(0)
0x36c: GOTO 0x36a

0x36d: Return(); Pop(0)

0x36e: PushEmpty(bool, bool)
0x36f: @ IsOverrideActive(Stack[-1])
0x370: Pop(0)
0x371: Pop(0); Push((bool) Stack[-1] == 0)
0x372: IF (Stack[-1] == 0) GOTO 0x377; Pop(1)

0x373: PushEmpty(object)
0x374: Stack[-1] = Stack[-4]
0x375: Call2 0x62f

0x376: Pop(1)
0x377: Return(); Pop(2)

0x378: PushEmpty(cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector, cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector)
0x379: Pop(0); Push((bool) Stack[-21] == 0)
0x37a: IF (Stack[-1] == 0) GOTO 0x380; Pop(1)

0x37b: PushEmpty(string)
0x37c: Stack[-1] = "fdie"
0x37d: Call2 0x3d3

0x37e: Pop(1)
0x37f: GOTO 0x3d2

0x380: @@ GetPosition(Stack[-10])
0x381: Pop(0)
0x382: @ GetPosition(Stack[-9])
0x383: Pop(0)
0x384: @ GetDirection(Stack[-8])
0x385: Pop(0)
0x386: Stack[-7] = Stack[-9] - Stack[-10]; Pop(0);
0x387: Push(CvectorIndex(Stack[-7], 0))
0x388: Push(CvectorIndex(Stack[-9], 0))
0x389: Pop(2); Push(Stack[-2] * Stack[-1]);
0x38a: Push(CvectorIndex(Stack[-8], 2))
0x38b: Push(CvectorIndex(Stack[-10], 2))
0x38c: Pop(2); Push(Stack[-2] * Stack[-1]);
0x38d: Pop(2); Push(Stack[-2] + Stack[-1]);
0x38e: Push((int) 0)
0x38f: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x390: IF (Stack[-1] == 0) GOTO 0x393; Pop(1)

0x391: Stack[-6] = "fdie"
0x392: GOTO 0x394

0x393: Stack[-6] = "bdie"
0x394: @ RemoveRTEnvelope()
0x395: Pop(0)
0x396: @ SetDeathState()
0x397: Pop(0)
0x398: @ Stop()
0x399: Pop(0)
0x39a: @ StopAsync()
0x39b: Pop(0)
0x39c: Stack[-5] = Stack[-21]
0x39d: Push("GetScriptProperty")
0x39e: Push((int) 2)
0x39f: Pop(2); Push(IsFuncExist(Stack[-23], Stack[-2], Stack[-1]))
0x3a0: IF (Stack[-1] == 0) GOTO 0x3ac; Pop(1)

0x3a1: Push("Owner")
0x3a2: @@ HasScriptProperty(Stack[-5], Stack[-1])
0x3a3: Pop(1)
0x3a4: Push(Stack[-4])
0x3a5: IF (Stack[-1] == 0) GOTO 0x3ac; Pop(1)

0x3a6: Push("Owner")
0x3a7: @@ GetScriptProperty(Stack[-6], Stack[-1])
0x3a8: Pop(1)
0x3a9: Pop(0); Push((bool) Stack[-5] == 0)
0x3aa: IF (Stack[-1] == 0) GOTO 0x3ac; Pop(1)

0x3ab: Stack[-5] = Stack[-21]
0x3ac: Push("@GetEyesHeight")
0x3ad: Push((int) 1)
0x3ae: Pop(2); Push(IsFuncExist(Stack[-7], Stack[-2], Stack[-1]))
0x3af: IF (Stack[-1] == 0) GOTO 0x3bb; Pop(1)

0x3b0: @@ GetEyesHeight(Stack[-2])
0x3b1: Pop(0)
0x3b2: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x3b3: Push(CvectorIndex(Stack[-1], 1))
0x3b4: Stack[-1] = Stack[-3]
0x3b5: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x3b6: Push("head")
0x3b7: @ LookAsync(Stack[-22], Stack[-1], Stack[-2])
0x3b8: Pop(1)
0x3b9: Stack[-3] = (bool) 1
0x3ba: GOTO 0x3bc

0x3bb: Stack[-3] = (bool) 0
0x3bc: PushEmpty(string)
0x3bd: Stack[-1] = Stack[-7]
0x3be: Call2 0x53b

0x3bf: Pop(1)
0x3c0: Push("all")
0x3c1: @ PlayAnimation(Stack[-1], Stack[-7])
0x3c2: Pop(1)
0x3c3: @ WaitForAnimEnd()
0x3c4: Pop(0)
0x3c5: Push(Stack[-3])
0x3c6: IF (Stack[-1] == 0) GOTO 0x3cc; Pop(1)

0x3c7: @ StopAsync()
0x3c8: Pop(0)
0x3c9: Push("head")
0x3ca: @ UnlookAsync(Stack[-1])
0x3cb: Pop(1)
0x3cc: Push("all")
0x3cd: @ LockAnimationEnd(Stack[-1], Stack[-7])
0x3ce: Pop(1)
0x3cf: @ RemoveEnvelope()
0x3d0: Pop(0)
0x3d1: Stack[-5] = 0
0x3d2: Return(); Pop(20)

0x3d3: PushEmpty()
0x3d4: @ RemoveRTEnvelope()
0x3d5: Pop(0)
0x3d6: @ SetDeathState()
0x3d7: Pop(0)
0x3d8: @ Stop()
0x3d9: Pop(0)
0x3da: @ StopAsync()
0x3db: Pop(0)
0x3dc: @ StopSecondaryAnimation()
0x3dd: Pop(0)
0x3de: PushEmpty(string)
0x3df: Stack[-1] = Stack[-2]
0x3e0: Call2 0x53b

0x3e1: Pop(1)
0x3e2: Push("all")
0x3e3: @ PlayAnimation(Stack[-1], Stack[-2])
0x3e4: Pop(1)
0x3e5: @ WaitForAnimEnd()
0x3e6: Pop(0)
0x3e7: Push("all")
0x3e8: @ LockAnimationEnd(Stack[-1], Stack[-2])
0x3e9: Pop(1)
0x3ea: @ RemoveEnvelope()
0x3eb: Pop(0)
0x3ec: Return(); Pop(0)

0x3ed: PushEmpty()
0x3ee: Return(); Pop(0)

0x3ef: PushEmpty()
0x3f0: Return(); Pop(0)

0x3f1: PushEmpty()
0x3f2: Return(); Pop(0)

0x3f3: PushEmpty()
0x3f4: Push((int) 2)
0x3f5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3f6: IF (Stack[-1] == 0) GOTO 0x3fa; Pop(1)

0x3f7: Stack[-2] = "fire"
0x3f8: Return(); Pop(0)

0x3f9: GOTO 0x3ff

0x3fa: Push((int) 1)
0x3fb: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3fc: IF (Stack[-1] == 0) GOTO 0x3ff; Pop(1)

0x3fd: Stack[-2] = "bullet"
0x3fe: Return(); Pop(0)

0x3ff: Stack[-2] = "phys"
0x400: Return(); Pop(0)

0x401: PushEmpty(cvector, cvector, cvector, cvector)
0x402: @ GetPosition(Stack[-2])
0x403: Pop(0)
0x404: @@ GetPosition(Stack[-1])
0x405: Pop(0)
0x406: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x407: Return(); Pop(4)

0x408: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x409: @ GetPosition(Stack[-3])
0x40a: Pop(0)
0x40b: @@ GetPosition(Stack[-2])
0x40c: Pop(0)
0x40d: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x40e: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x40f: Return(); Pop(6)

0x410: PushEmpty(bool, bool)
0x411: @ IsPlayerActor(Stack[-3], Stack[-1])
0x412: Pop(0)
0x413: Stack[-4] = Stack[-1]
0x414: Return(); Pop(2)

0x415: PushEmpty(bool, bool)
0x416: Push("HasProperty")
0x417: Push((int) 2)
0x418: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x419: Pop(1); Push((bool) Stack[-1] == 0)
0x41a: IF (Stack[-1] == 0) GOTO 0x41d; Pop(1)

0x41b: Stack[-5] = (bool) 0
0x41c: Return(); Pop(2)

0x41d: @@ HasProperty(Stack[-3], Stack[-1])
0x41e: Pop(0)
0x41f: Stack[-5] = Stack[-1]
0x420: Return(); Pop(2)

0x421: PushEmpty(int, string, int, float, float, float, int, string, int, float, float, float)
0x422: PushEmpty(bool, object, string)
0x423: Stack[-2] = Stack[-18]
0x424: Stack[-1] = "health"
0x425: Call2 0x415

0x426: Pop(2)
0x427: Pop(1); Push((bool) Stack[-1] == 0)
0x428: IF (Stack[-1] == 0) GOTO 0x42b; Pop(1)

0x429: Stack[-16] = (float) 0.0
0x42a: Return(); Pop(12)

0x42b: PushEmpty(bool, object, string)
0x42c: Stack[-2] = Stack[-18]
0x42d: Stack[-1] = "armor"
0x42e: Call2 0x415

0x42f: Pop(2)
0x430: Pop(1); Push((bool) Stack[-1] == 0)
0x431: IF (Stack[-1] == 0) GOTO 0x434; Pop(1)

0x432: Stack[-6] = (int) 0
0x433: GOTO 0x437

0x434: Push("armor")
0x435: @@ GetProperty(Stack[-1], Stack[-7])
0x436: Pop(1)
0x437: Push("armor_")
0x438: PushEmpty(string, int)
0x439: Stack[-1] = Stack[-16]
0x43a: Call2 0x3f3

0x43b: Pop(1)
0x43c: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x43d: PushEmpty(bool, object, string)
0x43e: Stack[-2] = Stack[-18]
0x43f: Stack[-1] = Stack[-8]
0x440: Call2 0x415

0x441: Pop(2)
0x442: Pop(1); Push((bool) Stack[-1] == 0)
0x443: IF (Stack[-1] == 0) GOTO 0x446; Pop(1)

0x444: Stack[-4] = (int) 0
0x445: GOTO 0x448

0x446: @@ GetProperty(Stack[-5], Stack[-4])
0x447: Pop(0)
0x448: PushEmpty(float, float, float)
0x449: Pop(0); Push(Stack[-9] + Stack[-7]);
0x44a: Push((float)100.0)
0x44b: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0x44c: Stack[-1] = (int) 1
0x44d: Call2 0x5cf

0x44e: Stack[-6] = Stack[-3]
0x44f: Pop(3)
0x450: Push("health")
0x451: @@ GetProperty(Stack[-1], Stack[-3])
0x452: Pop(1)
0x453: Push((int) 1)
0x454: Pop(1); Push(Stack[-1] - Stack[-4]);
0x455: Stack[-2] = Stack[-15] * Stack[-1]; Pop(1);
0x456: Push("health")
0x457: PushEmpty(float, float, float, float)
0x458: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0x459: Stack[-2] = (int) 0
0x45a: Stack[-1] = (int) 1
0x45b: Call2 0x5d6

0x45c: Pop(3)
0x45d: @@ SetProperty(Stack[-2], Stack[-1])
0x45e: Pop(2)
0x45f: PushEmpty(bool, object)
0x460: Stack[-1] = Stack[-17]
0x461: Call2 0x410

0x462: Pop(1)
0x463: IF (Stack[-1] == 0) GOTO 0x468; Pop(1)

0x464: PushEmpty(float)
0x465: Stack[-1] = -Stack[-2]; Pop(0);
0x466: Call2 0x60b

0x467: Pop(1)
0x468: Stack[-16] = Stack[-1]
0x469: Return(); Pop(12)

0x46a: PushEmpty(bool, bool)
0x46b: @@ IsDead(Stack[-1])
0x46c: Pop(0)
0x46d: Stack[-4] = Stack[-1]
0x46e: Return(); Pop(2)

0x46f: PushEmpty(object, object, object, object)
0x470: Pop(0); Push((bool) Stack[-5] == 0)
0x471: IF (Stack[-1] == 0) GOTO 0x474; Pop(1)

0x472: Stack[-6] = (bool) 0
0x473: Return(); Pop(4)

0x474: PushEmpty(bool)
0x475: Stack[-1] = (bool) 0
0x476: Push("IsDead")
0x477: Push((int) 1)
0x478: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x479: IF (Stack[-1] == 0) GOTO 0x480; Pop(1)

0x47a: PushEmpty(bool, object)
0x47b: Stack[-1] = Stack[-8]
0x47c: Call2 0x46a

0x47d: Pop(1)
0x47e: IF (Stack[-1] == 0) GOTO 0x480; Pop(1)

0x47f: Stack[-1] = (bool) 1
0x480: IF (Stack[-1] == 0) GOTO 0x483; Pop(1)

0x481: Stack[-6] = (bool) 0
0x482: Return(); Pop(4)

0x483: @ GetScene(Stack[-2])
0x484: Pop(0)
0x485: Pop(0); Push((bool) Stack[-2] == 0)
0x486: IF (Stack[-1] == 0) GOTO 0x489; Pop(1)

0x487: Stack[-6] = (bool) 0
0x488: Return(); Pop(4)

0x489: @@ GetScene(Stack[-1])
0x48a: Pop(0)
0x48b: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x48c: IF (Stack[-1] == 0) GOTO 0x48f; Pop(1)

0x48d: Stack[-6] = (bool) 0
0x48e: Return(); Pop(4)

0x48f: Stack[-6] = (bool) 1
0x490: Return(); Pop(4)

0x491: Stack[-1] = 0
0x492: Stack[-2] = 0
0x493: PushEmpty(int, int)
0x494: PushEmpty(bool, object)
0x495: Stack[-1] = Stack[-5]
0x496: Call2 0x46f

0x497: Pop(1)
0x498: Pop(1); Push((bool) Stack[-1] == 0)
0x499: IF (Stack[-1] == 0) GOTO 0x49c; Pop(1)

0x49a: Stack[-4] = (bool) 0
0x49b: Return(); Pop(2)

0x49c: PushEmpty(bool, object, string)
0x49d: Stack[-2] = Stack[-6]
0x49e: Stack[-1] = "noaccess"
0x49f: Call2 0x415

0x4a0: Pop(2)
0x4a1: Pop(1); Push((bool) Stack[-1] == 0)
0x4a2: IF (Stack[-1] == 0) GOTO 0x4a5; Pop(1)

0x4a3: Stack[-4] = (bool) 1
0x4a4: Return(); Pop(2)

0x4a5: Push("noaccess")
0x4a6: @@ GetProperty(Stack[-1], Stack[-2])
0x4a7: Pop(1)
0x4a8: Push((int) 0)
0x4a9: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x4aa: Return(); Pop(2)

0x4ab: PushEmpty(bool, int, cvector, cvector, cvector, cvector, string, bool, int, cvector, cvector, cvector, cvector, string)
0x4ac: Pop(0); Push((bool) Stack[-15] == 0)
0x4ad: IF (Stack[-1] == 0) GOTO 0x4af; Pop(1)

0x4ae: Return(); Pop(14)

0x4af: @ IsDead(Stack[-7])
0x4b0: Pop(0)
0x4b1: Push(Stack[-7])
0x4b2: IF (Stack[-1] == 0) GOTO 0x4b4; Pop(1)

0x4b3: Return(); Pop(14)

0x4b4: @ GetSecondaryAnimationType(Stack[-6])
0x4b5: Pop(0)
0x4b6: Push((int) 0)
0x4b7: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x4b8: IF (Stack[-1] == 0) GOTO 0x4ba; Pop(1)

0x4b9: Return(); Pop(14)

0x4ba: @@ GetPosition(Stack[-5])
0x4bb: Pop(0)
0x4bc: @ GetPosition(Stack[-4])
0x4bd: Pop(0)
0x4be: @ GetDirection(Stack[-3])
0x4bf: Pop(0)
0x4c0: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0x4c1: Push(CvectorIndex(Stack[-2], 0))
0x4c2: Push(CvectorIndex(Stack[-4], 0))
0x4c3: Pop(2); Push(Stack[-2] * Stack[-1]);
0x4c4: Push(CvectorIndex(Stack[-3], 2))
0x4c5: Push(CvectorIndex(Stack[-5], 2))
0x4c6: Pop(2); Push(Stack[-2] * Stack[-1]);
0x4c7: Pop(2); Push(Stack[-2] + Stack[-1]);
0x4c8: Push((int) 0)
0x4c9: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x4ca: IF (Stack[-1] == 0) GOTO 0x4cd; Pop(1)

0x4cb: Stack[-1] = "fhit"
0x4cc: GOTO 0x4ce

0x4cd: Stack[-1] = "bhit"
0x4ce: Push("hit_react")
0x4cf: Push("1")
0x4d0: Pop(1); Push(Stack[-3] + Stack[-1]);
0x4d1: Push("2")
0x4d2: Pop(1); Push(Stack[-4] + Stack[-1]);
0x4d3: Push((int) -10)
0x4d4: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x4d5: Pop(4)
0x4d6: Return(); Pop(14)

0x4d7: PushEmpty(cvector, object, int, bool, cvector, cvector, int, int, cvector, cvector, object, int, bool, cvector, cvector, int, int, cvector)
0x4d8: PushEmpty(bool)
0x4d9: Stack[-1] = (bool) 0
0x4da: PushEmpty(bool)
0x4db: Stack[-1] = (bool) 0
0x4dc: Push(Stack[-23])
0x4dd: IF (Stack[-1] == 0) GOTO 0x4e2; Pop(1)

0x4de: Push((int) 4)
0x4df: Pop(1); Push((bool) Stack[-23] != Stack[-1])
0x4e0: IF (Stack[-1] == 0) GOTO 0x4e2; Pop(1)

0x4e1: Stack[-1] = (bool) 1
0x4e2: IF (Stack[-1] == 0) GOTO 0x4e7; Pop(1)

0x4e3: Push((int) 5)
0x4e4: Pop(1); Push((bool) Stack[-22] != Stack[-1])
0x4e5: IF (Stack[-1] == 0) GOTO 0x4e7; Pop(1)

0x4e6: Stack[-1] = (bool) 1
0x4e7: IF (Stack[-1] == 0) GOTO 0x516; Pop(1)

0x4e8: PushEmpty(cvector, cvector)
0x4e9: PushEmpty(cvector, object)
0x4ea: Stack[-1] = Stack[-25]
0x4eb: Call2 0x401

0x4ec: Stack[-3] = Stack[-2]
0x4ed: Pop(2)
0x4ee: Call2 0x5c1

0x4ef: Stack[-11] = Stack[-2]
0x4f0: Pop(2)
0x4f1: @ CreateVectorVector(Stack[-8])
0x4f2: Pop(0)
0x4f3: Stack[-7] = (int) 1
0x4f4: Push("hit")
0x4f5: Pop(1); Push(Stack[-1] + Stack[-8]);
0x4f6: @ GetGeometryLocator(Stack[-1], Stack[-7], Stack[-6], Stack[-5])
0x4f7: Pop(1)
0x4f8: Pop(0); Push((bool) Stack[-6] == 0)
0x4f9: IF (Stack[-1] == 0) GOTO 0x4fb; Pop(1)

0x4fa: GOTO 0x504

0x4fb: Pop(0); Push(Stack[-4] | Stack[-9]);
0x4fc: Push((float)0.70711)
0x4fd: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x4fe: IF (Stack[-1] == 0) GOTO 0x501; Pop(1)

0x4ff: @@ add(Stack[-5])
0x500: Pop(0)
0x501: Push((int) 1)
0x502: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x503: GOTO 0x4f4

0x504: @@ size(Stack[-3])
0x505: Pop(0)
0x506: Push(Stack[-3])
0x507: IF (Stack[-1] == 0) GOTO 0x515; Pop(1)

0x508: @ irand(Stack[-2], Stack[-3])
0x509: Pop(0)
0x50a: @@ get(Stack[-1], Stack[-2])
0x50b: Pop(0)
0x50c: PushEmpty(object, int, float, cvector, cvector)
0x50d: Stack[-5] = Stack[-26]
0x50e: Stack[-4] = Stack[-25]
0x50f: Stack[-3] = Stack[-24]
0x510: Stack[-2] = Stack[-6]
0x511: Stack[-1] = -Stack[-14]; Pop(0);
0x512: Call2 0x51b

0x513: Pop(5)
0x514: Return(); Pop(18)

0x515: Stack[-8] = 0
0x516: PushEmpty(object)
0x517: Stack[-1] = Stack[-22]
0x518: Call2 0x4ab

0x519: Pop(1)
0x51a: Return(); Pop(18)

0x51b: PushEmpty(object, object, object, object)
0x51c: @ GetScene(Stack[-2])
0x51d: Pop(0)
0x51e: Push("scripted")
0x51f: Push("blood_dir.xml")
0x520: @ AddActorByType(Stack[-3], Stack[-2], Stack[-4], Stack[-8], Stack[-7], Stack[-1])
0x521: Pop(2)
0x522: PushEmpty(object)
0x523: Stack[-1] = Stack[-10]
0x524: Call2 0x4ab

0x525: Pop(1)
0x526: Return(); Pop(4)

0x527: Stack[-1] = 0
0x528: Stack[-2] = 0
0x529: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x52a: @@ GetPosition(Stack[-3])
0x52b: Pop(0)
0x52c: @ GetPosition(Stack[-2])
0x52d: Pop(0)
0x52e: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0x52f: Push(CvectorIndex(Stack[-1], 0))
0x530: Push(CvectorIndex(Stack[-2], 2))
0x531: @ RotateAsync(Stack[-2], Stack[-1])
0x532: Pop(2)
0x533: Return(); Pop(6)

0x534: PushEmpty(float, float, float, float)
0x535: @ GetEyesHeight(Stack[-2])
0x536: Pop(0)
0x537: @@ GetEyesHeight(Stack[-1])
0x538: Pop(0)
0x539: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x53a: Return(); Pop(4)

0x53b: PushEmpty(bool, int, bool, int, bool, float, cvector, cvector, bool, int, bool, int, bool, float, cvector, cvector)
0x53c: @ IsExisting3DSound(Stack[-8], Stack[-17])
0x53d: Pop(0)
0x53e: Pop(0); Push((bool) Stack[-8] == 0)
0x53f: IF (Stack[-1] == 0) GOTO 0x554; Pop(1)

0x540: Stack[-7] = (int) 0
0x541: Push((int) 1)
0x542: Pop(1); Push(Stack[-8] + Stack[-1]);
0x543: Pop(1); Push(Stack[-18] + Stack[-1]);
0x544: @ IsExisting3DSound(Stack[-7], Stack[-1])
0x545: Pop(1)
0x546: Pop(0); Push((bool) Stack[-6] == 0)
0x547: IF (Stack[-1] == 0) GOTO 0x549; Pop(1)

0x548: GOTO 0x54c

0x549: Push((int) 1)
0x54a: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x54b: GOTO 0x541

0x54c: Pop(0); Push((bool) Stack[-7] == 0)
0x54d: IF (Stack[-1] == 0) GOTO 0x54f; Pop(1)

0x54e: Return(); Pop(16)

0x54f: @ irand(Stack[-5], Stack[-7])
0x550: Pop(0)
0x551: Push((int) 1)
0x552: Pop(1); Push(Stack[-6] + Stack[-1]);
0x553: Stack[-18] = Stack[-18] + Stack[-1]; Pop(1);
0x554: @ Is3DSoundLoaded(Stack[-4], Stack[-17])
0x555: Pop(0)
0x556: Push(Stack[-4])
0x557: IF (Stack[-1] == 0) GOTO 0x563; Pop(1)

0x558: @ GetEyesHeight(Stack[-3])
0x559: Pop(0)
0x55a: @ GetDirection(Stack[-2])
0x55b: Pop(0)
0x55c: Push((int) 50)
0x55d: Stack[-2] = Stack[-3] * Stack[-1]; Pop(1);
0x55e: Push(CvectorIndex(Stack[-1], 1))
0x55f: Stack[-1] = Stack[-1] + Stack[-4]; Pop(0);
0x560: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x561: @ PlayGlobalSound(Stack[-17], Stack[-1])
0x562: Pop(0)
0x563: Return(); Pop(16)

0x564: PushEmpty()
0x565: Stack[-2] = (bool) 1
0x566: PushEmpty(bool)
0x567: Stack[-1] = (bool) 1
0x568: PushEmpty(bool)
0x569: Stack[-1] = (bool) 1
0x56a: PushEmpty(bool)
0x56b: Stack[-1] = (bool) 1
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
0x57c: Push("woman")
0x57d: Pop(1); Push((bool) Stack[-13] == Stack[-1])
0x57e: IF (Stack[-1] == 0) GOTO 0x583; Pop(1)

0x57f: Push("worker")
0x580: Pop(1); Push((bool) Stack[-13] == Stack[-1])
0x581: IF (Stack[-1] == 0) GOTO 0x583; Pop(1)

0x582: Stack[-1] = (bool) 0
0x583: IF (Stack[-1] == 0) GOTO 0x588; Pop(1)

0x584: Push("butcher")
0x585: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0x586: IF (Stack[-1] == 0) GOTO 0x588; Pop(1)

0x587: Stack[-1] = (bool) 0
0x588: IF (Stack[-1] == 0) GOTO 0x58d; Pop(1)

0x589: Push("wasted_girl")
0x58a: Pop(1); Push((bool) Stack[-11] == Stack[-1])
0x58b: IF (Stack[-1] == 0) GOTO 0x58d; Pop(1)

0x58c: Stack[-1] = (bool) 0
0x58d: IF (Stack[-1] == 0) GOTO 0x592; Pop(1)

0x58e: Push("boy")
0x58f: Pop(1); Push((bool) Stack[-10] == Stack[-1])
0x590: IF (Stack[-1] == 0) GOTO 0x592; Pop(1)

0x591: Stack[-1] = (bool) 0
0x592: IF (Stack[-1] == 0) GOTO 0x597; Pop(1)

0x593: Push("vaxxabitka")
0x594: Pop(1); Push((bool) Stack[-9] == Stack[-1])
0x595: IF (Stack[-1] == 0) GOTO 0x597; Pop(1)

0x596: Stack[-1] = (bool) 0
0x597: IF (Stack[-1] == 0) GOTO 0x59c; Pop(1)

0x598: Push("unosha")
0x599: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x59a: IF (Stack[-1] == 0) GOTO 0x59c; Pop(1)

0x59b: Stack[-1] = (bool) 0
0x59c: IF (Stack[-1] == 0) GOTO 0x5a1; Pop(1)

0x59d: Push("wasted_male")
0x59e: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x59f: IF (Stack[-1] == 0) GOTO 0x5a1; Pop(1)

0x5a0: Stack[-1] = (bool) 0
0x5a1: IF (Stack[-1] == 0) GOTO 0x5a6; Pop(1)

0x5a2: Push("alkash")
0x5a3: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x5a4: IF (Stack[-1] == 0) GOTO 0x5a6; Pop(1)

0x5a5: Stack[-1] = (bool) 0
0x5a6: IF (Stack[-1] == 0) GOTO 0x5ab; Pop(1)

0x5a7: Push("dohodyaga")
0x5a8: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x5a9: IF (Stack[-1] == 0) GOTO 0x5ab; Pop(1)

0x5aa: Stack[-1] = (bool) 0
0x5ab: IF (Stack[-1] == 0) GOTO 0x5b0; Pop(1)

0x5ac: Push("vaxxabit")
0x5ad: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x5ae: IF (Stack[-1] == 0) GOTO 0x5b0; Pop(1)

0x5af: Stack[-1] = (bool) 0
0x5b0: IF (Stack[-1] == 0) GOTO 0x5b5; Pop(1)

0x5b1: Push("nudegirl")
0x5b2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5b3: IF (Stack[-1] == 0) GOTO 0x5b5; Pop(1)

0x5b4: Stack[-1] = (bool) 0
0x5b5: IF (Stack[-1] == 0) GOTO 0x5ba; Pop(1)

0x5b6: Push("morlok")
0x5b7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5b8: IF (Stack[-1] == 0) GOTO 0x5ba; Pop(1)

0x5b9: Stack[-2] = (bool) 0
0x5ba: Return(); Pop(0)

0x5bb: PushEmpty(object, object)
0x5bc: @ self(Stack[-1])
0x5bd: Pop(0)
0x5be: Stack[-3] = Stack[-1]
0x5bf: Return(); Pop(2)

0x5c0: Stack[-1] = 0
0x5c1: PushEmpty(float, float)
0x5c2: Pop(0); Push(Stack[-3] | Stack[-3]);
0x5c3: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x5c4: Push((float)0.0)
0x5c5: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x5c6: IF (Stack[-1] == 0) GOTO 0x5c9; Pop(1)

0x5c7: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x5c8: Return(); Pop(2)

0x5c9: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x5ca: Return(); Pop(2)

0x5cb: PushEmpty(cvector, cvector)
0x5cc: Stack[-1] = Stack[-3] - Stack[-4]; Pop(0);
0x5cd: Stack[-5] = Stack[-1] | Stack[-1]; Pop(0);
0x5ce: Return(); Pop(2)

0x5cf: PushEmpty()
0x5d0: Pop(0); Push((bool) Stack[-2] < Stack[-1])
0x5d1: IF (Stack[-1] == 0) GOTO 0x5d4; Pop(1)

0x5d2: Stack[-3] = Stack[-2]
0x5d3: GOTO 0x5d5

0x5d4: Stack[-3] = Stack[-1]
0x5d5: Return(); Pop(0)

0x5d6: PushEmpty()
0x5d7: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x5d8: IF (Stack[-1] == 0) GOTO 0x5db; Pop(1)

0x5d9: Stack[-4] = Stack[-2]
0x5da: Return(); Pop(0)

0x5db: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x5dc: IF (Stack[-1] == 0) GOTO 0x5df; Pop(1)

0x5dd: Stack[-4] = Stack[-1]
0x5de: Return(); Pop(0)

0x5df: Stack[-4] = Stack[-3]
0x5e0: Return(); Pop(0)

0x5e1: PushEmpty(object, object)
0x5e2: @ CreateObjectSet(Stack[-1])
0x5e3: Pop(0)
0x5e4: Stack[-3] = Stack[-1]
0x5e5: Return(); Pop(2)

0x5e6: Stack[-1] = 0
0x5e7: PushEmpty()
0x5e8: Push(CvectorIndex(Stack[-2], 0))
0x5e9: Push(CvectorIndex(Stack[-2], 0))
0x5ea: Pop(2); Push(Stack[-2] * Stack[-1]);
0x5eb: Push(CvectorIndex(Stack[-3], 2))
0x5ec: Push(CvectorIndex(Stack[-3], 2))
0x5ed: Pop(2); Push(Stack[-2] * Stack[-1]);
0x5ee: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x5ef: Return(); Pop(0)

0x5f0: PushEmpty()
0x5f1: Push(CvectorIndex(Stack[-1], 0))
0x5f2: Push(CvectorIndex(Stack[-2], 0))
0x5f3: Pop(2); Push(Stack[-2] * Stack[-1]);
0x5f4: Push(CvectorIndex(Stack[-2], 2))
0x5f5: Push(CvectorIndex(Stack[-3], 2))
0x5f6: Pop(2); Push(Stack[-2] * Stack[-1]);
0x5f7: Pop(2); Push(Stack[-2] + Stack[-1]);
0x5f8: Stack[-3] = Sqrt(Stack[-1]); Pop(1);
0x5f9: Return(); Pop(0)

0x5fa: PushEmpty()
0x5fb: PushEmpty(float, cvector, cvector)
0x5fc: Stack[-2] = Stack[-5]
0x5fd: Stack[-1] = Stack[-4]
0x5fe: Call2 0x5e7

0x5ff: Pop(2)
0x600: PushEmpty(float, cvector)
0x601: Stack[-1] = Stack[-5]
0x602: Call2 0x5f0

0x603: Pop(1)
0x604: PushEmpty(float, cvector)
0x605: Stack[-1] = Stack[-5]
0x606: Call2 0x5f0

0x607: Pop(1)
0x608: Pop(2); Push(Stack[-2] * Stack[-1]);
0x609: Stack[-5] = Stack[-2] / Stack[-1]; Pop(2);
0x60a: Return(); Pop(0)

0x60b: PushEmpty(object, object)
0x60c: @ CreateFloatVector(Stack[-1])
0x60d: Pop(0)
0x60e: @@ add(Stack[-3])
0x60f: Pop(0)
0x610: Push((int) 15)
0x611: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x612: Pop(1)
0x613: Return(); Pop(2)

0x614: Stack[-1] = 0
0x615: PushEmpty(bool, bool)
0x616: @ IsPlayerActor(Stack[-3], Stack[-1])
0x617: Pop(0)
0x618: Push(Stack[-1])
0x619: IF (Stack[-1] == 0) GOTO 0x61d; Pop(1)

0x61a: Push("attack")
0x61b: @ PlayGlobalMusic(Stack[-1])
0x61c: Pop(1)
0x61d: Return(); Pop(2)

0x61e: PushEmpty(object, object)
0x61f: @ GetScene(Stack[-1])
0x620: Pop(0)
0x621: Push("battle")
0x622: PushEmpty(object)
0x623: Call2 0x5bb

0x624: Pop(0)
0x625: @ BroadcastMessage(Stack[-2], Stack[-1], Stack[-3])
0x626: Pop(2)
0x627: Return(); Pop(2)

0x628: Stack[-1] = 0
0x629: PushEmpty(int, int)
0x62a: Push("branch")
0x62b: @ GetVariable(Stack[-1], Stack[-2])
0x62c: Pop(1)
0x62d: Stack[-3] = Stack[-1]
0x62e: Return(); Pop(2)

0x62f: PushEmpty()
0x630: PushEmpty(int)
0x631: Call2 0x629

0x632: Pop(0)
0x633: Push((int) 1)
0x634: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x635: IF (Stack[-1] == 0) GOTO 0x639; Pop(1)

0x636: @ WorkWithCorpse(Stack[-1])
0x637: Pop(0)
0x638: GOTO 0x63b

0x639: @ Barter(Stack[-1])
0x63a: Pop(0)
0x63b: Return(); Pop(0)

0x63c: PushEmpty()
0x63d: PushEmpty(object, int, float)
0x63e: Stack[-3] = Stack[-7]
0x63f: Stack[-2] = Stack[-6]
0x640: Stack[-1] = Stack[-5]
0x641: Call2 0x4d7

0x642: Pop(3)
0x643: Return(); Pop(0)

0x644: PushEmpty()
0x645: PushEmpty(object, int, float, cvector, cvector)
0x646: Stack[-5] = Stack[-11]
0x647: Stack[-4] = Stack[-10]
0x648: Stack[-3] = Stack[-9]
0x649: Stack[-2] = Stack[-7]
0x64a: Stack[-1] = Stack[-6]
0x64b: Call2 0x51b

0x64c: Pop(5)
0x64d: Return(); Pop(0)

0x64e: PushEmpty(float, float)
0x64f: Push("health")
0x650: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x651: IF (Stack[-1] == 0) GOTO 0x65a; Pop(1)

0x652: Push("health")
0x653: @ GetProperty(Stack[-1], Stack[-2])
0x654: Pop(1)
0x655: Push((int) 0)
0x656: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x657: IF (Stack[-1] == 0) GOTO 0x65a; Pop(1)

0x658: @ SignalDeath(Stack[-4])
0x659: Pop(0)
0x65a: Return(); Pop(2)

0x65b: PushEmpty()
0x65c: PushEmpty(bool, object)
0x65d: Stack[-1] = Stack[-3]
0x65e: Call2 0x410

0x65f: Pop(1)
0x660: IF (Stack[-1] == 0) GOTO 0x668; Pop(1)

0x661: PushEmpty(object)
0x662: Call2 0x5bb

0x663: Pop(0)
0x664: Push((float)0.05)
0x665: Push((bool) 1)
0x666: @ ReportReputationChange(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x667: Pop(3)
0x668: PushEmpty(object)
0x669: Stack[-1] = Stack[-2]
0x66a: Call2 0x7d3

0x66b: Pop(1)
0x66c: Return(); Pop(0)

0x66d: PushEmpty(string, string)
0x66e: PushEmpty(bool, object, string)
0x66f: Stack[-2] = Stack[-7]
0x670: Stack[-1] = "class"
0x671: Call2 0x415

0x672: Pop(2)
0x673: Pop(1); Push((bool) Stack[-1] == 0)
0x674: IF (Stack[-1] == 0) GOTO 0x677; Pop(1)

0x675: Stack[-5] = (bool) 0
0x676: Return(); Pop(2)

0x677: Push("class")
0x678: @@ GetProperty(Stack[-1], Stack[-2])
0x679: Pop(1)
0x67a: PushEmpty(bool)
0x67b: Stack[-1] = (bool) 1
0x67c: PushEmpty(bool)
0x67d: Stack[-1] = (bool) 1
0x67e: PushEmpty(bool)
0x67f: Stack[-1] = (bool) 1
0x680: PushEmpty(bool)
0x681: Stack[-1] = (bool) 1
0x682: PushEmpty(bool)
0x683: Stack[-1] = (bool) 1
0x684: PushEmpty(bool)
0x685: Stack[-1] = (bool) 1
0x686: PushEmpty(bool)
0x687: Stack[-1] = (bool) 1
0x688: PushEmpty(bool)
0x689: Stack[-1] = (bool) 1
0x68a: PushEmpty(bool)
0x68b: Stack[-1] = (bool) 1
0x68c: PushEmpty(bool)
0x68d: Stack[-1] = (bool) 1
0x68e: Push("patrol")
0x68f: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0x690: IF (Stack[-1] == 0) GOTO 0x695; Pop(1)

0x691: Push("sanitar")
0x692: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0x693: IF (Stack[-1] == 0) GOTO 0x695; Pop(1)

0x694: Stack[-1] = (bool) 0
0x695: IF (Stack[-1] == 0) GOTO 0x69a; Pop(1)

0x696: Push("soldier")
0x697: Pop(1); Push((bool) Stack[-11] == Stack[-1])
0x698: IF (Stack[-1] == 0) GOTO 0x69a; Pop(1)

0x699: Stack[-1] = (bool) 0
0x69a: IF (Stack[-1] == 0) GOTO 0x69f; Pop(1)

0x69b: Push("woman")
0x69c: Pop(1); Push((bool) Stack[-10] == Stack[-1])
0x69d: IF (Stack[-1] == 0) GOTO 0x69f; Pop(1)

0x69e: Stack[-1] = (bool) 0
0x69f: IF (Stack[-1] == 0) GOTO 0x6a4; Pop(1)

0x6a0: Push("wasted_girl")
0x6a1: Pop(1); Push((bool) Stack[-9] == Stack[-1])
0x6a2: IF (Stack[-1] == 0) GOTO 0x6a4; Pop(1)

0x6a3: Stack[-1] = (bool) 0
0x6a4: IF (Stack[-1] == 0) GOTO 0x6a9; Pop(1)

0x6a5: Push("vaxxabitka")
0x6a6: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x6a7: IF (Stack[-1] == 0) GOTO 0x6a9; Pop(1)

0x6a8: Stack[-1] = (bool) 0
0x6a9: IF (Stack[-1] == 0) GOTO 0x6ae; Pop(1)

0x6aa: Push("vaxxabit")
0x6ab: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x6ac: IF (Stack[-1] == 0) GOTO 0x6ae; Pop(1)

0x6ad: Stack[-1] = (bool) 0
0x6ae: IF (Stack[-1] == 0) GOTO 0x6b3; Pop(1)

0x6af: Push("little_girl")
0x6b0: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x6b1: IF (Stack[-1] == 0) GOTO 0x6b3; Pop(1)

0x6b2: Stack[-1] = (bool) 0
0x6b3: IF (Stack[-1] == 0) GOTO 0x6b8; Pop(1)

0x6b4: Push("girl")
0x6b5: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x6b6: IF (Stack[-1] == 0) GOTO 0x6b8; Pop(1)

0x6b7: Stack[-1] = (bool) 0
0x6b8: IF (Stack[-1] == 0) GOTO 0x6bd; Pop(1)

0x6b9: Push("dohodyaga")
0x6ba: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x6bb: IF (Stack[-1] == 0) GOTO 0x6bd; Pop(1)

0x6bc: Stack[-1] = (bool) 0
0x6bd: IF (Stack[-1] == 0) GOTO 0x6c2; Pop(1)

0x6be: Push("nudegirl")
0x6bf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6c0: IF (Stack[-1] == 0) GOTO 0x6c2; Pop(1)

0x6c1: Stack[-1] = (bool) 0
0x6c2: IF (Stack[-1] == 0) GOTO 0x6c5; Pop(1)

0x6c3: Stack[-5] = (bool) 1
0x6c4: Return(); Pop(2)

0x6c5: Push(Stack[-3])
0x6c6: IF (Stack[-1] == 0) GOTO 0x6c9; Pop(1)

0x6c7: Stack[-5] = (bool) 0
0x6c8: Return(); Pop(2)

0x6c9: Stack[-5] = (bool) 1
0x6ca: PushEmpty(bool)
0x6cb: Stack[-1] = (bool) 1
0x6cc: PushEmpty(bool)
0x6cd: Stack[-1] = (bool) 1
0x6ce: PushEmpty(bool)
0x6cf: Stack[-1] = (bool) 1
0x6d0: PushEmpty(bool)
0x6d1: Stack[-1] = (bool) 1
0x6d2: PushEmpty(bool)
0x6d3: Stack[-1] = (bool) 1
0x6d4: Push("worker")
0x6d5: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x6d6: IF (Stack[-1] == 0) GOTO 0x6db; Pop(1)

0x6d7: Push("butcher")
0x6d8: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x6d9: IF (Stack[-1] == 0) GOTO 0x6db; Pop(1)

0x6da: Stack[-1] = (bool) 0
0x6db: IF (Stack[-1] == 0) GOTO 0x6e0; Pop(1)

0x6dc: Push("boy")
0x6dd: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x6de: IF (Stack[-1] == 0) GOTO 0x6e0; Pop(1)

0x6df: Stack[-1] = (bool) 0
0x6e0: IF (Stack[-1] == 0) GOTO 0x6e5; Pop(1)

0x6e1: Push("unosha")
0x6e2: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x6e3: IF (Stack[-1] == 0) GOTO 0x6e5; Pop(1)

0x6e4: Stack[-1] = (bool) 0
0x6e5: IF (Stack[-1] == 0) GOTO 0x6ea; Pop(1)

0x6e6: Push("wasted_male")
0x6e7: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x6e8: IF (Stack[-1] == 0) GOTO 0x6ea; Pop(1)

0x6e9: Stack[-1] = (bool) 0
0x6ea: IF (Stack[-1] == 0) GOTO 0x6ef; Pop(1)

0x6eb: Push("alkash")
0x6ec: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6ed: IF (Stack[-1] == 0) GOTO 0x6ef; Pop(1)

0x6ee: Stack[-1] = (bool) 0
0x6ef: IF (Stack[-1] == 0) GOTO 0x6f4; Pop(1)

0x6f0: Push("morlok")
0x6f1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6f2: IF (Stack[-1] == 0) GOTO 0x6f4; Pop(1)

0x6f3: Stack[-5] = (bool) 0
0x6f4: Return(); Pop(2)

0x6f5: Push(GlobalVars[0])
0x6f6: PushEmpty(object)
0x6f7: Call2 0x5e1

0x6f8: Stack[-2] = Stack[-1]
0x6f9: Pop(1)
0x6fa: GlobalVars[0] = Stack[-1]; Pop(1)
0x6fb: Return(); Pop(0)

0x6fc: PushEmpty()
0x6fd: PushEmpty(object, bool)
0x6fe: Stack[-2] = Stack[-4]
0x6ff: Stack[-1] = Stack[-3]
0x700: Push(-2, 3); TaskCall(2)
0x701: Call2 0x11f

0x702: Pop(-2, 3); TaskReturn
0x703: Pop(2)
0x704: @ ResetAAS()
0x705: Pop(0)
0x706: Return(); Pop(0)

0x707: PushEmpty(bool, bool)
0x708: Pop(0); Push((bool) Stack[-3] == 0)
0x709: IF (Stack[-1] == 0) GOTO 0x70b; Pop(1)

0x70a: Return(); Pop(2)

0x70b: Push(GlobalVars[0])
0x70c: @@ in(Stack[-2], Stack[-4])
0x70d: Pop(1)
0x70e: Pop(0); Push((bool) Stack[-1] == 0)
0x70f: IF (Stack[-1] == 0) GOTO 0x713; Pop(1)

0x710: Push(GlobalVars[0])
0x711: @@ add(Stack[-4])
0x712: Pop(1)
0x713: PushEmpty(bool, object)
0x714: Stack[-1] = Stack[-5]
0x715: Call2 0x410

0x716: Pop(1)
0x717: IF (Stack[-1] == 0) GOTO 0x71e; Pop(1)

0x718: PushEmpty(object)
0x719: Call2 0x5bb

0x71a: Pop(0)
0x71b: Push((float)0.0)
0x71c: @ ReportReputationChange(Stack[-5], Stack[-2], Stack[-1])
0x71d: Pop(2)
0x71e: Return(); Pop(2)

0x71f: PushEmpty()
0x720: PushEmpty(object)
0x721: Stack[-1] = Stack[-2]
0x722: Call2 0x707

0x723: Pop(1)
0x724: PushEmpty(object, bool)
0x725: Stack[-2] = Stack[-3]
0x726: Stack[-1] = (bool) 1
0x727: Call2 0x6fc

0x728: Pop(2)
0x729: Return(); Pop(0)

0x72a: PushEmpty(bool, bool)
0x72b: Push(GlobalVars[0])
0x72c: @@ in(Stack[-2], Stack[-4])
0x72d: Pop(1)
0x72e: Push(Stack[-1])
0x72f: IF (Stack[-1] == 0) GOTO 0x736; Pop(1)

0x730: PushEmpty(object, bool)
0x731: Stack[-2] = Stack[-5]
0x732: Stack[-1] = (bool) 1
0x733: Call2 0x6fc

0x734: Pop(2)
0x735: GOTO 0x73e

0x736: PushEmpty(object)
0x737: Stack[-1] = Stack[-4]
0x738: Push(-1, 2); TaskCall(1)
0x739: Call2 0x78

0x73a: Pop(-1, 2); TaskReturn
0x73b: Pop(1)
0x73c: @ ResetAAS()
0x73d: Pop(0)
0x73e: Return(); Pop(2)

0x73f: PushEmpty()
0x740: PushEmpty(float, object)
0x741: Stack[-1] = Stack[-3]
0x742: Call2 0x408

0x743: Pop(1)
0x744: Push((float)40000.0)
0x745: Stack[-4] = Stack[-2] <= Stack[-1]; Pop(2);
0x746: Return(); Pop(0)

0x747: PushEmpty(float, string, float, float, string, float)
0x748: PushEmpty(bool, object)
0x749: Stack[-1] = Stack[-9]
0x74a: Call2 0x493

0x74b: Pop(1)
0x74c: Pop(1); Push((bool) Stack[-1] == 0)
0x74d: IF (Stack[-1] == 0) GOTO 0x750; Pop(1)

0x74e: Stack[-8] = (bool) 0
0x74f: Return(); Pop(6)

0x750: PushEmpty(bool, object)
0x751: Stack[-1] = Stack[-9]
0x752: Call2 0x410

0x753: Pop(1)
0x754: IF (Stack[-1] == 0) GOTO 0x75b; Pop(1)

0x755: Push("reputation")
0x756: @@ GetProperty(Stack[-1], Stack[-4])
0x757: Pop(1)
0x758: Push((float)0.33)
0x759: Stack[-9] = Stack[-4] < Stack[-1]; Pop(1);
0x75a: Return(); Pop(6)

0x75b: PushEmpty(bool, object, string)
0x75c: Stack[-2] = Stack[-10]
0x75d: Stack[-1] = "class"
0x75e: Call2 0x415

0x75f: Pop(2)
0x760: Pop(1); Push((bool) Stack[-1] == 0)
0x761: IF (Stack[-1] == 0) GOTO 0x764; Pop(1)

0x762: Stack[-8] = (bool) 0
0x763: Return(); Pop(6)

0x764: Push("class")
0x765: @@ GetProperty(Stack[-1], Stack[-3])
0x766: Pop(1)
0x767: PushEmpty(bool)
0x768: Stack[-1] = (bool) 1
0x769: PushEmpty(bool)
0x76a: Stack[-1] = (bool) 1
0x76b: Push("bomber")
0x76c: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x76d: IF (Stack[-1] == 0) GOTO 0x772; Pop(1)

0x76e: Push("hunter")
0x76f: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x770: IF (Stack[-1] == 0) GOTO 0x772; Pop(1)

0x771: Stack[-1] = (bool) 0
0x772: IF (Stack[-1] == 0) GOTO 0x777; Pop(1)

0x773: Push("grabitel")
0x774: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x775: IF (Stack[-1] == 0) GOTO 0x777; Pop(1)

0x776: Stack[-1] = (bool) 0
0x777: IF (Stack[-1] == 0) GOTO 0x77a; Pop(1)

0x778: Stack[-8] = (bool) 1
0x779: Return(); Pop(6)

0x77a: PushEmpty(bool, object, string)
0x77b: Stack[-2] = Stack[-10]
0x77c: Stack[-1] = "disease"
0x77d: Call2 0x415

0x77e: Pop(2)
0x77f: Pop(1); Push((bool) Stack[-1] == 0)
0x780: IF (Stack[-1] == 0) GOTO 0x783; Pop(1)

0x781: Stack[-8] = (bool) 0
0x782: Return(); Pop(6)

0x783: PushEmpty(bool)
0x784: Stack[-1] = (bool) 1
0x785: PushEmpty(bool, string)
0x786: Stack[-1] = Stack[-5]
0x787: Call2 0x564

0x788: Pop(1)
0x789: IF (Stack[-1] == 0) GOTO 0x78e; Pop(1)

0x78a: Push("dog")
0x78b: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x78c: IF (Stack[-1] == 0) GOTO 0x78e; Pop(1)

0x78d: Stack[-1] = (bool) 0
0x78e: IF (Stack[-1] == 0) GOTO 0x795; Pop(1)

0x78f: Push("disease")
0x790: @@ GetProperty(Stack[-1], Stack[-2])
0x791: Pop(1)
0x792: Push((int) 0)
0x793: Stack[-9] = Stack[-2] > Stack[-1]; Pop(1);
0x794: Return(); Pop(6)

0x795: Stack[-8] = (bool) 0
0x796: Return(); Pop(6)

0x797: PushEmpty(bool, bool)
0x798: PushEmpty(bool, object)
0x799: Stack[-1] = Stack[-5]
0x79a: Call2 0x493

0x79b: Pop(1)
0x79c: Pop(1); Push((bool) Stack[-1] == 0)
0x79d: IF (Stack[-1] == 0) GOTO 0x7a0; Pop(1)

0x79e: Stack[-4] = (bool) 0
0x79f: Return(); Pop(2)

0x7a0: Push(GlobalVars[0])
0x7a1: @@ in(Stack[-2], Stack[-4])
0x7a2: Pop(1)
0x7a3: Push(Stack[-1])
0x7a4: IF (Stack[-1] == 0) GOTO 0x7a7; Pop(1)

0x7a5: Stack[-4] = (bool) 1
0x7a6: Return(); Pop(2)

0x7a7: PushEmpty(bool, object)
0x7a8: Stack[-1] = Stack[-5]
0x7a9: Call2 0x747

0x7aa: Stack[-6] = Stack[-2]
0x7ab: Pop(2)
0x7ac: Return(); Pop(2)

0x7ad: PushEmpty()
0x7ae: PushEmpty(object)
0x7af: Stack[-1] = Stack[-2]
0x7b0: Call2 0x7cd

0x7b1: Pop(1)
0x7b2: Return(); Pop(0)

0x7b3: PushEmpty(bool, bool)
0x7b4: PushEmpty(bool, object, bool)
0x7b5: Stack[-2] = Stack[-7]
0x7b6: Stack[-1] = !Stack[-6]; Pop(0);
0x7b7: Call2 0x66d

0x7b8: Pop(2)
0x7b9: IF (Stack[-1] == 0) GOTO 0x7cb; Pop(1)

0x7ba: @ CanSee(Stack[-1], Stack[-5])
0x7bb: Pop(0)
0x7bc: PushEmpty(bool)
0x7bd: Stack[-1] = (bool) 1
0x7be: Push(Stack[-2])
0x7bf: IF (Stack[-1] == 0) GOTO 0x7c8; Pop(1)

0x7c0: PushEmpty(float, object)
0x7c1: Stack[-1] = Stack[-8]
0x7c2: Call2 0x408

0x7c3: Pop(1)
0x7c4: Push((float)490000.0)
0x7c5: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x7c6: IF (Stack[-1] == 0) GOTO 0x7c8; Pop(1)

0x7c7: Stack[-1] = (bool) 0
0x7c8: IF (Stack[-1] == 0) GOTO 0x7cb; Pop(1)

0x7c9: Stack[-6] = (bool) 1
0x7ca: Return(); Pop(2)

0x7cb: Stack[-6] = (bool) 0
0x7cc: Return(); Pop(2)

0x7cd: PushEmpty()
0x7ce: PushEmpty(object)
0x7cf: Stack[-1] = Stack[-2]
0x7d0: Call2 0x72a

0x7d1: Pop(1)
0x7d2: Return(); Pop(0)

0x7d3: PushEmpty(object, object)
0x7d4: @ GetScene(Stack[-1])
0x7d5: Pop(0)
0x7d6: PushEmpty(object)
0x7d7: Call2 0x5bb

0x7d8: Pop(0)
0x7d9: @@ RemoveStationaryActor(Stack[-1])
0x7da: Pop(1)
0x7db: PushEmpty(object)
0x7dc: Stack[-1] = Stack[-4]
0x7dd: Push(-1, 0); TaskCall(5)
0x7de: Call2 0x359

0x7df: Pop(-1, 0); TaskReturn
0x7e0: Pop(1)
0x7e1: Return(); Pop(2)

0x7e2: Stack[-1] = 0
