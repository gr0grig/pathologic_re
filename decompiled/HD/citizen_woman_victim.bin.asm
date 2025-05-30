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
	killme

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
	GetActiveScene (1 args)
	BroadcastMessage (3 args)
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
		EVENT_6 Op = 0x436 Vars = ()
		EVENT_7 Op = 0x4a4 Vars = (int)
		EVENT_41 Op = 0x4df Vars = (object)
	GTASK_5 Vars = (object, cvector, bool) Params = 1
		EVENT_7 Op = 0x55f Vars = (int)
		EVENT_41 Op = 0x59a Vars = (object)
	GTASK_6 Vars = (object, cvector, bool) Params = 1
		EVENT_6 Op = 0x5b3 Vars = ()
		EVENT_7 Op = 0x621 Vars = (int)
		EVENT_41 Op = 0x65c Vars = (object)

Events:
EVENT_16 Op = 0x907 Vars = (object, string)
EVENT_41 Op = 0x914 Vars = (object)
EVENT_22 Op = 0x91a Vars = (object, int, float, float)
EVENT_43 Op = 0x922 Vars = (object, int, float, float, cvector, cvector)

0x0: PushEmpty()
0x1: EventDisable(0)
0x2: PushEmpty(object)
0x3: Stack[-1] = Stack[-2]
0x4: Call2 0x21

0x5: Pop(1)
0x6: PushEmpty(object)
0x7: Stack[-1] = Stack[-2]
0x8: Call2 0xab3

0x9: Pop(1)
0xa: EventEnable(0)
0xb: @ Hold()
0xc: Pop(0)
0xd: GOTO 0xb

0xe: Return(); Pop(0)

0xf: PushEmpty(int, int)
0x10: PushEmpty(int, object)
0x11: Stack[-1] = Stack[-5]
0x12: Call2 0xa45

0x13: Stack[-3] = Stack[-2]
0x14: Pop(2)
0x15: Push((int) 0)
0x16: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x17: IF (Stack[-1] == 0) GOTO 0x1c; Pop(1)

0x18: PushEmpty(object)
0x19: Stack[-1] = Stack[-4]
0x1a: Call2 0xa48

0x1b: Pop(1)
0x1c: Return(); Pop(2)

0x1d: PushEmpty()
0x1e: Call2 0xa4e

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
0x67: Call2 0x774

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
0x89: Call2 0x774

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
0xa0: Call2 0xa88

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
0xac: Call2 0x764

0xad: Pop(0)
0xae: Pop(1); Push((bool) Stack[-1] == 0)
0xaf: IF (Stack[-1] == 0) GOTO 0xb3; Pop(1)

0xb0: PushEmpty()
0xb1: Call2 0xa4e

0xb2: Pop(0)
0xb3: Return(); Pop(0)

0xb4: PushEmpty(int, int)
0xb5: PushEmpty(int, object)
0xb6: Stack[-1] = Stack[-5]
0xb7: Call2 0xa45

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
0xc5: Call2 0xa48

0xc6: Pop(1)
0xc7: Return(); Pop(2)

0xc8: PushEmpty(int, int)
0xc9: PushEmpty(object)
0xca: Stack[-1] = Stack[-4]
0xcb: Call2 0x982

0xcc: Pop(1)
0xcd: PushEmpty(int, object)
0xce: Stack[-1] = Stack[-5]
0xcf: Call2 0x9d5

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
0xdd: Call2 0x9df

0xde: Pop(1)
0xdf: Return(); Pop(2)

0xe0: PushEmpty(int, int)
0xe1: PushEmpty(bool, object, object, bool)
0xe2: Stack[-3] = Stack[-9]
0xe3: Stack[-2] = Stack[-8]
0xe4: Stack[-1] = Stack[-7]
0xe5: Call2 0xaaa

0xe6: Pop(3)
0xe7: IF (Stack[-1] == 0) GOTO 0xfb; Pop(1)

0xe8: PushEmpty(int, object, bool)
0xe9: Stack[-2] = Stack[-8]
0xea: Stack[-1] = Stack[-6]
0xeb: Call2 0x9e7

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
0xf9: Call2 0x9f1

0xfa: Pop(1)
0xfb: Return(); Pop(2)

0xfc: PushEmpty(int, int)
0xfd: PushEmpty(int, object)
0xfe: Stack[-1] = Stack[-5]
0xff: Call2 0xa3b

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
0x10d: Call2 0xa3e

0x10e: Pop(1)
0x10f: Return(); Pop(2)

0x110: PushEmpty(int, int)
0x111: PushEmpty(bool, object, string)
0x112: Stack[-2] = Stack[-7]
0x113: Stack[-1] = Stack[-6]
0x114: Call2 0x92c

0x115: Pop(2)
0x116: IF (Stack[-1] == 0) GOTO 0x120; Pop(1)

0x117: PushEmpty()
0x118: Call2 0x16f

0x119: Pop(0)
0x11a: PushEmpty(object, string)
0x11b: Stack[-2] = Stack[-6]
0x11c: Stack[-1] = Stack[-5]
0x11d: Call2 0x94c

0x11e: Pop(2)
0x11f: GOTO 0x134

0x120: PushEmpty(int, string, object)
0x121: Stack[-2] = Stack[-6]
0x122: Stack[-1] = Stack[-7]
0x123: Call2 0xa40

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
0x132: Call2 0xa43

0x133: Pop(2)
0x134: Return(); Pop(2)

0x135: PushEmpty()
0x136: PushEmpty(bool, string)
0x137: Stack[-1] = Stack[-3]
0x138: Call2 0x98f

0x139: Pop(1)
0x13a: IF (Stack[-1] == 0) GOTO 0x142; Pop(1)

0x13b: PushEmpty()
0x13c: Call2 0x16f

0x13d: Pop(0)
0x13e: PushEmpty(string)
0x13f: Stack[-1] = Stack[-2]
0x140: Call2 0x99f

0x141: Pop(1)
0x142: Return(); Pop(0)

0x143: PushEmpty()
0x144: PushEmpty(bool, object)
0x145: Stack[-1] = Stack[-3]
0x146: Call2 0x965

0x147: Pop(1)
0x148: IF (Stack[-1] == 0) GOTO 0x151; Pop(1)

0x149: PushEmpty()
0x14a: Call2 0x16f

0x14b: Pop(0)
0x14c: PushEmpty(object)
0x14d: Stack[-1] = Stack[-2]
0x14e: Call2 0x97c

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
0x16c: Call2 0xa4e

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
0x185: Call2 0x914

0x186: Pop(1)
0x187: Return(); Pop(0)

0x188: PushEmpty(bool, int, bool, int)
0x189: PushEmpty(bool, object)
0x18a: Stack[-1] = Stack[-7]
0x18b: Call2 0x6c3

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
0x19a: Call2 0x9c4

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
0x1a8: Call2 0x9cd

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
0x210: Call2 0xa45

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
0x21e: Call2 0xa48

0x21f: Pop(1)
0x220: Return(); Pop(2)

0x221: PushEmpty(int, int)
0x222: PushEmpty(object)
0x223: Stack[-1] = Stack[-4]
0x224: Call2 0x982

0x225: Pop(1)
0x226: PushEmpty(int, object)
0x227: Stack[-1] = Stack[-5]
0x228: Call2 0x9d5

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
0x236: Call2 0x9df

0x237: Pop(1)
0x238: Return(); Pop(2)

0x239: PushEmpty(int, int)
0x23a: PushEmpty(bool, object, object, bool)
0x23b: Stack[-3] = Stack[-9]
0x23c: Stack[-2] = Stack[-8]
0x23d: Stack[-1] = Stack[-7]
0x23e: Call2 0xaaa

0x23f: Pop(3)
0x240: IF (Stack[-1] == 0) GOTO 0x254; Pop(1)

0x241: PushEmpty(int, object, bool)
0x242: Stack[-2] = Stack[-8]
0x243: Stack[-1] = Stack[-6]
0x244: Call2 0x9e7

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
0x252: Call2 0x9f1

0x253: Pop(1)
0x254: Return(); Pop(2)

0x255: PushEmpty(int, int)
0x256: PushEmpty(int, object)
0x257: Stack[-1] = Stack[-5]
0x258: Call2 0xa3b

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
0x266: Call2 0xa3e

0x267: Pop(1)
0x268: Return(); Pop(2)

0x269: PushEmpty(int, int)
0x26a: PushEmpty(bool, object, string)
0x26b: Stack[-2] = Stack[-7]
0x26c: Stack[-1] = Stack[-6]
0x26d: Call2 0x92c

0x26e: Pop(2)
0x26f: IF (Stack[-1] == 0) GOTO 0x279; Pop(1)

0x270: PushEmpty()
0x271: Call2 0x302

0x272: Pop(0)
0x273: PushEmpty(object, string)
0x274: Stack[-2] = Stack[-6]
0x275: Stack[-1] = Stack[-5]
0x276: Call2 0x94c

0x277: Pop(2)
0x278: GOTO 0x28d

0x279: PushEmpty(int, string, object)
0x27a: Stack[-2] = Stack[-6]
0x27b: Stack[-1] = Stack[-7]
0x27c: Call2 0xa40

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
0x28b: Call2 0xa43

0x28c: Pop(2)
0x28d: Return(); Pop(2)

0x28e: PushEmpty()
0x28f: PushEmpty(bool, string)
0x290: Stack[-1] = Stack[-3]
0x291: Call2 0x98f

0x292: Pop(1)
0x293: IF (Stack[-1] == 0) GOTO 0x29b; Pop(1)

0x294: PushEmpty()
0x295: Call2 0x302

0x296: Pop(0)
0x297: PushEmpty(string)
0x298: Stack[-1] = Stack[-2]
0x299: Call2 0x99f

0x29a: Pop(1)
0x29b: Return(); Pop(0)

0x29c: PushEmpty()
0x29d: Call2 0x302

0x29e: Pop(0)
0x29f: PushEmpty()
0x2a0: Call2 0xa4e

0x2a1: Pop(0)
0x2a2: Return(); Pop(0)

0x2a3: PushEmpty()
0x2a4: PushEmpty(bool, object)
0x2a5: Stack[-1] = Stack[-3]
0x2a6: Call2 0x965

0x2a7: Pop(1)
0x2a8: IF (Stack[-1] == 0) GOTO 0x2b0; Pop(1)

0x2a9: PushEmpty()
0x2aa: Call2 0x302

0x2ab: Pop(0)
0x2ac: PushEmpty(object)
0x2ad: Stack[-1] = Stack[-2]
0x2ae: Call2 0x97c

0x2af: Pop(1)
0x2b0: Return(); Pop(0)

0x2b1: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x2b2: @ WaitForAnimEnd()
0x2b3: Pop(0)
0x2b4: PushEmpty(bool)
0x2b5: Call2 0x764

0x2b6: Pop(0)
0x2b7: Pop(1); Push((bool) Stack[-1] == 0)
0x2b8: IF (Stack[-1] == 0) GOTO 0x2ba; Pop(1)

0x2b9: Return(); Pop(14)

0x2ba: PushEmpty(int)
0x2bb: Call2 0x9b3

0x2bc: Stack[-8] = Stack[-1]
0x2bd: Pop(1)
0x2be: Stack[-6] = (int) 0
0x2bf: PushEmpty(bool)
0x2c0: Stack[-1] = (bool) 0
0x2c1: Push((int) 5)
0x2c2: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x2c3: IF (Stack[-1] == 0) GOTO 0x2c9; Pop(1)

0x2c4: PushEmpty(bool)
0x2c5: Call2 0x764

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
0x2d7: Call2 0x9ac

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
0x310: Call2 0x67a

0x311: Stack[-4] = Stack[-2]
0x312: Pop(2)
0x313: PushEmpty(float, cvector, cvector)
0x314: Stack[-2] = Stack[-6]
0x315: Stack[-1] = Stack[-5]
0x316: Call2 0x7c8

