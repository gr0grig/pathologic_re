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
	battle
	unholster
	player_shot
	IsWeaponHolstered
	heal
	player
	branch
	GenerateMoney: iMin > iMax
	Money
	SetItemName
	Organ
	GetItemID
	liver
	kidney
	heart
	blood
	tourniquet
	bandage
	bottle_empty
	tvirin
	idle
	class
	guard

Import:
	Hold (0 args)
	StopGroup0 (0 args)
	sync (0 args)
	SensePlayerOnly (1 args)
	GetPFPosition (1 args)
	GetDirection (1 args)
	irand (2 args)
	Sleep (2 args)
	FindPathTo (2 args)
	RotatePath (2 args)
	FollowPath (3 args)
	Rotate (3 args)
	WaitForAnimEnd (1 args)
	Sleep (1 args)
	Stop (0 args)
	GetPosition (1 args)
	RemoveRTEnvelope (0 args)
	SetDeathState (0 args)
	StopAsync (0 args)
	LookAsync (3 args)
	PlayAnimation (2 args)
	WaitForAnimEnd (0 args)
	UnlookAsync (1 args)
	LockAnimationEnd (2 args)
	RemoveEnvelope (0 args)
	StopSecondaryAnimation (0 args)
	IsPlayerActor (2 args)
	PlayGlobalMusic (1 args)
	SendPlayerEnemy (2 args)
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
	GetScene (1 args)
	FindDirLength (3 args)
	Speak (1 args)
	SetTimer (2 args)
	CanSee (2 args)
	KillTimer (1 args)
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
	AddItem (3 args)
	Is3DSoundLoaded (2 args)
	GetEyesHeight (1 args)
	PlayGlobalSound (2 args)
	self (1 args)
	CreateFloatVector (1 args)
	RumblePlay (2 args)
	SendWorldWndMessage (2 args)
	GetGameTime (1 args)
	BroadcastMessage (3 args)
	ReportReputationChange (3 args)
	FindActor (2 args)
	GetVariable (2 args)
	WorkWithCorpse (1 args)
	Barter (1 args)
	Trace (1 args)
	AddItem (4 args)
	CreateInvItem (1 args)
	ClearSubContainer (1 args)
	GetInvItemByName (2 args)
	GetProperty (2 args)
	SignalDeath (1 args)
	StopAnimation (0 args)
	SetRTEnvelope (2 args)
	ReportReputationChange (4 args)

RunOp = 0xd
RunTask = 1

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_5 Op = 0x8 Vars = ()
	GTASK_1 Vars = (cvector, cvector, bool) Params = 0
		EVENT_0 Op = 0x25 Vars = (object)
		EVENT_17 Op = 0x39 Vars = (object)
		EVENT_30 Op = 0x51 Vars = (object, object, bool)
		EVENT_40 Op = 0x6d Vars = (object)
		EVENT_42 Op = 0x81 Vars = (object, string)
		EVENT_26 Op = 0xa6 Vars = (string)
		EVENT_6 Op = 0xb4 Vars = ()
		EVENT_41 Op = 0xc5 Vars = (object)
		EVENT_1 Op = 0xce Vars = (object)
	GTASK_2  Params = 1
		EVENT_0 Op = 0x14b Vars = (object)
		EVENT_6 Op = 0x159 Vars = ()
		EVENT_22 Op = 0x1d2 Vars = (object, int, float, float)
		EVENT_16 Op = 0x1d4 Vars = (object, string)
		EVENT_41 Op = 0x1d6 Vars = (object)
	GTASK_3 Vars = (object, int, int, bool, float, int) Params = 1
	GTASK_4 Vars = (bool, object, bool) Params = 6
		EVENT_6 Op = 0x47c Vars = ()
		EVENT_7 Op = 0x4b4 Vars = (int)
		EVENT_1 Op = 0x4cf Vars = (object)
		EVENT_2 Op = 0x4de Vars = (object)
		EVENT_10 Op = 0x564 Vars = (object)
		EVENT_41 Op = 0x56f Vars = (object)

Events:
EVENT_16 Op = 0x871 Vars = (object, string)
EVENT_41 Op = 0x87e Vars = (object)
EVENT_22 Op = 0x884 Vars = (object, int, float, float)
EVENT_43 Op = 0x88c Vars = (object, int, float, float, cvector, cvector)

0x0: @ Hold()
0x1: Pop(0)
0x2: PushEmpty(bool)
0x3: Call2 0x6c4

0x4: Pop(0)
0x5: Pop(1); Push((bool) Stack[-1] == 0)
0x6: IF (Stack[-1] == 0) GOTO 0x0; Pop(1)

0x7: Return(); Pop(0)

0x8: @ StopGroup0()
0x9: Pop(0)
0xa: @ sync()
0xb: Pop(0)
0xc: Return(); Pop(0)

0xd: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0xe: Push((bool) 1)
0xf: @ SensePlayerOnly(Stack[-1])
0x10: Pop(1)
0x11: PushEmpty()
0x12: Call2 0x929

0x13: Pop(0)
0x14: PushEmpty()
0x15: Call2 0x1c

0x16: Pop(0)
0x17: PushEmpty()
0x18: Call2 0xe2

0x19: Pop(0)
0x1a: GOTO 0x17

0x1b: Return(); Pop(0)

0x1c: PushEmpty(bool)
0x1d: Call2 0x6c4

0x1e: Pop(0)
0x1f: Pop(1); Push((bool) Stack[-1] == 0)
0x20: IF (Stack[-1] == 0) GOTO 0x24; Pop(1)

0x21: PushEmpty()
0x22: Call2 0x8fc

0x23: Pop(0)
0x24: Return(); Pop(0)

0x25: PushEmpty(int, int)
0x26: PushEmpty(int, object)
0x27: Stack[-1] = Stack[-5]
0x28: Call2 0x902

0x29: Stack[-3] = Stack[-2]
0x2a: Pop(2)
0x2b: Push((int) 0)
0x2c: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x2d: IF (Stack[-1] == 0) GOTO 0x38; Pop(1)

0x2e: Push((int) 1)
0x2f: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x30: IF (Stack[-1] == 0) GOTO 0x34; Pop(1)

0x31: PushEmpty()
0x32: Call2 0xbb

0x33: Pop(0)
0x34: PushEmpty(object)
0x35: Stack[-1] = Stack[-4]
0x36: Call2 0x905

0x37: Pop(1)
0x38: Return(); Pop(2)

0x39: PushEmpty(int, int)
0x3a: PushEmpty(object)
0x3b: Stack[-1] = Stack[-4]
0x3c: Call2 0x7b7

0x3d: Pop(1)
0x3e: PushEmpty(int, object)
0x3f: Stack[-1] = Stack[-5]
0x40: Call2 0x8dd

0x41: Stack[-3] = Stack[-2]
0x42: Pop(2)
0x43: Push((int) 0)
0x44: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x45: IF (Stack[-1] == 0) GOTO 0x50; Pop(1)

0x46: Push((int) 1)
0x47: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x48: IF (Stack[-1] == 0) GOTO 0x4c; Pop(1)

0x49: PushEmpty()
0x4a: Call2 0xbb

0x4b: Pop(0)
0x4c: PushEmpty(object)
0x4d: Stack[-1] = Stack[-4]
0x4e: Call2 0x8e7

0x4f: Pop(1)
0x50: Return(); Pop(2)

0x51: PushEmpty(int, int)
0x52: PushEmpty(bool, object, object, bool)
0x53: Stack[-3] = Stack[-9]
0x54: Stack[-2] = Stack[-8]
0x55: Stack[-1] = Stack[-7]
0x56: Call2 0x936

0x57: Pop(3)
0x58: IF (Stack[-1] == 0) GOTO 0x6c; Pop(1)

0x59: PushEmpty(int, object, bool)
0x5a: Stack[-2] = Stack[-8]
0x5b: Stack[-1] = Stack[-6]
0x5c: Call2 0x8ef

0x5d: Stack[-4] = Stack[-3]
0x5e: Pop(3)
0x5f: Push((int) 0)
0x60: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x61: IF (Stack[-1] == 0) GOTO 0x6c; Pop(1)

0x62: Push((int) 1)
0x63: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x64: IF (Stack[-1] == 0) GOTO 0x68; Pop(1)

0x65: PushEmpty()
0x66: Call2 0xbb

0x67: Pop(0)
0x68: PushEmpty(object)
0x69: Stack[-1] = Stack[-6]
0x6a: Call2 0x8f6

0x6b: Pop(1)
0x6c: Return(); Pop(2)

0x6d: PushEmpty(int, int)
0x6e: PushEmpty(int, object)
0x6f: Stack[-1] = Stack[-5]
0x70: Call2 0x90b

0x71: Stack[-3] = Stack[-2]
0x72: Pop(2)
0x73: Push((int) 0)
0x74: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x75: IF (Stack[-1] == 0) GOTO 0x80; Pop(1)

0x76: Push((int) 1)
0x77: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x78: IF (Stack[-1] == 0) GOTO 0x7c; Pop(1)

0x79: PushEmpty()
0x7a: Call2 0xbb

0x7b: Pop(0)
0x7c: PushEmpty(object)
0x7d: Stack[-1] = Stack[-4]
0x7e: Call2 0x90e

0x7f: Pop(1)
0x80: Return(); Pop(2)

0x81: PushEmpty(int, int)
0x82: PushEmpty(bool, object, string)
0x83: Stack[-2] = Stack[-7]
0x84: Stack[-1] = Stack[-6]
0x85: Call2 0x761

0x86: Pop(2)
0x87: IF (Stack[-1] == 0) GOTO 0x91; Pop(1)

0x88: PushEmpty()
0x89: Call2 0xbb

0x8a: Pop(0)
0x8b: PushEmpty(object, string)
0x8c: Stack[-2] = Stack[-6]
0x8d: Stack[-1] = Stack[-5]
0x8e: Call2 0x781

0x8f: Pop(2)
0x90: GOTO 0xa5

0x91: PushEmpty(int, string, object)
0x92: Stack[-2] = Stack[-6]
0x93: Stack[-1] = Stack[-7]
0x94: Call2 0x910

0x95: Stack[-4] = Stack[-3]
0x96: Pop(3)
0x97: Push((int) 0)
0x98: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x99: IF (Stack[-1] == 0) GOTO 0xa5; Pop(1)

0x9a: Push((int) 1)
0x9b: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x9c: IF (Stack[-1] == 0) GOTO 0xa0; Pop(1)

0x9d: PushEmpty()
0x9e: Call2 0xbb

0x9f: Pop(0)
0xa0: PushEmpty(string, object)
0xa1: Stack[-2] = Stack[-5]
0xa2: Stack[-1] = Stack[-6]
0xa3: Call2 0x913

0xa4: Pop(2)
0xa5: Return(); Pop(2)

0xa6: PushEmpty()
0xa7: PushEmpty(bool, string)
0xa8: Stack[-1] = Stack[-3]
0xa9: Call2 0x7c4

0xaa: Pop(1)
0xab: IF (Stack[-1] == 0) GOTO 0xb3; Pop(1)

0xac: PushEmpty()
0xad: Call2 0xbb

0xae: Pop(0)
0xaf: PushEmpty(string)
0xb0: Stack[-1] = Stack[-2]
0xb1: Call2 0x7d4

0xb2: Pop(1)
0xb3: Return(); Pop(0)

0xb4: PushEmpty()
0xb5: Call2 0xbb

0xb6: Pop(0)
0xb7: PushEmpty()
0xb8: Call2 0x8fc

0xb9: Pop(0)
0xba: Return(); Pop(0)

0xbb: Push( Stack[2 + Tasks[-1].StackPointer] )
0xbc: IF (Stack[-1] == 0) GOTO 0xc1; Pop(1)

0xbd: PushEmpty()
0xbe: Call2 0x8ae

0xbf: Pop(0)
0xc0: GOTO 0xc4

0xc1: PushEmpty()
0xc2: Call2 0x136

0xc3: Pop(0)
0xc4: Return(); Pop(0)

0xc5: PushEmpty()
0xc6: PushEmpty()
0xc7: Call2 0xbb

0xc8: Pop(0)
0xc9: PushEmpty(object)
0xca: Stack[-1] = Stack[-2]
0xcb: Call2 0x87e

0xcc: Pop(1)
0xcd: Return(); Pop(0)

0xce: PushEmpty()
0xcf: PushEmpty(bool, object)
0xd0: Stack[-1] = Stack[-3]
0xd1: Call2 0x79a

0xd2: Pop(1)
0xd3: IF (Stack[-1] == 0) GOTO 0xdb; Pop(1)

0xd4: PushEmpty()
0xd5: Call2 0xbb

0xd6: Pop(0)
0xd7: PushEmpty(object)
0xd8: Stack[-1] = Stack[-2]
0xd9: Call2 0x7b1

0xda: Pop(1)
0xdb: Return(); Pop(0)

0xdc: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0xdd: PushEmpty()
0xde: Call2 0x8b4

0xdf: Pop(0)
0xe0: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0xe1: Return(); Pop(0)

0xe2: PushEmpty(int, bool, cvector, object, int, bool, cvector, object)
0xe3: @ GetPFPosition(Stack[-1])
0xe4: Pop(0)
0xe5: @ GetDirection(Stack[-0])
0xe6: Pop(0)
0xe7: PushEmpty()
0xe8: Call2 0x13b

0xe9: Pop(0)
0xea: Push((int) 10)
0xeb: @ irand(Stack[-5], Stack[-1])
0xec: Pop(1)
0xed: Push((int) 5)
0xee: Pop(1); Push(Stack[-5] + Stack[-1]);
0xef: @ Sleep(Stack[-1], Stack[-4])
0xf0: Pop(1)
0xf1: Push(Stack[-3])
0xf2: IF (Stack[-1] == 0) GOTO 0xf7; Pop(1)

0xf3: PushEmpty()
0xf4: Call2 0xdc

0xf5: Pop(0)
0xf6: GOTO 0x134

0xf7: PushEmpty()
0xf8: Call2 0x13b

