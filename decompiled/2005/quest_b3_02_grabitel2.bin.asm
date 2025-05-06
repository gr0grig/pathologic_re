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
	idle
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
	RemoveStationaryActor

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
	WaitForAnimEnd (1 args)
	rand (2 args)
	ResetAAS (0 args)
	StopAnimation (0 args)
	StopGroup0 (0 args)
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
		EVENT_17 Op = 0x47f Vars = (object)
		EVENT_1 Op = 0x48d Vars = (object)
		EVENT_3 Op = 0x497 Vars = (object)
	GTASK_4  Params = 1
		EVENT_0 Op = 0x512 Vars = (object)
		EVENT_22 Op = 0x591 Vars = (object, int, float, float)
		EVENT_16 Op = 0x593 Vars = (object, string)
		EVENT_41 Op = 0x595 Vars = (object)
	GTASK_5  Params = 2

Events:
EVENT_22 Op = 0x8f4 Vars = (object, int, float, float)
EVENT_43 Op = 0x8fc Vars = (object, int, float, float, cvector, cvector)
EVENT_16 Op = 0x906 Vars = (object, string)
EVENT_41 Op = 0x913 Vars = (object)

0x0: PushEmpty(object, cvector, bool, object, cvector, float, cvector, object, cvector, bool, object, cvector, float, cvector)
0x1: PushEmpty(object)
0x2: Stack[-1] = Stack[-16]
0x3: Call2 0x807

0x4: Pop(1)
0x5: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x6: PushEmpty(bool, object)
0x7: Stack[-1] = Stack[-17]
0x8: Call2 0x6b3

0x9: Pop(2)
0xa: PushEmpty(bool, object)
0xb: Stack[-1] = Stack[-17]
0xc: Call2 0x691

0xd: Pop(1)
0xe: Pop(1); Push((bool) Stack[-1] == 0)
0xf: IF (Stack[-1] == 0) GOTO 0x12; Pop(1)

0x10: Stack[-16] = (bool) 0
0x11: Return(); Pop(14)

0x12: PushEmpty()
0x13: Call2 0x810

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
0x1f: Call2 0x691

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
0x37: Call2 0x789

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
0x4b: Call2 0x839

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
0x5b: Call2 0x691

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
0x6e: Call2 0x926

0x6f: Pop(1)
0x70: Return(); Pop(0)

0x71: PushEmpty()
0x72: PushEmpty(bool, object, object)
0x73: Stack[-2] = Stack[-6]
0x74: Stack[-1] = Stack[-5]
0x75: Call2 0x928

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
0xaa: Call2 0x649

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
0xb9: Call2 0x926

0xba: Pop(1)
0xbb: Return(); Pop(0)

0xbc: PushEmpty()
0xbd: PushEmpty(bool, object, object)
0xbe: Stack[-2] = Stack[-6]
0xbf: Stack[-1] = Stack[-5]
0xc0: Call2 0x928

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
0xe8: Call2 0x789

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
0xf7: Call2 0x691

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
0x135: Call2 0x73a

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
0x145: Call2 0x691

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
0x180: Call2 0x691

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
0x1eb: Call2 0x600

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
0x208: Call2 0x810

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
0x216: Call2 0x691

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
0x22b: Call2 0x810

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
0x239: Call2 0x691

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
0x253: Call2 0x810

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
0x25f: Call2 0x691

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
0x2ae: Call2 0x691

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
0x2ce: Call2 0x691

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
0x2fd: Call2 0x5ca

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
0x351: Call2 0x807

0x352: Pop(1)
0x353: Return(); Pop(0)

0x354: PushEmpty(string)
0x355: Stack[-1] = "attack_stay"
0x356: Call2 0x760

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
0x362: Call2 0x926

0x363: Pop(1)
0x364: Return(); Pop(0)

0x365: PushEmpty()
0x366: PushEmpty(bool, object, object)
0x367: Stack[-2] = Stack[-6]
0x368: Stack[-1] = Stack[-5]
0x369: Call2 0x928

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
0x37a: Call2 0x807

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
0x387: Call2 0x74a

0x388: Pop(1)
0x389: GOTO 0x38b

0x38a: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x38b: PushEmpty(bool, object)
0x38c: Stack[-1] = Stack[-11]
0x38d: Call2 0x5d9

0x38e: Pop(1)
0x38f: IF (Stack[-1] == 0) GOTO 0x395; Pop(1)

0x390: PushEmpty(object)
0x391: Call2 0x789

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
0x3ae: Call2 0x807

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
0x3cf: Call2 0x74a

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
0x469: Call2 0x913

0x46a: Pop(1)
0x46b: Return(); Pop(0)

0x46c: PushEmpty()
0x46d: PushEmpty(bool, object)
0x46e: Stack[-1] = Stack[-3]
0x46f: Call2 0x691

0x470: Stack[-4] = Stack[-2]
0x471: Pop(2)
0x472: Return(); Pop(0)

0x473: Stack[-1] = "walk"
0x474: Return(); Pop(0)

0x475: Stack[-1] = "run"
0x476: Return(); Pop(0)

0x477: Push((int) 3)
0x478: @ Sleep(Stack[-1])
0x479: Pop(1)
0x47a: PushEmpty()
0x47b: Call2 0x4a1

0x47c: Pop(0)
0x47d: GOTO 0x477

0x47e: Return(); Pop(0)

0x47f: PushEmpty()
0x480: PushEmpty(bool, object)
0x481: Stack[-1] = Stack[-3]
0x482: Call2 0x919

0x483: Pop(1)
0x484: IF (Stack[-1] == 0) GOTO 0x48c; Pop(1)

0x485: PushEmpty()
0x486: Call2 0x4f2

0x487: Pop(0)
0x488: PushEmpty(object)
0x489: Stack[-1] = Stack[-2]
0x48a: Call2 0x920

0x48b: Pop(1)
0x48c: Return(); Pop(0)

0x48d: PushEmpty(bool, bool)
0x48e: @ IsPlayerActor(Stack[-3], Stack[-1])
0x48f: Pop(0)
0x490: Push(Stack[-1])
0x491: IF (Stack[-1] == 0) GOTO 0x496; Pop(1)

0x492: PushEmpty(object)
0x493: Stack[-1] = Stack[-4]
0x494: Call2 0x47f

0x495: Pop(1)
0x496: Return(); Pop(2)

0x497: PushEmpty(bool, bool)
0x498: @ IsPlayerActor(Stack[-3], Stack[-1])
0x499: Pop(0)
0x49a: Push(Stack[-1])
0x49b: IF (Stack[-1] == 0) GOTO 0x4a0; Pop(1)

0x49c: PushEmpty(object)
0x49d: Stack[-1] = Stack[-4]
0x49e: Call2 0x47f

0x49f: Pop(1)
0x4a0: Return(); Pop(2)

0x4a1: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x4a2: @ WaitForAnimEnd()
0x4a3: Pop(0)
0x4a4: PushEmpty(bool)
0x4a5: Call2 0x745

0x4a6: Pop(0)
0x4a7: Pop(1); Push((bool) Stack[-1] == 0)
0x4a8: IF (Stack[-1] == 0) GOTO 0x4aa; Pop(1)

0x4a9: Return(); Pop(14)

0x4aa: PushEmpty(int)
0x4ab: Call2 0x828

0x4ac: Stack[-8] = Stack[-1]
0x4ad: Pop(1)
0x4ae: Stack[-6] = (int) 0
0x4af: PushEmpty(bool)
0x4b0: Stack[-1] = (bool) 0
0x4b1: Push((int) 5)
0x4b2: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x4b3: IF (Stack[-1] == 0) GOTO 0x4b9; Pop(1)

0x4b4: PushEmpty(bool)
0x4b5: Call2 0x745

