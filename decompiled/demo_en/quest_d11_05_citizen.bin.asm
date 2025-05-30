GlobalVarCount = 0

Strings:
	all
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
	RemoveStationaryActor

Import:
	Sleep (1 args)
	IsPlayerActor (2 args)
	WaitForAnimEnd (0 args)
	irand (2 args)
	PlayAnimation (2 args)
	WaitForAnimEnd (1 args)
	rand (2 args)
	Sleep (2 args)
	ResetAAS (0 args)
	StopAnimation (0 args)
	StopGroup0 (0 args)
	SetRTEnvelope (2 args)
	Hold (0 args)
	IsOverrideActive (1 args)
	GetPosition (1 args)
	GetDirection (1 args)
	RemoveRTEnvelope (0 args)
	SetDeathState (0 args)
	Stop (0 args)
	StopAsync (0 args)
	LookAsync (3 args)
	UnlookAsync (1 args)
	LockAnimationEnd (2 args)
	RemoveEnvelope (0 args)
	StopSecondaryAnimation (0 args)
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
	RequestClearPath (1 args)
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
	SendWorldWndMessage (2 args)
	BroadcastMessage (3 args)
	GetProperty (2 args)
	SignalDeath (1 args)
	GetVariable (2 args)
	WorkWithCorpse (1 args)
	Barter (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_17 Op = 0x8 Vars = (object)
		EVENT_1 Op = 0x16 Vars = (object)
		EVENT_3 Op = 0x20 Vars = (object)
	GTASK_1  Params = 1
		EVENT_0 Op = 0x9f Vars = (object)
		EVENT_22 Op = 0x11e Vars = (object, int, float, float)
		EVENT_16 Op = 0x120 Vars = (object, string)
		EVENT_41 Op = 0x122 Vars = (object)
	GTASK_2 Vars = (object, int, int, bool, float, int) Params = 1
	GTASK_3 Vars = (bool, object, bool) Params = 6
		EVENT_7 Op = 0x3fd Vars = (int)
		EVENT_1 Op = 0x418 Vars = (object)
		EVENT_2 Op = 0x427 Vars = (object)
		EVENT_10 Op = 0x4ad Vars = (object)
		EVENT_41 Op = 0x4b8 Vars = (object)

Events:
EVENT_22 Op = 0x6e1 Vars = (object, int, float, float)
EVENT_43 Op = 0x6e9 Vars = (object, int, float, float, cvector, cvector)
EVENT_16 Op = 0x6f3 Vars = (object, string)
EVENT_41 Op = 0x700 Vars = (object)

0x0: Push((int) 3)
0x1: @ Sleep(Stack[-1])
0x2: Pop(1)
0x3: PushEmpty()
0x4: Call2 0x2a

0x5: Pop(0)
0x6: GOTO 0x0

0x7: Return(); Pop(0)

0x8: PushEmpty()
0x9: PushEmpty(bool, object)
0xa: Stack[-1] = Stack[-3]
0xb: Call2 0x706

0xc: Pop(1)
0xd: IF (Stack[-1] == 0) GOTO 0x15; Pop(1)

0xe: PushEmpty()
0xf: Call2 0x7b

0x10: Pop(0)
0x11: PushEmpty(object)
0x12: Stack[-1] = Stack[-2]
0x13: Call2 0x70d

0x14: Pop(1)
0x15: Return(); Pop(0)

0x16: PushEmpty(bool, bool)
0x17: @ IsPlayerActor(Stack[-3], Stack[-1])
0x18: Pop(0)
0x19: Push(Stack[-1])
0x1a: IF (Stack[-1] == 0) GOTO 0x1f; Pop(1)

0x1b: PushEmpty(object)
0x1c: Stack[-1] = Stack[-4]
0x1d: Call2 0x8

0x1e: Pop(1)
0x1f: Return(); Pop(2)

0x20: PushEmpty(bool, bool)
0x21: @ IsPlayerActor(Stack[-3], Stack[-1])
0x22: Pop(0)
0x23: Push(Stack[-1])
0x24: IF (Stack[-1] == 0) GOTO 0x29; Pop(1)

0x25: PushEmpty(object)
0x26: Stack[-1] = Stack[-4]
0x27: Call2 0x8

0x28: Pop(1)
0x29: Return(); Pop(2)

0x2a: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x2b: @ WaitForAnimEnd()
0x2c: Pop(0)
0x2d: PushEmpty(bool)
0x2e: Call2 0x61b

0x2f: Pop(0)
0x30: Pop(1); Push((bool) Stack[-1] == 0)
0x31: IF (Stack[-1] == 0) GOTO 0x33; Pop(1)

0x32: Return(); Pop(14)

0x33: PushEmpty(int)
0x34: Call2 0x6c8

0x35: Stack[-8] = Stack[-1]
0x36: Pop(1)
0x37: Stack[-6] = (int) 0
0x38: PushEmpty(bool)
0x39: Stack[-1] = (bool) 0
0x3a: Push((int) 5)
0x3b: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x3c: IF (Stack[-1] == 0) GOTO 0x42; Pop(1)

0x3d: PushEmpty(bool)
0x3e: Call2 0x61b

0x3f: Pop(0)
0x40: IF (Stack[-1] == 0) GOTO 0x42; Pop(1)

0x41: Stack[-1] = (bool) 1
0x42: IF (Stack[-1] == 0) GOTO 0x76; Pop(1)

0x43: Push((int) 3)
0x44: @ irand(Stack[-6], Stack[-1])
0x45: Pop(1)
0x46: Push((int) 0)
0x47: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x48: IF (Stack[-1] == 0) GOTO 0x5a; Pop(1)

0x49: Push(Stack[-7])
0x4a: IF (Stack[-1] == 0) GOTO 0x59; Pop(1)

0x4b: @ irand(Stack[-4], Stack[-7])
0x4c: Pop(0)
0x4d: Push("all")
0x4e: PushEmpty(string, int)
0x4f: Stack[-1] = Stack[-7]
0x50: Call2 0x6c1

0x51: Pop(1)
0x52: @ PlayAnimation(Stack[-2], Stack[-1])
0x53: Pop(2)
0x54: @ WaitForAnimEnd(Stack[-3])
0x55: Pop(0)
0x56: Pop(0); Push((bool) Stack[-3] == 0)
0x57: IF (Stack[-1] == 0) GOTO 0x59; Pop(1)

0x58: GOTO 0x76

0x59: GOTO 0x6b

0x5a: Push((int) 1)
0x5b: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x5c: IF (Stack[-1] == 0) GOTO 0x68; Pop(1)

0x5d: Push((int) 4)
0x5e: @ rand(Stack[-3], Stack[-1])
0x5f: Pop(1)
0x60: Push((int) 1)
0x61: Pop(1); Push(Stack[-3] + Stack[-1]);
0x62: @ Sleep(Stack[-1], Stack[-2])
0x63: Pop(1)
0x64: Pop(0); Push((bool) Stack[-1] == 0)
0x65: IF (Stack[-1] == 0) GOTO 0x67; Pop(1)

0x66: GOTO 0x76

0x67: GOTO 0x6b

0x68: Push(Stack[-6])
0x69: IF (Stack[-1] == 0) GOTO 0x6b; Pop(1)

0x6a: GOTO 0x76

0x6b: PushEmpty(bool)
0x6c: Call2 0x79

0x6d: Pop(0)
0x6e: Pop(1); Push((bool) Stack[-1] == 0)
0x6f: IF (Stack[-1] == 0) GOTO 0x71; Pop(1)

0x70: GOTO 0x76

0x71: @ ResetAAS()
0x72: Pop(0)
0x73: Push((int) 1)
0x74: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x75: GOTO 0x38

0x76: @ ResetAAS()
0x77: Pop(0)
0x78: Return(); Pop(14)

0x79: Stack[-1] = (bool) 1
0x7a: Return(); Pop(0)

0x7b: @ StopAnimation()
0x7c: Pop(0)
0x7d: @ StopGroup0()
0x7e: Pop(0)
0x7f: Return(); Pop(0)

0x80: PushEmpty()
0x81: PushEmpty(bool, object)
0x82: Stack[-1] = Stack[-3]
0x83: Call2 0x4e1

0x84: Pop(1)
0x85: IF (Stack[-1] == 0) GOTO 0x8b; Pop(1)

0x86: PushEmpty(bool, object, float)
0x87: Stack[-2] = Stack[-4]
0x88: Stack[-1] = (float) 0.0
0x89: Call2 0x676

0x8a: Pop(3)
0x8b: PushEmpty(object)
0x8c: Stack[-1] = Stack[-2]
0x8d: Call2 0x90

0x8e: Pop(1)
0x8f: Return(); Pop(0)

0x90: PushEmpty()
0x91: EventDisable(0)
0x92: PushEmpty(object)
0x93: Stack[-1] = Stack[-2]
0x94: Call2 0xa9

0x95: Pop(1)
0x96: Push((int) 50)
0x97: Push((int) 40)
0x98: @ SetRTEnvelope(Stack[-2], Stack[-1])
0x99: Pop(2)
0x9a: EventEnable(0)
0x9b: @ Hold()
0x9c: Pop(0)
0x9d: GOTO 0x9b

0x9e: Return(); Pop(0)

0x9f: PushEmpty(bool, bool)
0xa0: @ IsOverrideActive(Stack[-1])
0xa1: Pop(0)
0xa2: Pop(0); Push((bool) Stack[-1] == 0)
0xa3: IF (Stack[-1] == 0) GOTO 0xa8; Pop(1)

0xa4: PushEmpty(object)
0xa5: Stack[-1] = Stack[-4]
0xa6: Call2 0x719

0xa7: Pop(1)
0xa8: Return(); Pop(2)

0xa9: PushEmpty(cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector, cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector)
0xaa: Pop(0); Push((bool) Stack[-21] == 0)
0xab: IF (Stack[-1] == 0) GOTO 0xb1; Pop(1)

0xac: PushEmpty(string)
0xad: Stack[-1] = "fdie"
0xae: Call2 0x104

0xaf: Pop(1)
0xb0: GOTO 0x103

0xb1: @@ GetPosition(Stack[-10])
0xb2: Pop(0)
0xb3: @ GetPosition(Stack[-9])
0xb4: Pop(0)
0xb5: @ GetDirection(Stack[-8])
0xb6: Pop(0)
0xb7: Stack[-7] = Stack[-9] - Stack[-10]; Pop(0);
0xb8: Push(CvectorIndex(Stack[-7], 0))
0xb9: Push(CvectorIndex(Stack[-9], 0))
0xba: Pop(2); Push(Stack[-2] * Stack[-1]);
0xbb: Push(CvectorIndex(Stack[-8], 2))
0xbc: Push(CvectorIndex(Stack[-10], 2))
0xbd: Pop(2); Push(Stack[-2] * Stack[-1]);
0xbe: Pop(2); Push(Stack[-2] + Stack[-1]);
0xbf: Push((int) 0)
0xc0: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0xc1: IF (Stack[-1] == 0) GOTO 0xc4; Pop(1)

0xc2: Stack[-6] = "fdie"
0xc3: GOTO 0xc5

0xc4: Stack[-6] = "bdie"
0xc5: @ RemoveRTEnvelope()
0xc6: Pop(0)
0xc7: @ SetDeathState()
0xc8: Pop(0)
0xc9: @ Stop()
0xca: Pop(0)
0xcb: @ StopAsync()
0xcc: Pop(0)
0xcd: Stack[-5] = Stack[-21]
0xce: Push("GetScriptProperty")
0xcf: Push((int) 2)
0xd0: Pop(2); Push(IsFuncExist(Stack[-23], Stack[-2], Stack[-1]))
0xd1: IF (Stack[-1] == 0) GOTO 0xdd; Pop(1)

0xd2: Push("Owner")
0xd3: @@ HasScriptProperty(Stack[-5], Stack[-1])
0xd4: Pop(1)
0xd5: Push(Stack[-4])
0xd6: IF (Stack[-1] == 0) GOTO 0xdd; Pop(1)

0xd7: Push("Owner")
0xd8: @@ GetScriptProperty(Stack[-6], Stack[-1])
0xd9: Pop(1)
0xda: Pop(0); Push((bool) Stack[-5] == 0)
0xdb: IF (Stack[-1] == 0) GOTO 0xdd; Pop(1)

0xdc: Stack[-5] = Stack[-21]
0xdd: Push("@GetEyesHeight")
0xde: Push((int) 1)
0xdf: Pop(2); Push(IsFuncExist(Stack[-7], Stack[-2], Stack[-1]))
0xe0: IF (Stack[-1] == 0) GOTO 0xec; Pop(1)

0xe1: @@ GetEyesHeight(Stack[-2])
0xe2: Pop(0)
0xe3: Stack[-1] = CVector(0.0, 0.0, 0.0)
0xe4: Push(CvectorIndex(Stack[-1], 1))
0xe5: Stack[-1] = Stack[-3]
0xe6: CvectorIndex(Stack[-2], 1) = Stack[-1];
0xe7: Push("head")
0xe8: @ LookAsync(Stack[-22], Stack[-1], Stack[-2])
0xe9: Pop(1)
0xea: Stack[-3] = (bool) 1
0xeb: GOTO 0xed

0xec: Stack[-3] = (bool) 0
0xed: PushEmpty(string)
0xee: Stack[-1] = Stack[-7]
0xef: Call2 0x62b

0xf0: Pop(1)
0xf1: Push("all")
0xf2: @ PlayAnimation(Stack[-1], Stack[-7])
0xf3: Pop(1)
0xf4: @ WaitForAnimEnd()
0xf5: Pop(0)
0xf6: Push(Stack[-3])
0xf7: IF (Stack[-1] == 0) GOTO 0xfd; Pop(1)

0xf8: @ StopAsync()
0xf9: Pop(0)
0xfa: Push("head")
0xfb: @ UnlookAsync(Stack[-1])
0xfc: Pop(1)
0xfd: Push("all")
0xfe: @ LockAnimationEnd(Stack[-1], Stack[-7])
0xff: Pop(1)
0x100: @ RemoveEnvelope()
0x101: Pop(0)
0x102: Stack[-5] = 0
0x103: Return(); Pop(20)

0x104: PushEmpty()
0x105: @ RemoveRTEnvelope()
0x106: Pop(0)
0x107: @ SetDeathState()
0x108: Pop(0)
0x109: @ Stop()
0x10a: Pop(0)
0x10b: @ StopAsync()
0x10c: Pop(0)
0x10d: @ StopSecondaryAnimation()
0x10e: Pop(0)
0x10f: PushEmpty(string)
0x110: Stack[-1] = Stack[-2]
0x111: Call2 0x62b

0x112: Pop(1)
0x113: Push("all")
0x114: @ PlayAnimation(Stack[-1], Stack[-2])
0x115: Pop(1)
0x116: @ WaitForAnimEnd()
0x117: Pop(0)
0x118: Push("all")
0x119: @ LockAnimationEnd(Stack[-1], Stack[-2])
0x11a: Pop(1)
0x11b: @ RemoveEnvelope()
0x11c: Pop(0)
0x11d: Return(); Pop(0)

0x11e: PushEmpty()
0x11f: Return(); Pop(0)

0x120: PushEmpty()
0x121: Return(); Pop(0)

0x122: PushEmpty()
0x123: Return(); Pop(0)

0x124: PushEmpty()
0x125: PushEmpty(object, bool, float)
0x126: Stack[-3] = Stack[-4]
0x127: Stack[-2] = (bool) 1
0x128: Stack[-1] = (float) 180.0
0x129: Call2 0x136

0x12a: Pop(3)
0x12b: Push((int) 1)
0x12c: @ Sleep(Stack[-1])
0x12d: Pop(1)
0x12e: GOTO 0x125

0x12f: Return(); Pop(0)

0x130: PushEmpty()
0x131: Stack[-3] = (float) 0.03
0x132: Return(); Pop(0)

0x133: PushEmpty()
0x134: Stack[-3] = (int) 0
0x135: Return(); Pop(0)

0x136: PushEmpty(float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float, float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float)
0x137: PushEmpty()
0x138: Call2 0x21b

0x139: Pop(0)
0x13a: Stack[5 + Tasks[-1].StackPointer] = (int)0
0x13b: Push("@GetAttackDistance")
0x13c: Push((int) 1)
0x13d: Pop(2); Push(IsFuncExist(Stack[-27], Stack[-2], Stack[-1]))
0x13e: IF (Stack[-1] == 0) GOTO 0x144; Pop(1)

0x13f: @@ GetAttackDistance(Stack[-11])
0x140: Pop(0)
0x141: Push((int) 50)
0x142: Stack[-12] = Stack[-12] + Stack[-1]; Pop(1);
0x143: GOTO 0x145

0x144: Stack[-11] = Stack[-23]
0x145: Push((int) 150)
0x146: Pop(1); Push((bool) Stack[-12] >= Stack[-1])
0x147: IF (Stack[-1] == 0) GOTO 0x149; Pop(1)

0x148: Stack[-11] = (int) 150
0x149: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x14a: Stack[0 + Tasks[-1].StackPointer] = Stack[-25]
0x14b: @ IsPlayerActor(Stack[-0], Stack[-8])
0x14c: Pop(0)
0x14d: Push(Stack[-8])
0x14e: IF (Stack[-1] == 0) GOTO 0x157; Pop(1)

0x14f: Push("attack")
0x150: @ PlayGlobalMusic(Stack[-1])
0x151: Pop(1)
0x152: PushEmpty(object)
0x153: Call2 0x654

0x154: Pop(0)
0x155: @ SendPlayerEnemy(Stack[-26], Stack[-1])
0x156: Pop(1)
0x157: Push(Stack[-24])
0x158: IF (Stack[-1] == 0) GOTO 0x15b; Pop(1)

0x159: Stack[-7] = (bool) 0
0x15a: GOTO 0x15c

0x15b: Stack[-7] = (bool) 1
0x15c: Push((float)400.0)
0x15d: Stack[-7] = Stack[-1] + Stack[-12]; Pop(1);
0x15e: PushEmpty(bool)
0x15f: Stack[-1] = (bool) 0
0x160: PushEmpty(bool, object)
0x161: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x162: Call2 0x57a

0x163: Pop(1)
0x164: IF (Stack[-1] == 0) GOTO 0x168; Pop(1)

0x165: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x166: IF (Stack[-1] == 0) GOTO 0x168; Pop(1)

0x167: Stack[-1] = (bool) 1
0x168: IF (Stack[-1] == 0) GOTO 0x20a; Pop(1)

0x169: PushEmpty()
0x16a: Call2 0x3b8

0x16b: Pop(0)
0x16c: @@ GetPFPosition(Stack[-10])
0x16d: Pop(0)
0x16e: @ GetPFPosition(Stack[-9])
0x16f: Pop(0)
0x170: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0x171: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x172: Pop(0); Push(Stack[-6] * Stack[-6]);
0x173: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0x174: IF (Stack[-1] == 0) GOTO 0x184; Pop(1)

0x175: PushEmpty(bool, object, float, float, bool, bool)
0x176: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0x177: Stack[-4] = Stack[-17]
0x178: Stack[-3] = (float) 3000.0
0x179: Stack[-2] = (bool) 1
0x17a: Stack[-1] = (bool) 0
0x17b: Push(-6, 3); TaskCall(3)
0x17c: Call2 0x3cc

0x17d: Pop(-6, 3); TaskReturn
0x17e: Pop(5)
0x17f: Pop(1); Push((bool) Stack[-1] == 0)
0x180: IF (Stack[-1] == 0) GOTO 0x182; Pop(1)

0x181: GOTO 0x20a

0x182: Stack[-7] = (bool) 0
0x183: GOTO 0x209

0x184: Pop(0); Push(Stack[-23] * Stack[-23]);
0x185: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0x186: IF (Stack[-1] == 0) GOTO 0x201; Pop(1)

0x187: @@ GetPFPosition(Stack[-3])
0x188: Pop(0)
0x189: @ CanReachByPF(Stack[-2], Stack[-3])
0x18a: Pop(0)
0x18b: Pop(0); Push((bool) Stack[-2] == 0)
0x18c: IF (Stack[-1] == 0) GOTO 0x19c; Pop(1)

0x18d: PushEmpty(bool, object, float, float, bool, bool)
0x18e: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0x18f: Stack[-4] = Stack[-17]
0x190: Stack[-3] = (float) 3000.0
0x191: Stack[-2] = (bool) 1
0x192: Stack[-1] = (bool) 0
0x193: Push(-6, 3); TaskCall(3)
0x194: Call2 0x3cc

0x195: Pop(-6, 3); TaskReturn
0x196: Pop(5)
0x197: Pop(1); Push((bool) Stack[-1] == 0)
0x198: IF (Stack[-1] == 0) GOTO 0x19a; Pop(1)

0x199: GOTO 0x20a

0x19a: Stack[-7] = (bool) 0
0x19b: GOTO 0x15e

0x19c: Pop(0); Push((bool) Stack[-7] == 0)
0x19d: IF (Stack[-1] == 0) GOTO 0x1b5; Pop(1)

0x19e: PushEmpty(object)
0x19f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1a0: Call2 0x610

0x1a1: Pop(1)
0x1a2: Push("all")
0x1a3: Push("attack_on")
0x1a4: @ PlayAnimation(Stack[-2], Stack[-1])
0x1a5: Pop(2)
0x1a6: @ WaitForAnimEnd()
0x1a7: Pop(0)
0x1a8: PushEmpty()
0x1a9: Call2 0x3b8

0x1aa: Pop(0)
0x1ab: @ StopAsync()
0x1ac: Pop(0)
0x1ad: Stack[-7] = (bool) 1
0x1ae: PushEmpty(bool, object)
0x1af: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1b0: Call2 0x57a

0x1b1: Pop(1)
0x1b2: Pop(1); Push((bool) Stack[-1] == 0)
0x1b3: IF (Stack[-1] == 0) GOTO 0x1b5; Pop(1)

0x1b4: GOTO 0x20a

0x1b5: @ rand(Stack[-1])
0x1b6: Pop(0)
0x1b7: PushEmpty(bool)
0x1b8: Stack[-1] = (bool) 1
0x1b9: Push((float)0.25)
0x1ba: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x1bb: IF (Stack[-1] == 0) GOTO 0x1c1; Pop(1)

0x1bc: PushEmpty(bool)
0x1bd: Call2 0x38d

0x1be: Pop(0)
0x1bf: IF (Stack[-1] == 0) GOTO 0x1c1; Pop(1)

0x1c0: Stack[-1] = (bool) 0
0x1c1: IF (Stack[-1] == 0) GOTO 0x1d2; Pop(1)

0x1c2: @ Face(Stack[-0])
0x1c3: Pop(0)
0x1c4: PushEmpty()
0x1c5: Call2 0x3bf

0x1c6: Pop(0)
0x1c7: Push("all")
0x1c8: Push("attack_stay")
0x1c9: @ PlayAnimation(Stack[-2], Stack[-1])
0x1ca: Pop(2)
0x1cb: PushEmpty(bool, float)
0x1cc: Stack[-1] = Stack[-25]
0x1cd: Call2 0x309

0x1ce: Pop(2)
0x1cf: @ StopAsync()
0x1d0: Pop(0)
0x1d1: GOTO 0x200

0x1d2: @ Face(Stack[-0])
0x1d3: Pop(0)
0x1d4: Push("all")
0x1d5: Push("fjump")
0x1d6: @ PlayAnimation(Stack[-2], Stack[-1])
0x1d7: Pop(2)
0x1d8: @ WaitForAnimEnd()
0x1d9: Pop(0)
0x1da: PushEmpty()
0x1db: Call2 0x3b8

0x1dc: Pop(0)
0x1dd: Push(CVector(0.0, 0.0, 0.0))
0x1de: @ SetSpeed(Stack[-1])
0x1df: Pop(1)
0x1e0: @ Stop()
0x1e1: Pop(0)
0x1e2: @ StopAsync()
0x1e3: Pop(0)
0x1e4: PushEmpty(bool)
0x1e5: Call2 0x38d

0x1e6: Pop(0)
0x1e7: Pop(1); Push((bool) Stack[-1] == 0)
0x1e8: IF (Stack[-1] == 0) GOTO 0x200; Pop(1)

0x1e9: PushEmpty(bool, object)
0x1ea: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1eb: Call2 0x57a

0x1ec: Pop(1)
0x1ed: Pop(1); Push((bool) Stack[-1] == 0)
0x1ee: IF (Stack[-1] == 0) GOTO 0x1f0; Pop(1)

0x1ef: GOTO 0x20a

0x1f0: @@ GetPFPosition(Stack[-10])
0x1f1: Pop(0)
0x1f2: @ GetPFPosition(Stack[-9])
0x1f3: Pop(0)
0x1f4: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0x1f5: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x1f6: Pop(0); Push(Stack[-23] * Stack[-23]);
0x1f7: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x1f8: IF (Stack[-1] == 0) GOTO 0x200; Pop(1)

0x1f9: PushEmpty(bool, float)
0x1fa: Stack[-1] = Stack[-25]
0x1fb: Call2 0x265

0x1fc: Pop(1)
0x1fd: Pop(1); Push((bool) Stack[-1] == 0)
0x1fe: IF (Stack[-1] == 0) GOTO 0x200; Pop(1)

0x1ff: GOTO 0x20a

0x200: GOTO 0x209

0x201: PushEmpty(bool, float)
0x202: Stack[-1] = Stack[-25]
0x203: Call2 0x265

0x204: Pop(1)
0x205: Pop(1); Push((bool) Stack[-1] == 0)
0x206: IF (Stack[-1] == 0) GOTO 0x208; Pop(1)

0x207: GOTO 0x20a

0x208: Stack[-7] = (bool) 1
0x209: GOTO 0x15e

0x20a: @ WaitForAnimEnd()
0x20b: Pop(0)
0x20c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x20d: IF (Stack[-1] == 0) GOTO 0x20f; Pop(1)

0x20e: Return(); Pop(22)

0x20f: Push("all")
0x210: Push("attack_off")
0x211: @ PlayAnimation(Stack[-2], Stack[-1])
0x212: Pop(2)
0x213: @ WaitForAnimEnd()
0x214: Pop(0)
0x215: Push(Stack[-8])
0x216: IF (Stack[-1] == 0) GOTO 0x21a; Pop(1)

0x217: Push((float)2.0)
0x218: @ Sleep(Stack[-1])
0x219: Pop(1)
0x21a: Return(); Pop(22)

0x21b: PushEmpty(bool, bool, cvector, bool, bool, cvector)
0x21c: Stack[1 + Tasks[-1].StackPointer] = (int)0
0x21d: Push("all")
0x21e: Push("attack_begin")
0x21f: Push((int) 1)
0x220: Pop(1); Push(Stack[1 + StackPtr] + Stack[-1]);
0x221: Pop(2); Push(Stack[-2] + Stack[-1]);
0x222: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0x223: Pop(2)
0x224: Pop(0); Push((bool) Stack[-3] == 0)
0x225: IF (Stack[-1] == 0) GOTO 0x227; Pop(1)

0x226: GOTO 0x22a

0x227: Push((int) 1)
0x228: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x229: GOTO 0x21d

0x22a: Stack[2 + Tasks[-1].StackPointer] = (int)0
0x22b: Push("attack")
0x22c: Push((int) 1)
0x22d: Pop(1); Push(Stack[2 + StackPtr] + Stack[-1]);
0x22e: Pop(2); Push(Stack[-2] + Stack[-1]);
0x22f: @ IsExisting3DSound(Stack[-3], Stack[-1])
0x230: Pop(1)
0x231: Pop(0); Push((bool) Stack[-2] == 0)
0x232: IF (Stack[-1] == 0) GOTO 0x234; Pop(1)

0x233: GOTO 0x237

0x234: Push((int) 1)
0x235: Stack[2 + Tasks[-1].StackPointer] = Stack[2 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x236: GOTO 0x22b

0x237: Push("all")
0x238: Push("bjump")
0x239: @ GetAnimationOffset(Stack[-3], Stack[-2], Stack[-1])
0x23a: Pop(2)
0x23b: Push(CvectorIndex(Stack[-1], 2))
0x23c: Stack[4 + Tasks[-1].StackPointer] = -Stack[-1]; Pop(1);
0x23d: Return(); Pop(6)

0x23e: PushEmpty(object, float, float, object, float, float)
0x23f: Push((float)0.9)
0x240: Pop(1); Push(Stack[-9] * Stack[-1]);
0x241: @ GetVictim(Stack[-1], Stack[-4])
0x242: Pop(1)
0x243: @ ReportAttack(Stack[-0])
0x244: Pop(0)
0x245: Pop(0); Push((bool) Stack[-3] == Stack[0 + Tasks[-1].StackPointer])
0x246: IF (Stack[-1] == 0) GOTO 0x263; Pop(1)

0x247: PushEmpty(float, object, int)
0x248: Stack[-2] = Stack[-6]
0x249: Stack[-1] = Stack[-10]
0x24a: Call2 0x130

0x24b: Stack[-5] = Stack[-3]
0x24c: Pop(3)
0x24d: PushEmpty(float, object, float, int)
0x24e: Stack[-3] = Stack[-7]
0x24f: Stack[-2] = Stack[-6]
0x250: PushEmpty(int, object, int)
0x251: Stack[-2] = Stack[-10]
0x252: Stack[-1] = Stack[-14]
0x253: Call2 0x133

0x254: Stack[-4] = Stack[-3]
0x255: Pop(3)
0x256: Call2 0x508

0x257: Stack[-5] = Stack[-4]
0x258: Pop(4)
0x259: PushEmpty(int)
0x25a: Call2 0x3bd

0x25b: Pop(0)
0x25c: @ ReportHit(Stack[-0], Stack[-1], Stack[-2], Stack[-3])
0x25d: Pop(1)
0x25e: PushEmpty(object, float)
0x25f: Stack[-2] = Stack[-5]
0x260: Stack[-1] = Stack[-3]
0x261: Call2 0x3c4

0x262: Pop(2)
0x263: Return(); Pop(6)

0x264: Stack[-3] = 0
0x265: PushEmpty(int, bool, int, string, int, bool, int, string)
0x266: PushEmpty()
0x267: Call2 0x3b8

0x268: Pop(0)
0x269: @ irand(Stack[-4], Stack[-1])
0x26a: Pop(0)
0x26b: Push((int) 1)
0x26c: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x26d: @ Face(Stack[-0])
0x26e: Pop(0)
0x26f: Push((bool) 1)
0x270: @ SetAttackState(Stack[-1])
0x271: Pop(1)
0x272: PushEmpty()
0x273: Call2 0x6b6

0x274: Pop(0)
0x275: Push("all")
0x276: Push("attack_begin")
0x277: Pop(1); Push(Stack[-1] + Stack[-6]);
0x278: @ PlayAnimation(Stack[-2], Stack[-1])
0x279: Pop(2)
0x27a: @ WaitForAnimEnd()
0x27b: Pop(0)
0x27c: PushEmpty()
0x27d: Call2 0x398

0x27e: Pop(0)
0x27f: PushEmpty(bool, object)
0x280: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x281: Call2 0x57a

0x282: Pop(1)
0x283: Pop(1); Push((bool) Stack[-1] == 0)
0x284: IF (Stack[-1] == 0) GOTO 0x289; Pop(1)

0x285: @ StopAsync()
0x286: Pop(0)
0x287: Stack[-10] = (bool) 0
0x288: Return(); Pop(8)

0x289: PushEmpty(float, int)
0x28a: Stack[-2] = Stack[-11]
0x28b: Stack[-1] = Stack[-6]
0x28c: Call2 0x23e

0x28d: Pop(2)
0x28e: Push("all")
0x28f: Push("attack_middle")
0x290: Pop(1); Push(Stack[-1] + Stack[-6]);
0x291: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0x292: Pop(2)
0x293: Push(Stack[-3])
0x294: IF (Stack[-1] == 0) GOTO 0x2da; Pop(1)

0x295: PushEmpty()
0x296: Call2 0x6b6

0x297: Pop(0)
0x298: Push("all")
0x299: Push("attack_middle")
0x29a: Pop(1); Push(Stack[-1] + Stack[-6]);
0x29b: @ PlayAnimation(Stack[-2], Stack[-1])
0x29c: Pop(2)
0x29d: @ WaitForAnimEnd()
0x29e: Pop(0)
0x29f: PushEmpty()
0x2a0: Call2 0x3b8

0x2a1: Pop(0)
0x2a2: PushEmpty(bool, object)
0x2a3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2a4: Call2 0x57a

0x2a5: Pop(1)
0x2a6: Pop(1); Push((bool) Stack[-1] == 0)
0x2a7: IF (Stack[-1] == 0) GOTO 0x2ac; Pop(1)

0x2a8: @ StopAsync()
0x2a9: Pop(0)
0x2aa: Stack[-10] = (bool) 0
0x2ab: Return(); Pop(8)

0x2ac: PushEmpty(float, int)
0x2ad: Stack[-2] = Stack[-11]
0x2ae: Stack[-1] = Stack[-6]
0x2af: Call2 0x23e

0x2b0: Pop(2)
0x2b1: Stack[-2] = (int) 1
0x2b2: Push("attack_middle")
0x2b3: Pop(1); Push(Stack[-1] + Stack[-5]);
0x2b4: Push("_")
0x2b5: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2b6: Stack[-2] = Stack[-1] + Stack[-3]; Pop(1);
0x2b7: Push("all")
0x2b8: @ HasAnimation(Stack[-4], Stack[-1], Stack[-2])
0x2b9: Pop(1)
0x2ba: Pop(0); Push((bool) Stack[-3] == 0)
0x2bb: IF (Stack[-1] == 0) GOTO 0x2bd; Pop(1)

0x2bc: GOTO 0x2da

0x2bd: PushEmpty()
0x2be: Call2 0x6b6

0x2bf: Pop(0)
0x2c0: Push("all")
0x2c1: @ PlayAnimation(Stack[-1], Stack[-2])
0x2c2: Pop(1)
0x2c3: @ WaitForAnimEnd()
0x2c4: Pop(0)
0x2c5: PushEmpty()
0x2c6: Call2 0x3b8

0x2c7: Pop(0)
0x2c8: PushEmpty(bool, object)
0x2c9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2ca: Call2 0x57a

0x2cb: Pop(1)
0x2cc: Pop(1); Push((bool) Stack[-1] == 0)
0x2cd: IF (Stack[-1] == 0) GOTO 0x2d2; Pop(1)

0x2ce: @ StopAsync()
0x2cf: Pop(0)
0x2d0: Stack[-10] = (bool) 0
0x2d1: Return(); Pop(8)

0x2d2: PushEmpty(float, int)
0x2d3: Stack[-2] = Stack[-11]
0x2d4: Stack[-1] = Stack[-6]
0x2d5: Call2 0x23e

0x2d6: Pop(2)
0x2d7: Push((int) 1)
0x2d8: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x2d9: GOTO 0x2b2

0x2da: Push((bool) 0)
0x2db: @ SetAttackState(Stack[-1])
0x2dc: Pop(1)
0x2dd: Push("all")
0x2de: Push("attack_end")
0x2df: Pop(1); Push(Stack[-1] + Stack[-6]);
0x2e0: @ PlayAnimation(Stack[-2], Stack[-1])
0x2e1: Pop(2)
0x2e2: PushEmpty(bool)
0x2e3: Call2 0x3c6

0x2e4: Pop(0)
0x2e5: IF (Stack[-1] == 0) GOTO 0x2ec; Pop(1)

0x2e6: PushEmpty(bool, float)
0x2e7: Stack[-1] = (float) 0.75
0x2e8: Call2 0x2ee

0x2e9: Pop(2)
0x2ea: @ StopAsync()
0x2eb: Pop(0)
0x2ec: Stack[-10] = (bool) 1
0x2ed: Return(); Pop(8)

0x2ee: PushEmpty(float, bool, float, bool)
0x2ef: @ rand(Stack[-2])
0x2f0: Pop(0)
0x2f1: Pop(0); Push((bool) Stack[-2] < Stack[-5])
0x2f2: IF (Stack[-1] == 0) GOTO 0x302; Pop(1)

0x2f3: @ IsAnimationPlaying(Stack[-1])
0x2f4: Pop(0)
0x2f5: Pop(0); Push((bool) Stack[-1] == 0)
0x2f6: IF (Stack[-1] == 0) GOTO 0x2f8; Pop(1)

0x2f7: GOTO 0x301

0x2f8: PushEmpty(bool)
0x2f9: Call2 0x350

0x2fa: Pop(0)
0x2fb: IF (Stack[-1] == 0) GOTO 0x2fe; Pop(1)

0x2fc: Stack[-6] = (bool) 1
0x2fd: Return(); Pop(4)

0x2fe: @ sync()
0x2ff: Pop(0)
0x300: GOTO 0x2f3

0x301: GOTO 0x307

0x302: @ WaitForAnimEnd()
0x303: Pop(0)
0x304: PushEmpty()
0x305: Call2 0x3b8

0x306: Pop(0)
0x307: Stack[-6] = (bool) 0
0x308: Return(); Pop(4)

0x309: PushEmpty(bool, cvector, cvector, cvector, float, bool, cvector, cvector, cvector, float)
0x30a: @ IsAnimationPlaying(Stack[-5])
0x30b: Pop(0)
0x30c: Pop(0); Push((bool) Stack[-5] == 0)
0x30d: IF (Stack[-1] == 0) GOTO 0x30f; Pop(1)

0x30e: GOTO 0x32f

0x30f: PushEmpty(bool)
0x310: Call2 0x350

0x311: Pop(0)
0x312: IF (Stack[-1] == 0) GOTO 0x315; Pop(1)

0x313: Stack[-12] = (bool) 1
0x314: Return(); Pop(10)

0x315: PushEmpty(bool, object)
0x316: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x317: Call2 0x57a

0x318: Pop(1)
0x319: Pop(1); Push((bool) Stack[-1] == 0)
0x31a: IF (Stack[-1] == 0) GOTO 0x31d; Pop(1)

0x31b: Stack[-12] = (bool) 0
0x31c: Return(); Pop(10)

0x31d: @@ GetPFPosition(Stack[-4])
0x31e: Pop(0)
0x31f: @ GetPFPosition(Stack[-3])
0x320: Pop(0)
0x321: Stack[-2] = Stack[-4] - Stack[-3]; Pop(0);
0x322: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x323: Pop(0); Push(Stack[-11] * Stack[-11]);
0x324: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x325: IF (Stack[-1] == 0) GOTO 0x32c; Pop(1)

0x326: PushEmpty(bool, float)
0x327: Stack[-1] = Stack[-13]
0x328: Call2 0x265

0x329: Pop(2)
0x32a: Stack[-12] = (bool) 1
0x32b: Return(); Pop(10)

0x32c: @ sync()
0x32d: Pop(0)
0x32e: GOTO 0x30a

0x32f: PushEmpty()
0x330: Call2 0x3b8

0x331: Pop(0)
0x332: Stack[-12] = (bool) 0
0x333: Return(); Pop(10)

0x334: PushEmpty(cvector, cvector, cvector, float, float, cvector, cvector, cvector, float, float)
0x335: PushEmpty(bool, object)
0x336: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x337: Call2 0x57a

0x338: Pop(1)
0x339: Pop(1); Push((bool) Stack[-1] == 0)
0x33a: IF (Stack[-1] == 0) GOTO 0x33d; Pop(1)

0x33b: Stack[-11] = (bool) 0
0x33c: Return(); Pop(10)

0x33d: PushEmpty(bool)
0x33e: Call2 0x38d

0x33f: Pop(0)
0x340: IF (Stack[-1] == 0) GOTO 0x34e; Pop(1)

0x341: @@ GetPFPosition(Stack[-5])
0x342: Pop(0)
0x343: @ GetPFPosition(Stack[-4])
0x344: Pop(0)
0x345: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x346: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x347: @@ GetAttackDistance(Stack[-1])
0x348: Pop(0)
0x349: Push((int) 50)
0x34a: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x34b: Pop(0); Push(Stack[-1] * Stack[-1]);
0x34c: Stack[-12] = Stack[-3] <= Stack[-1]; Pop(1);
0x34d: Return(); Pop(10)

0x34e: Stack[-11] = (bool) 0
0x34f: Return(); Pop(10)

0x350: PushEmpty(bool)
0x351: Stack[-1] = (bool) 0
0x352: PushEmpty(bool)
0x353: Call2 0x334

0x354: Pop(0)
0x355: IF (Stack[-1] == 0) GOTO 0x35b; Pop(1)

0x356: PushEmpty(bool)
0x357: Call2 0x360

0x358: Pop(0)
0x359: IF (Stack[-1] == 0) GOTO 0x35b; Pop(1)

0x35a: Stack[-1] = (bool) 1
0x35b: IF (Stack[-1] == 0) GOTO 0x35e; Pop(1)

0x35c: Stack[-1] = (bool) 1
0x35d: Return(); Pop(0)

0x35e: Stack[-1] = (bool) 0
0x35f: Return(); Pop(0)

0x360: PushEmpty(object, bool, float, cvector, cvector, object, bool, float, cvector, cvector)
0x361: @ GetScene(Stack[-5])
0x362: Pop(0)
0x363: Stack[-4] = (bool) 0
0x364: PushEmpty(cvector, object)
0x365: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x366: Call2 0x4da

0x367: Pop(1)
0x368: Pop(1); Push(( -Stack[-1])
0x369: @ FindDirLength(Stack[-4], Stack[-1], Stack[-4])
0x36a: Pop(1)
0x36b: Pop(0); Push((bool) Stack[-3] < Stack[4 + Tasks[-1].StackPointer])
0x36c: IF (Stack[-1] == 0) GOTO 0x36e; Pop(1)

0x36d: GOTO 0x38a

0x36e: @ Face(Stack[-0])
0x36f: Pop(0)
0x370: Push("all")
0x371: Push("bjump")
0x372: @ PlayAnimation(Stack[-2], Stack[-1])
0x373: Pop(2)
0x374: @@ GetPFPosition(Stack[-2])
0x375: Pop(0)
0x376: @ GetPFPosition(Stack[-1])
0x377: Pop(0)
0x378: @ WaitForAnimEnd()
0x379: Pop(0)
0x37a: PushEmpty()
0x37b: Call2 0x3b8

0x37c: Pop(0)
0x37d: @ StopAsync()
0x37e: Pop(0)
0x37f: Push(CVector(0.0, 0.0, 0.0))
0x380: @ SetSpeed(Stack[-1])
0x381: Pop(1)
0x382: Stack[-4] = (bool) 1
0x383: PushEmpty(bool)
0x384: Call2 0x334

0x385: Pop(0)
0x386: Pop(1); Push((bool) Stack[-1] == 0)
0x387: IF (Stack[-1] == 0) GOTO 0x389; Pop(1)

0x388: GOTO 0x38a

0x389: GOTO 0x364

0x38a: Stack[-11] = Stack[-4]
0x38b: Return(); Pop(10)

0x38c: Stack[-5] = 0
0x38d: PushEmpty(bool, bool)
0x38e: Push("IsAttacking")
0x38f: Push((int) 1)
0x390: Pop(2); Push(IsFuncExist(Stack[0 + Tasks[-1].StackPointer], Stack[-2], Stack[-1]))
0x391: IF (Stack[-1] == 0) GOTO 0x396; Pop(1)

0x392: @@ IsAttacking(Stack[-1])
0x393: Pop(0)
0x394: Stack[-3] = Stack[-1]
0x395: Return(); Pop(2)

0x396: Stack[-3] = (bool) 0
0x397: Return(); Pop(2)

0x398: PushEmpty(float, int, float, int)
0x399: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x39a: IF (Stack[-1] == 0) GOTO 0x39c; Pop(1)

0x39b: Return(); Pop(4)

0x39c: Push( Stack[5 + Tasks[-1].StackPointer] )
0x39d: IF (Stack[-1] == 0) GOTO 0x3a4; Pop(1)

0x39e: Push((int) -1)
0x39f: Stack[5 + Tasks[-1].StackPointer] = Stack[5 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x3a0: Push((int) 0)
0x3a1: Pop(1); Push((bool) Stack[5 + Tasks[-1].StackPointer] > Stack[-1])
0x3a2: IF (Stack[-1] == 0) GOTO 0x3a4; Pop(1)

0x3a3: Return(); Pop(4)

0x3a4: @ rand(Stack[-2])
0x3a5: Pop(0)
0x3a6: PushEmpty(float)
0x3a7: Call2 0x3ca

0x3a8: Pop(0)
0x3a9: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x3aa: IF (Stack[-1] == 0) GOTO 0x3b7; Pop(1)

0x3ab: @ irand(Stack[-1], Stack[-2])
0x3ac: Pop(0)
0x3ad: Push((int) 1)
0x3ae: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x3af: Push("attack")
0x3b0: Pop(1); Push(Stack[-1] + Stack[-2]);
0x3b1: @ Speak(Stack[-1])
0x3b2: Pop(1)
0x3b3: PushEmpty(int)
0x3b4: Call2 0x3c8

0x3b5: Stack[5 + Tasks[-1].StackPointer] = Stack[-1]
0x3b6: Pop(1)
0x3b7: Return(); Pop(4)

0x3b8: PushEmpty(object)
0x3b9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3ba: Call2 0x6ad

0x3bb: Pop(1)
0x3bc: Return(); Pop(0)

0x3bd: Stack[-1] = (int) 0
0x3be: Return(); Pop(0)

0x3bf: PushEmpty(string)
0x3c0: Stack[-1] = "attack_stay"
0x3c1: Call2 0x62b

0x3c2: Pop(1)
0x3c3: Return(); Pop(0)

0x3c4: PushEmpty()
0x3c5: Return(); Pop(0)

0x3c6: Stack[-1] = (bool) 1
0x3c7: Return(); Pop(0)

0x3c8: Stack[-1] = (int) 1
0x3c9: Return(); Pop(0)

0x3ca: Stack[-1] = (float) 0.5
0x3cb: Return(); Pop(0)

0x3cc: PushEmpty(bool, bool, bool, bool)
0x3cd: PushEmpty(object)
0x3ce: Stack[-1] = Stack[-10]
0x3cf: Call2 0x6ad

0x3d0: Pop(1)
0x3d1: Push((int) 1)
0x3d2: Push((int) 5)
0x3d3: @ SetTimer(Stack[-2], Stack[-1])
0x3d4: Pop(2)
0x3d5: @ CanSee(Stack[-2], Stack[-9])
0x3d6: Pop(0)
0x3d7: Push(Stack[-2])
0x3d8: IF (Stack[-1] == 0) GOTO 0x3df; Pop(1)

0x3d9: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x3da: PushEmpty(object)
0x3db: Stack[-1] = Stack[-10]
0x3dc: Call2 0x620

0x3dd: Pop(1)
0x3de: GOTO 0x3e0

0x3df: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x3e0: PushEmpty(bool, object)
0x3e1: Stack[-1] = Stack[-11]
0x3e2: Call2 0x4e1

0x3e3: Pop(1)
0x3e4: IF (Stack[-1] == 0) GOTO 0x3ea; Pop(1)

0x3e5: PushEmpty(object)
0x3e6: Call2 0x654

0x3e7: Pop(0)
0x3e8: @ SendPlayerEnemy(Stack[-10], Stack[-1])
0x3e9: Pop(1)
0x3ea: PushEmpty(bool, object, float, float, bool, bool)
0x3eb: Stack[-5] = Stack[-15]
0x3ec: Stack[-4] = Stack[-14]
0x3ed: Stack[-3] = Stack[-13]
0x3ee: Stack[-2] = Stack[-12]
0x3ef: Stack[-1] = Stack[-11]
0x3f0: Call2 0x435

0x3f1: Stack[-7] = Stack[-6]
0x3f2: Pop(6)
0x3f3: Push( Stack[2 + Tasks[-1].StackPointer] )
0x3f4: IF (Stack[-1] == 0) GOTO 0x3f8; Pop(1)

0x3f5: Push("head")
0x3f6: @ UnlookAsync(Stack[-1])
0x3f7: Pop(1)
0x3f8: Push((int) 1)
0x3f9: @ KillTimer(Stack[-1])
0x3fa: Pop(1)
0x3fb: Stack[-10] = Stack[-1]
0x3fc: Return(); Pop(4)

0x3fd: PushEmpty()
0x3fe: Push((int) 1)
0x3ff: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x400: IF (Stack[-1] == 0) GOTO 0x406; Pop(1)

0x401: PushEmpty(object)
0x402: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x403: Call2 0x6ad

0x404: Pop(1)
0x405: GOTO 0x40a

0x406: PushEmpty(int)
0x407: Stack[-1] = Stack[-2]
0x408: Call2 0x49b

0x409: Pop(1)
0x40a: Return(); Pop(0)

0x40b: Push((int) 1)
0x40c: @ KillTimer(Stack[-1])
0x40d: Pop(1)
0x40e: Push( Stack[2 + Tasks[-1].StackPointer] )
0x40f: IF (Stack[-1] == 0) GOTO 0x414; Pop(1)

0x410: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x411: Push("head")
0x412: @ UnlookAsync(Stack[-1])
0x413: Pop(1)
0x414: PushEmpty()
0x415: Call2 0x4b1

0x416: Pop(0)
0x417: Return(); Pop(0)

0x418: PushEmpty()
0x419: PushEmpty(bool)
0x41a: Stack[-1] = (bool) 0
0x41b: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0x41c: IF (Stack[-1] == 0) GOTO 0x420; Pop(1)

0x41d: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x41e: IF (Stack[-1] == 0) GOTO 0x420; Pop(1)

0x41f: Stack[-1] = (bool) 1
0x420: IF (Stack[-1] == 0) GOTO 0x426; Pop(1)

0x421: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x422: PushEmpty(object)
0x423: Stack[-1] = Stack[-2]
0x424: Call2 0x620

0x425: Pop(1)
0x426: Return(); Pop(0)

0x427: PushEmpty()
0x428: PushEmpty(bool)
0x429: Stack[-1] = (bool) 0
0x42a: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0x42b: IF (Stack[-1] == 0) GOTO 0x42f; Pop(1)

0x42c: Push( Stack[2 + Tasks[-1].StackPointer] )
0x42d: IF (Stack[-1] == 0) GOTO 0x42f; Pop(1)

0x42e: Stack[-1] = (bool) 1
0x42f: IF (Stack[-1] == 0) GOTO 0x434; Pop(1)

0x430: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x431: Push("head")
0x432: @ UnlookAsync(Stack[-1])
0x433: Pop(1)
0x434: Return(); Pop(0)

0x435: PushEmpty(bool, bool, object, cvector, cvector, cvector, float, object, bool, bool, object, cvector, cvector, cvector, float, object)
0x436: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x437: Stack[1 + Tasks[-1].StackPointer] = Stack[-21]
0x438: Stack[-7] = Stack[-17]
0x439: PushEmpty(bool, object)
0x43a: Stack[-1] = Stack[-23]
0x43b: Call2 0x4c1

0x43c: Pop(1)
0x43d: Pop(1); Push((bool) Stack[-1] == 0)
0x43e: IF (Stack[-1] == 0) GOTO 0x441; Pop(1)

0x43f: Stack[-22] = (bool) 0
0x440: Return(); Pop(16)

0x441: @@ GetPosition(Stack[-5])
0x442: Pop(0)
0x443: @ GetPosition(Stack[-4])
0x444: Pop(0)
0x445: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x446: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x447: PushEmpty(bool)
0x448: Stack[-1] = (bool) 0
0x449: Push((int) 0)
0x44a: Pop(1); Push((bool) Stack[-21] > Stack[-1])
0x44b: IF (Stack[-1] == 0) GOTO 0x450; Pop(1)

0x44c: Pop(0); Push(Stack[-20] * Stack[-20]);
0x44d: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x44e: IF (Stack[-1] == 0) GOTO 0x450; Pop(1)

0x44f: Stack[-1] = (bool) 1
0x450: IF (Stack[-1] == 0) GOTO 0x455; Pop(1)

0x451: @ Stop()
0x452: Pop(0)
0x453: Stack[-22] = (bool) 0
0x454: Return(); Pop(16)

0x455: Pop(0); Push(Stack[-20] * Stack[-20]);
0x456: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x457: IF (Stack[-1] == 0) GOTO 0x493; Pop(1)

0x458: @@ GetPFPosition(Stack[-5])
0x459: Pop(0)
0x45a: @ FindPathTo(Stack[-1], Stack[-5])
0x45b: Pop(0)
0x45c: Pop(0); Push(( Stack[-1] != 0 )
0x45d: IF (Stack[-1] == 0) GOTO 0x460; Pop(1)

0x45e: Stack[-6] = Stack[-1]
0x45f: Stack[-1] = 0
0x460: Pop(0); Push(( Stack[-6] != 0 )
0x461: IF (Stack[-1] == 0) GOTO 0x481; Pop(1)

0x462: Push(Stack[-7])
0x463: IF (Stack[-1] == 0) GOTO 0x46a; Pop(1)

0x464: Stack[-7] = (bool) 0
0x465: @ RotatePath(Stack[-6], Stack[-8])
0x466: Pop(0)
0x467: Pop(0); Push((bool) Stack[-8] == 0)
0x468: IF (Stack[-1] == 0) GOTO 0x46a; Pop(1)

0x469: GOTO 0x499

0x46a: Push((int) 0)
0x46b: Push((float)0.3)
0x46c: @ SetTimer(Stack[-2], Stack[-1])
0x46d: Pop(2)
0x46e: PushEmpty(string)
0x46f: Call2 0x4c8

0x470: Pop(0)
0x471: PushEmpty(string)
0x472: Call2 0x4ca

0x473: Pop(0)
0x474: @ FollowPath(Stack[-8], Stack[-20], Stack[-10], Stack[-2], Stack[-1])
0x475: Pop(2)
0x476: Pop(0); Push((bool) Stack[-8] == 0)
0x477: IF (Stack[-1] == 0) GOTO 0x47f; Pop(1)

0x478: Push( Stack[0 + Tasks[-1].StackPointer] )
0x479: IF (Stack[-1] == 0) GOTO 0x47d; Pop(1)

0x47a: Stack[-6] = 0
0x47b: GOTO 0x499

0x47c: GOTO 0x47e

0x47d: GOTO 0x498

0x47e: GOTO 0x480

0x47f: Stack[-6] = 0
0x480: GOTO 0x491

0x481: Push((int) 0)
0x482: @ KillTimer(Stack[-1])
0x483: Pop(1)
0x484: Push((float)0.5)
0x485: @ Sleep(Stack[-1], Stack[-9])
0x486: Pop(1)
0x487: Pop(0); Push((bool) Stack[-8] == 0)
0x488: IF (Stack[-1] == 0) GOTO 0x48d; Pop(1)

0x489: Push( Stack[0 + Tasks[-1].StackPointer] )
0x48a: IF (Stack[-1] == 0) GOTO 0x48d; Pop(1)

0x48b: Stack[-6] = 0
0x48c: GOTO 0x499

0x48d: Push((int) 0)
0x48e: Push((float)0.3)
0x48f: @ SetTimer(Stack[-2], Stack[-1])
0x490: Pop(2)
0x491: Stack[-1] = 0
0x492: GOTO 0x497

0x493: Push((int) 0)
0x494: @ KillTimer(Stack[-1])
0x495: Pop(1)
0x496: GOTO 0x499

0x497: Stack[-6] = 0
0x498: GOTO 0x439

0x499: Stack[-22] = !Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x49a: Return(); Pop(16)

0x49b: PushEmpty()
0x49c: Push((int) 0)
0x49d: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x49e: IF (Stack[-1] == 0) GOTO 0x4a0; Pop(1)

0x49f: Return(); Pop(0)

0x4a0: PushEmpty(bool, object)
0x4a1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4a2: Call2 0x4c1

0x4a3: Pop(1)
0x4a4: Pop(1); Push((bool) Stack[-1] == 0)
0x4a5: IF (Stack[-1] == 0) GOTO 0x4a7; Pop(1)

0x4a6: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x4a7: Push((int) 0)
0x4a8: @ KillTimer(Stack[-1])
0x4a9: Pop(1)
0x4aa: @ Stop()
0x4ab: Pop(0)
0x4ac: Return(); Pop(0)

0x4ad: PushEmpty()
0x4ae: @ RequestClearPath(Stack[-1])
0x4af: Pop(0)
0x4b0: Return(); Pop(0)

0x4b1: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x4b2: Push((int) 0)
0x4b3: @ KillTimer(Stack[-1])
0x4b4: Pop(1)
0x4b5: @ Stop()
0x4b6: Pop(0)
0x4b7: Return(); Pop(0)

0x4b8: PushEmpty()
0x4b9: PushEmpty()
0x4ba: Call2 0x40b

0x4bb: Pop(0)
0x4bc: PushEmpty(object)
0x4bd: Stack[-1] = Stack[-2]
0x4be: Call2 0x700

0x4bf: Pop(1)
0x4c0: Return(); Pop(0)

0x4c1: PushEmpty()
0x4c2: PushEmpty(bool, object)
0x4c3: Stack[-1] = Stack[-3]
0x4c4: Call2 0x57a

0x4c5: Stack[-4] = Stack[-2]
0x4c6: Pop(2)
0x4c7: Return(); Pop(0)

0x4c8: Stack[-1] = "walk"
0x4c9: Return(); Pop(0)

0x4ca: Stack[-1] = "run"
0x4cb: Return(); Pop(0)

0x4cc: PushEmpty()
0x4cd: Push((int) 2)
0x4ce: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4cf: IF (Stack[-1] == 0) GOTO 0x4d3; Pop(1)

0x4d0: Stack[-2] = "fire"
0x4d1: Return(); Pop(0)

0x4d2: GOTO 0x4d8

0x4d3: Push((int) 1)
0x4d4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4d5: IF (Stack[-1] == 0) GOTO 0x4d8; Pop(1)

0x4d6: Stack[-2] = "bullet"
0x4d7: Return(); Pop(0)

0x4d8: Stack[-2] = "phys"
0x4d9: Return(); Pop(0)

0x4da: PushEmpty(cvector, cvector, cvector, cvector)
0x4db: @ GetPosition(Stack[-2])
0x4dc: Pop(0)
0x4dd: @@ GetPosition(Stack[-1])
0x4de: Pop(0)
0x4df: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x4e0: Return(); Pop(4)

0x4e1: PushEmpty(bool, bool)
0x4e2: @ IsPlayerActor(Stack[-3], Stack[-1])
0x4e3: Pop(0)
0x4e4: Stack[-4] = Stack[-1]
0x4e5: Return(); Pop(2)

0x4e6: PushEmpty(bool, bool)
0x4e7: Push("HasProperty")
0x4e8: Push((int) 2)
0x4e9: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x4ea: Pop(1); Push((bool) Stack[-1] == 0)
0x4eb: IF (Stack[-1] == 0) GOTO 0x4ee; Pop(1)

0x4ec: Stack[-5] = (bool) 0
0x4ed: Return(); Pop(2)

0x4ee: @@ HasProperty(Stack[-3], Stack[-1])
0x4ef: Pop(0)
0x4f0: Stack[-5] = Stack[-1]
0x4f1: Return(); Pop(2)

0x4f2: PushEmpty(float, float)
0x4f3: PushEmpty(bool, object, string)
0x4f4: Stack[-2] = Stack[-10]
0x4f5: Stack[-1] = Stack[-9]
0x4f6: Call2 0x4e6

0x4f7: Pop(2)
0x4f8: Pop(1); Push((bool) Stack[-1] == 0)
0x4f9: IF (Stack[-1] == 0) GOTO 0x4fc; Pop(1)

0x4fa: Stack[-8] = (bool) 0
0x4fb: Return(); Pop(2)

0x4fc: @@ GetProperty(Stack[-6], Stack[-1])
0x4fd: Pop(0)
0x4fe: PushEmpty(float, float, float, float)
0x4ff: Stack[-3] = Stack[-5] + Stack[-9]; Pop(0);
0x500: Stack[-2] = Stack[-8]
0x501: Stack[-1] = Stack[-7]
0x502: Call2 0x66b

0x503: Pop(3)
0x504: @@ SetProperty(Stack[-7], Stack[-1])
0x505: Pop(1)
0x506: Stack[-8] = (bool) 1
0x507: Return(); Pop(2)

0x508: PushEmpty(int, string, int, float, float, float, int, string, int, float, float, float)
0x509: PushEmpty(bool, object, string)
0x50a: Stack[-2] = Stack[-18]
0x50b: Stack[-1] = "health"
0x50c: Call2 0x4e6

0x50d: Pop(2)
0x50e: Pop(1); Push((bool) Stack[-1] == 0)
0x50f: IF (Stack[-1] == 0) GOTO 0x512; Pop(1)

0x510: Stack[-16] = (float) 0.0
0x511: Return(); Pop(12)

0x512: PushEmpty(bool, object, string)
0x513: Stack[-2] = Stack[-18]
0x514: Stack[-1] = "armor"
0x515: Call2 0x4e6

0x516: Pop(2)
0x517: Pop(1); Push((bool) Stack[-1] == 0)
0x518: IF (Stack[-1] == 0) GOTO 0x51b; Pop(1)

0x519: Stack[-6] = (int) 0
0x51a: GOTO 0x51e

0x51b: Push("armor")
0x51c: @@ GetProperty(Stack[-1], Stack[-7])
0x51d: Pop(1)
0x51e: Push("armor_")
0x51f: PushEmpty(string, int)
0x520: Stack[-1] = Stack[-16]
0x521: Call2 0x4cc

0x522: Pop(1)
0x523: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x524: PushEmpty(bool, object, string)
0x525: Stack[-2] = Stack[-18]
0x526: Stack[-1] = Stack[-8]
0x527: Call2 0x4e6

0x528: Pop(2)
0x529: Pop(1); Push((bool) Stack[-1] == 0)
0x52a: IF (Stack[-1] == 0) GOTO 0x52d; Pop(1)

0x52b: Stack[-4] = (int) 0
0x52c: GOTO 0x52f

0x52d: @@ GetProperty(Stack[-5], Stack[-4])
0x52e: Pop(0)
0x52f: PushEmpty(float, float, float)
0x530: Pop(0); Push(Stack[-9] + Stack[-7]);
0x531: Push((float)100.0)
0x532: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0x533: Stack[-1] = (int) 1
0x534: Call2 0x664

0x535: Stack[-6] = Stack[-3]
0x536: Pop(3)
0x537: Push("health")
0x538: @@ GetProperty(Stack[-1], Stack[-3])
0x539: Pop(1)
0x53a: Push((int) 1)
0x53b: Pop(1); Push(Stack[-1] - Stack[-4]);
0x53c: Stack[-2] = Stack[-15] * Stack[-1]; Pop(1);
0x53d: Push("health")
0x53e: PushEmpty(float, float, float, float)
0x53f: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0x540: Stack[-2] = (int) 0
0x541: Stack[-1] = (int) 1
0x542: Call2 0x66b

0x543: Pop(3)
0x544: @@ SetProperty(Stack[-2], Stack[-1])
0x545: Pop(2)
0x546: PushEmpty(bool, object)
0x547: Stack[-1] = Stack[-17]
0x548: Call2 0x4e1

0x549: Pop(1)
0x54a: IF (Stack[-1] == 0) GOTO 0x54f; Pop(1)

0x54b: PushEmpty(float)
0x54c: Stack[-1] = -Stack[-2]; Pop(0);
0x54d: Call2 0x699

0x54e: Pop(1)
0x54f: Stack[-16] = Stack[-1]
0x550: Return(); Pop(12)

0x551: PushEmpty(bool, bool)
0x552: @@ IsDead(Stack[-1])
0x553: Pop(0)
0x554: Stack[-4] = Stack[-1]
0x555: Return(); Pop(2)

0x556: PushEmpty(object, object, object, object)
0x557: Pop(0); Push((bool) Stack[-5] == 0)
0x558: IF (Stack[-1] == 0) GOTO 0x55b; Pop(1)

0x559: Stack[-6] = (bool) 0
0x55a: Return(); Pop(4)

0x55b: PushEmpty(bool)
0x55c: Stack[-1] = (bool) 0
0x55d: Push("IsDead")
0x55e: Push((int) 1)
0x55f: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x560: IF (Stack[-1] == 0) GOTO 0x567; Pop(1)

0x561: PushEmpty(bool, object)
0x562: Stack[-1] = Stack[-8]
0x563: Call2 0x551

0x564: Pop(1)
0x565: IF (Stack[-1] == 0) GOTO 0x567; Pop(1)

0x566: Stack[-1] = (bool) 1
0x567: IF (Stack[-1] == 0) GOTO 0x56a; Pop(1)

0x568: Stack[-6] = (bool) 0
0x569: Return(); Pop(4)

0x56a: @ GetScene(Stack[-2])
0x56b: Pop(0)
0x56c: Pop(0); Push((bool) Stack[-2] == 0)
0x56d: IF (Stack[-1] == 0) GOTO 0x570; Pop(1)

0x56e: Stack[-6] = (bool) 0
0x56f: Return(); Pop(4)

0x570: @@ GetScene(Stack[-1])
0x571: Pop(0)
0x572: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x573: IF (Stack[-1] == 0) GOTO 0x576; Pop(1)

0x574: Stack[-6] = (bool) 0
0x575: Return(); Pop(4)

0x576: Stack[-6] = (bool) 1
0x577: Return(); Pop(4)

0x578: Stack[-1] = 0
0x579: Stack[-2] = 0
0x57a: PushEmpty(int, int)
0x57b: PushEmpty(bool, object)
0x57c: Stack[-1] = Stack[-5]
0x57d: Call2 0x556

0x57e: Pop(1)
0x57f: Pop(1); Push((bool) Stack[-1] == 0)
0x580: IF (Stack[-1] == 0) GOTO 0x583; Pop(1)

0x581: Stack[-4] = (bool) 0
0x582: Return(); Pop(2)

0x583: PushEmpty(bool, object, string)
0x584: Stack[-2] = Stack[-6]
0x585: Stack[-1] = "noaccess"
0x586: Call2 0x4e6

0x587: Pop(2)
0x588: Pop(1); Push((bool) Stack[-1] == 0)
0x589: IF (Stack[-1] == 0) GOTO 0x58c; Pop(1)

0x58a: Stack[-4] = (bool) 1
0x58b: Return(); Pop(2)

0x58c: Push("noaccess")
0x58d: @@ GetProperty(Stack[-1], Stack[-2])
0x58e: Pop(1)
0x58f: Push((int) 0)
0x590: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x591: Return(); Pop(2)

0x592: PushEmpty(bool, int, cvector, cvector, cvector, cvector, string, bool, int, cvector, cvector, cvector, cvector, string)
0x593: Pop(0); Push((bool) Stack[-15] == 0)
0x594: IF (Stack[-1] == 0) GOTO 0x596; Pop(1)

0x595: Return(); Pop(14)

0x596: @ IsDead(Stack[-7])
0x597: Pop(0)
0x598: Push(Stack[-7])
0x599: IF (Stack[-1] == 0) GOTO 0x59b; Pop(1)

0x59a: Return(); Pop(14)

0x59b: @ GetSecondaryAnimationType(Stack[-6])
0x59c: Pop(0)
0x59d: Push((int) 0)
0x59e: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x59f: IF (Stack[-1] == 0) GOTO 0x5a1; Pop(1)

0x5a0: Return(); Pop(14)

0x5a1: @@ GetPosition(Stack[-5])
0x5a2: Pop(0)
0x5a3: @ GetPosition(Stack[-4])
0x5a4: Pop(0)
0x5a5: @ GetDirection(Stack[-3])
0x5a6: Pop(0)
0x5a7: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0x5a8: Push(CvectorIndex(Stack[-2], 0))
0x5a9: Push(CvectorIndex(Stack[-4], 0))
0x5aa: Pop(2); Push(Stack[-2] * Stack[-1]);
0x5ab: Push(CvectorIndex(Stack[-3], 2))
0x5ac: Push(CvectorIndex(Stack[-5], 2))
0x5ad: Pop(2); Push(Stack[-2] * Stack[-1]);
0x5ae: Pop(2); Push(Stack[-2] + Stack[-1]);
0x5af: Push((int) 0)
0x5b0: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x5b1: IF (Stack[-1] == 0) GOTO 0x5b4; Pop(1)

0x5b2: Stack[-1] = "fhit"
0x5b3: GOTO 0x5b5

0x5b4: Stack[-1] = "bhit"
0x5b5: Push("hit_react")
0x5b6: Push("1")
0x5b7: Pop(1); Push(Stack[-3] + Stack[-1]);
0x5b8: Push("2")
0x5b9: Pop(1); Push(Stack[-4] + Stack[-1]);
0x5ba: Push((int) -10)
0x5bb: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x5bc: Pop(4)
0x5bd: Return(); Pop(14)

0x5be: PushEmpty(cvector, object, int, bool, cvector, cvector, int, int, cvector, cvector, object, int, bool, cvector, cvector, int, int, cvector)
0x5bf: PushEmpty(bool)
0x5c0: Stack[-1] = (bool) 0
0x5c1: PushEmpty(bool)
0x5c2: Stack[-1] = (bool) 0
0x5c3: Push(Stack[-23])
0x5c4: IF (Stack[-1] == 0) GOTO 0x5c9; Pop(1)

0x5c5: Push((int) 4)
0x5c6: Pop(1); Push((bool) Stack[-23] != Stack[-1])
0x5c7: IF (Stack[-1] == 0) GOTO 0x5c9; Pop(1)

0x5c8: Stack[-1] = (bool) 1
0x5c9: IF (Stack[-1] == 0) GOTO 0x5ce; Pop(1)

0x5ca: Push((int) 5)
0x5cb: Pop(1); Push((bool) Stack[-22] != Stack[-1])
0x5cc: IF (Stack[-1] == 0) GOTO 0x5ce; Pop(1)

0x5cd: Stack[-1] = (bool) 1
0x5ce: IF (Stack[-1] == 0) GOTO 0x5fd; Pop(1)

0x5cf: PushEmpty(cvector, cvector)
0x5d0: PushEmpty(cvector, object)
0x5d1: Stack[-1] = Stack[-25]
0x5d2: Call2 0x4da

0x5d3: Stack[-3] = Stack[-2]
0x5d4: Pop(2)
0x5d5: Call2 0x65a

0x5d6: Stack[-11] = Stack[-2]
0x5d7: Pop(2)
0x5d8: @ CreateVectorVector(Stack[-8])
0x5d9: Pop(0)
0x5da: Stack[-7] = (int) 1
0x5db: Push("hit")
0x5dc: Pop(1); Push(Stack[-1] + Stack[-8]);
0x5dd: @ GetGeometryLocator(Stack[-1], Stack[-7], Stack[-6], Stack[-5])
0x5de: Pop(1)
0x5df: Pop(0); Push((bool) Stack[-6] == 0)
0x5e0: IF (Stack[-1] == 0) GOTO 0x5e2; Pop(1)

0x5e1: GOTO 0x5eb

0x5e2: Pop(0); Push(Stack[-4] | Stack[-9]);
0x5e3: Push((float)0.70711)
0x5e4: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x5e5: IF (Stack[-1] == 0) GOTO 0x5e8; Pop(1)

0x5e6: @@ add(Stack[-5])
0x5e7: Pop(0)
0x5e8: Push((int) 1)
0x5e9: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x5ea: GOTO 0x5db

0x5eb: @@ size(Stack[-3])
0x5ec: Pop(0)
0x5ed: Push(Stack[-3])
0x5ee: IF (Stack[-1] == 0) GOTO 0x5fc; Pop(1)

0x5ef: @ irand(Stack[-2], Stack[-3])
0x5f0: Pop(0)
0x5f1: @@ get(Stack[-1], Stack[-2])
0x5f2: Pop(0)
0x5f3: PushEmpty(object, int, float, cvector, cvector)
0x5f4: Stack[-5] = Stack[-26]
0x5f5: Stack[-4] = Stack[-25]
0x5f6: Stack[-3] = Stack[-24]
0x5f7: Stack[-2] = Stack[-6]
0x5f8: Stack[-1] = -Stack[-14]; Pop(0);
0x5f9: Call2 0x602

0x5fa: Pop(5)
0x5fb: Return(); Pop(18)

0x5fc: Stack[-8] = 0
0x5fd: PushEmpty(object)
0x5fe: Stack[-1] = Stack[-22]
0x5ff: Call2 0x592

0x600: Pop(1)
0x601: Return(); Pop(18)

0x602: PushEmpty(object, object, object, object)
0x603: @ GetScene(Stack[-2])
0x604: Pop(0)
0x605: Push("scripted")
0x606: Push("blood_dir.xml")
0x607: @ AddActorByType(Stack[-3], Stack[-2], Stack[-4], Stack[-8], Stack[-7], Stack[-1])
0x608: Pop(2)
0x609: PushEmpty(object)
0x60a: Stack[-1] = Stack[-10]
0x60b: Call2 0x592

0x60c: Pop(1)
0x60d: Return(); Pop(4)

0x60e: Stack[-1] = 0
0x60f: Stack[-2] = 0
0x610: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x611: @@ GetPosition(Stack[-3])
0x612: Pop(0)
0x613: @ GetPosition(Stack[-2])
0x614: Pop(0)
0x615: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0x616: Push(CvectorIndex(Stack[-1], 0))
0x617: Push(CvectorIndex(Stack[-2], 2))
0x618: @ RotateAsync(Stack[-2], Stack[-1])
0x619: Pop(2)
0x61a: Return(); Pop(6)

0x61b: PushEmpty(bool, bool)
0x61c: @ IsLoaded(Stack[-1])
0x61d: Pop(0)
0x61e: Stack[-3] = Stack[-1]
0x61f: Return(); Pop(2)

0x620: PushEmpty(float, cvector, float, cvector)
0x621: @@ GetEyesHeight(Stack[-2])
0x622: Pop(0)
0x623: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x624: Push(CvectorIndex(Stack[-1], 1))
0x625: Stack[-1] = Stack[-3]
0x626: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x627: Push("head")
0x628: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x629: Pop(1)
0x62a: Return(); Pop(4)

0x62b: PushEmpty(bool, int, bool, int, bool, float, cvector, cvector, bool, int, bool, int, bool, float, cvector, cvector)
0x62c: @ IsExisting3DSound(Stack[-8], Stack[-17])
0x62d: Pop(0)
0x62e: Pop(0); Push((bool) Stack[-8] == 0)
0x62f: IF (Stack[-1] == 0) GOTO 0x644; Pop(1)

0x630: Stack[-7] = (int) 0
0x631: Push((int) 1)
0x632: Pop(1); Push(Stack[-8] + Stack[-1]);
0x633: Pop(1); Push(Stack[-18] + Stack[-1]);
0x634: @ IsExisting3DSound(Stack[-7], Stack[-1])
0x635: Pop(1)
0x636: Pop(0); Push((bool) Stack[-6] == 0)
0x637: IF (Stack[-1] == 0) GOTO 0x639; Pop(1)

0x638: GOTO 0x63c

0x639: Push((int) 1)
0x63a: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x63b: GOTO 0x631

0x63c: Pop(0); Push((bool) Stack[-7] == 0)
0x63d: IF (Stack[-1] == 0) GOTO 0x63f; Pop(1)

0x63e: Return(); Pop(16)

0x63f: @ irand(Stack[-5], Stack[-7])
0x640: Pop(0)
0x641: Push((int) 1)
0x642: Pop(1); Push(Stack[-6] + Stack[-1]);
0x643: Stack[-18] = Stack[-18] + Stack[-1]; Pop(1);
0x644: @ Is3DSoundLoaded(Stack[-4], Stack[-17])
0x645: Pop(0)
0x646: Push(Stack[-4])
0x647: IF (Stack[-1] == 0) GOTO 0x653; Pop(1)

0x648: @ GetEyesHeight(Stack[-3])
0x649: Pop(0)
0x64a: @ GetDirection(Stack[-2])
0x64b: Pop(0)
0x64c: Push((int) 50)
0x64d: Stack[-2] = Stack[-3] * Stack[-1]; Pop(1);
0x64e: Push(CvectorIndex(Stack[-1], 1))
0x64f: Stack[-1] = Stack[-1] + Stack[-4]; Pop(0);
0x650: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x651: @ PlayGlobalSound(Stack[-17], Stack[-1])
0x652: Pop(0)
0x653: Return(); Pop(16)

0x654: PushEmpty(object, object)
0x655: @ self(Stack[-1])
0x656: Pop(0)
0x657: Stack[-3] = Stack[-1]
0x658: Return(); Pop(2)

0x659: Stack[-1] = 0
0x65a: PushEmpty(float, float)
0x65b: Pop(0); Push(Stack[-3] | Stack[-3]);
0x65c: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x65d: Push((float)0.0)
0x65e: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x65f: IF (Stack[-1] == 0) GOTO 0x662; Pop(1)

0x660: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x661: Return(); Pop(2)

0x662: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x663: Return(); Pop(2)

0x664: PushEmpty()
0x665: Pop(0); Push((bool) Stack[-2] < Stack[-1])
0x666: IF (Stack[-1] == 0) GOTO 0x669; Pop(1)

0x667: Stack[-3] = Stack[-2]
0x668: GOTO 0x66a

0x669: Stack[-3] = Stack[-1]
0x66a: Return(); Pop(0)

0x66b: PushEmpty()
0x66c: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x66d: IF (Stack[-1] == 0) GOTO 0x670; Pop(1)

0x66e: Stack[-4] = Stack[-2]
0x66f: Return(); Pop(0)

0x670: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x671: IF (Stack[-1] == 0) GOTO 0x674; Pop(1)

0x672: Stack[-4] = Stack[-1]
0x673: Return(); Pop(0)

0x674: Stack[-4] = Stack[-3]
0x675: Return(); Pop(0)

0x676: PushEmpty()
0x677: Pop(0); Push((bool) Stack[-2] == 0)
0x678: IF (Stack[-1] == 0) GOTO 0x67b; Pop(1)

0x679: Stack[-3] = (bool) 0
0x67a: Return(); Pop(0)

0x67b: Push((int) 0)
0x67c: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x67d: IF (Stack[-1] == 0) GOTO 0x682; Pop(1)

0x67e: Push((int) 8)
0x67f: @ SendWorldWndMessage(Stack[-1])
0x680: Pop(1)
0x681: GOTO 0x68b

0x682: Push((int) 0)
0x683: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x684: IF (Stack[-1] == 0) GOTO 0x689; Pop(1)

0x685: Push((int) 9)
0x686: @ SendWorldWndMessage(Stack[-1])
0x687: Pop(1)
0x688: GOTO 0x68b

0x689: Stack[-3] = (bool) 0
0x68a: Return(); Pop(0)

0x68b: PushEmpty(float)
0x68c: Stack[-1] = Stack[-2]
0x68d: Call2 0x6a3

0x68e: Pop(1)
0x68f: PushEmpty(bool, object, string, float, float, float)
0x690: Stack[-5] = Stack[-8]
0x691: Stack[-4] = "reputation"
0x692: Stack[-3] = Stack[-7]
0x693: Stack[-2] = (int) 0
0x694: Stack[-1] = (int) 1
0x695: Call2 0x4f2

0x696: Pop(6)
0x697: Stack[-3] = (bool) 1
0x698: Return(); Pop(0)

0x699: PushEmpty(object, object)
0x69a: @ CreateFloatVector(Stack[-1])
0x69b: Pop(0)
0x69c: @@ add(Stack[-3])
0x69d: Pop(0)
0x69e: Push((int) 15)
0x69f: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x6a0: Pop(1)
0x6a1: Return(); Pop(2)

0x6a2: Stack[-1] = 0
0x6a3: PushEmpty(object, object)
0x6a4: @ CreateFloatVector(Stack[-1])
0x6a5: Pop(0)
0x6a6: @@ add(Stack[-3])
0x6a7: Pop(0)
0x6a8: Push((int) 16)
0x6a9: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x6aa: Pop(1)
0x6ab: Return(); Pop(2)

0x6ac: Stack[-1] = 0
0x6ad: PushEmpty(bool, bool)
0x6ae: @ IsPlayerActor(Stack[-3], Stack[-1])
0x6af: Pop(0)
0x6b0: Push(Stack[-1])
0x6b1: IF (Stack[-1] == 0) GOTO 0x6b5; Pop(1)

0x6b2: Push("attack")
0x6b3: @ PlayGlobalMusic(Stack[-1])
0x6b4: Pop(1)
0x6b5: Return(); Pop(2)

0x6b6: PushEmpty(object, object)
0x6b7: @ GetScene(Stack[-1])
0x6b8: Pop(0)
0x6b9: Push("battle")
0x6ba: PushEmpty(object)
0x6bb: Call2 0x654

0x6bc: Pop(0)
0x6bd: @ BroadcastMessage(Stack[-2], Stack[-1], Stack[-3])
0x6be: Pop(2)
0x6bf: Return(); Pop(2)

0x6c0: Stack[-1] = 0
0x6c1: PushEmpty(string, string)
0x6c2: Stack[-1] = "idle"
0x6c3: Push(Stack[-3])
0x6c4: IF (Stack[-1] == 0) GOTO 0x6c6; Pop(1)

0x6c5: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x6c6: Stack[-4] = Stack[-1]
0x6c7: Return(); Pop(2)

0x6c8: PushEmpty(int, bool, int, bool)
0x6c9: Stack[-2] = (int) 0
0x6ca: Push("all")
0x6cb: PushEmpty(string, int)
0x6cc: Stack[-1] = Stack[-5]
0x6cd: Call2 0x6c1

0x6ce: Pop(1)
0x6cf: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x6d0: Pop(2)
0x6d1: Pop(0); Push((bool) Stack[-1] == 0)
0x6d2: IF (Stack[-1] == 0) GOTO 0x6d4; Pop(1)

0x6d3: GOTO 0x6d7

0x6d4: Push((int) 1)
0x6d5: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x6d6: GOTO 0x6ca

0x6d7: Stack[-5] = Stack[-2]
0x6d8: Return(); Pop(4)

0x6d9: PushEmpty()
0x6da: PushEmpty(object)
0x6db: Stack[-1] = Stack[-2]
0x6dc: Push(-1, 0); TaskCall(1)
0x6dd: Call2 0x80

0x6de: Pop(-1, 0); TaskReturn
0x6df: Pop(1)
0x6e0: Return(); Pop(0)

0x6e1: PushEmpty()
0x6e2: PushEmpty(object, int, float)
0x6e3: Stack[-3] = Stack[-7]
0x6e4: Stack[-2] = Stack[-6]
0x6e5: Stack[-1] = Stack[-5]
0x6e6: Call2 0x5be

0x6e7: Pop(3)
0x6e8: Return(); Pop(0)

0x6e9: PushEmpty()
0x6ea: PushEmpty(object, int, float, cvector, cvector)
0x6eb: Stack[-5] = Stack[-11]
0x6ec: Stack[-4] = Stack[-10]
0x6ed: Stack[-3] = Stack[-9]
0x6ee: Stack[-2] = Stack[-7]
0x6ef: Stack[-1] = Stack[-6]
0x6f0: Call2 0x602

0x6f1: Pop(5)
0x6f2: Return(); Pop(0)

0x6f3: PushEmpty(float, float)
0x6f4: Push("health")
0x6f5: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x6f6: IF (Stack[-1] == 0) GOTO 0x6ff; Pop(1)

0x6f7: Push("health")
0x6f8: @ GetProperty(Stack[-1], Stack[-2])
0x6f9: Pop(1)
0x6fa: Push((int) 0)
0x6fb: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x6fc: IF (Stack[-1] == 0) GOTO 0x6ff; Pop(1)

0x6fd: @ SignalDeath(Stack[-4])
0x6fe: Pop(0)
0x6ff: Return(); Pop(2)

0x700: PushEmpty()
0x701: PushEmpty(object)
0x702: Stack[-1] = Stack[-2]
0x703: Call2 0x6d9

0x704: Pop(1)
0x705: Return(); Pop(0)

0x706: PushEmpty()
0x707: PushEmpty(bool, object)
0x708: Stack[-1] = Stack[-3]
0x709: Call2 0x57a

0x70a: Stack[-4] = Stack[-2]
0x70b: Pop(2)
0x70c: Return(); Pop(0)

0x70d: PushEmpty()
0x70e: PushEmpty(object)
0x70f: Stack[-1] = Stack[-2]
0x710: Call2 0x726

0x711: Pop(1)
0x712: Return(); Pop(0)

0x713: PushEmpty(int, int)
0x714: Push("branch")
0x715: @ GetVariable(Stack[-1], Stack[-2])
0x716: Pop(1)
0x717: Stack[-3] = Stack[-1]
0x718: Return(); Pop(2)

0x719: PushEmpty()
0x71a: PushEmpty(int)
0x71b: Call2 0x713

0x71c: Pop(0)
0x71d: Push((int) 1)
0x71e: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x71f: IF (Stack[-1] == 0) GOTO 0x723; Pop(1)

0x720: @ WorkWithCorpse(Stack[-1])
0x721: Pop(0)
0x722: GOTO 0x725

0x723: @ Barter(Stack[-1])
0x724: Pop(0)
0x725: Return(); Pop(0)

0x726: PushEmpty(object, object)
0x727: @ GetScene(Stack[-1])
0x728: Pop(0)
0x729: PushEmpty(object)
0x72a: Call2 0x654

0x72b: Pop(0)
0x72c: @@ RemoveStationaryActor(Stack[-1])
0x72d: Pop(1)
0x72e: PushEmpty(object)
0x72f: Stack[-1] = Stack[-4]
0x730: Push(-1, 6); TaskCall(2)
0x731: Call2 0x124

0x732: Pop(-1, 6); TaskReturn
0x733: Pop(1)
0x734: Return(); Pop(2)

0x735: Stack[-1] = 0
