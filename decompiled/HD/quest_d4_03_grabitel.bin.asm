GlobalVarCount = 0

Strings:
	quest_d4_03
	gang_attack
	cleanup
	restore
	player
	@GetAttackDistance
	GetAttackDistance
	GetPFPosition
	all
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
	branch
	GenerateMoney: iMin > iMax
	Money
	Knife
	lockpick
	grabitel_mark
	death

Import:
	SensePlayerOnly (1 args)
	Sleep (1 args)
	IsPlayerActor (2 args)
	Hold (0 args)
	IsLoaded (1 args)
	RemoveActor (1 args)
	FindActor (2 args)
	PlayGlobalMusic (1 args)
	SendPlayerEnemy (2 args)
	GetPFPosition (1 args)
	CanReachByPF (2 args)
	PlayAnimation (2 args)
	WaitForAnimEnd (0 args)
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
	irand (2 args)
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
	Sleep (2 args)
	RequestClearPath (1 args)
	SetRTEnvelope (2 args)
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
	AddItem (3 args)
	Is3DSoundLoaded (2 args)
	GetEyesHeight (1 args)
	PlayGlobalSound (2 args)
	self (1 args)
	SendWorldWndMessage (1 args)
	CreateFloatVector (1 args)
	RumblePlay (2 args)
	SendWorldWndMessage (2 args)
	Trigger (2 args)
	BroadcastMessage (3 args)
	GetVariable (2 args)
	WorkWithCorpse (1 args)
	Barter (1 args)
	Trace (1 args)
	AddItem (4 args)
	ClearSubContainer (1 args)
	GetInvItemByName (2 args)
	GetProperty (2 args)
	SignalDeath (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (bool) Params = 0
		EVENT_17 Op = 0xe Vars = (object)
		EVENT_1 Op = 0x1e Vars = (object)
		EVENT_3 Op = 0x2e Vars = (object)
		EVENT_26 Op = 0x3e Vars = (string)
		EVENT_6 Op = 0x6d Vars = ()
	GTASK_1 Vars = (object, int, int, bool, float, int) Params = 0
		EVENT_6 Op = 0x91 Vars = ()
	GTASK_2 Vars = (bool, object, bool) Params = 6
		EVENT_6 Op = 0x32f Vars = ()
		EVENT_7 Op = 0x368 Vars = (int)
		EVENT_1 Op = 0x383 Vars = (object)
		EVENT_2 Op = 0x392 Vars = (object)
		EVENT_10 Op = 0x418 Vars = (object)
		EVENT_41 Op = 0x423 Vars = (object)
	GTASK_3  Params = 1
		EVENT_6 Op = 0x440 Vars = ()
		EVENT_0 Op = 0x457 Vars = (object)
		EVENT_22 Op = 0x4d6 Vars = (object, int, float, float)
		EVENT_16 Op = 0x4d8 Vars = (object, string)
		EVENT_41 Op = 0x4da Vars = (object)

Events:
EVENT_22 Op = 0x75b Vars = (object, int, float, float)
EVENT_43 Op = 0x763 Vars = (object, int, float, float, cvector, cvector)
EVENT_16 Op = 0x76d Vars = (object, string)
EVENT_41 Op = 0x77a Vars = (object)

0x0: Push((bool) 1)
0x1: @ SensePlayerOnly(Stack[-1])
0x2: Pop(1)
0x3: EventDisable(3)
0x4: EventDisable(1)
0x5: Push((float)1.5)
0x6: @ Sleep(Stack[-1])
0x7: Pop(1)
0x8: EventEnable(3)
0x9: EventEnable(1)
0xa: PushEmpty()
0xb: Call2 0x4d

0xc: Pop(0)
0xd: Return(); Pop(0)

0xe: PushEmpty(bool, bool)
0xf: @ IsPlayerActor(Stack[-3], Stack[-1])
0x10: Pop(0)
0x11: Push(Stack[-1])
0x12: IF (Stack[-1] == 0) GOTO 0x1d; Pop(1)

0x13: PushEmpty(bool, string, string)
0x14: Stack[-2] = "quest_d4_03"
0x15: Stack[-1] = "gang_attack"
0x16: Call2 0x6cf

0x17: Pop(3)
0x18: PushEmpty()
0x19: Push(-0, 6); TaskCall(1)
0x1a: Call2 0x7f

0x1b: Pop(-0, 6); TaskReturn
0x1c: Pop(0)
0x1d: Return(); Pop(2)

0x1e: PushEmpty(bool, bool)
0x1f: @ IsPlayerActor(Stack[-3], Stack[-1])
0x20: Pop(0)
0x21: Push(Stack[-1])
0x22: IF (Stack[-1] == 0) GOTO 0x2d; Pop(1)

0x23: PushEmpty(bool, string, string)
0x24: Stack[-2] = "quest_d4_03"
0x25: Stack[-1] = "gang_attack"
0x26: Call2 0x6cf

0x27: Pop(3)
0x28: PushEmpty()
0x29: Push(-0, 6); TaskCall(1)
0x2a: Call2 0x7f

0x2b: Pop(-0, 6); TaskReturn
0x2c: Pop(0)
0x2d: Return(); Pop(2)

0x2e: PushEmpty(bool, bool)
0x2f: @ IsPlayerActor(Stack[-3], Stack[-1])
0x30: Pop(0)
0x31: Push(Stack[-1])
0x32: IF (Stack[-1] == 0) GOTO 0x3d; Pop(1)

0x33: PushEmpty(bool, string, string)
0x34: Stack[-2] = "quest_d4_03"
0x35: Stack[-1] = "gang_attack"
0x36: Call2 0x6cf

0x37: Pop(3)
0x38: PushEmpty()
0x39: Push(-0, 6); TaskCall(1)
0x3a: Call2 0x7f

0x3b: Pop(-0, 6); TaskReturn
0x3c: Pop(0)
0x3d: Return(); Pop(2)

0x3e: PushEmpty()
0x3f: Push("attack")
0x40: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x41: IF (Stack[-1] == 0) GOTO 0x48; Pop(1)

0x42: PushEmpty()
0x43: Push(-0, 6); TaskCall(1)
0x44: Call2 0x7f

0x45: Pop(-0, 6); TaskReturn
0x46: Pop(0)
0x47: GOTO 0x4c

0x48: PushEmpty(string)
0x49: Stack[-1] = Stack[-2]
0x4a: Call2 0x51

0x4b: Pop(1)
0x4c: Return(); Pop(0)

0x4d: @ Hold()
0x4e: Pop(0)
0x4f: GOTO 0x4d

0x50: Return(); Pop(0)

0x51: PushEmpty(bool, bool)
0x52: Push("cleanup")
0x53: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x54: IF (Stack[-1] == 0) GOTO 0x68; Pop(1)

0x55: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x56: @ IsLoaded(Stack[-1])
0x57: Pop(0)
0x58: PushEmpty(bool)
0x59: Stack[-1] = (bool) 0
0x5a: Pop(0); Push((bool) Stack[-2] == 0)
0x5b: IF (Stack[-1] == 0) GOTO 0x61; Pop(1)

0x5c: PushEmpty(bool)
0x5d: Call2 0x7d

0x5e: Pop(0)
0x5f: IF (Stack[-1] == 0) GOTO 0x61; Pop(1)

0x60: Stack[-1] = (bool) 1
0x61: IF (Stack[-1] == 0) GOTO 0x67; Pop(1)

0x62: PushEmpty(object)
0x63: Call2 0x66a

0x64: Pop(0)
0x65: @ RemoveActor(Stack[-1])
0x66: Pop(1)
0x67: GOTO 0x6c

0x68: Push("restore")
0x69: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x6a: IF (Stack[-1] == 0) GOTO 0x6c; Pop(1)

0x6b: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x6c: Return(); Pop(2)

0x6d: PushEmpty(bool)
0x6e: Stack[-1] = (bool) 0
0x6f: Push( Stack[0 + Tasks[-1].StackPointer] )
0x70: IF (Stack[-1] == 0) GOTO 0x76; Pop(1)

0x71: PushEmpty(bool)
0x72: Call2 0x7d

0x73: Pop(0)
0x74: IF (Stack[-1] == 0) GOTO 0x76; Pop(1)

0x75: Stack[-1] = (bool) 1
0x76: IF (Stack[-1] == 0) GOTO 0x7c; Pop(1)

0x77: PushEmpty(object)
0x78: Call2 0x66a

0x79: Pop(0)
0x7a: @ RemoveActor(Stack[-1])
0x7b: Pop(1)
0x7c: Return(); Pop(0)

0x7d: Stack[-1] = (bool) 1
0x7e: Return(); Pop(0)

0x7f: PushEmpty(object, object)
0x80: Push("player")
0x81: @ FindActor(Stack[-2], Stack[-1])
0x82: Pop(1)
0x83: PushEmpty(object, bool, float)
0x84: Stack[-3] = Stack[-4]
0x85: Stack[-2] = (bool) 1
0x86: Stack[-1] = (float) 180.0
0x87: Call2 0x99

0x88: Pop(3)
0x89: Return(); Pop(2)

0x8a: Stack[-1] = 0
0x8b: PushEmpty()
0x8c: Stack[-3] = (float) 0.1
0x8d: Return(); Pop(0)

0x8e: PushEmpty()
0x8f: Stack[-3] = (int) 1
0x90: Return(); Pop(0)

0x91: PushEmpty(object)
0x92: Call2 0x66a

0x93: Pop(0)
0x94: @ RemoveActor(Stack[-1])
0x95: Pop(1)
0x96: @ Hold()
0x97: Pop(0)
0x98: Return(); Pop(0)

0x99: PushEmpty(float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float, float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float)
0x9a: PushEmpty()
0x9b: Call2 0x17e

0x9c: Pop(0)
0x9d: Stack[5 + Tasks[-1].StackPointer] = (int)0
0x9e: Push("@GetAttackDistance")
0x9f: Push((int) 1)
0xa0: Pop(2); Push(IsFuncExist(Stack[-27], Stack[-2], Stack[-1]))
0xa1: IF (Stack[-1] == 0) GOTO 0xa7; Pop(1)

0xa2: @@ GetAttackDistance(Stack[-11])
0xa3: Pop(0)
0xa4: Push((int) 50)
0xa5: Stack[-12] = Stack[-12] + Stack[-1]; Pop(1);
0xa6: GOTO 0xa8

0xa7: Stack[-11] = Stack[-23]
0xa8: Push((int) 150)
0xa9: Pop(1); Push((bool) Stack[-12] >= Stack[-1])
0xaa: IF (Stack[-1] == 0) GOTO 0xac; Pop(1)

0xab: Stack[-11] = (int) 150
0xac: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xad: Stack[0 + Tasks[-1].StackPointer] = Stack[-25]
0xae: @ IsPlayerActor(Stack[-0], Stack[-8])
0xaf: Pop(0)
0xb0: Push(Stack[-8])
0xb1: IF (Stack[-1] == 0) GOTO 0xba; Pop(1)

0xb2: Push("attack")
0xb3: @ PlayGlobalMusic(Stack[-1])
0xb4: Pop(1)
0xb5: PushEmpty(object)
0xb6: Call2 0x66a

0xb7: Pop(0)
0xb8: @ SendPlayerEnemy(Stack[-26], Stack[-1])
0xb9: Pop(1)
0xba: Push(Stack[-24])
0xbb: IF (Stack[-1] == 0) GOTO 0xbe; Pop(1)

0xbc: Stack[-7] = (bool) 0
0xbd: GOTO 0xbf

0xbe: Stack[-7] = (bool) 1
0xbf: Push((float)400.0)
0xc0: Stack[-7] = Stack[-1] + Stack[-12]; Pop(1);
0xc1: PushEmpty(bool)
0xc2: Stack[-1] = (bool) 0
0xc3: PushEmpty(bool, object)
0xc4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc5: Call2 0x58a

0xc6: Pop(1)
0xc7: IF (Stack[-1] == 0) GOTO 0xcb; Pop(1)

0xc8: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0xc9: IF (Stack[-1] == 0) GOTO 0xcb; Pop(1)

0xca: Stack[-1] = (bool) 1
0xcb: IF (Stack[-1] == 0) GOTO 0x16d; Pop(1)

0xcc: PushEmpty()
0xcd: Call2 0x31b

0xce: Pop(0)
0xcf: @@ GetPFPosition(Stack[-10])
0xd0: Pop(0)
0xd1: @ GetPFPosition(Stack[-9])
0xd2: Pop(0)
0xd3: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0xd4: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0xd5: Pop(0); Push(Stack[-6] * Stack[-6]);
0xd6: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0xd7: IF (Stack[-1] == 0) GOTO 0xe7; Pop(1)

0xd8: PushEmpty(bool, object, float, float, bool, bool)
0xd9: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0xda: Stack[-4] = Stack[-17]
0xdb: Stack[-3] = (float) 3000.0
0xdc: Stack[-2] = (bool) 1
0xdd: Stack[-1] = (bool) 0
0xde: Push(-6, 3); TaskCall(2)
0xdf: Call2 0x337

0xe0: Pop(-6, 3); TaskReturn
0xe1: Pop(5)
0xe2: Pop(1); Push((bool) Stack[-1] == 0)
0xe3: IF (Stack[-1] == 0) GOTO 0xe5; Pop(1)

0xe4: GOTO 0x16d

0xe5: Stack[-7] = (bool) 0
0xe6: GOTO 0x16c

0xe7: Pop(0); Push(Stack[-23] * Stack[-23]);
0xe8: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0xe9: IF (Stack[-1] == 0) GOTO 0x164; Pop(1)

0xea: @@ GetPFPosition(Stack[-3])
0xeb: Pop(0)
0xec: @ CanReachByPF(Stack[-2], Stack[-3])
0xed: Pop(0)
0xee: Pop(0); Push((bool) Stack[-2] == 0)
0xef: IF (Stack[-1] == 0) GOTO 0xff; Pop(1)

0xf0: PushEmpty(bool, object, float, float, bool, bool)
0xf1: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0xf2: Stack[-4] = Stack[-17]
0xf3: Stack[-3] = (float) 3000.0
0xf4: Stack[-2] = (bool) 1
0xf5: Stack[-1] = (bool) 0
0xf6: Push(-6, 3); TaskCall(2)
0xf7: Call2 0x337

0xf8: Pop(-6, 3); TaskReturn
0xf9: Pop(5)
0xfa: Pop(1); Push((bool) Stack[-1] == 0)
0xfb: IF (Stack[-1] == 0) GOTO 0xfd; Pop(1)

0xfc: GOTO 0x16d

0xfd: Stack[-7] = (bool) 0
0xfe: GOTO 0xc1

0xff: Pop(0); Push((bool) Stack[-7] == 0)
0x100: IF (Stack[-1] == 0) GOTO 0x118; Pop(1)

0x101: PushEmpty(object)
0x102: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x103: Call2 0x620

0x104: Pop(1)
0x105: Push("all")
0x106: Push("attack_on")
0x107: @ PlayAnimation(Stack[-2], Stack[-1])
0x108: Pop(2)
0x109: @ WaitForAnimEnd()
0x10a: Pop(0)
0x10b: PushEmpty()
0x10c: Call2 0x31b

0x10d: Pop(0)
0x10e: @ StopAsync()
0x10f: Pop(0)
0x110: Stack[-7] = (bool) 1
0x111: PushEmpty(bool, object)
0x112: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x113: Call2 0x58a

0x114: Pop(1)
0x115: Pop(1); Push((bool) Stack[-1] == 0)
0x116: IF (Stack[-1] == 0) GOTO 0x118; Pop(1)

0x117: GOTO 0x16d

0x118: @ rand(Stack[-1])
0x119: Pop(0)
0x11a: PushEmpty(bool)
0x11b: Stack[-1] = (bool) 1
0x11c: Push((float)0.25)
0x11d: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x11e: IF (Stack[-1] == 0) GOTO 0x124; Pop(1)

0x11f: PushEmpty(bool)
0x120: Call2 0x2f0

0x121: Pop(0)
0x122: IF (Stack[-1] == 0) GOTO 0x124; Pop(1)

0x123: Stack[-1] = (bool) 0
0x124: IF (Stack[-1] == 0) GOTO 0x135; Pop(1)

0x125: @ Face(Stack[-0])
0x126: Pop(0)
0x127: PushEmpty()
0x128: Call2 0x322

0x129: Pop(0)
0x12a: Push("all")
0x12b: Push("attack_stay")
0x12c: @ PlayAnimation(Stack[-2], Stack[-1])
0x12d: Pop(2)
0x12e: PushEmpty(bool, float)
0x12f: Stack[-1] = Stack[-25]
0x130: Call2 0x26c

0x131: Pop(2)
0x132: @ StopAsync()
0x133: Pop(0)
0x134: GOTO 0x163

0x135: @ Face(Stack[-0])
0x136: Pop(0)
0x137: Push("all")
0x138: Push("fjump")
0x139: @ PlayAnimation(Stack[-2], Stack[-1])
0x13a: Pop(2)
0x13b: @ WaitForAnimEnd()
0x13c: Pop(0)
0x13d: PushEmpty()
0x13e: Call2 0x31b

0x13f: Pop(0)
0x140: Push(CVector(0.0, 0.0, 0.0))
0x141: @ SetSpeed(Stack[-1])
0x142: Pop(1)
0x143: @ Stop()
0x144: Pop(0)
0x145: @ StopAsync()
0x146: Pop(0)
0x147: PushEmpty(bool)
0x148: Call2 0x2f0

0x149: Pop(0)
0x14a: Pop(1); Push((bool) Stack[-1] == 0)
0x14b: IF (Stack[-1] == 0) GOTO 0x163; Pop(1)

0x14c: PushEmpty(bool, object)
0x14d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x14e: Call2 0x58a

0x14f: Pop(1)
0x150: Pop(1); Push((bool) Stack[-1] == 0)
0x151: IF (Stack[-1] == 0) GOTO 0x153; Pop(1)

0x152: GOTO 0x16d

0x153: @@ GetPFPosition(Stack[-10])
0x154: Pop(0)
0x155: @ GetPFPosition(Stack[-9])
0x156: Pop(0)
0x157: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0x158: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x159: Pop(0); Push(Stack[-23] * Stack[-23]);
0x15a: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x15b: IF (Stack[-1] == 0) GOTO 0x163; Pop(1)

0x15c: PushEmpty(bool, float)
0x15d: Stack[-1] = Stack[-25]
0x15e: Call2 0x1c8

0x15f: Pop(1)
0x160: Pop(1); Push((bool) Stack[-1] == 0)
0x161: IF (Stack[-1] == 0) GOTO 0x163; Pop(1)

0x162: GOTO 0x16d

0x163: GOTO 0x16c

0x164: PushEmpty(bool, float)
0x165: Stack[-1] = Stack[-25]
0x166: Call2 0x1c8

0x167: Pop(1)
0x168: Pop(1); Push((bool) Stack[-1] == 0)
0x169: IF (Stack[-1] == 0) GOTO 0x16b; Pop(1)

0x16a: GOTO 0x16d

0x16b: Stack[-7] = (bool) 1
0x16c: GOTO 0xc1

0x16d: @ WaitForAnimEnd()
0x16e: Pop(0)
0x16f: Push( Stack[3 + Tasks[-1].StackPointer] )
0x170: IF (Stack[-1] == 0) GOTO 0x172; Pop(1)

0x171: Return(); Pop(22)

0x172: Push("all")
0x173: Push("attack_off")
0x174: @ PlayAnimation(Stack[-2], Stack[-1])
0x175: Pop(2)
0x176: @ WaitForAnimEnd()
0x177: Pop(0)
0x178: Push(Stack[-8])
0x179: IF (Stack[-1] == 0) GOTO 0x17d; Pop(1)

0x17a: Push((float)2.0)
0x17b: @ Sleep(Stack[-1])
0x17c: Pop(1)
0x17d: Return(); Pop(22)

0x17e: PushEmpty(bool, bool, cvector, bool, bool, cvector)
0x17f: Stack[1 + Tasks[-1].StackPointer] = (int)0
0x180: Push("all")
0x181: Push("attack_begin")
0x182: Push((int) 1)
0x183: Pop(1); Push(Stack[1 + StackPtr] + Stack[-1]);
0x184: Pop(2); Push(Stack[-2] + Stack[-1]);
0x185: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0x186: Pop(2)
0x187: Pop(0); Push((bool) Stack[-3] == 0)
0x188: IF (Stack[-1] == 0) GOTO 0x18a; Pop(1)

0x189: GOTO 0x18d

0x18a: Push((int) 1)
0x18b: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x18c: GOTO 0x180

0x18d: Stack[2 + Tasks[-1].StackPointer] = (int)0
0x18e: Push("attack")
0x18f: Push((int) 1)
0x190: Pop(1); Push(Stack[2 + StackPtr] + Stack[-1]);
0x191: Pop(2); Push(Stack[-2] + Stack[-1]);
0x192: @ IsExisting3DSound(Stack[-3], Stack[-1])
0x193: Pop(1)
0x194: Pop(0); Push((bool) Stack[-2] == 0)
0x195: IF (Stack[-1] == 0) GOTO 0x197; Pop(1)

0x196: GOTO 0x19a

0x197: Push((int) 1)
0x198: Stack[2 + Tasks[-1].StackPointer] = Stack[2 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x199: GOTO 0x18e

0x19a: Push("all")
0x19b: Push("bjump")
0x19c: @ GetAnimationOffset(Stack[-3], Stack[-2], Stack[-1])
0x19d: Pop(2)
0x19e: Push(CvectorIndex(Stack[-1], 2))
0x19f: Stack[4 + Tasks[-1].StackPointer] = -Stack[-1]; Pop(1);
0x1a0: Return(); Pop(6)

0x1a1: PushEmpty(object, float, float, object, float, float)
0x1a2: Push((float)0.9)
0x1a3: Pop(1); Push(Stack[-9] * Stack[-1]);
0x1a4: @ GetVictim(Stack[-1], Stack[-4])
0x1a5: Pop(1)
0x1a6: @ ReportAttack(Stack[-0])
0x1a7: Pop(0)
0x1a8: Pop(0); Push((bool) Stack[-3] == Stack[0 + Tasks[-1].StackPointer])
0x1a9: IF (Stack[-1] == 0) GOTO 0x1c6; Pop(1)

0x1aa: PushEmpty(float, object, int)
0x1ab: Stack[-2] = Stack[-6]
0x1ac: Stack[-1] = Stack[-10]
0x1ad: Call2 0x8b

0x1ae: Stack[-5] = Stack[-3]
0x1af: Pop(3)
0x1b0: PushEmpty(float, object, float, int)
0x1b1: Stack[-3] = Stack[-7]
0x1b2: Stack[-2] = Stack[-6]
0x1b3: PushEmpty(int, object, int)
0x1b4: Stack[-2] = Stack[-10]
0x1b5: Stack[-1] = Stack[-14]
0x1b6: Call2 0x8e

0x1b7: Stack[-4] = Stack[-3]
0x1b8: Pop(3)
0x1b9: Call2 0x518

0x1ba: Stack[-5] = Stack[-4]
0x1bb: Pop(4)
0x1bc: PushEmpty(int)
0x1bd: Call2 0x320

0x1be: Pop(0)
0x1bf: @ ReportHit(Stack[-0], Stack[-1], Stack[-2], Stack[-3])
0x1c0: Pop(1)
0x1c1: PushEmpty(object, float)
0x1c2: Stack[-2] = Stack[-5]
0x1c3: Stack[-1] = Stack[-3]
0x1c4: Call2 0x327

0x1c5: Pop(2)
0x1c6: Return(); Pop(6)

0x1c7: Stack[-3] = 0
0x1c8: PushEmpty(int, bool, int, string, int, bool, int, string)
0x1c9: PushEmpty()
0x1ca: Call2 0x31b

0x1cb: Pop(0)
0x1cc: @ irand(Stack[-4], Stack[-1])
0x1cd: Pop(0)
0x1ce: Push((int) 1)
0x1cf: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x1d0: @ Face(Stack[-0])
0x1d1: Pop(0)
0x1d2: Push((bool) 1)
0x1d3: @ SetAttackState(Stack[-1])
0x1d4: Pop(1)
0x1d5: PushEmpty()
0x1d6: Call2 0x6e4

0x1d7: Pop(0)
0x1d8: Push("all")
0x1d9: Push("attack_begin")
0x1da: Pop(1); Push(Stack[-1] + Stack[-6]);
0x1db: @ PlayAnimation(Stack[-2], Stack[-1])
0x1dc: Pop(2)
0x1dd: @ WaitForAnimEnd()
0x1de: Pop(0)
0x1df: PushEmpty()
0x1e0: Call2 0x2fb

0x1e1: Pop(0)
0x1e2: PushEmpty(bool, object)
0x1e3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1e4: Call2 0x58a

0x1e5: Pop(1)
0x1e6: Pop(1); Push((bool) Stack[-1] == 0)
0x1e7: IF (Stack[-1] == 0) GOTO 0x1ec; Pop(1)

0x1e8: @ StopAsync()
0x1e9: Pop(0)
0x1ea: Stack[-10] = (bool) 0
0x1eb: Return(); Pop(8)

0x1ec: PushEmpty(float, int)
0x1ed: Stack[-2] = Stack[-11]
0x1ee: Stack[-1] = Stack[-6]
0x1ef: Call2 0x1a1

0x1f0: Pop(2)
0x1f1: Push("all")
0x1f2: Push("attack_middle")
0x1f3: Pop(1); Push(Stack[-1] + Stack[-6]);
0x1f4: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0x1f5: Pop(2)
0x1f6: Push(Stack[-3])
0x1f7: IF (Stack[-1] == 0) GOTO 0x23d; Pop(1)

0x1f8: PushEmpty()
0x1f9: Call2 0x6e4

0x1fa: Pop(0)
0x1fb: Push("all")
0x1fc: Push("attack_middle")
0x1fd: Pop(1); Push(Stack[-1] + Stack[-6]);
0x1fe: @ PlayAnimation(Stack[-2], Stack[-1])
0x1ff: Pop(2)
0x200: @ WaitForAnimEnd()
0x201: Pop(0)
0x202: PushEmpty()
0x203: Call2 0x31b

0x204: Pop(0)
0x205: PushEmpty(bool, object)
0x206: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x207: Call2 0x58a

0x208: Pop(1)
0x209: Pop(1); Push((bool) Stack[-1] == 0)
0x20a: IF (Stack[-1] == 0) GOTO 0x20f; Pop(1)

0x20b: @ StopAsync()
0x20c: Pop(0)
0x20d: Stack[-10] = (bool) 0
0x20e: Return(); Pop(8)

0x20f: PushEmpty(float, int)
0x210: Stack[-2] = Stack[-11]
0x211: Stack[-1] = Stack[-6]
0x212: Call2 0x1a1

0x213: Pop(2)
0x214: Stack[-2] = (int) 1
0x215: Push("attack_middle")
0x216: Pop(1); Push(Stack[-1] + Stack[-5]);
0x217: Push("_")
0x218: Pop(2); Push(Stack[-2] + Stack[-1]);
0x219: Stack[-2] = Stack[-1] + Stack[-3]; Pop(1);
0x21a: Push("all")
0x21b: @ HasAnimation(Stack[-4], Stack[-1], Stack[-2])
0x21c: Pop(1)
0x21d: Pop(0); Push((bool) Stack[-3] == 0)
0x21e: IF (Stack[-1] == 0) GOTO 0x220; Pop(1)

0x21f: GOTO 0x23d

0x220: PushEmpty()
0x221: Call2 0x6e4

0x222: Pop(0)
0x223: Push("all")
0x224: @ PlayAnimation(Stack[-1], Stack[-2])
0x225: Pop(1)
0x226: @ WaitForAnimEnd()
0x227: Pop(0)
0x228: PushEmpty()
0x229: Call2 0x31b

0x22a: Pop(0)
0x22b: PushEmpty(bool, object)
0x22c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x22d: Call2 0x58a

0x22e: Pop(1)
0x22f: Pop(1); Push((bool) Stack[-1] == 0)
0x230: IF (Stack[-1] == 0) GOTO 0x235; Pop(1)

0x231: @ StopAsync()
0x232: Pop(0)
0x233: Stack[-10] = (bool) 0
0x234: Return(); Pop(8)

0x235: PushEmpty(float, int)
0x236: Stack[-2] = Stack[-11]
0x237: Stack[-1] = Stack[-6]
0x238: Call2 0x1a1

0x239: Pop(2)
0x23a: Push((int) 1)
0x23b: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x23c: GOTO 0x215

0x23d: Push((bool) 0)
0x23e: @ SetAttackState(Stack[-1])
0x23f: Pop(1)
0x240: Push("all")
0x241: Push("attack_end")
0x242: Pop(1); Push(Stack[-1] + Stack[-6]);
0x243: @ PlayAnimation(Stack[-2], Stack[-1])
0x244: Pop(2)
0x245: PushEmpty(bool)
0x246: Call2 0x329

0x247: Pop(0)
0x248: IF (Stack[-1] == 0) GOTO 0x24f; Pop(1)

0x249: PushEmpty(bool, float)
0x24a: Stack[-1] = (float) 0.75
0x24b: Call2 0x251

0x24c: Pop(2)
0x24d: @ StopAsync()
0x24e: Pop(0)
0x24f: Stack[-10] = (bool) 1
0x250: Return(); Pop(8)

0x251: PushEmpty(float, bool, float, bool)
0x252: @ rand(Stack[-2])
0x253: Pop(0)
0x254: Pop(0); Push((bool) Stack[-2] < Stack[-5])
0x255: IF (Stack[-1] == 0) GOTO 0x265; Pop(1)

0x256: @ IsAnimationPlaying(Stack[-1])
0x257: Pop(0)
0x258: Pop(0); Push((bool) Stack[-1] == 0)
0x259: IF (Stack[-1] == 0) GOTO 0x25b; Pop(1)

0x25a: GOTO 0x264

0x25b: PushEmpty(bool)
0x25c: Call2 0x2b3

0x25d: Pop(0)
0x25e: IF (Stack[-1] == 0) GOTO 0x261; Pop(1)

0x25f: Stack[-6] = (bool) 1
0x260: Return(); Pop(4)

0x261: @ sync()
0x262: Pop(0)
0x263: GOTO 0x256

0x264: GOTO 0x26a

0x265: @ WaitForAnimEnd()
0x266: Pop(0)
0x267: PushEmpty()
0x268: Call2 0x31b

0x269: Pop(0)
0x26a: Stack[-6] = (bool) 0
0x26b: Return(); Pop(4)

0x26c: PushEmpty(bool, cvector, cvector, cvector, float, bool, cvector, cvector, cvector, float)
0x26d: @ IsAnimationPlaying(Stack[-5])
0x26e: Pop(0)
0x26f: Pop(0); Push((bool) Stack[-5] == 0)
0x270: IF (Stack[-1] == 0) GOTO 0x272; Pop(1)

0x271: GOTO 0x292

0x272: PushEmpty(bool)
0x273: Call2 0x2b3

0x274: Pop(0)
0x275: IF (Stack[-1] == 0) GOTO 0x278; Pop(1)

0x276: Stack[-12] = (bool) 1
0x277: Return(); Pop(10)

0x278: PushEmpty(bool, object)
0x279: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x27a: Call2 0x58a

0x27b: Pop(1)
0x27c: Pop(1); Push((bool) Stack[-1] == 0)
0x27d: IF (Stack[-1] == 0) GOTO 0x280; Pop(1)

0x27e: Stack[-12] = (bool) 0
0x27f: Return(); Pop(10)

0x280: @@ GetPFPosition(Stack[-4])
0x281: Pop(0)
0x282: @ GetPFPosition(Stack[-3])
0x283: Pop(0)
0x284: Stack[-2] = Stack[-4] - Stack[-3]; Pop(0);
0x285: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x286: Pop(0); Push(Stack[-11] * Stack[-11]);
0x287: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x288: IF (Stack[-1] == 0) GOTO 0x28f; Pop(1)

0x289: PushEmpty(bool, float)
0x28a: Stack[-1] = Stack[-13]
0x28b: Call2 0x1c8

0x28c: Pop(2)
0x28d: Stack[-12] = (bool) 1
0x28e: Return(); Pop(10)

0x28f: @ sync()
0x290: Pop(0)
0x291: GOTO 0x26d

0x292: PushEmpty()
0x293: Call2 0x31b

0x294: Pop(0)
0x295: Stack[-12] = (bool) 0
0x296: Return(); Pop(10)

0x297: PushEmpty(cvector, cvector, cvector, float, float, cvector, cvector, cvector, float, float)
0x298: PushEmpty(bool, object)
0x299: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x29a: Call2 0x58a

0x29b: Pop(1)
0x29c: Pop(1); Push((bool) Stack[-1] == 0)
0x29d: IF (Stack[-1] == 0) GOTO 0x2a0; Pop(1)

0x29e: Stack[-11] = (bool) 0
0x29f: Return(); Pop(10)

0x2a0: PushEmpty(bool)
0x2a1: Call2 0x2f0

0x2a2: Pop(0)
0x2a3: IF (Stack[-1] == 0) GOTO 0x2b1; Pop(1)

0x2a4: @@ GetPFPosition(Stack[-5])
0x2a5: Pop(0)
0x2a6: @ GetPFPosition(Stack[-4])
0x2a7: Pop(0)
0x2a8: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x2a9: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x2aa: @@ GetAttackDistance(Stack[-1])
0x2ab: Pop(0)
0x2ac: Push((int) 50)
0x2ad: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x2ae: Pop(0); Push(Stack[-1] * Stack[-1]);
0x2af: Stack[-12] = Stack[-3] <= Stack[-1]; Pop(1);
0x2b0: Return(); Pop(10)

0x2b1: Stack[-11] = (bool) 0
0x2b2: Return(); Pop(10)

0x2b3: PushEmpty(bool)
0x2b4: Stack[-1] = (bool) 0
0x2b5: PushEmpty(bool)
0x2b6: Call2 0x297

0x2b7: Pop(0)
0x2b8: IF (Stack[-1] == 0) GOTO 0x2be; Pop(1)

0x2b9: PushEmpty(bool)
0x2ba: Call2 0x2c3

0x2bb: Pop(0)
0x2bc: IF (Stack[-1] == 0) GOTO 0x2be; Pop(1)

0x2bd: Stack[-1] = (bool) 1
0x2be: IF (Stack[-1] == 0) GOTO 0x2c1; Pop(1)

0x2bf: Stack[-1] = (bool) 1
0x2c0: Return(); Pop(0)

0x2c1: Stack[-1] = (bool) 0
0x2c2: Return(); Pop(0)

0x2c3: PushEmpty(object, bool, float, cvector, cvector, object, bool, float, cvector, cvector)
0x2c4: @ GetScene(Stack[-5])
0x2c5: Pop(0)
0x2c6: Stack[-4] = (bool) 0
0x2c7: PushEmpty(cvector, object)
0x2c8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2c9: Call2 0x4ea

0x2ca: Pop(1)
0x2cb: Pop(1); Push(( -Stack[-1])
0x2cc: @ FindDirLength(Stack[-4], Stack[-1], Stack[-4])
0x2cd: Pop(1)
0x2ce: Pop(0); Push((bool) Stack[-3] < Stack[4 + Tasks[-1].StackPointer])
0x2cf: IF (Stack[-1] == 0) GOTO 0x2d1; Pop(1)

0x2d0: GOTO 0x2ed

0x2d1: @ Face(Stack[-0])
0x2d2: Pop(0)
0x2d3: Push("all")
0x2d4: Push("bjump")
0x2d5: @ PlayAnimation(Stack[-2], Stack[-1])
0x2d6: Pop(2)
0x2d7: @@ GetPFPosition(Stack[-2])
0x2d8: Pop(0)
0x2d9: @ GetPFPosition(Stack[-1])
0x2da: Pop(0)
0x2db: @ WaitForAnimEnd()
0x2dc: Pop(0)
0x2dd: PushEmpty()
0x2de: Call2 0x31b

0x2df: Pop(0)
0x2e0: @ StopAsync()
0x2e1: Pop(0)
0x2e2: Push(CVector(0.0, 0.0, 0.0))
0x2e3: @ SetSpeed(Stack[-1])
0x2e4: Pop(1)
0x2e5: Stack[-4] = (bool) 1
0x2e6: PushEmpty(bool)
0x2e7: Call2 0x297

0x2e8: Pop(0)
0x2e9: Pop(1); Push((bool) Stack[-1] == 0)
0x2ea: IF (Stack[-1] == 0) GOTO 0x2ec; Pop(1)

0x2eb: GOTO 0x2ed

0x2ec: GOTO 0x2c7

0x2ed: Stack[-11] = Stack[-4]
0x2ee: Return(); Pop(10)

0x2ef: Stack[-5] = 0
0x2f0: PushEmpty(bool, bool)
0x2f1: Push("IsAttacking")
0x2f2: Push((int) 1)
0x2f3: Pop(2); Push(IsFuncExist(Stack[0 + Tasks[-1].StackPointer], Stack[-2], Stack[-1]))
0x2f4: IF (Stack[-1] == 0) GOTO 0x2f9; Pop(1)

0x2f5: @@ IsAttacking(Stack[-1])
0x2f6: Pop(0)
0x2f7: Stack[-3] = Stack[-1]
0x2f8: Return(); Pop(2)

0x2f9: Stack[-3] = (bool) 0
0x2fa: Return(); Pop(2)

0x2fb: PushEmpty(float, int, float, int)
0x2fc: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x2fd: IF (Stack[-1] == 0) GOTO 0x2ff; Pop(1)

0x2fe: Return(); Pop(4)

0x2ff: Push( Stack[5 + Tasks[-1].StackPointer] )
0x300: IF (Stack[-1] == 0) GOTO 0x307; Pop(1)

0x301: Push((int) -1)
0x302: Stack[5 + Tasks[-1].StackPointer] = Stack[5 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x303: Push((int) 0)
0x304: Pop(1); Push((bool) Stack[5 + Tasks[-1].StackPointer] > Stack[-1])
0x305: IF (Stack[-1] == 0) GOTO 0x307; Pop(1)

0x306: Return(); Pop(4)

0x307: @ rand(Stack[-2])
0x308: Pop(0)
0x309: PushEmpty(float)
0x30a: Call2 0x32d

0x30b: Pop(0)
0x30c: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x30d: IF (Stack[-1] == 0) GOTO 0x31a; Pop(1)

0x30e: @ irand(Stack[-1], Stack[-2])
0x30f: Pop(0)
0x310: Push((int) 1)
0x311: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x312: Push("attack")
0x313: Pop(1); Push(Stack[-1] + Stack[-2]);
0x314: @ Speak(Stack[-1])
0x315: Pop(1)
0x316: PushEmpty(int)
0x317: Call2 0x32b

0x318: Stack[5 + Tasks[-1].StackPointer] = Stack[-1]
0x319: Pop(1)
0x31a: Return(); Pop(4)

0x31b: PushEmpty(object)
0x31c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x31d: Call2 0x6db

0x31e: Pop(1)
0x31f: Return(); Pop(0)

0x320: Stack[-1] = (int) 0
0x321: Return(); Pop(0)

0x322: PushEmpty(string)
0x323: Stack[-1] = "attack_stay"
0x324: Call2 0x641

0x325: Pop(1)
0x326: Return(); Pop(0)

0x327: PushEmpty()
0x328: Return(); Pop(0)

0x329: Stack[-1] = (bool) 1
0x32a: Return(); Pop(0)

0x32b: Stack[-1] = (int) 1
0x32c: Return(); Pop(0)

0x32d: Stack[-1] = (float) 0.5
0x32e: Return(); Pop(0)

0x32f: PushEmpty(object)
0x330: Call2 0x66a

0x331: Pop(0)
0x332: @ RemoveActor(Stack[-1])
0x333: Pop(1)
0x334: @ Hold()
0x335: Pop(0)
0x336: Return(); Pop(0)

0x337: PushEmpty(bool, bool, bool, bool)
0x338: PushEmpty(object)
0x339: Stack[-1] = Stack[-10]
0x33a: Call2 0x6db

0x33b: Pop(1)
0x33c: Push((int) 1)
0x33d: Push((int) 5)
0x33e: @ SetTimer(Stack[-2], Stack[-1])
0x33f: Pop(2)
0x340: @ CanSee(Stack[-2], Stack[-9])
0x341: Pop(0)
0x342: Push(Stack[-2])
0x343: IF (Stack[-1] == 0) GOTO 0x34a; Pop(1)

0x344: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x345: PushEmpty(object)
0x346: Stack[-1] = Stack[-10]
0x347: Call2 0x62b

0x348: Pop(1)
0x349: GOTO 0x34b

0x34a: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x34b: PushEmpty(bool, object)
0x34c: Stack[-1] = Stack[-11]
0x34d: Call2 0x4f1

0x34e: Pop(1)
0x34f: IF (Stack[-1] == 0) GOTO 0x355; Pop(1)

0x350: PushEmpty(object)
0x351: Call2 0x66a

0x352: Pop(0)
0x353: @ SendPlayerEnemy(Stack[-10], Stack[-1])
0x354: Pop(1)
0x355: PushEmpty(bool, object, float, float, bool, bool)
0x356: Stack[-5] = Stack[-15]
0x357: Stack[-4] = Stack[-14]
0x358: Stack[-3] = Stack[-13]
0x359: Stack[-2] = Stack[-12]
0x35a: Stack[-1] = Stack[-11]
0x35b: Call2 0x3a0

0x35c: Stack[-7] = Stack[-6]
0x35d: Pop(6)
0x35e: Push( Stack[2 + Tasks[-1].StackPointer] )
0x35f: IF (Stack[-1] == 0) GOTO 0x363; Pop(1)

0x360: Push("head")
0x361: @ UnlookAsync(Stack[-1])
0x362: Pop(1)
0x363: Push((int) 1)
0x364: @ KillTimer(Stack[-1])
0x365: Pop(1)
0x366: Stack[-10] = Stack[-1]
0x367: Return(); Pop(4)

0x368: PushEmpty()
0x369: Push((int) 1)
0x36a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x36b: IF (Stack[-1] == 0) GOTO 0x371; Pop(1)

0x36c: PushEmpty(object)
0x36d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x36e: Call2 0x6db

0x36f: Pop(1)
0x370: GOTO 0x375

0x371: PushEmpty(int)
0x372: Stack[-1] = Stack[-2]
0x373: Call2 0x406

0x374: Pop(1)
0x375: Return(); Pop(0)

0x376: Push((int) 1)
0x377: @ KillTimer(Stack[-1])
0x378: Pop(1)
0x379: Push( Stack[2 + Tasks[-1].StackPointer] )
0x37a: IF (Stack[-1] == 0) GOTO 0x37f; Pop(1)

0x37b: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x37c: Push("head")
0x37d: @ UnlookAsync(Stack[-1])
0x37e: Pop(1)
0x37f: PushEmpty()
0x380: Call2 0x41c

0x381: Pop(0)
0x382: Return(); Pop(0)

0x383: PushEmpty()
0x384: PushEmpty(bool)
0x385: Stack[-1] = (bool) 0
0x386: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0x387: IF (Stack[-1] == 0) GOTO 0x38b; Pop(1)

0x388: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x389: IF (Stack[-1] == 0) GOTO 0x38b; Pop(1)

0x38a: Stack[-1] = (bool) 1
0x38b: IF (Stack[-1] == 0) GOTO 0x391; Pop(1)

0x38c: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x38d: PushEmpty(object)
0x38e: Stack[-1] = Stack[-2]
0x38f: Call2 0x62b

0x390: Pop(1)
0x391: Return(); Pop(0)

0x392: PushEmpty()
0x393: PushEmpty(bool)
0x394: Stack[-1] = (bool) 0
0x395: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0x396: IF (Stack[-1] == 0) GOTO 0x39a; Pop(1)

0x397: Push( Stack[2 + Tasks[-1].StackPointer] )
0x398: IF (Stack[-1] == 0) GOTO 0x39a; Pop(1)

0x399: Stack[-1] = (bool) 1
0x39a: IF (Stack[-1] == 0) GOTO 0x39f; Pop(1)

0x39b: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x39c: Push("head")
0x39d: @ UnlookAsync(Stack[-1])
0x39e: Pop(1)
0x39f: Return(); Pop(0)

0x3a0: PushEmpty(bool, bool, object, cvector, cvector, cvector, float, object, bool, bool, object, cvector, cvector, cvector, float, object)
0x3a1: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x3a2: Stack[1 + Tasks[-1].StackPointer] = Stack[-21]
0x3a3: Stack[-7] = Stack[-17]
0x3a4: PushEmpty(bool, object)
0x3a5: Stack[-1] = Stack[-23]
0x3a6: Call2 0x42c

0x3a7: Pop(1)
0x3a8: Pop(1); Push((bool) Stack[-1] == 0)
0x3a9: IF (Stack[-1] == 0) GOTO 0x3ac; Pop(1)

0x3aa: Stack[-22] = (bool) 0
0x3ab: Return(); Pop(16)

0x3ac: @@ GetPosition(Stack[-5])
0x3ad: Pop(0)
0x3ae: @ GetPosition(Stack[-4])
0x3af: Pop(0)
0x3b0: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x3b1: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x3b2: PushEmpty(bool)
0x3b3: Stack[-1] = (bool) 0
0x3b4: Push((int) 0)
0x3b5: Pop(1); Push((bool) Stack[-21] > Stack[-1])
0x3b6: IF (Stack[-1] == 0) GOTO 0x3bb; Pop(1)

0x3b7: Pop(0); Push(Stack[-20] * Stack[-20]);
0x3b8: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x3b9: IF (Stack[-1] == 0) GOTO 0x3bb; Pop(1)

0x3ba: Stack[-1] = (bool) 1
0x3bb: IF (Stack[-1] == 0) GOTO 0x3c0; Pop(1)

0x3bc: @ Stop()
0x3bd: Pop(0)
0x3be: Stack[-22] = (bool) 0
0x3bf: Return(); Pop(16)

0x3c0: Pop(0); Push(Stack[-20] * Stack[-20]);
0x3c1: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x3c2: IF (Stack[-1] == 0) GOTO 0x3fe; Pop(1)

0x3c3: @@ GetPFPosition(Stack[-5])
0x3c4: Pop(0)
0x3c5: @ FindPathTo(Stack[-1], Stack[-5])
0x3c6: Pop(0)
0x3c7: Pop(0); Push(( Stack[-1] != 0 )
0x3c8: IF (Stack[-1] == 0) GOTO 0x3cb; Pop(1)

0x3c9: Stack[-6] = Stack[-1]
0x3ca: Stack[-1] = 0
0x3cb: Pop(0); Push(( Stack[-6] != 0 )
0x3cc: IF (Stack[-1] == 0) GOTO 0x3ec; Pop(1)

0x3cd: Push(Stack[-7])
0x3ce: IF (Stack[-1] == 0) GOTO 0x3d5; Pop(1)

0x3cf: Stack[-7] = (bool) 0
0x3d0: @ RotatePath(Stack[-6], Stack[-8])
0x3d1: Pop(0)
0x3d2: Pop(0); Push((bool) Stack[-8] == 0)
0x3d3: IF (Stack[-1] == 0) GOTO 0x3d5; Pop(1)

0x3d4: GOTO 0x404

0x3d5: Push((int) 0)
0x3d6: Push((float)0.3)
0x3d7: @ SetTimer(Stack[-2], Stack[-1])
0x3d8: Pop(2)
0x3d9: PushEmpty(string)
0x3da: Call2 0x433

0x3db: Pop(0)
0x3dc: PushEmpty(string)
0x3dd: Call2 0x435

0x3de: Pop(0)
0x3df: @ FollowPath(Stack[-8], Stack[-20], Stack[-10], Stack[-2], Stack[-1])
0x3e0: Pop(2)
0x3e1: Pop(0); Push((bool) Stack[-8] == 0)
0x3e2: IF (Stack[-1] == 0) GOTO 0x3ea; Pop(1)

0x3e3: Push( Stack[0 + Tasks[-1].StackPointer] )
0x3e4: IF (Stack[-1] == 0) GOTO 0x3e8; Pop(1)

0x3e5: Stack[-6] = 0
0x3e6: GOTO 0x404

0x3e7: GOTO 0x3e9

0x3e8: GOTO 0x403

0x3e9: GOTO 0x3eb

0x3ea: Stack[-6] = 0
0x3eb: GOTO 0x3fc

0x3ec: Push((int) 0)
0x3ed: @ KillTimer(Stack[-1])
0x3ee: Pop(1)
0x3ef: Push((float)0.5)
0x3f0: @ Sleep(Stack[-1], Stack[-9])
0x3f1: Pop(1)
0x3f2: Pop(0); Push((bool) Stack[-8] == 0)
0x3f3: IF (Stack[-1] == 0) GOTO 0x3f8; Pop(1)

0x3f4: Push( Stack[0 + Tasks[-1].StackPointer] )
0x3f5: IF (Stack[-1] == 0) GOTO 0x3f8; Pop(1)

0x3f6: Stack[-6] = 0
0x3f7: GOTO 0x404

0x3f8: Push((int) 0)
0x3f9: Push((float)0.3)
0x3fa: @ SetTimer(Stack[-2], Stack[-1])
0x3fb: Pop(2)
0x3fc: Stack[-1] = 0
0x3fd: GOTO 0x402

0x3fe: Push((int) 0)
0x3ff: @ KillTimer(Stack[-1])
0x400: Pop(1)
0x401: GOTO 0x404

0x402: Stack[-6] = 0
0x403: GOTO 0x3a4

0x404: Stack[-22] = !Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x405: Return(); Pop(16)

0x406: PushEmpty()
0x407: Push((int) 0)
0x408: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x409: IF (Stack[-1] == 0) GOTO 0x40b; Pop(1)

0x40a: Return(); Pop(0)

0x40b: PushEmpty(bool, object)
0x40c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x40d: Call2 0x42c

0x40e: Pop(1)
0x40f: Pop(1); Push((bool) Stack[-1] == 0)
0x410: IF (Stack[-1] == 0) GOTO 0x412; Pop(1)

0x411: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x412: Push((int) 0)
0x413: @ KillTimer(Stack[-1])
0x414: Pop(1)
0x415: @ Stop()
0x416: Pop(0)
0x417: Return(); Pop(0)

0x418: PushEmpty()
0x419: @ RequestClearPath(Stack[-1])
0x41a: Pop(0)
0x41b: Return(); Pop(0)

0x41c: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x41d: Push((int) 0)
0x41e: @ KillTimer(Stack[-1])
0x41f: Pop(1)
0x420: @ Stop()
0x421: Pop(0)
0x422: Return(); Pop(0)

0x423: PushEmpty()
0x424: PushEmpty()
0x425: Call2 0x376

0x426: Pop(0)
0x427: PushEmpty(object)
0x428: Stack[-1] = Stack[-2]
0x429: Call2 0x77a

0x42a: Pop(1)
0x42b: Return(); Pop(0)

0x42c: PushEmpty()
0x42d: PushEmpty(bool, object)
0x42e: Stack[-1] = Stack[-3]
0x42f: Call2 0x58a

0x430: Stack[-4] = Stack[-2]
0x431: Pop(2)
0x432: Return(); Pop(0)

0x433: Stack[-1] = "walk"
0x434: Return(); Pop(0)

0x435: Stack[-1] = "run"
0x436: Return(); Pop(0)

0x437: PushEmpty()
0x438: PushEmpty()
0x439: Call2 0x721

0x43a: Pop(0)
0x43b: PushEmpty(object)
0x43c: Stack[-1] = Stack[-2]
0x43d: Call2 0x448

0x43e: Pop(1)
0x43f: Return(); Pop(0)

0x440: PushEmpty(object)
0x441: Call2 0x66a

0x442: Pop(0)
0x443: @ RemoveActor(Stack[-1])
0x444: Pop(1)
0x445: @ Hold()
0x446: Pop(0)
0x447: Return(); Pop(0)

0x448: PushEmpty()
0x449: EventDisable(0)
0x44a: PushEmpty(object)
0x44b: Stack[-1] = Stack[-2]
0x44c: Call2 0x461

0x44d: Pop(1)
0x44e: Push((int) 50)
0x44f: Push((int) 40)
0x450: @ SetRTEnvelope(Stack[-2], Stack[-1])
0x451: Pop(2)
0x452: EventEnable(0)
0x453: @ Hold()
0x454: Pop(0)
0x455: GOTO 0x453

0x456: Return(); Pop(0)

0x457: PushEmpty(bool, bool)
0x458: @ IsOverrideActive(Stack[-1])
0x459: Pop(0)
0x45a: Pop(0); Push((bool) Stack[-1] == 0)
0x45b: IF (Stack[-1] == 0) GOTO 0x460; Pop(1)

0x45c: PushEmpty(object)
0x45d: Stack[-1] = Stack[-4]
0x45e: Call2 0x6f5

0x45f: Pop(1)
0x460: Return(); Pop(2)

0x461: PushEmpty(cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector, cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector)
0x462: Pop(0); Push((bool) Stack[-21] == 0)
0x463: IF (Stack[-1] == 0) GOTO 0x469; Pop(1)

0x464: PushEmpty(string)
0x465: Stack[-1] = "fdie"
0x466: Call2 0x4bc

0x467: Pop(1)
0x468: GOTO 0x4bb

0x469: @@ GetPosition(Stack[-10])
0x46a: Pop(0)
0x46b: @ GetPosition(Stack[-9])
0x46c: Pop(0)
0x46d: @ GetDirection(Stack[-8])
0x46e: Pop(0)
0x46f: Stack[-7] = Stack[-9] - Stack[-10]; Pop(0);
0x470: Push(CvectorIndex(Stack[-7], 0))
0x471: Push(CvectorIndex(Stack[-9], 0))
0x472: Pop(2); Push(Stack[-2] * Stack[-1]);
0x473: Push(CvectorIndex(Stack[-8], 2))
0x474: Push(CvectorIndex(Stack[-10], 2))
0x475: Pop(2); Push(Stack[-2] * Stack[-1]);
0x476: Pop(2); Push(Stack[-2] + Stack[-1]);
0x477: Push((int) 0)
0x478: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x479: IF (Stack[-1] == 0) GOTO 0x47c; Pop(1)

0x47a: Stack[-6] = "fdie"
0x47b: GOTO 0x47d

0x47c: Stack[-6] = "bdie"
0x47d: @ RemoveRTEnvelope()
0x47e: Pop(0)
0x47f: @ SetDeathState()
0x480: Pop(0)
0x481: @ Stop()
0x482: Pop(0)
0x483: @ StopAsync()
0x484: Pop(0)
0x485: Stack[-5] = Stack[-21]
0x486: Push("GetScriptProperty")
0x487: Push((int) 2)
0x488: Pop(2); Push(IsFuncExist(Stack[-23], Stack[-2], Stack[-1]))
0x489: IF (Stack[-1] == 0) GOTO 0x495; Pop(1)

0x48a: Push("Owner")
0x48b: @@ HasScriptProperty(Stack[-5], Stack[-1])
0x48c: Pop(1)
0x48d: Push(Stack[-4])
0x48e: IF (Stack[-1] == 0) GOTO 0x495; Pop(1)

0x48f: Push("Owner")
0x490: @@ GetScriptProperty(Stack[-6], Stack[-1])
0x491: Pop(1)
0x492: Pop(0); Push((bool) Stack[-5] == 0)
0x493: IF (Stack[-1] == 0) GOTO 0x495; Pop(1)

0x494: Stack[-5] = Stack[-21]
0x495: Push("@GetEyesHeight")
0x496: Push((int) 1)
0x497: Pop(2); Push(IsFuncExist(Stack[-7], Stack[-2], Stack[-1]))
0x498: IF (Stack[-1] == 0) GOTO 0x4a4; Pop(1)

0x499: @@ GetEyesHeight(Stack[-2])
0x49a: Pop(0)
0x49b: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x49c: Push(CvectorIndex(Stack[-1], 1))
0x49d: Stack[-1] = Stack[-3]
0x49e: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x49f: Push("head")
0x4a0: @ LookAsync(Stack[-22], Stack[-1], Stack[-2])
0x4a1: Pop(1)
0x4a2: Stack[-3] = (bool) 1
0x4a3: GOTO 0x4a5

0x4a4: Stack[-3] = (bool) 0
0x4a5: PushEmpty(string)
0x4a6: Stack[-1] = Stack[-7]
0x4a7: Call2 0x641

0x4a8: Pop(1)
0x4a9: Push("all")
0x4aa: @ PlayAnimation(Stack[-1], Stack[-7])
0x4ab: Pop(1)
0x4ac: @ WaitForAnimEnd()
0x4ad: Pop(0)
0x4ae: Push(Stack[-3])
0x4af: IF (Stack[-1] == 0) GOTO 0x4b5; Pop(1)

0x4b0: @ StopAsync()
0x4b1: Pop(0)
0x4b2: Push("head")
0x4b3: @ UnlookAsync(Stack[-1])
0x4b4: Pop(1)
0x4b5: Push("all")
0x4b6: @ LockAnimationEnd(Stack[-1], Stack[-7])
0x4b7: Pop(1)
0x4b8: @ RemoveEnvelope()
0x4b9: Pop(0)
0x4ba: Stack[-5] = 0
0x4bb: Return(); Pop(20)

0x4bc: PushEmpty()
0x4bd: @ RemoveRTEnvelope()
0x4be: Pop(0)
0x4bf: @ SetDeathState()
0x4c0: Pop(0)
0x4c1: @ Stop()
0x4c2: Pop(0)
0x4c3: @ StopAsync()
0x4c4: Pop(0)
0x4c5: @ StopSecondaryAnimation()
0x4c6: Pop(0)
0x4c7: PushEmpty(string)
0x4c8: Stack[-1] = Stack[-2]
0x4c9: Call2 0x641

0x4ca: Pop(1)
0x4cb: Push("all")
0x4cc: @ PlayAnimation(Stack[-1], Stack[-2])
0x4cd: Pop(1)
0x4ce: @ WaitForAnimEnd()
0x4cf: Pop(0)
0x4d0: Push("all")
0x4d1: @ LockAnimationEnd(Stack[-1], Stack[-2])
0x4d2: Pop(1)
0x4d3: @ RemoveEnvelope()
0x4d4: Pop(0)
0x4d5: Return(); Pop(0)

0x4d6: PushEmpty()
0x4d7: Return(); Pop(0)

0x4d8: PushEmpty()
0x4d9: Return(); Pop(0)

0x4da: PushEmpty()
0x4db: Return(); Pop(0)

0x4dc: PushEmpty()
0x4dd: Push((int) 2)
0x4de: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4df: IF (Stack[-1] == 0) GOTO 0x4e3; Pop(1)

0x4e0: Stack[-2] = "fire"
0x4e1: Return(); Pop(0)

0x4e2: GOTO 0x4e8

0x4e3: Push((int) 1)
0x4e4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4e5: IF (Stack[-1] == 0) GOTO 0x4e8; Pop(1)

0x4e6: Stack[-2] = "bullet"
0x4e7: Return(); Pop(0)

0x4e8: Stack[-2] = "phys"
0x4e9: Return(); Pop(0)

0x4ea: PushEmpty(cvector, cvector, cvector, cvector)
0x4eb: @ GetPosition(Stack[-2])
0x4ec: Pop(0)
0x4ed: @@ GetPosition(Stack[-1])
0x4ee: Pop(0)
0x4ef: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x4f0: Return(); Pop(4)

0x4f1: PushEmpty(bool, bool)
0x4f2: @ IsPlayerActor(Stack[-3], Stack[-1])
0x4f3: Pop(0)
0x4f4: Stack[-4] = Stack[-1]
0x4f5: Return(); Pop(2)

0x4f6: PushEmpty(bool, bool)
0x4f7: Push("HasProperty")
0x4f8: Push((int) 2)
0x4f9: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x4fa: Pop(1); Push((bool) Stack[-1] == 0)
0x4fb: IF (Stack[-1] == 0) GOTO 0x4fe; Pop(1)

0x4fc: Stack[-5] = (bool) 0
0x4fd: Return(); Pop(2)

0x4fe: @@ HasProperty(Stack[-3], Stack[-1])
0x4ff: Pop(0)
0x500: Stack[-5] = Stack[-1]
0x501: Return(); Pop(2)

0x502: PushEmpty(float, float)
0x503: PushEmpty(bool, object, string)
0x504: Stack[-2] = Stack[-10]
0x505: Stack[-1] = Stack[-9]
0x506: Call2 0x4f6

0x507: Pop(2)
0x508: Pop(1); Push((bool) Stack[-1] == 0)
0x509: IF (Stack[-1] == 0) GOTO 0x50c; Pop(1)

0x50a: Stack[-8] = (bool) 0
0x50b: Return(); Pop(2)

0x50c: @@ GetProperty(Stack[-6], Stack[-1])
0x50d: Pop(0)
0x50e: PushEmpty(float, float, float, float)
0x50f: Stack[-3] = Stack[-5] + Stack[-9]; Pop(0);
0x510: Stack[-2] = Stack[-8]
0x511: Stack[-1] = Stack[-7]
0x512: Call2 0x681

0x513: Pop(3)
0x514: @@ SetProperty(Stack[-7], Stack[-1])
0x515: Pop(1)
0x516: Stack[-8] = (bool) 1
0x517: Return(); Pop(2)

0x518: PushEmpty(int, string, int, float, float, float, int, string, int, float, float, float)
0x519: PushEmpty(bool, object, string)
0x51a: Stack[-2] = Stack[-18]
0x51b: Stack[-1] = "health"
0x51c: Call2 0x4f6

0x51d: Pop(2)
0x51e: Pop(1); Push((bool) Stack[-1] == 0)
0x51f: IF (Stack[-1] == 0) GOTO 0x522; Pop(1)

0x520: Stack[-16] = (float) 0.0
0x521: Return(); Pop(12)

0x522: PushEmpty(bool, object, string)
0x523: Stack[-2] = Stack[-18]
0x524: Stack[-1] = "armor"
0x525: Call2 0x4f6

0x526: Pop(2)
0x527: Pop(1); Push((bool) Stack[-1] == 0)
0x528: IF (Stack[-1] == 0) GOTO 0x52b; Pop(1)

0x529: Stack[-6] = (int) 0
0x52a: GOTO 0x52e

0x52b: Push("armor")
0x52c: @@ GetProperty(Stack[-1], Stack[-7])
0x52d: Pop(1)
0x52e: Push("armor_")
0x52f: PushEmpty(string, int)
0x530: Stack[-1] = Stack[-16]
0x531: Call2 0x4dc

0x532: Pop(1)
0x533: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x534: PushEmpty(bool, object, string)
0x535: Stack[-2] = Stack[-18]
0x536: Stack[-1] = Stack[-8]
0x537: Call2 0x4f6

0x538: Pop(2)
0x539: Pop(1); Push((bool) Stack[-1] == 0)
0x53a: IF (Stack[-1] == 0) GOTO 0x53d; Pop(1)

0x53b: Stack[-4] = (int) 0
0x53c: GOTO 0x53f

0x53d: @@ GetProperty(Stack[-5], Stack[-4])
0x53e: Pop(0)
0x53f: PushEmpty(float, float, float)
0x540: Pop(0); Push(Stack[-9] + Stack[-7]);
0x541: Push((float)100.0)
0x542: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0x543: Stack[-1] = (int) 1
0x544: Call2 0x67a

0x545: Stack[-6] = Stack[-3]
0x546: Pop(3)
0x547: Push("health")
0x548: @@ GetProperty(Stack[-1], Stack[-3])
0x549: Pop(1)
0x54a: Push((int) 1)
0x54b: Pop(1); Push(Stack[-1] - Stack[-4]);
0x54c: Stack[-2] = Stack[-15] * Stack[-1]; Pop(1);
0x54d: Push("health")
0x54e: PushEmpty(float, float, float, float)
0x54f: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0x550: Stack[-2] = (int) 0
0x551: Stack[-1] = (int) 1
0x552: Call2 0x681

0x553: Pop(3)
0x554: @@ SetProperty(Stack[-2], Stack[-1])
0x555: Pop(2)
0x556: PushEmpty(bool, object)
0x557: Stack[-1] = Stack[-17]
0x558: Call2 0x4f1

0x559: Pop(1)
0x55a: IF (Stack[-1] == 0) GOTO 0x55f; Pop(1)

0x55b: PushEmpty(float)
0x55c: Stack[-1] = -Stack[-2]; Pop(0);
0x55d: Call2 0x6b4

0x55e: Pop(1)
0x55f: Stack[-16] = Stack[-1]
0x560: Return(); Pop(12)

0x561: PushEmpty(bool, bool)
0x562: @@ IsDead(Stack[-1])
0x563: Pop(0)
0x564: Stack[-4] = Stack[-1]
0x565: Return(); Pop(2)

0x566: PushEmpty(object, object, object, object)
0x567: Pop(0); Push((bool) Stack[-5] == 0)
0x568: IF (Stack[-1] == 0) GOTO 0x56b; Pop(1)

0x569: Stack[-6] = (bool) 0
0x56a: Return(); Pop(4)

0x56b: PushEmpty(bool)
0x56c: Stack[-1] = (bool) 0
0x56d: Push("IsDead")
0x56e: Push((int) 1)
0x56f: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x570: IF (Stack[-1] == 0) GOTO 0x577; Pop(1)

0x571: PushEmpty(bool, object)
0x572: Stack[-1] = Stack[-8]
0x573: Call2 0x561

0x574: Pop(1)
0x575: IF (Stack[-1] == 0) GOTO 0x577; Pop(1)

0x576: Stack[-1] = (bool) 1
0x577: IF (Stack[-1] == 0) GOTO 0x57a; Pop(1)

0x578: Stack[-6] = (bool) 0
0x579: Return(); Pop(4)

0x57a: @ GetScene(Stack[-2])
0x57b: Pop(0)
0x57c: Pop(0); Push((bool) Stack[-2] == 0)
0x57d: IF (Stack[-1] == 0) GOTO 0x580; Pop(1)

0x57e: Stack[-6] = (bool) 0
0x57f: Return(); Pop(4)

0x580: @@ GetScene(Stack[-1])
0x581: Pop(0)
0x582: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x583: IF (Stack[-1] == 0) GOTO 0x586; Pop(1)

0x584: Stack[-6] = (bool) 0
0x585: Return(); Pop(4)

0x586: Stack[-6] = (bool) 1
0x587: Return(); Pop(4)

0x588: Stack[-1] = 0
0x589: Stack[-2] = 0
0x58a: PushEmpty(int, int)
0x58b: PushEmpty(bool, object)
0x58c: Stack[-1] = Stack[-5]
0x58d: Call2 0x566

0x58e: Pop(1)
0x58f: Pop(1); Push((bool) Stack[-1] == 0)
0x590: IF (Stack[-1] == 0) GOTO 0x593; Pop(1)

0x591: Stack[-4] = (bool) 0
0x592: Return(); Pop(2)

0x593: PushEmpty(bool, object, string)
0x594: Stack[-2] = Stack[-6]
0x595: Stack[-1] = "noaccess"
0x596: Call2 0x4f6

0x597: Pop(2)
0x598: Pop(1); Push((bool) Stack[-1] == 0)
0x599: IF (Stack[-1] == 0) GOTO 0x59c; Pop(1)

0x59a: Stack[-4] = (bool) 1
0x59b: Return(); Pop(2)

0x59c: Push("noaccess")
0x59d: @@ GetProperty(Stack[-1], Stack[-2])
0x59e: Pop(1)
0x59f: Push((int) 0)
0x5a0: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x5a1: Return(); Pop(2)

0x5a2: PushEmpty(bool, int, cvector, cvector, cvector, cvector, string, bool, int, cvector, cvector, cvector, cvector, string)
0x5a3: Pop(0); Push((bool) Stack[-15] == 0)
0x5a4: IF (Stack[-1] == 0) GOTO 0x5a6; Pop(1)

0x5a5: Return(); Pop(14)

0x5a6: @ IsDead(Stack[-7])
0x5a7: Pop(0)
0x5a8: Push(Stack[-7])
0x5a9: IF (Stack[-1] == 0) GOTO 0x5ab; Pop(1)

0x5aa: Return(); Pop(14)

0x5ab: @ GetSecondaryAnimationType(Stack[-6])
0x5ac: Pop(0)
0x5ad: Push((int) 0)
0x5ae: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x5af: IF (Stack[-1] == 0) GOTO 0x5b1; Pop(1)

0x5b0: Return(); Pop(14)

0x5b1: @@ GetPosition(Stack[-5])
0x5b2: Pop(0)
0x5b3: @ GetPosition(Stack[-4])
0x5b4: Pop(0)
0x5b5: @ GetDirection(Stack[-3])
0x5b6: Pop(0)
0x5b7: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0x5b8: Push(CvectorIndex(Stack[-2], 0))
0x5b9: Push(CvectorIndex(Stack[-4], 0))
0x5ba: Pop(2); Push(Stack[-2] * Stack[-1]);
0x5bb: Push(CvectorIndex(Stack[-3], 2))
0x5bc: Push(CvectorIndex(Stack[-5], 2))
0x5bd: Pop(2); Push(Stack[-2] * Stack[-1]);
0x5be: Pop(2); Push(Stack[-2] + Stack[-1]);
0x5bf: Push((int) 0)
0x5c0: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x5c1: IF (Stack[-1] == 0) GOTO 0x5c4; Pop(1)

0x5c2: Stack[-1] = "fhit"
0x5c3: GOTO 0x5c5

0x5c4: Stack[-1] = "bhit"
0x5c5: Push("hit_react")
0x5c6: Push("1")
0x5c7: Pop(1); Push(Stack[-3] + Stack[-1]);
0x5c8: Push("2")
0x5c9: Pop(1); Push(Stack[-4] + Stack[-1]);
0x5ca: Push((int) -10)
0x5cb: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x5cc: Pop(4)
0x5cd: Return(); Pop(14)

0x5ce: PushEmpty(cvector, object, int, bool, cvector, cvector, int, int, cvector, cvector, object, int, bool, cvector, cvector, int, int, cvector)
0x5cf: PushEmpty(bool)
0x5d0: Stack[-1] = (bool) 0
0x5d1: PushEmpty(bool)
0x5d2: Stack[-1] = (bool) 0
0x5d3: Push(Stack[-23])
0x5d4: IF (Stack[-1] == 0) GOTO 0x5d9; Pop(1)

0x5d5: Push((int) 4)
0x5d6: Pop(1); Push((bool) Stack[-23] != Stack[-1])
0x5d7: IF (Stack[-1] == 0) GOTO 0x5d9; Pop(1)

0x5d8: Stack[-1] = (bool) 1
0x5d9: IF (Stack[-1] == 0) GOTO 0x5de; Pop(1)

0x5da: Push((int) 5)
0x5db: Pop(1); Push((bool) Stack[-22] != Stack[-1])
0x5dc: IF (Stack[-1] == 0) GOTO 0x5de; Pop(1)

0x5dd: Stack[-1] = (bool) 1
0x5de: IF (Stack[-1] == 0) GOTO 0x60d; Pop(1)

0x5df: PushEmpty(cvector, cvector)
0x5e0: PushEmpty(cvector, object)
0x5e1: Stack[-1] = Stack[-25]
0x5e2: Call2 0x4ea

0x5e3: Stack[-3] = Stack[-2]
0x5e4: Pop(2)
0x5e5: Call2 0x670

0x5e6: Stack[-11] = Stack[-2]
0x5e7: Pop(2)
0x5e8: @ CreateVectorVector(Stack[-8])
0x5e9: Pop(0)
0x5ea: Stack[-7] = (int) 1
0x5eb: Push("hit")
0x5ec: Pop(1); Push(Stack[-1] + Stack[-8]);
0x5ed: @ GetGeometryLocator(Stack[-1], Stack[-7], Stack[-6], Stack[-5])
0x5ee: Pop(1)
0x5ef: Pop(0); Push((bool) Stack[-6] == 0)
0x5f0: IF (Stack[-1] == 0) GOTO 0x5f2; Pop(1)

0x5f1: GOTO 0x5fb

0x5f2: Pop(0); Push(Stack[-4] | Stack[-9]);
0x5f3: Push((float)0.70711)
0x5f4: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x5f5: IF (Stack[-1] == 0) GOTO 0x5f8; Pop(1)

0x5f6: @@ add(Stack[-5])
0x5f7: Pop(0)
0x5f8: Push((int) 1)
0x5f9: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x5fa: GOTO 0x5eb

0x5fb: @@ size(Stack[-3])
0x5fc: Pop(0)
0x5fd: Push(Stack[-3])
0x5fe: IF (Stack[-1] == 0) GOTO 0x60c; Pop(1)

0x5ff: @ irand(Stack[-2], Stack[-3])
0x600: Pop(0)
0x601: @@ get(Stack[-1], Stack[-2])
0x602: Pop(0)
0x603: PushEmpty(object, int, float, cvector, cvector)
0x604: Stack[-5] = Stack[-26]
0x605: Stack[-4] = Stack[-25]
0x606: Stack[-3] = Stack[-24]
0x607: Stack[-2] = Stack[-6]
0x608: Stack[-1] = -Stack[-14]; Pop(0);
0x609: Call2 0x612

0x60a: Pop(5)
0x60b: Return(); Pop(18)

0x60c: Stack[-8] = 0
0x60d: PushEmpty(object)
0x60e: Stack[-1] = Stack[-22]
0x60f: Call2 0x5a2

0x610: Pop(1)
0x611: Return(); Pop(18)

0x612: PushEmpty(object, object, object, object)
0x613: @ GetScene(Stack[-2])
0x614: Pop(0)
0x615: Push("scripted")
0x616: Push("blood_dir.xml")
0x617: @ AddActorByType(Stack[-3], Stack[-2], Stack[-4], Stack[-8], Stack[-7], Stack[-1])
0x618: Pop(2)
0x619: PushEmpty(object)
0x61a: Stack[-1] = Stack[-10]
0x61b: Call2 0x5a2

0x61c: Pop(1)
0x61d: Return(); Pop(4)

0x61e: Stack[-1] = 0
0x61f: Stack[-2] = 0
0x620: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x621: @@ GetPosition(Stack[-3])
0x622: Pop(0)
0x623: @ GetPosition(Stack[-2])
0x624: Pop(0)
0x625: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0x626: Push(CvectorIndex(Stack[-1], 0))
0x627: Push(CvectorIndex(Stack[-2], 2))
0x628: @ RotateAsync(Stack[-2], Stack[-1])
0x629: Pop(2)
0x62a: Return(); Pop(6)

0x62b: PushEmpty(float, cvector, float, cvector)
0x62c: @@ GetEyesHeight(Stack[-2])
0x62d: Pop(0)
0x62e: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x62f: Push(CvectorIndex(Stack[-1], 1))
0x630: Stack[-1] = Stack[-3]
0x631: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x632: Push("head")
0x633: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x634: Pop(1)
0x635: Return(); Pop(4)

0x636: PushEmpty(bool, bool)
0x637: PushEmpty(bool, int, int)
0x638: Stack[-2] = Stack[-7]
0x639: Stack[-1] = Stack[-6]
0x63a: Call2 0x68c

0x63b: Pop(2)
0x63c: IF (Stack[-1] == 0) GOTO 0x640; Pop(1)

0x63d: Push((int) 0)
0x63e: @ AddItem(Stack[-2], Stack[-6], Stack[-1])
0x63f: Pop(1)
0x640: Return(); Pop(2)

0x641: PushEmpty(bool, int, bool, int, bool, float, cvector, cvector, bool, int, bool, int, bool, float, cvector, cvector)
0x642: @ IsExisting3DSound(Stack[-8], Stack[-17])
0x643: Pop(0)
0x644: Pop(0); Push((bool) Stack[-8] == 0)
0x645: IF (Stack[-1] == 0) GOTO 0x65a; Pop(1)

0x646: Stack[-7] = (int) 0
0x647: Push((int) 1)
0x648: Pop(1); Push(Stack[-8] + Stack[-1]);
0x649: Pop(1); Push(Stack[-18] + Stack[-1]);
0x64a: @ IsExisting3DSound(Stack[-7], Stack[-1])
0x64b: Pop(1)
0x64c: Pop(0); Push((bool) Stack[-6] == 0)
0x64d: IF (Stack[-1] == 0) GOTO 0x64f; Pop(1)

0x64e: GOTO 0x652

0x64f: Push((int) 1)
0x650: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x651: GOTO 0x647

0x652: Pop(0); Push((bool) Stack[-7] == 0)
0x653: IF (Stack[-1] == 0) GOTO 0x655; Pop(1)

0x654: Return(); Pop(16)

0x655: @ irand(Stack[-5], Stack[-7])
0x656: Pop(0)
0x657: Push((int) 1)
0x658: Pop(1); Push(Stack[-6] + Stack[-1]);
0x659: Stack[-18] = Stack[-18] + Stack[-1]; Pop(1);
0x65a: @ Is3DSoundLoaded(Stack[-4], Stack[-17])
0x65b: Pop(0)
0x65c: Push(Stack[-4])
0x65d: IF (Stack[-1] == 0) GOTO 0x669; Pop(1)

0x65e: @ GetEyesHeight(Stack[-3])
0x65f: Pop(0)
0x660: @ GetDirection(Stack[-2])
0x661: Pop(0)
0x662: Push((int) 50)
0x663: Stack[-2] = Stack[-3] * Stack[-1]; Pop(1);
0x664: Push(CvectorIndex(Stack[-1], 1))
0x665: Stack[-1] = Stack[-1] + Stack[-4]; Pop(0);
0x666: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x667: @ PlayGlobalSound(Stack[-17], Stack[-1])
0x668: Pop(0)
0x669: Return(); Pop(16)

0x66a: PushEmpty(object, object)
0x66b: @ self(Stack[-1])
0x66c: Pop(0)
0x66d: Stack[-3] = Stack[-1]
0x66e: Return(); Pop(2)

0x66f: Stack[-1] = 0
0x670: PushEmpty(float, float)
0x671: Pop(0); Push(Stack[-3] | Stack[-3]);
0x672: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x673: Push((float)0.0)
0x674: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x675: IF (Stack[-1] == 0) GOTO 0x678; Pop(1)

0x676: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x677: Return(); Pop(2)

0x678: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x679: Return(); Pop(2)

0x67a: PushEmpty()
0x67b: Pop(0); Push((bool) Stack[-2] < Stack[-1])
0x67c: IF (Stack[-1] == 0) GOTO 0x67f; Pop(1)

0x67d: Stack[-3] = Stack[-2]
0x67e: GOTO 0x680

0x67f: Stack[-3] = Stack[-1]
0x680: Return(); Pop(0)

0x681: PushEmpty()
0x682: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x683: IF (Stack[-1] == 0) GOTO 0x686; Pop(1)

0x684: Stack[-4] = Stack[-2]
0x685: Return(); Pop(0)

0x686: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x687: IF (Stack[-1] == 0) GOTO 0x68a; Pop(1)

0x688: Stack[-4] = Stack[-1]
0x689: Return(); Pop(0)

0x68a: Stack[-4] = Stack[-3]
0x68b: Return(); Pop(0)

0x68c: PushEmpty(int, int)
0x68d: @ irand(Stack[-1], Stack[-3])
0x68e: Pop(0)
0x68f: Stack[-5] = Stack[-1] < Stack[-4]; Pop(0);
0x690: Return(); Pop(2)

0x691: PushEmpty()
0x692: Pop(0); Push((bool) Stack[-2] == 0)
0x693: IF (Stack[-1] == 0) GOTO 0x696; Pop(1)

0x694: Stack[-3] = (bool) 0
0x695: Return(); Pop(0)

0x696: Push((int) 0)
0x697: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x698: IF (Stack[-1] == 0) GOTO 0x69d; Pop(1)

0x699: Push((int) 8)
0x69a: @ SendWorldWndMessage(Stack[-1])
0x69b: Pop(1)
0x69c: GOTO 0x6a6

0x69d: Push((int) 0)
0x69e: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x69f: IF (Stack[-1] == 0) GOTO 0x6a4; Pop(1)

0x6a0: Push((int) 9)
0x6a1: @ SendWorldWndMessage(Stack[-1])
0x6a2: Pop(1)
0x6a3: GOTO 0x6a6

0x6a4: Stack[-3] = (bool) 0
0x6a5: Return(); Pop(0)

0x6a6: PushEmpty(float)
0x6a7: Stack[-1] = Stack[-2]
0x6a8: Call2 0x6c5

0x6a9: Pop(1)
0x6aa: PushEmpty(bool, object, string, float, float, float)
0x6ab: Stack[-5] = Stack[-8]
0x6ac: Stack[-4] = "reputation"
0x6ad: Stack[-3] = Stack[-7]
0x6ae: Stack[-2] = (int) 0
0x6af: Stack[-1] = (int) 1
0x6b0: Call2 0x502

0x6b1: Pop(6)
0x6b2: Stack[-3] = (bool) 1
0x6b3: Return(); Pop(0)

0x6b4: PushEmpty(object, object)
0x6b5: @ CreateFloatVector(Stack[-1])
0x6b6: Pop(0)
0x6b7: @@ add(Stack[-3])
0x6b8: Pop(0)
0x6b9: Push((int) 0)
0x6ba: Pop(1); Push((bool) Stack[-4] < Stack[-1])
0x6bb: IF (Stack[-1] == 0) GOTO 0x6c0; Pop(1)

0x6bc: Push((float)0.7)
0x6bd: Push((int) 500)
0x6be: @ RumblePlay(Stack[-2], Stack[-1])
0x6bf: Pop(2)
0x6c0: Push((int) 15)
0x6c1: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x6c2: Pop(1)
0x6c3: Return(); Pop(2)

0x6c4: Stack[-1] = 0
0x6c5: PushEmpty(object, object)
0x6c6: @ CreateFloatVector(Stack[-1])
0x6c7: Pop(0)
0x6c8: @@ add(Stack[-3])
0x6c9: Pop(0)
0x6ca: Push((int) 16)
0x6cb: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x6cc: Pop(1)
0x6cd: Return(); Pop(2)

0x6ce: Stack[-1] = 0
0x6cf: PushEmpty(object, object)
0x6d0: @ FindActor(Stack[-1], Stack[-4])
0x6d1: Pop(0)
0x6d2: Pop(0); Push((bool) Stack[-1] == 0)
0x6d3: IF (Stack[-1] == 0) GOTO 0x6d6; Pop(1)

0x6d4: Stack[-5] = (bool) 0
0x6d5: Return(); Pop(2)

0x6d6: @ Trigger(Stack[-1], Stack[-3])
0x6d7: Pop(0)
0x6d8: Stack[-5] = (bool) 1
0x6d9: Return(); Pop(2)

0x6da: Stack[-1] = 0
0x6db: PushEmpty(bool, bool)
0x6dc: @ IsPlayerActor(Stack[-3], Stack[-1])
0x6dd: Pop(0)
0x6de: Push(Stack[-1])
0x6df: IF (Stack[-1] == 0) GOTO 0x6e3; Pop(1)

0x6e0: Push("attack")
0x6e1: @ PlayGlobalMusic(Stack[-1])
0x6e2: Pop(1)
0x6e3: Return(); Pop(2)

0x6e4: PushEmpty(object, object)
0x6e5: @ GetScene(Stack[-1])
0x6e6: Pop(0)
0x6e7: Push("battle")
0x6e8: PushEmpty(object)
0x6e9: Call2 0x66a

0x6ea: Pop(0)
0x6eb: @ BroadcastMessage(Stack[-2], Stack[-1], Stack[-3])
0x6ec: Pop(2)
0x6ed: Return(); Pop(2)

0x6ee: Stack[-1] = 0
0x6ef: PushEmpty(int, int)
0x6f0: Push("branch")
0x6f1: @ GetVariable(Stack[-1], Stack[-2])
0x6f2: Pop(1)
0x6f3: Stack[-3] = Stack[-1]
0x6f4: Return(); Pop(2)

0x6f5: PushEmpty()
0x6f6: PushEmpty(int)
0x6f7: Call2 0x6ef

0x6f8: Pop(0)
0x6f9: Push((int) 1)
0x6fa: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x6fb: IF (Stack[-1] == 0) GOTO 0x6ff; Pop(1)

0x6fc: @ WorkWithCorpse(Stack[-1])
0x6fd: Pop(0)
0x6fe: GOTO 0x701

0x6ff: @ Barter(Stack[-1])
0x700: Pop(0)
0x701: Return(); Pop(0)

0x702: PushEmpty(int, bool, int, bool)
0x703: Pop(0); Push((bool) Stack[-6] > Stack[-5])
0x704: IF (Stack[-1] == 0) GOTO 0x709; Pop(1)

0x705: Push("GenerateMoney: iMin > iMax")
0x706: @ Trace(Stack[-1])
0x707: Pop(1)
0x708: Return(); Pop(4)

0x709: Stack[-2] = (int) 0
0x70a: Pop(0); Push((bool) Stack[-6] != Stack[-5])
0x70b: IF (Stack[-1] == 0) GOTO 0x710; Pop(1)

0x70c: Pop(0); Push(Stack[-5] - Stack[-6]);
0x70d: @ irand(Stack[-3], Stack[-1])
0x70e: Pop(1)
0x70f: GOTO 0x714

0x710: Push((int) 0)
0x711: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x712: IF (Stack[-1] == 0) GOTO 0x714; Pop(1)

0x713: Return(); Pop(4)

0x714: Stack[-2] = Stack[-2] + Stack[-6]; Pop(0);
0x715: Push((int) 0)
0x716: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x717: IF (Stack[-1] == 0) GOTO 0x719; Pop(1)

0x718: Return(); Pop(4)

0x719: PushEmpty(int, string)
0x71a: Stack[-1] = "Money"
0x71b: Call2 0x73f

0x71c: Pop(1)
0x71d: Push((int) 0)
0x71e: @ AddItem(Stack[-3], Stack[-2], Stack[-1], Stack[-4])
0x71f: Pop(2)
0x720: Return(); Pop(4)

0x721: PushEmpty(int, bool, int, bool)
0x722: Push((int) 0)
0x723: @ ClearSubContainer(Stack[-1])
0x724: Pop(1)
0x725: PushEmpty(int, int)
0x726: Stack[-2] = (int) 300
0x727: Stack[-1] = (int) 750
0x728: Call2 0x702

0x729: Pop(2)
0x72a: PushEmpty(string, int, int)
0x72b: Stack[-3] = "Knife"
0x72c: Stack[-2] = (int) 1
0x72d: Stack[-1] = (int) 8
0x72e: Call2 0x636

0x72f: Pop(3)
0x730: PushEmpty(string, int, int)
0x731: Stack[-3] = "lockpick"
0x732: Stack[-2] = (int) 1
0x733: Stack[-1] = (int) 6
0x734: Call2 0x636

0x735: Pop(3)
0x736: PushEmpty(int, string)
0x737: Stack[-1] = "grabitel_mark"
0x738: Call2 0x73f

0x739: Pop(1)
0x73a: Push((int) 0)
0x73b: Push((int) 1)
0x73c: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x73d: Pop(3)
0x73e: Return(); Pop(4)

0x73f: PushEmpty(int, int)
0x740: @ GetInvItemByName(Stack[-1], Stack[-3])
0x741: Pop(0)
0x742: Stack[-4] = Stack[-1]
0x743: Return(); Pop(2)

0x744: PushEmpty()
0x745: PushEmpty(bool, string, string)
0x746: Stack[-2] = "quest_d4_03"
0x747: Stack[-1] = "death"
0x748: Call2 0x6cf

0x749: Pop(3)
0x74a: PushEmpty(bool, object)
0x74b: Stack[-1] = Stack[-3]
0x74c: Call2 0x4f1

0x74d: Pop(1)
0x74e: IF (Stack[-1] == 0) GOTO 0x754; Pop(1)

0x74f: PushEmpty(bool, object, float)
0x750: Stack[-2] = Stack[-4]
0x751: Stack[-1] = (float) 0.03
0x752: Call2 0x691

0x753: Pop(3)
0x754: PushEmpty(object)
0x755: Stack[-1] = Stack[-2]
0x756: Push(-1, 0); TaskCall(3)
0x757: Call2 0x437

0x758: Pop(-1, 0); TaskReturn
0x759: Pop(1)
0x75a: Return(); Pop(0)

0x75b: PushEmpty()
0x75c: PushEmpty(object, int, float)
0x75d: Stack[-3] = Stack[-7]
0x75e: Stack[-2] = Stack[-6]
0x75f: Stack[-1] = Stack[-5]
0x760: Call2 0x5ce

0x761: Pop(3)
0x762: Return(); Pop(0)

0x763: PushEmpty()
0x764: PushEmpty(object, int, float, cvector, cvector)
0x765: Stack[-5] = Stack[-11]
0x766: Stack[-4] = Stack[-10]
0x767: Stack[-3] = Stack[-9]
0x768: Stack[-2] = Stack[-7]
0x769: Stack[-1] = Stack[-6]
0x76a: Call2 0x612

0x76b: Pop(5)
0x76c: Return(); Pop(0)

0x76d: PushEmpty(float, float)
0x76e: Push("health")
0x76f: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x770: IF (Stack[-1] == 0) GOTO 0x779; Pop(1)

0x771: Push("health")
0x772: @ GetProperty(Stack[-1], Stack[-2])
0x773: Pop(1)
0x774: Push((int) 0)
0x775: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x776: IF (Stack[-1] == 0) GOTO 0x779; Pop(1)

0x777: @ SignalDeath(Stack[-4])
0x778: Pop(0)
0x779: Return(); Pop(2)

0x77a: PushEmpty()
0x77b: PushEmpty(object)
0x77c: Stack[-1] = Stack[-2]
0x77d: Call2 0x744

0x77e: Pop(1)
0x77f: Return(); Pop(0)