0x317: Pop(2)
0x318: Push((int) 0)
0x319: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x31a: IF (Stack[-1] == 0) GOTO 0x321; Pop(1)

0x31b: PushEmpty(object)
0x31c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x31d: Call2 0x759

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
0x328: Call2 0x759

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
0x33c: Call2 0x769

0x33d: Pop(1)
0x33e: Return(); Pop(0)

0x33f: PushEmpty(int, int)
0x340: PushEmpty(int, object)
0x341: Stack[-1] = Stack[-5]
0x342: Call2 0xa45

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
0x350: Call2 0xa48

0x351: Pop(1)
0x352: Return(); Pop(2)

0x353: PushEmpty(int, int)
0x354: PushEmpty(object)
0x355: Stack[-1] = Stack[-4]
0x356: Call2 0x982

0x357: Pop(1)
0x358: PushEmpty(int, object)
0x359: Stack[-1] = Stack[-5]
0x35a: Call2 0x9d5

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
0x368: Call2 0x9df

0x369: Pop(1)
0x36a: Return(); Pop(2)

0x36b: PushEmpty(int, int)
0x36c: PushEmpty(bool, object, object, bool)
0x36d: Stack[-3] = Stack[-9]
0x36e: Stack[-2] = Stack[-8]
0x36f: Stack[-1] = Stack[-7]
0x370: Call2 0xaaa

0x371: Pop(3)
0x372: IF (Stack[-1] == 0) GOTO 0x386; Pop(1)

0x373: PushEmpty(int, object, bool)
0x374: Stack[-2] = Stack[-8]
0x375: Stack[-1] = Stack[-6]
0x376: Call2 0x9e7

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
0x384: Call2 0x9f1

0x385: Pop(1)
0x386: Return(); Pop(2)

0x387: PushEmpty(int, int)
0x388: PushEmpty(int, object)
0x389: Stack[-1] = Stack[-5]
0x38a: Call2 0xa3b

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
0x398: Call2 0xa3e

0x399: Pop(1)
0x39a: Return(); Pop(2)

0x39b: PushEmpty(int, int)
0x39c: PushEmpty(bool, object, string)
0x39d: Stack[-2] = Stack[-7]
0x39e: Stack[-1] = Stack[-6]
0x39f: Call2 0x92c

0x3a0: Pop(2)
0x3a1: IF (Stack[-1] == 0) GOTO 0x3ab; Pop(1)

0x3a2: PushEmpty()
0x3a3: Call2 0x3ce

0x3a4: Pop(0)
0x3a5: PushEmpty(object, string)
0x3a6: Stack[-2] = Stack[-6]
0x3a7: Stack[-1] = Stack[-5]
0x3a8: Call2 0x94c

0x3a9: Pop(2)
0x3aa: GOTO 0x3bf

0x3ab: PushEmpty(int, string, object)
0x3ac: Stack[-2] = Stack[-6]
0x3ad: Stack[-1] = Stack[-7]
0x3ae: Call2 0xa40

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
0x3bd: Call2 0xa43

0x3be: Pop(2)
0x3bf: Return(); Pop(2)

0x3c0: PushEmpty()
0x3c1: PushEmpty(bool, string)
0x3c2: Stack[-1] = Stack[-3]
0x3c3: Call2 0x98f

0x3c4: Pop(1)
0x3c5: IF (Stack[-1] == 0) GOTO 0x3cd; Pop(1)

0x3c6: PushEmpty()
0x3c7: Call2 0x3ce

0x3c8: Pop(0)
0x3c9: PushEmpty(string)
0x3ca: Stack[-1] = Stack[-2]
0x3cb: Call2 0x99f

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
0x3df: Call2 0x914

0x3e0: Pop(1)
0x3e1: Return(); Pop(0)

0x3e2: PushEmpty(cvector, cvector, cvector, cvector)
0x3e3: Push((int) 111)
0x3e4: Pop(1); Push((bool) Stack[-6] != Stack[-1])
0x3e5: IF (Stack[-1] == 0) GOTO 0x3e7; Pop(1)

0x3e6: Return(); Pop(4)

0x3e7: PushEmpty(bool, object)
0x3e8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3e9: Call2 0x6c3

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
0x3f5: Call2 0x67a

0x3f6: Stack[-3] = Stack[-2]
0x3f7: Pop(2)
0x3f8: PushEmpty(float, cvector, cvector)
0x3f9: Stack[-2] = Stack[-5]
0x3fa: Stack[-1] = Stack[-4]
0x3fb: Call2 0x7c8

0x3fc: Pop(2)
0x3fd: Push((float)0.5)
0x3fe: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x3ff: IF (Stack[-1] == 0) GOTO 0x404; Pop(1)

0x400: PushEmpty(object)
0x401: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x402: Call2 0x759

0x403: Pop(1)
0x404: Return(); Pop(4)

0x405: PushEmpty()
0x406: Call2 0x3ce

0x407: Pop(0)
0x408: PushEmpty()
0x409: Call2 0xa4e

0x40a: Pop(0)
0x40b: Return(); Pop(0)

0x40c: PushEmpty()
0x40d: PushEmpty(bool, object)
0x40e: Stack[-1] = Stack[-3]
0x40f: Call2 0x965

0x410: Pop(1)
0x411: IF (Stack[-1] == 0) GOTO 0x419; Pop(1)

0x412: PushEmpty()
0x413: Call2 0x3ce

0x414: Pop(0)
0x415: PushEmpty(object)
0x416: Stack[-1] = Stack[-2]
0x417: Call2 0x97c

0x418: Pop(1)
0x419: Return(); Pop(0)

0x41a: PushEmpty()
0x41b: @ Face(Stack[-1])
0x41c: Pop(0)
0x41d: Push("all")
0x41e: Push("attack_on")
0x41f: @ PlayAnimation(Stack[-2], Stack[-1])
0x420: Pop(2)
0x421: @ WaitForAnimEnd()
0x422: Pop(0)
0x423: Push("all")
0x424: Push("attack_stay")
0x425: @ PlayAnimation(Stack[-2], Stack[-1])
0x426: Pop(2)
0x427: @ WaitForAnimEnd()
0x428: Pop(0)
0x429: Push("all")
0x42a: Push("attack_off")
0x42b: @ PlayAnimation(Stack[-2], Stack[-1])
0x42c: Pop(2)
0x42d: @ WaitForAnimEnd()
0x42e: Pop(0)
0x42f: @ StopAsync()
0x430: Pop(0)
0x431: PushEmpty(object)
0x432: Stack[-1] = Stack[-2]
0x433: Call2 0x45b

0x434: Pop(1)
0x435: Return(); Pop(0)

0x436: PushEmpty()
0x437: Call2 0x4d8

0x438: Pop(0)
0x439: PushEmpty()
0x43a: Call2 0xa4e

0x43b: Pop(0)
0x43c: Return(); Pop(0)

0x43d: PushEmpty(cvector, cvector, cvector, cvector, cvector, float, cvector, cvector, cvector, cvector, cvector, float)
0x43e: @ GetPosition(Stack[-6])
0x43f: Pop(0)
0x440: @@ GetPosition(Stack[-5])
0x441: Pop(0)
0x442: @ GetDirection(Stack[-4])
0x443: Pop(0)
0x444: PushEmpty(cvector, cvector)
0x445: PushEmpty(cvector, cvector)
0x446: Stack[-1] = Stack[-10] - Stack[-9]; Pop(0);
0x447: Call2 0x7a3

0x448: Pop(1)
0x449: Push((float)0.75)
0x44a: Pop(1); Push(Stack[-8] * Stack[-1]);
0x44b: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x44c: Call2 0x7a3

0x44d: Stack[-5] = Stack[-2]
0x44e: Pop(2)
0x44f: Push((int) 32)
0x450: Push((float)7000.0)
0x451: @ FindLongestDir(Stack[-4], Stack[-3], Stack[-5], Stack[-15], Stack[-2], Stack[-1])
0x452: Pop(2)
0x453: Push((int) 100)
0x454: Stack[-2] = Stack[-2] - Stack[-1]; Pop(1);
0x455: Push((int) 0)
0x456: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x457: IF (Stack[-1] == 0) GOTO 0x459; Pop(1)

0x458: Stack[-1] = (int) 0
0x459: Stack[-14] = Stack[-2] * Stack[-1]; Pop(0);
0x45a: Return(); Pop(12)

0x45b: PushEmpty(cvector, float, bool, cvector, float, cvector, float, bool, cvector, float)
0x45c: Stack[0 + Tasks[-1].StackPointer] = Stack[-11]
0x45d: PushEmpty(cvector, float)
0x45e: Stack[-1] = (float) 1.74533
0x45f: Call2 0x43d

0x460: Stack[-7] = Stack[-2]
0x461: Pop(2)
0x462: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x463: Push((float)2500.0)
0x464: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x465: IF (Stack[-1] == 0) GOTO 0x478; Pop(1)

0x466: PushEmpty(cvector, float)
0x467: Stack[-1] = (float) 2.61799
0x468: Call2 0x43d

0x469: Stack[-7] = Stack[-2]
0x46a: Pop(2)
0x46b: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x46c: Push((float)2500.0)
0x46d: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x46e: IF (Stack[-1] == 0) GOTO 0x478; Pop(1)

0x46f: Push("Can't retreat, distance: ")
0x470: Pop(0); Push(Sqrt(Stack[-5]))
0x471: Pop(2); Push(Stack[-2] + Stack[-1]);
0x472: @ Trace(Stack[-1])
0x473: Pop(1)
0x474: Push((float)0.5)
0x475: @ Sleep(Stack[-1])
0x476: Pop(1)
0x477: Return(); Pop(10)

0x478: Push(CvectorIndex(Stack[-5], 0))
0x479: Push(CvectorIndex(Stack[-6], 2))
0x47a: @ Rotate(Stack[-2], Stack[-1])
0x47b: Pop(2)
0x47c: PushEmpty(cvector)
0x47d: Call2 0x675

0x47e: Pop(0)
0x47f: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-6]; Pop(1);
0x480: Push((int) 120)
0x481: Push((float)0.5)
0x482: @ SetTimer(Stack[-2], Stack[-1])
0x483: Pop(2)
0x484: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x485: Push((int) 1)
0x486: @ MovePoint(Stack[-1], Stack[-1], Stack[-4])
0x487: Pop(1)
0x488: Push(Stack[-3])
0x489: IF (Stack[-1] == 0) GOTO 0x4a1; Pop(1)

0x48a: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x48b: IF (Stack[-1] == 0) GOTO 0x48e; Pop(1)

0x48c: GOTO 0x4a3

0x48d: GOTO 0x4a1

0x48e: PushEmpty(cvector, float)
0x48f: Stack[-1] = (float) 2.61799
0x490: Call2 0x43d

0x491: Stack[-4] = Stack[-2]
0x492: Pop(2)
0x493: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x494: Push((float)2500.0)
0x495: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x496: IF (Stack[-1] == 0) GOTO 0x4a0; Pop(1)

0x497: PushEmpty(cvector)
0x498: Call2 0x675

0x499: Pop(0)
0x49a: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x49b: Push((int) 120)
0x49c: Push((float)0.5)
0x49d: @ SetTimer(Stack[-2], Stack[-1])
0x49e: Pop(2)
0x49f: GOTO 0x4a1

0x4a0: GOTO 0x4a3

0x4a1: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x4a2: IF (Stack[-1] == 0) GOTO 0x485; Pop(1)

0x4a3: Return(); Pop(10)

0x4a4: PushEmpty(cvector, float, cvector, float, cvector, float, cvector, float)
0x4a5: Push((int) 120)
0x4a6: Pop(1); Push((bool) Stack[-10] != Stack[-1])
0x4a7: IF (Stack[-1] == 0) GOTO 0x4a9; Pop(1)

