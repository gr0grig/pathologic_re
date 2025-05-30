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
	Can't retreat, distance: 
	HasProperty
	HasProperty
	IsDead
	IsDead
	GetScene
	noaccess
	GetProperty
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
	health
	unholster
	player_shot
	battle
	IsWeaponHolstered
	heal
	player
	idle

Import:
	Hold (0 args)
	StopGroup0 (0 args)
	sync (0 args)
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
	irand (2 args)
	WaitForAnimEnd (1 args)
	rand (2 args)
	Sleep (2 args)
	ResetAAS (0 args)
	StopAnimation (0 args)
	SensePlayerOnly (1 args)
	Sleep (1 args)
	GetRandomPFPointInCircle (4 args)
	RotatePath (2 args)
	FollowPath (3 args)
	GetCameraFarDistance (1 args)
	RequestClearPath (1 args)
	FindShiftedPathTo (2 args)
	FindLongestDir (6 args)
	Trace (1 args)
	Rotate (2 args)
	SetTimer (2 args)
	MovePoint (3 args)
	KillTimer (1 args)
	FindDirLength (3 args)
	IsPlayerActor (2 args)
	GetScene (1 args)
	IsDead (1 args)
	GetSecondaryAnimationType (1 args)
	FadeSecondaryAnimation (4 args)
	CreateVectorVector (1 args)
	GetGeometryLocator (4 args)
	AddActorByType (6 args)
	IsLoaded (1 args)
	IsExisting3DSound (2 args)
	Is3DSoundLoaded (2 args)
	GetEyesHeight (1 args)
	PlayGlobalSound (2 args)
	self (1 args)
	GetProperty (2 args)
	SignalDeath (1 args)
	ReportReputationChange (3 args)
	FindActor (2 args)
	HasAnimation (3 args)

RunOp = 0x1a3
RunTask = 3

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_5 Op = 0x8 Vars = ()
	GTASK_1  Params = 1
		EVENT_0 Op = 0x1c Vars = (object)
		EVENT_6 Op = 0x2a Vars = ()
		EVENT_22 Op = 0xa3 Vars = (object, int, float, float)
		EVENT_16 Op = 0xa5 Vars = (object, string)
		EVENT_41 Op = 0xa7 Vars = (object)
	GTASK_2  Params = 0
		EVENT_0 Op = 0xa9 Vars = (object)
		EVENT_17 Op = 0xbd Vars = (object)
		EVENT_30 Op = 0xd5 Vars = (object, object, bool)
		EVENT_40 Op = 0xf1 Vars = (object)
		EVENT_42 Op = 0x105 Vars = (object, string)
		EVENT_26 Op = 0x12a Vars = (string)
		EVENT_6 Op = 0x138 Vars = ()
		EVENT_1 Op = 0x13f Vars = (object)
	GTASK_3 Vars = (bool, bool) Params = 0
		EVENT_0 Op = 0x1ba Vars = (object)
		EVENT_17 Op = 0x1ce Vars = (object)
		EVENT_30 Op = 0x1e6 Vars = (object, object, bool)
		EVENT_40 Op = 0x202 Vars = (object)
		EVENT_42 Op = 0x216 Vars = (object, string)
		EVENT_26 Op = 0x23b Vars = (string)
		EVENT_1 Op = 0x249 Vars = (object)
		EVENT_6 Op = 0x257 Vars = ()
		EVENT_10 Op = 0x29e Vars = (object)
		EVENT_28 Op = 0x2a2 Vars = ()
		EVENT_41 Op = 0x2ac Vars = (object)
	GTASK_4 Vars = (object, cvector, bool) Params = 1
		EVENT_6 Op = 0x2bd Vars = ()
		EVENT_7 Op = 0x32b Vars = (int)
		EVENT_41 Op = 0x366 Vars = (object)
	GTASK_5 Vars = (object, cvector, bool) Params = 1
		EVENT_7 Op = 0x3e6 Vars = (int)
		EVENT_41 Op = 0x421 Vars = (object)

Events:
EVENT_16 Op = 0x564 Vars = (object, string)
EVENT_41 Op = 0x571 Vars = (object)
EVENT_22 Op = 0x577 Vars = (object, int, float, float)
EVENT_43 Op = 0x57f Vars = (object, int, float, float, cvector, cvector)

0x0: @ Hold()
0x1: Pop(0)
0x2: PushEmpty(bool)
0x3: Call2 0x516

0x4: Pop(0)
0x5: Pop(1); Push((bool) Stack[-1] == 0)
0x6: IF (Stack[-1] == 0) GOTO 0x0; Pop(1)

0x7: Return(); Pop(0)

0x8: @ StopGroup0()
0x9: Pop(0)
0xa: @ sync()
0xb: Pop(0)
0xc: Return(); Pop(0)

0xd: PushEmpty()
0xe: EventDisable(0)
0xf: PushEmpty(object)
0x10: Stack[-1] = Stack[-2]
0x11: Call2 0x2e

0x12: Pop(1)
0x13: PushEmpty(object)
0x14: Stack[-1] = Stack[-2]
0x15: Call2 0x64a

0x16: Pop(1)
0x17: EventEnable(0)
0x18: @ Hold()
0x19: Pop(0)
0x1a: GOTO 0x18

0x1b: Return(); Pop(0)

0x1c: PushEmpty(int, int)
0x1d: PushEmpty(int, object)
0x1e: Stack[-1] = Stack[-5]
0x1f: Call2 0x645

0x20: Stack[-3] = Stack[-2]
0x21: Pop(2)
0x22: Push((int) 0)
0x23: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x24: IF (Stack[-1] == 0) GOTO 0x29; Pop(1)

0x25: PushEmpty(object)
0x26: Stack[-1] = Stack[-4]
0x27: Call2 0x648

0x28: Pop(1)
0x29: Return(); Pop(2)

0x2a: PushEmpty()
0x2b: Call2 0x64c

0x2c: Pop(0)
0x2d: Return(); Pop(0)

0x2e: PushEmpty(cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector, cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector)
0x2f: Pop(0); Push((bool) Stack[-21] == 0)
0x30: IF (Stack[-1] == 0) GOTO 0x36; Pop(1)

0x31: PushEmpty(string)
0x32: Stack[-1] = "fdie"
0x33: Call2 0x89

0x34: Pop(1)
0x35: GOTO 0x88

0x36: @@ GetPosition(Stack[-10])
0x37: Pop(0)
0x38: @ GetPosition(Stack[-9])
0x39: Pop(0)
0x3a: @ GetDirection(Stack[-8])
0x3b: Pop(0)
0x3c: Stack[-7] = Stack[-9] - Stack[-10]; Pop(0);
0x3d: Push(CvectorIndex(Stack[-7], 0))
0x3e: Push(CvectorIndex(Stack[-9], 0))
0x3f: Pop(2); Push(Stack[-2] * Stack[-1]);
0x40: Push(CvectorIndex(Stack[-8], 2))
0x41: Push(CvectorIndex(Stack[-10], 2))
0x42: Pop(2); Push(Stack[-2] * Stack[-1]);
0x43: Pop(2); Push(Stack[-2] + Stack[-1]);
0x44: Push((int) 0)
0x45: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x46: IF (Stack[-1] == 0) GOTO 0x49; Pop(1)

0x47: Stack[-6] = "fdie"
0x48: GOTO 0x4a

0x49: Stack[-6] = "bdie"
0x4a: @ RemoveRTEnvelope()
0x4b: Pop(0)
0x4c: @ SetDeathState()
0x4d: Pop(0)
0x4e: @ Stop()
0x4f: Pop(0)
0x50: @ StopAsync()
0x51: Pop(0)
0x52: Stack[-5] = Stack[-21]
0x53: Push("GetScriptProperty")
0x54: Push((int) 2)
0x55: Pop(2); Push(IsFuncExist(Stack[-23], Stack[-2], Stack[-1]))
0x56: IF (Stack[-1] == 0) GOTO 0x62; Pop(1)

0x57: Push("Owner")
0x58: @@ HasScriptProperty(Stack[-5], Stack[-1])
0x59: Pop(1)
0x5a: Push(Stack[-4])
0x5b: IF (Stack[-1] == 0) GOTO 0x62; Pop(1)

0x5c: Push("Owner")
0x5d: @@ GetScriptProperty(Stack[-6], Stack[-1])
0x5e: Pop(1)
0x5f: Pop(0); Push((bool) Stack[-5] == 0)
0x60: IF (Stack[-1] == 0) GOTO 0x62; Pop(1)

0x61: Stack[-5] = Stack[-21]
0x62: Push("@GetEyesHeight")
0x63: Push((int) 1)
0x64: Pop(2); Push(IsFuncExist(Stack[-7], Stack[-2], Stack[-1]))
0x65: IF (Stack[-1] == 0) GOTO 0x71; Pop(1)

0x66: @@ GetEyesHeight(Stack[-2])
0x67: Pop(0)
0x68: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x69: Push(CvectorIndex(Stack[-1], 1))
0x6a: Stack[-1] = Stack[-3]
0x6b: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x6c: Push("head")
0x6d: @ LookAsync(Stack[-22], Stack[-1], Stack[-2])
0x6e: Pop(1)
0x6f: Stack[-3] = (bool) 1
0x70: GOTO 0x72

0x71: Stack[-3] = (bool) 0
0x72: PushEmpty(string)
0x73: Stack[-1] = Stack[-7]
0x74: Call2 0x51b

0x75: Pop(1)
0x76: Push("all")
0x77: @ PlayAnimation(Stack[-1], Stack[-7])
0x78: Pop(1)
0x79: @ WaitForAnimEnd()
0x7a: Pop(0)
0x7b: Push(Stack[-3])
0x7c: IF (Stack[-1] == 0) GOTO 0x82; Pop(1)