0x4b6: Pop(0)
0x4b7: IF (Stack[-1] == 0) GOTO 0x4b9; Pop(1)

0x4b8: Stack[-1] = (bool) 1
0x4b9: IF (Stack[-1] == 0) GOTO 0x4ed; Pop(1)

0x4ba: Push((int) 3)
0x4bb: @ irand(Stack[-6], Stack[-1])
0x4bc: Pop(1)
0x4bd: Push((int) 0)
0x4be: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x4bf: IF (Stack[-1] == 0) GOTO 0x4d1; Pop(1)

0x4c0: Push(Stack[-7])
0x4c1: IF (Stack[-1] == 0) GOTO 0x4d0; Pop(1)

0x4c2: @ irand(Stack[-4], Stack[-7])
0x4c3: Pop(0)
0x4c4: Push("all")
0x4c5: PushEmpty(string, int)
0x4c6: Stack[-1] = Stack[-7]
0x4c7: Call2 0x821

0x4c8: Pop(1)
0x4c9: @ PlayAnimation(Stack[-2], Stack[-1])
0x4ca: Pop(2)
0x4cb: @ WaitForAnimEnd(Stack[-3])
0x4cc: Pop(0)
0x4cd: Pop(0); Push((bool) Stack[-3] == 0)
0x4ce: IF (Stack[-1] == 0) GOTO 0x4d0; Pop(1)

0x4cf: GOTO 0x4ed

0x4d0: GOTO 0x4e2

0x4d1: Push((int) 1)
0x4d2: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x4d3: IF (Stack[-1] == 0) GOTO 0x4df; Pop(1)

0x4d4: Push((int) 4)
0x4d5: @ rand(Stack[-3], Stack[-1])
0x4d6: Pop(1)
0x4d7: Push((int) 1)
0x4d8: Pop(1); Push(Stack[-3] + Stack[-1]);
0x4d9: @ Sleep(Stack[-1], Stack[-2])
0x4da: Pop(1)
0x4db: Pop(0); Push((bool) Stack[-1] == 0)
0x4dc: IF (Stack[-1] == 0) GOTO 0x4de; Pop(1)

0x4dd: GOTO 0x4ed

0x4de: GOTO 0x4e2

0x4df: Push(Stack[-6])
0x4e0: IF (Stack[-1] == 0) GOTO 0x4e2; Pop(1)

0x4e1: GOTO 0x4ed

0x4e2: PushEmpty(bool)
0x4e3: Call2 0x4f0

0x4e4: Pop(0)
0x4e5: Pop(1); Push((bool) Stack[-1] == 0)
0x4e6: IF (Stack[-1] == 0) GOTO 0x4e8; Pop(1)

0x4e7: GOTO 0x4ed

0x4e8: @ ResetAAS()
0x4e9: Pop(0)
0x4ea: Push((int) 1)
0x4eb: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x4ec: GOTO 0x4af

0x4ed: @ ResetAAS()
0x4ee: Pop(0)
0x4ef: Return(); Pop(14)

0x4f0: Stack[-1] = (bool) 1
0x4f1: Return(); Pop(0)

0x4f2: @ StopAnimation()
0x4f3: Pop(0)
0x4f4: @ StopGroup0()
0x4f5: Pop(0)
0x4f6: Return(); Pop(0)

0x4f7: PushEmpty()
0x4f8: PushEmpty()
0x4f9: Call2 0x8b7

0x4fa: Pop(0)
0x4fb: PushEmpty()
0x4fc: Call2 0x89f

0x4fd: Pop(0)
0x4fe: PushEmpty(object)
0x4ff: Stack[-1] = Stack[-2]
0x500: Call2 0x503

0x501: Pop(1)
0x502: Return(); Pop(0)

0x503: PushEmpty()
0x504: EventDisable(0)
0x505: PushEmpty(object)
0x506: Stack[-1] = Stack[-2]
0x507: Call2 0x51c

0x508: Pop(1)
0x509: Push((int) 50)
0x50a: Push((int) 40)
0x50b: @ SetRTEnvelope(Stack[-2], Stack[-1])
0x50c: Pop(2)
0x50d: EventEnable(0)
0x50e: @ Hold()
0x50f: Pop(0)
0x510: GOTO 0x50e

0x511: Return(); Pop(0)

0x512: PushEmpty(bool, bool)
0x513: @ IsOverrideActive(Stack[-1])
0x514: Pop(0)
0x515: Pop(0); Push((bool) Stack[-1] == 0)
0x516: IF (Stack[-1] == 0) GOTO 0x51b; Pop(1)

0x517: PushEmpty(object)
0x518: Stack[-1] = Stack[-4]
0x519: Call2 0x862

0x51a: Pop(1)
0x51b: Return(); Pop(2)

0x51c: PushEmpty(cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector, cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector)
0x51d: Pop(0); Push((bool) Stack[-21] == 0)
0x51e: IF (Stack[-1] == 0) GOTO 0x524; Pop(1)

0x51f: PushEmpty(string)
0x520: Stack[-1] = "fdie"
0x521: Call2 0x577

0x522: Pop(1)
0x523: GOTO 0x576

0x524: @@ GetPosition(Stack[-10])
0x525: Pop(0)
0x526: @ GetPosition(Stack[-9])
0x527: Pop(0)
0x528: @ GetDirection(Stack[-8])
0x529: Pop(0)
0x52a: Stack[-7] = Stack[-9] - Stack[-10]; Pop(0);
0x52b: Push(CvectorIndex(Stack[-7], 0))
0x52c: Push(CvectorIndex(Stack[-9], 0))
0x52d: Pop(2); Push(Stack[-2] * Stack[-1]);
0x52e: Push(CvectorIndex(Stack[-8], 2))
0x52f: Push(CvectorIndex(Stack[-10], 2))
0x530: Pop(2); Push(Stack[-2] * Stack[-1]);
0x531: Pop(2); Push(Stack[-2] + Stack[-1]);
0x532: Push((int) 0)
0x533: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x534: IF (Stack[-1] == 0) GOTO 0x537; Pop(1)

0x535: Stack[-6] = "fdie"
0x536: GOTO 0x538

0x537: Stack[-6] = "bdie"
0x538: @ RemoveRTEnvelope()
0x539: Pop(0)
0x53a: @ SetDeathState()
0x53b: Pop(0)
0x53c: @ Stop()
0x53d: Pop(0)
0x53e: @ StopAsync()
0x53f: Pop(0)
0x540: Stack[-5] = Stack[-21]
0x541: Push("GetScriptProperty")
0x542: Push((int) 2)
0x543: Pop(2); Push(IsFuncExist(Stack[-23], Stack[-2], Stack[-1]))
0x544: IF (Stack[-1] == 0) GOTO 0x550; Pop(1)

0x545: Push("Owner")
0x546: @@ HasScriptProperty(Stack[-5], Stack[-1])
0x547: Pop(1)
0x548: Push(Stack[-4])
0x549: IF (Stack[-1] == 0) GOTO 0x550; Pop(1)

0x54a: Push("Owner")
0x54b: @@ GetScriptProperty(Stack[-6], Stack[-1])
0x54c: Pop(1)
0x54d: Pop(0); Push((bool) Stack[-5] == 0)
0x54e: IF (Stack[-1] == 0) GOTO 0x550; Pop(1)

0x54f: Stack[-5] = Stack[-21]
0x550: Push("@GetEyesHeight")
0x551: Push((int) 1)
0x552: Pop(2); Push(IsFuncExist(Stack[-7], Stack[-2], Stack[-1]))
0x553: IF (Stack[-1] == 0) GOTO 0x55f; Pop(1)

