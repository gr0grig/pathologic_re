GlobalVarCount = 2
	G_VAR_0 object 
	G_VAR_1 bool 

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
	attack_on
	attack_stay
	attack_off
	Can't retreat, distance: 
	HasProperty
	HasProperty
	IsDead
	IsDead
	GetScene
	noaccess
	GetProperty
	scripted
	blood.xml
	fhit
	bhit
	hit_react
	1
	2
	health
	GenerateMoney: iMin > iMax
	Money
	lemon
	rusk
	hook
	syringe
	watch
	razor
	beads
	bracelet
	ear_ring
	gold_ring
	silver_ring
	flower
	idle
	ToDie

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
	irand (2 args)
	ResetAAS (0 args)
	Sleep (1 args)
	KillTimer (1 args)
	IsPlayerActor (2 args)
	SetTimer (2 args)
	Sleep (2 args)
	StopGroup0 (0 args)
	Face (1 args)
	FindLongestDir (6 args)
	Trace (1 args)
	Rotate (2 args)
	MovePoint (3 args)
	FindDirLength (3 args)
	GetScene (1 args)
	GetEyesHeight (1 args)
	AddActorByType (6 args)
	GetSecondaryAnimationType (1 args)
	FadeSecondaryAnimation (4 args)
	RotateAsync (2 args)
	IsLoaded (1 args)
	GetGameTime (1 args)
	GetProperty (2 args)
	SignalDeath (1 args)
	CanSee (2 args)
	GetInvItemByName (2 args)
	AddItem (4 args)
	IsOverrideActive (1 args)
	WorkWithCorpse (1 args)
	HasAnimation (3 args)
	StopAnimation (0 args)
	ReportReputationChange (3 args)
	SetProperty (2 args)
	SetRTEnvelope (2 args)

RunOp = 0x94
RunTask = 1

GlobalTasks: 
	GTASK_0  Params = 1
		EVENT_0 Op = 0xf Vars = (object)
		EVENT_6 Op = 0x1d Vars = ()
		EVENT_22 Op = 0x8e Vars = (object, int, float, float)
		EVENT_16 Op = 0x90 Vars = (object, string)
		EVENT_41 Op = 0x92 Vars = (object)
	GTASK_1 Vars = (bool, bool) Params = 0
		EVENT_0 Op = 0xbf Vars = (object)
		EVENT_17 Op = 0xd3 Vars = (object)
		EVENT_30 Op = 0xe7 Vars = (object, object)
		EVENT_40 Op = 0x101 Vars = (object)
		EVENT_42 Op = 0x115 Vars = (object, string)
		EVENT_1 Op = 0x12b Vars = (object)
		EVENT_3 Op = 0x134 Vars = (object)
		EVENT_7 Op = 0x13d Vars = (int)
		EVENT_6 Op = 0x149 Vars = ()
		EVENT_41 Op = 0x15d Vars = (object)
	GTASK_2 Vars = (object) Params = 1
		EVENT_0 Op = 0x1bf Vars = (object)
		EVENT_17 Op = 0x1d3 Vars = (object)
		EVENT_30 Op = 0x1e7 Vars = (object, object)
		EVENT_40 Op = 0x201 Vars = (object)
		EVENT_42 Op = 0x215 Vars = (object, string)
		EVENT_41 Op = 0x236 Vars = (object)
		EVENT_7 Op = 0x23f Vars = (int)
		EVENT_6 Op = 0x262 Vars = ()
	GTASK_3 Vars = (object, cvector, bool) Params = 1
		EVENT_6 Op = 0x285 Vars = ()
		EVENT_7 Op = 0x2ea Vars = (int)
		EVENT_41 Op = 0x325 Vars = (object)
	GTASK_4 Vars = (object, cvector, bool) Params = 1
		EVENT_7 Op = 0x39c Vars = (int)
		EVENT_41 Op = 0x3d7 Vars = (object)

Events:
EVENT_16 Op = 0x4f6 Vars = (object, string)
EVENT_41 Op = 0x503 Vars = (object)
EVENT_22 Op = 0x509 Vars = (object, int, float, float)

0x0: PushEmpty()
0x1: EventDisable(0)
0x2: PushEmpty(object)
0x3: Stack[-1] = Stack[-2]
0x4: Call 0x21

0x5: Pop(1)
0x6: PushEmpty(object)
0x7: Stack[-1] = Stack[-2]
0x8: Call 0x6a4

0x9: Pop(1)
0xa: EventEnable(0)
0xb: @ Hold()
0xc: Pop(0)
0xd: GOTO 0xb

0xe: Return(); Pop(0)

0xf: PushEmpty(int, int)
0x10: PushEmpty(int, object)
0x11: Stack[-1] = Stack[-5]
0x12: Call 0x546

0x13: Stack[-3] = Stack[-2]
0x14: Pop(2)
0x15: Push((int) 0)
0x16: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x17: IF (Stack[-1] == 0) GOTO 0x1c; Pop(1)

0x18: PushEmpty(object)
0x19: Stack[-1] = Stack[-4]
0x1a: Call 0x549

0x1b: Pop(1)
0x1c: Return(); Pop(2)

0x1d: PushEmpty()
0x1e: Call 0x54f

0x1f: Pop(0)
0x20: Return(); Pop(0)

0x21: PushEmpty(cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector, cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector)
0x22: Pop(0); Push((bool) Stack[-21] == 0)
0x23: IF (Stack[-1] == 0) GOTO 0x29; Pop(1)

0x24: PushEmpty(string)
0x25: Stack[-1] = "fdie"
0x26: Call 0x78

0x27: Pop(1)
0x28: GOTO 0x77

0x29: @@ GetPosition(Stack[-10])
0x2a: Pop(0)
0x2b: @ GetPosition(Stack[-9])
0x2c: Pop(0)
0x2d: @ GetDirection(Stack[-8])
0x2e: Pop(0)
0x2f: Stack[-7] = Stack[-9] - Stack[-10]; Pop(0);
0x30: Push(CvectorIndex(Stack[-7], 0))
0x31: Push(CvectorIndex(Stack[-9], 0))
0x32: Pop(2); Push(Stack[-2] * Stack[-1]);
0x33: Push(CvectorIndex(Stack[-8], 2))
0x34: Push(CvectorIndex(Stack[-10], 2))
0x35: Pop(2); Push(Stack[-2] * Stack[-1]);
0x36: Pop(2); Push(Stack[-2] + Stack[-1]);
0x37: Push((int) 0)
0x38: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x39: IF (Stack[-1] == 0) GOTO 0x3c; Pop(1)

0x3a: Stack[-6] = "fdie"
0x3b: GOTO 0x3d

0x3c: Stack[-6] = "bdie"
0x3d: @ RemoveRTEnvelope()
0x3e: Pop(0)
0x3f: @ SetDeathState()
0x40: Pop(0)
0x41: @ Stop()
0x42: Pop(0)
0x43: @ StopAsync()
0x44: Pop(0)
0x45: Stack[-5] = Stack[-21]
0x46: Push("GetScriptProperty")
0x47: Push((int) 2)
0x48: Pop(2); Push(IsFuncExist(Stack[-23], Stack[-2], Stack[-1]))
0x49: IF (Stack[-1] == 0) GOTO 0x55; Pop(1)

0x4a: Push("Owner")
0x4b: @@ HasScriptProperty(Stack[-5], Stack[-1])
0x4c: Pop(1)
0x4d: Push(Stack[-4])
0x4e: IF (Stack[-1] == 0) GOTO 0x55; Pop(1)

0x4f: Push("Owner")
0x50: @@ GetScriptProperty(Stack[-6], Stack[-1])
0x51: Pop(1)
0x52: Pop(0); Push((bool) Stack[-5] == 0)
0x53: IF (Stack[-1] == 0) GOTO 0x55; Pop(1)

0x54: Stack[-5] = Stack[-21]
0x55: Push("@GetEyesHeight")
0x56: Push((int) 1)
0x57: Pop(2); Push(IsFuncExist(Stack[-7], Stack[-2], Stack[-1]))
0x58: IF (Stack[-1] == 0) GOTO 0x64; Pop(1)

0x59: @@ GetEyesHeight(Stack[-2])
0x5a: Pop(0)
0x5b: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x5c: Push(CvectorIndex(Stack[-1], 1))
0x5d: Stack[-1] = Stack[-3]
0x5e: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x5f: Push("head")
0x60: @ LookAsync(Stack[-22], Stack[-1], Stack[-2])
0x61: Pop(1)
0x62: Stack[-3] = (bool) 1
0x63: GOTO 0x65

0x64: Stack[-3] = (bool) 0
0x65: Push("all")
0x66: @ PlayAnimation(Stack[-1], Stack[-7])
0x67: Pop(1)
0x68: @ WaitForAnimEnd()
0x69: Pop(0)
0x6a: Push(Stack[-3])
0x6b: IF (Stack[-1] == 0) GOTO 0x71; Pop(1)

0x6c: @ StopAsync()
0x6d: Pop(0)
0x6e: Push("head")
0x6f: @ UnlookAsync(Stack[-1])
0x70: Pop(1)
0x71: Push("all")
0x72: @ LockAnimationEnd(Stack[-1], Stack[-7])
0x73: Pop(1)
0x74: @ RemoveEnvelope()
0x75: Pop(0)
0x76: Stack[-5] = 0
0x77: Return(); Pop(20)

