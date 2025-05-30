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
	Can't retreat, distance: 
	bow
	health
	disease
	HasProperty
	HasProperty
	GetProperty
	SetProperty
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
	branch
	GenerateMoney: iMin > iMax
	Money
	SetItemName
	Organ
	GetItemID
	diseased_liver
	diseased_kidney
	diseased_heart
	diseased_blood
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
	FindLongestDir (6 args)
	Trace (1 args)
	Rotate (2 args)
	MovePoint (3 args)
	FindDirLength (3 args)
	HasProperty (2 args)
	SetProperty (2 args)
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
	GetGameTime (1 args)
	GetVariable (2 args)
	WorkWithCorpse (1 args)
	Barter (1 args)
	AddItem (4 args)
	CreateInvItem (1 args)
	GetInvItemByName (2 args)
	GetProperty (2 args)
	SignalDeath (1 args)
	ReportReputationChange (3 args)
	FindActor (2 args)
	HasAnimation (3 args)
	RemoveActor (1 args)
	IsOverrideActive (1 args)
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
	GTASK_5 Vars = (object, cvector, bool) Params = 1
		EVENT_7 Op = 0x4b4 Vars = (int)
		EVENT_41 Op = 0x4ef Vars = (object)
	GTASK_6 Vars = (object, cvector, bool) Params = 1
		EVENT_6 Op = 0x532 Vars = ()
		EVENT_7 Op = 0x5a0 Vars = (int)
		EVENT_41 Op = 0x5db Vars = (object)
	GTASK_7 Vars = (object, cvector, bool) Params = 1
		EVENT_6 Op = 0x5f4 Vars = ()
		EVENT_7 Op = 0x662 Vars = (int)
		EVENT_41 Op = 0x69d Vars = (object)

Events:
EVENT_16 Op = 0x9a7 Vars = (object, string)
EVENT_41 Op = 0x9b4 Vars = (object)
EVENT_22 Op = 0x9ba Vars = (object, int, float, float)
EVENT_43 Op = 0x9c2 Vars = (object, int, float, float, cvector, cvector)

0x0: PushEmpty()
0x1: EventDisable(0)
0x2: PushEmpty(object)
0x3: Stack[-1] = Stack[-2]
0x4: Call2 0x21

0x5: Pop(1)
0x6: PushEmpty(object)
0x7: Stack[-1] = Stack[-2]
0x8: Call2 0xad8

0x9: Pop(1)
0xa: EventEnable(0)
0xb: @ Hold()
0xc: Pop(0)
0xd: GOTO 0xb

0xe: Return(); Pop(0)

0xf: PushEmpty(int, int)
0x10: PushEmpty(int, object)
0x11: Stack[-1] = Stack[-5]
0x12: Call2 0xa8b

0x13: Stack[-3] = Stack[-2]
0x14: Pop(2)
0x15: Push((int) 0)
0x16: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x17: IF (Stack[-1] == 0) GOTO 0x1c; Pop(1)

0x18: PushEmpty(object)
0x19: Stack[-1] = Stack[-4]
0x1a: Call2 0xa8e

0x1b: Pop(1)
0x1c: Return(); Pop(2)

0x1d: PushEmpty()
0x1e: Call2 0xa94

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
0x67: Call2 0x7fa

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
0x89: Call2 0x7fa

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
0xa0: Call2 0xaba

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
0xac: Call2 0x7f5

0xad: Pop(0)
0xae: Pop(1); Push((bool) Stack[-1] == 0)
0xaf: IF (Stack[-1] == 0) GOTO 0xb3; Pop(1)

0xb0: PushEmpty()
0xb1: Call2 0xa94

0xb2: Pop(0)
0xb3: Return(); Pop(0)

0xb4: PushEmpty(int, int)
0xb5: PushEmpty(int, object)
0xb6: Stack[-1] = Stack[-5]
0xb7: Call2 0xa8b

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
0xc5: Call2 0xa8e

0xc6: Pop(1)
0xc7: Return(); Pop(2)

0xc8: PushEmpty(int, int)
0xc9: PushEmpty(object)
0xca: Stack[-1] = Stack[-4]
0xcb: Call2 0xa22

0xcc: Pop(1)
0xcd: PushEmpty(int, object)
0xce: Stack[-1] = Stack[-5]
0xcf: Call2 0xaf3

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
0xdd: Call2 0xafd

0xde: Pop(1)
0xdf: Return(); Pop(2)

0xe0: PushEmpty(int, int)
0xe1: PushEmpty(bool, object, object, bool)
0xe2: Stack[-3] = Stack[-9]
0xe3: Stack[-2] = Stack[-8]
0xe4: Stack[-1] = Stack[-7]
0xe5: Call2 0xad5

0xe6: Pop(3)
0xe7: IF (Stack[-1] == 0) GOTO 0xfb; Pop(1)

0xe8: PushEmpty(int, object, bool)
0xe9: Stack[-2] = Stack[-8]
0xea: Stack[-1] = Stack[-6]
0xeb: Call2 0xa6f

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
0xf9: Call2 0xa79

0xfa: Pop(1)
0xfb: Return(); Pop(2)

0xfc: PushEmpty(int, int)
0xfd: PushEmpty(int, object)
0xfe: Stack[-1] = Stack[-5]
0xff: Call2 0xa81

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
0x10d: Call2 0xa84

0x10e: Pop(1)
0x10f: Return(); Pop(2)

0x110: PushEmpty(int, int)
0x111: PushEmpty(bool, object, string)
0x112: Stack[-2] = Stack[-7]
0x113: Stack[-1] = Stack[-6]
0x114: Call2 0x9cc

0x115: Pop(2)
0x116: IF (Stack[-1] == 0) GOTO 0x120; Pop(1)

0x117: PushEmpty()
0x118: Call2 0x16f

0x119: Pop(0)
0x11a: PushEmpty(object, string)
0x11b: Stack[-2] = Stack[-6]
0x11c: Stack[-1] = Stack[-5]
0x11d: Call2 0x9ec

0x11e: Pop(2)
0x11f: GOTO 0x134

0x120: PushEmpty(int, string, object)
0x121: Stack[-2] = Stack[-6]
0x122: Stack[-1] = Stack[-7]
0x123: Call2 0xa86

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
0x132: Call2 0xa89

0x133: Pop(2)
0x134: Return(); Pop(2)

0x135: PushEmpty()
0x136: PushEmpty(bool, string)
0x137: Stack[-1] = Stack[-3]
0x138: Call2 0xa2f

0x139: Pop(1)
0x13a: IF (Stack[-1] == 0) GOTO 0x142; Pop(1)

0x13b: PushEmpty()
0x13c: Call2 0x16f

0x13d: Pop(0)
0x13e: PushEmpty(string)
0x13f: Stack[-1] = Stack[-2]
0x140: Call2 0xa3f

0x141: Pop(1)
0x142: Return(); Pop(0)

0x143: PushEmpty()
0x144: PushEmpty(bool, object)
0x145: Stack[-1] = Stack[-3]
0x146: Call2 0xa05

0x147: Pop(1)
0x148: IF (Stack[-1] == 0) GOTO 0x151; Pop(1)

0x149: PushEmpty()
0x14a: Call2 0x16f

0x14b: Pop(0)
0x14c: PushEmpty(object)
0x14d: Stack[-1] = Stack[-2]
0x14e: Call2 0xa1c

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
0x16c: Call2 0xa94

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
0x185: Call2 0x9b4

0x186: Pop(1)
0x187: Return(); Pop(0)

0x188: PushEmpty(bool, int, bool, int)
0x189: PushEmpty(bool, object)
0x18a: Stack[-1] = Stack[-7]
0x18b: Call2 0x75f

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
0x19a: Call2 0xa64

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
0x1a8: Call2 0xa67

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
0x210: Call2 0xa8b

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
0x21e: Call2 0xa8e

0x21f: Pop(1)
0x220: Return(); Pop(2)

0x221: PushEmpty(int, int)
0x222: PushEmpty(object)
0x223: Stack[-1] = Stack[-4]
0x224: Call2 0xa22

0x225: Pop(1)
0x226: PushEmpty(int, object)
0x227: Stack[-1] = Stack[-5]
0x228: Call2 0xaf3

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
0x236: Call2 0xafd

0x237: Pop(1)
0x238: Return(); Pop(2)

0x239: PushEmpty(int, int)
0x23a: PushEmpty(bool, object, object, bool)
0x23b: Stack[-3] = Stack[-9]
0x23c: Stack[-2] = Stack[-8]
0x23d: Stack[-1] = Stack[-7]
0x23e: Call2 0xad5

0x23f: Pop(3)
0x240: IF (Stack[-1] == 0) GOTO 0x254; Pop(1)

0x241: PushEmpty(int, object, bool)
0x242: Stack[-2] = Stack[-8]
0x243: Stack[-1] = Stack[-6]
0x244: Call2 0xa6f

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
0x252: Call2 0xa79

0x253: Pop(1)
0x254: Return(); Pop(2)

0x255: PushEmpty(int, int)
0x256: PushEmpty(int, object)
0x257: Stack[-1] = Stack[-5]
0x258: Call2 0xa81

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
0x266: Call2 0xa84

0x267: Pop(1)
0x268: Return(); Pop(2)

0x269: PushEmpty(int, int)
0x26a: PushEmpty(bool, object, string)
0x26b: Stack[-2] = Stack[-7]
0x26c: Stack[-1] = Stack[-6]
0x26d: Call2 0x9cc

0x26e: Pop(2)
0x26f: IF (Stack[-1] == 0) GOTO 0x279; Pop(1)

0x270: PushEmpty()
0x271: Call2 0x302

0x272: Pop(0)
0x273: PushEmpty(object, string)
0x274: Stack[-2] = Stack[-6]
0x275: Stack[-1] = Stack[-5]
0x276: Call2 0x9ec

0x277: Pop(2)
0x278: GOTO 0x28d

0x279: PushEmpty(int, string, object)
0x27a: Stack[-2] = Stack[-6]
0x27b: Stack[-1] = Stack[-7]
0x27c: Call2 0xa86

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
0x28b: Call2 0xa89

0x28c: Pop(2)
0x28d: Return(); Pop(2)

0x28e: PushEmpty()
0x28f: PushEmpty(bool, string)
0x290: Stack[-1] = Stack[-3]
0x291: Call2 0xa2f

0x292: Pop(1)
0x293: IF (Stack[-1] == 0) GOTO 0x29b; Pop(1)

0x294: PushEmpty()
0x295: Call2 0x302

0x296: Pop(0)
0x297: PushEmpty(string)
0x298: Stack[-1] = Stack[-2]
0x299: Call2 0xa3f

0x29a: Pop(1)
0x29b: Return(); Pop(0)

0x29c: PushEmpty()
0x29d: Call2 0x302

0x29e: Pop(0)
0x29f: PushEmpty()
0x2a0: Call2 0xa94

0x2a1: Pop(0)
0x2a2: Return(); Pop(0)

0x2a3: PushEmpty()
0x2a4: PushEmpty(bool, object)
0x2a5: Stack[-1] = Stack[-3]
0x2a6: Call2 0xa05

0x2a7: Pop(1)
0x2a8: IF (Stack[-1] == 0) GOTO 0x2b0; Pop(1)

0x2a9: PushEmpty()
0x2aa: Call2 0x302

0x2ab: Pop(0)
0x2ac: PushEmpty(object)
0x2ad: Stack[-1] = Stack[-2]
0x2ae: Call2 0xa1c

0x2af: Pop(1)
0x2b0: Return(); Pop(0)