0x7d: @ StopAsync()
0x7e: Pop(0)
0x7f: Push("head")
0x80: @ UnlookAsync(Stack[-1])
0x81: Pop(1)
0x82: Push("all")
0x83: @ LockAnimationEnd(Stack[-1], Stack[-7])
0x84: Pop(1)
0x85: @ RemoveEnvelope()
0x86: Pop(0)
0x87: Stack[-5] = 0
0x88: Return(); Pop(20)

0x89: PushEmpty()
0x8a: @ RemoveRTEnvelope()
0x8b: Pop(0)
0x8c: @ SetDeathState()
0x8d: Pop(0)
0x8e: @ Stop()
0x8f: Pop(0)
0x90: @ StopAsync()
0x91: Pop(0)
0x92: @ StopSecondaryAnimation()
0x93: Pop(0)
0x94: PushEmpty(string)
0x95: Stack[-1] = Stack[-2]
0x96: Call2 0x51b

0x97: Pop(1)
0x98: Push("all")
0x99: @ PlayAnimation(Stack[-1], Stack[-2])
0x9a: Pop(1)
0x9b: @ WaitForAnimEnd()
0x9c: Pop(0)
0x9d: Push("all")
0x9e: @ LockAnimationEnd(Stack[-1], Stack[-2])
0x9f: Pop(1)
0xa0: @ RemoveEnvelope()
0xa1: Pop(0)
0xa2: Return(); Pop(0)

0xa3: PushEmpty()
0xa4: Return(); Pop(0)

0xa5: PushEmpty()
0xa6: Return(); Pop(0)

0xa7: PushEmpty()
0xa8: Return(); Pop(0)

0xa9: PushEmpty(int, int)
0xaa: PushEmpty(int, object)
0xab: Stack[-1] = Stack[-5]
0xac: Call2 0x645

0xad: Stack[-3] = Stack[-2]
0xae: Pop(2)
0xaf: Push((int) 0)
0xb0: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xb1: IF (Stack[-1] == 0) GOTO 0xbc; Pop(1)

0xb2: Push((int) 1)
0xb3: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xb4: IF (Stack[-1] == 0) GOTO 0xb8; Pop(1)

0xb5: PushEmpty()
0xb6: Call2 0x19e

0xb7: Pop(0)
0xb8: PushEmpty(object)
0xb9: Stack[-1] = Stack[-4]
0xba: Call2 0x648

0xbb: Pop(1)
0xbc: Return(); Pop(2)

0xbd: PushEmpty(int, int)
0xbe: PushEmpty(object)
0xbf: Stack[-1] = Stack[-4]
0xc0: Call2 0x5df

0xc1: Pop(1)
0xc2: PushEmpty(int, object)
0xc3: Stack[-1] = Stack[-5]
0xc4: Call2 0x621

0xc5: Stack[-3] = Stack[-2]
0xc6: Pop(2)
0xc7: Push((int) 0)
0xc8: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xc9: IF (Stack[-1] == 0) GOTO 0xd4; Pop(1)

0xca: Push((int) 1)
0xcb: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xcc: IF (Stack[-1] == 0) GOTO 0xd0; Pop(1)

0xcd: PushEmpty()
0xce: Call2 0x19e

0xcf: Pop(0)
0xd0: PushEmpty(object)
0xd1: Stack[-1] = Stack[-4]
0xd2: Call2 0x62b

0xd3: Pop(1)
0xd4: Return(); Pop(2)

0xd5: PushEmpty(int, int)
0xd6: PushEmpty(bool, object, object, bool)
0xd7: Stack[-3] = Stack[-9]
0xd8: Stack[-2] = Stack[-8]
0xd9: Stack[-1] = Stack[-7]
0xda: Call2 0x671

0xdb: Pop(3)
0xdc: IF (Stack[-1] == 0) GOTO 0xf0; Pop(1)

0xdd: PushEmpty(int, object, bool)
0xde: Stack[-2] = Stack[-8]
0xdf: Stack[-1] = Stack[-6]
0xe0: Call2 0x633

0xe1: Stack[-4] = Stack[-3]
0xe2: Pop(3)
0xe3: Push((int) 0)
0xe4: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xe5: IF (Stack[-1] == 0) GOTO 0xf0; Pop(1)

0xe6: Push((int) 1)
0xe7: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xe8: IF (Stack[-1] == 0) GOTO 0xec; Pop(1)

0xe9: PushEmpty()
0xea: Call2 0x19e

0xeb: Pop(0)
0xec: PushEmpty(object)
0xed: Stack[-1] = Stack[-6]
0xee: Call2 0x63d

0xef: Pop(1)
0xf0: Return(); Pop(2)

0xf1: PushEmpty(int, int)
0xf2: PushEmpty(int, object)
0xf3: Stack[-1] = Stack[-5]
0xf4: Call2 0x652

0xf5: Stack[-3] = Stack[-2]
0xf6: Pop(2)
0xf7: Push((int) 0)
0xf8: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xf9: IF (Stack[-1] == 0) GOTO 0x104; Pop(1)

0xfa: Push((int) 1)
0xfb: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xfc: IF (Stack[-1] == 0) GOTO 0x100; Pop(1)

0xfd: PushEmpty()
0xfe: Call2 0x19e

0xff: Pop(0)
0x100: PushEmpty(object)
0x101: Stack[-1] = Stack[-4]
0x102: Call2 0x655

0x103: Pop(1)
0x104: Return(); Pop(2)

0x105: PushEmpty(int, int)
0x106: PushEmpty(bool, object, string)
0x107: Stack[-2] = Stack[-7]
0x108: Stack[-1] = Stack[-6]
0x109: Call2 0x589

0x10a: Pop(2)
0x10b: IF (Stack[-1] == 0) GOTO 0x115; Pop(1)

0x10c: PushEmpty()
0x10d: Call2 0x19e

0x10e: Pop(0)
0x10f: PushEmpty(object, string)
0x110: Stack[-2] = Stack[-6]
0x111: Stack[-1] = Stack[-5]
0x112: Call2 0x5a9

0x113: Pop(2)
0x114: GOTO 0x129

0x115: PushEmpty(int, string, object)
0x116: Stack[-2] = Stack[-6]
0x117: Stack[-1] = Stack[-7]
0x118: Call2 0x657

0x119: Stack[-4] = Stack[-3]
0x11a: Pop(3)
0x11b: Push((int) 0)
0x11c: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x11d: IF (Stack[-1] == 0) GOTO 0x129; Pop(1)

0x11e: Push((int) 1)
0x11f: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x120: IF (Stack[-1] == 0) GOTO 0x124; Pop(1)

0x121: PushEmpty()
0x122: Call2 0x19e

0x123: Pop(0)
0x124: PushEmpty(string, object)
0x125: Stack[-2] = Stack[-5]
0x126: Stack[-1] = Stack[-6]
0x127: Call2 0x65a

0x128: Pop(2)
0x129: Return(); Pop(2)

0x12a: PushEmpty()
0x12b: PushEmpty(bool, string)
0x12c: Stack[-1] = Stack[-3]
0x12d: Call2 0x5ec

0x12e: Pop(1)
0x12f: IF (Stack[-1] == 0) GOTO 0x137; Pop(1)

0x130: PushEmpty()
0x131: Call2 0x19e

0x132: Pop(0)
0x133: PushEmpty(string)
0x134: Stack[-1] = Stack[-2]
0x135: Call2 0x5fc

0x136: Pop(1)
0x137: Return(); Pop(0)

0x138: PushEmpty()
0x139: Call2 0x19e

0x13a: Pop(0)
0x13b: PushEmpty()
0x13c: Call2 0x64c

0x13d: Pop(0)
0x13e: Return(); Pop(0)

0x13f: PushEmpty()
0x140: PushEmpty(bool, object)
0x141: Stack[-1] = Stack[-3]
0x142: Call2 0x5c2

0x143: Pop(1)
0x144: IF (Stack[-1] == 0) GOTO 0x14c; Pop(1)

0x145: PushEmpty()
0x146: Call2 0x19e

0x147: Pop(0)
0x148: PushEmpty(object)
0x149: Stack[-1] = Stack[-2]
0x14a: Call2 0x5d9

0x14b: Pop(1)
0x14c: Return(); Pop(0)

0x14d: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x14e: @ WaitForAnimEnd()
0x14f: Pop(0)
0x150: PushEmpty(bool)
0x151: Call2 0x516

0x152: Pop(0)
0x153: Pop(1); Push((bool) Stack[-1] == 0)
0x154: IF (Stack[-1] == 0) GOTO 0x156; Pop(1)

0x155: Return(); Pop(14)

0x156: PushEmpty(int)
0x157: Call2 0x610

0x158: Stack[-8] = Stack[-1]
0x159: Pop(1)
0x15a: Stack[-6] = (int) 0
0x15b: PushEmpty(bool)
0x15c: Stack[-1] = (bool) 0
0x15d: Push((int) 5)
0x15e: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x15f: IF (Stack[-1] == 0) GOTO 0x165; Pop(1)

0x160: PushEmpty(bool)
0x161: Call2 0x516

0x162: Pop(0)
0x163: IF (Stack[-1] == 0) GOTO 0x165; Pop(1)

0x164: Stack[-1] = (bool) 1
0x165: IF (Stack[-1] == 0) GOTO 0x199; Pop(1)

0x166: Push((int) 3)
0x167: @ irand(Stack[-6], Stack[-1])
0x168: Pop(1)
0x169: Push((int) 0)
0x16a: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x16b: IF (Stack[-1] == 0) GOTO 0x17d; Pop(1)

