GlobalVarCount = 9
	G_VAR_0 bool 
	G_VAR_1 int 
	G_VAR_2 int 
	G_VAR_3 int 
	G_VAR_4 int 
	G_VAR_5 object 
	G_VAR_6 object 
	G_VAR_7 object 
	G_VAR_8 object 

Strings:
	FSM Init failed
	pt_b9q03_bonfire
	_patrol
	GetLocator
	GetPosition
	GetDirection
	b9q03_corpse
	Unknown FSM state
	b9q03_helpme
	helpme timer
	@GetAttackDistance
	GetAttackDistance
	attack
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
	walk
	run
	hunt
	coffee
	tvirin
	silver_ring
	gold_ring
	bracelet
	watch
	beads
	ear_ring
	feromicin
	fdie
	bdie
	GetScriptProperty
	Owner
	HasScriptProperty
	GetScriptProperty
	@GetEyesHeight
	GetEyesHeight
	cleanup
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
	AddItem
	idle
	branch
	SetItemName
	Organ
	GetItemID
	liver
	kidney
	heart
	blood
	player_shot
	b9q03
	Bonfire index: 
	Bonfire pantrol point count: 
	changing state to c_iStateWaitForLoad
	changing state to c_iStateHeatHands
	changing state to c_iStateIdle
	changing state to c_iStatePatrol
	changing state to c_iStateAware
	changing state to c_iStateSearchEnemy
	changing state to c_iStateHearEnemy
	changing state to c_iStateAttack
	b9q03HandHeatLock
	b9q03PatrolLock

Import:
	GetPosition (1 args)
	Trace (1 args)
	RemoveActor (1 args)
	GetDirection (1 args)
	GetMainOutdoorScene (1 args)
	irand (2 args)
	BroadcastMessage (3 args)
	sync (0 args)
	SetTimer (2 args)
	KillTimer (1 args)
	IsPlayerActor (2 args)
	PlayGlobalMusic (1 args)
	GetPFPosition (1 args)
	CanReachByPF (2 args)
	PlayAnimation (2 args)
	WaitForAnimEnd (0 args)
	StopAsync (0 args)
	rand (1 args)
	Face (1 args)
	SetSpeed (1 args)
	Stop (0 args)
	Sleep (1 args)
	StopAnimation (0 args)
	StopGroup0 (0 args)
	HasAnimation (3 args)
	IsExisting3DSound (2 args)
	GetAnimationOffset (3 args)
	GetVictim (2 args)
	ReportAttack (1 args)
	ReportHit (4 args)
	SetAttackState (1 args)
	IsAnimationPlaying (1 args)
	GetScene (1 args)
	FindDirLength (3 args)
	Speak (1 args)
	CanSee (2 args)
	SendPlayerEnemy (2 args)
	UnlookAsync (1 args)
	FindPathTo (2 args)
	RotatePath (2 args)
	FollowPath (5 args)
	Sleep (2 args)
	RequestClearPath (1 args)
	WaitForAnimEnd (1 args)
	rand (2 args)
	ResetAAS (0 args)
	RotateAsync (2 args)
	Hold (0 args)
	SetRTEnvelope (2 args)
	IsOverrideActive (1 args)
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
	IsLoaded (1 args)
	Is3DSoundLoaded (2 args)
	GetEyesHeight (1 args)
	PlayGlobalSound (2 args)
	self (1 args)
	CreateFloatVector (1 args)
	SendWorldWndMessage (2 args)
	GetVariable (2 args)
	WorkWithCorpse (1 args)
	Barter (1 args)
	CreateInvItem (1 args)
	AddItem (4 args)
	SetVariable (2 args)
	GetProperty (2 args)
	SignalDeath (1 args)

RunOp = 0x8
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (cvector, cvector) Params = 0
	GTASK_1 Vars = (object, int, int, bool, bool, float, int, object) Params = 1
		EVENT_7 Op = 0x1d4 Vars = (int)
		EVENT_1 Op = 0x1e6 Vars = (object)
		EVENT_6 Op = 0x1fb Vars = ()
	GTASK_2 Vars = (bool, object, bool, object) Params = 6
		EVENT_7 Op = 0x4dd Vars = (int)
		EVENT_6 Op = 0x4f4 Vars = ()
		EVENT_1 Op = 0x548 Vars = (object)
		EVENT_2 Op = 0x557 Vars = (object)
		EVENT_10 Op = 0x5dd Vars = (object)
		EVENT_41 Op = 0x5e8 Vars = (object)
	GTASK_3 Vars = (bool, object, bool) Params = 2
		EVENT_6 Op = 0x623 Vars = ()
		EVENT_42 Op = 0x62c Vars = (object, string)
		EVENT_1 Op = 0x637 Vars = (object)
		EVENT_3 Op = 0x642 Vars = (object)
		EVENT_17 Op = 0x64d Vars = (object)
		EVENT_7 Op = 0x65a Vars = (int)
		EVENT_10 Op = 0x6e0 Vars = (object)
		EVENT_41 Op = 0x6eb Vars = (object)
	GTASK_4  Params = 0
		EVENT_6 Op = 0x703 Vars = ()
		EVENT_42 Op = 0x70b Vars = (object, string)
		EVENT_1 Op = 0x716 Vars = (object)
		EVENT_3 Op = 0x720 Vars = (object)
		EVENT_17 Op = 0x72a Vars = (object)
	GTASK_5 Vars = (bool) Params = 4
		EVENT_6 Op = 0x79c Vars = ()
		EVENT_42 Op = 0x7a4 Vars = (object, string)
		EVENT_1 Op = 0x7af Vars = (object)
		EVENT_3 Op = 0x7b9 Vars = (object)
		EVENT_17 Op = 0x7c3 Vars = (object)
		EVENT_7 Op = 0x838 Vars = (int)
		EVENT_10 Op = 0x849 Vars = (object)
		EVENT_41 Op = 0x854 Vars = (object)
	GTASK_6 Vars = (bool) Params = 1
		EVENT_42 Op = 0x878 Vars = (object, string)
		EVENT_1 Op = 0x883 Vars = (object)
		EVENT_3 Op = 0x88d Vars = (object)
		EVENT_17 Op = 0x897 Vars = (object)
		EVENT_6 Op = 0x8b3 Vars = ()
		EVENT_7 Op = 0x924 Vars = (int)
		EVENT_10 Op = 0x935 Vars = (object)
		EVENT_41 Op = 0x940 Vars = (object)
	GTASK_7 Vars = (bool) Params = 1
		EVENT_6 Op = 0x95c Vars = ()
		EVENT_42 Op = 0x965 Vars = (object, string)
		EVENT_1 Op = 0x971 Vars = (object)
		EVENT_3 Op = 0x97c Vars = (object)
		EVENT_17 Op = 0x987 Vars = (object)
	GTASK_8  Params = 1
		EVENT_6 Op = 0xa20 Vars = ()
		EVENT_0 Op = 0xa37 Vars = (object)
		EVENT_22 Op = 0xab6 Vars = (object, int, float, float)
		EVENT_16 Op = 0xab8 Vars = (object, string)
		EVENT_41 Op = 0xaba Vars = (object)
	GTASK_9  Params = 0
		EVENT_26 Op = 0xace Vars = (string)
		EVENT_5 Op = 0xada Vars = ()

Events:
EVENT_26 Op = 0xcef Vars = (string)
EVENT_22 Op = 0xe97 Vars = (object, int, float, float)
EVENT_43 Op = 0xe9f Vars = (object, int, float, float, cvector, cvector)
EVENT_16 Op = 0xea9 Vars = (object, string)
EVENT_41 Op = 0xeb6 Vars = (object)

0x0: PushEmpty(cvector, cvector, float, cvector, cvector, float)
0x1: @ GetPosition(Stack[-3])
0x2: Pop(0)
0x3: Stack[-2] = Stack[-3] - Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x4: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x5: Push((int) 40000)
0x6: Stack[-8] = Stack[-2] < Stack[-1]; Pop(1);
0x7: Return(); Pop(6)

0x8: PushEmpty(object, int, bool, int, bool, cvector, cvector, int, cvector, cvector, object, object, int, bool, int, bool, cvector, cvector, int, cvector, cvector, object)
0x9: PushEmpty(bool)
0xa: Call2 0xd9b

0xb: Pop(0)
0xc: Pop(1); Push((bool) Stack[-1] == 0)
0xd: IF (Stack[-1] == 0) GOTO 0x17; Pop(1)

0xe: Push("FSM Init failed")
0xf: @ Trace(Stack[-1])
0x10: Pop(1)
0x11: PushEmpty(object)
0x12: Call2 0xc5c

0x13: Pop(0)
0x14: @ RemoveActor(Stack[-1])
0x15: Pop(1)
0x16: Return(); Pop(22)

0x17: @ GetPosition(Stack[-0])
0x18: Pop(0)
0x19: @ GetDirection(Stack[-1])
0x1a: Pop(0)
0x1b: Push(GlobalVars[3])
0x1c: Stack[-1] = (int) 0
0x1d: GlobalVars[3] = Stack[-1]; Pop(1)
0x1e: Push(GlobalVars[4])
0x1f: Stack[-1] = (int) 2
0x20: GlobalVars[4] = Stack[-1]; Pop(1)
0x21: Push((bool) 1)
0x22: IF (Stack[-1] == 0) GOTO 0x1b8; Pop(1)

0x23: Push((int) 0)
0x24: Push(GlobalVars[3])
0x25: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x26: IF (Stack[-1] == 0) GOTO 0x31; Pop(1)

0x27: PushEmpty()
0x28: Push(-0, 0); TaskCall(9)
0x29: Call2 0xabc

0x2a: Pop(-0, 0); TaskReturn
0x2b: Pop(0)
0x2c: PushEmpty(bool, int)
0x2d: Stack[-1] = (int) 2
0x2e: Call2 0xdef

0x2f: Pop(2)
0x30: GOTO 0x1b5

0x31: Push((int) 7)
0x32: Push(GlobalVars[3])
0x33: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x34: IF (Stack[-1] == 0) GOTO 0x50; Pop(1)

0x35: PushEmpty(object)
0x36: Push(GlobalVars[8])
0x37: Stack[-2] = Stack[-1]
0x38: Pop(1)
0x39: Push(-1, 8); TaskCall(1)
0x3a: Call2 0x1b9

0x3b: Pop(-1, 8); TaskReturn
0x3c: Pop(1)
0x3d: Push((int) 7)
0x3e: Push(GlobalVars[3])
0x3f: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x40: IF (Stack[-1] == 0) GOTO 0x4f; Pop(1)

0x41: PushEmpty(int)
0x42: Stack[-1] = (int) 1
0x43: Push(-1, 1); TaskCall(7)
0x44: Call2 0x94d

0x45: Pop(-1, 1); TaskReturn
0x46: Pop(1)
0x47: Push((int) 7)
0x48: Push(GlobalVars[3])
0x49: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x4a: IF (Stack[-1] == 0) GOTO 0x4f; Pop(1)

0x4b: PushEmpty(bool, int)
0x4c: Stack[-1] = (int) 2
0x4d: Call2 0xdef

0x4e: Pop(2)
0x4f: GOTO 0x1b5

0x50: Push((int) 6)
0x51: Push(GlobalVars[3])
0x52: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x53: IF (Stack[-1] == 0) GOTO 0x7a; Pop(1)

0x54: PushEmpty(int)
0x55: Stack[-1] = (int) 1
0x56: Push(-1, 1); TaskCall(7)
0x57: Call2 0x94d

0x58: Pop(-1, 1); TaskReturn
0x59: Pop(1)
0x5a: Push((int) 6)
0x5b: Push(GlobalVars[3])
0x5c: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x5d: IF (Stack[-1] == 0) GOTO 0x79; Pop(1)

0x5e: PushEmpty(object, float)
0x5f: Push(GlobalVars[7])
0x60: Stack[-3] = Stack[-1]
0x61: Pop(1)
0x62: Stack[-1] = (int) 8
0x63: Push(-2, 3); TaskCall(3)
0x64: Call2 0x5fc

0x65: Pop(-2, 3); TaskReturn
0x66: Pop(2)
0x67: Push((int) 6)
0x68: Push(GlobalVars[3])
0x69: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x6a: IF (Stack[-1] == 0) GOTO 0x79; Pop(1)

0x6b: PushEmpty(int)
0x6c: Stack[-1] = (int) 1
0x6d: Push(-1, 1); TaskCall(7)
0x6e: Call2 0x94d

0x6f: Pop(-1, 1); TaskReturn
0x70: Pop(1)
0x71: Push((int) 6)
0x72: Push(GlobalVars[3])
0x73: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x74: IF (Stack[-1] == 0) GOTO 0x79; Pop(1)

0x75: PushEmpty(bool, int)
0x76: Stack[-1] = (int) 2
0x77: Call2 0xdef

0x78: Pop(2)
0x79: GOTO 0x1b5

0x7a: Push((int) 1)
0x7b: Push(GlobalVars[3])
0x7c: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x7d: IF (Stack[-1] == 0) GOTO 0xa9; Pop(1)

0x7e: PushEmpty(bool)
0x7f: Stack[-1] = (bool) 1
0x80: Call2 0xe70

0x81: Pop(1)
0x82: PushEmpty(bool)
0x83: Push(-1, 1); TaskCall(6)
0x84: Call2 0x861

0x85: Pop(-1, 1); TaskReturn
0x86: Pop(1)
0x87: Push((int) 1)
0x88: Push(GlobalVars[3])
0x89: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x8a: IF (Stack[-1] == 0) GOTO 0xa4; Pop(1)

0x8b: PushEmpty()
0x8c: Push(-0, 0); TaskCall(4)
0x8d: Call2 0x6ff

0x8e: Pop(-0, 0); TaskReturn
0x8f: Pop(0)
0x90: Push((int) 1)
0x91: Push(GlobalVars[3])
0x92: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x93: IF (Stack[-1] == 0) GOTO 0xa4; Pop(1)

0x94: PushEmpty(bool, cvector, cvector, bool)
0x95: Stack[-3] = Stack[0 + Tasks[-1].StackPointer]
0x96: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x97: Stack[-1] = (bool) 0
0x98: Push(-4, 1); TaskCall(5)
0x99: Call2 0x78c

0x9a: Pop(-4, 1); TaskReturn
0x9b: Pop(4)
0x9c: Push((int) 1)
0x9d: Push(GlobalVars[3])
0x9e: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x9f: IF (Stack[-1] == 0) GOTO 0xa4; Pop(1)

0xa0: PushEmpty(bool, int)
0xa1: Stack[-1] = (int) 2
0xa2: Call2 0xdef

0xa3: Pop(2)
0xa4: PushEmpty(bool)
0xa5: Stack[-1] = (bool) 0
0xa6: Call2 0xe70

0xa7: Pop(1)
0xa8: GOTO 0x1b5

0xa9: Push((int) 2)
0xaa: Push(GlobalVars[3])
0xab: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xac: IF (Stack[-1] == 0) GOTO 0xe0; Pop(1)

0xad: PushEmpty(bool)
0xae: Call2 0x0

0xaf: Pop(0)
0xb0: Pop(1); Push((bool) Stack[-1] == 0)
0xb1: IF (Stack[-1] == 0) GOTO 0xba; Pop(1)

0xb2: PushEmpty(bool, cvector, cvector, bool)
0xb3: Stack[-3] = Stack[0 + Tasks[-1].StackPointer]
0xb4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb5: Stack[-1] = (bool) 0
0xb6: Push(-4, 1); TaskCall(5)
0xb7: Call2 0x78c

0xb8: Pop(-4, 1); TaskReturn
0xb9: Pop(4)
0xba: Push((int) 2)
0xbb: Push(GlobalVars[3])
0xbc: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xbd: IF (Stack[-1] == 0) GOTO 0xdf; Pop(1)

0xbe: PushEmpty()
0xbf: Push(-0, 0); TaskCall(4)
0xc0: Call2 0x6ff

0xc1: Pop(-0, 0); TaskReturn
0xc2: Pop(0)
0xc3: Push((int) 2)
0xc4: Push(GlobalVars[3])
0xc5: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xc6: IF (Stack[-1] == 0) GOTO 0xdf; Pop(1)

0xc7: PushEmpty(bool)
0xc8: Call2 0xe7e

0xc9: Pop(0)
0xca: Pop(1); Push((bool) Stack[-1] == 0)
0xcb: IF (Stack[-1] == 0) GOTO 0xd1; Pop(1)

0xcc: PushEmpty(bool, int)
0xcd: Stack[-1] = (int) 3
0xce: Call2 0xdef

0xcf: Pop(2)
0xd0: GOTO 0xdf

0xd1: PushEmpty(bool, float)
0xd2: Stack[-1] = (float) 0.5
0xd3: Call2 0xc7e

0xd4: Pop(1)
0xd5: IF (Stack[-1] == 0) GOTO 0xdf; Pop(1)

0xd6: PushEmpty(bool)
0xd7: Call2 0xe65

0xd8: Pop(0)
0xd9: Pop(1); Push((bool) Stack[-1] == 0)
0xda: IF (Stack[-1] == 0) GOTO 0xdf; Pop(1)

0xdb: PushEmpty(bool, int)
0xdc: Stack[-1] = (int) 1
0xdd: Call2 0xdef

0xde: Pop(2)
0xdf: GOTO 0x1b5

0xe0: Push((int) 3)
0xe1: Push(GlobalVars[3])
0xe2: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xe3: IF (Stack[-1] == 0) GOTO 0x134; Pop(1)

0xe4: PushEmpty(bool)
0xe5: Stack[-1] = (bool) 1
0xe6: Call2 0xe89

0xe7: Pop(1)
0xe8: @ GetMainOutdoorScene(Stack[-11])
0xe9: Pop(0)
0xea: Push(GlobalVars[2])
0xeb: @ irand(Stack[-11], Stack[-1])
0xec: Pop(1)
0xed: PushEmpty(bool, float)
0xee: Stack[-1] = (float) 0.5
0xef: Call2 0xc7e

0xf0: Stack[-11] = Stack[-2]
0xf1: Pop(2)
0xf2: Stack[-8] = (int) 0
0xf3: Push(GlobalVars[2])
0xf4: Pop(1); Push((bool) Stack[-9] < Stack[-1])
0xf5: IF (Stack[-1] == 0) GOTO 0x126; Pop(1)

0xf6: Pop(0); Push(Stack[-8] + Stack[-10]);
0xf7: Push(GlobalVars[2])
0xf8: Stack[-6] = Stack[-2] % Stack[-1]; Pop(2);
0xf9: Push(Stack[-9])
0xfa: IF (Stack[-1] == 0) GOTO 0xff; Pop(1)

0xfb: Push(GlobalVars[2])
0xfc: Push((int) 1)
0xfd: Pop(2); Push(Stack[-2] - Stack[-1]);
0xfe: Stack[-5] = Stack[-1] - Stack[-5]; Pop(1);
0xff: Push("pt_b9q03_bonfire")
0x100: Push(GlobalVars[1])
0x101: Push((int) 1)
0x102: Pop(2); Push(Stack[-2] + Stack[-1]);
0x103: Pop(2); Push(Stack[-2] + Stack[-1]);
0x104: Push("_patrol")
0x105: Pop(2); Push(Stack[-2] + Stack[-1]);
0x106: Push((int) 1)
0x107: Pop(1); Push(Stack[-6] + Stack[-1]);
0x108: Pop(2); Push(Stack[-2] + Stack[-1]);
0x109: @@ GetLocator(Stack[-1], Stack[-8], Stack[-7], Stack[-6])
0x10a: Pop(1)
0x10b: PushEmpty(bool, cvector, cvector, bool)
0x10c: Stack[-3] = Stack[-10]
0x10d: Stack[-2] = Stack[-9]
0x10e: Stack[-1] = (bool) 0
0x10f: Push(-4, 1); TaskCall(5)
0x110: Call2 0x78c

0x111: Pop(-4, 1); TaskReturn
0x112: Pop(4)
0x113: Push((int) 3)
0x114: Push(GlobalVars[3])
0x115: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x116: IF (Stack[-1] == 0) GOTO 0x118; Pop(1)

0x117: GOTO 0x126

0x118: PushEmpty(int)
0x119: Stack[-1] = (int) 1
0x11a: Push(-1, 1); TaskCall(7)
0x11b: Call2 0x94d

0x11c: Pop(-1, 1); TaskReturn
0x11d: Pop(1)
0x11e: Push((int) 3)
0x11f: Push(GlobalVars[3])
0x120: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x121: IF (Stack[-1] == 0) GOTO 0x123; Pop(1)

0x122: GOTO 0x126

0x123: Push((int) 1)
0x124: Stack[-9] = Stack[-9] + Stack[-1]; Pop(1);
0x125: GOTO 0xf3

0x126: Push((int) 3)
0x127: Push(GlobalVars[3])
0x128: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x129: IF (Stack[-1] == 0) GOTO 0x12e; Pop(1)

0x12a: PushEmpty(bool, int)
0x12b: Stack[-1] = (int) 2
0x12c: Call2 0xdef

0x12d: Pop(2)
0x12e: PushEmpty(bool)
0x12f: Stack[-1] = (bool) 0
0x130: Call2 0xe89

0x131: Pop(1)
0x132: Stack[-11] = 0
0x133: GOTO 0x1b5

0x134: Push((int) 4)
0x135: Push(GlobalVars[3])
0x136: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x137: IF (Stack[-1] == 0) GOTO 0x188; Pop(1)

0x138: Push(GlobalVars[5])
0x139: @@ GetPosition(Stack[-4])
0x13a: Pop(1)
0x13b: Push(GlobalVars[5])
0x13c: @@ GetDirection(Stack[-3])
0x13d: Pop(1)
0x13e: PushEmpty(bool, cvector, cvector, bool)
0x13f: Stack[-3] = Stack[-7]
0x140: Stack[-2] = -Stack[-6]; Pop(0);
0x141: Stack[-1] = (bool) 1
0x142: Push(-4, 1); TaskCall(5)
0x143: Call2 0x78c

0x144: Pop(-4, 1); TaskReturn
0x145: Pop(4)
0x146: Push((int) 4)
0x147: Push(GlobalVars[3])
0x148: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x149: IF (Stack[-1] == 0) GOTO 0x187; Pop(1)

0x14a: PushEmpty(int)
0x14b: Stack[-1] = (int) 2
0x14c: Push(-1, 1); TaskCall(7)
0x14d: Call2 0x94d

0x14e: Pop(-1, 1); TaskReturn
0x14f: Pop(1)
0x150: Push((int) 4)
0x151: Push(GlobalVars[3])
0x152: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x153: IF (Stack[-1] == 0) GOTO 0x187; Pop(1)