0x2b1: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x2b2: @ WaitForAnimEnd()
0x2b3: Pop(0)
0x2b4: PushEmpty(bool)
0x2b5: Call2 0x7f5

0x2b6: Pop(0)
0x2b7: Pop(1); Push((bool) Stack[-1] == 0)
0x2b8: IF (Stack[-1] == 0) GOTO 0x2ba; Pop(1)

0x2b9: Return(); Pop(14)

0x2ba: PushEmpty(int)
0x2bb: Call2 0xa53

0x2bc: Stack[-8] = Stack[-1]
0x2bd: Pop(1)
0x2be: Stack[-6] = (int) 0
0x2bf: PushEmpty(bool)
0x2c0: Stack[-1] = (bool) 0
0x2c1: Push((int) 5)
0x2c2: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x2c3: IF (Stack[-1] == 0) GOTO 0x2c9; Pop(1)

0x2c4: PushEmpty(bool)
0x2c5: Call2 0x7f5

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
0x2d7: Call2 0xa4c

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
0x30a: Call2 0xacb

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
0x315: Call2 0xa22

0x316: Pop(1)
0x317: PushEmpty(int, object)
0x318: Stack[-1] = Stack[-5]
0x319: Call2 0xad0

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
0x327: Call2 0xad3

0x328: Pop(1)
0x329: Return(); Pop(2)

0x32a: PushEmpty()
0x32b: PushEmpty(bool, string)
0x32c: Stack[-1] = Stack[-3]
0x32d: Call2 0xa2f

0x32e: Pop(1)
0x32f: IF (Stack[-1] == 0) GOTO 0x337; Pop(1)

0x330: PushEmpty()
0x331: Call2 0x370

0x332: Pop(0)
0x333: PushEmpty(string)
0x334: Stack[-1] = Stack[-2]
0x335: Call2 0xa3f

0x336: Pop(1)
0x337: Return(); Pop(0)

0x338: PushEmpty()
0x339: Call2 0x370

0x33a: Pop(0)
0x33b: PushEmpty()
0x33c: Call2 0xa94

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
0x359: Call2 0x6c2

0x35a: Pop(1)
0x35b: Push((float)90000.0)
0x35c: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x35d: IF (Stack[-1] == 0) GOTO 0x363; Pop(1)

0x35e: PushEmpty(float, object, float)
0x35f: Stack[-2] = Stack[-6]
0x360: Stack[-1] = (float) 0.2
0x361: Call2 0x6f1

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
0x37b: Call2 0x9b4

0x37c: Pop(1)
0x37d: Return(); Pop(0)

0x37e: PushEmpty(int, int)
0x37f: PushEmpty(object)
0x380: Stack[-1] = Stack[-4]
0x381: Call2 0xa22

0x382: Pop(1)
0x383: PushEmpty(int, object)
0x384: Stack[-1] = Stack[-5]
0x385: Call2 0xad0

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
0x393: Call2 0xad3

0x394: Pop(1)
0x395: Return(); Pop(2)

0x396: PushEmpty()
0x397: PushEmpty(bool, string)
0x398: Stack[-1] = Stack[-3]
0x399: Call2 0xa2f

0x39a: Pop(1)
0x39b: IF (Stack[-1] == 0) GOTO 0x3a3; Pop(1)

0x39c: PushEmpty()
0x39d: Call2 0x434

0x39e: Pop(0)
0x39f: PushEmpty(string)
0x3a0: Stack[-1] = Stack[-2]
0x3a1: Call2 0xa3f

0x3a2: Pop(1)
0x3a3: Return(); Pop(0)

0x3a4: PushEmpty()
0x3a5: Call2 0x434

0x3a6: Pop(0)
0x3a7: PushEmpty()
0x3a8: Call2 0xa94

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
0x441: Call2 0x9b4

0x442: Pop(1)
0x443: Return(); Pop(0)

0x444: PushEmpty()
0x445: PushEmpty(bool, object)
0x446: Stack[-1] = Stack[-3]
0x447: Call2 0x75f

0x448: Stack[-4] = Stack[-2]
0x449: Pop(2)
0x44a: Return(); Pop(0)

0x44b: Stack[-1] = "run"
0x44c: Return(); Pop(0)

0x44d: PushEmpty(cvector, cvector, cvector, cvector, cvector, float, cvector, cvector, cvector, cvector, cvector, float)
0x44e: @ GetPosition(Stack[-6])
0x44f: Pop(0)
0x450: @@ GetPosition(Stack[-5])
0x451: Pop(0)
0x452: @ GetDirection(Stack[-4])
0x453: Pop(0)
0x454: PushEmpty(cvector, cvector)
0x455: PushEmpty(cvector, cvector)
0x456: Stack[-1] = Stack[-10] - Stack[-9]; Pop(0);
0x457: Call2 0x829

0x458: Pop(1)
0x459: Push((float)0.75)
0x45a: Pop(1); Push(Stack[-8] * Stack[-1]);
0x45b: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x45c: Call2 0x829

0x45d: Stack[-5] = Stack[-2]
0x45e: Pop(2)
0x45f: Push((int) 32)
0x460: Push((float)7000.0)
0x461: @ FindLongestDir(Stack[-4], Stack[-3], Stack[-5], Stack[-15], Stack[-2], Stack[-1])
0x462: Pop(2)
0x463: Push((int) 100)
0x464: Stack[-2] = Stack[-2] - Stack[-1]; Pop(1);
0x465: Push((int) 0)
0x466: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x467: IF (Stack[-1] == 0) GOTO 0x469; Pop(1)

0x468: Stack[-1] = (int) 0
0x469: Stack[-14] = Stack[-2] * Stack[-1]; Pop(0);
0x46a: Return(); Pop(12)

0x46b: PushEmpty(cvector, float, bool, cvector, float, cvector, float, bool, cvector, float)
0x46c: Stack[0 + Tasks[-1].StackPointer] = Stack[-11]
0x46d: PushEmpty(cvector, float)
0x46e: Stack[-1] = (float) 1.74533
0x46f: Call2 0x44d

0x470: Stack[-7] = Stack[-2]
0x471: Pop(2)
0x472: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x473: Push((float)2500.0)
0x474: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x475: IF (Stack[-1] == 0) GOTO 0x488; Pop(1)

0x476: PushEmpty(cvector, float)
0x477: Stack[-1] = (float) 2.61799
0x478: Call2 0x44d

0x479: Stack[-7] = Stack[-2]
0x47a: Pop(2)
0x47b: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x47c: Push((float)2500.0)
0x47d: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x47e: IF (Stack[-1] == 0) GOTO 0x488; Pop(1)

0x47f: Push("Can't retreat, distance: ")
0x480: Pop(0); Push(Sqrt(Stack[-5]))
0x481: Pop(2); Push(Stack[-2] + Stack[-1]);
0x482: @ Trace(Stack[-1])
0x483: Pop(1)
0x484: Push((float)0.5)
0x485: @ Sleep(Stack[-1])
0x486: Pop(1)
0x487: Return(); Pop(10)

0x488: Push(CvectorIndex(Stack[-5], 0))
0x489: Push(CvectorIndex(Stack[-6], 2))
0x48a: @ Rotate(Stack[-2], Stack[-1])
0x48b: Pop(2)
0x48c: PushEmpty(cvector)
0x48d: Call2 0x6b6

0x48e: Pop(0)
0x48f: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-6]; Pop(1);
0x490: Push((int) 120)
0x491: Push((float)0.5)
0x492: @ SetTimer(Stack[-2], Stack[-1])
0x493: Pop(2)
0x494: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x495: Push((int) 1)
0x496: @ MovePoint(Stack[-1], Stack[-1], Stack[-4])
0x497: Pop(1)
0x498: Push(Stack[-3])
0x499: IF (Stack[-1] == 0) GOTO 0x4b1; Pop(1)

0x49a: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x49b: IF (Stack[-1] == 0) GOTO 0x49e; Pop(1)

0x49c: GOTO 0x4b3

0x49d: GOTO 0x4b1

0x49e: PushEmpty(cvector, float)
0x49f: Stack[-1] = (float) 2.61799
0x4a0: Call2 0x44d

0x4a1: Stack[-4] = Stack[-2]
0x4a2: Pop(2)
0x4a3: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x4a4: Push((float)2500.0)
0x4a5: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x4a6: IF (Stack[-1] == 0) GOTO 0x4b0; Pop(1)

0x4a7: PushEmpty(cvector)
0x4a8: Call2 0x6b6

0x4a9: Pop(0)
0x4aa: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x4ab: Push((int) 120)
0x4ac: Push((float)0.5)
0x4ad: @ SetTimer(Stack[-2], Stack[-1])
0x4ae: Pop(2)
0x4af: GOTO 0x4b1

0x4b0: GOTO 0x4b3

0x4b1: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x4b2: IF (Stack[-1] == 0) GOTO 0x495; Pop(1)

0x4b3: Return(); Pop(10)

0x4b4: PushEmpty(cvector, float, cvector, float, cvector, float, cvector, float)
0x4b5: Push((int) 120)
0x4b6: Pop(1); Push((bool) Stack[-10] != Stack[-1])
0x4b7: IF (Stack[-1] == 0) GOTO 0x4b9; Pop(1)

0x4b8: Return(); Pop(8)

0x4b9: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x4ba: IF (Stack[-1] == 0) GOTO 0x4c2; Pop(1)

0x4bb: @ Stop()
0x4bc: Pop(0)
0x4bd: Push((int) 1)
0x4be: @ KillTimer(Stack[-1])
0x4bf: Pop(1)
0x4c0: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x4c1: GOTO 0x4e7

0x4c2: @ GetDirection(Stack[-4])
0x4c3: Pop(0)
0x4c4: Push((float)7000.0)
0x4c5: @ FindDirLength(Stack[-4], Stack[-5], Stack[-1])
0x4c6: Pop(1)
0x4c7: PushEmpty(cvector, float)
0x4c8: Stack[-1] = (float) 1.74533
0x4c9: Call2 0x44d

0x4ca: Stack[-4] = Stack[-2]
0x4cb: Pop(2)
0x4cc: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x4cd: PushEmpty(bool)
0x4ce: Stack[-1] = (bool) 0
0x4cf: Push((float)2500.0)
0x4d0: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x4d1: IF (Stack[-1] == 0) GOTO 0x4e0; Pop(1)

0x4d2: PushEmpty(bool)
0x4d3: Stack[-1] = (bool) 1
0x4d4: Pop(0); Push(Stack[-5] * Stack[-5]);
0x4d5: Push((float)2.25)
0x4d6: Pop(2); Push(Stack[-2] * Stack[-1]);
0x4d7: Pop(1); Push((bool) Stack[-4] >= Stack[-1])
0x4d8: IF (Stack[-1] == 0) GOTO 0x4de; Pop(1)

0x4d9: PushEmpty(bool)
0x4da: Call2 0x4f8

0x4db: Pop(0)
0x4dc: IF (Stack[-1] == 0) GOTO 0x4de; Pop(1)

0x4dd: Stack[-1] = (bool) 0
0x4de: IF (Stack[-1] == 0) GOTO 0x4e0; Pop(1)

0x4df: Stack[-1] = (bool) 1
0x4e0: IF (Stack[-1] == 0) GOTO 0x4e7; Pop(1)

0x4e1: @ Stop()
0x4e2: Pop(0)
0x4e3: PushEmpty(cvector)
0x4e4: Call2 0x6b6

0x4e5: Pop(0)
0x4e6: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x4e7: Return(); Pop(8)

0x4e8: @ Stop()
0x4e9: Pop(0)
0x4ea: Push((int) 120)
0x4eb: @ KillTimer(Stack[-1])
0x4ec: Pop(1)
0x4ed: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x4ee: Return(); Pop(0)

