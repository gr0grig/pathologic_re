GlobalVarCount = 0

Strings:
	wonder
	player
	head
	all
	GetPosition
	Can't retreat, distance: 
	RemoveStationaryActor
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
	idle
	branch

Import:
	Sleep (1 args)
	FindActor (2 args)
	SetTimer (2 args)
	KillTimer (1 args)
	UnlookAsync (1 args)
	WaitForAnimEnd (0 args)
	irand (2 args)
	PlayAnimation (2 args)
	WaitForAnimEnd (1 args)
	rand (2 args)
	Sleep (2 args)
	ResetAAS (0 args)
	GetPosition (1 args)
	GetDirection (1 args)
	FindLongestDir (6 args)
	Trace (1 args)
	Rotate (2 args)
	MovePoint (3 args)
	Stop (0 args)
	FindDirLength (3 args)
	GetScene (1 args)
	IsPlayerActor (2 args)
	PlayGlobalMusic (1 args)
	SendPlayerEnemy (2 args)
	GetPFPosition (1 args)
	CanReachByPF (2 args)
	StopAsync (0 args)
	rand (1 args)
	Face (1 args)
	SetSpeed (1 args)
	HasAnimation (3 args)
	IsExisting3DSound (2 args)
	GetAnimationOffset (3 args)
	GetVictim (2 args)
	ReportAttack (1 args)
	ReportHit (4 args)
	SetAttackState (1 args)
	IsAnimationPlaying (1 args)
	sync (0 args)
	Speak (1 args)
	CanSee (2 args)
	FindPathTo (2 args)
	RotatePath (2 args)
	FollowPath (5 args)
	RequestClearPath (1 args)
	SetRTEnvelope (2 args)
	Hold (0 args)
	IsOverrideActive (1 args)
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
	IsLoaded (1 args)
	Is3DSoundLoaded (2 args)
	GetEyesHeight (1 args)
	PlayGlobalSound (2 args)
	self (1 args)
	SendWorldWndMessage (1 args)
	CreateFloatVector (1 args)
	RumblePlay (2 args)
	SendWorldWndMessage (2 args)
	BroadcastMessage (3 args)
	GetVariable (2 args)
	WorkWithCorpse (1 args)
	Barter (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (int, int, bool, bool, object) Params = 0
		EVENT_26 Op = 0xa Vars = (string)
		EVENT_7 Op = 0x46 Vars = (int)
	GTASK_1 Vars = (object, cvector, bool) Params = 1
		EVENT_17 Op = 0xb7 Vars = (object)
		EVENT_7 Op = 0x12c Vars = (int)
		EVENT_41 Op = 0x167 Vars = (object)
	GTASK_2 Vars = (object, int, int, bool, float, int) Params = 2
	GTASK_3 Vars = (bool, object, bool) Params = 6
		EVENT_7 Op = 0x461 Vars = (int)
		EVENT_1 Op = 0x47c Vars = (object)
		EVENT_2 Op = 0x48b Vars = (object)
		EVENT_10 Op = 0x511 Vars = (object)
		EVENT_41 Op = 0x51c Vars = (object)
	GTASK_4  Params = 1
		EVENT_0 Op = 0x545 Vars = (object)
		EVENT_22 Op = 0x5c4 Vars = (object, int, float, float)
		EVENT_16 Op = 0x5c6 Vars = (object, string)
		EVENT_41 Op = 0x5c8 Vars = (object)

Events:
EVENT_22 Op = 0x825 Vars = (object, int, float, float)
EVENT_43 Op = 0x82d Vars = (object, int, float, float, cvector, cvector)
EVENT_16 Op = 0x837 Vars = (object, string)
EVENT_41 Op = 0x839 Vars = (object)

0x0: Push((int) 3)
0x1: @ Sleep(Stack[-1])
0x2: Pop(1)
0x3: PushEmpty(float, float)
0x4: Stack[-2] = (int) 300
0x5: Stack[-1] = (int) 100
0x6: Call2 0x1c

0x7: Pop(2)
0x8: GOTO 0x0

0x9: Return(); Pop(0)

0xa: PushEmpty(object, object)
0xb: Push("wonder")
0xc: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xd: IF (Stack[-1] == 0) GOTO 0x1b; Pop(1)

0xe: Push((int) 1)
0xf: @ Sleep(Stack[-1])
0x10: Pop(1)
0x11: Push("player")
0x12: @ FindActor(Stack[-2], Stack[-1])
0x13: Pop(1)
0x14: PushEmpty(object)
0x15: Stack[-1] = Stack[-2]
0x16: Push(-1, 3); TaskCall(1)
0x17: Call2 0xae

0x18: Pop(-1, 3); TaskReturn
0x19: Pop(1)
0x1a: Stack[-1] = 0
0x1b: Return(); Pop(2)

0x1c: PushEmpty()
0x1d: PushEmpty(bool)
0x1e: Call2 0x726

0x1f: Pop(0)
0x20: Pop(1); Push((bool) Stack[-1] == 0)
0x21: IF (Stack[-1] == 0) GOTO 0x23; Pop(1)

0x22: Return(); Pop(0)

0x23: Push("player")
0x24: @ FindActor(Stack[-4], Stack[-1])
0x25: Pop(1)
0x26: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x27: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x28: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x29: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x2a: Push((int) 10)
0x2b: Push((float)1.0)
0x2c: @ SetTimer(Stack[-2], Stack[-1])
0x2d: Pop(2)
0x2e: PushEmpty()
0x2f: Call2 0x5d

0x30: Pop(0)
0x31: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x32: IF (Stack[-1] == 0) GOTO 0x36; Pop(1)

0x33: Push((int) 10)
0x34: @ KillTimer(Stack[-1])
0x35: Pop(1)
0x36: Return(); Pop(0)

0x37: PushEmpty(float, float)
0x38: Pop(0); Push((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x39: IF (Stack[-1] == 0) GOTO 0x3c; Pop(1)

0x3a: Stack[-3] = (bool) 0
0x3b: Return(); Pop(2)

0x3c: PushEmpty(float, object)
0x3d: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x3e: Call2 0x5e4

0x3f: Pop(1)
0x40: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x41: Push( Stack[2 + Tasks[-1].StackPointer] )
0x42: IF (Stack[-1] == 0) GOTO 0x44; Pop(1)

0x43: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x44: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x45: Return(); Pop(2)

0x46: PushEmpty()
0x47: Push((int) 10)
0x48: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x49: IF (Stack[-1] == 0) GOTO 0x5c; Pop(1)

0x4a: PushEmpty(bool)
0x4b: Call2 0x37

0x4c: Pop(0)
0x4d: IF (Stack[-1] == 0) GOTO 0x56; Pop(1)

0x4e: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x4f: IF (Stack[-1] == 0) GOTO 0x55; Pop(1)

0x50: PushEmpty(object)
0x51: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x52: Call2 0x72b

0x53: Pop(1)
0x54: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x55: GOTO 0x5c

0x56: Push( Stack[2 + Tasks[-1].StackPointer] )
0x57: IF (Stack[-1] == 0) GOTO 0x5c; Pop(1)

0x58: Push("head")
0x59: @ UnlookAsync(Stack[-1])
0x5a: Pop(1)
0x5b: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x5c: Return(); Pop(0)

0x5d: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x5e: @ WaitForAnimEnd()
0x5f: Pop(0)
0x60: PushEmpty(bool)
0x61: Call2 0x726

0x62: Pop(0)
0x63: Pop(1); Push((bool) Stack[-1] == 0)
0x64: IF (Stack[-1] == 0) GOTO 0x66; Pop(1)

0x65: Return(); Pop(14)

0x66: PushEmpty(int)
0x67: Call2 0x7e2

0x68: Stack[-8] = Stack[-1]
0x69: Pop(1)
0x6a: Stack[-6] = (int) 0
0x6b: PushEmpty(bool)
0x6c: Stack[-1] = (bool) 0
0x6d: Push((int) 5)
0x6e: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x6f: IF (Stack[-1] == 0) GOTO 0x75; Pop(1)

0x70: PushEmpty(bool)
0x71: Call2 0x726

0x72: Pop(0)
0x73: IF (Stack[-1] == 0) GOTO 0x75; Pop(1)

0x74: Stack[-1] = (bool) 1
0x75: IF (Stack[-1] == 0) GOTO 0xa9; Pop(1)

0x76: Push((int) 3)
0x77: @ irand(Stack[-6], Stack[-1])
0x78: Pop(1)
0x79: Push((int) 0)
0x7a: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x7b: IF (Stack[-1] == 0) GOTO 0x8d; Pop(1)

0x7c: Push(Stack[-7])
0x7d: IF (Stack[-1] == 0) GOTO 0x8c; Pop(1)

0x7e: @ irand(Stack[-4], Stack[-7])
0x7f: Pop(0)
0x80: Push("all")
0x81: PushEmpty(string, int)
0x82: Stack[-1] = Stack[-7]
0x83: Call2 0x7db

0x84: Pop(1)
0x85: @ PlayAnimation(Stack[-2], Stack[-1])
0x86: Pop(2)
0x87: @ WaitForAnimEnd(Stack[-3])
0x88: Pop(0)
0x89: Pop(0); Push((bool) Stack[-3] == 0)
0x8a: IF (Stack[-1] == 0) GOTO 0x8c; Pop(1)

0x8b: GOTO 0xa9

0x8c: GOTO 0x9e

0x8d: Push((int) 1)
0x8e: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x8f: IF (Stack[-1] == 0) GOTO 0x9b; Pop(1)

0x90: Push((int) 4)
0x91: @ rand(Stack[-3], Stack[-1])
0x92: Pop(1)
0x93: Push((int) 1)
0x94: Pop(1); Push(Stack[-3] + Stack[-1]);
0x95: @ Sleep(Stack[-1], Stack[-2])
0x96: Pop(1)
0x97: Pop(0); Push((bool) Stack[-1] == 0)
0x98: IF (Stack[-1] == 0) GOTO 0x9a; Pop(1)

0x99: GOTO 0xa9

0x9a: GOTO 0x9e

0x9b: Push(Stack[-6])
0x9c: IF (Stack[-1] == 0) GOTO 0x9e; Pop(1)

0x9d: GOTO 0xa9

0x9e: PushEmpty(bool)
0x9f: Call2 0xac

0xa0: Pop(0)
0xa1: Pop(1); Push((bool) Stack[-1] == 0)
0xa2: IF (Stack[-1] == 0) GOTO 0xa4; Pop(1)

0xa3: GOTO 0xa9

0xa4: @ ResetAAS()
0xa5: Pop(0)
0xa6: Push((int) 1)
0xa7: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0xa8: GOTO 0x6b

0xa9: @ ResetAAS()
0xaa: Pop(0)
0xab: Return(); Pop(14)

0xac: Stack[-1] = (bool) 1
0xad: Return(); Pop(0)

0xae: PushEmpty()
0xaf: PushEmpty()
0xb0: Call2 0x806

0xb1: Pop(0)
0xb2: PushEmpty(object)
0xb3: Stack[-1] = Stack[-2]
0xb4: Call2 0xe3

0xb5: Pop(1)
0xb6: Return(); Pop(0)

0xb7: PushEmpty()
0xb8: PushEmpty(bool, object)
0xb9: Stack[-1] = Stack[-3]
0xba: Call2 0x83f

0xbb: Pop(1)
0xbc: IF (Stack[-1] == 0) GOTO 0xc4; Pop(1)

0xbd: PushEmpty()
0xbe: Call2 0x160

0xbf: Pop(0)
0xc0: PushEmpty(object)
0xc1: Stack[-1] = Stack[-2]
0xc2: Call2 0x846

0xc3: Pop(1)
0xc4: Return(); Pop(0)

0xc5: PushEmpty(cvector, cvector, cvector, cvector, cvector, float, cvector, cvector, cvector, cvector, cvector, float)
0xc6: @ GetPosition(Stack[-6])
0xc7: Pop(0)
0xc8: @@ GetPosition(Stack[-5])
0xc9: Pop(0)
0xca: @ GetDirection(Stack[-4])
0xcb: Pop(0)
0xcc: PushEmpty(cvector, cvector)
0xcd: PushEmpty(cvector, cvector)
0xce: Stack[-1] = Stack[-10] - Stack[-9]; Pop(0);
0xcf: Call2 0x765

0xd0: Pop(1)
0xd1: Push((float)0.75)
0xd2: Pop(1); Push(Stack[-8] * Stack[-1]);
0xd3: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0xd4: Call2 0x765

0xd5: Stack[-5] = Stack[-2]
0xd6: Pop(2)
0xd7: Push((int) 32)
0xd8: Push((float)7000.0)
0xd9: @ FindLongestDir(Stack[-4], Stack[-3], Stack[-5], Stack[-15], Stack[-2], Stack[-1])
0xda: Pop(2)
0xdb: Push((int) 100)
0xdc: Stack[-2] = Stack[-2] - Stack[-1]; Pop(1);
0xdd: Push((int) 0)
0xde: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xdf: IF (Stack[-1] == 0) GOTO 0xe1; Pop(1)

0xe0: Stack[-1] = (int) 0
0xe1: Stack[-14] = Stack[-2] * Stack[-1]; Pop(0);
0xe2: Return(); Pop(12)

0xe3: PushEmpty(cvector, float, bool, cvector, float, cvector, float, bool, cvector, float)
0xe4: Stack[0 + Tasks[-1].StackPointer] = Stack[-11]
0xe5: PushEmpty(cvector, float)
0xe6: Stack[-1] = (float) 1.74533
0xe7: Call2 0xc5

0xe8: Stack[-7] = Stack[-2]
0xe9: Pop(2)
0xea: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0xeb: Push((float)2500.0)
0xec: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0xed: IF (Stack[-1] == 0) GOTO 0x100; Pop(1)

0xee: PushEmpty(cvector, float)
0xef: Stack[-1] = (float) 2.61799
0xf0: Call2 0xc5

0xf1: Stack[-7] = Stack[-2]
0xf2: Pop(2)
0xf3: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0xf4: Push((float)2500.0)
0xf5: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0xf6: IF (Stack[-1] == 0) GOTO 0x100; Pop(1)

0xf7: Push("Can't retreat, distance: ")
0xf8: Pop(0); Push(Sqrt(Stack[-5]))
0xf9: Pop(2); Push(Stack[-2] + Stack[-1]);
0xfa: @ Trace(Stack[-1])
0xfb: Pop(1)
0xfc: Push((float)0.5)
0xfd: @ Sleep(Stack[-1])
0xfe: Pop(1)
0xff: Return(); Pop(10)

0x100: Push(CvectorIndex(Stack[-5], 0))
0x101: Push(CvectorIndex(Stack[-6], 2))
0x102: @ Rotate(Stack[-2], Stack[-1])
0x103: Pop(2)
0x104: PushEmpty(cvector)
0x105: Call2 0x5d8

0x106: Pop(0)
0x107: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-6]; Pop(1);
0x108: Push((int) 120)
0x109: Push((float)0.5)
0x10a: @ SetTimer(Stack[-2], Stack[-1])
0x10b: Pop(2)
0x10c: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x10d: Push((int) 1)
0x10e: @ MovePoint(Stack[-1], Stack[-1], Stack[-4])
0x10f: Pop(1)
0x110: Push(Stack[-3])
0x111: IF (Stack[-1] == 0) GOTO 0x129; Pop(1)

0x112: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x113: IF (Stack[-1] == 0) GOTO 0x116; Pop(1)

0x114: GOTO 0x12b

0x115: GOTO 0x129

0x116: PushEmpty(cvector, float)
0x117: Stack[-1] = (float) 2.61799
0x118: Call2 0xc5

0x119: Stack[-4] = Stack[-2]
0x11a: Pop(2)
0x11b: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x11c: Push((float)2500.0)
0x11d: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x11e: IF (Stack[-1] == 0) GOTO 0x128; Pop(1)

0x11f: PushEmpty(cvector)
0x120: Call2 0x5d8

0x121: Pop(0)
0x122: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x123: Push((int) 120)
0x124: Push((float)0.5)
0x125: @ SetTimer(Stack[-2], Stack[-1])
0x126: Pop(2)
0x127: GOTO 0x129

0x128: GOTO 0x12b

0x129: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x12a: IF (Stack[-1] == 0) GOTO 0x10d; Pop(1)

0x12b: Return(); Pop(10)

0x12c: PushEmpty(cvector, float, cvector, float, cvector, float, cvector, float)
0x12d: Push((int) 120)
0x12e: Pop(1); Push((bool) Stack[-10] != Stack[-1])
0x12f: IF (Stack[-1] == 0) GOTO 0x131; Pop(1)

0x130: Return(); Pop(8)

0x131: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x132: IF (Stack[-1] == 0) GOTO 0x13a; Pop(1)

0x133: @ Stop()
0x134: Pop(0)
0x135: Push((int) 1)
0x136: @ KillTimer(Stack[-1])
0x137: Pop(1)
0x138: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x139: GOTO 0x15f

0x13a: @ GetDirection(Stack[-4])
0x13b: Pop(0)
0x13c: Push((float)7000.0)
0x13d: @ FindDirLength(Stack[-4], Stack[-5], Stack[-1])
0x13e: Pop(1)
0x13f: PushEmpty(cvector, float)
0x140: Stack[-1] = (float) 1.74533
0x141: Call2 0xc5

0x142: Stack[-4] = Stack[-2]
0x143: Pop(2)
0x144: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x145: PushEmpty(bool)
0x146: Stack[-1] = (bool) 0
0x147: Push((float)2500.0)
0x148: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x149: IF (Stack[-1] == 0) GOTO 0x158; Pop(1)

0x14a: PushEmpty(bool)
0x14b: Stack[-1] = (bool) 1
0x14c: Pop(0); Push(Stack[-5] * Stack[-5]);
0x14d: Push((float)2.25)
0x14e: Pop(2); Push(Stack[-2] * Stack[-1]);
0x14f: Pop(1); Push((bool) Stack[-4] >= Stack[-1])
0x150: IF (Stack[-1] == 0) GOTO 0x156; Pop(1)

0x151: PushEmpty(bool)
0x152: Call2 0x170

0x153: Pop(0)
0x154: IF (Stack[-1] == 0) GOTO 0x156; Pop(1)

0x155: Stack[-1] = (bool) 0
0x156: IF (Stack[-1] == 0) GOTO 0x158; Pop(1)

0x157: Stack[-1] = (bool) 1
0x158: IF (Stack[-1] == 0) GOTO 0x15f; Pop(1)

0x159: @ Stop()
0x15a: Pop(0)
0x15b: PushEmpty(cvector)
0x15c: Call2 0x5d8

0x15d: Pop(0)
0x15e: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x15f: Return(); Pop(8)

0x160: @ Stop()
0x161: Pop(0)
0x162: Push((int) 120)
0x163: @ KillTimer(Stack[-1])
0x164: Pop(1)
0x165: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x166: Return(); Pop(0)

0x167: PushEmpty()
0x168: PushEmpty()
0x169: Call2 0x160

0x16a: Pop(0)
0x16b: PushEmpty(object)
0x16c: Stack[-1] = Stack[-2]
0x16d: Call2 0x839

0x16e: Pop(1)
0x16f: Return(); Pop(0)

0x170: PushEmpty(cvector, cvector, cvector, cvector)
0x171: @ GetDirection(Stack[-2])
0x172: Pop(0)
0x173: PushEmpty(cvector, object)
0x174: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x175: Call2 0x5dd

0x176: Stack[-3] = Stack[-2]
0x177: Pop(2)
0x178: PushEmpty(float, cvector, cvector)
0x179: Stack[-2] = Stack[-5]
0x17a: Stack[-1] = Stack[-4]
0x17b: Call2 0x781

0x17c: Pop(2)
0x17d: Push((float)-0.34202)
0x17e: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0x17f: Return(); Pop(4)

0x180: PushEmpty(object, object)
0x181: @ GetScene(Stack[-1])
0x182: Pop(0)
0x183: PushEmpty(object)
0x184: Call2 0x75f

0x185: Pop(0)
0x186: @@ RemoveStationaryActor(Stack[-1])
0x187: Pop(1)
0x188: PushEmpty(object, bool, float)
0x189: Stack[-3] = Stack[-7]
0x18a: Stack[-2] = Stack[-6]
0x18b: Stack[-1] = (float) 180.0
0x18c: Call2 0x19a

0x18d: Pop(3)
0x18e: Push((int) 1)
0x18f: @ Sleep(Stack[-1])
0x190: Pop(1)
0x191: GOTO 0x188

0x192: Return(); Pop(2)

0x193: Stack[-1] = 0
0x194: PushEmpty()
0x195: Stack[-3] = (float) 0.03
0x196: Return(); Pop(0)

0x197: PushEmpty()
0x198: Stack[-3] = (int) 0
0x199: Return(); Pop(0)

0x19a: PushEmpty(float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float, float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float)
0x19b: PushEmpty()
0x19c: Call2 0x27f

0x19d: Pop(0)
0x19e: Stack[5 + Tasks[-1].StackPointer] = (int)0
0x19f: Push("@GetAttackDistance")
0x1a0: Push((int) 1)
0x1a1: Pop(2); Push(IsFuncExist(Stack[-27], Stack[-2], Stack[-1]))
0x1a2: IF (Stack[-1] == 0) GOTO 0x1a8; Pop(1)

0x1a3: @@ GetAttackDistance(Stack[-11])
0x1a4: Pop(0)
0x1a5: Push((int) 50)
0x1a6: Stack[-12] = Stack[-12] + Stack[-1]; Pop(1);
0x1a7: GOTO 0x1a9

0x1a8: Stack[-11] = Stack[-23]
0x1a9: Push((int) 150)
0x1aa: Pop(1); Push((bool) Stack[-12] >= Stack[-1])
0x1ab: IF (Stack[-1] == 0) GOTO 0x1ad; Pop(1)

0x1ac: Stack[-11] = (int) 150
0x1ad: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x1ae: Stack[0 + Tasks[-1].StackPointer] = Stack[-25]
0x1af: @ IsPlayerActor(Stack[-0], Stack[-8])
0x1b0: Pop(0)
0x1b1: Push(Stack[-8])
0x1b2: IF (Stack[-1] == 0) GOTO 0x1bb; Pop(1)

0x1b3: Push("attack")
0x1b4: @ PlayGlobalMusic(Stack[-1])
0x1b5: Pop(1)
0x1b6: PushEmpty(object)
0x1b7: Call2 0x75f

0x1b8: Pop(0)
0x1b9: @ SendPlayerEnemy(Stack[-26], Stack[-1])
0x1ba: Pop(1)
0x1bb: Push(Stack[-24])
0x1bc: IF (Stack[-1] == 0) GOTO 0x1bf; Pop(1)

0x1bd: Stack[-7] = (bool) 0
0x1be: GOTO 0x1c0

0x1bf: Stack[-7] = (bool) 1
0x1c0: Push((float)400.0)
0x1c1: Stack[-7] = Stack[-1] + Stack[-12]; Pop(1);
0x1c2: PushEmpty(bool)
0x1c3: Stack[-1] = (bool) 0
0x1c4: PushEmpty(bool, object)
0x1c5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1c6: Call2 0x685

0x1c7: Pop(1)
0x1c8: IF (Stack[-1] == 0) GOTO 0x1cc; Pop(1)

0x1c9: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x1ca: IF (Stack[-1] == 0) GOTO 0x1cc; Pop(1)

0x1cb: Stack[-1] = (bool) 1
0x1cc: IF (Stack[-1] == 0) GOTO 0x26e; Pop(1)

0x1cd: PushEmpty()
0x1ce: Call2 0x41c

0x1cf: Pop(0)
0x1d0: @@ GetPFPosition(Stack[-10])
0x1d1: Pop(0)
0x1d2: @ GetPFPosition(Stack[-9])
0x1d3: Pop(0)
0x1d4: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0x1d5: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x1d6: Pop(0); Push(Stack[-6] * Stack[-6]);
0x1d7: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0x1d8: IF (Stack[-1] == 0) GOTO 0x1e8; Pop(1)

0x1d9: PushEmpty(bool, object, float, float, bool, bool)
0x1da: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0x1db: Stack[-4] = Stack[-17]
0x1dc: Stack[-3] = (float) 10000.0
0x1dd: Stack[-2] = (bool) 1
0x1de: Stack[-1] = (bool) 0
0x1df: Push(-6, 3); TaskCall(3)
0x1e0: Call2 0x430

0x1e1: Pop(-6, 3); TaskReturn
0x1e2: Pop(5)
0x1e3: Pop(1); Push((bool) Stack[-1] == 0)
0x1e4: IF (Stack[-1] == 0) GOTO 0x1e6; Pop(1)

0x1e5: GOTO 0x26e

0x1e6: Stack[-7] = (bool) 0
0x1e7: GOTO 0x26d

0x1e8: Pop(0); Push(Stack[-23] * Stack[-23]);
0x1e9: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0x1ea: IF (Stack[-1] == 0) GOTO 0x265; Pop(1)

0x1eb: @@ GetPFPosition(Stack[-3])
0x1ec: Pop(0)
0x1ed: @ CanReachByPF(Stack[-2], Stack[-3])
0x1ee: Pop(0)
0x1ef: Pop(0); Push((bool) Stack[-2] == 0)
0x1f0: IF (Stack[-1] == 0) GOTO 0x200; Pop(1)

0x1f1: PushEmpty(bool, object, float, float, bool, bool)
0x1f2: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0x1f3: Stack[-4] = Stack[-17]
0x1f4: Stack[-3] = (float) 10000.0
0x1f5: Stack[-2] = (bool) 1
0x1f6: Stack[-1] = (bool) 0
0x1f7: Push(-6, 3); TaskCall(3)
0x1f8: Call2 0x430

0x1f9: Pop(-6, 3); TaskReturn
0x1fa: Pop(5)
0x1fb: Pop(1); Push((bool) Stack[-1] == 0)
0x1fc: IF (Stack[-1] == 0) GOTO 0x1fe; Pop(1)

0x1fd: GOTO 0x26e

0x1fe: Stack[-7] = (bool) 0
0x1ff: GOTO 0x1c2

0x200: Pop(0); Push((bool) Stack[-7] == 0)
0x201: IF (Stack[-1] == 0) GOTO 0x219; Pop(1)

0x202: PushEmpty(object)
0x203: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x204: Call2 0x71b

0x205: Pop(1)
0x206: Push("all")
0x207: Push("attack_on")
0x208: @ PlayAnimation(Stack[-2], Stack[-1])
0x209: Pop(2)
0x20a: @ WaitForAnimEnd()
0x20b: Pop(0)
0x20c: PushEmpty()
0x20d: Call2 0x41c

0x20e: Pop(0)
0x20f: @ StopAsync()
0x210: Pop(0)
0x211: Stack[-7] = (bool) 1
0x212: PushEmpty(bool, object)
0x213: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x214: Call2 0x685

0x215: Pop(1)
0x216: Pop(1); Push((bool) Stack[-1] == 0)
0x217: IF (Stack[-1] == 0) GOTO 0x219; Pop(1)

0x218: GOTO 0x26e

0x219: @ rand(Stack[-1])
0x21a: Pop(0)
0x21b: PushEmpty(bool)
0x21c: Stack[-1] = (bool) 1
0x21d: Push((float)0.25)
0x21e: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x21f: IF (Stack[-1] == 0) GOTO 0x225; Pop(1)

0x220: PushEmpty(bool)
0x221: Call2 0x3f1

0x222: Pop(0)
0x223: IF (Stack[-1] == 0) GOTO 0x225; Pop(1)

0x224: Stack[-1] = (bool) 0
0x225: IF (Stack[-1] == 0) GOTO 0x236; Pop(1)

0x226: @ Face(Stack[-0])
0x227: Pop(0)
0x228: PushEmpty()
0x229: Call2 0x423

0x22a: Pop(0)
0x22b: Push("all")
0x22c: Push("attack_stay")
0x22d: @ PlayAnimation(Stack[-2], Stack[-1])
0x22e: Pop(2)
0x22f: PushEmpty(bool, float)
0x230: Stack[-1] = Stack[-25]
0x231: Call2 0x36d

0x232: Pop(2)
0x233: @ StopAsync()
0x234: Pop(0)
0x235: GOTO 0x264

0x236: @ Face(Stack[-0])
0x237: Pop(0)
0x238: Push("all")
0x239: Push("fjump")
0x23a: @ PlayAnimation(Stack[-2], Stack[-1])
0x23b: Pop(2)
0x23c: @ WaitForAnimEnd()
0x23d: Pop(0)
0x23e: PushEmpty()
0x23f: Call2 0x41c

0x240: Pop(0)
0x241: Push(CVector(0.0, 0.0, 0.0))
0x242: @ SetSpeed(Stack[-1])
0x243: Pop(1)
0x244: @ Stop()
0x245: Pop(0)
0x246: @ StopAsync()
0x247: Pop(0)
0x248: PushEmpty(bool)
0x249: Call2 0x3f1

0x24a: Pop(0)
0x24b: Pop(1); Push((bool) Stack[-1] == 0)
0x24c: IF (Stack[-1] == 0) GOTO 0x264; Pop(1)

0x24d: PushEmpty(bool, object)
0x24e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x24f: Call2 0x685

0x250: Pop(1)
0x251: Pop(1); Push((bool) Stack[-1] == 0)
0x252: IF (Stack[-1] == 0) GOTO 0x254; Pop(1)

0x253: GOTO 0x26e

0x254: @@ GetPFPosition(Stack[-10])
0x255: Pop(0)
0x256: @ GetPFPosition(Stack[-9])
0x257: Pop(0)
0x258: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0x259: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x25a: Pop(0); Push(Stack[-23] * Stack[-23]);
0x25b: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x25c: IF (Stack[-1] == 0) GOTO 0x264; Pop(1)

0x25d: PushEmpty(bool, float)
0x25e: Stack[-1] = Stack[-25]
0x25f: Call2 0x2c9

0x260: Pop(1)
0x261: Pop(1); Push((bool) Stack[-1] == 0)
0x262: IF (Stack[-1] == 0) GOTO 0x264; Pop(1)

0x263: GOTO 0x26e

0x264: GOTO 0x26d

0x265: PushEmpty(bool, float)
0x266: Stack[-1] = Stack[-25]
0x267: Call2 0x2c9

0x268: Pop(1)
0x269: Pop(1); Push((bool) Stack[-1] == 0)
0x26a: IF (Stack[-1] == 0) GOTO 0x26c; Pop(1)

0x26b: GOTO 0x26e

0x26c: Stack[-7] = (bool) 1
0x26d: GOTO 0x1c2

0x26e: @ WaitForAnimEnd()
0x26f: Pop(0)
0x270: Push( Stack[3 + Tasks[-1].StackPointer] )
0x271: IF (Stack[-1] == 0) GOTO 0x273; Pop(1)

0x272: Return(); Pop(22)

0x273: Push("all")
0x274: Push("attack_off")
0x275: @ PlayAnimation(Stack[-2], Stack[-1])
0x276: Pop(2)
0x277: @ WaitForAnimEnd()
0x278: Pop(0)
0x279: Push(Stack[-8])
0x27a: IF (Stack[-1] == 0) GOTO 0x27e; Pop(1)

0x27b: Push((float)2.0)
0x27c: @ Sleep(Stack[-1])
0x27d: Pop(1)
0x27e: Return(); Pop(22)

0x27f: PushEmpty(bool, bool, cvector, bool, bool, cvector)
0x280: Stack[1 + Tasks[-1].StackPointer] = (int)0
0x281: Push("all")
0x282: Push("attack_begin")
0x283: Push((int) 1)
0x284: Pop(1); Push(Stack[1 + StackPtr] + Stack[-1]);
0x285: Pop(2); Push(Stack[-2] + Stack[-1]);
0x286: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0x287: Pop(2)
0x288: Pop(0); Push((bool) Stack[-3] == 0)
0x289: IF (Stack[-1] == 0) GOTO 0x28b; Pop(1)

0x28a: GOTO 0x28e

0x28b: Push((int) 1)
0x28c: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x28d: GOTO 0x281

0x28e: Stack[2 + Tasks[-1].StackPointer] = (int)0
0x28f: Push("attack")
0x290: Push((int) 1)
0x291: Pop(1); Push(Stack[2 + StackPtr] + Stack[-1]);
0x292: Pop(2); Push(Stack[-2] + Stack[-1]);
0x293: @ IsExisting3DSound(Stack[-3], Stack[-1])
0x294: Pop(1)
0x295: Pop(0); Push((bool) Stack[-2] == 0)
0x296: IF (Stack[-1] == 0) GOTO 0x298; Pop(1)

0x297: GOTO 0x29b

0x298: Push((int) 1)
0x299: Stack[2 + Tasks[-1].StackPointer] = Stack[2 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x29a: GOTO 0x28f

0x29b: Push("all")
0x29c: Push("bjump")
0x29d: @ GetAnimationOffset(Stack[-3], Stack[-2], Stack[-1])
0x29e: Pop(2)
0x29f: Push(CvectorIndex(Stack[-1], 2))
0x2a0: Stack[4 + Tasks[-1].StackPointer] = -Stack[-1]; Pop(1);
0x2a1: Return(); Pop(6)

0x2a2: PushEmpty(object, float, float, object, float, float)
0x2a3: Push((float)0.9)
0x2a4: Pop(1); Push(Stack[-9] * Stack[-1]);
0x2a5: @ GetVictim(Stack[-1], Stack[-4])
0x2a6: Pop(1)
0x2a7: @ ReportAttack(Stack[-0])
0x2a8: Pop(0)
0x2a9: Pop(0); Push((bool) Stack[-3] == Stack[0 + Tasks[-1].StackPointer])
0x2aa: IF (Stack[-1] == 0) GOTO 0x2c7; Pop(1)

0x2ab: PushEmpty(float, object, int)
0x2ac: Stack[-2] = Stack[-6]
0x2ad: Stack[-1] = Stack[-10]
0x2ae: Call2 0x194

0x2af: Stack[-5] = Stack[-3]
0x2b0: Pop(3)
0x2b1: PushEmpty(float, object, float, int)
0x2b2: Stack[-3] = Stack[-7]
0x2b3: Stack[-2] = Stack[-6]
0x2b4: PushEmpty(int, object, int)
0x2b5: Stack[-2] = Stack[-10]
0x2b6: Stack[-1] = Stack[-14]
0x2b7: Call2 0x197

0x2b8: Stack[-4] = Stack[-3]
0x2b9: Pop(3)
0x2ba: Call2 0x613

0x2bb: Stack[-5] = Stack[-4]
0x2bc: Pop(4)
0x2bd: PushEmpty(int)
0x2be: Call2 0x421

0x2bf: Pop(0)
0x2c0: @ ReportHit(Stack[-0], Stack[-1], Stack[-2], Stack[-3])
0x2c1: Pop(1)
0x2c2: PushEmpty(object, float)
0x2c3: Stack[-2] = Stack[-5]
0x2c4: Stack[-1] = Stack[-3]
0x2c5: Call2 0x428

0x2c6: Pop(2)
0x2c7: Return(); Pop(6)

0x2c8: Stack[-3] = 0
0x2c9: PushEmpty(int, bool, int, string, int, bool, int, string)
0x2ca: PushEmpty()
0x2cb: Call2 0x41c

0x2cc: Pop(0)
0x2cd: @ irand(Stack[-4], Stack[-1])
0x2ce: Pop(0)
0x2cf: Push((int) 1)
0x2d0: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x2d1: @ Face(Stack[-0])
0x2d2: Pop(0)
0x2d3: Push((bool) 1)
0x2d4: @ SetAttackState(Stack[-1])
0x2d5: Pop(1)
0x2d6: PushEmpty()
0x2d7: Call2 0x7d0

0x2d8: Pop(0)
0x2d9: Push("all")
0x2da: Push("attack_begin")
0x2db: Pop(1); Push(Stack[-1] + Stack[-6]);
0x2dc: @ PlayAnimation(Stack[-2], Stack[-1])
0x2dd: Pop(2)
0x2de: @ WaitForAnimEnd()
0x2df: Pop(0)
0x2e0: PushEmpty()
0x2e1: Call2 0x3fc

0x2e2: Pop(0)
0x2e3: PushEmpty(bool, object)
0x2e4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2e5: Call2 0x685

0x2e6: Pop(1)
0x2e7: Pop(1); Push((bool) Stack[-1] == 0)
0x2e8: IF (Stack[-1] == 0) GOTO 0x2ed; Pop(1)

0x2e9: @ StopAsync()
0x2ea: Pop(0)
0x2eb: Stack[-10] = (bool) 0
0x2ec: Return(); Pop(8)

0x2ed: PushEmpty(float, int)
0x2ee: Stack[-2] = Stack[-11]
0x2ef: Stack[-1] = Stack[-6]
0x2f0: Call2 0x2a2

0x2f1: Pop(2)
0x2f2: Push("all")
0x2f3: Push("attack_middle")
0x2f4: Pop(1); Push(Stack[-1] + Stack[-6]);
0x2f5: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0x2f6: Pop(2)
0x2f7: Push(Stack[-3])
0x2f8: IF (Stack[-1] == 0) GOTO 0x33e; Pop(1)

0x2f9: PushEmpty()
0x2fa: Call2 0x7d0

0x2fb: Pop(0)
0x2fc: Push("all")
0x2fd: Push("attack_middle")
0x2fe: Pop(1); Push(Stack[-1] + Stack[-6]);
0x2ff: @ PlayAnimation(Stack[-2], Stack[-1])
0x300: Pop(2)
0x301: @ WaitForAnimEnd()
0x302: Pop(0)
0x303: PushEmpty()
0x304: Call2 0x41c

0x305: Pop(0)
0x306: PushEmpty(bool, object)
0x307: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x308: Call2 0x685

0x309: Pop(1)
0x30a: Pop(1); Push((bool) Stack[-1] == 0)
0x30b: IF (Stack[-1] == 0) GOTO 0x310; Pop(1)

0x30c: @ StopAsync()
0x30d: Pop(0)
0x30e: Stack[-10] = (bool) 0
0x30f: Return(); Pop(8)

0x310: PushEmpty(float, int)
0x311: Stack[-2] = Stack[-11]
0x312: Stack[-1] = Stack[-6]
0x313: Call2 0x2a2

0x314: Pop(2)
0x315: Stack[-2] = (int) 1
0x316: Push("attack_middle")
0x317: Pop(1); Push(Stack[-1] + Stack[-5]);
0x318: Push("_")
0x319: Pop(2); Push(Stack[-2] + Stack[-1]);
0x31a: Stack[-2] = Stack[-1] + Stack[-3]; Pop(1);
0x31b: Push("all")
0x31c: @ HasAnimation(Stack[-4], Stack[-1], Stack[-2])
0x31d: Pop(1)
0x31e: Pop(0); Push((bool) Stack[-3] == 0)
0x31f: IF (Stack[-1] == 0) GOTO 0x321; Pop(1)

0x320: GOTO 0x33e

0x321: PushEmpty()
0x322: Call2 0x7d0

0x323: Pop(0)
0x324: Push("all")
0x325: @ PlayAnimation(Stack[-1], Stack[-2])
0x326: Pop(1)
0x327: @ WaitForAnimEnd()
0x328: Pop(0)
0x329: PushEmpty()
0x32a: Call2 0x41c

0x32b: Pop(0)
0x32c: PushEmpty(bool, object)
0x32d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x32e: Call2 0x685

0x32f: Pop(1)
0x330: Pop(1); Push((bool) Stack[-1] == 0)
0x331: IF (Stack[-1] == 0) GOTO 0x336; Pop(1)

0x332: @ StopAsync()
0x333: Pop(0)
0x334: Stack[-10] = (bool) 0
0x335: Return(); Pop(8)

0x336: PushEmpty(float, int)
0x337: Stack[-2] = Stack[-11]
0x338: Stack[-1] = Stack[-6]
0x339: Call2 0x2a2

0x33a: Pop(2)
0x33b: Push((int) 1)
0x33c: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x33d: GOTO 0x316

0x33e: Push((bool) 0)
0x33f: @ SetAttackState(Stack[-1])
0x340: Pop(1)
0x341: Push("all")
0x342: Push("attack_end")
0x343: Pop(1); Push(Stack[-1] + Stack[-6]);
0x344: @ PlayAnimation(Stack[-2], Stack[-1])
0x345: Pop(2)
0x346: PushEmpty(bool)
0x347: Call2 0x42a

0x348: Pop(0)
0x349: IF (Stack[-1] == 0) GOTO 0x350; Pop(1)

0x34a: PushEmpty(bool, float)
0x34b: Stack[-1] = (float) 0.75
0x34c: Call2 0x352

0x34d: Pop(2)
0x34e: @ StopAsync()
0x34f: Pop(0)
0x350: Stack[-10] = (bool) 1
0x351: Return(); Pop(8)

0x352: PushEmpty(float, bool, float, bool)
0x353: @ rand(Stack[-2])
0x354: Pop(0)
0x355: Pop(0); Push((bool) Stack[-2] < Stack[-5])
0x356: IF (Stack[-1] == 0) GOTO 0x366; Pop(1)

0x357: @ IsAnimationPlaying(Stack[-1])
0x358: Pop(0)
0x359: Pop(0); Push((bool) Stack[-1] == 0)
0x35a: IF (Stack[-1] == 0) GOTO 0x35c; Pop(1)

0x35b: GOTO 0x365

0x35c: PushEmpty(bool)
0x35d: Call2 0x3b4

0x35e: Pop(0)
0x35f: IF (Stack[-1] == 0) GOTO 0x362; Pop(1)

0x360: Stack[-6] = (bool) 1
0x361: Return(); Pop(4)

0x362: @ sync()
0x363: Pop(0)
0x364: GOTO 0x357

0x365: GOTO 0x36b

0x366: @ WaitForAnimEnd()
0x367: Pop(0)
0x368: PushEmpty()
0x369: Call2 0x41c

0x36a: Pop(0)
0x36b: Stack[-6] = (bool) 0
0x36c: Return(); Pop(4)

0x36d: PushEmpty(bool, cvector, cvector, cvector, float, bool, cvector, cvector, cvector, float)
0x36e: @ IsAnimationPlaying(Stack[-5])
0x36f: Pop(0)
0x370: Pop(0); Push((bool) Stack[-5] == 0)
0x371: IF (Stack[-1] == 0) GOTO 0x373; Pop(1)

0x372: GOTO 0x393

0x373: PushEmpty(bool)
0x374: Call2 0x3b4

0x375: Pop(0)
0x376: IF (Stack[-1] == 0) GOTO 0x379; Pop(1)

0x377: Stack[-12] = (bool) 1
0x378: Return(); Pop(10)

0x379: PushEmpty(bool, object)
0x37a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x37b: Call2 0x685

0x37c: Pop(1)
0x37d: Pop(1); Push((bool) Stack[-1] == 0)
0x37e: IF (Stack[-1] == 0) GOTO 0x381; Pop(1)

0x37f: Stack[-12] = (bool) 0
0x380: Return(); Pop(10)

0x381: @@ GetPFPosition(Stack[-4])
0x382: Pop(0)
0x383: @ GetPFPosition(Stack[-3])
0x384: Pop(0)
0x385: Stack[-2] = Stack[-4] - Stack[-3]; Pop(0);
0x386: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x387: Pop(0); Push(Stack[-11] * Stack[-11]);
0x388: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x389: IF (Stack[-1] == 0) GOTO 0x390; Pop(1)

0x38a: PushEmpty(bool, float)
0x38b: Stack[-1] = Stack[-13]
0x38c: Call2 0x2c9

0x38d: Pop(2)
0x38e: Stack[-12] = (bool) 1
0x38f: Return(); Pop(10)

0x390: @ sync()
0x391: Pop(0)
0x392: GOTO 0x36e

0x393: PushEmpty()
0x394: Call2 0x41c

0x395: Pop(0)
0x396: Stack[-12] = (bool) 0
0x397: Return(); Pop(10)

0x398: PushEmpty(cvector, cvector, cvector, float, float, cvector, cvector, cvector, float, float)
0x399: PushEmpty(bool, object)
0x39a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x39b: Call2 0x685

0x39c: Pop(1)
0x39d: Pop(1); Push((bool) Stack[-1] == 0)
0x39e: IF (Stack[-1] == 0) GOTO 0x3a1; Pop(1)

0x39f: Stack[-11] = (bool) 0
0x3a0: Return(); Pop(10)

0x3a1: PushEmpty(bool)
0x3a2: Call2 0x3f1

0x3a3: Pop(0)
0x3a4: IF (Stack[-1] == 0) GOTO 0x3b2; Pop(1)

0x3a5: @@ GetPFPosition(Stack[-5])
0x3a6: Pop(0)
0x3a7: @ GetPFPosition(Stack[-4])
0x3a8: Pop(0)
0x3a9: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x3aa: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x3ab: @@ GetAttackDistance(Stack[-1])
0x3ac: Pop(0)
0x3ad: Push((int) 50)
0x3ae: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x3af: Pop(0); Push(Stack[-1] * Stack[-1]);
0x3b0: Stack[-12] = Stack[-3] <= Stack[-1]; Pop(1);
0x3b1: Return(); Pop(10)

0x3b2: Stack[-11] = (bool) 0
0x3b3: Return(); Pop(10)

0x3b4: PushEmpty(bool)
0x3b5: Stack[-1] = (bool) 0
0x3b6: PushEmpty(bool)
0x3b7: Call2 0x398

0x3b8: Pop(0)
0x3b9: IF (Stack[-1] == 0) GOTO 0x3bf; Pop(1)

0x3ba: PushEmpty(bool)
0x3bb: Call2 0x3c4

0x3bc: Pop(0)
0x3bd: IF (Stack[-1] == 0) GOTO 0x3bf; Pop(1)

0x3be: Stack[-1] = (bool) 1
0x3bf: IF (Stack[-1] == 0) GOTO 0x3c2; Pop(1)

0x3c0: Stack[-1] = (bool) 1
0x3c1: Return(); Pop(0)

0x3c2: Stack[-1] = (bool) 0
0x3c3: Return(); Pop(0)

0x3c4: PushEmpty(object, bool, float, cvector, cvector, object, bool, float, cvector, cvector)
0x3c5: @ GetScene(Stack[-5])
0x3c6: Pop(0)
0x3c7: Stack[-4] = (bool) 0
0x3c8: PushEmpty(cvector, object)
0x3c9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3ca: Call2 0x5dd

0x3cb: Pop(1)
0x3cc: Pop(1); Push(( -Stack[-1])
0x3cd: @ FindDirLength(Stack[-4], Stack[-1], Stack[-4])
0x3ce: Pop(1)
0x3cf: Pop(0); Push((bool) Stack[-3] < Stack[4 + Tasks[-1].StackPointer])
0x3d0: IF (Stack[-1] == 0) GOTO 0x3d2; Pop(1)

0x3d1: GOTO 0x3ee

0x3d2: @ Face(Stack[-0])
0x3d3: Pop(0)
0x3d4: Push("all")
0x3d5: Push("bjump")
0x3d6: @ PlayAnimation(Stack[-2], Stack[-1])
0x3d7: Pop(2)
0x3d8: @@ GetPFPosition(Stack[-2])
0x3d9: Pop(0)
0x3da: @ GetPFPosition(Stack[-1])
0x3db: Pop(0)
0x3dc: @ WaitForAnimEnd()
0x3dd: Pop(0)
0x3de: PushEmpty()
0x3df: Call2 0x41c

0x3e0: Pop(0)
0x3e1: @ StopAsync()
0x3e2: Pop(0)
0x3e3: Push(CVector(0.0, 0.0, 0.0))
0x3e4: @ SetSpeed(Stack[-1])
0x3e5: Pop(1)
0x3e6: Stack[-4] = (bool) 1
0x3e7: PushEmpty(bool)
0x3e8: Call2 0x398

0x3e9: Pop(0)
0x3ea: Pop(1); Push((bool) Stack[-1] == 0)
0x3eb: IF (Stack[-1] == 0) GOTO 0x3ed; Pop(1)

0x3ec: GOTO 0x3ee

0x3ed: GOTO 0x3c8

0x3ee: Stack[-11] = Stack[-4]
0x3ef: Return(); Pop(10)

0x3f0: Stack[-5] = 0
0x3f1: PushEmpty(bool, bool)
0x3f2: Push("IsAttacking")
0x3f3: Push((int) 1)
0x3f4: Pop(2); Push(IsFuncExist(Stack[0 + Tasks[-1].StackPointer], Stack[-2], Stack[-1]))
0x3f5: IF (Stack[-1] == 0) GOTO 0x3fa; Pop(1)

0x3f6: @@ IsAttacking(Stack[-1])
0x3f7: Pop(0)
0x3f8: Stack[-3] = Stack[-1]
0x3f9: Return(); Pop(2)

0x3fa: Stack[-3] = (bool) 0
0x3fb: Return(); Pop(2)

0x3fc: PushEmpty(float, int, float, int)
0x3fd: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x3fe: IF (Stack[-1] == 0) GOTO 0x400; Pop(1)

0x3ff: Return(); Pop(4)

0x400: Push( Stack[5 + Tasks[-1].StackPointer] )
0x401: IF (Stack[-1] == 0) GOTO 0x408; Pop(1)

0x402: Push((int) -1)
0x403: Stack[5 + Tasks[-1].StackPointer] = Stack[5 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x404: Push((int) 0)
0x405: Pop(1); Push((bool) Stack[5 + Tasks[-1].StackPointer] > Stack[-1])
0x406: IF (Stack[-1] == 0) GOTO 0x408; Pop(1)

0x407: Return(); Pop(4)

0x408: @ rand(Stack[-2])
0x409: Pop(0)
0x40a: PushEmpty(float)
0x40b: Call2 0x42e

0x40c: Pop(0)
0x40d: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x40e: IF (Stack[-1] == 0) GOTO 0x41b; Pop(1)

0x40f: @ irand(Stack[-1], Stack[-2])
0x410: Pop(0)
0x411: Push((int) 1)
0x412: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x413: Push("attack")
0x414: Pop(1); Push(Stack[-1] + Stack[-2]);
0x415: @ Speak(Stack[-1])
0x416: Pop(1)
0x417: PushEmpty(int)
0x418: Call2 0x42c

0x419: Stack[5 + Tasks[-1].StackPointer] = Stack[-1]
0x41a: Pop(1)
0x41b: Return(); Pop(4)

0x41c: PushEmpty(object)
0x41d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x41e: Call2 0x7c7

0x41f: Pop(1)
0x420: Return(); Pop(0)

0x421: Stack[-1] = (int) 0
0x422: Return(); Pop(0)

0x423: PushEmpty(string)
0x424: Stack[-1] = "attack_stay"
0x425: Call2 0x736

0x426: Pop(1)
0x427: Return(); Pop(0)

0x428: PushEmpty()
0x429: Return(); Pop(0)

0x42a: Stack[-1] = (bool) 1
0x42b: Return(); Pop(0)

0x42c: Stack[-1] = (int) 1
0x42d: Return(); Pop(0)

0x42e: Stack[-1] = (float) 0.5
0x42f: Return(); Pop(0)

0x430: PushEmpty(bool, bool, bool, bool)
0x431: PushEmpty(object)
0x432: Stack[-1] = Stack[-10]
0x433: Call2 0x7c7

0x434: Pop(1)
0x435: Push((int) 1)
0x436: Push((int) 5)
0x437: @ SetTimer(Stack[-2], Stack[-1])
0x438: Pop(2)
0x439: @ CanSee(Stack[-2], Stack[-9])
0x43a: Pop(0)
0x43b: Push(Stack[-2])
0x43c: IF (Stack[-1] == 0) GOTO 0x443; Pop(1)

0x43d: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x43e: PushEmpty(object)
0x43f: Stack[-1] = Stack[-10]
0x440: Call2 0x72b

0x441: Pop(1)
0x442: GOTO 0x444

0x443: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x444: PushEmpty(bool, object)
0x445: Stack[-1] = Stack[-11]
0x446: Call2 0x5ec

0x447: Pop(1)
0x448: IF (Stack[-1] == 0) GOTO 0x44e; Pop(1)

0x449: PushEmpty(object)
0x44a: Call2 0x75f

0x44b: Pop(0)
0x44c: @ SendPlayerEnemy(Stack[-10], Stack[-1])
0x44d: Pop(1)
0x44e: PushEmpty(bool, object, float, float, bool, bool)
0x44f: Stack[-5] = Stack[-15]
0x450: Stack[-4] = Stack[-14]
0x451: Stack[-3] = Stack[-13]
0x452: Stack[-2] = Stack[-12]
0x453: Stack[-1] = Stack[-11]
0x454: Call2 0x499

0x455: Stack[-7] = Stack[-6]
0x456: Pop(6)
0x457: Push( Stack[2 + Tasks[-1].StackPointer] )
0x458: IF (Stack[-1] == 0) GOTO 0x45c; Pop(1)

0x459: Push("head")
0x45a: @ UnlookAsync(Stack[-1])
0x45b: Pop(1)
0x45c: Push((int) 1)
0x45d: @ KillTimer(Stack[-1])
0x45e: Pop(1)
0x45f: Stack[-10] = Stack[-1]
0x460: Return(); Pop(4)

0x461: PushEmpty()
0x462: Push((int) 1)
0x463: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x464: IF (Stack[-1] == 0) GOTO 0x46a; Pop(1)

0x465: PushEmpty(object)
0x466: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x467: Call2 0x7c7

0x468: Pop(1)
0x469: GOTO 0x46e

0x46a: PushEmpty(int)
0x46b: Stack[-1] = Stack[-2]
0x46c: Call2 0x4ff

0x46d: Pop(1)
0x46e: Return(); Pop(0)

0x46f: Push((int) 1)
0x470: @ KillTimer(Stack[-1])
0x471: Pop(1)
0x472: Push( Stack[2 + Tasks[-1].StackPointer] )
0x473: IF (Stack[-1] == 0) GOTO 0x478; Pop(1)

0x474: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x475: Push("head")
0x476: @ UnlookAsync(Stack[-1])
0x477: Pop(1)
0x478: PushEmpty()
0x479: Call2 0x515

0x47a: Pop(0)
0x47b: Return(); Pop(0)

0x47c: PushEmpty()
0x47d: PushEmpty(bool)
0x47e: Stack[-1] = (bool) 0
0x47f: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0x480: IF (Stack[-1] == 0) GOTO 0x484; Pop(1)

0x481: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x482: IF (Stack[-1] == 0) GOTO 0x484; Pop(1)

0x483: Stack[-1] = (bool) 1
0x484: IF (Stack[-1] == 0) GOTO 0x48a; Pop(1)

0x485: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x486: PushEmpty(object)
0x487: Stack[-1] = Stack[-2]
0x488: Call2 0x72b

0x489: Pop(1)
0x48a: Return(); Pop(0)

0x48b: PushEmpty()
0x48c: PushEmpty(bool)
0x48d: Stack[-1] = (bool) 0
0x48e: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0x48f: IF (Stack[-1] == 0) GOTO 0x493; Pop(1)

0x490: Push( Stack[2 + Tasks[-1].StackPointer] )
0x491: IF (Stack[-1] == 0) GOTO 0x493; Pop(1)

0x492: Stack[-1] = (bool) 1
0x493: IF (Stack[-1] == 0) GOTO 0x498; Pop(1)

0x494: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x495: Push("head")
0x496: @ UnlookAsync(Stack[-1])
0x497: Pop(1)
0x498: Return(); Pop(0)

0x499: PushEmpty(bool, bool, object, cvector, cvector, cvector, float, object, bool, bool, object, cvector, cvector, cvector, float, object)
0x49a: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x49b: Stack[1 + Tasks[-1].StackPointer] = Stack[-21]
0x49c: Stack[-7] = Stack[-17]
0x49d: PushEmpty(bool, object)
0x49e: Stack[-1] = Stack[-23]
0x49f: Call2 0x525

0x4a0: Pop(1)
0x4a1: Pop(1); Push((bool) Stack[-1] == 0)
0x4a2: IF (Stack[-1] == 0) GOTO 0x4a5; Pop(1)

0x4a3: Stack[-22] = (bool) 0
0x4a4: Return(); Pop(16)

0x4a5: @@ GetPosition(Stack[-5])
0x4a6: Pop(0)
0x4a7: @ GetPosition(Stack[-4])
0x4a8: Pop(0)
0x4a9: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x4aa: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x4ab: PushEmpty(bool)
0x4ac: Stack[-1] = (bool) 0
0x4ad: Push((int) 0)
0x4ae: Pop(1); Push((bool) Stack[-21] > Stack[-1])
0x4af: IF (Stack[-1] == 0) GOTO 0x4b4; Pop(1)

0x4b0: Pop(0); Push(Stack[-20] * Stack[-20]);
0x4b1: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x4b2: IF (Stack[-1] == 0) GOTO 0x4b4; Pop(1)

0x4b3: Stack[-1] = (bool) 1
0x4b4: IF (Stack[-1] == 0) GOTO 0x4b9; Pop(1)

0x4b5: @ Stop()
0x4b6: Pop(0)
0x4b7: Stack[-22] = (bool) 0
0x4b8: Return(); Pop(16)

0x4b9: Pop(0); Push(Stack[-20] * Stack[-20]);
0x4ba: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x4bb: IF (Stack[-1] == 0) GOTO 0x4f7; Pop(1)

0x4bc: @@ GetPFPosition(Stack[-5])
0x4bd: Pop(0)
0x4be: @ FindPathTo(Stack[-1], Stack[-5])
0x4bf: Pop(0)
0x4c0: Pop(0); Push(( Stack[-1] != 0 )
0x4c1: IF (Stack[-1] == 0) GOTO 0x4c4; Pop(1)

0x4c2: Stack[-6] = Stack[-1]
0x4c3: Stack[-1] = 0
0x4c4: Pop(0); Push(( Stack[-6] != 0 )
0x4c5: IF (Stack[-1] == 0) GOTO 0x4e5; Pop(1)

0x4c6: Push(Stack[-7])
0x4c7: IF (Stack[-1] == 0) GOTO 0x4ce; Pop(1)

0x4c8: Stack[-7] = (bool) 0
0x4c9: @ RotatePath(Stack[-6], Stack[-8])
0x4ca: Pop(0)
0x4cb: Pop(0); Push((bool) Stack[-8] == 0)
0x4cc: IF (Stack[-1] == 0) GOTO 0x4ce; Pop(1)

0x4cd: GOTO 0x4fd

0x4ce: Push((int) 0)
0x4cf: Push((float)0.3)
0x4d0: @ SetTimer(Stack[-2], Stack[-1])
0x4d1: Pop(2)
0x4d2: PushEmpty(string)
0x4d3: Call2 0x52c

0x4d4: Pop(0)
0x4d5: PushEmpty(string)
0x4d6: Call2 0x52e

0x4d7: Pop(0)
0x4d8: @ FollowPath(Stack[-8], Stack[-20], Stack[-10], Stack[-2], Stack[-1])
0x4d9: Pop(2)
0x4da: Pop(0); Push((bool) Stack[-8] == 0)
0x4db: IF (Stack[-1] == 0) GOTO 0x4e3; Pop(1)

0x4dc: Push( Stack[0 + Tasks[-1].StackPointer] )
0x4dd: IF (Stack[-1] == 0) GOTO 0x4e1; Pop(1)

0x4de: Stack[-6] = 0
0x4df: GOTO 0x4fd

0x4e0: GOTO 0x4e2

0x4e1: GOTO 0x4fc

0x4e2: GOTO 0x4e4

0x4e3: Stack[-6] = 0
0x4e4: GOTO 0x4f5

0x4e5: Push((int) 0)
0x4e6: @ KillTimer(Stack[-1])
0x4e7: Pop(1)
0x4e8: Push((float)0.5)
0x4e9: @ Sleep(Stack[-1], Stack[-9])
0x4ea: Pop(1)
0x4eb: Pop(0); Push((bool) Stack[-8] == 0)
0x4ec: IF (Stack[-1] == 0) GOTO 0x4f1; Pop(1)

0x4ed: Push( Stack[0 + Tasks[-1].StackPointer] )
0x4ee: IF (Stack[-1] == 0) GOTO 0x4f1; Pop(1)

0x4ef: Stack[-6] = 0
0x4f0: GOTO 0x4fd

0x4f1: Push((int) 0)
0x4f2: Push((float)0.3)
0x4f3: @ SetTimer(Stack[-2], Stack[-1])
0x4f4: Pop(2)
0x4f5: Stack[-1] = 0
0x4f6: GOTO 0x4fb

0x4f7: Push((int) 0)
0x4f8: @ KillTimer(Stack[-1])
0x4f9: Pop(1)
0x4fa: GOTO 0x4fd

0x4fb: Stack[-6] = 0
0x4fc: GOTO 0x49d

0x4fd: Stack[-22] = !Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x4fe: Return(); Pop(16)

0x4ff: PushEmpty()
0x500: Push((int) 0)
0x501: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x502: IF (Stack[-1] == 0) GOTO 0x504; Pop(1)

0x503: Return(); Pop(0)

0x504: PushEmpty(bool, object)
0x505: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x506: Call2 0x525

0x507: Pop(1)
0x508: Pop(1); Push((bool) Stack[-1] == 0)
0x509: IF (Stack[-1] == 0) GOTO 0x50b; Pop(1)

0x50a: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x50b: Push((int) 0)
0x50c: @ KillTimer(Stack[-1])
0x50d: Pop(1)
0x50e: @ Stop()
0x50f: Pop(0)
0x510: Return(); Pop(0)

0x511: PushEmpty()
0x512: @ RequestClearPath(Stack[-1])
0x513: Pop(0)
0x514: Return(); Pop(0)

0x515: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x516: Push((int) 0)
0x517: @ KillTimer(Stack[-1])
0x518: Pop(1)
0x519: @ Stop()
0x51a: Pop(0)
0x51b: Return(); Pop(0)

0x51c: PushEmpty()
0x51d: PushEmpty()
0x51e: Call2 0x46f

0x51f: Pop(0)
0x520: PushEmpty(object)
0x521: Stack[-1] = Stack[-2]
0x522: Call2 0x839

0x523: Pop(1)
0x524: Return(); Pop(0)

0x525: PushEmpty()
0x526: PushEmpty(bool, object)
0x527: Stack[-1] = Stack[-3]
0x528: Call2 0x685

0x529: Stack[-4] = Stack[-2]
0x52a: Pop(2)
0x52b: Return(); Pop(0)

0x52c: Stack[-1] = "walk"
0x52d: Return(); Pop(0)

0x52e: Stack[-1] = "run"
0x52f: Return(); Pop(0)

0x530: PushEmpty()
0x531: PushEmpty(object)
0x532: Stack[-1] = Stack[-2]
0x533: Call2 0x536

0x534: Pop(1)
0x535: Return(); Pop(0)

0x536: PushEmpty()
0x537: EventDisable(0)
0x538: PushEmpty(object)
0x539: Stack[-1] = Stack[-2]
0x53a: Call2 0x54f

0x53b: Pop(1)
0x53c: Push((int) 50)
0x53d: Push((int) 40)
0x53e: @ SetRTEnvelope(Stack[-2], Stack[-1])
0x53f: Pop(2)
0x540: EventEnable(0)
0x541: @ Hold()
0x542: Pop(0)
0x543: GOTO 0x541

0x544: Return(); Pop(0)

0x545: PushEmpty(bool, bool)
0x546: @ IsOverrideActive(Stack[-1])
0x547: Pop(0)
0x548: Pop(0); Push((bool) Stack[-1] == 0)
0x549: IF (Stack[-1] == 0) GOTO 0x54e; Pop(1)

0x54a: PushEmpty(object)
0x54b: Stack[-1] = Stack[-4]
0x54c: Call2 0x7f9

0x54d: Pop(1)
0x54e: Return(); Pop(2)

0x54f: PushEmpty(cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector, cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector)
0x550: Pop(0); Push((bool) Stack[-21] == 0)
0x551: IF (Stack[-1] == 0) GOTO 0x557; Pop(1)

0x552: PushEmpty(string)
0x553: Stack[-1] = "fdie"
0x554: Call2 0x5aa

0x555: Pop(1)
0x556: GOTO 0x5a9

0x557: @@ GetPosition(Stack[-10])
0x558: Pop(0)
0x559: @ GetPosition(Stack[-9])
0x55a: Pop(0)
0x55b: @ GetDirection(Stack[-8])
0x55c: Pop(0)
0x55d: Stack[-7] = Stack[-9] - Stack[-10]; Pop(0);
0x55e: Push(CvectorIndex(Stack[-7], 0))
0x55f: Push(CvectorIndex(Stack[-9], 0))
0x560: Pop(2); Push(Stack[-2] * Stack[-1]);
0x561: Push(CvectorIndex(Stack[-8], 2))
0x562: Push(CvectorIndex(Stack[-10], 2))
0x563: Pop(2); Push(Stack[-2] * Stack[-1]);
0x564: Pop(2); Push(Stack[-2] + Stack[-1]);
0x565: Push((int) 0)
0x566: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x567: IF (Stack[-1] == 0) GOTO 0x56a; Pop(1)

0x568: Stack[-6] = "fdie"
0x569: GOTO 0x56b

0x56a: Stack[-6] = "bdie"
0x56b: @ RemoveRTEnvelope()
0x56c: Pop(0)
0x56d: @ SetDeathState()
0x56e: Pop(0)
0x56f: @ Stop()
0x570: Pop(0)
0x571: @ StopAsync()
0x572: Pop(0)
0x573: Stack[-5] = Stack[-21]
0x574: Push("GetScriptProperty")
0x575: Push((int) 2)
0x576: Pop(2); Push(IsFuncExist(Stack[-23], Stack[-2], Stack[-1]))
0x577: IF (Stack[-1] == 0) GOTO 0x583; Pop(1)

0x578: Push("Owner")
0x579: @@ HasScriptProperty(Stack[-5], Stack[-1])
0x57a: Pop(1)
0x57b: Push(Stack[-4])
0x57c: IF (Stack[-1] == 0) GOTO 0x583; Pop(1)

0x57d: Push("Owner")
0x57e: @@ GetScriptProperty(Stack[-6], Stack[-1])
0x57f: Pop(1)
0x580: Pop(0); Push((bool) Stack[-5] == 0)
0x581: IF (Stack[-1] == 0) GOTO 0x583; Pop(1)

0x582: Stack[-5] = Stack[-21]
0x583: Push("@GetEyesHeight")
0x584: Push((int) 1)
0x585: Pop(2); Push(IsFuncExist(Stack[-7], Stack[-2], Stack[-1]))
0x586: IF (Stack[-1] == 0) GOTO 0x592; Pop(1)

0x587: @@ GetEyesHeight(Stack[-2])
0x588: Pop(0)
0x589: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x58a: Push(CvectorIndex(Stack[-1], 1))
0x58b: Stack[-1] = Stack[-3]
0x58c: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x58d: Push("head")
0x58e: @ LookAsync(Stack[-22], Stack[-1], Stack[-2])
0x58f: Pop(1)
0x590: Stack[-3] = (bool) 1
0x591: GOTO 0x593

0x592: Stack[-3] = (bool) 0
0x593: PushEmpty(string)
0x594: Stack[-1] = Stack[-7]
0x595: Call2 0x736

0x596: Pop(1)
0x597: Push("all")
0x598: @ PlayAnimation(Stack[-1], Stack[-7])
0x599: Pop(1)
0x59a: @ WaitForAnimEnd()
0x59b: Pop(0)
0x59c: Push(Stack[-3])
0x59d: IF (Stack[-1] == 0) GOTO 0x5a3; Pop(1)

0x59e: @ StopAsync()
0x59f: Pop(0)
0x5a0: Push("head")
0x5a1: @ UnlookAsync(Stack[-1])
0x5a2: Pop(1)
0x5a3: Push("all")
0x5a4: @ LockAnimationEnd(Stack[-1], Stack[-7])
0x5a5: Pop(1)
0x5a6: @ RemoveEnvelope()
0x5a7: Pop(0)
0x5a8: Stack[-5] = 0
0x5a9: Return(); Pop(20)

0x5aa: PushEmpty()
0x5ab: @ RemoveRTEnvelope()
0x5ac: Pop(0)
0x5ad: @ SetDeathState()
0x5ae: Pop(0)
0x5af: @ Stop()
0x5b0: Pop(0)
0x5b1: @ StopAsync()
0x5b2: Pop(0)
0x5b3: @ StopSecondaryAnimation()
0x5b4: Pop(0)
0x5b5: PushEmpty(string)
0x5b6: Stack[-1] = Stack[-2]
0x5b7: Call2 0x736

0x5b8: Pop(1)
0x5b9: Push("all")
0x5ba: @ PlayAnimation(Stack[-1], Stack[-2])
0x5bb: Pop(1)
0x5bc: @ WaitForAnimEnd()
0x5bd: Pop(0)
0x5be: Push("all")
0x5bf: @ LockAnimationEnd(Stack[-1], Stack[-2])
0x5c0: Pop(1)
0x5c1: @ RemoveEnvelope()
0x5c2: Pop(0)
0x5c3: Return(); Pop(0)

0x5c4: PushEmpty()
0x5c5: Return(); Pop(0)

0x5c6: PushEmpty()
0x5c7: Return(); Pop(0)

0x5c8: PushEmpty()
0x5c9: Return(); Pop(0)

0x5ca: PushEmpty()
0x5cb: Push((int) 2)
0x5cc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5cd: IF (Stack[-1] == 0) GOTO 0x5d1; Pop(1)

0x5ce: Stack[-2] = "fire"
0x5cf: Return(); Pop(0)

0x5d0: GOTO 0x5d6

0x5d1: Push((int) 1)
0x5d2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5d3: IF (Stack[-1] == 0) GOTO 0x5d6; Pop(1)

0x5d4: Stack[-2] = "bullet"
0x5d5: Return(); Pop(0)

0x5d6: Stack[-2] = "phys"
0x5d7: Return(); Pop(0)

0x5d8: PushEmpty(cvector, cvector)
0x5d9: @ GetPosition(Stack[-1])
0x5da: Pop(0)
0x5db: Stack[-3] = Stack[-1]
0x5dc: Return(); Pop(2)

0x5dd: PushEmpty(cvector, cvector, cvector, cvector)
0x5de: @ GetPosition(Stack[-2])
0x5df: Pop(0)
0x5e0: @@ GetPosition(Stack[-1])
0x5e1: Pop(0)
0x5e2: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x5e3: Return(); Pop(4)

0x5e4: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x5e5: @ GetPosition(Stack[-3])
0x5e6: Pop(0)
0x5e7: @@ GetPosition(Stack[-2])
0x5e8: Pop(0)
0x5e9: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x5ea: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x5eb: Return(); Pop(6)

0x5ec: PushEmpty(bool, bool)
0x5ed: @ IsPlayerActor(Stack[-3], Stack[-1])
0x5ee: Pop(0)
0x5ef: Stack[-4] = Stack[-1]
0x5f0: Return(); Pop(2)

0x5f1: PushEmpty(bool, bool)
0x5f2: Push("HasProperty")
0x5f3: Push((int) 2)
0x5f4: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x5f5: Pop(1); Push((bool) Stack[-1] == 0)
0x5f6: IF (Stack[-1] == 0) GOTO 0x5f9; Pop(1)

0x5f7: Stack[-5] = (bool) 0
0x5f8: Return(); Pop(2)

0x5f9: @@ HasProperty(Stack[-3], Stack[-1])
0x5fa: Pop(0)
0x5fb: Stack[-5] = Stack[-1]
0x5fc: Return(); Pop(2)

0x5fd: PushEmpty(float, float)
0x5fe: PushEmpty(bool, object, string)
0x5ff: Stack[-2] = Stack[-10]
0x600: Stack[-1] = Stack[-9]
0x601: Call2 0x5f1

0x602: Pop(2)
0x603: Pop(1); Push((bool) Stack[-1] == 0)
0x604: IF (Stack[-1] == 0) GOTO 0x607; Pop(1)

0x605: Stack[-8] = (bool) 0
0x606: Return(); Pop(2)

0x607: @@ GetProperty(Stack[-6], Stack[-1])
0x608: Pop(0)
0x609: PushEmpty(float, float, float, float)
0x60a: Stack[-3] = Stack[-5] + Stack[-9]; Pop(0);
0x60b: Stack[-2] = Stack[-8]
0x60c: Stack[-1] = Stack[-7]
0x60d: Call2 0x776

0x60e: Pop(3)
0x60f: @@ SetProperty(Stack[-7], Stack[-1])
0x610: Pop(1)
0x611: Stack[-8] = (bool) 1
0x612: Return(); Pop(2)

0x613: PushEmpty(int, string, int, float, float, float, int, string, int, float, float, float)
0x614: PushEmpty(bool, object, string)
0x615: Stack[-2] = Stack[-18]
0x616: Stack[-1] = "health"
0x617: Call2 0x5f1

0x618: Pop(2)
0x619: Pop(1); Push((bool) Stack[-1] == 0)
0x61a: IF (Stack[-1] == 0) GOTO 0x61d; Pop(1)

0x61b: Stack[-16] = (float) 0.0
0x61c: Return(); Pop(12)

0x61d: PushEmpty(bool, object, string)
0x61e: Stack[-2] = Stack[-18]
0x61f: Stack[-1] = "armor"
0x620: Call2 0x5f1

0x621: Pop(2)
0x622: Pop(1); Push((bool) Stack[-1] == 0)
0x623: IF (Stack[-1] == 0) GOTO 0x626; Pop(1)

0x624: Stack[-6] = (int) 0
0x625: GOTO 0x629

0x626: Push("armor")
0x627: @@ GetProperty(Stack[-1], Stack[-7])
0x628: Pop(1)
0x629: Push("armor_")
0x62a: PushEmpty(string, int)
0x62b: Stack[-1] = Stack[-16]
0x62c: Call2 0x5ca

0x62d: Pop(1)
0x62e: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x62f: PushEmpty(bool, object, string)
0x630: Stack[-2] = Stack[-18]
0x631: Stack[-1] = Stack[-8]
0x632: Call2 0x5f1

0x633: Pop(2)
0x634: Pop(1); Push((bool) Stack[-1] == 0)
0x635: IF (Stack[-1] == 0) GOTO 0x638; Pop(1)

0x636: Stack[-4] = (int) 0
0x637: GOTO 0x63a

0x638: @@ GetProperty(Stack[-5], Stack[-4])
0x639: Pop(0)
0x63a: PushEmpty(float, float, float)
0x63b: Pop(0); Push(Stack[-9] + Stack[-7]);
0x63c: Push((float)100.0)
0x63d: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0x63e: Stack[-1] = (int) 1
0x63f: Call2 0x76f

0x640: Stack[-6] = Stack[-3]
0x641: Pop(3)
0x642: Push("health")
0x643: @@ GetProperty(Stack[-1], Stack[-3])
0x644: Pop(1)
0x645: Push((int) 1)
0x646: Pop(1); Push(Stack[-1] - Stack[-4]);
0x647: Stack[-2] = Stack[-15] * Stack[-1]; Pop(1);
0x648: Push("health")
0x649: PushEmpty(float, float, float, float)
0x64a: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0x64b: Stack[-2] = (int) 0
0x64c: Stack[-1] = (int) 1
0x64d: Call2 0x776

0x64e: Pop(3)
0x64f: @@ SetProperty(Stack[-2], Stack[-1])
0x650: Pop(2)
0x651: PushEmpty(bool, object)
0x652: Stack[-1] = Stack[-17]
0x653: Call2 0x5ec

0x654: Pop(1)
0x655: IF (Stack[-1] == 0) GOTO 0x65a; Pop(1)

0x656: PushEmpty(float)
0x657: Stack[-1] = -Stack[-2]; Pop(0);
0x658: Call2 0x7ac

0x659: Pop(1)
0x65a: Stack[-16] = Stack[-1]
0x65b: Return(); Pop(12)

0x65c: PushEmpty(bool, bool)
0x65d: @@ IsDead(Stack[-1])
0x65e: Pop(0)
0x65f: Stack[-4] = Stack[-1]
0x660: Return(); Pop(2)

0x661: PushEmpty(object, object, object, object)
0x662: Pop(0); Push((bool) Stack[-5] == 0)
0x663: IF (Stack[-1] == 0) GOTO 0x666; Pop(1)

0x664: Stack[-6] = (bool) 0
0x665: Return(); Pop(4)

0x666: PushEmpty(bool)
0x667: Stack[-1] = (bool) 0
0x668: Push("IsDead")
0x669: Push((int) 1)
0x66a: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x66b: IF (Stack[-1] == 0) GOTO 0x672; Pop(1)

0x66c: PushEmpty(bool, object)
0x66d: Stack[-1] = Stack[-8]
0x66e: Call2 0x65c

0x66f: Pop(1)
0x670: IF (Stack[-1] == 0) GOTO 0x672; Pop(1)

0x671: Stack[-1] = (bool) 1
0x672: IF (Stack[-1] == 0) GOTO 0x675; Pop(1)

0x673: Stack[-6] = (bool) 0
0x674: Return(); Pop(4)

0x675: @ GetScene(Stack[-2])
0x676: Pop(0)
0x677: Pop(0); Push((bool) Stack[-2] == 0)
0x678: IF (Stack[-1] == 0) GOTO 0x67b; Pop(1)

0x679: Stack[-6] = (bool) 0
0x67a: Return(); Pop(4)

0x67b: @@ GetScene(Stack[-1])
0x67c: Pop(0)
0x67d: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x67e: IF (Stack[-1] == 0) GOTO 0x681; Pop(1)

0x67f: Stack[-6] = (bool) 0
0x680: Return(); Pop(4)

0x681: Stack[-6] = (bool) 1
0x682: Return(); Pop(4)

0x683: Stack[-1] = 0
0x684: Stack[-2] = 0
0x685: PushEmpty(int, int)
0x686: PushEmpty(bool, object)
0x687: Stack[-1] = Stack[-5]
0x688: Call2 0x661

0x689: Pop(1)
0x68a: Pop(1); Push((bool) Stack[-1] == 0)
0x68b: IF (Stack[-1] == 0) GOTO 0x68e; Pop(1)

0x68c: Stack[-4] = (bool) 0
0x68d: Return(); Pop(2)

0x68e: PushEmpty(bool, object, string)
0x68f: Stack[-2] = Stack[-6]
0x690: Stack[-1] = "noaccess"
0x691: Call2 0x5f1

0x692: Pop(2)
0x693: Pop(1); Push((bool) Stack[-1] == 0)
0x694: IF (Stack[-1] == 0) GOTO 0x697; Pop(1)

0x695: Stack[-4] = (bool) 1
0x696: Return(); Pop(2)

0x697: Push("noaccess")
0x698: @@ GetProperty(Stack[-1], Stack[-2])
0x699: Pop(1)
0x69a: Push((int) 0)
0x69b: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x69c: Return(); Pop(2)

0x69d: PushEmpty(bool, int, cvector, cvector, cvector, cvector, string, bool, int, cvector, cvector, cvector, cvector, string)
0x69e: Pop(0); Push((bool) Stack[-15] == 0)
0x69f: IF (Stack[-1] == 0) GOTO 0x6a1; Pop(1)

0x6a0: Return(); Pop(14)

0x6a1: @ IsDead(Stack[-7])
0x6a2: Pop(0)
0x6a3: Push(Stack[-7])
0x6a4: IF (Stack[-1] == 0) GOTO 0x6a6; Pop(1)

0x6a5: Return(); Pop(14)

0x6a6: @ GetSecondaryAnimationType(Stack[-6])
0x6a7: Pop(0)
0x6a8: Push((int) 0)
0x6a9: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x6aa: IF (Stack[-1] == 0) GOTO 0x6ac; Pop(1)

0x6ab: Return(); Pop(14)

0x6ac: @@ GetPosition(Stack[-5])
0x6ad: Pop(0)
0x6ae: @ GetPosition(Stack[-4])
0x6af: Pop(0)
0x6b0: @ GetDirection(Stack[-3])
0x6b1: Pop(0)
0x6b2: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0x6b3: Push(CvectorIndex(Stack[-2], 0))
0x6b4: Push(CvectorIndex(Stack[-4], 0))
0x6b5: Pop(2); Push(Stack[-2] * Stack[-1]);
0x6b6: Push(CvectorIndex(Stack[-3], 2))
0x6b7: Push(CvectorIndex(Stack[-5], 2))
0x6b8: Pop(2); Push(Stack[-2] * Stack[-1]);
0x6b9: Pop(2); Push(Stack[-2] + Stack[-1]);
0x6ba: Push((int) 0)
0x6bb: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x6bc: IF (Stack[-1] == 0) GOTO 0x6bf; Pop(1)

0x6bd: Stack[-1] = "fhit"
0x6be: GOTO 0x6c0

0x6bf: Stack[-1] = "bhit"
0x6c0: Push("hit_react")
0x6c1: Push("1")
0x6c2: Pop(1); Push(Stack[-3] + Stack[-1]);
0x6c3: Push("2")
0x6c4: Pop(1); Push(Stack[-4] + Stack[-1]);
0x6c5: Push((int) -10)
0x6c6: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x6c7: Pop(4)
0x6c8: Return(); Pop(14)

0x6c9: PushEmpty(cvector, object, int, bool, cvector, cvector, int, int, cvector, cvector, object, int, bool, cvector, cvector, int, int, cvector)
0x6ca: PushEmpty(bool)
0x6cb: Stack[-1] = (bool) 0
0x6cc: PushEmpty(bool)
0x6cd: Stack[-1] = (bool) 0
0x6ce: Push(Stack[-23])
0x6cf: IF (Stack[-1] == 0) GOTO 0x6d4; Pop(1)

0x6d0: Push((int) 4)
0x6d1: Pop(1); Push((bool) Stack[-23] != Stack[-1])
0x6d2: IF (Stack[-1] == 0) GOTO 0x6d4; Pop(1)

0x6d3: Stack[-1] = (bool) 1
0x6d4: IF (Stack[-1] == 0) GOTO 0x6d9; Pop(1)

0x6d5: Push((int) 5)
0x6d6: Pop(1); Push((bool) Stack[-22] != Stack[-1])
0x6d7: IF (Stack[-1] == 0) GOTO 0x6d9; Pop(1)

0x6d8: Stack[-1] = (bool) 1
0x6d9: IF (Stack[-1] == 0) GOTO 0x708; Pop(1)

0x6da: PushEmpty(cvector, cvector)
0x6db: PushEmpty(cvector, object)
0x6dc: Stack[-1] = Stack[-25]
0x6dd: Call2 0x5dd

0x6de: Stack[-3] = Stack[-2]
0x6df: Pop(2)
0x6e0: Call2 0x765

0x6e1: Stack[-11] = Stack[-2]
0x6e2: Pop(2)
0x6e3: @ CreateVectorVector(Stack[-8])
0x6e4: Pop(0)
0x6e5: Stack[-7] = (int) 1
0x6e6: Push("hit")
0x6e7: Pop(1); Push(Stack[-1] + Stack[-8]);
0x6e8: @ GetGeometryLocator(Stack[-1], Stack[-7], Stack[-6], Stack[-5])
0x6e9: Pop(1)
0x6ea: Pop(0); Push((bool) Stack[-6] == 0)
0x6eb: IF (Stack[-1] == 0) GOTO 0x6ed; Pop(1)

0x6ec: GOTO 0x6f6

0x6ed: Pop(0); Push(Stack[-4] | Stack[-9]);
0x6ee: Push((float)0.70711)
0x6ef: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x6f0: IF (Stack[-1] == 0) GOTO 0x6f3; Pop(1)

0x6f1: @@ add(Stack[-5])
0x6f2: Pop(0)
0x6f3: Push((int) 1)
0x6f4: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x6f5: GOTO 0x6e6

0x6f6: @@ size(Stack[-3])
0x6f7: Pop(0)
0x6f8: Push(Stack[-3])
0x6f9: IF (Stack[-1] == 0) GOTO 0x707; Pop(1)

0x6fa: @ irand(Stack[-2], Stack[-3])
0x6fb: Pop(0)
0x6fc: @@ get(Stack[-1], Stack[-2])
0x6fd: Pop(0)
0x6fe: PushEmpty(object, int, float, cvector, cvector)
0x6ff: Stack[-5] = Stack[-26]
0x700: Stack[-4] = Stack[-25]
0x701: Stack[-3] = Stack[-24]
0x702: Stack[-2] = Stack[-6]
0x703: Stack[-1] = -Stack[-14]; Pop(0);
0x704: Call2 0x70d

0x705: Pop(5)
0x706: Return(); Pop(18)

0x707: Stack[-8] = 0
0x708: PushEmpty(object)
0x709: Stack[-1] = Stack[-22]
0x70a: Call2 0x69d

0x70b: Pop(1)
0x70c: Return(); Pop(18)

0x70d: PushEmpty(object, object, object, object)
0x70e: @ GetScene(Stack[-2])
0x70f: Pop(0)
0x710: Push("scripted")
0x711: Push("blood_dir.xml")
0x712: @ AddActorByType(Stack[-3], Stack[-2], Stack[-4], Stack[-8], Stack[-7], Stack[-1])
0x713: Pop(2)
0x714: PushEmpty(object)
0x715: Stack[-1] = Stack[-10]
0x716: Call2 0x69d

0x717: Pop(1)
0x718: Return(); Pop(4)

0x719: Stack[-1] = 0
0x71a: Stack[-2] = 0
0x71b: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x71c: @@ GetPosition(Stack[-3])
0x71d: Pop(0)
0x71e: @ GetPosition(Stack[-2])
0x71f: Pop(0)
0x720: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0x721: Push(CvectorIndex(Stack[-1], 0))
0x722: Push(CvectorIndex(Stack[-2], 2))
0x723: @ RotateAsync(Stack[-2], Stack[-1])
0x724: Pop(2)
0x725: Return(); Pop(6)

0x726: PushEmpty(bool, bool)
0x727: @ IsLoaded(Stack[-1])
0x728: Pop(0)
0x729: Stack[-3] = Stack[-1]
0x72a: Return(); Pop(2)

0x72b: PushEmpty(float, cvector, float, cvector)
0x72c: @@ GetEyesHeight(Stack[-2])
0x72d: Pop(0)
0x72e: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x72f: Push(CvectorIndex(Stack[-1], 1))
0x730: Stack[-1] = Stack[-3]
0x731: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x732: Push("head")
0x733: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x734: Pop(1)
0x735: Return(); Pop(4)

0x736: PushEmpty(bool, int, bool, int, bool, float, cvector, cvector, bool, int, bool, int, bool, float, cvector, cvector)
0x737: @ IsExisting3DSound(Stack[-8], Stack[-17])
0x738: Pop(0)
0x739: Pop(0); Push((bool) Stack[-8] == 0)
0x73a: IF (Stack[-1] == 0) GOTO 0x74f; Pop(1)

0x73b: Stack[-7] = (int) 0
0x73c: Push((int) 1)
0x73d: Pop(1); Push(Stack[-8] + Stack[-1]);
0x73e: Pop(1); Push(Stack[-18] + Stack[-1]);
0x73f: @ IsExisting3DSound(Stack[-7], Stack[-1])
0x740: Pop(1)
0x741: Pop(0); Push((bool) Stack[-6] == 0)
0x742: IF (Stack[-1] == 0) GOTO 0x744; Pop(1)

0x743: GOTO 0x747

0x744: Push((int) 1)
0x745: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x746: GOTO 0x73c

0x747: Pop(0); Push((bool) Stack[-7] == 0)
0x748: IF (Stack[-1] == 0) GOTO 0x74a; Pop(1)

0x749: Return(); Pop(16)

0x74a: @ irand(Stack[-5], Stack[-7])
0x74b: Pop(0)
0x74c: Push((int) 1)
0x74d: Pop(1); Push(Stack[-6] + Stack[-1]);
0x74e: Stack[-18] = Stack[-18] + Stack[-1]; Pop(1);
0x74f: @ Is3DSoundLoaded(Stack[-4], Stack[-17])
0x750: Pop(0)
0x751: Push(Stack[-4])
0x752: IF (Stack[-1] == 0) GOTO 0x75e; Pop(1)

0x753: @ GetEyesHeight(Stack[-3])
0x754: Pop(0)
0x755: @ GetDirection(Stack[-2])
0x756: Pop(0)
0x757: Push((int) 50)
0x758: Stack[-2] = Stack[-3] * Stack[-1]; Pop(1);
0x759: Push(CvectorIndex(Stack[-1], 1))
0x75a: Stack[-1] = Stack[-1] + Stack[-4]; Pop(0);
0x75b: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x75c: @ PlayGlobalSound(Stack[-17], Stack[-1])
0x75d: Pop(0)
0x75e: Return(); Pop(16)

0x75f: PushEmpty(object, object)
0x760: @ self(Stack[-1])
0x761: Pop(0)
0x762: Stack[-3] = Stack[-1]
0x763: Return(); Pop(2)

0x764: Stack[-1] = 0
0x765: PushEmpty(float, float)
0x766: Pop(0); Push(Stack[-3] | Stack[-3]);
0x767: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x768: Push((float)0.0)
0x769: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x76a: IF (Stack[-1] == 0) GOTO 0x76d; Pop(1)

0x76b: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x76c: Return(); Pop(2)

0x76d: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x76e: Return(); Pop(2)

0x76f: PushEmpty()
0x770: Pop(0); Push((bool) Stack[-2] < Stack[-1])
0x771: IF (Stack[-1] == 0) GOTO 0x774; Pop(1)

0x772: Stack[-3] = Stack[-2]
0x773: GOTO 0x775

0x774: Stack[-3] = Stack[-1]
0x775: Return(); Pop(0)

0x776: PushEmpty()
0x777: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x778: IF (Stack[-1] == 0) GOTO 0x77b; Pop(1)

0x779: Stack[-4] = Stack[-2]
0x77a: Return(); Pop(0)

0x77b: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x77c: IF (Stack[-1] == 0) GOTO 0x77f; Pop(1)

0x77d: Stack[-4] = Stack[-1]
0x77e: Return(); Pop(0)

0x77f: Stack[-4] = Stack[-3]
0x780: Return(); Pop(0)

0x781: PushEmpty()
0x782: Pop(0); Push(Stack[-2] | Stack[-1]);
0x783: Pop(0); Push(Stack[-3] | Stack[-3]);
0x784: Pop(0); Push(Stack[-3] | Stack[-3]);
0x785: Pop(2); Push(Stack[-2] * Stack[-1]);
0x786: Pop(1); Push(Sqrt(Stack[-1]))
0x787: Stack[-5] = Stack[-2] / Stack[-1]; Pop(2);
0x788: Return(); Pop(0)

0x789: PushEmpty()
0x78a: Pop(0); Push((bool) Stack[-2] == 0)
0x78b: IF (Stack[-1] == 0) GOTO 0x78e; Pop(1)

0x78c: Stack[-3] = (bool) 0
0x78d: Return(); Pop(0)

0x78e: Push((int) 0)
0x78f: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x790: IF (Stack[-1] == 0) GOTO 0x795; Pop(1)

0x791: Push((int) 8)
0x792: @ SendWorldWndMessage(Stack[-1])
0x793: Pop(1)
0x794: GOTO 0x79e

0x795: Push((int) 0)
0x796: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x797: IF (Stack[-1] == 0) GOTO 0x79c; Pop(1)

0x798: Push((int) 9)
0x799: @ SendWorldWndMessage(Stack[-1])
0x79a: Pop(1)
0x79b: GOTO 0x79e

0x79c: Stack[-3] = (bool) 0
0x79d: Return(); Pop(0)

0x79e: PushEmpty(float)
0x79f: Stack[-1] = Stack[-2]
0x7a0: Call2 0x7bd

0x7a1: Pop(1)
0x7a2: PushEmpty(bool, object, string, float, float, float)
0x7a3: Stack[-5] = Stack[-8]
0x7a4: Stack[-4] = "reputation"
0x7a5: Stack[-3] = Stack[-7]
0x7a6: Stack[-2] = (int) 0
0x7a7: Stack[-1] = (int) 1
0x7a8: Call2 0x5fd

0x7a9: Pop(6)
0x7aa: Stack[-3] = (bool) 1
0x7ab: Return(); Pop(0)

0x7ac: PushEmpty(object, object)
0x7ad: @ CreateFloatVector(Stack[-1])
0x7ae: Pop(0)
0x7af: @@ add(Stack[-3])
0x7b0: Pop(0)
0x7b1: Push((int) 0)
0x7b2: Pop(1); Push((bool) Stack[-4] < Stack[-1])
0x7b3: IF (Stack[-1] == 0) GOTO 0x7b8; Pop(1)

0x7b4: Push((float)0.7)
0x7b5: Push((int) 500)
0x7b6: @ RumblePlay(Stack[-2], Stack[-1])
0x7b7: Pop(2)
0x7b8: Push((int) 15)
0x7b9: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x7ba: Pop(1)
0x7bb: Return(); Pop(2)

0x7bc: Stack[-1] = 0
0x7bd: PushEmpty(object, object)
0x7be: @ CreateFloatVector(Stack[-1])
0x7bf: Pop(0)
0x7c0: @@ add(Stack[-3])
0x7c1: Pop(0)
0x7c2: Push((int) 16)
0x7c3: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x7c4: Pop(1)
0x7c5: Return(); Pop(2)

0x7c6: Stack[-1] = 0
0x7c7: PushEmpty(bool, bool)
0x7c8: @ IsPlayerActor(Stack[-3], Stack[-1])
0x7c9: Pop(0)
0x7ca: Push(Stack[-1])
0x7cb: IF (Stack[-1] == 0) GOTO 0x7cf; Pop(1)

0x7cc: Push("attack")
0x7cd: @ PlayGlobalMusic(Stack[-1])
0x7ce: Pop(1)
0x7cf: Return(); Pop(2)

0x7d0: PushEmpty(object, object)
0x7d1: @ GetScene(Stack[-1])
0x7d2: Pop(0)
0x7d3: Push("battle")
0x7d4: PushEmpty(object)
0x7d5: Call2 0x75f

0x7d6: Pop(0)
0x7d7: @ BroadcastMessage(Stack[-2], Stack[-1], Stack[-3])
0x7d8: Pop(2)
0x7d9: Return(); Pop(2)

0x7da: Stack[-1] = 0
0x7db: PushEmpty(string, string)
0x7dc: Stack[-1] = "idle"
0x7dd: Push(Stack[-3])
0x7de: IF (Stack[-1] == 0) GOTO 0x7e0; Pop(1)

0x7df: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x7e0: Stack[-4] = Stack[-1]
0x7e1: Return(); Pop(2)

0x7e2: PushEmpty(int, bool, int, bool)
0x7e3: Stack[-2] = (int) 0
0x7e4: Push("all")
0x7e5: PushEmpty(string, int)
0x7e6: Stack[-1] = Stack[-5]
0x7e7: Call2 0x7db

0x7e8: Pop(1)
0x7e9: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x7ea: Pop(2)
0x7eb: Pop(0); Push((bool) Stack[-1] == 0)
0x7ec: IF (Stack[-1] == 0) GOTO 0x7ee; Pop(1)

0x7ed: GOTO 0x7f1

0x7ee: Push((int) 1)
0x7ef: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x7f0: GOTO 0x7e4

0x7f1: Stack[-5] = Stack[-2]
0x7f2: Return(); Pop(4)

0x7f3: PushEmpty(int, int)
0x7f4: Push("branch")
0x7f5: @ GetVariable(Stack[-1], Stack[-2])
0x7f6: Pop(1)
0x7f7: Stack[-3] = Stack[-1]
0x7f8: Return(); Pop(2)

0x7f9: PushEmpty()
0x7fa: PushEmpty(int)
0x7fb: Call2 0x7f3

0x7fc: Pop(0)
0x7fd: Push((int) 1)
0x7fe: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x7ff: IF (Stack[-1] == 0) GOTO 0x803; Pop(1)

0x800: @ WorkWithCorpse(Stack[-1])
0x801: Pop(0)
0x802: GOTO 0x805

0x803: @ Barter(Stack[-1])
0x804: Pop(0)
0x805: Return(); Pop(0)

0x806: PushEmpty(object, object)
0x807: @ GetScene(Stack[-1])
0x808: Pop(0)
0x809: PushEmpty(object)
0x80a: Call2 0x75f

0x80b: Pop(0)
0x80c: @@ RemoveStationaryActor(Stack[-1])
0x80d: Pop(1)
0x80e: Return(); Pop(2)

0x80f: Stack[-1] = 0
0x810: PushEmpty()
0x811: PushEmpty(bool, object)
0x812: Stack[-1] = Stack[-3]
0x813: Call2 0x5ec

0x814: Pop(1)
0x815: IF (Stack[-1] == 0) GOTO 0x81b; Pop(1)

0x816: PushEmpty(bool, object, float)
0x817: Stack[-2] = Stack[-4]
0x818: Stack[-1] = (float) -0.1
0x819: Call2 0x789

0x81a: Pop(3)
0x81b: PushEmpty()
0x81c: Call2 0x806

0x81d: Pop(0)
0x81e: PushEmpty(object)
0x81f: Stack[-1] = Stack[-2]
0x820: Push(-1, 0); TaskCall(4)
0x821: Call2 0x530

0x822: Pop(-1, 0); TaskReturn
0x823: Pop(1)
0x824: Return(); Pop(0)

0x825: PushEmpty()
0x826: PushEmpty(object, int, float)
0x827: Stack[-3] = Stack[-7]
0x828: Stack[-2] = Stack[-6]
0x829: Stack[-1] = Stack[-5]
0x82a: Call2 0x6c9

0x82b: Pop(3)
0x82c: Return(); Pop(0)

0x82d: PushEmpty()
0x82e: PushEmpty(object, int, float, cvector, cvector)
0x82f: Stack[-5] = Stack[-11]
0x830: Stack[-4] = Stack[-10]
0x831: Stack[-3] = Stack[-9]
0x832: Stack[-2] = Stack[-7]
0x833: Stack[-1] = Stack[-6]
0x834: Call2 0x70d

0x835: Pop(5)
0x836: Return(); Pop(0)

0x837: PushEmpty()
0x838: Return(); Pop(0)

0x839: PushEmpty()
0x83a: PushEmpty(object)
0x83b: Stack[-1] = Stack[-2]
0x83c: Call2 0x810

0x83d: Pop(1)
0x83e: Return(); Pop(0)

0x83f: PushEmpty()
0x840: PushEmpty(bool, object)
0x841: Stack[-1] = Stack[-3]
0x842: Call2 0x685

0x843: Stack[-4] = Stack[-2]
0x844: Pop(2)
0x845: Return(); Pop(0)

0x846: PushEmpty()
0x847: PushEmpty(object, bool)
0x848: Stack[-2] = Stack[-3]
0x849: Stack[-1] = (bool) 1
0x84a: Push(-2, 6); TaskCall(2)
0x84b: Call2 0x180

0x84c: Pop(-2, 6); TaskReturn
0x84d: Pop(2)
0x84e: Return(); Pop(0)