0x78: PushEmpty()
0x79: @ RemoveRTEnvelope()
0x7a: Pop(0)
0x7b: @ SetDeathState()
0x7c: Pop(0)
0x7d: @ Stop()
0x7e: Pop(0)
0x7f: @ StopAsync()
0x80: Pop(0)
0x81: @ StopSecondaryAnimation()
0x82: Pop(0)
0x83: Push("all")
0x84: @ PlayAnimation(Stack[-1], Stack[-2])
0x85: Pop(1)
0x86: @ WaitForAnimEnd()
0x87: Pop(0)
0x88: Push("all")
0x89: @ LockAnimationEnd(Stack[-1], Stack[-2])
0x8a: Pop(1)
0x8b: @ RemoveEnvelope()
0x8c: Pop(0)
0x8d: Return(); Pop(0)

0x8e: PushEmpty()
0x8f: Return(); Pop(0)

0x90: PushEmpty()
0x91: Return(); Pop(0)

0x92: PushEmpty()
0x93: Return(); Pop(0)

0x94: PushEmpty(int, int, int, int)
0x95: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x96: Push((bool) 1)
0x97: @ SensePlayerOnly(Stack[-1])
0x98: Pop(1)
0x99: PushEmpty()
0x9a: Call 0x641

0x9b: Pop(0)
0x9c: PushEmpty()
0x9d: Call 0xb6

0x9e: Pop(0)
0x9f: Push((int) 2)
0xa0: @ irand(Stack[-3], Stack[-1])
0xa1: Pop(1)
0xa2: Push((int) 0)
0xa3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa4: IF (Stack[-1] == 0) GOTO 0xad; Pop(1)

0xa5: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0xa6: PushEmpty()
0xa7: Call 0x654

0xa8: Pop(0)
0xa9: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0xaa: @ ResetAAS()
0xab: Pop(0)
0xac: GOTO 0xb4

0xad: Push((int) 4)
0xae: @ irand(Stack[-2], Stack[-1])
0xaf: Pop(1)
0xb0: Push((int) 1)
0xb1: Pop(1); Push(Stack[-2] + Stack[-1]);
0xb2: @ Sleep(Stack[-1])
0xb3: Pop(1)
0xb4: GOTO 0x9f

0xb5: Return(); Pop(4)

0xb6: PushEmpty(bool)
0xb7: Call 0x49f

0xb8: Pop(0)
0xb9: Pop(1); Push((bool) Stack[-1] == 0)
0xba: IF (Stack[-1] == 0) GOTO 0xbe; Pop(1)

0xbb: PushEmpty()
0xbc: Call 0x54f

0xbd: Pop(0)
0xbe: Return(); Pop(0)

0xbf: PushEmpty(int, int)
0xc0: PushEmpty(int, object)
0xc1: Stack[-1] = Stack[-5]
0xc2: Call 0x546

0xc3: Stack[-3] = Stack[-2]
0xc4: Pop(2)
0xc5: Push((int) 0)
0xc6: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xc7: IF (Stack[-1] == 0) GOTO 0xd2; Pop(1)

0xc8: Push((int) 1)
0xc9: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xca: IF (Stack[-1] == 0) GOTO 0xce; Pop(1)

0xcb: PushEmpty()
0xcc: Call 0x150

0xcd: Pop(0)
0xce: PushEmpty(object)
0xcf: Stack[-1] = Stack[-4]
0xd0: Call 0x549

0xd1: Pop(1)
0xd2: Return(); Pop(2)

0xd3: PushEmpty(int, int)
0xd4: PushEmpty(int, object)
0xd5: Stack[-1] = Stack[-5]
0xd6: Call 0x522

0xd7: Stack[-3] = Stack[-2]
0xd8: Pop(2)
0xd9: Push((int) 0)
0xda: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xdb: IF (Stack[-1] == 0) GOTO 0xe6; Pop(1)

0xdc: Push((int) 1)
0xdd: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xde: IF (Stack[-1] == 0) GOTO 0xe2; Pop(1)

0xdf: PushEmpty()
0xe0: Call 0x150

0xe1: Pop(0)
0xe2: PushEmpty(object)
0xe3: Stack[-1] = Stack[-4]
0xe4: Call 0x52c

0xe5: Pop(1)
0xe6: Return(); Pop(2)

0xe7: PushEmpty(int, int)
0xe8: PushEmpty(bool, object, object)
0xe9: Stack[-2] = Stack[-7]
0xea: Stack[-1] = Stack[-6]
0xeb: Call 0x674

0xec: Pop(2)
0xed: IF (Stack[-1] == 0) GOTO 0x100; Pop(1)

0xee: PushEmpty(int, object)
0xef: Stack[-1] = Stack[-6]
0xf0: Call 0x534

0xf1: Stack[-3] = Stack[-2]
0xf2: Pop(2)
0xf3: Push((int) 0)
0xf4: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xf5: IF (Stack[-1] == 0) GOTO 0x100; Pop(1)

0xf6: Push((int) 1)
0xf7: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xf8: IF (Stack[-1] == 0) GOTO 0xfc; Pop(1)

0xf9: PushEmpty()
0xfa: Call 0x150

0xfb: Pop(0)
0xfc: PushEmpty(object)
0xfd: Stack[-1] = Stack[-5]
0xfe: Call 0x53e

0xff: Pop(1)
0x100: Return(); Pop(2)

0x101: PushEmpty(int, int)
0x102: PushEmpty(int, object)
0x103: Stack[-1] = Stack[-5]
0x104: Call 0x550

0x105: Stack[-3] = Stack[-2]
0x106: Pop(2)
0x107: Push((int) 0)
0x108: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x109: IF (Stack[-1] == 0) GOTO 0x114; Pop(1)

0x10a: Push((int) 1)
0x10b: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x10c: IF (Stack[-1] == 0) GOTO 0x110; Pop(1)

0x10d: PushEmpty()
0x10e: Call 0x150

0x10f: Pop(0)
0x110: PushEmpty(object)
0x111: Stack[-1] = Stack[-4]
0x112: Call 0x55d

0x113: Pop(1)
0x114: Return(); Pop(2)

0x115: PushEmpty(int, int)
0x116: PushEmpty(int, string, object)
0x117: Stack[-2] = Stack[-6]
0x118: Stack[-1] = Stack[-7]
0x119: Call 0x563

0x11a: Stack[-4] = Stack[-3]
0x11b: Pop(3)
0x11c: Push((int) 0)
0x11d: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x11e: IF (Stack[-1] == 0) GOTO 0x12a; Pop(1)

0x11f: Push((int) 1)
0x120: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x121: IF (Stack[-1] == 0) GOTO 0x125; Pop(1)

0x122: PushEmpty()
0x123: Call 0x150

0x124: Pop(0)
0x125: PushEmpty(string, object)
0x126: Stack[-2] = Stack[-5]
0x127: Stack[-1] = Stack[-6]
0x128: Call 0x566

0x129: Pop(2)
0x12a: Return(); Pop(2)

0x12b: PushEmpty()
0x12c: Push( Stack[0 + Tasks[-1].StackPointer] )
0x12d: IF (Stack[-1] == 0) GOTO 0x12f; Pop(1)

0x12e: Return(); Pop(0)

0x12f: PushEmpty(object)
0x130: Stack[-1] = Stack[-2]
0x131: Call 0x166

0x132: Pop(1)
0x133: Return(); Pop(0)

0x134: PushEmpty()
0x135: Push( Stack[0 + Tasks[-1].StackPointer] )
0x136: IF (Stack[-1] == 0) GOTO 0x138; Pop(1)

0x137: Return(); Pop(0)

0x138: PushEmpty(object)
0x139: Stack[-1] = Stack[-2]
0x13a: Call 0x166

0x13b: Pop(1)
0x13c: Return(); Pop(0)

0x13d: PushEmpty()
0x13e: Push((int) 110)
0x13f: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x140: IF (Stack[-1] == 0) GOTO 0x142; Pop(1)

0x141: Return(); Pop(0)

0x142: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x143: Push((int) 110)
0x144: @ KillTimer(Stack[-1])
0x145: Pop(1)
0x146: @ ResetAAS()
0x147: Pop(0)
0x148: Return(); Pop(0)

0x149: PushEmpty()
0x14a: Call 0x150

0x14b: Pop(0)
0x14c: PushEmpty()
0x14d: Call 0x54f

0x14e: Pop(0)
0x14f: Return(); Pop(0)

0x150: Push((int) 110)
0x151: @ KillTimer(Stack[-1])
0x152: Pop(1)
0x153: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x154: Push( Stack[0 + Tasks[-1].StackPointer] )
0x155: IF (Stack[-1] == 0) GOTO 0x15a; Pop(1)

0x156: PushEmpty()
0x157: Call 0x66f

0x158: Pop(0)
0x159: GOTO 0x15c

0x15a: @ Stop()
0x15b: Pop(0)
0x15c: Return(); Pop(0)

0x15d: PushEmpty()
0x15e: PushEmpty()
0x15f: Call 0x150

0x160: Pop(0)
0x161: PushEmpty(object)
0x162: Stack[-1] = Stack[-2]
0x163: Call 0x503

0x164: Pop(1)
0x165: Return(); Pop(0)

0x166: PushEmpty(bool, int, bool, int)
0x167: Push( Stack[1 + Tasks[-1].StackPointer] )
0x168: IF (Stack[-1] == 0) GOTO 0x16a; Pop(1)

0x169: Return(); Pop(4)

0x16a: @ IsPlayerActor(Stack[-5], Stack[-2])
0x16b: Pop(0)
0x16c: Pop(0); Push((bool) Stack[-2] == 0)
0x16d: IF (Stack[-1] == 0) GOTO 0x16f; Pop(1)

0x16e: Return(); Pop(4)

0x16f: PushEmpty(int, object)
0x170: Stack[-1] = Stack[-7]
0x171: Call 0x511

0x172: Stack[-3] = Stack[-2]
0x173: Pop(2)
0x174: Push((int) 0)
0x175: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x176: IF (Stack[-1] == 0) GOTO 0x186; Pop(1)

