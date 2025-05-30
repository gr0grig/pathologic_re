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
	class
	rat
	rat_big
	dog
	grabitel
	bomber
	sanitar
	hunter
	soldier
	Received steal
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
	irand (2 args)
	ResetAAS (0 args)
	Sleep (1 args)
	KillTimer (1 args)
	IsPlayerActor (2 args)
	SetTimer (2 args)
	Sleep (2 args)
	StopGroup0 (0 args)
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
	CreateFloatVector (1 args)
	RumblePlay (2 args)
	SendWorldWndMessage (2 args)
	GetGameTime (1 args)
	BroadcastMessage (3 args)
	GetVariable (2 args)
	WorkWithCorpse (1 args)
	Barter (1 args)
	Trace (1 args)
	AddItem (4 args)
	CreateInvItem (1 args)
	GetInvItemByName (2 args)
	GetProperty (2 args)
	SignalDeath (1 args)
	ReportReputationChange (3 args)
	FindActor (2 args)
	IsOverrideActive (1 args)
	StopAnimation (0 args)
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
	GTASK_1 Vars = (bool, bool) Params = 0
		EVENT_0 Op = 0xc7 Vars = (object)
		EVENT_17 Op = 0xdb Vars = (object)
		EVENT_30 Op = 0xf3 Vars = (object, object, bool)
		EVENT_40 Op = 0x10f Vars = (object)
		EVENT_42 Op = 0x123 Vars = (object, string)
		EVENT_26 Op = 0x148 Vars = (string)
		EVENT_1 Op = 0x156 Vars = (object)
		EVENT_3 Op = 0x16c Vars = (object)
		EVENT_7 Op = 0x175 Vars = (int)
		EVENT_6 Op = 0x181 Vars = ()
		EVENT_41 Op = 0x195 Vars = (object)
	GTASK_2 Vars = (object) Params = 1
		EVENT_0 Op = 0x1f7 Vars = (object)
		EVENT_17 Op = 0x20b Vars = (object)
		EVENT_30 Op = 0x223 Vars = (object, object, bool)
		EVENT_40 Op = 0x23f Vars = (object)
		EVENT_42 Op = 0x253 Vars = (object, string)
		EVENT_26 Op = 0x278 Vars = (string)
		EVENT_41 Op = 0x291 Vars = (object)
		EVENT_7 Op = 0x29a Vars = (int)
		EVENT_6 Op = 0x2bd Vars = ()
		EVENT_1 Op = 0x2c4 Vars = (object)
	GTASK_3 Vars = (object, int, int, bool, float, int) Params = 1
	GTASK_4 Vars = (bool, object, bool) Params = 6
		EVENT_6 Op = 0x576 Vars = ()
		EVENT_7 Op = 0x5ae Vars = (int)
		EVENT_1 Op = 0x5c9 Vars = (object)
		EVENT_2 Op = 0x5d8 Vars = (object)
		EVENT_10 Op = 0x65e Vars = (object)
		EVENT_41 Op = 0x669 Vars = (object)

Events:
EVENT_16 Op = 0x982 Vars = (object, string)
EVENT_41 Op = 0x98f Vars = (object)
EVENT_22 Op = 0x995 Vars = (object, int, float, float)
EVENT_43 Op = 0x99d Vars = (object, int, float, float, cvector, cvector)

0x0: PushEmpty()
0x1: EventDisable(0)
0x2: PushEmpty(object)
0x3: Stack[-1] = Stack[-2]
0x4: Call2 0x21

0x5: Pop(1)
0x6: PushEmpty(object)
0x7: Stack[-1] = Stack[-2]
0x8: Call2 0xb4e

0x9: Pop(1)
0xa: EventEnable(0)
0xb: @ Hold()
0xc: Pop(0)
0xd: GOTO 0xb

0xe: Return(); Pop(0)

0xf: PushEmpty(int, int)
0x10: PushEmpty(int, object)
0x11: Stack[-1] = Stack[-5]
0x12: Call2 0xabf

0x13: Stack[-3] = Stack[-2]
0x14: Pop(2)
0x15: Push((int) 0)
0x16: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x17: IF (Stack[-1] == 0) GOTO 0x1c; Pop(1)

0x18: PushEmpty(object)
0x19: Stack[-1] = Stack[-4]
0x1a: Call2 0xac2

0x1b: Pop(1)
0x1c: Return(); Pop(2)

0x1d: PushEmpty()
0x1e: Call2 0xac8

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
0x67: Call2 0x7ce

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
0x89: Call2 0x7ce

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

0x9c: PushEmpty(int, int, int, int)
0x9d: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x9e: Push((bool) 1)
0x9f: @ SensePlayerOnly(Stack[-1])
0xa0: Pop(1)
0xa1: PushEmpty()
0xa2: Call2 0xb0f

0xa3: Pop(0)
0xa4: PushEmpty()
0xa5: Call2 0xbe

0xa6: Pop(0)
0xa7: Push((int) 2)
0xa8: @ irand(Stack[-3], Stack[-1])
0xa9: Pop(1)
0xaa: Push((int) 0)
0xab: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xac: IF (Stack[-1] == 0) GOTO 0xb5; Pop(1)

0xad: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0xae: PushEmpty()
0xaf: Call2 0xb24

0xb0: Pop(0)
0xb1: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0xb2: @ ResetAAS()
0xb3: Pop(0)
0xb4: GOTO 0xbc

0xb5: Push((int) 4)
0xb6: @ irand(Stack[-2], Stack[-1])
0xb7: Pop(1)
0xb8: Push((int) 1)
0xb9: Pop(1); Push(Stack[-2] + Stack[-1]);
0xba: @ Sleep(Stack[-1])
0xbb: Pop(1)
0xbc: GOTO 0xa7

0xbd: Return(); Pop(4)

0xbe: PushEmpty(bool)
0xbf: Call2 0x7be

0xc0: Pop(0)
0xc1: Pop(1); Push((bool) Stack[-1] == 0)
0xc2: IF (Stack[-1] == 0) GOTO 0xc6; Pop(1)

0xc3: PushEmpty()
0xc4: Call2 0xac8

0xc5: Pop(0)
0xc6: Return(); Pop(0)

0xc7: PushEmpty(int, int)
0xc8: PushEmpty(int, object)
0xc9: Stack[-1] = Stack[-5]
0xca: Call2 0xabf

0xcb: Stack[-3] = Stack[-2]
0xcc: Pop(2)
0xcd: Push((int) 0)
0xce: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xcf: IF (Stack[-1] == 0) GOTO 0xda; Pop(1)

0xd0: Push((int) 1)
0xd1: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xd2: IF (Stack[-1] == 0) GOTO 0xd6; Pop(1)

0xd3: PushEmpty()
0xd4: Call2 0x188

0xd5: Pop(0)
0xd6: PushEmpty(object)
0xd7: Stack[-1] = Stack[-4]
0xd8: Call2 0xac2

0xd9: Pop(1)
0xda: Return(); Pop(2)

0xdb: PushEmpty(int, int)
0xdc: PushEmpty(object)
0xdd: Stack[-1] = Stack[-4]
0xde: Call2 0x9fd

0xdf: Pop(1)
0xe0: PushEmpty(int, object)
0xe1: Stack[-1] = Stack[-5]
0xe2: Call2 0xa38

0xe3: Stack[-3] = Stack[-2]
0xe4: Pop(2)
0xe5: Push((int) 0)
0xe6: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xe7: IF (Stack[-1] == 0) GOTO 0xf2; Pop(1)

0xe8: Push((int) 1)
0xe9: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xea: IF (Stack[-1] == 0) GOTO 0xee; Pop(1)

0xeb: PushEmpty()
0xec: Call2 0x188

0xed: Pop(0)
0xee: PushEmpty(object)
0xef: Stack[-1] = Stack[-4]
0xf0: Call2 0xa42

0xf1: Pop(1)
0xf2: Return(); Pop(2)

0xf3: PushEmpty(int, int)
0xf4: PushEmpty(bool, object, object, bool)
0xf5: Stack[-3] = Stack[-9]
0xf6: Stack[-2] = Stack[-8]
0xf7: Stack[-1] = Stack[-7]
0xf8: Call2 0xb44

0xf9: Pop(3)
0xfa: IF (Stack[-1] == 0) GOTO 0x10e; Pop(1)

0xfb: PushEmpty(int, object, bool)
0xfc: Stack[-2] = Stack[-8]
0xfd: Stack[-1] = Stack[-6]
0xfe: Call2 0xa95

0xff: Stack[-4] = Stack[-3]
0x100: Pop(3)
0x101: Push((int) 0)
0x102: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x103: IF (Stack[-1] == 0) GOTO 0x10e; Pop(1)

0x104: Push((int) 1)
0x105: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x106: IF (Stack[-1] == 0) GOTO 0x10a; Pop(1)

0x107: PushEmpty()
0x108: Call2 0x188

0x109: Pop(0)
0x10a: PushEmpty(object)
0x10b: Stack[-1] = Stack[-6]
0x10c: Call2 0xa9c

0x10d: Pop(1)
0x10e: Return(); Pop(2)

0x10f: PushEmpty(int, int)
0x110: PushEmpty(int, object)
0x111: Stack[-1] = Stack[-5]
0x112: Call2 0xac9

0x113: Stack[-3] = Stack[-2]
0x114: Pop(2)
0x115: Push((int) 0)
0x116: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x117: IF (Stack[-1] == 0) GOTO 0x122; Pop(1)

0x118: Push((int) 1)
0x119: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x11a: IF (Stack[-1] == 0) GOTO 0x11e; Pop(1)

0x11b: PushEmpty()
0x11c: Call2 0x188

0x11d: Pop(0)
0x11e: PushEmpty(object)
0x11f: Stack[-1] = Stack[-4]
0x120: Call2 0xad9

0x121: Pop(1)
0x122: Return(); Pop(2)

0x123: PushEmpty(int, int)
0x124: PushEmpty(bool, object, string)
0x125: Stack[-2] = Stack[-7]
0x126: Stack[-1] = Stack[-6]
0x127: Call2 0x9a7

0x128: Pop(2)
0x129: IF (Stack[-1] == 0) GOTO 0x133; Pop(1)

0x12a: PushEmpty()
0x12b: Call2 0x188

0x12c: Pop(0)
0x12d: PushEmpty(object, string)
0x12e: Stack[-2] = Stack[-6]
0x12f: Stack[-1] = Stack[-5]
0x130: Call2 0x9c7

0x131: Pop(2)
0x132: GOTO 0x147

0x133: PushEmpty(int, string, object)
0x134: Stack[-2] = Stack[-6]
0x135: Stack[-1] = Stack[-7]
0x136: Call2 0xadf

0x137: Stack[-4] = Stack[-3]
0x138: Pop(3)
0x139: Push((int) 0)
0x13a: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x13b: IF (Stack[-1] == 0) GOTO 0x147; Pop(1)

0x13c: Push((int) 1)
0x13d: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x13e: IF (Stack[-1] == 0) GOTO 0x142; Pop(1)

0x13f: PushEmpty()
0x140: Call2 0x188

0x141: Pop(0)
0x142: PushEmpty(string, object)
0x143: Stack[-2] = Stack[-5]
0x144: Stack[-1] = Stack[-6]
0x145: Call2 0xae2

0x146: Pop(2)
0x147: Return(); Pop(2)

0x148: PushEmpty()
0x149: PushEmpty(bool, string)
0x14a: Stack[-1] = Stack[-3]
0x14b: Call2 0xa0a

0x14c: Pop(1)
0x14d: IF (Stack[-1] == 0) GOTO 0x155; Pop(1)

0x14e: PushEmpty()
0x14f: Call2 0x188

0x150: Pop(0)
0x151: PushEmpty(string)
0x152: Stack[-1] = Stack[-2]
0x153: Call2 0xa1a

0x154: Pop(1)
0x155: Return(); Pop(0)

0x156: PushEmpty()
0x157: Push( Stack[0 + Tasks[-1].StackPointer] )
0x158: IF (Stack[-1] == 0) GOTO 0x15a; Pop(1)

0x159: Return(); Pop(0)

0x15a: PushEmpty(bool, object)
0x15b: Stack[-1] = Stack[-3]
0x15c: Call2 0x9e0

0x15d: Pop(1)
0x15e: IF (Stack[-1] == 0) GOTO 0x167; Pop(1)

0x15f: PushEmpty()
0x160: Call2 0x188

0x161: Pop(0)
0x162: PushEmpty(object)
0x163: Stack[-1] = Stack[-2]
0x164: Call2 0x9f7

0x165: Pop(1)
0x166: GOTO 0x16b

0x167: PushEmpty(object)
0x168: Stack[-1] = Stack[-2]
0x169: Call2 0x19e

0x16a: Pop(1)
0x16b: Return(); Pop(0)

0x16c: PushEmpty()
0x16d: Push( Stack[0 + Tasks[-1].StackPointer] )
0x16e: IF (Stack[-1] == 0) GOTO 0x170; Pop(1)

0x16f: Return(); Pop(0)

0x170: PushEmpty(object)
0x171: Stack[-1] = Stack[-2]
0x172: Call2 0x19e

0x173: Pop(1)
0x174: Return(); Pop(0)

0x175: PushEmpty()
0x176: Push((int) 110)
0x177: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x178: IF (Stack[-1] == 0) GOTO 0x17a; Pop(1)

0x179: Return(); Pop(0)

0x17a: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x17b: Push((int) 110)
0x17c: @ KillTimer(Stack[-1])
0x17d: Pop(1)
0x17e: @ ResetAAS()
0x17f: Pop(0)
0x180: Return(); Pop(0)

0x181: PushEmpty()
0x182: Call2 0x188

0x183: Pop(0)
0x184: PushEmpty()
0x185: Call2 0xac8

0x186: Pop(0)
0x187: Return(); Pop(0)

0x188: Push((int) 110)
0x189: @ KillTimer(Stack[-1])
0x18a: Pop(1)
0x18b: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x18c: Push( Stack[0 + Tasks[-1].StackPointer] )
0x18d: IF (Stack[-1] == 0) GOTO 0x192; Pop(1)

0x18e: PushEmpty()
0x18f: Call2 0xb3f

0x190: Pop(0)
0x191: GOTO 0x194

0x192: @ Stop()
0x193: Pop(0)
0x194: Return(); Pop(0)

0x195: PushEmpty()
0x196: PushEmpty()
0x197: Call2 0x188

0x198: Pop(0)
0x199: PushEmpty(object)
0x19a: Stack[-1] = Stack[-2]
0x19b: Call2 0x98f

0x19c: Pop(1)
0x19d: Return(); Pop(0)

0x19e: PushEmpty(bool, int, bool, int)
0x19f: Push( Stack[1 + Tasks[-1].StackPointer] )
0x1a0: IF (Stack[-1] == 0) GOTO 0x1a2; Pop(1)

0x1a1: Return(); Pop(4)

0x1a2: @ IsPlayerActor(Stack[-5], Stack[-2])
0x1a3: Pop(0)
0x1a4: Pop(0); Push((bool) Stack[-2] == 0)
0x1a5: IF (Stack[-1] == 0) GOTO 0x1a7; Pop(1)

0x1a6: Return(); Pop(4)

0x1a7: PushEmpty(int, object)
0x1a8: Stack[-1] = Stack[-7]
0x1a9: Call2 0xa27

0x1aa: Stack[-3] = Stack[-2]
0x1ab: Pop(2)
0x1ac: Push((int) 0)
0x1ad: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x1ae: IF (Stack[-1] == 0) GOTO 0x1be; Pop(1)

0x1af: Push((int) 1)
0x1b0: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x1b1: IF (Stack[-1] == 0) GOTO 0x1b5; Pop(1)

0x1b2: PushEmpty()
0x1b3: Call2 0x188

