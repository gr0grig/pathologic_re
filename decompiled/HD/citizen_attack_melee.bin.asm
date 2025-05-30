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
	unholster
	player_shot
	IsWeaponHolstered
	heal
	player
	idle
	class
	rat
	rat_big
	dog
	grabitel
	bomber
	sanitar
	hunter
	soldier

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
	CanSee (2 args)
	FindPathTo (2 args)
	FollowPath (5 args)
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
	CreateFloatVector (1 args)
	RumblePlay (2 args)
	SendWorldWndMessage (2 args)
	GetGameTime (1 args)
	BroadcastMessage (3 args)
	Trace (1 args)
	AddItem (4 args)
	GetInvItemByName (2 args)
	GetProperty (2 args)
	SignalDeath (1 args)
	ReportReputationChange (3 args)
	FindActor (2 args)
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
	GTASK_3 Vars = (object, int, int, bool, float, int) Params = 1
	GTASK_4 Vars = (bool, object, bool) Params = 6
		EVENT_6 Op = 0x5ab Vars = ()
		EVENT_7 Op = 0x5e3 Vars = (int)
		EVENT_1 Op = 0x5fe Vars = (object)
		EVENT_2 Op = 0x60d Vars = (object)
		EVENT_10 Op = 0x693 Vars = (object)
		EVENT_41 Op = 0x69e Vars = (object)

Events:
EVENT_16 Op = 0x957 Vars = (object, string)
EVENT_41 Op = 0x964 Vars = (object)
EVENT_22 Op = 0x96a Vars = (object, int, float, float)
EVENT_43 Op = 0x972 Vars = (object, int, float, float, cvector, cvector)

0x0: PushEmpty()
0x1: EventDisable(0)
0x2: PushEmpty(object)
0x3: Stack[-1] = Stack[-2]
0x4: Call2 0x21

0x5: Pop(1)
0x6: PushEmpty(object)
0x7: Stack[-1] = Stack[-2]
0x8: Call2 0xae6

0x9: Pop(1)
0xa: EventEnable(0)
0xb: @ Hold()
0xc: Pop(0)
0xd: GOTO 0xb

0xe: Return(); Pop(0)

0xf: PushEmpty(int, int)
0x10: PushEmpty(int, object)
0x11: Stack[-1] = Stack[-5]
0x12: Call2 0xab5

0x13: Stack[-3] = Stack[-2]
0x14: Pop(2)
0x15: Push((int) 0)
0x16: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x17: IF (Stack[-1] == 0) GOTO 0x1c; Pop(1)

0x18: PushEmpty(object)
0x19: Stack[-1] = Stack[-4]
0x1a: Call2 0xab8

0x1b: Pop(1)
0x1c: Return(); Pop(2)

0x1d: PushEmpty()
0x1e: Call2 0xaba

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
0x67: Call2 0x803

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
0x89: Call2 0x803

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
0xa0: Call2 0xacf

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
0xac: Call2 0x7f3

0xad: Pop(0)
0xae: Pop(1); Push((bool) Stack[-1] == 0)
0xaf: IF (Stack[-1] == 0) GOTO 0xb3; Pop(1)

0xb0: PushEmpty()
0xb1: Call2 0xaba

0xb2: Pop(0)
0xb3: Return(); Pop(0)

0xb4: PushEmpty(int, int)
0xb5: PushEmpty(int, object)
0xb6: Stack[-1] = Stack[-5]
0xb7: Call2 0xab5

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
0xc5: Call2 0xab8

0xc6: Pop(1)
0xc7: Return(); Pop(2)

0xc8: PushEmpty(int, int)
0xc9: PushEmpty(object)
0xca: Stack[-1] = Stack[-4]
0xcb: Call2 0x9d2

0xcc: Pop(1)
0xcd: PushEmpty(int, object)
0xce: Stack[-1] = Stack[-5]
0xcf: Call2 0xa24

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
0xdd: Call2 0xa2e

0xde: Pop(1)
0xdf: Return(); Pop(2)

0xe0: PushEmpty(int, int)
0xe1: PushEmpty(bool, object, object, bool)
0xe2: Stack[-3] = Stack[-9]
0xe3: Stack[-2] = Stack[-8]
0xe4: Stack[-1] = Stack[-7]
0xe5: Call2 0xadc

0xe6: Pop(3)
0xe7: IF (Stack[-1] == 0) GOTO 0xfb; Pop(1)

0xe8: PushEmpty(int, object, bool)
0xe9: Stack[-2] = Stack[-8]
0xea: Stack[-1] = Stack[-6]
0xeb: Call2 0xa81

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
0xf9: Call2 0xa88

0xfa: Pop(1)
0xfb: Return(); Pop(2)

0xfc: PushEmpty(int, int)
0xfd: PushEmpty(int, object)
0xfe: Stack[-1] = Stack[-5]
0xff: Call2 0xaab

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
0x10d: Call2 0xaae

0x10e: Pop(1)
0x10f: Return(); Pop(2)

0x110: PushEmpty(int, int)
0x111: PushEmpty(bool, object, string)
0x112: Stack[-2] = Stack[-7]
0x113: Stack[-1] = Stack[-6]
0x114: Call2 0x97c

0x115: Pop(2)
0x116: IF (Stack[-1] == 0) GOTO 0x120; Pop(1)

0x117: PushEmpty()
0x118: Call2 0x16f

0x119: Pop(0)
0x11a: PushEmpty(object, string)
0x11b: Stack[-2] = Stack[-6]
0x11c: Stack[-1] = Stack[-5]
0x11d: Call2 0x99c

0x11e: Pop(2)
0x11f: GOTO 0x134

0x120: PushEmpty(int, string, object)
0x121: Stack[-2] = Stack[-6]
0x122: Stack[-1] = Stack[-7]
0x123: Call2 0xab0

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
0x132: Call2 0xab3

0x133: Pop(2)
0x134: Return(); Pop(2)

0x135: PushEmpty()
0x136: PushEmpty(bool, string)
0x137: Stack[-1] = Stack[-3]
0x138: Call2 0x9df

0x139: Pop(1)
0x13a: IF (Stack[-1] == 0) GOTO 0x142; Pop(1)

0x13b: PushEmpty()
0x13c: Call2 0x16f

0x13d: Pop(0)
0x13e: PushEmpty(string)
0x13f: Stack[-1] = Stack[-2]
0x140: Call2 0x9ef

0x141: Pop(1)
0x142: Return(); Pop(0)

0x143: PushEmpty()
0x144: PushEmpty(bool, object)
0x145: Stack[-1] = Stack[-3]
0x146: Call2 0x9b5

0x147: Pop(1)
0x148: IF (Stack[-1] == 0) GOTO 0x151; Pop(1)

0x149: PushEmpty()
0x14a: Call2 0x16f

0x14b: Pop(0)
0x14c: PushEmpty(object)
0x14d: Stack[-1] = Stack[-2]
0x14e: Call2 0x9cc

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
0x16c: Call2 0xaba

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
0x185: Call2 0x964

0x186: Pop(1)
0x187: Return(); Pop(0)

0x188: PushEmpty(bool, int, bool, int)
0x189: PushEmpty(bool, object)
0x18a: Stack[-1] = Stack[-7]
0x18b: Call2 0x752

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
0x19a: Call2 0xa14

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
0x1a8: Call2 0xa1e

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
0x210: Call2 0xab5

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
0x21e: Call2 0xab8

0x21f: Pop(1)
0x220: Return(); Pop(2)

0x221: PushEmpty(int, int)
0x222: PushEmpty(object)
0x223: Stack[-1] = Stack[-4]
0x224: Call2 0x9d2

0x225: Pop(1)
0x226: PushEmpty(int, object)
0x227: Stack[-1] = Stack[-5]
0x228: Call2 0xa24

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
0x236: Call2 0xa2e

0x237: Pop(1)
0x238: Return(); Pop(2)

0x239: PushEmpty(int, int)
0x23a: PushEmpty(bool, object, object, bool)
0x23b: Stack[-3] = Stack[-9]
0x23c: Stack[-2] = Stack[-8]
0x23d: Stack[-1] = Stack[-7]
0x23e: Call2 0xadc

0x23f: Pop(3)
0x240: IF (Stack[-1] == 0) GOTO 0x254; Pop(1)

0x241: PushEmpty(int, object, bool)
0x242: Stack[-2] = Stack[-8]
0x243: Stack[-1] = Stack[-6]
0x244: Call2 0xa81

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
0x252: Call2 0xa88

0x253: Pop(1)
0x254: Return(); Pop(2)

0x255: PushEmpty(int, int)
0x256: PushEmpty(int, object)
0x257: Stack[-1] = Stack[-5]
0x258: Call2 0xaab

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
0x266: Call2 0xaae

0x267: Pop(1)
0x268: Return(); Pop(2)

0x269: PushEmpty(int, int)
0x26a: PushEmpty(bool, object, string)
0x26b: Stack[-2] = Stack[-7]
0x26c: Stack[-1] = Stack[-6]
0x26d: Call2 0x97c

0x26e: Pop(2)
0x26f: IF (Stack[-1] == 0) GOTO 0x279; Pop(1)

0x270: PushEmpty()
0x271: Call2 0x302

0x272: Pop(0)
0x273: PushEmpty(object, string)
0x274: Stack[-2] = Stack[-6]
0x275: Stack[-1] = Stack[-5]
0x276: Call2 0x99c

0x277: Pop(2)
0x278: GOTO 0x28d

0x279: PushEmpty(int, string, object)
0x27a: Stack[-2] = Stack[-6]
0x27b: Stack[-1] = Stack[-7]
0x27c: Call2 0xab0

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
0x28b: Call2 0xab3

0x28c: Pop(2)
0x28d: Return(); Pop(2)

0x28e: PushEmpty()
0x28f: PushEmpty(bool, string)
0x290: Stack[-1] = Stack[-3]
0x291: Call2 0x9df

0x292: Pop(1)
0x293: IF (Stack[-1] == 0) GOTO 0x29b; Pop(1)

0x294: PushEmpty()
0x295: Call2 0x302

0x296: Pop(0)
0x297: PushEmpty(string)
0x298: Stack[-1] = Stack[-2]
0x299: Call2 0x9ef

0x29a: Pop(1)
0x29b: Return(); Pop(0)

0x29c: PushEmpty()
0x29d: Call2 0x302

0x29e: Pop(0)
0x29f: PushEmpty()
0x2a0: Call2 0xaba

0x2a1: Pop(0)
0x2a2: Return(); Pop(0)

0x2a3: PushEmpty()
0x2a4: PushEmpty(bool, object)
0x2a5: Stack[-1] = Stack[-3]
0x2a6: Call2 0x9b5

0x2a7: Pop(1)
0x2a8: IF (Stack[-1] == 0) GOTO 0x2b0; Pop(1)

0x2a9: PushEmpty()
0x2aa: Call2 0x302

0x2ab: Pop(0)
0x2ac: PushEmpty(object)
0x2ad: Stack[-1] = Stack[-2]
0x2ae: Call2 0x9cc

0x2af: Pop(1)
0x2b0: Return(); Pop(0)

0x2b1: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x2b2: @ WaitForAnimEnd()
0x2b3: Pop(0)
0x2b4: PushEmpty(bool)
0x2b5: Call2 0x7f3

0x2b6: Pop(0)
0x2b7: Pop(1); Push((bool) Stack[-1] == 0)
0x2b8: IF (Stack[-1] == 0) GOTO 0x2ba; Pop(1)

0x2b9: Return(); Pop(14)

0x2ba: PushEmpty(int)
0x2bb: Call2 0xa03

0x2bc: Stack[-8] = Stack[-1]
0x2bd: Pop(1)
0x2be: Stack[-6] = (int) 0
0x2bf: PushEmpty(bool)
0x2c0: Stack[-1] = (bool) 0
0x2c1: Push((int) 5)
0x2c2: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x2c3: IF (Stack[-1] == 0) GOTO 0x2c9; Pop(1)

0x2c4: PushEmpty(bool)
0x2c5: Call2 0x7f3

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
0x2d7: Call2 0x9fc

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
0x308: PushEmpty(object, bool, float)
0x309: Stack[-3] = Stack[-4]
0x30a: Stack[-2] = (bool) 1
0x30b: Stack[-1] = (float) 180.0
0x30c: Call2 0x315

0x30d: Pop(3)
0x30e: Return(); Pop(0)

0x30f: PushEmpty()
0x310: Stack[-3] = (float) 0.05
0x311: Return(); Pop(0)

0x312: PushEmpty()
0x313: Stack[-3] = (int) 0
0x314: Return(); Pop(0)

0x315: PushEmpty(float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float, float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float)
0x316: PushEmpty()
0x317: Call2 0x3fa

0x318: Pop(0)
0x319: Stack[5 + Tasks[-1].StackPointer] = (int)0
0x31a: Push("@GetAttackDistance")
0x31b: Push((int) 1)
0x31c: Pop(2); Push(IsFuncExist(Stack[-27], Stack[-2], Stack[-1]))
0x31d: IF (Stack[-1] == 0) GOTO 0x323; Pop(1)

