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
	Can't retreat, distance: 
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
	FindLongestDir (6 args)
	Trace (1 args)
	Rotate (2 args)
	MovePoint (3 args)
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
	BroadcastMessage (3 args)
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
	GTASK_4 Vars = (object, int, int, bool, float, int) Params = 1
	GTASK_5 Vars = (bool, object, bool) Params = 6
		EVENT_6 Op = 0x6be Vars = ()
		EVENT_7 Op = 0x6f6 Vars = (int)
		EVENT_1 Op = 0x711 Vars = (object)
		EVENT_2 Op = 0x720 Vars = (object)
		EVENT_10 Op = 0x7a6 Vars = (object)
		EVENT_41 Op = 0x7b1 Vars = (object)
	GTASK_6 Vars = (object, cvector, bool) Params = 1
		EVENT_6 Op = 0x7c5 Vars = ()
		EVENT_7 Op = 0x833 Vars = (int)
		EVENT_41 Op = 0x86e Vars = (object)

Events:
EVENT_16 Op = 0xa81 Vars = (object, string)
EVENT_41 Op = 0xa8e Vars = (object)
EVENT_22 Op = 0xa94 Vars = (object, int, float, float)
EVENT_43 Op = 0xa9c Vars = (object, int, float, float, cvector, cvector)

0x0: PushEmpty()
0x1: EventDisable(0)
0x2: PushEmpty(object)
0x3: Stack[-1] = Stack[-2]
0x4: Call2 0x21

0x5: Pop(1)
0x6: PushEmpty(object)
0x7: Stack[-1] = Stack[-2]
0x8: Call2 0xc22

0x9: Pop(1)
0xa: EventEnable(0)
0xb: @ Hold()
0xc: Pop(0)
0xd: GOTO 0xb

0xe: Return(); Pop(0)

0xf: PushEmpty(int, int)
0x10: PushEmpty(int, object)
0x11: Stack[-1] = Stack[-5]
0x12: Call2 0xbe0

0x13: Stack[-3] = Stack[-2]
0x14: Pop(2)
0x15: Push((int) 0)
0x16: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x17: IF (Stack[-1] == 0) GOTO 0x1c; Pop(1)

0x18: PushEmpty(object)
0x19: Stack[-1] = Stack[-4]
0x1a: Call2 0xbe3

0x1b: Pop(1)
0x1c: Return(); Pop(2)

0x1d: PushEmpty()
0x1e: Call2 0xbe9

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
0x67: Call2 0x9dd

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
0x89: Call2 0x9dd

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
0xa0: Call2 0xc10

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
0xac: Call2 0x9cd

0xad: Pop(0)
0xae: Pop(1); Push((bool) Stack[-1] == 0)
0xaf: IF (Stack[-1] == 0) GOTO 0xb3; Pop(1)

0xb0: PushEmpty()
0xb1: Call2 0xbe9

0xb2: Pop(0)
0xb3: Return(); Pop(0)

0xb4: PushEmpty(int, int)
0xb5: PushEmpty(int, object)
0xb6: Stack[-1] = Stack[-5]
0xb7: Call2 0xbe0

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
0xc5: Call2 0xbe3

0xc6: Pop(1)
0xc7: Return(); Pop(2)

0xc8: PushEmpty(int, int)
0xc9: PushEmpty(object)
0xca: Stack[-1] = Stack[-4]
0xcb: Call2 0xafc

0xcc: Pop(1)
0xcd: PushEmpty(int, object)
0xce: Stack[-1] = Stack[-5]
0xcf: Call2 0xb4f

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
0xdd: Call2 0xb59

0xde: Pop(1)
0xdf: Return(); Pop(2)

0xe0: PushEmpty(int, int)
0xe1: PushEmpty(bool, object, object, bool)
0xe2: Stack[-3] = Stack[-9]
0xe3: Stack[-2] = Stack[-8]
0xe4: Stack[-1] = Stack[-7]
0xe5: Call2 0xc18

0xe6: Pop(3)
0xe7: IF (Stack[-1] == 0) GOTO 0xfb; Pop(1)

0xe8: PushEmpty(int, object, bool)
0xe9: Stack[-2] = Stack[-8]
0xea: Stack[-1] = Stack[-6]
0xeb: Call2 0xbac

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
0xf9: Call2 0xbb3

0xfa: Pop(1)
0xfb: Return(); Pop(2)

0xfc: PushEmpty(int, int)
0xfd: PushEmpty(int, object)
0xfe: Stack[-1] = Stack[-5]
0xff: Call2 0xbd6

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
0x10d: Call2 0xbd9

0x10e: Pop(1)
0x10f: Return(); Pop(2)

0x110: PushEmpty(int, int)
0x111: PushEmpty(bool, object, string)
0x112: Stack[-2] = Stack[-7]
0x113: Stack[-1] = Stack[-6]
0x114: Call2 0xaa6

0x115: Pop(2)
0x116: IF (Stack[-1] == 0) GOTO 0x120; Pop(1)

0x117: PushEmpty()
0x118: Call2 0x16f

0x119: Pop(0)
0x11a: PushEmpty(object, string)
0x11b: Stack[-2] = Stack[-6]
0x11c: Stack[-1] = Stack[-5]
0x11d: Call2 0xac6

0x11e: Pop(2)
0x11f: GOTO 0x134

0x120: PushEmpty(int, string, object)
0x121: Stack[-2] = Stack[-6]
0x122: Stack[-1] = Stack[-7]
0x123: Call2 0xbdb

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
0x132: Call2 0xbde

0x133: Pop(2)
0x134: Return(); Pop(2)

0x135: PushEmpty()
0x136: PushEmpty(bool, string)
0x137: Stack[-1] = Stack[-3]
0x138: Call2 0xb09

0x139: Pop(1)
0x13a: IF (Stack[-1] == 0) GOTO 0x142; Pop(1)

0x13b: PushEmpty()
0x13c: Call2 0x16f

0x13d: Pop(0)
0x13e: PushEmpty(string)
0x13f: Stack[-1] = Stack[-2]
0x140: Call2 0xb19

0x141: Pop(1)
0x142: Return(); Pop(0)

0x143: PushEmpty()
0x144: PushEmpty(bool, object)
0x145: Stack[-1] = Stack[-3]
0x146: Call2 0xadf

0x147: Pop(1)
0x148: IF (Stack[-1] == 0) GOTO 0x151; Pop(1)

0x149: PushEmpty()
0x14a: Call2 0x16f

0x14b: Pop(0)
0x14c: PushEmpty(object)
0x14d: Stack[-1] = Stack[-2]
0x14e: Call2 0xaf6

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
0x16c: Call2 0xbe9

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
0x185: Call2 0xa8e

0x186: Pop(1)
0x187: Return(); Pop(0)

0x188: PushEmpty(bool, int, bool, int)
0x189: PushEmpty(bool, object)
0x18a: Stack[-1] = Stack[-7]
0x18b: Call2 0x92c

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
0x19a: Call2 0xb3e

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
0x1a8: Call2 0xb47

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
0x210: Call2 0xbe0

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
0x21e: Call2 0xbe3

0x21f: Pop(1)
0x220: Return(); Pop(2)

0x221: PushEmpty(int, int)
0x222: PushEmpty(object)
0x223: Stack[-1] = Stack[-4]
0x224: Call2 0xafc

0x225: Pop(1)
0x226: PushEmpty(int, object)
0x227: Stack[-1] = Stack[-5]
0x228: Call2 0xb4f

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
0x236: Call2 0xb59

0x237: Pop(1)
0x238: Return(); Pop(2)

0x239: PushEmpty(int, int)
0x23a: PushEmpty(bool, object, object, bool)
0x23b: Stack[-3] = Stack[-9]
0x23c: Stack[-2] = Stack[-8]
0x23d: Stack[-1] = Stack[-7]
0x23e: Call2 0xc18

0x23f: Pop(3)
0x240: IF (Stack[-1] == 0) GOTO 0x254; Pop(1)

0x241: PushEmpty(int, object, bool)
0x242: Stack[-2] = Stack[-8]
0x243: Stack[-1] = Stack[-6]
0x244: Call2 0xbac

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
0x252: Call2 0xbb3

0x253: Pop(1)
0x254: Return(); Pop(2)

0x255: PushEmpty(int, int)
0x256: PushEmpty(int, object)
0x257: Stack[-1] = Stack[-5]
0x258: Call2 0xbd6

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
0x266: Call2 0xbd9

0x267: Pop(1)
0x268: Return(); Pop(2)

0x269: PushEmpty(int, int)
0x26a: PushEmpty(bool, object, string)
0x26b: Stack[-2] = Stack[-7]
0x26c: Stack[-1] = Stack[-6]
0x26d: Call2 0xaa6

0x26e: Pop(2)
0x26f: IF (Stack[-1] == 0) GOTO 0x279; Pop(1)

0x270: PushEmpty()
0x271: Call2 0x302

0x272: Pop(0)
0x273: PushEmpty(object, string)
0x274: Stack[-2] = Stack[-6]
0x275: Stack[-1] = Stack[-5]
0x276: Call2 0xac6

0x277: Pop(2)
0x278: GOTO 0x28d

0x279: PushEmpty(int, string, object)
0x27a: Stack[-2] = Stack[-6]
0x27b: Stack[-1] = Stack[-7]
0x27c: Call2 0xbdb

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
0x28b: Call2 0xbde

0x28c: Pop(2)
0x28d: Return(); Pop(2)

0x28e: PushEmpty()
0x28f: PushEmpty(bool, string)
0x290: Stack[-1] = Stack[-3]
0x291: Call2 0xb09

0x292: Pop(1)
0x293: IF (Stack[-1] == 0) GOTO 0x29b; Pop(1)

0x294: PushEmpty()
0x295: Call2 0x302

0x296: Pop(0)
0x297: PushEmpty(string)
0x298: Stack[-1] = Stack[-2]
0x299: Call2 0xb19

0x29a: Pop(1)
0x29b: Return(); Pop(0)

0x29c: PushEmpty()
0x29d: Call2 0x302

0x29e: Pop(0)
0x29f: PushEmpty()
0x2a0: Call2 0xbe9

0x2a1: Pop(0)
0x2a2: Return(); Pop(0)

0x2a3: PushEmpty()
0x2a4: PushEmpty(bool, object)
0x2a5: Stack[-1] = Stack[-3]
0x2a6: Call2 0xadf

0x2a7: Pop(1)
0x2a8: IF (Stack[-1] == 0) GOTO 0x2b0; Pop(1)

0x2a9: PushEmpty()
0x2aa: Call2 0x302

0x2ab: Pop(0)
0x2ac: PushEmpty(object)
0x2ad: Stack[-1] = Stack[-2]
0x2ae: Call2 0xaf6

0x2af: Pop(1)
0x2b0: Return(); Pop(0)

0x2b1: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x2b2: @ WaitForAnimEnd()
0x2b3: Pop(0)
0x2b4: PushEmpty(bool)
0x2b5: Call2 0x9cd

0x2b6: Pop(0)
0x2b7: Pop(1); Push((bool) Stack[-1] == 0)
0x2b8: IF (Stack[-1] == 0) GOTO 0x2ba; Pop(1)

0x2b9: Return(); Pop(14)

0x2ba: PushEmpty(int)
0x2bb: Call2 0xb2d

0x2bc: Stack[-8] = Stack[-1]
0x2bd: Pop(1)
0x2be: Stack[-6] = (int) 0
0x2bf: PushEmpty(bool)
0x2c0: Stack[-1] = (bool) 0
0x2c1: Push((int) 5)
0x2c2: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x2c3: IF (Stack[-1] == 0) GOTO 0x2c9; Pop(1)

0x2c4: PushEmpty(bool)
0x2c5: Call2 0x9cd

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
0x2d7: Call2 0xb26

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
0x310: Call2 0x89a

0x311: Stack[-4] = Stack[-2]
0x312: Pop(2)
0x313: PushEmpty(float, cvector, cvector)
0x314: Stack[-2] = Stack[-6]
0x315: Stack[-1] = Stack[-5]
0x316: Call2 0xa43

0x317: Pop(2)
0x318: Push((int) 0)
0x319: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x31a: IF (Stack[-1] == 0) GOTO 0x321; Pop(1)

0x31b: PushEmpty(object)
0x31c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x31d: Call2 0x9c2

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
0x328: Call2 0x9c2

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
0x33c: Call2 0x9d2

0x33d: Pop(1)
0x33e: Return(); Pop(0)

0x33f: PushEmpty(int, int)
0x340: PushEmpty(int, object)
0x341: Stack[-1] = Stack[-5]
0x342: Call2 0xbe0

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
0x350: Call2 0xbe3

0x351: Pop(1)
0x352: Return(); Pop(2)

0x353: PushEmpty(int, int)
0x354: PushEmpty(object)
0x355: Stack[-1] = Stack[-4]
0x356: Call2 0xafc

0x357: Pop(1)
0x358: PushEmpty(int, object)
0x359: Stack[-1] = Stack[-5]
0x35a: Call2 0xb4f

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
0x368: Call2 0xb59

0x369: Pop(1)
0x36a: Return(); Pop(2)

0x36b: PushEmpty(int, int)
0x36c: PushEmpty(bool, object, object, bool)
0x36d: Stack[-3] = Stack[-9]
0x36e: Stack[-2] = Stack[-8]
0x36f: Stack[-1] = Stack[-7]
0x370: Call2 0xc18

0x371: Pop(3)
0x372: IF (Stack[-1] == 0) GOTO 0x386; Pop(1)

0x373: PushEmpty(int, object, bool)
0x374: Stack[-2] = Stack[-8]
0x375: Stack[-1] = Stack[-6]
0x376: Call2 0xbac

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
0x384: Call2 0xbb3

0x385: Pop(1)
0x386: Return(); Pop(2)

0x387: PushEmpty(int, int)
0x388: PushEmpty(int, object)
0x389: Stack[-1] = Stack[-5]
0x38a: Call2 0xbd6

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
0x398: Call2 0xbd9

0x399: Pop(1)
0x39a: Return(); Pop(2)

0x39b: PushEmpty(int, int)
0x39c: PushEmpty(bool, object, string)
0x39d: Stack[-2] = Stack[-7]
0x39e: Stack[-1] = Stack[-6]
0x39f: Call2 0xaa6