0x4ef: PushEmpty()
0x4f0: PushEmpty()
0x4f1: Call2 0x4e8

0x4f2: Pop(0)
0x4f3: PushEmpty(object)
0x4f4: Stack[-1] = Stack[-2]
0x4f5: Call2 0x9b4

0x4f6: Pop(1)
0x4f7: Return(); Pop(0)

0x4f8: PushEmpty(cvector, cvector, cvector, cvector)
0x4f9: @ GetDirection(Stack[-2])
0x4fa: Pop(0)
0x4fb: PushEmpty(cvector, object)
0x4fc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4fd: Call2 0x6bb

0x4fe: Stack[-3] = Stack[-2]
0x4ff: Pop(2)
0x500: PushEmpty(float, cvector, cvector)
0x501: Stack[-2] = Stack[-5]
0x502: Stack[-1] = Stack[-4]
0x503: Call2 0x83e

0x504: Pop(2)
0x505: Push((float)-0.34202)
0x506: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0x507: Return(); Pop(4)

0x508: PushEmpty(bool, bool)
0x509: @ Face(Stack[-3])
0x50a: Pop(0)
0x50b: PushEmpty(bool, object, float)
0x50c: Stack[-2] = Stack[-6]
0x50d: Stack[-1] = (float) 0.1
0x50e: Call2 0x846

0x50f: Pop(3)
0x510: Push("all")
0x511: Push("bow")
0x512: @ PlayAnimation(Stack[-2], Stack[-1])
0x513: Pop(2)
0x514: @ WaitForAnimEnd()
0x515: Pop(0)
0x516: @ StopAsync()
0x517: Pop(0)
0x518: PushEmpty(float)
0x519: Stack[-1] = (float) -0.06
0x51a: Call2 0x873

0x51b: Pop(1)
0x51c: PushEmpty(bool, object, string, float, float, float)
0x51d: Stack[-5] = Stack[-9]
0x51e: Stack[-4] = "health"
0x51f: Stack[-3] = (float) -0.06
0x520: Stack[-2] = (int) 0
0x521: Stack[-1] = (int) 1
0x522: Call2 0x6db

0x523: Pop(6)
0x524: Push("disease")
0x525: @ HasProperty(Stack[-1], Stack[-2])
0x526: Pop(1)
0x527: Push(Stack[-1])
0x528: IF (Stack[-1] == 0) GOTO 0x52d; Pop(1)

0x529: Push("disease")
0x52a: Push((int) 0)
0x52b: @ SetProperty(Stack[-2], Stack[-1])
0x52c: Pop(2)
0x52d: PushEmpty(object)
0x52e: Stack[-1] = Stack[-4]
0x52f: Call2 0x557

0x530: Pop(1)
0x531: Return(); Pop(2)

0x532: PushEmpty()
0x533: Call2 0x5d4

0x534: Pop(0)
0x535: PushEmpty()
0x536: Call2 0xa94

0x537: Pop(0)
0x538: Return(); Pop(0)

0x539: PushEmpty(cvector, cvector, cvector, cvector, cvector, float, cvector, cvector, cvector, cvector, cvector, float)
0x53a: @ GetPosition(Stack[-6])
0x53b: Pop(0)
0x53c: @@ GetPosition(Stack[-5])
0x53d: Pop(0)
0x53e: @ GetDirection(Stack[-4])
0x53f: Pop(0)
0x540: PushEmpty(cvector, cvector)
0x541: PushEmpty(cvector, cvector)
0x542: Stack[-1] = Stack[-10] - Stack[-9]; Pop(0);
0x543: Call2 0x829

0x544: Pop(1)
0x545: Push((float)0.75)
0x546: Pop(1); Push(Stack[-8] * Stack[-1]);
0x547: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x548: Call2 0x829

0x549: Stack[-5] = Stack[-2]
0x54a: Pop(2)
0x54b: Push((int) 32)
0x54c: Push((float)7000.0)
0x54d: @ FindLongestDir(Stack[-4], Stack[-3], Stack[-5], Stack[-15], Stack[-2], Stack[-1])
0x54e: Pop(2)
0x54f: Push((int) 100)
0x550: Stack[-2] = Stack[-2] - Stack[-1]; Pop(1);
0x551: Push((int) 0)
0x552: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x553: IF (Stack[-1] == 0) GOTO 0x555; Pop(1)

0x554: Stack[-1] = (int) 0
0x555: Stack[-14] = Stack[-2] * Stack[-1]; Pop(0);
0x556: Return(); Pop(12)

0x557: PushEmpty(cvector, float, bool, cvector, float, cvector, float, bool, cvector, float)
0x558: Stack[0 + Tasks[-1].StackPointer] = Stack[-11]
0x559: PushEmpty(cvector, float)
0x55a: Stack[-1] = (float) 1.74533
0x55b: Call2 0x539

0x55c: Stack[-7] = Stack[-2]
0x55d: Pop(2)
0x55e: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x55f: Push((float)2500.0)
0x560: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x561: IF (Stack[-1] == 0) GOTO 0x574; Pop(1)

0x562: PushEmpty(cvector, float)
0x563: Stack[-1] = (float) 2.61799
0x564: Call2 0x539

0x565: Stack[-7] = Stack[-2]
0x566: Pop(2)
0x567: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x568: Push((float)2500.0)
0x569: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x56a: IF (Stack[-1] == 0) GOTO 0x574; Pop(1)

0x56b: Push("Can't retreat, distance: ")
0x56c: Pop(0); Push(Sqrt(Stack[-5]))
0x56d: Pop(2); Push(Stack[-2] + Stack[-1]);
0x56e: @ Trace(Stack[-1])
0x56f: Pop(1)
0x570: Push((float)0.5)
0x571: @ Sleep(Stack[-1])
0x572: Pop(1)
0x573: Return(); Pop(10)

0x574: Push(CvectorIndex(Stack[-5], 0))
0x575: Push(CvectorIndex(Stack[-6], 2))
0x576: @ Rotate(Stack[-2], Stack[-1])
0x577: Pop(2)
0x578: PushEmpty(cvector)
0x579: Call2 0x6b6

0x57a: Pop(0)
0x57b: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-6]; Pop(1);
0x57c: Push((int) 120)
0x57d: Push((float)0.5)
0x57e: @ SetTimer(Stack[-2], Stack[-1])
0x57f: Pop(2)
0x580: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x581: Push((int) 1)
0x582: @ MovePoint(Stack[-1], Stack[-1], Stack[-4])
0x583: Pop(1)
0x584: Push(Stack[-3])
0x585: IF (Stack[-1] == 0) GOTO 0x59d; Pop(1)

0x586: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x587: IF (Stack[-1] == 0) GOTO 0x58a; Pop(1)

0x588: GOTO 0x59f

0x589: GOTO 0x59d

0x58a: PushEmpty(cvector, float)
0x58b: Stack[-1] = (float) 2.61799
0x58c: Call2 0x539

0x58d: Stack[-4] = Stack[-2]
0x58e: Pop(2)
0x58f: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x590: Push((float)2500.0)
0x591: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x592: IF (Stack[-1] == 0) GOTO 0x59c; Pop(1)

0x593: PushEmpty(cvector)
0x594: Call2 0x6b6

0x595: Pop(0)
0x596: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x597: Push((int) 120)
0x598: Push((float)0.5)
0x599: @ SetTimer(Stack[-2], Stack[-1])
0x59a: Pop(2)
0x59b: GOTO 0x59d

0x59c: GOTO 0x59f

0x59d: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x59e: IF (Stack[-1] == 0) GOTO 0x581; Pop(1)

0x59f: Return(); Pop(10)

0x5a0: PushEmpty(cvector, float, cvector, float, cvector, float, cvector, float)
0x5a1: Push((int) 120)
0x5a2: Pop(1); Push((bool) Stack[-10] != Stack[-1])
0x5a3: IF (Stack[-1] == 0) GOTO 0x5a5; Pop(1)

0x5a4: Return(); Pop(8)

0x5a5: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x5a6: IF (Stack[-1] == 0) GOTO 0x5ae; Pop(1)

0x5a7: @ Stop()
0x5a8: Pop(0)
0x5a9: Push((int) 1)
0x5aa: @ KillTimer(Stack[-1])
0x5ab: Pop(1)
0x5ac: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x5ad: GOTO 0x5d3

0x5ae: @ GetDirection(Stack[-4])
0x5af: Pop(0)
0x5b0: Push((float)7000.0)
0x5b1: @ FindDirLength(Stack[-4], Stack[-5], Stack[-1])
0x5b2: Pop(1)
0x5b3: PushEmpty(cvector, float)
0x5b4: Stack[-1] = (float) 1.74533
0x5b5: Call2 0x539

0x5b6: Stack[-4] = Stack[-2]
0x5b7: Pop(2)
0x5b8: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x5b9: PushEmpty(bool)
0x5ba: Stack[-1] = (bool) 0
0x5bb: Push((float)2500.0)
0x5bc: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x5bd: IF (Stack[-1] == 0) GOTO 0x5cc; Pop(1)

0x5be: PushEmpty(bool)
0x5bf: Stack[-1] = (bool) 1
0x5c0: Pop(0); Push(Stack[-5] * Stack[-5]);
0x5c1: Push((float)2.25)
0x5c2: Pop(2); Push(Stack[-2] * Stack[-1]);
0x5c3: Pop(1); Push((bool) Stack[-4] >= Stack[-1])
0x5c4: IF (Stack[-1] == 0) GOTO 0x5ca; Pop(1)

0x5c5: PushEmpty(bool)
0x5c6: Call2 0x5e4

0x5c7: Pop(0)
0x5c8: IF (Stack[-1] == 0) GOTO 0x5ca; Pop(1)

0x5c9: Stack[-1] = (bool) 0
0x5ca: IF (Stack[-1] == 0) GOTO 0x5cc; Pop(1)

0x5cb: Stack[-1] = (bool) 1
0x5cc: IF (Stack[-1] == 0) GOTO 0x5d3; Pop(1)

0x5cd: @ Stop()
0x5ce: Pop(0)
0x5cf: PushEmpty(cvector)
0x5d0: Call2 0x6b6

0x5d1: Pop(0)
0x5d2: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x5d3: Return(); Pop(8)

0x5d4: @ Stop()
0x5d5: Pop(0)
0x5d6: Push((int) 120)
0x5d7: @ KillTimer(Stack[-1])
0x5d8: Pop(1)
0x5d9: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x5da: Return(); Pop(0)

0x5db: PushEmpty()
0x5dc: PushEmpty()
0x5dd: Call2 0x5d4

0x5de: Pop(0)
0x5df: PushEmpty(object)
0x5e0: Stack[-1] = Stack[-2]
0x5e1: Call2 0x9b4

0x5e2: Pop(1)
0x5e3: Return(); Pop(0)

0x5e4: PushEmpty(cvector, cvector, cvector, cvector)
0x5e5: @ GetDirection(Stack[-2])
0x5e6: Pop(0)
0x5e7: PushEmpty(cvector, object)
0x5e8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5e9: Call2 0x6bb

0x5ea: Stack[-3] = Stack[-2]
0x5eb: Pop(2)
0x5ec: PushEmpty(float, cvector, cvector)
0x5ed: Stack[-2] = Stack[-5]
0x5ee: Stack[-1] = Stack[-4]
0x5ef: Call2 0x83e

0x5f0: Pop(2)
0x5f1: Push((float)-0.34202)
0x5f2: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0x5f3: Return(); Pop(4)