0x554: @@ GetEyesHeight(Stack[-2])
0x555: Pop(0)
0x556: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x557: Push(CvectorIndex(Stack[-1], 1))
0x558: Stack[-1] = Stack[-3]
0x559: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x55a: Push("head")
0x55b: @ LookAsync(Stack[-22], Stack[-1], Stack[-2])
0x55c: Pop(1)
0x55d: Stack[-3] = (bool) 1
0x55e: GOTO 0x560

0x55f: Stack[-3] = (bool) 0
0x560: PushEmpty(string)
0x561: Stack[-1] = Stack[-7]
0x562: Call2 0x760

0x563: Pop(1)
0x564: Push("all")
0x565: @ PlayAnimation(Stack[-1], Stack[-7])
0x566: Pop(1)
0x567: @ WaitForAnimEnd()
0x568: Pop(0)
0x569: Push(Stack[-3])
0x56a: IF (Stack[-1] == 0) GOTO 0x570; Pop(1)

0x56b: @ StopAsync()
0x56c: Pop(0)
0x56d: Push("head")
0x56e: @ UnlookAsync(Stack[-1])
0x56f: Pop(1)
0x570: Push("all")
0x571: @ LockAnimationEnd(Stack[-1], Stack[-7])
0x572: Pop(1)
0x573: @ RemoveEnvelope()
0x574: Pop(0)
0x575: Stack[-5] = 0
0x576: Return(); Pop(20)

0x577: PushEmpty()
0x578: @ RemoveRTEnvelope()
0x579: Pop(0)
0x57a: @ SetDeathState()
0x57b: Pop(0)
0x57c: @ Stop()
0x57d: Pop(0)
0x57e: @ StopAsync()
0x57f: Pop(0)
0x580: @ StopSecondaryAnimation()
0x581: Pop(0)
0x582: PushEmpty(string)
0x583: Stack[-1] = Stack[-2]
0x584: Call2 0x760

0x585: Pop(1)
0x586: Push("all")
0x587: @ PlayAnimation(Stack[-1], Stack[-2])
0x588: Pop(1)
0x589: @ WaitForAnimEnd()
0x58a: Pop(0)
0x58b: Push("all")
0x58c: @ LockAnimationEnd(Stack[-1], Stack[-2])
0x58d: Pop(1)
0x58e: @ RemoveEnvelope()
0x58f: Pop(0)
0x590: Return(); Pop(0)

0x591: PushEmpty()
0x592: Return(); Pop(0)

0x593: PushEmpty()
0x594: Return(); Pop(0)

0x595: PushEmpty()
0x596: Return(); Pop(0)

0x597: PushEmpty(float, float)
0x598: PushEmpty(bool, object)
0x599: Stack[-1] = Stack[-5]
0x59a: Call2 0x691

0x59b: Pop(1)
0x59c: Pop(1); Push((bool) Stack[-1] == 0)
0x59d: IF (Stack[-1] == 0) GOTO 0x5a0; Pop(1)

0x59e: Stack[-4] = (bool) 0
0x59f: Return(); Pop(2)

0x5a0: PushEmpty(float, object)
0x5a1: Stack[-1] = Stack[-5]
0x5a2: Call2 0x5d1

0x5a3: Stack[-3] = Stack[-2]
0x5a4: Pop(2)
0x5a5: PushEmpty(bool, float, float, float)
0x5a6: Stack[-3] = Stack[-5]
0x5a7: Stack[-2] = (float) 250000.0
0x5a8: Stack[-1] = (float) 3240000.0
0x5a9: Call2 0x7c3

0x5aa: Pop(3)
0x5ab: IF (Stack[-1] == 0) GOTO 0x5b4; Pop(1)

0x5ac: PushEmpty(bool, object)
0x5ad: Stack[-1] = Stack[-5]
0x5ae: Push(-2, 1); TaskCall(0)
0x5af: Call2 0x0

0x5b0: Pop(-2, 1); TaskReturn
0x5b1: Stack[-6] = Stack[-2]
0x5b2: Pop(2)
0x5b3: Return(); Pop(2)

0x5b4: PushEmpty(bool, object)
0x5b5: Stack[-1] = Stack[-5]
0x5b6: Push(-2, 6); TaskCall(1)
0x5b7: Call2 0x7e

0x5b8: Pop(-2, 6); TaskReturn
0x5b9: Stack[-6] = Stack[-2]
0x5ba: Pop(2)
0x5bb: Return(); Pop(2)

0x5bc: PushEmpty()
0x5bd: Push((int) 2)
0x5be: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5bf: IF (Stack[-1] == 0) GOTO 0x5c3; Pop(1)

0x5c0: Stack[-2] = "fire"
0x5c1: Return(); Pop(0)

0x5c2: GOTO 0x5c8

0x5c3: Push((int) 1)
0x5c4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5c5: IF (Stack[-1] == 0) GOTO 0x5c8; Pop(1)

0x5c6: Stack[-2] = "bullet"
0x5c7: Return(); Pop(0)

0x5c8: Stack[-2] = "phys"
0x5c9: Return(); Pop(0)

0x5ca: PushEmpty(cvector, cvector, cvector, cvector)
0x5cb: @ GetPosition(Stack[-2])
0x5cc: Pop(0)
0x5cd: @@ GetPosition(Stack[-1])
0x5ce: Pop(0)
0x5cf: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x5d0: Return(); Pop(4)

0x5d1: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x5d2: @ GetPosition(Stack[-3])
0x5d3: Pop(0)
0x5d4: @@ GetPosition(Stack[-2])
0x5d5: Pop(0)
0x5d6: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x5d7: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x5d8: Return(); Pop(6)

0x5d9: PushEmpty(bool, bool)
0x5da: @ IsPlayerActor(Stack[-3], Stack[-1])
0x5db: Pop(0)
0x5dc: Stack[-4] = Stack[-1]
0x5dd: Return(); Pop(2)

0x5de: PushEmpty(bool, bool)
0x5df: Push("HasProperty")
0x5e0: Push((int) 2)
0x5e1: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x5e2: Pop(1); Push((bool) Stack[-1] == 0)
0x5e3: IF (Stack[-1] == 0) GOTO 0x5e6; Pop(1)

0x5e4: Stack[-5] = (bool) 0
0x5e5: Return(); Pop(2)

0x5e6: @@ HasProperty(Stack[-3], Stack[-1])
0x5e7: Pop(0)
0x5e8: Stack[-5] = Stack[-1]
0x5e9: Return(); Pop(2)

0x5ea: PushEmpty(float, float)
0x5eb: PushEmpty(bool, object, string)
0x5ec: Stack[-2] = Stack[-10]
0x5ed: Stack[-1] = Stack[-9]
0x5ee: Call2 0x5de

0x5ef: Pop(2)
0x5f0: Pop(1); Push((bool) Stack[-1] == 0)
0x5f1: IF (Stack[-1] == 0) GOTO 0x5f4; Pop(1)

0x5f2: Stack[-8] = (bool) 0
0x5f3: Return(); Pop(2)

0x5f4: @@ GetProperty(Stack[-6], Stack[-1])
0x5f5: Pop(0)
0x5f6: PushEmpty(float, float, float, float)
0x5f7: Stack[-3] = Stack[-5] + Stack[-9]; Pop(0);
0x5f8: Stack[-2] = Stack[-8]
0x5f9: Stack[-1] = Stack[-7]
0x5fa: Call2 0x7b8

0x5fb: Pop(3)
0x5fc: @@ SetProperty(Stack[-7], Stack[-1])
0x5fd: Pop(1)
0x5fe: Stack[-8] = (bool) 1
0x5ff: Return(); Pop(2)

0x600: PushEmpty(int, string, int, float, float, float, int, string, int, float, float, float)
0x601: PushEmpty(bool, object, string)
0x602: Stack[-2] = Stack[-18]
0x603: Stack[-1] = "health"
0x604: Call2 0x5de