0x3a0: Pop(2)
0x3a1: IF (Stack[-1] == 0) GOTO 0x3ab; Pop(1)

0x3a2: PushEmpty()
0x3a3: Call2 0x3ce

0x3a4: Pop(0)
0x3a5: PushEmpty(object, string)
0x3a6: Stack[-2] = Stack[-6]
0x3a7: Stack[-1] = Stack[-5]
0x3a8: Call2 0xac6

0x3a9: Pop(2)
0x3aa: GOTO 0x3bf

0x3ab: PushEmpty(int, string, object)
0x3ac: Stack[-2] = Stack[-6]
0x3ad: Stack[-1] = Stack[-7]
0x3ae: Call2 0xbdb

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
0x3bd: Call2 0xbde

0x3be: Pop(2)
0x3bf: Return(); Pop(2)

0x3c0: PushEmpty()
0x3c1: PushEmpty(bool, string)
0x3c2: Stack[-1] = Stack[-3]
0x3c3: Call2 0xb09

0x3c4: Pop(1)
0x3c5: IF (Stack[-1] == 0) GOTO 0x3cd; Pop(1)

0x3c6: PushEmpty()
0x3c7: Call2 0x3ce

0x3c8: Pop(0)
0x3c9: PushEmpty(string)
0x3ca: Stack[-1] = Stack[-2]
0x3cb: Call2 0xb19

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
0x3df: Call2 0xa8e

0x3e0: Pop(1)
0x3e1: Return(); Pop(0)

0x3e2: PushEmpty(cvector, cvector, cvector, cvector)
0x3e3: Push((int) 111)
0x3e4: Pop(1); Push((bool) Stack[-6] != Stack[-1])
0x3e5: IF (Stack[-1] == 0) GOTO 0x3e7; Pop(1)

0x3e6: Return(); Pop(4)

0x3e7: PushEmpty(bool, object)
0x3e8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3e9: Call2 0x92c

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
0x3f5: Call2 0x89a

0x3f6: Stack[-3] = Stack[-2]
0x3f7: Pop(2)
0x3f8: PushEmpty(float, cvector, cvector)
0x3f9: Stack[-2] = Stack[-5]
0x3fa: Stack[-1] = Stack[-4]
0x3fb: Call2 0xa43

0x3fc: Pop(2)
0x3fd: Push((float)0.5)
0x3fe: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x3ff: IF (Stack[-1] == 0) GOTO 0x404; Pop(1)

0x400: PushEmpty(object)
0x401: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x402: Call2 0x9c2

0x403: Pop(1)
0x404: Return(); Pop(4)

0x405: PushEmpty()
0x406: Call2 0x3ce

0x407: Pop(0)
0x408: PushEmpty()
0x409: Call2 0xbe9

0x40a: Pop(0)
0x40b: Return(); Pop(0)

0x40c: PushEmpty()
0x40d: PushEmpty(bool, object)
0x40e: Stack[-1] = Stack[-3]
0x40f: Call2 0xadf

0x410: Pop(1)
0x411: IF (Stack[-1] == 0) GOTO 0x419; Pop(1)

0x412: PushEmpty()
0x413: Call2 0x3ce

0x414: Pop(0)
0x415: PushEmpty(object)
0x416: Stack[-1] = Stack[-2]
0x417: Call2 0xaf6

0x418: Pop(1)
0x419: Return(); Pop(0)

0x41a: PushEmpty()
0x41b: PushEmpty(object, bool, float)
0x41c: Stack[-3] = Stack[-4]
0x41d: Stack[-2] = (bool) 1
0x41e: Stack[-1] = (float) 180.0
0x41f: Call2 0x428

0x420: Pop(3)
0x421: Return(); Pop(0)

0x422: PushEmpty()
0x423: Stack[-3] = (float) 0.2
0x424: Return(); Pop(0)

0x425: PushEmpty()
0x426: Stack[-3] = (int) 0
0x427: Return(); Pop(0)

0x428: PushEmpty(float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float, float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float)
0x429: PushEmpty()
0x42a: Call2 0x50d

0x42b: Pop(0)
0x42c: Stack[5 + Tasks[-1].StackPointer] = (int)0
0x42d: Push("@GetAttackDistance")
0x42e: Push((int) 1)
0x42f: Pop(2); Push(IsFuncExist(Stack[-27], Stack[-2], Stack[-1]))
0x430: IF (Stack[-1] == 0) GOTO 0x436; Pop(1)

0x431: @@ GetAttackDistance(Stack[-11])
0x432: Pop(0)
0x433: Push((int) 50)
0x434: Stack[-12] = Stack[-12] + Stack[-1]; Pop(1);
0x435: GOTO 0x437

0x436: Stack[-11] = Stack[-23]
0x437: Push((int) 150)
0x438: Pop(1); Push((bool) Stack[-12] >= Stack[-1])
0x439: IF (Stack[-1] == 0) GOTO 0x43b; Pop(1)

0x43a: Stack[-11] = (int) 150
0x43b: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x43c: Stack[0 + Tasks[-1].StackPointer] = Stack[-25]
0x43d: @ IsPlayerActor(Stack[-0], Stack[-8])
0x43e: Pop(0)
0x43f: Push(Stack[-8])
0x440: IF (Stack[-1] == 0) GOTO 0x449; Pop(1)

0x441: Push("attack")
0x442: @ PlayGlobalMusic(Stack[-1])
0x443: Pop(1)
0x444: PushEmpty(object)
0x445: Call2 0xa06

0x446: Pop(0)
0x447: @ SendPlayerEnemy(Stack[-26], Stack[-1])
0x448: Pop(1)
0x449: Push(Stack[-24])
0x44a: IF (Stack[-1] == 0) GOTO 0x44d; Pop(1)

0x44b: Stack[-7] = (bool) 0
0x44c: GOTO 0x44e

0x44d: Stack[-7] = (bool) 1
0x44e: Push((float)400.0)
0x44f: Stack[-7] = Stack[-1] + Stack[-12]; Pop(1);
0x450: PushEmpty(bool)
0x451: Stack[-1] = (bool) 0
0x452: PushEmpty(bool, object)
0x453: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x454: Call2 0x92c

0x455: Pop(1)
0x456: IF (Stack[-1] == 0) GOTO 0x45a; Pop(1)

0x457: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x458: IF (Stack[-1] == 0) GOTO 0x45a; Pop(1)

0x459: Stack[-1] = (bool) 1
0x45a: IF (Stack[-1] == 0) GOTO 0x4fc; Pop(1)

0x45b: PushEmpty()
0x45c: Call2 0x6aa

0x45d: Pop(0)
0x45e: @@ GetPFPosition(Stack[-10])
0x45f: Pop(0)
0x460: @ GetPFPosition(Stack[-9])
0x461: Pop(0)
0x462: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0x463: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x464: Pop(0); Push(Stack[-6] * Stack[-6]);
0x465: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0x466: IF (Stack[-1] == 0) GOTO 0x476; Pop(1)

0x467: PushEmpty(bool, object, float, float, bool, bool)
0x468: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0x469: Stack[-4] = Stack[-17]
0x46a: Stack[-3] = (float) 3000.0
0x46b: Stack[-2] = (bool) 1
0x46c: Stack[-1] = (bool) 0
0x46d: Push(-6, 3); TaskCall(5)
0x46e: Call2 0x6c5

0x46f: Pop(-6, 3); TaskReturn
0x470: Pop(5)
0x471: Pop(1); Push((bool) Stack[-1] == 0)
0x472: IF (Stack[-1] == 0) GOTO 0x474; Pop(1)

0x473: GOTO 0x4fc

0x474: Stack[-7] = (bool) 0
0x475: GOTO 0x4fb

0x476: Pop(0); Push(Stack[-23] * Stack[-23]);
0x477: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0x478: IF (Stack[-1] == 0) GOTO 0x4f3; Pop(1)

0x479: @@ GetPFPosition(Stack[-3])
0x47a: Pop(0)
0x47b: @ CanReachByPF(Stack[-2], Stack[-3])
0x47c: Pop(0)
0x47d: Pop(0); Push((bool) Stack[-2] == 0)
0x47e: IF (Stack[-1] == 0) GOTO 0x48e; Pop(1)

0x47f: PushEmpty(bool, object, float, float, bool, bool)
0x480: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0x481: Stack[-4] = Stack[-17]
0x482: Stack[-3] = (float) 3000.0
0x483: Stack[-2] = (bool) 1
0x484: Stack[-1] = (bool) 0
0x485: Push(-6, 3); TaskCall(5)
0x486: Call2 0x6c5

0x487: Pop(-6, 3); TaskReturn
0x488: Pop(5)
0x489: Pop(1); Push((bool) Stack[-1] == 0)
0x48a: IF (Stack[-1] == 0) GOTO 0x48c; Pop(1)

0x48b: GOTO 0x4fc

0x48c: Stack[-7] = (bool) 0
0x48d: GOTO 0x450

0x48e: Pop(0); Push((bool) Stack[-7] == 0)
0x48f: IF (Stack[-1] == 0) GOTO 0x4a7; Pop(1)

0x490: PushEmpty(object)
0x491: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x492: Call2 0x9c2

0x493: Pop(1)
0x494: Push("all")
0x495: Push("attack_on")
0x496: @ PlayAnimation(Stack[-2], Stack[-1])
0x497: Pop(2)
0x498: @ WaitForAnimEnd()
0x499: Pop(0)
0x49a: PushEmpty()
0x49b: Call2 0x6aa

0x49c: Pop(0)
0x49d: @ StopAsync()
0x49e: Pop(0)
0x49f: Stack[-7] = (bool) 1
0x4a0: PushEmpty(bool, object)
0x4a1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4a2: Call2 0x92c

0x4a3: Pop(1)
0x4a4: Pop(1); Push((bool) Stack[-1] == 0)
0x4a5: IF (Stack[-1] == 0) GOTO 0x4a7; Pop(1)

0x4a6: GOTO 0x4fc

0x4a7: @ rand(Stack[-1])
0x4a8: Pop(0)
0x4a9: PushEmpty(bool)
0x4aa: Stack[-1] = (bool) 1
0x4ab: Push((float)0.25)
0x4ac: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x4ad: IF (Stack[-1] == 0) GOTO 0x4b3; Pop(1)

0x4ae: PushEmpty(bool)
0x4af: Call2 0x67f

0x4b0: Pop(0)
0x4b1: IF (Stack[-1] == 0) GOTO 0x4b3; Pop(1)

0x4b2: Stack[-1] = (bool) 0
0x4b3: IF (Stack[-1] == 0) GOTO 0x4c4; Pop(1)

0x4b4: @ Face(Stack[-0])
0x4b5: Pop(0)
0x4b6: PushEmpty()
0x4b7: Call2 0x6b1

0x4b8: Pop(0)
0x4b9: Push("all")
0x4ba: Push("attack_stay")
0x4bb: @ PlayAnimation(Stack[-2], Stack[-1])
0x4bc: Pop(2)
0x4bd: PushEmpty(bool, float)
0x4be: Stack[-1] = Stack[-25]
0x4bf: Call2 0x5fb

0x4c0: Pop(2)
0x4c1: @ StopAsync()
0x4c2: Pop(0)
0x4c3: GOTO 0x4f2

0x4c4: @ Face(Stack[-0])
0x4c5: Pop(0)
0x4c6: Push("all")
0x4c7: Push("fjump")
0x4c8: @ PlayAnimation(Stack[-2], Stack[-1])
0x4c9: Pop(2)
0x4ca: @ WaitForAnimEnd()
0x4cb: Pop(0)
0x4cc: PushEmpty()
0x4cd: Call2 0x6aa

0x4ce: Pop(0)
0x4cf: Push(CVector(0.0, 0.0, 0.0))
0x4d0: @ SetSpeed(Stack[-1])
0x4d1: Pop(1)
0x4d2: @ Stop()
0x4d3: Pop(0)
0x4d4: @ StopAsync()
0x4d5: Pop(0)
0x4d6: PushEmpty(bool)
0x4d7: Call2 0x67f

0x4d8: Pop(0)
0x4d9: Pop(1); Push((bool) Stack[-1] == 0)
0x4da: IF (Stack[-1] == 0) GOTO 0x4f2; Pop(1)

0x4db: PushEmpty(bool, object)
0x4dc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4dd: Call2 0x92c

0x4de: Pop(1)
0x4df: Pop(1); Push((bool) Stack[-1] == 0)
0x4e0: IF (Stack[-1] == 0) GOTO 0x4e2; Pop(1)

0x4e1: GOTO 0x4fc

0x4e2: @@ GetPFPosition(Stack[-10])
0x4e3: Pop(0)
0x4e4: @ GetPFPosition(Stack[-9])
0x4e5: Pop(0)
0x4e6: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0x4e7: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x4e8: Pop(0); Push(Stack[-23] * Stack[-23]);
0x4e9: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x4ea: IF (Stack[-1] == 0) GOTO 0x4f2; Pop(1)

0x4eb: PushEmpty(bool, float)
0x4ec: Stack[-1] = Stack[-25]
0x4ed: Call2 0x557

0x4ee: Pop(1)
0x4ef: Pop(1); Push((bool) Stack[-1] == 0)
0x4f0: IF (Stack[-1] == 0) GOTO 0x4f2; Pop(1)

0x4f1: GOTO 0x4fc

0x4f2: GOTO 0x4fb

0x4f3: PushEmpty(bool, float)
0x4f4: Stack[-1] = Stack[-25]
0x4f5: Call2 0x557

0x4f6: Pop(1)
0x4f7: Pop(1); Push((bool) Stack[-1] == 0)
0x4f8: IF (Stack[-1] == 0) GOTO 0x4fa; Pop(1)

0x4f9: GOTO 0x4fc

0x4fa: Stack[-7] = (bool) 1
0x4fb: GOTO 0x450

0x4fc: @ WaitForAnimEnd()
0x4fd: Pop(0)
0x4fe: Push( Stack[3 + Tasks[-1].StackPointer] )
0x4ff: IF (Stack[-1] == 0) GOTO 0x501; Pop(1)

0x500: Return(); Pop(22)

