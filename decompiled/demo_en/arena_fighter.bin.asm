GlobalVarCount = 0

Strings:
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
	all
	player
	@GetAttackDistance
	GetAttackDistance
	attack
	GetPFPosition
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
	walk
	run
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
	GetPosition (1 args)
	GetDirection (1 args)
	RemoveRTEnvelope (0 args)
	SetDeathState (0 args)
	Stop (0 args)
	StopAsync (0 args)
	LookAsync (3 args)
	PlayAnimation (2 args)
	WaitForAnimEnd (0 args)
	UnlookAsync (1 args)
	LockAnimationEnd (2 args)
	RemoveEnvelope (0 args)
	StopSecondaryAnimation (0 args)
	SensePlayerOnly (1 args)
	Sleep (1 args)
	FindActor (2 args)
	IsPlayerActor (2 args)
	PlayGlobalMusic (1 args)
	SendPlayerEnemy (2 args)
	GetPFPosition (1 args)
	CanReachByPF (2 args)
	rand (1 args)
	Face (1 args)
	SetSpeed (1 args)
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
	KillTimer (1 args)
	FindPathTo (2 args)
	RotatePath (2 args)
	FollowPath (5 args)
	Sleep (2 args)
	RequestClearPath (1 args)
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

RunOp = 0x84
RunTask = 1

GlobalTasks: 
	GTASK_0  Params = 1
		EVENT_22 Op = 0x7e Vars = (object, int, float, float)
		EVENT_16 Op = 0x80 Vars = (object, string)
		EVENT_41 Op = 0x82 Vars = (object)
	GTASK_1 Vars = (object, int, int, bool, float, int) Params = 0
	GTASK_2 Vars = (bool, object, bool) Params = 6
		EVENT_7 Op = 0x371 Vars = (int)
		EVENT_1 Op = 0x38c Vars = (object)
		EVENT_2 Op = 0x39b Vars = (object)
		EVENT_10 Op = 0x421 Vars = (object)
		EVENT_41 Op = 0x42c Vars = (object)

Events:
EVENT_22 Op = 0x5d6 Vars = (object, int, float, float)
EVENT_43 Op = 0x5de Vars = (object, int, float, float, cvector, cvector)
EVENT_16 Op = 0x5e8 Vars = (object, string)
EVENT_41 Op = 0x5f5 Vars = (object)

0x0: PushEmpty()
0x1: PushEmpty(object)
0x2: Stack[-1] = Stack[-2]
0x3: Call2 0x9

0x4: Pop(1)
0x5: @ Hold()
0x6: Pop(0)
0x7: GOTO 0x5

0x8: Return(); Pop(0)

0x9: PushEmpty(cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector, cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector)
0xa: Pop(0); Push((bool) Stack[-21] == 0)
0xb: IF (Stack[-1] == 0) GOTO 0x11; Pop(1)

0xc: PushEmpty(string)
0xd: Stack[-1] = "fdie"
0xe: Call2 0x64

0xf: Pop(1)
0x10: GOTO 0x63

0x11: @@ GetPosition(Stack[-10])
0x12: Pop(0)
0x13: @ GetPosition(Stack[-9])
0x14: Pop(0)
0x15: @ GetDirection(Stack[-8])
0x16: Pop(0)
0x17: Stack[-7] = Stack[-9] - Stack[-10]; Pop(0);
0x18: Push(CvectorIndex(Stack[-7], 0))
0x19: Push(CvectorIndex(Stack[-9], 0))
0x1a: Pop(2); Push(Stack[-2] * Stack[-1]);
0x1b: Push(CvectorIndex(Stack[-8], 2))
0x1c: Push(CvectorIndex(Stack[-10], 2))
0x1d: Pop(2); Push(Stack[-2] * Stack[-1]);
0x1e: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1f: Push((int) 0)
0x20: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x21: IF (Stack[-1] == 0) GOTO 0x24; Pop(1)

0x22: Stack[-6] = "fdie"
0x23: GOTO 0x25

0x24: Stack[-6] = "bdie"
0x25: @ RemoveRTEnvelope()
0x26: Pop(0)
0x27: @ SetDeathState()
0x28: Pop(0)
0x29: @ Stop()
0x2a: Pop(0)
0x2b: @ StopAsync()
0x2c: Pop(0)
0x2d: Stack[-5] = Stack[-21]
0x2e: Push("GetScriptProperty")
0x2f: Push((int) 2)
0x30: Pop(2); Push(IsFuncExist(Stack[-23], Stack[-2], Stack[-1]))
0x31: IF (Stack[-1] == 0) GOTO 0x3d; Pop(1)

0x32: Push("Owner")
0x33: @@ HasScriptProperty(Stack[-5], Stack[-1])
0x34: Pop(1)
0x35: Push(Stack[-4])
0x36: IF (Stack[-1] == 0) GOTO 0x3d; Pop(1)

0x37: Push("Owner")
0x38: @@ GetScriptProperty(Stack[-6], Stack[-1])
0x39: Pop(1)
0x3a: Pop(0); Push((bool) Stack[-5] == 0)
0x3b: IF (Stack[-1] == 0) GOTO 0x3d; Pop(1)

0x3c: Stack[-5] = Stack[-21]
0x3d: Push("@GetEyesHeight")
0x3e: Push((int) 1)
0x3f: Pop(2); Push(IsFuncExist(Stack[-7], Stack[-2], Stack[-1]))
0x40: IF (Stack[-1] == 0) GOTO 0x4c; Pop(1)

0x41: @@ GetEyesHeight(Stack[-2])
0x42: Pop(0)
0x43: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x44: Push(CvectorIndex(Stack[-1], 1))
0x45: Stack[-1] = Stack[-3]
0x46: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x47: Push("head")
0x48: @ LookAsync(Stack[-22], Stack[-1], Stack[-2])
0x49: Pop(1)
0x4a: Stack[-3] = (bool) 1
0x4b: GOTO 0x4d

0x4c: Stack[-3] = (bool) 0
0x4d: PushEmpty(string)
0x4e: Stack[-1] = Stack[-7]
0x4f: Call2 0x565

0x50: Pop(1)
0x51: Push("all")
0x52: @ PlayAnimation(Stack[-1], Stack[-7])
0x53: Pop(1)
0x54: @ WaitForAnimEnd()
0x55: Pop(0)
0x56: Push(Stack[-3])
0x57: IF (Stack[-1] == 0) GOTO 0x5d; Pop(1)

0x58: @ StopAsync()
0x59: Pop(0)
0x5a: Push("head")
0x5b: @ UnlookAsync(Stack[-1])
0x5c: Pop(1)
0x5d: Push("all")
0x5e: @ LockAnimationEnd(Stack[-1], Stack[-7])
0x5f: Pop(1)
0x60: @ RemoveEnvelope()
0x61: Pop(0)
0x62: Stack[-5] = 0
0x63: Return(); Pop(20)

0x64: PushEmpty()
0x65: @ RemoveRTEnvelope()
0x66: Pop(0)
0x67: @ SetDeathState()
0x68: Pop(0)
0x69: @ Stop()
0x6a: Pop(0)
0x6b: @ StopAsync()
0x6c: Pop(0)
0x6d: @ StopSecondaryAnimation()
0x6e: Pop(0)
0x6f: PushEmpty(string)
0x70: Stack[-1] = Stack[-2]
0x71: Call2 0x565

0x72: Pop(1)
0x73: Push("all")
0x74: @ PlayAnimation(Stack[-1], Stack[-2])
0x75: Pop(1)
0x76: @ WaitForAnimEnd()
0x77: Pop(0)
0x78: Push("all")
0x79: @ LockAnimationEnd(Stack[-1], Stack[-2])
0x7a: Pop(1)
0x7b: @ RemoveEnvelope()
0x7c: Pop(0)
0x7d: Return(); Pop(0)

0x7e: PushEmpty()
0x7f: Return(); Pop(0)

0x80: PushEmpty()
0x81: Return(); Pop(0)

0x82: PushEmpty()
0x83: Return(); Pop(0)

0x84: PushEmpty(object, object)
0x85: Push((bool) 1)
0x86: @ SensePlayerOnly(Stack[-1])
0x87: Pop(1)
0x88: Push((float)1.5)
0x89: @ Sleep(Stack[-1])
0x8a: Pop(1)
0x8b: Push("player")
0x8c: @ FindActor(Stack[-2], Stack[-1])
0x8d: Pop(1)
0x8e: PushEmpty(object, bool, float)
0x8f: Stack[-3] = Stack[-4]
0x90: Stack[-2] = (bool) 1
0x91: Stack[-1] = (float) 155.0
0x92: Call2 0xa3

0x93: Pop(3)
0x94: Return(); Pop(2)

0x95: Stack[-1] = 0
0x96: PushEmpty()
0x97: Stack[-3] = (float) 0.1
0x98: Return(); Pop(0)

0x99: PushEmpty()
0x9a: Stack[-3] = (int) 0
0x9b: Return(); Pop(0)

0x9c: PushEmpty()
0x9d: PushEmpty(bool, object)
0x9e: Stack[-1] = Stack[-3]
0x9f: Call2 0x4ad

