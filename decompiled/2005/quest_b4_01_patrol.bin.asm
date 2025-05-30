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
	RemoveActor (1 args)
	FindActor (2 args)
	Sleep (1 args)
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
	SendWorldWndMessage (2 args)
	BroadcastMessage (3 args)
	GetProperty (2 args)
	SignalDeath (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_5 Op = 0x3 Vars = ()
		EVENT_26 Op = 0x9 Vars = (string)
	GTASK_1 Vars = (object, int, int, bool, float, int) Params = 0
	GTASK_2 Vars = (bool, object, bool) Params = 6
		EVENT_7 Op = 0x2f3 Vars = (int)
		EVENT_1 Op = 0x30e Vars = (object)
		EVENT_2 Op = 0x31d Vars = (object)
		EVENT_10 Op = 0x3a3 Vars = (object)
		EVENT_41 Op = 0x3ae Vars = (object)
	GTASK_3  Params = 1
		EVENT_22 Op = 0x440 Vars = (object, int, float, float)
		EVENT_16 Op = 0x442 Vars = (object, string)
		EVENT_41 Op = 0x444 Vars = (object)

Events:
EVENT_6 Op = 0x5f3 Vars = ()
EVENT_22 Op = 0x603 Vars = (object, int, float, float)
EVENT_43 Op = 0x60b Vars = (object, int, float, float, cvector, cvector)
EVENT_16 Op = 0x615 Vars = (object, string)
EVENT_41 Op = 0x622 Vars = (object)

0x0: @ Hold()
0x1: Pop(0)
0x2: Return(); Pop(0)

0x3: PushEmpty()
0x4: Push(-0, 6); TaskCall(1)
0x5: Call2 0x13

0x6: Pop(-0, 6); TaskReturn
0x7: Pop(0)
0x8: Return(); Pop(0)

0x9: PushEmpty()
0xa: Push("cleanup")
0xb: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc: IF (Stack[-1] == 0) GOTO 0x12; Pop(1)

0xd: PushEmpty(object)
0xe: Call2 0x5b3

0xf: Pop(0)
0x10: @ RemoveActor(Stack[-1])
0x11: Pop(1)
0x12: Return(); Pop(0)

0x13: PushEmpty(object, object)
0x14: Push("player")
0x15: @ FindActor(Stack[-2], Stack[-1])
0x16: Pop(1)
0x17: Pop(0); Push((bool) Stack[-1] == 0)
0x18: IF (Stack[-1] == 0) GOTO 0x1a; Pop(1)

0x19: Return(); Pop(2)

0x1a: PushEmpty(object, bool, float)
0x1b: Stack[-3] = Stack[-4]
0x1c: Stack[-2] = (bool) 1
0x1d: Stack[-1] = (float) 180.0
0x1e: Call2 0x2c

0x1f: Pop(3)
0x20: Push((int) 1)
0x21: @ Sleep(Stack[-1])
0x22: Pop(1)
0x23: GOTO 0x1a

0x24: Return(); Pop(2)

0x25: Stack[-1] = 0
0x26: PushEmpty()
0x27: Stack[-3] = (float) 0.02
0x28: Return(); Pop(0)

0x29: PushEmpty()
0x2a: Stack[-3] = (int) 0
0x2b: Return(); Pop(0)

0x2c: PushEmpty(float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float, float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float)
0x2d: PushEmpty()
0x2e: Call2 0x111

0x2f: Pop(0)
0x30: Stack[5 + Tasks[-1].StackPointer] = (int)0
0x31: Push("@GetAttackDistance")
0x32: Push((int) 1)
0x33: Pop(2); Push(IsFuncExist(Stack[-27], Stack[-2], Stack[-1]))
0x34: IF (Stack[-1] == 0) GOTO 0x3a; Pop(1)

0x35: @@ GetAttackDistance(Stack[-11])
0x36: Pop(0)
0x37: Push((int) 50)
0x38: Stack[-12] = Stack[-12] + Stack[-1]; Pop(1);
0x39: GOTO 0x3b

0x3a: Stack[-11] = Stack[-23]
0x3b: Push((int) 150)
0x3c: Pop(1); Push((bool) Stack[-12] >= Stack[-1])
0x3d: IF (Stack[-1] == 0) GOTO 0x3f; Pop(1)

0x3e: Stack[-11] = (int) 150
0x3f: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x40: Stack[0 + Tasks[-1].StackPointer] = Stack[-25]
0x41: @ IsPlayerActor(Stack[-0], Stack[-8])
0x42: Pop(0)
0x43: Push(Stack[-8])
0x44: IF (Stack[-1] == 0) GOTO 0x4d; Pop(1)

0x45: Push("attack")
0x46: @ PlayGlobalMusic(Stack[-1])
0x47: Pop(1)
0x48: PushEmpty(object)
0x49: Call2 0x5b3

0x4a: Pop(0)
0x4b: @ SendPlayerEnemy(Stack[-26], Stack[-1])
0x4c: Pop(1)
0x4d: Push(Stack[-24])
0x4e: IF (Stack[-1] == 0) GOTO 0x51; Pop(1)

0x4f: Stack[-7] = (bool) 0
0x50: GOTO 0x52

0x51: Stack[-7] = (bool) 1
0x52: Push((float)400.0)
0x53: Stack[-7] = Stack[-1] + Stack[-12]; Pop(1);
0x54: PushEmpty(bool)
0x55: Stack[-1] = (bool) 0
0x56: PushEmpty(bool, object)
0x57: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x58: Call2 0x4de

0x59: Pop(1)
0x5a: IF (Stack[-1] == 0) GOTO 0x5e; Pop(1)

0x5b: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x5c: IF (Stack[-1] == 0) GOTO 0x5e; Pop(1)

0x5d: Stack[-1] = (bool) 1
0x5e: IF (Stack[-1] == 0) GOTO 0x100; Pop(1)

0x5f: PushEmpty()
0x60: Call2 0x2ae

0x61: Pop(0)
0x62: @@ GetPFPosition(Stack[-10])
0x63: Pop(0)
0x64: @ GetPFPosition(Stack[-9])
0x65: Pop(0)
0x66: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0x67: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x68: Pop(0); Push(Stack[-6] * Stack[-6]);
0x69: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0x6a: IF (Stack[-1] == 0) GOTO 0x7a; Pop(1)

0x6b: PushEmpty(bool, object, float, float, bool, bool)
0x6c: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0x6d: Stack[-4] = Stack[-17]
0x6e: Stack[-3] = (float) 10000.0
0x6f: Stack[-2] = (bool) 1
0x70: Stack[-1] = (bool) 0
0x71: Push(-6, 3); TaskCall(2)
0x72: Call2 0x2c2

0x73: Pop(-6, 3); TaskReturn
0x74: Pop(5)
0x75: Pop(1); Push((bool) Stack[-1] == 0)
0x76: IF (Stack[-1] == 0) GOTO 0x78; Pop(1)

0x77: GOTO 0x100

0x78: Stack[-7] = (bool) 0
0x79: GOTO 0xff

0x7a: Pop(0); Push(Stack[-23] * Stack[-23]);
0x7b: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0x7c: IF (Stack[-1] == 0) GOTO 0xf7; Pop(1)

0x7d: @@ GetPFPosition(Stack[-3])
0x7e: Pop(0)
0x7f: @ CanReachByPF(Stack[-2], Stack[-3])
0x80: Pop(0)
0x81: Pop(0); Push((bool) Stack[-2] == 0)
0x82: IF (Stack[-1] == 0) GOTO 0x92; Pop(1)

0x83: PushEmpty(bool, object, float, float, bool, bool)
0x84: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0x85: Stack[-4] = Stack[-17]
0x86: Stack[-3] = (float) 10000.0
0x87: Stack[-2] = (bool) 1
0x88: Stack[-1] = (bool) 0
0x89: Push(-6, 3); TaskCall(2)
0x8a: Call2 0x2c2

0x8b: Pop(-6, 3); TaskReturn
0x8c: Pop(5)
0x8d: Pop(1); Push((bool) Stack[-1] == 0)
0x8e: IF (Stack[-1] == 0) GOTO 0x90; Pop(1)

0x8f: GOTO 0x100

0x90: Stack[-7] = (bool) 0
0x91: GOTO 0x54

0x92: Pop(0); Push((bool) Stack[-7] == 0)
0x93: IF (Stack[-1] == 0) GOTO 0xab; Pop(1)

0x94: PushEmpty(object)
0x95: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x96: Call2 0x574

0x97: Pop(1)
0x98: Push("all")
0x99: Push("attack_on")
0x9a: @ PlayAnimation(Stack[-2], Stack[-1])
0x9b: Pop(2)
0x9c: @ WaitForAnimEnd()
0x9d: Pop(0)
0x9e: PushEmpty()
0x9f: Call2 0x2ae

0xa0: Pop(0)
0xa1: @ StopAsync()
0xa2: Pop(0)
0xa3: Stack[-7] = (bool) 1
0xa4: PushEmpty(bool, object)
0xa5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa6: Call2 0x4de

0xa7: Pop(1)
0xa8: Pop(1); Push((bool) Stack[-1] == 0)
0xa9: IF (Stack[-1] == 0) GOTO 0xab; Pop(1)

0xaa: GOTO 0x100

0xab: @ rand(Stack[-1])
0xac: Pop(0)
0xad: PushEmpty(bool)
0xae: Stack[-1] = (bool) 1
0xaf: Push((float)0.25)
0xb0: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0xb1: IF (Stack[-1] == 0) GOTO 0xb7; Pop(1)

0xb2: PushEmpty(bool)
0xb3: Call2 0x283

0xb4: Pop(0)
0xb5: IF (Stack[-1] == 0) GOTO 0xb7; Pop(1)

0xb6: Stack[-1] = (bool) 0
0xb7: IF (Stack[-1] == 0) GOTO 0xc8; Pop(1)

0xb8: @ Face(Stack[-0])
0xb9: Pop(0)
0xba: PushEmpty()
0xbb: Call2 0x2b5

0xbc: Pop(0)
0xbd: Push("all")
0xbe: Push("attack_stay")
0xbf: @ PlayAnimation(Stack[-2], Stack[-1])
0xc0: Pop(2)
0xc1: PushEmpty(bool, float)
0xc2: Stack[-1] = Stack[-25]
0xc3: Call2 0x1ff

0xc4: Pop(2)
0xc5: @ StopAsync()
0xc6: Pop(0)
0xc7: GOTO 0xf6

0xc8: @ Face(Stack[-0])
0xc9: Pop(0)
0xca: Push("all")
0xcb: Push("fjump")
0xcc: @ PlayAnimation(Stack[-2], Stack[-1])
0xcd: Pop(2)
0xce: @ WaitForAnimEnd()
0xcf: Pop(0)
0xd0: PushEmpty()
0xd1: Call2 0x2ae

0xd2: Pop(0)
0xd3: Push(CVector(0.0, 0.0, 0.0))
0xd4: @ SetSpeed(Stack[-1])
0xd5: Pop(1)
0xd6: @ Stop()
0xd7: Pop(0)
0xd8: @ StopAsync()
0xd9: Pop(0)
0xda: PushEmpty(bool)
0xdb: Call2 0x283

0xdc: Pop(0)
0xdd: Pop(1); Push((bool) Stack[-1] == 0)
0xde: IF (Stack[-1] == 0) GOTO 0xf6; Pop(1)

0xdf: PushEmpty(bool, object)
0xe0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe1: Call2 0x4de

0xe2: Pop(1)
0xe3: Pop(1); Push((bool) Stack[-1] == 0)
0xe4: IF (Stack[-1] == 0) GOTO 0xe6; Pop(1)

0xe5: GOTO 0x100

0xe6: @@ GetPFPosition(Stack[-10])
0xe7: Pop(0)
0xe8: @ GetPFPosition(Stack[-9])
0xe9: Pop(0)
0xea: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0xeb: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0xec: Pop(0); Push(Stack[-23] * Stack[-23]);
0xed: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0xee: IF (Stack[-1] == 0) GOTO 0xf6; Pop(1)

0xef: PushEmpty(bool, float)
0xf0: Stack[-1] = Stack[-25]
0xf1: Call2 0x15b

0xf2: Pop(1)
0xf3: Pop(1); Push((bool) Stack[-1] == 0)
0xf4: IF (Stack[-1] == 0) GOTO 0xf6; Pop(1)

0xf5: GOTO 0x100

0xf6: GOTO 0xff

0xf7: PushEmpty(bool, float)
0xf8: Stack[-1] = Stack[-25]
0xf9: Call2 0x15b

0xfa: Pop(1)
0xfb: Pop(1); Push((bool) Stack[-1] == 0)
0xfc: IF (Stack[-1] == 0) GOTO 0xfe; Pop(1)

0xfd: GOTO 0x100

0xfe: Stack[-7] = (bool) 1
0xff: GOTO 0x54

0x100: @ WaitForAnimEnd()
0x101: Pop(0)
0x102: Push( Stack[3 + Tasks[-1].StackPointer] )
0x103: IF (Stack[-1] == 0) GOTO 0x105; Pop(1)

0x104: Return(); Pop(22)

0x105: Push("all")
0x106: Push("attack_off")
0x107: @ PlayAnimation(Stack[-2], Stack[-1])
0x108: Pop(2)
0x109: @ WaitForAnimEnd()
0x10a: Pop(0)
0x10b: Push(Stack[-8])
0x10c: IF (Stack[-1] == 0) GOTO 0x110; Pop(1)

0x10d: Push((float)2.0)
0x10e: @ Sleep(Stack[-1])
0x10f: Pop(1)
0x110: Return(); Pop(22)

0x111: PushEmpty(bool, bool, cvector, bool, bool, cvector)
0x112: Stack[1 + Tasks[-1].StackPointer] = (int)0
0x113: Push("all")
0x114: Push("attack_begin")
0x115: Push((int) 1)
0x116: Pop(1); Push(Stack[1 + StackPtr] + Stack[-1]);
0x117: Pop(2); Push(Stack[-2] + Stack[-1]);
0x118: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0x119: Pop(2)
0x11a: Pop(0); Push((bool) Stack[-3] == 0)
0x11b: IF (Stack[-1] == 0) GOTO 0x11d; Pop(1)

0x11c: GOTO 0x120

0x11d: Push((int) 1)
0x11e: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x11f: GOTO 0x113

0x120: Stack[2 + Tasks[-1].StackPointer] = (int)0
0x121: Push("attack")
0x122: Push((int) 1)
0x123: Pop(1); Push(Stack[2 + StackPtr] + Stack[-1]);
0x124: Pop(2); Push(Stack[-2] + Stack[-1]);
0x125: @ IsExisting3DSound(Stack[-3], Stack[-1])
0x126: Pop(1)
0x127: Pop(0); Push((bool) Stack[-2] == 0)
0x128: IF (Stack[-1] == 0) GOTO 0x12a; Pop(1)

0x129: GOTO 0x12d

0x12a: Push((int) 1)
0x12b: Stack[2 + Tasks[-1].StackPointer] = Stack[2 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x12c: GOTO 0x121

0x12d: Push("all")
0x12e: Push("bjump")
0x12f: @ GetAnimationOffset(Stack[-3], Stack[-2], Stack[-1])
0x130: Pop(2)
0x131: Push(CvectorIndex(Stack[-1], 2))
0x132: Stack[4 + Tasks[-1].StackPointer] = -Stack[-1]; Pop(1);
0x133: Return(); Pop(6)

0x134: PushEmpty(object, float, float, object, float, float)
0x135: Push((float)0.9)
0x136: Pop(1); Push(Stack[-9] * Stack[-1]);
0x137: @ GetVictim(Stack[-1], Stack[-4])
0x138: Pop(1)
0x139: @ ReportAttack(Stack[-0])
0x13a: Pop(0)
0x13b: Pop(0); Push((bool) Stack[-3] == Stack[0 + Tasks[-1].StackPointer])
0x13c: IF (Stack[-1] == 0) GOTO 0x159; Pop(1)

0x13d: PushEmpty(float, object, int)
0x13e: Stack[-2] = Stack[-6]
0x13f: Stack[-1] = Stack[-10]
0x140: Call2 0x26

0x141: Stack[-5] = Stack[-3]
0x142: Pop(3)
0x143: PushEmpty(float, object, float, int)
0x144: Stack[-3] = Stack[-7]
0x145: Stack[-2] = Stack[-6]
0x146: PushEmpty(int, object, int)
0x147: Stack[-2] = Stack[-10]
0x148: Stack[-1] = Stack[-14]
0x149: Call2 0x29

0x14a: Stack[-4] = Stack[-3]
0x14b: Pop(3)
0x14c: Call2 0x46c

0x14d: Stack[-5] = Stack[-4]
0x14e: Pop(4)
0x14f: PushEmpty(int)
0x150: Call2 0x2b3

0x151: Pop(0)
0x152: @ ReportHit(Stack[-0], Stack[-1], Stack[-2], Stack[-3])
0x153: Pop(1)
0x154: PushEmpty(object, float)
0x155: Stack[-2] = Stack[-5]
0x156: Stack[-1] = Stack[-3]
0x157: Call2 0x2ba

0x158: Pop(2)
0x159: Return(); Pop(6)

0x15a: Stack[-3] = 0
0x15b: PushEmpty(int, bool, int, string, int, bool, int, string)
0x15c: PushEmpty()
0x15d: Call2 0x2ae

0x15e: Pop(0)
0x15f: @ irand(Stack[-4], Stack[-1])
0x160: Pop(0)
0x161: Push((int) 1)
0x162: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x163: @ Face(Stack[-0])
0x164: Pop(0)
0x165: Push((bool) 1)
0x166: @ SetAttackState(Stack[-1])
0x167: Pop(1)
0x168: PushEmpty()
0x169: Call2 0x5e8

0x16a: Pop(0)
0x16b: Push("all")
0x16c: Push("attack_begin")
0x16d: Pop(1); Push(Stack[-1] + Stack[-6]);
0x16e: @ PlayAnimation(Stack[-2], Stack[-1])
0x16f: Pop(2)
0x170: @ WaitForAnimEnd()
0x171: Pop(0)
0x172: PushEmpty()
0x173: Call2 0x28e

0x174: Pop(0)
0x175: PushEmpty(bool, object)
0x176: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x177: Call2 0x4de

0x178: Pop(1)
0x179: Pop(1); Push((bool) Stack[-1] == 0)
0x17a: IF (Stack[-1] == 0) GOTO 0x17f; Pop(1)

0x17b: @ StopAsync()
0x17c: Pop(0)
0x17d: Stack[-10] = (bool) 0
0x17e: Return(); Pop(8)

0x17f: PushEmpty(float, int)
0x180: Stack[-2] = Stack[-11]
0x181: Stack[-1] = Stack[-6]
0x182: Call2 0x134

0x183: Pop(2)
0x184: Push("all")
0x185: Push("attack_middle")
0x186: Pop(1); Push(Stack[-1] + Stack[-6]);
0x187: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0x188: Pop(2)
0x189: Push(Stack[-3])
0x18a: IF (Stack[-1] == 0) GOTO 0x1d0; Pop(1)

0x18b: PushEmpty()
0x18c: Call2 0x5e8

0x18d: Pop(0)
0x18e: Push("all")
0x18f: Push("attack_middle")
0x190: Pop(1); Push(Stack[-1] + Stack[-6]);
0x191: @ PlayAnimation(Stack[-2], Stack[-1])
0x192: Pop(2)
0x193: @ WaitForAnimEnd()
0x194: Pop(0)
0x195: PushEmpty()
0x196: Call2 0x2ae

0x197: Pop(0)
0x198: PushEmpty(bool, object)
0x199: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x19a: Call2 0x4de

0x19b: Pop(1)
0x19c: Pop(1); Push((bool) Stack[-1] == 0)
0x19d: IF (Stack[-1] == 0) GOTO 0x1a2; Pop(1)

0x19e: @ StopAsync()
0x19f: Pop(0)
0x1a0: Stack[-10] = (bool) 0
0x1a1: Return(); Pop(8)

0x1a2: PushEmpty(float, int)
0x1a3: Stack[-2] = Stack[-11]
0x1a4: Stack[-1] = Stack[-6]
0x1a5: Call2 0x134

0x1a6: Pop(2)
0x1a7: Stack[-2] = (int) 1
0x1a8: Push("attack_middle")
0x1a9: Pop(1); Push(Stack[-1] + Stack[-5]);
0x1aa: Push("_")
0x1ab: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1ac: Stack[-2] = Stack[-1] + Stack[-3]; Pop(1);
0x1ad: Push("all")
0x1ae: @ HasAnimation(Stack[-4], Stack[-1], Stack[-2])
0x1af: Pop(1)
0x1b0: Pop(0); Push((bool) Stack[-3] == 0)
0x1b1: IF (Stack[-1] == 0) GOTO 0x1b3; Pop(1)

0x1b2: GOTO 0x1d0

0x1b3: PushEmpty()
0x1b4: Call2 0x5e8

0x1b5: Pop(0)
0x1b6: Push("all")
0x1b7: @ PlayAnimation(Stack[-1], Stack[-2])
0x1b8: Pop(1)
0x1b9: @ WaitForAnimEnd()
0x1ba: Pop(0)
0x1bb: PushEmpty()
0x1bc: Call2 0x2ae

0x1bd: Pop(0)
0x1be: PushEmpty(bool, object)
0x1bf: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1c0: Call2 0x4de

0x1c1: Pop(1)
0x1c2: Pop(1); Push((bool) Stack[-1] == 0)
0x1c3: IF (Stack[-1] == 0) GOTO 0x1c8; Pop(1)

0x1c4: @ StopAsync()
0x1c5: Pop(0)
0x1c6: Stack[-10] = (bool) 0
0x1c7: Return(); Pop(8)

0x1c8: PushEmpty(float, int)
0x1c9: Stack[-2] = Stack[-11]
0x1ca: Stack[-1] = Stack[-6]
0x1cb: Call2 0x134

0x1cc: Pop(2)
0x1cd: Push((int) 1)
0x1ce: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x1cf: GOTO 0x1a8

0x1d0: Push((bool) 0)
0x1d1: @ SetAttackState(Stack[-1])
0x1d2: Pop(1)
0x1d3: Push("all")
0x1d4: Push("attack_end")
0x1d5: Pop(1); Push(Stack[-1] + Stack[-6]);
0x1d6: @ PlayAnimation(Stack[-2], Stack[-1])
0x1d7: Pop(2)
0x1d8: PushEmpty(bool)
0x1d9: Call2 0x2bc

0x1da: Pop(0)
0x1db: IF (Stack[-1] == 0) GOTO 0x1e2; Pop(1)

0x1dc: PushEmpty(bool, float)
0x1dd: Stack[-1] = (float) 0.75
0x1de: Call2 0x1e4

0x1df: Pop(2)
0x1e0: @ StopAsync()
0x1e1: Pop(0)
0x1e2: Stack[-10] = (bool) 1
0x1e3: Return(); Pop(8)

0x1e4: PushEmpty(float, bool, float, bool)
0x1e5: @ rand(Stack[-2])
0x1e6: Pop(0)
0x1e7: Pop(0); Push((bool) Stack[-2] < Stack[-5])
0x1e8: IF (Stack[-1] == 0) GOTO 0x1f8; Pop(1)

0x1e9: @ IsAnimationPlaying(Stack[-1])
0x1ea: Pop(0)
0x1eb: Pop(0); Push((bool) Stack[-1] == 0)
0x1ec: IF (Stack[-1] == 0) GOTO 0x1ee; Pop(1)

0x1ed: GOTO 0x1f7

0x1ee: PushEmpty(bool)
0x1ef: Call2 0x246

0x1f0: Pop(0)
0x1f1: IF (Stack[-1] == 0) GOTO 0x1f4; Pop(1)

0x1f2: Stack[-6] = (bool) 1
0x1f3: Return(); Pop(4)

0x1f4: @ sync()
0x1f5: Pop(0)
0x1f6: GOTO 0x1e9

0x1f7: GOTO 0x1fd

0x1f8: @ WaitForAnimEnd()
0x1f9: Pop(0)
0x1fa: PushEmpty()
0x1fb: Call2 0x2ae

0x1fc: Pop(0)
0x1fd: Stack[-6] = (bool) 0
0x1fe: Return(); Pop(4)

0x1ff: PushEmpty(bool, cvector, cvector, cvector, float, bool, cvector, cvector, cvector, float)
0x200: @ IsAnimationPlaying(Stack[-5])
0x201: Pop(0)
0x202: Pop(0); Push((bool) Stack[-5] == 0)
0x203: IF (Stack[-1] == 0) GOTO 0x205; Pop(1)

0x204: GOTO 0x225

0x205: PushEmpty(bool)
0x206: Call2 0x246

0x207: Pop(0)
0x208: IF (Stack[-1] == 0) GOTO 0x20b; Pop(1)

0x209: Stack[-12] = (bool) 1
0x20a: Return(); Pop(10)

0x20b: PushEmpty(bool, object)
0x20c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x20d: Call2 0x4de

0x20e: Pop(1)
0x20f: Pop(1); Push((bool) Stack[-1] == 0)
0x210: IF (Stack[-1] == 0) GOTO 0x213; Pop(1)

0x211: Stack[-12] = (bool) 0
0x212: Return(); Pop(10)

0x213: @@ GetPFPosition(Stack[-4])
0x214: Pop(0)
0x215: @ GetPFPosition(Stack[-3])
0x216: Pop(0)
0x217: Stack[-2] = Stack[-4] - Stack[-3]; Pop(0);
0x218: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x219: Pop(0); Push(Stack[-11] * Stack[-11]);
0x21a: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x21b: IF (Stack[-1] == 0) GOTO 0x222; Pop(1)

0x21c: PushEmpty(bool, float)
0x21d: Stack[-1] = Stack[-13]
0x21e: Call2 0x15b

0x21f: Pop(2)
0x220: Stack[-12] = (bool) 1
0x221: Return(); Pop(10)

0x222: @ sync()
0x223: Pop(0)
0x224: GOTO 0x200

0x225: PushEmpty()
0x226: Call2 0x2ae

0x227: Pop(0)
0x228: Stack[-12] = (bool) 0
0x229: Return(); Pop(10)

0x22a: PushEmpty(cvector, cvector, cvector, float, float, cvector, cvector, cvector, float, float)
0x22b: PushEmpty(bool, object)
0x22c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x22d: Call2 0x4de

0x22e: Pop(1)
0x22f: Pop(1); Push((bool) Stack[-1] == 0)
0x230: IF (Stack[-1] == 0) GOTO 0x233; Pop(1)

0x231: Stack[-11] = (bool) 0
0x232: Return(); Pop(10)

0x233: PushEmpty(bool)
0x234: Call2 0x283

0x235: Pop(0)
0x236: IF (Stack[-1] == 0) GOTO 0x244; Pop(1)

0x237: @@ GetPFPosition(Stack[-5])
0x238: Pop(0)
0x239: @ GetPFPosition(Stack[-4])
0x23a: Pop(0)
0x23b: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x23c: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x23d: @@ GetAttackDistance(Stack[-1])
0x23e: Pop(0)
0x23f: Push((int) 50)
0x240: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x241: Pop(0); Push(Stack[-1] * Stack[-1]);
0x242: Stack[-12] = Stack[-3] <= Stack[-1]; Pop(1);
0x243: Return(); Pop(10)

0x244: Stack[-11] = (bool) 0
0x245: Return(); Pop(10)

0x246: PushEmpty(bool)
0x247: Stack[-1] = (bool) 0
0x248: PushEmpty(bool)
0x249: Call2 0x22a

0x24a: Pop(0)
0x24b: IF (Stack[-1] == 0) GOTO 0x251; Pop(1)

0x24c: PushEmpty(bool)
0x24d: Call2 0x256

0x24e: Pop(0)
0x24f: IF (Stack[-1] == 0) GOTO 0x251; Pop(1)

0x250: Stack[-1] = (bool) 1
0x251: IF (Stack[-1] == 0) GOTO 0x254; Pop(1)

0x252: Stack[-1] = (bool) 1
0x253: Return(); Pop(0)

0x254: Stack[-1] = (bool) 0
0x255: Return(); Pop(0)

0x256: PushEmpty(object, bool, float, cvector, cvector, object, bool, float, cvector, cvector)
0x257: @ GetScene(Stack[-5])
0x258: Pop(0)
0x259: Stack[-4] = (bool) 0
0x25a: PushEmpty(cvector, object)
0x25b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x25c: Call2 0x454

0x25d: Pop(1)
0x25e: Pop(1); Push(( -Stack[-1])
0x25f: @ FindDirLength(Stack[-4], Stack[-1], Stack[-4])
0x260: Pop(1)
0x261: Pop(0); Push((bool) Stack[-3] < Stack[4 + Tasks[-1].StackPointer])
0x262: IF (Stack[-1] == 0) GOTO 0x264; Pop(1)

0x263: GOTO 0x280

0x264: @ Face(Stack[-0])
0x265: Pop(0)
0x266: Push("all")
0x267: Push("bjump")
0x268: @ PlayAnimation(Stack[-2], Stack[-1])
0x269: Pop(2)
0x26a: @@ GetPFPosition(Stack[-2])
0x26b: Pop(0)
0x26c: @ GetPFPosition(Stack[-1])
0x26d: Pop(0)
0x26e: @ WaitForAnimEnd()
0x26f: Pop(0)
0x270: PushEmpty()
0x271: Call2 0x2ae

0x272: Pop(0)
0x273: @ StopAsync()
0x274: Pop(0)
0x275: Push(CVector(0.0, 0.0, 0.0))
0x276: @ SetSpeed(Stack[-1])
0x277: Pop(1)
0x278: Stack[-4] = (bool) 1
0x279: PushEmpty(bool)
0x27a: Call2 0x22a

0x27b: Pop(0)
0x27c: Pop(1); Push((bool) Stack[-1] == 0)
0x27d: IF (Stack[-1] == 0) GOTO 0x27f; Pop(1)

0x27e: GOTO 0x280

0x27f: GOTO 0x25a

0x280: Stack[-11] = Stack[-4]
0x281: Return(); Pop(10)

0x282: Stack[-5] = 0
0x283: PushEmpty(bool, bool)
0x284: Push("IsAttacking")
0x285: Push((int) 1)
0x286: Pop(2); Push(IsFuncExist(Stack[0 + Tasks[-1].StackPointer], Stack[-2], Stack[-1]))
0x287: IF (Stack[-1] == 0) GOTO 0x28c; Pop(1)

0x288: @@ IsAttacking(Stack[-1])
0x289: Pop(0)
0x28a: Stack[-3] = Stack[-1]
0x28b: Return(); Pop(2)

0x28c: Stack[-3] = (bool) 0
0x28d: Return(); Pop(2)

0x28e: PushEmpty(float, int, float, int)
0x28f: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x290: IF (Stack[-1] == 0) GOTO 0x292; Pop(1)

0x291: Return(); Pop(4)

0x292: Push( Stack[5 + Tasks[-1].StackPointer] )
0x293: IF (Stack[-1] == 0) GOTO 0x29a; Pop(1)

0x294: Push((int) -1)
0x295: Stack[5 + Tasks[-1].StackPointer] = Stack[5 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x296: Push((int) 0)
0x297: Pop(1); Push((bool) Stack[5 + Tasks[-1].StackPointer] > Stack[-1])
0x298: IF (Stack[-1] == 0) GOTO 0x29a; Pop(1)

0x299: Return(); Pop(4)

0x29a: @ rand(Stack[-2])
0x29b: Pop(0)
0x29c: PushEmpty(float)
0x29d: Call2 0x2c0

0x29e: Pop(0)
0x29f: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x2a0: IF (Stack[-1] == 0) GOTO 0x2ad; Pop(1)

0x2a1: @ irand(Stack[-1], Stack[-2])
0x2a2: Pop(0)
0x2a3: Push((int) 1)
0x2a4: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x2a5: Push("attack")
0x2a6: Pop(1); Push(Stack[-1] + Stack[-2]);
0x2a7: @ Speak(Stack[-1])
0x2a8: Pop(1)
0x2a9: PushEmpty(int)
0x2aa: Call2 0x2be

0x2ab: Stack[5 + Tasks[-1].StackPointer] = Stack[-1]
0x2ac: Pop(1)
0x2ad: Return(); Pop(4)

0x2ae: PushEmpty(object)
0x2af: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2b0: Call2 0x5df

0x2b1: Pop(1)
0x2b2: Return(); Pop(0)

0x2b3: Stack[-1] = (int) 0
0x2b4: Return(); Pop(0)

0x2b5: PushEmpty(string)
0x2b6: Stack[-1] = "attack_stay"
0x2b7: Call2 0x58a

0x2b8: Pop(1)
0x2b9: Return(); Pop(0)

0x2ba: PushEmpty()
0x2bb: Return(); Pop(0)

0x2bc: Stack[-1] = (bool) 1
0x2bd: Return(); Pop(0)

0x2be: Stack[-1] = (int) 1
0x2bf: Return(); Pop(0)

0x2c0: Stack[-1] = (float) 0.5
0x2c1: Return(); Pop(0)

0x2c2: PushEmpty(bool, bool, bool, bool)
0x2c3: PushEmpty(object)
0x2c4: Stack[-1] = Stack[-10]
0x2c5: Call2 0x5df

0x2c6: Pop(1)
0x2c7: Push((int) 1)
0x2c8: Push((int) 5)
0x2c9: @ SetTimer(Stack[-2], Stack[-1])
0x2ca: Pop(2)
0x2cb: @ CanSee(Stack[-2], Stack[-9])
0x2cc: Pop(0)
0x2cd: Push(Stack[-2])
0x2ce: IF (Stack[-1] == 0) GOTO 0x2d5; Pop(1)

0x2cf: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x2d0: PushEmpty(object)
0x2d1: Stack[-1] = Stack[-10]
0x2d2: Call2 0x57f

0x2d3: Pop(1)
0x2d4: GOTO 0x2d6

0x2d5: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x2d6: PushEmpty(bool, object)
0x2d7: Stack[-1] = Stack[-11]
0x2d8: Call2 0x45b

0x2d9: Pop(1)
0x2da: IF (Stack[-1] == 0) GOTO 0x2e0; Pop(1)

0x2db: PushEmpty(object)
0x2dc: Call2 0x5b3

0x2dd: Pop(0)
0x2de: @ SendPlayerEnemy(Stack[-10], Stack[-1])
0x2df: Pop(1)
0x2e0: PushEmpty(bool, object, float, float, bool, bool)
0x2e1: Stack[-5] = Stack[-15]
0x2e2: Stack[-4] = Stack[-14]
0x2e3: Stack[-3] = Stack[-13]
0x2e4: Stack[-2] = Stack[-12]
0x2e5: Stack[-1] = Stack[-11]
0x2e6: Call2 0x32b

0x2e7: Stack[-7] = Stack[-6]
0x2e8: Pop(6)
0x2e9: Push( Stack[2 + Tasks[-1].StackPointer] )
0x2ea: IF (Stack[-1] == 0) GOTO 0x2ee; Pop(1)

0x2eb: Push("head")
0x2ec: @ UnlookAsync(Stack[-1])
0x2ed: Pop(1)
0x2ee: Push((int) 1)
0x2ef: @ KillTimer(Stack[-1])
0x2f0: Pop(1)
0x2f1: Stack[-10] = Stack[-1]
0x2f2: Return(); Pop(4)

0x2f3: PushEmpty()
0x2f4: Push((int) 1)
0x2f5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2f6: IF (Stack[-1] == 0) GOTO 0x2fc; Pop(1)

0x2f7: PushEmpty(object)
0x2f8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2f9: Call2 0x5df

0x2fa: Pop(1)
0x2fb: GOTO 0x300

0x2fc: PushEmpty(int)
0x2fd: Stack[-1] = Stack[-2]
0x2fe: Call2 0x391

0x2ff: Pop(1)
0x300: Return(); Pop(0)

0x301: Push((int) 1)
0x302: @ KillTimer(Stack[-1])
0x303: Pop(1)
0x304: Push( Stack[2 + Tasks[-1].StackPointer] )
0x305: IF (Stack[-1] == 0) GOTO 0x30a; Pop(1)

0x306: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x307: Push("head")
0x308: @ UnlookAsync(Stack[-1])
0x309: Pop(1)
0x30a: PushEmpty()
0x30b: Call2 0x3a7

0x30c: Pop(0)
0x30d: Return(); Pop(0)

0x30e: PushEmpty()
0x30f: PushEmpty(bool)
0x310: Stack[-1] = (bool) 0
0x311: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0x312: IF (Stack[-1] == 0) GOTO 0x316; Pop(1)

0x313: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x314: IF (Stack[-1] == 0) GOTO 0x316; Pop(1)

0x315: Stack[-1] = (bool) 1
0x316: IF (Stack[-1] == 0) GOTO 0x31c; Pop(1)

0x317: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x318: PushEmpty(object)
0x319: Stack[-1] = Stack[-2]
0x31a: Call2 0x57f

0x31b: Pop(1)
0x31c: Return(); Pop(0)

0x31d: PushEmpty()
0x31e: PushEmpty(bool)
0x31f: Stack[-1] = (bool) 0
0x320: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0x321: IF (Stack[-1] == 0) GOTO 0x325; Pop(1)

0x322: Push( Stack[2 + Tasks[-1].StackPointer] )
0x323: IF (Stack[-1] == 0) GOTO 0x325; Pop(1)

0x324: Stack[-1] = (bool) 1
0x325: IF (Stack[-1] == 0) GOTO 0x32a; Pop(1)

0x326: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x327: Push("head")
0x328: @ UnlookAsync(Stack[-1])
0x329: Pop(1)
0x32a: Return(); Pop(0)

0x32b: PushEmpty(bool, bool, object, cvector, cvector, cvector, float, object, bool, bool, object, cvector, cvector, cvector, float, object)
0x32c: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x32d: Stack[1 + Tasks[-1].StackPointer] = Stack[-21]
0x32e: Stack[-7] = Stack[-17]
0x32f: PushEmpty(bool, object)
0x330: Stack[-1] = Stack[-23]
0x331: Call2 0x3b7

0x332: Pop(1)
0x333: Pop(1); Push((bool) Stack[-1] == 0)
0x334: IF (Stack[-1] == 0) GOTO 0x337; Pop(1)

0x335: Stack[-22] = (bool) 0
0x336: Return(); Pop(16)

0x337: @@ GetPosition(Stack[-5])
0x338: Pop(0)
0x339: @ GetPosition(Stack[-4])
0x33a: Pop(0)
0x33b: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x33c: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x33d: PushEmpty(bool)
0x33e: Stack[-1] = (bool) 0
0x33f: Push((int) 0)
0x340: Pop(1); Push((bool) Stack[-21] > Stack[-1])
0x341: IF (Stack[-1] == 0) GOTO 0x346; Pop(1)

0x342: Pop(0); Push(Stack[-20] * Stack[-20]);
0x343: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x344: IF (Stack[-1] == 0) GOTO 0x346; Pop(1)

0x345: Stack[-1] = (bool) 1
0x346: IF (Stack[-1] == 0) GOTO 0x34b; Pop(1)

0x347: @ Stop()
0x348: Pop(0)
0x349: Stack[-22] = (bool) 0
0x34a: Return(); Pop(16)

0x34b: Pop(0); Push(Stack[-20] * Stack[-20]);
0x34c: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x34d: IF (Stack[-1] == 0) GOTO 0x389; Pop(1)

0x34e: @@ GetPFPosition(Stack[-5])
0x34f: Pop(0)
0x350: @ FindPathTo(Stack[-1], Stack[-5])
0x351: Pop(0)
0x352: Pop(0); Push(( Stack[-1] != 0 )
0x353: IF (Stack[-1] == 0) GOTO 0x356; Pop(1)

0x354: Stack[-6] = Stack[-1]
0x355: Stack[-1] = 0
0x356: Pop(0); Push(( Stack[-6] != 0 )
0x357: IF (Stack[-1] == 0) GOTO 0x377; Pop(1)

0x358: Push(Stack[-7])
0x359: IF (Stack[-1] == 0) GOTO 0x360; Pop(1)

0x35a: Stack[-7] = (bool) 0
0x35b: @ RotatePath(Stack[-6], Stack[-8])
0x35c: Pop(0)
0x35d: Pop(0); Push((bool) Stack[-8] == 0)
0x35e: IF (Stack[-1] == 0) GOTO 0x360; Pop(1)

0x35f: GOTO 0x38f

0x360: Push((int) 0)
0x361: Push((float)0.3)
0x362: @ SetTimer(Stack[-2], Stack[-1])
0x363: Pop(2)
0x364: PushEmpty(string)
0x365: Call2 0x3be

0x366: Pop(0)
0x367: PushEmpty(string)
0x368: Call2 0x3c0

0x369: Pop(0)
0x36a: @ FollowPath(Stack[-8], Stack[-20], Stack[-10], Stack[-2], Stack[-1])
0x36b: Pop(2)
0x36c: Pop(0); Push((bool) Stack[-8] == 0)
0x36d: IF (Stack[-1] == 0) GOTO 0x375; Pop(1)

0x36e: Push( Stack[0 + Tasks[-1].StackPointer] )
0x36f: IF (Stack[-1] == 0) GOTO 0x373; Pop(1)

0x370: Stack[-6] = 0
0x371: GOTO 0x38f

0x372: GOTO 0x374

0x373: GOTO 0x38e

0x374: GOTO 0x376

0x375: Stack[-6] = 0
0x376: GOTO 0x387

0x377: Push((int) 0)
0x378: @ KillTimer(Stack[-1])
0x379: Pop(1)
0x37a: Push((float)0.5)
0x37b: @ Sleep(Stack[-1], Stack[-9])
0x37c: Pop(1)
0x37d: Pop(0); Push((bool) Stack[-8] == 0)
0x37e: IF (Stack[-1] == 0) GOTO 0x383; Pop(1)

0x37f: Push( Stack[0 + Tasks[-1].StackPointer] )
0x380: IF (Stack[-1] == 0) GOTO 0x383; Pop(1)

0x381: Stack[-6] = 0
0x382: GOTO 0x38f

0x383: Push((int) 0)
0x384: Push((float)0.3)
0x385: @ SetTimer(Stack[-2], Stack[-1])
0x386: Pop(2)
0x387: Stack[-1] = 0
0x388: GOTO 0x38d

0x389: Push((int) 0)
0x38a: @ KillTimer(Stack[-1])
0x38b: Pop(1)
0x38c: GOTO 0x38f

0x38d: Stack[-6] = 0
0x38e: GOTO 0x32f

0x38f: Stack[-22] = !Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x390: Return(); Pop(16)

0x391: PushEmpty()
0x392: Push((int) 0)
0x393: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x394: IF (Stack[-1] == 0) GOTO 0x396; Pop(1)

0x395: Return(); Pop(0)

0x396: PushEmpty(bool, object)
0x397: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x398: Call2 0x3b7

0x399: Pop(1)
0x39a: Pop(1); Push((bool) Stack[-1] == 0)
0x39b: IF (Stack[-1] == 0) GOTO 0x39d; Pop(1)

0x39c: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x39d: Push((int) 0)
0x39e: @ KillTimer(Stack[-1])
0x39f: Pop(1)
0x3a0: @ Stop()
0x3a1: Pop(0)
0x3a2: Return(); Pop(0)

0x3a3: PushEmpty()
0x3a4: @ RequestClearPath(Stack[-1])
0x3a5: Pop(0)
0x3a6: Return(); Pop(0)

0x3a7: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x3a8: Push((int) 0)
0x3a9: @ KillTimer(Stack[-1])
0x3aa: Pop(1)
0x3ab: @ Stop()
0x3ac: Pop(0)
0x3ad: Return(); Pop(0)

0x3ae: PushEmpty()
0x3af: PushEmpty()
0x3b0: Call2 0x301

0x3b1: Pop(0)
0x3b2: PushEmpty(object)
0x3b3: Stack[-1] = Stack[-2]
0x3b4: Call2 0x622

0x3b5: Pop(1)
0x3b6: Return(); Pop(0)

0x3b7: PushEmpty()
0x3b8: PushEmpty(bool, object)
0x3b9: Stack[-1] = Stack[-3]
0x3ba: Call2 0x4de

0x3bb: Stack[-4] = Stack[-2]
0x3bc: Pop(2)
0x3bd: Return(); Pop(0)

0x3be: Stack[-1] = "walk"
0x3bf: Return(); Pop(0)

0x3c0: Stack[-1] = "run"
0x3c1: Return(); Pop(0)

0x3c2: PushEmpty()
0x3c3: PushEmpty(object)
0x3c4: Stack[-1] = Stack[-2]
0x3c5: Call2 0x3cb

0x3c6: Pop(1)
0x3c7: @ Hold()
0x3c8: Pop(0)
0x3c9: GOTO 0x3c7

0x3ca: Return(); Pop(0)

0x3cb: PushEmpty(cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector, cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector)
0x3cc: Pop(0); Push((bool) Stack[-21] == 0)
0x3cd: IF (Stack[-1] == 0) GOTO 0x3d3; Pop(1)

0x3ce: PushEmpty(string)
0x3cf: Stack[-1] = "fdie"
0x3d0: Call2 0x426

0x3d1: Pop(1)
0x3d2: GOTO 0x425

0x3d3: @@ GetPosition(Stack[-10])
0x3d4: Pop(0)
0x3d5: @ GetPosition(Stack[-9])
0x3d6: Pop(0)
0x3d7: @ GetDirection(Stack[-8])
0x3d8: Pop(0)
0x3d9: Stack[-7] = Stack[-9] - Stack[-10]; Pop(0);
0x3da: Push(CvectorIndex(Stack[-7], 0))
0x3db: Push(CvectorIndex(Stack[-9], 0))
0x3dc: Pop(2); Push(Stack[-2] * Stack[-1]);
0x3dd: Push(CvectorIndex(Stack[-8], 2))
0x3de: Push(CvectorIndex(Stack[-10], 2))
0x3df: Pop(2); Push(Stack[-2] * Stack[-1]);
0x3e0: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3e1: Push((int) 0)
0x3e2: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x3e3: IF (Stack[-1] == 0) GOTO 0x3e6; Pop(1)

0x3e4: Stack[-6] = "fdie"
0x3e5: GOTO 0x3e7

0x3e6: Stack[-6] = "bdie"
0x3e7: @ RemoveRTEnvelope()
0x3e8: Pop(0)
0x3e9: @ SetDeathState()
0x3ea: Pop(0)
0x3eb: @ Stop()
0x3ec: Pop(0)
0x3ed: @ StopAsync()
0x3ee: Pop(0)
0x3ef: Stack[-5] = Stack[-21]
0x3f0: Push("GetScriptProperty")
0x3f1: Push((int) 2)
0x3f2: Pop(2); Push(IsFuncExist(Stack[-23], Stack[-2], Stack[-1]))
0x3f3: IF (Stack[-1] == 0) GOTO 0x3ff; Pop(1)

0x3f4: Push("Owner")
0x3f5: @@ HasScriptProperty(Stack[-5], Stack[-1])
0x3f6: Pop(1)
0x3f7: Push(Stack[-4])
0x3f8: IF (Stack[-1] == 0) GOTO 0x3ff; Pop(1)

0x3f9: Push("Owner")
0x3fa: @@ GetScriptProperty(Stack[-6], Stack[-1])
0x3fb: Pop(1)
0x3fc: Pop(0); Push((bool) Stack[-5] == 0)
0x3fd: IF (Stack[-1] == 0) GOTO 0x3ff; Pop(1)

0x3fe: Stack[-5] = Stack[-21]
0x3ff: Push("@GetEyesHeight")
0x400: Push((int) 1)
0x401: Pop(2); Push(IsFuncExist(Stack[-7], Stack[-2], Stack[-1]))
0x402: IF (Stack[-1] == 0) GOTO 0x40e; Pop(1)

0x403: @@ GetEyesHeight(Stack[-2])
0x404: Pop(0)
0x405: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x406: Push(CvectorIndex(Stack[-1], 1))
0x407: Stack[-1] = Stack[-3]
0x408: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x409: Push("head")
0x40a: @ LookAsync(Stack[-22], Stack[-1], Stack[-2])
0x40b: Pop(1)
0x40c: Stack[-3] = (bool) 1
0x40d: GOTO 0x40f

0x40e: Stack[-3] = (bool) 0
0x40f: PushEmpty(string)
0x410: Stack[-1] = Stack[-7]
0x411: Call2 0x58a

0x412: Pop(1)
0x413: Push("all")
0x414: @ PlayAnimation(Stack[-1], Stack[-7])
0x415: Pop(1)
0x416: @ WaitForAnimEnd()
0x417: Pop(0)
0x418: Push(Stack[-3])
0x419: IF (Stack[-1] == 0) GOTO 0x41f; Pop(1)

0x41a: @ StopAsync()
0x41b: Pop(0)
0x41c: Push("head")
0x41d: @ UnlookAsync(Stack[-1])
0x41e: Pop(1)
0x41f: Push("all")
0x420: @ LockAnimationEnd(Stack[-1], Stack[-7])
0x421: Pop(1)
0x422: @ RemoveEnvelope()
0x423: Pop(0)
0x424: Stack[-5] = 0
0x425: Return(); Pop(20)

0x426: PushEmpty()
0x427: @ RemoveRTEnvelope()
0x428: Pop(0)
0x429: @ SetDeathState()
0x42a: Pop(0)
0x42b: @ Stop()
0x42c: Pop(0)
0x42d: @ StopAsync()
0x42e: Pop(0)
0x42f: @ StopSecondaryAnimation()
0x430: Pop(0)
0x431: PushEmpty(string)
0x432: Stack[-1] = Stack[-2]
0x433: Call2 0x58a

0x434: Pop(1)
0x435: Push("all")
0x436: @ PlayAnimation(Stack[-1], Stack[-2])
0x437: Pop(1)
0x438: @ WaitForAnimEnd()
0x439: Pop(0)
0x43a: Push("all")
0x43b: @ LockAnimationEnd(Stack[-1], Stack[-2])
0x43c: Pop(1)
0x43d: @ RemoveEnvelope()
0x43e: Pop(0)
0x43f: Return(); Pop(0)

0x440: PushEmpty()
0x441: Return(); Pop(0)

0x442: PushEmpty()
0x443: Return(); Pop(0)

0x444: PushEmpty()
0x445: Return(); Pop(0)

0x446: PushEmpty()
0x447: Push((int) 2)
0x448: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x449: IF (Stack[-1] == 0) GOTO 0x44d; Pop(1)

0x44a: Stack[-2] = "fire"
0x44b: Return(); Pop(0)

0x44c: GOTO 0x452

0x44d: Push((int) 1)
0x44e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x44f: IF (Stack[-1] == 0) GOTO 0x452; Pop(1)

0x450: Stack[-2] = "bullet"
0x451: Return(); Pop(0)

0x452: Stack[-2] = "phys"
0x453: Return(); Pop(0)

0x454: PushEmpty(cvector, cvector, cvector, cvector)
0x455: @ GetPosition(Stack[-2])
0x456: Pop(0)
0x457: @@ GetPosition(Stack[-1])
0x458: Pop(0)
0x459: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x45a: Return(); Pop(4)

0x45b: PushEmpty(bool, bool)
0x45c: @ IsPlayerActor(Stack[-3], Stack[-1])
0x45d: Pop(0)
0x45e: Stack[-4] = Stack[-1]
0x45f: Return(); Pop(2)

0x460: PushEmpty(bool, bool)
0x461: Push("HasProperty")
0x462: Push((int) 2)
0x463: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x464: Pop(1); Push((bool) Stack[-1] == 0)
0x465: IF (Stack[-1] == 0) GOTO 0x468; Pop(1)

0x466: Stack[-5] = (bool) 0
0x467: Return(); Pop(2)

0x468: @@ HasProperty(Stack[-3], Stack[-1])
0x469: Pop(0)
0x46a: Stack[-5] = Stack[-1]
0x46b: Return(); Pop(2)

0x46c: PushEmpty(int, string, int, float, float, float, int, string, int, float, float, float)
0x46d: PushEmpty(bool, object, string)
0x46e: Stack[-2] = Stack[-18]
0x46f: Stack[-1] = "health"
0x470: Call2 0x460

0x471: Pop(2)
0x472: Pop(1); Push((bool) Stack[-1] == 0)
0x473: IF (Stack[-1] == 0) GOTO 0x476; Pop(1)

0x474: Stack[-16] = (float) 0.0
0x475: Return(); Pop(12)

0x476: PushEmpty(bool, object, string)
0x477: Stack[-2] = Stack[-18]
0x478: Stack[-1] = "armor"
0x479: Call2 0x460

0x47a: Pop(2)
0x47b: Pop(1); Push((bool) Stack[-1] == 0)
0x47c: IF (Stack[-1] == 0) GOTO 0x47f; Pop(1)

0x47d: Stack[-6] = (int) 0
0x47e: GOTO 0x482

0x47f: Push("armor")
0x480: @@ GetProperty(Stack[-1], Stack[-7])
0x481: Pop(1)
0x482: Push("armor_")
0x483: PushEmpty(string, int)
0x484: Stack[-1] = Stack[-16]
0x485: Call2 0x446

0x486: Pop(1)
0x487: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x488: PushEmpty(bool, object, string)
0x489: Stack[-2] = Stack[-18]
0x48a: Stack[-1] = Stack[-8]
0x48b: Call2 0x460

0x48c: Pop(2)
0x48d: Pop(1); Push((bool) Stack[-1] == 0)
0x48e: IF (Stack[-1] == 0) GOTO 0x491; Pop(1)

0x48f: Stack[-4] = (int) 0
0x490: GOTO 0x493

0x491: @@ GetProperty(Stack[-5], Stack[-4])
0x492: Pop(0)
0x493: PushEmpty(float, float, float)
0x494: Pop(0); Push(Stack[-9] + Stack[-7]);
0x495: Push((float)100.0)
0x496: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0x497: Stack[-1] = (int) 1
0x498: Call2 0x5c3

0x499: Stack[-6] = Stack[-3]
0x49a: Pop(3)
0x49b: Push("health")
0x49c: @@ GetProperty(Stack[-1], Stack[-3])
0x49d: Pop(1)
0x49e: Push((int) 1)
0x49f: Pop(1); Push(Stack[-1] - Stack[-4]);
0x4a0: Stack[-2] = Stack[-15] * Stack[-1]; Pop(1);
0x4a1: Push("health")
0x4a2: PushEmpty(float, float, float, float)
0x4a3: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0x4a4: Stack[-2] = (int) 0
0x4a5: Stack[-1] = (int) 1
0x4a6: Call2 0x5ca

0x4a7: Pop(3)
0x4a8: @@ SetProperty(Stack[-2], Stack[-1])
0x4a9: Pop(2)
0x4aa: PushEmpty(bool, object)
0x4ab: Stack[-1] = Stack[-17]
0x4ac: Call2 0x45b

0x4ad: Pop(1)
0x4ae: IF (Stack[-1] == 0) GOTO 0x4b3; Pop(1)

0x4af: PushEmpty(float)
0x4b0: Stack[-1] = -Stack[-2]; Pop(0);
0x4b1: Call2 0x5d5

0x4b2: Pop(1)
0x4b3: Stack[-16] = Stack[-1]
0x4b4: Return(); Pop(12)

0x4b5: PushEmpty(bool, bool)
0x4b6: @@ IsDead(Stack[-1])
0x4b7: Pop(0)
0x4b8: Stack[-4] = Stack[-1]
0x4b9: Return(); Pop(2)

0x4ba: PushEmpty(object, object, object, object)
0x4bb: Pop(0); Push((bool) Stack[-5] == 0)
0x4bc: IF (Stack[-1] == 0) GOTO 0x4bf; Pop(1)

0x4bd: Stack[-6] = (bool) 0
0x4be: Return(); Pop(4)

0x4bf: PushEmpty(bool)
0x4c0: Stack[-1] = (bool) 0
0x4c1: Push("IsDead")
0x4c2: Push((int) 1)
0x4c3: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x4c4: IF (Stack[-1] == 0) GOTO 0x4cb; Pop(1)

0x4c5: PushEmpty(bool, object)
0x4c6: Stack[-1] = Stack[-8]
0x4c7: Call2 0x4b5

0x4c8: Pop(1)
0x4c9: IF (Stack[-1] == 0) GOTO 0x4cb; Pop(1)

0x4ca: Stack[-1] = (bool) 1
0x4cb: IF (Stack[-1] == 0) GOTO 0x4ce; Pop(1)

0x4cc: Stack[-6] = (bool) 0
0x4cd: Return(); Pop(4)

0x4ce: @ GetScene(Stack[-2])
0x4cf: Pop(0)
0x4d0: Pop(0); Push((bool) Stack[-2] == 0)
0x4d1: IF (Stack[-1] == 0) GOTO 0x4d4; Pop(1)

0x4d2: Stack[-6] = (bool) 0
0x4d3: Return(); Pop(4)

0x4d4: @@ GetScene(Stack[-1])
0x4d5: Pop(0)
0x4d6: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x4d7: IF (Stack[-1] == 0) GOTO 0x4da; Pop(1)

0x4d8: Stack[-6] = (bool) 0
0x4d9: Return(); Pop(4)

0x4da: Stack[-6] = (bool) 1
0x4db: Return(); Pop(4)

0x4dc: Stack[-1] = 0
0x4dd: Stack[-2] = 0
0x4de: PushEmpty(int, int)
0x4df: PushEmpty(bool, object)
0x4e0: Stack[-1] = Stack[-5]
0x4e1: Call2 0x4ba

0x4e2: Pop(1)
0x4e3: Pop(1); Push((bool) Stack[-1] == 0)
0x4e4: IF (Stack[-1] == 0) GOTO 0x4e7; Pop(1)

0x4e5: Stack[-4] = (bool) 0
0x4e6: Return(); Pop(2)

0x4e7: PushEmpty(bool, object, string)
0x4e8: Stack[-2] = Stack[-6]
0x4e9: Stack[-1] = "noaccess"
0x4ea: Call2 0x460

0x4eb: Pop(2)
0x4ec: Pop(1); Push((bool) Stack[-1] == 0)
0x4ed: IF (Stack[-1] == 0) GOTO 0x4f0; Pop(1)

0x4ee: Stack[-4] = (bool) 1
0x4ef: Return(); Pop(2)

0x4f0: Push("noaccess")
0x4f1: @@ GetProperty(Stack[-1], Stack[-2])
0x4f2: Pop(1)
0x4f3: Push((int) 0)
0x4f4: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x4f5: Return(); Pop(2)

0x4f6: PushEmpty(bool, int, cvector, cvector, cvector, cvector, string, bool, int, cvector, cvector, cvector, cvector, string)
0x4f7: Pop(0); Push((bool) Stack[-15] == 0)
0x4f8: IF (Stack[-1] == 0) GOTO 0x4fa; Pop(1)

0x4f9: Return(); Pop(14)

0x4fa: @ IsDead(Stack[-7])
0x4fb: Pop(0)
0x4fc: Push(Stack[-7])
0x4fd: IF (Stack[-1] == 0) GOTO 0x4ff; Pop(1)

0x4fe: Return(); Pop(14)

0x4ff: @ GetSecondaryAnimationType(Stack[-6])
0x500: Pop(0)
0x501: Push((int) 0)
0x502: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x503: IF (Stack[-1] == 0) GOTO 0x505; Pop(1)

0x504: Return(); Pop(14)

0x505: @@ GetPosition(Stack[-5])
0x506: Pop(0)
0x507: @ GetPosition(Stack[-4])
0x508: Pop(0)
0x509: @ GetDirection(Stack[-3])
0x50a: Pop(0)
0x50b: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0x50c: Push(CvectorIndex(Stack[-2], 0))
0x50d: Push(CvectorIndex(Stack[-4], 0))
0x50e: Pop(2); Push(Stack[-2] * Stack[-1]);
0x50f: Push(CvectorIndex(Stack[-3], 2))
0x510: Push(CvectorIndex(Stack[-5], 2))
0x511: Pop(2); Push(Stack[-2] * Stack[-1]);
0x512: Pop(2); Push(Stack[-2] + Stack[-1]);
0x513: Push((int) 0)
0x514: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x515: IF (Stack[-1] == 0) GOTO 0x518; Pop(1)

0x516: Stack[-1] = "fhit"
0x517: GOTO 0x519

0x518: Stack[-1] = "bhit"
0x519: Push("hit_react")
0x51a: Push("1")
0x51b: Pop(1); Push(Stack[-3] + Stack[-1]);
0x51c: Push("2")
0x51d: Pop(1); Push(Stack[-4] + Stack[-1]);
0x51e: Push((int) -10)
0x51f: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x520: Pop(4)
0x521: Return(); Pop(14)

0x522: PushEmpty(cvector, object, int, bool, cvector, cvector, int, int, cvector, cvector, object, int, bool, cvector, cvector, int, int, cvector)
0x523: PushEmpty(bool)
0x524: Stack[-1] = (bool) 0
0x525: PushEmpty(bool)
0x526: Stack[-1] = (bool) 0
0x527: Push(Stack[-23])
0x528: IF (Stack[-1] == 0) GOTO 0x52d; Pop(1)

0x529: Push((int) 4)
0x52a: Pop(1); Push((bool) Stack[-23] != Stack[-1])
0x52b: IF (Stack[-1] == 0) GOTO 0x52d; Pop(1)

0x52c: Stack[-1] = (bool) 1
0x52d: IF (Stack[-1] == 0) GOTO 0x532; Pop(1)

0x52e: Push((int) 5)
0x52f: Pop(1); Push((bool) Stack[-22] != Stack[-1])
0x530: IF (Stack[-1] == 0) GOTO 0x532; Pop(1)

0x531: Stack[-1] = (bool) 1
0x532: IF (Stack[-1] == 0) GOTO 0x561; Pop(1)

0x533: PushEmpty(cvector, cvector)
0x534: PushEmpty(cvector, object)
0x535: Stack[-1] = Stack[-25]
0x536: Call2 0x454

0x537: Stack[-3] = Stack[-2]
0x538: Pop(2)
0x539: Call2 0x5b9

0x53a: Stack[-11] = Stack[-2]
0x53b: Pop(2)
0x53c: @ CreateVectorVector(Stack[-8])
0x53d: Pop(0)
0x53e: Stack[-7] = (int) 1
0x53f: Push("hit")
0x540: Pop(1); Push(Stack[-1] + Stack[-8]);
0x541: @ GetGeometryLocator(Stack[-1], Stack[-7], Stack[-6], Stack[-5])
0x542: Pop(1)
0x543: Pop(0); Push((bool) Stack[-6] == 0)
0x544: IF (Stack[-1] == 0) GOTO 0x546; Pop(1)

0x545: GOTO 0x54f

0x546: Pop(0); Push(Stack[-4] | Stack[-9]);
0x547: Push((float)0.70711)
0x548: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x549: IF (Stack[-1] == 0) GOTO 0x54c; Pop(1)

0x54a: @@ add(Stack[-5])
0x54b: Pop(0)
0x54c: Push((int) 1)
0x54d: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x54e: GOTO 0x53f

0x54f: @@ size(Stack[-3])
0x550: Pop(0)
0x551: Push(Stack[-3])
0x552: IF (Stack[-1] == 0) GOTO 0x560; Pop(1)

0x553: @ irand(Stack[-2], Stack[-3])
0x554: Pop(0)
0x555: @@ get(Stack[-1], Stack[-2])
0x556: Pop(0)
0x557: PushEmpty(object, int, float, cvector, cvector)
0x558: Stack[-5] = Stack[-26]
0x559: Stack[-4] = Stack[-25]
0x55a: Stack[-3] = Stack[-24]
0x55b: Stack[-2] = Stack[-6]
0x55c: Stack[-1] = -Stack[-14]; Pop(0);
0x55d: Call2 0x566

0x55e: Pop(5)
0x55f: Return(); Pop(18)

0x560: Stack[-8] = 0
0x561: PushEmpty(object)
0x562: Stack[-1] = Stack[-22]
0x563: Call2 0x4f6

0x564: Pop(1)
0x565: Return(); Pop(18)

0x566: PushEmpty(object, object, object, object)
0x567: @ GetScene(Stack[-2])
0x568: Pop(0)
0x569: Push("scripted")
0x56a: Push("blood_dir.xml")
0x56b: @ AddActorByType(Stack[-3], Stack[-2], Stack[-4], Stack[-8], Stack[-7], Stack[-1])
0x56c: Pop(2)
0x56d: PushEmpty(object)
0x56e: Stack[-1] = Stack[-10]
0x56f: Call2 0x4f6

0x570: Pop(1)
0x571: Return(); Pop(4)

0x572: Stack[-1] = 0
0x573: Stack[-2] = 0
0x574: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x575: @@ GetPosition(Stack[-3])
0x576: Pop(0)
0x577: @ GetPosition(Stack[-2])
0x578: Pop(0)
0x579: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0x57a: Push(CvectorIndex(Stack[-1], 0))
0x57b: Push(CvectorIndex(Stack[-2], 2))
0x57c: @ RotateAsync(Stack[-2], Stack[-1])
0x57d: Pop(2)
0x57e: Return(); Pop(6)

0x57f: PushEmpty(float, cvector, float, cvector)
0x580: @@ GetEyesHeight(Stack[-2])
0x581: Pop(0)
0x582: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x583: Push(CvectorIndex(Stack[-1], 1))
0x584: Stack[-1] = Stack[-3]
0x585: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x586: Push("head")
0x587: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x588: Pop(1)
0x589: Return(); Pop(4)

0x58a: PushEmpty(bool, int, bool, int, bool, float, cvector, cvector, bool, int, bool, int, bool, float, cvector, cvector)
0x58b: @ IsExisting3DSound(Stack[-8], Stack[-17])
0x58c: Pop(0)
0x58d: Pop(0); Push((bool) Stack[-8] == 0)
0x58e: IF (Stack[-1] == 0) GOTO 0x5a3; Pop(1)

0x58f: Stack[-7] = (int) 0
0x590: Push((int) 1)
0x591: Pop(1); Push(Stack[-8] + Stack[-1]);
0x592: Pop(1); Push(Stack[-18] + Stack[-1]);
0x593: @ IsExisting3DSound(Stack[-7], Stack[-1])
0x594: Pop(1)
0x595: Pop(0); Push((bool) Stack[-6] == 0)
0x596: IF (Stack[-1] == 0) GOTO 0x598; Pop(1)

0x597: GOTO 0x59b

0x598: Push((int) 1)
0x599: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x59a: GOTO 0x590

0x59b: Pop(0); Push((bool) Stack[-7] == 0)
0x59c: IF (Stack[-1] == 0) GOTO 0x59e; Pop(1)

0x59d: Return(); Pop(16)

0x59e: @ irand(Stack[-5], Stack[-7])
0x59f: Pop(0)
0x5a0: Push((int) 1)
0x5a1: Pop(1); Push(Stack[-6] + Stack[-1]);
0x5a2: Stack[-18] = Stack[-18] + Stack[-1]; Pop(1);
0x5a3: @ Is3DSoundLoaded(Stack[-4], Stack[-17])
0x5a4: Pop(0)
0x5a5: Push(Stack[-4])
0x5a6: IF (Stack[-1] == 0) GOTO 0x5b2; Pop(1)

0x5a7: @ GetEyesHeight(Stack[-3])
0x5a8: Pop(0)
0x5a9: @ GetDirection(Stack[-2])
0x5aa: Pop(0)
0x5ab: Push((int) 50)
0x5ac: Stack[-2] = Stack[-3] * Stack[-1]; Pop(1);
0x5ad: Push(CvectorIndex(Stack[-1], 1))
0x5ae: Stack[-1] = Stack[-1] + Stack[-4]; Pop(0);
0x5af: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x5b0: @ PlayGlobalSound(Stack[-17], Stack[-1])
0x5b1: Pop(0)
0x5b2: Return(); Pop(16)

0x5b3: PushEmpty(object, object)
0x5b4: @ self(Stack[-1])
0x5b5: Pop(0)
0x5b6: Stack[-3] = Stack[-1]
0x5b7: Return(); Pop(2)

0x5b8: Stack[-1] = 0
0x5b9: PushEmpty(float, float)
0x5ba: Pop(0); Push(Stack[-3] | Stack[-3]);
0x5bb: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x5bc: Push((float)0.0)
0x5bd: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x5be: IF (Stack[-1] == 0) GOTO 0x5c1; Pop(1)

0x5bf: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x5c0: Return(); Pop(2)

0x5c1: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x5c2: Return(); Pop(2)

0x5c3: PushEmpty()
0x5c4: Pop(0); Push((bool) Stack[-2] < Stack[-1])
0x5c5: IF (Stack[-1] == 0) GOTO 0x5c8; Pop(1)

0x5c6: Stack[-3] = Stack[-2]
0x5c7: GOTO 0x5c9

0x5c8: Stack[-3] = Stack[-1]
0x5c9: Return(); Pop(0)

0x5ca: PushEmpty()
0x5cb: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x5cc: IF (Stack[-1] == 0) GOTO 0x5cf; Pop(1)

0x5cd: Stack[-4] = Stack[-2]
0x5ce: Return(); Pop(0)

0x5cf: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x5d0: IF (Stack[-1] == 0) GOTO 0x5d3; Pop(1)

0x5d1: Stack[-4] = Stack[-1]
0x5d2: Return(); Pop(0)

0x5d3: Stack[-4] = Stack[-3]
0x5d4: Return(); Pop(0)

0x5d5: PushEmpty(object, object)
0x5d6: @ CreateFloatVector(Stack[-1])
0x5d7: Pop(0)
0x5d8: @@ add(Stack[-3])
0x5d9: Pop(0)
0x5da: Push((int) 15)
0x5db: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x5dc: Pop(1)
0x5dd: Return(); Pop(2)

0x5de: Stack[-1] = 0
0x5df: PushEmpty(bool, bool)
0x5e0: @ IsPlayerActor(Stack[-3], Stack[-1])
0x5e1: Pop(0)
0x5e2: Push(Stack[-1])
0x5e3: IF (Stack[-1] == 0) GOTO 0x5e7; Pop(1)

0x5e4: Push("attack")
0x5e5: @ PlayGlobalMusic(Stack[-1])
0x5e6: Pop(1)
0x5e7: Return(); Pop(2)

0x5e8: PushEmpty(object, object)
0x5e9: @ GetScene(Stack[-1])
0x5ea: Pop(0)
0x5eb: Push("battle")
0x5ec: PushEmpty(object)
0x5ed: Call2 0x5b3

0x5ee: Pop(0)
0x5ef: @ BroadcastMessage(Stack[-2], Stack[-1], Stack[-3])
0x5f0: Pop(2)
0x5f1: Return(); Pop(2)

0x5f2: Stack[-1] = 0
0x5f3: PushEmpty(object)
0x5f4: Call2 0x5b3

0x5f5: Pop(0)
0x5f6: @ RemoveActor(Stack[-1])
0x5f7: Pop(1)
0x5f8: @ Hold()
0x5f9: Pop(0)
0x5fa: Return(); Pop(0)

0x5fb: PushEmpty()
0x5fc: PushEmpty(object)
0x5fd: Stack[-1] = Stack[-2]
0x5fe: Push(-1, 0); TaskCall(3)
0x5ff: Call2 0x3c2

0x600: Pop(-1, 0); TaskReturn
0x601: Pop(1)
0x602: Return(); Pop(0)

0x603: PushEmpty()
0x604: PushEmpty(object, int, float)
0x605: Stack[-3] = Stack[-7]
0x606: Stack[-2] = Stack[-6]
0x607: Stack[-1] = Stack[-5]
0x608: Call2 0x522

0x609: Pop(3)
0x60a: Return(); Pop(0)

0x60b: PushEmpty()
0x60c: PushEmpty(object, int, float, cvector, cvector)
0x60d: Stack[-5] = Stack[-11]
0x60e: Stack[-4] = Stack[-10]
0x60f: Stack[-3] = Stack[-9]
0x610: Stack[-2] = Stack[-7]
0x611: Stack[-1] = Stack[-6]
0x612: Call2 0x566

0x613: Pop(5)
0x614: Return(); Pop(0)

0x615: PushEmpty(float, float)
0x616: Push("health")
0x617: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x618: IF (Stack[-1] == 0) GOTO 0x621; Pop(1)

0x619: Push("health")
0x61a: @ GetProperty(Stack[-1], Stack[-2])
0x61b: Pop(1)
0x61c: Push((int) 0)
0x61d: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x61e: IF (Stack[-1] == 0) GOTO 0x621; Pop(1)

0x61f: @ SignalDeath(Stack[-4])
0x620: Pop(0)
0x621: Return(); Pop(2)

0x622: PushEmpty()
0x623: PushEmpty(object)
0x624: Stack[-1] = Stack[-2]
0x625: Call2 0x5fb

0x626: Pop(1)
0x627: Return(); Pop(0)

