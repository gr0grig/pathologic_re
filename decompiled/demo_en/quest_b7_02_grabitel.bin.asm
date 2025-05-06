GlobalVarCount = 1
	G_VAR_0 bool 

Strings:
	all
	aattack_begin1
	aattack_end1
	knife
	scripted
	grabitel_knife.xml
	Owner
	SetScriptProperty
	Target
	GetPosition
	GetEyesHeight
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
	head
	walk
	run
	cleanup
	player
	fdie
	bdie
	GetScriptProperty
	HasScriptProperty
	GetScriptProperty
	@GetEyesHeight
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
	Knife
	lockpick
	grabitel_mark

Import:
	Face (1 args)
	PlayAnimation (2 args)
	WaitForAnimEnd (0 args)
	StopAsync (0 args)
	GetScene (1 args)
	GetGeometryLocator (3 args)
	AddActorByType (6 args)
	IsPlayerActor (2 args)
	PlayGlobalMusic (1 args)
	SendPlayerEnemy (2 args)
	GetPFPosition (1 args)
	CanReachByPF (2 args)
	rand (1 args)
	SetSpeed (1 args)
	Stop (0 args)
	Sleep (1 args)
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
	Hold (0 args)
	RemoveActor (1 args)
	FindActor (2 args)
	SetRTEnvelope (2 args)
	IsOverrideActive (1 args)
	GetDirection (1 args)
	RemoveRTEnvelope (0 args)
	SetDeathState (0 args)
	LookAsync (3 args)
	LockAnimationEnd (2 args)
	RemoveEnvelope (0 args)
	StopSecondaryAnimation (0 args)
	Rotate (3 args)
	IsDead (1 args)
	GetSecondaryAnimationType (1 args)
	FadeSecondaryAnimation (4 args)
	CreateVectorVector (1 args)
	GetGeometryLocator (4 args)
	RotateAsync (2 args)
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
	WorkWithCorpse (1 args)
	Barter (1 args)
	Trace (1 args)
	AddItem (4 args)
	CreateInvItem (1 args)
	ClearSubContainer (1 args)
	GetInvItemByName (2 args)
	GetProperty (2 args)
	SignalDeath (1 args)

RunOp = 0x477
RunTask = 3

GlobalTasks: 
	GTASK_0 Vars = (bool) Params = 2
		EVENT_17 Op = 0x6b Vars = (object)
		EVENT_30 Op = 0x71 Vars = (object, object, bool)
		EVENT_26 Op = 0x78 Vars = (string)
	GTASK_1 Vars = (object, int, int, bool, float, int) Params = 2
		EVENT_17 Op = 0xb6 Vars = (object)
		EVENT_30 Op = 0xbc Vars = (object, object, bool)
		EVENT_26 Op = 0xc3 Vars = (string)
	GTASK_2 Vars = (bool, object, bool) Params = 6
		EVENT_17 Op = 0x35f Vars = (object)
		EVENT_30 Op = 0x365 Vars = (object, object, bool)
		EVENT_26 Op = 0x36c Vars = (string)
		EVENT_7 Op = 0x3a8 Vars = (int)
		EVENT_1 Op = 0x3c3 Vars = (object)
		EVENT_2 Op = 0x3d2 Vars = (object)
		EVENT_10 Op = 0x458 Vars = (object)
		EVENT_41 Op = 0x463 Vars = (object)
	GTASK_3  Params = 0
		EVENT_5 Op = 0x47a Vars = ()
		EVENT_26 Op = 0x480 Vars = (string)
	GTASK_4  Params = 0
	GTASK_5  Params = 1
		EVENT_0 Op = 0x4cf Vars = (object)
		EVENT_22 Op = 0x54e Vars = (object, int, float, float)
		EVENT_16 Op = 0x550 Vars = (object, string)
		EVENT_41 Op = 0x552 Vars = (object)

Events:
EVENT_6 Op = 0x855 Vars = ()
EVENT_22 Op = 0x87a Vars = (object, int, float, float)
EVENT_43 Op = 0x882 Vars = (object, int, float, float, cvector, cvector)
EVENT_16 Op = 0x88c Vars = (object, string)
EVENT_41 Op = 0x899 Vars = (object)

0x0: PushEmpty(object, cvector, bool, object, cvector, float, cvector, object, cvector, bool, object, cvector, float, cvector)
0x1: PushEmpty(object)
0x2: Stack[-1] = Stack[-16]
0x3: Call2 0x79a

0x4: Pop(1)
0x5: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x6: PushEmpty(bool, object)
0x7: Stack[-1] = Stack[-17]
0x8: Call2 0x64b

0x9: Pop(2)
0xa: PushEmpty(bool, object)
0xb: Stack[-1] = Stack[-17]
0xc: Call2 0x629

0xd: Pop(1)
0xe: Pop(1); Push((bool) Stack[-1] == 0)
0xf: IF (Stack[-1] == 0) GOTO 0x12; Pop(1)

0x10: Stack[-16] = (bool) 0
0x11: Return(); Pop(14)

0x12: PushEmpty()
0x13: Call2 0x7a3

0x14: Pop(0)
0x15: @ Face(Stack[-15])
0x16: Pop(0)
0x17: Push("all")
0x18: Push("aattack_begin1")
0x19: @ PlayAnimation(Stack[-2], Stack[-1])
0x1a: Pop(2)
0x1b: @ WaitForAnimEnd()
0x1c: Pop(0)
0x1d: PushEmpty(bool, object)
0x1e: Stack[-1] = Stack[-17]
0x1f: Call2 0x629

0x20: Pop(1)
0x21: Pop(1); Push((bool) Stack[-1] == 0)
0x22: IF (Stack[-1] == 0) GOTO 0x27; Pop(1)

0x23: @ StopAsync()
0x24: Pop(0)
0x25: Stack[-16] = (bool) 0
0x26: Return(); Pop(14)

0x27: Push("all")
0x28: Push("aattack_end1")
0x29: @ PlayAnimation(Stack[-2], Stack[-1])
0x2a: Pop(2)
0x2b: @ GetScene(Stack[-7])
0x2c: Pop(0)
0x2d: Push("knife")
0x2e: @ GetGeometryLocator(Stack[-1], Stack[-6], Stack[-7])
0x2f: Pop(1)
0x30: Push("scripted")
0x31: Push(CVector(0.0, 0.0, 1.0))
0x32: Push("grabitel_knife.xml")
0x33: @ AddActorByType(Stack[-7], Stack[-3], Stack[-10], Stack[-9], Stack[-2], Stack[-1])
0x34: Pop(3)
0x35: Push("Owner")
0x36: PushEmpty(object)
0x37: Call2 0x71c

0x38: Pop(0)
0x39: @@ SetScriptProperty(Stack[-2], Stack[-1])
0x3a: Pop(2)
0x3b: Push("Target")
0x3c: @@ SetScriptProperty(Stack[-1], Stack[-16])
0x3d: Pop(1)
0x3e: @@ GetPosition(Stack[-3])
0x3f: Pop(0)
0x40: @@ GetEyesHeight(Stack[-2])
0x41: Pop(0)
0x42: Push(CvectorIndex(Stack[-3], 1))
0x43: Push((int) 10)
0x44: Pop(1); Push(Stack[-4] - Stack[-1]);
0x45: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x46: CvectorIndex(Stack[-4], 1) = Stack[-1];
0x47: PushEmpty(cvector, cvector, cvector, float)
0x48: Stack[-3] = Stack[-10]
0x49: Stack[-2] = Stack[-7]
0x4a: Stack[-1] = (float) 2000.0
0x4b: Call2 0x7b4

0x4c: Stack[-5] = Stack[-4]
0x4d: Pop(4)
0x4e: Push("StartDirection")
0x4f: @@ SetScriptProperty(Stack[-1], Stack[-2])
0x50: Pop(1)
0x51: @ WaitForAnimEnd()
0x52: Pop(0)
0x53: @ StopAsync()
0x54: Pop(0)
0x55: Push( Stack[0 + Tasks[-1].StackPointer] )
0x56: IF (Stack[-1] == 0) GOTO 0x59; Pop(1)

0x57: Stack[-16] = (bool) 1
0x58: Return(); Pop(14)

0x59: PushEmpty(bool, object)
0x5a: Stack[-1] = Stack[-17]
0x5b: Call2 0x629

0x5c: Pop(1)
0x5d: Pop(1); Push((bool) Stack[-1] == 0)
0x5e: IF (Stack[-1] == 0) GOTO 0x61; Pop(1)

0x5f: Stack[-16] = (bool) 0
0x60: Return(); Pop(14)

0x61: PushEmpty(bool, object)
0x62: Stack[-1] = Stack[-17]
0x63: Push(-2, 6); TaskCall(1)
0x64: Call2 0x7e

0x65: Pop(-2, 6); TaskReturn
0x66: Stack[-18] = Stack[-2]
0x67: Pop(2)
0x68: Return(); Pop(14)

0x69: Stack[-4] = 0
0x6a: Stack[-7] = 0
0x6b: PushEmpty()
0x6c: PushEmpty(object)
0x6d: Stack[-1] = Stack[-2]
0x6e: Call2 0x875

0x6f: Pop(1)
0x70: Return(); Pop(0)

0x71: PushEmpty()
0x72: PushEmpty(bool, object, object)
0x73: Stack[-2] = Stack[-6]
0x74: Stack[-1] = Stack[-5]
0x75: Call2 0x877

0x76: Pop(3)
0x77: Return(); Pop(0)

0x78: PushEmpty()
0x79: Push("kill")
0x7a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7b: IF (Stack[-1] == 0) GOTO 0x7d; Pop(1)

0x7c: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x7d: Return(); Pop(0)

0x7e: PushEmpty()
0x7f: Push(GlobalVars[0])
0x80: Stack[-1] = (bool) 0
0x81: GlobalVars[0] = Stack[-1]; Pop(1)
0x82: PushEmpty(object, bool, float)
0x83: Stack[-3] = Stack[-4]
0x84: Stack[-2] = (bool) 1
0x85: Stack[-1] = (float) 200.0
0x86: Call2 0xcb

0x87: Pop(3)
0x88: PushEmpty(bool)
0x89: Stack[-1] = (bool) 0
0x8a: Push(GlobalVars[0])
0x8b: IF (Stack[-1] == 0) GOTO 0x8f; Pop(1)

0x8c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x8d: IF (Stack[-1] == 0) GOTO 0x8f; Pop(1)

0x8e: Stack[-1] = (bool) 1
0x8f: IF (Stack[-1] == 0) GOTO 0x96; Pop(1)

0x90: Push("all")
0x91: Push("attack_off")
0x92: @ PlayAnimation(Stack[-2], Stack[-1])
0x93: Pop(2)
0x94: @ WaitForAnimEnd()
0x95: Pop(0)
0x96: Push(GlobalVars[0])
0x97: Stack[-3] = Stack[-1]
0x98: Pop(1)
0x99: Return(); Pop(0)

0x9a: PushEmpty()
0x9b: Stack[-3] = (float) 0.15
0x9c: Return(); Pop(0)

0x9d: PushEmpty()
0x9e: Stack[-3] = (int) 0
0x9f: Return(); Pop(0)

0xa0: Stack[-1] = (int) 1
0xa1: Return(); Pop(0)

0xa2: PushEmpty()
0xa3: PushEmpty(bool)
0xa4: Stack[-1] = (bool) 0
0xa5: Push((int) 0)
0xa6: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0xa7: IF (Stack[-1] == 0) GOTO 0xae; Pop(1)

0xa8: PushEmpty(bool, object)
0xa9: Stack[-1] = Stack[-5]
0xaa: Call2 0x5e1

0xab: Pop(1)
0xac: IF (Stack[-1] == 0) GOTO 0xae; Pop(1)

0xad: Stack[-1] = (bool) 1
0xae: IF (Stack[-1] == 0) GOTO 0xb5; Pop(1)

0xaf: Push(GlobalVars[0])
0xb0: Stack[-1] = (bool) 1
0xb1: GlobalVars[0] = Stack[-1]; Pop(1)
0xb2: PushEmpty()
0xb3: Call2 0x283

0xb4: Pop(0)
0xb5: Return(); Pop(0)

0xb6: PushEmpty()
0xb7: PushEmpty(object)
0xb8: Stack[-1] = Stack[-2]
0xb9: Call2 0x875

0xba: Pop(1)
0xbb: Return(); Pop(0)

0xbc: PushEmpty()
0xbd: PushEmpty(bool, object, object)
0xbe: Stack[-2] = Stack[-6]
0xbf: Stack[-1] = Stack[-5]
0xc0: Call2 0x877

0xc1: Pop(3)
0xc2: Return(); Pop(0)

0xc3: PushEmpty()
0xc4: Push("kill")
0xc5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc6: IF (Stack[-1] == 0) GOTO 0xca; Pop(1)

0xc7: Push(GlobalVars[0])
0xc8: Stack[-1] = (bool) 1
0xc9: GlobalVars[0] = Stack[-1]; Pop(1)
0xca: Return(); Pop(0)

0xcb: PushEmpty(float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float, float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float)
0xcc: PushEmpty()
0xcd: Call2 0x1b0

