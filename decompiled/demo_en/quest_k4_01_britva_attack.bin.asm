GlobalVarCount = 0

Strings:
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
	GetProperty
	SetProperty
	health
	armor
	armor_
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
	reputation
	battle

Import:
	FindActor (2 args)
	RemoveActor (1 args)
	Hold (0 args)
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
	Sleep (1 args)
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
	SendWorldWndMessage (1 args)
	CreateFloatVector (1 args)
	SendWorldWndMessage (2 args)
	BroadcastMessage (3 args)
	GetProperty (2 args)
	SignalDeath (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object, int, int, bool, float, int) Params = 0
		EVENT_6 Op = 0x16 Vars = ()
	GTASK_1 Vars = (bool, object, bool) Params = 6
		EVENT_6 Op = 0x2b4 Vars = ()
		EVENT_7 Op = 0x2ed Vars = (int)
		EVENT_1 Op = 0x308 Vars = (object)
		EVENT_2 Op = 0x317 Vars = (object)
		EVENT_10 Op = 0x39d Vars = (object)
		EVENT_41 Op = 0x3a8 Vars = (object)
	GTASK_2  Params = 1
		EVENT_6 Op = 0x3bc Vars = ()
		EVENT_22 Op = 0x442 Vars = (object, int, float, float)
		EVENT_16 Op = 0x444 Vars = (object, string)
		EVENT_41 Op = 0x446 Vars = (object)

Events:
EVENT_22 Op = 0x64a Vars = (object, int, float, float)
EVENT_43 Op = 0x652 Vars = (object, int, float, float, cvector, cvector)
EVENT_16 Op = 0x65c Vars = (object, string)
EVENT_41 Op = 0x669 Vars = (object)

0x0: PushEmpty()
0x1: Call2 0x4

0x2: Pop(0)
0x3: Return(); Pop(0)

0x4: PushEmpty(object, object)
0x5: Push("player")
0x6: @ FindActor(Stack[-2], Stack[-1])
0x7: Pop(1)
0x8: PushEmpty(object, bool, float)
0x9: Stack[-3] = Stack[-4]
0xa: Stack[-2] = (bool) 1
0xb: Stack[-1] = (float) 180.0
0xc: Call2 0x1e

0xd: Pop(3)
0xe: Return(); Pop(2)

0xf: Stack[-1] = 0
0x10: PushEmpty()
0x11: Stack[-3] = (float) 0.1
0x12: Return(); Pop(0)

0x13: PushEmpty()
0x14: Stack[-3] = (int) 1
0x15: Return(); Pop(0)

0x16: PushEmpty(object)
0x17: Call2 0x5cb

0x18: Pop(0)
0x19: @ RemoveActor(Stack[-1])
0x1a: Pop(1)
0x1b: @ Hold()
0x1c: Pop(0)
0x1d: Return(); Pop(0)

0x1e: PushEmpty(float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float, float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float)
0x1f: PushEmpty()
0x20: Call2 0x103

0x21: Pop(0)
0x22: Stack[5 + Tasks[-1].StackPointer] = (int)0
0x23: Push("@GetAttackDistance")
0x24: Push((int) 1)
0x25: Pop(2); Push(IsFuncExist(Stack[-27], Stack[-2], Stack[-1]))
0x26: IF (Stack[-1] == 0) GOTO 0x2c; Pop(1)

0x27: @@ GetAttackDistance(Stack[-11])
0x28: Pop(0)
0x29: Push((int) 50)
0x2a: Stack[-12] = Stack[-12] + Stack[-1]; Pop(1);
0x2b: GOTO 0x2d

0x2c: Stack[-11] = Stack[-23]
0x2d: Push((int) 150)
0x2e: Pop(1); Push((bool) Stack[-12] >= Stack[-1])
0x2f: IF (Stack[-1] == 0) GOTO 0x31; Pop(1)

0x30: Stack[-11] = (int) 150
0x31: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x32: Stack[0 + Tasks[-1].StackPointer] = Stack[-25]
0x33: @ IsPlayerActor(Stack[-0], Stack[-8])
0x34: Pop(0)
0x35: Push(Stack[-8])
0x36: IF (Stack[-1] == 0) GOTO 0x3f; Pop(1)

0x37: Push("attack")
0x38: @ PlayGlobalMusic(Stack[-1])
0x39: Pop(1)
0x3a: PushEmpty(object)
0x3b: Call2 0x5cb

0x3c: Pop(0)
0x3d: @ SendPlayerEnemy(Stack[-26], Stack[-1])
0x3e: Pop(1)
0x3f: Push(Stack[-24])
0x40: IF (Stack[-1] == 0) GOTO 0x43; Pop(1)

0x41: Stack[-7] = (bool) 0
0x42: GOTO 0x44

0x43: Stack[-7] = (bool) 1
0x44: Push((float)400.0)
0x45: Stack[-7] = Stack[-1] + Stack[-12]; Pop(1);
0x46: PushEmpty(bool)
0x47: Stack[-1] = (bool) 0
0x48: PushEmpty(bool, object)
0x49: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4a: Call2 0x4f6

0x4b: Pop(1)
0x4c: IF (Stack[-1] == 0) GOTO 0x50; Pop(1)

0x4d: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x4e: IF (Stack[-1] == 0) GOTO 0x50; Pop(1)

0x4f: Stack[-1] = (bool) 1
0x50: IF (Stack[-1] == 0) GOTO 0xf2; Pop(1)

0x51: PushEmpty()
0x52: Call2 0x2a0

0x53: Pop(0)
0x54: @@ GetPFPosition(Stack[-10])
0x55: Pop(0)
0x56: @ GetPFPosition(Stack[-9])
0x57: Pop(0)
0x58: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0x59: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x5a: Pop(0); Push(Stack[-6] * Stack[-6]);
0x5b: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0x5c: IF (Stack[-1] == 0) GOTO 0x6c; Pop(1)

0x5d: PushEmpty(bool, object, float, float, bool, bool)
0x5e: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0x5f: Stack[-4] = Stack[-17]
0x60: Stack[-3] = (float) 3000.0
0x61: Stack[-2] = (bool) 1
0x62: Stack[-1] = (bool) 0
0x63: Push(-6, 3); TaskCall(1)
0x64: Call2 0x2bc

0x65: Pop(-6, 3); TaskReturn
0x66: Pop(5)
0x67: Pop(1); Push((bool) Stack[-1] == 0)
0x68: IF (Stack[-1] == 0) GOTO 0x6a; Pop(1)

0x69: GOTO 0xf2

0x6a: Stack[-7] = (bool) 0
0x6b: GOTO 0xf1

0x6c: Pop(0); Push(Stack[-23] * Stack[-23]);
0x6d: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0x6e: IF (Stack[-1] == 0) GOTO 0xe9; Pop(1)

0x6f: @@ GetPFPosition(Stack[-3])
0x70: Pop(0)
0x71: @ CanReachByPF(Stack[-2], Stack[-3])
0x72: Pop(0)
0x73: Pop(0); Push((bool) Stack[-2] == 0)
0x74: IF (Stack[-1] == 0) GOTO 0x84; Pop(1)

0x75: PushEmpty(bool, object, float, float, bool, bool)
0x76: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0x77: Stack[-4] = Stack[-17]
0x78: Stack[-3] = (float) 3000.0
0x79: Stack[-2] = (bool) 1
0x7a: Stack[-1] = (bool) 0
0x7b: Push(-6, 3); TaskCall(1)
0x7c: Call2 0x2bc

0x7d: Pop(-6, 3); TaskReturn
0x7e: Pop(5)
0x7f: Pop(1); Push((bool) Stack[-1] == 0)
0x80: IF (Stack[-1] == 0) GOTO 0x82; Pop(1)

0x81: GOTO 0xf2

0x82: Stack[-7] = (bool) 0
0x83: GOTO 0x46

0x84: Pop(0); Push((bool) Stack[-7] == 0)
0x85: IF (Stack[-1] == 0) GOTO 0x9d; Pop(1)

0x86: PushEmpty(object)
0x87: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x88: Call2 0x58c

0x89: Pop(1)
0x8a: Push("all")
0x8b: Push("attack_on")
0x8c: @ PlayAnimation(Stack[-2], Stack[-1])
0x8d: Pop(2)
0x8e: @ WaitForAnimEnd()
0x8f: Pop(0)
0x90: PushEmpty()
0x91: Call2 0x2a0

0x92: Pop(0)
0x93: @ StopAsync()
0x94: Pop(0)
0x95: Stack[-7] = (bool) 1
0x96: PushEmpty(bool, object)
0x97: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x98: Call2 0x4f6

0x99: Pop(1)
0x9a: Pop(1); Push((bool) Stack[-1] == 0)
0x9b: IF (Stack[-1] == 0) GOTO 0x9d; Pop(1)

0x9c: GOTO 0xf2

0x9d: @ rand(Stack[-1])
0x9e: Pop(0)
0x9f: PushEmpty(bool)
0xa0: Stack[-1] = (bool) 1
0xa1: Push((float)0.25)
0xa2: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0xa3: IF (Stack[-1] == 0) GOTO 0xa9; Pop(1)

0xa4: PushEmpty(bool)
0xa5: Call2 0x275

0xa6: Pop(0)
0xa7: IF (Stack[-1] == 0) GOTO 0xa9; Pop(1)

0xa8: Stack[-1] = (bool) 0
0xa9: IF (Stack[-1] == 0) GOTO 0xba; Pop(1)

0xaa: @ Face(Stack[-0])
0xab: Pop(0)
0xac: PushEmpty()
0xad: Call2 0x2a7

