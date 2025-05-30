GlobalVarCount = 0

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
	1
	2
	add
	size
	get
	scripted
	blood_dir.xml
	reputation
	battle
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
	SetTimer (2 args)
	CanSee (2 args)
	KillTimer (1 args)
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
	SendWorldWndMessage (1 args)
	CreateFloatVector (1 args)
	RumblePlay (2 args)
	SendWorldWndMessage (2 args)
	BroadcastMessage (3 args)
	GetProperty (2 args)
	SignalDeath (1 args)
	GetVariable (2 args)
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
	GTASK_2 Vars = (object, int, int, bool, float, int) Params = 1
	GTASK_3 Vars = (bool, object, bool) Params = 6
		EVENT_7 Op = 0x404 Vars = (int)
		EVENT_1 Op = 0x41f Vars = (object)
		EVENT_2 Op = 0x42e Vars = (object)
		EVENT_10 Op = 0x4b4 Vars = (object)
		EVENT_41 Op = 0x4bf Vars = (object)

Events:
EVENT_22 Op = 0x6ef Vars = (object, int, float, float)
EVENT_43 Op = 0x6f7 Vars = (object, int, float, float, cvector, cvector)
EVENT_16 Op = 0x701 Vars = (object, string)
EVENT_41 Op = 0x70e Vars = (object)

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
0xb: Call2 0x714

0xc: Pop(1)
0xd: IF (Stack[-1] == 0) GOTO 0x15; Pop(1)

0xe: PushEmpty()
0xf: Call2 0x7b

0x10: Pop(0)
0x11: PushEmpty(object)
0x12: Stack[-1] = Stack[-2]
0x13: Call2 0x71b

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
0x2e: Call2 0x622

0x2f: Pop(0)
0x30: Pop(1); Push((bool) Stack[-1] == 0)
0x31: IF (Stack[-1] == 0) GOTO 0x33; Pop(1)

0x32: Return(); Pop(14)

0x33: PushEmpty(int)
0x34: Call2 0x6d6

0x35: Stack[-8] = Stack[-1]
0x36: Pop(1)
0x37: Stack[-6] = (int) 0
0x38: PushEmpty(bool)
0x39: Stack[-1] = (bool) 0
0x3a: Push((int) 5)
0x3b: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x3c: IF (Stack[-1] == 0) GOTO 0x42; Pop(1)

0x3d: PushEmpty(bool)
0x3e: Call2 0x622

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
0x50: Call2 0x6cf

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
0x83: Call2 0x4e8

0x84: Pop(1)
0x85: IF (Stack[-1] == 0) GOTO 0x8b; Pop(1)

0x86: PushEmpty(bool, object, float)
0x87: Stack[-2] = Stack[-4]
0x88: Stack[-1] = (float) 0.0
0x89: Call2 0x67d

0x8a: Pop(3)
0x8b: PushEmpty()
0x8c: Call2 0x745

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
0xad: Call2 0x727

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
0xf6: Call2 0x632

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
0x118: Call2 0x632

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

0x12b: PushEmpty()
0x12c: PushEmpty(object, bool, float)
0x12d: Stack[-3] = Stack[-4]
0x12e: Stack[-2] = (bool) 1
0x12f: Stack[-1] = (float) 180.0
0x130: Call2 0x13d

0x131: Pop(3)
0x132: Push((int) 1)
0x133: @ Sleep(Stack[-1])
0x134: Pop(1)
0x135: GOTO 0x12c

0x136: Return(); Pop(0)

0x137: PushEmpty()
0x138: Stack[-3] = (float) 0.03
0x139: Return(); Pop(0)

0x13a: PushEmpty()
0x13b: Stack[-3] = (int) 0
0x13c: Return(); Pop(0)

0x13d: PushEmpty(float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float, float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float)
0x13e: PushEmpty()
0x13f: Call2 0x222

0x140: Pop(0)
0x141: Stack[5 + Tasks[-1].StackPointer] = (int)0
0x142: Push("@GetAttackDistance")
0x143: Push((int) 1)
0x144: Pop(2); Push(IsFuncExist(Stack[-27], Stack[-2], Stack[-1]))
0x145: IF (Stack[-1] == 0) GOTO 0x14b; Pop(1)

0x146: @@ GetAttackDistance(Stack[-11])
0x147: Pop(0)
0x148: Push((int) 50)
0x149: Stack[-12] = Stack[-12] + Stack[-1]; Pop(1);
0x14a: GOTO 0x14c

0x14b: Stack[-11] = Stack[-23]
0x14c: Push((int) 150)
0x14d: Pop(1); Push((bool) Stack[-12] >= Stack[-1])
0x14e: IF (Stack[-1] == 0) GOTO 0x150; Pop(1)

0x14f: Stack[-11] = (int) 150
0x150: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x151: Stack[0 + Tasks[-1].StackPointer] = Stack[-25]
0x152: @ IsPlayerActor(Stack[-0], Stack[-8])
0x153: Pop(0)
0x154: Push(Stack[-8])
0x155: IF (Stack[-1] == 0) GOTO 0x15e; Pop(1)

0x156: Push("attack")
0x157: @ PlayGlobalMusic(Stack[-1])
0x158: Pop(1)
0x159: PushEmpty(object)
0x15a: Call2 0x65b

0x15b: Pop(0)
0x15c: @ SendPlayerEnemy(Stack[-26], Stack[-1])
0x15d: Pop(1)
0x15e: Push(Stack[-24])
0x15f: IF (Stack[-1] == 0) GOTO 0x162; Pop(1)

0x160: Stack[-7] = (bool) 0
0x161: GOTO 0x163

0x162: Stack[-7] = (bool) 1
0x163: Push((float)400.0)
0x164: Stack[-7] = Stack[-1] + Stack[-12]; Pop(1);
0x165: PushEmpty(bool)
0x166: Stack[-1] = (bool) 0
0x167: PushEmpty(bool, object)
0x168: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x169: Call2 0x581

0x16a: Pop(1)
0x16b: IF (Stack[-1] == 0) GOTO 0x16f; Pop(1)

0x16c: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x16d: IF (Stack[-1] == 0) GOTO 0x16f; Pop(1)

0x16e: Stack[-1] = (bool) 1
0x16f: IF (Stack[-1] == 0) GOTO 0x211; Pop(1)

0x170: PushEmpty()
0x171: Call2 0x3bf

0x172: Pop(0)
0x173: @@ GetPFPosition(Stack[-10])
0x174: Pop(0)
0x175: @ GetPFPosition(Stack[-9])
0x176: Pop(0)
0x177: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0x178: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x179: Pop(0); Push(Stack[-6] * Stack[-6]);
0x17a: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0x17b: IF (Stack[-1] == 0) GOTO 0x18b; Pop(1)

0x17c: PushEmpty(bool, object, float, float, bool, bool)
0x17d: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0x17e: Stack[-4] = Stack[-17]
0x17f: Stack[-3] = (float) 3000.0
0x180: Stack[-2] = (bool) 1
0x181: Stack[-1] = (bool) 0
0x182: Push(-6, 3); TaskCall(3)
0x183: Call2 0x3d3

0x184: Pop(-6, 3); TaskReturn
0x185: Pop(5)
0x186: Pop(1); Push((bool) Stack[-1] == 0)
0x187: IF (Stack[-1] == 0) GOTO 0x189; Pop(1)

0x188: GOTO 0x211

0x189: Stack[-7] = (bool) 0
0x18a: GOTO 0x210

0x18b: Pop(0); Push(Stack[-23] * Stack[-23]);
0x18c: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0x18d: IF (Stack[-1] == 0) GOTO 0x208; Pop(1)

0x18e: @@ GetPFPosition(Stack[-3])
0x18f: Pop(0)
0x190: @ CanReachByPF(Stack[-2], Stack[-3])
0x191: Pop(0)
0x192: Pop(0); Push((bool) Stack[-2] == 0)
0x193: IF (Stack[-1] == 0) GOTO 0x1a3; Pop(1)

0x194: PushEmpty(bool, object, float, float, bool, bool)
0x195: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0x196: Stack[-4] = Stack[-17]
0x197: Stack[-3] = (float) 3000.0
0x198: Stack[-2] = (bool) 1
0x199: Stack[-1] = (bool) 0
0x19a: Push(-6, 3); TaskCall(3)
0x19b: Call2 0x3d3

0x19c: Pop(-6, 3); TaskReturn
0x19d: Pop(5)
0x19e: Pop(1); Push((bool) Stack[-1] == 0)
0x19f: IF (Stack[-1] == 0) GOTO 0x1a1; Pop(1)

0x1a0: GOTO 0x211

0x1a1: Stack[-7] = (bool) 0
0x1a2: GOTO 0x165

0x1a3: Pop(0); Push((bool) Stack[-7] == 0)
0x1a4: IF (Stack[-1] == 0) GOTO 0x1bc; Pop(1)

0x1a5: PushEmpty(object)
0x1a6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1a7: Call2 0x617

0x1a8: Pop(1)
0x1a9: Push("all")
0x1aa: Push("attack_on")
0x1ab: @ PlayAnimation(Stack[-2], Stack[-1])
0x1ac: Pop(2)
0x1ad: @ WaitForAnimEnd()
0x1ae: Pop(0)
0x1af: PushEmpty()
0x1b0: Call2 0x3bf

0x1b1: Pop(0)
0x1b2: @ StopAsync()
0x1b3: Pop(0)
0x1b4: Stack[-7] = (bool) 1
0x1b5: PushEmpty(bool, object)
0x1b6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1b7: Call2 0x581