0x5f4: PushEmpty()
0x5f5: Call2 0x696

0x5f6: Pop(0)
0x5f7: PushEmpty()
0x5f8: Call2 0xa94

0x5f9: Pop(0)
0x5fa: Return(); Pop(0)

0x5fb: PushEmpty(cvector, cvector, cvector, cvector, cvector, float, cvector, cvector, cvector, cvector, cvector, float)
0x5fc: @ GetPosition(Stack[-6])
0x5fd: Pop(0)
0x5fe: @@ GetPosition(Stack[-5])
0x5ff: Pop(0)
0x600: @ GetDirection(Stack[-4])
0x601: Pop(0)
0x602: PushEmpty(cvector, cvector)
0x603: PushEmpty(cvector, cvector)
0x604: Stack[-1] = Stack[-10] - Stack[-9]; Pop(0);
0x605: Call2 0x829

0x606: Pop(1)
0x607: Push((float)0.75)
0x608: Pop(1); Push(Stack[-8] * Stack[-1]);
0x609: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x60a: Call2 0x829

0x60b: Stack[-5] = Stack[-2]
0x60c: Pop(2)
0x60d: Push((int) 32)
0x60e: Push((float)7000.0)
0x60f: @ FindLongestDir(Stack[-4], Stack[-3], Stack[-5], Stack[-15], Stack[-2], Stack[-1])
0x610: Pop(2)
0x611: Push((int) 100)
0x612: Stack[-2] = Stack[-2] - Stack[-1]; Pop(1);
0x613: Push((int) 0)
0x614: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x615: IF (Stack[-1] == 0) GOTO 0x617; Pop(1)

0x616: Stack[-1] = (int) 0
0x617: Stack[-14] = Stack[-2] * Stack[-1]; Pop(0);
0x618: Return(); Pop(12)

0x619: PushEmpty(cvector, float, bool, cvector, float, cvector, float, bool, cvector, float)
0x61a: Stack[0 + Tasks[-1].StackPointer] = Stack[-11]
0x61b: PushEmpty(cvector, float)
0x61c: Stack[-1] = (float) 1.74533
0x61d: Call2 0x5fb

0x61e: Stack[-7] = Stack[-2]
0x61f: Pop(2)
0x620: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x621: Push((float)2500.0)
0x622: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x623: IF (Stack[-1] == 0) GOTO 0x636; Pop(1)

0x624: PushEmpty(cvector, float)
0x625: Stack[-1] = (float) 2.61799
0x626: Call2 0x5fb

0x627: Stack[-7] = Stack[-2]
0x628: Pop(2)
0x629: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x62a: Push((float)2500.0)
0x62b: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x62c: IF (Stack[-1] == 0) GOTO 0x636; Pop(1)

0x62d: Push("Can't retreat, distance: ")
0x62e: Pop(0); Push(Sqrt(Stack[-5]))
0x62f: Pop(2); Push(Stack[-2] + Stack[-1]);
0x630: @ Trace(Stack[-1])
0x631: Pop(1)
0x632: Push((float)0.5)
0x633: @ Sleep(Stack[-1])
0x634: Pop(1)
0x635: Return(); Pop(10)

0x636: Push(CvectorIndex(Stack[-5], 0))
0x637: Push(CvectorIndex(Stack[-6], 2))
0x638: @ Rotate(Stack[-2], Stack[-1])
0x639: Pop(2)
0x63a: PushEmpty(cvector)
0x63b: Call2 0x6b6

0x63c: Pop(0)
0x63d: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-6]; Pop(1);
0x63e: Push((int) 120)
0x63f: Push((float)0.5)
0x640: @ SetTimer(Stack[-2], Stack[-1])
0x641: Pop(2)
0x642: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x643: Push((int) 1)
0x644: @ MovePoint(Stack[-1], Stack[-1], Stack[-4])
0x645: Pop(1)
0x646: Push(Stack[-3])
0x647: IF (Stack[-1] == 0) GOTO 0x65f; Pop(1)

0x648: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x649: IF (Stack[-1] == 0) GOTO 0x64c; Pop(1)

0x64a: GOTO 0x661

0x64b: GOTO 0x65f

0x64c: PushEmpty(cvector, float)
0x64d: Stack[-1] = (float) 2.61799
0x64e: Call2 0x5fb

0x64f: Stack[-4] = Stack[-2]
0x650: Pop(2)
0x651: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x652: Push((float)2500.0)
0x653: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x654: IF (Stack[-1] == 0) GOTO 0x65e; Pop(1)

0x655: PushEmpty(cvector)
0x656: Call2 0x6b6

0x657: Pop(0)
0x658: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x659: Push((int) 120)
0x65a: Push((float)0.5)
0x65b: @ SetTimer(Stack[-2], Stack[-1])
0x65c: Pop(2)
0x65d: GOTO 0x65f

0x65e: GOTO 0x661

0x65f: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x660: IF (Stack[-1] == 0) GOTO 0x643; Pop(1)

0x661: Return(); Pop(10)

0x662: PushEmpty(cvector, float, cvector, float, cvector, float, cvector, float)
0x663: Push((int) 120)
0x664: Pop(1); Push((bool) Stack[-10] != Stack[-1])
0x665: IF (Stack[-1] == 0) GOTO 0x667; Pop(1)

0x666: Return(); Pop(8)

0x667: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x668: IF (Stack[-1] == 0) GOTO 0x670; Pop(1)

0x669: @ Stop()
0x66a: Pop(0)
0x66b: Push((int) 1)
0x66c: @ KillTimer(Stack[-1])
0x66d: Pop(1)
0x66e: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x66f: GOTO 0x695

0x670: @ GetDirection(Stack[-4])
0x671: Pop(0)
0x672: Push((float)7000.0)
0x673: @ FindDirLength(Stack[-4], Stack[-5], Stack[-1])
0x674: Pop(1)
0x675: PushEmpty(cvector, float)
0x676: Stack[-1] = (float) 1.74533
0x677: Call2 0x5fb

0x678: Stack[-4] = Stack[-2]
0x679: Pop(2)
0x67a: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x67b: PushEmpty(bool)
0x67c: Stack[-1] = (bool) 0
0x67d: Push((float)2500.0)
0x67e: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x67f: IF (Stack[-1] == 0) GOTO 0x68e; Pop(1)

0x680: PushEmpty(bool)
0x681: Stack[-1] = (bool) 1
0x682: Pop(0); Push(Stack[-5] * Stack[-5]);
0x683: Push((float)2.25)
0x684: Pop(2); Push(Stack[-2] * Stack[-1]);
0x685: Pop(1); Push((bool) Stack[-4] >= Stack[-1])
0x686: IF (Stack[-1] == 0) GOTO 0x68c; Pop(1)

0x687: PushEmpty(bool)
0x688: Call2 0x6a6

0x689: Pop(0)
0x68a: IF (Stack[-1] == 0) GOTO 0x68c; Pop(1)

0x68b: Stack[-1] = (bool) 0
0x68c: IF (Stack[-1] == 0) GOTO 0x68e; Pop(1)

0x68d: Stack[-1] = (bool) 1
0x68e: IF (Stack[-1] == 0) GOTO 0x695; Pop(1)

0x68f: @ Stop()
0x690: Pop(0)
0x691: PushEmpty(cvector)
0x692: Call2 0x6b6

0x693: Pop(0)
0x694: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x695: Return(); Pop(8)

0x696: @ Stop()
0x697: Pop(0)
0x698: Push((int) 120)
0x699: @ KillTimer(Stack[-1])
0x69a: Pop(1)
0x69b: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x69c: Return(); Pop(0)

0x69d: PushEmpty()
0x69e: PushEmpty()
0x69f: Call2 0x696

0x6a0: Pop(0)
0x6a1: PushEmpty(object)
0x6a2: Stack[-1] = Stack[-2]
0x6a3: Call2 0x9b4

0x6a4: Pop(1)
0x6a5: Return(); Pop(0)

0x6a6: PushEmpty(cvector, cvector, cvector, cvector)
0x6a7: @ GetDirection(Stack[-2])
0x6a8: Pop(0)
0x6a9: PushEmpty(cvector, object)
0x6aa: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x6ab: Call2 0x6bb

0x6ac: Stack[-3] = Stack[-2]
0x6ad: Pop(2)
0x6ae: PushEmpty(float, cvector, cvector)
0x6af: Stack[-2] = Stack[-5]
0x6b0: Stack[-1] = Stack[-4]
0x6b1: Call2 0x83e

0x6b2: Pop(2)
0x6b3: Push((float)-0.34202)
0x6b4: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0x6b5: Return(); Pop(4)

0x6b6: PushEmpty(cvector, cvector)
0x6b7: @ GetPosition(Stack[-1])
0x6b8: Pop(0)
0x6b9: Stack[-3] = Stack[-1]
0x6ba: Return(); Pop(2)

0x6bb: PushEmpty(cvector, cvector, cvector, cvector)
0x6bc: @ GetPosition(Stack[-2])
0x6bd: Pop(0)
0x6be: @@ GetPosition(Stack[-1])
0x6bf: Pop(0)
0x6c0: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x6c1: Return(); Pop(4)

0x6c2: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x6c3: @ GetPosition(Stack[-3])
0x6c4: Pop(0)
0x6c5: @@ GetPosition(Stack[-2])
0x6c6: Pop(0)
0x6c7: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x6c8: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x6c9: Return(); Pop(6)

0x6ca: PushEmpty(bool, bool)
0x6cb: @ IsPlayerActor(Stack[-3], Stack[-1])
0x6cc: Pop(0)
0x6cd: Stack[-4] = Stack[-1]
0x6ce: Return(); Pop(2)

0x6cf: PushEmpty(bool, bool)
0x6d0: Push("HasProperty")
0x6d1: Push((int) 2)
0x6d2: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x6d3: Pop(1); Push((bool) Stack[-1] == 0)
0x6d4: IF (Stack[-1] == 0) GOTO 0x6d7; Pop(1)

0x6d5: Stack[-5] = (bool) 0
0x6d6: Return(); Pop(2)

0x6d7: @@ HasProperty(Stack[-3], Stack[-1])
0x6d8: Pop(0)
0x6d9: Stack[-5] = Stack[-1]
0x6da: Return(); Pop(2)

0x6db: PushEmpty(float, float)
0x6dc: PushEmpty(bool, object, string)
0x6dd: Stack[-2] = Stack[-10]
0x6de: Stack[-1] = Stack[-9]
0x6df: Call2 0x6cf

0x6e0: Pop(2)
0x6e1: Pop(1); Push((bool) Stack[-1] == 0)
0x6e2: IF (Stack[-1] == 0) GOTO 0x6e5; Pop(1)

0x6e3: Stack[-8] = (bool) 0
0x6e4: Return(); Pop(2)

0x6e5: @@ GetProperty(Stack[-6], Stack[-1])
0x6e6: Pop(0)
0x6e7: PushEmpty(float, float, float, float)
0x6e8: Stack[-3] = Stack[-5] + Stack[-9]; Pop(0);
0x6e9: Stack[-2] = Stack[-8]
0x6ea: Stack[-1] = Stack[-7]
0x6eb: Call2 0x833

0x6ec: Pop(3)
0x6ed: @@ SetProperty(Stack[-7], Stack[-1])
0x6ee: Pop(1)
0x6ef: Stack[-8] = (bool) 1
0x6f0: Return(); Pop(2)

0x6f1: PushEmpty(float, float, float, float)
0x6f2: PushEmpty(bool, object, string)
0x6f3: Stack[-2] = Stack[-9]
0x6f4: Stack[-1] = "disease"
0x6f5: Call2 0x6cf