0x605: Pop(2)
0x606: Pop(1); Push((bool) Stack[-1] == 0)
0x607: IF (Stack[-1] == 0) GOTO 0x60a; Pop(1)

0x608: Stack[-16] = (float) 0.0
0x609: Return(); Pop(12)

0x60a: PushEmpty(bool, object, string)
0x60b: Stack[-2] = Stack[-18]
0x60c: Stack[-1] = "armor"
0x60d: Call2 0x5de

0x60e: Pop(2)
0x60f: Pop(1); Push((bool) Stack[-1] == 0)
0x610: IF (Stack[-1] == 0) GOTO 0x613; Pop(1)

0x611: Stack[-6] = (int) 0
0x612: GOTO 0x616

0x613: Push("armor")
0x614: @@ GetProperty(Stack[-1], Stack[-7])
0x615: Pop(1)
0x616: Push("armor_")
0x617: PushEmpty(string, int)
0x618: Stack[-1] = Stack[-16]
0x619: Call2 0x5bc

0x61a: Pop(1)
0x61b: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x61c: PushEmpty(bool, object, string)
0x61d: Stack[-2] = Stack[-18]
0x61e: Stack[-1] = Stack[-8]
0x61f: Call2 0x5de

0x620: Pop(2)
0x621: Pop(1); Push((bool) Stack[-1] == 0)
0x622: IF (Stack[-1] == 0) GOTO 0x625; Pop(1)

0x623: Stack[-4] = (int) 0
0x624: GOTO 0x627

0x625: @@ GetProperty(Stack[-5], Stack[-4])
0x626: Pop(0)
0x627: PushEmpty(float, float, float)
0x628: Pop(0); Push(Stack[-9] + Stack[-7]);
0x629: Push((float)100.0)
0x62a: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0x62b: Stack[-1] = (int) 1
0x62c: Call2 0x799

0x62d: Stack[-6] = Stack[-3]
0x62e: Pop(3)
0x62f: Push("health")
0x630: @@ GetProperty(Stack[-1], Stack[-3])
0x631: Pop(1)
0x632: Push((int) 1)
0x633: Pop(1); Push(Stack[-1] - Stack[-4]);
0x634: Stack[-2] = Stack[-15] * Stack[-1]; Pop(1);
0x635: Push("health")
0x636: PushEmpty(float, float, float, float)
0x637: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0x638: Stack[-2] = (int) 0
0x639: Stack[-1] = (int) 1
0x63a: Call2 0x7b8

0x63b: Pop(3)
0x63c: @@ SetProperty(Stack[-2], Stack[-1])
0x63d: Pop(2)
0x63e: PushEmpty(bool, object)
0x63f: Stack[-1] = Stack[-17]
0x640: Call2 0x5d9

0x641: Pop(1)
0x642: IF (Stack[-1] == 0) GOTO 0x647; Pop(1)

0x643: PushEmpty(float)
0x644: Stack[-1] = -Stack[-2]; Pop(0);
0x645: Call2 0x7f3

0x646: Pop(1)
0x647: Stack[-16] = Stack[-1]
0x648: Return(); Pop(12)

0x649: PushEmpty(float, float)
0x64a: PushEmpty(bool, object, string)
0x64b: Stack[-2] = Stack[-6]
0x64c: Stack[-1] = "health"
0x64d: Call2 0x5de

0x64e: Pop(2)
0x64f: Pop(1); Push((bool) Stack[-1] == 0)
0x650: IF (Stack[-1] == 0) GOTO 0x653; Pop(1)

0x651: Stack[-4] = (bool) 0
0x652: Return(); Pop(2)

0x653: PushEmpty(bool)
0x654: Stack[-1] = (bool) 0
0x655: PushEmpty(bool, object)
0x656: Stack[-1] = Stack[-6]
0x657: Call2 0x5d9

0x658: Pop(1)
0x659: IF (Stack[-1] == 0) GOTO 0x65f; Pop(1)

0x65a: PushEmpty(bool)
0x65b: Call2 0x81b

0x65c: Pop(0)
0x65d: IF (Stack[-1] == 0) GOTO 0x65f; Pop(1)

0x65e: Stack[-1] = (bool) 1
0x65f: IF (Stack[-1] == 0) GOTO 0x662; Pop(1)

0x660: Stack[-4] = (bool) 0
0x661: Return(); Pop(2)

0x662: Push("health")
0x663: @@ GetProperty(Stack[-1], Stack[-2])
0x664: Pop(1)
0x665: Push((float)0.0)
0x666: Stack[-5] = Stack[-2] <= Stack[-1]; Pop(1);
0x667: Return(); Pop(2)

0x668: PushEmpty(bool, bool)
0x669: @@ IsDead(Stack[-1])
0x66a: Pop(0)
0x66b: Stack[-4] = Stack[-1]
0x66c: Return(); Pop(2)

0x66d: PushEmpty(object, object, object, object)
0x66e: Pop(0); Push((bool) Stack[-5] == 0)
0x66f: IF (Stack[-1] == 0) GOTO 0x672; Pop(1)

0x670: Stack[-6] = (bool) 0
0x671: Return(); Pop(4)

0x672: PushEmpty(bool)
0x673: Stack[-1] = (bool) 0
0x674: Push("IsDead")
0x675: Push((int) 1)
0x676: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x677: IF (Stack[-1] == 0) GOTO 0x67e; Pop(1)

0x678: PushEmpty(bool, object)
0x679: Stack[-1] = Stack[-8]
0x67a: Call2 0x668

0x67b: Pop(1)
0x67c: IF (Stack[-1] == 0) GOTO 0x67e; Pop(1)

0x67d: Stack[-1] = (bool) 1
0x67e: IF (Stack[-1] == 0) GOTO 0x681; Pop(1)

0x67f: Stack[-6] = (bool) 0
0x680: Return(); Pop(4)

0x681: @ GetScene(Stack[-2])
0x682: Pop(0)
0x683: Pop(0); Push((bool) Stack[-2] == 0)
0x684: IF (Stack[-1] == 0) GOTO 0x687; Pop(1)

0x685: Stack[-6] = (bool) 0
0x686: Return(); Pop(4)

0x687: @@ GetScene(Stack[-1])
0x688: Pop(0)
0x689: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x68a: IF (Stack[-1] == 0) GOTO 0x68d; Pop(1)

0x68b: Stack[-6] = (bool) 0
0x68c: Return(); Pop(4)

0x68d: Stack[-6] = (bool) 1
0x68e: Return(); Pop(4)

0x68f: Stack[-1] = 0
0x690: Stack[-2] = 0
0x691: PushEmpty(int, int)
0x692: PushEmpty(bool, object)
0x693: Stack[-1] = Stack[-5]
0x694: Call2 0x66d

0x695: Pop(1)
0x696: Pop(1); Push((bool) Stack[-1] == 0)
0x697: IF (Stack[-1] == 0) GOTO 0x69a; Pop(1)

0x698: Stack[-4] = (bool) 0
0x699: Return(); Pop(2)

0x69a: PushEmpty(bool, object, string)
0x69b: Stack[-2] = Stack[-6]
0x69c: Stack[-1] = "noaccess"
0x69d: Call2 0x5de

0x69e: Pop(2)
0x69f: Pop(1); Push((bool) Stack[-1] == 0)
0x6a0: IF (Stack[-1] == 0) GOTO 0x6a3; Pop(1)

0x6a1: Stack[-4] = (bool) 1
0x6a2: Return(); Pop(2)

0x6a3: Push("noaccess")
0x6a4: @@ GetProperty(Stack[-1], Stack[-2])
0x6a5: Pop(1)
0x6a6: Push((int) 0)
0x6a7: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x6a8: Return(); Pop(2)