0x1b8: Pop(1)
0x1b9: Pop(1); Push((bool) Stack[-1] == 0)
0x1ba: IF (Stack[-1] == 0) GOTO 0x1bc; Pop(1)

0x1bb: GOTO 0x211

0x1bc: @ rand(Stack[-1])
0x1bd: Pop(0)
0x1be: PushEmpty(bool)
0x1bf: Stack[-1] = (bool) 1
0x1c0: Push((float)0.25)
0x1c1: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x1c2: IF (Stack[-1] == 0) GOTO 0x1c8; Pop(1)

0x1c3: PushEmpty(bool)
0x1c4: Call2 0x394

0x1c5: Pop(0)
0x1c6: IF (Stack[-1] == 0) GOTO 0x1c8; Pop(1)

0x1c7: Stack[-1] = (bool) 0
0x1c8: IF (Stack[-1] == 0) GOTO 0x1d9; Pop(1)

0x1c9: @ Face(Stack[-0])
0x1ca: Pop(0)
0x1cb: PushEmpty()
0x1cc: Call2 0x3c6

0x1cd: Pop(0)
0x1ce: Push("all")
0x1cf: Push("attack_stay")
0x1d0: @ PlayAnimation(Stack[-2], Stack[-1])
0x1d1: Pop(2)
0x1d2: PushEmpty(bool, float)
0x1d3: Stack[-1] = Stack[-25]
0x1d4: Call2 0x310

0x1d5: Pop(2)
0x1d6: @ StopAsync()
0x1d7: Pop(0)
0x1d8: GOTO 0x207

0x1d9: @ Face(Stack[-0])
0x1da: Pop(0)
0x1db: Push("all")
0x1dc: Push("fjump")
0x1dd: @ PlayAnimation(Stack[-2], Stack[-1])
0x1de: Pop(2)
0x1df: @ WaitForAnimEnd()
0x1e0: Pop(0)
0x1e1: PushEmpty()
0x1e2: Call2 0x3bf

0x1e3: Pop(0)
0x1e4: Push(CVector(0.0, 0.0, 0.0))
0x1e5: @ SetSpeed(Stack[-1])
0x1e6: Pop(1)
0x1e7: @ Stop()
0x1e8: Pop(0)
0x1e9: @ StopAsync()
0x1ea: Pop(0)
0x1eb: PushEmpty(bool)
0x1ec: Call2 0x394

0x1ed: Pop(0)
0x1ee: Pop(1); Push((bool) Stack[-1] == 0)
0x1ef: IF (Stack[-1] == 0) GOTO 0x207; Pop(1)

0x1f0: PushEmpty(bool, object)
0x1f1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1f2: Call2 0x581

0x1f3: Pop(1)
0x1f4: Pop(1); Push((bool) Stack[-1] == 0)
0x1f5: IF (Stack[-1] == 0) GOTO 0x1f7; Pop(1)

0x1f6: GOTO 0x211

0x1f7: @@ GetPFPosition(Stack[-10])
0x1f8: Pop(0)
0x1f9: @ GetPFPosition(Stack[-9])
0x1fa: Pop(0)
0x1fb: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0x1fc: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x1fd: Pop(0); Push(Stack[-23] * Stack[-23]);
0x1fe: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x1ff: IF (Stack[-1] == 0) GOTO 0x207; Pop(1)

0x200: PushEmpty(bool, float)
0x201: Stack[-1] = Stack[-25]
0x202: Call2 0x26c

0x203: Pop(1)
0x204: Pop(1); Push((bool) Stack[-1] == 0)
0x205: IF (Stack[-1] == 0) GOTO 0x207; Pop(1)

0x206: GOTO 0x211

0x207: GOTO 0x210

0x208: PushEmpty(bool, float)
0x209: Stack[-1] = Stack[-25]
0x20a: Call2 0x26c

0x20b: Pop(1)
0x20c: Pop(1); Push((bool) Stack[-1] == 0)
0x20d: IF (Stack[-1] == 0) GOTO 0x20f; Pop(1)

0x20e: GOTO 0x211

0x20f: Stack[-7] = (bool) 1
0x210: GOTO 0x165

0x211: @ WaitForAnimEnd()
0x212: Pop(0)
0x213: Push( Stack[3 + Tasks[-1].StackPointer] )
0x214: IF (Stack[-1] == 0) GOTO 0x216; Pop(1)

0x215: Return(); Pop(22)

0x216: Push("all")
0x217: Push("attack_off")
0x218: @ PlayAnimation(Stack[-2], Stack[-1])
0x219: Pop(2)
0x21a: @ WaitForAnimEnd()
0x21b: Pop(0)
0x21c: Push(Stack[-8])
0x21d: IF (Stack[-1] == 0) GOTO 0x221; Pop(1)

0x21e: Push((float)2.0)
0x21f: @ Sleep(Stack[-1])
0x220: Pop(1)
0x221: Return(); Pop(22)

0x222: PushEmpty(bool, bool, cvector, bool, bool, cvector)
0x223: Stack[1 + Tasks[-1].StackPointer] = (int)0
0x224: Push("all")
0x225: Push("attack_begin")
0x226: Push((int) 1)
0x227: Pop(1); Push(Stack[1 + StackPtr] + Stack[-1]);
0x228: Pop(2); Push(Stack[-2] + Stack[-1]);
0x229: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0x22a: Pop(2)
0x22b: Pop(0); Push((bool) Stack[-3] == 0)
0x22c: IF (Stack[-1] == 0) GOTO 0x22e; Pop(1)

0x22d: GOTO 0x231

0x22e: Push((int) 1)
0x22f: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x230: GOTO 0x224

0x231: Stack[2 + Tasks[-1].StackPointer] = (int)0
0x232: Push("attack")
0x233: Push((int) 1)
0x234: Pop(1); Push(Stack[2 + StackPtr] + Stack[-1]);
0x235: Pop(2); Push(Stack[-2] + Stack[-1]);
0x236: @ IsExisting3DSound(Stack[-3], Stack[-1])
0x237: Pop(1)
0x238: Pop(0); Push((bool) Stack[-2] == 0)
0x239: IF (Stack[-1] == 0) GOTO 0x23b; Pop(1)

0x23a: GOTO 0x23e