0x4a8: Return(); Pop(8)

0x4a9: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x4aa: IF (Stack[-1] == 0) GOTO 0x4b2; Pop(1)

0x4ab: @ Stop()
0x4ac: Pop(0)
0x4ad: Push((int) 1)
0x4ae: @ KillTimer(Stack[-1])
0x4af: Pop(1)
0x4b0: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x4b1: GOTO 0x4d7

0x4b2: @ GetDirection(Stack[-4])
0x4b3: Pop(0)
0x4b4: Push((float)7000.0)
0x4b5: @ FindDirLength(Stack[-4], Stack[-5], Stack[-1])
0x4b6: Pop(1)
0x4b7: PushEmpty(cvector, float)
0x4b8: Stack[-1] = (float) 1.74533
0x4b9: Call2 0x43d

0x4ba: Stack[-4] = Stack[-2]
0x4bb: Pop(2)
0x4bc: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x4bd: PushEmpty(bool)
0x4be: Stack[-1] = (bool) 0
0x4bf: Push((float)2500.0)
0x4c0: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x4c1: IF (Stack[-1] == 0) GOTO 0x4d0; Pop(1)

0x4c2: PushEmpty(bool)
0x4c3: Stack[-1] = (bool) 1
0x4c4: Pop(0); Push(Stack[-5] * Stack[-5]);
0x4c5: Push((float)2.25)
0x4c6: Pop(2); Push(Stack[-2] * Stack[-1]);
0x4c7: Pop(1); Push((bool) Stack[-4] >= Stack[-1])
0x4c8: IF (Stack[-1] == 0) GOTO 0x4ce; Pop(1)

0x4c9: PushEmpty(bool)
0x4ca: Call2 0x4e8

0x4cb: Pop(0)
0x4cc: IF (Stack[-1] == 0) GOTO 0x4ce; Pop(1)

0x4cd: Stack[-1] = (bool) 0
0x4ce: IF (Stack[-1] == 0) GOTO 0x4d0; Pop(1)

0x4cf: Stack[-1] = (bool) 1
0x4d0: IF (Stack[-1] == 0) GOTO 0x4d7; Pop(1)

0x4d1: @ Stop()
0x4d2: Pop(0)
0x4d3: PushEmpty(cvector)
0x4d4: Call2 0x675

0x4d5: Pop(0)
0x4d6: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x4d7: Return(); Pop(8)

0x4d8: @ Stop()
0x4d9: Pop(0)
0x4da: Push((int) 120)
0x4db: @ KillTimer(Stack[-1])
0x4dc: Pop(1)
0x4dd: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x4de: Return(); Pop(0)

0x4df: PushEmpty()
0x4e0: PushEmpty()
0x4e1: Call2 0x4d8

0x4e2: Pop(0)
0x4e3: PushEmpty(object)
0x4e4: Stack[-1] = Stack[-2]
0x4e5: Call2 0x914

0x4e6: Pop(1)
0x4e7: Return(); Pop(0)

0x4e8: PushEmpty(cvector, cvector, cvector, cvector)
0x4e9: @ GetDirection(Stack[-2])
0x4ea: Pop(0)
0x4eb: PushEmpty(cvector, object)
0x4ec: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4ed: Call2 0x67a

0x4ee: Stack[-3] = Stack[-2]
0x4ef: Pop(2)
0x4f0: PushEmpty(float, cvector, cvector)
0x4f1: Stack[-2] = Stack[-5]
0x4f2: Stack[-1] = Stack[-4]
0x4f3: Call2 0x7ad

0x4f4: Pop(2)
0x4f5: Push((float)-0.34202)
0x4f6: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0x4f7: Return(); Pop(4)

0x4f8: PushEmpty(cvector, cvector, cvector, cvector, cvector, float, cvector, cvector, cvector, cvector, cvector, float)
0x4f9: @ GetPosition(Stack[-6])
0x4fa: Pop(0)
0x4fb: @@ GetPosition(Stack[-5])
0x4fc: Pop(0)
0x4fd: @ GetDirection(Stack[-4])
0x4fe: Pop(0)
0x4ff: PushEmpty(cvector, cvector)
0x500: PushEmpty(cvector, cvector)
0x501: Stack[-1] = Stack[-10] - Stack[-9]; Pop(0);
0x502: Call2 0x7a3

0x503: Pop(1)
0x504: Push((float)0.75)
0x505: Pop(1); Push(Stack[-8] * Stack[-1]);
0x506: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x507: Call2 0x7a3

0x508: Stack[-5] = Stack[-2]
0x509: Pop(2)
0x50a: Push((int) 32)
0x50b: Push((float)7000.0)
0x50c: @ FindLongestDir(Stack[-4], Stack[-3], Stack[-5], Stack[-15], Stack[-2], Stack[-1])
0x50d: Pop(2)
0x50e: Push((int) 100)
0x50f: Stack[-2] = Stack[-2] - Stack[-1]; Pop(1);
0x510: Push((int) 0)
0x511: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x512: IF (Stack[-1] == 0) GOTO 0x514; Pop(1)

0x513: Stack[-1] = (int) 0
0x514: Stack[-14] = Stack[-2] * Stack[-1]; Pop(0);
0x515: Return(); Pop(12)

0x516: PushEmpty(cvector, float, bool, cvector, float, cvector, float, bool, cvector, float)
0x517: Stack[0 + Tasks[-1].StackPointer] = Stack[-11]
0x518: PushEmpty(cvector, float)
0x519: Stack[-1] = (float) 1.74533
0x51a: Call2 0x4f8

0x51b: Stack[-7] = Stack[-2]
0x51c: Pop(2)
0x51d: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x51e: Push((float)2500.0)
0x51f: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x520: IF (Stack[-1] == 0) GOTO 0x533; Pop(1)

0x521: PushEmpty(cvector, float)
0x522: Stack[-1] = (float) 2.61799
0x523: Call2 0x4f8

0x524: Stack[-7] = Stack[-2]
0x525: Pop(2)
0x526: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x527: Push((float)2500.0)
0x528: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x529: IF (Stack[-1] == 0) GOTO 0x533; Pop(1)

0x52a: Push("Can't retreat, distance: ")
0x52b: Pop(0); Push(Sqrt(Stack[-5]))
0x52c: Pop(2); Push(Stack[-2] + Stack[-1]);
0x52d: @ Trace(Stack[-1])
0x52e: Pop(1)
0x52f: Push((float)0.5)
0x530: @ Sleep(Stack[-1])
0x531: Pop(1)
0x532: Return(); Pop(10)

0x533: Push(CvectorIndex(Stack[-5], 0))
0x534: Push(CvectorIndex(Stack[-6], 2))
0x535: @ Rotate(Stack[-2], Stack[-1])
0x536: Pop(2)
0x537: PushEmpty(cvector)
0x538: Call2 0x675

0x539: Pop(0)
0x53a: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-6]; Pop(1);
0x53b: Push((int) 120)
0x53c: Push((float)0.5)
0x53d: @ SetTimer(Stack[-2], Stack[-1])
0x53e: Pop(2)
0x53f: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x540: Push((int) 1)
0x541: @ MovePoint(Stack[-1], Stack[-1], Stack[-4])
0x542: Pop(1)
0x543: Push(Stack[-3])
0x544: IF (Stack[-1] == 0) GOTO 0x55c; Pop(1)

0x545: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x546: IF (Stack[-1] == 0) GOTO 0x549; Pop(1)

0x547: GOTO 0x55e

0x548: GOTO 0x55c

0x549: PushEmpty(cvector, float)
0x54a: Stack[-1] = (float) 2.61799
0x54b: Call2 0x4f8

0x54c: Stack[-4] = Stack[-2]
0x54d: Pop(2)
0x54e: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x54f: Push((float)2500.0)
0x550: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x551: IF (Stack[-1] == 0) GOTO 0x55b; Pop(1)

0x552: PushEmpty(cvector)
0x553: Call2 0x675

0x554: Pop(0)
0x555: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x556: Push((int) 120)
0x557: Push((float)0.5)
0x558: @ SetTimer(Stack[-2], Stack[-1])
0x559: Pop(2)
0x55a: GOTO 0x55c

0x55b: GOTO 0x55e

0x55c: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x55d: IF (Stack[-1] == 0) GOTO 0x540; Pop(1)

0x55e: Return(); Pop(10)

0x55f: PushEmpty(cvector, float, cvector, float, cvector, float, cvector, float)
0x560: Push((int) 120)
0x561: Pop(1); Push((bool) Stack[-10] != Stack[-1])
0x562: IF (Stack[-1] == 0) GOTO 0x564; Pop(1)

0x563: Return(); Pop(8)

0x564: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x565: IF (Stack[-1] == 0) GOTO 0x56d; Pop(1)

0x566: @ Stop()
0x567: Pop(0)
0x568: Push((int) 1)
0x569: @ KillTimer(Stack[-1])
0x56a: Pop(1)
0x56b: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x56c: GOTO 0x592

0x56d: @ GetDirection(Stack[-4])
0x56e: Pop(0)
0x56f: Push((float)7000.0)
0x570: @ FindDirLength(Stack[-4], Stack[-5], Stack[-1])
0x571: Pop(1)
0x572: PushEmpty(cvector, float)
0x573: Stack[-1] = (float) 1.74533
0x574: Call2 0x4f8

0x575: Stack[-4] = Stack[-2]
0x576: Pop(2)
0x577: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x578: PushEmpty(bool)
0x579: Stack[-1] = (bool) 0
0x57a: Push((float)2500.0)
0x57b: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x57c: IF (Stack[-1] == 0) GOTO 0x58b; Pop(1)

0x57d: PushEmpty(bool)
0x57e: Stack[-1] = (bool) 1
0x57f: Pop(0); Push(Stack[-5] * Stack[-5]);
0x580: Push((float)2.25)
0x581: Pop(2); Push(Stack[-2] * Stack[-1]);
0x582: Pop(1); Push((bool) Stack[-4] >= Stack[-1])
0x583: IF (Stack[-1] == 0) GOTO 0x589; Pop(1)

0x584: PushEmpty(bool)
0x585: Call2 0x5a3

0x586: Pop(0)
0x587: IF (Stack[-1] == 0) GOTO 0x589; Pop(1)

0x588: Stack[-1] = (bool) 0
0x589: IF (Stack[-1] == 0) GOTO 0x58b; Pop(1)

0x58a: Stack[-1] = (bool) 1
0x58b: IF (Stack[-1] == 0) GOTO 0x592; Pop(1)

0x58c: @ Stop()
0x58d: Pop(0)
0x58e: PushEmpty(cvector)
0x58f: Call2 0x675

0x590: Pop(0)
0x591: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x592: Return(); Pop(8)

0x593: @ Stop()
0x594: Pop(0)
0x595: Push((int) 120)
0x596: @ KillTimer(Stack[-1])
0x597: Pop(1)
0x598: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x599: Return(); Pop(0)

0x59a: PushEmpty()
0x59b: PushEmpty()
0x59c: Call2 0x593

0x59d: Pop(0)
0x59e: PushEmpty(object)
0x59f: Stack[-1] = Stack[-2]
0x5a0: Call2 0x914

0x5a1: Pop(1)
0x5a2: Return(); Pop(0)

0x5a3: PushEmpty(cvector, cvector, cvector, cvector)
0x5a4: @ GetDirection(Stack[-2])
0x5a5: Pop(0)
0x5a6: PushEmpty(cvector, object)
0x5a7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5a8: Call2 0x67a

0x5a9: Stack[-3] = Stack[-2]
0x5aa: Pop(2)
0x5ab: PushEmpty(float, cvector, cvector)
0x5ac: Stack[-2] = Stack[-5]
0x5ad: Stack[-1] = Stack[-4]
0x5ae: Call2 0x7ad

