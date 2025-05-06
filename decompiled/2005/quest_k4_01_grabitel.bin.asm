GlobalVarCount = 1
	G_VAR_0 bool 

Strings:
	all
	RemoveStationaryActor
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
	aattack_begin1
	aattack_end1
	knife
	scripted
	grabitel_knife.xml
	SetScriptProperty
	Target
	StartDirection
	kill
	attack_off
	@GetAttackDistance
	GetAttackDistance
	attack
	GetPFPosition
	attack_on
	attack_stay
	fjump
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
	GetProperty
	SetProperty
	health
	armor
	armor_
	IsDead
	IsDead
	GetScene
	noaccess
	fhit
	bhit
	hit_react
	2
	add
	size
	get
	blood_dir.xml
	reputation
	battle
	god_mode
	idle
	branch
	GenerateMoney: iMin > iMax
	Money
	Knife
	lockpick
	grabitel_mark

Import:
	Sleep (1 args)
	IsPlayerActor (2 args)
	WaitForAnimEnd (0 args)
	irand (2 args)
	PlayAnimation (2 args)
	WaitForAnimEnd (1 args)
	rand (2 args)
	Sleep (2 args)
	ResetAAS (0 args)
	StopAnimation (0 args)
	StopGroup0 (0 args)
	GetScene (1 args)
	SetRTEnvelope (2 args)
	Hold (0 args)
	IsOverrideActive (1 args)
	GetPosition (1 args)
	GetDirection (1 args)
	RemoveRTEnvelope (0 args)
	SetDeathState (0 args)
	Stop (0 args)
	StopAsync (0 args)
	LookAsync (3 args)
	UnlookAsync (1 args)
	LockAnimationEnd (2 args)
	RemoveEnvelope (0 args)
	StopSecondaryAnimation (0 args)
	Face (1 args)
	GetGeometryLocator (3 args)
	AddActorByType (6 args)
	PlayGlobalMusic (1 args)
	SendPlayerEnemy (2 args)
	GetPFPosition (1 args)
	CanReachByPF (2 args)
	rand (1 args)
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
	FindDirLength (3 args)
	Speak (1 args)
	SetTimer (2 args)
	CanSee (2 args)
	KillTimer (1 args)
	FindPathTo (2 args)
	RotatePath (2 args)
	FollowPath (5 args)
	RequestClearPath (1 args)
	Rotate (3 args)
	IsDead (1 args)
	GetSecondaryAnimationType (1 args)
	FadeSecondaryAnimation (4 args)
	CreateVectorVector (1 args)
	GetGeometryLocator (4 args)
	RotateAsync (2 args)
	IsLoaded (1 args)
	AddItem (3 args)
	Is3DSoundLoaded (2 args)
	GetEyesHeight (1 args)
	PlayGlobalSound (2 args)
	self (1 args)
	SendWorldWndMessage (1 args)
	CreateFloatVector (1 args)
	SendWorldWndMessage (2 args)
	BroadcastMessage (3 args)
	GetVariable (2 args)
	GetProperty (2 args)
	SignalDeath (1 args)
	WorkWithCorpse (1 args)
	Barter (1 args)
	Trace (1 args)
	AddItem (4 args)
	ClearSubContainer (1 args)
	GetInvItemByName (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_17 Op = 0x8 Vars = (object)
		EVENT_1 Op = 0x16 Vars = (object)
		EVENT_3 Op = 0x20 Vars = (object)
	GTASK_1  Params = 1
		EVENT_0 Op = 0xaa Vars = (object)
		EVENT_22 Op = 0x129 Vars = (object, int, float, float)
		EVENT_16 Op = 0x12b Vars = (object, string)
		EVENT_41 Op = 0x12d Vars = (object)
	GTASK_2  Params = 2
	GTASK_3 Vars = (bool) Params = 2
		EVENT_17 Op = 0x1bf Vars = (object)
		EVENT_30 Op = 0x1c5 Vars = (object, object, bool)
		EVENT_26 Op = 0x1cc Vars = (string)
	GTASK_4 Vars = (object, int, int, bool, float, int) Params = 2
		EVENT_17 Op = 0x20a Vars = (object)
		EVENT_30 Op = 0x210 Vars = (object, object, bool)
		EVENT_26 Op = 0x217 Vars = (string)
	GTASK_5 Vars = (bool, object, bool) Params = 6
		EVENT_17 Op = 0x4b3 Vars = (object)
		EVENT_30 Op = 0x4b9 Vars = (object, object, bool)
		EVENT_26 Op = 0x4c0 Vars = (string)
		EVENT_7 Op = 0x4fc Vars = (int)
		EVENT_1 Op = 0x517 Vars = (object)
		EVENT_2 Op = 0x526 Vars = (object)
		EVENT_10 Op = 0x5ac Vars = (object)
		EVENT_41 Op = 0x5b7 Vars = (object)
	GTASK_6  Params = 1

Events:
EVENT_22 Op = 0x85c Vars = (object, int, float, float)
EVENT_43 Op = 0x864 Vars = (object, int, float, float, cvector, cvector)
EVENT_16 Op = 0x86e Vars = (object, string)
EVENT_41 Op = 0x87b Vars = (object)

0x0: Push((int) 3)
0x1: @ Sleep(Stack[-1])
0x2: Pop(1)
0x3: PushEmpty()
0x4: Call2 0x2a

0x5: Pop(0)
0x6: GOTO 0x0

0x7: Return(); Pop(0)

0x8: PushEmpty()
0x9: PushEmpty(bool, object)
0xa: Stack[-1] = Stack[-3]
0xb: Call2 0x881

0xc: Pop(1)
0xd: IF (Stack[-1] == 0) GOTO 0x15; Pop(1)

0xe: PushEmpty()
0xf: Call2 0x7b

0x10: Pop(0)
0x11: PushEmpty(object)
0x12: Stack[-1] = Stack[-2]
0x13: Call2 0x888

0x14: Pop(1)
0x15: Return(); Pop(0)

0x16: PushEmpty(bool, bool)
0x17: @ IsPlayerActor(Stack[-3], Stack[-1])
0x18: Pop(0)
0x19: Push(Stack[-1])
0x1a: IF (Stack[-1] == 0) GOTO 0x1f; Pop(1)

0x1b: PushEmpty(object)
0x1c: Stack[-1] = Stack[-4]
0x1d: Call2 0x8

0x1e: Pop(1)
0x1f: Return(); Pop(2)

0x20: PushEmpty(bool, bool)
0x21: @ IsPlayerActor(Stack[-3], Stack[-1])
0x22: Pop(0)
0x23: Push(Stack[-1])
0x24: IF (Stack[-1] == 0) GOTO 0x29; Pop(1)

0x25: PushEmpty(object)
0x26: Stack[-1] = Stack[-4]
0x27: Call2 0x8

0x28: Pop(1)
0x29: Return(); Pop(2)

0x2a: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x2b: @ WaitForAnimEnd()
0x2c: Pop(0)
0x2d: PushEmpty(bool)
0x2e: Call2 0x760

0x2f: Pop(0)
0x30: Pop(1); Push((bool) Stack[-1] == 0)
0x31: IF (Stack[-1] == 0) GOTO 0x33; Pop(1)

0x32: Return(); Pop(14)

0x33: PushEmpty(int)
0x34: Call2 0x843

0x35: Stack[-8] = Stack[-1]
0x36: Pop(1)
0x37: Stack[-6] = (int) 0
0x38: PushEmpty(bool)
0x39: Stack[-1] = (bool) 0
0x3a: Push((int) 5)
0x3b: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x3c: IF (Stack[-1] == 0) GOTO 0x42; Pop(1)

0x3d: PushEmpty(bool)
0x3e: Call2 0x760

0x3f: Pop(0)
0x40: IF (Stack[-1] == 0) GOTO 0x42; Pop(1)

0x41: Stack[-1] = (bool) 1
0x42: IF (Stack[-1] == 0) GOTO 0x76; Pop(1)

0x43: Push((int) 3)
0x44: @ irand(Stack[-6], Stack[-1])
0x45: Pop(1)
0x46: Push((int) 0)
0x47: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x48: IF (Stack[-1] == 0) GOTO 0x5a; Pop(1)

0x49: Push(Stack[-7])
0x4a: IF (Stack[-1] == 0) GOTO 0x59; Pop(1)

0x4b: @ irand(Stack[-4], Stack[-7])
0x4c: Pop(0)
0x4d: Push("all")
0x4e: PushEmpty(string, int)
0x4f: Stack[-1] = Stack[-7]
0x50: Call2 0x83c

0x51: Pop(1)
0x52: @ PlayAnimation(Stack[-2], Stack[-1])
0x53: Pop(2)
0x54: @ WaitForAnimEnd(Stack[-3])
0x55: Pop(0)
0x56: Pop(0); Push((bool) Stack[-3] == 0)
0x57: IF (Stack[-1] == 0) GOTO 0x59; Pop(1)

0x58: GOTO 0x76

0x59: GOTO 0x6b

0x5a: Push((int) 1)
0x5b: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x5c: IF (Stack[-1] == 0) GOTO 0x68; Pop(1)

0x5d: Push((int) 4)
0x5e: @ rand(Stack[-3], Stack[-1])
0x5f: Pop(1)
0x60: Push((int) 1)
0x61: Pop(1); Push(Stack[-3] + Stack[-1]);
0x62: @ Sleep(Stack[-1], Stack[-2])
0x63: Pop(1)
0x64: Pop(0); Push((bool) Stack[-1] == 0)
0x65: IF (Stack[-1] == 0) GOTO 0x67; Pop(1)

0x66: GOTO 0x76

0x67: GOTO 0x6b

0x68: Push(Stack[-6])
0x69: IF (Stack[-1] == 0) GOTO 0x6b; Pop(1)

0x6a: GOTO 0x76

0x6b: PushEmpty(bool)
0x6c: Call2 0x79

0x6d: Pop(0)
0x6e: Pop(1); Push((bool) Stack[-1] == 0)
0x6f: IF (Stack[-1] == 0) GOTO 0x71; Pop(1)

0x70: GOTO 0x76

0x71: @ ResetAAS()
0x72: Pop(0)
0x73: Push((int) 1)
0x74: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x75: GOTO 0x38

0x76: @ ResetAAS()
0x77: Pop(0)
0x78: Return(); Pop(14)

0x79: Stack[-1] = (bool) 1
0x7a: Return(); Pop(0)

0x7b: @ StopAnimation()
0x7c: Pop(0)
0x7d: @ StopGroup0()
0x7e: Pop(0)
0x7f: Return(); Pop(0)

0x80: PushEmpty(object, object)
0x81: PushEmpty()
0x82: Call2 0x8c0

0x83: Pop(0)
0x84: PushEmpty(bool, object)
0x85: Stack[-1] = Stack[-5]
0x86: Call2 0x5f4

0x87: Pop(1)
0x88: IF (Stack[-1] == 0) GOTO 0x8e; Pop(1)

0x89: PushEmpty(bool, object, float)
0x8a: Stack[-2] = Stack[-6]
0x8b: Stack[-1] = (float) 0.03
0x8c: Call2 0x7eb

0x8d: Pop(3)
0x8e: @ GetScene(Stack[-1])
0x8f: Pop(0)
0x90: PushEmpty(object)
0x91: Call2 0x7a4

0x92: Pop(0)
0x93: @@ RemoveStationaryActor(Stack[-1])
0x94: Pop(1)
0x95: PushEmpty(object)
0x96: Stack[-1] = Stack[-4]
0x97: Call2 0x9b

0x98: Pop(1)
0x99: Return(); Pop(2)

0x9a: Stack[-1] = 0
0x9b: PushEmpty()
0x9c: EventDisable(0)
0x9d: PushEmpty(object)
0x9e: Stack[-1] = Stack[-2]
0x9f: Call2 0xb4

0xa0: Pop(1)
0xa1: Push((int) 50)
0xa2: Push((int) 40)
0xa3: @ SetRTEnvelope(Stack[-2], Stack[-1])
0xa4: Pop(2)
0xa5: EventEnable(0)
0xa6: @ Hold()
0xa7: Pop(0)
0xa8: GOTO 0xa6

0xa9: Return(); Pop(0)

0xaa: PushEmpty(bool, bool)
0xab: @ IsOverrideActive(Stack[-1])
0xac: Pop(0)
0xad: Pop(0); Push((bool) Stack[-1] == 0)
0xae: IF (Stack[-1] == 0) GOTO 0xb3; Pop(1)

0xaf: PushEmpty(object)
0xb0: Stack[-1] = Stack[-4]
0xb1: Call2 0x894

0xb2: Pop(1)
0xb3: Return(); Pop(2)

0xb4: PushEmpty(cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector, cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector)
0xb5: Pop(0); Push((bool) Stack[-21] == 0)
0xb6: IF (Stack[-1] == 0) GOTO 0xbc; Pop(1)

0xb7: PushEmpty(string)
0xb8: Stack[-1] = "fdie"
0xb9: Call2 0x10f

0xba: Pop(1)
0xbb: GOTO 0x10e

0xbc: @@ GetPosition(Stack[-10])
0xbd: Pop(0)
0xbe: @ GetPosition(Stack[-9])
0xbf: Pop(0)
0xc0: @ GetDirection(Stack[-8])
0xc1: Pop(0)
0xc2: Stack[-7] = Stack[-9] - Stack[-10]; Pop(0);
0xc3: Push(CvectorIndex(Stack[-7], 0))
0xc4: Push(CvectorIndex(Stack[-9], 0))
0xc5: Pop(2); Push(Stack[-2] * Stack[-1]);
0xc6: Push(CvectorIndex(Stack[-8], 2))
0xc7: Push(CvectorIndex(Stack[-10], 2))
0xc8: Pop(2); Push(Stack[-2] * Stack[-1]);
0xc9: Pop(2); Push(Stack[-2] + Stack[-1]);
0xca: Push((int) 0)
0xcb: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0xcc: IF (Stack[-1] == 0) GOTO 0xcf; Pop(1)

0xcd: Stack[-6] = "fdie"
0xce: GOTO 0xd0

0xcf: Stack[-6] = "bdie"
0xd0: @ RemoveRTEnvelope()
0xd1: Pop(0)
0xd2: @ SetDeathState()
0xd3: Pop(0)
0xd4: @ Stop()
0xd5: Pop(0)
0xd6: @ StopAsync()
0xd7: Pop(0)
0xd8: Stack[-5] = Stack[-21]
0xd9: Push("GetScriptProperty")
0xda: Push((int) 2)
0xdb: Pop(2); Push(IsFuncExist(Stack[-23], Stack[-2], Stack[-1]))
0xdc: IF (Stack[-1] == 0) GOTO 0xe8; Pop(1)

0xdd: Push("Owner")
0xde: @@ HasScriptProperty(Stack[-5], Stack[-1])
0xdf: Pop(1)
0xe0: Push(Stack[-4])
0xe1: IF (Stack[-1] == 0) GOTO 0xe8; Pop(1)

0xe2: Push("Owner")
0xe3: @@ GetScriptProperty(Stack[-6], Stack[-1])
0xe4: Pop(1)
0xe5: Pop(0); Push((bool) Stack[-5] == 0)
0xe6: IF (Stack[-1] == 0) GOTO 0xe8; Pop(1)

0xe7: Stack[-5] = Stack[-21]
0xe8: Push("@GetEyesHeight")
0xe9: Push((int) 1)
0xea: Pop(2); Push(IsFuncExist(Stack[-7], Stack[-2], Stack[-1]))
0xeb: IF (Stack[-1] == 0) GOTO 0xf7; Pop(1)

0xec: @@ GetEyesHeight(Stack[-2])
0xed: Pop(0)
0xee: Stack[-1] = CVector(0.0, 0.0, 0.0)
0xef: Push(CvectorIndex(Stack[-1], 1))
0xf0: Stack[-1] = Stack[-3]
0xf1: CvectorIndex(Stack[-2], 1) = Stack[-1];
0xf2: Push("head")
0xf3: @ LookAsync(Stack[-22], Stack[-1], Stack[-2])
0xf4: Pop(1)
0xf5: Stack[-3] = (bool) 1
0xf6: GOTO 0xf8

0xf7: Stack[-3] = (bool) 0
0xf8: PushEmpty(string)
0xf9: Stack[-1] = Stack[-7]
0xfa: Call2 0x77b

0xfb: Pop(1)
0xfc: Push("all")
0xfd: @ PlayAnimation(Stack[-1], Stack[-7])
0xfe: Pop(1)
0xff: @ WaitForAnimEnd()
0x100: Pop(0)
0x101: Push(Stack[-3])
0x102: IF (Stack[-1] == 0) GOTO 0x108; Pop(1)

0x103: @ StopAsync()
0x104: Pop(0)
0x105: Push("head")
0x106: @ UnlookAsync(Stack[-1])
0x107: Pop(1)
0x108: Push("all")
0x109: @ LockAnimationEnd(Stack[-1], Stack[-7])
0x10a: Pop(1)
0x10b: @ RemoveEnvelope()
0x10c: Pop(0)
0x10d: Stack[-5] = 0
0x10e: Return(); Pop(20)

0x10f: PushEmpty()
0x110: @ RemoveRTEnvelope()
0x111: Pop(0)
0x112: @ SetDeathState()
0x113: Pop(0)
0x114: @ Stop()
0x115: Pop(0)
0x116: @ StopAsync()
0x117: Pop(0)
0x118: @ StopSecondaryAnimation()
0x119: Pop(0)
0x11a: PushEmpty(string)
0x11b: Stack[-1] = Stack[-2]
0x11c: Call2 0x77b

0x11d: Pop(1)
0x11e: Push("all")
0x11f: @ PlayAnimation(Stack[-1], Stack[-2])
0x120: Pop(1)
0x121: @ WaitForAnimEnd()
0x122: Pop(0)
0x123: Push("all")
0x124: @ LockAnimationEnd(Stack[-1], Stack[-2])
0x125: Pop(1)
0x126: @ RemoveEnvelope()
0x127: Pop(0)
0x128: Return(); Pop(0)

0x129: PushEmpty()
0x12a: Return(); Pop(0)

0x12b: PushEmpty()
0x12c: Return(); Pop(0)

0x12d: PushEmpty()
0x12e: Return(); Pop(0)

0x12f: PushEmpty(float, float)
0x130: PushEmpty(bool, object)
0x131: Stack[-1] = Stack[-5]
0x132: Call2 0x6ac

0x133: Pop(1)
0x134: Pop(1); Push((bool) Stack[-1] == 0)
0x135: IF (Stack[-1] == 0) GOTO 0x138; Pop(1)

0x136: Stack[-4] = (bool) 0
0x137: Return(); Pop(2)

0x138: PushEmpty(float, object)
0x139: Stack[-1] = Stack[-5]
0x13a: Call2 0x5ec

0x13b: Stack[-3] = Stack[-2]
0x13c: Pop(2)
0x13d: PushEmpty(bool, float, float, float)
0x13e: Stack[-3] = Stack[-5]
0x13f: Stack[-2] = (float) 250000.0
0x140: Stack[-1] = (float) 3240000.0
0x141: Call2 0x7de

0x142: Pop(3)
0x143: IF (Stack[-1] == 0) GOTO 0x14c; Pop(1)

0x144: PushEmpty(bool, object)
0x145: Stack[-1] = Stack[-5]
0x146: Push(-2, 1); TaskCall(3)
0x147: Call2 0x154

0x148: Pop(-2, 1); TaskReturn
0x149: Stack[-6] = Stack[-2]
0x14a: Pop(2)
0x14b: Return(); Pop(2)

0x14c: PushEmpty(bool, object)
0x14d: Stack[-1] = Stack[-5]
0x14e: Push(-2, 6); TaskCall(4)
0x14f: Call2 0x1d2

0x150: Pop(-2, 6); TaskReturn
0x151: Stack[-6] = Stack[-2]
0x152: Pop(2)
0x153: Return(); Pop(2)

0x154: PushEmpty(object, cvector, bool, object, cvector, float, cvector, object, cvector, bool, object, cvector, float, cvector)
0x155: PushEmpty(object)
0x156: Stack[-1] = Stack[-16]
0x157: Call2 0x822

0x158: Pop(1)
0x159: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x15a: PushEmpty(bool, object)
0x15b: Stack[-1] = Stack[-17]
0x15c: Call2 0x6ce

0x15d: Pop(2)
0x15e: PushEmpty(bool, object)
0x15f: Stack[-1] = Stack[-17]
0x160: Call2 0x6ac

0x161: Pop(1)
0x162: Pop(1); Push((bool) Stack[-1] == 0)
0x163: IF (Stack[-1] == 0) GOTO 0x166; Pop(1)

0x164: Stack[-16] = (bool) 0
0x165: Return(); Pop(14)

0x166: PushEmpty()
0x167: Call2 0x82b

0x168: Pop(0)
0x169: @ Face(Stack[-15])
0x16a: Pop(0)
0x16b: Push("all")
0x16c: Push("aattack_begin1")
0x16d: @ PlayAnimation(Stack[-2], Stack[-1])
0x16e: Pop(2)
0x16f: @ WaitForAnimEnd()
0x170: Pop(0)
0x171: PushEmpty(bool, object)
0x172: Stack[-1] = Stack[-17]
0x173: Call2 0x6ac

0x174: Pop(1)
0x175: Pop(1); Push((bool) Stack[-1] == 0)
0x176: IF (Stack[-1] == 0) GOTO 0x17b; Pop(1)

0x177: @ StopAsync()
0x178: Pop(0)
0x179: Stack[-16] = (bool) 0
0x17a: Return(); Pop(14)

0x17b: Push("all")
0x17c: Push("aattack_end1")
0x17d: @ PlayAnimation(Stack[-2], Stack[-1])
0x17e: Pop(2)
0x17f: @ GetScene(Stack[-7])
0x180: Pop(0)
0x181: Push("knife")
0x182: @ GetGeometryLocator(Stack[-1], Stack[-6], Stack[-7])
0x183: Pop(1)
0x184: Push("scripted")
0x185: Push(CVector(0.0, 0.0, 1.0))
0x186: Push("grabitel_knife.xml")
0x187: @ AddActorByType(Stack[-7], Stack[-3], Stack[-10], Stack[-9], Stack[-2], Stack[-1])
0x188: Pop(3)
0x189: Push("Owner")
0x18a: PushEmpty(object)
0x18b: Call2 0x7a4

0x18c: Pop(0)
0x18d: @@ SetScriptProperty(Stack[-2], Stack[-1])
0x18e: Pop(2)
0x18f: Push("Target")
0x190: @@ SetScriptProperty(Stack[-1], Stack[-16])
0x191: Pop(1)
0x192: @@ GetPosition(Stack[-3])
0x193: Pop(0)
0x194: @@ GetEyesHeight(Stack[-2])
0x195: Pop(0)
0x196: Push(CvectorIndex(Stack[-3], 1))
0x197: Push((int) 10)
0x198: Pop(1); Push(Stack[-4] - Stack[-1]);
0x199: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x19a: CvectorIndex(Stack[-4], 1) = Stack[-1];
0x19b: PushEmpty(cvector, cvector, cvector, float)
0x19c: Stack[-3] = Stack[-10]
0x19d: Stack[-2] = Stack[-7]
0x19e: Stack[-1] = (float) 2000.0
0x19f: Call2 0x8eb

0x1a0: Stack[-5] = Stack[-4]
0x1a1: Pop(4)
0x1a2: Push("StartDirection")
0x1a3: @@ SetScriptProperty(Stack[-1], Stack[-2])
0x1a4: Pop(1)
0x1a5: @ WaitForAnimEnd()
0x1a6: Pop(0)
0x1a7: @ StopAsync()
0x1a8: Pop(0)
0x1a9: Push( Stack[0 + Tasks[-1].StackPointer] )
0x1aa: IF (Stack[-1] == 0) GOTO 0x1ad; Pop(1)

0x1ab: Stack[-16] = (bool) 1
0x1ac: Return(); Pop(14)

0x1ad: PushEmpty(bool, object)
0x1ae: Stack[-1] = Stack[-17]
0x1af: Call2 0x6ac

0x1b0: Pop(1)
0x1b1: Pop(1); Push((bool) Stack[-1] == 0)
0x1b2: IF (Stack[-1] == 0) GOTO 0x1b5; Pop(1)

0x1b3: Stack[-16] = (bool) 0
0x1b4: Return(); Pop(14)

0x1b5: PushEmpty(bool, object)
0x1b6: Stack[-1] = Stack[-17]
0x1b7: Push(-2, 6); TaskCall(4)
0x1b8: Call2 0x1d2

0x1b9: Pop(-2, 6); TaskReturn
0x1ba: Stack[-18] = Stack[-2]
0x1bb: Pop(2)
0x1bc: Return(); Pop(14)

0x1bd: Stack[-4] = 0
0x1be: Stack[-7] = 0
0x1bf: PushEmpty()
0x1c0: PushEmpty(object)
0x1c1: Stack[-1] = Stack[-2]
0x1c2: Call2 0x90e

0x1c3: Pop(1)
0x1c4: Return(); Pop(0)

0x1c5: PushEmpty()
0x1c6: PushEmpty(bool, object, object)
0x1c7: Stack[-2] = Stack[-6]
0x1c8: Stack[-1] = Stack[-5]
0x1c9: Call2 0x910

0x1ca: Pop(3)
0x1cb: Return(); Pop(0)

0x1cc: PushEmpty()
0x1cd: Push("kill")
0x1ce: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1cf: IF (Stack[-1] == 0) GOTO 0x1d1; Pop(1)

0x1d0: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x1d1: Return(); Pop(0)

0x1d2: PushEmpty()
0x1d3: Push(GlobalVars[0])
0x1d4: Stack[-1] = (bool) 0
0x1d5: GlobalVars[0] = Stack[-1]; Pop(1)
0x1d6: PushEmpty(object, bool, float)
0x1d7: Stack[-3] = Stack[-4]
0x1d8: Stack[-2] = (bool) 1
0x1d9: Stack[-1] = (float) 200.0
0x1da: Call2 0x21f

0x1db: Pop(3)
0x1dc: PushEmpty(bool)
0x1dd: Stack[-1] = (bool) 0
0x1de: Push(GlobalVars[0])
0x1df: IF (Stack[-1] == 0) GOTO 0x1e3; Pop(1)

0x1e0: Push( Stack[3 + Tasks[-1].StackPointer] )
0x1e1: IF (Stack[-1] == 0) GOTO 0x1e3; Pop(1)

0x1e2: Stack[-1] = (bool) 1
0x1e3: IF (Stack[-1] == 0) GOTO 0x1ea; Pop(1)

0x1e4: Push("all")
0x1e5: Push("attack_off")
0x1e6: @ PlayAnimation(Stack[-2], Stack[-1])
0x1e7: Pop(2)
0x1e8: @ WaitForAnimEnd()
0x1e9: Pop(0)
0x1ea: Push(GlobalVars[0])
0x1eb: Stack[-3] = Stack[-1]
0x1ec: Pop(1)
0x1ed: Return(); Pop(0)

0x1ee: PushEmpty()
0x1ef: Stack[-3] = (float) 0.15
0x1f0: Return(); Pop(0)

0x1f1: PushEmpty()
0x1f2: Stack[-3] = (int) 0
0x1f3: Return(); Pop(0)

0x1f4: Stack[-1] = (int) 1
0x1f5: Return(); Pop(0)

0x1f6: PushEmpty()
0x1f7: PushEmpty(bool)
0x1f8: Stack[-1] = (bool) 0
0x1f9: Push((int) 0)
0x1fa: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x1fb: IF (Stack[-1] == 0) GOTO 0x202; Pop(1)

0x1fc: PushEmpty(bool, object)
0x1fd: Stack[-1] = Stack[-5]
0x1fe: Call2 0x664

0x1ff: Pop(1)
0x200: IF (Stack[-1] == 0) GOTO 0x202; Pop(1)

0x201: Stack[-1] = (bool) 1
0x202: IF (Stack[-1] == 0) GOTO 0x209; Pop(1)

0x203: Push(GlobalVars[0])
0x204: Stack[-1] = (bool) 1
0x205: GlobalVars[0] = Stack[-1]; Pop(1)
0x206: PushEmpty()
0x207: Call2 0x3d7

0x208: Pop(0)
0x209: Return(); Pop(0)

0x20a: PushEmpty()
0x20b: PushEmpty(object)
0x20c: Stack[-1] = Stack[-2]
0x20d: Call2 0x90e

0x20e: Pop(1)
0x20f: Return(); Pop(0)

0x210: PushEmpty()
0x211: PushEmpty(bool, object, object)
0x212: Stack[-2] = Stack[-6]
0x213: Stack[-1] = Stack[-5]
0x214: Call2 0x910

0x215: Pop(3)
0x216: Return(); Pop(0)

0x217: PushEmpty()
0x218: Push("kill")
0x219: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x21a: IF (Stack[-1] == 0) GOTO 0x21e; Pop(1)

0x21b: Push(GlobalVars[0])
0x21c: Stack[-1] = (bool) 1
0x21d: GlobalVars[0] = Stack[-1]; Pop(1)
0x21e: Return(); Pop(0)

0x21f: PushEmpty(float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float, float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float)
0x220: PushEmpty()
0x221: Call2 0x304

0x222: Pop(0)
0x223: Stack[5 + Tasks[-1].StackPointer] = (int)0
0x224: Push("@GetAttackDistance")
0x225: Push((int) 1)
0x226: Pop(2); Push(IsFuncExist(Stack[-27], Stack[-2], Stack[-1]))
0x227: IF (Stack[-1] == 0) GOTO 0x22d; Pop(1)

0x228: @@ GetAttackDistance(Stack[-11])
0x229: Pop(0)
0x22a: Push((int) 50)
0x22b: Stack[-12] = Stack[-12] + Stack[-1]; Pop(1);
0x22c: GOTO 0x22e

0x22d: Stack[-11] = Stack[-23]
0x22e: Push((int) 150)
0x22f: Pop(1); Push((bool) Stack[-12] >= Stack[-1])
0x230: IF (Stack[-1] == 0) GOTO 0x232; Pop(1)

0x231: Stack[-11] = (int) 150
0x232: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x233: Stack[0 + Tasks[-1].StackPointer] = Stack[-25]
0x234: @ IsPlayerActor(Stack[-0], Stack[-8])
0x235: Pop(0)
0x236: Push(Stack[-8])
0x237: IF (Stack[-1] == 0) GOTO 0x240; Pop(1)

0x238: Push("attack")
0x239: @ PlayGlobalMusic(Stack[-1])
0x23a: Pop(1)
0x23b: PushEmpty(object)
0x23c: Call2 0x7a4

0x23d: Pop(0)
0x23e: @ SendPlayerEnemy(Stack[-26], Stack[-1])
0x23f: Pop(1)
0x240: Push(Stack[-24])
0x241: IF (Stack[-1] == 0) GOTO 0x244; Pop(1)

0x242: Stack[-7] = (bool) 0
0x243: GOTO 0x245

0x244: Stack[-7] = (bool) 1
0x245: Push((float)300.0)
0x246: Stack[-7] = Stack[-1] + Stack[-12]; Pop(1);
0x247: PushEmpty(bool)
0x248: Stack[-1] = (bool) 0
0x249: PushEmpty(bool, object)
0x24a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x24b: Call2 0x6ac

0x24c: Pop(1)
0x24d: IF (Stack[-1] == 0) GOTO 0x251; Pop(1)

0x24e: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x24f: IF (Stack[-1] == 0) GOTO 0x251; Pop(1)

0x250: Stack[-1] = (bool) 1
0x251: IF (Stack[-1] == 0) GOTO 0x2f3; Pop(1)

0x252: PushEmpty()
0x253: Call2 0x4a3

0x254: Pop(0)
0x255: @@ GetPFPosition(Stack[-10])
0x256: Pop(0)
0x257: @ GetPFPosition(Stack[-9])
0x258: Pop(0)
0x259: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0x25a: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x25b: Pop(0); Push(Stack[-6] * Stack[-6]);
0x25c: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0x25d: IF (Stack[-1] == 0) GOTO 0x26d; Pop(1)

0x25e: PushEmpty(bool, object, float, float, bool, bool)
0x25f: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0x260: Stack[-4] = Stack[-17]
0x261: Stack[-3] = (float) 3000.0
0x262: Stack[-2] = (bool) 1
0x263: Stack[-1] = (bool) 0
0x264: Push(-6, 3); TaskCall(5)
0x265: Call2 0x4cb

0x266: Pop(-6, 3); TaskReturn
0x267: Pop(5)
0x268: Pop(1); Push((bool) Stack[-1] == 0)
0x269: IF (Stack[-1] == 0) GOTO 0x26b; Pop(1)

0x26a: GOTO 0x2f3

0x26b: Stack[-7] = (bool) 0
0x26c: GOTO 0x2f2

0x26d: Pop(0); Push(Stack[-23] * Stack[-23]);
0x26e: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0x26f: IF (Stack[-1] == 0) GOTO 0x2ea; Pop(1)

0x270: @@ GetPFPosition(Stack[-3])
0x271: Pop(0)
0x272: @ CanReachByPF(Stack[-2], Stack[-3])
0x273: Pop(0)
0x274: Pop(0); Push((bool) Stack[-2] == 0)
0x275: IF (Stack[-1] == 0) GOTO 0x285; Pop(1)

0x276: PushEmpty(bool, object, float, float, bool, bool)
0x277: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0x278: Stack[-4] = Stack[-17]
0x279: Stack[-3] = (float) 3000.0
0x27a: Stack[-2] = (bool) 1
0x27b: Stack[-1] = (bool) 0
0x27c: Push(-6, 3); TaskCall(5)
0x27d: Call2 0x4cb

0x27e: Pop(-6, 3); TaskReturn
0x27f: Pop(5)
0x280: Pop(1); Push((bool) Stack[-1] == 0)
0x281: IF (Stack[-1] == 0) GOTO 0x283; Pop(1)

0x282: GOTO 0x2f3

0x283: Stack[-7] = (bool) 0
0x284: GOTO 0x247

0x285: Pop(0); Push((bool) Stack[-7] == 0)
0x286: IF (Stack[-1] == 0) GOTO 0x29e; Pop(1)

0x287: PushEmpty(object)
0x288: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x289: Call2 0x755

0x28a: Pop(1)
0x28b: Push("all")
0x28c: Push("attack_on")
0x28d: @ PlayAnimation(Stack[-2], Stack[-1])
0x28e: Pop(2)
0x28f: @ WaitForAnimEnd()
0x290: Pop(0)
0x291: PushEmpty()
0x292: Call2 0x4a3

0x293: Pop(0)
0x294: @ StopAsync()
0x295: Pop(0)
0x296: Stack[-7] = (bool) 1
0x297: PushEmpty(bool, object)
0x298: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x299: Call2 0x6ac

0x29a: Pop(1)
0x29b: Pop(1); Push((bool) Stack[-1] == 0)
0x29c: IF (Stack[-1] == 0) GOTO 0x29e; Pop(1)

0x29d: GOTO 0x2f3

0x29e: @ rand(Stack[-1])
0x29f: Pop(0)
0x2a0: PushEmpty(bool)
0x2a1: Stack[-1] = (bool) 1
0x2a2: Push((float)0.2)
0x2a3: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x2a4: IF (Stack[-1] == 0) GOTO 0x2aa; Pop(1)

0x2a5: PushEmpty(bool)
0x2a6: Call2 0x478

0x2a7: Pop(0)
0x2a8: IF (Stack[-1] == 0) GOTO 0x2aa; Pop(1)

0x2a9: Stack[-1] = (bool) 0
0x2aa: IF (Stack[-1] == 0) GOTO 0x2bb; Pop(1)

0x2ab: @ Face(Stack[-0])
0x2ac: Pop(0)
0x2ad: PushEmpty()
0x2ae: Call2 0x4a8

0x2af: Pop(0)
0x2b0: Push("all")
0x2b1: Push("attack_stay")
0x2b2: @ PlayAnimation(Stack[-2], Stack[-1])
0x2b3: Pop(2)
0x2b4: PushEmpty(bool, float)
0x2b5: Stack[-1] = Stack[-25]
0x2b6: Call2 0x3f4

0x2b7: Pop(2)
0x2b8: @ StopAsync()
0x2b9: Pop(0)
0x2ba: GOTO 0x2e9

0x2bb: @ Face(Stack[-0])
0x2bc: Pop(0)
0x2bd: Push("all")
0x2be: Push("fjump")
0x2bf: @ PlayAnimation(Stack[-2], Stack[-1])
0x2c0: Pop(2)
0x2c1: @ WaitForAnimEnd()
0x2c2: Pop(0)
0x2c3: PushEmpty()
0x2c4: Call2 0x4a3

0x2c5: Pop(0)
0x2c6: Push(CVector(0.0, 0.0, 0.0))
0x2c7: @ SetSpeed(Stack[-1])
0x2c8: Pop(1)
0x2c9: @ Stop()
0x2ca: Pop(0)
0x2cb: @ StopAsync()
0x2cc: Pop(0)
0x2cd: PushEmpty(bool)
0x2ce: Call2 0x478

0x2cf: Pop(0)
0x2d0: Pop(1); Push((bool) Stack[-1] == 0)
0x2d1: IF (Stack[-1] == 0) GOTO 0x2e9; Pop(1)

0x2d2: PushEmpty(bool, object)
0x2d3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2d4: Call2 0x6ac

0x2d5: Pop(1)
0x2d6: Pop(1); Push((bool) Stack[-1] == 0)
0x2d7: IF (Stack[-1] == 0) GOTO 0x2d9; Pop(1)

0x2d8: GOTO 0x2f3

0x2d9: @@ GetPFPosition(Stack[-10])
0x2da: Pop(0)
0x2db: @ GetPFPosition(Stack[-9])
0x2dc: Pop(0)
0x2dd: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0x2de: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x2df: Pop(0); Push(Stack[-23] * Stack[-23]);
0x2e0: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x2e1: IF (Stack[-1] == 0) GOTO 0x2e9; Pop(1)

0x2e2: PushEmpty(bool, float)
0x2e3: Stack[-1] = Stack[-25]
0x2e4: Call2 0x34e

0x2e5: Pop(1)
0x2e6: Pop(1); Push((bool) Stack[-1] == 0)
0x2e7: IF (Stack[-1] == 0) GOTO 0x2e9; Pop(1)

0x2e8: GOTO 0x2f3

0x2e9: GOTO 0x2f2

0x2ea: PushEmpty(bool, float)
0x2eb: Stack[-1] = Stack[-25]
0x2ec: Call2 0x34e

0x2ed: Pop(1)
0x2ee: Pop(1); Push((bool) Stack[-1] == 0)
0x2ef: IF (Stack[-1] == 0) GOTO 0x2f1; Pop(1)

0x2f0: GOTO 0x2f3

0x2f1: Stack[-7] = (bool) 1
0x2f2: GOTO 0x247

0x2f3: @ WaitForAnimEnd()
0x2f4: Pop(0)
0x2f5: Push( Stack[3 + Tasks[-1].StackPointer] )
0x2f6: IF (Stack[-1] == 0) GOTO 0x2f8; Pop(1)

0x2f7: Return(); Pop(22)

0x2f8: Push("all")
0x2f9: Push("attack_off")
0x2fa: @ PlayAnimation(Stack[-2], Stack[-1])
0x2fb: Pop(2)
0x2fc: @ WaitForAnimEnd()
0x2fd: Pop(0)
0x2fe: Push(Stack[-8])
0x2ff: IF (Stack[-1] == 0) GOTO 0x303; Pop(1)

0x300: Push((float)2.0)
0x301: @ Sleep(Stack[-1])
0x302: Pop(1)
0x303: Return(); Pop(22)

0x304: PushEmpty(bool, bool, cvector, bool, bool, cvector)
0x305: Stack[1 + Tasks[-1].StackPointer] = (int)0
0x306: Push("all")
0x307: Push("attack_begin")
0x308: Push((int) 1)
0x309: Pop(1); Push(Stack[1 + StackPtr] + Stack[-1]);
0x30a: Pop(2); Push(Stack[-2] + Stack[-1]);
0x30b: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0x30c: Pop(2)
0x30d: Pop(0); Push((bool) Stack[-3] == 0)
0x30e: IF (Stack[-1] == 0) GOTO 0x310; Pop(1)

0x30f: GOTO 0x313

0x310: Push((int) 1)
0x311: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x312: GOTO 0x306

0x313: Stack[2 + Tasks[-1].StackPointer] = (int)0
0x314: Push("attack")
0x315: Push((int) 1)
0x316: Pop(1); Push(Stack[2 + StackPtr] + Stack[-1]);
0x317: Pop(2); Push(Stack[-2] + Stack[-1]);
0x318: @ IsExisting3DSound(Stack[-3], Stack[-1])
0x319: Pop(1)
0x31a: Pop(0); Push((bool) Stack[-2] == 0)
0x31b: IF (Stack[-1] == 0) GOTO 0x31d; Pop(1)

0x31c: GOTO 0x320

0x31d: Push((int) 1)
0x31e: Stack[2 + Tasks[-1].StackPointer] = Stack[2 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x31f: GOTO 0x314

0x320: Push("all")
0x321: Push("bjump")
0x322: @ GetAnimationOffset(Stack[-3], Stack[-2], Stack[-1])
0x323: Pop(2)
0x324: Push(CvectorIndex(Stack[-1], 2))
0x325: Stack[4 + Tasks[-1].StackPointer] = -Stack[-1]; Pop(1);
0x326: Return(); Pop(6)

0x327: PushEmpty(object, float, float, object, float, float)
0x328: Push((float)0.9)
0x329: Pop(1); Push(Stack[-9] * Stack[-1]);
0x32a: @ GetVictim(Stack[-1], Stack[-4])
0x32b: Pop(1)
0x32c: @ ReportAttack(Stack[-0])
0x32d: Pop(0)
0x32e: Pop(0); Push((bool) Stack[-3] == Stack[0 + Tasks[-1].StackPointer])
0x32f: IF (Stack[-1] == 0) GOTO 0x34c; Pop(1)

0x330: PushEmpty(float, object, int)
0x331: Stack[-2] = Stack[-6]
0x332: Stack[-1] = Stack[-10]
0x333: Call2 0x1ee

0x334: Stack[-5] = Stack[-3]
0x335: Pop(3)
0x336: PushEmpty(float, object, float, int)
0x337: Stack[-3] = Stack[-7]
0x338: Stack[-2] = Stack[-6]
0x339: PushEmpty(int, object, int)
0x33a: Stack[-2] = Stack[-10]
0x33b: Stack[-1] = Stack[-14]
0x33c: Call2 0x1f1

0x33d: Stack[-4] = Stack[-3]
0x33e: Pop(3)
0x33f: Call2 0x61b

0x340: Stack[-5] = Stack[-4]
0x341: Pop(4)
0x342: PushEmpty(int)
0x343: Call2 0x1f4

0x344: Pop(0)
0x345: @ ReportHit(Stack[-0], Stack[-1], Stack[-2], Stack[-3])
0x346: Pop(1)
0x347: PushEmpty(object, float)
0x348: Stack[-2] = Stack[-5]
0x349: Stack[-1] = Stack[-3]
0x34a: Call2 0x1f6

0x34b: Pop(2)
0x34c: Return(); Pop(6)

0x34d: Stack[-3] = 0
0x34e: PushEmpty(int, bool, int, string, int, bool, int, string)
0x34f: PushEmpty()
0x350: Call2 0x4a3

0x351: Pop(0)
0x352: @ irand(Stack[-4], Stack[-1])
0x353: Pop(0)
0x354: Push((int) 1)
0x355: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x356: @ Face(Stack[-0])
0x357: Pop(0)
0x358: Push((bool) 1)
0x359: @ SetAttackState(Stack[-1])
0x35a: Pop(1)
0x35b: PushEmpty()
0x35c: Call2 0x82b

0x35d: Pop(0)
0x35e: Push("all")
0x35f: Push("attack_begin")
0x360: Pop(1); Push(Stack[-1] + Stack[-6]);
0x361: @ PlayAnimation(Stack[-2], Stack[-1])
0x362: Pop(2)
0x363: @ WaitForAnimEnd()
0x364: Pop(0)
0x365: PushEmpty()
0x366: Call2 0x483

0x367: Pop(0)
0x368: PushEmpty(bool, object)
0x369: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x36a: Call2 0x6ac

0x36b: Pop(1)
0x36c: Pop(1); Push((bool) Stack[-1] == 0)
0x36d: IF (Stack[-1] == 0) GOTO 0x372; Pop(1)

0x36e: @ StopAsync()
0x36f: Pop(0)
0x370: Stack[-10] = (bool) 0
0x371: Return(); Pop(8)

0x372: PushEmpty(float, int)
0x373: Stack[-2] = Stack[-11]
0x374: Stack[-1] = Stack[-6]
0x375: Call2 0x327

0x376: Pop(2)
0x377: Push("all")
0x378: Push("attack_middle")
0x379: Pop(1); Push(Stack[-1] + Stack[-6]);
0x37a: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0x37b: Pop(2)
0x37c: Push(Stack[-3])
0x37d: IF (Stack[-1] == 0) GOTO 0x3c3; Pop(1)

0x37e: PushEmpty()
0x37f: Call2 0x82b

0x380: Pop(0)
0x381: Push("all")
0x382: Push("attack_middle")
0x383: Pop(1); Push(Stack[-1] + Stack[-6]);
0x384: @ PlayAnimation(Stack[-2], Stack[-1])
0x385: Pop(2)
0x386: @ WaitForAnimEnd()
0x387: Pop(0)
0x388: PushEmpty()
0x389: Call2 0x4a3

0x38a: Pop(0)
0x38b: PushEmpty(bool, object)
0x38c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x38d: Call2 0x6ac

0x38e: Pop(1)
0x38f: Pop(1); Push((bool) Stack[-1] == 0)
0x390: IF (Stack[-1] == 0) GOTO 0x395; Pop(1)

0x391: @ StopAsync()
0x392: Pop(0)
0x393: Stack[-10] = (bool) 0
0x394: Return(); Pop(8)

0x395: PushEmpty(float, int)
0x396: Stack[-2] = Stack[-11]
0x397: Stack[-1] = Stack[-6]
0x398: Call2 0x327

0x399: Pop(2)
0x39a: Stack[-2] = (int) 1
0x39b: Push("attack_middle")
0x39c: Pop(1); Push(Stack[-1] + Stack[-5]);
0x39d: Push("_")
0x39e: Pop(2); Push(Stack[-2] + Stack[-1]);
0x39f: Stack[-2] = Stack[-1] + Stack[-3]; Pop(1);
0x3a0: Push("all")
0x3a1: @ HasAnimation(Stack[-4], Stack[-1], Stack[-2])
0x3a2: Pop(1)
0x3a3: Pop(0); Push((bool) Stack[-3] == 0)
0x3a4: IF (Stack[-1] == 0) GOTO 0x3a6; Pop(1)

0x3a5: GOTO 0x3c3

0x3a6: PushEmpty()
0x3a7: Call2 0x82b

0x3a8: Pop(0)
0x3a9: Push("all")
0x3aa: @ PlayAnimation(Stack[-1], Stack[-2])
0x3ab: Pop(1)
0x3ac: @ WaitForAnimEnd()
0x3ad: Pop(0)
0x3ae: PushEmpty()
0x3af: Call2 0x4a3

0x3b0: Pop(0)
0x3b1: PushEmpty(bool, object)
0x3b2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3b3: Call2 0x6ac

0x3b4: Pop(1)
0x3b5: Pop(1); Push((bool) Stack[-1] == 0)
0x3b6: IF (Stack[-1] == 0) GOTO 0x3bb; Pop(1)

0x3b7: @ StopAsync()
0x3b8: Pop(0)
0x3b9: Stack[-10] = (bool) 0
0x3ba: Return(); Pop(8)

0x3bb: PushEmpty(float, int)
0x3bc: Stack[-2] = Stack[-11]
0x3bd: Stack[-1] = Stack[-6]
0x3be: Call2 0x327

0x3bf: Pop(2)
0x3c0: Push((int) 1)
0x3c1: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x3c2: GOTO 0x39b

0x3c3: Push((bool) 0)
0x3c4: @ SetAttackState(Stack[-1])
0x3c5: Pop(1)
0x3c6: Push("all")
0x3c7: Push("attack_end")
0x3c8: Pop(1); Push(Stack[-1] + Stack[-6]);
0x3c9: @ PlayAnimation(Stack[-2], Stack[-1])
0x3ca: Pop(2)
0x3cb: PushEmpty(bool)
0x3cc: Call2 0x4ad

0x3cd: Pop(0)
0x3ce: IF (Stack[-1] == 0) GOTO 0x3d5; Pop(1)

0x3cf: PushEmpty(bool, float)
0x3d0: Stack[-1] = (float) 0.45
0x3d1: Call2 0x3d9

0x3d2: Pop(2)
0x3d3: @ StopAsync()
0x3d4: Pop(0)
0x3d5: Stack[-10] = (bool) 1
0x3d6: Return(); Pop(8)

0x3d7: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x3d8: Return(); Pop(0)

0x3d9: PushEmpty(float, bool, float, bool)
0x3da: @ rand(Stack[-2])
0x3db: Pop(0)
0x3dc: Pop(0); Push((bool) Stack[-2] < Stack[-5])
0x3dd: IF (Stack[-1] == 0) GOTO 0x3ed; Pop(1)

0x3de: @ IsAnimationPlaying(Stack[-1])
0x3df: Pop(0)
0x3e0: Pop(0); Push((bool) Stack[-1] == 0)
0x3e1: IF (Stack[-1] == 0) GOTO 0x3e3; Pop(1)

0x3e2: GOTO 0x3ec

0x3e3: PushEmpty(bool)
0x3e4: Call2 0x43b

0x3e5: Pop(0)
0x3e6: IF (Stack[-1] == 0) GOTO 0x3e9; Pop(1)

0x3e7: Stack[-6] = (bool) 1
0x3e8: Return(); Pop(4)

0x3e9: @ sync()
0x3ea: Pop(0)
0x3eb: GOTO 0x3de

0x3ec: GOTO 0x3f2

0x3ed: @ WaitForAnimEnd()
0x3ee: Pop(0)
0x3ef: PushEmpty()
0x3f0: Call2 0x4a3

0x3f1: Pop(0)
0x3f2: Stack[-6] = (bool) 0
0x3f3: Return(); Pop(4)

0x3f4: PushEmpty(bool, cvector, cvector, cvector, float, bool, cvector, cvector, cvector, float)
0x3f5: @ IsAnimationPlaying(Stack[-5])
0x3f6: Pop(0)
0x3f7: Pop(0); Push((bool) Stack[-5] == 0)
0x3f8: IF (Stack[-1] == 0) GOTO 0x3fa; Pop(1)

0x3f9: GOTO 0x41a

0x3fa: PushEmpty(bool)
0x3fb: Call2 0x43b

0x3fc: Pop(0)
0x3fd: IF (Stack[-1] == 0) GOTO 0x400; Pop(1)

0x3fe: Stack[-12] = (bool) 1
0x3ff: Return(); Pop(10)

0x400: PushEmpty(bool, object)
0x401: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x402: Call2 0x6ac

0x403: Pop(1)
0x404: Pop(1); Push((bool) Stack[-1] == 0)
0x405: IF (Stack[-1] == 0) GOTO 0x408; Pop(1)

0x406: Stack[-12] = (bool) 0
0x407: Return(); Pop(10)

0x408: @@ GetPFPosition(Stack[-4])
0x409: Pop(0)
0x40a: @ GetPFPosition(Stack[-3])
0x40b: Pop(0)
0x40c: Stack[-2] = Stack[-4] - Stack[-3]; Pop(0);
0x40d: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x40e: Pop(0); Push(Stack[-11] * Stack[-11]);
0x40f: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x410: IF (Stack[-1] == 0) GOTO 0x417; Pop(1)

0x411: PushEmpty(bool, float)
0x412: Stack[-1] = Stack[-13]
0x413: Call2 0x34e

0x414: Pop(2)
0x415: Stack[-12] = (bool) 1
0x416: Return(); Pop(10)

0x417: @ sync()
0x418: Pop(0)
0x419: GOTO 0x3f5

0x41a: PushEmpty()
0x41b: Call2 0x4a3

0x41c: Pop(0)
0x41d: Stack[-12] = (bool) 0
0x41e: Return(); Pop(10)

0x41f: PushEmpty(cvector, cvector, cvector, float, float, cvector, cvector, cvector, float, float)
0x420: PushEmpty(bool, object)
0x421: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x422: Call2 0x6ac

0x423: Pop(1)
0x424: Pop(1); Push((bool) Stack[-1] == 0)
0x425: IF (Stack[-1] == 0) GOTO 0x428; Pop(1)

0x426: Stack[-11] = (bool) 0
0x427: Return(); Pop(10)

0x428: PushEmpty(bool)
0x429: Call2 0x478

0x42a: Pop(0)
0x42b: IF (Stack[-1] == 0) GOTO 0x439; Pop(1)

0x42c: @@ GetPFPosition(Stack[-5])
0x42d: Pop(0)
0x42e: @ GetPFPosition(Stack[-4])
0x42f: Pop(0)
0x430: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x431: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x432: @@ GetAttackDistance(Stack[-1])
0x433: Pop(0)
0x434: Push((int) 50)
0x435: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x436: Pop(0); Push(Stack[-1] * Stack[-1]);
0x437: Stack[-12] = Stack[-3] <= Stack[-1]; Pop(1);
0x438: Return(); Pop(10)

0x439: Stack[-11] = (bool) 0
0x43a: Return(); Pop(10)

0x43b: PushEmpty(bool)
0x43c: Stack[-1] = (bool) 0
0x43d: PushEmpty(bool)
0x43e: Call2 0x41f

0x43f: Pop(0)
0x440: IF (Stack[-1] == 0) GOTO 0x446; Pop(1)

0x441: PushEmpty(bool)
0x442: Call2 0x44b

0x443: Pop(0)
0x444: IF (Stack[-1] == 0) GOTO 0x446; Pop(1)

0x445: Stack[-1] = (bool) 1
0x446: IF (Stack[-1] == 0) GOTO 0x449; Pop(1)

0x447: Stack[-1] = (bool) 1
0x448: Return(); Pop(0)

0x449: Stack[-1] = (bool) 0
0x44a: Return(); Pop(0)

0x44b: PushEmpty(object, bool, float, cvector, cvector, object, bool, float, cvector, cvector)
0x44c: @ GetScene(Stack[-5])
0x44d: Pop(0)
0x44e: Stack[-4] = (bool) 0
0x44f: PushEmpty(cvector, object)
0x450: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x451: Call2 0x5e5

0x452: Pop(1)
0x453: Pop(1); Push(( -Stack[-1])
0x454: @ FindDirLength(Stack[-4], Stack[-1], Stack[-4])
0x455: Pop(1)
0x456: Pop(0); Push((bool) Stack[-3] < Stack[4 + Tasks[-1].StackPointer])
0x457: IF (Stack[-1] == 0) GOTO 0x459; Pop(1)

0x458: GOTO 0x475

0x459: @ Face(Stack[-0])
0x45a: Pop(0)
0x45b: Push("all")
0x45c: Push("bjump")
0x45d: @ PlayAnimation(Stack[-2], Stack[-1])
0x45e: Pop(2)
0x45f: @@ GetPFPosition(Stack[-2])
0x460: Pop(0)
0x461: @ GetPFPosition(Stack[-1])
0x462: Pop(0)
0x463: @ WaitForAnimEnd()
0x464: Pop(0)
0x465: PushEmpty()
0x466: Call2 0x4a3

0x467: Pop(0)
0x468: @ StopAsync()
0x469: Pop(0)
0x46a: Push(CVector(0.0, 0.0, 0.0))
0x46b: @ SetSpeed(Stack[-1])
0x46c: Pop(1)
0x46d: Stack[-4] = (bool) 1
0x46e: PushEmpty(bool)
0x46f: Call2 0x41f

0x470: Pop(0)
0x471: Pop(1); Push((bool) Stack[-1] == 0)
0x472: IF (Stack[-1] == 0) GOTO 0x474; Pop(1)

0x473: GOTO 0x475

0x474: GOTO 0x44f

0x475: Stack[-11] = Stack[-4]
0x476: Return(); Pop(10)

0x477: Stack[-5] = 0
0x478: PushEmpty(bool, bool)
0x479: Push("IsAttacking")
0x47a: Push((int) 1)
0x47b: Pop(2); Push(IsFuncExist(Stack[0 + Tasks[-1].StackPointer], Stack[-2], Stack[-1]))
0x47c: IF (Stack[-1] == 0) GOTO 0x481; Pop(1)

0x47d: @@ IsAttacking(Stack[-1])
0x47e: Pop(0)
0x47f: Stack[-3] = Stack[-1]
0x480: Return(); Pop(2)

0x481: Stack[-3] = (bool) 0
0x482: Return(); Pop(2)

0x483: PushEmpty(float, int, float, int)
0x484: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x485: IF (Stack[-1] == 0) GOTO 0x487; Pop(1)

0x486: Return(); Pop(4)

0x487: Push( Stack[5 + Tasks[-1].StackPointer] )
0x488: IF (Stack[-1] == 0) GOTO 0x48f; Pop(1)

0x489: Push((int) -1)
0x48a: Stack[5 + Tasks[-1].StackPointer] = Stack[5 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x48b: Push((int) 0)
0x48c: Pop(1); Push((bool) Stack[5 + Tasks[-1].StackPointer] > Stack[-1])
0x48d: IF (Stack[-1] == 0) GOTO 0x48f; Pop(1)

0x48e: Return(); Pop(4)

0x48f: @ rand(Stack[-2])
0x490: Pop(0)
0x491: PushEmpty(float)
0x492: Call2 0x4b1

0x493: Pop(0)
0x494: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x495: IF (Stack[-1] == 0) GOTO 0x4a2; Pop(1)

0x496: @ irand(Stack[-1], Stack[-2])
0x497: Pop(0)
0x498: Push((int) 1)
0x499: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x49a: Push("attack")
0x49b: Pop(1); Push(Stack[-1] + Stack[-2]);
0x49c: @ Speak(Stack[-1])
0x49d: Pop(1)
0x49e: PushEmpty(int)
0x49f: Call2 0x4af

0x4a0: Stack[5 + Tasks[-1].StackPointer] = Stack[-1]
0x4a1: Pop(1)
0x4a2: Return(); Pop(4)

0x4a3: PushEmpty(object)
0x4a4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4a5: Call2 0x822

0x4a6: Pop(1)
0x4a7: Return(); Pop(0)

0x4a8: PushEmpty(string)
0x4a9: Stack[-1] = "attack_stay"
0x4aa: Call2 0x77b

0x4ab: Pop(1)
0x4ac: Return(); Pop(0)

0x4ad: Stack[-1] = (bool) 1
0x4ae: Return(); Pop(0)

0x4af: Stack[-1] = (int) 1
0x4b0: Return(); Pop(0)

0x4b1: Stack[-1] = (float) 0.5
0x4b2: Return(); Pop(0)

0x4b3: PushEmpty()
0x4b4: PushEmpty(object)
0x4b5: Stack[-1] = Stack[-2]
0x4b6: Call2 0x90e

0x4b7: Pop(1)
0x4b8: Return(); Pop(0)

0x4b9: PushEmpty()
0x4ba: PushEmpty(bool, object, object)
0x4bb: Stack[-2] = Stack[-6]
0x4bc: Stack[-1] = Stack[-5]
0x4bd: Call2 0x910

0x4be: Pop(3)
0x4bf: Return(); Pop(0)

0x4c0: PushEmpty()
0x4c1: Push("kill")
0x4c2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4c3: IF (Stack[-1] == 0) GOTO 0x4ca; Pop(1)

0x4c4: Push(GlobalVars[0])
0x4c5: Stack[-1] = (bool) 1
0x4c6: GlobalVars[0] = Stack[-1]; Pop(1)
0x4c7: PushEmpty()
0x4c8: Call2 0x50a

0x4c9: Pop(0)
0x4ca: Return(); Pop(0)

0x4cb: PushEmpty(bool, bool, bool, bool)
0x4cc: PushEmpty(object)
0x4cd: Stack[-1] = Stack[-10]
0x4ce: Call2 0x822

0x4cf: Pop(1)
0x4d0: Push((int) 1)
0x4d1: Push((int) 5)
0x4d2: @ SetTimer(Stack[-2], Stack[-1])
0x4d3: Pop(2)
0x4d4: @ CanSee(Stack[-2], Stack[-9])
0x4d5: Pop(0)
0x4d6: Push(Stack[-2])
0x4d7: IF (Stack[-1] == 0) GOTO 0x4de; Pop(1)

0x4d8: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x4d9: PushEmpty(object)
0x4da: Stack[-1] = Stack[-10]
0x4db: Call2 0x765

0x4dc: Pop(1)
0x4dd: GOTO 0x4df

0x4de: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x4df: PushEmpty(bool, object)
0x4e0: Stack[-1] = Stack[-11]
0x4e1: Call2 0x5f4

0x4e2: Pop(1)
0x4e3: IF (Stack[-1] == 0) GOTO 0x4e9; Pop(1)

0x4e4: PushEmpty(object)
0x4e5: Call2 0x7a4

0x4e6: Pop(0)
0x4e7: @ SendPlayerEnemy(Stack[-10], Stack[-1])
0x4e8: Pop(1)
0x4e9: PushEmpty(bool, object, float, float, bool, bool)
0x4ea: Stack[-5] = Stack[-15]
0x4eb: Stack[-4] = Stack[-14]
0x4ec: Stack[-3] = Stack[-13]
0x4ed: Stack[-2] = Stack[-12]
0x4ee: Stack[-1] = Stack[-11]
0x4ef: Call2 0x534

0x4f0: Stack[-7] = Stack[-6]
0x4f1: Pop(6)
0x4f2: Push( Stack[2 + Tasks[-1].StackPointer] )
0x4f3: IF (Stack[-1] == 0) GOTO 0x4f7; Pop(1)

0x4f4: Push("head")
0x4f5: @ UnlookAsync(Stack[-1])
0x4f6: Pop(1)
0x4f7: Push((int) 1)
0x4f8: @ KillTimer(Stack[-1])
0x4f9: Pop(1)
0x4fa: Stack[-10] = Stack[-1]
0x4fb: Return(); Pop(4)

0x4fc: PushEmpty()
0x4fd: Push((int) 1)
0x4fe: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4ff: IF (Stack[-1] == 0) GOTO 0x505; Pop(1)

0x500: PushEmpty(object)
0x501: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x502: Call2 0x822

0x503: Pop(1)
0x504: GOTO 0x509

0x505: PushEmpty(int)
0x506: Stack[-1] = Stack[-2]
0x507: Call2 0x59a

0x508: Pop(1)
0x509: Return(); Pop(0)

0x50a: Push((int) 1)
0x50b: @ KillTimer(Stack[-1])
0x50c: Pop(1)
0x50d: Push( Stack[2 + Tasks[-1].StackPointer] )
0x50e: IF (Stack[-1] == 0) GOTO 0x513; Pop(1)

0x50f: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x510: Push("head")
0x511: @ UnlookAsync(Stack[-1])
0x512: Pop(1)
0x513: PushEmpty()
0x514: Call2 0x5b0

0x515: Pop(0)
0x516: Return(); Pop(0)

0x517: PushEmpty()
0x518: PushEmpty(bool)
0x519: Stack[-1] = (bool) 0
0x51a: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0x51b: IF (Stack[-1] == 0) GOTO 0x51f; Pop(1)

0x51c: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x51d: IF (Stack[-1] == 0) GOTO 0x51f; Pop(1)

0x51e: Stack[-1] = (bool) 1
0x51f: IF (Stack[-1] == 0) GOTO 0x525; Pop(1)

0x520: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x521: PushEmpty(object)
0x522: Stack[-1] = Stack[-2]
0x523: Call2 0x765

0x524: Pop(1)
0x525: Return(); Pop(0)

0x526: PushEmpty()
0x527: PushEmpty(bool)
0x528: Stack[-1] = (bool) 0
0x529: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0x52a: IF (Stack[-1] == 0) GOTO 0x52e; Pop(1)

0x52b: Push( Stack[2 + Tasks[-1].StackPointer] )
0x52c: IF (Stack[-1] == 0) GOTO 0x52e; Pop(1)

0x52d: Stack[-1] = (bool) 1
0x52e: IF (Stack[-1] == 0) GOTO 0x533; Pop(1)

0x52f: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x530: Push("head")
0x531: @ UnlookAsync(Stack[-1])
0x532: Pop(1)
0x533: Return(); Pop(0)

0x534: PushEmpty(bool, bool, object, cvector, cvector, cvector, float, object, bool, bool, object, cvector, cvector, cvector, float, object)
0x535: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x536: Stack[1 + Tasks[-1].StackPointer] = Stack[-21]
0x537: Stack[-7] = Stack[-17]
0x538: PushEmpty(bool, object)
0x539: Stack[-1] = Stack[-23]
0x53a: Call2 0x5c0

0x53b: Pop(1)
0x53c: Pop(1); Push((bool) Stack[-1] == 0)
0x53d: IF (Stack[-1] == 0) GOTO 0x540; Pop(1)

0x53e: Stack[-22] = (bool) 0
0x53f: Return(); Pop(16)

0x540: @@ GetPosition(Stack[-5])
0x541: Pop(0)
0x542: @ GetPosition(Stack[-4])
0x543: Pop(0)
0x544: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x545: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x546: PushEmpty(bool)
0x547: Stack[-1] = (bool) 0
0x548: Push((int) 0)
0x549: Pop(1); Push((bool) Stack[-21] > Stack[-1])
0x54a: IF (Stack[-1] == 0) GOTO 0x54f; Pop(1)

0x54b: Pop(0); Push(Stack[-20] * Stack[-20]);
0x54c: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x54d: IF (Stack[-1] == 0) GOTO 0x54f; Pop(1)

0x54e: Stack[-1] = (bool) 1
0x54f: IF (Stack[-1] == 0) GOTO 0x554; Pop(1)

0x550: @ Stop()
0x551: Pop(0)
0x552: Stack[-22] = (bool) 0
0x553: Return(); Pop(16)

0x554: Pop(0); Push(Stack[-20] * Stack[-20]);
0x555: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x556: IF (Stack[-1] == 0) GOTO 0x592; Pop(1)

0x557: @@ GetPFPosition(Stack[-5])
0x558: Pop(0)
0x559: @ FindPathTo(Stack[-1], Stack[-5])
0x55a: Pop(0)
0x55b: Pop(0); Push(( Stack[-1] != 0 )
0x55c: IF (Stack[-1] == 0) GOTO 0x55f; Pop(1)

0x55d: Stack[-6] = Stack[-1]
0x55e: Stack[-1] = 0
0x55f: Pop(0); Push(( Stack[-6] != 0 )
0x560: IF (Stack[-1] == 0) GOTO 0x580; Pop(1)

0x561: Push(Stack[-7])
0x562: IF (Stack[-1] == 0) GOTO 0x569; Pop(1)

0x563: Stack[-7] = (bool) 0
0x564: @ RotatePath(Stack[-6], Stack[-8])
0x565: Pop(0)
0x566: Pop(0); Push((bool) Stack[-8] == 0)
0x567: IF (Stack[-1] == 0) GOTO 0x569; Pop(1)

0x568: GOTO 0x598

0x569: Push((int) 0)
0x56a: Push((float)0.3)
0x56b: @ SetTimer(Stack[-2], Stack[-1])
0x56c: Pop(2)
0x56d: PushEmpty(string)
0x56e: Call2 0x5c7

0x56f: Pop(0)
0x570: PushEmpty(string)
0x571: Call2 0x5c9

0x572: Pop(0)
0x573: @ FollowPath(Stack[-8], Stack[-20], Stack[-10], Stack[-2], Stack[-1])
0x574: Pop(2)
0x575: Pop(0); Push((bool) Stack[-8] == 0)
0x576: IF (Stack[-1] == 0) GOTO 0x57e; Pop(1)

0x577: Push( Stack[0 + Tasks[-1].StackPointer] )
0x578: IF (Stack[-1] == 0) GOTO 0x57c; Pop(1)

0x579: Stack[-6] = 0
0x57a: GOTO 0x598

0x57b: GOTO 0x57d

0x57c: GOTO 0x597

0x57d: GOTO 0x57f

0x57e: Stack[-6] = 0
0x57f: GOTO 0x590

0x580: Push((int) 0)
0x581: @ KillTimer(Stack[-1])
0x582: Pop(1)
0x583: Push((float)0.5)
0x584: @ Sleep(Stack[-1], Stack[-9])
0x585: Pop(1)
0x586: Pop(0); Push((bool) Stack[-8] == 0)
0x587: IF (Stack[-1] == 0) GOTO 0x58c; Pop(1)

0x588: Push( Stack[0 + Tasks[-1].StackPointer] )
0x589: IF (Stack[-1] == 0) GOTO 0x58c; Pop(1)

0x58a: Stack[-6] = 0
0x58b: GOTO 0x598

0x58c: Push((int) 0)
0x58d: Push((float)0.3)
0x58e: @ SetTimer(Stack[-2], Stack[-1])
0x58f: Pop(2)
0x590: Stack[-1] = 0
0x591: GOTO 0x596

0x592: Push((int) 0)
0x593: @ KillTimer(Stack[-1])
0x594: Pop(1)
0x595: GOTO 0x598

0x596: Stack[-6] = 0
0x597: GOTO 0x538

0x598: Stack[-22] = !Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x599: Return(); Pop(16)

0x59a: PushEmpty()
0x59b: Push((int) 0)
0x59c: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x59d: IF (Stack[-1] == 0) GOTO 0x59f; Pop(1)

0x59e: Return(); Pop(0)

0x59f: PushEmpty(bool, object)
0x5a0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5a1: Call2 0x5c0

0x5a2: Pop(1)
0x5a3: Pop(1); Push((bool) Stack[-1] == 0)
0x5a4: IF (Stack[-1] == 0) GOTO 0x5a6; Pop(1)

0x5a5: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x5a6: Push((int) 0)
0x5a7: @ KillTimer(Stack[-1])
0x5a8: Pop(1)
0x5a9: @ Stop()
0x5aa: Pop(0)
0x5ab: Return(); Pop(0)

0x5ac: PushEmpty()
0x5ad: @ RequestClearPath(Stack[-1])
0x5ae: Pop(0)
0x5af: Return(); Pop(0)

0x5b0: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x5b1: Push((int) 0)
0x5b2: @ KillTimer(Stack[-1])
0x5b3: Pop(1)
0x5b4: @ Stop()
0x5b5: Pop(0)
0x5b6: Return(); Pop(0)

0x5b7: PushEmpty()
0x5b8: PushEmpty()
0x5b9: Call2 0x50a

0x5ba: Pop(0)
0x5bb: PushEmpty(object)
0x5bc: Stack[-1] = Stack[-2]
0x5bd: Call2 0x87b

0x5be: Pop(1)
0x5bf: Return(); Pop(0)

0x5c0: PushEmpty()
0x5c1: PushEmpty(bool, object)
0x5c2: Stack[-1] = Stack[-3]
0x5c3: Call2 0x6ac

0x5c4: Stack[-4] = Stack[-2]
0x5c5: Pop(2)
0x5c6: Return(); Pop(0)

0x5c7: Stack[-1] = "walk"
0x5c8: Return(); Pop(0)

0x5c9: Stack[-1] = "run"
0x5ca: Return(); Pop(0)

0x5cb: PushEmpty()
0x5cc: PushEmpty(bool, object)
0x5cd: Stack[-1] = Stack[-3]
0x5ce: Push(-2, 0); TaskCall(2)
0x5cf: Call2 0x12f

0x5d0: Pop(-2, 0); TaskReturn
0x5d1: Pop(2)
0x5d2: Push((int) 1)
0x5d3: @ Sleep(Stack[-1])
0x5d4: Pop(1)
0x5d5: GOTO 0x5cc

0x5d6: Return(); Pop(0)

0x5d7: PushEmpty()
0x5d8: Push((int) 2)
0x5d9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5da: IF (Stack[-1] == 0) GOTO 0x5de; Pop(1)

0x5db: Stack[-2] = "fire"
0x5dc: Return(); Pop(0)

0x5dd: GOTO 0x5e3

0x5de: Push((int) 1)
0x5df: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5e0: IF (Stack[-1] == 0) GOTO 0x5e3; Pop(1)

0x5e1: Stack[-2] = "bullet"
0x5e2: Return(); Pop(0)

0x5e3: Stack[-2] = "phys"
0x5e4: Return(); Pop(0)

0x5e5: PushEmpty(cvector, cvector, cvector, cvector)
0x5e6: @ GetPosition(Stack[-2])
0x5e7: Pop(0)
0x5e8: @@ GetPosition(Stack[-1])
0x5e9: Pop(0)
0x5ea: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x5eb: Return(); Pop(4)

0x5ec: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x5ed: @ GetPosition(Stack[-3])
0x5ee: Pop(0)
0x5ef: @@ GetPosition(Stack[-2])
0x5f0: Pop(0)
0x5f1: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x5f2: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x5f3: Return(); Pop(6)

0x5f4: PushEmpty(bool, bool)
0x5f5: @ IsPlayerActor(Stack[-3], Stack[-1])
0x5f6: Pop(0)
0x5f7: Stack[-4] = Stack[-1]
0x5f8: Return(); Pop(2)

0x5f9: PushEmpty(bool, bool)
0x5fa: Push("HasProperty")
0x5fb: Push((int) 2)
0x5fc: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x5fd: Pop(1); Push((bool) Stack[-1] == 0)
0x5fe: IF (Stack[-1] == 0) GOTO 0x601; Pop(1)

0x5ff: Stack[-5] = (bool) 0
0x600: Return(); Pop(2)

0x601: @@ HasProperty(Stack[-3], Stack[-1])
0x602: Pop(0)
0x603: Stack[-5] = Stack[-1]
0x604: Return(); Pop(2)

0x605: PushEmpty(float, float)
0x606: PushEmpty(bool, object, string)
0x607: Stack[-2] = Stack[-10]
0x608: Stack[-1] = Stack[-9]
0x609: Call2 0x5f9

0x60a: Pop(2)
0x60b: Pop(1); Push((bool) Stack[-1] == 0)
0x60c: IF (Stack[-1] == 0) GOTO 0x60f; Pop(1)

0x60d: Stack[-8] = (bool) 0
0x60e: Return(); Pop(2)

0x60f: @@ GetProperty(Stack[-6], Stack[-1])
0x610: Pop(0)
0x611: PushEmpty(float, float, float, float)
0x612: Stack[-3] = Stack[-5] + Stack[-9]; Pop(0);
0x613: Stack[-2] = Stack[-8]
0x614: Stack[-1] = Stack[-7]
0x615: Call2 0x7d3

0x616: Pop(3)
0x617: @@ SetProperty(Stack[-7], Stack[-1])
0x618: Pop(1)
0x619: Stack[-8] = (bool) 1
0x61a: Return(); Pop(2)

0x61b: PushEmpty(int, string, int, float, float, float, int, string, int, float, float, float)
0x61c: PushEmpty(bool, object, string)
0x61d: Stack[-2] = Stack[-18]
0x61e: Stack[-1] = "health"
0x61f: Call2 0x5f9

0x620: Pop(2)
0x621: Pop(1); Push((bool) Stack[-1] == 0)
0x622: IF (Stack[-1] == 0) GOTO 0x625; Pop(1)

0x623: Stack[-16] = (float) 0.0
0x624: Return(); Pop(12)

0x625: PushEmpty(bool, object, string)
0x626: Stack[-2] = Stack[-18]
0x627: Stack[-1] = "armor"
0x628: Call2 0x5f9

0x629: Pop(2)
0x62a: Pop(1); Push((bool) Stack[-1] == 0)
0x62b: IF (Stack[-1] == 0) GOTO 0x62e; Pop(1)

0x62c: Stack[-6] = (int) 0
0x62d: GOTO 0x631

0x62e: Push("armor")
0x62f: @@ GetProperty(Stack[-1], Stack[-7])
0x630: Pop(1)
0x631: Push("armor_")
0x632: PushEmpty(string, int)
0x633: Stack[-1] = Stack[-16]
0x634: Call2 0x5d7

0x635: Pop(1)
0x636: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x637: PushEmpty(bool, object, string)
0x638: Stack[-2] = Stack[-18]
0x639: Stack[-1] = Stack[-8]
0x63a: Call2 0x5f9

0x63b: Pop(2)
0x63c: Pop(1); Push((bool) Stack[-1] == 0)
0x63d: IF (Stack[-1] == 0) GOTO 0x640; Pop(1)

0x63e: Stack[-4] = (int) 0
0x63f: GOTO 0x642

0x640: @@ GetProperty(Stack[-5], Stack[-4])
0x641: Pop(0)
0x642: PushEmpty(float, float, float)
0x643: Pop(0); Push(Stack[-9] + Stack[-7]);
0x644: Push((float)100.0)
0x645: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0x646: Stack[-1] = (int) 1
0x647: Call2 0x7b4

0x648: Stack[-6] = Stack[-3]
0x649: Pop(3)
0x64a: Push("health")
0x64b: @@ GetProperty(Stack[-1], Stack[-3])
0x64c: Pop(1)
0x64d: Push((int) 1)
0x64e: Pop(1); Push(Stack[-1] - Stack[-4]);
0x64f: Stack[-2] = Stack[-15] * Stack[-1]; Pop(1);
0x650: Push("health")
0x651: PushEmpty(float, float, float, float)
0x652: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0x653: Stack[-2] = (int) 0
0x654: Stack[-1] = (int) 1
0x655: Call2 0x7d3

0x656: Pop(3)
0x657: @@ SetProperty(Stack[-2], Stack[-1])
0x658: Pop(2)
0x659: PushEmpty(bool, object)
0x65a: Stack[-1] = Stack[-17]
0x65b: Call2 0x5f4

0x65c: Pop(1)
0x65d: IF (Stack[-1] == 0) GOTO 0x662; Pop(1)

0x65e: PushEmpty(float)
0x65f: Stack[-1] = -Stack[-2]; Pop(0);
0x660: Call2 0x80e

0x661: Pop(1)
0x662: Stack[-16] = Stack[-1]
0x663: Return(); Pop(12)

0x664: PushEmpty(float, float)
0x665: PushEmpty(bool, object, string)
0x666: Stack[-2] = Stack[-6]
0x667: Stack[-1] = "health"
0x668: Call2 0x5f9

0x669: Pop(2)
0x66a: Pop(1); Push((bool) Stack[-1] == 0)
0x66b: IF (Stack[-1] == 0) GOTO 0x66e; Pop(1)

0x66c: Stack[-4] = (bool) 0
0x66d: Return(); Pop(2)

0x66e: PushEmpty(bool)
0x66f: Stack[-1] = (bool) 0
0x670: PushEmpty(bool, object)
0x671: Stack[-1] = Stack[-6]
0x672: Call2 0x5f4

0x673: Pop(1)
0x674: IF (Stack[-1] == 0) GOTO 0x67a; Pop(1)

0x675: PushEmpty(bool)
0x676: Call2 0x836

0x677: Pop(0)
0x678: IF (Stack[-1] == 0) GOTO 0x67a; Pop(1)

0x679: Stack[-1] = (bool) 1
0x67a: IF (Stack[-1] == 0) GOTO 0x67d; Pop(1)

0x67b: Stack[-4] = (bool) 0
0x67c: Return(); Pop(2)

0x67d: Push("health")
0x67e: @@ GetProperty(Stack[-1], Stack[-2])
0x67f: Pop(1)
0x680: Push((float)0.0)
0x681: Stack[-5] = Stack[-2] <= Stack[-1]; Pop(1);
0x682: Return(); Pop(2)

0x683: PushEmpty(bool, bool)
0x684: @@ IsDead(Stack[-1])
0x685: Pop(0)
0x686: Stack[-4] = Stack[-1]
0x687: Return(); Pop(2)

0x688: PushEmpty(object, object, object, object)
0x689: Pop(0); Push((bool) Stack[-5] == 0)
0x68a: IF (Stack[-1] == 0) GOTO 0x68d; Pop(1)

0x68b: Stack[-6] = (bool) 0
0x68c: Return(); Pop(4)

0x68d: PushEmpty(bool)
0x68e: Stack[-1] = (bool) 0
0x68f: Push("IsDead")
0x690: Push((int) 1)
0x691: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x692: IF (Stack[-1] == 0) GOTO 0x699; Pop(1)

0x693: PushEmpty(bool, object)
0x694: Stack[-1] = Stack[-8]
0x695: Call2 0x683

0x696: Pop(1)
0x697: IF (Stack[-1] == 0) GOTO 0x699; Pop(1)

0x698: Stack[-1] = (bool) 1
0x699: IF (Stack[-1] == 0) GOTO 0x69c; Pop(1)

0x69a: Stack[-6] = (bool) 0
0x69b: Return(); Pop(4)

0x69c: @ GetScene(Stack[-2])
0x69d: Pop(0)
0x69e: Pop(0); Push((bool) Stack[-2] == 0)
0x69f: IF (Stack[-1] == 0) GOTO 0x6a2; Pop(1)

0x6a0: Stack[-6] = (bool) 0
0x6a1: Return(); Pop(4)

0x6a2: @@ GetScene(Stack[-1])
0x6a3: Pop(0)
0x6a4: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x6a5: IF (Stack[-1] == 0) GOTO 0x6a8; Pop(1)

0x6a6: Stack[-6] = (bool) 0
0x6a7: Return(); Pop(4)

0x6a8: Stack[-6] = (bool) 1
0x6a9: Return(); Pop(4)

0x6aa: Stack[-1] = 0
0x6ab: Stack[-2] = 0
0x6ac: PushEmpty(int, int)
0x6ad: PushEmpty(bool, object)
0x6ae: Stack[-1] = Stack[-5]
0x6af: Call2 0x688

0x6b0: Pop(1)
0x6b1: Pop(1); Push((bool) Stack[-1] == 0)
0x6b2: IF (Stack[-1] == 0) GOTO 0x6b5; Pop(1)

0x6b3: Stack[-4] = (bool) 0
0x6b4: Return(); Pop(2)

0x6b5: PushEmpty(bool, object, string)
0x6b6: Stack[-2] = Stack[-6]
0x6b7: Stack[-1] = "noaccess"
0x6b8: Call2 0x5f9

0x6b9: Pop(2)
0x6ba: Pop(1); Push((bool) Stack[-1] == 0)
0x6bb: IF (Stack[-1] == 0) GOTO 0x6be; Pop(1)

0x6bc: Stack[-4] = (bool) 1
0x6bd: Return(); Pop(2)

0x6be: Push("noaccess")
0x6bf: @@ GetProperty(Stack[-1], Stack[-2])
0x6c0: Pop(1)
0x6c1: Push((int) 0)
0x6c2: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x6c3: Return(); Pop(2)

0x6c4: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x6c5: @ GetPosition(Stack[-3])
0x6c6: Pop(0)
0x6c7: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x6c8: Push(CvectorIndex(Stack[-2], 0))
0x6c9: Push(CvectorIndex(Stack[-3], 2))
0x6ca: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x6cb: Pop(2)
0x6cc: Stack[-8] = Stack[-1]
0x6cd: Return(); Pop(6)

0x6ce: PushEmpty(cvector, cvector)
0x6cf: @@ GetPosition(Stack[-1])
0x6d0: Pop(0)
0x6d1: PushEmpty(bool, cvector)
0x6d2: Stack[-1] = Stack[-3]
0x6d3: Call2 0x6c4

0x6d4: Stack[-6] = Stack[-2]
0x6d5: Pop(2)
0x6d6: Return(); Pop(2)

0x6d7: PushEmpty(bool, int, cvector, cvector, cvector, cvector, string, bool, int, cvector, cvector, cvector, cvector, string)
0x6d8: Pop(0); Push((bool) Stack[-15] == 0)
0x6d9: IF (Stack[-1] == 0) GOTO 0x6db; Pop(1)

0x6da: Return(); Pop(14)

0x6db: @ IsDead(Stack[-7])
0x6dc: Pop(0)
0x6dd: Push(Stack[-7])
0x6de: IF (Stack[-1] == 0) GOTO 0x6e0; Pop(1)

0x6df: Return(); Pop(14)

0x6e0: @ GetSecondaryAnimationType(Stack[-6])
0x6e1: Pop(0)
0x6e2: Push((int) 0)
0x6e3: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x6e4: IF (Stack[-1] == 0) GOTO 0x6e6; Pop(1)

0x6e5: Return(); Pop(14)

0x6e6: @@ GetPosition(Stack[-5])
0x6e7: Pop(0)
0x6e8: @ GetPosition(Stack[-4])
0x6e9: Pop(0)
0x6ea: @ GetDirection(Stack[-3])
0x6eb: Pop(0)
0x6ec: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0x6ed: Push(CvectorIndex(Stack[-2], 0))
0x6ee: Push(CvectorIndex(Stack[-4], 0))
0x6ef: Pop(2); Push(Stack[-2] * Stack[-1]);
0x6f0: Push(CvectorIndex(Stack[-3], 2))
0x6f1: Push(CvectorIndex(Stack[-5], 2))
0x6f2: Pop(2); Push(Stack[-2] * Stack[-1]);
0x6f3: Pop(2); Push(Stack[-2] + Stack[-1]);
0x6f4: Push((int) 0)
0x6f5: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x6f6: IF (Stack[-1] == 0) GOTO 0x6f9; Pop(1)

0x6f7: Stack[-1] = "fhit"
0x6f8: GOTO 0x6fa

0x6f9: Stack[-1] = "bhit"
0x6fa: Push("hit_react")
0x6fb: Push("1")
0x6fc: Pop(1); Push(Stack[-3] + Stack[-1]);
0x6fd: Push("2")
0x6fe: Pop(1); Push(Stack[-4] + Stack[-1]);
0x6ff: Push((int) -10)
0x700: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x701: Pop(4)
0x702: Return(); Pop(14)

0x703: PushEmpty(cvector, object, int, bool, cvector, cvector, int, int, cvector, cvector, object, int, bool, cvector, cvector, int, int, cvector)
0x704: PushEmpty(bool)
0x705: Stack[-1] = (bool) 0
0x706: PushEmpty(bool)
0x707: Stack[-1] = (bool) 0
0x708: Push(Stack[-23])
0x709: IF (Stack[-1] == 0) GOTO 0x70e; Pop(1)

0x70a: Push((int) 4)
0x70b: Pop(1); Push((bool) Stack[-23] != Stack[-1])
0x70c: IF (Stack[-1] == 0) GOTO 0x70e; Pop(1)

0x70d: Stack[-1] = (bool) 1
0x70e: IF (Stack[-1] == 0) GOTO 0x713; Pop(1)

0x70f: Push((int) 5)
0x710: Pop(1); Push((bool) Stack[-22] != Stack[-1])
0x711: IF (Stack[-1] == 0) GOTO 0x713; Pop(1)

0x712: Stack[-1] = (bool) 1
0x713: IF (Stack[-1] == 0) GOTO 0x742; Pop(1)

0x714: PushEmpty(cvector, cvector)
0x715: PushEmpty(cvector, object)
0x716: Stack[-1] = Stack[-25]
0x717: Call2 0x5e5

0x718: Stack[-3] = Stack[-2]
0x719: Pop(2)
0x71a: Call2 0x7aa

0x71b: Stack[-11] = Stack[-2]
0x71c: Pop(2)
0x71d: @ CreateVectorVector(Stack[-8])
0x71e: Pop(0)
0x71f: Stack[-7] = (int) 1
0x720: Push("hit")
0x721: Pop(1); Push(Stack[-1] + Stack[-8]);
0x722: @ GetGeometryLocator(Stack[-1], Stack[-7], Stack[-6], Stack[-5])
0x723: Pop(1)
0x724: Pop(0); Push((bool) Stack[-6] == 0)
0x725: IF (Stack[-1] == 0) GOTO 0x727; Pop(1)

0x726: GOTO 0x730

0x727: Pop(0); Push(Stack[-4] | Stack[-9]);
0x728: Push((float)0.70711)
0x729: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x72a: IF (Stack[-1] == 0) GOTO 0x72d; Pop(1)

0x72b: @@ add(Stack[-5])
0x72c: Pop(0)
0x72d: Push((int) 1)
0x72e: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x72f: GOTO 0x720

0x730: @@ size(Stack[-3])
0x731: Pop(0)
0x732: Push(Stack[-3])
0x733: IF (Stack[-1] == 0) GOTO 0x741; Pop(1)

0x734: @ irand(Stack[-2], Stack[-3])
0x735: Pop(0)
0x736: @@ get(Stack[-1], Stack[-2])
0x737: Pop(0)
0x738: PushEmpty(object, int, float, cvector, cvector)
0x739: Stack[-5] = Stack[-26]
0x73a: Stack[-4] = Stack[-25]
0x73b: Stack[-3] = Stack[-24]
0x73c: Stack[-2] = Stack[-6]
0x73d: Stack[-1] = -Stack[-14]; Pop(0);
0x73e: Call2 0x747

0x73f: Pop(5)
0x740: Return(); Pop(18)

0x741: Stack[-8] = 0
0x742: PushEmpty(object)
0x743: Stack[-1] = Stack[-22]
0x744: Call2 0x6d7

0x745: Pop(1)
0x746: Return(); Pop(18)

0x747: PushEmpty(object, object, object, object)
0x748: @ GetScene(Stack[-2])
0x749: Pop(0)
0x74a: Push("scripted")
0x74b: Push("blood_dir.xml")
0x74c: @ AddActorByType(Stack[-3], Stack[-2], Stack[-4], Stack[-8], Stack[-7], Stack[-1])
0x74d: Pop(2)
0x74e: PushEmpty(object)
0x74f: Stack[-1] = Stack[-10]
0x750: Call2 0x6d7

0x751: Pop(1)
0x752: Return(); Pop(4)

0x753: Stack[-1] = 0
0x754: Stack[-2] = 0
0x755: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x756: @@ GetPosition(Stack[-3])
0x757: Pop(0)
0x758: @ GetPosition(Stack[-2])
0x759: Pop(0)
0x75a: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0x75b: Push(CvectorIndex(Stack[-1], 0))
0x75c: Push(CvectorIndex(Stack[-2], 2))
0x75d: @ RotateAsync(Stack[-2], Stack[-1])
0x75e: Pop(2)
0x75f: Return(); Pop(6)

0x760: PushEmpty(bool, bool)
0x761: @ IsLoaded(Stack[-1])
0x762: Pop(0)
0x763: Stack[-3] = Stack[-1]
0x764: Return(); Pop(2)

0x765: PushEmpty(float, cvector, float, cvector)
0x766: @@ GetEyesHeight(Stack[-2])
0x767: Pop(0)
0x768: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x769: Push(CvectorIndex(Stack[-1], 1))
0x76a: Stack[-1] = Stack[-3]
0x76b: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x76c: Push("head")
0x76d: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x76e: Pop(1)
0x76f: Return(); Pop(4)

0x770: PushEmpty(bool, bool)
0x771: PushEmpty(bool, int, int)
0x772: Stack[-2] = Stack[-7]
0x773: Stack[-1] = Stack[-6]
0x774: Call2 0x7e6

0x775: Pop(2)
0x776: IF (Stack[-1] == 0) GOTO 0x77a; Pop(1)

0x777: Push((int) 0)
0x778: @ AddItem(Stack[-2], Stack[-6], Stack[-1])
0x779: Pop(1)
0x77a: Return(); Pop(2)

0x77b: PushEmpty(bool, int, bool, int, bool, float, cvector, cvector, bool, int, bool, int, bool, float, cvector, cvector)
0x77c: @ IsExisting3DSound(Stack[-8], Stack[-17])
0x77d: Pop(0)
0x77e: Pop(0); Push((bool) Stack[-8] == 0)
0x77f: IF (Stack[-1] == 0) GOTO 0x794; Pop(1)

0x780: Stack[-7] = (int) 0
0x781: Push((int) 1)
0x782: Pop(1); Push(Stack[-8] + Stack[-1]);
0x783: Pop(1); Push(Stack[-18] + Stack[-1]);
0x784: @ IsExisting3DSound(Stack[-7], Stack[-1])
0x785: Pop(1)
0x786: Pop(0); Push((bool) Stack[-6] == 0)
0x787: IF (Stack[-1] == 0) GOTO 0x789; Pop(1)

0x788: GOTO 0x78c

0x789: Push((int) 1)
0x78a: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x78b: GOTO 0x781

0x78c: Pop(0); Push((bool) Stack[-7] == 0)
0x78d: IF (Stack[-1] == 0) GOTO 0x78f; Pop(1)

0x78e: Return(); Pop(16)

0x78f: @ irand(Stack[-5], Stack[-7])
0x790: Pop(0)
0x791: Push((int) 1)
0x792: Pop(1); Push(Stack[-6] + Stack[-1]);
0x793: Stack[-18] = Stack[-18] + Stack[-1]; Pop(1);
0x794: @ Is3DSoundLoaded(Stack[-4], Stack[-17])
0x795: Pop(0)
0x796: Push(Stack[-4])
0x797: IF (Stack[-1] == 0) GOTO 0x7a3; Pop(1)

0x798: @ GetEyesHeight(Stack[-3])
0x799: Pop(0)
0x79a: @ GetDirection(Stack[-2])
0x79b: Pop(0)
0x79c: Push((int) 50)
0x79d: Stack[-2] = Stack[-3] * Stack[-1]; Pop(1);
0x79e: Push(CvectorIndex(Stack[-1], 1))
0x79f: Stack[-1] = Stack[-1] + Stack[-4]; Pop(0);
0x7a0: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x7a1: @ PlayGlobalSound(Stack[-17], Stack[-1])
0x7a2: Pop(0)
0x7a3: Return(); Pop(16)

0x7a4: PushEmpty(object, object)
0x7a5: @ self(Stack[-1])
0x7a6: Pop(0)
0x7a7: Stack[-3] = Stack[-1]
0x7a8: Return(); Pop(2)

0x7a9: Stack[-1] = 0
0x7aa: PushEmpty(float, float)
0x7ab: Pop(0); Push(Stack[-3] | Stack[-3]);
0x7ac: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x7ad: Push((float)0.0)
0x7ae: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x7af: IF (Stack[-1] == 0) GOTO 0x7b2; Pop(1)

0x7b0: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x7b1: Return(); Pop(2)

0x7b2: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x7b3: Return(); Pop(2)

0x7b4: PushEmpty()
0x7b5: Pop(0); Push((bool) Stack[-2] < Stack[-1])
0x7b6: IF (Stack[-1] == 0) GOTO 0x7b9; Pop(1)

0x7b7: Stack[-3] = Stack[-2]
0x7b8: GOTO 0x7ba

0x7b9: Stack[-3] = Stack[-1]
0x7ba: Return(); Pop(0)

0x7bb: PushEmpty()
0x7bc: Pop(0); Push(Stack[-2] * Stack[-2]);
0x7bd: Push((int) 4)
0x7be: Pop(1); Push(Stack[-1] * Stack[-5]);
0x7bf: Pop(1); Push(Stack[-1] * Stack[-3]);
0x7c0: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x7c1: Return(); Pop(0)

0x7c2: PushEmpty(float, float)
0x7c3: Pop(0); Push(( -Stack[-5])
0x7c4: Pop(1); Push(Stack[-1] - Stack[-4]);
0x7c5: Push((int) 2)
0x7c6: Pop(1); Push(Stack[-1] * Stack[-8]);
0x7c7: Stack[-3] = Stack[-2] / Stack[-1]; Pop(2);
0x7c8: Push((int) 0)
0x7c9: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x7ca: IF (Stack[-1] == 0) GOTO 0x7cd; Pop(1)

0x7cb: Stack[-7] = Stack[-1]
0x7cc: Return(); Pop(2)

0x7cd: Pop(0); Push(( -Stack[-5])
0x7ce: Pop(1); Push(Stack[-1] + Stack[-4]);
0x7cf: Push((int) 2)
0x7d0: Pop(1); Push(Stack[-1] * Stack[-8]);
0x7d1: Stack[-9] = Stack[-2] / Stack[-1]; Pop(2);
0x7d2: Return(); Pop(2)

0x7d3: PushEmpty()
0x7d4: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x7d5: IF (Stack[-1] == 0) GOTO 0x7d8; Pop(1)

0x7d6: Stack[-4] = Stack[-2]
0x7d7: Return(); Pop(0)

0x7d8: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x7d9: IF (Stack[-1] == 0) GOTO 0x7dc; Pop(1)

0x7da: Stack[-4] = Stack[-1]
0x7db: Return(); Pop(0)

0x7dc: Stack[-4] = Stack[-3]
0x7dd: Return(); Pop(0)

0x7de: PushEmpty()
0x7df: Stack[-4] = (bool) 0
0x7e0: Pop(0); Push((bool) Stack[-3] >= Stack[-2])
0x7e1: IF (Stack[-1] == 0) GOTO 0x7e5; Pop(1)

0x7e2: Pop(0); Push((bool) Stack[-3] <= Stack[-1])
0x7e3: IF (Stack[-1] == 0) GOTO 0x7e5; Pop(1)

0x7e4: Stack[-4] = (bool) 1
0x7e5: Return(); Pop(0)

0x7e6: PushEmpty(int, int)
0x7e7: @ irand(Stack[-1], Stack[-3])
0x7e8: Pop(0)
0x7e9: Stack[-5] = Stack[-1] < Stack[-4]; Pop(0);
0x7ea: Return(); Pop(2)

0x7eb: PushEmpty()
0x7ec: Pop(0); Push((bool) Stack[-2] == 0)
0x7ed: IF (Stack[-1] == 0) GOTO 0x7f0; Pop(1)

0x7ee: Stack[-3] = (bool) 0
0x7ef: Return(); Pop(0)

0x7f0: Push((int) 0)
0x7f1: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x7f2: IF (Stack[-1] == 0) GOTO 0x7f7; Pop(1)

0x7f3: Push((int) 8)
0x7f4: @ SendWorldWndMessage(Stack[-1])
0x7f5: Pop(1)
0x7f6: GOTO 0x800

0x7f7: Push((int) 0)
0x7f8: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x7f9: IF (Stack[-1] == 0) GOTO 0x7fe; Pop(1)

0x7fa: Push((int) 9)
0x7fb: @ SendWorldWndMessage(Stack[-1])
0x7fc: Pop(1)
0x7fd: GOTO 0x800

0x7fe: Stack[-3] = (bool) 0
0x7ff: Return(); Pop(0)

0x800: PushEmpty(float)
0x801: Stack[-1] = Stack[-2]
0x802: Call2 0x818

0x803: Pop(1)
0x804: PushEmpty(bool, object, string, float, float, float)
0x805: Stack[-5] = Stack[-8]
0x806: Stack[-4] = "reputation"
0x807: Stack[-3] = Stack[-7]
0x808: Stack[-2] = (int) 0
0x809: Stack[-1] = (int) 1
0x80a: Call2 0x605

0x80b: Pop(6)
0x80c: Stack[-3] = (bool) 1
0x80d: Return(); Pop(0)

0x80e: PushEmpty(object, object)
0x80f: @ CreateFloatVector(Stack[-1])
0x810: Pop(0)
0x811: @@ add(Stack[-3])
0x812: Pop(0)
0x813: Push((int) 15)
0x814: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x815: Pop(1)
0x816: Return(); Pop(2)

0x817: Stack[-1] = 0
0x818: PushEmpty(object, object)
0x819: @ CreateFloatVector(Stack[-1])
0x81a: Pop(0)
0x81b: @@ add(Stack[-3])
0x81c: Pop(0)
0x81d: Push((int) 16)
0x81e: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x81f: Pop(1)
0x820: Return(); Pop(2)

0x821: Stack[-1] = 0
0x822: PushEmpty(bool, bool)
0x823: @ IsPlayerActor(Stack[-3], Stack[-1])
0x824: Pop(0)
0x825: Push(Stack[-1])
0x826: IF (Stack[-1] == 0) GOTO 0x82a; Pop(1)

0x827: Push("attack")
0x828: @ PlayGlobalMusic(Stack[-1])
0x829: Pop(1)
0x82a: Return(); Pop(2)

0x82b: PushEmpty(object, object)
0x82c: @ GetScene(Stack[-1])
0x82d: Pop(0)
0x82e: Push("battle")
0x82f: PushEmpty(object)
0x830: Call2 0x7a4

0x831: Pop(0)
0x832: @ BroadcastMessage(Stack[-2], Stack[-1], Stack[-3])
0x833: Pop(2)
0x834: Return(); Pop(2)

0x835: Stack[-1] = 0
0x836: PushEmpty(bool, bool)
0x837: Push("god_mode")
0x838: @ GetVariable(Stack[-1], Stack[-2])
0x839: Pop(1)
0x83a: Stack[-3] = Stack[-1]
0x83b: Return(); Pop(2)

0x83c: PushEmpty(string, string)
0x83d: Stack[-1] = "idle"
0x83e: Push(Stack[-3])
0x83f: IF (Stack[-1] == 0) GOTO 0x841; Pop(1)

0x840: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x841: Stack[-4] = Stack[-1]
0x842: Return(); Pop(2)

0x843: PushEmpty(int, bool, int, bool)
0x844: Stack[-2] = (int) 0
0x845: Push("all")
0x846: PushEmpty(string, int)
0x847: Stack[-1] = Stack[-5]
0x848: Call2 0x83c

0x849: Pop(1)
0x84a: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x84b: Pop(2)
0x84c: Pop(0); Push((bool) Stack[-1] == 0)
0x84d: IF (Stack[-1] == 0) GOTO 0x84f; Pop(1)

0x84e: GOTO 0x852

0x84f: Push((int) 1)
0x850: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x851: GOTO 0x845

0x852: Stack[-5] = Stack[-2]
0x853: Return(); Pop(4)

0x854: PushEmpty()
0x855: PushEmpty(object)
0x856: Stack[-1] = Stack[-2]
0x857: Push(-1, 0); TaskCall(1)
0x858: Call2 0x80

0x859: Pop(-1, 0); TaskReturn
0x85a: Pop(1)
0x85b: Return(); Pop(0)

0x85c: PushEmpty()
0x85d: PushEmpty(object, int, float)
0x85e: Stack[-3] = Stack[-7]
0x85f: Stack[-2] = Stack[-6]
0x860: Stack[-1] = Stack[-5]
0x861: Call2 0x703

0x862: Pop(3)
0x863: Return(); Pop(0)

0x864: PushEmpty()
0x865: PushEmpty(object, int, float, cvector, cvector)
0x866: Stack[-5] = Stack[-11]
0x867: Stack[-4] = Stack[-10]
0x868: Stack[-3] = Stack[-9]
0x869: Stack[-2] = Stack[-7]
0x86a: Stack[-1] = Stack[-6]
0x86b: Call2 0x747

0x86c: Pop(5)
0x86d: Return(); Pop(0)

0x86e: PushEmpty(float, float)
0x86f: Push("health")
0x870: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x871: IF (Stack[-1] == 0) GOTO 0x87a; Pop(1)

0x872: Push("health")
0x873: @ GetProperty(Stack[-1], Stack[-2])
0x874: Pop(1)
0x875: Push((int) 0)
0x876: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x877: IF (Stack[-1] == 0) GOTO 0x87a; Pop(1)

0x878: @ SignalDeath(Stack[-4])
0x879: Pop(0)
0x87a: Return(); Pop(2)

0x87b: PushEmpty()
0x87c: PushEmpty(object)
0x87d: Stack[-1] = Stack[-2]
0x87e: Call2 0x854

0x87f: Pop(1)
0x880: Return(); Pop(0)

0x881: PushEmpty()
0x882: PushEmpty(bool, object)
0x883: Stack[-1] = Stack[-3]
0x884: Call2 0x6ac

0x885: Stack[-4] = Stack[-2]
0x886: Pop(2)
0x887: Return(); Pop(0)

0x888: PushEmpty()
0x889: PushEmpty(object)
0x88a: Stack[-1] = Stack[-2]
0x88b: Call2 0x8e3

0x88c: Pop(1)
0x88d: Return(); Pop(0)

0x88e: PushEmpty(int, int)
0x88f: Push("branch")
0x890: @ GetVariable(Stack[-1], Stack[-2])
0x891: Pop(1)
0x892: Stack[-3] = Stack[-1]
0x893: Return(); Pop(2)

0x894: PushEmpty()
0x895: PushEmpty(int)
0x896: Call2 0x88e

0x897: Pop(0)
0x898: Push((int) 1)
0x899: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x89a: IF (Stack[-1] == 0) GOTO 0x89e; Pop(1)

0x89b: @ WorkWithCorpse(Stack[-1])
0x89c: Pop(0)
0x89d: GOTO 0x8a0

0x89e: @ Barter(Stack[-1])
0x89f: Pop(0)
0x8a0: Return(); Pop(0)

0x8a1: PushEmpty(int, bool, int, bool)
0x8a2: Pop(0); Push((bool) Stack[-6] > Stack[-5])
0x8a3: IF (Stack[-1] == 0) GOTO 0x8a8; Pop(1)

0x8a4: Push("GenerateMoney: iMin > iMax")
0x8a5: @ Trace(Stack[-1])
0x8a6: Pop(1)
0x8a7: Return(); Pop(4)

0x8a8: Stack[-2] = (int) 0
0x8a9: Pop(0); Push((bool) Stack[-6] != Stack[-5])
0x8aa: IF (Stack[-1] == 0) GOTO 0x8af; Pop(1)

0x8ab: Pop(0); Push(Stack[-5] - Stack[-6]);
0x8ac: @ irand(Stack[-3], Stack[-1])
0x8ad: Pop(1)
0x8ae: GOTO 0x8b3

0x8af: Push((int) 0)
0x8b0: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x8b1: IF (Stack[-1] == 0) GOTO 0x8b3; Pop(1)

0x8b2: Return(); Pop(4)

0x8b3: Stack[-2] = Stack[-2] + Stack[-6]; Pop(0);
0x8b4: Push((int) 0)
0x8b5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8b6: IF (Stack[-1] == 0) GOTO 0x8b8; Pop(1)

0x8b7: Return(); Pop(4)

0x8b8: PushEmpty(int, string)
0x8b9: Stack[-1] = "Money"
0x8ba: Call2 0x8de

0x8bb: Pop(1)
0x8bc: Push((int) 0)
0x8bd: @ AddItem(Stack[-3], Stack[-2], Stack[-1], Stack[-4])
0x8be: Pop(2)
0x8bf: Return(); Pop(4)

0x8c0: PushEmpty(int, bool, int, bool)
0x8c1: Push((int) 0)
0x8c2: @ ClearSubContainer(Stack[-1])
0x8c3: Pop(1)
0x8c4: PushEmpty(int, int)
0x8c5: Stack[-2] = (int) 300
0x8c6: Stack[-1] = (int) 750
0x8c7: Call2 0x8a1

0x8c8: Pop(2)
0x8c9: PushEmpty(string, int, int)
0x8ca: Stack[-3] = "Knife"
0x8cb: Stack[-2] = (int) 1
0x8cc: Stack[-1] = (int) 8
0x8cd: Call2 0x770

0x8ce: Pop(3)
0x8cf: PushEmpty(string, int, int)
0x8d0: Stack[-3] = "lockpick"
0x8d1: Stack[-2] = (int) 1
0x8d2: Stack[-1] = (int) 6
0x8d3: Call2 0x770

0x8d4: Pop(3)
0x8d5: PushEmpty(int, string)
0x8d6: Stack[-1] = "grabitel_mark"
0x8d7: Call2 0x8de

0x8d8: Pop(1)
0x8d9: Push((int) 0)
0x8da: Push((int) 1)
0x8db: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x8dc: Pop(3)
0x8dd: Return(); Pop(4)

0x8de: PushEmpty(int, int)
0x8df: @ GetInvItemByName(Stack[-1], Stack[-3])
0x8e0: Pop(0)
0x8e1: Stack[-4] = Stack[-1]
0x8e2: Return(); Pop(2)

0x8e3: PushEmpty()
0x8e4: PushEmpty(object)
0x8e5: Stack[-1] = Stack[-2]
0x8e6: Push(-1, 0); TaskCall(6)
0x8e7: Call2 0x5cb

0x8e8: Pop(-1, 0); TaskReturn
0x8e9: Pop(1)
0x8ea: Return(); Pop(0)

0x8eb: PushEmpty(cvector, float, float, float, float, float, cvector, float, float, float, float, float)
0x8ec: Stack[-6] = Stack[-14] - Stack[-15]; Pop(0);
0x8ed: Stack[-5] = (int) 250000
0x8ee: Push(CvectorIndex(Stack[-6], 1))
0x8ef: Push((int) 1000)
0x8f0: Pop(2); Push(Stack[-2] * Stack[-1]);
0x8f1: Pop(0); Push(Stack[-14] * Stack[-14]);
0x8f2: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x8f3: Stack[-3] = Stack[-6] | Stack[-6]; Pop(0);
0x8f4: PushEmpty(float, float, float, float)
0x8f5: Stack[-3] = Stack[-9]
0x8f6: Stack[-2] = Stack[-8]
0x8f7: Stack[-1] = Stack[-7]
0x8f8: Call2 0x7bb

0x8f9: Stack[-6] = Stack[-4]
0x8fa: Pop(4)
0x8fb: Push((int) 0)
0x8fc: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x8fd: IF (Stack[-1] == 0) GOTO 0x900; Pop(1)

0x8fe: Stack[-1] = (int) 1
0x8ff: GOTO 0x908

0x900: PushEmpty(float, float, float, float, float)
0x901: Stack[-4] = Stack[-10]
0x902: Stack[-3] = Stack[-9]
0x903: Stack[-2] = Stack[-8]
0x904: Stack[-1] = Sqrt(Stack[-7]); Pop(0);
0x905: Call2 0x7c2

0x906: Pop(4)
0x907: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x908: Push(CVector(0.0, 500.0, 0.0))
0x909: Pop(1); Push(Stack[-1] * Stack[-2]);
0x90a: Pop(1); Push(Stack[-1] * Stack[-2]);
0x90b: Pop(1); Push(Stack[-7] + Stack[-1]);
0x90c: Stack[-17] = Stack[-1] / Stack[-2]; Pop(1);
0x90d: Return(); Pop(12)

0x90e: PushEmpty()
0x90f: Return(); Pop(0)

0x910: PushEmpty()
0x911: Stack[-3] = (bool) 0
0x912: Return(); Pop(0)