0x1b4: Pop(0)
0x1b5: PushEmpty(object)
0x1b6: Stack[-1] = Stack[-6]
0x1b7: Call2 0xa30

0x1b8: Pop(1)
0x1b9: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x1ba: Push((int) 110)
0x1bb: Push((float)5.0)
0x1bc: @ SetTimer(Stack[-2], Stack[-1])
0x1bd: Pop(2)
0x1be: Return(); Pop(4)

0x1bf: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x1c0: Stack[0 + Tasks[-1].StackPointer] = Stack[-7]
0x1c1: PushEmpty()
0x1c2: Call2 0x1f2

0x1c3: Pop(0)
0x1c4: @ GetDirection(Stack[-3])
0x1c5: Pop(0)
0x1c6: PushEmpty(cvector, object)
0x1c7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1c8: Call2 0x68b

0x1c9: Stack[-4] = Stack[-2]
0x1ca: Pop(2)
0x1cb: PushEmpty(float, cvector, cvector)
0x1cc: Stack[-2] = Stack[-6]
0x1cd: Stack[-1] = Stack[-5]
0x1ce: Call2 0x82c

0x1cf: Pop(2)
0x1d0: Push((int) 0)
0x1d1: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x1d2: IF (Stack[-1] == 0) GOTO 0x1d9; Pop(1)

0x1d3: PushEmpty(object)
0x1d4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1d5: Call2 0x7b3

0x1d6: Pop(1)
0x1d7: Stack[-1] = (bool) 1
0x1d8: GOTO 0x1dc

0x1d9: Push((float)1.5)
0x1da: @ Sleep(Stack[-1], Stack[-2])
0x1db: Pop(1)
0x1dc: Push(Stack[-1])
0x1dd: IF (Stack[-1] == 0) GOTO 0x1ec; Pop(1)

0x1de: PushEmpty(object)
0x1df: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1e0: Call2 0x7b3

0x1e1: Pop(1)
0x1e2: Push((int) 111)
0x1e3: Push((float)0.5)
0x1e4: @ SetTimer(Stack[-2], Stack[-1])
0x1e5: Pop(2)
0x1e6: Push((float)5.0)
0x1e7: @ Sleep(Stack[-1])
0x1e8: Pop(1)
0x1e9: Push((int) 111)
0x1ea: @ KillTimer(Stack[-1])
0x1eb: Pop(1)
0x1ec: @ StopAsync()
0x1ed: Pop(0)
0x1ee: Push("head")
0x1ef: @ UnlookAsync(Stack[-1])
0x1f0: Pop(1)
0x1f1: Return(); Pop(6)

0x1f2: PushEmpty(object)
0x1f3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1f4: Call2 0x7c3

0x1f5: Pop(1)
0x1f6: Return(); Pop(0)

0x1f7: PushEmpty(int, int)
0x1f8: PushEmpty(int, object)
0x1f9: Stack[-1] = Stack[-5]
0x1fa: Call2 0xabf

0x1fb: Stack[-3] = Stack[-2]
0x1fc: Pop(2)
0x1fd: Push((int) 0)
0x1fe: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x1ff: IF (Stack[-1] == 0) GOTO 0x20a; Pop(1)

0x200: Push((int) 1)
0x201: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x202: IF (Stack[-1] == 0) GOTO 0x206; Pop(1)

0x203: PushEmpty()
0x204: Call2 0x286

0x205: Pop(0)
0x206: PushEmpty(object)
0x207: Stack[-1] = Stack[-4]
0x208: Call2 0xac2

0x209: Pop(1)
0x20a: Return(); Pop(2)

0x20b: PushEmpty(int, int)
0x20c: PushEmpty(object)
0x20d: Stack[-1] = Stack[-4]
0x20e: Call2 0x9fd

0x20f: Pop(1)
0x210: PushEmpty(int, object)
0x211: Stack[-1] = Stack[-5]
0x212: Call2 0xa38

0x213: Stack[-3] = Stack[-2]
0x214: Pop(2)
0x215: Push((int) 0)
0x216: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x217: IF (Stack[-1] == 0) GOTO 0x222; Pop(1)

0x218: Push((int) 1)
0x219: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x21a: IF (Stack[-1] == 0) GOTO 0x21e; Pop(1)

0x21b: PushEmpty()
0x21c: Call2 0x286

0x21d: Pop(0)
0x21e: PushEmpty(object)
0x21f: Stack[-1] = Stack[-4]
0x220: Call2 0xa42

0x221: Pop(1)
0x222: Return(); Pop(2)

0x223: PushEmpty(int, int)
0x224: PushEmpty(bool, object, object, bool)
0x225: Stack[-3] = Stack[-9]
0x226: Stack[-2] = Stack[-8]
0x227: Stack[-1] = Stack[-7]
0x228: Call2 0xb44

0x229: Pop(3)
0x22a: IF (Stack[-1] == 0) GOTO 0x23e; Pop(1)

0x22b: PushEmpty(int, object, bool)
0x22c: Stack[-2] = Stack[-8]
0x22d: Stack[-1] = Stack[-6]
0x22e: Call2 0xa95

0x22f: Stack[-4] = Stack[-3]
0x230: Pop(3)
0x231: Push((int) 0)
0x232: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x233: IF (Stack[-1] == 0) GOTO 0x23e; Pop(1)

0x234: Push((int) 1)
0x235: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x236: IF (Stack[-1] == 0) GOTO 0x23a; Pop(1)

0x237: PushEmpty()
0x238: Call2 0x286

0x239: Pop(0)
0x23a: PushEmpty(object)
0x23b: Stack[-1] = Stack[-6]
0x23c: Call2 0xa9c

0x23d: Pop(1)
0x23e: Return(); Pop(2)

0x23f: PushEmpty(int, int)
0x240: PushEmpty(int, object)
0x241: Stack[-1] = Stack[-5]
0x242: Call2 0xac9

0x243: Stack[-3] = Stack[-2]
0x244: Pop(2)
0x245: Push((int) 0)
0x246: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x247: IF (Stack[-1] == 0) GOTO 0x252; Pop(1)

0x248: Push((int) 1)
0x249: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x24a: IF (Stack[-1] == 0) GOTO 0x24e; Pop(1)

0x24b: PushEmpty()
0x24c: Call2 0x286

0x24d: Pop(0)
0x24e: PushEmpty(object)
0x24f: Stack[-1] = Stack[-4]
0x250: Call2 0xad9

0x251: Pop(1)
0x252: Return(); Pop(2)

0x253: PushEmpty(int, int)
0x254: PushEmpty(bool, object, string)
0x255: Stack[-2] = Stack[-7]
0x256: Stack[-1] = Stack[-6]
0x257: Call2 0x9a7

0x258: Pop(2)
0x259: IF (Stack[-1] == 0) GOTO 0x263; Pop(1)

0x25a: PushEmpty()
0x25b: Call2 0x286

0x25c: Pop(0)
0x25d: PushEmpty(object, string)
0x25e: Stack[-2] = Stack[-6]
0x25f: Stack[-1] = Stack[-5]
0x260: Call2 0x9c7

0x261: Pop(2)
0x262: GOTO 0x277

0x263: PushEmpty(int, string, object)
0x264: Stack[-2] = Stack[-6]
0x265: Stack[-1] = Stack[-7]
0x266: Call2 0xadf

0x267: Stack[-4] = Stack[-3]
0x268: Pop(3)
0x269: Push((int) 0)
0x26a: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x26b: IF (Stack[-1] == 0) GOTO 0x277; Pop(1)

0x26c: Push((int) 1)
0x26d: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x26e: IF (Stack[-1] == 0) GOTO 0x272; Pop(1)

0x26f: PushEmpty()
0x270: Call2 0x286

0x271: Pop(0)
0x272: PushEmpty(string, object)
0x273: Stack[-2] = Stack[-5]
0x274: Stack[-1] = Stack[-6]
0x275: Call2 0xae2

0x276: Pop(2)
0x277: Return(); Pop(2)

0x278: PushEmpty()
0x279: PushEmpty(bool, string)
0x27a: Stack[-1] = Stack[-3]
0x27b: Call2 0xa0a

0x27c: Pop(1)
0x27d: IF (Stack[-1] == 0) GOTO 0x285; Pop(1)

0x27e: PushEmpty()
0x27f: Call2 0x286

0x280: Pop(0)
0x281: PushEmpty(string)
0x282: Stack[-1] = Stack[-2]
0x283: Call2 0xa1a

0x284: Pop(1)
0x285: Return(); Pop(0)

0x286: @ StopGroup0()
0x287: Pop(0)
0x288: @ StopAsync()
0x289: Pop(0)
0x28a: Push("head")
0x28b: @ UnlookAsync(Stack[-1])
0x28c: Pop(1)
0x28d: Push((int) 111)
0x28e: @ KillTimer(Stack[-1])
0x28f: Pop(1)
0x290: Return(); Pop(0)

0x291: PushEmpty()
0x292: PushEmpty()
0x293: Call2 0x286

0x294: Pop(0)
0x295: PushEmpty(object)
0x296: Stack[-1] = Stack[-2]
0x297: Call2 0x98f

0x298: Pop(1)
0x299: Return(); Pop(0)

0x29a: PushEmpty(cvector, cvector, cvector, cvector)
0x29b: Push((int) 111)
0x29c: Pop(1); Push((bool) Stack[-6] != Stack[-1])
0x29d: IF (Stack[-1] == 0) GOTO 0x29f; Pop(1)

0x29e: Return(); Pop(4)

0x29f: PushEmpty(bool, object)
0x2a0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2a1: Call2 0x71d

0x2a2: Pop(1)
0x2a3: Pop(1); Push((bool) Stack[-1] == 0)
0x2a4: IF (Stack[-1] == 0) GOTO 0x2a9; Pop(1)

0x2a5: PushEmpty()
0x2a6: Call2 0x286

0x2a7: Pop(0)
0x2a8: Return(); Pop(4)

0x2a9: @ GetDirection(Stack[-2])
0x2aa: Pop(0)
0x2ab: PushEmpty(cvector, object)
0x2ac: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2ad: Call2 0x68b

0x2ae: Stack[-3] = Stack[-2]
0x2af: Pop(2)
0x2b0: PushEmpty(float, cvector, cvector)
0x2b1: Stack[-2] = Stack[-5]
0x2b2: Stack[-1] = Stack[-4]
0x2b3: Call2 0x82c

0x2b4: Pop(2)
0x2b5: Push((float)0.5)
0x2b6: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x2b7: IF (Stack[-1] == 0) GOTO 0x2bc; Pop(1)

0x2b8: PushEmpty(object)
0x2b9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2ba: Call2 0x7b3

0x2bb: Pop(1)
0x2bc: Return(); Pop(4)

0x2bd: PushEmpty()
0x2be: Call2 0x286

0x2bf: Pop(0)
0x2c0: PushEmpty()
0x2c1: Call2 0xac8

0x2c2: Pop(0)
0x2c3: Return(); Pop(0)

0x2c4: PushEmpty()
0x2c5: PushEmpty(bool, object)
0x2c6: Stack[-1] = Stack[-3]
0x2c7: Call2 0x9e0

0x2c8: Pop(1)
0x2c9: IF (Stack[-1] == 0) GOTO 0x2d1; Pop(1)

0x2ca: PushEmpty()
0x2cb: Call2 0x286

0x2cc: Pop(0)
0x2cd: PushEmpty(object)
0x2ce: Stack[-1] = Stack[-2]
0x2cf: Call2 0x9f7

0x2d0: Pop(1)
0x2d1: Return(); Pop(0)

0x2d2: PushEmpty()
0x2d3: PushEmpty(object, bool, float)
0x2d4: Stack[-3] = Stack[-4]
0x2d5: Stack[-2] = (bool) 1
0x2d6: Stack[-1] = (float) 180.0
0x2d7: Call2 0x2e0

0x2d8: Pop(3)
0x2d9: Return(); Pop(0)

0x2da: PushEmpty()
0x2db: Stack[-3] = (float) 0.05
0x2dc: Return(); Pop(0)

0x2dd: PushEmpty()
0x2de: Stack[-3] = (int) 0
0x2df: Return(); Pop(0)

0x2e0: PushEmpty(float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float, float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float)
0x2e1: PushEmpty()
0x2e2: Call2 0x3c5

0x2e3: Pop(0)
0x2e4: Stack[5 + Tasks[-1].StackPointer] = (int)0
0x2e5: Push("@GetAttackDistance")
0x2e6: Push((int) 1)
0x2e7: Pop(2); Push(IsFuncExist(Stack[-27], Stack[-2], Stack[-1]))
0x2e8: IF (Stack[-1] == 0) GOTO 0x2ee; Pop(1)

0x2e9: @@ GetAttackDistance(Stack[-11])
0x2ea: Pop(0)
0x2eb: Push((int) 50)
0x2ec: Stack[-12] = Stack[-12] + Stack[-1]; Pop(1);
0x2ed: GOTO 0x2ef

0x2ee: Stack[-11] = Stack[-23]
0x2ef: Push((int) 150)
0x2f0: Pop(1); Push((bool) Stack[-12] >= Stack[-1])
0x2f1: IF (Stack[-1] == 0) GOTO 0x2f3; Pop(1)

0x2f2: Stack[-11] = (int) 150
0x2f3: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x2f4: Stack[0 + Tasks[-1].StackPointer] = Stack[-25]
0x2f5: @ IsPlayerActor(Stack[-0], Stack[-8])
0x2f6: Pop(0)
0x2f7: Push(Stack[-8])
0x2f8: IF (Stack[-1] == 0) GOTO 0x301; Pop(1)

0x2f9: Push("attack")
0x2fa: @ PlayGlobalMusic(Stack[-1])
0x2fb: Pop(1)
0x2fc: PushEmpty(object)
0x2fd: Call2 0x7f7

0x2fe: Pop(0)
0x2ff: @ SendPlayerEnemy(Stack[-26], Stack[-1])
0x300: Pop(1)
0x301: Push(Stack[-24])
0x302: IF (Stack[-1] == 0) GOTO 0x305; Pop(1)

0x303: Stack[-7] = (bool) 0
0x304: GOTO 0x306

0x305: Stack[-7] = (bool) 1
0x306: Push((float)400.0)
0x307: Stack[-7] = Stack[-1] + Stack[-12]; Pop(1);
0x308: PushEmpty(bool)
0x309: Stack[-1] = (bool) 0
0x30a: PushEmpty(bool, object)
0x30b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x30c: Call2 0x71d

0x30d: Pop(1)
0x30e: IF (Stack[-1] == 0) GOTO 0x312; Pop(1)

0x30f: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x310: IF (Stack[-1] == 0) GOTO 0x312; Pop(1)

0x311: Stack[-1] = (bool) 1
0x312: IF (Stack[-1] == 0) GOTO 0x3b4; Pop(1)

0x313: PushEmpty()
0x314: Call2 0x562

0x315: Pop(0)
0x316: @@ GetPFPosition(Stack[-10])
0x317: Pop(0)
0x318: @ GetPFPosition(Stack[-9])
0x319: Pop(0)
0x31a: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0x31b: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x31c: Pop(0); Push(Stack[-6] * Stack[-6]);
0x31d: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0x31e: IF (Stack[-1] == 0) GOTO 0x32e; Pop(1)

0x31f: PushEmpty(bool, object, float, float, bool, bool)
0x320: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0x321: Stack[-4] = Stack[-17]
0x322: Stack[-3] = (float) 3000.0
0x323: Stack[-2] = (bool) 1
0x324: Stack[-1] = (bool) 0
0x325: Push(-6, 3); TaskCall(4)
0x326: Call2 0x57d

0x327: Pop(-6, 3); TaskReturn
0x328: Pop(5)
0x329: Pop(1); Push((bool) Stack[-1] == 0)
0x32a: IF (Stack[-1] == 0) GOTO 0x32c; Pop(1)

0x32b: GOTO 0x3b4