0x177: Push((int) 1)
0x178: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x179: IF (Stack[-1] == 0) GOTO 0x17d; Pop(1)

0x17a: PushEmpty()
0x17b: Call 0x150

0x17c: Pop(0)
0x17d: PushEmpty(object)
0x17e: Stack[-1] = Stack[-6]
0x17f: Call 0x51a

0x180: Pop(1)
0x181: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x182: Push((int) 110)
0x183: Push((float)5.0)
0x184: @ SetTimer(Stack[-2], Stack[-1])
0x185: Pop(2)
0x186: Return(); Pop(4)

0x187: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x188: Stack[0 + Tasks[-1].StackPointer] = Stack[-7]
0x189: PushEmpty()
0x18a: Call 0x1ba

0x18b: Pop(0)
0x18c: @ GetDirection(Stack[-3])
0x18d: Pop(0)
0x18e: PushEmpty(cvector, object)
0x18f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x190: Call 0x3f5

0x191: Stack[-4] = Stack[-2]
0x192: Pop(2)
0x193: PushEmpty(float, cvector, cvector)
0x194: Stack[-2] = Stack[-6]
0x195: Stack[-1] = Stack[-5]
0x196: Call 0x4d4

0x197: Pop(2)
0x198: Push((int) 0)
0x199: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x19a: IF (Stack[-1] == 0) GOTO 0x1a1; Pop(1)

0x19b: PushEmpty(object)
0x19c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x19d: Call 0x494

0x19e: Pop(1)
0x19f: Stack[-1] = (bool) 1
0x1a0: GOTO 0x1a4

0x1a1: Push((float)1.5)
0x1a2: @ Sleep(Stack[-1], Stack[-2])
0x1a3: Pop(1)
0x1a4: Push(Stack[-1])
0x1a5: IF (Stack[-1] == 0) GOTO 0x1b4; Pop(1)

0x1a6: PushEmpty(object)
0x1a7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1a8: Call 0x494

0x1a9: Pop(1)
0x1aa: Push((int) 111)
0x1ab: Push((float)0.5)
0x1ac: @ SetTimer(Stack[-2], Stack[-1])
0x1ad: Pop(2)
0x1ae: Push((float)5.0)
0x1af: @ Sleep(Stack[-1])
0x1b0: Pop(1)
0x1b1: Push((int) 111)
0x1b2: @ KillTimer(Stack[-1])
0x1b3: Pop(1)
0x1b4: @ StopAsync()
0x1b5: Pop(0)
0x1b6: Push("head")
0x1b7: @ UnlookAsync(Stack[-1])
0x1b8: Pop(1)
0x1b9: Return(); Pop(6)

0x1ba: PushEmpty(object)
0x1bb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1bc: Call 0x4a4

0x1bd: Pop(1)
0x1be: Return(); Pop(0)

0x1bf: PushEmpty(int, int)
0x1c0: PushEmpty(int, object)
0x1c1: Stack[-1] = Stack[-5]
0x1c2: Call 0x546

0x1c3: Stack[-3] = Stack[-2]
0x1c4: Pop(2)
0x1c5: Push((int) 0)
0x1c6: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x1c7: IF (Stack[-1] == 0) GOTO 0x1d2; Pop(1)

0x1c8: Push((int) 1)
0x1c9: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x1ca: IF (Stack[-1] == 0) GOTO 0x1ce; Pop(1)

0x1cb: PushEmpty()
0x1cc: Call 0x22b

0x1cd: Pop(0)
0x1ce: PushEmpty(object)
0x1cf: Stack[-1] = Stack[-4]
0x1d0: Call 0x549

0x1d1: Pop(1)
0x1d2: Return(); Pop(2)

0x1d3: PushEmpty(int, int)
0x1d4: PushEmpty(int, object)
0x1d5: Stack[-1] = Stack[-5]
0x1d6: Call 0x522

0x1d7: Stack[-3] = Stack[-2]
0x1d8: Pop(2)
0x1d9: Push((int) 0)
0x1da: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x1db: IF (Stack[-1] == 0) GOTO 0x1e6; Pop(1)

0x1dc: Push((int) 1)
0x1dd: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x1de: IF (Stack[-1] == 0) GOTO 0x1e2; Pop(1)

0x1df: PushEmpty()
0x1e0: Call 0x22b

0x1e1: Pop(0)
0x1e2: PushEmpty(object)
0x1e3: Stack[-1] = Stack[-4]
0x1e4: Call 0x52c

0x1e5: Pop(1)
0x1e6: Return(); Pop(2)

0x1e7: PushEmpty(int, int)
0x1e8: PushEmpty(bool, object, object)
0x1e9: Stack[-2] = Stack[-7]
0x1ea: Stack[-1] = Stack[-6]
0x1eb: Call 0x674

0x1ec: Pop(2)
0x1ed: IF (Stack[-1] == 0) GOTO 0x200; Pop(1)

0x1ee: PushEmpty(int, object)
0x1ef: Stack[-1] = Stack[-6]
0x1f0: Call 0x534

0x1f1: Stack[-3] = Stack[-2]
0x1f2: Pop(2)
0x1f3: Push((int) 0)
0x1f4: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x1f5: IF (Stack[-1] == 0) GOTO 0x200; Pop(1)

0x1f6: Push((int) 1)
0x1f7: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x1f8: IF (Stack[-1] == 0) GOTO 0x1fc; Pop(1)

0x1f9: PushEmpty()
0x1fa: Call 0x22b

0x1fb: Pop(0)
0x1fc: PushEmpty(object)
0x1fd: Stack[-1] = Stack[-5]
0x1fe: Call 0x53e

0x1ff: Pop(1)
0x200: Return(); Pop(2)

0x201: PushEmpty(int, int)
0x202: PushEmpty(int, object)
0x203: Stack[-1] = Stack[-5]
0x204: Call 0x550

0x205: Stack[-3] = Stack[-2]
0x206: Pop(2)
0x207: Push((int) 0)
0x208: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x209: IF (Stack[-1] == 0) GOTO 0x214; Pop(1)

0x20a: Push((int) 1)
0x20b: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x20c: IF (Stack[-1] == 0) GOTO 0x210; Pop(1)

0x20d: PushEmpty()
0x20e: Call 0x22b

0x20f: Pop(0)
0x210: PushEmpty(object)
0x211: Stack[-1] = Stack[-4]
0x212: Call 0x55d

0x213: Pop(1)
0x214: Return(); Pop(2)

0x215: PushEmpty(int, int)
0x216: PushEmpty(int, string, object)
0x217: Stack[-2] = Stack[-6]
0x218: Stack[-1] = Stack[-7]
0x219: Call 0x563

0x21a: Stack[-4] = Stack[-3]
0x21b: Pop(3)
0x21c: Push((int) 0)
0x21d: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x21e: IF (Stack[-1] == 0) GOTO 0x22a; Pop(1)

0x21f: Push((int) 1)
0x220: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x221: IF (Stack[-1] == 0) GOTO 0x225; Pop(1)

0x222: PushEmpty()
0x223: Call 0x22b

0x224: Pop(0)
0x225: PushEmpty(string, object)
0x226: Stack[-2] = Stack[-5]
0x227: Stack[-1] = Stack[-6]
0x228: Call 0x566

0x229: Pop(2)
0x22a: Return(); Pop(2)

0x22b: @ StopGroup0()
0x22c: Pop(0)
0x22d: @ StopAsync()
0x22e: Pop(0)
0x22f: Push("head")
0x230: @ UnlookAsync(Stack[-1])
0x231: Pop(1)
0x232: Push((int) 111)
0x233: @ KillTimer(Stack[-1])
0x234: Pop(1)
0x235: Return(); Pop(0)

0x236: PushEmpty()
0x237: PushEmpty()
0x238: Call 0x22b

0x239: Pop(0)
0x23a: PushEmpty(object)
0x23b: Stack[-1] = Stack[-2]
0x23c: Call 0x503

0x23d: Pop(1)
0x23e: Return(); Pop(0)

0x23f: PushEmpty(cvector, cvector, cvector, cvector)
0x240: Push((int) 111)
0x241: Pop(1); Push((bool) Stack[-6] != Stack[-1])
0x242: IF (Stack[-1] == 0) GOTO 0x244; Pop(1)

0x243: Return(); Pop(4)

0x244: PushEmpty(bool, object)
0x245: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x246: Call 0x439

0x247: Pop(1)
0x248: Pop(1); Push((bool) Stack[-1] == 0)
0x249: IF (Stack[-1] == 0) GOTO 0x24e; Pop(1)

0x24a: PushEmpty()
0x24b: Call 0x22b

0x24c: Pop(0)
0x24d: Return(); Pop(4)

0x24e: @ GetDirection(Stack[-2])
0x24f: Pop(0)
0x250: PushEmpty(cvector, object)
0x251: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x252: Call 0x3f5

0x253: Stack[-3] = Stack[-2]
0x254: Pop(2)
0x255: PushEmpty(float, cvector, cvector)
0x256: Stack[-2] = Stack[-5]
0x257: Stack[-1] = Stack[-4]
0x258: Call 0x4d4

0x259: Pop(2)
0x25a: Push((float)0.5)
0x25b: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x25c: IF (Stack[-1] == 0) GOTO 0x261; Pop(1)

0x25d: PushEmpty(object)
0x25e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x25f: Call 0x494

0x260: Pop(1)
0x261: Return(); Pop(4)

0x262: PushEmpty()
0x263: Call 0x22b

0x264: Pop(0)
0x265: PushEmpty()
0x266: Call 0x54f

0x267: Pop(0)
0x268: Return(); Pop(0)