0x154: PushEmpty(bool, cvector, cvector, bool)
0x155: Stack[-3] = Stack[0 + Tasks[-1].StackPointer]
0x156: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x157: Stack[-1] = (bool) 1
0x158: Push(-4, 1); TaskCall(5)
0x159: Call2 0x78c

0x15a: Pop(-4, 1); TaskReturn
0x15b: Pop(4)
0x15c: Push((int) 4)
0x15d: Push(GlobalVars[3])
0x15e: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x15f: IF (Stack[-1] == 0) GOTO 0x187; Pop(1)

0x160: @ GetMainOutdoorScene(Stack[-1])
0x161: Pop(0)
0x162: Push("b9q03_corpse")
0x163: Push(GlobalVars[1])
0x164: Push((int) 1)
0x165: Pop(2); Push(Stack[-2] + Stack[-1]);
0x166: Pop(2); Push(Stack[-2] + Stack[-1]);
0x167: PushEmpty(object)
0x168: Call2 0xc5c

0x169: Pop(0)
0x16a: @ BroadcastMessage(Stack[-2], Stack[-1], Stack[-3])
0x16b: Pop(2)
0x16c: PushEmpty(bool, cvector, cvector, bool)
0x16d: Stack[-3] = Stack[-7]
0x16e: Stack[-2] = Stack[-7]
0x16f: Stack[-1] = (bool) 1
0x170: Push(-4, 1); TaskCall(5)
0x171: Call2 0x78c

0x172: Pop(-4, 1); TaskReturn
0x173: Pop(4)
0x174: Push((int) 4)
0x175: Push(GlobalVars[3])
0x176: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x177: IF (Stack[-1] == 0) GOTO 0x186; Pop(1)

0x178: PushEmpty(int)
0x179: Stack[-1] = (int) 3
0x17a: Push(-1, 1); TaskCall(7)
0x17b: Call2 0x94d

0x17c: Pop(-1, 1); TaskReturn
0x17d: Pop(1)
0x17e: Push((int) 4)
0x17f: Push(GlobalVars[3])
0x180: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x181: IF (Stack[-1] == 0) GOTO 0x186; Pop(1)

0x182: PushEmpty(bool, int)
0x183: Stack[-1] = (int) 2
0x184: Call2 0xdef

0x185: Pop(2)
0x186: Stack[-1] = 0
0x187: GOTO 0x1b5

0x188: Push((int) 5)
0x189: Push(GlobalVars[3])
0x18a: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x18b: IF (Stack[-1] == 0) GOTO 0x1b2; Pop(1)

0x18c: PushEmpty(int)
0x18d: Stack[-1] = (int) 1
0x18e: Push(-1, 1); TaskCall(7)
0x18f: Call2 0x94d

0x190: Pop(-1, 1); TaskReturn
0x191: Pop(1)
0x192: Push((int) 5)
0x193: Push(GlobalVars[3])
0x194: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x195: IF (Stack[-1] == 0) GOTO 0x1b1; Pop(1)

0x196: PushEmpty(object, float)
0x197: Push(GlobalVars[6])
0x198: Stack[-3] = Stack[-1]
0x199: Pop(1)
0x19a: Stack[-1] = (int) 8
0x19b: Push(-2, 3); TaskCall(3)
0x19c: Call2 0x5fc

0x19d: Pop(-2, 3); TaskReturn
0x19e: Pop(2)
0x19f: Push((int) 5)
0x1a0: Push(GlobalVars[3])
0x1a1: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1a2: IF (Stack[-1] == 0) GOTO 0x1b1; Pop(1)

0x1a3: PushEmpty(int)
0x1a4: Stack[-1] = (int) 2
0x1a5: Push(-1, 1); TaskCall(7)
0x1a6: Call2 0x94d

0x1a7: Pop(-1, 1); TaskReturn
0x1a8: Pop(1)
0x1a9: Push((int) 5)
0x1aa: Push(GlobalVars[3])
0x1ab: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1ac: IF (Stack[-1] == 0) GOTO 0x1b1; Pop(1)

0x1ad: PushEmpty(bool, int)
0x1ae: Stack[-1] = (int) 2
0x1af: Call2 0xdef

0x1b0: Pop(2)
0x1b1: GOTO 0x1b5

0x1b2: Push("Unknown FSM state")
0x1b3: @ Trace(Stack[-1])
0x1b4: Pop(1)
0x1b5: @ sync()
0x1b6: Pop(0)
0x1b7: GOTO 0x21

0x1b8: Return(); Pop(22)

0x1b9: PushEmpty()
0x1ba: Stack[7 + Tasks[-1].StackPointer] = Stack[-1]
0x1bb: Push((int) 1)
0x1bc: Push((int) 1)
0x1bd: @ SetTimer(Stack[-2], Stack[-1])
0x1be: Pop(2)
0x1bf: PushEmpty(object, bool, float)
0x1c0: Stack[-3] = Stack[-4]
0x1c1: Stack[-2] = (bool) 0
0x1c2: Stack[-1] = (float) 150.0
0x1c3: Call2 0x203

0x1c4: Pop(3)
0x1c5: Push((int) 1)
0x1c6: @ KillTimer(Stack[-1])
0x1c7: Pop(1)
0x1c8: Return(); Pop(0)

0x1c9: PushEmpty()
0x1ca: Stack[-3] = (float) 0.1
0x1cb: Return(); Pop(0)

0x1cc: PushEmpty()
0x1cd: Stack[-3] = (int) 0
0x1ce: Return(); Pop(0)

0x1cf: PushEmpty(int)
0x1d0: Call2 0xebe

0x1d1: Stack[-2] = Stack[-1]
0x1d2: Pop(1)
0x1d3: Return(); Pop(0)

0x1d4: PushEmpty(object, object)
0x1d5: Push((int) 1)
0x1d6: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1d7: IF (Stack[-1] == 0) GOTO 0x1e5; Pop(1)

0x1d8: @ GetMainOutdoorScene(Stack[-1])
0x1d9: Pop(0)
0x1da: Push("b9q03_helpme")
0x1db: Push(GlobalVars[1])
0x1dc: Push((int) 1)
0x1dd: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1de: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1df: @ BroadcastMessage(Stack[-1], Stack[-7], Stack[-2])
0x1e0: Pop(1)
0x1e1: Push("helpme timer")
0x1e2: @ Trace(Stack[-1])
0x1e3: Pop(1)
0x1e4: Stack[-1] = 0
0x1e5: Return(); Pop(2)

0x1e6: PushEmpty()
0x1e7: PushEmpty(bool)
0x1e8: Stack[-1] = (bool) 0
0x1e9: PushEmpty(bool, object)
0x1ea: Stack[-1] = Stack[-4]
0x1eb: Call2 0xaf4

0x1ec: Pop(1)
0x1ed: IF (Stack[-1] == 0) GOTO 0x1f2; Pop(1)

0x1ee: Push(GlobalVars[8])
0x1ef: Pop(1); Push((bool) Stack[-1] != Stack[-3])
0x1f0: IF (Stack[-1] == 0) GOTO 0x1f2; Pop(1)

0x1f1: Stack[-1] = (bool) 1
0x1f2: IF (Stack[-1] == 0) GOTO 0x1fa; Pop(1)

0x1f3: PushEmpty()
0x1f4: Call2 0x2fd

0x1f5: Pop(0)
0x1f6: PushEmpty(bool, object)
0x1f7: Stack[-1] = Stack[-3]
0x1f8: Call2 0xe53

0x1f9: Pop(2)
0x1fa: Return(); Pop(0)

0x1fb: PushEmpty()
0x1fc: Call2 0x2fd

0x1fd: Pop(0)
0x1fe: PushEmpty(bool, int)
0x1ff: Stack[-1] = (int) 0
0x200: Call2 0xdef

0x201: Pop(2)
0x202: Return(); Pop(0)

0x203: PushEmpty(float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float, float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float)
0x204: PushEmpty()
0x205: Call2 0x305

0x206: Pop(0)
0x207: Stack[6 + Tasks[-1].StackPointer] = (int)0
0x208: Push("@GetAttackDistance")
0x209: Push((int) 1)
0x20a: Pop(2); Push(IsFuncExist(Stack[-27], Stack[-2], Stack[-1]))
0x20b: IF (Stack[-1] == 0) GOTO 0x211; Pop(1)

0x20c: @@ GetAttackDistance(Stack[-11])
0x20d: Pop(0)
0x20e: Push((int) 50)
0x20f: Stack[-12] = Stack[-12] + Stack[-1]; Pop(1);
0x210: GOTO 0x212

0x211: Stack[-11] = Stack[-23]
0x212: Push((int) 150)
0x213: Pop(1); Push((bool) Stack[-12] >= Stack[-1])
0x214: IF (Stack[-1] == 0) GOTO 0x216; Pop(1)

0x215: Stack[-11] = (int) 150
0x216: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x217: Stack[0 + Tasks[-1].StackPointer] = Stack[-25]
0x218: @ IsPlayerActor(Stack[-0], Stack[-8])
0x219: Pop(0)
0x21a: Push(Stack[-8])
0x21b: IF (Stack[-1] == 0) GOTO 0x21f; Pop(1)

0x21c: Push("attack")
0x21d: @ PlayGlobalMusic(Stack[-1])
0x21e: Pop(1)
0x21f: Push(Stack[-24])
0x220: IF (Stack[-1] == 0) GOTO 0x223; Pop(1)

0x221: Stack[-7] = (bool) 0
0x222: GOTO 0x224

0x223: Stack[-7] = (bool) 1
0x224: Push((float)300.0)
0x225: Stack[-7] = Stack[-1] + Stack[-12]; Pop(1);
0x226: PushEmpty(bool)
0x227: Stack[-1] = (bool) 0
0x228: PushEmpty(bool)
0x229: Stack[-1] = (bool) 0
0x22a: PushEmpty(bool, object)
0x22b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x22c: Call2 0xb77

0x22d: Pop(1)
0x22e: IF (Stack[-1] == 0) GOTO 0x232; Pop(1)

0x22f: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x230: IF (Stack[-1] == 0) GOTO 0x232; Pop(1)

0x231: Stack[-1] = (bool) 1
0x232: IF (Stack[-1] == 0) GOTO 0x236; Pop(1)

