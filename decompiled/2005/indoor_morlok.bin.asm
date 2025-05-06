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
	SetItemName
	Organ
	GetItemID
	liver
	kidney
	heart
	blood
	rusk
	peanut
	unholster
	player_shot
	IsWeaponHolstered
	heal
	player
	idle
	class
	butcher
	morlok

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
	irand (2 args)
	WaitForAnimEnd (1 args)
	rand (2 args)
	Sleep (2 args)
	ResetAAS (0 args)
	StopAnimation (0 args)
	StopGroup0 (0 args)
	IsPlayerActor (2 args)
	PlayGlobalMusic (1 args)
	SendPlayerEnemy (2 args)
	GetPFPosition (1 args)
	CanReachByPF (2 args)
	rand (1 args)
	Face (1 args)
	SetSpeed (1 args)
	Sleep (1 args)
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
	FindPathTo (4 args)
	SensePlayerOnly (1 args)
	GetRandomPFPointInCircle (4 args)
	FollowPath (3 args)
	GetCameraFarDistance (1 args)
	IsDead (1 args)
	GetSecondaryAnimationType (1 args)
	FadeSecondaryAnimation (4 args)
	CreateVectorVector (1 args)
	GetGeometryLocator (4 args)
	AddActorByType (6 args)
	RotateAsync (2 args)
	IsLoaded (1 args)
	AddItem (3 args)
	AddItem (4 args)
	Is3DSoundLoaded (2 args)
	GetEyesHeight (1 args)
	PlayGlobalSound (2 args)
	self (1 args)
	CreateFloatVector (1 args)
	SendWorldWndMessage (2 args)
	BroadcastMessage (3 args)
	GetVariable (2 args)
	WorkWithCorpse (1 args)
	Barter (1 args)
	CreateInvItem (1 args)
	ClearSubContainer (1 args)
	GetProperty (2 args)
	SignalDeath (1 args)
	ReportReputationChange (3 args)
	FindActor (2 args)
	IsOverrideActive (1 args)
	ReportReputationChange (4 args)
	SetRTEnvelope (2 args)

RunOp = 0x54b
RunTask = 4

GlobalTasks: 
	GTASK_0  Params = 1
		EVENT_0 Op = 0xf Vars = (object)
		EVENT_6 Op = 0x1d Vars = ()
		EVENT_22 Op = 0x96 Vars = (object, int, float, float)
		EVENT_16 Op = 0x98 Vars = (object, string)
		EVENT_41 Op = 0x9a Vars = (object)
	GTASK_1  Params = 0
		EVENT_0 Op = 0x9c Vars = (object)
		EVENT_17 Op = 0xb0 Vars = (object)
		EVENT_30 Op = 0xc8 Vars = (object, object, bool)
		EVENT_40 Op = 0xe4 Vars = (object)
		EVENT_42 Op = 0xf8 Vars = (object, string)
		EVENT_26 Op = 0x11d Vars = (string)
		EVENT_6 Op = 0x12b Vars = ()
		EVENT_1 Op = 0x132 Vars = (object)
	GTASK_2 Vars = (object, int, int, bool, float, int) Params = 1
	GTASK_3 Vars = (bool, object, bool) Params = 6
		EVENT_6 Op = 0x43a Vars = ()
		EVENT_7 Op = 0x472 Vars = (int)
		EVENT_1 Op = 0x48d Vars = (object)
		EVENT_2 Op = 0x49c Vars = (object)
		EVENT_10 Op = 0x522 Vars = (object)
		EVENT_41 Op = 0x52d Vars = (object)
	GTASK_4 Vars = (bool, bool) Params = 0
		EVENT_0 Op = 0x562 Vars = (object)
		EVENT_17 Op = 0x576 Vars = (object)
		EVENT_30 Op = 0x58e Vars = (object, object, bool)
		EVENT_40 Op = 0x5aa Vars = (object)
		EVENT_42 Op = 0x5be Vars = (object, string)
		EVENT_26 Op = 0x5e3 Vars = (string)
		EVENT_1 Op = 0x5f1 Vars = (object)
		EVENT_6 Op = 0x5ff Vars = ()
		EVENT_10 Op = 0x646 Vars = (object)
		EVENT_28 Op = 0x64a Vars = ()
		EVENT_41 Op = 0x654 Vars = (object)

Events:
EVENT_16 Op = 0x883 Vars = (object, string)
EVENT_41 Op = 0x890 Vars = (object)
EVENT_22 Op = 0x896 Vars = (object, int, float, float)
EVENT_43 Op = 0x89e Vars = (object, int, float, float, cvector, cvector)

0x0: PushEmpty()
0x1: EventDisable(0)
0x2: PushEmpty(object)
0x3: Stack[-1] = Stack[-2]
0x4: Call2 0x21

0x5: Pop(1)
0x6: PushEmpty(object)
0x7: Stack[-1] = Stack[-2]
0x8: Call2 0x9ae

0x9: Pop(1)
0xa: EventEnable(0)
0xb: @ Hold()
0xc: Pop(0)
0xd: GOTO 0xb

0xe: Return(); Pop(0)

0xf: PushEmpty(int, int)
0x10: PushEmpty(int, object)
0x11: Stack[-1] = Stack[-5]
0x12: Call2 0x969

0x13: Stack[-3] = Stack[-2]
0x14: Pop(2)
0x15: Push((int) 0)
0x16: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x17: IF (Stack[-1] == 0) GOTO 0x1c; Pop(1)

0x18: PushEmpty(object)
0x19: Stack[-1] = Stack[-4]
0x1a: Call2 0x96c

0x1b: Pop(1)
0x1c: Return(); Pop(2)

0x1d: PushEmpty()
0x1e: Call2 0x972

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
0x67: Call2 0x7c0

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
0x89: Call2 0x7c0

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

0x9c: PushEmpty(int, int)
0x9d: PushEmpty(int, object)
0x9e: Stack[-1] = Stack[-5]
0x9f: Call2 0x969

0xa0: Stack[-3] = Stack[-2]
0xa1: Pop(2)
0xa2: Push((int) 0)
0xa3: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xa4: IF (Stack[-1] == 0) GOTO 0xaf; Pop(1)

0xa5: Push((int) 1)
0xa6: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xa7: IF (Stack[-1] == 0) GOTO 0xab; Pop(1)

0xa8: PushEmpty()
0xa9: Call2 0x191

0xaa: Pop(0)
0xab: PushEmpty(object)
0xac: Stack[-1] = Stack[-4]
0xad: Call2 0x96c

0xae: Pop(1)
0xaf: Return(); Pop(2)

0xb0: PushEmpty(int, int)
0xb1: PushEmpty(object)
0xb2: Stack[-1] = Stack[-4]
0xb3: Call2 0x8fe

0xb4: Pop(1)
0xb5: PushEmpty(int, object)
0xb6: Stack[-1] = Stack[-5]
0xb7: Call2 0x940

0xb8: Stack[-3] = Stack[-2]
0xb9: Pop(2)
0xba: Push((int) 0)
0xbb: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xbc: IF (Stack[-1] == 0) GOTO 0xc7; Pop(1)

0xbd: Push((int) 1)
0xbe: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xbf: IF (Stack[-1] == 0) GOTO 0xc3; Pop(1)

0xc0: PushEmpty()
0xc1: Call2 0x191

0xc2: Pop(0)
0xc3: PushEmpty(object)
0xc4: Stack[-1] = Stack[-4]
0xc5: Call2 0x94a

0xc6: Pop(1)
0xc7: Return(); Pop(2)

0xc8: PushEmpty(int, int)
0xc9: PushEmpty(bool, object, object, bool)
0xca: Stack[-3] = Stack[-9]
0xcb: Stack[-2] = Stack[-8]
0xcc: Stack[-1] = Stack[-7]
0xcd: Call2 0x998

0xce: Pop(3)
0xcf: IF (Stack[-1] == 0) GOTO 0xe3; Pop(1)

0xd0: PushEmpty(int, object, bool)
0xd1: Stack[-2] = Stack[-8]
0xd2: Stack[-1] = Stack[-6]
0xd3: Call2 0x952

0xd4: Stack[-4] = Stack[-3]
0xd5: Pop(3)
0xd6: Push((int) 0)
0xd7: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xd8: IF (Stack[-1] == 0) GOTO 0xe3; Pop(1)

0xd9: Push((int) 1)
0xda: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xdb: IF (Stack[-1] == 0) GOTO 0xdf; Pop(1)

0xdc: PushEmpty()
0xdd: Call2 0x191

0xde: Pop(0)
0xdf: PushEmpty(object)
0xe0: Stack[-1] = Stack[-6]
0xe1: Call2 0x959

0xe2: Pop(1)
0xe3: Return(); Pop(2)

0xe4: PushEmpty(int, int)
0xe5: PushEmpty(int, object)
0xe6: Stack[-1] = Stack[-5]
0xe7: Call2 0x95f

0xe8: Stack[-3] = Stack[-2]
0xe9: Pop(2)
0xea: Push((int) 0)
0xeb: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xec: IF (Stack[-1] == 0) GOTO 0xf7; Pop(1)

0xed: Push((int) 1)
0xee: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xef: IF (Stack[-1] == 0) GOTO 0xf3; Pop(1)

0xf0: PushEmpty()
0xf1: Call2 0x191

0xf2: Pop(0)
0xf3: PushEmpty(object)
0xf4: Stack[-1] = Stack[-4]
0xf5: Call2 0x962

0xf6: Pop(1)
0xf7: Return(); Pop(2)

0xf8: PushEmpty(int, int)
0xf9: PushEmpty(bool, object, string)
0xfa: Stack[-2] = Stack[-7]
0xfb: Stack[-1] = Stack[-6]
0xfc: Call2 0x8a8

0xfd: Pop(2)
0xfe: IF (Stack[-1] == 0) GOTO 0x108; Pop(1)

0xff: PushEmpty()
0x100: Call2 0x191

0x101: Pop(0)
0x102: PushEmpty(object, string)
0x103: Stack[-2] = Stack[-6]
0x104: Stack[-1] = Stack[-5]
0x105: Call2 0x8c8

0x106: Pop(2)
0x107: GOTO 0x11c

0x108: PushEmpty(int, string, object)
0x109: Stack[-2] = Stack[-6]
0x10a: Stack[-1] = Stack[-7]
0x10b: Call2 0x964

0x10c: Stack[-4] = Stack[-3]
0x10d: Pop(3)
0x10e: Push((int) 0)
0x10f: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x110: IF (Stack[-1] == 0) GOTO 0x11c; Pop(1)

0x111: Push((int) 1)
0x112: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x113: IF (Stack[-1] == 0) GOTO 0x117; Pop(1)

0x114: PushEmpty()
0x115: Call2 0x191

0x116: Pop(0)
0x117: PushEmpty(string, object)
0x118: Stack[-2] = Stack[-5]
0x119: Stack[-1] = Stack[-6]
0x11a: Call2 0x967

0x11b: Pop(2)
0x11c: Return(); Pop(2)

0x11d: PushEmpty()
0x11e: PushEmpty(bool, string)
0x11f: Stack[-1] = Stack[-3]
0x120: Call2 0x90b

0x121: Pop(1)
0x122: IF (Stack[-1] == 0) GOTO 0x12a; Pop(1)

0x123: PushEmpty()
0x124: Call2 0x191

0x125: Pop(0)
0x126: PushEmpty(string)
0x127: Stack[-1] = Stack[-2]
0x128: Call2 0x91b

0x129: Pop(1)
0x12a: Return(); Pop(0)

0x12b: PushEmpty()
0x12c: Call2 0x191

0x12d: Pop(0)
0x12e: PushEmpty()
0x12f: Call2 0x972

0x130: Pop(0)
0x131: Return(); Pop(0)

0x132: PushEmpty()
0x133: PushEmpty(bool, object)
0x134: Stack[-1] = Stack[-3]
0x135: Call2 0x8e1

0x136: Pop(1)
0x137: IF (Stack[-1] == 0) GOTO 0x13f; Pop(1)

0x138: PushEmpty()
0x139: Call2 0x191

0x13a: Pop(0)
0x13b: PushEmpty(object)
0x13c: Stack[-1] = Stack[-2]
0x13d: Call2 0x8f8

0x13e: Pop(1)
0x13f: Return(); Pop(0)

0x140: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x141: @ WaitForAnimEnd()
0x142: Pop(0)
0x143: PushEmpty(bool)
0x144: Call2 0x796

0x145: Pop(0)
0x146: Pop(1); Push((bool) Stack[-1] == 0)
0x147: IF (Stack[-1] == 0) GOTO 0x149; Pop(1)

0x148: Return(); Pop(14)

0x149: PushEmpty(int)
0x14a: Call2 0x92f

0x14b: Stack[-8] = Stack[-1]
0x14c: Pop(1)
0x14d: Stack[-6] = (int) 0
0x14e: PushEmpty(bool)
0x14f: Stack[-1] = (bool) 0
0x150: Push((int) 5)
0x151: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x152: IF (Stack[-1] == 0) GOTO 0x158; Pop(1)

0x153: PushEmpty(bool)
0x154: Call2 0x796

0x155: Pop(0)
0x156: IF (Stack[-1] == 0) GOTO 0x158; Pop(1)

0x157: Stack[-1] = (bool) 1
0x158: IF (Stack[-1] == 0) GOTO 0x18c; Pop(1)

0x159: Push((int) 3)
0x15a: @ irand(Stack[-6], Stack[-1])
0x15b: Pop(1)
0x15c: Push((int) 0)
0x15d: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x15e: IF (Stack[-1] == 0) GOTO 0x170; Pop(1)

0x15f: Push(Stack[-7])
0x160: IF (Stack[-1] == 0) GOTO 0x16f; Pop(1)