0x6f6: Pop(2)
0x6f7: Pop(1); Push((bool) Stack[-1] == 0)
0x6f8: IF (Stack[-1] == 0) GOTO 0x6fb; Pop(1)

0x6f9: Stack[-7] = (int) 0
0x6fa: Return(); Pop(4)

0x6fb: Stack[-2] = (int) 0
0x6fc: PushEmpty(bool, object, string)
0x6fd: Stack[-2] = Stack[-9]
0x6fe: Stack[-1] = "armor_disease"
0x6ff: Call2 0x6cf

0x700: Pop(2)
0x701: IF (Stack[-1] == 0) GOTO 0x707; Pop(1)

0x702: Push("armor_disease")
0x703: @@ GetProperty(Stack[-1], Stack[-3])
0x704: Pop(1)
0x705: Push((int) 100)
0x706: Stack[-3] = Stack[-3] / Stack[-1]; Pop(1);
0x707: PushEmpty(bool, object, string)
0x708: Stack[-2] = Stack[-9]
0x709: Stack[-1] = "immunity"
0x70a: Call2 0x6cf

0x70b: Pop(2)
0x70c: IF (Stack[-1] == 0) GOTO 0x719; Pop(1)

0x70d: Push("immunity")
0x70e: @@ GetProperty(Stack[-1], Stack[-2])
0x70f: Pop(1)
0x710: Stack[-2] = Stack[-2] + Stack[-1]; Pop(0);
0x711: PushEmpty(bool, object, string, float, float, float)
0x712: Stack[-5] = Stack[-12]
0x713: Stack[-4] = "immunity"
0x714: Stack[-3] = -Stack[-11]; Pop(0);
0x715: Stack[-2] = (int) 0
0x716: Stack[-1] = (int) 1
0x717: Call2 0x6db

0x718: Pop(6)
0x719: Push((int) 1)
0x71a: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x71b: IF (Stack[-1] == 0) GOTO 0x71e; Pop(1)

0x71c: Stack[-7] = (float) 0.0
0x71d: Return(); Pop(4)

0x71e: Push((int) 1)
0x71f: Pop(1); Push(Stack[-1] - Stack[-3]);
0x720: Push((int) 2)
0x721: Pop(2); Push(Stack[-2] / Stack[-1]);
0x722: Stack[-6] = Stack[-6] * Stack[-1]; Pop(1);
0x723: PushEmpty(bool, object, string, float, float, float)
0x724: Stack[-5] = Stack[-12]
0x725: Stack[-4] = "disease"
0x726: Stack[-3] = Stack[-11]
0x727: Stack[-2] = (int) 0
0x728: Stack[-1] = (int) 1
0x729: Call2 0x6db

0x72a: Pop(6)
0x72b: PushEmpty(bool, object)
0x72c: Stack[-1] = Stack[-8]
0x72d: Call2 0x6ca

0x72e: Pop(1)
0x72f: IF (Stack[-1] == 0) GOTO 0x734; Pop(1)

0x730: PushEmpty(float)
0x731: Stack[-1] = Stack[-6]
0x732: Call2 0x869

0x733: Pop(1)
0x734: Stack[-7] = Stack[-5]
0x735: Return(); Pop(4)

0x736: PushEmpty(bool, bool)
0x737: @@ IsDead(Stack[-1])
0x738: Pop(0)
0x739: Stack[-4] = Stack[-1]
0x73a: Return(); Pop(2)

0x73b: PushEmpty(object, object, object, object)
0x73c: Pop(0); Push((bool) Stack[-5] == 0)
0x73d: IF (Stack[-1] == 0) GOTO 0x740; Pop(1)

0x73e: Stack[-6] = (bool) 0
0x73f: Return(); Pop(4)

0x740: PushEmpty(bool)
0x741: Stack[-1] = (bool) 0
0x742: Push("IsDead")
0x743: Push((int) 1)
0x744: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x745: IF (Stack[-1] == 0) GOTO 0x74c; Pop(1)

0x746: PushEmpty(bool, object)
0x747: Stack[-1] = Stack[-8]
0x748: Call2 0x736

0x749: Pop(1)
0x74a: IF (Stack[-1] == 0) GOTO 0x74c; Pop(1)

0x74b: Stack[-1] = (bool) 1
0x74c: IF (Stack[-1] == 0) GOTO 0x74f; Pop(1)

0x74d: Stack[-6] = (bool) 0
0x74e: Return(); Pop(4)

0x74f: @ GetScene(Stack[-2])
0x750: Pop(0)
0x751: Pop(0); Push((bool) Stack[-2] == 0)
0x752: IF (Stack[-1] == 0) GOTO 0x755; Pop(1)

0x753: Stack[-6] = (bool) 0
0x754: Return(); Pop(4)

0x755: @@ GetScene(Stack[-1])
0x756: Pop(0)
0x757: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x758: IF (Stack[-1] == 0) GOTO 0x75b; Pop(1)

0x759: Stack[-6] = (bool) 0
0x75a: Return(); Pop(4)

0x75b: Stack[-6] = (bool) 1
0x75c: Return(); Pop(4)

0x75d: Stack[-1] = 0
0x75e: Stack[-2] = 0
0x75f: PushEmpty(int, int)
0x760: PushEmpty(bool, object)
0x761: Stack[-1] = Stack[-5]
0x762: Call2 0x73b

0x763: Pop(1)
0x764: Pop(1); Push((bool) Stack[-1] == 0)
0x765: IF (Stack[-1] == 0) GOTO 0x768; Pop(1)

0x766: Stack[-4] = (bool) 0
0x767: Return(); Pop(2)

0x768: PushEmpty(bool, object, string)
0x769: Stack[-2] = Stack[-6]
0x76a: Stack[-1] = "noaccess"
0x76b: Call2 0x6cf

0x76c: Pop(2)
0x76d: Pop(1); Push((bool) Stack[-1] == 0)
0x76e: IF (Stack[-1] == 0) GOTO 0x771; Pop(1)

0x76f: Stack[-4] = (bool) 1
0x770: Return(); Pop(2)

0x771: Push("noaccess")
0x772: @@ GetProperty(Stack[-1], Stack[-2])
0x773: Pop(1)
0x774: Push((int) 0)
0x775: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x776: Return(); Pop(2)

0x777: PushEmpty(bool, int, cvector, cvector, cvector, cvector, string, bool, int, cvector, cvector, cvector, cvector, string)
0x778: Pop(0); Push((bool) Stack[-15] == 0)
0x779: IF (Stack[-1] == 0) GOTO 0x77b; Pop(1)

0x77a: Return(); Pop(14)

0x77b: @ IsDead(Stack[-7])
0x77c: Pop(0)
0x77d: Push(Stack[-7])
0x77e: IF (Stack[-1] == 0) GOTO 0x780; Pop(1)

0x77f: Return(); Pop(14)

0x780: @ GetSecondaryAnimationType(Stack[-6])
0x781: Pop(0)
0x782: Push((int) 0)
0x783: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x784: IF (Stack[-1] == 0) GOTO 0x786; Pop(1)

0x785: Return(); Pop(14)

0x786: @@ GetPosition(Stack[-5])
0x787: Pop(0)
0x788: @ GetPosition(Stack[-4])
0x789: Pop(0)
0x78a: @ GetDirection(Stack[-3])
0x78b: Pop(0)
0x78c: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0x78d: Push(CvectorIndex(Stack[-2], 0))
0x78e: Push(CvectorIndex(Stack[-4], 0))
0x78f: Pop(2); Push(Stack[-2] * Stack[-1]);
0x790: Push(CvectorIndex(Stack[-3], 2))
0x791: Push(CvectorIndex(Stack[-5], 2))
0x792: Pop(2); Push(Stack[-2] * Stack[-1]);
0x793: Pop(2); Push(Stack[-2] + Stack[-1]);
0x794: Push((int) 0)
0x795: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x796: IF (Stack[-1] == 0) GOTO 0x799; Pop(1)

0x797: Stack[-1] = "fhit"
0x798: GOTO 0x79a

0x799: Stack[-1] = "bhit"
0x79a: Push("hit_react")
0x79b: Push("1")
0x79c: Pop(1); Push(Stack[-3] + Stack[-1]);
0x79d: Push("2")
0x79e: Pop(1); Push(Stack[-4] + Stack[-1]);
0x79f: Push((int) -10)
0x7a0: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x7a1: Pop(4)
0x7a2: Return(); Pop(14)

0x7a3: PushEmpty(cvector, object, int, bool, cvector, cvector, int, int, cvector, cvector, object, int, bool, cvector, cvector, int, int, cvector)
0x7a4: PushEmpty(bool)
0x7a5: Stack[-1] = (bool) 0
0x7a6: PushEmpty(bool)
0x7a7: Stack[-1] = (bool) 0
0x7a8: Push(Stack[-23])
0x7a9: IF (Stack[-1] == 0) GOTO 0x7ae; Pop(1)

0x7aa: Push((int) 4)
0x7ab: Pop(1); Push((bool) Stack[-23] != Stack[-1])
0x7ac: IF (Stack[-1] == 0) GOTO 0x7ae; Pop(1)

0x7ad: Stack[-1] = (bool) 1
0x7ae: IF (Stack[-1] == 0) GOTO 0x7b3; Pop(1)

0x7af: Push((int) 5)
0x7b0: Pop(1); Push((bool) Stack[-22] != Stack[-1])
0x7b1: IF (Stack[-1] == 0) GOTO 0x7b3; Pop(1)

0x7b2: Stack[-1] = (bool) 1
0x7b3: IF (Stack[-1] == 0) GOTO 0x7e2; Pop(1)

0x7b4: PushEmpty(cvector, cvector)
0x7b5: PushEmpty(cvector, object)
0x7b6: Stack[-1] = Stack[-25]
0x7b7: Call2 0x6bb

0x7b8: Stack[-3] = Stack[-2]
0x7b9: Pop(2)
0x7ba: Call2 0x829

0x7bb: Stack[-11] = Stack[-2]
0x7bc: Pop(2)
0x7bd: @ CreateVectorVector(Stack[-8])
0x7be: Pop(0)
0x7bf: Stack[-7] = (int) 1
0x7c0: Push("hit")
0x7c1: Pop(1); Push(Stack[-1] + Stack[-8]);
0x7c2: @ GetGeometryLocator(Stack[-1], Stack[-7], Stack[-6], Stack[-5])
0x7c3: Pop(1)
0x7c4: Pop(0); Push((bool) Stack[-6] == 0)
0x7c5: IF (Stack[-1] == 0) GOTO 0x7c7; Pop(1)

0x7c6: GOTO 0x7d0

0x7c7: Pop(0); Push(Stack[-4] | Stack[-9]);
0x7c8: Push((float)0.70711)
0x7c9: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x7ca: IF (Stack[-1] == 0) GOTO 0x7cd; Pop(1)

0x7cb: @@ add(Stack[-5])
0x7cc: Pop(0)
0x7cd: Push((int) 1)
0x7ce: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x7cf: GOTO 0x7c0

0x7d0: @@ size(Stack[-3])
0x7d1: Pop(0)
0x7d2: Push(Stack[-3])
0x7d3: IF (Stack[-1] == 0) GOTO 0x7e1; Pop(1)

0x7d4: @ irand(Stack[-2], Stack[-3])
0x7d5: Pop(0)
0x7d6: @@ get(Stack[-1], Stack[-2])
0x7d7: Pop(0)
0x7d8: PushEmpty(object, int, float, cvector, cvector)
0x7d9: Stack[-5] = Stack[-26]
0x7da: Stack[-4] = Stack[-25]
0x7db: Stack[-3] = Stack[-24]
0x7dc: Stack[-2] = Stack[-6]
0x7dd: Stack[-1] = -Stack[-14]; Pop(0);
0x7de: Call2 0x7e7