0x501: Push("all")
0x502: Push("attack_off")
0x503: @ PlayAnimation(Stack[-2], Stack[-1])
0x504: Pop(2)
0x505: @ WaitForAnimEnd()
0x506: Pop(0)
0x507: Push(Stack[-8])
0x508: IF (Stack[-1] == 0) GOTO 0x50c; Pop(1)

0x509: Push((float)2.0)
0x50a: @ Sleep(Stack[-1])
0x50b: Pop(1)
0x50c: Return(); Pop(22)

0x50d: PushEmpty(bool, bool, cvector, bool, bool, cvector)
0x50e: Stack[1 + Tasks[-1].StackPointer] = (int)0
0x50f: Push("all")
0x510: Push("attack_begin")
0x511: Push((int) 1)
0x512: Pop(1); Push(Stack[1 + StackPtr] + Stack[-1]);
0x513: Pop(2); Push(Stack[-2] + Stack[-1]);
0x514: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0x515: Pop(2)
0x516: Pop(0); Push((bool) Stack[-3] == 0)
0x517: IF (Stack[-1] == 0) GOTO 0x519; Pop(1)

0x518: GOTO 0x51c

0x519: Push((int) 1)
0x51a: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x51b: GOTO 0x50f

0x51c: Stack[2 + Tasks[-1].StackPointer] = (int)0
0x51d: Push("attack")
0x51e: Push((int) 1)
0x51f: Pop(1); Push(Stack[2 + StackPtr] + Stack[-1]);
0x520: Pop(2); Push(Stack[-2] + Stack[-1]);
0x521: @ IsExisting3DSound(Stack[-3], Stack[-1])
0x522: Pop(1)
0x523: Pop(0); Push((bool) Stack[-2] == 0)
0x524: IF (Stack[-1] == 0) GOTO 0x526; Pop(1)

0x525: GOTO 0x529

