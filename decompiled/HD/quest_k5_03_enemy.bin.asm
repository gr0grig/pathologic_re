GlobalVarCount = 8
	G_VAR_0 bool 
	G_VAR_1 int 
	G_VAR_2 int 
	G_VAR_3 int 
	G_VAR_4 object 
	G_VAR_5 object 
	G_VAR_6 object 
	G_VAR_7 object 

Strings:
	FSM Init failed
	GetLocator
	GetPosition
	GetDirection
	Unknown FSM state
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
	fdie
	bdie
	GetScriptProperty
	Owner
	HasScriptProperty
	GetScriptProperty
	@GetEyesHeight
	GetEyesHeight
	cleanup
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
	idle
	branch
	player_shot
	Pantrol point count: 
	changing state to c_iStateWaitForLoad
	changing state to c_iStateHeatHands
	changing state to c_iStateIdle
	changing state to c_iStatePatrol
	changing state to c_iStateAware
	changing state to c_iStateSearchEnemy
	changing state to c_iStateHearEnemy
	changing state to c_iStateAttack
	_locked
	pt_k5q03_patrol
	k5q03_helpme
	k5q03_corpse
	pt_k5q03_center
	gold_ring
	silver_ring
	beads
	bracelet

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
	AddItem (4 args)
	Is3DSoundLoaded (2 args)
	GetEyesHeight (1 args)
	PlayGlobalSound (2 args)
	self (1 args)
	CreateFloatVector (1 args)
	RumblePlay (2 args)
	SendWorldWndMessage (2 args)
	GetVariable (2 args)
	WorkWithCorpse (1 args)
	Barter (1 args)
	SetVariable (2 args)
	GetProperty (2 args)
	SignalDeath (1 args)

RunOp = 0x8
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (cvector, cvector) Params = 0
	GTASK_1 Vars = (object, int, int, bool, bool, float, int, object) Params = 1
		EVENT_7 Op = 0x1cb Vars = (int)
		EVENT_1 Op = 0x1db Vars = (object)
		EVENT_6 Op = 0x1f0 Vars = ()
	GTASK_2 Vars = (bool, object, bool, object) Params = 6
		EVENT_7 Op = 0x4d2 Vars = (int)
		EVENT_6 Op = 0x4e7 Vars = ()
		EVENT_1 Op = 0x53b Vars = (object)
		EVENT_2 Op = 0x54a Vars = (object)
		EVENT_10 Op = 0x5d0 Vars = (object)
		EVENT_41 Op = 0x5db Vars = (object)
	GTASK_3 Vars = (bool, object, bool) Params = 2
		EVENT_6 Op = 0x616 Vars = ()
		EVENT_42 Op = 0x61f Vars = (object, string)
		EVENT_1 Op = 0x62a Vars = (object)
		EVENT_3 Op = 0x635 Vars = (object)
		EVENT_17 Op = 0x640 Vars = (object)
		EVENT_7 Op = 0x64d Vars = (int)
		EVENT_10 Op = 0x6d3 Vars = (object)
		EVENT_41 Op = 0x6de Vars = (object)
	GTASK_4  Params = 0
		EVENT_6 Op = 0x6f6 Vars = ()
		EVENT_42 Op = 0x6fe Vars = (object, string)
		EVENT_1 Op = 0x709 Vars = (object)
		EVENT_3 Op = 0x713 Vars = (object)
		EVENT_17 Op = 0x71d Vars = (object)
	GTASK_5 Vars = (bool) Params = 4
		EVENT_6 Op = 0x78f Vars = ()
		EVENT_42 Op = 0x797 Vars = (object, string)
		EVENT_1 Op = 0x7a2 Vars = (object)
		EVENT_3 Op = 0x7ac Vars = (object)
		EVENT_17 Op = 0x7b6 Vars = (object)
		EVENT_7 Op = 0x82b Vars = (int)
		EVENT_10 Op = 0x83c Vars = (object)
		EVENT_41 Op = 0x847 Vars = (object)
	GTASK_6 Vars = (bool) Params = 1
		EVENT_42 Op = 0x869 Vars = (object, string)
		EVENT_1 Op = 0x874 Vars = (object)
		EVENT_3 Op = 0x87e Vars = (object)
		EVENT_17 Op = 0x888 Vars = (object)
		EVENT_6 Op = 0x8a4 Vars = ()
		EVENT_7 Op = 0x915 Vars = (int)
		EVENT_10 Op = 0x926 Vars = (object)
		EVENT_41 Op = 0x931 Vars = (object)
	GTASK_7 Vars = (bool) Params = 1
		EVENT_6 Op = 0x94d Vars = ()
		EVENT_42 Op = 0x956 Vars = (object, string)
		EVENT_1 Op = 0x962 Vars = (object)
		EVENT_3 Op = 0x96d Vars = (object)
		EVENT_17 Op = 0x978 Vars = (object)
	GTASK_8  Params = 1
		EVENT_6 Op = 0x9b7 Vars = ()
		EVENT_0 Op = 0x9ce Vars = (object)
		EVENT_22 Op = 0xa4d Vars = (object, int, float, float)
		EVENT_16 Op = 0xa4f Vars = (object, string)
		EVENT_41 Op = 0xa51 Vars = (object)
	GTASK_9  Params = 0
		EVENT_26 Op = 0xa65 Vars = (string)
		EVENT_5 Op = 0xa71 Vars = ()

Events:
EVENT_26 Op = 0xc68 Vars = (string)
EVENT_22 Op = 0xdd3 Vars = (object, int, float, float)
EVENT_43 Op = 0xddb Vars = (object, int, float, float, cvector, cvector)
EVENT_16 Op = 0xde5 Vars = (object, string)
EVENT_41 Op = 0xdf2 Vars = (object)

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
0xa: Call2 0xcfb

0xb: Pop(0)
0xc: Pop(1); Push((bool) Stack[-1] == 0)
0xd: IF (Stack[-1] == 0) GOTO 0x17; Pop(1)

0xe: Push("FSM Init failed")
0xf: @ Trace(Stack[-1])
0x10: Pop(1)
0x11: PushEmpty(object)
0x12: Call2 0xbf7

0x13: Pop(0)
0x14: @ RemoveActor(Stack[-1])
0x15: Pop(1)
0x16: Return(); Pop(22)

0x17: @ GetPosition(Stack[-0])
0x18: Pop(0)
0x19: @ GetDirection(Stack[-1])
0x1a: Pop(0)
0x1b: Push(GlobalVars[2])
0x1c: Stack[-1] = (int) 0
0x1d: GlobalVars[2] = Stack[-1]; Pop(1)
0x1e: Push(GlobalVars[3])
0x1f: Stack[-1] = (int) 2
0x20: GlobalVars[3] = Stack[-1]; Pop(1)
0x21: Push((bool) 1)
0x22: IF (Stack[-1] == 0) GOTO 0x1b2; Pop(1)

0x23: Push((int) 0)
0x24: Push(GlobalVars[2])
0x25: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x26: IF (Stack[-1] == 0) GOTO 0x31; Pop(1)

0x27: PushEmpty()
0x28: Push(-0, 0); TaskCall(9)
0x29: Call2 0xa53

0x2a: Pop(-0, 0); TaskReturn
0x2b: Pop(0)
0x2c: PushEmpty(bool, int)
0x2d: Stack[-1] = (int) 2
0x2e: Call2 0xd20

0x2f: Pop(2)
0x30: GOTO 0x1af

0x31: Push((int) 7)
0x32: Push(GlobalVars[2])
0x33: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x34: IF (Stack[-1] == 0) GOTO 0x50; Pop(1)

0x35: PushEmpty(object)
0x36: Push(GlobalVars[7])
0x37: Stack[-2] = Stack[-1]
0x38: Pop(1)
0x39: Push(-1, 8); TaskCall(1)
0x3a: Call2 0x1b3

0x3b: Pop(-1, 8); TaskReturn
0x3c: Pop(1)
0x3d: Push((int) 7)
0x3e: Push(GlobalVars[2])
0x3f: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x40: IF (Stack[-1] == 0) GOTO 0x4f; Pop(1)

0x41: PushEmpty(int)
0x42: Stack[-1] = (int) 1
0x43: Push(-1, 1); TaskCall(7)
0x44: Call2 0x93e

0x45: Pop(-1, 1); TaskReturn
0x46: Pop(1)
0x47: Push((int) 7)
0x48: Push(GlobalVars[2])
0x49: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x4a: IF (Stack[-1] == 0) GOTO 0x4f; Pop(1)

0x4b: PushEmpty(bool, int)
0x4c: Stack[-1] = (int) 2
0x4d: Call2 0xd20

0x4e: Pop(2)
0x4f: GOTO 0x1af

0x50: Push((int) 6)
0x51: Push(GlobalVars[2])
0x52: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x53: IF (Stack[-1] == 0) GOTO 0x7a; Pop(1)

0x54: PushEmpty(int)
0x55: Stack[-1] = (int) 1
0x56: Push(-1, 1); TaskCall(7)
0x57: Call2 0x93e

0x58: Pop(-1, 1); TaskReturn
0x59: Pop(1)
0x5a: Push((int) 6)
0x5b: Push(GlobalVars[2])
0x5c: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x5d: IF (Stack[-1] == 0) GOTO 0x79; Pop(1)

0x5e: PushEmpty(object, float)
0x5f: Push(GlobalVars[6])
0x60: Stack[-3] = Stack[-1]
0x61: Pop(1)
0x62: Stack[-1] = (int) 8
0x63: Push(-2, 3); TaskCall(3)
0x64: Call2 0x5ef

0x65: Pop(-2, 3); TaskReturn
0x66: Pop(2)
0x67: Push((int) 6)
0x68: Push(GlobalVars[2])
0x69: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x6a: IF (Stack[-1] == 0) GOTO 0x79; Pop(1)

0x6b: PushEmpty(int)
0x6c: Stack[-1] = (int) 1
0x6d: Push(-1, 1); TaskCall(7)
0x6e: Call2 0x93e

0x6f: Pop(-1, 1); TaskReturn
0x70: Pop(1)
0x71: Push((int) 6)
0x72: Push(GlobalVars[2])
0x73: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x74: IF (Stack[-1] == 0) GOTO 0x79; Pop(1)

0x75: PushEmpty(bool, int)
0x76: Stack[-1] = (int) 2
0x77: Call2 0xd20

0x78: Pop(2)
0x79: GOTO 0x1af

0x7a: Push((int) 1)
0x7b: Push(GlobalVars[2])
0x7c: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x7d: IF (Stack[-1] == 0) GOTO 0xa9; Pop(1)

0x7e: PushEmpty(bool)
0x7f: Stack[-1] = (bool) 1
0x80: Call2 0xda1

0x81: Pop(1)
0x82: PushEmpty(bool)
0x83: Push(-1, 1); TaskCall(6)
0x84: Call2 0x854

0x85: Pop(-1, 1); TaskReturn
0x86: Pop(1)
0x87: Push((int) 1)
0x88: Push(GlobalVars[2])
0x89: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x8a: IF (Stack[-1] == 0) GOTO 0xa4; Pop(1)

0x8b: PushEmpty()
0x8c: Push(-0, 0); TaskCall(4)
0x8d: Call2 0x6f2

0x8e: Pop(-0, 0); TaskReturn
0x8f: Pop(0)
0x90: Push((int) 1)
0x91: Push(GlobalVars[2])
0x92: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x93: IF (Stack[-1] == 0) GOTO 0xa4; Pop(1)

0x94: PushEmpty(bool, cvector, cvector, bool)
0x95: Stack[-3] = Stack[0 + Tasks[-1].StackPointer]
0x96: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x97: Stack[-1] = (bool) 0
0x98: Push(-4, 1); TaskCall(5)
0x99: Call2 0x77f

0x9a: Pop(-4, 1); TaskReturn
0x9b: Pop(4)
0x9c: Push((int) 1)
0x9d: Push(GlobalVars[2])
0x9e: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x9f: IF (Stack[-1] == 0) GOTO 0xa4; Pop(1)

0xa0: PushEmpty(bool, int)
0xa1: Stack[-1] = (int) 2
0xa2: Call2 0xd20

0xa3: Pop(2)
0xa4: PushEmpty(bool)
0xa5: Stack[-1] = (bool) 0
0xa6: Call2 0xda1

0xa7: Pop(1)
0xa8: GOTO 0x1af

0xa9: Push((int) 2)
0xaa: Push(GlobalVars[2])
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
0xb7: Call2 0x77f

0xb8: Pop(-4, 1); TaskReturn
0xb9: Pop(4)
0xba: Push((int) 2)
0xbb: Push(GlobalVars[2])
0xbc: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xbd: IF (Stack[-1] == 0) GOTO 0xdf; Pop(1)

0xbe: PushEmpty()
0xbf: Push(-0, 0); TaskCall(4)
0xc0: Call2 0x6f2

0xc1: Pop(-0, 0); TaskReturn
0xc2: Pop(0)
0xc3: Push((int) 2)
0xc4: Push(GlobalVars[2])
0xc5: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xc6: IF (Stack[-1] == 0) GOTO 0xdf; Pop(1)

0xc7: PushEmpty(bool)
0xc8: Call2 0xdaf

0xc9: Pop(0)
0xca: Pop(1); Push((bool) Stack[-1] == 0)
0xcb: IF (Stack[-1] == 0) GOTO 0xd1; Pop(1)

0xcc: PushEmpty(bool, int)
0xcd: Stack[-1] = (int) 3
0xce: Call2 0xd20

0xcf: Pop(2)
0xd0: GOTO 0xdf

0xd1: PushEmpty(bool, float)
0xd2: Stack[-1] = (float) 0.5
0xd3: Call2 0xc19

0xd4: Pop(1)
0xd5: IF (Stack[-1] == 0) GOTO 0xdf; Pop(1)

0xd6: PushEmpty(bool)
0xd7: Call2 0xd96

0xd8: Pop(0)
0xd9: Pop(1); Push((bool) Stack[-1] == 0)
0xda: IF (Stack[-1] == 0) GOTO 0xdf; Pop(1)

0xdb: PushEmpty(bool, int)
0xdc: Stack[-1] = (int) 1
0xdd: Call2 0xd20

0xde: Pop(2)
0xdf: GOTO 0x1af

0xe0: Push((int) 3)
0xe1: Push(GlobalVars[2])
0xe2: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xe3: IF (Stack[-1] == 0) GOTO 0x130; Pop(1)

0xe4: PushEmpty(bool)
0xe5: Stack[-1] = (bool) 1
0xe6: Call2 0xdbc

0xe7: Pop(1)
0xe8: @ GetMainOutdoorScene(Stack[-11])
0xe9: Pop(0)
0xea: Push(GlobalVars[1])
0xeb: @ irand(Stack[-11], Stack[-1])
0xec: Pop(1)
0xed: PushEmpty(bool, float)
0xee: Stack[-1] = (float) 0.5
0xef: Call2 0xc19

0xf0: Stack[-11] = Stack[-2]
0xf1: Pop(2)
0xf2: Stack[-8] = (int) 0
0xf3: Push(GlobalVars[1])
0xf4: Pop(1); Push((bool) Stack[-9] < Stack[-1])
0xf5: IF (Stack[-1] == 0) GOTO 0x122; Pop(1)

0xf6: Pop(0); Push(Stack[-8] + Stack[-10]);
0xf7: Push(GlobalVars[1])
0xf8: Stack[-6] = Stack[-2] % Stack[-1]; Pop(2);
0xf9: Push(Stack[-9])
0xfa: IF (Stack[-1] == 0) GOTO 0xff; Pop(1)

0xfb: Push(GlobalVars[1])
0xfc: Push((int) 1)
0xfd: Pop(2); Push(Stack[-2] - Stack[-1]);
0xfe: Stack[-5] = Stack[-1] - Stack[-5]; Pop(1);
0xff: PushEmpty(string)
0x100: Call2 0xdfa

0x101: Pop(0)
0x102: Push((int) 1)
0x103: Pop(1); Push(Stack[-6] + Stack[-1]);
0x104: Pop(2); Push(Stack[-2] + Stack[-1]);
0x105: @@ GetLocator(Stack[-1], Stack[-8], Stack[-7], Stack[-6])
0x106: Pop(1)
0x107: PushEmpty(bool, cvector, cvector, bool)
0x108: Stack[-3] = Stack[-10]
0x109: Stack[-2] = Stack[-9]
0x10a: Stack[-1] = (bool) 0
0x10b: Push(-4, 1); TaskCall(5)
0x10c: Call2 0x77f

0x10d: Pop(-4, 1); TaskReturn
0x10e: Pop(4)
0x10f: Push((int) 3)
0x110: Push(GlobalVars[2])
0x111: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x112: IF (Stack[-1] == 0) GOTO 0x114; Pop(1)

0x113: GOTO 0x122

0x114: PushEmpty(int)
0x115: Stack[-1] = (int) 1
0x116: Push(-1, 1); TaskCall(7)
0x117: Call2 0x93e

0x118: Pop(-1, 1); TaskReturn
0x119: Pop(1)
0x11a: Push((int) 3)
0x11b: Push(GlobalVars[2])
0x11c: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x11d: IF (Stack[-1] == 0) GOTO 0x11f; Pop(1)

0x11e: GOTO 0x122

0x11f: Push((int) 1)
0x120: Stack[-9] = Stack[-9] + Stack[-1]; Pop(1);
0x121: GOTO 0xf3

0x122: Push((int) 3)
0x123: Push(GlobalVars[2])
0x124: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x125: IF (Stack[-1] == 0) GOTO 0x12a; Pop(1)

0x126: PushEmpty(bool, int)
0x127: Stack[-1] = (int) 2
0x128: Call2 0xd20

0x129: Pop(2)
0x12a: PushEmpty(bool)
0x12b: Stack[-1] = (bool) 0
0x12c: Call2 0xdbc

0x12d: Pop(1)
0x12e: Stack[-11] = 0
0x12f: GOTO 0x1af

0x130: Push((int) 4)
0x131: Push(GlobalVars[2])
0x132: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x133: IF (Stack[-1] == 0) GOTO 0x182; Pop(1)

0x134: Push(GlobalVars[4])
0x135: @@ GetPosition(Stack[-4])
0x136: Pop(1)
0x137: Push(GlobalVars[4])
0x138: @@ GetDirection(Stack[-3])
0x139: Pop(1)
0x13a: PushEmpty(bool, cvector, cvector, bool)
0x13b: Stack[-3] = Stack[-7]
0x13c: Stack[-2] = -Stack[-6]; Pop(0);
0x13d: Stack[-1] = (bool) 1
0x13e: Push(-4, 1); TaskCall(5)
0x13f: Call2 0x77f

0x140: Pop(-4, 1); TaskReturn
0x141: Pop(4)
0x142: Push((int) 4)
0x143: Push(GlobalVars[2])
0x144: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x145: IF (Stack[-1] == 0) GOTO 0x181; Pop(1)

0x146: PushEmpty(int)
0x147: Stack[-1] = (int) 2
0x148: Push(-1, 1); TaskCall(7)
0x149: Call2 0x93e

0x14a: Pop(-1, 1); TaskReturn
0x14b: Pop(1)
0x14c: Push((int) 4)
0x14d: Push(GlobalVars[2])
0x14e: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x14f: IF (Stack[-1] == 0) GOTO 0x181; Pop(1)

0x150: PushEmpty(bool, cvector, cvector, bool)
0x151: Stack[-3] = Stack[0 + Tasks[-1].StackPointer]
0x152: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x153: Stack[-1] = (bool) 1
0x154: Push(-4, 1); TaskCall(5)
0x155: Call2 0x77f

0x156: Pop(-4, 1); TaskReturn
0x157: Pop(4)
0x158: Push((int) 4)
0x159: Push(GlobalVars[2])
0x15a: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x15b: IF (Stack[-1] == 0) GOTO 0x181; Pop(1)

0x15c: @ GetMainOutdoorScene(Stack[-1])
0x15d: Pop(0)
0x15e: PushEmpty(string)
0x15f: Call2 0xdfe

0x160: Pop(0)
0x161: PushEmpty(object)
0x162: Call2 0xbf7

0x163: Pop(0)
0x164: @ BroadcastMessage(Stack[-2], Stack[-1], Stack[-3])
0x165: Pop(2)
0x166: PushEmpty(bool, cvector, cvector, bool)
0x167: Stack[-3] = Stack[-7]
0x168: Stack[-2] = Stack[-7]
0x169: Stack[-1] = (bool) 1
0x16a: Push(-4, 1); TaskCall(5)
0x16b: Call2 0x77f

0x16c: Pop(-4, 1); TaskReturn
0x16d: Pop(4)
0x16e: Push((int) 4)
0x16f: Push(GlobalVars[2])
0x170: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x171: IF (Stack[-1] == 0) GOTO 0x180; Pop(1)

0x172: PushEmpty(int)
0x173: Stack[-1] = (int) 3
0x174: Push(-1, 1); TaskCall(7)
0x175: Call2 0x93e

0x176: Pop(-1, 1); TaskReturn
0x177: Pop(1)
0x178: Push((int) 4)
0x179: Push(GlobalVars[2])
0x17a: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x17b: IF (Stack[-1] == 0) GOTO 0x180; Pop(1)

0x17c: PushEmpty(bool, int)
0x17d: Stack[-1] = (int) 2
0x17e: Call2 0xd20

