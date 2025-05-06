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
	quest_d5_01
	dead
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
	2
	add
	size
	get
	scripted
	blood_dir.xml
	battle
	branch
	SetItemName
	Organ
	GetItemID
	liver
	kidney
	heart
	blood

Import:
	Sleep (1 args)
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
	SetRTEnvelope (2 args)
	Hold (0 args)
	IsOverrideActive (1 args)
	RemoveActor (1 args)
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
	Trigger (2 args)
	BroadcastMessage (3 args)
	GetVariable (2 args)
	WorkWithCorpse (1 args)
	Barter (1 args)
	CreateInvItem (1 args)
	AddItem (4 args)
	GetProperty (2 args)
	SignalDeath (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0
	GTASK_1 Vars = (object, int, int, bool, float, int) Params = 0
	GTASK_2 Vars = (bool, object, bool) Params = 6
		EVENT_7 Op = 0x2e6 Vars = (int)
		EVENT_1 Op = 0x301 Vars = (object)
		EVENT_2 Op = 0x310 Vars = (object)
		EVENT_10 Op = 0x396 Vars = (object)
		EVENT_41 Op = 0x3a1 Vars = (object)
	GTASK_3  Params = 1
		EVENT_0 Op = 0x3ca Vars = (object)
		EVENT_6 Op = 0x3d4 Vars = ()
		EVENT_22 Op = 0x451 Vars = (object, int, float, float)
		EVENT_16 Op = 0x453 Vars = (object, string)
		EVENT_41 Op = 0x455 Vars = (object)

Events:
EVENT_22 Op = 0x65b Vars = (object, int, float, float)
EVENT_43 Op = 0x663 Vars = (object, int, float, float, cvector, cvector)
EVENT_16 Op = 0x66d Vars = (object, string)
EVENT_41 Op = 0x67a Vars = (object)

0x0: PushEmpty()
0x1: Push(-0, 6); TaskCall(1)
0x2: Call2 0xa

0x3: Pop(-0, 6); TaskReturn
0x4: Pop(0)
0x5: Push((float)0.5)
0x6: @ Sleep(Stack[-1])
0x7: Pop(1)
0x8: GOTO 0x0

0x9: Return(); Pop(0)

0xa: PushEmpty(object, object)
0xb: Push("player")
0xc: @ FindActor(Stack[-2], Stack[-1])
0xd: Pop(1)
0xe: Pop(0); Push((bool) Stack[-1] == 0)
0xf: IF (Stack[-1] == 0) GOTO 0x11; Pop(1)

0x10: Return(); Pop(2)

0x11: PushEmpty(object, bool, float)
0x12: Stack[-3] = Stack[-4]
0x13: Stack[-2] = (bool) 1
0x14: Stack[-1] = (float) 180.0
0x15: Call2 0x1f

0x16: Pop(3)
0x17: Return(); Pop(2)

0x18: Stack[-1] = 0
0x19: PushEmpty()
0x1a: Stack[-3] = (float) 0.3
0x1b: Return(); Pop(0)

0x1c: PushEmpty()
0x1d: Stack[-3] = (int) 0
0x1e: Return(); Pop(0)

0x1f: PushEmpty(float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float, float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float)
0x20: PushEmpty()
0x21: Call2 0x104

0x22: Pop(0)
0x23: Stack[5 + Tasks[-1].StackPointer] = (int)0
0x24: Push("@GetAttackDistance")
0x25: Push((int) 1)
0x26: Pop(2); Push(IsFuncExist(Stack[-27], Stack[-2], Stack[-1]))
0x27: IF (Stack[-1] == 0) GOTO 0x2d; Pop(1)

0x28: @@ GetAttackDistance(Stack[-11])
0x29: Pop(0)
0x2a: Push((int) 50)
0x2b: Stack[-12] = Stack[-12] + Stack[-1]; Pop(1);
0x2c: GOTO 0x2e

0x2d: Stack[-11] = Stack[-23]
0x2e: Push((int) 150)
0x2f: Pop(1); Push((bool) Stack[-12] >= Stack[-1])
0x30: IF (Stack[-1] == 0) GOTO 0x32; Pop(1)

0x31: Stack[-11] = (int) 150
0x32: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x33: Stack[0 + Tasks[-1].StackPointer] = Stack[-25]
0x34: @ IsPlayerActor(Stack[-0], Stack[-8])
0x35: Pop(0)
0x36: Push(Stack[-8])
0x37: IF (Stack[-1] == 0) GOTO 0x40; Pop(1)

0x38: Push("attack")
0x39: @ PlayGlobalMusic(Stack[-1])
0x3a: Pop(1)
0x3b: PushEmpty(object)
0x3c: Call2 0x5c4

0x3d: Pop(0)
0x3e: @ SendPlayerEnemy(Stack[-26], Stack[-1])
0x3f: Pop(1)
0x40: Push(Stack[-24])
0x41: IF (Stack[-1] == 0) GOTO 0x44; Pop(1)

0x42: Stack[-7] = (bool) 0
0x43: GOTO 0x45

0x44: Stack[-7] = (bool) 1
0x45: Push((float)400.0)
0x46: Stack[-7] = Stack[-1] + Stack[-12]; Pop(1);
0x47: PushEmpty(bool)
0x48: Stack[-1] = (bool) 0
0x49: PushEmpty(bool, object)
0x4a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4b: Call2 0x4ef

0x4c: Pop(1)
0x4d: IF (Stack[-1] == 0) GOTO 0x51; Pop(1)

0x4e: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x4f: IF (Stack[-1] == 0) GOTO 0x51; Pop(1)

0x50: Stack[-1] = (bool) 1
0x51: IF (Stack[-1] == 0) GOTO 0xf3; Pop(1)

0x52: PushEmpty()
0x53: Call2 0x2a1

0x54: Pop(0)
0x55: @@ GetPFPosition(Stack[-10])
0x56: Pop(0)
0x57: @ GetPFPosition(Stack[-9])
0x58: Pop(0)
0x59: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0x5a: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x5b: Pop(0); Push(Stack[-6] * Stack[-6]);
0x5c: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0x5d: IF (Stack[-1] == 0) GOTO 0x6d; Pop(1)

0x5e: PushEmpty(bool, object, float, float, bool, bool)
0x5f: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0x60: Stack[-4] = Stack[-17]
0x61: Stack[-3] = (float) 10000.0
0x62: Stack[-2] = (bool) 1
0x63: Stack[-1] = (bool) 0
0x64: Push(-6, 3); TaskCall(2)
0x65: Call2 0x2b5

0x66: Pop(-6, 3); TaskReturn
0x67: Pop(5)
0x68: Pop(1); Push((bool) Stack[-1] == 0)
0x69: IF (Stack[-1] == 0) GOTO 0x6b; Pop(1)

0x6a: GOTO 0xf3

0x6b: Stack[-7] = (bool) 0
0x6c: GOTO 0xf2

0x6d: Pop(0); Push(Stack[-23] * Stack[-23]);
0x6e: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0x6f: IF (Stack[-1] == 0) GOTO 0xea; Pop(1)

0x70: @@ GetPFPosition(Stack[-3])
0x71: Pop(0)
0x72: @ CanReachByPF(Stack[-2], Stack[-3])
0x73: Pop(0)
0x74: Pop(0); Push((bool) Stack[-2] == 0)
0x75: IF (Stack[-1] == 0) GOTO 0x85; Pop(1)

0x76: PushEmpty(bool, object, float, float, bool, bool)
0x77: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0x78: Stack[-4] = Stack[-17]
0x79: Stack[-3] = (float) 10000.0
0x7a: Stack[-2] = (bool) 1
0x7b: Stack[-1] = (bool) 0
0x7c: Push(-6, 3); TaskCall(2)
0x7d: Call2 0x2b5

0x7e: Pop(-6, 3); TaskReturn
0x7f: Pop(5)
0x80: Pop(1); Push((bool) Stack[-1] == 0)
0x81: IF (Stack[-1] == 0) GOTO 0x83; Pop(1)

0x82: GOTO 0xf3

0x83: Stack[-7] = (bool) 0
0x84: GOTO 0x47

0x85: Pop(0); Push((bool) Stack[-7] == 0)
0x86: IF (Stack[-1] == 0) GOTO 0x9e; Pop(1)

0x87: PushEmpty(object)
0x88: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x89: Call2 0x585

0x8a: Pop(1)
0x8b: Push("all")
0x8c: Push("attack_on")
0x8d: @ PlayAnimation(Stack[-2], Stack[-1])
0x8e: Pop(2)
0x8f: @ WaitForAnimEnd()
0x90: Pop(0)
0x91: PushEmpty()
0x92: Call2 0x2a1

0x93: Pop(0)
0x94: @ StopAsync()
0x95: Pop(0)
0x96: Stack[-7] = (bool) 1
0x97: PushEmpty(bool, object)
0x98: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x99: Call2 0x4ef

0x9a: Pop(1)
0x9b: Pop(1); Push((bool) Stack[-1] == 0)
0x9c: IF (Stack[-1] == 0) GOTO 0x9e; Pop(1)

0x9d: GOTO 0xf3

0x9e: @ rand(Stack[-1])
0x9f: Pop(0)
0xa0: PushEmpty(bool)
0xa1: Stack[-1] = (bool) 1
0xa2: Push((float)0.25)
0xa3: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0xa4: IF (Stack[-1] == 0) GOTO 0xaa; Pop(1)

0xa5: PushEmpty(bool)
0xa6: Call2 0x276

0xa7: Pop(0)
0xa8: IF (Stack[-1] == 0) GOTO 0xaa; Pop(1)

0xa9: Stack[-1] = (bool) 0
0xaa: IF (Stack[-1] == 0) GOTO 0xbb; Pop(1)

0xab: @ Face(Stack[-0])
0xac: Pop(0)
0xad: PushEmpty()
0xae: Call2 0x2a8

0xaf: Pop(0)
0xb0: Push("all")
0xb1: Push("attack_stay")
0xb2: @ PlayAnimation(Stack[-2], Stack[-1])
0xb3: Pop(2)
0xb4: PushEmpty(bool, float)
0xb5: Stack[-1] = Stack[-25]
0xb6: Call2 0x1f2

0xb7: Pop(2)
0xb8: @ StopAsync()
0xb9: Pop(0)
0xba: GOTO 0xe9

0xbb: @ Face(Stack[-0])
0xbc: Pop(0)
0xbd: Push("all")
0xbe: Push("fjump")
0xbf: @ PlayAnimation(Stack[-2], Stack[-1])
0xc0: Pop(2)
0xc1: @ WaitForAnimEnd()
0xc2: Pop(0)
0xc3: PushEmpty()
0xc4: Call2 0x2a1

0xc5: Pop(0)
0xc6: Push(CVector(0.0, 0.0, 0.0))
0xc7: @ SetSpeed(Stack[-1])
0xc8: Pop(1)
0xc9: @ Stop()
0xca: Pop(0)
0xcb: @ StopAsync()
0xcc: Pop(0)
0xcd: PushEmpty(bool)
0xce: Call2 0x276

0xcf: Pop(0)
0xd0: Pop(1); Push((bool) Stack[-1] == 0)
0xd1: IF (Stack[-1] == 0) GOTO 0xe9; Pop(1)

0xd2: PushEmpty(bool, object)
0xd3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd4: Call2 0x4ef

0xd5: Pop(1)
0xd6: Pop(1); Push((bool) Stack[-1] == 0)
0xd7: IF (Stack[-1] == 0) GOTO 0xd9; Pop(1)

0xd8: GOTO 0xf3

0xd9: @@ GetPFPosition(Stack[-10])
0xda: Pop(0)
0xdb: @ GetPFPosition(Stack[-9])
0xdc: Pop(0)
0xdd: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0xde: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0xdf: Pop(0); Push(Stack[-23] * Stack[-23]);
0xe0: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0xe1: IF (Stack[-1] == 0) GOTO 0xe9; Pop(1)

0xe2: PushEmpty(bool, float)
0xe3: Stack[-1] = Stack[-25]
0xe4: Call2 0x14e

0xe5: Pop(1)
0xe6: Pop(1); Push((bool) Stack[-1] == 0)
0xe7: IF (Stack[-1] == 0) GOTO 0xe9; Pop(1)

0xe8: GOTO 0xf3

0xe9: GOTO 0xf2

0xea: PushEmpty(bool, float)
0xeb: Stack[-1] = Stack[-25]
0xec: Call2 0x14e

0xed: Pop(1)
0xee: Pop(1); Push((bool) Stack[-1] == 0)
0xef: IF (Stack[-1] == 0) GOTO 0xf1; Pop(1)

0xf0: GOTO 0xf3

0xf1: Stack[-7] = (bool) 1
0xf2: GOTO 0x47

0xf3: @ WaitForAnimEnd()
0xf4: Pop(0)
0xf5: Push( Stack[3 + Tasks[-1].StackPointer] )
0xf6: IF (Stack[-1] == 0) GOTO 0xf8; Pop(1)

0xf7: Return(); Pop(22)

0xf8: Push("all")
0xf9: Push("attack_off")
0xfa: @ PlayAnimation(Stack[-2], Stack[-1])
0xfb: Pop(2)
0xfc: @ WaitForAnimEnd()
0xfd: Pop(0)
0xfe: Push(Stack[-8])
0xff: IF (Stack[-1] == 0) GOTO 0x103; Pop(1)

0x100: Push((float)2.0)
0x101: @ Sleep(Stack[-1])
0x102: Pop(1)
0x103: Return(); Pop(22)

0x104: PushEmpty(bool, bool, cvector, bool, bool, cvector)
0x105: Stack[1 + Tasks[-1].StackPointer] = (int)0
0x106: Push("all")
0x107: Push("attack_begin")
0x108: Push((int) 1)
0x109: Pop(1); Push(Stack[1 + StackPtr] + Stack[-1]);
0x10a: Pop(2); Push(Stack[-2] + Stack[-1]);
0x10b: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0x10c: Pop(2)
0x10d: Pop(0); Push((bool) Stack[-3] == 0)
0x10e: IF (Stack[-1] == 0) GOTO 0x110; Pop(1)

0x10f: GOTO 0x113

0x110: Push((int) 1)
0x111: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x112: GOTO 0x106

0x113: Stack[2 + Tasks[-1].StackPointer] = (int)0
0x114: Push("attack")
0x115: Push((int) 1)
0x116: Pop(1); Push(Stack[2 + StackPtr] + Stack[-1]);
0x117: Pop(2); Push(Stack[-2] + Stack[-1]);
0x118: @ IsExisting3DSound(Stack[-3], Stack[-1])
0x119: Pop(1)
0x11a: Pop(0); Push((bool) Stack[-2] == 0)
0x11b: IF (Stack[-1] == 0) GOTO 0x11d; Pop(1)

0x11c: GOTO 0x120

0x11d: Push((int) 1)
0x11e: Stack[2 + Tasks[-1].StackPointer] = Stack[2 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x11f: GOTO 0x114

0x120: Push("all")
0x121: Push("bjump")
0x122: @ GetAnimationOffset(Stack[-3], Stack[-2], Stack[-1])
0x123: Pop(2)
0x124: Push(CvectorIndex(Stack[-1], 2))
0x125: Stack[4 + Tasks[-1].StackPointer] = -Stack[-1]; Pop(1);
0x126: Return(); Pop(6)

0x127: PushEmpty(object, float, float, object, float, float)
0x128: Push((float)0.9)
0x129: Pop(1); Push(Stack[-9] * Stack[-1]);
0x12a: @ GetVictim(Stack[-1], Stack[-4])
0x12b: Pop(1)
0x12c: @ ReportAttack(Stack[-0])
0x12d: Pop(0)
0x12e: Pop(0); Push((bool) Stack[-3] == Stack[0 + Tasks[-1].StackPointer])
0x12f: IF (Stack[-1] == 0) GOTO 0x14c; Pop(1)

0x130: PushEmpty(float, object, int)
0x131: Stack[-2] = Stack[-6]
0x132: Stack[-1] = Stack[-10]
0x133: Call2 0x19

0x134: Stack[-5] = Stack[-3]
0x135: Pop(3)
0x136: PushEmpty(float, object, float, int)
0x137: Stack[-3] = Stack[-7]
0x138: Stack[-2] = Stack[-6]
0x139: PushEmpty(int, object, int)
0x13a: Stack[-2] = Stack[-10]
0x13b: Stack[-1] = Stack[-14]
0x13c: Call2 0x1c

0x13d: Stack[-4] = Stack[-3]
0x13e: Pop(3)
0x13f: Call2 0x47d

0x140: Stack[-5] = Stack[-4]
0x141: Pop(4)
0x142: PushEmpty(int)
0x143: Call2 0x2a6

0x144: Pop(0)
0x145: @ ReportHit(Stack[-0], Stack[-1], Stack[-2], Stack[-3])
0x146: Pop(1)
0x147: PushEmpty(object, float)
0x148: Stack[-2] = Stack[-5]
0x149: Stack[-1] = Stack[-3]
0x14a: Call2 0x2ad

0x14b: Pop(2)
0x14c: Return(); Pop(6)

0x14d: Stack[-3] = 0
0x14e: PushEmpty(int, bool, int, string, int, bool, int, string)
0x14f: PushEmpty()
0x150: Call2 0x2a1

0x151: Pop(0)
0x152: @ irand(Stack[-4], Stack[-1])
0x153: Pop(0)
0x154: Push((int) 1)
0x155: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x156: @ Face(Stack[-0])
0x157: Pop(0)
0x158: Push((bool) 1)
0x159: @ SetAttackState(Stack[-1])
0x15a: Pop(1)
0x15b: PushEmpty()
0x15c: Call2 0x60c

0x15d: Pop(0)
0x15e: Push("all")
0x15f: Push("attack_begin")
0x160: Pop(1); Push(Stack[-1] + Stack[-6]);
0x161: @ PlayAnimation(Stack[-2], Stack[-1])
0x162: Pop(2)
0x163: @ WaitForAnimEnd()
0x164: Pop(0)
0x165: PushEmpty()
0x166: Call2 0x281

0x167: Pop(0)
0x168: PushEmpty(bool, object)
0x169: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x16a: Call2 0x4ef

0x16b: Pop(1)
0x16c: Pop(1); Push((bool) Stack[-1] == 0)
0x16d: IF (Stack[-1] == 0) GOTO 0x172; Pop(1)

0x16e: @ StopAsync()
0x16f: Pop(0)
0x170: Stack[-10] = (bool) 0
0x171: Return(); Pop(8)

0x172: PushEmpty(float, int)
0x173: Stack[-2] = Stack[-11]
0x174: Stack[-1] = Stack[-6]
0x175: Call2 0x127

0x176: Pop(2)
0x177: Push("all")
0x178: Push("attack_middle")
0x179: Pop(1); Push(Stack[-1] + Stack[-6]);
0x17a: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0x17b: Pop(2)
0x17c: Push(Stack[-3])
0x17d: IF (Stack[-1] == 0) GOTO 0x1c3; Pop(1)

0x17e: PushEmpty()
0x17f: Call2 0x60c

0x180: Pop(0)
0x181: Push("all")
0x182: Push("attack_middle")
0x183: Pop(1); Push(Stack[-1] + Stack[-6]);
0x184: @ PlayAnimation(Stack[-2], Stack[-1])
0x185: Pop(2)
0x186: @ WaitForAnimEnd()
0x187: Pop(0)
0x188: PushEmpty()
0x189: Call2 0x2a1

0x18a: Pop(0)
0x18b: PushEmpty(bool, object)
0x18c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x18d: Call2 0x4ef

0x18e: Pop(1)
0x18f: Pop(1); Push((bool) Stack[-1] == 0)
0x190: IF (Stack[-1] == 0) GOTO 0x195; Pop(1)

0x191: @ StopAsync()
0x192: Pop(0)
0x193: Stack[-10] = (bool) 0
0x194: Return(); Pop(8)

0x195: PushEmpty(float, int)
0x196: Stack[-2] = Stack[-11]
0x197: Stack[-1] = Stack[-6]
0x198: Call2 0x127

0x199: Pop(2)
0x19a: Stack[-2] = (int) 1
0x19b: Push("attack_middle")
0x19c: Pop(1); Push(Stack[-1] + Stack[-5]);
0x19d: Push("_")
0x19e: Pop(2); Push(Stack[-2] + Stack[-1]);
0x19f: Stack[-2] = Stack[-1] + Stack[-3]; Pop(1);
0x1a0: Push("all")
0x1a1: @ HasAnimation(Stack[-4], Stack[-1], Stack[-2])
0x1a2: Pop(1)
0x1a3: Pop(0); Push((bool) Stack[-3] == 0)
0x1a4: IF (Stack[-1] == 0) GOTO 0x1a6; Pop(1)

0x1a5: GOTO 0x1c3

0x1a6: PushEmpty()
0x1a7: Call2 0x60c

0x1a8: Pop(0)
0x1a9: Push("all")
0x1aa: @ PlayAnimation(Stack[-1], Stack[-2])
0x1ab: Pop(1)
0x1ac: @ WaitForAnimEnd()
0x1ad: Pop(0)
0x1ae: PushEmpty()
0x1af: Call2 0x2a1

0x1b0: Pop(0)
0x1b1: PushEmpty(bool, object)
0x1b2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1b3: Call2 0x4ef

0x1b4: Pop(1)
0x1b5: Pop(1); Push((bool) Stack[-1] == 0)
0x1b6: IF (Stack[-1] == 0) GOTO 0x1bb; Pop(1)

0x1b7: @ StopAsync()
0x1b8: Pop(0)
0x1b9: Stack[-10] = (bool) 0
0x1ba: Return(); Pop(8)

0x1bb: PushEmpty(float, int)
0x1bc: Stack[-2] = Stack[-11]
0x1bd: Stack[-1] = Stack[-6]
0x1be: Call2 0x127

0x1bf: Pop(2)
0x1c0: Push((int) 1)
0x1c1: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x1c2: GOTO 0x19b

0x1c3: Push((bool) 0)
0x1c4: @ SetAttackState(Stack[-1])
0x1c5: Pop(1)
0x1c6: Push("all")
0x1c7: Push("attack_end")
0x1c8: Pop(1); Push(Stack[-1] + Stack[-6]);
0x1c9: @ PlayAnimation(Stack[-2], Stack[-1])
0x1ca: Pop(2)
0x1cb: PushEmpty(bool)
0x1cc: Call2 0x2af

0x1cd: Pop(0)
0x1ce: IF (Stack[-1] == 0) GOTO 0x1d5; Pop(1)

0x1cf: PushEmpty(bool, float)
0x1d0: Stack[-1] = (float) 0.75
0x1d1: Call2 0x1d7

0x1d2: Pop(2)
0x1d3: @ StopAsync()
0x1d4: Pop(0)
0x1d5: Stack[-10] = (bool) 1
0x1d6: Return(); Pop(8)

0x1d7: PushEmpty(float, bool, float, bool)
0x1d8: @ rand(Stack[-2])
0x1d9: Pop(0)
0x1da: Pop(0); Push((bool) Stack[-2] < Stack[-5])
0x1db: IF (Stack[-1] == 0) GOTO 0x1eb; Pop(1)

0x1dc: @ IsAnimationPlaying(Stack[-1])
0x1dd: Pop(0)
0x1de: Pop(0); Push((bool) Stack[-1] == 0)
0x1df: IF (Stack[-1] == 0) GOTO 0x1e1; Pop(1)

0x1e0: GOTO 0x1ea

0x1e1: PushEmpty(bool)
0x1e2: Call2 0x239

0x1e3: Pop(0)
0x1e4: IF (Stack[-1] == 0) GOTO 0x1e7; Pop(1)

0x1e5: Stack[-6] = (bool) 1
0x1e6: Return(); Pop(4)

0x1e7: @ sync()
0x1e8: Pop(0)
0x1e9: GOTO 0x1dc

0x1ea: GOTO 0x1f0

0x1eb: @ WaitForAnimEnd()
0x1ec: Pop(0)
0x1ed: PushEmpty()
0x1ee: Call2 0x2a1

0x1ef: Pop(0)
0x1f0: Stack[-6] = (bool) 0
0x1f1: Return(); Pop(4)

0x1f2: PushEmpty(bool, cvector, cvector, cvector, float, bool, cvector, cvector, cvector, float)
0x1f3: @ IsAnimationPlaying(Stack[-5])
0x1f4: Pop(0)
0x1f5: Pop(0); Push((bool) Stack[-5] == 0)
0x1f6: IF (Stack[-1] == 0) GOTO 0x1f8; Pop(1)

0x1f7: GOTO 0x218

0x1f8: PushEmpty(bool)
0x1f9: Call2 0x239

0x1fa: Pop(0)
0x1fb: IF (Stack[-1] == 0) GOTO 0x1fe; Pop(1)

0x1fc: Stack[-12] = (bool) 1
0x1fd: Return(); Pop(10)

0x1fe: PushEmpty(bool, object)
0x1ff: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x200: Call2 0x4ef

0x201: Pop(1)
0x202: Pop(1); Push((bool) Stack[-1] == 0)
0x203: IF (Stack[-1] == 0) GOTO 0x206; Pop(1)

0x204: Stack[-12] = (bool) 0
0x205: Return(); Pop(10)

0x206: @@ GetPFPosition(Stack[-4])
0x207: Pop(0)
0x208: @ GetPFPosition(Stack[-3])
0x209: Pop(0)
0x20a: Stack[-2] = Stack[-4] - Stack[-3]; Pop(0);
0x20b: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x20c: Pop(0); Push(Stack[-11] * Stack[-11]);
0x20d: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x20e: IF (Stack[-1] == 0) GOTO 0x215; Pop(1)

0x20f: PushEmpty(bool, float)
0x210: Stack[-1] = Stack[-13]
0x211: Call2 0x14e

0x212: Pop(2)
0x213: Stack[-12] = (bool) 1
0x214: Return(); Pop(10)

0x215: @ sync()
0x216: Pop(0)
0x217: GOTO 0x1f3

0x218: PushEmpty()
0x219: Call2 0x2a1

0x21a: Pop(0)
0x21b: Stack[-12] = (bool) 0
0x21c: Return(); Pop(10)

0x21d: PushEmpty(cvector, cvector, cvector, float, float, cvector, cvector, cvector, float, float)
0x21e: PushEmpty(bool, object)
0x21f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x220: Call2 0x4ef

0x221: Pop(1)
0x222: Pop(1); Push((bool) Stack[-1] == 0)
0x223: IF (Stack[-1] == 0) GOTO 0x226; Pop(1)

0x224: Stack[-11] = (bool) 0
0x225: Return(); Pop(10)

0x226: PushEmpty(bool)
0x227: Call2 0x276

0x228: Pop(0)
0x229: IF (Stack[-1] == 0) GOTO 0x237; Pop(1)

0x22a: @@ GetPFPosition(Stack[-5])
0x22b: Pop(0)
0x22c: @ GetPFPosition(Stack[-4])
0x22d: Pop(0)
0x22e: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x22f: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x230: @@ GetAttackDistance(Stack[-1])
0x231: Pop(0)
0x232: Push((int) 50)
0x233: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x234: Pop(0); Push(Stack[-1] * Stack[-1]);
0x235: Stack[-12] = Stack[-3] <= Stack[-1]; Pop(1);
0x236: Return(); Pop(10)

0x237: Stack[-11] = (bool) 0
0x238: Return(); Pop(10)

0x239: PushEmpty(bool)
0x23a: Stack[-1] = (bool) 0
0x23b: PushEmpty(bool)
0x23c: Call2 0x21d

0x23d: Pop(0)
0x23e: IF (Stack[-1] == 0) GOTO 0x244; Pop(1)

0x23f: PushEmpty(bool)
0x240: Call2 0x249

0x241: Pop(0)
0x242: IF (Stack[-1] == 0) GOTO 0x244; Pop(1)

0x243: Stack[-1] = (bool) 1
0x244: IF (Stack[-1] == 0) GOTO 0x247; Pop(1)

0x245: Stack[-1] = (bool) 1
0x246: Return(); Pop(0)

0x247: Stack[-1] = (bool) 0
0x248: Return(); Pop(0)

0x249: PushEmpty(object, bool, float, cvector, cvector, object, bool, float, cvector, cvector)
0x24a: @ GetScene(Stack[-5])
0x24b: Pop(0)
0x24c: Stack[-4] = (bool) 0
0x24d: PushEmpty(cvector, object)
0x24e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x24f: Call2 0x465

0x250: Pop(1)
0x251: Pop(1); Push(( -Stack[-1])
0x252: @ FindDirLength(Stack[-4], Stack[-1], Stack[-4])
0x253: Pop(1)
0x254: Pop(0); Push((bool) Stack[-3] < Stack[4 + Tasks[-1].StackPointer])
0x255: IF (Stack[-1] == 0) GOTO 0x257; Pop(1)

0x256: GOTO 0x273

0x257: @ Face(Stack[-0])
0x258: Pop(0)
0x259: Push("all")
0x25a: Push("bjump")
0x25b: @ PlayAnimation(Stack[-2], Stack[-1])
0x25c: Pop(2)
0x25d: @@ GetPFPosition(Stack[-2])
0x25e: Pop(0)
0x25f: @ GetPFPosition(Stack[-1])
0x260: Pop(0)
0x261: @ WaitForAnimEnd()
0x262: Pop(0)
0x263: PushEmpty()
0x264: Call2 0x2a1

0x265: Pop(0)
0x266: @ StopAsync()
0x267: Pop(0)
0x268: Push(CVector(0.0, 0.0, 0.0))
0x269: @ SetSpeed(Stack[-1])
0x26a: Pop(1)
0x26b: Stack[-4] = (bool) 1
0x26c: PushEmpty(bool)
0x26d: Call2 0x21d

0x26e: Pop(0)
0x26f: Pop(1); Push((bool) Stack[-1] == 0)
0x270: IF (Stack[-1] == 0) GOTO 0x272; Pop(1)

0x271: GOTO 0x273

0x272: GOTO 0x24d

0x273: Stack[-11] = Stack[-4]
0x274: Return(); Pop(10)

0x275: Stack[-5] = 0
0x276: PushEmpty(bool, bool)
0x277: Push("IsAttacking")
0x278: Push((int) 1)
0x279: Pop(2); Push(IsFuncExist(Stack[0 + Tasks[-1].StackPointer], Stack[-2], Stack[-1]))
0x27a: IF (Stack[-1] == 0) GOTO 0x27f; Pop(1)

0x27b: @@ IsAttacking(Stack[-1])
0x27c: Pop(0)
0x27d: Stack[-3] = Stack[-1]
0x27e: Return(); Pop(2)

0x27f: Stack[-3] = (bool) 0
0x280: Return(); Pop(2)

0x281: PushEmpty(float, int, float, int)
0x282: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x283: IF (Stack[-1] == 0) GOTO 0x285; Pop(1)

0x284: Return(); Pop(4)

0x285: Push( Stack[5 + Tasks[-1].StackPointer] )
0x286: IF (Stack[-1] == 0) GOTO 0x28d; Pop(1)

0x287: Push((int) -1)
0x288: Stack[5 + Tasks[-1].StackPointer] = Stack[5 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x289: Push((int) 0)
0x28a: Pop(1); Push((bool) Stack[5 + Tasks[-1].StackPointer] > Stack[-1])
0x28b: IF (Stack[-1] == 0) GOTO 0x28d; Pop(1)

0x28c: Return(); Pop(4)

0x28d: @ rand(Stack[-2])
0x28e: Pop(0)
0x28f: PushEmpty(float)
0x290: Call2 0x2b3

0x291: Pop(0)
0x292: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x293: IF (Stack[-1] == 0) GOTO 0x2a0; Pop(1)

0x294: @ irand(Stack[-1], Stack[-2])
0x295: Pop(0)
0x296: Push((int) 1)
0x297: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x298: Push("attack")
0x299: Pop(1); Push(Stack[-1] + Stack[-2]);
0x29a: @ Speak(Stack[-1])
0x29b: Pop(1)
0x29c: PushEmpty(int)
0x29d: Call2 0x2b1

0x29e: Stack[5 + Tasks[-1].StackPointer] = Stack[-1]
0x29f: Pop(1)
0x2a0: Return(); Pop(4)

0x2a1: PushEmpty(object)
0x2a2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2a3: Call2 0x603

0x2a4: Pop(1)
0x2a5: Return(); Pop(0)

0x2a6: Stack[-1] = (int) 0
0x2a7: Return(); Pop(0)

0x2a8: PushEmpty(string)
0x2a9: Stack[-1] = "attack_stay"
0x2aa: Call2 0x59b

0x2ab: Pop(1)
0x2ac: Return(); Pop(0)

0x2ad: PushEmpty()
0x2ae: Return(); Pop(0)

0x2af: Stack[-1] = (bool) 1
0x2b0: Return(); Pop(0)

0x2b1: Stack[-1] = (int) 1
0x2b2: Return(); Pop(0)

0x2b3: Stack[-1] = (float) 0.5
0x2b4: Return(); Pop(0)

0x2b5: PushEmpty(bool, bool, bool, bool)
0x2b6: PushEmpty(object)
0x2b7: Stack[-1] = Stack[-10]
0x2b8: Call2 0x603

0x2b9: Pop(1)
0x2ba: Push((int) 1)
0x2bb: Push((int) 5)
0x2bc: @ SetTimer(Stack[-2], Stack[-1])
0x2bd: Pop(2)
0x2be: @ CanSee(Stack[-2], Stack[-9])
0x2bf: Pop(0)
0x2c0: Push(Stack[-2])
0x2c1: IF (Stack[-1] == 0) GOTO 0x2c8; Pop(1)

0x2c2: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x2c3: PushEmpty(object)
0x2c4: Stack[-1] = Stack[-10]
0x2c5: Call2 0x590

0x2c6: Pop(1)
0x2c7: GOTO 0x2c9

0x2c8: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x2c9: PushEmpty(bool, object)
0x2ca: Stack[-1] = Stack[-11]
0x2cb: Call2 0x46c

0x2cc: Pop(1)
0x2cd: IF (Stack[-1] == 0) GOTO 0x2d3; Pop(1)

0x2ce: PushEmpty(object)
0x2cf: Call2 0x5c4

0x2d0: Pop(0)
0x2d1: @ SendPlayerEnemy(Stack[-10], Stack[-1])
0x2d2: Pop(1)
0x2d3: PushEmpty(bool, object, float, float, bool, bool)
0x2d4: Stack[-5] = Stack[-15]
0x2d5: Stack[-4] = Stack[-14]
0x2d6: Stack[-3] = Stack[-13]
0x2d7: Stack[-2] = Stack[-12]
0x2d8: Stack[-1] = Stack[-11]
0x2d9: Call2 0x31e

0x2da: Stack[-7] = Stack[-6]
0x2db: Pop(6)
0x2dc: Push( Stack[2 + Tasks[-1].StackPointer] )
0x2dd: IF (Stack[-1] == 0) GOTO 0x2e1; Pop(1)

0x2de: Push("head")
0x2df: @ UnlookAsync(Stack[-1])
0x2e0: Pop(1)
0x2e1: Push((int) 1)
0x2e2: @ KillTimer(Stack[-1])
0x2e3: Pop(1)
0x2e4: Stack[-10] = Stack[-1]
0x2e5: Return(); Pop(4)

0x2e6: PushEmpty()
0x2e7: Push((int) 1)
0x2e8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2e9: IF (Stack[-1] == 0) GOTO 0x2ef; Pop(1)

0x2ea: PushEmpty(object)
0x2eb: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2ec: Call2 0x603

0x2ed: Pop(1)
0x2ee: GOTO 0x2f3

0x2ef: PushEmpty(int)
0x2f0: Stack[-1] = Stack[-2]
0x2f1: Call2 0x384

0x2f2: Pop(1)
0x2f3: Return(); Pop(0)

0x2f4: Push((int) 1)
0x2f5: @ KillTimer(Stack[-1])
0x2f6: Pop(1)
0x2f7: Push( Stack[2 + Tasks[-1].StackPointer] )
0x2f8: IF (Stack[-1] == 0) GOTO 0x2fd; Pop(1)

0x2f9: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x2fa: Push("head")
0x2fb: @ UnlookAsync(Stack[-1])
0x2fc: Pop(1)
0x2fd: PushEmpty()
0x2fe: Call2 0x39a

0x2ff: Pop(0)
0x300: Return(); Pop(0)

0x301: PushEmpty()
0x302: PushEmpty(bool)
0x303: Stack[-1] = (bool) 0
0x304: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0x305: IF (Stack[-1] == 0) GOTO 0x309; Pop(1)

0x306: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x307: IF (Stack[-1] == 0) GOTO 0x309; Pop(1)

0x308: Stack[-1] = (bool) 1
0x309: IF (Stack[-1] == 0) GOTO 0x30f; Pop(1)

0x30a: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x30b: PushEmpty(object)
0x30c: Stack[-1] = Stack[-2]
0x30d: Call2 0x590

0x30e: Pop(1)
0x30f: Return(); Pop(0)

0x310: PushEmpty()
0x311: PushEmpty(bool)
0x312: Stack[-1] = (bool) 0
0x313: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0x314: IF (Stack[-1] == 0) GOTO 0x318; Pop(1)

0x315: Push( Stack[2 + Tasks[-1].StackPointer] )
0x316: IF (Stack[-1] == 0) GOTO 0x318; Pop(1)

0x317: Stack[-1] = (bool) 1
0x318: IF (Stack[-1] == 0) GOTO 0x31d; Pop(1)

0x319: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x31a: Push("head")
0x31b: @ UnlookAsync(Stack[-1])
0x31c: Pop(1)
0x31d: Return(); Pop(0)

0x31e: PushEmpty(bool, bool, object, cvector, cvector, cvector, float, object, bool, bool, object, cvector, cvector, cvector, float, object)
0x31f: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x320: Stack[1 + Tasks[-1].StackPointer] = Stack[-21]
0x321: Stack[-7] = Stack[-17]
0x322: PushEmpty(bool, object)
0x323: Stack[-1] = Stack[-23]
0x324: Call2 0x3aa

0x325: Pop(1)
0x326: Pop(1); Push((bool) Stack[-1] == 0)
0x327: IF (Stack[-1] == 0) GOTO 0x32a; Pop(1)

0x328: Stack[-22] = (bool) 0
0x329: Return(); Pop(16)

0x32a: @@ GetPosition(Stack[-5])
0x32b: Pop(0)
0x32c: @ GetPosition(Stack[-4])
0x32d: Pop(0)
0x32e: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x32f: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x330: PushEmpty(bool)
0x331: Stack[-1] = (bool) 0
0x332: Push((int) 0)
0x333: Pop(1); Push((bool) Stack[-21] > Stack[-1])
0x334: IF (Stack[-1] == 0) GOTO 0x339; Pop(1)

0x335: Pop(0); Push(Stack[-20] * Stack[-20]);
0x336: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x337: IF (Stack[-1] == 0) GOTO 0x339; Pop(1)

0x338: Stack[-1] = (bool) 1
0x339: IF (Stack[-1] == 0) GOTO 0x33e; Pop(1)

0x33a: @ Stop()
0x33b: Pop(0)
0x33c: Stack[-22] = (bool) 0
0x33d: Return(); Pop(16)

0x33e: Pop(0); Push(Stack[-20] * Stack[-20]);
0x33f: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x340: IF (Stack[-1] == 0) GOTO 0x37c; Pop(1)

0x341: @@ GetPFPosition(Stack[-5])
0x342: Pop(0)
0x343: @ FindPathTo(Stack[-1], Stack[-5])
0x344: Pop(0)
0x345: Pop(0); Push(( Stack[-1] != 0 )
0x346: IF (Stack[-1] == 0) GOTO 0x349; Pop(1)

0x347: Stack[-6] = Stack[-1]
0x348: Stack[-1] = 0
0x349: Pop(0); Push(( Stack[-6] != 0 )
0x34a: IF (Stack[-1] == 0) GOTO 0x36a; Pop(1)

0x34b: Push(Stack[-7])
0x34c: IF (Stack[-1] == 0) GOTO 0x353; Pop(1)

0x34d: Stack[-7] = (bool) 0
0x34e: @ RotatePath(Stack[-6], Stack[-8])
0x34f: Pop(0)
0x350: Pop(0); Push((bool) Stack[-8] == 0)
0x351: IF (Stack[-1] == 0) GOTO 0x353; Pop(1)

0x352: GOTO 0x382

0x353: Push((int) 0)
0x354: Push((float)0.3)
0x355: @ SetTimer(Stack[-2], Stack[-1])
0x356: Pop(2)
0x357: PushEmpty(string)
0x358: Call2 0x3b1

0x359: Pop(0)
0x35a: PushEmpty(string)
0x35b: Call2 0x3b3

0x35c: Pop(0)
0x35d: @ FollowPath(Stack[-8], Stack[-20], Stack[-10], Stack[-2], Stack[-1])
0x35e: Pop(2)
0x35f: Pop(0); Push((bool) Stack[-8] == 0)
0x360: IF (Stack[-1] == 0) GOTO 0x368; Pop(1)

0x361: Push( Stack[0 + Tasks[-1].StackPointer] )
0x362: IF (Stack[-1] == 0) GOTO 0x366; Pop(1)

0x363: Stack[-6] = 0
0x364: GOTO 0x382

0x365: GOTO 0x367

0x366: GOTO 0x381

0x367: GOTO 0x369

0x368: Stack[-6] = 0
0x369: GOTO 0x37a

0x36a: Push((int) 0)
0x36b: @ KillTimer(Stack[-1])
0x36c: Pop(1)
0x36d: Push((float)0.5)
0x36e: @ Sleep(Stack[-1], Stack[-9])
0x36f: Pop(1)
0x370: Pop(0); Push((bool) Stack[-8] == 0)
0x371: IF (Stack[-1] == 0) GOTO 0x376; Pop(1)

0x372: Push( Stack[0 + Tasks[-1].StackPointer] )
0x373: IF (Stack[-1] == 0) GOTO 0x376; Pop(1)

0x374: Stack[-6] = 0
0x375: GOTO 0x382

0x376: Push((int) 0)
0x377: Push((float)0.3)
0x378: @ SetTimer(Stack[-2], Stack[-1])
0x379: Pop(2)
0x37a: Stack[-1] = 0
0x37b: GOTO 0x380

0x37c: Push((int) 0)
0x37d: @ KillTimer(Stack[-1])
0x37e: Pop(1)
0x37f: GOTO 0x382

0x380: Stack[-6] = 0
0x381: GOTO 0x322

0x382: Stack[-22] = !Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x383: Return(); Pop(16)

0x384: PushEmpty()
0x385: Push((int) 0)
0x386: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x387: IF (Stack[-1] == 0) GOTO 0x389; Pop(1)

0x388: Return(); Pop(0)

0x389: PushEmpty(bool, object)
0x38a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x38b: Call2 0x3aa

0x38c: Pop(1)
0x38d: Pop(1); Push((bool) Stack[-1] == 0)
0x38e: IF (Stack[-1] == 0) GOTO 0x390; Pop(1)

0x38f: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x390: Push((int) 0)
0x391: @ KillTimer(Stack[-1])
0x392: Pop(1)
0x393: @ Stop()
0x394: Pop(0)
0x395: Return(); Pop(0)

0x396: PushEmpty()
0x397: @ RequestClearPath(Stack[-1])
0x398: Pop(0)
0x399: Return(); Pop(0)

0x39a: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x39b: Push((int) 0)
0x39c: @ KillTimer(Stack[-1])
0x39d: Pop(1)
0x39e: @ Stop()
0x39f: Pop(0)
0x3a0: Return(); Pop(0)

0x3a1: PushEmpty()
0x3a2: PushEmpty()
0x3a3: Call2 0x2f4

0x3a4: Pop(0)
0x3a5: PushEmpty(object)
0x3a6: Stack[-1] = Stack[-2]
0x3a7: Call2 0x67a

0x3a8: Pop(1)
0x3a9: Return(); Pop(0)

0x3aa: PushEmpty()
0x3ab: PushEmpty(bool, object)
0x3ac: Stack[-1] = Stack[-3]
0x3ad: Call2 0x4ef

0x3ae: Stack[-4] = Stack[-2]
0x3af: Pop(2)
0x3b0: Return(); Pop(0)

0x3b1: Stack[-1] = "walk"
0x3b2: Return(); Pop(0)

0x3b3: Stack[-1] = "run"
0x3b4: Return(); Pop(0)

0x3b5: PushEmpty()
0x3b6: PushEmpty(bool, string, string)
0x3b7: Stack[-2] = "quest_d5_01"
0x3b8: Stack[-1] = "dead"
0x3b9: Call2 0x5f7

0x3ba: Pop(3)
0x3bb: PushEmpty(object)
0x3bc: Stack[-1] = Stack[-2]
0x3bd: Call2 0x3dc

0x3be: Pop(1)
0x3bf: Push((int) 50)
0x3c0: Push((int) 40)
0x3c1: @ SetRTEnvelope(Stack[-2], Stack[-1])
0x3c2: Pop(2)
0x3c3: PushEmpty()
0x3c4: Call2 0x63b

0x3c5: Pop(0)
0x3c6: @ Hold()
0x3c7: Pop(0)
0x3c8: GOTO 0x3c6

0x3c9: Return(); Pop(0)

0x3ca: PushEmpty(bool, bool)
0x3cb: @ IsOverrideActive(Stack[-1])
0x3cc: Pop(0)
0x3cd: Pop(0); Push((bool) Stack[-1] == 0)
0x3ce: IF (Stack[-1] == 0) GOTO 0x3d3; Pop(1)

0x3cf: PushEmpty(object)
0x3d0: Stack[-1] = Stack[-4]
0x3d1: Call2 0x61d

0x3d2: Pop(1)
0x3d3: Return(); Pop(2)

0x3d4: PushEmpty(object)
0x3d5: Call2 0x5c4

0x3d6: Pop(0)
0x3d7: @ RemoveActor(Stack[-1])
0x3d8: Pop(1)
0x3d9: @ Hold()
0x3da: Pop(0)
0x3db: Return(); Pop(0)

0x3dc: PushEmpty(cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector, cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector)
0x3dd: Pop(0); Push((bool) Stack[-21] == 0)
0x3de: IF (Stack[-1] == 0) GOTO 0x3e4; Pop(1)

0x3df: PushEmpty(string)
0x3e0: Stack[-1] = "fdie"
0x3e1: Call2 0x437

0x3e2: Pop(1)
0x3e3: GOTO 0x436

0x3e4: @@ GetPosition(Stack[-10])
0x3e5: Pop(0)
0x3e6: @ GetPosition(Stack[-9])
0x3e7: Pop(0)
0x3e8: @ GetDirection(Stack[-8])
0x3e9: Pop(0)
0x3ea: Stack[-7] = Stack[-9] - Stack[-10]; Pop(0);
0x3eb: Push(CvectorIndex(Stack[-7], 0))
0x3ec: Push(CvectorIndex(Stack[-9], 0))
0x3ed: Pop(2); Push(Stack[-2] * Stack[-1]);
0x3ee: Push(CvectorIndex(Stack[-8], 2))
0x3ef: Push(CvectorIndex(Stack[-10], 2))
0x3f0: Pop(2); Push(Stack[-2] * Stack[-1]);
0x3f1: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3f2: Push((int) 0)
0x3f3: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x3f4: IF (Stack[-1] == 0) GOTO 0x3f7; Pop(1)

0x3f5: Stack[-6] = "fdie"
0x3f6: GOTO 0x3f8

0x3f7: Stack[-6] = "bdie"
0x3f8: @ RemoveRTEnvelope()
0x3f9: Pop(0)
0x3fa: @ SetDeathState()
0x3fb: Pop(0)
0x3fc: @ Stop()
0x3fd: Pop(0)
0x3fe: @ StopAsync()
0x3ff: Pop(0)
0x400: Stack[-5] = Stack[-21]
0x401: Push("GetScriptProperty")
0x402: Push((int) 2)
0x403: Pop(2); Push(IsFuncExist(Stack[-23], Stack[-2], Stack[-1]))
0x404: IF (Stack[-1] == 0) GOTO 0x410; Pop(1)

0x405: Push("Owner")
0x406: @@ HasScriptProperty(Stack[-5], Stack[-1])
0x407: Pop(1)
0x408: Push(Stack[-4])
0x409: IF (Stack[-1] == 0) GOTO 0x410; Pop(1)

0x40a: Push("Owner")
0x40b: @@ GetScriptProperty(Stack[-6], Stack[-1])
0x40c: Pop(1)
0x40d: Pop(0); Push((bool) Stack[-5] == 0)
0x40e: IF (Stack[-1] == 0) GOTO 0x410; Pop(1)

0x40f: Stack[-5] = Stack[-21]
0x410: Push("@GetEyesHeight")
0x411: Push((int) 1)
0x412: Pop(2); Push(IsFuncExist(Stack[-7], Stack[-2], Stack[-1]))
0x413: IF (Stack[-1] == 0) GOTO 0x41f; Pop(1)

0x414: @@ GetEyesHeight(Stack[-2])
0x415: Pop(0)
0x416: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x417: Push(CvectorIndex(Stack[-1], 1))
0x418: Stack[-1] = Stack[-3]
0x419: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x41a: Push("head")
0x41b: @ LookAsync(Stack[-22], Stack[-1], Stack[-2])
0x41c: Pop(1)
0x41d: Stack[-3] = (bool) 1
0x41e: GOTO 0x420

0x41f: Stack[-3] = (bool) 0
0x420: PushEmpty(string)
0x421: Stack[-1] = Stack[-7]
0x422: Call2 0x59b

0x423: Pop(1)
0x424: Push("all")
0x425: @ PlayAnimation(Stack[-1], Stack[-7])
0x426: Pop(1)
0x427: @ WaitForAnimEnd()
0x428: Pop(0)
0x429: Push(Stack[-3])
0x42a: IF (Stack[-1] == 0) GOTO 0x430; Pop(1)

0x42b: @ StopAsync()
0x42c: Pop(0)
0x42d: Push("head")
0x42e: @ UnlookAsync(Stack[-1])
0x42f: Pop(1)
0x430: Push("all")
0x431: @ LockAnimationEnd(Stack[-1], Stack[-7])
0x432: Pop(1)
0x433: @ RemoveEnvelope()
0x434: Pop(0)
0x435: Stack[-5] = 0
0x436: Return(); Pop(20)

0x437: PushEmpty()
0x438: @ RemoveRTEnvelope()
0x439: Pop(0)
0x43a: @ SetDeathState()
0x43b: Pop(0)
0x43c: @ Stop()
0x43d: Pop(0)
0x43e: @ StopAsync()
0x43f: Pop(0)
0x440: @ StopSecondaryAnimation()
0x441: Pop(0)
0x442: PushEmpty(string)
0x443: Stack[-1] = Stack[-2]
0x444: Call2 0x59b

0x445: Pop(1)
0x446: Push("all")
0x447: @ PlayAnimation(Stack[-1], Stack[-2])
0x448: Pop(1)
0x449: @ WaitForAnimEnd()
0x44a: Pop(0)
0x44b: Push("all")
0x44c: @ LockAnimationEnd(Stack[-1], Stack[-2])
0x44d: Pop(1)
0x44e: @ RemoveEnvelope()
0x44f: Pop(0)
0x450: Return(); Pop(0)

0x451: PushEmpty()
0x452: Return(); Pop(0)

0x453: PushEmpty()
0x454: Return(); Pop(0)

0x455: PushEmpty()
0x456: Return(); Pop(0)

0x457: PushEmpty()
0x458: Push((int) 2)
0x459: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x45a: IF (Stack[-1] == 0) GOTO 0x45e; Pop(1)

0x45b: Stack[-2] = "fire"
0x45c: Return(); Pop(0)

0x45d: GOTO 0x463

0x45e: Push((int) 1)
0x45f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x460: IF (Stack[-1] == 0) GOTO 0x463; Pop(1)

0x461: Stack[-2] = "bullet"
0x462: Return(); Pop(0)

0x463: Stack[-2] = "phys"
0x464: Return(); Pop(0)

0x465: PushEmpty(cvector, cvector, cvector, cvector)
0x466: @ GetPosition(Stack[-2])
0x467: Pop(0)
0x468: @@ GetPosition(Stack[-1])
0x469: Pop(0)
0x46a: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x46b: Return(); Pop(4)

0x46c: PushEmpty(bool, bool)
0x46d: @ IsPlayerActor(Stack[-3], Stack[-1])
0x46e: Pop(0)
0x46f: Stack[-4] = Stack[-1]
0x470: Return(); Pop(2)

0x471: PushEmpty(bool, bool)
0x472: Push("HasProperty")
0x473: Push((int) 2)
0x474: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x475: Pop(1); Push((bool) Stack[-1] == 0)
0x476: IF (Stack[-1] == 0) GOTO 0x479; Pop(1)

0x477: Stack[-5] = (bool) 0
0x478: Return(); Pop(2)

0x479: @@ HasProperty(Stack[-3], Stack[-1])
0x47a: Pop(0)
0x47b: Stack[-5] = Stack[-1]
0x47c: Return(); Pop(2)

0x47d: PushEmpty(int, string, int, float, float, float, int, string, int, float, float, float)
0x47e: PushEmpty(bool, object, string)
0x47f: Stack[-2] = Stack[-18]
0x480: Stack[-1] = "health"
0x481: Call2 0x471

0x482: Pop(2)
0x483: Pop(1); Push((bool) Stack[-1] == 0)
0x484: IF (Stack[-1] == 0) GOTO 0x487; Pop(1)

0x485: Stack[-16] = (float) 0.0
0x486: Return(); Pop(12)

0x487: PushEmpty(bool, object, string)
0x488: Stack[-2] = Stack[-18]
0x489: Stack[-1] = "armor"
0x48a: Call2 0x471

0x48b: Pop(2)
0x48c: Pop(1); Push((bool) Stack[-1] == 0)
0x48d: IF (Stack[-1] == 0) GOTO 0x490; Pop(1)

0x48e: Stack[-6] = (int) 0
0x48f: GOTO 0x493

0x490: Push("armor")
0x491: @@ GetProperty(Stack[-1], Stack[-7])
0x492: Pop(1)
0x493: Push("armor_")
0x494: PushEmpty(string, int)
0x495: Stack[-1] = Stack[-16]
0x496: Call2 0x457

0x497: Pop(1)
0x498: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x499: PushEmpty(bool, object, string)
0x49a: Stack[-2] = Stack[-18]
0x49b: Stack[-1] = Stack[-8]
0x49c: Call2 0x471

0x49d: Pop(2)
0x49e: Pop(1); Push((bool) Stack[-1] == 0)
0x49f: IF (Stack[-1] == 0) GOTO 0x4a2; Pop(1)

0x4a0: Stack[-4] = (int) 0
0x4a1: GOTO 0x4a4

0x4a2: @@ GetProperty(Stack[-5], Stack[-4])
0x4a3: Pop(0)
0x4a4: PushEmpty(float, float, float)
0x4a5: Pop(0); Push(Stack[-9] + Stack[-7]);
0x4a6: Push((float)100.0)
0x4a7: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0x4a8: Stack[-1] = (int) 1
0x4a9: Call2 0x5d4

0x4aa: Stack[-6] = Stack[-3]
0x4ab: Pop(3)
0x4ac: Push("health")
0x4ad: @@ GetProperty(Stack[-1], Stack[-3])
0x4ae: Pop(1)
0x4af: Push((int) 1)
0x4b0: Pop(1); Push(Stack[-1] - Stack[-4]);
0x4b1: Stack[-2] = Stack[-15] * Stack[-1]; Pop(1);
0x4b2: Push("health")
0x4b3: PushEmpty(float, float, float, float)
0x4b4: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0x4b5: Stack[-2] = (int) 0
0x4b6: Stack[-1] = (int) 1
0x4b7: Call2 0x5db

0x4b8: Pop(3)
0x4b9: @@ SetProperty(Stack[-2], Stack[-1])
0x4ba: Pop(2)
0x4bb: PushEmpty(bool, object)
0x4bc: Stack[-1] = Stack[-17]
0x4bd: Call2 0x46c

0x4be: Pop(1)
0x4bf: IF (Stack[-1] == 0) GOTO 0x4c4; Pop(1)

0x4c0: PushEmpty(float)
0x4c1: Stack[-1] = -Stack[-2]; Pop(0);
0x4c2: Call2 0x5e6

0x4c3: Pop(1)
0x4c4: Stack[-16] = Stack[-1]
0x4c5: Return(); Pop(12)

0x4c6: PushEmpty(bool, bool)
0x4c7: @@ IsDead(Stack[-1])
0x4c8: Pop(0)
0x4c9: Stack[-4] = Stack[-1]
0x4ca: Return(); Pop(2)

0x4cb: PushEmpty(object, object, object, object)
0x4cc: Pop(0); Push((bool) Stack[-5] == 0)
0x4cd: IF (Stack[-1] == 0) GOTO 0x4d0; Pop(1)

0x4ce: Stack[-6] = (bool) 0
0x4cf: Return(); Pop(4)

0x4d0: PushEmpty(bool)
0x4d1: Stack[-1] = (bool) 0
0x4d2: Push("IsDead")
0x4d3: Push((int) 1)
0x4d4: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x4d5: IF (Stack[-1] == 0) GOTO 0x4dc; Pop(1)

0x4d6: PushEmpty(bool, object)
0x4d7: Stack[-1] = Stack[-8]
0x4d8: Call2 0x4c6

0x4d9: Pop(1)
0x4da: IF (Stack[-1] == 0) GOTO 0x4dc; Pop(1)

0x4db: Stack[-1] = (bool) 1
0x4dc: IF (Stack[-1] == 0) GOTO 0x4df; Pop(1)

0x4dd: Stack[-6] = (bool) 0
0x4de: Return(); Pop(4)

0x4df: @ GetScene(Stack[-2])
0x4e0: Pop(0)
0x4e1: Pop(0); Push((bool) Stack[-2] == 0)
0x4e2: IF (Stack[-1] == 0) GOTO 0x4e5; Pop(1)

0x4e3: Stack[-6] = (bool) 0
0x4e4: Return(); Pop(4)

0x4e5: @@ GetScene(Stack[-1])
0x4e6: Pop(0)
0x4e7: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x4e8: IF (Stack[-1] == 0) GOTO 0x4eb; Pop(1)

0x4e9: Stack[-6] = (bool) 0
0x4ea: Return(); Pop(4)

0x4eb: Stack[-6] = (bool) 1
0x4ec: Return(); Pop(4)

0x4ed: Stack[-1] = 0
0x4ee: Stack[-2] = 0
0x4ef: PushEmpty(int, int)
0x4f0: PushEmpty(bool, object)
0x4f1: Stack[-1] = Stack[-5]
0x4f2: Call2 0x4cb

0x4f3: Pop(1)
0x4f4: Pop(1); Push((bool) Stack[-1] == 0)
0x4f5: IF (Stack[-1] == 0) GOTO 0x4f8; Pop(1)

0x4f6: Stack[-4] = (bool) 0
0x4f7: Return(); Pop(2)

0x4f8: PushEmpty(bool, object, string)
0x4f9: Stack[-2] = Stack[-6]
0x4fa: Stack[-1] = "noaccess"
0x4fb: Call2 0x471

0x4fc: Pop(2)
0x4fd: Pop(1); Push((bool) Stack[-1] == 0)
0x4fe: IF (Stack[-1] == 0) GOTO 0x501; Pop(1)

0x4ff: Stack[-4] = (bool) 1
0x500: Return(); Pop(2)

0x501: Push("noaccess")
0x502: @@ GetProperty(Stack[-1], Stack[-2])
0x503: Pop(1)
0x504: Push((int) 0)
0x505: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x506: Return(); Pop(2)

0x507: PushEmpty(bool, int, cvector, cvector, cvector, cvector, string, bool, int, cvector, cvector, cvector, cvector, string)
0x508: Pop(0); Push((bool) Stack[-15] == 0)
0x509: IF (Stack[-1] == 0) GOTO 0x50b; Pop(1)

0x50a: Return(); Pop(14)

0x50b: @ IsDead(Stack[-7])
0x50c: Pop(0)
0x50d: Push(Stack[-7])
0x50e: IF (Stack[-1] == 0) GOTO 0x510; Pop(1)

0x50f: Return(); Pop(14)

0x510: @ GetSecondaryAnimationType(Stack[-6])
0x511: Pop(0)
0x512: Push((int) 0)
0x513: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x514: IF (Stack[-1] == 0) GOTO 0x516; Pop(1)

0x515: Return(); Pop(14)

0x516: @@ GetPosition(Stack[-5])
0x517: Pop(0)
0x518: @ GetPosition(Stack[-4])
0x519: Pop(0)
0x51a: @ GetDirection(Stack[-3])
0x51b: Pop(0)
0x51c: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0x51d: Push(CvectorIndex(Stack[-2], 0))
0x51e: Push(CvectorIndex(Stack[-4], 0))
0x51f: Pop(2); Push(Stack[-2] * Stack[-1]);
0x520: Push(CvectorIndex(Stack[-3], 2))
0x521: Push(CvectorIndex(Stack[-5], 2))
0x522: Pop(2); Push(Stack[-2] * Stack[-1]);
0x523: Pop(2); Push(Stack[-2] + Stack[-1]);
0x524: Push((int) 0)
0x525: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x526: IF (Stack[-1] == 0) GOTO 0x529; Pop(1)

0x527: Stack[-1] = "fhit"
0x528: GOTO 0x52a

0x529: Stack[-1] = "bhit"
0x52a: Push("hit_react")
0x52b: Push("1")
0x52c: Pop(1); Push(Stack[-3] + Stack[-1]);
0x52d: Push("2")
0x52e: Pop(1); Push(Stack[-4] + Stack[-1]);
0x52f: Push((int) -10)
0x530: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x531: Pop(4)
0x532: Return(); Pop(14)

0x533: PushEmpty(cvector, object, int, bool, cvector, cvector, int, int, cvector, cvector, object, int, bool, cvector, cvector, int, int, cvector)
0x534: PushEmpty(bool)
0x535: Stack[-1] = (bool) 0
0x536: PushEmpty(bool)
0x537: Stack[-1] = (bool) 0
0x538: Push(Stack[-23])
0x539: IF (Stack[-1] == 0) GOTO 0x53e; Pop(1)

0x53a: Push((int) 4)
0x53b: Pop(1); Push((bool) Stack[-23] != Stack[-1])
0x53c: IF (Stack[-1] == 0) GOTO 0x53e; Pop(1)

0x53d: Stack[-1] = (bool) 1
0x53e: IF (Stack[-1] == 0) GOTO 0x543; Pop(1)

0x53f: Push((int) 5)
0x540: Pop(1); Push((bool) Stack[-22] != Stack[-1])
0x541: IF (Stack[-1] == 0) GOTO 0x543; Pop(1)

0x542: Stack[-1] = (bool) 1
0x543: IF (Stack[-1] == 0) GOTO 0x572; Pop(1)

0x544: PushEmpty(cvector, cvector)
0x545: PushEmpty(cvector, object)
0x546: Stack[-1] = Stack[-25]
0x547: Call2 0x465

0x548: Stack[-3] = Stack[-2]
0x549: Pop(2)
0x54a: Call2 0x5ca

0x54b: Stack[-11] = Stack[-2]
0x54c: Pop(2)
0x54d: @ CreateVectorVector(Stack[-8])
0x54e: Pop(0)
0x54f: Stack[-7] = (int) 1
0x550: Push("hit")
0x551: Pop(1); Push(Stack[-1] + Stack[-8]);
0x552: @ GetGeometryLocator(Stack[-1], Stack[-7], Stack[-6], Stack[-5])
0x553: Pop(1)
0x554: Pop(0); Push((bool) Stack[-6] == 0)
0x555: IF (Stack[-1] == 0) GOTO 0x557; Pop(1)

0x556: GOTO 0x560

0x557: Pop(0); Push(Stack[-4] | Stack[-9]);
0x558: Push((float)0.70711)
0x559: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x55a: IF (Stack[-1] == 0) GOTO 0x55d; Pop(1)

0x55b: @@ add(Stack[-5])
0x55c: Pop(0)
0x55d: Push((int) 1)
0x55e: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x55f: GOTO 0x550

0x560: @@ size(Stack[-3])
0x561: Pop(0)
0x562: Push(Stack[-3])
0x563: IF (Stack[-1] == 0) GOTO 0x571; Pop(1)

0x564: @ irand(Stack[-2], Stack[-3])
0x565: Pop(0)
0x566: @@ get(Stack[-1], Stack[-2])
0x567: Pop(0)
0x568: PushEmpty(object, int, float, cvector, cvector)
0x569: Stack[-5] = Stack[-26]
0x56a: Stack[-4] = Stack[-25]
0x56b: Stack[-3] = Stack[-24]
0x56c: Stack[-2] = Stack[-6]
0x56d: Stack[-1] = -Stack[-14]; Pop(0);
0x56e: Call2 0x577

0x56f: Pop(5)
0x570: Return(); Pop(18)

0x571: Stack[-8] = 0
0x572: PushEmpty(object)
0x573: Stack[-1] = Stack[-22]
0x574: Call2 0x507

0x575: Pop(1)
0x576: Return(); Pop(18)

0x577: PushEmpty(object, object, object, object)
0x578: @ GetScene(Stack[-2])
0x579: Pop(0)
0x57a: Push("scripted")
0x57b: Push("blood_dir.xml")
0x57c: @ AddActorByType(Stack[-3], Stack[-2], Stack[-4], Stack[-8], Stack[-7], Stack[-1])
0x57d: Pop(2)
0x57e: PushEmpty(object)
0x57f: Stack[-1] = Stack[-10]
0x580: Call2 0x507

0x581: Pop(1)
0x582: Return(); Pop(4)

0x583: Stack[-1] = 0
0x584: Stack[-2] = 0
0x585: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x586: @@ GetPosition(Stack[-3])
0x587: Pop(0)
0x588: @ GetPosition(Stack[-2])
0x589: Pop(0)
0x58a: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0x58b: Push(CvectorIndex(Stack[-1], 0))
0x58c: Push(CvectorIndex(Stack[-2], 2))
0x58d: @ RotateAsync(Stack[-2], Stack[-1])
0x58e: Pop(2)
0x58f: Return(); Pop(6)

0x590: PushEmpty(float, cvector, float, cvector)
0x591: @@ GetEyesHeight(Stack[-2])
0x592: Pop(0)
0x593: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x594: Push(CvectorIndex(Stack[-1], 1))
0x595: Stack[-1] = Stack[-3]
0x596: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x597: Push("head")
0x598: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x599: Pop(1)
0x59a: Return(); Pop(4)

0x59b: PushEmpty(bool, int, bool, int, bool, float, cvector, cvector, bool, int, bool, int, bool, float, cvector, cvector)
0x59c: @ IsExisting3DSound(Stack[-8], Stack[-17])
0x59d: Pop(0)
0x59e: Pop(0); Push((bool) Stack[-8] == 0)
0x59f: IF (Stack[-1] == 0) GOTO 0x5b4; Pop(1)

0x5a0: Stack[-7] = (int) 0
0x5a1: Push((int) 1)
0x5a2: Pop(1); Push(Stack[-8] + Stack[-1]);
0x5a3: Pop(1); Push(Stack[-18] + Stack[-1]);
0x5a4: @ IsExisting3DSound(Stack[-7], Stack[-1])
0x5a5: Pop(1)
0x5a6: Pop(0); Push((bool) Stack[-6] == 0)
0x5a7: IF (Stack[-1] == 0) GOTO 0x5a9; Pop(1)

0x5a8: GOTO 0x5ac

0x5a9: Push((int) 1)
0x5aa: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x5ab: GOTO 0x5a1

0x5ac: Pop(0); Push((bool) Stack[-7] == 0)
0x5ad: IF (Stack[-1] == 0) GOTO 0x5af; Pop(1)

0x5ae: Return(); Pop(16)

0x5af: @ irand(Stack[-5], Stack[-7])
0x5b0: Pop(0)
0x5b1: Push((int) 1)
0x5b2: Pop(1); Push(Stack[-6] + Stack[-1]);
0x5b3: Stack[-18] = Stack[-18] + Stack[-1]; Pop(1);
0x5b4: @ Is3DSoundLoaded(Stack[-4], Stack[-17])
0x5b5: Pop(0)
0x5b6: Push(Stack[-4])
0x5b7: IF (Stack[-1] == 0) GOTO 0x5c3; Pop(1)

0x5b8: @ GetEyesHeight(Stack[-3])
0x5b9: Pop(0)
0x5ba: @ GetDirection(Stack[-2])
0x5bb: Pop(0)
0x5bc: Push((int) 50)
0x5bd: Stack[-2] = Stack[-3] * Stack[-1]; Pop(1);
0x5be: Push(CvectorIndex(Stack[-1], 1))
0x5bf: Stack[-1] = Stack[-1] + Stack[-4]; Pop(0);
0x5c0: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x5c1: @ PlayGlobalSound(Stack[-17], Stack[-1])
0x5c2: Pop(0)
0x5c3: Return(); Pop(16)

0x5c4: PushEmpty(object, object)
0x5c5: @ self(Stack[-1])
0x5c6: Pop(0)
0x5c7: Stack[-3] = Stack[-1]
0x5c8: Return(); Pop(2)

0x5c9: Stack[-1] = 0
0x5ca: PushEmpty(float, float)
0x5cb: Pop(0); Push(Stack[-3] | Stack[-3]);
0x5cc: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x5cd: Push((float)0.0)
0x5ce: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x5cf: IF (Stack[-1] == 0) GOTO 0x5d2; Pop(1)

0x5d0: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x5d1: Return(); Pop(2)

0x5d2: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x5d3: Return(); Pop(2)

0x5d4: PushEmpty()
0x5d5: Pop(0); Push((bool) Stack[-2] < Stack[-1])
0x5d6: IF (Stack[-1] == 0) GOTO 0x5d9; Pop(1)

0x5d7: Stack[-3] = Stack[-2]
0x5d8: GOTO 0x5da

0x5d9: Stack[-3] = Stack[-1]
0x5da: Return(); Pop(0)

0x5db: PushEmpty()
0x5dc: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x5dd: IF (Stack[-1] == 0) GOTO 0x5e0; Pop(1)

0x5de: Stack[-4] = Stack[-2]
0x5df: Return(); Pop(0)

0x5e0: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x5e1: IF (Stack[-1] == 0) GOTO 0x5e4; Pop(1)

0x5e2: Stack[-4] = Stack[-1]
0x5e3: Return(); Pop(0)

0x5e4: Stack[-4] = Stack[-3]
0x5e5: Return(); Pop(0)

0x5e6: PushEmpty(object, object)
0x5e7: @ CreateFloatVector(Stack[-1])
0x5e8: Pop(0)
0x5e9: @@ add(Stack[-3])
0x5ea: Pop(0)
0x5eb: Push((int) 0)
0x5ec: Pop(1); Push((bool) Stack[-4] < Stack[-1])
0x5ed: IF (Stack[-1] == 0) GOTO 0x5f2; Pop(1)

0x5ee: Push((float)0.7)
0x5ef: Push((int) 500)
0x5f0: @ RumblePlay(Stack[-2], Stack[-1])
0x5f1: Pop(2)
0x5f2: Push((int) 15)
0x5f3: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x5f4: Pop(1)
0x5f5: Return(); Pop(2)

0x5f6: Stack[-1] = 0
0x5f7: PushEmpty(object, object)
0x5f8: @ FindActor(Stack[-1], Stack[-4])
0x5f9: Pop(0)
0x5fa: Pop(0); Push((bool) Stack[-1] == 0)
0x5fb: IF (Stack[-1] == 0) GOTO 0x5fe; Pop(1)

0x5fc: Stack[-5] = (bool) 0
0x5fd: Return(); Pop(2)

0x5fe: @ Trigger(Stack[-1], Stack[-3])
0x5ff: Pop(0)
0x600: Stack[-5] = (bool) 1
0x601: Return(); Pop(2)

0x602: Stack[-1] = 0
0x603: PushEmpty(bool, bool)
0x604: @ IsPlayerActor(Stack[-3], Stack[-1])
0x605: Pop(0)
0x606: Push(Stack[-1])
0x607: IF (Stack[-1] == 0) GOTO 0x60b; Pop(1)

0x608: Push("attack")
0x609: @ PlayGlobalMusic(Stack[-1])
0x60a: Pop(1)
0x60b: Return(); Pop(2)

0x60c: PushEmpty(object, object)
0x60d: @ GetScene(Stack[-1])
0x60e: Pop(0)
0x60f: Push("battle")
0x610: PushEmpty(object)
0x611: Call2 0x5c4

0x612: Pop(0)
0x613: @ BroadcastMessage(Stack[-2], Stack[-1], Stack[-3])
0x614: Pop(2)
0x615: Return(); Pop(2)

0x616: Stack[-1] = 0
0x617: PushEmpty(int, int)
0x618: Push("branch")
0x619: @ GetVariable(Stack[-1], Stack[-2])
0x61a: Pop(1)
0x61b: Stack[-3] = Stack[-1]
0x61c: Return(); Pop(2)

0x61d: PushEmpty()
0x61e: PushEmpty(int)
0x61f: Call2 0x617

0x620: Pop(0)
0x621: Push((int) 1)
0x622: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x623: IF (Stack[-1] == 0) GOTO 0x627; Pop(1)

0x624: @ WorkWithCorpse(Stack[-1])
0x625: Pop(0)
0x626: GOTO 0x629

0x627: @ Barter(Stack[-1])
0x628: Pop(0)
0x629: Return(); Pop(0)

0x62a: PushEmpty(object, int, bool, object, int, bool)
0x62b: @ CreateInvItem(Stack[-3])
0x62c: Pop(0)
0x62d: @@ SetItemName(Stack[-7])
0x62e: Pop(0)
0x62f: Push("Organ")
0x630: Push((int) 1)
0x631: @@ SetProperty(Stack[-2], Stack[-1])
0x632: Pop(2)
0x633: @@ GetItemID(Stack[-2])
0x634: Pop(0)
0x635: Push((int) 0)
0x636: Push((int) 1)
0x637: @ AddItem(Stack[-3], Stack[-5], Stack[-2], Stack[-1])
0x638: Pop(2)
0x639: Return(); Pop(6)

0x63a: Stack[-3] = 0
0x63b: PushEmpty(int)
0x63c: Call2 0x617

0x63d: Pop(0)
0x63e: Push((int) 1)
0x63f: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x640: IF (Stack[-1] == 0) GOTO 0x642; Pop(1)

0x641: Return(); Pop(0)

0x642: PushEmpty(string)
0x643: Stack[-1] = "liver"
0x644: Call2 0x62a

0x645: Pop(1)
0x646: PushEmpty(string)
0x647: Stack[-1] = "kidney"
0x648: Call2 0x62a

0x649: Pop(1)
0x64a: PushEmpty(string)
0x64b: Stack[-1] = "heart"
0x64c: Call2 0x62a

0x64d: Pop(1)
0x64e: PushEmpty(string)
0x64f: Stack[-1] = "blood"
0x650: Call2 0x62a

0x651: Pop(1)
0x652: Return(); Pop(0)

0x653: PushEmpty()
0x654: PushEmpty(object)
0x655: Stack[-1] = Stack[-2]
0x656: Push(-1, 0); TaskCall(3)
0x657: Call2 0x3b5

0x658: Pop(-1, 0); TaskReturn
0x659: Pop(1)
0x65a: Return(); Pop(0)

0x65b: PushEmpty()
0x65c: PushEmpty(object, int, float)
0x65d: Stack[-3] = Stack[-7]
0x65e: Stack[-2] = Stack[-6]
0x65f: Stack[-1] = Stack[-5]
0x660: Call2 0x533

0x661: Pop(3)
0x662: Return(); Pop(0)

0x663: PushEmpty()
0x664: PushEmpty(object, int, float, cvector, cvector)
0x665: Stack[-5] = Stack[-11]
0x666: Stack[-4] = Stack[-10]
0x667: Stack[-3] = Stack[-9]
0x668: Stack[-2] = Stack[-7]
0x669: Stack[-1] = Stack[-6]
0x66a: Call2 0x577

0x66b: Pop(5)
0x66c: Return(); Pop(0)

0x66d: PushEmpty(float, float)
0x66e: Push("health")
0x66f: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x670: IF (Stack[-1] == 0) GOTO 0x679; Pop(1)

0x671: Push("health")
0x672: @ GetProperty(Stack[-1], Stack[-2])
0x673: Pop(1)
0x674: Push((int) 0)
0x675: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x676: IF (Stack[-1] == 0) GOTO 0x679; Pop(1)

0x677: @ SignalDeath(Stack[-4])
0x678: Pop(0)
0x679: Return(); Pop(2)

0x67a: PushEmpty()
0x67b: PushEmpty(object)
0x67c: Stack[-1] = Stack[-2]
0x67d: Call2 0x653

0x67e: Pop(1)
0x67f: Return(); Pop(0)