0x161: @ irand(Stack[-4], Stack[-7])
0x162: Pop(0)
0x163: Push("all")
0x164: PushEmpty(string, int)
0x165: Stack[-1] = Stack[-7]
0x166: Call2 0x928

0x167: Pop(1)
0x168: @ PlayAnimation(Stack[-2], Stack[-1])
0x169: Pop(2)
0x16a: @ WaitForAnimEnd(Stack[-3])
0x16b: Pop(0)
0x16c: Pop(0); Push((bool) Stack[-3] == 0)
0x16d: IF (Stack[-1] == 0) GOTO 0x16f; Pop(1)

0x16e: GOTO 0x18c

0x16f: GOTO 0x181

0x170: Push((int) 1)
0x171: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x172: IF (Stack[-1] == 0) GOTO 0x17e; Pop(1)

0x173: Push((int) 4)
0x174: @ rand(Stack[-3], Stack[-1])
0x175: Pop(1)
0x176: Push((int) 1)
0x177: Pop(1); Push(Stack[-3] + Stack[-1]);
0x178: @ Sleep(Stack[-1], Stack[-2])
0x179: Pop(1)
0x17a: Pop(0); Push((bool) Stack[-1] == 0)
0x17b: IF (Stack[-1] == 0) GOTO 0x17d; Pop(1)

0x17c: GOTO 0x18c

0x17d: GOTO 0x181

0x17e: Push(Stack[-6])
0x17f: IF (Stack[-1] == 0) GOTO 0x181; Pop(1)

0x180: GOTO 0x18c

0x181: PushEmpty(bool)
0x182: Call2 0x18f

0x183: Pop(0)
0x184: Pop(1); Push((bool) Stack[-1] == 0)
0x185: IF (Stack[-1] == 0) GOTO 0x187; Pop(1)

0x186: GOTO 0x18c

0x187: @ ResetAAS()
0x188: Pop(0)
0x189: Push((int) 1)
0x18a: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x18b: GOTO 0x14e

0x18c: @ ResetAAS()
0x18d: Pop(0)
0x18e: Return(); Pop(14)

0x18f: Stack[-1] = (bool) 1
0x190: Return(); Pop(0)

0x191: @ StopAnimation()
0x192: Pop(0)
0x193: @ StopGroup0()
0x194: Pop(0)
0x195: Return(); Pop(0)

0x196: PushEmpty()
0x197: PushEmpty(object, bool, float)
0x198: Stack[-3] = Stack[-4]
0x199: Stack[-2] = (bool) 1
0x19a: Stack[-1] = (float) 180.0
0x19b: Call2 0x1a4

0x19c: Pop(3)
0x19d: Return(); Pop(0)

0x19e: PushEmpty()
0x19f: Stack[-3] = (float) 0.05
0x1a0: Return(); Pop(0)

0x1a1: PushEmpty()
0x1a2: Stack[-3] = (int) 0
0x1a3: Return(); Pop(0)

0x1a4: PushEmpty(float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float, float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float)
0x1a5: PushEmpty()
0x1a6: Call2 0x289

0x1a7: Pop(0)
0x1a8: Stack[5 + Tasks[-1].StackPointer] = (int)0
0x1a9: Push("@GetAttackDistance")
0x1aa: Push((int) 1)
0x1ab: Pop(2); Push(IsFuncExist(Stack[-27], Stack[-2], Stack[-1]))
0x1ac: IF (Stack[-1] == 0) GOTO 0x1b2; Pop(1)

0x1ad: @@ GetAttackDistance(Stack[-11])
0x1ae: Pop(0)
0x1af: Push((int) 50)
0x1b0: Stack[-12] = Stack[-12] + Stack[-1]; Pop(1);
0x1b1: GOTO 0x1b3

0x1b2: Stack[-11] = Stack[-23]
0x1b3: Push((int) 150)
0x1b4: Pop(1); Push((bool) Stack[-12] >= Stack[-1])
0x1b5: IF (Stack[-1] == 0) GOTO 0x1b7; Pop(1)

0x1b6: Stack[-11] = (int) 150
0x1b7: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x1b8: Stack[0 + Tasks[-1].StackPointer] = Stack[-25]
0x1b9: @ IsPlayerActor(Stack[-0], Stack[-8])
0x1ba: Pop(0)
0x1bb: Push(Stack[-8])
0x1bc: IF (Stack[-1] == 0) GOTO 0x1c5; Pop(1)

0x1bd: Push("attack")
0x1be: @ PlayGlobalMusic(Stack[-1])
0x1bf: Pop(1)
0x1c0: PushEmpty(object)
0x1c1: Call2 0x7e9

0x1c2: Pop(0)
0x1c3: @ SendPlayerEnemy(Stack[-26], Stack[-1])
0x1c4: Pop(1)
0x1c5: Push(Stack[-24])
0x1c6: IF (Stack[-1] == 0) GOTO 0x1c9; Pop(1)

0x1c7: Stack[-7] = (bool) 0
0x1c8: GOTO 0x1ca

0x1c9: Stack[-7] = (bool) 1
0x1ca: Push((float)400.0)
0x1cb: Stack[-7] = Stack[-1] + Stack[-12]; Pop(1);
0x1cc: PushEmpty(bool)
0x1cd: Stack[-1] = (bool) 0
0x1ce: PushEmpty(bool, object)
0x1cf: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1d0: Call2 0x6f5

0x1d1: Pop(1)
0x1d2: IF (Stack[-1] == 0) GOTO 0x1d6; Pop(1)

0x1d3: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x1d4: IF (Stack[-1] == 0) GOTO 0x1d6; Pop(1)

0x1d5: Stack[-1] = (bool) 1
0x1d6: IF (Stack[-1] == 0) GOTO 0x278; Pop(1)

0x1d7: PushEmpty()
0x1d8: Call2 0x426

0x1d9: Pop(0)
0x1da: @@ GetPFPosition(Stack[-10])
0x1db: Pop(0)
0x1dc: @ GetPFPosition(Stack[-9])
0x1dd: Pop(0)
0x1de: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0x1df: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x1e0: Pop(0); Push(Stack[-6] * Stack[-6]);
0x1e1: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0x1e2: IF (Stack[-1] == 0) GOTO 0x1f2; Pop(1)

0x1e3: PushEmpty(bool, object, float, float, bool, bool)
0x1e4: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0x1e5: Stack[-4] = Stack[-17]
0x1e6: Stack[-3] = (float) 3000.0
0x1e7: Stack[-2] = (bool) 1
0x1e8: Stack[-1] = (bool) 0
0x1e9: Push(-6, 3); TaskCall(3)
0x1ea: Call2 0x441

0x1eb: Pop(-6, 3); TaskReturn
0x1ec: Pop(5)
0x1ed: Pop(1); Push((bool) Stack[-1] == 0)
0x1ee: IF (Stack[-1] == 0) GOTO 0x1f0; Pop(1)

0x1ef: GOTO 0x278

0x1f0: Stack[-7] = (bool) 0
0x1f1: GOTO 0x277

0x1f2: Pop(0); Push(Stack[-23] * Stack[-23]);
0x1f3: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0x1f4: IF (Stack[-1] == 0) GOTO 0x26f; Pop(1)

0x1f5: @@ GetPFPosition(Stack[-3])
0x1f6: Pop(0)
0x1f7: @ CanReachByPF(Stack[-2], Stack[-3])
0x1f8: Pop(0)
0x1f9: Pop(0); Push((bool) Stack[-2] == 0)
0x1fa: IF (Stack[-1] == 0) GOTO 0x20a; Pop(1)

0x1fb: PushEmpty(bool, object, float, float, bool, bool)
0x1fc: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0x1fd: Stack[-4] = Stack[-17]
0x1fe: Stack[-3] = (float) 3000.0
0x1ff: Stack[-2] = (bool) 1
0x200: Stack[-1] = (bool) 0
0x201: Push(-6, 3); TaskCall(3)
0x202: Call2 0x441

0x203: Pop(-6, 3); TaskReturn
0x204: Pop(5)
0x205: Pop(1); Push((bool) Stack[-1] == 0)
0x206: IF (Stack[-1] == 0) GOTO 0x208; Pop(1)

0x207: GOTO 0x278

0x208: Stack[-7] = (bool) 0
0x209: GOTO 0x1cc

0x20a: Pop(0); Push((bool) Stack[-7] == 0)
0x20b: IF (Stack[-1] == 0) GOTO 0x223; Pop(1)

0x20c: PushEmpty(object)
0x20d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x20e: Call2 0x78b

0x20f: Pop(1)
0x210: Push("all")
0x211: Push("attack_on")
0x212: @ PlayAnimation(Stack[-2], Stack[-1])
0x213: Pop(2)
0x214: @ WaitForAnimEnd()
0x215: Pop(0)
0x216: PushEmpty()
0x217: Call2 0x426

0x218: Pop(0)
0x219: @ StopAsync()
0x21a: Pop(0)
0x21b: Stack[-7] = (bool) 1
0x21c: PushEmpty(bool, object)
0x21d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x21e: Call2 0x6f5

0x21f: Pop(1)
0x220: Pop(1); Push((bool) Stack[-1] == 0)
0x221: IF (Stack[-1] == 0) GOTO 0x223; Pop(1)

0x222: GOTO 0x278

0x223: @ rand(Stack[-1])
0x224: Pop(0)
0x225: PushEmpty(bool)
0x226: Stack[-1] = (bool) 1
0x227: Push((float)0.25)
0x228: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x229: IF (Stack[-1] == 0) GOTO 0x22f; Pop(1)

0x22a: PushEmpty(bool)
0x22b: Call2 0x3fb

0x22c: Pop(0)
0x22d: IF (Stack[-1] == 0) GOTO 0x22f; Pop(1)

0x22e: Stack[-1] = (bool) 0
0x22f: IF (Stack[-1] == 0) GOTO 0x240; Pop(1)

0x230: @ Face(Stack[-0])
0x231: Pop(0)
0x232: PushEmpty()
0x233: Call2 0x42d

0x234: Pop(0)
0x235: Push("all")
0x236: Push("attack_stay")
0x237: @ PlayAnimation(Stack[-2], Stack[-1])
0x238: Pop(2)
0x239: PushEmpty(bool, float)
0x23a: Stack[-1] = Stack[-25]
0x23b: Call2 0x377

0x23c: Pop(2)
0x23d: @ StopAsync()
0x23e: Pop(0)
0x23f: GOTO 0x26e

0x240: @ Face(Stack[-0])
0x241: Pop(0)
0x242: Push("all")
0x243: Push("fjump")
0x244: @ PlayAnimation(Stack[-2], Stack[-1])
0x245: Pop(2)
0x246: @ WaitForAnimEnd()
0x247: Pop(0)
0x248: PushEmpty()
0x249: Call2 0x426

0x24a: Pop(0)
0x24b: Push(CVector(0.0, 0.0, 0.0))
0x24c: @ SetSpeed(Stack[-1])
0x24d: Pop(1)
0x24e: @ Stop()
0x24f: Pop(0)
0x250: @ StopAsync()
0x251: Pop(0)
0x252: PushEmpty(bool)
0x253: Call2 0x3fb

0x254: Pop(0)
0x255: Pop(1); Push((bool) Stack[-1] == 0)
0x256: IF (Stack[-1] == 0) GOTO 0x26e; Pop(1)

0x257: PushEmpty(bool, object)
0x258: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x259: Call2 0x6f5

0x25a: Pop(1)
0x25b: Pop(1); Push((bool) Stack[-1] == 0)
0x25c: IF (Stack[-1] == 0) GOTO 0x25e; Pop(1)

0x25d: GOTO 0x278

0x25e: @@ GetPFPosition(Stack[-10])
0x25f: Pop(0)
0x260: @ GetPFPosition(Stack[-9])
0x261: Pop(0)
0x262: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0x263: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x264: Pop(0); Push(Stack[-23] * Stack[-23]);
0x265: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x266: IF (Stack[-1] == 0) GOTO 0x26e; Pop(1)

0x267: PushEmpty(bool, float)
0x268: Stack[-1] = Stack[-25]
0x269: Call2 0x2d3

0x26a: Pop(1)
0x26b: Pop(1); Push((bool) Stack[-1] == 0)
0x26c: IF (Stack[-1] == 0) GOTO 0x26e; Pop(1)

0x26d: GOTO 0x278

0x26e: GOTO 0x277

0x26f: PushEmpty(bool, float)
0x270: Stack[-1] = Stack[-25]
0x271: Call2 0x2d3

0x272: Pop(1)
0x273: Pop(1); Push((bool) Stack[-1] == 0)
0x274: IF (Stack[-1] == 0) GOTO 0x276; Pop(1)

0x275: GOTO 0x278

0x276: Stack[-7] = (bool) 1
0x277: GOTO 0x1cc

0x278: @ WaitForAnimEnd()
0x279: Pop(0)
0x27a: Push( Stack[3 + Tasks[-1].StackPointer] )
0x27b: IF (Stack[-1] == 0) GOTO 0x27d; Pop(1)

0x27c: Return(); Pop(22)

0x27d: Push("all")
0x27e: Push("attack_off")
0x27f: @ PlayAnimation(Stack[-2], Stack[-1])
0x280: Pop(2)
0x281: @ WaitForAnimEnd()
0x282: Pop(0)
0x283: Push(Stack[-8])
0x284: IF (Stack[-1] == 0) GOTO 0x288; Pop(1)

0x285: Push((float)2.0)
0x286: @ Sleep(Stack[-1])
0x287: Pop(1)
0x288: Return(); Pop(22)

0x289: PushEmpty(bool, bool, cvector, bool, bool, cvector)
0x28a: Stack[1 + Tasks[-1].StackPointer] = (int)0
0x28b: Push("all")
0x28c: Push("attack_begin")
0x28d: Push((int) 1)
0x28e: Pop(1); Push(Stack[1 + StackPtr] + Stack[-1]);
0x28f: Pop(2); Push(Stack[-2] + Stack[-1]);
0x290: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0x291: Pop(2)
0x292: Pop(0); Push((bool) Stack[-3] == 0)
0x293: IF (Stack[-1] == 0) GOTO 0x295; Pop(1)