0x16c: Push(Stack[-7])
0x16d: IF (Stack[-1] == 0) GOTO 0x17c; Pop(1)

0x16e: @ irand(Stack[-4], Stack[-7])
0x16f: Pop(0)
0x170: Push("all")
0x171: PushEmpty(string, int)
0x172: Stack[-1] = Stack[-7]
0x173: Call2 0x609

0x174: Pop(1)
0x175: @ PlayAnimation(Stack[-2], Stack[-1])
0x176: Pop(2)
0x177: @ WaitForAnimEnd(Stack[-3])
0x178: Pop(0)
0x179: Pop(0); Push((bool) Stack[-3] == 0)
0x17a: IF (Stack[-1] == 0) GOTO 0x17c; Pop(1)

0x17b: GOTO 0x199

0x17c: GOTO 0x18e

0x17d: Push((int) 1)
0x17e: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x17f: IF (Stack[-1] == 0) GOTO 0x18b; Pop(1)

0x180: Push((int) 4)
0x181: @ rand(Stack[-3], Stack[-1])
0x182: Pop(1)
0x183: Push((int) 1)
0x184: Pop(1); Push(Stack[-3] + Stack[-1]);
0x185: @ Sleep(Stack[-1], Stack[-2])
0x186: Pop(1)
0x187: Pop(0); Push((bool) Stack[-1] == 0)
0x188: IF (Stack[-1] == 0) GOTO 0x18a; Pop(1)

0x189: GOTO 0x199

0x18a: GOTO 0x18e

0x18b: Push(Stack[-6])
0x18c: IF (Stack[-1] == 0) GOTO 0x18e; Pop(1)

0x18d: GOTO 0x199

0x18e: PushEmpty(bool)
0x18f: Call2 0x19c

0x190: Pop(0)
0x191: Pop(1); Push((bool) Stack[-1] == 0)
0x192: IF (Stack[-1] == 0) GOTO 0x194; Pop(1)

0x193: GOTO 0x199

0x194: @ ResetAAS()
0x195: Pop(0)
0x196: Push((int) 1)
0x197: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x198: GOTO 0x15b

0x199: @ ResetAAS()
0x19a: Pop(0)
0x19b: Return(); Pop(14)

0x19c: Stack[-1] = (bool) 1
0x19d: Return(); Pop(0)

0x19e: @ StopAnimation()
0x19f: Pop(0)
0x1a0: @ StopGroup0()
0x1a1: Pop(0)
0x1a2: Return(); Pop(0)

0x1a3: Push((bool) 1)
0x1a4: @ SensePlayerOnly(Stack[-1])
0x1a5: Pop(1)
0x1a6: PushEmpty()
0x1a7: Call2 0x670

0x1a8: Pop(0)
0x1a9: PushEmpty()
0x1aa: Call2 0x1b1

0x1ab: Pop(0)
0x1ac: PushEmpty()
0x1ad: Call2 0x25e

0x1ae: Pop(0)
0x1af: GOTO 0x1ac

0x1b0: Return(); Pop(0)

0x1b1: PushEmpty(bool)
0x1b2: Call2 0x516

0x1b3: Pop(0)
0x1b4: Pop(1); Push((bool) Stack[-1] == 0)
0x1b5: IF (Stack[-1] == 0) GOTO 0x1b9; Pop(1)

0x1b6: PushEmpty()
0x1b7: Call2 0x64c

0x1b8: Pop(0)
0x1b9: Return(); Pop(0)

0x1ba: PushEmpty(int, int)
0x1bb: PushEmpty(int, object)
0x1bc: Stack[-1] = Stack[-5]
0x1bd: Call2 0x645

0x1be: Stack[-3] = Stack[-2]
0x1bf: Pop(2)
0x1c0: Push((int) 0)
0x1c1: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x1c2: IF (Stack[-1] == 0) GOTO 0x1cd; Pop(1)

0x1c3: Push((int) 1)
0x1c4: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x1c5: IF (Stack[-1] == 0) GOTO 0x1c9; Pop(1)

0x1c6: PushEmpty()
0x1c7: Call2 0x2a5

0x1c8: Pop(0)
0x1c9: PushEmpty(object)
0x1ca: Stack[-1] = Stack[-4]
0x1cb: Call2 0x648

0x1cc: Pop(1)
0x1cd: Return(); Pop(2)

0x1ce: PushEmpty(int, int)
0x1cf: PushEmpty(object)
0x1d0: Stack[-1] = Stack[-4]
0x1d1: Call2 0x5df

0x1d2: Pop(1)
0x1d3: PushEmpty(int, object)
0x1d4: Stack[-1] = Stack[-5]
0x1d5: Call2 0x621

0x1d6: Stack[-3] = Stack[-2]
0x1d7: Pop(2)
0x1d8: Push((int) 0)
0x1d9: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x1da: IF (Stack[-1] == 0) GOTO 0x1e5; Pop(1)

0x1db: Push((int) 1)
0x1dc: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x1dd: IF (Stack[-1] == 0) GOTO 0x1e1; Pop(1)

0x1de: PushEmpty()
0x1df: Call2 0x2a5

0x1e0: Pop(0)
0x1e1: PushEmpty(object)
0x1e2: Stack[-1] = Stack[-4]
0x1e3: Call2 0x62b

0x1e4: Pop(1)
0x1e5: Return(); Pop(2)

0x1e6: PushEmpty(int, int)
0x1e7: PushEmpty(bool, object, object, bool)
0x1e8: Stack[-3] = Stack[-9]
0x1e9: Stack[-2] = Stack[-8]
0x1ea: Stack[-1] = Stack[-7]
0x1eb: Call2 0x671

0x1ec: Pop(3)
0x1ed: IF (Stack[-1] == 0) GOTO 0x201; Pop(1)

0x1ee: PushEmpty(int, object, bool)
0x1ef: Stack[-2] = Stack[-8]
0x1f0: Stack[-1] = Stack[-6]
0x1f1: Call2 0x633

0x1f2: Stack[-4] = Stack[-3]
0x1f3: Pop(3)
0x1f4: Push((int) 0)
0x1f5: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x1f6: IF (Stack[-1] == 0) GOTO 0x201; Pop(1)

0x1f7: Push((int) 1)
0x1f8: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x1f9: IF (Stack[-1] == 0) GOTO 0x1fd; Pop(1)

0x1fa: PushEmpty()
0x1fb: Call2 0x2a5

0x1fc: Pop(0)
0x1fd: PushEmpty(object)
0x1fe: Stack[-1] = Stack[-6]
0x1ff: Call2 0x63d

0x200: Pop(1)
0x201: Return(); Pop(2)

0x202: PushEmpty(int, int)
0x203: PushEmpty(int, object)
0x204: Stack[-1] = Stack[-5]
0x205: Call2 0x652

0x206: Stack[-3] = Stack[-2]
0x207: Pop(2)
0x208: Push((int) 0)
0x209: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x20a: IF (Stack[-1] == 0) GOTO 0x215; Pop(1)

0x20b: Push((int) 1)
0x20c: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x20d: IF (Stack[-1] == 0) GOTO 0x211; Pop(1)

0x20e: PushEmpty()
0x20f: Call2 0x2a5

0x210: Pop(0)
0x211: PushEmpty(object)
0x212: Stack[-1] = Stack[-4]
0x213: Call2 0x655

0x214: Pop(1)
0x215: Return(); Pop(2)

0x216: PushEmpty(int, int)
0x217: PushEmpty(bool, object, string)
0x218: Stack[-2] = Stack[-7]
0x219: Stack[-1] = Stack[-6]
0x21a: Call2 0x589

0x21b: Pop(2)
0x21c: IF (Stack[-1] == 0) GOTO 0x226; Pop(1)

0x21d: PushEmpty()
0x21e: Call2 0x2a5

0x21f: Pop(0)
0x220: PushEmpty(object, string)
0x221: Stack[-2] = Stack[-6]
0x222: Stack[-1] = Stack[-5]
0x223: Call2 0x5a9

0x224: Pop(2)
0x225: GOTO 0x23a

0x226: PushEmpty(int, string, object)
0x227: Stack[-2] = Stack[-6]
0x228: Stack[-1] = Stack[-7]
0x229: Call2 0x657

0x22a: Stack[-4] = Stack[-3]
0x22b: Pop(3)
0x22c: Push((int) 0)
0x22d: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x22e: IF (Stack[-1] == 0) GOTO 0x23a; Pop(1)

0x22f: Push((int) 1)
0x230: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x231: IF (Stack[-1] == 0) GOTO 0x235; Pop(1)

0x232: PushEmpty()
0x233: Call2 0x2a5

0x234: Pop(0)
0x235: PushEmpty(string, object)
0x236: Stack[-2] = Stack[-5]
0x237: Stack[-1] = Stack[-6]
0x238: Call2 0x65a

0x239: Pop(2)
0x23a: Return(); Pop(2)

0x23b: PushEmpty()
0x23c: PushEmpty(bool, string)
0x23d: Stack[-1] = Stack[-3]
0x23e: Call2 0x5ec

0x23f: Pop(1)
0x240: IF (Stack[-1] == 0) GOTO 0x248; Pop(1)

0x241: PushEmpty()
0x242: Call2 0x2a5

0x243: Pop(0)
0x244: PushEmpty(string)
0x245: Stack[-1] = Stack[-2]
0x246: Call2 0x5fc

0x247: Pop(1)
0x248: Return(); Pop(0)

0x249: PushEmpty()
0x24a: PushEmpty(bool, object)
0x24b: Stack[-1] = Stack[-3]
0x24c: Call2 0x5c2

0x24d: Pop(1)
0x24e: IF (Stack[-1] == 0) GOTO 0x256; Pop(1)