0x5af: Pop(2)
0x5b0: Push((float)-0.34202)
0x5b1: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0x5b2: Return(); Pop(4)

0x5b3: PushEmpty()
0x5b4: Call2 0x655

0x5b5: Pop(0)
0x5b6: PushEmpty()
0x5b7: Call2 0xa4e

0x5b8: Pop(0)
0x5b9: Return(); Pop(0)

0x5ba: PushEmpty(cvector, cvector, cvector, cvector, cvector, float, cvector, cvector, cvector, cvector, cvector, float)
0x5bb: @ GetPosition(Stack[-6])
0x5bc: Pop(0)
0x5bd: @@ GetPosition(Stack[-5])
0x5be: Pop(0)
0x5bf: @ GetDirection(Stack[-4])
0x5c0: Pop(0)
0x5c1: PushEmpty(cvector, cvector)
0x5c2: PushEmpty(cvector, cvector)
0x5c3: Stack[-1] = Stack[-10] - Stack[-9]; Pop(0);
0x5c4: Call2 0x7a3

0x5c5: Pop(1)
0x5c6: Push((float)0.75)
0x5c7: Pop(1); Push(Stack[-8] * Stack[-1]);
0x5c8: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x5c9: Call2 0x7a3

0x5ca: Stack[-5] = Stack[-2]
0x5cb: Pop(2)
0x5cc: Push((int) 32)
0x5cd: Push((float)7000.0)
0x5ce: @ FindLongestDir(Stack[-4], Stack[-3], Stack[-5], Stack[-15], Stack[-2], Stack[-1])
0x5cf: Pop(2)
0x5d0: Push((int) 100)
0x5d1: Stack[-2] = Stack[-2] - Stack[-1]; Pop(1);
0x5d2: Push((int) 0)
0x5d3: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x5d4: IF (Stack[-1] == 0) GOTO 0x5d6; Pop(1)

0x5d5: Stack[-1] = (int) 0
0x5d6: Stack[-14] = Stack[-2] * Stack[-1]; Pop(0);
0x5d7: Return(); Pop(12)

0x5d8: PushEmpty(cvector, float, bool, cvector, float, cvector, float, bool, cvector, float)
0x5d9: Stack[0 + Tasks[-1].StackPointer] = Stack[-11]
0x5da: PushEmpty(cvector, float)
0x5db: Stack[-1] = (float) 1.74533
0x5dc: Call2 0x5ba

0x5dd: Stack[-7] = Stack[-2]
0x5de: Pop(2)
0x5df: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x5e0: Push((float)2500.0)
0x5e1: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x5e2: IF (Stack[-1] == 0) GOTO 0x5f5; Pop(1)

0x5e3: PushEmpty(cvector, float)
0x5e4: Stack[-1] = (float) 2.61799
0x5e5: Call2 0x5ba

0x5e6: Stack[-7] = Stack[-2]
0x5e7: Pop(2)
0x5e8: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x5e9: Push((float)2500.0)
0x5ea: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x5eb: IF (Stack[-1] == 0) GOTO 0x5f5; Pop(1)

0x5ec: Push("Can't retreat, distance: ")
0x5ed: Pop(0); Push(Sqrt(Stack[-5]))
0x5ee: Pop(2); Push(Stack[-2] + Stack[-1]);
0x5ef: @ Trace(Stack[-1])
0x5f0: Pop(1)
0x5f1: Push((float)0.5)
0x5f2: @ Sleep(Stack[-1])
0x5f3: Pop(1)
0x5f4: Return(); Pop(10)

0x5f5: Push(CvectorIndex(Stack[-5], 0))
0x5f6: Push(CvectorIndex(Stack[-6], 2))
0x5f7: @ Rotate(Stack[-2], Stack[-1])
0x5f8: Pop(2)
0x5f9: PushEmpty(cvector)
0x5fa: Call2 0x675

0x5fb: Pop(0)
0x5fc: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-6]; Pop(1);
0x5fd: Push((int) 120)
0x5fe: Push((float)0.5)
0x5ff: @ SetTimer(Stack[-2], Stack[-1])
0x600: Pop(2)
0x601: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x602: Push((int) 1)
0x603: @ MovePoint(Stack[-1], Stack[-1], Stack[-4])
0x604: Pop(1)
0x605: Push(Stack[-3])
0x606: IF (Stack[-1] == 0) GOTO 0x61e; Pop(1)

0x607: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x608: IF (Stack[-1] == 0) GOTO 0x60b; Pop(1)

0x609: GOTO 0x620

0x60a: GOTO 0x61e

0x60b: PushEmpty(cvector, float)
0x60c: Stack[-1] = (float) 2.61799
0x60d: Call2 0x5ba

0x60e: Stack[-4] = Stack[-2]
0x60f: Pop(2)
0x610: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x611: Push((float)2500.0)
0x612: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x613: IF (Stack[-1] == 0) GOTO 0x61d; Pop(1)

0x614: PushEmpty(cvector)
0x615: Call2 0x675

0x616: Pop(0)
0x617: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x618: Push((int) 120)
0x619: Push((float)0.5)
0x61a: @ SetTimer(Stack[-2], Stack[-1])
0x61b: Pop(2)
0x61c: GOTO 0x61e

0x61d: GOTO 0x620

0x61e: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x61f: IF (Stack[-1] == 0) GOTO 0x602; Pop(1)

0x620: Return(); Pop(10)

0x621: PushEmpty(cvector, float, cvector, float, cvector, float, cvector, float)
0x622: Push((int) 120)
0x623: Pop(1); Push((bool) Stack[-10] != Stack[-1])
0x624: IF (Stack[-1] == 0) GOTO 0x626; Pop(1)

0x625: Return(); Pop(8)

0x626: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x627: IF (Stack[-1] == 0) GOTO 0x62f; Pop(1)

0x628: @ Stop()
0x629: Pop(0)
0x62a: Push((int) 1)
0x62b: @ KillTimer(Stack[-1])
0x62c: Pop(1)
0x62d: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x62e: GOTO 0x654

0x62f: @ GetDirection(Stack[-4])
0x630: Pop(0)
0x631: Push((float)7000.0)
0x632: @ FindDirLength(Stack[-4], Stack[-5], Stack[-1])
0x633: Pop(1)
0x634: PushEmpty(cvector, float)
0x635: Stack[-1] = (float) 1.74533
0x636: Call2 0x5ba

0x637: Stack[-4] = Stack[-2]
0x638: Pop(2)
0x639: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x63a: PushEmpty(bool)
0x63b: Stack[-1] = (bool) 0
0x63c: Push((float)2500.0)
0x63d: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x63e: IF (Stack[-1] == 0) GOTO 0x64d; Pop(1)

0x63f: PushEmpty(bool)
0x640: Stack[-1] = (bool) 1
0x641: Pop(0); Push(Stack[-5] * Stack[-5]);
0x642: Push((float)2.25)
0x643: Pop(2); Push(Stack[-2] * Stack[-1]);
0x644: Pop(1); Push((bool) Stack[-4] >= Stack[-1])
0x645: IF (Stack[-1] == 0) GOTO 0x64b; Pop(1)

0x646: PushEmpty(bool)
0x647: Call2 0x665

0x648: Pop(0)
0x649: IF (Stack[-1] == 0) GOTO 0x64b; Pop(1)

0x64a: Stack[-1] = (bool) 0
0x64b: IF (Stack[-1] == 0) GOTO 0x64d; Pop(1)

0x64c: Stack[-1] = (bool) 1
0x64d: IF (Stack[-1] == 0) GOTO 0x654; Pop(1)

0x64e: @ Stop()
0x64f: Pop(0)
0x650: PushEmpty(cvector)
0x651: Call2 0x675

0x652: Pop(0)
0x653: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x654: Return(); Pop(8)

0x655: @ Stop()
0x656: Pop(0)
0x657: Push((int) 120)
0x658: @ KillTimer(Stack[-1])
0x659: Pop(1)
0x65a: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x65b: Return(); Pop(0)

0x65c: PushEmpty()
0x65d: PushEmpty()
0x65e: Call2 0x655

0x65f: Pop(0)
0x660: PushEmpty(object)
0x661: Stack[-1] = Stack[-2]
0x662: Call2 0x914

0x663: Pop(1)
0x664: Return(); Pop(0)

0x665: PushEmpty(cvector, cvector, cvector, cvector)
0x666: @ GetDirection(Stack[-2])
0x667: Pop(0)
0x668: PushEmpty(cvector, object)
0x669: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x66a: Call2 0x67a

0x66b: Stack[-3] = Stack[-2]
0x66c: Pop(2)
0x66d: PushEmpty(float, cvector, cvector)
0x66e: Stack[-2] = Stack[-5]
0x66f: Stack[-1] = Stack[-4]
0x670: Call2 0x7ad

0x671: Pop(2)
0x672: Push((float)-0.34202)
0x673: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0x674: Return(); Pop(4)

0x675: PushEmpty(cvector, cvector)
0x676: @ GetPosition(Stack[-1])
0x677: Pop(0)
0x678: Stack[-3] = Stack[-1]
0x679: Return(); Pop(2)

0x67a: PushEmpty(cvector, cvector, cvector, cvector)
0x67b: @ GetPosition(Stack[-2])
0x67c: Pop(0)
0x67d: @@ GetPosition(Stack[-1])
0x67e: Pop(0)
0x67f: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x680: Return(); Pop(4)

0x681: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x682: @ GetPosition(Stack[-3])
0x683: Pop(0)
0x684: @@ GetPosition(Stack[-2])
0x685: Pop(0)
0x686: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x687: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x688: Return(); Pop(6)

0x689: PushEmpty(bool, bool)
0x68a: @ IsPlayerActor(Stack[-3], Stack[-1])
0x68b: Pop(0)
0x68c: Stack[-4] = Stack[-1]
0x68d: Return(); Pop(2)

0x68e: PushEmpty(bool, bool)
0x68f: Push("HasProperty")
0x690: Push((int) 2)
0x691: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x692: Pop(1); Push((bool) Stack[-1] == 0)
0x693: IF (Stack[-1] == 0) GOTO 0x696; Pop(1)

0x694: Stack[-5] = (bool) 0
0x695: Return(); Pop(2)

0x696: @@ HasProperty(Stack[-3], Stack[-1])
0x697: Pop(0)
0x698: Stack[-5] = Stack[-1]
0x699: Return(); Pop(2)

0x69a: PushEmpty(bool, bool)
0x69b: @@ IsDead(Stack[-1])
0x69c: Pop(0)
0x69d: Stack[-4] = Stack[-1]
0x69e: Return(); Pop(2)

0x69f: PushEmpty(object, object, object, object)
0x6a0: Pop(0); Push((bool) Stack[-5] == 0)
0x6a1: IF (Stack[-1] == 0) GOTO 0x6a4; Pop(1)

0x6a2: Stack[-6] = (bool) 0
0x6a3: Return(); Pop(4)

0x6a4: PushEmpty(bool)
0x6a5: Stack[-1] = (bool) 0
0x6a6: Push("IsDead")
0x6a7: Push((int) 1)
0x6a8: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x6a9: IF (Stack[-1] == 0) GOTO 0x6b0; Pop(1)

0x6aa: PushEmpty(bool, object)
0x6ab: Stack[-1] = Stack[-8]
0x6ac: Call2 0x69a

0x6ad: Pop(1)
0x6ae: IF (Stack[-1] == 0) GOTO 0x6b0; Pop(1)

0x6af: Stack[-1] = (bool) 1
0x6b0: IF (Stack[-1] == 0) GOTO 0x6b3; Pop(1)

0x6b1: Stack[-6] = (bool) 0
0x6b2: Return(); Pop(4)

