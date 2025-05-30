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
	branch
	player
	reputation
	GenerateMoney: iMin > iMax
	Money
	SetItemName
	Organ
	SetProperty
	GetItemID
	liver
	kidney
	heart
	blood
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
	health
	unholster
	player_shot
	battle
	IsWeaponHolstered
	heal
	idle
	class
	rat
	rat_big
	dog

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
	FindLongestDir (6 args)
	Trace (1 args)
	Rotate (2 args)
	MovePoint (3 args)
	FindDirLength (3 args)
	GetScene (1 args)
	IsDead (1 args)
	GetSecondaryAnimationType (1 args)
	FadeSecondaryAnimation (4 args)
	CreateVectorVector (1 args)
	GetGeometryLocator (4 args)
	AddActorByType (6 args)
	RotateAsync (2 args)
	IsLoaded (1 args)
	IsExisting3DSound (2 args)
	Is3DSoundLoaded (2 args)
	GetEyesHeight (1 args)
	PlayGlobalSound (2 args)
	self (1 args)
	GetGameTime (1 args)
	GetVariable (2 args)
	FindActor (2 args)
	WorkWithCorpse (1 args)
	Barter (1 args)
	AddItem (4 args)
	CreateInvItem (1 args)
	GetInvItemByName (2 args)
	GetProperty (2 args)
	SignalDeath (1 args)
	ReportReputationChange (3 args)
	HasAnimation (3 args)
	CanSee (2 args)
	IsOverrideActive (1 args)
	ReportReputationChange (4 args)
	SetRTEnvelope (2 args)

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
	GTASK_3 Vars = (object) Params = 1
		EVENT_0 Op = 0x33f Vars = (object)
		EVENT_17 Op = 0x353 Vars = (object)
		EVENT_30 Op = 0x36b Vars = (object, object, bool)
		EVENT_40 Op = 0x387 Vars = (object)
		EVENT_42 Op = 0x39b Vars = (object, string)
		EVENT_26 Op = 0x3c0 Vars = (string)
		EVENT_41 Op = 0x3d9 Vars = (object)
		EVENT_7 Op = 0x3e2 Vars = (int)
		EVENT_6 Op = 0x405 Vars = ()
		EVENT_1 Op = 0x40c Vars = (object)
	GTASK_4 Vars = (object, cvector, bool) Params = 1
		EVENT_6 Op = 0x41a Vars = ()
		EVENT_7 Op = 0x488 Vars = (int)
		EVENT_41 Op = 0x4c3 Vars = (object)
	GTASK_5 Vars = (object, cvector, bool) Params = 1
		EVENT_7 Op = 0x543 Vars = (int)
		EVENT_41 Op = 0x57e Vars = (object)
	GTASK_6 Vars = (object, cvector, bool) Params = 1
		EVENT_6 Op = 0x597 Vars = ()
		EVENT_7 Op = 0x605 Vars = (int)
		EVENT_41 Op = 0x640 Vars = (object)
	GTASK_7 Vars = (object, cvector, bool) Params = 1
		EVENT_6 Op = 0x659 Vars = ()
		EVENT_7 Op = 0x6c7 Vars = (int)
		EVENT_41 Op = 0x702 Vars = (object)

Events:
EVENT_16 Op = 0x9ad Vars = (object, string)
EVENT_41 Op = 0x9ba Vars = (object)
EVENT_22 Op = 0x9c0 Vars = (object, int, float, float)
EVENT_43 Op = 0x9c8 Vars = (object, int, float, float, cvector, cvector)

0x0: PushEmpty()
0x1: EventDisable(0)
0x2: PushEmpty(object)
0x3: Stack[-1] = Stack[-2]
0x4: Call2 0x21

0x5: Pop(1)
0x6: PushEmpty(object)
0x7: Stack[-1] = Stack[-2]
0x8: Call2 0xb4c

0x9: Pop(1)
0xa: EventEnable(0)
0xb: @ Hold()
0xc: Pop(0)
0xd: GOTO 0xb

0xe: Return(); Pop(0)

0xf: PushEmpty(int, int)
0x10: PushEmpty(int, object)
0x11: Stack[-1] = Stack[-5]
0x12: Call2 0xaeb

0x13: Stack[-3] = Stack[-2]
0x14: Pop(2)
0x15: Push((int) 0)
0x16: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x17: IF (Stack[-1] == 0) GOTO 0x1c; Pop(1)

0x18: PushEmpty(object)
0x19: Stack[-1] = Stack[-4]
0x1a: Call2 0xaee

0x1b: Pop(1)
0x1c: Return(); Pop(2)

0x1d: PushEmpty()
0x1e: Call2 0xaf4

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
0x67: Call2 0x81a

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
0x89: Call2 0x81a

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
0xa0: Call2 0xb2b

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
0xac: Call2 0x80a

0xad: Pop(0)
0xae: Pop(1); Push((bool) Stack[-1] == 0)
0xaf: IF (Stack[-1] == 0) GOTO 0xb3; Pop(1)

0xb0: PushEmpty()
0xb1: Call2 0xaf4

0xb2: Pop(0)
0xb3: Return(); Pop(0)

0xb4: PushEmpty(int, int)
0xb5: PushEmpty(int, object)
0xb6: Stack[-1] = Stack[-5]
0xb7: Call2 0xaeb

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
0xc5: Call2 0xaee

0xc6: Pop(1)
0xc7: Return(); Pop(2)

0xc8: PushEmpty(int, int)
0xc9: PushEmpty(object)
0xca: Stack[-1] = Stack[-4]
0xcb: Call2 0xa28

0xcc: Pop(1)
0xcd: PushEmpty(int, object)
0xce: Stack[-1] = Stack[-5]
0xcf: Call2 0xa7b

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
0xdd: Call2 0xa85

0xde: Pop(1)
0xdf: Return(); Pop(2)

0xe0: PushEmpty(int, int)
0xe1: PushEmpty(bool, object, object, bool)
0xe2: Stack[-3] = Stack[-9]
0xe3: Stack[-2] = Stack[-8]
0xe4: Stack[-1] = Stack[-7]
0xe5: Call2 0xb43

0xe6: Pop(3)
0xe7: IF (Stack[-1] == 0) GOTO 0xfb; Pop(1)

0xe8: PushEmpty(int, object, bool)
0xe9: Stack[-2] = Stack[-8]
0xea: Stack[-1] = Stack[-6]
0xeb: Call2 0xa8d

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
0xf9: Call2 0xa97

0xfa: Pop(1)
0xfb: Return(); Pop(2)

0xfc: PushEmpty(int, int)
0xfd: PushEmpty(int, object)
0xfe: Stack[-1] = Stack[-5]
0xff: Call2 0xae1

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
0x10d: Call2 0xae4

0x10e: Pop(1)
0x10f: Return(); Pop(2)

0x110: PushEmpty(int, int)
0x111: PushEmpty(bool, object, string)
0x112: Stack[-2] = Stack[-7]
0x113: Stack[-1] = Stack[-6]
0x114: Call2 0x9d2

0x115: Pop(2)
0x116: IF (Stack[-1] == 0) GOTO 0x120; Pop(1)

0x117: PushEmpty()
0x118: Call2 0x16f

0x119: Pop(0)
0x11a: PushEmpty(object, string)
0x11b: Stack[-2] = Stack[-6]
0x11c: Stack[-1] = Stack[-5]
0x11d: Call2 0x9f2

0x11e: Pop(2)
0x11f: GOTO 0x134

0x120: PushEmpty(int, string, object)
0x121: Stack[-2] = Stack[-6]
0x122: Stack[-1] = Stack[-7]
0x123: Call2 0xae6

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
0x132: Call2 0xae9

0x133: Pop(2)
0x134: Return(); Pop(2)

0x135: PushEmpty()
0x136: PushEmpty(bool, string)
0x137: Stack[-1] = Stack[-3]
0x138: Call2 0xa35

0x139: Pop(1)
0x13a: IF (Stack[-1] == 0) GOTO 0x142; Pop(1)

0x13b: PushEmpty()
0x13c: Call2 0x16f

0x13d: Pop(0)
0x13e: PushEmpty(string)
0x13f: Stack[-1] = Stack[-2]
0x140: Call2 0xa45

0x141: Pop(1)
0x142: Return(); Pop(0)

0x143: PushEmpty()
0x144: PushEmpty(bool, object)
0x145: Stack[-1] = Stack[-3]
0x146: Call2 0xa0b

0x147: Pop(1)
0x148: IF (Stack[-1] == 0) GOTO 0x151; Pop(1)

0x149: PushEmpty()
0x14a: Call2 0x16f

0x14b: Pop(0)
0x14c: PushEmpty(object)
0x14d: Stack[-1] = Stack[-2]
0x14e: Call2 0xa22

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
0x16c: Call2 0xaf4

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
0x185: Call2 0x9ba

0x186: Pop(1)
0x187: Return(); Pop(0)

0x188: PushEmpty(bool, int, bool, int)
0x189: PushEmpty(bool, object)
0x18a: Stack[-1] = Stack[-7]
0x18b: Call2 0x769

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
0x19a: Call2 0xa6a

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
0x1a8: Call2 0xa73

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
0x210: Call2 0xaeb

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
0x21e: Call2 0xaee

0x21f: Pop(1)
0x220: Return(); Pop(2)

0x221: PushEmpty(int, int)
0x222: PushEmpty(object)
0x223: Stack[-1] = Stack[-4]
0x224: Call2 0xa28

0x225: Pop(1)
0x226: PushEmpty(int, object)
0x227: Stack[-1] = Stack[-5]
0x228: Call2 0xa7b

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
0x236: Call2 0xa85

0x237: Pop(1)
0x238: Return(); Pop(2)

0x239: PushEmpty(int, int)
0x23a: PushEmpty(bool, object, object, bool)
0x23b: Stack[-3] = Stack[-9]
0x23c: Stack[-2] = Stack[-8]
0x23d: Stack[-1] = Stack[-7]
0x23e: Call2 0xb43

0x23f: Pop(3)
0x240: IF (Stack[-1] == 0) GOTO 0x254; Pop(1)

0x241: PushEmpty(int, object, bool)
0x242: Stack[-2] = Stack[-8]
0x243: Stack[-1] = Stack[-6]
0x244: Call2 0xa8d

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
0x252: Call2 0xa97

0x253: Pop(1)
0x254: Return(); Pop(2)

0x255: PushEmpty(int, int)
0x256: PushEmpty(int, object)
0x257: Stack[-1] = Stack[-5]
0x258: Call2 0xae1

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
0x266: Call2 0xae4

0x267: Pop(1)
0x268: Return(); Pop(2)

0x269: PushEmpty(int, int)
0x26a: PushEmpty(bool, object, string)
0x26b: Stack[-2] = Stack[-7]
0x26c: Stack[-1] = Stack[-6]
0x26d: Call2 0x9d2

0x26e: Pop(2)
0x26f: IF (Stack[-1] == 0) GOTO 0x279; Pop(1)

0x270: PushEmpty()
0x271: Call2 0x302

0x272: Pop(0)
0x273: PushEmpty(object, string)
0x274: Stack[-2] = Stack[-6]
0x275: Stack[-1] = Stack[-5]
0x276: Call2 0x9f2

0x277: Pop(2)
0x278: GOTO 0x28d

0x279: PushEmpty(int, string, object)
0x27a: Stack[-2] = Stack[-6]
0x27b: Stack[-1] = Stack[-7]
0x27c: Call2 0xae6

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
0x28b: Call2 0xae9

0x28c: Pop(2)
0x28d: Return(); Pop(2)

0x28e: PushEmpty()
0x28f: PushEmpty(bool, string)
0x290: Stack[-1] = Stack[-3]
0x291: Call2 0xa35

0x292: Pop(1)
0x293: IF (Stack[-1] == 0) GOTO 0x29b; Pop(1)

0x294: PushEmpty()
0x295: Call2 0x302

0x296: Pop(0)
0x297: PushEmpty(string)
0x298: Stack[-1] = Stack[-2]
0x299: Call2 0xa45

0x29a: Pop(1)
0x29b: Return(); Pop(0)

0x29c: PushEmpty()
0x29d: Call2 0x302

0x29e: Pop(0)
0x29f: PushEmpty()
0x2a0: Call2 0xaf4

0x2a1: Pop(0)
0x2a2: Return(); Pop(0)

0x2a3: PushEmpty()
0x2a4: PushEmpty(bool, object)
0x2a5: Stack[-1] = Stack[-3]
0x2a6: Call2 0xa0b

0x2a7: Pop(1)
0x2a8: IF (Stack[-1] == 0) GOTO 0x2b0; Pop(1)

0x2a9: PushEmpty()
0x2aa: Call2 0x302

0x2ab: Pop(0)
0x2ac: PushEmpty(object)
0x2ad: Stack[-1] = Stack[-2]
0x2ae: Call2 0xa22

0x2af: Pop(1)
0x2b0: Return(); Pop(0)

0x2b1: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x2b2: @ WaitForAnimEnd()
0x2b3: Pop(0)
0x2b4: PushEmpty(bool)
0x2b5: Call2 0x80a

0x2b6: Pop(0)
0x2b7: Pop(1); Push((bool) Stack[-1] == 0)
0x2b8: IF (Stack[-1] == 0) GOTO 0x2ba; Pop(1)

0x2b9: Return(); Pop(14)

0x2ba: PushEmpty(int)
0x2bb: Call2 0xa59

0x2bc: Stack[-8] = Stack[-1]
0x2bd: Pop(1)
0x2be: Stack[-6] = (int) 0
0x2bf: PushEmpty(bool)
0x2c0: Stack[-1] = (bool) 0
0x2c1: Push((int) 5)
0x2c2: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x2c3: IF (Stack[-1] == 0) GOTO 0x2c9; Pop(1)