0x526: Push((int) 1)
0x527: Stack[2 + Tasks[-1].StackPointer] = Stack[2 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x528: GOTO 0x51d

0x529: Push("all")
0x52a: Push("bjump")
0x52b: @ GetAnimationOffset(Stack[-3], Stack[-2], Stack[-1])
0x52c: Pop(2)
0x52d: Push(CvectorIndex(Stack[-1], 2))
0x52e: Stack[4 + Tasks[-1].StackPointer] = -Stack[-1]; Pop(1);
0x52f: Return(); Pop(6)

0x530: PushEmpty(object, float, float, object, float, float)
0x531: Push((float)0.9)
0x532: Pop(1); Push(Stack[-9] * Stack[-1]);
0x533: @ GetVictim(Stack[-1], Stack[-4])
0x534: Pop(1)
0x535: @ ReportAttack(Stack[-0])
0x536: Pop(0)
0x537: Pop(0); Push((bool) Stack[-3] == Stack[0 + Tasks[-1].StackPointer])
0x538: IF (Stack[-1] == 0) GOTO 0x555; Pop(1)

0x539: PushEmpty(float, object, int)
0x53a: Stack[-2] = Stack[-6]
0x53b: Stack[-1] = Stack[-10]
0x53c: Call2 0x422

0x53d: Stack[-5] = Stack[-3]
0x53e: Pop(3)
0x53f: PushEmpty(float, object, float, int)
0x540: Stack[-3] = Stack[-7]
0x541: Stack[-2] = Stack[-6]
0x542: PushEmpty(int, object, int)
0x543: Stack[-2] = Stack[-10]
0x544: Stack[-1] = Stack[-14]
0x545: Call2 0x425

0x546: Stack[-4] = Stack[-3]
0x547: Pop(3)
0x548: Call2 0x8ba

0x549: Stack[-5] = Stack[-4]
0x54a: Pop(4)
0x54b: PushEmpty(int)
0x54c: Call2 0x6af

0x54d: Pop(0)
0x54e: @ ReportHit(Stack[-0], Stack[-1], Stack[-2], Stack[-3])
0x54f: Pop(1)
0x550: PushEmpty(object, float)
0x551: Stack[-2] = Stack[-5]
0x552: Stack[-1] = Stack[-3]
0x553: Call2 0x6b6

0x554: Pop(2)
0x555: Return(); Pop(6)

0x556: Stack[-3] = 0
0x557: PushEmpty(int, bool, int, string, int, bool, int, string)
0x558: PushEmpty()
0x559: Call2 0x6aa

0x55a: Pop(0)
0x55b: @ irand(Stack[-4], Stack[-1])
0x55c: Pop(0)
0x55d: Push((int) 1)
0x55e: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x55f: @ Face(Stack[-0])
0x560: Pop(0)
0x561: Push((bool) 1)
0x562: @ SetAttackState(Stack[-1])
0x563: Pop(1)
0x564: PushEmpty()
0x565: Call2 0xa6e

0x566: Pop(0)
0x567: Push("all")
0x568: Push("attack_begin")
0x569: Pop(1); Push(Stack[-1] + Stack[-6]);
0x56a: @ PlayAnimation(Stack[-2], Stack[-1])
0x56b: Pop(2)
0x56c: @ WaitForAnimEnd()
0x56d: Pop(0)
0x56e: PushEmpty()
0x56f: Call2 0x68a

0x570: Pop(0)
0x571: PushEmpty(bool, object)
0x572: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x573: Call2 0x92c

0x574: Pop(1)
0x575: Pop(1); Push((bool) Stack[-1] == 0)
0x576: IF (Stack[-1] == 0) GOTO 0x57b; Pop(1)

0x577: @ StopAsync()
0x578: Pop(0)
0x579: Stack[-10] = (bool) 0
0x57a: Return(); Pop(8)

0x57b: PushEmpty(float, int)
0x57c: Stack[-2] = Stack[-11]
0x57d: Stack[-1] = Stack[-6]
0x57e: Call2 0x530

0x57f: Pop(2)
0x580: Push("all")
0x581: Push("attack_middle")
0x582: Pop(1); Push(Stack[-1] + Stack[-6]);
0x583: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0x584: Pop(2)
0x585: Push(Stack[-3])
0x586: IF (Stack[-1] == 0) GOTO 0x5cc; Pop(1)

0x587: PushEmpty()
0x588: Call2 0xa6e

0x589: Pop(0)
0x58a: Push("all")
0x58b: Push("attack_middle")
0x58c: Pop(1); Push(Stack[-1] + Stack[-6]);
0x58d: @ PlayAnimation(Stack[-2], Stack[-1])
0x58e: Pop(2)
0x58f: @ WaitForAnimEnd()
0x590: Pop(0)
0x591: PushEmpty()
0x592: Call2 0x6aa

0x593: Pop(0)
0x594: PushEmpty(bool, object)
0x595: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x596: Call2 0x92c

0x597: Pop(1)
0x598: Pop(1); Push((bool) Stack[-1] == 0)
0x599: IF (Stack[-1] == 0) GOTO 0x59e; Pop(1)

0x59a: @ StopAsync()
0x59b: Pop(0)
0x59c: Stack[-10] = (bool) 0
0x59d: Return(); Pop(8)

0x59e: PushEmpty(float, int)
0x59f: Stack[-2] = Stack[-11]
0x5a0: Stack[-1] = Stack[-6]
0x5a1: Call2 0x530

0x5a2: Pop(2)
0x5a3: Stack[-2] = (int) 1
0x5a4: Push("attack_middle")
0x5a5: Pop(1); Push(Stack[-1] + Stack[-5]);
0x5a6: Push("_")
0x5a7: Pop(2); Push(Stack[-2] + Stack[-1]);
0x5a8: Stack[-2] = Stack[-1] + Stack[-3]; Pop(1);
0x5a9: Push("all")
0x5aa: @ HasAnimation(Stack[-4], Stack[-1], Stack[-2])
0x5ab: Pop(1)
0x5ac: Pop(0); Push((bool) Stack[-3] == 0)
0x5ad: IF (Stack[-1] == 0) GOTO 0x5af; Pop(1)

0x5ae: GOTO 0x5cc

0x5af: PushEmpty()
0x5b0: Call2 0xa6e

0x5b1: Pop(0)
0x5b2: Push("all")
0x5b3: @ PlayAnimation(Stack[-1], Stack[-2])
0x5b4: Pop(1)
0x5b5: @ WaitForAnimEnd()
0x5b6: Pop(0)
0x5b7: PushEmpty()
0x5b8: Call2 0x6aa

0x5b9: Pop(0)
0x5ba: PushEmpty(bool, object)
0x5bb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5bc: Call2 0x92c

0x5bd: Pop(1)
0x5be: Pop(1); Push((bool) Stack[-1] == 0)
0x5bf: IF (Stack[-1] == 0) GOTO 0x5c4; Pop(1)

0x5c0: @ StopAsync()
0x5c1: Pop(0)
0x5c2: Stack[-10] = (bool) 0
0x5c3: Return(); Pop(8)

0x5c4: PushEmpty(float, int)
0x5c5: Stack[-2] = Stack[-11]
0x5c6: Stack[-1] = Stack[-6]
0x5c7: Call2 0x530

0x5c8: Pop(2)
0x5c9: Push((int) 1)
0x5ca: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x5cb: GOTO 0x5a4

0x5cc: Push((bool) 0)
0x5cd: @ SetAttackState(Stack[-1])
0x5ce: Pop(1)
0x5cf: Push("all")
0x5d0: Push("attack_end")
0x5d1: Pop(1); Push(Stack[-1] + Stack[-6]);
0x5d2: @ PlayAnimation(Stack[-2], Stack[-1])
0x5d3: Pop(2)
0x5d4: PushEmpty(bool)
0x5d5: Call2 0x6b8

0x5d6: Pop(0)
0x5d7: IF (Stack[-1] == 0) GOTO 0x5de; Pop(1)

0x5d8: PushEmpty(bool, float)
0x5d9: Stack[-1] = (float) 0.75
0x5da: Call2 0x5e0

0x5db: Pop(2)
0x5dc: @ StopAsync()
0x5dd: Pop(0)
0x5de: Stack[-10] = (bool) 1
0x5df: Return(); Pop(8)

0x5e0: PushEmpty(float, bool, float, bool)
0x5e1: @ rand(Stack[-2])
0x5e2: Pop(0)
0x5e3: Pop(0); Push((bool) Stack[-2] < Stack[-5])
0x5e4: IF (Stack[-1] == 0) GOTO 0x5f4; Pop(1)

0x5e5: @ IsAnimationPlaying(Stack[-1])
0x5e6: Pop(0)
0x5e7: Pop(0); Push((bool) Stack[-1] == 0)
0x5e8: IF (Stack[-1] == 0) GOTO 0x5ea; Pop(1)

0x5e9: GOTO 0x5f3

0x5ea: PushEmpty(bool)
0x5eb: Call2 0x642

0x5ec: Pop(0)
0x5ed: IF (Stack[-1] == 0) GOTO 0x5f0; Pop(1)

0x5ee: Stack[-6] = (bool) 1
0x5ef: Return(); Pop(4)

0x5f0: @ sync()
0x5f1: Pop(0)
0x5f2: GOTO 0x5e5

0x5f3: GOTO 0x5f9

0x5f4: @ WaitForAnimEnd()
0x5f5: Pop(0)
0x5f6: PushEmpty()
0x5f7: Call2 0x6aa

0x5f8: Pop(0)
0x5f9: Stack[-6] = (bool) 0
0x5fa: Return(); Pop(4)

0x5fb: PushEmpty(bool, cvector, cvector, cvector, float, bool, cvector, cvector, cvector, float)
0x5fc: @ IsAnimationPlaying(Stack[-5])
0x5fd: Pop(0)
0x5fe: Pop(0); Push((bool) Stack[-5] == 0)
0x5ff: IF (Stack[-1] == 0) GOTO 0x601; Pop(1)

0x600: GOTO 0x621

0x601: PushEmpty(bool)
0x602: Call2 0x642

0x603: Pop(0)
0x604: IF (Stack[-1] == 0) GOTO 0x607; Pop(1)

0x605: Stack[-12] = (bool) 1
0x606: Return(); Pop(10)

0x607: PushEmpty(bool, object)
0x608: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x609: Call2 0x92c

0x60a: Pop(1)
0x60b: Pop(1); Push((bool) Stack[-1] == 0)
0x60c: IF (Stack[-1] == 0) GOTO 0x60f; Pop(1)

0x60d: Stack[-12] = (bool) 0
0x60e: Return(); Pop(10)

0x60f: @@ GetPFPosition(Stack[-4])
0x610: Pop(0)
0x611: @ GetPFPosition(Stack[-3])
0x612: Pop(0)
0x613: Stack[-2] = Stack[-4] - Stack[-3]; Pop(0);
0x614: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x615: Pop(0); Push(Stack[-11] * Stack[-11]);
0x616: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x617: IF (Stack[-1] == 0) GOTO 0x61e; Pop(1)

0x618: PushEmpty(bool, float)
0x619: Stack[-1] = Stack[-13]
0x61a: Call2 0x557

0x61b: Pop(2)
0x61c: Stack[-12] = (bool) 1
0x61d: Return(); Pop(10)

0x61e: @ sync()
0x61f: Pop(0)
0x620: GOTO 0x5fc

0x621: PushEmpty()
0x622: Call2 0x6aa

0x623: Pop(0)
0x624: Stack[-12] = (bool) 0
0x625: Return(); Pop(10)

0x626: PushEmpty(cvector, cvector, cvector, float, float, cvector, cvector, cvector, float, float)
0x627: PushEmpty(bool, object)
0x628: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x629: Call2 0x92c

0x62a: Pop(1)
0x62b: Pop(1); Push((bool) Stack[-1] == 0)
0x62c: IF (Stack[-1] == 0) GOTO 0x62f; Pop(1)

0x62d: Stack[-11] = (bool) 0
0x62e: Return(); Pop(10)

0x62f: PushEmpty(bool)
0x630: Call2 0x67f

0x631: Pop(0)
0x632: IF (Stack[-1] == 0) GOTO 0x640; Pop(1)

0x633: @@ GetPFPosition(Stack[-5])
0x634: Pop(0)
0x635: @ GetPFPosition(Stack[-4])
0x636: Pop(0)
0x637: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x638: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x639: @@ GetAttackDistance(Stack[-1])
0x63a: Pop(0)
0x63b: Push((int) 50)
0x63c: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x63d: Pop(0); Push(Stack[-1] * Stack[-1]);
0x63e: Stack[-12] = Stack[-3] <= Stack[-1]; Pop(1);
0x63f: Return(); Pop(10)

0x640: Stack[-11] = (bool) 0
0x641: Return(); Pop(10)

0x642: PushEmpty(bool)
0x643: Stack[-1] = (bool) 0
0x644: PushEmpty(bool)
0x645: Call2 0x626

0x646: Pop(0)
0x647: IF (Stack[-1] == 0) GOTO 0x64d; Pop(1)

0x648: PushEmpty(bool)
0x649: Call2 0x652

0x64a: Pop(0)
0x64b: IF (Stack[-1] == 0) GOTO 0x64d; Pop(1)

0x64c: Stack[-1] = (bool) 1
0x64d: IF (Stack[-1] == 0) GOTO 0x650; Pop(1)

0x64e: Stack[-1] = (bool) 1
0x64f: Return(); Pop(0)

0x650: Stack[-1] = (bool) 0
0x651: Return(); Pop(0)

0x652: PushEmpty(object, bool, float, cvector, cvector, object, bool, float, cvector, cvector)
0x653: @ GetScene(Stack[-5])
0x654: Pop(0)
0x655: Stack[-4] = (bool) 0
0x656: PushEmpty(cvector, object)
0x657: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x658: Call2 0x89a

0x659: Pop(1)
0x65a: Pop(1); Push(( -Stack[-1])
0x65b: @ FindDirLength(Stack[-4], Stack[-1], Stack[-4])
0x65c: Pop(1)
0x65d: Pop(0); Push((bool) Stack[-3] < Stack[4 + Tasks[-1].StackPointer])
0x65e: IF (Stack[-1] == 0) GOTO 0x660; Pop(1)

0x65f: GOTO 0x67c

0x660: @ Face(Stack[-0])
0x661: Pop(0)
0x662: Push("all")
0x663: Push("bjump")
0x664: @ PlayAnimation(Stack[-2], Stack[-1])
0x665: Pop(2)
0x666: @@ GetPFPosition(Stack[-2])
0x667: Pop(0)
0x668: @ GetPFPosition(Stack[-1])
0x669: Pop(0)
0x66a: @ WaitForAnimEnd()
0x66b: Pop(0)
0x66c: PushEmpty()
0x66d: Call2 0x6aa

0x66e: Pop(0)
0x66f: @ StopAsync()
0x670: Pop(0)
0x671: Push(CVector(0.0, 0.0, 0.0))
0x672: @ SetSpeed(Stack[-1])
0x673: Pop(1)
0x674: Stack[-4] = (bool) 1
0x675: PushEmpty(bool)
0x676: Call2 0x626

0x677: Pop(0)
0x678: Pop(1); Push((bool) Stack[-1] == 0)
0x679: IF (Stack[-1] == 0) GOTO 0x67b; Pop(1)

0x67a: GOTO 0x67c

0x67b: GOTO 0x656

0x67c: Stack[-11] = Stack[-4]
0x67d: Return(); Pop(10)

0x67e: Stack[-5] = 0
0x67f: PushEmpty(bool, bool)
0x680: Push("IsAttacking")
0x681: Push((int) 1)
0x682: Pop(2); Push(IsFuncExist(Stack[0 + Tasks[-1].StackPointer], Stack[-2], Stack[-1]))
0x683: IF (Stack[-1] == 0) GOTO 0x688; Pop(1)

0x684: @@ IsAttacking(Stack[-1])
0x685: Pop(0)
0x686: Stack[-3] = Stack[-1]
0x687: Return(); Pop(2)

0x688: Stack[-3] = (bool) 0
0x689: Return(); Pop(2)

0x68a: PushEmpty(float, int, float, int)
0x68b: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x68c: IF (Stack[-1] == 0) GOTO 0x68e; Pop(1)

0x68d: Return(); Pop(4)

0x68e: Push( Stack[5 + Tasks[-1].StackPointer] )
0x68f: IF (Stack[-1] == 0) GOTO 0x696; Pop(1)

0x690: Push((int) -1)
0x691: Stack[5 + Tasks[-1].StackPointer] = Stack[5 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x692: Push((int) 0)
0x693: Pop(1); Push((bool) Stack[5 + Tasks[-1].StackPointer] > Stack[-1])
0x694: IF (Stack[-1] == 0) GOTO 0x696; Pop(1)

0x695: Return(); Pop(4)

0x696: @ rand(Stack[-2])
0x697: Pop(0)
0x698: PushEmpty(float)
0x699: Call2 0x6bc

0x69a: Pop(0)
0x69b: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x69c: IF (Stack[-1] == 0) GOTO 0x6a9; Pop(1)

0x69d: @ irand(Stack[-1], Stack[-2])
0x69e: Pop(0)
0x69f: Push((int) 1)
0x6a0: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x6a1: Push("attack")
0x6a2: Pop(1); Push(Stack[-1] + Stack[-2]);
0x6a3: @ Speak(Stack[-1])
0x6a4: Pop(1)
0x6a5: PushEmpty(int)
0x6a6: Call2 0x6ba

0x6a7: Stack[5 + Tasks[-1].StackPointer] = Stack[-1]
0x6a8: Pop(1)
0x6a9: Return(); Pop(4)

0x6aa: PushEmpty(object)
0x6ab: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x6ac: Call2 0xa65

0x6ad: Pop(1)
0x6ae: Return(); Pop(0)

0x6af: Stack[-1] = (int) 0
0x6b0: Return(); Pop(0)

0x6b1: PushEmpty(string)
0x6b2: Stack[-1] = "attack_stay"
0x6b3: Call2 0x9dd

0x6b4: Pop(1)
0x6b5: Return(); Pop(0)

0x6b6: PushEmpty()
0x6b7: Return(); Pop(0)

0x6b8: Stack[-1] = (bool) 1
0x6b9: Return(); Pop(0)

0x6ba: Stack[-1] = (int) 1
0x6bb: Return(); Pop(0)

0x6bc: Stack[-1] = (float) 0.5
0x6bd: Return(); Pop(0)

0x6be: PushEmpty()
0x6bf: Call2 0x704

0x6c0: Pop(0)
0x6c1: PushEmpty()
0x6c2: Call2 0xbe9

0x6c3: Pop(0)
0x6c4: Return(); Pop(0)

0x6c5: PushEmpty(bool, bool, bool, bool)
0x6c6: PushEmpty(object)
0x6c7: Stack[-1] = Stack[-10]
0x6c8: Call2 0xa65

0x6c9: Pop(1)
0x6ca: Push((int) 1)
0x6cb: Push((int) 5)
0x6cc: @ SetTimer(Stack[-2], Stack[-1])
0x6cd: Pop(2)
0x6ce: @ CanSee(Stack[-2], Stack[-9])
0x6cf: Pop(0)
0x6d0: Push(Stack[-2])
0x6d1: IF (Stack[-1] == 0) GOTO 0x6d8; Pop(1)

0x6d2: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x6d3: PushEmpty(object)
0x6d4: Stack[-1] = Stack[-10]
0x6d5: Call2 0x9d2

0x6d6: Pop(1)
0x6d7: GOTO 0x6d9

0x6d8: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x6d9: PushEmpty(bool, object)
0x6da: Stack[-1] = Stack[-11]
0x6db: Call2 0x8a9

0x6dc: Pop(1)
0x6dd: IF (Stack[-1] == 0) GOTO 0x6e3; Pop(1)

0x6de: PushEmpty(object)
0x6df: Call2 0xa06

0x6e0: Pop(0)
0x6e1: @ SendPlayerEnemy(Stack[-10], Stack[-1])
0x6e2: Pop(1)
0x6e3: PushEmpty(bool, object, float, float, bool, bool)
0x6e4: Stack[-5] = Stack[-15]
0x6e5: Stack[-4] = Stack[-14]
0x6e6: Stack[-3] = Stack[-13]
0x6e7: Stack[-2] = Stack[-12]
0x6e8: Stack[-1] = Stack[-11]
0x6e9: Call2 0x72e

0x6ea: Stack[-7] = Stack[-6]
0x6eb: Pop(6)
0x6ec: Push( Stack[2 + Tasks[-1].StackPointer] )
0x6ed: IF (Stack[-1] == 0) GOTO 0x6f1; Pop(1)

0x6ee: Push("head")
0x6ef: @ UnlookAsync(Stack[-1])
0x6f0: Pop(1)
0x6f1: Push((int) 1)
0x6f2: @ KillTimer(Stack[-1])
0x6f3: Pop(1)
0x6f4: Stack[-10] = Stack[-1]
0x6f5: Return(); Pop(4)

0x6f6: PushEmpty()
0x6f7: Push((int) 1)
0x6f8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6f9: IF (Stack[-1] == 0) GOTO 0x6ff; Pop(1)

0x6fa: PushEmpty(object)
0x6fb: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6fc: Call2 0xa65

0x6fd: Pop(1)
0x6fe: GOTO 0x703

0x6ff: PushEmpty(int)
0x700: Stack[-1] = Stack[-2]
0x701: Call2 0x794

0x702: Pop(1)
0x703: Return(); Pop(0)

0x704: Push((int) 1)
0x705: @ KillTimer(Stack[-1])
0x706: Pop(1)
0x707: Push( Stack[2 + Tasks[-1].StackPointer] )
0x708: IF (Stack[-1] == 0) GOTO 0x70d; Pop(1)

0x709: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x70a: Push("head")
0x70b: @ UnlookAsync(Stack[-1])
0x70c: Pop(1)
0x70d: PushEmpty()
0x70e: Call2 0x7aa

0x70f: Pop(0)
0x710: Return(); Pop(0)

0x711: PushEmpty()
0x712: PushEmpty(bool)
0x713: Stack[-1] = (bool) 0
0x714: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0x715: IF (Stack[-1] == 0) GOTO 0x719; Pop(1)

0x716: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x717: IF (Stack[-1] == 0) GOTO 0x719; Pop(1)

0x718: Stack[-1] = (bool) 1
0x719: IF (Stack[-1] == 0) GOTO 0x71f; Pop(1)

0x71a: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x71b: PushEmpty(object)
0x71c: Stack[-1] = Stack[-2]
0x71d: Call2 0x9d2

0x71e: Pop(1)
0x71f: Return(); Pop(0)

0x720: PushEmpty()
0x721: PushEmpty(bool)
0x722: Stack[-1] = (bool) 0
0x723: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0x724: IF (Stack[-1] == 0) GOTO 0x728; Pop(1)

0x725: Push( Stack[2 + Tasks[-1].StackPointer] )
0x726: IF (Stack[-1] == 0) GOTO 0x728; Pop(1)

0x727: Stack[-1] = (bool) 1
0x728: IF (Stack[-1] == 0) GOTO 0x72d; Pop(1)

0x729: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x72a: Push("head")
0x72b: @ UnlookAsync(Stack[-1])
0x72c: Pop(1)
0x72d: Return(); Pop(0)

0x72e: PushEmpty(bool, bool, object, cvector, cvector, cvector, float, object, bool, bool, object, cvector, cvector, cvector, float, object)
0x72f: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x730: Stack[1 + Tasks[-1].StackPointer] = Stack[-21]
0x731: Stack[-7] = Stack[-17]
0x732: PushEmpty(bool, object)
0x733: Stack[-1] = Stack[-23]
0x734: Call2 0x7ba

0x735: Pop(1)
0x736: Pop(1); Push((bool) Stack[-1] == 0)
0x737: IF (Stack[-1] == 0) GOTO 0x73a; Pop(1)

0x738: Stack[-22] = (bool) 0
0x739: Return(); Pop(16)

0x73a: @@ GetPosition(Stack[-5])
0x73b: Pop(0)
0x73c: @ GetPosition(Stack[-4])
0x73d: Pop(0)
0x73e: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x73f: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x740: PushEmpty(bool)
0x741: Stack[-1] = (bool) 0
0x742: Push((int) 0)
0x743: Pop(1); Push((bool) Stack[-21] > Stack[-1])
0x744: IF (Stack[-1] == 0) GOTO 0x749; Pop(1)

0x745: Pop(0); Push(Stack[-20] * Stack[-20]);
0x746: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x747: IF (Stack[-1] == 0) GOTO 0x749; Pop(1)

0x748: Stack[-1] = (bool) 1
0x749: IF (Stack[-1] == 0) GOTO 0x74e; Pop(1)

0x74a: @ Stop()
0x74b: Pop(0)
0x74c: Stack[-22] = (bool) 0
0x74d: Return(); Pop(16)

0x74e: Pop(0); Push(Stack[-20] * Stack[-20]);
0x74f: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x750: IF (Stack[-1] == 0) GOTO 0x78c; Pop(1)

0x751: @@ GetPFPosition(Stack[-5])
0x752: Pop(0)
0x753: @ FindPathTo(Stack[-1], Stack[-5])
0x754: Pop(0)
0x755: Pop(0); Push(( Stack[-1] != 0 )
0x756: IF (Stack[-1] == 0) GOTO 0x759; Pop(1)

0x757: Stack[-6] = Stack[-1]
0x758: Stack[-1] = 0
0x759: Pop(0); Push(( Stack[-6] != 0 )
0x75a: IF (Stack[-1] == 0) GOTO 0x77a; Pop(1)

0x75b: Push(Stack[-7])
0x75c: IF (Stack[-1] == 0) GOTO 0x763; Pop(1)

0x75d: Stack[-7] = (bool) 0
0x75e: @ RotatePath(Stack[-6], Stack[-8])
0x75f: Pop(0)
0x760: Pop(0); Push((bool) Stack[-8] == 0)
0x761: IF (Stack[-1] == 0) GOTO 0x763; Pop(1)

0x762: GOTO 0x792

0x763: Push((int) 0)
0x764: Push((float)0.3)
0x765: @ SetTimer(Stack[-2], Stack[-1])
0x766: Pop(2)
0x767: PushEmpty(string)
0x768: Call2 0x7c1

0x769: Pop(0)
0x76a: PushEmpty(string)
0x76b: Call2 0x7c3

0x76c: Pop(0)
0x76d: @ FollowPath(Stack[-8], Stack[-20], Stack[-10], Stack[-2], Stack[-1])
0x76e: Pop(2)
0x76f: Pop(0); Push((bool) Stack[-8] == 0)
0x770: IF (Stack[-1] == 0) GOTO 0x778; Pop(1)

0x771: Push( Stack[0 + Tasks[-1].StackPointer] )
0x772: IF (Stack[-1] == 0) GOTO 0x776; Pop(1)

0x773: Stack[-6] = 0
0x774: GOTO 0x792

0x775: GOTO 0x777

0x776: GOTO 0x791

0x777: GOTO 0x779

0x778: Stack[-6] = 0
0x779: GOTO 0x78a

0x77a: Push((int) 0)
0x77b: @ KillTimer(Stack[-1])
0x77c: Pop(1)
0x77d: Push((float)0.5)
0x77e: @ Sleep(Stack[-1], Stack[-9])
0x77f: Pop(1)
0x780: Pop(0); Push((bool) Stack[-8] == 0)
0x781: IF (Stack[-1] == 0) GOTO 0x786; Pop(1)

0x782: Push( Stack[0 + Tasks[-1].StackPointer] )
0x783: IF (Stack[-1] == 0) GOTO 0x786; Pop(1)

0x784: Stack[-6] = 0
0x785: GOTO 0x792

0x786: Push((int) 0)
0x787: Push((float)0.3)
0x788: @ SetTimer(Stack[-2], Stack[-1])
0x789: Pop(2)
0x78a: Stack[-1] = 0
0x78b: GOTO 0x790

0x78c: Push((int) 0)
0x78d: @ KillTimer(Stack[-1])
0x78e: Pop(1)
0x78f: GOTO 0x792

0x790: Stack[-6] = 0
0x791: GOTO 0x732

0x792: Stack[-22] = !Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x793: Return(); Pop(16)

0x794: PushEmpty()
0x795: Push((int) 0)
0x796: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x797: IF (Stack[-1] == 0) GOTO 0x799; Pop(1)

0x798: Return(); Pop(0)

0x799: PushEmpty(bool, object)
0x79a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x79b: Call2 0x7ba

0x79c: Pop(1)
0x79d: Pop(1); Push((bool) Stack[-1] == 0)
0x79e: IF (Stack[-1] == 0) GOTO 0x7a0; Pop(1)

0x79f: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x7a0: Push((int) 0)
0x7a1: @ KillTimer(Stack[-1])
0x7a2: Pop(1)
0x7a3: @ Stop()
0x7a4: Pop(0)
0x7a5: Return(); Pop(0)

0x7a6: PushEmpty()
0x7a7: @ RequestClearPath(Stack[-1])
0x7a8: Pop(0)
0x7a9: Return(); Pop(0)

0x7aa: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x7ab: Push((int) 0)
0x7ac: @ KillTimer(Stack[-1])
0x7ad: Pop(1)
0x7ae: @ Stop()
0x7af: Pop(0)
0x7b0: Return(); Pop(0)

0x7b1: PushEmpty()
0x7b2: PushEmpty()
0x7b3: Call2 0x704

0x7b4: Pop(0)
0x7b5: PushEmpty(object)
0x7b6: Stack[-1] = Stack[-2]
0x7b7: Call2 0xa8e

0x7b8: Pop(1)
0x7b9: Return(); Pop(0)

0x7ba: PushEmpty()
0x7bb: PushEmpty(bool, object)
0x7bc: Stack[-1] = Stack[-3]
0x7bd: Call2 0x92c

0x7be: Stack[-4] = Stack[-2]
0x7bf: Pop(2)
0x7c0: Return(); Pop(0)

0x7c1: Stack[-1] = "walk"
0x7c2: Return(); Pop(0)

0x7c3: Stack[-1] = "run"
0x7c4: Return(); Pop(0)

0x7c5: PushEmpty()
0x7c6: Call2 0x867

0x7c7: Pop(0)
0x7c8: PushEmpty()
0x7c9: Call2 0xbe9

0x7ca: Pop(0)
0x7cb: Return(); Pop(0)

0x7cc: PushEmpty(cvector, cvector, cvector, cvector, cvector, float, cvector, cvector, cvector, cvector, cvector, float)
0x7cd: @ GetPosition(Stack[-6])
0x7ce: Pop(0)
0x7cf: @@ GetPosition(Stack[-5])
0x7d0: Pop(0)
0x7d1: @ GetDirection(Stack[-4])
0x7d2: Pop(0)
0x7d3: PushEmpty(cvector, cvector)
0x7d4: PushEmpty(cvector, cvector)
0x7d5: Stack[-1] = Stack[-10] - Stack[-9]; Pop(0);
0x7d6: Call2 0xa0c

0x7d7: Pop(1)
0x7d8: Push((float)0.75)
0x7d9: Pop(1); Push(Stack[-8] * Stack[-1]);
0x7da: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x7db: Call2 0xa0c

0x7dc: Stack[-5] = Stack[-2]
0x7dd: Pop(2)
0x7de: Push((int) 32)
0x7df: Push((float)7000.0)
0x7e0: @ FindLongestDir(Stack[-4], Stack[-3], Stack[-5], Stack[-15], Stack[-2], Stack[-1])
0x7e1: Pop(2)
0x7e2: Push((int) 100)
0x7e3: Stack[-2] = Stack[-2] - Stack[-1]; Pop(1);
0x7e4: Push((int) 0)
0x7e5: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x7e6: IF (Stack[-1] == 0) GOTO 0x7e8; Pop(1)

0x7e7: Stack[-1] = (int) 0
0x7e8: Stack[-14] = Stack[-2] * Stack[-1]; Pop(0);
0x7e9: Return(); Pop(12)

0x7ea: PushEmpty(cvector, float, bool, cvector, float, cvector, float, bool, cvector, float)
0x7eb: Stack[0 + Tasks[-1].StackPointer] = Stack[-11]
0x7ec: PushEmpty(cvector, float)
0x7ed: Stack[-1] = (float) 1.74533
0x7ee: Call2 0x7cc

0x7ef: Stack[-7] = Stack[-2]
0x7f0: Pop(2)
0x7f1: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x7f2: Push((float)2500.0)
0x7f3: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x7f4: IF (Stack[-1] == 0) GOTO 0x807; Pop(1)

0x7f5: PushEmpty(cvector, float)
0x7f6: Stack[-1] = (float) 2.61799
0x7f7: Call2 0x7cc

0x7f8: Stack[-7] = Stack[-2]
0x7f9: Pop(2)
0x7fa: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x7fb: Push((float)2500.0)
0x7fc: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x7fd: IF (Stack[-1] == 0) GOTO 0x807; Pop(1)

0x7fe: Push("Can't retreat, distance: ")
0x7ff: Pop(0); Push(Sqrt(Stack[-5]))
0x800: Pop(2); Push(Stack[-2] + Stack[-1]);
0x801: @ Trace(Stack[-1])
0x802: Pop(1)
0x803: Push((float)0.5)
0x804: @ Sleep(Stack[-1])
0x805: Pop(1)
0x806: Return(); Pop(10)

0x807: Push(CvectorIndex(Stack[-5], 0))
0x808: Push(CvectorIndex(Stack[-6], 2))
0x809: @ Rotate(Stack[-2], Stack[-1])
0x80a: Pop(2)
0x80b: PushEmpty(cvector)
0x80c: Call2 0x895

0x80d: Pop(0)
0x80e: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-6]; Pop(1);
0x80f: Push((int) 120)
0x810: Push((float)0.5)
0x811: @ SetTimer(Stack[-2], Stack[-1])
0x812: Pop(2)
0x813: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x814: Push((int) 1)
0x815: @ MovePoint(Stack[-1], Stack[-1], Stack[-4])
0x816: Pop(1)
0x817: Push(Stack[-3])
0x818: IF (Stack[-1] == 0) GOTO 0x830; Pop(1)

0x819: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x81a: IF (Stack[-1] == 0) GOTO 0x81d; Pop(1)

0x81b: GOTO 0x832

0x81c: GOTO 0x830

0x81d: PushEmpty(cvector, float)
0x81e: Stack[-1] = (float) 2.61799
0x81f: Call2 0x7cc

0x820: Stack[-4] = Stack[-2]
0x821: Pop(2)
0x822: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x823: Push((float)2500.0)
0x824: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x825: IF (Stack[-1] == 0) GOTO 0x82f; Pop(1)

0x826: PushEmpty(cvector)
0x827: Call2 0x895

0x828: Pop(0)
0x829: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x82a: Push((int) 120)
0x82b: Push((float)0.5)
0x82c: @ SetTimer(Stack[-2], Stack[-1])
0x82d: Pop(2)
0x82e: GOTO 0x830

0x82f: GOTO 0x832

0x830: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x831: IF (Stack[-1] == 0) GOTO 0x814; Pop(1)

0x832: Return(); Pop(10)

0x833: PushEmpty(cvector, float, cvector, float, cvector, float, cvector, float)
0x834: Push((int) 120)
0x835: Pop(1); Push((bool) Stack[-10] != Stack[-1])
0x836: IF (Stack[-1] == 0) GOTO 0x838; Pop(1)

0x837: Return(); Pop(8)

0x838: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x839: IF (Stack[-1] == 0) GOTO 0x841; Pop(1)

0x83a: @ Stop()
0x83b: Pop(0)
0x83c: Push((int) 1)
0x83d: @ KillTimer(Stack[-1])
0x83e: Pop(1)
0x83f: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x840: GOTO 0x866

0x841: @ GetDirection(Stack[-4])
0x842: Pop(0)
0x843: Push((float)7000.0)
0x844: @ FindDirLength(Stack[-4], Stack[-5], Stack[-1])
0x845: Pop(1)
0x846: PushEmpty(cvector, float)
0x847: Stack[-1] = (float) 1.74533
0x848: Call2 0x7cc

0x849: Stack[-4] = Stack[-2]
0x84a: Pop(2)
0x84b: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x84c: PushEmpty(bool)
0x84d: Stack[-1] = (bool) 0
0x84e: Push((float)2500.0)
0x84f: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x850: IF (Stack[-1] == 0) GOTO 0x85f; Pop(1)

0x851: PushEmpty(bool)
0x852: Stack[-1] = (bool) 1
0x853: Pop(0); Push(Stack[-5] * Stack[-5]);
0x854: Push((float)2.25)
0x855: Pop(2); Push(Stack[-2] * Stack[-1]);
0x856: Pop(1); Push((bool) Stack[-4] >= Stack[-1])
0x857: IF (Stack[-1] == 0) GOTO 0x85d; Pop(1)

0x858: PushEmpty(bool)
0x859: Call2 0x877

0x85a: Pop(0)
0x85b: IF (Stack[-1] == 0) GOTO 0x85d; Pop(1)

0x85c: Stack[-1] = (bool) 0
0x85d: IF (Stack[-1] == 0) GOTO 0x85f; Pop(1)

0x85e: Stack[-1] = (bool) 1
0x85f: IF (Stack[-1] == 0) GOTO 0x866; Pop(1)

0x860: @ Stop()
0x861: Pop(0)
0x862: PushEmpty(cvector)
0x863: Call2 0x895

0x864: Pop(0)
0x865: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x866: Return(); Pop(8)

0x867: @ Stop()
0x868: Pop(0)
0x869: Push((int) 120)
0x86a: @ KillTimer(Stack[-1])
0x86b: Pop(1)
0x86c: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x86d: Return(); Pop(0)

0x86e: PushEmpty()
0x86f: PushEmpty()
0x870: Call2 0x867

0x871: Pop(0)
0x872: PushEmpty(object)
0x873: Stack[-1] = Stack[-2]
0x874: Call2 0xa8e

0x875: Pop(1)
0x876: Return(); Pop(0)

0x877: PushEmpty(cvector, cvector, cvector, cvector)
0x878: @ GetDirection(Stack[-2])
0x879: Pop(0)
0x87a: PushEmpty(cvector, object)
0x87b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x87c: Call2 0x89a

0x87d: Stack[-3] = Stack[-2]
0x87e: Pop(2)
0x87f: PushEmpty(float, cvector, cvector)
0x880: Stack[-2] = Stack[-5]
0x881: Stack[-1] = Stack[-4]
0x882: Call2 0xa28

0x883: Pop(2)
0x884: Push((float)-0.34202)
0x885: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0x886: Return(); Pop(4)

0x887: PushEmpty()
0x888: Push((int) 2)
0x889: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x88a: IF (Stack[-1] == 0) GOTO 0x88e; Pop(1)

0x88b: Stack[-2] = "fire"
0x88c: Return(); Pop(0)

0x88d: GOTO 0x893

0x88e: Push((int) 1)
0x88f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x890: IF (Stack[-1] == 0) GOTO 0x893; Pop(1)

0x891: Stack[-2] = "bullet"
0x892: Return(); Pop(0)

0x893: Stack[-2] = "phys"
0x894: Return(); Pop(0)

0x895: PushEmpty(cvector, cvector)
0x896: @ GetPosition(Stack[-1])
0x897: Pop(0)
0x898: Stack[-3] = Stack[-1]
0x899: Return(); Pop(2)

0x89a: PushEmpty(cvector, cvector, cvector, cvector)
0x89b: @ GetPosition(Stack[-2])
0x89c: Pop(0)
0x89d: @@ GetPosition(Stack[-1])
0x89e: Pop(0)
0x89f: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x8a0: Return(); Pop(4)

0x8a1: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x8a2: @ GetPosition(Stack[-3])
0x8a3: Pop(0)
0x8a4: @@ GetPosition(Stack[-2])
0x8a5: Pop(0)
0x8a6: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x8a7: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x8a8: Return(); Pop(6)

0x8a9: PushEmpty(bool, bool)
0x8aa: @ IsPlayerActor(Stack[-3], Stack[-1])
0x8ab: Pop(0)
0x8ac: Stack[-4] = Stack[-1]
0x8ad: Return(); Pop(2)

0x8ae: PushEmpty(bool, bool)
0x8af: Push("HasProperty")
0x8b0: Push((int) 2)
0x8b1: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x8b2: Pop(1); Push((bool) Stack[-1] == 0)
0x8b3: IF (Stack[-1] == 0) GOTO 0x8b6; Pop(1)

0x8b4: Stack[-5] = (bool) 0
0x8b5: Return(); Pop(2)

0x8b6: @@ HasProperty(Stack[-3], Stack[-1])
0x8b7: Pop(0)
0x8b8: Stack[-5] = Stack[-1]
0x8b9: Return(); Pop(2)

0x8ba: PushEmpty(int, string, int, float, float, float, int, string, int, float, float, float)
0x8bb: PushEmpty(bool, object, string)
0x8bc: Stack[-2] = Stack[-18]
0x8bd: Stack[-1] = "health"
0x8be: Call2 0x8ae

0x8bf: Pop(2)
0x8c0: Pop(1); Push((bool) Stack[-1] == 0)
0x8c1: IF (Stack[-1] == 0) GOTO 0x8c4; Pop(1)

0x8c2: Stack[-16] = (float) 0.0
0x8c3: Return(); Pop(12)

0x8c4: PushEmpty(bool, object, string)
0x8c5: Stack[-2] = Stack[-18]
0x8c6: Stack[-1] = "armor"
0x8c7: Call2 0x8ae

0x8c8: Pop(2)
0x8c9: Pop(1); Push((bool) Stack[-1] == 0)
0x8ca: IF (Stack[-1] == 0) GOTO 0x8cd; Pop(1)

0x8cb: Stack[-6] = (int) 0
0x8cc: GOTO 0x8d0

0x8cd: Push("armor")
0x8ce: @@ GetProperty(Stack[-1], Stack[-7])
0x8cf: Pop(1)
0x8d0: Push("armor_")
0x8d1: PushEmpty(string, int)
0x8d2: Stack[-1] = Stack[-16]
0x8d3: Call2 0x887

0x8d4: Pop(1)
0x8d5: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x8d6: PushEmpty(bool, object, string)
0x8d7: Stack[-2] = Stack[-18]
0x8d8: Stack[-1] = Stack[-8]
0x8d9: Call2 0x8ae

0x8da: Pop(2)
0x8db: Pop(1); Push((bool) Stack[-1] == 0)
0x8dc: IF (Stack[-1] == 0) GOTO 0x8df; Pop(1)

0x8dd: Stack[-4] = (int) 0
0x8de: GOTO 0x8e1

0x8df: @@ GetProperty(Stack[-5], Stack[-4])
0x8e0: Pop(0)
0x8e1: PushEmpty(float, float, float)
0x8e2: Pop(0); Push(Stack[-9] + Stack[-7]);
0x8e3: Push((float)100.0)
0x8e4: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0x8e5: Stack[-1] = (int) 1
0x8e6: Call2 0xa16

0x8e7: Stack[-6] = Stack[-3]
0x8e8: Pop(3)
0x8e9: Push("health")
0x8ea: @@ GetProperty(Stack[-1], Stack[-3])
0x8eb: Pop(1)
0x8ec: Push((int) 1)
0x8ed: Pop(1); Push(Stack[-1] - Stack[-4]);
0x8ee: Stack[-2] = Stack[-15] * Stack[-1]; Pop(1);
0x8ef: Push("health")
0x8f0: PushEmpty(float, float, float, float)
0x8f1: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0x8f2: Stack[-2] = (int) 0
0x8f3: Stack[-1] = (int) 1
0x8f4: Call2 0xa1d

0x8f5: Pop(3)
0x8f6: @@ SetProperty(Stack[-2], Stack[-1])
0x8f7: Pop(2)
0x8f8: PushEmpty(bool, object)
0x8f9: Stack[-1] = Stack[-17]
0x8fa: Call2 0x8a9

0x8fb: Pop(1)
0x8fc: IF (Stack[-1] == 0) GOTO 0x901; Pop(1)

0x8fd: PushEmpty(float)
0x8fe: Stack[-1] = -Stack[-2]; Pop(0);
0x8ff: Call2 0xa54

0x900: Pop(1)
0x901: Stack[-16] = Stack[-1]
0x902: Return(); Pop(12)

0x903: PushEmpty(bool, bool)
0x904: @@ IsDead(Stack[-1])
0x905: Pop(0)
0x906: Stack[-4] = Stack[-1]
0x907: Return(); Pop(2)

0x908: PushEmpty(object, object, object, object)
0x909: Pop(0); Push((bool) Stack[-5] == 0)
0x90a: IF (Stack[-1] == 0) GOTO 0x90d; Pop(1)

0x90b: Stack[-6] = (bool) 0
0x90c: Return(); Pop(4)

0x90d: PushEmpty(bool)
0x90e: Stack[-1] = (bool) 0
0x90f: Push("IsDead")
0x910: Push((int) 1)
0x911: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x912: IF (Stack[-1] == 0) GOTO 0x919; Pop(1)

0x913: PushEmpty(bool, object)
0x914: Stack[-1] = Stack[-8]
0x915: Call2 0x903

0x916: Pop(1)
0x917: IF (Stack[-1] == 0) GOTO 0x919; Pop(1)

0x918: Stack[-1] = (bool) 1
0x919: IF (Stack[-1] == 0) GOTO 0x91c; Pop(1)

0x91a: Stack[-6] = (bool) 0
0x91b: Return(); Pop(4)

0x91c: @ GetScene(Stack[-2])
0x91d: Pop(0)
0x91e: Pop(0); Push((bool) Stack[-2] == 0)
0x91f: IF (Stack[-1] == 0) GOTO 0x922; Pop(1)

0x920: Stack[-6] = (bool) 0
0x921: Return(); Pop(4)

0x922: @@ GetScene(Stack[-1])
0x923: Pop(0)
0x924: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x925: IF (Stack[-1] == 0) GOTO 0x928; Pop(1)

0x926: Stack[-6] = (bool) 0
0x927: Return(); Pop(4)

0x928: Stack[-6] = (bool) 1
0x929: Return(); Pop(4)

0x92a: Stack[-1] = 0
0x92b: Stack[-2] = 0
0x92c: PushEmpty(int, int)
0x92d: PushEmpty(bool, object)
0x92e: Stack[-1] = Stack[-5]
0x92f: Call2 0x908

0x930: Pop(1)
0x931: Pop(1); Push((bool) Stack[-1] == 0)
0x932: IF (Stack[-1] == 0) GOTO 0x935; Pop(1)

0x933: Stack[-4] = (bool) 0
0x934: Return(); Pop(2)

0x935: PushEmpty(bool, object, string)
0x936: Stack[-2] = Stack[-6]
0x937: Stack[-1] = "noaccess"
0x938: Call2 0x8ae

0x939: Pop(2)
0x93a: Pop(1); Push((bool) Stack[-1] == 0)
0x93b: IF (Stack[-1] == 0) GOTO 0x93e; Pop(1)

0x93c: Stack[-4] = (bool) 1
0x93d: Return(); Pop(2)

0x93e: Push("noaccess")
0x93f: @@ GetProperty(Stack[-1], Stack[-2])
0x940: Pop(1)
0x941: Push((int) 0)
0x942: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x943: Return(); Pop(2)

0x944: PushEmpty(bool, int, cvector, cvector, cvector, cvector, string, bool, int, cvector, cvector, cvector, cvector, string)
0x945: Pop(0); Push((bool) Stack[-15] == 0)
0x946: IF (Stack[-1] == 0) GOTO 0x948; Pop(1)

0x947: Return(); Pop(14)

0x948: @ IsDead(Stack[-7])
0x949: Pop(0)
0x94a: Push(Stack[-7])
0x94b: IF (Stack[-1] == 0) GOTO 0x94d; Pop(1)

0x94c: Return(); Pop(14)

0x94d: @ GetSecondaryAnimationType(Stack[-6])
0x94e: Pop(0)
0x94f: Push((int) 0)
0x950: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x951: IF (Stack[-1] == 0) GOTO 0x953; Pop(1)

0x952: Return(); Pop(14)

0x953: @@ GetPosition(Stack[-5])
0x954: Pop(0)
0x955: @ GetPosition(Stack[-4])
0x956: Pop(0)
0x957: @ GetDirection(Stack[-3])
0x958: Pop(0)
0x959: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0x95a: Push(CvectorIndex(Stack[-2], 0))
0x95b: Push(CvectorIndex(Stack[-4], 0))
0x95c: Pop(2); Push(Stack[-2] * Stack[-1]);
0x95d: Push(CvectorIndex(Stack[-3], 2))
0x95e: Push(CvectorIndex(Stack[-5], 2))
0x95f: Pop(2); Push(Stack[-2] * Stack[-1]);
0x960: Pop(2); Push(Stack[-2] + Stack[-1]);
0x961: Push((int) 0)
0x962: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x963: IF (Stack[-1] == 0) GOTO 0x966; Pop(1)

0x964: Stack[-1] = "fhit"
0x965: GOTO 0x967

0x966: Stack[-1] = "bhit"
0x967: Push("hit_react")
0x968: Push("1")
0x969: Pop(1); Push(Stack[-3] + Stack[-1]);
0x96a: Push("2")
0x96b: Pop(1); Push(Stack[-4] + Stack[-1]);
0x96c: Push((int) -10)
0x96d: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x96e: Pop(4)
0x96f: Return(); Pop(14)

0x970: PushEmpty(cvector, object, int, bool, cvector, cvector, int, int, cvector, cvector, object, int, bool, cvector, cvector, int, int, cvector)
0x971: PushEmpty(bool)
0x972: Stack[-1] = (bool) 0
0x973: PushEmpty(bool)
0x974: Stack[-1] = (bool) 0
0x975: Push(Stack[-23])
0x976: IF (Stack[-1] == 0) GOTO 0x97b; Pop(1)

0x977: Push((int) 4)
0x978: Pop(1); Push((bool) Stack[-23] != Stack[-1])
0x979: IF (Stack[-1] == 0) GOTO 0x97b; Pop(1)

0x97a: Stack[-1] = (bool) 1
0x97b: IF (Stack[-1] == 0) GOTO 0x980; Pop(1)

0x97c: Push((int) 5)
0x97d: Pop(1); Push((bool) Stack[-22] != Stack[-1])
0x97e: IF (Stack[-1] == 0) GOTO 0x980; Pop(1)

0x97f: Stack[-1] = (bool) 1
0x980: IF (Stack[-1] == 0) GOTO 0x9af; Pop(1)

0x981: PushEmpty(cvector, cvector)
0x982: PushEmpty(cvector, object)
0x983: Stack[-1] = Stack[-25]
0x984: Call2 0x89a

0x985: Stack[-3] = Stack[-2]
0x986: Pop(2)
0x987: Call2 0xa0c

0x988: Stack[-11] = Stack[-2]
0x989: Pop(2)
0x98a: @ CreateVectorVector(Stack[-8])
0x98b: Pop(0)
0x98c: Stack[-7] = (int) 1
0x98d: Push("hit")
0x98e: Pop(1); Push(Stack[-1] + Stack[-8]);
0x98f: @ GetGeometryLocator(Stack[-1], Stack[-7], Stack[-6], Stack[-5])
0x990: Pop(1)
0x991: Pop(0); Push((bool) Stack[-6] == 0)
0x992: IF (Stack[-1] == 0) GOTO 0x994; Pop(1)

0x993: GOTO 0x99d

0x994: Pop(0); Push(Stack[-4] | Stack[-9]);
0x995: Push((float)0.70711)
0x996: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x997: IF (Stack[-1] == 0) GOTO 0x99a; Pop(1)

0x998: @@ add(Stack[-5])
0x999: Pop(0)
0x99a: Push((int) 1)
0x99b: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x99c: GOTO 0x98d

0x99d: @@ size(Stack[-3])
0x99e: Pop(0)
0x99f: Push(Stack[-3])
0x9a0: IF (Stack[-1] == 0) GOTO 0x9ae; Pop(1)

0x9a1: @ irand(Stack[-2], Stack[-3])
0x9a2: Pop(0)
0x9a3: @@ get(Stack[-1], Stack[-2])
0x9a4: Pop(0)
0x9a5: PushEmpty(object, int, float, cvector, cvector)
0x9a6: Stack[-5] = Stack[-26]
0x9a7: Stack[-4] = Stack[-25]
0x9a8: Stack[-3] = Stack[-24]
0x9a9: Stack[-2] = Stack[-6]
0x9aa: Stack[-1] = -Stack[-14]; Pop(0);
0x9ab: Call2 0x9b4

0x9ac: Pop(5)
0x9ad: Return(); Pop(18)

0x9ae: Stack[-8] = 0
0x9af: PushEmpty(object)
0x9b0: Stack[-1] = Stack[-22]
0x9b1: Call2 0x944

0x9b2: Pop(1)
0x9b3: Return(); Pop(18)

0x9b4: PushEmpty(object, object, object, object)
0x9b5: @ GetScene(Stack[-2])
0x9b6: Pop(0)
0x9b7: Push("scripted")
0x9b8: Push("blood_dir.xml")
0x9b9: @ AddActorByType(Stack[-3], Stack[-2], Stack[-4], Stack[-8], Stack[-7], Stack[-1])
0x9ba: Pop(2)
0x9bb: PushEmpty(object)
0x9bc: Stack[-1] = Stack[-10]
0x9bd: Call2 0x944

0x9be: Pop(1)
0x9bf: Return(); Pop(4)

0x9c0: Stack[-1] = 0
0x9c1: Stack[-2] = 0
0x9c2: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x9c3: @@ GetPosition(Stack[-3])
0x9c4: Pop(0)
0x9c5: @ GetPosition(Stack[-2])
0x9c6: Pop(0)
0x9c7: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0x9c8: Push(CvectorIndex(Stack[-1], 0))
0x9c9: Push(CvectorIndex(Stack[-2], 2))
0x9ca: @ RotateAsync(Stack[-2], Stack[-1])
0x9cb: Pop(2)
0x9cc: Return(); Pop(6)

0x9cd: PushEmpty(bool, bool)
0x9ce: @ IsLoaded(Stack[-1])
0x9cf: Pop(0)
0x9d0: Stack[-3] = Stack[-1]
0x9d1: Return(); Pop(2)

0x9d2: PushEmpty(float, cvector, float, cvector)
0x9d3: @@ GetEyesHeight(Stack[-2])
0x9d4: Pop(0)
0x9d5: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x9d6: Push(CvectorIndex(Stack[-1], 1))
0x9d7: Stack[-1] = Stack[-3]
0x9d8: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x9d9: Push("head")
0x9da: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x9db: Pop(1)
0x9dc: Return(); Pop(4)

0x9dd: PushEmpty(bool, int, bool, int, bool, float, cvector, cvector, bool, int, bool, int, bool, float, cvector, cvector)
0x9de: @ IsExisting3DSound(Stack[-8], Stack[-17])
0x9df: Pop(0)
0x9e0: Pop(0); Push((bool) Stack[-8] == 0)
0x9e1: IF (Stack[-1] == 0) GOTO 0x9f6; Pop(1)

0x9e2: Stack[-7] = (int) 0
0x9e3: Push((int) 1)
0x9e4: Pop(1); Push(Stack[-8] + Stack[-1]);
0x9e5: Pop(1); Push(Stack[-18] + Stack[-1]);
0x9e6: @ IsExisting3DSound(Stack[-7], Stack[-1])
0x9e7: Pop(1)
0x9e8: Pop(0); Push((bool) Stack[-6] == 0)
0x9e9: IF (Stack[-1] == 0) GOTO 0x9eb; Pop(1)

0x9ea: GOTO 0x9ee

0x9eb: Push((int) 1)
0x9ec: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x9ed: GOTO 0x9e3

0x9ee: Pop(0); Push((bool) Stack[-7] == 0)
0x9ef: IF (Stack[-1] == 0) GOTO 0x9f1; Pop(1)

0x9f0: Return(); Pop(16)

0x9f1: @ irand(Stack[-5], Stack[-7])
0x9f2: Pop(0)
0x9f3: Push((int) 1)
0x9f4: Pop(1); Push(Stack[-6] + Stack[-1]);
0x9f5: Stack[-18] = Stack[-18] + Stack[-1]; Pop(1);
0x9f6: @ Is3DSoundLoaded(Stack[-4], Stack[-17])
0x9f7: Pop(0)
0x9f8: Push(Stack[-4])
0x9f9: IF (Stack[-1] == 0) GOTO 0xa05; Pop(1)

0x9fa: @ GetEyesHeight(Stack[-3])
0x9fb: Pop(0)
0x9fc: @ GetDirection(Stack[-2])
0x9fd: Pop(0)
0x9fe: Push((int) 50)
0x9ff: Stack[-2] = Stack[-3] * Stack[-1]; Pop(1);
0xa00: Push(CvectorIndex(Stack[-1], 1))
0xa01: Stack[-1] = Stack[-1] + Stack[-4]; Pop(0);
0xa02: CvectorIndex(Stack[-2], 1) = Stack[-1];
0xa03: @ PlayGlobalSound(Stack[-17], Stack[-1])
0xa04: Pop(0)
0xa05: Return(); Pop(16)

0xa06: PushEmpty(object, object)
0xa07: @ self(Stack[-1])
0xa08: Pop(0)
0xa09: Stack[-3] = Stack[-1]
0xa0a: Return(); Pop(2)

0xa0b: Stack[-1] = 0
0xa0c: PushEmpty(float, float)
0xa0d: Pop(0); Push(Stack[-3] | Stack[-3]);
0xa0e: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0xa0f: Push((float)0.0)
0xa10: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xa11: IF (Stack[-1] == 0) GOTO 0xa14; Pop(1)

0xa12: Stack[-4] = CVector(0.0, 0.0, 0.0)
0xa13: Return(); Pop(2)

0xa14: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0xa15: Return(); Pop(2)

0xa16: PushEmpty()
0xa17: Pop(0); Push((bool) Stack[-2] < Stack[-1])
0xa18: IF (Stack[-1] == 0) GOTO 0xa1b; Pop(1)

0xa19: Stack[-3] = Stack[-2]
0xa1a: GOTO 0xa1c

0xa1b: Stack[-3] = Stack[-1]
0xa1c: Return(); Pop(0)

0xa1d: PushEmpty()
0xa1e: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0xa1f: IF (Stack[-1] == 0) GOTO 0xa22; Pop(1)

0xa20: Stack[-4] = Stack[-2]
0xa21: Return(); Pop(0)

0xa22: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0xa23: IF (Stack[-1] == 0) GOTO 0xa26; Pop(1)

0xa24: Stack[-4] = Stack[-1]
0xa25: Return(); Pop(0)

0xa26: Stack[-4] = Stack[-3]
0xa27: Return(); Pop(0)

0xa28: PushEmpty()
0xa29: Pop(0); Push(Stack[-2] | Stack[-1]);
0xa2a: Pop(0); Push(Stack[-3] | Stack[-3]);
0xa2b: Pop(0); Push(Stack[-3] | Stack[-3]);
0xa2c: Pop(2); Push(Stack[-2] * Stack[-1]);
0xa2d: Pop(1); Push(Sqrt(Stack[-1]))
0xa2e: Stack[-5] = Stack[-2] / Stack[-1]; Pop(2);
0xa2f: Return(); Pop(0)

0xa30: PushEmpty()
0xa31: Push(CvectorIndex(Stack[-2], 0))
0xa32: Push(CvectorIndex(Stack[-2], 0))
0xa33: Pop(2); Push(Stack[-2] * Stack[-1]);
0xa34: Push(CvectorIndex(Stack[-3], 2))
0xa35: Push(CvectorIndex(Stack[-3], 2))
0xa36: Pop(2); Push(Stack[-2] * Stack[-1]);
0xa37: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0xa38: Return(); Pop(0)

0xa39: PushEmpty()
0xa3a: Push(CvectorIndex(Stack[-1], 0))
0xa3b: Push(CvectorIndex(Stack[-2], 0))
0xa3c: Pop(2); Push(Stack[-2] * Stack[-1]);
0xa3d: Push(CvectorIndex(Stack[-2], 2))
0xa3e: Push(CvectorIndex(Stack[-3], 2))
0xa3f: Pop(2); Push(Stack[-2] * Stack[-1]);
0xa40: Pop(2); Push(Stack[-2] + Stack[-1]);
0xa41: Stack[-3] = Sqrt(Stack[-1]); Pop(1);
0xa42: Return(); Pop(0)

0xa43: PushEmpty()
0xa44: PushEmpty(float, cvector, cvector)
0xa45: Stack[-2] = Stack[-5]
0xa46: Stack[-1] = Stack[-4]
0xa47: Call2 0xa30

0xa48: Pop(2)
0xa49: PushEmpty(float, cvector)
0xa4a: Stack[-1] = Stack[-5]
0xa4b: Call2 0xa39

0xa4c: Pop(1)
0xa4d: PushEmpty(float, cvector)
0xa4e: Stack[-1] = Stack[-5]
0xa4f: Call2 0xa39

0xa50: Pop(1)
0xa51: Pop(2); Push(Stack[-2] * Stack[-1]);
0xa52: Stack[-5] = Stack[-2] / Stack[-1]; Pop(2);
0xa53: Return(); Pop(0)

0xa54: PushEmpty(object, object)
0xa55: @ CreateFloatVector(Stack[-1])
0xa56: Pop(0)
0xa57: @@ add(Stack[-3])
0xa58: Pop(0)
0xa59: Push((int) 0)
0xa5a: Pop(1); Push((bool) Stack[-4] < Stack[-1])
0xa5b: IF (Stack[-1] == 0) GOTO 0xa60; Pop(1)

0xa5c: Push((float)0.7)
0xa5d: Push((int) 500)
0xa5e: @ RumblePlay(Stack[-2], Stack[-1])
0xa5f: Pop(2)
0xa60: Push((int) 15)
0xa61: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0xa62: Pop(1)
0xa63: Return(); Pop(2)

0xa64: Stack[-1] = 0
0xa65: PushEmpty(bool, bool)
0xa66: @ IsPlayerActor(Stack[-3], Stack[-1])
0xa67: Pop(0)
0xa68: Push(Stack[-1])
0xa69: IF (Stack[-1] == 0) GOTO 0xa6d; Pop(1)

0xa6a: Push("attack")
0xa6b: @ PlayGlobalMusic(Stack[-1])
0xa6c: Pop(1)
0xa6d: Return(); Pop(2)

0xa6e: PushEmpty(object, object)
0xa6f: @ GetScene(Stack[-1])
0xa70: Pop(0)
0xa71: Push("battle")
0xa72: PushEmpty(object)
0xa73: Call2 0xa06

0xa74: Pop(0)
0xa75: @ BroadcastMessage(Stack[-2], Stack[-1], Stack[-3])
0xa76: Pop(2)
0xa77: Return(); Pop(2)

0xa78: Stack[-1] = 0
0xa79: PushEmpty()
0xa7a: PushEmpty(object)
0xa7b: Stack[-1] = Stack[-2]
0xa7c: Push(-1, 0); TaskCall(0)
0xa7d: Call2 0x0

0xa7e: Pop(-1, 0); TaskReturn
0xa7f: Pop(1)
0xa80: Return(); Pop(0)

0xa81: PushEmpty(float, float)
0xa82: Push("health")
0xa83: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xa84: IF (Stack[-1] == 0) GOTO 0xa8d; Pop(1)

0xa85: Push("health")
0xa86: @ GetProperty(Stack[-1], Stack[-2])
0xa87: Pop(1)
0xa88: Push((int) 0)
0xa89: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0xa8a: IF (Stack[-1] == 0) GOTO 0xa8d; Pop(1)

0xa8b: @ SignalDeath(Stack[-4])
0xa8c: Pop(0)
0xa8d: Return(); Pop(2)

0xa8e: PushEmpty()
0xa8f: PushEmpty(object)
0xa90: Stack[-1] = Stack[-2]
0xa91: Call2 0xa79

0xa92: Pop(1)
0xa93: Return(); Pop(0)

0xa94: PushEmpty()
0xa95: PushEmpty(object, int, float)
0xa96: Stack[-3] = Stack[-7]
0xa97: Stack[-2] = Stack[-6]
0xa98: Stack[-1] = Stack[-5]
0xa99: Call2 0x970

0xa9a: Pop(3)
0xa9b: Return(); Pop(0)

0xa9c: PushEmpty()
0xa9d: PushEmpty(object, int, float, cvector, cvector)
0xa9e: Stack[-5] = Stack[-11]
0xa9f: Stack[-4] = Stack[-10]
0xaa0: Stack[-3] = Stack[-9]
0xaa1: Stack[-2] = Stack[-7]
0xaa2: Stack[-1] = Stack[-6]
0xaa3: Call2 0x9b4

0xaa4: Pop(5)
0xaa5: Return(); Pop(0)

0xaa6: PushEmpty()
0xaa7: Push("unholster")
0xaa8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xaa9: IF (Stack[-1] == 0) GOTO 0xab1; Pop(1)

0xaaa: PushEmpty(bool, object)
0xaab: Stack[-1] = Stack[-4]
0xaac: Call2 0xbea

0xaad: Stack[-5] = Stack[-2]
0xaae: Pop(2)
0xaaf: Return(); Pop(0)

0xab0: GOTO 0xac4

0xab1: Push("player_shot")
0xab2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xab3: IF (Stack[-1] == 0) GOTO 0xabb; Pop(1)

0xab4: PushEmpty(bool, object)
0xab5: Stack[-1] = Stack[-4]
0xab6: Call2 0xbef

0xab7: Stack[-5] = Stack[-2]
0xab8: Pop(2)
0xab9: Return(); Pop(0)

0xaba: GOTO 0xac4

0xabb: Push("battle")
0xabc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xabd: IF (Stack[-1] == 0) GOTO 0xac4; Pop(1)

0xabe: PushEmpty(bool, object)
0xabf: Stack[-1] = Stack[-4]
0xac0: Call2 0xc06

0xac1: Stack[-5] = Stack[-2]
0xac2: Pop(2)
0xac3: Return(); Pop(0)

0xac4: Stack[-3] = (bool) 0
0xac5: Return(); Pop(0)

0xac6: PushEmpty()
0xac7: Push("unholster")
0xac8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xac9: IF (Stack[-1] == 0) GOTO 0xacf; Pop(1)

0xaca: PushEmpty(object)
0xacb: Stack[-1] = Stack[-3]
0xacc: Call2 0xbed

0xacd: Pop(1)
0xace: GOTO 0xade

0xacf: Push("player_shot")
0xad0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xad1: IF (Stack[-1] == 0) GOTO 0xad7; Pop(1)

0xad2: PushEmpty(object)
0xad3: Stack[-1] = Stack[-3]
0xad4: Call2 0xbfe

0xad5: Pop(1)
0xad6: GOTO 0xade

0xad7: Push("battle")
0xad8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xad9: IF (Stack[-1] == 0) GOTO 0xade; Pop(1)

0xada: PushEmpty(object)
0xadb: Stack[-1] = Stack[-3]
0xadc: Call2 0xc09

0xadd: Pop(1)
0xade: Return(); Pop(0)

0xadf: PushEmpty(bool, bool)
0xae0: PushEmpty(bool)
0xae1: Stack[-1] = (bool) 0
0xae2: PushEmpty(bool, object)
0xae3: Stack[-1] = Stack[-6]
0xae4: Call2 0xbea

0xae5: Pop(1)
0xae6: IF (Stack[-1] == 0) GOTO 0xaed; Pop(1)

0xae7: PushEmpty(bool, object)
0xae8: Stack[-1] = Stack[-6]
0xae9: Call2 0x8a9

0xaea: Pop(1)
0xaeb: IF (Stack[-1] == 0) GOTO 0xaed; Pop(1)

0xaec: Stack[-1] = (bool) 1
0xaed: IF (Stack[-1] == 0) GOTO 0xaf4; Pop(1)

0xaee: @@ IsWeaponHolstered(Stack[-1])
0xaef: Pop(0)
0xaf0: Pop(0); Push((bool) Stack[-1] == 0)
0xaf1: IF (Stack[-1] == 0) GOTO 0xaf4; Pop(1)

0xaf2: Stack[-4] = (bool) 1
0xaf3: Return(); Pop(2)

0xaf4: Stack[-4] = (bool) 0
0xaf5: Return(); Pop(2)

0xaf6: PushEmpty()
0xaf7: PushEmpty(object)
0xaf8: Stack[-1] = Stack[-2]
0xaf9: Call2 0xbed

0xafa: Pop(1)
0xafb: Return(); Pop(0)

0xafc: PushEmpty()
0xafd: PushEmpty(bool, object)
0xafe: Stack[-1] = Stack[-3]
0xaff: Call2 0x8a9

0xb00: Pop(1)
0xb01: IF (Stack[-1] == 0) GOTO 0xb08; Pop(1)

0xb02: PushEmpty(object)
0xb03: Call2 0xa06

0xb04: Pop(0)
0xb05: Push((float)0.0)
0xb06: @ ReportReputationChange(Stack[-3], Stack[-2], Stack[-1])
0xb07: Pop(2)
0xb08: Return(); Pop(0)

0xb09: PushEmpty(object, object)
0xb0a: Push("heal")
0xb0b: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xb0c: IF (Stack[-1] == 0) GOTO 0xb17; Pop(1)

0xb0d: Push("player")
0xb0e: @ FindActor(Stack[-2], Stack[-1])
0xb0f: Pop(1)
0xb10: PushEmpty(bool, object)
0xb11: Stack[-1] = Stack[-3]
0xb12: Call2 0xc0b

0xb13: Stack[-6] = Stack[-2]
0xb14: Pop(2)
0xb15: Return(); Pop(2)

0xb16: Stack[-1] = 0
0xb17: Stack[-4] = (bool) 0
0xb18: Return(); Pop(2)

0xb19: PushEmpty(object, object)
0xb1a: Push("heal")
0xb1b: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xb1c: IF (Stack[-1] == 0) GOTO 0xb25; Pop(1)

0xb1d: Push("player")
0xb1e: @ FindActor(Stack[-2], Stack[-1])
0xb1f: Pop(1)
0xb20: PushEmpty(object)
0xb21: Stack[-1] = Stack[-2]
0xb22: Call2 0xc0e

0xb23: Pop(1)
0xb24: Stack[-1] = 0
0xb25: Return(); Pop(2)

0xb26: PushEmpty(string, string)
0xb27: Stack[-1] = "idle"
0xb28: Push(Stack[-3])
0xb29: IF (Stack[-1] == 0) GOTO 0xb2b; Pop(1)

0xb2a: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0xb2b: Stack[-4] = Stack[-1]
0xb2c: Return(); Pop(2)

0xb2d: PushEmpty(int, bool, int, bool)
0xb2e: Stack[-2] = (int) 0
0xb2f: Push("all")
0xb30: PushEmpty(string, int)
0xb31: Stack[-1] = Stack[-5]
0xb32: Call2 0xb26

0xb33: Pop(1)
0xb34: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0xb35: Pop(2)
0xb36: Pop(0); Push((bool) Stack[-1] == 0)
0xb37: IF (Stack[-1] == 0) GOTO 0xb39; Pop(1)

0xb38: GOTO 0xb3c

0xb39: Push((int) 1)
0xb3a: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0xb3b: GOTO 0xb2f

0xb3c: Stack[-5] = Stack[-2]
0xb3d: Return(); Pop(4)

0xb3e: PushEmpty()
0xb3f: PushEmpty(bool)
0xb40: Call2 0xc16

0xb41: Pop(0)
0xb42: IF (Stack[-1] == 0) GOTO 0xb45; Pop(1)

0xb43: Stack[-2] = (int) 2
0xb44: GOTO 0xb46

0xb45: Stack[-2] = (int) 0
0xb46: Return(); Pop(0)

0xb47: PushEmpty()
0xb48: PushEmpty(object)
0xb49: Stack[-1] = Stack[-2]
0xb4a: Push(-1, 1); TaskCall(3)
0xb4b: Call2 0x307

0xb4c: Pop(-1, 1); TaskReturn
0xb4d: Pop(1)
0xb4e: Return(); Pop(0)

0xb4f: PushEmpty()
0xb50: PushEmpty(bool, object)
0xb51: Stack[-1] = Stack[-3]
0xb52: Call2 0x92c

0xb53: Pop(1)
0xb54: IF (Stack[-1] == 0) GOTO 0xb57; Pop(1)

0xb55: Stack[-2] = (int) 2
0xb56: GOTO 0xb58

0xb57: Stack[-2] = (int) 0
0xb58: Return(); Pop(0)

0xb59: PushEmpty()
0xb5a: PushEmpty(object)
0xb5b: Stack[-1] = Stack[-2]
0xb5c: Push(-1, 6); TaskCall(4)
0xb5d: Call2 0x41a

0xb5e: Pop(-1, 6); TaskReturn
0xb5f: Pop(1)
0xb60: Return(); Pop(0)

0xb61: PushEmpty(string, string, string, string)
0xb62: PushEmpty(bool, object, string)
0xb63: Stack[-2] = Stack[-9]
0xb64: Stack[-1] = "class"
0xb65: Call2 0x8ae

0xb66: Pop(2)
0xb67: Pop(1); Push((bool) Stack[-1] == 0)
0xb68: IF (Stack[-1] == 0) GOTO 0xb6b; Pop(1)

0xb69: Stack[-7] = (bool) 0
0xb6a: Return(); Pop(4)

0xb6b: Push("class")
0xb6c: @ GetProperty(Stack[-1], Stack[-3])
0xb6d: Pop(1)
0xb6e: Push("class")
0xb6f: @@ GetProperty(Stack[-1], Stack[-2])
0xb70: Pop(1)
0xb71: PushEmpty(bool)
0xb72: Stack[-1] = (bool) 0
0xb73: Pop(0); Push((bool) Stack[-6] == 0)
0xb74: IF (Stack[-1] == 0) GOTO 0xb78; Pop(1)

0xb75: Pop(0); Push((bool) Stack[-3] == Stack[-2])
0xb76: IF (Stack[-1] == 0) GOTO 0xb78; Pop(1)

0xb77: Stack[-1] = (bool) 1
0xb78: IF (Stack[-1] == 0) GOTO 0xb7b; Pop(1)

0xb79: Stack[-7] = (bool) 1
0xb7a: Return(); Pop(4)

0xb7b: Push("rat")
0xb7c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb7d: IF (Stack[-1] == 0) GOTO 0xb81; Pop(1)

0xb7e: Stack[-7] = (bool) 0
0xb7f: Return(); Pop(4)

0xb80: GOTO 0xbaa

0xb81: Push("rat_big")
0xb82: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb83: IF (Stack[-1] == 0) GOTO 0xb87; Pop(1)

0xb84: Stack[-7] = (bool) 0
0xb85: Return(); Pop(4)

0xb86: GOTO 0xbaa

0xb87: Push("dog")
0xb88: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb89: IF (Stack[-1] == 0) GOTO 0xb8d; Pop(1)

0xb8a: Stack[-7] = (bool) 0
0xb8b: Return(); Pop(4)

0xb8c: GOTO 0xbaa

0xb8d: Push("grabitel")
0xb8e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb8f: IF (Stack[-1] == 0) GOTO 0xb93; Pop(1)

0xb90: Stack[-7] = (bool) 0
0xb91: Return(); Pop(4)

0xb92: GOTO 0xbaa

0xb93: Push("bomber")
0xb94: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb95: IF (Stack[-1] == 0) GOTO 0xb99; Pop(1)

0xb96: Stack[-7] = (bool) 0
0xb97: Return(); Pop(4)

0xb98: GOTO 0xbaa

0xb99: Push("sanitar")
0xb9a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb9b: IF (Stack[-1] == 0) GOTO 0xb9f; Pop(1)

0xb9c: Stack[-7] = (bool) 0
0xb9d: Return(); Pop(4)

0xb9e: GOTO 0xbaa

0xb9f: Push("hunter")
0xba0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xba1: IF (Stack[-1] == 0) GOTO 0xba5; Pop(1)

0xba2: Stack[-7] = (bool) 0
0xba3: Return(); Pop(4)

0xba4: GOTO 0xbaa

0xba5: Push("soldier")
0xba6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xba7: IF (Stack[-1] == 0) GOTO 0xbaa; Pop(1)

0xba8: Stack[-7] = (bool) 0
0xba9: Return(); Pop(4)

0xbaa: Stack[-7] = (bool) 1
0xbab: Return(); Pop(4)

0xbac: PushEmpty()
0xbad: PushEmpty(int, object)
0xbae: Stack[-1] = Stack[-4]
0xbaf: Call2 0xb4f

0xbb0: Stack[-5] = Stack[-2]
0xbb1: Pop(2)
0xbb2: Return(); Pop(0)

0xbb3: PushEmpty()
0xbb4: PushEmpty(object)
0xbb5: Stack[-1] = Stack[-2]
0xbb6: Call2 0xb59

0xbb7: Pop(1)
0xbb8: Return(); Pop(0)

0xbb9: PushEmpty(bool, bool)
0xbba: PushEmpty(bool, object, bool)
0xbbb: Stack[-2] = Stack[-8]
0xbbc: Stack[-1] = !Stack[-6]; Pop(0);
0xbbd: Call2 0xb61

0xbbe: Pop(2)
0xbbf: Pop(1); Push((bool) Stack[-1] == 0)
0xbc0: IF (Stack[-1] == 0) GOTO 0xbc3; Pop(1)

0xbc1: Stack[-7] = (bool) 0
0xbc2: Return(); Pop(2)

0xbc3: @ CanSee(Stack[-1], Stack[-6])
0xbc4: Pop(0)
0xbc5: PushEmpty(bool)
0xbc6: Stack[-1] = (bool) 1
0xbc7: Push(Stack[-2])
0xbc8: IF (Stack[-1] == 0) GOTO 0xbd1; Pop(1)

0xbc9: PushEmpty(float, object)
0xbca: Stack[-1] = Stack[-9]
0xbcb: Call2 0x8a1

0xbcc: Pop(1)
0xbcd: Pop(0); Push(Stack[-6] * Stack[-6]);
0xbce: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0xbcf: IF (Stack[-1] == 0) GOTO 0xbd1; Pop(1)

0xbd0: Stack[-1] = (bool) 0
0xbd1: IF (Stack[-1] == 0) GOTO 0xbd4; Pop(1)

0xbd2: Stack[-7] = (bool) 1
0xbd3: Return(); Pop(2)

0xbd4: Stack[-7] = (bool) 0
0xbd5: Return(); Pop(2)

0xbd6: PushEmpty()
0xbd7: Stack[-2] = (int) 0
0xbd8: Return(); Pop(0)

0xbd9: PushEmpty()
0xbda: Return(); Pop(0)

0xbdb: PushEmpty()
0xbdc: Stack[-3] = (int) 0
0xbdd: Return(); Pop(0)

0xbde: PushEmpty()
0xbdf: Return(); Pop(0)

0xbe0: PushEmpty()
0xbe1: Stack[-2] = (int) 2
0xbe2: Return(); Pop(0)

0xbe3: PushEmpty()
0xbe4: PushEmpty(object)
0xbe5: Stack[-1] = Stack[-2]
0xbe6: Call2 0xc14

0xbe7: Pop(1)
0xbe8: Return(); Pop(0)

0xbe9: Return(); Pop(0)

0xbea: PushEmpty()
0xbeb: Stack[-2] = (bool) 0
0xbec: Return(); Pop(0)

0xbed: PushEmpty()
0xbee: Return(); Pop(0)

0xbef: PushEmpty(bool, bool)
0xbf0: @ CanSee(Stack[-1], Stack[-3])
0xbf1: Pop(0)
0xbf2: Stack[-4] = (bool) 1
0xbf3: Push(Stack[-1])
0xbf4: IF (Stack[-1] == 0) GOTO 0xbfd; Pop(1)

0xbf5: PushEmpty(float, object)
0xbf6: Stack[-1] = Stack[-5]
0xbf7: Call2 0x8a1

0xbf8: Pop(1)
0xbf9: Push((int) 4000000)
0xbfa: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0xbfb: IF (Stack[-1] == 0) GOTO 0xbfd; Pop(1)

0xbfc: Stack[-4] = (bool) 0
0xbfd: Return(); Pop(2)

0xbfe: PushEmpty()
0xbff: PushEmpty(object)
0xc00: Stack[-1] = Stack[-2]
0xc01: Push(-1, 3); TaskCall(6)
0xc02: Call2 0x7ea

0xc03: Pop(-1, 3); TaskReturn
0xc04: Pop(1)
0xc05: Return(); Pop(0)

0xc06: PushEmpty()
0xc07: Stack[-2] = (bool) 0
0xc08: Return(); Pop(0)

0xc09: PushEmpty()
0xc0a: Return(); Pop(0)

0xc0b: PushEmpty()
0xc0c: Stack[-2] = (bool) 0
0xc0d: Return(); Pop(0)

0xc0e: PushEmpty()
0xc0f: Return(); Pop(0)

0xc10: Push(GlobalVars[0])
0xc11: Stack[-1] = (bool) 0
0xc12: GlobalVars[0] = Stack[-1]; Pop(1)
0xc13: Return(); Pop(0)

0xc14: PushEmpty()
0xc15: Return(); Pop(0)

0xc16: Stack[-1] = (bool) 0
0xc17: Return(); Pop(0)

0xc18: PushEmpty()
0xc19: PushEmpty(bool, object, object, float, bool)
0xc1a: Stack[-4] = Stack[-8]
0xc1b: Stack[-3] = Stack[-7]
0xc1c: Stack[-2] = (float) 500.0
0xc1d: Stack[-1] = Stack[-6]
0xc1e: Call2 0xbb9

0xc1f: Stack[-9] = Stack[-5]
0xc20: Pop(5)
0xc21: Return(); Pop(0)

0xc22: PushEmpty()
0xc23: PushEmpty(bool, object)
0xc24: Stack[-1] = Stack[-3]
0xc25: Call2 0x8a9

0xc26: Pop(1)
0xc27: IF (Stack[-1] == 0) GOTO 0xc2f; Pop(1)

0xc28: PushEmpty(object)
0xc29: Call2 0xa06

0xc2a: Pop(0)
0xc2b: Push((float)0.0)
0xc2c: Push((bool) 1)
0xc2d: @ ReportReputationChange(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xc2e: Pop(3)
0xc2f: Push(GlobalVars[0])
0xc30: Stack[-1] = (bool) 1
0xc31: GlobalVars[0] = Stack[-1]; Pop(1)
0xc32: Push((int) 50)
0xc33: Push((int) 40)
0xc34: @ SetRTEnvelope(Stack[-2], Stack[-1])
0xc35: Pop(2)
0xc36: Return(); Pop(0)