0x6b3: @ GetScene(Stack[-2])
0x6b4: Pop(0)
0x6b5: Pop(0); Push((bool) Stack[-2] == 0)
0x6b6: IF (Stack[-1] == 0) GOTO 0x6b9; Pop(1)

0x6b7: Stack[-6] = (bool) 0
0x6b8: Return(); Pop(4)

0x6b9: @@ GetScene(Stack[-1])
0x6ba: Pop(0)
0x6bb: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x6bc: IF (Stack[-1] == 0) GOTO 0x6bf; Pop(1)

0x6bd: Stack[-6] = (bool) 0
0x6be: Return(); Pop(4)

0x6bf: Stack[-6] = (bool) 1
0x6c0: Return(); Pop(4)

0x6c1: Stack[-1] = 0
0x6c2: Stack[-2] = 0
0x6c3: PushEmpty(int, int)
0x6c4: PushEmpty(bool, object)
0x6c5: Stack[-1] = Stack[-5]
0x6c6: Call2 0x69f

0x6c7: Pop(1)
0x6c8: Pop(1); Push((bool) Stack[-1] == 0)
0x6c9: IF (Stack[-1] == 0) GOTO 0x6cc; Pop(1)

0x6ca: Stack[-4] = (bool) 0
0x6cb: Return(); Pop(2)

0x6cc: PushEmpty(bool, object, string)
0x6cd: Stack[-2] = Stack[-6]
0x6ce: Stack[-1] = "noaccess"
0x6cf: Call2 0x68e

0x6d0: Pop(2)
0x6d1: Pop(1); Push((bool) Stack[-1] == 0)
0x6d2: IF (Stack[-1] == 0) GOTO 0x6d5; Pop(1)

0x6d3: Stack[-4] = (bool) 1
0x6d4: Return(); Pop(2)

0x6d5: Push("noaccess")
0x6d6: @@ GetProperty(Stack[-1], Stack[-2])
0x6d7: Pop(1)
0x6d8: Push((int) 0)
0x6d9: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x6da: Return(); Pop(2)

0x6db: PushEmpty(bool, int, cvector, cvector, cvector, cvector, string, bool, int, cvector, cvector, cvector, cvector, string)
0x6dc: Pop(0); Push((bool) Stack[-15] == 0)
0x6dd: IF (Stack[-1] == 0) GOTO 0x6df; Pop(1)

0x6de: Return(); Pop(14)

0x6df: @ IsDead(Stack[-7])
0x6e0: Pop(0)
0x6e1: Push(Stack[-7])
0x6e2: IF (Stack[-1] == 0) GOTO 0x6e4; Pop(1)

0x6e3: Return(); Pop(14)

0x6e4: @ GetSecondaryAnimationType(Stack[-6])
0x6e5: Pop(0)
0x6e6: Push((int) 0)
0x6e7: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x6e8: IF (Stack[-1] == 0) GOTO 0x6ea; Pop(1)

0x6e9: Return(); Pop(14)

0x6ea: @@ GetPosition(Stack[-5])
0x6eb: Pop(0)
0x6ec: @ GetPosition(Stack[-4])
0x6ed: Pop(0)
0x6ee: @ GetDirection(Stack[-3])
0x6ef: Pop(0)
0x6f0: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0x6f1: Push(CvectorIndex(Stack[-2], 0))
0x6f2: Push(CvectorIndex(Stack[-4], 0))
0x6f3: Pop(2); Push(Stack[-2] * Stack[-1]);
0x6f4: Push(CvectorIndex(Stack[-3], 2))
0x6f5: Push(CvectorIndex(Stack[-5], 2))
0x6f6: Pop(2); Push(Stack[-2] * Stack[-1]);
0x6f7: Pop(2); Push(Stack[-2] + Stack[-1]);
0x6f8: Push((int) 0)
0x6f9: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x6fa: IF (Stack[-1] == 0) GOTO 0x6fd; Pop(1)

0x6fb: Stack[-1] = "fhit"
0x6fc: GOTO 0x6fe

0x6fd: Stack[-1] = "bhit"
0x6fe: Push("hit_react")
0x6ff: Push("1")
0x700: Pop(1); Push(Stack[-3] + Stack[-1]);
0x701: Push("2")
0x702: Pop(1); Push(Stack[-4] + Stack[-1]);
0x703: Push((int) -10)
0x704: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x705: Pop(4)
0x706: Return(); Pop(14)

0x707: PushEmpty(cvector, object, int, bool, cvector, cvector, int, int, cvector, cvector, object, int, bool, cvector, cvector, int, int, cvector)
0x708: PushEmpty(bool)
0x709: Stack[-1] = (bool) 0
0x70a: PushEmpty(bool)
0x70b: Stack[-1] = (bool) 0
0x70c: Push(Stack[-23])
0x70d: IF (Stack[-1] == 0) GOTO 0x712; Pop(1)

0x70e: Push((int) 4)
0x70f: Pop(1); Push((bool) Stack[-23] != Stack[-1])
0x710: IF (Stack[-1] == 0) GOTO 0x712; Pop(1)

0x711: Stack[-1] = (bool) 1
0x712: IF (Stack[-1] == 0) GOTO 0x717; Pop(1)

0x713: Push((int) 5)
0x714: Pop(1); Push((bool) Stack[-22] != Stack[-1])
0x715: IF (Stack[-1] == 0) GOTO 0x717; Pop(1)

0x716: Stack[-1] = (bool) 1
0x717: IF (Stack[-1] == 0) GOTO 0x746; Pop(1)

0x718: PushEmpty(cvector, cvector)
0x719: PushEmpty(cvector, object)
0x71a: Stack[-1] = Stack[-25]
0x71b: Call2 0x67a

0x71c: Stack[-3] = Stack[-2]
0x71d: Pop(2)
0x71e: Call2 0x7a3

0x71f: Stack[-11] = Stack[-2]
0x720: Pop(2)
0x721: @ CreateVectorVector(Stack[-8])
0x722: Pop(0)
0x723: Stack[-7] = (int) 1
0x724: Push("hit")
0x725: Pop(1); Push(Stack[-1] + Stack[-8]);
0x726: @ GetGeometryLocator(Stack[-1], Stack[-7], Stack[-6], Stack[-5])
0x727: Pop(1)
0x728: Pop(0); Push((bool) Stack[-6] == 0)
0x729: IF (Stack[-1] == 0) GOTO 0x72b; Pop(1)

0x72a: GOTO 0x734

0x72b: Pop(0); Push(Stack[-4] | Stack[-9]);
0x72c: Push((float)0.70711)
0x72d: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x72e: IF (Stack[-1] == 0) GOTO 0x731; Pop(1)

0x72f: @@ add(Stack[-5])
0x730: Pop(0)
0x731: Push((int) 1)
0x732: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x733: GOTO 0x724

0x734: @@ size(Stack[-3])
0x735: Pop(0)
0x736: Push(Stack[-3])
0x737: IF (Stack[-1] == 0) GOTO 0x745; Pop(1)

0x738: @ irand(Stack[-2], Stack[-3])
0x739: Pop(0)
0x73a: @@ get(Stack[-1], Stack[-2])
0x73b: Pop(0)
0x73c: PushEmpty(object, int, float, cvector, cvector)
0x73d: Stack[-5] = Stack[-26]
0x73e: Stack[-4] = Stack[-25]
0x73f: Stack[-3] = Stack[-24]
0x740: Stack[-2] = Stack[-6]
0x741: Stack[-1] = -Stack[-14]; Pop(0);
0x742: Call2 0x74b

0x743: Pop(5)
0x744: Return(); Pop(18)

0x745: Stack[-8] = 0
0x746: PushEmpty(object)
0x747: Stack[-1] = Stack[-22]
0x748: Call2 0x6db

0x749: Pop(1)
0x74a: Return(); Pop(18)

0x74b: PushEmpty(object, object, object, object)
0x74c: @ GetScene(Stack[-2])
0x74d: Pop(0)
0x74e: Push("scripted")
0x74f: Push("blood_dir.xml")
0x750: @ AddActorByType(Stack[-3], Stack[-2], Stack[-4], Stack[-8], Stack[-7], Stack[-1])
0x751: Pop(2)
0x752: PushEmpty(object)
0x753: Stack[-1] = Stack[-10]
0x754: Call2 0x6db

0x755: Pop(1)
0x756: Return(); Pop(4)

0x757: Stack[-1] = 0
0x758: Stack[-2] = 0
0x759: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x75a: @@ GetPosition(Stack[-3])
0x75b: Pop(0)
0x75c: @ GetPosition(Stack[-2])
0x75d: Pop(0)
0x75e: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0x75f: Push(CvectorIndex(Stack[-1], 0))
0x760: Push(CvectorIndex(Stack[-2], 2))
0x761: @ RotateAsync(Stack[-2], Stack[-1])
0x762: Pop(2)
0x763: Return(); Pop(6)

0x764: PushEmpty(bool, bool)
0x765: @ IsLoaded(Stack[-1])
0x766: Pop(0)
0x767: Stack[-3] = Stack[-1]
0x768: Return(); Pop(2)

0x769: PushEmpty(float, cvector, float, cvector)
0x76a: @@ GetEyesHeight(Stack[-2])
0x76b: Pop(0)
0x76c: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x76d: Push(CvectorIndex(Stack[-1], 1))
0x76e: Stack[-1] = Stack[-3]
0x76f: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x770: Push("head")
0x771: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x772: Pop(1)
0x773: Return(); Pop(4)

0x774: PushEmpty(bool, int, bool, int, bool, float, cvector, cvector, bool, int, bool, int, bool, float, cvector, cvector)
0x775: @ IsExisting3DSound(Stack[-8], Stack[-17])
0x776: Pop(0)
0x777: Pop(0); Push((bool) Stack[-8] == 0)
0x778: IF (Stack[-1] == 0) GOTO 0x78d; Pop(1)

0x779: Stack[-7] = (int) 0
0x77a: Push((int) 1)
0x77b: Pop(1); Push(Stack[-8] + Stack[-1]);
0x77c: Pop(1); Push(Stack[-18] + Stack[-1]);
0x77d: @ IsExisting3DSound(Stack[-7], Stack[-1])
0x77e: Pop(1)
0x77f: Pop(0); Push((bool) Stack[-6] == 0)
0x780: IF (Stack[-1] == 0) GOTO 0x782; Pop(1)

0x781: GOTO 0x785

0x782: Push((int) 1)
0x783: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x784: GOTO 0x77a

0x785: Pop(0); Push((bool) Stack[-7] == 0)
0x786: IF (Stack[-1] == 0) GOTO 0x788; Pop(1)

0x787: Return(); Pop(16)

0x788: @ irand(Stack[-5], Stack[-7])
0x789: Pop(0)
0x78a: Push((int) 1)
0x78b: Pop(1); Push(Stack[-6] + Stack[-1]);
0x78c: Stack[-18] = Stack[-18] + Stack[-1]; Pop(1);
0x78d: @ Is3DSoundLoaded(Stack[-4], Stack[-17])
0x78e: Pop(0)
0x78f: Push(Stack[-4])
0x790: IF (Stack[-1] == 0) GOTO 0x79c; Pop(1)

0x791: @ GetEyesHeight(Stack[-3])
0x792: Pop(0)
0x793: @ GetDirection(Stack[-2])
0x794: Pop(0)
0x795: Push((int) 50)
0x796: Stack[-2] = Stack[-3] * Stack[-1]; Pop(1);
0x797: Push(CvectorIndex(Stack[-1], 1))
0x798: Stack[-1] = Stack[-1] + Stack[-4]; Pop(0);
0x799: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x79a: @ PlayGlobalSound(Stack[-17], Stack[-1])
0x79b: Pop(0)
0x79c: Return(); Pop(16)

0x79d: PushEmpty(object, object)
0x79e: @ self(Stack[-1])
0x79f: Pop(0)
0x7a0: Stack[-3] = Stack[-1]
0x7a1: Return(); Pop(2)