0x24f: PushEmpty()
0x250: Call2 0x2a5

0x251: Pop(0)
0x252: PushEmpty(object)
0x253: Stack[-1] = Stack[-2]
0x254: Call2 0x5d9

0x255: Pop(1)
0x256: Return(); Pop(0)

0x257: PushEmpty()
0x258: Call2 0x2a5

0x259: Pop(0)
0x25a: PushEmpty()
0x25b: Call2 0x64c

0x25c: Pop(0)
0x25d: Return(); Pop(0)

0x25e: PushEmpty(float, cvector, cvector, bool, object, bool, float, cvector, cvector, bool, object, bool)
0x25f: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x260: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x261: Push((float)0.5)
0x262: @ rand(Stack[-7], Stack[-1])
0x263: Pop(1)
0x264: @ Sleep(Stack[-6])
0x265: Pop(0)
0x266: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x267: IF (Stack[-1] == 0) GOTO 0x298; Pop(1)

0x268: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == 0)
0x269: IF (Stack[-1] == 0) GOTO 0x279; Pop(1)

0x26a: @ GetPosition(Stack[-4])
0x26b: Pop(0)
0x26c: PushEmpty(float)
0x26d: Call2 0x299

0x26e: Pop(0)
0x26f: @ GetRandomPFPointInCircle(Stack[-6], Stack[-5], Stack[-1], Stack[-4])
0x270: Pop(1)
0x271: Push(Stack[-3])
0x272: IF (Stack[-1] == 0) GOTO 0x274; Pop(1)

0x273: GOTO 0x278

0x274: Push((int) 1)
0x275: @ Sleep(Stack[-1])
0x276: Pop(1)
0x277: GOTO 0x26a

0x278: GOTO 0x27a

0x279: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x27a: PushEmpty(object, cvector)
0x27b: Stack[-1] = Stack[-7]
0x27c: Call2 0x2b7

0x27d: Stack[-4] = Stack[-2]
0x27e: Pop(2)
0x27f: Pop(0); Push(( Stack[-2] != 0 )
0x280: IF (Stack[-1] == 0) GOTO 0x293; Pop(1)

0x281: @ RotatePath(Stack[-2], Stack[-1])
0x282: Pop(0)
0x283: Push(Stack[-1])
0x284: IF (Stack[-1] == 0) GOTO 0x292; Pop(1)

0x285: PushEmpty(bool)
0x286: Call2 0x2b5

0x287: Pop(0)
0x288: @ FollowPath(Stack[-3], Stack[-1], Stack[-2])
0x289: Pop(1)
0x28a: Stack[-2] = 0
0x28b: Push(Stack[-1])
0x28c: IF (Stack[-1] == 0) GOTO 0x292; Pop(1)

0x28d: PushEmpty()
0x28e: Push(-0, 0); TaskCall(2)
0x28f: Call2 0x14d

0x290: Pop(-0, 0); TaskReturn
0x291: Pop(0)
0x292: GOTO 0x296

0x293: Push((int) 1)
0x294: @ Sleep(Stack[-1])
0x295: Pop(1)
0x296: Stack[-2] = 0
0x297: GOTO 0x266

0x298: Return(); Pop(12)

0x299: PushEmpty(float, float)
0x29a: @ GetCameraFarDistance(Stack[-1])
0x29b: Pop(0)
0x29c: Stack[-3] = Stack[-1]
0x29d: Return(); Pop(2)

0x29e: PushEmpty()
0x29f: @ RequestClearPath(Stack[-1])
0x2a0: Pop(0)
0x2a1: Return(); Pop(0)

0x2a2: @ Stop()
0x2a3: Pop(0)
0x2a4: Return(); Pop(0)

0x2a5: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x2a6: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x2a7: @ Stop()
0x2a8: Pop(0)
0x2a9: @ StopGroup0()
0x2aa: Pop(0)
0x2ab: Return(); Pop(0)

0x2ac: PushEmpty()
0x2ad: PushEmpty()
0x2ae: Call2 0x2a5

0x2af: Pop(0)
0x2b0: PushEmpty(object)
0x2b1: Stack[-1] = Stack[-2]
0x2b2: Call2 0x571

0x2b3: Pop(1)
0x2b4: Return(); Pop(0)

0x2b5: Stack[-1] = (bool) 0
0x2b6: Return(); Pop(0)

0x2b7: PushEmpty(object, object)
0x2b8: @ FindShiftedPathTo(Stack[-1], Stack[-3])
0x2b9: Pop(0)
0x2ba: Stack[-4] = Stack[-1]
0x2bb: Return(); Pop(2)

0x2bc: Stack[-1] = 0
0x2bd: PushEmpty()
0x2be: Call2 0x35f

0x2bf: Pop(0)
0x2c0: PushEmpty()
0x2c1: Call2 0x64c

0x2c2: Pop(0)
0x2c3: Return(); Pop(0)

0x2c4: PushEmpty(cvector, cvector, cvector, cvector, cvector, float, cvector, cvector, cvector, cvector, cvector, float)
0x2c5: @ GetPosition(Stack[-6])
0x2c6: Pop(0)
0x2c7: @@ GetPosition(Stack[-5])
0x2c8: Pop(0)
0x2c9: @ GetDirection(Stack[-4])
0x2ca: Pop(0)
0x2cb: PushEmpty(cvector, cvector)
0x2cc: PushEmpty(cvector, cvector)
0x2cd: Stack[-1] = Stack[-10] - Stack[-9]; Pop(0);
0x2ce: Call2 0x54a

0x2cf: Pop(1)
0x2d0: Push((float)0.75)
0x2d1: Pop(1); Push(Stack[-8] * Stack[-1]);
0x2d2: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x2d3: Call2 0x54a

0x2d4: Stack[-5] = Stack[-2]
0x2d5: Pop(2)
0x2d6: Push((int) 32)
0x2d7: Push((float)7000.0)
0x2d8: @ FindLongestDir(Stack[-4], Stack[-3], Stack[-5], Stack[-15], Stack[-2], Stack[-1])
0x2d9: Pop(2)
0x2da: Push((int) 100)
0x2db: Stack[-2] = Stack[-2] - Stack[-1]; Pop(1);
0x2dc: Push((int) 0)
0x2dd: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x2de: IF (Stack[-1] == 0) GOTO 0x2e0; Pop(1)

0x2df: Stack[-1] = (int) 0
0x2e0: Stack[-14] = Stack[-2] * Stack[-1]; Pop(0);
0x2e1: Return(); Pop(12)

0x2e2: PushEmpty(cvector, float, bool, cvector, float, cvector, float, bool, cvector, float)
0x2e3: Stack[0 + Tasks[-1].StackPointer] = Stack[-11]
0x2e4: PushEmpty(cvector, float)
0x2e5: Stack[-1] = (float) 1.74533
0x2e6: Call2 0x2c4

0x2e7: Stack[-7] = Stack[-2]
0x2e8: Pop(2)
0x2e9: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x2ea: Push((float)2500.0)
0x2eb: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x2ec: IF (Stack[-1] == 0) GOTO 0x2ff; Pop(1)

0x2ed: PushEmpty(cvector, float)
0x2ee: Stack[-1] = (float) 2.61799
0x2ef: Call2 0x2c4

0x2f0: Stack[-7] = Stack[-2]
0x2f1: Pop(2)
0x2f2: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x2f3: Push((float)2500.0)
0x2f4: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x2f5: IF (Stack[-1] == 0) GOTO 0x2ff; Pop(1)

0x2f6: Push("Can't retreat, distance: ")
0x2f7: Pop(0); Push(Sqrt(Stack[-5]))
0x2f8: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2f9: @ Trace(Stack[-1])
0x2fa: Pop(1)
0x2fb: Push((float)0.5)
0x2fc: @ Sleep(Stack[-1])
0x2fd: Pop(1)
0x2fe: Return(); Pop(10)

0x2ff: Push(CvectorIndex(Stack[-5], 0))
0x300: Push(CvectorIndex(Stack[-6], 2))
0x301: @ Rotate(Stack[-2], Stack[-1])
0x302: Pop(2)
0x303: PushEmpty(cvector)
0x304: Call2 0x43a

0x305: Pop(0)
0x306: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-6]; Pop(1);
0x307: Push((int) 120)
0x308: Push((float)0.5)
0x309: @ SetTimer(Stack[-2], Stack[-1])
0x30a: Pop(2)
0x30b: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x30c: Push((int) 1)
0x30d: @ MovePoint(Stack[-1], Stack[-1], Stack[-4])
0x30e: Pop(1)
0x30f: Push(Stack[-3])
0x310: IF (Stack[-1] == 0) GOTO 0x328; Pop(1)

0x311: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x312: IF (Stack[-1] == 0) GOTO 0x315; Pop(1)

0x313: GOTO 0x32a

0x314: GOTO 0x328

0x315: PushEmpty(cvector, float)
0x316: Stack[-1] = (float) 2.61799
0x317: Call2 0x2c4

0x318: Stack[-4] = Stack[-2]
0x319: Pop(2)
0x31a: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x31b: Push((float)2500.0)
0x31c: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x31d: IF (Stack[-1] == 0) GOTO 0x327; Pop(1)

0x31e: PushEmpty(cvector)
0x31f: Call2 0x43a

0x320: Pop(0)
0x321: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x322: Push((int) 120)
0x323: Push((float)0.5)
0x324: @ SetTimer(Stack[-2], Stack[-1])
0x325: Pop(2)
0x326: GOTO 0x328

0x327: GOTO 0x32a

0x328: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x329: IF (Stack[-1] == 0) GOTO 0x30c; Pop(1)