0x17f: Pop(2)
0x180: Stack[-1] = 0
0x181: GOTO 0x1af

0x182: Push((int) 5)
0x183: Push(GlobalVars[2])
0x184: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x185: IF (Stack[-1] == 0) GOTO 0x1ac; Pop(1)

0x186: PushEmpty(int)
0x187: Stack[-1] = (int) 1
0x188: Push(-1, 1); TaskCall(7)
0x189: Call2 0x93e

0x18a: Pop(-1, 1); TaskReturn
0x18b: Pop(1)
0x18c: Push((int) 5)
0x18d: Push(GlobalVars[2])
0x18e: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x18f: IF (Stack[-1] == 0) GOTO 0x1ab; Pop(1)

0x190: PushEmpty(object, float)
0x191: Push(GlobalVars[5])
0x192: Stack[-3] = Stack[-1]
0x193: Pop(1)
0x194: Stack[-1] = (int) 8
0x195: Push(-2, 3); TaskCall(3)
0x196: Call2 0x5ef

0x197: Pop(-2, 3); TaskReturn
0x198: Pop(2)
0x199: Push((int) 5)
0x19a: Push(GlobalVars[2])
0x19b: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x19c: IF (Stack[-1] == 0) GOTO 0x1ab; Pop(1)

0x19d: PushEmpty(int)
0x19e: Stack[-1] = (int) 2
0x19f: Push(-1, 1); TaskCall(7)
0x1a0: Call2 0x93e

0x1a1: Pop(-1, 1); TaskReturn
0x1a2: Pop(1)
0x1a3: Push((int) 5)
0x1a4: Push(GlobalVars[2])
0x1a5: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1a6: IF (Stack[-1] == 0) GOTO 0x1ab; Pop(1)

0x1a7: PushEmpty(bool, int)
0x1a8: Stack[-1] = (int) 2
0x1a9: Call2 0xd20

0x1aa: Pop(2)
0x1ab: GOTO 0x1af

0x1ac: Push("Unknown FSM state")
0x1ad: @ Trace(Stack[-1])
0x1ae: Pop(1)
0x1af: @ sync()
0x1b0: Pop(0)
0x1b1: GOTO 0x21

0x1b2: Return(); Pop(22)

0x1b3: PushEmpty()
0x1b4: Stack[7 + Tasks[-1].StackPointer] = Stack[-1]
0x1b5: Push((int) 1)
0x1b6: Push((int) 1)
0x1b7: @ SetTimer(Stack[-2], Stack[-1])
0x1b8: Pop(2)
0x1b9: PushEmpty(object, bool, float)
0x1ba: Stack[-3] = Stack[-4]
0x1bb: Stack[-2] = (bool) 1
0x1bc: Stack[-1] = (float) 150.0
0x1bd: Call2 0x1f8

0x1be: Pop(3)
0x1bf: Push((int) 1)
0x1c0: @ KillTimer(Stack[-1])
0x1c1: Pop(1)
0x1c2: Return(); Pop(0)

0x1c3: PushEmpty()
0x1c4: Stack[-3] = (float) 0.1
0x1c5: Return(); Pop(0)

0x1c6: PushEmpty()
0x1c7: Stack[-3] = (int) 0
0x1c8: Return(); Pop(0)

0x1c9: Stack[-1] = (int) 0
0x1ca: Return(); Pop(0)

0x1cb: PushEmpty(object, object)
0x1cc: Push((int) 1)
0x1cd: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1ce: IF (Stack[-1] == 0) GOTO 0x1da; Pop(1)

0x1cf: @ GetMainOutdoorScene(Stack[-1])
0x1d0: Pop(0)
0x1d1: PushEmpty(string)
0x1d2: Call2 0xdfc

0x1d3: Pop(0)
0x1d4: @ BroadcastMessage(Stack[-1], Stack[-7], Stack[-2])
0x1d5: Pop(1)
0x1d6: Push("helpme timer")
0x1d7: @ Trace(Stack[-1])
0x1d8: Pop(1)
0x1d9: Stack[-1] = 0
0x1da: Return(); Pop(2)

0x1db: PushEmpty()
0x1dc: PushEmpty(bool)
0x1dd: Stack[-1] = (bool) 0
0x1de: PushEmpty(bool, object)
0x1df: Stack[-1] = Stack[-4]
0x1e0: Call2 0xa8b

0x1e1: Pop(1)
0x1e2: IF (Stack[-1] == 0) GOTO 0x1e7; Pop(1)

0x1e3: Push(GlobalVars[7])
0x1e4: Pop(1); Push((bool) Stack[-1] != Stack[-3])
0x1e5: IF (Stack[-1] == 0) GOTO 0x1e7; Pop(1)

0x1e6: Stack[-1] = (bool) 1
0x1e7: IF (Stack[-1] == 0) GOTO 0x1ef; Pop(1)

0x1e8: PushEmpty()
0x1e9: Call2 0x2f2

0x1ea: Pop(0)
0x1eb: PushEmpty(bool, object)
0x1ec: Stack[-1] = Stack[-3]
0x1ed: Call2 0xd84

0x1ee: Pop(2)
0x1ef: Return(); Pop(0)

0x1f0: PushEmpty()
0x1f1: Call2 0x2f2

0x1f2: Pop(0)
0x1f3: PushEmpty(bool, int)
0x1f4: Stack[-1] = (int) 0
0x1f5: Call2 0xd20

0x1f6: Pop(2)
0x1f7: Return(); Pop(0)

0x1f8: PushEmpty(float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float, float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float)
0x1f9: PushEmpty()
0x1fa: Call2 0x2fa

0x1fb: Pop(0)
0x1fc: Stack[6 + Tasks[-1].StackPointer] = (int)0
0x1fd: Push("@GetAttackDistance")
0x1fe: Push((int) 1)
0x1ff: Pop(2); Push(IsFuncExist(Stack[-27], Stack[-2], Stack[-1]))
0x200: IF (Stack[-1] == 0) GOTO 0x206; Pop(1)

0x201: @@ GetAttackDistance(Stack[-11])
0x202: Pop(0)
0x203: Push((int) 50)
0x204: Stack[-12] = Stack[-12] + Stack[-1]; Pop(1);
0x205: GOTO 0x207

0x206: Stack[-11] = Stack[-23]
0x207: Push((int) 150)
0x208: Pop(1); Push((bool) Stack[-12] >= Stack[-1])
0x209: IF (Stack[-1] == 0) GOTO 0x20b; Pop(1)

0x20a: Stack[-11] = (int) 150
0x20b: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x20c: Stack[0 + Tasks[-1].StackPointer] = Stack[-25]
0x20d: @ IsPlayerActor(Stack[-0], Stack[-8])
0x20e: Pop(0)
0x20f: Push(Stack[-8])
0x210: IF (Stack[-1] == 0) GOTO 0x214; Pop(1)

0x211: Push("attack")
0x212: @ PlayGlobalMusic(Stack[-1])
0x213: Pop(1)
0x214: Push(Stack[-24])
0x215: IF (Stack[-1] == 0) GOTO 0x218; Pop(1)

0x216: Stack[-7] = (bool) 0
0x217: GOTO 0x219

0x218: Stack[-7] = (bool) 1
0x219: Push((float)300.0)
0x21a: Stack[-7] = Stack[-1] + Stack[-12]; Pop(1);
0x21b: PushEmpty(bool)
0x21c: Stack[-1] = (bool) 0
0x21d: PushEmpty(bool)
0x21e: Stack[-1] = (bool) 0
0x21f: PushEmpty(bool, object)
0x220: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x221: Call2 0xb0e

0x222: Pop(1)
0x223: IF (Stack[-1] == 0) GOTO 0x227; Pop(1)

0x224: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x225: IF (Stack[-1] == 0) GOTO 0x227; Pop(1)

0x226: Stack[-1] = (bool) 1
0x227: IF (Stack[-1] == 0) GOTO 0x22b; Pop(1)