0xa0: Stack[-4] = Stack[-2]
0xa1: Pop(2)
0xa2: Return(); Pop(0)

0xa3: PushEmpty(float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float, float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float)
0xa4: PushEmpty()
0xa5: Call2 0x188

0xa6: Pop(0)
0xa7: Stack[5 + Tasks[-1].StackPointer] = (int)0
0xa8: Push("@GetAttackDistance")
0xa9: Push((int) 1)
0xaa: Pop(2); Push(IsFuncExist(Stack[-27], Stack[-2], Stack[-1]))
0xab: IF (Stack[-1] == 0) GOTO 0xb1; Pop(1)

0xac: @@ GetAttackDistance(Stack[-11])
0xad: Pop(0)
0xae: Push((int) 50)
0xaf: Stack[-12] = Stack[-12] + Stack[-1]; Pop(1);
0xb0: GOTO 0xb2

0xb1: Stack[-11] = Stack[-23]
0xb2: Push((int) 150)
0xb3: Pop(1); Push((bool) Stack[-12] >= Stack[-1])
0xb4: IF (Stack[-1] == 0) GOTO 0xb6; Pop(1)

0xb5: Stack[-11] = (int) 150
0xb6: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xb7: Stack[0 + Tasks[-1].StackPointer] = Stack[-25]
0xb8: @ IsPlayerActor(Stack[-0], Stack[-8])
0xb9: Pop(0)
0xba: Push(Stack[-8])
0xbb: IF (Stack[-1] == 0) GOTO 0xc4; Pop(1)

0xbc: Push("attack")
0xbd: @ PlayGlobalMusic(Stack[-1])
0xbe: Pop(1)
0xbf: PushEmpty(object)
0xc0: Call2 0x58e

0xc1: Pop(0)
0xc2: @ SendPlayerEnemy(Stack[-26], Stack[-1])
0xc3: Pop(1)
0xc4: Push(Stack[-24])
0xc5: IF (Stack[-1] == 0) GOTO 0xc8; Pop(1)

0xc6: Stack[-7] = (bool) 0
0xc7: GOTO 0xc9

0xc8: Stack[-7] = (bool) 1
0xc9: Push((float)300.0)
0xca: Stack[-7] = Stack[-1] + Stack[-12]; Pop(1);
0xcb: PushEmpty(bool)
0xcc: Stack[-1] = (bool) 0
0xcd: PushEmpty(bool, object)
0xce: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xcf: Call2 0x9c

0xd0: Pop(1)
0xd1: IF (Stack[-1] == 0) GOTO 0xd5; Pop(1)

0xd2: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0xd3: IF (Stack[-1] == 0) GOTO 0xd5; Pop(1)

0xd4: Stack[-1] = (bool) 1
0xd5: IF (Stack[-1] == 0) GOTO 0x177; Pop(1)

0xd6: PushEmpty()
0xd7: Call2 0x325

0xd8: Pop(0)
0xd9: @@ GetPFPosition(Stack[-10])
0xda: Pop(0)
0xdb: @ GetPFPosition(Stack[-9])
0xdc: Pop(0)
0xdd: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0xde: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0xdf: Pop(0); Push(Stack[-6] * Stack[-6]);
0xe0: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0xe1: IF (Stack[-1] == 0) GOTO 0xf1; Pop(1)

0xe2: PushEmpty(bool, object, float, float, bool, bool)
0xe3: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0xe4: Stack[-4] = Stack[-17]
0xe5: Stack[-3] = (float) 3000.0
0xe6: Stack[-2] = (bool) 1
0xe7: Stack[-1] = (bool) 0
0xe8: Push(-6, 3); TaskCall(2)
0xe9: Call2 0x340

0xea: Pop(-6, 3); TaskReturn
0xeb: Pop(5)
0xec: Pop(1); Push((bool) Stack[-1] == 0)
0xed: IF (Stack[-1] == 0) GOTO 0xef; Pop(1)

0xee: GOTO 0x177

0xef: Stack[-7] = (bool) 0
0xf0: GOTO 0x176

0xf1: Pop(0); Push(Stack[-23] * Stack[-23]);
0xf2: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0xf3: IF (Stack[-1] == 0) GOTO 0x16e; Pop(1)

0xf4: @@ GetPFPosition(Stack[-3])
0xf5: Pop(0)
0xf6: @ CanReachByPF(Stack[-2], Stack[-3])
0xf7: Pop(0)
0xf8: Pop(0); Push((bool) Stack[-2] == 0)
0xf9: IF (Stack[-1] == 0) GOTO 0x109; Pop(1)

0xfa: PushEmpty(bool, object, float, float, bool, bool)
0xfb: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0xfc: Stack[-4] = Stack[-17]
0xfd: Stack[-3] = (float) 3000.0
0xfe: Stack[-2] = (bool) 1
0xff: Stack[-1] = (bool) 0
0x100: Push(-6, 3); TaskCall(2)
0x101: Call2 0x340

0x102: Pop(-6, 3); TaskReturn
0x103: Pop(5)
0x104: Pop(1); Push((bool) Stack[-1] == 0)
0x105: IF (Stack[-1] == 0) GOTO 0x107; Pop(1)

0x106: GOTO 0x177

0x107: Stack[-7] = (bool) 0
0x108: GOTO 0xcb

0x109: Pop(0); Push((bool) Stack[-7] == 0)
0x10a: IF (Stack[-1] == 0) GOTO 0x122; Pop(1)

0x10b: PushEmpty(object)
0x10c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x10d: Call2 0x54f

0x10e: Pop(1)
0x10f: Push("all")
0x110: Push("attack_on")
0x111: @ PlayAnimation(Stack[-2], Stack[-1])
0x112: Pop(2)
0x113: @ WaitForAnimEnd()
0x114: Pop(0)
0x115: PushEmpty()
0x116: Call2 0x325

0x117: Pop(0)
0x118: @ StopAsync()
0x119: Pop(0)
0x11a: Stack[-7] = (bool) 1
0x11b: PushEmpty(bool, object)
0x11c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x11d: Call2 0x9c

0x11e: Pop(1)
0x11f: Pop(1); Push((bool) Stack[-1] == 0)
0x120: IF (Stack[-1] == 0) GOTO 0x122; Pop(1)

0x121: GOTO 0x177

0x122: @ rand(Stack[-1])
0x123: Pop(0)
0x124: PushEmpty(bool)
0x125: Stack[-1] = (bool) 1
0x126: Push((float)0.6)
0x127: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x128: IF (Stack[-1] == 0) GOTO 0x12e; Pop(1)

0x129: PushEmpty(bool)
0x12a: Call2 0x2fa

0x12b: Pop(0)
0x12c: IF (Stack[-1] == 0) GOTO 0x12e; Pop(1)

0x12d: Stack[-1] = (bool) 0
0x12e: IF (Stack[-1] == 0) GOTO 0x13f; Pop(1)

0x12f: @ Face(Stack[-0])
0x130: Pop(0)
0x131: PushEmpty()
0x132: Call2 0x32c

0x133: Pop(0)
0x134: Push("all")
0x135: Push("attack_stay")
0x136: @ PlayAnimation(Stack[-2], Stack[-1])
0x137: Pop(2)
0x138: PushEmpty(bool, float)
0x139: Stack[-1] = Stack[-25]
0x13a: Call2 0x276

0x13b: Pop(2)
0x13c: @ StopAsync()
0x13d: Pop(0)
0x13e: GOTO 0x16d

0x13f: @ Face(Stack[-0])
0x140: Pop(0)
0x141: Push("all")
0x142: Push("fjump")
0x143: @ PlayAnimation(Stack[-2], Stack[-1])
0x144: Pop(2)
0x145: @ WaitForAnimEnd()
0x146: Pop(0)
0x147: PushEmpty()
0x148: Call2 0x325

0x149: Pop(0)
0x14a: Push(CVector(0.0, 0.0, 0.0))
0x14b: @ SetSpeed(Stack[-1])
0x14c: Pop(1)
0x14d: @ Stop()
0x14e: Pop(0)
0x14f: @ StopAsync()
0x150: Pop(0)
0x151: PushEmpty(bool)
0x152: Call2 0x2fa

0x153: Pop(0)
0x154: Pop(1); Push((bool) Stack[-1] == 0)
0x155: IF (Stack[-1] == 0) GOTO 0x16d; Pop(1)

0x156: PushEmpty(bool, object)
0x157: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x158: Call2 0x9c

0x159: Pop(1)
0x15a: Pop(1); Push((bool) Stack[-1] == 0)
0x15b: IF (Stack[-1] == 0) GOTO 0x15d; Pop(1)

0x15c: GOTO 0x177

0x15d: @@ GetPFPosition(Stack[-10])
0x15e: Pop(0)
0x15f: @ GetPFPosition(Stack[-9])
0x160: Pop(0)
0x161: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0x162: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x163: Pop(0); Push(Stack[-23] * Stack[-23]);
0x164: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x165: IF (Stack[-1] == 0) GOTO 0x16d; Pop(1)

0x166: PushEmpty(bool, float)
0x167: Stack[-1] = Stack[-25]
0x168: Call2 0x1d2