0x2c4: PushEmpty(bool)
0x2c5: Call2 0x80a

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
0x2d7: Call2 0xa52

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

0x307: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x308: Stack[0 + Tasks[-1].StackPointer] = Stack[-7]
0x309: PushEmpty()
0x30a: Call2 0x33a

0x30b: Pop(0)
0x30c: @ GetDirection(Stack[-3])
0x30d: Pop(0)
0x30e: PushEmpty(cvector, object)
0x30f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x310: Call2 0x720

0x311: Stack[-4] = Stack[-2]
0x312: Pop(2)
0x313: PushEmpty(float, cvector, cvector)
0x314: Stack[-2] = Stack[-6]
0x315: Stack[-1] = Stack[-5]
0x316: Call2 0x86e

0x317: Pop(2)
0x318: Push((int) 0)
0x319: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x31a: IF (Stack[-1] == 0) GOTO 0x321; Pop(1)

0x31b: PushEmpty(object)
0x31c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x31d: Call2 0x7ff

0x31e: Pop(1)
0x31f: Stack[-1] = (bool) 1
0x320: GOTO 0x324

0x321: Push((float)1.5)
0x322: @ Sleep(Stack[-1], Stack[-2])
0x323: Pop(1)
0x324: Push(Stack[-1])
0x325: IF (Stack[-1] == 0) GOTO 0x334; Pop(1)

0x326: PushEmpty(object)
0x327: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x328: Call2 0x7ff

0x329: Pop(1)
0x32a: Push((int) 111)
0x32b: Push((float)0.5)
0x32c: @ SetTimer(Stack[-2], Stack[-1])
0x32d: Pop(2)
0x32e: Push((float)5.0)
0x32f: @ Sleep(Stack[-1])
0x330: Pop(1)
0x331: Push((int) 111)
0x332: @ KillTimer(Stack[-1])
0x333: Pop(1)
0x334: @ StopAsync()
0x335: Pop(0)
0x336: Push("head")
0x337: @ UnlookAsync(Stack[-1])
0x338: Pop(1)
0x339: Return(); Pop(6)

0x33a: PushEmpty(object)
0x33b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x33c: Call2 0x80f

0x33d: Pop(1)
0x33e: Return(); Pop(0)

0x33f: PushEmpty(int, int)
0x340: PushEmpty(int, object)
0x341: Stack[-1] = Stack[-5]
0x342: Call2 0xaeb

0x343: Stack[-3] = Stack[-2]
0x344: Pop(2)
0x345: Push((int) 0)
0x346: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x347: IF (Stack[-1] == 0) GOTO 0x352; Pop(1)

0x348: Push((int) 1)
0x349: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x34a: IF (Stack[-1] == 0) GOTO 0x34e; Pop(1)

0x34b: PushEmpty()
0x34c: Call2 0x3ce

0x34d: Pop(0)
0x34e: PushEmpty(object)
0x34f: Stack[-1] = Stack[-4]
0x350: Call2 0xaee

0x351: Pop(1)
0x352: Return(); Pop(2)

0x353: PushEmpty(int, int)
0x354: PushEmpty(object)
0x355: Stack[-1] = Stack[-4]
0x356: Call2 0xa28

0x357: Pop(1)
0x358: PushEmpty(int, object)
0x359: Stack[-1] = Stack[-5]
0x35a: Call2 0xa7b

0x35b: Stack[-3] = Stack[-2]
0x35c: Pop(2)
0x35d: Push((int) 0)
0x35e: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x35f: IF (Stack[-1] == 0) GOTO 0x36a; Pop(1)

0x360: Push((int) 1)
0x361: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x362: IF (Stack[-1] == 0) GOTO 0x366; Pop(1)

0x363: PushEmpty()
0x364: Call2 0x3ce

0x365: Pop(0)
0x366: PushEmpty(object)
0x367: Stack[-1] = Stack[-4]
0x368: Call2 0xa85

0x369: Pop(1)
0x36a: Return(); Pop(2)

0x36b: PushEmpty(int, int)
0x36c: PushEmpty(bool, object, object, bool)
0x36d: Stack[-3] = Stack[-9]
0x36e: Stack[-2] = Stack[-8]
0x36f: Stack[-1] = Stack[-7]
0x370: Call2 0xb43

0x371: Pop(3)
0x372: IF (Stack[-1] == 0) GOTO 0x386; Pop(1)

0x373: PushEmpty(int, object, bool)
0x374: Stack[-2] = Stack[-8]
0x375: Stack[-1] = Stack[-6]
0x376: Call2 0xa8d

0x377: Stack[-4] = Stack[-3]
0x378: Pop(3)
0x379: Push((int) 0)
0x37a: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x37b: IF (Stack[-1] == 0) GOTO 0x386; Pop(1)

0x37c: Push((int) 1)
0x37d: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x37e: IF (Stack[-1] == 0) GOTO 0x382; Pop(1)

0x37f: PushEmpty()
0x380: Call2 0x3ce

0x381: Pop(0)
0x382: PushEmpty(object)
0x383: Stack[-1] = Stack[-6]
0x384: Call2 0xa97

0x385: Pop(1)
0x386: Return(); Pop(2)

0x387: PushEmpty(int, int)
0x388: PushEmpty(int, object)
0x389: Stack[-1] = Stack[-5]
0x38a: Call2 0xae1

0x38b: Stack[-3] = Stack[-2]
0x38c: Pop(2)
0x38d: Push((int) 0)
0x38e: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x38f: IF (Stack[-1] == 0) GOTO 0x39a; Pop(1)

0x390: Push((int) 1)
0x391: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x392: IF (Stack[-1] == 0) GOTO 0x396; Pop(1)

0x393: PushEmpty()
0x394: Call2 0x3ce

0x395: Pop(0)
0x396: PushEmpty(object)
0x397: Stack[-1] = Stack[-4]
0x398: Call2 0xae4

0x399: Pop(1)
0x39a: Return(); Pop(2)

0x39b: PushEmpty(int, int)
0x39c: PushEmpty(bool, object, string)
0x39d: Stack[-2] = Stack[-7]
0x39e: Stack[-1] = Stack[-6]
0x39f: Call2 0x9d2

0x3a0: Pop(2)
0x3a1: IF (Stack[-1] == 0) GOTO 0x3ab; Pop(1)

0x3a2: PushEmpty()
0x3a3: Call2 0x3ce

0x3a4: Pop(0)
0x3a5: PushEmpty(object, string)
0x3a6: Stack[-2] = Stack[-6]
0x3a7: Stack[-1] = Stack[-5]
0x3a8: Call2 0x9f2

0x3a9: Pop(2)
0x3aa: GOTO 0x3bf

0x3ab: PushEmpty(int, string, object)
0x3ac: Stack[-2] = Stack[-6]
0x3ad: Stack[-1] = Stack[-7]
0x3ae: Call2 0xae6

0x3af: Stack[-4] = Stack[-3]
0x3b0: Pop(3)
0x3b1: Push((int) 0)
0x3b2: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x3b3: IF (Stack[-1] == 0) GOTO 0x3bf; Pop(1)

0x3b4: Push((int) 1)
0x3b5: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x3b6: IF (Stack[-1] == 0) GOTO 0x3ba; Pop(1)

0x3b7: PushEmpty()
0x3b8: Call2 0x3ce

0x3b9: Pop(0)
0x3ba: PushEmpty(string, object)
0x3bb: Stack[-2] = Stack[-5]
0x3bc: Stack[-1] = Stack[-6]
0x3bd: Call2 0xae9

0x3be: Pop(2)
0x3bf: Return(); Pop(2)

0x3c0: PushEmpty()
0x3c1: PushEmpty(bool, string)
0x3c2: Stack[-1] = Stack[-3]
0x3c3: Call2 0xa35

0x3c4: Pop(1)
0x3c5: IF (Stack[-1] == 0) GOTO 0x3cd; Pop(1)

0x3c6: PushEmpty()
0x3c7: Call2 0x3ce

0x3c8: Pop(0)
0x3c9: PushEmpty(string)
0x3ca: Stack[-1] = Stack[-2]
0x3cb: Call2 0xa45

0x3cc: Pop(1)
0x3cd: Return(); Pop(0)

0x3ce: @ StopGroup0()
0x3cf: Pop(0)
0x3d0: @ StopAsync()
0x3d1: Pop(0)
0x3d2: Push("head")
0x3d3: @ UnlookAsync(Stack[-1])
0x3d4: Pop(1)
0x3d5: Push((int) 111)
0x3d6: @ KillTimer(Stack[-1])
0x3d7: Pop(1)
0x3d8: Return(); Pop(0)

0x3d9: PushEmpty()
0x3da: PushEmpty()
0x3db: Call2 0x3ce

0x3dc: Pop(0)
0x3dd: PushEmpty(object)
0x3de: Stack[-1] = Stack[-2]
0x3df: Call2 0x9ba

0x3e0: Pop(1)
0x3e1: Return(); Pop(0)

0x3e2: PushEmpty(cvector, cvector, cvector, cvector)
0x3e3: Push((int) 111)
0x3e4: Pop(1); Push((bool) Stack[-6] != Stack[-1])
0x3e5: IF (Stack[-1] == 0) GOTO 0x3e7; Pop(1)

0x3e6: Return(); Pop(4)

0x3e7: PushEmpty(bool, object)
0x3e8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3e9: Call2 0x769

0x3ea: Pop(1)
0x3eb: Pop(1); Push((bool) Stack[-1] == 0)
0x3ec: IF (Stack[-1] == 0) GOTO 0x3f1; Pop(1)

0x3ed: PushEmpty()
0x3ee: Call2 0x3ce

0x3ef: Pop(0)
0x3f0: Return(); Pop(4)

0x3f1: @ GetDirection(Stack[-2])
0x3f2: Pop(0)
0x3f3: PushEmpty(cvector, object)
0x3f4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3f5: Call2 0x720

0x3f6: Stack[-3] = Stack[-2]
0x3f7: Pop(2)
0x3f8: PushEmpty(float, cvector, cvector)
0x3f9: Stack[-2] = Stack[-5]
0x3fa: Stack[-1] = Stack[-4]
0x3fb: Call2 0x86e

0x3fc: Pop(2)
0x3fd: Push((float)0.5)
0x3fe: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x3ff: IF (Stack[-1] == 0) GOTO 0x404; Pop(1)

0x400: PushEmpty(object)
0x401: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x402: Call2 0x7ff

0x403: Pop(1)
0x404: Return(); Pop(4)

0x405: PushEmpty()
0x406: Call2 0x3ce

0x407: Pop(0)
0x408: PushEmpty()
0x409: Call2 0xaf4

0x40a: Pop(0)
0x40b: Return(); Pop(0)

0x40c: PushEmpty()
0x40d: PushEmpty(bool, object)
0x40e: Stack[-1] = Stack[-3]
0x40f: Call2 0xa0b

0x410: Pop(1)
0x411: IF (Stack[-1] == 0) GOTO 0x419; Pop(1)

0x412: PushEmpty()
0x413: Call2 0x3ce

0x414: Pop(0)
0x415: PushEmpty(object)
0x416: Stack[-1] = Stack[-2]
0x417: Call2 0xa22

0x418: Pop(1)
0x419: Return(); Pop(0)

0x41a: PushEmpty()
0x41b: Call2 0x4bc

0x41c: Pop(0)
0x41d: PushEmpty()
0x41e: Call2 0xaf4

0x41f: Pop(0)
0x420: Return(); Pop(0)

0x421: PushEmpty(cvector, cvector, cvector, cvector, cvector, float, cvector, cvector, cvector, cvector, cvector, float)
0x422: @ GetPosition(Stack[-6])
0x423: Pop(0)
0x424: @@ GetPosition(Stack[-5])
0x425: Pop(0)
0x426: @ GetDirection(Stack[-4])
0x427: Pop(0)
0x428: PushEmpty(cvector, cvector)
0x429: PushEmpty(cvector, cvector)
0x42a: Stack[-1] = Stack[-10] - Stack[-9]; Pop(0);
0x42b: Call2 0x849

0x42c: Pop(1)
0x42d: Push((float)0.75)
0x42e: Pop(1); Push(Stack[-8] * Stack[-1]);
0x42f: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x430: Call2 0x849

0x431: Stack[-5] = Stack[-2]
0x432: Pop(2)
0x433: Push((int) 32)
0x434: Push((float)7000.0)
0x435: @ FindLongestDir(Stack[-4], Stack[-3], Stack[-5], Stack[-15], Stack[-2], Stack[-1])
0x436: Pop(2)
0x437: Push((int) 100)
0x438: Stack[-2] = Stack[-2] - Stack[-1]; Pop(1);
0x439: Push((int) 0)
0x43a: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x43b: IF (Stack[-1] == 0) GOTO 0x43d; Pop(1)

0x43c: Stack[-1] = (int) 0
0x43d: Stack[-14] = Stack[-2] * Stack[-1]; Pop(0);
0x43e: Return(); Pop(12)

0x43f: PushEmpty(cvector, float, bool, cvector, float, cvector, float, bool, cvector, float)
0x440: Stack[0 + Tasks[-1].StackPointer] = Stack[-11]
0x441: PushEmpty(cvector, float)
0x442: Stack[-1] = (float) 1.74533
0x443: Call2 0x421

0x444: Stack[-7] = Stack[-2]
0x445: Pop(2)
0x446: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x447: Push((float)2500.0)
0x448: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x449: IF (Stack[-1] == 0) GOTO 0x45c; Pop(1)