0x32a: Return(); Pop(10)

0x32b: PushEmpty(cvector, float, cvector, float, cvector, float, cvector, float)
0x32c: Push((int) 120)
0x32d: Pop(1); Push((bool) Stack[-10] != Stack[-1])
0x32e: IF (Stack[-1] == 0) GOTO 0x330; Pop(1)

0x32f: Return(); Pop(8)

0x330: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x331: IF (Stack[-1] == 0) GOTO 0x339; Pop(1)

0x332: @ Stop()
0x333: Pop(0)
0x334: Push((int) 1)
0x335: @ KillTimer(Stack[-1])
0x336: Pop(1)
0x337: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x338: GOTO 0x35e

0x339: @ GetDirection(Stack[-4])
0x33a: Pop(0)
0x33b: Push((float)7000.0)
0x33c: @ FindDirLength(Stack[-4], Stack[-5], Stack[-1])
0x33d: Pop(1)
0x33e: PushEmpty(cvector, float)
0x33f: Stack[-1] = (float) 1.74533
0x340: Call2 0x2c4

0x341: Stack[-4] = Stack[-2]
0x342: Pop(2)
0x343: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x344: PushEmpty(bool)
0x345: Stack[-1] = (bool) 0
0x346: Push((float)2500.0)
0x347: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x348: IF (Stack[-1] == 0) GOTO 0x357; Pop(1)

0x349: PushEmpty(bool)
0x34a: Stack[-1] = (bool) 1
0x34b: Pop(0); Push(Stack[-5] * Stack[-5]);
0x34c: Push((float)2.25)
0x34d: Pop(2); Push(Stack[-2] * Stack[-1]);
0x34e: Pop(1); Push((bool) Stack[-4] >= Stack[-1])
0x34f: IF (Stack[-1] == 0) GOTO 0x355; Pop(1)

0x350: PushEmpty(bool)
0x351: Call2 0x36f

0x352: Pop(0)
0x353: IF (Stack[-1] == 0) GOTO 0x355; Pop(1)

0x354: Stack[-1] = (bool) 0
0x355: IF (Stack[-1] == 0) GOTO 0x357; Pop(1)

0x356: Stack[-1] = (bool) 1
0x357: IF (Stack[-1] == 0) GOTO 0x35e; Pop(1)

0x358: @ Stop()
0x359: Pop(0)
0x35a: PushEmpty(cvector)
0x35b: Call2 0x43a

0x35c: Pop(0)
0x35d: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x35e: Return(); Pop(8)

0x35f: @ Stop()
0x360: Pop(0)
0x361: Push((int) 120)
0x362: @ KillTimer(Stack[-1])
0x363: Pop(1)
0x364: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x365: Return(); Pop(0)

0x366: PushEmpty()
0x367: PushEmpty()
0x368: Call2 0x35f

0x369: Pop(0)
0x36a: PushEmpty(object)
0x36b: Stack[-1] = Stack[-2]
0x36c: Call2 0x571

0x36d: Pop(1)
0x36e: Return(); Pop(0)

0x36f: PushEmpty(cvector, cvector, cvector, cvector)
0x370: @ GetDirection(Stack[-2])
0x371: Pop(0)
0x372: PushEmpty(cvector, object)
0x373: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x374: Call2 0x43f

0x375: Stack[-3] = Stack[-2]
0x376: Pop(2)
0x377: PushEmpty(float, cvector, cvector)
0x378: Stack[-2] = Stack[-5]
0x379: Stack[-1] = Stack[-4]
0x37a: Call2 0x554

0x37b: Pop(2)
0x37c: Push((float)-0.34202)
0x37d: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0x37e: Return(); Pop(4)

0x37f: PushEmpty(cvector, cvector, cvector, cvector, cvector, float, cvector, cvector, cvector, cvector, cvector, float)
0x380: @ GetPosition(Stack[-6])
0x381: Pop(0)
0x382: @@ GetPosition(Stack[-5])
0x383: Pop(0)
0x384: @ GetDirection(Stack[-4])
0x385: Pop(0)
0x386: PushEmpty(cvector, cvector)
0x387: PushEmpty(cvector, cvector)
0x388: Stack[-1] = Stack[-10] - Stack[-9]; Pop(0);
0x389: Call2 0x54a

0x38a: Pop(1)
0x38b: Push((float)0.75)
0x38c: Pop(1); Push(Stack[-8] * Stack[-1]);
0x38d: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x38e: Call2 0x54a

0x38f: Stack[-5] = Stack[-2]
0x390: Pop(2)
0x391: Push((int) 32)
0x392: Push((float)7000.0)
0x393: @ FindLongestDir(Stack[-4], Stack[-3], Stack[-5], Stack[-15], Stack[-2], Stack[-1])
0x394: Pop(2)
0x395: Push((int) 100)
0x396: Stack[-2] = Stack[-2] - Stack[-1]; Pop(1);
0x397: Push((int) 0)
0x398: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x399: IF (Stack[-1] == 0) GOTO 0x39b; Pop(1)

0x39a: Stack[-1] = (int) 0
0x39b: Stack[-14] = Stack[-2] * Stack[-1]; Pop(0);
0x39c: Return(); Pop(12)

0x39d: PushEmpty(cvector, float, bool, cvector, float, cvector, float, bool, cvector, float)
0x39e: Stack[0 + Tasks[-1].StackPointer] = Stack[-11]
0x39f: PushEmpty(cvector, float)
0x3a0: Stack[-1] = (float) 1.74533
0x3a1: Call2 0x37f

0x3a2: Stack[-7] = Stack[-2]
0x3a3: Pop(2)
0x3a4: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x3a5: Push((float)2500.0)
0x3a6: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x3a7: IF (Stack[-1] == 0) GOTO 0x3ba; Pop(1)

0x3a8: PushEmpty(cvector, float)
0x3a9: Stack[-1] = (float) 2.61799
0x3aa: Call2 0x37f

0x3ab: Stack[-7] = Stack[-2]
0x3ac: Pop(2)
0x3ad: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x3ae: Push((float)2500.0)
0x3af: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x3b0: IF (Stack[-1] == 0) GOTO 0x3ba; Pop(1)

0x3b1: Push("Can't retreat, distance: ")
0x3b2: Pop(0); Push(Sqrt(Stack[-5]))
0x3b3: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3b4: @ Trace(Stack[-1])
0x3b5: Pop(1)
0x3b6: Push((float)0.5)
0x3b7: @ Sleep(Stack[-1])
0x3b8: Pop(1)
0x3b9: Return(); Pop(10)

0x3ba: Push(CvectorIndex(Stack[-5], 0))
0x3bb: Push(CvectorIndex(Stack[-6], 2))
0x3bc: @ Rotate(Stack[-2], Stack[-1])
0x3bd: Pop(2)
0x3be: PushEmpty(cvector)
0x3bf: Call2 0x43a

0x3c0: Pop(0)
0x3c1: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-6]; Pop(1);
0x3c2: Push((int) 120)
0x3c3: Push((float)0.5)
0x3c4: @ SetTimer(Stack[-2], Stack[-1])
0x3c5: Pop(2)
0x3c6: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x3c7: Push((int) 1)
0x3c8: @ MovePoint(Stack[-1], Stack[-1], Stack[-4])
0x3c9: Pop(1)
0x3ca: Push(Stack[-3])
0x3cb: IF (Stack[-1] == 0) GOTO 0x3e3; Pop(1)

0x3cc: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x3cd: IF (Stack[-1] == 0) GOTO 0x3d0; Pop(1)

0x3ce: GOTO 0x3e5

0x3cf: GOTO 0x3e3

0x3d0: PushEmpty(cvector, float)
0x3d1: Stack[-1] = (float) 2.61799
0x3d2: Call2 0x37f

0x3d3: Stack[-4] = Stack[-2]
0x3d4: Pop(2)
0x3d5: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x3d6: Push((float)2500.0)
0x3d7: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x3d8: IF (Stack[-1] == 0) GOTO 0x3e2; Pop(1)

0x3d9: PushEmpty(cvector)
0x3da: Call2 0x43a

0x3db: Pop(0)
0x3dc: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x3dd: Push((int) 120)
0x3de: Push((float)0.5)
0x3df: @ SetTimer(Stack[-2], Stack[-1])
0x3e0: Pop(2)
0x3e1: GOTO 0x3e3

0x3e2: GOTO 0x3e5

0x3e3: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x3e4: IF (Stack[-1] == 0) GOTO 0x3c7; Pop(1)

0x3e5: Return(); Pop(10)

0x3e6: PushEmpty(cvector, float, cvector, float, cvector, float, cvector, float)
0x3e7: Push((int) 120)
0x3e8: Pop(1); Push((bool) Stack[-10] != Stack[-1])
0x3e9: IF (Stack[-1] == 0) GOTO 0x3eb; Pop(1)

0x3ea: Return(); Pop(8)

0x3eb: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x3ec: IF (Stack[-1] == 0) GOTO 0x3f4; Pop(1)

0x3ed: @ Stop()
0x3ee: Pop(0)
0x3ef: Push((int) 1)
0x3f0: @ KillTimer(Stack[-1])
0x3f1: Pop(1)
0x3f2: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x3f3: GOTO 0x419

0x3f4: @ GetDirection(Stack[-4])
0x3f5: Pop(0)
0x3f6: Push((float)7000.0)
0x3f7: @ FindDirLength(Stack[-4], Stack[-5], Stack[-1])
0x3f8: Pop(1)
0x3f9: PushEmpty(cvector, float)
0x3fa: Stack[-1] = (float) 1.74533
0x3fb: Call2 0x37f