0xf9: Pop(0)
0xfa: @ GetPFPosition(Stack[-2])
0xfb: Pop(0)
0xfc: PushEmpty(float, cvector, cvector)
0xfd: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xfe: Stack[-1] = Stack[-5]
0xff: Call2 0x718

0x100: Pop(2)
0x101: Push((int) 40000)
0x102: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x103: IF (Stack[-1] == 0) GOTO 0x126; Pop(1)

0x104: @ FindPathTo(Stack[-1], Stack[-1])
0x105: Pop(0)
0x106: Pop(0); Push(( Stack[-1] != 0 )
0x107: IF (Stack[-1] == 0) GOTO 0x121; Pop(1)

0x108: @ RotatePath(Stack[-1], Stack[-3])
0x109: Pop(0)
0x10a: Pop(0); Push((bool) Stack[-3] == 0)
0x10b: IF (Stack[-1] == 0) GOTO 0x10d; Pop(1)

0x10c: GOTO 0x133

0x10d: Push((bool) 0)
0x10e: @ FollowPath(Stack[-2], Stack[-1], Stack[-4])
0x10f: Pop(1)
0x110: Pop(0); Push((bool) Stack[-3] == 0)
0x111: IF (Stack[-1] == 0) GOTO 0x113; Pop(1)

0x112: GOTO 0x133

0x113: Push(CvectorIndex(Stack[-0], 0))
0x114: Push(CvectorIndex(Stack[-0], 2))
0x115: @ Rotate(Stack[-2], Stack[-1], Stack[-5])
0x116: Pop(2)
0x117: Pop(0); Push((bool) Stack[-3] == 0)
0x118: IF (Stack[-1] == 0) GOTO 0x11a; Pop(1)

0x119: GOTO 0x133

0x11a: @ WaitForAnimEnd(Stack[-3])
0x11b: Pop(0)
0x11c: Pop(0); Push((bool) Stack[-3] == 0)
0x11d: IF (Stack[-1] == 0) GOTO 0x11f; Pop(1)

0x11e: GOTO 0x133

0x11f: GOTO 0x134

0x120: GOTO 0x124

0x121: Push((int) 1)
0x122: @ Sleep(Stack[-1])
0x123: Pop(1)
0x124: Stack[-1] = 0
0x125: GOTO 0x133

0x126: Push(CvectorIndex(Stack[-0], 0))
0x127: Push(CvectorIndex(Stack[-0], 2))
0x128: @ Rotate(Stack[-2], Stack[-1], Stack[-5])
0x129: Pop(2)
0x12a: Pop(0); Push((bool) Stack[-3] == 0)
0x12b: IF (Stack[-1] == 0) GOTO 0x12d; Pop(1)

0x12c: GOTO 0x133

0x12d: @ WaitForAnimEnd(Stack[-3])
0x12e: Pop(0)
0x12f: Pop(0); Push((bool) Stack[-3] == 0)
0x130: IF (Stack[-1] == 0) GOTO 0x132; Pop(1)

0x131: GOTO 0x133

0x132: GOTO 0x134

0x133: GOTO 0xf7

0x134: GOTO 0xe7

0x135: Return(); Pop(8)

0x136: @ StopGroup0()
0x137: Pop(0)
0x138: @ Stop()
0x139: Pop(0)
0x13a: Return(); Pop(0)

0x13b: Return(); Pop(0)

0x13c: PushEmpty()
0x13d: EventDisable(0)
0x13e: PushEmpty(object)
0x13f: Stack[-1] = Stack[-2]
0x140: Call2 0x15d

0x141: Pop(1)
0x142: PushEmpty(object)
0x143: Stack[-1] = Stack[-2]
0x144: Call2 0x95b

0x145: Pop(1)
0x146: EventEnable(0)
0x147: @ Hold()
0x148: Pop(0)
0x149: GOTO 0x147

0x14a: Return(); Pop(0)

0x14b: PushEmpty(int, int)
0x14c: PushEmpty(int, object)
0x14d: Stack[-1] = Stack[-5]
0x14e: Call2 0x902

0x14f: Stack[-3] = Stack[-2]
0x150: Pop(2)
0x151: Push((int) 0)
0x152: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x153: IF (Stack[-1] == 0) GOTO 0x158; Pop(1)

0x154: PushEmpty(object)
0x155: Stack[-1] = Stack[-4]
0x156: Call2 0x905

0x157: Pop(1)
0x158: Return(); Pop(2)

0x159: PushEmpty()
0x15a: Call2 0x8fc

0x15b: Pop(0)
0x15c: Return(); Pop(0)

0x15d: PushEmpty(cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector, cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector)
0x15e: Pop(0); Push((bool) Stack[-21] == 0)
0x15f: IF (Stack[-1] == 0) GOTO 0x165; Pop(1)

0x160: PushEmpty(string)
0x161: Stack[-1] = "fdie"
0x162: Call2 0x1b8

0x163: Pop(1)
0x164: GOTO 0x1b7

0x165: @@ GetPosition(Stack[-10])
0x166: Pop(0)
0x167: @ GetPosition(Stack[-9])
0x168: Pop(0)
0x169: @ GetDirection(Stack[-8])
0x16a: Pop(0)
0x16b: Stack[-7] = Stack[-9] - Stack[-10]; Pop(0);
0x16c: Push(CvectorIndex(Stack[-7], 0))
0x16d: Push(CvectorIndex(Stack[-9], 0))
0x16e: Pop(2); Push(Stack[-2] * Stack[-1]);
0x16f: Push(CvectorIndex(Stack[-8], 2))
0x170: Push(CvectorIndex(Stack[-10], 2))
0x171: Pop(2); Push(Stack[-2] * Stack[-1]);
0x172: Pop(2); Push(Stack[-2] + Stack[-1]);
0x173: Push((int) 0)
0x174: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x175: IF (Stack[-1] == 0) GOTO 0x178; Pop(1)

0x176: Stack[-6] = "fdie"
0x177: GOTO 0x179

0x178: Stack[-6] = "bdie"
0x179: @ RemoveRTEnvelope()
0x17a: Pop(0)
0x17b: @ SetDeathState()
0x17c: Pop(0)
0x17d: @ Stop()
0x17e: Pop(0)
0x17f: @ StopAsync()
0x180: Pop(0)
0x181: Stack[-5] = Stack[-21]
0x182: Push("GetScriptProperty")
0x183: Push((int) 2)
0x184: Pop(2); Push(IsFuncExist(Stack[-23], Stack[-2], Stack[-1]))
0x185: IF (Stack[-1] == 0) GOTO 0x191; Pop(1)

0x186: Push("Owner")
0x187: @@ HasScriptProperty(Stack[-5], Stack[-1])
0x188: Pop(1)
0x189: Push(Stack[-4])
0x18a: IF (Stack[-1] == 0) GOTO 0x191; Pop(1)

0x18b: Push("Owner")
0x18c: @@ GetScriptProperty(Stack[-6], Stack[-1])
0x18d: Pop(1)
0x18e: Pop(0); Push((bool) Stack[-5] == 0)
0x18f: IF (Stack[-1] == 0) GOTO 0x191; Pop(1)

0x190: Stack[-5] = Stack[-21]
0x191: Push("@GetEyesHeight")
0x192: Push((int) 1)
0x193: Pop(2); Push(IsFuncExist(Stack[-7], Stack[-2], Stack[-1]))
0x194: IF (Stack[-1] == 0) GOTO 0x1a0; Pop(1)

0x195: @@ GetEyesHeight(Stack[-2])
0x196: Pop(0)
0x197: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x198: Push(CvectorIndex(Stack[-1], 1))
0x199: Stack[-1] = Stack[-3]
0x19a: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x19b: Push("head")
0x19c: @ LookAsync(Stack[-22], Stack[-1], Stack[-2])
0x19d: Pop(1)
0x19e: Stack[-3] = (bool) 1
0x19f: GOTO 0x1a1

0x1a0: Stack[-3] = (bool) 0
0x1a1: PushEmpty(string)
0x1a2: Stack[-1] = Stack[-7]
0x1a3: Call2 0x6df

0x1a4: Pop(1)
0x1a5: Push("all")
0x1a6: @ PlayAnimation(Stack[-1], Stack[-7])
0x1a7: Pop(1)
0x1a8: @ WaitForAnimEnd()
0x1a9: Pop(0)
0x1aa: Push(Stack[-3])
0x1ab: IF (Stack[-1] == 0) GOTO 0x1b1; Pop(1)

0x1ac: @ StopAsync()
0x1ad: Pop(0)
0x1ae: Push("head")
0x1af: @ UnlookAsync(Stack[-1])
0x1b0: Pop(1)
0x1b1: Push("all")
0x1b2: @ LockAnimationEnd(Stack[-1], Stack[-7])
0x1b3: Pop(1)
0x1b4: @ RemoveEnvelope()
0x1b5: Pop(0)
0x1b6: Stack[-5] = 0
0x1b7: Return(); Pop(20)

0x1b8: PushEmpty()
0x1b9: @ RemoveRTEnvelope()
0x1ba: Pop(0)
0x1bb: @ SetDeathState()
0x1bc: Pop(0)
0x1bd: @ Stop()
0x1be: Pop(0)
0x1bf: @ StopAsync()
0x1c0: Pop(0)
0x1c1: @ StopSecondaryAnimation()
0x1c2: Pop(0)
0x1c3: PushEmpty(string)
0x1c4: Stack[-1] = Stack[-2]
0x1c5: Call2 0x6df

0x1c6: Pop(1)
0x1c7: Push("all")
0x1c8: @ PlayAnimation(Stack[-1], Stack[-2])
0x1c9: Pop(1)
0x1ca: @ WaitForAnimEnd()
0x1cb: Pop(0)
0x1cc: Push("all")
0x1cd: @ LockAnimationEnd(Stack[-1], Stack[-2])
0x1ce: Pop(1)
0x1cf: @ RemoveEnvelope()
0x1d0: Pop(0)
0x1d1: Return(); Pop(0)

0x1d2: PushEmpty()
0x1d3: Return(); Pop(0)

0x1d4: PushEmpty()
0x1d5: Return(); Pop(0)

0x1d6: PushEmpty()
0x1d7: Return(); Pop(0)

0x1d8: PushEmpty()
0x1d9: PushEmpty(object, bool, float)
0x1da: Stack[-3] = Stack[-4]
0x1db: Stack[-2] = (bool) 1
0x1dc: Stack[-1] = (float) 180.0
0x1dd: Call2 0x1e6

0x1de: Pop(3)
0x1df: Return(); Pop(0)

0x1e0: PushEmpty()
0x1e1: Stack[-3] = (float) 0.05
0x1e2: Return(); Pop(0)

0x1e3: PushEmpty()
0x1e4: Stack[-3] = (int) 0
0x1e5: Return(); Pop(0)

0x1e6: PushEmpty(float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float, float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float)
0x1e7: PushEmpty()
0x1e8: Call2 0x2cb

0x1e9: Pop(0)
0x1ea: Stack[5 + Tasks[-1].StackPointer] = (int)0
0x1eb: Push("@GetAttackDistance")
0x1ec: Push((int) 1)
0x1ed: Pop(2); Push(IsFuncExist(Stack[-27], Stack[-2], Stack[-1]))
0x1ee: IF (Stack[-1] == 0) GOTO 0x1f4; Pop(1)

0x1ef: @@ GetAttackDistance(Stack[-11])
0x1f0: Pop(0)
0x1f1: Push((int) 50)
0x1f2: Stack[-12] = Stack[-12] + Stack[-1]; Pop(1);
0x1f3: GOTO 0x1f5

0x1f4: Stack[-11] = Stack[-23]
0x1f5: Push((int) 150)
0x1f6: Pop(1); Push((bool) Stack[-12] >= Stack[-1])
0x1f7: IF (Stack[-1] == 0) GOTO 0x1f9; Pop(1)

0x1f8: Stack[-11] = (int) 150
0x1f9: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x1fa: Stack[0 + Tasks[-1].StackPointer] = Stack[-25]
0x1fb: @ IsPlayerActor(Stack[-0], Stack[-8])
0x1fc: Pop(0)
0x1fd: Push(Stack[-8])
0x1fe: IF (Stack[-1] == 0) GOTO 0x207; Pop(1)

0x1ff: Push("attack")
0x200: @ PlayGlobalMusic(Stack[-1])
0x201: Pop(1)
0x202: PushEmpty(object)
0x203: Call2 0x708

0x204: Pop(0)
0x205: @ SendPlayerEnemy(Stack[-26], Stack[-1])
0x206: Pop(1)
0x207: Push(Stack[-24])
0x208: IF (Stack[-1] == 0) GOTO 0x20b; Pop(1)

0x209: Stack[-7] = (bool) 0
0x20a: GOTO 0x20c

0x20b: Stack[-7] = (bool) 1
0x20c: Push((float)400.0)
0x20d: Stack[-7] = Stack[-1] + Stack[-12]; Pop(1);
0x20e: PushEmpty(bool)
0x20f: Stack[-1] = (bool) 0
0x210: PushEmpty(bool, object)
0x211: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x212: Call2 0x623

0x213: Pop(1)
0x214: IF (Stack[-1] == 0) GOTO 0x218; Pop(1)

0x215: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x216: IF (Stack[-1] == 0) GOTO 0x218; Pop(1)

0x217: Stack[-1] = (bool) 1
0x218: IF (Stack[-1] == 0) GOTO 0x2ba; Pop(1)

0x219: PushEmpty()
0x21a: Call2 0x468

0x21b: Pop(0)
0x21c: @@ GetPFPosition(Stack[-10])
0x21d: Pop(0)
0x21e: @ GetPFPosition(Stack[-9])
0x21f: Pop(0)
0x220: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0x221: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x222: Pop(0); Push(Stack[-6] * Stack[-6]);
0x223: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0x224: IF (Stack[-1] == 0) GOTO 0x234; Pop(1)

0x225: PushEmpty(bool, object, float, float, bool, bool)
0x226: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0x227: Stack[-4] = Stack[-17]
0x228: Stack[-3] = (float) 3000.0
0x229: Stack[-2] = (bool) 1
0x22a: Stack[-1] = (bool) 0
0x22b: Push(-6, 3); TaskCall(4)
0x22c: Call2 0x483

0x22d: Pop(-6, 3); TaskReturn
0x22e: Pop(5)
0x22f: Pop(1); Push((bool) Stack[-1] == 0)
0x230: IF (Stack[-1] == 0) GOTO 0x232; Pop(1)

0x231: GOTO 0x2ba

0x232: Stack[-7] = (bool) 0
0x233: GOTO 0x2b9

0x234: Pop(0); Push(Stack[-23] * Stack[-23]);
0x235: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0x236: IF (Stack[-1] == 0) GOTO 0x2b1; Pop(1)

0x237: @@ GetPFPosition(Stack[-3])
0x238: Pop(0)
0x239: @ CanReachByPF(Stack[-2], Stack[-3])
0x23a: Pop(0)
0x23b: Pop(0); Push((bool) Stack[-2] == 0)
0x23c: IF (Stack[-1] == 0) GOTO 0x24c; Pop(1)

0x23d: PushEmpty(bool, object, float, float, bool, bool)
0x23e: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0x23f: Stack[-4] = Stack[-17]
0x240: Stack[-3] = (float) 3000.0
0x241: Stack[-2] = (bool) 1
0x242: Stack[-1] = (bool) 0
0x243: Push(-6, 3); TaskCall(4)
0x244: Call2 0x483

0x245: Pop(-6, 3); TaskReturn
0x246: Pop(5)
0x247: Pop(1); Push((bool) Stack[-1] == 0)
0x248: IF (Stack[-1] == 0) GOTO 0x24a; Pop(1)

0x249: GOTO 0x2ba

0x24a: Stack[-7] = (bool) 0
0x24b: GOTO 0x20e

0x24c: Pop(0); Push((bool) Stack[-7] == 0)
0x24d: IF (Stack[-1] == 0) GOTO 0x265; Pop(1)

0x24e: PushEmpty(object)
0x24f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x250: Call2 0x6b9

0x251: Pop(1)
0x252: Push("all")
0x253: Push("attack_on")
0x254: @ PlayAnimation(Stack[-2], Stack[-1])
0x255: Pop(2)
0x256: @ WaitForAnimEnd()
0x257: Pop(0)
0x258: PushEmpty()
0x259: Call2 0x468

0x25a: Pop(0)
0x25b: @ StopAsync()
0x25c: Pop(0)
0x25d: Stack[-7] = (bool) 1
0x25e: PushEmpty(bool, object)
0x25f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x260: Call2 0x623

0x261: Pop(1)
0x262: Pop(1); Push((bool) Stack[-1] == 0)
0x263: IF (Stack[-1] == 0) GOTO 0x265; Pop(1)

0x264: GOTO 0x2ba

0x265: @ rand(Stack[-1])
0x266: Pop(0)
0x267: PushEmpty(bool)
0x268: Stack[-1] = (bool) 1
0x269: Push((float)0.25)
0x26a: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x26b: IF (Stack[-1] == 0) GOTO 0x271; Pop(1)

0x26c: PushEmpty(bool)
0x26d: Call2 0x43d

0x26e: Pop(0)
0x26f: IF (Stack[-1] == 0) GOTO 0x271; Pop(1)

0x270: Stack[-1] = (bool) 0
0x271: IF (Stack[-1] == 0) GOTO 0x282; Pop(1)

0x272: @ Face(Stack[-0])
0x273: Pop(0)
0x274: PushEmpty()
0x275: Call2 0x46f

0x276: Pop(0)
0x277: Push("all")
0x278: Push("attack_stay")
0x279: @ PlayAnimation(Stack[-2], Stack[-1])
0x27a: Pop(2)
0x27b: PushEmpty(bool, float)
0x27c: Stack[-1] = Stack[-25]
0x27d: Call2 0x3b9

0x27e: Pop(2)
0x27f: @ StopAsync()
0x280: Pop(0)
0x281: GOTO 0x2b0

0x282: @ Face(Stack[-0])
0x283: Pop(0)
0x284: Push("all")
0x285: Push("fjump")
0x286: @ PlayAnimation(Stack[-2], Stack[-1])
0x287: Pop(2)
0x288: @ WaitForAnimEnd()
0x289: Pop(0)
0x28a: PushEmpty()
0x28b: Call2 0x468

0x28c: Pop(0)
0x28d: Push(CVector(0.0, 0.0, 0.0))
0x28e: @ SetSpeed(Stack[-1])
0x28f: Pop(1)
0x290: @ Stop()
0x291: Pop(0)
0x292: @ StopAsync()
0x293: Pop(0)
0x294: PushEmpty(bool)
0x295: Call2 0x43d

0x296: Pop(0)
0x297: Pop(1); Push((bool) Stack[-1] == 0)
0x298: IF (Stack[-1] == 0) GOTO 0x2b0; Pop(1)

0x299: PushEmpty(bool, object)
0x29a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x29b: Call2 0x623

0x29c: Pop(1)
0x29d: Pop(1); Push((bool) Stack[-1] == 0)
0x29e: IF (Stack[-1] == 0) GOTO 0x2a0; Pop(1)

0x29f: GOTO 0x2ba

0x2a0: @@ GetPFPosition(Stack[-10])
0x2a1: Pop(0)
0x2a2: @ GetPFPosition(Stack[-9])
0x2a3: Pop(0)
0x2a4: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0x2a5: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x2a6: Pop(0); Push(Stack[-23] * Stack[-23]);
0x2a7: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x2a8: IF (Stack[-1] == 0) GOTO 0x2b0; Pop(1)

0x2a9: PushEmpty(bool, float)
0x2aa: Stack[-1] = Stack[-25]
0x2ab: Call2 0x315

0x2ac: Pop(1)
0x2ad: Pop(1); Push((bool) Stack[-1] == 0)
0x2ae: IF (Stack[-1] == 0) GOTO 0x2b0; Pop(1)

0x2af: GOTO 0x2ba

0x2b0: GOTO 0x2b9

0x2b1: PushEmpty(bool, float)
0x2b2: Stack[-1] = Stack[-25]
0x2b3: Call2 0x315

0x2b4: Pop(1)
0x2b5: Pop(1); Push((bool) Stack[-1] == 0)
0x2b6: IF (Stack[-1] == 0) GOTO 0x2b8; Pop(1)

0x2b7: GOTO 0x2ba

0x2b8: Stack[-7] = (bool) 1
0x2b9: GOTO 0x20e

0x2ba: @ WaitForAnimEnd()
0x2bb: Pop(0)
0x2bc: Push( Stack[3 + Tasks[-1].StackPointer] )
0x2bd: IF (Stack[-1] == 0) GOTO 0x2bf; Pop(1)

0x2be: Return(); Pop(22)

0x2bf: Push("all")
0x2c0: Push("attack_off")
0x2c1: @ PlayAnimation(Stack[-2], Stack[-1])
0x2c2: Pop(2)
0x2c3: @ WaitForAnimEnd()
0x2c4: Pop(0)
0x2c5: Push(Stack[-8])
0x2c6: IF (Stack[-1] == 0) GOTO 0x2ca; Pop(1)

0x2c7: Push((float)2.0)
0x2c8: @ Sleep(Stack[-1])
0x2c9: Pop(1)
0x2ca: Return(); Pop(22)

0x2cb: PushEmpty(bool, bool, cvector, bool, bool, cvector)
0x2cc: Stack[1 + Tasks[-1].StackPointer] = (int)0
0x2cd: Push("all")
0x2ce: Push("attack_begin")
0x2cf: Push((int) 1)
0x2d0: Pop(1); Push(Stack[1 + StackPtr] + Stack[-1]);
0x2d1: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2d2: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0x2d3: Pop(2)
0x2d4: Pop(0); Push((bool) Stack[-3] == 0)
0x2d5: IF (Stack[-1] == 0) GOTO 0x2d7; Pop(1)

0x2d6: GOTO 0x2da

0x2d7: Push((int) 1)
0x2d8: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x2d9: GOTO 0x2cd

0x2da: Stack[2 + Tasks[-1].StackPointer] = (int)0
0x2db: Push("attack")
0x2dc: Push((int) 1)
0x2dd: Pop(1); Push(Stack[2 + StackPtr] + Stack[-1]);
0x2de: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2df: @ IsExisting3DSound(Stack[-3], Stack[-1])
0x2e0: Pop(1)
0x2e1: Pop(0); Push((bool) Stack[-2] == 0)
0x2e2: IF (Stack[-1] == 0) GOTO 0x2e4; Pop(1)

0x2e3: GOTO 0x2e7

0x2e4: Push((int) 1)
0x2e5: Stack[2 + Tasks[-1].StackPointer] = Stack[2 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x2e6: GOTO 0x2db

0x2e7: Push("all")
0x2e8: Push("bjump")
0x2e9: @ GetAnimationOffset(Stack[-3], Stack[-2], Stack[-1])
0x2ea: Pop(2)
0x2eb: Push(CvectorIndex(Stack[-1], 2))
0x2ec: Stack[4 + Tasks[-1].StackPointer] = -Stack[-1]; Pop(1);
0x2ed: Return(); Pop(6)

0x2ee: PushEmpty(object, float, float, object, float, float)
0x2ef: Push((float)0.9)
0x2f0: Pop(1); Push(Stack[-9] * Stack[-1]);
0x2f1: @ GetVictim(Stack[-1], Stack[-4])
0x2f2: Pop(1)
0x2f3: @ ReportAttack(Stack[-0])
0x2f4: Pop(0)
0x2f5: Pop(0); Push((bool) Stack[-3] == Stack[0 + Tasks[-1].StackPointer])
0x2f6: IF (Stack[-1] == 0) GOTO 0x313; Pop(1)

0x2f7: PushEmpty(float, object, int)
0x2f8: Stack[-2] = Stack[-6]
0x2f9: Stack[-1] = Stack[-10]
0x2fa: Call2 0x1e0

0x2fb: Stack[-5] = Stack[-3]
0x2fc: Pop(3)
0x2fd: PushEmpty(float, object, float, int)
0x2fe: Stack[-3] = Stack[-7]
0x2ff: Stack[-2] = Stack[-6]
0x300: PushEmpty(int, object, int)
0x301: Stack[-2] = Stack[-10]
0x302: Stack[-1] = Stack[-14]
0x303: Call2 0x1e3

0x304: Stack[-4] = Stack[-3]
0x305: Pop(3)
0x306: Call2 0x5b1

0x307: Stack[-5] = Stack[-4]
0x308: Pop(4)
0x309: PushEmpty(int)
0x30a: Call2 0x46d

0x30b: Pop(0)
0x30c: @ ReportHit(Stack[-0], Stack[-1], Stack[-2], Stack[-3])
0x30d: Pop(1)
0x30e: PushEmpty(object, float)
0x30f: Stack[-2] = Stack[-5]
0x310: Stack[-1] = Stack[-3]
0x311: Call2 0x474

0x312: Pop(2)
0x313: Return(); Pop(6)

0x314: Stack[-3] = 0
0x315: PushEmpty(int, bool, int, string, int, bool, int, string)
0x316: PushEmpty()
0x317: Call2 0x468

0x318: Pop(0)
0x319: @ irand(Stack[-4], Stack[-1])
0x31a: Pop(0)
0x31b: Push((int) 1)
0x31c: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x31d: @ Face(Stack[-0])
0x31e: Pop(0)
0x31f: Push((bool) 1)
0x320: @ SetAttackState(Stack[-1])
0x321: Pop(1)
0x322: PushEmpty()
0x323: Call2 0x756

0x324: Pop(0)
0x325: Push("all")
0x326: Push("attack_begin")
0x327: Pop(1); Push(Stack[-1] + Stack[-6]);
0x328: @ PlayAnimation(Stack[-2], Stack[-1])
0x329: Pop(2)
0x32a: @ WaitForAnimEnd()
0x32b: Pop(0)
0x32c: PushEmpty()
0x32d: Call2 0x448

0x32e: Pop(0)
0x32f: PushEmpty(bool, object)
0x330: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x331: Call2 0x623

0x332: Pop(1)
0x333: Pop(1); Push((bool) Stack[-1] == 0)
0x334: IF (Stack[-1] == 0) GOTO 0x339; Pop(1)

0x335: @ StopAsync()
0x336: Pop(0)
0x337: Stack[-10] = (bool) 0
0x338: Return(); Pop(8)

0x339: PushEmpty(float, int)
0x33a: Stack[-2] = Stack[-11]
0x33b: Stack[-1] = Stack[-6]
0x33c: Call2 0x2ee

0x33d: Pop(2)
0x33e: Push("all")
0x33f: Push("attack_middle")
0x340: Pop(1); Push(Stack[-1] + Stack[-6]);
0x341: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0x342: Pop(2)
0x343: Push(Stack[-3])
0x344: IF (Stack[-1] == 0) GOTO 0x38a; Pop(1)

0x345: PushEmpty()
0x346: Call2 0x756

0x347: Pop(0)
0x348: Push("all")
0x349: Push("attack_middle")
0x34a: Pop(1); Push(Stack[-1] + Stack[-6]);
0x34b: @ PlayAnimation(Stack[-2], Stack[-1])
0x34c: Pop(2)
0x34d: @ WaitForAnimEnd()
0x34e: Pop(0)
0x34f: PushEmpty()
0x350: Call2 0x468

0x351: Pop(0)
0x352: PushEmpty(bool, object)
0x353: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x354: Call2 0x623

0x355: Pop(1)
0x356: Pop(1); Push((bool) Stack[-1] == 0)
0x357: IF (Stack[-1] == 0) GOTO 0x35c; Pop(1)

0x358: @ StopAsync()
0x359: Pop(0)
0x35a: Stack[-10] = (bool) 0
0x35b: Return(); Pop(8)

0x35c: PushEmpty(float, int)
0x35d: Stack[-2] = Stack[-11]
0x35e: Stack[-1] = Stack[-6]
0x35f: Call2 0x2ee

0x360: Pop(2)
0x361: Stack[-2] = (int) 1
0x362: Push("attack_middle")
0x363: Pop(1); Push(Stack[-1] + Stack[-5]);
0x364: Push("_")
0x365: Pop(2); Push(Stack[-2] + Stack[-1]);
0x366: Stack[-2] = Stack[-1] + Stack[-3]; Pop(1);
0x367: Push("all")
0x368: @ HasAnimation(Stack[-4], Stack[-1], Stack[-2])
0x369: Pop(1)
0x36a: Pop(0); Push((bool) Stack[-3] == 0)
0x36b: IF (Stack[-1] == 0) GOTO 0x36d; Pop(1)

0x36c: GOTO 0x38a

0x36d: PushEmpty()
0x36e: Call2 0x756

0x36f: Pop(0)
0x370: Push("all")
0x371: @ PlayAnimation(Stack[-1], Stack[-2])
0x372: Pop(1)
0x373: @ WaitForAnimEnd()
0x374: Pop(0)
0x375: PushEmpty()
0x376: Call2 0x468

0x377: Pop(0)
0x378: PushEmpty(bool, object)
0x379: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x37a: Call2 0x623

0x37b: Pop(1)
0x37c: Pop(1); Push((bool) Stack[-1] == 0)
0x37d: IF (Stack[-1] == 0) GOTO 0x382; Pop(1)

0x37e: @ StopAsync()
0x37f: Pop(0)
0x380: Stack[-10] = (bool) 0
0x381: Return(); Pop(8)

0x382: PushEmpty(float, int)
0x383: Stack[-2] = Stack[-11]
0x384: Stack[-1] = Stack[-6]
0x385: Call2 0x2ee

0x386: Pop(2)
0x387: Push((int) 1)
0x388: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x389: GOTO 0x362

0x38a: Push((bool) 0)
0x38b: @ SetAttackState(Stack[-1])
0x38c: Pop(1)
0x38d: Push("all")
0x38e: Push("attack_end")
0x38f: Pop(1); Push(Stack[-1] + Stack[-6]);
0x390: @ PlayAnimation(Stack[-2], Stack[-1])
0x391: Pop(2)
0x392: PushEmpty(bool)
0x393: Call2 0x476

0x394: Pop(0)
0x395: IF (Stack[-1] == 0) GOTO 0x39c; Pop(1)

0x396: PushEmpty(bool, float)
0x397: Stack[-1] = (float) 0.75
0x398: Call2 0x39e

0x399: Pop(2)
0x39a: @ StopAsync()
0x39b: Pop(0)
0x39c: Stack[-10] = (bool) 1
0x39d: Return(); Pop(8)

0x39e: PushEmpty(float, bool, float, bool)
0x39f: @ rand(Stack[-2])
0x3a0: Pop(0)
0x3a1: Pop(0); Push((bool) Stack[-2] < Stack[-5])
0x3a2: IF (Stack[-1] == 0) GOTO 0x3b2; Pop(1)

0x3a3: @ IsAnimationPlaying(Stack[-1])
0x3a4: Pop(0)
0x3a5: Pop(0); Push((bool) Stack[-1] == 0)
0x3a6: IF (Stack[-1] == 0) GOTO 0x3a8; Pop(1)

0x3a7: GOTO 0x3b1

0x3a8: PushEmpty(bool)
0x3a9: Call2 0x400

0x3aa: Pop(0)
0x3ab: IF (Stack[-1] == 0) GOTO 0x3ae; Pop(1)

0x3ac: Stack[-6] = (bool) 1
0x3ad: Return(); Pop(4)

0x3ae: @ sync()
0x3af: Pop(0)
0x3b0: GOTO 0x3a3

0x3b1: GOTO 0x3b7

0x3b2: @ WaitForAnimEnd()
0x3b3: Pop(0)
0x3b4: PushEmpty()
0x3b5: Call2 0x468

0x3b6: Pop(0)
0x3b7: Stack[-6] = (bool) 0
0x3b8: Return(); Pop(4)

0x3b9: PushEmpty(bool, cvector, cvector, cvector, float, bool, cvector, cvector, cvector, float)
0x3ba: @ IsAnimationPlaying(Stack[-5])
0x3bb: Pop(0)
0x3bc: Pop(0); Push((bool) Stack[-5] == 0)
0x3bd: IF (Stack[-1] == 0) GOTO 0x3bf; Pop(1)

0x3be: GOTO 0x3df

0x3bf: PushEmpty(bool)
0x3c0: Call2 0x400

0x3c1: Pop(0)
0x3c2: IF (Stack[-1] == 0) GOTO 0x3c5; Pop(1)

0x3c3: Stack[-12] = (bool) 1
0x3c4: Return(); Pop(10)

0x3c5: PushEmpty(bool, object)
0x3c6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3c7: Call2 0x623

0x3c8: Pop(1)
0x3c9: Pop(1); Push((bool) Stack[-1] == 0)
0x3ca: IF (Stack[-1] == 0) GOTO 0x3cd; Pop(1)

0x3cb: Stack[-12] = (bool) 0
0x3cc: Return(); Pop(10)

0x3cd: @@ GetPFPosition(Stack[-4])
0x3ce: Pop(0)
0x3cf: @ GetPFPosition(Stack[-3])
0x3d0: Pop(0)
0x3d1: Stack[-2] = Stack[-4] - Stack[-3]; Pop(0);
0x3d2: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x3d3: Pop(0); Push(Stack[-11] * Stack[-11]);
0x3d4: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x3d5: IF (Stack[-1] == 0) GOTO 0x3dc; Pop(1)

0x3d6: PushEmpty(bool, float)
0x3d7: Stack[-1] = Stack[-13]
0x3d8: Call2 0x315

0x3d9: Pop(2)
0x3da: Stack[-12] = (bool) 1
0x3db: Return(); Pop(10)

0x3dc: @ sync()
0x3dd: Pop(0)
0x3de: GOTO 0x3ba

0x3df: PushEmpty()
0x3e0: Call2 0x468

0x3e1: Pop(0)
0x3e2: Stack[-12] = (bool) 0
0x3e3: Return(); Pop(10)

0x3e4: PushEmpty(cvector, cvector, cvector, float, float, cvector, cvector, cvector, float, float)
0x3e5: PushEmpty(bool, object)
0x3e6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3e7: Call2 0x623

0x3e8: Pop(1)
0x3e9: Pop(1); Push((bool) Stack[-1] == 0)
0x3ea: IF (Stack[-1] == 0) GOTO 0x3ed; Pop(1)

0x3eb: Stack[-11] = (bool) 0
0x3ec: Return(); Pop(10)

0x3ed: PushEmpty(bool)
0x3ee: Call2 0x43d

0x3ef: Pop(0)
0x3f0: IF (Stack[-1] == 0) GOTO 0x3fe; Pop(1)

0x3f1: @@ GetPFPosition(Stack[-5])
0x3f2: Pop(0)
0x3f3: @ GetPFPosition(Stack[-4])
0x3f4: Pop(0)
0x3f5: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x3f6: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x3f7: @@ GetAttackDistance(Stack[-1])
0x3f8: Pop(0)
0x3f9: Push((int) 50)
0x3fa: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x3fb: Pop(0); Push(Stack[-1] * Stack[-1]);
0x3fc: Stack[-12] = Stack[-3] <= Stack[-1]; Pop(1);
0x3fd: Return(); Pop(10)

0x3fe: Stack[-11] = (bool) 0
0x3ff: Return(); Pop(10)

0x400: PushEmpty(bool)
0x401: Stack[-1] = (bool) 0
0x402: PushEmpty(bool)
0x403: Call2 0x3e4

0x404: Pop(0)
0x405: IF (Stack[-1] == 0) GOTO 0x40b; Pop(1)

0x406: PushEmpty(bool)
0x407: Call2 0x410

0x408: Pop(0)
0x409: IF (Stack[-1] == 0) GOTO 0x40b; Pop(1)

0x40a: Stack[-1] = (bool) 1
0x40b: IF (Stack[-1] == 0) GOTO 0x40e; Pop(1)

0x40c: Stack[-1] = (bool) 1
0x40d: Return(); Pop(0)

0x40e: Stack[-1] = (bool) 0
0x40f: Return(); Pop(0)

0x410: PushEmpty(object, bool, float, cvector, cvector, object, bool, float, cvector, cvector)
0x411: @ GetScene(Stack[-5])
0x412: Pop(0)
0x413: Stack[-4] = (bool) 0
0x414: PushEmpty(cvector, object)
0x415: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x416: Call2 0x591

0x417: Pop(1)
0x418: Pop(1); Push(( -Stack[-1])
0x419: @ FindDirLength(Stack[-4], Stack[-1], Stack[-4])
0x41a: Pop(1)
0x41b: Pop(0); Push((bool) Stack[-3] < Stack[4 + Tasks[-1].StackPointer])
0x41c: IF (Stack[-1] == 0) GOTO 0x41e; Pop(1)

0x41d: GOTO 0x43a

0x41e: @ Face(Stack[-0])
0x41f: Pop(0)
0x420: Push("all")
0x421: Push("bjump")
0x422: @ PlayAnimation(Stack[-2], Stack[-1])
0x423: Pop(2)
0x424: @@ GetPFPosition(Stack[-2])
0x425: Pop(0)
0x426: @ GetPFPosition(Stack[-1])
0x427: Pop(0)
0x428: @ WaitForAnimEnd()
0x429: Pop(0)
0x42a: PushEmpty()
0x42b: Call2 0x468

0x42c: Pop(0)
0x42d: @ StopAsync()
0x42e: Pop(0)
0x42f: Push(CVector(0.0, 0.0, 0.0))
0x430: @ SetSpeed(Stack[-1])
0x431: Pop(1)
0x432: Stack[-4] = (bool) 1
0x433: PushEmpty(bool)
0x434: Call2 0x3e4

0x435: Pop(0)
0x436: Pop(1); Push((bool) Stack[-1] == 0)
0x437: IF (Stack[-1] == 0) GOTO 0x439; Pop(1)

0x438: GOTO 0x43a

0x439: GOTO 0x414

0x43a: Stack[-11] = Stack[-4]
0x43b: Return(); Pop(10)

0x43c: Stack[-5] = 0
0x43d: PushEmpty(bool, bool)
0x43e: Push("IsAttacking")
0x43f: Push((int) 1)
0x440: Pop(2); Push(IsFuncExist(Stack[0 + Tasks[-1].StackPointer], Stack[-2], Stack[-1]))
0x441: IF (Stack[-1] == 0) GOTO 0x446; Pop(1)

0x442: @@ IsAttacking(Stack[-1])
0x443: Pop(0)
0x444: Stack[-3] = Stack[-1]
0x445: Return(); Pop(2)

0x446: Stack[-3] = (bool) 0
0x447: Return(); Pop(2)

0x448: PushEmpty(float, int, float, int)
0x449: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x44a: IF (Stack[-1] == 0) GOTO 0x44c; Pop(1)

0x44b: Return(); Pop(4)

0x44c: Push( Stack[5 + Tasks[-1].StackPointer] )
0x44d: IF (Stack[-1] == 0) GOTO 0x454; Pop(1)

0x44e: Push((int) -1)
0x44f: Stack[5 + Tasks[-1].StackPointer] = Stack[5 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x450: Push((int) 0)
0x451: Pop(1); Push((bool) Stack[5 + Tasks[-1].StackPointer] > Stack[-1])
0x452: IF (Stack[-1] == 0) GOTO 0x454; Pop(1)

0x453: Return(); Pop(4)

0x454: @ rand(Stack[-2])
0x455: Pop(0)
0x456: PushEmpty(float)
0x457: Call2 0x47a

0x458: Pop(0)
0x459: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x45a: IF (Stack[-1] == 0) GOTO 0x467; Pop(1)

0x45b: @ irand(Stack[-1], Stack[-2])
0x45c: Pop(0)
0x45d: Push((int) 1)
0x45e: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x45f: Push("attack")
0x460: Pop(1); Push(Stack[-1] + Stack[-2]);
0x461: @ Speak(Stack[-1])
0x462: Pop(1)
0x463: PushEmpty(int)
0x464: Call2 0x478

0x465: Stack[5 + Tasks[-1].StackPointer] = Stack[-1]
0x466: Pop(1)
0x467: Return(); Pop(4)

0x468: PushEmpty(object)
0x469: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x46a: Call2 0x74d

0x46b: Pop(1)
0x46c: Return(); Pop(0)

0x46d: Stack[-1] = (int) 0
0x46e: Return(); Pop(0)

0x46f: PushEmpty(string)
0x470: Stack[-1] = "attack_stay"
0x471: Call2 0x6df

0x472: Pop(1)
0x473: Return(); Pop(0)

0x474: PushEmpty()
0x475: Return(); Pop(0)

0x476: Stack[-1] = (bool) 1
0x477: Return(); Pop(0)

0x478: Stack[-1] = (int) 1
0x479: Return(); Pop(0)

0x47a: Stack[-1] = (float) 0.5
0x47b: Return(); Pop(0)

0x47c: PushEmpty()
0x47d: Call2 0x4c2

0x47e: Pop(0)
0x47f: PushEmpty()
0x480: Call2 0x8fc

0x481: Pop(0)
0x482: Return(); Pop(0)

0x483: PushEmpty(bool, bool, bool, bool)
0x484: PushEmpty(object)
0x485: Stack[-1] = Stack[-10]
0x486: Call2 0x74d

0x487: Pop(1)
0x488: Push((int) 1)
0x489: Push((int) 5)
0x48a: @ SetTimer(Stack[-2], Stack[-1])
0x48b: Pop(2)
0x48c: @ CanSee(Stack[-2], Stack[-9])
0x48d: Pop(0)
0x48e: Push(Stack[-2])
0x48f: IF (Stack[-1] == 0) GOTO 0x496; Pop(1)

0x490: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x491: PushEmpty(object)
0x492: Stack[-1] = Stack[-10]
0x493: Call2 0x6c9

0x494: Pop(1)
0x495: GOTO 0x497

0x496: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x497: PushEmpty(bool, object)
0x498: Stack[-1] = Stack[-11]
0x499: Call2 0x5a0

0x49a: Pop(1)
0x49b: IF (Stack[-1] == 0) GOTO 0x4a1; Pop(1)

0x49c: PushEmpty(object)
0x49d: Call2 0x708

0x49e: Pop(0)
0x49f: @ SendPlayerEnemy(Stack[-10], Stack[-1])
0x4a0: Pop(1)
0x4a1: PushEmpty(bool, object, float, float, bool, bool)
0x4a2: Stack[-5] = Stack[-15]
0x4a3: Stack[-4] = Stack[-14]
0x4a4: Stack[-3] = Stack[-13]
0x4a5: Stack[-2] = Stack[-12]
0x4a6: Stack[-1] = Stack[-11]
0x4a7: Call2 0x4ec

0x4a8: Stack[-7] = Stack[-6]
0x4a9: Pop(6)
0x4aa: Push( Stack[2 + Tasks[-1].StackPointer] )
0x4ab: IF (Stack[-1] == 0) GOTO 0x4af; Pop(1)

0x4ac: Push("head")
0x4ad: @ UnlookAsync(Stack[-1])
0x4ae: Pop(1)
0x4af: Push((int) 1)
0x4b0: @ KillTimer(Stack[-1])
0x4b1: Pop(1)
0x4b2: Stack[-10] = Stack[-1]
0x4b3: Return(); Pop(4)

0x4b4: PushEmpty()
0x4b5: Push((int) 1)
0x4b6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4b7: IF (Stack[-1] == 0) GOTO 0x4bd; Pop(1)

0x4b8: PushEmpty(object)
0x4b9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4ba: Call2 0x74d

0x4bb: Pop(1)
0x4bc: GOTO 0x4c1

0x4bd: PushEmpty(int)
0x4be: Stack[-1] = Stack[-2]
0x4bf: Call2 0x552

0x4c0: Pop(1)
0x4c1: Return(); Pop(0)

0x4c2: Push((int) 1)
0x4c3: @ KillTimer(Stack[-1])
0x4c4: Pop(1)
0x4c5: Push( Stack[2 + Tasks[-1].StackPointer] )
0x4c6: IF (Stack[-1] == 0) GOTO 0x4cb; Pop(1)

0x4c7: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x4c8: Push("head")
0x4c9: @ UnlookAsync(Stack[-1])
0x4ca: Pop(1)
0x4cb: PushEmpty()
0x4cc: Call2 0x568

0x4cd: Pop(0)
0x4ce: Return(); Pop(0)

0x4cf: PushEmpty()
0x4d0: PushEmpty(bool)
0x4d1: Stack[-1] = (bool) 0
0x4d2: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0x4d3: IF (Stack[-1] == 0) GOTO 0x4d7; Pop(1)

0x4d4: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x4d5: IF (Stack[-1] == 0) GOTO 0x4d7; Pop(1)

0x4d6: Stack[-1] = (bool) 1
0x4d7: IF (Stack[-1] == 0) GOTO 0x4dd; Pop(1)

0x4d8: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x4d9: PushEmpty(object)
0x4da: Stack[-1] = Stack[-2]
0x4db: Call2 0x6c9

0x4dc: Pop(1)
0x4dd: Return(); Pop(0)

0x4de: PushEmpty()
0x4df: PushEmpty(bool)
0x4e0: Stack[-1] = (bool) 0
0x4e1: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0x4e2: IF (Stack[-1] == 0) GOTO 0x4e6; Pop(1)

0x4e3: Push( Stack[2 + Tasks[-1].StackPointer] )
0x4e4: IF (Stack[-1] == 0) GOTO 0x4e6; Pop(1)

0x4e5: Stack[-1] = (bool) 1
0x4e6: IF (Stack[-1] == 0) GOTO 0x4eb; Pop(1)

0x4e7: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x4e8: Push("head")
0x4e9: @ UnlookAsync(Stack[-1])
0x4ea: Pop(1)
0x4eb: Return(); Pop(0)

0x4ec: PushEmpty(bool, bool, object, cvector, cvector, cvector, float, object, bool, bool, object, cvector, cvector, cvector, float, object)
0x4ed: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x4ee: Stack[1 + Tasks[-1].StackPointer] = Stack[-21]
0x4ef: Stack[-7] = Stack[-17]
0x4f0: PushEmpty(bool, object)
0x4f1: Stack[-1] = Stack[-23]
0x4f2: Call2 0x578

0x4f3: Pop(1)
0x4f4: Pop(1); Push((bool) Stack[-1] == 0)
0x4f5: IF (Stack[-1] == 0) GOTO 0x4f8; Pop(1)

0x4f6: Stack[-22] = (bool) 0
0x4f7: Return(); Pop(16)

0x4f8: @@ GetPosition(Stack[-5])
0x4f9: Pop(0)
0x4fa: @ GetPosition(Stack[-4])
0x4fb: Pop(0)
0x4fc: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x4fd: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x4fe: PushEmpty(bool)
0x4ff: Stack[-1] = (bool) 0
0x500: Push((int) 0)
0x501: Pop(1); Push((bool) Stack[-21] > Stack[-1])
0x502: IF (Stack[-1] == 0) GOTO 0x507; Pop(1)

0x503: Pop(0); Push(Stack[-20] * Stack[-20]);
0x504: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x505: IF (Stack[-1] == 0) GOTO 0x507; Pop(1)

0x506: Stack[-1] = (bool) 1
0x507: IF (Stack[-1] == 0) GOTO 0x50c; Pop(1)

0x508: @ Stop()
0x509: Pop(0)
0x50a: Stack[-22] = (bool) 0
0x50b: Return(); Pop(16)

0x50c: Pop(0); Push(Stack[-20] * Stack[-20]);
0x50d: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x50e: IF (Stack[-1] == 0) GOTO 0x54a; Pop(1)

0x50f: @@ GetPFPosition(Stack[-5])
0x510: Pop(0)
0x511: @ FindPathTo(Stack[-1], Stack[-5])
0x512: Pop(0)
0x513: Pop(0); Push(( Stack[-1] != 0 )
0x514: IF (Stack[-1] == 0) GOTO 0x517; Pop(1)

0x515: Stack[-6] = Stack[-1]
0x516: Stack[-1] = 0
0x517: Pop(0); Push(( Stack[-6] != 0 )
0x518: IF (Stack[-1] == 0) GOTO 0x538; Pop(1)

0x519: Push(Stack[-7])
0x51a: IF (Stack[-1] == 0) GOTO 0x521; Pop(1)

0x51b: Stack[-7] = (bool) 0
0x51c: @ RotatePath(Stack[-6], Stack[-8])
0x51d: Pop(0)
0x51e: Pop(0); Push((bool) Stack[-8] == 0)
0x51f: IF (Stack[-1] == 0) GOTO 0x521; Pop(1)

0x520: GOTO 0x550

0x521: Push((int) 0)
0x522: Push((float)0.3)
0x523: @ SetTimer(Stack[-2], Stack[-1])
0x524: Pop(2)
0x525: PushEmpty(string)
0x526: Call2 0x57f

0x527: Pop(0)
0x528: PushEmpty(string)
0x529: Call2 0x581

0x52a: Pop(0)
0x52b: @ FollowPath(Stack[-8], Stack[-20], Stack[-10], Stack[-2], Stack[-1])
0x52c: Pop(2)
0x52d: Pop(0); Push((bool) Stack[-8] == 0)
0x52e: IF (Stack[-1] == 0) GOTO 0x536; Pop(1)

0x52f: Push( Stack[0 + Tasks[-1].StackPointer] )
0x530: IF (Stack[-1] == 0) GOTO 0x534; Pop(1)

0x531: Stack[-6] = 0
0x532: GOTO 0x550

0x533: GOTO 0x535

0x534: GOTO 0x54f

0x535: GOTO 0x537

0x536: Stack[-6] = 0
0x537: GOTO 0x548

0x538: Push((int) 0)
0x539: @ KillTimer(Stack[-1])
0x53a: Pop(1)
0x53b: Push((float)0.5)
0x53c: @ Sleep(Stack[-1], Stack[-9])
0x53d: Pop(1)
0x53e: Pop(0); Push((bool) Stack[-8] == 0)
0x53f: IF (Stack[-1] == 0) GOTO 0x544; Pop(1)

0x540: Push( Stack[0 + Tasks[-1].StackPointer] )
0x541: IF (Stack[-1] == 0) GOTO 0x544; Pop(1)

0x542: Stack[-6] = 0
0x543: GOTO 0x550

0x544: Push((int) 0)
0x545: Push((float)0.3)
0x546: @ SetTimer(Stack[-2], Stack[-1])
0x547: Pop(2)
0x548: Stack[-1] = 0
0x549: GOTO 0x54e

0x54a: Push((int) 0)
0x54b: @ KillTimer(Stack[-1])
0x54c: Pop(1)
0x54d: GOTO 0x550

0x54e: Stack[-6] = 0
0x54f: GOTO 0x4f0

0x550: Stack[-22] = !Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x551: Return(); Pop(16)

0x552: PushEmpty()
0x553: Push((int) 0)
0x554: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x555: IF (Stack[-1] == 0) GOTO 0x557; Pop(1)

0x556: Return(); Pop(0)

0x557: PushEmpty(bool, object)
0x558: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x559: Call2 0x578

0x55a: Pop(1)
0x55b: Pop(1); Push((bool) Stack[-1] == 0)
0x55c: IF (Stack[-1] == 0) GOTO 0x55e; Pop(1)

0x55d: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x55e: Push((int) 0)
0x55f: @ KillTimer(Stack[-1])
0x560: Pop(1)
0x561: @ Stop()
0x562: Pop(0)
0x563: Return(); Pop(0)

0x564: PushEmpty()
0x565: @ RequestClearPath(Stack[-1])
0x566: Pop(0)
0x567: Return(); Pop(0)

0x568: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x569: Push((int) 0)
0x56a: @ KillTimer(Stack[-1])
0x56b: Pop(1)
0x56c: @ Stop()
0x56d: Pop(0)
0x56e: Return(); Pop(0)

0x56f: PushEmpty()
0x570: PushEmpty()
0x571: Call2 0x4c2

0x572: Pop(0)
0x573: PushEmpty(object)
0x574: Stack[-1] = Stack[-2]
0x575: Call2 0x87e

0x576: Pop(1)
0x577: Return(); Pop(0)

0x578: PushEmpty()
0x579: PushEmpty(bool, object)
0x57a: Stack[-1] = Stack[-3]
0x57b: Call2 0x623

0x57c: Stack[-4] = Stack[-2]
0x57d: Pop(2)
0x57e: Return(); Pop(0)

0x57f: Stack[-1] = "walk"
0x580: Return(); Pop(0)

0x581: Stack[-1] = "run"
0x582: Return(); Pop(0)

0x583: PushEmpty()
0x584: Push((int) 2)
0x585: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x586: IF (Stack[-1] == 0) GOTO 0x58a; Pop(1)

0x587: Stack[-2] = "fire"
0x588: Return(); Pop(0)

0x589: GOTO 0x58f

0x58a: Push((int) 1)
0x58b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x58c: IF (Stack[-1] == 0) GOTO 0x58f; Pop(1)

0x58d: Stack[-2] = "bullet"
0x58e: Return(); Pop(0)

0x58f: Stack[-2] = "phys"
0x590: Return(); Pop(0)

0x591: PushEmpty(cvector, cvector, cvector, cvector)
0x592: @ GetPosition(Stack[-2])
0x593: Pop(0)
0x594: @@ GetPosition(Stack[-1])
0x595: Pop(0)
0x596: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x597: Return(); Pop(4)

0x598: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x599: @ GetPosition(Stack[-3])
0x59a: Pop(0)
0x59b: @@ GetPosition(Stack[-2])
0x59c: Pop(0)
0x59d: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x59e: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x59f: Return(); Pop(6)

0x5a0: PushEmpty(bool, bool)
0x5a1: @ IsPlayerActor(Stack[-3], Stack[-1])
0x5a2: Pop(0)
0x5a3: Stack[-4] = Stack[-1]
0x5a4: Return(); Pop(2)

0x5a5: PushEmpty(bool, bool)
0x5a6: Push("HasProperty")
0x5a7: Push((int) 2)
0x5a8: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x5a9: Pop(1); Push((bool) Stack[-1] == 0)
0x5aa: IF (Stack[-1] == 0) GOTO 0x5ad; Pop(1)

0x5ab: Stack[-5] = (bool) 0
0x5ac: Return(); Pop(2)

0x5ad: @@ HasProperty(Stack[-3], Stack[-1])
0x5ae: Pop(0)
0x5af: Stack[-5] = Stack[-1]
0x5b0: Return(); Pop(2)

0x5b1: PushEmpty(int, string, int, float, float, float, int, string, int, float, float, float)
0x5b2: PushEmpty(bool, object, string)
0x5b3: Stack[-2] = Stack[-18]
0x5b4: Stack[-1] = "health"
0x5b5: Call2 0x5a5

0x5b6: Pop(2)
0x5b7: Pop(1); Push((bool) Stack[-1] == 0)
0x5b8: IF (Stack[-1] == 0) GOTO 0x5bb; Pop(1)

0x5b9: Stack[-16] = (float) 0.0
0x5ba: Return(); Pop(12)

0x5bb: PushEmpty(bool, object, string)
0x5bc: Stack[-2] = Stack[-18]
0x5bd: Stack[-1] = "armor"
0x5be: Call2 0x5a5

0x5bf: Pop(2)
0x5c0: Pop(1); Push((bool) Stack[-1] == 0)
0x5c1: IF (Stack[-1] == 0) GOTO 0x5c4; Pop(1)

0x5c2: Stack[-6] = (int) 0
0x5c3: GOTO 0x5c7

0x5c4: Push("armor")
0x5c5: @@ GetProperty(Stack[-1], Stack[-7])
0x5c6: Pop(1)
0x5c7: Push("armor_")
0x5c8: PushEmpty(string, int)
0x5c9: Stack[-1] = Stack[-16]
0x5ca: Call2 0x583

0x5cb: Pop(1)
0x5cc: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x5cd: PushEmpty(bool, object, string)
0x5ce: Stack[-2] = Stack[-18]
0x5cf: Stack[-1] = Stack[-8]
0x5d0: Call2 0x5a5

0x5d1: Pop(2)
0x5d2: Pop(1); Push((bool) Stack[-1] == 0)
0x5d3: IF (Stack[-1] == 0) GOTO 0x5d6; Pop(1)

0x5d4: Stack[-4] = (int) 0
0x5d5: GOTO 0x5d8

0x5d6: @@ GetProperty(Stack[-5], Stack[-4])
0x5d7: Pop(0)
0x5d8: PushEmpty(float, float, float)
0x5d9: Pop(0); Push(Stack[-9] + Stack[-7]);
0x5da: Push((float)100.0)
0x5db: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0x5dc: Stack[-1] = (int) 1
0x5dd: Call2 0x71c

0x5de: Stack[-6] = Stack[-3]
0x5df: Pop(3)
0x5e0: Push("health")
0x5e1: @@ GetProperty(Stack[-1], Stack[-3])
0x5e2: Pop(1)
0x5e3: Push((int) 1)
0x5e4: Pop(1); Push(Stack[-1] - Stack[-4]);
0x5e5: Stack[-2] = Stack[-15] * Stack[-1]; Pop(1);
0x5e6: Push("health")
0x5e7: PushEmpty(float, float, float, float)
0x5e8: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0x5e9: Stack[-2] = (int) 0
0x5ea: Stack[-1] = (int) 1
0x5eb: Call2 0x723

0x5ec: Pop(3)
0x5ed: @@ SetProperty(Stack[-2], Stack[-1])
0x5ee: Pop(2)
0x5ef: PushEmpty(bool, object)
0x5f0: Stack[-1] = Stack[-17]
0x5f1: Call2 0x5a0

0x5f2: Pop(1)
0x5f3: IF (Stack[-1] == 0) GOTO 0x5f8; Pop(1)

0x5f4: PushEmpty(float)
0x5f5: Stack[-1] = -Stack[-2]; Pop(0);
0x5f6: Call2 0x733

0x5f7: Pop(1)
0x5f8: Stack[-16] = Stack[-1]
0x5f9: Return(); Pop(12)

0x5fa: PushEmpty(bool, bool)
0x5fb: @@ IsDead(Stack[-1])
0x5fc: Pop(0)
0x5fd: Stack[-4] = Stack[-1]
0x5fe: Return(); Pop(2)

0x5ff: PushEmpty(object, object, object, object)
0x600: Pop(0); Push((bool) Stack[-5] == 0)
0x601: IF (Stack[-1] == 0) GOTO 0x604; Pop(1)

0x602: Stack[-6] = (bool) 0
0x603: Return(); Pop(4)

0x604: PushEmpty(bool)
0x605: Stack[-1] = (bool) 0
0x606: Push("IsDead")
0x607: Push((int) 1)
0x608: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x609: IF (Stack[-1] == 0) GOTO 0x610; Pop(1)

0x60a: PushEmpty(bool, object)
0x60b: Stack[-1] = Stack[-8]
0x60c: Call2 0x5fa

0x60d: Pop(1)
0x60e: IF (Stack[-1] == 0) GOTO 0x610; Pop(1)

0x60f: Stack[-1] = (bool) 1
0x610: IF (Stack[-1] == 0) GOTO 0x613; Pop(1)

0x611: Stack[-6] = (bool) 0
0x612: Return(); Pop(4)

0x613: @ GetScene(Stack[-2])
0x614: Pop(0)
0x615: Pop(0); Push((bool) Stack[-2] == 0)
0x616: IF (Stack[-1] == 0) GOTO 0x619; Pop(1)

0x617: Stack[-6] = (bool) 0
0x618: Return(); Pop(4)

0x619: @@ GetScene(Stack[-1])
0x61a: Pop(0)
0x61b: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x61c: IF (Stack[-1] == 0) GOTO 0x61f; Pop(1)

0x61d: Stack[-6] = (bool) 0
0x61e: Return(); Pop(4)

0x61f: Stack[-6] = (bool) 1
0x620: Return(); Pop(4)

0x621: Stack[-1] = 0
0x622: Stack[-2] = 0
0x623: PushEmpty(int, int)
0x624: PushEmpty(bool, object)
0x625: Stack[-1] = Stack[-5]
0x626: Call2 0x5ff

0x627: Pop(1)
0x628: Pop(1); Push((bool) Stack[-1] == 0)
0x629: IF (Stack[-1] == 0) GOTO 0x62c; Pop(1)

0x62a: Stack[-4] = (bool) 0
0x62b: Return(); Pop(2)

0x62c: PushEmpty(bool, object, string)
0x62d: Stack[-2] = Stack[-6]
0x62e: Stack[-1] = "noaccess"
0x62f: Call2 0x5a5

0x630: Pop(2)
0x631: Pop(1); Push((bool) Stack[-1] == 0)
0x632: IF (Stack[-1] == 0) GOTO 0x635; Pop(1)

0x633: Stack[-4] = (bool) 1
0x634: Return(); Pop(2)

0x635: Push("noaccess")
0x636: @@ GetProperty(Stack[-1], Stack[-2])
0x637: Pop(1)
0x638: Push((int) 0)
0x639: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x63a: Return(); Pop(2)

0x63b: PushEmpty(bool, int, cvector, cvector, cvector, cvector, string, bool, int, cvector, cvector, cvector, cvector, string)
0x63c: Pop(0); Push((bool) Stack[-15] == 0)
0x63d: IF (Stack[-1] == 0) GOTO 0x63f; Pop(1)

0x63e: Return(); Pop(14)

0x63f: @ IsDead(Stack[-7])
0x640: Pop(0)
0x641: Push(Stack[-7])
0x642: IF (Stack[-1] == 0) GOTO 0x644; Pop(1)

0x643: Return(); Pop(14)

0x644: @ GetSecondaryAnimationType(Stack[-6])
0x645: Pop(0)
0x646: Push((int) 0)
0x647: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x648: IF (Stack[-1] == 0) GOTO 0x64a; Pop(1)

0x649: Return(); Pop(14)

0x64a: @@ GetPosition(Stack[-5])
0x64b: Pop(0)
0x64c: @ GetPosition(Stack[-4])
0x64d: Pop(0)
0x64e: @ GetDirection(Stack[-3])
0x64f: Pop(0)
0x650: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0x651: Push(CvectorIndex(Stack[-2], 0))
0x652: Push(CvectorIndex(Stack[-4], 0))
0x653: Pop(2); Push(Stack[-2] * Stack[-1]);
0x654: Push(CvectorIndex(Stack[-3], 2))
0x655: Push(CvectorIndex(Stack[-5], 2))
0x656: Pop(2); Push(Stack[-2] * Stack[-1]);
0x657: Pop(2); Push(Stack[-2] + Stack[-1]);
0x658: Push((int) 0)
0x659: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x65a: IF (Stack[-1] == 0) GOTO 0x65d; Pop(1)

0x65b: Stack[-1] = "fhit"
0x65c: GOTO 0x65e

0x65d: Stack[-1] = "bhit"
0x65e: Push("hit_react")
0x65f: Push("1")
0x660: Pop(1); Push(Stack[-3] + Stack[-1]);
0x661: Push("2")
0x662: Pop(1); Push(Stack[-4] + Stack[-1]);
0x663: Push((int) -10)
0x664: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x665: Pop(4)
0x666: Return(); Pop(14)

0x667: PushEmpty(cvector, object, int, bool, cvector, cvector, int, int, cvector, cvector, object, int, bool, cvector, cvector, int, int, cvector)
0x668: PushEmpty(bool)
0x669: Stack[-1] = (bool) 0
0x66a: PushEmpty(bool)
0x66b: Stack[-1] = (bool) 0
0x66c: Push(Stack[-23])
0x66d: IF (Stack[-1] == 0) GOTO 0x672; Pop(1)

0x66e: Push((int) 4)
0x66f: Pop(1); Push((bool) Stack[-23] != Stack[-1])
0x670: IF (Stack[-1] == 0) GOTO 0x672; Pop(1)

0x671: Stack[-1] = (bool) 1
0x672: IF (Stack[-1] == 0) GOTO 0x677; Pop(1)

0x673: Push((int) 5)
0x674: Pop(1); Push((bool) Stack[-22] != Stack[-1])
0x675: IF (Stack[-1] == 0) GOTO 0x677; Pop(1)

0x676: Stack[-1] = (bool) 1
0x677: IF (Stack[-1] == 0) GOTO 0x6a6; Pop(1)

0x678: PushEmpty(cvector, cvector)
0x679: PushEmpty(cvector, object)
0x67a: Stack[-1] = Stack[-25]
0x67b: Call2 0x591

0x67c: Stack[-3] = Stack[-2]
0x67d: Pop(2)
0x67e: Call2 0x70e

0x67f: Stack[-11] = Stack[-2]
0x680: Pop(2)
0x681: @ CreateVectorVector(Stack[-8])
0x682: Pop(0)
0x683: Stack[-7] = (int) 1
0x684: Push("hit")
0x685: Pop(1); Push(Stack[-1] + Stack[-8]);
0x686: @ GetGeometryLocator(Stack[-1], Stack[-7], Stack[-6], Stack[-5])
0x687: Pop(1)
0x688: Pop(0); Push((bool) Stack[-6] == 0)
0x689: IF (Stack[-1] == 0) GOTO 0x68b; Pop(1)

0x68a: GOTO 0x694

0x68b: Pop(0); Push(Stack[-4] | Stack[-9]);
0x68c: Push((float)0.70711)
0x68d: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x68e: IF (Stack[-1] == 0) GOTO 0x691; Pop(1)

0x68f: @@ add(Stack[-5])
0x690: Pop(0)
0x691: Push((int) 1)
0x692: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x693: GOTO 0x684

0x694: @@ size(Stack[-3])
0x695: Pop(0)
0x696: Push(Stack[-3])
0x697: IF (Stack[-1] == 0) GOTO 0x6a5; Pop(1)

0x698: @ irand(Stack[-2], Stack[-3])
0x699: Pop(0)
0x69a: @@ get(Stack[-1], Stack[-2])
0x69b: Pop(0)
0x69c: PushEmpty(object, int, float, cvector, cvector)
0x69d: Stack[-5] = Stack[-26]
0x69e: Stack[-4] = Stack[-25]
0x69f: Stack[-3] = Stack[-24]
0x6a0: Stack[-2] = Stack[-6]
0x6a1: Stack[-1] = -Stack[-14]; Pop(0);
0x6a2: Call2 0x6ab

0x6a3: Pop(5)
0x6a4: Return(); Pop(18)

0x6a5: Stack[-8] = 0
0x6a6: PushEmpty(object)
0x6a7: Stack[-1] = Stack[-22]
0x6a8: Call2 0x63b

0x6a9: Pop(1)
0x6aa: Return(); Pop(18)

0x6ab: PushEmpty(object, object, object, object)
0x6ac: @ GetScene(Stack[-2])
0x6ad: Pop(0)
0x6ae: Push("scripted")
0x6af: Push("blood_dir.xml")
0x6b0: @ AddActorByType(Stack[-3], Stack[-2], Stack[-4], Stack[-8], Stack[-7], Stack[-1])
0x6b1: Pop(2)
0x6b2: PushEmpty(object)
0x6b3: Stack[-1] = Stack[-10]
0x6b4: Call2 0x63b

0x6b5: Pop(1)
0x6b6: Return(); Pop(4)

0x6b7: Stack[-1] = 0
0x6b8: Stack[-2] = 0
0x6b9: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x6ba: @@ GetPosition(Stack[-3])
0x6bb: Pop(0)
0x6bc: @ GetPosition(Stack[-2])
0x6bd: Pop(0)
0x6be: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0x6bf: Push(CvectorIndex(Stack[-1], 0))
0x6c0: Push(CvectorIndex(Stack[-2], 2))
0x6c1: @ RotateAsync(Stack[-2], Stack[-1])
0x6c2: Pop(2)
0x6c3: Return(); Pop(6)

0x6c4: PushEmpty(bool, bool)
0x6c5: @ IsLoaded(Stack[-1])
0x6c6: Pop(0)
0x6c7: Stack[-3] = Stack[-1]
0x6c8: Return(); Pop(2)

0x6c9: PushEmpty(float, cvector, float, cvector)
0x6ca: @@ GetEyesHeight(Stack[-2])
0x6cb: Pop(0)
0x6cc: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x6cd: Push(CvectorIndex(Stack[-1], 1))
0x6ce: Stack[-1] = Stack[-3]
0x6cf: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x6d0: Push("head")
0x6d1: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x6d2: Pop(1)
0x6d3: Return(); Pop(4)

0x6d4: PushEmpty(bool, bool)
0x6d5: PushEmpty(bool, int, int)
0x6d6: Stack[-2] = Stack[-7]
0x6d7: Stack[-1] = Stack[-6]
0x6d8: Call2 0x72e

0x6d9: Pop(2)
0x6da: IF (Stack[-1] == 0) GOTO 0x6de; Pop(1)

0x6db: Push((int) 0)
0x6dc: @ AddItem(Stack[-2], Stack[-6], Stack[-1])
0x6dd: Pop(1)
0x6de: Return(); Pop(2)

0x6df: PushEmpty(bool, int, bool, int, bool, float, cvector, cvector, bool, int, bool, int, bool, float, cvector, cvector)
0x6e0: @ IsExisting3DSound(Stack[-8], Stack[-17])
0x6e1: Pop(0)
0x6e2: Pop(0); Push((bool) Stack[-8] == 0)
0x6e3: IF (Stack[-1] == 0) GOTO 0x6f8; Pop(1)

0x6e4: Stack[-7] = (int) 0
0x6e5: Push((int) 1)
0x6e6: Pop(1); Push(Stack[-8] + Stack[-1]);
0x6e7: Pop(1); Push(Stack[-18] + Stack[-1]);
0x6e8: @ IsExisting3DSound(Stack[-7], Stack[-1])
0x6e9: Pop(1)
0x6ea: Pop(0); Push((bool) Stack[-6] == 0)
0x6eb: IF (Stack[-1] == 0) GOTO 0x6ed; Pop(1)

0x6ec: GOTO 0x6f0

0x6ed: Push((int) 1)
0x6ee: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x6ef: GOTO 0x6e5

0x6f0: Pop(0); Push((bool) Stack[-7] == 0)
0x6f1: IF (Stack[-1] == 0) GOTO 0x6f3; Pop(1)

0x6f2: Return(); Pop(16)

0x6f3: @ irand(Stack[-5], Stack[-7])
0x6f4: Pop(0)
0x6f5: Push((int) 1)
0x6f6: Pop(1); Push(Stack[-6] + Stack[-1]);
0x6f7: Stack[-18] = Stack[-18] + Stack[-1]; Pop(1);
0x6f8: @ Is3DSoundLoaded(Stack[-4], Stack[-17])
0x6f9: Pop(0)
0x6fa: Push(Stack[-4])
0x6fb: IF (Stack[-1] == 0) GOTO 0x707; Pop(1)

0x6fc: @ GetEyesHeight(Stack[-3])
0x6fd: Pop(0)
0x6fe: @ GetDirection(Stack[-2])
0x6ff: Pop(0)
0x700: Push((int) 50)
0x701: Stack[-2] = Stack[-3] * Stack[-1]; Pop(1);
0x702: Push(CvectorIndex(Stack[-1], 1))
0x703: Stack[-1] = Stack[-1] + Stack[-4]; Pop(0);
0x704: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x705: @ PlayGlobalSound(Stack[-17], Stack[-1])
0x706: Pop(0)
0x707: Return(); Pop(16)

0x708: PushEmpty(object, object)
0x709: @ self(Stack[-1])
0x70a: Pop(0)
0x70b: Stack[-3] = Stack[-1]
0x70c: Return(); Pop(2)

0x70d: Stack[-1] = 0
0x70e: PushEmpty(float, float)
0x70f: Pop(0); Push(Stack[-3] | Stack[-3]);
0x710: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x711: Push((float)0.0)
0x712: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x713: IF (Stack[-1] == 0) GOTO 0x716; Pop(1)

0x714: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x715: Return(); Pop(2)

0x716: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x717: Return(); Pop(2)

0x718: PushEmpty(cvector, cvector)
0x719: Stack[-1] = Stack[-3] - Stack[-4]; Pop(0);
0x71a: Stack[-5] = Stack[-1] | Stack[-1]; Pop(0);
0x71b: Return(); Pop(2)

0x71c: PushEmpty()
0x71d: Pop(0); Push((bool) Stack[-2] < Stack[-1])
0x71e: IF (Stack[-1] == 0) GOTO 0x721; Pop(1)

0x71f: Stack[-3] = Stack[-2]
0x720: GOTO 0x722

0x721: Stack[-3] = Stack[-1]
0x722: Return(); Pop(0)

0x723: PushEmpty()
0x724: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x725: IF (Stack[-1] == 0) GOTO 0x728; Pop(1)

0x726: Stack[-4] = Stack[-2]
0x727: Return(); Pop(0)

0x728: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x729: IF (Stack[-1] == 0) GOTO 0x72c; Pop(1)

0x72a: Stack[-4] = Stack[-1]
0x72b: Return(); Pop(0)

0x72c: Stack[-4] = Stack[-3]
0x72d: Return(); Pop(0)

0x72e: PushEmpty(int, int)
0x72f: @ irand(Stack[-1], Stack[-3])
0x730: Pop(0)
0x731: Stack[-5] = Stack[-1] < Stack[-4]; Pop(0);
0x732: Return(); Pop(2)

0x733: PushEmpty(object, object)
0x734: @ CreateFloatVector(Stack[-1])
0x735: Pop(0)
0x736: @@ add(Stack[-3])
0x737: Pop(0)
0x738: Push((int) 0)
0x739: Pop(1); Push((bool) Stack[-4] < Stack[-1])
0x73a: IF (Stack[-1] == 0) GOTO 0x73f; Pop(1)

0x73b: Push((float)0.7)
0x73c: Push((int) 500)
0x73d: @ RumblePlay(Stack[-2], Stack[-1])
0x73e: Pop(2)
0x73f: Push((int) 15)
0x740: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x741: Pop(1)
0x742: Return(); Pop(2)

0x743: Stack[-1] = 0
0x744: PushEmpty(float, float)
0x745: @ GetGameTime(Stack[-1])
0x746: Pop(0)
0x747: Push((int) 1)
0x748: PushEmpty(int)
0x749: Push((int) 24)
0x74a: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x74b: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x74c: Return(); Pop(2)

0x74d: PushEmpty(bool, bool)
0x74e: @ IsPlayerActor(Stack[-3], Stack[-1])
0x74f: Pop(0)
0x750: Push(Stack[-1])
0x751: IF (Stack[-1] == 0) GOTO 0x755; Pop(1)

0x752: Push("attack")
0x753: @ PlayGlobalMusic(Stack[-1])
0x754: Pop(1)
0x755: Return(); Pop(2)

0x756: PushEmpty(object, object)
0x757: @ GetScene(Stack[-1])
0x758: Pop(0)
0x759: Push("battle")
0x75a: PushEmpty(object)
0x75b: Call2 0x708

0x75c: Pop(0)
0x75d: @ BroadcastMessage(Stack[-2], Stack[-1], Stack[-3])
0x75e: Pop(2)
0x75f: Return(); Pop(2)

0x760: Stack[-1] = 0
0x761: PushEmpty()
0x762: Push("unholster")
0x763: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x764: IF (Stack[-1] == 0) GOTO 0x76c; Pop(1)

0x765: PushEmpty(bool, object)
0x766: Stack[-1] = Stack[-4]
0x767: Call2 0x915

0x768: Stack[-5] = Stack[-2]
0x769: Pop(2)
0x76a: Return(); Pop(0)

0x76b: GOTO 0x77f

0x76c: Push("player_shot")
0x76d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x76e: IF (Stack[-1] == 0) GOTO 0x776; Pop(1)

0x76f: PushEmpty(bool, object)
0x770: Stack[-1] = Stack[-4]
0x771: Call2 0x91a

0x772: Stack[-5] = Stack[-2]
0x773: Pop(2)
0x774: Return(); Pop(0)

0x775: GOTO 0x77f

0x776: Push("battle")
0x777: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x778: IF (Stack[-1] == 0) GOTO 0x77f; Pop(1)

0x779: PushEmpty(bool, object)
0x77a: Stack[-1] = Stack[-4]
0x77b: Call2 0x91f

0x77c: Stack[-5] = Stack[-2]
0x77d: Pop(2)
0x77e: Return(); Pop(0)

0x77f: Stack[-3] = (bool) 0
0x780: Return(); Pop(0)

0x781: PushEmpty()
0x782: Push("unholster")
0x783: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x784: IF (Stack[-1] == 0) GOTO 0x78a; Pop(1)

0x785: PushEmpty(object)
0x786: Stack[-1] = Stack[-3]
0x787: Call2 0x918

0x788: Pop(1)
0x789: GOTO 0x799

0x78a: Push("player_shot")
0x78b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x78c: IF (Stack[-1] == 0) GOTO 0x792; Pop(1)

0x78d: PushEmpty(object)
0x78e: Stack[-1] = Stack[-3]
0x78f: Call2 0x91d

0x790: Pop(1)
0x791: GOTO 0x799

0x792: Push("battle")
0x793: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x794: IF (Stack[-1] == 0) GOTO 0x799; Pop(1)

0x795: PushEmpty(object)
0x796: Stack[-1] = Stack[-3]
0x797: Call2 0x922

0x798: Pop(1)
0x799: Return(); Pop(0)

0x79a: PushEmpty(bool, bool)
0x79b: PushEmpty(bool)
0x79c: Stack[-1] = (bool) 0
0x79d: PushEmpty(bool, object)
0x79e: Stack[-1] = Stack[-6]
0x79f: Call2 0x915

0x7a0: Pop(1)
0x7a1: IF (Stack[-1] == 0) GOTO 0x7a8; Pop(1)

0x7a2: PushEmpty(bool, object)
0x7a3: Stack[-1] = Stack[-6]
0x7a4: Call2 0x5a0

0x7a5: Pop(1)
0x7a6: IF (Stack[-1] == 0) GOTO 0x7a8; Pop(1)

0x7a7: Stack[-1] = (bool) 1
0x7a8: IF (Stack[-1] == 0) GOTO 0x7af; Pop(1)

0x7a9: @@ IsWeaponHolstered(Stack[-1])
0x7aa: Pop(0)
0x7ab: Pop(0); Push((bool) Stack[-1] == 0)
0x7ac: IF (Stack[-1] == 0) GOTO 0x7af; Pop(1)

0x7ad: Stack[-4] = (bool) 1
0x7ae: Return(); Pop(2)

0x7af: Stack[-4] = (bool) 0
0x7b0: Return(); Pop(2)

0x7b1: PushEmpty()
0x7b2: PushEmpty(object)
0x7b3: Stack[-1] = Stack[-2]
0x7b4: Call2 0x918

0x7b5: Pop(1)
0x7b6: Return(); Pop(0)

0x7b7: PushEmpty()
0x7b8: PushEmpty(bool, object)
0x7b9: Stack[-1] = Stack[-3]
0x7ba: Call2 0x5a0

0x7bb: Pop(1)
0x7bc: IF (Stack[-1] == 0) GOTO 0x7c3; Pop(1)

0x7bd: PushEmpty(object)
0x7be: Call2 0x708

0x7bf: Pop(0)
0x7c0: Push((float)-0.05)
0x7c1: @ ReportReputationChange(Stack[-3], Stack[-2], Stack[-1])
0x7c2: Pop(2)
0x7c3: Return(); Pop(0)

0x7c4: PushEmpty(object, object)
0x7c5: Push("heal")
0x7c6: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x7c7: IF (Stack[-1] == 0) GOTO 0x7d2; Pop(1)

0x7c8: Push("player")
0x7c9: @ FindActor(Stack[-2], Stack[-1])
0x7ca: Pop(1)
0x7cb: PushEmpty(bool, object)
0x7cc: Stack[-1] = Stack[-3]
0x7cd: Call2 0x924

0x7ce: Stack[-6] = Stack[-2]
0x7cf: Pop(2)
0x7d0: Return(); Pop(2)

0x7d1: Stack[-1] = 0
0x7d2: Stack[-4] = (bool) 0
0x7d3: Return(); Pop(2)

0x7d4: PushEmpty(object, object)
0x7d5: Push("heal")
0x7d6: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x7d7: IF (Stack[-1] == 0) GOTO 0x7e0; Pop(1)

0x7d8: Push("player")
0x7d9: @ FindActor(Stack[-2], Stack[-1])
0x7da: Pop(1)
0x7db: PushEmpty(object)
0x7dc: Stack[-1] = Stack[-2]
0x7dd: Call2 0x927

0x7de: Pop(1)
0x7df: Stack[-1] = 0
0x7e0: Return(); Pop(2)

0x7e1: PushEmpty(int, int)
0x7e2: Push("branch")
0x7e3: @ GetVariable(Stack[-1], Stack[-2])
0x7e4: Pop(1)
0x7e5: Stack[-3] = Stack[-1]
0x7e6: Return(); Pop(2)

0x7e7: PushEmpty()
0x7e8: PushEmpty(int)
0x7e9: Call2 0x7e1

0x7ea: Pop(0)
0x7eb: Push((int) 1)
0x7ec: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x7ed: IF (Stack[-1] == 0) GOTO 0x7f1; Pop(1)

0x7ee: @ WorkWithCorpse(Stack[-1])
0x7ef: Pop(0)
0x7f0: GOTO 0x7f3

0x7f1: @ Barter(Stack[-1])
0x7f2: Pop(0)
0x7f3: Return(); Pop(0)

0x7f4: PushEmpty(int, bool, int, bool)
0x7f5: Pop(0); Push((bool) Stack[-6] > Stack[-5])
0x7f6: IF (Stack[-1] == 0) GOTO 0x7fb; Pop(1)

0x7f7: Push("GenerateMoney: iMin > iMax")
0x7f8: @ Trace(Stack[-1])
0x7f9: Pop(1)
0x7fa: Return(); Pop(4)

0x7fb: Stack[-2] = (int) 0
0x7fc: Pop(0); Push((bool) Stack[-6] != Stack[-5])
0x7fd: IF (Stack[-1] == 0) GOTO 0x802; Pop(1)

0x7fe: Pop(0); Push(Stack[-5] - Stack[-6]);
0x7ff: @ irand(Stack[-3], Stack[-1])
0x800: Pop(1)
0x801: GOTO 0x806

0x802: Push((int) 0)
0x803: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x804: IF (Stack[-1] == 0) GOTO 0x806; Pop(1)

0x805: Return(); Pop(4)

0x806: Stack[-2] = Stack[-2] + Stack[-6]; Pop(0);
0x807: Push((int) 0)
0x808: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x809: IF (Stack[-1] == 0) GOTO 0x80b; Pop(1)

0x80a: Return(); Pop(4)

0x80b: PushEmpty(int, string)
0x80c: Stack[-1] = "Money"
0x80d: Call2 0x864

0x80e: Pop(1)
0x80f: Push((int) 0)
0x810: @ AddItem(Stack[-3], Stack[-2], Stack[-1], Stack[-4])
0x811: Pop(2)
0x812: Return(); Pop(4)

0x813: PushEmpty(object, int, bool, object, int, bool)
0x814: @ CreateInvItem(Stack[-3])
0x815: Pop(0)
0x816: @@ SetItemName(Stack[-7])
0x817: Pop(0)
0x818: Push("Organ")
0x819: Push((int) 1)
0x81a: @@ SetProperty(Stack[-2], Stack[-1])
0x81b: Pop(2)
0x81c: @@ GetItemID(Stack[-2])
0x81d: Pop(0)
0x81e: Push((int) 0)
0x81f: Push((int) 1)
0x820: @ AddItem(Stack[-3], Stack[-5], Stack[-2], Stack[-1])
0x821: Pop(2)
0x822: Return(); Pop(6)

0x823: Stack[-3] = 0
0x824: PushEmpty(int)
0x825: Call2 0x7e1

0x826: Pop(0)
0x827: Push((int) 1)
0x828: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x829: IF (Stack[-1] == 0) GOTO 0x82b; Pop(1)

0x82a: Return(); Pop(0)

0x82b: PushEmpty(string)
0x82c: Stack[-1] = "liver"
0x82d: Call2 0x813

0x82e: Pop(1)
0x82f: PushEmpty(string)
0x830: Stack[-1] = "kidney"
0x831: Call2 0x813

0x832: Pop(1)
0x833: PushEmpty(string)
0x834: Stack[-1] = "heart"
0x835: Call2 0x813

0x836: Pop(1)
0x837: PushEmpty(string)
0x838: Stack[-1] = "blood"
0x839: Call2 0x813

0x83a: Pop(1)
0x83b: Return(); Pop(0)

0x83c: PushEmpty(bool, bool)
0x83d: Push((int) 0)
0x83e: @ ClearSubContainer(Stack[-1])
0x83f: Pop(1)
0x840: PushEmpty(int, int)
0x841: Stack[-2] = (int) 30
0x842: Push((int) 50)
0x843: PushEmpty(int)
0x844: Call2 0x744

0x845: Pop(0)
0x846: Push((int) 40)
0x847: Pop(2); Push(Stack[-2] * Stack[-1]);
0x848: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x849: Call2 0x7f4

0x84a: Pop(2)
0x84b: PushEmpty(string, int, int)
0x84c: Stack[-3] = "tourniquet"
0x84d: Stack[-2] = (int) 1
0x84e: Stack[-1] = (int) 10
0x84f: Call2 0x6d4

0x850: Pop(3)
0x851: PushEmpty(string, int, int)
0x852: Stack[-3] = "bandage"
0x853: Stack[-2] = (int) 1
0x854: Stack[-1] = (int) 10
0x855: Call2 0x6d4

0x856: Pop(3)
0x857: PushEmpty(string, int, int)
0x858: Stack[-3] = "bottle_empty"
0x859: Stack[-2] = (int) 1
0x85a: Stack[-1] = (int) 2
0x85b: Call2 0x6d4

0x85c: Pop(3)
0x85d: PushEmpty(string, int, int)
0x85e: Stack[-3] = "tvirin"
0x85f: Stack[-2] = (int) 1
0x860: Stack[-1] = (int) 8
0x861: Call2 0x6d4

0x862: Pop(3)
0x863: Return(); Pop(2)

0x864: PushEmpty(int, int)
0x865: @ GetInvItemByName(Stack[-1], Stack[-3])
0x866: Pop(0)
0x867: Stack[-4] = Stack[-1]
0x868: Return(); Pop(2)

0x869: PushEmpty()
0x86a: PushEmpty(object)
0x86b: Stack[-1] = Stack[-2]
0x86c: Push(-1, 0); TaskCall(2)
0x86d: Call2 0x13c

0x86e: Pop(-1, 0); TaskReturn
0x86f: Pop(1)
0x870: Return(); Pop(0)

0x871: PushEmpty(float, float)
0x872: Push("health")
0x873: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x874: IF (Stack[-1] == 0) GOTO 0x87d; Pop(1)

0x875: Push("health")
0x876: @ GetProperty(Stack[-1], Stack[-2])
0x877: Pop(1)
0x878: Push((int) 0)
0x879: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x87a: IF (Stack[-1] == 0) GOTO 0x87d; Pop(1)

0x87b: @ SignalDeath(Stack[-4])
0x87c: Pop(0)
0x87d: Return(); Pop(2)

0x87e: PushEmpty()
0x87f: PushEmpty(object)
0x880: Stack[-1] = Stack[-2]
0x881: Call2 0x869

0x882: Pop(1)
0x883: Return(); Pop(0)

0x884: PushEmpty()
0x885: PushEmpty(object, int, float)
0x886: Stack[-3] = Stack[-7]
0x887: Stack[-2] = Stack[-6]
0x888: Stack[-1] = Stack[-5]
0x889: Call2 0x667

0x88a: Pop(3)
0x88b: Return(); Pop(0)

0x88c: PushEmpty()
0x88d: PushEmpty(object, int, float, cvector, cvector)
0x88e: Stack[-5] = Stack[-11]
0x88f: Stack[-4] = Stack[-10]
0x890: Stack[-3] = Stack[-9]
0x891: Stack[-2] = Stack[-7]
0x892: Stack[-1] = Stack[-6]
0x893: Call2 0x6ab

0x894: Pop(5)
0x895: Return(); Pop(0)

0x896: PushEmpty(string, string)
0x897: Stack[-1] = "idle"
0x898: Push(Stack[-3])
0x899: IF (Stack[-1] == 0) GOTO 0x89b; Pop(1)

0x89a: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x89b: Stack[-4] = Stack[-1]
0x89c: Return(); Pop(2)

0x89d: PushEmpty(int, bool, int, bool)
0x89e: Stack[-2] = (int) 0
0x89f: Push("all")
0x8a0: PushEmpty(string, int)
0x8a1: Stack[-1] = Stack[-5]
0x8a2: Call2 0x896

0x8a3: Pop(1)
0x8a4: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x8a5: Pop(2)
0x8a6: Pop(0); Push((bool) Stack[-1] == 0)
0x8a7: IF (Stack[-1] == 0) GOTO 0x8a9; Pop(1)

0x8a8: GOTO 0x8ac

0x8a9: Push((int) 1)
0x8aa: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x8ab: GOTO 0x89f

0x8ac: Stack[-5] = Stack[-2]
0x8ad: Return(); Pop(4)

0x8ae: Push("head")
0x8af: @ UnlookAsync(Stack[-1])
0x8b0: Pop(1)
0x8b1: @ StopAnimation()
0x8b2: Pop(0)
0x8b3: Return(); Pop(0)

0x8b4: PushEmpty(object, float, int, int, object, float, int, int)
0x8b5: Push("player")
0x8b6: @ FindActor(Stack[-5], Stack[-1])
0x8b7: Pop(1)
0x8b8: Push(Stack[-4])
0x8b9: IF (Stack[-1] == 0) GOTO 0x8c6; Pop(1)

0x8ba: PushEmpty(float, object)
0x8bb: Stack[-1] = Stack[-6]
0x8bc: Call2 0x598

0x8bd: Pop(1)
0x8be: Stack[-4] = Sqrt(Stack[-1]); Pop(1);
0x8bf: Push((int) 350)
0x8c0: Pop(1); Push((bool) Stack[-4] < Stack[-1])
0x8c1: IF (Stack[-1] == 0) GOTO 0x8c6; Pop(1)

0x8c2: PushEmpty(object)
0x8c3: Stack[-1] = Stack[-5]
0x8c4: Call2 0x6c9

0x8c5: Pop(1)
0x8c6: PushEmpty(int)
0x8c7: Call2 0x89d

0x8c8: Stack[-3] = Stack[-1]
0x8c9: Pop(1)
0x8ca: Pop(0); Push((bool) Stack[-2] == 0)
0x8cb: IF (Stack[-1] == 0) GOTO 0x8cd; Pop(1)

0x8cc: Return(); Pop(8)

0x8cd: @ irand(Stack[-1], Stack[-2])
0x8ce: Pop(0)
0x8cf: Push("all")
0x8d0: PushEmpty(string, int)
0x8d1: Stack[-1] = Stack[-4]
0x8d2: Call2 0x896

0x8d3: Pop(1)
0x8d4: @ PlayAnimation(Stack[-2], Stack[-1])
0x8d5: Pop(2)
0x8d6: @ WaitForAnimEnd()
0x8d7: Pop(0)
0x8d8: Push("head")
0x8d9: @ UnlookAsync(Stack[-1])
0x8da: Pop(1)
0x8db: Return(); Pop(8)

0x8dc: Stack[-4] = 0
0x8dd: PushEmpty()
0x8de: PushEmpty(bool, object)
0x8df: Stack[-1] = Stack[-3]
0x8e0: Call2 0x623

0x8e1: Pop(1)
0x8e2: IF (Stack[-1] == 0) GOTO 0x8e5; Pop(1)

0x8e3: Stack[-2] = (int) 2
0x8e4: GOTO 0x8e6

0x8e5: Stack[-2] = (int) 0
0x8e6: Return(); Pop(0)

0x8e7: PushEmpty()
0x8e8: PushEmpty(object)
0x8e9: Stack[-1] = Stack[-2]
0x8ea: Push(-1, 6); TaskCall(3)
0x8eb: Call2 0x1d8

0x8ec: Pop(-1, 6); TaskReturn
0x8ed: Pop(1)
0x8ee: Return(); Pop(0)

0x8ef: PushEmpty()
0x8f0: PushEmpty(int, object)
0x8f1: Stack[-1] = Stack[-4]
0x8f2: Call2 0x8dd

0x8f3: Stack[-5] = Stack[-2]
0x8f4: Pop(2)
0x8f5: Return(); Pop(0)

0x8f6: PushEmpty()
0x8f7: PushEmpty(object)
0x8f8: Stack[-1] = Stack[-2]
0x8f9: Call2 0x8e7

0x8fa: Pop(1)
0x8fb: Return(); Pop(0)

0x8fc: PushEmpty()
0x8fd: Push(-0, 0); TaskCall(0)
0x8fe: Call2 0x0

0x8ff: Pop(-0, 0); TaskReturn
0x900: Pop(0)
0x901: Return(); Pop(0)

0x902: PushEmpty()
0x903: Stack[-2] = (int) 2
0x904: Return(); Pop(0)

0x905: PushEmpty()
0x906: PushEmpty(object)
0x907: Stack[-1] = Stack[-2]
0x908: Call2 0x92d

0x909: Pop(1)
0x90a: Return(); Pop(0)

0x90b: PushEmpty()
0x90c: Stack[-2] = (int) 0
0x90d: Return(); Pop(0)

0x90e: PushEmpty()
0x90f: Return(); Pop(0)

0x910: PushEmpty()
0x911: Stack[-3] = (int) 0
0x912: Return(); Pop(0)

0x913: PushEmpty()
0x914: Return(); Pop(0)

0x915: PushEmpty()
0x916: Stack[-2] = (bool) 0
0x917: Return(); Pop(0)

0x918: PushEmpty()
0x919: Return(); Pop(0)

0x91a: PushEmpty()
0x91b: Stack[-2] = (bool) 0
0x91c: Return(); Pop(0)

0x91d: PushEmpty()
0x91e: Return(); Pop(0)

0x91f: PushEmpty()
0x920: Stack[-2] = (bool) 0
0x921: Return(); Pop(0)

0x922: PushEmpty()
0x923: Return(); Pop(0)

0x924: PushEmpty()
0x925: Stack[-2] = (bool) 0
0x926: Return(); Pop(0)

0x927: PushEmpty()
0x928: Return(); Pop(0)

0x929: Push(GlobalVars[0])
0x92a: Stack[-1] = (bool) 0
0x92b: GlobalVars[0] = Stack[-1]; Pop(1)
0x92c: Return(); Pop(0)

0x92d: PushEmpty()
0x92e: Push(GlobalVars[0])
0x92f: IF (Stack[-1] == 0) GOTO 0x935; Pop(1)

0x930: PushEmpty(object)
0x931: Stack[-1] = Stack[-2]
0x932: Call2 0x7e7

0x933: Pop(1)
0x934: Return(); Pop(0)

0x935: Return(); Pop(0)

0x936: PushEmpty(string, bool, string, bool)
0x937: PushEmpty(bool, object, string)
0x938: Stack[-2] = Stack[-9]
0x939: Stack[-1] = "class"
0x93a: Call2 0x5a5

0x93b: Pop(2)
0x93c: Pop(1); Push((bool) Stack[-1] == 0)
0x93d: IF (Stack[-1] == 0) GOTO 0x940; Pop(1)

0x93e: Stack[-8] = (bool) 0
0x93f: Return(); Pop(4)

0x940: Push("class")
0x941: @@ GetProperty(Stack[-1], Stack[-3])
0x942: Pop(1)
0x943: Push("guard")
0x944: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x945: IF (Stack[-1] == 0) GOTO 0x948; Pop(1)

0x946: Stack[-8] = (bool) 0
0x947: Return(); Pop(4)

0x948: @ CanSee(Stack[-1], Stack[-7])
0x949: Pop(0)
0x94a: PushEmpty(bool)
0x94b: Stack[-1] = (bool) 1
0x94c: Push(Stack[-2])
0x94d: IF (Stack[-1] == 0) GOTO 0x956; Pop(1)

0x94e: PushEmpty(float, object)
0x94f: Stack[-1] = Stack[-10]
0x950: Call2 0x598

0x951: Pop(1)
0x952: Push((float)1000000.0)
0x953: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x954: IF (Stack[-1] == 0) GOTO 0x956; Pop(1)

0x955: Stack[-1] = (bool) 0
0x956: IF (Stack[-1] == 0) GOTO 0x959; Pop(1)

0x957: Stack[-8] = (bool) 1
0x958: Return(); Pop(4)

0x959: Stack[-8] = (bool) 0
0x95a: Return(); Pop(4)

0x95b: PushEmpty()
0x95c: Push(GlobalVars[0])
0x95d: Stack[-1] = (bool) 1
0x95e: GlobalVars[0] = Stack[-1]; Pop(1)
0x95f: Push((int) 50)
0x960: Push((int) 40)
0x961: @ SetRTEnvelope(Stack[-2], Stack[-1])
0x962: Pop(2)
0x963: PushEmpty()
0x964: Call2 0x824

0x965: Pop(0)
0x966: PushEmpty(bool, object)
0x967: Stack[-1] = Stack[-3]
0x968: Call2 0x5a0

0x969: Pop(1)
0x96a: IF (Stack[-1] == 0) GOTO 0x975; Pop(1)

0x96b: PushEmpty(object)
0x96c: Call2 0x708

0x96d: Pop(0)
0x96e: Push((float)-0.03)
0x96f: Push((bool) 1)
0x970: @ ReportReputationChange(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x971: Pop(3)
0x972: PushEmpty()
0x973: Call2 0x83c

0x974: Pop(0)
0x975: Return(); Pop(0)