0x169: Pop(1)
0x16a: Pop(1); Push((bool) Stack[-1] == 0)
0x16b: IF (Stack[-1] == 0) GOTO 0x16d; Pop(1)

0x16c: GOTO 0x177

0x16d: GOTO 0x176

0x16e: PushEmpty(bool, float)
0x16f: Stack[-1] = Stack[-25]
0x170: Call2 0x1d2

0x171: Pop(1)
0x172: Pop(1); Push((bool) Stack[-1] == 0)
0x173: IF (Stack[-1] == 0) GOTO 0x175; Pop(1)

0x174: GOTO 0x177

0x175: Stack[-7] = (bool) 1
0x176: GOTO 0xcb

0x177: @ WaitForAnimEnd()
0x178: Pop(0)
0x179: Push( Stack[3 + Tasks[-1].StackPointer] )
0x17a: IF (Stack[-1] == 0) GOTO 0x17c; Pop(1)

0x17b: Return(); Pop(22)

0x17c: Push("all")
0x17d: Push("attack_off")
0x17e: @ PlayAnimation(Stack[-2], Stack[-1])
0x17f: Pop(2)
0x180: @ WaitForAnimEnd()
0x181: Pop(0)
0x182: Push(Stack[-8])
0x183: IF (Stack[-1] == 0) GOTO 0x187; Pop(1)

0x184: Push((float)2.0)
0x185: @ Sleep(Stack[-1])
0x186: Pop(1)
0x187: Return(); Pop(22)

0x188: PushEmpty(bool, bool, cvector, bool, bool, cvector)
0x189: Stack[1 + Tasks[-1].StackPointer] = (int)0
0x18a: Push("all")
0x18b: Push("attack_begin")
0x18c: Push((int) 1)
0x18d: Pop(1); Push(Stack[1 + StackPtr] + Stack[-1]);
0x18e: Pop(2); Push(Stack[-2] + Stack[-1]);
0x18f: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0x190: Pop(2)
0x191: Pop(0); Push((bool) Stack[-3] == 0)
0x192: IF (Stack[-1] == 0) GOTO 0x194; Pop(1)

0x193: GOTO 0x197

0x194: Push((int) 1)
0x195: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x196: GOTO 0x18a

0x197: Stack[2 + Tasks[-1].StackPointer] = (int)0
0x198: Push("attack")
0x199: Push((int) 1)
0x19a: Pop(1); Push(Stack[2 + StackPtr] + Stack[-1]);
0x19b: Pop(2); Push(Stack[-2] + Stack[-1]);
0x19c: @ IsExisting3DSound(Stack[-3], Stack[-1])
0x19d: Pop(1)
0x19e: Pop(0); Push((bool) Stack[-2] == 0)
0x19f: IF (Stack[-1] == 0) GOTO 0x1a1; Pop(1)

0x1a0: GOTO 0x1a4