0x269: PushEmpty()
0x26a: @ Face(Stack[-1])
0x26b: Pop(0)
0x26c: Push("all")
0x26d: Push("attack_on")
0x26e: @ PlayAnimation(Stack[-2], Stack[-1])
0x26f: Pop(2)
0x270: @ WaitForAnimEnd()
0x271: Pop(0)
0x272: Push("all")
0x273: Push("attack_stay")
0x274: @ PlayAnimation(Stack[-2], Stack[-1])
0x275: Pop(2)
0x276: @ WaitForAnimEnd()
0x277: Pop(0)
0x278: Push("all")
0x279: Push("attack_off")
0x27a: @ PlayAnimation(Stack[-2], Stack[-1])
0x27b: Pop(2)
0x27c: @ WaitForAnimEnd()
0x27d: Pop(0)
0x27e: @ StopAsync()
0x27f: Pop(0)
0x280: PushEmpty(object)
0x281: Stack[-1] = Stack[-2]
0x282: Call 0x2aa

0x283: Pop(1)
0x284: Return(); Pop(0)

0x285: PushEmpty()
0x286: Call 0x31e

0x287: Pop(0)
0x288: PushEmpty()
0x289: Call 0x54f

0x28a: Pop(0)
0x28b: Return(); Pop(0)

0x28c: PushEmpty(cvector, cvector, cvector, cvector, cvector, float, cvector, cvector, cvector, cvector, cvector, float)
0x28d: @ GetPosition(Stack[-6])
0x28e: Pop(0)
0x28f: @@ GetPosition(Stack[-5])
0x290: Pop(0)
0x291: @ GetDirection(Stack[-4])
0x292: Pop(0)
0x293: PushEmpty(cvector, cvector)
0x294: PushEmpty(cvector, cvector)
0x295: Stack[-1] = Stack[-10] - Stack[-9]; Pop(0);
0x296: Call 0x4af

0x297: Pop(1)
0x298: Push((float)0.75)
0x299: Pop(1); Push(Stack[-8] * Stack[-1]);
0x29a: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x29b: Call 0x4af

0x29c: Stack[-5] = Stack[-2]
0x29d: Pop(2)
0x29e: Push((int) 32)
0x29f: Push((float)7000.0)
0x2a0: @ FindLongestDir(Stack[-4], Stack[-3], Stack[-5], Stack[-15], Stack[-2], Stack[-1])
0x2a1: Pop(2)
0x2a2: Push((int) 100)
0x2a3: Stack[-2] = Stack[-2] - Stack[-1]; Pop(1);
0x2a4: Push((int) 0)
0x2a5: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x2a6: IF (Stack[-1] == 0) GOTO 0x2a8; Pop(1)

0x2a7: Stack[-1] = (int) 0
0x2a8: Stack[-14] = Stack[-2] * Stack[-1]; Pop(0);
0x2a9: Return(); Pop(12)

0x2aa: PushEmpty(cvector, float, bool, cvector, float, cvector, float, bool, cvector, float)
0x2ab: Stack[0 + Tasks[-1].StackPointer] = Stack[-11]
0x2ac: PushEmpty(cvector, float)
0x2ad: Stack[-1] = (float) 1.74533
0x2ae: Call 0x28c

0x2af: Stack[-7] = Stack[-2]
0x2b0: Pop(2)
0x2b1: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x2b2: Push((float)10000.0)
0x2b3: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x2b4: IF (Stack[-1] == 0) GOTO 0x2be; Pop(1)

0x2b5: Push("Can't retreat, distance: ")
0x2b6: Pop(0); Push(Sqrt(Stack[-5]))
0x2b7: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2b8: @ Trace(Stack[-1])
0x2b9: Pop(1)
0x2ba: Push((float)0.5)
0x2bb: @ Sleep(Stack[-1])
0x2bc: Pop(1)
0x2bd: Return(); Pop(10)

0x2be: Push(CvectorIndex(Stack[-5], 0))
0x2bf: Push(CvectorIndex(Stack[-6], 2))
0x2c0: @ Rotate(Stack[-2], Stack[-1])
0x2c1: Pop(2)
0x2c2: PushEmpty(cvector)
0x2c3: Call 0x3f0

0x2c4: Pop(0)
0x2c5: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-6]; Pop(1);
0x2c6: Push((int) 120)
0x2c7: Push((float)0.5)
0x2c8: @ SetTimer(Stack[-2], Stack[-1])
0x2c9: Pop(2)
0x2ca: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x2cb: Push((int) 1)
0x2cc: @ MovePoint(Stack[-1], Stack[-1], Stack[-4])
0x2cd: Pop(1)
0x2ce: Push(Stack[-3])
0x2cf: IF (Stack[-1] == 0) GOTO 0x2e7; Pop(1)

0x2d0: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x2d1: IF (Stack[-1] == 0) GOTO 0x2d4; Pop(1)

0x2d2: GOTO 0x2e9

0x2d3: GOTO 0x2e7

0x2d4: PushEmpty(cvector, float)
0x2d5: Stack[-1] = (float) 2.61799
0x2d6: Call 0x28c

0x2d7: Stack[-4] = Stack[-2]
0x2d8: Pop(2)
0x2d9: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x2da: Push((float)10000.0)
0x2db: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x2dc: IF (Stack[-1] == 0) GOTO 0x2e6; Pop(1)

0x2dd: PushEmpty(cvector)
0x2de: Call 0x3f0

0x2df: Pop(0)
0x2e0: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x2e1: Push((int) 120)
0x2e2: Push((float)0.5)
0x2e3: @ SetTimer(Stack[-2], Stack[-1])
0x2e4: Pop(2)
0x2e5: GOTO 0x2e7

0x2e6: GOTO 0x2e9

0x2e7: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x2e8: IF (Stack[-1] == 0) GOTO 0x2cb; Pop(1)

0x2e9: Return(); Pop(10)

0x2ea: PushEmpty(cvector, float, cvector, float, cvector, float, cvector, float)
0x2eb: Push((int) 120)
0x2ec: Pop(1); Push((bool) Stack[-10] != Stack[-1])
0x2ed: IF (Stack[-1] == 0) GOTO 0x2ef; Pop(1)

0x2ee: Return(); Pop(8)

0x2ef: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x2f0: IF (Stack[-1] == 0) GOTO 0x2f8; Pop(1)

0x2f1: @ Stop()
0x2f2: Pop(0)
0x2f3: Push((int) 1)
0x2f4: @ KillTimer(Stack[-1])
0x2f5: Pop(1)
0x2f6: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x2f7: GOTO 0x31d

0x2f8: @ GetDirection(Stack[-4])
0x2f9: Pop(0)
0x2fa: Push((float)7000.0)
0x2fb: @ FindDirLength(Stack[-4], Stack[-5], Stack[-1])
0x2fc: Pop(1)
0x2fd: PushEmpty(cvector, float)
0x2fe: Stack[-1] = (float) 1.74533
0x2ff: Call 0x28c

0x300: Stack[-4] = Stack[-2]
0x301: Pop(2)
0x302: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x303: PushEmpty(bool)
0x304: Stack[-1] = (bool) 0
0x305: Push((float)10000.0)
0x306: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x307: IF (Stack[-1] == 0) GOTO 0x316; Pop(1)

0x308: PushEmpty(bool)
0x309: Stack[-1] = (bool) 1
0x30a: Pop(0); Push(Stack[-5] * Stack[-5]);
0x30b: Push((float)2.25)
0x30c: Pop(2); Push(Stack[-2] * Stack[-1]);
0x30d: Pop(1); Push((bool) Stack[-4] >= Stack[-1])
0x30e: IF (Stack[-1] == 0) GOTO 0x314; Pop(1)

0x30f: PushEmpty(bool)
0x310: Call 0x32e

0x311: Pop(0)
0x312: IF (Stack[-1] == 0) GOTO 0x314; Pop(1)

0x313: Stack[-1] = (bool) 0
0x314: IF (Stack[-1] == 0) GOTO 0x316; Pop(1)

0x315: Stack[-1] = (bool) 1
0x316: IF (Stack[-1] == 0) GOTO 0x31d; Pop(1)

0x317: @ Stop()
0x318: Pop(0)
0x319: PushEmpty(cvector)
0x31a: Call 0x3f0

0x31b: Pop(0)
0x31c: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x31d: Return(); Pop(8)

0x31e: @ Stop()
0x31f: Pop(0)
0x320: Push((int) 120)
0x321: @ KillTimer(Stack[-1])
0x322: Pop(1)
0x323: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x324: Return(); Pop(0)

0x325: PushEmpty()
0x326: PushEmpty()
0x327: Call 0x31e

0x328: Pop(0)
0x329: PushEmpty(object)
0x32a: Stack[-1] = Stack[-2]
0x32b: Call 0x503

0x32c: Pop(1)
0x32d: Return(); Pop(0)

0x32e: PushEmpty(cvector, cvector, cvector, cvector)
0x32f: @ GetDirection(Stack[-2])
0x330: Pop(0)
0x331: PushEmpty(cvector, object)
0x332: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x333: Call 0x3f5

0x334: Stack[-3] = Stack[-2]
0x335: Pop(2)
0x336: PushEmpty(float, cvector, cvector)
0x337: Stack[-2] = Stack[-5]
0x338: Stack[-1] = Stack[-4]
0x339: Call 0x4b9

0x33a: Pop(2)
0x33b: Push((float)-0.34202)
0x33c: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0x33d: Return(); Pop(4)

0x33e: PushEmpty(cvector, cvector, cvector, cvector, cvector, float, cvector, cvector, cvector, cvector, cvector, float)
0x33f: @ GetPosition(Stack[-6])
0x340: Pop(0)
0x341: @@ GetPosition(Stack[-5])
0x342: Pop(0)
0x343: @ GetDirection(Stack[-4])
0x344: Pop(0)
0x345: PushEmpty(cvector, cvector)
0x346: PushEmpty(cvector, cvector)
0x347: Stack[-1] = Stack[-10] - Stack[-9]; Pop(0);
0x348: Call 0x4af

