GlobalVarCount = 0

Strings:
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
	head
	GetPosition
	walk
	run
	fdie
	bdie
	GetScriptProperty
	Owner
	HasScriptProperty
	GetScriptProperty
	@GetEyesHeight
	GetEyesHeight
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
	idle
	branch
	SetItemName
	Organ
	GetItemID
	liver
	kidney
	heart
	blood
	dead

Import:
	Sleep (1 args)
	WaitForAnimEnd (0 args)
	irand (2 args)
	PlayAnimation (2 args)
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
	StopAsync (0 args)
	rand (1 args)
	Face (1 args)
	SetSpeed (1 args)
	Stop (0 args)
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
	UnlookAsync (1 args)
	KillTimer (1 args)
	GetPosition (1 args)
	FindPathTo (2 args)
	RotatePath (2 args)
	FollowPath (5 args)
	RequestClearPath (1 args)
	SetRTEnvelope (2 args)
	Hold (0 args)
	IsOverrideActive (1 args)
	GetDirection (1 args)
	RemoveRTEnvelope (0 args)
	SetDeathState (0 args)
	LookAsync (3 args)
	LockAnimationEnd (2 args)
	RemoveEnvelope (0 args)
	StopSecondaryAnimation (0 args)
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
	SendWorldWndMessage (2 args)
	BroadcastMessage (3 args)
	GetVariable (2 args)
	WorkWithCorpse (1 args)
	Barter (1 args)
	CreateInvItem (1 args)
	AddItem (4 args)
	RemoveActor (1 args)
	SetProperty (2 args)
	GetProperty (2 args)
	SignalDeath (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_1 Op = 0xe Vars = (object)
		EVENT_3 Op = 0x27 Vars = (object)
		EVENT_17 Op = 0x40 Vars = (object)
	GTASK_1 Vars = (object, int, int, bool, float, int) Params = 1
	GTASK_2 Vars = (bool, object, bool) Params = 6
		EVENT_7 Op = 0x37a Vars = (int)
		EVENT_1 Op = 0x395 Vars = (object)
		EVENT_2 Op = 0x3a4 Vars = (object)
		EVENT_10 Op = 0x42a Vars = (object)
		EVENT_41 Op = 0x435 Vars = (object)
	GTASK_3  Params = 1
		EVENT_0 Op = 0x458 Vars = (object)
		EVENT_22 Op = 0x4d7 Vars = (object, int, float, float)
		EVENT_16 Op = 0x4d9 Vars = (object, string)
		EVENT_41 Op = 0x4db Vars = (object)

Events:
EVENT_6 Op = 0x6e3 Vars = ()
EVENT_22 Op = 0x6fd Vars = (object, int, float, float)
EVENT_43 Op = 0x705 Vars = (object, int, float, float, cvector, cvector)
EVENT_16 Op = 0x70f Vars = (object, string)
EVENT_41 Op = 0x71c Vars = (object)

0x0: EventDisable(1)
0x1: EventDisable(3)
0x2: Push((int) 3)
0x3: @ Sleep(Stack[-1])
0x4: Pop(1)
0x5: EventEnable(1)
0x6: EventEnable(3)
0x7: Push((bool) 1)
0x8: IF (Stack[-1] == 0) GOTO 0xd; Pop(1)

0x9: PushEmpty()
0xa: Call2 0x4b

0xb: Pop(0)
0xc: GOTO 0x7

0xd: Return(); Pop(0)

0xe: PushEmpty()
0xf: PushEmpty(bool)
0x10: Stack[-1] = (bool) 0
0x11: PushEmpty(bool, object)
0x12: Stack[-1] = Stack[-4]
0x13: Call2 0x4f2

0x14: Pop(1)
0x15: IF (Stack[-1] == 0) GOTO 0x1c; Pop(1)

0x16: PushEmpty(bool, object)
0x17: Stack[-1] = Stack[-4]
0x18: Call2 0x575

0x19: Pop(1)
0x1a: IF (Stack[-1] == 0) GOTO 0x1c; Pop(1)

0x1b: Stack[-1] = (bool) 1
0x1c: IF (Stack[-1] == 0) GOTO 0x26; Pop(1)

0x1d: PushEmpty()
0x1e: Call2 0x9c

0x1f: Pop(0)
0x20: PushEmpty(object)
0x21: Stack[-1] = Stack[-2]
0x22: Push(-1, 6); TaskCall(1)
0x23: Call2 0xa1

0x24: Pop(-1, 6); TaskReturn
0x25: Pop(1)
0x26: Return(); Pop(0)

0x27: PushEmpty()
0x28: PushEmpty(bool)
0x29: Stack[-1] = (bool) 0
0x2a: PushEmpty(bool, object)
0x2b: Stack[-1] = Stack[-4]
0x2c: Call2 0x4f2

0x2d: Pop(1)
0x2e: IF (Stack[-1] == 0) GOTO 0x35; Pop(1)

0x2f: PushEmpty(bool, object)
0x30: Stack[-1] = Stack[-4]
0x31: Call2 0x575

0x32: Pop(1)
0x33: IF (Stack[-1] == 0) GOTO 0x35; Pop(1)

0x34: Stack[-1] = (bool) 1
0x35: IF (Stack[-1] == 0) GOTO 0x3f; Pop(1)

0x36: PushEmpty()
0x37: Call2 0x9c

0x38: Pop(0)
0x39: PushEmpty(object)
0x3a: Stack[-1] = Stack[-2]
0x3b: Push(-1, 6); TaskCall(1)
0x3c: Call2 0xa1

0x3d: Pop(-1, 6); TaskReturn
0x3e: Pop(1)
0x3f: Return(); Pop(0)

0x40: PushEmpty()
0x41: PushEmpty()
0x42: Call2 0x9c

0x43: Pop(0)
0x44: PushEmpty(object)
0x45: Stack[-1] = Stack[-2]
0x46: Push(-1, 6); TaskCall(1)
0x47: Call2 0xa1

0x48: Pop(-1, 6); TaskReturn
0x49: Pop(1)
0x4a: Return(); Pop(0)

0x4b: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x4c: @ WaitForAnimEnd()
0x4d: Pop(0)
0x4e: PushEmpty(bool)
0x4f: Call2 0x616

0x50: Pop(0)
0x51: Pop(1); Push((bool) Stack[-1] == 0)
0x52: IF (Stack[-1] == 0) GOTO 0x54; Pop(1)

0x53: Return(); Pop(14)

0x54: PushEmpty(int)
0x55: Call2 0x696

0x56: Stack[-8] = Stack[-1]
0x57: Pop(1)
0x58: Stack[-6] = (int) 0
0x59: PushEmpty(bool)
0x5a: Stack[-1] = (bool) 0
0x5b: Push((int) 5)
0x5c: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x5d: IF (Stack[-1] == 0) GOTO 0x63; Pop(1)

0x5e: PushEmpty(bool)
0x5f: Call2 0x616

0x60: Pop(0)
0x61: IF (Stack[-1] == 0) GOTO 0x63; Pop(1)

0x62: Stack[-1] = (bool) 1
0x63: IF (Stack[-1] == 0) GOTO 0x97; Pop(1)

0x64: Push((int) 3)
0x65: @ irand(Stack[-6], Stack[-1])
0x66: Pop(1)
0x67: Push((int) 0)
0x68: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x69: IF (Stack[-1] == 0) GOTO 0x7b; Pop(1)

0x6a: Push(Stack[-7])
0x6b: IF (Stack[-1] == 0) GOTO 0x7a; Pop(1)

0x6c: @ irand(Stack[-4], Stack[-7])
0x6d: Pop(0)
0x6e: Push("all")
0x6f: PushEmpty(string, int)
0x70: Stack[-1] = Stack[-7]
0x71: Call2 0x68f

0x72: Pop(1)
0x73: @ PlayAnimation(Stack[-2], Stack[-1])
0x74: Pop(2)
0x75: @ WaitForAnimEnd(Stack[-3])
0x76: Pop(0)
0x77: Pop(0); Push((bool) Stack[-3] == 0)
0x78: IF (Stack[-1] == 0) GOTO 0x7a; Pop(1)

0x79: GOTO 0x97

0x7a: GOTO 0x8c

0x7b: Push((int) 1)
0x7c: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x7d: IF (Stack[-1] == 0) GOTO 0x89; Pop(1)

0x7e: Push((int) 4)
0x7f: @ rand(Stack[-3], Stack[-1])
0x80: Pop(1)
0x81: Push((int) 1)
0x82: Pop(1); Push(Stack[-3] + Stack[-1]);
0x83: @ Sleep(Stack[-1], Stack[-2])
0x84: Pop(1)
0x85: Pop(0); Push((bool) Stack[-1] == 0)
0x86: IF (Stack[-1] == 0) GOTO 0x88; Pop(1)

0x87: GOTO 0x97

0x88: GOTO 0x8c

0x89: Push(Stack[-6])
0x8a: IF (Stack[-1] == 0) GOTO 0x8c; Pop(1)

0x8b: GOTO 0x97

0x8c: PushEmpty(bool)
0x8d: Call2 0x9a

0x8e: Pop(0)
0x8f: Pop(1); Push((bool) Stack[-1] == 0)
0x90: IF (Stack[-1] == 0) GOTO 0x92; Pop(1)

0x91: GOTO 0x97

0x92: @ ResetAAS()
0x93: Pop(0)
0x94: Push((int) 1)
0x95: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x96: GOTO 0x59

0x97: @ ResetAAS()
0x98: Pop(0)
0x99: Return(); Pop(14)

0x9a: Stack[-1] = (bool) 1
0x9b: Return(); Pop(0)

0x9c: @ StopAnimation()
0x9d: Pop(0)
0x9e: @ StopGroup0()
0x9f: Pop(0)
0xa0: Return(); Pop(0)

0xa1: PushEmpty()
0xa2: PushEmpty(object, bool, float)
0xa3: Stack[-3] = Stack[-4]
0xa4: Stack[-2] = (bool) 1
0xa5: Stack[-1] = (float) 180.0
0xa6: Call2 0xb3

0xa7: Pop(3)
0xa8: Push((int) 1)
0xa9: @ Sleep(Stack[-1])
0xaa: Pop(1)
0xab: GOTO 0xa2

0xac: Return(); Pop(0)

0xad: PushEmpty()
0xae: Stack[-3] = (float) 0.2
0xaf: Return(); Pop(0)

0xb0: PushEmpty()
0xb1: Stack[-3] = (int) 0
0xb2: Return(); Pop(0)

0xb3: PushEmpty(float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float, float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float)
0xb4: PushEmpty()
0xb5: Call2 0x198

0xb6: Pop(0)
0xb7: Stack[5 + Tasks[-1].StackPointer] = (int)0
0xb8: Push("@GetAttackDistance")
0xb9: Push((int) 1)
0xba: Pop(2); Push(IsFuncExist(Stack[-27], Stack[-2], Stack[-1]))
0xbb: IF (Stack[-1] == 0) GOTO 0xc1; Pop(1)

0xbc: @@ GetAttackDistance(Stack[-11])
0xbd: Pop(0)
0xbe: Push((int) 50)
0xbf: Stack[-12] = Stack[-12] + Stack[-1]; Pop(1);
0xc0: GOTO 0xc2

0xc1: Stack[-11] = Stack[-23]
0xc2: Push((int) 150)
0xc3: Pop(1); Push((bool) Stack[-12] >= Stack[-1])
0xc4: IF (Stack[-1] == 0) GOTO 0xc6; Pop(1)

0xc5: Stack[-11] = (int) 150
0xc6: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xc7: Stack[0 + Tasks[-1].StackPointer] = Stack[-25]
0xc8: @ IsPlayerActor(Stack[-0], Stack[-8])
0xc9: Pop(0)
0xca: Push(Stack[-8])
0xcb: IF (Stack[-1] == 0) GOTO 0xd4; Pop(1)

0xcc: Push("attack")
0xcd: @ PlayGlobalMusic(Stack[-1])
0xce: Pop(1)
0xcf: PushEmpty(object)
0xd0: Call2 0x64f

0xd1: Pop(0)
0xd2: @ SendPlayerEnemy(Stack[-26], Stack[-1])
0xd3: Pop(1)
0xd4: Push(Stack[-24])
0xd5: IF (Stack[-1] == 0) GOTO 0xd8; Pop(1)

0xd6: Stack[-7] = (bool) 0
0xd7: GOTO 0xd9

0xd8: Stack[-7] = (bool) 1
0xd9: Push((float)400.0)
0xda: Stack[-7] = Stack[-1] + Stack[-12]; Pop(1);
0xdb: PushEmpty(bool)
0xdc: Stack[-1] = (bool) 0
0xdd: PushEmpty(bool, object)
0xde: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xdf: Call2 0x575

0xe0: Pop(1)
0xe1: IF (Stack[-1] == 0) GOTO 0xe5; Pop(1)

0xe2: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0xe3: IF (Stack[-1] == 0) GOTO 0xe5; Pop(1)

0xe4: Stack[-1] = (bool) 1
0xe5: IF (Stack[-1] == 0) GOTO 0x187; Pop(1)

0xe6: PushEmpty()
0xe7: Call2 0x335

0xe8: Pop(0)
0xe9: @@ GetPFPosition(Stack[-10])
0xea: Pop(0)
0xeb: @ GetPFPosition(Stack[-9])
0xec: Pop(0)
0xed: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0xee: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0xef: Pop(0); Push(Stack[-6] * Stack[-6]);
0xf0: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0xf1: IF (Stack[-1] == 0) GOTO 0x101; Pop(1)

0xf2: PushEmpty(bool, object, float, float, bool, bool)
0xf3: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0xf4: Stack[-4] = Stack[-17]
0xf5: Stack[-3] = (float) 10000.0
0xf6: Stack[-2] = (bool) 1
0xf7: Stack[-1] = (bool) 0
0xf8: Push(-6, 3); TaskCall(2)
0xf9: Call2 0x349

0xfa: Pop(-6, 3); TaskReturn
0xfb: Pop(5)
0xfc: Pop(1); Push((bool) Stack[-1] == 0)
0xfd: IF (Stack[-1] == 0) GOTO 0xff; Pop(1)

0xfe: GOTO 0x187

0xff: Stack[-7] = (bool) 0
0x100: GOTO 0x186

0x101: Pop(0); Push(Stack[-23] * Stack[-23]);
0x102: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0x103: IF (Stack[-1] == 0) GOTO 0x17e; Pop(1)

0x104: @@ GetPFPosition(Stack[-3])
0x105: Pop(0)
0x106: @ CanReachByPF(Stack[-2], Stack[-3])
0x107: Pop(0)
0x108: Pop(0); Push((bool) Stack[-2] == 0)
0x109: IF (Stack[-1] == 0) GOTO 0x119; Pop(1)

0x10a: PushEmpty(bool, object, float, float, bool, bool)
0x10b: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0x10c: Stack[-4] = Stack[-17]
0x10d: Stack[-3] = (float) 10000.0
0x10e: Stack[-2] = (bool) 1
0x10f: Stack[-1] = (bool) 0
0x110: Push(-6, 3); TaskCall(2)
0x111: Call2 0x349

0x112: Pop(-6, 3); TaskReturn
0x113: Pop(5)
0x114: Pop(1); Push((bool) Stack[-1] == 0)
0x115: IF (Stack[-1] == 0) GOTO 0x117; Pop(1)

0x116: GOTO 0x187

0x117: Stack[-7] = (bool) 0
0x118: GOTO 0xdb

0x119: Pop(0); Push((bool) Stack[-7] == 0)
0x11a: IF (Stack[-1] == 0) GOTO 0x132; Pop(1)

0x11b: PushEmpty(object)
0x11c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x11d: Call2 0x60b

0x11e: Pop(1)
0x11f: Push("all")
0x120: Push("attack_on")
0x121: @ PlayAnimation(Stack[-2], Stack[-1])
0x122: Pop(2)
0x123: @ WaitForAnimEnd()
0x124: Pop(0)
0x125: PushEmpty()
0x126: Call2 0x335

0x127: Pop(0)
0x128: @ StopAsync()
0x129: Pop(0)
0x12a: Stack[-7] = (bool) 1
0x12b: PushEmpty(bool, object)
0x12c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x12d: Call2 0x575

0x12e: Pop(1)
0x12f: Pop(1); Push((bool) Stack[-1] == 0)
0x130: IF (Stack[-1] == 0) GOTO 0x132; Pop(1)

0x131: GOTO 0x187

0x132: @ rand(Stack[-1])
0x133: Pop(0)
0x134: PushEmpty(bool)
0x135: Stack[-1] = (bool) 1
0x136: Push((float)0.25)
0x137: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x138: IF (Stack[-1] == 0) GOTO 0x13e; Pop(1)

0x139: PushEmpty(bool)
0x13a: Call2 0x30a

0x13b: Pop(0)
0x13c: IF (Stack[-1] == 0) GOTO 0x13e; Pop(1)

0x13d: Stack[-1] = (bool) 0
0x13e: IF (Stack[-1] == 0) GOTO 0x14f; Pop(1)

0x13f: @ Face(Stack[-0])
0x140: Pop(0)
0x141: PushEmpty()
0x142: Call2 0x33c

0x143: Pop(0)
0x144: Push("all")
0x145: Push("attack_stay")
0x146: @ PlayAnimation(Stack[-2], Stack[-1])
0x147: Pop(2)
0x148: PushEmpty(bool, float)
0x149: Stack[-1] = Stack[-25]
0x14a: Call2 0x286

0x14b: Pop(2)
0x14c: @ StopAsync()
0x14d: Pop(0)
0x14e: GOTO 0x17d

0x14f: @ Face(Stack[-0])
0x150: Pop(0)
0x151: Push("all")
0x152: Push("fjump")
0x153: @ PlayAnimation(Stack[-2], Stack[-1])
0x154: Pop(2)
0x155: @ WaitForAnimEnd()
0x156: Pop(0)
0x157: PushEmpty()
0x158: Call2 0x335

0x159: Pop(0)
0x15a: Push(CVector(0.0, 0.0, 0.0))
0x15b: @ SetSpeed(Stack[-1])
0x15c: Pop(1)
0x15d: @ Stop()
0x15e: Pop(0)
0x15f: @ StopAsync()
0x160: Pop(0)
0x161: PushEmpty(bool)
0x162: Call2 0x30a

0x163: Pop(0)
0x164: Pop(1); Push((bool) Stack[-1] == 0)
0x165: IF (Stack[-1] == 0) GOTO 0x17d; Pop(1)

0x166: PushEmpty(bool, object)
0x167: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x168: Call2 0x575

0x169: Pop(1)
0x16a: Pop(1); Push((bool) Stack[-1] == 0)
0x16b: IF (Stack[-1] == 0) GOTO 0x16d; Pop(1)

0x16c: GOTO 0x187

0x16d: @@ GetPFPosition(Stack[-10])
0x16e: Pop(0)
0x16f: @ GetPFPosition(Stack[-9])
0x170: Pop(0)
0x171: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0x172: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x173: Pop(0); Push(Stack[-23] * Stack[-23]);
0x174: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x175: IF (Stack[-1] == 0) GOTO 0x17d; Pop(1)

0x176: PushEmpty(bool, float)
0x177: Stack[-1] = Stack[-25]
0x178: Call2 0x1e2

0x179: Pop(1)
0x17a: Pop(1); Push((bool) Stack[-1] == 0)
0x17b: IF (Stack[-1] == 0) GOTO 0x17d; Pop(1)

0x17c: GOTO 0x187

0x17d: GOTO 0x186

0x17e: PushEmpty(bool, float)
0x17f: Stack[-1] = Stack[-25]
0x180: Call2 0x1e2

0x181: Pop(1)
0x182: Pop(1); Push((bool) Stack[-1] == 0)
0x183: IF (Stack[-1] == 0) GOTO 0x185; Pop(1)

0x184: GOTO 0x187

0x185: Stack[-7] = (bool) 1
0x186: GOTO 0xdb

0x187: @ WaitForAnimEnd()
0x188: Pop(0)
0x189: Push( Stack[3 + Tasks[-1].StackPointer] )
0x18a: IF (Stack[-1] == 0) GOTO 0x18c; Pop(1)

0x18b: Return(); Pop(22)

0x18c: Push("all")
0x18d: Push("attack_off")
0x18e: @ PlayAnimation(Stack[-2], Stack[-1])
0x18f: Pop(2)
0x190: @ WaitForAnimEnd()
0x191: Pop(0)
0x192: Push(Stack[-8])
0x193: IF (Stack[-1] == 0) GOTO 0x197; Pop(1)

0x194: Push((float)2.0)
0x195: @ Sleep(Stack[-1])
0x196: Pop(1)
0x197: Return(); Pop(22)

0x198: PushEmpty(bool, bool, cvector, bool, bool, cvector)
0x199: Stack[1 + Tasks[-1].StackPointer] = (int)0
0x19a: Push("all")
0x19b: Push("attack_begin")
0x19c: Push((int) 1)
0x19d: Pop(1); Push(Stack[1 + StackPtr] + Stack[-1]);
0x19e: Pop(2); Push(Stack[-2] + Stack[-1]);
0x19f: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0x1a0: Pop(2)
0x1a1: Pop(0); Push((bool) Stack[-3] == 0)
0x1a2: IF (Stack[-1] == 0) GOTO 0x1a4; Pop(1)

0x1a3: GOTO 0x1a7

0x1a4: Push((int) 1)
0x1a5: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x1a6: GOTO 0x19a

0x1a7: Stack[2 + Tasks[-1].StackPointer] = (int)0
0x1a8: Push("attack")
0x1a9: Push((int) 1)
0x1aa: Pop(1); Push(Stack[2 + StackPtr] + Stack[-1]);
0x1ab: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1ac: @ IsExisting3DSound(Stack[-3], Stack[-1])
0x1ad: Pop(1)
0x1ae: Pop(0); Push((bool) Stack[-2] == 0)
0x1af: IF (Stack[-1] == 0) GOTO 0x1b1; Pop(1)

0x1b0: GOTO 0x1b4

0x1b1: Push((int) 1)
0x1b2: Stack[2 + Tasks[-1].StackPointer] = Stack[2 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x1b3: GOTO 0x1a8

0x1b4: Push("all")
0x1b5: Push("bjump")
0x1b6: @ GetAnimationOffset(Stack[-3], Stack[-2], Stack[-1])
0x1b7: Pop(2)
0x1b8: Push(CvectorIndex(Stack[-1], 2))
0x1b9: Stack[4 + Tasks[-1].StackPointer] = -Stack[-1]; Pop(1);
0x1ba: Return(); Pop(6)

0x1bb: PushEmpty(object, float, float, object, float, float)
0x1bc: Push((float)0.9)
0x1bd: Pop(1); Push(Stack[-9] * Stack[-1]);
0x1be: @ GetVictim(Stack[-1], Stack[-4])
0x1bf: Pop(1)
0x1c0: @ ReportAttack(Stack[-0])
0x1c1: Pop(0)
0x1c2: Pop(0); Push((bool) Stack[-3] == Stack[0 + Tasks[-1].StackPointer])
0x1c3: IF (Stack[-1] == 0) GOTO 0x1e0; Pop(1)

0x1c4: PushEmpty(float, object, int)
0x1c5: Stack[-2] = Stack[-6]
0x1c6: Stack[-1] = Stack[-10]
0x1c7: Call2 0xad

0x1c8: Stack[-5] = Stack[-3]
0x1c9: Pop(3)
0x1ca: PushEmpty(float, object, float, int)
0x1cb: Stack[-3] = Stack[-7]
0x1cc: Stack[-2] = Stack[-6]
0x1cd: PushEmpty(int, object, int)
0x1ce: Stack[-2] = Stack[-10]
0x1cf: Stack[-1] = Stack[-14]
0x1d0: Call2 0xb0

0x1d1: Stack[-4] = Stack[-3]
0x1d2: Pop(3)
0x1d3: Call2 0x503

0x1d4: Stack[-5] = Stack[-4]
0x1d5: Pop(4)
0x1d6: PushEmpty(int)
0x1d7: Call2 0x33a

0x1d8: Pop(0)
0x1d9: @ ReportHit(Stack[-0], Stack[-1], Stack[-2], Stack[-3])
0x1da: Pop(1)
0x1db: PushEmpty(object, float)
0x1dc: Stack[-2] = Stack[-5]
0x1dd: Stack[-1] = Stack[-3]
0x1de: Call2 0x341

0x1df: Pop(2)
0x1e0: Return(); Pop(6)

0x1e1: Stack[-3] = 0
0x1e2: PushEmpty(int, bool, int, string, int, bool, int, string)
0x1e3: PushEmpty()
0x1e4: Call2 0x335

0x1e5: Pop(0)
0x1e6: @ irand(Stack[-4], Stack[-1])
0x1e7: Pop(0)
0x1e8: Push((int) 1)
0x1e9: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x1ea: @ Face(Stack[-0])
0x1eb: Pop(0)
0x1ec: Push((bool) 1)
0x1ed: @ SetAttackState(Stack[-1])
0x1ee: Pop(1)
0x1ef: PushEmpty()
0x1f0: Call2 0x684

0x1f1: Pop(0)
0x1f2: Push("all")
0x1f3: Push("attack_begin")
0x1f4: Pop(1); Push(Stack[-1] + Stack[-6]);
0x1f5: @ PlayAnimation(Stack[-2], Stack[-1])
0x1f6: Pop(2)
0x1f7: @ WaitForAnimEnd()
0x1f8: Pop(0)
0x1f9: PushEmpty()
0x1fa: Call2 0x315

0x1fb: Pop(0)
0x1fc: PushEmpty(bool, object)
0x1fd: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1fe: Call2 0x575

0x1ff: Pop(1)
0x200: Pop(1); Push((bool) Stack[-1] == 0)
0x201: IF (Stack[-1] == 0) GOTO 0x206; Pop(1)

0x202: @ StopAsync()
0x203: Pop(0)
0x204: Stack[-10] = (bool) 0
0x205: Return(); Pop(8)

0x206: PushEmpty(float, int)
0x207: Stack[-2] = Stack[-11]
0x208: Stack[-1] = Stack[-6]
0x209: Call2 0x1bb

0x20a: Pop(2)
0x20b: Push("all")
0x20c: Push("attack_middle")
0x20d: Pop(1); Push(Stack[-1] + Stack[-6]);
0x20e: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0x20f: Pop(2)
0x210: Push(Stack[-3])
0x211: IF (Stack[-1] == 0) GOTO 0x257; Pop(1)

0x212: PushEmpty()
0x213: Call2 0x684

0x214: Pop(0)
0x215: Push("all")
0x216: Push("attack_middle")
0x217: Pop(1); Push(Stack[-1] + Stack[-6]);
0x218: @ PlayAnimation(Stack[-2], Stack[-1])
0x219: Pop(2)
0x21a: @ WaitForAnimEnd()
0x21b: Pop(0)
0x21c: PushEmpty()
0x21d: Call2 0x335

0x21e: Pop(0)
0x21f: PushEmpty(bool, object)
0x220: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x221: Call2 0x575

0x222: Pop(1)
0x223: Pop(1); Push((bool) Stack[-1] == 0)
0x224: IF (Stack[-1] == 0) GOTO 0x229; Pop(1)

0x225: @ StopAsync()
0x226: Pop(0)
0x227: Stack[-10] = (bool) 0
0x228: Return(); Pop(8)

0x229: PushEmpty(float, int)
0x22a: Stack[-2] = Stack[-11]
0x22b: Stack[-1] = Stack[-6]
0x22c: Call2 0x1bb

0x22d: Pop(2)
0x22e: Stack[-2] = (int) 1
0x22f: Push("attack_middle")
0x230: Pop(1); Push(Stack[-1] + Stack[-5]);
0x231: Push("_")
0x232: Pop(2); Push(Stack[-2] + Stack[-1]);
0x233: Stack[-2] = Stack[-1] + Stack[-3]; Pop(1);
0x234: Push("all")
0x235: @ HasAnimation(Stack[-4], Stack[-1], Stack[-2])
0x236: Pop(1)
0x237: Pop(0); Push((bool) Stack[-3] == 0)
0x238: IF (Stack[-1] == 0) GOTO 0x23a; Pop(1)

0x239: GOTO 0x257

0x23a: PushEmpty()
0x23b: Call2 0x684

0x23c: Pop(0)
0x23d: Push("all")
0x23e: @ PlayAnimation(Stack[-1], Stack[-2])
0x23f: Pop(1)
0x240: @ WaitForAnimEnd()
0x241: Pop(0)
0x242: PushEmpty()
0x243: Call2 0x335

0x244: Pop(0)
0x245: PushEmpty(bool, object)
0x246: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x247: Call2 0x575

0x248: Pop(1)
0x249: Pop(1); Push((bool) Stack[-1] == 0)
0x24a: IF (Stack[-1] == 0) GOTO 0x24f; Pop(1)

0x24b: @ StopAsync()
0x24c: Pop(0)
0x24d: Stack[-10] = (bool) 0
0x24e: Return(); Pop(8)

0x24f: PushEmpty(float, int)
0x250: Stack[-2] = Stack[-11]
0x251: Stack[-1] = Stack[-6]
0x252: Call2 0x1bb

0x253: Pop(2)
0x254: Push((int) 1)
0x255: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x256: GOTO 0x22f

0x257: Push((bool) 0)
0x258: @ SetAttackState(Stack[-1])
0x259: Pop(1)
0x25a: Push("all")
0x25b: Push("attack_end")
0x25c: Pop(1); Push(Stack[-1] + Stack[-6]);
0x25d: @ PlayAnimation(Stack[-2], Stack[-1])
0x25e: Pop(2)
0x25f: PushEmpty(bool)
0x260: Call2 0x343

0x261: Pop(0)
0x262: IF (Stack[-1] == 0) GOTO 0x269; Pop(1)

0x263: PushEmpty(bool, float)
0x264: Stack[-1] = (float) 0.75
0x265: Call2 0x26b

0x266: Pop(2)
0x267: @ StopAsync()
0x268: Pop(0)
0x269: Stack[-10] = (bool) 1
0x26a: Return(); Pop(8)

0x26b: PushEmpty(float, bool, float, bool)
0x26c: @ rand(Stack[-2])
0x26d: Pop(0)
0x26e: Pop(0); Push((bool) Stack[-2] < Stack[-5])
0x26f: IF (Stack[-1] == 0) GOTO 0x27f; Pop(1)

0x270: @ IsAnimationPlaying(Stack[-1])
0x271: Pop(0)
0x272: Pop(0); Push((bool) Stack[-1] == 0)
0x273: IF (Stack[-1] == 0) GOTO 0x275; Pop(1)

0x274: GOTO 0x27e

0x275: PushEmpty(bool)
0x276: Call2 0x2cd

0x277: Pop(0)
0x278: IF (Stack[-1] == 0) GOTO 0x27b; Pop(1)

0x279: Stack[-6] = (bool) 1
0x27a: Return(); Pop(4)

0x27b: @ sync()
0x27c: Pop(0)
0x27d: GOTO 0x270

0x27e: GOTO 0x284

0x27f: @ WaitForAnimEnd()
0x280: Pop(0)
0x281: PushEmpty()
0x282: Call2 0x335

0x283: Pop(0)
0x284: Stack[-6] = (bool) 0
0x285: Return(); Pop(4)

0x286: PushEmpty(bool, cvector, cvector, cvector, float, bool, cvector, cvector, cvector, float)
0x287: @ IsAnimationPlaying(Stack[-5])
0x288: Pop(0)
0x289: Pop(0); Push((bool) Stack[-5] == 0)
0x28a: IF (Stack[-1] == 0) GOTO 0x28c; Pop(1)

0x28b: GOTO 0x2ac

0x28c: PushEmpty(bool)
0x28d: Call2 0x2cd

0x28e: Pop(0)
0x28f: IF (Stack[-1] == 0) GOTO 0x292; Pop(1)

0x290: Stack[-12] = (bool) 1
0x291: Return(); Pop(10)

0x292: PushEmpty(bool, object)
0x293: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x294: Call2 0x575

0x295: Pop(1)
0x296: Pop(1); Push((bool) Stack[-1] == 0)
0x297: IF (Stack[-1] == 0) GOTO 0x29a; Pop(1)

0x298: Stack[-12] = (bool) 0
0x299: Return(); Pop(10)

0x29a: @@ GetPFPosition(Stack[-4])
0x29b: Pop(0)
0x29c: @ GetPFPosition(Stack[-3])
0x29d: Pop(0)
0x29e: Stack[-2] = Stack[-4] - Stack[-3]; Pop(0);
0x29f: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x2a0: Pop(0); Push(Stack[-11] * Stack[-11]);
0x2a1: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x2a2: IF (Stack[-1] == 0) GOTO 0x2a9; Pop(1)

0x2a3: PushEmpty(bool, float)
0x2a4: Stack[-1] = Stack[-13]
0x2a5: Call2 0x1e2

0x2a6: Pop(2)
0x2a7: Stack[-12] = (bool) 1
0x2a8: Return(); Pop(10)

0x2a9: @ sync()
0x2aa: Pop(0)
0x2ab: GOTO 0x287

0x2ac: PushEmpty()
0x2ad: Call2 0x335

0x2ae: Pop(0)
0x2af: Stack[-12] = (bool) 0
0x2b0: Return(); Pop(10)

0x2b1: PushEmpty(cvector, cvector, cvector, float, float, cvector, cvector, cvector, float, float)
0x2b2: PushEmpty(bool, object)
0x2b3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2b4: Call2 0x575

0x2b5: Pop(1)
0x2b6: Pop(1); Push((bool) Stack[-1] == 0)
0x2b7: IF (Stack[-1] == 0) GOTO 0x2ba; Pop(1)

0x2b8: Stack[-11] = (bool) 0
0x2b9: Return(); Pop(10)

0x2ba: PushEmpty(bool)
0x2bb: Call2 0x30a

0x2bc: Pop(0)
0x2bd: IF (Stack[-1] == 0) GOTO 0x2cb; Pop(1)

0x2be: @@ GetPFPosition(Stack[-5])
0x2bf: Pop(0)
0x2c0: @ GetPFPosition(Stack[-4])
0x2c1: Pop(0)
0x2c2: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x2c3: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x2c4: @@ GetAttackDistance(Stack[-1])
0x2c5: Pop(0)
0x2c6: Push((int) 50)
0x2c7: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x2c8: Pop(0); Push(Stack[-1] * Stack[-1]);
0x2c9: Stack[-12] = Stack[-3] <= Stack[-1]; Pop(1);
0x2ca: Return(); Pop(10)

0x2cb: Stack[-11] = (bool) 0
0x2cc: Return(); Pop(10)

0x2cd: PushEmpty(bool)
0x2ce: Stack[-1] = (bool) 0
0x2cf: PushEmpty(bool)
0x2d0: Call2 0x2b1

0x2d1: Pop(0)
0x2d2: IF (Stack[-1] == 0) GOTO 0x2d8; Pop(1)

0x2d3: PushEmpty(bool)
0x2d4: Call2 0x2dd

0x2d5: Pop(0)
0x2d6: IF (Stack[-1] == 0) GOTO 0x2d8; Pop(1)

0x2d7: Stack[-1] = (bool) 1
0x2d8: IF (Stack[-1] == 0) GOTO 0x2db; Pop(1)

0x2d9: Stack[-1] = (bool) 1
0x2da: Return(); Pop(0)

0x2db: Stack[-1] = (bool) 0
0x2dc: Return(); Pop(0)

0x2dd: PushEmpty(object, bool, float, cvector, cvector, object, bool, float, cvector, cvector)
0x2de: @ GetScene(Stack[-5])
0x2df: Pop(0)
0x2e0: Stack[-4] = (bool) 0
0x2e1: PushEmpty(cvector, object)
0x2e2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2e3: Call2 0x4eb

0x2e4: Pop(1)
0x2e5: Pop(1); Push(( -Stack[-1])
0x2e6: @ FindDirLength(Stack[-4], Stack[-1], Stack[-4])
0x2e7: Pop(1)
0x2e8: Pop(0); Push((bool) Stack[-3] < Stack[4 + Tasks[-1].StackPointer])
0x2e9: IF (Stack[-1] == 0) GOTO 0x2eb; Pop(1)

0x2ea: GOTO 0x307

0x2eb: @ Face(Stack[-0])
0x2ec: Pop(0)
0x2ed: Push("all")
0x2ee: Push("bjump")
0x2ef: @ PlayAnimation(Stack[-2], Stack[-1])
0x2f0: Pop(2)
0x2f1: @@ GetPFPosition(Stack[-2])
0x2f2: Pop(0)
0x2f3: @ GetPFPosition(Stack[-1])
0x2f4: Pop(0)
0x2f5: @ WaitForAnimEnd()
0x2f6: Pop(0)
0x2f7: PushEmpty()
0x2f8: Call2 0x335

0x2f9: Pop(0)
0x2fa: @ StopAsync()
0x2fb: Pop(0)
0x2fc: Push(CVector(0.0, 0.0, 0.0))
0x2fd: @ SetSpeed(Stack[-1])
0x2fe: Pop(1)
0x2ff: Stack[-4] = (bool) 1
0x300: PushEmpty(bool)
0x301: Call2 0x2b1

0x302: Pop(0)
0x303: Pop(1); Push((bool) Stack[-1] == 0)
0x304: IF (Stack[-1] == 0) GOTO 0x306; Pop(1)

0x305: GOTO 0x307

0x306: GOTO 0x2e1

0x307: Stack[-11] = Stack[-4]
0x308: Return(); Pop(10)

0x309: Stack[-5] = 0
0x30a: PushEmpty(bool, bool)
0x30b: Push("IsAttacking")
0x30c: Push((int) 1)
0x30d: Pop(2); Push(IsFuncExist(Stack[0 + Tasks[-1].StackPointer], Stack[-2], Stack[-1]))
0x30e: IF (Stack[-1] == 0) GOTO 0x313; Pop(1)

0x30f: @@ IsAttacking(Stack[-1])
0x310: Pop(0)
0x311: Stack[-3] = Stack[-1]
0x312: Return(); Pop(2)

0x313: Stack[-3] = (bool) 0
0x314: Return(); Pop(2)

0x315: PushEmpty(float, int, float, int)
0x316: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x317: IF (Stack[-1] == 0) GOTO 0x319; Pop(1)

0x318: Return(); Pop(4)

0x319: Push( Stack[5 + Tasks[-1].StackPointer] )
0x31a: IF (Stack[-1] == 0) GOTO 0x321; Pop(1)

0x31b: Push((int) -1)
0x31c: Stack[5 + Tasks[-1].StackPointer] = Stack[5 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x31d: Push((int) 0)
0x31e: Pop(1); Push((bool) Stack[5 + Tasks[-1].StackPointer] > Stack[-1])
0x31f: IF (Stack[-1] == 0) GOTO 0x321; Pop(1)

0x320: Return(); Pop(4)

0x321: @ rand(Stack[-2])
0x322: Pop(0)
0x323: PushEmpty(float)
0x324: Call2 0x347

0x325: Pop(0)
0x326: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x327: IF (Stack[-1] == 0) GOTO 0x334; Pop(1)

0x328: @ irand(Stack[-1], Stack[-2])
0x329: Pop(0)
0x32a: Push((int) 1)
0x32b: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x32c: Push("attack")
0x32d: Pop(1); Push(Stack[-1] + Stack[-2]);
0x32e: @ Speak(Stack[-1])
0x32f: Pop(1)
0x330: PushEmpty(int)
0x331: Call2 0x345

0x332: Stack[5 + Tasks[-1].StackPointer] = Stack[-1]
0x333: Pop(1)
0x334: Return(); Pop(4)

0x335: PushEmpty(object)
0x336: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x337: Call2 0x67b

0x338: Pop(1)
0x339: Return(); Pop(0)

0x33a: Stack[-1] = (int) 0
0x33b: Return(); Pop(0)

0x33c: PushEmpty(string)
0x33d: Stack[-1] = "attack_stay"
0x33e: Call2 0x626

0x33f: Pop(1)
0x340: Return(); Pop(0)

0x341: PushEmpty()
0x342: Return(); Pop(0)

0x343: Stack[-1] = (bool) 1
0x344: Return(); Pop(0)

0x345: Stack[-1] = (int) 1
0x346: Return(); Pop(0)

0x347: Stack[-1] = (float) 0.5
0x348: Return(); Pop(0)

0x349: PushEmpty(bool, bool, bool, bool)
0x34a: PushEmpty(object)
0x34b: Stack[-1] = Stack[-10]
0x34c: Call2 0x67b

0x34d: Pop(1)
0x34e: Push((int) 1)
0x34f: Push((int) 5)
0x350: @ SetTimer(Stack[-2], Stack[-1])
0x351: Pop(2)
0x352: @ CanSee(Stack[-2], Stack[-9])
0x353: Pop(0)
0x354: Push(Stack[-2])
0x355: IF (Stack[-1] == 0) GOTO 0x35c; Pop(1)

0x356: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x357: PushEmpty(object)
0x358: Stack[-1] = Stack[-10]
0x359: Call2 0x61b

0x35a: Pop(1)
0x35b: GOTO 0x35d

0x35c: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x35d: PushEmpty(bool, object)
0x35e: Stack[-1] = Stack[-11]
0x35f: Call2 0x4f2

0x360: Pop(1)
0x361: IF (Stack[-1] == 0) GOTO 0x367; Pop(1)

0x362: PushEmpty(object)
0x363: Call2 0x64f

0x364: Pop(0)
0x365: @ SendPlayerEnemy(Stack[-10], Stack[-1])
0x366: Pop(1)
0x367: PushEmpty(bool, object, float, float, bool, bool)
0x368: Stack[-5] = Stack[-15]
0x369: Stack[-4] = Stack[-14]
0x36a: Stack[-3] = Stack[-13]
0x36b: Stack[-2] = Stack[-12]
0x36c: Stack[-1] = Stack[-11]
0x36d: Call2 0x3b2

0x36e: Stack[-7] = Stack[-6]
0x36f: Pop(6)
0x370: Push( Stack[2 + Tasks[-1].StackPointer] )
0x371: IF (Stack[-1] == 0) GOTO 0x375; Pop(1)

0x372: Push("head")
0x373: @ UnlookAsync(Stack[-1])
0x374: Pop(1)
0x375: Push((int) 1)
0x376: @ KillTimer(Stack[-1])
0x377: Pop(1)
0x378: Stack[-10] = Stack[-1]
0x379: Return(); Pop(4)

0x37a: PushEmpty()
0x37b: Push((int) 1)
0x37c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x37d: IF (Stack[-1] == 0) GOTO 0x383; Pop(1)

0x37e: PushEmpty(object)
0x37f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x380: Call2 0x67b

0x381: Pop(1)
0x382: GOTO 0x387

0x383: PushEmpty(int)
0x384: Stack[-1] = Stack[-2]
0x385: Call2 0x418

0x386: Pop(1)
0x387: Return(); Pop(0)

0x388: Push((int) 1)
0x389: @ KillTimer(Stack[-1])
0x38a: Pop(1)
0x38b: Push( Stack[2 + Tasks[-1].StackPointer] )
0x38c: IF (Stack[-1] == 0) GOTO 0x391; Pop(1)

0x38d: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x38e: Push("head")
0x38f: @ UnlookAsync(Stack[-1])
0x390: Pop(1)
0x391: PushEmpty()
0x392: Call2 0x42e

0x393: Pop(0)
0x394: Return(); Pop(0)

0x395: PushEmpty()
0x396: PushEmpty(bool)
0x397: Stack[-1] = (bool) 0
0x398: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0x399: IF (Stack[-1] == 0) GOTO 0x39d; Pop(1)

0x39a: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x39b: IF (Stack[-1] == 0) GOTO 0x39d; Pop(1)

0x39c: Stack[-1] = (bool) 1
0x39d: IF (Stack[-1] == 0) GOTO 0x3a3; Pop(1)

0x39e: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x39f: PushEmpty(object)
0x3a0: Stack[-1] = Stack[-2]
0x3a1: Call2 0x61b

0x3a2: Pop(1)
0x3a3: Return(); Pop(0)

0x3a4: PushEmpty()
0x3a5: PushEmpty(bool)
0x3a6: Stack[-1] = (bool) 0
0x3a7: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0x3a8: IF (Stack[-1] == 0) GOTO 0x3ac; Pop(1)

0x3a9: Push( Stack[2 + Tasks[-1].StackPointer] )
0x3aa: IF (Stack[-1] == 0) GOTO 0x3ac; Pop(1)

0x3ab: Stack[-1] = (bool) 1
0x3ac: IF (Stack[-1] == 0) GOTO 0x3b1; Pop(1)

0x3ad: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x3ae: Push("head")
0x3af: @ UnlookAsync(Stack[-1])
0x3b0: Pop(1)
0x3b1: Return(); Pop(0)

0x3b2: PushEmpty(bool, bool, object, cvector, cvector, cvector, float, object, bool, bool, object, cvector, cvector, cvector, float, object)
0x3b3: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x3b4: Stack[1 + Tasks[-1].StackPointer] = Stack[-21]
0x3b5: Stack[-7] = Stack[-17]
0x3b6: PushEmpty(bool, object)
0x3b7: Stack[-1] = Stack[-23]
0x3b8: Call2 0x43e

0x3b9: Pop(1)
0x3ba: Pop(1); Push((bool) Stack[-1] == 0)
0x3bb: IF (Stack[-1] == 0) GOTO 0x3be; Pop(1)

0x3bc: Stack[-22] = (bool) 0
0x3bd: Return(); Pop(16)

0x3be: @@ GetPosition(Stack[-5])
0x3bf: Pop(0)
0x3c0: @ GetPosition(Stack[-4])
0x3c1: Pop(0)
0x3c2: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x3c3: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x3c4: PushEmpty(bool)
0x3c5: Stack[-1] = (bool) 0
0x3c6: Push((int) 0)
0x3c7: Pop(1); Push((bool) Stack[-21] > Stack[-1])
0x3c8: IF (Stack[-1] == 0) GOTO 0x3cd; Pop(1)

0x3c9: Pop(0); Push(Stack[-20] * Stack[-20]);
0x3ca: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x3cb: IF (Stack[-1] == 0) GOTO 0x3cd; Pop(1)

0x3cc: Stack[-1] = (bool) 1
0x3cd: IF (Stack[-1] == 0) GOTO 0x3d2; Pop(1)

0x3ce: @ Stop()
0x3cf: Pop(0)
0x3d0: Stack[-22] = (bool) 0
0x3d1: Return(); Pop(16)

0x3d2: Pop(0); Push(Stack[-20] * Stack[-20]);
0x3d3: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x3d4: IF (Stack[-1] == 0) GOTO 0x410; Pop(1)

0x3d5: @@ GetPFPosition(Stack[-5])
0x3d6: Pop(0)
0x3d7: @ FindPathTo(Stack[-1], Stack[-5])
0x3d8: Pop(0)
0x3d9: Pop(0); Push(( Stack[-1] != 0 )
0x3da: IF (Stack[-1] == 0) GOTO 0x3dd; Pop(1)

0x3db: Stack[-6] = Stack[-1]
0x3dc: Stack[-1] = 0
0x3dd: Pop(0); Push(( Stack[-6] != 0 )
0x3de: IF (Stack[-1] == 0) GOTO 0x3fe; Pop(1)

0x3df: Push(Stack[-7])
0x3e0: IF (Stack[-1] == 0) GOTO 0x3e7; Pop(1)

0x3e1: Stack[-7] = (bool) 0
0x3e2: @ RotatePath(Stack[-6], Stack[-8])
0x3e3: Pop(0)
0x3e4: Pop(0); Push((bool) Stack[-8] == 0)
0x3e5: IF (Stack[-1] == 0) GOTO 0x3e7; Pop(1)

0x3e6: GOTO 0x416

0x3e7: Push((int) 0)
0x3e8: Push((float)0.3)
0x3e9: @ SetTimer(Stack[-2], Stack[-1])
0x3ea: Pop(2)
0x3eb: PushEmpty(string)
0x3ec: Call2 0x445

0x3ed: Pop(0)
0x3ee: PushEmpty(string)
0x3ef: Call2 0x447

0x3f0: Pop(0)
0x3f1: @ FollowPath(Stack[-8], Stack[-20], Stack[-10], Stack[-2], Stack[-1])
0x3f2: Pop(2)
0x3f3: Pop(0); Push((bool) Stack[-8] == 0)
0x3f4: IF (Stack[-1] == 0) GOTO 0x3fc; Pop(1)

0x3f5: Push( Stack[0 + Tasks[-1].StackPointer] )
0x3f6: IF (Stack[-1] == 0) GOTO 0x3fa; Pop(1)

0x3f7: Stack[-6] = 0
0x3f8: GOTO 0x416

0x3f9: GOTO 0x3fb

0x3fa: GOTO 0x415

0x3fb: GOTO 0x3fd

0x3fc: Stack[-6] = 0
0x3fd: GOTO 0x40e

0x3fe: Push((int) 0)
0x3ff: @ KillTimer(Stack[-1])
0x400: Pop(1)
0x401: Push((float)0.5)
0x402: @ Sleep(Stack[-1], Stack[-9])
0x403: Pop(1)
0x404: Pop(0); Push((bool) Stack[-8] == 0)
0x405: IF (Stack[-1] == 0) GOTO 0x40a; Pop(1)

0x406: Push( Stack[0 + Tasks[-1].StackPointer] )
0x407: IF (Stack[-1] == 0) GOTO 0x40a; Pop(1)

0x408: Stack[-6] = 0
0x409: GOTO 0x416

0x40a: Push((int) 0)
0x40b: Push((float)0.3)
0x40c: @ SetTimer(Stack[-2], Stack[-1])
0x40d: Pop(2)
0x40e: Stack[-1] = 0
0x40f: GOTO 0x414

0x410: Push((int) 0)
0x411: @ KillTimer(Stack[-1])
0x412: Pop(1)
0x413: GOTO 0x416

0x414: Stack[-6] = 0
0x415: GOTO 0x3b6

0x416: Stack[-22] = !Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x417: Return(); Pop(16)

0x418: PushEmpty()
0x419: Push((int) 0)
0x41a: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x41b: IF (Stack[-1] == 0) GOTO 0x41d; Pop(1)

0x41c: Return(); Pop(0)

0x41d: PushEmpty(bool, object)
0x41e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x41f: Call2 0x43e

0x420: Pop(1)
0x421: Pop(1); Push((bool) Stack[-1] == 0)
0x422: IF (Stack[-1] == 0) GOTO 0x424; Pop(1)

0x423: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x424: Push((int) 0)
0x425: @ KillTimer(Stack[-1])
0x426: Pop(1)
0x427: @ Stop()
0x428: Pop(0)
0x429: Return(); Pop(0)

0x42a: PushEmpty()
0x42b: @ RequestClearPath(Stack[-1])
0x42c: Pop(0)
0x42d: Return(); Pop(0)

0x42e: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x42f: Push((int) 0)
0x430: @ KillTimer(Stack[-1])
0x431: Pop(1)
0x432: @ Stop()
0x433: Pop(0)
0x434: Return(); Pop(0)

0x435: PushEmpty()
0x436: PushEmpty()
0x437: Call2 0x388

0x438: Pop(0)
0x439: PushEmpty(object)
0x43a: Stack[-1] = Stack[-2]
0x43b: Call2 0x71c

0x43c: Pop(1)
0x43d: Return(); Pop(0)

0x43e: PushEmpty()
0x43f: PushEmpty(bool, object)
0x440: Stack[-1] = Stack[-3]
0x441: Call2 0x575

0x442: Stack[-4] = Stack[-2]
0x443: Pop(2)
0x444: Return(); Pop(0)

0x445: Stack[-1] = "walk"
0x446: Return(); Pop(0)

0x447: Stack[-1] = "run"
0x448: Return(); Pop(0)

0x449: PushEmpty()
0x44a: EventDisable(0)
0x44b: PushEmpty(object)
0x44c: Stack[-1] = Stack[-2]
0x44d: Call2 0x462

0x44e: Pop(1)
0x44f: Push((int) 50)
0x450: Push((int) 40)
0x451: @ SetRTEnvelope(Stack[-2], Stack[-1])
0x452: Pop(2)
0x453: EventEnable(0)
0x454: @ Hold()
0x455: Pop(0)
0x456: GOTO 0x454

0x457: Return(); Pop(0)

0x458: PushEmpty(bool, bool)
0x459: @ IsOverrideActive(Stack[-1])
0x45a: Pop(0)
0x45b: Pop(0); Push((bool) Stack[-1] == 0)
0x45c: IF (Stack[-1] == 0) GOTO 0x461; Pop(1)

0x45d: PushEmpty(object)
0x45e: Stack[-1] = Stack[-4]
0x45f: Call2 0x6ad

0x460: Pop(1)
0x461: Return(); Pop(2)

0x462: PushEmpty(cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector, cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector)
0x463: Pop(0); Push((bool) Stack[-21] == 0)
0x464: IF (Stack[-1] == 0) GOTO 0x46a; Pop(1)

0x465: PushEmpty(string)
0x466: Stack[-1] = "fdie"
0x467: Call2 0x4bd

0x468: Pop(1)
0x469: GOTO 0x4bc

0x46a: @@ GetPosition(Stack[-10])
0x46b: Pop(0)
0x46c: @ GetPosition(Stack[-9])
0x46d: Pop(0)
0x46e: @ GetDirection(Stack[-8])
0x46f: Pop(0)
0x470: Stack[-7] = Stack[-9] - Stack[-10]; Pop(0);
0x471: Push(CvectorIndex(Stack[-7], 0))
0x472: Push(CvectorIndex(Stack[-9], 0))
0x473: Pop(2); Push(Stack[-2] * Stack[-1]);
0x474: Push(CvectorIndex(Stack[-8], 2))
0x475: Push(CvectorIndex(Stack[-10], 2))
0x476: Pop(2); Push(Stack[-2] * Stack[-1]);
0x477: Pop(2); Push(Stack[-2] + Stack[-1]);
0x478: Push((int) 0)
0x479: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x47a: IF (Stack[-1] == 0) GOTO 0x47d; Pop(1)

0x47b: Stack[-6] = "fdie"
0x47c: GOTO 0x47e

0x47d: Stack[-6] = "bdie"
0x47e: @ RemoveRTEnvelope()
0x47f: Pop(0)
0x480: @ SetDeathState()
0x481: Pop(0)
0x482: @ Stop()
0x483: Pop(0)
0x484: @ StopAsync()
0x485: Pop(0)
0x486: Stack[-5] = Stack[-21]
0x487: Push("GetScriptProperty")
0x488: Push((int) 2)
0x489: Pop(2); Push(IsFuncExist(Stack[-23], Stack[-2], Stack[-1]))
0x48a: IF (Stack[-1] == 0) GOTO 0x496; Pop(1)

0x48b: Push("Owner")
0x48c: @@ HasScriptProperty(Stack[-5], Stack[-1])
0x48d: Pop(1)
0x48e: Push(Stack[-4])
0x48f: IF (Stack[-1] == 0) GOTO 0x496; Pop(1)

0x490: Push("Owner")
0x491: @@ GetScriptProperty(Stack[-6], Stack[-1])
0x492: Pop(1)
0x493: Pop(0); Push((bool) Stack[-5] == 0)
0x494: IF (Stack[-1] == 0) GOTO 0x496; Pop(1)

0x495: Stack[-5] = Stack[-21]
0x496: Push("@GetEyesHeight")
0x497: Push((int) 1)
0x498: Pop(2); Push(IsFuncExist(Stack[-7], Stack[-2], Stack[-1]))
0x499: IF (Stack[-1] == 0) GOTO 0x4a5; Pop(1)

0x49a: @@ GetEyesHeight(Stack[-2])
0x49b: Pop(0)
0x49c: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x49d: Push(CvectorIndex(Stack[-1], 1))
0x49e: Stack[-1] = Stack[-3]
0x49f: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x4a0: Push("head")
0x4a1: @ LookAsync(Stack[-22], Stack[-1], Stack[-2])
0x4a2: Pop(1)
0x4a3: Stack[-3] = (bool) 1
0x4a4: GOTO 0x4a6

0x4a5: Stack[-3] = (bool) 0
0x4a6: PushEmpty(string)
0x4a7: Stack[-1] = Stack[-7]
0x4a8: Call2 0x626

0x4a9: Pop(1)
0x4aa: Push("all")
0x4ab: @ PlayAnimation(Stack[-1], Stack[-7])
0x4ac: Pop(1)
0x4ad: @ WaitForAnimEnd()
0x4ae: Pop(0)
0x4af: Push(Stack[-3])
0x4b0: IF (Stack[-1] == 0) GOTO 0x4b6; Pop(1)

0x4b1: @ StopAsync()
0x4b2: Pop(0)
0x4b3: Push("head")
0x4b4: @ UnlookAsync(Stack[-1])
0x4b5: Pop(1)
0x4b6: Push("all")
0x4b7: @ LockAnimationEnd(Stack[-1], Stack[-7])
0x4b8: Pop(1)
0x4b9: @ RemoveEnvelope()
0x4ba: Pop(0)
0x4bb: Stack[-5] = 0
0x4bc: Return(); Pop(20)

0x4bd: PushEmpty()
0x4be: @ RemoveRTEnvelope()
0x4bf: Pop(0)
0x4c0: @ SetDeathState()
0x4c1: Pop(0)
0x4c2: @ Stop()
0x4c3: Pop(0)
0x4c4: @ StopAsync()
0x4c5: Pop(0)
0x4c6: @ StopSecondaryAnimation()
0x4c7: Pop(0)
0x4c8: PushEmpty(string)
0x4c9: Stack[-1] = Stack[-2]
0x4ca: Call2 0x626

0x4cb: Pop(1)
0x4cc: Push("all")
0x4cd: @ PlayAnimation(Stack[-1], Stack[-2])
0x4ce: Pop(1)
0x4cf: @ WaitForAnimEnd()
0x4d0: Pop(0)
0x4d1: Push("all")
0x4d2: @ LockAnimationEnd(Stack[-1], Stack[-2])
0x4d3: Pop(1)
0x4d4: @ RemoveEnvelope()
0x4d5: Pop(0)
0x4d6: Return(); Pop(0)

0x4d7: PushEmpty()
0x4d8: Return(); Pop(0)

0x4d9: PushEmpty()
0x4da: Return(); Pop(0)

0x4db: PushEmpty()
0x4dc: Return(); Pop(0)

0x4dd: PushEmpty()
0x4de: Push((int) 2)
0x4df: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4e0: IF (Stack[-1] == 0) GOTO 0x4e4; Pop(1)

0x4e1: Stack[-2] = "fire"
0x4e2: Return(); Pop(0)

0x4e3: GOTO 0x4e9

0x4e4: Push((int) 1)
0x4e5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4e6: IF (Stack[-1] == 0) GOTO 0x4e9; Pop(1)

0x4e7: Stack[-2] = "bullet"
0x4e8: Return(); Pop(0)

0x4e9: Stack[-2] = "phys"
0x4ea: Return(); Pop(0)

0x4eb: PushEmpty(cvector, cvector, cvector, cvector)
0x4ec: @ GetPosition(Stack[-2])
0x4ed: Pop(0)
0x4ee: @@ GetPosition(Stack[-1])
0x4ef: Pop(0)
0x4f0: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x4f1: Return(); Pop(4)

0x4f2: PushEmpty(bool, bool)
0x4f3: @ IsPlayerActor(Stack[-3], Stack[-1])
0x4f4: Pop(0)
0x4f5: Stack[-4] = Stack[-1]
0x4f6: Return(); Pop(2)

0x4f7: PushEmpty(bool, bool)
0x4f8: Push("HasProperty")
0x4f9: Push((int) 2)
0x4fa: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x4fb: Pop(1); Push((bool) Stack[-1] == 0)
0x4fc: IF (Stack[-1] == 0) GOTO 0x4ff; Pop(1)

0x4fd: Stack[-5] = (bool) 0
0x4fe: Return(); Pop(2)

0x4ff: @@ HasProperty(Stack[-3], Stack[-1])
0x500: Pop(0)
0x501: Stack[-5] = Stack[-1]
0x502: Return(); Pop(2)

0x503: PushEmpty(int, string, int, float, float, float, int, string, int, float, float, float)
0x504: PushEmpty(bool, object, string)
0x505: Stack[-2] = Stack[-18]
0x506: Stack[-1] = "health"
0x507: Call2 0x4f7

0x508: Pop(2)
0x509: Pop(1); Push((bool) Stack[-1] == 0)
0x50a: IF (Stack[-1] == 0) GOTO 0x50d; Pop(1)

0x50b: Stack[-16] = (float) 0.0
0x50c: Return(); Pop(12)

0x50d: PushEmpty(bool, object, string)
0x50e: Stack[-2] = Stack[-18]
0x50f: Stack[-1] = "armor"
0x510: Call2 0x4f7

0x511: Pop(2)
0x512: Pop(1); Push((bool) Stack[-1] == 0)
0x513: IF (Stack[-1] == 0) GOTO 0x516; Pop(1)

0x514: Stack[-6] = (int) 0
0x515: GOTO 0x519

0x516: Push("armor")
0x517: @@ GetProperty(Stack[-1], Stack[-7])
0x518: Pop(1)
0x519: Push("armor_")
0x51a: PushEmpty(string, int)
0x51b: Stack[-1] = Stack[-16]
0x51c: Call2 0x4dd

0x51d: Pop(1)
0x51e: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x51f: PushEmpty(bool, object, string)
0x520: Stack[-2] = Stack[-18]
0x521: Stack[-1] = Stack[-8]
0x522: Call2 0x4f7

0x523: Pop(2)
0x524: Pop(1); Push((bool) Stack[-1] == 0)
0x525: IF (Stack[-1] == 0) GOTO 0x528; Pop(1)

0x526: Stack[-4] = (int) 0
0x527: GOTO 0x52a

0x528: @@ GetProperty(Stack[-5], Stack[-4])
0x529: Pop(0)
0x52a: PushEmpty(float, float, float)
0x52b: Pop(0); Push(Stack[-9] + Stack[-7]);
0x52c: Push((float)100.0)
0x52d: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0x52e: Stack[-1] = (int) 1
0x52f: Call2 0x65f

0x530: Stack[-6] = Stack[-3]
0x531: Pop(3)
0x532: Push("health")
0x533: @@ GetProperty(Stack[-1], Stack[-3])
0x534: Pop(1)
0x535: Push((int) 1)
0x536: Pop(1); Push(Stack[-1] - Stack[-4]);
0x537: Stack[-2] = Stack[-15] * Stack[-1]; Pop(1);
0x538: Push("health")
0x539: PushEmpty(float, float, float, float)
0x53a: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0x53b: Stack[-2] = (int) 0
0x53c: Stack[-1] = (int) 1
0x53d: Call2 0x666

0x53e: Pop(3)
0x53f: @@ SetProperty(Stack[-2], Stack[-1])
0x540: Pop(2)
0x541: PushEmpty(bool, object)
0x542: Stack[-1] = Stack[-17]
0x543: Call2 0x4f2

0x544: Pop(1)
0x545: IF (Stack[-1] == 0) GOTO 0x54a; Pop(1)

0x546: PushEmpty(float)
0x547: Stack[-1] = -Stack[-2]; Pop(0);
0x548: Call2 0x671

0x549: Pop(1)
0x54a: Stack[-16] = Stack[-1]
0x54b: Return(); Pop(12)

0x54c: PushEmpty(bool, bool)
0x54d: @@ IsDead(Stack[-1])
0x54e: Pop(0)
0x54f: Stack[-4] = Stack[-1]
0x550: Return(); Pop(2)

0x551: PushEmpty(object, object, object, object)
0x552: Pop(0); Push((bool) Stack[-5] == 0)
0x553: IF (Stack[-1] == 0) GOTO 0x556; Pop(1)

0x554: Stack[-6] = (bool) 0
0x555: Return(); Pop(4)

0x556: PushEmpty(bool)
0x557: Stack[-1] = (bool) 0
0x558: Push("IsDead")
0x559: Push((int) 1)
0x55a: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x55b: IF (Stack[-1] == 0) GOTO 0x562; Pop(1)

0x55c: PushEmpty(bool, object)
0x55d: Stack[-1] = Stack[-8]
0x55e: Call2 0x54c

0x55f: Pop(1)
0x560: IF (Stack[-1] == 0) GOTO 0x562; Pop(1)

0x561: Stack[-1] = (bool) 1
0x562: IF (Stack[-1] == 0) GOTO 0x565; Pop(1)

0x563: Stack[-6] = (bool) 0
0x564: Return(); Pop(4)

0x565: @ GetScene(Stack[-2])
0x566: Pop(0)
0x567: Pop(0); Push((bool) Stack[-2] == 0)
0x568: IF (Stack[-1] == 0) GOTO 0x56b; Pop(1)

0x569: Stack[-6] = (bool) 0
0x56a: Return(); Pop(4)

0x56b: @@ GetScene(Stack[-1])
0x56c: Pop(0)
0x56d: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x56e: IF (Stack[-1] == 0) GOTO 0x571; Pop(1)

0x56f: Stack[-6] = (bool) 0
0x570: Return(); Pop(4)

0x571: Stack[-6] = (bool) 1
0x572: Return(); Pop(4)

0x573: Stack[-1] = 0
0x574: Stack[-2] = 0
0x575: PushEmpty(int, int)
0x576: PushEmpty(bool, object)
0x577: Stack[-1] = Stack[-5]
0x578: Call2 0x551

0x579: Pop(1)
0x57a: Pop(1); Push((bool) Stack[-1] == 0)
0x57b: IF (Stack[-1] == 0) GOTO 0x57e; Pop(1)

0x57c: Stack[-4] = (bool) 0
0x57d: Return(); Pop(2)

0x57e: PushEmpty(bool, object, string)
0x57f: Stack[-2] = Stack[-6]
0x580: Stack[-1] = "noaccess"
0x581: Call2 0x4f7

0x582: Pop(2)
0x583: Pop(1); Push((bool) Stack[-1] == 0)
0x584: IF (Stack[-1] == 0) GOTO 0x587; Pop(1)

0x585: Stack[-4] = (bool) 1
0x586: Return(); Pop(2)

0x587: Push("noaccess")
0x588: @@ GetProperty(Stack[-1], Stack[-2])
0x589: Pop(1)
0x58a: Push((int) 0)
0x58b: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x58c: Return(); Pop(2)

0x58d: PushEmpty(bool, int, cvector, cvector, cvector, cvector, string, bool, int, cvector, cvector, cvector, cvector, string)
0x58e: Pop(0); Push((bool) Stack[-15] == 0)
0x58f: IF (Stack[-1] == 0) GOTO 0x591; Pop(1)

0x590: Return(); Pop(14)

0x591: @ IsDead(Stack[-7])
0x592: Pop(0)
0x593: Push(Stack[-7])
0x594: IF (Stack[-1] == 0) GOTO 0x596; Pop(1)

0x595: Return(); Pop(14)

0x596: @ GetSecondaryAnimationType(Stack[-6])
0x597: Pop(0)
0x598: Push((int) 0)
0x599: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x59a: IF (Stack[-1] == 0) GOTO 0x59c; Pop(1)

0x59b: Return(); Pop(14)

0x59c: @@ GetPosition(Stack[-5])
0x59d: Pop(0)
0x59e: @ GetPosition(Stack[-4])
0x59f: Pop(0)
0x5a0: @ GetDirection(Stack[-3])
0x5a1: Pop(0)
0x5a2: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0x5a3: Push(CvectorIndex(Stack[-2], 0))
0x5a4: Push(CvectorIndex(Stack[-4], 0))
0x5a5: Pop(2); Push(Stack[-2] * Stack[-1]);
0x5a6: Push(CvectorIndex(Stack[-3], 2))
0x5a7: Push(CvectorIndex(Stack[-5], 2))
0x5a8: Pop(2); Push(Stack[-2] * Stack[-1]);
0x5a9: Pop(2); Push(Stack[-2] + Stack[-1]);
0x5aa: Push((int) 0)
0x5ab: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x5ac: IF (Stack[-1] == 0) GOTO 0x5af; Pop(1)

0x5ad: Stack[-1] = "fhit"
0x5ae: GOTO 0x5b0

0x5af: Stack[-1] = "bhit"
0x5b0: Push("hit_react")
0x5b1: Push("1")
0x5b2: Pop(1); Push(Stack[-3] + Stack[-1]);
0x5b3: Push("2")
0x5b4: Pop(1); Push(Stack[-4] + Stack[-1]);
0x5b5: Push((int) -10)
0x5b6: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x5b7: Pop(4)
0x5b8: Return(); Pop(14)

0x5b9: PushEmpty(cvector, object, int, bool, cvector, cvector, int, int, cvector, cvector, object, int, bool, cvector, cvector, int, int, cvector)
0x5ba: PushEmpty(bool)
0x5bb: Stack[-1] = (bool) 0
0x5bc: PushEmpty(bool)
0x5bd: Stack[-1] = (bool) 0
0x5be: Push(Stack[-23])
0x5bf: IF (Stack[-1] == 0) GOTO 0x5c4; Pop(1)

0x5c0: Push((int) 4)
0x5c1: Pop(1); Push((bool) Stack[-23] != Stack[-1])
0x5c2: IF (Stack[-1] == 0) GOTO 0x5c4; Pop(1)

0x5c3: Stack[-1] = (bool) 1
0x5c4: IF (Stack[-1] == 0) GOTO 0x5c9; Pop(1)

0x5c5: Push((int) 5)
0x5c6: Pop(1); Push((bool) Stack[-22] != Stack[-1])
0x5c7: IF (Stack[-1] == 0) GOTO 0x5c9; Pop(1)

0x5c8: Stack[-1] = (bool) 1
0x5c9: IF (Stack[-1] == 0) GOTO 0x5f8; Pop(1)

0x5ca: PushEmpty(cvector, cvector)
0x5cb: PushEmpty(cvector, object)
0x5cc: Stack[-1] = Stack[-25]
0x5cd: Call2 0x4eb

0x5ce: Stack[-3] = Stack[-2]
0x5cf: Pop(2)
0x5d0: Call2 0x655

0x5d1: Stack[-11] = Stack[-2]
0x5d2: Pop(2)
0x5d3: @ CreateVectorVector(Stack[-8])
0x5d4: Pop(0)
0x5d5: Stack[-7] = (int) 1
0x5d6: Push("hit")
0x5d7: Pop(1); Push(Stack[-1] + Stack[-8]);
0x5d8: @ GetGeometryLocator(Stack[-1], Stack[-7], Stack[-6], Stack[-5])
0x5d9: Pop(1)
0x5da: Pop(0); Push((bool) Stack[-6] == 0)
0x5db: IF (Stack[-1] == 0) GOTO 0x5dd; Pop(1)

0x5dc: GOTO 0x5e6

0x5dd: Pop(0); Push(Stack[-4] | Stack[-9]);
0x5de: Push((float)0.70711)
0x5df: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x5e0: IF (Stack[-1] == 0) GOTO 0x5e3; Pop(1)

0x5e1: @@ add(Stack[-5])
0x5e2: Pop(0)
0x5e3: Push((int) 1)
0x5e4: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x5e5: GOTO 0x5d6

0x5e6: @@ size(Stack[-3])
0x5e7: Pop(0)
0x5e8: Push(Stack[-3])
0x5e9: IF (Stack[-1] == 0) GOTO 0x5f7; Pop(1)

0x5ea: @ irand(Stack[-2], Stack[-3])
0x5eb: Pop(0)
0x5ec: @@ get(Stack[-1], Stack[-2])
0x5ed: Pop(0)
0x5ee: PushEmpty(object, int, float, cvector, cvector)
0x5ef: Stack[-5] = Stack[-26]
0x5f0: Stack[-4] = Stack[-25]
0x5f1: Stack[-3] = Stack[-24]
0x5f2: Stack[-2] = Stack[-6]
0x5f3: Stack[-1] = -Stack[-14]; Pop(0);
0x5f4: Call2 0x5fd

0x5f5: Pop(5)
0x5f6: Return(); Pop(18)

0x5f7: Stack[-8] = 0
0x5f8: PushEmpty(object)
0x5f9: Stack[-1] = Stack[-22]
0x5fa: Call2 0x58d

0x5fb: Pop(1)
0x5fc: Return(); Pop(18)

0x5fd: PushEmpty(object, object, object, object)
0x5fe: @ GetScene(Stack[-2])
0x5ff: Pop(0)
0x600: Push("scripted")
0x601: Push("blood_dir.xml")
0x602: @ AddActorByType(Stack[-3], Stack[-2], Stack[-4], Stack[-8], Stack[-7], Stack[-1])
0x603: Pop(2)
0x604: PushEmpty(object)
0x605: Stack[-1] = Stack[-10]
0x606: Call2 0x58d

0x607: Pop(1)
0x608: Return(); Pop(4)

0x609: Stack[-1] = 0
0x60a: Stack[-2] = 0
0x60b: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x60c: @@ GetPosition(Stack[-3])
0x60d: Pop(0)
0x60e: @ GetPosition(Stack[-2])
0x60f: Pop(0)
0x610: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0x611: Push(CvectorIndex(Stack[-1], 0))
0x612: Push(CvectorIndex(Stack[-2], 2))
0x613: @ RotateAsync(Stack[-2], Stack[-1])
0x614: Pop(2)
0x615: Return(); Pop(6)

0x616: PushEmpty(bool, bool)
0x617: @ IsLoaded(Stack[-1])
0x618: Pop(0)
0x619: Stack[-3] = Stack[-1]
0x61a: Return(); Pop(2)

0x61b: PushEmpty(float, cvector, float, cvector)
0x61c: @@ GetEyesHeight(Stack[-2])
0x61d: Pop(0)
0x61e: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x61f: Push(CvectorIndex(Stack[-1], 1))
0x620: Stack[-1] = Stack[-3]
0x621: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x622: Push("head")
0x623: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x624: Pop(1)
0x625: Return(); Pop(4)

0x626: PushEmpty(bool, int, bool, int, bool, float, cvector, cvector, bool, int, bool, int, bool, float, cvector, cvector)
0x627: @ IsExisting3DSound(Stack[-8], Stack[-17])
0x628: Pop(0)
0x629: Pop(0); Push((bool) Stack[-8] == 0)
0x62a: IF (Stack[-1] == 0) GOTO 0x63f; Pop(1)

0x62b: Stack[-7] = (int) 0
0x62c: Push((int) 1)
0x62d: Pop(1); Push(Stack[-8] + Stack[-1]);
0x62e: Pop(1); Push(Stack[-18] + Stack[-1]);
0x62f: @ IsExisting3DSound(Stack[-7], Stack[-1])
0x630: Pop(1)
0x631: Pop(0); Push((bool) Stack[-6] == 0)
0x632: IF (Stack[-1] == 0) GOTO 0x634; Pop(1)

0x633: GOTO 0x637

0x634: Push((int) 1)
0x635: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x636: GOTO 0x62c

0x637: Pop(0); Push((bool) Stack[-7] == 0)
0x638: IF (Stack[-1] == 0) GOTO 0x63a; Pop(1)

0x639: Return(); Pop(16)

0x63a: @ irand(Stack[-5], Stack[-7])
0x63b: Pop(0)
0x63c: Push((int) 1)
0x63d: Pop(1); Push(Stack[-6] + Stack[-1]);
0x63e: Stack[-18] = Stack[-18] + Stack[-1]; Pop(1);
0x63f: @ Is3DSoundLoaded(Stack[-4], Stack[-17])
0x640: Pop(0)
0x641: Push(Stack[-4])
0x642: IF (Stack[-1] == 0) GOTO 0x64e; Pop(1)

0x643: @ GetEyesHeight(Stack[-3])
0x644: Pop(0)
0x645: @ GetDirection(Stack[-2])
0x646: Pop(0)
0x647: Push((int) 50)
0x648: Stack[-2] = Stack[-3] * Stack[-1]; Pop(1);
0x649: Push(CvectorIndex(Stack[-1], 1))
0x64a: Stack[-1] = Stack[-1] + Stack[-4]; Pop(0);
0x64b: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x64c: @ PlayGlobalSound(Stack[-17], Stack[-1])
0x64d: Pop(0)
0x64e: Return(); Pop(16)

0x64f: PushEmpty(object, object)
0x650: @ self(Stack[-1])
0x651: Pop(0)
0x652: Stack[-3] = Stack[-1]
0x653: Return(); Pop(2)

0x654: Stack[-1] = 0
0x655: PushEmpty(float, float)
0x656: Pop(0); Push(Stack[-3] | Stack[-3]);
0x657: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x658: Push((float)0.0)
0x659: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x65a: IF (Stack[-1] == 0) GOTO 0x65d; Pop(1)

0x65b: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x65c: Return(); Pop(2)

0x65d: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x65e: Return(); Pop(2)

0x65f: PushEmpty()
0x660: Pop(0); Push((bool) Stack[-2] < Stack[-1])
0x661: IF (Stack[-1] == 0) GOTO 0x664; Pop(1)

0x662: Stack[-3] = Stack[-2]
0x663: GOTO 0x665

0x664: Stack[-3] = Stack[-1]
0x665: Return(); Pop(0)

0x666: PushEmpty()
0x667: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x668: IF (Stack[-1] == 0) GOTO 0x66b; Pop(1)

0x669: Stack[-4] = Stack[-2]
0x66a: Return(); Pop(0)

0x66b: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x66c: IF (Stack[-1] == 0) GOTO 0x66f; Pop(1)

0x66d: Stack[-4] = Stack[-1]
0x66e: Return(); Pop(0)

0x66f: Stack[-4] = Stack[-3]
0x670: Return(); Pop(0)

0x671: PushEmpty(object, object)
0x672: @ CreateFloatVector(Stack[-1])
0x673: Pop(0)
0x674: @@ add(Stack[-3])
0x675: Pop(0)
0x676: Push((int) 15)
0x677: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x678: Pop(1)
0x679: Return(); Pop(2)

0x67a: Stack[-1] = 0
0x67b: PushEmpty(bool, bool)
0x67c: @ IsPlayerActor(Stack[-3], Stack[-1])
0x67d: Pop(0)
0x67e: Push(Stack[-1])
0x67f: IF (Stack[-1] == 0) GOTO 0x683; Pop(1)

0x680: Push("attack")
0x681: @ PlayGlobalMusic(Stack[-1])
0x682: Pop(1)
0x683: Return(); Pop(2)

0x684: PushEmpty(object, object)
0x685: @ GetScene(Stack[-1])
0x686: Pop(0)
0x687: Push("battle")
0x688: PushEmpty(object)
0x689: Call2 0x64f

0x68a: Pop(0)
0x68b: @ BroadcastMessage(Stack[-2], Stack[-1], Stack[-3])
0x68c: Pop(2)
0x68d: Return(); Pop(2)

0x68e: Stack[-1] = 0
0x68f: PushEmpty(string, string)
0x690: Stack[-1] = "idle"
0x691: Push(Stack[-3])
0x692: IF (Stack[-1] == 0) GOTO 0x694; Pop(1)

0x693: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x694: Stack[-4] = Stack[-1]
0x695: Return(); Pop(2)

0x696: PushEmpty(int, bool, int, bool)
0x697: Stack[-2] = (int) 0
0x698: Push("all")
0x699: PushEmpty(string, int)
0x69a: Stack[-1] = Stack[-5]
0x69b: Call2 0x68f

0x69c: Pop(1)
0x69d: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x69e: Pop(2)
0x69f: Pop(0); Push((bool) Stack[-1] == 0)
0x6a0: IF (Stack[-1] == 0) GOTO 0x6a2; Pop(1)

0x6a1: GOTO 0x6a5

0x6a2: Push((int) 1)
0x6a3: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x6a4: GOTO 0x698

0x6a5: Stack[-5] = Stack[-2]
0x6a6: Return(); Pop(4)

0x6a7: PushEmpty(int, int)
0x6a8: Push("branch")
0x6a9: @ GetVariable(Stack[-1], Stack[-2])
0x6aa: Pop(1)
0x6ab: Stack[-3] = Stack[-1]
0x6ac: Return(); Pop(2)

0x6ad: PushEmpty()
0x6ae: PushEmpty(int)
0x6af: Call2 0x6a7

0x6b0: Pop(0)
0x6b1: Push((int) 1)
0x6b2: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x6b3: IF (Stack[-1] == 0) GOTO 0x6b7; Pop(1)

0x6b4: @ WorkWithCorpse(Stack[-1])
0x6b5: Pop(0)
0x6b6: GOTO 0x6b9

0x6b7: @ Barter(Stack[-1])
0x6b8: Pop(0)
0x6b9: Return(); Pop(0)

0x6ba: PushEmpty(object, int, bool, object, int, bool)
0x6bb: @ CreateInvItem(Stack[-3])
0x6bc: Pop(0)
0x6bd: @@ SetItemName(Stack[-7])
0x6be: Pop(0)
0x6bf: Push("Organ")
0x6c0: Push((int) 1)
0x6c1: @@ SetProperty(Stack[-2], Stack[-1])
0x6c2: Pop(2)
0x6c3: @@ GetItemID(Stack[-2])
0x6c4: Pop(0)
0x6c5: Push((int) 0)
0x6c6: Push((int) 1)
0x6c7: @ AddItem(Stack[-3], Stack[-5], Stack[-2], Stack[-1])
0x6c8: Pop(2)
0x6c9: Return(); Pop(6)

0x6ca: Stack[-3] = 0
0x6cb: PushEmpty(int)
0x6cc: Call2 0x6a7

0x6cd: Pop(0)
0x6ce: Push((int) 1)
0x6cf: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x6d0: IF (Stack[-1] == 0) GOTO 0x6d2; Pop(1)

0x6d1: Return(); Pop(0)

0x6d2: PushEmpty(string)
0x6d3: Stack[-1] = "liver"
0x6d4: Call2 0x6ba

0x6d5: Pop(1)
0x6d6: PushEmpty(string)
0x6d7: Stack[-1] = "kidney"
0x6d8: Call2 0x6ba

0x6d9: Pop(1)
0x6da: PushEmpty(string)
0x6db: Stack[-1] = "heart"
0x6dc: Call2 0x6ba

0x6dd: Pop(1)
0x6de: PushEmpty(string)
0x6df: Stack[-1] = "blood"
0x6e0: Call2 0x6ba

0x6e1: Pop(1)
0x6e2: Return(); Pop(0)

0x6e3: PushEmpty(object)
0x6e4: Call2 0x64f

0x6e5: Pop(0)
0x6e6: @ RemoveActor(Stack[-1])
0x6e7: Pop(1)
0x6e8: @ Hold()
0x6e9: Pop(0)
0x6ea: Return(); Pop(0)

0x6eb: PushEmpty(object, object)
0x6ec: @ GetScene(Stack[-1])
0x6ed: Pop(0)
0x6ee: PushEmpty()
0x6ef: Call2 0x6cb

0x6f0: Pop(0)
0x6f1: Push("dead")
0x6f2: Push((int) 1)
0x6f3: @ SetProperty(Stack[-2], Stack[-1])
0x6f4: Pop(2)
0x6f5: PushEmpty(object)
0x6f6: Stack[-1] = Stack[-4]
0x6f7: Push(-1, 0); TaskCall(3)
0x6f8: Call2 0x449

0x6f9: Pop(-1, 0); TaskReturn
0x6fa: Pop(1)
0x6fb: Return(); Pop(2)

0x6fc: Stack[-1] = 0
0x6fd: PushEmpty()
0x6fe: PushEmpty(object, int, float)
0x6ff: Stack[-3] = Stack[-7]
0x700: Stack[-2] = Stack[-6]
0x701: Stack[-1] = Stack[-5]
0x702: Call2 0x5b9

0x703: Pop(3)
0x704: Return(); Pop(0)

0x705: PushEmpty()
0x706: PushEmpty(object, int, float, cvector, cvector)
0x707: Stack[-5] = Stack[-11]
0x708: Stack[-4] = Stack[-10]
0x709: Stack[-3] = Stack[-9]
0x70a: Stack[-2] = Stack[-7]
0x70b: Stack[-1] = Stack[-6]
0x70c: Call2 0x5fd

0x70d: Pop(5)
0x70e: Return(); Pop(0)

0x70f: PushEmpty(float, float)
0x710: Push("health")
0x711: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x712: IF (Stack[-1] == 0) GOTO 0x71b; Pop(1)

0x713: Push("health")
0x714: @ GetProperty(Stack[-1], Stack[-2])
0x715: Pop(1)
0x716: Push((int) 0)
0x717: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x718: IF (Stack[-1] == 0) GOTO 0x71b; Pop(1)

0x719: @ SignalDeath(Stack[-4])
0x71a: Pop(0)
0x71b: Return(); Pop(2)

0x71c: PushEmpty()
0x71d: PushEmpty(object)
0x71e: Stack[-1] = Stack[-2]
0x71f: Call2 0x6eb

0x720: Pop(1)
0x721: Return(); Pop(0)