0x3fc: Stack[-4] = Stack[-2]
0x3fd: Pop(2)
0x3fe: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x3ff: PushEmpty(bool)
0x400: Stack[-1] = (bool) 0
0x401: Push((float)2500.0)
0x402: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x403: IF (Stack[-1] == 0) GOTO 0x412; Pop(1)

0x404: PushEmpty(bool)
0x405: Stack[-1] = (bool) 1
0x406: Pop(0); Push(Stack[-5] * Stack[-5]);
0x407: Push((float)2.25)
0x408: Pop(2); Push(Stack[-2] * Stack[-1]);
0x409: Pop(1); Push((bool) Stack[-4] >= Stack[-1])
0x40a: IF (Stack[-1] == 0) GOTO 0x410; Pop(1)

0x40b: PushEmpty(bool)
0x40c: Call2 0x42a

0x40d: Pop(0)
0x40e: IF (Stack[-1] == 0) GOTO 0x410; Pop(1)

0x40f: Stack[-1] = (bool) 0
0x410: IF (Stack[-1] == 0) GOTO 0x412; Pop(1)

0x411: Stack[-1] = (bool) 1
0x412: IF (Stack[-1] == 0) GOTO 0x419; Pop(1)

0x413: @ Stop()
0x414: Pop(0)
0x415: PushEmpty(cvector)
0x416: Call2 0x43a

0x417: Pop(0)
0x418: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x419: Return(); Pop(8)

0x41a: @ Stop()
0x41b: Pop(0)
0x41c: Push((int) 120)
0x41d: @ KillTimer(Stack[-1])
0x41e: Pop(1)
0x41f: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x420: Return(); Pop(0)

0x421: PushEmpty()
0x422: PushEmpty()
0x423: Call2 0x41a

0x424: Pop(0)
0x425: PushEmpty(object)
0x426: Stack[-1] = Stack[-2]
0x427: Call2 0x571

0x428: Pop(1)
0x429: Return(); Pop(0)

0x42a: PushEmpty(cvector, cvector, cvector, cvector)
0x42b: @ GetDirection(Stack[-2])
0x42c: Pop(0)
0x42d: PushEmpty(cvector, object)
0x42e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x42f: Call2 0x43f

0x430: Stack[-3] = Stack[-2]
0x431: Pop(2)
0x432: PushEmpty(float, cvector, cvector)
0x433: Stack[-2] = Stack[-5]
0x434: Stack[-1] = Stack[-4]
0x435: Call2 0x554

0x436: Pop(2)
0x437: Push((float)-0.34202)
0x438: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0x439: Return(); Pop(4)

0x43a: PushEmpty(cvector, cvector)
0x43b: @ GetPosition(Stack[-1])
0x43c: Pop(0)
0x43d: Stack[-3] = Stack[-1]
0x43e: Return(); Pop(2)

0x43f: PushEmpty(cvector, cvector, cvector, cvector)
0x440: @ GetPosition(Stack[-2])
0x441: Pop(0)
0x442: @@ GetPosition(Stack[-1])
0x443: Pop(0)
0x444: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x445: Return(); Pop(4)

0x446: PushEmpty(bool, bool)
0x447: @ IsPlayerActor(Stack[-3], Stack[-1])
0x448: Pop(0)
0x449: Stack[-4] = Stack[-1]
0x44a: Return(); Pop(2)

0x44b: PushEmpty(bool, bool)
0x44c: Push("HasProperty")
0x44d: Push((int) 2)
0x44e: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x44f: Pop(1); Push((bool) Stack[-1] == 0)
0x450: IF (Stack[-1] == 0) GOTO 0x453; Pop(1)

0x451: Stack[-5] = (bool) 0
0x452: Return(); Pop(2)

0x453: @@ HasProperty(Stack[-3], Stack[-1])
0x454: Pop(0)
0x455: Stack[-5] = Stack[-1]
0x456: Return(); Pop(2)

0x457: PushEmpty(bool, bool)
0x458: @@ IsDead(Stack[-1])
0x459: Pop(0)
0x45a: Stack[-4] = Stack[-1]
0x45b: Return(); Pop(2)

0x45c: PushEmpty(object, object, object, object)
0x45d: Pop(0); Push((bool) Stack[-5] == 0)
0x45e: IF (Stack[-1] == 0) GOTO 0x461; Pop(1)

0x45f: Stack[-6] = (bool) 0
0x460: Return(); Pop(4)

0x461: PushEmpty(bool)
0x462: Stack[-1] = (bool) 0
0x463: Push("IsDead")
0x464: Push((int) 1)
0x465: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x466: IF (Stack[-1] == 0) GOTO 0x46d; Pop(1)

0x467: PushEmpty(bool, object)
0x468: Stack[-1] = Stack[-8]
0x469: Call2 0x457

0x46a: Pop(1)
0x46b: IF (Stack[-1] == 0) GOTO 0x46d; Pop(1)

0x46c: Stack[-1] = (bool) 1
0x46d: IF (Stack[-1] == 0) GOTO 0x470; Pop(1)

0x46e: Stack[-6] = (bool) 0
0x46f: Return(); Pop(4)

0x470: @ GetScene(Stack[-2])
0x471: Pop(0)
0x472: Pop(0); Push((bool) Stack[-2] == 0)
0x473: IF (Stack[-1] == 0) GOTO 0x476; Pop(1)

0x474: Stack[-6] = (bool) 0
0x475: Return(); Pop(4)

0x476: @@ GetScene(Stack[-1])
0x477: Pop(0)
0x478: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x479: IF (Stack[-1] == 0) GOTO 0x47c; Pop(1)

0x47a: Stack[-6] = (bool) 0
0x47b: Return(); Pop(4)

0x47c: Stack[-6] = (bool) 1
0x47d: Return(); Pop(4)

0x47e: Stack[-1] = 0
0x47f: Stack[-2] = 0
0x480: PushEmpty(int, int)
0x481: PushEmpty(bool, object)
0x482: Stack[-1] = Stack[-5]
0x483: Call2 0x45c

0x484: Pop(1)
0x485: Pop(1); Push((bool) Stack[-1] == 0)
0x486: IF (Stack[-1] == 0) GOTO 0x489; Pop(1)

0x487: Stack[-4] = (bool) 0
0x488: Return(); Pop(2)

0x489: PushEmpty(bool, object, string)
0x48a: Stack[-2] = Stack[-6]
0x48b: Stack[-1] = "noaccess"
0x48c: Call2 0x44b

0x48d: Pop(2)
0x48e: Pop(1); Push((bool) Stack[-1] == 0)
0x48f: IF (Stack[-1] == 0) GOTO 0x492; Pop(1)

0x490: Stack[-4] = (bool) 1
0x491: Return(); Pop(2)

0x492: Push("noaccess")
0x493: @@ GetProperty(Stack[-1], Stack[-2])
0x494: Pop(1)
0x495: Push((int) 0)
0x496: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x497: Return(); Pop(2)

0x498: PushEmpty(bool, int, cvector, cvector, cvector, cvector, string, bool, int, cvector, cvector, cvector, cvector, string)
0x499: Pop(0); Push((bool) Stack[-15] == 0)
0x49a: IF (Stack[-1] == 0) GOTO 0x49c; Pop(1)

0x49b: Return(); Pop(14)

0x49c: @ IsDead(Stack[-7])
0x49d: Pop(0)
0x49e: Push(Stack[-7])
0x49f: IF (Stack[-1] == 0) GOTO 0x4a1; Pop(1)

0x4a0: Return(); Pop(14)

0x4a1: @ GetSecondaryAnimationType(Stack[-6])
0x4a2: Pop(0)
0x4a3: Push((int) 0)
0x4a4: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x4a5: IF (Stack[-1] == 0) GOTO 0x4a7; Pop(1)

0x4a6: Return(); Pop(14)

0x4a7: @@ GetPosition(Stack[-5])
0x4a8: Pop(0)
0x4a9: @ GetPosition(Stack[-4])
0x4aa: Pop(0)
0x4ab: @ GetDirection(Stack[-3])
0x4ac: Pop(0)
0x4ad: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0x4ae: Push(CvectorIndex(Stack[-2], 0))
0x4af: Push(CvectorIndex(Stack[-4], 0))
0x4b0: Pop(2); Push(Stack[-2] * Stack[-1]);
0x4b1: Push(CvectorIndex(Stack[-3], 2))
0x4b2: Push(CvectorIndex(Stack[-5], 2))
0x4b3: Pop(2); Push(Stack[-2] * Stack[-1]);
0x4b4: Pop(2); Push(Stack[-2] + Stack[-1]);
0x4b5: Push((int) 0)
0x4b6: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x4b7: IF (Stack[-1] == 0) GOTO 0x4ba; Pop(1)

0x4b8: Stack[-1] = "fhit"
0x4b9: GOTO 0x4bb

0x4ba: Stack[-1] = "bhit"
0x4bb: Push("hit_react")
0x4bc: Push("1")
0x4bd: Pop(1); Push(Stack[-3] + Stack[-1]);
0x4be: Push("2")
0x4bf: Pop(1); Push(Stack[-4] + Stack[-1]);
0x4c0: Push((int) -10)
0x4c1: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x4c2: Pop(4)
0x4c3: Return(); Pop(14)

0x4c4: PushEmpty(cvector, object, int, bool, cvector, cvector, int, int, cvector, cvector, object, int, bool, cvector, cvector, int, int, cvector)
0x4c5: PushEmpty(bool)
0x4c6: Stack[-1] = (bool) 0
0x4c7: PushEmpty(bool)
0x4c8: Stack[-1] = (bool) 0
0x4c9: Push(Stack[-23])
0x4ca: IF (Stack[-1] == 0) GOTO 0x4cf; Pop(1)