0x233: Pop(0); Push((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x234: IF (Stack[-1] == 0) GOTO 0x236; Pop(1)

0x235: Stack[-1] = (bool) 1
0x236: IF (Stack[-1] == 0) GOTO 0x2e6; Pop(1)

0x237: PushEmpty()
0x238: Call2 0x4b7

0x239: Pop(0)
0x23a: @@ GetPFPosition(Stack[-10])
0x23b: Pop(0)
0x23c: @ GetPFPosition(Stack[-9])
0x23d: Pop(0)
0x23e: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0x23f: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x240: Pop(0); Push(Stack[-6] * Stack[-6]);
0x241: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0x242: IF (Stack[-1] == 0) GOTO 0x253; Pop(1)

0x243: PushEmpty(bool, object, float, float, bool, bool)
0x244: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0x245: Stack[-4] = Stack[-17]
0x246: Stack[-3] = (float) 2000.0
0x247: Stack[-2] = (bool) 1
0x248: Stack[-1] = (bool) 0
0x249: Push(-6, 4); TaskCall(2)
0x24a: Call2 0x4c9

0x24b: Pop(-6, 4); TaskReturn
0x24c: Pop(5)
0x24d: Pop(1); Push((bool) Stack[-1] == 0)
0x24e: IF (Stack[-1] == 0) GOTO 0x251; Pop(1)

0x24f: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x250: GOTO 0x2e6

0x251: Stack[-7] = (bool) 0
0x252: GOTO 0x2e5

0x253: Pop(0); Push(Stack[-23] * Stack[-23]);
0x254: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0x255: IF (Stack[-1] == 0) GOTO 0x2dd; Pop(1)

0x256: @@ GetPFPosition(Stack[-3])
0x257: Pop(0)
0x258: @ CanReachByPF(Stack[-2], Stack[-3])
0x259: Pop(0)
0x25a: Pop(0); Push((bool) Stack[-2] == 0)
0x25b: IF (Stack[-1] == 0) GOTO 0x26c; Pop(1)

0x25c: PushEmpty(bool, object, float, float, bool, bool)
0x25d: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0x25e: Stack[-4] = Stack[-17]
0x25f: Stack[-3] = (float) 2000.0
0x260: Stack[-2] = (bool) 1
0x261: Stack[-1] = (bool) 0
0x262: Push(-6, 4); TaskCall(2)
0x263: Call2 0x4c9

0x264: Pop(-6, 4); TaskReturn
0x265: Pop(5)
0x266: Pop(1); Push((bool) Stack[-1] == 0)
0x267: IF (Stack[-1] == 0) GOTO 0x26a; Pop(1)

0x268: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x269: GOTO 0x2e6

0x26a: Stack[-7] = (bool) 0
0x26b: GOTO 0x226

0x26c: Pop(0); Push((bool) Stack[-7] == 0)
0x26d: IF (Stack[-1] == 0) GOTO 0x28b; Pop(1)

0x26e: PushEmpty(object)
0x26f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x270: Call2 0xc0d

0x271: Pop(1)
0x272: Push("all")
0x273: Push("attack_on")
0x274: @ PlayAnimation(Stack[-2], Stack[-1])
0x275: Pop(2)
0x276: @ WaitForAnimEnd()
0x277: Pop(0)
0x278: PushEmpty()
0x279: Call2 0x4b7

0x27a: Pop(0)
0x27b: @ StopAsync()
0x27c: Pop(0)
0x27d: Stack[-7] = (bool) 1
0x27e: PushEmpty(bool)
0x27f: Stack[-1] = (bool) 1
0x280: PushEmpty(bool, object)
0x281: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x282: Call2 0xb77

0x283: Pop(1)
0x284: Pop(1); Push((bool) Stack[-1] == 0)
0x285: IF (Stack[-1] == 0) GOTO 0x289; Pop(1)

0x286: Push( Stack[4 + Tasks[-1].StackPointer] )
0x287: IF (Stack[-1] == 0) GOTO 0x289; Pop(1)

0x288: Stack[-1] = (bool) 0
0x289: IF (Stack[-1] == 0) GOTO 0x28b; Pop(1)

0x28a: GOTO 0x2e6

0x28b: @ rand(Stack[-1])
0x28c: Pop(0)
0x28d: PushEmpty(bool)
0x28e: Stack[-1] = (bool) 1
0x28f: Push((float)0.6)
0x290: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x291: IF (Stack[-1] == 0) GOTO 0x297; Pop(1)

0x292: PushEmpty(bool)
0x293: Call2 0x48c

0x294: Pop(0)
0x295: IF (Stack[-1] == 0) GOTO 0x297; Pop(1)

0x296: Stack[-1] = (bool) 0
0x297: IF (Stack[-1] == 0) GOTO 0x2a8; Pop(1)

0x298: @ Face(Stack[-0])
0x299: Pop(0)
0x29a: PushEmpty()
0x29b: Call2 0x4bc

0x29c: Pop(0)
0x29d: Push("all")
0x29e: Push("attack_stay")
0x29f: @ PlayAnimation(Stack[-2], Stack[-1])
0x2a0: Pop(2)
0x2a1: PushEmpty(bool, float)
0x2a2: Stack[-1] = Stack[-25]
0x2a3: Call2 0x3fc

0x2a4: Pop(2)
0x2a5: @ StopAsync()
0x2a6: Pop(0)
0x2a7: GOTO 0x2dc

0x2a8: @ Face(Stack[-0])
0x2a9: Pop(0)
0x2aa: Push("all")
0x2ab: Push("fjump")
0x2ac: @ PlayAnimation(Stack[-2], Stack[-1])
0x2ad: Pop(2)
0x2ae: @ WaitForAnimEnd()
0x2af: Pop(0)
0x2b0: PushEmpty()
0x2b1: Call2 0x4b7

0x2b2: Pop(0)
0x2b3: Push(CVector(0.0, 0.0, 0.0))
0x2b4: @ SetSpeed(Stack[-1])
0x2b5: Pop(1)
0x2b6: @ Stop()
0x2b7: Pop(0)
0x2b8: @ StopAsync()
0x2b9: Pop(0)
0x2ba: PushEmpty(bool)
0x2bb: Call2 0x48c

0x2bc: Pop(0)
0x2bd: Pop(1); Push((bool) Stack[-1] == 0)
0x2be: IF (Stack[-1] == 0) GOTO 0x2dc; Pop(1)

0x2bf: PushEmpty(bool)
0x2c0: Stack[-1] = (bool) 1
0x2c1: PushEmpty(bool, object)
0x2c2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2c3: Call2 0xb77

0x2c4: Pop(1)
0x2c5: Pop(1); Push((bool) Stack[-1] == 0)
0x2c6: IF (Stack[-1] == 0) GOTO 0x2ca; Pop(1)

0x2c7: Push( Stack[4 + Tasks[-1].StackPointer] )
0x2c8: IF (Stack[-1] == 0) GOTO 0x2ca; Pop(1)

0x2c9: Stack[-1] = (bool) 0
0x2ca: IF (Stack[-1] == 0) GOTO 0x2cc; Pop(1)

0x2cb: GOTO 0x2e6

0x2cc: @@ GetPFPosition(Stack[-10])
0x2cd: Pop(0)
0x2ce: @ GetPFPosition(Stack[-9])
0x2cf: Pop(0)
0x2d0: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0x2d1: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x2d2: Pop(0); Push(Stack[-23] * Stack[-23]);
0x2d3: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x2d4: IF (Stack[-1] == 0) GOTO 0x2dc; Pop(1)

0x2d5: PushEmpty(bool, float)
0x2d6: Stack[-1] = Stack[-25]
0x2d7: Call2 0x34f

0x2d8: Pop(1)
0x2d9: Pop(1); Push((bool) Stack[-1] == 0)
0x2da: IF (Stack[-1] == 0) GOTO 0x2dc; Pop(1)

0x2db: GOTO 0x2e6

0x2dc: GOTO 0x2e5

0x2dd: PushEmpty(bool, float)
0x2de: Stack[-1] = Stack[-25]
0x2df: Call2 0x34f

0x2e0: Pop(1)
0x2e1: Pop(1); Push((bool) Stack[-1] == 0)
0x2e2: IF (Stack[-1] == 0) GOTO 0x2e4; Pop(1)

0x2e3: GOTO 0x2e6

0x2e4: Stack[-7] = (bool) 1
0x2e5: GOTO 0x226

0x2e6: @ WaitForAnimEnd()
0x2e7: Pop(0)
0x2e8: PushEmpty(bool)
0x2e9: Stack[-1] = (bool) 1
0x2ea: Push( Stack[3 + Tasks[-1].StackPointer] )
0x2eb: IF (Stack[-1] == 0) GOTO 0x2ef; Pop(1)

0x2ec: Push( Stack[4 + Tasks[-1].StackPointer] )
0x2ed: IF (Stack[-1] == 0) GOTO 0x2ef; Pop(1)

0x2ee: Stack[-1] = (bool) 0
0x2ef: IF (Stack[-1] == 0) GOTO 0x2f1; Pop(1)

0x2f0: Return(); Pop(22)

0x2f1: Push("all")
0x2f2: Push("attack_off")
0x2f3: @ PlayAnimation(Stack[-2], Stack[-1])
0x2f4: Pop(2)
0x2f5: @ WaitForAnimEnd()
0x2f6: Pop(0)
0x2f7: Push(Stack[-8])
0x2f8: IF (Stack[-1] == 0) GOTO 0x2fc; Pop(1)

0x2f9: Push((float)2.0)
0x2fa: @ Sleep(Stack[-1])
0x2fb: Pop(1)
0x2fc: Return(); Pop(22)

0x2fd: @ Stop()
0x2fe: Pop(0)
0x2ff: @ StopAnimation()
0x300: Pop(0)
0x301: @ StopGroup0()
0x302: Pop(0)
0x303: Stack[4 + Tasks[-1].StackPointer] = (bool)1
0x304: Return(); Pop(0)

0x305: PushEmpty(bool, bool, cvector, bool, bool, cvector)
0x306: Stack[1 + Tasks[-1].StackPointer] = (int)0
0x307: Push("all")
0x308: Push("attack_begin")
0x309: Push((int) 1)
0x30a: Pop(1); Push(Stack[1 + StackPtr] + Stack[-1]);
0x30b: Pop(2); Push(Stack[-2] + Stack[-1]);
0x30c: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0x30d: Pop(2)
0x30e: Pop(0); Push((bool) Stack[-3] == 0)
0x30f: IF (Stack[-1] == 0) GOTO 0x311; Pop(1)

0x310: GOTO 0x314

0x311: Push((int) 1)
0x312: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x313: GOTO 0x307

0x314: Stack[2 + Tasks[-1].StackPointer] = (int)0
0x315: Push("attack")
0x316: Push((int) 1)
0x317: Pop(1); Push(Stack[2 + StackPtr] + Stack[-1]);
0x318: Pop(2); Push(Stack[-2] + Stack[-1]);
0x319: @ IsExisting3DSound(Stack[-3], Stack[-1])
0x31a: Pop(1)
0x31b: Pop(0); Push((bool) Stack[-2] == 0)
0x31c: IF (Stack[-1] == 0) GOTO 0x31e; Pop(1)

0x31d: GOTO 0x321

0x31e: Push((int) 1)
0x31f: Stack[2 + Tasks[-1].StackPointer] = Stack[2 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x320: GOTO 0x315

0x321: Push("all")
0x322: Push("bjump")
0x323: @ GetAnimationOffset(Stack[-3], Stack[-2], Stack[-1])
0x324: Pop(2)
0x325: Push(CvectorIndex(Stack[-1], 2))
0x326: Stack[5 + Tasks[-1].StackPointer] = -Stack[-1]; Pop(1);
0x327: Return(); Pop(6)

0x328: PushEmpty(object, float, float, object, float, float)
0x329: Push((float)0.9)
0x32a: Pop(1); Push(Stack[-9] * Stack[-1]);
0x32b: @ GetVictim(Stack[-1], Stack[-4])
0x32c: Pop(1)
0x32d: @ ReportAttack(Stack[-0])
0x32e: Pop(0)
0x32f: Pop(0); Push((bool) Stack[-3] == Stack[0 + Tasks[-1].StackPointer])
0x330: IF (Stack[-1] == 0) GOTO 0x34d; Pop(1)

0x331: PushEmpty(float, object, int)
0x332: Stack[-2] = Stack[-6]
0x333: Stack[-1] = Stack[-10]
0x334: Call2 0x1c9

0x335: Stack[-5] = Stack[-3]
0x336: Pop(3)
0x337: PushEmpty(float, object, float, int)
0x338: Stack[-3] = Stack[-7]
0x339: Stack[-2] = Stack[-6]
0x33a: PushEmpty(int, object, int)
0x33b: Stack[-2] = Stack[-10]
0x33c: Stack[-1] = Stack[-14]
0x33d: Call2 0x1cc

0x33e: Stack[-4] = Stack[-3]
0x33f: Pop(3)
0x340: Call2 0xb05

0x341: Stack[-5] = Stack[-4]
0x342: Pop(4)
0x343: PushEmpty(int)
0x344: Call2 0x1cf

0x345: Pop(0)
0x346: @ ReportHit(Stack[-0], Stack[-1], Stack[-2], Stack[-3])
0x347: Pop(1)
0x348: PushEmpty(object, float)
0x349: Stack[-2] = Stack[-5]
0x34a: Stack[-1] = Stack[-3]
0x34b: Call2 0x4c1

0x34c: Pop(2)
0x34d: Return(); Pop(6)

0x34e: Stack[-3] = 0
0x34f: PushEmpty(int, bool, int, string, int, bool, int, string)
0x350: PushEmpty()
0x351: Call2 0x4b7

0x352: Pop(0)
0x353: @ irand(Stack[-4], Stack[-1])
0x354: Pop(0)
0x355: Push((int) 1)
0x356: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x357: @ Face(Stack[-0])
0x358: Pop(0)
0x359: Push((bool) 1)
0x35a: @ SetAttackState(Stack[-1])
0x35b: Pop(1)
0x35c: Push("all")
0x35d: Push("attack_begin")
0x35e: Pop(1); Push(Stack[-1] + Stack[-6]);
0x35f: @ PlayAnimation(Stack[-2], Stack[-1])
0x360: Pop(2)
0x361: @ WaitForAnimEnd()
0x362: Pop(0)
0x363: PushEmpty()
0x364: Call2 0x497

0x365: Pop(0)
0x366: PushEmpty(bool)
0x367: Stack[-1] = (bool) 1
0x368: PushEmpty(bool, object)
0x369: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x36a: Call2 0xb77

0x36b: Pop(1)
0x36c: Pop(1); Push((bool) Stack[-1] == 0)
0x36d: IF (Stack[-1] == 0) GOTO 0x371; Pop(1)

0x36e: Push( Stack[4 + Tasks[-1].StackPointer] )
0x36f: IF (Stack[-1] == 0) GOTO 0x371; Pop(1)

0x370: Stack[-1] = (bool) 0
0x371: IF (Stack[-1] == 0) GOTO 0x376; Pop(1)

0x372: @ StopAsync()
0x373: Pop(0)
0x374: Stack[-10] = (bool) 0
0x375: Return(); Pop(8)

0x376: PushEmpty(float, int)
0x377: Stack[-2] = Stack[-11]
0x378: Stack[-1] = Stack[-6]
0x379: Call2 0x328

0x37a: Pop(2)
0x37b: Push("all")
0x37c: Push("attack_middle")
0x37d: Pop(1); Push(Stack[-1] + Stack[-6]);
0x37e: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0x37f: Pop(2)
0x380: Push(Stack[-3])
0x381: IF (Stack[-1] == 0) GOTO 0x3cd; Pop(1)

0x382: Push("all")
0x383: Push("attack_middle")
0x384: Pop(1); Push(Stack[-1] + Stack[-6]);
0x385: @ PlayAnimation(Stack[-2], Stack[-1])
0x386: Pop(2)
0x387: @ WaitForAnimEnd()
0x388: Pop(0)
0x389: PushEmpty()
0x38a: Call2 0x4b7

0x38b: Pop(0)
0x38c: PushEmpty(bool)
0x38d: Stack[-1] = (bool) 1
0x38e: PushEmpty(bool, object)
0x38f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x390: Call2 0xb77

0x391: Pop(1)
0x392: Pop(1); Push((bool) Stack[-1] == 0)
0x393: IF (Stack[-1] == 0) GOTO 0x397; Pop(1)

0x394: Push( Stack[4 + Tasks[-1].StackPointer] )
0x395: IF (Stack[-1] == 0) GOTO 0x397; Pop(1)

0x396: Stack[-1] = (bool) 0
0x397: IF (Stack[-1] == 0) GOTO 0x39c; Pop(1)

0x398: @ StopAsync()
0x399: Pop(0)
0x39a: Stack[-10] = (bool) 0
0x39b: Return(); Pop(8)

0x39c: PushEmpty(float, int)
0x39d: Stack[-2] = Stack[-11]
0x39e: Stack[-1] = Stack[-6]
0x39f: Call2 0x328

0x3a0: Pop(2)
0x3a1: Stack[-2] = (int) 1
0x3a2: Push("attack_middle")
0x3a3: Pop(1); Push(Stack[-1] + Stack[-5]);
0x3a4: Push("_")
0x3a5: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3a6: Stack[-2] = Stack[-1] + Stack[-3]; Pop(1);
0x3a7: Push("all")
0x3a8: @ HasAnimation(Stack[-4], Stack[-1], Stack[-2])
0x3a9: Pop(1)
0x3aa: Pop(0); Push((bool) Stack[-3] == 0)
0x3ab: IF (Stack[-1] == 0) GOTO 0x3ad; Pop(1)

0x3ac: GOTO 0x3cd

0x3ad: Push("all")
0x3ae: @ PlayAnimation(Stack[-1], Stack[-2])
0x3af: Pop(1)
0x3b0: @ WaitForAnimEnd()
0x3b1: Pop(0)
0x3b2: PushEmpty()
0x3b3: Call2 0x4b7

0x3b4: Pop(0)
0x3b5: PushEmpty(bool)
0x3b6: Stack[-1] = (bool) 1
0x3b7: PushEmpty(bool, object)
0x3b8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3b9: Call2 0xb77

0x3ba: Pop(1)
0x3bb: Pop(1); Push((bool) Stack[-1] == 0)
0x3bc: IF (Stack[-1] == 0) GOTO 0x3c0; Pop(1)

0x3bd: Push( Stack[4 + Tasks[-1].StackPointer] )
0x3be: IF (Stack[-1] == 0) GOTO 0x3c0; Pop(1)

0x3bf: Stack[-1] = (bool) 0
0x3c0: IF (Stack[-1] == 0) GOTO 0x3c5; Pop(1)

0x3c1: @ StopAsync()
0x3c2: Pop(0)
0x3c3: Stack[-10] = (bool) 0
0x3c4: Return(); Pop(8)

0x3c5: PushEmpty(float, int)
0x3c6: Stack[-2] = Stack[-11]
0x3c7: Stack[-1] = Stack[-6]
0x3c8: Call2 0x328

0x3c9: Pop(2)
0x3ca: Push((int) 1)
0x3cb: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x3cc: GOTO 0x3a2

0x3cd: Push((bool) 0)
0x3ce: @ SetAttackState(Stack[-1])
0x3cf: Pop(1)
0x3d0: Push("all")
0x3d1: Push("attack_end")
0x3d2: Pop(1); Push(Stack[-1] + Stack[-6]);
0x3d3: @ PlayAnimation(Stack[-2], Stack[-1])
0x3d4: Pop(2)
0x3d5: PushEmpty(bool)
0x3d6: Call2 0x4c3

0x3d7: Pop(0)
0x3d8: IF (Stack[-1] == 0) GOTO 0x3df; Pop(1)

0x3d9: PushEmpty(bool, float)
0x3da: Stack[-1] = (float) 0.75
0x3db: Call2 0x3e1

0x3dc: Pop(2)
0x3dd: @ StopAsync()
0x3de: Pop(0)
0x3df: Stack[-10] = (bool) 1
0x3e0: Return(); Pop(8)

0x3e1: PushEmpty(float, bool, float, bool)
0x3e2: @ rand(Stack[-2])
0x3e3: Pop(0)
0x3e4: Pop(0); Push((bool) Stack[-2] < Stack[-5])
0x3e5: IF (Stack[-1] == 0) GOTO 0x3f5; Pop(1)

0x3e6: @ IsAnimationPlaying(Stack[-1])
0x3e7: Pop(0)
0x3e8: Pop(0); Push((bool) Stack[-1] == 0)
0x3e9: IF (Stack[-1] == 0) GOTO 0x3eb; Pop(1)

0x3ea: GOTO 0x3f4

0x3eb: PushEmpty(bool)
0x3ec: Call2 0x44f

0x3ed: Pop(0)
0x3ee: IF (Stack[-1] == 0) GOTO 0x3f1; Pop(1)

0x3ef: Stack[-6] = (bool) 1
0x3f0: Return(); Pop(4)

0x3f1: @ sync()
0x3f2: Pop(0)
0x3f3: GOTO 0x3e6

0x3f4: GOTO 0x3fa

0x3f5: @ WaitForAnimEnd()
0x3f6: Pop(0)
0x3f7: PushEmpty()
0x3f8: Call2 0x4b7

0x3f9: Pop(0)
0x3fa: Stack[-6] = (bool) 0
0x3fb: Return(); Pop(4)

0x3fc: PushEmpty(bool, cvector, cvector, cvector, float, bool, cvector, cvector, cvector, float)
0x3fd: @ IsAnimationPlaying(Stack[-5])
0x3fe: Pop(0)
0x3ff: Pop(0); Push((bool) Stack[-5] == 0)
0x400: IF (Stack[-1] == 0) GOTO 0x402; Pop(1)

0x401: GOTO 0x428

0x402: PushEmpty(bool)
0x403: Call2 0x44f

0x404: Pop(0)
0x405: IF (Stack[-1] == 0) GOTO 0x408; Pop(1)

0x406: Stack[-12] = (bool) 1
0x407: Return(); Pop(10)

0x408: PushEmpty(bool)
0x409: Stack[-1] = (bool) 1
0x40a: PushEmpty(bool, object)
0x40b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x40c: Call2 0xb77

0x40d: Pop(1)
0x40e: Pop(1); Push((bool) Stack[-1] == 0)
0x40f: IF (Stack[-1] == 0) GOTO 0x413; Pop(1)

0x410: Push( Stack[4 + Tasks[-1].StackPointer] )
0x411: IF (Stack[-1] == 0) GOTO 0x413; Pop(1)

0x412: Stack[-1] = (bool) 0
0x413: IF (Stack[-1] == 0) GOTO 0x416; Pop(1)

0x414: Stack[-12] = (bool) 0
0x415: Return(); Pop(10)

0x416: @@ GetPFPosition(Stack[-4])
0x417: Pop(0)
0x418: @ GetPFPosition(Stack[-3])
0x419: Pop(0)
0x41a: Stack[-2] = Stack[-4] - Stack[-3]; Pop(0);
0x41b: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x41c: Pop(0); Push(Stack[-11] * Stack[-11]);
0x41d: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x41e: IF (Stack[-1] == 0) GOTO 0x425; Pop(1)

0x41f: PushEmpty(bool, float)
0x420: Stack[-1] = Stack[-13]
0x421: Call2 0x34f

0x422: Pop(2)
0x423: Stack[-12] = (bool) 1
0x424: Return(); Pop(10)

0x425: @ sync()
0x426: Pop(0)
0x427: GOTO 0x3fd

0x428: PushEmpty()
0x429: Call2 0x4b7

0x42a: Pop(0)
0x42b: Stack[-12] = (bool) 0
0x42c: Return(); Pop(10)

0x42d: PushEmpty(cvector, cvector, cvector, float, float, cvector, cvector, cvector, float, float)
0x42e: PushEmpty(bool)
0x42f: Stack[-1] = (bool) 1
0x430: PushEmpty(bool, object)
0x431: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x432: Call2 0xb77

0x433: Pop(1)
0x434: Pop(1); Push((bool) Stack[-1] == 0)
0x435: IF (Stack[-1] == 0) GOTO 0x439; Pop(1)

0x436: Push( Stack[4 + Tasks[-1].StackPointer] )
0x437: IF (Stack[-1] == 0) GOTO 0x439; Pop(1)

0x438: Stack[-1] = (bool) 0
0x439: IF (Stack[-1] == 0) GOTO 0x43c; Pop(1)

0x43a: Stack[-11] = (bool) 0
0x43b: Return(); Pop(10)

0x43c: PushEmpty(bool)
0x43d: Call2 0x48c

0x43e: Pop(0)
0x43f: IF (Stack[-1] == 0) GOTO 0x44d; Pop(1)

0x440: @@ GetPFPosition(Stack[-5])
0x441: Pop(0)
0x442: @ GetPFPosition(Stack[-4])
0x443: Pop(0)
0x444: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x445: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x446: @@ GetAttackDistance(Stack[-1])
0x447: Pop(0)
0x448: Push((int) 50)
0x449: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x44a: Pop(0); Push(Stack[-1] * Stack[-1]);
0x44b: Stack[-12] = Stack[-3] <= Stack[-1]; Pop(1);
0x44c: Return(); Pop(10)

0x44d: Stack[-11] = (bool) 0
0x44e: Return(); Pop(10)

0x44f: PushEmpty(bool)
0x450: Stack[-1] = (bool) 0
0x451: PushEmpty(bool)
0x452: Call2 0x42d

0x453: Pop(0)
0x454: IF (Stack[-1] == 0) GOTO 0x45a; Pop(1)

0x455: PushEmpty(bool)
0x456: Call2 0x45f

0x457: Pop(0)
0x458: IF (Stack[-1] == 0) GOTO 0x45a; Pop(1)

0x459: Stack[-1] = (bool) 1
0x45a: IF (Stack[-1] == 0) GOTO 0x45d; Pop(1)

0x45b: Stack[-1] = (bool) 1
0x45c: Return(); Pop(0)

0x45d: Stack[-1] = (bool) 0
0x45e: Return(); Pop(0)

0x45f: PushEmpty(object, bool, float, cvector, cvector, object, bool, float, cvector, cvector)
0x460: @ GetScene(Stack[-5])
0x461: Pop(0)
0x462: Stack[-4] = (bool) 0
0x463: PushEmpty(cvector, object)
0x464: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x465: Call2 0xaed

0x466: Pop(1)
0x467: Pop(1); Push(( -Stack[-1])
0x468: @ FindDirLength(Stack[-4], Stack[-1], Stack[-5])
0x469: Pop(1)
0x46a: Pop(0); Push((bool) Stack[-3] < Stack[5 + Tasks[-1].StackPointer])
0x46b: IF (Stack[-1] == 0) GOTO 0x46d; Pop(1)

0x46c: GOTO 0x489

0x46d: @ Face(Stack[-0])
0x46e: Pop(0)
0x46f: Push("all")
0x470: Push("bjump")
0x471: @ PlayAnimation(Stack[-2], Stack[-1])
0x472: Pop(2)
0x473: @@ GetPFPosition(Stack[-2])
0x474: Pop(0)
0x475: @ GetPFPosition(Stack[-1])
0x476: Pop(0)
0x477: @ WaitForAnimEnd()
0x478: Pop(0)
0x479: PushEmpty()
0x47a: Call2 0x4b7

0x47b: Pop(0)
0x47c: @ StopAsync()
0x47d: Pop(0)
0x47e: Push(CVector(0.0, 0.0, 0.0))
0x47f: @ SetSpeed(Stack[-1])
0x480: Pop(1)
0x481: Stack[-4] = (bool) 1
0x482: PushEmpty(bool)
0x483: Call2 0x42d

0x484: Pop(0)
0x485: Pop(1); Push((bool) Stack[-1] == 0)
0x486: IF (Stack[-1] == 0) GOTO 0x488; Pop(1)

0x487: GOTO 0x489

0x488: GOTO 0x463

0x489: Stack[-11] = Stack[-4]
0x48a: Return(); Pop(10)

0x48b: Stack[-5] = 0
0x48c: PushEmpty(bool, bool)
0x48d: Push("IsAttacking")
0x48e: Push((int) 1)
0x48f: Pop(2); Push(IsFuncExist(Stack[0 + Tasks[-1].StackPointer], Stack[-2], Stack[-1]))
0x490: IF (Stack[-1] == 0) GOTO 0x495; Pop(1)

0x491: @@ IsAttacking(Stack[-1])
0x492: Pop(0)
0x493: Stack[-3] = Stack[-1]
0x494: Return(); Pop(2)

0x495: Stack[-3] = (bool) 0
0x496: Return(); Pop(2)

0x497: PushEmpty(float, int, float, int)
0x498: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x499: IF (Stack[-1] == 0) GOTO 0x49b; Pop(1)

0x49a: Return(); Pop(4)

0x49b: Push( Stack[6 + Tasks[-1].StackPointer] )
0x49c: IF (Stack[-1] == 0) GOTO 0x4a3; Pop(1)

0x49d: Push((int) -1)
0x49e: Stack[6 + Tasks[-1].StackPointer] = Stack[6 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x49f: Push((int) 0)
0x4a0: Pop(1); Push((bool) Stack[6 + Tasks[-1].StackPointer] > Stack[-1])
0x4a1: IF (Stack[-1] == 0) GOTO 0x4a3; Pop(1)

0x4a2: Return(); Pop(4)

0x4a3: @ rand(Stack[-2])
0x4a4: Pop(0)
0x4a5: PushEmpty(float)
0x4a6: Call2 0x4c7

0x4a7: Pop(0)
0x4a8: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x4a9: IF (Stack[-1] == 0) GOTO 0x4b6; Pop(1)

0x4aa: @ irand(Stack[-1], Stack[-2])
0x4ab: Pop(0)
0x4ac: Push((int) 1)
0x4ad: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x4ae: Push("attack")
0x4af: Pop(1); Push(Stack[-1] + Stack[-2]);
0x4b0: @ Speak(Stack[-1])
0x4b1: Pop(1)
0x4b2: PushEmpty(int)
0x4b3: Call2 0x4c5

0x4b4: Stack[6 + Tasks[-1].StackPointer] = Stack[-1]
0x4b5: Pop(1)
0x4b6: Return(); Pop(4)

0x4b7: PushEmpty(object)
0x4b8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4b9: Call2 0xc92

0x4ba: Pop(1)
0x4bb: Return(); Pop(0)

0x4bc: PushEmpty(string)
0x4bd: Stack[-1] = "attack_stay"
0x4be: Call2 0xc33

0x4bf: Pop(1)
0x4c0: Return(); Pop(0)

0x4c1: PushEmpty()
0x4c2: Return(); Pop(0)

0x4c3: Stack[-1] = (bool) 1
0x4c4: Return(); Pop(0)

0x4c5: Stack[-1] = (int) 1
0x4c6: Return(); Pop(0)

0x4c7: Stack[-1] = (float) 0.5
0x4c8: Return(); Pop(0)

0x4c9: PushEmpty(bool, bool)
0x4ca: Stack[3 + Tasks[-1].StackPointer] = Stack[-7]
0x4cb: Push((int) 2)
0x4cc: Push((int) 2)
0x4cd: @ SetTimer(Stack[-2], Stack[-1])
0x4ce: Pop(2)
0x4cf: PushEmpty(bool, object, float, float, bool, bool)
0x4d0: Stack[-5] = Stack[-13]
0x4d1: Stack[-4] = Stack[-12]
0x4d2: Stack[-3] = Stack[-11]
0x4d3: Stack[-2] = Stack[-10]
0x4d4: Stack[-1] = Stack[-9]
0x4d5: Call2 0x4fc

0x4d6: Stack[-7] = Stack[-6]
0x4d7: Pop(6)
0x4d8: Push((int) 2)
0x4d9: @ KillTimer(Stack[-1])
0x4da: Pop(1)
0x4db: Stack[-8] = Stack[-1]
0x4dc: Return(); Pop(2)

0x4dd: PushEmpty(object, object)
0x4de: Push((int) 2)
0x4df: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x4e0: IF (Stack[-1] == 0) GOTO 0x4ef; Pop(1)

0x4e1: @ GetMainOutdoorScene(Stack[-1])
0x4e2: Pop(0)
0x4e3: Push("b9q03_helpme")
0x4e4: Push(GlobalVars[1])
0x4e5: Push((int) 1)
0x4e6: Pop(2); Push(Stack[-2] + Stack[-1]);
0x4e7: Pop(2); Push(Stack[-2] + Stack[-1]);
0x4e8: @ BroadcastMessage(Stack[-1], Stack[-3], Stack[-2])
0x4e9: Pop(1)
0x4ea: Push("helpme timer")
0x4eb: @ Trace(Stack[-1])
0x4ec: Pop(1)
0x4ed: Stack[-1] = 0
0x4ee: GOTO 0x4f3

0x4ef: PushEmpty(int)
0x4f0: Stack[-1] = Stack[-4]
0x4f1: Call2 0x52d

0x4f2: Pop(1)
0x4f3: Return(); Pop(2)

0x4f4: PushEmpty()
0x4f5: Call2 0x53b

0x4f6: Pop(0)
0x4f7: PushEmpty(bool, int)
0x4f8: Stack[-1] = (int) 0
0x4f9: Call2 0xdef

0x4fa: Pop(2)
0x4fb: Return(); Pop(0)

0x4fc: PushEmpty(bool, bool, bool, bool)
0x4fd: PushEmpty(object)
0x4fe: Stack[-1] = Stack[-10]
0x4ff: Call2 0xc92

0x500: Pop(1)
0x501: Push((int) 1)
0x502: Push((int) 5)
0x503: @ SetTimer(Stack[-2], Stack[-1])
0x504: Pop(2)
0x505: @ CanSee(Stack[-2], Stack[-9])
0x506: Pop(0)
0x507: Push(Stack[-2])
0x508: IF (Stack[-1] == 0) GOTO 0x50f; Pop(1)

0x509: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x50a: PushEmpty(object)
0x50b: Stack[-1] = Stack[-10]
0x50c: Call2 0xc1d

0x50d: Pop(1)
0x50e: GOTO 0x510

0x50f: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x510: PushEmpty(bool, object)
0x511: Stack[-1] = Stack[-11]
0x512: Call2 0xaf4

0x513: Pop(1)
0x514: IF (Stack[-1] == 0) GOTO 0x51a; Pop(1)

0x515: PushEmpty(object)
0x516: Call2 0xc5c

0x517: Pop(0)
0x518: @ SendPlayerEnemy(Stack[-10], Stack[-1])
0x519: Pop(1)
0x51a: PushEmpty(bool, object, float, float, bool, bool)
0x51b: Stack[-5] = Stack[-15]
0x51c: Stack[-4] = Stack[-14]
0x51d: Stack[-3] = Stack[-13]
0x51e: Stack[-2] = Stack[-12]
0x51f: Stack[-1] = Stack[-11]
0x520: Call2 0x565

0x521: Stack[-7] = Stack[-6]
0x522: Pop(6)
0x523: Push( Stack[2 + Tasks[-1].StackPointer] )
0x524: IF (Stack[-1] == 0) GOTO 0x528; Pop(1)

0x525: Push("head")
0x526: @ UnlookAsync(Stack[-1])
0x527: Pop(1)
0x528: Push((int) 1)
0x529: @ KillTimer(Stack[-1])
0x52a: Pop(1)
0x52b: Stack[-10] = Stack[-1]
0x52c: Return(); Pop(4)

0x52d: PushEmpty()
0x52e: Push((int) 1)
0x52f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x530: IF (Stack[-1] == 0) GOTO 0x536; Pop(1)

0x531: PushEmpty(object)
0x532: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x533: Call2 0xc92

0x534: Pop(1)
0x535: GOTO 0x53a

0x536: PushEmpty(int)
0x537: Stack[-1] = Stack[-2]
0x538: Call2 0x5cb

0x539: Pop(1)
0x53a: Return(); Pop(0)

0x53b: Push((int) 1)
0x53c: @ KillTimer(Stack[-1])
0x53d: Pop(1)
0x53e: Push( Stack[2 + Tasks[-1].StackPointer] )
0x53f: IF (Stack[-1] == 0) GOTO 0x544; Pop(1)

0x540: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x541: Push("head")
0x542: @ UnlookAsync(Stack[-1])
0x543: Pop(1)
0x544: PushEmpty()
0x545: Call2 0x5e1

0x546: Pop(0)
0x547: Return(); Pop(0)

0x548: PushEmpty()
0x549: PushEmpty(bool)
0x54a: Stack[-1] = (bool) 0
0x54b: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0x54c: IF (Stack[-1] == 0) GOTO 0x550; Pop(1)

0x54d: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x54e: IF (Stack[-1] == 0) GOTO 0x550; Pop(1)

0x54f: Stack[-1] = (bool) 1
0x550: IF (Stack[-1] == 0) GOTO 0x556; Pop(1)

0x551: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x552: PushEmpty(object)
0x553: Stack[-1] = Stack[-2]
0x554: Call2 0xc1d

0x555: Pop(1)
0x556: Return(); Pop(0)

0x557: PushEmpty()
0x558: PushEmpty(bool)
0x559: Stack[-1] = (bool) 0
0x55a: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0x55b: IF (Stack[-1] == 0) GOTO 0x55f; Pop(1)

0x55c: Push( Stack[2 + Tasks[-1].StackPointer] )
0x55d: IF (Stack[-1] == 0) GOTO 0x55f; Pop(1)

0x55e: Stack[-1] = (bool) 1
0x55f: IF (Stack[-1] == 0) GOTO 0x564; Pop(1)

0x560: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x561: Push("head")
0x562: @ UnlookAsync(Stack[-1])
0x563: Pop(1)
0x564: Return(); Pop(0)

0x565: PushEmpty(bool, bool, object, cvector, cvector, cvector, float, object, bool, bool, object, cvector, cvector, cvector, float, object)
0x566: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x567: Stack[1 + Tasks[-1].StackPointer] = Stack[-21]
0x568: Stack[-7] = Stack[-17]
0x569: PushEmpty(bool, object)
0x56a: Stack[-1] = Stack[-23]
0x56b: Call2 0x5f1

0x56c: Pop(1)
0x56d: Pop(1); Push((bool) Stack[-1] == 0)
0x56e: IF (Stack[-1] == 0) GOTO 0x571; Pop(1)

0x56f: Stack[-22] = (bool) 0
0x570: Return(); Pop(16)

0x571: @@ GetPosition(Stack[-5])
0x572: Pop(0)
0x573: @ GetPosition(Stack[-4])
0x574: Pop(0)
0x575: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x576: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x577: PushEmpty(bool)
0x578: Stack[-1] = (bool) 0
0x579: Push((int) 0)
0x57a: Pop(1); Push((bool) Stack[-21] > Stack[-1])
0x57b: IF (Stack[-1] == 0) GOTO 0x580; Pop(1)

0x57c: Pop(0); Push(Stack[-20] * Stack[-20]);
0x57d: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x57e: IF (Stack[-1] == 0) GOTO 0x580; Pop(1)

0x57f: Stack[-1] = (bool) 1
0x580: IF (Stack[-1] == 0) GOTO 0x585; Pop(1)

0x581: @ Stop()
0x582: Pop(0)
0x583: Stack[-22] = (bool) 0
0x584: Return(); Pop(16)

0x585: Pop(0); Push(Stack[-20] * Stack[-20]);
0x586: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x587: IF (Stack[-1] == 0) GOTO 0x5c3; Pop(1)

0x588: @@ GetPFPosition(Stack[-5])
0x589: Pop(0)
0x58a: @ FindPathTo(Stack[-1], Stack[-5])
0x58b: Pop(0)
0x58c: Pop(0); Push(( Stack[-1] != 0 )
0x58d: IF (Stack[-1] == 0) GOTO 0x590; Pop(1)

0x58e: Stack[-6] = Stack[-1]
0x58f: Stack[-1] = 0
0x590: Pop(0); Push(( Stack[-6] != 0 )
0x591: IF (Stack[-1] == 0) GOTO 0x5b1; Pop(1)

0x592: Push(Stack[-7])
0x593: IF (Stack[-1] == 0) GOTO 0x59a; Pop(1)

0x594: Stack[-7] = (bool) 0
0x595: @ RotatePath(Stack[-6], Stack[-8])
0x596: Pop(0)
0x597: Pop(0); Push((bool) Stack[-8] == 0)
0x598: IF (Stack[-1] == 0) GOTO 0x59a; Pop(1)

0x599: GOTO 0x5c9

0x59a: Push((int) 0)
0x59b: Push((float)0.3)
0x59c: @ SetTimer(Stack[-2], Stack[-1])
0x59d: Pop(2)
0x59e: PushEmpty(string)
0x59f: Call2 0x5f8

0x5a0: Pop(0)
0x5a1: PushEmpty(string)
0x5a2: Call2 0x5fa

0x5a3: Pop(0)
0x5a4: @ FollowPath(Stack[-8], Stack[-20], Stack[-10], Stack[-2], Stack[-1])
0x5a5: Pop(2)
0x5a6: Pop(0); Push((bool) Stack[-8] == 0)
0x5a7: IF (Stack[-1] == 0) GOTO 0x5af; Pop(1)

0x5a8: Push( Stack[0 + Tasks[-1].StackPointer] )
0x5a9: IF (Stack[-1] == 0) GOTO 0x5ad; Pop(1)

0x5aa: Stack[-6] = 0
0x5ab: GOTO 0x5c9

0x5ac: GOTO 0x5ae

0x5ad: GOTO 0x5c8

0x5ae: GOTO 0x5b0

0x5af: Stack[-6] = 0
0x5b0: GOTO 0x5c1

0x5b1: Push((int) 0)
0x5b2: @ KillTimer(Stack[-1])
0x5b3: Pop(1)
0x5b4: Push((float)0.5)
0x5b5: @ Sleep(Stack[-1], Stack[-9])
0x5b6: Pop(1)
0x5b7: Pop(0); Push((bool) Stack[-8] == 0)
0x5b8: IF (Stack[-1] == 0) GOTO 0x5bd; Pop(1)

0x5b9: Push( Stack[0 + Tasks[-1].StackPointer] )
0x5ba: IF (Stack[-1] == 0) GOTO 0x5bd; Pop(1)

0x5bb: Stack[-6] = 0
0x5bc: GOTO 0x5c9

0x5bd: Push((int) 0)
0x5be: Push((float)0.3)
0x5bf: @ SetTimer(Stack[-2], Stack[-1])
0x5c0: Pop(2)
0x5c1: Stack[-1] = 0
0x5c2: GOTO 0x5c7

0x5c3: Push((int) 0)
0x5c4: @ KillTimer(Stack[-1])
0x5c5: Pop(1)
0x5c6: GOTO 0x5c9

0x5c7: Stack[-6] = 0
0x5c8: GOTO 0x569

0x5c9: Stack[-22] = !Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x5ca: Return(); Pop(16)

0x5cb: PushEmpty()
0x5cc: Push((int) 0)
0x5cd: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x5ce: IF (Stack[-1] == 0) GOTO 0x5d0; Pop(1)

0x5cf: Return(); Pop(0)

0x5d0: PushEmpty(bool, object)
0x5d1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5d2: Call2 0x5f1

0x5d3: Pop(1)
0x5d4: Pop(1); Push((bool) Stack[-1] == 0)
0x5d5: IF (Stack[-1] == 0) GOTO 0x5d7; Pop(1)

0x5d6: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x5d7: Push((int) 0)
0x5d8: @ KillTimer(Stack[-1])
0x5d9: Pop(1)
0x5da: @ Stop()
0x5db: Pop(0)
0x5dc: Return(); Pop(0)

0x5dd: PushEmpty()
0x5de: @ RequestClearPath(Stack[-1])
0x5df: Pop(0)
0x5e0: Return(); Pop(0)

0x5e1: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x5e2: Push((int) 0)
0x5e3: @ KillTimer(Stack[-1])
0x5e4: Pop(1)
0x5e5: @ Stop()
0x5e6: Pop(0)
0x5e7: Return(); Pop(0)

0x5e8: PushEmpty()
0x5e9: PushEmpty()
0x5ea: Call2 0x53b

0x5eb: Pop(0)
0x5ec: PushEmpty(object)
0x5ed: Stack[-1] = Stack[-2]
0x5ee: Call2 0xeb6

0x5ef: Pop(1)
0x5f0: Return(); Pop(0)

0x5f1: PushEmpty()
0x5f2: PushEmpty(bool, object)
0x5f3: Stack[-1] = Stack[-3]
0x5f4: Call2 0xb77

0x5f5: Stack[-4] = Stack[-2]
0x5f6: Pop(2)
0x5f7: Return(); Pop(0)

0x5f8: Stack[-1] = "walk"
0x5f9: Return(); Pop(0)

0x5fa: Stack[-1] = "run"
0x5fb: Return(); Pop(0)

0x5fc: PushEmpty()
0x5fd: PushEmpty(bool, object)
0x5fe: Stack[-1] = Stack[-4]
0x5ff: Call2 0xb77

0x600: Pop(1)
0x601: Pop(1); Push((bool) Stack[-1] == 0)
0x602: IF (Stack[-1] == 0) GOTO 0x608; Pop(1)

0x603: PushEmpty(bool, int)
0x604: Stack[-1] = (int) 2
0x605: Call2 0xdef

0x606: Pop(2)
0x607: Return(); Pop(0)

0x608: Push((int) 0)
0x609: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x60a: IF (Stack[-1] == 0) GOTO 0x61a; Pop(1)

0x60b: Push((int) 3)
0x60c: @ SetTimer(Stack[-1], Stack[-2])
0x60d: Pop(1)
0x60e: PushEmpty(bool, object, float, float, bool, bool)
0x60f: Stack[-5] = Stack[-8]
0x610: Stack[-4] = (float) 350.0
0x611: Stack[-3] = (int) 6000
0x612: Stack[-2] = (bool) 1
0x613: Stack[-1] = (bool) 1
0x614: Call2 0x668

0x615: Pop(6)
0x616: Push((int) 3)
0x617: @ KillTimer(Stack[-1])
0x618: Pop(1)
0x619: GOTO 0x622

0x61a: PushEmpty(bool, object, float, float, bool, bool)
0x61b: Stack[-5] = Stack[-8]
0x61c: Stack[-4] = (float) 350.0
0x61d: Stack[-3] = (int) 6000
0x61e: Stack[-2] = (bool) 1
0x61f: Stack[-1] = (bool) 1
0x620: Call2 0x668

0x621: Pop(6)
0x622: Return(); Pop(0)

0x623: PushEmpty()
0x624: Call2 0x6e4

0x625: Pop(0)
0x626: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x627: PushEmpty(bool, int)
0x628: Stack[-1] = (int) 0
0x629: Call2 0xdef

0x62a: Pop(2)
0x62b: Return(); Pop(0)

0x62c: PushEmpty()
0x62d: PushEmpty(bool, object, string)
0x62e: Stack[-2] = Stack[-5]
0x62f: Stack[-1] = Stack[-4]
0x630: Call2 0xcf7

0x631: Pop(2)
0x632: IF (Stack[-1] == 0) GOTO 0x636; Pop(1)

0x633: PushEmpty()
0x634: Call2 0x6e4

0x635: Pop(0)
0x636: Return(); Pop(0)

0x637: PushEmpty()
0x638: PushEmpty(bool, object)
0x639: Stack[-1] = Stack[-3]
0x63a: Call2 0xd45

0x63b: Pop(1)
0x63c: IF (Stack[-1] == 0) GOTO 0x641; Pop(1)

0x63d: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x63e: PushEmpty()
0x63f: Call2 0x6e4

0x640: Pop(0)
0x641: Return(); Pop(0)

0x642: PushEmpty()
0x643: PushEmpty(bool, object)
0x644: Stack[-1] = Stack[-3]
0x645: Call2 0xd80

0x646: Pop(1)
0x647: IF (Stack[-1] == 0) GOTO 0x64c; Pop(1)

0x648: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x649: PushEmpty()
0x64a: Call2 0x6e4

0x64b: Pop(0)
0x64c: Return(); Pop(0)

0x64d: PushEmpty()
0x64e: EventDisable(42)
0x64f: EventDisable(1)
0x650: EventDisable(3)
0x651: PushEmpty()
0x652: Call2 0x6e4

0x653: Pop(0)
0x654: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x655: PushEmpty(bool, object)
0x656: Stack[-1] = Stack[-3]
0x657: Call2 0xe53

0x658: Pop(2)
0x659: Return(); Pop(0)

0x65a: PushEmpty()
0x65b: Push((int) 3)
0x65c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x65d: IF (Stack[-1] == 0) GOTO 0x663; Pop(1)

0x65e: PushEmpty()
0x65f: Call2 0x6e4

0x660: Pop(0)
0x661: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x662: Return(); Pop(0)

0x663: PushEmpty(int)
0x664: Stack[-1] = Stack[-2]
0x665: Call2 0x6ce

0x666: Pop(1)
0x667: Return(); Pop(0)

0x668: PushEmpty(bool, bool, object, cvector, cvector, cvector, float, object, bool, bool, object, cvector, cvector, cvector, float, object)
0x669: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x66a: Stack[1 + Tasks[-1].StackPointer] = Stack[-21]
0x66b: Stack[-7] = Stack[-17]
0x66c: PushEmpty(bool, object)
0x66d: Stack[-1] = Stack[-23]
0x66e: Call2 0x6f4

0x66f: Pop(1)
0x670: Pop(1); Push((bool) Stack[-1] == 0)
0x671: IF (Stack[-1] == 0) GOTO 0x674; Pop(1)

0x672: Stack[-22] = (bool) 0
0x673: Return(); Pop(16)

0x674: @@ GetPosition(Stack[-5])
0x675: Pop(0)
0x676: @ GetPosition(Stack[-4])
0x677: Pop(0)
0x678: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x679: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x67a: PushEmpty(bool)
0x67b: Stack[-1] = (bool) 0
0x67c: Push((int) 0)
0x67d: Pop(1); Push((bool) Stack[-21] > Stack[-1])
0x67e: IF (Stack[-1] == 0) GOTO 0x683; Pop(1)

0x67f: Pop(0); Push(Stack[-20] * Stack[-20]);
0x680: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x681: IF (Stack[-1] == 0) GOTO 0x683; Pop(1)

0x682: Stack[-1] = (bool) 1
0x683: IF (Stack[-1] == 0) GOTO 0x688; Pop(1)

0x684: @ Stop()
0x685: Pop(0)
0x686: Stack[-22] = (bool) 0
0x687: Return(); Pop(16)

0x688: Pop(0); Push(Stack[-20] * Stack[-20]);
0x689: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x68a: IF (Stack[-1] == 0) GOTO 0x6c6; Pop(1)

0x68b: @@ GetPFPosition(Stack[-5])
0x68c: Pop(0)
0x68d: @ FindPathTo(Stack[-1], Stack[-5])
0x68e: Pop(0)
0x68f: Pop(0); Push(( Stack[-1] != 0 )
0x690: IF (Stack[-1] == 0) GOTO 0x693; Pop(1)

0x691: Stack[-6] = Stack[-1]
0x692: Stack[-1] = 0
0x693: Pop(0); Push(( Stack[-6] != 0 )
0x694: IF (Stack[-1] == 0) GOTO 0x6b4; Pop(1)

0x695: Push(Stack[-7])
0x696: IF (Stack[-1] == 0) GOTO 0x69d; Pop(1)

0x697: Stack[-7] = (bool) 0
0x698: @ RotatePath(Stack[-6], Stack[-8])
0x699: Pop(0)
0x69a: Pop(0); Push((bool) Stack[-8] == 0)
0x69b: IF (Stack[-1] == 0) GOTO 0x69d; Pop(1)

0x69c: GOTO 0x6cc

0x69d: Push((int) 0)
0x69e: Push((float)0.3)
0x69f: @ SetTimer(Stack[-2], Stack[-1])
0x6a0: Pop(2)
0x6a1: PushEmpty(string)
0x6a2: Call2 0x6fb

0x6a3: Pop(0)
0x6a4: PushEmpty(string)
0x6a5: Call2 0x6fd

0x6a6: Pop(0)
0x6a7: @ FollowPath(Stack[-8], Stack[-20], Stack[-10], Stack[-2], Stack[-1])
0x6a8: Pop(2)
0x6a9: Pop(0); Push((bool) Stack[-8] == 0)
0x6aa: IF (Stack[-1] == 0) GOTO 0x6b2; Pop(1)

0x6ab: Push( Stack[0 + Tasks[-1].StackPointer] )
0x6ac: IF (Stack[-1] == 0) GOTO 0x6b0; Pop(1)

0x6ad: Stack[-6] = 0
0x6ae: GOTO 0x6cc

0x6af: GOTO 0x6b1

0x6b0: GOTO 0x6cb

0x6b1: GOTO 0x6b3

0x6b2: Stack[-6] = 0
0x6b3: GOTO 0x6c4

0x6b4: Push((int) 0)
0x6b5: @ KillTimer(Stack[-1])
0x6b6: Pop(1)
0x6b7: Push((float)0.5)
0x6b8: @ Sleep(Stack[-1], Stack[-9])
0x6b9: Pop(1)
0x6ba: Pop(0); Push((bool) Stack[-8] == 0)
0x6bb: IF (Stack[-1] == 0) GOTO 0x6c0; Pop(1)

0x6bc: Push( Stack[0 + Tasks[-1].StackPointer] )
0x6bd: IF (Stack[-1] == 0) GOTO 0x6c0; Pop(1)

0x6be: Stack[-6] = 0
0x6bf: GOTO 0x6cc

0x6c0: Push((int) 0)
0x6c1: Push((float)0.3)
0x6c2: @ SetTimer(Stack[-2], Stack[-1])
0x6c3: Pop(2)
0x6c4: Stack[-1] = 0
0x6c5: GOTO 0x6ca

0x6c6: Push((int) 0)
0x6c7: @ KillTimer(Stack[-1])
0x6c8: Pop(1)
0x6c9: GOTO 0x6cc

0x6ca: Stack[-6] = 0
0x6cb: GOTO 0x66c

0x6cc: Stack[-22] = !Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x6cd: Return(); Pop(16)

0x6ce: PushEmpty()
0x6cf: Push((int) 0)
0x6d0: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x6d1: IF (Stack[-1] == 0) GOTO 0x6d3; Pop(1)

0x6d2: Return(); Pop(0)

0x6d3: PushEmpty(bool, object)
0x6d4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6d5: Call2 0x6f4

0x6d6: Pop(1)
0x6d7: Pop(1); Push((bool) Stack[-1] == 0)
0x6d8: IF (Stack[-1] == 0) GOTO 0x6da; Pop(1)

0x6d9: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x6da: Push((int) 0)
0x6db: @ KillTimer(Stack[-1])
0x6dc: Pop(1)
0x6dd: @ Stop()
0x6de: Pop(0)
0x6df: Return(); Pop(0)

0x6e0: PushEmpty()
0x6e1: @ RequestClearPath(Stack[-1])
0x6e2: Pop(0)
0x6e3: Return(); Pop(0)

0x6e4: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x6e5: Push((int) 0)
0x6e6: @ KillTimer(Stack[-1])
0x6e7: Pop(1)
0x6e8: @ Stop()
0x6e9: Pop(0)
0x6ea: Return(); Pop(0)

0x6eb: PushEmpty()
0x6ec: PushEmpty()
0x6ed: Call2 0x6e4

0x6ee: Pop(0)
0x6ef: PushEmpty(object)
0x6f0: Stack[-1] = Stack[-2]
0x6f1: Call2 0xeb6

0x6f2: Pop(1)
0x6f3: Return(); Pop(0)

0x6f4: PushEmpty()
0x6f5: PushEmpty(bool, object)
0x6f6: Stack[-1] = Stack[-3]
0x6f7: Call2 0xb77

0x6f8: Stack[-4] = Stack[-2]
0x6f9: Pop(2)
0x6fa: Return(); Pop(0)

0x6fb: Stack[-1] = "walk"
0x6fc: Return(); Pop(0)

0x6fd: Stack[-1] = "run"
0x6fe: Return(); Pop(0)

0x6ff: PushEmpty()
0x700: Call2 0x736

0x701: Pop(0)
0x702: Return(); Pop(0)

0x703: PushEmpty()
0x704: Call2 0x787

0x705: Pop(0)
0x706: PushEmpty(bool, int)
0x707: Stack[-1] = (int) 0
0x708: Call2 0xdef

0x709: Pop(2)
0x70a: Return(); Pop(0)

0x70b: PushEmpty()
0x70c: PushEmpty(bool, object, string)
0x70d: Stack[-2] = Stack[-5]
0x70e: Stack[-1] = Stack[-4]
0x70f: Call2 0xcf7

0x710: Pop(2)
0x711: IF (Stack[-1] == 0) GOTO 0x715; Pop(1)

0x712: PushEmpty()
0x713: Call2 0x787

0x714: Pop(0)
0x715: Return(); Pop(0)

0x716: PushEmpty()
0x717: PushEmpty(bool, object)
0x718: Stack[-1] = Stack[-3]
0x719: Call2 0xd45

0x71a: Pop(1)
0x71b: IF (Stack[-1] == 0) GOTO 0x71f; Pop(1)

0x71c: PushEmpty()
0x71d: Call2 0x787

0x71e: Pop(0)
0x71f: Return(); Pop(0)

0x720: PushEmpty()
0x721: PushEmpty(bool, object)
0x722: Stack[-1] = Stack[-3]
0x723: Call2 0xd80

0x724: Pop(1)
0x725: IF (Stack[-1] == 0) GOTO 0x729; Pop(1)

0x726: PushEmpty()
0x727: Call2 0x787

0x728: Pop(0)
0x729: Return(); Pop(0)

0x72a: PushEmpty()
0x72b: EventDisable(42)
0x72c: EventDisable(1)
0x72d: EventDisable(3)
0x72e: PushEmpty()
0x72f: Call2 0x787

0x730: Pop(0)
0x731: PushEmpty(bool, object)
0x732: Stack[-1] = Stack[-3]
0x733: Call2 0xe53

0x734: Pop(2)
0x735: Return(); Pop(0)

0x736: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x737: @ WaitForAnimEnd()
0x738: Pop(0)
0x739: PushEmpty(bool)
0x73a: Call2 0xc18

0x73b: Pop(0)
0x73c: Pop(1); Push((bool) Stack[-1] == 0)
0x73d: IF (Stack[-1] == 0) GOTO 0x73f; Pop(1)

0x73e: Return(); Pop(14)

0x73f: PushEmpty(int)
0x740: Call2 0xca2

0x741: Stack[-8] = Stack[-1]
0x742: Pop(1)
0x743: Stack[-6] = (int) 0
0x744: PushEmpty(bool)
0x745: Stack[-1] = (bool) 0
0x746: Push((int) 5)
0x747: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x748: IF (Stack[-1] == 0) GOTO 0x74e; Pop(1)

0x749: PushEmpty(bool)
0x74a: Call2 0xc18

0x74b: Pop(0)
0x74c: IF (Stack[-1] == 0) GOTO 0x74e; Pop(1)

0x74d: Stack[-1] = (bool) 1
0x74e: IF (Stack[-1] == 0) GOTO 0x782; Pop(1)

0x74f: Push((int) 3)
0x750: @ irand(Stack[-6], Stack[-1])
0x751: Pop(1)
0x752: Push((int) 0)
0x753: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x754: IF (Stack[-1] == 0) GOTO 0x766; Pop(1)

0x755: Push(Stack[-7])
0x756: IF (Stack[-1] == 0) GOTO 0x765; Pop(1)

0x757: @ irand(Stack[-4], Stack[-7])
0x758: Pop(0)
0x759: Push("all")
0x75a: PushEmpty(string, int)
0x75b: Stack[-1] = Stack[-7]
0x75c: Call2 0xc9b

0x75d: Pop(1)
0x75e: @ PlayAnimation(Stack[-2], Stack[-1])
0x75f: Pop(2)
0x760: @ WaitForAnimEnd(Stack[-3])
0x761: Pop(0)
0x762: Pop(0); Push((bool) Stack[-3] == 0)
0x763: IF (Stack[-1] == 0) GOTO 0x765; Pop(1)

0x764: GOTO 0x782

0x765: GOTO 0x777

0x766: Push((int) 1)
0x767: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x768: IF (Stack[-1] == 0) GOTO 0x774; Pop(1)

0x769: Push((int) 4)
0x76a: @ rand(Stack[-3], Stack[-1])
0x76b: Pop(1)
0x76c: Push((int) 1)
0x76d: Pop(1); Push(Stack[-3] + Stack[-1]);
0x76e: @ Sleep(Stack[-1], Stack[-2])
0x76f: Pop(1)
0x770: Pop(0); Push((bool) Stack[-1] == 0)
0x771: IF (Stack[-1] == 0) GOTO 0x773; Pop(1)

0x772: GOTO 0x782

0x773: GOTO 0x777

0x774: Push(Stack[-6])
0x775: IF (Stack[-1] == 0) GOTO 0x777; Pop(1)

0x776: GOTO 0x782

0x777: PushEmpty(bool)
0x778: Call2 0x785

0x779: Pop(0)
0x77a: Pop(1); Push((bool) Stack[-1] == 0)
0x77b: IF (Stack[-1] == 0) GOTO 0x77d; Pop(1)

0x77c: GOTO 0x782

0x77d: @ ResetAAS()
0x77e: Pop(0)
0x77f: Push((int) 1)
0x780: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x781: GOTO 0x744

0x782: @ ResetAAS()
0x783: Pop(0)
0x784: Return(); Pop(14)

0x785: Stack[-1] = (bool) 1
0x786: Return(); Pop(0)

0x787: @ StopAnimation()
0x788: Pop(0)
0x789: @ StopGroup0()
0x78a: Pop(0)
0x78b: Return(); Pop(0)

0x78c: PushEmpty()
0x78d: Push(CvectorIndex(Stack[-3], 1))
0x78e: Push((int) 30)
0x78f: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x790: CvectorIndex(Stack[-4], 1) = Stack[-1];
0x791: PushEmpty(bool, cvector, cvector, float, float, bool, bool)
0x792: Stack[-6] = Stack[-10]
0x793: Stack[-5] = Stack[-9]
0x794: Stack[-4] = (int) 100
0x795: Stack[-3] = (int) 4000
0x796: Stack[-2] = Stack[-8]
0x797: Stack[-1] = (bool) 1
0x798: Call2 0x7d1

0x799: Stack[-11] = Stack[-7]
0x79a: Pop(7)
0x79b: Return(); Pop(0)

0x79c: PushEmpty()
0x79d: Call2 0x84d

0x79e: Pop(0)
0x79f: PushEmpty(bool, int)
0x7a0: Stack[-1] = (int) 0
0x7a1: Call2 0xdef

0x7a2: Pop(2)
0x7a3: Return(); Pop(0)

0x7a4: PushEmpty()
0x7a5: PushEmpty(bool, object, string)
0x7a6: Stack[-2] = Stack[-5]
0x7a7: Stack[-1] = Stack[-4]
0x7a8: Call2 0xcf7

0x7a9: Pop(2)
0x7aa: IF (Stack[-1] == 0) GOTO 0x7ae; Pop(1)

0x7ab: PushEmpty()
0x7ac: Call2 0x84d

0x7ad: Pop(0)
0x7ae: Return(); Pop(0)

0x7af: PushEmpty()
0x7b0: PushEmpty(bool, object)
0x7b1: Stack[-1] = Stack[-3]
0x7b2: Call2 0xd45

0x7b3: Pop(1)
0x7b4: IF (Stack[-1] == 0) GOTO 0x7b8; Pop(1)

0x7b5: PushEmpty()
0x7b6: Call2 0x84d

0x7b7: Pop(0)
0x7b8: Return(); Pop(0)

0x7b9: PushEmpty()
0x7ba: PushEmpty(bool, object)
0x7bb: Stack[-1] = Stack[-3]
0x7bc: Call2 0xd80

0x7bd: Pop(1)
0x7be: IF (Stack[-1] == 0) GOTO 0x7c2; Pop(1)

0x7bf: PushEmpty()
0x7c0: Call2 0x84d

0x7c1: Pop(0)
0x7c2: Return(); Pop(0)

0x7c3: PushEmpty()
0x7c4: EventDisable(42)
0x7c5: EventDisable(1)
0x7c6: EventDisable(3)
0x7c7: PushEmpty()
0x7c8: Call2 0x84d

0x7c9: Pop(0)
0x7ca: PushEmpty(bool, object)
0x7cb: Stack[-1] = Stack[-3]
0x7cc: Call2 0xe53

0x7cd: Pop(2)
0x7ce: Return(); Pop(0)

0x7cf: Stack[-1] = (bool) 1
0x7d0: Return(); Pop(0)

0x7d1: PushEmpty(bool, bool, object, cvector, cvector, cvector, float, object, bool, bool, object, cvector, cvector, cvector, float, object)
0x7d2: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x7d3: Stack[-7] = Stack[-17]
0x7d4: PushEmpty(bool)
0x7d5: Call2 0x7cf

0x7d6: Pop(0)
0x7d7: Pop(1); Push((bool) Stack[-1] == 0)
0x7d8: IF (Stack[-1] == 0) GOTO 0x7db; Pop(1)

0x7d9: Stack[-23] = (bool) 0
0x7da: Return(); Pop(16)

0x7db: Stack[-5] = Stack[-22]
0x7dc: @ GetPosition(Stack[-4])
0x7dd: Pop(0)
0x7de: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x7df: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x7e0: PushEmpty(bool)
0x7e1: Stack[-1] = (bool) 0
0x7e2: Push((int) 0)
0x7e3: Pop(1); Push((bool) Stack[-21] > Stack[-1])
0x7e4: IF (Stack[-1] == 0) GOTO 0x7e9; Pop(1)

0x7e5: Pop(0); Push(Stack[-20] * Stack[-20]);
0x7e6: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x7e7: IF (Stack[-1] == 0) GOTO 0x7e9; Pop(1)

0x7e8: Stack[-1] = (bool) 1
0x7e9: IF (Stack[-1] == 0) GOTO 0x7ee; Pop(1)

0x7ea: @ Stop()
0x7eb: Pop(0)
0x7ec: Stack[-23] = (bool) 0
0x7ed: Return(); Pop(16)

0x7ee: Pop(0); Push(Stack[-20] * Stack[-20]);
0x7ef: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x7f0: IF (Stack[-1] == 0) GOTO 0x82a; Pop(1)

0x7f1: @ FindPathTo(Stack[-1], Stack[-5])
0x7f2: Pop(0)
0x7f3: Pop(0); Push(( Stack[-1] != 0 )
0x7f4: IF (Stack[-1] == 0) GOTO 0x7f7; Pop(1)

0x7f5: Stack[-6] = Stack[-1]
0x7f6: Stack[-1] = 0
0x7f7: Pop(0); Push(( Stack[-6] != 0 )
0x7f8: IF (Stack[-1] == 0) GOTO 0x818; Pop(1)

0x7f9: Push(Stack[-7])
0x7fa: IF (Stack[-1] == 0) GOTO 0x801; Pop(1)

0x7fb: Stack[-7] = (bool) 0
0x7fc: @ RotatePath(Stack[-6], Stack[-8])
0x7fd: Pop(0)
0x7fe: Pop(0); Push((bool) Stack[-8] == 0)
0x7ff: IF (Stack[-1] == 0) GOTO 0x801; Pop(1)

0x800: GOTO 0x830

0x801: Push((int) 0)
0x802: Push((float)0.3)
0x803: @ SetTimer(Stack[-2], Stack[-1])
0x804: Pop(2)
0x805: PushEmpty(string)
0x806: Call2 0x85d

0x807: Pop(0)
0x808: PushEmpty(string)
0x809: Call2 0x85f

0x80a: Pop(0)
0x80b: @ FollowPath(Stack[-8], Stack[-20], Stack[-10], Stack[-2], Stack[-1])
0x80c: Pop(2)
0x80d: Pop(0); Push((bool) Stack[-8] == 0)
0x80e: IF (Stack[-1] == 0) GOTO 0x816; Pop(1)

0x80f: Push( Stack[0 + Tasks[-1].StackPointer] )
0x810: IF (Stack[-1] == 0) GOTO 0x814; Pop(1)

0x811: Stack[-6] = 0
0x812: GOTO 0x830

0x813: GOTO 0x815

0x814: GOTO 0x82f

0x815: GOTO 0x817

0x816: Stack[-6] = 0
0x817: GOTO 0x828

0x818: Push((int) 0)
0x819: @ KillTimer(Stack[-1])
0x81a: Pop(1)
0x81b: Push((float)0.5)
0x81c: @ Sleep(Stack[-1], Stack[-9])
0x81d: Pop(1)
0x81e: Pop(0); Push((bool) Stack[-8] == 0)
0x81f: IF (Stack[-1] == 0) GOTO 0x824; Pop(1)

0x820: Push( Stack[0 + Tasks[-1].StackPointer] )
0x821: IF (Stack[-1] == 0) GOTO 0x824; Pop(1)

0x822: Stack[-6] = 0
0x823: GOTO 0x830

0x824: Push((int) 0)
0x825: Push((float)0.3)
0x826: @ SetTimer(Stack[-2], Stack[-1])
0x827: Pop(2)
0x828: Stack[-1] = 0
0x829: GOTO 0x82e

0x82a: Push((int) 0)
0x82b: @ KillTimer(Stack[-1])
0x82c: Pop(1)
0x82d: GOTO 0x830

0x82e: Stack[-6] = 0
0x82f: GOTO 0x7d4

0x830: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x831: IF (Stack[-1] == 0) GOTO 0x836; Pop(1)

0x832: Push(CvectorIndex(Stack[-21], 0))
0x833: Push(CvectorIndex(Stack[-22], 2))
0x834: @ RotateAsync(Stack[-2], Stack[-1])
0x835: Pop(2)
0x836: Stack[-23] = !Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x837: Return(); Pop(16)

0x838: PushEmpty()
0x839: Push((int) 0)
0x83a: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x83b: IF (Stack[-1] == 0) GOTO 0x83d; Pop(1)

0x83c: Return(); Pop(0)

0x83d: PushEmpty(bool)
0x83e: Call2 0x7cf

0x83f: Pop(0)
0x840: Pop(1); Push((bool) Stack[-1] == 0)
0x841: IF (Stack[-1] == 0) GOTO 0x843; Pop(1)

0x842: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x843: Push((int) 0)
0x844: @ KillTimer(Stack[-1])
0x845: Pop(1)
0x846: @ Stop()
0x847: Pop(0)
0x848: Return(); Pop(0)

0x849: PushEmpty()
0x84a: @ RequestClearPath(Stack[-1])
0x84b: Pop(0)
0x84c: Return(); Pop(0)

0x84d: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x84e: Push((int) 0)
0x84f: @ KillTimer(Stack[-1])
0x850: Pop(1)
0x851: @ Stop()
0x852: Pop(0)
0x853: Return(); Pop(0)

0x854: PushEmpty()
0x855: PushEmpty()
0x856: Call2 0x84d

0x857: Pop(0)
0x858: PushEmpty(object)
0x859: Stack[-1] = Stack[-2]
0x85a: Call2 0xeb6

0x85b: Pop(1)
0x85c: Return(); Pop(0)

0x85d: Stack[-1] = "walk"
0x85e: Return(); Pop(0)

0x85f: Stack[-1] = "run"
0x860: Return(); Pop(0)

0x861: PushEmpty(bool, object, cvector, cvector, bool, object, cvector, cvector)
0x862: @ GetMainOutdoorScene(Stack[-3])
0x863: Pop(0)
0x864: Push("pt_b9q03_bonfire")
0x865: Push(GlobalVars[1])
0x866: Push((int) 1)
0x867: Pop(2); Push(Stack[-2] + Stack[-1]);
0x868: Pop(2); Push(Stack[-2] + Stack[-1]);
0x869: @@ GetLocator(Stack[-1], Stack[-5], Stack[-3], Stack[-2])
0x86a: Pop(1)
0x86b: Pop(0); Push((bool) Stack[-4] == 0)
0x86c: IF (Stack[-1] == 0) GOTO 0x86f; Pop(1)

0x86d: Stack[-9] = (bool) 0
0x86e: Return(); Pop(8)

0x86f: PushEmpty(bool, cvector, cvector, bool)
0x870: Stack[-3] = Stack[-6]
0x871: Stack[-2] = Stack[-5]
0x872: Stack[-1] = (bool) 0
0x873: Call2 0x8a3

0x874: Stack[-13] = Stack[-4]
0x875: Pop(4)
0x876: Return(); Pop(8)

0x877: Stack[-3] = 0
0x878: PushEmpty()
0x879: PushEmpty(bool, object, string)
0x87a: Stack[-2] = Stack[-5]
0x87b: Stack[-1] = Stack[-4]
0x87c: Call2 0xcf7

0x87d: Pop(2)
0x87e: IF (Stack[-1] == 0) GOTO 0x882; Pop(1)

0x87f: PushEmpty()
0x880: Call2 0x939

0x881: Pop(0)
0x882: Return(); Pop(0)

0x883: PushEmpty()
0x884: PushEmpty(bool, object)
0x885: Stack[-1] = Stack[-3]
0x886: Call2 0xd45

0x887: Pop(1)
0x888: IF (Stack[-1] == 0) GOTO 0x88c; Pop(1)

0x889: PushEmpty()
0x88a: Call2 0x939

0x88b: Pop(0)
0x88c: Return(); Pop(0)

0x88d: PushEmpty()
0x88e: PushEmpty(bool, object)
0x88f: Stack[-1] = Stack[-3]
0x890: Call2 0xd80

0x891: Pop(1)
0x892: IF (Stack[-1] == 0) GOTO 0x896; Pop(1)

0x893: PushEmpty()
0x894: Call2 0x939

0x895: Pop(0)
0x896: Return(); Pop(0)

0x897: PushEmpty()
0x898: EventDisable(42)
0x899: EventDisable(1)
0x89a: EventDisable(3)
0x89b: PushEmpty()
0x89c: Call2 0x939

0x89d: Pop(0)
0x89e: PushEmpty(bool, object)
0x89f: Stack[-1] = Stack[-3]
0x8a0: Call2 0xe53

0x8a1: Pop(2)
0x8a2: Return(); Pop(0)

0x8a3: PushEmpty()
0x8a4: Push(CvectorIndex(Stack[-3], 1))
0x8a5: Push((int) 30)
0x8a6: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x8a7: CvectorIndex(Stack[-4], 1) = Stack[-1];
0x8a8: PushEmpty(bool, cvector, cvector, float, float, bool, bool)
0x8a9: Stack[-6] = Stack[-10]
0x8aa: Stack[-5] = Stack[-9]
0x8ab: Stack[-4] = (int) 100
0x8ac: Stack[-3] = (int) 4000
0x8ad: Stack[-2] = Stack[-8]
0x8ae: Stack[-1] = (bool) 1
0x8af: Call2 0x8bd

0x8b0: Stack[-11] = Stack[-7]
0x8b1: Pop(7)
0x8b2: Return(); Pop(0)

0x8b3: PushEmpty()
0x8b4: Call2 0x939

0x8b5: Pop(0)
0x8b6: PushEmpty(bool, int)
0x8b7: Stack[-1] = (int) 0
0x8b8: Call2 0xdef

0x8b9: Pop(2)
0x8ba: Return(); Pop(0)

0x8bb: Stack[-1] = (bool) 1
0x8bc: Return(); Pop(0)

0x8bd: PushEmpty(bool, bool, object, cvector, cvector, cvector, float, object, bool, bool, object, cvector, cvector, cvector, float, object)
0x8be: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x8bf: Stack[-7] = Stack[-17]
0x8c0: PushEmpty(bool)
0x8c1: Call2 0x8bb

0x8c2: Pop(0)
0x8c3: Pop(1); Push((bool) Stack[-1] == 0)
0x8c4: IF (Stack[-1] == 0) GOTO 0x8c7; Pop(1)

0x8c5: Stack[-23] = (bool) 0
0x8c6: Return(); Pop(16)

0x8c7: Stack[-5] = Stack[-22]
0x8c8: @ GetPosition(Stack[-4])
0x8c9: Pop(0)
0x8ca: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x8cb: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x8cc: PushEmpty(bool)
0x8cd: Stack[-1] = (bool) 0
0x8ce: Push((int) 0)
0x8cf: Pop(1); Push((bool) Stack[-21] > Stack[-1])
0x8d0: IF (Stack[-1] == 0) GOTO 0x8d5; Pop(1)

0x8d1: Pop(0); Push(Stack[-20] * Stack[-20]);
0x8d2: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x8d3: IF (Stack[-1] == 0) GOTO 0x8d5; Pop(1)

0x8d4: Stack[-1] = (bool) 1
0x8d5: IF (Stack[-1] == 0) GOTO 0x8da; Pop(1)

0x8d6: @ Stop()
0x8d7: Pop(0)
0x8d8: Stack[-23] = (bool) 0
0x8d9: Return(); Pop(16)

0x8da: Pop(0); Push(Stack[-20] * Stack[-20]);
0x8db: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x8dc: IF (Stack[-1] == 0) GOTO 0x916; Pop(1)

0x8dd: @ FindPathTo(Stack[-1], Stack[-5])
0x8de: Pop(0)
0x8df: Pop(0); Push(( Stack[-1] != 0 )
0x8e0: IF (Stack[-1] == 0) GOTO 0x8e3; Pop(1)

0x8e1: Stack[-6] = Stack[-1]
0x8e2: Stack[-1] = 0
0x8e3: Pop(0); Push(( Stack[-6] != 0 )
0x8e4: IF (Stack[-1] == 0) GOTO 0x904; Pop(1)

0x8e5: Push(Stack[-7])
0x8e6: IF (Stack[-1] == 0) GOTO 0x8ed; Pop(1)

0x8e7: Stack[-7] = (bool) 0
0x8e8: @ RotatePath(Stack[-6], Stack[-8])
0x8e9: Pop(0)
0x8ea: Pop(0); Push((bool) Stack[-8] == 0)
0x8eb: IF (Stack[-1] == 0) GOTO 0x8ed; Pop(1)

0x8ec: GOTO 0x91c

0x8ed: Push((int) 0)
0x8ee: Push((float)0.3)
0x8ef: @ SetTimer(Stack[-2], Stack[-1])
0x8f0: Pop(2)
0x8f1: PushEmpty(string)
0x8f2: Call2 0x949

0x8f3: Pop(0)
0x8f4: PushEmpty(string)
0x8f5: Call2 0x94b

0x8f6: Pop(0)
0x8f7: @ FollowPath(Stack[-8], Stack[-20], Stack[-10], Stack[-2], Stack[-1])
0x8f8: Pop(2)
0x8f9: Pop(0); Push((bool) Stack[-8] == 0)
0x8fa: IF (Stack[-1] == 0) GOTO 0x902; Pop(1)

0x8fb: Push( Stack[0 + Tasks[-1].StackPointer] )
0x8fc: IF (Stack[-1] == 0) GOTO 0x900; Pop(1)

0x8fd: Stack[-6] = 0
0x8fe: GOTO 0x91c

0x8ff: GOTO 0x901

0x900: GOTO 0x91b

0x901: GOTO 0x903

0x902: Stack[-6] = 0
0x903: GOTO 0x914

0x904: Push((int) 0)
0x905: @ KillTimer(Stack[-1])
0x906: Pop(1)
0x907: Push((float)0.5)
0x908: @ Sleep(Stack[-1], Stack[-9])
0x909: Pop(1)
0x90a: Pop(0); Push((bool) Stack[-8] == 0)
0x90b: IF (Stack[-1] == 0) GOTO 0x910; Pop(1)

0x90c: Push( Stack[0 + Tasks[-1].StackPointer] )
0x90d: IF (Stack[-1] == 0) GOTO 0x910; Pop(1)

0x90e: Stack[-6] = 0
0x90f: GOTO 0x91c

0x910: Push((int) 0)
0x911: Push((float)0.3)
0x912: @ SetTimer(Stack[-2], Stack[-1])
0x913: Pop(2)
0x914: Stack[-1] = 0
0x915: GOTO 0x91a

0x916: Push((int) 0)
0x917: @ KillTimer(Stack[-1])
0x918: Pop(1)
0x919: GOTO 0x91c

0x91a: Stack[-6] = 0
0x91b: GOTO 0x8c0

0x91c: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x91d: IF (Stack[-1] == 0) GOTO 0x922; Pop(1)

0x91e: Push(CvectorIndex(Stack[-21], 0))
0x91f: Push(CvectorIndex(Stack[-22], 2))
0x920: @ RotateAsync(Stack[-2], Stack[-1])
0x921: Pop(2)
0x922: Stack[-23] = !Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x923: Return(); Pop(16)

0x924: PushEmpty()
0x925: Push((int) 0)
0x926: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x927: IF (Stack[-1] == 0) GOTO 0x929; Pop(1)

0x928: Return(); Pop(0)

0x929: PushEmpty(bool)
0x92a: Call2 0x8bb

0x92b: Pop(0)
0x92c: Pop(1); Push((bool) Stack[-1] == 0)
0x92d: IF (Stack[-1] == 0) GOTO 0x92f; Pop(1)

0x92e: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x92f: Push((int) 0)
0x930: @ KillTimer(Stack[-1])
0x931: Pop(1)
0x932: @ Stop()
0x933: Pop(0)
0x934: Return(); Pop(0)

0x935: PushEmpty()
0x936: @ RequestClearPath(Stack[-1])
0x937: Pop(0)
0x938: Return(); Pop(0)

0x939: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x93a: Push((int) 0)
0x93b: @ KillTimer(Stack[-1])
0x93c: Pop(1)
0x93d: @ Stop()
0x93e: Pop(0)
0x93f: Return(); Pop(0)

0x940: PushEmpty()
0x941: PushEmpty()
0x942: Call2 0x939

0x943: Pop(0)
0x944: PushEmpty(object)
0x945: Stack[-1] = Stack[-2]
0x946: Call2 0xeb6

0x947: Pop(1)
0x948: Return(); Pop(0)

0x949: Stack[-1] = "walk"
0x94a: Return(); Pop(0)

0x94b: Stack[-1] = "run"
0x94c: Return(); Pop(0)

0x94d: PushEmpty(int, int)
0x94e: Stack[-1] = (int) 0
0x94f: Pop(0); Push((bool) Stack[-1] < Stack[-3])
0x950: IF (Stack[-1] == 0) GOTO 0x95b; Pop(1)

0x951: PushEmpty(string)
0x952: Stack[-1] = "hunt"
0x953: Call2 0x993

0x954: Pop(1)
0x955: Push( Stack[0 + Tasks[-1].StackPointer] )
0x956: IF (Stack[-1] == 0) GOTO 0x958; Pop(1)

0x957: GOTO 0x95b

0x958: Push((int) 1)
0x959: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x95a: GOTO 0x94f

0x95b: Return(); Pop(2)

0x95c: PushEmpty()
0x95d: Call2 0x9a8

0x95e: Pop(0)
0x95f: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x960: PushEmpty(bool, int)
0x961: Stack[-1] = (int) 0
0x962: Call2 0xdef

0x963: Pop(2)
0x964: Return(); Pop(0)

0x965: PushEmpty()
0x966: PushEmpty(bool, object, string)
0x967: Stack[-2] = Stack[-5]
0x968: Stack[-1] = Stack[-4]
0x969: Call2 0xcf7

0x96a: Pop(2)
0x96b: IF (Stack[-1] == 0) GOTO 0x970; Pop(1)

0x96c: PushEmpty()
0x96d: Call2 0x9a8

0x96e: Pop(0)
0x96f: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x970: Return(); Pop(0)

0x971: PushEmpty()
0x972: PushEmpty(bool, object)
0x973: Stack[-1] = Stack[-3]
0x974: Call2 0xd45

0x975: Pop(1)
0x976: IF (Stack[-1] == 0) GOTO 0x97b; Pop(1)

0x977: PushEmpty()
0x978: Call2 0x9a8

0x979: Pop(0)
0x97a: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x97b: Return(); Pop(0)

0x97c: PushEmpty()
0x97d: PushEmpty(bool, object)
0x97e: Stack[-1] = Stack[-3]
0x97f: Call2 0xd80

0x980: Pop(1)
0x981: IF (Stack[-1] == 0) GOTO 0x986; Pop(1)

0x982: PushEmpty()
0x983: Call2 0x9a8

0x984: Pop(0)
0x985: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x986: Return(); Pop(0)

0x987: PushEmpty()
0x988: EventDisable(42)
0x989: EventDisable(1)
0x98a: EventDisable(3)
0x98b: PushEmpty()
0x98c: Call2 0x9a8

0x98d: Pop(0)
0x98e: PushEmpty(bool, object)
0x98f: Stack[-1] = Stack[-3]
0x990: Call2 0xe53

0x991: Pop(2)
0x992: Return(); Pop(0)

0x993: PushEmpty(bool, bool, bool, bool)
0x994: @ WaitForAnimEnd()
0x995: Pop(0)
0x996: PushEmpty(bool)
0x997: Call2 0xc18

0x998: Pop(0)
0x999: Pop(1); Push((bool) Stack[-1] == 0)
0x99a: IF (Stack[-1] == 0) GOTO 0x99c; Pop(1)

0x99b: Return(); Pop(4)

0x99c: Push("all")
0x99d: @ HasAnimation(Stack[-3], Stack[-1], Stack[-6])
0x99e: Pop(1)
0x99f: Pop(0); Push((bool) Stack[-2] == 0)
0x9a0: IF (Stack[-1] == 0) GOTO 0x9a2; Pop(1)

0x9a1: Return(); Pop(4)

0x9a2: Push("all")
0x9a3: @ PlayAnimation(Stack[-1], Stack[-6])
0x9a4: Pop(1)
0x9a5: @ WaitForAnimEnd(Stack[-1])
0x9a6: Pop(0)
0x9a7: Return(); Pop(4)

0x9a8: @ StopAnimation()
0x9a9: Pop(0)
0x9aa: @ StopGroup0()
0x9ab: Pop(0)
0x9ac: Return(); Pop(0)

0x9ad: PushEmpty()
0x9ae: Push((int) 1)
0x9af: Push(GlobalVars[3])
0x9b0: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x9b1: IF (Stack[-1] == 0) GOTO 0x9b6; Pop(1)

0x9b2: PushEmpty(bool)
0x9b3: Stack[-1] = (bool) 0
0x9b4: Call2 0xe70

0x9b5: Pop(1)
0x9b6: Push((int) 3)
0x9b7: Push(GlobalVars[3])
0x9b8: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x9b9: IF (Stack[-1] == 0) GOTO 0x9be; Pop(1)

0x9ba: PushEmpty(bool)
0x9bb: Stack[-1] = (bool) 0
0x9bc: Call2 0xe89

0x9bd: Pop(1)
0x9be: PushEmpty(object, string, int, int)
0x9bf: PushEmpty(object)
0x9c0: Call2 0xc5c

0x9c1: Stack[-5] = Stack[-1]
0x9c2: Pop(1)
0x9c3: Stack[-3] = "coffee"
0x9c4: Stack[-2] = (int) 1
0x9c5: Stack[-1] = (int) 3
0x9c6: Call2 0xc28

0x9c7: Pop(4)
0x9c8: PushEmpty(object, string, int, int)
0x9c9: PushEmpty(object)
0x9ca: Call2 0xc5c

0x9cb: Stack[-5] = Stack[-1]
0x9cc: Pop(1)
0x9cd: Stack[-3] = "tvirin"
0x9ce: Stack[-2] = (int) 1
0x9cf: Stack[-1] = (int) 6
0x9d0: Call2 0xc28

0x9d1: Pop(4)
0x9d2: PushEmpty(object, string, int, int)
0x9d3: PushEmpty(object)
0x9d4: Call2 0xc5c

0x9d5: Stack[-5] = Stack[-1]
0x9d6: Pop(1)
0x9d7: Stack[-3] = "silver_ring"
0x9d8: Stack[-2] = (int) 1
0x9d9: Stack[-1] = (int) 9
0x9da: Call2 0xc28

0x9db: Pop(4)
0x9dc: PushEmpty(object, string, int, int)
0x9dd: PushEmpty(object)
0x9de: Call2 0xc5c

0x9df: Stack[-5] = Stack[-1]
0x9e0: Pop(1)
0x9e1: Stack[-3] = "gold_ring"
0x9e2: Stack[-2] = (int) 1
0x9e3: Stack[-1] = (int) 8
0x9e4: Call2 0xc28

0x9e5: Pop(4)
0x9e6: PushEmpty(object, string, int, int)
0x9e7: PushEmpty(object)
0x9e8: Call2 0xc5c

0x9e9: Stack[-5] = Stack[-1]
0x9ea: Pop(1)
0x9eb: Stack[-3] = "bracelet"
0x9ec: Stack[-2] = (int) 1
0x9ed: Stack[-1] = (int) 6
0x9ee: Call2 0xc28

0x9ef: Pop(4)
0x9f0: PushEmpty(object, string, int, int)
0x9f1: PushEmpty(object)
0x9f2: Call2 0xc5c

0x9f3: Stack[-5] = Stack[-1]
0x9f4: Pop(1)
0x9f5: Stack[-3] = "watch"
0x9f6: Stack[-2] = (int) 1
0x9f7: Stack[-1] = (int) 9
0x9f8: Call2 0xc28

0x9f9: Pop(4)
0x9fa: PushEmpty(object, string, int, int)
0x9fb: PushEmpty(object)
0x9fc: Call2 0xc5c

0x9fd: Stack[-5] = Stack[-1]
0x9fe: Pop(1)
0x9ff: Stack[-3] = "beads"
0xa00: Stack[-2] = (int) 1
0xa01: Stack[-1] = (int) 9
0xa02: Call2 0xc28

0xa03: Pop(4)
0xa04: PushEmpty(object, string, int, int)
0xa05: PushEmpty(object)
0xa06: Call2 0xc5c

0xa07: Stack[-5] = Stack[-1]
0xa08: Pop(1)
0xa09: Stack[-3] = "ear_ring"
0xa0a: Stack[-2] = (int) 1
0xa0b: Stack[-1] = (int) 9
0xa0c: Call2 0xc28

0xa0d: Pop(4)
0xa0e: PushEmpty(object, string, int, int)
0xa0f: PushEmpty(object)
0xa10: Call2 0xc5c

0xa11: Stack[-5] = Stack[-1]
0xa12: Pop(1)
0xa13: Stack[-3] = "feromicin"
0xa14: Stack[-2] = (int) 1
0xa15: Stack[-1] = (int) 10
0xa16: Call2 0xc28

0xa17: Pop(4)
0xa18: PushEmpty()
0xa19: Call2 0xcd7

0xa1a: Pop(0)
0xa1b: PushEmpty(object)
0xa1c: Stack[-1] = Stack[-2]
0xa1d: Call2 0xa28

0xa1e: Pop(1)
0xa1f: Return(); Pop(0)

0xa20: PushEmpty(object)
0xa21: Call2 0xc5c

0xa22: Pop(0)
0xa23: @ RemoveActor(Stack[-1])
0xa24: Pop(1)
0xa25: @ Hold()
0xa26: Pop(0)
0xa27: Return(); Pop(0)

0xa28: PushEmpty()
0xa29: EventDisable(0)
0xa2a: PushEmpty(object)
0xa2b: Stack[-1] = Stack[-2]
0xa2c: Call2 0xa41

0xa2d: Pop(1)
0xa2e: Push((int) 50)
0xa2f: Push((int) 40)
0xa30: @ SetRTEnvelope(Stack[-2], Stack[-1])
0xa31: Pop(2)
0xa32: EventEnable(0)
0xa33: @ Hold()
0xa34: Pop(0)
0xa35: GOTO 0xa33

0xa36: Return(); Pop(0)

0xa37: PushEmpty(bool, bool)
0xa38: @ IsOverrideActive(Stack[-1])
0xa39: Pop(0)
0xa3a: Pop(0); Push((bool) Stack[-1] == 0)
0xa3b: IF (Stack[-1] == 0) GOTO 0xa40; Pop(1)

0xa3c: PushEmpty(object)
0xa3d: Stack[-1] = Stack[-4]
0xa3e: Call2 0xcb9

0xa3f: Pop(1)
0xa40: Return(); Pop(2)

0xa41: PushEmpty(cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector, cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector)
0xa42: Pop(0); Push((bool) Stack[-21] == 0)
0xa43: IF (Stack[-1] == 0) GOTO 0xa49; Pop(1)

0xa44: PushEmpty(string)
0xa45: Stack[-1] = "fdie"
0xa46: Call2 0xa9c

0xa47: Pop(1)
0xa48: GOTO 0xa9b

0xa49: @@ GetPosition(Stack[-10])
0xa4a: Pop(0)
0xa4b: @ GetPosition(Stack[-9])
0xa4c: Pop(0)
0xa4d: @ GetDirection(Stack[-8])
0xa4e: Pop(0)
0xa4f: Stack[-7] = Stack[-9] - Stack[-10]; Pop(0);
0xa50: Push(CvectorIndex(Stack[-7], 0))
0xa51: Push(CvectorIndex(Stack[-9], 0))
0xa52: Pop(2); Push(Stack[-2] * Stack[-1]);
0xa53: Push(CvectorIndex(Stack[-8], 2))
0xa54: Push(CvectorIndex(Stack[-10], 2))
0xa55: Pop(2); Push(Stack[-2] * Stack[-1]);
0xa56: Pop(2); Push(Stack[-2] + Stack[-1]);
0xa57: Push((int) 0)
0xa58: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0xa59: IF (Stack[-1] == 0) GOTO 0xa5c; Pop(1)

0xa5a: Stack[-6] = "fdie"
0xa5b: GOTO 0xa5d

0xa5c: Stack[-6] = "bdie"
0xa5d: @ RemoveRTEnvelope()
0xa5e: Pop(0)
0xa5f: @ SetDeathState()
0xa60: Pop(0)
0xa61: @ Stop()
0xa62: Pop(0)
0xa63: @ StopAsync()
0xa64: Pop(0)
0xa65: Stack[-5] = Stack[-21]
0xa66: Push("GetScriptProperty")
0xa67: Push((int) 2)
0xa68: Pop(2); Push(IsFuncExist(Stack[-23], Stack[-2], Stack[-1]))
0xa69: IF (Stack[-1] == 0) GOTO 0xa75; Pop(1)

0xa6a: Push("Owner")
0xa6b: @@ HasScriptProperty(Stack[-5], Stack[-1])
0xa6c: Pop(1)
0xa6d: Push(Stack[-4])
0xa6e: IF (Stack[-1] == 0) GOTO 0xa75; Pop(1)

0xa6f: Push("Owner")
0xa70: @@ GetScriptProperty(Stack[-6], Stack[-1])
0xa71: Pop(1)
0xa72: Pop(0); Push((bool) Stack[-5] == 0)
0xa73: IF (Stack[-1] == 0) GOTO 0xa75; Pop(1)

0xa74: Stack[-5] = Stack[-21]
0xa75: Push("@GetEyesHeight")
0xa76: Push((int) 1)
0xa77: Pop(2); Push(IsFuncExist(Stack[-7], Stack[-2], Stack[-1]))
0xa78: IF (Stack[-1] == 0) GOTO 0xa84; Pop(1)

0xa79: @@ GetEyesHeight(Stack[-2])
0xa7a: Pop(0)
0xa7b: Stack[-1] = CVector(0.0, 0.0, 0.0)
0xa7c: Push(CvectorIndex(Stack[-1], 1))
0xa7d: Stack[-1] = Stack[-3]
0xa7e: CvectorIndex(Stack[-2], 1) = Stack[-1];
0xa7f: Push("head")
0xa80: @ LookAsync(Stack[-22], Stack[-1], Stack[-2])
0xa81: Pop(1)
0xa82: Stack[-3] = (bool) 1
0xa83: GOTO 0xa85

0xa84: Stack[-3] = (bool) 0
0xa85: PushEmpty(string)
0xa86: Stack[-1] = Stack[-7]
0xa87: Call2 0xc33

0xa88: Pop(1)
0xa89: Push("all")
0xa8a: @ PlayAnimation(Stack[-1], Stack[-7])
0xa8b: Pop(1)
0xa8c: @ WaitForAnimEnd()
0xa8d: Pop(0)
0xa8e: Push(Stack[-3])
0xa8f: IF (Stack[-1] == 0) GOTO 0xa95; Pop(1)

0xa90: @ StopAsync()
0xa91: Pop(0)
0xa92: Push("head")
0xa93: @ UnlookAsync(Stack[-1])
0xa94: Pop(1)
0xa95: Push("all")
0xa96: @ LockAnimationEnd(Stack[-1], Stack[-7])
0xa97: Pop(1)
0xa98: @ RemoveEnvelope()
0xa99: Pop(0)
0xa9a: Stack[-5] = 0
0xa9b: Return(); Pop(20)

0xa9c: PushEmpty()
0xa9d: @ RemoveRTEnvelope()
0xa9e: Pop(0)
0xa9f: @ SetDeathState()
0xaa0: Pop(0)
0xaa1: @ Stop()
0xaa2: Pop(0)
0xaa3: @ StopAsync()
0xaa4: Pop(0)
0xaa5: @ StopSecondaryAnimation()
0xaa6: Pop(0)
0xaa7: PushEmpty(string)
0xaa8: Stack[-1] = Stack[-2]
0xaa9: Call2 0xc33

0xaaa: Pop(1)
0xaab: Push("all")
0xaac: @ PlayAnimation(Stack[-1], Stack[-2])
0xaad: Pop(1)
0xaae: @ WaitForAnimEnd()
0xaaf: Pop(0)
0xab0: Push("all")
0xab1: @ LockAnimationEnd(Stack[-1], Stack[-2])
0xab2: Pop(1)
0xab3: @ RemoveEnvelope()
0xab4: Pop(0)
0xab5: Return(); Pop(0)

0xab6: PushEmpty()
0xab7: Return(); Pop(0)

0xab8: PushEmpty()
0xab9: Return(); Pop(0)

0xaba: PushEmpty()
0xabb: Return(); Pop(0)

0xabc: Push(GlobalVars[0])
0xabd: IF (Stack[-1] == 0) GOTO 0xac5; Pop(1)

0xabe: PushEmpty(object)
0xabf: Call2 0xc5c

0xac0: Pop(0)
0xac1: @ RemoveActor(Stack[-1])
0xac2: Pop(1)
0xac3: @ Hold()
0xac4: Pop(0)
0xac5: PushEmpty(bool)
0xac6: Call2 0xc18

0xac7: Pop(0)
0xac8: Pop(1); Push((bool) Stack[-1] == 0)
0xac9: IF (Stack[-1] == 0) GOTO 0xacd; Pop(1)

0xaca: @ Hold()
0xacb: Pop(0)
0xacc: GOTO 0xac5

0xacd: Return(); Pop(0)

0xace: PushEmpty()
0xacf: Push("cleanup")
0xad0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xad1: IF (Stack[-1] == 0) GOTO 0xad9; Pop(1)

0xad2: PushEmpty(object)
0xad3: Call2 0xc5c

0xad4: Pop(0)
0xad5: @ RemoveActor(Stack[-1])
0xad6: Pop(1)
0xad7: @ Hold()
0xad8: Pop(0)
0xad9: Return(); Pop(0)

0xada: @ StopGroup0()
0xadb: Pop(0)
0xadc: @ sync()
0xadd: Pop(0)
0xade: Return(); Pop(0)

0xadf: PushEmpty()
0xae0: Push((int) 2)
0xae1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xae2: IF (Stack[-1] == 0) GOTO 0xae6; Pop(1)

0xae3: Stack[-2] = "fire"
0xae4: Return(); Pop(0)

0xae5: GOTO 0xaeb

0xae6: Push((int) 1)
0xae7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xae8: IF (Stack[-1] == 0) GOTO 0xaeb; Pop(1)

0xae9: Stack[-2] = "bullet"
0xaea: Return(); Pop(0)

0xaeb: Stack[-2] = "phys"
0xaec: Return(); Pop(0)

0xaed: PushEmpty(cvector, cvector, cvector, cvector)
0xaee: @ GetPosition(Stack[-2])
0xaef: Pop(0)
0xaf0: @@ GetPosition(Stack[-1])
0xaf1: Pop(0)
0xaf2: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0xaf3: Return(); Pop(4)

0xaf4: PushEmpty(bool, bool)
0xaf5: @ IsPlayerActor(Stack[-3], Stack[-1])
0xaf6: Pop(0)
0xaf7: Stack[-4] = Stack[-1]
0xaf8: Return(); Pop(2)

0xaf9: PushEmpty(bool, bool)
0xafa: Push("HasProperty")
0xafb: Push((int) 2)
0xafc: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0xafd: Pop(1); Push((bool) Stack[-1] == 0)
0xafe: IF (Stack[-1] == 0) GOTO 0xb01; Pop(1)

0xaff: Stack[-5] = (bool) 0
0xb00: Return(); Pop(2)

0xb01: @@ HasProperty(Stack[-3], Stack[-1])
0xb02: Pop(0)
0xb03: Stack[-5] = Stack[-1]
0xb04: Return(); Pop(2)

0xb05: PushEmpty(int, string, int, float, float, float, int, string, int, float, float, float)
0xb06: PushEmpty(bool, object, string)
0xb07: Stack[-2] = Stack[-18]
0xb08: Stack[-1] = "health"
0xb09: Call2 0xaf9

0xb0a: Pop(2)
0xb0b: Pop(1); Push((bool) Stack[-1] == 0)
0xb0c: IF (Stack[-1] == 0) GOTO 0xb0f; Pop(1)

0xb0d: Stack[-16] = (float) 0.0
0xb0e: Return(); Pop(12)

0xb0f: PushEmpty(bool, object, string)
0xb10: Stack[-2] = Stack[-18]
0xb11: Stack[-1] = "armor"
0xb12: Call2 0xaf9

0xb13: Pop(2)
0xb14: Pop(1); Push((bool) Stack[-1] == 0)
0xb15: IF (Stack[-1] == 0) GOTO 0xb18; Pop(1)

0xb16: Stack[-6] = (int) 0
0xb17: GOTO 0xb1b

0xb18: Push("armor")
0xb19: @@ GetProperty(Stack[-1], Stack[-7])
0xb1a: Pop(1)
0xb1b: Push("armor_")
0xb1c: PushEmpty(string, int)
0xb1d: Stack[-1] = Stack[-16]
0xb1e: Call2 0xadf

0xb1f: Pop(1)
0xb20: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0xb21: PushEmpty(bool, object, string)
0xb22: Stack[-2] = Stack[-18]
0xb23: Stack[-1] = Stack[-8]
0xb24: Call2 0xaf9

0xb25: Pop(2)
0xb26: Pop(1); Push((bool) Stack[-1] == 0)
0xb27: IF (Stack[-1] == 0) GOTO 0xb2a; Pop(1)

0xb28: Stack[-4] = (int) 0
0xb29: GOTO 0xb2c

0xb2a: @@ GetProperty(Stack[-5], Stack[-4])
0xb2b: Pop(0)
0xb2c: PushEmpty(float, float, float)
0xb2d: Pop(0); Push(Stack[-9] + Stack[-7]);
0xb2e: Push((float)100.0)
0xb2f: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0xb30: Stack[-1] = (int) 1
0xb31: Call2 0xc6c

0xb32: Stack[-6] = Stack[-3]
0xb33: Pop(3)
0xb34: Push("health")
0xb35: @@ GetProperty(Stack[-1], Stack[-3])
0xb36: Pop(1)
0xb37: Push((int) 1)
0xb38: Pop(1); Push(Stack[-1] - Stack[-4]);
0xb39: Stack[-2] = Stack[-15] * Stack[-1]; Pop(1);
0xb3a: Push("health")
0xb3b: PushEmpty(float, float, float, float)
0xb3c: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0xb3d: Stack[-2] = (int) 0
0xb3e: Stack[-1] = (int) 1
0xb3f: Call2 0xc73

0xb40: Pop(3)
0xb41: @@ SetProperty(Stack[-2], Stack[-1])
0xb42: Pop(2)
0xb43: PushEmpty(bool, object)
0xb44: Stack[-1] = Stack[-17]
0xb45: Call2 0xaf4

0xb46: Pop(1)
0xb47: IF (Stack[-1] == 0) GOTO 0xb4c; Pop(1)

0xb48: PushEmpty(float)
0xb49: Stack[-1] = -Stack[-2]; Pop(0);
0xb4a: Call2 0xc88

0xb4b: Pop(1)
0xb4c: Stack[-16] = Stack[-1]
0xb4d: Return(); Pop(12)

0xb4e: PushEmpty(bool, bool)
0xb4f: @@ IsDead(Stack[-1])
0xb50: Pop(0)
0xb51: Stack[-4] = Stack[-1]
0xb52: Return(); Pop(2)

0xb53: PushEmpty(object, object, object, object)
0xb54: Pop(0); Push((bool) Stack[-5] == 0)
0xb55: IF (Stack[-1] == 0) GOTO 0xb58; Pop(1)

0xb56: Stack[-6] = (bool) 0
0xb57: Return(); Pop(4)

0xb58: PushEmpty(bool)
0xb59: Stack[-1] = (bool) 0
0xb5a: Push("IsDead")
0xb5b: Push((int) 1)
0xb5c: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0xb5d: IF (Stack[-1] == 0) GOTO 0xb64; Pop(1)

0xb5e: PushEmpty(bool, object)
0xb5f: Stack[-1] = Stack[-8]
0xb60: Call2 0xb4e

0xb61: Pop(1)
0xb62: IF (Stack[-1] == 0) GOTO 0xb64; Pop(1)

0xb63: Stack[-1] = (bool) 1
0xb64: IF (Stack[-1] == 0) GOTO 0xb67; Pop(1)

0xb65: Stack[-6] = (bool) 0
0xb66: Return(); Pop(4)

0xb67: @ GetScene(Stack[-2])
0xb68: Pop(0)
0xb69: Pop(0); Push((bool) Stack[-2] == 0)
0xb6a: IF (Stack[-1] == 0) GOTO 0xb6d; Pop(1)

0xb6b: Stack[-6] = (bool) 0
0xb6c: Return(); Pop(4)

0xb6d: @@ GetScene(Stack[-1])
0xb6e: Pop(0)
0xb6f: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0xb70: IF (Stack[-1] == 0) GOTO 0xb73; Pop(1)

0xb71: Stack[-6] = (bool) 0
0xb72: Return(); Pop(4)

0xb73: Stack[-6] = (bool) 1
0xb74: Return(); Pop(4)

0xb75: Stack[-1] = 0
0xb76: Stack[-2] = 0
0xb77: PushEmpty(int, int)
0xb78: PushEmpty(bool, object)
0xb79: Stack[-1] = Stack[-5]
0xb7a: Call2 0xb53

0xb7b: Pop(1)
0xb7c: Pop(1); Push((bool) Stack[-1] == 0)
0xb7d: IF (Stack[-1] == 0) GOTO 0xb80; Pop(1)

0xb7e: Stack[-4] = (bool) 0
0xb7f: Return(); Pop(2)

0xb80: PushEmpty(bool, object, string)
0xb81: Stack[-2] = Stack[-6]
0xb82: Stack[-1] = "noaccess"
0xb83: Call2 0xaf9

0xb84: Pop(2)
0xb85: Pop(1); Push((bool) Stack[-1] == 0)
0xb86: IF (Stack[-1] == 0) GOTO 0xb89; Pop(1)

0xb87: Stack[-4] = (bool) 1
0xb88: Return(); Pop(2)

0xb89: Push("noaccess")
0xb8a: @@ GetProperty(Stack[-1], Stack[-2])
0xb8b: Pop(1)
0xb8c: Push((int) 0)
0xb8d: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0xb8e: Return(); Pop(2)

0xb8f: PushEmpty(bool, int, cvector, cvector, cvector, cvector, string, bool, int, cvector, cvector, cvector, cvector, string)
0xb90: Pop(0); Push((bool) Stack[-15] == 0)
0xb91: IF (Stack[-1] == 0) GOTO 0xb93; Pop(1)

0xb92: Return(); Pop(14)

0xb93: @ IsDead(Stack[-7])
0xb94: Pop(0)
0xb95: Push(Stack[-7])
0xb96: IF (Stack[-1] == 0) GOTO 0xb98; Pop(1)

0xb97: Return(); Pop(14)

0xb98: @ GetSecondaryAnimationType(Stack[-6])
0xb99: Pop(0)
0xb9a: Push((int) 0)
0xb9b: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0xb9c: IF (Stack[-1] == 0) GOTO 0xb9e; Pop(1)

0xb9d: Return(); Pop(14)

0xb9e: @@ GetPosition(Stack[-5])
0xb9f: Pop(0)
0xba0: @ GetPosition(Stack[-4])
0xba1: Pop(0)
0xba2: @ GetDirection(Stack[-3])
0xba3: Pop(0)
0xba4: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0xba5: Push(CvectorIndex(Stack[-2], 0))
0xba6: Push(CvectorIndex(Stack[-4], 0))
0xba7: Pop(2); Push(Stack[-2] * Stack[-1]);
0xba8: Push(CvectorIndex(Stack[-3], 2))
0xba9: Push(CvectorIndex(Stack[-5], 2))
0xbaa: Pop(2); Push(Stack[-2] * Stack[-1]);
0xbab: Pop(2); Push(Stack[-2] + Stack[-1]);
0xbac: Push((int) 0)
0xbad: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0xbae: IF (Stack[-1] == 0) GOTO 0xbb1; Pop(1)

0xbaf: Stack[-1] = "fhit"
0xbb0: GOTO 0xbb2

0xbb1: Stack[-1] = "bhit"
0xbb2: Push("hit_react")
0xbb3: Push("1")
0xbb4: Pop(1); Push(Stack[-3] + Stack[-1]);
0xbb5: Push("2")
0xbb6: Pop(1); Push(Stack[-4] + Stack[-1]);
0xbb7: Push((int) -10)
0xbb8: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xbb9: Pop(4)
0xbba: Return(); Pop(14)

0xbbb: PushEmpty(cvector, object, int, bool, cvector, cvector, int, int, cvector, cvector, object, int, bool, cvector, cvector, int, int, cvector)
0xbbc: PushEmpty(bool)
0xbbd: Stack[-1] = (bool) 0
0xbbe: PushEmpty(bool)
0xbbf: Stack[-1] = (bool) 0
0xbc0: Push(Stack[-23])
0xbc1: IF (Stack[-1] == 0) GOTO 0xbc6; Pop(1)

0xbc2: Push((int) 4)
0xbc3: Pop(1); Push((bool) Stack[-23] != Stack[-1])
0xbc4: IF (Stack[-1] == 0) GOTO 0xbc6; Pop(1)

0xbc5: Stack[-1] = (bool) 1
0xbc6: IF (Stack[-1] == 0) GOTO 0xbcb; Pop(1)

0xbc7: Push((int) 5)
0xbc8: Pop(1); Push((bool) Stack[-22] != Stack[-1])
0xbc9: IF (Stack[-1] == 0) GOTO 0xbcb; Pop(1)

0xbca: Stack[-1] = (bool) 1
0xbcb: IF (Stack[-1] == 0) GOTO 0xbfa; Pop(1)

0xbcc: PushEmpty(cvector, cvector)
0xbcd: PushEmpty(cvector, object)
0xbce: Stack[-1] = Stack[-25]
0xbcf: Call2 0xaed

0xbd0: Stack[-3] = Stack[-2]
0xbd1: Pop(2)
0xbd2: Call2 0xc62

0xbd3: Stack[-11] = Stack[-2]
0xbd4: Pop(2)
0xbd5: @ CreateVectorVector(Stack[-8])
0xbd6: Pop(0)
0xbd7: Stack[-7] = (int) 1
0xbd8: Push("hit")
0xbd9: Pop(1); Push(Stack[-1] + Stack[-8]);
0xbda: @ GetGeometryLocator(Stack[-1], Stack[-7], Stack[-6], Stack[-5])
0xbdb: Pop(1)
0xbdc: Pop(0); Push((bool) Stack[-6] == 0)
0xbdd: IF (Stack[-1] == 0) GOTO 0xbdf; Pop(1)

0xbde: GOTO 0xbe8

0xbdf: Pop(0); Push(Stack[-4] | Stack[-9]);
0xbe0: Push((float)0.70711)
0xbe1: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0xbe2: IF (Stack[-1] == 0) GOTO 0xbe5; Pop(1)

0xbe3: @@ add(Stack[-5])
0xbe4: Pop(0)
0xbe5: Push((int) 1)
0xbe6: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0xbe7: GOTO 0xbd8

0xbe8: @@ size(Stack[-3])
0xbe9: Pop(0)
0xbea: Push(Stack[-3])
0xbeb: IF (Stack[-1] == 0) GOTO 0xbf9; Pop(1)

0xbec: @ irand(Stack[-2], Stack[-3])
0xbed: Pop(0)
0xbee: @@ get(Stack[-1], Stack[-2])
0xbef: Pop(0)
0xbf0: PushEmpty(object, int, float, cvector, cvector)
0xbf1: Stack[-5] = Stack[-26]
0xbf2: Stack[-4] = Stack[-25]
0xbf3: Stack[-3] = Stack[-24]
0xbf4: Stack[-2] = Stack[-6]
0xbf5: Stack[-1] = -Stack[-14]; Pop(0);
0xbf6: Call2 0xbff

0xbf7: Pop(5)
0xbf8: Return(); Pop(18)

0xbf9: Stack[-8] = 0
0xbfa: PushEmpty(object)
0xbfb: Stack[-1] = Stack[-22]
0xbfc: Call2 0xb8f

0xbfd: Pop(1)
0xbfe: Return(); Pop(18)

0xbff: PushEmpty(object, object, object, object)
0xc00: @ GetScene(Stack[-2])
0xc01: Pop(0)
0xc02: Push("scripted")
0xc03: Push("blood_dir.xml")
0xc04: @ AddActorByType(Stack[-3], Stack[-2], Stack[-4], Stack[-8], Stack[-7], Stack[-1])
0xc05: Pop(2)
0xc06: PushEmpty(object)
0xc07: Stack[-1] = Stack[-10]
0xc08: Call2 0xb8f

0xc09: Pop(1)
0xc0a: Return(); Pop(4)

0xc0b: Stack[-1] = 0
0xc0c: Stack[-2] = 0
0xc0d: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0xc0e: @@ GetPosition(Stack[-3])
0xc0f: Pop(0)
0xc10: @ GetPosition(Stack[-2])
0xc11: Pop(0)
0xc12: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0xc13: Push(CvectorIndex(Stack[-1], 0))
0xc14: Push(CvectorIndex(Stack[-2], 2))
0xc15: @ RotateAsync(Stack[-2], Stack[-1])
0xc16: Pop(2)
0xc17: Return(); Pop(6)

0xc18: PushEmpty(bool, bool)
0xc19: @ IsLoaded(Stack[-1])
0xc1a: Pop(0)
0xc1b: Stack[-3] = Stack[-1]
0xc1c: Return(); Pop(2)

0xc1d: PushEmpty(float, cvector, float, cvector)
0xc1e: @@ GetEyesHeight(Stack[-2])
0xc1f: Pop(0)
0xc20: Stack[-1] = CVector(0.0, 0.0, 0.0)
0xc21: Push(CvectorIndex(Stack[-1], 1))
0xc22: Stack[-1] = Stack[-3]
0xc23: CvectorIndex(Stack[-2], 1) = Stack[-1];
0xc24: Push("head")
0xc25: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0xc26: Pop(1)
0xc27: Return(); Pop(4)

0xc28: PushEmpty(bool, bool)
0xc29: PushEmpty(bool, int, int)
0xc2a: Stack[-2] = Stack[-7]
0xc2b: Stack[-1] = Stack[-6]
0xc2c: Call2 0xc83

0xc2d: Pop(2)
0xc2e: IF (Stack[-1] == 0) GOTO 0xc32; Pop(1)

0xc2f: Push((int) 0)
0xc30: @@ AddItem(Stack[-2], Stack[-6], Stack[-1])
0xc31: Pop(1)
0xc32: Return(); Pop(2)

0xc33: PushEmpty(bool, int, bool, int, bool, float, cvector, cvector, bool, int, bool, int, bool, float, cvector, cvector)
0xc34: @ IsExisting3DSound(Stack[-8], Stack[-17])
0xc35: Pop(0)
0xc36: Pop(0); Push((bool) Stack[-8] == 0)
0xc37: IF (Stack[-1] == 0) GOTO 0xc4c; Pop(1)

0xc38: Stack[-7] = (int) 0
0xc39: Push((int) 1)
0xc3a: Pop(1); Push(Stack[-8] + Stack[-1]);
0xc3b: Pop(1); Push(Stack[-18] + Stack[-1]);
0xc3c: @ IsExisting3DSound(Stack[-7], Stack[-1])
0xc3d: Pop(1)
0xc3e: Pop(0); Push((bool) Stack[-6] == 0)
0xc3f: IF (Stack[-1] == 0) GOTO 0xc41; Pop(1)

0xc40: GOTO 0xc44

0xc41: Push((int) 1)
0xc42: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0xc43: GOTO 0xc39

0xc44: Pop(0); Push((bool) Stack[-7] == 0)
0xc45: IF (Stack[-1] == 0) GOTO 0xc47; Pop(1)

0xc46: Return(); Pop(16)

0xc47: @ irand(Stack[-5], Stack[-7])
0xc48: Pop(0)
0xc49: Push((int) 1)
0xc4a: Pop(1); Push(Stack[-6] + Stack[-1]);
0xc4b: Stack[-18] = Stack[-18] + Stack[-1]; Pop(1);
0xc4c: @ Is3DSoundLoaded(Stack[-4], Stack[-17])
0xc4d: Pop(0)
0xc4e: Push(Stack[-4])
0xc4f: IF (Stack[-1] == 0) GOTO 0xc5b; Pop(1)

0xc50: @ GetEyesHeight(Stack[-3])
0xc51: Pop(0)
0xc52: @ GetDirection(Stack[-2])
0xc53: Pop(0)
0xc54: Push((int) 50)
0xc55: Stack[-2] = Stack[-3] * Stack[-1]; Pop(1);
0xc56: Push(CvectorIndex(Stack[-1], 1))
0xc57: Stack[-1] = Stack[-1] + Stack[-4]; Pop(0);
0xc58: CvectorIndex(Stack[-2], 1) = Stack[-1];
0xc59: @ PlayGlobalSound(Stack[-17], Stack[-1])
0xc5a: Pop(0)
0xc5b: Return(); Pop(16)

0xc5c: PushEmpty(object, object)
0xc5d: @ self(Stack[-1])
0xc5e: Pop(0)
0xc5f: Stack[-3] = Stack[-1]
0xc60: Return(); Pop(2)

0xc61: Stack[-1] = 0
0xc62: PushEmpty(float, float)
0xc63: Pop(0); Push(Stack[-3] | Stack[-3]);
0xc64: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0xc65: Push((float)0.0)
0xc66: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xc67: IF (Stack[-1] == 0) GOTO 0xc6a; Pop(1)

0xc68: Stack[-4] = CVector(0.0, 0.0, 0.0)
0xc69: Return(); Pop(2)

0xc6a: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0xc6b: Return(); Pop(2)

0xc6c: PushEmpty()
0xc6d: Pop(0); Push((bool) Stack[-2] < Stack[-1])
0xc6e: IF (Stack[-1] == 0) GOTO 0xc71; Pop(1)

0xc6f: Stack[-3] = Stack[-2]
0xc70: GOTO 0xc72

0xc71: Stack[-3] = Stack[-1]
0xc72: Return(); Pop(0)

0xc73: PushEmpty()
0xc74: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0xc75: IF (Stack[-1] == 0) GOTO 0xc78; Pop(1)

0xc76: Stack[-4] = Stack[-2]
0xc77: Return(); Pop(0)

0xc78: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0xc79: IF (Stack[-1] == 0) GOTO 0xc7c; Pop(1)

0xc7a: Stack[-4] = Stack[-1]
0xc7b: Return(); Pop(0)

0xc7c: Stack[-4] = Stack[-3]
0xc7d: Return(); Pop(0)

0xc7e: PushEmpty(float, float)
0xc7f: @ rand(Stack[-1])
0xc80: Pop(0)
0xc81: Stack[-4] = Stack[-1] < Stack[-3]; Pop(0);
0xc82: Return(); Pop(2)

0xc83: PushEmpty(int, int)
0xc84: @ irand(Stack[-1], Stack[-3])
0xc85: Pop(0)
0xc86: Stack[-5] = Stack[-1] < Stack[-4]; Pop(0);
0xc87: Return(); Pop(2)

0xc88: PushEmpty(object, object)
0xc89: @ CreateFloatVector(Stack[-1])
0xc8a: Pop(0)
0xc8b: @@ add(Stack[-3])
0xc8c: Pop(0)
0xc8d: Push((int) 15)
0xc8e: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0xc8f: Pop(1)
0xc90: Return(); Pop(2)

0xc91: Stack[-1] = 0
0xc92: PushEmpty(bool, bool)
0xc93: @ IsPlayerActor(Stack[-3], Stack[-1])
0xc94: Pop(0)
0xc95: Push(Stack[-1])
0xc96: IF (Stack[-1] == 0) GOTO 0xc9a; Pop(1)

0xc97: Push("attack")
0xc98: @ PlayGlobalMusic(Stack[-1])
0xc99: Pop(1)
0xc9a: Return(); Pop(2)

0xc9b: PushEmpty(string, string)
0xc9c: Stack[-1] = "idle"
0xc9d: Push(Stack[-3])
0xc9e: IF (Stack[-1] == 0) GOTO 0xca0; Pop(1)

0xc9f: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0xca0: Stack[-4] = Stack[-1]
0xca1: Return(); Pop(2)

0xca2: PushEmpty(int, bool, int, bool)
0xca3: Stack[-2] = (int) 0
0xca4: Push("all")
0xca5: PushEmpty(string, int)
0xca6: Stack[-1] = Stack[-5]
0xca7: Call2 0xc9b

0xca8: Pop(1)
0xca9: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0xcaa: Pop(2)
0xcab: Pop(0); Push((bool) Stack[-1] == 0)
0xcac: IF (Stack[-1] == 0) GOTO 0xcae; Pop(1)

0xcad: GOTO 0xcb1

0xcae: Push((int) 1)
0xcaf: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0xcb0: GOTO 0xca4

0xcb1: Stack[-5] = Stack[-2]
0xcb2: Return(); Pop(4)

0xcb3: PushEmpty(int, int)
0xcb4: Push("branch")
0xcb5: @ GetVariable(Stack[-1], Stack[-2])
0xcb6: Pop(1)
0xcb7: Stack[-3] = Stack[-1]
0xcb8: Return(); Pop(2)

0xcb9: PushEmpty()
0xcba: PushEmpty(int)
0xcbb: Call2 0xcb3

0xcbc: Pop(0)
0xcbd: Push((int) 1)
0xcbe: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xcbf: IF (Stack[-1] == 0) GOTO 0xcc3; Pop(1)

0xcc0: @ WorkWithCorpse(Stack[-1])
0xcc1: Pop(0)
0xcc2: GOTO 0xcc5

0xcc3: @ Barter(Stack[-1])
0xcc4: Pop(0)
0xcc5: Return(); Pop(0)

0xcc6: PushEmpty(object, int, bool, object, int, bool)
0xcc7: @ CreateInvItem(Stack[-3])
0xcc8: Pop(0)
0xcc9: @@ SetItemName(Stack[-7])
0xcca: Pop(0)
0xccb: Push("Organ")
0xccc: Push((int) 1)
0xccd: @@ SetProperty(Stack[-2], Stack[-1])
0xcce: Pop(2)
0xccf: @@ GetItemID(Stack[-2])
0xcd0: Pop(0)
0xcd1: Push((int) 0)
0xcd2: Push((int) 1)
0xcd3: @ AddItem(Stack[-3], Stack[-5], Stack[-2], Stack[-1])
0xcd4: Pop(2)
0xcd5: Return(); Pop(6)

0xcd6: Stack[-3] = 0
0xcd7: PushEmpty(int)
0xcd8: Call2 0xcb3

0xcd9: Pop(0)
0xcda: Push((int) 1)
0xcdb: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0xcdc: IF (Stack[-1] == 0) GOTO 0xcde; Pop(1)

0xcdd: Return(); Pop(0)

0xcde: PushEmpty(string)
0xcdf: Stack[-1] = "liver"
0xce0: Call2 0xcc6

0xce1: Pop(1)
0xce2: PushEmpty(string)
0xce3: Stack[-1] = "kidney"
0xce4: Call2 0xcc6

0xce5: Pop(1)
0xce6: PushEmpty(string)
0xce7: Stack[-1] = "heart"
0xce8: Call2 0xcc6

0xce9: Pop(1)
0xcea: PushEmpty(string)
0xceb: Stack[-1] = "blood"
0xcec: Call2 0xcc6

0xced: Pop(1)
0xcee: Return(); Pop(0)

0xcef: PushEmpty()
0xcf0: Push("cleanup")
0xcf1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xcf2: IF (Stack[-1] == 0) GOTO 0xcf6; Pop(1)

0xcf3: Push(GlobalVars[0])
0xcf4: Stack[-1] = (bool) 1
0xcf5: GlobalVars[0] = Stack[-1]; Pop(1)
0xcf6: Return(); Pop(0)

0xcf7: PushEmpty(cvector, cvector, cvector, float, cvector, cvector, cvector, float, cvector, cvector, cvector, float, cvector, cvector, cvector, float)
0xcf8: PushEmpty(object)
0xcf9: Call2 0xc5c

0xcfa: Pop(0)
0xcfb: Pop(1); Push((bool) Stack[-19] == Stack[-1])
0xcfc: IF (Stack[-1] == 0) GOTO 0xcff; Pop(1)

0xcfd: Stack[-19] = (bool) 0
0xcfe: Return(); Pop(16)

0xcff: Push("b9q03_corpse")
0xd00: Push(GlobalVars[1])
0xd01: Push((int) 1)
0xd02: Pop(2); Push(Stack[-2] + Stack[-1]);
0xd03: Pop(2); Push(Stack[-2] + Stack[-1]);
0xd04: Pop(1); Push((bool) Stack[-18] == Stack[-1])
0xd05: IF (Stack[-1] == 0) GOTO 0xd0e; Pop(1)

0xd06: PushEmpty(bool, object)
0xd07: Stack[-1] = Stack[-20]
0xd08: Call2 0xe2f

0xd09: Pop(1)
0xd0a: IF (Stack[-1] == 0) GOTO 0xd0d; Pop(1)

0xd0b: Stack[-19] = (bool) 1
0xd0c: Return(); Pop(16)

0xd0d: GOTO 0xd43

0xd0e: Push("b9q03_helpme")
0xd0f: Push(GlobalVars[1])
0xd10: Push((int) 1)
0xd11: Pop(2); Push(Stack[-2] + Stack[-1]);
0xd12: Pop(2); Push(Stack[-2] + Stack[-1]);
0xd13: Pop(1); Push((bool) Stack[-18] == Stack[-1])
0xd14: IF (Stack[-1] == 0) GOTO 0xd26; Pop(1)

0xd15: @@ GetPosition(Stack[-8])
0xd16: Pop(0)
0xd17: @ GetPosition(Stack[-7])
0xd18: Pop(0)
0xd19: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0xd1a: Stack[-5] = Stack[-6] | Stack[-6]; Pop(0);
0xd1b: Push((float)4000000.0)
0xd1c: Pop(1); Push((bool) Stack[-6] < Stack[-1])
0xd1d: IF (Stack[-1] == 0) GOTO 0xd25; Pop(1)

0xd1e: PushEmpty(bool, object)
0xd1f: Stack[-1] = Stack[-20]
0xd20: Call2 0xe53

0xd21: Pop(1)
0xd22: IF (Stack[-1] == 0) GOTO 0xd25; Pop(1)

0xd23: Stack[-19] = (bool) 1
0xd24: Return(); Pop(16)

0xd25: GOTO 0xd43

0xd26: Push("player_shot")
0xd27: Pop(1); Push((bool) Stack[-18] == Stack[-1])
0xd28: IF (Stack[-1] == 0) GOTO 0xd43; Pop(1)

0xd29: @@ GetPosition(Stack[-4])
0xd2a: Pop(0)
0xd2b: @ GetPosition(Stack[-3])
0xd2c: Pop(0)
0xd2d: Stack[-2] = Stack[-4] - Stack[-3]; Pop(0);
0xd2e: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0xd2f: Push((float)360000.0)
0xd30: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xd31: IF (Stack[-1] == 0) GOTO 0xd39; Pop(1)

0xd32: PushEmpty(bool, object)
0xd33: Stack[-1] = Stack[-20]
0xd34: Call2 0xe53

0xd35: Pop(1)
0xd36: IF (Stack[-1] == 0) GOTO 0xd39; Pop(1)

0xd37: Stack[-19] = (bool) 1
0xd38: Return(); Pop(16)

0xd39: Push((float)12250000.0)
0xd3a: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xd3b: IF (Stack[-1] == 0) GOTO 0xd43; Pop(1)

0xd3c: PushEmpty(bool, object)
0xd3d: Stack[-1] = Stack[-20]
0xd3e: Call2 0xe2f

0xd3f: Pop(1)
0xd40: IF (Stack[-1] == 0) GOTO 0xd43; Pop(1)

0xd41: Stack[-19] = (bool) 1
0xd42: Return(); Pop(16)

0xd43: Stack[-19] = (bool) 0
0xd44: Return(); Pop(16)

0xd45: PushEmpty()
0xd46: PushEmpty(bool)
0xd47: Stack[-1] = (bool) 0
0xd48: Push("IsDead")
0xd49: Push((int) 1)
0xd4a: Pop(2); Push(IsFuncExist(Stack[-4], Stack[-2], Stack[-1]))
0xd4b: IF (Stack[-1] == 0) GOTO 0xd52; Pop(1)

0xd4c: PushEmpty(bool, object)
0xd4d: Stack[-1] = Stack[-4]
0xd4e: Call2 0xb4e

0xd4f: Pop(1)
0xd50: IF (Stack[-1] == 0) GOTO 0xd52; Pop(1)

0xd51: Stack[-1] = (bool) 1
0xd52: IF (Stack[-1] == 0) GOTO 0xd66; Pop(1)

0xd53: PushEmpty(bool, object, string)
0xd54: Stack[-2] = Stack[-4]
0xd55: Stack[-1] = "b9q03_corpse"
0xd56: Call2 0xaf9

0xd57: Pop(2)
0xd58: IF (Stack[-1] == 0) GOTO 0xd5b; Pop(1)

0xd59: Stack[-2] = (bool) 0
0xd5a: Return(); Pop(0)

0xd5b: Push("b9q03_corpse")
0xd5c: Push((int) 1)
0xd5d: @@ SetProperty(Stack[-2], Stack[-1])
0xd5e: Pop(2)
0xd5f: PushEmpty(bool, object)
0xd60: Stack[-1] = Stack[-3]
0xd61: Call2 0xe1d

0xd62: Stack[-4] = Stack[-2]
0xd63: Pop(2)
0xd64: Return(); Pop(0)

0xd65: GOTO 0xd7e

0xd66: PushEmpty(bool, object)
0xd67: Stack[-1] = Stack[-3]
0xd68: Call2 0xaf4

0xd69: Pop(1)
0xd6a: IF (Stack[-1] == 0) GOTO 0xd72; Pop(1)

0xd6b: PushEmpty(bool, object)
0xd6c: Stack[-1] = Stack[-3]
0xd6d: Call2 0xe53

0xd6e: Stack[-4] = Stack[-2]
0xd6f: Pop(2)
0xd70: Return(); Pop(0)

0xd71: GOTO 0xd7e

0xd72: PushEmpty(bool, object, string)
0xd73: Stack[-2] = Stack[-4]
0xd74: Stack[-1] = "b9q03"
0xd75: Call2 0xaf9

0xd76: Pop(2)
0xd77: IF (Stack[-1] == 0) GOTO 0xd7e; Pop(1)

0xd78: PushEmpty(bool, object)
0xd79: Stack[-1] = Stack[-3]
0xd7a: Call2 0xe53

0xd7b: Stack[-4] = Stack[-2]
0xd7c: Pop(2)
0xd7d: Return(); Pop(0)

0xd7e: Stack[-2] = (bool) 0
0xd7f: Return(); Pop(0)

0xd80: PushEmpty()
0xd81: PushEmpty(bool, object)
0xd82: Stack[-1] = Stack[-3]
0xd83: Call2 0xaf4

0xd84: Pop(1)
0xd85: IF (Stack[-1] == 0) GOTO 0xd8d; Pop(1)

0xd86: PushEmpty(bool, object)
0xd87: Stack[-1] = Stack[-3]
0xd88: Call2 0xe41

0xd89: Stack[-4] = Stack[-2]
0xd8a: Pop(2)
0xd8b: Return(); Pop(0)

0xd8c: GOTO 0xd99

0xd8d: PushEmpty(bool, object, string)
0xd8e: Stack[-2] = Stack[-4]
0xd8f: Stack[-1] = "b9q03"
0xd90: Call2 0xaf9

0xd91: Pop(2)
0xd92: IF (Stack[-1] == 0) GOTO 0xd99; Pop(1)

0xd93: PushEmpty(bool, object)
0xd94: Stack[-1] = Stack[-3]
0xd95: Call2 0xe41

0xd96: Stack[-4] = Stack[-2]
0xd97: Pop(2)
0xd98: Return(); Pop(0)

0xd99: Stack[-2] = (bool) 0
0xd9a: Return(); Pop(0)

0xd9b: PushEmpty(object, cvector, cvector, cvector, bool, float, int, cvector, float, object, cvector, cvector, cvector, bool, float, int, cvector, float)
0xd9c: @ GetMainOutdoorScene(Stack[-9])
0xd9d: Pop(0)
0xd9e: @ GetPosition(Stack[-8])
0xd9f: Pop(0)
0xda0: Stack[-4] = (int) 4000000
0xda1: Stack[-3] = (int) 0
0xda2: Push(GlobalVars[1])
0xda3: Stack[-1] = (int) 1
0xda4: GlobalVars[1] = Stack[-1]; Pop(1)
0xda5: Push((bool) 1)
0xda6: IF (Stack[-1] == 0) GOTO 0xdbc; Pop(1)

0xda7: Push("pt_b9q03_bonfire")
0xda8: Push(GlobalVars[1])
0xda9: Pop(2); Push(Stack[-2] + Stack[-1]);
0xdaa: @@ GetLocator(Stack[-1], Stack[-6], Stack[-8], Stack[-7])
0xdab: Pop(1)
0xdac: Pop(0); Push((bool) Stack[-5] == 0)
0xdad: IF (Stack[-1] == 0) GOTO 0xdaf; Pop(1)

0xdae: GOTO 0xdbc

0xdaf: Stack[-2] = Stack[-8] - Stack[-7]; Pop(0);
0xdb0: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0xdb1: Pop(0); Push((bool) Stack[-1] < Stack[-4])
0xdb2: IF (Stack[-1] == 0) GOTO 0xdb7; Pop(1)

0xdb3: Stack[-4] = Stack[-1]
0xdb4: Push(GlobalVars[1])
0xdb5: Stack[-4] = Stack[-1]
0xdb6: Pop(1)
0xdb7: Push(GlobalVars[1])
0xdb8: Push((int) 1)
0xdb9: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0xdba: GlobalVars[1] = Stack[-1]; Pop(1)
0xdbb: GOTO 0xda5

0xdbc: Push(GlobalVars[1])
0xdbd: Push((int) 1)
0xdbe: Stack[-2] = Stack[-5] - Stack[-1]; Pop(1);
0xdbf: GlobalVars[1] = Stack[-1]; Pop(1)
0xdc0: Push(GlobalVars[1])
0xdc1: Push((int) -1)
0xdc2: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xdc3: IF (Stack[-1] == 0) GOTO 0xdc6; Pop(1)

0xdc4: Stack[-19] = (bool) 0
0xdc5: Return(); Pop(18)

0xdc6: Push("Bonfire index: ")
0xdc7: Push(GlobalVars[1])
0xdc8: Push((int) 1)
0xdc9: Pop(2); Push(Stack[-2] + Stack[-1]);
0xdca: Pop(2); Push(Stack[-2] + Stack[-1]);
0xdcb: @ Trace(Stack[-1])
0xdcc: Pop(1)
0xdcd: Push(GlobalVars[2])
0xdce: Stack[-1] = (int) 0
0xdcf: GlobalVars[2] = Stack[-1]; Pop(1)
0xdd0: Push((bool) 1)
0xdd1: IF (Stack[-1] == 0) GOTO 0xde7; Pop(1)

0xdd2: Push("pt_b9q03_bonfire")
0xdd3: Push(GlobalVars[1])
0xdd4: Push((int) 1)
0xdd5: Pop(2); Push(Stack[-2] + Stack[-1]);
0xdd6: Pop(2); Push(Stack[-2] + Stack[-1]);
0xdd7: Push("_patrol")
0xdd8: Pop(2); Push(Stack[-2] + Stack[-1]);
0xdd9: Push(GlobalVars[2])
0xdda: Push((int) 1)
0xddb: Pop(2); Push(Stack[-2] + Stack[-1]);
0xddc: Pop(2); Push(Stack[-2] + Stack[-1]);
0xddd: @@ GetLocator(Stack[-1], Stack[-6], Stack[-8], Stack[-7])
0xdde: Pop(1)
0xddf: Pop(0); Push((bool) Stack[-5] == 0)
0xde0: IF (Stack[-1] == 0) GOTO 0xde2; Pop(1)

0xde1: GOTO 0xde7

0xde2: Push(GlobalVars[2])
0xde3: Push((int) 1)
0xde4: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0xde5: GlobalVars[2] = Stack[-1]; Pop(1)
0xde6: GOTO 0xdd0

0xde7: Push("Bonfire pantrol point count: ")
0xde8: Push(GlobalVars[2])
0xde9: Pop(2); Push(Stack[-2] + Stack[-1]);
0xdea: @ Trace(Stack[-1])
0xdeb: Pop(1)
0xdec: Stack[-19] = (bool) 1
0xded: Return(); Pop(18)

0xdee: Stack[-9] = 0
0xdef: PushEmpty()
0xdf0: Push(GlobalVars[3])
0xdf1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xdf2: IF (Stack[-1] == 0) GOTO 0xdf5; Pop(1)

0xdf3: Stack[-2] = (bool) 0
0xdf4: Return(); Pop(0)

0xdf5: Push((int) 0)
0xdf6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xdf7: IF (Stack[-1] == 0) GOTO 0xe01; Pop(1)

0xdf8: Push(GlobalVars[4])
0xdf9: Push(GlobalVars[3])
0xdfa: Stack[-2] = Stack[-1]
0xdfb: Pop(1)
0xdfc: GlobalVars[4] = Stack[-1]; Pop(1)
0xdfd: Push("changing state to c_iStateWaitForLoad")
0xdfe: @ Trace(Stack[-1])
0xdff: Pop(1)
0xe00: GOTO 0xe18

0xe01: Push((int) 1)
0xe02: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xe03: IF (Stack[-1] == 0) GOTO 0xe08; Pop(1)

0xe04: Push("changing state to c_iStateHeatHands")
0xe05: @ Trace(Stack[-1])
0xe06: Pop(1)
0xe07: GOTO 0xe18

0xe08: Push((int) 2)
0xe09: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xe0a: IF (Stack[-1] == 0) GOTO 0xe0f; Pop(1)

0xe0b: Push("changing state to c_iStateIdle")
0xe0c: @ Trace(Stack[-1])
0xe0d: Pop(1)
0xe0e: GOTO 0xe18

0xe0f: Push((int) 3)
0xe10: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xe11: IF (Stack[-1] == 0) GOTO 0xe16; Pop(1)

0xe12: Push("changing state to c_iStatePatrol")
0xe13: @ Trace(Stack[-1])
0xe14: Pop(1)
0xe15: GOTO 0xe18

0xe16: Stack[-2] = (bool) 0
0xe17: Return(); Pop(0)

0xe18: Push(GlobalVars[3])
0xe19: Stack[-1] = Stack[-2]
0xe1a: GlobalVars[3] = Stack[-1]; Pop(1)
0xe1b: Stack[-2] = (bool) 1
0xe1c: Return(); Pop(0)

0xe1d: PushEmpty()
0xe1e: Push(GlobalVars[3])
0xe1f: Push((int) 4)
0xe20: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xe21: IF (Stack[-1] == 0) GOTO 0xe24; Pop(1)

0xe22: Stack[-2] = (bool) 0
0xe23: Return(); Pop(0)

0xe24: Push(GlobalVars[3])
0xe25: Stack[-1] = (int) 4
0xe26: GlobalVars[3] = Stack[-1]; Pop(1)
0xe27: Push("changing state to c_iStateAware")
0xe28: @ Trace(Stack[-1])
0xe29: Pop(1)
0xe2a: Push(GlobalVars[5])
0xe2b: Stack[-1] = Stack[-2]
0xe2c: GlobalVars[5] = Stack[-1]; Pop(1)
0xe2d: Stack[-2] = (bool) 1
0xe2e: Return(); Pop(0)

0xe2f: PushEmpty()
0xe30: Push(GlobalVars[3])
0xe31: Push((int) 5)
0xe32: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xe33: IF (Stack[-1] == 0) GOTO 0xe36; Pop(1)

0xe34: Stack[-2] = (bool) 0
0xe35: Return(); Pop(0)

0xe36: Push(GlobalVars[3])
0xe37: Stack[-1] = (int) 5
0xe38: GlobalVars[3] = Stack[-1]; Pop(1)
0xe39: Push("changing state to c_iStateSearchEnemy")
0xe3a: @ Trace(Stack[-1])
0xe3b: Pop(1)
0xe3c: Push(GlobalVars[6])
0xe3d: Stack[-1] = Stack[-2]
0xe3e: GlobalVars[6] = Stack[-1]; Pop(1)
0xe3f: Stack[-2] = (bool) 1
0xe40: Return(); Pop(0)

0xe41: PushEmpty()
0xe42: Push(GlobalVars[3])
0xe43: Push((int) 6)
0xe44: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xe45: IF (Stack[-1] == 0) GOTO 0xe48; Pop(1)

0xe46: Stack[-2] = (bool) 0
0xe47: Return(); Pop(0)

0xe48: Push(GlobalVars[3])
0xe49: Stack[-1] = (int) 6
0xe4a: GlobalVars[3] = Stack[-1]; Pop(1)
0xe4b: Push("changing state to c_iStateHearEnemy")
0xe4c: @ Trace(Stack[-1])
0xe4d: Pop(1)
0xe4e: Push(GlobalVars[7])
0xe4f: Stack[-1] = Stack[-2]
0xe50: GlobalVars[7] = Stack[-1]; Pop(1)
0xe51: Stack[-2] = (bool) 1
0xe52: Return(); Pop(0)

0xe53: PushEmpty()
0xe54: Push(GlobalVars[3])
0xe55: Push((int) 7)
0xe56: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xe57: IF (Stack[-1] == 0) GOTO 0xe5a; Pop(1)

0xe58: Stack[-2] = (bool) 0
0xe59: Return(); Pop(0)

0xe5a: Push(GlobalVars[3])
0xe5b: Stack[-1] = (int) 7
0xe5c: GlobalVars[3] = Stack[-1]; Pop(1)
0xe5d: Push("changing state to c_iStateAttack")
0xe5e: @ Trace(Stack[-1])
0xe5f: Pop(1)
0xe60: Push(GlobalVars[8])
0xe61: Stack[-1] = Stack[-2]
0xe62: GlobalVars[8] = Stack[-1]; Pop(1)
0xe63: Stack[-2] = (bool) 1
0xe64: Return(); Pop(0)

0xe65: PushEmpty(int, int)
0xe66: Push("b9q03HandHeatLock")
0xe67: Push(GlobalVars[1])
0xe68: Push((int) 1)
0xe69: Pop(2); Push(Stack[-2] + Stack[-1]);
0xe6a: Pop(2); Push(Stack[-2] + Stack[-1]);
0xe6b: @ GetVariable(Stack[-1], Stack[-2])
0xe6c: Pop(1)
0xe6d: Push((int) 0)
0xe6e: Stack[-4] = Stack[-2] != Stack[-1]; Pop(1);
0xe6f: Return(); Pop(2)

0xe70: PushEmpty()
0xe71: Push("b9q03HandHeatLock")
0xe72: Push(GlobalVars[1])
0xe73: Push((int) 1)
0xe74: Pop(2); Push(Stack[-2] + Stack[-1]);
0xe75: Pop(2); Push(Stack[-2] + Stack[-1]);
0xe76: Push(Stack[-2])
0xe77: IF (Stack[-1] == 0) GOTO 0xe7a; Pop(1)

0xe78: Push((int) 1)
0xe79: GOTO 0xe7b

0xe7a: Push((int) 0)
0xe7b: @ SetVariable(Stack[-2], Stack[-1])
0xe7c: Pop(2)
0xe7d: Return(); Pop(0)

0xe7e: PushEmpty(int, int)
0xe7f: Push("b9q03PatrolLock")
0xe80: Push(GlobalVars[1])
0xe81: Push((int) 1)
0xe82: Pop(2); Push(Stack[-2] + Stack[-1]);
0xe83: Pop(2); Push(Stack[-2] + Stack[-1]);
0xe84: @ GetVariable(Stack[-1], Stack[-2])
0xe85: Pop(1)
0xe86: Push((int) 0)
0xe87: Stack[-4] = Stack[-2] != Stack[-1]; Pop(1);
0xe88: Return(); Pop(2)

0xe89: PushEmpty()
0xe8a: Push("b9q03PatrolLock")
0xe8b: Push(GlobalVars[1])
0xe8c: Push((int) 1)
0xe8d: Pop(2); Push(Stack[-2] + Stack[-1]);
0xe8e: Pop(2); Push(Stack[-2] + Stack[-1]);
0xe8f: Push(Stack[-2])
0xe90: IF (Stack[-1] == 0) GOTO 0xe93; Pop(1)

0xe91: Push((int) 1)
0xe92: GOTO 0xe94

0xe93: Push((int) 0)
0xe94: @ SetVariable(Stack[-2], Stack[-1])
0xe95: Pop(2)
0xe96: Return(); Pop(0)

0xe97: PushEmpty()
0xe98: PushEmpty(object, int, float)
0xe99: Stack[-3] = Stack[-7]
0xe9a: Stack[-2] = Stack[-6]
0xe9b: Stack[-1] = Stack[-5]
0xe9c: Call2 0xbbb

0xe9d: Pop(3)
0xe9e: Return(); Pop(0)

0xe9f: PushEmpty()
0xea0: PushEmpty(object, int, float, cvector, cvector)
0xea1: Stack[-5] = Stack[-11]
0xea2: Stack[-4] = Stack[-10]
0xea3: Stack[-3] = Stack[-9]
0xea4: Stack[-2] = Stack[-7]
0xea5: Stack[-1] = Stack[-6]
0xea6: Call2 0xbff

0xea7: Pop(5)
0xea8: Return(); Pop(0)

0xea9: PushEmpty(float, float)
0xeaa: Push("health")
0xeab: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xeac: IF (Stack[-1] == 0) GOTO 0xeb5; Pop(1)

0xead: Push("health")
0xeae: @ GetProperty(Stack[-1], Stack[-2])
0xeaf: Pop(1)
0xeb0: Push((int) 0)
0xeb1: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0xeb2: IF (Stack[-1] == 0) GOTO 0xeb5; Pop(1)

0xeb3: @ SignalDeath(Stack[-4])
0xeb4: Pop(0)
0xeb5: Return(); Pop(2)

0xeb6: PushEmpty()
0xeb7: PushEmpty(object)
0xeb8: Stack[-1] = Stack[-2]
0xeb9: Push(-1, 0); TaskCall(8)
0xeba: Call2 0x9ad

0xebb: Pop(-1, 0); TaskReturn
0xebc: Pop(1)
0xebd: Return(); Pop(0)

0xebe: Stack[-1] = (int) 0
0xebf: Return(); Pop(0)