0xce: Pop(0)
0xcf: Stack[5 + Tasks[-1].StackPointer] = (int)0
0xd0: Push("@GetAttackDistance")
0xd1: Push((int) 1)
0xd2: Pop(2); Push(IsFuncExist(Stack[-27], Stack[-2], Stack[-1]))
0xd3: IF (Stack[-1] == 0) GOTO 0xd9; Pop(1)

0xd4: @@ GetAttackDistance(Stack[-11])
0xd5: Pop(0)
0xd6: Push((int) 50)
0xd7: Stack[-12] = Stack[-12] + Stack[-1]; Pop(1);
0xd8: GOTO 0xda

0xd9: Stack[-11] = Stack[-23]
0xda: Push((int) 150)
0xdb: Pop(1); Push((bool) Stack[-12] >= Stack[-1])
0xdc: IF (Stack[-1] == 0) GOTO 0xde; Pop(1)

0xdd: Stack[-11] = (int) 150
0xde: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xdf: Stack[0 + Tasks[-1].StackPointer] = Stack[-25]
0xe0: @ IsPlayerActor(Stack[-0], Stack[-8])
0xe1: Pop(0)
0xe2: Push(Stack[-8])
0xe3: IF (Stack[-1] == 0) GOTO 0xec; Pop(1)

0xe4: Push("attack")
0xe5: @ PlayGlobalMusic(Stack[-1])
0xe6: Pop(1)
0xe7: PushEmpty(object)
0xe8: Call2 0x71c

0xe9: Pop(0)
0xea: @ SendPlayerEnemy(Stack[-26], Stack[-1])
0xeb: Pop(1)
0xec: Push(Stack[-24])
0xed: IF (Stack[-1] == 0) GOTO 0xf0; Pop(1)

0xee: Stack[-7] = (bool) 0
0xef: GOTO 0xf1

0xf0: Stack[-7] = (bool) 1
0xf1: Push((float)300.0)
0xf2: Stack[-7] = Stack[-1] + Stack[-12]; Pop(1);
0xf3: PushEmpty(bool)
0xf4: Stack[-1] = (bool) 0
0xf5: PushEmpty(bool, object)
0xf6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf7: Call2 0x629

0xf8: Pop(1)
0xf9: IF (Stack[-1] == 0) GOTO 0xfd; Pop(1)

0xfa: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0xfb: IF (Stack[-1] == 0) GOTO 0xfd; Pop(1)

0xfc: Stack[-1] = (bool) 1
0xfd: IF (Stack[-1] == 0) GOTO 0x19f; Pop(1)

0xfe: PushEmpty()
0xff: Call2 0x34f

0x100: Pop(0)
0x101: @@ GetPFPosition(Stack[-10])
0x102: Pop(0)
0x103: @ GetPFPosition(Stack[-9])
0x104: Pop(0)
0x105: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0x106: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x107: Pop(0); Push(Stack[-6] * Stack[-6]);
0x108: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0x109: IF (Stack[-1] == 0) GOTO 0x119; Pop(1)

0x10a: PushEmpty(bool, object, float, float, bool, bool)
0x10b: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0x10c: Stack[-4] = Stack[-17]
0x10d: Stack[-3] = (float) 3000.0
0x10e: Stack[-2] = (bool) 1
0x10f: Stack[-1] = (bool) 0
0x110: Push(-6, 3); TaskCall(2)
0x111: Call2 0x377

0x112: Pop(-6, 3); TaskReturn
0x113: Pop(5)
0x114: Pop(1); Push((bool) Stack[-1] == 0)
0x115: IF (Stack[-1] == 0) GOTO 0x117; Pop(1)

0x116: GOTO 0x19f

0x117: Stack[-7] = (bool) 0
0x118: GOTO 0x19e

0x119: Pop(0); Push(Stack[-23] * Stack[-23]);
0x11a: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0x11b: IF (Stack[-1] == 0) GOTO 0x196; Pop(1)

0x11c: @@ GetPFPosition(Stack[-3])
0x11d: Pop(0)
0x11e: @ CanReachByPF(Stack[-2], Stack[-3])
0x11f: Pop(0)
0x120: Pop(0); Push((bool) Stack[-2] == 0)
0x121: IF (Stack[-1] == 0) GOTO 0x131; Pop(1)

0x122: PushEmpty(bool, object, float, float, bool, bool)
0x123: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0x124: Stack[-4] = Stack[-17]
0x125: Stack[-3] = (float) 3000.0
0x126: Stack[-2] = (bool) 1
0x127: Stack[-1] = (bool) 0
0x128: Push(-6, 3); TaskCall(2)
0x129: Call2 0x377

0x12a: Pop(-6, 3); TaskReturn
0x12b: Pop(5)
0x12c: Pop(1); Push((bool) Stack[-1] == 0)
0x12d: IF (Stack[-1] == 0) GOTO 0x12f; Pop(1)

0x12e: GOTO 0x19f

0x12f: Stack[-7] = (bool) 0
0x130: GOTO 0xf3

0x131: Pop(0); Push((bool) Stack[-7] == 0)
0x132: IF (Stack[-1] == 0) GOTO 0x14a; Pop(1)

0x133: PushEmpty(object)
0x134: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x135: Call2 0x6d2

0x136: Pop(1)
0x137: Push("all")
0x138: Push("attack_on")
0x139: @ PlayAnimation(Stack[-2], Stack[-1])
0x13a: Pop(2)
0x13b: @ WaitForAnimEnd()
0x13c: Pop(0)
0x13d: PushEmpty()
0x13e: Call2 0x34f

0x13f: Pop(0)
0x140: @ StopAsync()
0x141: Pop(0)
0x142: Stack[-7] = (bool) 1
0x143: PushEmpty(bool, object)
0x144: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x145: Call2 0x629

0x146: Pop(1)
0x147: Pop(1); Push((bool) Stack[-1] == 0)
0x148: IF (Stack[-1] == 0) GOTO 0x14a; Pop(1)

0x149: GOTO 0x19f

0x14a: @ rand(Stack[-1])
0x14b: Pop(0)
0x14c: PushEmpty(bool)
0x14d: Stack[-1] = (bool) 1
0x14e: Push((float)0.2)
0x14f: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x150: IF (Stack[-1] == 0) GOTO 0x156; Pop(1)

0x151: PushEmpty(bool)
0x152: Call2 0x324

0x153: Pop(0)
0x154: IF (Stack[-1] == 0) GOTO 0x156; Pop(1)

0x155: Stack[-1] = (bool) 0
0x156: IF (Stack[-1] == 0) GOTO 0x167; Pop(1)

0x157: @ Face(Stack[-0])
0x158: Pop(0)
0x159: PushEmpty()
0x15a: Call2 0x354

0x15b: Pop(0)
0x15c: Push("all")
0x15d: Push("attack_stay")
0x15e: @ PlayAnimation(Stack[-2], Stack[-1])
0x15f: Pop(2)
0x160: PushEmpty(bool, float)
0x161: Stack[-1] = Stack[-25]
0x162: Call2 0x2a0

0x163: Pop(2)
0x164: @ StopAsync()
0x165: Pop(0)
0x166: GOTO 0x195

0x167: @ Face(Stack[-0])
0x168: Pop(0)
0x169: Push("all")
0x16a: Push("fjump")
0x16b: @ PlayAnimation(Stack[-2], Stack[-1])
0x16c: Pop(2)
0x16d: @ WaitForAnimEnd()
0x16e: Pop(0)
0x16f: PushEmpty()
0x170: Call2 0x34f

0x171: Pop(0)
0x172: Push(CVector(0.0, 0.0, 0.0))
0x173: @ SetSpeed(Stack[-1])
0x174: Pop(1)
0x175: @ Stop()
0x176: Pop(0)
0x177: @ StopAsync()
0x178: Pop(0)
0x179: PushEmpty(bool)
0x17a: Call2 0x324

0x17b: Pop(0)
0x17c: Pop(1); Push((bool) Stack[-1] == 0)
0x17d: IF (Stack[-1] == 0) GOTO 0x195; Pop(1)

0x17e: PushEmpty(bool, object)
0x17f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x180: Call2 0x629

0x181: Pop(1)
0x182: Pop(1); Push((bool) Stack[-1] == 0)
0x183: IF (Stack[-1] == 0) GOTO 0x185; Pop(1)

0x184: GOTO 0x19f

0x185: @@ GetPFPosition(Stack[-10])
0x186: Pop(0)
0x187: @ GetPFPosition(Stack[-9])
0x188: Pop(0)
0x189: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0x18a: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x18b: Pop(0); Push(Stack[-23] * Stack[-23]);
0x18c: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x18d: IF (Stack[-1] == 0) GOTO 0x195; Pop(1)

0x18e: PushEmpty(bool, float)
0x18f: Stack[-1] = Stack[-25]
0x190: Call2 0x1fa

0x191: Pop(1)
0x192: Pop(1); Push((bool) Stack[-1] == 0)
0x193: IF (Stack[-1] == 0) GOTO 0x195; Pop(1)

0x194: GOTO 0x19f

0x195: GOTO 0x19e

0x196: PushEmpty(bool, float)
0x197: Stack[-1] = Stack[-25]
0x198: Call2 0x1fa

0x199: Pop(1)
0x19a: Pop(1); Push((bool) Stack[-1] == 0)
0x19b: IF (Stack[-1] == 0) GOTO 0x19d; Pop(1)

0x19c: GOTO 0x19f

0x19d: Stack[-7] = (bool) 1
0x19e: GOTO 0xf3

0x19f: @ WaitForAnimEnd()
0x1a0: Pop(0)
0x1a1: Push( Stack[3 + Tasks[-1].StackPointer] )
0x1a2: IF (Stack[-1] == 0) GOTO 0x1a4; Pop(1)

0x1a3: Return(); Pop(22)

0x1a4: Push("all")
0x1a5: Push("attack_off")
0x1a6: @ PlayAnimation(Stack[-2], Stack[-1])
0x1a7: Pop(2)
0x1a8: @ WaitForAnimEnd()
0x1a9: Pop(0)
0x1aa: Push(Stack[-8])
0x1ab: IF (Stack[-1] == 0) GOTO 0x1af; Pop(1)

0x1ac: Push((float)2.0)
0x1ad: @ Sleep(Stack[-1])
0x1ae: Pop(1)
0x1af: Return(); Pop(22)

0x1b0: PushEmpty(bool, bool, cvector, bool, bool, cvector)
0x1b1: Stack[1 + Tasks[-1].StackPointer] = (int)0
0x1b2: Push("all")
0x1b3: Push("attack_begin")
0x1b4: Push((int) 1)
0x1b5: Pop(1); Push(Stack[1 + StackPtr] + Stack[-1]);
0x1b6: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1b7: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0x1b8: Pop(2)
0x1b9: Pop(0); Push((bool) Stack[-3] == 0)
0x1ba: IF (Stack[-1] == 0) GOTO 0x1bc; Pop(1)

0x1bb: GOTO 0x1bf

0x1bc: Push((int) 1)
0x1bd: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x1be: GOTO 0x1b2

0x1bf: Stack[2 + Tasks[-1].StackPointer] = (int)0
0x1c0: Push("attack")
0x1c1: Push((int) 1)
0x1c2: Pop(1); Push(Stack[2 + StackPtr] + Stack[-1]);
0x1c3: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1c4: @ IsExisting3DSound(Stack[-3], Stack[-1])
0x1c5: Pop(1)
0x1c6: Pop(0); Push((bool) Stack[-2] == 0)
0x1c7: IF (Stack[-1] == 0) GOTO 0x1c9; Pop(1)

0x1c8: GOTO 0x1cc