0x4cb: Push((int) 4)
0x4cc: Pop(1); Push((bool) Stack[-23] != Stack[-1])
0x4cd: IF (Stack[-1] == 0) GOTO 0x4cf; Pop(1)

0x4ce: Stack[-1] = (bool) 1
0x4cf: IF (Stack[-1] == 0) GOTO 0x4d4; Pop(1)

0x4d0: Push((int) 5)
0x4d1: Pop(1); Push((bool) Stack[-22] != Stack[-1])
0x4d2: IF (Stack[-1] == 0) GOTO 0x4d4; Pop(1)

0x4d3: Stack[-1] = (bool) 1
0x4d4: IF (Stack[-1] == 0) GOTO 0x503; Pop(1)

0x4d5: PushEmpty(cvector, cvector)
0x4d6: PushEmpty(cvector, object)
0x4d7: Stack[-1] = Stack[-25]
0x4d8: Call2 0x43f

0x4d9: Stack[-3] = Stack[-2]
0x4da: Pop(2)
0x4db: Call2 0x54a

0x4dc: Stack[-11] = Stack[-2]
0x4dd: Pop(2)
0x4de: @ CreateVectorVector(Stack[-8])
0x4df: Pop(0)
0x4e0: Stack[-7] = (int) 1
0x4e1: Push("hit")
0x4e2: Pop(1); Push(Stack[-1] + Stack[-8]);
0x4e3: @ GetGeometryLocator(Stack[-1], Stack[-7], Stack[-6], Stack[-5])
0x4e4: Pop(1)
0x4e5: Pop(0); Push((bool) Stack[-6] == 0)
0x4e6: IF (Stack[-1] == 0) GOTO 0x4e8; Pop(1)

0x4e7: GOTO 0x4f1

0x4e8: Pop(0); Push(Stack[-4] | Stack[-9]);
0x4e9: Push((float)0.70711)
0x4ea: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x4eb: IF (Stack[-1] == 0) GOTO 0x4ee; Pop(1)

0x4ec: @@ add(Stack[-5])
0x4ed: Pop(0)
0x4ee: Push((int) 1)
0x4ef: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x4f0: GOTO 0x4e1

0x4f1: @@ size(Stack[-3])
0x4f2: Pop(0)
0x4f3: Push(Stack[-3])
0x4f4: IF (Stack[-1] == 0) GOTO 0x502; Pop(1)

0x4f5: @ irand(Stack[-2], Stack[-3])
0x4f6: Pop(0)
0x4f7: @@ get(Stack[-1], Stack[-2])
0x4f8: Pop(0)
0x4f9: PushEmpty(object, int, float, cvector, cvector)
0x4fa: Stack[-5] = Stack[-26]
0x4fb: Stack[-4] = Stack[-25]
0x4fc: Stack[-3] = Stack[-24]
0x4fd: Stack[-2] = Stack[-6]
0x4fe: Stack[-1] = -Stack[-14]; Pop(0);
0x4ff: Call2 0x508

0x500: Pop(5)
0x501: Return(); Pop(18)

0x502: Stack[-8] = 0
0x503: PushEmpty(object)
0x504: Stack[-1] = Stack[-22]
0x505: Call2 0x498

0x506: Pop(1)
0x507: Return(); Pop(18)

0x508: PushEmpty(object, object, object, object)
0x509: @ GetScene(Stack[-2])
0x50a: Pop(0)
0x50b: Push("scripted")
0x50c: Push("blood_dir.xml")
0x50d: @ AddActorByType(Stack[-3], Stack[-2], Stack[-4], Stack[-8], Stack[-7], Stack[-1])
0x50e: Pop(2)
0x50f: PushEmpty(object)
0x510: Stack[-1] = Stack[-10]
0x511: Call2 0x498

0x512: Pop(1)
0x513: Return(); Pop(4)

0x514: Stack[-1] = 0
0x515: Stack[-2] = 0
0x516: PushEmpty(bool, bool)
0x517: @ IsLoaded(Stack[-1])
0x518: Pop(0)
0x519: Stack[-3] = Stack[-1]
0x51a: Return(); Pop(2)

0x51b: PushEmpty(bool, int, bool, int, bool, float, cvector, cvector, bool, int, bool, int, bool, float, cvector, cvector)
0x51c: @ IsExisting3DSound(Stack[-8], Stack[-17])
0x51d: Pop(0)
0x51e: Pop(0); Push((bool) Stack[-8] == 0)
0x51f: IF (Stack[-1] == 0) GOTO 0x534; Pop(1)

0x520: Stack[-7] = (int) 0
0x521: Push((int) 1)
0x522: Pop(1); Push(Stack[-8] + Stack[-1]);
0x523: Pop(1); Push(Stack[-18] + Stack[-1]);
0x524: @ IsExisting3DSound(Stack[-7], Stack[-1])
0x525: Pop(1)
0x526: Pop(0); Push((bool) Stack[-6] == 0)
0x527: IF (Stack[-1] == 0) GOTO 0x529; Pop(1)

0x528: GOTO 0x52c

0x529: Push((int) 1)
0x52a: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x52b: GOTO 0x521

0x52c: Pop(0); Push((bool) Stack[-7] == 0)
0x52d: IF (Stack[-1] == 0) GOTO 0x52f; Pop(1)

0x52e: Return(); Pop(16)

0x52f: @ irand(Stack[-5], Stack[-7])
0x530: Pop(0)
0x531: Push((int) 1)
0x532: Pop(1); Push(Stack[-6] + Stack[-1]);
0x533: Stack[-18] = Stack[-18] + Stack[-1]; Pop(1);
0x534: @ Is3DSoundLoaded(Stack[-4], Stack[-17])
0x535: Pop(0)
0x536: Push(Stack[-4])
0x537: IF (Stack[-1] == 0) GOTO 0x543; Pop(1)

0x538: @ GetEyesHeight(Stack[-3])
0x539: Pop(0)
0x53a: @ GetDirection(Stack[-2])
0x53b: Pop(0)
0x53c: Push((int) 50)
0x53d: Stack[-2] = Stack[-3] * Stack[-1]; Pop(1);
0x53e: Push(CvectorIndex(Stack[-1], 1))
0x53f: Stack[-1] = Stack[-1] + Stack[-4]; Pop(0);
0x540: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x541: @ PlayGlobalSound(Stack[-17], Stack[-1])
0x542: Pop(0)
0x543: Return(); Pop(16)

0x544: PushEmpty(object, object)
0x545: @ self(Stack[-1])
0x546: Pop(0)
0x547: Stack[-3] = Stack[-1]
0x548: Return(); Pop(2)

0x549: Stack[-1] = 0
0x54a: PushEmpty(float, float)
0x54b: Pop(0); Push(Stack[-3] | Stack[-3]);
0x54c: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x54d: Push((float)0.0)
0x54e: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x54f: IF (Stack[-1] == 0) GOTO 0x552; Pop(1)

0x550: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x551: Return(); Pop(2)

0x552: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x553: Return(); Pop(2)

0x554: PushEmpty()
0x555: Pop(0); Push(Stack[-2] | Stack[-1]);
0x556: Pop(0); Push(Stack[-3] | Stack[-3]);
0x557: Pop(0); Push(Stack[-3] | Stack[-3]);
0x558: Pop(2); Push(Stack[-2] * Stack[-1]);
0x559: Pop(1); Push(Sqrt(Stack[-1]))
0x55a: Stack[-5] = Stack[-2] / Stack[-1]; Pop(2);
0x55b: Return(); Pop(0)

0x55c: PushEmpty()
0x55d: PushEmpty(object)
0x55e: Stack[-1] = Stack[-2]
0x55f: Push(-1, 0); TaskCall(1)
0x560: Call2 0xd

0x561: Pop(-1, 0); TaskReturn
0x562: Pop(1)
0x563: Return(); Pop(0)

0x564: PushEmpty(float, float)
0x565: Push("health")
0x566: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x567: IF (Stack[-1] == 0) GOTO 0x570; Pop(1)

0x568: Push("health")
0x569: @ GetProperty(Stack[-1], Stack[-2])
0x56a: Pop(1)
0x56b: Push((int) 0)
0x56c: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x56d: IF (Stack[-1] == 0) GOTO 0x570; Pop(1)

0x56e: @ SignalDeath(Stack[-4])
0x56f: Pop(0)
0x570: Return(); Pop(2)

0x571: PushEmpty()
0x572: PushEmpty(object)
0x573: Stack[-1] = Stack[-2]
0x574: Call2 0x55c

0x575: Pop(1)
0x576: Return(); Pop(0)

0x577: PushEmpty()
0x578: PushEmpty(object, int, float)
0x579: Stack[-3] = Stack[-7]
0x57a: Stack[-2] = Stack[-6]
0x57b: Stack[-1] = Stack[-5]
0x57c: Call2 0x4c4

0x57d: Pop(3)
0x57e: Return(); Pop(0)

0x57f: PushEmpty()
0x580: PushEmpty(object, int, float, cvector, cvector)
0x581: Stack[-5] = Stack[-11]
0x582: Stack[-4] = Stack[-10]
0x583: Stack[-3] = Stack[-9]
0x584: Stack[-2] = Stack[-7]
0x585: Stack[-1] = Stack[-6]
0x586: Call2 0x508

0x587: Pop(5)
0x588: Return(); Pop(0)

0x589: PushEmpty()
0x58a: Push("unholster")
0x58b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x58c: IF (Stack[-1] == 0) GOTO 0x594; Pop(1)

0x58d: PushEmpty(bool, object)
0x58e: Stack[-1] = Stack[-4]
0x58f: Call2 0x65c