0x6a9: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x6aa: @ GetPosition(Stack[-3])
0x6ab: Pop(0)
0x6ac: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x6ad: Push(CvectorIndex(Stack[-2], 0))
0x6ae: Push(CvectorIndex(Stack[-3], 2))
0x6af: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x6b0: Pop(2)
0x6b1: Stack[-8] = Stack[-1]
0x6b2: Return(); Pop(6)

0x6b3: PushEmpty(cvector, cvector)
0x6b4: @@ GetPosition(Stack[-1])
0x6b5: Pop(0)
0x6b6: PushEmpty(bool, cvector)
0x6b7: Stack[-1] = Stack[-3]
0x6b8: Call2 0x6a9

0x6b9: Stack[-6] = Stack[-2]
0x6ba: Pop(2)
0x6bb: Return(); Pop(2)

0x6bc: PushEmpty(bool, int, cvector, cvector, cvector, cvector, string, bool, int, cvector, cvector, cvector, cvector, string)
0x6bd: Pop(0); Push((bool) Stack[-15] == 0)
0x6be: IF (Stack[-1] == 0) GOTO 0x6c0; Pop(1)

0x6bf: Return(); Pop(14)

0x6c0: @ IsDead(Stack[-7])
0x6c1: Pop(0)
0x6c2: Push(Stack[-7])
0x6c3: IF (Stack[-1] == 0) GOTO 0x6c5; Pop(1)

0x6c4: Return(); Pop(14)

0x6c5: @ GetSecondaryAnimationType(Stack[-6])
0x6c6: Pop(0)
0x6c7: Push((int) 0)
0x6c8: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x6c9: IF (Stack[-1] == 0) GOTO 0x6cb; Pop(1)

0x6ca: Return(); Pop(14)

0x6cb: @@ GetPosition(Stack[-5])
0x6cc: Pop(0)
0x6cd: @ GetPosition(Stack[-4])
0x6ce: Pop(0)
0x6cf: @ GetDirection(Stack[-3])
0x6d0: Pop(0)
0x6d1: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0x6d2: Push(CvectorIndex(Stack[-2], 0))
0x6d3: Push(CvectorIndex(Stack[-4], 0))
0x6d4: Pop(2); Push(Stack[-2] * Stack[-1]);
0x6d5: Push(CvectorIndex(Stack[-3], 2))
0x6d6: Push(CvectorIndex(Stack[-5], 2))
0x6d7: Pop(2); Push(Stack[-2] * Stack[-1]);
0x6d8: Pop(2); Push(Stack[-2] + Stack[-1]);
0x6d9: Push((int) 0)
0x6da: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x6db: IF (Stack[-1] == 0) GOTO 0x6de; Pop(1)

0x6dc: Stack[-1] = "fhit"
0x6dd: GOTO 0x6df

0x6de: Stack[-1] = "bhit"
0x6df: Push("hit_react")
0x6e0: Push("1")
0x6e1: Pop(1); Push(Stack[-3] + Stack[-1]);
0x6e2: Push("2")
0x6e3: Pop(1); Push(Stack[-4] + Stack[-1]);
0x6e4: Push((int) -10)
0x6e5: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x6e6: Pop(4)
0x6e7: Return(); Pop(14)

0x6e8: PushEmpty(cvector, object, int, bool, cvector, cvector, int, int, cvector, cvector, object, int, bool, cvector, cvector, int, int, cvector)
0x6e9: PushEmpty(bool)
0x6ea: Stack[-1] = (bool) 0
0x6eb: PushEmpty(bool)
0x6ec: Stack[-1] = (bool) 0
0x6ed: Push(Stack[-23])
0x6ee: IF (Stack[-1] == 0) GOTO 0x6f3; Pop(1)

0x6ef: Push((int) 4)
0x6f0: Pop(1); Push((bool) Stack[-23] != Stack[-1])
0x6f1: IF (Stack[-1] == 0) GOTO 0x6f3; Pop(1)

0x6f2: Stack[-1] = (bool) 1
0x6f3: IF (Stack[-1] == 0) GOTO 0x6f8; Pop(1)

0x6f4: Push((int) 5)
0x6f5: Pop(1); Push((bool) Stack[-22] != Stack[-1])
0x6f6: IF (Stack[-1] == 0) GOTO 0x6f8; Pop(1)

0x6f7: Stack[-1] = (bool) 1
0x6f8: IF (Stack[-1] == 0) GOTO 0x727; Pop(1)

0x6f9: PushEmpty(cvector, cvector)
0x6fa: PushEmpty(cvector, object)
0x6fb: Stack[-1] = Stack[-25]
0x6fc: Call2 0x5ca

0x6fd: Stack[-3] = Stack[-2]
0x6fe: Pop(2)
0x6ff: Call2 0x78f

0x700: Stack[-11] = Stack[-2]
0x701: Pop(2)
0x702: @ CreateVectorVector(Stack[-8])
0x703: Pop(0)
0x704: Stack[-7] = (int) 1
0x705: Push("hit")
0x706: Pop(1); Push(Stack[-1] + Stack[-8]);
0x707: @ GetGeometryLocator(Stack[-1], Stack[-7], Stack[-6], Stack[-5])
0x708: Pop(1)
0x709: Pop(0); Push((bool) Stack[-6] == 0)
0x70a: IF (Stack[-1] == 0) GOTO 0x70c; Pop(1)

0x70b: GOTO 0x715

0x70c: Pop(0); Push(Stack[-4] | Stack[-9]);
0x70d: Push((float)0.70711)
0x70e: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x70f: IF (Stack[-1] == 0) GOTO 0x712; Pop(1)

0x710: @@ add(Stack[-5])
0x711: Pop(0)
0x712: Push((int) 1)
0x713: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x714: GOTO 0x705

0x715: @@ size(Stack[-3])
0x716: Pop(0)
0x717: Push(Stack[-3])
0x718: IF (Stack[-1] == 0) GOTO 0x726; Pop(1)

0x719: @ irand(Stack[-2], Stack[-3])
0x71a: Pop(0)
0x71b: @@ get(Stack[-1], Stack[-2])
0x71c: Pop(0)
0x71d: PushEmpty(object, int, float, cvector, cvector)
0x71e: Stack[-5] = Stack[-26]
0x71f: Stack[-4] = Stack[-25]
0x720: Stack[-3] = Stack[-24]
0x721: Stack[-2] = Stack[-6]
0x722: Stack[-1] = -Stack[-14]; Pop(0);
0x723: Call2 0x72c

0x724: Pop(5)
0x725: Return(); Pop(18)

0x726: Stack[-8] = 0
0x727: PushEmpty(object)
0x728: Stack[-1] = Stack[-22]
0x729: Call2 0x6bc

0x72a: Pop(1)
0x72b: Return(); Pop(18)

0x72c: PushEmpty(object, object, object, object)
0x72d: @ GetScene(Stack[-2])
0x72e: Pop(0)
0x72f: Push("scripted")
0x730: Push("blood_dir.xml")
0x731: @ AddActorByType(Stack[-3], Stack[-2], Stack[-4], Stack[-8], Stack[-7], Stack[-1])
0x732: Pop(2)
0x733: PushEmpty(object)
0x734: Stack[-1] = Stack[-10]
0x735: Call2 0x6bc

0x736: Pop(1)
0x737: Return(); Pop(4)

0x738: Stack[-1] = 0
0x739: Stack[-2] = 0
0x73a: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x73b: @@ GetPosition(Stack[-3])
0x73c: Pop(0)
0x73d: @ GetPosition(Stack[-2])
0x73e: Pop(0)
0x73f: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0x740: Push(CvectorIndex(Stack[-1], 0))
0x741: Push(CvectorIndex(Stack[-2], 2))
0x742: @ RotateAsync(Stack[-2], Stack[-1])
0x743: Pop(2)
0x744: Return(); Pop(6)