0x228: Pop(0); Push((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x229: IF (Stack[-1] == 0) GOTO 0x22b; Pop(1)

0x22a: Stack[-1] = (bool) 1
0x22b: IF (Stack[-1] == 0) GOTO 0x2db; Pop(1)

0x22c: PushEmpty()
0x22d: Call2 0x4ac

0x22e: Pop(0)
0x22f: @@ GetPFPosition(Stack[-10])
0x230: Pop(0)
0x231: @ GetPFPosition(Stack[-9])
0x232: Pop(0)
0x233: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0x234: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x235: Pop(0); Push(Stack[-6] * Stack[-6]);
0x236: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0x237: IF (Stack[-1] == 0) GOTO 0x248; Pop(1)

0x238: PushEmpty(bool, object, float, float, bool, bool)
0x239: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0x23a: Stack[-4] = Stack[-17]
0x23b: Stack[-3] = (float) 2000.0
0x23c: Stack[-2] = (bool) 1
0x23d: Stack[-1] = (bool) 0
0x23e: Push(-6, 4); TaskCall(2)
0x23f: Call2 0x4be

0x240: Pop(-6, 4); TaskReturn
0x241: Pop(5)
0x242: Pop(1); Push((bool) Stack[-1] == 0)
0x243: IF (Stack[-1] == 0) GOTO 0x246; Pop(1)

0x244: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x245: GOTO 0x2db

0x246: Stack[-7] = (bool) 0
0x247: GOTO 0x2da

0x248: Pop(0); Push(Stack[-23] * Stack[-23]);
0x249: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0x24a: IF (Stack[-1] == 0) GOTO 0x2d2; Pop(1)

0x24b: @@ GetPFPosition(Stack[-3])
0x24c: Pop(0)
0x24d: @ CanReachByPF(Stack[-2], Stack[-3])
0x24e: Pop(0)
0x24f: Pop(0); Push((bool) Stack[-2] == 0)
0x250: IF (Stack[-1] == 0) GOTO 0x261; Pop(1)

0x251: PushEmpty(bool, object, float, float, bool, bool)
0x252: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0x253: Stack[-4] = Stack[-17]
0x254: Stack[-3] = (float) 2000.0
0x255: Stack[-2] = (bool) 1
0x256: Stack[-1] = (bool) 0
0x257: Push(-6, 4); TaskCall(2)
0x258: Call2 0x4be

0x259: Pop(-6, 4); TaskReturn
0x25a: Pop(5)
0x25b: Pop(1); Push((bool) Stack[-1] == 0)
0x25c: IF (Stack[-1] == 0) GOTO 0x25f; Pop(1)

0x25d: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x25e: GOTO 0x2db

0x25f: Stack[-7] = (bool) 0
0x260: GOTO 0x21b

0x261: Pop(0); Push((bool) Stack[-7] == 0)
0x262: IF (Stack[-1] == 0) GOTO 0x280; Pop(1)

0x263: PushEmpty(object)
0x264: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x265: Call2 0xba4

0x266: Pop(1)
0x267: Push("all")
0x268: Push("attack_on")
0x269: @ PlayAnimation(Stack[-2], Stack[-1])
0x26a: Pop(2)
0x26b: @ WaitForAnimEnd()
0x26c: Pop(0)
0x26d: PushEmpty()
0x26e: Call2 0x4ac

0x26f: Pop(0)
0x270: @ StopAsync()
0x271: Pop(0)
0x272: Stack[-7] = (bool) 1
0x273: PushEmpty(bool)
0x274: Stack[-1] = (bool) 1
0x275: PushEmpty(bool, object)
0x276: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x277: Call2 0xb0e

0x278: Pop(1)
0x279: Pop(1); Push((bool) Stack[-1] == 0)
0x27a: IF (Stack[-1] == 0) GOTO 0x27e; Pop(1)

0x27b: Push( Stack[4 + Tasks[-1].StackPointer] )
0x27c: IF (Stack[-1] == 0) GOTO 0x27e; Pop(1)

0x27d: Stack[-1] = (bool) 0
0x27e: IF (Stack[-1] == 0) GOTO 0x280; Pop(1)

0x27f: GOTO 0x2db

0x280: @ rand(Stack[-1])
0x281: Pop(0)
0x282: PushEmpty(bool)
0x283: Stack[-1] = (bool) 1
0x284: Push((float)0.6)
0x285: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x286: IF (Stack[-1] == 0) GOTO 0x28c; Pop(1)

0x287: PushEmpty(bool)
0x288: Call2 0x481

0x289: Pop(0)
0x28a: IF (Stack[-1] == 0) GOTO 0x28c; Pop(1)

0x28b: Stack[-1] = (bool) 0
0x28c: IF (Stack[-1] == 0) GOTO 0x29d; Pop(1)

0x28d: @ Face(Stack[-0])
0x28e: Pop(0)
0x28f: PushEmpty()
0x290: Call2 0x4b1

0x291: Pop(0)
0x292: Push("all")
0x293: Push("attack_stay")
0x294: @ PlayAnimation(Stack[-2], Stack[-1])
0x295: Pop(2)
0x296: PushEmpty(bool, float)
0x297: Stack[-1] = Stack[-25]
0x298: Call2 0x3f1

0x299: Pop(2)
0x29a: @ StopAsync()
0x29b: Pop(0)
0x29c: GOTO 0x2d1

0x29d: @ Face(Stack[-0])
0x29e: Pop(0)
0x29f: Push("all")
0x2a0: Push("fjump")
0x2a1: @ PlayAnimation(Stack[-2], Stack[-1])
0x2a2: Pop(2)
0x2a3: @ WaitForAnimEnd()
0x2a4: Pop(0)
0x2a5: PushEmpty()
0x2a6: Call2 0x4ac

0x2a7: Pop(0)
0x2a8: Push(CVector(0.0, 0.0, 0.0))
0x2a9: @ SetSpeed(Stack[-1])
0x2aa: Pop(1)
0x2ab: @ Stop()
0x2ac: Pop(0)
0x2ad: @ StopAsync()
0x2ae: Pop(0)
0x2af: PushEmpty(bool)
0x2b0: Call2 0x481

0x2b1: Pop(0)
0x2b2: Pop(1); Push((bool) Stack[-1] == 0)
0x2b3: IF (Stack[-1] == 0) GOTO 0x2d1; Pop(1)

0x2b4: PushEmpty(bool)
0x2b5: Stack[-1] = (bool) 1
0x2b6: PushEmpty(bool, object)
0x2b7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2b8: Call2 0xb0e

0x2b9: Pop(1)
0x2ba: Pop(1); Push((bool) Stack[-1] == 0)
0x2bb: IF (Stack[-1] == 0) GOTO 0x2bf; Pop(1)

0x2bc: Push( Stack[4 + Tasks[-1].StackPointer] )
0x2bd: IF (Stack[-1] == 0) GOTO 0x2bf; Pop(1)

0x2be: Stack[-1] = (bool) 0
0x2bf: IF (Stack[-1] == 0) GOTO 0x2c1; Pop(1)

0x2c0: GOTO 0x2db

0x2c1: @@ GetPFPosition(Stack[-10])
0x2c2: Pop(0)
0x2c3: @ GetPFPosition(Stack[-9])
0x2c4: Pop(0)
0x2c5: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0x2c6: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x2c7: Pop(0); Push(Stack[-23] * Stack[-23]);
0x2c8: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x2c9: IF (Stack[-1] == 0) GOTO 0x2d1; Pop(1)

0x2ca: PushEmpty(bool, float)
0x2cb: Stack[-1] = Stack[-25]
0x2cc: Call2 0x344

0x2cd: Pop(1)
0x2ce: Pop(1); Push((bool) Stack[-1] == 0)
0x2cf: IF (Stack[-1] == 0) GOTO 0x2d1; Pop(1)

0x2d0: GOTO 0x2db

0x2d1: GOTO 0x2da

0x2d2: PushEmpty(bool, float)
0x2d3: Stack[-1] = Stack[-25]
0x2d4: Call2 0x344

0x2d5: Pop(1)
0x2d6: Pop(1); Push((bool) Stack[-1] == 0)
0x2d7: IF (Stack[-1] == 0) GOTO 0x2d9; Pop(1)

0x2d8: GOTO 0x2db

0x2d9: Stack[-7] = (bool) 1
0x2da: GOTO 0x21b

0x2db: @ WaitForAnimEnd()
0x2dc: Pop(0)
0x2dd: PushEmpty(bool)
0x2de: Stack[-1] = (bool) 1
0x2df: Push( Stack[3 + Tasks[-1].StackPointer] )
0x2e0: IF (Stack[-1] == 0) GOTO 0x2e4; Pop(1)

0x2e1: Push( Stack[4 + Tasks[-1].StackPointer] )
0x2e2: IF (Stack[-1] == 0) GOTO 0x2e4; Pop(1)

0x2e3: Stack[-1] = (bool) 0
0x2e4: IF (Stack[-1] == 0) GOTO 0x2e6; Pop(1)

0x2e5: Return(); Pop(22)

0x2e6: Push("all")
0x2e7: Push("attack_off")
0x2e8: @ PlayAnimation(Stack[-2], Stack[-1])
0x2e9: Pop(2)
0x2ea: @ WaitForAnimEnd()
0x2eb: Pop(0)
0x2ec: Push(Stack[-8])
0x2ed: IF (Stack[-1] == 0) GOTO 0x2f1; Pop(1)

0x2ee: Push((float)2.0)
0x2ef: @ Sleep(Stack[-1])
0x2f0: Pop(1)
0x2f1: Return(); Pop(22)

0x2f2: @ Stop()
0x2f3: Pop(0)
0x2f4: @ StopAnimation()
0x2f5: Pop(0)
0x2f6: @ StopGroup0()
0x2f7: Pop(0)
0x2f8: Stack[4 + Tasks[-1].StackPointer] = (bool)1
0x2f9: Return(); Pop(0)

0x2fa: PushEmpty(bool, bool, cvector, bool, bool, cvector)
0x2fb: Stack[1 + Tasks[-1].StackPointer] = (int)0
0x2fc: Push("all")
0x2fd: Push("attack_begin")
0x2fe: Push((int) 1)
0x2ff: Pop(1); Push(Stack[1 + StackPtr] + Stack[-1]);
0x300: Pop(2); Push(Stack[-2] + Stack[-1]);
0x301: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0x302: Pop(2)
0x303: Pop(0); Push((bool) Stack[-3] == 0)
0x304: IF (Stack[-1] == 0) GOTO 0x306; Pop(1)

0x305: GOTO 0x309

0x306: Push((int) 1)
0x307: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x308: GOTO 0x2fc

0x309: Stack[2 + Tasks[-1].StackPointer] = (int)0
0x30a: Push("attack")
0x30b: Push((int) 1)
0x30c: Pop(1); Push(Stack[2 + StackPtr] + Stack[-1]);
0x30d: Pop(2); Push(Stack[-2] + Stack[-1]);
0x30e: @ IsExisting3DSound(Stack[-3], Stack[-1])
0x30f: Pop(1)
0x310: Pop(0); Push((bool) Stack[-2] == 0)
0x311: IF (Stack[-1] == 0) GOTO 0x313; Pop(1)

0x312: GOTO 0x316

0x313: Push((int) 1)
0x314: Stack[2 + Tasks[-1].StackPointer] = Stack[2 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x315: GOTO 0x30a

0x316: Push("all")
0x317: Push("bjump")
0x318: @ GetAnimationOffset(Stack[-3], Stack[-2], Stack[-1])
0x319: Pop(2)
0x31a: Push(CvectorIndex(Stack[-1], 2))
0x31b: Stack[5 + Tasks[-1].StackPointer] = -Stack[-1]; Pop(1);
0x31c: Return(); Pop(6)

0x31d: PushEmpty(object, float, float, object, float, float)
0x31e: Push((float)0.9)
0x31f: Pop(1); Push(Stack[-9] * Stack[-1]);
0x320: @ GetVictim(Stack[-1], Stack[-4])
0x321: Pop(1)
0x322: @ ReportAttack(Stack[-0])
0x323: Pop(0)
0x324: Pop(0); Push((bool) Stack[-3] == Stack[0 + Tasks[-1].StackPointer])
0x325: IF (Stack[-1] == 0) GOTO 0x342; Pop(1)

0x326: PushEmpty(float, object, int)
0x327: Stack[-2] = Stack[-6]
0x328: Stack[-1] = Stack[-10]
0x329: Call2 0x1c3

0x32a: Stack[-5] = Stack[-3]
0x32b: Pop(3)
0x32c: PushEmpty(float, object, float, int)
0x32d: Stack[-3] = Stack[-7]
0x32e: Stack[-2] = Stack[-6]
0x32f: PushEmpty(int, object, int)
0x330: Stack[-2] = Stack[-10]
0x331: Stack[-1] = Stack[-14]
0x332: Call2 0x1c6

0x333: Stack[-4] = Stack[-3]
0x334: Pop(3)
0x335: Call2 0xa9c

0x336: Stack[-5] = Stack[-4]
0x337: Pop(4)
0x338: PushEmpty(int)
0x339: Call2 0x1c9

0x33a: Pop(0)
0x33b: @ ReportHit(Stack[-0], Stack[-1], Stack[-2], Stack[-3])
0x33c: Pop(1)
0x33d: PushEmpty(object, float)
0x33e: Stack[-2] = Stack[-5]
0x33f: Stack[-1] = Stack[-3]
0x340: Call2 0x4b6

0x341: Pop(2)
0x342: Return(); Pop(6)

0x343: Stack[-3] = 0
0x344: PushEmpty(int, bool, int, string, int, bool, int, string)
0x345: PushEmpty()
0x346: Call2 0x4ac

0x347: Pop(0)
0x348: @ irand(Stack[-4], Stack[-1])
0x349: Pop(0)
0x34a: Push((int) 1)
0x34b: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x34c: @ Face(Stack[-0])
0x34d: Pop(0)
0x34e: Push((bool) 1)
0x34f: @ SetAttackState(Stack[-1])
0x350: Pop(1)
0x351: Push("all")
0x352: Push("attack_begin")
0x353: Pop(1); Push(Stack[-1] + Stack[-6]);
0x354: @ PlayAnimation(Stack[-2], Stack[-1])
0x355: Pop(2)
0x356: @ WaitForAnimEnd()
0x357: Pop(0)
0x358: PushEmpty()
0x359: Call2 0x48c

0x35a: Pop(0)
0x35b: PushEmpty(bool)
0x35c: Stack[-1] = (bool) 1
0x35d: PushEmpty(bool, object)
0x35e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x35f: Call2 0xb0e

0x360: Pop(1)
0x361: Pop(1); Push((bool) Stack[-1] == 0)
0x362: IF (Stack[-1] == 0) GOTO 0x366; Pop(1)

0x363: Push( Stack[4 + Tasks[-1].StackPointer] )
0x364: IF (Stack[-1] == 0) GOTO 0x366; Pop(1)

0x365: Stack[-1] = (bool) 0
0x366: IF (Stack[-1] == 0) GOTO 0x36b; Pop(1)

0x367: @ StopAsync()
0x368: Pop(0)
0x369: Stack[-10] = (bool) 0
0x36a: Return(); Pop(8)

0x36b: PushEmpty(float, int)
0x36c: Stack[-2] = Stack[-11]
0x36d: Stack[-1] = Stack[-6]
0x36e: Call2 0x31d

0x36f: Pop(2)
0x370: Push("all")
0x371: Push("attack_middle")
0x372: Pop(1); Push(Stack[-1] + Stack[-6]);
0x373: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0x374: Pop(2)
0x375: Push(Stack[-3])
0x376: IF (Stack[-1] == 0) GOTO 0x3c2; Pop(1)

0x377: Push("all")
0x378: Push("attack_middle")
0x379: Pop(1); Push(Stack[-1] + Stack[-6]);
0x37a: @ PlayAnimation(Stack[-2], Stack[-1])
0x37b: Pop(2)
0x37c: @ WaitForAnimEnd()
0x37d: Pop(0)
0x37e: PushEmpty()
0x37f: Call2 0x4ac

0x380: Pop(0)
0x381: PushEmpty(bool)
0x382: Stack[-1] = (bool) 1
0x383: PushEmpty(bool, object)
0x384: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x385: Call2 0xb0e

0x386: Pop(1)
0x387: Pop(1); Push((bool) Stack[-1] == 0)
0x388: IF (Stack[-1] == 0) GOTO 0x38c; Pop(1)

0x389: Push( Stack[4 + Tasks[-1].StackPointer] )
0x38a: IF (Stack[-1] == 0) GOTO 0x38c; Pop(1)

0x38b: Stack[-1] = (bool) 0
0x38c: IF (Stack[-1] == 0) GOTO 0x391; Pop(1)

0x38d: @ StopAsync()
0x38e: Pop(0)
0x38f: Stack[-10] = (bool) 0
0x390: Return(); Pop(8)

0x391: PushEmpty(float, int)
0x392: Stack[-2] = Stack[-11]
0x393: Stack[-1] = Stack[-6]
0x394: Call2 0x31d

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

0x3a1: GOTO 0x3c2

0x3a2: Push("all")
0x3a3: @ PlayAnimation(Stack[-1], Stack[-2])
0x3a4: Pop(1)
0x3a5: @ WaitForAnimEnd()
0x3a6: Pop(0)
0x3a7: PushEmpty()
0x3a8: Call2 0x4ac

0x3a9: Pop(0)
0x3aa: PushEmpty(bool)
0x3ab: Stack[-1] = (bool) 1
0x3ac: PushEmpty(bool, object)
0x3ad: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3ae: Call2 0xb0e

0x3af: Pop(1)
0x3b0: Pop(1); Push((bool) Stack[-1] == 0)
0x3b1: IF (Stack[-1] == 0) GOTO 0x3b5; Pop(1)

0x3b2: Push( Stack[4 + Tasks[-1].StackPointer] )
0x3b3: IF (Stack[-1] == 0) GOTO 0x3b5; Pop(1)

0x3b4: Stack[-1] = (bool) 0
0x3b5: IF (Stack[-1] == 0) GOTO 0x3ba; Pop(1)

0x3b6: @ StopAsync()
0x3b7: Pop(0)
0x3b8: Stack[-10] = (bool) 0
0x3b9: Return(); Pop(8)

0x3ba: PushEmpty(float, int)
0x3bb: Stack[-2] = Stack[-11]
0x3bc: Stack[-1] = Stack[-6]
0x3bd: Call2 0x31d

0x3be: Pop(2)
0x3bf: Push((int) 1)
0x3c0: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x3c1: GOTO 0x397

0x3c2: Push((bool) 0)
0x3c3: @ SetAttackState(Stack[-1])
0x3c4: Pop(1)
0x3c5: Push("all")
0x3c6: Push("attack_end")
0x3c7: Pop(1); Push(Stack[-1] + Stack[-6]);
0x3c8: @ PlayAnimation(Stack[-2], Stack[-1])
0x3c9: Pop(2)
0x3ca: PushEmpty(bool)
0x3cb: Call2 0x4b8

0x3cc: Pop(0)
0x3cd: IF (Stack[-1] == 0) GOTO 0x3d4; Pop(1)

0x3ce: PushEmpty(bool, float)
0x3cf: Stack[-1] = (float) 0.75
0x3d0: Call2 0x3d6

0x3d1: Pop(2)
0x3d2: @ StopAsync()
0x3d3: Pop(0)
0x3d4: Stack[-10] = (bool) 1
0x3d5: Return(); Pop(8)

0x3d6: PushEmpty(float, bool, float, bool)
0x3d7: @ rand(Stack[-2])
0x3d8: Pop(0)
0x3d9: Pop(0); Push((bool) Stack[-2] < Stack[-5])
0x3da: IF (Stack[-1] == 0) GOTO 0x3ea; Pop(1)

0x3db: @ IsAnimationPlaying(Stack[-1])
0x3dc: Pop(0)
0x3dd: Pop(0); Push((bool) Stack[-1] == 0)
0x3de: IF (Stack[-1] == 0) GOTO 0x3e0; Pop(1)

0x3df: GOTO 0x3e9

0x3e0: PushEmpty(bool)
0x3e1: Call2 0x444

0x3e2: Pop(0)
0x3e3: IF (Stack[-1] == 0) GOTO 0x3e6; Pop(1)

0x3e4: Stack[-6] = (bool) 1
0x3e5: Return(); Pop(4)

0x3e6: @ sync()
0x3e7: Pop(0)
0x3e8: GOTO 0x3db

0x3e9: GOTO 0x3ef

0x3ea: @ WaitForAnimEnd()
0x3eb: Pop(0)
0x3ec: PushEmpty()
0x3ed: Call2 0x4ac

0x3ee: Pop(0)
0x3ef: Stack[-6] = (bool) 0
0x3f0: Return(); Pop(4)

0x3f1: PushEmpty(bool, cvector, cvector, cvector, float, bool, cvector, cvector, cvector, float)
0x3f2: @ IsAnimationPlaying(Stack[-5])
0x3f3: Pop(0)
0x3f4: Pop(0); Push((bool) Stack[-5] == 0)
0x3f5: IF (Stack[-1] == 0) GOTO 0x3f7; Pop(1)

0x3f6: GOTO 0x41d

0x3f7: PushEmpty(bool)
0x3f8: Call2 0x444

0x3f9: Pop(0)
0x3fa: IF (Stack[-1] == 0) GOTO 0x3fd; Pop(1)

0x3fb: Stack[-12] = (bool) 1
0x3fc: Return(); Pop(10)

0x3fd: PushEmpty(bool)
0x3fe: Stack[-1] = (bool) 1
0x3ff: PushEmpty(bool, object)
0x400: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x401: Call2 0xb0e

0x402: Pop(1)
0x403: Pop(1); Push((bool) Stack[-1] == 0)
0x404: IF (Stack[-1] == 0) GOTO 0x408; Pop(1)

0x405: Push( Stack[4 + Tasks[-1].StackPointer] )
0x406: IF (Stack[-1] == 0) GOTO 0x408; Pop(1)

0x407: Stack[-1] = (bool) 0
0x408: IF (Stack[-1] == 0) GOTO 0x40b; Pop(1)

0x409: Stack[-12] = (bool) 0
0x40a: Return(); Pop(10)

0x40b: @@ GetPFPosition(Stack[-4])
0x40c: Pop(0)
0x40d: @ GetPFPosition(Stack[-3])
0x40e: Pop(0)
0x40f: Stack[-2] = Stack[-4] - Stack[-3]; Pop(0);
0x410: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x411: Pop(0); Push(Stack[-11] * Stack[-11]);
0x412: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x413: IF (Stack[-1] == 0) GOTO 0x41a; Pop(1)

0x414: PushEmpty(bool, float)
0x415: Stack[-1] = Stack[-13]
0x416: Call2 0x344

0x417: Pop(2)
0x418: Stack[-12] = (bool) 1
0x419: Return(); Pop(10)

0x41a: @ sync()
0x41b: Pop(0)
0x41c: GOTO 0x3f2

0x41d: PushEmpty()
0x41e: Call2 0x4ac

0x41f: Pop(0)
0x420: Stack[-12] = (bool) 0
0x421: Return(); Pop(10)

0x422: PushEmpty(cvector, cvector, cvector, float, float, cvector, cvector, cvector, float, float)
0x423: PushEmpty(bool)
0x424: Stack[-1] = (bool) 1
0x425: PushEmpty(bool, object)
0x426: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x427: Call2 0xb0e

0x428: Pop(1)
0x429: Pop(1); Push((bool) Stack[-1] == 0)
0x42a: IF (Stack[-1] == 0) GOTO 0x42e; Pop(1)

0x42b: Push( Stack[4 + Tasks[-1].StackPointer] )
0x42c: IF (Stack[-1] == 0) GOTO 0x42e; Pop(1)

0x42d: Stack[-1] = (bool) 0
0x42e: IF (Stack[-1] == 0) GOTO 0x431; Pop(1)

0x42f: Stack[-11] = (bool) 0
0x430: Return(); Pop(10)

0x431: PushEmpty(bool)
0x432: Call2 0x481

0x433: Pop(0)
0x434: IF (Stack[-1] == 0) GOTO 0x442; Pop(1)

0x435: @@ GetPFPosition(Stack[-5])
0x436: Pop(0)
0x437: @ GetPFPosition(Stack[-4])
0x438: Pop(0)
0x439: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x43a: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x43b: @@ GetAttackDistance(Stack[-1])
0x43c: Pop(0)
0x43d: Push((int) 50)
0x43e: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x43f: Pop(0); Push(Stack[-1] * Stack[-1]);
0x440: Stack[-12] = Stack[-3] <= Stack[-1]; Pop(1);
0x441: Return(); Pop(10)

0x442: Stack[-11] = (bool) 0
0x443: Return(); Pop(10)

0x444: PushEmpty(bool)
0x445: Stack[-1] = (bool) 0
0x446: PushEmpty(bool)
0x447: Call2 0x422

0x448: Pop(0)
0x449: IF (Stack[-1] == 0) GOTO 0x44f; Pop(1)

0x44a: PushEmpty(bool)
0x44b: Call2 0x454

0x44c: Pop(0)
0x44d: IF (Stack[-1] == 0) GOTO 0x44f; Pop(1)

0x44e: Stack[-1] = (bool) 1
0x44f: IF (Stack[-1] == 0) GOTO 0x452; Pop(1)

0x450: Stack[-1] = (bool) 1
0x451: Return(); Pop(0)

0x452: Stack[-1] = (bool) 0
0x453: Return(); Pop(0)

0x454: PushEmpty(object, bool, float, cvector, cvector, object, bool, float, cvector, cvector)
0x455: @ GetScene(Stack[-5])
0x456: Pop(0)
0x457: Stack[-4] = (bool) 0
0x458: PushEmpty(cvector, object)
0x459: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x45a: Call2 0xa84

0x45b: Pop(1)
0x45c: Pop(1); Push(( -Stack[-1])
0x45d: @ FindDirLength(Stack[-4], Stack[-1], Stack[-5])
0x45e: Pop(1)
0x45f: Pop(0); Push((bool) Stack[-3] < Stack[5 + Tasks[-1].StackPointer])
0x460: IF (Stack[-1] == 0) GOTO 0x462; Pop(1)

0x461: GOTO 0x47e

0x462: @ Face(Stack[-0])
0x463: Pop(0)
0x464: Push("all")
0x465: Push("bjump")
0x466: @ PlayAnimation(Stack[-2], Stack[-1])
0x467: Pop(2)
0x468: @@ GetPFPosition(Stack[-2])
0x469: Pop(0)
0x46a: @ GetPFPosition(Stack[-1])
0x46b: Pop(0)
0x46c: @ WaitForAnimEnd()
0x46d: Pop(0)
0x46e: PushEmpty()
0x46f: Call2 0x4ac

0x470: Pop(0)
0x471: @ StopAsync()
0x472: Pop(0)
0x473: Push(CVector(0.0, 0.0, 0.0))
0x474: @ SetSpeed(Stack[-1])
0x475: Pop(1)
0x476: Stack[-4] = (bool) 1
0x477: PushEmpty(bool)
0x478: Call2 0x422

0x479: Pop(0)
0x47a: Pop(1); Push((bool) Stack[-1] == 0)
0x47b: IF (Stack[-1] == 0) GOTO 0x47d; Pop(1)

0x47c: GOTO 0x47e

0x47d: GOTO 0x458

0x47e: Stack[-11] = Stack[-4]
0x47f: Return(); Pop(10)

0x480: Stack[-5] = 0
0x481: PushEmpty(bool, bool)
0x482: Push("IsAttacking")
0x483: Push((int) 1)
0x484: Pop(2); Push(IsFuncExist(Stack[0 + Tasks[-1].StackPointer], Stack[-2], Stack[-1]))
0x485: IF (Stack[-1] == 0) GOTO 0x48a; Pop(1)

0x486: @@ IsAttacking(Stack[-1])
0x487: Pop(0)
0x488: Stack[-3] = Stack[-1]
0x489: Return(); Pop(2)

0x48a: Stack[-3] = (bool) 0
0x48b: Return(); Pop(2)

0x48c: PushEmpty(float, int, float, int)
0x48d: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x48e: IF (Stack[-1] == 0) GOTO 0x490; Pop(1)

0x48f: Return(); Pop(4)

0x490: Push( Stack[6 + Tasks[-1].StackPointer] )
0x491: IF (Stack[-1] == 0) GOTO 0x498; Pop(1)

0x492: Push((int) -1)
0x493: Stack[6 + Tasks[-1].StackPointer] = Stack[6 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x494: Push((int) 0)
0x495: Pop(1); Push((bool) Stack[6 + Tasks[-1].StackPointer] > Stack[-1])
0x496: IF (Stack[-1] == 0) GOTO 0x498; Pop(1)

0x497: Return(); Pop(4)

0x498: @ rand(Stack[-2])
0x499: Pop(0)
0x49a: PushEmpty(float)
0x49b: Call2 0x4bc

0x49c: Pop(0)
0x49d: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x49e: IF (Stack[-1] == 0) GOTO 0x4ab; Pop(1)

0x49f: @ irand(Stack[-1], Stack[-2])
0x4a0: Pop(0)
0x4a1: Push((int) 1)
0x4a2: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x4a3: Push("attack")
0x4a4: Pop(1); Push(Stack[-1] + Stack[-2]);
0x4a5: @ Speak(Stack[-1])
0x4a6: Pop(1)
0x4a7: PushEmpty(int)
0x4a8: Call2 0x4ba

0x4a9: Stack[6 + Tasks[-1].StackPointer] = Stack[-1]
0x4aa: Pop(1)
0x4ab: Return(); Pop(4)

0x4ac: PushEmpty(object)
0x4ad: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4ae: Call2 0xc34

0x4af: Pop(1)
0x4b0: Return(); Pop(0)

0x4b1: PushEmpty(string)
0x4b2: Stack[-1] = "attack_stay"
0x4b3: Call2 0xbce

0x4b4: Pop(1)
0x4b5: Return(); Pop(0)

0x4b6: PushEmpty()
0x4b7: Return(); Pop(0)

0x4b8: Stack[-1] = (bool) 1
0x4b9: Return(); Pop(0)

0x4ba: Stack[-1] = (int) 1
0x4bb: Return(); Pop(0)

0x4bc: Stack[-1] = (float) 0.5
0x4bd: Return(); Pop(0)

0x4be: PushEmpty(bool, bool)
0x4bf: Stack[3 + Tasks[-1].StackPointer] = Stack[-7]
0x4c0: Push((int) 2)
0x4c1: Push((int) 2)
0x4c2: @ SetTimer(Stack[-2], Stack[-1])
0x4c3: Pop(2)
0x4c4: PushEmpty(bool, object, float, float, bool, bool)
0x4c5: Stack[-5] = Stack[-13]
0x4c6: Stack[-4] = Stack[-12]
0x4c7: Stack[-3] = Stack[-11]
0x4c8: Stack[-2] = Stack[-10]
0x4c9: Stack[-1] = Stack[-9]
0x4ca: Call2 0x4ef

0x4cb: Stack[-7] = Stack[-6]
0x4cc: Pop(6)
0x4cd: Push((int) 2)
0x4ce: @ KillTimer(Stack[-1])
0x4cf: Pop(1)
0x4d0: Stack[-8] = Stack[-1]
0x4d1: Return(); Pop(2)

0x4d2: PushEmpty(object, object)
0x4d3: Push((int) 2)
0x4d4: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x4d5: IF (Stack[-1] == 0) GOTO 0x4e2; Pop(1)

0x4d6: @ GetMainOutdoorScene(Stack[-1])
0x4d7: Pop(0)
0x4d8: PushEmpty(string)
0x4d9: Call2 0xdfc

0x4da: Pop(0)
0x4db: @ BroadcastMessage(Stack[-1], Stack[-3], Stack[-2])
0x4dc: Pop(1)
0x4dd: Push("helpme timer")
0x4de: @ Trace(Stack[-1])
0x4df: Pop(1)
0x4e0: Stack[-1] = 0
0x4e1: GOTO 0x4e6

0x4e2: PushEmpty(int)
0x4e3: Stack[-1] = Stack[-4]
0x4e4: Call2 0x520

0x4e5: Pop(1)
0x4e6: Return(); Pop(2)

0x4e7: PushEmpty()
0x4e8: Call2 0x52e

0x4e9: Pop(0)
0x4ea: PushEmpty(bool, int)
0x4eb: Stack[-1] = (int) 0
0x4ec: Call2 0xd20

0x4ed: Pop(2)
0x4ee: Return(); Pop(0)

0x4ef: PushEmpty(bool, bool, bool, bool)
0x4f0: PushEmpty(object)
0x4f1: Stack[-1] = Stack[-10]
0x4f2: Call2 0xc34

0x4f3: Pop(1)
0x4f4: Push((int) 1)
0x4f5: Push((int) 5)
0x4f6: @ SetTimer(Stack[-2], Stack[-1])
0x4f7: Pop(2)
0x4f8: @ CanSee(Stack[-2], Stack[-9])
0x4f9: Pop(0)
0x4fa: Push(Stack[-2])
0x4fb: IF (Stack[-1] == 0) GOTO 0x502; Pop(1)

0x4fc: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x4fd: PushEmpty(object)
0x4fe: Stack[-1] = Stack[-10]
0x4ff: Call2 0xbb4

0x500: Pop(1)
0x501: GOTO 0x503

0x502: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x503: PushEmpty(bool, object)
0x504: Stack[-1] = Stack[-11]
0x505: Call2 0xa8b

0x506: Pop(1)
0x507: IF (Stack[-1] == 0) GOTO 0x50d; Pop(1)

0x508: PushEmpty(object)
0x509: Call2 0xbf7

0x50a: Pop(0)
0x50b: @ SendPlayerEnemy(Stack[-10], Stack[-1])
0x50c: Pop(1)
0x50d: PushEmpty(bool, object, float, float, bool, bool)
0x50e: Stack[-5] = Stack[-15]
0x50f: Stack[-4] = Stack[-14]
0x510: Stack[-3] = Stack[-13]
0x511: Stack[-2] = Stack[-12]
0x512: Stack[-1] = Stack[-11]
0x513: Call2 0x558

0x514: Stack[-7] = Stack[-6]
0x515: Pop(6)
0x516: Push( Stack[2 + Tasks[-1].StackPointer] )
0x517: IF (Stack[-1] == 0) GOTO 0x51b; Pop(1)

0x518: Push("head")
0x519: @ UnlookAsync(Stack[-1])
0x51a: Pop(1)
0x51b: Push((int) 1)
0x51c: @ KillTimer(Stack[-1])
0x51d: Pop(1)
0x51e: Stack[-10] = Stack[-1]
0x51f: Return(); Pop(4)

0x520: PushEmpty()
0x521: Push((int) 1)
0x522: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x523: IF (Stack[-1] == 0) GOTO 0x529; Pop(1)

0x524: PushEmpty(object)
0x525: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x526: Call2 0xc34

0x527: Pop(1)
0x528: GOTO 0x52d

0x529: PushEmpty(int)
0x52a: Stack[-1] = Stack[-2]
0x52b: Call2 0x5be

0x52c: Pop(1)
0x52d: Return(); Pop(0)

0x52e: Push((int) 1)
0x52f: @ KillTimer(Stack[-1])
0x530: Pop(1)
0x531: Push( Stack[2 + Tasks[-1].StackPointer] )
0x532: IF (Stack[-1] == 0) GOTO 0x537; Pop(1)

0x533: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x534: Push("head")
0x535: @ UnlookAsync(Stack[-1])
0x536: Pop(1)
0x537: PushEmpty()
0x538: Call2 0x5d4

0x539: Pop(0)
0x53a: Return(); Pop(0)

0x53b: PushEmpty()
0x53c: PushEmpty(bool)
0x53d: Stack[-1] = (bool) 0
0x53e: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0x53f: IF (Stack[-1] == 0) GOTO 0x543; Pop(1)

0x540: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x541: IF (Stack[-1] == 0) GOTO 0x543; Pop(1)

0x542: Stack[-1] = (bool) 1
0x543: IF (Stack[-1] == 0) GOTO 0x549; Pop(1)

0x544: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x545: PushEmpty(object)
0x546: Stack[-1] = Stack[-2]
0x547: Call2 0xbb4

0x548: Pop(1)
0x549: Return(); Pop(0)

0x54a: PushEmpty()
0x54b: PushEmpty(bool)
0x54c: Stack[-1] = (bool) 0
0x54d: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0x54e: IF (Stack[-1] == 0) GOTO 0x552; Pop(1)

0x54f: Push( Stack[2 + Tasks[-1].StackPointer] )
0x550: IF (Stack[-1] == 0) GOTO 0x552; Pop(1)

0x551: Stack[-1] = (bool) 1
0x552: IF (Stack[-1] == 0) GOTO 0x557; Pop(1)

0x553: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x554: Push("head")
0x555: @ UnlookAsync(Stack[-1])
0x556: Pop(1)
0x557: Return(); Pop(0)

0x558: PushEmpty(bool, bool, object, cvector, cvector, cvector, float, object, bool, bool, object, cvector, cvector, cvector, float, object)
0x559: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x55a: Stack[1 + Tasks[-1].StackPointer] = Stack[-21]
0x55b: Stack[-7] = Stack[-17]
0x55c: PushEmpty(bool, object)
0x55d: Stack[-1] = Stack[-23]
0x55e: Call2 0x5e4

0x55f: Pop(1)
0x560: Pop(1); Push((bool) Stack[-1] == 0)
0x561: IF (Stack[-1] == 0) GOTO 0x564; Pop(1)

0x562: Stack[-22] = (bool) 0
0x563: Return(); Pop(16)

0x564: @@ GetPosition(Stack[-5])
0x565: Pop(0)
0x566: @ GetPosition(Stack[-4])
0x567: Pop(0)
0x568: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x569: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x56a: PushEmpty(bool)
0x56b: Stack[-1] = (bool) 0
0x56c: Push((int) 0)
0x56d: Pop(1); Push((bool) Stack[-21] > Stack[-1])
0x56e: IF (Stack[-1] == 0) GOTO 0x573; Pop(1)

0x56f: Pop(0); Push(Stack[-20] * Stack[-20]);
0x570: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x571: IF (Stack[-1] == 0) GOTO 0x573; Pop(1)

0x572: Stack[-1] = (bool) 1
0x573: IF (Stack[-1] == 0) GOTO 0x578; Pop(1)

0x574: @ Stop()
0x575: Pop(0)
0x576: Stack[-22] = (bool) 0
0x577: Return(); Pop(16)

0x578: Pop(0); Push(Stack[-20] * Stack[-20]);
0x579: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x57a: IF (Stack[-1] == 0) GOTO 0x5b6; Pop(1)

0x57b: @@ GetPFPosition(Stack[-5])
0x57c: Pop(0)
0x57d: @ FindPathTo(Stack[-1], Stack[-5])
0x57e: Pop(0)
0x57f: Pop(0); Push(( Stack[-1] != 0 )
0x580: IF (Stack[-1] == 0) GOTO 0x583; Pop(1)

0x581: Stack[-6] = Stack[-1]
0x582: Stack[-1] = 0
0x583: Pop(0); Push(( Stack[-6] != 0 )
0x584: IF (Stack[-1] == 0) GOTO 0x5a4; Pop(1)

0x585: Push(Stack[-7])
0x586: IF (Stack[-1] == 0) GOTO 0x58d; Pop(1)

0x587: Stack[-7] = (bool) 0
0x588: @ RotatePath(Stack[-6], Stack[-8])
0x589: Pop(0)
0x58a: Pop(0); Push((bool) Stack[-8] == 0)
0x58b: IF (Stack[-1] == 0) GOTO 0x58d; Pop(1)

0x58c: GOTO 0x5bc

0x58d: Push((int) 0)
0x58e: Push((float)0.3)
0x58f: @ SetTimer(Stack[-2], Stack[-1])
0x590: Pop(2)
0x591: PushEmpty(string)
0x592: Call2 0x5eb

0x593: Pop(0)
0x594: PushEmpty(string)
0x595: Call2 0x5ed

0x596: Pop(0)
0x597: @ FollowPath(Stack[-8], Stack[-20], Stack[-10], Stack[-2], Stack[-1])
0x598: Pop(2)
0x599: Pop(0); Push((bool) Stack[-8] == 0)
0x59a: IF (Stack[-1] == 0) GOTO 0x5a2; Pop(1)

0x59b: Push( Stack[0 + Tasks[-1].StackPointer] )
0x59c: IF (Stack[-1] == 0) GOTO 0x5a0; Pop(1)

0x59d: Stack[-6] = 0
0x59e: GOTO 0x5bc

0x59f: GOTO 0x5a1

0x5a0: GOTO 0x5bb

0x5a1: GOTO 0x5a3

0x5a2: Stack[-6] = 0
0x5a3: GOTO 0x5b4

0x5a4: Push((int) 0)
0x5a5: @ KillTimer(Stack[-1])
0x5a6: Pop(1)
0x5a7: Push((float)0.5)
0x5a8: @ Sleep(Stack[-1], Stack[-9])
0x5a9: Pop(1)
0x5aa: Pop(0); Push((bool) Stack[-8] == 0)
0x5ab: IF (Stack[-1] == 0) GOTO 0x5b0; Pop(1)

0x5ac: Push( Stack[0 + Tasks[-1].StackPointer] )
0x5ad: IF (Stack[-1] == 0) GOTO 0x5b0; Pop(1)

0x5ae: Stack[-6] = 0
0x5af: GOTO 0x5bc

0x5b0: Push((int) 0)
0x5b1: Push((float)0.3)
0x5b2: @ SetTimer(Stack[-2], Stack[-1])
0x5b3: Pop(2)
0x5b4: Stack[-1] = 0
0x5b5: GOTO 0x5ba

0x5b6: Push((int) 0)
0x5b7: @ KillTimer(Stack[-1])
0x5b8: Pop(1)
0x5b9: GOTO 0x5bc

0x5ba: Stack[-6] = 0
0x5bb: GOTO 0x55c

0x5bc: Stack[-22] = !Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x5bd: Return(); Pop(16)

0x5be: PushEmpty()
0x5bf: Push((int) 0)
0x5c0: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x5c1: IF (Stack[-1] == 0) GOTO 0x5c3; Pop(1)

0x5c2: Return(); Pop(0)

0x5c3: PushEmpty(bool, object)
0x5c4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5c5: Call2 0x5e4

0x5c6: Pop(1)
0x5c7: Pop(1); Push((bool) Stack[-1] == 0)
0x5c8: IF (Stack[-1] == 0) GOTO 0x5ca; Pop(1)

0x5c9: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x5ca: Push((int) 0)
0x5cb: @ KillTimer(Stack[-1])
0x5cc: Pop(1)
0x5cd: @ Stop()
0x5ce: Pop(0)
0x5cf: Return(); Pop(0)

0x5d0: PushEmpty()
0x5d1: @ RequestClearPath(Stack[-1])
0x5d2: Pop(0)
0x5d3: Return(); Pop(0)

0x5d4: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x5d5: Push((int) 0)
0x5d6: @ KillTimer(Stack[-1])
0x5d7: Pop(1)
0x5d8: @ Stop()
0x5d9: Pop(0)
0x5da: Return(); Pop(0)

0x5db: PushEmpty()
0x5dc: PushEmpty()
0x5dd: Call2 0x52e

0x5de: Pop(0)
0x5df: PushEmpty(object)
0x5e0: Stack[-1] = Stack[-2]
0x5e1: Call2 0xdf2

0x5e2: Pop(1)
0x5e3: Return(); Pop(0)

0x5e4: PushEmpty()
0x5e5: PushEmpty(bool, object)
0x5e6: Stack[-1] = Stack[-3]
0x5e7: Call2 0xb0e

0x5e8: Stack[-4] = Stack[-2]
0x5e9: Pop(2)
0x5ea: Return(); Pop(0)

0x5eb: Stack[-1] = "walk"
0x5ec: Return(); Pop(0)

0x5ed: Stack[-1] = "run"
0x5ee: Return(); Pop(0)

0x5ef: PushEmpty()
0x5f0: PushEmpty(bool, object)
0x5f1: Stack[-1] = Stack[-4]
0x5f2: Call2 0xb0e

0x5f3: Pop(1)
0x5f4: Pop(1); Push((bool) Stack[-1] == 0)
0x5f5: IF (Stack[-1] == 0) GOTO 0x5fb; Pop(1)

0x5f6: PushEmpty(bool, int)
0x5f7: Stack[-1] = (int) 2
0x5f8: Call2 0xd20

0x5f9: Pop(2)
0x5fa: Return(); Pop(0)

0x5fb: Push((int) 0)
0x5fc: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x5fd: IF (Stack[-1] == 0) GOTO 0x60d; Pop(1)

0x5fe: Push((int) 3)
0x5ff: @ SetTimer(Stack[-1], Stack[-2])
0x600: Pop(1)
0x601: PushEmpty(bool, object, float, float, bool, bool)
0x602: Stack[-5] = Stack[-8]
0x603: Stack[-4] = (float) 350.0
0x604: Stack[-3] = (int) 6000
0x605: Stack[-2] = (bool) 1
0x606: Stack[-1] = (bool) 1
0x607: Call2 0x65b

0x608: Pop(6)
0x609: Push((int) 3)
0x60a: @ KillTimer(Stack[-1])
0x60b: Pop(1)
0x60c: GOTO 0x615

0x60d: PushEmpty(bool, object, float, float, bool, bool)
0x60e: Stack[-5] = Stack[-8]
0x60f: Stack[-4] = (float) 350.0
0x610: Stack[-3] = (int) 6000
0x611: Stack[-2] = (bool) 1
0x612: Stack[-1] = (bool) 1
0x613: Call2 0x65b

0x614: Pop(6)
0x615: Return(); Pop(0)

0x616: PushEmpty()
0x617: Call2 0x6d7

0x618: Pop(0)
0x619: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x61a: PushEmpty(bool, int)
0x61b: Stack[-1] = (int) 0
0x61c: Call2 0xd20

0x61d: Pop(2)
0x61e: Return(); Pop(0)

0x61f: PushEmpty()
0x620: PushEmpty(bool, object, string)
0x621: Stack[-2] = Stack[-5]
0x622: Stack[-1] = Stack[-4]
0x623: Call2 0xc70

0x624: Pop(2)
0x625: IF (Stack[-1] == 0) GOTO 0x629; Pop(1)

0x626: PushEmpty()
0x627: Call2 0x6d7

0x628: Pop(0)
0x629: Return(); Pop(0)

0x62a: PushEmpty()
0x62b: PushEmpty(bool, object)
0x62c: Stack[-1] = Stack[-3]
0x62d: Call2 0xcba

0x62e: Pop(1)
0x62f: IF (Stack[-1] == 0) GOTO 0x634; Pop(1)

0x630: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x631: PushEmpty()
0x632: Call2 0x6d7

0x633: Pop(0)
0x634: Return(); Pop(0)

0x635: PushEmpty()
0x636: PushEmpty(bool, object)
0x637: Stack[-1] = Stack[-3]
0x638: Call2 0xced

0x639: Pop(1)
0x63a: IF (Stack[-1] == 0) GOTO 0x63f; Pop(1)

0x63b: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x63c: PushEmpty()
0x63d: Call2 0x6d7

0x63e: Pop(0)
0x63f: Return(); Pop(0)

0x640: PushEmpty()
0x641: EventDisable(42)
0x642: EventDisable(1)
0x643: EventDisable(3)
0x644: PushEmpty()
0x645: Call2 0x6d7

0x646: Pop(0)
0x647: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x648: PushEmpty(bool, object)
0x649: Stack[-1] = Stack[-3]
0x64a: Call2 0xd84

0x64b: Pop(2)
0x64c: Return(); Pop(0)

0x64d: PushEmpty()
0x64e: Push((int) 3)
0x64f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x650: IF (Stack[-1] == 0) GOTO 0x656; Pop(1)

0x651: PushEmpty()
0x652: Call2 0x6d7

0x653: Pop(0)
0x654: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x655: Return(); Pop(0)

0x656: PushEmpty(int)
0x657: Stack[-1] = Stack[-2]
0x658: Call2 0x6c1

0x659: Pop(1)
0x65a: Return(); Pop(0)

0x65b: PushEmpty(bool, bool, object, cvector, cvector, cvector, float, object, bool, bool, object, cvector, cvector, cvector, float, object)
0x65c: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x65d: Stack[1 + Tasks[-1].StackPointer] = Stack[-21]
0x65e: Stack[-7] = Stack[-17]
0x65f: PushEmpty(bool, object)
0x660: Stack[-1] = Stack[-23]
0x661: Call2 0x6e7

0x662: Pop(1)
0x663: Pop(1); Push((bool) Stack[-1] == 0)
0x664: IF (Stack[-1] == 0) GOTO 0x667; Pop(1)

0x665: Stack[-22] = (bool) 0
0x666: Return(); Pop(16)

0x667: @@ GetPosition(Stack[-5])
0x668: Pop(0)
0x669: @ GetPosition(Stack[-4])
0x66a: Pop(0)
0x66b: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x66c: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x66d: PushEmpty(bool)
0x66e: Stack[-1] = (bool) 0
0x66f: Push((int) 0)
0x670: Pop(1); Push((bool) Stack[-21] > Stack[-1])
0x671: IF (Stack[-1] == 0) GOTO 0x676; Pop(1)

0x672: Pop(0); Push(Stack[-20] * Stack[-20]);
0x673: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x674: IF (Stack[-1] == 0) GOTO 0x676; Pop(1)

0x675: Stack[-1] = (bool) 1
0x676: IF (Stack[-1] == 0) GOTO 0x67b; Pop(1)

0x677: @ Stop()
0x678: Pop(0)
0x679: Stack[-22] = (bool) 0
0x67a: Return(); Pop(16)

0x67b: Pop(0); Push(Stack[-20] * Stack[-20]);
0x67c: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x67d: IF (Stack[-1] == 0) GOTO 0x6b9; Pop(1)

0x67e: @@ GetPFPosition(Stack[-5])
0x67f: Pop(0)
0x680: @ FindPathTo(Stack[-1], Stack[-5])
0x681: Pop(0)
0x682: Pop(0); Push(( Stack[-1] != 0 )
0x683: IF (Stack[-1] == 0) GOTO 0x686; Pop(1)

0x684: Stack[-6] = Stack[-1]
0x685: Stack[-1] = 0
0x686: Pop(0); Push(( Stack[-6] != 0 )
0x687: IF (Stack[-1] == 0) GOTO 0x6a7; Pop(1)

0x688: Push(Stack[-7])
0x689: IF (Stack[-1] == 0) GOTO 0x690; Pop(1)

0x68a: Stack[-7] = (bool) 0
0x68b: @ RotatePath(Stack[-6], Stack[-8])
0x68c: Pop(0)
0x68d: Pop(0); Push((bool) Stack[-8] == 0)
0x68e: IF (Stack[-1] == 0) GOTO 0x690; Pop(1)

0x68f: GOTO 0x6bf

0x690: Push((int) 0)
0x691: Push((float)0.3)
0x692: @ SetTimer(Stack[-2], Stack[-1])
0x693: Pop(2)
0x694: PushEmpty(string)
0x695: Call2 0x6ee

0x696: Pop(0)
0x697: PushEmpty(string)
0x698: Call2 0x6f0

0x699: Pop(0)
0x69a: @ FollowPath(Stack[-8], Stack[-20], Stack[-10], Stack[-2], Stack[-1])
0x69b: Pop(2)
0x69c: Pop(0); Push((bool) Stack[-8] == 0)
0x69d: IF (Stack[-1] == 0) GOTO 0x6a5; Pop(1)

0x69e: Push( Stack[0 + Tasks[-1].StackPointer] )
0x69f: IF (Stack[-1] == 0) GOTO 0x6a3; Pop(1)

0x6a0: Stack[-6] = 0
0x6a1: GOTO 0x6bf

0x6a2: GOTO 0x6a4

0x6a3: GOTO 0x6be

0x6a4: GOTO 0x6a6

0x6a5: Stack[-6] = 0
0x6a6: GOTO 0x6b7

0x6a7: Push((int) 0)
0x6a8: @ KillTimer(Stack[-1])
0x6a9: Pop(1)
0x6aa: Push((float)0.5)
0x6ab: @ Sleep(Stack[-1], Stack[-9])
0x6ac: Pop(1)
0x6ad: Pop(0); Push((bool) Stack[-8] == 0)
0x6ae: IF (Stack[-1] == 0) GOTO 0x6b3; Pop(1)

0x6af: Push( Stack[0 + Tasks[-1].StackPointer] )
0x6b0: IF (Stack[-1] == 0) GOTO 0x6b3; Pop(1)

0x6b1: Stack[-6] = 0
0x6b2: GOTO 0x6bf

0x6b3: Push((int) 0)
0x6b4: Push((float)0.3)
0x6b5: @ SetTimer(Stack[-2], Stack[-1])
0x6b6: Pop(2)
0x6b7: Stack[-1] = 0
0x6b8: GOTO 0x6bd

0x6b9: Push((int) 0)
0x6ba: @ KillTimer(Stack[-1])
0x6bb: Pop(1)
0x6bc: GOTO 0x6bf

0x6bd: Stack[-6] = 0
0x6be: GOTO 0x65f

0x6bf: Stack[-22] = !Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x6c0: Return(); Pop(16)

0x6c1: PushEmpty()
0x6c2: Push((int) 0)
0x6c3: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x6c4: IF (Stack[-1] == 0) GOTO 0x6c6; Pop(1)

0x6c5: Return(); Pop(0)

0x6c6: PushEmpty(bool, object)
0x6c7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6c8: Call2 0x6e7

0x6c9: Pop(1)
0x6ca: Pop(1); Push((bool) Stack[-1] == 0)
0x6cb: IF (Stack[-1] == 0) GOTO 0x6cd; Pop(1)

0x6cc: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x6cd: Push((int) 0)
0x6ce: @ KillTimer(Stack[-1])
0x6cf: Pop(1)
0x6d0: @ Stop()
0x6d1: Pop(0)
0x6d2: Return(); Pop(0)

0x6d3: PushEmpty()
0x6d4: @ RequestClearPath(Stack[-1])
0x6d5: Pop(0)
0x6d6: Return(); Pop(0)

0x6d7: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x6d8: Push((int) 0)
0x6d9: @ KillTimer(Stack[-1])
0x6da: Pop(1)
0x6db: @ Stop()
0x6dc: Pop(0)
0x6dd: Return(); Pop(0)

0x6de: PushEmpty()
0x6df: PushEmpty()
0x6e0: Call2 0x6d7

0x6e1: Pop(0)
0x6e2: PushEmpty(object)
0x6e3: Stack[-1] = Stack[-2]
0x6e4: Call2 0xdf2

0x6e5: Pop(1)
0x6e6: Return(); Pop(0)

0x6e7: PushEmpty()
0x6e8: PushEmpty(bool, object)
0x6e9: Stack[-1] = Stack[-3]
0x6ea: Call2 0xb0e

0x6eb: Stack[-4] = Stack[-2]
0x6ec: Pop(2)
0x6ed: Return(); Pop(0)

0x6ee: Stack[-1] = "walk"
0x6ef: Return(); Pop(0)

0x6f0: Stack[-1] = "run"
0x6f1: Return(); Pop(0)

0x6f2: PushEmpty()
0x6f3: Call2 0x729

0x6f4: Pop(0)
0x6f5: Return(); Pop(0)

0x6f6: PushEmpty()
0x6f7: Call2 0x77a

0x6f8: Pop(0)
0x6f9: PushEmpty(bool, int)
0x6fa: Stack[-1] = (int) 0
0x6fb: Call2 0xd20

0x6fc: Pop(2)
0x6fd: Return(); Pop(0)

0x6fe: PushEmpty()
0x6ff: PushEmpty(bool, object, string)
0x700: Stack[-2] = Stack[-5]
0x701: Stack[-1] = Stack[-4]
0x702: Call2 0xc70

0x703: Pop(2)
0x704: IF (Stack[-1] == 0) GOTO 0x708; Pop(1)

0x705: PushEmpty()
0x706: Call2 0x77a

0x707: Pop(0)
0x708: Return(); Pop(0)

0x709: PushEmpty()
0x70a: PushEmpty(bool, object)
0x70b: Stack[-1] = Stack[-3]
0x70c: Call2 0xcba

0x70d: Pop(1)
0x70e: IF (Stack[-1] == 0) GOTO 0x712; Pop(1)

0x70f: PushEmpty()
0x710: Call2 0x77a

0x711: Pop(0)
0x712: Return(); Pop(0)

0x713: PushEmpty()
0x714: PushEmpty(bool, object)
0x715: Stack[-1] = Stack[-3]
0x716: Call2 0xced

0x717: Pop(1)
0x718: IF (Stack[-1] == 0) GOTO 0x71c; Pop(1)

0x719: PushEmpty()
0x71a: Call2 0x77a

0x71b: Pop(0)
0x71c: Return(); Pop(0)

0x71d: PushEmpty()
0x71e: EventDisable(42)
0x71f: EventDisable(1)
0x720: EventDisable(3)
0x721: PushEmpty()
0x722: Call2 0x77a

0x723: Pop(0)
0x724: PushEmpty(bool, object)
0x725: Stack[-1] = Stack[-3]
0x726: Call2 0xd84

0x727: Pop(2)
0x728: Return(); Pop(0)

0x729: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x72a: @ WaitForAnimEnd()
0x72b: Pop(0)
0x72c: PushEmpty(bool)
0x72d: Call2 0xbaf

0x72e: Pop(0)
0x72f: Pop(1); Push((bool) Stack[-1] == 0)
0x730: IF (Stack[-1] == 0) GOTO 0x732; Pop(1)

0x731: Return(); Pop(14)

0x732: PushEmpty(int)
0x733: Call2 0xc44

0x734: Stack[-8] = Stack[-1]
0x735: Pop(1)
0x736: Stack[-6] = (int) 0
0x737: PushEmpty(bool)
0x738: Stack[-1] = (bool) 0
0x739: Push((int) 5)
0x73a: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x73b: IF (Stack[-1] == 0) GOTO 0x741; Pop(1)

0x73c: PushEmpty(bool)
0x73d: Call2 0xbaf

0x73e: Pop(0)
0x73f: IF (Stack[-1] == 0) GOTO 0x741; Pop(1)

0x740: Stack[-1] = (bool) 1
0x741: IF (Stack[-1] == 0) GOTO 0x775; Pop(1)

0x742: Push((int) 3)
0x743: @ irand(Stack[-6], Stack[-1])
0x744: Pop(1)
0x745: Push((int) 0)
0x746: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x747: IF (Stack[-1] == 0) GOTO 0x759; Pop(1)

0x748: Push(Stack[-7])
0x749: IF (Stack[-1] == 0) GOTO 0x758; Pop(1)

0x74a: @ irand(Stack[-4], Stack[-7])
0x74b: Pop(0)
0x74c: Push("all")
0x74d: PushEmpty(string, int)
0x74e: Stack[-1] = Stack[-7]
0x74f: Call2 0xc3d

0x750: Pop(1)
0x751: @ PlayAnimation(Stack[-2], Stack[-1])
0x752: Pop(2)
0x753: @ WaitForAnimEnd(Stack[-3])
0x754: Pop(0)
0x755: Pop(0); Push((bool) Stack[-3] == 0)
0x756: IF (Stack[-1] == 0) GOTO 0x758; Pop(1)

0x757: GOTO 0x775

0x758: GOTO 0x76a

0x759: Push((int) 1)
0x75a: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x75b: IF (Stack[-1] == 0) GOTO 0x767; Pop(1)

0x75c: Push((int) 4)
0x75d: @ rand(Stack[-3], Stack[-1])
0x75e: Pop(1)
0x75f: Push((int) 1)
0x760: Pop(1); Push(Stack[-3] + Stack[-1]);
0x761: @ Sleep(Stack[-1], Stack[-2])
0x762: Pop(1)
0x763: Pop(0); Push((bool) Stack[-1] == 0)
0x764: IF (Stack[-1] == 0) GOTO 0x766; Pop(1)

0x765: GOTO 0x775

0x766: GOTO 0x76a

0x767: Push(Stack[-6])
0x768: IF (Stack[-1] == 0) GOTO 0x76a; Pop(1)

0x769: GOTO 0x775

0x76a: PushEmpty(bool)
0x76b: Call2 0x778

0x76c: Pop(0)
0x76d: Pop(1); Push((bool) Stack[-1] == 0)
0x76e: IF (Stack[-1] == 0) GOTO 0x770; Pop(1)

0x76f: GOTO 0x775

0x770: @ ResetAAS()
0x771: Pop(0)
0x772: Push((int) 1)
0x773: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x774: GOTO 0x737

0x775: @ ResetAAS()
0x776: Pop(0)
0x777: Return(); Pop(14)

0x778: Stack[-1] = (bool) 1
0x779: Return(); Pop(0)

0x77a: @ StopAnimation()
0x77b: Pop(0)
0x77c: @ StopGroup0()
0x77d: Pop(0)
0x77e: Return(); Pop(0)

0x77f: PushEmpty()
0x780: Push(CvectorIndex(Stack[-3], 1))
0x781: Push((int) 30)
0x782: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x783: CvectorIndex(Stack[-4], 1) = Stack[-1];
0x784: PushEmpty(bool, cvector, cvector, float, float, bool, bool)
0x785: Stack[-6] = Stack[-10]
0x786: Stack[-5] = Stack[-9]
0x787: Stack[-4] = (int) 100
0x788: Stack[-3] = (int) 4000
0x789: Stack[-2] = Stack[-8]
0x78a: Stack[-1] = (bool) 1
0x78b: Call2 0x7c4

0x78c: Stack[-11] = Stack[-7]
0x78d: Pop(7)
0x78e: Return(); Pop(0)

0x78f: PushEmpty()
0x790: Call2 0x840

0x791: Pop(0)
0x792: PushEmpty(bool, int)
0x793: Stack[-1] = (int) 0
0x794: Call2 0xd20

0x795: Pop(2)
0x796: Return(); Pop(0)

0x797: PushEmpty()
0x798: PushEmpty(bool, object, string)
0x799: Stack[-2] = Stack[-5]
0x79a: Stack[-1] = Stack[-4]
0x79b: Call2 0xc70

0x79c: Pop(2)
0x79d: IF (Stack[-1] == 0) GOTO 0x7a1; Pop(1)

0x79e: PushEmpty()
0x79f: Call2 0x840

0x7a0: Pop(0)
0x7a1: Return(); Pop(0)

0x7a2: PushEmpty()
0x7a3: PushEmpty(bool, object)
0x7a4: Stack[-1] = Stack[-3]
0x7a5: Call2 0xcba

0x7a6: Pop(1)
0x7a7: IF (Stack[-1] == 0) GOTO 0x7ab; Pop(1)

0x7a8: PushEmpty()
0x7a9: Call2 0x840

0x7aa: Pop(0)
0x7ab: Return(); Pop(0)

0x7ac: PushEmpty()
0x7ad: PushEmpty(bool, object)
0x7ae: Stack[-1] = Stack[-3]
0x7af: Call2 0xced

0x7b0: Pop(1)
0x7b1: IF (Stack[-1] == 0) GOTO 0x7b5; Pop(1)

0x7b2: PushEmpty()
0x7b3: Call2 0x840

0x7b4: Pop(0)
0x7b5: Return(); Pop(0)

0x7b6: PushEmpty()
0x7b7: EventDisable(42)
0x7b8: EventDisable(1)
0x7b9: EventDisable(3)
0x7ba: PushEmpty()
0x7bb: Call2 0x840

0x7bc: Pop(0)
0x7bd: PushEmpty(bool, object)
0x7be: Stack[-1] = Stack[-3]
0x7bf: Call2 0xd84

0x7c0: Pop(2)
0x7c1: Return(); Pop(0)

0x7c2: Stack[-1] = (bool) 1
0x7c3: Return(); Pop(0)

0x7c4: PushEmpty(bool, bool, object, cvector, cvector, cvector, float, object, bool, bool, object, cvector, cvector, cvector, float, object)
0x7c5: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x7c6: Stack[-7] = Stack[-17]
0x7c7: PushEmpty(bool)
0x7c8: Call2 0x7c2

0x7c9: Pop(0)
0x7ca: Pop(1); Push((bool) Stack[-1] == 0)
0x7cb: IF (Stack[-1] == 0) GOTO 0x7ce; Pop(1)

0x7cc: Stack[-23] = (bool) 0
0x7cd: Return(); Pop(16)

0x7ce: Stack[-5] = Stack[-22]
0x7cf: @ GetPosition(Stack[-4])
0x7d0: Pop(0)
0x7d1: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x7d2: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x7d3: PushEmpty(bool)
0x7d4: Stack[-1] = (bool) 0
0x7d5: Push((int) 0)
0x7d6: Pop(1); Push((bool) Stack[-21] > Stack[-1])
0x7d7: IF (Stack[-1] == 0) GOTO 0x7dc; Pop(1)

0x7d8: Pop(0); Push(Stack[-20] * Stack[-20]);
0x7d9: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x7da: IF (Stack[-1] == 0) GOTO 0x7dc; Pop(1)

0x7db: Stack[-1] = (bool) 1
0x7dc: IF (Stack[-1] == 0) GOTO 0x7e1; Pop(1)

0x7dd: @ Stop()
0x7de: Pop(0)
0x7df: Stack[-23] = (bool) 0
0x7e0: Return(); Pop(16)

0x7e1: Pop(0); Push(Stack[-20] * Stack[-20]);
0x7e2: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x7e3: IF (Stack[-1] == 0) GOTO 0x81d; Pop(1)

0x7e4: @ FindPathTo(Stack[-1], Stack[-5])
0x7e5: Pop(0)
0x7e6: Pop(0); Push(( Stack[-1] != 0 )
0x7e7: IF (Stack[-1] == 0) GOTO 0x7ea; Pop(1)

0x7e8: Stack[-6] = Stack[-1]
0x7e9: Stack[-1] = 0
0x7ea: Pop(0); Push(( Stack[-6] != 0 )
0x7eb: IF (Stack[-1] == 0) GOTO 0x80b; Pop(1)

0x7ec: Push(Stack[-7])
0x7ed: IF (Stack[-1] == 0) GOTO 0x7f4; Pop(1)

0x7ee: Stack[-7] = (bool) 0
0x7ef: @ RotatePath(Stack[-6], Stack[-8])
0x7f0: Pop(0)
0x7f1: Pop(0); Push((bool) Stack[-8] == 0)
0x7f2: IF (Stack[-1] == 0) GOTO 0x7f4; Pop(1)

0x7f3: GOTO 0x823

0x7f4: Push((int) 0)
0x7f5: Push((float)0.3)
0x7f6: @ SetTimer(Stack[-2], Stack[-1])
0x7f7: Pop(2)
0x7f8: PushEmpty(string)
0x7f9: Call2 0x850

0x7fa: Pop(0)
0x7fb: PushEmpty(string)
0x7fc: Call2 0x852

0x7fd: Pop(0)
0x7fe: @ FollowPath(Stack[-8], Stack[-20], Stack[-10], Stack[-2], Stack[-1])
0x7ff: Pop(2)
0x800: Pop(0); Push((bool) Stack[-8] == 0)
0x801: IF (Stack[-1] == 0) GOTO 0x809; Pop(1)

0x802: Push( Stack[0 + Tasks[-1].StackPointer] )
0x803: IF (Stack[-1] == 0) GOTO 0x807; Pop(1)

0x804: Stack[-6] = 0
0x805: GOTO 0x823

0x806: GOTO 0x808

0x807: GOTO 0x822

0x808: GOTO 0x80a

0x809: Stack[-6] = 0
0x80a: GOTO 0x81b

0x80b: Push((int) 0)
0x80c: @ KillTimer(Stack[-1])
0x80d: Pop(1)
0x80e: Push((float)0.5)
0x80f: @ Sleep(Stack[-1], Stack[-9])
0x810: Pop(1)
0x811: Pop(0); Push((bool) Stack[-8] == 0)
0x812: IF (Stack[-1] == 0) GOTO 0x817; Pop(1)

0x813: Push( Stack[0 + Tasks[-1].StackPointer] )
0x814: IF (Stack[-1] == 0) GOTO 0x817; Pop(1)

0x815: Stack[-6] = 0
0x816: GOTO 0x823

0x817: Push((int) 0)
0x818: Push((float)0.3)
0x819: @ SetTimer(Stack[-2], Stack[-1])
0x81a: Pop(2)
0x81b: Stack[-1] = 0
0x81c: GOTO 0x821

0x81d: Push((int) 0)
0x81e: @ KillTimer(Stack[-1])
0x81f: Pop(1)
0x820: GOTO 0x823

0x821: Stack[-6] = 0
0x822: GOTO 0x7c7

0x823: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x824: IF (Stack[-1] == 0) GOTO 0x829; Pop(1)

0x825: Push(CvectorIndex(Stack[-21], 0))
0x826: Push(CvectorIndex(Stack[-22], 2))
0x827: @ RotateAsync(Stack[-2], Stack[-1])
0x828: Pop(2)
0x829: Stack[-23] = !Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x82a: Return(); Pop(16)

0x82b: PushEmpty()
0x82c: Push((int) 0)
0x82d: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x82e: IF (Stack[-1] == 0) GOTO 0x830; Pop(1)

0x82f: Return(); Pop(0)

0x830: PushEmpty(bool)
0x831: Call2 0x7c2

0x832: Pop(0)
0x833: Pop(1); Push((bool) Stack[-1] == 0)
0x834: IF (Stack[-1] == 0) GOTO 0x836; Pop(1)

0x835: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x836: Push((int) 0)
0x837: @ KillTimer(Stack[-1])
0x838: Pop(1)
0x839: @ Stop()
0x83a: Pop(0)
0x83b: Return(); Pop(0)

0x83c: PushEmpty()
0x83d: @ RequestClearPath(Stack[-1])
0x83e: Pop(0)
0x83f: Return(); Pop(0)

0x840: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x841: Push((int) 0)
0x842: @ KillTimer(Stack[-1])
0x843: Pop(1)
0x844: @ Stop()
0x845: Pop(0)
0x846: Return(); Pop(0)

0x847: PushEmpty()
0x848: PushEmpty()
0x849: Call2 0x840

0x84a: Pop(0)
0x84b: PushEmpty(object)
0x84c: Stack[-1] = Stack[-2]
0x84d: Call2 0xdf2

0x84e: Pop(1)
0x84f: Return(); Pop(0)

0x850: Stack[-1] = "walk"
0x851: Return(); Pop(0)

0x852: Stack[-1] = "run"
0x853: Return(); Pop(0)

0x854: PushEmpty(bool, object, cvector, cvector, bool, object, cvector, cvector)
0x855: @ GetMainOutdoorScene(Stack[-3])
0x856: Pop(0)
0x857: PushEmpty(string)
0x858: Call2 0xe00

0x859: Pop(0)
0x85a: @@ GetLocator(Stack[-1], Stack[-5], Stack[-3], Stack[-2])
0x85b: Pop(1)
0x85c: Pop(0); Push((bool) Stack[-4] == 0)
0x85d: IF (Stack[-1] == 0) GOTO 0x860; Pop(1)

0x85e: Stack[-9] = (bool) 0
0x85f: Return(); Pop(8)

0x860: PushEmpty(bool, cvector, cvector, bool)
0x861: Stack[-3] = Stack[-6]
0x862: Stack[-2] = Stack[-5]
0x863: Stack[-1] = (bool) 0
0x864: Call2 0x894

0x865: Stack[-13] = Stack[-4]
0x866: Pop(4)
0x867: Return(); Pop(8)

0x868: Stack[-3] = 0
0x869: PushEmpty()
0x86a: PushEmpty(bool, object, string)
0x86b: Stack[-2] = Stack[-5]
0x86c: Stack[-1] = Stack[-4]
0x86d: Call2 0xc70

0x86e: Pop(2)
0x86f: IF (Stack[-1] == 0) GOTO 0x873; Pop(1)

0x870: PushEmpty()
0x871: Call2 0x92a

0x872: Pop(0)
0x873: Return(); Pop(0)

0x874: PushEmpty()
0x875: PushEmpty(bool, object)
0x876: Stack[-1] = Stack[-3]
0x877: Call2 0xcba

0x878: Pop(1)
0x879: IF (Stack[-1] == 0) GOTO 0x87d; Pop(1)

0x87a: PushEmpty()
0x87b: Call2 0x92a

0x87c: Pop(0)
0x87d: Return(); Pop(0)

0x87e: PushEmpty()
0x87f: PushEmpty(bool, object)
0x880: Stack[-1] = Stack[-3]
0x881: Call2 0xced

0x882: Pop(1)
0x883: IF (Stack[-1] == 0) GOTO 0x887; Pop(1)

0x884: PushEmpty()
0x885: Call2 0x92a

0x886: Pop(0)
0x887: Return(); Pop(0)

0x888: PushEmpty()
0x889: EventDisable(42)
0x88a: EventDisable(1)
0x88b: EventDisable(3)
0x88c: PushEmpty()
0x88d: Call2 0x92a

0x88e: Pop(0)
0x88f: PushEmpty(bool, object)
0x890: Stack[-1] = Stack[-3]
0x891: Call2 0xd84

0x892: Pop(2)
0x893: Return(); Pop(0)

0x894: PushEmpty()
0x895: Push(CvectorIndex(Stack[-3], 1))
0x896: Push((int) 30)
0x897: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x898: CvectorIndex(Stack[-4], 1) = Stack[-1];
0x899: PushEmpty(bool, cvector, cvector, float, float, bool, bool)
0x89a: Stack[-6] = Stack[-10]
0x89b: Stack[-5] = Stack[-9]
0x89c: Stack[-4] = (int) 100
0x89d: Stack[-3] = (int) 4000
0x89e: Stack[-2] = Stack[-8]
0x89f: Stack[-1] = (bool) 1
0x8a0: Call2 0x8ae

0x8a1: Stack[-11] = Stack[-7]
0x8a2: Pop(7)
0x8a3: Return(); Pop(0)

0x8a4: PushEmpty()
0x8a5: Call2 0x92a

0x8a6: Pop(0)
0x8a7: PushEmpty(bool, int)
0x8a8: Stack[-1] = (int) 0
0x8a9: Call2 0xd20

0x8aa: Pop(2)
0x8ab: Return(); Pop(0)

0x8ac: Stack[-1] = (bool) 1
0x8ad: Return(); Pop(0)

0x8ae: PushEmpty(bool, bool, object, cvector, cvector, cvector, float, object, bool, bool, object, cvector, cvector, cvector, float, object)
0x8af: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x8b0: Stack[-7] = Stack[-17]
0x8b1: PushEmpty(bool)
0x8b2: Call2 0x8ac

0x8b3: Pop(0)
0x8b4: Pop(1); Push((bool) Stack[-1] == 0)
0x8b5: IF (Stack[-1] == 0) GOTO 0x8b8; Pop(1)

0x8b6: Stack[-23] = (bool) 0
0x8b7: Return(); Pop(16)

0x8b8: Stack[-5] = Stack[-22]
0x8b9: @ GetPosition(Stack[-4])
0x8ba: Pop(0)
0x8bb: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x8bc: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x8bd: PushEmpty(bool)
0x8be: Stack[-1] = (bool) 0
0x8bf: Push((int) 0)
0x8c0: Pop(1); Push((bool) Stack[-21] > Stack[-1])
0x8c1: IF (Stack[-1] == 0) GOTO 0x8c6; Pop(1)

0x8c2: Pop(0); Push(Stack[-20] * Stack[-20]);
0x8c3: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x8c4: IF (Stack[-1] == 0) GOTO 0x8c6; Pop(1)

0x8c5: Stack[-1] = (bool) 1
0x8c6: IF (Stack[-1] == 0) GOTO 0x8cb; Pop(1)

0x8c7: @ Stop()
0x8c8: Pop(0)
0x8c9: Stack[-23] = (bool) 0
0x8ca: Return(); Pop(16)

0x8cb: Pop(0); Push(Stack[-20] * Stack[-20]);
0x8cc: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x8cd: IF (Stack[-1] == 0) GOTO 0x907; Pop(1)

0x8ce: @ FindPathTo(Stack[-1], Stack[-5])
0x8cf: Pop(0)
0x8d0: Pop(0); Push(( Stack[-1] != 0 )
0x8d1: IF (Stack[-1] == 0) GOTO 0x8d4; Pop(1)

0x8d2: Stack[-6] = Stack[-1]
0x8d3: Stack[-1] = 0
0x8d4: Pop(0); Push(( Stack[-6] != 0 )
0x8d5: IF (Stack[-1] == 0) GOTO 0x8f5; Pop(1)

0x8d6: Push(Stack[-7])
0x8d7: IF (Stack[-1] == 0) GOTO 0x8de; Pop(1)

0x8d8: Stack[-7] = (bool) 0
0x8d9: @ RotatePath(Stack[-6], Stack[-8])
0x8da: Pop(0)
0x8db: Pop(0); Push((bool) Stack[-8] == 0)
0x8dc: IF (Stack[-1] == 0) GOTO 0x8de; Pop(1)

0x8dd: GOTO 0x90d

0x8de: Push((int) 0)
0x8df: Push((float)0.3)
0x8e0: @ SetTimer(Stack[-2], Stack[-1])
0x8e1: Pop(2)
0x8e2: PushEmpty(string)
0x8e3: Call2 0x93a

0x8e4: Pop(0)
0x8e5: PushEmpty(string)
0x8e6: Call2 0x93c

0x8e7: Pop(0)
0x8e8: @ FollowPath(Stack[-8], Stack[-20], Stack[-10], Stack[-2], Stack[-1])
0x8e9: Pop(2)
0x8ea: Pop(0); Push((bool) Stack[-8] == 0)
0x8eb: IF (Stack[-1] == 0) GOTO 0x8f3; Pop(1)

0x8ec: Push( Stack[0 + Tasks[-1].StackPointer] )
0x8ed: IF (Stack[-1] == 0) GOTO 0x8f1; Pop(1)

0x8ee: Stack[-6] = 0
0x8ef: GOTO 0x90d

0x8f0: GOTO 0x8f2

0x8f1: GOTO 0x90c

0x8f2: GOTO 0x8f4

0x8f3: Stack[-6] = 0
0x8f4: GOTO 0x905

0x8f5: Push((int) 0)
0x8f6: @ KillTimer(Stack[-1])
0x8f7: Pop(1)
0x8f8: Push((float)0.5)
0x8f9: @ Sleep(Stack[-1], Stack[-9])
0x8fa: Pop(1)
0x8fb: Pop(0); Push((bool) Stack[-8] == 0)
0x8fc: IF (Stack[-1] == 0) GOTO 0x901; Pop(1)

0x8fd: Push( Stack[0 + Tasks[-1].StackPointer] )
0x8fe: IF (Stack[-1] == 0) GOTO 0x901; Pop(1)

0x8ff: Stack[-6] = 0
0x900: GOTO 0x90d

0x901: Push((int) 0)
0x902: Push((float)0.3)
0x903: @ SetTimer(Stack[-2], Stack[-1])
0x904: Pop(2)
0x905: Stack[-1] = 0
0x906: GOTO 0x90b

0x907: Push((int) 0)
0x908: @ KillTimer(Stack[-1])
0x909: Pop(1)
0x90a: GOTO 0x90d

0x90b: Stack[-6] = 0
0x90c: GOTO 0x8b1

0x90d: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x90e: IF (Stack[-1] == 0) GOTO 0x913; Pop(1)

0x90f: Push(CvectorIndex(Stack[-21], 0))
0x910: Push(CvectorIndex(Stack[-22], 2))
0x911: @ RotateAsync(Stack[-2], Stack[-1])
0x912: Pop(2)
0x913: Stack[-23] = !Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x914: Return(); Pop(16)

0x915: PushEmpty()
0x916: Push((int) 0)
0x917: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x918: IF (Stack[-1] == 0) GOTO 0x91a; Pop(1)

0x919: Return(); Pop(0)

0x91a: PushEmpty(bool)
0x91b: Call2 0x8ac

0x91c: Pop(0)
0x91d: Pop(1); Push((bool) Stack[-1] == 0)
0x91e: IF (Stack[-1] == 0) GOTO 0x920; Pop(1)

0x91f: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x920: Push((int) 0)
0x921: @ KillTimer(Stack[-1])
0x922: Pop(1)
0x923: @ Stop()
0x924: Pop(0)
0x925: Return(); Pop(0)

0x926: PushEmpty()
0x927: @ RequestClearPath(Stack[-1])
0x928: Pop(0)
0x929: Return(); Pop(0)

0x92a: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x92b: Push((int) 0)
0x92c: @ KillTimer(Stack[-1])
0x92d: Pop(1)
0x92e: @ Stop()
0x92f: Pop(0)
0x930: Return(); Pop(0)

0x931: PushEmpty()
0x932: PushEmpty()
0x933: Call2 0x92a

0x934: Pop(0)
0x935: PushEmpty(object)
0x936: Stack[-1] = Stack[-2]
0x937: Call2 0xdf2

0x938: Pop(1)
0x939: Return(); Pop(0)

0x93a: Stack[-1] = "walk"
0x93b: Return(); Pop(0)

0x93c: Stack[-1] = "run"
0x93d: Return(); Pop(0)

0x93e: PushEmpty(int, int)
0x93f: Stack[-1] = (int) 0
0x940: Pop(0); Push((bool) Stack[-1] < Stack[-3])
0x941: IF (Stack[-1] == 0) GOTO 0x94c; Pop(1)

0x942: PushEmpty(string)
0x943: Stack[-1] = "hunt"
0x944: Call2 0x984

0x945: Pop(1)
0x946: Push( Stack[0 + Tasks[-1].StackPointer] )
0x947: IF (Stack[-1] == 0) GOTO 0x949; Pop(1)

0x948: GOTO 0x94c

0x949: Push((int) 1)
0x94a: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x94b: GOTO 0x940

0x94c: Return(); Pop(2)

0x94d: PushEmpty()
0x94e: Call2 0x999

0x94f: Pop(0)
0x950: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x951: PushEmpty(bool, int)
0x952: Stack[-1] = (int) 0
0x953: Call2 0xd20

0x954: Pop(2)
0x955: Return(); Pop(0)

0x956: PushEmpty()
0x957: PushEmpty(bool, object, string)
0x958: Stack[-2] = Stack[-5]
0x959: Stack[-1] = Stack[-4]
0x95a: Call2 0xc70

0x95b: Pop(2)
0x95c: IF (Stack[-1] == 0) GOTO 0x961; Pop(1)

0x95d: PushEmpty()
0x95e: Call2 0x999

0x95f: Pop(0)
0x960: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x961: Return(); Pop(0)

0x962: PushEmpty()
0x963: PushEmpty(bool, object)
0x964: Stack[-1] = Stack[-3]
0x965: Call2 0xcba

0x966: Pop(1)
0x967: IF (Stack[-1] == 0) GOTO 0x96c; Pop(1)

0x968: PushEmpty()
0x969: Call2 0x999

0x96a: Pop(0)
0x96b: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x96c: Return(); Pop(0)

0x96d: PushEmpty()
0x96e: PushEmpty(bool, object)
0x96f: Stack[-1] = Stack[-3]
0x970: Call2 0xced

0x971: Pop(1)
0x972: IF (Stack[-1] == 0) GOTO 0x977; Pop(1)

0x973: PushEmpty()
0x974: Call2 0x999

0x975: Pop(0)
0x976: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x977: Return(); Pop(0)

0x978: PushEmpty()
0x979: EventDisable(42)
0x97a: EventDisable(1)
0x97b: EventDisable(3)
0x97c: PushEmpty()
0x97d: Call2 0x999

0x97e: Pop(0)
0x97f: PushEmpty(bool, object)
0x980: Stack[-1] = Stack[-3]
0x981: Call2 0xd84

0x982: Pop(2)
0x983: Return(); Pop(0)

0x984: PushEmpty(bool, bool, bool, bool)
0x985: @ WaitForAnimEnd()
0x986: Pop(0)
0x987: PushEmpty(bool)
0x988: Call2 0xbaf

0x989: Pop(0)
0x98a: Pop(1); Push((bool) Stack[-1] == 0)
0x98b: IF (Stack[-1] == 0) GOTO 0x98d; Pop(1)

0x98c: Return(); Pop(4)

0x98d: Push("all")
0x98e: @ HasAnimation(Stack[-3], Stack[-1], Stack[-6])
0x98f: Pop(1)
0x990: Pop(0); Push((bool) Stack[-2] == 0)
0x991: IF (Stack[-1] == 0) GOTO 0x993; Pop(1)

0x992: Return(); Pop(4)

0x993: Push("all")
0x994: @ PlayAnimation(Stack[-1], Stack[-6])
0x995: Pop(1)
0x996: @ WaitForAnimEnd(Stack[-1])
0x997: Pop(0)
0x998: Return(); Pop(4)

0x999: @ StopAnimation()
0x99a: Pop(0)
0x99b: @ StopGroup0()
0x99c: Pop(0)
0x99d: Return(); Pop(0)

0x99e: PushEmpty()
0x99f: Push((int) 1)
0x9a0: Push(GlobalVars[2])
0x9a1: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x9a2: IF (Stack[-1] == 0) GOTO 0x9a7; Pop(1)

0x9a3: PushEmpty(bool)
0x9a4: Stack[-1] = (bool) 0
0x9a5: Call2 0xda1

0x9a6: Pop(1)
0x9a7: Push((int) 3)
0x9a8: Push(GlobalVars[2])
0x9a9: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x9aa: IF (Stack[-1] == 0) GOTO 0x9af; Pop(1)

0x9ab: PushEmpty(bool)
0x9ac: Stack[-1] = (bool) 0
0x9ad: Call2 0xdbc

0x9ae: Pop(1)
0x9af: PushEmpty()
0x9b0: Call2 0xe04

0x9b1: Pop(0)
0x9b2: PushEmpty(object)
0x9b3: Stack[-1] = Stack[-2]
0x9b4: Call2 0x9bf

0x9b5: Pop(1)
0x9b6: Return(); Pop(0)

0x9b7: PushEmpty(object)
0x9b8: Call2 0xbf7

0x9b9: Pop(0)
0x9ba: @ RemoveActor(Stack[-1])
0x9bb: Pop(1)
0x9bc: @ Hold()
0x9bd: Pop(0)
0x9be: Return(); Pop(0)

0x9bf: PushEmpty()
0x9c0: EventDisable(0)
0x9c1: PushEmpty(object)
0x9c2: Stack[-1] = Stack[-2]
0x9c3: Call2 0x9d8

0x9c4: Pop(1)
0x9c5: Push((int) 50)
0x9c6: Push((int) 40)
0x9c7: @ SetRTEnvelope(Stack[-2], Stack[-1])
0x9c8: Pop(2)
0x9c9: EventEnable(0)
0x9ca: @ Hold()
0x9cb: Pop(0)
0x9cc: GOTO 0x9ca

0x9cd: Return(); Pop(0)

0x9ce: PushEmpty(bool, bool)
0x9cf: @ IsOverrideActive(Stack[-1])
0x9d0: Pop(0)
0x9d1: Pop(0); Push((bool) Stack[-1] == 0)
0x9d2: IF (Stack[-1] == 0) GOTO 0x9d7; Pop(1)

0x9d3: PushEmpty(object)
0x9d4: Stack[-1] = Stack[-4]
0x9d5: Call2 0xc5b

0x9d6: Pop(1)
0x9d7: Return(); Pop(2)

0x9d8: PushEmpty(cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector, cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector)
0x9d9: Pop(0); Push((bool) Stack[-21] == 0)
0x9da: IF (Stack[-1] == 0) GOTO 0x9e0; Pop(1)

0x9db: PushEmpty(string)
0x9dc: Stack[-1] = "fdie"
0x9dd: Call2 0xa33

0x9de: Pop(1)
0x9df: GOTO 0xa32

0x9e0: @@ GetPosition(Stack[-10])
0x9e1: Pop(0)
0x9e2: @ GetPosition(Stack[-9])
0x9e3: Pop(0)
0x9e4: @ GetDirection(Stack[-8])
0x9e5: Pop(0)
0x9e6: Stack[-7] = Stack[-9] - Stack[-10]; Pop(0);
0x9e7: Push(CvectorIndex(Stack[-7], 0))
0x9e8: Push(CvectorIndex(Stack[-9], 0))
0x9e9: Pop(2); Push(Stack[-2] * Stack[-1]);
0x9ea: Push(CvectorIndex(Stack[-8], 2))
0x9eb: Push(CvectorIndex(Stack[-10], 2))
0x9ec: Pop(2); Push(Stack[-2] * Stack[-1]);
0x9ed: Pop(2); Push(Stack[-2] + Stack[-1]);
0x9ee: Push((int) 0)
0x9ef: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x9f0: IF (Stack[-1] == 0) GOTO 0x9f3; Pop(1)

0x9f1: Stack[-6] = "fdie"
0x9f2: GOTO 0x9f4

0x9f3: Stack[-6] = "bdie"
0x9f4: @ RemoveRTEnvelope()
0x9f5: Pop(0)
0x9f6: @ SetDeathState()
0x9f7: Pop(0)
0x9f8: @ Stop()
0x9f9: Pop(0)
0x9fa: @ StopAsync()
0x9fb: Pop(0)
0x9fc: Stack[-5] = Stack[-21]
0x9fd: Push("GetScriptProperty")
0x9fe: Push((int) 2)
0x9ff: Pop(2); Push(IsFuncExist(Stack[-23], Stack[-2], Stack[-1]))
0xa00: IF (Stack[-1] == 0) GOTO 0xa0c; Pop(1)

0xa01: Push("Owner")
0xa02: @@ HasScriptProperty(Stack[-5], Stack[-1])
0xa03: Pop(1)
0xa04: Push(Stack[-4])
0xa05: IF (Stack[-1] == 0) GOTO 0xa0c; Pop(1)

0xa06: Push("Owner")
0xa07: @@ GetScriptProperty(Stack[-6], Stack[-1])
0xa08: Pop(1)
0xa09: Pop(0); Push((bool) Stack[-5] == 0)
0xa0a: IF (Stack[-1] == 0) GOTO 0xa0c; Pop(1)

0xa0b: Stack[-5] = Stack[-21]
0xa0c: Push("@GetEyesHeight")
0xa0d: Push((int) 1)
0xa0e: Pop(2); Push(IsFuncExist(Stack[-7], Stack[-2], Stack[-1]))
0xa0f: IF (Stack[-1] == 0) GOTO 0xa1b; Pop(1)

0xa10: @@ GetEyesHeight(Stack[-2])
0xa11: Pop(0)
0xa12: Stack[-1] = CVector(0.0, 0.0, 0.0)
0xa13: Push(CvectorIndex(Stack[-1], 1))
0xa14: Stack[-1] = Stack[-3]
0xa15: CvectorIndex(Stack[-2], 1) = Stack[-1];
0xa16: Push("head")
0xa17: @ LookAsync(Stack[-22], Stack[-1], Stack[-2])
0xa18: Pop(1)
0xa19: Stack[-3] = (bool) 1
0xa1a: GOTO 0xa1c

0xa1b: Stack[-3] = (bool) 0
0xa1c: PushEmpty(string)
0xa1d: Stack[-1] = Stack[-7]
0xa1e: Call2 0xbce

0xa1f: Pop(1)
0xa20: Push("all")
0xa21: @ PlayAnimation(Stack[-1], Stack[-7])
0xa22: Pop(1)
0xa23: @ WaitForAnimEnd()
0xa24: Pop(0)
0xa25: Push(Stack[-3])
0xa26: IF (Stack[-1] == 0) GOTO 0xa2c; Pop(1)

0xa27: @ StopAsync()
0xa28: Pop(0)
0xa29: Push("head")
0xa2a: @ UnlookAsync(Stack[-1])
0xa2b: Pop(1)
0xa2c: Push("all")
0xa2d: @ LockAnimationEnd(Stack[-1], Stack[-7])
0xa2e: Pop(1)
0xa2f: @ RemoveEnvelope()
0xa30: Pop(0)
0xa31: Stack[-5] = 0
0xa32: Return(); Pop(20)

0xa33: PushEmpty()
0xa34: @ RemoveRTEnvelope()
0xa35: Pop(0)
0xa36: @ SetDeathState()
0xa37: Pop(0)
0xa38: @ Stop()
0xa39: Pop(0)
0xa3a: @ StopAsync()
0xa3b: Pop(0)
0xa3c: @ StopSecondaryAnimation()
0xa3d: Pop(0)
0xa3e: PushEmpty(string)
0xa3f: Stack[-1] = Stack[-2]
0xa40: Call2 0xbce

0xa41: Pop(1)
0xa42: Push("all")
0xa43: @ PlayAnimation(Stack[-1], Stack[-2])
0xa44: Pop(1)
0xa45: @ WaitForAnimEnd()
0xa46: Pop(0)
0xa47: Push("all")
0xa48: @ LockAnimationEnd(Stack[-1], Stack[-2])
0xa49: Pop(1)
0xa4a: @ RemoveEnvelope()
0xa4b: Pop(0)
0xa4c: Return(); Pop(0)

0xa4d: PushEmpty()
0xa4e: Return(); Pop(0)

0xa4f: PushEmpty()
0xa50: Return(); Pop(0)

0xa51: PushEmpty()
0xa52: Return(); Pop(0)

0xa53: Push(GlobalVars[0])
0xa54: IF (Stack[-1] == 0) GOTO 0xa5c; Pop(1)

0xa55: PushEmpty(object)
0xa56: Call2 0xbf7

0xa57: Pop(0)
0xa58: @ RemoveActor(Stack[-1])
0xa59: Pop(1)
0xa5a: @ Hold()
0xa5b: Pop(0)
0xa5c: PushEmpty(bool)
0xa5d: Call2 0xbaf

0xa5e: Pop(0)
0xa5f: Pop(1); Push((bool) Stack[-1] == 0)
0xa60: IF (Stack[-1] == 0) GOTO 0xa64; Pop(1)

0xa61: @ Hold()
0xa62: Pop(0)
0xa63: GOTO 0xa5c

0xa64: Return(); Pop(0)

0xa65: PushEmpty()
0xa66: Push("cleanup")
0xa67: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa68: IF (Stack[-1] == 0) GOTO 0xa70; Pop(1)

0xa69: PushEmpty(object)
0xa6a: Call2 0xbf7

0xa6b: Pop(0)
0xa6c: @ RemoveActor(Stack[-1])
0xa6d: Pop(1)
0xa6e: @ Hold()
0xa6f: Pop(0)
0xa70: Return(); Pop(0)

0xa71: @ StopGroup0()
0xa72: Pop(0)
0xa73: @ sync()
0xa74: Pop(0)
0xa75: Return(); Pop(0)

0xa76: PushEmpty()
0xa77: Push((int) 2)
0xa78: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa79: IF (Stack[-1] == 0) GOTO 0xa7d; Pop(1)

0xa7a: Stack[-2] = "fire"
0xa7b: Return(); Pop(0)

0xa7c: GOTO 0xa82

0xa7d: Push((int) 1)
0xa7e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa7f: IF (Stack[-1] == 0) GOTO 0xa82; Pop(1)

0xa80: Stack[-2] = "bullet"
0xa81: Return(); Pop(0)

0xa82: Stack[-2] = "phys"
0xa83: Return(); Pop(0)

0xa84: PushEmpty(cvector, cvector, cvector, cvector)
0xa85: @ GetPosition(Stack[-2])
0xa86: Pop(0)
0xa87: @@ GetPosition(Stack[-1])
0xa88: Pop(0)
0xa89: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0xa8a: Return(); Pop(4)

0xa8b: PushEmpty(bool, bool)
0xa8c: @ IsPlayerActor(Stack[-3], Stack[-1])
0xa8d: Pop(0)
0xa8e: Stack[-4] = Stack[-1]
0xa8f: Return(); Pop(2)

0xa90: PushEmpty(bool, bool)
0xa91: Push("HasProperty")
0xa92: Push((int) 2)
0xa93: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0xa94: Pop(1); Push((bool) Stack[-1] == 0)
0xa95: IF (Stack[-1] == 0) GOTO 0xa98; Pop(1)

0xa96: Stack[-5] = (bool) 0
0xa97: Return(); Pop(2)

0xa98: @@ HasProperty(Stack[-3], Stack[-1])
0xa99: Pop(0)
0xa9a: Stack[-5] = Stack[-1]
0xa9b: Return(); Pop(2)

0xa9c: PushEmpty(int, string, int, float, float, float, int, string, int, float, float, float)
0xa9d: PushEmpty(bool, object, string)
0xa9e: Stack[-2] = Stack[-18]
0xa9f: Stack[-1] = "health"
0xaa0: Call2 0xa90

0xaa1: Pop(2)
0xaa2: Pop(1); Push((bool) Stack[-1] == 0)
0xaa3: IF (Stack[-1] == 0) GOTO 0xaa6; Pop(1)

0xaa4: Stack[-16] = (float) 0.0
0xaa5: Return(); Pop(12)

0xaa6: PushEmpty(bool, object, string)
0xaa7: Stack[-2] = Stack[-18]
0xaa8: Stack[-1] = "armor"
0xaa9: Call2 0xa90

0xaaa: Pop(2)
0xaab: Pop(1); Push((bool) Stack[-1] == 0)
0xaac: IF (Stack[-1] == 0) GOTO 0xaaf; Pop(1)

0xaad: Stack[-6] = (int) 0
0xaae: GOTO 0xab2

0xaaf: Push("armor")
0xab0: @@ GetProperty(Stack[-1], Stack[-7])
0xab1: Pop(1)
0xab2: Push("armor_")
0xab3: PushEmpty(string, int)
0xab4: Stack[-1] = Stack[-16]
0xab5: Call2 0xa76

0xab6: Pop(1)
0xab7: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0xab8: PushEmpty(bool, object, string)
0xab9: Stack[-2] = Stack[-18]
0xaba: Stack[-1] = Stack[-8]
0xabb: Call2 0xa90

0xabc: Pop(2)
0xabd: Pop(1); Push((bool) Stack[-1] == 0)
0xabe: IF (Stack[-1] == 0) GOTO 0xac1; Pop(1)

0xabf: Stack[-4] = (int) 0
0xac0: GOTO 0xac3

0xac1: @@ GetProperty(Stack[-5], Stack[-4])
0xac2: Pop(0)
0xac3: PushEmpty(float, float, float)
0xac4: Pop(0); Push(Stack[-9] + Stack[-7]);
0xac5: Push((float)100.0)
0xac6: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0xac7: Stack[-1] = (int) 1
0xac8: Call2 0xc07

0xac9: Stack[-6] = Stack[-3]
0xaca: Pop(3)
0xacb: Push("health")
0xacc: @@ GetProperty(Stack[-1], Stack[-3])
0xacd: Pop(1)
0xace: Push((int) 1)
0xacf: Pop(1); Push(Stack[-1] - Stack[-4]);
0xad0: Stack[-2] = Stack[-15] * Stack[-1]; Pop(1);
0xad1: Push("health")
0xad2: PushEmpty(float, float, float, float)
0xad3: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0xad4: Stack[-2] = (int) 0
0xad5: Stack[-1] = (int) 1
0xad6: Call2 0xc0e

0xad7: Pop(3)
0xad8: @@ SetProperty(Stack[-2], Stack[-1])
0xad9: Pop(2)
0xada: PushEmpty(bool, object)
0xadb: Stack[-1] = Stack[-17]
0xadc: Call2 0xa8b

0xadd: Pop(1)
0xade: IF (Stack[-1] == 0) GOTO 0xae3; Pop(1)

0xadf: PushEmpty(float)
0xae0: Stack[-1] = -Stack[-2]; Pop(0);
0xae1: Call2 0xc23

0xae2: Pop(1)
0xae3: Stack[-16] = Stack[-1]
0xae4: Return(); Pop(12)

0xae5: PushEmpty(bool, bool)
0xae6: @@ IsDead(Stack[-1])
0xae7: Pop(0)
0xae8: Stack[-4] = Stack[-1]
0xae9: Return(); Pop(2)

0xaea: PushEmpty(object, object, object, object)
0xaeb: Pop(0); Push((bool) Stack[-5] == 0)
0xaec: IF (Stack[-1] == 0) GOTO 0xaef; Pop(1)

0xaed: Stack[-6] = (bool) 0
0xaee: Return(); Pop(4)

0xaef: PushEmpty(bool)
0xaf0: Stack[-1] = (bool) 0
0xaf1: Push("IsDead")
0xaf2: Push((int) 1)
0xaf3: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0xaf4: IF (Stack[-1] == 0) GOTO 0xafb; Pop(1)

0xaf5: PushEmpty(bool, object)
0xaf6: Stack[-1] = Stack[-8]
0xaf7: Call2 0xae5

0xaf8: Pop(1)
0xaf9: IF (Stack[-1] == 0) GOTO 0xafb; Pop(1)

0xafa: Stack[-1] = (bool) 1
0xafb: IF (Stack[-1] == 0) GOTO 0xafe; Pop(1)

0xafc: Stack[-6] = (bool) 0
0xafd: Return(); Pop(4)

0xafe: @ GetScene(Stack[-2])
0xaff: Pop(0)
0xb00: Pop(0); Push((bool) Stack[-2] == 0)
0xb01: IF (Stack[-1] == 0) GOTO 0xb04; Pop(1)

0xb02: Stack[-6] = (bool) 0
0xb03: Return(); Pop(4)

0xb04: @@ GetScene(Stack[-1])
0xb05: Pop(0)
0xb06: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0xb07: IF (Stack[-1] == 0) GOTO 0xb0a; Pop(1)

0xb08: Stack[-6] = (bool) 0
0xb09: Return(); Pop(4)

0xb0a: Stack[-6] = (bool) 1
0xb0b: Return(); Pop(4)

0xb0c: Stack[-1] = 0
0xb0d: Stack[-2] = 0
0xb0e: PushEmpty(int, int)
0xb0f: PushEmpty(bool, object)
0xb10: Stack[-1] = Stack[-5]
0xb11: Call2 0xaea

0xb12: Pop(1)
0xb13: Pop(1); Push((bool) Stack[-1] == 0)
0xb14: IF (Stack[-1] == 0) GOTO 0xb17; Pop(1)

0xb15: Stack[-4] = (bool) 0
0xb16: Return(); Pop(2)

0xb17: PushEmpty(bool, object, string)
0xb18: Stack[-2] = Stack[-6]
0xb19: Stack[-1] = "noaccess"
0xb1a: Call2 0xa90

0xb1b: Pop(2)
0xb1c: Pop(1); Push((bool) Stack[-1] == 0)
0xb1d: IF (Stack[-1] == 0) GOTO 0xb20; Pop(1)

0xb1e: Stack[-4] = (bool) 1
0xb1f: Return(); Pop(2)

0xb20: Push("noaccess")
0xb21: @@ GetProperty(Stack[-1], Stack[-2])
0xb22: Pop(1)
0xb23: Push((int) 0)
0xb24: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0xb25: Return(); Pop(2)

0xb26: PushEmpty(bool, int, cvector, cvector, cvector, cvector, string, bool, int, cvector, cvector, cvector, cvector, string)
0xb27: Pop(0); Push((bool) Stack[-15] == 0)
0xb28: IF (Stack[-1] == 0) GOTO 0xb2a; Pop(1)

0xb29: Return(); Pop(14)

0xb2a: @ IsDead(Stack[-7])
0xb2b: Pop(0)
0xb2c: Push(Stack[-7])
0xb2d: IF (Stack[-1] == 0) GOTO 0xb2f; Pop(1)

0xb2e: Return(); Pop(14)

0xb2f: @ GetSecondaryAnimationType(Stack[-6])
0xb30: Pop(0)
0xb31: Push((int) 0)
0xb32: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0xb33: IF (Stack[-1] == 0) GOTO 0xb35; Pop(1)

0xb34: Return(); Pop(14)

0xb35: @@ GetPosition(Stack[-5])
0xb36: Pop(0)
0xb37: @ GetPosition(Stack[-4])
0xb38: Pop(0)
0xb39: @ GetDirection(Stack[-3])
0xb3a: Pop(0)
0xb3b: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0xb3c: Push(CvectorIndex(Stack[-2], 0))
0xb3d: Push(CvectorIndex(Stack[-4], 0))
0xb3e: Pop(2); Push(Stack[-2] * Stack[-1]);
0xb3f: Push(CvectorIndex(Stack[-3], 2))
0xb40: Push(CvectorIndex(Stack[-5], 2))
0xb41: Pop(2); Push(Stack[-2] * Stack[-1]);
0xb42: Pop(2); Push(Stack[-2] + Stack[-1]);
0xb43: Push((int) 0)
0xb44: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0xb45: IF (Stack[-1] == 0) GOTO 0xb48; Pop(1)

0xb46: Stack[-1] = "fhit"
0xb47: GOTO 0xb49

0xb48: Stack[-1] = "bhit"
0xb49: Push("hit_react")
0xb4a: Push("1")
0xb4b: Pop(1); Push(Stack[-3] + Stack[-1]);
0xb4c: Push("2")
0xb4d: Pop(1); Push(Stack[-4] + Stack[-1]);
0xb4e: Push((int) -10)
0xb4f: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xb50: Pop(4)
0xb51: Return(); Pop(14)

0xb52: PushEmpty(cvector, object, int, bool, cvector, cvector, int, int, cvector, cvector, object, int, bool, cvector, cvector, int, int, cvector)
0xb53: PushEmpty(bool)
0xb54: Stack[-1] = (bool) 0
0xb55: PushEmpty(bool)
0xb56: Stack[-1] = (bool) 0
0xb57: Push(Stack[-23])
0xb58: IF (Stack[-1] == 0) GOTO 0xb5d; Pop(1)

0xb59: Push((int) 4)
0xb5a: Pop(1); Push((bool) Stack[-23] != Stack[-1])
0xb5b: IF (Stack[-1] == 0) GOTO 0xb5d; Pop(1)

0xb5c: Stack[-1] = (bool) 1
0xb5d: IF (Stack[-1] == 0) GOTO 0xb62; Pop(1)

0xb5e: Push((int) 5)
0xb5f: Pop(1); Push((bool) Stack[-22] != Stack[-1])
0xb60: IF (Stack[-1] == 0) GOTO 0xb62; Pop(1)

0xb61: Stack[-1] = (bool) 1
0xb62: IF (Stack[-1] == 0) GOTO 0xb91; Pop(1)

0xb63: PushEmpty(cvector, cvector)
0xb64: PushEmpty(cvector, object)
0xb65: Stack[-1] = Stack[-25]
0xb66: Call2 0xa84

0xb67: Stack[-3] = Stack[-2]
0xb68: Pop(2)
0xb69: Call2 0xbfd

0xb6a: Stack[-11] = Stack[-2]
0xb6b: Pop(2)
0xb6c: @ CreateVectorVector(Stack[-8])
0xb6d: Pop(0)
0xb6e: Stack[-7] = (int) 1
0xb6f: Push("hit")
0xb70: Pop(1); Push(Stack[-1] + Stack[-8]);
0xb71: @ GetGeometryLocator(Stack[-1], Stack[-7], Stack[-6], Stack[-5])
0xb72: Pop(1)
0xb73: Pop(0); Push((bool) Stack[-6] == 0)
0xb74: IF (Stack[-1] == 0) GOTO 0xb76; Pop(1)

0xb75: GOTO 0xb7f

0xb76: Pop(0); Push(Stack[-4] | Stack[-9]);
0xb77: Push((float)0.70711)
0xb78: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0xb79: IF (Stack[-1] == 0) GOTO 0xb7c; Pop(1)

0xb7a: @@ add(Stack[-5])
0xb7b: Pop(0)
0xb7c: Push((int) 1)
0xb7d: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0xb7e: GOTO 0xb6f

0xb7f: @@ size(Stack[-3])
0xb80: Pop(0)
0xb81: Push(Stack[-3])
0xb82: IF (Stack[-1] == 0) GOTO 0xb90; Pop(1)

0xb83: @ irand(Stack[-2], Stack[-3])
0xb84: Pop(0)
0xb85: @@ get(Stack[-1], Stack[-2])
0xb86: Pop(0)
0xb87: PushEmpty(object, int, float, cvector, cvector)
0xb88: Stack[-5] = Stack[-26]
0xb89: Stack[-4] = Stack[-25]
0xb8a: Stack[-3] = Stack[-24]
0xb8b: Stack[-2] = Stack[-6]
0xb8c: Stack[-1] = -Stack[-14]; Pop(0);
0xb8d: Call2 0xb96

0xb8e: Pop(5)
0xb8f: Return(); Pop(18)

0xb90: Stack[-8] = 0
0xb91: PushEmpty(object)
0xb92: Stack[-1] = Stack[-22]
0xb93: Call2 0xb26

0xb94: Pop(1)
0xb95: Return(); Pop(18)

0xb96: PushEmpty(object, object, object, object)
0xb97: @ GetScene(Stack[-2])
0xb98: Pop(0)
0xb99: Push("scripted")
0xb9a: Push("blood_dir.xml")
0xb9b: @ AddActorByType(Stack[-3], Stack[-2], Stack[-4], Stack[-8], Stack[-7], Stack[-1])
0xb9c: Pop(2)
0xb9d: PushEmpty(object)
0xb9e: Stack[-1] = Stack[-10]
0xb9f: Call2 0xb26

0xba0: Pop(1)
0xba1: Return(); Pop(4)

0xba2: Stack[-1] = 0
0xba3: Stack[-2] = 0
0xba4: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0xba5: @@ GetPosition(Stack[-3])
0xba6: Pop(0)
0xba7: @ GetPosition(Stack[-2])
0xba8: Pop(0)
0xba9: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0xbaa: Push(CvectorIndex(Stack[-1], 0))
0xbab: Push(CvectorIndex(Stack[-2], 2))
0xbac: @ RotateAsync(Stack[-2], Stack[-1])
0xbad: Pop(2)
0xbae: Return(); Pop(6)

0xbaf: PushEmpty(bool, bool)
0xbb0: @ IsLoaded(Stack[-1])
0xbb1: Pop(0)
0xbb2: Stack[-3] = Stack[-1]
0xbb3: Return(); Pop(2)

0xbb4: PushEmpty(float, cvector, float, cvector)
0xbb5: @@ GetEyesHeight(Stack[-2])
0xbb6: Pop(0)
0xbb7: Stack[-1] = CVector(0.0, 0.0, 0.0)
0xbb8: Push(CvectorIndex(Stack[-1], 1))
0xbb9: Stack[-1] = Stack[-3]
0xbba: CvectorIndex(Stack[-2], 1) = Stack[-1];
0xbbb: Push("head")
0xbbc: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0xbbd: Pop(1)
0xbbe: Return(); Pop(4)

0xbbf: PushEmpty(int, bool, int, bool)
0xbc0: PushEmpty(bool, int, int)
0xbc1: Stack[-2] = Stack[-10]
0xbc2: Stack[-1] = Stack[-9]
0xbc3: Call2 0xc1e

0xbc4: Pop(2)
0xbc5: IF (Stack[-1] == 0) GOTO 0xbcd; Pop(1)

0xbc6: @ irand(Stack[-2], Stack[-5])
0xbc7: Pop(0)
0xbc8: Push((int) 0)
0xbc9: Push((int) 1)
0xbca: Pop(1); Push(Stack[-4] + Stack[-1]);
0xbcb: @ AddItem(Stack[-3], Stack[-10], Stack[-2], Stack[-1])
0xbcc: Pop(2)
0xbcd: Return(); Pop(4)

0xbce: PushEmpty(bool, int, bool, int, bool, float, cvector, cvector, bool, int, bool, int, bool, float, cvector, cvector)
0xbcf: @ IsExisting3DSound(Stack[-8], Stack[-17])
0xbd0: Pop(0)
0xbd1: Pop(0); Push((bool) Stack[-8] == 0)
0xbd2: IF (Stack[-1] == 0) GOTO 0xbe7; Pop(1)

0xbd3: Stack[-7] = (int) 0
0xbd4: Push((int) 1)
0xbd5: Pop(1); Push(Stack[-8] + Stack[-1]);
0xbd6: Pop(1); Push(Stack[-18] + Stack[-1]);
0xbd7: @ IsExisting3DSound(Stack[-7], Stack[-1])
0xbd8: Pop(1)
0xbd9: Pop(0); Push((bool) Stack[-6] == 0)
0xbda: IF (Stack[-1] == 0) GOTO 0xbdc; Pop(1)

0xbdb: GOTO 0xbdf

0xbdc: Push((int) 1)
0xbdd: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0xbde: GOTO 0xbd4

0xbdf: Pop(0); Push((bool) Stack[-7] == 0)
0xbe0: IF (Stack[-1] == 0) GOTO 0xbe2; Pop(1)

0xbe1: Return(); Pop(16)

0xbe2: @ irand(Stack[-5], Stack[-7])
0xbe3: Pop(0)
0xbe4: Push((int) 1)
0xbe5: Pop(1); Push(Stack[-6] + Stack[-1]);
0xbe6: Stack[-18] = Stack[-18] + Stack[-1]; Pop(1);
0xbe7: @ Is3DSoundLoaded(Stack[-4], Stack[-17])
0xbe8: Pop(0)
0xbe9: Push(Stack[-4])
0xbea: IF (Stack[-1] == 0) GOTO 0xbf6; Pop(1)

0xbeb: @ GetEyesHeight(Stack[-3])
0xbec: Pop(0)
0xbed: @ GetDirection(Stack[-2])
0xbee: Pop(0)
0xbef: Push((int) 50)
0xbf0: Stack[-2] = Stack[-3] * Stack[-1]; Pop(1);
0xbf1: Push(CvectorIndex(Stack[-1], 1))
0xbf2: Stack[-1] = Stack[-1] + Stack[-4]; Pop(0);
0xbf3: CvectorIndex(Stack[-2], 1) = Stack[-1];
0xbf4: @ PlayGlobalSound(Stack[-17], Stack[-1])
0xbf5: Pop(0)
0xbf6: Return(); Pop(16)

0xbf7: PushEmpty(object, object)
0xbf8: @ self(Stack[-1])
0xbf9: Pop(0)
0xbfa: Stack[-3] = Stack[-1]
0xbfb: Return(); Pop(2)

0xbfc: Stack[-1] = 0
0xbfd: PushEmpty(float, float)
0xbfe: Pop(0); Push(Stack[-3] | Stack[-3]);
0xbff: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0xc00: Push((float)0.0)
0xc01: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xc02: IF (Stack[-1] == 0) GOTO 0xc05; Pop(1)

0xc03: Stack[-4] = CVector(0.0, 0.0, 0.0)
0xc04: Return(); Pop(2)

0xc05: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0xc06: Return(); Pop(2)

0xc07: PushEmpty()
0xc08: Pop(0); Push((bool) Stack[-2] < Stack[-1])
0xc09: IF (Stack[-1] == 0) GOTO 0xc0c; Pop(1)

0xc0a: Stack[-3] = Stack[-2]
0xc0b: GOTO 0xc0d

0xc0c: Stack[-3] = Stack[-1]
0xc0d: Return(); Pop(0)

0xc0e: PushEmpty()
0xc0f: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0xc10: IF (Stack[-1] == 0) GOTO 0xc13; Pop(1)

0xc11: Stack[-4] = Stack[-2]
0xc12: Return(); Pop(0)

0xc13: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0xc14: IF (Stack[-1] == 0) GOTO 0xc17; Pop(1)

0xc15: Stack[-4] = Stack[-1]
0xc16: Return(); Pop(0)

0xc17: Stack[-4] = Stack[-3]
0xc18: Return(); Pop(0)

0xc19: PushEmpty(float, float)
0xc1a: @ rand(Stack[-1])
0xc1b: Pop(0)
0xc1c: Stack[-4] = Stack[-1] < Stack[-3]; Pop(0);
0xc1d: Return(); Pop(2)

0xc1e: PushEmpty(int, int)
0xc1f: @ irand(Stack[-1], Stack[-3])
0xc20: Pop(0)
0xc21: Stack[-5] = Stack[-1] < Stack[-4]; Pop(0);
0xc22: Return(); Pop(2)

0xc23: PushEmpty(object, object)
0xc24: @ CreateFloatVector(Stack[-1])
0xc25: Pop(0)
0xc26: @@ add(Stack[-3])
0xc27: Pop(0)
0xc28: Push((int) 0)
0xc29: Pop(1); Push((bool) Stack[-4] < Stack[-1])
0xc2a: IF (Stack[-1] == 0) GOTO 0xc2f; Pop(1)

0xc2b: Push((float)0.7)
0xc2c: Push((int) 500)
0xc2d: @ RumblePlay(Stack[-2], Stack[-1])
0xc2e: Pop(2)
0xc2f: Push((int) 15)
0xc30: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0xc31: Pop(1)
0xc32: Return(); Pop(2)

0xc33: Stack[-1] = 0
0xc34: PushEmpty(bool, bool)
0xc35: @ IsPlayerActor(Stack[-3], Stack[-1])
0xc36: Pop(0)
0xc37: Push(Stack[-1])
0xc38: IF (Stack[-1] == 0) GOTO 0xc3c; Pop(1)

0xc39: Push("attack")
0xc3a: @ PlayGlobalMusic(Stack[-1])
0xc3b: Pop(1)
0xc3c: Return(); Pop(2)

0xc3d: PushEmpty(string, string)
0xc3e: Stack[-1] = "idle"
0xc3f: Push(Stack[-3])
0xc40: IF (Stack[-1] == 0) GOTO 0xc42; Pop(1)

0xc41: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0xc42: Stack[-4] = Stack[-1]
0xc43: Return(); Pop(2)

0xc44: PushEmpty(int, bool, int, bool)
0xc45: Stack[-2] = (int) 0
0xc46: Push("all")
0xc47: PushEmpty(string, int)
0xc48: Stack[-1] = Stack[-5]
0xc49: Call2 0xc3d

0xc4a: Pop(1)
0xc4b: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0xc4c: Pop(2)
0xc4d: Pop(0); Push((bool) Stack[-1] == 0)
0xc4e: IF (Stack[-1] == 0) GOTO 0xc50; Pop(1)

0xc4f: GOTO 0xc53

0xc50: Push((int) 1)
0xc51: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0xc52: GOTO 0xc46

0xc53: Stack[-5] = Stack[-2]
0xc54: Return(); Pop(4)

0xc55: PushEmpty(int, int)
0xc56: Push("branch")
0xc57: @ GetVariable(Stack[-1], Stack[-2])
0xc58: Pop(1)
0xc59: Stack[-3] = Stack[-1]
0xc5a: Return(); Pop(2)

0xc5b: PushEmpty()
0xc5c: PushEmpty(int)
0xc5d: Call2 0xc55

0xc5e: Pop(0)
0xc5f: Push((int) 1)
0xc60: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xc61: IF (Stack[-1] == 0) GOTO 0xc65; Pop(1)

0xc62: @ WorkWithCorpse(Stack[-1])
0xc63: Pop(0)
0xc64: GOTO 0xc67

0xc65: @ Barter(Stack[-1])
0xc66: Pop(0)
0xc67: Return(); Pop(0)

0xc68: PushEmpty()
0xc69: Push("cleanup")
0xc6a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc6b: IF (Stack[-1] == 0) GOTO 0xc6f; Pop(1)

0xc6c: Push(GlobalVars[0])
0xc6d: Stack[-1] = (bool) 1
0xc6e: GlobalVars[0] = Stack[-1]; Pop(1)
0xc6f: Return(); Pop(0)

0xc70: PushEmpty(cvector, cvector, cvector, float, cvector, cvector, cvector, float, cvector, cvector, cvector, float, cvector, cvector, cvector, float)
0xc71: PushEmpty(object)
0xc72: Call2 0xbf7

0xc73: Pop(0)
0xc74: Pop(1); Push((bool) Stack[-19] == Stack[-1])
0xc75: IF (Stack[-1] == 0) GOTO 0xc78; Pop(1)

0xc76: Stack[-19] = (bool) 0
0xc77: Return(); Pop(16)

0xc78: PushEmpty(string)
0xc79: Call2 0xdfe

0xc7a: Pop(0)
0xc7b: Pop(1); Push((bool) Stack[-18] == Stack[-1])
0xc7c: IF (Stack[-1] == 0) GOTO 0xc85; Pop(1)

0xc7d: PushEmpty(bool, object)
0xc7e: Stack[-1] = Stack[-20]
0xc7f: Call2 0xd60

0xc80: Pop(1)
0xc81: IF (Stack[-1] == 0) GOTO 0xc84; Pop(1)

0xc82: Stack[-19] = (bool) 1
0xc83: Return(); Pop(16)

0xc84: GOTO 0xcb8

0xc85: PushEmpty(string)
0xc86: Call2 0xdfc

0xc87: Pop(0)
0xc88: Pop(1); Push((bool) Stack[-18] == Stack[-1])
0xc89: IF (Stack[-1] == 0) GOTO 0xc9b; Pop(1)

0xc8a: @@ GetPosition(Stack[-8])
0xc8b: Pop(0)
0xc8c: @ GetPosition(Stack[-7])
0xc8d: Pop(0)
0xc8e: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0xc8f: Stack[-5] = Stack[-6] | Stack[-6]; Pop(0);
0xc90: Push((float)4000000.0)
0xc91: Pop(1); Push((bool) Stack[-6] < Stack[-1])
0xc92: IF (Stack[-1] == 0) GOTO 0xc9a; Pop(1)

0xc93: PushEmpty(bool, object)
0xc94: Stack[-1] = Stack[-20]
0xc95: Call2 0xd84

0xc96: Pop(1)
0xc97: IF (Stack[-1] == 0) GOTO 0xc9a; Pop(1)

0xc98: Stack[-19] = (bool) 1
0xc99: Return(); Pop(16)

0xc9a: GOTO 0xcb8

0xc9b: Push("player_shot")
0xc9c: Pop(1); Push((bool) Stack[-18] == Stack[-1])
0xc9d: IF (Stack[-1] == 0) GOTO 0xcb8; Pop(1)

0xc9e: @@ GetPosition(Stack[-4])
0xc9f: Pop(0)
0xca0: @ GetPosition(Stack[-3])
0xca1: Pop(0)
0xca2: Stack[-2] = Stack[-4] - Stack[-3]; Pop(0);
0xca3: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0xca4: Push((float)360000.0)
0xca5: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xca6: IF (Stack[-1] == 0) GOTO 0xcae; Pop(1)

0xca7: PushEmpty(bool, object)
0xca8: Stack[-1] = Stack[-20]
0xca9: Call2 0xd84

0xcaa: Pop(1)
0xcab: IF (Stack[-1] == 0) GOTO 0xcae; Pop(1)

0xcac: Stack[-19] = (bool) 1
0xcad: Return(); Pop(16)

0xcae: Push((float)12250000.0)
0xcaf: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xcb0: IF (Stack[-1] == 0) GOTO 0xcb8; Pop(1)

0xcb1: PushEmpty(bool, object)
0xcb2: Stack[-1] = Stack[-20]
0xcb3: Call2 0xd60

0xcb4: Pop(1)
0xcb5: IF (Stack[-1] == 0) GOTO 0xcb8; Pop(1)

0xcb6: Stack[-19] = (bool) 1
0xcb7: Return(); Pop(16)

0xcb8: Stack[-19] = (bool) 0
0xcb9: Return(); Pop(16)

0xcba: PushEmpty()
0xcbb: PushEmpty(bool)
0xcbc: Stack[-1] = (bool) 0
0xcbd: Push("IsDead")
0xcbe: Push((int) 1)
0xcbf: Pop(2); Push(IsFuncExist(Stack[-4], Stack[-2], Stack[-1]))
0xcc0: IF (Stack[-1] == 0) GOTO 0xcc7; Pop(1)

0xcc1: PushEmpty(bool, object)
0xcc2: Stack[-1] = Stack[-4]
0xcc3: Call2 0xae5

0xcc4: Pop(1)
0xcc5: IF (Stack[-1] == 0) GOTO 0xcc7; Pop(1)

0xcc6: Stack[-1] = (bool) 1
0xcc7: IF (Stack[-1] == 0) GOTO 0xce0; Pop(1)

0xcc8: PushEmpty(bool, object, string)
0xcc9: Stack[-2] = Stack[-4]
0xcca: PushEmpty(string)
0xccb: Call2 0xdfe

0xccc: Stack[-2] = Stack[-1]
0xccd: Pop(1)
0xcce: Call2 0xa90

0xccf: Pop(2)
0xcd0: IF (Stack[-1] == 0) GOTO 0xcd3; Pop(1)

0xcd1: Stack[-2] = (bool) 0
0xcd2: Return(); Pop(0)

0xcd3: PushEmpty(string)
0xcd4: Call2 0xdfe

0xcd5: Pop(0)
0xcd6: Push((int) 1)
0xcd7: @@ SetProperty(Stack[-2], Stack[-1])
0xcd8: Pop(2)
0xcd9: PushEmpty(bool, object)
0xcda: Stack[-1] = Stack[-3]
0xcdb: Call2 0xd4e

0xcdc: Stack[-4] = Stack[-2]
0xcdd: Pop(2)
0xcde: Return(); Pop(0)

0xcdf: GOTO 0xceb

0xce0: PushEmpty(bool, object)
0xce1: Stack[-1] = Stack[-3]
0xce2: Call2 0xa8b

0xce3: Pop(1)
0xce4: IF (Stack[-1] == 0) GOTO 0xceb; Pop(1)

0xce5: PushEmpty(bool, object)
0xce6: Stack[-1] = Stack[-3]
0xce7: Call2 0xd84

0xce8: Stack[-4] = Stack[-2]
0xce9: Pop(2)
0xcea: Return(); Pop(0)

0xceb: Stack[-2] = (bool) 0
0xcec: Return(); Pop(0)

0xced: PushEmpty()
0xcee: PushEmpty(bool, object)
0xcef: Stack[-1] = Stack[-3]
0xcf0: Call2 0xa8b

0xcf1: Pop(1)
0xcf2: IF (Stack[-1] == 0) GOTO 0xcf9; Pop(1)

0xcf3: PushEmpty(bool, object)
0xcf4: Stack[-1] = Stack[-3]
0xcf5: Call2 0xd72

0xcf6: Stack[-4] = Stack[-2]
0xcf7: Pop(2)
0xcf8: Return(); Pop(0)

0xcf9: Stack[-2] = (bool) 0
0xcfa: Return(); Pop(0)

0xcfb: PushEmpty(object, cvector, cvector, cvector, bool, float, int, object, cvector, cvector, cvector, bool, float, int)
0xcfc: @ GetMainOutdoorScene(Stack[-7])
0xcfd: Pop(0)
0xcfe: @ GetPosition(Stack[-6])
0xcff: Pop(0)
0xd00: Stack[-2] = (int) 4000000
0xd01: Stack[-1] = (int) 0
0xd02: Push(GlobalVars[1])
0xd03: Stack[-1] = (int) 0
0xd04: GlobalVars[1] = Stack[-1]; Pop(1)
0xd05: Push((bool) 1)
0xd06: IF (Stack[-1] == 0) GOTO 0xd18; Pop(1)

0xd07: PushEmpty(string)
0xd08: Call2 0xdfa

0xd09: Pop(0)
0xd0a: Push(GlobalVars[1])
0xd0b: Push((int) 1)
0xd0c: Pop(2); Push(Stack[-2] + Stack[-1]);
0xd0d: Pop(2); Push(Stack[-2] + Stack[-1]);
0xd0e: @@ GetLocator(Stack[-1], Stack[-4], Stack[-6], Stack[-5])
0xd0f: Pop(1)
0xd10: Pop(0); Push((bool) Stack[-3] == 0)
0xd11: IF (Stack[-1] == 0) GOTO 0xd13; Pop(1)

0xd12: GOTO 0xd18

0xd13: Push(GlobalVars[1])
0xd14: Push((int) 1)
0xd15: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0xd16: GlobalVars[1] = Stack[-1]; Pop(1)
0xd17: GOTO 0xd05

0xd18: Push("Pantrol point count: ")
0xd19: Push(GlobalVars[1])
0xd1a: Pop(2); Push(Stack[-2] + Stack[-1]);
0xd1b: @ Trace(Stack[-1])
0xd1c: Pop(1)
0xd1d: Stack[-15] = (bool) 1
0xd1e: Return(); Pop(14)

0xd1f: Stack[-7] = 0
0xd20: PushEmpty()
0xd21: Push(GlobalVars[2])
0xd22: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd23: IF (Stack[-1] == 0) GOTO 0xd26; Pop(1)

0xd24: Stack[-2] = (bool) 0
0xd25: Return(); Pop(0)

0xd26: Push((int) 0)
0xd27: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd28: IF (Stack[-1] == 0) GOTO 0xd32; Pop(1)

0xd29: Push(GlobalVars[3])
0xd2a: Push(GlobalVars[2])
0xd2b: Stack[-2] = Stack[-1]
0xd2c: Pop(1)
0xd2d: GlobalVars[3] = Stack[-1]; Pop(1)
0xd2e: Push("changing state to c_iStateWaitForLoad")
0xd2f: @ Trace(Stack[-1])
0xd30: Pop(1)
0xd31: GOTO 0xd49

0xd32: Push((int) 1)
0xd33: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd34: IF (Stack[-1] == 0) GOTO 0xd39; Pop(1)

0xd35: Push("changing state to c_iStateHeatHands")
0xd36: @ Trace(Stack[-1])
0xd37: Pop(1)
0xd38: GOTO 0xd49

0xd39: Push((int) 2)
0xd3a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd3b: IF (Stack[-1] == 0) GOTO 0xd40; Pop(1)

0xd3c: Push("changing state to c_iStateIdle")
0xd3d: @ Trace(Stack[-1])
0xd3e: Pop(1)
0xd3f: GOTO 0xd49

0xd40: Push((int) 3)
0xd41: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd42: IF (Stack[-1] == 0) GOTO 0xd47; Pop(1)

0xd43: Push("changing state to c_iStatePatrol")
0xd44: @ Trace(Stack[-1])
0xd45: Pop(1)
0xd46: GOTO 0xd49

0xd47: Stack[-2] = (bool) 0
0xd48: Return(); Pop(0)

0xd49: Push(GlobalVars[2])
0xd4a: Stack[-1] = Stack[-2]
0xd4b: GlobalVars[2] = Stack[-1]; Pop(1)
0xd4c: Stack[-2] = (bool) 1
0xd4d: Return(); Pop(0)

0xd4e: PushEmpty()
0xd4f: Push(GlobalVars[2])
0xd50: Push((int) 4)
0xd51: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xd52: IF (Stack[-1] == 0) GOTO 0xd55; Pop(1)

0xd53: Stack[-2] = (bool) 0
0xd54: Return(); Pop(0)

0xd55: Push(GlobalVars[2])
0xd56: Stack[-1] = (int) 4
0xd57: GlobalVars[2] = Stack[-1]; Pop(1)
0xd58: Push("changing state to c_iStateAware")
0xd59: @ Trace(Stack[-1])
0xd5a: Pop(1)
0xd5b: Push(GlobalVars[4])
0xd5c: Stack[-1] = Stack[-2]
0xd5d: GlobalVars[4] = Stack[-1]; Pop(1)
0xd5e: Stack[-2] = (bool) 1
0xd5f: Return(); Pop(0)

0xd60: PushEmpty()
0xd61: Push(GlobalVars[2])
0xd62: Push((int) 5)
0xd63: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xd64: IF (Stack[-1] == 0) GOTO 0xd67; Pop(1)

0xd65: Stack[-2] = (bool) 0
0xd66: Return(); Pop(0)

0xd67: Push(GlobalVars[2])
0xd68: Stack[-1] = (int) 5
0xd69: GlobalVars[2] = Stack[-1]; Pop(1)
0xd6a: Push("changing state to c_iStateSearchEnemy")
0xd6b: @ Trace(Stack[-1])
0xd6c: Pop(1)
0xd6d: Push(GlobalVars[5])
0xd6e: Stack[-1] = Stack[-2]
0xd6f: GlobalVars[5] = Stack[-1]; Pop(1)
0xd70: Stack[-2] = (bool) 1
0xd71: Return(); Pop(0)

0xd72: PushEmpty()
0xd73: Push(GlobalVars[2])
0xd74: Push((int) 6)
0xd75: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xd76: IF (Stack[-1] == 0) GOTO 0xd79; Pop(1)

0xd77: Stack[-2] = (bool) 0
0xd78: Return(); Pop(0)

0xd79: Push(GlobalVars[2])
0xd7a: Stack[-1] = (int) 6
0xd7b: GlobalVars[2] = Stack[-1]; Pop(1)
0xd7c: Push("changing state to c_iStateHearEnemy")
0xd7d: @ Trace(Stack[-1])
0xd7e: Pop(1)
0xd7f: Push(GlobalVars[6])
0xd80: Stack[-1] = Stack[-2]
0xd81: GlobalVars[6] = Stack[-1]; Pop(1)
0xd82: Stack[-2] = (bool) 1
0xd83: Return(); Pop(0)

0xd84: PushEmpty()
0xd85: Push(GlobalVars[2])
0xd86: Push((int) 7)
0xd87: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xd88: IF (Stack[-1] == 0) GOTO 0xd8b; Pop(1)

0xd89: Stack[-2] = (bool) 0
0xd8a: Return(); Pop(0)

0xd8b: Push(GlobalVars[2])
0xd8c: Stack[-1] = (int) 7
0xd8d: GlobalVars[2] = Stack[-1]; Pop(1)
0xd8e: Push("changing state to c_iStateAttack")
0xd8f: @ Trace(Stack[-1])
0xd90: Pop(1)
0xd91: Push(GlobalVars[7])
0xd92: Stack[-1] = Stack[-2]
0xd93: GlobalVars[7] = Stack[-1]; Pop(1)
0xd94: Stack[-2] = (bool) 1
0xd95: Return(); Pop(0)

0xd96: PushEmpty(int, int)
0xd97: PushEmpty(string)
0xd98: Call2 0xe00

0xd99: Pop(0)
0xd9a: Push("_locked")
0xd9b: Pop(2); Push(Stack[-2] + Stack[-1]);
0xd9c: @ GetVariable(Stack[-1], Stack[-2])
0xd9d: Pop(1)
0xd9e: Push((int) 0)
0xd9f: Stack[-4] = Stack[-2] != Stack[-1]; Pop(1);
0xda0: Return(); Pop(2)

0xda1: PushEmpty()
0xda2: PushEmpty(string)
0xda3: Call2 0xe00

0xda4: Pop(0)
0xda5: Push("_locked")
0xda6: Pop(2); Push(Stack[-2] + Stack[-1]);
0xda7: Push(Stack[-2])
0xda8: IF (Stack[-1] == 0) GOTO 0xdab; Pop(1)

0xda9: Push((int) 1)
0xdaa: GOTO 0xdac

0xdab: Push((int) 0)
0xdac: @ SetVariable(Stack[-2], Stack[-1])
0xdad: Pop(2)
0xdae: Return(); Pop(0)

0xdaf: PushEmpty(int, int)
0xdb0: PushEmpty(string)
0xdb1: Call2 0xdfa

0xdb2: Pop(0)
0xdb3: Push("_locked")
0xdb4: Pop(2); Push(Stack[-2] + Stack[-1]);
0xdb5: @ GetVariable(Stack[-1], Stack[-2])
0xdb6: Pop(1)
0xdb7: PushEmpty(int)
0xdb8: Call2 0xe02

0xdb9: Pop(0)
0xdba: Stack[-4] = Stack[-2] >= Stack[-1]; Pop(1);
0xdbb: Return(); Pop(2)

0xdbc: PushEmpty(int, int)
0xdbd: PushEmpty(string)
0xdbe: Call2 0xdfa

0xdbf: Pop(0)
0xdc0: Push("_locked")
0xdc1: Pop(2); Push(Stack[-2] + Stack[-1]);
0xdc2: @ GetVariable(Stack[-1], Stack[-2])
0xdc3: Pop(1)
0xdc4: Push(Stack[-3])
0xdc5: IF (Stack[-1] == 0) GOTO 0xdc9; Pop(1)

0xdc6: Push((int) 1)
0xdc7: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0xdc8: GOTO 0xdcb

0xdc9: Push((int) -1)
0xdca: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0xdcb: PushEmpty(string)
0xdcc: Call2 0xdfa

0xdcd: Pop(0)
0xdce: Push("_locked")
0xdcf: Pop(2); Push(Stack[-2] + Stack[-1]);
0xdd0: @ SetVariable(Stack[-1], Stack[-2])
0xdd1: Pop(1)
0xdd2: Return(); Pop(2)

0xdd3: PushEmpty()
0xdd4: PushEmpty(object, int, float)
0xdd5: Stack[-3] = Stack[-7]
0xdd6: Stack[-2] = Stack[-6]
0xdd7: Stack[-1] = Stack[-5]
0xdd8: Call2 0xb52

0xdd9: Pop(3)
0xdda: Return(); Pop(0)

0xddb: PushEmpty()
0xddc: PushEmpty(object, int, float, cvector, cvector)
0xddd: Stack[-5] = Stack[-11]
0xdde: Stack[-4] = Stack[-10]
0xddf: Stack[-3] = Stack[-9]
0xde0: Stack[-2] = Stack[-7]
0xde1: Stack[-1] = Stack[-6]
0xde2: Call2 0xb96

0xde3: Pop(5)
0xde4: Return(); Pop(0)

0xde5: PushEmpty(float, float)
0xde6: Push("health")
0xde7: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xde8: IF (Stack[-1] == 0) GOTO 0xdf1; Pop(1)

0xde9: Push("health")
0xdea: @ GetProperty(Stack[-1], Stack[-2])
0xdeb: Pop(1)
0xdec: Push((int) 0)
0xded: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0xdee: IF (Stack[-1] == 0) GOTO 0xdf1; Pop(1)

0xdef: @ SignalDeath(Stack[-4])
0xdf0: Pop(0)
0xdf1: Return(); Pop(2)

0xdf2: PushEmpty()
0xdf3: PushEmpty(object)
0xdf4: Stack[-1] = Stack[-2]
0xdf5: Push(-1, 0); TaskCall(8)
0xdf6: Call2 0x99e

0xdf7: Pop(-1, 0); TaskReturn
0xdf8: Pop(1)
0xdf9: Return(); Pop(0)

0xdfa: Stack[-1] = "pt_k5q03_patrol"
0xdfb: Return(); Pop(0)

0xdfc: Stack[-1] = "k5q03_helpme"
0xdfd: Return(); Pop(0)

0xdfe: Stack[-1] = "k5q03_corpse"
0xdff: Return(); Pop(0)

0xe00: Stack[-1] = "pt_k5q03_center"
0xe01: Return(); Pop(0)

0xe02: Stack[-1] = (int) 3
0xe03: Return(); Pop(0)

0xe04: PushEmpty(string, int, int, int)
0xe05: Stack[-4] = "gold_ring"
0xe06: Stack[-3] = (int) 1
0xe07: Stack[-2] = (int) 2
0xe08: Stack[-1] = (int) 2
0xe09: Call2 0xbbf

0xe0a: Pop(4)
0xe0b: PushEmpty(string, int, int, int)
0xe0c: Stack[-4] = "silver_ring"
0xe0d: Stack[-3] = (int) 1
0xe0e: Stack[-2] = (int) 2
0xe0f: Stack[-1] = (int) 3
0xe10: Call2 0xbbf

0xe11: Pop(4)
0xe12: PushEmpty(string, int, int, int)
0xe13: Stack[-4] = "beads"
0xe14: Stack[-3] = (int) 1
0xe15: Stack[-2] = (int) 2
0xe16: Stack[-1] = (int) 3
0xe17: Call2 0xbbf

0xe18: Pop(4)
0xe19: PushEmpty(string, int, int, int)
0xe1a: Stack[-4] = "bracelet"
0xe1b: Stack[-3] = (int) 1
0xe1c: Stack[-2] = (int) 2
0xe1d: Stack[-1] = (int) 2
0xe1e: Call2 0xbbf

0xe1f: Pop(4)
0xe20: Return(); Pop(0)

