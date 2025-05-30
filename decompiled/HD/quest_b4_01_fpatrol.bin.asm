GlobalVarCount = 0

Strings:
	path
	attack
	quest_b4_01
	patrol_attack
	GetLocator
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
	patrol_dead
	revolver_ammo
	meradorm
	morfin
	alpha_pills
	beta_pills

Import:
	Hold (0 args)
	StopGroup0 (0 args)
	sync (0 args)
	IsPlayerActor (2 args)
	GetScene (1 args)
	MovePoint (3 args)
	WaitForAnimEnd (1 args)
	Stop (0 args)
	FindActor (2 args)
	Sleep (1 args)
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
	HasAnimation (3 args)
	IsExisting3DSound (2 args)
	GetAnimationOffset (3 args)
	GetVictim (2 args)
	ReportAttack (1 args)
	ReportHit (4 args)
	irand (2 args)
	SetAttackState (1 args)
	IsAnimationPlaying (1 args)
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
	GetProperty (2 args)
	Rotate (3 args)
	IsDead (1 args)
	GetSecondaryAnimationType (1 args)
	FadeSecondaryAnimation (4 args)
	CreateVectorVector (1 args)
	GetGeometryLocator (4 args)
	AddActorByType (6 args)
	RotateAsync (2 args)
	IsLoaded (1 args)
	AddItem (4 args)
	Is3DSoundLoaded (2 args)
	GetEyesHeight (1 args)
	PlayGlobalSound (2 args)
	self (1 args)
	CreateFloatVector (1 args)
	RumblePlay (2 args)
	SendWorldWndMessage (2 args)
	Trigger (2 args)
	BroadcastMessage (3 args)
	GetVariable (2 args)
	WorkWithCorpse (1 args)
	Barter (1 args)
	CreateInvItem (1 args)
	RemoveActor (1 args)
	SignalDeath (1 args)

RunOp = 0xd
RunTask = 1

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_5 Op = 0x8 Vars = ()
	GTASK_1 Vars = (int, bool) Params = 0
		EVENT_26 Op = 0x21 Vars = (string)
		EVENT_17 Op = 0x2e Vars = (object)
	GTASK_2 Vars = (object, int, int, bool, float, int) Params = 0
	GTASK_3 Vars = (bool, object, bool) Params = 6
		EVENT_7 Op = 0x380 Vars = (int)
		EVENT_1 Op = 0x39b Vars = (object)
		EVENT_2 Op = 0x3aa Vars = (object)
		EVENT_10 Op = 0x430 Vars = (object)
		EVENT_41 Op = 0x43b Vars = (object)
	GTASK_4  Params = 1
		EVENT_0 Op = 0x45c Vars = (object)
		EVENT_22 Op = 0x4db Vars = (object, int, float, float)
		EVENT_16 Op = 0x4dd Vars = (object, string)
		EVENT_41 Op = 0x4df Vars = (object)

Events:
EVENT_6 Op = 0x705 Vars = ()
EVENT_22 Op = 0x73a Vars = (object, int, float, float)
EVENT_43 Op = 0x742 Vars = (object, int, float, float, cvector, cvector)
EVENT_16 Op = 0x74c Vars = (object, string)
EVENT_41 Op = 0x759 Vars = (object)

0x0: @ Hold()
0x1: Pop(0)
0x2: PushEmpty(bool)
0x3: Call2 0x629

0x4: Pop(0)
0x5: Pop(1); Push((bool) Stack[-1] == 0)
0x6: IF (Stack[-1] == 0) GOTO 0x0; Pop(1)

0x7: Return(); Pop(0)

0x8: @ StopGroup0()
0x9: Pop(0)
0xa: @ sync()
0xb: Pop(0)
0xc: Return(); Pop(0)

0xd: PushEmpty(bool)
0xe: Call2 0x629

0xf: Pop(0)
0x10: Pop(1); Push((bool) Stack[-1] == 0)
0x11: IF (Stack[-1] == 0) GOTO 0x17; Pop(1)

0x12: PushEmpty()
0x13: Push(-0, 0); TaskCall(0)
0x14: Call2 0x0

0x15: Pop(-0, 0); TaskReturn
0x16: Pop(0)
0x17: PushEmpty(bool, string, int)
0x18: PushEmpty(string, string)
0x19: Stack[-1] = "path"
0x1a: Call2 0x507

0x1b: Stack[-4] = Stack[-2]
0x1c: Pop(2)
0x1d: Stack[-1] = (int) 1
0x1e: Call2 0x39

0x1f: Pop(3)
0x20: Return(); Pop(0)

0x21: PushEmpty()
0x22: Push("attack")
0x23: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x24: IF (Stack[-1] == 0) GOTO 0x2d; Pop(1)

0x25: PushEmpty()
0x26: Call2 0x9a

0x27: Pop(0)
0x28: PushEmpty()
0x29: Push(-0, 6); TaskCall(2)
0x2a: Call2 0xa0

0x2b: Pop(-0, 6); TaskReturn
0x2c: Pop(0)
0x2d: Return(); Pop(0)

0x2e: PushEmpty(bool, bool)
0x2f: @ IsPlayerActor(Stack[-3], Stack[-1])
0x30: Pop(0)
0x31: Push(Stack[-1])
0x32: IF (Stack[-1] == 0) GOTO 0x38; Pop(1)

0x33: PushEmpty(bool, string, string)
0x34: Stack[-2] = "quest_b4_01"
0x35: Stack[-1] = "patrol_attack"
0x36: Call2 0x6a9

0x37: Pop(3)
0x38: Return(); Pop(2)

0x39: PushEmpty(object, bool, bool, cvector, cvector, bool, bool, cvector, cvector, bool, object, bool, bool, cvector, cvector, bool, bool, cvector, cvector, bool)
0x3a: @ GetScene(Stack[-10])
0x3b: Pop(0)
0x3c: Stack[0 + Tasks[-1].StackPointer] = (int)0
0x3d: Push((int) 1)
0x3e: Pop(1); Push(Stack[0 + StackPtr] + Stack[-1]);
0x3f: Pop(1); Push(Stack[-23] + Stack[-1]);
0x40: @@ GetLocator(Stack[-1], Stack[-10])
0x41: Pop(1)
0x42: Pop(0); Push((bool) Stack[-9] == 0)
0x43: IF (Stack[-1] == 0) GOTO 0x45; Pop(1)

0x44: GOTO 0x48