0xae: Pop(0)
0xaf: Push("all")
0xb0: Push("attack_stay")
0xb1: @ PlayAnimation(Stack[-2], Stack[-1])
0xb2: Pop(2)
0xb3: PushEmpty(bool, float)
0xb4: Stack[-1] = Stack[-25]
0xb5: Call2 0x1f1

0xb6: Pop(2)
0xb7: @ StopAsync()
0xb8: Pop(0)
0xb9: GOTO 0xe8

0xba: @ Face(Stack[-0])
0xbb: Pop(0)
0xbc: Push("all")
0xbd: Push("fjump")
0xbe: @ PlayAnimation(Stack[-2], Stack[-1])
0xbf: Pop(2)
0xc0: @ WaitForAnimEnd()
0xc1: Pop(0)
0xc2: PushEmpty()
0xc3: Call2 0x2a0

0xc4: Pop(0)
0xc5: Push(CVector(0.0, 0.0, 0.0))
0xc6: @ SetSpeed(Stack[-1])
0xc7: Pop(1)
0xc8: @ Stop()
0xc9: Pop(0)
0xca: @ StopAsync()
0xcb: Pop(0)
0xcc: PushEmpty(bool)
0xcd: Call2 0x275

0xce: Pop(0)
0xcf: Pop(1); Push((bool) Stack[-1] == 0)
0xd0: IF (Stack[-1] == 0) GOTO 0xe8; Pop(1)

0xd1: PushEmpty(bool, object)
0xd2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd3: Call2 0x4f6

0xd4: Pop(1)
0xd5: Pop(1); Push((bool) Stack[-1] == 0)
0xd6: IF (Stack[-1] == 0) GOTO 0xd8; Pop(1)

0xd7: GOTO 0xf2

0xd8: @@ GetPFPosition(Stack[-10])
0xd9: Pop(0)
0xda: @ GetPFPosition(Stack[-9])
0xdb: Pop(0)
0xdc: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0xdd: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0xde: Pop(0); Push(Stack[-23] * Stack[-23]);
0xdf: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0xe0: IF (Stack[-1] == 0) GOTO 0xe8; Pop(1)

0xe1: PushEmpty(bool, float)
0xe2: Stack[-1] = Stack[-25]
0xe3: Call2 0x14d

0xe4: Pop(1)
0xe5: Pop(1); Push((bool) Stack[-1] == 0)
0xe6: IF (Stack[-1] == 0) GOTO 0xe8; Pop(1)

0xe7: GOTO 0xf2

0xe8: GOTO 0xf1

0xe9: PushEmpty(bool, float)
0xea: Stack[-1] = Stack[-25]
0xeb: Call2 0x14d

0xec: Pop(1)
0xed: Pop(1); Push((bool) Stack[-1] == 0)
0xee: IF (Stack[-1] == 0) GOTO 0xf0; Pop(1)

0xef: GOTO 0xf2

0xf0: Stack[-7] = (bool) 1
0xf1: GOTO 0x46

0xf2: @ WaitForAnimEnd()
0xf3: Pop(0)
0xf4: Push( Stack[3 + Tasks[-1].StackPointer] )
0xf5: IF (Stack[-1] == 0) GOTO 0xf7; Pop(1)

0xf6: Return(); Pop(22)

0xf7: Push("all")
0xf8: Push("attack_off")
0xf9: @ PlayAnimation(Stack[-2], Stack[-1])
0xfa: Pop(2)
0xfb: @ WaitForAnimEnd()
0xfc: Pop(0)
0xfd: Push(Stack[-8])
0xfe: IF (Stack[-1] == 0) GOTO 0x102; Pop(1)

0xff: Push((float)2.0)
0x100: @ Sleep(Stack[-1])
0x101: Pop(1)
0x102: Return(); Pop(22)

0x103: PushEmpty(bool, bool, cvector, bool, bool, cvector)
0x104: Stack[1 + Tasks[-1].StackPointer] = (int)0
0x105: Push("all")
0x106: Push("attack_begin")
0x107: Push((int) 1)
0x108: Pop(1); Push(Stack[1 + StackPtr] + Stack[-1]);
0x109: Pop(2); Push(Stack[-2] + Stack[-1]);
0x10a: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0x10b: Pop(2)
0x10c: Pop(0); Push((bool) Stack[-3] == 0)
0x10d: IF (Stack[-1] == 0) GOTO 0x10f; Pop(1)

0x10e: GOTO 0x112

0x10f: Push((int) 1)
0x110: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x111: GOTO 0x105

0x112: Stack[2 + Tasks[-1].StackPointer] = (int)0
0x113: Push("attack")
0x114: Push((int) 1)
0x115: Pop(1); Push(Stack[2 + StackPtr] + Stack[-1]);
0x116: Pop(2); Push(Stack[-2] + Stack[-1]);
0x117: @ IsExisting3DSound(Stack[-3], Stack[-1])
0x118: Pop(1)
0x119: Pop(0); Push((bool) Stack[-2] == 0)
0x11a: IF (Stack[-1] == 0) GOTO 0x11c; Pop(1)

0x11b: GOTO 0x11f

