GlobalVarCount = 0

Strings:
	cleanup
	player
	@GetAttackDistance
	GetAttackDistance
	attack
	GetPFPosition
	all
	attack_on
	attack_stay
	fjump
	attack_off
	attack_begin
	bjump
	attack_middle
	_
	attack_end
	IsAttacking
	IsAttacking
	head
	GetPosition
	walk
	run
	fdie
	bdie
	GetScriptProperty
	Owner
	HasScriptProperty
	GetScriptProperty
	@GetEyesHeight
	GetEyesHeight
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
	1
	2
	add
	size
	get
	scripted
	blood_dir.xml
	battle

Import:
	Hold (0 args)
	Sleep (1 args)
	RemoveActor (1 args)
	FindActor (2 args)
	IsPlayerActor (2 args)
	PlayGlobalMusic (1 args)
	SendPlayerEnemy (2 args)
	GetPFPosition (1 args)
	CanReachByPF (2 args)
	PlayAnimation (2 args)
	WaitForAnimEnd (0 args)
	StopAsync (0 args)
	rand (1 args)
	Face (1 args)
	SetSpeed (1 args)
	Stop (0 args)
	HasAnimation (3 args)
	IsExisting3DSound (2 args)
	GetAnimationOffset (3 args)
	GetVictim (2 args)
	ReportAttack (1 args)
	ReportHit (4 args)
	irand (2 args)
	SetAttackState (1 args)
	IsAnimationPlaying (1 args)
	sync (0 args)
	GetScene (1 args)
	FindDirLength (3 args)
	Speak (1 args)
	SetTimer (2 args)
	CanSee (2 args)
	UnlookAsync (1 args)
	KillTimer (1 args)
	GetPosition (1 args)
	FindPathTo (2 args)
	RotatePath (2 args)
	FollowPath (5 args)
	Sleep (2 args)
	RequestClearPath (1 args)
	GetDirection (1 args)
	RemoveRTEnvelope (0 args)
	SetDeathState (0 args)
	LookAsync (3 args)
	LockAnimationEnd (2 args)
	RemoveEnvelope (0 args)
	StopSecondaryAnimation (0 args)
	IsDead (1 args)
	GetSecondaryAnimationType (1 args)
	FadeSecondaryAnimation (4 args)
	CreateVectorVector (1 args)
	GetGeometryLocator (4 args)
	AddActorByType (6 args)
	RotateAsync (2 args)
	Is3DSoundLoaded (2 args)
	GetEyesHeight (1 args)
	PlayGlobalSound (2 args)
	self (1 args)
	CreateFloatVector (1 args)
	RumblePlay (2 args)
	SendWorldWndMessage (2 args)
	BroadcastMessage (3 args)
	GetProperty (2 args)
	SignalDeath (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_5 Op = 0x3 Vars = ()
		EVENT_26 Op = 0xc Vars = (string)
	GTASK_1 Vars = (object, int, int, bool, float, int) Params = 0
	GTASK_2 Vars = (bool, object, bool) Params = 6
		EVENT_7 Op = 0x2f6 Vars = (int)
		EVENT_1 Op = 0x311 Vars = (object)
		EVENT_2 Op = 0x320 Vars = (object)
		EVENT_10 Op = 0x3a6 Vars = (object)
		EVENT_41 Op = 0x3b1 Vars = (object)
	GTASK_3  Params = 1
		EVENT_22 Op = 0x443 Vars = (object, int, float, float)
		EVENT_16 Op = 0x445 Vars = (object, string)
		EVENT_41 Op = 0x447 Vars = (object)

Events:
EVENT_6 Op = 0x5fd Vars = ()
EVENT_22 Op = 0x60d Vars = (object, int, float, float)
EVENT_43 Op = 0x615 Vars = (object, int, float, float, cvector, cvector)
EVENT_16 Op = 0x61f Vars = (object, string)
EVENT_41 Op = 0x62c Vars = (object)

0x0: @ Hold()
0x1: Pop(0)
0x2: Return(); Pop(0)

0x3: Push((int) 4)
0x4: @ Sleep(Stack[-1])
0x5: Pop(1)
0x6: PushEmpty()
0x7: Push(-0, 6); TaskCall(1)
0x8: Call2 0x16

0x9: Pop(-0, 6); TaskReturn
0xa: Pop(0)
0xb: Return(); Pop(0)

0xc: PushEmpty()
0xd: Push("cleanup")
0xe: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf: IF (Stack[-1] == 0) GOTO 0x15; Pop(1)

0x10: PushEmpty(object)
0x11: Call2 0x5b6

0x12: Pop(0)
0x13: @ RemoveActor(Stack[-1])
0x14: Pop(1)
0x15: Return(); Pop(0)

0x16: PushEmpty(object, object)
0x17: Push("player")
0x18: @ FindActor(Stack[-2], Stack[-1])
0x19: Pop(1)
0x1a: Pop(0); Push((bool) Stack[-1] == 0)
0x1b: IF (Stack[-1] == 0) GOTO 0x1d; Pop(1)

0x1c: Return(); Pop(2)

0x1d: PushEmpty(object, bool, float)
0x1e: Stack[-3] = Stack[-4]
0x1f: Stack[-2] = (bool) 1
0x20: Stack[-1] = (float) 180.0
0x21: Call2 0x2f

0x22: Pop(3)
0x23: Push((int) 1)
0x24: @ Sleep(Stack[-1])
0x25: Pop(1)
0x26: GOTO 0x1d

0x27: Return(); Pop(2)

0x28: Stack[-1] = 0
0x29: PushEmpty()
0x2a: Stack[-3] = (float) 0.1
0x2b: Return(); Pop(0)

0x2c: PushEmpty()
0x2d: Stack[-3] = (int) 0
0x2e: Return(); Pop(0)

0x2f: PushEmpty(float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float, float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float)
0x30: PushEmpty()
0x31: Call2 0x114

0x32: Pop(0)
0x33: Stack[5 + Tasks[-1].StackPointer] = (int)0
0x34: Push("@GetAttackDistance")
0x35: Push((int) 1)
0x36: Pop(2); Push(IsFuncExist(Stack[-27], Stack[-2], Stack[-1]))
0x37: IF (Stack[-1] == 0) GOTO 0x3d; Pop(1)

0x38: @@ GetAttackDistance(Stack[-11])
0x39: Pop(0)
0x3a: Push((int) 50)
0x3b: Stack[-12] = Stack[-12] + Stack[-1]; Pop(1);
0x3c: GOTO 0x3e

0x3d: Stack[-11] = Stack[-23]
0x3e: Push((int) 150)
0x3f: Pop(1); Push((bool) Stack[-12] >= Stack[-1])
0x40: IF (Stack[-1] == 0) GOTO 0x42; Pop(1)

0x41: Stack[-11] = (int) 150
0x42: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x43: Stack[0 + Tasks[-1].StackPointer] = Stack[-25]
0x44: @ IsPlayerActor(Stack[-0], Stack[-8])
0x45: Pop(0)
0x46: Push(Stack[-8])
0x47: IF (Stack[-1] == 0) GOTO 0x50; Pop(1)

0x48: Push("attack")
0x49: @ PlayGlobalMusic(Stack[-1])
0x4a: Pop(1)
0x4b: PushEmpty(object)
0x4c: Call2 0x5b6

0x4d: Pop(0)
0x4e: @ SendPlayerEnemy(Stack[-26], Stack[-1])
0x4f: Pop(1)
0x50: Push(Stack[-24])
0x51: IF (Stack[-1] == 0) GOTO 0x54; Pop(1)

0x52: Stack[-7] = (bool) 0
0x53: GOTO 0x55

0x54: Stack[-7] = (bool) 1
0x55: Push((float)400.0)
0x56: Stack[-7] = Stack[-1] + Stack[-12]; Pop(1);
0x57: PushEmpty(bool)
0x58: Stack[-1] = (bool) 0
0x59: PushEmpty(bool, object)
0x5a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5b: Call2 0x4e1

0x5c: Pop(1)
0x5d: IF (Stack[-1] == 0) GOTO 0x61; Pop(1)

0x5e: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x5f: IF (Stack[-1] == 0) GOTO 0x61; Pop(1)

0x60: Stack[-1] = (bool) 1
0x61: IF (Stack[-1] == 0) GOTO 0x103; Pop(1)

0x62: PushEmpty()
0x63: Call2 0x2b1

0x64: Pop(0)
0x65: @@ GetPFPosition(Stack[-10])
0x66: Pop(0)
0x67: @ GetPFPosition(Stack[-9])
0x68: Pop(0)
0x69: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0x6a: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x6b: Pop(0); Push(Stack[-6] * Stack[-6]);
0x6c: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0x6d: IF (Stack[-1] == 0) GOTO 0x7d; Pop(1)

0x6e: PushEmpty(bool, object, float, float, bool, bool)
0x6f: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0x70: Stack[-4] = Stack[-17]
0x71: Stack[-3] = (float) 10000.0
0x72: Stack[-2] = (bool) 1
0x73: Stack[-1] = (bool) 0
0x74: Push(-6, 3); TaskCall(2)
0x75: Call2 0x2c5

0x76: Pop(-6, 3); TaskReturn
0x77: Pop(5)
0x78: Pop(1); Push((bool) Stack[-1] == 0)
0x79: IF (Stack[-1] == 0) GOTO 0x7b; Pop(1)

0x7a: GOTO 0x103

0x7b: Stack[-7] = (bool) 0
0x7c: GOTO 0x102

0x7d: Pop(0); Push(Stack[-23] * Stack[-23]);
0x7e: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0x7f: IF (Stack[-1] == 0) GOTO 0xfa; Pop(1)

0x80: @@ GetPFPosition(Stack[-3])
0x81: Pop(0)
0x82: @ CanReachByPF(Stack[-2], Stack[-3])
0x83: Pop(0)
0x84: Pop(0); Push((bool) Stack[-2] == 0)
0x85: IF (Stack[-1] == 0) GOTO 0x95; Pop(1)

0x86: PushEmpty(bool, object, float, float, bool, bool)
0x87: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0x88: Stack[-4] = Stack[-17]
0x89: Stack[-3] = (float) 10000.0
0x8a: Stack[-2] = (bool) 1
0x8b: Stack[-1] = (bool) 0
0x8c: Push(-6, 3); TaskCall(2)
0x8d: Call2 0x2c5

0x8e: Pop(-6, 3); TaskReturn
0x8f: Pop(5)
0x90: Pop(1); Push((bool) Stack[-1] == 0)
0x91: IF (Stack[-1] == 0) GOTO 0x93; Pop(1)

0x92: GOTO 0x103

0x93: Stack[-7] = (bool) 0
0x94: GOTO 0x57

0x95: Pop(0); Push((bool) Stack[-7] == 0)
0x96: IF (Stack[-1] == 0) GOTO 0xae; Pop(1)

0x97: PushEmpty(object)
0x98: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x99: Call2 0x577

0x9a: Pop(1)
0x9b: Push("all")
0x9c: Push("attack_on")
0x9d: @ PlayAnimation(Stack[-2], Stack[-1])
0x9e: Pop(2)
0x9f: @ WaitForAnimEnd()
0xa0: Pop(0)
0xa1: PushEmpty()
0xa2: Call2 0x2b1

0xa3: Pop(0)
0xa4: @ StopAsync()
0xa5: Pop(0)
0xa6: Stack[-7] = (bool) 1
0xa7: PushEmpty(bool, object)
0xa8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa9: Call2 0x4e1

0xaa: Pop(1)
0xab: Pop(1); Push((bool) Stack[-1] == 0)
0xac: IF (Stack[-1] == 0) GOTO 0xae; Pop(1)

0xad: GOTO 0x103

0xae: @ rand(Stack[-1])
0xaf: Pop(0)
0xb0: PushEmpty(bool)
0xb1: Stack[-1] = (bool) 1
0xb2: Push((float)0.25)
0xb3: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0xb4: IF (Stack[-1] == 0) GOTO 0xba; Pop(1)

0xb5: PushEmpty(bool)
0xb6: Call2 0x286

0xb7: Pop(0)
0xb8: IF (Stack[-1] == 0) GOTO 0xba; Pop(1)

0xb9: Stack[-1] = (bool) 0
0xba: IF (Stack[-1] == 0) GOTO 0xcb; Pop(1)

0xbb: @ Face(Stack[-0])
0xbc: Pop(0)
0xbd: PushEmpty()
0xbe: Call2 0x2b8

0xbf: Pop(0)
0xc0: Push("all")
0xc1: Push("attack_stay")
0xc2: @ PlayAnimation(Stack[-2], Stack[-1])
0xc3: Pop(2)
0xc4: PushEmpty(bool, float)
0xc5: Stack[-1] = Stack[-25]
0xc6: Call2 0x202

0xc7: Pop(2)
0xc8: @ StopAsync()
0xc9: Pop(0)
0xca: GOTO 0xf9

0xcb: @ Face(Stack[-0])
0xcc: Pop(0)
0xcd: Push("all")
0xce: Push("fjump")
0xcf: @ PlayAnimation(Stack[-2], Stack[-1])
0xd0: Pop(2)
0xd1: @ WaitForAnimEnd()
0xd2: Pop(0)
0xd3: PushEmpty()
0xd4: Call2 0x2b1

0xd5: Pop(0)
0xd6: Push(CVector(0.0, 0.0, 0.0))
0xd7: @ SetSpeed(Stack[-1])
0xd8: Pop(1)
0xd9: @ Stop()
0xda: Pop(0)
0xdb: @ StopAsync()
0xdc: Pop(0)
0xdd: PushEmpty(bool)
0xde: Call2 0x286

0xdf: Pop(0)
0xe0: Pop(1); Push((bool) Stack[-1] == 0)
0xe1: IF (Stack[-1] == 0) GOTO 0xf9; Pop(1)

0xe2: PushEmpty(bool, object)
0xe3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe4: Call2 0x4e1

0xe5: Pop(1)
0xe6: Pop(1); Push((bool) Stack[-1] == 0)
0xe7: IF (Stack[-1] == 0) GOTO 0xe9; Pop(1)

0xe8: GOTO 0x103

0xe9: @@ GetPFPosition(Stack[-10])
0xea: Pop(0)
0xeb: @ GetPFPosition(Stack[-9])
0xec: Pop(0)
0xed: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0xee: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0xef: Pop(0); Push(Stack[-23] * Stack[-23]);
0xf0: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0xf1: IF (Stack[-1] == 0) GOTO 0xf9; Pop(1)

0xf2: PushEmpty(bool, float)
0xf3: Stack[-1] = Stack[-25]
0xf4: Call2 0x15e

0xf5: Pop(1)
0xf6: Pop(1); Push((bool) Stack[-1] == 0)
0xf7: IF (Stack[-1] == 0) GOTO 0xf9; Pop(1)

0xf8: GOTO 0x103

0xf9: GOTO 0x102

0xfa: PushEmpty(bool, float)
0xfb: Stack[-1] = Stack[-25]
0xfc: Call2 0x15e

0xfd: Pop(1)
0xfe: Pop(1); Push((bool) Stack[-1] == 0)
0xff: IF (Stack[-1] == 0) GOTO 0x101; Pop(1)

0x100: GOTO 0x103

0x101: Stack[-7] = (bool) 1
0x102: GOTO 0x57

0x103: @ WaitForAnimEnd()
0x104: Pop(0)
0x105: Push( Stack[3 + Tasks[-1].StackPointer] )
0x106: IF (Stack[-1] == 0) GOTO 0x108; Pop(1)

0x107: Return(); Pop(22)

0x108: Push("all")
0x109: Push("attack_off")
0x10a: @ PlayAnimation(Stack[-2], Stack[-1])
0x10b: Pop(2)
0x10c: @ WaitForAnimEnd()
0x10d: Pop(0)
0x10e: Push(Stack[-8])
0x10f: IF (Stack[-1] == 0) GOTO 0x113; Pop(1)

0x110: Push((float)2.0)
0x111: @ Sleep(Stack[-1])
0x112: Pop(1)
0x113: Return(); Pop(22)

0x114: PushEmpty(bool, bool, cvector, bool, bool, cvector)
0x115: Stack[1 + Tasks[-1].StackPointer] = (int)0
0x116: Push("all")
0x117: Push("attack_begin")
0x118: Push((int) 1)
0x119: Pop(1); Push(Stack[1 + StackPtr] + Stack[-1]);
0x11a: Pop(2); Push(Stack[-2] + Stack[-1]);
0x11b: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0x11c: Pop(2)
0x11d: Pop(0); Push((bool) Stack[-3] == 0)
0x11e: IF (Stack[-1] == 0) GOTO 0x120; Pop(1)

0x11f: GOTO 0x123

0x120: Push((int) 1)
0x121: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x122: GOTO 0x116

0x123: Stack[2 + Tasks[-1].StackPointer] = (int)0
0x124: Push("attack")
0x125: Push((int) 1)
0x126: Pop(1); Push(Stack[2 + StackPtr] + Stack[-1]);
0x127: Pop(2); Push(Stack[-2] + Stack[-1]);
0x128: @ IsExisting3DSound(Stack[-3], Stack[-1])
0x129: Pop(1)
0x12a: Pop(0); Push((bool) Stack[-2] == 0)
0x12b: IF (Stack[-1] == 0) GOTO 0x12d; Pop(1)

0x12c: GOTO 0x130

0x12d: Push((int) 1)
0x12e: Stack[2 + Tasks[-1].StackPointer] = Stack[2 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x12f: GOTO 0x124

0x130: Push("all")
0x131: Push("bjump")
0x132: @ GetAnimationOffset(Stack[-3], Stack[-2], Stack[-1])
0x133: Pop(2)
0x134: Push(CvectorIndex(Stack[-1], 2))
0x135: Stack[4 + Tasks[-1].StackPointer] = -Stack[-1]; Pop(1);
0x136: Return(); Pop(6)

0x137: PushEmpty(object, float, float, object, float, float)
0x138: Push((float)0.9)
0x139: Pop(1); Push(Stack[-9] * Stack[-1]);
0x13a: @ GetVictim(Stack[-1], Stack[-4])
0x13b: Pop(1)
0x13c: @ ReportAttack(Stack[-0])
0x13d: Pop(0)
0x13e: Pop(0); Push((bool) Stack[-3] == Stack[0 + Tasks[-1].StackPointer])
0x13f: IF (Stack[-1] == 0) GOTO 0x15c; Pop(1)

0x140: PushEmpty(float, object, int)
0x141: Stack[-2] = Stack[-6]
0x142: Stack[-1] = Stack[-10]
0x143: Call2 0x29

0x144: Stack[-5] = Stack[-3]
0x145: Pop(3)
0x146: PushEmpty(float, object, float, int)
0x147: Stack[-3] = Stack[-7]
0x148: Stack[-2] = Stack[-6]
0x149: PushEmpty(int, object, int)
0x14a: Stack[-2] = Stack[-10]
0x14b: Stack[-1] = Stack[-14]
0x14c: Call2 0x2c

0x14d: Stack[-4] = Stack[-3]
0x14e: Pop(3)
0x14f: Call2 0x46f

0x150: Stack[-5] = Stack[-4]
0x151: Pop(4)
0x152: PushEmpty(int)
0x153: Call2 0x2b6

0x154: Pop(0)
0x155: @ ReportHit(Stack[-0], Stack[-1], Stack[-2], Stack[-3])
0x156: Pop(1)
0x157: PushEmpty(object, float)
0x158: Stack[-2] = Stack[-5]
0x159: Stack[-1] = Stack[-3]
0x15a: Call2 0x2bd

0x15b: Pop(2)
0x15c: Return(); Pop(6)

0x15d: Stack[-3] = 0
0x15e: PushEmpty(int, bool, int, string, int, bool, int, string)
0x15f: PushEmpty()
0x160: Call2 0x2b1

0x161: Pop(0)
0x162: @ irand(Stack[-4], Stack[-1])
0x163: Pop(0)
0x164: Push((int) 1)
0x165: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x166: @ Face(Stack[-0])
0x167: Pop(0)
0x168: Push((bool) 1)
0x169: @ SetAttackState(Stack[-1])
0x16a: Pop(1)
0x16b: PushEmpty()
0x16c: Call2 0x5f2

0x16d: Pop(0)
0x16e: Push("all")
0x16f: Push("attack_begin")
0x170: Pop(1); Push(Stack[-1] + Stack[-6]);
0x171: @ PlayAnimation(Stack[-2], Stack[-1])
0x172: Pop(2)
0x173: @ WaitForAnimEnd()
0x174: Pop(0)
0x175: PushEmpty()
0x176: Call2 0x291

0x177: Pop(0)
0x178: PushEmpty(bool, object)
0x179: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x17a: Call2 0x4e1

0x17b: Pop(1)
0x17c: Pop(1); Push((bool) Stack[-1] == 0)
0x17d: IF (Stack[-1] == 0) GOTO 0x182; Pop(1)

0x17e: @ StopAsync()
0x17f: Pop(0)
0x180: Stack[-10] = (bool) 0
0x181: Return(); Pop(8)

0x182: PushEmpty(float, int)
0x183: Stack[-2] = Stack[-11]
0x184: Stack[-1] = Stack[-6]
0x185: Call2 0x137

0x186: Pop(2)
0x187: Push("all")
0x188: Push("attack_middle")
0x189: Pop(1); Push(Stack[-1] + Stack[-6]);
0x18a: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0x18b: Pop(2)
0x18c: Push(Stack[-3])
0x18d: IF (Stack[-1] == 0) GOTO 0x1d3; Pop(1)

0x18e: PushEmpty()
0x18f: Call2 0x5f2

0x190: Pop(0)
0x191: Push("all")
0x192: Push("attack_middle")
0x193: Pop(1); Push(Stack[-1] + Stack[-6]);
0x194: @ PlayAnimation(Stack[-2], Stack[-1])
0x195: Pop(2)
0x196: @ WaitForAnimEnd()
0x197: Pop(0)
0x198: PushEmpty()
0x199: Call2 0x2b1

0x19a: Pop(0)
0x19b: PushEmpty(bool, object)
0x19c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x19d: Call2 0x4e1

0x19e: Pop(1)
0x19f: Pop(1); Push((bool) Stack[-1] == 0)
0x1a0: IF (Stack[-1] == 0) GOTO 0x1a5; Pop(1)

0x1a1: @ StopAsync()
0x1a2: Pop(0)
0x1a3: Stack[-10] = (bool) 0
0x1a4: Return(); Pop(8)

0x1a5: PushEmpty(float, int)
0x1a6: Stack[-2] = Stack[-11]
0x1a7: Stack[-1] = Stack[-6]
0x1a8: Call2 0x137

0x1a9: Pop(2)
0x1aa: Stack[-2] = (int) 1
0x1ab: Push("attack_middle")
0x1ac: Pop(1); Push(Stack[-1] + Stack[-5]);
0x1ad: Push("_")
0x1ae: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1af: Stack[-2] = Stack[-1] + Stack[-3]; Pop(1);
0x1b0: Push("all")
0x1b1: @ HasAnimation(Stack[-4], Stack[-1], Stack[-2])
0x1b2: Pop(1)
0x1b3: Pop(0); Push((bool) Stack[-3] == 0)
0x1b4: IF (Stack[-1] == 0) GOTO 0x1b6; Pop(1)

0x1b5: GOTO 0x1d3

0x1b6: PushEmpty()
0x1b7: Call2 0x5f2

0x1b8: Pop(0)
0x1b9: Push("all")
0x1ba: @ PlayAnimation(Stack[-1], Stack[-2])
0x1bb: Pop(1)
0x1bc: @ WaitForAnimEnd()
0x1bd: Pop(0)
0x1be: PushEmpty()
0x1bf: Call2 0x2b1

0x1c0: Pop(0)
0x1c1: PushEmpty(bool, object)
0x1c2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1c3: Call2 0x4e1

0x1c4: Pop(1)
0x1c5: Pop(1); Push((bool) Stack[-1] == 0)
0x1c6: IF (Stack[-1] == 0) GOTO 0x1cb; Pop(1)

0x1c7: @ StopAsync()
0x1c8: Pop(0)
0x1c9: Stack[-10] = (bool) 0
0x1ca: Return(); Pop(8)

0x1cb: PushEmpty(float, int)
0x1cc: Stack[-2] = Stack[-11]
0x1cd: Stack[-1] = Stack[-6]
0x1ce: Call2 0x137

0x1cf: Pop(2)
0x1d0: Push((int) 1)
0x1d1: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x1d2: GOTO 0x1ab

0x1d3: Push((bool) 0)
0x1d4: @ SetAttackState(Stack[-1])
0x1d5: Pop(1)
0x1d6: Push("all")
0x1d7: Push("attack_end")
0x1d8: Pop(1); Push(Stack[-1] + Stack[-6]);
0x1d9: @ PlayAnimation(Stack[-2], Stack[-1])
0x1da: Pop(2)
0x1db: PushEmpty(bool)
0x1dc: Call2 0x2bf

0x1dd: Pop(0)
0x1de: IF (Stack[-1] == 0) GOTO 0x1e5; Pop(1)

0x1df: PushEmpty(bool, float)
0x1e0: Stack[-1] = (float) 0.75
0x1e1: Call2 0x1e7

0x1e2: Pop(2)
0x1e3: @ StopAsync()
0x1e4: Pop(0)
0x1e5: Stack[-10] = (bool) 1
0x1e6: Return(); Pop(8)

0x1e7: PushEmpty(float, bool, float, bool)
0x1e8: @ rand(Stack[-2])
0x1e9: Pop(0)
0x1ea: Pop(0); Push((bool) Stack[-2] < Stack[-5])
0x1eb: IF (Stack[-1] == 0) GOTO 0x1fb; Pop(1)

0x1ec: @ IsAnimationPlaying(Stack[-1])
0x1ed: Pop(0)
0x1ee: Pop(0); Push((bool) Stack[-1] == 0)
0x1ef: IF (Stack[-1] == 0) GOTO 0x1f1; Pop(1)

0x1f0: GOTO 0x1fa

0x1f1: PushEmpty(bool)
0x1f2: Call2 0x249

0x1f3: Pop(0)
0x1f4: IF (Stack[-1] == 0) GOTO 0x1f7; Pop(1)

0x1f5: Stack[-6] = (bool) 1
0x1f6: Return(); Pop(4)

0x1f7: @ sync()
0x1f8: Pop(0)
0x1f9: GOTO 0x1ec

0x1fa: GOTO 0x200

0x1fb: @ WaitForAnimEnd()
0x1fc: Pop(0)
0x1fd: PushEmpty()
0x1fe: Call2 0x2b1

0x1ff: Pop(0)
0x200: Stack[-6] = (bool) 0
0x201: Return(); Pop(4)

0x202: PushEmpty(bool, cvector, cvector, cvector, float, bool, cvector, cvector, cvector, float)
0x203: @ IsAnimationPlaying(Stack[-5])
0x204: Pop(0)
0x205: Pop(0); Push((bool) Stack[-5] == 0)
0x206: IF (Stack[-1] == 0) GOTO 0x208; Pop(1)

0x207: GOTO 0x228

0x208: PushEmpty(bool)
0x209: Call2 0x249

0x20a: Pop(0)
0x20b: IF (Stack[-1] == 0) GOTO 0x20e; Pop(1)

0x20c: Stack[-12] = (bool) 1
0x20d: Return(); Pop(10)

0x20e: PushEmpty(bool, object)
0x20f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x210: Call2 0x4e1

0x211: Pop(1)
0x212: Pop(1); Push((bool) Stack[-1] == 0)
0x213: IF (Stack[-1] == 0) GOTO 0x216; Pop(1)

0x214: Stack[-12] = (bool) 0
0x215: Return(); Pop(10)

0x216: @@ GetPFPosition(Stack[-4])
0x217: Pop(0)
0x218: @ GetPFPosition(Stack[-3])
0x219: Pop(0)
0x21a: Stack[-2] = Stack[-4] - Stack[-3]; Pop(0);
0x21b: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x21c: Pop(0); Push(Stack[-11] * Stack[-11]);
0x21d: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x21e: IF (Stack[-1] == 0) GOTO 0x225; Pop(1)

0x21f: PushEmpty(bool, float)
0x220: Stack[-1] = Stack[-13]
0x221: Call2 0x15e

0x222: Pop(2)
0x223: Stack[-12] = (bool) 1
0x224: Return(); Pop(10)

0x225: @ sync()
0x226: Pop(0)
0x227: GOTO 0x203

0x228: PushEmpty()
0x229: Call2 0x2b1

0x22a: Pop(0)
0x22b: Stack[-12] = (bool) 0
0x22c: Return(); Pop(10)

0x22d: PushEmpty(cvector, cvector, cvector, float, float, cvector, cvector, cvector, float, float)
0x22e: PushEmpty(bool, object)
0x22f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x230: Call2 0x4e1

0x231: Pop(1)
0x232: Pop(1); Push((bool) Stack[-1] == 0)
0x233: IF (Stack[-1] == 0) GOTO 0x236; Pop(1)

0x234: Stack[-11] = (bool) 0
0x235: Return(); Pop(10)

0x236: PushEmpty(bool)
0x237: Call2 0x286

0x238: Pop(0)
0x239: IF (Stack[-1] == 0) GOTO 0x247; Pop(1)

0x23a: @@ GetPFPosition(Stack[-5])
0x23b: Pop(0)
0x23c: @ GetPFPosition(Stack[-4])
0x23d: Pop(0)
0x23e: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x23f: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x240: @@ GetAttackDistance(Stack[-1])
0x241: Pop(0)
0x242: Push((int) 50)
0x243: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x244: Pop(0); Push(Stack[-1] * Stack[-1]);
0x245: Stack[-12] = Stack[-3] <= Stack[-1]; Pop(1);
0x246: Return(); Pop(10)

0x247: Stack[-11] = (bool) 0
0x248: Return(); Pop(10)

0x249: PushEmpty(bool)
0x24a: Stack[-1] = (bool) 0
0x24b: PushEmpty(bool)
0x24c: Call2 0x22d

0x24d: Pop(0)
0x24e: IF (Stack[-1] == 0) GOTO 0x254; Pop(1)

0x24f: PushEmpty(bool)
0x250: Call2 0x259

0x251: Pop(0)
0x252: IF (Stack[-1] == 0) GOTO 0x254; Pop(1)

0x253: Stack[-1] = (bool) 1
0x254: IF (Stack[-1] == 0) GOTO 0x257; Pop(1)

0x255: Stack[-1] = (bool) 1
0x256: Return(); Pop(0)

0x257: Stack[-1] = (bool) 0
0x258: Return(); Pop(0)

0x259: PushEmpty(object, bool, float, cvector, cvector, object, bool, float, cvector, cvector)
0x25a: @ GetScene(Stack[-5])
0x25b: Pop(0)
0x25c: Stack[-4] = (bool) 0
0x25d: PushEmpty(cvector, object)
0x25e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x25f: Call2 0x457

0x260: Pop(1)
0x261: Pop(1); Push(( -Stack[-1])
0x262: @ FindDirLength(Stack[-4], Stack[-1], Stack[-4])
0x263: Pop(1)
0x264: Pop(0); Push((bool) Stack[-3] < Stack[4 + Tasks[-1].StackPointer])
0x265: IF (Stack[-1] == 0) GOTO 0x267; Pop(1)

0x266: GOTO 0x283

0x267: @ Face(Stack[-0])
0x268: Pop(0)
0x269: Push("all")
0x26a: Push("bjump")
0x26b: @ PlayAnimation(Stack[-2], Stack[-1])
0x26c: Pop(2)
0x26d: @@ GetPFPosition(Stack[-2])
0x26e: Pop(0)
0x26f: @ GetPFPosition(Stack[-1])
0x270: Pop(0)
0x271: @ WaitForAnimEnd()
0x272: Pop(0)
0x273: PushEmpty()
0x274: Call2 0x2b1

0x275: Pop(0)
0x276: @ StopAsync()
0x277: Pop(0)
0x278: Push(CVector(0.0, 0.0, 0.0))
0x279: @ SetSpeed(Stack[-1])
0x27a: Pop(1)
0x27b: Stack[-4] = (bool) 1
0x27c: PushEmpty(bool)
0x27d: Call2 0x22d

0x27e: Pop(0)
0x27f: Pop(1); Push((bool) Stack[-1] == 0)
0x280: IF (Stack[-1] == 0) GOTO 0x282; Pop(1)

0x281: GOTO 0x283

0x282: GOTO 0x25d

0x283: Stack[-11] = Stack[-4]
0x284: Return(); Pop(10)

0x285: Stack[-5] = 0
0x286: PushEmpty(bool, bool)
0x287: Push("IsAttacking")
0x288: Push((int) 1)
0x289: Pop(2); Push(IsFuncExist(Stack[0 + Tasks[-1].StackPointer], Stack[-2], Stack[-1]))
0x28a: IF (Stack[-1] == 0) GOTO 0x28f; Pop(1)

0x28b: @@ IsAttacking(Stack[-1])
0x28c: Pop(0)
0x28d: Stack[-3] = Stack[-1]
0x28e: Return(); Pop(2)

0x28f: Stack[-3] = (bool) 0
0x290: Return(); Pop(2)

0x291: PushEmpty(float, int, float, int)
0x292: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x293: IF (Stack[-1] == 0) GOTO 0x295; Pop(1)

0x294: Return(); Pop(4)

0x295: Push( Stack[5 + Tasks[-1].StackPointer] )
0x296: IF (Stack[-1] == 0) GOTO 0x29d; Pop(1)

0x297: Push((int) -1)
0x298: Stack[5 + Tasks[-1].StackPointer] = Stack[5 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x299: Push((int) 0)
0x29a: Pop(1); Push((bool) Stack[5 + Tasks[-1].StackPointer] > Stack[-1])
0x29b: IF (Stack[-1] == 0) GOTO 0x29d; Pop(1)

0x29c: Return(); Pop(4)

0x29d: @ rand(Stack[-2])
0x29e: Pop(0)
0x29f: PushEmpty(float)
0x2a0: Call2 0x2c3

0x2a1: Pop(0)
0x2a2: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x2a3: IF (Stack[-1] == 0) GOTO 0x2b0; Pop(1)

0x2a4: @ irand(Stack[-1], Stack[-2])
0x2a5: Pop(0)
0x2a6: Push((int) 1)
0x2a7: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x2a8: Push("attack")
0x2a9: Pop(1); Push(Stack[-1] + Stack[-2]);
0x2aa: @ Speak(Stack[-1])
0x2ab: Pop(1)
0x2ac: PushEmpty(int)
0x2ad: Call2 0x2c1

0x2ae: Stack[5 + Tasks[-1].StackPointer] = Stack[-1]
0x2af: Pop(1)
0x2b0: Return(); Pop(4)

0x2b1: PushEmpty(object)
0x2b2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2b3: Call2 0x5e9

0x2b4: Pop(1)
0x2b5: Return(); Pop(0)

0x2b6: Stack[-1] = (int) 0
0x2b7: Return(); Pop(0)

0x2b8: PushEmpty(string)
0x2b9: Stack[-1] = "attack_stay"
0x2ba: Call2 0x58d

0x2bb: Pop(1)
0x2bc: Return(); Pop(0)

0x2bd: PushEmpty()
0x2be: Return(); Pop(0)

0x2bf: Stack[-1] = (bool) 1
0x2c0: Return(); Pop(0)

0x2c1: Stack[-1] = (int) 1
0x2c2: Return(); Pop(0)

0x2c3: Stack[-1] = (float) 0.5
0x2c4: Return(); Pop(0)

0x2c5: PushEmpty(bool, bool, bool, bool)
0x2c6: PushEmpty(object)
0x2c7: Stack[-1] = Stack[-10]
0x2c8: Call2 0x5e9

0x2c9: Pop(1)
0x2ca: Push((int) 1)
0x2cb: Push((int) 5)
0x2cc: @ SetTimer(Stack[-2], Stack[-1])
0x2cd: Pop(2)
0x2ce: @ CanSee(Stack[-2], Stack[-9])
0x2cf: Pop(0)
0x2d0: Push(Stack[-2])
0x2d1: IF (Stack[-1] == 0) GOTO 0x2d8; Pop(1)

0x2d2: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x2d3: PushEmpty(object)
0x2d4: Stack[-1] = Stack[-10]
0x2d5: Call2 0x582

0x2d6: Pop(1)
0x2d7: GOTO 0x2d9

0x2d8: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x2d9: PushEmpty(bool, object)
0x2da: Stack[-1] = Stack[-11]
0x2db: Call2 0x45e

0x2dc: Pop(1)
0x2dd: IF (Stack[-1] == 0) GOTO 0x2e3; Pop(1)

0x2de: PushEmpty(object)
0x2df: Call2 0x5b6

0x2e0: Pop(0)
0x2e1: @ SendPlayerEnemy(Stack[-10], Stack[-1])
0x2e2: Pop(1)
0x2e3: PushEmpty(bool, object, float, float, bool, bool)
0x2e4: Stack[-5] = Stack[-15]
0x2e5: Stack[-4] = Stack[-14]
0x2e6: Stack[-3] = Stack[-13]
0x2e7: Stack[-2] = Stack[-12]
0x2e8: Stack[-1] = Stack[-11]
0x2e9: Call2 0x32e

0x2ea: Stack[-7] = Stack[-6]
0x2eb: Pop(6)
0x2ec: Push( Stack[2 + Tasks[-1].StackPointer] )
0x2ed: IF (Stack[-1] == 0) GOTO 0x2f1; Pop(1)

0x2ee: Push("head")
0x2ef: @ UnlookAsync(Stack[-1])
0x2f0: Pop(1)
0x2f1: Push((int) 1)
0x2f2: @ KillTimer(Stack[-1])
0x2f3: Pop(1)
0x2f4: Stack[-10] = Stack[-1]
0x2f5: Return(); Pop(4)

0x2f6: PushEmpty()
0x2f7: Push((int) 1)
0x2f8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2f9: IF (Stack[-1] == 0) GOTO 0x2ff; Pop(1)

0x2fa: PushEmpty(object)
0x2fb: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2fc: Call2 0x5e9

0x2fd: Pop(1)
0x2fe: GOTO 0x303

0x2ff: PushEmpty(int)
0x300: Stack[-1] = Stack[-2]
0x301: Call2 0x394

0x302: Pop(1)
0x303: Return(); Pop(0)

0x304: Push((int) 1)
0x305: @ KillTimer(Stack[-1])
0x306: Pop(1)
0x307: Push( Stack[2 + Tasks[-1].StackPointer] )
0x308: IF (Stack[-1] == 0) GOTO 0x30d; Pop(1)

0x309: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x30a: Push("head")
0x30b: @ UnlookAsync(Stack[-1])
0x30c: Pop(1)
0x30d: PushEmpty()
0x30e: Call2 0x3aa

0x30f: Pop(0)
0x310: Return(); Pop(0)

0x311: PushEmpty()
0x312: PushEmpty(bool)
0x313: Stack[-1] = (bool) 0
0x314: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0x315: IF (Stack[-1] == 0) GOTO 0x319; Pop(1)

0x316: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x317: IF (Stack[-1] == 0) GOTO 0x319; Pop(1)

0x318: Stack[-1] = (bool) 1
0x319: IF (Stack[-1] == 0) GOTO 0x31f; Pop(1)

0x31a: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x31b: PushEmpty(object)
0x31c: Stack[-1] = Stack[-2]
0x31d: Call2 0x582

0x31e: Pop(1)
0x31f: Return(); Pop(0)

0x320: PushEmpty()
0x321: PushEmpty(bool)
0x322: Stack[-1] = (bool) 0
0x323: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0x324: IF (Stack[-1] == 0) GOTO 0x328; Pop(1)

0x325: Push( Stack[2 + Tasks[-1].StackPointer] )
0x326: IF (Stack[-1] == 0) GOTO 0x328; Pop(1)

0x327: Stack[-1] = (bool) 1
0x328: IF (Stack[-1] == 0) GOTO 0x32d; Pop(1)

0x329: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x32a: Push("head")
0x32b: @ UnlookAsync(Stack[-1])
0x32c: Pop(1)
0x32d: Return(); Pop(0)

0x32e: PushEmpty(bool, bool, object, cvector, cvector, cvector, float, object, bool, bool, object, cvector, cvector, cvector, float, object)
0x32f: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x330: Stack[1 + Tasks[-1].StackPointer] = Stack[-21]
0x331: Stack[-7] = Stack[-17]
0x332: PushEmpty(bool, object)
0x333: Stack[-1] = Stack[-23]
0x334: Call2 0x3ba

0x335: Pop(1)
0x336: Pop(1); Push((bool) Stack[-1] == 0)
0x337: IF (Stack[-1] == 0) GOTO 0x33a; Pop(1)

0x338: Stack[-22] = (bool) 0
0x339: Return(); Pop(16)

0x33a: @@ GetPosition(Stack[-5])
0x33b: Pop(0)
0x33c: @ GetPosition(Stack[-4])
0x33d: Pop(0)
0x33e: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x33f: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x340: PushEmpty(bool)
0x341: Stack[-1] = (bool) 0
0x342: Push((int) 0)
0x343: Pop(1); Push((bool) Stack[-21] > Stack[-1])
0x344: IF (Stack[-1] == 0) GOTO 0x349; Pop(1)

0x345: Pop(0); Push(Stack[-20] * Stack[-20]);
0x346: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x347: IF (Stack[-1] == 0) GOTO 0x349; Pop(1)

0x348: Stack[-1] = (bool) 1
0x349: IF (Stack[-1] == 0) GOTO 0x34e; Pop(1)

0x34a: @ Stop()
0x34b: Pop(0)
0x34c: Stack[-22] = (bool) 0
0x34d: Return(); Pop(16)

0x34e: Pop(0); Push(Stack[-20] * Stack[-20]);
0x34f: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x350: IF (Stack[-1] == 0) GOTO 0x38c; Pop(1)

0x351: @@ GetPFPosition(Stack[-5])
0x352: Pop(0)
0x353: @ FindPathTo(Stack[-1], Stack[-5])
0x354: Pop(0)
0x355: Pop(0); Push(( Stack[-1] != 0 )
0x356: IF (Stack[-1] == 0) GOTO 0x359; Pop(1)

0x357: Stack[-6] = Stack[-1]
0x358: Stack[-1] = 0
0x359: Pop(0); Push(( Stack[-6] != 0 )
0x35a: IF (Stack[-1] == 0) GOTO 0x37a; Pop(1)

0x35b: Push(Stack[-7])
0x35c: IF (Stack[-1] == 0) GOTO 0x363; Pop(1)

0x35d: Stack[-7] = (bool) 0
0x35e: @ RotatePath(Stack[-6], Stack[-8])
0x35f: Pop(0)
0x360: Pop(0); Push((bool) Stack[-8] == 0)
0x361: IF (Stack[-1] == 0) GOTO 0x363; Pop(1)

0x362: GOTO 0x392

0x363: Push((int) 0)
0x364: Push((float)0.3)
0x365: @ SetTimer(Stack[-2], Stack[-1])
0x366: Pop(2)
0x367: PushEmpty(string)
0x368: Call2 0x3c1

0x369: Pop(0)
0x36a: PushEmpty(string)
0x36b: Call2 0x3c3

0x36c: Pop(0)
0x36d: @ FollowPath(Stack[-8], Stack[-20], Stack[-10], Stack[-2], Stack[-1])
0x36e: Pop(2)
0x36f: Pop(0); Push((bool) Stack[-8] == 0)
0x370: IF (Stack[-1] == 0) GOTO 0x378; Pop(1)

0x371: Push( Stack[0 + Tasks[-1].StackPointer] )
0x372: IF (Stack[-1] == 0) GOTO 0x376; Pop(1)

0x373: Stack[-6] = 0
0x374: GOTO 0x392

0x375: GOTO 0x377

0x376: GOTO 0x391

0x377: GOTO 0x379

0x378: Stack[-6] = 0
0x379: GOTO 0x38a

0x37a: Push((int) 0)
0x37b: @ KillTimer(Stack[-1])
0x37c: Pop(1)
0x37d: Push((float)0.5)
0x37e: @ Sleep(Stack[-1], Stack[-9])
0x37f: Pop(1)
0x380: Pop(0); Push((bool) Stack[-8] == 0)
0x381: IF (Stack[-1] == 0) GOTO 0x386; Pop(1)

0x382: Push( Stack[0 + Tasks[-1].StackPointer] )
0x383: IF (Stack[-1] == 0) GOTO 0x386; Pop(1)

0x384: Stack[-6] = 0
0x385: GOTO 0x392

0x386: Push((int) 0)
0x387: Push((float)0.3)
0x388: @ SetTimer(Stack[-2], Stack[-1])
0x389: Pop(2)
0x38a: Stack[-1] = 0
0x38b: GOTO 0x390

0x38c: Push((int) 0)
0x38d: @ KillTimer(Stack[-1])
0x38e: Pop(1)
0x38f: GOTO 0x392

0x390: Stack[-6] = 0
0x391: GOTO 0x332

0x392: Stack[-22] = !Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x393: Return(); Pop(16)

0x394: PushEmpty()
0x395: Push((int) 0)
0x396: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x397: IF (Stack[-1] == 0) GOTO 0x399; Pop(1)

0x398: Return(); Pop(0)

0x399: PushEmpty(bool, object)
0x39a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x39b: Call2 0x3ba

0x39c: Pop(1)
0x39d: Pop(1); Push((bool) Stack[-1] == 0)
0x39e: IF (Stack[-1] == 0) GOTO 0x3a0; Pop(1)

0x39f: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x3a0: Push((int) 0)
0x3a1: @ KillTimer(Stack[-1])
0x3a2: Pop(1)
0x3a3: @ Stop()
0x3a4: Pop(0)
0x3a5: Return(); Pop(0)

0x3a6: PushEmpty()
0x3a7: @ RequestClearPath(Stack[-1])
0x3a8: Pop(0)
0x3a9: Return(); Pop(0)

0x3aa: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x3ab: Push((int) 0)
0x3ac: @ KillTimer(Stack[-1])
0x3ad: Pop(1)
0x3ae: @ Stop()
0x3af: Pop(0)
0x3b0: Return(); Pop(0)

0x3b1: PushEmpty()
0x3b2: PushEmpty()
0x3b3: Call2 0x304

0x3b4: Pop(0)
0x3b5: PushEmpty(object)
0x3b6: Stack[-1] = Stack[-2]
0x3b7: Call2 0x62c

0x3b8: Pop(1)
0x3b9: Return(); Pop(0)

0x3ba: PushEmpty()
0x3bb: PushEmpty(bool, object)
0x3bc: Stack[-1] = Stack[-3]
0x3bd: Call2 0x4e1

0x3be: Stack[-4] = Stack[-2]
0x3bf: Pop(2)
0x3c0: Return(); Pop(0)

0x3c1: Stack[-1] = "walk"
0x3c2: Return(); Pop(0)

0x3c3: Stack[-1] = "run"
0x3c4: Return(); Pop(0)

0x3c5: PushEmpty()
0x3c6: PushEmpty(object)
0x3c7: Stack[-1] = Stack[-2]
0x3c8: Call2 0x3ce

0x3c9: Pop(1)
0x3ca: @ Hold()
0x3cb: Pop(0)
0x3cc: GOTO 0x3ca

0x3cd: Return(); Pop(0)

0x3ce: PushEmpty(cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector, cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector)
0x3cf: Pop(0); Push((bool) Stack[-21] == 0)
0x3d0: IF (Stack[-1] == 0) GOTO 0x3d6; Pop(1)

0x3d1: PushEmpty(string)
0x3d2: Stack[-1] = "fdie"
0x3d3: Call2 0x429

0x3d4: Pop(1)
0x3d5: GOTO 0x428

0x3d6: @@ GetPosition(Stack[-10])
0x3d7: Pop(0)
0x3d8: @ GetPosition(Stack[-9])
0x3d9: Pop(0)
0x3da: @ GetDirection(Stack[-8])
0x3db: Pop(0)
0x3dc: Stack[-7] = Stack[-9] - Stack[-10]; Pop(0);
0x3dd: Push(CvectorIndex(Stack[-7], 0))
0x3de: Push(CvectorIndex(Stack[-9], 0))
0x3df: Pop(2); Push(Stack[-2] * Stack[-1]);
0x3e0: Push(CvectorIndex(Stack[-8], 2))
0x3e1: Push(CvectorIndex(Stack[-10], 2))
0x3e2: Pop(2); Push(Stack[-2] * Stack[-1]);
0x3e3: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3e4: Push((int) 0)
0x3e5: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x3e6: IF (Stack[-1] == 0) GOTO 0x3e9; Pop(1)

0x3e7: Stack[-6] = "fdie"
0x3e8: GOTO 0x3ea

0x3e9: Stack[-6] = "bdie"
0x3ea: @ RemoveRTEnvelope()
0x3eb: Pop(0)
0x3ec: @ SetDeathState()
0x3ed: Pop(0)
0x3ee: @ Stop()
0x3ef: Pop(0)
0x3f0: @ StopAsync()
0x3f1: Pop(0)
0x3f2: Stack[-5] = Stack[-21]
0x3f3: Push("GetScriptProperty")
0x3f4: Push((int) 2)
0x3f5: Pop(2); Push(IsFuncExist(Stack[-23], Stack[-2], Stack[-1]))
0x3f6: IF (Stack[-1] == 0) GOTO 0x402; Pop(1)

0x3f7: Push("Owner")
0x3f8: @@ HasScriptProperty(Stack[-5], Stack[-1])
0x3f9: Pop(1)
0x3fa: Push(Stack[-4])
0x3fb: IF (Stack[-1] == 0) GOTO 0x402; Pop(1)

0x3fc: Push("Owner")
0x3fd: @@ GetScriptProperty(Stack[-6], Stack[-1])
0x3fe: Pop(1)
0x3ff: Pop(0); Push((bool) Stack[-5] == 0)
0x400: IF (Stack[-1] == 0) GOTO 0x402; Pop(1)

0x401: Stack[-5] = Stack[-21]
0x402: Push("@GetEyesHeight")
0x403: Push((int) 1)
0x404: Pop(2); Push(IsFuncExist(Stack[-7], Stack[-2], Stack[-1]))
0x405: IF (Stack[-1] == 0) GOTO 0x411; Pop(1)

0x406: @@ GetEyesHeight(Stack[-2])
0x407: Pop(0)
0x408: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x409: Push(CvectorIndex(Stack[-1], 1))
0x40a: Stack[-1] = Stack[-3]
0x40b: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x40c: Push("head")
0x40d: @ LookAsync(Stack[-22], Stack[-1], Stack[-2])
0x40e: Pop(1)
0x40f: Stack[-3] = (bool) 1
0x410: GOTO 0x412

0x411: Stack[-3] = (bool) 0
0x412: PushEmpty(string)
0x413: Stack[-1] = Stack[-7]
0x414: Call2 0x58d

0x415: Pop(1)
0x416: Push("all")
0x417: @ PlayAnimation(Stack[-1], Stack[-7])
0x418: Pop(1)
0x419: @ WaitForAnimEnd()
0x41a: Pop(0)
0x41b: Push(Stack[-3])
0x41c: IF (Stack[-1] == 0) GOTO 0x422; Pop(1)

0x41d: @ StopAsync()
0x41e: Pop(0)
0x41f: Push("head")
0x420: @ UnlookAsync(Stack[-1])
0x421: Pop(1)
0x422: Push("all")
0x423: @ LockAnimationEnd(Stack[-1], Stack[-7])
0x424: Pop(1)
0x425: @ RemoveEnvelope()
0x426: Pop(0)
0x427: Stack[-5] = 0
0x428: Return(); Pop(20)

0x429: PushEmpty()
0x42a: @ RemoveRTEnvelope()
0x42b: Pop(0)
0x42c: @ SetDeathState()
0x42d: Pop(0)
0x42e: @ Stop()
0x42f: Pop(0)
0x430: @ StopAsync()
0x431: Pop(0)
0x432: @ StopSecondaryAnimation()
0x433: Pop(0)
0x434: PushEmpty(string)
0x435: Stack[-1] = Stack[-2]
0x436: Call2 0x58d

0x437: Pop(1)
0x438: Push("all")
0x439: @ PlayAnimation(Stack[-1], Stack[-2])
0x43a: Pop(1)
0x43b: @ WaitForAnimEnd()
0x43c: Pop(0)
0x43d: Push("all")
0x43e: @ LockAnimationEnd(Stack[-1], Stack[-2])
0x43f: Pop(1)
0x440: @ RemoveEnvelope()
0x441: Pop(0)
0x442: Return(); Pop(0)

0x443: PushEmpty()
0x444: Return(); Pop(0)

0x445: PushEmpty()
0x446: Return(); Pop(0)

0x447: PushEmpty()
0x448: Return(); Pop(0)

0x449: PushEmpty()
0x44a: Push((int) 2)
0x44b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x44c: IF (Stack[-1] == 0) GOTO 0x450; Pop(1)

0x44d: Stack[-2] = "fire"
0x44e: Return(); Pop(0)

0x44f: GOTO 0x455

0x450: Push((int) 1)
0x451: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x452: IF (Stack[-1] == 0) GOTO 0x455; Pop(1)

0x453: Stack[-2] = "bullet"
0x454: Return(); Pop(0)

0x455: Stack[-2] = "phys"
0x456: Return(); Pop(0)

0x457: PushEmpty(cvector, cvector, cvector, cvector)
0x458: @ GetPosition(Stack[-2])
0x459: Pop(0)
0x45a: @@ GetPosition(Stack[-1])
0x45b: Pop(0)
0x45c: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x45d: Return(); Pop(4)

0x45e: PushEmpty(bool, bool)
0x45f: @ IsPlayerActor(Stack[-3], Stack[-1])
0x460: Pop(0)
0x461: Stack[-4] = Stack[-1]
0x462: Return(); Pop(2)

0x463: PushEmpty(bool, bool)
0x464: Push("HasProperty")
0x465: Push((int) 2)
0x466: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x467: Pop(1); Push((bool) Stack[-1] == 0)
0x468: IF (Stack[-1] == 0) GOTO 0x46b; Pop(1)

0x469: Stack[-5] = (bool) 0
0x46a: Return(); Pop(2)

0x46b: @@ HasProperty(Stack[-3], Stack[-1])
0x46c: Pop(0)
0x46d: Stack[-5] = Stack[-1]
0x46e: Return(); Pop(2)

0x46f: PushEmpty(int, string, int, float, float, float, int, string, int, float, float, float)
0x470: PushEmpty(bool, object, string)
0x471: Stack[-2] = Stack[-18]
0x472: Stack[-1] = "health"
0x473: Call2 0x463

0x474: Pop(2)
0x475: Pop(1); Push((bool) Stack[-1] == 0)
0x476: IF (Stack[-1] == 0) GOTO 0x479; Pop(1)

0x477: Stack[-16] = (float) 0.0
0x478: Return(); Pop(12)

0x479: PushEmpty(bool, object, string)
0x47a: Stack[-2] = Stack[-18]
0x47b: Stack[-1] = "armor"
0x47c: Call2 0x463

0x47d: Pop(2)
0x47e: Pop(1); Push((bool) Stack[-1] == 0)
0x47f: IF (Stack[-1] == 0) GOTO 0x482; Pop(1)

0x480: Stack[-6] = (int) 0
0x481: GOTO 0x485

0x482: Push("armor")
0x483: @@ GetProperty(Stack[-1], Stack[-7])
0x484: Pop(1)
0x485: Push("armor_")
0x486: PushEmpty(string, int)
0x487: Stack[-1] = Stack[-16]
0x488: Call2 0x449

0x489: Pop(1)
0x48a: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x48b: PushEmpty(bool, object, string)
0x48c: Stack[-2] = Stack[-18]
0x48d: Stack[-1] = Stack[-8]
0x48e: Call2 0x463

0x48f: Pop(2)
0x490: Pop(1); Push((bool) Stack[-1] == 0)
0x491: IF (Stack[-1] == 0) GOTO 0x494; Pop(1)

0x492: Stack[-4] = (int) 0
0x493: GOTO 0x496

0x494: @@ GetProperty(Stack[-5], Stack[-4])
0x495: Pop(0)
0x496: PushEmpty(float, float, float)
0x497: Pop(0); Push(Stack[-9] + Stack[-7]);
0x498: Push((float)100.0)
0x499: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0x49a: Stack[-1] = (int) 1
0x49b: Call2 0x5c6

0x49c: Stack[-6] = Stack[-3]
0x49d: Pop(3)
0x49e: Push("health")
0x49f: @@ GetProperty(Stack[-1], Stack[-3])
0x4a0: Pop(1)
0x4a1: Push((int) 1)
0x4a2: Pop(1); Push(Stack[-1] - Stack[-4]);
0x4a3: Stack[-2] = Stack[-15] * Stack[-1]; Pop(1);
0x4a4: Push("health")
0x4a5: PushEmpty(float, float, float, float)
0x4a6: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0x4a7: Stack[-2] = (int) 0
0x4a8: Stack[-1] = (int) 1
0x4a9: Call2 0x5cd

0x4aa: Pop(3)
0x4ab: @@ SetProperty(Stack[-2], Stack[-1])
0x4ac: Pop(2)
0x4ad: PushEmpty(bool, object)
0x4ae: Stack[-1] = Stack[-17]
0x4af: Call2 0x45e

0x4b0: Pop(1)
0x4b1: IF (Stack[-1] == 0) GOTO 0x4b6; Pop(1)

0x4b2: PushEmpty(float)
0x4b3: Stack[-1] = -Stack[-2]; Pop(0);
0x4b4: Call2 0x5d8

0x4b5: Pop(1)
0x4b6: Stack[-16] = Stack[-1]
0x4b7: Return(); Pop(12)

0x4b8: PushEmpty(bool, bool)
0x4b9: @@ IsDead(Stack[-1])
0x4ba: Pop(0)
0x4bb: Stack[-4] = Stack[-1]
0x4bc: Return(); Pop(2)

0x4bd: PushEmpty(object, object, object, object)
0x4be: Pop(0); Push((bool) Stack[-5] == 0)
0x4bf: IF (Stack[-1] == 0) GOTO 0x4c2; Pop(1)

0x4c0: Stack[-6] = (bool) 0
0x4c1: Return(); Pop(4)

0x4c2: PushEmpty(bool)
0x4c3: Stack[-1] = (bool) 0
0x4c4: Push("IsDead")
0x4c5: Push((int) 1)
0x4c6: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x4c7: IF (Stack[-1] == 0) GOTO 0x4ce; Pop(1)

0x4c8: PushEmpty(bool, object)
0x4c9: Stack[-1] = Stack[-8]
0x4ca: Call2 0x4b8

0x4cb: Pop(1)
0x4cc: IF (Stack[-1] == 0) GOTO 0x4ce; Pop(1)

0x4cd: Stack[-1] = (bool) 1
0x4ce: IF (Stack[-1] == 0) GOTO 0x4d1; Pop(1)

0x4cf: Stack[-6] = (bool) 0
0x4d0: Return(); Pop(4)

0x4d1: @ GetScene(Stack[-2])
0x4d2: Pop(0)
0x4d3: Pop(0); Push((bool) Stack[-2] == 0)
0x4d4: IF (Stack[-1] == 0) GOTO 0x4d7; Pop(1)

0x4d5: Stack[-6] = (bool) 0
0x4d6: Return(); Pop(4)

0x4d7: @@ GetScene(Stack[-1])
0x4d8: Pop(0)
0x4d9: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x4da: IF (Stack[-1] == 0) GOTO 0x4dd; Pop(1)

0x4db: Stack[-6] = (bool) 0
0x4dc: Return(); Pop(4)

0x4dd: Stack[-6] = (bool) 1
0x4de: Return(); Pop(4)

0x4df: Stack[-1] = 0
0x4e0: Stack[-2] = 0
0x4e1: PushEmpty(int, int)
0x4e2: PushEmpty(bool, object)
0x4e3: Stack[-1] = Stack[-5]
0x4e4: Call2 0x4bd

0x4e5: Pop(1)
0x4e6: Pop(1); Push((bool) Stack[-1] == 0)
0x4e7: IF (Stack[-1] == 0) GOTO 0x4ea; Pop(1)

0x4e8: Stack[-4] = (bool) 0
0x4e9: Return(); Pop(2)

0x4ea: PushEmpty(bool, object, string)
0x4eb: Stack[-2] = Stack[-6]
0x4ec: Stack[-1] = "noaccess"
0x4ed: Call2 0x463

0x4ee: Pop(2)
0x4ef: Pop(1); Push((bool) Stack[-1] == 0)
0x4f0: IF (Stack[-1] == 0) GOTO 0x4f3; Pop(1)

0x4f1: Stack[-4] = (bool) 1
0x4f2: Return(); Pop(2)

0x4f3: Push("noaccess")
0x4f4: @@ GetProperty(Stack[-1], Stack[-2])
0x4f5: Pop(1)
0x4f6: Push((int) 0)
0x4f7: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x4f8: Return(); Pop(2)

0x4f9: PushEmpty(bool, int, cvector, cvector, cvector, cvector, string, bool, int, cvector, cvector, cvector, cvector, string)
0x4fa: Pop(0); Push((bool) Stack[-15] == 0)
0x4fb: IF (Stack[-1] == 0) GOTO 0x4fd; Pop(1)

0x4fc: Return(); Pop(14)

0x4fd: @ IsDead(Stack[-7])
0x4fe: Pop(0)
0x4ff: Push(Stack[-7])
0x500: IF (Stack[-1] == 0) GOTO 0x502; Pop(1)

0x501: Return(); Pop(14)

0x502: @ GetSecondaryAnimationType(Stack[-6])
0x503: Pop(0)
0x504: Push((int) 0)
0x505: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x506: IF (Stack[-1] == 0) GOTO 0x508; Pop(1)

0x507: Return(); Pop(14)

0x508: @@ GetPosition(Stack[-5])
0x509: Pop(0)
0x50a: @ GetPosition(Stack[-4])
0x50b: Pop(0)
0x50c: @ GetDirection(Stack[-3])
0x50d: Pop(0)
0x50e: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0x50f: Push(CvectorIndex(Stack[-2], 0))
0x510: Push(CvectorIndex(Stack[-4], 0))
0x511: Pop(2); Push(Stack[-2] * Stack[-1]);
0x512: Push(CvectorIndex(Stack[-3], 2))
0x513: Push(CvectorIndex(Stack[-5], 2))
0x514: Pop(2); Push(Stack[-2] * Stack[-1]);
0x515: Pop(2); Push(Stack[-2] + Stack[-1]);
0x516: Push((int) 0)
0x517: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x518: IF (Stack[-1] == 0) GOTO 0x51b; Pop(1)

0x519: Stack[-1] = "fhit"
0x51a: GOTO 0x51c

0x51b: Stack[-1] = "bhit"
0x51c: Push("hit_react")
0x51d: Push("1")
0x51e: Pop(1); Push(Stack[-3] + Stack[-1]);
0x51f: Push("2")
0x520: Pop(1); Push(Stack[-4] + Stack[-1]);
0x521: Push((int) -10)
0x522: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x523: Pop(4)
0x524: Return(); Pop(14)

0x525: PushEmpty(cvector, object, int, bool, cvector, cvector, int, int, cvector, cvector, object, int, bool, cvector, cvector, int, int, cvector)
0x526: PushEmpty(bool)
0x527: Stack[-1] = (bool) 0
0x528: PushEmpty(bool)
0x529: Stack[-1] = (bool) 0
0x52a: Push(Stack[-23])
0x52b: IF (Stack[-1] == 0) GOTO 0x530; Pop(1)

0x52c: Push((int) 4)
0x52d: Pop(1); Push((bool) Stack[-23] != Stack[-1])
0x52e: IF (Stack[-1] == 0) GOTO 0x530; Pop(1)

0x52f: Stack[-1] = (bool) 1
0x530: IF (Stack[-1] == 0) GOTO 0x535; Pop(1)

0x531: Push((int) 5)
0x532: Pop(1); Push((bool) Stack[-22] != Stack[-1])
0x533: IF (Stack[-1] == 0) GOTO 0x535; Pop(1)

0x534: Stack[-1] = (bool) 1
0x535: IF (Stack[-1] == 0) GOTO 0x564; Pop(1)

0x536: PushEmpty(cvector, cvector)
0x537: PushEmpty(cvector, object)
0x538: Stack[-1] = Stack[-25]
0x539: Call2 0x457

0x53a: Stack[-3] = Stack[-2]
0x53b: Pop(2)
0x53c: Call2 0x5bc

0x53d: Stack[-11] = Stack[-2]
0x53e: Pop(2)
0x53f: @ CreateVectorVector(Stack[-8])
0x540: Pop(0)
0x541: Stack[-7] = (int) 1
0x542: Push("hit")
0x543: Pop(1); Push(Stack[-1] + Stack[-8]);
0x544: @ GetGeometryLocator(Stack[-1], Stack[-7], Stack[-6], Stack[-5])
0x545: Pop(1)
0x546: Pop(0); Push((bool) Stack[-6] == 0)
0x547: IF (Stack[-1] == 0) GOTO 0x549; Pop(1)

0x548: GOTO 0x552

0x549: Pop(0); Push(Stack[-4] | Stack[-9]);
0x54a: Push((float)0.70711)
0x54b: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x54c: IF (Stack[-1] == 0) GOTO 0x54f; Pop(1)

0x54d: @@ add(Stack[-5])
0x54e: Pop(0)
0x54f: Push((int) 1)
0x550: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x551: GOTO 0x542

0x552: @@ size(Stack[-3])
0x553: Pop(0)
0x554: Push(Stack[-3])
0x555: IF (Stack[-1] == 0) GOTO 0x563; Pop(1)

0x556: @ irand(Stack[-2], Stack[-3])
0x557: Pop(0)
0x558: @@ get(Stack[-1], Stack[-2])
0x559: Pop(0)
0x55a: PushEmpty(object, int, float, cvector, cvector)
0x55b: Stack[-5] = Stack[-26]
0x55c: Stack[-4] = Stack[-25]
0x55d: Stack[-3] = Stack[-24]
0x55e: Stack[-2] = Stack[-6]
0x55f: Stack[-1] = -Stack[-14]; Pop(0);
0x560: Call2 0x569

0x561: Pop(5)
0x562: Return(); Pop(18)

0x563: Stack[-8] = 0
0x564: PushEmpty(object)
0x565: Stack[-1] = Stack[-22]
0x566: Call2 0x4f9

0x567: Pop(1)
0x568: Return(); Pop(18)

0x569: PushEmpty(object, object, object, object)
0x56a: @ GetScene(Stack[-2])
0x56b: Pop(0)
0x56c: Push("scripted")
0x56d: Push("blood_dir.xml")
0x56e: @ AddActorByType(Stack[-3], Stack[-2], Stack[-4], Stack[-8], Stack[-7], Stack[-1])
0x56f: Pop(2)
0x570: PushEmpty(object)
0x571: Stack[-1] = Stack[-10]
0x572: Call2 0x4f9

0x573: Pop(1)
0x574: Return(); Pop(4)

0x575: Stack[-1] = 0
0x576: Stack[-2] = 0
0x577: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x578: @@ GetPosition(Stack[-3])
0x579: Pop(0)
0x57a: @ GetPosition(Stack[-2])
0x57b: Pop(0)
0x57c: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0x57d: Push(CvectorIndex(Stack[-1], 0))
0x57e: Push(CvectorIndex(Stack[-2], 2))
0x57f: @ RotateAsync(Stack[-2], Stack[-1])
0x580: Pop(2)
0x581: Return(); Pop(6)

0x582: PushEmpty(float, cvector, float, cvector)
0x583: @@ GetEyesHeight(Stack[-2])
0x584: Pop(0)
0x585: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x586: Push(CvectorIndex(Stack[-1], 1))
0x587: Stack[-1] = Stack[-3]
0x588: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x589: Push("head")
0x58a: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x58b: Pop(1)
0x58c: Return(); Pop(4)

0x58d: PushEmpty(bool, int, bool, int, bool, float, cvector, cvector, bool, int, bool, int, bool, float, cvector, cvector)
0x58e: @ IsExisting3DSound(Stack[-8], Stack[-17])
0x58f: Pop(0)
0x590: Pop(0); Push((bool) Stack[-8] == 0)
0x591: IF (Stack[-1] == 0) GOTO 0x5a6; Pop(1)

0x592: Stack[-7] = (int) 0
0x593: Push((int) 1)
0x594: Pop(1); Push(Stack[-8] + Stack[-1]);
0x595: Pop(1); Push(Stack[-18] + Stack[-1]);
0x596: @ IsExisting3DSound(Stack[-7], Stack[-1])
0x597: Pop(1)
0x598: Pop(0); Push((bool) Stack[-6] == 0)
0x599: IF (Stack[-1] == 0) GOTO 0x59b; Pop(1)

0x59a: GOTO 0x59e

0x59b: Push((int) 1)
0x59c: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x59d: GOTO 0x593

0x59e: Pop(0); Push((bool) Stack[-7] == 0)
0x59f: IF (Stack[-1] == 0) GOTO 0x5a1; Pop(1)

0x5a0: Return(); Pop(16)

0x5a1: @ irand(Stack[-5], Stack[-7])
0x5a2: Pop(0)
0x5a3: Push((int) 1)
0x5a4: Pop(1); Push(Stack[-6] + Stack[-1]);
0x5a5: Stack[-18] = Stack[-18] + Stack[-1]; Pop(1);
0x5a6: @ Is3DSoundLoaded(Stack[-4], Stack[-17])
0x5a7: Pop(0)
0x5a8: Push(Stack[-4])
0x5a9: IF (Stack[-1] == 0) GOTO 0x5b5; Pop(1)

0x5aa: @ GetEyesHeight(Stack[-3])
0x5ab: Pop(0)
0x5ac: @ GetDirection(Stack[-2])
0x5ad: Pop(0)
0x5ae: Push((int) 50)
0x5af: Stack[-2] = Stack[-3] * Stack[-1]; Pop(1);
0x5b0: Push(CvectorIndex(Stack[-1], 1))
0x5b1: Stack[-1] = Stack[-1] + Stack[-4]; Pop(0);
0x5b2: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x5b3: @ PlayGlobalSound(Stack[-17], Stack[-1])
0x5b4: Pop(0)
0x5b5: Return(); Pop(16)

0x5b6: PushEmpty(object, object)
0x5b7: @ self(Stack[-1])
0x5b8: Pop(0)
0x5b9: Stack[-3] = Stack[-1]
0x5ba: Return(); Pop(2)

0x5bb: Stack[-1] = 0
0x5bc: PushEmpty(float, float)
0x5bd: Pop(0); Push(Stack[-3] | Stack[-3]);
0x5be: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x5bf: Push((float)0.0)
0x5c0: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x5c1: IF (Stack[-1] == 0) GOTO 0x5c4; Pop(1)

0x5c2: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x5c3: Return(); Pop(2)

0x5c4: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x5c5: Return(); Pop(2)

0x5c6: PushEmpty()
0x5c7: Pop(0); Push((bool) Stack[-2] < Stack[-1])
0x5c8: IF (Stack[-1] == 0) GOTO 0x5cb; Pop(1)

0x5c9: Stack[-3] = Stack[-2]
0x5ca: GOTO 0x5cc

0x5cb: Stack[-3] = Stack[-1]
0x5cc: Return(); Pop(0)

0x5cd: PushEmpty()
0x5ce: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x5cf: IF (Stack[-1] == 0) GOTO 0x5d2; Pop(1)

0x5d0: Stack[-4] = Stack[-2]
0x5d1: Return(); Pop(0)

0x5d2: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x5d3: IF (Stack[-1] == 0) GOTO 0x5d6; Pop(1)

0x5d4: Stack[-4] = Stack[-1]
0x5d5: Return(); Pop(0)

0x5d6: Stack[-4] = Stack[-3]
0x5d7: Return(); Pop(0)

0x5d8: PushEmpty(object, object)
0x5d9: @ CreateFloatVector(Stack[-1])
0x5da: Pop(0)
0x5db: @@ add(Stack[-3])
0x5dc: Pop(0)
0x5dd: Push((int) 0)
0x5de: Pop(1); Push((bool) Stack[-4] < Stack[-1])
0x5df: IF (Stack[-1] == 0) GOTO 0x5e4; Pop(1)

0x5e0: Push((float)0.7)
0x5e1: Push((int) 500)
0x5e2: @ RumblePlay(Stack[-2], Stack[-1])
0x5e3: Pop(2)
0x5e4: Push((int) 15)
0x5e5: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x5e6: Pop(1)
0x5e7: Return(); Pop(2)

0x5e8: Stack[-1] = 0
0x5e9: PushEmpty(bool, bool)
0x5ea: @ IsPlayerActor(Stack[-3], Stack[-1])
0x5eb: Pop(0)
0x5ec: Push(Stack[-1])
0x5ed: IF (Stack[-1] == 0) GOTO 0x5f1; Pop(1)

0x5ee: Push("attack")
0x5ef: @ PlayGlobalMusic(Stack[-1])
0x5f0: Pop(1)
0x5f1: Return(); Pop(2)

0x5f2: PushEmpty(object, object)
0x5f3: @ GetScene(Stack[-1])
0x5f4: Pop(0)
0x5f5: Push("battle")
0x5f6: PushEmpty(object)
0x5f7: Call2 0x5b6

0x5f8: Pop(0)
0x5f9: @ BroadcastMessage(Stack[-2], Stack[-1], Stack[-3])
0x5fa: Pop(2)
0x5fb: Return(); Pop(2)

0x5fc: Stack[-1] = 0
0x5fd: PushEmpty(object)
0x5fe: Call2 0x5b6

0x5ff: Pop(0)
0x600: @ RemoveActor(Stack[-1])
0x601: Pop(1)
0x602: @ Hold()
0x603: Pop(0)
0x604: Return(); Pop(0)

0x605: PushEmpty()
0x606: PushEmpty(object)
0x607: Stack[-1] = Stack[-2]
0x608: Push(-1, 0); TaskCall(3)
0x609: Call2 0x3c5

0x60a: Pop(-1, 0); TaskReturn
0x60b: Pop(1)
0x60c: Return(); Pop(0)

0x60d: PushEmpty()
0x60e: PushEmpty(object, int, float)
0x60f: Stack[-3] = Stack[-7]
0x610: Stack[-2] = Stack[-6]
0x611: Stack[-1] = Stack[-5]
0x612: Call2 0x525

0x613: Pop(3)
0x614: Return(); Pop(0)

0x615: PushEmpty()
0x616: PushEmpty(object, int, float, cvector, cvector)
0x617: Stack[-5] = Stack[-11]
0x618: Stack[-4] = Stack[-10]
0x619: Stack[-3] = Stack[-9]
0x61a: Stack[-2] = Stack[-7]
0x61b: Stack[-1] = Stack[-6]
0x61c: Call2 0x569

0x61d: Pop(5)
0x61e: Return(); Pop(0)

0x61f: PushEmpty(float, float)
0x620: Push("health")
0x621: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x622: IF (Stack[-1] == 0) GOTO 0x62b; Pop(1)

0x623: Push("health")
0x624: @ GetProperty(Stack[-1], Stack[-2])
0x625: Pop(1)
0x626: Push((int) 0)
0x627: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x628: IF (Stack[-1] == 0) GOTO 0x62b; Pop(1)

0x629: @ SignalDeath(Stack[-4])
0x62a: Pop(0)
0x62b: Return(); Pop(2)

0x62c: PushEmpty()
0x62d: PushEmpty(object)
0x62e: Stack[-1] = Stack[-2]
0x62f: Call2 0x605

0x630: Pop(1)
0x631: Return(); Pop(0)