0x349: Pop(1)
0x34a: Push((float)0.75)
0x34b: Pop(1); Push(Stack[-8] * Stack[-1]);
0x34c: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x34d: Call 0x4af

0x34e: Stack[-5] = Stack[-2]
0x34f: Pop(2)
0x350: Push((int) 32)
0x351: Push((float)7000.0)
0x352: @ FindLongestDir(Stack[-4], Stack[-3], Stack[-5], Stack[-15], Stack[-2], Stack[-1])
0x353: Pop(2)
0x354: Push((int) 100)
0x355: Stack[-2] = Stack[-2] - Stack[-1]; Pop(1);
0x356: Push((int) 0)
0x357: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x358: IF (Stack[-1] == 0) GOTO 0x35a; Pop(1)

0x359: Stack[-1] = (int) 0
0x35a: Stack[-14] = Stack[-2] * Stack[-1]; Pop(0);
0x35b: Return(); Pop(12)

0x35c: PushEmpty(cvector, float, bool, cvector, float, cvector, float, bool, cvector, float)
0x35d: Stack[0 + Tasks[-1].StackPointer] = Stack[-11]
0x35e: PushEmpty(cvector, float)
0x35f: Stack[-1] = (float) 1.74533
0x360: Call 0x33e

0x361: Stack[-7] = Stack[-2]
0x362: Pop(2)
0x363: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x364: Push((float)10000.0)
0x365: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x366: IF (Stack[-1] == 0) GOTO 0x370; Pop(1)

0x367: Push("Can't retreat, distance: ")
0x368: Pop(0); Push(Sqrt(Stack[-5]))
0x369: Pop(2); Push(Stack[-2] + Stack[-1]);
0x36a: @ Trace(Stack[-1])
0x36b: Pop(1)
0x36c: Push((float)0.5)
0x36d: @ Sleep(Stack[-1])
0x36e: Pop(1)
0x36f: Return(); Pop(10)

0x370: Push(CvectorIndex(Stack[-5], 0))
0x371: Push(CvectorIndex(Stack[-6], 2))
0x372: @ Rotate(Stack[-2], Stack[-1])
0x373: Pop(2)
0x374: PushEmpty(cvector)
0x375: Call 0x3f0

0x376: Pop(0)
0x377: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-6]; Pop(1);
0x378: Push((int) 120)
0x379: Push((float)0.5)
0x37a: @ SetTimer(Stack[-2], Stack[-1])
0x37b: Pop(2)
0x37c: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x37d: Push((int) 1)
0x37e: @ MovePoint(Stack[-1], Stack[-1], Stack[-4])
0x37f: Pop(1)
0x380: Push(Stack[-3])
0x381: IF (Stack[-1] == 0) GOTO 0x399; Pop(1)

0x382: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x383: IF (Stack[-1] == 0) GOTO 0x386; Pop(1)

0x384: GOTO 0x39b

0x385: GOTO 0x399

0x386: PushEmpty(cvector, float)
0x387: Stack[-1] = (float) 2.61799
0x388: Call 0x33e

0x389: Stack[-4] = Stack[-2]
0x38a: Pop(2)
0x38b: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x38c: Push((float)10000.0)
0x38d: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x38e: IF (Stack[-1] == 0) GOTO 0x398; Pop(1)

0x38f: PushEmpty(cvector)
0x390: Call 0x3f0

0x391: Pop(0)
0x392: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x393: Push((int) 120)
0x394: Push((float)0.5)
0x395: @ SetTimer(Stack[-2], Stack[-1])
0x396: Pop(2)
0x397: GOTO 0x399

0x398: GOTO 0x39b

0x399: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x39a: IF (Stack[-1] == 0) GOTO 0x37d; Pop(1)

0x39b: Return(); Pop(10)

0x39c: PushEmpty(cvector, float, cvector, float, cvector, float, cvector, float)
0x39d: Push((int) 120)
0x39e: Pop(1); Push((bool) Stack[-10] != Stack[-1])
0x39f: IF (Stack[-1] == 0) GOTO 0x3a1; Pop(1)

0x3a0: Return(); Pop(8)

0x3a1: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x3a2: IF (Stack[-1] == 0) GOTO 0x3aa; Pop(1)

0x3a3: @ Stop()
0x3a4: Pop(0)
0x3a5: Push((int) 1)
0x3a6: @ KillTimer(Stack[-1])
0x3a7: Pop(1)
0x3a8: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x3a9: GOTO 0x3cf

0x3aa: @ GetDirection(Stack[-4])
0x3ab: Pop(0)
0x3ac: Push((float)7000.0)
0x3ad: @ FindDirLength(Stack[-4], Stack[-5], Stack[-1])
0x3ae: Pop(1)
0x3af: PushEmpty(cvector, float)
0x3b0: Stack[-1] = (float) 1.74533
0x3b1: Call 0x33e

0x3b2: Stack[-4] = Stack[-2]
0x3b3: Pop(2)
0x3b4: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x3b5: PushEmpty(bool)
0x3b6: Stack[-1] = (bool) 0
0x3b7: Push((float)10000.0)
0x3b8: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x3b9: IF (Stack[-1] == 0) GOTO 0x3c8; Pop(1)

0x3ba: PushEmpty(bool)
0x3bb: Stack[-1] = (bool) 1
0x3bc: Pop(0); Push(Stack[-5] * Stack[-5]);
0x3bd: Push((float)2.25)
0x3be: Pop(2); Push(Stack[-2] * Stack[-1]);
0x3bf: Pop(1); Push((bool) Stack[-4] >= Stack[-1])
0x3c0: IF (Stack[-1] == 0) GOTO 0x3c6; Pop(1)

0x3c1: PushEmpty(bool)
0x3c2: Call 0x3e0

0x3c3: Pop(0)
0x3c4: IF (Stack[-1] == 0) GOTO 0x3c6; Pop(1)

0x3c5: Stack[-1] = (bool) 0
0x3c6: IF (Stack[-1] == 0) GOTO 0x3c8; Pop(1)

0x3c7: Stack[-1] = (bool) 1
0x3c8: IF (Stack[-1] == 0) GOTO 0x3cf; Pop(1)

0x3c9: @ Stop()
0x3ca: Pop(0)
0x3cb: PushEmpty(cvector)
0x3cc: Call 0x3f0

0x3cd: Pop(0)
0x3ce: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x3cf: Return(); Pop(8)

0x3d0: @ Stop()
0x3d1: Pop(0)
0x3d2: Push((int) 120)
0x3d3: @ KillTimer(Stack[-1])
0x3d4: Pop(1)
0x3d5: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x3d6: Return(); Pop(0)

0x3d7: PushEmpty()
0x3d8: PushEmpty()
0x3d9: Call 0x3d0

0x3da: Pop(0)
0x3db: PushEmpty(object)
0x3dc: Stack[-1] = Stack[-2]
0x3dd: Call 0x503

0x3de: Pop(1)
0x3df: Return(); Pop(0)

0x3e0: PushEmpty(cvector, cvector, cvector, cvector)
0x3e1: @ GetDirection(Stack[-2])
0x3e2: Pop(0)
0x3e3: PushEmpty(cvector, object)
0x3e4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3e5: Call 0x3f5

0x3e6: Stack[-3] = Stack[-2]
0x3e7: Pop(2)
0x3e8: PushEmpty(float, cvector, cvector)
0x3e9: Stack[-2] = Stack[-5]
0x3ea: Stack[-1] = Stack[-4]
0x3eb: Call 0x4b9

0x3ec: Pop(2)
0x3ed: Push((float)-0.34202)
0x3ee: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0x3ef: Return(); Pop(4)

0x3f0: PushEmpty(cvector, cvector)
0x3f1: @ GetPosition(Stack[-1])
0x3f2: Pop(0)
0x3f3: Stack[-3] = Stack[-1]
0x3f4: Return(); Pop(2)

0x3f5: PushEmpty(cvector, cvector, cvector, cvector)
0x3f6: @ GetPosition(Stack[-2])
0x3f7: Pop(0)
0x3f8: @@ GetPosition(Stack[-1])
0x3f9: Pop(0)
0x3fa: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x3fb: Return(); Pop(4)

0x3fc: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x3fd: @ GetPosition(Stack[-3])
0x3fe: Pop(0)
0x3ff: @@ GetPosition(Stack[-2])
0x400: Pop(0)
0x401: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x402: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x403: Return(); Pop(6)

0x404: PushEmpty(bool, bool)
0x405: Push("HasProperty")
0x406: Push((int) 2)
0x407: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x408: Pop(1); Push((bool) Stack[-1] == 0)
0x409: IF (Stack[-1] == 0) GOTO 0x40c; Pop(1)

0x40a: Stack[-5] = (bool) 0
0x40b: Return(); Pop(2)

0x40c: @@ HasProperty(Stack[-3], Stack[-1])
0x40d: Pop(0)
0x40e: Stack[-5] = Stack[-1]
0x40f: Return(); Pop(2)

0x410: PushEmpty(bool, bool)
0x411: @@ IsDead(Stack[-1])
0x412: Pop(0)
0x413: Stack[-4] = Stack[-1]
0x414: Return(); Pop(2)

0x415: PushEmpty(object, object, object, object)
0x416: Pop(0); Push((bool) Stack[-5] == 0)
0x417: IF (Stack[-1] == 0) GOTO 0x41a; Pop(1)

0x418: Stack[-6] = (bool) 0
0x419: Return(); Pop(4)