0x32c: Stack[-7] = (bool) 0
0x32d: GOTO 0x3b3

0x32e: Pop(0); Push(Stack[-23] * Stack[-23]);
0x32f: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0x330: IF (Stack[-1] == 0) GOTO 0x3ab; Pop(1)

0x331: @@ GetPFPosition(Stack[-3])
0x332: Pop(0)
0x333: @ CanReachByPF(Stack[-2], Stack[-3])
0x334: Pop(0)
0x335: Pop(0); Push((bool) Stack[-2] == 0)
0x336: IF (Stack[-1] == 0) GOTO 0x346; Pop(1)

0x337: PushEmpty(bool, object, float, float, bool, bool)
0x338: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0x339: Stack[-4] = Stack[-17]
0x33a: Stack[-3] = (float) 3000.0
0x33b: Stack[-2] = (bool) 1
0x33c: Stack[-1] = (bool) 0
0x33d: Push(-6, 3); TaskCall(4)
0x33e: Call2 0x57d

0x33f: Pop(-6, 3); TaskReturn
0x340: Pop(5)
0x341: Pop(1); Push((bool) Stack[-1] == 0)
0x342: IF (Stack[-1] == 0) GOTO 0x344; Pop(1)

0x343: GOTO 0x3b4

0x344: Stack[-7] = (bool) 0
0x345: GOTO 0x308

0x346: Pop(0); Push((bool) Stack[-7] == 0)
0x347: IF (Stack[-1] == 0) GOTO 0x35f; Pop(1)

0x348: PushEmpty(object)
0x349: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x34a: Call2 0x7b3

0x34b: Pop(1)
0x34c: Push("all")
0x34d: Push("attack_on")
0x34e: @ PlayAnimation(Stack[-2], Stack[-1])
0x34f: Pop(2)
0x350: @ WaitForAnimEnd()
0x351: Pop(0)
0x352: PushEmpty()
0x353: Call2 0x562

0x354: Pop(0)
0x355: @ StopAsync()
0x356: Pop(0)
0x357: Stack[-7] = (bool) 1
0x358: PushEmpty(bool, object)
0x359: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x35a: Call2 0x71d

0x35b: Pop(1)
0x35c: Pop(1); Push((bool) Stack[-1] == 0)
0x35d: IF (Stack[-1] == 0) GOTO 0x35f; Pop(1)

0x35e: GOTO 0x3b4

0x35f: @ rand(Stack[-1])
0x360: Pop(0)
0x361: PushEmpty(bool)
0x362: Stack[-1] = (bool) 1
0x363: Push((float)0.25)
0x364: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x365: IF (Stack[-1] == 0) GOTO 0x36b; Pop(1)

0x366: PushEmpty(bool)
0x367: Call2 0x537

0x368: Pop(0)
0x369: IF (Stack[-1] == 0) GOTO 0x36b; Pop(1)

0x36a: Stack[-1] = (bool) 0
0x36b: IF (Stack[-1] == 0) GOTO 0x37c; Pop(1)

0x36c: @ Face(Stack[-0])
0x36d: Pop(0)
0x36e: PushEmpty()
0x36f: Call2 0x569

0x370: Pop(0)
0x371: Push("all")
0x372: Push("attack_stay")
0x373: @ PlayAnimation(Stack[-2], Stack[-1])
0x374: Pop(2)
0x375: PushEmpty(bool, float)
0x376: Stack[-1] = Stack[-25]
0x377: Call2 0x4b3

0x378: Pop(2)
0x379: @ StopAsync()
0x37a: Pop(0)
0x37b: GOTO 0x3aa

0x37c: @ Face(Stack[-0])
0x37d: Pop(0)
0x37e: Push("all")
0x37f: Push("fjump")
0x380: @ PlayAnimation(Stack[-2], Stack[-1])
0x381: Pop(2)
0x382: @ WaitForAnimEnd()
0x383: Pop(0)
0x384: PushEmpty()
0x385: Call2 0x562

0x386: Pop(0)
0x387: Push(CVector(0.0, 0.0, 0.0))
0x388: @ SetSpeed(Stack[-1])
0x389: Pop(1)
0x38a: @ Stop()
0x38b: Pop(0)
0x38c: @ StopAsync()
0x38d: Pop(0)
0x38e: PushEmpty(bool)
0x38f: Call2 0x537

0x390: Pop(0)
0x391: Pop(1); Push((bool) Stack[-1] == 0)
0x392: IF (Stack[-1] == 0) GOTO 0x3aa; Pop(1)

0x393: PushEmpty(bool, object)
0x394: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x395: Call2 0x71d

0x396: Pop(1)
0x397: Pop(1); Push((bool) Stack[-1] == 0)
0x398: IF (Stack[-1] == 0) GOTO 0x39a; Pop(1)

0x399: GOTO 0x3b4

0x39a: @@ GetPFPosition(Stack[-10])
0x39b: Pop(0)
0x39c: @ GetPFPosition(Stack[-9])
0x39d: Pop(0)
0x39e: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0x39f: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x3a0: Pop(0); Push(Stack[-23] * Stack[-23]);
0x3a1: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x3a2: IF (Stack[-1] == 0) GOTO 0x3aa; Pop(1)

0x3a3: PushEmpty(bool, float)
0x3a4: Stack[-1] = Stack[-25]
0x3a5: Call2 0x40f

0x3a6: Pop(1)
0x3a7: Pop(1); Push((bool) Stack[-1] == 0)
0x3a8: IF (Stack[-1] == 0) GOTO 0x3aa; Pop(1)

0x3a9: GOTO 0x3b4

0x3aa: GOTO 0x3b3

0x3ab: PushEmpty(bool, float)
0x3ac: Stack[-1] = Stack[-25]
0x3ad: Call2 0x40f

0x3ae: Pop(1)
0x3af: Pop(1); Push((bool) Stack[-1] == 0)
0x3b0: IF (Stack[-1] == 0) GOTO 0x3b2; Pop(1)

0x3b1: GOTO 0x3b4

0x3b2: Stack[-7] = (bool) 1
0x3b3: GOTO 0x308

0x3b4: @ WaitForAnimEnd()
0x3b5: Pop(0)
0x3b6: Push( Stack[3 + Tasks[-1].StackPointer] )
0x3b7: IF (Stack[-1] == 0) GOTO 0x3b9; Pop(1)

0x3b8: Return(); Pop(22)

0x3b9: Push("all")
0x3ba: Push("attack_off")
0x3bb: @ PlayAnimation(Stack[-2], Stack[-1])
0x3bc: Pop(2)
0x3bd: @ WaitForAnimEnd()
0x3be: Pop(0)
0x3bf: Push(Stack[-8])
0x3c0: IF (Stack[-1] == 0) GOTO 0x3c4; Pop(1)

0x3c1: Push((float)2.0)
0x3c2: @ Sleep(Stack[-1])
0x3c3: Pop(1)
0x3c4: Return(); Pop(22)

0x3c5: PushEmpty(bool, bool, cvector, bool, bool, cvector)
0x3c6: Stack[1 + Tasks[-1].StackPointer] = (int)0
0x3c7: Push("all")
0x3c8: Push("attack_begin")
0x3c9: Push((int) 1)
0x3ca: Pop(1); Push(Stack[1 + StackPtr] + Stack[-1]);
0x3cb: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3cc: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0x3cd: Pop(2)
0x3ce: Pop(0); Push((bool) Stack[-3] == 0)
0x3cf: IF (Stack[-1] == 0) GOTO 0x3d1; Pop(1)

0x3d0: GOTO 0x3d4

0x3d1: Push((int) 1)
0x3d2: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x3d3: GOTO 0x3c7

0x3d4: Stack[2 + Tasks[-1].StackPointer] = (int)0
0x3d5: Push("attack")
0x3d6: Push((int) 1)
0x3d7: Pop(1); Push(Stack[2 + StackPtr] + Stack[-1]);
0x3d8: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3d9: @ IsExisting3DSound(Stack[-3], Stack[-1])
0x3da: Pop(1)
0x3db: Pop(0); Push((bool) Stack[-2] == 0)
0x3dc: IF (Stack[-1] == 0) GOTO 0x3de; Pop(1)

0x3dd: GOTO 0x3e1