0x745: PushEmpty(bool, bool)
0x746: @ IsLoaded(Stack[-1])
0x747: Pop(0)
0x748: Stack[-3] = Stack[-1]
0x749: Return(); Pop(2)

0x74a: PushEmpty(float, cvector, float, cvector)
0x74b: @@ GetEyesHeight(Stack[-2])
0x74c: Pop(0)
0x74d: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x74e: Push(CvectorIndex(Stack[-1], 1))
0x74f: Stack[-1] = Stack[-3]
0x750: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x751: Push("head")
0x752: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x753: Pop(1)
0x754: Return(); Pop(4)

0x755: PushEmpty(bool, bool)
0x756: PushEmpty(bool, int, int)
0x757: Stack[-2] = Stack[-7]
0x758: Stack[-1] = Stack[-6]
0x759: Call2 0x7cb

0x75a: Pop(2)
0x75b: IF (Stack[-1] == 0) GOTO 0x75f; Pop(1)

0x75c: Push((int) 0)
0x75d: @ AddItem(Stack[-2], Stack[-6], Stack[-1])
0x75e: Pop(1)
0x75f: Return(); Pop(2)

0x760: PushEmpty(bool, int, bool, int, bool, float, cvector, cvector, bool, int, bool, int, bool, float, cvector, cvector)
0x761: @ IsExisting3DSound(Stack[-8], Stack[-17])
0x762: Pop(0)
0x763: Pop(0); Push((bool) Stack[-8] == 0)
0x764: IF (Stack[-1] == 0) GOTO 0x779; Pop(1)

0x765: Stack[-7] = (int) 0
0x766: Push((int) 1)
0x767: Pop(1); Push(Stack[-8] + Stack[-1]);
0x768: Pop(1); Push(Stack[-18] + Stack[-1]);
0x769: @ IsExisting3DSound(Stack[-7], Stack[-1])
0x76a: Pop(1)
0x76b: Pop(0); Push((bool) Stack[-6] == 0)
0x76c: IF (Stack[-1] == 0) GOTO 0x76e; Pop(1)

0x76d: GOTO 0x771

0x76e: Push((int) 1)
0x76f: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x770: GOTO 0x766

0x771: Pop(0); Push((bool) Stack[-7] == 0)
0x772: IF (Stack[-1] == 0) GOTO 0x774; Pop(1)

0x773: Return(); Pop(16)

0x774: @ irand(Stack[-5], Stack[-7])
0x775: Pop(0)
0x776: Push((int) 1)
0x777: Pop(1); Push(Stack[-6] + Stack[-1]);
0x778: Stack[-18] = Stack[-18] + Stack[-1]; Pop(1);
0x779: @ Is3DSoundLoaded(Stack[-4], Stack[-17])
0x77a: Pop(0)
0x77b: Push(Stack[-4])
0x77c: IF (Stack[-1] == 0) GOTO 0x788; Pop(1)

0x77d: @ GetEyesHeight(Stack[-3])
0x77e: Pop(0)
0x77f: @ GetDirection(Stack[-2])
0x780: Pop(0)
0x781: Push((int) 50)
0x782: Stack[-2] = Stack[-3] * Stack[-1]; Pop(1);
0x783: Push(CvectorIndex(Stack[-1], 1))
0x784: Stack[-1] = Stack[-1] + Stack[-4]; Pop(0);
0x785: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x786: @ PlayGlobalSound(Stack[-17], Stack[-1])
0x787: Pop(0)
0x788: Return(); Pop(16)

0x789: PushEmpty(object, object)
0x78a: @ self(Stack[-1])
0x78b: Pop(0)
0x78c: Stack[-3] = Stack[-1]
0x78d: Return(); Pop(2)

0x78e: Stack[-1] = 0
0x78f: PushEmpty(float, float)
0x790: Pop(0); Push(Stack[-3] | Stack[-3]);
0x791: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x792: Push((float)0.0)
0x793: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x794: IF (Stack[-1] == 0) GOTO 0x797; Pop(1)

0x795: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x796: Return(); Pop(2)

0x797: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x798: Return(); Pop(2)

0x799: PushEmpty()
0x79a: Pop(0); Push((bool) Stack[-2] < Stack[-1])
0x79b: IF (Stack[-1] == 0) GOTO 0x79e; Pop(1)

0x79c: Stack[-3] = Stack[-2]
0x79d: GOTO 0x79f

0x79e: Stack[-3] = Stack[-1]
0x79f: Return(); Pop(0)

0x7a0: PushEmpty()
0x7a1: Pop(0); Push(Stack[-2] * Stack[-2]);
0x7a2: Push((int) 4)
0x7a3: Pop(1); Push(Stack[-1] * Stack[-5]);
0x7a4: Pop(1); Push(Stack[-1] * Stack[-3]);
0x7a5: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x7a6: Return(); Pop(0)