0x44a: PushEmpty(cvector, float)
0x44b: Stack[-1] = (float) 2.61799
0x44c: Call2 0x421

0x44d: Stack[-7] = Stack[-2]
0x44e: Pop(2)
0x44f: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x450: Push((float)2500.0)
0x451: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x452: IF (Stack[-1] == 0) GOTO 0x45c; Pop(1)

0x453: Push("Can't retreat, distance: ")
0x454: Pop(0); Push(Sqrt(Stack[-5]))
0x455: Pop(2); Push(Stack[-2] + Stack[-1]);
0x456: @ Trace(Stack[-1])
0x457: Pop(1)
0x458: Push((float)0.5)
0x459: @ Sleep(Stack[-1])
0x45a: Pop(1)
0x45b: Return(); Pop(10)

0x45c: Push(CvectorIndex(Stack[-5], 0))
0x45d: Push(CvectorIndex(Stack[-6], 2))
0x45e: @ Rotate(Stack[-2], Stack[-1])
0x45f: Pop(2)
0x460: PushEmpty(cvector)
0x461: Call2 0x71b

0x462: Pop(0)
0x463: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-6]; Pop(1);
0x464: Push((int) 120)
0x465: Push((float)0.5)
0x466: @ SetTimer(Stack[-2], Stack[-1])
0x467: Pop(2)
0x468: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x469: Push((int) 1)
0x46a: @ MovePoint(Stack[-1], Stack[-1], Stack[-4])
0x46b: Pop(1)
0x46c: Push(Stack[-3])
0x46d: IF (Stack[-1] == 0) GOTO 0x485; Pop(1)

0x46e: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x46f: IF (Stack[-1] == 0) GOTO 0x472; Pop(1)

0x470: GOTO 0x487

0x471: GOTO 0x485

0x472: PushEmpty(cvector, float)
0x473: Stack[-1] = (float) 2.61799
0x474: Call2 0x421

0x475: Stack[-4] = Stack[-2]
0x476: Pop(2)
0x477: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x478: Push((float)2500.0)
0x479: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x47a: IF (Stack[-1] == 0) GOTO 0x484; Pop(1)

0x47b: PushEmpty(cvector)
0x47c: Call2 0x71b

0x47d: Pop(0)
0x47e: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x47f: Push((int) 120)
0x480: Push((float)0.5)
0x481: @ SetTimer(Stack[-2], Stack[-1])
0x482: Pop(2)
0x483: GOTO 0x485

0x484: GOTO 0x487

0x485: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x486: IF (Stack[-1] == 0) GOTO 0x469; Pop(1)

0x487: Return(); Pop(10)

0x488: PushEmpty(cvector, float, cvector, float, cvector, float, cvector, float)
0x489: Push((int) 120)
0x48a: Pop(1); Push((bool) Stack[-10] != Stack[-1])
0x48b: IF (Stack[-1] == 0) GOTO 0x48d; Pop(1)

0x48c: Return(); Pop(8)

0x48d: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x48e: IF (Stack[-1] == 0) GOTO 0x496; Pop(1)

0x48f: @ Stop()
0x490: Pop(0)
0x491: Push((int) 1)
0x492: @ KillTimer(Stack[-1])
0x493: Pop(1)
0x494: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x495: GOTO 0x4bb

0x496: @ GetDirection(Stack[-4])
0x497: Pop(0)
0x498: Push((float)7000.0)
0x499: @ FindDirLength(Stack[-4], Stack[-5], Stack[-1])
0x49a: Pop(1)
0x49b: PushEmpty(cvector, float)
0x49c: Stack[-1] = (float) 1.74533
0x49d: Call2 0x421

0x49e: Stack[-4] = Stack[-2]
0x49f: Pop(2)
0x4a0: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x4a1: PushEmpty(bool)
0x4a2: Stack[-1] = (bool) 0
0x4a3: Push((float)2500.0)
0x4a4: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x4a5: IF (Stack[-1] == 0) GOTO 0x4b4; Pop(1)

0x4a6: PushEmpty(bool)
0x4a7: Stack[-1] = (bool) 1
0x4a8: Pop(0); Push(Stack[-5] * Stack[-5]);
0x4a9: Push((float)2.25)
0x4aa: Pop(2); Push(Stack[-2] * Stack[-1]);
0x4ab: Pop(1); Push((bool) Stack[-4] >= Stack[-1])
0x4ac: IF (Stack[-1] == 0) GOTO 0x4b2; Pop(1)

0x4ad: PushEmpty(bool)
0x4ae: Call2 0x4cc

0x4af: Pop(0)
0x4b0: IF (Stack[-1] == 0) GOTO 0x4b2; Pop(1)

0x4b1: Stack[-1] = (bool) 0
0x4b2: IF (Stack[-1] == 0) GOTO 0x4b4; Pop(1)

0x4b3: Stack[-1] = (bool) 1
0x4b4: IF (Stack[-1] == 0) GOTO 0x4bb; Pop(1)

0x4b5: @ Stop()
0x4b6: Pop(0)
0x4b7: PushEmpty(cvector)
0x4b8: Call2 0x71b

0x4b9: Pop(0)
0x4ba: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x4bb: Return(); Pop(8)

0x4bc: @ Stop()
0x4bd: Pop(0)
0x4be: Push((int) 120)
0x4bf: @ KillTimer(Stack[-1])
0x4c0: Pop(1)
0x4c1: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x4c2: Return(); Pop(0)

0x4c3: PushEmpty()
0x4c4: PushEmpty()
0x4c5: Call2 0x4bc

0x4c6: Pop(0)
0x4c7: PushEmpty(object)
0x4c8: Stack[-1] = Stack[-2]
0x4c9: Call2 0x9ba

0x4ca: Pop(1)
0x4cb: Return(); Pop(0)

0x4cc: PushEmpty(cvector, cvector, cvector, cvector)
0x4cd: @ GetDirection(Stack[-2])
0x4ce: Pop(0)
0x4cf: PushEmpty(cvector, object)
0x4d0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4d1: Call2 0x720

0x4d2: Stack[-3] = Stack[-2]
0x4d3: Pop(2)
0x4d4: PushEmpty(float, cvector, cvector)
0x4d5: Stack[-2] = Stack[-5]
0x4d6: Stack[-1] = Stack[-4]
0x4d7: Call2 0x853

0x4d8: Pop(2)
0x4d9: Push((float)-0.34202)
0x4da: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0x4db: Return(); Pop(4)

0x4dc: PushEmpty(cvector, cvector, cvector, cvector, cvector, float, cvector, cvector, cvector, cvector, cvector, float)
0x4dd: @ GetPosition(Stack[-6])
0x4de: Pop(0)
0x4df: @@ GetPosition(Stack[-5])
0x4e0: Pop(0)
0x4e1: @ GetDirection(Stack[-4])
0x4e2: Pop(0)
0x4e3: PushEmpty(cvector, cvector)
0x4e4: PushEmpty(cvector, cvector)
0x4e5: Stack[-1] = Stack[-10] - Stack[-9]; Pop(0);
0x4e6: Call2 0x849

0x4e7: Pop(1)
0x4e8: Push((float)0.75)
0x4e9: Pop(1); Push(Stack[-8] * Stack[-1]);
0x4ea: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x4eb: Call2 0x849

0x4ec: Stack[-5] = Stack[-2]
0x4ed: Pop(2)
0x4ee: Push((int) 32)
0x4ef: Push((float)7000.0)
0x4f0: @ FindLongestDir(Stack[-4], Stack[-3], Stack[-5], Stack[-15], Stack[-2], Stack[-1])
0x4f1: Pop(2)
0x4f2: Push((int) 100)
0x4f3: Stack[-2] = Stack[-2] - Stack[-1]; Pop(1);
0x4f4: Push((int) 0)
0x4f5: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x4f6: IF (Stack[-1] == 0) GOTO 0x4f8; Pop(1)

0x4f7: Stack[-1] = (int) 0
0x4f8: Stack[-14] = Stack[-2] * Stack[-1]; Pop(0);
0x4f9: Return(); Pop(12)

0x4fa: PushEmpty(cvector, float, bool, cvector, float, cvector, float, bool, cvector, float)
0x4fb: Stack[0 + Tasks[-1].StackPointer] = Stack[-11]
0x4fc: PushEmpty(cvector, float)
0x4fd: Stack[-1] = (float) 1.74533
0x4fe: Call2 0x4dc

0x4ff: Stack[-7] = Stack[-2]
0x500: Pop(2)
0x501: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x502: Push((float)2500.0)
0x503: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x504: IF (Stack[-1] == 0) GOTO 0x517; Pop(1)

0x505: PushEmpty(cvector, float)
0x506: Stack[-1] = (float) 2.61799
0x507: Call2 0x4dc

0x508: Stack[-7] = Stack[-2]
0x509: Pop(2)
0x50a: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x50b: Push((float)2500.0)
0x50c: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x50d: IF (Stack[-1] == 0) GOTO 0x517; Pop(1)

0x50e: Push("Can't retreat, distance: ")
0x50f: Pop(0); Push(Sqrt(Stack[-5]))
0x510: Pop(2); Push(Stack[-2] + Stack[-1]);
0x511: @ Trace(Stack[-1])
0x512: Pop(1)
0x513: Push((float)0.5)
0x514: @ Sleep(Stack[-1])
0x515: Pop(1)
0x516: Return(); Pop(10)

0x517: Push(CvectorIndex(Stack[-5], 0))
0x518: Push(CvectorIndex(Stack[-6], 2))
0x519: @ Rotate(Stack[-2], Stack[-1])
0x51a: Pop(2)
0x51b: PushEmpty(cvector)
0x51c: Call2 0x71b

0x51d: Pop(0)
0x51e: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-6]; Pop(1);
0x51f: Push((int) 120)
0x520: Push((float)0.5)
0x521: @ SetTimer(Stack[-2], Stack[-1])
0x522: Pop(2)
0x523: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x524: Push((int) 1)
0x525: @ MovePoint(Stack[-1], Stack[-1], Stack[-4])
0x526: Pop(1)
0x527: Push(Stack[-3])
0x528: IF (Stack[-1] == 0) GOTO 0x540; Pop(1)

0x529: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x52a: IF (Stack[-1] == 0) GOTO 0x52d; Pop(1)

0x52b: GOTO 0x542

0x52c: GOTO 0x540

0x52d: PushEmpty(cvector, float)
0x52e: Stack[-1] = (float) 2.61799
0x52f: Call2 0x4dc

0x530: Stack[-4] = Stack[-2]
0x531: Pop(2)
0x532: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x533: Push((float)2500.0)
0x534: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x535: IF (Stack[-1] == 0) GOTO 0x53f; Pop(1)

0x536: PushEmpty(cvector)
0x537: Call2 0x71b

0x538: Pop(0)
0x539: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x53a: Push((int) 120)
0x53b: Push((float)0.5)
0x53c: @ SetTimer(Stack[-2], Stack[-1])
0x53d: Pop(2)
0x53e: GOTO 0x540

0x53f: GOTO 0x542

0x540: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x541: IF (Stack[-1] == 0) GOTO 0x524; Pop(1)

0x542: Return(); Pop(10)

0x543: PushEmpty(cvector, float, cvector, float, cvector, float, cvector, float)
0x544: Push((int) 120)
0x545: Pop(1); Push((bool) Stack[-10] != Stack[-1])
0x546: IF (Stack[-1] == 0) GOTO 0x548; Pop(1)

0x547: Return(); Pop(8)

0x548: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x549: IF (Stack[-1] == 0) GOTO 0x551; Pop(1)

0x54a: @ Stop()
0x54b: Pop(0)
0x54c: Push((int) 1)
0x54d: @ KillTimer(Stack[-1])
0x54e: Pop(1)
0x54f: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x550: GOTO 0x576

0x551: @ GetDirection(Stack[-4])
0x552: Pop(0)
0x553: Push((float)7000.0)
0x554: @ FindDirLength(Stack[-4], Stack[-5], Stack[-1])
0x555: Pop(1)
0x556: PushEmpty(cvector, float)
0x557: Stack[-1] = (float) 1.74533
0x558: Call2 0x4dc

0x559: Stack[-4] = Stack[-2]
0x55a: Pop(2)
0x55b: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x55c: PushEmpty(bool)
0x55d: Stack[-1] = (bool) 0
0x55e: Push((float)2500.0)
0x55f: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x560: IF (Stack[-1] == 0) GOTO 0x56f; Pop(1)

0x561: PushEmpty(bool)
0x562: Stack[-1] = (bool) 1
0x563: Pop(0); Push(Stack[-5] * Stack[-5]);
0x564: Push((float)2.25)
0x565: Pop(2); Push(Stack[-2] * Stack[-1]);
0x566: Pop(1); Push((bool) Stack[-4] >= Stack[-1])
0x567: IF (Stack[-1] == 0) GOTO 0x56d; Pop(1)

0x568: PushEmpty(bool)
0x569: Call2 0x587

0x56a: Pop(0)
0x56b: IF (Stack[-1] == 0) GOTO 0x56d; Pop(1)

0x56c: Stack[-1] = (bool) 0
0x56d: IF (Stack[-1] == 0) GOTO 0x56f; Pop(1)

0x56e: Stack[-1] = (bool) 1
0x56f: IF (Stack[-1] == 0) GOTO 0x576; Pop(1)

0x570: @ Stop()
0x571: Pop(0)
0x572: PushEmpty(cvector)
0x573: Call2 0x71b

0x574: Pop(0)
0x575: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x576: Return(); Pop(8)