0x7a2: Stack[-1] = 0
0x7a3: PushEmpty(float, float)
0x7a4: Pop(0); Push(Stack[-3] | Stack[-3]);
0x7a5: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x7a6: Push((float)0.0)
0x7a7: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x7a8: IF (Stack[-1] == 0) GOTO 0x7ab; Pop(1)

0x7a9: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x7aa: Return(); Pop(2)

0x7ab: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x7ac: Return(); Pop(2)

0x7ad: PushEmpty()
0x7ae: Pop(0); Push(Stack[-2] | Stack[-1]);
0x7af: Pop(0); Push(Stack[-3] | Stack[-3]);
0x7b0: Pop(0); Push(Stack[-3] | Stack[-3]);
0x7b1: Pop(2); Push(Stack[-2] * Stack[-1]);
0x7b2: Pop(1); Push(Sqrt(Stack[-1]))
0x7b3: Stack[-5] = Stack[-2] / Stack[-1]; Pop(2);
0x7b4: Return(); Pop(0)

0x7b5: PushEmpty()
0x7b6: Push(CvectorIndex(Stack[-2], 0))
0x7b7: Push(CvectorIndex(Stack[-2], 0))
0x7b8: Pop(2); Push(Stack[-2] * Stack[-1]);
0x7b9: Push(CvectorIndex(Stack[-3], 2))
0x7ba: Push(CvectorIndex(Stack[-3], 2))
0x7bb: Pop(2); Push(Stack[-2] * Stack[-1]);
0x7bc: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x7bd: Return(); Pop(0)

0x7be: PushEmpty()
0x7bf: Push(CvectorIndex(Stack[-1], 0))
0x7c0: Push(CvectorIndex(Stack[-2], 0))
0x7c1: Pop(2); Push(Stack[-2] * Stack[-1]);
0x7c2: Push(CvectorIndex(Stack[-2], 2))
0x7c3: Push(CvectorIndex(Stack[-3], 2))
0x7c4: Pop(2); Push(Stack[-2] * Stack[-1]);
0x7c5: Pop(2); Push(Stack[-2] + Stack[-1]);
0x7c6: Stack[-3] = Sqrt(Stack[-1]); Pop(1);
0x7c7: Return(); Pop(0)

0x7c8: PushEmpty()
0x7c9: PushEmpty(float, cvector, cvector)
0x7ca: Stack[-2] = Stack[-5]
0x7cb: Stack[-1] = Stack[-4]
0x7cc: Call2 0x7b5

0x7cd: Pop(2)
0x7ce: PushEmpty(float, cvector)
0x7cf: Stack[-1] = Stack[-5]
0x7d0: Call2 0x7be

0x7d1: Pop(1)
0x7d2: PushEmpty(float, cvector)
0x7d3: Stack[-1] = Stack[-5]
0x7d4: Call2 0x7be

0x7d5: Pop(1)
0x7d6: Pop(2); Push(Stack[-2] * Stack[-1]);
0x7d7: Stack[-5] = Stack[-2] / Stack[-1]; Pop(2);
0x7d8: Return(); Pop(0)

0x7d9: PushEmpty(float, float)
0x7da: @ GetGameTime(Stack[-1])
0x7db: Pop(0)
0x7dc: Push((int) 1)
0x7dd: PushEmpty(int)
0x7de: Push((int) 24)
0x7df: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x7e0: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x7e1: Return(); Pop(2)

0x7e2: PushEmpty(int, int)
0x7e3: Push("branch")
0x7e4: @ GetVariable(Stack[-1], Stack[-2])
0x7e5: Pop(1)
0x7e6: Stack[-3] = Stack[-1]
0x7e7: Return(); Pop(2)

0x7e8: PushEmpty(object, float, object, float)
0x7e9: Push("player")
0x7ea: @ FindActor(Stack[-3], Stack[-1])
0x7eb: Pop(1)
0x7ec: Pop(0); Push((bool) Stack[-2] == 0)
0x7ed: IF (Stack[-1] == 0) GOTO 0x7f0; Pop(1)

0x7ee: Stack[-5] = (int) 0
0x7ef: Return(); Pop(4)

0x7f0: Push("reputation")
0x7f1: @@ GetProperty(Stack[-1], Stack[-2])
0x7f2: Pop(1)
0x7f3: Stack[-5] = Stack[-1]
0x7f4: Return(); Pop(4)

0x7f5: Stack[-2] = 0
0x7f6: PushEmpty()
0x7f7: PushEmpty(int)
0x7f8: Call2 0x7e2

0x7f9: Pop(0)
0x7fa: Push((int) 1)
0x7fb: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x7fc: IF (Stack[-1] == 0) GOTO 0x800; Pop(1)

0x7fd: @ WorkWithCorpse(Stack[-1])
0x7fe: Pop(0)
0x7ff: GOTO 0x802

0x800: @ Barter(Stack[-1])
0x801: Pop(0)
0x802: Return(); Pop(0)

0x803: PushEmpty(int, bool, int, bool)
0x804: Pop(0); Push((bool) Stack[-6] > Stack[-5])
0x805: IF (Stack[-1] == 0) GOTO 0x80a; Pop(1)

0x806: Push("GenerateMoney: iMin > iMax")
0x807: @ Trace(Stack[-1])
0x808: Pop(1)
0x809: Return(); Pop(4)

0x80a: Stack[-2] = (int) 0
0x80b: Pop(0); Push((bool) Stack[-6] != Stack[-5])
0x80c: IF (Stack[-1] == 0) GOTO 0x811; Pop(1)

0x80d: Pop(0); Push(Stack[-5] - Stack[-6]);
0x80e: @ irand(Stack[-3], Stack[-1])
0x80f: Pop(1)
0x810: GOTO 0x815

0x811: Push((int) 0)
0x812: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x813: IF (Stack[-1] == 0) GOTO 0x815; Pop(1)

0x814: Return(); Pop(4)

0x815: Stack[-2] = Stack[-2] + Stack[-6]; Pop(0);
0x816: Push((int) 0)
0x817: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x818: IF (Stack[-1] == 0) GOTO 0x81a; Pop(1)

0x819: Return(); Pop(4)

0x81a: PushEmpty(int, string)
0x81b: Stack[-1] = "Money"
0x81c: Call2 0x8fa

0x81d: Pop(1)
0x81e: Push((int) 0)
0x81f: @ AddItem(Stack[-3], Stack[-2], Stack[-1], Stack[-4])
0x820: Pop(2)
0x821: Return(); Pop(4)

0x822: PushEmpty(object, int, bool, object, int, bool)
0x823: @ CreateInvItem(Stack[-3])
0x824: Pop(0)
0x825: @@ SetItemName(Stack[-7])
0x826: Pop(0)
0x827: Push("Organ")
0x828: Push((int) 1)
0x829: @@ SetProperty(Stack[-2], Stack[-1])
0x82a: Pop(2)
0x82b: @@ GetItemID(Stack[-2])
0x82c: Pop(0)
0x82d: Push((int) 0)
0x82e: Push((int) 1)
0x82f: @ AddItem(Stack[-3], Stack[-5], Stack[-2], Stack[-1])
0x830: Pop(2)
0x831: Return(); Pop(6)

0x832: Stack[-3] = 0
0x833: PushEmpty(int)
0x834: Call2 0x7e2

0x835: Pop(0)
0x836: Push((int) 1)
0x837: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x838: IF (Stack[-1] == 0) GOTO 0x83a; Pop(1)

0x839: Return(); Pop(0)

0x83a: PushEmpty(string)
0x83b: Stack[-1] = "liver"
0x83c: Call2 0x822

0x83d: Pop(1)
0x83e: PushEmpty(string)
0x83f: Stack[-1] = "kidney"
0x840: Call2 0x822

0x841: Pop(1)
0x842: PushEmpty(string)
0x843: Stack[-1] = "heart"
0x844: Call2 0x822

0x845: Pop(1)
0x846: PushEmpty(string)
0x847: Stack[-1] = "blood"
0x848: Call2 0x822

0x849: Pop(1)
0x84a: Return(); Pop(0)

0x84b: PushEmpty(int, bool, int, bool)
0x84c: Push(Stack[-5])
0x84d: IF (Stack[-1] == 0) GOTO 0x8a4; Pop(1)

0x84e: PushEmpty(int, int)
0x84f: Stack[-2] = (int) 0
0x850: Push((int) 100)
0x851: PushEmpty(int)
0x852: Call2 0x7d9

0x853: Pop(0)
0x854: Push((int) 100)
0x855: Pop(2); Push(Stack[-2] * Stack[-1]);
0x856: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x857: Call2 0x803

0x858: Pop(2)
0x859: Push((int) 8)
0x85a: @ irand(Stack[-3], Stack[-1])
0x85b: Pop(1)
0x85c: Push((int) 0)
0x85d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x85e: IF (Stack[-1] == 0) GOTO 0x868; Pop(1)

0x85f: PushEmpty(int, string)
0x860: Stack[-1] = "lemon"
0x861: Call2 0x8fa

0x862: Pop(1)
0x863: Push((int) 0)
0x864: Push((int) 1)
0x865: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x866: Pop(3)
0x867: GOTO 0x8a3

0x868: Push((int) 1)
0x869: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x86a: IF (Stack[-1] == 0) GOTO 0x874; Pop(1)

0x86b: PushEmpty(int, string)
0x86c: Stack[-1] = "rusk"
0x86d: Call2 0x8fa

0x86e: Pop(1)
0x86f: Push((int) 0)
0x870: Push((int) 1)
0x871: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x872: Pop(3)
0x873: GOTO 0x8a3

0x874: Push((int) 2)
0x875: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x876: IF (Stack[-1] == 0) GOTO 0x880; Pop(1)

0x877: PushEmpty(int, string)
0x878: Stack[-1] = "hook"
0x879: Call2 0x8fa

0x87a: Pop(1)
0x87b: Push((int) 0)
0x87c: Push((int) 1)
0x87d: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x87e: Pop(3)
0x87f: GOTO 0x8a3

0x880: Push((int) 4)
0x881: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x882: IF (Stack[-1] == 0) GOTO 0x88c; Pop(1)

0x883: PushEmpty(int, string)
0x884: Stack[-1] = "syringe"
0x885: Call2 0x8fa

0x886: Pop(1)
0x887: Push((int) 0)
0x888: Push((int) 1)
0x889: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x88a: Pop(3)
0x88b: GOTO 0x8a3

0x88c: Push((int) 5)
0x88d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x88e: IF (Stack[-1] == 0) GOTO 0x898; Pop(1)

0x88f: PushEmpty(int, string)
0x890: Stack[-1] = "watch"
0x891: Call2 0x8fa

0x892: Pop(1)
0x893: Push((int) 0)
0x894: Push((int) 1)
0x895: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x896: Pop(3)
0x897: GOTO 0x8a3

0x898: Push((int) 6)
0x899: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x89a: IF (Stack[-1] == 0) GOTO 0x8a3; Pop(1)

0x89b: PushEmpty(int, string)
0x89c: Stack[-1] = "razor"
0x89d: Call2 0x8fa

0x89e: Pop(1)
0x89f: Push((int) 0)
0x8a0: Push((int) 1)
0x8a1: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x8a2: Pop(3)
0x8a3: GOTO 0x8f9

0x8a4: PushEmpty(int, int)
0x8a5: Stack[-2] = (int) 0
0x8a6: Push((int) 50)
0x8a7: PushEmpty(int)
0x8a8: Call2 0x7d9

0x8a9: Pop(0)
0x8aa: Push((int) 50)
0x8ab: Pop(2); Push(Stack[-2] * Stack[-1]);
0x8ac: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x8ad: Call2 0x803