0x7a7: PushEmpty(float, float)
0x7a8: Pop(0); Push(( -Stack[-5])
0x7a9: Pop(1); Push(Stack[-1] - Stack[-4]);
0x7aa: Push((int) 2)
0x7ab: Pop(1); Push(Stack[-1] * Stack[-8]);
0x7ac: Stack[-3] = Stack[-2] / Stack[-1]; Pop(2);
0x7ad: Push((int) 0)
0x7ae: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x7af: IF (Stack[-1] == 0) GOTO 0x7b2; Pop(1)

0x7b0: Stack[-7] = Stack[-1]
0x7b1: Return(); Pop(2)

0x7b2: Pop(0); Push(( -Stack[-5])
0x7b3: Pop(1); Push(Stack[-1] + Stack[-4]);
0x7b4: Push((int) 2)
0x7b5: Pop(1); Push(Stack[-1] * Stack[-8]);
0x7b6: Stack[-9] = Stack[-2] / Stack[-1]; Pop(2);
0x7b7: Return(); Pop(2)

0x7b8: PushEmpty()
0x7b9: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x7ba: IF (Stack[-1] == 0) GOTO 0x7bd; Pop(1)

0x7bb: Stack[-4] = Stack[-2]
0x7bc: Return(); Pop(0)

0x7bd: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x7be: IF (Stack[-1] == 0) GOTO 0x7c1; Pop(1)

0x7bf: Stack[-4] = Stack[-1]
0x7c0: Return(); Pop(0)

0x7c1: Stack[-4] = Stack[-3]
0x7c2: Return(); Pop(0)

0x7c3: PushEmpty()
0x7c4: Stack[-4] = (bool) 0
0x7c5: Pop(0); Push((bool) Stack[-3] >= Stack[-2])
0x7c6: IF (Stack[-1] == 0) GOTO 0x7ca; Pop(1)

0x7c7: Pop(0); Push((bool) Stack[-3] <= Stack[-1])
0x7c8: IF (Stack[-1] == 0) GOTO 0x7ca; Pop(1)

0x7c9: Stack[-4] = (bool) 1
0x7ca: Return(); Pop(0)

0x7cb: PushEmpty(int, int)
0x7cc: @ irand(Stack[-1], Stack[-3])
0x7cd: Pop(0)
0x7ce: Stack[-5] = Stack[-1] < Stack[-4]; Pop(0);
0x7cf: Return(); Pop(2)

0x7d0: PushEmpty()
0x7d1: Pop(0); Push((bool) Stack[-2] == 0)
0x7d2: IF (Stack[-1] == 0) GOTO 0x7d5; Pop(1)

0x7d3: Stack[-3] = (bool) 0
0x7d4: Return(); Pop(0)

0x7d5: Push((int) 0)
0x7d6: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x7d7: IF (Stack[-1] == 0) GOTO 0x7dc; Pop(1)

0x7d8: Push((int) 8)
0x7d9: @ SendWorldWndMessage(Stack[-1])
0x7da: Pop(1)
0x7db: GOTO 0x7e5

0x7dc: Push((int) 0)
0x7dd: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x7de: IF (Stack[-1] == 0) GOTO 0x7e3; Pop(1)

0x7df: Push((int) 9)
0x7e0: @ SendWorldWndMessage(Stack[-1])
0x7e1: Pop(1)
0x7e2: GOTO 0x7e5

0x7e3: Stack[-3] = (bool) 0
0x7e4: Return(); Pop(0)

0x7e5: PushEmpty(float)
0x7e6: Stack[-1] = Stack[-2]
0x7e7: Call2 0x7fd

0x7e8: Pop(1)
0x7e9: PushEmpty(bool, object, string, float, float, float)
0x7ea: Stack[-5] = Stack[-8]
0x7eb: Stack[-4] = "reputation"
0x7ec: Stack[-3] = Stack[-7]
0x7ed: Stack[-2] = (int) 0
0x7ee: Stack[-1] = (int) 1
0x7ef: Call2 0x5ea

0x7f0: Pop(6)
0x7f1: Stack[-3] = (bool) 1
0x7f2: Return(); Pop(0)

0x7f3: PushEmpty(object, object)
0x7f4: @ CreateFloatVector(Stack[-1])
0x7f5: Pop(0)
0x7f6: @@ add(Stack[-3])
0x7f7: Pop(0)
0x7f8: Push((int) 15)
0x7f9: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x7fa: Pop(1)
0x7fb: Return(); Pop(2)

0x7fc: Stack[-1] = 0
0x7fd: PushEmpty(object, object)
0x7fe: @ CreateFloatVector(Stack[-1])
0x7ff: Pop(0)
0x800: @@ add(Stack[-3])
0x801: Pop(0)
0x802: Push((int) 16)
0x803: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x804: Pop(1)
0x805: Return(); Pop(2)

0x806: Stack[-1] = 0
0x807: PushEmpty(bool, bool)
0x808: @ IsPlayerActor(Stack[-3], Stack[-1])
0x809: Pop(0)
0x80a: Push(Stack[-1])
0x80b: IF (Stack[-1] == 0) GOTO 0x80f; Pop(1)

0x80c: Push("attack")
0x80d: @ PlayGlobalMusic(Stack[-1])
0x80e: Pop(1)
0x80f: Return(); Pop(2)

0x810: PushEmpty(object, object)
0x811: @ GetScene(Stack[-1])
0x812: Pop(0)
0x813: Push("battle")
0x814: PushEmpty(object)
0x815: Call2 0x789

0x816: Pop(0)
0x817: @ BroadcastMessage(Stack[-2], Stack[-1], Stack[-3])
0x818: Pop(2)
0x819: Return(); Pop(2)

0x81a: Stack[-1] = 0
0x81b: PushEmpty(bool, bool)
0x81c: Push("god_mode")
0x81d: @ GetVariable(Stack[-1], Stack[-2])
0x81e: Pop(1)
0x81f: Stack[-3] = Stack[-1]
0x820: Return(); Pop(2)

0x821: PushEmpty(string, string)
0x822: Stack[-1] = "idle"
0x823: Push(Stack[-3])
0x824: IF (Stack[-1] == 0) GOTO 0x826; Pop(1)

0x825: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x826: Stack[-4] = Stack[-1]
0x827: Return(); Pop(2)

0x828: PushEmpty(int, bool, int, bool)
0x829: Stack[-2] = (int) 0
0x82a: Push("all")
0x82b: PushEmpty(string, int)
0x82c: Stack[-1] = Stack[-5]
0x82d: Call2 0x821

0x82e: Pop(1)
0x82f: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x830: Pop(2)
0x831: Pop(0); Push((bool) Stack[-1] == 0)
0x832: IF (Stack[-1] == 0) GOTO 0x834; Pop(1)

0x833: GOTO 0x837

0x834: Push((int) 1)
0x835: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x836: GOTO 0x82a

0x837: Stack[-5] = Stack[-2]
0x838: Return(); Pop(4)

0x839: PushEmpty(cvector, float, float, float, float, float, cvector, float, float, float, float, float)
0x83a: Stack[-6] = Stack[-14] - Stack[-15]; Pop(0);
0x83b: Stack[-5] = (int) 250000
0x83c: Push(CvectorIndex(Stack[-6], 1))
0x83d: Push((int) 1000)
0x83e: Pop(2); Push(Stack[-2] * Stack[-1]);
0x83f: Pop(0); Push(Stack[-14] * Stack[-14]);
0x840: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x841: Stack[-3] = Stack[-6] | Stack[-6]; Pop(0);
0x842: PushEmpty(float, float, float, float)
0x843: Stack[-3] = Stack[-9]
0x844: Stack[-2] = Stack[-8]
0x845: Stack[-1] = Stack[-7]
0x846: Call2 0x7a0

0x847: Stack[-6] = Stack[-4]
0x848: Pop(4)
0x849: Push((int) 0)
0x84a: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x84b: IF (Stack[-1] == 0) GOTO 0x84e; Pop(1)

0x84c: Stack[-1] = (int) 1
0x84d: GOTO 0x856

0x84e: PushEmpty(float, float, float, float, float)
0x84f: Stack[-4] = Stack[-10]
0x850: Stack[-3] = Stack[-9]
0x851: Stack[-2] = Stack[-8]
0x852: Stack[-1] = Sqrt(Stack[-7]); Pop(0);
0x853: Call2 0x7a7

0x854: Pop(4)
0x855: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x856: Push(CVector(0.0, 500.0, 0.0))
0x857: Pop(1); Push(Stack[-1] * Stack[-2]);
0x858: Pop(1); Push(Stack[-1] * Stack[-2]);
0x859: Pop(1); Push(Stack[-7] + Stack[-1]);
0x85a: Stack[-17] = Stack[-1] / Stack[-2]; Pop(1);
0x85b: Return(); Pop(12)

0x85c: PushEmpty(int, int)
0x85d: Push("branch")
0x85e: @ GetVariable(Stack[-1], Stack[-2])
0x85f: Pop(1)
0x860: Stack[-3] = Stack[-1]
0x861: Return(); Pop(2)

0x862: PushEmpty()
0x863: PushEmpty(int)
0x864: Call2 0x85c

0x865: Pop(0)
0x866: Push((int) 1)
0x867: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x868: IF (Stack[-1] == 0) GOTO 0x86c; Pop(1)

0x869: @ WorkWithCorpse(Stack[-1])
0x86a: Pop(0)
0x86b: GOTO 0x86e

0x86c: @ Barter(Stack[-1])
0x86d: Pop(0)
0x86e: Return(); Pop(0)

0x86f: PushEmpty(int, bool, int, bool)
0x870: Pop(0); Push((bool) Stack[-6] > Stack[-5])
0x871: IF (Stack[-1] == 0) GOTO 0x876; Pop(1)

0x872: Push("GenerateMoney: iMin > iMax")
0x873: @ Trace(Stack[-1])
0x874: Pop(1)
0x875: Return(); Pop(4)

0x876: Stack[-2] = (int) 0
0x877: Pop(0); Push((bool) Stack[-6] != Stack[-5])
0x878: IF (Stack[-1] == 0) GOTO 0x87d; Pop(1)

0x879: Pop(0); Push(Stack[-5] - Stack[-6]);
0x87a: @ irand(Stack[-3], Stack[-1])
0x87b: Pop(1)
0x87c: GOTO 0x881

0x87d: Push((int) 0)
0x87e: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x87f: IF (Stack[-1] == 0) GOTO 0x881; Pop(1)

0x880: Return(); Pop(4)

0x881: Stack[-2] = Stack[-2] + Stack[-6]; Pop(0);
0x882: Push((int) 0)
0x883: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x884: IF (Stack[-1] == 0) GOTO 0x886; Pop(1)

0x885: Return(); Pop(4)

0x886: PushEmpty(int, string)
0x887: Stack[-1] = "Money"
0x888: Call2 0x8d5

0x889: Pop(1)
0x88a: Push((int) 0)
0x88b: @ AddItem(Stack[-3], Stack[-2], Stack[-1], Stack[-4])
0x88c: Pop(2)
0x88d: Return(); Pop(4)

0x88e: PushEmpty(object, int, bool, object, int, bool)
0x88f: @ CreateInvItem(Stack[-3])
0x890: Pop(0)
0x891: @@ SetItemName(Stack[-7])
0x892: Pop(0)
0x893: Push("Organ")
0x894: Push((int) 1)
0x895: @@ SetProperty(Stack[-2], Stack[-1])
0x896: Pop(2)
0x897: @@ GetItemID(Stack[-2])
0x898: Pop(0)
0x899: Push((int) 0)
0x89a: Push((int) 1)
0x89b: @ AddItem(Stack[-3], Stack[-5], Stack[-2], Stack[-1])
0x89c: Pop(2)
0x89d: Return(); Pop(6)

0x89e: Stack[-3] = 0
0x89f: PushEmpty(int)
0x8a0: Call2 0x85c

0x8a1: Pop(0)
0x8a2: Push((int) 1)
0x8a3: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x8a4: IF (Stack[-1] == 0) GOTO 0x8a6; Pop(1)

0x8a5: Return(); Pop(0)

0x8a6: PushEmpty(string)
0x8a7: Stack[-1] = "liver"
0x8a8: Call2 0x88e

0x8a9: Pop(1)
0x8aa: PushEmpty(string)
0x8ab: Stack[-1] = "kidney"
0x8ac: Call2 0x88e

0x8ad: Pop(1)
0x8ae: PushEmpty(string)
0x8af: Stack[-1] = "heart"
0x8b0: Call2 0x88e

0x8b1: Pop(1)
0x8b2: PushEmpty(string)
0x8b3: Stack[-1] = "blood"
0x8b4: Call2 0x88e

0x8b5: Pop(1)
0x8b6: Return(); Pop(0)

0x8b7: PushEmpty(int, bool, int, bool)
0x8b8: Push((int) 0)
0x8b9: @ ClearSubContainer(Stack[-1])
0x8ba: Pop(1)
0x8bb: PushEmpty(int, int)
0x8bc: Stack[-2] = (int) 300
0x8bd: Stack[-1] = (int) 750
0x8be: Call2 0x86f

0x8bf: Pop(2)
0x8c0: PushEmpty(string, int, int)
0x8c1: Stack[-3] = "Knife"
0x8c2: Stack[-2] = (int) 1
0x8c3: Stack[-1] = (int) 8
0x8c4: Call2 0x755

0x8c5: Pop(3)
0x8c6: PushEmpty(string, int, int)
0x8c7: Stack[-3] = "lockpick"
0x8c8: Stack[-2] = (int) 1
0x8c9: Stack[-1] = (int) 6
0x8ca: Call2 0x755

0x8cb: Pop(3)
0x8cc: PushEmpty(int, string)
0x8cd: Stack[-1] = "grabitel_mark"
0x8ce: Call2 0x8d5

0x8cf: Pop(1)
0x8d0: Push((int) 0)
0x8d1: Push((int) 1)
0x8d2: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x8d3: Pop(3)
0x8d4: Return(); Pop(4)

0x8d5: PushEmpty(int, int)
0x8d6: @ GetInvItemByName(Stack[-1], Stack[-3])
0x8d7: Pop(0)
0x8d8: Stack[-4] = Stack[-1]
0x8d9: Return(); Pop(2)

0x8da: PushEmpty(object, object)
0x8db: @ GetScene(Stack[-1])
0x8dc: Pop(0)
0x8dd: PushEmpty(object)
0x8de: Call2 0x789

0x8df: Pop(0)
0x8e0: @@ RemoveStationaryActor(Stack[-1])
0x8e1: Pop(1)
0x8e2: PushEmpty(bool, object)
0x8e3: Stack[-1] = Stack[-5]
0x8e4: Call2 0x5d9

0x8e5: Pop(1)
0x8e6: IF (Stack[-1] == 0) GOTO 0x8ec; Pop(1)

0x8e7: PushEmpty(bool, object, float)
0x8e8: Stack[-2] = Stack[-6]
0x8e9: Stack[-1] = (float) 0.02
0x8ea: Call2 0x7d0

0x8eb: Pop(3)
0x8ec: PushEmpty(object)
0x8ed: Stack[-1] = Stack[-4]
0x8ee: Push(-1, 0); TaskCall(4)
0x8ef: Call2 0x4f7

0x8f0: Pop(-1, 0); TaskReturn
0x8f1: Pop(1)
0x8f2: Return(); Pop(2)

0x8f3: Stack[-1] = 0
0x8f4: PushEmpty()
0x8f5: PushEmpty(object, int, float)
0x8f6: Stack[-3] = Stack[-7]
0x8f7: Stack[-2] = Stack[-6]
0x8f8: Stack[-1] = Stack[-5]
0x8f9: Call2 0x6e8

0x8fa: Pop(3)
0x8fb: Return(); Pop(0)

0x8fc: PushEmpty()
0x8fd: PushEmpty(object, int, float, cvector, cvector)
0x8fe: Stack[-5] = Stack[-11]
0x8ff: Stack[-4] = Stack[-10]
0x900: Stack[-3] = Stack[-9]
0x901: Stack[-2] = Stack[-7]
0x902: Stack[-1] = Stack[-6]
0x903: Call2 0x72c

0x904: Pop(5)
0x905: Return(); Pop(0)

0x906: PushEmpty(float, float)
0x907: Push("health")
0x908: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x909: IF (Stack[-1] == 0) GOTO 0x912; Pop(1)

0x90a: Push("health")
0x90b: @ GetProperty(Stack[-1], Stack[-2])
0x90c: Pop(1)
0x90d: Push((int) 0)
0x90e: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x90f: IF (Stack[-1] == 0) GOTO 0x912; Pop(1)

0x910: @ SignalDeath(Stack[-4])
0x911: Pop(0)
0x912: Return(); Pop(2)

0x913: PushEmpty()
0x914: PushEmpty(object)
0x915: Stack[-1] = Stack[-2]
0x916: Call2 0x8da

0x917: Pop(1)
0x918: Return(); Pop(0)

0x919: PushEmpty()
0x91a: PushEmpty(bool, object)
0x91b: Stack[-1] = Stack[-3]
0x91c: Call2 0x691

0x91d: Stack[-4] = Stack[-2]
0x91e: Pop(2)
0x91f: Return(); Pop(0)

0x920: PushEmpty()
0x921: PushEmpty(object)
0x922: Stack[-1] = Stack[-2]
0x923: Call2 0x92b

0x924: Pop(1)
0x925: Return(); Pop(0)

0x926: PushEmpty()
0x927: Return(); Pop(0)

0x928: PushEmpty()
0x929: Stack[-3] = (bool) 0
0x92a: Return(); Pop(0)

0x92b: PushEmpty(object, object)
0x92c: @ GetScene(Stack[-1])
0x92d: Pop(0)
0x92e: PushEmpty(object)
0x92f: Call2 0x789

0x930: Pop(0)
0x931: @@ RemoveStationaryActor(Stack[-1])
0x932: Pop(1)
0x933: PushEmpty(bool, object)
0x934: Stack[-1] = Stack[-5]
0x935: Push(-2, 0); TaskCall(5)
0x936: Call2 0x597

0x937: Pop(-2, 0); TaskReturn
0x938: Pop(2)
0x939: Return(); Pop(2)

0x93a: Stack[-1] = 0