0x1a1: Push((int) 1)
0x1a2: Stack[2 + Tasks[-1].StackPointer] = Stack[2 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x1a3: GOTO 0x198

0x1a4: Push("all")
0x1a5: Push("bjump")
0x1a6: @ GetAnimationOffset(Stack[-3], Stack[-2], Stack[-1])
0x1a7: Pop(2)
0x1a8: Push(CvectorIndex(Stack[-1], 2))
0x1a9: Stack[4 + Tasks[-1].StackPointer] = -Stack[-1]; Pop(1);
0x1aa: Return(); Pop(6)

0x1ab: PushEmpty(object, float, float, object, float, float)
0x1ac: Push((float)0.9)
0x1ad: Pop(1); Push(Stack[-9] * Stack[-1]);
0x1ae: @ GetVictim(Stack[-1], Stack[-4])
0x1af: Pop(1)
0x1b0: @ ReportAttack(Stack[-0])
0x1b1: Pop(0)
0x1b2: Pop(0); Push((bool) Stack[-3] == Stack[0 + Tasks[-1].StackPointer])
0x1b3: IF (Stack[-1] == 0) GOTO 0x1d0; Pop(1)

0x1b4: PushEmpty(float, object, int)
0x1b5: Stack[-2] = Stack[-6]
0x1b6: Stack[-1] = Stack[-10]
0x1b7: Call2 0x96

0x1b8: Stack[-5] = Stack[-3]
0x1b9: Pop(3)
0x1ba: PushEmpty(float, object, float, int)
0x1bb: Stack[-3] = Stack[-7]
0x1bc: Stack[-2] = Stack[-6]
0x1bd: PushEmpty(int, object, int)
0x1be: Stack[-2] = Stack[-10]
0x1bf: Stack[-1] = Stack[-14]
0x1c0: Call2 0x99

0x1c1: Stack[-4] = Stack[-3]
0x1c2: Pop(3)
0x1c3: Call2 0x45f

0x1c4: Stack[-5] = Stack[-4]
0x1c5: Pop(4)
0x1c6: PushEmpty(int)
0x1c7: Call2 0x32a

0x1c8: Pop(0)
0x1c9: @ ReportHit(Stack[-0], Stack[-1], Stack[-2], Stack[-3])
0x1ca: Pop(1)
0x1cb: PushEmpty(object, float)
0x1cc: Stack[-2] = Stack[-5]
0x1cd: Stack[-1] = Stack[-3]
0x1ce: Call2 0x331

0x1cf: Pop(2)
0x1d0: Return(); Pop(6)

0x1d1: Stack[-3] = 0
0x1d2: PushEmpty(int, bool, int, string, int, bool, int, string)
0x1d3: PushEmpty()
0x1d4: Call2 0x325

0x1d5: Pop(0)
0x1d6: @ irand(Stack[-4], Stack[-1])
0x1d7: Pop(0)
0x1d8: Push((int) 1)
0x1d9: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x1da: @ Face(Stack[-0])
0x1db: Pop(0)
0x1dc: Push((bool) 1)
0x1dd: @ SetAttackState(Stack[-1])
0x1de: Pop(1)
0x1df: PushEmpty()
0x1e0: Call2 0x5c3

0x1e1: Pop(0)
0x1e2: Push("all")
0x1e3: Push("attack_begin")
0x1e4: Pop(1); Push(Stack[-1] + Stack[-6]);
0x1e5: @ PlayAnimation(Stack[-2], Stack[-1])
0x1e6: Pop(2)
0x1e7: @ WaitForAnimEnd()
0x1e8: Pop(0)
0x1e9: PushEmpty()
0x1ea: Call2 0x305

0x1eb: Pop(0)
0x1ec: PushEmpty(bool, object)
0x1ed: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1ee: Call2 0x9c

0x1ef: Pop(1)
0x1f0: Pop(1); Push((bool) Stack[-1] == 0)
0x1f1: IF (Stack[-1] == 0) GOTO 0x1f6; Pop(1)

0x1f2: @ StopAsync()
0x1f3: Pop(0)
0x1f4: Stack[-10] = (bool) 0
0x1f5: Return(); Pop(8)

0x1f6: PushEmpty(float, int)
0x1f7: Stack[-2] = Stack[-11]
0x1f8: Stack[-1] = Stack[-6]
0x1f9: Call2 0x1ab

0x1fa: Pop(2)
0x1fb: Push("all")
0x1fc: Push("attack_middle")
0x1fd: Pop(1); Push(Stack[-1] + Stack[-6]);
0x1fe: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0x1ff: Pop(2)
0x200: Push(Stack[-3])
0x201: IF (Stack[-1] == 0) GOTO 0x247; Pop(1)

0x202: PushEmpty()
0x203: Call2 0x5c3

0x204: Pop(0)
0x205: Push("all")
0x206: Push("attack_middle")
0x207: Pop(1); Push(Stack[-1] + Stack[-6]);
0x208: @ PlayAnimation(Stack[-2], Stack[-1])
0x209: Pop(2)
0x20a: @ WaitForAnimEnd()
0x20b: Pop(0)
0x20c: PushEmpty()
0x20d: Call2 0x325

0x20e: Pop(0)
0x20f: PushEmpty(bool, object)
0x210: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x211: Call2 0x9c

0x212: Pop(1)
0x213: Pop(1); Push((bool) Stack[-1] == 0)
0x214: IF (Stack[-1] == 0) GOTO 0x219; Pop(1)

0x215: @ StopAsync()
0x216: Pop(0)
0x217: Stack[-10] = (bool) 0
0x218: Return(); Pop(8)

0x219: PushEmpty(float, int)
0x21a: Stack[-2] = Stack[-11]
0x21b: Stack[-1] = Stack[-6]
0x21c: Call2 0x1ab

0x21d: Pop(2)
0x21e: Stack[-2] = (int) 1
0x21f: Push("attack_middle")
0x220: Pop(1); Push(Stack[-1] + Stack[-5]);
0x221: Push("_")
0x222: Pop(2); Push(Stack[-2] + Stack[-1]);
0x223: Stack[-2] = Stack[-1] + Stack[-3]; Pop(1);
0x224: Push("all")
0x225: @ HasAnimation(Stack[-4], Stack[-1], Stack[-2])
0x226: Pop(1)
0x227: Pop(0); Push((bool) Stack[-3] == 0)
0x228: IF (Stack[-1] == 0) GOTO 0x22a; Pop(1)

0x229: GOTO 0x247

0x22a: PushEmpty()
0x22b: Call2 0x5c3

0x22c: Pop(0)
0x22d: Push("all")
0x22e: @ PlayAnimation(Stack[-1], Stack[-2])
0x22f: Pop(1)
0x230: @ WaitForAnimEnd()
0x231: Pop(0)
0x232: PushEmpty()
0x233: Call2 0x325

0x234: Pop(0)
0x235: PushEmpty(bool, object)
0x236: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x237: Call2 0x9c

0x238: Pop(1)
0x239: Pop(1); Push((bool) Stack[-1] == 0)
0x23a: IF (Stack[-1] == 0) GOTO 0x23f; Pop(1)

0x23b: @ StopAsync()
0x23c: Pop(0)
0x23d: Stack[-10] = (bool) 0
0x23e: Return(); Pop(8)

0x23f: PushEmpty(float, int)
0x240: Stack[-2] = Stack[-11]
0x241: Stack[-1] = Stack[-6]
0x242: Call2 0x1ab

0x243: Pop(2)
0x244: Push((int) 1)
0x245: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x246: GOTO 0x21f

0x247: Push((bool) 0)
0x248: @ SetAttackState(Stack[-1])
0x249: Pop(1)
0x24a: Push("all")
0x24b: Push("attack_end")
0x24c: Pop(1); Push(Stack[-1] + Stack[-6]);
0x24d: @ PlayAnimation(Stack[-2], Stack[-1])
0x24e: Pop(2)
0x24f: PushEmpty(bool)
0x250: Call2 0x333

0x251: Pop(0)
0x252: IF (Stack[-1] == 0) GOTO 0x259; Pop(1)

0x253: PushEmpty(bool, float)
0x254: Stack[-1] = (float) 0.75
0x255: Call2 0x25b

0x256: Pop(2)
0x257: @ StopAsync()
0x258: Pop(0)
0x259: Stack[-10] = (bool) 1
0x25a: Return(); Pop(8)

0x25b: PushEmpty(float, bool, float, bool)
0x25c: @ rand(Stack[-2])
0x25d: Pop(0)
0x25e: Pop(0); Push((bool) Stack[-2] < Stack[-5])
0x25f: IF (Stack[-1] == 0) GOTO 0x26f; Pop(1)

0x260: @ IsAnimationPlaying(Stack[-1])
0x261: Pop(0)
0x262: Pop(0); Push((bool) Stack[-1] == 0)
0x263: IF (Stack[-1] == 0) GOTO 0x265; Pop(1)

0x264: GOTO 0x26e

0x265: PushEmpty(bool)
0x266: Call2 0x2bd

0x267: Pop(0)
0x268: IF (Stack[-1] == 0) GOTO 0x26b; Pop(1)

0x269: Stack[-6] = (bool) 1
0x26a: Return(); Pop(4)

0x26b: @ sync()
0x26c: Pop(0)
0x26d: GOTO 0x260

0x26e: GOTO 0x274

0x26f: @ WaitForAnimEnd()
0x270: Pop(0)
0x271: PushEmpty()
0x272: Call2 0x325

0x273: Pop(0)
0x274: Stack[-6] = (bool) 0
0x275: Return(); Pop(4)

0x276: PushEmpty(bool, cvector, cvector, cvector, float, bool, cvector, cvector, cvector, float)
0x277: @ IsAnimationPlaying(Stack[-5])
0x278: Pop(0)
0x279: Pop(0); Push((bool) Stack[-5] == 0)
0x27a: IF (Stack[-1] == 0) GOTO 0x27c; Pop(1)

0x27b: GOTO 0x29c

0x27c: PushEmpty(bool)
0x27d: Call2 0x2bd

0x27e: Pop(0)
0x27f: IF (Stack[-1] == 0) GOTO 0x282; Pop(1)

0x280: Stack[-12] = (bool) 1
0x281: Return(); Pop(10)

0x282: PushEmpty(bool, object)
0x283: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x284: Call2 0x9c

0x285: Pop(1)
0x286: Pop(1); Push((bool) Stack[-1] == 0)
0x287: IF (Stack[-1] == 0) GOTO 0x28a; Pop(1)

0x288: Stack[-12] = (bool) 0
0x289: Return(); Pop(10)

0x28a: @@ GetPFPosition(Stack[-4])
0x28b: Pop(0)
0x28c: @ GetPFPosition(Stack[-3])
0x28d: Pop(0)
0x28e: Stack[-2] = Stack[-4] - Stack[-3]; Pop(0);
0x28f: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x290: Pop(0); Push(Stack[-11] * Stack[-11]);
0x291: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x292: IF (Stack[-1] == 0) GOTO 0x299; Pop(1)

0x293: PushEmpty(bool, float)
0x294: Stack[-1] = Stack[-13]
0x295: Call2 0x1d2

0x296: Pop(2)
0x297: Stack[-12] = (bool) 1
0x298: Return(); Pop(10)

0x299: @ sync()
0x29a: Pop(0)
0x29b: GOTO 0x277

0x29c: PushEmpty()
0x29d: Call2 0x325

0x29e: Pop(0)
0x29f: Stack[-12] = (bool) 0
0x2a0: Return(); Pop(10)

0x2a1: PushEmpty(cvector, cvector, cvector, float, float, cvector, cvector, cvector, float, float)
0x2a2: PushEmpty(bool, object)
0x2a3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2a4: Call2 0x9c

0x2a5: Pop(1)
0x2a6: Pop(1); Push((bool) Stack[-1] == 0)
0x2a7: IF (Stack[-1] == 0) GOTO 0x2aa; Pop(1)

0x2a8: Stack[-11] = (bool) 0
0x2a9: Return(); Pop(10)

0x2aa: PushEmpty(bool)
0x2ab: Call2 0x2fa

0x2ac: Pop(0)
0x2ad: IF (Stack[-1] == 0) GOTO 0x2bb; Pop(1)

0x2ae: @@ GetPFPosition(Stack[-5])
0x2af: Pop(0)
0x2b0: @ GetPFPosition(Stack[-4])
0x2b1: Pop(0)
0x2b2: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x2b3: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x2b4: @@ GetAttackDistance(Stack[-1])
0x2b5: Pop(0)
0x2b6: Push((int) 50)
0x2b7: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x2b8: Pop(0); Push(Stack[-1] * Stack[-1]);
0x2b9: Stack[-12] = Stack[-3] <= Stack[-1]; Pop(1);
0x2ba: Return(); Pop(10)

0x2bb: Stack[-11] = (bool) 0
0x2bc: Return(); Pop(10)

0x2bd: PushEmpty(bool)
0x2be: Stack[-1] = (bool) 0
0x2bf: PushEmpty(bool)
0x2c0: Call2 0x2a1

0x2c1: Pop(0)
0x2c2: IF (Stack[-1] == 0) GOTO 0x2c8; Pop(1)

0x2c3: PushEmpty(bool)
0x2c4: Call2 0x2cd

0x2c5: Pop(0)
0x2c6: IF (Stack[-1] == 0) GOTO 0x2c8; Pop(1)

0x2c7: Stack[-1] = (bool) 1
0x2c8: IF (Stack[-1] == 0) GOTO 0x2cb; Pop(1)

0x2c9: Stack[-1] = (bool) 1
0x2ca: Return(); Pop(0)

0x2cb: Stack[-1] = (bool) 0
0x2cc: Return(); Pop(0)

0x2cd: PushEmpty(object, bool, float, cvector, cvector, object, bool, float, cvector, cvector)
0x2ce: @ GetScene(Stack[-5])
0x2cf: Pop(0)
0x2d0: Stack[-4] = (bool) 0
0x2d1: PushEmpty(cvector, object)
0x2d2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2d3: Call2 0x447

0x2d4: Pop(1)
0x2d5: Pop(1); Push(( -Stack[-1])
0x2d6: @ FindDirLength(Stack[-4], Stack[-1], Stack[-4])
0x2d7: Pop(1)
0x2d8: Pop(0); Push((bool) Stack[-3] < Stack[4 + Tasks[-1].StackPointer])
0x2d9: IF (Stack[-1] == 0) GOTO 0x2db; Pop(1)

0x2da: GOTO 0x2f7

0x2db: @ Face(Stack[-0])
0x2dc: Pop(0)
0x2dd: Push("all")
0x2de: Push("bjump")
0x2df: @ PlayAnimation(Stack[-2], Stack[-1])
0x2e0: Pop(2)
0x2e1: @@ GetPFPosition(Stack[-2])
0x2e2: Pop(0)
0x2e3: @ GetPFPosition(Stack[-1])
0x2e4: Pop(0)
0x2e5: @ WaitForAnimEnd()
0x2e6: Pop(0)
0x2e7: PushEmpty()
0x2e8: Call2 0x325

0x2e9: Pop(0)
0x2ea: @ StopAsync()
0x2eb: Pop(0)
0x2ec: Push(CVector(0.0, 0.0, 0.0))
0x2ed: @ SetSpeed(Stack[-1])
0x2ee: Pop(1)
0x2ef: Stack[-4] = (bool) 1
0x2f0: PushEmpty(bool)
0x2f1: Call2 0x2a1

0x2f2: Pop(0)
0x2f3: Pop(1); Push((bool) Stack[-1] == 0)
0x2f4: IF (Stack[-1] == 0) GOTO 0x2f6; Pop(1)

0x2f5: GOTO 0x2f7

0x2f6: GOTO 0x2d1

0x2f7: Stack[-11] = Stack[-4]
0x2f8: Return(); Pop(10)

0x2f9: Stack[-5] = 0
0x2fa: PushEmpty(bool, bool)
0x2fb: Push("IsAttacking")
0x2fc: Push((int) 1)
0x2fd: Pop(2); Push(IsFuncExist(Stack[0 + Tasks[-1].StackPointer], Stack[-2], Stack[-1]))
0x2fe: IF (Stack[-1] == 0) GOTO 0x303; Pop(1)

0x2ff: @@ IsAttacking(Stack[-1])
0x300: Pop(0)
0x301: Stack[-3] = Stack[-1]
0x302: Return(); Pop(2)

0x303: Stack[-3] = (bool) 0
0x304: Return(); Pop(2)

0x305: PushEmpty(float, int, float, int)
0x306: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x307: IF (Stack[-1] == 0) GOTO 0x309; Pop(1)

0x308: Return(); Pop(4)

0x309: Push( Stack[5 + Tasks[-1].StackPointer] )
0x30a: IF (Stack[-1] == 0) GOTO 0x311; Pop(1)

0x30b: Push((int) -1)
0x30c: Stack[5 + Tasks[-1].StackPointer] = Stack[5 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x30d: Push((int) 0)
0x30e: Pop(1); Push((bool) Stack[5 + Tasks[-1].StackPointer] > Stack[-1])
0x30f: IF (Stack[-1] == 0) GOTO 0x311; Pop(1)

0x310: Return(); Pop(4)

0x311: @ rand(Stack[-2])
0x312: Pop(0)
0x313: PushEmpty(float)
0x314: Call2 0x337

0x315: Pop(0)
0x316: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x317: IF (Stack[-1] == 0) GOTO 0x324; Pop(1)

0x318: @ irand(Stack[-1], Stack[-2])
0x319: Pop(0)
0x31a: Push((int) 1)
0x31b: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x31c: Push("attack")
0x31d: Pop(1); Push(Stack[-1] + Stack[-2]);
0x31e: @ Speak(Stack[-1])
0x31f: Pop(1)
0x320: PushEmpty(int)
0x321: Call2 0x335

0x322: Stack[5 + Tasks[-1].StackPointer] = Stack[-1]
0x323: Pop(1)
0x324: Return(); Pop(4)

0x325: PushEmpty(object)
0x326: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x327: Call2 0x5ba

0x328: Pop(1)
0x329: Return(); Pop(0)

0x32a: Stack[-1] = (int) 0
0x32b: Return(); Pop(0)

0x32c: PushEmpty(string)
0x32d: Stack[-1] = "attack_stay"
0x32e: Call2 0x565

0x32f: Pop(1)
0x330: Return(); Pop(0)

0x331: PushEmpty()
0x332: Return(); Pop(0)

0x333: Stack[-1] = (bool) 1
0x334: Return(); Pop(0)

0x335: Stack[-1] = (int) 1
0x336: Return(); Pop(0)

0x337: Stack[-1] = (float) 0.5
0x338: Return(); Pop(0)

0x339: PushEmpty()
0x33a: PushEmpty(bool, object)
0x33b: Stack[-1] = Stack[-3]
0x33c: Call2 0x4ad

0x33d: Stack[-4] = Stack[-2]
0x33e: Pop(2)
0x33f: Return(); Pop(0)

0x340: PushEmpty(bool, bool, bool, bool)
0x341: PushEmpty(object)
0x342: Stack[-1] = Stack[-10]
0x343: Call2 0x5ba

0x344: Pop(1)
0x345: Push((int) 1)
0x346: Push((int) 5)
0x347: @ SetTimer(Stack[-2], Stack[-1])
0x348: Pop(2)
0x349: @ CanSee(Stack[-2], Stack[-9])
0x34a: Pop(0)
0x34b: Push(Stack[-2])
0x34c: IF (Stack[-1] == 0) GOTO 0x353; Pop(1)

0x34d: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x34e: PushEmpty(object)
0x34f: Stack[-1] = Stack[-10]
0x350: Call2 0x55a

0x351: Pop(1)
0x352: GOTO 0x354

0x353: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x354: PushEmpty(bool, object)
0x355: Stack[-1] = Stack[-11]
0x356: Call2 0x44e

0x357: Pop(1)
0x358: IF (Stack[-1] == 0) GOTO 0x35e; Pop(1)

0x359: PushEmpty(object)
0x35a: Call2 0x58e

0x35b: Pop(0)
0x35c: @ SendPlayerEnemy(Stack[-10], Stack[-1])
0x35d: Pop(1)
0x35e: PushEmpty(bool, object, float, float, bool, bool)
0x35f: Stack[-5] = Stack[-15]
0x360: Stack[-4] = Stack[-14]
0x361: Stack[-3] = Stack[-13]
0x362: Stack[-2] = Stack[-12]
0x363: Stack[-1] = Stack[-11]
0x364: Call2 0x3a9

0x365: Stack[-7] = Stack[-6]
0x366: Pop(6)
0x367: Push( Stack[2 + Tasks[-1].StackPointer] )
0x368: IF (Stack[-1] == 0) GOTO 0x36c; Pop(1)

0x369: Push("head")
0x36a: @ UnlookAsync(Stack[-1])
0x36b: Pop(1)
0x36c: Push((int) 1)
0x36d: @ KillTimer(Stack[-1])
0x36e: Pop(1)
0x36f: Stack[-10] = Stack[-1]
0x370: Return(); Pop(4)

0x371: PushEmpty()
0x372: Push((int) 1)
0x373: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x374: IF (Stack[-1] == 0) GOTO 0x37a; Pop(1)

0x375: PushEmpty(object)
0x376: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x377: Call2 0x5ba

0x378: Pop(1)
0x379: GOTO 0x37e

0x37a: PushEmpty(int)
0x37b: Stack[-1] = Stack[-2]
0x37c: Call2 0x40f

0x37d: Pop(1)
0x37e: Return(); Pop(0)

0x37f: Push((int) 1)
0x380: @ KillTimer(Stack[-1])
0x381: Pop(1)
0x382: Push( Stack[2 + Tasks[-1].StackPointer] )
0x383: IF (Stack[-1] == 0) GOTO 0x388; Pop(1)

0x384: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x385: Push("head")
0x386: @ UnlookAsync(Stack[-1])
0x387: Pop(1)
0x388: PushEmpty()
0x389: Call2 0x425

0x38a: Pop(0)
0x38b: Return(); Pop(0)

0x38c: PushEmpty()
0x38d: PushEmpty(bool)
0x38e: Stack[-1] = (bool) 0
0x38f: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0x390: IF (Stack[-1] == 0) GOTO 0x394; Pop(1)

0x391: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x392: IF (Stack[-1] == 0) GOTO 0x394; Pop(1)

0x393: Stack[-1] = (bool) 1
0x394: IF (Stack[-1] == 0) GOTO 0x39a; Pop(1)

0x395: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x396: PushEmpty(object)
0x397: Stack[-1] = Stack[-2]
0x398: Call2 0x55a

0x399: Pop(1)
0x39a: Return(); Pop(0)

0x39b: PushEmpty()
0x39c: PushEmpty(bool)
0x39d: Stack[-1] = (bool) 0
0x39e: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0x39f: IF (Stack[-1] == 0) GOTO 0x3a3; Pop(1)

0x3a0: Push( Stack[2 + Tasks[-1].StackPointer] )
0x3a1: IF (Stack[-1] == 0) GOTO 0x3a3; Pop(1)

0x3a2: Stack[-1] = (bool) 1
0x3a3: IF (Stack[-1] == 0) GOTO 0x3a8; Pop(1)

0x3a4: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x3a5: Push("head")
0x3a6: @ UnlookAsync(Stack[-1])
0x3a7: Pop(1)
0x3a8: Return(); Pop(0)

0x3a9: PushEmpty(bool, bool, object, cvector, cvector, cvector, float, object, bool, bool, object, cvector, cvector, cvector, float, object)
0x3aa: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x3ab: Stack[1 + Tasks[-1].StackPointer] = Stack[-21]
0x3ac: Stack[-7] = Stack[-17]
0x3ad: PushEmpty(bool, object)
0x3ae: Stack[-1] = Stack[-23]
0x3af: Call2 0x339

0x3b0: Pop(1)
0x3b1: Pop(1); Push((bool) Stack[-1] == 0)
0x3b2: IF (Stack[-1] == 0) GOTO 0x3b5; Pop(1)

0x3b3: Stack[-22] = (bool) 0
0x3b4: Return(); Pop(16)

0x3b5: @@ GetPosition(Stack[-5])
0x3b6: Pop(0)
0x3b7: @ GetPosition(Stack[-4])
0x3b8: Pop(0)
0x3b9: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x3ba: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x3bb: PushEmpty(bool)
0x3bc: Stack[-1] = (bool) 0
0x3bd: Push((int) 0)
0x3be: Pop(1); Push((bool) Stack[-21] > Stack[-1])
0x3bf: IF (Stack[-1] == 0) GOTO 0x3c4; Pop(1)

0x3c0: Pop(0); Push(Stack[-20] * Stack[-20]);
0x3c1: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x3c2: IF (Stack[-1] == 0) GOTO 0x3c4; Pop(1)

0x3c3: Stack[-1] = (bool) 1
0x3c4: IF (Stack[-1] == 0) GOTO 0x3c9; Pop(1)

0x3c5: @ Stop()
0x3c6: Pop(0)
0x3c7: Stack[-22] = (bool) 0
0x3c8: Return(); Pop(16)

0x3c9: Pop(0); Push(Stack[-20] * Stack[-20]);
0x3ca: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x3cb: IF (Stack[-1] == 0) GOTO 0x407; Pop(1)

0x3cc: @@ GetPFPosition(Stack[-5])
0x3cd: Pop(0)
0x3ce: @ FindPathTo(Stack[-1], Stack[-5])
0x3cf: Pop(0)
0x3d0: Pop(0); Push(( Stack[-1] != 0 )
0x3d1: IF (Stack[-1] == 0) GOTO 0x3d4; Pop(1)

0x3d2: Stack[-6] = Stack[-1]
0x3d3: Stack[-1] = 0
0x3d4: Pop(0); Push(( Stack[-6] != 0 )
0x3d5: IF (Stack[-1] == 0) GOTO 0x3f5; Pop(1)

0x3d6: Push(Stack[-7])
0x3d7: IF (Stack[-1] == 0) GOTO 0x3de; Pop(1)

0x3d8: Stack[-7] = (bool) 0
0x3d9: @ RotatePath(Stack[-6], Stack[-8])
0x3da: Pop(0)
0x3db: Pop(0); Push((bool) Stack[-8] == 0)
0x3dc: IF (Stack[-1] == 0) GOTO 0x3de; Pop(1)

0x3dd: GOTO 0x40d

0x3de: Push((int) 0)
0x3df: Push((float)0.3)
0x3e0: @ SetTimer(Stack[-2], Stack[-1])
0x3e1: Pop(2)
0x3e2: PushEmpty(string)
0x3e3: Call2 0x435

0x3e4: Pop(0)
0x3e5: PushEmpty(string)
0x3e6: Call2 0x437

0x3e7: Pop(0)
0x3e8: @ FollowPath(Stack[-8], Stack[-20], Stack[-10], Stack[-2], Stack[-1])
0x3e9: Pop(2)
0x3ea: Pop(0); Push((bool) Stack[-8] == 0)
0x3eb: IF (Stack[-1] == 0) GOTO 0x3f3; Pop(1)

0x3ec: Push( Stack[0 + Tasks[-1].StackPointer] )
0x3ed: IF (Stack[-1] == 0) GOTO 0x3f1; Pop(1)

0x3ee: Stack[-6] = 0
0x3ef: GOTO 0x40d

0x3f0: GOTO 0x3f2

0x3f1: GOTO 0x40c

0x3f2: GOTO 0x3f4

0x3f3: Stack[-6] = 0
0x3f4: GOTO 0x405

0x3f5: Push((int) 0)
0x3f6: @ KillTimer(Stack[-1])
0x3f7: Pop(1)
0x3f8: Push((float)0.5)
0x3f9: @ Sleep(Stack[-1], Stack[-9])
0x3fa: Pop(1)
0x3fb: Pop(0); Push((bool) Stack[-8] == 0)
0x3fc: IF (Stack[-1] == 0) GOTO 0x401; Pop(1)

0x3fd: Push( Stack[0 + Tasks[-1].StackPointer] )
0x3fe: IF (Stack[-1] == 0) GOTO 0x401; Pop(1)

0x3ff: Stack[-6] = 0
0x400: GOTO 0x40d

0x401: Push((int) 0)
0x402: Push((float)0.3)
0x403: @ SetTimer(Stack[-2], Stack[-1])
0x404: Pop(2)
0x405: Stack[-1] = 0
0x406: GOTO 0x40b

0x407: Push((int) 0)
0x408: @ KillTimer(Stack[-1])
0x409: Pop(1)
0x40a: GOTO 0x40d

0x40b: Stack[-6] = 0
0x40c: GOTO 0x3ad

0x40d: Stack[-22] = !Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x40e: Return(); Pop(16)

0x40f: PushEmpty()
0x410: Push((int) 0)
0x411: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x412: IF (Stack[-1] == 0) GOTO 0x414; Pop(1)

0x413: Return(); Pop(0)

0x414: PushEmpty(bool, object)
0x415: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x416: Call2 0x339

0x417: Pop(1)
0x418: Pop(1); Push((bool) Stack[-1] == 0)
0x419: IF (Stack[-1] == 0) GOTO 0x41b; Pop(1)

0x41a: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x41b: Push((int) 0)
0x41c: @ KillTimer(Stack[-1])
0x41d: Pop(1)
0x41e: @ Stop()
0x41f: Pop(0)
0x420: Return(); Pop(0)

0x421: PushEmpty()
0x422: @ RequestClearPath(Stack[-1])
0x423: Pop(0)
0x424: Return(); Pop(0)

0x425: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x426: Push((int) 0)
0x427: @ KillTimer(Stack[-1])
0x428: Pop(1)
0x429: @ Stop()
0x42a: Pop(0)
0x42b: Return(); Pop(0)

0x42c: PushEmpty()
0x42d: PushEmpty()
0x42e: Call2 0x37f

0x42f: Pop(0)
0x430: PushEmpty(object)
0x431: Stack[-1] = Stack[-2]
0x432: Call2 0x5f5

0x433: Pop(1)
0x434: Return(); Pop(0)

0x435: Stack[-1] = "walk"
0x436: Return(); Pop(0)

0x437: Stack[-1] = "run"
0x438: Return(); Pop(0)

0x439: PushEmpty()
0x43a: Push((int) 2)
0x43b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x43c: IF (Stack[-1] == 0) GOTO 0x440; Pop(1)

0x43d: Stack[-2] = "fire"
0x43e: Return(); Pop(0)

0x43f: GOTO 0x445

0x440: Push((int) 1)
0x441: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x442: IF (Stack[-1] == 0) GOTO 0x445; Pop(1)

0x443: Stack[-2] = "bullet"
0x444: Return(); Pop(0)

0x445: Stack[-2] = "phys"
0x446: Return(); Pop(0)

0x447: PushEmpty(cvector, cvector, cvector, cvector)
0x448: @ GetPosition(Stack[-2])
0x449: Pop(0)
0x44a: @@ GetPosition(Stack[-1])
0x44b: Pop(0)
0x44c: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x44d: Return(); Pop(4)

0x44e: PushEmpty(bool, bool)
0x44f: @ IsPlayerActor(Stack[-3], Stack[-1])
0x450: Pop(0)
0x451: Stack[-4] = Stack[-1]
0x452: Return(); Pop(2)

0x453: PushEmpty(bool, bool)
0x454: Push("HasProperty")
0x455: Push((int) 2)
0x456: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x457: Pop(1); Push((bool) Stack[-1] == 0)
0x458: IF (Stack[-1] == 0) GOTO 0x45b; Pop(1)

0x459: Stack[-5] = (bool) 0
0x45a: Return(); Pop(2)

0x45b: @@ HasProperty(Stack[-3], Stack[-1])
0x45c: Pop(0)
0x45d: Stack[-5] = Stack[-1]
0x45e: Return(); Pop(2)

0x45f: PushEmpty(int, string, int, float, float, float, int, string, int, float, float, float)
0x460: PushEmpty(bool, object, string)
0x461: Stack[-2] = Stack[-18]
0x462: Stack[-1] = "health"
0x463: Call2 0x453

0x464: Pop(2)
0x465: Pop(1); Push((bool) Stack[-1] == 0)
0x466: IF (Stack[-1] == 0) GOTO 0x469; Pop(1)

0x467: Stack[-16] = (float) 0.0
0x468: Return(); Pop(12)

0x469: PushEmpty(bool, object, string)
0x46a: Stack[-2] = Stack[-18]
0x46b: Stack[-1] = "armor"
0x46c: Call2 0x453

0x46d: Pop(2)
0x46e: Pop(1); Push((bool) Stack[-1] == 0)
0x46f: IF (Stack[-1] == 0) GOTO 0x472; Pop(1)

0x470: Stack[-6] = (int) 0
0x471: GOTO 0x475

0x472: Push("armor")
0x473: @@ GetProperty(Stack[-1], Stack[-7])
0x474: Pop(1)
0x475: Push("armor_")
0x476: PushEmpty(string, int)
0x477: Stack[-1] = Stack[-16]
0x478: Call2 0x439

0x479: Pop(1)
0x47a: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x47b: PushEmpty(bool, object, string)
0x47c: Stack[-2] = Stack[-18]
0x47d: Stack[-1] = Stack[-8]
0x47e: Call2 0x453

0x47f: Pop(2)
0x480: Pop(1); Push((bool) Stack[-1] == 0)
0x481: IF (Stack[-1] == 0) GOTO 0x484; Pop(1)

0x482: Stack[-4] = (int) 0
0x483: GOTO 0x486

0x484: @@ GetProperty(Stack[-5], Stack[-4])
0x485: Pop(0)
0x486: PushEmpty(float, float, float)
0x487: Pop(0); Push(Stack[-9] + Stack[-7]);
0x488: Push((float)100.0)
0x489: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0x48a: Stack[-1] = (int) 1
0x48b: Call2 0x59e

0x48c: Stack[-6] = Stack[-3]
0x48d: Pop(3)
0x48e: Push("health")
0x48f: @@ GetProperty(Stack[-1], Stack[-3])
0x490: Pop(1)
0x491: Push((int) 1)
0x492: Pop(1); Push(Stack[-1] - Stack[-4]);
0x493: Stack[-2] = Stack[-15] * Stack[-1]; Pop(1);
0x494: Push("health")
0x495: PushEmpty(float, float, float, float)
0x496: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0x497: Stack[-2] = (int) 0
0x498: Stack[-1] = (int) 1
0x499: Call2 0x5a5

0x49a: Pop(3)
0x49b: @@ SetProperty(Stack[-2], Stack[-1])
0x49c: Pop(2)
0x49d: PushEmpty(bool, object)
0x49e: Stack[-1] = Stack[-17]
0x49f: Call2 0x44e

0x4a0: Pop(1)
0x4a1: IF (Stack[-1] == 0) GOTO 0x4a6; Pop(1)

0x4a2: PushEmpty(float)
0x4a3: Stack[-1] = -Stack[-2]; Pop(0);
0x4a4: Call2 0x5b0

0x4a5: Pop(1)
0x4a6: Stack[-16] = Stack[-1]
0x4a7: Return(); Pop(12)

0x4a8: PushEmpty(bool, bool)
0x4a9: @@ IsDead(Stack[-1])
0x4aa: Pop(0)
0x4ab: Stack[-4] = Stack[-1]
0x4ac: Return(); Pop(2)

0x4ad: PushEmpty(object, object, object, object)
0x4ae: Pop(0); Push((bool) Stack[-5] == 0)
0x4af: IF (Stack[-1] == 0) GOTO 0x4b2; Pop(1)

0x4b0: Stack[-6] = (bool) 0
0x4b1: Return(); Pop(4)

0x4b2: PushEmpty(bool)
0x4b3: Stack[-1] = (bool) 0
0x4b4: Push("IsDead")
0x4b5: Push((int) 1)
0x4b6: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x4b7: IF (Stack[-1] == 0) GOTO 0x4be; Pop(1)

0x4b8: PushEmpty(bool, object)
0x4b9: Stack[-1] = Stack[-8]
0x4ba: Call2 0x4a8

0x4bb: Pop(1)
0x4bc: IF (Stack[-1] == 0) GOTO 0x4be; Pop(1)

0x4bd: Stack[-1] = (bool) 1
0x4be: IF (Stack[-1] == 0) GOTO 0x4c1; Pop(1)

0x4bf: Stack[-6] = (bool) 0
0x4c0: Return(); Pop(4)

0x4c1: @ GetScene(Stack[-2])
0x4c2: Pop(0)
0x4c3: Pop(0); Push((bool) Stack[-2] == 0)
0x4c4: IF (Stack[-1] == 0) GOTO 0x4c7; Pop(1)

0x4c5: Stack[-6] = (bool) 0
0x4c6: Return(); Pop(4)

0x4c7: @@ GetScene(Stack[-1])
0x4c8: Pop(0)
0x4c9: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x4ca: IF (Stack[-1] == 0) GOTO 0x4cd; Pop(1)

0x4cb: Stack[-6] = (bool) 0
0x4cc: Return(); Pop(4)

0x4cd: Stack[-6] = (bool) 1
0x4ce: Return(); Pop(4)

0x4cf: Stack[-1] = 0
0x4d0: Stack[-2] = 0
0x4d1: PushEmpty(bool, int, cvector, cvector, cvector, cvector, string, bool, int, cvector, cvector, cvector, cvector, string)
0x4d2: Pop(0); Push((bool) Stack[-15] == 0)
0x4d3: IF (Stack[-1] == 0) GOTO 0x4d5; Pop(1)

0x4d4: Return(); Pop(14)

0x4d5: @ IsDead(Stack[-7])
0x4d6: Pop(0)
0x4d7: Push(Stack[-7])
0x4d8: IF (Stack[-1] == 0) GOTO 0x4da; Pop(1)

0x4d9: Return(); Pop(14)

0x4da: @ GetSecondaryAnimationType(Stack[-6])
0x4db: Pop(0)
0x4dc: Push((int) 0)
0x4dd: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x4de: IF (Stack[-1] == 0) GOTO 0x4e0; Pop(1)

0x4df: Return(); Pop(14)

0x4e0: @@ GetPosition(Stack[-5])
0x4e1: Pop(0)
0x4e2: @ GetPosition(Stack[-4])
0x4e3: Pop(0)
0x4e4: @ GetDirection(Stack[-3])
0x4e5: Pop(0)
0x4e6: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0x4e7: Push(CvectorIndex(Stack[-2], 0))
0x4e8: Push(CvectorIndex(Stack[-4], 0))
0x4e9: Pop(2); Push(Stack[-2] * Stack[-1]);
0x4ea: Push(CvectorIndex(Stack[-3], 2))
0x4eb: Push(CvectorIndex(Stack[-5], 2))
0x4ec: Pop(2); Push(Stack[-2] * Stack[-1]);
0x4ed: Pop(2); Push(Stack[-2] + Stack[-1]);
0x4ee: Push((int) 0)
0x4ef: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x4f0: IF (Stack[-1] == 0) GOTO 0x4f3; Pop(1)

0x4f1: Stack[-1] = "fhit"
0x4f2: GOTO 0x4f4

0x4f3: Stack[-1] = "bhit"
0x4f4: Push("hit_react")
0x4f5: Push("1")
0x4f6: Pop(1); Push(Stack[-3] + Stack[-1]);
0x4f7: Push("2")
0x4f8: Pop(1); Push(Stack[-4] + Stack[-1]);
0x4f9: Push((int) -10)
0x4fa: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x4fb: Pop(4)
0x4fc: Return(); Pop(14)

0x4fd: PushEmpty(cvector, object, int, bool, cvector, cvector, int, int, cvector, cvector, object, int, bool, cvector, cvector, int, int, cvector)
0x4fe: PushEmpty(bool)
0x4ff: Stack[-1] = (bool) 0
0x500: PushEmpty(bool)
0x501: Stack[-1] = (bool) 0
0x502: Push(Stack[-23])
0x503: IF (Stack[-1] == 0) GOTO 0x508; Pop(1)

0x504: Push((int) 4)
0x505: Pop(1); Push((bool) Stack[-23] != Stack[-1])
0x506: IF (Stack[-1] == 0) GOTO 0x508; Pop(1)

0x507: Stack[-1] = (bool) 1
0x508: IF (Stack[-1] == 0) GOTO 0x50d; Pop(1)

0x509: Push((int) 5)
0x50a: Pop(1); Push((bool) Stack[-22] != Stack[-1])
0x50b: IF (Stack[-1] == 0) GOTO 0x50d; Pop(1)

0x50c: Stack[-1] = (bool) 1
0x50d: IF (Stack[-1] == 0) GOTO 0x53c; Pop(1)

0x50e: PushEmpty(cvector, cvector)
0x50f: PushEmpty(cvector, object)
0x510: Stack[-1] = Stack[-25]
0x511: Call2 0x447

0x512: Stack[-3] = Stack[-2]
0x513: Pop(2)
0x514: Call2 0x594

0x515: Stack[-11] = Stack[-2]
0x516: Pop(2)
0x517: @ CreateVectorVector(Stack[-8])
0x518: Pop(0)
0x519: Stack[-7] = (int) 1
0x51a: Push("hit")
0x51b: Pop(1); Push(Stack[-1] + Stack[-8]);
0x51c: @ GetGeometryLocator(Stack[-1], Stack[-7], Stack[-6], Stack[-5])
0x51d: Pop(1)
0x51e: Pop(0); Push((bool) Stack[-6] == 0)
0x51f: IF (Stack[-1] == 0) GOTO 0x521; Pop(1)

0x520: GOTO 0x52a

0x521: Pop(0); Push(Stack[-4] | Stack[-9]);
0x522: Push((float)0.70711)
0x523: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x524: IF (Stack[-1] == 0) GOTO 0x527; Pop(1)

0x525: @@ add(Stack[-5])
0x526: Pop(0)
0x527: Push((int) 1)
0x528: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x529: GOTO 0x51a

0x52a: @@ size(Stack[-3])
0x52b: Pop(0)
0x52c: Push(Stack[-3])
0x52d: IF (Stack[-1] == 0) GOTO 0x53b; Pop(1)

0x52e: @ irand(Stack[-2], Stack[-3])
0x52f: Pop(0)
0x530: @@ get(Stack[-1], Stack[-2])
0x531: Pop(0)
0x532: PushEmpty(object, int, float, cvector, cvector)
0x533: Stack[-5] = Stack[-26]
0x534: Stack[-4] = Stack[-25]
0x535: Stack[-3] = Stack[-24]
0x536: Stack[-2] = Stack[-6]
0x537: Stack[-1] = -Stack[-14]; Pop(0);
0x538: Call2 0x541

0x539: Pop(5)
0x53a: Return(); Pop(18)

0x53b: Stack[-8] = 0
0x53c: PushEmpty(object)
0x53d: Stack[-1] = Stack[-22]
0x53e: Call2 0x4d1

0x53f: Pop(1)
0x540: Return(); Pop(18)

0x541: PushEmpty(object, object, object, object)
0x542: @ GetScene(Stack[-2])
0x543: Pop(0)
0x544: Push("scripted")
0x545: Push("blood_dir.xml")
0x546: @ AddActorByType(Stack[-3], Stack[-2], Stack[-4], Stack[-8], Stack[-7], Stack[-1])
0x547: Pop(2)
0x548: PushEmpty(object)
0x549: Stack[-1] = Stack[-10]
0x54a: Call2 0x4d1

0x54b: Pop(1)
0x54c: Return(); Pop(4)

0x54d: Stack[-1] = 0
0x54e: Stack[-2] = 0
0x54f: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x550: @@ GetPosition(Stack[-3])
0x551: Pop(0)
0x552: @ GetPosition(Stack[-2])
0x553: Pop(0)
0x554: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0x555: Push(CvectorIndex(Stack[-1], 0))
0x556: Push(CvectorIndex(Stack[-2], 2))
0x557: @ RotateAsync(Stack[-2], Stack[-1])
0x558: Pop(2)
0x559: Return(); Pop(6)

0x55a: PushEmpty(float, cvector, float, cvector)
0x55b: @@ GetEyesHeight(Stack[-2])
0x55c: Pop(0)
0x55d: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x55e: Push(CvectorIndex(Stack[-1], 1))
0x55f: Stack[-1] = Stack[-3]
0x560: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x561: Push("head")
0x562: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x563: Pop(1)
0x564: Return(); Pop(4)

0x565: PushEmpty(bool, int, bool, int, bool, float, cvector, cvector, bool, int, bool, int, bool, float, cvector, cvector)
0x566: @ IsExisting3DSound(Stack[-8], Stack[-17])
0x567: Pop(0)
0x568: Pop(0); Push((bool) Stack[-8] == 0)
0x569: IF (Stack[-1] == 0) GOTO 0x57e; Pop(1)

0x56a: Stack[-7] = (int) 0
0x56b: Push((int) 1)
0x56c: Pop(1); Push(Stack[-8] + Stack[-1]);
0x56d: Pop(1); Push(Stack[-18] + Stack[-1]);
0x56e: @ IsExisting3DSound(Stack[-7], Stack[-1])
0x56f: Pop(1)
0x570: Pop(0); Push((bool) Stack[-6] == 0)
0x571: IF (Stack[-1] == 0) GOTO 0x573; Pop(1)

0x572: GOTO 0x576

0x573: Push((int) 1)
0x574: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x575: GOTO 0x56b

0x576: Pop(0); Push((bool) Stack[-7] == 0)
0x577: IF (Stack[-1] == 0) GOTO 0x579; Pop(1)

0x578: Return(); Pop(16)

0x579: @ irand(Stack[-5], Stack[-7])
0x57a: Pop(0)
0x57b: Push((int) 1)
0x57c: Pop(1); Push(Stack[-6] + Stack[-1]);
0x57d: Stack[-18] = Stack[-18] + Stack[-1]; Pop(1);
0x57e: @ Is3DSoundLoaded(Stack[-4], Stack[-17])
0x57f: Pop(0)
0x580: Push(Stack[-4])
0x581: IF (Stack[-1] == 0) GOTO 0x58d; Pop(1)

0x582: @ GetEyesHeight(Stack[-3])
0x583: Pop(0)
0x584: @ GetDirection(Stack[-2])
0x585: Pop(0)
0x586: Push((int) 50)
0x587: Stack[-2] = Stack[-3] * Stack[-1]; Pop(1);
0x588: Push(CvectorIndex(Stack[-1], 1))
0x589: Stack[-1] = Stack[-1] + Stack[-4]; Pop(0);
0x58a: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x58b: @ PlayGlobalSound(Stack[-17], Stack[-1])
0x58c: Pop(0)
0x58d: Return(); Pop(16)

0x58e: PushEmpty(object, object)
0x58f: @ self(Stack[-1])
0x590: Pop(0)
0x591: Stack[-3] = Stack[-1]
0x592: Return(); Pop(2)

0x593: Stack[-1] = 0
0x594: PushEmpty(float, float)
0x595: Pop(0); Push(Stack[-3] | Stack[-3]);
0x596: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x597: Push((float)0.0)
0x598: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x599: IF (Stack[-1] == 0) GOTO 0x59c; Pop(1)

0x59a: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x59b: Return(); Pop(2)

0x59c: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x59d: Return(); Pop(2)

0x59e: PushEmpty()
0x59f: Pop(0); Push((bool) Stack[-2] < Stack[-1])
0x5a0: IF (Stack[-1] == 0) GOTO 0x5a3; Pop(1)

0x5a1: Stack[-3] = Stack[-2]
0x5a2: GOTO 0x5a4

0x5a3: Stack[-3] = Stack[-1]
0x5a4: Return(); Pop(0)

0x5a5: PushEmpty()
0x5a6: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x5a7: IF (Stack[-1] == 0) GOTO 0x5aa; Pop(1)

0x5a8: Stack[-4] = Stack[-2]
0x5a9: Return(); Pop(0)

0x5aa: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x5ab: IF (Stack[-1] == 0) GOTO 0x5ae; Pop(1)

0x5ac: Stack[-4] = Stack[-1]
0x5ad: Return(); Pop(0)

0x5ae: Stack[-4] = Stack[-3]
0x5af: Return(); Pop(0)

0x5b0: PushEmpty(object, object)
0x5b1: @ CreateFloatVector(Stack[-1])
0x5b2: Pop(0)
0x5b3: @@ add(Stack[-3])
0x5b4: Pop(0)
0x5b5: Push((int) 15)
0x5b6: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x5b7: Pop(1)
0x5b8: Return(); Pop(2)

0x5b9: Stack[-1] = 0
0x5ba: PushEmpty(bool, bool)
0x5bb: @ IsPlayerActor(Stack[-3], Stack[-1])
0x5bc: Pop(0)
0x5bd: Push(Stack[-1])
0x5be: IF (Stack[-1] == 0) GOTO 0x5c2; Pop(1)

0x5bf: Push("attack")
0x5c0: @ PlayGlobalMusic(Stack[-1])
0x5c1: Pop(1)
0x5c2: Return(); Pop(2)

0x5c3: PushEmpty(object, object)
0x5c4: @ GetScene(Stack[-1])
0x5c5: Pop(0)
0x5c6: Push("battle")
0x5c7: PushEmpty(object)
0x5c8: Call2 0x58e

0x5c9: Pop(0)
0x5ca: @ BroadcastMessage(Stack[-2], Stack[-1], Stack[-3])
0x5cb: Pop(2)
0x5cc: Return(); Pop(2)

0x5cd: Stack[-1] = 0
0x5ce: PushEmpty()
0x5cf: PushEmpty(object)
0x5d0: Stack[-1] = Stack[-2]
0x5d1: Push(-1, 0); TaskCall(0)
0x5d2: Call2 0x0

0x5d3: Pop(-1, 0); TaskReturn
0x5d4: Pop(1)
0x5d5: Return(); Pop(0)

0x5d6: PushEmpty()
0x5d7: PushEmpty(object, int, float)
0x5d8: Stack[-3] = Stack[-7]
0x5d9: Stack[-2] = Stack[-6]
0x5da: Stack[-1] = Stack[-5]
0x5db: Call2 0x4fd

0x5dc: Pop(3)
0x5dd: Return(); Pop(0)

0x5de: PushEmpty()
0x5df: PushEmpty(object, int, float, cvector, cvector)
0x5e0: Stack[-5] = Stack[-11]
0x5e1: Stack[-4] = Stack[-10]
0x5e2: Stack[-3] = Stack[-9]
0x5e3: Stack[-2] = Stack[-7]
0x5e4: Stack[-1] = Stack[-6]
0x5e5: Call2 0x541

0x5e6: Pop(5)
0x5e7: Return(); Pop(0)

0x5e8: PushEmpty(float, float)
0x5e9: Push("health")
0x5ea: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x5eb: IF (Stack[-1] == 0) GOTO 0x5f4; Pop(1)

0x5ec: Push("health")
0x5ed: @ GetProperty(Stack[-1], Stack[-2])
0x5ee: Pop(1)
0x5ef: Push((int) 0)
0x5f0: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x5f1: IF (Stack[-1] == 0) GOTO 0x5f4; Pop(1)

0x5f2: @ SignalDeath(Stack[-4])
0x5f3: Pop(0)
0x5f4: Return(); Pop(2)

0x5f5: PushEmpty()
0x5f6: PushEmpty(object)
0x5f7: Stack[-1] = Stack[-2]
0x5f8: Call2 0x5ce

0x5f9: Pop(1)
0x5fa: Return(); Pop(0)