0x41a: PushEmpty(bool)
0x41b: Stack[-1] = (bool) 0
0x41c: Push("IsDead")
0x41d: Push((int) 1)
0x41e: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x41f: IF (Stack[-1] == 0) GOTO 0x426; Pop(1)

0x420: PushEmpty(bool, object)
0x421: Stack[-1] = Stack[-8]
0x422: Call 0x410

0x423: Pop(1)
0x424: IF (Stack[-1] == 0) GOTO 0x426; Pop(1)

0x425: Stack[-1] = (bool) 1
0x426: IF (Stack[-1] == 0) GOTO 0x429; Pop(1)

0x427: Stack[-6] = (bool) 0
0x428: Return(); Pop(4)

0x429: @ GetScene(Stack[-2])
0x42a: Pop(0)
0x42b: Pop(0); Push((bool) Stack[-2] == 0)
0x42c: IF (Stack[-1] == 0) GOTO 0x42f; Pop(1)

0x42d: Stack[-6] = (bool) 0
0x42e: Return(); Pop(4)

0x42f: @@ GetScene(Stack[-1])
0x430: Pop(0)
0x431: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x432: IF (Stack[-1] == 0) GOTO 0x435; Pop(1)

0x433: Stack[-6] = (bool) 0
0x434: Return(); Pop(4)

0x435: Stack[-6] = (bool) 1
0x436: Return(); Pop(4)

0x437: Stack[-1] = 0
0x438: Stack[-2] = 0
0x439: PushEmpty(int, int)
0x43a: PushEmpty(bool, object)
0x43b: Stack[-1] = Stack[-5]
0x43c: Call 0x415

0x43d: Pop(1)
0x43e: Pop(1); Push((bool) Stack[-1] == 0)
0x43f: IF (Stack[-1] == 0) GOTO 0x442; Pop(1)

0x440: Stack[-4] = (bool) 0
0x441: Return(); Pop(2)

0x442: PushEmpty(bool, object, string)
0x443: Stack[-2] = Stack[-6]
0x444: Stack[-1] = "noaccess"
0x445: Call 0x404

0x446: Pop(2)
0x447: Pop(1); Push((bool) Stack[-1] == 0)
0x448: IF (Stack[-1] == 0) GOTO 0x44b; Pop(1)

0x449: Stack[-4] = (bool) 1
0x44a: Return(); Pop(2)

0x44b: Push("noaccess")
0x44c: @@ GetProperty(Stack[-1], Stack[-2])
0x44d: Pop(1)
0x44e: Push((int) 0)
0x44f: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x450: Return(); Pop(2)

0x451: PushEmpty(object, object, cvector, float, int, cvector, cvector, cvector, cvector, string, object, object, cvector, float, int, cvector, cvector, cvector, cvector, string)
0x452: PushEmpty(bool)
0x453: Stack[-1] = (bool) 0
0x454: Push((int) 4)
0x455: Pop(1); Push((bool) Stack[-24] != Stack[-1])
0x456: IF (Stack[-1] == 0) GOTO 0x45b; Pop(1)

0x457: Push((int) 5)
0x458: Pop(1); Push((bool) Stack[-24] != Stack[-1])
0x459: IF (Stack[-1] == 0) GOTO 0x45b; Pop(1)

0x45a: Stack[-1] = (bool) 1
0x45b: IF (Stack[-1] == 0) GOTO 0x46e; Pop(1)

0x45c: @ GetScene(Stack[-10])
0x45d: Pop(0)
0x45e: @ GetPosition(Stack[-8])
0x45f: Pop(0)
0x460: @ GetEyesHeight(Stack[-7])
0x461: Pop(0)
0x462: Push(CvectorIndex(Stack[-8], 1))
0x463: Push((int) 2)
0x464: Pop(1); Push(Stack[-9] / Stack[-1]);
0x465: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x466: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x467: Push("scripted")
0x468: Push(CVector(0.0, 0.0, 1.0))
0x469: Push("blood.xml")
0x46a: @ AddActorByType(Stack[-12], Stack[-3], Stack[-13], Stack[-11], Stack[-2], Stack[-1])
0x46b: Pop(3)
0x46c: Stack[-9] = 0
0x46d: Stack[-10] = 0
0x46e: Pop(0); Push((bool) Stack[-23] == 0)
0x46f: IF (Stack[-1] == 0) GOTO 0x471; Pop(1)

0x470: Return(); Pop(20)

0x471: @ GetSecondaryAnimationType(Stack[-6])
0x472: Pop(0)
0x473: Push((int) 0)
0x474: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x475: IF (Stack[-1] == 0) GOTO 0x477; Pop(1)

0x476: Return(); Pop(20)

0x477: @@ GetPosition(Stack[-5])
0x478: Pop(0)
0x479: @ GetPosition(Stack[-4])
0x47a: Pop(0)
0x47b: @ GetDirection(Stack[-3])
0x47c: Pop(0)
0x47d: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0x47e: Push(CvectorIndex(Stack[-2], 0))
0x47f: Push(CvectorIndex(Stack[-4], 0))
0x480: Pop(2); Push(Stack[-2] * Stack[-1]);
0x481: Push(CvectorIndex(Stack[-3], 2))
0x482: Push(CvectorIndex(Stack[-5], 2))
0x483: Pop(2); Push(Stack[-2] * Stack[-1]);
0x484: Pop(2); Push(Stack[-2] + Stack[-1]);
0x485: Push((int) 0)
0x486: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x487: IF (Stack[-1] == 0) GOTO 0x48a; Pop(1)

0x488: Stack[-1] = "fhit"
0x489: GOTO 0x48b

0x48a: Stack[-1] = "bhit"
0x48b: Push("hit_react")
0x48c: Push("1")
0x48d: Pop(1); Push(Stack[-3] + Stack[-1]);
0x48e: Push("2")
0x48f: Pop(1); Push(Stack[-4] + Stack[-1]);
0x490: Push((int) -10)
0x491: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x492: Pop(4)
0x493: Return(); Pop(20)

0x494: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x495: @@ GetPosition(Stack[-3])
0x496: Pop(0)
0x497: @ GetPosition(Stack[-2])
0x498: Pop(0)
0x499: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0x49a: Push(CvectorIndex(Stack[-1], 0))
0x49b: Push(CvectorIndex(Stack[-2], 2))
0x49c: @ RotateAsync(Stack[-2], Stack[-1])
0x49d: Pop(2)
0x49e: Return(); Pop(6)

0x49f: PushEmpty(bool, bool)
0x4a0: @ IsLoaded(Stack[-1])
0x4a1: Pop(0)
0x4a2: Stack[-3] = Stack[-1]
0x4a3: Return(); Pop(2)

0x4a4: PushEmpty(float, cvector, float, cvector)
0x4a5: @@ GetEyesHeight(Stack[-2])
0x4a6: Pop(0)
0x4a7: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x4a8: Push(CvectorIndex(Stack[-1], 1))
0x4a9: Stack[-1] = Stack[-3]
0x4aa: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x4ab: Push("head")
0x4ac: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x4ad: Pop(1)
0x4ae: Return(); Pop(4)

0x4af: PushEmpty(float, float)
0x4b0: Pop(0); Push(Stack[-3] | Stack[-3]);
0x4b1: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x4b2: Push((float)0.0)
0x4b3: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x4b4: IF (Stack[-1] == 0) GOTO 0x4b7; Pop(1)

0x4b5: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x4b6: Return(); Pop(2)

0x4b7: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x4b8: Return(); Pop(2)

0x4b9: PushEmpty()
0x4ba: Pop(0); Push(Stack[-2] | Stack[-1]);
0x4bb: Pop(0); Push(Stack[-3] | Stack[-3]);
0x4bc: Pop(0); Push(Stack[-3] | Stack[-3]);
0x4bd: Pop(2); Push(Stack[-2] * Stack[-1]);
0x4be: Pop(1); Push(Sqrt(Stack[-1]))
0x4bf: Stack[-5] = Stack[-2] / Stack[-1]; Pop(2);
0x4c0: Return(); Pop(0)

0x4c1: PushEmpty()
0x4c2: Push(CvectorIndex(Stack[-2], 0))
0x4c3: Push(CvectorIndex(Stack[-2], 0))
0x4c4: Pop(2); Push(Stack[-2] * Stack[-1]);
0x4c5: Push(CvectorIndex(Stack[-3], 2))
0x4c6: Push(CvectorIndex(Stack[-3], 2))
0x4c7: Pop(2); Push(Stack[-2] * Stack[-1]);
0x4c8: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x4c9: Return(); Pop(0)

0x4ca: PushEmpty()
0x4cb: Push(CvectorIndex(Stack[-1], 0))
0x4cc: Push(CvectorIndex(Stack[-2], 0))
0x4cd: Pop(2); Push(Stack[-2] * Stack[-1]);
0x4ce: Push(CvectorIndex(Stack[-2], 2))
0x4cf: Push(CvectorIndex(Stack[-3], 2))
0x4d0: Pop(2); Push(Stack[-2] * Stack[-1]);
0x4d1: Pop(2); Push(Stack[-2] + Stack[-1]);
0x4d2: Stack[-3] = Sqrt(Stack[-1]); Pop(1);
0x4d3: Return(); Pop(0)

0x4d4: PushEmpty()
0x4d5: PushEmpty(float, cvector, cvector)
0x4d6: Stack[-2] = Stack[-5]
0x4d7: Stack[-1] = Stack[-4]
0x4d8: Call 0x4c1

0x4d9: Pop(2)
0x4da: PushEmpty(float, cvector)
0x4db: Stack[-1] = Stack[-5]
0x4dc: Call 0x4ca