0x31e: @@ GetAttackDistance(Stack[-11])
0x31f: Pop(0)
0x320: Push((int) 50)
0x321: Stack[-12] = Stack[-12] + Stack[-1]; Pop(1);
0x322: GOTO 0x324

0x323: Stack[-11] = Stack[-23]
0x324: Push((int) 150)
0x325: Pop(1); Push((bool) Stack[-12] >= Stack[-1])
0x326: IF (Stack[-1] == 0) GOTO 0x328; Pop(1)

0x327: Stack[-11] = (int) 150
0x328: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x329: Stack[0 + Tasks[-1].StackPointer] = Stack[-25]
0x32a: @ IsPlayerActor(Stack[-0], Stack[-8])
0x32b: Pop(0)
0x32c: Push(Stack[-8])
0x32d: IF (Stack[-1] == 0) GOTO 0x336; Pop(1)

0x32e: Push("attack")
0x32f: @ PlayGlobalMusic(Stack[-1])
0x330: Pop(1)
0x331: PushEmpty(object)
0x332: Call2 0x82c

0x333: Pop(0)
0x334: @ SendPlayerEnemy(Stack[-26], Stack[-1])
0x335: Pop(1)
0x336: Push(Stack[-24])
0x337: IF (Stack[-1] == 0) GOTO 0x33a; Pop(1)

0x338: Stack[-7] = (bool) 0
0x339: GOTO 0x33b

0x33a: Stack[-7] = (bool) 1
0x33b: Push((float)400.0)
0x33c: Stack[-7] = Stack[-1] + Stack[-12]; Pop(1);
0x33d: PushEmpty(bool)
0x33e: Stack[-1] = (bool) 0
0x33f: PushEmpty(bool, object)
0x340: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x341: Call2 0x752

0x342: Pop(1)
0x343: IF (Stack[-1] == 0) GOTO 0x347; Pop(1)

0x344: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x345: IF (Stack[-1] == 0) GOTO 0x347; Pop(1)

0x346: Stack[-1] = (bool) 1
0x347: IF (Stack[-1] == 0) GOTO 0x3e9; Pop(1)

0x348: PushEmpty()
0x349: Call2 0x597

0x34a: Pop(0)
0x34b: @@ GetPFPosition(Stack[-10])
0x34c: Pop(0)
0x34d: @ GetPFPosition(Stack[-9])
0x34e: Pop(0)
0x34f: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0x350: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x351: Pop(0); Push(Stack[-6] * Stack[-6]);
0x352: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0x353: IF (Stack[-1] == 0) GOTO 0x363; Pop(1)

0x354: PushEmpty(bool, object, float, float, bool, bool)
0x355: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0x356: Stack[-4] = Stack[-17]
0x357: Stack[-3] = (float) 3000.0
0x358: Stack[-2] = (bool) 1
0x359: Stack[-1] = (bool) 0
0x35a: Push(-6, 3); TaskCall(4)
0x35b: Call2 0x5b2

0x35c: Pop(-6, 3); TaskReturn
0x35d: Pop(5)
0x35e: Pop(1); Push((bool) Stack[-1] == 0)
0x35f: IF (Stack[-1] == 0) GOTO 0x361; Pop(1)

0x360: GOTO 0x3e9

0x361: Stack[-7] = (bool) 0
0x362: GOTO 0x3e8

0x363: Pop(0); Push(Stack[-23] * Stack[-23]);
0x364: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0x365: IF (Stack[-1] == 0) GOTO 0x3e0; Pop(1)

0x366: @@ GetPFPosition(Stack[-3])
0x367: Pop(0)
0x368: @ CanReachByPF(Stack[-2], Stack[-3])
0x369: Pop(0)
0x36a: Pop(0); Push((bool) Stack[-2] == 0)
0x36b: IF (Stack[-1] == 0) GOTO 0x37b; Pop(1)

0x36c: PushEmpty(bool, object, float, float, bool, bool)
0x36d: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0x36e: Stack[-4] = Stack[-17]
0x36f: Stack[-3] = (float) 3000.0
0x370: Stack[-2] = (bool) 1
0x371: Stack[-1] = (bool) 0
0x372: Push(-6, 3); TaskCall(4)
0x373: Call2 0x5b2

0x374: Pop(-6, 3); TaskReturn
0x375: Pop(5)
0x376: Pop(1); Push((bool) Stack[-1] == 0)
0x377: IF (Stack[-1] == 0) GOTO 0x379; Pop(1)

0x378: GOTO 0x3e9

0x379: Stack[-7] = (bool) 0
0x37a: GOTO 0x33d

0x37b: Pop(0); Push((bool) Stack[-7] == 0)
0x37c: IF (Stack[-1] == 0) GOTO 0x394; Pop(1)

0x37d: PushEmpty(object)
0x37e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x37f: Call2 0x7e8

0x380: Pop(1)
0x381: Push("all")
0x382: Push("attack_on")
0x383: @ PlayAnimation(Stack[-2], Stack[-1])
0x384: Pop(2)
0x385: @ WaitForAnimEnd()
0x386: Pop(0)
0x387: PushEmpty()
0x388: Call2 0x597

0x389: Pop(0)
0x38a: @ StopAsync()
0x38b: Pop(0)
0x38c: Stack[-7] = (bool) 1
0x38d: PushEmpty(bool, object)
0x38e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x38f: Call2 0x752

0x390: Pop(1)
0x391: Pop(1); Push((bool) Stack[-1] == 0)
0x392: IF (Stack[-1] == 0) GOTO 0x394; Pop(1)

0x393: GOTO 0x3e9

0x394: @ rand(Stack[-1])
0x395: Pop(0)
0x396: PushEmpty(bool)
0x397: Stack[-1] = (bool) 1
0x398: Push((float)0.25)
0x399: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x39a: IF (Stack[-1] == 0) GOTO 0x3a0; Pop(1)

0x39b: PushEmpty(bool)
0x39c: Call2 0x56c

0x39d: Pop(0)
0x39e: IF (Stack[-1] == 0) GOTO 0x3a0; Pop(1)

0x39f: Stack[-1] = (bool) 0
0x3a0: IF (Stack[-1] == 0) GOTO 0x3b1; Pop(1)

0x3a1: @ Face(Stack[-0])
0x3a2: Pop(0)
0x3a3: PushEmpty()
0x3a4: Call2 0x59e

0x3a5: Pop(0)
0x3a6: Push("all")
0x3a7: Push("attack_stay")
0x3a8: @ PlayAnimation(Stack[-2], Stack[-1])
0x3a9: Pop(2)
0x3aa: PushEmpty(bool, float)
0x3ab: Stack[-1] = Stack[-25]
0x3ac: Call2 0x4e8

0x3ad: Pop(2)
0x3ae: @ StopAsync()
0x3af: Pop(0)
0x3b0: GOTO 0x3df

0x3b1: @ Face(Stack[-0])
0x3b2: Pop(0)
0x3b3: Push("all")
0x3b4: Push("fjump")
0x3b5: @ PlayAnimation(Stack[-2], Stack[-1])
0x3b6: Pop(2)
0x3b7: @ WaitForAnimEnd()
0x3b8: Pop(0)
0x3b9: PushEmpty()
0x3ba: Call2 0x597

0x3bb: Pop(0)
0x3bc: Push(CVector(0.0, 0.0, 0.0))
0x3bd: @ SetSpeed(Stack[-1])
0x3be: Pop(1)
0x3bf: @ Stop()
0x3c0: Pop(0)
0x3c1: @ StopAsync()
0x3c2: Pop(0)
0x3c3: PushEmpty(bool)
0x3c4: Call2 0x56c

0x3c5: Pop(0)
0x3c6: Pop(1); Push((bool) Stack[-1] == 0)
0x3c7: IF (Stack[-1] == 0) GOTO 0x3df; Pop(1)

0x3c8: PushEmpty(bool, object)
0x3c9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3ca: Call2 0x752

0x3cb: Pop(1)
0x3cc: Pop(1); Push((bool) Stack[-1] == 0)
0x3cd: IF (Stack[-1] == 0) GOTO 0x3cf; Pop(1)

0x3ce: GOTO 0x3e9

0x3cf: @@ GetPFPosition(Stack[-10])
0x3d0: Pop(0)
0x3d1: @ GetPFPosition(Stack[-9])
0x3d2: Pop(0)
0x3d3: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0x3d4: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x3d5: Pop(0); Push(Stack[-23] * Stack[-23]);
0x3d6: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x3d7: IF (Stack[-1] == 0) GOTO 0x3df; Pop(1)

0x3d8: PushEmpty(bool, float)
0x3d9: Stack[-1] = Stack[-25]
0x3da: Call2 0x444

0x3db: Pop(1)
0x3dc: Pop(1); Push((bool) Stack[-1] == 0)
0x3dd: IF (Stack[-1] == 0) GOTO 0x3df; Pop(1)

0x3de: GOTO 0x3e9

0x3df: GOTO 0x3e8

0x3e0: PushEmpty(bool, float)
0x3e1: Stack[-1] = Stack[-25]
0x3e2: Call2 0x444

0x3e3: Pop(1)
0x3e4: Pop(1); Push((bool) Stack[-1] == 0)
0x3e5: IF (Stack[-1] == 0) GOTO 0x3e7; Pop(1)

0x3e6: GOTO 0x3e9

0x3e7: Stack[-7] = (bool) 1
0x3e8: GOTO 0x33d

0x3e9: @ WaitForAnimEnd()
0x3ea: Pop(0)
0x3eb: Push( Stack[3 + Tasks[-1].StackPointer] )
0x3ec: IF (Stack[-1] == 0) GOTO 0x3ee; Pop(1)

0x3ed: Return(); Pop(22)

0x3ee: Push("all")
0x3ef: Push("attack_off")
0x3f0: @ PlayAnimation(Stack[-2], Stack[-1])
0x3f1: Pop(2)
0x3f2: @ WaitForAnimEnd()
0x3f3: Pop(0)
0x3f4: Push(Stack[-8])
0x3f5: IF (Stack[-1] == 0) GOTO 0x3f9; Pop(1)

0x3f6: Push((float)2.0)
0x3f7: @ Sleep(Stack[-1])
0x3f8: Pop(1)
0x3f9: Return(); Pop(22)

0x3fa: PushEmpty(bool, bool, cvector, bool, bool, cvector)
0x3fb: Stack[1 + Tasks[-1].StackPointer] = (int)0
0x3fc: Push("all")
0x3fd: Push("attack_begin")
0x3fe: Push((int) 1)
0x3ff: Pop(1); Push(Stack[1 + StackPtr] + Stack[-1]);
0x400: Pop(2); Push(Stack[-2] + Stack[-1]);
0x401: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0x402: Pop(2)
0x403: Pop(0); Push((bool) Stack[-3] == 0)
0x404: IF (Stack[-1] == 0) GOTO 0x406; Pop(1)

0x405: GOTO 0x409

0x406: Push((int) 1)
0x407: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x408: GOTO 0x3fc

0x409: Stack[2 + Tasks[-1].StackPointer] = (int)0
0x40a: Push("attack")
0x40b: Push((int) 1)
0x40c: Pop(1); Push(Stack[2 + StackPtr] + Stack[-1]);
0x40d: Pop(2); Push(Stack[-2] + Stack[-1]);
0x40e: @ IsExisting3DSound(Stack[-3], Stack[-1])
0x40f: Pop(1)
0x410: Pop(0); Push((bool) Stack[-2] == 0)
0x411: IF (Stack[-1] == 0) GOTO 0x413; Pop(1)

0x412: GOTO 0x416