0x7df: Pop(5)
0x7e0: Return(); Pop(18)

0x7e1: Stack[-8] = 0
0x7e2: PushEmpty(object)
0x7e3: Stack[-1] = Stack[-22]
0x7e4: Call2 0x777

0x7e5: Pop(1)
0x7e6: Return(); Pop(18)

0x7e7: PushEmpty(object, object, object, object)
0x7e8: @ GetScene(Stack[-2])
0x7e9: Pop(0)
0x7ea: Push("scripted")
0x7eb: Push("blood_dir.xml")
0x7ec: @ AddActorByType(Stack[-3], Stack[-2], Stack[-4], Stack[-8], Stack[-7], Stack[-1])
0x7ed: Pop(2)
0x7ee: PushEmpty(object)
0x7ef: Stack[-1] = Stack[-10]
0x7f0: Call2 0x777

0x7f1: Pop(1)
0x7f2: Return(); Pop(4)

0x7f3: Stack[-1] = 0
0x7f4: Stack[-2] = 0
0x7f5: PushEmpty(bool, bool)
0x7f6: @ IsLoaded(Stack[-1])
0x7f7: Pop(0)
0x7f8: Stack[-3] = Stack[-1]
0x7f9: Return(); Pop(2)

0x7fa: PushEmpty(bool, int, bool, int, bool, float, cvector, cvector, bool, int, bool, int, bool, float, cvector, cvector)
0x7fb: @ IsExisting3DSound(Stack[-8], Stack[-17])
0x7fc: Pop(0)
0x7fd: Pop(0); Push((bool) Stack[-8] == 0)
0x7fe: IF (Stack[-1] == 0) GOTO 0x813; Pop(1)

0x7ff: Stack[-7] = (int) 0
0x800: Push((int) 1)
0x801: Pop(1); Push(Stack[-8] + Stack[-1]);
0x802: Pop(1); Push(Stack[-18] + Stack[-1]);
0x803: @ IsExisting3DSound(Stack[-7], Stack[-1])
0x804: Pop(1)
0x805: Pop(0); Push((bool) Stack[-6] == 0)
0x806: IF (Stack[-1] == 0) GOTO 0x808; Pop(1)

0x807: GOTO 0x80b

0x808: Push((int) 1)
0x809: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x80a: GOTO 0x800

0x80b: Pop(0); Push((bool) Stack[-7] == 0)
0x80c: IF (Stack[-1] == 0) GOTO 0x80e; Pop(1)

0x80d: Return(); Pop(16)

0x80e: @ irand(Stack[-5], Stack[-7])
0x80f: Pop(0)
0x810: Push((int) 1)
0x811: Pop(1); Push(Stack[-6] + Stack[-1]);
0x812: Stack[-18] = Stack[-18] + Stack[-1]; Pop(1);
0x813: @ Is3DSoundLoaded(Stack[-4], Stack[-17])
0x814: Pop(0)
0x815: Push(Stack[-4])
0x816: IF (Stack[-1] == 0) GOTO 0x822; Pop(1)

0x817: @ GetEyesHeight(Stack[-3])
0x818: Pop(0)
0x819: @ GetDirection(Stack[-2])
0x81a: Pop(0)
0x81b: Push((int) 50)
0x81c: Stack[-2] = Stack[-3] * Stack[-1]; Pop(1);
0x81d: Push(CvectorIndex(Stack[-1], 1))
0x81e: Stack[-1] = Stack[-1] + Stack[-4]; Pop(0);
0x81f: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x820: @ PlayGlobalSound(Stack[-17], Stack[-1])
0x821: Pop(0)
0x822: Return(); Pop(16)

0x823: PushEmpty(object, object)
0x824: @ self(Stack[-1])
0x825: Pop(0)
0x826: Stack[-3] = Stack[-1]
0x827: Return(); Pop(2)

0x828: Stack[-1] = 0
0x829: PushEmpty(float, float)
0x82a: Pop(0); Push(Stack[-3] | Stack[-3]);
0x82b: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x82c: Push((float)0.0)
0x82d: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x82e: IF (Stack[-1] == 0) GOTO 0x831; Pop(1)

0x82f: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x830: Return(); Pop(2)

0x831: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x832: Return(); Pop(2)

0x833: PushEmpty()
0x834: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x835: IF (Stack[-1] == 0) GOTO 0x838; Pop(1)

0x836: Stack[-4] = Stack[-2]
0x837: Return(); Pop(0)

0x838: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x839: IF (Stack[-1] == 0) GOTO 0x83c; Pop(1)

0x83a: Stack[-4] = Stack[-1]
0x83b: Return(); Pop(0)

0x83c: Stack[-4] = Stack[-3]
0x83d: Return(); Pop(0)

0x83e: PushEmpty()
0x83f: Pop(0); Push(Stack[-2] | Stack[-1]);
0x840: Pop(0); Push(Stack[-3] | Stack[-3]);
0x841: Pop(0); Push(Stack[-3] | Stack[-3]);
0x842: Pop(2); Push(Stack[-2] * Stack[-1]);
0x843: Pop(1); Push(Sqrt(Stack[-1]))
0x844: Stack[-5] = Stack[-2] / Stack[-1]; Pop(2);
0x845: Return(); Pop(0)

0x846: PushEmpty()
0x847: Pop(0); Push((bool) Stack[-2] == 0)
0x848: IF (Stack[-1] == 0) GOTO 0x84b; Pop(1)

0x849: Stack[-3] = (bool) 0
0x84a: Return(); Pop(0)

0x84b: Push((int) 0)
0x84c: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x84d: IF (Stack[-1] == 0) GOTO 0x852; Pop(1)

0x84e: Push((int) 8)
0x84f: @ SendWorldWndMessage(Stack[-1])
0x850: Pop(1)
0x851: GOTO 0x85b

0x852: Push((int) 0)
0x853: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x854: IF (Stack[-1] == 0) GOTO 0x859; Pop(1)

0x855: Push((int) 9)
0x856: @ SendWorldWndMessage(Stack[-1])
0x857: Pop(1)
0x858: GOTO 0x85b

0x859: Stack[-3] = (bool) 0
0x85a: Return(); Pop(0)

0x85b: PushEmpty(float)
0x85c: Stack[-1] = Stack[-2]
0x85d: Call2 0x87d

0x85e: Pop(1)
0x85f: PushEmpty(bool, object, string, float, float, float)
0x860: Stack[-5] = Stack[-8]
0x861: Stack[-4] = "reputation"
0x862: Stack[-3] = Stack[-7]
0x863: Stack[-2] = (int) 0
0x864: Stack[-1] = (int) 1
0x865: Call2 0x6db

0x866: Pop(6)
0x867: Stack[-3] = (bool) 1
0x868: Return(); Pop(0)

0x869: PushEmpty(object, object)
0x86a: @ CreateFloatVector(Stack[-1])
0x86b: Pop(0)
0x86c: @@ add(Stack[-3])
0x86d: Pop(0)
0x86e: Push((int) 14)
0x86f: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x870: Pop(1)
0x871: Return(); Pop(2)

0x872: Stack[-1] = 0
0x873: PushEmpty(object, object)
0x874: @ CreateFloatVector(Stack[-1])
0x875: Pop(0)
0x876: @@ add(Stack[-3])
0x877: Pop(0)
0x878: Push((int) 15)
0x879: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x87a: Pop(1)
0x87b: Return(); Pop(2)

0x87c: Stack[-1] = 0
0x87d: PushEmpty(object, object)
0x87e: @ CreateFloatVector(Stack[-1])
0x87f: Pop(0)
0x880: @@ add(Stack[-3])
0x881: Pop(0)
0x882: Push((int) 16)
0x883: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x884: Pop(1)
0x885: Return(); Pop(2)

0x886: Stack[-1] = 0
0x887: PushEmpty(float, float)
0x888: @ GetGameTime(Stack[-1])
0x889: Pop(0)
0x88a: Push((int) 1)
0x88b: PushEmpty(int)
0x88c: Push((int) 24)
0x88d: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x88e: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x88f: Return(); Pop(2)

0x890: PushEmpty(int, int)
0x891: Push("branch")
0x892: @ GetVariable(Stack[-1], Stack[-2])
0x893: Pop(1)
0x894: Stack[-3] = Stack[-1]
0x895: Return(); Pop(2)

0x896: PushEmpty()
0x897: PushEmpty(int)
0x898: Call2 0x890

0x899: Pop(0)
0x89a: Push((int) 1)
0x89b: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x89c: IF (Stack[-1] == 0) GOTO 0x8a0; Pop(1)

0x89d: @ WorkWithCorpse(Stack[-1])
0x89e: Pop(0)
0x89f: GOTO 0x8a2

0x8a0: @ Barter(Stack[-1])
0x8a1: Pop(0)
0x8a2: Return(); Pop(0)

0x8a3: PushEmpty(int, bool, int, bool)
0x8a4: Pop(0); Push((bool) Stack[-6] > Stack[-5])
0x8a5: IF (Stack[-1] == 0) GOTO 0x8aa; Pop(1)

0x8a6: Push("GenerateMoney: iMin > iMax")
0x8a7: @ Trace(Stack[-1])
0x8a8: Pop(1)
0x8a9: Return(); Pop(4)

0x8aa: Stack[-2] = (int) 0
0x8ab: Pop(0); Push((bool) Stack[-6] != Stack[-5])
0x8ac: IF (Stack[-1] == 0) GOTO 0x8b1; Pop(1)

0x8ad: Pop(0); Push(Stack[-5] - Stack[-6]);
0x8ae: @ irand(Stack[-3], Stack[-1])
0x8af: Pop(1)
0x8b0: GOTO 0x8b5

0x8b1: Push((int) 0)
0x8b2: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x8b3: IF (Stack[-1] == 0) GOTO 0x8b5; Pop(1)

0x8b4: Return(); Pop(4)

0x8b5: Stack[-2] = Stack[-2] + Stack[-6]; Pop(0);
0x8b6: Push((int) 0)
0x8b7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8b8: IF (Stack[-1] == 0) GOTO 0x8ba; Pop(1)

0x8b9: Return(); Pop(4)

0x8ba: PushEmpty(int, string)
0x8bb: Stack[-1] = "Money"
0x8bc: Call2 0x99a

0x8bd: Pop(1)
0x8be: Push((int) 0)
0x8bf: @ AddItem(Stack[-3], Stack[-2], Stack[-1], Stack[-4])
0x8c0: Pop(2)
0x8c1: Return(); Pop(4)

0x8c2: PushEmpty(object, int, bool, object, int, bool)
0x8c3: @ CreateInvItem(Stack[-3])
0x8c4: Pop(0)
0x8c5: @@ SetItemName(Stack[-7])
0x8c6: Pop(0)
0x8c7: Push("Organ")
0x8c8: Push((int) 1)
0x8c9: @@ SetProperty(Stack[-2], Stack[-1])
0x8ca: Pop(2)
0x8cb: @@ GetItemID(Stack[-2])
0x8cc: Pop(0)
0x8cd: Push((int) 0)
0x8ce: Push((int) 1)
0x8cf: @ AddItem(Stack[-3], Stack[-5], Stack[-2], Stack[-1])
0x8d0: Pop(2)
0x8d1: Return(); Pop(6)

0x8d2: Stack[-3] = 0
0x8d3: PushEmpty(int)
0x8d4: Call2 0x890