0x8ae: Pop(2)
0x8af: Push((int) 7)
0x8b0: @ irand(Stack[-3], Stack[-1])
0x8b1: Pop(1)
0x8b2: Push((int) 0)
0x8b3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8b4: IF (Stack[-1] == 0) GOTO 0x8be; Pop(1)

0x8b5: PushEmpty(int, string)
0x8b6: Stack[-1] = "beads"
0x8b7: Call2 0x8fa

0x8b8: Pop(1)
0x8b9: Push((int) 0)
0x8ba: Push((int) 1)
0x8bb: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x8bc: Pop(3)
0x8bd: GOTO 0x8f9

0x8be: Push((int) 1)
0x8bf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8c0: IF (Stack[-1] == 0) GOTO 0x8ca; Pop(1)

0x8c1: PushEmpty(int, string)
0x8c2: Stack[-1] = "bracelet"
0x8c3: Call2 0x8fa

0x8c4: Pop(1)
0x8c5: Push((int) 0)
0x8c6: Push((int) 1)
0x8c7: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x8c8: Pop(3)
0x8c9: GOTO 0x8f9

0x8ca: Push((int) 2)
0x8cb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8cc: IF (Stack[-1] == 0) GOTO 0x8d6; Pop(1)

0x8cd: PushEmpty(int, string)
0x8ce: Stack[-1] = "ear_ring"
0x8cf: Call2 0x8fa

0x8d0: Pop(1)
0x8d1: Push((int) 0)
0x8d2: Push((int) 1)
0x8d3: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x8d4: Pop(3)
0x8d5: GOTO 0x8f9

0x8d6: Push((int) 3)
0x8d7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8d8: IF (Stack[-1] == 0) GOTO 0x8e2; Pop(1)

0x8d9: PushEmpty(int, string)
0x8da: Stack[-1] = "gold_ring"
0x8db: Call2 0x8fa

0x8dc: Pop(1)
0x8dd: Push((int) 0)
0x8de: Push((int) 1)
0x8df: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x8e0: Pop(3)
0x8e1: GOTO 0x8f9

0x8e2: Push((int) 4)
0x8e3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8e4: IF (Stack[-1] == 0) GOTO 0x8ee; Pop(1)

0x8e5: PushEmpty(int, string)
0x8e6: Stack[-1] = "silver_ring"
0x8e7: Call2 0x8fa

0x8e8: Pop(1)
0x8e9: Push((int) 0)
0x8ea: Push((int) 1)
0x8eb: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x8ec: Pop(3)
0x8ed: GOTO 0x8f9

0x8ee: Push((int) 5)
0x8ef: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8f0: IF (Stack[-1] == 0) GOTO 0x8f9; Pop(1)

0x8f1: PushEmpty(int, string)
0x8f2: Stack[-1] = "flower"
0x8f3: Call2 0x8fa

0x8f4: Pop(1)
0x8f5: Push((int) 0)
0x8f6: Push((int) 1)
0x8f7: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x8f8: Pop(3)
0x8f9: Return(); Pop(4)

0x8fa: PushEmpty(int, int)
0x8fb: @ GetInvItemByName(Stack[-1], Stack[-3])
0x8fc: Pop(0)
0x8fd: Stack[-4] = Stack[-1]
0x8fe: Return(); Pop(2)

0x8ff: PushEmpty()
0x900: PushEmpty(object)
0x901: Stack[-1] = Stack[-2]
0x902: Push(-1, 0); TaskCall(0)
0x903: Call2 0x0

0x904: Pop(-1, 0); TaskReturn
0x905: Pop(1)
0x906: Return(); Pop(0)

0x907: PushEmpty(float, float)
0x908: Push("health")
0x909: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x90a: IF (Stack[-1] == 0) GOTO 0x913; Pop(1)

0x90b: Push("health")
0x90c: @ GetProperty(Stack[-1], Stack[-2])
0x90d: Pop(1)
0x90e: Push((int) 0)
0x90f: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x910: IF (Stack[-1] == 0) GOTO 0x913; Pop(1)

0x911: @ SignalDeath(Stack[-4])
0x912: Pop(0)
0x913: Return(); Pop(2)

0x914: PushEmpty()
0x915: PushEmpty(object)
0x916: Stack[-1] = Stack[-2]
0x917: Call2 0x8ff

0x918: Pop(1)
0x919: Return(); Pop(0)

0x91a: PushEmpty()
0x91b: PushEmpty(object, int, float)
0x91c: Stack[-3] = Stack[-7]
0x91d: Stack[-2] = Stack[-6]
0x91e: Stack[-1] = Stack[-5]
0x91f: Call2 0x707

0x920: Pop(3)
0x921: Return(); Pop(0)

0x922: PushEmpty()
0x923: PushEmpty(object, int, float, cvector, cvector)
0x924: Stack[-5] = Stack[-11]
0x925: Stack[-4] = Stack[-10]
0x926: Stack[-3] = Stack[-9]
0x927: Stack[-2] = Stack[-7]
0x928: Stack[-1] = Stack[-6]
0x929: Call2 0x74b

0x92a: Pop(5)
0x92b: Return(); Pop(0)

0x92c: PushEmpty()
0x92d: Push("unholster")
0x92e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x92f: IF (Stack[-1] == 0) GOTO 0x937; Pop(1)

0x930: PushEmpty(bool, object)
0x931: Stack[-1] = Stack[-4]
0x932: Call2 0xa4f

0x933: Stack[-5] = Stack[-2]
0x934: Pop(2)
0x935: Return(); Pop(0)

0x936: GOTO 0x94a

0x937: Push("player_shot")
0x938: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x939: IF (Stack[-1] == 0) GOTO 0x941; Pop(1)

0x93a: PushEmpty(bool, object)
0x93b: Stack[-1] = Stack[-4]
0x93c: Call2 0xa54

0x93d: Stack[-5] = Stack[-2]
0x93e: Pop(2)
0x93f: Return(); Pop(0)

0x940: GOTO 0x94a

0x941: Push("battle")
0x942: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x943: IF (Stack[-1] == 0) GOTO 0x94a; Pop(1)

0x944: PushEmpty(bool, object)
0x945: Stack[-1] = Stack[-4]
0x946: Call2 0xa6b

0x947: Stack[-5] = Stack[-2]
0x948: Pop(2)
0x949: Return(); Pop(0)

0x94a: Stack[-3] = (bool) 0
0x94b: Return(); Pop(0)

0x94c: PushEmpty()
0x94d: Push("unholster")
0x94e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x94f: IF (Stack[-1] == 0) GOTO 0x955; Pop(1)

0x950: PushEmpty(object)
0x951: Stack[-1] = Stack[-3]
0x952: Call2 0xa52

0x953: Pop(1)
0x954: GOTO 0x964

0x955: Push("player_shot")
0x956: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x957: IF (Stack[-1] == 0) GOTO 0x95d; Pop(1)

0x958: PushEmpty(object)
0x959: Stack[-1] = Stack[-3]
0x95a: Call2 0xa63

0x95b: Pop(1)
0x95c: GOTO 0x964

0x95d: Push("battle")
0x95e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x95f: IF (Stack[-1] == 0) GOTO 0x964; Pop(1)

0x960: PushEmpty(object)
0x961: Stack[-1] = Stack[-3]
0x962: Call2 0xa72

0x963: Pop(1)
0x964: Return(); Pop(0)

0x965: PushEmpty(bool, bool)
0x966: PushEmpty(bool)
0x967: Stack[-1] = (bool) 0
0x968: PushEmpty(bool, object)
0x969: Stack[-1] = Stack[-6]
0x96a: Call2 0xa4f

0x96b: Pop(1)
0x96c: IF (Stack[-1] == 0) GOTO 0x973; Pop(1)

0x96d: PushEmpty(bool, object)
0x96e: Stack[-1] = Stack[-6]
0x96f: Call2 0x689

0x970: Pop(1)
0x971: IF (Stack[-1] == 0) GOTO 0x973; Pop(1)

0x972: Stack[-1] = (bool) 1
0x973: IF (Stack[-1] == 0) GOTO 0x97a; Pop(1)

0x974: @@ IsWeaponHolstered(Stack[-1])
0x975: Pop(0)
0x976: Pop(0); Push((bool) Stack[-1] == 0)
0x977: IF (Stack[-1] == 0) GOTO 0x97a; Pop(1)

0x978: Stack[-4] = (bool) 1
0x979: Return(); Pop(2)

0x97a: Stack[-4] = (bool) 0
0x97b: Return(); Pop(2)

0x97c: PushEmpty()
0x97d: PushEmpty(object)
0x97e: Stack[-1] = Stack[-2]
0x97f: Call2 0xa52

0x980: Pop(1)
0x981: Return(); Pop(0)

0x982: PushEmpty()
0x983: PushEmpty(bool, object)
0x984: Stack[-1] = Stack[-3]
0x985: Call2 0x689

0x986: Pop(1)
0x987: IF (Stack[-1] == 0) GOTO 0x98e; Pop(1)

0x988: PushEmpty(object)
0x989: Call2 0x79d

0x98a: Pop(0)
0x98b: Push((float)-0.05)
0x98c: @ ReportReputationChange(Stack[-3], Stack[-2], Stack[-1])
0x98d: Pop(2)
0x98e: Return(); Pop(0)

0x98f: PushEmpty(object, object)
0x990: Push("heal")
0x991: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x992: IF (Stack[-1] == 0) GOTO 0x99d; Pop(1)

0x993: Push("player")
0x994: @ FindActor(Stack[-2], Stack[-1])
0x995: Pop(1)
0x996: PushEmpty(bool, object)
0x997: Stack[-1] = Stack[-3]
0x998: Call2 0xa78

0x999: Stack[-6] = Stack[-2]
0x99a: Pop(2)
0x99b: Return(); Pop(2)

0x99c: Stack[-1] = 0
0x99d: Stack[-4] = (bool) 0
0x99e: Return(); Pop(2)

0x99f: PushEmpty(object, object)
0x9a0: Push("heal")
0x9a1: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x9a2: IF (Stack[-1] == 0) GOTO 0x9ab; Pop(1)

0x9a3: Push("player")
0x9a4: @ FindActor(Stack[-2], Stack[-1])
0x9a5: Pop(1)
0x9a6: PushEmpty(object)
0x9a7: Stack[-1] = Stack[-2]
0x9a8: Call2 0xa7b

0x9a9: Pop(1)
0x9aa: Stack[-1] = 0
0x9ab: Return(); Pop(2)

0x9ac: PushEmpty(string, string)
0x9ad: Stack[-1] = "idle"
0x9ae: Push(Stack[-3])
0x9af: IF (Stack[-1] == 0) GOTO 0x9b1; Pop(1)

0x9b0: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x9b1: Stack[-4] = Stack[-1]
0x9b2: Return(); Pop(2)

0x9b3: PushEmpty(int, bool, int, bool)
0x9b4: Stack[-2] = (int) 0
0x9b5: Push("all")
0x9b6: PushEmpty(string, int)
0x9b7: Stack[-1] = Stack[-5]
0x9b8: Call2 0x9ac

0x9b9: Pop(1)
0x9ba: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x9bb: Pop(2)
0x9bc: Pop(0); Push((bool) Stack[-1] == 0)
0x9bd: IF (Stack[-1] == 0) GOTO 0x9bf; Pop(1)

0x9be: GOTO 0x9c2

0x9bf: Push((int) 1)
0x9c0: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x9c1: GOTO 0x9b5

0x9c2: Stack[-5] = Stack[-2]
0x9c3: Return(); Pop(4)

0x9c4: PushEmpty()
0x9c5: PushEmpty(bool)
0x9c6: Call2 0xaa1

0x9c7: Pop(0)
0x9c8: IF (Stack[-1] == 0) GOTO 0x9cb; Pop(1)

0x9c9: Stack[-2] = (int) 2
0x9ca: GOTO 0x9cc