0x577: @ Stop()
0x578: Pop(0)
0x579: Push((int) 120)
0x57a: @ KillTimer(Stack[-1])
0x57b: Pop(1)
0x57c: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x57d: Return(); Pop(0)

0x57e: PushEmpty()
0x57f: PushEmpty()
0x580: Call2 0x577

0x581: Pop(0)
0x582: PushEmpty(object)
0x583: Stack[-1] = Stack[-2]
0x584: Call2 0x9ba

0x585: Pop(1)
0x586: Return(); Pop(0)

0x587: PushEmpty(cvector, cvector, cvector, cvector)
0x588: @ GetDirection(Stack[-2])
0x589: Pop(0)
0x58a: PushEmpty(cvector, object)
0x58b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x58c: Call2 0x720

0x58d: Stack[-3] = Stack[-2]
0x58e: Pop(2)
0x58f: PushEmpty(float, cvector, cvector)
0x590: Stack[-2] = Stack[-5]
0x591: Stack[-1] = Stack[-4]
0x592: Call2 0x853

0x593: Pop(2)
0x594: Push((float)-0.34202)
0x595: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0x596: Return(); Pop(4)

0x597: PushEmpty()
0x598: Call2 0x639

0x599: Pop(0)
0x59a: PushEmpty()
0x59b: Call2 0xaf4

0x59c: Pop(0)
0x59d: Return(); Pop(0)

0x59e: PushEmpty(cvector, cvector, cvector, cvector, cvector, float, cvector, cvector, cvector, cvector, cvector, float)
0x59f: @ GetPosition(Stack[-6])
0x5a0: Pop(0)
0x5a1: @@ GetPosition(Stack[-5])
0x5a2: Pop(0)
0x5a3: @ GetDirection(Stack[-4])
0x5a4: Pop(0)
0x5a5: PushEmpty(cvector, cvector)
0x5a6: PushEmpty(cvector, cvector)
0x5a7: Stack[-1] = Stack[-10] - Stack[-9]; Pop(0);
0x5a8: Call2 0x849

0x5a9: Pop(1)
0x5aa: Push((float)0.75)
0x5ab: Pop(1); Push(Stack[-8] * Stack[-1]);
0x5ac: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x5ad: Call2 0x849

0x5ae: Stack[-5] = Stack[-2]
0x5af: Pop(2)
0x5b0: Push((int) 32)
0x5b1: Push((float)7000.0)
0x5b2: @ FindLongestDir(Stack[-4], Stack[-3], Stack[-5], Stack[-15], Stack[-2], Stack[-1])
0x5b3: Pop(2)
0x5b4: Push((int) 100)
0x5b5: Stack[-2] = Stack[-2] - Stack[-1]; Pop(1);
0x5b6: Push((int) 0)
0x5b7: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x5b8: IF (Stack[-1] == 0) GOTO 0x5ba; Pop(1)

0x5b9: Stack[-1] = (int) 0
0x5ba: Stack[-14] = Stack[-2] * Stack[-1]; Pop(0);
0x5bb: Return(); Pop(12)

0x5bc: PushEmpty(cvector, float, bool, cvector, float, cvector, float, bool, cvector, float)
0x5bd: Stack[0 + Tasks[-1].StackPointer] = Stack[-11]
0x5be: PushEmpty(cvector, float)
0x5bf: Stack[-1] = (float) 1.74533
0x5c0: Call2 0x59e

0x5c1: Stack[-7] = Stack[-2]
0x5c2: Pop(2)
0x5c3: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x5c4: Push((float)2500.0)
0x5c5: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x5c6: IF (Stack[-1] == 0) GOTO 0x5d9; Pop(1)

0x5c7: PushEmpty(cvector, float)
0x5c8: Stack[-1] = (float) 2.61799
0x5c9: Call2 0x59e

0x5ca: Stack[-7] = Stack[-2]
0x5cb: Pop(2)
0x5cc: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x5cd: Push((float)2500.0)
0x5ce: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x5cf: IF (Stack[-1] == 0) GOTO 0x5d9; Pop(1)

0x5d0: Push("Can't retreat, distance: ")
0x5d1: Pop(0); Push(Sqrt(Stack[-5]))
0x5d2: Pop(2); Push(Stack[-2] + Stack[-1]);
0x5d3: @ Trace(Stack[-1])
0x5d4: Pop(1)
0x5d5: Push((float)0.5)
0x5d6: @ Sleep(Stack[-1])
0x5d7: Pop(1)
0x5d8: Return(); Pop(10)

0x5d9: Push(CvectorIndex(Stack[-5], 0))
0x5da: Push(CvectorIndex(Stack[-6], 2))
0x5db: @ Rotate(Stack[-2], Stack[-1])
0x5dc: Pop(2)
0x5dd: PushEmpty(cvector)
0x5de: Call2 0x71b

0x5df: Pop(0)
0x5e0: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-6]; Pop(1);
0x5e1: Push((int) 120)
0x5e2: Push((float)0.5)
0x5e3: @ SetTimer(Stack[-2], Stack[-1])
0x5e4: Pop(2)
0x5e5: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x5e6: Push((int) 1)
0x5e7: @ MovePoint(Stack[-1], Stack[-1], Stack[-4])
0x5e8: Pop(1)
0x5e9: Push(Stack[-3])
0x5ea: IF (Stack[-1] == 0) GOTO 0x602; Pop(1)

0x5eb: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x5ec: IF (Stack[-1] == 0) GOTO 0x5ef; Pop(1)

0x5ed: GOTO 0x604

0x5ee: GOTO 0x602

0x5ef: PushEmpty(cvector, float)
0x5f0: Stack[-1] = (float) 2.61799
0x5f1: Call2 0x59e

0x5f2: Stack[-4] = Stack[-2]
0x5f3: Pop(2)
0x5f4: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x5f5: Push((float)2500.0)
0x5f6: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x5f7: IF (Stack[-1] == 0) GOTO 0x601; Pop(1)

0x5f8: PushEmpty(cvector)
0x5f9: Call2 0x71b

0x5fa: Pop(0)
0x5fb: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x5fc: Push((int) 120)
0x5fd: Push((float)0.5)
0x5fe: @ SetTimer(Stack[-2], Stack[-1])
0x5ff: Pop(2)
0x600: GOTO 0x602

0x601: GOTO 0x604

0x602: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x603: IF (Stack[-1] == 0) GOTO 0x5e6; Pop(1)

0x604: Return(); Pop(10)

0x605: PushEmpty(cvector, float, cvector, float, cvector, float, cvector, float)
0x606: Push((int) 120)
0x607: Pop(1); Push((bool) Stack[-10] != Stack[-1])
0x608: IF (Stack[-1] == 0) GOTO 0x60a; Pop(1)

0x609: Return(); Pop(8)

0x60a: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x60b: IF (Stack[-1] == 0) GOTO 0x613; Pop(1)

0x60c: @ Stop()
0x60d: Pop(0)
0x60e: Push((int) 1)
0x60f: @ KillTimer(Stack[-1])
0x610: Pop(1)
0x611: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x612: GOTO 0x638

0x613: @ GetDirection(Stack[-4])
0x614: Pop(0)
0x615: Push((float)7000.0)
0x616: @ FindDirLength(Stack[-4], Stack[-5], Stack[-1])
0x617: Pop(1)
0x618: PushEmpty(cvector, float)
0x619: Stack[-1] = (float) 1.74533
0x61a: Call2 0x59e

0x61b: Stack[-4] = Stack[-2]
0x61c: Pop(2)
0x61d: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x61e: PushEmpty(bool)
0x61f: Stack[-1] = (bool) 0
0x620: Push((float)2500.0)
0x621: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x622: IF (Stack[-1] == 0) GOTO 0x631; Pop(1)

0x623: PushEmpty(bool)
0x624: Stack[-1] = (bool) 1
0x625: Pop(0); Push(Stack[-5] * Stack[-5]);
0x626: Push((float)2.25)
0x627: Pop(2); Push(Stack[-2] * Stack[-1]);
0x628: Pop(1); Push((bool) Stack[-4] >= Stack[-1])
0x629: IF (Stack[-1] == 0) GOTO 0x62f; Pop(1)

0x62a: PushEmpty(bool)
0x62b: Call2 0x649

0x62c: Pop(0)
0x62d: IF (Stack[-1] == 0) GOTO 0x62f; Pop(1)

0x62e: Stack[-1] = (bool) 0
0x62f: IF (Stack[-1] == 0) GOTO 0x631; Pop(1)

0x630: Stack[-1] = (bool) 1
0x631: IF (Stack[-1] == 0) GOTO 0x638; Pop(1)

0x632: @ Stop()
0x633: Pop(0)
0x634: PushEmpty(cvector)
0x635: Call2 0x71b

0x636: Pop(0)
0x637: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x638: Return(); Pop(8)

0x639: @ Stop()
0x63a: Pop(0)
0x63b: Push((int) 120)
0x63c: @ KillTimer(Stack[-1])
0x63d: Pop(1)
0x63e: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x63f: Return(); Pop(0)

0x640: PushEmpty()
0x641: PushEmpty()
0x642: Call2 0x639

0x643: Pop(0)
0x644: PushEmpty(object)
0x645: Stack[-1] = Stack[-2]
0x646: Call2 0x9ba

0x647: Pop(1)
0x648: Return(); Pop(0)

0x649: PushEmpty(cvector, cvector, cvector, cvector)
0x64a: @ GetDirection(Stack[-2])
0x64b: Pop(0)
0x64c: PushEmpty(cvector, object)
0x64d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x64e: Call2 0x720

0x64f: Stack[-3] = Stack[-2]
0x650: Pop(2)
0x651: PushEmpty(float, cvector, cvector)
0x652: Stack[-2] = Stack[-5]
0x653: Stack[-1] = Stack[-4]
0x654: Call2 0x853

0x655: Pop(2)
0x656: Push((float)-0.34202)
0x657: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0x658: Return(); Pop(4)

0x659: PushEmpty()
0x65a: Call2 0x6fb

0x65b: Pop(0)
0x65c: PushEmpty()
0x65d: Call2 0xaf4

0x65e: Pop(0)
0x65f: Return(); Pop(0)

0x660: PushEmpty(cvector, cvector, cvector, cvector, cvector, float, cvector, cvector, cvector, cvector, cvector, float)
0x661: @ GetPosition(Stack[-6])
0x662: Pop(0)
0x663: @@ GetPosition(Stack[-5])
0x664: Pop(0)
0x665: @ GetDirection(Stack[-4])
0x666: Pop(0)
0x667: PushEmpty(cvector, cvector)
0x668: PushEmpty(cvector, cvector)
0x669: Stack[-1] = Stack[-10] - Stack[-9]; Pop(0);
0x66a: Call2 0x849

0x66b: Pop(1)
0x66c: Push((float)0.75)
0x66d: Pop(1); Push(Stack[-8] * Stack[-1]);
0x66e: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x66f: Call2 0x849

0x670: Stack[-5] = Stack[-2]
0x671: Pop(2)
0x672: Push((int) 32)
0x673: Push((float)7000.0)
0x674: @ FindLongestDir(Stack[-4], Stack[-3], Stack[-5], Stack[-15], Stack[-2], Stack[-1])
0x675: Pop(2)
0x676: Push((int) 100)
0x677: Stack[-2] = Stack[-2] - Stack[-1]; Pop(1);
0x678: Push((int) 0)
0x679: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x67a: IF (Stack[-1] == 0) GOTO 0x67c; Pop(1)

0x67b: Stack[-1] = (int) 0
0x67c: Stack[-14] = Stack[-2] * Stack[-1]; Pop(0);
0x67d: Return(); Pop(12)

0x67e: PushEmpty(cvector, float, bool, cvector, float, cvector, float, bool, cvector, float)
0x67f: Stack[0 + Tasks[-1].StackPointer] = Stack[-11]
0x680: PushEmpty(cvector, float)
0x681: Stack[-1] = (float) 1.74533
0x682: Call2 0x660

0x683: Stack[-7] = Stack[-2]
0x684: Pop(2)
0x685: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x686: Push((float)2500.0)
0x687: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x688: IF (Stack[-1] == 0) GOTO 0x69b; Pop(1)

0x689: PushEmpty(cvector, float)
0x68a: Stack[-1] = (float) 2.61799
0x68b: Call2 0x660

0x68c: Stack[-7] = Stack[-2]
0x68d: Pop(2)
0x68e: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x68f: Push((float)2500.0)
0x690: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x691: IF (Stack[-1] == 0) GOTO 0x69b; Pop(1)

0x692: Push("Can't retreat, distance: ")
0x693: Pop(0); Push(Sqrt(Stack[-5]))
0x694: Pop(2); Push(Stack[-2] + Stack[-1]);
0x695: @ Trace(Stack[-1])
0x696: Pop(1)
0x697: Push((float)0.5)
0x698: @ Sleep(Stack[-1])
0x699: Pop(1)
0x69a: Return(); Pop(10)

0x69b: Push(CvectorIndex(Stack[-5], 0))
0x69c: Push(CvectorIndex(Stack[-6], 2))
0x69d: @ Rotate(Stack[-2], Stack[-1])
0x69e: Pop(2)
0x69f: PushEmpty(cvector)
0x6a0: Call2 0x71b

0x6a1: Pop(0)
0x6a2: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-6]; Pop(1);
0x6a3: Push((int) 120)
0x6a4: Push((float)0.5)
0x6a5: @ SetTimer(Stack[-2], Stack[-1])
0x6a6: Pop(2)
0x6a7: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x6a8: Push((int) 1)
0x6a9: @ MovePoint(Stack[-1], Stack[-1], Stack[-4])
0x6aa: Pop(1)
0x6ab: Push(Stack[-3])
0x6ac: IF (Stack[-1] == 0) GOTO 0x6c4; Pop(1)