0x23b: Push((int) 1)
0x23c: Stack[2 + Tasks[-1].StackPointer] = Stack[2 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x23d: GOTO 0x232

0x23e: Push("all")
0x23f: Push("bjump")
0x240: @ GetAnimationOffset(Stack[-3], Stack[-2], Stack[-1])
0x241: Pop(2)
0x242: Push(CvectorIndex(Stack[-1], 2))
0x243: Stack[4 + Tasks[-1].StackPointer] = -Stack[-1]; Pop(1);
0x244: Return(); Pop(6)

0x245: PushEmpty(object, float, float, object, float, float)
0x246: Push((float)0.9)
0x247: Pop(1); Push(Stack[-9] * Stack[-1]);
0x248: @ GetVictim(Stack[-1], Stack[-4])
0x249: Pop(1)
0x24a: @ ReportAttack(Stack[-0])
0x24b: Pop(0)
0x24c: Pop(0); Push((bool) Stack[-3] == Stack[0 + Tasks[-1].StackPointer])
0x24d: IF (Stack[-1] == 0) GOTO 0x26a; Pop(1)

0x24e: PushEmpty(float, object, int)
0x24f: Stack[-2] = Stack[-6]
0x250: Stack[-1] = Stack[-10]
0x251: Call2 0x137

0x252: Stack[-5] = Stack[-3]
0x253: Pop(3)
0x254: PushEmpty(float, object, float, int)
0x255: Stack[-3] = Stack[-7]
0x256: Stack[-2] = Stack[-6]
0x257: PushEmpty(int, object, int)
0x258: Stack[-2] = Stack[-10]
0x259: Stack[-1] = Stack[-14]
0x25a: Call2 0x13a

0x25b: Stack[-4] = Stack[-3]
0x25c: Pop(3)
0x25d: Call2 0x50f

0x25e: Stack[-5] = Stack[-4]
0x25f: Pop(4)
0x260: PushEmpty(int)
0x261: Call2 0x3c4

0x262: Pop(0)
0x263: @ ReportHit(Stack[-0], Stack[-1], Stack[-2], Stack[-3])
0x264: Pop(1)
0x265: PushEmpty(object, float)
0x266: Stack[-2] = Stack[-5]
0x267: Stack[-1] = Stack[-3]
0x268: Call2 0x3cb

0x269: Pop(2)
0x26a: Return(); Pop(6)

0x26b: Stack[-3] = 0
0x26c: PushEmpty(int, bool, int, string, int, bool, int, string)
0x26d: PushEmpty()
0x26e: Call2 0x3bf

0x26f: Pop(0)
0x270: @ irand(Stack[-4], Stack[-1])
0x271: Pop(0)
0x272: Push((int) 1)
0x273: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x274: @ Face(Stack[-0])
0x275: Pop(0)
0x276: Push((bool) 1)
0x277: @ SetAttackState(Stack[-1])
0x278: Pop(1)
0x279: PushEmpty()
0x27a: Call2 0x6c4

0x27b: Pop(0)
0x27c: Push("all")
0x27d: Push("attack_begin")
0x27e: Pop(1); Push(Stack[-1] + Stack[-6]);
0x27f: @ PlayAnimation(Stack[-2], Stack[-1])
0x280: Pop(2)
0x281: @ WaitForAnimEnd()
0x282: Pop(0)
0x283: PushEmpty()
0x284: Call2 0x39f

0x285: Pop(0)
0x286: PushEmpty(bool, object)
0x287: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x288: Call2 0x581

0x289: Pop(1)
0x28a: Pop(1); Push((bool) Stack[-1] == 0)
0x28b: IF (Stack[-1] == 0) GOTO 0x290; Pop(1)

0x28c: @ StopAsync()
0x28d: Pop(0)
0x28e: Stack[-10] = (bool) 0
0x28f: Return(); Pop(8)

0x290: PushEmpty(float, int)
0x291: Stack[-2] = Stack[-11]
0x292: Stack[-1] = Stack[-6]
0x293: Call2 0x245

0x294: Pop(2)
0x295: Push("all")
0x296: Push("attack_middle")
0x297: Pop(1); Push(Stack[-1] + Stack[-6]);
0x298: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0x299: Pop(2)
0x29a: Push(Stack[-3])
0x29b: IF (Stack[-1] == 0) GOTO 0x2e1; Pop(1)

0x29c: PushEmpty()
0x29d: Call2 0x6c4

0x29e: Pop(0)
0x29f: Push("all")
0x2a0: Push("attack_middle")
0x2a1: Pop(1); Push(Stack[-1] + Stack[-6]);
0x2a2: @ PlayAnimation(Stack[-2], Stack[-1])
0x2a3: Pop(2)
0x2a4: @ WaitForAnimEnd()
0x2a5: Pop(0)
0x2a6: PushEmpty()
0x2a7: Call2 0x3bf

0x2a8: Pop(0)
0x2a9: PushEmpty(bool, object)
0x2aa: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2ab: Call2 0x581

0x2ac: Pop(1)
0x2ad: Pop(1); Push((bool) Stack[-1] == 0)
0x2ae: IF (Stack[-1] == 0) GOTO 0x2b3; Pop(1)

0x2af: @ StopAsync()
0x2b0: Pop(0)
0x2b1: Stack[-10] = (bool) 0
0x2b2: Return(); Pop(8)

0x2b3: PushEmpty(float, int)
0x2b4: Stack[-2] = Stack[-11]
0x2b5: Stack[-1] = Stack[-6]
0x2b6: Call2 0x245

0x2b7: Pop(2)
0x2b8: Stack[-2] = (int) 1
0x2b9: Push("attack_middle")
0x2ba: Pop(1); Push(Stack[-1] + Stack[-5]);
0x2bb: Push("_")
0x2bc: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2bd: Stack[-2] = Stack[-1] + Stack[-3]; Pop(1);
0x2be: Push("all")
0x2bf: @ HasAnimation(Stack[-4], Stack[-1], Stack[-2])
0x2c0: Pop(1)
0x2c1: Pop(0); Push((bool) Stack[-3] == 0)
0x2c2: IF (Stack[-1] == 0) GOTO 0x2c4; Pop(1)

0x2c3: GOTO 0x2e1

0x2c4: PushEmpty()
0x2c5: Call2 0x6c4

0x2c6: Pop(0)
0x2c7: Push("all")
0x2c8: @ PlayAnimation(Stack[-1], Stack[-2])
0x2c9: Pop(1)
0x2ca: @ WaitForAnimEnd()
0x2cb: Pop(0)
0x2cc: PushEmpty()
0x2cd: Call2 0x3bf

0x2ce: Pop(0)
0x2cf: PushEmpty(bool, object)
0x2d0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2d1: Call2 0x581

0x2d2: Pop(1)
0x2d3: Pop(1); Push((bool) Stack[-1] == 0)
0x2d4: IF (Stack[-1] == 0) GOTO 0x2d9; Pop(1)

0x2d5: @ StopAsync()
0x2d6: Pop(0)
0x2d7: Stack[-10] = (bool) 0
0x2d8: Return(); Pop(8)

0x2d9: PushEmpty(float, int)
0x2da: Stack[-2] = Stack[-11]
0x2db: Stack[-1] = Stack[-6]
0x2dc: Call2 0x245

0x2dd: Pop(2)
0x2de: Push((int) 1)
0x2df: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x2e0: GOTO 0x2b9

0x2e1: Push((bool) 0)
0x2e2: @ SetAttackState(Stack[-1])
0x2e3: Pop(1)
0x2e4: Push("all")
0x2e5: Push("attack_end")
0x2e6: Pop(1); Push(Stack[-1] + Stack[-6]);
0x2e7: @ PlayAnimation(Stack[-2], Stack[-1])
0x2e8: Pop(2)
0x2e9: PushEmpty(bool)
0x2ea: Call2 0x3cd

0x2eb: Pop(0)
0x2ec: IF (Stack[-1] == 0) GOTO 0x2f3; Pop(1)

0x2ed: PushEmpty(bool, float)
0x2ee: Stack[-1] = (float) 0.75
0x2ef: Call2 0x2f5

0x2f0: Pop(2)
0x2f1: @ StopAsync()
0x2f2: Pop(0)
0x2f3: Stack[-10] = (bool) 1
0x2f4: Return(); Pop(8)

0x2f5: PushEmpty(float, bool, float, bool)
0x2f6: @ rand(Stack[-2])
0x2f7: Pop(0)
0x2f8: Pop(0); Push((bool) Stack[-2] < Stack[-5])
0x2f9: IF (Stack[-1] == 0) GOTO 0x309; Pop(1)

0x2fa: @ IsAnimationPlaying(Stack[-1])
0x2fb: Pop(0)
0x2fc: Pop(0); Push((bool) Stack[-1] == 0)
0x2fd: IF (Stack[-1] == 0) GOTO 0x2ff; Pop(1)

0x2fe: GOTO 0x308

0x2ff: PushEmpty(bool)
0x300: Call2 0x357

0x301: Pop(0)
0x302: IF (Stack[-1] == 0) GOTO 0x305; Pop(1)

0x303: Stack[-6] = (bool) 1
0x304: Return(); Pop(4)

0x305: @ sync()
0x306: Pop(0)
0x307: GOTO 0x2fa

0x308: GOTO 0x30e

0x309: @ WaitForAnimEnd()
0x30a: Pop(0)
0x30b: PushEmpty()
0x30c: Call2 0x3bf

0x30d: Pop(0)
0x30e: Stack[-6] = (bool) 0
0x30f: Return(); Pop(4)

0x310: PushEmpty(bool, cvector, cvector, cvector, float, bool, cvector, cvector, cvector, float)
0x311: @ IsAnimationPlaying(Stack[-5])
0x312: Pop(0)
0x313: Pop(0); Push((bool) Stack[-5] == 0)
0x314: IF (Stack[-1] == 0) GOTO 0x316; Pop(1)

0x315: GOTO 0x336

0x316: PushEmpty(bool)
0x317: Call2 0x357

0x318: Pop(0)
0x319: IF (Stack[-1] == 0) GOTO 0x31c; Pop(1)

0x31a: Stack[-12] = (bool) 1
0x31b: Return(); Pop(10)

0x31c: PushEmpty(bool, object)
0x31d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x31e: Call2 0x581

0x31f: Pop(1)
0x320: Pop(1); Push((bool) Stack[-1] == 0)
0x321: IF (Stack[-1] == 0) GOTO 0x324; Pop(1)

0x322: Stack[-12] = (bool) 0
0x323: Return(); Pop(10)

0x324: @@ GetPFPosition(Stack[-4])
0x325: Pop(0)
0x326: @ GetPFPosition(Stack[-3])
0x327: Pop(0)
0x328: Stack[-2] = Stack[-4] - Stack[-3]; Pop(0);
0x329: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x32a: Pop(0); Push(Stack[-11] * Stack[-11]);
0x32b: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x32c: IF (Stack[-1] == 0) GOTO 0x333; Pop(1)

0x32d: PushEmpty(bool, float)
0x32e: Stack[-1] = Stack[-13]
0x32f: Call2 0x26c

0x330: Pop(2)
0x331: Stack[-12] = (bool) 1
0x332: Return(); Pop(10)

0x333: @ sync()
0x334: Pop(0)
0x335: GOTO 0x311

0x336: PushEmpty()
0x337: Call2 0x3bf

0x338: Pop(0)
0x339: Stack[-12] = (bool) 0
0x33a: Return(); Pop(10)

0x33b: PushEmpty(cvector, cvector, cvector, float, float, cvector, cvector, cvector, float, float)
0x33c: PushEmpty(bool, object)
0x33d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x33e: Call2 0x581

0x33f: Pop(1)
0x340: Pop(1); Push((bool) Stack[-1] == 0)
0x341: IF (Stack[-1] == 0) GOTO 0x344; Pop(1)

0x342: Stack[-11] = (bool) 0
0x343: Return(); Pop(10)

0x344: PushEmpty(bool)
0x345: Call2 0x394

0x346: Pop(0)
0x347: IF (Stack[-1] == 0) GOTO 0x355; Pop(1)

0x348: @@ GetPFPosition(Stack[-5])
0x349: Pop(0)
0x34a: @ GetPFPosition(Stack[-4])
0x34b: Pop(0)
0x34c: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x34d: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x34e: @@ GetAttackDistance(Stack[-1])
0x34f: Pop(0)
0x350: Push((int) 50)
0x351: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x352: Pop(0); Push(Stack[-1] * Stack[-1]);
0x353: Stack[-12] = Stack[-3] <= Stack[-1]; Pop(1);
0x354: Return(); Pop(10)

0x355: Stack[-11] = (bool) 0
0x356: Return(); Pop(10)

0x357: PushEmpty(bool)
0x358: Stack[-1] = (bool) 0
0x359: PushEmpty(bool)
0x35a: Call2 0x33b

0x35b: Pop(0)
0x35c: IF (Stack[-1] == 0) GOTO 0x362; Pop(1)

0x35d: PushEmpty(bool)
0x35e: Call2 0x367

0x35f: Pop(0)
0x360: IF (Stack[-1] == 0) GOTO 0x362; Pop(1)

0x361: Stack[-1] = (bool) 1
0x362: IF (Stack[-1] == 0) GOTO 0x365; Pop(1)

0x363: Stack[-1] = (bool) 1
0x364: Return(); Pop(0)

0x365: Stack[-1] = (bool) 0
0x366: Return(); Pop(0)

0x367: PushEmpty(object, bool, float, cvector, cvector, object, bool, float, cvector, cvector)
0x368: @ GetScene(Stack[-5])
0x369: Pop(0)
0x36a: Stack[-4] = (bool) 0
0x36b: PushEmpty(cvector, object)
0x36c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x36d: Call2 0x4e1

0x36e: Pop(1)
0x36f: Pop(1); Push(( -Stack[-1])
0x370: @ FindDirLength(Stack[-4], Stack[-1], Stack[-4])
0x371: Pop(1)
0x372: Pop(0); Push((bool) Stack[-3] < Stack[4 + Tasks[-1].StackPointer])
0x373: IF (Stack[-1] == 0) GOTO 0x375; Pop(1)

0x374: GOTO 0x391

0x375: @ Face(Stack[-0])
0x376: Pop(0)
0x377: Push("all")
0x378: Push("bjump")
0x379: @ PlayAnimation(Stack[-2], Stack[-1])
0x37a: Pop(2)
0x37b: @@ GetPFPosition(Stack[-2])
0x37c: Pop(0)
0x37d: @ GetPFPosition(Stack[-1])
0x37e: Pop(0)
0x37f: @ WaitForAnimEnd()
0x380: Pop(0)
0x381: PushEmpty()
0x382: Call2 0x3bf

0x383: Pop(0)
0x384: @ StopAsync()
0x385: Pop(0)
0x386: Push(CVector(0.0, 0.0, 0.0))
0x387: @ SetSpeed(Stack[-1])
0x388: Pop(1)
0x389: Stack[-4] = (bool) 1
0x38a: PushEmpty(bool)
0x38b: Call2 0x33b

0x38c: Pop(0)
0x38d: Pop(1); Push((bool) Stack[-1] == 0)
0x38e: IF (Stack[-1] == 0) GOTO 0x390; Pop(1)

0x38f: GOTO 0x391

0x390: GOTO 0x36b

0x391: Stack[-11] = Stack[-4]
0x392: Return(); Pop(10)

0x393: Stack[-5] = 0
0x394: PushEmpty(bool, bool)
0x395: Push("IsAttacking")
0x396: Push((int) 1)
0x397: Pop(2); Push(IsFuncExist(Stack[0 + Tasks[-1].StackPointer], Stack[-2], Stack[-1]))
0x398: IF (Stack[-1] == 0) GOTO 0x39d; Pop(1)

0x399: @@ IsAttacking(Stack[-1])
0x39a: Pop(0)
0x39b: Stack[-3] = Stack[-1]
0x39c: Return(); Pop(2)

0x39d: Stack[-3] = (bool) 0
0x39e: Return(); Pop(2)

0x39f: PushEmpty(float, int, float, int)
0x3a0: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x3a1: IF (Stack[-1] == 0) GOTO 0x3a3; Pop(1)

0x3a2: Return(); Pop(4)

0x3a3: Push( Stack[5 + Tasks[-1].StackPointer] )
0x3a4: IF (Stack[-1] == 0) GOTO 0x3ab; Pop(1)

0x3a5: Push((int) -1)
0x3a6: Stack[5 + Tasks[-1].StackPointer] = Stack[5 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x3a7: Push((int) 0)
0x3a8: Pop(1); Push((bool) Stack[5 + Tasks[-1].StackPointer] > Stack[-1])
0x3a9: IF (Stack[-1] == 0) GOTO 0x3ab; Pop(1)

0x3aa: Return(); Pop(4)

0x3ab: @ rand(Stack[-2])
0x3ac: Pop(0)
0x3ad: PushEmpty(float)
0x3ae: Call2 0x3d1

0x3af: Pop(0)
0x3b0: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x3b1: IF (Stack[-1] == 0) GOTO 0x3be; Pop(1)

0x3b2: @ irand(Stack[-1], Stack[-2])
0x3b3: Pop(0)
0x3b4: Push((int) 1)
0x3b5: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x3b6: Push("attack")
0x3b7: Pop(1); Push(Stack[-1] + Stack[-2]);
0x3b8: @ Speak(Stack[-1])
0x3b9: Pop(1)
0x3ba: PushEmpty(int)
0x3bb: Call2 0x3cf

0x3bc: Stack[5 + Tasks[-1].StackPointer] = Stack[-1]
0x3bd: Pop(1)
0x3be: Return(); Pop(4)

0x3bf: PushEmpty(object)
0x3c0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3c1: Call2 0x6bb

0x3c2: Pop(1)
0x3c3: Return(); Pop(0)

0x3c4: Stack[-1] = (int) 0
0x3c5: Return(); Pop(0)

0x3c6: PushEmpty(string)
0x3c7: Stack[-1] = "attack_stay"
0x3c8: Call2 0x632

0x3c9: Pop(1)
0x3ca: Return(); Pop(0)

0x3cb: PushEmpty()
0x3cc: Return(); Pop(0)

0x3cd: Stack[-1] = (bool) 1
0x3ce: Return(); Pop(0)

0x3cf: Stack[-1] = (int) 1
0x3d0: Return(); Pop(0)

0x3d1: Stack[-1] = (float) 0.5
0x3d2: Return(); Pop(0)

0x3d3: PushEmpty(bool, bool, bool, bool)
0x3d4: PushEmpty(object)
0x3d5: Stack[-1] = Stack[-10]
0x3d6: Call2 0x6bb

0x3d7: Pop(1)
0x3d8: Push((int) 1)
0x3d9: Push((int) 5)
0x3da: @ SetTimer(Stack[-2], Stack[-1])
0x3db: Pop(2)
0x3dc: @ CanSee(Stack[-2], Stack[-9])
0x3dd: Pop(0)
0x3de: Push(Stack[-2])
0x3df: IF (Stack[-1] == 0) GOTO 0x3e6; Pop(1)

0x3e0: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x3e1: PushEmpty(object)
0x3e2: Stack[-1] = Stack[-10]
0x3e3: Call2 0x627

0x3e4: Pop(1)
0x3e5: GOTO 0x3e7

0x3e6: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x3e7: PushEmpty(bool, object)
0x3e8: Stack[-1] = Stack[-11]
0x3e9: Call2 0x4e8

0x3ea: Pop(1)
0x3eb: IF (Stack[-1] == 0) GOTO 0x3f1; Pop(1)

0x3ec: PushEmpty(object)
0x3ed: Call2 0x65b

0x3ee: Pop(0)
0x3ef: @ SendPlayerEnemy(Stack[-10], Stack[-1])
0x3f0: Pop(1)
0x3f1: PushEmpty(bool, object, float, float, bool, bool)
0x3f2: Stack[-5] = Stack[-15]
0x3f3: Stack[-4] = Stack[-14]
0x3f4: Stack[-3] = Stack[-13]
0x3f5: Stack[-2] = Stack[-12]
0x3f6: Stack[-1] = Stack[-11]
0x3f7: Call2 0x43c

0x3f8: Stack[-7] = Stack[-6]
0x3f9: Pop(6)
0x3fa: Push( Stack[2 + Tasks[-1].StackPointer] )
0x3fb: IF (Stack[-1] == 0) GOTO 0x3ff; Pop(1)

0x3fc: Push("head")
0x3fd: @ UnlookAsync(Stack[-1])
0x3fe: Pop(1)
0x3ff: Push((int) 1)
0x400: @ KillTimer(Stack[-1])
0x401: Pop(1)
0x402: Stack[-10] = Stack[-1]
0x403: Return(); Pop(4)

0x404: PushEmpty()
0x405: Push((int) 1)
0x406: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x407: IF (Stack[-1] == 0) GOTO 0x40d; Pop(1)

0x408: PushEmpty(object)
0x409: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x40a: Call2 0x6bb

0x40b: Pop(1)
0x40c: GOTO 0x411

0x40d: PushEmpty(int)
0x40e: Stack[-1] = Stack[-2]
0x40f: Call2 0x4a2

0x410: Pop(1)
0x411: Return(); Pop(0)

0x412: Push((int) 1)
0x413: @ KillTimer(Stack[-1])
0x414: Pop(1)
0x415: Push( Stack[2 + Tasks[-1].StackPointer] )
0x416: IF (Stack[-1] == 0) GOTO 0x41b; Pop(1)

0x417: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x418: Push("head")
0x419: @ UnlookAsync(Stack[-1])
0x41a: Pop(1)
0x41b: PushEmpty()
0x41c: Call2 0x4b8

0x41d: Pop(0)
0x41e: Return(); Pop(0)

0x41f: PushEmpty()
0x420: PushEmpty(bool)
0x421: Stack[-1] = (bool) 0
0x422: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0x423: IF (Stack[-1] == 0) GOTO 0x427; Pop(1)

0x424: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x425: IF (Stack[-1] == 0) GOTO 0x427; Pop(1)

0x426: Stack[-1] = (bool) 1
0x427: IF (Stack[-1] == 0) GOTO 0x42d; Pop(1)

0x428: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x429: PushEmpty(object)
0x42a: Stack[-1] = Stack[-2]
0x42b: Call2 0x627

0x42c: Pop(1)
0x42d: Return(); Pop(0)

0x42e: PushEmpty()
0x42f: PushEmpty(bool)
0x430: Stack[-1] = (bool) 0
0x431: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0x432: IF (Stack[-1] == 0) GOTO 0x436; Pop(1)

0x433: Push( Stack[2 + Tasks[-1].StackPointer] )
0x434: IF (Stack[-1] == 0) GOTO 0x436; Pop(1)

0x435: Stack[-1] = (bool) 1
0x436: IF (Stack[-1] == 0) GOTO 0x43b; Pop(1)

0x437: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x438: Push("head")
0x439: @ UnlookAsync(Stack[-1])
0x43a: Pop(1)
0x43b: Return(); Pop(0)

0x43c: PushEmpty(bool, bool, object, cvector, cvector, cvector, float, object, bool, bool, object, cvector, cvector, cvector, float, object)
0x43d: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x43e: Stack[1 + Tasks[-1].StackPointer] = Stack[-21]
0x43f: Stack[-7] = Stack[-17]
0x440: PushEmpty(bool, object)
0x441: Stack[-1] = Stack[-23]
0x442: Call2 0x4c8

0x443: Pop(1)
0x444: Pop(1); Push((bool) Stack[-1] == 0)
0x445: IF (Stack[-1] == 0) GOTO 0x448; Pop(1)

0x446: Stack[-22] = (bool) 0
0x447: Return(); Pop(16)

0x448: @@ GetPosition(Stack[-5])
0x449: Pop(0)
0x44a: @ GetPosition(Stack[-4])
0x44b: Pop(0)
0x44c: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x44d: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x44e: PushEmpty(bool)
0x44f: Stack[-1] = (bool) 0
0x450: Push((int) 0)
0x451: Pop(1); Push((bool) Stack[-21] > Stack[-1])
0x452: IF (Stack[-1] == 0) GOTO 0x457; Pop(1)

0x453: Pop(0); Push(Stack[-20] * Stack[-20]);
0x454: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x455: IF (Stack[-1] == 0) GOTO 0x457; Pop(1)

0x456: Stack[-1] = (bool) 1
0x457: IF (Stack[-1] == 0) GOTO 0x45c; Pop(1)

0x458: @ Stop()
0x459: Pop(0)
0x45a: Stack[-22] = (bool) 0
0x45b: Return(); Pop(16)

0x45c: Pop(0); Push(Stack[-20] * Stack[-20]);
0x45d: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x45e: IF (Stack[-1] == 0) GOTO 0x49a; Pop(1)

0x45f: @@ GetPFPosition(Stack[-5])
0x460: Pop(0)
0x461: @ FindPathTo(Stack[-1], Stack[-5])
0x462: Pop(0)
0x463: Pop(0); Push(( Stack[-1] != 0 )
0x464: IF (Stack[-1] == 0) GOTO 0x467; Pop(1)

0x465: Stack[-6] = Stack[-1]
0x466: Stack[-1] = 0
0x467: Pop(0); Push(( Stack[-6] != 0 )
0x468: IF (Stack[-1] == 0) GOTO 0x488; Pop(1)

0x469: Push(Stack[-7])
0x46a: IF (Stack[-1] == 0) GOTO 0x471; Pop(1)

0x46b: Stack[-7] = (bool) 0
0x46c: @ RotatePath(Stack[-6], Stack[-8])
0x46d: Pop(0)
0x46e: Pop(0); Push((bool) Stack[-8] == 0)
0x46f: IF (Stack[-1] == 0) GOTO 0x471; Pop(1)

0x470: GOTO 0x4a0

0x471: Push((int) 0)
0x472: Push((float)0.3)
0x473: @ SetTimer(Stack[-2], Stack[-1])
0x474: Pop(2)
0x475: PushEmpty(string)
0x476: Call2 0x4cf

0x477: Pop(0)
0x478: PushEmpty(string)
0x479: Call2 0x4d1

0x47a: Pop(0)
0x47b: @ FollowPath(Stack[-8], Stack[-20], Stack[-10], Stack[-2], Stack[-1])
0x47c: Pop(2)
0x47d: Pop(0); Push((bool) Stack[-8] == 0)
0x47e: IF (Stack[-1] == 0) GOTO 0x486; Pop(1)

0x47f: Push( Stack[0 + Tasks[-1].StackPointer] )
0x480: IF (Stack[-1] == 0) GOTO 0x484; Pop(1)

0x481: Stack[-6] = 0
0x482: GOTO 0x4a0

0x483: GOTO 0x485

0x484: GOTO 0x49f

0x485: GOTO 0x487

0x486: Stack[-6] = 0
0x487: GOTO 0x498

0x488: Push((int) 0)
0x489: @ KillTimer(Stack[-1])
0x48a: Pop(1)
0x48b: Push((float)0.5)
0x48c: @ Sleep(Stack[-1], Stack[-9])
0x48d: Pop(1)
0x48e: Pop(0); Push((bool) Stack[-8] == 0)
0x48f: IF (Stack[-1] == 0) GOTO 0x494; Pop(1)

0x490: Push( Stack[0 + Tasks[-1].StackPointer] )
0x491: IF (Stack[-1] == 0) GOTO 0x494; Pop(1)

0x492: Stack[-6] = 0
0x493: GOTO 0x4a0

0x494: Push((int) 0)
0x495: Push((float)0.3)
0x496: @ SetTimer(Stack[-2], Stack[-1])
0x497: Pop(2)
0x498: Stack[-1] = 0
0x499: GOTO 0x49e

0x49a: Push((int) 0)
0x49b: @ KillTimer(Stack[-1])
0x49c: Pop(1)
0x49d: GOTO 0x4a0

0x49e: Stack[-6] = 0
0x49f: GOTO 0x440

0x4a0: Stack[-22] = !Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x4a1: Return(); Pop(16)

0x4a2: PushEmpty()
0x4a3: Push((int) 0)
0x4a4: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x4a5: IF (Stack[-1] == 0) GOTO 0x4a7; Pop(1)

0x4a6: Return(); Pop(0)

0x4a7: PushEmpty(bool, object)
0x4a8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4a9: Call2 0x4c8

0x4aa: Pop(1)
0x4ab: Pop(1); Push((bool) Stack[-1] == 0)
0x4ac: IF (Stack[-1] == 0) GOTO 0x4ae; Pop(1)

0x4ad: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x4ae: Push((int) 0)
0x4af: @ KillTimer(Stack[-1])
0x4b0: Pop(1)
0x4b1: @ Stop()
0x4b2: Pop(0)
0x4b3: Return(); Pop(0)

0x4b4: PushEmpty()
0x4b5: @ RequestClearPath(Stack[-1])
0x4b6: Pop(0)
0x4b7: Return(); Pop(0)

0x4b8: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x4b9: Push((int) 0)
0x4ba: @ KillTimer(Stack[-1])
0x4bb: Pop(1)
0x4bc: @ Stop()
0x4bd: Pop(0)
0x4be: Return(); Pop(0)

0x4bf: PushEmpty()
0x4c0: PushEmpty()
0x4c1: Call2 0x412

0x4c2: Pop(0)
0x4c3: PushEmpty(object)
0x4c4: Stack[-1] = Stack[-2]
0x4c5: Call2 0x70e

0x4c6: Pop(1)
0x4c7: Return(); Pop(0)

0x4c8: PushEmpty()
0x4c9: PushEmpty(bool, object)
0x4ca: Stack[-1] = Stack[-3]
0x4cb: Call2 0x581

0x4cc: Stack[-4] = Stack[-2]
0x4cd: Pop(2)
0x4ce: Return(); Pop(0)

0x4cf: Stack[-1] = "walk"
0x4d0: Return(); Pop(0)

0x4d1: Stack[-1] = "run"
0x4d2: Return(); Pop(0)

0x4d3: PushEmpty()
0x4d4: Push((int) 2)
0x4d5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4d6: IF (Stack[-1] == 0) GOTO 0x4da; Pop(1)

0x4d7: Stack[-2] = "fire"
0x4d8: Return(); Pop(0)

0x4d9: GOTO 0x4df

0x4da: Push((int) 1)
0x4db: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4dc: IF (Stack[-1] == 0) GOTO 0x4df; Pop(1)

0x4dd: Stack[-2] = "bullet"
0x4de: Return(); Pop(0)

0x4df: Stack[-2] = "phys"
0x4e0: Return(); Pop(0)

0x4e1: PushEmpty(cvector, cvector, cvector, cvector)
0x4e2: @ GetPosition(Stack[-2])
0x4e3: Pop(0)
0x4e4: @@ GetPosition(Stack[-1])
0x4e5: Pop(0)
0x4e6: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x4e7: Return(); Pop(4)

0x4e8: PushEmpty(bool, bool)
0x4e9: @ IsPlayerActor(Stack[-3], Stack[-1])
0x4ea: Pop(0)
0x4eb: Stack[-4] = Stack[-1]
0x4ec: Return(); Pop(2)

0x4ed: PushEmpty(bool, bool)
0x4ee: Push("HasProperty")
0x4ef: Push((int) 2)
0x4f0: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x4f1: Pop(1); Push((bool) Stack[-1] == 0)
0x4f2: IF (Stack[-1] == 0) GOTO 0x4f5; Pop(1)

0x4f3: Stack[-5] = (bool) 0
0x4f4: Return(); Pop(2)

0x4f5: @@ HasProperty(Stack[-3], Stack[-1])
0x4f6: Pop(0)
0x4f7: Stack[-5] = Stack[-1]
0x4f8: Return(); Pop(2)

0x4f9: PushEmpty(float, float)
0x4fa: PushEmpty(bool, object, string)
0x4fb: Stack[-2] = Stack[-10]
0x4fc: Stack[-1] = Stack[-9]
0x4fd: Call2 0x4ed

0x4fe: Pop(2)
0x4ff: Pop(1); Push((bool) Stack[-1] == 0)
0x500: IF (Stack[-1] == 0) GOTO 0x503; Pop(1)

0x501: Stack[-8] = (bool) 0
0x502: Return(); Pop(2)

0x503: @@ GetProperty(Stack[-6], Stack[-1])
0x504: Pop(0)
0x505: PushEmpty(float, float, float, float)
0x506: Stack[-3] = Stack[-5] + Stack[-9]; Pop(0);
0x507: Stack[-2] = Stack[-8]
0x508: Stack[-1] = Stack[-7]
0x509: Call2 0x672

0x50a: Pop(3)
0x50b: @@ SetProperty(Stack[-7], Stack[-1])
0x50c: Pop(1)
0x50d: Stack[-8] = (bool) 1
0x50e: Return(); Pop(2)

0x50f: PushEmpty(int, string, int, float, float, float, int, string, int, float, float, float)
0x510: PushEmpty(bool, object, string)
0x511: Stack[-2] = Stack[-18]
0x512: Stack[-1] = "health"
0x513: Call2 0x4ed

0x514: Pop(2)
0x515: Pop(1); Push((bool) Stack[-1] == 0)
0x516: IF (Stack[-1] == 0) GOTO 0x519; Pop(1)

0x517: Stack[-16] = (float) 0.0
0x518: Return(); Pop(12)

0x519: PushEmpty(bool, object, string)
0x51a: Stack[-2] = Stack[-18]
0x51b: Stack[-1] = "armor"
0x51c: Call2 0x4ed

0x51d: Pop(2)
0x51e: Pop(1); Push((bool) Stack[-1] == 0)
0x51f: IF (Stack[-1] == 0) GOTO 0x522; Pop(1)

0x520: Stack[-6] = (int) 0
0x521: GOTO 0x525

0x522: Push("armor")
0x523: @@ GetProperty(Stack[-1], Stack[-7])
0x524: Pop(1)
0x525: Push("armor_")
0x526: PushEmpty(string, int)
0x527: Stack[-1] = Stack[-16]
0x528: Call2 0x4d3

0x529: Pop(1)
0x52a: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x52b: PushEmpty(bool, object, string)
0x52c: Stack[-2] = Stack[-18]
0x52d: Stack[-1] = Stack[-8]
0x52e: Call2 0x4ed

0x52f: Pop(2)
0x530: Pop(1); Push((bool) Stack[-1] == 0)
0x531: IF (Stack[-1] == 0) GOTO 0x534; Pop(1)

0x532: Stack[-4] = (int) 0
0x533: GOTO 0x536

0x534: @@ GetProperty(Stack[-5], Stack[-4])
0x535: Pop(0)
0x536: PushEmpty(float, float, float)
0x537: Pop(0); Push(Stack[-9] + Stack[-7]);
0x538: Push((float)100.0)
0x539: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0x53a: Stack[-1] = (int) 1
0x53b: Call2 0x66b

0x53c: Stack[-6] = Stack[-3]
0x53d: Pop(3)
0x53e: Push("health")
0x53f: @@ GetProperty(Stack[-1], Stack[-3])
0x540: Pop(1)
0x541: Push((int) 1)
0x542: Pop(1); Push(Stack[-1] - Stack[-4]);
0x543: Stack[-2] = Stack[-15] * Stack[-1]; Pop(1);
0x544: Push("health")
0x545: PushEmpty(float, float, float, float)
0x546: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0x547: Stack[-2] = (int) 0
0x548: Stack[-1] = (int) 1
0x549: Call2 0x672

0x54a: Pop(3)
0x54b: @@ SetProperty(Stack[-2], Stack[-1])
0x54c: Pop(2)
0x54d: PushEmpty(bool, object)
0x54e: Stack[-1] = Stack[-17]
0x54f: Call2 0x4e8

0x550: Pop(1)
0x551: IF (Stack[-1] == 0) GOTO 0x556; Pop(1)

0x552: PushEmpty(float)
0x553: Stack[-1] = -Stack[-2]; Pop(0);
0x554: Call2 0x6a0

0x555: Pop(1)
0x556: Stack[-16] = Stack[-1]
0x557: Return(); Pop(12)

0x558: PushEmpty(bool, bool)
0x559: @@ IsDead(Stack[-1])
0x55a: Pop(0)
0x55b: Stack[-4] = Stack[-1]
0x55c: Return(); Pop(2)

0x55d: PushEmpty(object, object, object, object)
0x55e: Pop(0); Push((bool) Stack[-5] == 0)
0x55f: IF (Stack[-1] == 0) GOTO 0x562; Pop(1)

0x560: Stack[-6] = (bool) 0
0x561: Return(); Pop(4)

0x562: PushEmpty(bool)
0x563: Stack[-1] = (bool) 0
0x564: Push("IsDead")
0x565: Push((int) 1)
0x566: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x567: IF (Stack[-1] == 0) GOTO 0x56e; Pop(1)

0x568: PushEmpty(bool, object)
0x569: Stack[-1] = Stack[-8]
0x56a: Call2 0x558

0x56b: Pop(1)
0x56c: IF (Stack[-1] == 0) GOTO 0x56e; Pop(1)

0x56d: Stack[-1] = (bool) 1
0x56e: IF (Stack[-1] == 0) GOTO 0x571; Pop(1)

0x56f: Stack[-6] = (bool) 0
0x570: Return(); Pop(4)

0x571: @ GetScene(Stack[-2])
0x572: Pop(0)
0x573: Pop(0); Push((bool) Stack[-2] == 0)
0x574: IF (Stack[-1] == 0) GOTO 0x577; Pop(1)

0x575: Stack[-6] = (bool) 0
0x576: Return(); Pop(4)

0x577: @@ GetScene(Stack[-1])
0x578: Pop(0)
0x579: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x57a: IF (Stack[-1] == 0) GOTO 0x57d; Pop(1)

0x57b: Stack[-6] = (bool) 0
0x57c: Return(); Pop(4)

0x57d: Stack[-6] = (bool) 1
0x57e: Return(); Pop(4)

0x57f: Stack[-1] = 0
0x580: Stack[-2] = 0
0x581: PushEmpty(int, int)
0x582: PushEmpty(bool, object)
0x583: Stack[-1] = Stack[-5]
0x584: Call2 0x55d

0x585: Pop(1)
0x586: Pop(1); Push((bool) Stack[-1] == 0)
0x587: IF (Stack[-1] == 0) GOTO 0x58a; Pop(1)

0x588: Stack[-4] = (bool) 0
0x589: Return(); Pop(2)

0x58a: PushEmpty(bool, object, string)
0x58b: Stack[-2] = Stack[-6]
0x58c: Stack[-1] = "noaccess"
0x58d: Call2 0x4ed

0x58e: Pop(2)
0x58f: Pop(1); Push((bool) Stack[-1] == 0)
0x590: IF (Stack[-1] == 0) GOTO 0x593; Pop(1)

0x591: Stack[-4] = (bool) 1
0x592: Return(); Pop(2)

0x593: Push("noaccess")
0x594: @@ GetProperty(Stack[-1], Stack[-2])
0x595: Pop(1)
0x596: Push((int) 0)
0x597: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x598: Return(); Pop(2)

0x599: PushEmpty(bool, int, cvector, cvector, cvector, cvector, string, bool, int, cvector, cvector, cvector, cvector, string)
0x59a: Pop(0); Push((bool) Stack[-15] == 0)
0x59b: IF (Stack[-1] == 0) GOTO 0x59d; Pop(1)

0x59c: Return(); Pop(14)

0x59d: @ IsDead(Stack[-7])
0x59e: Pop(0)
0x59f: Push(Stack[-7])
0x5a0: IF (Stack[-1] == 0) GOTO 0x5a2; Pop(1)

0x5a1: Return(); Pop(14)

0x5a2: @ GetSecondaryAnimationType(Stack[-6])
0x5a3: Pop(0)
0x5a4: Push((int) 0)
0x5a5: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x5a6: IF (Stack[-1] == 0) GOTO 0x5a8; Pop(1)

0x5a7: Return(); Pop(14)

0x5a8: @@ GetPosition(Stack[-5])
0x5a9: Pop(0)
0x5aa: @ GetPosition(Stack[-4])
0x5ab: Pop(0)
0x5ac: @ GetDirection(Stack[-3])
0x5ad: Pop(0)
0x5ae: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0x5af: Push(CvectorIndex(Stack[-2], 0))
0x5b0: Push(CvectorIndex(Stack[-4], 0))
0x5b1: Pop(2); Push(Stack[-2] * Stack[-1]);
0x5b2: Push(CvectorIndex(Stack[-3], 2))
0x5b3: Push(CvectorIndex(Stack[-5], 2))
0x5b4: Pop(2); Push(Stack[-2] * Stack[-1]);
0x5b5: Pop(2); Push(Stack[-2] + Stack[-1]);
0x5b6: Push((int) 0)
0x5b7: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x5b8: IF (Stack[-1] == 0) GOTO 0x5bb; Pop(1)

0x5b9: Stack[-1] = "fhit"
0x5ba: GOTO 0x5bc

0x5bb: Stack[-1] = "bhit"
0x5bc: Push("hit_react")
0x5bd: Push("1")
0x5be: Pop(1); Push(Stack[-3] + Stack[-1]);
0x5bf: Push("2")
0x5c0: Pop(1); Push(Stack[-4] + Stack[-1]);
0x5c1: Push((int) -10)
0x5c2: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x5c3: Pop(4)
0x5c4: Return(); Pop(14)

0x5c5: PushEmpty(cvector, object, int, bool, cvector, cvector, int, int, cvector, cvector, object, int, bool, cvector, cvector, int, int, cvector)
0x5c6: PushEmpty(bool)
0x5c7: Stack[-1] = (bool) 0
0x5c8: PushEmpty(bool)
0x5c9: Stack[-1] = (bool) 0
0x5ca: Push(Stack[-23])
0x5cb: IF (Stack[-1] == 0) GOTO 0x5d0; Pop(1)

0x5cc: Push((int) 4)
0x5cd: Pop(1); Push((bool) Stack[-23] != Stack[-1])
0x5ce: IF (Stack[-1] == 0) GOTO 0x5d0; Pop(1)

0x5cf: Stack[-1] = (bool) 1
0x5d0: IF (Stack[-1] == 0) GOTO 0x5d5; Pop(1)

0x5d1: Push((int) 5)
0x5d2: Pop(1); Push((bool) Stack[-22] != Stack[-1])
0x5d3: IF (Stack[-1] == 0) GOTO 0x5d5; Pop(1)

0x5d4: Stack[-1] = (bool) 1
0x5d5: IF (Stack[-1] == 0) GOTO 0x604; Pop(1)

0x5d6: PushEmpty(cvector, cvector)
0x5d7: PushEmpty(cvector, object)
0x5d8: Stack[-1] = Stack[-25]
0x5d9: Call2 0x4e1

0x5da: Stack[-3] = Stack[-2]
0x5db: Pop(2)
0x5dc: Call2 0x661

0x5dd: Stack[-11] = Stack[-2]
0x5de: Pop(2)
0x5df: @ CreateVectorVector(Stack[-8])
0x5e0: Pop(0)
0x5e1: Stack[-7] = (int) 1
0x5e2: Push("hit")
0x5e3: Pop(1); Push(Stack[-1] + Stack[-8]);
0x5e4: @ GetGeometryLocator(Stack[-1], Stack[-7], Stack[-6], Stack[-5])
0x5e5: Pop(1)
0x5e6: Pop(0); Push((bool) Stack[-6] == 0)
0x5e7: IF (Stack[-1] == 0) GOTO 0x5e9; Pop(1)

0x5e8: GOTO 0x5f2

0x5e9: Pop(0); Push(Stack[-4] | Stack[-9]);
0x5ea: Push((float)0.70711)
0x5eb: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x5ec: IF (Stack[-1] == 0) GOTO 0x5ef; Pop(1)

0x5ed: @@ add(Stack[-5])
0x5ee: Pop(0)
0x5ef: Push((int) 1)
0x5f0: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x5f1: GOTO 0x5e2

0x5f2: @@ size(Stack[-3])
0x5f3: Pop(0)
0x5f4: Push(Stack[-3])
0x5f5: IF (Stack[-1] == 0) GOTO 0x603; Pop(1)

0x5f6: @ irand(Stack[-2], Stack[-3])
0x5f7: Pop(0)
0x5f8: @@ get(Stack[-1], Stack[-2])
0x5f9: Pop(0)
0x5fa: PushEmpty(object, int, float, cvector, cvector)
0x5fb: Stack[-5] = Stack[-26]
0x5fc: Stack[-4] = Stack[-25]
0x5fd: Stack[-3] = Stack[-24]
0x5fe: Stack[-2] = Stack[-6]
0x5ff: Stack[-1] = -Stack[-14]; Pop(0);
0x600: Call2 0x609

0x601: Pop(5)
0x602: Return(); Pop(18)

0x603: Stack[-8] = 0
0x604: PushEmpty(object)
0x605: Stack[-1] = Stack[-22]
0x606: Call2 0x599

0x607: Pop(1)
0x608: Return(); Pop(18)

0x609: PushEmpty(object, object, object, object)
0x60a: @ GetScene(Stack[-2])
0x60b: Pop(0)
0x60c: Push("scripted")
0x60d: Push("blood_dir.xml")
0x60e: @ AddActorByType(Stack[-3], Stack[-2], Stack[-4], Stack[-8], Stack[-7], Stack[-1])
0x60f: Pop(2)
0x610: PushEmpty(object)
0x611: Stack[-1] = Stack[-10]
0x612: Call2 0x599

0x613: Pop(1)
0x614: Return(); Pop(4)

0x615: Stack[-1] = 0
0x616: Stack[-2] = 0
0x617: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x618: @@ GetPosition(Stack[-3])
0x619: Pop(0)
0x61a: @ GetPosition(Stack[-2])
0x61b: Pop(0)
0x61c: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0x61d: Push(CvectorIndex(Stack[-1], 0))
0x61e: Push(CvectorIndex(Stack[-2], 2))
0x61f: @ RotateAsync(Stack[-2], Stack[-1])
0x620: Pop(2)
0x621: Return(); Pop(6)

0x622: PushEmpty(bool, bool)
0x623: @ IsLoaded(Stack[-1])
0x624: Pop(0)
0x625: Stack[-3] = Stack[-1]
0x626: Return(); Pop(2)

0x627: PushEmpty(float, cvector, float, cvector)
0x628: @@ GetEyesHeight(Stack[-2])
0x629: Pop(0)
0x62a: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x62b: Push(CvectorIndex(Stack[-1], 1))
0x62c: Stack[-1] = Stack[-3]
0x62d: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x62e: Push("head")
0x62f: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x630: Pop(1)
0x631: Return(); Pop(4)

0x632: PushEmpty(bool, int, bool, int, bool, float, cvector, cvector, bool, int, bool, int, bool, float, cvector, cvector)
0x633: @ IsExisting3DSound(Stack[-8], Stack[-17])
0x634: Pop(0)
0x635: Pop(0); Push((bool) Stack[-8] == 0)
0x636: IF (Stack[-1] == 0) GOTO 0x64b; Pop(1)

0x637: Stack[-7] = (int) 0
0x638: Push((int) 1)
0x639: Pop(1); Push(Stack[-8] + Stack[-1]);
0x63a: Pop(1); Push(Stack[-18] + Stack[-1]);
0x63b: @ IsExisting3DSound(Stack[-7], Stack[-1])
0x63c: Pop(1)
0x63d: Pop(0); Push((bool) Stack[-6] == 0)
0x63e: IF (Stack[-1] == 0) GOTO 0x640; Pop(1)

0x63f: GOTO 0x643

0x640: Push((int) 1)
0x641: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x642: GOTO 0x638

0x643: Pop(0); Push((bool) Stack[-7] == 0)
0x644: IF (Stack[-1] == 0) GOTO 0x646; Pop(1)

0x645: Return(); Pop(16)

0x646: @ irand(Stack[-5], Stack[-7])
0x647: Pop(0)
0x648: Push((int) 1)
0x649: Pop(1); Push(Stack[-6] + Stack[-1]);
0x64a: Stack[-18] = Stack[-18] + Stack[-1]; Pop(1);
0x64b: @ Is3DSoundLoaded(Stack[-4], Stack[-17])
0x64c: Pop(0)
0x64d: Push(Stack[-4])
0x64e: IF (Stack[-1] == 0) GOTO 0x65a; Pop(1)

0x64f: @ GetEyesHeight(Stack[-3])
0x650: Pop(0)
0x651: @ GetDirection(Stack[-2])
0x652: Pop(0)
0x653: Push((int) 50)
0x654: Stack[-2] = Stack[-3] * Stack[-1]; Pop(1);
0x655: Push(CvectorIndex(Stack[-1], 1))
0x656: Stack[-1] = Stack[-1] + Stack[-4]; Pop(0);
0x657: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x658: @ PlayGlobalSound(Stack[-17], Stack[-1])
0x659: Pop(0)
0x65a: Return(); Pop(16)

0x65b: PushEmpty(object, object)
0x65c: @ self(Stack[-1])
0x65d: Pop(0)
0x65e: Stack[-3] = Stack[-1]
0x65f: Return(); Pop(2)

0x660: Stack[-1] = 0
0x661: PushEmpty(float, float)
0x662: Pop(0); Push(Stack[-3] | Stack[-3]);
0x663: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x664: Push((float)0.0)
0x665: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x666: IF (Stack[-1] == 0) GOTO 0x669; Pop(1)

0x667: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x668: Return(); Pop(2)

0x669: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x66a: Return(); Pop(2)

0x66b: PushEmpty()
0x66c: Pop(0); Push((bool) Stack[-2] < Stack[-1])
0x66d: IF (Stack[-1] == 0) GOTO 0x670; Pop(1)

0x66e: Stack[-3] = Stack[-2]
0x66f: GOTO 0x671

0x670: Stack[-3] = Stack[-1]
0x671: Return(); Pop(0)

0x672: PushEmpty()
0x673: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x674: IF (Stack[-1] == 0) GOTO 0x677; Pop(1)

0x675: Stack[-4] = Stack[-2]
0x676: Return(); Pop(0)

0x677: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x678: IF (Stack[-1] == 0) GOTO 0x67b; Pop(1)

0x679: Stack[-4] = Stack[-1]
0x67a: Return(); Pop(0)

0x67b: Stack[-4] = Stack[-3]
0x67c: Return(); Pop(0)

0x67d: PushEmpty()
0x67e: Pop(0); Push((bool) Stack[-2] == 0)
0x67f: IF (Stack[-1] == 0) GOTO 0x682; Pop(1)

0x680: Stack[-3] = (bool) 0
0x681: Return(); Pop(0)

0x682: Push((int) 0)
0x683: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x684: IF (Stack[-1] == 0) GOTO 0x689; Pop(1)

0x685: Push((int) 8)
0x686: @ SendWorldWndMessage(Stack[-1])
0x687: Pop(1)
0x688: GOTO 0x692

0x689: Push((int) 0)
0x68a: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x68b: IF (Stack[-1] == 0) GOTO 0x690; Pop(1)

0x68c: Push((int) 9)
0x68d: @ SendWorldWndMessage(Stack[-1])
0x68e: Pop(1)
0x68f: GOTO 0x692

0x690: Stack[-3] = (bool) 0
0x691: Return(); Pop(0)

0x692: PushEmpty(float)
0x693: Stack[-1] = Stack[-2]
0x694: Call2 0x6b1

0x695: Pop(1)
0x696: PushEmpty(bool, object, string, float, float, float)
0x697: Stack[-5] = Stack[-8]
0x698: Stack[-4] = "reputation"
0x699: Stack[-3] = Stack[-7]
0x69a: Stack[-2] = (int) 0
0x69b: Stack[-1] = (int) 1
0x69c: Call2 0x4f9

0x69d: Pop(6)
0x69e: Stack[-3] = (bool) 1
0x69f: Return(); Pop(0)

0x6a0: PushEmpty(object, object)
0x6a1: @ CreateFloatVector(Stack[-1])
0x6a2: Pop(0)
0x6a3: @@ add(Stack[-3])
0x6a4: Pop(0)
0x6a5: Push((int) 0)
0x6a6: Pop(1); Push((bool) Stack[-4] < Stack[-1])
0x6a7: IF (Stack[-1] == 0) GOTO 0x6ac; Pop(1)

0x6a8: Push((float)0.7)
0x6a9: Push((int) 500)
0x6aa: @ RumblePlay(Stack[-2], Stack[-1])
0x6ab: Pop(2)
0x6ac: Push((int) 15)
0x6ad: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x6ae: Pop(1)
0x6af: Return(); Pop(2)

0x6b0: Stack[-1] = 0
0x6b1: PushEmpty(object, object)
0x6b2: @ CreateFloatVector(Stack[-1])
0x6b3: Pop(0)
0x6b4: @@ add(Stack[-3])
0x6b5: Pop(0)
0x6b6: Push((int) 16)
0x6b7: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x6b8: Pop(1)
0x6b9: Return(); Pop(2)

0x6ba: Stack[-1] = 0
0x6bb: PushEmpty(bool, bool)
0x6bc: @ IsPlayerActor(Stack[-3], Stack[-1])
0x6bd: Pop(0)
0x6be: Push(Stack[-1])
0x6bf: IF (Stack[-1] == 0) GOTO 0x6c3; Pop(1)

0x6c0: Push("attack")
0x6c1: @ PlayGlobalMusic(Stack[-1])
0x6c2: Pop(1)
0x6c3: Return(); Pop(2)

0x6c4: PushEmpty(object, object)
0x6c5: @ GetScene(Stack[-1])
0x6c6: Pop(0)
0x6c7: Push("battle")
0x6c8: PushEmpty(object)
0x6c9: Call2 0x65b

0x6ca: Pop(0)
0x6cb: @ BroadcastMessage(Stack[-2], Stack[-1], Stack[-3])
0x6cc: Pop(2)
0x6cd: Return(); Pop(2)

0x6ce: Stack[-1] = 0
0x6cf: PushEmpty(string, string)
0x6d0: Stack[-1] = "idle"
0x6d1: Push(Stack[-3])
0x6d2: IF (Stack[-1] == 0) GOTO 0x6d4; Pop(1)

0x6d3: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x6d4: Stack[-4] = Stack[-1]
0x6d5: Return(); Pop(2)

0x6d6: PushEmpty(int, bool, int, bool)
0x6d7: Stack[-2] = (int) 0
0x6d8: Push("all")
0x6d9: PushEmpty(string, int)
0x6da: Stack[-1] = Stack[-5]
0x6db: Call2 0x6cf

0x6dc: Pop(1)
0x6dd: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x6de: Pop(2)
0x6df: Pop(0); Push((bool) Stack[-1] == 0)
0x6e0: IF (Stack[-1] == 0) GOTO 0x6e2; Pop(1)

0x6e1: GOTO 0x6e5

0x6e2: Push((int) 1)
0x6e3: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x6e4: GOTO 0x6d8

0x6e5: Stack[-5] = Stack[-2]
0x6e6: Return(); Pop(4)

0x6e7: PushEmpty()
0x6e8: PushEmpty(object)
0x6e9: Stack[-1] = Stack[-2]
0x6ea: Push(-1, 0); TaskCall(1)
0x6eb: Call2 0x80

0x6ec: Pop(-1, 0); TaskReturn
0x6ed: Pop(1)
0x6ee: Return(); Pop(0)

0x6ef: PushEmpty()
0x6f0: PushEmpty(object, int, float)
0x6f1: Stack[-3] = Stack[-7]
0x6f2: Stack[-2] = Stack[-6]
0x6f3: Stack[-1] = Stack[-5]
0x6f4: Call2 0x5c5

0x6f5: Pop(3)
0x6f6: Return(); Pop(0)

0x6f7: PushEmpty()
0x6f8: PushEmpty(object, int, float, cvector, cvector)
0x6f9: Stack[-5] = Stack[-11]
0x6fa: Stack[-4] = Stack[-10]
0x6fb: Stack[-3] = Stack[-9]
0x6fc: Stack[-2] = Stack[-7]
0x6fd: Stack[-1] = Stack[-6]
0x6fe: Call2 0x609

0x6ff: Pop(5)
0x700: Return(); Pop(0)

0x701: PushEmpty(float, float)
0x702: Push("health")
0x703: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x704: IF (Stack[-1] == 0) GOTO 0x70d; Pop(1)

0x705: Push("health")
0x706: @ GetProperty(Stack[-1], Stack[-2])
0x707: Pop(1)
0x708: Push((int) 0)
0x709: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x70a: IF (Stack[-1] == 0) GOTO 0x70d; Pop(1)

0x70b: @ SignalDeath(Stack[-4])
0x70c: Pop(0)
0x70d: Return(); Pop(2)

0x70e: PushEmpty()
0x70f: PushEmpty(object)
0x710: Stack[-1] = Stack[-2]
0x711: Call2 0x6e7

0x712: Pop(1)
0x713: Return(); Pop(0)

0x714: PushEmpty()
0x715: PushEmpty(bool, object)
0x716: Stack[-1] = Stack[-3]
0x717: Call2 0x581

0x718: Stack[-4] = Stack[-2]
0x719: Pop(2)
0x71a: Return(); Pop(0)

0x71b: PushEmpty()
0x71c: PushEmpty(object)
0x71d: Stack[-1] = Stack[-2]
0x71e: Call2 0x75d

0x71f: Pop(1)
0x720: Return(); Pop(0)

0x721: PushEmpty(int, int)
0x722: Push("branch")
0x723: @ GetVariable(Stack[-1], Stack[-2])
0x724: Pop(1)
0x725: Stack[-3] = Stack[-1]
0x726: Return(); Pop(2)

0x727: PushEmpty()
0x728: PushEmpty(int)
0x729: Call2 0x721

0x72a: Pop(0)
0x72b: Push((int) 1)
0x72c: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x72d: IF (Stack[-1] == 0) GOTO 0x731; Pop(1)

0x72e: @ WorkWithCorpse(Stack[-1])
0x72f: Pop(0)
0x730: GOTO 0x733

0x731: @ Barter(Stack[-1])
0x732: Pop(0)
0x733: Return(); Pop(0)

0x734: PushEmpty(object, int, bool, object, int, bool)
0x735: @ CreateInvItem(Stack[-3])
0x736: Pop(0)
0x737: @@ SetItemName(Stack[-7])
0x738: Pop(0)
0x739: Push("Organ")
0x73a: Push((int) 1)
0x73b: @@ SetProperty(Stack[-2], Stack[-1])
0x73c: Pop(2)
0x73d: @@ GetItemID(Stack[-2])
0x73e: Pop(0)
0x73f: Push((int) 0)
0x740: Push((int) 1)
0x741: @ AddItem(Stack[-3], Stack[-5], Stack[-2], Stack[-1])
0x742: Pop(2)
0x743: Return(); Pop(6)

0x744: Stack[-3] = 0
0x745: PushEmpty(int)
0x746: Call2 0x721

0x747: Pop(0)
0x748: Push((int) 1)
0x749: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x74a: IF (Stack[-1] == 0) GOTO 0x74c; Pop(1)

0x74b: Return(); Pop(0)

0x74c: PushEmpty(string)
0x74d: Stack[-1] = "liver"
0x74e: Call2 0x734

0x74f: Pop(1)
0x750: PushEmpty(string)
0x751: Stack[-1] = "kidney"
0x752: Call2 0x734

0x753: Pop(1)
0x754: PushEmpty(string)
0x755: Stack[-1] = "heart"
0x756: Call2 0x734

0x757: Pop(1)
0x758: PushEmpty(string)
0x759: Stack[-1] = "blood"
0x75a: Call2 0x734

0x75b: Pop(1)
0x75c: Return(); Pop(0)

0x75d: PushEmpty(object, object)
0x75e: Push("b1q04_attack")
0x75f: Push((int) 1)
0x760: @ SetVariable(Stack[-2], Stack[-1])
0x761: Pop(2)
0x762: @ GetScene(Stack[-1])
0x763: Pop(0)
0x764: PushEmpty(object)
0x765: Call2 0x65b

0x766: Pop(0)
0x767: @@ RemoveStationaryActor(Stack[-1])
0x768: Pop(1)
0x769: PushEmpty(object)
0x76a: Stack[-1] = Stack[-4]
0x76b: Push(-1, 6); TaskCall(2)
0x76c: Call2 0x12b

0x76d: Pop(-1, 6); TaskReturn
0x76e: Pop(1)
0x76f: Return(); Pop(2)

0x770: Stack[-1] = 0