0x4dd: Pop(1)
0x4de: PushEmpty(float, cvector)
0x4df: Stack[-1] = Stack[-5]
0x4e0: Call 0x4ca

0x4e1: Pop(1)
0x4e2: Pop(2); Push(Stack[-2] * Stack[-1]);
0x4e3: Stack[-5] = Stack[-2] / Stack[-1]; Pop(2);
0x4e4: Return(); Pop(0)

0x4e5: PushEmpty(float, float)
0x4e6: @ GetGameTime(Stack[-1])
0x4e7: Pop(0)
0x4e8: Push((int) 1)
0x4e9: PushEmpty(int)
0x4ea: Push((int) 24)
0x4eb: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x4ec: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x4ed: Return(); Pop(2)

0x4ee: PushEmpty()
0x4ef: PushEmpty(object)
0x4f0: Stack[-1] = Stack[-2]
0x4f1: Push(-1, 0); TaskCall(0)
0x4f2: Call 0x0

0x4f3: Pop(-1, 0); TaskReturn
0x4f4: Pop(1)
0x4f5: Return(); Pop(0)

0x4f6: PushEmpty(float, float)
0x4f7: Push("health")
0x4f8: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x4f9: IF (Stack[-1] == 0) GOTO 0x502; Pop(1)

0x4fa: Push("health")
0x4fb: @ GetProperty(Stack[-1], Stack[-2])
0x4fc: Pop(1)
0x4fd: Push((int) 0)
0x4fe: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x4ff: IF (Stack[-1] == 0) GOTO 0x502; Pop(1)

0x500: @ SignalDeath(Stack[-4])
0x501: Pop(0)
0x502: Return(); Pop(2)

0x503: PushEmpty()
0x504: PushEmpty(object)
0x505: Stack[-1] = Stack[-2]
0x506: Call 0x4ee

0x507: Pop(1)
0x508: Return(); Pop(0)

0x509: PushEmpty()
0x50a: PushEmpty(object, int, float)
0x50b: Stack[-3] = Stack[-7]
0x50c: Stack[-2] = Stack[-6]
0x50d: Stack[-1] = Stack[-5]
0x50e: Call 0x451

0x50f: Pop(3)
0x510: Return(); Pop(0)

0x511: PushEmpty()
0x512: PushEmpty(bool)
0x513: Call 0x672

0x514: Pop(0)
0x515: IF (Stack[-1] == 0) GOTO 0x518; Pop(1)

0x516: Stack[-2] = (int) 2
0x517: GOTO 0x519

0x518: Stack[-2] = (int) 0
0x519: Return(); Pop(0)

0x51a: PushEmpty()
0x51b: PushEmpty(object)
0x51c: Stack[-1] = Stack[-2]
0x51d: Push(-1, 1); TaskCall(2)
0x51e: Call 0x187

0x51f: Pop(-1, 1); TaskReturn
0x520: Pop(1)
0x521: Return(); Pop(0)

0x522: PushEmpty()
0x523: PushEmpty(bool, object)
0x524: Stack[-1] = Stack[-3]
0x525: Call 0x439

0x526: Pop(1)
0x527: IF (Stack[-1] == 0) GOTO 0x52a; Pop(1)

0x528: Stack[-2] = (int) 2
0x529: GOTO 0x52b

0x52a: Stack[-2] = (int) 0
0x52b: Return(); Pop(0)

0x52c: PushEmpty()
0x52d: PushEmpty(object)
0x52e: Stack[-1] = Stack[-2]
0x52f: Push(-1, 3); TaskCall(3)
0x530: Call 0x269

0x531: Pop(-1, 3); TaskReturn
0x532: Pop(1)
0x533: Return(); Pop(0)

0x534: PushEmpty()
0x535: PushEmpty(bool, object)
0x536: Stack[-1] = Stack[-3]
0x537: Call 0x439

0x538: Pop(1)
0x539: IF (Stack[-1] == 0) GOTO 0x53c; Pop(1)

0x53a: Stack[-2] = (int) 2
0x53b: GOTO 0x53d

0x53c: Stack[-2] = (int) 0
0x53d: Return(); Pop(0)

0x53e: PushEmpty()
0x53f: PushEmpty(object)
0x540: Stack[-1] = Stack[-2]
0x541: Push(-1, 3); TaskCall(4)
0x542: Call 0x35c

0x543: Pop(-1, 3); TaskReturn
0x544: Pop(1)
0x545: Return(); Pop(0)

0x546: PushEmpty()
0x547: Stack[-2] = (int) 2
0x548: Return(); Pop(0)

0x549: PushEmpty()
0x54a: PushEmpty(object)
0x54b: Stack[-1] = Stack[-2]
0x54c: Call 0x649

0x54d: Pop(1)
0x54e: Return(); Pop(0)

0x54f: Return(); Pop(0)

0x550: PushEmpty(bool, bool)
0x551: @ CanSee(Stack[-1], Stack[-3])
0x552: Pop(0)
0x553: Push(Stack[-1])
0x554: IF (Stack[-1] == 0) GOTO 0x55b; Pop(1)

0x555: PushEmpty(int, object)
0x556: Stack[-1] = Stack[-5]
0x557: Call 0x522

0x558: Stack[-6] = Stack[-2]
0x559: Pop(2)
0x55a: Return(); Pop(2)

0x55b: Stack[-4] = (int) 0
0x55c: Return(); Pop(2)

0x55d: PushEmpty()
0x55e: PushEmpty(object)
0x55f: Stack[-1] = Stack[-2]
0x560: Call 0x52c

0x561: Pop(1)
0x562: Return(); Pop(0)

0x563: PushEmpty()
0x564: Stack[-3] = (int) 0
0x565: Return(); Pop(0)

0x566: PushEmpty()
0x567: Return(); Pop(0)

0x568: PushEmpty(int, int, int, bool, int, int, int, bool)
0x569: Pop(0); Push((bool) Stack[-10] > Stack[-9])
0x56a: IF (Stack[-1] == 0) GOTO 0x56f; Pop(1)

0x56b: Push("GenerateMoney: iMin > iMax")
0x56c: @ Trace(Stack[-1])
0x56d: Pop(1)
0x56e: Return(); Pop(8)

0x56f: Stack[-4] = (int) 0
0x570: Pop(0); Push((bool) Stack[-10] != Stack[-9])
0x571: IF (Stack[-1] == 0) GOTO 0x576; Pop(1)

0x572: Pop(0); Push(Stack[-9] - Stack[-10]);
0x573: @ irand(Stack[-4], Stack[-1])
0x574: Pop(1)
0x575: GOTO 0x57a

0x576: Push((int) 0)
0x577: Pop(1); Push((bool) Stack[-11] == Stack[-1])
0x578: IF (Stack[-1] == 0) GOTO 0x57a; Pop(1)

0x579: Return(); Pop(8)

0x57a: Stack[-4] = Stack[-4] + Stack[-10]; Pop(0);
0x57b: Push((int) 0)
0x57c: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x57d: IF (Stack[-1] == 0) GOTO 0x57f; Pop(1)

0x57e: Return(); Pop(8)

0x57f: Push("Money")
0x580: @ GetInvItemByName(Stack[-3], Stack[-1])
0x581: Pop(1)
0x582: Push((int) 0)
0x583: @ AddItem(Stack[-2], Stack[-3], Stack[-1], Stack[-5])
0x584: Pop(1)
0x585: Return(); Pop(8)

0x586: PushEmpty(int, bool, int, bool)
0x587: Push(Stack[-5])
0x588: IF (Stack[-1] == 0) GOTO 0x5df; Pop(1)

0x589: PushEmpty(int, int)
0x58a: Stack[-2] = (int) 0
0x58b: Push((int) 100)
0x58c: PushEmpty(int)
0x58d: Call 0x4e5

0x58e: Pop(0)
0x58f: Push((int) 100)
0x590: Pop(2); Push(Stack[-2] * Stack[-1]);
0x591: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x592: Call 0x568

0x593: Pop(2)
0x594: Push((int) 9)
0x595: @ irand(Stack[-3], Stack[-1])
0x596: Pop(1)
0x597: Push((int) 0)
0x598: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x599: IF (Stack[-1] == 0) GOTO 0x5a3; Pop(1)

0x59a: PushEmpty(int, string)
0x59b: Stack[-1] = "lemon"
0x59c: Call 0x635

0x59d: Pop(1)
0x59e: Push((int) 0)
0x59f: Push((int) 1)
0x5a0: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x5a1: Pop(3)
0x5a2: GOTO 0x5de

0x5a3: Push((int) 1)
0x5a4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5a5: IF (Stack[-1] == 0) GOTO 0x5af; Pop(1)

0x5a6: PushEmpty(int, string)
0x5a7: Stack[-1] = "rusk"
0x5a8: Call 0x635

0x5a9: Pop(1)
0x5aa: Push((int) 0)
0x5ab: Push((int) 1)
0x5ac: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x5ad: Pop(3)
0x5ae: GOTO 0x5de

0x5af: Push((int) 2)
0x5b0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5b1: IF (Stack[-1] == 0) GOTO 0x5bb; Pop(1)

0x5b2: PushEmpty(int, string)
0x5b3: Stack[-1] = "hook"
0x5b4: Call 0x635

0x5b5: Pop(1)
0x5b6: Push((int) 0)
0x5b7: Push((int) 1)
0x5b8: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x5b9: Pop(3)
0x5ba: GOTO 0x5de

0x5bb: Push((int) 4)
0x5bc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5bd: IF (Stack[-1] == 0) GOTO 0x5c7; Pop(1)

0x5be: PushEmpty(int, string)
0x5bf: Stack[-1] = "syringe"
0x5c0: Call 0x635

