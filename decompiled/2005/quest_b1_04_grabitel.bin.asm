GlobalVarCount = 1
	G_VAR_0 bool 

Strings:
	all
	b1q04_dead
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
	SetItemName
	Organ
	GetItemID
	liver
	kidney
	heart
	blood
	b1q04_attack
	RemoveStationaryActor

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
	SetVariable (2 args)
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
	GetScene (1 args)
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
	CreateInvItem (1 args)
	AddItem (4 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_17 Op = 0x8 Vars = (object)
		EVENT_1 Op = 0x16 Vars = (object)
		EVENT_3 Op = 0x20 Vars = (object)
	GTASK_1  Params = 1
		EVENT_0 Op = 0xa6 Vars = (object)
		EVENT_22 Op = 0x125 Vars = (object, int, float, float)
		EVENT_16 Op = 0x127 Vars = (object, string)
		EVENT_41 Op = 0x129 Vars = (object)
	GTASK_2  Params = 2
	GTASK_3 Vars = (bool) Params = 2
		EVENT_17 Op = 0x1bb Vars = (object)
		EVENT_30 Op = 0x1c1 Vars = (object, object, bool)
		EVENT_26 Op = 0x1c8 Vars = (string)
	GTASK_4 Vars = (object, int, int, bool, float, int) Params = 2
		EVENT_17 Op = 0x206 Vars = (object)
		EVENT_30 Op = 0x20c Vars = (object, object, bool)
		EVENT_26 Op = 0x213 Vars = (string)
	GTASK_5 Vars = (bool, object, bool) Params = 6
		EVENT_17 Op = 0x4af Vars = (object)
		EVENT_30 Op = 0x4b5 Vars = (object, object, bool)
		EVENT_26 Op = 0x4bc Vars = (string)
		EVENT_7 Op = 0x4f8 Vars = (int)
		EVENT_1 Op = 0x513 Vars = (object)
		EVENT_2 Op = 0x522 Vars = (object)
		EVENT_10 Op = 0x5a8 Vars = (object)
		EVENT_41 Op = 0x5b3 Vars = (object)
	GTASK_6  Params = 1

Events:
EVENT_22 Op = 0x848 Vars = (object, int, float, float)
EVENT_43 Op = 0x850 Vars = (object, int, float, float, cvector, cvector)
EVENT_16 Op = 0x85a Vars = (object, string)
EVENT_41 Op = 0x867 Vars = (object)

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
0xb: Call2 0x86d

0xc: Pop(1)
0xd: IF (Stack[-1] == 0) GOTO 0x15; Pop(1)

0xe: PushEmpty()
0xf: Call2 0x7b

0x10: Pop(0)
0x11: PushEmpty(object)
0x12: Stack[-1] = Stack[-2]
0x13: Call2 0x874

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
0x2e: Call2 0x75c

0x2f: Pop(0)
0x30: Pop(1); Push((bool) Stack[-1] == 0)
0x31: IF (Stack[-1] == 0) GOTO 0x33; Pop(1)

0x32: Return(); Pop(14)

0x33: PushEmpty(int)
0x34: Call2 0x82f

0x35: Stack[-8] = Stack[-1]
0x36: Pop(1)
0x37: Stack[-6] = (int) 0
0x38: PushEmpty(bool)
0x39: Stack[-1] = (bool) 0
0x3a: Push((int) 5)
0x3b: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x3c: IF (Stack[-1] == 0) GOTO 0x42; Pop(1)

0x3d: PushEmpty(bool)
0x3e: Call2 0x75c

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
0x50: Call2 0x828

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

0x80: PushEmpty()
0x81: PushEmpty(bool, object)
0x82: Stack[-1] = Stack[-3]
0x83: Call2 0x5f0

0x84: Pop(1)
0x85: IF (Stack[-1] == 0) GOTO 0x8b; Pop(1)

0x86: PushEmpty(bool, object, float)
0x87: Stack[-2] = Stack[-4]
0x88: Stack[-1] = (float) 0.03
0x89: Call2 0x7d7

0x8a: Pop(3)
0x8b: PushEmpty()
0x8c: Call2 0x89e

0x8d: Pop(0)
0x8e: Push("b1q04_dead")
0x8f: Push((int) 1)
0x90: @ SetVariable(Stack[-2], Stack[-1])
0x91: Pop(2)
0x92: PushEmpty(object)
0x93: Stack[-1] = Stack[-2]
0x94: Call2 0x97

0x95: Pop(1)
0x96: Return(); Pop(0)

0x97: PushEmpty()
0x98: EventDisable(0)
0x99: PushEmpty(object)
0x9a: Stack[-1] = Stack[-2]
0x9b: Call2 0xb0

0x9c: Pop(1)
0x9d: Push((int) 50)
0x9e: Push((int) 40)
0x9f: @ SetRTEnvelope(Stack[-2], Stack[-1])
0xa0: Pop(2)
0xa1: EventEnable(0)
0xa2: @ Hold()
0xa3: Pop(0)
0xa4: GOTO 0xa2

0xa5: Return(); Pop(0)

0xa6: PushEmpty(bool, bool)
0xa7: @ IsOverrideActive(Stack[-1])
0xa8: Pop(0)
0xa9: Pop(0); Push((bool) Stack[-1] == 0)
0xaa: IF (Stack[-1] == 0) GOTO 0xaf; Pop(1)

0xab: PushEmpty(object)
0xac: Stack[-1] = Stack[-4]
0xad: Call2 0x880

0xae: Pop(1)
0xaf: Return(); Pop(2)

0xb0: PushEmpty(cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector, cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector)
0xb1: Pop(0); Push((bool) Stack[-21] == 0)
0xb2: IF (Stack[-1] == 0) GOTO 0xb8; Pop(1)

0xb3: PushEmpty(string)
0xb4: Stack[-1] = "fdie"
0xb5: Call2 0x10b

0xb6: Pop(1)
0xb7: GOTO 0x10a

0xb8: @@ GetPosition(Stack[-10])
0xb9: Pop(0)
0xba: @ GetPosition(Stack[-9])
0xbb: Pop(0)
0xbc: @ GetDirection(Stack[-8])
0xbd: Pop(0)
0xbe: Stack[-7] = Stack[-9] - Stack[-10]; Pop(0);
0xbf: Push(CvectorIndex(Stack[-7], 0))
0xc0: Push(CvectorIndex(Stack[-9], 0))
0xc1: Pop(2); Push(Stack[-2] * Stack[-1]);
0xc2: Push(CvectorIndex(Stack[-8], 2))
0xc3: Push(CvectorIndex(Stack[-10], 2))
0xc4: Pop(2); Push(Stack[-2] * Stack[-1]);
0xc5: Pop(2); Push(Stack[-2] + Stack[-1]);
0xc6: Push((int) 0)
0xc7: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0xc8: IF (Stack[-1] == 0) GOTO 0xcb; Pop(1)

0xc9: Stack[-6] = "fdie"
0xca: GOTO 0xcc

0xcb: Stack[-6] = "bdie"
0xcc: @ RemoveRTEnvelope()
0xcd: Pop(0)
0xce: @ SetDeathState()
0xcf: Pop(0)
0xd0: @ Stop()
0xd1: Pop(0)
0xd2: @ StopAsync()
0xd3: Pop(0)
0xd4: Stack[-5] = Stack[-21]
0xd5: Push("GetScriptProperty")
0xd6: Push((int) 2)
0xd7: Pop(2); Push(IsFuncExist(Stack[-23], Stack[-2], Stack[-1]))
0xd8: IF (Stack[-1] == 0) GOTO 0xe4; Pop(1)

0xd9: Push("Owner")
0xda: @@ HasScriptProperty(Stack[-5], Stack[-1])
0xdb: Pop(1)
0xdc: Push(Stack[-4])
0xdd: IF (Stack[-1] == 0) GOTO 0xe4; Pop(1)

0xde: Push("Owner")
0xdf: @@ GetScriptProperty(Stack[-6], Stack[-1])
0xe0: Pop(1)
0xe1: Pop(0); Push((bool) Stack[-5] == 0)
0xe2: IF (Stack[-1] == 0) GOTO 0xe4; Pop(1)

0xe3: Stack[-5] = Stack[-21]
0xe4: Push("@GetEyesHeight")
0xe5: Push((int) 1)
0xe6: Pop(2); Push(IsFuncExist(Stack[-7], Stack[-2], Stack[-1]))
0xe7: IF (Stack[-1] == 0) GOTO 0xf3; Pop(1)

0xe8: @@ GetEyesHeight(Stack[-2])
0xe9: Pop(0)
0xea: Stack[-1] = CVector(0.0, 0.0, 0.0)
0xeb: Push(CvectorIndex(Stack[-1], 1))
0xec: Stack[-1] = Stack[-3]
0xed: CvectorIndex(Stack[-2], 1) = Stack[-1];
0xee: Push("head")
0xef: @ LookAsync(Stack[-22], Stack[-1], Stack[-2])
0xf0: Pop(1)
0xf1: Stack[-3] = (bool) 1
0xf2: GOTO 0xf4

0xf3: Stack[-3] = (bool) 0
0xf4: PushEmpty(string)
0xf5: Stack[-1] = Stack[-7]
0xf6: Call2 0x76c

0xf7: Pop(1)
0xf8: Push("all")
0xf9: @ PlayAnimation(Stack[-1], Stack[-7])
0xfa: Pop(1)
0xfb: @ WaitForAnimEnd()
0xfc: Pop(0)
0xfd: Push(Stack[-3])
0xfe: IF (Stack[-1] == 0) GOTO 0x104; Pop(1)

0xff: @ StopAsync()
0x100: Pop(0)
0x101: Push("head")
0x102: @ UnlookAsync(Stack[-1])
0x103: Pop(1)
0x104: Push("all")
0x105: @ LockAnimationEnd(Stack[-1], Stack[-7])
0x106: Pop(1)
0x107: @ RemoveEnvelope()
0x108: Pop(0)
0x109: Stack[-5] = 0
0x10a: Return(); Pop(20)

0x10b: PushEmpty()
0x10c: @ RemoveRTEnvelope()
0x10d: Pop(0)
0x10e: @ SetDeathState()
0x10f: Pop(0)
0x110: @ Stop()
0x111: Pop(0)
0x112: @ StopAsync()
0x113: Pop(0)
0x114: @ StopSecondaryAnimation()
0x115: Pop(0)
0x116: PushEmpty(string)
0x117: Stack[-1] = Stack[-2]
0x118: Call2 0x76c

0x119: Pop(1)
0x11a: Push("all")
0x11b: @ PlayAnimation(Stack[-1], Stack[-2])
0x11c: Pop(1)
0x11d: @ WaitForAnimEnd()
0x11e: Pop(0)
0x11f: Push("all")
0x120: @ LockAnimationEnd(Stack[-1], Stack[-2])
0x121: Pop(1)
0x122: @ RemoveEnvelope()
0x123: Pop(0)
0x124: Return(); Pop(0)

0x125: PushEmpty()
0x126: Return(); Pop(0)

0x127: PushEmpty()
0x128: Return(); Pop(0)

0x129: PushEmpty()
0x12a: Return(); Pop(0)

0x12b: PushEmpty(float, float)
0x12c: PushEmpty(bool, object)
0x12d: Stack[-1] = Stack[-5]
0x12e: Call2 0x6a8

0x12f: Pop(1)
0x130: Pop(1); Push((bool) Stack[-1] == 0)
0x131: IF (Stack[-1] == 0) GOTO 0x134; Pop(1)

0x132: Stack[-4] = (bool) 0
0x133: Return(); Pop(2)

0x134: PushEmpty(float, object)
0x135: Stack[-1] = Stack[-5]
0x136: Call2 0x5e8

0x137: Stack[-3] = Stack[-2]
0x138: Pop(2)
0x139: PushEmpty(bool, float, float, float)
0x13a: Stack[-3] = Stack[-5]
0x13b: Stack[-2] = (float) 250000.0
0x13c: Stack[-1] = (float) 3240000.0
0x13d: Call2 0x7cf

0x13e: Pop(3)
0x13f: IF (Stack[-1] == 0) GOTO 0x148; Pop(1)

0x140: PushEmpty(bool, object)
0x141: Stack[-1] = Stack[-5]
0x142: Push(-2, 1); TaskCall(3)
0x143: Call2 0x150

0x144: Pop(-2, 1); TaskReturn
0x145: Stack[-6] = Stack[-2]
0x146: Pop(2)
0x147: Return(); Pop(2)

0x148: PushEmpty(bool, object)
0x149: Stack[-1] = Stack[-5]
0x14a: Push(-2, 6); TaskCall(4)
0x14b: Call2 0x1ce

0x14c: Pop(-2, 6); TaskReturn
0x14d: Stack[-6] = Stack[-2]
0x14e: Pop(2)
0x14f: Return(); Pop(2)

0x150: PushEmpty(object, cvector, bool, object, cvector, float, cvector, object, cvector, bool, object, cvector, float, cvector)
0x151: PushEmpty(object)
0x152: Stack[-1] = Stack[-16]
0x153: Call2 0x80e

0x154: Pop(1)
0x155: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x156: PushEmpty(bool, object)
0x157: Stack[-1] = Stack[-17]
0x158: Call2 0x6ca

0x159: Pop(2)
0x15a: PushEmpty(bool, object)
0x15b: Stack[-1] = Stack[-17]
0x15c: Call2 0x6a8

0x15d: Pop(1)
0x15e: Pop(1); Push((bool) Stack[-1] == 0)
0x15f: IF (Stack[-1] == 0) GOTO 0x162; Pop(1)

0x160: Stack[-16] = (bool) 0
0x161: Return(); Pop(14)

0x162: PushEmpty()
0x163: Call2 0x817

0x164: Pop(0)
0x165: @ Face(Stack[-15])
0x166: Pop(0)
0x167: Push("all")
0x168: Push("aattack_begin1")
0x169: @ PlayAnimation(Stack[-2], Stack[-1])
0x16a: Pop(2)
0x16b: @ WaitForAnimEnd()
0x16c: Pop(0)
0x16d: PushEmpty(bool, object)
0x16e: Stack[-1] = Stack[-17]
0x16f: Call2 0x6a8

0x170: Pop(1)
0x171: Pop(1); Push((bool) Stack[-1] == 0)
0x172: IF (Stack[-1] == 0) GOTO 0x177; Pop(1)

0x173: @ StopAsync()
0x174: Pop(0)
0x175: Stack[-16] = (bool) 0
0x176: Return(); Pop(14)

0x177: Push("all")
0x178: Push("aattack_end1")
0x179: @ PlayAnimation(Stack[-2], Stack[-1])
0x17a: Pop(2)
0x17b: @ GetScene(Stack[-7])
0x17c: Pop(0)
0x17d: Push("knife")
0x17e: @ GetGeometryLocator(Stack[-1], Stack[-6], Stack[-7])
0x17f: Pop(1)
0x180: Push("scripted")
0x181: Push(CVector(0.0, 0.0, 1.0))
0x182: Push("grabitel_knife.xml")
0x183: @ AddActorByType(Stack[-7], Stack[-3], Stack[-10], Stack[-9], Stack[-2], Stack[-1])
0x184: Pop(3)
0x185: Push("Owner")
0x186: PushEmpty(object)
0x187: Call2 0x795

0x188: Pop(0)
0x189: @@ SetScriptProperty(Stack[-2], Stack[-1])
0x18a: Pop(2)
0x18b: Push("Target")
0x18c: @@ SetScriptProperty(Stack[-1], Stack[-16])
0x18d: Pop(1)
0x18e: @@ GetPosition(Stack[-3])
0x18f: Pop(0)
0x190: @@ GetEyesHeight(Stack[-2])
0x191: Pop(0)
0x192: Push(CvectorIndex(Stack[-3], 1))
0x193: Push((int) 10)
0x194: Pop(1); Push(Stack[-4] - Stack[-1]);
0x195: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x196: CvectorIndex(Stack[-4], 1) = Stack[-1];
0x197: PushEmpty(cvector, cvector, cvector, float)
0x198: Stack[-3] = Stack[-10]
0x199: Stack[-2] = Stack[-7]
0x19a: Stack[-1] = (float) 2000.0
0x19b: Call2 0x8ca

0x19c: Stack[-5] = Stack[-4]
0x19d: Pop(4)
0x19e: Push("StartDirection")
0x19f: @@ SetScriptProperty(Stack[-1], Stack[-2])
0x1a0: Pop(1)
0x1a1: @ WaitForAnimEnd()
0x1a2: Pop(0)
0x1a3: @ StopAsync()
0x1a4: Pop(0)
0x1a5: Push( Stack[0 + Tasks[-1].StackPointer] )
0x1a6: IF (Stack[-1] == 0) GOTO 0x1a9; Pop(1)

0x1a7: Stack[-16] = (bool) 1
0x1a8: Return(); Pop(14)

0x1a9: PushEmpty(bool, object)
0x1aa: Stack[-1] = Stack[-17]
0x1ab: Call2 0x6a8

0x1ac: Pop(1)
0x1ad: Pop(1); Push((bool) Stack[-1] == 0)
0x1ae: IF (Stack[-1] == 0) GOTO 0x1b1; Pop(1)

0x1af: Stack[-16] = (bool) 0
0x1b0: Return(); Pop(14)

0x1b1: PushEmpty(bool, object)
0x1b2: Stack[-1] = Stack[-17]
0x1b3: Push(-2, 6); TaskCall(4)
0x1b4: Call2 0x1ce

0x1b5: Pop(-2, 6); TaskReturn
0x1b6: Stack[-18] = Stack[-2]
0x1b7: Pop(2)
0x1b8: Return(); Pop(14)

0x1b9: Stack[-4] = 0
0x1ba: Stack[-7] = 0
0x1bb: PushEmpty()
0x1bc: PushEmpty(object)
0x1bd: Stack[-1] = Stack[-2]
0x1be: Call2 0x8ed

0x1bf: Pop(1)
0x1c0: Return(); Pop(0)

0x1c1: PushEmpty()
0x1c2: PushEmpty(bool, object, object)
0x1c3: Stack[-2] = Stack[-6]
0x1c4: Stack[-1] = Stack[-5]
0x1c5: Call2 0x8ef

0x1c6: Pop(3)
0x1c7: Return(); Pop(0)

0x1c8: PushEmpty()
0x1c9: Push("kill")
0x1ca: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1cb: IF (Stack[-1] == 0) GOTO 0x1cd; Pop(1)

0x1cc: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x1cd: Return(); Pop(0)

0x1ce: PushEmpty()
0x1cf: Push(GlobalVars[0])
0x1d0: Stack[-1] = (bool) 0
0x1d1: GlobalVars[0] = Stack[-1]; Pop(1)
0x1d2: PushEmpty(object, bool, float)
0x1d3: Stack[-3] = Stack[-4]
0x1d4: Stack[-2] = (bool) 1
0x1d5: Stack[-1] = (float) 200.0
0x1d6: Call2 0x21b

0x1d7: Pop(3)
0x1d8: PushEmpty(bool)
0x1d9: Stack[-1] = (bool) 0
0x1da: Push(GlobalVars[0])
0x1db: IF (Stack[-1] == 0) GOTO 0x1df; Pop(1)

0x1dc: Push( Stack[3 + Tasks[-1].StackPointer] )
0x1dd: IF (Stack[-1] == 0) GOTO 0x1df; Pop(1)

0x1de: Stack[-1] = (bool) 1
0x1df: IF (Stack[-1] == 0) GOTO 0x1e6; Pop(1)

0x1e0: Push("all")
0x1e1: Push("attack_off")
0x1e2: @ PlayAnimation(Stack[-2], Stack[-1])
0x1e3: Pop(2)
0x1e4: @ WaitForAnimEnd()
0x1e5: Pop(0)
0x1e6: Push(GlobalVars[0])
0x1e7: Stack[-3] = Stack[-1]
0x1e8: Pop(1)
0x1e9: Return(); Pop(0)

0x1ea: PushEmpty()
0x1eb: Stack[-3] = (float) 0.15
0x1ec: Return(); Pop(0)

0x1ed: PushEmpty()
0x1ee: Stack[-3] = (int) 0
0x1ef: Return(); Pop(0)

0x1f0: Stack[-1] = (int) 1
0x1f1: Return(); Pop(0)

0x1f2: PushEmpty()
0x1f3: PushEmpty(bool)
0x1f4: Stack[-1] = (bool) 0
0x1f5: Push((int) 0)
0x1f6: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x1f7: IF (Stack[-1] == 0) GOTO 0x1fe; Pop(1)

0x1f8: PushEmpty(bool, object)
0x1f9: Stack[-1] = Stack[-5]
0x1fa: Call2 0x660

0x1fb: Pop(1)
0x1fc: IF (Stack[-1] == 0) GOTO 0x1fe; Pop(1)

0x1fd: Stack[-1] = (bool) 1
0x1fe: IF (Stack[-1] == 0) GOTO 0x205; Pop(1)

0x1ff: Push(GlobalVars[0])
0x200: Stack[-1] = (bool) 1
0x201: GlobalVars[0] = Stack[-1]; Pop(1)
0x202: PushEmpty()
0x203: Call2 0x3d3

0x204: Pop(0)
0x205: Return(); Pop(0)

0x206: PushEmpty()
0x207: PushEmpty(object)
0x208: Stack[-1] = Stack[-2]
0x209: Call2 0x8ed

0x20a: Pop(1)
0x20b: Return(); Pop(0)

0x20c: PushEmpty()
0x20d: PushEmpty(bool, object, object)
0x20e: Stack[-2] = Stack[-6]
0x20f: Stack[-1] = Stack[-5]
0x210: Call2 0x8ef

0x211: Pop(3)
0x212: Return(); Pop(0)

0x213: PushEmpty()
0x214: Push("kill")
0x215: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x216: IF (Stack[-1] == 0) GOTO 0x21a; Pop(1)

0x217: Push(GlobalVars[0])
0x218: Stack[-1] = (bool) 1
0x219: GlobalVars[0] = Stack[-1]; Pop(1)
0x21a: Return(); Pop(0)

0x21b: PushEmpty(float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float, float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float)
0x21c: PushEmpty()
0x21d: Call2 0x300

0x21e: Pop(0)
0x21f: Stack[5 + Tasks[-1].StackPointer] = (int)0
0x220: Push("@GetAttackDistance")
0x221: Push((int) 1)
0x222: Pop(2); Push(IsFuncExist(Stack[-27], Stack[-2], Stack[-1]))
0x223: IF (Stack[-1] == 0) GOTO 0x229; Pop(1)

0x224: @@ GetAttackDistance(Stack[-11])
0x225: Pop(0)
0x226: Push((int) 50)
0x227: Stack[-12] = Stack[-12] + Stack[-1]; Pop(1);
0x228: GOTO 0x22a

0x229: Stack[-11] = Stack[-23]
0x22a: Push((int) 150)
0x22b: Pop(1); Push((bool) Stack[-12] >= Stack[-1])
0x22c: IF (Stack[-1] == 0) GOTO 0x22e; Pop(1)

0x22d: Stack[-11] = (int) 150
0x22e: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x22f: Stack[0 + Tasks[-1].StackPointer] = Stack[-25]
0x230: @ IsPlayerActor(Stack[-0], Stack[-8])
0x231: Pop(0)
0x232: Push(Stack[-8])
0x233: IF (Stack[-1] == 0) GOTO 0x23c; Pop(1)

0x234: Push("attack")
0x235: @ PlayGlobalMusic(Stack[-1])
0x236: Pop(1)
0x237: PushEmpty(object)
0x238: Call2 0x795

0x239: Pop(0)
0x23a: @ SendPlayerEnemy(Stack[-26], Stack[-1])
0x23b: Pop(1)
0x23c: Push(Stack[-24])
0x23d: IF (Stack[-1] == 0) GOTO 0x240; Pop(1)

0x23e: Stack[-7] = (bool) 0
0x23f: GOTO 0x241

0x240: Stack[-7] = (bool) 1
0x241: Push((float)300.0)
0x242: Stack[-7] = Stack[-1] + Stack[-12]; Pop(1);
0x243: PushEmpty(bool)
0x244: Stack[-1] = (bool) 0
0x245: PushEmpty(bool, object)
0x246: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x247: Call2 0x6a8

0x248: Pop(1)
0x249: IF (Stack[-1] == 0) GOTO 0x24d; Pop(1)

0x24a: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x24b: IF (Stack[-1] == 0) GOTO 0x24d; Pop(1)

0x24c: Stack[-1] = (bool) 1
0x24d: IF (Stack[-1] == 0) GOTO 0x2ef; Pop(1)

0x24e: PushEmpty()
0x24f: Call2 0x49f

0x250: Pop(0)
0x251: @@ GetPFPosition(Stack[-10])
0x252: Pop(0)
0x253: @ GetPFPosition(Stack[-9])
0x254: Pop(0)
0x255: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0x256: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x257: Pop(0); Push(Stack[-6] * Stack[-6]);
0x258: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0x259: IF (Stack[-1] == 0) GOTO 0x269; Pop(1)

0x25a: PushEmpty(bool, object, float, float, bool, bool)
0x25b: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0x25c: Stack[-4] = Stack[-17]
0x25d: Stack[-3] = (float) 3000.0
0x25e: Stack[-2] = (bool) 1
0x25f: Stack[-1] = (bool) 0
0x260: Push(-6, 3); TaskCall(5)
0x261: Call2 0x4c7

0x262: Pop(-6, 3); TaskReturn
0x263: Pop(5)
0x264: Pop(1); Push((bool) Stack[-1] == 0)
0x265: IF (Stack[-1] == 0) GOTO 0x267; Pop(1)

0x266: GOTO 0x2ef

0x267: Stack[-7] = (bool) 0
0x268: GOTO 0x2ee

0x269: Pop(0); Push(Stack[-23] * Stack[-23]);
0x26a: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0x26b: IF (Stack[-1] == 0) GOTO 0x2e6; Pop(1)

0x26c: @@ GetPFPosition(Stack[-3])
0x26d: Pop(0)
0x26e: @ CanReachByPF(Stack[-2], Stack[-3])
0x26f: Pop(0)
0x270: Pop(0); Push((bool) Stack[-2] == 0)
0x271: IF (Stack[-1] == 0) GOTO 0x281; Pop(1)

0x272: PushEmpty(bool, object, float, float, bool, bool)
0x273: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0x274: Stack[-4] = Stack[-17]
0x275: Stack[-3] = (float) 3000.0
0x276: Stack[-2] = (bool) 1
0x277: Stack[-1] = (bool) 0
0x278: Push(-6, 3); TaskCall(5)
0x279: Call2 0x4c7

0x27a: Pop(-6, 3); TaskReturn
0x27b: Pop(5)
0x27c: Pop(1); Push((bool) Stack[-1] == 0)
0x27d: IF (Stack[-1] == 0) GOTO 0x27f; Pop(1)

0x27e: GOTO 0x2ef

0x27f: Stack[-7] = (bool) 0
0x280: GOTO 0x243

0x281: Pop(0); Push((bool) Stack[-7] == 0)
0x282: IF (Stack[-1] == 0) GOTO 0x29a; Pop(1)

0x283: PushEmpty(object)
0x284: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x285: Call2 0x751

0x286: Pop(1)
0x287: Push("all")
0x288: Push("attack_on")
0x289: @ PlayAnimation(Stack[-2], Stack[-1])
0x28a: Pop(2)
0x28b: @ WaitForAnimEnd()
0x28c: Pop(0)
0x28d: PushEmpty()
0x28e: Call2 0x49f

0x28f: Pop(0)
0x290: @ StopAsync()
0x291: Pop(0)
0x292: Stack[-7] = (bool) 1
0x293: PushEmpty(bool, object)
0x294: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x295: Call2 0x6a8

0x296: Pop(1)
0x297: Pop(1); Push((bool) Stack[-1] == 0)
0x298: IF (Stack[-1] == 0) GOTO 0x29a; Pop(1)

0x299: GOTO 0x2ef

0x29a: @ rand(Stack[-1])
0x29b: Pop(0)
0x29c: PushEmpty(bool)
0x29d: Stack[-1] = (bool) 1
0x29e: Push((float)0.2)
0x29f: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x2a0: IF (Stack[-1] == 0) GOTO 0x2a6; Pop(1)

0x2a1: PushEmpty(bool)
0x2a2: Call2 0x474

0x2a3: Pop(0)
0x2a4: IF (Stack[-1] == 0) GOTO 0x2a6; Pop(1)

0x2a5: Stack[-1] = (bool) 0
0x2a6: IF (Stack[-1] == 0) GOTO 0x2b7; Pop(1)

0x2a7: @ Face(Stack[-0])
0x2a8: Pop(0)
0x2a9: PushEmpty()
0x2aa: Call2 0x4a4

0x2ab: Pop(0)
0x2ac: Push("all")
0x2ad: Push("attack_stay")
0x2ae: @ PlayAnimation(Stack[-2], Stack[-1])
0x2af: Pop(2)
0x2b0: PushEmpty(bool, float)
0x2b1: Stack[-1] = Stack[-25]
0x2b2: Call2 0x3f0

0x2b3: Pop(2)
0x2b4: @ StopAsync()
0x2b5: Pop(0)
0x2b6: GOTO 0x2e5

0x2b7: @ Face(Stack[-0])
0x2b8: Pop(0)
0x2b9: Push("all")
0x2ba: Push("fjump")
0x2bb: @ PlayAnimation(Stack[-2], Stack[-1])
0x2bc: Pop(2)
0x2bd: @ WaitForAnimEnd()
0x2be: Pop(0)
0x2bf: PushEmpty()
0x2c0: Call2 0x49f

0x2c1: Pop(0)
0x2c2: Push(CVector(0.0, 0.0, 0.0))
0x2c3: @ SetSpeed(Stack[-1])
0x2c4: Pop(1)
0x2c5: @ Stop()
0x2c6: Pop(0)
0x2c7: @ StopAsync()
0x2c8: Pop(0)
0x2c9: PushEmpty(bool)
0x2ca: Call2 0x474

0x2cb: Pop(0)
0x2cc: Pop(1); Push((bool) Stack[-1] == 0)
0x2cd: IF (Stack[-1] == 0) GOTO 0x2e5; Pop(1)

0x2ce: PushEmpty(bool, object)
0x2cf: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2d0: Call2 0x6a8

0x2d1: Pop(1)
0x2d2: Pop(1); Push((bool) Stack[-1] == 0)
0x2d3: IF (Stack[-1] == 0) GOTO 0x2d5; Pop(1)

0x2d4: GOTO 0x2ef

0x2d5: @@ GetPFPosition(Stack[-10])
0x2d6: Pop(0)
0x2d7: @ GetPFPosition(Stack[-9])
0x2d8: Pop(0)
0x2d9: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0x2da: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x2db: Pop(0); Push(Stack[-23] * Stack[-23]);
0x2dc: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x2dd: IF (Stack[-1] == 0) GOTO 0x2e5; Pop(1)

0x2de: PushEmpty(bool, float)
0x2df: Stack[-1] = Stack[-25]
0x2e0: Call2 0x34a

0x2e1: Pop(1)
0x2e2: Pop(1); Push((bool) Stack[-1] == 0)
0x2e3: IF (Stack[-1] == 0) GOTO 0x2e5; Pop(1)

0x2e4: GOTO 0x2ef

0x2e5: GOTO 0x2ee

0x2e6: PushEmpty(bool, float)
0x2e7: Stack[-1] = Stack[-25]
0x2e8: Call2 0x34a

0x2e9: Pop(1)
0x2ea: Pop(1); Push((bool) Stack[-1] == 0)
0x2eb: IF (Stack[-1] == 0) GOTO 0x2ed; Pop(1)

0x2ec: GOTO 0x2ef

0x2ed: Stack[-7] = (bool) 1
0x2ee: GOTO 0x243

0x2ef: @ WaitForAnimEnd()
0x2f0: Pop(0)
0x2f1: Push( Stack[3 + Tasks[-1].StackPointer] )
0x2f2: IF (Stack[-1] == 0) GOTO 0x2f4; Pop(1)

0x2f3: Return(); Pop(22)

0x2f4: Push("all")
0x2f5: Push("attack_off")
0x2f6: @ PlayAnimation(Stack[-2], Stack[-1])
0x2f7: Pop(2)
0x2f8: @ WaitForAnimEnd()
0x2f9: Pop(0)
0x2fa: Push(Stack[-8])
0x2fb: IF (Stack[-1] == 0) GOTO 0x2ff; Pop(1)

0x2fc: Push((float)2.0)
0x2fd: @ Sleep(Stack[-1])
0x2fe: Pop(1)
0x2ff: Return(); Pop(22)

0x300: PushEmpty(bool, bool, cvector, bool, bool, cvector)
0x301: Stack[1 + Tasks[-1].StackPointer] = (int)0
0x302: Push("all")
0x303: Push("attack_begin")
0x304: Push((int) 1)
0x305: Pop(1); Push(Stack[1 + StackPtr] + Stack[-1]);
0x306: Pop(2); Push(Stack[-2] + Stack[-1]);
0x307: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0x308: Pop(2)
0x309: Pop(0); Push((bool) Stack[-3] == 0)
0x30a: IF (Stack[-1] == 0) GOTO 0x30c; Pop(1)

0x30b: GOTO 0x30f

0x30c: Push((int) 1)
0x30d: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x30e: GOTO 0x302

0x30f: Stack[2 + Tasks[-1].StackPointer] = (int)0
0x310: Push("attack")
0x311: Push((int) 1)
0x312: Pop(1); Push(Stack[2 + StackPtr] + Stack[-1]);
0x313: Pop(2); Push(Stack[-2] + Stack[-1]);
0x314: @ IsExisting3DSound(Stack[-3], Stack[-1])
0x315: Pop(1)
0x316: Pop(0); Push((bool) Stack[-2] == 0)
0x317: IF (Stack[-1] == 0) GOTO 0x319; Pop(1)

0x318: GOTO 0x31c

0x319: Push((int) 1)
0x31a: Stack[2 + Tasks[-1].StackPointer] = Stack[2 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x31b: GOTO 0x310

0x31c: Push("all")
0x31d: Push("bjump")
0x31e: @ GetAnimationOffset(Stack[-3], Stack[-2], Stack[-1])
0x31f: Pop(2)
0x320: Push(CvectorIndex(Stack[-1], 2))
0x321: Stack[4 + Tasks[-1].StackPointer] = -Stack[-1]; Pop(1);
0x322: Return(); Pop(6)

0x323: PushEmpty(object, float, float, object, float, float)
0x324: Push((float)0.9)
0x325: Pop(1); Push(Stack[-9] * Stack[-1]);
0x326: @ GetVictim(Stack[-1], Stack[-4])
0x327: Pop(1)
0x328: @ ReportAttack(Stack[-0])
0x329: Pop(0)
0x32a: Pop(0); Push((bool) Stack[-3] == Stack[0 + Tasks[-1].StackPointer])
0x32b: IF (Stack[-1] == 0) GOTO 0x348; Pop(1)

0x32c: PushEmpty(float, object, int)
0x32d: Stack[-2] = Stack[-6]
0x32e: Stack[-1] = Stack[-10]
0x32f: Call2 0x1ea

0x330: Stack[-5] = Stack[-3]
0x331: Pop(3)
0x332: PushEmpty(float, object, float, int)
0x333: Stack[-3] = Stack[-7]
0x334: Stack[-2] = Stack[-6]
0x335: PushEmpty(int, object, int)
0x336: Stack[-2] = Stack[-10]
0x337: Stack[-1] = Stack[-14]
0x338: Call2 0x1ed

0x339: Stack[-4] = Stack[-3]
0x33a: Pop(3)
0x33b: Call2 0x617

0x33c: Stack[-5] = Stack[-4]
0x33d: Pop(4)
0x33e: PushEmpty(int)
0x33f: Call2 0x1f0

0x340: Pop(0)
0x341: @ ReportHit(Stack[-0], Stack[-1], Stack[-2], Stack[-3])
0x342: Pop(1)
0x343: PushEmpty(object, float)
0x344: Stack[-2] = Stack[-5]
0x345: Stack[-1] = Stack[-3]
0x346: Call2 0x1f2

0x347: Pop(2)
0x348: Return(); Pop(6)

0x349: Stack[-3] = 0
0x34a: PushEmpty(int, bool, int, string, int, bool, int, string)
0x34b: PushEmpty()
0x34c: Call2 0x49f

0x34d: Pop(0)
0x34e: @ irand(Stack[-4], Stack[-1])
0x34f: Pop(0)
0x350: Push((int) 1)
0x351: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x352: @ Face(Stack[-0])
0x353: Pop(0)
0x354: Push((bool) 1)
0x355: @ SetAttackState(Stack[-1])
0x356: Pop(1)
0x357: PushEmpty()
0x358: Call2 0x817

0x359: Pop(0)
0x35a: Push("all")
0x35b: Push("attack_begin")
0x35c: Pop(1); Push(Stack[-1] + Stack[-6]);
0x35d: @ PlayAnimation(Stack[-2], Stack[-1])
0x35e: Pop(2)
0x35f: @ WaitForAnimEnd()
0x360: Pop(0)
0x361: PushEmpty()
0x362: Call2 0x47f

0x363: Pop(0)
0x364: PushEmpty(bool, object)
0x365: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x366: Call2 0x6a8

0x367: Pop(1)
0x368: Pop(1); Push((bool) Stack[-1] == 0)
0x369: IF (Stack[-1] == 0) GOTO 0x36e; Pop(1)

0x36a: @ StopAsync()
0x36b: Pop(0)
0x36c: Stack[-10] = (bool) 0
0x36d: Return(); Pop(8)

0x36e: PushEmpty(float, int)
0x36f: Stack[-2] = Stack[-11]
0x370: Stack[-1] = Stack[-6]
0x371: Call2 0x323

0x372: Pop(2)
0x373: Push("all")
0x374: Push("attack_middle")
0x375: Pop(1); Push(Stack[-1] + Stack[-6]);
0x376: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0x377: Pop(2)
0x378: Push(Stack[-3])
0x379: IF (Stack[-1] == 0) GOTO 0x3bf; Pop(1)

0x37a: PushEmpty()
0x37b: Call2 0x817

0x37c: Pop(0)
0x37d: Push("all")
0x37e: Push("attack_middle")
0x37f: Pop(1); Push(Stack[-1] + Stack[-6]);
0x380: @ PlayAnimation(Stack[-2], Stack[-1])
0x381: Pop(2)
0x382: @ WaitForAnimEnd()
0x383: Pop(0)
0x384: PushEmpty()
0x385: Call2 0x49f

0x386: Pop(0)
0x387: PushEmpty(bool, object)
0x388: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x389: Call2 0x6a8

0x38a: Pop(1)
0x38b: Pop(1); Push((bool) Stack[-1] == 0)
0x38c: IF (Stack[-1] == 0) GOTO 0x391; Pop(1)

0x38d: @ StopAsync()
0x38e: Pop(0)
0x38f: Stack[-10] = (bool) 0
0x390: Return(); Pop(8)

0x391: PushEmpty(float, int)
0x392: Stack[-2] = Stack[-11]
0x393: Stack[-1] = Stack[-6]
0x394: Call2 0x323

0x395: Pop(2)
0x396: Stack[-2] = (int) 1
0x397: Push("attack_middle")
0x398: Pop(1); Push(Stack[-1] + Stack[-5]);
0x399: Push("_")
0x39a: Pop(2); Push(Stack[-2] + Stack[-1]);
0x39b: Stack[-2] = Stack[-1] + Stack[-3]; Pop(1);
0x39c: Push("all")
0x39d: @ HasAnimation(Stack[-4], Stack[-1], Stack[-2])
0x39e: Pop(1)
0x39f: Pop(0); Push((bool) Stack[-3] == 0)
0x3a0: IF (Stack[-1] == 0) GOTO 0x3a2; Pop(1)

0x3a1: GOTO 0x3bf

0x3a2: PushEmpty()
0x3a3: Call2 0x817

0x3a4: Pop(0)
0x3a5: Push("all")
0x3a6: @ PlayAnimation(Stack[-1], Stack[-2])
0x3a7: Pop(1)
0x3a8: @ WaitForAnimEnd()
0x3a9: Pop(0)
0x3aa: PushEmpty()
0x3ab: Call2 0x49f

0x3ac: Pop(0)
0x3ad: PushEmpty(bool, object)
0x3ae: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3af: Call2 0x6a8

0x3b0: Pop(1)
0x3b1: Pop(1); Push((bool) Stack[-1] == 0)
0x3b2: IF (Stack[-1] == 0) GOTO 0x3b7; Pop(1)

0x3b3: @ StopAsync()
0x3b4: Pop(0)
0x3b5: Stack[-10] = (bool) 0
0x3b6: Return(); Pop(8)

0x3b7: PushEmpty(float, int)
0x3b8: Stack[-2] = Stack[-11]
0x3b9: Stack[-1] = Stack[-6]
0x3ba: Call2 0x323

0x3bb: Pop(2)
0x3bc: Push((int) 1)
0x3bd: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x3be: GOTO 0x397

0x3bf: Push((bool) 0)
0x3c0: @ SetAttackState(Stack[-1])
0x3c1: Pop(1)
0x3c2: Push("all")
0x3c3: Push("attack_end")
0x3c4: Pop(1); Push(Stack[-1] + Stack[-6]);
0x3c5: @ PlayAnimation(Stack[-2], Stack[-1])
0x3c6: Pop(2)
0x3c7: PushEmpty(bool)
0x3c8: Call2 0x4a9

0x3c9: Pop(0)
0x3ca: IF (Stack[-1] == 0) GOTO 0x3d1; Pop(1)

0x3cb: PushEmpty(bool, float)
0x3cc: Stack[-1] = (float) 0.45
0x3cd: Call2 0x3d5

0x3ce: Pop(2)
0x3cf: @ StopAsync()
0x3d0: Pop(0)
0x3d1: Stack[-10] = (bool) 1
0x3d2: Return(); Pop(8)

0x3d3: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x3d4: Return(); Pop(0)

0x3d5: PushEmpty(float, bool, float, bool)
0x3d6: @ rand(Stack[-2])
0x3d7: Pop(0)
0x3d8: Pop(0); Push((bool) Stack[-2] < Stack[-5])
0x3d9: IF (Stack[-1] == 0) GOTO 0x3e9; Pop(1)

0x3da: @ IsAnimationPlaying(Stack[-1])
0x3db: Pop(0)
0x3dc: Pop(0); Push((bool) Stack[-1] == 0)
0x3dd: IF (Stack[-1] == 0) GOTO 0x3df; Pop(1)

0x3de: GOTO 0x3e8

0x3df: PushEmpty(bool)
0x3e0: Call2 0x437

0x3e1: Pop(0)
0x3e2: IF (Stack[-1] == 0) GOTO 0x3e5; Pop(1)

0x3e3: Stack[-6] = (bool) 1
0x3e4: Return(); Pop(4)

0x3e5: @ sync()
0x3e6: Pop(0)
0x3e7: GOTO 0x3da

0x3e8: GOTO 0x3ee

0x3e9: @ WaitForAnimEnd()
0x3ea: Pop(0)
0x3eb: PushEmpty()
0x3ec: Call2 0x49f

0x3ed: Pop(0)
0x3ee: Stack[-6] = (bool) 0
0x3ef: Return(); Pop(4)

0x3f0: PushEmpty(bool, cvector, cvector, cvector, float, bool, cvector, cvector, cvector, float)
0x3f1: @ IsAnimationPlaying(Stack[-5])
0x3f2: Pop(0)
0x3f3: Pop(0); Push((bool) Stack[-5] == 0)
0x3f4: IF (Stack[-1] == 0) GOTO 0x3f6; Pop(1)

0x3f5: GOTO 0x416

0x3f6: PushEmpty(bool)
0x3f7: Call2 0x437

0x3f8: Pop(0)
0x3f9: IF (Stack[-1] == 0) GOTO 0x3fc; Pop(1)

0x3fa: Stack[-12] = (bool) 1
0x3fb: Return(); Pop(10)

0x3fc: PushEmpty(bool, object)
0x3fd: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3fe: Call2 0x6a8

0x3ff: Pop(1)
0x400: Pop(1); Push((bool) Stack[-1] == 0)
0x401: IF (Stack[-1] == 0) GOTO 0x404; Pop(1)

0x402: Stack[-12] = (bool) 0
0x403: Return(); Pop(10)

0x404: @@ GetPFPosition(Stack[-4])
0x405: Pop(0)
0x406: @ GetPFPosition(Stack[-3])
0x407: Pop(0)
0x408: Stack[-2] = Stack[-4] - Stack[-3]; Pop(0);
0x409: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x40a: Pop(0); Push(Stack[-11] * Stack[-11]);
0x40b: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x40c: IF (Stack[-1] == 0) GOTO 0x413; Pop(1)

0x40d: PushEmpty(bool, float)
0x40e: Stack[-1] = Stack[-13]
0x40f: Call2 0x34a

0x410: Pop(2)
0x411: Stack[-12] = (bool) 1
0x412: Return(); Pop(10)

0x413: @ sync()
0x414: Pop(0)
0x415: GOTO 0x3f1

0x416: PushEmpty()
0x417: Call2 0x49f

0x418: Pop(0)
0x419: Stack[-12] = (bool) 0
0x41a: Return(); Pop(10)

0x41b: PushEmpty(cvector, cvector, cvector, float, float, cvector, cvector, cvector, float, float)
0x41c: PushEmpty(bool, object)
0x41d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x41e: Call2 0x6a8

0x41f: Pop(1)
0x420: Pop(1); Push((bool) Stack[-1] == 0)
0x421: IF (Stack[-1] == 0) GOTO 0x424; Pop(1)

0x422: Stack[-11] = (bool) 0
0x423: Return(); Pop(10)

0x424: PushEmpty(bool)
0x425: Call2 0x474

0x426: Pop(0)
0x427: IF (Stack[-1] == 0) GOTO 0x435; Pop(1)

0x428: @@ GetPFPosition(Stack[-5])
0x429: Pop(0)
0x42a: @ GetPFPosition(Stack[-4])
0x42b: Pop(0)
0x42c: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x42d: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x42e: @@ GetAttackDistance(Stack[-1])
0x42f: Pop(0)
0x430: Push((int) 50)
0x431: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x432: Pop(0); Push(Stack[-1] * Stack[-1]);
0x433: Stack[-12] = Stack[-3] <= Stack[-1]; Pop(1);
0x434: Return(); Pop(10)

0x435: Stack[-11] = (bool) 0
0x436: Return(); Pop(10)

0x437: PushEmpty(bool)
0x438: Stack[-1] = (bool) 0
0x439: PushEmpty(bool)
0x43a: Call2 0x41b

0x43b: Pop(0)
0x43c: IF (Stack[-1] == 0) GOTO 0x442; Pop(1)

0x43d: PushEmpty(bool)
0x43e: Call2 0x447

0x43f: Pop(0)
0x440: IF (Stack[-1] == 0) GOTO 0x442; Pop(1)

0x441: Stack[-1] = (bool) 1
0x442: IF (Stack[-1] == 0) GOTO 0x445; Pop(1)

0x443: Stack[-1] = (bool) 1
0x444: Return(); Pop(0)

0x445: Stack[-1] = (bool) 0
0x446: Return(); Pop(0)

0x447: PushEmpty(object, bool, float, cvector, cvector, object, bool, float, cvector, cvector)
0x448: @ GetScene(Stack[-5])
0x449: Pop(0)
0x44a: Stack[-4] = (bool) 0
0x44b: PushEmpty(cvector, object)
0x44c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x44d: Call2 0x5e1

0x44e: Pop(1)
0x44f: Pop(1); Push(( -Stack[-1])
0x450: @ FindDirLength(Stack[-4], Stack[-1], Stack[-4])
0x451: Pop(1)
0x452: Pop(0); Push((bool) Stack[-3] < Stack[4 + Tasks[-1].StackPointer])
0x453: IF (Stack[-1] == 0) GOTO 0x455; Pop(1)

0x454: GOTO 0x471

0x455: @ Face(Stack[-0])
0x456: Pop(0)
0x457: Push("all")
0x458: Push("bjump")
0x459: @ PlayAnimation(Stack[-2], Stack[-1])
0x45a: Pop(2)
0x45b: @@ GetPFPosition(Stack[-2])
0x45c: Pop(0)
0x45d: @ GetPFPosition(Stack[-1])
0x45e: Pop(0)
0x45f: @ WaitForAnimEnd()
0x460: Pop(0)
0x461: PushEmpty()
0x462: Call2 0x49f

0x463: Pop(0)
0x464: @ StopAsync()
0x465: Pop(0)
0x466: Push(CVector(0.0, 0.0, 0.0))
0x467: @ SetSpeed(Stack[-1])
0x468: Pop(1)
0x469: Stack[-4] = (bool) 1
0x46a: PushEmpty(bool)
0x46b: Call2 0x41b

0x46c: Pop(0)
0x46d: Pop(1); Push((bool) Stack[-1] == 0)
0x46e: IF (Stack[-1] == 0) GOTO 0x470; Pop(1)

0x46f: GOTO 0x471

0x470: GOTO 0x44b

0x471: Stack[-11] = Stack[-4]
0x472: Return(); Pop(10)

0x473: Stack[-5] = 0
0x474: PushEmpty(bool, bool)
0x475: Push("IsAttacking")
0x476: Push((int) 1)
0x477: Pop(2); Push(IsFuncExist(Stack[0 + Tasks[-1].StackPointer], Stack[-2], Stack[-1]))
0x478: IF (Stack[-1] == 0) GOTO 0x47d; Pop(1)

0x479: @@ IsAttacking(Stack[-1])
0x47a: Pop(0)
0x47b: Stack[-3] = Stack[-1]
0x47c: Return(); Pop(2)

0x47d: Stack[-3] = (bool) 0
0x47e: Return(); Pop(2)

0x47f: PushEmpty(float, int, float, int)
0x480: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x481: IF (Stack[-1] == 0) GOTO 0x483; Pop(1)

0x482: Return(); Pop(4)

0x483: Push( Stack[5 + Tasks[-1].StackPointer] )
0x484: IF (Stack[-1] == 0) GOTO 0x48b; Pop(1)

0x485: Push((int) -1)
0x486: Stack[5 + Tasks[-1].StackPointer] = Stack[5 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x487: Push((int) 0)
0x488: Pop(1); Push((bool) Stack[5 + Tasks[-1].StackPointer] > Stack[-1])
0x489: IF (Stack[-1] == 0) GOTO 0x48b; Pop(1)

0x48a: Return(); Pop(4)

0x48b: @ rand(Stack[-2])
0x48c: Pop(0)
0x48d: PushEmpty(float)
0x48e: Call2 0x4ad

0x48f: Pop(0)
0x490: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x491: IF (Stack[-1] == 0) GOTO 0x49e; Pop(1)

0x492: @ irand(Stack[-1], Stack[-2])
0x493: Pop(0)
0x494: Push((int) 1)
0x495: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x496: Push("attack")
0x497: Pop(1); Push(Stack[-1] + Stack[-2]);
0x498: @ Speak(Stack[-1])
0x499: Pop(1)
0x49a: PushEmpty(int)
0x49b: Call2 0x4ab

0x49c: Stack[5 + Tasks[-1].StackPointer] = Stack[-1]
0x49d: Pop(1)
0x49e: Return(); Pop(4)

0x49f: PushEmpty(object)
0x4a0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4a1: Call2 0x80e

0x4a2: Pop(1)
0x4a3: Return(); Pop(0)

0x4a4: PushEmpty(string)
0x4a5: Stack[-1] = "attack_stay"
0x4a6: Call2 0x76c

0x4a7: Pop(1)
0x4a8: Return(); Pop(0)

0x4a9: Stack[-1] = (bool) 1
0x4aa: Return(); Pop(0)

0x4ab: Stack[-1] = (int) 1
0x4ac: Return(); Pop(0)

0x4ad: Stack[-1] = (float) 0.5
0x4ae: Return(); Pop(0)

0x4af: PushEmpty()
0x4b0: PushEmpty(object)
0x4b1: Stack[-1] = Stack[-2]
0x4b2: Call2 0x8ed

0x4b3: Pop(1)
0x4b4: Return(); Pop(0)

0x4b5: PushEmpty()
0x4b6: PushEmpty(bool, object, object)
0x4b7: Stack[-2] = Stack[-6]
0x4b8: Stack[-1] = Stack[-5]
0x4b9: Call2 0x8ef

0x4ba: Pop(3)
0x4bb: Return(); Pop(0)

0x4bc: PushEmpty()
0x4bd: Push("kill")
0x4be: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4bf: IF (Stack[-1] == 0) GOTO 0x4c6; Pop(1)

0x4c0: Push(GlobalVars[0])
0x4c1: Stack[-1] = (bool) 1
0x4c2: GlobalVars[0] = Stack[-1]; Pop(1)
0x4c3: PushEmpty()
0x4c4: Call2 0x506

0x4c5: Pop(0)
0x4c6: Return(); Pop(0)

0x4c7: PushEmpty(bool, bool, bool, bool)
0x4c8: PushEmpty(object)
0x4c9: Stack[-1] = Stack[-10]
0x4ca: Call2 0x80e

0x4cb: Pop(1)
0x4cc: Push((int) 1)
0x4cd: Push((int) 5)
0x4ce: @ SetTimer(Stack[-2], Stack[-1])
0x4cf: Pop(2)
0x4d0: @ CanSee(Stack[-2], Stack[-9])
0x4d1: Pop(0)
0x4d2: Push(Stack[-2])
0x4d3: IF (Stack[-1] == 0) GOTO 0x4da; Pop(1)

0x4d4: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x4d5: PushEmpty(object)
0x4d6: Stack[-1] = Stack[-10]
0x4d7: Call2 0x761

0x4d8: Pop(1)
0x4d9: GOTO 0x4db

0x4da: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x4db: PushEmpty(bool, object)
0x4dc: Stack[-1] = Stack[-11]
0x4dd: Call2 0x5f0

0x4de: Pop(1)
0x4df: IF (Stack[-1] == 0) GOTO 0x4e5; Pop(1)

0x4e0: PushEmpty(object)
0x4e1: Call2 0x795

0x4e2: Pop(0)
0x4e3: @ SendPlayerEnemy(Stack[-10], Stack[-1])
0x4e4: Pop(1)
0x4e5: PushEmpty(bool, object, float, float, bool, bool)
0x4e6: Stack[-5] = Stack[-15]
0x4e7: Stack[-4] = Stack[-14]
0x4e8: Stack[-3] = Stack[-13]
0x4e9: Stack[-2] = Stack[-12]
0x4ea: Stack[-1] = Stack[-11]
0x4eb: Call2 0x530

0x4ec: Stack[-7] = Stack[-6]
0x4ed: Pop(6)
0x4ee: Push( Stack[2 + Tasks[-1].StackPointer] )
0x4ef: IF (Stack[-1] == 0) GOTO 0x4f3; Pop(1)

0x4f0: Push("head")
0x4f1: @ UnlookAsync(Stack[-1])
0x4f2: Pop(1)
0x4f3: Push((int) 1)
0x4f4: @ KillTimer(Stack[-1])
0x4f5: Pop(1)
0x4f6: Stack[-10] = Stack[-1]
0x4f7: Return(); Pop(4)

0x4f8: PushEmpty()
0x4f9: Push((int) 1)
0x4fa: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4fb: IF (Stack[-1] == 0) GOTO 0x501; Pop(1)

0x4fc: PushEmpty(object)
0x4fd: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4fe: Call2 0x80e

0x4ff: Pop(1)
0x500: GOTO 0x505

0x501: PushEmpty(int)
0x502: Stack[-1] = Stack[-2]
0x503: Call2 0x596

0x504: Pop(1)
0x505: Return(); Pop(0)

0x506: Push((int) 1)
0x507: @ KillTimer(Stack[-1])
0x508: Pop(1)
0x509: Push( Stack[2 + Tasks[-1].StackPointer] )
0x50a: IF (Stack[-1] == 0) GOTO 0x50f; Pop(1)

0x50b: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x50c: Push("head")
0x50d: @ UnlookAsync(Stack[-1])
0x50e: Pop(1)
0x50f: PushEmpty()
0x510: Call2 0x5ac

0x511: Pop(0)
0x512: Return(); Pop(0)

0x513: PushEmpty()
0x514: PushEmpty(bool)
0x515: Stack[-1] = (bool) 0
0x516: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0x517: IF (Stack[-1] == 0) GOTO 0x51b; Pop(1)

0x518: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x519: IF (Stack[-1] == 0) GOTO 0x51b; Pop(1)

0x51a: Stack[-1] = (bool) 1
0x51b: IF (Stack[-1] == 0) GOTO 0x521; Pop(1)

0x51c: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x51d: PushEmpty(object)
0x51e: Stack[-1] = Stack[-2]
0x51f: Call2 0x761

0x520: Pop(1)
0x521: Return(); Pop(0)

0x522: PushEmpty()
0x523: PushEmpty(bool)
0x524: Stack[-1] = (bool) 0
0x525: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0x526: IF (Stack[-1] == 0) GOTO 0x52a; Pop(1)

0x527: Push( Stack[2 + Tasks[-1].StackPointer] )
0x528: IF (Stack[-1] == 0) GOTO 0x52a; Pop(1)

0x529: Stack[-1] = (bool) 1
0x52a: IF (Stack[-1] == 0) GOTO 0x52f; Pop(1)

0x52b: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x52c: Push("head")
0x52d: @ UnlookAsync(Stack[-1])
0x52e: Pop(1)
0x52f: Return(); Pop(0)

0x530: PushEmpty(bool, bool, object, cvector, cvector, cvector, float, object, bool, bool, object, cvector, cvector, cvector, float, object)
0x531: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x532: Stack[1 + Tasks[-1].StackPointer] = Stack[-21]
0x533: Stack[-7] = Stack[-17]
0x534: PushEmpty(bool, object)
0x535: Stack[-1] = Stack[-23]
0x536: Call2 0x5bc

0x537: Pop(1)
0x538: Pop(1); Push((bool) Stack[-1] == 0)
0x539: IF (Stack[-1] == 0) GOTO 0x53c; Pop(1)

0x53a: Stack[-22] = (bool) 0
0x53b: Return(); Pop(16)

0x53c: @@ GetPosition(Stack[-5])
0x53d: Pop(0)
0x53e: @ GetPosition(Stack[-4])
0x53f: Pop(0)
0x540: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x541: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x542: PushEmpty(bool)
0x543: Stack[-1] = (bool) 0
0x544: Push((int) 0)
0x545: Pop(1); Push((bool) Stack[-21] > Stack[-1])
0x546: IF (Stack[-1] == 0) GOTO 0x54b; Pop(1)

0x547: Pop(0); Push(Stack[-20] * Stack[-20]);
0x548: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x549: IF (Stack[-1] == 0) GOTO 0x54b; Pop(1)

0x54a: Stack[-1] = (bool) 1
0x54b: IF (Stack[-1] == 0) GOTO 0x550; Pop(1)

0x54c: @ Stop()
0x54d: Pop(0)
0x54e: Stack[-22] = (bool) 0
0x54f: Return(); Pop(16)

0x550: Pop(0); Push(Stack[-20] * Stack[-20]);
0x551: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x552: IF (Stack[-1] == 0) GOTO 0x58e; Pop(1)

0x553: @@ GetPFPosition(Stack[-5])
0x554: Pop(0)
0x555: @ FindPathTo(Stack[-1], Stack[-5])
0x556: Pop(0)
0x557: Pop(0); Push(( Stack[-1] != 0 )
0x558: IF (Stack[-1] == 0) GOTO 0x55b; Pop(1)

0x559: Stack[-6] = Stack[-1]
0x55a: Stack[-1] = 0
0x55b: Pop(0); Push(( Stack[-6] != 0 )
0x55c: IF (Stack[-1] == 0) GOTO 0x57c; Pop(1)

0x55d: Push(Stack[-7])
0x55e: IF (Stack[-1] == 0) GOTO 0x565; Pop(1)

0x55f: Stack[-7] = (bool) 0
0x560: @ RotatePath(Stack[-6], Stack[-8])
0x561: Pop(0)
0x562: Pop(0); Push((bool) Stack[-8] == 0)
0x563: IF (Stack[-1] == 0) GOTO 0x565; Pop(1)

0x564: GOTO 0x594

0x565: Push((int) 0)
0x566: Push((float)0.3)
0x567: @ SetTimer(Stack[-2], Stack[-1])
0x568: Pop(2)
0x569: PushEmpty(string)
0x56a: Call2 0x5c3

0x56b: Pop(0)
0x56c: PushEmpty(string)
0x56d: Call2 0x5c5

0x56e: Pop(0)
0x56f: @ FollowPath(Stack[-8], Stack[-20], Stack[-10], Stack[-2], Stack[-1])
0x570: Pop(2)
0x571: Pop(0); Push((bool) Stack[-8] == 0)
0x572: IF (Stack[-1] == 0) GOTO 0x57a; Pop(1)

0x573: Push( Stack[0 + Tasks[-1].StackPointer] )
0x574: IF (Stack[-1] == 0) GOTO 0x578; Pop(1)

0x575: Stack[-6] = 0
0x576: GOTO 0x594

0x577: GOTO 0x579

0x578: GOTO 0x593

0x579: GOTO 0x57b

0x57a: Stack[-6] = 0
0x57b: GOTO 0x58c

0x57c: Push((int) 0)
0x57d: @ KillTimer(Stack[-1])
0x57e: Pop(1)
0x57f: Push((float)0.5)
0x580: @ Sleep(Stack[-1], Stack[-9])
0x581: Pop(1)
0x582: Pop(0); Push((bool) Stack[-8] == 0)
0x583: IF (Stack[-1] == 0) GOTO 0x588; Pop(1)

0x584: Push( Stack[0 + Tasks[-1].StackPointer] )
0x585: IF (Stack[-1] == 0) GOTO 0x588; Pop(1)

0x586: Stack[-6] = 0
0x587: GOTO 0x594

0x588: Push((int) 0)
0x589: Push((float)0.3)
0x58a: @ SetTimer(Stack[-2], Stack[-1])
0x58b: Pop(2)
0x58c: Stack[-1] = 0
0x58d: GOTO 0x592

0x58e: Push((int) 0)
0x58f: @ KillTimer(Stack[-1])
0x590: Pop(1)
0x591: GOTO 0x594

0x592: Stack[-6] = 0
0x593: GOTO 0x534

0x594: Stack[-22] = !Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x595: Return(); Pop(16)

0x596: PushEmpty()
0x597: Push((int) 0)
0x598: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x599: IF (Stack[-1] == 0) GOTO 0x59b; Pop(1)

0x59a: Return(); Pop(0)

0x59b: PushEmpty(bool, object)
0x59c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x59d: Call2 0x5bc

0x59e: Pop(1)
0x59f: Pop(1); Push((bool) Stack[-1] == 0)
0x5a0: IF (Stack[-1] == 0) GOTO 0x5a2; Pop(1)

0x5a1: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x5a2: Push((int) 0)
0x5a3: @ KillTimer(Stack[-1])
0x5a4: Pop(1)
0x5a5: @ Stop()
0x5a6: Pop(0)
0x5a7: Return(); Pop(0)

0x5a8: PushEmpty()
0x5a9: @ RequestClearPath(Stack[-1])
0x5aa: Pop(0)
0x5ab: Return(); Pop(0)

0x5ac: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x5ad: Push((int) 0)
0x5ae: @ KillTimer(Stack[-1])
0x5af: Pop(1)
0x5b0: @ Stop()
0x5b1: Pop(0)
0x5b2: Return(); Pop(0)

0x5b3: PushEmpty()
0x5b4: PushEmpty()
0x5b5: Call2 0x506

0x5b6: Pop(0)
0x5b7: PushEmpty(object)
0x5b8: Stack[-1] = Stack[-2]
0x5b9: Call2 0x867

0x5ba: Pop(1)
0x5bb: Return(); Pop(0)

0x5bc: PushEmpty()
0x5bd: PushEmpty(bool, object)
0x5be: Stack[-1] = Stack[-3]
0x5bf: Call2 0x6a8

0x5c0: Stack[-4] = Stack[-2]
0x5c1: Pop(2)
0x5c2: Return(); Pop(0)

0x5c3: Stack[-1] = "walk"
0x5c4: Return(); Pop(0)

0x5c5: Stack[-1] = "run"
0x5c6: Return(); Pop(0)

0x5c7: PushEmpty()
0x5c8: PushEmpty(bool, object)
0x5c9: Stack[-1] = Stack[-3]
0x5ca: Push(-2, 0); TaskCall(2)
0x5cb: Call2 0x12b

0x5cc: Pop(-2, 0); TaskReturn
0x5cd: Pop(2)
0x5ce: Push((int) 1)
0x5cf: @ Sleep(Stack[-1])
0x5d0: Pop(1)
0x5d1: GOTO 0x5c8

0x5d2: Return(); Pop(0)

0x5d3: PushEmpty()
0x5d4: Push((int) 2)
0x5d5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5d6: IF (Stack[-1] == 0) GOTO 0x5da; Pop(1)

0x5d7: Stack[-2] = "fire"
0x5d8: Return(); Pop(0)

0x5d9: GOTO 0x5df

0x5da: Push((int) 1)
0x5db: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5dc: IF (Stack[-1] == 0) GOTO 0x5df; Pop(1)

0x5dd: Stack[-2] = "bullet"
0x5de: Return(); Pop(0)

0x5df: Stack[-2] = "phys"
0x5e0: Return(); Pop(0)

0x5e1: PushEmpty(cvector, cvector, cvector, cvector)
0x5e2: @ GetPosition(Stack[-2])
0x5e3: Pop(0)
0x5e4: @@ GetPosition(Stack[-1])
0x5e5: Pop(0)
0x5e6: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x5e7: Return(); Pop(4)

0x5e8: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x5e9: @ GetPosition(Stack[-3])
0x5ea: Pop(0)
0x5eb: @@ GetPosition(Stack[-2])
0x5ec: Pop(0)
0x5ed: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x5ee: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x5ef: Return(); Pop(6)

0x5f0: PushEmpty(bool, bool)
0x5f1: @ IsPlayerActor(Stack[-3], Stack[-1])
0x5f2: Pop(0)
0x5f3: Stack[-4] = Stack[-1]
0x5f4: Return(); Pop(2)

0x5f5: PushEmpty(bool, bool)
0x5f6: Push("HasProperty")
0x5f7: Push((int) 2)
0x5f8: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x5f9: Pop(1); Push((bool) Stack[-1] == 0)
0x5fa: IF (Stack[-1] == 0) GOTO 0x5fd; Pop(1)

0x5fb: Stack[-5] = (bool) 0
0x5fc: Return(); Pop(2)

0x5fd: @@ HasProperty(Stack[-3], Stack[-1])
0x5fe: Pop(0)
0x5ff: Stack[-5] = Stack[-1]
0x600: Return(); Pop(2)

0x601: PushEmpty(float, float)
0x602: PushEmpty(bool, object, string)
0x603: Stack[-2] = Stack[-10]
0x604: Stack[-1] = Stack[-9]
0x605: Call2 0x5f5

0x606: Pop(2)
0x607: Pop(1); Push((bool) Stack[-1] == 0)
0x608: IF (Stack[-1] == 0) GOTO 0x60b; Pop(1)

0x609: Stack[-8] = (bool) 0
0x60a: Return(); Pop(2)

0x60b: @@ GetProperty(Stack[-6], Stack[-1])
0x60c: Pop(0)
0x60d: PushEmpty(float, float, float, float)
0x60e: Stack[-3] = Stack[-5] + Stack[-9]; Pop(0);
0x60f: Stack[-2] = Stack[-8]
0x610: Stack[-1] = Stack[-7]
0x611: Call2 0x7c4

0x612: Pop(3)
0x613: @@ SetProperty(Stack[-7], Stack[-1])
0x614: Pop(1)
0x615: Stack[-8] = (bool) 1
0x616: Return(); Pop(2)

0x617: PushEmpty(int, string, int, float, float, float, int, string, int, float, float, float)
0x618: PushEmpty(bool, object, string)
0x619: Stack[-2] = Stack[-18]
0x61a: Stack[-1] = "health"
0x61b: Call2 0x5f5

0x61c: Pop(2)
0x61d: Pop(1); Push((bool) Stack[-1] == 0)
0x61e: IF (Stack[-1] == 0) GOTO 0x621; Pop(1)

0x61f: Stack[-16] = (float) 0.0
0x620: Return(); Pop(12)

0x621: PushEmpty(bool, object, string)
0x622: Stack[-2] = Stack[-18]
0x623: Stack[-1] = "armor"
0x624: Call2 0x5f5

0x625: Pop(2)
0x626: Pop(1); Push((bool) Stack[-1] == 0)
0x627: IF (Stack[-1] == 0) GOTO 0x62a; Pop(1)

0x628: Stack[-6] = (int) 0
0x629: GOTO 0x62d

0x62a: Push("armor")
0x62b: @@ GetProperty(Stack[-1], Stack[-7])
0x62c: Pop(1)
0x62d: Push("armor_")
0x62e: PushEmpty(string, int)
0x62f: Stack[-1] = Stack[-16]
0x630: Call2 0x5d3

0x631: Pop(1)
0x632: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x633: PushEmpty(bool, object, string)
0x634: Stack[-2] = Stack[-18]
0x635: Stack[-1] = Stack[-8]
0x636: Call2 0x5f5

0x637: Pop(2)
0x638: Pop(1); Push((bool) Stack[-1] == 0)
0x639: IF (Stack[-1] == 0) GOTO 0x63c; Pop(1)

0x63a: Stack[-4] = (int) 0
0x63b: GOTO 0x63e

0x63c: @@ GetProperty(Stack[-5], Stack[-4])
0x63d: Pop(0)
0x63e: PushEmpty(float, float, float)
0x63f: Pop(0); Push(Stack[-9] + Stack[-7]);
0x640: Push((float)100.0)
0x641: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0x642: Stack[-1] = (int) 1
0x643: Call2 0x7a5

0x644: Stack[-6] = Stack[-3]
0x645: Pop(3)
0x646: Push("health")
0x647: @@ GetProperty(Stack[-1], Stack[-3])
0x648: Pop(1)
0x649: Push((int) 1)
0x64a: Pop(1); Push(Stack[-1] - Stack[-4]);
0x64b: Stack[-2] = Stack[-15] * Stack[-1]; Pop(1);
0x64c: Push("health")
0x64d: PushEmpty(float, float, float, float)
0x64e: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0x64f: Stack[-2] = (int) 0
0x650: Stack[-1] = (int) 1
0x651: Call2 0x7c4

0x652: Pop(3)
0x653: @@ SetProperty(Stack[-2], Stack[-1])
0x654: Pop(2)
0x655: PushEmpty(bool, object)
0x656: Stack[-1] = Stack[-17]
0x657: Call2 0x5f0

0x658: Pop(1)
0x659: IF (Stack[-1] == 0) GOTO 0x65e; Pop(1)

0x65a: PushEmpty(float)
0x65b: Stack[-1] = -Stack[-2]; Pop(0);
0x65c: Call2 0x7fa

0x65d: Pop(1)
0x65e: Stack[-16] = Stack[-1]
0x65f: Return(); Pop(12)

0x660: PushEmpty(float, float)
0x661: PushEmpty(bool, object, string)
0x662: Stack[-2] = Stack[-6]
0x663: Stack[-1] = "health"
0x664: Call2 0x5f5

0x665: Pop(2)
0x666: Pop(1); Push((bool) Stack[-1] == 0)
0x667: IF (Stack[-1] == 0) GOTO 0x66a; Pop(1)

0x668: Stack[-4] = (bool) 0
0x669: Return(); Pop(2)

0x66a: PushEmpty(bool)
0x66b: Stack[-1] = (bool) 0
0x66c: PushEmpty(bool, object)
0x66d: Stack[-1] = Stack[-6]
0x66e: Call2 0x5f0

0x66f: Pop(1)
0x670: IF (Stack[-1] == 0) GOTO 0x676; Pop(1)

0x671: PushEmpty(bool)
0x672: Call2 0x822

0x673: Pop(0)
0x674: IF (Stack[-1] == 0) GOTO 0x676; Pop(1)

0x675: Stack[-1] = (bool) 1
0x676: IF (Stack[-1] == 0) GOTO 0x679; Pop(1)

0x677: Stack[-4] = (bool) 0
0x678: Return(); Pop(2)

0x679: Push("health")
0x67a: @@ GetProperty(Stack[-1], Stack[-2])
0x67b: Pop(1)
0x67c: Push((float)0.0)
0x67d: Stack[-5] = Stack[-2] <= Stack[-1]; Pop(1);
0x67e: Return(); Pop(2)

0x67f: PushEmpty(bool, bool)
0x680: @@ IsDead(Stack[-1])
0x681: Pop(0)
0x682: Stack[-4] = Stack[-1]
0x683: Return(); Pop(2)

0x684: PushEmpty(object, object, object, object)
0x685: Pop(0); Push((bool) Stack[-5] == 0)
0x686: IF (Stack[-1] == 0) GOTO 0x689; Pop(1)

0x687: Stack[-6] = (bool) 0
0x688: Return(); Pop(4)

0x689: PushEmpty(bool)
0x68a: Stack[-1] = (bool) 0
0x68b: Push("IsDead")
0x68c: Push((int) 1)
0x68d: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x68e: IF (Stack[-1] == 0) GOTO 0x695; Pop(1)

0x68f: PushEmpty(bool, object)
0x690: Stack[-1] = Stack[-8]
0x691: Call2 0x67f

0x692: Pop(1)
0x693: IF (Stack[-1] == 0) GOTO 0x695; Pop(1)

0x694: Stack[-1] = (bool) 1
0x695: IF (Stack[-1] == 0) GOTO 0x698; Pop(1)

0x696: Stack[-6] = (bool) 0
0x697: Return(); Pop(4)

0x698: @ GetScene(Stack[-2])
0x699: Pop(0)
0x69a: Pop(0); Push((bool) Stack[-2] == 0)
0x69b: IF (Stack[-1] == 0) GOTO 0x69e; Pop(1)

0x69c: Stack[-6] = (bool) 0
0x69d: Return(); Pop(4)

0x69e: @@ GetScene(Stack[-1])
0x69f: Pop(0)
0x6a0: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x6a1: IF (Stack[-1] == 0) GOTO 0x6a4; Pop(1)

0x6a2: Stack[-6] = (bool) 0
0x6a3: Return(); Pop(4)

0x6a4: Stack[-6] = (bool) 1
0x6a5: Return(); Pop(4)

0x6a6: Stack[-1] = 0
0x6a7: Stack[-2] = 0
0x6a8: PushEmpty(int, int)
0x6a9: PushEmpty(bool, object)
0x6aa: Stack[-1] = Stack[-5]
0x6ab: Call2 0x684

0x6ac: Pop(1)
0x6ad: Pop(1); Push((bool) Stack[-1] == 0)
0x6ae: IF (Stack[-1] == 0) GOTO 0x6b1; Pop(1)

0x6af: Stack[-4] = (bool) 0
0x6b0: Return(); Pop(2)

0x6b1: PushEmpty(bool, object, string)
0x6b2: Stack[-2] = Stack[-6]
0x6b3: Stack[-1] = "noaccess"
0x6b4: Call2 0x5f5

0x6b5: Pop(2)
0x6b6: Pop(1); Push((bool) Stack[-1] == 0)
0x6b7: IF (Stack[-1] == 0) GOTO 0x6ba; Pop(1)

0x6b8: Stack[-4] = (bool) 1
0x6b9: Return(); Pop(2)

0x6ba: Push("noaccess")
0x6bb: @@ GetProperty(Stack[-1], Stack[-2])
0x6bc: Pop(1)
0x6bd: Push((int) 0)
0x6be: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x6bf: Return(); Pop(2)

0x6c0: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x6c1: @ GetPosition(Stack[-3])
0x6c2: Pop(0)
0x6c3: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x6c4: Push(CvectorIndex(Stack[-2], 0))
0x6c5: Push(CvectorIndex(Stack[-3], 2))
0x6c6: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x6c7: Pop(2)
0x6c8: Stack[-8] = Stack[-1]
0x6c9: Return(); Pop(6)

0x6ca: PushEmpty(cvector, cvector)
0x6cb: @@ GetPosition(Stack[-1])
0x6cc: Pop(0)
0x6cd: PushEmpty(bool, cvector)
0x6ce: Stack[-1] = Stack[-3]
0x6cf: Call2 0x6c0

0x6d0: Stack[-6] = Stack[-2]
0x6d1: Pop(2)
0x6d2: Return(); Pop(2)

0x6d3: PushEmpty(bool, int, cvector, cvector, cvector, cvector, string, bool, int, cvector, cvector, cvector, cvector, string)
0x6d4: Pop(0); Push((bool) Stack[-15] == 0)
0x6d5: IF (Stack[-1] == 0) GOTO 0x6d7; Pop(1)

0x6d6: Return(); Pop(14)

0x6d7: @ IsDead(Stack[-7])
0x6d8: Pop(0)
0x6d9: Push(Stack[-7])
0x6da: IF (Stack[-1] == 0) GOTO 0x6dc; Pop(1)

0x6db: Return(); Pop(14)

0x6dc: @ GetSecondaryAnimationType(Stack[-6])
0x6dd: Pop(0)
0x6de: Push((int) 0)
0x6df: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x6e0: IF (Stack[-1] == 0) GOTO 0x6e2; Pop(1)

0x6e1: Return(); Pop(14)

0x6e2: @@ GetPosition(Stack[-5])
0x6e3: Pop(0)
0x6e4: @ GetPosition(Stack[-4])
0x6e5: Pop(0)
0x6e6: @ GetDirection(Stack[-3])
0x6e7: Pop(0)
0x6e8: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0x6e9: Push(CvectorIndex(Stack[-2], 0))
0x6ea: Push(CvectorIndex(Stack[-4], 0))
0x6eb: Pop(2); Push(Stack[-2] * Stack[-1]);
0x6ec: Push(CvectorIndex(Stack[-3], 2))
0x6ed: Push(CvectorIndex(Stack[-5], 2))
0x6ee: Pop(2); Push(Stack[-2] * Stack[-1]);
0x6ef: Pop(2); Push(Stack[-2] + Stack[-1]);
0x6f0: Push((int) 0)
0x6f1: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x6f2: IF (Stack[-1] == 0) GOTO 0x6f5; Pop(1)

0x6f3: Stack[-1] = "fhit"
0x6f4: GOTO 0x6f6

0x6f5: Stack[-1] = "bhit"
0x6f6: Push("hit_react")
0x6f7: Push("1")
0x6f8: Pop(1); Push(Stack[-3] + Stack[-1]);
0x6f9: Push("2")
0x6fa: Pop(1); Push(Stack[-4] + Stack[-1]);
0x6fb: Push((int) -10)
0x6fc: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x6fd: Pop(4)
0x6fe: Return(); Pop(14)

0x6ff: PushEmpty(cvector, object, int, bool, cvector, cvector, int, int, cvector, cvector, object, int, bool, cvector, cvector, int, int, cvector)
0x700: PushEmpty(bool)
0x701: Stack[-1] = (bool) 0
0x702: PushEmpty(bool)
0x703: Stack[-1] = (bool) 0
0x704: Push(Stack[-23])
0x705: IF (Stack[-1] == 0) GOTO 0x70a; Pop(1)

0x706: Push((int) 4)
0x707: Pop(1); Push((bool) Stack[-23] != Stack[-1])
0x708: IF (Stack[-1] == 0) GOTO 0x70a; Pop(1)

0x709: Stack[-1] = (bool) 1
0x70a: IF (Stack[-1] == 0) GOTO 0x70f; Pop(1)

0x70b: Push((int) 5)
0x70c: Pop(1); Push((bool) Stack[-22] != Stack[-1])
0x70d: IF (Stack[-1] == 0) GOTO 0x70f; Pop(1)

0x70e: Stack[-1] = (bool) 1
0x70f: IF (Stack[-1] == 0) GOTO 0x73e; Pop(1)

0x710: PushEmpty(cvector, cvector)
0x711: PushEmpty(cvector, object)
0x712: Stack[-1] = Stack[-25]
0x713: Call2 0x5e1

0x714: Stack[-3] = Stack[-2]
0x715: Pop(2)
0x716: Call2 0x79b

0x717: Stack[-11] = Stack[-2]
0x718: Pop(2)
0x719: @ CreateVectorVector(Stack[-8])
0x71a: Pop(0)
0x71b: Stack[-7] = (int) 1
0x71c: Push("hit")
0x71d: Pop(1); Push(Stack[-1] + Stack[-8]);
0x71e: @ GetGeometryLocator(Stack[-1], Stack[-7], Stack[-6], Stack[-5])
0x71f: Pop(1)
0x720: Pop(0); Push((bool) Stack[-6] == 0)
0x721: IF (Stack[-1] == 0) GOTO 0x723; Pop(1)

0x722: GOTO 0x72c

0x723: Pop(0); Push(Stack[-4] | Stack[-9]);
0x724: Push((float)0.70711)
0x725: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x726: IF (Stack[-1] == 0) GOTO 0x729; Pop(1)

0x727: @@ add(Stack[-5])
0x728: Pop(0)
0x729: Push((int) 1)
0x72a: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x72b: GOTO 0x71c

0x72c: @@ size(Stack[-3])
0x72d: Pop(0)
0x72e: Push(Stack[-3])
0x72f: IF (Stack[-1] == 0) GOTO 0x73d; Pop(1)

0x730: @ irand(Stack[-2], Stack[-3])
0x731: Pop(0)
0x732: @@ get(Stack[-1], Stack[-2])
0x733: Pop(0)
0x734: PushEmpty(object, int, float, cvector, cvector)
0x735: Stack[-5] = Stack[-26]
0x736: Stack[-4] = Stack[-25]
0x737: Stack[-3] = Stack[-24]
0x738: Stack[-2] = Stack[-6]
0x739: Stack[-1] = -Stack[-14]; Pop(0);
0x73a: Call2 0x743

0x73b: Pop(5)
0x73c: Return(); Pop(18)

0x73d: Stack[-8] = 0
0x73e: PushEmpty(object)
0x73f: Stack[-1] = Stack[-22]
0x740: Call2 0x6d3

0x741: Pop(1)
0x742: Return(); Pop(18)

0x743: PushEmpty(object, object, object, object)
0x744: @ GetScene(Stack[-2])
0x745: Pop(0)
0x746: Push("scripted")
0x747: Push("blood_dir.xml")
0x748: @ AddActorByType(Stack[-3], Stack[-2], Stack[-4], Stack[-8], Stack[-7], Stack[-1])
0x749: Pop(2)
0x74a: PushEmpty(object)
0x74b: Stack[-1] = Stack[-10]
0x74c: Call2 0x6d3

0x74d: Pop(1)
0x74e: Return(); Pop(4)

0x74f: Stack[-1] = 0
0x750: Stack[-2] = 0
0x751: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x752: @@ GetPosition(Stack[-3])
0x753: Pop(0)
0x754: @ GetPosition(Stack[-2])
0x755: Pop(0)
0x756: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0x757: Push(CvectorIndex(Stack[-1], 0))
0x758: Push(CvectorIndex(Stack[-2], 2))
0x759: @ RotateAsync(Stack[-2], Stack[-1])
0x75a: Pop(2)
0x75b: Return(); Pop(6)

0x75c: PushEmpty(bool, bool)
0x75d: @ IsLoaded(Stack[-1])
0x75e: Pop(0)
0x75f: Stack[-3] = Stack[-1]
0x760: Return(); Pop(2)

0x761: PushEmpty(float, cvector, float, cvector)
0x762: @@ GetEyesHeight(Stack[-2])
0x763: Pop(0)
0x764: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x765: Push(CvectorIndex(Stack[-1], 1))
0x766: Stack[-1] = Stack[-3]
0x767: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x768: Push("head")
0x769: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x76a: Pop(1)
0x76b: Return(); Pop(4)

0x76c: PushEmpty(bool, int, bool, int, bool, float, cvector, cvector, bool, int, bool, int, bool, float, cvector, cvector)
0x76d: @ IsExisting3DSound(Stack[-8], Stack[-17])
0x76e: Pop(0)
0x76f: Pop(0); Push((bool) Stack[-8] == 0)
0x770: IF (Stack[-1] == 0) GOTO 0x785; Pop(1)

0x771: Stack[-7] = (int) 0
0x772: Push((int) 1)
0x773: Pop(1); Push(Stack[-8] + Stack[-1]);
0x774: Pop(1); Push(Stack[-18] + Stack[-1]);
0x775: @ IsExisting3DSound(Stack[-7], Stack[-1])
0x776: Pop(1)
0x777: Pop(0); Push((bool) Stack[-6] == 0)
0x778: IF (Stack[-1] == 0) GOTO 0x77a; Pop(1)

0x779: GOTO 0x77d

0x77a: Push((int) 1)
0x77b: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x77c: GOTO 0x772

0x77d: Pop(0); Push((bool) Stack[-7] == 0)
0x77e: IF (Stack[-1] == 0) GOTO 0x780; Pop(1)

0x77f: Return(); Pop(16)

0x780: @ irand(Stack[-5], Stack[-7])
0x781: Pop(0)
0x782: Push((int) 1)
0x783: Pop(1); Push(Stack[-6] + Stack[-1]);
0x784: Stack[-18] = Stack[-18] + Stack[-1]; Pop(1);
0x785: @ Is3DSoundLoaded(Stack[-4], Stack[-17])
0x786: Pop(0)
0x787: Push(Stack[-4])
0x788: IF (Stack[-1] == 0) GOTO 0x794; Pop(1)

0x789: @ GetEyesHeight(Stack[-3])
0x78a: Pop(0)
0x78b: @ GetDirection(Stack[-2])
0x78c: Pop(0)
0x78d: Push((int) 50)
0x78e: Stack[-2] = Stack[-3] * Stack[-1]; Pop(1);
0x78f: Push(CvectorIndex(Stack[-1], 1))
0x790: Stack[-1] = Stack[-1] + Stack[-4]; Pop(0);
0x791: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x792: @ PlayGlobalSound(Stack[-17], Stack[-1])
0x793: Pop(0)
0x794: Return(); Pop(16)

0x795: PushEmpty(object, object)
0x796: @ self(Stack[-1])
0x797: Pop(0)
0x798: Stack[-3] = Stack[-1]
0x799: Return(); Pop(2)

0x79a: Stack[-1] = 0
0x79b: PushEmpty(float, float)
0x79c: Pop(0); Push(Stack[-3] | Stack[-3]);
0x79d: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x79e: Push((float)0.0)
0x79f: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x7a0: IF (Stack[-1] == 0) GOTO 0x7a3; Pop(1)

0x7a1: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x7a2: Return(); Pop(2)

0x7a3: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x7a4: Return(); Pop(2)

0x7a5: PushEmpty()
0x7a6: Pop(0); Push((bool) Stack[-2] < Stack[-1])
0x7a7: IF (Stack[-1] == 0) GOTO 0x7aa; Pop(1)

0x7a8: Stack[-3] = Stack[-2]
0x7a9: GOTO 0x7ab

0x7aa: Stack[-3] = Stack[-1]
0x7ab: Return(); Pop(0)

0x7ac: PushEmpty()
0x7ad: Pop(0); Push(Stack[-2] * Stack[-2]);
0x7ae: Push((int) 4)
0x7af: Pop(1); Push(Stack[-1] * Stack[-5]);
0x7b0: Pop(1); Push(Stack[-1] * Stack[-3]);
0x7b1: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x7b2: Return(); Pop(0)

0x7b3: PushEmpty(float, float)
0x7b4: Pop(0); Push(( -Stack[-5])
0x7b5: Pop(1); Push(Stack[-1] - Stack[-4]);
0x7b6: Push((int) 2)
0x7b7: Pop(1); Push(Stack[-1] * Stack[-8]);
0x7b8: Stack[-3] = Stack[-2] / Stack[-1]; Pop(2);
0x7b9: Push((int) 0)
0x7ba: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x7bb: IF (Stack[-1] == 0) GOTO 0x7be; Pop(1)

0x7bc: Stack[-7] = Stack[-1]
0x7bd: Return(); Pop(2)

0x7be: Pop(0); Push(( -Stack[-5])
0x7bf: Pop(1); Push(Stack[-1] + Stack[-4]);
0x7c0: Push((int) 2)
0x7c1: Pop(1); Push(Stack[-1] * Stack[-8]);
0x7c2: Stack[-9] = Stack[-2] / Stack[-1]; Pop(2);
0x7c3: Return(); Pop(2)

0x7c4: PushEmpty()
0x7c5: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x7c6: IF (Stack[-1] == 0) GOTO 0x7c9; Pop(1)

0x7c7: Stack[-4] = Stack[-2]
0x7c8: Return(); Pop(0)

0x7c9: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x7ca: IF (Stack[-1] == 0) GOTO 0x7cd; Pop(1)

0x7cb: Stack[-4] = Stack[-1]
0x7cc: Return(); Pop(0)

0x7cd: Stack[-4] = Stack[-3]
0x7ce: Return(); Pop(0)

0x7cf: PushEmpty()
0x7d0: Stack[-4] = (bool) 0
0x7d1: Pop(0); Push((bool) Stack[-3] >= Stack[-2])
0x7d2: IF (Stack[-1] == 0) GOTO 0x7d6; Pop(1)

0x7d3: Pop(0); Push((bool) Stack[-3] <= Stack[-1])
0x7d4: IF (Stack[-1] == 0) GOTO 0x7d6; Pop(1)

0x7d5: Stack[-4] = (bool) 1
0x7d6: Return(); Pop(0)

0x7d7: PushEmpty()
0x7d8: Pop(0); Push((bool) Stack[-2] == 0)
0x7d9: IF (Stack[-1] == 0) GOTO 0x7dc; Pop(1)

0x7da: Stack[-3] = (bool) 0
0x7db: Return(); Pop(0)

0x7dc: Push((int) 0)
0x7dd: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x7de: IF (Stack[-1] == 0) GOTO 0x7e3; Pop(1)

0x7df: Push((int) 8)
0x7e0: @ SendWorldWndMessage(Stack[-1])
0x7e1: Pop(1)
0x7e2: GOTO 0x7ec

0x7e3: Push((int) 0)
0x7e4: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x7e5: IF (Stack[-1] == 0) GOTO 0x7ea; Pop(1)

0x7e6: Push((int) 9)
0x7e7: @ SendWorldWndMessage(Stack[-1])
0x7e8: Pop(1)
0x7e9: GOTO 0x7ec

0x7ea: Stack[-3] = (bool) 0
0x7eb: Return(); Pop(0)

0x7ec: PushEmpty(float)
0x7ed: Stack[-1] = Stack[-2]
0x7ee: Call2 0x804

0x7ef: Pop(1)
0x7f0: PushEmpty(bool, object, string, float, float, float)
0x7f1: Stack[-5] = Stack[-8]
0x7f2: Stack[-4] = "reputation"
0x7f3: Stack[-3] = Stack[-7]
0x7f4: Stack[-2] = (int) 0
0x7f5: Stack[-1] = (int) 1
0x7f6: Call2 0x601

0x7f7: Pop(6)
0x7f8: Stack[-3] = (bool) 1
0x7f9: Return(); Pop(0)

0x7fa: PushEmpty(object, object)
0x7fb: @ CreateFloatVector(Stack[-1])
0x7fc: Pop(0)
0x7fd: @@ add(Stack[-3])
0x7fe: Pop(0)
0x7ff: Push((int) 15)
0x800: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x801: Pop(1)
0x802: Return(); Pop(2)

0x803: Stack[-1] = 0
0x804: PushEmpty(object, object)
0x805: @ CreateFloatVector(Stack[-1])
0x806: Pop(0)
0x807: @@ add(Stack[-3])
0x808: Pop(0)
0x809: Push((int) 16)
0x80a: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x80b: Pop(1)
0x80c: Return(); Pop(2)

0x80d: Stack[-1] = 0
0x80e: PushEmpty(bool, bool)
0x80f: @ IsPlayerActor(Stack[-3], Stack[-1])
0x810: Pop(0)
0x811: Push(Stack[-1])
0x812: IF (Stack[-1] == 0) GOTO 0x816; Pop(1)

0x813: Push("attack")
0x814: @ PlayGlobalMusic(Stack[-1])
0x815: Pop(1)
0x816: Return(); Pop(2)

0x817: PushEmpty(object, object)
0x818: @ GetScene(Stack[-1])
0x819: Pop(0)
0x81a: Push("battle")
0x81b: PushEmpty(object)
0x81c: Call2 0x795

0x81d: Pop(0)
0x81e: @ BroadcastMessage(Stack[-2], Stack[-1], Stack[-3])
0x81f: Pop(2)
0x820: Return(); Pop(2)

0x821: Stack[-1] = 0
0x822: PushEmpty(bool, bool)
0x823: Push("god_mode")
0x824: @ GetVariable(Stack[-1], Stack[-2])
0x825: Pop(1)
0x826: Stack[-3] = Stack[-1]
0x827: Return(); Pop(2)

0x828: PushEmpty(string, string)
0x829: Stack[-1] = "idle"
0x82a: Push(Stack[-3])
0x82b: IF (Stack[-1] == 0) GOTO 0x82d; Pop(1)

0x82c: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x82d: Stack[-4] = Stack[-1]
0x82e: Return(); Pop(2)

0x82f: PushEmpty(int, bool, int, bool)
0x830: Stack[-2] = (int) 0
0x831: Push("all")
0x832: PushEmpty(string, int)
0x833: Stack[-1] = Stack[-5]
0x834: Call2 0x828

0x835: Pop(1)
0x836: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x837: Pop(2)
0x838: Pop(0); Push((bool) Stack[-1] == 0)
0x839: IF (Stack[-1] == 0) GOTO 0x83b; Pop(1)

0x83a: GOTO 0x83e

0x83b: Push((int) 1)
0x83c: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x83d: GOTO 0x831

0x83e: Stack[-5] = Stack[-2]
0x83f: Return(); Pop(4)

0x840: PushEmpty()
0x841: PushEmpty(object)
0x842: Stack[-1] = Stack[-2]
0x843: Push(-1, 0); TaskCall(1)
0x844: Call2 0x80

0x845: Pop(-1, 0); TaskReturn
0x846: Pop(1)
0x847: Return(); Pop(0)

0x848: PushEmpty()
0x849: PushEmpty(object, int, float)
0x84a: Stack[-3] = Stack[-7]
0x84b: Stack[-2] = Stack[-6]
0x84c: Stack[-1] = Stack[-5]
0x84d: Call2 0x6ff

0x84e: Pop(3)
0x84f: Return(); Pop(0)

0x850: PushEmpty()
0x851: PushEmpty(object, int, float, cvector, cvector)
0x852: Stack[-5] = Stack[-11]
0x853: Stack[-4] = Stack[-10]
0x854: Stack[-3] = Stack[-9]
0x855: Stack[-2] = Stack[-7]
0x856: Stack[-1] = Stack[-6]
0x857: Call2 0x743

0x858: Pop(5)
0x859: Return(); Pop(0)

0x85a: PushEmpty(float, float)
0x85b: Push("health")
0x85c: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x85d: IF (Stack[-1] == 0) GOTO 0x866; Pop(1)

0x85e: Push("health")
0x85f: @ GetProperty(Stack[-1], Stack[-2])
0x860: Pop(1)
0x861: Push((int) 0)
0x862: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x863: IF (Stack[-1] == 0) GOTO 0x866; Pop(1)

0x864: @ SignalDeath(Stack[-4])
0x865: Pop(0)
0x866: Return(); Pop(2)

0x867: PushEmpty()
0x868: PushEmpty(object)
0x869: Stack[-1] = Stack[-2]
0x86a: Call2 0x840

0x86b: Pop(1)
0x86c: Return(); Pop(0)

0x86d: PushEmpty()
0x86e: PushEmpty(bool, object)
0x86f: Stack[-1] = Stack[-3]
0x870: Call2 0x6a8

0x871: Stack[-4] = Stack[-2]
0x872: Pop(2)
0x873: Return(); Pop(0)

0x874: PushEmpty()
0x875: PushEmpty(object)
0x876: Stack[-1] = Stack[-2]
0x877: Call2 0x8b6

0x878: Pop(1)
0x879: Return(); Pop(0)

0x87a: PushEmpty(int, int)
0x87b: Push("branch")
0x87c: @ GetVariable(Stack[-1], Stack[-2])
0x87d: Pop(1)
0x87e: Stack[-3] = Stack[-1]
0x87f: Return(); Pop(2)

0x880: PushEmpty()
0x881: PushEmpty(int)
0x882: Call2 0x87a

0x883: Pop(0)
0x884: Push((int) 1)
0x885: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x886: IF (Stack[-1] == 0) GOTO 0x88a; Pop(1)

0x887: @ WorkWithCorpse(Stack[-1])
0x888: Pop(0)
0x889: GOTO 0x88c

0x88a: @ Barter(Stack[-1])
0x88b: Pop(0)
0x88c: Return(); Pop(0)

0x88d: PushEmpty(object, int, bool, object, int, bool)
0x88e: @ CreateInvItem(Stack[-3])
0x88f: Pop(0)
0x890: @@ SetItemName(Stack[-7])
0x891: Pop(0)
0x892: Push("Organ")
0x893: Push((int) 1)
0x894: @@ SetProperty(Stack[-2], Stack[-1])
0x895: Pop(2)
0x896: @@ GetItemID(Stack[-2])
0x897: Pop(0)
0x898: Push((int) 0)
0x899: Push((int) 1)
0x89a: @ AddItem(Stack[-3], Stack[-5], Stack[-2], Stack[-1])
0x89b: Pop(2)
0x89c: Return(); Pop(6)

0x89d: Stack[-3] = 0
0x89e: PushEmpty(int)
0x89f: Call2 0x87a

0x8a0: Pop(0)
0x8a1: Push((int) 1)
0x8a2: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x8a3: IF (Stack[-1] == 0) GOTO 0x8a5; Pop(1)

0x8a4: Return(); Pop(0)

0x8a5: PushEmpty(string)
0x8a6: Stack[-1] = "liver"
0x8a7: Call2 0x88d

0x8a8: Pop(1)
0x8a9: PushEmpty(string)
0x8aa: Stack[-1] = "kidney"
0x8ab: Call2 0x88d

0x8ac: Pop(1)
0x8ad: PushEmpty(string)
0x8ae: Stack[-1] = "heart"
0x8af: Call2 0x88d

0x8b0: Pop(1)
0x8b1: PushEmpty(string)
0x8b2: Stack[-1] = "blood"
0x8b3: Call2 0x88d

0x8b4: Pop(1)
0x8b5: Return(); Pop(0)

0x8b6: PushEmpty(object, object)
0x8b7: Push("b1q04_attack")
0x8b8: Push((int) 1)
0x8b9: @ SetVariable(Stack[-2], Stack[-1])
0x8ba: Pop(2)
0x8bb: @ GetScene(Stack[-1])
0x8bc: Pop(0)
0x8bd: PushEmpty(object)
0x8be: Call2 0x795

0x8bf: Pop(0)
0x8c0: @@ RemoveStationaryActor(Stack[-1])
0x8c1: Pop(1)
0x8c2: PushEmpty(object)
0x8c3: Stack[-1] = Stack[-4]
0x8c4: Push(-1, 0); TaskCall(6)
0x8c5: Call2 0x5c7

0x8c6: Pop(-1, 0); TaskReturn
0x8c7: Pop(1)
0x8c8: Return(); Pop(2)

0x8c9: Stack[-1] = 0
0x8ca: PushEmpty(cvector, float, float, float, float, float, cvector, float, float, float, float, float)
0x8cb: Stack[-6] = Stack[-14] - Stack[-15]; Pop(0);
0x8cc: Stack[-5] = (int) 250000
0x8cd: Push(CvectorIndex(Stack[-6], 1))
0x8ce: Push((int) 1000)
0x8cf: Pop(2); Push(Stack[-2] * Stack[-1]);
0x8d0: Pop(0); Push(Stack[-14] * Stack[-14]);
0x8d1: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x8d2: Stack[-3] = Stack[-6] | Stack[-6]; Pop(0);
0x8d3: PushEmpty(float, float, float, float)
0x8d4: Stack[-3] = Stack[-9]
0x8d5: Stack[-2] = Stack[-8]
0x8d6: Stack[-1] = Stack[-7]
0x8d7: Call2 0x7ac

0x8d8: Stack[-6] = Stack[-4]
0x8d9: Pop(4)
0x8da: Push((int) 0)
0x8db: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x8dc: IF (Stack[-1] == 0) GOTO 0x8df; Pop(1)

0x8dd: Stack[-1] = (int) 1
0x8de: GOTO 0x8e7

0x8df: PushEmpty(float, float, float, float, float)
0x8e0: Stack[-4] = Stack[-10]
0x8e1: Stack[-3] = Stack[-9]
0x8e2: Stack[-2] = Stack[-8]
0x8e3: Stack[-1] = Sqrt(Stack[-7]); Pop(0);
0x8e4: Call2 0x7b3

0x8e5: Pop(4)
0x8e6: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x8e7: Push(CVector(0.0, 500.0, 0.0))
0x8e8: Pop(1); Push(Stack[-1] * Stack[-2]);
0x8e9: Pop(1); Push(Stack[-1] * Stack[-2]);
0x8ea: Pop(1); Push(Stack[-7] + Stack[-1]);
0x8eb: Stack[-17] = Stack[-1] / Stack[-2]; Pop(1);
0x8ec: Return(); Pop(12)

0x8ed: PushEmpty()
0x8ee: Return(); Pop(0)

0x8ef: PushEmpty()
0x8f0: Stack[-3] = (bool) 0
0x8f1: Return(); Pop(0)