0x9cb: Stack[-2] = (int) 0
0x9cc: Return(); Pop(0)

0x9cd: PushEmpty()
0x9ce: PushEmpty(object)
0x9cf: Stack[-1] = Stack[-2]
0x9d0: Push(-1, 1); TaskCall(3)
0x9d1: Call2 0x307

0x9d2: Pop(-1, 1); TaskReturn
0x9d3: Pop(1)
0x9d4: Return(); Pop(0)

0x9d5: PushEmpty()
0x9d6: PushEmpty(bool, object)
0x9d7: Stack[-1] = Stack[-3]
0x9d8: Call2 0x6c3

0x9d9: Pop(1)
0x9da: IF (Stack[-1] == 0) GOTO 0x9dd; Pop(1)

0x9db: Stack[-2] = (int) 2
0x9dc: GOTO 0x9de

0x9dd: Stack[-2] = (int) 0
0x9de: Return(); Pop(0)

0x9df: PushEmpty()
0x9e0: PushEmpty(object)
0x9e1: Stack[-1] = Stack[-2]
0x9e2: Push(-1, 3); TaskCall(4)
0x9e3: Call2 0x41a

0x9e4: Pop(-1, 3); TaskReturn
0x9e5: Pop(1)
0x9e6: Return(); Pop(0)

0x9e7: PushEmpty()
0x9e8: PushEmpty(bool, object)
0x9e9: Stack[-1] = Stack[-4]
0x9ea: Call2 0x6c3

0x9eb: Pop(1)
0x9ec: IF (Stack[-1] == 0) GOTO 0x9ef; Pop(1)

0x9ed: Stack[-3] = (int) 2
0x9ee: GOTO 0x9f0

0x9ef: Stack[-3] = (int) 0
0x9f0: Return(); Pop(0)

0x9f1: PushEmpty()
0x9f2: PushEmpty(object)
0x9f3: Stack[-1] = Stack[-2]
0x9f4: Push(-1, 3); TaskCall(5)
0x9f5: Call2 0x516

0x9f6: Pop(-1, 3); TaskReturn
0x9f7: Pop(1)
0x9f8: Return(); Pop(0)

0x9f9: PushEmpty(string, bool, string, bool)
0x9fa: PushEmpty(bool, object, string)
0x9fb: Stack[-2] = Stack[-9]
0x9fc: Stack[-1] = "class"
0x9fd: Call2 0x68e

0x9fe: Pop(2)
0x9ff: Pop(1); Push((bool) Stack[-1] == 0)
0xa00: IF (Stack[-1] == 0) GOTO 0xa03; Pop(1)

0xa01: Stack[-8] = (bool) 0
0xa02: Return(); Pop(4)

0xa03: Push("class")
0xa04: @@ GetProperty(Stack[-1], Stack[-3])
0xa05: Pop(1)
0xa06: Push("rat")
0xa07: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa08: IF (Stack[-1] == 0) GOTO 0xa0c; Pop(1)

0xa09: Stack[-8] = (bool) 0
0xa0a: Return(); Pop(4)

0xa0b: GOTO 0xa17

0xa0c: Push("rat_big")
0xa0d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa0e: IF (Stack[-1] == 0) GOTO 0xa12; Pop(1)

0xa0f: Stack[-8] = (bool) 0
0xa10: Return(); Pop(4)

0xa11: GOTO 0xa17

0xa12: Push("dog")
0xa13: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa14: IF (Stack[-1] == 0) GOTO 0xa17; Pop(1)

0xa15: Stack[-8] = (bool) 0
0xa16: Return(); Pop(4)

0xa17: @ CanSee(Stack[-1], Stack[-7])
0xa18: Pop(0)
0xa19: PushEmpty(bool)
0xa1a: Stack[-1] = (bool) 1
0xa1b: Push(Stack[-2])
0xa1c: IF (Stack[-1] == 0) GOTO 0xa25; Pop(1)

0xa1d: PushEmpty(float, object)
0xa1e: Stack[-1] = Stack[-10]
0xa1f: Call2 0x681

0xa20: Pop(1)
0xa21: Pop(0); Push(Stack[-7] * Stack[-7]);
0xa22: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0xa23: IF (Stack[-1] == 0) GOTO 0xa25; Pop(1)

0xa24: Stack[-1] = (bool) 0
0xa25: IF (Stack[-1] == 0) GOTO 0xa28; Pop(1)

0xa26: Stack[-8] = (bool) 1
0xa27: Return(); Pop(4)

0xa28: @ CanSee(Stack[-1], Stack[-6])
0xa29: Pop(0)
0xa2a: PushEmpty(bool)
0xa2b: Stack[-1] = (bool) 1
0xa2c: Push(Stack[-2])
0xa2d: IF (Stack[-1] == 0) GOTO 0xa36; Pop(1)

0xa2e: PushEmpty(float, object)
0xa2f: Stack[-1] = Stack[-9]
0xa30: Call2 0x681

0xa31: Pop(1)
0xa32: Pop(0); Push(Stack[-7] * Stack[-7]);
0xa33: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0xa34: IF (Stack[-1] == 0) GOTO 0xa36; Pop(1)

0xa35: Stack[-1] = (bool) 0
0xa36: IF (Stack[-1] == 0) GOTO 0xa39; Pop(1)

0xa37: Stack[-8] = (bool) 1
0xa38: Return(); Pop(4)

0xa39: Stack[-8] = (bool) 0
0xa3a: Return(); Pop(4)

0xa3b: PushEmpty()
0xa3c: Stack[-2] = (int) 0
0xa3d: Return(); Pop(0)

0xa3e: PushEmpty()
0xa3f: Return(); Pop(0)

0xa40: PushEmpty()
0xa41: Stack[-3] = (int) 0
0xa42: Return(); Pop(0)

0xa43: PushEmpty()
0xa44: Return(); Pop(0)

0xa45: PushEmpty()
0xa46: Stack[-2] = (int) 2
0xa47: Return(); Pop(0)

0xa48: PushEmpty()
0xa49: PushEmpty(object)
0xa4a: Stack[-1] = Stack[-2]
0xa4b: Call2 0xa90

0xa4c: Pop(1)
0xa4d: Return(); Pop(0)

0xa4e: Return(); Pop(0)

0xa4f: PushEmpty()
0xa50: Stack[-2] = (bool) 0
0xa51: Return(); Pop(0)

0xa52: PushEmpty()
0xa53: Return(); Pop(0)

0xa54: PushEmpty(bool, bool)
0xa55: @ CanSee(Stack[-1], Stack[-3])
0xa56: Pop(0)
0xa57: Stack[-4] = (bool) 1
0xa58: Push(Stack[-1])
0xa59: IF (Stack[-1] == 0) GOTO 0xa62; Pop(1)

0xa5a: PushEmpty(float, object)
0xa5b: Stack[-1] = Stack[-5]
0xa5c: Call2 0x681

0xa5d: Pop(1)
0xa5e: Push((int) 4000000)
0xa5f: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0xa60: IF (Stack[-1] == 0) GOTO 0xa62; Pop(1)

0xa61: Stack[-4] = (bool) 0
0xa62: Return(); Pop(2)

0xa63: PushEmpty()
0xa64: PushEmpty(object)
0xa65: Stack[-1] = Stack[-2]
0xa66: Push(-1, 3); TaskCall(6)
0xa67: Call2 0x5d8

0xa68: Pop(-1, 3); TaskReturn
0xa69: Pop(1)
0xa6a: Return(); Pop(0)

0xa6b: PushEmpty()
0xa6c: PushEmpty(bool, object)
0xa6d: Stack[-1] = Stack[-3]
0xa6e: Call2 0xa54

0xa6f: Stack[-4] = Stack[-2]
0xa70: Pop(2)
0xa71: Return(); Pop(0)

0xa72: PushEmpty()
0xa73: PushEmpty(object)
0xa74: Stack[-1] = Stack[-2]
0xa75: Call2 0xa63

0xa76: Pop(1)
0xa77: Return(); Pop(0)

0xa78: PushEmpty()
0xa79: Stack[-2] = (bool) 0
0xa7a: Return(); Pop(0)

0xa7b: PushEmpty()
0xa7c: Return(); Pop(0)

0xa7d: PushEmpty(object, object)
0xa7e: @ GetActiveScene(Stack[-1])
0xa7f: Pop(0)
0xa80: Push("killme")
0xa81: PushEmpty(object)
0xa82: Call2 0x79d

0xa83: Pop(0)
0xa84: @ BroadcastMessage(Stack[-2], Stack[-1], Stack[-3])
0xa85: Pop(2)
0xa86: Return(); Pop(2)

0xa87: Stack[-1] = 0
0xa88: Push(GlobalVars[0])
0xa89: Stack[-1] = (bool) 0
0xa8a: GlobalVars[0] = Stack[-1]; Pop(1)
0xa8b: PushEmpty(bool)
0xa8c: Stack[-1] = (bool) 0
0xa8d: Call2 0x84b

0xa8e: Pop(1)
0xa8f: Return(); Pop(0)

0xa90: PushEmpty(bool, bool)
0xa91: Push(GlobalVars[0])
0xa92: IF (Stack[-1] == 0) GOTO 0xa9d; Pop(1)

0xa93: @ IsOverrideActive(Stack[-1])
0xa94: Pop(0)
0xa95: Pop(0); Push((bool) Stack[-1] == 0)
0xa96: IF (Stack[-1] == 0) GOTO 0xa9b; Pop(1)

0xa97: PushEmpty(object)
0xa98: Stack[-1] = Stack[-4]
0xa99: Call2 0x7f6

0xa9a: Pop(1)
0xa9b: Return(); Pop(2)

0xa9c: GOTO 0xaa0

0xa9d: PushEmpty()
0xa9e: Call2 0xa7d

0xa9f: Pop(0)
0xaa0: Return(); Pop(2)

0xaa1: PushEmpty()
0xaa2: Call2 0xa7d

0xaa3: Pop(0)
0xaa4: PushEmpty(float)
0xaa5: Call2 0x7e8

0xaa6: Pop(0)
0xaa7: Push((float)0.7)
0xaa8: Stack[-3] = Stack[-2] > Stack[-1]; Pop(2);
0xaa9: Return(); Pop(0)

0xaaa: PushEmpty()
0xaab: PushEmpty(bool, object, object, float)
0xaac: Stack[-3] = Stack[-7]
0xaad: Stack[-2] = Stack[-6]
0xaae: Stack[-1] = (float) 500.0
0xaaf: Call2 0x9f9

0xab0: Stack[-8] = Stack[-4]
0xab1: Pop(4)
0xab2: Return(); Pop(0)

0xab3: PushEmpty()
0xab4: PushEmpty(bool, object)
0xab5: Stack[-1] = Stack[-3]
0xab6: Call2 0x689

0xab7: Pop(1)
0xab8: IF (Stack[-1] == 0) GOTO 0xac4; Pop(1)

0xab9: PushEmpty(object)
0xaba: Call2 0x79d

0xabb: Pop(0)
0xabc: Push((float)-0.1)
0xabd: Push((bool) 1)
0xabe: @ ReportReputationChange(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xabf: Pop(3)
0xac0: PushEmpty(bool)
0xac1: Stack[-1] = (bool) 0
0xac2: Call2 0x84b

0xac3: Pop(1)
0xac4: PushEmpty()
0xac5: Call2 0x833

0xac6: Pop(0)
0xac7: Push(GlobalVars[0])
0xac8: Stack[-1] = (bool) 1
0xac9: GlobalVars[0] = Stack[-1]; Pop(1)
0xaca: Push((int) 50)
0xacb: Push((int) 40)
0xacc: @ SetRTEnvelope(Stack[-2], Stack[-1])
0xacd: Pop(2)
0xace: Return(); Pop(0)

