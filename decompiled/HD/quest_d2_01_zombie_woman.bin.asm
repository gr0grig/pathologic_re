GlobalVarCount = 1
	G_VAR_0 bool 

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
	dattack_begin
	dattack_end
	zwalk
	GetPFPosition
	run
	HasProperty
	HasProperty
	GetProperty
	SetProperty
	disease
	armor_disease
	immunity
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
	KillTimer (1 args)
	ResetAAS (0 args)
	IsPlayerActor (2 args)
	SetTimer (2 args)
	rand (2 args)
	Sleep (1 args)
	GetRandomPFPointInCircle (4 args)
	RotatePath (2 args)
	FollowPath (3 args)
	GetCameraFarDistance (1 args)
	RequestClearPath (1 args)
	StopGroup0 (0 args)
	FindShiftedPathTo (2 args)
	irand (2 args)
	WaitForAnimEnd (1 args)
	Sleep (2 args)
	StopAnimation (0 args)
	Face (1 args)
	FindPathTo (2 args)
	FollowPath (5 args)
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
	SendWorldWndMessage (1 args)
	CreateFloatVector (1 args)
	SendWorldWndMessage (2 args)
	GetProperty (2 args)
	SignalDeath (1 args)
	ReportReputationChange (3 args)
	FindActor (2 args)
	HasAnimation (3 args)
	SetRTEnvelope (2 args)
	RemoveActor (1 args)

RunOp = 0x9c
RunTask = 1

GlobalTasks: 
	GTASK_0  Params = 1
		EVENT_0 Op = 0xf Vars = (object)
		EVENT_6 Op = 0x1d Vars = ()
		EVENT_22 Op = 0x96 Vars = (object, int, float, float)
		EVENT_16 Op = 0x98 Vars = (object, string)
		EVENT_41 Op = 0x9a Vars = (object)
	GTASK_1 Vars = (bool, bool, bool) Params = 0
		EVENT_0 Op = 0xb4 Vars = (object)
		EVENT_17 Op = 0xc8 Vars = (object)
		EVENT_30 Op = 0xe0 Vars = (object, object, bool)
		EVENT_40 Op = 0xfc Vars = (object)
		EVENT_42 Op = 0x110 Vars = (object, string)
		EVENT_26 Op = 0x135 Vars = (string)
		EVENT_1 Op = 0x143 Vars = (object)
		EVENT_3 Op = 0x156 Vars = (object)
		EVENT_7 Op = 0x15c Vars = (int)
		EVENT_6 Op = 0x168 Vars = ()
		EVENT_41 Op = 0x17f Vars = (object)
		EVENT_10 Op = 0x1f0 Vars = (object)
		EVENT_28 Op = 0x1f4 Vars = ()
	GTASK_2  Params = 0
		EVENT_0 Op = 0x20d Vars = (object)
		EVENT_17 Op = 0x221 Vars = (object)
		EVENT_30 Op = 0x239 Vars = (object, object, bool)
		EVENT_40 Op = 0x255 Vars = (object)
		EVENT_42 Op = 0x269 Vars = (object, string)
		EVENT_26 Op = 0x28e Vars = (string)
		EVENT_6 Op = 0x29c Vars = ()
		EVENT_1 Op = 0x2a3 Vars = (object)
	GTASK_3  Params = 1
		EVENT_17 Op = 0x312 Vars = (object)
		EVENT_26 Op = 0x32a Vars = (string)
		EVENT_6 Op = 0x338 Vars = ()
		EVENT_41 Op = 0x375 Vars = (object)
	GTASK_4 Vars = (bool, object) Params = 2
		EVENT_17 Op = 0x37e Vars = (object)
		EVENT_26 Op = 0x396 Vars = (string)
		EVENT_6 Op = 0x3a4 Vars = ()
		EVENT_7 Op = 0x41e Vars = (int)
		EVENT_10 Op = 0x430 Vars = (object)
		EVENT_41 Op = 0x43b Vars = (object)

Events:
EVENT_16 Op = 0x60f Vars = (object, string)
EVENT_41 Op = 0x61c Vars = (object)
EVENT_22 Op = 0x622 Vars = (object, int, float, float)
EVENT_43 Op = 0x62a Vars = (object, int, float, float, cvector, cvector)

0x0: PushEmpty()
0x1: EventDisable(0)
0x2: PushEmpty(object)
0x3: Stack[-1] = Stack[-2]
0x4: Call2 0x21

0x5: Pop(1)
0x6: PushEmpty(object)
0x7: Stack[-1] = Stack[-2]
0x8: Call2 0x715

0x9: Pop(1)
0xa: EventEnable(0)
0xb: @ Hold()
0xc: Pop(0)
0xd: GOTO 0xb

0xe: Return(); Pop(0)

0xf: PushEmpty(int, int)
0x10: PushEmpty(int, object)
0x11: Stack[-1] = Stack[-5]
0x12: Call2 0x6e1

0x13: Stack[-3] = Stack[-2]
0x14: Pop(2)
0x15: Push((int) 0)
0x16: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x17: IF (Stack[-1] == 0) GOTO 0x1c; Pop(1)

0x18: PushEmpty(object)
0x19: Stack[-1] = Stack[-4]
0x1a: Call2 0x6e4

0x1b: Pop(1)
0x1c: Return(); Pop(2)

0x1d: PushEmpty()
0x1e: Call2 0x728

0x1f: Pop(0)
0x20: Return(); Pop(0)

0x21: PushEmpty(cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector, cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector)
0x22: Pop(0); Push((bool) Stack[-21] == 0)
0x23: IF (Stack[-1] == 0) GOTO 0x29; Pop(1)

0x24: PushEmpty(string)
0x25: Stack[-1] = "fdie"
0x26: Call2 0x7c

0x27: Pop(1)
0x28: GOTO 0x7b

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
0x65: PushEmpty(string)
0x66: Stack[-1] = Stack[-7]
0x67: Call2 0x58c

0x68: Pop(1)
0x69: Push("all")
0x6a: @ PlayAnimation(Stack[-1], Stack[-7])
0x6b: Pop(1)
0x6c: @ WaitForAnimEnd()
0x6d: Pop(0)
0x6e: Push(Stack[-3])
0x6f: IF (Stack[-1] == 0) GOTO 0x75; Pop(1)

0x70: @ StopAsync()
0x71: Pop(0)
0x72: Push("head")
0x73: @ UnlookAsync(Stack[-1])
0x74: Pop(1)
0x75: Push("all")
0x76: @ LockAnimationEnd(Stack[-1], Stack[-7])
0x77: Pop(1)
0x78: @ RemoveEnvelope()
0x79: Pop(0)
0x7a: Stack[-5] = 0
0x7b: Return(); Pop(20)

0x7c: PushEmpty()
0x7d: @ RemoveRTEnvelope()
0x7e: Pop(0)
0x7f: @ SetDeathState()
0x80: Pop(0)
0x81: @ Stop()
0x82: Pop(0)
0x83: @ StopAsync()
0x84: Pop(0)
0x85: @ StopSecondaryAnimation()
0x86: Pop(0)
0x87: PushEmpty(string)
0x88: Stack[-1] = Stack[-2]
0x89: Call2 0x58c

0x8a: Pop(1)
0x8b: Push("all")
0x8c: @ PlayAnimation(Stack[-1], Stack[-2])
0x8d: Pop(1)
0x8e: @ WaitForAnimEnd()
0x8f: Pop(0)
0x90: Push("all")
0x91: @ LockAnimationEnd(Stack[-1], Stack[-2])
0x92: Pop(1)
0x93: @ RemoveEnvelope()
0x94: Pop(0)
0x95: Return(); Pop(0)

0x96: PushEmpty()
0x97: Return(); Pop(0)

0x98: PushEmpty()
0x99: Return(); Pop(0)

0x9a: PushEmpty()
0x9b: Return(); Pop(0)

0x9c: Push((bool) 1)
0x9d: @ SensePlayerOnly(Stack[-1])
0x9e: Pop(1)
0x9f: PushEmpty()
0xa0: Call2 0x704

0xa1: Pop(0)
0xa2: PushEmpty()
0xa3: Call2 0xab

0xa4: Pop(0)
0xa5: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0xa6: PushEmpty()
0xa7: Call2 0x1b0

0xa8: Pop(0)
0xa9: GOTO 0xa5

0xaa: Return(); Pop(0)

0xab: PushEmpty(bool)
0xac: Call2 0x587

0xad: Pop(0)
0xae: Pop(1); Push((bool) Stack[-1] == 0)
0xaf: IF (Stack[-1] == 0) GOTO 0xb3; Pop(1)

0xb0: PushEmpty()
0xb1: Call2 0x728

0xb2: Pop(0)
0xb3: Return(); Pop(0)

0xb4: PushEmpty(int, int)
0xb5: PushEmpty(int, object)
0xb6: Stack[-1] = Stack[-5]
0xb7: Call2 0x6e1

0xb8: Stack[-3] = Stack[-2]
0xb9: Pop(2)
0xba: Push((int) 0)
0xbb: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xbc: IF (Stack[-1] == 0) GOTO 0xc7; Pop(1)

0xbd: Push((int) 1)
0xbe: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xbf: IF (Stack[-1] == 0) GOTO 0xc3; Pop(1)

0xc0: PushEmpty()
0xc1: Call2 0x16f

0xc2: Pop(0)
0xc3: PushEmpty(object)
0xc4: Stack[-1] = Stack[-4]
0xc5: Call2 0x6e4

0xc6: Pop(1)
0xc7: Return(); Pop(2)

0xc8: PushEmpty(int, int)
0xc9: PushEmpty(object)
0xca: Stack[-1] = Stack[-4]
0xcb: Call2 0x68a

0xcc: Pop(1)
0xcd: PushEmpty(int, object)
0xce: Stack[-1] = Stack[-5]
0xcf: Call2 0x6d7

0xd0: Stack[-3] = Stack[-2]
0xd1: Pop(2)
0xd2: Push((int) 0)
0xd3: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xd4: IF (Stack[-1] == 0) GOTO 0xdf; Pop(1)

0xd5: Push((int) 1)
0xd6: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xd7: IF (Stack[-1] == 0) GOTO 0xdb; Pop(1)

0xd8: PushEmpty()
0xd9: Call2 0x16f