0x3de: Push((int) 1)
0x3df: Stack[2 + Tasks[-1].StackPointer] = Stack[2 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x3e0: GOTO 0x3d5

0x3e1: Push("all")
0x3e2: Push("bjump")
0x3e3: @ GetAnimationOffset(Stack[-3], Stack[-2], Stack[-1])
0x3e4: Pop(2)
0x3e5: Push(CvectorIndex(Stack[-1], 2))
0x3e6: Stack[4 + Tasks[-1].StackPointer] = -Stack[-1]; Pop(1);
0x3e7: Return(); Pop(6)

0x3e8: PushEmpty(object, float, float, object, float, float)
0x3e9: Push((float)0.9)
0x3ea: Pop(1); Push(Stack[-9] * Stack[-1]);
0x3eb: @ GetVictim(Stack[-1], Stack[-4])
0x3ec: Pop(1)
0x3ed: @ ReportAttack(Stack[-0])
0x3ee: Pop(0)
0x3ef: Pop(0); Push((bool) Stack[-3] == Stack[0 + Tasks[-1].StackPointer])
0x3f0: IF (Stack[-1] == 0) GOTO 0x40d; Pop(1)

0x3f1: PushEmpty(float, object, int)
0x3f2: Stack[-2] = Stack[-6]
0x3f3: Stack[-1] = Stack[-10]
0x3f4: Call2 0x2da

0x3f5: Stack[-5] = Stack[-3]
0x3f6: Pop(3)
0x3f7: PushEmpty(float, object, float, int)
0x3f8: Stack[-3] = Stack[-7]
0x3f9: Stack[-2] = Stack[-6]
0x3fa: PushEmpty(int, object, int)
0x3fb: Stack[-2] = Stack[-10]
0x3fc: Stack[-1] = Stack[-14]
0x3fd: Call2 0x2dd

0x3fe: Stack[-4] = Stack[-3]
0x3ff: Pop(3)
0x400: Call2 0x6ab

0x401: Stack[-5] = Stack[-4]
0x402: Pop(4)
0x403: PushEmpty(int)
0x404: Call2 0x567

0x405: Pop(0)
0x406: @ ReportHit(Stack[-0], Stack[-1], Stack[-2], Stack[-3])
0x407: Pop(1)
0x408: PushEmpty(object, float)
0x409: Stack[-2] = Stack[-5]
0x40a: Stack[-1] = Stack[-3]
0x40b: Call2 0x56e

0x40c: Pop(2)
0x40d: Return(); Pop(6)

0x40e: Stack[-3] = 0
0x40f: PushEmpty(int, bool, int, string, int, bool, int, string)
0x410: PushEmpty()
0x411: Call2 0x562

0x412: Pop(0)
0x413: @ irand(Stack[-4], Stack[-1])
0x414: Pop(0)
0x415: Push((int) 1)
0x416: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x417: @ Face(Stack[-0])
0x418: Pop(0)
0x419: Push((bool) 1)
0x41a: @ SetAttackState(Stack[-1])
0x41b: Pop(1)
0x41c: PushEmpty()
0x41d: Call2 0x860

0x41e: Pop(0)
0x41f: Push("all")
0x420: Push("attack_begin")
0x421: Pop(1); Push(Stack[-1] + Stack[-6]);
0x422: @ PlayAnimation(Stack[-2], Stack[-1])
0x423: Pop(2)
0x424: @ WaitForAnimEnd()
0x425: Pop(0)
0x426: PushEmpty()
0x427: Call2 0x542

0x428: Pop(0)
0x429: PushEmpty(bool, object)
0x42a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x42b: Call2 0x71d

0x42c: Pop(1)
0x42d: Pop(1); Push((bool) Stack[-1] == 0)
0x42e: IF (Stack[-1] == 0) GOTO 0x433; Pop(1)

0x42f: @ StopAsync()
0x430: Pop(0)
0x431: Stack[-10] = (bool) 0
0x432: Return(); Pop(8)

0x433: PushEmpty(float, int)
0x434: Stack[-2] = Stack[-11]
0x435: Stack[-1] = Stack[-6]
0x436: Call2 0x3e8

0x437: Pop(2)
0x438: Push("all")
0x439: Push("attack_middle")
0x43a: Pop(1); Push(Stack[-1] + Stack[-6]);
0x43b: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0x43c: Pop(2)
0x43d: Push(Stack[-3])
0x43e: IF (Stack[-1] == 0) GOTO 0x484; Pop(1)

0x43f: PushEmpty()
0x440: Call2 0x860

0x441: Pop(0)
0x442: Push("all")
0x443: Push("attack_middle")
0x444: Pop(1); Push(Stack[-1] + Stack[-6]);
0x445: @ PlayAnimation(Stack[-2], Stack[-1])
0x446: Pop(2)
0x447: @ WaitForAnimEnd()
0x448: Pop(0)
0x449: PushEmpty()
0x44a: Call2 0x562

0x44b: Pop(0)
0x44c: PushEmpty(bool, object)
0x44d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x44e: Call2 0x71d

0x44f: Pop(1)
0x450: Pop(1); Push((bool) Stack[-1] == 0)
0x451: IF (Stack[-1] == 0) GOTO 0x456; Pop(1)

0x452: @ StopAsync()
0x453: Pop(0)
0x454: Stack[-10] = (bool) 0
0x455: Return(); Pop(8)

0x456: PushEmpty(float, int)
0x457: Stack[-2] = Stack[-11]
0x458: Stack[-1] = Stack[-6]
0x459: Call2 0x3e8

0x45a: Pop(2)
0x45b: Stack[-2] = (int) 1
0x45c: Push("attack_middle")
0x45d: Pop(1); Push(Stack[-1] + Stack[-5]);
0x45e: Push("_")
0x45f: Pop(2); Push(Stack[-2] + Stack[-1]);
0x460: Stack[-2] = Stack[-1] + Stack[-3]; Pop(1);
0x461: Push("all")
0x462: @ HasAnimation(Stack[-4], Stack[-1], Stack[-2])
0x463: Pop(1)
0x464: Pop(0); Push((bool) Stack[-3] == 0)
0x465: IF (Stack[-1] == 0) GOTO 0x467; Pop(1)

0x466: GOTO 0x484

0x467: PushEmpty()
0x468: Call2 0x860

0x469: Pop(0)
0x46a: Push("all")
0x46b: @ PlayAnimation(Stack[-1], Stack[-2])
0x46c: Pop(1)
0x46d: @ WaitForAnimEnd()
0x46e: Pop(0)
0x46f: PushEmpty()
0x470: Call2 0x562

0x471: Pop(0)
0x472: PushEmpty(bool, object)
0x473: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x474: Call2 0x71d

0x475: Pop(1)
0x476: Pop(1); Push((bool) Stack[-1] == 0)
0x477: IF (Stack[-1] == 0) GOTO 0x47c; Pop(1)

0x478: @ StopAsync()
0x479: Pop(0)
0x47a: Stack[-10] = (bool) 0
0x47b: Return(); Pop(8)

0x47c: PushEmpty(float, int)
0x47d: Stack[-2] = Stack[-11]
0x47e: Stack[-1] = Stack[-6]
0x47f: Call2 0x3e8

0x480: Pop(2)
0x481: Push((int) 1)
0x482: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x483: GOTO 0x45c

0x484: Push((bool) 0)
0x485: @ SetAttackState(Stack[-1])
0x486: Pop(1)
0x487: Push("all")
0x488: Push("attack_end")
0x489: Pop(1); Push(Stack[-1] + Stack[-6]);
0x48a: @ PlayAnimation(Stack[-2], Stack[-1])
0x48b: Pop(2)
0x48c: PushEmpty(bool)
0x48d: Call2 0x570

0x48e: Pop(0)
0x48f: IF (Stack[-1] == 0) GOTO 0x496; Pop(1)

0x490: PushEmpty(bool, float)
0x491: Stack[-1] = (float) 0.75
0x492: Call2 0x498

0x493: Pop(2)
0x494: @ StopAsync()
0x495: Pop(0)
0x496: Stack[-10] = (bool) 1
0x497: Return(); Pop(8)

0x498: PushEmpty(float, bool, float, bool)
0x499: @ rand(Stack[-2])
0x49a: Pop(0)
0x49b: Pop(0); Push((bool) Stack[-2] < Stack[-5])
0x49c: IF (Stack[-1] == 0) GOTO 0x4ac; Pop(1)

0x49d: @ IsAnimationPlaying(Stack[-1])
0x49e: Pop(0)
0x49f: Pop(0); Push((bool) Stack[-1] == 0)
0x4a0: IF (Stack[-1] == 0) GOTO 0x4a2; Pop(1)

0x4a1: GOTO 0x4ab

0x4a2: PushEmpty(bool)
0x4a3: Call2 0x4fa

0x4a4: Pop(0)
0x4a5: IF (Stack[-1] == 0) GOTO 0x4a8; Pop(1)

0x4a6: Stack[-6] = (bool) 1
0x4a7: Return(); Pop(4)

0x4a8: @ sync()
0x4a9: Pop(0)
0x4aa: GOTO 0x49d

0x4ab: GOTO 0x4b1

0x4ac: @ WaitForAnimEnd()
0x4ad: Pop(0)
0x4ae: PushEmpty()
0x4af: Call2 0x562

0x4b0: Pop(0)
0x4b1: Stack[-6] = (bool) 0
0x4b2: Return(); Pop(4)

0x4b3: PushEmpty(bool, cvector, cvector, cvector, float, bool, cvector, cvector, cvector, float)
0x4b4: @ IsAnimationPlaying(Stack[-5])
0x4b5: Pop(0)
0x4b6: Pop(0); Push((bool) Stack[-5] == 0)
0x4b7: IF (Stack[-1] == 0) GOTO 0x4b9; Pop(1)

0x4b8: GOTO 0x4d9

0x4b9: PushEmpty(bool)
0x4ba: Call2 0x4fa

0x4bb: Pop(0)
0x4bc: IF (Stack[-1] == 0) GOTO 0x4bf; Pop(1)

0x4bd: Stack[-12] = (bool) 1
0x4be: Return(); Pop(10)

0x4bf: PushEmpty(bool, object)
0x4c0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4c1: Call2 0x71d

0x4c2: Pop(1)
0x4c3: Pop(1); Push((bool) Stack[-1] == 0)
0x4c4: IF (Stack[-1] == 0) GOTO 0x4c7; Pop(1)

0x4c5: Stack[-12] = (bool) 0
0x4c6: Return(); Pop(10)

0x4c7: @@ GetPFPosition(Stack[-4])
0x4c8: Pop(0)
0x4c9: @ GetPFPosition(Stack[-3])
0x4ca: Pop(0)
0x4cb: Stack[-2] = Stack[-4] - Stack[-3]; Pop(0);
0x4cc: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x4cd: Pop(0); Push(Stack[-11] * Stack[-11]);
0x4ce: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x4cf: IF (Stack[-1] == 0) GOTO 0x4d6; Pop(1)

0x4d0: PushEmpty(bool, float)
0x4d1: Stack[-1] = Stack[-13]
0x4d2: Call2 0x40f

0x4d3: Pop(2)
0x4d4: Stack[-12] = (bool) 1
0x4d5: Return(); Pop(10)

0x4d6: @ sync()
0x4d7: Pop(0)
0x4d8: GOTO 0x4b4

0x4d9: PushEmpty()
0x4da: Call2 0x562

0x4db: Pop(0)
0x4dc: Stack[-12] = (bool) 0
0x4dd: Return(); Pop(10)

0x4de: PushEmpty(cvector, cvector, cvector, float, float, cvector, cvector, cvector, float, float)
0x4df: PushEmpty(bool, object)
0x4e0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4e1: Call2 0x71d

0x4e2: Pop(1)
0x4e3: Pop(1); Push((bool) Stack[-1] == 0)
0x4e4: IF (Stack[-1] == 0) GOTO 0x4e7; Pop(1)

0x4e5: Stack[-11] = (bool) 0
0x4e6: Return(); Pop(10)

0x4e7: PushEmpty(bool)
0x4e8: Call2 0x537

0x4e9: Pop(0)
0x4ea: IF (Stack[-1] == 0) GOTO 0x4f8; Pop(1)

0x4eb: @@ GetPFPosition(Stack[-5])
0x4ec: Pop(0)
0x4ed: @ GetPFPosition(Stack[-4])
0x4ee: Pop(0)
0x4ef: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x4f0: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x4f1: @@ GetAttackDistance(Stack[-1])
0x4f2: Pop(0)
0x4f3: Push((int) 50)
0x4f4: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x4f5: Pop(0); Push(Stack[-1] * Stack[-1]);
0x4f6: Stack[-12] = Stack[-3] <= Stack[-1]; Pop(1);
0x4f7: Return(); Pop(10)

0x4f8: Stack[-11] = (bool) 0
0x4f9: Return(); Pop(10)

0x4fa: PushEmpty(bool)
0x4fb: Stack[-1] = (bool) 0
0x4fc: PushEmpty(bool)
0x4fd: Call2 0x4de

0x4fe: Pop(0)
0x4ff: IF (Stack[-1] == 0) GOTO 0x505; Pop(1)

0x500: PushEmpty(bool)
0x501: Call2 0x50a

0x502: Pop(0)
0x503: IF (Stack[-1] == 0) GOTO 0x505; Pop(1)

0x504: Stack[-1] = (bool) 1
0x505: IF (Stack[-1] == 0) GOTO 0x508; Pop(1)

0x506: Stack[-1] = (bool) 1
0x507: Return(); Pop(0)

0x508: Stack[-1] = (bool) 0
0x509: Return(); Pop(0)

0x50a: PushEmpty(object, bool, float, cvector, cvector, object, bool, float, cvector, cvector)
0x50b: @ GetScene(Stack[-5])
0x50c: Pop(0)
0x50d: Stack[-4] = (bool) 0
0x50e: PushEmpty(cvector, object)
0x50f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x510: Call2 0x68b

0x511: Pop(1)
0x512: Pop(1); Push(( -Stack[-1])
0x513: @ FindDirLength(Stack[-4], Stack[-1], Stack[-4])
0x514: Pop(1)
0x515: Pop(0); Push((bool) Stack[-3] < Stack[4 + Tasks[-1].StackPointer])
0x516: IF (Stack[-1] == 0) GOTO 0x518; Pop(1)

0x517: GOTO 0x534

0x518: @ Face(Stack[-0])
0x519: Pop(0)
0x51a: Push("all")
0x51b: Push("bjump")
0x51c: @ PlayAnimation(Stack[-2], Stack[-1])
0x51d: Pop(2)
0x51e: @@ GetPFPosition(Stack[-2])
0x51f: Pop(0)
0x520: @ GetPFPosition(Stack[-1])
0x521: Pop(0)
0x522: @ WaitForAnimEnd()
0x523: Pop(0)
0x524: PushEmpty()
0x525: Call2 0x562

0x526: Pop(0)
0x527: @ StopAsync()
0x528: Pop(0)
0x529: Push(CVector(0.0, 0.0, 0.0))
0x52a: @ SetSpeed(Stack[-1])
0x52b: Pop(1)
0x52c: Stack[-4] = (bool) 1
0x52d: PushEmpty(bool)
0x52e: Call2 0x4de

0x52f: Pop(0)
0x530: Pop(1); Push((bool) Stack[-1] == 0)
0x531: IF (Stack[-1] == 0) GOTO 0x533; Pop(1)

0x532: GOTO 0x534

0x533: GOTO 0x50e

0x534: Stack[-11] = Stack[-4]
0x535: Return(); Pop(10)

0x536: Stack[-5] = 0
0x537: PushEmpty(bool, bool)
0x538: Push("IsAttacking")
0x539: Push((int) 1)
0x53a: Pop(2); Push(IsFuncExist(Stack[0 + Tasks[-1].StackPointer], Stack[-2], Stack[-1]))
0x53b: IF (Stack[-1] == 0) GOTO 0x540; Pop(1)

0x53c: @@ IsAttacking(Stack[-1])
0x53d: Pop(0)
0x53e: Stack[-3] = Stack[-1]
0x53f: Return(); Pop(2)

0x540: Stack[-3] = (bool) 0
0x541: Return(); Pop(2)

0x542: PushEmpty(float, int, float, int)
0x543: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x544: IF (Stack[-1] == 0) GOTO 0x546; Pop(1)

0x545: Return(); Pop(4)

0x546: Push( Stack[5 + Tasks[-1].StackPointer] )
0x547: IF (Stack[-1] == 0) GOTO 0x54e; Pop(1)

0x548: Push((int) -1)
0x549: Stack[5 + Tasks[-1].StackPointer] = Stack[5 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x54a: Push((int) 0)
0x54b: Pop(1); Push((bool) Stack[5 + Tasks[-1].StackPointer] > Stack[-1])
0x54c: IF (Stack[-1] == 0) GOTO 0x54e; Pop(1)

0x54d: Return(); Pop(4)

0x54e: @ rand(Stack[-2])
0x54f: Pop(0)
0x550: PushEmpty(float)
0x551: Call2 0x574

0x552: Pop(0)
0x553: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x554: IF (Stack[-1] == 0) GOTO 0x561; Pop(1)

0x555: @ irand(Stack[-1], Stack[-2])
0x556: Pop(0)
0x557: Push((int) 1)
0x558: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x559: Push("attack")
0x55a: Pop(1); Push(Stack[-1] + Stack[-2]);
0x55b: @ Speak(Stack[-1])
0x55c: Pop(1)
0x55d: PushEmpty(int)
0x55e: Call2 0x572

0x55f: Stack[5 + Tasks[-1].StackPointer] = Stack[-1]
0x560: Pop(1)
0x561: Return(); Pop(4)

0x562: PushEmpty(object)
0x563: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x564: Call2 0x857

0x565: Pop(1)
0x566: Return(); Pop(0)

0x567: Stack[-1] = (int) 0
0x568: Return(); Pop(0)

0x569: PushEmpty(string)
0x56a: Stack[-1] = "attack_stay"
0x56b: Call2 0x7ce

0x56c: Pop(1)
0x56d: Return(); Pop(0)

0x56e: PushEmpty()
0x56f: Return(); Pop(0)

0x570: Stack[-1] = (bool) 1
0x571: Return(); Pop(0)

0x572: Stack[-1] = (int) 1
0x573: Return(); Pop(0)

0x574: Stack[-1] = (float) 0.5
0x575: Return(); Pop(0)

0x576: PushEmpty()
0x577: Call2 0x5bc

0x578: Pop(0)
0x579: PushEmpty()
0x57a: Call2 0xac8

0x57b: Pop(0)
0x57c: Return(); Pop(0)

0x57d: PushEmpty(bool, bool, bool, bool)
0x57e: PushEmpty(object)
0x57f: Stack[-1] = Stack[-10]
0x580: Call2 0x857

0x581: Pop(1)
0x582: Push((int) 1)
0x583: Push((int) 5)
0x584: @ SetTimer(Stack[-2], Stack[-1])
0x585: Pop(2)
0x586: @ CanSee(Stack[-2], Stack[-9])
0x587: Pop(0)
0x588: Push(Stack[-2])
0x589: IF (Stack[-1] == 0) GOTO 0x590; Pop(1)

0x58a: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x58b: PushEmpty(object)
0x58c: Stack[-1] = Stack[-10]
0x58d: Call2 0x7c3

0x58e: Pop(1)
0x58f: GOTO 0x591

0x590: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x591: PushEmpty(bool, object)
0x592: Stack[-1] = Stack[-11]
0x593: Call2 0x69a

0x594: Pop(1)
0x595: IF (Stack[-1] == 0) GOTO 0x59b; Pop(1)

0x596: PushEmpty(object)
0x597: Call2 0x7f7

0x598: Pop(0)
0x599: @ SendPlayerEnemy(Stack[-10], Stack[-1])
0x59a: Pop(1)
0x59b: PushEmpty(bool, object, float, float, bool, bool)
0x59c: Stack[-5] = Stack[-15]
0x59d: Stack[-4] = Stack[-14]
0x59e: Stack[-3] = Stack[-13]
0x59f: Stack[-2] = Stack[-12]
0x5a0: Stack[-1] = Stack[-11]
0x5a1: Call2 0x5e6

0x5a2: Stack[-7] = Stack[-6]
0x5a3: Pop(6)
0x5a4: Push( Stack[2 + Tasks[-1].StackPointer] )
0x5a5: IF (Stack[-1] == 0) GOTO 0x5a9; Pop(1)

0x5a6: Push("head")
0x5a7: @ UnlookAsync(Stack[-1])
0x5a8: Pop(1)
0x5a9: Push((int) 1)
0x5aa: @ KillTimer(Stack[-1])
0x5ab: Pop(1)
0x5ac: Stack[-10] = Stack[-1]
0x5ad: Return(); Pop(4)

0x5ae: PushEmpty()
0x5af: Push((int) 1)
0x5b0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5b1: IF (Stack[-1] == 0) GOTO 0x5b7; Pop(1)

0x5b2: PushEmpty(object)
0x5b3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5b4: Call2 0x857

0x5b5: Pop(1)
0x5b6: GOTO 0x5bb

0x5b7: PushEmpty(int)
0x5b8: Stack[-1] = Stack[-2]
0x5b9: Call2 0x64c

0x5ba: Pop(1)
0x5bb: Return(); Pop(0)

0x5bc: Push((int) 1)
0x5bd: @ KillTimer(Stack[-1])
0x5be: Pop(1)
0x5bf: Push( Stack[2 + Tasks[-1].StackPointer] )
0x5c0: IF (Stack[-1] == 0) GOTO 0x5c5; Pop(1)

0x5c1: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x5c2: Push("head")
0x5c3: @ UnlookAsync(Stack[-1])
0x5c4: Pop(1)
0x5c5: PushEmpty()
0x5c6: Call2 0x662

0x5c7: Pop(0)
0x5c8: Return(); Pop(0)

0x5c9: PushEmpty()
0x5ca: PushEmpty(bool)
0x5cb: Stack[-1] = (bool) 0
0x5cc: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0x5cd: IF (Stack[-1] == 0) GOTO 0x5d1; Pop(1)

0x5ce: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x5cf: IF (Stack[-1] == 0) GOTO 0x5d1; Pop(1)

0x5d0: Stack[-1] = (bool) 1
0x5d1: IF (Stack[-1] == 0) GOTO 0x5d7; Pop(1)

0x5d2: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x5d3: PushEmpty(object)
0x5d4: Stack[-1] = Stack[-2]
0x5d5: Call2 0x7c3

0x5d6: Pop(1)
0x5d7: Return(); Pop(0)

0x5d8: PushEmpty()
0x5d9: PushEmpty(bool)
0x5da: Stack[-1] = (bool) 0
0x5db: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0x5dc: IF (Stack[-1] == 0) GOTO 0x5e0; Pop(1)

0x5dd: Push( Stack[2 + Tasks[-1].StackPointer] )
0x5de: IF (Stack[-1] == 0) GOTO 0x5e0; Pop(1)

0x5df: Stack[-1] = (bool) 1
0x5e0: IF (Stack[-1] == 0) GOTO 0x5e5; Pop(1)

0x5e1: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x5e2: Push("head")
0x5e3: @ UnlookAsync(Stack[-1])
0x5e4: Pop(1)
0x5e5: Return(); Pop(0)

0x5e6: PushEmpty(bool, bool, object, cvector, cvector, cvector, float, object, bool, bool, object, cvector, cvector, cvector, float, object)
0x5e7: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x5e8: Stack[1 + Tasks[-1].StackPointer] = Stack[-21]
0x5e9: Stack[-7] = Stack[-17]
0x5ea: PushEmpty(bool, object)
0x5eb: Stack[-1] = Stack[-23]
0x5ec: Call2 0x672

0x5ed: Pop(1)
0x5ee: Pop(1); Push((bool) Stack[-1] == 0)
0x5ef: IF (Stack[-1] == 0) GOTO 0x5f2; Pop(1)

0x5f0: Stack[-22] = (bool) 0
0x5f1: Return(); Pop(16)

0x5f2: @@ GetPosition(Stack[-5])
0x5f3: Pop(0)
0x5f4: @ GetPosition(Stack[-4])
0x5f5: Pop(0)
0x5f6: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x5f7: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x5f8: PushEmpty(bool)
0x5f9: Stack[-1] = (bool) 0
0x5fa: Push((int) 0)
0x5fb: Pop(1); Push((bool) Stack[-21] > Stack[-1])
0x5fc: IF (Stack[-1] == 0) GOTO 0x601; Pop(1)

0x5fd: Pop(0); Push(Stack[-20] * Stack[-20]);
0x5fe: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x5ff: IF (Stack[-1] == 0) GOTO 0x601; Pop(1)

0x600: Stack[-1] = (bool) 1
0x601: IF (Stack[-1] == 0) GOTO 0x606; Pop(1)

0x602: @ Stop()
0x603: Pop(0)
0x604: Stack[-22] = (bool) 0
0x605: Return(); Pop(16)

0x606: Pop(0); Push(Stack[-20] * Stack[-20]);
0x607: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x608: IF (Stack[-1] == 0) GOTO 0x644; Pop(1)

0x609: @@ GetPFPosition(Stack[-5])
0x60a: Pop(0)
0x60b: @ FindPathTo(Stack[-1], Stack[-5])
0x60c: Pop(0)
0x60d: Pop(0); Push(( Stack[-1] != 0 )
0x60e: IF (Stack[-1] == 0) GOTO 0x611; Pop(1)

0x60f: Stack[-6] = Stack[-1]
0x610: Stack[-1] = 0
0x611: Pop(0); Push(( Stack[-6] != 0 )
0x612: IF (Stack[-1] == 0) GOTO 0x632; Pop(1)

0x613: Push(Stack[-7])
0x614: IF (Stack[-1] == 0) GOTO 0x61b; Pop(1)

0x615: Stack[-7] = (bool) 0
0x616: @ RotatePath(Stack[-6], Stack[-8])
0x617: Pop(0)
0x618: Pop(0); Push((bool) Stack[-8] == 0)
0x619: IF (Stack[-1] == 0) GOTO 0x61b; Pop(1)

0x61a: GOTO 0x64a

0x61b: Push((int) 0)
0x61c: Push((float)0.3)
0x61d: @ SetTimer(Stack[-2], Stack[-1])
0x61e: Pop(2)
0x61f: PushEmpty(string)
0x620: Call2 0x679

0x621: Pop(0)
0x622: PushEmpty(string)
0x623: Call2 0x67b

0x624: Pop(0)
0x625: @ FollowPath(Stack[-8], Stack[-20], Stack[-10], Stack[-2], Stack[-1])
0x626: Pop(2)
0x627: Pop(0); Push((bool) Stack[-8] == 0)
0x628: IF (Stack[-1] == 0) GOTO 0x630; Pop(1)

0x629: Push( Stack[0 + Tasks[-1].StackPointer] )
0x62a: IF (Stack[-1] == 0) GOTO 0x62e; Pop(1)

0x62b: Stack[-6] = 0
0x62c: GOTO 0x64a

0x62d: GOTO 0x62f

0x62e: GOTO 0x649

0x62f: GOTO 0x631

0x630: Stack[-6] = 0
0x631: GOTO 0x642

0x632: Push((int) 0)
0x633: @ KillTimer(Stack[-1])
0x634: Pop(1)
0x635: Push((float)0.5)
0x636: @ Sleep(Stack[-1], Stack[-9])
0x637: Pop(1)
0x638: Pop(0); Push((bool) Stack[-8] == 0)
0x639: IF (Stack[-1] == 0) GOTO 0x63e; Pop(1)

0x63a: Push( Stack[0 + Tasks[-1].StackPointer] )
0x63b: IF (Stack[-1] == 0) GOTO 0x63e; Pop(1)

0x63c: Stack[-6] = 0
0x63d: GOTO 0x64a

0x63e: Push((int) 0)
0x63f: Push((float)0.3)
0x640: @ SetTimer(Stack[-2], Stack[-1])
0x641: Pop(2)
0x642: Stack[-1] = 0
0x643: GOTO 0x648

0x644: Push((int) 0)
0x645: @ KillTimer(Stack[-1])
0x646: Pop(1)
0x647: GOTO 0x64a

0x648: Stack[-6] = 0
0x649: GOTO 0x5ea

0x64a: Stack[-22] = !Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x64b: Return(); Pop(16)

0x64c: PushEmpty()
0x64d: Push((int) 0)
0x64e: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x64f: IF (Stack[-1] == 0) GOTO 0x651; Pop(1)

0x650: Return(); Pop(0)

0x651: PushEmpty(bool, object)
0x652: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x653: Call2 0x672

0x654: Pop(1)
0x655: Pop(1); Push((bool) Stack[-1] == 0)
0x656: IF (Stack[-1] == 0) GOTO 0x658; Pop(1)

0x657: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x658: Push((int) 0)
0x659: @ KillTimer(Stack[-1])
0x65a: Pop(1)
0x65b: @ Stop()
0x65c: Pop(0)
0x65d: Return(); Pop(0)

0x65e: PushEmpty()
0x65f: @ RequestClearPath(Stack[-1])
0x660: Pop(0)
0x661: Return(); Pop(0)

0x662: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x663: Push((int) 0)
0x664: @ KillTimer(Stack[-1])
0x665: Pop(1)
0x666: @ Stop()
0x667: Pop(0)
0x668: Return(); Pop(0)

0x669: PushEmpty()
0x66a: PushEmpty()
0x66b: Call2 0x5bc

0x66c: Pop(0)
0x66d: PushEmpty(object)
0x66e: Stack[-1] = Stack[-2]
0x66f: Call2 0x98f

0x670: Pop(1)
0x671: Return(); Pop(0)

0x672: PushEmpty()
0x673: PushEmpty(bool, object)
0x674: Stack[-1] = Stack[-3]
0x675: Call2 0x71d

0x676: Stack[-4] = Stack[-2]
0x677: Pop(2)
0x678: Return(); Pop(0)

0x679: Stack[-1] = "walk"
0x67a: Return(); Pop(0)

0x67b: Stack[-1] = "run"
0x67c: Return(); Pop(0)

0x67d: PushEmpty()
0x67e: Push((int) 2)
0x67f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x680: IF (Stack[-1] == 0) GOTO 0x684; Pop(1)

0x681: Stack[-2] = "fire"
0x682: Return(); Pop(0)

0x683: GOTO 0x689

0x684: Push((int) 1)
0x685: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x686: IF (Stack[-1] == 0) GOTO 0x689; Pop(1)

0x687: Stack[-2] = "bullet"
0x688: Return(); Pop(0)

0x689: Stack[-2] = "phys"
0x68a: Return(); Pop(0)

0x68b: PushEmpty(cvector, cvector, cvector, cvector)
0x68c: @ GetPosition(Stack[-2])
0x68d: Pop(0)
0x68e: @@ GetPosition(Stack[-1])
0x68f: Pop(0)
0x690: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x691: Return(); Pop(4)

0x692: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x693: @ GetPosition(Stack[-3])
0x694: Pop(0)
0x695: @@ GetPosition(Stack[-2])
0x696: Pop(0)
0x697: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x698: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x699: Return(); Pop(6)

0x69a: PushEmpty(bool, bool)
0x69b: @ IsPlayerActor(Stack[-3], Stack[-1])
0x69c: Pop(0)
0x69d: Stack[-4] = Stack[-1]
0x69e: Return(); Pop(2)

0x69f: PushEmpty(bool, bool)
0x6a0: Push("HasProperty")
0x6a1: Push((int) 2)
0x6a2: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x6a3: Pop(1); Push((bool) Stack[-1] == 0)
0x6a4: IF (Stack[-1] == 0) GOTO 0x6a7; Pop(1)

0x6a5: Stack[-5] = (bool) 0
0x6a6: Return(); Pop(2)

0x6a7: @@ HasProperty(Stack[-3], Stack[-1])
0x6a8: Pop(0)
0x6a9: Stack[-5] = Stack[-1]
0x6aa: Return(); Pop(2)

0x6ab: PushEmpty(int, string, int, float, float, float, int, string, int, float, float, float)
0x6ac: PushEmpty(bool, object, string)
0x6ad: Stack[-2] = Stack[-18]
0x6ae: Stack[-1] = "health"
0x6af: Call2 0x69f

0x6b0: Pop(2)
0x6b1: Pop(1); Push((bool) Stack[-1] == 0)
0x6b2: IF (Stack[-1] == 0) GOTO 0x6b5; Pop(1)

0x6b3: Stack[-16] = (float) 0.0
0x6b4: Return(); Pop(12)

0x6b5: PushEmpty(bool, object, string)
0x6b6: Stack[-2] = Stack[-18]
0x6b7: Stack[-1] = "armor"
0x6b8: Call2 0x69f

0x6b9: Pop(2)
0x6ba: Pop(1); Push((bool) Stack[-1] == 0)
0x6bb: IF (Stack[-1] == 0) GOTO 0x6be; Pop(1)

0x6bc: Stack[-6] = (int) 0
0x6bd: GOTO 0x6c1

0x6be: Push("armor")
0x6bf: @@ GetProperty(Stack[-1], Stack[-7])
0x6c0: Pop(1)
0x6c1: Push("armor_")
0x6c2: PushEmpty(string, int)
0x6c3: Stack[-1] = Stack[-16]
0x6c4: Call2 0x67d

0x6c5: Pop(1)
0x6c6: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x6c7: PushEmpty(bool, object, string)
0x6c8: Stack[-2] = Stack[-18]
0x6c9: Stack[-1] = Stack[-8]
0x6ca: Call2 0x69f

0x6cb: Pop(2)
0x6cc: Pop(1); Push((bool) Stack[-1] == 0)
0x6cd: IF (Stack[-1] == 0) GOTO 0x6d0; Pop(1)

0x6ce: Stack[-4] = (int) 0
0x6cf: GOTO 0x6d2

0x6d0: @@ GetProperty(Stack[-5], Stack[-4])
0x6d1: Pop(0)
0x6d2: PushEmpty(float, float, float)
0x6d3: Pop(0); Push(Stack[-9] + Stack[-7]);
0x6d4: Push((float)100.0)
0x6d5: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0x6d6: Stack[-1] = (int) 1
0x6d7: Call2 0x807

0x6d8: Stack[-6] = Stack[-3]
0x6d9: Pop(3)
0x6da: Push("health")
0x6db: @@ GetProperty(Stack[-1], Stack[-3])
0x6dc: Pop(1)
0x6dd: Push((int) 1)
0x6de: Pop(1); Push(Stack[-1] - Stack[-4]);
0x6df: Stack[-2] = Stack[-15] * Stack[-1]; Pop(1);
0x6e0: Push("health")
0x6e1: PushEmpty(float, float, float, float)
0x6e2: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0x6e3: Stack[-2] = (int) 0
0x6e4: Stack[-1] = (int) 1
0x6e5: Call2 0x80e

0x6e6: Pop(3)
0x6e7: @@ SetProperty(Stack[-2], Stack[-1])
0x6e8: Pop(2)
0x6e9: PushEmpty(bool, object)
0x6ea: Stack[-1] = Stack[-17]
0x6eb: Call2 0x69a

0x6ec: Pop(1)
0x6ed: IF (Stack[-1] == 0) GOTO 0x6f2; Pop(1)

0x6ee: PushEmpty(float)
0x6ef: Stack[-1] = -Stack[-2]; Pop(0);
0x6f0: Call2 0x83d

0x6f1: Pop(1)
0x6f2: Stack[-16] = Stack[-1]
0x6f3: Return(); Pop(12)

0x6f4: PushEmpty(bool, bool)
0x6f5: @@ IsDead(Stack[-1])
0x6f6: Pop(0)
0x6f7: Stack[-4] = Stack[-1]
0x6f8: Return(); Pop(2)

0x6f9: PushEmpty(object, object, object, object)
0x6fa: Pop(0); Push((bool) Stack[-5] == 0)
0x6fb: IF (Stack[-1] == 0) GOTO 0x6fe; Pop(1)

0x6fc: Stack[-6] = (bool) 0
0x6fd: Return(); Pop(4)

0x6fe: PushEmpty(bool)
0x6ff: Stack[-1] = (bool) 0
0x700: Push("IsDead")
0x701: Push((int) 1)
0x702: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x703: IF (Stack[-1] == 0) GOTO 0x70a; Pop(1)

0x704: PushEmpty(bool, object)
0x705: Stack[-1] = Stack[-8]
0x706: Call2 0x6f4

0x707: Pop(1)
0x708: IF (Stack[-1] == 0) GOTO 0x70a; Pop(1)

0x709: Stack[-1] = (bool) 1
0x70a: IF (Stack[-1] == 0) GOTO 0x70d; Pop(1)

0x70b: Stack[-6] = (bool) 0
0x70c: Return(); Pop(4)

0x70d: @ GetScene(Stack[-2])
0x70e: Pop(0)
0x70f: Pop(0); Push((bool) Stack[-2] == 0)
0x710: IF (Stack[-1] == 0) GOTO 0x713; Pop(1)

0x711: Stack[-6] = (bool) 0
0x712: Return(); Pop(4)

0x713: @@ GetScene(Stack[-1])
0x714: Pop(0)
0x715: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x716: IF (Stack[-1] == 0) GOTO 0x719; Pop(1)

0x717: Stack[-6] = (bool) 0
0x718: Return(); Pop(4)

0x719: Stack[-6] = (bool) 1
0x71a: Return(); Pop(4)

0x71b: Stack[-1] = 0
0x71c: Stack[-2] = 0
0x71d: PushEmpty(int, int)
0x71e: PushEmpty(bool, object)
0x71f: Stack[-1] = Stack[-5]
0x720: Call2 0x6f9

0x721: Pop(1)
0x722: Pop(1); Push((bool) Stack[-1] == 0)
0x723: IF (Stack[-1] == 0) GOTO 0x726; Pop(1)

0x724: Stack[-4] = (bool) 0
0x725: Return(); Pop(2)

0x726: PushEmpty(bool, object, string)
0x727: Stack[-2] = Stack[-6]
0x728: Stack[-1] = "noaccess"
0x729: Call2 0x69f

0x72a: Pop(2)
0x72b: Pop(1); Push((bool) Stack[-1] == 0)
0x72c: IF (Stack[-1] == 0) GOTO 0x72f; Pop(1)

0x72d: Stack[-4] = (bool) 1
0x72e: Return(); Pop(2)

0x72f: Push("noaccess")
0x730: @@ GetProperty(Stack[-1], Stack[-2])
0x731: Pop(1)
0x732: Push((int) 0)
0x733: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x734: Return(); Pop(2)

0x735: PushEmpty(bool, int, cvector, cvector, cvector, cvector, string, bool, int, cvector, cvector, cvector, cvector, string)
0x736: Pop(0); Push((bool) Stack[-15] == 0)
0x737: IF (Stack[-1] == 0) GOTO 0x739; Pop(1)

0x738: Return(); Pop(14)

0x739: @ IsDead(Stack[-7])
0x73a: Pop(0)
0x73b: Push(Stack[-7])
0x73c: IF (Stack[-1] == 0) GOTO 0x73e; Pop(1)

0x73d: Return(); Pop(14)

0x73e: @ GetSecondaryAnimationType(Stack[-6])
0x73f: Pop(0)
0x740: Push((int) 0)
0x741: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x742: IF (Stack[-1] == 0) GOTO 0x744; Pop(1)

0x743: Return(); Pop(14)

0x744: @@ GetPosition(Stack[-5])
0x745: Pop(0)
0x746: @ GetPosition(Stack[-4])
0x747: Pop(0)
0x748: @ GetDirection(Stack[-3])
0x749: Pop(0)
0x74a: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0x74b: Push(CvectorIndex(Stack[-2], 0))
0x74c: Push(CvectorIndex(Stack[-4], 0))
0x74d: Pop(2); Push(Stack[-2] * Stack[-1]);
0x74e: Push(CvectorIndex(Stack[-3], 2))
0x74f: Push(CvectorIndex(Stack[-5], 2))
0x750: Pop(2); Push(Stack[-2] * Stack[-1]);
0x751: Pop(2); Push(Stack[-2] + Stack[-1]);
0x752: Push((int) 0)
0x753: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x754: IF (Stack[-1] == 0) GOTO 0x757; Pop(1)

0x755: Stack[-1] = "fhit"
0x756: GOTO 0x758

0x757: Stack[-1] = "bhit"
0x758: Push("hit_react")
0x759: Push("1")
0x75a: Pop(1); Push(Stack[-3] + Stack[-1]);
0x75b: Push("2")
0x75c: Pop(1); Push(Stack[-4] + Stack[-1]);
0x75d: Push((int) -10)
0x75e: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x75f: Pop(4)
0x760: Return(); Pop(14)

0x761: PushEmpty(cvector, object, int, bool, cvector, cvector, int, int, cvector, cvector, object, int, bool, cvector, cvector, int, int, cvector)
0x762: PushEmpty(bool)
0x763: Stack[-1] = (bool) 0
0x764: PushEmpty(bool)
0x765: Stack[-1] = (bool) 0
0x766: Push(Stack[-23])
0x767: IF (Stack[-1] == 0) GOTO 0x76c; Pop(1)

0x768: Push((int) 4)
0x769: Pop(1); Push((bool) Stack[-23] != Stack[-1])
0x76a: IF (Stack[-1] == 0) GOTO 0x76c; Pop(1)

0x76b: Stack[-1] = (bool) 1
0x76c: IF (Stack[-1] == 0) GOTO 0x771; Pop(1)

0x76d: Push((int) 5)
0x76e: Pop(1); Push((bool) Stack[-22] != Stack[-1])
0x76f: IF (Stack[-1] == 0) GOTO 0x771; Pop(1)

0x770: Stack[-1] = (bool) 1
0x771: IF (Stack[-1] == 0) GOTO 0x7a0; Pop(1)

0x772: PushEmpty(cvector, cvector)
0x773: PushEmpty(cvector, object)
0x774: Stack[-1] = Stack[-25]
0x775: Call2 0x68b

0x776: Stack[-3] = Stack[-2]
0x777: Pop(2)
0x778: Call2 0x7fd

0x779: Stack[-11] = Stack[-2]
0x77a: Pop(2)
0x77b: @ CreateVectorVector(Stack[-8])
0x77c: Pop(0)
0x77d: Stack[-7] = (int) 1
0x77e: Push("hit")
0x77f: Pop(1); Push(Stack[-1] + Stack[-8]);
0x780: @ GetGeometryLocator(Stack[-1], Stack[-7], Stack[-6], Stack[-5])
0x781: Pop(1)
0x782: Pop(0); Push((bool) Stack[-6] == 0)
0x783: IF (Stack[-1] == 0) GOTO 0x785; Pop(1)

0x784: GOTO 0x78e

0x785: Pop(0); Push(Stack[-4] | Stack[-9]);
0x786: Push((float)0.70711)
0x787: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x788: IF (Stack[-1] == 0) GOTO 0x78b; Pop(1)

0x789: @@ add(Stack[-5])
0x78a: Pop(0)
0x78b: Push((int) 1)
0x78c: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x78d: GOTO 0x77e

0x78e: @@ size(Stack[-3])
0x78f: Pop(0)
0x790: Push(Stack[-3])
0x791: IF (Stack[-1] == 0) GOTO 0x79f; Pop(1)

0x792: @ irand(Stack[-2], Stack[-3])
0x793: Pop(0)
0x794: @@ get(Stack[-1], Stack[-2])
0x795: Pop(0)
0x796: PushEmpty(object, int, float, cvector, cvector)
0x797: Stack[-5] = Stack[-26]
0x798: Stack[-4] = Stack[-25]
0x799: Stack[-3] = Stack[-24]
0x79a: Stack[-2] = Stack[-6]
0x79b: Stack[-1] = -Stack[-14]; Pop(0);
0x79c: Call2 0x7a5

0x79d: Pop(5)
0x79e: Return(); Pop(18)

0x79f: Stack[-8] = 0
0x7a0: PushEmpty(object)
0x7a1: Stack[-1] = Stack[-22]
0x7a2: Call2 0x735

0x7a3: Pop(1)
0x7a4: Return(); Pop(18)

0x7a5: PushEmpty(object, object, object, object)
0x7a6: @ GetScene(Stack[-2])
0x7a7: Pop(0)
0x7a8: Push("scripted")
0x7a9: Push("blood_dir.xml")
0x7aa: @ AddActorByType(Stack[-3], Stack[-2], Stack[-4], Stack[-8], Stack[-7], Stack[-1])
0x7ab: Pop(2)
0x7ac: PushEmpty(object)
0x7ad: Stack[-1] = Stack[-10]
0x7ae: Call2 0x735

0x7af: Pop(1)
0x7b0: Return(); Pop(4)

0x7b1: Stack[-1] = 0
0x7b2: Stack[-2] = 0
0x7b3: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x7b4: @@ GetPosition(Stack[-3])
0x7b5: Pop(0)
0x7b6: @ GetPosition(Stack[-2])
0x7b7: Pop(0)
0x7b8: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0x7b9: Push(CvectorIndex(Stack[-1], 0))
0x7ba: Push(CvectorIndex(Stack[-2], 2))
0x7bb: @ RotateAsync(Stack[-2], Stack[-1])
0x7bc: Pop(2)
0x7bd: Return(); Pop(6)

0x7be: PushEmpty(bool, bool)
0x7bf: @ IsLoaded(Stack[-1])
0x7c0: Pop(0)
0x7c1: Stack[-3] = Stack[-1]
0x7c2: Return(); Pop(2)

0x7c3: PushEmpty(float, cvector, float, cvector)
0x7c4: @@ GetEyesHeight(Stack[-2])
0x7c5: Pop(0)
0x7c6: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x7c7: Push(CvectorIndex(Stack[-1], 1))
0x7c8: Stack[-1] = Stack[-3]
0x7c9: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x7ca: Push("head")
0x7cb: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x7cc: Pop(1)
0x7cd: Return(); Pop(4)

0x7ce: PushEmpty(bool, int, bool, int, bool, float, cvector, cvector, bool, int, bool, int, bool, float, cvector, cvector)
0x7cf: @ IsExisting3DSound(Stack[-8], Stack[-17])
0x7d0: Pop(0)
0x7d1: Pop(0); Push((bool) Stack[-8] == 0)
0x7d2: IF (Stack[-1] == 0) GOTO 0x7e7; Pop(1)

0x7d3: Stack[-7] = (int) 0
0x7d4: Push((int) 1)
0x7d5: Pop(1); Push(Stack[-8] + Stack[-1]);
0x7d6: Pop(1); Push(Stack[-18] + Stack[-1]);
0x7d7: @ IsExisting3DSound(Stack[-7], Stack[-1])
0x7d8: Pop(1)
0x7d9: Pop(0); Push((bool) Stack[-6] == 0)
0x7da: IF (Stack[-1] == 0) GOTO 0x7dc; Pop(1)

0x7db: GOTO 0x7df

0x7dc: Push((int) 1)
0x7dd: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x7de: GOTO 0x7d4

0x7df: Pop(0); Push((bool) Stack[-7] == 0)
0x7e0: IF (Stack[-1] == 0) GOTO 0x7e2; Pop(1)

0x7e1: Return(); Pop(16)

0x7e2: @ irand(Stack[-5], Stack[-7])
0x7e3: Pop(0)
0x7e4: Push((int) 1)
0x7e5: Pop(1); Push(Stack[-6] + Stack[-1]);
0x7e6: Stack[-18] = Stack[-18] + Stack[-1]; Pop(1);
0x7e7: @ Is3DSoundLoaded(Stack[-4], Stack[-17])
0x7e8: Pop(0)
0x7e9: Push(Stack[-4])
0x7ea: IF (Stack[-1] == 0) GOTO 0x7f6; Pop(1)

0x7eb: @ GetEyesHeight(Stack[-3])
0x7ec: Pop(0)
0x7ed: @ GetDirection(Stack[-2])
0x7ee: Pop(0)
0x7ef: Push((int) 50)
0x7f0: Stack[-2] = Stack[-3] * Stack[-1]; Pop(1);
0x7f1: Push(CvectorIndex(Stack[-1], 1))
0x7f2: Stack[-1] = Stack[-1] + Stack[-4]; Pop(0);
0x7f3: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x7f4: @ PlayGlobalSound(Stack[-17], Stack[-1])
0x7f5: Pop(0)
0x7f6: Return(); Pop(16)

0x7f7: PushEmpty(object, object)
0x7f8: @ self(Stack[-1])
0x7f9: Pop(0)
0x7fa: Stack[-3] = Stack[-1]
0x7fb: Return(); Pop(2)

0x7fc: Stack[-1] = 0
0x7fd: PushEmpty(float, float)
0x7fe: Pop(0); Push(Stack[-3] | Stack[-3]);
0x7ff: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x800: Push((float)0.0)
0x801: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x802: IF (Stack[-1] == 0) GOTO 0x805; Pop(1)

0x803: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x804: Return(); Pop(2)

0x805: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x806: Return(); Pop(2)

0x807: PushEmpty()
0x808: Pop(0); Push((bool) Stack[-2] < Stack[-1])
0x809: IF (Stack[-1] == 0) GOTO 0x80c; Pop(1)

0x80a: Stack[-3] = Stack[-2]
0x80b: GOTO 0x80d

0x80c: Stack[-3] = Stack[-1]
0x80d: Return(); Pop(0)

0x80e: PushEmpty()
0x80f: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x810: IF (Stack[-1] == 0) GOTO 0x813; Pop(1)

0x811: Stack[-4] = Stack[-2]
0x812: Return(); Pop(0)

0x813: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x814: IF (Stack[-1] == 0) GOTO 0x817; Pop(1)

0x815: Stack[-4] = Stack[-1]
0x816: Return(); Pop(0)

0x817: Stack[-4] = Stack[-3]
0x818: Return(); Pop(0)

0x819: PushEmpty()
0x81a: Push(CvectorIndex(Stack[-2], 0))
0x81b: Push(CvectorIndex(Stack[-2], 0))
0x81c: Pop(2); Push(Stack[-2] * Stack[-1]);
0x81d: Push(CvectorIndex(Stack[-3], 2))
0x81e: Push(CvectorIndex(Stack[-3], 2))
0x81f: Pop(2); Push(Stack[-2] * Stack[-1]);
0x820: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x821: Return(); Pop(0)

0x822: PushEmpty()
0x823: Push(CvectorIndex(Stack[-1], 0))
0x824: Push(CvectorIndex(Stack[-2], 0))
0x825: Pop(2); Push(Stack[-2] * Stack[-1]);
0x826: Push(CvectorIndex(Stack[-2], 2))
0x827: Push(CvectorIndex(Stack[-3], 2))
0x828: Pop(2); Push(Stack[-2] * Stack[-1]);
0x829: Pop(2); Push(Stack[-2] + Stack[-1]);
0x82a: Stack[-3] = Sqrt(Stack[-1]); Pop(1);
0x82b: Return(); Pop(0)

0x82c: PushEmpty()
0x82d: PushEmpty(float, cvector, cvector)
0x82e: Stack[-2] = Stack[-5]
0x82f: Stack[-1] = Stack[-4]
0x830: Call2 0x819

0x831: Pop(2)
0x832: PushEmpty(float, cvector)
0x833: Stack[-1] = Stack[-5]
0x834: Call2 0x822

0x835: Pop(1)
0x836: PushEmpty(float, cvector)
0x837: Stack[-1] = Stack[-5]
0x838: Call2 0x822

0x839: Pop(1)
0x83a: Pop(2); Push(Stack[-2] * Stack[-1]);
0x83b: Stack[-5] = Stack[-2] / Stack[-1]; Pop(2);
0x83c: Return(); Pop(0)

0x83d: PushEmpty(object, object)
0x83e: @ CreateFloatVector(Stack[-1])
0x83f: Pop(0)
0x840: @@ add(Stack[-3])
0x841: Pop(0)
0x842: Push((int) 0)
0x843: Pop(1); Push((bool) Stack[-4] < Stack[-1])
0x844: IF (Stack[-1] == 0) GOTO 0x849; Pop(1)

0x845: Push((float)0.7)
0x846: Push((int) 500)
0x847: @ RumblePlay(Stack[-2], Stack[-1])
0x848: Pop(2)
0x849: Push((int) 15)
0x84a: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x84b: Pop(1)
0x84c: Return(); Pop(2)

0x84d: Stack[-1] = 0
0x84e: PushEmpty(float, float)
0x84f: @ GetGameTime(Stack[-1])
0x850: Pop(0)
0x851: Push((int) 1)
0x852: PushEmpty(int)
0x853: Push((int) 24)
0x854: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x855: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x856: Return(); Pop(2)

0x857: PushEmpty(bool, bool)
0x858: @ IsPlayerActor(Stack[-3], Stack[-1])
0x859: Pop(0)
0x85a: Push(Stack[-1])
0x85b: IF (Stack[-1] == 0) GOTO 0x85f; Pop(1)

0x85c: Push("attack")
0x85d: @ PlayGlobalMusic(Stack[-1])
0x85e: Pop(1)
0x85f: Return(); Pop(2)

0x860: PushEmpty(object, object)
0x861: @ GetScene(Stack[-1])
0x862: Pop(0)
0x863: Push("battle")
0x864: PushEmpty(object)
0x865: Call2 0x7f7

0x866: Pop(0)
0x867: @ BroadcastMessage(Stack[-2], Stack[-1], Stack[-3])
0x868: Pop(2)
0x869: Return(); Pop(2)

0x86a: Stack[-1] = 0
0x86b: PushEmpty(int, int)
0x86c: Push("branch")
0x86d: @ GetVariable(Stack[-1], Stack[-2])
0x86e: Pop(1)
0x86f: Stack[-3] = Stack[-1]
0x870: Return(); Pop(2)

0x871: PushEmpty()
0x872: PushEmpty(int)
0x873: Call2 0x86b

0x874: Pop(0)
0x875: Push((int) 1)
0x876: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x877: IF (Stack[-1] == 0) GOTO 0x87b; Pop(1)

0x878: @ WorkWithCorpse(Stack[-1])
0x879: Pop(0)
0x87a: GOTO 0x87d

0x87b: @ Barter(Stack[-1])
0x87c: Pop(0)
0x87d: Return(); Pop(0)

0x87e: PushEmpty(int, bool, int, bool)
0x87f: Pop(0); Push((bool) Stack[-6] > Stack[-5])
0x880: IF (Stack[-1] == 0) GOTO 0x885; Pop(1)

0x881: Push("GenerateMoney: iMin > iMax")
0x882: @ Trace(Stack[-1])
0x883: Pop(1)
0x884: Return(); Pop(4)

0x885: Stack[-2] = (int) 0
0x886: Pop(0); Push((bool) Stack[-6] != Stack[-5])
0x887: IF (Stack[-1] == 0) GOTO 0x88c; Pop(1)

0x888: Pop(0); Push(Stack[-5] - Stack[-6]);
0x889: @ irand(Stack[-3], Stack[-1])
0x88a: Pop(1)
0x88b: GOTO 0x890

0x88c: Push((int) 0)
0x88d: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x88e: IF (Stack[-1] == 0) GOTO 0x890; Pop(1)

0x88f: Return(); Pop(4)

0x890: Stack[-2] = Stack[-2] + Stack[-6]; Pop(0);
0x891: Push((int) 0)
0x892: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x893: IF (Stack[-1] == 0) GOTO 0x895; Pop(1)

0x894: Return(); Pop(4)

0x895: PushEmpty(int, string)
0x896: Stack[-1] = "Money"
0x897: Call2 0x975

0x898: Pop(1)
0x899: Push((int) 0)
0x89a: @ AddItem(Stack[-3], Stack[-2], Stack[-1], Stack[-4])
0x89b: Pop(2)
0x89c: Return(); Pop(4)

0x89d: PushEmpty(object, int, bool, object, int, bool)
0x89e: @ CreateInvItem(Stack[-3])
0x89f: Pop(0)
0x8a0: @@ SetItemName(Stack[-7])
0x8a1: Pop(0)
0x8a2: Push("Organ")
0x8a3: Push((int) 1)
0x8a4: @@ SetProperty(Stack[-2], Stack[-1])
0x8a5: Pop(2)
0x8a6: @@ GetItemID(Stack[-2])
0x8a7: Pop(0)
0x8a8: Push((int) 0)
0x8a9: Push((int) 1)
0x8aa: @ AddItem(Stack[-3], Stack[-5], Stack[-2], Stack[-1])
0x8ab: Pop(2)
0x8ac: Return(); Pop(6)

0x8ad: Stack[-3] = 0
0x8ae: PushEmpty(int)
0x8af: Call2 0x86b

0x8b0: Pop(0)
0x8b1: Push((int) 1)
0x8b2: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x8b3: IF (Stack[-1] == 0) GOTO 0x8b5; Pop(1)

0x8b4: Return(); Pop(0)

0x8b5: PushEmpty(string)
0x8b6: Stack[-1] = "liver"
0x8b7: Call2 0x89d

0x8b8: Pop(1)
0x8b9: PushEmpty(string)
0x8ba: Stack[-1] = "kidney"
0x8bb: Call2 0x89d

0x8bc: Pop(1)
0x8bd: PushEmpty(string)
0x8be: Stack[-1] = "heart"
0x8bf: Call2 0x89d

0x8c0: Pop(1)
0x8c1: PushEmpty(string)
0x8c2: Stack[-1] = "blood"
0x8c3: Call2 0x89d

0x8c4: Pop(1)
0x8c5: Return(); Pop(0)

0x8c6: PushEmpty(int, bool, int, bool)
0x8c7: Push(Stack[-5])
0x8c8: IF (Stack[-1] == 0) GOTO 0x91f; Pop(1)

0x8c9: PushEmpty(int, int)
0x8ca: Stack[-2] = (int) 0
0x8cb: Push((int) 100)
0x8cc: PushEmpty(int)
0x8cd: Call2 0x84e

0x8ce: Pop(0)
0x8cf: Push((int) 100)
0x8d0: Pop(2); Push(Stack[-2] * Stack[-1]);
0x8d1: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x8d2: Call2 0x87e

0x8d3: Pop(2)
0x8d4: Push((int) 8)
0x8d5: @ irand(Stack[-3], Stack[-1])
0x8d6: Pop(1)
0x8d7: Push((int) 0)
0x8d8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8d9: IF (Stack[-1] == 0) GOTO 0x8e3; Pop(1)

0x8da: PushEmpty(int, string)
0x8db: Stack[-1] = "lemon"
0x8dc: Call2 0x975

0x8dd: Pop(1)
0x8de: Push((int) 0)
0x8df: Push((int) 1)
0x8e0: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x8e1: Pop(3)
0x8e2: GOTO 0x91e

0x8e3: Push((int) 1)
0x8e4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8e5: IF (Stack[-1] == 0) GOTO 0x8ef; Pop(1)

0x8e6: PushEmpty(int, string)
0x8e7: Stack[-1] = "rusk"
0x8e8: Call2 0x975

0x8e9: Pop(1)
0x8ea: Push((int) 0)
0x8eb: Push((int) 1)
0x8ec: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x8ed: Pop(3)
0x8ee: GOTO 0x91e

0x8ef: Push((int) 2)
0x8f0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8f1: IF (Stack[-1] == 0) GOTO 0x8fb; Pop(1)

0x8f2: PushEmpty(int, string)
0x8f3: Stack[-1] = "hook"
0x8f4: Call2 0x975

0x8f5: Pop(1)
0x8f6: Push((int) 0)
0x8f7: Push((int) 1)
0x8f8: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x8f9: Pop(3)
0x8fa: GOTO 0x91e

0x8fb: Push((int) 4)
0x8fc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8fd: IF (Stack[-1] == 0) GOTO 0x907; Pop(1)

0x8fe: PushEmpty(int, string)
0x8ff: Stack[-1] = "syringe"
0x900: Call2 0x975

0x901: Pop(1)
0x902: Push((int) 0)
0x903: Push((int) 1)
0x904: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x905: Pop(3)
0x906: GOTO 0x91e

0x907: Push((int) 5)
0x908: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x909: IF (Stack[-1] == 0) GOTO 0x913; Pop(1)

0x90a: PushEmpty(int, string)
0x90b: Stack[-1] = "watch"
0x90c: Call2 0x975

0x90d: Pop(1)
0x90e: Push((int) 0)
0x90f: Push((int) 1)
0x910: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x911: Pop(3)
0x912: GOTO 0x91e

0x913: Push((int) 6)
0x914: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x915: IF (Stack[-1] == 0) GOTO 0x91e; Pop(1)

0x916: PushEmpty(int, string)
0x917: Stack[-1] = "razor"
0x918: Call2 0x975

0x919: Pop(1)
0x91a: Push((int) 0)
0x91b: Push((int) 1)
0x91c: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x91d: Pop(3)
0x91e: GOTO 0x974

0x91f: PushEmpty(int, int)
0x920: Stack[-2] = (int) 0
0x921: Push((int) 50)
0x922: PushEmpty(int)
0x923: Call2 0x84e

0x924: Pop(0)
0x925: Push((int) 50)
0x926: Pop(2); Push(Stack[-2] * Stack[-1]);
0x927: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x928: Call2 0x87e

0x929: Pop(2)
0x92a: Push((int) 7)
0x92b: @ irand(Stack[-3], Stack[-1])
0x92c: Pop(1)
0x92d: Push((int) 0)
0x92e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x92f: IF (Stack[-1] == 0) GOTO 0x939; Pop(1)

0x930: PushEmpty(int, string)
0x931: Stack[-1] = "beads"
0x932: Call2 0x975

0x933: Pop(1)
0x934: Push((int) 0)
0x935: Push((int) 1)
0x936: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x937: Pop(3)
0x938: GOTO 0x974

0x939: Push((int) 1)
0x93a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x93b: IF (Stack[-1] == 0) GOTO 0x945; Pop(1)

0x93c: PushEmpty(int, string)
0x93d: Stack[-1] = "bracelet"
0x93e: Call2 0x975

0x93f: Pop(1)
0x940: Push((int) 0)
0x941: Push((int) 1)
0x942: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x943: Pop(3)
0x944: GOTO 0x974

0x945: Push((int) 2)
0x946: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x947: IF (Stack[-1] == 0) GOTO 0x951; Pop(1)

0x948: PushEmpty(int, string)
0x949: Stack[-1] = "ear_ring"
0x94a: Call2 0x975

0x94b: Pop(1)
0x94c: Push((int) 0)
0x94d: Push((int) 1)
0x94e: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x94f: Pop(3)
0x950: GOTO 0x974

0x951: Push((int) 3)
0x952: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x953: IF (Stack[-1] == 0) GOTO 0x95d; Pop(1)

0x954: PushEmpty(int, string)
0x955: Stack[-1] = "gold_ring"
0x956: Call2 0x975

0x957: Pop(1)
0x958: Push((int) 0)
0x959: Push((int) 1)
0x95a: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x95b: Pop(3)
0x95c: GOTO 0x974

0x95d: Push((int) 4)
0x95e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x95f: IF (Stack[-1] == 0) GOTO 0x969; Pop(1)

0x960: PushEmpty(int, string)
0x961: Stack[-1] = "silver_ring"
0x962: Call2 0x975

0x963: Pop(1)
0x964: Push((int) 0)
0x965: Push((int) 1)
0x966: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x967: Pop(3)
0x968: GOTO 0x974

0x969: Push((int) 5)
0x96a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x96b: IF (Stack[-1] == 0) GOTO 0x974; Pop(1)

0x96c: PushEmpty(int, string)
0x96d: Stack[-1] = "flower"
0x96e: Call2 0x975

0x96f: Pop(1)
0x970: Push((int) 0)
0x971: Push((int) 1)
0x972: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x973: Pop(3)
0x974: Return(); Pop(4)

0x975: PushEmpty(int, int)
0x976: @ GetInvItemByName(Stack[-1], Stack[-3])
0x977: Pop(0)
0x978: Stack[-4] = Stack[-1]
0x979: Return(); Pop(2)

0x97a: PushEmpty()
0x97b: PushEmpty(object)
0x97c: Stack[-1] = Stack[-2]
0x97d: Push(-1, 0); TaskCall(0)
0x97e: Call2 0x0

0x97f: Pop(-1, 0); TaskReturn
0x980: Pop(1)
0x981: Return(); Pop(0)

0x982: PushEmpty(float, float)
0x983: Push("health")
0x984: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x985: IF (Stack[-1] == 0) GOTO 0x98e; Pop(1)

0x986: Push("health")
0x987: @ GetProperty(Stack[-1], Stack[-2])
0x988: Pop(1)
0x989: Push((int) 0)
0x98a: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x98b: IF (Stack[-1] == 0) GOTO 0x98e; Pop(1)

0x98c: @ SignalDeath(Stack[-4])
0x98d: Pop(0)
0x98e: Return(); Pop(2)

0x98f: PushEmpty()
0x990: PushEmpty(object)
0x991: Stack[-1] = Stack[-2]
0x992: Call2 0x97a

0x993: Pop(1)
0x994: Return(); Pop(0)

0x995: PushEmpty()
0x996: PushEmpty(object, int, float)
0x997: Stack[-3] = Stack[-7]
0x998: Stack[-2] = Stack[-6]
0x999: Stack[-1] = Stack[-5]
0x99a: Call2 0x761

0x99b: Pop(3)
0x99c: Return(); Pop(0)

0x99d: PushEmpty()
0x99e: PushEmpty(object, int, float, cvector, cvector)
0x99f: Stack[-5] = Stack[-11]
0x9a0: Stack[-4] = Stack[-10]
0x9a1: Stack[-3] = Stack[-9]
0x9a2: Stack[-2] = Stack[-7]
0x9a3: Stack[-1] = Stack[-6]
0x9a4: Call2 0x7a5

0x9a5: Pop(5)
0x9a6: Return(); Pop(0)

0x9a7: PushEmpty()
0x9a8: Push("unholster")
0x9a9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x9aa: IF (Stack[-1] == 0) GOTO 0x9b2; Pop(1)

0x9ab: PushEmpty(bool, object)
0x9ac: Stack[-1] = Stack[-4]
0x9ad: Call2 0xae4

0x9ae: Stack[-5] = Stack[-2]
0x9af: Pop(2)
0x9b0: Return(); Pop(0)

0x9b1: GOTO 0x9c5

0x9b2: Push("player_shot")
0x9b3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x9b4: IF (Stack[-1] == 0) GOTO 0x9bc; Pop(1)

0x9b5: PushEmpty(bool, object)
0x9b6: Stack[-1] = Stack[-4]
0x9b7: Call2 0xae9

0x9b8: Stack[-5] = Stack[-2]
0x9b9: Pop(2)
0x9ba: Return(); Pop(0)

0x9bb: GOTO 0x9c5

0x9bc: Push("battle")
0x9bd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x9be: IF (Stack[-1] == 0) GOTO 0x9c5; Pop(1)

0x9bf: PushEmpty(bool, object)
0x9c0: Stack[-1] = Stack[-4]
0x9c1: Call2 0xafe

0x9c2: Stack[-5] = Stack[-2]
0x9c3: Pop(2)
0x9c4: Return(); Pop(0)

0x9c5: Stack[-3] = (bool) 0
0x9c6: Return(); Pop(0)

0x9c7: PushEmpty()
0x9c8: Push("unholster")
0x9c9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x9ca: IF (Stack[-1] == 0) GOTO 0x9d0; Pop(1)

0x9cb: PushEmpty(object)
0x9cc: Stack[-1] = Stack[-3]
0x9cd: Call2 0xae7

0x9ce: Pop(1)
0x9cf: GOTO 0x9df

0x9d0: Push("player_shot")
0x9d1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x9d2: IF (Stack[-1] == 0) GOTO 0x9d8; Pop(1)

0x9d3: PushEmpty(object)
0x9d4: Stack[-1] = Stack[-3]
0x9d5: Call2 0xaf8

0x9d6: Pop(1)
0x9d7: GOTO 0x9df

0x9d8: Push("battle")
0x9d9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x9da: IF (Stack[-1] == 0) GOTO 0x9df; Pop(1)

0x9db: PushEmpty(object)
0x9dc: Stack[-1] = Stack[-3]
0x9dd: Call2 0xb01

0x9de: Pop(1)
0x9df: Return(); Pop(0)

0x9e0: PushEmpty(bool, bool)
0x9e1: PushEmpty(bool)
0x9e2: Stack[-1] = (bool) 0
0x9e3: PushEmpty(bool, object)
0x9e4: Stack[-1] = Stack[-6]
0x9e5: Call2 0xae4

0x9e6: Pop(1)
0x9e7: IF (Stack[-1] == 0) GOTO 0x9ee; Pop(1)

0x9e8: PushEmpty(bool, object)
0x9e9: Stack[-1] = Stack[-6]
0x9ea: Call2 0x69a

0x9eb: Pop(1)
0x9ec: IF (Stack[-1] == 0) GOTO 0x9ee; Pop(1)

0x9ed: Stack[-1] = (bool) 1
0x9ee: IF (Stack[-1] == 0) GOTO 0x9f5; Pop(1)

0x9ef: @@ IsWeaponHolstered(Stack[-1])
0x9f0: Pop(0)
0x9f1: Pop(0); Push((bool) Stack[-1] == 0)
0x9f2: IF (Stack[-1] == 0) GOTO 0x9f5; Pop(1)

0x9f3: Stack[-4] = (bool) 1
0x9f4: Return(); Pop(2)

0x9f5: Stack[-4] = (bool) 0
0x9f6: Return(); Pop(2)

0x9f7: PushEmpty()
0x9f8: PushEmpty(object)
0x9f9: Stack[-1] = Stack[-2]
0x9fa: Call2 0xae7

0x9fb: Pop(1)
0x9fc: Return(); Pop(0)

0x9fd: PushEmpty()
0x9fe: PushEmpty(bool, object)
0x9ff: Stack[-1] = Stack[-3]
0xa00: Call2 0x69a

0xa01: Pop(1)
0xa02: IF (Stack[-1] == 0) GOTO 0xa09; Pop(1)

0xa03: PushEmpty(object)
0xa04: Call2 0x7f7

0xa05: Pop(0)
0xa06: Push((float)-0.03)
0xa07: @ ReportReputationChange(Stack[-3], Stack[-2], Stack[-1])
0xa08: Pop(2)
0xa09: Return(); Pop(0)

0xa0a: PushEmpty(object, object)
0xa0b: Push("heal")
0xa0c: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xa0d: IF (Stack[-1] == 0) GOTO 0xa18; Pop(1)

0xa0e: Push("player")
0xa0f: @ FindActor(Stack[-2], Stack[-1])
0xa10: Pop(1)
0xa11: PushEmpty(bool, object)
0xa12: Stack[-1] = Stack[-3]
0xa13: Call2 0xb03

0xa14: Stack[-6] = Stack[-2]
0xa15: Pop(2)
0xa16: Return(); Pop(2)

0xa17: Stack[-1] = 0
0xa18: Stack[-4] = (bool) 0
0xa19: Return(); Pop(2)

0xa1a: PushEmpty(object, object)
0xa1b: Push("heal")
0xa1c: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xa1d: IF (Stack[-1] == 0) GOTO 0xa26; Pop(1)

0xa1e: Push("player")
0xa1f: @ FindActor(Stack[-2], Stack[-1])
0xa20: Pop(1)
0xa21: PushEmpty(object)
0xa22: Stack[-1] = Stack[-2]
0xa23: Call2 0xb06

0xa24: Pop(1)
0xa25: Stack[-1] = 0
0xa26: Return(); Pop(2)

0xa27: PushEmpty()
0xa28: PushEmpty(bool)
0xa29: Call2 0xb42

0xa2a: Pop(0)
0xa2b: IF (Stack[-1] == 0) GOTO 0xa2e; Pop(1)

0xa2c: Stack[-2] = (int) 2
0xa2d: GOTO 0xa2f

0xa2e: Stack[-2] = (int) 0
0xa2f: Return(); Pop(0)

0xa30: PushEmpty()
0xa31: PushEmpty(object)
0xa32: Stack[-1] = Stack[-2]
0xa33: Push(-1, 1); TaskCall(2)
0xa34: Call2 0x1bf

0xa35: Pop(-1, 1); TaskReturn
0xa36: Pop(1)
0xa37: Return(); Pop(0)

0xa38: PushEmpty()
0xa39: PushEmpty(bool, object)
0xa3a: Stack[-1] = Stack[-3]
0xa3b: Call2 0x71d

0xa3c: Pop(1)
0xa3d: IF (Stack[-1] == 0) GOTO 0xa40; Pop(1)

0xa3e: Stack[-2] = (int) 2
0xa3f: GOTO 0xa41

0xa40: Stack[-2] = (int) 0
0xa41: Return(); Pop(0)

0xa42: PushEmpty()
0xa43: PushEmpty(object)
0xa44: Stack[-1] = Stack[-2]
0xa45: Push(-1, 6); TaskCall(3)
0xa46: Call2 0x2d2

0xa47: Pop(-1, 6); TaskReturn
0xa48: Pop(1)
0xa49: Return(); Pop(0)

0xa4a: PushEmpty(string, string, string, string)
0xa4b: PushEmpty(bool, object, string)
0xa4c: Stack[-2] = Stack[-9]
0xa4d: Stack[-1] = "class"
0xa4e: Call2 0x69f

0xa4f: Pop(2)
0xa50: Pop(1); Push((bool) Stack[-1] == 0)
0xa51: IF (Stack[-1] == 0) GOTO 0xa54; Pop(1)

0xa52: Stack[-7] = (bool) 0
0xa53: Return(); Pop(4)

0xa54: Push("class")
0xa55: @ GetProperty(Stack[-1], Stack[-3])
0xa56: Pop(1)
0xa57: Push("class")
0xa58: @@ GetProperty(Stack[-1], Stack[-2])
0xa59: Pop(1)
0xa5a: PushEmpty(bool)
0xa5b: Stack[-1] = (bool) 0
0xa5c: Pop(0); Push((bool) Stack[-6] == 0)
0xa5d: IF (Stack[-1] == 0) GOTO 0xa61; Pop(1)

0xa5e: Pop(0); Push((bool) Stack[-3] == Stack[-2])
0xa5f: IF (Stack[-1] == 0) GOTO 0xa61; Pop(1)

0xa60: Stack[-1] = (bool) 1
0xa61: IF (Stack[-1] == 0) GOTO 0xa64; Pop(1)

0xa62: Stack[-7] = (bool) 1
0xa63: Return(); Pop(4)

0xa64: Push("rat")
0xa65: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa66: IF (Stack[-1] == 0) GOTO 0xa6a; Pop(1)

0xa67: Stack[-7] = (bool) 0
0xa68: Return(); Pop(4)

0xa69: GOTO 0xa93

0xa6a: Push("rat_big")
0xa6b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa6c: IF (Stack[-1] == 0) GOTO 0xa70; Pop(1)

0xa6d: Stack[-7] = (bool) 0
0xa6e: Return(); Pop(4)

0xa6f: GOTO 0xa93

0xa70: Push("dog")
0xa71: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa72: IF (Stack[-1] == 0) GOTO 0xa76; Pop(1)

0xa73: Stack[-7] = (bool) 0
0xa74: Return(); Pop(4)

0xa75: GOTO 0xa93

0xa76: Push("grabitel")
0xa77: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa78: IF (Stack[-1] == 0) GOTO 0xa7c; Pop(1)

0xa79: Stack[-7] = (bool) 0
0xa7a: Return(); Pop(4)

0xa7b: GOTO 0xa93

0xa7c: Push("bomber")
0xa7d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa7e: IF (Stack[-1] == 0) GOTO 0xa82; Pop(1)

0xa7f: Stack[-7] = (bool) 0
0xa80: Return(); Pop(4)

0xa81: GOTO 0xa93

0xa82: Push("sanitar")
0xa83: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa84: IF (Stack[-1] == 0) GOTO 0xa88; Pop(1)

0xa85: Stack[-7] = (bool) 0
0xa86: Return(); Pop(4)

0xa87: GOTO 0xa93

0xa88: Push("hunter")
0xa89: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa8a: IF (Stack[-1] == 0) GOTO 0xa8e; Pop(1)

0xa8b: Stack[-7] = (bool) 0
0xa8c: Return(); Pop(4)

0xa8d: GOTO 0xa93

0xa8e: Push("soldier")
0xa8f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa90: IF (Stack[-1] == 0) GOTO 0xa93; Pop(1)

0xa91: Stack[-7] = (bool) 0
0xa92: Return(); Pop(4)

0xa93: Stack[-7] = (bool) 1
0xa94: Return(); Pop(4)

0xa95: PushEmpty()
0xa96: PushEmpty(int, object)
0xa97: Stack[-1] = Stack[-4]
0xa98: Call2 0xa38

0xa99: Stack[-5] = Stack[-2]
0xa9a: Pop(2)
0xa9b: Return(); Pop(0)

0xa9c: PushEmpty()
0xa9d: PushEmpty(object)
0xa9e: Stack[-1] = Stack[-2]
0xa9f: Call2 0xa42

0xaa0: Pop(1)
0xaa1: Return(); Pop(0)

0xaa2: PushEmpty(bool, bool)
0xaa3: PushEmpty(bool, object, bool)
0xaa4: Stack[-2] = Stack[-8]
0xaa5: Stack[-1] = !Stack[-6]; Pop(0);
0xaa6: Call2 0xa4a

0xaa7: Pop(2)
0xaa8: Pop(1); Push((bool) Stack[-1] == 0)
0xaa9: IF (Stack[-1] == 0) GOTO 0xaac; Pop(1)

0xaaa: Stack[-7] = (bool) 0
0xaab: Return(); Pop(2)

0xaac: @ CanSee(Stack[-1], Stack[-6])
0xaad: Pop(0)
0xaae: PushEmpty(bool)
0xaaf: Stack[-1] = (bool) 1
0xab0: Push(Stack[-2])
0xab1: IF (Stack[-1] == 0) GOTO 0xaba; Pop(1)

0xab2: PushEmpty(float, object)
0xab3: Stack[-1] = Stack[-9]
0xab4: Call2 0x692

0xab5: Pop(1)
0xab6: Pop(0); Push(Stack[-6] * Stack[-6]);
0xab7: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0xab8: IF (Stack[-1] == 0) GOTO 0xaba; Pop(1)

0xab9: Stack[-1] = (bool) 0
0xaba: IF (Stack[-1] == 0) GOTO 0xabd; Pop(1)

0xabb: Stack[-7] = (bool) 1
0xabc: Return(); Pop(2)

0xabd: Stack[-7] = (bool) 0
0xabe: Return(); Pop(2)

0xabf: PushEmpty()
0xac0: Stack[-2] = (int) 2
0xac1: Return(); Pop(0)

0xac2: PushEmpty()
0xac3: PushEmpty(object)
0xac4: Stack[-1] = Stack[-2]
0xac5: Call2 0xb17

0xac6: Pop(1)
0xac7: Return(); Pop(0)

0xac8: Return(); Pop(0)

0xac9: PushEmpty(bool, bool)
0xaca: Push("Received steal")
0xacb: @ Trace(Stack[-1])
0xacc: Pop(1)
0xacd: @ CanSee(Stack[-1], Stack[-3])
0xace: Pop(0)
0xacf: Push(Stack[-1])
0xad0: IF (Stack[-1] == 0) GOTO 0xad7; Pop(1)

0xad1: PushEmpty(int, object)
0xad2: Stack[-1] = Stack[-5]
0xad3: Call2 0xa38

0xad4: Stack[-6] = Stack[-2]
0xad5: Pop(2)
0xad6: Return(); Pop(2)

0xad7: Stack[-4] = (int) 0
0xad8: Return(); Pop(2)

0xad9: PushEmpty()
0xada: PushEmpty(object)
0xadb: Stack[-1] = Stack[-2]
0xadc: Call2 0xa42

0xadd: Pop(1)
0xade: Return(); Pop(0)

0xadf: PushEmpty()
0xae0: Stack[-3] = (int) 0
0xae1: Return(); Pop(0)

0xae2: PushEmpty()
0xae3: Return(); Pop(0)

0xae4: PushEmpty()
0xae5: Stack[-2] = (bool) 0
0xae6: Return(); Pop(0)

0xae7: PushEmpty()
0xae8: Return(); Pop(0)

0xae9: PushEmpty(bool, bool)
0xaea: @ CanSee(Stack[-1], Stack[-3])
0xaeb: Pop(0)
0xaec: Stack[-4] = (bool) 1
0xaed: Push(Stack[-1])
0xaee: IF (Stack[-1] == 0) GOTO 0xaf7; Pop(1)

0xaef: PushEmpty(float, object)
0xaf0: Stack[-1] = Stack[-5]
0xaf1: Call2 0x692

0xaf2: Pop(1)
0xaf3: Push((int) 2250000)
0xaf4: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0xaf5: IF (Stack[-1] == 0) GOTO 0xaf7; Pop(1)

0xaf6: Stack[-4] = (bool) 0
0xaf7: Return(); Pop(2)

0xaf8: PushEmpty()
0xaf9: PushEmpty(object)
0xafa: Stack[-1] = Stack[-2]
0xafb: Call2 0xa30

0xafc: Pop(1)
0xafd: Return(); Pop(0)

0xafe: PushEmpty()
0xaff: Stack[-2] = (bool) 0
0xb00: Return(); Pop(0)

0xb01: PushEmpty()
0xb02: Return(); Pop(0)

0xb03: PushEmpty()
0xb04: Stack[-2] = (bool) 0
0xb05: Return(); Pop(0)

0xb06: PushEmpty()
0xb07: Return(); Pop(0)

0xb08: PushEmpty(string, string)
0xb09: Stack[-1] = "idle"
0xb0a: Push(Stack[-3])
0xb0b: IF (Stack[-1] == 0) GOTO 0xb0d; Pop(1)

0xb0c: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0xb0d: Stack[-4] = Stack[-1]
0xb0e: Return(); Pop(2)

0xb0f: Push(GlobalVars[0])
0xb10: Stack[-1] = (bool) 0
0xb11: GlobalVars[0] = Stack[-1]; Pop(1)
0xb12: PushEmpty(bool)
0xb13: Stack[-1] = (bool) 1
0xb14: Call2 0x8c6

0xb15: Pop(1)
0xb16: Return(); Pop(0)

0xb17: PushEmpty(bool, bool)
0xb18: Push(GlobalVars[0])
0xb19: IF (Stack[-1] == 0) GOTO 0xb23; Pop(1)

0xb1a: @ IsOverrideActive(Stack[-1])
0xb1b: Pop(0)
0xb1c: Pop(0); Push((bool) Stack[-1] == 0)
0xb1d: IF (Stack[-1] == 0) GOTO 0xb22; Pop(1)

0xb1e: PushEmpty(object)
0xb1f: Stack[-1] = Stack[-4]
0xb20: Call2 0x871

0xb21: Pop(1)
0xb22: Return(); Pop(2)

0xb23: Return(); Pop(2)

0xb24: PushEmpty(int, bool, int, int, bool, int)
0xb25: Stack[-3] = (int) 0
0xb26: Push("all")
0xb27: PushEmpty(string, int)
0xb28: Stack[-1] = Stack[-6]
0xb29: Call2 0xb08

0xb2a: Pop(1)
0xb2b: @ HasAnimation(Stack[-4], Stack[-2], Stack[-1])
0xb2c: Pop(2)
0xb2d: Pop(0); Push((bool) Stack[-2] == 0)
0xb2e: IF (Stack[-1] == 0) GOTO 0xb30; Pop(1)

0xb2f: GOTO 0xb33

0xb30: Push((int) 1)
0xb31: Stack[-4] = Stack[-4] + Stack[-1]; Pop(1);
0xb32: GOTO 0xb26

0xb33: @ irand(Stack[-1], Stack[-3])
0xb34: Pop(0)
0xb35: Push("all")
0xb36: PushEmpty(string, int)
0xb37: Stack[-1] = Stack[-4]
0xb38: Call2 0xb08

0xb39: Pop(1)
0xb3a: @ PlayAnimation(Stack[-2], Stack[-1])
0xb3b: Pop(2)
0xb3c: @ WaitForAnimEnd()
0xb3d: Pop(0)
0xb3e: Return(); Pop(6)

0xb3f: @ StopAnimation()
0xb40: Pop(0)
0xb41: Return(); Pop(0)

0xb42: Stack[-1] = (bool) 1
0xb43: Return(); Pop(0)

0xb44: PushEmpty()
0xb45: PushEmpty(bool, object, object, float, bool)
0xb46: Stack[-4] = Stack[-8]
0xb47: Stack[-3] = Stack[-7]
0xb48: Stack[-2] = (float) 500.0
0xb49: Stack[-1] = Stack[-6]
0xb4a: Call2 0xaa2

0xb4b: Stack[-9] = Stack[-5]
0xb4c: Pop(5)
0xb4d: Return(); Pop(0)

0xb4e: PushEmpty()
0xb4f: PushEmpty(bool, object)
0xb50: Stack[-1] = Stack[-3]
0xb51: Call2 0x69a

0xb52: Pop(1)
0xb53: IF (Stack[-1] == 0) GOTO 0xb5f; Pop(1)

0xb54: PushEmpty(object)
0xb55: Call2 0x7f7

0xb56: Pop(0)
0xb57: Push((float)-0.07)
0xb58: Push((bool) 1)
0xb59: @ ReportReputationChange(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xb5a: Pop(3)
0xb5b: PushEmpty(bool)
0xb5c: Stack[-1] = (bool) 1
0xb5d: Call2 0x8c6

0xb5e: Pop(1)
0xb5f: PushEmpty()
0xb60: Call2 0x8ae

0xb61: Pop(0)
0xb62: Push(GlobalVars[0])
0xb63: Stack[-1] = (bool) 1
0xb64: GlobalVars[0] = Stack[-1]; Pop(1)
0xb65: Push((int) 50)
0xb66: Push((int) 40)
0xb67: @ SetRTEnvelope(Stack[-2], Stack[-1])
0xb68: Pop(2)
0xb69: Return(); Pop(0)