0x5c1: Pop(1)
0x5c2: Push((int) 0)
0x5c3: Push((int) 1)
0x5c4: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x5c5: Pop(3)
0x5c6: GOTO 0x5de

0x5c7: Push((int) 5)
0x5c8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5c9: IF (Stack[-1] == 0) GOTO 0x5d3; Pop(1)

0x5ca: PushEmpty(int, string)
0x5cb: Stack[-1] = "watch"
0x5cc: Call 0x635

0x5cd: Pop(1)
0x5ce: Push((int) 0)
0x5cf: Push((int) 1)
0x5d0: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x5d1: Pop(3)
0x5d2: GOTO 0x5de

0x5d3: Push((int) 6)
0x5d4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5d5: IF (Stack[-1] == 0) GOTO 0x5de; Pop(1)

0x5d6: PushEmpty(int, string)
0x5d7: Stack[-1] = "razor"
0x5d8: Call 0x635

0x5d9: Pop(1)
0x5da: Push((int) 0)
0x5db: Push((int) 1)
0x5dc: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x5dd: Pop(3)
0x5de: GOTO 0x634

0x5df: PushEmpty(int, int)
0x5e0: Stack[-2] = (int) 0
0x5e1: Push((int) 50)
0x5e2: PushEmpty(int)
0x5e3: Call 0x4e5

0x5e4: Pop(0)
0x5e5: Push((int) 50)
0x5e6: Pop(2); Push(Stack[-2] * Stack[-1]);
0x5e7: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x5e8: Call 0x568

0x5e9: Pop(2)
0x5ea: Push((int) 8)
0x5eb: @ irand(Stack[-3], Stack[-1])
0x5ec: Pop(1)
0x5ed: Push((int) 0)
0x5ee: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5ef: IF (Stack[-1] == 0) GOTO 0x5f9; Pop(1)

0x5f0: PushEmpty(int, string)
0x5f1: Stack[-1] = "beads"
0x5f2: Call 0x635

0x5f3: Pop(1)
0x5f4: Push((int) 0)
0x5f5: Push((int) 1)
0x5f6: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x5f7: Pop(3)
0x5f8: GOTO 0x634

0x5f9: Push((int) 1)
0x5fa: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5fb: IF (Stack[-1] == 0) GOTO 0x605; Pop(1)

0x5fc: PushEmpty(int, string)
0x5fd: Stack[-1] = "bracelet"
0x5fe: Call 0x635

0x5ff: Pop(1)
0x600: Push((int) 0)
0x601: Push((int) 1)
0x602: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x603: Pop(3)
0x604: GOTO 0x634

0x605: Push((int) 2)
0x606: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x607: IF (Stack[-1] == 0) GOTO 0x611; Pop(1)

0x608: PushEmpty(int, string)
0x609: Stack[-1] = "ear_ring"
0x60a: Call 0x635

0x60b: Pop(1)
0x60c: Push((int) 0)
0x60d: Push((int) 1)
0x60e: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x60f: Pop(3)
0x610: GOTO 0x634

0x611: Push((int) 3)
0x612: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x613: IF (Stack[-1] == 0) GOTO 0x61d; Pop(1)

0x614: PushEmpty(int, string)
0x615: Stack[-1] = "gold_ring"
0x616: Call 0x635

0x617: Pop(1)
0x618: Push((int) 0)
0x619: Push((int) 1)
0x61a: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x61b: Pop(3)
0x61c: GOTO 0x634

0x61d: Push((int) 4)
0x61e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x61f: IF (Stack[-1] == 0) GOTO 0x629; Pop(1)

0x620: PushEmpty(int, string)
0x621: Stack[-1] = "silver_ring"
0x622: Call 0x635

0x623: Pop(1)
0x624: Push((int) 0)
0x625: Push((int) 1)
0x626: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x627: Pop(3)
0x628: GOTO 0x634

0x629: Push((int) 5)
0x62a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x62b: IF (Stack[-1] == 0) GOTO 0x634; Pop(1)

0x62c: PushEmpty(int, string)
0x62d: Stack[-1] = "flower"
0x62e: Call 0x635

0x62f: Pop(1)
0x630: Push((int) 0)
0x631: Push((int) 1)
0x632: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x633: Pop(3)
0x634: Return(); Pop(4)

0x635: PushEmpty(int, int)
0x636: @ GetInvItemByName(Stack[-1], Stack[-3])
0x637: Pop(0)
0x638: Stack[-4] = Stack[-1]
0x639: Return(); Pop(2)

0x63a: PushEmpty(string, string)
0x63b: Stack[-1] = "idle"
0x63c: Push(Stack[-3])
0x63d: IF (Stack[-1] == 0) GOTO 0x63f; Pop(1)

0x63e: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x63f: Stack[-4] = Stack[-1]
0x640: Return(); Pop(2)

0x641: Push(GlobalVars[1])
0x642: Stack[-1] = (bool) 0
0x643: GlobalVars[1] = Stack[-1]; Pop(1)
0x644: PushEmpty(bool)
0x645: Stack[-1] = (bool) 0
0x646: Call 0x586

0x647: Pop(1)
0x648: Return(); Pop(0)

0x649: PushEmpty(bool, bool)
0x64a: Push(GlobalVars[1])
0x64b: IF (Stack[-1] == 0) GOTO 0x653; Pop(1)

0x64c: @ IsOverrideActive(Stack[-1])
0x64d: Pop(0)
0x64e: Pop(0); Push((bool) Stack[-1] == 0)
0x64f: IF (Stack[-1] == 0) GOTO 0x652; Pop(1)

0x650: @ WorkWithCorpse(Stack[-3])
0x651: Pop(0)
0x652: Return(); Pop(2)

0x653: Return(); Pop(2)

0x654: PushEmpty(int, bool, int, int, bool, int)
0x655: Stack[-3] = (int) 0
0x656: Push("all")
0x657: PushEmpty(string, int)
0x658: Stack[-1] = Stack[-6]
0x659: Call 0x63a

0x65a: Pop(1)
0x65b: @ HasAnimation(Stack[-4], Stack[-2], Stack[-1])
0x65c: Pop(2)
0x65d: Pop(0); Push((bool) Stack[-2] == 0)
0x65e: IF (Stack[-1] == 0) GOTO 0x660; Pop(1)

0x65f: GOTO 0x663

0x660: Push((int) 1)
0x661: Stack[-4] = Stack[-4] + Stack[-1]; Pop(1);
0x662: GOTO 0x656

0x663: @ irand(Stack[-1], Stack[-3])
0x664: Pop(0)
0x665: Push("all")
0x666: PushEmpty(string, int)
0x667: Stack[-1] = Stack[-4]
0x668: Call 0x63a

0x669: Pop(1)
0x66a: @ PlayAnimation(Stack[-2], Stack[-1])
0x66b: Pop(2)
0x66c: @ WaitForAnimEnd()
0x66d: Pop(0)
0x66e: Return(); Pop(6)

0x66f: @ StopAnimation()
0x670: Pop(0)
0x671: Return(); Pop(0)

0x672: Stack[-1] = (bool) 1
0x673: Return(); Pop(0)

0x674: PushEmpty(bool, bool)
0x675: @ CanSee(Stack[-1], Stack[-4])
0x676: Pop(0)
0x677: PushEmpty(bool)
0x678: Stack[-1] = (bool) 1
0x679: Push(Stack[-2])
0x67a: IF (Stack[-1] == 0) GOTO 0x683; Pop(1)

0x67b: PushEmpty(float, object)
0x67c: Stack[-1] = Stack[-7]
0x67d: Call 0x3fc

0x67e: Pop(1)
0x67f: Push((float)250000.0)
0x680: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x681: IF (Stack[-1] == 0) GOTO 0x683; Pop(1)

0x682: Stack[-1] = (bool) 0
0x683: IF (Stack[-1] == 0) GOTO 0x68d; Pop(1)

0x684: Push((float)-0.3)
0x685: @ ReportReputationChange(Stack[-5], Stack[-4], Stack[-1])
0x686: Pop(1)
0x687: Push("ToDie")
0x688: Push((bool) 1)
0x689: @ SetProperty(Stack[-2], Stack[-1])
0x68a: Pop(2)
0x68b: Stack[-5] = (bool) 1
0x68c: Return(); Pop(2)

0x68d: @ CanSee(Stack[-1], Stack[-3])
0x68e: Pop(0)
0x68f: PushEmpty(bool)
0x690: Stack[-1] = (bool) 1
0x691: Push(Stack[-2])
0x692: IF (Stack[-1] == 0) GOTO 0x69b; Pop(1)

0x693: PushEmpty(float, object)
0x694: Stack[-1] = Stack[-6]
0x695: Call 0x3fc

0x696: Pop(1)
0x697: Push((float)250000.0)
0x698: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x699: IF (Stack[-1] == 0) GOTO 0x69b; Pop(1)

0x69a: Stack[-1] = (bool) 0
0x69b: IF (Stack[-1] == 0) GOTO 0x6a2; Pop(1)

0x69c: Push("ToDie")
0x69d: Push((bool) 1)
0x69e: @ SetProperty(Stack[-2], Stack[-1])
0x69f: Pop(2)
0x6a0: Stack[-5] = (bool) 1
0x6a1: Return(); Pop(2)

0x6a2: Stack[-5] = (bool) 0
0x6a3: Return(); Pop(2)

0x6a4: PushEmpty()
0x6a5: Push(GlobalVars[1])
0x6a6: Stack[-1] = (bool) 1
0x6a7: GlobalVars[1] = Stack[-1]; Pop(1)
0x6a8: Push((int) 50)
0x6a9: Push((int) 40)
0x6aa: @ SetRTEnvelope(Stack[-2], Stack[-1])
0x6ab: Pop(2)
0x6ac: Return(); Pop(0)