0x45: Push((int) 1)
0x46: Stack[0 + Tasks[-1].StackPointer] = Stack[0 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x47: GOTO 0x3d

0x48: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x49: IF (Stack[-1] == 0) GOTO 0x4c; Pop(1)

0x4a: Stack[-23] = (bool) 0
0x4b: Return(); Pop(20)

0x4c: Pop(0); Push((bool) Stack[-21] < Stack[0 + Tasks[-1].StackPointer])
0x4d: IF (Stack[-1] == 0) GOTO 0x6f; Pop(1)

0x4e: Push((int) 1)
0x4f: Pop(1); Push(Stack[-22] + Stack[-1]);
0x50: Pop(1); Push(Stack[-23] + Stack[-1]);
0x51: @@ GetLocator(Stack[-1], Stack[-9], Stack[-8], Stack[-7])
0x52: Pop(1)
0x53: PushEmpty(bool, cvector)
0x54: Stack[-1] = Stack[-9]
0x55: Call2 0x596

0x56: Pop(1)
0x57: IF (Stack[-1] == 0) GOTO 0x6a; Pop(1)

0x58: Push((int) 0)
0x59: @ MovePoint(Stack[-8], Stack[-1], Stack[-6])
0x5a: Pop(1)
0x5b: Push(Stack[-5])
0x5c: IF (Stack[-1] == 0) GOTO 0x6a; Pop(1)

0x5d: @ WaitForAnimEnd(Stack[-5])
0x5e: Pop(0)
0x5f: Push(Stack[-5])
0x60: IF (Stack[-1] == 0) GOTO 0x6a; Pop(1)

0x61: PushEmpty(int, cvector, cvector)
0x62: Stack[-3] = Stack[-24]
0x63: Stack[-2] = Stack[-10]
0x64: Stack[-1] = Stack[-9]
0x65: Call2 0x9e

0x66: Pop(3)
0x67: Push((int) 1)
0x68: Stack[-22] = Stack[-22] + Stack[-1]; Pop(1);
0x69: GOTO 0x4c

0x6a: Push( Stack[1 + Tasks[-1].StackPointer] )
0x6b: IF (Stack[-1] == 0) GOTO 0x6e; Pop(1)

0x6c: Stack[-23] = (bool) 1
0x6d: Return(); Pop(20)

0x6e: GOTO 0x4c

0x6f: Push((int) 2)
0x70: Stack[-22] = Stack[0 + Tasks[-1].StackPointer] - Stack[-1]; Pop(1);
0x71: Push((int) 0)
0x72: Pop(1); Push((bool) Stack[-22] >= Stack[-1])
0x73: IF (Stack[-1] == 0) GOTO 0x95; Pop(1)

0x74: Push((int) 1)
0x75: Pop(1); Push(Stack[-22] + Stack[-1]);
0x76: Pop(1); Push(Stack[-23] + Stack[-1]);
0x77: @@ GetLocator(Stack[-1], Stack[-5], Stack[-4], Stack[-3])
0x78: Pop(1)
0x79: PushEmpty(bool, cvector)
0x7a: Stack[-1] = Stack[-5]
0x7b: Call2 0x596

0x7c: Pop(1)
0x7d: IF (Stack[-1] == 0) GOTO 0x90; Pop(1)

0x7e: Push((int) 0)
0x7f: @ MovePoint(Stack[-4], Stack[-1], Stack[-2])
0x80: Pop(1)
0x81: Push(Stack[-1])
0x82: IF (Stack[-1] == 0) GOTO 0x90; Pop(1)

0x83: @ WaitForAnimEnd(Stack[-1])
0x84: Pop(0)
0x85: Push(Stack[-1])
0x86: IF (Stack[-1] == 0) GOTO 0x90; Pop(1)

0x87: PushEmpty(int, cvector, cvector)
0x88: Stack[-3] = Stack[-24]
0x89: Stack[-2] = Stack[-6]
0x8a: Stack[-1] = Stack[-5]
0x8b: Call2 0x9e

0x8c: Pop(3)
0x8d: Push((int) -1)
0x8e: Stack[-22] = Stack[-22] + Stack[-1]; Pop(1);
0x8f: GOTO 0x71

0x90: Push( Stack[1 + Tasks[-1].StackPointer] )
0x91: IF (Stack[-1] == 0) GOTO 0x94; Pop(1)

0x92: Stack[-23] = (bool) 1
0x93: Return(); Pop(20)

0x94: GOTO 0x71

0x95: Stack[-21] = (int) 0
0x96: GOTO 0x4c

0x97: Stack[-23] = (bool) 1
0x98: Return(); Pop(20)

0x99: Stack[-10] = 0
0x9a: @ Stop()
0x9b: Pop(0)
0x9c: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x9d: Return(); Pop(0)

0x9e: PushEmpty()
0x9f: Return(); Pop(0)

0xa0: PushEmpty(object, object)
0xa1: Push("player")
0xa2: @ FindActor(Stack[-2], Stack[-1])
0xa3: Pop(1)
0xa4: Pop(0); Push((bool) Stack[-1] == 0)
0xa5: IF (Stack[-1] == 0) GOTO 0xa7; Pop(1)

0xa6: Return(); Pop(2)

0xa7: PushEmpty(object, bool, float)
0xa8: Stack[-3] = Stack[-4]
0xa9: Stack[-2] = (bool) 1
0xaa: Stack[-1] = (float) 180.0
0xab: Call2 0xb9

0xac: Pop(3)
0xad: Push((int) 1)
0xae: @ Sleep(Stack[-1])
0xaf: Pop(1)
0xb0: GOTO 0xa7

0xb1: Return(); Pop(2)

0xb2: Stack[-1] = 0
0xb3: PushEmpty()
0xb4: Stack[-3] = (float) 0.2
0xb5: Return(); Pop(0)

0xb6: PushEmpty()
0xb7: Stack[-3] = (int) 0
0xb8: Return(); Pop(0)

0xb9: PushEmpty(float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float, float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float)
0xba: PushEmpty()
0xbb: Call2 0x19e

0xbc: Pop(0)
0xbd: Stack[5 + Tasks[-1].StackPointer] = (int)0
0xbe: Push("@GetAttackDistance")
0xbf: Push((int) 1)
0xc0: Pop(2); Push(IsFuncExist(Stack[-27], Stack[-2], Stack[-1]))
0xc1: IF (Stack[-1] == 0) GOTO 0xc7; Pop(1)

0xc2: @@ GetAttackDistance(Stack[-11])
0xc3: Pop(0)
0xc4: Push((int) 50)
0xc5: Stack[-12] = Stack[-12] + Stack[-1]; Pop(1);
0xc6: GOTO 0xc8

0xc7: Stack[-11] = Stack[-23]
0xc8: Push((int) 150)
0xc9: Pop(1); Push((bool) Stack[-12] >= Stack[-1])
0xca: IF (Stack[-1] == 0) GOTO 0xcc; Pop(1)

0xcb: Stack[-11] = (int) 150
0xcc: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xcd: Stack[0 + Tasks[-1].StackPointer] = Stack[-25]
0xce: @ IsPlayerActor(Stack[-0], Stack[-8])
0xcf: Pop(0)
0xd0: Push(Stack[-8])
0xd1: IF (Stack[-1] == 0) GOTO 0xda; Pop(1)

0xd2: Push("attack")
0xd3: @ PlayGlobalMusic(Stack[-1])
0xd4: Pop(1)
0xd5: PushEmpty(object)
0xd6: Call2 0x671

0xd7: Pop(0)
0xd8: @ SendPlayerEnemy(Stack[-26], Stack[-1])
0xd9: Pop(1)
0xda: Push(Stack[-24])
0xdb: IF (Stack[-1] == 0) GOTO 0xde; Pop(1)

0xdc: Stack[-7] = (bool) 0
0xdd: GOTO 0xdf

0xde: Stack[-7] = (bool) 1
0xdf: Push((float)400.0)
0xe0: Stack[-7] = Stack[-1] + Stack[-12]; Pop(1);
0xe1: PushEmpty(bool)
0xe2: Stack[-1] = (bool) 0
0xe3: PushEmpty(bool, object)
0xe4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe5: Call2 0x57e

0xe6: Pop(1)
0xe7: IF (Stack[-1] == 0) GOTO 0xeb; Pop(1)

0xe8: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0xe9: IF (Stack[-1] == 0) GOTO 0xeb; Pop(1)

0xea: Stack[-1] = (bool) 1
0xeb: IF (Stack[-1] == 0) GOTO 0x18d; Pop(1)

0xec: PushEmpty()
0xed: Call2 0x33b

0xee: Pop(0)
0xef: @@ GetPFPosition(Stack[-10])
0xf0: Pop(0)
0xf1: @ GetPFPosition(Stack[-9])
0xf2: Pop(0)
0xf3: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0xf4: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0xf5: Pop(0); Push(Stack[-6] * Stack[-6]);
0xf6: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0xf7: IF (Stack[-1] == 0) GOTO 0x107; Pop(1)

0xf8: PushEmpty(bool, object, float, float, bool, bool)
0xf9: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0xfa: Stack[-4] = Stack[-17]
0xfb: Stack[-3] = (float) 10000.0
0xfc: Stack[-2] = (bool) 1
0xfd: Stack[-1] = (bool) 0
0xfe: Push(-6, 3); TaskCall(3)
0xff: Call2 0x34f

0x100: Pop(-6, 3); TaskReturn
0x101: Pop(5)
0x102: Pop(1); Push((bool) Stack[-1] == 0)
0x103: IF (Stack[-1] == 0) GOTO 0x105; Pop(1)

0x104: GOTO 0x18d

0x105: Stack[-7] = (bool) 0
0x106: GOTO 0x18c

0x107: Pop(0); Push(Stack[-23] * Stack[-23]);
0x108: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0x109: IF (Stack[-1] == 0) GOTO 0x184; Pop(1)

0x10a: @@ GetPFPosition(Stack[-3])
0x10b: Pop(0)
0x10c: @ CanReachByPF(Stack[-2], Stack[-3])
0x10d: Pop(0)
0x10e: Pop(0); Push((bool) Stack[-2] == 0)
0x10f: IF (Stack[-1] == 0) GOTO 0x11f; Pop(1)

0x110: PushEmpty(bool, object, float, float, bool, bool)
0x111: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0x112: Stack[-4] = Stack[-17]
0x113: Stack[-3] = (float) 10000.0
0x114: Stack[-2] = (bool) 1
0x115: Stack[-1] = (bool) 0
0x116: Push(-6, 3); TaskCall(3)
0x117: Call2 0x34f

0x118: Pop(-6, 3); TaskReturn
0x119: Pop(5)
0x11a: Pop(1); Push((bool) Stack[-1] == 0)
0x11b: IF (Stack[-1] == 0) GOTO 0x11d; Pop(1)

0x11c: GOTO 0x18d

0x11d: Stack[-7] = (bool) 0
0x11e: GOTO 0xe1

0x11f: Pop(0); Push((bool) Stack[-7] == 0)
0x120: IF (Stack[-1] == 0) GOTO 0x138; Pop(1)

0x121: PushEmpty(object)
0x122: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x123: Call2 0x61e

0x124: Pop(1)
0x125: Push("all")
0x126: Push("attack_on")
0x127: @ PlayAnimation(Stack[-2], Stack[-1])
0x128: Pop(2)
0x129: @ WaitForAnimEnd()
0x12a: Pop(0)
0x12b: PushEmpty()
0x12c: Call2 0x33b

0x12d: Pop(0)
0x12e: @ StopAsync()
0x12f: Pop(0)
0x130: Stack[-7] = (bool) 1
0x131: PushEmpty(bool, object)
0x132: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x133: Call2 0x57e

0x134: Pop(1)
0x135: Pop(1); Push((bool) Stack[-1] == 0)
0x136: IF (Stack[-1] == 0) GOTO 0x138; Pop(1)

0x137: GOTO 0x18d

0x138: @ rand(Stack[-1])
0x139: Pop(0)
0x13a: PushEmpty(bool)
0x13b: Stack[-1] = (bool) 1
0x13c: Push((float)0.25)
0x13d: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x13e: IF (Stack[-1] == 0) GOTO 0x144; Pop(1)

0x13f: PushEmpty(bool)
0x140: Call2 0x310

0x141: Pop(0)
0x142: IF (Stack[-1] == 0) GOTO 0x144; Pop(1)

0x143: Stack[-1] = (bool) 0
0x144: IF (Stack[-1] == 0) GOTO 0x155; Pop(1)

0x145: @ Face(Stack[-0])
0x146: Pop(0)
0x147: PushEmpty()
0x148: Call2 0x342

0x149: Pop(0)
0x14a: Push("all")
0x14b: Push("attack_stay")
0x14c: @ PlayAnimation(Stack[-2], Stack[-1])
0x14d: Pop(2)
0x14e: PushEmpty(bool, float)
0x14f: Stack[-1] = Stack[-25]
0x150: Call2 0x28c

0x151: Pop(2)
0x152: @ StopAsync()
0x153: Pop(0)
0x154: GOTO 0x183

0x155: @ Face(Stack[-0])
0x156: Pop(0)
0x157: Push("all")
0x158: Push("fjump")
0x159: @ PlayAnimation(Stack[-2], Stack[-1])
0x15a: Pop(2)
0x15b: @ WaitForAnimEnd()
0x15c: Pop(0)
0x15d: PushEmpty()
0x15e: Call2 0x33b

0x15f: Pop(0)
0x160: Push(CVector(0.0, 0.0, 0.0))
0x161: @ SetSpeed(Stack[-1])
0x162: Pop(1)
0x163: @ Stop()
0x164: Pop(0)
0x165: @ StopAsync()
0x166: Pop(0)
0x167: PushEmpty(bool)
0x168: Call2 0x310

0x169: Pop(0)
0x16a: Pop(1); Push((bool) Stack[-1] == 0)
0x16b: IF (Stack[-1] == 0) GOTO 0x183; Pop(1)

0x16c: PushEmpty(bool, object)
0x16d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x16e: Call2 0x57e

0x16f: Pop(1)
0x170: Pop(1); Push((bool) Stack[-1] == 0)
0x171: IF (Stack[-1] == 0) GOTO 0x173; Pop(1)

0x172: GOTO 0x18d

0x173: @@ GetPFPosition(Stack[-10])
0x174: Pop(0)
0x175: @ GetPFPosition(Stack[-9])
0x176: Pop(0)
0x177: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0x178: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x179: Pop(0); Push(Stack[-23] * Stack[-23]);
0x17a: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x17b: IF (Stack[-1] == 0) GOTO 0x183; Pop(1)

0x17c: PushEmpty(bool, float)
0x17d: Stack[-1] = Stack[-25]
0x17e: Call2 0x1e8

0x17f: Pop(1)
0x180: Pop(1); Push((bool) Stack[-1] == 0)
0x181: IF (Stack[-1] == 0) GOTO 0x183; Pop(1)

0x182: GOTO 0x18d

0x183: GOTO 0x18c

0x184: PushEmpty(bool, float)
0x185: Stack[-1] = Stack[-25]
0x186: Call2 0x1e8

0x187: Pop(1)
0x188: Pop(1); Push((bool) Stack[-1] == 0)
0x189: IF (Stack[-1] == 0) GOTO 0x18b; Pop(1)

0x18a: GOTO 0x18d

0x18b: Stack[-7] = (bool) 1
0x18c: GOTO 0xe1

0x18d: @ WaitForAnimEnd()
0x18e: Pop(0)
0x18f: Push( Stack[3 + Tasks[-1].StackPointer] )
0x190: IF (Stack[-1] == 0) GOTO 0x192; Pop(1)

0x191: Return(); Pop(22)

0x192: Push("all")
0x193: Push("attack_off")
0x194: @ PlayAnimation(Stack[-2], Stack[-1])
0x195: Pop(2)
0x196: @ WaitForAnimEnd()
0x197: Pop(0)
0x198: Push(Stack[-8])
0x199: IF (Stack[-1] == 0) GOTO 0x19d; Pop(1)

0x19a: Push((float)2.0)
0x19b: @ Sleep(Stack[-1])
0x19c: Pop(1)
0x19d: Return(); Pop(22)

0x19e: PushEmpty(bool, bool, cvector, bool, bool, cvector)
0x19f: Stack[1 + Tasks[-1].StackPointer] = (int)0
0x1a0: Push("all")
0x1a1: Push("attack_begin")
0x1a2: Push((int) 1)
0x1a3: Pop(1); Push(Stack[1 + StackPtr] + Stack[-1]);
0x1a4: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1a5: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0x1a6: Pop(2)
0x1a7: Pop(0); Push((bool) Stack[-3] == 0)
0x1a8: IF (Stack[-1] == 0) GOTO 0x1aa; Pop(1)

0x1a9: GOTO 0x1ad

0x1aa: Push((int) 1)
0x1ab: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x1ac: GOTO 0x1a0

0x1ad: Stack[2 + Tasks[-1].StackPointer] = (int)0
0x1ae: Push("attack")
0x1af: Push((int) 1)
0x1b0: Pop(1); Push(Stack[2 + StackPtr] + Stack[-1]);
0x1b1: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1b2: @ IsExisting3DSound(Stack[-3], Stack[-1])
0x1b3: Pop(1)
0x1b4: Pop(0); Push((bool) Stack[-2] == 0)
0x1b5: IF (Stack[-1] == 0) GOTO 0x1b7; Pop(1)

0x1b6: GOTO 0x1ba

0x1b7: Push((int) 1)
0x1b8: Stack[2 + Tasks[-1].StackPointer] = Stack[2 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x1b9: GOTO 0x1ae

0x1ba: Push("all")
0x1bb: Push("bjump")
0x1bc: @ GetAnimationOffset(Stack[-3], Stack[-2], Stack[-1])
0x1bd: Pop(2)
0x1be: Push(CvectorIndex(Stack[-1], 2))
0x1bf: Stack[4 + Tasks[-1].StackPointer] = -Stack[-1]; Pop(1);
0x1c0: Return(); Pop(6)

0x1c1: PushEmpty(object, float, float, object, float, float)
0x1c2: Push((float)0.9)
0x1c3: Pop(1); Push(Stack[-9] * Stack[-1]);
0x1c4: @ GetVictim(Stack[-1], Stack[-4])
0x1c5: Pop(1)
0x1c6: @ ReportAttack(Stack[-0])
0x1c7: Pop(0)
0x1c8: Pop(0); Push((bool) Stack[-3] == Stack[0 + Tasks[-1].StackPointer])
0x1c9: IF (Stack[-1] == 0) GOTO 0x1e6; Pop(1)

0x1ca: PushEmpty(float, object, int)
0x1cb: Stack[-2] = Stack[-6]
0x1cc: Stack[-1] = Stack[-10]
0x1cd: Call2 0xb3

0x1ce: Stack[-5] = Stack[-3]
0x1cf: Pop(3)
0x1d0: PushEmpty(float, object, float, int)
0x1d1: Stack[-3] = Stack[-7]
0x1d2: Stack[-2] = Stack[-6]
0x1d3: PushEmpty(int, object, int)
0x1d4: Stack[-2] = Stack[-10]
0x1d5: Stack[-1] = Stack[-14]
0x1d6: Call2 0xb6

0x1d7: Stack[-4] = Stack[-3]
0x1d8: Pop(3)
0x1d9: Call2 0x50c

0x1da: Stack[-5] = Stack[-4]
0x1db: Pop(4)
0x1dc: PushEmpty(int)
0x1dd: Call2 0x340

0x1de: Pop(0)
0x1df: @ ReportHit(Stack[-0], Stack[-1], Stack[-2], Stack[-3])
0x1e0: Pop(1)
0x1e1: PushEmpty(object, float)
0x1e2: Stack[-2] = Stack[-5]
0x1e3: Stack[-1] = Stack[-3]
0x1e4: Call2 0x347

0x1e5: Pop(2)
0x1e6: Return(); Pop(6)

0x1e7: Stack[-3] = 0
0x1e8: PushEmpty(int, bool, int, string, int, bool, int, string)
0x1e9: PushEmpty()
0x1ea: Call2 0x33b

0x1eb: Pop(0)
0x1ec: @ irand(Stack[-4], Stack[-1])
0x1ed: Pop(0)
0x1ee: Push((int) 1)
0x1ef: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x1f0: @ Face(Stack[-0])
0x1f1: Pop(0)
0x1f2: Push((bool) 1)
0x1f3: @ SetAttackState(Stack[-1])
0x1f4: Pop(1)
0x1f5: PushEmpty()
0x1f6: Call2 0x6be

0x1f7: Pop(0)
0x1f8: Push("all")
0x1f9: Push("attack_begin")
0x1fa: Pop(1); Push(Stack[-1] + Stack[-6]);
0x1fb: @ PlayAnimation(Stack[-2], Stack[-1])
0x1fc: Pop(2)
0x1fd: @ WaitForAnimEnd()
0x1fe: Pop(0)
0x1ff: PushEmpty()
0x200: Call2 0x31b

0x201: Pop(0)
0x202: PushEmpty(bool, object)
0x203: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x204: Call2 0x57e

0x205: Pop(1)
0x206: Pop(1); Push((bool) Stack[-1] == 0)
0x207: IF (Stack[-1] == 0) GOTO 0x20c; Pop(1)

0x208: @ StopAsync()
0x209: Pop(0)
0x20a: Stack[-10] = (bool) 0
0x20b: Return(); Pop(8)

0x20c: PushEmpty(float, int)
0x20d: Stack[-2] = Stack[-11]
0x20e: Stack[-1] = Stack[-6]
0x20f: Call2 0x1c1

0x210: Pop(2)
0x211: Push("all")
0x212: Push("attack_middle")
0x213: Pop(1); Push(Stack[-1] + Stack[-6]);
0x214: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0x215: Pop(2)
0x216: Push(Stack[-3])
0x217: IF (Stack[-1] == 0) GOTO 0x25d; Pop(1)

0x218: PushEmpty()
0x219: Call2 0x6be

0x21a: Pop(0)
0x21b: Push("all")
0x21c: Push("attack_middle")
0x21d: Pop(1); Push(Stack[-1] + Stack[-6]);
0x21e: @ PlayAnimation(Stack[-2], Stack[-1])
0x21f: Pop(2)
0x220: @ WaitForAnimEnd()
0x221: Pop(0)
0x222: PushEmpty()
0x223: Call2 0x33b

0x224: Pop(0)
0x225: PushEmpty(bool, object)
0x226: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x227: Call2 0x57e

0x228: Pop(1)
0x229: Pop(1); Push((bool) Stack[-1] == 0)
0x22a: IF (Stack[-1] == 0) GOTO 0x22f; Pop(1)

0x22b: @ StopAsync()
0x22c: Pop(0)
0x22d: Stack[-10] = (bool) 0
0x22e: Return(); Pop(8)

0x22f: PushEmpty(float, int)
0x230: Stack[-2] = Stack[-11]
0x231: Stack[-1] = Stack[-6]
0x232: Call2 0x1c1

0x233: Pop(2)
0x234: Stack[-2] = (int) 1
0x235: Push("attack_middle")
0x236: Pop(1); Push(Stack[-1] + Stack[-5]);
0x237: Push("_")
0x238: Pop(2); Push(Stack[-2] + Stack[-1]);
0x239: Stack[-2] = Stack[-1] + Stack[-3]; Pop(1);
0x23a: Push("all")
0x23b: @ HasAnimation(Stack[-4], Stack[-1], Stack[-2])
0x23c: Pop(1)
0x23d: Pop(0); Push((bool) Stack[-3] == 0)
0x23e: IF (Stack[-1] == 0) GOTO 0x240; Pop(1)

0x23f: GOTO 0x25d

0x240: PushEmpty()
0x241: Call2 0x6be

0x242: Pop(0)
0x243: Push("all")
0x244: @ PlayAnimation(Stack[-1], Stack[-2])
0x245: Pop(1)
0x246: @ WaitForAnimEnd()
0x247: Pop(0)
0x248: PushEmpty()
0x249: Call2 0x33b

0x24a: Pop(0)
0x24b: PushEmpty(bool, object)
0x24c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x24d: Call2 0x57e

0x24e: Pop(1)
0x24f: Pop(1); Push((bool) Stack[-1] == 0)
0x250: IF (Stack[-1] == 0) GOTO 0x255; Pop(1)

0x251: @ StopAsync()
0x252: Pop(0)
0x253: Stack[-10] = (bool) 0
0x254: Return(); Pop(8)

0x255: PushEmpty(float, int)
0x256: Stack[-2] = Stack[-11]
0x257: Stack[-1] = Stack[-6]
0x258: Call2 0x1c1

0x259: Pop(2)
0x25a: Push((int) 1)
0x25b: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x25c: GOTO 0x235

0x25d: Push((bool) 0)
0x25e: @ SetAttackState(Stack[-1])
0x25f: Pop(1)
0x260: Push("all")
0x261: Push("attack_end")
0x262: Pop(1); Push(Stack[-1] + Stack[-6]);
0x263: @ PlayAnimation(Stack[-2], Stack[-1])
0x264: Pop(2)
0x265: PushEmpty(bool)
0x266: Call2 0x349

0x267: Pop(0)
0x268: IF (Stack[-1] == 0) GOTO 0x26f; Pop(1)

0x269: PushEmpty(bool, float)
0x26a: Stack[-1] = (float) 0.75
0x26b: Call2 0x271

0x26c: Pop(2)
0x26d: @ StopAsync()
0x26e: Pop(0)
0x26f: Stack[-10] = (bool) 1
0x270: Return(); Pop(8)

0x271: PushEmpty(float, bool, float, bool)
0x272: @ rand(Stack[-2])
0x273: Pop(0)
0x274: Pop(0); Push((bool) Stack[-2] < Stack[-5])
0x275: IF (Stack[-1] == 0) GOTO 0x285; Pop(1)

0x276: @ IsAnimationPlaying(Stack[-1])
0x277: Pop(0)
0x278: Pop(0); Push((bool) Stack[-1] == 0)
0x279: IF (Stack[-1] == 0) GOTO 0x27b; Pop(1)

0x27a: GOTO 0x284

0x27b: PushEmpty(bool)
0x27c: Call2 0x2d3

0x27d: Pop(0)
0x27e: IF (Stack[-1] == 0) GOTO 0x281; Pop(1)

0x27f: Stack[-6] = (bool) 1
0x280: Return(); Pop(4)

0x281: @ sync()
0x282: Pop(0)
0x283: GOTO 0x276

0x284: GOTO 0x28a

0x285: @ WaitForAnimEnd()
0x286: Pop(0)
0x287: PushEmpty()
0x288: Call2 0x33b

0x289: Pop(0)
0x28a: Stack[-6] = (bool) 0
0x28b: Return(); Pop(4)

0x28c: PushEmpty(bool, cvector, cvector, cvector, float, bool, cvector, cvector, cvector, float)
0x28d: @ IsAnimationPlaying(Stack[-5])
0x28e: Pop(0)
0x28f: Pop(0); Push((bool) Stack[-5] == 0)
0x290: IF (Stack[-1] == 0) GOTO 0x292; Pop(1)

0x291: GOTO 0x2b2

0x292: PushEmpty(bool)
0x293: Call2 0x2d3

0x294: Pop(0)
0x295: IF (Stack[-1] == 0) GOTO 0x298; Pop(1)

0x296: Stack[-12] = (bool) 1
0x297: Return(); Pop(10)

0x298: PushEmpty(bool, object)
0x299: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x29a: Call2 0x57e

0x29b: Pop(1)
0x29c: Pop(1); Push((bool) Stack[-1] == 0)
0x29d: IF (Stack[-1] == 0) GOTO 0x2a0; Pop(1)

0x29e: Stack[-12] = (bool) 0
0x29f: Return(); Pop(10)

0x2a0: @@ GetPFPosition(Stack[-4])
0x2a1: Pop(0)
0x2a2: @ GetPFPosition(Stack[-3])
0x2a3: Pop(0)
0x2a4: Stack[-2] = Stack[-4] - Stack[-3]; Pop(0);
0x2a5: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x2a6: Pop(0); Push(Stack[-11] * Stack[-11]);
0x2a7: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x2a8: IF (Stack[-1] == 0) GOTO 0x2af; Pop(1)

0x2a9: PushEmpty(bool, float)
0x2aa: Stack[-1] = Stack[-13]
0x2ab: Call2 0x1e8

0x2ac: Pop(2)
0x2ad: Stack[-12] = (bool) 1
0x2ae: Return(); Pop(10)

0x2af: @ sync()
0x2b0: Pop(0)
0x2b1: GOTO 0x28d

0x2b2: PushEmpty()
0x2b3: Call2 0x33b

0x2b4: Pop(0)
0x2b5: Stack[-12] = (bool) 0
0x2b6: Return(); Pop(10)

0x2b7: PushEmpty(cvector, cvector, cvector, float, float, cvector, cvector, cvector, float, float)
0x2b8: PushEmpty(bool, object)
0x2b9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2ba: Call2 0x57e

0x2bb: Pop(1)
0x2bc: Pop(1); Push((bool) Stack[-1] == 0)
0x2bd: IF (Stack[-1] == 0) GOTO 0x2c0; Pop(1)

0x2be: Stack[-11] = (bool) 0
0x2bf: Return(); Pop(10)

0x2c0: PushEmpty(bool)
0x2c1: Call2 0x310

0x2c2: Pop(0)
0x2c3: IF (Stack[-1] == 0) GOTO 0x2d1; Pop(1)

0x2c4: @@ GetPFPosition(Stack[-5])
0x2c5: Pop(0)
0x2c6: @ GetPFPosition(Stack[-4])
0x2c7: Pop(0)
0x2c8: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x2c9: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x2ca: @@ GetAttackDistance(Stack[-1])
0x2cb: Pop(0)
0x2cc: Push((int) 50)
0x2cd: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x2ce: Pop(0); Push(Stack[-1] * Stack[-1]);
0x2cf: Stack[-12] = Stack[-3] <= Stack[-1]; Pop(1);
0x2d0: Return(); Pop(10)

0x2d1: Stack[-11] = (bool) 0
0x2d2: Return(); Pop(10)

0x2d3: PushEmpty(bool)
0x2d4: Stack[-1] = (bool) 0
0x2d5: PushEmpty(bool)
0x2d6: Call2 0x2b7

0x2d7: Pop(0)
0x2d8: IF (Stack[-1] == 0) GOTO 0x2de; Pop(1)

0x2d9: PushEmpty(bool)
0x2da: Call2 0x2e3

0x2db: Pop(0)
0x2dc: IF (Stack[-1] == 0) GOTO 0x2de; Pop(1)

0x2dd: Stack[-1] = (bool) 1
0x2de: IF (Stack[-1] == 0) GOTO 0x2e1; Pop(1)

0x2df: Stack[-1] = (bool) 1
0x2e0: Return(); Pop(0)

0x2e1: Stack[-1] = (bool) 0
0x2e2: Return(); Pop(0)

0x2e3: PushEmpty(object, bool, float, cvector, cvector, object, bool, float, cvector, cvector)
0x2e4: @ GetScene(Stack[-5])
0x2e5: Pop(0)
0x2e6: Stack[-4] = (bool) 0
0x2e7: PushEmpty(cvector, object)
0x2e8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2e9: Call2 0x4ef

0x2ea: Pop(1)
0x2eb: Pop(1); Push(( -Stack[-1])
0x2ec: @ FindDirLength(Stack[-4], Stack[-1], Stack[-4])
0x2ed: Pop(1)
0x2ee: Pop(0); Push((bool) Stack[-3] < Stack[4 + Tasks[-1].StackPointer])
0x2ef: IF (Stack[-1] == 0) GOTO 0x2f1; Pop(1)

0x2f0: GOTO 0x30d

0x2f1: @ Face(Stack[-0])
0x2f2: Pop(0)
0x2f3: Push("all")
0x2f4: Push("bjump")
0x2f5: @ PlayAnimation(Stack[-2], Stack[-1])
0x2f6: Pop(2)
0x2f7: @@ GetPFPosition(Stack[-2])
0x2f8: Pop(0)
0x2f9: @ GetPFPosition(Stack[-1])
0x2fa: Pop(0)
0x2fb: @ WaitForAnimEnd()
0x2fc: Pop(0)
0x2fd: PushEmpty()
0x2fe: Call2 0x33b

0x2ff: Pop(0)
0x300: @ StopAsync()
0x301: Pop(0)
0x302: Push(CVector(0.0, 0.0, 0.0))
0x303: @ SetSpeed(Stack[-1])
0x304: Pop(1)
0x305: Stack[-4] = (bool) 1
0x306: PushEmpty(bool)
0x307: Call2 0x2b7

0x308: Pop(0)
0x309: Pop(1); Push((bool) Stack[-1] == 0)
0x30a: IF (Stack[-1] == 0) GOTO 0x30c; Pop(1)

0x30b: GOTO 0x30d

0x30c: GOTO 0x2e7

0x30d: Stack[-11] = Stack[-4]
0x30e: Return(); Pop(10)

0x30f: Stack[-5] = 0
0x310: PushEmpty(bool, bool)
0x311: Push("IsAttacking")
0x312: Push((int) 1)
0x313: Pop(2); Push(IsFuncExist(Stack[0 + Tasks[-1].StackPointer], Stack[-2], Stack[-1]))
0x314: IF (Stack[-1] == 0) GOTO 0x319; Pop(1)

0x315: @@ IsAttacking(Stack[-1])
0x316: Pop(0)
0x317: Stack[-3] = Stack[-1]
0x318: Return(); Pop(2)

0x319: Stack[-3] = (bool) 0
0x31a: Return(); Pop(2)

0x31b: PushEmpty(float, int, float, int)
0x31c: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x31d: IF (Stack[-1] == 0) GOTO 0x31f; Pop(1)

0x31e: Return(); Pop(4)

0x31f: Push( Stack[5 + Tasks[-1].StackPointer] )
0x320: IF (Stack[-1] == 0) GOTO 0x327; Pop(1)

0x321: Push((int) -1)
0x322: Stack[5 + Tasks[-1].StackPointer] = Stack[5 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x323: Push((int) 0)
0x324: Pop(1); Push((bool) Stack[5 + Tasks[-1].StackPointer] > Stack[-1])
0x325: IF (Stack[-1] == 0) GOTO 0x327; Pop(1)

0x326: Return(); Pop(4)

0x327: @ rand(Stack[-2])
0x328: Pop(0)
0x329: PushEmpty(float)
0x32a: Call2 0x34d

0x32b: Pop(0)
0x32c: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x32d: IF (Stack[-1] == 0) GOTO 0x33a; Pop(1)

0x32e: @ irand(Stack[-1], Stack[-2])
0x32f: Pop(0)
0x330: Push((int) 1)
0x331: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x332: Push("attack")
0x333: Pop(1); Push(Stack[-1] + Stack[-2]);
0x334: @ Speak(Stack[-1])
0x335: Pop(1)
0x336: PushEmpty(int)
0x337: Call2 0x34b

0x338: Stack[5 + Tasks[-1].StackPointer] = Stack[-1]
0x339: Pop(1)
0x33a: Return(); Pop(4)

0x33b: PushEmpty(object)
0x33c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x33d: Call2 0x6b5

0x33e: Pop(1)
0x33f: Return(); Pop(0)

0x340: Stack[-1] = (int) 0
0x341: Return(); Pop(0)

0x342: PushEmpty(string)
0x343: Stack[-1] = "attack_stay"
0x344: Call2 0x648

0x345: Pop(1)
0x346: Return(); Pop(0)

0x347: PushEmpty()
0x348: Return(); Pop(0)

0x349: Stack[-1] = (bool) 1
0x34a: Return(); Pop(0)

0x34b: Stack[-1] = (int) 1
0x34c: Return(); Pop(0)

0x34d: Stack[-1] = (float) 0.5
0x34e: Return(); Pop(0)

0x34f: PushEmpty(bool, bool, bool, bool)
0x350: PushEmpty(object)
0x351: Stack[-1] = Stack[-10]
0x352: Call2 0x6b5

0x353: Pop(1)
0x354: Push((int) 1)
0x355: Push((int) 5)
0x356: @ SetTimer(Stack[-2], Stack[-1])
0x357: Pop(2)
0x358: @ CanSee(Stack[-2], Stack[-9])
0x359: Pop(0)
0x35a: Push(Stack[-2])
0x35b: IF (Stack[-1] == 0) GOTO 0x362; Pop(1)

0x35c: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x35d: PushEmpty(object)
0x35e: Stack[-1] = Stack[-10]
0x35f: Call2 0x62e

0x360: Pop(1)
0x361: GOTO 0x363

0x362: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x363: PushEmpty(bool, object)
0x364: Stack[-1] = Stack[-11]
0x365: Call2 0x4f6

0x366: Pop(1)
0x367: IF (Stack[-1] == 0) GOTO 0x36d; Pop(1)

0x368: PushEmpty(object)
0x369: Call2 0x671

0x36a: Pop(0)
0x36b: @ SendPlayerEnemy(Stack[-10], Stack[-1])
0x36c: Pop(1)
0x36d: PushEmpty(bool, object, float, float, bool, bool)
0x36e: Stack[-5] = Stack[-15]
0x36f: Stack[-4] = Stack[-14]
0x370: Stack[-3] = Stack[-13]
0x371: Stack[-2] = Stack[-12]
0x372: Stack[-1] = Stack[-11]
0x373: Call2 0x3b8

0x374: Stack[-7] = Stack[-6]
0x375: Pop(6)
0x376: Push( Stack[2 + Tasks[-1].StackPointer] )
0x377: IF (Stack[-1] == 0) GOTO 0x37b; Pop(1)

0x378: Push("head")
0x379: @ UnlookAsync(Stack[-1])
0x37a: Pop(1)
0x37b: Push((int) 1)
0x37c: @ KillTimer(Stack[-1])
0x37d: Pop(1)
0x37e: Stack[-10] = Stack[-1]
0x37f: Return(); Pop(4)

0x380: PushEmpty()
0x381: Push((int) 1)
0x382: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x383: IF (Stack[-1] == 0) GOTO 0x389; Pop(1)

0x384: PushEmpty(object)
0x385: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x386: Call2 0x6b5

0x387: Pop(1)
0x388: GOTO 0x38d

0x389: PushEmpty(int)
0x38a: Stack[-1] = Stack[-2]
0x38b: Call2 0x41e

0x38c: Pop(1)
0x38d: Return(); Pop(0)

0x38e: Push((int) 1)
0x38f: @ KillTimer(Stack[-1])
0x390: Pop(1)
0x391: Push( Stack[2 + Tasks[-1].StackPointer] )
0x392: IF (Stack[-1] == 0) GOTO 0x397; Pop(1)

0x393: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x394: Push("head")
0x395: @ UnlookAsync(Stack[-1])
0x396: Pop(1)
0x397: PushEmpty()
0x398: Call2 0x434

0x399: Pop(0)
0x39a: Return(); Pop(0)

0x39b: PushEmpty()
0x39c: PushEmpty(bool)
0x39d: Stack[-1] = (bool) 0
0x39e: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0x39f: IF (Stack[-1] == 0) GOTO 0x3a3; Pop(1)

0x3a0: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x3a1: IF (Stack[-1] == 0) GOTO 0x3a3; Pop(1)

0x3a2: Stack[-1] = (bool) 1
0x3a3: IF (Stack[-1] == 0) GOTO 0x3a9; Pop(1)

0x3a4: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x3a5: PushEmpty(object)
0x3a6: Stack[-1] = Stack[-2]
0x3a7: Call2 0x62e

0x3a8: Pop(1)
0x3a9: Return(); Pop(0)

0x3aa: PushEmpty()
0x3ab: PushEmpty(bool)
0x3ac: Stack[-1] = (bool) 0
0x3ad: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0x3ae: IF (Stack[-1] == 0) GOTO 0x3b2; Pop(1)

0x3af: Push( Stack[2 + Tasks[-1].StackPointer] )
0x3b0: IF (Stack[-1] == 0) GOTO 0x3b2; Pop(1)

0x3b1: Stack[-1] = (bool) 1
0x3b2: IF (Stack[-1] == 0) GOTO 0x3b7; Pop(1)

0x3b3: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x3b4: Push("head")
0x3b5: @ UnlookAsync(Stack[-1])
0x3b6: Pop(1)
0x3b7: Return(); Pop(0)

0x3b8: PushEmpty(bool, bool, object, cvector, cvector, cvector, float, object, bool, bool, object, cvector, cvector, cvector, float, object)
0x3b9: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x3ba: Stack[1 + Tasks[-1].StackPointer] = Stack[-21]
0x3bb: Stack[-7] = Stack[-17]
0x3bc: PushEmpty(bool, object)
0x3bd: Stack[-1] = Stack[-23]
0x3be: Call2 0x444

0x3bf: Pop(1)
0x3c0: Pop(1); Push((bool) Stack[-1] == 0)
0x3c1: IF (Stack[-1] == 0) GOTO 0x3c4; Pop(1)

0x3c2: Stack[-22] = (bool) 0
0x3c3: Return(); Pop(16)

0x3c4: @@ GetPosition(Stack[-5])
0x3c5: Pop(0)
0x3c6: @ GetPosition(Stack[-4])
0x3c7: Pop(0)
0x3c8: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x3c9: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x3ca: PushEmpty(bool)
0x3cb: Stack[-1] = (bool) 0
0x3cc: Push((int) 0)
0x3cd: Pop(1); Push((bool) Stack[-21] > Stack[-1])
0x3ce: IF (Stack[-1] == 0) GOTO 0x3d3; Pop(1)

0x3cf: Pop(0); Push(Stack[-20] * Stack[-20]);
0x3d0: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x3d1: IF (Stack[-1] == 0) GOTO 0x3d3; Pop(1)

0x3d2: Stack[-1] = (bool) 1
0x3d3: IF (Stack[-1] == 0) GOTO 0x3d8; Pop(1)

0x3d4: @ Stop()
0x3d5: Pop(0)
0x3d6: Stack[-22] = (bool) 0
0x3d7: Return(); Pop(16)

0x3d8: Pop(0); Push(Stack[-20] * Stack[-20]);
0x3d9: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x3da: IF (Stack[-1] == 0) GOTO 0x416; Pop(1)

0x3db: @@ GetPFPosition(Stack[-5])
0x3dc: Pop(0)
0x3dd: @ FindPathTo(Stack[-1], Stack[-5])
0x3de: Pop(0)
0x3df: Pop(0); Push(( Stack[-1] != 0 )
0x3e0: IF (Stack[-1] == 0) GOTO 0x3e3; Pop(1)

0x3e1: Stack[-6] = Stack[-1]
0x3e2: Stack[-1] = 0
0x3e3: Pop(0); Push(( Stack[-6] != 0 )
0x3e4: IF (Stack[-1] == 0) GOTO 0x404; Pop(1)

0x3e5: Push(Stack[-7])
0x3e6: IF (Stack[-1] == 0) GOTO 0x3ed; Pop(1)

0x3e7: Stack[-7] = (bool) 0
0x3e8: @ RotatePath(Stack[-6], Stack[-8])
0x3e9: Pop(0)
0x3ea: Pop(0); Push((bool) Stack[-8] == 0)
0x3eb: IF (Stack[-1] == 0) GOTO 0x3ed; Pop(1)

0x3ec: GOTO 0x41c

0x3ed: Push((int) 0)
0x3ee: Push((float)0.3)
0x3ef: @ SetTimer(Stack[-2], Stack[-1])
0x3f0: Pop(2)
0x3f1: PushEmpty(string)
0x3f2: Call2 0x44b

0x3f3: Pop(0)
0x3f4: PushEmpty(string)
0x3f5: Call2 0x44d

0x3f6: Pop(0)
0x3f7: @ FollowPath(Stack[-8], Stack[-20], Stack[-10], Stack[-2], Stack[-1])
0x3f8: Pop(2)
0x3f9: Pop(0); Push((bool) Stack[-8] == 0)
0x3fa: IF (Stack[-1] == 0) GOTO 0x402; Pop(1)

0x3fb: Push( Stack[0 + Tasks[-1].StackPointer] )
0x3fc: IF (Stack[-1] == 0) GOTO 0x400; Pop(1)

0x3fd: Stack[-6] = 0
0x3fe: GOTO 0x41c

0x3ff: GOTO 0x401

0x400: GOTO 0x41b

0x401: GOTO 0x403

0x402: Stack[-6] = 0
0x403: GOTO 0x414

0x404: Push((int) 0)
0x405: @ KillTimer(Stack[-1])
0x406: Pop(1)
0x407: Push((float)0.5)
0x408: @ Sleep(Stack[-1], Stack[-9])
0x409: Pop(1)
0x40a: Pop(0); Push((bool) Stack[-8] == 0)
0x40b: IF (Stack[-1] == 0) GOTO 0x410; Pop(1)

0x40c: Push( Stack[0 + Tasks[-1].StackPointer] )
0x40d: IF (Stack[-1] == 0) GOTO 0x410; Pop(1)

0x40e: Stack[-6] = 0
0x40f: GOTO 0x41c

0x410: Push((int) 0)
0x411: Push((float)0.3)
0x412: @ SetTimer(Stack[-2], Stack[-1])
0x413: Pop(2)
0x414: Stack[-1] = 0
0x415: GOTO 0x41a

0x416: Push((int) 0)
0x417: @ KillTimer(Stack[-1])
0x418: Pop(1)
0x419: GOTO 0x41c

0x41a: Stack[-6] = 0
0x41b: GOTO 0x3bc

0x41c: Stack[-22] = !Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x41d: Return(); Pop(16)

0x41e: PushEmpty()
0x41f: Push((int) 0)
0x420: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x421: IF (Stack[-1] == 0) GOTO 0x423; Pop(1)

0x422: Return(); Pop(0)

0x423: PushEmpty(bool, object)
0x424: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x425: Call2 0x444

0x426: Pop(1)
0x427: Pop(1); Push((bool) Stack[-1] == 0)
0x428: IF (Stack[-1] == 0) GOTO 0x42a; Pop(1)

0x429: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x42a: Push((int) 0)
0x42b: @ KillTimer(Stack[-1])
0x42c: Pop(1)
0x42d: @ Stop()
0x42e: Pop(0)
0x42f: Return(); Pop(0)

0x430: PushEmpty()
0x431: @ RequestClearPath(Stack[-1])
0x432: Pop(0)
0x433: Return(); Pop(0)

0x434: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x435: Push((int) 0)
0x436: @ KillTimer(Stack[-1])
0x437: Pop(1)
0x438: @ Stop()
0x439: Pop(0)
0x43a: Return(); Pop(0)

0x43b: PushEmpty()
0x43c: PushEmpty()
0x43d: Call2 0x38e

0x43e: Pop(0)
0x43f: PushEmpty(object)
0x440: Stack[-1] = Stack[-2]
0x441: Call2 0x759

0x442: Pop(1)
0x443: Return(); Pop(0)

0x444: PushEmpty()
0x445: PushEmpty(bool, object)
0x446: Stack[-1] = Stack[-3]
0x447: Call2 0x57e

0x448: Stack[-4] = Stack[-2]
0x449: Pop(2)
0x44a: Return(); Pop(0)

0x44b: Stack[-1] = "walk"
0x44c: Return(); Pop(0)

0x44d: Stack[-1] = "run"
0x44e: Return(); Pop(0)

0x44f: PushEmpty()
0x450: PushEmpty(object)
0x451: Stack[-1] = Stack[-2]
0x452: Call2 0x466

0x453: Pop(1)
0x454: Push((int) 50)
0x455: Push((int) 40)
0x456: @ SetRTEnvelope(Stack[-2], Stack[-1])
0x457: Pop(2)
0x458: @ Hold()
0x459: Pop(0)
0x45a: GOTO 0x458

0x45b: Return(); Pop(0)

0x45c: PushEmpty(bool, bool)
0x45d: @ IsOverrideActive(Stack[-1])
0x45e: Pop(0)
0x45f: Pop(0); Push((bool) Stack[-1] == 0)
0x460: IF (Stack[-1] == 0) GOTO 0x465; Pop(1)

0x461: PushEmpty(object)
0x462: Stack[-1] = Stack[-4]
0x463: Call2 0x6cf

0x464: Pop(1)
0x465: Return(); Pop(2)

0x466: PushEmpty(cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector, cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector)
0x467: Pop(0); Push((bool) Stack[-21] == 0)
0x468: IF (Stack[-1] == 0) GOTO 0x46e; Pop(1)

0x469: PushEmpty(string)
0x46a: Stack[-1] = "fdie"
0x46b: Call2 0x4c1

0x46c: Pop(1)
0x46d: GOTO 0x4c0

0x46e: @@ GetPosition(Stack[-10])
0x46f: Pop(0)
0x470: @ GetPosition(Stack[-9])
0x471: Pop(0)
0x472: @ GetDirection(Stack[-8])
0x473: Pop(0)
0x474: Stack[-7] = Stack[-9] - Stack[-10]; Pop(0);
0x475: Push(CvectorIndex(Stack[-7], 0))
0x476: Push(CvectorIndex(Stack[-9], 0))
0x477: Pop(2); Push(Stack[-2] * Stack[-1]);
0x478: Push(CvectorIndex(Stack[-8], 2))
0x479: Push(CvectorIndex(Stack[-10], 2))
0x47a: Pop(2); Push(Stack[-2] * Stack[-1]);
0x47b: Pop(2); Push(Stack[-2] + Stack[-1]);
0x47c: Push((int) 0)
0x47d: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x47e: IF (Stack[-1] == 0) GOTO 0x481; Pop(1)

0x47f: Stack[-6] = "fdie"
0x480: GOTO 0x482

0x481: Stack[-6] = "bdie"
0x482: @ RemoveRTEnvelope()
0x483: Pop(0)
0x484: @ SetDeathState()
0x485: Pop(0)
0x486: @ Stop()
0x487: Pop(0)
0x488: @ StopAsync()
0x489: Pop(0)
0x48a: Stack[-5] = Stack[-21]
0x48b: Push("GetScriptProperty")
0x48c: Push((int) 2)
0x48d: Pop(2); Push(IsFuncExist(Stack[-23], Stack[-2], Stack[-1]))
0x48e: IF (Stack[-1] == 0) GOTO 0x49a; Pop(1)

0x48f: Push("Owner")
0x490: @@ HasScriptProperty(Stack[-5], Stack[-1])
0x491: Pop(1)
0x492: Push(Stack[-4])
0x493: IF (Stack[-1] == 0) GOTO 0x49a; Pop(1)

0x494: Push("Owner")
0x495: @@ GetScriptProperty(Stack[-6], Stack[-1])
0x496: Pop(1)
0x497: Pop(0); Push((bool) Stack[-5] == 0)
0x498: IF (Stack[-1] == 0) GOTO 0x49a; Pop(1)

0x499: Stack[-5] = Stack[-21]
0x49a: Push("@GetEyesHeight")
0x49b: Push((int) 1)
0x49c: Pop(2); Push(IsFuncExist(Stack[-7], Stack[-2], Stack[-1]))
0x49d: IF (Stack[-1] == 0) GOTO 0x4a9; Pop(1)

0x49e: @@ GetEyesHeight(Stack[-2])
0x49f: Pop(0)
0x4a0: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x4a1: Push(CvectorIndex(Stack[-1], 1))
0x4a2: Stack[-1] = Stack[-3]
0x4a3: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x4a4: Push("head")
0x4a5: @ LookAsync(Stack[-22], Stack[-1], Stack[-2])
0x4a6: Pop(1)
0x4a7: Stack[-3] = (bool) 1
0x4a8: GOTO 0x4aa

0x4a9: Stack[-3] = (bool) 0
0x4aa: PushEmpty(string)
0x4ab: Stack[-1] = Stack[-7]
0x4ac: Call2 0x648

0x4ad: Pop(1)
0x4ae: Push("all")
0x4af: @ PlayAnimation(Stack[-1], Stack[-7])
0x4b0: Pop(1)
0x4b1: @ WaitForAnimEnd()
0x4b2: Pop(0)
0x4b3: Push(Stack[-3])
0x4b4: IF (Stack[-1] == 0) GOTO 0x4ba; Pop(1)

0x4b5: @ StopAsync()
0x4b6: Pop(0)
0x4b7: Push("head")
0x4b8: @ UnlookAsync(Stack[-1])
0x4b9: Pop(1)
0x4ba: Push("all")
0x4bb: @ LockAnimationEnd(Stack[-1], Stack[-7])
0x4bc: Pop(1)
0x4bd: @ RemoveEnvelope()
0x4be: Pop(0)
0x4bf: Stack[-5] = 0
0x4c0: Return(); Pop(20)

0x4c1: PushEmpty()
0x4c2: @ RemoveRTEnvelope()
0x4c3: Pop(0)
0x4c4: @ SetDeathState()
0x4c5: Pop(0)
0x4c6: @ Stop()
0x4c7: Pop(0)
0x4c8: @ StopAsync()
0x4c9: Pop(0)
0x4ca: @ StopSecondaryAnimation()
0x4cb: Pop(0)
0x4cc: PushEmpty(string)
0x4cd: Stack[-1] = Stack[-2]
0x4ce: Call2 0x648

0x4cf: Pop(1)
0x4d0: Push("all")
0x4d1: @ PlayAnimation(Stack[-1], Stack[-2])
0x4d2: Pop(1)
0x4d3: @ WaitForAnimEnd()
0x4d4: Pop(0)
0x4d5: Push("all")
0x4d6: @ LockAnimationEnd(Stack[-1], Stack[-2])
0x4d7: Pop(1)
0x4d8: @ RemoveEnvelope()
0x4d9: Pop(0)
0x4da: Return(); Pop(0)

0x4db: PushEmpty()
0x4dc: Return(); Pop(0)

0x4dd: PushEmpty()
0x4de: Return(); Pop(0)

0x4df: PushEmpty()
0x4e0: Return(); Pop(0)

0x4e1: PushEmpty()
0x4e2: Push((int) 2)
0x4e3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4e4: IF (Stack[-1] == 0) GOTO 0x4e8; Pop(1)

0x4e5: Stack[-2] = "fire"
0x4e6: Return(); Pop(0)

0x4e7: GOTO 0x4ed

0x4e8: Push((int) 1)
0x4e9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4ea: IF (Stack[-1] == 0) GOTO 0x4ed; Pop(1)

0x4eb: Stack[-2] = "bullet"
0x4ec: Return(); Pop(0)

0x4ed: Stack[-2] = "phys"
0x4ee: Return(); Pop(0)

0x4ef: PushEmpty(cvector, cvector, cvector, cvector)
0x4f0: @ GetPosition(Stack[-2])
0x4f1: Pop(0)
0x4f2: @@ GetPosition(Stack[-1])
0x4f3: Pop(0)
0x4f4: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x4f5: Return(); Pop(4)

0x4f6: PushEmpty(bool, bool)
0x4f7: @ IsPlayerActor(Stack[-3], Stack[-1])
0x4f8: Pop(0)
0x4f9: Stack[-4] = Stack[-1]
0x4fa: Return(); Pop(2)

0x4fb: PushEmpty(bool, bool)
0x4fc: Push("HasProperty")
0x4fd: Push((int) 2)
0x4fe: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x4ff: Pop(1); Push((bool) Stack[-1] == 0)
0x500: IF (Stack[-1] == 0) GOTO 0x503; Pop(1)

0x501: Stack[-5] = (bool) 0
0x502: Return(); Pop(2)

0x503: @@ HasProperty(Stack[-3], Stack[-1])
0x504: Pop(0)
0x505: Stack[-5] = Stack[-1]
0x506: Return(); Pop(2)

0x507: PushEmpty(string, string)
0x508: @ GetProperty(Stack[-3], Stack[-1])
0x509: Pop(0)
0x50a: Stack[-4] = Stack[-1]
0x50b: Return(); Pop(2)

0x50c: PushEmpty(int, string, int, float, float, float, int, string, int, float, float, float)
0x50d: PushEmpty(bool, object, string)
0x50e: Stack[-2] = Stack[-18]
0x50f: Stack[-1] = "health"
0x510: Call2 0x4fb

0x511: Pop(2)
0x512: Pop(1); Push((bool) Stack[-1] == 0)
0x513: IF (Stack[-1] == 0) GOTO 0x516; Pop(1)

0x514: Stack[-16] = (float) 0.0
0x515: Return(); Pop(12)

0x516: PushEmpty(bool, object, string)
0x517: Stack[-2] = Stack[-18]
0x518: Stack[-1] = "armor"
0x519: Call2 0x4fb

0x51a: Pop(2)
0x51b: Pop(1); Push((bool) Stack[-1] == 0)
0x51c: IF (Stack[-1] == 0) GOTO 0x51f; Pop(1)

0x51d: Stack[-6] = (int) 0
0x51e: GOTO 0x522

0x51f: Push("armor")
0x520: @@ GetProperty(Stack[-1], Stack[-7])
0x521: Pop(1)
0x522: Push("armor_")
0x523: PushEmpty(string, int)
0x524: Stack[-1] = Stack[-16]
0x525: Call2 0x4e1

0x526: Pop(1)
0x527: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x528: PushEmpty(bool, object, string)
0x529: Stack[-2] = Stack[-18]
0x52a: Stack[-1] = Stack[-8]
0x52b: Call2 0x4fb

0x52c: Pop(2)
0x52d: Pop(1); Push((bool) Stack[-1] == 0)
0x52e: IF (Stack[-1] == 0) GOTO 0x531; Pop(1)

0x52f: Stack[-4] = (int) 0
0x530: GOTO 0x533

0x531: @@ GetProperty(Stack[-5], Stack[-4])
0x532: Pop(0)
0x533: PushEmpty(float, float, float)
0x534: Pop(0); Push(Stack[-9] + Stack[-7]);
0x535: Push((float)100.0)
0x536: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0x537: Stack[-1] = (int) 1
0x538: Call2 0x681

0x539: Stack[-6] = Stack[-3]
0x53a: Pop(3)
0x53b: Push("health")
0x53c: @@ GetProperty(Stack[-1], Stack[-3])
0x53d: Pop(1)
0x53e: Push((int) 1)
0x53f: Pop(1); Push(Stack[-1] - Stack[-4]);
0x540: Stack[-2] = Stack[-15] * Stack[-1]; Pop(1);
0x541: Push("health")
0x542: PushEmpty(float, float, float, float)
0x543: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0x544: Stack[-2] = (int) 0
0x545: Stack[-1] = (int) 1
0x546: Call2 0x688

0x547: Pop(3)
0x548: @@ SetProperty(Stack[-2], Stack[-1])
0x549: Pop(2)
0x54a: PushEmpty(bool, object)
0x54b: Stack[-1] = Stack[-17]
0x54c: Call2 0x4f6

0x54d: Pop(1)
0x54e: IF (Stack[-1] == 0) GOTO 0x553; Pop(1)

0x54f: PushEmpty(float)
0x550: Stack[-1] = -Stack[-2]; Pop(0);
0x551: Call2 0x698

0x552: Pop(1)
0x553: Stack[-16] = Stack[-1]
0x554: Return(); Pop(12)

0x555: PushEmpty(bool, bool)
0x556: @@ IsDead(Stack[-1])
0x557: Pop(0)
0x558: Stack[-4] = Stack[-1]
0x559: Return(); Pop(2)

0x55a: PushEmpty(object, object, object, object)
0x55b: Pop(0); Push((bool) Stack[-5] == 0)
0x55c: IF (Stack[-1] == 0) GOTO 0x55f; Pop(1)

0x55d: Stack[-6] = (bool) 0
0x55e: Return(); Pop(4)

0x55f: PushEmpty(bool)
0x560: Stack[-1] = (bool) 0
0x561: Push("IsDead")
0x562: Push((int) 1)
0x563: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x564: IF (Stack[-1] == 0) GOTO 0x56b; Pop(1)

0x565: PushEmpty(bool, object)
0x566: Stack[-1] = Stack[-8]
0x567: Call2 0x555

0x568: Pop(1)
0x569: IF (Stack[-1] == 0) GOTO 0x56b; Pop(1)

0x56a: Stack[-1] = (bool) 1
0x56b: IF (Stack[-1] == 0) GOTO 0x56e; Pop(1)

0x56c: Stack[-6] = (bool) 0
0x56d: Return(); Pop(4)

0x56e: @ GetScene(Stack[-2])
0x56f: Pop(0)
0x570: Pop(0); Push((bool) Stack[-2] == 0)
0x571: IF (Stack[-1] == 0) GOTO 0x574; Pop(1)

0x572: Stack[-6] = (bool) 0
0x573: Return(); Pop(4)

0x574: @@ GetScene(Stack[-1])
0x575: Pop(0)
0x576: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x577: IF (Stack[-1] == 0) GOTO 0x57a; Pop(1)

0x578: Stack[-6] = (bool) 0
0x579: Return(); Pop(4)

0x57a: Stack[-6] = (bool) 1
0x57b: Return(); Pop(4)

0x57c: Stack[-1] = 0
0x57d: Stack[-2] = 0
0x57e: PushEmpty(int, int)
0x57f: PushEmpty(bool, object)
0x580: Stack[-1] = Stack[-5]
0x581: Call2 0x55a

0x582: Pop(1)
0x583: Pop(1); Push((bool) Stack[-1] == 0)
0x584: IF (Stack[-1] == 0) GOTO 0x587; Pop(1)

0x585: Stack[-4] = (bool) 0
0x586: Return(); Pop(2)

0x587: PushEmpty(bool, object, string)
0x588: Stack[-2] = Stack[-6]
0x589: Stack[-1] = "noaccess"
0x58a: Call2 0x4fb

0x58b: Pop(2)
0x58c: Pop(1); Push((bool) Stack[-1] == 0)
0x58d: IF (Stack[-1] == 0) GOTO 0x590; Pop(1)

0x58e: Stack[-4] = (bool) 1
0x58f: Return(); Pop(2)

0x590: Push("noaccess")
0x591: @@ GetProperty(Stack[-1], Stack[-2])
0x592: Pop(1)
0x593: Push((int) 0)
0x594: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x595: Return(); Pop(2)

0x596: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x597: @ GetPosition(Stack[-3])
0x598: Pop(0)
0x599: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x59a: Push(CvectorIndex(Stack[-2], 0))
0x59b: Push(CvectorIndex(Stack[-3], 2))
0x59c: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x59d: Pop(2)
0x59e: Stack[-8] = Stack[-1]
0x59f: Return(); Pop(6)

0x5a0: PushEmpty(bool, int, cvector, cvector, cvector, cvector, string, bool, int, cvector, cvector, cvector, cvector, string)
0x5a1: Pop(0); Push((bool) Stack[-15] == 0)
0x5a2: IF (Stack[-1] == 0) GOTO 0x5a4; Pop(1)

0x5a3: Return(); Pop(14)

0x5a4: @ IsDead(Stack[-7])
0x5a5: Pop(0)
0x5a6: Push(Stack[-7])
0x5a7: IF (Stack[-1] == 0) GOTO 0x5a9; Pop(1)

0x5a8: Return(); Pop(14)

0x5a9: @ GetSecondaryAnimationType(Stack[-6])
0x5aa: Pop(0)
0x5ab: Push((int) 0)
0x5ac: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x5ad: IF (Stack[-1] == 0) GOTO 0x5af; Pop(1)

0x5ae: Return(); Pop(14)

0x5af: @@ GetPosition(Stack[-5])
0x5b0: Pop(0)
0x5b1: @ GetPosition(Stack[-4])
0x5b2: Pop(0)
0x5b3: @ GetDirection(Stack[-3])
0x5b4: Pop(0)
0x5b5: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0x5b6: Push(CvectorIndex(Stack[-2], 0))
0x5b7: Push(CvectorIndex(Stack[-4], 0))
0x5b8: Pop(2); Push(Stack[-2] * Stack[-1]);
0x5b9: Push(CvectorIndex(Stack[-3], 2))
0x5ba: Push(CvectorIndex(Stack[-5], 2))
0x5bb: Pop(2); Push(Stack[-2] * Stack[-1]);
0x5bc: Pop(2); Push(Stack[-2] + Stack[-1]);
0x5bd: Push((int) 0)
0x5be: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x5bf: IF (Stack[-1] == 0) GOTO 0x5c2; Pop(1)

0x5c0: Stack[-1] = "fhit"
0x5c1: GOTO 0x5c3

0x5c2: Stack[-1] = "bhit"
0x5c3: Push("hit_react")
0x5c4: Push("1")
0x5c5: Pop(1); Push(Stack[-3] + Stack[-1]);
0x5c6: Push("2")
0x5c7: Pop(1); Push(Stack[-4] + Stack[-1]);
0x5c8: Push((int) -10)
0x5c9: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x5ca: Pop(4)
0x5cb: Return(); Pop(14)

0x5cc: PushEmpty(cvector, object, int, bool, cvector, cvector, int, int, cvector, cvector, object, int, bool, cvector, cvector, int, int, cvector)
0x5cd: PushEmpty(bool)
0x5ce: Stack[-1] = (bool) 0
0x5cf: PushEmpty(bool)
0x5d0: Stack[-1] = (bool) 0
0x5d1: Push(Stack[-23])
0x5d2: IF (Stack[-1] == 0) GOTO 0x5d7; Pop(1)

0x5d3: Push((int) 4)
0x5d4: Pop(1); Push((bool) Stack[-23] != Stack[-1])
0x5d5: IF (Stack[-1] == 0) GOTO 0x5d7; Pop(1)

0x5d6: Stack[-1] = (bool) 1
0x5d7: IF (Stack[-1] == 0) GOTO 0x5dc; Pop(1)

0x5d8: Push((int) 5)
0x5d9: Pop(1); Push((bool) Stack[-22] != Stack[-1])
0x5da: IF (Stack[-1] == 0) GOTO 0x5dc; Pop(1)

0x5db: Stack[-1] = (bool) 1
0x5dc: IF (Stack[-1] == 0) GOTO 0x60b; Pop(1)

0x5dd: PushEmpty(cvector, cvector)
0x5de: PushEmpty(cvector, object)
0x5df: Stack[-1] = Stack[-25]
0x5e0: Call2 0x4ef

0x5e1: Stack[-3] = Stack[-2]
0x5e2: Pop(2)
0x5e3: Call2 0x677

0x5e4: Stack[-11] = Stack[-2]
0x5e5: Pop(2)
0x5e6: @ CreateVectorVector(Stack[-8])
0x5e7: Pop(0)
0x5e8: Stack[-7] = (int) 1
0x5e9: Push("hit")
0x5ea: Pop(1); Push(Stack[-1] + Stack[-8]);
0x5eb: @ GetGeometryLocator(Stack[-1], Stack[-7], Stack[-6], Stack[-5])
0x5ec: Pop(1)
0x5ed: Pop(0); Push((bool) Stack[-6] == 0)
0x5ee: IF (Stack[-1] == 0) GOTO 0x5f0; Pop(1)

0x5ef: GOTO 0x5f9

0x5f0: Pop(0); Push(Stack[-4] | Stack[-9]);
0x5f1: Push((float)0.70711)
0x5f2: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x5f3: IF (Stack[-1] == 0) GOTO 0x5f6; Pop(1)

0x5f4: @@ add(Stack[-5])
0x5f5: Pop(0)
0x5f6: Push((int) 1)
0x5f7: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x5f8: GOTO 0x5e9

0x5f9: @@ size(Stack[-3])
0x5fa: Pop(0)
0x5fb: Push(Stack[-3])
0x5fc: IF (Stack[-1] == 0) GOTO 0x60a; Pop(1)

0x5fd: @ irand(Stack[-2], Stack[-3])
0x5fe: Pop(0)
0x5ff: @@ get(Stack[-1], Stack[-2])
0x600: Pop(0)
0x601: PushEmpty(object, int, float, cvector, cvector)
0x602: Stack[-5] = Stack[-26]
0x603: Stack[-4] = Stack[-25]
0x604: Stack[-3] = Stack[-24]
0x605: Stack[-2] = Stack[-6]
0x606: Stack[-1] = -Stack[-14]; Pop(0);
0x607: Call2 0x610

0x608: Pop(5)
0x609: Return(); Pop(18)

0x60a: Stack[-8] = 0
0x60b: PushEmpty(object)
0x60c: Stack[-1] = Stack[-22]
0x60d: Call2 0x5a0

0x60e: Pop(1)
0x60f: Return(); Pop(18)

0x610: PushEmpty(object, object, object, object)
0x611: @ GetScene(Stack[-2])
0x612: Pop(0)
0x613: Push("scripted")
0x614: Push("blood_dir.xml")
0x615: @ AddActorByType(Stack[-3], Stack[-2], Stack[-4], Stack[-8], Stack[-7], Stack[-1])
0x616: Pop(2)
0x617: PushEmpty(object)
0x618: Stack[-1] = Stack[-10]
0x619: Call2 0x5a0

0x61a: Pop(1)
0x61b: Return(); Pop(4)

0x61c: Stack[-1] = 0
0x61d: Stack[-2] = 0
0x61e: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x61f: @@ GetPosition(Stack[-3])
0x620: Pop(0)
0x621: @ GetPosition(Stack[-2])
0x622: Pop(0)
0x623: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0x624: Push(CvectorIndex(Stack[-1], 0))
0x625: Push(CvectorIndex(Stack[-2], 2))
0x626: @ RotateAsync(Stack[-2], Stack[-1])
0x627: Pop(2)
0x628: Return(); Pop(6)

0x629: PushEmpty(bool, bool)
0x62a: @ IsLoaded(Stack[-1])
0x62b: Pop(0)
0x62c: Stack[-3] = Stack[-1]
0x62d: Return(); Pop(2)

0x62e: PushEmpty(float, cvector, float, cvector)
0x62f: @@ GetEyesHeight(Stack[-2])
0x630: Pop(0)
0x631: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x632: Push(CvectorIndex(Stack[-1], 1))
0x633: Stack[-1] = Stack[-3]
0x634: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x635: Push("head")
0x636: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x637: Pop(1)
0x638: Return(); Pop(4)

0x639: PushEmpty(int, bool, int, bool)
0x63a: PushEmpty(bool, int, int)
0x63b: Stack[-2] = Stack[-10]
0x63c: Stack[-1] = Stack[-9]
0x63d: Call2 0x693

0x63e: Pop(2)
0x63f: IF (Stack[-1] == 0) GOTO 0x647; Pop(1)

0x640: @ irand(Stack[-2], Stack[-5])
0x641: Pop(0)
0x642: Push((int) 0)
0x643: Push((int) 1)
0x644: Pop(1); Push(Stack[-4] + Stack[-1]);
0x645: @ AddItem(Stack[-3], Stack[-10], Stack[-2], Stack[-1])
0x646: Pop(2)
0x647: Return(); Pop(4)

0x648: PushEmpty(bool, int, bool, int, bool, float, cvector, cvector, bool, int, bool, int, bool, float, cvector, cvector)
0x649: @ IsExisting3DSound(Stack[-8], Stack[-17])
0x64a: Pop(0)
0x64b: Pop(0); Push((bool) Stack[-8] == 0)
0x64c: IF (Stack[-1] == 0) GOTO 0x661; Pop(1)

0x64d: Stack[-7] = (int) 0
0x64e: Push((int) 1)
0x64f: Pop(1); Push(Stack[-8] + Stack[-1]);
0x650: Pop(1); Push(Stack[-18] + Stack[-1]);
0x651: @ IsExisting3DSound(Stack[-7], Stack[-1])
0x652: Pop(1)
0x653: Pop(0); Push((bool) Stack[-6] == 0)
0x654: IF (Stack[-1] == 0) GOTO 0x656; Pop(1)

0x655: GOTO 0x659

0x656: Push((int) 1)
0x657: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x658: GOTO 0x64e

0x659: Pop(0); Push((bool) Stack[-7] == 0)
0x65a: IF (Stack[-1] == 0) GOTO 0x65c; Pop(1)

0x65b: Return(); Pop(16)

0x65c: @ irand(Stack[-5], Stack[-7])
0x65d: Pop(0)
0x65e: Push((int) 1)
0x65f: Pop(1); Push(Stack[-6] + Stack[-1]);
0x660: Stack[-18] = Stack[-18] + Stack[-1]; Pop(1);
0x661: @ Is3DSoundLoaded(Stack[-4], Stack[-17])
0x662: Pop(0)
0x663: Push(Stack[-4])
0x664: IF (Stack[-1] == 0) GOTO 0x670; Pop(1)

0x665: @ GetEyesHeight(Stack[-3])
0x666: Pop(0)
0x667: @ GetDirection(Stack[-2])
0x668: Pop(0)
0x669: Push((int) 50)
0x66a: Stack[-2] = Stack[-3] * Stack[-1]; Pop(1);
0x66b: Push(CvectorIndex(Stack[-1], 1))
0x66c: Stack[-1] = Stack[-1] + Stack[-4]; Pop(0);
0x66d: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x66e: @ PlayGlobalSound(Stack[-17], Stack[-1])
0x66f: Pop(0)
0x670: Return(); Pop(16)

0x671: PushEmpty(object, object)
0x672: @ self(Stack[-1])
0x673: Pop(0)
0x674: Stack[-3] = Stack[-1]
0x675: Return(); Pop(2)

0x676: Stack[-1] = 0
0x677: PushEmpty(float, float)
0x678: Pop(0); Push(Stack[-3] | Stack[-3]);
0x679: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x67a: Push((float)0.0)
0x67b: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x67c: IF (Stack[-1] == 0) GOTO 0x67f; Pop(1)

0x67d: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x67e: Return(); Pop(2)

0x67f: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x680: Return(); Pop(2)

0x681: PushEmpty()
0x682: Pop(0); Push((bool) Stack[-2] < Stack[-1])
0x683: IF (Stack[-1] == 0) GOTO 0x686; Pop(1)

0x684: Stack[-3] = Stack[-2]
0x685: GOTO 0x687

0x686: Stack[-3] = Stack[-1]
0x687: Return(); Pop(0)

0x688: PushEmpty()
0x689: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x68a: IF (Stack[-1] == 0) GOTO 0x68d; Pop(1)

0x68b: Stack[-4] = Stack[-2]
0x68c: Return(); Pop(0)

0x68d: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x68e: IF (Stack[-1] == 0) GOTO 0x691; Pop(1)

0x68f: Stack[-4] = Stack[-1]
0x690: Return(); Pop(0)

0x691: Stack[-4] = Stack[-3]
0x692: Return(); Pop(0)

0x693: PushEmpty(int, int)
0x694: @ irand(Stack[-1], Stack[-3])
0x695: Pop(0)
0x696: Stack[-5] = Stack[-1] < Stack[-4]; Pop(0);
0x697: Return(); Pop(2)

0x698: PushEmpty(object, object)
0x699: @ CreateFloatVector(Stack[-1])
0x69a: Pop(0)
0x69b: @@ add(Stack[-3])
0x69c: Pop(0)
0x69d: Push((int) 0)
0x69e: Pop(1); Push((bool) Stack[-4] < Stack[-1])
0x69f: IF (Stack[-1] == 0) GOTO 0x6a4; Pop(1)

0x6a0: Push((float)0.7)
0x6a1: Push((int) 500)
0x6a2: @ RumblePlay(Stack[-2], Stack[-1])
0x6a3: Pop(2)
0x6a4: Push((int) 15)
0x6a5: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x6a6: Pop(1)
0x6a7: Return(); Pop(2)

0x6a8: Stack[-1] = 0
0x6a9: PushEmpty(object, object)
0x6aa: @ FindActor(Stack[-1], Stack[-4])
0x6ab: Pop(0)
0x6ac: Pop(0); Push((bool) Stack[-1] == 0)
0x6ad: IF (Stack[-1] == 0) GOTO 0x6b0; Pop(1)

0x6ae: Stack[-5] = (bool) 0
0x6af: Return(); Pop(2)

0x6b0: @ Trigger(Stack[-1], Stack[-3])
0x6b1: Pop(0)
0x6b2: Stack[-5] = (bool) 1
0x6b3: Return(); Pop(2)

0x6b4: Stack[-1] = 0
0x6b5: PushEmpty(bool, bool)
0x6b6: @ IsPlayerActor(Stack[-3], Stack[-1])
0x6b7: Pop(0)
0x6b8: Push(Stack[-1])
0x6b9: IF (Stack[-1] == 0) GOTO 0x6bd; Pop(1)

0x6ba: Push("attack")
0x6bb: @ PlayGlobalMusic(Stack[-1])
0x6bc: Pop(1)
0x6bd: Return(); Pop(2)

0x6be: PushEmpty(object, object)
0x6bf: @ GetScene(Stack[-1])
0x6c0: Pop(0)
0x6c1: Push("battle")
0x6c2: PushEmpty(object)
0x6c3: Call2 0x671

0x6c4: Pop(0)
0x6c5: @ BroadcastMessage(Stack[-2], Stack[-1], Stack[-3])
0x6c6: Pop(2)
0x6c7: Return(); Pop(2)

0x6c8: Stack[-1] = 0
0x6c9: PushEmpty(int, int)
0x6ca: Push("branch")
0x6cb: @ GetVariable(Stack[-1], Stack[-2])
0x6cc: Pop(1)
0x6cd: Stack[-3] = Stack[-1]
0x6ce: Return(); Pop(2)

0x6cf: PushEmpty()
0x6d0: PushEmpty(int)
0x6d1: Call2 0x6c9

0x6d2: Pop(0)
0x6d3: Push((int) 1)
0x6d4: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x6d5: IF (Stack[-1] == 0) GOTO 0x6d9; Pop(1)

0x6d6: @ WorkWithCorpse(Stack[-1])
0x6d7: Pop(0)
0x6d8: GOTO 0x6db

0x6d9: @ Barter(Stack[-1])
0x6da: Pop(0)
0x6db: Return(); Pop(0)

0x6dc: PushEmpty(object, int, bool, object, int, bool)
0x6dd: @ CreateInvItem(Stack[-3])
0x6de: Pop(0)
0x6df: @@ SetItemName(Stack[-7])
0x6e0: Pop(0)
0x6e1: Push("Organ")
0x6e2: Push((int) 1)
0x6e3: @@ SetProperty(Stack[-2], Stack[-1])
0x6e4: Pop(2)
0x6e5: @@ GetItemID(Stack[-2])
0x6e6: Pop(0)
0x6e7: Push((int) 0)
0x6e8: Push((int) 1)
0x6e9: @ AddItem(Stack[-3], Stack[-5], Stack[-2], Stack[-1])
0x6ea: Pop(2)
0x6eb: Return(); Pop(6)

0x6ec: Stack[-3] = 0
0x6ed: PushEmpty(int)
0x6ee: Call2 0x6c9

0x6ef: Pop(0)
0x6f0: Push((int) 1)
0x6f1: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x6f2: IF (Stack[-1] == 0) GOTO 0x6f4; Pop(1)

0x6f3: Return(); Pop(0)

0x6f4: PushEmpty(string)
0x6f5: Stack[-1] = "liver"
0x6f6: Call2 0x6dc

0x6f7: Pop(1)
0x6f8: PushEmpty(string)
0x6f9: Stack[-1] = "kidney"
0x6fa: Call2 0x6dc

0x6fb: Pop(1)
0x6fc: PushEmpty(string)
0x6fd: Stack[-1] = "heart"
0x6fe: Call2 0x6dc

0x6ff: Pop(1)
0x700: PushEmpty(string)
0x701: Stack[-1] = "blood"
0x702: Call2 0x6dc

0x703: Pop(1)
0x704: Return(); Pop(0)

0x705: PushEmpty(object)
0x706: Call2 0x671

0x707: Pop(0)
0x708: @ RemoveActor(Stack[-1])
0x709: Pop(1)
0x70a: @ Hold()
0x70b: Pop(0)
0x70c: Return(); Pop(0)

0x70d: PushEmpty(bool, bool)
0x70e: PushEmpty(bool, string, string)
0x70f: Stack[-2] = "quest_b4_01"
0x710: Stack[-1] = "patrol_dead"
0x711: Call2 0x6a9

0x712: Pop(3)
0x713: Push("revolver_ammo")
0x714: Push((int) 0)
0x715: Push((int) 4)
0x716: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x717: Pop(3)
0x718: Push("meradorm")
0x719: Push((int) 0)
0x71a: Push((int) 1)
0x71b: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x71c: Pop(3)
0x71d: Push("morfin")
0x71e: Push((int) 0)
0x71f: Push((int) 1)
0x720: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x721: Pop(3)
0x722: PushEmpty(string, int, int, int)
0x723: Stack[-4] = "alpha_pills"
0x724: Stack[-3] = (int) 2
0x725: Stack[-2] = (int) 3
0x726: Stack[-1] = (int) 5
0x727: Call2 0x639

0x728: Pop(4)
0x729: PushEmpty(string, int, int, int)
0x72a: Stack[-4] = "beta_pills"
0x72b: Stack[-3] = (int) 2
0x72c: Stack[-2] = (int) 3
0x72d: Stack[-1] = (int) 4
0x72e: Call2 0x639

0x72f: Pop(4)
0x730: PushEmpty()
0x731: Call2 0x6ed

0x732: Pop(0)
0x733: PushEmpty(object)
0x734: Stack[-1] = Stack[-4]
0x735: Push(-1, 0); TaskCall(4)
0x736: Call2 0x44f

0x737: Pop(-1, 0); TaskReturn
0x738: Pop(1)
0x739: Return(); Pop(2)

0x73a: PushEmpty()
0x73b: PushEmpty(object, int, float)
0x73c: Stack[-3] = Stack[-7]
0x73d: Stack[-2] = Stack[-6]
0x73e: Stack[-1] = Stack[-5]
0x73f: Call2 0x5cc

0x740: Pop(3)
0x741: Return(); Pop(0)

0x742: PushEmpty()
0x743: PushEmpty(object, int, float, cvector, cvector)
0x744: Stack[-5] = Stack[-11]
0x745: Stack[-4] = Stack[-10]
0x746: Stack[-3] = Stack[-9]
0x747: Stack[-2] = Stack[-7]
0x748: Stack[-1] = Stack[-6]
0x749: Call2 0x610

0x74a: Pop(5)
0x74b: Return(); Pop(0)

0x74c: PushEmpty(float, float)
0x74d: Push("health")
0x74e: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x74f: IF (Stack[-1] == 0) GOTO 0x758; Pop(1)

0x750: Push("health")
0x751: @ GetProperty(Stack[-1], Stack[-2])
0x752: Pop(1)
0x753: Push((int) 0)
0x754: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x755: IF (Stack[-1] == 0) GOTO 0x758; Pop(1)

0x756: @ SignalDeath(Stack[-4])
0x757: Pop(0)
0x758: Return(); Pop(2)

0x759: PushEmpty()
0x75a: PushEmpty(object)
0x75b: Stack[-1] = Stack[-2]
0x75c: Call2 0x70d

0x75d: Pop(1)
0x75e: Return(); Pop(0)