0xda: Pop(0)
0xdb: PushEmpty(object)
0xdc: Stack[-1] = Stack[-4]
0xdd: Call2 0x6da

0xde: Pop(1)
0xdf: Return(); Pop(2)

0xe0: PushEmpty(int, int)
0xe1: PushEmpty(bool, object, object, bool)
0xe2: Stack[-3] = Stack[-9]
0xe3: Stack[-2] = Stack[-8]
0xe4: Stack[-1] = Stack[-7]
0xe5: Call2 0x712

0xe6: Pop(3)
0xe7: IF (Stack[-1] == 0) GOTO 0xfb; Pop(1)

0xe8: PushEmpty(int, object, bool)
0xe9: Stack[-2] = Stack[-8]
0xea: Stack[-1] = Stack[-6]
0xeb: Call2 0x6dc

0xec: Stack[-4] = Stack[-3]
0xed: Pop(3)
0xee: Push((int) 0)
0xef: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xf0: IF (Stack[-1] == 0) GOTO 0xfb; Pop(1)

0xf1: Push((int) 1)
0xf2: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xf3: IF (Stack[-1] == 0) GOTO 0xf7; Pop(1)

0xf4: PushEmpty()
0xf5: Call2 0x16f

0xf6: Pop(0)
0xf7: PushEmpty(object)
0xf8: Stack[-1] = Stack[-6]
0xf9: Call2 0x6df

0xfa: Pop(1)
0xfb: Return(); Pop(2)

0xfc: PushEmpty(int, int)
0xfd: PushEmpty(int, object)
0xfe: Stack[-1] = Stack[-5]
0xff: Call2 0x6e6

0x100: Stack[-3] = Stack[-2]
0x101: Pop(2)
0x102: Push((int) 0)
0x103: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x104: IF (Stack[-1] == 0) GOTO 0x10f; Pop(1)

0x105: Push((int) 1)
0x106: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x107: IF (Stack[-1] == 0) GOTO 0x10b; Pop(1)

0x108: PushEmpty()
0x109: Call2 0x16f

0x10a: Pop(0)
0x10b: PushEmpty(object)
0x10c: Stack[-1] = Stack[-4]
0x10d: Call2 0x6e9

0x10e: Pop(1)
0x10f: Return(); Pop(2)

0x110: PushEmpty(int, int)
0x111: PushEmpty(bool, object, string)
0x112: Stack[-2] = Stack[-7]
0x113: Stack[-1] = Stack[-6]
0x114: Call2 0x634

0x115: Pop(2)
0x116: IF (Stack[-1] == 0) GOTO 0x120; Pop(1)

0x117: PushEmpty()
0x118: Call2 0x16f

0x119: Pop(0)
0x11a: PushEmpty(object, string)
0x11b: Stack[-2] = Stack[-6]
0x11c: Stack[-1] = Stack[-5]
0x11d: Call2 0x654

0x11e: Pop(2)
0x11f: GOTO 0x134

0x120: PushEmpty(int, string, object)
0x121: Stack[-2] = Stack[-6]
0x122: Stack[-1] = Stack[-7]
0x123: Call2 0x6eb

0x124: Stack[-4] = Stack[-3]
0x125: Pop(3)
0x126: Push((int) 0)
0x127: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x128: IF (Stack[-1] == 0) GOTO 0x134; Pop(1)

0x129: Push((int) 1)
0x12a: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x12b: IF (Stack[-1] == 0) GOTO 0x12f; Pop(1)

0x12c: PushEmpty()
0x12d: Call2 0x16f

0x12e: Pop(0)
0x12f: PushEmpty(string, object)
0x130: Stack[-2] = Stack[-5]
0x131: Stack[-1] = Stack[-6]
0x132: Call2 0x6ee

0x133: Pop(2)
0x134: Return(); Pop(2)

0x135: PushEmpty()
0x136: PushEmpty(bool, string)
0x137: Stack[-1] = Stack[-3]
0x138: Call2 0x697

0x139: Pop(1)
0x13a: IF (Stack[-1] == 0) GOTO 0x142; Pop(1)

0x13b: PushEmpty()
0x13c: Call2 0x16f

0x13d: Pop(0)
0x13e: PushEmpty(string)
0x13f: Stack[-1] = Stack[-2]
0x140: Call2 0x6a7

0x141: Pop(1)
0x142: Return(); Pop(0)

0x143: PushEmpty()
0x144: PushEmpty(bool, object)
0x145: Stack[-1] = Stack[-3]
0x146: Call2 0x66d

0x147: Pop(1)
0x148: IF (Stack[-1] == 0) GOTO 0x151; Pop(1)

0x149: PushEmpty()
0x14a: Call2 0x16f

0x14b: Pop(0)
0x14c: PushEmpty(object)
0x14d: Stack[-1] = Stack[-2]
0x14e: Call2 0x684

0x14f: Pop(1)
0x150: GOTO 0x155

0x151: PushEmpty(object)
0x152: Stack[-1] = Stack[-2]
0x153: Call2 0x188

0x154: Pop(1)
0x155: Return(); Pop(0)

0x156: PushEmpty()
0x157: PushEmpty(object)
0x158: Stack[-1] = Stack[-2]
0x159: Call2 0x188

0x15a: Pop(1)
0x15b: Return(); Pop(0)

0x15c: PushEmpty()
0x15d: Push((int) 110)
0x15e: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x15f: IF (Stack[-1] == 0) GOTO 0x161; Pop(1)

0x160: Return(); Pop(0)

0x161: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x162: Push((int) 110)
0x163: @ KillTimer(Stack[-1])
0x164: Pop(1)
0x165: @ ResetAAS()
0x166: Pop(0)
0x167: Return(); Pop(0)

0x168: PushEmpty()
0x169: Call2 0x16f

0x16a: Pop(0)
0x16b: PushEmpty()
0x16c: Call2 0x728

0x16d: Pop(0)
0x16e: Return(); Pop(0)

0x16f: Push((int) 110)
0x170: @ KillTimer(Stack[-1])
0x171: Pop(1)
0x172: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x173: PushEmpty()
0x174: Call2 0x1f7

0x175: Pop(0)
0x176: Return(); Pop(0)

0x177: Push((int) 110)
0x178: @ KillTimer(Stack[-1])
0x179: Pop(1)
0x17a: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x17b: PushEmpty()
0x17c: Call2 0x1fe

0x17d: Pop(0)
0x17e: Return(); Pop(0)

0x17f: PushEmpty()
0x180: PushEmpty()
0x181: Call2 0x16f

0x182: Pop(0)
0x183: PushEmpty(object)
0x184: Stack[-1] = Stack[-2]
0x185: Call2 0x61c

0x186: Pop(1)
0x187: Return(); Pop(0)

0x188: PushEmpty(bool, int, bool, int)
0x189: PushEmpty(bool, object)
0x18a: Stack[-1] = Stack[-7]
0x18b: Call2 0x4f1

0x18c: Pop(1)
0x18d: Pop(1); Push((bool) Stack[-1] == 0)
0x18e: IF (Stack[-1] == 0) GOTO 0x190; Pop(1)

0x18f: Return(); Pop(4)

0x190: Push( Stack[2 + Tasks[-1].StackPointer] )
0x191: IF (Stack[-1] == 0) GOTO 0x193; Pop(1)

0x192: Return(); Pop(4)

0x193: @ IsPlayerActor(Stack[-5], Stack[-2])
0x194: Pop(0)
0x195: Pop(0); Push((bool) Stack[-2] == 0)
0x196: IF (Stack[-1] == 0) GOTO 0x198; Pop(1)

0x197: Return(); Pop(4)

0x198: PushEmpty(int, object)
0x199: Stack[-1] = Stack[-7]
0x19a: Call2 0x6cc

0x19b: Stack[-3] = Stack[-2]
0x19c: Pop(2)
0x19d: Push((int) 0)
0x19e: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x19f: IF (Stack[-1] == 0) GOTO 0x1af; Pop(1)

0x1a0: Push((int) 1)
0x1a1: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x1a2: IF (Stack[-1] == 0) GOTO 0x1a6; Pop(1)

0x1a3: PushEmpty()
0x1a4: Call2 0x177

0x1a5: Pop(0)
0x1a6: PushEmpty(object)
0x1a7: Stack[-1] = Stack[-6]
0x1a8: Call2 0x6cf

0x1a9: Pop(1)
0x1aa: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x1ab: Push((int) 110)
0x1ac: Push((float)10.0)
0x1ad: @ SetTimer(Stack[-2], Stack[-1])
0x1ae: Pop(2)
0x1af: Return(); Pop(4)

0x1b0: PushEmpty(float, cvector, cvector, bool, object, bool, float, cvector, cvector, bool, object, bool)
0x1b1: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x1b2: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x1b3: Push((float)0.5)
0x1b4: @ rand(Stack[-7], Stack[-1])
0x1b5: Pop(1)
0x1b6: @ Sleep(Stack[-6])
0x1b7: Pop(0)
0x1b8: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x1b9: IF (Stack[-1] == 0) GOTO 0x1ea; Pop(1)

0x1ba: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == 0)
0x1bb: IF (Stack[-1] == 0) GOTO 0x1cb; Pop(1)

0x1bc: @ GetPosition(Stack[-4])
0x1bd: Pop(0)
0x1be: PushEmpty(float)
0x1bf: Call2 0x1eb

0x1c0: Pop(0)
0x1c1: @ GetRandomPFPointInCircle(Stack[-6], Stack[-5], Stack[-1], Stack[-4])
0x1c2: Pop(1)
0x1c3: Push(Stack[-3])
0x1c4: IF (Stack[-1] == 0) GOTO 0x1c6; Pop(1)

0x1c5: GOTO 0x1ca

0x1c6: Push((int) 1)
0x1c7: @ Sleep(Stack[-1])
0x1c8: Pop(1)
0x1c9: GOTO 0x1bc

0x1ca: GOTO 0x1cc

0x1cb: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x1cc: PushEmpty(object, cvector)
0x1cd: Stack[-1] = Stack[-7]
0x1ce: Call2 0x207