0x11c: Push((int) 1)
0x11d: Stack[2 + Tasks[-1].StackPointer] = Stack[2 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x11e: GOTO 0x113

0x11f: Push("all")
0x120: Push("bjump")
0x121: @ GetAnimationOffset(Stack[-3], Stack[-2], Stack[-1])
0x122: Pop(2)
0x123: Push(CvectorIndex(Stack[-1], 2))
0x124: Stack[4 + Tasks[-1].StackPointer] = -Stack[-1]; Pop(1);
0x125: Return(); Pop(6)

0x126: PushEmpty(object, float, float, object, float, float)
0x127: Push((float)0.9)
0x128: Pop(1); Push(Stack[-9] * Stack[-1]);
0x129: @ GetVictim(Stack[-1], Stack[-4])
0x12a: Pop(1)
0x12b: @ ReportAttack(Stack[-0])
0x12c: Pop(0)
0x12d: Pop(0); Push((bool) Stack[-3] == Stack[0 + Tasks[-1].StackPointer])
0x12e: IF (Stack[-1] == 0) GOTO 0x14b; Pop(1)

0x12f: PushEmpty(float, object, int)
0x130: Stack[-2] = Stack[-6]
0x131: Stack[-1] = Stack[-10]
0x132: Call2 0x10

0x133: Stack[-5] = Stack[-3]
0x134: Pop(3)
0x135: PushEmpty(float, object, float, int)
0x136: Stack[-3] = Stack[-7]
0x137: Stack[-2] = Stack[-6]
0x138: PushEmpty(int, object, int)
0x139: Stack[-2] = Stack[-10]
0x13a: Stack[-1] = Stack[-14]
0x13b: Call2 0x13

0x13c: Stack[-4] = Stack[-3]
0x13d: Pop(3)
0x13e: Call2 0x484

0x13f: Stack[-5] = Stack[-4]
0x140: Pop(4)
0x141: PushEmpty(int)
0x142: Call2 0x2a5

0x143: Pop(0)
0x144: @ ReportHit(Stack[-0], Stack[-1], Stack[-2], Stack[-3])
0x145: Pop(1)
0x146: PushEmpty(object, float)
0x147: Stack[-2] = Stack[-5]
0x148: Stack[-1] = Stack[-3]
0x149: Call2 0x2ac

0x14a: Pop(2)
0x14b: Return(); Pop(6)

0x14c: Stack[-3] = 0
0x14d: PushEmpty(int, bool, int, string, int, bool, int, string)
0x14e: PushEmpty()
0x14f: Call2 0x2a0

0x150: Pop(0)
0x151: @ irand(Stack[-4], Stack[-1])
0x152: Pop(0)
0x153: Push((int) 1)
0x154: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x155: @ Face(Stack[-0])
0x156: Pop(0)
0x157: Push((bool) 1)
0x158: @ SetAttackState(Stack[-1])
0x159: Pop(1)
0x15a: PushEmpty()
0x15b: Call2 0x62d

0x15c: Pop(0)
0x15d: Push("all")
0x15e: Push("attack_begin")
0x15f: Pop(1); Push(Stack[-1] + Stack[-6]);
0x160: @ PlayAnimation(Stack[-2], Stack[-1])
0x161: Pop(2)
0x162: @ WaitForAnimEnd()
0x163: Pop(0)
0x164: PushEmpty()
0x165: Call2 0x280

0x166: Pop(0)
0x167: PushEmpty(bool, object)
0x168: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x169: Call2 0x4f6

0x16a: Pop(1)
0x16b: Pop(1); Push((bool) Stack[-1] == 0)
0x16c: IF (Stack[-1] == 0) GOTO 0x171; Pop(1)

0x16d: @ StopAsync()
0x16e: Pop(0)
0x16f: Stack[-10] = (bool) 0
0x170: Return(); Pop(8)

0x171: PushEmpty(float, int)
0x172: Stack[-2] = Stack[-11]
0x173: Stack[-1] = Stack[-6]
0x174: Call2 0x126

0x175: Pop(2)
0x176: Push("all")
0x177: Push("attack_middle")
0x178: Pop(1); Push(Stack[-1] + Stack[-6]);
0x179: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0x17a: Pop(2)
0x17b: Push(Stack[-3])
0x17c: IF (Stack[-1] == 0) GOTO 0x1c2; Pop(1)

0x17d: PushEmpty()
0x17e: Call2 0x62d

0x17f: Pop(0)
0x180: Push("all")
0x181: Push("attack_middle")
0x182: Pop(1); Push(Stack[-1] + Stack[-6]);
0x183: @ PlayAnimation(Stack[-2], Stack[-1])
0x184: Pop(2)
0x185: @ WaitForAnimEnd()
0x186: Pop(0)
0x187: PushEmpty()
0x188: Call2 0x2a0

0x189: Pop(0)
0x18a: PushEmpty(bool, object)
0x18b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x18c: Call2 0x4f6

0x18d: Pop(1)
0x18e: Pop(1); Push((bool) Stack[-1] == 0)
0x18f: IF (Stack[-1] == 0) GOTO 0x194; Pop(1)

0x190: @ StopAsync()
0x191: Pop(0)
0x192: Stack[-10] = (bool) 0
0x193: Return(); Pop(8)

0x194: PushEmpty(float, int)
0x195: Stack[-2] = Stack[-11]
0x196: Stack[-1] = Stack[-6]
0x197: Call2 0x126

0x198: Pop(2)
0x199: Stack[-2] = (int) 1
0x19a: Push("attack_middle")
0x19b: Pop(1); Push(Stack[-1] + Stack[-5]);
0x19c: Push("_")
0x19d: Pop(2); Push(Stack[-2] + Stack[-1]);
0x19e: Stack[-2] = Stack[-1] + Stack[-3]; Pop(1);
0x19f: Push("all")
0x1a0: @ HasAnimation(Stack[-4], Stack[-1], Stack[-2])
0x1a1: Pop(1)
0x1a2: Pop(0); Push((bool) Stack[-3] == 0)
0x1a3: IF (Stack[-1] == 0) GOTO 0x1a5; Pop(1)

0x1a4: GOTO 0x1c2

0x1a5: PushEmpty()
0x1a6: Call2 0x62d

0x1a7: Pop(0)
0x1a8: Push("all")
0x1a9: @ PlayAnimation(Stack[-1], Stack[-2])
0x1aa: Pop(1)
0x1ab: @ WaitForAnimEnd()
0x1ac: Pop(0)
0x1ad: PushEmpty()
0x1ae: Call2 0x2a0

0x1af: Pop(0)
0x1b0: PushEmpty(bool, object)
0x1b1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1b2: Call2 0x4f6

0x1b3: Pop(1)
0x1b4: Pop(1); Push((bool) Stack[-1] == 0)
0x1b5: IF (Stack[-1] == 0) GOTO 0x1ba; Pop(1)

0x1b6: @ StopAsync()
0x1b7: Pop(0)
0x1b8: Stack[-10] = (bool) 0
0x1b9: Return(); Pop(8)

0x1ba: PushEmpty(float, int)
0x1bb: Stack[-2] = Stack[-11]
0x1bc: Stack[-1] = Stack[-6]
0x1bd: Call2 0x126

0x1be: Pop(2)
0x1bf: Push((int) 1)
0x1c0: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x1c1: GOTO 0x19a

0x1c2: Push((bool) 0)
0x1c3: @ SetAttackState(Stack[-1])
0x1c4: Pop(1)
0x1c5: Push("all")
0x1c6: Push("attack_end")
0x1c7: Pop(1); Push(Stack[-1] + Stack[-6]);
0x1c8: @ PlayAnimation(Stack[-2], Stack[-1])
0x1c9: Pop(2)
0x1ca: PushEmpty(bool)
0x1cb: Call2 0x2ae

0x1cc: Pop(0)
0x1cd: IF (Stack[-1] == 0) GOTO 0x1d4; Pop(1)

0x1ce: PushEmpty(bool, float)
0x1cf: Stack[-1] = (float) 0.75
0x1d0: Call2 0x1d6

0x1d1: Pop(2)
0x1d2: @ StopAsync()
0x1d3: Pop(0)
0x1d4: Stack[-10] = (bool) 1
0x1d5: Return(); Pop(8)

0x1d6: PushEmpty(float, bool, float, bool)
0x1d7: @ rand(Stack[-2])
0x1d8: Pop(0)
0x1d9: Pop(0); Push((bool) Stack[-2] < Stack[-5])
0x1da: IF (Stack[-1] == 0) GOTO 0x1ea; Pop(1)

0x1db: @ IsAnimationPlaying(Stack[-1])
0x1dc: Pop(0)
0x1dd: Pop(0); Push((bool) Stack[-1] == 0)
0x1de: IF (Stack[-1] == 0) GOTO 0x1e0; Pop(1)

0x1df: GOTO 0x1e9

0x1e0: PushEmpty(bool)
0x1e1: Call2 0x238

0x1e2: Pop(0)
0x1e3: IF (Stack[-1] == 0) GOTO 0x1e6; Pop(1)

0x1e4: Stack[-6] = (bool) 1
0x1e5: Return(); Pop(4)

0x1e6: @ sync()
0x1e7: Pop(0)
0x1e8: GOTO 0x1db

0x1e9: GOTO 0x1ef

0x1ea: @ WaitForAnimEnd()
0x1eb: Pop(0)
0x1ec: PushEmpty()
0x1ed: Call2 0x2a0

0x1ee: Pop(0)
0x1ef: Stack[-6] = (bool) 0
0x1f0: Return(); Pop(4)

0x1f1: PushEmpty(bool, cvector, cvector, cvector, float, bool, cvector, cvector, cvector, float)
0x1f2: @ IsAnimationPlaying(Stack[-5])
0x1f3: Pop(0)
0x1f4: Pop(0); Push((bool) Stack[-5] == 0)
0x1f5: IF (Stack[-1] == 0) GOTO 0x1f7; Pop(1)

0x1f6: GOTO 0x217

0x1f7: PushEmpty(bool)
0x1f8: Call2 0x238

0x1f9: Pop(0)
0x1fa: IF (Stack[-1] == 0) GOTO 0x1fd; Pop(1)

0x1fb: Stack[-12] = (bool) 1
0x1fc: Return(); Pop(10)

0x1fd: PushEmpty(bool, object)
0x1fe: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1ff: Call2 0x4f6

0x200: Pop(1)
0x201: Pop(1); Push((bool) Stack[-1] == 0)
0x202: IF (Stack[-1] == 0) GOTO 0x205; Pop(1)

0x203: Stack[-12] = (bool) 0
0x204: Return(); Pop(10)

0x205: @@ GetPFPosition(Stack[-4])
0x206: Pop(0)
0x207: @ GetPFPosition(Stack[-3])
0x208: Pop(0)
0x209: Stack[-2] = Stack[-4] - Stack[-3]; Pop(0);
0x20a: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x20b: Pop(0); Push(Stack[-11] * Stack[-11]);
0x20c: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x20d: IF (Stack[-1] == 0) GOTO 0x214; Pop(1)

0x20e: PushEmpty(bool, float)
0x20f: Stack[-1] = Stack[-13]
0x210: Call2 0x14d

0x211: Pop(2)
0x212: Stack[-12] = (bool) 1
0x213: Return(); Pop(10)

0x214: @ sync()
0x215: Pop(0)
0x216: GOTO 0x1f2

0x217: PushEmpty()
0x218: Call2 0x2a0

0x219: Pop(0)
0x21a: Stack[-12] = (bool) 0
0x21b: Return(); Pop(10)

0x21c: PushEmpty(cvector, cvector, cvector, float, float, cvector, cvector, cvector, float, float)
0x21d: PushEmpty(bool, object)
0x21e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x21f: Call2 0x4f6

0x220: Pop(1)
0x221: Pop(1); Push((bool) Stack[-1] == 0)
0x222: IF (Stack[-1] == 0) GOTO 0x225; Pop(1)

0x223: Stack[-11] = (bool) 0
0x224: Return(); Pop(10)

0x225: PushEmpty(bool)
0x226: Call2 0x275

0x227: Pop(0)
0x228: IF (Stack[-1] == 0) GOTO 0x236; Pop(1)

0x229: @@ GetPFPosition(Stack[-5])
0x22a: Pop(0)
0x22b: @ GetPFPosition(Stack[-4])
0x22c: Pop(0)
0x22d: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x22e: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x22f: @@ GetAttackDistance(Stack[-1])
0x230: Pop(0)
0x231: Push((int) 50)
0x232: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x233: Pop(0); Push(Stack[-1] * Stack[-1]);
0x234: Stack[-12] = Stack[-3] <= Stack[-1]; Pop(1);
0x235: Return(); Pop(10)

0x236: Stack[-11] = (bool) 0
0x237: Return(); Pop(10)

0x238: PushEmpty(bool)
0x239: Stack[-1] = (bool) 0
0x23a: PushEmpty(bool)
0x23b: Call2 0x21c

0x23c: Pop(0)
0x23d: IF (Stack[-1] == 0) GOTO 0x243; Pop(1)

0x23e: PushEmpty(bool)
0x23f: Call2 0x248

0x240: Pop(0)
0x241: IF (Stack[-1] == 0) GOTO 0x243; Pop(1)

0x242: Stack[-1] = (bool) 1
0x243: IF (Stack[-1] == 0) GOTO 0x246; Pop(1)

0x244: Stack[-1] = (bool) 1
0x245: Return(); Pop(0)

0x246: Stack[-1] = (bool) 0
0x247: Return(); Pop(0)

0x248: PushEmpty(object, bool, float, cvector, cvector, object, bool, float, cvector, cvector)
0x249: @ GetScene(Stack[-5])
0x24a: Pop(0)
0x24b: Stack[-4] = (bool) 0
0x24c: PushEmpty(cvector, object)
0x24d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x24e: Call2 0x456

0x24f: Pop(1)
0x250: Pop(1); Push(( -Stack[-1])
0x251: @ FindDirLength(Stack[-4], Stack[-1], Stack[-4])
0x252: Pop(1)
0x253: Pop(0); Push((bool) Stack[-3] < Stack[4 + Tasks[-1].StackPointer])
0x254: IF (Stack[-1] == 0) GOTO 0x256; Pop(1)

0x255: GOTO 0x272

0x256: @ Face(Stack[-0])
0x257: Pop(0)
0x258: Push("all")
0x259: Push("bjump")
0x25a: @ PlayAnimation(Stack[-2], Stack[-1])
0x25b: Pop(2)
0x25c: @@ GetPFPosition(Stack[-2])
0x25d: Pop(0)
0x25e: @ GetPFPosition(Stack[-1])
0x25f: Pop(0)
0x260: @ WaitForAnimEnd()
0x261: Pop(0)
0x262: PushEmpty()
0x263: Call2 0x2a0

0x264: Pop(0)
0x265: @ StopAsync()
0x266: Pop(0)
0x267: Push(CVector(0.0, 0.0, 0.0))
0x268: @ SetSpeed(Stack[-1])
0x269: Pop(1)
0x26a: Stack[-4] = (bool) 1
0x26b: PushEmpty(bool)
0x26c: Call2 0x21c

0x26d: Pop(0)
0x26e: Pop(1); Push((bool) Stack[-1] == 0)
0x26f: IF (Stack[-1] == 0) GOTO 0x271; Pop(1)

0x270: GOTO 0x272

0x271: GOTO 0x24c

0x272: Stack[-11] = Stack[-4]
0x273: Return(); Pop(10)

0x274: Stack[-5] = 0
0x275: PushEmpty(bool, bool)
0x276: Push("IsAttacking")
0x277: Push((int) 1)
0x278: Pop(2); Push(IsFuncExist(Stack[0 + Tasks[-1].StackPointer], Stack[-2], Stack[-1]))
0x279: IF (Stack[-1] == 0) GOTO 0x27e; Pop(1)

0x27a: @@ IsAttacking(Stack[-1])
0x27b: Pop(0)
0x27c: Stack[-3] = Stack[-1]
0x27d: Return(); Pop(2)

0x27e: Stack[-3] = (bool) 0
0x27f: Return(); Pop(2)

0x280: PushEmpty(float, int, float, int)
0x281: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x282: IF (Stack[-1] == 0) GOTO 0x284; Pop(1)

0x283: Return(); Pop(4)

0x284: Push( Stack[5 + Tasks[-1].StackPointer] )
0x285: IF (Stack[-1] == 0) GOTO 0x28c; Pop(1)

0x286: Push((int) -1)
0x287: Stack[5 + Tasks[-1].StackPointer] = Stack[5 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x288: Push((int) 0)
0x289: Pop(1); Push((bool) Stack[5 + Tasks[-1].StackPointer] > Stack[-1])
0x28a: IF (Stack[-1] == 0) GOTO 0x28c; Pop(1)

0x28b: Return(); Pop(4)

0x28c: @ rand(Stack[-2])
0x28d: Pop(0)
0x28e: PushEmpty(float)
0x28f: Call2 0x2b2

0x290: Pop(0)
0x291: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x292: IF (Stack[-1] == 0) GOTO 0x29f; Pop(1)

0x293: @ irand(Stack[-1], Stack[-2])
0x294: Pop(0)
0x295: Push((int) 1)
0x296: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x297: Push("attack")
0x298: Pop(1); Push(Stack[-1] + Stack[-2]);
0x299: @ Speak(Stack[-1])
0x29a: Pop(1)
0x29b: PushEmpty(int)
0x29c: Call2 0x2b0

0x29d: Stack[5 + Tasks[-1].StackPointer] = Stack[-1]
0x29e: Pop(1)
0x29f: Return(); Pop(4)

0x2a0: PushEmpty(object)
0x2a1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2a2: Call2 0x624

0x2a3: Pop(1)
0x2a4: Return(); Pop(0)

0x2a5: Stack[-1] = (int) 0
0x2a6: Return(); Pop(0)

0x2a7: PushEmpty(string)
0x2a8: Stack[-1] = "attack_stay"
0x2a9: Call2 0x5a2

0x2aa: Pop(1)
0x2ab: Return(); Pop(0)

0x2ac: PushEmpty()
0x2ad: Return(); Pop(0)

0x2ae: Stack[-1] = (bool) 1
0x2af: Return(); Pop(0)

0x2b0: Stack[-1] = (int) 1
0x2b1: Return(); Pop(0)

0x2b2: Stack[-1] = (float) 0.5
0x2b3: Return(); Pop(0)

0x2b4: PushEmpty(object)
0x2b5: Call2 0x5cb

0x2b6: Pop(0)
0x2b7: @ RemoveActor(Stack[-1])
0x2b8: Pop(1)
0x2b9: @ Hold()
0x2ba: Pop(0)
0x2bb: Return(); Pop(0)

0x2bc: PushEmpty(bool, bool, bool, bool)
0x2bd: PushEmpty(object)
0x2be: Stack[-1] = Stack[-10]
0x2bf: Call2 0x624

0x2c0: Pop(1)
0x2c1: Push((int) 1)
0x2c2: Push((int) 5)
0x2c3: @ SetTimer(Stack[-2], Stack[-1])
0x2c4: Pop(2)
0x2c5: @ CanSee(Stack[-2], Stack[-9])
0x2c6: Pop(0)
0x2c7: Push(Stack[-2])
0x2c8: IF (Stack[-1] == 0) GOTO 0x2cf; Pop(1)

0x2c9: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x2ca: PushEmpty(object)
0x2cb: Stack[-1] = Stack[-10]
0x2cc: Call2 0x597

0x2cd: Pop(1)
0x2ce: GOTO 0x2d0

0x2cf: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x2d0: PushEmpty(bool, object)
0x2d1: Stack[-1] = Stack[-11]
0x2d2: Call2 0x45d

0x2d3: Pop(1)
0x2d4: IF (Stack[-1] == 0) GOTO 0x2da; Pop(1)

0x2d5: PushEmpty(object)
0x2d6: Call2 0x5cb

0x2d7: Pop(0)
0x2d8: @ SendPlayerEnemy(Stack[-10], Stack[-1])
0x2d9: Pop(1)
0x2da: PushEmpty(bool, object, float, float, bool, bool)
0x2db: Stack[-5] = Stack[-15]
0x2dc: Stack[-4] = Stack[-14]
0x2dd: Stack[-3] = Stack[-13]
0x2de: Stack[-2] = Stack[-12]
0x2df: Stack[-1] = Stack[-11]
0x2e0: Call2 0x325

0x2e1: Stack[-7] = Stack[-6]
0x2e2: Pop(6)
0x2e3: Push( Stack[2 + Tasks[-1].StackPointer] )
0x2e4: IF (Stack[-1] == 0) GOTO 0x2e8; Pop(1)

0x2e5: Push("head")
0x2e6: @ UnlookAsync(Stack[-1])
0x2e7: Pop(1)
0x2e8: Push((int) 1)
0x2e9: @ KillTimer(Stack[-1])
0x2ea: Pop(1)
0x2eb: Stack[-10] = Stack[-1]
0x2ec: Return(); Pop(4)

0x2ed: PushEmpty()
0x2ee: Push((int) 1)
0x2ef: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2f0: IF (Stack[-1] == 0) GOTO 0x2f6; Pop(1)

0x2f1: PushEmpty(object)
0x2f2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2f3: Call2 0x624

0x2f4: Pop(1)
0x2f5: GOTO 0x2fa

0x2f6: PushEmpty(int)
0x2f7: Stack[-1] = Stack[-2]
0x2f8: Call2 0x38b

0x2f9: Pop(1)
0x2fa: Return(); Pop(0)

0x2fb: Push((int) 1)
0x2fc: @ KillTimer(Stack[-1])
0x2fd: Pop(1)
0x2fe: Push( Stack[2 + Tasks[-1].StackPointer] )
0x2ff: IF (Stack[-1] == 0) GOTO 0x304; Pop(1)

0x300: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x301: Push("head")
0x302: @ UnlookAsync(Stack[-1])
0x303: Pop(1)
0x304: PushEmpty()
0x305: Call2 0x3a1

0x306: Pop(0)
0x307: Return(); Pop(0)

0x308: PushEmpty()
0x309: PushEmpty(bool)
0x30a: Stack[-1] = (bool) 0
0x30b: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0x30c: IF (Stack[-1] == 0) GOTO 0x310; Pop(1)

0x30d: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x30e: IF (Stack[-1] == 0) GOTO 0x310; Pop(1)

0x30f: Stack[-1] = (bool) 1
0x310: IF (Stack[-1] == 0) GOTO 0x316; Pop(1)

0x311: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x312: PushEmpty(object)
0x313: Stack[-1] = Stack[-2]
0x314: Call2 0x597

0x315: Pop(1)
0x316: Return(); Pop(0)

0x317: PushEmpty()
0x318: PushEmpty(bool)
0x319: Stack[-1] = (bool) 0
0x31a: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0x31b: IF (Stack[-1] == 0) GOTO 0x31f; Pop(1)

0x31c: Push( Stack[2 + Tasks[-1].StackPointer] )
0x31d: IF (Stack[-1] == 0) GOTO 0x31f; Pop(1)

0x31e: Stack[-1] = (bool) 1
0x31f: IF (Stack[-1] == 0) GOTO 0x324; Pop(1)

0x320: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x321: Push("head")
0x322: @ UnlookAsync(Stack[-1])
0x323: Pop(1)
0x324: Return(); Pop(0)

0x325: PushEmpty(bool, bool, object, cvector, cvector, cvector, float, object, bool, bool, object, cvector, cvector, cvector, float, object)
0x326: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x327: Stack[1 + Tasks[-1].StackPointer] = Stack[-21]
0x328: Stack[-7] = Stack[-17]
0x329: PushEmpty(bool, object)
0x32a: Stack[-1] = Stack[-23]
0x32b: Call2 0x3b1

0x32c: Pop(1)
0x32d: Pop(1); Push((bool) Stack[-1] == 0)
0x32e: IF (Stack[-1] == 0) GOTO 0x331; Pop(1)

0x32f: Stack[-22] = (bool) 0
0x330: Return(); Pop(16)

0x331: @@ GetPosition(Stack[-5])
0x332: Pop(0)
0x333: @ GetPosition(Stack[-4])
0x334: Pop(0)
0x335: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x336: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x337: PushEmpty(bool)
0x338: Stack[-1] = (bool) 0
0x339: Push((int) 0)
0x33a: Pop(1); Push((bool) Stack[-21] > Stack[-1])
0x33b: IF (Stack[-1] == 0) GOTO 0x340; Pop(1)

0x33c: Pop(0); Push(Stack[-20] * Stack[-20]);
0x33d: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x33e: IF (Stack[-1] == 0) GOTO 0x340; Pop(1)

0x33f: Stack[-1] = (bool) 1
0x340: IF (Stack[-1] == 0) GOTO 0x345; Pop(1)

0x341: @ Stop()
0x342: Pop(0)
0x343: Stack[-22] = (bool) 0
0x344: Return(); Pop(16)

0x345: Pop(0); Push(Stack[-20] * Stack[-20]);
0x346: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x347: IF (Stack[-1] == 0) GOTO 0x383; Pop(1)

0x348: @@ GetPFPosition(Stack[-5])
0x349: Pop(0)
0x34a: @ FindPathTo(Stack[-1], Stack[-5])
0x34b: Pop(0)
0x34c: Pop(0); Push(( Stack[-1] != 0 )
0x34d: IF (Stack[-1] == 0) GOTO 0x350; Pop(1)

0x34e: Stack[-6] = Stack[-1]
0x34f: Stack[-1] = 0
0x350: Pop(0); Push(( Stack[-6] != 0 )
0x351: IF (Stack[-1] == 0) GOTO 0x371; Pop(1)

0x352: Push(Stack[-7])
0x353: IF (Stack[-1] == 0) GOTO 0x35a; Pop(1)

0x354: Stack[-7] = (bool) 0
0x355: @ RotatePath(Stack[-6], Stack[-8])
0x356: Pop(0)
0x357: Pop(0); Push((bool) Stack[-8] == 0)
0x358: IF (Stack[-1] == 0) GOTO 0x35a; Pop(1)

0x359: GOTO 0x389

0x35a: Push((int) 0)
0x35b: Push((float)0.3)
0x35c: @ SetTimer(Stack[-2], Stack[-1])
0x35d: Pop(2)
0x35e: PushEmpty(string)
0x35f: Call2 0x3b8

0x360: Pop(0)
0x361: PushEmpty(string)
0x362: Call2 0x3ba

0x363: Pop(0)
0x364: @ FollowPath(Stack[-8], Stack[-20], Stack[-10], Stack[-2], Stack[-1])
0x365: Pop(2)
0x366: Pop(0); Push((bool) Stack[-8] == 0)
0x367: IF (Stack[-1] == 0) GOTO 0x36f; Pop(1)

0x368: Push( Stack[0 + Tasks[-1].StackPointer] )
0x369: IF (Stack[-1] == 0) GOTO 0x36d; Pop(1)

0x36a: Stack[-6] = 0
0x36b: GOTO 0x389

0x36c: GOTO 0x36e

0x36d: GOTO 0x388

0x36e: GOTO 0x370

0x36f: Stack[-6] = 0
0x370: GOTO 0x381

0x371: Push((int) 0)
0x372: @ KillTimer(Stack[-1])
0x373: Pop(1)
0x374: Push((float)0.5)
0x375: @ Sleep(Stack[-1], Stack[-9])
0x376: Pop(1)
0x377: Pop(0); Push((bool) Stack[-8] == 0)
0x378: IF (Stack[-1] == 0) GOTO 0x37d; Pop(1)

0x379: Push( Stack[0 + Tasks[-1].StackPointer] )
0x37a: IF (Stack[-1] == 0) GOTO 0x37d; Pop(1)

0x37b: Stack[-6] = 0
0x37c: GOTO 0x389

0x37d: Push((int) 0)
0x37e: Push((float)0.3)
0x37f: @ SetTimer(Stack[-2], Stack[-1])
0x380: Pop(2)
0x381: Stack[-1] = 0
0x382: GOTO 0x387

0x383: Push((int) 0)
0x384: @ KillTimer(Stack[-1])
0x385: Pop(1)
0x386: GOTO 0x389

0x387: Stack[-6] = 0
0x388: GOTO 0x329

0x389: Stack[-22] = !Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x38a: Return(); Pop(16)

0x38b: PushEmpty()
0x38c: Push((int) 0)
0x38d: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x38e: IF (Stack[-1] == 0) GOTO 0x390; Pop(1)

0x38f: Return(); Pop(0)

0x390: PushEmpty(bool, object)
0x391: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x392: Call2 0x3b1

0x393: Pop(1)
0x394: Pop(1); Push((bool) Stack[-1] == 0)
0x395: IF (Stack[-1] == 0) GOTO 0x397; Pop(1)

0x396: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x397: Push((int) 0)
0x398: @ KillTimer(Stack[-1])
0x399: Pop(1)
0x39a: @ Stop()
0x39b: Pop(0)
0x39c: Return(); Pop(0)

0x39d: PushEmpty()
0x39e: @ RequestClearPath(Stack[-1])
0x39f: Pop(0)
0x3a0: Return(); Pop(0)

0x3a1: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x3a2: Push((int) 0)
0x3a3: @ KillTimer(Stack[-1])
0x3a4: Pop(1)
0x3a5: @ Stop()
0x3a6: Pop(0)
0x3a7: Return(); Pop(0)

0x3a8: PushEmpty()
0x3a9: PushEmpty()
0x3aa: Call2 0x2fb

0x3ab: Pop(0)
0x3ac: PushEmpty(object)
0x3ad: Stack[-1] = Stack[-2]
0x3ae: Call2 0x669

0x3af: Pop(1)
0x3b0: Return(); Pop(0)

0x3b1: PushEmpty()
0x3b2: PushEmpty(bool, object)
0x3b3: Stack[-1] = Stack[-3]
0x3b4: Call2 0x4f6

0x3b5: Stack[-4] = Stack[-2]
0x3b6: Pop(2)
0x3b7: Return(); Pop(0)

0x3b8: Stack[-1] = "walk"
0x3b9: Return(); Pop(0)

0x3ba: Stack[-1] = "run"
0x3bb: Return(); Pop(0)

0x3bc: PushEmpty(object)
0x3bd: Call2 0x5cb

0x3be: Pop(0)
0x3bf: @ RemoveActor(Stack[-1])
0x3c0: Pop(1)
0x3c1: @ Hold()
0x3c2: Pop(0)
0x3c3: Return(); Pop(0)

0x3c4: PushEmpty()
0x3c5: PushEmpty(object)
0x3c6: Stack[-1] = Stack[-2]
0x3c7: Call2 0x3cd

0x3c8: Pop(1)
0x3c9: @ Hold()
0x3ca: Pop(0)
0x3cb: GOTO 0x3c9

0x3cc: Return(); Pop(0)

0x3cd: PushEmpty(cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector, cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector)
0x3ce: Pop(0); Push((bool) Stack[-21] == 0)
0x3cf: IF (Stack[-1] == 0) GOTO 0x3d5; Pop(1)

0x3d0: PushEmpty(string)
0x3d1: Stack[-1] = "fdie"
0x3d2: Call2 0x428

0x3d3: Pop(1)
0x3d4: GOTO 0x427

0x3d5: @@ GetPosition(Stack[-10])
0x3d6: Pop(0)
0x3d7: @ GetPosition(Stack[-9])
0x3d8: Pop(0)
0x3d9: @ GetDirection(Stack[-8])
0x3da: Pop(0)
0x3db: Stack[-7] = Stack[-9] - Stack[-10]; Pop(0);
0x3dc: Push(CvectorIndex(Stack[-7], 0))
0x3dd: Push(CvectorIndex(Stack[-9], 0))
0x3de: Pop(2); Push(Stack[-2] * Stack[-1]);
0x3df: Push(CvectorIndex(Stack[-8], 2))
0x3e0: Push(CvectorIndex(Stack[-10], 2))
0x3e1: Pop(2); Push(Stack[-2] * Stack[-1]);
0x3e2: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3e3: Push((int) 0)
0x3e4: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x3e5: IF (Stack[-1] == 0) GOTO 0x3e8; Pop(1)

0x3e6: Stack[-6] = "fdie"
0x3e7: GOTO 0x3e9

0x3e8: Stack[-6] = "bdie"
0x3e9: @ RemoveRTEnvelope()
0x3ea: Pop(0)
0x3eb: @ SetDeathState()
0x3ec: Pop(0)
0x3ed: @ Stop()
0x3ee: Pop(0)
0x3ef: @ StopAsync()
0x3f0: Pop(0)
0x3f1: Stack[-5] = Stack[-21]
0x3f2: Push("GetScriptProperty")
0x3f3: Push((int) 2)
0x3f4: Pop(2); Push(IsFuncExist(Stack[-23], Stack[-2], Stack[-1]))
0x3f5: IF (Stack[-1] == 0) GOTO 0x401; Pop(1)

0x3f6: Push("Owner")
0x3f7: @@ HasScriptProperty(Stack[-5], Stack[-1])
0x3f8: Pop(1)
0x3f9: Push(Stack[-4])
0x3fa: IF (Stack[-1] == 0) GOTO 0x401; Pop(1)

0x3fb: Push("Owner")
0x3fc: @@ GetScriptProperty(Stack[-6], Stack[-1])
0x3fd: Pop(1)
0x3fe: Pop(0); Push((bool) Stack[-5] == 0)
0x3ff: IF (Stack[-1] == 0) GOTO 0x401; Pop(1)

0x400: Stack[-5] = Stack[-21]
0x401: Push("@GetEyesHeight")
0x402: Push((int) 1)
0x403: Pop(2); Push(IsFuncExist(Stack[-7], Stack[-2], Stack[-1]))
0x404: IF (Stack[-1] == 0) GOTO 0x410; Pop(1)

0x405: @@ GetEyesHeight(Stack[-2])
0x406: Pop(0)
0x407: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x408: Push(CvectorIndex(Stack[-1], 1))
0x409: Stack[-1] = Stack[-3]
0x40a: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x40b: Push("head")
0x40c: @ LookAsync(Stack[-22], Stack[-1], Stack[-2])
0x40d: Pop(1)
0x40e: Stack[-3] = (bool) 1
0x40f: GOTO 0x411

0x410: Stack[-3] = (bool) 0
0x411: PushEmpty(string)
0x412: Stack[-1] = Stack[-7]
0x413: Call2 0x5a2

0x414: Pop(1)
0x415: Push("all")
0x416: @ PlayAnimation(Stack[-1], Stack[-7])
0x417: Pop(1)
0x418: @ WaitForAnimEnd()
0x419: Pop(0)
0x41a: Push(Stack[-3])
0x41b: IF (Stack[-1] == 0) GOTO 0x421; Pop(1)

0x41c: @ StopAsync()
0x41d: Pop(0)
0x41e: Push("head")
0x41f: @ UnlookAsync(Stack[-1])
0x420: Pop(1)
0x421: Push("all")
0x422: @ LockAnimationEnd(Stack[-1], Stack[-7])
0x423: Pop(1)
0x424: @ RemoveEnvelope()
0x425: Pop(0)
0x426: Stack[-5] = 0
0x427: Return(); Pop(20)

0x428: PushEmpty()
0x429: @ RemoveRTEnvelope()
0x42a: Pop(0)
0x42b: @ SetDeathState()
0x42c: Pop(0)
0x42d: @ Stop()
0x42e: Pop(0)
0x42f: @ StopAsync()
0x430: Pop(0)
0x431: @ StopSecondaryAnimation()
0x432: Pop(0)
0x433: PushEmpty(string)
0x434: Stack[-1] = Stack[-2]
0x435: Call2 0x5a2

0x436: Pop(1)
0x437: Push("all")
0x438: @ PlayAnimation(Stack[-1], Stack[-2])
0x439: Pop(1)
0x43a: @ WaitForAnimEnd()
0x43b: Pop(0)
0x43c: Push("all")
0x43d: @ LockAnimationEnd(Stack[-1], Stack[-2])
0x43e: Pop(1)
0x43f: @ RemoveEnvelope()
0x440: Pop(0)
0x441: Return(); Pop(0)

0x442: PushEmpty()
0x443: Return(); Pop(0)

0x444: PushEmpty()
0x445: Return(); Pop(0)

0x446: PushEmpty()
0x447: Return(); Pop(0)

0x448: PushEmpty()
0x449: Push((int) 2)
0x44a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x44b: IF (Stack[-1] == 0) GOTO 0x44f; Pop(1)

0x44c: Stack[-2] = "fire"
0x44d: Return(); Pop(0)

0x44e: GOTO 0x454

0x44f: Push((int) 1)
0x450: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x451: IF (Stack[-1] == 0) GOTO 0x454; Pop(1)

0x452: Stack[-2] = "bullet"
0x453: Return(); Pop(0)

0x454: Stack[-2] = "phys"
0x455: Return(); Pop(0)

0x456: PushEmpty(cvector, cvector, cvector, cvector)
0x457: @ GetPosition(Stack[-2])
0x458: Pop(0)
0x459: @@ GetPosition(Stack[-1])
0x45a: Pop(0)
0x45b: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x45c: Return(); Pop(4)

0x45d: PushEmpty(bool, bool)
0x45e: @ IsPlayerActor(Stack[-3], Stack[-1])
0x45f: Pop(0)
0x460: Stack[-4] = Stack[-1]
0x461: Return(); Pop(2)

0x462: PushEmpty(bool, bool)
0x463: Push("HasProperty")
0x464: Push((int) 2)
0x465: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x466: Pop(1); Push((bool) Stack[-1] == 0)
0x467: IF (Stack[-1] == 0) GOTO 0x46a; Pop(1)

0x468: Stack[-5] = (bool) 0
0x469: Return(); Pop(2)

0x46a: @@ HasProperty(Stack[-3], Stack[-1])
0x46b: Pop(0)
0x46c: Stack[-5] = Stack[-1]
0x46d: Return(); Pop(2)

0x46e: PushEmpty(float, float)
0x46f: PushEmpty(bool, object, string)
0x470: Stack[-2] = Stack[-10]
0x471: Stack[-1] = Stack[-9]
0x472: Call2 0x462

0x473: Pop(2)
0x474: Pop(1); Push((bool) Stack[-1] == 0)
0x475: IF (Stack[-1] == 0) GOTO 0x478; Pop(1)

0x476: Stack[-8] = (bool) 0
0x477: Return(); Pop(2)

0x478: @@ GetProperty(Stack[-6], Stack[-1])
0x479: Pop(0)
0x47a: PushEmpty(float, float, float, float)
0x47b: Stack[-3] = Stack[-5] + Stack[-9]; Pop(0);
0x47c: Stack[-2] = Stack[-8]
0x47d: Stack[-1] = Stack[-7]
0x47e: Call2 0x5e2

0x47f: Pop(3)
0x480: @@ SetProperty(Stack[-7], Stack[-1])
0x481: Pop(1)
0x482: Stack[-8] = (bool) 1
0x483: Return(); Pop(2)

0x484: PushEmpty(int, string, int, float, float, float, int, string, int, float, float, float)
0x485: PushEmpty(bool, object, string)
0x486: Stack[-2] = Stack[-18]
0x487: Stack[-1] = "health"
0x488: Call2 0x462

0x489: Pop(2)
0x48a: Pop(1); Push((bool) Stack[-1] == 0)
0x48b: IF (Stack[-1] == 0) GOTO 0x48e; Pop(1)

0x48c: Stack[-16] = (float) 0.0
0x48d: Return(); Pop(12)

0x48e: PushEmpty(bool, object, string)
0x48f: Stack[-2] = Stack[-18]
0x490: Stack[-1] = "armor"
0x491: Call2 0x462

0x492: Pop(2)
0x493: Pop(1); Push((bool) Stack[-1] == 0)
0x494: IF (Stack[-1] == 0) GOTO 0x497; Pop(1)

0x495: Stack[-6] = (int) 0
0x496: GOTO 0x49a

0x497: Push("armor")
0x498: @@ GetProperty(Stack[-1], Stack[-7])
0x499: Pop(1)
0x49a: Push("armor_")
0x49b: PushEmpty(string, int)
0x49c: Stack[-1] = Stack[-16]
0x49d: Call2 0x448

0x49e: Pop(1)
0x49f: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x4a0: PushEmpty(bool, object, string)
0x4a1: Stack[-2] = Stack[-18]
0x4a2: Stack[-1] = Stack[-8]
0x4a3: Call2 0x462

0x4a4: Pop(2)
0x4a5: Pop(1); Push((bool) Stack[-1] == 0)
0x4a6: IF (Stack[-1] == 0) GOTO 0x4a9; Pop(1)

0x4a7: Stack[-4] = (int) 0
0x4a8: GOTO 0x4ab

0x4a9: @@ GetProperty(Stack[-5], Stack[-4])
0x4aa: Pop(0)
0x4ab: PushEmpty(float, float, float)
0x4ac: Pop(0); Push(Stack[-9] + Stack[-7]);
0x4ad: Push((float)100.0)
0x4ae: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0x4af: Stack[-1] = (int) 1
0x4b0: Call2 0x5db

0x4b1: Stack[-6] = Stack[-3]
0x4b2: Pop(3)
0x4b3: Push("health")
0x4b4: @@ GetProperty(Stack[-1], Stack[-3])
0x4b5: Pop(1)
0x4b6: Push((int) 1)
0x4b7: Pop(1); Push(Stack[-1] - Stack[-4]);
0x4b8: Stack[-2] = Stack[-15] * Stack[-1]; Pop(1);
0x4b9: Push("health")
0x4ba: PushEmpty(float, float, float, float)
0x4bb: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0x4bc: Stack[-2] = (int) 0
0x4bd: Stack[-1] = (int) 1
0x4be: Call2 0x5e2

0x4bf: Pop(3)
0x4c0: @@ SetProperty(Stack[-2], Stack[-1])
0x4c1: Pop(2)
0x4c2: PushEmpty(bool, object)
0x4c3: Stack[-1] = Stack[-17]
0x4c4: Call2 0x45d

0x4c5: Pop(1)
0x4c6: IF (Stack[-1] == 0) GOTO 0x4cb; Pop(1)

0x4c7: PushEmpty(float)
0x4c8: Stack[-1] = -Stack[-2]; Pop(0);
0x4c9: Call2 0x610

0x4ca: Pop(1)
0x4cb: Stack[-16] = Stack[-1]
0x4cc: Return(); Pop(12)

0x4cd: PushEmpty(bool, bool)
0x4ce: @@ IsDead(Stack[-1])
0x4cf: Pop(0)
0x4d0: Stack[-4] = Stack[-1]
0x4d1: Return(); Pop(2)

0x4d2: PushEmpty(object, object, object, object)
0x4d3: Pop(0); Push((bool) Stack[-5] == 0)
0x4d4: IF (Stack[-1] == 0) GOTO 0x4d7; Pop(1)

0x4d5: Stack[-6] = (bool) 0
0x4d6: Return(); Pop(4)

0x4d7: PushEmpty(bool)
0x4d8: Stack[-1] = (bool) 0
0x4d9: Push("IsDead")
0x4da: Push((int) 1)
0x4db: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x4dc: IF (Stack[-1] == 0) GOTO 0x4e3; Pop(1)

0x4dd: PushEmpty(bool, object)
0x4de: Stack[-1] = Stack[-8]
0x4df: Call2 0x4cd

0x4e0: Pop(1)
0x4e1: IF (Stack[-1] == 0) GOTO 0x4e3; Pop(1)

0x4e2: Stack[-1] = (bool) 1
0x4e3: IF (Stack[-1] == 0) GOTO 0x4e6; Pop(1)

0x4e4: Stack[-6] = (bool) 0
0x4e5: Return(); Pop(4)

0x4e6: @ GetScene(Stack[-2])
0x4e7: Pop(0)
0x4e8: Pop(0); Push((bool) Stack[-2] == 0)
0x4e9: IF (Stack[-1] == 0) GOTO 0x4ec; Pop(1)

0x4ea: Stack[-6] = (bool) 0
0x4eb: Return(); Pop(4)

0x4ec: @@ GetScene(Stack[-1])
0x4ed: Pop(0)
0x4ee: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x4ef: IF (Stack[-1] == 0) GOTO 0x4f2; Pop(1)

0x4f0: Stack[-6] = (bool) 0
0x4f1: Return(); Pop(4)

0x4f2: Stack[-6] = (bool) 1
0x4f3: Return(); Pop(4)

0x4f4: Stack[-1] = 0
0x4f5: Stack[-2] = 0
0x4f6: PushEmpty(int, int)
0x4f7: PushEmpty(bool, object)
0x4f8: Stack[-1] = Stack[-5]
0x4f9: Call2 0x4d2

0x4fa: Pop(1)
0x4fb: Pop(1); Push((bool) Stack[-1] == 0)
0x4fc: IF (Stack[-1] == 0) GOTO 0x4ff; Pop(1)

0x4fd: Stack[-4] = (bool) 0
0x4fe: Return(); Pop(2)

0x4ff: PushEmpty(bool, object, string)
0x500: Stack[-2] = Stack[-6]
0x501: Stack[-1] = "noaccess"
0x502: Call2 0x462

0x503: Pop(2)
0x504: Pop(1); Push((bool) Stack[-1] == 0)
0x505: IF (Stack[-1] == 0) GOTO 0x508; Pop(1)

0x506: Stack[-4] = (bool) 1
0x507: Return(); Pop(2)

0x508: Push("noaccess")
0x509: @@ GetProperty(Stack[-1], Stack[-2])
0x50a: Pop(1)
0x50b: Push((int) 0)
0x50c: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x50d: Return(); Pop(2)

0x50e: PushEmpty(bool, int, cvector, cvector, cvector, cvector, string, bool, int, cvector, cvector, cvector, cvector, string)
0x50f: Pop(0); Push((bool) Stack[-15] == 0)
0x510: IF (Stack[-1] == 0) GOTO 0x512; Pop(1)

0x511: Return(); Pop(14)

0x512: @ IsDead(Stack[-7])
0x513: Pop(0)
0x514: Push(Stack[-7])
0x515: IF (Stack[-1] == 0) GOTO 0x517; Pop(1)

0x516: Return(); Pop(14)

0x517: @ GetSecondaryAnimationType(Stack[-6])
0x518: Pop(0)
0x519: Push((int) 0)
0x51a: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x51b: IF (Stack[-1] == 0) GOTO 0x51d; Pop(1)

0x51c: Return(); Pop(14)

0x51d: @@ GetPosition(Stack[-5])
0x51e: Pop(0)
0x51f: @ GetPosition(Stack[-4])
0x520: Pop(0)
0x521: @ GetDirection(Stack[-3])
0x522: Pop(0)
0x523: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0x524: Push(CvectorIndex(Stack[-2], 0))
0x525: Push(CvectorIndex(Stack[-4], 0))
0x526: Pop(2); Push(Stack[-2] * Stack[-1]);
0x527: Push(CvectorIndex(Stack[-3], 2))
0x528: Push(CvectorIndex(Stack[-5], 2))
0x529: Pop(2); Push(Stack[-2] * Stack[-1]);
0x52a: Pop(2); Push(Stack[-2] + Stack[-1]);
0x52b: Push((int) 0)
0x52c: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x52d: IF (Stack[-1] == 0) GOTO 0x530; Pop(1)

0x52e: Stack[-1] = "fhit"
0x52f: GOTO 0x531

0x530: Stack[-1] = "bhit"
0x531: Push("hit_react")
0x532: Push("1")
0x533: Pop(1); Push(Stack[-3] + Stack[-1]);
0x534: Push("2")
0x535: Pop(1); Push(Stack[-4] + Stack[-1]);
0x536: Push((int) -10)
0x537: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x538: Pop(4)
0x539: Return(); Pop(14)

0x53a: PushEmpty(cvector, object, int, bool, cvector, cvector, int, int, cvector, cvector, object, int, bool, cvector, cvector, int, int, cvector)
0x53b: PushEmpty(bool)
0x53c: Stack[-1] = (bool) 0
0x53d: PushEmpty(bool)
0x53e: Stack[-1] = (bool) 0
0x53f: Push(Stack[-23])
0x540: IF (Stack[-1] == 0) GOTO 0x545; Pop(1)

0x541: Push((int) 4)
0x542: Pop(1); Push((bool) Stack[-23] != Stack[-1])
0x543: IF (Stack[-1] == 0) GOTO 0x545; Pop(1)

0x544: Stack[-1] = (bool) 1
0x545: IF (Stack[-1] == 0) GOTO 0x54a; Pop(1)

0x546: Push((int) 5)
0x547: Pop(1); Push((bool) Stack[-22] != Stack[-1])
0x548: IF (Stack[-1] == 0) GOTO 0x54a; Pop(1)

0x549: Stack[-1] = (bool) 1
0x54a: IF (Stack[-1] == 0) GOTO 0x579; Pop(1)

0x54b: PushEmpty(cvector, cvector)
0x54c: PushEmpty(cvector, object)
0x54d: Stack[-1] = Stack[-25]
0x54e: Call2 0x456

0x54f: Stack[-3] = Stack[-2]
0x550: Pop(2)
0x551: Call2 0x5d1

0x552: Stack[-11] = Stack[-2]
0x553: Pop(2)
0x554: @ CreateVectorVector(Stack[-8])
0x555: Pop(0)
0x556: Stack[-7] = (int) 1
0x557: Push("hit")
0x558: Pop(1); Push(Stack[-1] + Stack[-8]);
0x559: @ GetGeometryLocator(Stack[-1], Stack[-7], Stack[-6], Stack[-5])
0x55a: Pop(1)
0x55b: Pop(0); Push((bool) Stack[-6] == 0)
0x55c: IF (Stack[-1] == 0) GOTO 0x55e; Pop(1)

0x55d: GOTO 0x567

0x55e: Pop(0); Push(Stack[-4] | Stack[-9]);
0x55f: Push((float)0.70711)
0x560: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x561: IF (Stack[-1] == 0) GOTO 0x564; Pop(1)

0x562: @@ add(Stack[-5])
0x563: Pop(0)
0x564: Push((int) 1)
0x565: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x566: GOTO 0x557

0x567: @@ size(Stack[-3])
0x568: Pop(0)
0x569: Push(Stack[-3])
0x56a: IF (Stack[-1] == 0) GOTO 0x578; Pop(1)

0x56b: @ irand(Stack[-2], Stack[-3])
0x56c: Pop(0)
0x56d: @@ get(Stack[-1], Stack[-2])
0x56e: Pop(0)
0x56f: PushEmpty(object, int, float, cvector, cvector)
0x570: Stack[-5] = Stack[-26]
0x571: Stack[-4] = Stack[-25]
0x572: Stack[-3] = Stack[-24]
0x573: Stack[-2] = Stack[-6]
0x574: Stack[-1] = -Stack[-14]; Pop(0);
0x575: Call2 0x57e

0x576: Pop(5)
0x577: Return(); Pop(18)

0x578: Stack[-8] = 0
0x579: PushEmpty(object)
0x57a: Stack[-1] = Stack[-22]
0x57b: Call2 0x50e

0x57c: Pop(1)
0x57d: Return(); Pop(18)

0x57e: PushEmpty(object, object, object, object)
0x57f: @ GetScene(Stack[-2])
0x580: Pop(0)
0x581: Push("scripted")
0x582: Push("blood_dir.xml")
0x583: @ AddActorByType(Stack[-3], Stack[-2], Stack[-4], Stack[-8], Stack[-7], Stack[-1])
0x584: Pop(2)
0x585: PushEmpty(object)
0x586: Stack[-1] = Stack[-10]
0x587: Call2 0x50e

0x588: Pop(1)
0x589: Return(); Pop(4)

0x58a: Stack[-1] = 0
0x58b: Stack[-2] = 0
0x58c: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x58d: @@ GetPosition(Stack[-3])
0x58e: Pop(0)
0x58f: @ GetPosition(Stack[-2])
0x590: Pop(0)
0x591: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0x592: Push(CvectorIndex(Stack[-1], 0))
0x593: Push(CvectorIndex(Stack[-2], 2))
0x594: @ RotateAsync(Stack[-2], Stack[-1])
0x595: Pop(2)
0x596: Return(); Pop(6)

0x597: PushEmpty(float, cvector, float, cvector)
0x598: @@ GetEyesHeight(Stack[-2])
0x599: Pop(0)
0x59a: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x59b: Push(CvectorIndex(Stack[-1], 1))
0x59c: Stack[-1] = Stack[-3]
0x59d: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x59e: Push("head")
0x59f: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x5a0: Pop(1)
0x5a1: Return(); Pop(4)

0x5a2: PushEmpty(bool, int, bool, int, bool, float, cvector, cvector, bool, int, bool, int, bool, float, cvector, cvector)
0x5a3: @ IsExisting3DSound(Stack[-8], Stack[-17])
0x5a4: Pop(0)
0x5a5: Pop(0); Push((bool) Stack[-8] == 0)
0x5a6: IF (Stack[-1] == 0) GOTO 0x5bb; Pop(1)

0x5a7: Stack[-7] = (int) 0
0x5a8: Push((int) 1)
0x5a9: Pop(1); Push(Stack[-8] + Stack[-1]);
0x5aa: Pop(1); Push(Stack[-18] + Stack[-1]);
0x5ab: @ IsExisting3DSound(Stack[-7], Stack[-1])
0x5ac: Pop(1)
0x5ad: Pop(0); Push((bool) Stack[-6] == 0)
0x5ae: IF (Stack[-1] == 0) GOTO 0x5b0; Pop(1)

0x5af: GOTO 0x5b3

0x5b0: Push((int) 1)
0x5b1: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x5b2: GOTO 0x5a8

0x5b3: Pop(0); Push((bool) Stack[-7] == 0)
0x5b4: IF (Stack[-1] == 0) GOTO 0x5b6; Pop(1)

0x5b5: Return(); Pop(16)

0x5b6: @ irand(Stack[-5], Stack[-7])
0x5b7: Pop(0)
0x5b8: Push((int) 1)
0x5b9: Pop(1); Push(Stack[-6] + Stack[-1]);
0x5ba: Stack[-18] = Stack[-18] + Stack[-1]; Pop(1);
0x5bb: @ Is3DSoundLoaded(Stack[-4], Stack[-17])
0x5bc: Pop(0)
0x5bd: Push(Stack[-4])
0x5be: IF (Stack[-1] == 0) GOTO 0x5ca; Pop(1)

0x5bf: @ GetEyesHeight(Stack[-3])
0x5c0: Pop(0)
0x5c1: @ GetDirection(Stack[-2])
0x5c2: Pop(0)
0x5c3: Push((int) 50)
0x5c4: Stack[-2] = Stack[-3] * Stack[-1]; Pop(1);
0x5c5: Push(CvectorIndex(Stack[-1], 1))
0x5c6: Stack[-1] = Stack[-1] + Stack[-4]; Pop(0);
0x5c7: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x5c8: @ PlayGlobalSound(Stack[-17], Stack[-1])
0x5c9: Pop(0)
0x5ca: Return(); Pop(16)

0x5cb: PushEmpty(object, object)
0x5cc: @ self(Stack[-1])
0x5cd: Pop(0)
0x5ce: Stack[-3] = Stack[-1]
0x5cf: Return(); Pop(2)

0x5d0: Stack[-1] = 0
0x5d1: PushEmpty(float, float)
0x5d2: Pop(0); Push(Stack[-3] | Stack[-3]);
0x5d3: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x5d4: Push((float)0.0)
0x5d5: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x5d6: IF (Stack[-1] == 0) GOTO 0x5d9; Pop(1)

0x5d7: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x5d8: Return(); Pop(2)

0x5d9: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x5da: Return(); Pop(2)

0x5db: PushEmpty()
0x5dc: Pop(0); Push((bool) Stack[-2] < Stack[-1])
0x5dd: IF (Stack[-1] == 0) GOTO 0x5e0; Pop(1)

0x5de: Stack[-3] = Stack[-2]
0x5df: GOTO 0x5e1

0x5e0: Stack[-3] = Stack[-1]
0x5e1: Return(); Pop(0)

0x5e2: PushEmpty()
0x5e3: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x5e4: IF (Stack[-1] == 0) GOTO 0x5e7; Pop(1)

0x5e5: Stack[-4] = Stack[-2]
0x5e6: Return(); Pop(0)

0x5e7: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x5e8: IF (Stack[-1] == 0) GOTO 0x5eb; Pop(1)

0x5e9: Stack[-4] = Stack[-1]
0x5ea: Return(); Pop(0)

0x5eb: Stack[-4] = Stack[-3]
0x5ec: Return(); Pop(0)

0x5ed: PushEmpty()
0x5ee: Pop(0); Push((bool) Stack[-2] == 0)
0x5ef: IF (Stack[-1] == 0) GOTO 0x5f2; Pop(1)

0x5f0: Stack[-3] = (bool) 0
0x5f1: Return(); Pop(0)

0x5f2: Push((int) 0)
0x5f3: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x5f4: IF (Stack[-1] == 0) GOTO 0x5f9; Pop(1)

0x5f5: Push((int) 8)
0x5f6: @ SendWorldWndMessage(Stack[-1])
0x5f7: Pop(1)
0x5f8: GOTO 0x602

0x5f9: Push((int) 0)
0x5fa: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x5fb: IF (Stack[-1] == 0) GOTO 0x600; Pop(1)

0x5fc: Push((int) 9)
0x5fd: @ SendWorldWndMessage(Stack[-1])
0x5fe: Pop(1)
0x5ff: GOTO 0x602

0x600: Stack[-3] = (bool) 0
0x601: Return(); Pop(0)

0x602: PushEmpty(float)
0x603: Stack[-1] = Stack[-2]
0x604: Call2 0x61a

0x605: Pop(1)
0x606: PushEmpty(bool, object, string, float, float, float)
0x607: Stack[-5] = Stack[-8]
0x608: Stack[-4] = "reputation"
0x609: Stack[-3] = Stack[-7]
0x60a: Stack[-2] = (int) 0
0x60b: Stack[-1] = (int) 1
0x60c: Call2 0x46e

0x60d: Pop(6)
0x60e: Stack[-3] = (bool) 1
0x60f: Return(); Pop(0)

0x610: PushEmpty(object, object)
0x611: @ CreateFloatVector(Stack[-1])
0x612: Pop(0)
0x613: @@ add(Stack[-3])
0x614: Pop(0)
0x615: Push((int) 15)
0x616: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x617: Pop(1)
0x618: Return(); Pop(2)

0x619: Stack[-1] = 0
0x61a: PushEmpty(object, object)
0x61b: @ CreateFloatVector(Stack[-1])
0x61c: Pop(0)
0x61d: @@ add(Stack[-3])
0x61e: Pop(0)
0x61f: Push((int) 16)
0x620: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x621: Pop(1)
0x622: Return(); Pop(2)

0x623: Stack[-1] = 0
0x624: PushEmpty(bool, bool)
0x625: @ IsPlayerActor(Stack[-3], Stack[-1])
0x626: Pop(0)
0x627: Push(Stack[-1])
0x628: IF (Stack[-1] == 0) GOTO 0x62c; Pop(1)

0x629: Push("attack")
0x62a: @ PlayGlobalMusic(Stack[-1])
0x62b: Pop(1)
0x62c: Return(); Pop(2)

0x62d: PushEmpty(object, object)
0x62e: @ GetScene(Stack[-1])
0x62f: Pop(0)
0x630: Push("battle")
0x631: PushEmpty(object)
0x632: Call2 0x5cb

0x633: Pop(0)
0x634: @ BroadcastMessage(Stack[-2], Stack[-1], Stack[-3])
0x635: Pop(2)
0x636: Return(); Pop(2)

0x637: Stack[-1] = 0
0x638: PushEmpty()
0x639: PushEmpty(bool, object)
0x63a: Stack[-1] = Stack[-3]
0x63b: Call2 0x45d

0x63c: Pop(1)
0x63d: IF (Stack[-1] == 0) GOTO 0x643; Pop(1)

0x63e: PushEmpty(bool, object, float)
0x63f: Stack[-2] = Stack[-4]
0x640: Stack[-1] = (float) 0.02
0x641: Call2 0x5ed

0x642: Pop(3)
0x643: PushEmpty(object)
0x644: Stack[-1] = Stack[-2]
0x645: Push(-1, 0); TaskCall(2)
0x646: Call2 0x3c4

0x647: Pop(-1, 0); TaskReturn
0x648: Pop(1)
0x649: Return(); Pop(0)

0x64a: PushEmpty()
0x64b: PushEmpty(object, int, float)
0x64c: Stack[-3] = Stack[-7]
0x64d: Stack[-2] = Stack[-6]
0x64e: Stack[-1] = Stack[-5]
0x64f: Call2 0x53a

0x650: Pop(3)
0x651: Return(); Pop(0)

0x652: PushEmpty()
0x653: PushEmpty(object, int, float, cvector, cvector)
0x654: Stack[-5] = Stack[-11]
0x655: Stack[-4] = Stack[-10]
0x656: Stack[-3] = Stack[-9]
0x657: Stack[-2] = Stack[-7]
0x658: Stack[-1] = Stack[-6]
0x659: Call2 0x57e

0x65a: Pop(5)
0x65b: Return(); Pop(0)

0x65c: PushEmpty(float, float)
0x65d: Push("health")
0x65e: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x65f: IF (Stack[-1] == 0) GOTO 0x668; Pop(1)

0x660: Push("health")
0x661: @ GetProperty(Stack[-1], Stack[-2])
0x662: Pop(1)
0x663: Push((int) 0)
0x664: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x665: IF (Stack[-1] == 0) GOTO 0x668; Pop(1)

0x666: @ SignalDeath(Stack[-4])
0x667: Pop(0)
0x668: Return(); Pop(2)

0x669: PushEmpty()
0x66a: PushEmpty(object)
0x66b: Stack[-1] = Stack[-2]
0x66c: Call2 0x638

0x66d: Pop(1)
0x66e: Return(); Pop(0)