0x294: GOTO 0x298

0x295: Push((int) 1)
0x296: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x297: GOTO 0x28b

0x298: Stack[2 + Tasks[-1].StackPointer] = (int)0
0x299: Push("attack")
0x29a: Push((int) 1)
0x29b: Pop(1); Push(Stack[2 + StackPtr] + Stack[-1]);
0x29c: Pop(2); Push(Stack[-2] + Stack[-1]);
0x29d: @ IsExisting3DSound(Stack[-3], Stack[-1])
0x29e: Pop(1)
0x29f: Pop(0); Push((bool) Stack[-2] == 0)
0x2a0: IF (Stack[-1] == 0) GOTO 0x2a2; Pop(1)

0x2a1: GOTO 0x2a5

0x2a2: Push((int) 1)
0x2a3: Stack[2 + Tasks[-1].StackPointer] = Stack[2 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x2a4: GOTO 0x299

0x2a5: Push("all")
0x2a6: Push("bjump")
0x2a7: @ GetAnimationOffset(Stack[-3], Stack[-2], Stack[-1])
0x2a8: Pop(2)
0x2a9: Push(CvectorIndex(Stack[-1], 2))
0x2aa: Stack[4 + Tasks[-1].StackPointer] = -Stack[-1]; Pop(1);
0x2ab: Return(); Pop(6)

0x2ac: PushEmpty(object, float, float, object, float, float)
0x2ad: Push((float)0.9)
0x2ae: Pop(1); Push(Stack[-9] * Stack[-1]);
0x2af: @ GetVictim(Stack[-1], Stack[-4])
0x2b0: Pop(1)
0x2b1: @ ReportAttack(Stack[-0])
0x2b2: Pop(0)
0x2b3: Pop(0); Push((bool) Stack[-3] == Stack[0 + Tasks[-1].StackPointer])
0x2b4: IF (Stack[-1] == 0) GOTO 0x2d1; Pop(1)

0x2b5: PushEmpty(float, object, int)
0x2b6: Stack[-2] = Stack[-6]
0x2b7: Stack[-1] = Stack[-10]
0x2b8: Call2 0x19e

0x2b9: Stack[-5] = Stack[-3]
0x2ba: Pop(3)
0x2bb: PushEmpty(float, object, float, int)
0x2bc: Stack[-3] = Stack[-7]
0x2bd: Stack[-2] = Stack[-6]
0x2be: PushEmpty(int, object, int)
0x2bf: Stack[-2] = Stack[-10]
0x2c0: Stack[-1] = Stack[-14]
0x2c1: Call2 0x1a1

0x2c2: Stack[-4] = Stack[-3]
0x2c3: Pop(3)
0x2c4: Call2 0x683

0x2c5: Stack[-5] = Stack[-4]
0x2c6: Pop(4)
0x2c7: PushEmpty(int)
0x2c8: Call2 0x42b

0x2c9: Pop(0)
0x2ca: @ ReportHit(Stack[-0], Stack[-1], Stack[-2], Stack[-3])
0x2cb: Pop(1)
0x2cc: PushEmpty(object, float)
0x2cd: Stack[-2] = Stack[-5]
0x2ce: Stack[-1] = Stack[-3]
0x2cf: Call2 0x432

0x2d0: Pop(2)
0x2d1: Return(); Pop(6)

0x2d2: Stack[-3] = 0
0x2d3: PushEmpty(int, bool, int, string, int, bool, int, string)
0x2d4: PushEmpty()
0x2d5: Call2 0x426

0x2d6: Pop(0)
0x2d7: @ irand(Stack[-4], Stack[-1])
0x2d8: Pop(0)
0x2d9: Push((int) 1)
0x2da: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x2db: @ Face(Stack[-0])
0x2dc: Pop(0)
0x2dd: Push((bool) 1)
0x2de: @ SetAttackState(Stack[-1])
0x2df: Pop(1)
0x2e0: PushEmpty()
0x2e1: Call2 0x823

0x2e2: Pop(0)
0x2e3: Push("all")
0x2e4: Push("attack_begin")
0x2e5: Pop(1); Push(Stack[-1] + Stack[-6]);
0x2e6: @ PlayAnimation(Stack[-2], Stack[-1])
0x2e7: Pop(2)
0x2e8: @ WaitForAnimEnd()
0x2e9: Pop(0)
0x2ea: PushEmpty()
0x2eb: Call2 0x406

0x2ec: Pop(0)
0x2ed: PushEmpty(bool, object)
0x2ee: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2ef: Call2 0x6f5

0x2f0: Pop(1)
0x2f1: Pop(1); Push((bool) Stack[-1] == 0)
0x2f2: IF (Stack[-1] == 0) GOTO 0x2f7; Pop(1)

0x2f3: @ StopAsync()
0x2f4: Pop(0)
0x2f5: Stack[-10] = (bool) 0
0x2f6: Return(); Pop(8)

0x2f7: PushEmpty(float, int)
0x2f8: Stack[-2] = Stack[-11]
0x2f9: Stack[-1] = Stack[-6]
0x2fa: Call2 0x2ac

0x2fb: Pop(2)
0x2fc: Push("all")
0x2fd: Push("attack_middle")
0x2fe: Pop(1); Push(Stack[-1] + Stack[-6]);
0x2ff: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0x300: Pop(2)
0x301: Push(Stack[-3])
0x302: IF (Stack[-1] == 0) GOTO 0x348; Pop(1)

0x303: PushEmpty()
0x304: Call2 0x823

0x305: Pop(0)
0x306: Push("all")
0x307: Push("attack_middle")
0x308: Pop(1); Push(Stack[-1] + Stack[-6]);
0x309: @ PlayAnimation(Stack[-2], Stack[-1])
0x30a: Pop(2)
0x30b: @ WaitForAnimEnd()
0x30c: Pop(0)
0x30d: PushEmpty()
0x30e: Call2 0x426

0x30f: Pop(0)
0x310: PushEmpty(bool, object)
0x311: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x312: Call2 0x6f5

0x313: Pop(1)
0x314: Pop(1); Push((bool) Stack[-1] == 0)
0x315: IF (Stack[-1] == 0) GOTO 0x31a; Pop(1)

0x316: @ StopAsync()
0x317: Pop(0)
0x318: Stack[-10] = (bool) 0
0x319: Return(); Pop(8)

0x31a: PushEmpty(float, int)
0x31b: Stack[-2] = Stack[-11]
0x31c: Stack[-1] = Stack[-6]
0x31d: Call2 0x2ac

0x31e: Pop(2)
0x31f: Stack[-2] = (int) 1
0x320: Push("attack_middle")
0x321: Pop(1); Push(Stack[-1] + Stack[-5]);
0x322: Push("_")
0x323: Pop(2); Push(Stack[-2] + Stack[-1]);
0x324: Stack[-2] = Stack[-1] + Stack[-3]; Pop(1);
0x325: Push("all")
0x326: @ HasAnimation(Stack[-4], Stack[-1], Stack[-2])
0x327: Pop(1)
0x328: Pop(0); Push((bool) Stack[-3] == 0)
0x329: IF (Stack[-1] == 0) GOTO 0x32b; Pop(1)

0x32a: GOTO 0x348

0x32b: PushEmpty()
0x32c: Call2 0x823

0x32d: Pop(0)
0x32e: Push("all")
0x32f: @ PlayAnimation(Stack[-1], Stack[-2])
0x330: Pop(1)
0x331: @ WaitForAnimEnd()
0x332: Pop(0)
0x333: PushEmpty()
0x334: Call2 0x426

0x335: Pop(0)
0x336: PushEmpty(bool, object)
0x337: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x338: Call2 0x6f5

0x339: Pop(1)
0x33a: Pop(1); Push((bool) Stack[-1] == 0)
0x33b: IF (Stack[-1] == 0) GOTO 0x340; Pop(1)

0x33c: @ StopAsync()
0x33d: Pop(0)
0x33e: Stack[-10] = (bool) 0
0x33f: Return(); Pop(8)

0x340: PushEmpty(float, int)
0x341: Stack[-2] = Stack[-11]
0x342: Stack[-1] = Stack[-6]
0x343: Call2 0x2ac

0x344: Pop(2)
0x345: Push((int) 1)
0x346: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x347: GOTO 0x320

0x348: Push((bool) 0)
0x349: @ SetAttackState(Stack[-1])
0x34a: Pop(1)
0x34b: Push("all")
0x34c: Push("attack_end")
0x34d: Pop(1); Push(Stack[-1] + Stack[-6]);
0x34e: @ PlayAnimation(Stack[-2], Stack[-1])
0x34f: Pop(2)
0x350: PushEmpty(bool)
0x351: Call2 0x434

0x352: Pop(0)
0x353: IF (Stack[-1] == 0) GOTO 0x35a; Pop(1)

0x354: PushEmpty(bool, float)
0x355: Stack[-1] = (float) 0.75
0x356: Call2 0x35c

0x357: Pop(2)
0x358: @ StopAsync()
0x359: Pop(0)
0x35a: Stack[-10] = (bool) 1
0x35b: Return(); Pop(8)

0x35c: PushEmpty(float, bool, float, bool)
0x35d: @ rand(Stack[-2])
0x35e: Pop(0)
0x35f: Pop(0); Push((bool) Stack[-2] < Stack[-5])
0x360: IF (Stack[-1] == 0) GOTO 0x370; Pop(1)

0x361: @ IsAnimationPlaying(Stack[-1])
0x362: Pop(0)
0x363: Pop(0); Push((bool) Stack[-1] == 0)
0x364: IF (Stack[-1] == 0) GOTO 0x366; Pop(1)

0x365: GOTO 0x36f

0x366: PushEmpty(bool)
0x367: Call2 0x3be

0x368: Pop(0)
0x369: IF (Stack[-1] == 0) GOTO 0x36c; Pop(1)

0x36a: Stack[-6] = (bool) 1
0x36b: Return(); Pop(4)

0x36c: @ sync()
0x36d: Pop(0)
0x36e: GOTO 0x361

0x36f: GOTO 0x375

0x370: @ WaitForAnimEnd()
0x371: Pop(0)
0x372: PushEmpty()
0x373: Call2 0x426

0x374: Pop(0)
0x375: Stack[-6] = (bool) 0
0x376: Return(); Pop(4)

0x377: PushEmpty(bool, cvector, cvector, cvector, float, bool, cvector, cvector, cvector, float)
0x378: @ IsAnimationPlaying(Stack[-5])
0x379: Pop(0)
0x37a: Pop(0); Push((bool) Stack[-5] == 0)
0x37b: IF (Stack[-1] == 0) GOTO 0x37d; Pop(1)

0x37c: GOTO 0x39d

0x37d: PushEmpty(bool)
0x37e: Call2 0x3be

0x37f: Pop(0)
0x380: IF (Stack[-1] == 0) GOTO 0x383; Pop(1)

0x381: Stack[-12] = (bool) 1
0x382: Return(); Pop(10)

0x383: PushEmpty(bool, object)
0x384: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x385: Call2 0x6f5

0x386: Pop(1)
0x387: Pop(1); Push((bool) Stack[-1] == 0)
0x388: IF (Stack[-1] == 0) GOTO 0x38b; Pop(1)

0x389: Stack[-12] = (bool) 0
0x38a: Return(); Pop(10)

0x38b: @@ GetPFPosition(Stack[-4])
0x38c: Pop(0)
0x38d: @ GetPFPosition(Stack[-3])
0x38e: Pop(0)
0x38f: Stack[-2] = Stack[-4] - Stack[-3]; Pop(0);
0x390: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x391: Pop(0); Push(Stack[-11] * Stack[-11]);
0x392: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x393: IF (Stack[-1] == 0) GOTO 0x39a; Pop(1)

0x394: PushEmpty(bool, float)
0x395: Stack[-1] = Stack[-13]
0x396: Call2 0x2d3

0x397: Pop(2)
0x398: Stack[-12] = (bool) 1
0x399: Return(); Pop(10)

0x39a: @ sync()
0x39b: Pop(0)
0x39c: GOTO 0x378

0x39d: PushEmpty()
0x39e: Call2 0x426

0x39f: Pop(0)
0x3a0: Stack[-12] = (bool) 0
0x3a1: Return(); Pop(10)

0x3a2: PushEmpty(cvector, cvector, cvector, float, float, cvector, cvector, cvector, float, float)
0x3a3: PushEmpty(bool, object)
0x3a4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3a5: Call2 0x6f5

0x3a6: Pop(1)
0x3a7: Pop(1); Push((bool) Stack[-1] == 0)
0x3a8: IF (Stack[-1] == 0) GOTO 0x3ab; Pop(1)

0x3a9: Stack[-11] = (bool) 0
0x3aa: Return(); Pop(10)

0x3ab: PushEmpty(bool)
0x3ac: Call2 0x3fb

0x3ad: Pop(0)
0x3ae: IF (Stack[-1] == 0) GOTO 0x3bc; Pop(1)

0x3af: @@ GetPFPosition(Stack[-5])
0x3b0: Pop(0)
0x3b1: @ GetPFPosition(Stack[-4])
0x3b2: Pop(0)
0x3b3: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x3b4: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x3b5: @@ GetAttackDistance(Stack[-1])
0x3b6: Pop(0)
0x3b7: Push((int) 50)
0x3b8: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x3b9: Pop(0); Push(Stack[-1] * Stack[-1]);
0x3ba: Stack[-12] = Stack[-3] <= Stack[-1]; Pop(1);
0x3bb: Return(); Pop(10)

0x3bc: Stack[-11] = (bool) 0
0x3bd: Return(); Pop(10)

0x3be: PushEmpty(bool)
0x3bf: Stack[-1] = (bool) 0
0x3c0: PushEmpty(bool)
0x3c1: Call2 0x3a2

0x3c2: Pop(0)
0x3c3: IF (Stack[-1] == 0) GOTO 0x3c9; Pop(1)

0x3c4: PushEmpty(bool)
0x3c5: Call2 0x3ce

0x3c6: Pop(0)
0x3c7: IF (Stack[-1] == 0) GOTO 0x3c9; Pop(1)

0x3c8: Stack[-1] = (bool) 1
0x3c9: IF (Stack[-1] == 0) GOTO 0x3cc; Pop(1)

0x3ca: Stack[-1] = (bool) 1
0x3cb: Return(); Pop(0)

0x3cc: Stack[-1] = (bool) 0
0x3cd: Return(); Pop(0)

0x3ce: PushEmpty(object, bool, float, cvector, cvector, object, bool, float, cvector, cvector)
0x3cf: @ GetScene(Stack[-5])
0x3d0: Pop(0)
0x3d1: Stack[-4] = (bool) 0
0x3d2: PushEmpty(cvector, object)
0x3d3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3d4: Call2 0x66b

0x3d5: Pop(1)
0x3d6: Pop(1); Push(( -Stack[-1])
0x3d7: @ FindDirLength(Stack[-4], Stack[-1], Stack[-4])
0x3d8: Pop(1)
0x3d9: Pop(0); Push((bool) Stack[-3] < Stack[4 + Tasks[-1].StackPointer])
0x3da: IF (Stack[-1] == 0) GOTO 0x3dc; Pop(1)

0x3db: GOTO 0x3f8

0x3dc: @ Face(Stack[-0])
0x3dd: Pop(0)
0x3de: Push("all")
0x3df: Push("bjump")
0x3e0: @ PlayAnimation(Stack[-2], Stack[-1])
0x3e1: Pop(2)
0x3e2: @@ GetPFPosition(Stack[-2])
0x3e3: Pop(0)
0x3e4: @ GetPFPosition(Stack[-1])
0x3e5: Pop(0)
0x3e6: @ WaitForAnimEnd()
0x3e7: Pop(0)
0x3e8: PushEmpty()
0x3e9: Call2 0x426

0x3ea: Pop(0)
0x3eb: @ StopAsync()
0x3ec: Pop(0)
0x3ed: Push(CVector(0.0, 0.0, 0.0))
0x3ee: @ SetSpeed(Stack[-1])
0x3ef: Pop(1)
0x3f0: Stack[-4] = (bool) 1
0x3f1: PushEmpty(bool)
0x3f2: Call2 0x3a2

0x3f3: Pop(0)
0x3f4: Pop(1); Push((bool) Stack[-1] == 0)
0x3f5: IF (Stack[-1] == 0) GOTO 0x3f7; Pop(1)

0x3f6: GOTO 0x3f8

0x3f7: GOTO 0x3d2

0x3f8: Stack[-11] = Stack[-4]
0x3f9: Return(); Pop(10)

0x3fa: Stack[-5] = 0
0x3fb: PushEmpty(bool, bool)
0x3fc: Push("IsAttacking")
0x3fd: Push((int) 1)
0x3fe: Pop(2); Push(IsFuncExist(Stack[0 + Tasks[-1].StackPointer], Stack[-2], Stack[-1]))
0x3ff: IF (Stack[-1] == 0) GOTO 0x404; Pop(1)

0x400: @@ IsAttacking(Stack[-1])
0x401: Pop(0)
0x402: Stack[-3] = Stack[-1]
0x403: Return(); Pop(2)

0x404: Stack[-3] = (bool) 0
0x405: Return(); Pop(2)

0x406: PushEmpty(float, int, float, int)
0x407: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x408: IF (Stack[-1] == 0) GOTO 0x40a; Pop(1)

0x409: Return(); Pop(4)

0x40a: Push( Stack[5 + Tasks[-1].StackPointer] )
0x40b: IF (Stack[-1] == 0) GOTO 0x412; Pop(1)

0x40c: Push((int) -1)
0x40d: Stack[5 + Tasks[-1].StackPointer] = Stack[5 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x40e: Push((int) 0)
0x40f: Pop(1); Push((bool) Stack[5 + Tasks[-1].StackPointer] > Stack[-1])
0x410: IF (Stack[-1] == 0) GOTO 0x412; Pop(1)

0x411: Return(); Pop(4)

0x412: @ rand(Stack[-2])
0x413: Pop(0)
0x414: PushEmpty(float)
0x415: Call2 0x438

0x416: Pop(0)
0x417: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x418: IF (Stack[-1] == 0) GOTO 0x425; Pop(1)

0x419: @ irand(Stack[-1], Stack[-2])
0x41a: Pop(0)
0x41b: Push((int) 1)
0x41c: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x41d: Push("attack")
0x41e: Pop(1); Push(Stack[-1] + Stack[-2]);
0x41f: @ Speak(Stack[-1])
0x420: Pop(1)
0x421: PushEmpty(int)
0x422: Call2 0x436

0x423: Stack[5 + Tasks[-1].StackPointer] = Stack[-1]
0x424: Pop(1)
0x425: Return(); Pop(4)

0x426: PushEmpty(object)
0x427: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x428: Call2 0x81a

0x429: Pop(1)
0x42a: Return(); Pop(0)

0x42b: Stack[-1] = (int) 0
0x42c: Return(); Pop(0)

0x42d: PushEmpty(string)
0x42e: Stack[-1] = "attack_stay"
0x42f: Call2 0x7c0

0x430: Pop(1)
0x431: Return(); Pop(0)

0x432: PushEmpty()
0x433: Return(); Pop(0)

0x434: Stack[-1] = (bool) 1
0x435: Return(); Pop(0)

0x436: Stack[-1] = (int) 1
0x437: Return(); Pop(0)

0x438: Stack[-1] = (float) 0.5
0x439: Return(); Pop(0)

0x43a: PushEmpty()
0x43b: Call2 0x480

0x43c: Pop(0)
0x43d: PushEmpty()
0x43e: Call2 0x972

0x43f: Pop(0)
0x440: Return(); Pop(0)

0x441: PushEmpty(bool, bool, bool, bool)
0x442: PushEmpty(object)
0x443: Stack[-1] = Stack[-10]
0x444: Call2 0x81a

0x445: Pop(1)
0x446: Push((int) 1)
0x447: Push((int) 5)
0x448: @ SetTimer(Stack[-2], Stack[-1])
0x449: Pop(2)
0x44a: @ CanSee(Stack[-2], Stack[-9])
0x44b: Pop(0)
0x44c: Push(Stack[-2])
0x44d: IF (Stack[-1] == 0) GOTO 0x454; Pop(1)

0x44e: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x44f: PushEmpty(object)
0x450: Stack[-1] = Stack[-10]
0x451: Call2 0x79b

0x452: Pop(1)
0x453: GOTO 0x455

0x454: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x455: PushEmpty(bool, object)
0x456: Stack[-1] = Stack[-11]
0x457: Call2 0x672

0x458: Pop(1)
0x459: IF (Stack[-1] == 0) GOTO 0x45f; Pop(1)

0x45a: PushEmpty(object)
0x45b: Call2 0x7e9

0x45c: Pop(0)
0x45d: @ SendPlayerEnemy(Stack[-10], Stack[-1])
0x45e: Pop(1)
0x45f: PushEmpty(bool, object, float, float, bool, bool)
0x460: Stack[-5] = Stack[-15]
0x461: Stack[-4] = Stack[-14]
0x462: Stack[-3] = Stack[-13]
0x463: Stack[-2] = Stack[-12]
0x464: Stack[-1] = Stack[-11]
0x465: Call2 0x4aa

0x466: Stack[-7] = Stack[-6]
0x467: Pop(6)
0x468: Push( Stack[2 + Tasks[-1].StackPointer] )
0x469: IF (Stack[-1] == 0) GOTO 0x46d; Pop(1)

0x46a: Push("head")
0x46b: @ UnlookAsync(Stack[-1])
0x46c: Pop(1)
0x46d: Push((int) 1)
0x46e: @ KillTimer(Stack[-1])
0x46f: Pop(1)
0x470: Stack[-10] = Stack[-1]
0x471: Return(); Pop(4)

0x472: PushEmpty()
0x473: Push((int) 1)
0x474: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x475: IF (Stack[-1] == 0) GOTO 0x47b; Pop(1)

0x476: PushEmpty(object)
0x477: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x478: Call2 0x81a

0x479: Pop(1)
0x47a: GOTO 0x47f

0x47b: PushEmpty(int)
0x47c: Stack[-1] = Stack[-2]
0x47d: Call2 0x510

0x47e: Pop(1)
0x47f: Return(); Pop(0)

0x480: Push((int) 1)
0x481: @ KillTimer(Stack[-1])
0x482: Pop(1)
0x483: Push( Stack[2 + Tasks[-1].StackPointer] )
0x484: IF (Stack[-1] == 0) GOTO 0x489; Pop(1)

0x485: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x486: Push("head")
0x487: @ UnlookAsync(Stack[-1])
0x488: Pop(1)
0x489: PushEmpty()
0x48a: Call2 0x526

0x48b: Pop(0)
0x48c: Return(); Pop(0)

0x48d: PushEmpty()
0x48e: PushEmpty(bool)
0x48f: Stack[-1] = (bool) 0
0x490: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0x491: IF (Stack[-1] == 0) GOTO 0x495; Pop(1)

0x492: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x493: IF (Stack[-1] == 0) GOTO 0x495; Pop(1)

0x494: Stack[-1] = (bool) 1
0x495: IF (Stack[-1] == 0) GOTO 0x49b; Pop(1)

0x496: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x497: PushEmpty(object)
0x498: Stack[-1] = Stack[-2]
0x499: Call2 0x79b

0x49a: Pop(1)
0x49b: Return(); Pop(0)

0x49c: PushEmpty()
0x49d: PushEmpty(bool)
0x49e: Stack[-1] = (bool) 0
0x49f: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0x4a0: IF (Stack[-1] == 0) GOTO 0x4a4; Pop(1)

0x4a1: Push( Stack[2 + Tasks[-1].StackPointer] )
0x4a2: IF (Stack[-1] == 0) GOTO 0x4a4; Pop(1)

0x4a3: Stack[-1] = (bool) 1
0x4a4: IF (Stack[-1] == 0) GOTO 0x4a9; Pop(1)

0x4a5: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x4a6: Push("head")
0x4a7: @ UnlookAsync(Stack[-1])
0x4a8: Pop(1)
0x4a9: Return(); Pop(0)

0x4aa: PushEmpty(bool, bool, object, cvector, cvector, cvector, float, object, bool, bool, object, cvector, cvector, cvector, float, object)
0x4ab: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x4ac: Stack[1 + Tasks[-1].StackPointer] = Stack[-21]
0x4ad: Stack[-7] = Stack[-17]
0x4ae: PushEmpty(bool, object)
0x4af: Stack[-1] = Stack[-23]
0x4b0: Call2 0x536

0x4b1: Pop(1)
0x4b2: Pop(1); Push((bool) Stack[-1] == 0)
0x4b3: IF (Stack[-1] == 0) GOTO 0x4b6; Pop(1)

0x4b4: Stack[-22] = (bool) 0
0x4b5: Return(); Pop(16)

0x4b6: @@ GetPosition(Stack[-5])
0x4b7: Pop(0)
0x4b8: @ GetPosition(Stack[-4])
0x4b9: Pop(0)
0x4ba: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x4bb: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x4bc: PushEmpty(bool)
0x4bd: Stack[-1] = (bool) 0
0x4be: Push((int) 0)
0x4bf: Pop(1); Push((bool) Stack[-21] > Stack[-1])
0x4c0: IF (Stack[-1] == 0) GOTO 0x4c5; Pop(1)

0x4c1: Pop(0); Push(Stack[-20] * Stack[-20]);
0x4c2: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x4c3: IF (Stack[-1] == 0) GOTO 0x4c5; Pop(1)

0x4c4: Stack[-1] = (bool) 1
0x4c5: IF (Stack[-1] == 0) GOTO 0x4ca; Pop(1)

0x4c6: @ Stop()
0x4c7: Pop(0)
0x4c8: Stack[-22] = (bool) 0
0x4c9: Return(); Pop(16)

0x4ca: Pop(0); Push(Stack[-20] * Stack[-20]);
0x4cb: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x4cc: IF (Stack[-1] == 0) GOTO 0x508; Pop(1)

0x4cd: @@ GetPFPosition(Stack[-5])
0x4ce: Pop(0)
0x4cf: @ FindPathTo(Stack[-1], Stack[-5])
0x4d0: Pop(0)
0x4d1: Pop(0); Push(( Stack[-1] != 0 )
0x4d2: IF (Stack[-1] == 0) GOTO 0x4d5; Pop(1)

0x4d3: Stack[-6] = Stack[-1]
0x4d4: Stack[-1] = 0
0x4d5: Pop(0); Push(( Stack[-6] != 0 )
0x4d6: IF (Stack[-1] == 0) GOTO 0x4f6; Pop(1)

0x4d7: Push(Stack[-7])
0x4d8: IF (Stack[-1] == 0) GOTO 0x4df; Pop(1)

0x4d9: Stack[-7] = (bool) 0
0x4da: @ RotatePath(Stack[-6], Stack[-8])
0x4db: Pop(0)
0x4dc: Pop(0); Push((bool) Stack[-8] == 0)
0x4dd: IF (Stack[-1] == 0) GOTO 0x4df; Pop(1)

0x4de: GOTO 0x50e

0x4df: Push((int) 0)
0x4e0: Push((float)0.3)
0x4e1: @ SetTimer(Stack[-2], Stack[-1])
0x4e2: Pop(2)
0x4e3: PushEmpty(string)
0x4e4: Call2 0x53d

0x4e5: Pop(0)
0x4e6: PushEmpty(string)
0x4e7: Call2 0x53f

0x4e8: Pop(0)
0x4e9: @ FollowPath(Stack[-8], Stack[-20], Stack[-10], Stack[-2], Stack[-1])
0x4ea: Pop(2)
0x4eb: Pop(0); Push((bool) Stack[-8] == 0)
0x4ec: IF (Stack[-1] == 0) GOTO 0x4f4; Pop(1)

0x4ed: Push( Stack[0 + Tasks[-1].StackPointer] )
0x4ee: IF (Stack[-1] == 0) GOTO 0x4f2; Pop(1)

0x4ef: Stack[-6] = 0
0x4f0: GOTO 0x50e

0x4f1: GOTO 0x4f3

0x4f2: GOTO 0x50d

0x4f3: GOTO 0x4f5

0x4f4: Stack[-6] = 0
0x4f5: GOTO 0x506

0x4f6: Push((int) 0)
0x4f7: @ KillTimer(Stack[-1])
0x4f8: Pop(1)
0x4f9: Push((float)0.5)
0x4fa: @ Sleep(Stack[-1], Stack[-9])
0x4fb: Pop(1)
0x4fc: Pop(0); Push((bool) Stack[-8] == 0)
0x4fd: IF (Stack[-1] == 0) GOTO 0x502; Pop(1)

0x4fe: Push( Stack[0 + Tasks[-1].StackPointer] )
0x4ff: IF (Stack[-1] == 0) GOTO 0x502; Pop(1)

0x500: Stack[-6] = 0
0x501: GOTO 0x50e

0x502: Push((int) 0)
0x503: Push((float)0.3)
0x504: @ SetTimer(Stack[-2], Stack[-1])
0x505: Pop(2)
0x506: Stack[-1] = 0
0x507: GOTO 0x50c

0x508: Push((int) 0)
0x509: @ KillTimer(Stack[-1])
0x50a: Pop(1)
0x50b: GOTO 0x50e

0x50c: Stack[-6] = 0
0x50d: GOTO 0x4ae

0x50e: Stack[-22] = !Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x50f: Return(); Pop(16)

0x510: PushEmpty()
0x511: Push((int) 0)
0x512: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x513: IF (Stack[-1] == 0) GOTO 0x515; Pop(1)

0x514: Return(); Pop(0)

0x515: PushEmpty(bool, object)
0x516: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x517: Call2 0x536

0x518: Pop(1)
0x519: Pop(1); Push((bool) Stack[-1] == 0)
0x51a: IF (Stack[-1] == 0) GOTO 0x51c; Pop(1)

0x51b: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x51c: Push((int) 0)
0x51d: @ KillTimer(Stack[-1])
0x51e: Pop(1)
0x51f: @ Stop()
0x520: Pop(0)
0x521: Return(); Pop(0)

0x522: PushEmpty()
0x523: @ RequestClearPath(Stack[-1])
0x524: Pop(0)
0x525: Return(); Pop(0)

0x526: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x527: Push((int) 0)
0x528: @ KillTimer(Stack[-1])
0x529: Pop(1)
0x52a: @ Stop()
0x52b: Pop(0)
0x52c: Return(); Pop(0)

0x52d: PushEmpty()
0x52e: PushEmpty()
0x52f: Call2 0x480

0x530: Pop(0)
0x531: PushEmpty(object)
0x532: Stack[-1] = Stack[-2]
0x533: Call2 0x890

0x534: Pop(1)
0x535: Return(); Pop(0)

0x536: PushEmpty()
0x537: PushEmpty(bool, object)
0x538: Stack[-1] = Stack[-3]
0x539: Call2 0x6f5

0x53a: Stack[-4] = Stack[-2]
0x53b: Pop(2)
0x53c: Return(); Pop(0)

0x53d: Stack[-1] = "walk"
0x53e: Return(); Pop(0)

0x53f: Stack[-1] = "run"
0x540: Return(); Pop(0)

0x541: Stack[-1] = (bool) 1
0x542: Return(); Pop(0)

0x543: PushEmpty(object, object)
0x544: Push((int) 1)
0x545: Push((int) 1)
0x546: @ FindPathTo(Stack[-3], Stack[-5], Stack[-2], Stack[-1])
0x547: Pop(2)
0x548: Stack[-4] = Stack[-1]
0x549: Return(); Pop(2)

0x54a: Stack[-1] = 0
0x54b: Push((bool) 1)
0x54c: @ SensePlayerOnly(Stack[-1])
0x54d: Pop(1)
0x54e: PushEmpty()
0x54f: Call2 0x994

0x550: Pop(0)
0x551: PushEmpty()
0x552: Call2 0x559

0x553: Pop(0)
0x554: PushEmpty()
0x555: Call2 0x606

0x556: Pop(0)
0x557: GOTO 0x554

0x558: Return(); Pop(0)

0x559: PushEmpty(bool)
0x55a: Call2 0x796

0x55b: Pop(0)
0x55c: Pop(1); Push((bool) Stack[-1] == 0)
0x55d: IF (Stack[-1] == 0) GOTO 0x561; Pop(1)

0x55e: PushEmpty()
0x55f: Call2 0x972

0x560: Pop(0)
0x561: Return(); Pop(0)

0x562: PushEmpty(int, int)
0x563: PushEmpty(int, object)
0x564: Stack[-1] = Stack[-5]
0x565: Call2 0x969

0x566: Stack[-3] = Stack[-2]
0x567: Pop(2)
0x568: Push((int) 0)
0x569: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x56a: IF (Stack[-1] == 0) GOTO 0x575; Pop(1)

0x56b: Push((int) 1)
0x56c: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x56d: IF (Stack[-1] == 0) GOTO 0x571; Pop(1)

0x56e: PushEmpty()
0x56f: Call2 0x64d

0x570: Pop(0)
0x571: PushEmpty(object)
0x572: Stack[-1] = Stack[-4]
0x573: Call2 0x96c

0x574: Pop(1)
0x575: Return(); Pop(2)

0x576: PushEmpty(int, int)
0x577: PushEmpty(object)
0x578: Stack[-1] = Stack[-4]
0x579: Call2 0x8fe

0x57a: Pop(1)
0x57b: PushEmpty(int, object)
0x57c: Stack[-1] = Stack[-5]
0x57d: Call2 0x940

0x57e: Stack[-3] = Stack[-2]
0x57f: Pop(2)
0x580: Push((int) 0)
0x581: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x582: IF (Stack[-1] == 0) GOTO 0x58d; Pop(1)

0x583: Push((int) 1)
0x584: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x585: IF (Stack[-1] == 0) GOTO 0x589; Pop(1)

0x586: PushEmpty()
0x587: Call2 0x64d

0x588: Pop(0)
0x589: PushEmpty(object)
0x58a: Stack[-1] = Stack[-4]
0x58b: Call2 0x94a

0x58c: Pop(1)
0x58d: Return(); Pop(2)

0x58e: PushEmpty(int, int)
0x58f: PushEmpty(bool, object, object, bool)
0x590: Stack[-3] = Stack[-9]
0x591: Stack[-2] = Stack[-8]
0x592: Stack[-1] = Stack[-7]
0x593: Call2 0x998

0x594: Pop(3)
0x595: IF (Stack[-1] == 0) GOTO 0x5a9; Pop(1)

0x596: PushEmpty(int, object, bool)
0x597: Stack[-2] = Stack[-8]
0x598: Stack[-1] = Stack[-6]
0x599: Call2 0x952

0x59a: Stack[-4] = Stack[-3]
0x59b: Pop(3)
0x59c: Push((int) 0)
0x59d: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x59e: IF (Stack[-1] == 0) GOTO 0x5a9; Pop(1)

0x59f: Push((int) 1)
0x5a0: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x5a1: IF (Stack[-1] == 0) GOTO 0x5a5; Pop(1)

0x5a2: PushEmpty()
0x5a3: Call2 0x64d

0x5a4: Pop(0)
0x5a5: PushEmpty(object)
0x5a6: Stack[-1] = Stack[-6]
0x5a7: Call2 0x959

0x5a8: Pop(1)
0x5a9: Return(); Pop(2)

0x5aa: PushEmpty(int, int)
0x5ab: PushEmpty(int, object)
0x5ac: Stack[-1] = Stack[-5]
0x5ad: Call2 0x95f

0x5ae: Stack[-3] = Stack[-2]
0x5af: Pop(2)
0x5b0: Push((int) 0)
0x5b1: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x5b2: IF (Stack[-1] == 0) GOTO 0x5bd; Pop(1)

0x5b3: Push((int) 1)
0x5b4: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x5b5: IF (Stack[-1] == 0) GOTO 0x5b9; Pop(1)

0x5b6: PushEmpty()
0x5b7: Call2 0x64d

0x5b8: Pop(0)
0x5b9: PushEmpty(object)
0x5ba: Stack[-1] = Stack[-4]
0x5bb: Call2 0x962

0x5bc: Pop(1)
0x5bd: Return(); Pop(2)

0x5be: PushEmpty(int, int)
0x5bf: PushEmpty(bool, object, string)
0x5c0: Stack[-2] = Stack[-7]
0x5c1: Stack[-1] = Stack[-6]
0x5c2: Call2 0x8a8

0x5c3: Pop(2)
0x5c4: IF (Stack[-1] == 0) GOTO 0x5ce; Pop(1)

0x5c5: PushEmpty()
0x5c6: Call2 0x64d

0x5c7: Pop(0)
0x5c8: PushEmpty(object, string)
0x5c9: Stack[-2] = Stack[-6]
0x5ca: Stack[-1] = Stack[-5]
0x5cb: Call2 0x8c8

0x5cc: Pop(2)
0x5cd: GOTO 0x5e2

0x5ce: PushEmpty(int, string, object)
0x5cf: Stack[-2] = Stack[-6]
0x5d0: Stack[-1] = Stack[-7]
0x5d1: Call2 0x964

0x5d2: Stack[-4] = Stack[-3]
0x5d3: Pop(3)
0x5d4: Push((int) 0)
0x5d5: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x5d6: IF (Stack[-1] == 0) GOTO 0x5e2; Pop(1)

0x5d7: Push((int) 1)
0x5d8: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x5d9: IF (Stack[-1] == 0) GOTO 0x5dd; Pop(1)

0x5da: PushEmpty()
0x5db: Call2 0x64d

0x5dc: Pop(0)
0x5dd: PushEmpty(string, object)
0x5de: Stack[-2] = Stack[-5]
0x5df: Stack[-1] = Stack[-6]
0x5e0: Call2 0x967

0x5e1: Pop(2)
0x5e2: Return(); Pop(2)

0x5e3: PushEmpty()
0x5e4: PushEmpty(bool, string)
0x5e5: Stack[-1] = Stack[-3]
0x5e6: Call2 0x90b

0x5e7: Pop(1)
0x5e8: IF (Stack[-1] == 0) GOTO 0x5f0; Pop(1)

0x5e9: PushEmpty()
0x5ea: Call2 0x64d

0x5eb: Pop(0)
0x5ec: PushEmpty(string)
0x5ed: Stack[-1] = Stack[-2]
0x5ee: Call2 0x91b

0x5ef: Pop(1)
0x5f0: Return(); Pop(0)

0x5f1: PushEmpty()
0x5f2: PushEmpty(bool, object)
0x5f3: Stack[-1] = Stack[-3]
0x5f4: Call2 0x8e1

0x5f5: Pop(1)
0x5f6: IF (Stack[-1] == 0) GOTO 0x5fe; Pop(1)

0x5f7: PushEmpty()
0x5f8: Call2 0x64d

0x5f9: Pop(0)
0x5fa: PushEmpty(object)
0x5fb: Stack[-1] = Stack[-2]
0x5fc: Call2 0x8f8

0x5fd: Pop(1)
0x5fe: Return(); Pop(0)

0x5ff: PushEmpty()
0x600: Call2 0x64d

0x601: Pop(0)
0x602: PushEmpty()
0x603: Call2 0x972

0x604: Pop(0)
0x605: Return(); Pop(0)

0x606: PushEmpty(float, cvector, cvector, bool, object, bool, float, cvector, cvector, bool, object, bool)
0x607: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x608: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x609: Push((float)0.5)
0x60a: @ rand(Stack[-7], Stack[-1])
0x60b: Pop(1)
0x60c: @ Sleep(Stack[-6])
0x60d: Pop(0)
0x60e: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x60f: IF (Stack[-1] == 0) GOTO 0x640; Pop(1)

0x610: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == 0)
0x611: IF (Stack[-1] == 0) GOTO 0x621; Pop(1)

0x612: @ GetPosition(Stack[-4])
0x613: Pop(0)
0x614: PushEmpty(float)
0x615: Call2 0x641

0x616: Pop(0)
0x617: @ GetRandomPFPointInCircle(Stack[-6], Stack[-5], Stack[-1], Stack[-4])
0x618: Pop(1)
0x619: Push(Stack[-3])
0x61a: IF (Stack[-1] == 0) GOTO 0x61c; Pop(1)

0x61b: GOTO 0x620

0x61c: Push((int) 1)
0x61d: @ Sleep(Stack[-1])
0x61e: Pop(1)
0x61f: GOTO 0x612

0x620: GOTO 0x622

0x621: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x622: PushEmpty(object, cvector)
0x623: Stack[-1] = Stack[-7]
0x624: Call2 0x543

0x625: Stack[-4] = Stack[-2]
0x626: Pop(2)
0x627: Pop(0); Push(( Stack[-2] != 0 )
0x628: IF (Stack[-1] == 0) GOTO 0x63b; Pop(1)

0x629: @ RotatePath(Stack[-2], Stack[-1])
0x62a: Pop(0)
0x62b: Push(Stack[-1])
0x62c: IF (Stack[-1] == 0) GOTO 0x63a; Pop(1)

0x62d: PushEmpty(bool)
0x62e: Call2 0x541

0x62f: Pop(0)
0x630: @ FollowPath(Stack[-3], Stack[-1], Stack[-2])
0x631: Pop(1)
0x632: Stack[-2] = 0
0x633: Push(Stack[-1])
0x634: IF (Stack[-1] == 0) GOTO 0x63a; Pop(1)

0x635: PushEmpty()
0x636: Push(-0, 0); TaskCall(1)
0x637: Call2 0x140

0x638: Pop(-0, 0); TaskReturn
0x639: Pop(0)
0x63a: GOTO 0x63e

0x63b: Push((int) 1)
0x63c: @ Sleep(Stack[-1])
0x63d: Pop(1)
0x63e: Stack[-2] = 0
0x63f: GOTO 0x60e

0x640: Return(); Pop(12)

0x641: PushEmpty(float, float)
0x642: @ GetCameraFarDistance(Stack[-1])
0x643: Pop(0)
0x644: Stack[-3] = Stack[-1]
0x645: Return(); Pop(2)

0x646: PushEmpty()
0x647: @ RequestClearPath(Stack[-1])
0x648: Pop(0)
0x649: Return(); Pop(0)

0x64a: @ Stop()
0x64b: Pop(0)
0x64c: Return(); Pop(0)

0x64d: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x64e: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x64f: @ Stop()
0x650: Pop(0)
0x651: @ StopGroup0()
0x652: Pop(0)
0x653: Return(); Pop(0)

0x654: PushEmpty()
0x655: PushEmpty()
0x656: Call2 0x64d

0x657: Pop(0)
0x658: PushEmpty(object)
0x659: Stack[-1] = Stack[-2]
0x65a: Call2 0x890

0x65b: Pop(1)
0x65c: Return(); Pop(0)

0x65d: PushEmpty()
0x65e: Push((int) 2)
0x65f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x660: IF (Stack[-1] == 0) GOTO 0x664; Pop(1)

0x661: Stack[-2] = "fire"
0x662: Return(); Pop(0)

0x663: GOTO 0x669

0x664: Push((int) 1)
0x665: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x666: IF (Stack[-1] == 0) GOTO 0x669; Pop(1)

0x667: Stack[-2] = "bullet"
0x668: Return(); Pop(0)

0x669: Stack[-2] = "phys"
0x66a: Return(); Pop(0)

0x66b: PushEmpty(cvector, cvector, cvector, cvector)
0x66c: @ GetPosition(Stack[-2])
0x66d: Pop(0)
0x66e: @@ GetPosition(Stack[-1])
0x66f: Pop(0)
0x670: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x671: Return(); Pop(4)

0x672: PushEmpty(bool, bool)
0x673: @ IsPlayerActor(Stack[-3], Stack[-1])
0x674: Pop(0)
0x675: Stack[-4] = Stack[-1]
0x676: Return(); Pop(2)

0x677: PushEmpty(bool, bool)
0x678: Push("HasProperty")
0x679: Push((int) 2)
0x67a: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x67b: Pop(1); Push((bool) Stack[-1] == 0)
0x67c: IF (Stack[-1] == 0) GOTO 0x67f; Pop(1)

0x67d: Stack[-5] = (bool) 0
0x67e: Return(); Pop(2)

0x67f: @@ HasProperty(Stack[-3], Stack[-1])
0x680: Pop(0)
0x681: Stack[-5] = Stack[-1]
0x682: Return(); Pop(2)

0x683: PushEmpty(int, string, int, float, float, float, int, string, int, float, float, float)
0x684: PushEmpty(bool, object, string)
0x685: Stack[-2] = Stack[-18]
0x686: Stack[-1] = "health"
0x687: Call2 0x677

0x688: Pop(2)
0x689: Pop(1); Push((bool) Stack[-1] == 0)
0x68a: IF (Stack[-1] == 0) GOTO 0x68d; Pop(1)

0x68b: Stack[-16] = (float) 0.0
0x68c: Return(); Pop(12)

0x68d: PushEmpty(bool, object, string)
0x68e: Stack[-2] = Stack[-18]
0x68f: Stack[-1] = "armor"
0x690: Call2 0x677

0x691: Pop(2)
0x692: Pop(1); Push((bool) Stack[-1] == 0)
0x693: IF (Stack[-1] == 0) GOTO 0x696; Pop(1)

0x694: Stack[-6] = (int) 0
0x695: GOTO 0x699

0x696: Push("armor")
0x697: @@ GetProperty(Stack[-1], Stack[-7])
0x698: Pop(1)
0x699: Push("armor_")
0x69a: PushEmpty(string, int)
0x69b: Stack[-1] = Stack[-16]
0x69c: Call2 0x65d

0x69d: Pop(1)
0x69e: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x69f: PushEmpty(bool, object, string)
0x6a0: Stack[-2] = Stack[-18]
0x6a1: Stack[-1] = Stack[-8]
0x6a2: Call2 0x677

0x6a3: Pop(2)
0x6a4: Pop(1); Push((bool) Stack[-1] == 0)
0x6a5: IF (Stack[-1] == 0) GOTO 0x6a8; Pop(1)

0x6a6: Stack[-4] = (int) 0
0x6a7: GOTO 0x6aa

0x6a8: @@ GetProperty(Stack[-5], Stack[-4])
0x6a9: Pop(0)
0x6aa: PushEmpty(float, float, float)
0x6ab: Pop(0); Push(Stack[-9] + Stack[-7]);
0x6ac: Push((float)100.0)
0x6ad: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0x6ae: Stack[-1] = (int) 1
0x6af: Call2 0x7f9

0x6b0: Stack[-6] = Stack[-3]
0x6b1: Pop(3)
0x6b2: Push("health")
0x6b3: @@ GetProperty(Stack[-1], Stack[-3])
0x6b4: Pop(1)
0x6b5: Push((int) 1)
0x6b6: Pop(1); Push(Stack[-1] - Stack[-4]);
0x6b7: Stack[-2] = Stack[-15] * Stack[-1]; Pop(1);
0x6b8: Push("health")
0x6b9: PushEmpty(float, float, float, float)
0x6ba: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0x6bb: Stack[-2] = (int) 0
0x6bc: Stack[-1] = (int) 1
0x6bd: Call2 0x800

0x6be: Pop(3)
0x6bf: @@ SetProperty(Stack[-2], Stack[-1])
0x6c0: Pop(2)
0x6c1: PushEmpty(bool, object)
0x6c2: Stack[-1] = Stack[-17]
0x6c3: Call2 0x672

0x6c4: Pop(1)
0x6c5: IF (Stack[-1] == 0) GOTO 0x6ca; Pop(1)

0x6c6: PushEmpty(float)
0x6c7: Stack[-1] = -Stack[-2]; Pop(0);
0x6c8: Call2 0x810

0x6c9: Pop(1)
0x6ca: Stack[-16] = Stack[-1]
0x6cb: Return(); Pop(12)

0x6cc: PushEmpty(bool, bool)
0x6cd: @@ IsDead(Stack[-1])
0x6ce: Pop(0)
0x6cf: Stack[-4] = Stack[-1]
0x6d0: Return(); Pop(2)

0x6d1: PushEmpty(object, object, object, object)
0x6d2: Pop(0); Push((bool) Stack[-5] == 0)
0x6d3: IF (Stack[-1] == 0) GOTO 0x6d6; Pop(1)

0x6d4: Stack[-6] = (bool) 0
0x6d5: Return(); Pop(4)

0x6d6: PushEmpty(bool)
0x6d7: Stack[-1] = (bool) 0
0x6d8: Push("IsDead")
0x6d9: Push((int) 1)
0x6da: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x6db: IF (Stack[-1] == 0) GOTO 0x6e2; Pop(1)

0x6dc: PushEmpty(bool, object)
0x6dd: Stack[-1] = Stack[-8]
0x6de: Call2 0x6cc

0x6df: Pop(1)
0x6e0: IF (Stack[-1] == 0) GOTO 0x6e2; Pop(1)

0x6e1: Stack[-1] = (bool) 1
0x6e2: IF (Stack[-1] == 0) GOTO 0x6e5; Pop(1)

0x6e3: Stack[-6] = (bool) 0
0x6e4: Return(); Pop(4)

0x6e5: @ GetScene(Stack[-2])
0x6e6: Pop(0)
0x6e7: Pop(0); Push((bool) Stack[-2] == 0)
0x6e8: IF (Stack[-1] == 0) GOTO 0x6eb; Pop(1)

0x6e9: Stack[-6] = (bool) 0
0x6ea: Return(); Pop(4)

0x6eb: @@ GetScene(Stack[-1])
0x6ec: Pop(0)
0x6ed: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x6ee: IF (Stack[-1] == 0) GOTO 0x6f1; Pop(1)

0x6ef: Stack[-6] = (bool) 0
0x6f0: Return(); Pop(4)

0x6f1: Stack[-6] = (bool) 1
0x6f2: Return(); Pop(4)

0x6f3: Stack[-1] = 0
0x6f4: Stack[-2] = 0
0x6f5: PushEmpty(int, int)
0x6f6: PushEmpty(bool, object)
0x6f7: Stack[-1] = Stack[-5]
0x6f8: Call2 0x6d1

0x6f9: Pop(1)
0x6fa: Pop(1); Push((bool) Stack[-1] == 0)
0x6fb: IF (Stack[-1] == 0) GOTO 0x6fe; Pop(1)

0x6fc: Stack[-4] = (bool) 0
0x6fd: Return(); Pop(2)

0x6fe: PushEmpty(bool, object, string)
0x6ff: Stack[-2] = Stack[-6]
0x700: Stack[-1] = "noaccess"
0x701: Call2 0x677

0x702: Pop(2)
0x703: Pop(1); Push((bool) Stack[-1] == 0)
0x704: IF (Stack[-1] == 0) GOTO 0x707; Pop(1)

0x705: Stack[-4] = (bool) 1
0x706: Return(); Pop(2)

0x707: Push("noaccess")
0x708: @@ GetProperty(Stack[-1], Stack[-2])
0x709: Pop(1)
0x70a: Push((int) 0)
0x70b: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x70c: Return(); Pop(2)

0x70d: PushEmpty(bool, int, cvector, cvector, cvector, cvector, string, bool, int, cvector, cvector, cvector, cvector, string)
0x70e: Pop(0); Push((bool) Stack[-15] == 0)
0x70f: IF (Stack[-1] == 0) GOTO 0x711; Pop(1)

0x710: Return(); Pop(14)

0x711: @ IsDead(Stack[-7])
0x712: Pop(0)
0x713: Push(Stack[-7])
0x714: IF (Stack[-1] == 0) GOTO 0x716; Pop(1)

0x715: Return(); Pop(14)

0x716: @ GetSecondaryAnimationType(Stack[-6])
0x717: Pop(0)
0x718: Push((int) 0)
0x719: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x71a: IF (Stack[-1] == 0) GOTO 0x71c; Pop(1)

0x71b: Return(); Pop(14)

0x71c: @@ GetPosition(Stack[-5])
0x71d: Pop(0)
0x71e: @ GetPosition(Stack[-4])
0x71f: Pop(0)
0x720: @ GetDirection(Stack[-3])
0x721: Pop(0)
0x722: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0x723: Push(CvectorIndex(Stack[-2], 0))
0x724: Push(CvectorIndex(Stack[-4], 0))
0x725: Pop(2); Push(Stack[-2] * Stack[-1]);
0x726: Push(CvectorIndex(Stack[-3], 2))
0x727: Push(CvectorIndex(Stack[-5], 2))
0x728: Pop(2); Push(Stack[-2] * Stack[-1]);
0x729: Pop(2); Push(Stack[-2] + Stack[-1]);
0x72a: Push((int) 0)
0x72b: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x72c: IF (Stack[-1] == 0) GOTO 0x72f; Pop(1)

0x72d: Stack[-1] = "fhit"
0x72e: GOTO 0x730

0x72f: Stack[-1] = "bhit"
0x730: Push("hit_react")
0x731: Push("1")
0x732: Pop(1); Push(Stack[-3] + Stack[-1]);
0x733: Push("2")
0x734: Pop(1); Push(Stack[-4] + Stack[-1]);
0x735: Push((int) -10)
0x736: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x737: Pop(4)
0x738: Return(); Pop(14)

0x739: PushEmpty(cvector, object, int, bool, cvector, cvector, int, int, cvector, cvector, object, int, bool, cvector, cvector, int, int, cvector)
0x73a: PushEmpty(bool)
0x73b: Stack[-1] = (bool) 0
0x73c: PushEmpty(bool)
0x73d: Stack[-1] = (bool) 0
0x73e: Push(Stack[-23])
0x73f: IF (Stack[-1] == 0) GOTO 0x744; Pop(1)

0x740: Push((int) 4)
0x741: Pop(1); Push((bool) Stack[-23] != Stack[-1])
0x742: IF (Stack[-1] == 0) GOTO 0x744; Pop(1)

0x743: Stack[-1] = (bool) 1
0x744: IF (Stack[-1] == 0) GOTO 0x749; Pop(1)

0x745: Push((int) 5)
0x746: Pop(1); Push((bool) Stack[-22] != Stack[-1])
0x747: IF (Stack[-1] == 0) GOTO 0x749; Pop(1)

0x748: Stack[-1] = (bool) 1
0x749: IF (Stack[-1] == 0) GOTO 0x778; Pop(1)

0x74a: PushEmpty(cvector, cvector)
0x74b: PushEmpty(cvector, object)
0x74c: Stack[-1] = Stack[-25]
0x74d: Call2 0x66b

0x74e: Stack[-3] = Stack[-2]
0x74f: Pop(2)
0x750: Call2 0x7ef

0x751: Stack[-11] = Stack[-2]
0x752: Pop(2)
0x753: @ CreateVectorVector(Stack[-8])
0x754: Pop(0)
0x755: Stack[-7] = (int) 1
0x756: Push("hit")
0x757: Pop(1); Push(Stack[-1] + Stack[-8]);
0x758: @ GetGeometryLocator(Stack[-1], Stack[-7], Stack[-6], Stack[-5])
0x759: Pop(1)
0x75a: Pop(0); Push((bool) Stack[-6] == 0)
0x75b: IF (Stack[-1] == 0) GOTO 0x75d; Pop(1)

0x75c: GOTO 0x766

0x75d: Pop(0); Push(Stack[-4] | Stack[-9]);
0x75e: Push((float)0.70711)
0x75f: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x760: IF (Stack[-1] == 0) GOTO 0x763; Pop(1)

0x761: @@ add(Stack[-5])
0x762: Pop(0)
0x763: Push((int) 1)
0x764: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x765: GOTO 0x756

0x766: @@ size(Stack[-3])
0x767: Pop(0)
0x768: Push(Stack[-3])
0x769: IF (Stack[-1] == 0) GOTO 0x777; Pop(1)

0x76a: @ irand(Stack[-2], Stack[-3])
0x76b: Pop(0)
0x76c: @@ get(Stack[-1], Stack[-2])
0x76d: Pop(0)
0x76e: PushEmpty(object, int, float, cvector, cvector)
0x76f: Stack[-5] = Stack[-26]
0x770: Stack[-4] = Stack[-25]
0x771: Stack[-3] = Stack[-24]
0x772: Stack[-2] = Stack[-6]
0x773: Stack[-1] = -Stack[-14]; Pop(0);
0x774: Call2 0x77d

0x775: Pop(5)
0x776: Return(); Pop(18)

0x777: Stack[-8] = 0
0x778: PushEmpty(object)
0x779: Stack[-1] = Stack[-22]
0x77a: Call2 0x70d

0x77b: Pop(1)
0x77c: Return(); Pop(18)

0x77d: PushEmpty(object, object, object, object)
0x77e: @ GetScene(Stack[-2])
0x77f: Pop(0)
0x780: Push("scripted")
0x781: Push("blood_dir.xml")
0x782: @ AddActorByType(Stack[-3], Stack[-2], Stack[-4], Stack[-8], Stack[-7], Stack[-1])
0x783: Pop(2)
0x784: PushEmpty(object)
0x785: Stack[-1] = Stack[-10]
0x786: Call2 0x70d

0x787: Pop(1)
0x788: Return(); Pop(4)

0x789: Stack[-1] = 0
0x78a: Stack[-2] = 0
0x78b: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x78c: @@ GetPosition(Stack[-3])
0x78d: Pop(0)
0x78e: @ GetPosition(Stack[-2])
0x78f: Pop(0)
0x790: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0x791: Push(CvectorIndex(Stack[-1], 0))
0x792: Push(CvectorIndex(Stack[-2], 2))
0x793: @ RotateAsync(Stack[-2], Stack[-1])
0x794: Pop(2)
0x795: Return(); Pop(6)

0x796: PushEmpty(bool, bool)
0x797: @ IsLoaded(Stack[-1])
0x798: Pop(0)
0x799: Stack[-3] = Stack[-1]
0x79a: Return(); Pop(2)

0x79b: PushEmpty(float, cvector, float, cvector)
0x79c: @@ GetEyesHeight(Stack[-2])
0x79d: Pop(0)
0x79e: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x79f: Push(CvectorIndex(Stack[-1], 1))
0x7a0: Stack[-1] = Stack[-3]
0x7a1: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x7a2: Push("head")
0x7a3: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x7a4: Pop(1)
0x7a5: Return(); Pop(4)

0x7a6: PushEmpty(bool, bool)
0x7a7: PushEmpty(bool, int, int)
0x7a8: Stack[-2] = Stack[-7]
0x7a9: Stack[-1] = Stack[-6]
0x7aa: Call2 0x80b

0x7ab: Pop(2)
0x7ac: IF (Stack[-1] == 0) GOTO 0x7b0; Pop(1)

0x7ad: Push((int) 0)
0x7ae: @ AddItem(Stack[-2], Stack[-6], Stack[-1])
0x7af: Pop(1)
0x7b0: Return(); Pop(2)

0x7b1: PushEmpty(int, bool, int, bool)
0x7b2: PushEmpty(bool, int, int)
0x7b3: Stack[-2] = Stack[-10]
0x7b4: Stack[-1] = Stack[-9]
0x7b5: Call2 0x80b

0x7b6: Pop(2)
0x7b7: IF (Stack[-1] == 0) GOTO 0x7bf; Pop(1)

0x7b8: @ irand(Stack[-2], Stack[-5])
0x7b9: Pop(0)
0x7ba: Push((int) 0)
0x7bb: Push((int) 1)
0x7bc: Pop(1); Push(Stack[-4] + Stack[-1]);
0x7bd: @ AddItem(Stack[-3], Stack[-10], Stack[-2], Stack[-1])
0x7be: Pop(2)
0x7bf: Return(); Pop(4)

0x7c0: PushEmpty(bool, int, bool, int, bool, float, cvector, cvector, bool, int, bool, int, bool, float, cvector, cvector)
0x7c1: @ IsExisting3DSound(Stack[-8], Stack[-17])
0x7c2: Pop(0)
0x7c3: Pop(0); Push((bool) Stack[-8] == 0)
0x7c4: IF (Stack[-1] == 0) GOTO 0x7d9; Pop(1)

0x7c5: Stack[-7] = (int) 0
0x7c6: Push((int) 1)
0x7c7: Pop(1); Push(Stack[-8] + Stack[-1]);
0x7c8: Pop(1); Push(Stack[-18] + Stack[-1]);
0x7c9: @ IsExisting3DSound(Stack[-7], Stack[-1])
0x7ca: Pop(1)
0x7cb: Pop(0); Push((bool) Stack[-6] == 0)
0x7cc: IF (Stack[-1] == 0) GOTO 0x7ce; Pop(1)

0x7cd: GOTO 0x7d1

0x7ce: Push((int) 1)
0x7cf: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x7d0: GOTO 0x7c6

0x7d1: Pop(0); Push((bool) Stack[-7] == 0)
0x7d2: IF (Stack[-1] == 0) GOTO 0x7d4; Pop(1)

0x7d3: Return(); Pop(16)

0x7d4: @ irand(Stack[-5], Stack[-7])
0x7d5: Pop(0)
0x7d6: Push((int) 1)
0x7d7: Pop(1); Push(Stack[-6] + Stack[-1]);
0x7d8: Stack[-18] = Stack[-18] + Stack[-1]; Pop(1);
0x7d9: @ Is3DSoundLoaded(Stack[-4], Stack[-17])
0x7da: Pop(0)
0x7db: Push(Stack[-4])
0x7dc: IF (Stack[-1] == 0) GOTO 0x7e8; Pop(1)

0x7dd: @ GetEyesHeight(Stack[-3])
0x7de: Pop(0)
0x7df: @ GetDirection(Stack[-2])
0x7e0: Pop(0)
0x7e1: Push((int) 50)
0x7e2: Stack[-2] = Stack[-3] * Stack[-1]; Pop(1);
0x7e3: Push(CvectorIndex(Stack[-1], 1))
0x7e4: Stack[-1] = Stack[-1] + Stack[-4]; Pop(0);
0x7e5: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x7e6: @ PlayGlobalSound(Stack[-17], Stack[-1])
0x7e7: Pop(0)
0x7e8: Return(); Pop(16)

0x7e9: PushEmpty(object, object)
0x7ea: @ self(Stack[-1])
0x7eb: Pop(0)
0x7ec: Stack[-3] = Stack[-1]
0x7ed: Return(); Pop(2)

0x7ee: Stack[-1] = 0
0x7ef: PushEmpty(float, float)
0x7f0: Pop(0); Push(Stack[-3] | Stack[-3]);
0x7f1: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x7f2: Push((float)0.0)
0x7f3: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x7f4: IF (Stack[-1] == 0) GOTO 0x7f7; Pop(1)

0x7f5: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x7f6: Return(); Pop(2)

0x7f7: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x7f8: Return(); Pop(2)

0x7f9: PushEmpty()
0x7fa: Pop(0); Push((bool) Stack[-2] < Stack[-1])
0x7fb: IF (Stack[-1] == 0) GOTO 0x7fe; Pop(1)

0x7fc: Stack[-3] = Stack[-2]
0x7fd: GOTO 0x7ff

0x7fe: Stack[-3] = Stack[-1]
0x7ff: Return(); Pop(0)

0x800: PushEmpty()
0x801: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x802: IF (Stack[-1] == 0) GOTO 0x805; Pop(1)

0x803: Stack[-4] = Stack[-2]
0x804: Return(); Pop(0)

0x805: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x806: IF (Stack[-1] == 0) GOTO 0x809; Pop(1)

0x807: Stack[-4] = Stack[-1]
0x808: Return(); Pop(0)

0x809: Stack[-4] = Stack[-3]
0x80a: Return(); Pop(0)

0x80b: PushEmpty(int, int)
0x80c: @ irand(Stack[-1], Stack[-3])
0x80d: Pop(0)
0x80e: Stack[-5] = Stack[-1] < Stack[-4]; Pop(0);
0x80f: Return(); Pop(2)

0x810: PushEmpty(object, object)
0x811: @ CreateFloatVector(Stack[-1])
0x812: Pop(0)
0x813: @@ add(Stack[-3])
0x814: Pop(0)
0x815: Push((int) 15)
0x816: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x817: Pop(1)
0x818: Return(); Pop(2)

0x819: Stack[-1] = 0
0x81a: PushEmpty(bool, bool)
0x81b: @ IsPlayerActor(Stack[-3], Stack[-1])
0x81c: Pop(0)
0x81d: Push(Stack[-1])
0x81e: IF (Stack[-1] == 0) GOTO 0x822; Pop(1)

0x81f: Push("attack")
0x820: @ PlayGlobalMusic(Stack[-1])
0x821: Pop(1)
0x822: Return(); Pop(2)

0x823: PushEmpty(object, object)
0x824: @ GetScene(Stack[-1])
0x825: Pop(0)
0x826: Push("battle")
0x827: PushEmpty(object)
0x828: Call2 0x7e9

0x829: Pop(0)
0x82a: @ BroadcastMessage(Stack[-2], Stack[-1], Stack[-3])
0x82b: Pop(2)
0x82c: Return(); Pop(2)

0x82d: Stack[-1] = 0
0x82e: PushEmpty(int, int)
0x82f: Push("branch")
0x830: @ GetVariable(Stack[-1], Stack[-2])
0x831: Pop(1)
0x832: Stack[-3] = Stack[-1]
0x833: Return(); Pop(2)

0x834: PushEmpty()
0x835: PushEmpty(int)
0x836: Call2 0x82e

0x837: Pop(0)
0x838: Push((int) 1)
0x839: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x83a: IF (Stack[-1] == 0) GOTO 0x83e; Pop(1)

0x83b: @ WorkWithCorpse(Stack[-1])
0x83c: Pop(0)
0x83d: GOTO 0x840

0x83e: @ Barter(Stack[-1])
0x83f: Pop(0)
0x840: Return(); Pop(0)

0x841: PushEmpty(object, int, bool, object, int, bool)
0x842: @ CreateInvItem(Stack[-3])
0x843: Pop(0)
0x844: @@ SetItemName(Stack[-7])
0x845: Pop(0)
0x846: Push("Organ")
0x847: Push((int) 1)
0x848: @@ SetProperty(Stack[-2], Stack[-1])
0x849: Pop(2)
0x84a: @@ GetItemID(Stack[-2])
0x84b: Pop(0)
0x84c: Push((int) 0)
0x84d: Push((int) 1)
0x84e: @ AddItem(Stack[-3], Stack[-5], Stack[-2], Stack[-1])
0x84f: Pop(2)
0x850: Return(); Pop(6)

0x851: Stack[-3] = 0
0x852: PushEmpty(int)
0x853: Call2 0x82e

0x854: Pop(0)
0x855: Push((int) 1)
0x856: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x857: IF (Stack[-1] == 0) GOTO 0x859; Pop(1)

0x858: Return(); Pop(0)

0x859: PushEmpty(string)
0x85a: Stack[-1] = "liver"
0x85b: Call2 0x841

0x85c: Pop(1)
0x85d: PushEmpty(string)
0x85e: Stack[-1] = "kidney"
0x85f: Call2 0x841

0x860: Pop(1)
0x861: PushEmpty(string)
0x862: Stack[-1] = "heart"
0x863: Call2 0x841

0x864: Pop(1)
0x865: PushEmpty(string)
0x866: Stack[-1] = "blood"
0x867: Call2 0x841

0x868: Pop(1)
0x869: Return(); Pop(0)

0x86a: Push((int) 0)
0x86b: @ ClearSubContainer(Stack[-1])
0x86c: Pop(1)
0x86d: PushEmpty(string, int, int, int)
0x86e: Stack[-4] = "rusk"
0x86f: Stack[-3] = (int) 1
0x870: Stack[-2] = (int) 1
0x871: Stack[-1] = (int) 2
0x872: Call2 0x7b1

0x873: Pop(4)
0x874: PushEmpty(string, int, int)
0x875: Stack[-3] = "peanut"
0x876: Stack[-2] = (int) 1
0x877: Stack[-1] = (int) 4
0x878: Call2 0x7a6

0x879: Pop(3)
0x87a: Return(); Pop(0)

0x87b: PushEmpty()
0x87c: PushEmpty(object)
0x87d: Stack[-1] = Stack[-2]
0x87e: Push(-1, 0); TaskCall(0)
0x87f: Call2 0x0

0x880: Pop(-1, 0); TaskReturn
0x881: Pop(1)
0x882: Return(); Pop(0)

0x883: PushEmpty(float, float)
0x884: Push("health")
0x885: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x886: IF (Stack[-1] == 0) GOTO 0x88f; Pop(1)

0x887: Push("health")
0x888: @ GetProperty(Stack[-1], Stack[-2])
0x889: Pop(1)
0x88a: Push((int) 0)
0x88b: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x88c: IF (Stack[-1] == 0) GOTO 0x88f; Pop(1)

0x88d: @ SignalDeath(Stack[-4])
0x88e: Pop(0)
0x88f: Return(); Pop(2)

0x890: PushEmpty()
0x891: PushEmpty(object)
0x892: Stack[-1] = Stack[-2]
0x893: Call2 0x87b

0x894: Pop(1)
0x895: Return(); Pop(0)

0x896: PushEmpty()
0x897: PushEmpty(object, int, float)
0x898: Stack[-3] = Stack[-7]
0x899: Stack[-2] = Stack[-6]
0x89a: Stack[-1] = Stack[-5]
0x89b: Call2 0x739

0x89c: Pop(3)
0x89d: Return(); Pop(0)

0x89e: PushEmpty()
0x89f: PushEmpty(object, int, float, cvector, cvector)
0x8a0: Stack[-5] = Stack[-11]
0x8a1: Stack[-4] = Stack[-10]
0x8a2: Stack[-3] = Stack[-9]
0x8a3: Stack[-2] = Stack[-7]
0x8a4: Stack[-1] = Stack[-6]
0x8a5: Call2 0x77d

0x8a6: Pop(5)
0x8a7: Return(); Pop(0)

0x8a8: PushEmpty()
0x8a9: Push("unholster")
0x8aa: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x8ab: IF (Stack[-1] == 0) GOTO 0x8b3; Pop(1)

0x8ac: PushEmpty(bool, object)
0x8ad: Stack[-1] = Stack[-4]
0x8ae: Call2 0x973

0x8af: Stack[-5] = Stack[-2]
0x8b0: Pop(2)
0x8b1: Return(); Pop(0)

0x8b2: GOTO 0x8c6

0x8b3: Push("player_shot")
0x8b4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x8b5: IF (Stack[-1] == 0) GOTO 0x8bd; Pop(1)

0x8b6: PushEmpty(bool, object)
0x8b7: Stack[-1] = Stack[-4]
0x8b8: Call2 0x978

0x8b9: Stack[-5] = Stack[-2]
0x8ba: Pop(2)
0x8bb: Return(); Pop(0)

0x8bc: GOTO 0x8c6

0x8bd: Push("battle")
0x8be: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x8bf: IF (Stack[-1] == 0) GOTO 0x8c6; Pop(1)

0x8c0: PushEmpty(bool, object)
0x8c1: Stack[-1] = Stack[-4]
0x8c2: Call2 0x97d

0x8c3: Stack[-5] = Stack[-2]
0x8c4: Pop(2)
0x8c5: Return(); Pop(0)

0x8c6: Stack[-3] = (bool) 0
0x8c7: Return(); Pop(0)

0x8c8: PushEmpty()
0x8c9: Push("unholster")
0x8ca: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x8cb: IF (Stack[-1] == 0) GOTO 0x8d1; Pop(1)

0x8cc: PushEmpty(object)
0x8cd: Stack[-1] = Stack[-3]
0x8ce: Call2 0x976

0x8cf: Pop(1)
0x8d0: GOTO 0x8e0

0x8d1: Push("player_shot")
0x8d2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x8d3: IF (Stack[-1] == 0) GOTO 0x8d9; Pop(1)

0x8d4: PushEmpty(object)
0x8d5: Stack[-1] = Stack[-3]
0x8d6: Call2 0x97b

0x8d7: Pop(1)
0x8d8: GOTO 0x8e0

0x8d9: Push("battle")
0x8da: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x8db: IF (Stack[-1] == 0) GOTO 0x8e0; Pop(1)

0x8dc: PushEmpty(object)
0x8dd: Stack[-1] = Stack[-3]
0x8de: Call2 0x980

0x8df: Pop(1)
0x8e0: Return(); Pop(0)

0x8e1: PushEmpty(bool, bool)
0x8e2: PushEmpty(bool)
0x8e3: Stack[-1] = (bool) 0
0x8e4: PushEmpty(bool, object)
0x8e5: Stack[-1] = Stack[-6]
0x8e6: Call2 0x973

0x8e7: Pop(1)
0x8e8: IF (Stack[-1] == 0) GOTO 0x8ef; Pop(1)

0x8e9: PushEmpty(bool, object)
0x8ea: Stack[-1] = Stack[-6]
0x8eb: Call2 0x672

0x8ec: Pop(1)
0x8ed: IF (Stack[-1] == 0) GOTO 0x8ef; Pop(1)

0x8ee: Stack[-1] = (bool) 1
0x8ef: IF (Stack[-1] == 0) GOTO 0x8f6; Pop(1)

0x8f0: @@ IsWeaponHolstered(Stack[-1])
0x8f1: Pop(0)
0x8f2: Pop(0); Push((bool) Stack[-1] == 0)
0x8f3: IF (Stack[-1] == 0) GOTO 0x8f6; Pop(1)

0x8f4: Stack[-4] = (bool) 1
0x8f5: Return(); Pop(2)

0x8f6: Stack[-4] = (bool) 0
0x8f7: Return(); Pop(2)

0x8f8: PushEmpty()
0x8f9: PushEmpty(object)
0x8fa: Stack[-1] = Stack[-2]
0x8fb: Call2 0x976

0x8fc: Pop(1)
0x8fd: Return(); Pop(0)

0x8fe: PushEmpty()
0x8ff: PushEmpty(bool, object)
0x900: Stack[-1] = Stack[-3]
0x901: Call2 0x672

0x902: Pop(1)
0x903: IF (Stack[-1] == 0) GOTO 0x90a; Pop(1)

0x904: PushEmpty(object)
0x905: Call2 0x7e9

0x906: Pop(0)
0x907: Push((float)-0.03)
0x908: @ ReportReputationChange(Stack[-3], Stack[-2], Stack[-1])
0x909: Pop(2)
0x90a: Return(); Pop(0)

0x90b: PushEmpty(object, object)
0x90c: Push("heal")
0x90d: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x90e: IF (Stack[-1] == 0) GOTO 0x919; Pop(1)

0x90f: Push("player")
0x910: @ FindActor(Stack[-2], Stack[-1])
0x911: Pop(1)
0x912: PushEmpty(bool, object)
0x913: Stack[-1] = Stack[-3]
0x914: Call2 0x982

0x915: Stack[-6] = Stack[-2]
0x916: Pop(2)
0x917: Return(); Pop(2)

0x918: Stack[-1] = 0
0x919: Stack[-4] = (bool) 0
0x91a: Return(); Pop(2)

0x91b: PushEmpty(object, object)
0x91c: Push("heal")
0x91d: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x91e: IF (Stack[-1] == 0) GOTO 0x927; Pop(1)

0x91f: Push("player")
0x920: @ FindActor(Stack[-2], Stack[-1])
0x921: Pop(1)
0x922: PushEmpty(object)
0x923: Stack[-1] = Stack[-2]
0x924: Call2 0x985

0x925: Pop(1)
0x926: Stack[-1] = 0
0x927: Return(); Pop(2)

0x928: PushEmpty(string, string)
0x929: Stack[-1] = "idle"
0x92a: Push(Stack[-3])
0x92b: IF (Stack[-1] == 0) GOTO 0x92d; Pop(1)

0x92c: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x92d: Stack[-4] = Stack[-1]
0x92e: Return(); Pop(2)

0x92f: PushEmpty(int, bool, int, bool)
0x930: Stack[-2] = (int) 0
0x931: Push("all")
0x932: PushEmpty(string, int)
0x933: Stack[-1] = Stack[-5]
0x934: Call2 0x928

0x935: Pop(1)
0x936: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x937: Pop(2)
0x938: Pop(0); Push((bool) Stack[-1] == 0)
0x939: IF (Stack[-1] == 0) GOTO 0x93b; Pop(1)

0x93a: GOTO 0x93e

0x93b: Push((int) 1)
0x93c: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x93d: GOTO 0x931

0x93e: Stack[-5] = Stack[-2]
0x93f: Return(); Pop(4)

0x940: PushEmpty()
0x941: PushEmpty(bool, object)
0x942: Stack[-1] = Stack[-3]
0x943: Call2 0x6f5

0x944: Pop(1)
0x945: IF (Stack[-1] == 0) GOTO 0x948; Pop(1)

0x946: Stack[-2] = (int) 2
0x947: GOTO 0x949

0x948: Stack[-2] = (int) 0
0x949: Return(); Pop(0)

0x94a: PushEmpty()
0x94b: PushEmpty(object)
0x94c: Stack[-1] = Stack[-2]
0x94d: Push(-1, 6); TaskCall(2)
0x94e: Call2 0x196

0x94f: Pop(-1, 6); TaskReturn
0x950: Pop(1)
0x951: Return(); Pop(0)

0x952: PushEmpty()
0x953: PushEmpty(int, object)
0x954: Stack[-1] = Stack[-4]
0x955: Call2 0x940

0x956: Stack[-5] = Stack[-2]
0x957: Pop(2)
0x958: Return(); Pop(0)

0x959: PushEmpty()
0x95a: PushEmpty(object)
0x95b: Stack[-1] = Stack[-2]
0x95c: Call2 0x94a

0x95d: Pop(1)
0x95e: Return(); Pop(0)

0x95f: PushEmpty()
0x960: Stack[-2] = (int) 0
0x961: Return(); Pop(0)

0x962: PushEmpty()
0x963: Return(); Pop(0)

0x964: PushEmpty()
0x965: Stack[-3] = (int) 0
0x966: Return(); Pop(0)

0x967: PushEmpty()
0x968: Return(); Pop(0)

0x969: PushEmpty()
0x96a: Stack[-2] = (int) 2
0x96b: Return(); Pop(0)

0x96c: PushEmpty()
0x96d: PushEmpty(object)
0x96e: Stack[-1] = Stack[-2]
0x96f: Call2 0x987

0x970: Pop(1)
0x971: Return(); Pop(0)

0x972: Return(); Pop(0)

0x973: PushEmpty()
0x974: Stack[-2] = (bool) 0
0x975: Return(); Pop(0)

0x976: PushEmpty()
0x977: Return(); Pop(0)

0x978: PushEmpty()
0x979: Stack[-2] = (bool) 0
0x97a: Return(); Pop(0)

0x97b: PushEmpty()
0x97c: Return(); Pop(0)

0x97d: PushEmpty()
0x97e: Stack[-2] = (bool) 0
0x97f: Return(); Pop(0)

0x980: PushEmpty()
0x981: Return(); Pop(0)

0x982: PushEmpty()
0x983: Stack[-2] = (bool) 0
0x984: Return(); Pop(0)

0x985: PushEmpty()
0x986: Return(); Pop(0)

0x987: PushEmpty(bool, bool)
0x988: Push(GlobalVars[0])
0x989: IF (Stack[-1] == 0) GOTO 0x993; Pop(1)

0x98a: @ IsOverrideActive(Stack[-1])
0x98b: Pop(0)
0x98c: Pop(0); Push((bool) Stack[-1] == 0)
0x98d: IF (Stack[-1] == 0) GOTO 0x992; Pop(1)

0x98e: PushEmpty(object)
0x98f: Stack[-1] = Stack[-4]
0x990: Call2 0x834

0x991: Pop(1)
0x992: Return(); Pop(2)

0x993: Return(); Pop(2)

0x994: Push(GlobalVars[0])
0x995: Stack[-1] = (bool) 0
0x996: GlobalVars[0] = Stack[-1]; Pop(1)
0x997: Return(); Pop(0)

0x998: PushEmpty(string, string)
0x999: PushEmpty(bool, object, string)
0x99a: Stack[-2] = Stack[-7]
0x99b: Stack[-1] = "class"
0x99c: Call2 0x677

0x99d: Pop(2)
0x99e: Pop(1); Push((bool) Stack[-1] == 0)
0x99f: IF (Stack[-1] == 0) GOTO 0x9a2; Pop(1)

0x9a0: Stack[-6] = (bool) 0
0x9a1: Return(); Pop(2)

0x9a2: Push("class")
0x9a3: @@ GetProperty(Stack[-1], Stack[-2])
0x9a4: Pop(1)
0x9a5: Stack[-6] = (bool) 1
0x9a6: Push("butcher")
0x9a7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x9a8: IF (Stack[-1] == 0) GOTO 0x9ad; Pop(1)

0x9a9: Push("morlok")
0x9aa: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x9ab: IF (Stack[-1] == 0) GOTO 0x9ad; Pop(1)

0x9ac: Stack[-6] = (bool) 0
0x9ad: Return(); Pop(2)

0x9ae: PushEmpty()
0x9af: PushEmpty(bool, object)
0x9b0: Stack[-1] = Stack[-3]
0x9b1: Call2 0x672

0x9b2: Pop(1)
0x9b3: IF (Stack[-1] == 0) GOTO 0x9be; Pop(1)

0x9b4: PushEmpty(object)
0x9b5: Call2 0x7e9

0x9b6: Pop(0)
0x9b7: Push((float)-0.07)
0x9b8: Push((bool) 1)
0x9b9: @ ReportReputationChange(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x9ba: Pop(3)
0x9bb: PushEmpty()
0x9bc: Call2 0x86a

0x9bd: Pop(0)
0x9be: PushEmpty()
0x9bf: Call2 0x852

0x9c0: Pop(0)
0x9c1: Push(GlobalVars[0])
0x9c2: Stack[-1] = (bool) 1
0x9c3: GlobalVars[0] = Stack[-1]; Pop(1)
0x9c4: Push((int) 50)
0x9c5: Push((int) 40)
0x9c6: @ SetRTEnvelope(Stack[-2], Stack[-1])
0x9c7: Pop(2)
0x9c8: Return(); Pop(0)