0x8d5: Pop(0)
0x8d6: Push((int) 1)
0x8d7: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x8d8: IF (Stack[-1] == 0) GOTO 0x8da; Pop(1)

0x8d9: Return(); Pop(0)

0x8da: PushEmpty(string)
0x8db: Stack[-1] = "diseased_liver"
0x8dc: Call2 0x8c2

0x8dd: Pop(1)
0x8de: PushEmpty(string)
0x8df: Stack[-1] = "diseased_kidney"
0x8e0: Call2 0x8c2

0x8e1: Pop(1)
0x8e2: PushEmpty(string)
0x8e3: Stack[-1] = "diseased_heart"
0x8e4: Call2 0x8c2

0x8e5: Pop(1)
0x8e6: PushEmpty(string)
0x8e7: Stack[-1] = "diseased_blood"
0x8e8: Call2 0x8c2

0x8e9: Pop(1)
0x8ea: Return(); Pop(0)

0x8eb: PushEmpty(int, bool, int, bool)
0x8ec: Push(Stack[-5])
0x8ed: IF (Stack[-1] == 0) GOTO 0x944; Pop(1)

0x8ee: PushEmpty(int, int)
0x8ef: Stack[-2] = (int) 0
0x8f0: Push((int) 100)
0x8f1: PushEmpty(int)
0x8f2: Call2 0x887

0x8f3: Pop(0)
0x8f4: Push((int) 100)
0x8f5: Pop(2); Push(Stack[-2] * Stack[-1]);
0x8f6: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x8f7: Call2 0x8a3

0x8f8: Pop(2)
0x8f9: Push((int) 8)
0x8fa: @ irand(Stack[-3], Stack[-1])
0x8fb: Pop(1)
0x8fc: Push((int) 0)
0x8fd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8fe: IF (Stack[-1] == 0) GOTO 0x908; Pop(1)

0x8ff: PushEmpty(int, string)
0x900: Stack[-1] = "lemon"
0x901: Call2 0x99a

0x902: Pop(1)
0x903: Push((int) 0)
0x904: Push((int) 1)
0x905: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x906: Pop(3)
0x907: GOTO 0x943

0x908: Push((int) 1)
0x909: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x90a: IF (Stack[-1] == 0) GOTO 0x914; Pop(1)

0x90b: PushEmpty(int, string)
0x90c: Stack[-1] = "rusk"
0x90d: Call2 0x99a

0x90e: Pop(1)
0x90f: Push((int) 0)
0x910: Push((int) 1)
0x911: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x912: Pop(3)
0x913: GOTO 0x943

0x914: Push((int) 2)
0x915: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x916: IF (Stack[-1] == 0) GOTO 0x920; Pop(1)

0x917: PushEmpty(int, string)
0x918: Stack[-1] = "hook"
0x919: Call2 0x99a

0x91a: Pop(1)
0x91b: Push((int) 0)
0x91c: Push((int) 1)
0x91d: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x91e: Pop(3)
0x91f: GOTO 0x943

0x920: Push((int) 4)
0x921: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x922: IF (Stack[-1] == 0) GOTO 0x92c; Pop(1)

0x923: PushEmpty(int, string)
0x924: Stack[-1] = "syringe"
0x925: Call2 0x99a

0x926: Pop(1)
0x927: Push((int) 0)
0x928: Push((int) 1)
0x929: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x92a: Pop(3)
0x92b: GOTO 0x943

0x92c: Push((int) 5)
0x92d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x92e: IF (Stack[-1] == 0) GOTO 0x938; Pop(1)

0x92f: PushEmpty(int, string)
0x930: Stack[-1] = "watch"
0x931: Call2 0x99a

0x932: Pop(1)
0x933: Push((int) 0)
0x934: Push((int) 1)
0x935: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x936: Pop(3)
0x937: GOTO 0x943

0x938: Push((int) 6)
0x939: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x93a: IF (Stack[-1] == 0) GOTO 0x943; Pop(1)

0x93b: PushEmpty(int, string)
0x93c: Stack[-1] = "razor"
0x93d: Call2 0x99a

0x93e: Pop(1)
0x93f: Push((int) 0)
0x940: Push((int) 1)
0x941: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x942: Pop(3)
0x943: GOTO 0x999

0x944: PushEmpty(int, int)
0x945: Stack[-2] = (int) 0
0x946: Push((int) 50)
0x947: PushEmpty(int)
0x948: Call2 0x887

0x949: Pop(0)
0x94a: Push((int) 50)
0x94b: Pop(2); Push(Stack[-2] * Stack[-1]);
0x94c: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x94d: Call2 0x8a3

0x94e: Pop(2)
0x94f: Push((int) 7)
0x950: @ irand(Stack[-3], Stack[-1])
0x951: Pop(1)
0x952: Push((int) 0)
0x953: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x954: IF (Stack[-1] == 0) GOTO 0x95e; Pop(1)

0x955: PushEmpty(int, string)
0x956: Stack[-1] = "beads"
0x957: Call2 0x99a

0x958: Pop(1)
0x959: Push((int) 0)
0x95a: Push((int) 1)
0x95b: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x95c: Pop(3)
0x95d: GOTO 0x999

0x95e: Push((int) 1)
0x95f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x960: IF (Stack[-1] == 0) GOTO 0x96a; Pop(1)

0x961: PushEmpty(int, string)
0x962: Stack[-1] = "bracelet"
0x963: Call2 0x99a

0x964: Pop(1)
0x965: Push((int) 0)
0x966: Push((int) 1)
0x967: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x968: Pop(3)
0x969: GOTO 0x999

0x96a: Push((int) 2)
0x96b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x96c: IF (Stack[-1] == 0) GOTO 0x976; Pop(1)

0x96d: PushEmpty(int, string)
0x96e: Stack[-1] = "ear_ring"
0x96f: Call2 0x99a

0x970: Pop(1)
0x971: Push((int) 0)
0x972: Push((int) 1)
0x973: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x974: Pop(3)
0x975: GOTO 0x999

0x976: Push((int) 3)
0x977: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x978: IF (Stack[-1] == 0) GOTO 0x982; Pop(1)

0x979: PushEmpty(int, string)
0x97a: Stack[-1] = "gold_ring"
0x97b: Call2 0x99a

0x97c: Pop(1)
0x97d: Push((int) 0)
0x97e: Push((int) 1)
0x97f: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x980: Pop(3)
0x981: GOTO 0x999

0x982: Push((int) 4)
0x983: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x984: IF (Stack[-1] == 0) GOTO 0x98e; Pop(1)

0x985: PushEmpty(int, string)
0x986: Stack[-1] = "silver_ring"
0x987: Call2 0x99a

0x988: Pop(1)
0x989: Push((int) 0)
0x98a: Push((int) 1)
0x98b: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x98c: Pop(3)
0x98d: GOTO 0x999

0x98e: Push((int) 5)
0x98f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x990: IF (Stack[-1] == 0) GOTO 0x999; Pop(1)

0x991: PushEmpty(int, string)
0x992: Stack[-1] = "flower"
0x993: Call2 0x99a

0x994: Pop(1)
0x995: Push((int) 0)
0x996: Push((int) 1)
0x997: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x998: Pop(3)
0x999: Return(); Pop(4)

0x99a: PushEmpty(int, int)
0x99b: @ GetInvItemByName(Stack[-1], Stack[-3])
0x99c: Pop(0)
0x99d: Stack[-4] = Stack[-1]
0x99e: Return(); Pop(2)

0x99f: PushEmpty()
0x9a0: PushEmpty(object)
0x9a1: Stack[-1] = Stack[-2]
0x9a2: Push(-1, 0); TaskCall(0)
0x9a3: Call2 0x0

0x9a4: Pop(-1, 0); TaskReturn
0x9a5: Pop(1)
0x9a6: Return(); Pop(0)

0x9a7: PushEmpty(float, float)
0x9a8: Push("health")
0x9a9: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x9aa: IF (Stack[-1] == 0) GOTO 0x9b3; Pop(1)

0x9ab: Push("health")
0x9ac: @ GetProperty(Stack[-1], Stack[-2])
0x9ad: Pop(1)
0x9ae: Push((int) 0)
0x9af: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x9b0: IF (Stack[-1] == 0) GOTO 0x9b3; Pop(1)

0x9b1: @ SignalDeath(Stack[-4])
0x9b2: Pop(0)
0x9b3: Return(); Pop(2)

0x9b4: PushEmpty()
0x9b5: PushEmpty(object)
0x9b6: Stack[-1] = Stack[-2]
0x9b7: Call2 0x99f

0x9b8: Pop(1)
0x9b9: Return(); Pop(0)

0x9ba: PushEmpty()
0x9bb: PushEmpty(object, int, float)
0x9bc: Stack[-3] = Stack[-7]
0x9bd: Stack[-2] = Stack[-6]
0x9be: Stack[-1] = Stack[-5]
0x9bf: Call2 0x7a3

0x9c0: Pop(3)
0x9c1: Return(); Pop(0)

0x9c2: PushEmpty()
0x9c3: PushEmpty(object, int, float, cvector, cvector)
0x9c4: Stack[-5] = Stack[-11]
0x9c5: Stack[-4] = Stack[-10]
0x9c6: Stack[-3] = Stack[-9]
0x9c7: Stack[-2] = Stack[-7]
0x9c8: Stack[-1] = Stack[-6]
0x9c9: Call2 0x7e7

0x9ca: Pop(5)
0x9cb: Return(); Pop(0)

0x9cc: PushEmpty()
0x9cd: Push("unholster")
0x9ce: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x9cf: IF (Stack[-1] == 0) GOTO 0x9d7; Pop(1)

0x9d0: PushEmpty(bool, object)
0x9d1: Stack[-1] = Stack[-4]
0x9d2: Call2 0xa9c

0x9d3: Stack[-5] = Stack[-2]
0x9d4: Pop(2)
0x9d5: Return(); Pop(0)

0x9d6: GOTO 0x9ea

0x9d7: Push("player_shot")
0x9d8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x9d9: IF (Stack[-1] == 0) GOTO 0x9e1; Pop(1)

0x9da: PushEmpty(bool, object)
0x9db: Stack[-1] = Stack[-4]
0x9dc: Call2 0xaa1

0x9dd: Stack[-5] = Stack[-2]
0x9de: Pop(2)
0x9df: Return(); Pop(0)

0x9e0: GOTO 0x9ea

0x9e1: Push("battle")
0x9e2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x9e3: IF (Stack[-1] == 0) GOTO 0x9ea; Pop(1)

0x9e4: PushEmpty(bool, object)
0x9e5: Stack[-1] = Stack[-4]
0x9e6: Call2 0xaa6

0x9e7: Stack[-5] = Stack[-2]
0x9e8: Pop(2)
0x9e9: Return(); Pop(0)

0x9ea: Stack[-3] = (bool) 0
0x9eb: Return(); Pop(0)

0x9ec: PushEmpty()
0x9ed: Push("unholster")
0x9ee: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x9ef: IF (Stack[-1] == 0) GOTO 0x9f5; Pop(1)

0x9f0: PushEmpty(object)
0x9f1: Stack[-1] = Stack[-3]
0x9f2: Call2 0xa9f

0x9f3: Pop(1)
0x9f4: GOTO 0xa04

0x9f5: Push("player_shot")
0x9f6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x9f7: IF (Stack[-1] == 0) GOTO 0x9fd; Pop(1)

0x9f8: PushEmpty(object)
0x9f9: Stack[-1] = Stack[-3]
0x9fa: Call2 0xaa4

0x9fb: Pop(1)
0x9fc: GOTO 0xa04