0x6ad: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x6ae: IF (Stack[-1] == 0) GOTO 0x6b1; Pop(1)

0x6af: GOTO 0x6c6

0x6b0: GOTO 0x6c4

0x6b1: PushEmpty(cvector, float)
0x6b2: Stack[-1] = (float) 2.61799
0x6b3: Call2 0x660

0x6b4: Stack[-4] = Stack[-2]
0x6b5: Pop(2)
0x6b6: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x6b7: Push((float)2500.0)
0x6b8: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x6b9: IF (Stack[-1] == 0) GOTO 0x6c3; Pop(1)

0x6ba: PushEmpty(cvector)
0x6bb: Call2 0x71b

0x6bc: Pop(0)
0x6bd: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x6be: Push((int) 120)
0x6bf: Push((float)0.5)
0x6c0: @ SetTimer(Stack[-2], Stack[-1])
0x6c1: Pop(2)
0x6c2: GOTO 0x6c4

0x6c3: GOTO 0x6c6

0x6c4: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x6c5: IF (Stack[-1] == 0) GOTO 0x6a8; Pop(1)

0x6c6: Return(); Pop(10)

0x6c7: PushEmpty(cvector, float, cvector, float, cvector, float, cvector, float)
0x6c8: Push((int) 120)
0x6c9: Pop(1); Push((bool) Stack[-10] != Stack[-1])
0x6ca: IF (Stack[-1] == 0) GOTO 0x6cc; Pop(1)

0x6cb: Return(); Pop(8)

0x6cc: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x6cd: IF (Stack[-1] == 0) GOTO 0x6d5; Pop(1)

0x6ce: @ Stop()
0x6cf: Pop(0)
0x6d0: Push((int) 1)
0x6d1: @ KillTimer(Stack[-1])
0x6d2: Pop(1)
0x6d3: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x6d4: GOTO 0x6fa

0x6d5: @ GetDirection(Stack[-4])
0x6d6: Pop(0)
0x6d7: Push((float)7000.0)
0x6d8: @ FindDirLength(Stack[-4], Stack[-5], Stack[-1])
0x6d9: Pop(1)
0x6da: PushEmpty(cvector, float)
0x6db: Stack[-1] = (float) 1.74533
0x6dc: Call2 0x660

0x6dd: Stack[-4] = Stack[-2]
0x6de: Pop(2)
0x6df: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x6e0: PushEmpty(bool)
0x6e1: Stack[-1] = (bool) 0
0x6e2: Push((float)2500.0)
0x6e3: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x6e4: IF (Stack[-1] == 0) GOTO 0x6f3; Pop(1)

0x6e5: PushEmpty(bool)
0x6e6: Stack[-1] = (bool) 1
0x6e7: Pop(0); Push(Stack[-5] * Stack[-5]);
0x6e8: Push((float)2.25)
0x6e9: Pop(2); Push(Stack[-2] * Stack[-1]);
0x6ea: Pop(1); Push((bool) Stack[-4] >= Stack[-1])
0x6eb: IF (Stack[-1] == 0) GOTO 0x6f1; Pop(1)

0x6ec: PushEmpty(bool)
0x6ed: Call2 0x70b

0x6ee: Pop(0)
0x6ef: IF (Stack[-1] == 0) GOTO 0x6f1; Pop(1)

0x6f0: Stack[-1] = (bool) 0
0x6f1: IF (Stack[-1] == 0) GOTO 0x6f3; Pop(1)

0x6f2: Stack[-1] = (bool) 1
0x6f3: IF (Stack[-1] == 0) GOTO 0x6fa; Pop(1)

0x6f4: @ Stop()
0x6f5: Pop(0)
0x6f6: PushEmpty(cvector)
0x6f7: Call2 0x71b

0x6f8: Pop(0)
0x6f9: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x6fa: Return(); Pop(8)

0x6fb: @ Stop()
0x6fc: Pop(0)
0x6fd: Push((int) 120)
0x6fe: @ KillTimer(Stack[-1])
0x6ff: Pop(1)
0x700: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x701: Return(); Pop(0)

0x702: PushEmpty()
0x703: PushEmpty()
0x704: Call2 0x6fb

0x705: Pop(0)
0x706: PushEmpty(object)
0x707: Stack[-1] = Stack[-2]
0x708: Call2 0x9ba

0x709: Pop(1)
0x70a: Return(); Pop(0)

0x70b: PushEmpty(cvector, cvector, cvector, cvector)
0x70c: @ GetDirection(Stack[-2])
0x70d: Pop(0)
0x70e: PushEmpty(cvector, object)
0x70f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x710: Call2 0x720

0x711: Stack[-3] = Stack[-2]
0x712: Pop(2)
0x713: PushEmpty(float, cvector, cvector)
0x714: Stack[-2] = Stack[-5]
0x715: Stack[-1] = Stack[-4]
0x716: Call2 0x853

0x717: Pop(2)
0x718: Push((float)-0.34202)
0x719: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0x71a: Return(); Pop(4)

0x71b: PushEmpty(cvector, cvector)
0x71c: @ GetPosition(Stack[-1])
0x71d: Pop(0)
0x71e: Stack[-3] = Stack[-1]
0x71f: Return(); Pop(2)

0x720: PushEmpty(cvector, cvector, cvector, cvector)
0x721: @ GetPosition(Stack[-2])
0x722: Pop(0)
0x723: @@ GetPosition(Stack[-1])
0x724: Pop(0)
0x725: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x726: Return(); Pop(4)

0x727: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x728: @ GetPosition(Stack[-3])
0x729: Pop(0)
0x72a: @@ GetPosition(Stack[-2])
0x72b: Pop(0)
0x72c: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x72d: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x72e: Return(); Pop(6)

0x72f: PushEmpty(bool, bool)
0x730: @ IsPlayerActor(Stack[-3], Stack[-1])
0x731: Pop(0)
0x732: Stack[-4] = Stack[-1]
0x733: Return(); Pop(2)

0x734: PushEmpty(bool, bool)
0x735: Push("HasProperty")
0x736: Push((int) 2)
0x737: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x738: Pop(1); Push((bool) Stack[-1] == 0)
0x739: IF (Stack[-1] == 0) GOTO 0x73c; Pop(1)

0x73a: Stack[-5] = (bool) 0
0x73b: Return(); Pop(2)

0x73c: @@ HasProperty(Stack[-3], Stack[-1])
0x73d: Pop(0)
0x73e: Stack[-5] = Stack[-1]
0x73f: Return(); Pop(2)

0x740: PushEmpty(bool, bool)
0x741: @@ IsDead(Stack[-1])
0x742: Pop(0)
0x743: Stack[-4] = Stack[-1]
0x744: Return(); Pop(2)

0x745: PushEmpty(object, object, object, object)
0x746: Pop(0); Push((bool) Stack[-5] == 0)
0x747: IF (Stack[-1] == 0) GOTO 0x74a; Pop(1)

0x748: Stack[-6] = (bool) 0
0x749: Return(); Pop(4)

0x74a: PushEmpty(bool)
0x74b: Stack[-1] = (bool) 0
0x74c: Push("IsDead")
0x74d: Push((int) 1)
0x74e: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x74f: IF (Stack[-1] == 0) GOTO 0x756; Pop(1)

0x750: PushEmpty(bool, object)
0x751: Stack[-1] = Stack[-8]
0x752: Call2 0x740

0x753: Pop(1)
0x754: IF (Stack[-1] == 0) GOTO 0x756; Pop(1)

0x755: Stack[-1] = (bool) 1
0x756: IF (Stack[-1] == 0) GOTO 0x759; Pop(1)

0x757: Stack[-6] = (bool) 0
0x758: Return(); Pop(4)

0x759: @ GetScene(Stack[-2])
0x75a: Pop(0)
0x75b: Pop(0); Push((bool) Stack[-2] == 0)
0x75c: IF (Stack[-1] == 0) GOTO 0x75f; Pop(1)

0x75d: Stack[-6] = (bool) 0
0x75e: Return(); Pop(4)

0x75f: @@ GetScene(Stack[-1])
0x760: Pop(0)
0x761: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x762: IF (Stack[-1] == 0) GOTO 0x765; Pop(1)

0x763: Stack[-6] = (bool) 0
0x764: Return(); Pop(4)

0x765: Stack[-6] = (bool) 1
0x766: Return(); Pop(4)

0x767: Stack[-1] = 0
0x768: Stack[-2] = 0
0x769: PushEmpty(int, int)
0x76a: PushEmpty(bool, object)
0x76b: Stack[-1] = Stack[-5]
0x76c: Call2 0x745

0x76d: Pop(1)
0x76e: Pop(1); Push((bool) Stack[-1] == 0)
0x76f: IF (Stack[-1] == 0) GOTO 0x772; Pop(1)

0x770: Stack[-4] = (bool) 0
0x771: Return(); Pop(2)

0x772: PushEmpty(bool, object, string)
0x773: Stack[-2] = Stack[-6]
0x774: Stack[-1] = "noaccess"
0x775: Call2 0x734

0x776: Pop(2)
0x777: Pop(1); Push((bool) Stack[-1] == 0)
0x778: IF (Stack[-1] == 0) GOTO 0x77b; Pop(1)

0x779: Stack[-4] = (bool) 1
0x77a: Return(); Pop(2)

0x77b: Push("noaccess")
0x77c: @@ GetProperty(Stack[-1], Stack[-2])
0x77d: Pop(1)
0x77e: Push((int) 0)
0x77f: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x780: Return(); Pop(2)

0x781: PushEmpty(bool, int, cvector, cvector, cvector, cvector, string, bool, int, cvector, cvector, cvector, cvector, string)
0x782: Pop(0); Push((bool) Stack[-15] == 0)
0x783: IF (Stack[-1] == 0) GOTO 0x785; Pop(1)

0x784: Return(); Pop(14)

0x785: @ IsDead(Stack[-7])
0x786: Pop(0)
0x787: Push(Stack[-7])
0x788: IF (Stack[-1] == 0) GOTO 0x78a; Pop(1)

0x789: Return(); Pop(14)

0x78a: @ GetSecondaryAnimationType(Stack[-6])
0x78b: Pop(0)
0x78c: Push((int) 0)
0x78d: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x78e: IF (Stack[-1] == 0) GOTO 0x790; Pop(1)

0x78f: Return(); Pop(14)

0x790: @@ GetPosition(Stack[-5])
0x791: Pop(0)
0x792: @ GetPosition(Stack[-4])
0x793: Pop(0)
0x794: @ GetDirection(Stack[-3])
0x795: Pop(0)
0x796: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0x797: Push(CvectorIndex(Stack[-2], 0))
0x798: Push(CvectorIndex(Stack[-4], 0))
0x799: Pop(2); Push(Stack[-2] * Stack[-1]);
0x79a: Push(CvectorIndex(Stack[-3], 2))
0x79b: Push(CvectorIndex(Stack[-5], 2))
0x79c: Pop(2); Push(Stack[-2] * Stack[-1]);
0x79d: Pop(2); Push(Stack[-2] + Stack[-1]);
0x79e: Push((int) 0)
0x79f: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x7a0: IF (Stack[-1] == 0) GOTO 0x7a3; Pop(1)

0x7a1: Stack[-1] = "fhit"
0x7a2: GOTO 0x7a4

0x7a3: Stack[-1] = "bhit"
0x7a4: Push("hit_react")
0x7a5: Push("1")
0x7a6: Pop(1); Push(Stack[-3] + Stack[-1]);
0x7a7: Push("2")
0x7a8: Pop(1); Push(Stack[-4] + Stack[-1]);
0x7a9: Push((int) -10)
0x7aa: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x7ab: Pop(4)
0x7ac: Return(); Pop(14)

0x7ad: PushEmpty(cvector, object, int, bool, cvector, cvector, int, int, cvector, cvector, object, int, bool, cvector, cvector, int, int, cvector)
0x7ae: PushEmpty(bool)
0x7af: Stack[-1] = (bool) 0
0x7b0: PushEmpty(bool)
0x7b1: Stack[-1] = (bool) 0
0x7b2: Push(Stack[-23])
0x7b3: IF (Stack[-1] == 0) GOTO 0x7b8; Pop(1)

0x7b4: Push((int) 4)
0x7b5: Pop(1); Push((bool) Stack[-23] != Stack[-1])
0x7b6: IF (Stack[-1] == 0) GOTO 0x7b8; Pop(1)

0x7b7: Stack[-1] = (bool) 1
0x7b8: IF (Stack[-1] == 0) GOTO 0x7bd; Pop(1)

0x7b9: Push((int) 5)
0x7ba: Pop(1); Push((bool) Stack[-22] != Stack[-1])
0x7bb: IF (Stack[-1] == 0) GOTO 0x7bd; Pop(1)

0x7bc: Stack[-1] = (bool) 1
0x7bd: IF (Stack[-1] == 0) GOTO 0x7ec; Pop(1)

0x7be: PushEmpty(cvector, cvector)
0x7bf: PushEmpty(cvector, object)
0x7c0: Stack[-1] = Stack[-25]
0x7c1: Call2 0x720

0x7c2: Stack[-3] = Stack[-2]
0x7c3: Pop(2)
0x7c4: Call2 0x849

0x7c5: Stack[-11] = Stack[-2]
0x7c6: Pop(2)
0x7c7: @ CreateVectorVector(Stack[-8])
0x7c8: Pop(0)
0x7c9: Stack[-7] = (int) 1
0x7ca: Push("hit")
0x7cb: Pop(1); Push(Stack[-1] + Stack[-8]);
0x7cc: @ GetGeometryLocator(Stack[-1], Stack[-7], Stack[-6], Stack[-5])
0x7cd: Pop(1)
0x7ce: Pop(0); Push((bool) Stack[-6] == 0)
0x7cf: IF (Stack[-1] == 0) GOTO 0x7d1; Pop(1)