0x1cf: Stack[-4] = Stack[-2]
0x1d0: Pop(2)
0x1d1: Pop(0); Push(( Stack[-2] != 0 )
0x1d2: IF (Stack[-1] == 0) GOTO 0x1e5; Pop(1)

0x1d3: @ RotatePath(Stack[-2], Stack[-1])
0x1d4: Pop(0)
0x1d5: Push(Stack[-1])
0x1d6: IF (Stack[-1] == 0) GOTO 0x1e4; Pop(1)

0x1d7: PushEmpty(bool)
0x1d8: Call2 0x205

0x1d9: Pop(0)
0x1da: @ FollowPath(Stack[-3], Stack[-1], Stack[-2])
0x1db: Pop(1)
0x1dc: Stack[-2] = 0
0x1dd: Push(Stack[-1])
0x1de: IF (Stack[-1] == 0) GOTO 0x1e4; Pop(1)

0x1df: PushEmpty()
0x1e0: Push(-0, 0); TaskCall(2)
0x1e1: Call2 0x2b1

0x1e2: Pop(-0, 0); TaskReturn
0x1e3: Pop(0)
0x1e4: GOTO 0x1e8

0x1e5: Push((int) 1)
0x1e6: @ Sleep(Stack[-1])
0x1e7: Pop(1)
0x1e8: Stack[-2] = 0
0x1e9: GOTO 0x1b8

0x1ea: Return(); Pop(12)

0x1eb: PushEmpty(float, float)
0x1ec: @ GetCameraFarDistance(Stack[-1])
0x1ed: Pop(0)
0x1ee: Stack[-3] = Stack[-1]
0x1ef: Return(); Pop(2)

0x1f0: PushEmpty()
0x1f1: @ RequestClearPath(Stack[-1])
0x1f2: Pop(0)
0x1f3: Return(); Pop(0)

0x1f4: @ Stop()
0x1f5: Pop(0)
0x1f6: Return(); Pop(0)

0x1f7: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x1f8: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x1f9: @ Stop()
0x1fa: Pop(0)
0x1fb: @ StopGroup0()
0x1fc: Pop(0)
0x1fd: Return(); Pop(0)

0x1fe: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x1ff: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x200: @ Stop()
0x201: Pop(0)
0x202: @ StopGroup0()
0x203: Pop(0)
0x204: Return(); Pop(0)

0x205: Stack[-1] = (bool) 0
0x206: Return(); Pop(0)

0x207: PushEmpty(object, object)
0x208: @ FindShiftedPathTo(Stack[-1], Stack[-3])
0x209: Pop(0)
0x20a: Stack[-4] = Stack[-1]
0x20b: Return(); Pop(2)

0x20c: Stack[-1] = 0
0x20d: PushEmpty(int, int)
0x20e: PushEmpty(int, object)
0x20f: Stack[-1] = Stack[-5]
0x210: Call2 0x6e1

0x211: Stack[-3] = Stack[-2]
0x212: Pop(2)
0x213: Push((int) 0)
0x214: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x215: IF (Stack[-1] == 0) GOTO 0x220; Pop(1)

0x216: Push((int) 1)
0x217: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x218: IF (Stack[-1] == 0) GOTO 0x21c; Pop(1)

0x219: PushEmpty()
0x21a: Call2 0x302

0x21b: Pop(0)
0x21c: PushEmpty(object)
0x21d: Stack[-1] = Stack[-4]
0x21e: Call2 0x6e4

0x21f: Pop(1)
0x220: Return(); Pop(2)

0x221: PushEmpty(int, int)
0x222: PushEmpty(object)
0x223: Stack[-1] = Stack[-4]
0x224: Call2 0x68a

0x225: Pop(1)
0x226: PushEmpty(int, object)
0x227: Stack[-1] = Stack[-5]
0x228: Call2 0x6d7

0x229: Stack[-3] = Stack[-2]
0x22a: Pop(2)
0x22b: Push((int) 0)
0x22c: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x22d: IF (Stack[-1] == 0) GOTO 0x238; Pop(1)

0x22e: Push((int) 1)
0x22f: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x230: IF (Stack[-1] == 0) GOTO 0x234; Pop(1)

0x231: PushEmpty()
0x232: Call2 0x302

0x233: Pop(0)
0x234: PushEmpty(object)
0x235: Stack[-1] = Stack[-4]
0x236: Call2 0x6da

0x237: Pop(1)
0x238: Return(); Pop(2)

0x239: PushEmpty(int, int)
0x23a: PushEmpty(bool, object, object, bool)
0x23b: Stack[-3] = Stack[-9]
0x23c: Stack[-2] = Stack[-8]
0x23d: Stack[-1] = Stack[-7]
0x23e: Call2 0x712

0x23f: Pop(3)
0x240: IF (Stack[-1] == 0) GOTO 0x254; Pop(1)

0x241: PushEmpty(int, object, bool)
0x242: Stack[-2] = Stack[-8]
0x243: Stack[-1] = Stack[-6]
0x244: Call2 0x6dc

0x245: Stack[-4] = Stack[-3]
0x246: Pop(3)
0x247: Push((int) 0)
0x248: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x249: IF (Stack[-1] == 0) GOTO 0x254; Pop(1)

0x24a: Push((int) 1)
0x24b: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x24c: IF (Stack[-1] == 0) GOTO 0x250; Pop(1)

0x24d: PushEmpty()
0x24e: Call2 0x302

0x24f: Pop(0)
0x250: PushEmpty(object)
0x251: Stack[-1] = Stack[-6]
0x252: Call2 0x6df

0x253: Pop(1)
0x254: Return(); Pop(2)

0x255: PushEmpty(int, int)
0x256: PushEmpty(int, object)
0x257: Stack[-1] = Stack[-5]
0x258: Call2 0x6e6

0x259: Stack[-3] = Stack[-2]
0x25a: Pop(2)
0x25b: Push((int) 0)
0x25c: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x25d: IF (Stack[-1] == 0) GOTO 0x268; Pop(1)

0x25e: Push((int) 1)
0x25f: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x260: IF (Stack[-1] == 0) GOTO 0x264; Pop(1)

0x261: PushEmpty()
0x262: Call2 0x302

0x263: Pop(0)
0x264: PushEmpty(object)
0x265: Stack[-1] = Stack[-4]
0x266: Call2 0x6e9

0x267: Pop(1)
0x268: Return(); Pop(2)

0x269: PushEmpty(int, int)
0x26a: PushEmpty(bool, object, string)
0x26b: Stack[-2] = Stack[-7]
0x26c: Stack[-1] = Stack[-6]
0x26d: Call2 0x634

0x26e: Pop(2)
0x26f: IF (Stack[-1] == 0) GOTO 0x279; Pop(1)

0x270: PushEmpty()
0x271: Call2 0x302

0x272: Pop(0)
0x273: PushEmpty(object, string)
0x274: Stack[-2] = Stack[-6]
0x275: Stack[-1] = Stack[-5]
0x276: Call2 0x654

0x277: Pop(2)
0x278: GOTO 0x28d

0x279: PushEmpty(int, string, object)
0x27a: Stack[-2] = Stack[-6]
0x27b: Stack[-1] = Stack[-7]
0x27c: Call2 0x6eb

0x27d: Stack[-4] = Stack[-3]
0x27e: Pop(3)
0x27f: Push((int) 0)
0x280: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x281: IF (Stack[-1] == 0) GOTO 0x28d; Pop(1)

0x282: Push((int) 1)
0x283: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x284: IF (Stack[-1] == 0) GOTO 0x288; Pop(1)

0x285: PushEmpty()
0x286: Call2 0x302

0x287: Pop(0)
0x288: PushEmpty(string, object)
0x289: Stack[-2] = Stack[-5]
0x28a: Stack[-1] = Stack[-6]
0x28b: Call2 0x6ee

0x28c: Pop(2)
0x28d: Return(); Pop(2)

0x28e: PushEmpty()
0x28f: PushEmpty(bool, string)
0x290: Stack[-1] = Stack[-3]
0x291: Call2 0x697

0x292: Pop(1)
0x293: IF (Stack[-1] == 0) GOTO 0x29b; Pop(1)

0x294: PushEmpty()
0x295: Call2 0x302

0x296: Pop(0)
0x297: PushEmpty(string)
0x298: Stack[-1] = Stack[-2]
0x299: Call2 0x6a7

0x29a: Pop(1)
0x29b: Return(); Pop(0)

0x29c: PushEmpty()
0x29d: Call2 0x302

0x29e: Pop(0)
0x29f: PushEmpty()
0x2a0: Call2 0x728

0x2a1: Pop(0)
0x2a2: Return(); Pop(0)

0x2a3: PushEmpty()
0x2a4: PushEmpty(bool, object)
0x2a5: Stack[-1] = Stack[-3]
0x2a6: Call2 0x66d

0x2a7: Pop(1)
0x2a8: IF (Stack[-1] == 0) GOTO 0x2b0; Pop(1)

0x2a9: PushEmpty()
0x2aa: Call2 0x302

0x2ab: Pop(0)
0x2ac: PushEmpty(object)
0x2ad: Stack[-1] = Stack[-2]
0x2ae: Call2 0x684

0x2af: Pop(1)
0x2b0: Return(); Pop(0)

0x2b1: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x2b2: @ WaitForAnimEnd()
0x2b3: Pop(0)
0x2b4: PushEmpty(bool)
0x2b5: Call2 0x587

0x2b6: Pop(0)
0x2b7: Pop(1); Push((bool) Stack[-1] == 0)
0x2b8: IF (Stack[-1] == 0) GOTO 0x2ba; Pop(1)

0x2b9: Return(); Pop(14)

0x2ba: PushEmpty(int)
0x2bb: Call2 0x6bb

0x2bc: Stack[-8] = Stack[-1]
0x2bd: Pop(1)
0x2be: Stack[-6] = (int) 0
0x2bf: PushEmpty(bool)
0x2c0: Stack[-1] = (bool) 0
0x2c1: Push((int) 5)
0x2c2: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x2c3: IF (Stack[-1] == 0) GOTO 0x2c9; Pop(1)

0x2c4: PushEmpty(bool)
0x2c5: Call2 0x587

0x2c6: Pop(0)
0x2c7: IF (Stack[-1] == 0) GOTO 0x2c9; Pop(1)

0x2c8: Stack[-1] = (bool) 1
0x2c9: IF (Stack[-1] == 0) GOTO 0x2fd; Pop(1)

0x2ca: Push((int) 3)
0x2cb: @ irand(Stack[-6], Stack[-1])
0x2cc: Pop(1)
0x2cd: Push((int) 0)
0x2ce: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x2cf: IF (Stack[-1] == 0) GOTO 0x2e1; Pop(1)

0x2d0: Push(Stack[-7])
0x2d1: IF (Stack[-1] == 0) GOTO 0x2e0; Pop(1)

0x2d2: @ irand(Stack[-4], Stack[-7])
0x2d3: Pop(0)
0x2d4: Push("all")
0x2d5: PushEmpty(string, int)
0x2d6: Stack[-1] = Stack[-7]
0x2d7: Call2 0x6b4

0x2d8: Pop(1)
0x2d9: @ PlayAnimation(Stack[-2], Stack[-1])
0x2da: Pop(2)
0x2db: @ WaitForAnimEnd(Stack[-3])
0x2dc: Pop(0)
0x2dd: Pop(0); Push((bool) Stack[-3] == 0)
0x2de: IF (Stack[-1] == 0) GOTO 0x2e0; Pop(1)

0x2df: GOTO 0x2fd

0x2e0: GOTO 0x2f2

0x2e1: Push((int) 1)
0x2e2: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x2e3: IF (Stack[-1] == 0) GOTO 0x2ef; Pop(1)

0x2e4: Push((int) 4)
0x2e5: @ rand(Stack[-3], Stack[-1])
0x2e6: Pop(1)
0x2e7: Push((int) 1)
0x2e8: Pop(1); Push(Stack[-3] + Stack[-1]);
0x2e9: @ Sleep(Stack[-1], Stack[-2])
0x2ea: Pop(1)
0x2eb: Pop(0); Push((bool) Stack[-1] == 0)
0x2ec: IF (Stack[-1] == 0) GOTO 0x2ee; Pop(1)

0x2ed: GOTO 0x2fd

0x2ee: GOTO 0x2f2

0x2ef: Push(Stack[-6])
0x2f0: IF (Stack[-1] == 0) GOTO 0x2f2; Pop(1)

0x2f1: GOTO 0x2fd

0x2f2: PushEmpty(bool)
0x2f3: Call2 0x300

0x2f4: Pop(0)
0x2f5: Pop(1); Push((bool) Stack[-1] == 0)
0x2f6: IF (Stack[-1] == 0) GOTO 0x2f8; Pop(1)

0x2f7: GOTO 0x2fd

0x2f8: @ ResetAAS()
0x2f9: Pop(0)
0x2fa: Push((int) 1)
0x2fb: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x2fc: GOTO 0x2bf

0x2fd: @ ResetAAS()
0x2fe: Pop(0)
0x2ff: Return(); Pop(14)

0x300: Stack[-1] = (bool) 1
0x301: Return(); Pop(0)

0x302: @ StopAnimation()
0x303: Pop(0)
0x304: @ StopGroup0()
0x305: Pop(0)
0x306: Return(); Pop(0)

0x307: PushEmpty()
0x308: PushEmpty(bool, object)
0x309: Stack[-1] = Stack[-3]
0x30a: Call2 0x708

0x30b: Pop(1)
0x30c: IF (Stack[-1] == 0) GOTO 0x311; Pop(1)

0x30d: PushEmpty(object)
0x30e: Stack[-1] = Stack[-2]
0x30f: Call2 0x33f

0x310: Pop(1)
0x311: Return(); Pop(0)

0x312: PushEmpty(int, int)
0x313: PushEmpty(object)
0x314: Stack[-1] = Stack[-4]
0x315: Call2 0x68a

0x316: Pop(1)
0x317: PushEmpty(int, object)
0x318: Stack[-1] = Stack[-5]
0x319: Call2 0x70d

0x31a: Stack[-3] = Stack[-2]
0x31b: Pop(2)
0x31c: Push((int) 0)
0x31d: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x31e: IF (Stack[-1] == 0) GOTO 0x329; Pop(1)

0x31f: Push((int) 1)
0x320: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x321: IF (Stack[-1] == 0) GOTO 0x325; Pop(1)

0x322: PushEmpty()
0x323: Call2 0x370

0x324: Pop(0)
0x325: PushEmpty(object)
0x326: Stack[-1] = Stack[-4]
0x327: Call2 0x710

0x328: Pop(1)
0x329: Return(); Pop(2)

0x32a: PushEmpty()
0x32b: PushEmpty(bool, string)
0x32c: Stack[-1] = Stack[-3]
0x32d: Call2 0x697

0x32e: Pop(1)
0x32f: IF (Stack[-1] == 0) GOTO 0x337; Pop(1)

0x330: PushEmpty()
0x331: Call2 0x370

0x332: Pop(0)
0x333: PushEmpty(string)
0x334: Stack[-1] = Stack[-2]
0x335: Call2 0x6a7

0x336: Pop(1)
0x337: Return(); Pop(0)

0x338: PushEmpty()
0x339: Call2 0x370

0x33a: Pop(0)
0x33b: PushEmpty()
0x33c: Call2 0x728

0x33d: Pop(0)
0x33e: Return(); Pop(0)

0x33f: PushEmpty(bool, bool)
0x340: PushEmpty(bool, object)
0x341: Stack[-1] = Stack[-5]
0x342: Push(-2, 2); TaskCall(4)
0x343: Call2 0x3ab

0x344: Pop(-2, 2); TaskReturn
0x345: Pop(1)
0x346: IF (Stack[-1] == 0) GOTO 0x36f; Pop(1)

0x347: @ Face(Stack[-3])
0x348: Pop(0)
0x349: @ WaitForAnimEnd(Stack[-1])
0x34a: Pop(0)
0x34b: Pop(0); Push((bool) Stack[-1] == 0)
0x34c: IF (Stack[-1] == 0) GOTO 0x34e; Pop(1)

0x34d: GOTO 0x36f

0x34e: Push("all")
0x34f: Push("dattack_begin")
0x350: @ PlayAnimation(Stack[-2], Stack[-1])
0x351: Pop(2)
0x352: @ WaitForAnimEnd(Stack[-1])
0x353: Pop(0)
0x354: Pop(0); Push((bool) Stack[-1] == 0)
0x355: IF (Stack[-1] == 0) GOTO 0x357; Pop(1)

0x356: GOTO 0x36f

0x357: PushEmpty(float, object)
0x358: Stack[-1] = Stack[-5]
0x359: Call2 0x454

0x35a: Pop(1)
0x35b: Push((float)90000.0)
0x35c: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x35d: IF (Stack[-1] == 0) GOTO 0x363; Pop(1)

0x35e: PushEmpty(float, object, float)
0x35f: Stack[-2] = Stack[-6]
0x360: Stack[-1] = (float) 0.2
0x361: Call2 0x483

0x362: Pop(3)
0x363: Push("all")
0x364: Push("dattack_end")
0x365: @ PlayAnimation(Stack[-2], Stack[-1])
0x366: Pop(2)
0x367: @ WaitForAnimEnd(Stack[-1])
0x368: Pop(0)
0x369: Pop(0); Push((bool) Stack[-1] == 0)
0x36a: IF (Stack[-1] == 0) GOTO 0x36c; Pop(1)

0x36b: GOTO 0x36f

0x36c: @ StopAsync()
0x36d: Pop(0)
0x36e: GOTO 0x340

0x36f: Return(); Pop(2)

0x370: @ StopAsync()
0x371: Pop(0)
0x372: @ StopAnimation()
0x373: Pop(0)
0x374: Return(); Pop(0)

0x375: PushEmpty()
0x376: PushEmpty()
0x377: Call2 0x370

0x378: Pop(0)
0x379: PushEmpty(object)
0x37a: Stack[-1] = Stack[-2]
0x37b: Call2 0x61c

0x37c: Pop(1)
0x37d: Return(); Pop(0)

0x37e: PushEmpty(int, int)
0x37f: PushEmpty(object)
0x380: Stack[-1] = Stack[-4]
0x381: Call2 0x68a

0x382: Pop(1)
0x383: PushEmpty(int, object)
0x384: Stack[-1] = Stack[-5]
0x385: Call2 0x70d

0x386: Stack[-3] = Stack[-2]
0x387: Pop(2)
0x388: Push((int) 0)
0x389: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x38a: IF (Stack[-1] == 0) GOTO 0x395; Pop(1)

0x38b: Push((int) 1)
0x38c: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x38d: IF (Stack[-1] == 0) GOTO 0x391; Pop(1)

0x38e: PushEmpty()
0x38f: Call2 0x434

0x390: Pop(0)
0x391: PushEmpty(object)
0x392: Stack[-1] = Stack[-4]
0x393: Call2 0x710

0x394: Pop(1)
0x395: Return(); Pop(2)

0x396: PushEmpty()
0x397: PushEmpty(bool, string)
0x398: Stack[-1] = Stack[-3]
0x399: Call2 0x697

0x39a: Pop(1)
0x39b: IF (Stack[-1] == 0) GOTO 0x3a3; Pop(1)

0x39c: PushEmpty()
0x39d: Call2 0x434

0x39e: Pop(0)
0x39f: PushEmpty(string)
0x3a0: Stack[-1] = Stack[-2]
0x3a1: Call2 0x6a7

0x3a2: Pop(1)
0x3a3: Return(); Pop(0)

0x3a4: PushEmpty()
0x3a5: Call2 0x434

0x3a6: Pop(0)
0x3a7: PushEmpty()
0x3a8: Call2 0x728

0x3a9: Pop(0)
0x3aa: Return(); Pop(0)

0x3ab: PushEmpty()
0x3ac: PushEmpty(bool, object, float, float, bool, bool)
0x3ad: Stack[-5] = Stack[-7]
0x3ae: Stack[-4] = (int) 150
0x3af: Stack[-3] = (int) 3000
0x3b0: Stack[-2] = (bool) 0
0x3b1: Stack[-1] = (bool) 1
0x3b2: Call2 0x3b8

0x3b3: Stack[-8] = Stack[-6]
0x3b4: Pop(6)
0x3b5: Return(); Pop(0)

0x3b6: Stack[-1] = "zwalk"
0x3b7: Return(); Pop(0)

0x3b8: PushEmpty(bool, bool, object, cvector, cvector, cvector, float, object, bool, bool, object, cvector, cvector, cvector, float, object)
0x3b9: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x3ba: Stack[1 + Tasks[-1].StackPointer] = Stack[-21]
0x3bb: Stack[-7] = Stack[-17]
0x3bc: PushEmpty(bool, object)
0x3bd: Stack[-1] = Stack[-23]
0x3be: Call2 0x444

0x3bf: Pop(1)
0x3c0: Pop(1); Push((bool) Stack[-1] == 0)
0x3c1: IF (Stack[-1] == 0) GOTO 0x3c4; Pop(1)

0x3c2: Stack[-22] = (bool) 0
0x3c3: Return(); Pop(16)

0x3c4: @@ GetPosition(Stack[-5])
0x3c5: Pop(0)
0x3c6: @ GetPosition(Stack[-4])
0x3c7: Pop(0)
0x3c8: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x3c9: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x3ca: PushEmpty(bool)
0x3cb: Stack[-1] = (bool) 0
0x3cc: Push((int) 0)
0x3cd: Pop(1); Push((bool) Stack[-21] > Stack[-1])
0x3ce: IF (Stack[-1] == 0) GOTO 0x3d3; Pop(1)

0x3cf: Pop(0); Push(Stack[-20] * Stack[-20]);
0x3d0: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x3d1: IF (Stack[-1] == 0) GOTO 0x3d3; Pop(1)

0x3d2: Stack[-1] = (bool) 1
0x3d3: IF (Stack[-1] == 0) GOTO 0x3d8; Pop(1)

0x3d4: @ Stop()
0x3d5: Pop(0)
0x3d6: Stack[-22] = (bool) 0
0x3d7: Return(); Pop(16)

0x3d8: Pop(0); Push(Stack[-20] * Stack[-20]);
0x3d9: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x3da: IF (Stack[-1] == 0) GOTO 0x416; Pop(1)

0x3db: @@ GetPFPosition(Stack[-5])
0x3dc: Pop(0)
0x3dd: @ FindPathTo(Stack[-1], Stack[-5])
0x3de: Pop(0)
0x3df: Pop(0); Push(( Stack[-1] != 0 )
0x3e0: IF (Stack[-1] == 0) GOTO 0x3e3; Pop(1)

0x3e1: Stack[-6] = Stack[-1]
0x3e2: Stack[-1] = 0
0x3e3: Pop(0); Push(( Stack[-6] != 0 )
0x3e4: IF (Stack[-1] == 0) GOTO 0x404; Pop(1)

0x3e5: Push(Stack[-7])
0x3e6: IF (Stack[-1] == 0) GOTO 0x3ed; Pop(1)

0x3e7: Stack[-7] = (bool) 0
0x3e8: @ RotatePath(Stack[-6], Stack[-8])
0x3e9: Pop(0)
0x3ea: Pop(0); Push((bool) Stack[-8] == 0)
0x3eb: IF (Stack[-1] == 0) GOTO 0x3ed; Pop(1)

0x3ec: GOTO 0x41c

0x3ed: Push((int) 0)
0x3ee: Push((float)0.3)
0x3ef: @ SetTimer(Stack[-2], Stack[-1])
0x3f0: Pop(2)
0x3f1: PushEmpty(string)
0x3f2: Call2 0x3b6

0x3f3: Pop(0)
0x3f4: PushEmpty(string)
0x3f5: Call2 0x44b

0x3f6: Pop(0)
0x3f7: @ FollowPath(Stack[-8], Stack[-20], Stack[-10], Stack[-2], Stack[-1])
0x3f8: Pop(2)
0x3f9: Pop(0); Push((bool) Stack[-8] == 0)
0x3fa: IF (Stack[-1] == 0) GOTO 0x402; Pop(1)

0x3fb: Push( Stack[0 + Tasks[-1].StackPointer] )
0x3fc: IF (Stack[-1] == 0) GOTO 0x400; Pop(1)

0x3fd: Stack[-6] = 0
0x3fe: GOTO 0x41c

0x3ff: GOTO 0x401

0x400: GOTO 0x41b

0x401: GOTO 0x403

0x402: Stack[-6] = 0
0x403: GOTO 0x414

0x404: Push((int) 0)
0x405: @ KillTimer(Stack[-1])
0x406: Pop(1)
0x407: Push((float)0.5)
0x408: @ Sleep(Stack[-1], Stack[-9])
0x409: Pop(1)
0x40a: Pop(0); Push((bool) Stack[-8] == 0)
0x40b: IF (Stack[-1] == 0) GOTO 0x410; Pop(1)

0x40c: Push( Stack[0 + Tasks[-1].StackPointer] )
0x40d: IF (Stack[-1] == 0) GOTO 0x410; Pop(1)

0x40e: Stack[-6] = 0
0x40f: GOTO 0x41c

0x410: Push((int) 0)
0x411: Push((float)0.3)
0x412: @ SetTimer(Stack[-2], Stack[-1])
0x413: Pop(2)
0x414: Stack[-1] = 0
0x415: GOTO 0x41a

0x416: Push((int) 0)
0x417: @ KillTimer(Stack[-1])
0x418: Pop(1)
0x419: GOTO 0x41c

0x41a: Stack[-6] = 0
0x41b: GOTO 0x3bc

0x41c: Stack[-22] = !Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x41d: Return(); Pop(16)

0x41e: PushEmpty()
0x41f: Push((int) 0)
0x420: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x421: IF (Stack[-1] == 0) GOTO 0x423; Pop(1)

0x422: Return(); Pop(0)

0x423: PushEmpty(bool, object)
0x424: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x425: Call2 0x444

0x426: Pop(1)
0x427: Pop(1); Push((bool) Stack[-1] == 0)
0x428: IF (Stack[-1] == 0) GOTO 0x42a; Pop(1)

0x429: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x42a: Push((int) 0)
0x42b: @ KillTimer(Stack[-1])
0x42c: Pop(1)
0x42d: @ Stop()
0x42e: Pop(0)
0x42f: Return(); Pop(0)

0x430: PushEmpty()
0x431: @ RequestClearPath(Stack[-1])
0x432: Pop(0)
0x433: Return(); Pop(0)

0x434: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x435: Push((int) 0)
0x436: @ KillTimer(Stack[-1])
0x437: Pop(1)
0x438: @ Stop()
0x439: Pop(0)
0x43a: Return(); Pop(0)

0x43b: PushEmpty()
0x43c: PushEmpty()
0x43d: Call2 0x434

0x43e: Pop(0)
0x43f: PushEmpty(object)
0x440: Stack[-1] = Stack[-2]
0x441: Call2 0x61c

0x442: Pop(1)
0x443: Return(); Pop(0)

0x444: PushEmpty()
0x445: PushEmpty(bool, object)
0x446: Stack[-1] = Stack[-3]
0x447: Call2 0x4f1

0x448: Stack[-4] = Stack[-2]
0x449: Pop(2)
0x44a: Return(); Pop(0)

0x44b: Stack[-1] = "run"
0x44c: Return(); Pop(0)

0x44d: PushEmpty(cvector, cvector, cvector, cvector)
0x44e: @ GetPosition(Stack[-2])
0x44f: Pop(0)
0x450: @@ GetPosition(Stack[-1])
0x451: Pop(0)
0x452: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x453: Return(); Pop(4)

0x454: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x455: @ GetPosition(Stack[-3])
0x456: Pop(0)
0x457: @@ GetPosition(Stack[-2])
0x458: Pop(0)
0x459: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x45a: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x45b: Return(); Pop(6)

0x45c: PushEmpty(bool, bool)
0x45d: @ IsPlayerActor(Stack[-3], Stack[-1])
0x45e: Pop(0)
0x45f: Stack[-4] = Stack[-1]
0x460: Return(); Pop(2)

0x461: PushEmpty(bool, bool)
0x462: Push("HasProperty")
0x463: Push((int) 2)
0x464: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x465: Pop(1); Push((bool) Stack[-1] == 0)
0x466: IF (Stack[-1] == 0) GOTO 0x469; Pop(1)

0x467: Stack[-5] = (bool) 0
0x468: Return(); Pop(2)

0x469: @@ HasProperty(Stack[-3], Stack[-1])
0x46a: Pop(0)
0x46b: Stack[-5] = Stack[-1]
0x46c: Return(); Pop(2)

0x46d: PushEmpty(float, float)
0x46e: PushEmpty(bool, object, string)
0x46f: Stack[-2] = Stack[-10]
0x470: Stack[-1] = Stack[-9]
0x471: Call2 0x461

0x472: Pop(2)
0x473: Pop(1); Push((bool) Stack[-1] == 0)
0x474: IF (Stack[-1] == 0) GOTO 0x477; Pop(1)

0x475: Stack[-8] = (bool) 0
0x476: Return(); Pop(2)

0x477: @@ GetProperty(Stack[-6], Stack[-1])
0x478: Pop(0)
0x479: PushEmpty(float, float, float, float)
0x47a: Stack[-3] = Stack[-5] + Stack[-9]; Pop(0);
0x47b: Stack[-2] = Stack[-8]
0x47c: Stack[-1] = Stack[-7]
0x47d: Call2 0x5c5

0x47e: Pop(3)
0x47f: @@ SetProperty(Stack[-7], Stack[-1])
0x480: Pop(1)
0x481: Stack[-8] = (bool) 1
0x482: Return(); Pop(2)

0x483: PushEmpty(float, float, float, float)
0x484: PushEmpty(bool, object, string)
0x485: Stack[-2] = Stack[-9]
0x486: Stack[-1] = "disease"
0x487: Call2 0x461

0x488: Pop(2)
0x489: Pop(1); Push((bool) Stack[-1] == 0)
0x48a: IF (Stack[-1] == 0) GOTO 0x48d; Pop(1)

0x48b: Stack[-7] = (int) 0
0x48c: Return(); Pop(4)

0x48d: Stack[-2] = (int) 0
0x48e: PushEmpty(bool, object, string)
0x48f: Stack[-2] = Stack[-9]
0x490: Stack[-1] = "armor_disease"
0x491: Call2 0x461

0x492: Pop(2)
0x493: IF (Stack[-1] == 0) GOTO 0x499; Pop(1)

0x494: Push("armor_disease")
0x495: @@ GetProperty(Stack[-1], Stack[-3])
0x496: Pop(1)
0x497: Push((int) 100)
0x498: Stack[-3] = Stack[-3] / Stack[-1]; Pop(1);
0x499: PushEmpty(bool, object, string)
0x49a: Stack[-2] = Stack[-9]
0x49b: Stack[-1] = "immunity"
0x49c: Call2 0x461

0x49d: Pop(2)
0x49e: IF (Stack[-1] == 0) GOTO 0x4ab; Pop(1)

0x49f: Push("immunity")
0x4a0: @@ GetProperty(Stack[-1], Stack[-2])
0x4a1: Pop(1)
0x4a2: Stack[-2] = Stack[-2] + Stack[-1]; Pop(0);
0x4a3: PushEmpty(bool, object, string, float, float, float)
0x4a4: Stack[-5] = Stack[-12]
0x4a5: Stack[-4] = "immunity"
0x4a6: Stack[-3] = -Stack[-11]; Pop(0);
0x4a7: Stack[-2] = (int) 0
0x4a8: Stack[-1] = (int) 1
0x4a9: Call2 0x46d

0x4aa: Pop(6)
0x4ab: Push((int) 1)
0x4ac: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x4ad: IF (Stack[-1] == 0) GOTO 0x4b0; Pop(1)

0x4ae: Stack[-7] = (float) 0.0
0x4af: Return(); Pop(4)

0x4b0: Push((int) 1)
0x4b1: Pop(1); Push(Stack[-1] - Stack[-3]);
0x4b2: Push((int) 2)
0x4b3: Pop(2); Push(Stack[-2] / Stack[-1]);
0x4b4: Stack[-6] = Stack[-6] * Stack[-1]; Pop(1);
0x4b5: PushEmpty(bool, object, string, float, float, float)
0x4b6: Stack[-5] = Stack[-12]
0x4b7: Stack[-4] = "disease"
0x4b8: Stack[-3] = Stack[-11]
0x4b9: Stack[-2] = (int) 0
0x4ba: Stack[-1] = (int) 1
0x4bb: Call2 0x46d

0x4bc: Pop(6)
0x4bd: PushEmpty(bool, object)
0x4be: Stack[-1] = Stack[-8]
0x4bf: Call2 0x45c

0x4c0: Pop(1)
0x4c1: IF (Stack[-1] == 0) GOTO 0x4c6; Pop(1)

0x4c2: PushEmpty(float)
0x4c3: Stack[-1] = Stack[-6]
0x4c4: Call2 0x5f3

0x4c5: Pop(1)
0x4c6: Stack[-7] = Stack[-5]
0x4c7: Return(); Pop(4)

0x4c8: PushEmpty(bool, bool)
0x4c9: @@ IsDead(Stack[-1])
0x4ca: Pop(0)
0x4cb: Stack[-4] = Stack[-1]
0x4cc: Return(); Pop(2)

0x4cd: PushEmpty(object, object, object, object)
0x4ce: Pop(0); Push((bool) Stack[-5] == 0)
0x4cf: IF (Stack[-1] == 0) GOTO 0x4d2; Pop(1)

0x4d0: Stack[-6] = (bool) 0
0x4d1: Return(); Pop(4)

0x4d2: PushEmpty(bool)
0x4d3: Stack[-1] = (bool) 0
0x4d4: Push("IsDead")
0x4d5: Push((int) 1)
0x4d6: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x4d7: IF (Stack[-1] == 0) GOTO 0x4de; Pop(1)

0x4d8: PushEmpty(bool, object)
0x4d9: Stack[-1] = Stack[-8]
0x4da: Call2 0x4c8

0x4db: Pop(1)
0x4dc: IF (Stack[-1] == 0) GOTO 0x4de; Pop(1)

0x4dd: Stack[-1] = (bool) 1
0x4de: IF (Stack[-1] == 0) GOTO 0x4e1; Pop(1)

0x4df: Stack[-6] = (bool) 0
0x4e0: Return(); Pop(4)

0x4e1: @ GetScene(Stack[-2])
0x4e2: Pop(0)
0x4e3: Pop(0); Push((bool) Stack[-2] == 0)
0x4e4: IF (Stack[-1] == 0) GOTO 0x4e7; Pop(1)

0x4e5: Stack[-6] = (bool) 0
0x4e6: Return(); Pop(4)

0x4e7: @@ GetScene(Stack[-1])
0x4e8: Pop(0)
0x4e9: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x4ea: IF (Stack[-1] == 0) GOTO 0x4ed; Pop(1)

0x4eb: Stack[-6] = (bool) 0
0x4ec: Return(); Pop(4)

0x4ed: Stack[-6] = (bool) 1
0x4ee: Return(); Pop(4)

0x4ef: Stack[-1] = 0
0x4f0: Stack[-2] = 0
0x4f1: PushEmpty(int, int)
0x4f2: PushEmpty(bool, object)
0x4f3: Stack[-1] = Stack[-5]
0x4f4: Call2 0x4cd

0x4f5: Pop(1)
0x4f6: Pop(1); Push((bool) Stack[-1] == 0)
0x4f7: IF (Stack[-1] == 0) GOTO 0x4fa; Pop(1)

0x4f8: Stack[-4] = (bool) 0
0x4f9: Return(); Pop(2)

0x4fa: PushEmpty(bool, object, string)
0x4fb: Stack[-2] = Stack[-6]
0x4fc: Stack[-1] = "noaccess"
0x4fd: Call2 0x461

0x4fe: Pop(2)
0x4ff: Pop(1); Push((bool) Stack[-1] == 0)
0x500: IF (Stack[-1] == 0) GOTO 0x503; Pop(1)

0x501: Stack[-4] = (bool) 1
0x502: Return(); Pop(2)

0x503: Push("noaccess")
0x504: @@ GetProperty(Stack[-1], Stack[-2])
0x505: Pop(1)
0x506: Push((int) 0)
0x507: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x508: Return(); Pop(2)

0x509: PushEmpty(bool, int, cvector, cvector, cvector, cvector, string, bool, int, cvector, cvector, cvector, cvector, string)
0x50a: Pop(0); Push((bool) Stack[-15] == 0)
0x50b: IF (Stack[-1] == 0) GOTO 0x50d; Pop(1)

0x50c: Return(); Pop(14)

0x50d: @ IsDead(Stack[-7])
0x50e: Pop(0)
0x50f: Push(Stack[-7])
0x510: IF (Stack[-1] == 0) GOTO 0x512; Pop(1)

0x511: Return(); Pop(14)

0x512: @ GetSecondaryAnimationType(Stack[-6])
0x513: Pop(0)
0x514: Push((int) 0)
0x515: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x516: IF (Stack[-1] == 0) GOTO 0x518; Pop(1)

0x517: Return(); Pop(14)

0x518: @@ GetPosition(Stack[-5])
0x519: Pop(0)
0x51a: @ GetPosition(Stack[-4])
0x51b: Pop(0)
0x51c: @ GetDirection(Stack[-3])
0x51d: Pop(0)
0x51e: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0x51f: Push(CvectorIndex(Stack[-2], 0))
0x520: Push(CvectorIndex(Stack[-4], 0))
0x521: Pop(2); Push(Stack[-2] * Stack[-1]);
0x522: Push(CvectorIndex(Stack[-3], 2))
0x523: Push(CvectorIndex(Stack[-5], 2))
0x524: Pop(2); Push(Stack[-2] * Stack[-1]);
0x525: Pop(2); Push(Stack[-2] + Stack[-1]);
0x526: Push((int) 0)
0x527: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x528: IF (Stack[-1] == 0) GOTO 0x52b; Pop(1)

0x529: Stack[-1] = "fhit"
0x52a: GOTO 0x52c

0x52b: Stack[-1] = "bhit"
0x52c: Push("hit_react")
0x52d: Push("1")
0x52e: Pop(1); Push(Stack[-3] + Stack[-1]);
0x52f: Push("2")
0x530: Pop(1); Push(Stack[-4] + Stack[-1]);
0x531: Push((int) -10)
0x532: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x533: Pop(4)
0x534: Return(); Pop(14)

0x535: PushEmpty(cvector, object, int, bool, cvector, cvector, int, int, cvector, cvector, object, int, bool, cvector, cvector, int, int, cvector)
0x536: PushEmpty(bool)
0x537: Stack[-1] = (bool) 0
0x538: PushEmpty(bool)
0x539: Stack[-1] = (bool) 0
0x53a: Push(Stack[-23])
0x53b: IF (Stack[-1] == 0) GOTO 0x540; Pop(1)

0x53c: Push((int) 4)
0x53d: Pop(1); Push((bool) Stack[-23] != Stack[-1])
0x53e: IF (Stack[-1] == 0) GOTO 0x540; Pop(1)

0x53f: Stack[-1] = (bool) 1
0x540: IF (Stack[-1] == 0) GOTO 0x545; Pop(1)

0x541: Push((int) 5)
0x542: Pop(1); Push((bool) Stack[-22] != Stack[-1])
0x543: IF (Stack[-1] == 0) GOTO 0x545; Pop(1)

0x544: Stack[-1] = (bool) 1
0x545: IF (Stack[-1] == 0) GOTO 0x574; Pop(1)

0x546: PushEmpty(cvector, cvector)
0x547: PushEmpty(cvector, object)
0x548: Stack[-1] = Stack[-25]
0x549: Call2 0x44d

0x54a: Stack[-3] = Stack[-2]
0x54b: Pop(2)
0x54c: Call2 0x5bb

0x54d: Stack[-11] = Stack[-2]
0x54e: Pop(2)
0x54f: @ CreateVectorVector(Stack[-8])
0x550: Pop(0)
0x551: Stack[-7] = (int) 1
0x552: Push("hit")
0x553: Pop(1); Push(Stack[-1] + Stack[-8]);
0x554: @ GetGeometryLocator(Stack[-1], Stack[-7], Stack[-6], Stack[-5])
0x555: Pop(1)
0x556: Pop(0); Push((bool) Stack[-6] == 0)
0x557: IF (Stack[-1] == 0) GOTO 0x559; Pop(1)

0x558: GOTO 0x562

0x559: Pop(0); Push(Stack[-4] | Stack[-9]);
0x55a: Push((float)0.70711)
0x55b: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x55c: IF (Stack[-1] == 0) GOTO 0x55f; Pop(1)

0x55d: @@ add(Stack[-5])
0x55e: Pop(0)
0x55f: Push((int) 1)
0x560: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x561: GOTO 0x552

0x562: @@ size(Stack[-3])
0x563: Pop(0)
0x564: Push(Stack[-3])
0x565: IF (Stack[-1] == 0) GOTO 0x573; Pop(1)

0x566: @ irand(Stack[-2], Stack[-3])
0x567: Pop(0)
0x568: @@ get(Stack[-1], Stack[-2])
0x569: Pop(0)
0x56a: PushEmpty(object, int, float, cvector, cvector)
0x56b: Stack[-5] = Stack[-26]
0x56c: Stack[-4] = Stack[-25]
0x56d: Stack[-3] = Stack[-24]
0x56e: Stack[-2] = Stack[-6]
0x56f: Stack[-1] = -Stack[-14]; Pop(0);
0x570: Call2 0x579

0x571: Pop(5)
0x572: Return(); Pop(18)

0x573: Stack[-8] = 0
0x574: PushEmpty(object)
0x575: Stack[-1] = Stack[-22]
0x576: Call2 0x509

0x577: Pop(1)
0x578: Return(); Pop(18)

0x579: PushEmpty(object, object, object, object)
0x57a: @ GetScene(Stack[-2])
0x57b: Pop(0)
0x57c: Push("scripted")
0x57d: Push("blood_dir.xml")
0x57e: @ AddActorByType(Stack[-3], Stack[-2], Stack[-4], Stack[-8], Stack[-7], Stack[-1])
0x57f: Pop(2)
0x580: PushEmpty(object)
0x581: Stack[-1] = Stack[-10]
0x582: Call2 0x509

0x583: Pop(1)
0x584: Return(); Pop(4)

0x585: Stack[-1] = 0
0x586: Stack[-2] = 0
0x587: PushEmpty(bool, bool)
0x588: @ IsLoaded(Stack[-1])
0x589: Pop(0)
0x58a: Stack[-3] = Stack[-1]
0x58b: Return(); Pop(2)

0x58c: PushEmpty(bool, int, bool, int, bool, float, cvector, cvector, bool, int, bool, int, bool, float, cvector, cvector)
0x58d: @ IsExisting3DSound(Stack[-8], Stack[-17])
0x58e: Pop(0)
0x58f: Pop(0); Push((bool) Stack[-8] == 0)
0x590: IF (Stack[-1] == 0) GOTO 0x5a5; Pop(1)

0x591: Stack[-7] = (int) 0
0x592: Push((int) 1)
0x593: Pop(1); Push(Stack[-8] + Stack[-1]);
0x594: Pop(1); Push(Stack[-18] + Stack[-1]);
0x595: @ IsExisting3DSound(Stack[-7], Stack[-1])
0x596: Pop(1)
0x597: Pop(0); Push((bool) Stack[-6] == 0)
0x598: IF (Stack[-1] == 0) GOTO 0x59a; Pop(1)

0x599: GOTO 0x59d

0x59a: Push((int) 1)
0x59b: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x59c: GOTO 0x592

0x59d: Pop(0); Push((bool) Stack[-7] == 0)
0x59e: IF (Stack[-1] == 0) GOTO 0x5a0; Pop(1)

0x59f: Return(); Pop(16)

0x5a0: @ irand(Stack[-5], Stack[-7])
0x5a1: Pop(0)
0x5a2: Push((int) 1)
0x5a3: Pop(1); Push(Stack[-6] + Stack[-1]);
0x5a4: Stack[-18] = Stack[-18] + Stack[-1]; Pop(1);
0x5a5: @ Is3DSoundLoaded(Stack[-4], Stack[-17])
0x5a6: Pop(0)
0x5a7: Push(Stack[-4])
0x5a8: IF (Stack[-1] == 0) GOTO 0x5b4; Pop(1)

0x5a9: @ GetEyesHeight(Stack[-3])
0x5aa: Pop(0)
0x5ab: @ GetDirection(Stack[-2])
0x5ac: Pop(0)
0x5ad: Push((int) 50)
0x5ae: Stack[-2] = Stack[-3] * Stack[-1]; Pop(1);
0x5af: Push(CvectorIndex(Stack[-1], 1))
0x5b0: Stack[-1] = Stack[-1] + Stack[-4]; Pop(0);
0x5b1: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x5b2: @ PlayGlobalSound(Stack[-17], Stack[-1])
0x5b3: Pop(0)
0x5b4: Return(); Pop(16)

0x5b5: PushEmpty(object, object)
0x5b6: @ self(Stack[-1])
0x5b7: Pop(0)
0x5b8: Stack[-3] = Stack[-1]
0x5b9: Return(); Pop(2)

0x5ba: Stack[-1] = 0
0x5bb: PushEmpty(float, float)
0x5bc: Pop(0); Push(Stack[-3] | Stack[-3]);
0x5bd: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x5be: Push((float)0.0)
0x5bf: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x5c0: IF (Stack[-1] == 0) GOTO 0x5c3; Pop(1)

0x5c1: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x5c2: Return(); Pop(2)

0x5c3: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x5c4: Return(); Pop(2)

0x5c5: PushEmpty()
0x5c6: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x5c7: IF (Stack[-1] == 0) GOTO 0x5ca; Pop(1)

0x5c8: Stack[-4] = Stack[-2]
0x5c9: Return(); Pop(0)

0x5ca: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x5cb: IF (Stack[-1] == 0) GOTO 0x5ce; Pop(1)

0x5cc: Stack[-4] = Stack[-1]
0x5cd: Return(); Pop(0)

0x5ce: Stack[-4] = Stack[-3]
0x5cf: Return(); Pop(0)

0x5d0: PushEmpty()
0x5d1: Pop(0); Push((bool) Stack[-2] == 0)
0x5d2: IF (Stack[-1] == 0) GOTO 0x5d5; Pop(1)

0x5d3: Stack[-3] = (bool) 0
0x5d4: Return(); Pop(0)

0x5d5: Push((int) 0)
0x5d6: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x5d7: IF (Stack[-1] == 0) GOTO 0x5dc; Pop(1)

0x5d8: Push((int) 8)
0x5d9: @ SendWorldWndMessage(Stack[-1])
0x5da: Pop(1)
0x5db: GOTO 0x5e5

0x5dc: Push((int) 0)
0x5dd: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x5de: IF (Stack[-1] == 0) GOTO 0x5e3; Pop(1)

0x5df: Push((int) 9)
0x5e0: @ SendWorldWndMessage(Stack[-1])
0x5e1: Pop(1)
0x5e2: GOTO 0x5e5

0x5e3: Stack[-3] = (bool) 0
0x5e4: Return(); Pop(0)

0x5e5: PushEmpty(float)
0x5e6: Stack[-1] = Stack[-2]
0x5e7: Call2 0x5fd

0x5e8: Pop(1)
0x5e9: PushEmpty(bool, object, string, float, float, float)
0x5ea: Stack[-5] = Stack[-8]
0x5eb: Stack[-4] = "reputation"
0x5ec: Stack[-3] = Stack[-7]
0x5ed: Stack[-2] = (int) 0
0x5ee: Stack[-1] = (int) 1
0x5ef: Call2 0x46d

0x5f0: Pop(6)
0x5f1: Stack[-3] = (bool) 1
0x5f2: Return(); Pop(0)

0x5f3: PushEmpty(object, object)
0x5f4: @ CreateFloatVector(Stack[-1])
0x5f5: Pop(0)
0x5f6: @@ add(Stack[-3])
0x5f7: Pop(0)
0x5f8: Push((int) 14)
0x5f9: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x5fa: Pop(1)
0x5fb: Return(); Pop(2)

0x5fc: Stack[-1] = 0
0x5fd: PushEmpty(object, object)
0x5fe: @ CreateFloatVector(Stack[-1])
0x5ff: Pop(0)
0x600: @@ add(Stack[-3])
0x601: Pop(0)
0x602: Push((int) 16)
0x603: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x604: Pop(1)
0x605: Return(); Pop(2)

0x606: Stack[-1] = 0
0x607: PushEmpty()
0x608: PushEmpty(object)
0x609: Stack[-1] = Stack[-2]
0x60a: Push(-1, 0); TaskCall(0)
0x60b: Call2 0x0

0x60c: Pop(-1, 0); TaskReturn
0x60d: Pop(1)
0x60e: Return(); Pop(0)

0x60f: PushEmpty(float, float)
0x610: Push("health")
0x611: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x612: IF (Stack[-1] == 0) GOTO 0x61b; Pop(1)

0x613: Push("health")
0x614: @ GetProperty(Stack[-1], Stack[-2])
0x615: Pop(1)
0x616: Push((int) 0)
0x617: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x618: IF (Stack[-1] == 0) GOTO 0x61b; Pop(1)

0x619: @ SignalDeath(Stack[-4])
0x61a: Pop(0)
0x61b: Return(); Pop(2)

0x61c: PushEmpty()
0x61d: PushEmpty(object)
0x61e: Stack[-1] = Stack[-2]
0x61f: Call2 0x607

0x620: Pop(1)
0x621: Return(); Pop(0)

0x622: PushEmpty()
0x623: PushEmpty(object, int, float)
0x624: Stack[-3] = Stack[-7]
0x625: Stack[-2] = Stack[-6]
0x626: Stack[-1] = Stack[-5]
0x627: Call2 0x535

0x628: Pop(3)
0x629: Return(); Pop(0)

0x62a: PushEmpty()
0x62b: PushEmpty(object, int, float, cvector, cvector)
0x62c: Stack[-5] = Stack[-11]
0x62d: Stack[-4] = Stack[-10]
0x62e: Stack[-3] = Stack[-9]
0x62f: Stack[-2] = Stack[-7]
0x630: Stack[-1] = Stack[-6]
0x631: Call2 0x579

0x632: Pop(5)
0x633: Return(); Pop(0)

0x634: PushEmpty()
0x635: Push("unholster")
0x636: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x637: IF (Stack[-1] == 0) GOTO 0x63f; Pop(1)

0x638: PushEmpty(bool, object)
0x639: Stack[-1] = Stack[-4]
0x63a: Call2 0x6f0

0x63b: Stack[-5] = Stack[-2]
0x63c: Pop(2)
0x63d: Return(); Pop(0)

0x63e: GOTO 0x652

0x63f: Push("player_shot")
0x640: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x641: IF (Stack[-1] == 0) GOTO 0x649; Pop(1)

0x642: PushEmpty(bool, object)
0x643: Stack[-1] = Stack[-4]
0x644: Call2 0x6f5

0x645: Stack[-5] = Stack[-2]
0x646: Pop(2)
0x647: Return(); Pop(0)

0x648: GOTO 0x652

0x649: Push("battle")
0x64a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x64b: IF (Stack[-1] == 0) GOTO 0x652; Pop(1)

0x64c: PushEmpty(bool, object)
0x64d: Stack[-1] = Stack[-4]
0x64e: Call2 0x6fa

0x64f: Stack[-5] = Stack[-2]
0x650: Pop(2)
0x651: Return(); Pop(0)

0x652: Stack[-3] = (bool) 0
0x653: Return(); Pop(0)

0x654: PushEmpty()
0x655: Push("unholster")
0x656: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x657: IF (Stack[-1] == 0) GOTO 0x65d; Pop(1)

0x658: PushEmpty(object)
0x659: Stack[-1] = Stack[-3]
0x65a: Call2 0x6f3

0x65b: Pop(1)
0x65c: GOTO 0x66c

0x65d: Push("player_shot")
0x65e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x65f: IF (Stack[-1] == 0) GOTO 0x665; Pop(1)

0x660: PushEmpty(object)
0x661: Stack[-1] = Stack[-3]
0x662: Call2 0x6f8

0x663: Pop(1)
0x664: GOTO 0x66c

0x665: Push("battle")
0x666: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x667: IF (Stack[-1] == 0) GOTO 0x66c; Pop(1)

0x668: PushEmpty(object)
0x669: Stack[-1] = Stack[-3]
0x66a: Call2 0x6fd

0x66b: Pop(1)
0x66c: Return(); Pop(0)

0x66d: PushEmpty(bool, bool)
0x66e: PushEmpty(bool)
0x66f: Stack[-1] = (bool) 0
0x670: PushEmpty(bool, object)
0x671: Stack[-1] = Stack[-6]
0x672: Call2 0x6f0

0x673: Pop(1)
0x674: IF (Stack[-1] == 0) GOTO 0x67b; Pop(1)

0x675: PushEmpty(bool, object)
0x676: Stack[-1] = Stack[-6]
0x677: Call2 0x45c

0x678: Pop(1)
0x679: IF (Stack[-1] == 0) GOTO 0x67b; Pop(1)

0x67a: Stack[-1] = (bool) 1
0x67b: IF (Stack[-1] == 0) GOTO 0x682; Pop(1)

0x67c: @@ IsWeaponHolstered(Stack[-1])
0x67d: Pop(0)
0x67e: Pop(0); Push((bool) Stack[-1] == 0)
0x67f: IF (Stack[-1] == 0) GOTO 0x682; Pop(1)

0x680: Stack[-4] = (bool) 1
0x681: Return(); Pop(2)

0x682: Stack[-4] = (bool) 0
0x683: Return(); Pop(2)

0x684: PushEmpty()
0x685: PushEmpty(object)
0x686: Stack[-1] = Stack[-2]
0x687: Call2 0x6f3

0x688: Pop(1)
0x689: Return(); Pop(0)

0x68a: PushEmpty()
0x68b: PushEmpty(bool, object)
0x68c: Stack[-1] = Stack[-3]
0x68d: Call2 0x45c

0x68e: Pop(1)
0x68f: IF (Stack[-1] == 0) GOTO 0x696; Pop(1)

0x690: PushEmpty(object)
0x691: Call2 0x5b5

0x692: Pop(0)
0x693: Push((float)0.0)
0x694: @ ReportReputationChange(Stack[-3], Stack[-2], Stack[-1])
0x695: Pop(2)
0x696: Return(); Pop(0)

0x697: PushEmpty(object, object)
0x698: Push("heal")
0x699: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x69a: IF (Stack[-1] == 0) GOTO 0x6a5; Pop(1)

0x69b: Push("player")
0x69c: @ FindActor(Stack[-2], Stack[-1])
0x69d: Pop(1)
0x69e: PushEmpty(bool, object)
0x69f: Stack[-1] = Stack[-3]
0x6a0: Call2 0x6ff

0x6a1: Stack[-6] = Stack[-2]
0x6a2: Pop(2)
0x6a3: Return(); Pop(2)

0x6a4: Stack[-1] = 0
0x6a5: Stack[-4] = (bool) 0
0x6a6: Return(); Pop(2)

0x6a7: PushEmpty(object, object)
0x6a8: Push("heal")
0x6a9: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x6aa: IF (Stack[-1] == 0) GOTO 0x6b3; Pop(1)

0x6ab: Push("player")
0x6ac: @ FindActor(Stack[-2], Stack[-1])
0x6ad: Pop(1)
0x6ae: PushEmpty(object)
0x6af: Stack[-1] = Stack[-2]
0x6b0: Call2 0x702

0x6b1: Pop(1)
0x6b2: Stack[-1] = 0
0x6b3: Return(); Pop(2)

0x6b4: PushEmpty(string, string)
0x6b5: Stack[-1] = "idle"
0x6b6: Push(Stack[-3])
0x6b7: IF (Stack[-1] == 0) GOTO 0x6b9; Pop(1)

0x6b8: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x6b9: Stack[-4] = Stack[-1]
0x6ba: Return(); Pop(2)

0x6bb: PushEmpty(int, bool, int, bool)
0x6bc: Stack[-2] = (int) 0
0x6bd: Push("all")
0x6be: PushEmpty(string, int)
0x6bf: Stack[-1] = Stack[-5]
0x6c0: Call2 0x6b4

0x6c1: Pop(1)
0x6c2: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x6c3: Pop(2)
0x6c4: Pop(0); Push((bool) Stack[-1] == 0)
0x6c5: IF (Stack[-1] == 0) GOTO 0x6c7; Pop(1)

0x6c6: GOTO 0x6ca

0x6c7: Push((int) 1)
0x6c8: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x6c9: GOTO 0x6bd

0x6ca: Stack[-5] = Stack[-2]
0x6cb: Return(); Pop(4)

0x6cc: PushEmpty()
0x6cd: Stack[-2] = (int) 2
0x6ce: Return(); Pop(0)

0x6cf: PushEmpty()
0x6d0: PushEmpty(object)
0x6d1: Stack[-1] = Stack[-2]
0x6d2: Push(-1, 0); TaskCall(3)
0x6d3: Call2 0x307

0x6d4: Pop(-1, 0); TaskReturn
0x6d5: Pop(1)
0x6d6: Return(); Pop(0)

0x6d7: PushEmpty()
0x6d8: Stack[-2] = (int) 0
0x6d9: Return(); Pop(0)

0x6da: PushEmpty()
0x6db: Return(); Pop(0)

0x6dc: PushEmpty()
0x6dd: Stack[-3] = (int) 0
0x6de: Return(); Pop(0)

0x6df: PushEmpty()
0x6e0: Return(); Pop(0)

0x6e1: PushEmpty()
0x6e2: Stack[-2] = (int) 0
0x6e3: Return(); Pop(0)

0x6e4: PushEmpty()
0x6e5: Return(); Pop(0)

0x6e6: PushEmpty()
0x6e7: Stack[-2] = (int) 0
0x6e8: Return(); Pop(0)

0x6e9: PushEmpty()
0x6ea: Return(); Pop(0)

0x6eb: PushEmpty()
0x6ec: Stack[-3] = (int) 0
0x6ed: Return(); Pop(0)

0x6ee: PushEmpty()
0x6ef: Return(); Pop(0)

0x6f0: PushEmpty()
0x6f1: Stack[-2] = (bool) 0
0x6f2: Return(); Pop(0)

0x6f3: PushEmpty()
0x6f4: Return(); Pop(0)

0x6f5: PushEmpty()
0x6f6: Stack[-2] = (bool) 0
0x6f7: Return(); Pop(0)

0x6f8: PushEmpty()
0x6f9: Return(); Pop(0)

0x6fa: PushEmpty()
0x6fb: Stack[-2] = (bool) 0
0x6fc: Return(); Pop(0)

0x6fd: PushEmpty()
0x6fe: Return(); Pop(0)

0x6ff: PushEmpty()
0x700: Stack[-2] = (bool) 0
0x701: Return(); Pop(0)

0x702: PushEmpty()
0x703: Return(); Pop(0)

0x704: Push(GlobalVars[0])
0x705: Stack[-1] = (bool) 0
0x706: GlobalVars[0] = Stack[-1]; Pop(1)
0x707: Return(); Pop(0)

0x708: PushEmpty(bool, bool)
0x709: @ IsPlayerActor(Stack[-3], Stack[-1])
0x70a: Pop(0)
0x70b: Stack[-4] = Stack[-1]
0x70c: Return(); Pop(2)

0x70d: PushEmpty()
0x70e: Stack[-2] = (int) 0
0x70f: Return(); Pop(0)

0x710: PushEmpty()
0x711: Return(); Pop(0)

0x712: PushEmpty()
0x713: Stack[-4] = (bool) 0
0x714: Return(); Pop(0)

0x715: PushEmpty()
0x716: PushEmpty(bool, object)
0x717: Stack[-1] = Stack[-3]
0x718: Call2 0x45c

0x719: Pop(1)
0x71a: IF (Stack[-1] == 0) GOTO 0x720; Pop(1)

0x71b: PushEmpty(bool, object, float)
0x71c: Stack[-2] = Stack[-4]
0x71d: Stack[-1] = (float) -0.05
0x71e: Call2 0x5d0

0x71f: Pop(3)
0x720: Push(GlobalVars[0])
0x721: Stack[-1] = (bool) 1
0x722: GlobalVars[0] = Stack[-1]; Pop(1)
0x723: Push((int) 50)
0x724: Push((int) 40)
0x725: @ SetRTEnvelope(Stack[-2], Stack[-1])
0x726: Pop(2)
0x727: Return(); Pop(0)

0x728: PushEmpty(object)
0x729: Call2 0x5b5

0x72a: Pop(0)
0x72b: @ RemoveActor(Stack[-1])
0x72c: Pop(1)
0x72d: Return(); Pop(0)