0x9fd: Push("battle")
0x9fe: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x9ff: IF (Stack[-1] == 0) GOTO 0xa04; Pop(1)

0xa00: PushEmpty(object)
0xa01: Stack[-1] = Stack[-3]
0xa02: Call2 0xaa9

0xa03: Pop(1)
0xa04: Return(); Pop(0)

0xa05: PushEmpty(bool, bool)
0xa06: PushEmpty(bool)
0xa07: Stack[-1] = (bool) 0
0xa08: PushEmpty(bool, object)
0xa09: Stack[-1] = Stack[-6]
0xa0a: Call2 0xa9c

0xa0b: Pop(1)
0xa0c: IF (Stack[-1] == 0) GOTO 0xa13; Pop(1)

0xa0d: PushEmpty(bool, object)
0xa0e: Stack[-1] = Stack[-6]
0xa0f: Call2 0x6ca

0xa10: Pop(1)
0xa11: IF (Stack[-1] == 0) GOTO 0xa13; Pop(1)

0xa12: Stack[-1] = (bool) 1
0xa13: IF (Stack[-1] == 0) GOTO 0xa1a; Pop(1)

0xa14: @@ IsWeaponHolstered(Stack[-1])
0xa15: Pop(0)
0xa16: Pop(0); Push((bool) Stack[-1] == 0)
0xa17: IF (Stack[-1] == 0) GOTO 0xa1a; Pop(1)

0xa18: Stack[-4] = (bool) 1
0xa19: Return(); Pop(2)

0xa1a: Stack[-4] = (bool) 0
0xa1b: Return(); Pop(2)

0xa1c: PushEmpty()
0xa1d: PushEmpty(object)
0xa1e: Stack[-1] = Stack[-2]
0xa1f: Call2 0xa9f

0xa20: Pop(1)
0xa21: Return(); Pop(0)

0xa22: PushEmpty()
0xa23: PushEmpty(bool, object)
0xa24: Stack[-1] = Stack[-3]
0xa25: Call2 0x6ca

0xa26: Pop(1)
0xa27: IF (Stack[-1] == 0) GOTO 0xa2e; Pop(1)

0xa28: PushEmpty(object)
0xa29: Call2 0x823

0xa2a: Pop(0)
0xa2b: Push((float)-0.03)
0xa2c: @ ReportReputationChange(Stack[-3], Stack[-2], Stack[-1])
0xa2d: Pop(2)
0xa2e: Return(); Pop(0)

0xa2f: PushEmpty(object, object)
0xa30: Push("heal")
0xa31: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xa32: IF (Stack[-1] == 0) GOTO 0xa3d; Pop(1)

0xa33: Push("player")
0xa34: @ FindActor(Stack[-2], Stack[-1])
0xa35: Pop(1)
0xa36: PushEmpty(bool, object)
0xa37: Stack[-1] = Stack[-3]
0xa38: Call2 0xaab

0xa39: Stack[-6] = Stack[-2]
0xa3a: Pop(2)
0xa3b: Return(); Pop(2)

0xa3c: Stack[-1] = 0
0xa3d: Stack[-4] = (bool) 0
0xa3e: Return(); Pop(2)

0xa3f: PushEmpty(object, object)
0xa40: Push("heal")
0xa41: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xa42: IF (Stack[-1] == 0) GOTO 0xa4b; Pop(1)

0xa43: Push("player")
0xa44: @ FindActor(Stack[-2], Stack[-1])
0xa45: Pop(1)
0xa46: PushEmpty(object)
0xa47: Stack[-1] = Stack[-2]
0xa48: Call2 0xab2

0xa49: Pop(1)
0xa4a: Stack[-1] = 0
0xa4b: Return(); Pop(2)

0xa4c: PushEmpty(string, string)
0xa4d: Stack[-1] = "idle"
0xa4e: Push(Stack[-3])
0xa4f: IF (Stack[-1] == 0) GOTO 0xa51; Pop(1)

0xa50: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0xa51: Stack[-4] = Stack[-1]
0xa52: Return(); Pop(2)

0xa53: PushEmpty(int, bool, int, bool)
0xa54: Stack[-2] = (int) 0
0xa55: Push("all")
0xa56: PushEmpty(string, int)
0xa57: Stack[-1] = Stack[-5]
0xa58: Call2 0xa4c

0xa59: Pop(1)
0xa5a: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0xa5b: Pop(2)
0xa5c: Pop(0); Push((bool) Stack[-1] == 0)
0xa5d: IF (Stack[-1] == 0) GOTO 0xa5f; Pop(1)

0xa5e: GOTO 0xa62

0xa5f: Push((int) 1)
0xa60: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0xa61: GOTO 0xa55

0xa62: Stack[-5] = Stack[-2]
0xa63: Return(); Pop(4)

0xa64: PushEmpty()
0xa65: Stack[-2] = (int) 2
0xa66: Return(); Pop(0)

0xa67: PushEmpty()
0xa68: PushEmpty(object)
0xa69: Stack[-1] = Stack[-2]
0xa6a: Push(-1, 0); TaskCall(3)
0xa6b: Call2 0x307

0xa6c: Pop(-1, 0); TaskReturn
0xa6d: Pop(1)
0xa6e: Return(); Pop(0)

0xa6f: PushEmpty()
0xa70: PushEmpty(bool, object)
0xa71: Stack[-1] = Stack[-4]
0xa72: Call2 0x75f

0xa73: Pop(1)
0xa74: IF (Stack[-1] == 0) GOTO 0xa77; Pop(1)

0xa75: Stack[-3] = (int) 2
0xa76: GOTO 0xa78

0xa77: Stack[-3] = (int) 0
0xa78: Return(); Pop(0)

0xa79: PushEmpty()
0xa7a: PushEmpty(object)
0xa7b: Stack[-1] = Stack[-2]
0xa7c: Push(-1, 3); TaskCall(5)
0xa7d: Call2 0x46b

0xa7e: Pop(-1, 3); TaskReturn
0xa7f: Pop(1)
0xa80: Return(); Pop(0)

0xa81: PushEmpty()
0xa82: Stack[-2] = (int) 0
0xa83: Return(); Pop(0)

0xa84: PushEmpty()
0xa85: Return(); Pop(0)

0xa86: PushEmpty()
0xa87: Stack[-3] = (int) 0
0xa88: Return(); Pop(0)

0xa89: PushEmpty()
0xa8a: Return(); Pop(0)

0xa8b: PushEmpty()
0xa8c: Stack[-2] = (int) 2
0xa8d: Return(); Pop(0)

0xa8e: PushEmpty()
0xa8f: PushEmpty(object)
0xa90: Stack[-1] = Stack[-2]
0xa91: Call2 0xabe

0xa92: Pop(1)
0xa93: Return(); Pop(0)

0xa94: PushEmpty(object)
0xa95: Call2 0x823

0xa96: Pop(0)
0xa97: @ RemoveActor(Stack[-1])
0xa98: Pop(1)
0xa99: @ Hold()
0xa9a: Pop(0)
0xa9b: Return(); Pop(0)

0xa9c: PushEmpty()
0xa9d: Stack[-2] = (bool) 0
0xa9e: Return(); Pop(0)

0xa9f: PushEmpty()
0xaa0: Return(); Pop(0)

0xaa1: PushEmpty()
0xaa2: Stack[-2] = (bool) 0
0xaa3: Return(); Pop(0)

0xaa4: PushEmpty()
0xaa5: Return(); Pop(0)

0xaa6: PushEmpty()
0xaa7: Stack[-2] = (bool) 0
0xaa8: Return(); Pop(0)

0xaa9: PushEmpty()
0xaaa: Return(); Pop(0)

0xaab: PushEmpty()
0xaac: PushEmpty(bool, object)
0xaad: Stack[-1] = Stack[-3]
0xaae: Call2 0x75f

0xaaf: Stack[-4] = Stack[-2]
0xab0: Pop(2)
0xab1: Return(); Pop(0)

0xab2: PushEmpty()
0xab3: PushEmpty(object)
0xab4: Stack[-1] = Stack[-2]
0xab5: Push(-1, 3); TaskCall(6)
0xab6: Call2 0x508

0xab7: Pop(-1, 3); TaskReturn
0xab8: Pop(1)
0xab9: Return(); Pop(0)

0xaba: Push(GlobalVars[0])
0xabb: Stack[-1] = (bool) 0
0xabc: GlobalVars[0] = Stack[-1]; Pop(1)
0xabd: Return(); Pop(0)

0xabe: PushEmpty(bool, bool)
0xabf: Push(GlobalVars[0])
0xac0: IF (Stack[-1] == 0) GOTO 0xaca; Pop(1)

0xac1: @ IsOverrideActive(Stack[-1])
0xac2: Pop(0)
0xac3: Pop(0); Push((bool) Stack[-1] == 0)
0xac4: IF (Stack[-1] == 0) GOTO 0xac9; Pop(1)

0xac5: PushEmpty(object)
0xac6: Stack[-1] = Stack[-4]
0xac7: Call2 0x896

0xac8: Pop(1)
0xac9: Return(); Pop(2)

0xaca: Return(); Pop(2)

0xacb: PushEmpty(bool, bool)
0xacc: @ IsPlayerActor(Stack[-3], Stack[-1])
0xacd: Pop(0)
0xace: Stack[-4] = Stack[-1]
0xacf: Return(); Pop(2)

0xad0: PushEmpty()
0xad1: Stack[-2] = (int) 0
0xad2: Return(); Pop(0)

0xad3: PushEmpty()
0xad4: Return(); Pop(0)

0xad5: PushEmpty()
0xad6: Stack[-4] = (bool) 0
0xad7: Return(); Pop(0)

0xad8: PushEmpty()
0xad9: PushEmpty(bool, object)
0xada: Stack[-1] = Stack[-3]
0xadb: Call2 0x6ca

0xadc: Pop(1)
0xadd: IF (Stack[-1] == 0) GOTO 0xae8; Pop(1)

0xade: PushEmpty(object)
0xadf: Call2 0x823

0xae0: Pop(0)
0xae1: Push((float)-0.05)
0xae2: @ ReportReputationChange(Stack[-3], Stack[-2], Stack[-1])
0xae3: Pop(2)
0xae4: PushEmpty(bool)
0xae5: Stack[-1] = (bool) 1
0xae6: Call2 0x8eb

0xae7: Pop(1)
0xae8: PushEmpty()
0xae9: Call2 0x8d3

0xaea: Pop(0)
0xaeb: Push(GlobalVars[0])
0xaec: Stack[-1] = (bool) 1
0xaed: GlobalVars[0] = Stack[-1]; Pop(1)
0xaee: Push((int) 50)
0xaef: Push((int) 40)
0xaf0: @ SetRTEnvelope(Stack[-2], Stack[-1])
0xaf1: Pop(2)
0xaf2: Return(); Pop(0)

0xaf3: PushEmpty()
0xaf4: PushEmpty(bool, object)
0xaf5: Stack[-1] = Stack[-3]
0xaf6: Call2 0x75f

0xaf7: Pop(1)
0xaf8: IF (Stack[-1] == 0) GOTO 0xafb; Pop(1)

0xaf9: Stack[-2] = (int) 2
0xafa: GOTO 0xafc

0xafb: Stack[-2] = (int) 0
0xafc: Return(); Pop(0)

0xafd: PushEmpty()
0xafe: PushEmpty(object)
0xaff: Stack[-1] = Stack[-2]
0xb00: Push(-1, 3); TaskCall(7)
0xb01: Call2 0x619

0xb02: Pop(-1, 3); TaskReturn
0xb03: Pop(1)
0xb04: Return(); Pop(0)