0x590: Stack[-5] = Stack[-2]
0x591: Pop(2)
0x592: Return(); Pop(0)

0x593: GOTO 0x5a7

0x594: Push("player_shot")
0x595: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x596: IF (Stack[-1] == 0) GOTO 0x59e; Pop(1)

0x597: PushEmpty(bool, object)
0x598: Stack[-1] = Stack[-4]
0x599: Call2 0x661

0x59a: Stack[-5] = Stack[-2]
0x59b: Pop(2)
0x59c: Return(); Pop(0)

0x59d: GOTO 0x5a7

0x59e: Push("battle")
0x59f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5a0: IF (Stack[-1] == 0) GOTO 0x5a7; Pop(1)

0x5a1: PushEmpty(bool, object)
0x5a2: Stack[-1] = Stack[-4]
0x5a3: Call2 0x666

0x5a4: Stack[-5] = Stack[-2]
0x5a5: Pop(2)
0x5a6: Return(); Pop(0)

0x5a7: Stack[-3] = (bool) 0
0x5a8: Return(); Pop(0)

0x5a9: PushEmpty()
0x5aa: Push("unholster")
0x5ab: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5ac: IF (Stack[-1] == 0) GOTO 0x5b2; Pop(1)

0x5ad: PushEmpty(object)
0x5ae: Stack[-1] = Stack[-3]
0x5af: Call2 0x65f

0x5b0: Pop(1)
0x5b1: GOTO 0x5c1

0x5b2: Push("player_shot")
0x5b3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5b4: IF (Stack[-1] == 0) GOTO 0x5ba; Pop(1)

0x5b5: PushEmpty(object)
0x5b6: Stack[-1] = Stack[-3]
0x5b7: Call2 0x664

0x5b8: Pop(1)
0x5b9: GOTO 0x5c1

0x5ba: Push("battle")
0x5bb: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5bc: IF (Stack[-1] == 0) GOTO 0x5c1; Pop(1)

0x5bd: PushEmpty(object)
0x5be: Stack[-1] = Stack[-3]
0x5bf: Call2 0x669

0x5c0: Pop(1)
0x5c1: Return(); Pop(0)

0x5c2: PushEmpty(bool, bool)
0x5c3: PushEmpty(bool)
0x5c4: Stack[-1] = (bool) 0
0x5c5: PushEmpty(bool, object)
0x5c6: Stack[-1] = Stack[-6]
0x5c7: Call2 0x65c

0x5c8: Pop(1)
0x5c9: IF (Stack[-1] == 0) GOTO 0x5d0; Pop(1)

0x5ca: PushEmpty(bool, object)
0x5cb: Stack[-1] = Stack[-6]
0x5cc: Call2 0x446

0x5cd: Pop(1)
0x5ce: IF (Stack[-1] == 0) GOTO 0x5d0; Pop(1)

0x5cf: Stack[-1] = (bool) 1
0x5d0: IF (Stack[-1] == 0) GOTO 0x5d7; Pop(1)

0x5d1: @@ IsWeaponHolstered(Stack[-1])
0x5d2: Pop(0)
0x5d3: Pop(0); Push((bool) Stack[-1] == 0)
0x5d4: IF (Stack[-1] == 0) GOTO 0x5d7; Pop(1)

0x5d5: Stack[-4] = (bool) 1
0x5d6: Return(); Pop(2)

0x5d7: Stack[-4] = (bool) 0
0x5d8: Return(); Pop(2)

0x5d9: PushEmpty()
0x5da: PushEmpty(object)
0x5db: Stack[-1] = Stack[-2]
0x5dc: Call2 0x65f

0x5dd: Pop(1)
0x5de: Return(); Pop(0)

0x5df: PushEmpty()
0x5e0: PushEmpty(bool, object)
0x5e1: Stack[-1] = Stack[-3]
0x5e2: Call2 0x446

0x5e3: Pop(1)
0x5e4: IF (Stack[-1] == 0) GOTO 0x5eb; Pop(1)

0x5e5: PushEmpty(object)
0x5e6: Call2 0x544

0x5e7: Pop(0)
0x5e8: Push((float)0.0)
0x5e9: @ ReportReputationChange(Stack[-3], Stack[-2], Stack[-1])
0x5ea: Pop(2)
0x5eb: Return(); Pop(0)

0x5ec: PushEmpty(object, object)
0x5ed: Push("heal")
0x5ee: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x5ef: IF (Stack[-1] == 0) GOTO 0x5fa; Pop(1)

0x5f0: Push("player")
0x5f1: @ FindActor(Stack[-2], Stack[-1])
0x5f2: Pop(1)
0x5f3: PushEmpty(bool, object)
0x5f4: Stack[-1] = Stack[-3]
0x5f5: Call2 0x66b

0x5f6: Stack[-6] = Stack[-2]
0x5f7: Pop(2)
0x5f8: Return(); Pop(2)

0x5f9: Stack[-1] = 0
0x5fa: Stack[-4] = (bool) 0
0x5fb: Return(); Pop(2)

0x5fc: PushEmpty(object, object)
0x5fd: Push("heal")
0x5fe: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x5ff: IF (Stack[-1] == 0) GOTO 0x608; Pop(1)

0x600: Push("player")
0x601: @ FindActor(Stack[-2], Stack[-1])
0x602: Pop(1)
0x603: PushEmpty(object)
0x604: Stack[-1] = Stack[-2]
0x605: Call2 0x66e

0x606: Pop(1)
0x607: Stack[-1] = 0
0x608: Return(); Pop(2)

0x609: PushEmpty(string, string)
0x60a: Stack[-1] = "idle"
0x60b: Push(Stack[-3])
0x60c: IF (Stack[-1] == 0) GOTO 0x60e; Pop(1)

0x60d: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x60e: Stack[-4] = Stack[-1]
0x60f: Return(); Pop(2)

0x610: PushEmpty(int, bool, int, bool)
0x611: Stack[-2] = (int) 0
0x612: Push("all")
0x613: PushEmpty(string, int)
0x614: Stack[-1] = Stack[-5]
0x615: Call2 0x609

0x616: Pop(1)
0x617: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x618: Pop(2)
0x619: Pop(0); Push((bool) Stack[-1] == 0)
0x61a: IF (Stack[-1] == 0) GOTO 0x61c; Pop(1)

0x61b: GOTO 0x61f

0x61c: Push((int) 1)
0x61d: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x61e: GOTO 0x612

0x61f: Stack[-5] = Stack[-2]
0x620: Return(); Pop(4)

0x621: PushEmpty()
0x622: PushEmpty(bool, object)
0x623: Stack[-1] = Stack[-3]
0x624: Call2 0x480

0x625: Pop(1)
0x626: IF (Stack[-1] == 0) GOTO 0x629; Pop(1)

0x627: Stack[-2] = (int) 2
0x628: GOTO 0x62a

0x629: Stack[-2] = (int) 0
0x62a: Return(); Pop(0)

0x62b: PushEmpty()
0x62c: PushEmpty(object)
0x62d: Stack[-1] = Stack[-2]
0x62e: Push(-1, 3); TaskCall(4)
0x62f: Call2 0x2e2

0x630: Pop(-1, 3); TaskReturn
0x631: Pop(1)
0x632: Return(); Pop(0)

0x633: PushEmpty()
0x634: PushEmpty(bool, object)
0x635: Stack[-1] = Stack[-4]
0x636: Call2 0x480

0x637: Pop(1)
0x638: IF (Stack[-1] == 0) GOTO 0x63b; Pop(1)

0x639: Stack[-3] = (int) 2
0x63a: GOTO 0x63c

0x63b: Stack[-3] = (int) 0
0x63c: Return(); Pop(0)

0x63d: PushEmpty()
0x63e: PushEmpty(object)
0x63f: Stack[-1] = Stack[-2]
0x640: Push(-1, 3); TaskCall(5)
0x641: Call2 0x39d

0x642: Pop(-1, 3); TaskReturn
0x643: Pop(1)
0x644: Return(); Pop(0)

0x645: PushEmpty()
0x646: Stack[-2] = (int) 0
0x647: Return(); Pop(0)

0x648: PushEmpty()
0x649: Return(); Pop(0)

0x64a: PushEmpty()
0x64b: Return(); Pop(0)

0x64c: PushEmpty()
0x64d: Push(-0, 0); TaskCall(0)
0x64e: Call2 0x0

0x64f: Pop(-0, 0); TaskReturn
0x650: Pop(0)
0x651: Return(); Pop(0)

0x652: PushEmpty()
0x653: Stack[-2] = (int) 0
0x654: Return(); Pop(0)

0x655: PushEmpty()
0x656: Return(); Pop(0)

0x657: PushEmpty()
0x658: Stack[-3] = (int) 0
0x659: Return(); Pop(0)

0x65a: PushEmpty()
0x65b: Return(); Pop(0)

0x65c: PushEmpty()
0x65d: Stack[-2] = (bool) 0
0x65e: Return(); Pop(0)

0x65f: PushEmpty()
0x660: Return(); Pop(0)

0x661: PushEmpty()
0x662: Stack[-2] = (bool) 0
0x663: Return(); Pop(0)

0x664: PushEmpty()
0x665: Return(); Pop(0)

0x666: PushEmpty()
0x667: Stack[-2] = (bool) 0
0x668: Return(); Pop(0)

0x669: PushEmpty()
0x66a: Return(); Pop(0)

0x66b: PushEmpty()
0x66c: Stack[-2] = (bool) 0
0x66d: Return(); Pop(0)

0x66e: PushEmpty()
0x66f: Return(); Pop(0)

0x670: Return(); Pop(0)

0x671: PushEmpty()
0x672: Stack[-4] = (bool) 1
0x673: Return(); Pop(0)