0x413: Push((int) 1)
0x414: Stack[2 + Tasks[-1].StackPointer] = Stack[2 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x415: GOTO 0x40a

0x416: Push("all")
0x417: Push("bjump")
0x418: @ GetAnimationOffset(Stack[-3], Stack[-2], Stack[-1])
0x419: Pop(2)
0x41a: Push(CvectorIndex(Stack[-1], 2))
0x41b: Stack[4 + Tasks[-1].StackPointer] = -Stack[-1]; Pop(1);
0x41c: Return(); Pop(6)

0x41d: PushEmpty(object, float, float, object, float, float)
0x41e: Push((float)0.9)
0x41f: Pop(1); Push(Stack[-9] * Stack[-1]);
0x420: @ GetVictim(Stack[-1], Stack[-4])
0x421: Pop(1)
0x422: @ ReportAttack(Stack[-0])
0x423: Pop(0)
0x424: Pop(0); Push((bool) Stack[-3] == Stack[0 + Tasks[-1].StackPointer])
0x425: IF (Stack[-1] == 0) GOTO 0x442; Pop(1)

0x426: PushEmpty(float, object, int)
0x427: Stack[-2] = Stack[-6]
0x428: Stack[-1] = Stack[-10]
0x429: Call2 0x30f

0x42a: Stack[-5] = Stack[-3]
0x42b: Pop(3)
0x42c: PushEmpty(float, object, float, int)
0x42d: Stack[-3] = Stack[-7]
0x42e: Stack[-2] = Stack[-6]
0x42f: PushEmpty(int, object, int)
0x430: Stack[-2] = Stack[-10]
0x431: Stack[-1] = Stack[-14]
0x432: Call2 0x312

0x433: Stack[-4] = Stack[-3]
0x434: Pop(3)
0x435: Call2 0x6e0

0x436: Stack[-5] = Stack[-4]
0x437: Pop(4)
0x438: PushEmpty(int)
0x439: Call2 0x59c

0x43a: Pop(0)
0x43b: @ ReportHit(Stack[-0], Stack[-1], Stack[-2], Stack[-3])
0x43c: Pop(1)
0x43d: PushEmpty(object, float)
0x43e: Stack[-2] = Stack[-5]
0x43f: Stack[-1] = Stack[-3]
0x440: Call2 0x5a3

0x441: Pop(2)
0x442: Return(); Pop(6)

0x443: Stack[-3] = 0
0x444: PushEmpty(int, bool, int, string, int, bool, int, string)
0x445: PushEmpty()
0x446: Call2 0x597

0x447: Pop(0)
0x448: @ irand(Stack[-4], Stack[-1])
0x449: Pop(0)
0x44a: Push((int) 1)
0x44b: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x44c: @ Face(Stack[-0])
0x44d: Pop(0)
0x44e: Push((bool) 1)
0x44f: @ SetAttackState(Stack[-1])
0x450: Pop(1)
0x451: PushEmpty()
0x452: Call2 0x871

0x453: Pop(0)
0x454: Push("all")
0x455: Push("attack_begin")
0x456: Pop(1); Push(Stack[-1] + Stack[-6]);
0x457: @ PlayAnimation(Stack[-2], Stack[-1])
0x458: Pop(2)
0x459: @ WaitForAnimEnd()
0x45a: Pop(0)
0x45b: PushEmpty()
0x45c: Call2 0x577

0x45d: Pop(0)
0x45e: PushEmpty(bool, object)
0x45f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x460: Call2 0x752

0x461: Pop(1)
0x462: Pop(1); Push((bool) Stack[-1] == 0)
0x463: IF (Stack[-1] == 0) GOTO 0x468; Pop(1)

0x464: @ StopAsync()
0x465: Pop(0)
0x466: Stack[-10] = (bool) 0
0x467: Return(); Pop(8)

0x468: PushEmpty(float, int)
0x469: Stack[-2] = Stack[-11]
0x46a: Stack[-1] = Stack[-6]
0x46b: Call2 0x41d

0x46c: Pop(2)
0x46d: Push("all")
0x46e: Push("attack_middle")
0x46f: Pop(1); Push(Stack[-1] + Stack[-6]);
0x470: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0x471: Pop(2)
0x472: Push(Stack[-3])
0x473: IF (Stack[-1] == 0) GOTO 0x4b9; Pop(1)

0x474: PushEmpty()
0x475: Call2 0x871

0x476: Pop(0)
0x477: Push("all")
0x478: Push("attack_middle")
0x479: Pop(1); Push(Stack[-1] + Stack[-6]);
0x47a: @ PlayAnimation(Stack[-2], Stack[-1])
0x47b: Pop(2)
0x47c: @ WaitForAnimEnd()
0x47d: Pop(0)
0x47e: PushEmpty()
0x47f: Call2 0x597

0x480: Pop(0)
0x481: PushEmpty(bool, object)
0x482: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x483: Call2 0x752

0x484: Pop(1)
0x485: Pop(1); Push((bool) Stack[-1] == 0)
0x486: IF (Stack[-1] == 0) GOTO 0x48b; Pop(1)

0x487: @ StopAsync()
0x488: Pop(0)
0x489: Stack[-10] = (bool) 0
0x48a: Return(); Pop(8)

0x48b: PushEmpty(float, int)
0x48c: Stack[-2] = Stack[-11]
0x48d: Stack[-1] = Stack[-6]
0x48e: Call2 0x41d

0x48f: Pop(2)
0x490: Stack[-2] = (int) 1
0x491: Push("attack_middle")
0x492: Pop(1); Push(Stack[-1] + Stack[-5]);
0x493: Push("_")
0x494: Pop(2); Push(Stack[-2] + Stack[-1]);
0x495: Stack[-2] = Stack[-1] + Stack[-3]; Pop(1);
0x496: Push("all")
0x497: @ HasAnimation(Stack[-4], Stack[-1], Stack[-2])
0x498: Pop(1)
0x499: Pop(0); Push((bool) Stack[-3] == 0)
0x49a: IF (Stack[-1] == 0) GOTO 0x49c; Pop(1)

0x49b: GOTO 0x4b9

0x49c: PushEmpty()
0x49d: Call2 0x871

0x49e: Pop(0)
0x49f: Push("all")
0x4a0: @ PlayAnimation(Stack[-1], Stack[-2])
0x4a1: Pop(1)
0x4a2: @ WaitForAnimEnd()
0x4a3: Pop(0)
0x4a4: PushEmpty()
0x4a5: Call2 0x597

0x4a6: Pop(0)
0x4a7: PushEmpty(bool, object)
0x4a8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4a9: Call2 0x752

0x4aa: Pop(1)
0x4ab: Pop(1); Push((bool) Stack[-1] == 0)
0x4ac: IF (Stack[-1] == 0) GOTO 0x4b1; Pop(1)

0x4ad: @ StopAsync()
0x4ae: Pop(0)
0x4af: Stack[-10] = (bool) 0
0x4b0: Return(); Pop(8)

0x4b1: PushEmpty(float, int)
0x4b2: Stack[-2] = Stack[-11]
0x4b3: Stack[-1] = Stack[-6]
0x4b4: Call2 0x41d

0x4b5: Pop(2)
0x4b6: Push((int) 1)
0x4b7: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x4b8: GOTO 0x491

0x4b9: Push((bool) 0)
0x4ba: @ SetAttackState(Stack[-1])
0x4bb: Pop(1)
0x4bc: Push("all")
0x4bd: Push("attack_end")
0x4be: Pop(1); Push(Stack[-1] + Stack[-6]);
0x4bf: @ PlayAnimation(Stack[-2], Stack[-1])
0x4c0: Pop(2)
0x4c1: PushEmpty(bool)
0x4c2: Call2 0x5a5

0x4c3: Pop(0)
0x4c4: IF (Stack[-1] == 0) GOTO 0x4cb; Pop(1)

0x4c5: PushEmpty(bool, float)
0x4c6: Stack[-1] = (float) 0.75
0x4c7: Call2 0x4cd

0x4c8: Pop(2)
0x4c9: @ StopAsync()
0x4ca: Pop(0)
0x4cb: Stack[-10] = (bool) 1
0x4cc: Return(); Pop(8)

0x4cd: PushEmpty(float, bool, float, bool)
0x4ce: @ rand(Stack[-2])
0x4cf: Pop(0)
0x4d0: Pop(0); Push((bool) Stack[-2] < Stack[-5])
0x4d1: IF (Stack[-1] == 0) GOTO 0x4e1; Pop(1)

0x4d2: @ IsAnimationPlaying(Stack[-1])
0x4d3: Pop(0)
0x4d4: Pop(0); Push((bool) Stack[-1] == 0)
0x4d5: IF (Stack[-1] == 0) GOTO 0x4d7; Pop(1)

0x4d6: GOTO 0x4e0

0x4d7: PushEmpty(bool)
0x4d8: Call2 0x52f

0x4d9: Pop(0)
0x4da: IF (Stack[-1] == 0) GOTO 0x4dd; Pop(1)

0x4db: Stack[-6] = (bool) 1
0x4dc: Return(); Pop(4)

0x4dd: @ sync()
0x4de: Pop(0)
0x4df: GOTO 0x4d2

0x4e0: GOTO 0x4e6

0x4e1: @ WaitForAnimEnd()
0x4e2: Pop(0)
0x4e3: PushEmpty()
0x4e4: Call2 0x597

0x4e5: Pop(0)
0x4e6: Stack[-6] = (bool) 0
0x4e7: Return(); Pop(4)

0x4e8: PushEmpty(bool, cvector, cvector, cvector, float, bool, cvector, cvector, cvector, float)
0x4e9: @ IsAnimationPlaying(Stack[-5])
0x4ea: Pop(0)
0x4eb: Pop(0); Push((bool) Stack[-5] == 0)
0x4ec: IF (Stack[-1] == 0) GOTO 0x4ee; Pop(1)

0x4ed: GOTO 0x50e

0x4ee: PushEmpty(bool)
0x4ef: Call2 0x52f

0x4f0: Pop(0)
0x4f1: IF (Stack[-1] == 0) GOTO 0x4f4; Pop(1)

0x4f2: Stack[-12] = (bool) 1
0x4f3: Return(); Pop(10)

0x4f4: PushEmpty(bool, object)
0x4f5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4f6: Call2 0x752

0x4f7: Pop(1)
0x4f8: Pop(1); Push((bool) Stack[-1] == 0)
0x4f9: IF (Stack[-1] == 0) GOTO 0x4fc; Pop(1)

0x4fa: Stack[-12] = (bool) 0
0x4fb: Return(); Pop(10)

0x4fc: @@ GetPFPosition(Stack[-4])
0x4fd: Pop(0)
0x4fe: @ GetPFPosition(Stack[-3])
0x4ff: Pop(0)
0x500: Stack[-2] = Stack[-4] - Stack[-3]; Pop(0);
0x501: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x502: Pop(0); Push(Stack[-11] * Stack[-11]);
0x503: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x504: IF (Stack[-1] == 0) GOTO 0x50b; Pop(1)

0x505: PushEmpty(bool, float)
0x506: Stack[-1] = Stack[-13]
0x507: Call2 0x444

0x508: Pop(2)
0x509: Stack[-12] = (bool) 1
0x50a: Return(); Pop(10)

0x50b: @ sync()
0x50c: Pop(0)
0x50d: GOTO 0x4e9

0x50e: PushEmpty()
0x50f: Call2 0x597

0x510: Pop(0)
0x511: Stack[-12] = (bool) 0
0x512: Return(); Pop(10)

0x513: PushEmpty(cvector, cvector, cvector, float, float, cvector, cvector, cvector, float, float)
0x514: PushEmpty(bool, object)
0x515: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x516: Call2 0x752

0x517: Pop(1)
0x518: Pop(1); Push((bool) Stack[-1] == 0)
0x519: IF (Stack[-1] == 0) GOTO 0x51c; Pop(1)

0x51a: Stack[-11] = (bool) 0
0x51b: Return(); Pop(10)

0x51c: PushEmpty(bool)
0x51d: Call2 0x56c

0x51e: Pop(0)
0x51f: IF (Stack[-1] == 0) GOTO 0x52d; Pop(1)

0x520: @@ GetPFPosition(Stack[-5])
0x521: Pop(0)
0x522: @ GetPFPosition(Stack[-4])
0x523: Pop(0)
0x524: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x525: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x526: @@ GetAttackDistance(Stack[-1])
0x527: Pop(0)
0x528: Push((int) 50)
0x529: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x52a: Pop(0); Push(Stack[-1] * Stack[-1]);
0x52b: Stack[-12] = Stack[-3] <= Stack[-1]; Pop(1);
0x52c: Return(); Pop(10)

0x52d: Stack[-11] = (bool) 0
0x52e: Return(); Pop(10)

0x52f: PushEmpty(bool)
0x530: Stack[-1] = (bool) 0
0x531: PushEmpty(bool)
0x532: Call2 0x513

0x533: Pop(0)
0x534: IF (Stack[-1] == 0) GOTO 0x53a; Pop(1)

0x535: PushEmpty(bool)
0x536: Call2 0x53f

0x537: Pop(0)
0x538: IF (Stack[-1] == 0) GOTO 0x53a; Pop(1)

0x539: Stack[-1] = (bool) 1
0x53a: IF (Stack[-1] == 0) GOTO 0x53d; Pop(1)

0x53b: Stack[-1] = (bool) 1
0x53c: Return(); Pop(0)

0x53d: Stack[-1] = (bool) 0
0x53e: Return(); Pop(0)

0x53f: PushEmpty(object, bool, float, cvector, cvector, object, bool, float, cvector, cvector)
0x540: @ GetScene(Stack[-5])
0x541: Pop(0)
0x542: Stack[-4] = (bool) 0
0x543: PushEmpty(cvector, object)
0x544: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x545: Call2 0x6c0

0x546: Pop(1)
0x547: Pop(1); Push(( -Stack[-1])
0x548: @ FindDirLength(Stack[-4], Stack[-1], Stack[-4])
0x549: Pop(1)
0x54a: Pop(0); Push((bool) Stack[-3] < Stack[4 + Tasks[-1].StackPointer])
0x54b: IF (Stack[-1] == 0) GOTO 0x54d; Pop(1)

0x54c: GOTO 0x569

0x54d: @ Face(Stack[-0])
0x54e: Pop(0)
0x54f: Push("all")
0x550: Push("bjump")
0x551: @ PlayAnimation(Stack[-2], Stack[-1])
0x552: Pop(2)
0x553: @@ GetPFPosition(Stack[-2])
0x554: Pop(0)
0x555: @ GetPFPosition(Stack[-1])
0x556: Pop(0)
0x557: @ WaitForAnimEnd()
0x558: Pop(0)
0x559: PushEmpty()
0x55a: Call2 0x597

0x55b: Pop(0)
0x55c: @ StopAsync()
0x55d: Pop(0)
0x55e: Push(CVector(0.0, 0.0, 0.0))
0x55f: @ SetSpeed(Stack[-1])
0x560: Pop(1)
0x561: Stack[-4] = (bool) 1
0x562: PushEmpty(bool)
0x563: Call2 0x513

0x564: Pop(0)
0x565: Pop(1); Push((bool) Stack[-1] == 0)
0x566: IF (Stack[-1] == 0) GOTO 0x568; Pop(1)

0x567: GOTO 0x569

0x568: GOTO 0x543

0x569: Stack[-11] = Stack[-4]
0x56a: Return(); Pop(10)

0x56b: Stack[-5] = 0
0x56c: PushEmpty(bool, bool)
0x56d: Push("IsAttacking")
0x56e: Push((int) 1)
0x56f: Pop(2); Push(IsFuncExist(Stack[0 + Tasks[-1].StackPointer], Stack[-2], Stack[-1]))
0x570: IF (Stack[-1] == 0) GOTO 0x575; Pop(1)

0x571: @@ IsAttacking(Stack[-1])
0x572: Pop(0)
0x573: Stack[-3] = Stack[-1]
0x574: Return(); Pop(2)

0x575: Stack[-3] = (bool) 0
0x576: Return(); Pop(2)

0x577: PushEmpty(float, int, float, int)
0x578: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x579: IF (Stack[-1] == 0) GOTO 0x57b; Pop(1)

0x57a: Return(); Pop(4)

0x57b: Push( Stack[5 + Tasks[-1].StackPointer] )
0x57c: IF (Stack[-1] == 0) GOTO 0x583; Pop(1)

0x57d: Push((int) -1)
0x57e: Stack[5 + Tasks[-1].StackPointer] = Stack[5 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x57f: Push((int) 0)
0x580: Pop(1); Push((bool) Stack[5 + Tasks[-1].StackPointer] > Stack[-1])
0x581: IF (Stack[-1] == 0) GOTO 0x583; Pop(1)

0x582: Return(); Pop(4)

0x583: @ rand(Stack[-2])
0x584: Pop(0)
0x585: PushEmpty(float)
0x586: Call2 0x5a9

0x587: Pop(0)
0x588: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x589: IF (Stack[-1] == 0) GOTO 0x596; Pop(1)

0x58a: @ irand(Stack[-1], Stack[-2])
0x58b: Pop(0)
0x58c: Push((int) 1)
0x58d: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x58e: Push("attack")
0x58f: Pop(1); Push(Stack[-1] + Stack[-2]);
0x590: @ Speak(Stack[-1])
0x591: Pop(1)
0x592: PushEmpty(int)
0x593: Call2 0x5a7

0x594: Stack[5 + Tasks[-1].StackPointer] = Stack[-1]
0x595: Pop(1)
0x596: Return(); Pop(4)

0x597: PushEmpty(object)
0x598: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x599: Call2 0x868

0x59a: Pop(1)
0x59b: Return(); Pop(0)

0x59c: Stack[-1] = (int) 0
0x59d: Return(); Pop(0)

0x59e: PushEmpty(string)
0x59f: Stack[-1] = "attack_stay"
0x5a0: Call2 0x803

0x5a1: Pop(1)
0x5a2: Return(); Pop(0)

0x5a3: PushEmpty()
0x5a4: Return(); Pop(0)

0x5a5: Stack[-1] = (bool) 1
0x5a6: Return(); Pop(0)

0x5a7: Stack[-1] = (int) 1
0x5a8: Return(); Pop(0)

0x5a9: Stack[-1] = (float) 0.5
0x5aa: Return(); Pop(0)

0x5ab: PushEmpty()
0x5ac: Call2 0x5f1

0x5ad: Pop(0)
0x5ae: PushEmpty()
0x5af: Call2 0xaba

0x5b0: Pop(0)
0x5b1: Return(); Pop(0)

0x5b2: PushEmpty(bool, bool, bool, bool)
0x5b3: PushEmpty(object)
0x5b4: Stack[-1] = Stack[-10]
0x5b5: Call2 0x868

0x5b6: Pop(1)
0x5b7: Push((int) 1)
0x5b8: Push((int) 5)
0x5b9: @ SetTimer(Stack[-2], Stack[-1])
0x5ba: Pop(2)
0x5bb: @ CanSee(Stack[-2], Stack[-9])
0x5bc: Pop(0)
0x5bd: Push(Stack[-2])
0x5be: IF (Stack[-1] == 0) GOTO 0x5c5; Pop(1)

0x5bf: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x5c0: PushEmpty(object)
0x5c1: Stack[-1] = Stack[-10]
0x5c2: Call2 0x7f8

0x5c3: Pop(1)
0x5c4: GOTO 0x5c6

0x5c5: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x5c6: PushEmpty(bool, object)
0x5c7: Stack[-1] = Stack[-11]
0x5c8: Call2 0x6cf

0x5c9: Pop(1)
0x5ca: IF (Stack[-1] == 0) GOTO 0x5d0; Pop(1)

0x5cb: PushEmpty(object)
0x5cc: Call2 0x82c

0x5cd: Pop(0)
0x5ce: @ SendPlayerEnemy(Stack[-10], Stack[-1])
0x5cf: Pop(1)
0x5d0: PushEmpty(bool, object, float, float, bool, bool)
0x5d1: Stack[-5] = Stack[-15]
0x5d2: Stack[-4] = Stack[-14]
0x5d3: Stack[-3] = Stack[-13]
0x5d4: Stack[-2] = Stack[-12]
0x5d5: Stack[-1] = Stack[-11]
0x5d6: Call2 0x61b

0x5d7: Stack[-7] = Stack[-6]
0x5d8: Pop(6)
0x5d9: Push( Stack[2 + Tasks[-1].StackPointer] )
0x5da: IF (Stack[-1] == 0) GOTO 0x5de; Pop(1)

0x5db: Push("head")
0x5dc: @ UnlookAsync(Stack[-1])
0x5dd: Pop(1)
0x5de: Push((int) 1)
0x5df: @ KillTimer(Stack[-1])
0x5e0: Pop(1)
0x5e1: Stack[-10] = Stack[-1]
0x5e2: Return(); Pop(4)

0x5e3: PushEmpty()
0x5e4: Push((int) 1)
0x5e5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5e6: IF (Stack[-1] == 0) GOTO 0x5ec; Pop(1)

0x5e7: PushEmpty(object)
0x5e8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5e9: Call2 0x868

0x5ea: Pop(1)
0x5eb: GOTO 0x5f0

0x5ec: PushEmpty(int)
0x5ed: Stack[-1] = Stack[-2]
0x5ee: Call2 0x681

0x5ef: Pop(1)
0x5f0: Return(); Pop(0)

0x5f1: Push((int) 1)
0x5f2: @ KillTimer(Stack[-1])
0x5f3: Pop(1)
0x5f4: Push( Stack[2 + Tasks[-1].StackPointer] )
0x5f5: IF (Stack[-1] == 0) GOTO 0x5fa; Pop(1)

0x5f6: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x5f7: Push("head")
0x5f8: @ UnlookAsync(Stack[-1])
0x5f9: Pop(1)
0x5fa: PushEmpty()
0x5fb: Call2 0x697

0x5fc: Pop(0)
0x5fd: Return(); Pop(0)

0x5fe: PushEmpty()
0x5ff: PushEmpty(bool)
0x600: Stack[-1] = (bool) 0
0x601: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0x602: IF (Stack[-1] == 0) GOTO 0x606; Pop(1)

0x603: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x604: IF (Stack[-1] == 0) GOTO 0x606; Pop(1)

0x605: Stack[-1] = (bool) 1
0x606: IF (Stack[-1] == 0) GOTO 0x60c; Pop(1)

0x607: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x608: PushEmpty(object)
0x609: Stack[-1] = Stack[-2]
0x60a: Call2 0x7f8

0x60b: Pop(1)
0x60c: Return(); Pop(0)

0x60d: PushEmpty()
0x60e: PushEmpty(bool)
0x60f: Stack[-1] = (bool) 0
0x610: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0x611: IF (Stack[-1] == 0) GOTO 0x615; Pop(1)

0x612: Push( Stack[2 + Tasks[-1].StackPointer] )
0x613: IF (Stack[-1] == 0) GOTO 0x615; Pop(1)

0x614: Stack[-1] = (bool) 1
0x615: IF (Stack[-1] == 0) GOTO 0x61a; Pop(1)

0x616: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x617: Push("head")
0x618: @ UnlookAsync(Stack[-1])
0x619: Pop(1)
0x61a: Return(); Pop(0)

0x61b: PushEmpty(bool, bool, object, cvector, cvector, cvector, float, object, bool, bool, object, cvector, cvector, cvector, float, object)
0x61c: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x61d: Stack[1 + Tasks[-1].StackPointer] = Stack[-21]
0x61e: Stack[-7] = Stack[-17]
0x61f: PushEmpty(bool, object)
0x620: Stack[-1] = Stack[-23]
0x621: Call2 0x6a7

0x622: Pop(1)
0x623: Pop(1); Push((bool) Stack[-1] == 0)
0x624: IF (Stack[-1] == 0) GOTO 0x627; Pop(1)

0x625: Stack[-22] = (bool) 0
0x626: Return(); Pop(16)

0x627: @@ GetPosition(Stack[-5])
0x628: Pop(0)
0x629: @ GetPosition(Stack[-4])
0x62a: Pop(0)
0x62b: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x62c: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x62d: PushEmpty(bool)
0x62e: Stack[-1] = (bool) 0
0x62f: Push((int) 0)
0x630: Pop(1); Push((bool) Stack[-21] > Stack[-1])
0x631: IF (Stack[-1] == 0) GOTO 0x636; Pop(1)

0x632: Pop(0); Push(Stack[-20] * Stack[-20]);
0x633: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x634: IF (Stack[-1] == 0) GOTO 0x636; Pop(1)

0x635: Stack[-1] = (bool) 1
0x636: IF (Stack[-1] == 0) GOTO 0x63b; Pop(1)

0x637: @ Stop()
0x638: Pop(0)
0x639: Stack[-22] = (bool) 0
0x63a: Return(); Pop(16)

0x63b: Pop(0); Push(Stack[-20] * Stack[-20]);
0x63c: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x63d: IF (Stack[-1] == 0) GOTO 0x679; Pop(1)

0x63e: @@ GetPFPosition(Stack[-5])
0x63f: Pop(0)
0x640: @ FindPathTo(Stack[-1], Stack[-5])
0x641: Pop(0)
0x642: Pop(0); Push(( Stack[-1] != 0 )
0x643: IF (Stack[-1] == 0) GOTO 0x646; Pop(1)

0x644: Stack[-6] = Stack[-1]
0x645: Stack[-1] = 0
0x646: Pop(0); Push(( Stack[-6] != 0 )
0x647: IF (Stack[-1] == 0) GOTO 0x667; Pop(1)

0x648: Push(Stack[-7])
0x649: IF (Stack[-1] == 0) GOTO 0x650; Pop(1)

0x64a: Stack[-7] = (bool) 0
0x64b: @ RotatePath(Stack[-6], Stack[-8])
0x64c: Pop(0)
0x64d: Pop(0); Push((bool) Stack[-8] == 0)
0x64e: IF (Stack[-1] == 0) GOTO 0x650; Pop(1)

0x64f: GOTO 0x67f

0x650: Push((int) 0)
0x651: Push((float)0.3)
0x652: @ SetTimer(Stack[-2], Stack[-1])
0x653: Pop(2)
0x654: PushEmpty(string)
0x655: Call2 0x6ae

0x656: Pop(0)
0x657: PushEmpty(string)
0x658: Call2 0x6b0

0x659: Pop(0)
0x65a: @ FollowPath(Stack[-8], Stack[-20], Stack[-10], Stack[-2], Stack[-1])
0x65b: Pop(2)
0x65c: Pop(0); Push((bool) Stack[-8] == 0)
0x65d: IF (Stack[-1] == 0) GOTO 0x665; Pop(1)

0x65e: Push( Stack[0 + Tasks[-1].StackPointer] )
0x65f: IF (Stack[-1] == 0) GOTO 0x663; Pop(1)

0x660: Stack[-6] = 0
0x661: GOTO 0x67f

0x662: GOTO 0x664

0x663: GOTO 0x67e

0x664: GOTO 0x666

0x665: Stack[-6] = 0
0x666: GOTO 0x677

0x667: Push((int) 0)
0x668: @ KillTimer(Stack[-1])
0x669: Pop(1)
0x66a: Push((float)0.5)
0x66b: @ Sleep(Stack[-1], Stack[-9])
0x66c: Pop(1)
0x66d: Pop(0); Push((bool) Stack[-8] == 0)
0x66e: IF (Stack[-1] == 0) GOTO 0x673; Pop(1)

0x66f: Push( Stack[0 + Tasks[-1].StackPointer] )
0x670: IF (Stack[-1] == 0) GOTO 0x673; Pop(1)

0x671: Stack[-6] = 0
0x672: GOTO 0x67f

0x673: Push((int) 0)
0x674: Push((float)0.3)
0x675: @ SetTimer(Stack[-2], Stack[-1])
0x676: Pop(2)
0x677: Stack[-1] = 0
0x678: GOTO 0x67d

0x679: Push((int) 0)
0x67a: @ KillTimer(Stack[-1])
0x67b: Pop(1)
0x67c: GOTO 0x67f

0x67d: Stack[-6] = 0
0x67e: GOTO 0x61f

0x67f: Stack[-22] = !Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x680: Return(); Pop(16)

0x681: PushEmpty()
0x682: Push((int) 0)
0x683: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x684: IF (Stack[-1] == 0) GOTO 0x686; Pop(1)

0x685: Return(); Pop(0)

0x686: PushEmpty(bool, object)
0x687: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x688: Call2 0x6a7

0x689: Pop(1)
0x68a: Pop(1); Push((bool) Stack[-1] == 0)
0x68b: IF (Stack[-1] == 0) GOTO 0x68d; Pop(1)

0x68c: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x68d: Push((int) 0)
0x68e: @ KillTimer(Stack[-1])
0x68f: Pop(1)
0x690: @ Stop()
0x691: Pop(0)
0x692: Return(); Pop(0)

0x693: PushEmpty()
0x694: @ RequestClearPath(Stack[-1])
0x695: Pop(0)
0x696: Return(); Pop(0)

0x697: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x698: Push((int) 0)
0x699: @ KillTimer(Stack[-1])
0x69a: Pop(1)
0x69b: @ Stop()
0x69c: Pop(0)
0x69d: Return(); Pop(0)

0x69e: PushEmpty()
0x69f: PushEmpty()
0x6a0: Call2 0x5f1

0x6a1: Pop(0)
0x6a2: PushEmpty(object)
0x6a3: Stack[-1] = Stack[-2]
0x6a4: Call2 0x964

0x6a5: Pop(1)
0x6a6: Return(); Pop(0)

0x6a7: PushEmpty()
0x6a8: PushEmpty(bool, object)
0x6a9: Stack[-1] = Stack[-3]
0x6aa: Call2 0x752

0x6ab: Stack[-4] = Stack[-2]
0x6ac: Pop(2)
0x6ad: Return(); Pop(0)

0x6ae: Stack[-1] = "walk"
0x6af: Return(); Pop(0)

0x6b0: Stack[-1] = "run"
0x6b1: Return(); Pop(0)

0x6b2: PushEmpty()
0x6b3: Push((int) 2)
0x6b4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6b5: IF (Stack[-1] == 0) GOTO 0x6b9; Pop(1)

0x6b6: Stack[-2] = "fire"
0x6b7: Return(); Pop(0)

0x6b8: GOTO 0x6be

0x6b9: Push((int) 1)
0x6ba: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6bb: IF (Stack[-1] == 0) GOTO 0x6be; Pop(1)

0x6bc: Stack[-2] = "bullet"
0x6bd: Return(); Pop(0)

0x6be: Stack[-2] = "phys"
0x6bf: Return(); Pop(0)

0x6c0: PushEmpty(cvector, cvector, cvector, cvector)
0x6c1: @ GetPosition(Stack[-2])
0x6c2: Pop(0)
0x6c3: @@ GetPosition(Stack[-1])
0x6c4: Pop(0)
0x6c5: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x6c6: Return(); Pop(4)

0x6c7: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x6c8: @ GetPosition(Stack[-3])
0x6c9: Pop(0)
0x6ca: @@ GetPosition(Stack[-2])
0x6cb: Pop(0)
0x6cc: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x6cd: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x6ce: Return(); Pop(6)

0x6cf: PushEmpty(bool, bool)
0x6d0: @ IsPlayerActor(Stack[-3], Stack[-1])
0x6d1: Pop(0)
0x6d2: Stack[-4] = Stack[-1]
0x6d3: Return(); Pop(2)

0x6d4: PushEmpty(bool, bool)
0x6d5: Push("HasProperty")
0x6d6: Push((int) 2)
0x6d7: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x6d8: Pop(1); Push((bool) Stack[-1] == 0)
0x6d9: IF (Stack[-1] == 0) GOTO 0x6dc; Pop(1)

0x6da: Stack[-5] = (bool) 0
0x6db: Return(); Pop(2)

0x6dc: @@ HasProperty(Stack[-3], Stack[-1])
0x6dd: Pop(0)
0x6de: Stack[-5] = Stack[-1]
0x6df: Return(); Pop(2)

0x6e0: PushEmpty(int, string, int, float, float, float, int, string, int, float, float, float)
0x6e1: PushEmpty(bool, object, string)
0x6e2: Stack[-2] = Stack[-18]
0x6e3: Stack[-1] = "health"
0x6e4: Call2 0x6d4

0x6e5: Pop(2)
0x6e6: Pop(1); Push((bool) Stack[-1] == 0)
0x6e7: IF (Stack[-1] == 0) GOTO 0x6ea; Pop(1)

0x6e8: Stack[-16] = (float) 0.0
0x6e9: Return(); Pop(12)

0x6ea: PushEmpty(bool, object, string)
0x6eb: Stack[-2] = Stack[-18]
0x6ec: Stack[-1] = "armor"
0x6ed: Call2 0x6d4

0x6ee: Pop(2)
0x6ef: Pop(1); Push((bool) Stack[-1] == 0)
0x6f0: IF (Stack[-1] == 0) GOTO 0x6f3; Pop(1)

0x6f1: Stack[-6] = (int) 0
0x6f2: GOTO 0x6f6

0x6f3: Push("armor")
0x6f4: @@ GetProperty(Stack[-1], Stack[-7])
0x6f5: Pop(1)
0x6f6: Push("armor_")
0x6f7: PushEmpty(string, int)
0x6f8: Stack[-1] = Stack[-16]
0x6f9: Call2 0x6b2

0x6fa: Pop(1)
0x6fb: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x6fc: PushEmpty(bool, object, string)
0x6fd: Stack[-2] = Stack[-18]
0x6fe: Stack[-1] = Stack[-8]
0x6ff: Call2 0x6d4

0x700: Pop(2)
0x701: Pop(1); Push((bool) Stack[-1] == 0)
0x702: IF (Stack[-1] == 0) GOTO 0x705; Pop(1)

0x703: Stack[-4] = (int) 0
0x704: GOTO 0x707

0x705: @@ GetProperty(Stack[-5], Stack[-4])
0x706: Pop(0)
0x707: PushEmpty(float, float, float)
0x708: Pop(0); Push(Stack[-9] + Stack[-7]);
0x709: Push((float)100.0)
0x70a: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0x70b: Stack[-1] = (int) 1
0x70c: Call2 0x83c

0x70d: Stack[-6] = Stack[-3]
0x70e: Pop(3)
0x70f: Push("health")
0x710: @@ GetProperty(Stack[-1], Stack[-3])
0x711: Pop(1)
0x712: Push((int) 1)
0x713: Pop(1); Push(Stack[-1] - Stack[-4]);
0x714: Stack[-2] = Stack[-15] * Stack[-1]; Pop(1);
0x715: Push("health")
0x716: PushEmpty(float, float, float, float)
0x717: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0x718: Stack[-2] = (int) 0
0x719: Stack[-1] = (int) 1
0x71a: Call2 0x843

0x71b: Pop(3)
0x71c: @@ SetProperty(Stack[-2], Stack[-1])
0x71d: Pop(2)
0x71e: PushEmpty(bool, object)
0x71f: Stack[-1] = Stack[-17]
0x720: Call2 0x6cf

0x721: Pop(1)
0x722: IF (Stack[-1] == 0) GOTO 0x727; Pop(1)

0x723: PushEmpty(float)
0x724: Stack[-1] = -Stack[-2]; Pop(0);
0x725: Call2 0x84e

0x726: Pop(1)
0x727: Stack[-16] = Stack[-1]
0x728: Return(); Pop(12)

0x729: PushEmpty(bool, bool)
0x72a: @@ IsDead(Stack[-1])
0x72b: Pop(0)
0x72c: Stack[-4] = Stack[-1]
0x72d: Return(); Pop(2)

0x72e: PushEmpty(object, object, object, object)
0x72f: Pop(0); Push((bool) Stack[-5] == 0)
0x730: IF (Stack[-1] == 0) GOTO 0x733; Pop(1)

0x731: Stack[-6] = (bool) 0
0x732: Return(); Pop(4)

0x733: PushEmpty(bool)
0x734: Stack[-1] = (bool) 0
0x735: Push("IsDead")
0x736: Push((int) 1)
0x737: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x738: IF (Stack[-1] == 0) GOTO 0x73f; Pop(1)

0x739: PushEmpty(bool, object)
0x73a: Stack[-1] = Stack[-8]
0x73b: Call2 0x729

0x73c: Pop(1)
0x73d: IF (Stack[-1] == 0) GOTO 0x73f; Pop(1)

0x73e: Stack[-1] = (bool) 1
0x73f: IF (Stack[-1] == 0) GOTO 0x742; Pop(1)

0x740: Stack[-6] = (bool) 0
0x741: Return(); Pop(4)

0x742: @ GetScene(Stack[-2])
0x743: Pop(0)
0x744: Pop(0); Push((bool) Stack[-2] == 0)
0x745: IF (Stack[-1] == 0) GOTO 0x748; Pop(1)

0x746: Stack[-6] = (bool) 0
0x747: Return(); Pop(4)

0x748: @@ GetScene(Stack[-1])
0x749: Pop(0)
0x74a: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x74b: IF (Stack[-1] == 0) GOTO 0x74e; Pop(1)

0x74c: Stack[-6] = (bool) 0
0x74d: Return(); Pop(4)

0x74e: Stack[-6] = (bool) 1
0x74f: Return(); Pop(4)

0x750: Stack[-1] = 0
0x751: Stack[-2] = 0
0x752: PushEmpty(int, int)
0x753: PushEmpty(bool, object)
0x754: Stack[-1] = Stack[-5]
0x755: Call2 0x72e

0x756: Pop(1)
0x757: Pop(1); Push((bool) Stack[-1] == 0)
0x758: IF (Stack[-1] == 0) GOTO 0x75b; Pop(1)

0x759: Stack[-4] = (bool) 0
0x75a: Return(); Pop(2)

0x75b: PushEmpty(bool, object, string)
0x75c: Stack[-2] = Stack[-6]
0x75d: Stack[-1] = "noaccess"
0x75e: Call2 0x6d4

0x75f: Pop(2)
0x760: Pop(1); Push((bool) Stack[-1] == 0)
0x761: IF (Stack[-1] == 0) GOTO 0x764; Pop(1)

0x762: Stack[-4] = (bool) 1
0x763: Return(); Pop(2)

0x764: Push("noaccess")
0x765: @@ GetProperty(Stack[-1], Stack[-2])
0x766: Pop(1)
0x767: Push((int) 0)
0x768: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x769: Return(); Pop(2)

0x76a: PushEmpty(bool, int, cvector, cvector, cvector, cvector, string, bool, int, cvector, cvector, cvector, cvector, string)
0x76b: Pop(0); Push((bool) Stack[-15] == 0)
0x76c: IF (Stack[-1] == 0) GOTO 0x76e; Pop(1)

0x76d: Return(); Pop(14)

0x76e: @ IsDead(Stack[-7])
0x76f: Pop(0)
0x770: Push(Stack[-7])
0x771: IF (Stack[-1] == 0) GOTO 0x773; Pop(1)

0x772: Return(); Pop(14)

0x773: @ GetSecondaryAnimationType(Stack[-6])
0x774: Pop(0)
0x775: Push((int) 0)
0x776: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x777: IF (Stack[-1] == 0) GOTO 0x779; Pop(1)

0x778: Return(); Pop(14)

0x779: @@ GetPosition(Stack[-5])
0x77a: Pop(0)
0x77b: @ GetPosition(Stack[-4])
0x77c: Pop(0)
0x77d: @ GetDirection(Stack[-3])
0x77e: Pop(0)
0x77f: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0x780: Push(CvectorIndex(Stack[-2], 0))
0x781: Push(CvectorIndex(Stack[-4], 0))
0x782: Pop(2); Push(Stack[-2] * Stack[-1]);
0x783: Push(CvectorIndex(Stack[-3], 2))
0x784: Push(CvectorIndex(Stack[-5], 2))
0x785: Pop(2); Push(Stack[-2] * Stack[-1]);
0x786: Pop(2); Push(Stack[-2] + Stack[-1]);
0x787: Push((int) 0)
0x788: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x789: IF (Stack[-1] == 0) GOTO 0x78c; Pop(1)

0x78a: Stack[-1] = "fhit"
0x78b: GOTO 0x78d

0x78c: Stack[-1] = "bhit"
0x78d: Push("hit_react")
0x78e: Push("1")
0x78f: Pop(1); Push(Stack[-3] + Stack[-1]);
0x790: Push("2")
0x791: Pop(1); Push(Stack[-4] + Stack[-1]);
0x792: Push((int) -10)
0x793: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x794: Pop(4)
0x795: Return(); Pop(14)

0x796: PushEmpty(cvector, object, int, bool, cvector, cvector, int, int, cvector, cvector, object, int, bool, cvector, cvector, int, int, cvector)
0x797: PushEmpty(bool)
0x798: Stack[-1] = (bool) 0
0x799: PushEmpty(bool)
0x79a: Stack[-1] = (bool) 0
0x79b: Push(Stack[-23])
0x79c: IF (Stack[-1] == 0) GOTO 0x7a1; Pop(1)

0x79d: Push((int) 4)
0x79e: Pop(1); Push((bool) Stack[-23] != Stack[-1])
0x79f: IF (Stack[-1] == 0) GOTO 0x7a1; Pop(1)

0x7a0: Stack[-1] = (bool) 1
0x7a1: IF (Stack[-1] == 0) GOTO 0x7a6; Pop(1)

0x7a2: Push((int) 5)
0x7a3: Pop(1); Push((bool) Stack[-22] != Stack[-1])
0x7a4: IF (Stack[-1] == 0) GOTO 0x7a6; Pop(1)

0x7a5: Stack[-1] = (bool) 1
0x7a6: IF (Stack[-1] == 0) GOTO 0x7d5; Pop(1)

0x7a7: PushEmpty(cvector, cvector)
0x7a8: PushEmpty(cvector, object)
0x7a9: Stack[-1] = Stack[-25]
0x7aa: Call2 0x6c0

0x7ab: Stack[-3] = Stack[-2]
0x7ac: Pop(2)
0x7ad: Call2 0x832

0x7ae: Stack[-11] = Stack[-2]
0x7af: Pop(2)
0x7b0: @ CreateVectorVector(Stack[-8])
0x7b1: Pop(0)
0x7b2: Stack[-7] = (int) 1
0x7b3: Push("hit")
0x7b4: Pop(1); Push(Stack[-1] + Stack[-8]);
0x7b5: @ GetGeometryLocator(Stack[-1], Stack[-7], Stack[-6], Stack[-5])
0x7b6: Pop(1)
0x7b7: Pop(0); Push((bool) Stack[-6] == 0)
0x7b8: IF (Stack[-1] == 0) GOTO 0x7ba; Pop(1)

0x7b9: GOTO 0x7c3

0x7ba: Pop(0); Push(Stack[-4] | Stack[-9]);
0x7bb: Push((float)0.70711)
0x7bc: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x7bd: IF (Stack[-1] == 0) GOTO 0x7c0; Pop(1)

0x7be: @@ add(Stack[-5])
0x7bf: Pop(0)
0x7c0: Push((int) 1)
0x7c1: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x7c2: GOTO 0x7b3

0x7c3: @@ size(Stack[-3])
0x7c4: Pop(0)
0x7c5: Push(Stack[-3])
0x7c6: IF (Stack[-1] == 0) GOTO 0x7d4; Pop(1)

0x7c7: @ irand(Stack[-2], Stack[-3])
0x7c8: Pop(0)
0x7c9: @@ get(Stack[-1], Stack[-2])
0x7ca: Pop(0)
0x7cb: PushEmpty(object, int, float, cvector, cvector)
0x7cc: Stack[-5] = Stack[-26]
0x7cd: Stack[-4] = Stack[-25]
0x7ce: Stack[-3] = Stack[-24]
0x7cf: Stack[-2] = Stack[-6]
0x7d0: Stack[-1] = -Stack[-14]; Pop(0);
0x7d1: Call2 0x7da

0x7d2: Pop(5)
0x7d3: Return(); Pop(18)

0x7d4: Stack[-8] = 0
0x7d5: PushEmpty(object)
0x7d6: Stack[-1] = Stack[-22]
0x7d7: Call2 0x76a

0x7d8: Pop(1)
0x7d9: Return(); Pop(18)

0x7da: PushEmpty(object, object, object, object)
0x7db: @ GetScene(Stack[-2])
0x7dc: Pop(0)
0x7dd: Push("scripted")
0x7de: Push("blood_dir.xml")
0x7df: @ AddActorByType(Stack[-3], Stack[-2], Stack[-4], Stack[-8], Stack[-7], Stack[-1])
0x7e0: Pop(2)
0x7e1: PushEmpty(object)
0x7e2: Stack[-1] = Stack[-10]
0x7e3: Call2 0x76a

0x7e4: Pop(1)
0x7e5: Return(); Pop(4)

0x7e6: Stack[-1] = 0
0x7e7: Stack[-2] = 0
0x7e8: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x7e9: @@ GetPosition(Stack[-3])
0x7ea: Pop(0)
0x7eb: @ GetPosition(Stack[-2])
0x7ec: Pop(0)
0x7ed: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0x7ee: Push(CvectorIndex(Stack[-1], 0))
0x7ef: Push(CvectorIndex(Stack[-2], 2))
0x7f0: @ RotateAsync(Stack[-2], Stack[-1])
0x7f1: Pop(2)
0x7f2: Return(); Pop(6)

0x7f3: PushEmpty(bool, bool)
0x7f4: @ IsLoaded(Stack[-1])
0x7f5: Pop(0)
0x7f6: Stack[-3] = Stack[-1]
0x7f7: Return(); Pop(2)

0x7f8: PushEmpty(float, cvector, float, cvector)
0x7f9: @@ GetEyesHeight(Stack[-2])
0x7fa: Pop(0)
0x7fb: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x7fc: Push(CvectorIndex(Stack[-1], 1))
0x7fd: Stack[-1] = Stack[-3]
0x7fe: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x7ff: Push("head")
0x800: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x801: Pop(1)
0x802: Return(); Pop(4)

0x803: PushEmpty(bool, int, bool, int, bool, float, cvector, cvector, bool, int, bool, int, bool, float, cvector, cvector)
0x804: @ IsExisting3DSound(Stack[-8], Stack[-17])
0x805: Pop(0)
0x806: Pop(0); Push((bool) Stack[-8] == 0)
0x807: IF (Stack[-1] == 0) GOTO 0x81c; Pop(1)

0x808: Stack[-7] = (int) 0
0x809: Push((int) 1)
0x80a: Pop(1); Push(Stack[-8] + Stack[-1]);
0x80b: Pop(1); Push(Stack[-18] + Stack[-1]);
0x80c: @ IsExisting3DSound(Stack[-7], Stack[-1])
0x80d: Pop(1)
0x80e: Pop(0); Push((bool) Stack[-6] == 0)
0x80f: IF (Stack[-1] == 0) GOTO 0x811; Pop(1)

0x810: GOTO 0x814

0x811: Push((int) 1)
0x812: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x813: GOTO 0x809

0x814: Pop(0); Push((bool) Stack[-7] == 0)
0x815: IF (Stack[-1] == 0) GOTO 0x817; Pop(1)

0x816: Return(); Pop(16)

0x817: @ irand(Stack[-5], Stack[-7])
0x818: Pop(0)
0x819: Push((int) 1)
0x81a: Pop(1); Push(Stack[-6] + Stack[-1]);
0x81b: Stack[-18] = Stack[-18] + Stack[-1]; Pop(1);
0x81c: @ Is3DSoundLoaded(Stack[-4], Stack[-17])
0x81d: Pop(0)
0x81e: Push(Stack[-4])
0x81f: IF (Stack[-1] == 0) GOTO 0x82b; Pop(1)

0x820: @ GetEyesHeight(Stack[-3])
0x821: Pop(0)
0x822: @ GetDirection(Stack[-2])
0x823: Pop(0)
0x824: Push((int) 50)
0x825: Stack[-2] = Stack[-3] * Stack[-1]; Pop(1);
0x826: Push(CvectorIndex(Stack[-1], 1))
0x827: Stack[-1] = Stack[-1] + Stack[-4]; Pop(0);
0x828: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x829: @ PlayGlobalSound(Stack[-17], Stack[-1])
0x82a: Pop(0)
0x82b: Return(); Pop(16)

0x82c: PushEmpty(object, object)
0x82d: @ self(Stack[-1])
0x82e: Pop(0)
0x82f: Stack[-3] = Stack[-1]
0x830: Return(); Pop(2)

0x831: Stack[-1] = 0
0x832: PushEmpty(float, float)
0x833: Pop(0); Push(Stack[-3] | Stack[-3]);
0x834: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x835: Push((float)0.0)
0x836: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x837: IF (Stack[-1] == 0) GOTO 0x83a; Pop(1)

0x838: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x839: Return(); Pop(2)

0x83a: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x83b: Return(); Pop(2)

0x83c: PushEmpty()
0x83d: Pop(0); Push((bool) Stack[-2] < Stack[-1])
0x83e: IF (Stack[-1] == 0) GOTO 0x841; Pop(1)

0x83f: Stack[-3] = Stack[-2]
0x840: GOTO 0x842

0x841: Stack[-3] = Stack[-1]
0x842: Return(); Pop(0)

0x843: PushEmpty()
0x844: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x845: IF (Stack[-1] == 0) GOTO 0x848; Pop(1)

0x846: Stack[-4] = Stack[-2]
0x847: Return(); Pop(0)

0x848: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x849: IF (Stack[-1] == 0) GOTO 0x84c; Pop(1)

0x84a: Stack[-4] = Stack[-1]
0x84b: Return(); Pop(0)

0x84c: Stack[-4] = Stack[-3]
0x84d: Return(); Pop(0)

0x84e: PushEmpty(object, object)
0x84f: @ CreateFloatVector(Stack[-1])
0x850: Pop(0)
0x851: @@ add(Stack[-3])
0x852: Pop(0)
0x853: Push((int) 0)
0x854: Pop(1); Push((bool) Stack[-4] < Stack[-1])
0x855: IF (Stack[-1] == 0) GOTO 0x85a; Pop(1)

0x856: Push((float)0.7)
0x857: Push((int) 500)
0x858: @ RumblePlay(Stack[-2], Stack[-1])
0x859: Pop(2)
0x85a: Push((int) 15)
0x85b: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x85c: Pop(1)
0x85d: Return(); Pop(2)

0x85e: Stack[-1] = 0
0x85f: PushEmpty(float, float)
0x860: @ GetGameTime(Stack[-1])
0x861: Pop(0)
0x862: Push((int) 1)
0x863: PushEmpty(int)
0x864: Push((int) 24)
0x865: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x866: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x867: Return(); Pop(2)

0x868: PushEmpty(bool, bool)
0x869: @ IsPlayerActor(Stack[-3], Stack[-1])
0x86a: Pop(0)
0x86b: Push(Stack[-1])
0x86c: IF (Stack[-1] == 0) GOTO 0x870; Pop(1)

0x86d: Push("attack")
0x86e: @ PlayGlobalMusic(Stack[-1])
0x86f: Pop(1)
0x870: Return(); Pop(2)

0x871: PushEmpty(object, object)
0x872: @ GetScene(Stack[-1])
0x873: Pop(0)
0x874: Push("battle")
0x875: PushEmpty(object)
0x876: Call2 0x82c

0x877: Pop(0)
0x878: @ BroadcastMessage(Stack[-2], Stack[-1], Stack[-3])
0x879: Pop(2)
0x87a: Return(); Pop(2)

0x87b: Stack[-1] = 0
0x87c: PushEmpty(int, bool, int, bool)
0x87d: Pop(0); Push((bool) Stack[-6] > Stack[-5])
0x87e: IF (Stack[-1] == 0) GOTO 0x883; Pop(1)

0x87f: Push("GenerateMoney: iMin > iMax")
0x880: @ Trace(Stack[-1])
0x881: Pop(1)
0x882: Return(); Pop(4)

0x883: Stack[-2] = (int) 0
0x884: Pop(0); Push((bool) Stack[-6] != Stack[-5])
0x885: IF (Stack[-1] == 0) GOTO 0x88a; Pop(1)

0x886: Pop(0); Push(Stack[-5] - Stack[-6]);
0x887: @ irand(Stack[-3], Stack[-1])
0x888: Pop(1)
0x889: GOTO 0x88e

0x88a: Push((int) 0)
0x88b: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x88c: IF (Stack[-1] == 0) GOTO 0x88e; Pop(1)

0x88d: Return(); Pop(4)

0x88e: Stack[-2] = Stack[-2] + Stack[-6]; Pop(0);
0x88f: Push((int) 0)
0x890: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x891: IF (Stack[-1] == 0) GOTO 0x893; Pop(1)

0x892: Return(); Pop(4)

0x893: PushEmpty(int, string)
0x894: Stack[-1] = "Money"
0x895: Call2 0x94a

0x896: Pop(1)
0x897: Push((int) 0)
0x898: @ AddItem(Stack[-3], Stack[-2], Stack[-1], Stack[-4])
0x899: Pop(2)
0x89a: Return(); Pop(4)

0x89b: PushEmpty(int, bool, int, bool)
0x89c: Push(Stack[-5])
0x89d: IF (Stack[-1] == 0) GOTO 0x8f4; Pop(1)

0x89e: PushEmpty(int, int)
0x89f: Stack[-2] = (int) 0
0x8a0: Push((int) 100)
0x8a1: PushEmpty(int)
0x8a2: Call2 0x85f

0x8a3: Pop(0)
0x8a4: Push((int) 100)
0x8a5: Pop(2); Push(Stack[-2] * Stack[-1]);
0x8a6: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x8a7: Call2 0x87c

0x8a8: Pop(2)
0x8a9: Push((int) 8)
0x8aa: @ irand(Stack[-3], Stack[-1])
0x8ab: Pop(1)
0x8ac: Push((int) 0)
0x8ad: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8ae: IF (Stack[-1] == 0) GOTO 0x8b8; Pop(1)

0x8af: PushEmpty(int, string)
0x8b0: Stack[-1] = "lemon"
0x8b1: Call2 0x94a

0x8b2: Pop(1)
0x8b3: Push((int) 0)
0x8b4: Push((int) 1)
0x8b5: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x8b6: Pop(3)
0x8b7: GOTO 0x8f3

0x8b8: Push((int) 1)
0x8b9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8ba: IF (Stack[-1] == 0) GOTO 0x8c4; Pop(1)

0x8bb: PushEmpty(int, string)
0x8bc: Stack[-1] = "rusk"
0x8bd: Call2 0x94a

0x8be: Pop(1)
0x8bf: Push((int) 0)
0x8c0: Push((int) 1)
0x8c1: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x8c2: Pop(3)
0x8c3: GOTO 0x8f3

0x8c4: Push((int) 2)
0x8c5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8c6: IF (Stack[-1] == 0) GOTO 0x8d0; Pop(1)

0x8c7: PushEmpty(int, string)
0x8c8: Stack[-1] = "hook"
0x8c9: Call2 0x94a

0x8ca: Pop(1)
0x8cb: Push((int) 0)
0x8cc: Push((int) 1)
0x8cd: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x8ce: Pop(3)
0x8cf: GOTO 0x8f3

0x8d0: Push((int) 4)
0x8d1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8d2: IF (Stack[-1] == 0) GOTO 0x8dc; Pop(1)

0x8d3: PushEmpty(int, string)
0x8d4: Stack[-1] = "syringe"
0x8d5: Call2 0x94a

0x8d6: Pop(1)
0x8d7: Push((int) 0)
0x8d8: Push((int) 1)
0x8d9: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x8da: Pop(3)
0x8db: GOTO 0x8f3

0x8dc: Push((int) 5)
0x8dd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8de: IF (Stack[-1] == 0) GOTO 0x8e8; Pop(1)

0x8df: PushEmpty(int, string)
0x8e0: Stack[-1] = "watch"
0x8e1: Call2 0x94a

0x8e2: Pop(1)
0x8e3: Push((int) 0)
0x8e4: Push((int) 1)
0x8e5: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x8e6: Pop(3)
0x8e7: GOTO 0x8f3

0x8e8: Push((int) 6)
0x8e9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8ea: IF (Stack[-1] == 0) GOTO 0x8f3; Pop(1)

0x8eb: PushEmpty(int, string)
0x8ec: Stack[-1] = "razor"
0x8ed: Call2 0x94a

0x8ee: Pop(1)
0x8ef: Push((int) 0)
0x8f0: Push((int) 1)
0x8f1: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x8f2: Pop(3)
0x8f3: GOTO 0x949

0x8f4: PushEmpty(int, int)
0x8f5: Stack[-2] = (int) 0
0x8f6: Push((int) 50)
0x8f7: PushEmpty(int)
0x8f8: Call2 0x85f

0x8f9: Pop(0)
0x8fa: Push((int) 50)
0x8fb: Pop(2); Push(Stack[-2] * Stack[-1]);
0x8fc: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x8fd: Call2 0x87c

0x8fe: Pop(2)
0x8ff: Push((int) 7)
0x900: @ irand(Stack[-3], Stack[-1])
0x901: Pop(1)
0x902: Push((int) 0)
0x903: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x904: IF (Stack[-1] == 0) GOTO 0x90e; Pop(1)

0x905: PushEmpty(int, string)
0x906: Stack[-1] = "beads"
0x907: Call2 0x94a

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
0x912: Stack[-1] = "bracelet"
0x913: Call2 0x94a

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
0x91e: Stack[-1] = "ear_ring"
0x91f: Call2 0x94a

0x920: Pop(1)
0x921: Push((int) 0)
0x922: Push((int) 1)
0x923: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x924: Pop(3)
0x925: GOTO 0x949

0x926: Push((int) 3)
0x927: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x928: IF (Stack[-1] == 0) GOTO 0x932; Pop(1)

0x929: PushEmpty(int, string)
0x92a: Stack[-1] = "gold_ring"
0x92b: Call2 0x94a

0x92c: Pop(1)
0x92d: Push((int) 0)
0x92e: Push((int) 1)
0x92f: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x930: Pop(3)
0x931: GOTO 0x949

0x932: Push((int) 4)
0x933: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x934: IF (Stack[-1] == 0) GOTO 0x93e; Pop(1)

0x935: PushEmpty(int, string)
0x936: Stack[-1] = "silver_ring"
0x937: Call2 0x94a

0x938: Pop(1)
0x939: Push((int) 0)
0x93a: Push((int) 1)
0x93b: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x93c: Pop(3)
0x93d: GOTO 0x949

0x93e: Push((int) 5)
0x93f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x940: IF (Stack[-1] == 0) GOTO 0x949; Pop(1)

0x941: PushEmpty(int, string)
0x942: Stack[-1] = "flower"
0x943: Call2 0x94a

0x944: Pop(1)
0x945: Push((int) 0)
0x946: Push((int) 1)
0x947: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x948: Pop(3)
0x949: Return(); Pop(4)

0x94a: PushEmpty(int, int)
0x94b: @ GetInvItemByName(Stack[-1], Stack[-3])
0x94c: Pop(0)
0x94d: Stack[-4] = Stack[-1]
0x94e: Return(); Pop(2)

0x94f: PushEmpty()
0x950: PushEmpty(object)
0x951: Stack[-1] = Stack[-2]
0x952: Push(-1, 0); TaskCall(0)
0x953: Call2 0x0

0x954: Pop(-1, 0); TaskReturn
0x955: Pop(1)
0x956: Return(); Pop(0)

0x957: PushEmpty(float, float)
0x958: Push("health")
0x959: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x95a: IF (Stack[-1] == 0) GOTO 0x963; Pop(1)

0x95b: Push("health")
0x95c: @ GetProperty(Stack[-1], Stack[-2])
0x95d: Pop(1)
0x95e: Push((int) 0)
0x95f: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x960: IF (Stack[-1] == 0) GOTO 0x963; Pop(1)

0x961: @ SignalDeath(Stack[-4])
0x962: Pop(0)
0x963: Return(); Pop(2)

0x964: PushEmpty()
0x965: PushEmpty(object)
0x966: Stack[-1] = Stack[-2]
0x967: Call2 0x94f

0x968: Pop(1)
0x969: Return(); Pop(0)

0x96a: PushEmpty()
0x96b: PushEmpty(object, int, float)
0x96c: Stack[-3] = Stack[-7]
0x96d: Stack[-2] = Stack[-6]
0x96e: Stack[-1] = Stack[-5]
0x96f: Call2 0x796

0x970: Pop(3)
0x971: Return(); Pop(0)

0x972: PushEmpty()
0x973: PushEmpty(object, int, float, cvector, cvector)
0x974: Stack[-5] = Stack[-11]
0x975: Stack[-4] = Stack[-10]
0x976: Stack[-3] = Stack[-9]
0x977: Stack[-2] = Stack[-7]
0x978: Stack[-1] = Stack[-6]
0x979: Call2 0x7da

0x97a: Pop(5)
0x97b: Return(); Pop(0)

0x97c: PushEmpty()
0x97d: Push("unholster")
0x97e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x97f: IF (Stack[-1] == 0) GOTO 0x987; Pop(1)

0x980: PushEmpty(bool, object)
0x981: Stack[-1] = Stack[-4]
0x982: Call2 0xabb

0x983: Stack[-5] = Stack[-2]
0x984: Pop(2)
0x985: Return(); Pop(0)

0x986: GOTO 0x99a

0x987: Push("player_shot")
0x988: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x989: IF (Stack[-1] == 0) GOTO 0x991; Pop(1)

0x98a: PushEmpty(bool, object)
0x98b: Stack[-1] = Stack[-4]
0x98c: Call2 0xac0

0x98d: Stack[-5] = Stack[-2]
0x98e: Pop(2)
0x98f: Return(); Pop(0)

0x990: GOTO 0x99a

0x991: Push("battle")
0x992: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x993: IF (Stack[-1] == 0) GOTO 0x99a; Pop(1)

0x994: PushEmpty(bool, object)
0x995: Stack[-1] = Stack[-4]
0x996: Call2 0xac5

0x997: Stack[-5] = Stack[-2]
0x998: Pop(2)
0x999: Return(); Pop(0)

0x99a: Stack[-3] = (bool) 0
0x99b: Return(); Pop(0)

0x99c: PushEmpty()
0x99d: Push("unholster")
0x99e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x99f: IF (Stack[-1] == 0) GOTO 0x9a5; Pop(1)

0x9a0: PushEmpty(object)
0x9a1: Stack[-1] = Stack[-3]
0x9a2: Call2 0xabe

0x9a3: Pop(1)
0x9a4: GOTO 0x9b4

0x9a5: Push("player_shot")
0x9a6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x9a7: IF (Stack[-1] == 0) GOTO 0x9ad; Pop(1)

0x9a8: PushEmpty(object)
0x9a9: Stack[-1] = Stack[-3]
0x9aa: Call2 0xac3

0x9ab: Pop(1)
0x9ac: GOTO 0x9b4

0x9ad: Push("battle")
0x9ae: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x9af: IF (Stack[-1] == 0) GOTO 0x9b4; Pop(1)

0x9b0: PushEmpty(object)
0x9b1: Stack[-1] = Stack[-3]
0x9b2: Call2 0xac8

0x9b3: Pop(1)
0x9b4: Return(); Pop(0)

0x9b5: PushEmpty(bool, bool)
0x9b6: PushEmpty(bool)
0x9b7: Stack[-1] = (bool) 0
0x9b8: PushEmpty(bool, object)
0x9b9: Stack[-1] = Stack[-6]
0x9ba: Call2 0xabb

0x9bb: Pop(1)
0x9bc: IF (Stack[-1] == 0) GOTO 0x9c3; Pop(1)

0x9bd: PushEmpty(bool, object)
0x9be: Stack[-1] = Stack[-6]
0x9bf: Call2 0x6cf

0x9c0: Pop(1)
0x9c1: IF (Stack[-1] == 0) GOTO 0x9c3; Pop(1)

0x9c2: Stack[-1] = (bool) 1
0x9c3: IF (Stack[-1] == 0) GOTO 0x9ca; Pop(1)

0x9c4: @@ IsWeaponHolstered(Stack[-1])
0x9c5: Pop(0)
0x9c6: Pop(0); Push((bool) Stack[-1] == 0)
0x9c7: IF (Stack[-1] == 0) GOTO 0x9ca; Pop(1)

0x9c8: Stack[-4] = (bool) 1
0x9c9: Return(); Pop(2)

0x9ca: Stack[-4] = (bool) 0
0x9cb: Return(); Pop(2)

0x9cc: PushEmpty()
0x9cd: PushEmpty(object)
0x9ce: Stack[-1] = Stack[-2]
0x9cf: Call2 0xabe

0x9d0: Pop(1)
0x9d1: Return(); Pop(0)

0x9d2: PushEmpty()
0x9d3: PushEmpty(bool, object)
0x9d4: Stack[-1] = Stack[-3]
0x9d5: Call2 0x6cf

0x9d6: Pop(1)
0x9d7: IF (Stack[-1] == 0) GOTO 0x9de; Pop(1)

0x9d8: PushEmpty(object)
0x9d9: Call2 0x82c

0x9da: Pop(0)
0x9db: Push((float)-0.05)
0x9dc: @ ReportReputationChange(Stack[-3], Stack[-2], Stack[-1])
0x9dd: Pop(2)
0x9de: Return(); Pop(0)

0x9df: PushEmpty(object, object)
0x9e0: Push("heal")
0x9e1: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x9e2: IF (Stack[-1] == 0) GOTO 0x9ed; Pop(1)

0x9e3: Push("player")
0x9e4: @ FindActor(Stack[-2], Stack[-1])
0x9e5: Pop(1)
0x9e6: PushEmpty(bool, object)
0x9e7: Stack[-1] = Stack[-3]
0x9e8: Call2 0xaca

0x9e9: Stack[-6] = Stack[-2]
0x9ea: Pop(2)
0x9eb: Return(); Pop(2)

0x9ec: Stack[-1] = 0
0x9ed: Stack[-4] = (bool) 0
0x9ee: Return(); Pop(2)

0x9ef: PushEmpty(object, object)
0x9f0: Push("heal")
0x9f1: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x9f2: IF (Stack[-1] == 0) GOTO 0x9fb; Pop(1)

0x9f3: Push("player")
0x9f4: @ FindActor(Stack[-2], Stack[-1])
0x9f5: Pop(1)
0x9f6: PushEmpty(object)
0x9f7: Stack[-1] = Stack[-2]
0x9f8: Call2 0xacd

0x9f9: Pop(1)
0x9fa: Stack[-1] = 0
0x9fb: Return(); Pop(2)

0x9fc: PushEmpty(string, string)
0x9fd: Stack[-1] = "idle"
0x9fe: Push(Stack[-3])
0x9ff: IF (Stack[-1] == 0) GOTO 0xa01; Pop(1)

0xa00: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0xa01: Stack[-4] = Stack[-1]
0xa02: Return(); Pop(2)

0xa03: PushEmpty(int, bool, int, bool)
0xa04: Stack[-2] = (int) 0
0xa05: Push("all")
0xa06: PushEmpty(string, int)
0xa07: Stack[-1] = Stack[-5]
0xa08: Call2 0x9fc

0xa09: Pop(1)
0xa0a: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0xa0b: Pop(2)
0xa0c: Pop(0); Push((bool) Stack[-1] == 0)
0xa0d: IF (Stack[-1] == 0) GOTO 0xa0f; Pop(1)

0xa0e: GOTO 0xa12

0xa0f: Push((int) 1)
0xa10: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0xa11: GOTO 0xa05

0xa12: Stack[-5] = Stack[-2]
0xa13: Return(); Pop(4)

0xa14: PushEmpty()
0xa15: PushEmpty(bool, object)
0xa16: Stack[-1] = Stack[-3]
0xa17: Call2 0xad7

0xa18: Pop(1)
0xa19: IF (Stack[-1] == 0) GOTO 0xa1c; Pop(1)

0xa1a: Stack[-2] = (int) 2
0xa1b: GOTO 0xa1d

0xa1c: Stack[-2] = (int) 0
0xa1d: Return(); Pop(0)

0xa1e: PushEmpty()
0xa1f: PushEmpty(object)
0xa20: Stack[-1] = Stack[-2]
0xa21: Call2 0xa2e

0xa22: Pop(1)
0xa23: Return(); Pop(0)

0xa24: PushEmpty()
0xa25: PushEmpty(bool, object)
0xa26: Stack[-1] = Stack[-3]
0xa27: Call2 0x752

0xa28: Pop(1)
0xa29: IF (Stack[-1] == 0) GOTO 0xa2c; Pop(1)

0xa2a: Stack[-2] = (int) 2
0xa2b: GOTO 0xa2d

0xa2c: Stack[-2] = (int) 0
0xa2d: Return(); Pop(0)

0xa2e: PushEmpty()
0xa2f: PushEmpty(object)
0xa30: Stack[-1] = Stack[-2]
0xa31: Push(-1, 6); TaskCall(3)
0xa32: Call2 0x307

0xa33: Pop(-1, 6); TaskReturn
0xa34: Pop(1)
0xa35: Return(); Pop(0)

0xa36: PushEmpty(string, string, string, string)
0xa37: PushEmpty(bool, object, string)
0xa38: Stack[-2] = Stack[-9]
0xa39: Stack[-1] = "class"
0xa3a: Call2 0x6d4

0xa3b: Pop(2)
0xa3c: Pop(1); Push((bool) Stack[-1] == 0)
0xa3d: IF (Stack[-1] == 0) GOTO 0xa40; Pop(1)

0xa3e: Stack[-7] = (bool) 0
0xa3f: Return(); Pop(4)

0xa40: Push("class")
0xa41: @ GetProperty(Stack[-1], Stack[-3])
0xa42: Pop(1)
0xa43: Push("class")
0xa44: @@ GetProperty(Stack[-1], Stack[-2])
0xa45: Pop(1)
0xa46: PushEmpty(bool)
0xa47: Stack[-1] = (bool) 0
0xa48: Pop(0); Push((bool) Stack[-6] == 0)
0xa49: IF (Stack[-1] == 0) GOTO 0xa4d; Pop(1)

0xa4a: Pop(0); Push((bool) Stack[-3] == Stack[-2])
0xa4b: IF (Stack[-1] == 0) GOTO 0xa4d; Pop(1)

0xa4c: Stack[-1] = (bool) 1
0xa4d: IF (Stack[-1] == 0) GOTO 0xa50; Pop(1)

0xa4e: Stack[-7] = (bool) 1
0xa4f: Return(); Pop(4)

0xa50: Push("rat")
0xa51: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa52: IF (Stack[-1] == 0) GOTO 0xa56; Pop(1)

0xa53: Stack[-7] = (bool) 0
0xa54: Return(); Pop(4)

0xa55: GOTO 0xa7f

0xa56: Push("rat_big")
0xa57: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa58: IF (Stack[-1] == 0) GOTO 0xa5c; Pop(1)

0xa59: Stack[-7] = (bool) 0
0xa5a: Return(); Pop(4)

0xa5b: GOTO 0xa7f

0xa5c: Push("dog")
0xa5d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa5e: IF (Stack[-1] == 0) GOTO 0xa62; Pop(1)

0xa5f: Stack[-7] = (bool) 0
0xa60: Return(); Pop(4)

0xa61: GOTO 0xa7f

0xa62: Push("grabitel")
0xa63: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa64: IF (Stack[-1] == 0) GOTO 0xa68; Pop(1)

0xa65: Stack[-7] = (bool) 0
0xa66: Return(); Pop(4)

0xa67: GOTO 0xa7f

0xa68: Push("bomber")
0xa69: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa6a: IF (Stack[-1] == 0) GOTO 0xa6e; Pop(1)

0xa6b: Stack[-7] = (bool) 0
0xa6c: Return(); Pop(4)

0xa6d: GOTO 0xa7f

0xa6e: Push("sanitar")
0xa6f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa70: IF (Stack[-1] == 0) GOTO 0xa74; Pop(1)

0xa71: Stack[-7] = (bool) 0
0xa72: Return(); Pop(4)

0xa73: GOTO 0xa7f

0xa74: Push("hunter")
0xa75: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa76: IF (Stack[-1] == 0) GOTO 0xa7a; Pop(1)

0xa77: Stack[-7] = (bool) 0
0xa78: Return(); Pop(4)

0xa79: GOTO 0xa7f

0xa7a: Push("soldier")
0xa7b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa7c: IF (Stack[-1] == 0) GOTO 0xa7f; Pop(1)

0xa7d: Stack[-7] = (bool) 0
0xa7e: Return(); Pop(4)

0xa7f: Stack[-7] = (bool) 1
0xa80: Return(); Pop(4)

0xa81: PushEmpty()
0xa82: PushEmpty(int, object)
0xa83: Stack[-1] = Stack[-4]
0xa84: Call2 0xa24

0xa85: Stack[-5] = Stack[-2]
0xa86: Pop(2)
0xa87: Return(); Pop(0)

0xa88: PushEmpty()
0xa89: PushEmpty(object)
0xa8a: Stack[-1] = Stack[-2]
0xa8b: Call2 0xa2e

0xa8c: Pop(1)
0xa8d: Return(); Pop(0)

0xa8e: PushEmpty(bool, bool)
0xa8f: PushEmpty(bool, object, bool)
0xa90: Stack[-2] = Stack[-8]
0xa91: Stack[-1] = !Stack[-6]; Pop(0);
0xa92: Call2 0xa36

0xa93: Pop(2)
0xa94: Pop(1); Push((bool) Stack[-1] == 0)
0xa95: IF (Stack[-1] == 0) GOTO 0xa98; Pop(1)

0xa96: Stack[-7] = (bool) 0
0xa97: Return(); Pop(2)

0xa98: @ CanSee(Stack[-1], Stack[-6])
0xa99: Pop(0)
0xa9a: PushEmpty(bool)
0xa9b: Stack[-1] = (bool) 1
0xa9c: Push(Stack[-2])
0xa9d: IF (Stack[-1] == 0) GOTO 0xaa6; Pop(1)

0xa9e: PushEmpty(float, object)
0xa9f: Stack[-1] = Stack[-9]
0xaa0: Call2 0x6c7

0xaa1: Pop(1)
0xaa2: Pop(0); Push(Stack[-6] * Stack[-6]);
0xaa3: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0xaa4: IF (Stack[-1] == 0) GOTO 0xaa6; Pop(1)

0xaa5: Stack[-1] = (bool) 0
0xaa6: IF (Stack[-1] == 0) GOTO 0xaa9; Pop(1)

0xaa7: Stack[-7] = (bool) 1
0xaa8: Return(); Pop(2)

0xaa9: Stack[-7] = (bool) 0
0xaaa: Return(); Pop(2)

0xaab: PushEmpty()
0xaac: Stack[-2] = (int) 0
0xaad: Return(); Pop(0)

0xaae: PushEmpty()
0xaaf: Return(); Pop(0)

0xab0: PushEmpty()
0xab1: Stack[-3] = (int) 0
0xab2: Return(); Pop(0)

0xab3: PushEmpty()
0xab4: Return(); Pop(0)

0xab5: PushEmpty()
0xab6: Stack[-2] = (int) 0
0xab7: Return(); Pop(0)

0xab8: PushEmpty()
0xab9: Return(); Pop(0)

0xaba: Return(); Pop(0)

0xabb: PushEmpty()
0xabc: Stack[-2] = (bool) 0
0xabd: Return(); Pop(0)

0xabe: PushEmpty()
0xabf: Return(); Pop(0)

0xac0: PushEmpty()
0xac1: Stack[-2] = (bool) 0
0xac2: Return(); Pop(0)

0xac3: PushEmpty()
0xac4: Return(); Pop(0)

0xac5: PushEmpty()
0xac6: Stack[-2] = (bool) 0
0xac7: Return(); Pop(0)

0xac8: PushEmpty()
0xac9: Return(); Pop(0)

0xaca: PushEmpty()
0xacb: Stack[-2] = (bool) 0
0xacc: Return(); Pop(0)

0xacd: PushEmpty()
0xace: Return(); Pop(0)

0xacf: Push(GlobalVars[0])
0xad0: Stack[-1] = (bool) 0
0xad1: GlobalVars[0] = Stack[-1]; Pop(1)
0xad2: PushEmpty(bool)
0xad3: Stack[-1] = (bool) 1
0xad4: Call2 0x89b

0xad5: Pop(1)
0xad6: Return(); Pop(0)

0xad7: PushEmpty(bool, bool)
0xad8: @ IsPlayerActor(Stack[-3], Stack[-1])
0xad9: Pop(0)
0xada: Stack[-4] = Stack[-1]
0xadb: Return(); Pop(2)

0xadc: PushEmpty()
0xadd: PushEmpty(bool, object, object, float, bool)
0xade: Stack[-4] = Stack[-8]
0xadf: Stack[-3] = Stack[-7]
0xae0: Stack[-2] = (float) 700.0
0xae1: Stack[-1] = Stack[-6]
0xae2: Call2 0xa8e

0xae3: Stack[-9] = Stack[-5]
0xae4: Pop(5)
0xae5: Return(); Pop(0)

0xae6: PushEmpty()
0xae7: PushEmpty(bool, object)
0xae8: Stack[-1] = Stack[-3]
0xae9: Call2 0x6cf

0xaea: Pop(1)
0xaeb: IF (Stack[-1] == 0) GOTO 0xaf3; Pop(1)

0xaec: PushEmpty(object)
0xaed: Call2 0x82c

0xaee: Pop(0)
0xaef: Push((float)-0.05)
0xaf0: Push((bool) 1)
0xaf1: @ ReportReputationChange(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xaf2: Pop(3)
0xaf3: Push(GlobalVars[0])
0xaf4: Stack[-1] = (bool) 1
0xaf5: GlobalVars[0] = Stack[-1]; Pop(1)
0xaf6: Push((int) 50)
0xaf7: Push((int) 40)
0xaf8: @ SetRTEnvelope(Stack[-2], Stack[-1])
0xaf9: Pop(2)
0xafa: Return(); Pop(0)