0x7d0: GOTO 0x7da

0x7d1: Pop(0); Push(Stack[-4] | Stack[-9]);
0x7d2: Push((float)0.70711)
0x7d3: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x7d4: IF (Stack[-1] == 0) GOTO 0x7d7; Pop(1)

0x7d5: @@ add(Stack[-5])
0x7d6: Pop(0)
0x7d7: Push((int) 1)
0x7d8: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x7d9: GOTO 0x7ca

0x7da: @@ size(Stack[-3])
0x7db: Pop(0)
0x7dc: Push(Stack[-3])
0x7dd: IF (Stack[-1] == 0) GOTO 0x7eb; Pop(1)

0x7de: @ irand(Stack[-2], Stack[-3])
0x7df: Pop(0)
0x7e0: @@ get(Stack[-1], Stack[-2])
0x7e1: Pop(0)
0x7e2: PushEmpty(object, int, float, cvector, cvector)
0x7e3: Stack[-5] = Stack[-26]
0x7e4: Stack[-4] = Stack[-25]
0x7e5: Stack[-3] = Stack[-24]
0x7e6: Stack[-2] = Stack[-6]
0x7e7: Stack[-1] = -Stack[-14]; Pop(0);
0x7e8: Call2 0x7f1

0x7e9: Pop(5)
0x7ea: Return(); Pop(18)

0x7eb: Stack[-8] = 0
0x7ec: PushEmpty(object)
0x7ed: Stack[-1] = Stack[-22]
0x7ee: Call2 0x781

0x7ef: Pop(1)
0x7f0: Return(); Pop(18)

0x7f1: PushEmpty(object, object, object, object)
0x7f2: @ GetScene(Stack[-2])
0x7f3: Pop(0)
0x7f4: Push("scripted")
0x7f5: Push("blood_dir.xml")
0x7f6: @ AddActorByType(Stack[-3], Stack[-2], Stack[-4], Stack[-8], Stack[-7], Stack[-1])
0x7f7: Pop(2)
0x7f8: PushEmpty(object)
0x7f9: Stack[-1] = Stack[-10]
0x7fa: Call2 0x781

0x7fb: Pop(1)
0x7fc: Return(); Pop(4)

0x7fd: Stack[-1] = 0
0x7fe: Stack[-2] = 0
0x7ff: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x800: @@ GetPosition(Stack[-3])
0x801: Pop(0)
0x802: @ GetPosition(Stack[-2])
0x803: Pop(0)
0x804: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0x805: Push(CvectorIndex(Stack[-1], 0))
0x806: Push(CvectorIndex(Stack[-2], 2))
0x807: @ RotateAsync(Stack[-2], Stack[-1])
0x808: Pop(2)
0x809: Return(); Pop(6)

0x80a: PushEmpty(bool, bool)
0x80b: @ IsLoaded(Stack[-1])
0x80c: Pop(0)
0x80d: Stack[-3] = Stack[-1]
0x80e: Return(); Pop(2)

0x80f: PushEmpty(float, cvector, float, cvector)
0x810: @@ GetEyesHeight(Stack[-2])
0x811: Pop(0)
0x812: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x813: Push(CvectorIndex(Stack[-1], 1))
0x814: Stack[-1] = Stack[-3]
0x815: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x816: Push("head")
0x817: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x818: Pop(1)
0x819: Return(); Pop(4)

0x81a: PushEmpty(bool, int, bool, int, bool, float, cvector, cvector, bool, int, bool, int, bool, float, cvector, cvector)
0x81b: @ IsExisting3DSound(Stack[-8], Stack[-17])
0x81c: Pop(0)
0x81d: Pop(0); Push((bool) Stack[-8] == 0)
0x81e: IF (Stack[-1] == 0) GOTO 0x833; Pop(1)

0x81f: Stack[-7] = (int) 0
0x820: Push((int) 1)
0x821: Pop(1); Push(Stack[-8] + Stack[-1]);
0x822: Pop(1); Push(Stack[-18] + Stack[-1]);
0x823: @ IsExisting3DSound(Stack[-7], Stack[-1])
0x824: Pop(1)
0x825: Pop(0); Push((bool) Stack[-6] == 0)
0x826: IF (Stack[-1] == 0) GOTO 0x828; Pop(1)

0x827: GOTO 0x82b

0x828: Push((int) 1)
0x829: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x82a: GOTO 0x820

0x82b: Pop(0); Push((bool) Stack[-7] == 0)
0x82c: IF (Stack[-1] == 0) GOTO 0x82e; Pop(1)

0x82d: Return(); Pop(16)

0x82e: @ irand(Stack[-5], Stack[-7])
0x82f: Pop(0)
0x830: Push((int) 1)
0x831: Pop(1); Push(Stack[-6] + Stack[-1]);
0x832: Stack[-18] = Stack[-18] + Stack[-1]; Pop(1);
0x833: @ Is3DSoundLoaded(Stack[-4], Stack[-17])
0x834: Pop(0)
0x835: Push(Stack[-4])
0x836: IF (Stack[-1] == 0) GOTO 0x842; Pop(1)

0x837: @ GetEyesHeight(Stack[-3])
0x838: Pop(0)
0x839: @ GetDirection(Stack[-2])
0x83a: Pop(0)
0x83b: Push((int) 50)
0x83c: Stack[-2] = Stack[-3] * Stack[-1]; Pop(1);
0x83d: Push(CvectorIndex(Stack[-1], 1))
0x83e: Stack[-1] = Stack[-1] + Stack[-4]; Pop(0);
0x83f: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x840: @ PlayGlobalSound(Stack[-17], Stack[-1])
0x841: Pop(0)
0x842: Return(); Pop(16)

0x843: PushEmpty(object, object)
0x844: @ self(Stack[-1])
0x845: Pop(0)
0x846: Stack[-3] = Stack[-1]
0x847: Return(); Pop(2)

0x848: Stack[-1] = 0
0x849: PushEmpty(float, float)
0x84a: Pop(0); Push(Stack[-3] | Stack[-3]);
0x84b: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x84c: Push((float)0.0)
0x84d: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x84e: IF (Stack[-1] == 0) GOTO 0x851; Pop(1)

0x84f: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x850: Return(); Pop(2)

0x851: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x852: Return(); Pop(2)

0x853: PushEmpty()
0x854: Pop(0); Push(Stack[-2] | Stack[-1]);
0x855: Pop(0); Push(Stack[-3] | Stack[-3]);
0x856: Pop(0); Push(Stack[-3] | Stack[-3]);
0x857: Pop(2); Push(Stack[-2] * Stack[-1]);
0x858: Pop(1); Push(Sqrt(Stack[-1]))
0x859: Stack[-5] = Stack[-2] / Stack[-1]; Pop(2);
0x85a: Return(); Pop(0)

0x85b: PushEmpty()
0x85c: Push(CvectorIndex(Stack[-2], 0))
0x85d: Push(CvectorIndex(Stack[-2], 0))
0x85e: Pop(2); Push(Stack[-2] * Stack[-1]);
0x85f: Push(CvectorIndex(Stack[-3], 2))
0x860: Push(CvectorIndex(Stack[-3], 2))
0x861: Pop(2); Push(Stack[-2] * Stack[-1]);
0x862: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x863: Return(); Pop(0)

0x864: PushEmpty()
0x865: Push(CvectorIndex(Stack[-1], 0))
0x866: Push(CvectorIndex(Stack[-2], 0))
0x867: Pop(2); Push(Stack[-2] * Stack[-1]);
0x868: Push(CvectorIndex(Stack[-2], 2))
0x869: Push(CvectorIndex(Stack[-3], 2))
0x86a: Pop(2); Push(Stack[-2] * Stack[-1]);
0x86b: Pop(2); Push(Stack[-2] + Stack[-1]);
0x86c: Stack[-3] = Sqrt(Stack[-1]); Pop(1);
0x86d: Return(); Pop(0)

0x86e: PushEmpty()
0x86f: PushEmpty(float, cvector, cvector)
0x870: Stack[-2] = Stack[-5]
0x871: Stack[-1] = Stack[-4]
0x872: Call2 0x85b

0x873: Pop(2)
0x874: PushEmpty(float, cvector)
0x875: Stack[-1] = Stack[-5]
0x876: Call2 0x864

0x877: Pop(1)
0x878: PushEmpty(float, cvector)
0x879: Stack[-1] = Stack[-5]
0x87a: Call2 0x864

0x87b: Pop(1)
0x87c: Pop(2); Push(Stack[-2] * Stack[-1]);
0x87d: Stack[-5] = Stack[-2] / Stack[-1]; Pop(2);
0x87e: Return(); Pop(0)

0x87f: PushEmpty(float, float)
0x880: @ GetGameTime(Stack[-1])
0x881: Pop(0)
0x882: Push((int) 1)
0x883: PushEmpty(int)
0x884: Push((int) 24)
0x885: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x886: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x887: Return(); Pop(2)

0x888: PushEmpty(int, int)
0x889: Push("branch")
0x88a: @ GetVariable(Stack[-1], Stack[-2])
0x88b: Pop(1)
0x88c: Stack[-3] = Stack[-1]
0x88d: Return(); Pop(2)

0x88e: PushEmpty(object, float, object, float)
0x88f: Push("player")
0x890: @ FindActor(Stack[-3], Stack[-1])
0x891: Pop(1)
0x892: Pop(0); Push((bool) Stack[-2] == 0)
0x893: IF (Stack[-1] == 0) GOTO 0x896; Pop(1)

0x894: Stack[-5] = (int) 0
0x895: Return(); Pop(4)

0x896: Push("reputation")
0x897: @@ GetProperty(Stack[-1], Stack[-2])
0x898: Pop(1)
0x899: Stack[-5] = Stack[-1]
0x89a: Return(); Pop(4)

0x89b: Stack[-2] = 0
0x89c: PushEmpty()
0x89d: PushEmpty(int)
0x89e: Call2 0x888

0x89f: Pop(0)
0x8a0: Push((int) 1)
0x8a1: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x8a2: IF (Stack[-1] == 0) GOTO 0x8a6; Pop(1)

0x8a3: @ WorkWithCorpse(Stack[-1])
0x8a4: Pop(0)
0x8a5: GOTO 0x8a8

0x8a6: @ Barter(Stack[-1])
0x8a7: Pop(0)
0x8a8: Return(); Pop(0)

0x8a9: PushEmpty(int, bool, int, bool)
0x8aa: Pop(0); Push((bool) Stack[-6] > Stack[-5])
0x8ab: IF (Stack[-1] == 0) GOTO 0x8b0; Pop(1)

0x8ac: Push("GenerateMoney: iMin > iMax")
0x8ad: @ Trace(Stack[-1])
0x8ae: Pop(1)
0x8af: Return(); Pop(4)

0x8b0: Stack[-2] = (int) 0
0x8b1: Pop(0); Push((bool) Stack[-6] != Stack[-5])
0x8b2: IF (Stack[-1] == 0) GOTO 0x8b7; Pop(1)

0x8b3: Pop(0); Push(Stack[-5] - Stack[-6]);
0x8b4: @ irand(Stack[-3], Stack[-1])
0x8b5: Pop(1)
0x8b6: GOTO 0x8bb

0x8b7: Push((int) 0)
0x8b8: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x8b9: IF (Stack[-1] == 0) GOTO 0x8bb; Pop(1)

0x8ba: Return(); Pop(4)

0x8bb: Stack[-2] = Stack[-2] + Stack[-6]; Pop(0);
0x8bc: Push((int) 0)
0x8bd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8be: IF (Stack[-1] == 0) GOTO 0x8c0; Pop(1)

0x8bf: Return(); Pop(4)

0x8c0: PushEmpty(int, string)
0x8c1: Stack[-1] = "Money"
0x8c2: Call2 0x9a0

0x8c3: Pop(1)
0x8c4: Push((int) 0)
0x8c5: @ AddItem(Stack[-3], Stack[-2], Stack[-1], Stack[-4])
0x8c6: Pop(2)
0x8c7: Return(); Pop(4)

0x8c8: PushEmpty(object, int, bool, object, int, bool)
0x8c9: @ CreateInvItem(Stack[-3])
0x8ca: Pop(0)
0x8cb: @@ SetItemName(Stack[-7])
0x8cc: Pop(0)
0x8cd: Push("Organ")
0x8ce: Push((int) 1)
0x8cf: @@ SetProperty(Stack[-2], Stack[-1])
0x8d0: Pop(2)
0x8d1: @@ GetItemID(Stack[-2])
0x8d2: Pop(0)
0x8d3: Push((int) 0)
0x8d4: Push((int) 1)
0x8d5: @ AddItem(Stack[-3], Stack[-5], Stack[-2], Stack[-1])
0x8d6: Pop(2)
0x8d7: Return(); Pop(6)

0x8d8: Stack[-3] = 0
0x8d9: PushEmpty(int)
0x8da: Call2 0x888

0x8db: Pop(0)
0x8dc: Push((int) 1)
0x8dd: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x8de: IF (Stack[-1] == 0) GOTO 0x8e0; Pop(1)

0x8df: Return(); Pop(0)

0x8e0: PushEmpty(string)
0x8e1: Stack[-1] = "liver"
0x8e2: Call2 0x8c8

0x8e3: Pop(1)
0x8e4: PushEmpty(string)
0x8e5: Stack[-1] = "kidney"
0x8e6: Call2 0x8c8