0x1c9: Push((int) 1)
0x1ca: Stack[2 + Tasks[-1].StackPointer] = Stack[2 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x1cb: GOTO 0x1c0

0x1cc: Push("all")
0x1cd: Push("bjump")
0x1ce: @ GetAnimationOffset(Stack[-3], Stack[-2], Stack[-1])
0x1cf: Pop(2)
0x1d0: Push(CvectorIndex(Stack[-1], 2))
0x1d1: Stack[4 + Tasks[-1].StackPointer] = -Stack[-1]; Pop(1);
0x1d2: Return(); Pop(6)

0x1d3: PushEmpty(object, float, float, object, float, float)
0x1d4: Push((float)0.9)
0x1d5: Pop(1); Push(Stack[-9] * Stack[-1]);
0x1d6: @ GetVictim(Stack[-1], Stack[-4])
0x1d7: Pop(1)
0x1d8: @ ReportAttack(Stack[-0])
0x1d9: Pop(0)
0x1da: Pop(0); Push((bool) Stack[-3] == Stack[0 + Tasks[-1].StackPointer])
0x1db: IF (Stack[-1] == 0) GOTO 0x1f8; Pop(1)

0x1dc: PushEmpty(float, object, int)
0x1dd: Stack[-2] = Stack[-6]
0x1de: Stack[-1] = Stack[-10]
0x1df: Call2 0x9a

0x1e0: Stack[-5] = Stack[-3]
0x1e1: Pop(3)
0x1e2: PushEmpty(float, object, float, int)
0x1e3: Stack[-3] = Stack[-7]
0x1e4: Stack[-2] = Stack[-6]
0x1e5: PushEmpty(int, object, int)
0x1e6: Stack[-2] = Stack[-10]
0x1e7: Stack[-1] = Stack[-14]
0x1e8: Call2 0x9d

0x1e9: Stack[-4] = Stack[-3]
0x1ea: Pop(3)
0x1eb: Call2 0x598

0x1ec: Stack[-5] = Stack[-4]
0x1ed: Pop(4)
0x1ee: PushEmpty(int)
0x1ef: Call2 0xa0

0x1f0: Pop(0)
0x1f1: @ ReportHit(Stack[-0], Stack[-1], Stack[-2], Stack[-3])
0x1f2: Pop(1)
0x1f3: PushEmpty(object, float)
0x1f4: Stack[-2] = Stack[-5]
0x1f5: Stack[-1] = Stack[-3]
0x1f6: Call2 0xa2

0x1f7: Pop(2)
0x1f8: Return(); Pop(6)

0x1f9: Stack[-3] = 0
0x1fa: PushEmpty(int, bool, int, string, int, bool, int, string)
0x1fb: PushEmpty()
0x1fc: Call2 0x34f

0x1fd: Pop(0)
0x1fe: @ irand(Stack[-4], Stack[-1])
0x1ff: Pop(0)
0x200: Push((int) 1)
0x201: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x202: @ Face(Stack[-0])
0x203: Pop(0)
0x204: Push((bool) 1)
0x205: @ SetAttackState(Stack[-1])
0x206: Pop(1)
0x207: PushEmpty()
0x208: Call2 0x7a3

0x209: Pop(0)
0x20a: Push("all")
0x20b: Push("attack_begin")
0x20c: Pop(1); Push(Stack[-1] + Stack[-6]);
0x20d: @ PlayAnimation(Stack[-2], Stack[-1])
0x20e: Pop(2)
0x20f: @ WaitForAnimEnd()
0x210: Pop(0)
0x211: PushEmpty()
0x212: Call2 0x32f

0x213: Pop(0)
0x214: PushEmpty(bool, object)
0x215: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x216: Call2 0x629

0x217: Pop(1)
0x218: Pop(1); Push((bool) Stack[-1] == 0)
0x219: IF (Stack[-1] == 0) GOTO 0x21e; Pop(1)

0x21a: @ StopAsync()
0x21b: Pop(0)
0x21c: Stack[-10] = (bool) 0
0x21d: Return(); Pop(8)

0x21e: PushEmpty(float, int)
0x21f: Stack[-2] = Stack[-11]
0x220: Stack[-1] = Stack[-6]
0x221: Call2 0x1d3

0x222: Pop(2)
0x223: Push("all")
0x224: Push("attack_middle")
0x225: Pop(1); Push(Stack[-1] + Stack[-6]);
0x226: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0x227: Pop(2)
0x228: Push(Stack[-3])
0x229: IF (Stack[-1] == 0) GOTO 0x26f; Pop(1)

0x22a: PushEmpty()
0x22b: Call2 0x7a3

0x22c: Pop(0)
0x22d: Push("all")
0x22e: Push("attack_middle")
0x22f: Pop(1); Push(Stack[-1] + Stack[-6]);
0x230: @ PlayAnimation(Stack[-2], Stack[-1])
0x231: Pop(2)
0x232: @ WaitForAnimEnd()
0x233: Pop(0)
0x234: PushEmpty()
0x235: Call2 0x34f

0x236: Pop(0)
0x237: PushEmpty(bool, object)
0x238: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x239: Call2 0x629

0x23a: Pop(1)
0x23b: Pop(1); Push((bool) Stack[-1] == 0)
0x23c: IF (Stack[-1] == 0) GOTO 0x241; Pop(1)

0x23d: @ StopAsync()
0x23e: Pop(0)
0x23f: Stack[-10] = (bool) 0
0x240: Return(); Pop(8)

0x241: PushEmpty(float, int)
0x242: Stack[-2] = Stack[-11]
0x243: Stack[-1] = Stack[-6]
0x244: Call2 0x1d3

0x245: Pop(2)
0x246: Stack[-2] = (int) 1
0x247: Push("attack_middle")
0x248: Pop(1); Push(Stack[-1] + Stack[-5]);
0x249: Push("_")
0x24a: Pop(2); Push(Stack[-2] + Stack[-1]);
0x24b: Stack[-2] = Stack[-1] + Stack[-3]; Pop(1);
0x24c: Push("all")
0x24d: @ HasAnimation(Stack[-4], Stack[-1], Stack[-2])
0x24e: Pop(1)
0x24f: Pop(0); Push((bool) Stack[-3] == 0)
0x250: IF (Stack[-1] == 0) GOTO 0x252; Pop(1)

0x251: GOTO 0x26f

0x252: PushEmpty()
0x253: Call2 0x7a3

0x254: Pop(0)
0x255: Push("all")
0x256: @ PlayAnimation(Stack[-1], Stack[-2])
0x257: Pop(1)
0x258: @ WaitForAnimEnd()
0x259: Pop(0)
0x25a: PushEmpty()
0x25b: Call2 0x34f

0x25c: Pop(0)
0x25d: PushEmpty(bool, object)
0x25e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x25f: Call2 0x629

0x260: Pop(1)
0x261: Pop(1); Push((bool) Stack[-1] == 0)
0x262: IF (Stack[-1] == 0) GOTO 0x267; Pop(1)

0x263: @ StopAsync()
0x264: Pop(0)
0x265: Stack[-10] = (bool) 0
0x266: Return(); Pop(8)

0x267: PushEmpty(float, int)
0x268: Stack[-2] = Stack[-11]
0x269: Stack[-1] = Stack[-6]
0x26a: Call2 0x1d3

0x26b: Pop(2)
0x26c: Push((int) 1)
0x26d: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x26e: GOTO 0x247

0x26f: Push((bool) 0)
0x270: @ SetAttackState(Stack[-1])
0x271: Pop(1)
0x272: Push("all")
0x273: Push("attack_end")
0x274: Pop(1); Push(Stack[-1] + Stack[-6]);
0x275: @ PlayAnimation(Stack[-2], Stack[-1])
0x276: Pop(2)
0x277: PushEmpty(bool)
0x278: Call2 0x359

0x279: Pop(0)
0x27a: IF (Stack[-1] == 0) GOTO 0x281; Pop(1)

0x27b: PushEmpty(bool, float)
0x27c: Stack[-1] = (float) 0.45
0x27d: Call2 0x285

0x27e: Pop(2)
0x27f: @ StopAsync()
0x280: Pop(0)
0x281: Stack[-10] = (bool) 1
0x282: Return(); Pop(8)

0x283: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x284: Return(); Pop(0)

0x285: PushEmpty(float, bool, float, bool)
0x286: @ rand(Stack[-2])
0x287: Pop(0)
0x288: Pop(0); Push((bool) Stack[-2] < Stack[-5])
0x289: IF (Stack[-1] == 0) GOTO 0x299; Pop(1)

0x28a: @ IsAnimationPlaying(Stack[-1])
0x28b: Pop(0)
0x28c: Pop(0); Push((bool) Stack[-1] == 0)
0x28d: IF (Stack[-1] == 0) GOTO 0x28f; Pop(1)

0x28e: GOTO 0x298

0x28f: PushEmpty(bool)
0x290: Call2 0x2e7

0x291: Pop(0)
0x292: IF (Stack[-1] == 0) GOTO 0x295; Pop(1)

0x293: Stack[-6] = (bool) 1
0x294: Return(); Pop(4)

0x295: @ sync()
0x296: Pop(0)
0x297: GOTO 0x28a

0x298: GOTO 0x29e

0x299: @ WaitForAnimEnd()
0x29a: Pop(0)
0x29b: PushEmpty()
0x29c: Call2 0x34f

0x29d: Pop(0)
0x29e: Stack[-6] = (bool) 0
0x29f: Return(); Pop(4)

0x2a0: PushEmpty(bool, cvector, cvector, cvector, float, bool, cvector, cvector, cvector, float)
0x2a1: @ IsAnimationPlaying(Stack[-5])
0x2a2: Pop(0)
0x2a3: Pop(0); Push((bool) Stack[-5] == 0)
0x2a4: IF (Stack[-1] == 0) GOTO 0x2a6; Pop(1)

0x2a5: GOTO 0x2c6

0x2a6: PushEmpty(bool)
0x2a7: Call2 0x2e7

0x2a8: Pop(0)
0x2a9: IF (Stack[-1] == 0) GOTO 0x2ac; Pop(1)

0x2aa: Stack[-12] = (bool) 1
0x2ab: Return(); Pop(10)

0x2ac: PushEmpty(bool, object)
0x2ad: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2ae: Call2 0x629

0x2af: Pop(1)
0x2b0: Pop(1); Push((bool) Stack[-1] == 0)
0x2b1: IF (Stack[-1] == 0) GOTO 0x2b4; Pop(1)

0x2b2: Stack[-12] = (bool) 0
0x2b3: Return(); Pop(10)

0x2b4: @@ GetPFPosition(Stack[-4])
0x2b5: Pop(0)
0x2b6: @ GetPFPosition(Stack[-3])
0x2b7: Pop(0)
0x2b8: Stack[-2] = Stack[-4] - Stack[-3]; Pop(0);
0x2b9: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x2ba: Pop(0); Push(Stack[-11] * Stack[-11]);
0x2bb: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x2bc: IF (Stack[-1] == 0) GOTO 0x2c3; Pop(1)

0x2bd: PushEmpty(bool, float)
0x2be: Stack[-1] = Stack[-13]
0x2bf: Call2 0x1fa

0x2c0: Pop(2)
0x2c1: Stack[-12] = (bool) 1
0x2c2: Return(); Pop(10)

0x2c3: @ sync()
0x2c4: Pop(0)
0x2c5: GOTO 0x2a1

0x2c6: PushEmpty()
0x2c7: Call2 0x34f

0x2c8: Pop(0)
0x2c9: Stack[-12] = (bool) 0
0x2ca: Return(); Pop(10)

0x2cb: PushEmpty(cvector, cvector, cvector, float, float, cvector, cvector, cvector, float, float)
0x2cc: PushEmpty(bool, object)
0x2cd: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2ce: Call2 0x629

0x2cf: Pop(1)
0x2d0: Pop(1); Push((bool) Stack[-1] == 0)
0x2d1: IF (Stack[-1] == 0) GOTO 0x2d4; Pop(1)

0x2d2: Stack[-11] = (bool) 0
0x2d3: Return(); Pop(10)

0x2d4: PushEmpty(bool)
0x2d5: Call2 0x324

0x2d6: Pop(0)
0x2d7: IF (Stack[-1] == 0) GOTO 0x2e5; Pop(1)

0x2d8: @@ GetPFPosition(Stack[-5])
0x2d9: Pop(0)
0x2da: @ GetPFPosition(Stack[-4])
0x2db: Pop(0)
0x2dc: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x2dd: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x2de: @@ GetAttackDistance(Stack[-1])
0x2df: Pop(0)
0x2e0: Push((int) 50)
0x2e1: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x2e2: Pop(0); Push(Stack[-1] * Stack[-1]);
0x2e3: Stack[-12] = Stack[-3] <= Stack[-1]; Pop(1);
0x2e4: Return(); Pop(10)

0x2e5: Stack[-11] = (bool) 0
0x2e6: Return(); Pop(10)

0x2e7: PushEmpty(bool)
0x2e8: Stack[-1] = (bool) 0
0x2e9: PushEmpty(bool)
0x2ea: Call2 0x2cb

0x2eb: Pop(0)
0x2ec: IF (Stack[-1] == 0) GOTO 0x2f2; Pop(1)

0x2ed: PushEmpty(bool)
0x2ee: Call2 0x2f7

0x2ef: Pop(0)
0x2f0: IF (Stack[-1] == 0) GOTO 0x2f2; Pop(1)

0x2f1: Stack[-1] = (bool) 1
0x2f2: IF (Stack[-1] == 0) GOTO 0x2f5; Pop(1)

0x2f3: Stack[-1] = (bool) 1
0x2f4: Return(); Pop(0)

0x2f5: Stack[-1] = (bool) 0
0x2f6: Return(); Pop(0)

0x2f7: PushEmpty(object, bool, float, cvector, cvector, object, bool, float, cvector, cvector)
0x2f8: @ GetScene(Stack[-5])
0x2f9: Pop(0)
0x2fa: Stack[-4] = (bool) 0
0x2fb: PushEmpty(cvector, object)
0x2fc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2fd: Call2 0x562

0x2fe: Pop(1)
0x2ff: Pop(1); Push(( -Stack[-1])
0x300: @ FindDirLength(Stack[-4], Stack[-1], Stack[-4])
0x301: Pop(1)
0x302: Pop(0); Push((bool) Stack[-3] < Stack[4 + Tasks[-1].StackPointer])
0x303: IF (Stack[-1] == 0) GOTO 0x305; Pop(1)

0x304: GOTO 0x321

0x305: @ Face(Stack[-0])
0x306: Pop(0)
0x307: Push("all")
0x308: Push("bjump")
0x309: @ PlayAnimation(Stack[-2], Stack[-1])
0x30a: Pop(2)
0x30b: @@ GetPFPosition(Stack[-2])
0x30c: Pop(0)
0x30d: @ GetPFPosition(Stack[-1])
0x30e: Pop(0)
0x30f: @ WaitForAnimEnd()
0x310: Pop(0)
0x311: PushEmpty()
0x312: Call2 0x34f

0x313: Pop(0)
0x314: @ StopAsync()
0x315: Pop(0)
0x316: Push(CVector(0.0, 0.0, 0.0))
0x317: @ SetSpeed(Stack[-1])
0x318: Pop(1)
0x319: Stack[-4] = (bool) 1
0x31a: PushEmpty(bool)
0x31b: Call2 0x2cb

0x31c: Pop(0)
0x31d: Pop(1); Push((bool) Stack[-1] == 0)
0x31e: IF (Stack[-1] == 0) GOTO 0x320; Pop(1)

0x31f: GOTO 0x321

0x320: GOTO 0x2fb

0x321: Stack[-11] = Stack[-4]
0x322: Return(); Pop(10)

0x323: Stack[-5] = 0
0x324: PushEmpty(bool, bool)
0x325: Push("IsAttacking")
0x326: Push((int) 1)
0x327: Pop(2); Push(IsFuncExist(Stack[0 + Tasks[-1].StackPointer], Stack[-2], Stack[-1]))
0x328: IF (Stack[-1] == 0) GOTO 0x32d; Pop(1)

0x329: @@ IsAttacking(Stack[-1])
0x32a: Pop(0)
0x32b: Stack[-3] = Stack[-1]
0x32c: Return(); Pop(2)

0x32d: Stack[-3] = (bool) 0
0x32e: Return(); Pop(2)

0x32f: PushEmpty(float, int, float, int)
0x330: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x331: IF (Stack[-1] == 0) GOTO 0x333; Pop(1)

0x332: Return(); Pop(4)

0x333: Push( Stack[5 + Tasks[-1].StackPointer] )
0x334: IF (Stack[-1] == 0) GOTO 0x33b; Pop(1)

0x335: Push((int) -1)
0x336: Stack[5 + Tasks[-1].StackPointer] = Stack[5 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x337: Push((int) 0)
0x338: Pop(1); Push((bool) Stack[5 + Tasks[-1].StackPointer] > Stack[-1])
0x339: IF (Stack[-1] == 0) GOTO 0x33b; Pop(1)

0x33a: Return(); Pop(4)

0x33b: @ rand(Stack[-2])
0x33c: Pop(0)
0x33d: PushEmpty(float)
0x33e: Call2 0x35d

0x33f: Pop(0)
0x340: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x341: IF (Stack[-1] == 0) GOTO 0x34e; Pop(1)

0x342: @ irand(Stack[-1], Stack[-2])
0x343: Pop(0)
0x344: Push((int) 1)
0x345: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x346: Push("attack")
0x347: Pop(1); Push(Stack[-1] + Stack[-2]);
0x348: @ Speak(Stack[-1])
0x349: Pop(1)
0x34a: PushEmpty(int)
0x34b: Call2 0x35b

0x34c: Stack[5 + Tasks[-1].StackPointer] = Stack[-1]
0x34d: Pop(1)
0x34e: Return(); Pop(4)

0x34f: PushEmpty(object)
0x350: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x351: Call2 0x79a

0x352: Pop(1)
0x353: Return(); Pop(0)

0x354: PushEmpty(string)
0x355: Stack[-1] = "attack_stay"
0x356: Call2 0x6f3

0x357: Pop(1)
0x358: Return(); Pop(0)

0x359: Stack[-1] = (bool) 1
0x35a: Return(); Pop(0)

0x35b: Stack[-1] = (int) 1
0x35c: Return(); Pop(0)

0x35d: Stack[-1] = (float) 0.5
0x35e: Return(); Pop(0)

0x35f: PushEmpty()
0x360: PushEmpty(object)
0x361: Stack[-1] = Stack[-2]
0x362: Call2 0x875

0x363: Pop(1)
0x364: Return(); Pop(0)

0x365: PushEmpty()
0x366: PushEmpty(bool, object, object)
0x367: Stack[-2] = Stack[-6]
0x368: Stack[-1] = Stack[-5]
0x369: Call2 0x877

0x36a: Pop(3)
0x36b: Return(); Pop(0)

0x36c: PushEmpty()
0x36d: Push("kill")
0x36e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x36f: IF (Stack[-1] == 0) GOTO 0x376; Pop(1)

0x370: Push(GlobalVars[0])
0x371: Stack[-1] = (bool) 1
0x372: GlobalVars[0] = Stack[-1]; Pop(1)
0x373: PushEmpty()
0x374: Call2 0x3b6

0x375: Pop(0)
0x376: Return(); Pop(0)

0x377: PushEmpty(bool, bool, bool, bool)
0x378: PushEmpty(object)
0x379: Stack[-1] = Stack[-10]
0x37a: Call2 0x79a

0x37b: Pop(1)
0x37c: Push((int) 1)
0x37d: Push((int) 5)
0x37e: @ SetTimer(Stack[-2], Stack[-1])
0x37f: Pop(2)
0x380: @ CanSee(Stack[-2], Stack[-9])
0x381: Pop(0)
0x382: Push(Stack[-2])
0x383: IF (Stack[-1] == 0) GOTO 0x38a; Pop(1)

0x384: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x385: PushEmpty(object)
0x386: Stack[-1] = Stack[-10]
0x387: Call2 0x6dd

0x388: Pop(1)
0x389: GOTO 0x38b

0x38a: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x38b: PushEmpty(bool, object)
0x38c: Stack[-1] = Stack[-11]
0x38d: Call2 0x571

0x38e: Pop(1)
0x38f: IF (Stack[-1] == 0) GOTO 0x395; Pop(1)

0x390: PushEmpty(object)
0x391: Call2 0x71c

0x392: Pop(0)
0x393: @ SendPlayerEnemy(Stack[-10], Stack[-1])
0x394: Pop(1)
0x395: PushEmpty(bool, object, float, float, bool, bool)
0x396: Stack[-5] = Stack[-15]
0x397: Stack[-4] = Stack[-14]
0x398: Stack[-3] = Stack[-13]
0x399: Stack[-2] = Stack[-12]
0x39a: Stack[-1] = Stack[-11]
0x39b: Call2 0x3e0

0x39c: Stack[-7] = Stack[-6]
0x39d: Pop(6)
0x39e: Push( Stack[2 + Tasks[-1].StackPointer] )
0x39f: IF (Stack[-1] == 0) GOTO 0x3a3; Pop(1)

0x3a0: Push("head")
0x3a1: @ UnlookAsync(Stack[-1])
0x3a2: Pop(1)
0x3a3: Push((int) 1)
0x3a4: @ KillTimer(Stack[-1])
0x3a5: Pop(1)
0x3a6: Stack[-10] = Stack[-1]
0x3a7: Return(); Pop(4)

0x3a8: PushEmpty()
0x3a9: Push((int) 1)
0x3aa: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3ab: IF (Stack[-1] == 0) GOTO 0x3b1; Pop(1)

0x3ac: PushEmpty(object)
0x3ad: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3ae: Call2 0x79a

0x3af: Pop(1)
0x3b0: GOTO 0x3b5

0x3b1: PushEmpty(int)
0x3b2: Stack[-1] = Stack[-2]
0x3b3: Call2 0x446

0x3b4: Pop(1)
0x3b5: Return(); Pop(0)

0x3b6: Push((int) 1)
0x3b7: @ KillTimer(Stack[-1])
0x3b8: Pop(1)
0x3b9: Push( Stack[2 + Tasks[-1].StackPointer] )
0x3ba: IF (Stack[-1] == 0) GOTO 0x3bf; Pop(1)

0x3bb: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x3bc: Push("head")
0x3bd: @ UnlookAsync(Stack[-1])
0x3be: Pop(1)
0x3bf: PushEmpty()
0x3c0: Call2 0x45c

0x3c1: Pop(0)
0x3c2: Return(); Pop(0)

0x3c3: PushEmpty()
0x3c4: PushEmpty(bool)
0x3c5: Stack[-1] = (bool) 0
0x3c6: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0x3c7: IF (Stack[-1] == 0) GOTO 0x3cb; Pop(1)

0x3c8: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x3c9: IF (Stack[-1] == 0) GOTO 0x3cb; Pop(1)

0x3ca: Stack[-1] = (bool) 1
0x3cb: IF (Stack[-1] == 0) GOTO 0x3d1; Pop(1)

0x3cc: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x3cd: PushEmpty(object)
0x3ce: Stack[-1] = Stack[-2]
0x3cf: Call2 0x6dd

0x3d0: Pop(1)
0x3d1: Return(); Pop(0)

0x3d2: PushEmpty()
0x3d3: PushEmpty(bool)
0x3d4: Stack[-1] = (bool) 0
0x3d5: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0x3d6: IF (Stack[-1] == 0) GOTO 0x3da; Pop(1)

0x3d7: Push( Stack[2 + Tasks[-1].StackPointer] )
0x3d8: IF (Stack[-1] == 0) GOTO 0x3da; Pop(1)

0x3d9: Stack[-1] = (bool) 1
0x3da: IF (Stack[-1] == 0) GOTO 0x3df; Pop(1)

0x3db: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x3dc: Push("head")
0x3dd: @ UnlookAsync(Stack[-1])
0x3de: Pop(1)
0x3df: Return(); Pop(0)

0x3e0: PushEmpty(bool, bool, object, cvector, cvector, cvector, float, object, bool, bool, object, cvector, cvector, cvector, float, object)
0x3e1: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x3e2: Stack[1 + Tasks[-1].StackPointer] = Stack[-21]
0x3e3: Stack[-7] = Stack[-17]
0x3e4: PushEmpty(bool, object)
0x3e5: Stack[-1] = Stack[-23]
0x3e6: Call2 0x46c

0x3e7: Pop(1)
0x3e8: Pop(1); Push((bool) Stack[-1] == 0)
0x3e9: IF (Stack[-1] == 0) GOTO 0x3ec; Pop(1)

0x3ea: Stack[-22] = (bool) 0
0x3eb: Return(); Pop(16)

0x3ec: @@ GetPosition(Stack[-5])
0x3ed: Pop(0)
0x3ee: @ GetPosition(Stack[-4])
0x3ef: Pop(0)
0x3f0: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x3f1: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x3f2: PushEmpty(bool)
0x3f3: Stack[-1] = (bool) 0
0x3f4: Push((int) 0)
0x3f5: Pop(1); Push((bool) Stack[-21] > Stack[-1])
0x3f6: IF (Stack[-1] == 0) GOTO 0x3fb; Pop(1)

0x3f7: Pop(0); Push(Stack[-20] * Stack[-20]);
0x3f8: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x3f9: IF (Stack[-1] == 0) GOTO 0x3fb; Pop(1)

0x3fa: Stack[-1] = (bool) 1
0x3fb: IF (Stack[-1] == 0) GOTO 0x400; Pop(1)

0x3fc: @ Stop()
0x3fd: Pop(0)
0x3fe: Stack[-22] = (bool) 0
0x3ff: Return(); Pop(16)

0x400: Pop(0); Push(Stack[-20] * Stack[-20]);
0x401: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x402: IF (Stack[-1] == 0) GOTO 0x43e; Pop(1)

0x403: @@ GetPFPosition(Stack[-5])
0x404: Pop(0)
0x405: @ FindPathTo(Stack[-1], Stack[-5])
0x406: Pop(0)
0x407: Pop(0); Push(( Stack[-1] != 0 )
0x408: IF (Stack[-1] == 0) GOTO 0x40b; Pop(1)

0x409: Stack[-6] = Stack[-1]
0x40a: Stack[-1] = 0
0x40b: Pop(0); Push(( Stack[-6] != 0 )
0x40c: IF (Stack[-1] == 0) GOTO 0x42c; Pop(1)

0x40d: Push(Stack[-7])
0x40e: IF (Stack[-1] == 0) GOTO 0x415; Pop(1)

0x40f: Stack[-7] = (bool) 0
0x410: @ RotatePath(Stack[-6], Stack[-8])
0x411: Pop(0)
0x412: Pop(0); Push((bool) Stack[-8] == 0)
0x413: IF (Stack[-1] == 0) GOTO 0x415; Pop(1)

0x414: GOTO 0x444

0x415: Push((int) 0)
0x416: Push((float)0.3)
0x417: @ SetTimer(Stack[-2], Stack[-1])
0x418: Pop(2)
0x419: PushEmpty(string)
0x41a: Call2 0x473

0x41b: Pop(0)
0x41c: PushEmpty(string)
0x41d: Call2 0x475

0x41e: Pop(0)
0x41f: @ FollowPath(Stack[-8], Stack[-20], Stack[-10], Stack[-2], Stack[-1])
0x420: Pop(2)
0x421: Pop(0); Push((bool) Stack[-8] == 0)
0x422: IF (Stack[-1] == 0) GOTO 0x42a; Pop(1)

0x423: Push( Stack[0 + Tasks[-1].StackPointer] )
0x424: IF (Stack[-1] == 0) GOTO 0x428; Pop(1)

0x425: Stack[-6] = 0
0x426: GOTO 0x444

0x427: GOTO 0x429

0x428: GOTO 0x443

0x429: GOTO 0x42b

0x42a: Stack[-6] = 0
0x42b: GOTO 0x43c

0x42c: Push((int) 0)
0x42d: @ KillTimer(Stack[-1])
0x42e: Pop(1)
0x42f: Push((float)0.5)
0x430: @ Sleep(Stack[-1], Stack[-9])
0x431: Pop(1)
0x432: Pop(0); Push((bool) Stack[-8] == 0)
0x433: IF (Stack[-1] == 0) GOTO 0x438; Pop(1)

0x434: Push( Stack[0 + Tasks[-1].StackPointer] )
0x435: IF (Stack[-1] == 0) GOTO 0x438; Pop(1)

0x436: Stack[-6] = 0
0x437: GOTO 0x444

0x438: Push((int) 0)
0x439: Push((float)0.3)
0x43a: @ SetTimer(Stack[-2], Stack[-1])
0x43b: Pop(2)
0x43c: Stack[-1] = 0
0x43d: GOTO 0x442

0x43e: Push((int) 0)
0x43f: @ KillTimer(Stack[-1])
0x440: Pop(1)
0x441: GOTO 0x444

0x442: Stack[-6] = 0
0x443: GOTO 0x3e4

0x444: Stack[-22] = !Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x445: Return(); Pop(16)

0x446: PushEmpty()
0x447: Push((int) 0)
0x448: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x449: IF (Stack[-1] == 0) GOTO 0x44b; Pop(1)

0x44a: Return(); Pop(0)

0x44b: PushEmpty(bool, object)
0x44c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x44d: Call2 0x46c

0x44e: Pop(1)
0x44f: Pop(1); Push((bool) Stack[-1] == 0)
0x450: IF (Stack[-1] == 0) GOTO 0x452; Pop(1)

0x451: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x452: Push((int) 0)
0x453: @ KillTimer(Stack[-1])
0x454: Pop(1)
0x455: @ Stop()
0x456: Pop(0)
0x457: Return(); Pop(0)

0x458: PushEmpty()
0x459: @ RequestClearPath(Stack[-1])
0x45a: Pop(0)
0x45b: Return(); Pop(0)

0x45c: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x45d: Push((int) 0)
0x45e: @ KillTimer(Stack[-1])
0x45f: Pop(1)
0x460: @ Stop()
0x461: Pop(0)
0x462: Return(); Pop(0)

0x463: PushEmpty()
0x464: PushEmpty()
0x465: Call2 0x3b6

0x466: Pop(0)
0x467: PushEmpty(object)
0x468: Stack[-1] = Stack[-2]
0x469: Call2 0x899

0x46a: Pop(1)
0x46b: Return(); Pop(0)

0x46c: PushEmpty()
0x46d: PushEmpty(bool, object)
0x46e: Stack[-1] = Stack[-3]
0x46f: Call2 0x629

0x470: Stack[-4] = Stack[-2]
0x471: Pop(2)
0x472: Return(); Pop(0)

0x473: Stack[-1] = "walk"
0x474: Return(); Pop(0)

0x475: Stack[-1] = "run"
0x476: Return(); Pop(0)

0x477: @ Hold()
0x478: Pop(0)
0x479: Return(); Pop(0)

0x47a: PushEmpty()
0x47b: Push(-0, 0); TaskCall(4)
0x47c: Call2 0x48a

0x47d: Pop(-0, 0); TaskReturn
0x47e: Pop(0)
0x47f: Return(); Pop(0)

0x480: PushEmpty()
0x481: Push("cleanup")
0x482: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x483: IF (Stack[-1] == 0) GOTO 0x489; Pop(1)

0x484: PushEmpty(object)
0x485: Call2 0x71c

0x486: Pop(0)
0x487: @ RemoveActor(Stack[-1])
0x488: Pop(1)
0x489: Return(); Pop(0)

0x48a: PushEmpty(object, object)
0x48b: Push("player")
0x48c: @ FindActor(Stack[-2], Stack[-1])
0x48d: Pop(1)
0x48e: Pop(0); Push((bool) Stack[-1] == 0)
0x48f: IF (Stack[-1] == 0) GOTO 0x491; Pop(1)

0x490: Return(); Pop(2)

0x491: PushEmpty(bool, object)
0x492: Stack[-1] = Stack[-3]
0x493: Call2 0x49b

0x494: Pop(2)
0x495: Push((int) 1)
0x496: @ Sleep(Stack[-1])
0x497: Pop(1)
0x498: GOTO 0x491

0x499: Return(); Pop(2)

0x49a: Stack[-1] = 0
0x49b: PushEmpty(float, float)
0x49c: PushEmpty(bool, object)
0x49d: Stack[-1] = Stack[-5]
0x49e: Call2 0x629

0x49f: Pop(1)
0x4a0: Pop(1); Push((bool) Stack[-1] == 0)
0x4a1: IF (Stack[-1] == 0) GOTO 0x4a4; Pop(1)

0x4a2: Stack[-4] = (bool) 0
0x4a3: Return(); Pop(2)

0x4a4: PushEmpty(float, object)
0x4a5: Stack[-1] = Stack[-5]
0x4a6: Call2 0x569

0x4a7: Stack[-3] = Stack[-2]
0x4a8: Pop(2)
0x4a9: PushEmpty(bool, float, float, float)
0x4aa: Stack[-3] = Stack[-5]
0x4ab: Stack[-2] = (float) 250000.0
0x4ac: Stack[-1] = (float) 3240000.0
0x4ad: Call2 0x756

0x4ae: Pop(3)
0x4af: IF (Stack[-1] == 0) GOTO 0x4b8; Pop(1)

0x4b0: PushEmpty(bool, object)
0x4b1: Stack[-1] = Stack[-5]
0x4b2: Push(-2, 1); TaskCall(0)
0x4b3: Call2 0x0

0x4b4: Pop(-2, 1); TaskReturn
0x4b5: Stack[-6] = Stack[-2]
0x4b6: Pop(2)
0x4b7: Return(); Pop(2)

0x4b8: PushEmpty(bool, object)
0x4b9: Stack[-1] = Stack[-5]
0x4ba: Push(-2, 6); TaskCall(1)
0x4bb: Call2 0x7e

0x4bc: Pop(-2, 6); TaskReturn
0x4bd: Stack[-6] = Stack[-2]
0x4be: Pop(2)
0x4bf: Return(); Pop(2)

0x4c0: PushEmpty()
0x4c1: EventDisable(0)
0x4c2: PushEmpty(object)
0x4c3: Stack[-1] = Stack[-2]
0x4c4: Call2 0x4d9

0x4c5: Pop(1)
0x4c6: Push((int) 50)
0x4c7: Push((int) 40)
0x4c8: @ SetRTEnvelope(Stack[-2], Stack[-1])
0x4c9: Pop(2)
0x4ca: EventEnable(0)
0x4cb: @ Hold()
0x4cc: Pop(0)
0x4cd: GOTO 0x4cb

0x4ce: Return(); Pop(0)

0x4cf: PushEmpty(bool, bool)
0x4d0: @ IsOverrideActive(Stack[-1])
0x4d1: Pop(0)
0x4d2: Pop(0); Push((bool) Stack[-1] == 0)
0x4d3: IF (Stack[-1] == 0) GOTO 0x4d8; Pop(1)

0x4d4: PushEmpty(object)
0x4d5: Stack[-1] = Stack[-4]
0x4d6: Call2 0x7dd

0x4d7: Pop(1)
0x4d8: Return(); Pop(2)

0x4d9: PushEmpty(cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector, cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector)
0x4da: Pop(0); Push((bool) Stack[-21] == 0)
0x4db: IF (Stack[-1] == 0) GOTO 0x4e1; Pop(1)

0x4dc: PushEmpty(string)
0x4dd: Stack[-1] = "fdie"
0x4de: Call2 0x534

0x4df: Pop(1)
0x4e0: GOTO 0x533

0x4e1: @@ GetPosition(Stack[-10])
0x4e2: Pop(0)
0x4e3: @ GetPosition(Stack[-9])
0x4e4: Pop(0)
0x4e5: @ GetDirection(Stack[-8])
0x4e6: Pop(0)
0x4e7: Stack[-7] = Stack[-9] - Stack[-10]; Pop(0);
0x4e8: Push(CvectorIndex(Stack[-7], 0))
0x4e9: Push(CvectorIndex(Stack[-9], 0))
0x4ea: Pop(2); Push(Stack[-2] * Stack[-1]);
0x4eb: Push(CvectorIndex(Stack[-8], 2))
0x4ec: Push(CvectorIndex(Stack[-10], 2))
0x4ed: Pop(2); Push(Stack[-2] * Stack[-1]);
0x4ee: Pop(2); Push(Stack[-2] + Stack[-1]);
0x4ef: Push((int) 0)
0x4f0: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x4f1: IF (Stack[-1] == 0) GOTO 0x4f4; Pop(1)

0x4f2: Stack[-6] = "fdie"
0x4f3: GOTO 0x4f5

0x4f4: Stack[-6] = "bdie"
0x4f5: @ RemoveRTEnvelope()
0x4f6: Pop(0)
0x4f7: @ SetDeathState()
0x4f8: Pop(0)
0x4f9: @ Stop()
0x4fa: Pop(0)
0x4fb: @ StopAsync()
0x4fc: Pop(0)
0x4fd: Stack[-5] = Stack[-21]
0x4fe: Push("GetScriptProperty")
0x4ff: Push((int) 2)
0x500: Pop(2); Push(IsFuncExist(Stack[-23], Stack[-2], Stack[-1]))
0x501: IF (Stack[-1] == 0) GOTO 0x50d; Pop(1)

0x502: Push("Owner")
0x503: @@ HasScriptProperty(Stack[-5], Stack[-1])
0x504: Pop(1)
0x505: Push(Stack[-4])
0x506: IF (Stack[-1] == 0) GOTO 0x50d; Pop(1)

0x507: Push("Owner")
0x508: @@ GetScriptProperty(Stack[-6], Stack[-1])
0x509: Pop(1)
0x50a: Pop(0); Push((bool) Stack[-5] == 0)
0x50b: IF (Stack[-1] == 0) GOTO 0x50d; Pop(1)

0x50c: Stack[-5] = Stack[-21]
0x50d: Push("@GetEyesHeight")
0x50e: Push((int) 1)
0x50f: Pop(2); Push(IsFuncExist(Stack[-7], Stack[-2], Stack[-1]))
0x510: IF (Stack[-1] == 0) GOTO 0x51c; Pop(1)

0x511: @@ GetEyesHeight(Stack[-2])
0x512: Pop(0)
0x513: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x514: Push(CvectorIndex(Stack[-1], 1))
0x515: Stack[-1] = Stack[-3]
0x516: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x517: Push("head")
0x518: @ LookAsync(Stack[-22], Stack[-1], Stack[-2])
0x519: Pop(1)
0x51a: Stack[-3] = (bool) 1
0x51b: GOTO 0x51d

0x51c: Stack[-3] = (bool) 0
0x51d: PushEmpty(string)
0x51e: Stack[-1] = Stack[-7]
0x51f: Call2 0x6f3

0x520: Pop(1)
0x521: Push("all")
0x522: @ PlayAnimation(Stack[-1], Stack[-7])
0x523: Pop(1)
0x524: @ WaitForAnimEnd()
0x525: Pop(0)
0x526: Push(Stack[-3])
0x527: IF (Stack[-1] == 0) GOTO 0x52d; Pop(1)

0x528: @ StopAsync()
0x529: Pop(0)
0x52a: Push("head")
0x52b: @ UnlookAsync(Stack[-1])
0x52c: Pop(1)
0x52d: Push("all")
0x52e: @ LockAnimationEnd(Stack[-1], Stack[-7])
0x52f: Pop(1)
0x530: @ RemoveEnvelope()
0x531: Pop(0)
0x532: Stack[-5] = 0
0x533: Return(); Pop(20)

0x534: PushEmpty()
0x535: @ RemoveRTEnvelope()
0x536: Pop(0)
0x537: @ SetDeathState()
0x538: Pop(0)
0x539: @ Stop()
0x53a: Pop(0)
0x53b: @ StopAsync()
0x53c: Pop(0)
0x53d: @ StopSecondaryAnimation()
0x53e: Pop(0)
0x53f: PushEmpty(string)
0x540: Stack[-1] = Stack[-2]
0x541: Call2 0x6f3

0x542: Pop(1)
0x543: Push("all")
0x544: @ PlayAnimation(Stack[-1], Stack[-2])
0x545: Pop(1)
0x546: @ WaitForAnimEnd()
0x547: Pop(0)
0x548: Push("all")
0x549: @ LockAnimationEnd(Stack[-1], Stack[-2])
0x54a: Pop(1)
0x54b: @ RemoveEnvelope()
0x54c: Pop(0)
0x54d: Return(); Pop(0)

0x54e: PushEmpty()
0x54f: Return(); Pop(0)

0x550: PushEmpty()
0x551: Return(); Pop(0)

0x552: PushEmpty()
0x553: Return(); Pop(0)

0x554: PushEmpty()
0x555: Push((int) 2)
0x556: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x557: IF (Stack[-1] == 0) GOTO 0x55b; Pop(1)

0x558: Stack[-2] = "fire"
0x559: Return(); Pop(0)

0x55a: GOTO 0x560

0x55b: Push((int) 1)
0x55c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x55d: IF (Stack[-1] == 0) GOTO 0x560; Pop(1)

0x55e: Stack[-2] = "bullet"
0x55f: Return(); Pop(0)

0x560: Stack[-2] = "phys"
0x561: Return(); Pop(0)

0x562: PushEmpty(cvector, cvector, cvector, cvector)
0x563: @ GetPosition(Stack[-2])
0x564: Pop(0)
0x565: @@ GetPosition(Stack[-1])
0x566: Pop(0)
0x567: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x568: Return(); Pop(4)

0x569: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x56a: @ GetPosition(Stack[-3])
0x56b: Pop(0)
0x56c: @@ GetPosition(Stack[-2])
0x56d: Pop(0)
0x56e: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x56f: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x570: Return(); Pop(6)

0x571: PushEmpty(bool, bool)
0x572: @ IsPlayerActor(Stack[-3], Stack[-1])
0x573: Pop(0)
0x574: Stack[-4] = Stack[-1]
0x575: Return(); Pop(2)

0x576: PushEmpty(bool, bool)
0x577: Push("HasProperty")
0x578: Push((int) 2)
0x579: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x57a: Pop(1); Push((bool) Stack[-1] == 0)
0x57b: IF (Stack[-1] == 0) GOTO 0x57e; Pop(1)

0x57c: Stack[-5] = (bool) 0
0x57d: Return(); Pop(2)

0x57e: @@ HasProperty(Stack[-3], Stack[-1])
0x57f: Pop(0)
0x580: Stack[-5] = Stack[-1]
0x581: Return(); Pop(2)

0x582: PushEmpty(float, float)
0x583: PushEmpty(bool, object, string)
0x584: Stack[-2] = Stack[-10]
0x585: Stack[-1] = Stack[-9]
0x586: Call2 0x576

0x587: Pop(2)
0x588: Pop(1); Push((bool) Stack[-1] == 0)
0x589: IF (Stack[-1] == 0) GOTO 0x58c; Pop(1)

0x58a: Stack[-8] = (bool) 0
0x58b: Return(); Pop(2)

0x58c: @@ GetProperty(Stack[-6], Stack[-1])
0x58d: Pop(0)
0x58e: PushEmpty(float, float, float, float)
0x58f: Stack[-3] = Stack[-5] + Stack[-9]; Pop(0);
0x590: Stack[-2] = Stack[-8]
0x591: Stack[-1] = Stack[-7]
0x592: Call2 0x74b

0x593: Pop(3)
0x594: @@ SetProperty(Stack[-7], Stack[-1])
0x595: Pop(1)
0x596: Stack[-8] = (bool) 1
0x597: Return(); Pop(2)

0x598: PushEmpty(int, string, int, float, float, float, int, string, int, float, float, float)
0x599: PushEmpty(bool, object, string)
0x59a: Stack[-2] = Stack[-18]
0x59b: Stack[-1] = "health"
0x59c: Call2 0x576

0x59d: Pop(2)
0x59e: Pop(1); Push((bool) Stack[-1] == 0)
0x59f: IF (Stack[-1] == 0) GOTO 0x5a2; Pop(1)

0x5a0: Stack[-16] = (float) 0.0
0x5a1: Return(); Pop(12)

0x5a2: PushEmpty(bool, object, string)
0x5a3: Stack[-2] = Stack[-18]
0x5a4: Stack[-1] = "armor"
0x5a5: Call2 0x576

0x5a6: Pop(2)
0x5a7: Pop(1); Push((bool) Stack[-1] == 0)
0x5a8: IF (Stack[-1] == 0) GOTO 0x5ab; Pop(1)

0x5a9: Stack[-6] = (int) 0
0x5aa: GOTO 0x5ae

0x5ab: Push("armor")
0x5ac: @@ GetProperty(Stack[-1], Stack[-7])
0x5ad: Pop(1)
0x5ae: Push("armor_")
0x5af: PushEmpty(string, int)
0x5b0: Stack[-1] = Stack[-16]
0x5b1: Call2 0x554

0x5b2: Pop(1)
0x5b3: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x5b4: PushEmpty(bool, object, string)
0x5b5: Stack[-2] = Stack[-18]
0x5b6: Stack[-1] = Stack[-8]
0x5b7: Call2 0x576

0x5b8: Pop(2)
0x5b9: Pop(1); Push((bool) Stack[-1] == 0)
0x5ba: IF (Stack[-1] == 0) GOTO 0x5bd; Pop(1)

0x5bb: Stack[-4] = (int) 0
0x5bc: GOTO 0x5bf

0x5bd: @@ GetProperty(Stack[-5], Stack[-4])
0x5be: Pop(0)
0x5bf: PushEmpty(float, float, float)
0x5c0: Pop(0); Push(Stack[-9] + Stack[-7]);
0x5c1: Push((float)100.0)
0x5c2: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0x5c3: Stack[-1] = (int) 1
0x5c4: Call2 0x72c

0x5c5: Stack[-6] = Stack[-3]
0x5c6: Pop(3)
0x5c7: Push("health")
0x5c8: @@ GetProperty(Stack[-1], Stack[-3])
0x5c9: Pop(1)
0x5ca: Push((int) 1)
0x5cb: Pop(1); Push(Stack[-1] - Stack[-4]);
0x5cc: Stack[-2] = Stack[-15] * Stack[-1]; Pop(1);
0x5cd: Push("health")
0x5ce: PushEmpty(float, float, float, float)
0x5cf: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0x5d0: Stack[-2] = (int) 0
0x5d1: Stack[-1] = (int) 1
0x5d2: Call2 0x74b

0x5d3: Pop(3)
0x5d4: @@ SetProperty(Stack[-2], Stack[-1])
0x5d5: Pop(2)
0x5d6: PushEmpty(bool, object)
0x5d7: Stack[-1] = Stack[-17]
0x5d8: Call2 0x571

0x5d9: Pop(1)
0x5da: IF (Stack[-1] == 0) GOTO 0x5df; Pop(1)

0x5db: PushEmpty(float)
0x5dc: Stack[-1] = -Stack[-2]; Pop(0);
0x5dd: Call2 0x786

0x5de: Pop(1)
0x5df: Stack[-16] = Stack[-1]
0x5e0: Return(); Pop(12)

0x5e1: PushEmpty(float, float)
0x5e2: PushEmpty(bool, object, string)
0x5e3: Stack[-2] = Stack[-6]
0x5e4: Stack[-1] = "health"
0x5e5: Call2 0x576

0x5e6: Pop(2)
0x5e7: Pop(1); Push((bool) Stack[-1] == 0)
0x5e8: IF (Stack[-1] == 0) GOTO 0x5eb; Pop(1)

0x5e9: Stack[-4] = (bool) 0
0x5ea: Return(); Pop(2)

0x5eb: PushEmpty(bool)
0x5ec: Stack[-1] = (bool) 0
0x5ed: PushEmpty(bool, object)
0x5ee: Stack[-1] = Stack[-6]
0x5ef: Call2 0x571

0x5f0: Pop(1)
0x5f1: IF (Stack[-1] == 0) GOTO 0x5f7; Pop(1)

0x5f2: PushEmpty(bool)
0x5f3: Call2 0x7ae

0x5f4: Pop(0)
0x5f5: IF (Stack[-1] == 0) GOTO 0x5f7; Pop(1)

0x5f6: Stack[-1] = (bool) 1
0x5f7: IF (Stack[-1] == 0) GOTO 0x5fa; Pop(1)

0x5f8: Stack[-4] = (bool) 0
0x5f9: Return(); Pop(2)

0x5fa: Push("health")
0x5fb: @@ GetProperty(Stack[-1], Stack[-2])
0x5fc: Pop(1)
0x5fd: Push((float)0.0)
0x5fe: Stack[-5] = Stack[-2] <= Stack[-1]; Pop(1);
0x5ff: Return(); Pop(2)

0x600: PushEmpty(bool, bool)
0x601: @@ IsDead(Stack[-1])
0x602: Pop(0)
0x603: Stack[-4] = Stack[-1]
0x604: Return(); Pop(2)

0x605: PushEmpty(object, object, object, object)
0x606: Pop(0); Push((bool) Stack[-5] == 0)
0x607: IF (Stack[-1] == 0) GOTO 0x60a; Pop(1)

0x608: Stack[-6] = (bool) 0
0x609: Return(); Pop(4)

0x60a: PushEmpty(bool)
0x60b: Stack[-1] = (bool) 0
0x60c: Push("IsDead")
0x60d: Push((int) 1)
0x60e: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x60f: IF (Stack[-1] == 0) GOTO 0x616; Pop(1)

0x610: PushEmpty(bool, object)
0x611: Stack[-1] = Stack[-8]
0x612: Call2 0x600

0x613: Pop(1)
0x614: IF (Stack[-1] == 0) GOTO 0x616; Pop(1)

0x615: Stack[-1] = (bool) 1
0x616: IF (Stack[-1] == 0) GOTO 0x619; Pop(1)

0x617: Stack[-6] = (bool) 0
0x618: Return(); Pop(4)

0x619: @ GetScene(Stack[-2])
0x61a: Pop(0)
0x61b: Pop(0); Push((bool) Stack[-2] == 0)
0x61c: IF (Stack[-1] == 0) GOTO 0x61f; Pop(1)

0x61d: Stack[-6] = (bool) 0
0x61e: Return(); Pop(4)

0x61f: @@ GetScene(Stack[-1])
0x620: Pop(0)
0x621: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x622: IF (Stack[-1] == 0) GOTO 0x625; Pop(1)

0x623: Stack[-6] = (bool) 0
0x624: Return(); Pop(4)

0x625: Stack[-6] = (bool) 1
0x626: Return(); Pop(4)

0x627: Stack[-1] = 0
0x628: Stack[-2] = 0
0x629: PushEmpty(int, int)
0x62a: PushEmpty(bool, object)
0x62b: Stack[-1] = Stack[-5]
0x62c: Call2 0x605

0x62d: Pop(1)
0x62e: Pop(1); Push((bool) Stack[-1] == 0)
0x62f: IF (Stack[-1] == 0) GOTO 0x632; Pop(1)

0x630: Stack[-4] = (bool) 0
0x631: Return(); Pop(2)

0x632: PushEmpty(bool, object, string)
0x633: Stack[-2] = Stack[-6]
0x634: Stack[-1] = "noaccess"
0x635: Call2 0x576

0x636: Pop(2)
0x637: Pop(1); Push((bool) Stack[-1] == 0)
0x638: IF (Stack[-1] == 0) GOTO 0x63b; Pop(1)

0x639: Stack[-4] = (bool) 1
0x63a: Return(); Pop(2)

0x63b: Push("noaccess")
0x63c: @@ GetProperty(Stack[-1], Stack[-2])
0x63d: Pop(1)
0x63e: Push((int) 0)
0x63f: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x640: Return(); Pop(2)

0x641: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x642: @ GetPosition(Stack[-3])
0x643: Pop(0)
0x644: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x645: Push(CvectorIndex(Stack[-2], 0))
0x646: Push(CvectorIndex(Stack[-3], 2))
0x647: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x648: Pop(2)
0x649: Stack[-8] = Stack[-1]
0x64a: Return(); Pop(6)

0x64b: PushEmpty(cvector, cvector)
0x64c: @@ GetPosition(Stack[-1])
0x64d: Pop(0)
0x64e: PushEmpty(bool, cvector)
0x64f: Stack[-1] = Stack[-3]
0x650: Call2 0x641

0x651: Stack[-6] = Stack[-2]
0x652: Pop(2)
0x653: Return(); Pop(2)

0x654: PushEmpty(bool, int, cvector, cvector, cvector, cvector, string, bool, int, cvector, cvector, cvector, cvector, string)
0x655: Pop(0); Push((bool) Stack[-15] == 0)
0x656: IF (Stack[-1] == 0) GOTO 0x658; Pop(1)

0x657: Return(); Pop(14)

0x658: @ IsDead(Stack[-7])
0x659: Pop(0)
0x65a: Push(Stack[-7])
0x65b: IF (Stack[-1] == 0) GOTO 0x65d; Pop(1)

0x65c: Return(); Pop(14)

0x65d: @ GetSecondaryAnimationType(Stack[-6])
0x65e: Pop(0)
0x65f: Push((int) 0)
0x660: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x661: IF (Stack[-1] == 0) GOTO 0x663; Pop(1)

0x662: Return(); Pop(14)

0x663: @@ GetPosition(Stack[-5])
0x664: Pop(0)
0x665: @ GetPosition(Stack[-4])
0x666: Pop(0)
0x667: @ GetDirection(Stack[-3])
0x668: Pop(0)
0x669: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0x66a: Push(CvectorIndex(Stack[-2], 0))
0x66b: Push(CvectorIndex(Stack[-4], 0))
0x66c: Pop(2); Push(Stack[-2] * Stack[-1]);
0x66d: Push(CvectorIndex(Stack[-3], 2))
0x66e: Push(CvectorIndex(Stack[-5], 2))
0x66f: Pop(2); Push(Stack[-2] * Stack[-1]);
0x670: Pop(2); Push(Stack[-2] + Stack[-1]);
0x671: Push((int) 0)
0x672: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x673: IF (Stack[-1] == 0) GOTO 0x676; Pop(1)

0x674: Stack[-1] = "fhit"
0x675: GOTO 0x677

0x676: Stack[-1] = "bhit"
0x677: Push("hit_react")
0x678: Push("1")
0x679: Pop(1); Push(Stack[-3] + Stack[-1]);
0x67a: Push("2")
0x67b: Pop(1); Push(Stack[-4] + Stack[-1]);
0x67c: Push((int) -10)
0x67d: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x67e: Pop(4)
0x67f: Return(); Pop(14)

0x680: PushEmpty(cvector, object, int, bool, cvector, cvector, int, int, cvector, cvector, object, int, bool, cvector, cvector, int, int, cvector)
0x681: PushEmpty(bool)
0x682: Stack[-1] = (bool) 0
0x683: PushEmpty(bool)
0x684: Stack[-1] = (bool) 0
0x685: Push(Stack[-23])
0x686: IF (Stack[-1] == 0) GOTO 0x68b; Pop(1)

0x687: Push((int) 4)
0x688: Pop(1); Push((bool) Stack[-23] != Stack[-1])
0x689: IF (Stack[-1] == 0) GOTO 0x68b; Pop(1)

0x68a: Stack[-1] = (bool) 1
0x68b: IF (Stack[-1] == 0) GOTO 0x690; Pop(1)

0x68c: Push((int) 5)
0x68d: Pop(1); Push((bool) Stack[-22] != Stack[-1])
0x68e: IF (Stack[-1] == 0) GOTO 0x690; Pop(1)

0x68f: Stack[-1] = (bool) 1
0x690: IF (Stack[-1] == 0) GOTO 0x6bf; Pop(1)

0x691: PushEmpty(cvector, cvector)
0x692: PushEmpty(cvector, object)
0x693: Stack[-1] = Stack[-25]
0x694: Call2 0x562

0x695: Stack[-3] = Stack[-2]
0x696: Pop(2)
0x697: Call2 0x722

0x698: Stack[-11] = Stack[-2]
0x699: Pop(2)
0x69a: @ CreateVectorVector(Stack[-8])
0x69b: Pop(0)
0x69c: Stack[-7] = (int) 1
0x69d: Push("hit")
0x69e: Pop(1); Push(Stack[-1] + Stack[-8]);
0x69f: @ GetGeometryLocator(Stack[-1], Stack[-7], Stack[-6], Stack[-5])
0x6a0: Pop(1)
0x6a1: Pop(0); Push((bool) Stack[-6] == 0)
0x6a2: IF (Stack[-1] == 0) GOTO 0x6a4; Pop(1)

0x6a3: GOTO 0x6ad

0x6a4: Pop(0); Push(Stack[-4] | Stack[-9]);
0x6a5: Push((float)0.70711)
0x6a6: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x6a7: IF (Stack[-1] == 0) GOTO 0x6aa; Pop(1)

0x6a8: @@ add(Stack[-5])
0x6a9: Pop(0)
0x6aa: Push((int) 1)
0x6ab: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x6ac: GOTO 0x69d

0x6ad: @@ size(Stack[-3])
0x6ae: Pop(0)
0x6af: Push(Stack[-3])
0x6b0: IF (Stack[-1] == 0) GOTO 0x6be; Pop(1)

0x6b1: @ irand(Stack[-2], Stack[-3])
0x6b2: Pop(0)
0x6b3: @@ get(Stack[-1], Stack[-2])
0x6b4: Pop(0)
0x6b5: PushEmpty(object, int, float, cvector, cvector)
0x6b6: Stack[-5] = Stack[-26]
0x6b7: Stack[-4] = Stack[-25]
0x6b8: Stack[-3] = Stack[-24]
0x6b9: Stack[-2] = Stack[-6]
0x6ba: Stack[-1] = -Stack[-14]; Pop(0);
0x6bb: Call2 0x6c4

0x6bc: Pop(5)
0x6bd: Return(); Pop(18)

0x6be: Stack[-8] = 0
0x6bf: PushEmpty(object)
0x6c0: Stack[-1] = Stack[-22]
0x6c1: Call2 0x654

0x6c2: Pop(1)
0x6c3: Return(); Pop(18)

0x6c4: PushEmpty(object, object, object, object)
0x6c5: @ GetScene(Stack[-2])
0x6c6: Pop(0)
0x6c7: Push("scripted")
0x6c8: Push("blood_dir.xml")
0x6c9: @ AddActorByType(Stack[-3], Stack[-2], Stack[-4], Stack[-8], Stack[-7], Stack[-1])
0x6ca: Pop(2)
0x6cb: PushEmpty(object)
0x6cc: Stack[-1] = Stack[-10]
0x6cd: Call2 0x654

0x6ce: Pop(1)
0x6cf: Return(); Pop(4)

0x6d0: Stack[-1] = 0
0x6d1: Stack[-2] = 0
0x6d2: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x6d3: @@ GetPosition(Stack[-3])
0x6d4: Pop(0)
0x6d5: @ GetPosition(Stack[-2])
0x6d6: Pop(0)
0x6d7: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0x6d8: Push(CvectorIndex(Stack[-1], 0))
0x6d9: Push(CvectorIndex(Stack[-2], 2))
0x6da: @ RotateAsync(Stack[-2], Stack[-1])
0x6db: Pop(2)
0x6dc: Return(); Pop(6)

0x6dd: PushEmpty(float, cvector, float, cvector)
0x6de: @@ GetEyesHeight(Stack[-2])
0x6df: Pop(0)
0x6e0: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x6e1: Push(CvectorIndex(Stack[-1], 1))
0x6e2: Stack[-1] = Stack[-3]
0x6e3: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x6e4: Push("head")
0x6e5: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x6e6: Pop(1)
0x6e7: Return(); Pop(4)

0x6e8: PushEmpty(bool, bool)
0x6e9: PushEmpty(bool, int, int)
0x6ea: Stack[-2] = Stack[-7]
0x6eb: Stack[-1] = Stack[-6]
0x6ec: Call2 0x75e

0x6ed: Pop(2)
0x6ee: IF (Stack[-1] == 0) GOTO 0x6f2; Pop(1)

0x6ef: Push((int) 0)
0x6f0: @ AddItem(Stack[-2], Stack[-6], Stack[-1])
0x6f1: Pop(1)
0x6f2: Return(); Pop(2)

0x6f3: PushEmpty(bool, int, bool, int, bool, float, cvector, cvector, bool, int, bool, int, bool, float, cvector, cvector)
0x6f4: @ IsExisting3DSound(Stack[-8], Stack[-17])
0x6f5: Pop(0)
0x6f6: Pop(0); Push((bool) Stack[-8] == 0)
0x6f7: IF (Stack[-1] == 0) GOTO 0x70c; Pop(1)

0x6f8: Stack[-7] = (int) 0
0x6f9: Push((int) 1)
0x6fa: Pop(1); Push(Stack[-8] + Stack[-1]);
0x6fb: Pop(1); Push(Stack[-18] + Stack[-1]);
0x6fc: @ IsExisting3DSound(Stack[-7], Stack[-1])
0x6fd: Pop(1)
0x6fe: Pop(0); Push((bool) Stack[-6] == 0)
0x6ff: IF (Stack[-1] == 0) GOTO 0x701; Pop(1)

0x700: GOTO 0x704

0x701: Push((int) 1)
0x702: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x703: GOTO 0x6f9

0x704: Pop(0); Push((bool) Stack[-7] == 0)
0x705: IF (Stack[-1] == 0) GOTO 0x707; Pop(1)

0x706: Return(); Pop(16)

0x707: @ irand(Stack[-5], Stack[-7])
0x708: Pop(0)
0x709: Push((int) 1)
0x70a: Pop(1); Push(Stack[-6] + Stack[-1]);
0x70b: Stack[-18] = Stack[-18] + Stack[-1]; Pop(1);
0x70c: @ Is3DSoundLoaded(Stack[-4], Stack[-17])
0x70d: Pop(0)
0x70e: Push(Stack[-4])
0x70f: IF (Stack[-1] == 0) GOTO 0x71b; Pop(1)

0x710: @ GetEyesHeight(Stack[-3])
0x711: Pop(0)
0x712: @ GetDirection(Stack[-2])
0x713: Pop(0)
0x714: Push((int) 50)
0x715: Stack[-2] = Stack[-3] * Stack[-1]; Pop(1);
0x716: Push(CvectorIndex(Stack[-1], 1))
0x717: Stack[-1] = Stack[-1] + Stack[-4]; Pop(0);
0x718: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x719: @ PlayGlobalSound(Stack[-17], Stack[-1])
0x71a: Pop(0)
0x71b: Return(); Pop(16)

0x71c: PushEmpty(object, object)
0x71d: @ self(Stack[-1])
0x71e: Pop(0)
0x71f: Stack[-3] = Stack[-1]
0x720: Return(); Pop(2)

0x721: Stack[-1] = 0
0x722: PushEmpty(float, float)
0x723: Pop(0); Push(Stack[-3] | Stack[-3]);
0x724: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x725: Push((float)0.0)
0x726: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x727: IF (Stack[-1] == 0) GOTO 0x72a; Pop(1)

0x728: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x729: Return(); Pop(2)

0x72a: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x72b: Return(); Pop(2)

0x72c: PushEmpty()
0x72d: Pop(0); Push((bool) Stack[-2] < Stack[-1])
0x72e: IF (Stack[-1] == 0) GOTO 0x731; Pop(1)

0x72f: Stack[-3] = Stack[-2]
0x730: GOTO 0x732

0x731: Stack[-3] = Stack[-1]
0x732: Return(); Pop(0)

0x733: PushEmpty()
0x734: Pop(0); Push(Stack[-2] * Stack[-2]);
0x735: Push((int) 4)
0x736: Pop(1); Push(Stack[-1] * Stack[-5]);
0x737: Pop(1); Push(Stack[-1] * Stack[-3]);
0x738: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x739: Return(); Pop(0)

0x73a: PushEmpty(float, float)
0x73b: Pop(0); Push(( -Stack[-5])
0x73c: Pop(1); Push(Stack[-1] - Stack[-4]);
0x73d: Push((int) 2)
0x73e: Pop(1); Push(Stack[-1] * Stack[-8]);
0x73f: Stack[-3] = Stack[-2] / Stack[-1]; Pop(2);
0x740: Push((int) 0)
0x741: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x742: IF (Stack[-1] == 0) GOTO 0x745; Pop(1)

0x743: Stack[-7] = Stack[-1]
0x744: Return(); Pop(2)

0x745: Pop(0); Push(( -Stack[-5])
0x746: Pop(1); Push(Stack[-1] + Stack[-4]);
0x747: Push((int) 2)
0x748: Pop(1); Push(Stack[-1] * Stack[-8]);
0x749: Stack[-9] = Stack[-2] / Stack[-1]; Pop(2);
0x74a: Return(); Pop(2)

0x74b: PushEmpty()
0x74c: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x74d: IF (Stack[-1] == 0) GOTO 0x750; Pop(1)

0x74e: Stack[-4] = Stack[-2]
0x74f: Return(); Pop(0)

0x750: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x751: IF (Stack[-1] == 0) GOTO 0x754; Pop(1)

0x752: Stack[-4] = Stack[-1]
0x753: Return(); Pop(0)

0x754: Stack[-4] = Stack[-3]
0x755: Return(); Pop(0)

0x756: PushEmpty()
0x757: Stack[-4] = (bool) 0
0x758: Pop(0); Push((bool) Stack[-3] >= Stack[-2])
0x759: IF (Stack[-1] == 0) GOTO 0x75d; Pop(1)

0x75a: Pop(0); Push((bool) Stack[-3] <= Stack[-1])
0x75b: IF (Stack[-1] == 0) GOTO 0x75d; Pop(1)

0x75c: Stack[-4] = (bool) 1
0x75d: Return(); Pop(0)

0x75e: PushEmpty(int, int)
0x75f: @ irand(Stack[-1], Stack[-3])
0x760: Pop(0)
0x761: Stack[-5] = Stack[-1] < Stack[-4]; Pop(0);
0x762: Return(); Pop(2)

0x763: PushEmpty()
0x764: Pop(0); Push((bool) Stack[-2] == 0)
0x765: IF (Stack[-1] == 0) GOTO 0x768; Pop(1)

0x766: Stack[-3] = (bool) 0
0x767: Return(); Pop(0)

0x768: Push((int) 0)
0x769: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x76a: IF (Stack[-1] == 0) GOTO 0x76f; Pop(1)

0x76b: Push((int) 8)
0x76c: @ SendWorldWndMessage(Stack[-1])
0x76d: Pop(1)
0x76e: GOTO 0x778

0x76f: Push((int) 0)
0x770: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x771: IF (Stack[-1] == 0) GOTO 0x776; Pop(1)

0x772: Push((int) 9)
0x773: @ SendWorldWndMessage(Stack[-1])
0x774: Pop(1)
0x775: GOTO 0x778

0x776: Stack[-3] = (bool) 0
0x777: Return(); Pop(0)

0x778: PushEmpty(float)
0x779: Stack[-1] = Stack[-2]
0x77a: Call2 0x790

0x77b: Pop(1)
0x77c: PushEmpty(bool, object, string, float, float, float)
0x77d: Stack[-5] = Stack[-8]
0x77e: Stack[-4] = "reputation"
0x77f: Stack[-3] = Stack[-7]
0x780: Stack[-2] = (int) 0
0x781: Stack[-1] = (int) 1
0x782: Call2 0x582

0x783: Pop(6)
0x784: Stack[-3] = (bool) 1
0x785: Return(); Pop(0)

0x786: PushEmpty(object, object)
0x787: @ CreateFloatVector(Stack[-1])
0x788: Pop(0)
0x789: @@ add(Stack[-3])
0x78a: Pop(0)
0x78b: Push((int) 15)
0x78c: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x78d: Pop(1)
0x78e: Return(); Pop(2)

0x78f: Stack[-1] = 0
0x790: PushEmpty(object, object)
0x791: @ CreateFloatVector(Stack[-1])
0x792: Pop(0)
0x793: @@ add(Stack[-3])
0x794: Pop(0)
0x795: Push((int) 16)
0x796: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x797: Pop(1)
0x798: Return(); Pop(2)

0x799: Stack[-1] = 0
0x79a: PushEmpty(bool, bool)
0x79b: @ IsPlayerActor(Stack[-3], Stack[-1])
0x79c: Pop(0)
0x79d: Push(Stack[-1])
0x79e: IF (Stack[-1] == 0) GOTO 0x7a2; Pop(1)

0x79f: Push("attack")
0x7a0: @ PlayGlobalMusic(Stack[-1])
0x7a1: Pop(1)
0x7a2: Return(); Pop(2)

0x7a3: PushEmpty(object, object)
0x7a4: @ GetScene(Stack[-1])
0x7a5: Pop(0)
0x7a6: Push("battle")
0x7a7: PushEmpty(object)
0x7a8: Call2 0x71c

0x7a9: Pop(0)
0x7aa: @ BroadcastMessage(Stack[-2], Stack[-1], Stack[-3])
0x7ab: Pop(2)
0x7ac: Return(); Pop(2)

0x7ad: Stack[-1] = 0
0x7ae: PushEmpty(bool, bool)
0x7af: Push("god_mode")
0x7b0: @ GetVariable(Stack[-1], Stack[-2])
0x7b1: Pop(1)
0x7b2: Stack[-3] = Stack[-1]
0x7b3: Return(); Pop(2)

0x7b4: PushEmpty(cvector, float, float, float, float, float, cvector, float, float, float, float, float)
0x7b5: Stack[-6] = Stack[-14] - Stack[-15]; Pop(0);
0x7b6: Stack[-5] = (int) 250000
0x7b7: Push(CvectorIndex(Stack[-6], 1))
0x7b8: Push((int) 1000)
0x7b9: Pop(2); Push(Stack[-2] * Stack[-1]);
0x7ba: Pop(0); Push(Stack[-14] * Stack[-14]);
0x7bb: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x7bc: Stack[-3] = Stack[-6] | Stack[-6]; Pop(0);
0x7bd: PushEmpty(float, float, float, float)
0x7be: Stack[-3] = Stack[-9]
0x7bf: Stack[-2] = Stack[-8]
0x7c0: Stack[-1] = Stack[-7]
0x7c1: Call2 0x733

0x7c2: Stack[-6] = Stack[-4]
0x7c3: Pop(4)
0x7c4: Push((int) 0)
0x7c5: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x7c6: IF (Stack[-1] == 0) GOTO 0x7c9; Pop(1)

0x7c7: Stack[-1] = (int) 1
0x7c8: GOTO 0x7d1

0x7c9: PushEmpty(float, float, float, float, float)
0x7ca: Stack[-4] = Stack[-10]
0x7cb: Stack[-3] = Stack[-9]
0x7cc: Stack[-2] = Stack[-8]
0x7cd: Stack[-1] = Sqrt(Stack[-7]); Pop(0);
0x7ce: Call2 0x73a

0x7cf: Pop(4)
0x7d0: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x7d1: Push(CVector(0.0, 500.0, 0.0))
0x7d2: Pop(1); Push(Stack[-1] * Stack[-2]);
0x7d3: Pop(1); Push(Stack[-1] * Stack[-2]);
0x7d4: Pop(1); Push(Stack[-7] + Stack[-1]);
0x7d5: Stack[-17] = Stack[-1] / Stack[-2]; Pop(1);
0x7d6: Return(); Pop(12)

0x7d7: PushEmpty(int, int)
0x7d8: Push("branch")
0x7d9: @ GetVariable(Stack[-1], Stack[-2])
0x7da: Pop(1)
0x7db: Stack[-3] = Stack[-1]
0x7dc: Return(); Pop(2)

0x7dd: PushEmpty()
0x7de: PushEmpty(int)
0x7df: Call2 0x7d7

0x7e0: Pop(0)
0x7e1: Push((int) 1)
0x7e2: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x7e3: IF (Stack[-1] == 0) GOTO 0x7e7; Pop(1)

0x7e4: @ WorkWithCorpse(Stack[-1])
0x7e5: Pop(0)
0x7e6: GOTO 0x7e9

0x7e7: @ Barter(Stack[-1])
0x7e8: Pop(0)
0x7e9: Return(); Pop(0)

0x7ea: PushEmpty(int, bool, int, bool)
0x7eb: Pop(0); Push((bool) Stack[-6] > Stack[-5])
0x7ec: IF (Stack[-1] == 0) GOTO 0x7f1; Pop(1)

0x7ed: Push("GenerateMoney: iMin > iMax")
0x7ee: @ Trace(Stack[-1])
0x7ef: Pop(1)
0x7f0: Return(); Pop(4)

0x7f1: Stack[-2] = (int) 0
0x7f2: Pop(0); Push((bool) Stack[-6] != Stack[-5])
0x7f3: IF (Stack[-1] == 0) GOTO 0x7f8; Pop(1)

0x7f4: Pop(0); Push(Stack[-5] - Stack[-6]);
0x7f5: @ irand(Stack[-3], Stack[-1])
0x7f6: Pop(1)
0x7f7: GOTO 0x7fc

0x7f8: Push((int) 0)
0x7f9: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x7fa: IF (Stack[-1] == 0) GOTO 0x7fc; Pop(1)

0x7fb: Return(); Pop(4)

0x7fc: Stack[-2] = Stack[-2] + Stack[-6]; Pop(0);
0x7fd: Push((int) 0)
0x7fe: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7ff: IF (Stack[-1] == 0) GOTO 0x801; Pop(1)

0x800: Return(); Pop(4)

0x801: PushEmpty(int, string)
0x802: Stack[-1] = "Money"
0x803: Call2 0x850

0x804: Pop(1)
0x805: Push((int) 0)
0x806: @ AddItem(Stack[-3], Stack[-2], Stack[-1], Stack[-4])
0x807: Pop(2)
0x808: Return(); Pop(4)

0x809: PushEmpty(object, int, bool, object, int, bool)
0x80a: @ CreateInvItem(Stack[-3])
0x80b: Pop(0)
0x80c: @@ SetItemName(Stack[-7])
0x80d: Pop(0)
0x80e: Push("Organ")
0x80f: Push((int) 1)
0x810: @@ SetProperty(Stack[-2], Stack[-1])
0x811: Pop(2)
0x812: @@ GetItemID(Stack[-2])
0x813: Pop(0)
0x814: Push((int) 0)
0x815: Push((int) 1)
0x816: @ AddItem(Stack[-3], Stack[-5], Stack[-2], Stack[-1])
0x817: Pop(2)
0x818: Return(); Pop(6)

0x819: Stack[-3] = 0
0x81a: PushEmpty(int)
0x81b: Call2 0x7d7

0x81c: Pop(0)
0x81d: Push((int) 1)
0x81e: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x81f: IF (Stack[-1] == 0) GOTO 0x821; Pop(1)

0x820: Return(); Pop(0)

0x821: PushEmpty(string)
0x822: Stack[-1] = "liver"
0x823: Call2 0x809

0x824: Pop(1)
0x825: PushEmpty(string)
0x826: Stack[-1] = "kidney"
0x827: Call2 0x809

0x828: Pop(1)
0x829: PushEmpty(string)
0x82a: Stack[-1] = "heart"
0x82b: Call2 0x809

0x82c: Pop(1)
0x82d: PushEmpty(string)
0x82e: Stack[-1] = "blood"
0x82f: Call2 0x809

0x830: Pop(1)
0x831: Return(); Pop(0)

0x832: PushEmpty(int, bool, int, bool)
0x833: Push((int) 0)
0x834: @ ClearSubContainer(Stack[-1])
0x835: Pop(1)
0x836: PushEmpty(int, int)
0x837: Stack[-2] = (int) 300
0x838: Stack[-1] = (int) 750
0x839: Call2 0x7ea

0x83a: Pop(2)
0x83b: PushEmpty(string, int, int)
0x83c: Stack[-3] = "Knife"
0x83d: Stack[-2] = (int) 1
0x83e: Stack[-1] = (int) 8
0x83f: Call2 0x6e8

0x840: Pop(3)
0x841: PushEmpty(string, int, int)
0x842: Stack[-3] = "lockpick"
0x843: Stack[-2] = (int) 1
0x844: Stack[-1] = (int) 6
0x845: Call2 0x6e8

0x846: Pop(3)
0x847: PushEmpty(int, string)
0x848: Stack[-1] = "grabitel_mark"
0x849: Call2 0x850

0x84a: Pop(1)
0x84b: Push((int) 0)
0x84c: Push((int) 1)
0x84d: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x84e: Pop(3)
0x84f: Return(); Pop(4)

0x850: PushEmpty(int, int)
0x851: @ GetInvItemByName(Stack[-1], Stack[-3])
0x852: Pop(0)
0x853: Stack[-4] = Stack[-1]
0x854: Return(); Pop(2)

0x855: PushEmpty(object)
0x856: Call2 0x71c

0x857: Pop(0)
0x858: @ RemoveActor(Stack[-1])
0x859: Pop(1)
0x85a: @ Hold()
0x85b: Pop(0)
0x85c: Return(); Pop(0)

0x85d: PushEmpty()
0x85e: PushEmpty(bool, object)
0x85f: Stack[-1] = Stack[-3]
0x860: Call2 0x571

0x861: Pop(1)
0x862: IF (Stack[-1] == 0) GOTO 0x86b; Pop(1)

0x863: PushEmpty()
0x864: Call2 0x832

0x865: Pop(0)
0x866: PushEmpty(bool, object, float)
0x867: Stack[-2] = Stack[-4]
0x868: Stack[-1] = (float) 0.03
0x869: Call2 0x763

0x86a: Pop(3)
0x86b: PushEmpty()
0x86c: Call2 0x81a

0x86d: Pop(0)
0x86e: PushEmpty(object)
0x86f: Stack[-1] = Stack[-2]
0x870: Push(-1, 0); TaskCall(5)
0x871: Call2 0x4c0

0x872: Pop(-1, 0); TaskReturn
0x873: Pop(1)
0x874: Return(); Pop(0)

0x875: PushEmpty()
0x876: Return(); Pop(0)

0x877: PushEmpty()
0x878: Stack[-3] = (bool) 0
0x879: Return(); Pop(0)

0x87a: PushEmpty()
0x87b: PushEmpty(object, int, float)
0x87c: Stack[-3] = Stack[-7]
0x87d: Stack[-2] = Stack[-6]
0x87e: Stack[-1] = Stack[-5]
0x87f: Call2 0x680

0x880: Pop(3)
0x881: Return(); Pop(0)

0x882: PushEmpty()
0x883: PushEmpty(object, int, float, cvector, cvector)
0x884: Stack[-5] = Stack[-11]
0x885: Stack[-4] = Stack[-10]
0x886: Stack[-3] = Stack[-9]
0x887: Stack[-2] = Stack[-7]
0x888: Stack[-1] = Stack[-6]
0x889: Call2 0x6c4

0x88a: Pop(5)
0x88b: Return(); Pop(0)

0x88c: PushEmpty(float, float)
0x88d: Push("health")
0x88e: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x88f: IF (Stack[-1] == 0) GOTO 0x898; Pop(1)

0x890: Push("health")
0x891: @ GetProperty(Stack[-1], Stack[-2])
0x892: Pop(1)
0x893: Push((int) 0)
0x894: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x895: IF (Stack[-1] == 0) GOTO 0x898; Pop(1)

0x896: @ SignalDeath(Stack[-4])
0x897: Pop(0)
0x898: Return(); Pop(2)

0x899: PushEmpty()
0x89a: PushEmpty(object)
0x89b: Stack[-1] = Stack[-2]
0x89c: Call2 0x85d

0x89d: Pop(1)
0x89e: Return(); Pop(0)