0x8e7: Pop(1)
0x8e8: PushEmpty(string)
0x8e9: Stack[-1] = "heart"
0x8ea: Call2 0x8c8

0x8eb: Pop(1)
0x8ec: PushEmpty(string)
0x8ed: Stack[-1] = "blood"
0x8ee: Call2 0x8c8

0x8ef: Pop(1)
0x8f0: Return(); Pop(0)

0x8f1: PushEmpty(int, bool, int, bool)
0x8f2: Push(Stack[-5])
0x8f3: IF (Stack[-1] == 0) GOTO 0x94a; Pop(1)

0x8f4: PushEmpty(int, int)
0x8f5: Stack[-2] = (int) 0
0x8f6: Push((int) 100)
0x8f7: PushEmpty(int)
0x8f8: Call2 0x87f

0x8f9: Pop(0)
0x8fa: Push((int) 100)
0x8fb: Pop(2); Push(Stack[-2] * Stack[-1]);
0x8fc: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x8fd: Call2 0x8a9

0x8fe: Pop(2)
0x8ff: Push((int) 8)
0x900: @ irand(Stack[-3], Stack[-1])
0x901: Pop(1)
0x902: Push((int) 0)
0x903: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x904: IF (Stack[-1] == 0) GOTO 0x90e; Pop(1)

0x905: PushEmpty(int, string)
0x906: Stack[-1] = "lemon"
0x907: Call2 0x9a0

0x908: Pop(1)
0x909: Push((int) 0)
0x90a: Push((int) 1)
0x90b: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x90c: Pop(3)
0x90d: GOTO 0x949

0x90e: Push((int) 1)
0x90f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x910: IF (Stack[-1] == 0) GOTO 0x91a; Pop(1)

0x911: PushEmpty(int, string)
0x912: Stack[-1] = "rusk"
0x913: Call2 0x9a0

0x914: Pop(1)
0x915: Push((int) 0)
0x916: Push((int) 1)
0x917: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x918: Pop(3)
0x919: GOTO 0x949

0x91a: Push((int) 2)
0x91b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x91c: IF (Stack[-1] == 0) GOTO 0x926; Pop(1)

0x91d: PushEmpty(int, string)
0x91e: Stack[-1] = "hook"
0x91f: Call2 0x9a0

0x920: Pop(1)
0x921: Push((int) 0)
0x922: Push((int) 1)
0x923: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x924: Pop(3)
0x925: GOTO 0x949

0x926: Push((int) 4)
0x927: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x928: IF (Stack[-1] == 0) GOTO 0x932; Pop(1)

0x929: PushEmpty(int, string)
0x92a: Stack[-1] = "syringe"
0x92b: Call2 0x9a0

0x92c: Pop(1)
0x92d: Push((int) 0)
0x92e: Push((int) 1)
0x92f: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x930: Pop(3)
0x931: GOTO 0x949

0x932: Push((int) 5)
0x933: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x934: IF (Stack[-1] == 0) GOTO 0x93e; Pop(1)

0x935: PushEmpty(int, string)
0x936: Stack[-1] = "watch"
0x937: Call2 0x9a0

0x938: Pop(1)
0x939: Push((int) 0)
0x93a: Push((int) 1)
0x93b: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x93c: Pop(3)
0x93d: GOTO 0x949

0x93e: Push((int) 6)
0x93f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x940: IF (Stack[-1] == 0) GOTO 0x949; Pop(1)

0x941: PushEmpty(int, string)
0x942: Stack[-1] = "razor"
0x943: Call2 0x9a0

0x944: Pop(1)
0x945: Push((int) 0)
0x946: Push((int) 1)
0x947: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x948: Pop(3)
0x949: GOTO 0x99f

0x94a: PushEmpty(int, int)
0x94b: Stack[-2] = (int) 0
0x94c: Push((int) 50)
0x94d: PushEmpty(int)
0x94e: Call2 0x87f

0x94f: Pop(0)
0x950: Push((int) 50)
0x951: Pop(2); Push(Stack[-2] * Stack[-1]);
0x952: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x953: Call2 0x8a9

0x954: Pop(2)
0x955: Push((int) 7)
0x956: @ irand(Stack[-3], Stack[-1])
0x957: Pop(1)
0x958: Push((int) 0)
0x959: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x95a: IF (Stack[-1] == 0) GOTO 0x964; Pop(1)

0x95b: PushEmpty(int, string)
0x95c: Stack[-1] = "beads"
0x95d: Call2 0x9a0

0x95e: Pop(1)
0x95f: Push((int) 0)
0x960: Push((int) 1)
0x961: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x962: Pop(3)
0x963: GOTO 0x99f

0x964: Push((int) 1)
0x965: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x966: IF (Stack[-1] == 0) GOTO 0x970; Pop(1)

0x967: PushEmpty(int, string)
0x968: Stack[-1] = "bracelet"
0x969: Call2 0x9a0

0x96a: Pop(1)
0x96b: Push((int) 0)
0x96c: Push((int) 1)
0x96d: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x96e: Pop(3)
0x96f: GOTO 0x99f

0x970: Push((int) 2)
0x971: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x972: IF (Stack[-1] == 0) GOTO 0x97c; Pop(1)

0x973: PushEmpty(int, string)
0x974: Stack[-1] = "ear_ring"
0x975: Call2 0x9a0

0x976: Pop(1)
0x977: Push((int) 0)
0x978: Push((int) 1)
0x979: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x97a: Pop(3)
0x97b: GOTO 0x99f

0x97c: Push((int) 3)
0x97d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x97e: IF (Stack[-1] == 0) GOTO 0x988; Pop(1)

0x97f: PushEmpty(int, string)
0x980: Stack[-1] = "gold_ring"
0x981: Call2 0x9a0

0x982: Pop(1)
0x983: Push((int) 0)
0x984: Push((int) 1)
0x985: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x986: Pop(3)
0x987: GOTO 0x99f

0x988: Push((int) 4)
0x989: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x98a: IF (Stack[-1] == 0) GOTO 0x994; Pop(1)

0x98b: PushEmpty(int, string)
0x98c: Stack[-1] = "silver_ring"
0x98d: Call2 0x9a0

0x98e: Pop(1)
0x98f: Push((int) 0)
0x990: Push((int) 1)
0x991: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x992: Pop(3)
0x993: GOTO 0x99f

0x994: Push((int) 5)
0x995: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x996: IF (Stack[-1] == 0) GOTO 0x99f; Pop(1)

0x997: PushEmpty(int, string)
0x998: Stack[-1] = "flower"
0x999: Call2 0x9a0

0x99a: Pop(1)
0x99b: Push((int) 0)
0x99c: Push((int) 1)
0x99d: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x99e: Pop(3)
0x99f: Return(); Pop(4)

0x9a0: PushEmpty(int, int)
0x9a1: @ GetInvItemByName(Stack[-1], Stack[-3])
0x9a2: Pop(0)
0x9a3: Stack[-4] = Stack[-1]
0x9a4: Return(); Pop(2)

0x9a5: PushEmpty()
0x9a6: PushEmpty(object)
0x9a7: Stack[-1] = Stack[-2]
0x9a8: Push(-1, 0); TaskCall(0)
0x9a9: Call2 0x0

0x9aa: Pop(-1, 0); TaskReturn
0x9ab: Pop(1)
0x9ac: Return(); Pop(0)

0x9ad: PushEmpty(float, float)
0x9ae: Push("health")
0x9af: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x9b0: IF (Stack[-1] == 0) GOTO 0x9b9; Pop(1)

0x9b1: Push("health")
0x9b2: @ GetProperty(Stack[-1], Stack[-2])
0x9b3: Pop(1)
0x9b4: Push((int) 0)
0x9b5: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x9b6: IF (Stack[-1] == 0) GOTO 0x9b9; Pop(1)

0x9b7: @ SignalDeath(Stack[-4])
0x9b8: Pop(0)
0x9b9: Return(); Pop(2)

0x9ba: PushEmpty()
0x9bb: PushEmpty(object)
0x9bc: Stack[-1] = Stack[-2]
0x9bd: Call2 0x9a5

0x9be: Pop(1)
0x9bf: Return(); Pop(0)

0x9c0: PushEmpty()
0x9c1: PushEmpty(object, int, float)
0x9c2: Stack[-3] = Stack[-7]
0x9c3: Stack[-2] = Stack[-6]
0x9c4: Stack[-1] = Stack[-5]
0x9c5: Call2 0x7ad

0x9c6: Pop(3)
0x9c7: Return(); Pop(0)

0x9c8: PushEmpty()
0x9c9: PushEmpty(object, int, float, cvector, cvector)
0x9ca: Stack[-5] = Stack[-11]
0x9cb: Stack[-4] = Stack[-10]
0x9cc: Stack[-3] = Stack[-9]
0x9cd: Stack[-2] = Stack[-7]
0x9ce: Stack[-1] = Stack[-6]
0x9cf: Call2 0x7f1

0x9d0: Pop(5)
0x9d1: Return(); Pop(0)

0x9d2: PushEmpty()
0x9d3: Push("unholster")
0x9d4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x9d5: IF (Stack[-1] == 0) GOTO 0x9dd; Pop(1)

0x9d6: PushEmpty(bool, object)
0x9d7: Stack[-1] = Stack[-4]
0x9d8: Call2 0xaf5

0x9d9: Stack[-5] = Stack[-2]
0x9da: Pop(2)
0x9db: Return(); Pop(0)

0x9dc: GOTO 0x9f0

0x9dd: Push("player_shot")
0x9de: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x9df: IF (Stack[-1] == 0) GOTO 0x9e7; Pop(1)

0x9e0: PushEmpty(bool, object)
0x9e1: Stack[-1] = Stack[-4]
0x9e2: Call2 0xb02

0x9e3: Stack[-5] = Stack[-2]
0x9e4: Pop(2)
0x9e5: Return(); Pop(0)

0x9e6: GOTO 0x9f0

0x9e7: Push("battle")
0x9e8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x9e9: IF (Stack[-1] == 0) GOTO 0x9f0; Pop(1)

0x9ea: PushEmpty(bool, object)
0x9eb: Stack[-1] = Stack[-4]
0x9ec: Call2 0xb19

0x9ed: Stack[-5] = Stack[-2]
0x9ee: Pop(2)
0x9ef: Return(); Pop(0)

0x9f0: Stack[-3] = (bool) 0
0x9f1: Return(); Pop(0)

0x9f2: PushEmpty()
0x9f3: Push("unholster")
0x9f4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x9f5: IF (Stack[-1] == 0) GOTO 0x9fb; Pop(1)

0x9f6: PushEmpty(object)
0x9f7: Stack[-1] = Stack[-3]
0x9f8: Call2 0xafa

0x9f9: Pop(1)
0x9fa: GOTO 0xa0a

0x9fb: Push("player_shot")
0x9fc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x9fd: IF (Stack[-1] == 0) GOTO 0xa03; Pop(1)

0x9fe: PushEmpty(object)
0x9ff: Stack[-1] = Stack[-3]
0xa00: Call2 0xb11

0xa01: Pop(1)
0xa02: GOTO 0xa0a

0xa03: Push("battle")
0xa04: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa05: IF (Stack[-1] == 0) GOTO 0xa0a; Pop(1)

0xa06: PushEmpty(object)
0xa07: Stack[-1] = Stack[-3]
0xa08: Call2 0xb20

0xa09: Pop(1)
0xa0a: Return(); Pop(0)

0xa0b: PushEmpty(bool, bool)
0xa0c: PushEmpty(bool)
0xa0d: Stack[-1] = (bool) 0
0xa0e: PushEmpty(bool, object)
0xa0f: Stack[-1] = Stack[-6]
0xa10: Call2 0xaf5

0xa11: Pop(1)
0xa12: IF (Stack[-1] == 0) GOTO 0xa19; Pop(1)

0xa13: PushEmpty(bool, object)
0xa14: Stack[-1] = Stack[-6]
0xa15: Call2 0x72f

0xa16: Pop(1)
0xa17: IF (Stack[-1] == 0) GOTO 0xa19; Pop(1)

0xa18: Stack[-1] = (bool) 1
0xa19: IF (Stack[-1] == 0) GOTO 0xa20; Pop(1)

0xa1a: @@ IsWeaponHolstered(Stack[-1])
0xa1b: Pop(0)
0xa1c: Pop(0); Push((bool) Stack[-1] == 0)
0xa1d: IF (Stack[-1] == 0) GOTO 0xa20; Pop(1)

0xa1e: Stack[-4] = (bool) 1
0xa1f: Return(); Pop(2)

0xa20: Stack[-4] = (bool) 0
0xa21: Return(); Pop(2)

0xa22: PushEmpty()
0xa23: PushEmpty(object)
0xa24: Stack[-1] = Stack[-2]
0xa25: Call2 0xafa

0xa26: Pop(1)
0xa27: Return(); Pop(0)

0xa28: PushEmpty()
0xa29: PushEmpty(bool, object)
0xa2a: Stack[-1] = Stack[-3]
0xa2b: Call2 0x72f

0xa2c: Pop(1)
0xa2d: IF (Stack[-1] == 0) GOTO 0xa34; Pop(1)

0xa2e: PushEmpty(object)
0xa2f: Call2 0x843

0xa30: Pop(0)
0xa31: Push((float)0.0)
0xa32: @ ReportReputationChange(Stack[-3], Stack[-2], Stack[-1])
0xa33: Pop(2)
0xa34: Return(); Pop(0)

0xa35: PushEmpty(object, object)
0xa36: Push("heal")
0xa37: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xa38: IF (Stack[-1] == 0) GOTO 0xa43; Pop(1)

0xa39: Push("player")
0xa3a: @ FindActor(Stack[-2], Stack[-1])
0xa3b: Pop(1)
0xa3c: PushEmpty(bool, object)
0xa3d: Stack[-1] = Stack[-3]
0xa3e: Call2 0xb26

0xa3f: Stack[-6] = Stack[-2]
0xa40: Pop(2)
0xa41: Return(); Pop(2)

0xa42: Stack[-1] = 0
0xa43: Stack[-4] = (bool) 0
0xa44: Return(); Pop(2)

0xa45: PushEmpty(object, object)
0xa46: Push("heal")
0xa47: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xa48: IF (Stack[-1] == 0) GOTO 0xa51; Pop(1)

0xa49: Push("player")
0xa4a: @ FindActor(Stack[-2], Stack[-1])
0xa4b: Pop(1)
0xa4c: PushEmpty(object)
0xa4d: Stack[-1] = Stack[-2]
0xa4e: Call2 0xb29

0xa4f: Pop(1)
0xa50: Stack[-1] = 0
0xa51: Return(); Pop(2)

0xa52: PushEmpty(string, string)
0xa53: Stack[-1] = "idle"
0xa54: Push(Stack[-3])
0xa55: IF (Stack[-1] == 0) GOTO 0xa57; Pop(1)

0xa56: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0xa57: Stack[-4] = Stack[-1]
0xa58: Return(); Pop(2)

0xa59: PushEmpty(int, bool, int, bool)
0xa5a: Stack[-2] = (int) 0
0xa5b: Push("all")
0xa5c: PushEmpty(string, int)
0xa5d: Stack[-1] = Stack[-5]
0xa5e: Call2 0xa52

0xa5f: Pop(1)
0xa60: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0xa61: Pop(2)
0xa62: Pop(0); Push((bool) Stack[-1] == 0)
0xa63: IF (Stack[-1] == 0) GOTO 0xa65; Pop(1)

0xa64: GOTO 0xa68

0xa65: Push((int) 1)
0xa66: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0xa67: GOTO 0xa5b

0xa68: Stack[-5] = Stack[-2]
0xa69: Return(); Pop(4)

0xa6a: PushEmpty()
0xa6b: PushEmpty(bool)
0xa6c: Call2 0xb3d

0xa6d: Pop(0)
0xa6e: IF (Stack[-1] == 0) GOTO 0xa71; Pop(1)

0xa6f: Stack[-2] = (int) 2
0xa70: GOTO 0xa72

0xa71: Stack[-2] = (int) 0
0xa72: Return(); Pop(0)

0xa73: PushEmpty()
0xa74: PushEmpty(object)
0xa75: Stack[-1] = Stack[-2]
0xa76: Push(-1, 1); TaskCall(3)
0xa77: Call2 0x307

0xa78: Pop(-1, 1); TaskReturn
0xa79: Pop(1)
0xa7a: Return(); Pop(0)

0xa7b: PushEmpty()
0xa7c: PushEmpty(bool, object)
0xa7d: Stack[-1] = Stack[-3]
0xa7e: Call2 0x769

0xa7f: Pop(1)
0xa80: IF (Stack[-1] == 0) GOTO 0xa83; Pop(1)

0xa81: Stack[-2] = (int) 2
0xa82: GOTO 0xa84

0xa83: Stack[-2] = (int) 0
0xa84: Return(); Pop(0)

0xa85: PushEmpty()
0xa86: PushEmpty(object)
0xa87: Stack[-1] = Stack[-2]
0xa88: Push(-1, 3); TaskCall(4)
0xa89: Call2 0x43f

0xa8a: Pop(-1, 3); TaskReturn
0xa8b: Pop(1)
0xa8c: Return(); Pop(0)

0xa8d: PushEmpty()
0xa8e: PushEmpty(bool, object)
0xa8f: Stack[-1] = Stack[-4]
0xa90: Call2 0x769

0xa91: Pop(1)
0xa92: IF (Stack[-1] == 0) GOTO 0xa95; Pop(1)

0xa93: Stack[-3] = (int) 2
0xa94: GOTO 0xa96

0xa95: Stack[-3] = (int) 0
0xa96: Return(); Pop(0)

0xa97: PushEmpty()
0xa98: PushEmpty(object)
0xa99: Stack[-1] = Stack[-2]
0xa9a: Push(-1, 3); TaskCall(5)
0xa9b: Call2 0x4fa

0xa9c: Pop(-1, 3); TaskReturn
0xa9d: Pop(1)
0xa9e: Return(); Pop(0)

0xa9f: PushEmpty(string, bool, string, bool)
0xaa0: PushEmpty(bool, object, string)
0xaa1: Stack[-2] = Stack[-9]
0xaa2: Stack[-1] = "class"
0xaa3: Call2 0x734

0xaa4: Pop(2)
0xaa5: Pop(1); Push((bool) Stack[-1] == 0)
0xaa6: IF (Stack[-1] == 0) GOTO 0xaa9; Pop(1)

0xaa7: Stack[-8] = (bool) 0
0xaa8: Return(); Pop(4)

0xaa9: Push("class")
0xaaa: @@ GetProperty(Stack[-1], Stack[-3])
0xaab: Pop(1)
0xaac: Push("rat")
0xaad: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xaae: IF (Stack[-1] == 0) GOTO 0xab2; Pop(1)

0xaaf: Stack[-8] = (bool) 0
0xab0: Return(); Pop(4)

0xab1: GOTO 0xabd

0xab2: Push("rat_big")
0xab3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xab4: IF (Stack[-1] == 0) GOTO 0xab8; Pop(1)

0xab5: Stack[-8] = (bool) 0
0xab6: Return(); Pop(4)

0xab7: GOTO 0xabd

0xab8: Push("dog")
0xab9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xaba: IF (Stack[-1] == 0) GOTO 0xabd; Pop(1)

0xabb: Stack[-8] = (bool) 0
0xabc: Return(); Pop(4)

0xabd: @ CanSee(Stack[-1], Stack[-7])
0xabe: Pop(0)
0xabf: PushEmpty(bool)
0xac0: Stack[-1] = (bool) 1
0xac1: Push(Stack[-2])
0xac2: IF (Stack[-1] == 0) GOTO 0xacb; Pop(1)

0xac3: PushEmpty(float, object)
0xac4: Stack[-1] = Stack[-10]
0xac5: Call2 0x727

0xac6: Pop(1)
0xac7: Pop(0); Push(Stack[-7] * Stack[-7]);
0xac8: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0xac9: IF (Stack[-1] == 0) GOTO 0xacb; Pop(1)

0xaca: Stack[-1] = (bool) 0
0xacb: IF (Stack[-1] == 0) GOTO 0xace; Pop(1)

0xacc: Stack[-8] = (bool) 1
0xacd: Return(); Pop(4)

0xace: @ CanSee(Stack[-1], Stack[-6])
0xacf: Pop(0)
0xad0: PushEmpty(bool)
0xad1: Stack[-1] = (bool) 1
0xad2: Push(Stack[-2])
0xad3: IF (Stack[-1] == 0) GOTO 0xadc; Pop(1)

0xad4: PushEmpty(float, object)
0xad5: Stack[-1] = Stack[-9]
0xad6: Call2 0x727

0xad7: Pop(1)
0xad8: Pop(0); Push(Stack[-7] * Stack[-7]);
0xad9: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0xada: IF (Stack[-1] == 0) GOTO 0xadc; Pop(1)

0xadb: Stack[-1] = (bool) 0
0xadc: IF (Stack[-1] == 0) GOTO 0xadf; Pop(1)

0xadd: Stack[-8] = (bool) 1
0xade: Return(); Pop(4)

0xadf: Stack[-8] = (bool) 0
0xae0: Return(); Pop(4)

0xae1: PushEmpty()
0xae2: Stack[-2] = (int) 0
0xae3: Return(); Pop(0)

0xae4: PushEmpty()
0xae5: Return(); Pop(0)

0xae6: PushEmpty()
0xae7: Stack[-3] = (int) 0
0xae8: Return(); Pop(0)

0xae9: PushEmpty()
0xaea: Return(); Pop(0)

0xaeb: PushEmpty()
0xaec: Stack[-2] = (int) 2
0xaed: Return(); Pop(0)

0xaee: PushEmpty()
0xaef: PushEmpty(object)
0xaf0: Stack[-1] = Stack[-2]
0xaf1: Call2 0xb2f

0xaf2: Pop(1)
0xaf3: Return(); Pop(0)

0xaf4: Return(); Pop(0)

0xaf5: PushEmpty(bool, bool)
0xaf6: @ CanSee(Stack[-1], Stack[-3])
0xaf7: Pop(0)
0xaf8: Stack[-4] = Stack[-1]
0xaf9: Return(); Pop(2)

0xafa: PushEmpty()
0xafb: PushEmpty(object)
0xafc: Stack[-1] = Stack[-2]
0xafd: Push(-1, 3); TaskCall(6)
0xafe: Call2 0x5bc

0xaff: Pop(-1, 3); TaskReturn
0xb00: Pop(1)
0xb01: Return(); Pop(0)

0xb02: PushEmpty(bool, bool)
0xb03: @ CanSee(Stack[-1], Stack[-3])
0xb04: Pop(0)
0xb05: Stack[-4] = (bool) 1
0xb06: Push(Stack[-1])
0xb07: IF (Stack[-1] == 0) GOTO 0xb10; Pop(1)

0xb08: PushEmpty(float, object)
0xb09: Stack[-1] = Stack[-5]
0xb0a: Call2 0x727

0xb0b: Pop(1)
0xb0c: Push((int) 4000000)
0xb0d: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0xb0e: IF (Stack[-1] == 0) GOTO 0xb10; Pop(1)

0xb0f: Stack[-4] = (bool) 0
0xb10: Return(); Pop(2)

0xb11: PushEmpty()
0xb12: PushEmpty(object)
0xb13: Stack[-1] = Stack[-2]
0xb14: Push(-1, 3); TaskCall(7)
0xb15: Call2 0x67e

0xb16: Pop(-1, 3); TaskReturn
0xb17: Pop(1)
0xb18: Return(); Pop(0)

0xb19: PushEmpty()
0xb1a: PushEmpty(bool, object)
0xb1b: Stack[-1] = Stack[-3]
0xb1c: Call2 0xb02

0xb1d: Stack[-4] = Stack[-2]
0xb1e: Pop(2)
0xb1f: Return(); Pop(0)

0xb20: PushEmpty()
0xb21: PushEmpty(object)
0xb22: Stack[-1] = Stack[-2]
0xb23: Call2 0xb11

0xb24: Pop(1)
0xb25: Return(); Pop(0)

0xb26: PushEmpty()
0xb27: Stack[-2] = (bool) 0
0xb28: Return(); Pop(0)

0xb29: PushEmpty()
0xb2a: Return(); Pop(0)

0xb2b: Push(GlobalVars[0])
0xb2c: Stack[-1] = (bool) 0
0xb2d: GlobalVars[0] = Stack[-1]; Pop(1)
0xb2e: Return(); Pop(0)

0xb2f: PushEmpty(bool, bool)
0xb30: Push(GlobalVars[0])
0xb31: IF (Stack[-1] == 0) GOTO 0xb3c; Pop(1)

0xb32: @ IsOverrideActive(Stack[-1])
0xb33: Pop(0)
0xb34: Pop(0); Push((bool) Stack[-1] == 0)
0xb35: IF (Stack[-1] == 0) GOTO 0xb3a; Pop(1)

0xb36: PushEmpty(object)
0xb37: Stack[-1] = Stack[-4]
0xb38: Call2 0x89c

0xb39: Pop(1)
0xb3a: Return(); Pop(2)

0xb3b: GOTO 0xb3c

0xb3c: Return(); Pop(2)

0xb3d: PushEmpty(float)
0xb3e: Call2 0x88e

0xb3f: Pop(0)
0xb40: Push((float)0.9)
0xb41: Stack[-3] = Stack[-2] > Stack[-1]; Pop(2);
0xb42: Return(); Pop(0)

0xb43: PushEmpty()
0xb44: PushEmpty(bool, object, object, float)
0xb45: Stack[-3] = Stack[-7]
0xb46: Stack[-2] = Stack[-6]
0xb47: Stack[-1] = (float) 700.0
0xb48: Call2 0xa9f

0xb49: Stack[-8] = Stack[-4]
0xb4a: Pop(4)
0xb4b: Return(); Pop(0)

0xb4c: PushEmpty()
0xb4d: PushEmpty(bool, object)
0xb4e: Stack[-1] = Stack[-3]
0xb4f: Call2 0x72f

0xb50: Pop(1)
0xb51: IF (Stack[-1] == 0) GOTO 0xb5d; Pop(1)

0xb52: PushEmpty(object)
0xb53: Call2 0x843

0xb54: Pop(0)
0xb55: Push((float)-0.05)
0xb56: Push((bool) 1)
0xb57: @ ReportReputationChange(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xb58: Pop(3)
0xb59: PushEmpty(bool)
0xb5a: Stack[-1] = (bool) 0
0xb5b: Call2 0x8f1

0xb5c: Pop(1)
0xb5d: PushEmpty()
0xb5e: Call2 0x8d9

0xb5f: Pop(0)
0xb60: Push(GlobalVars[0])
0xb61: Stack[-1] = (bool) 1
0xb62: GlobalVars[0] = Stack[-1]; Pop(1)
0xb63: Push((int) 50)
0xb64: Push((int) 40)
0xb65: @ SetRTEnvelope(Stack[-2], Stack[-1])
0xb66: Pop(2)
0xb67: Return(); Pop(0)

