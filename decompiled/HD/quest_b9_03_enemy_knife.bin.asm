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
	noaccess
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
	b9q03BonfireBurnedByFollower
	Attacking follower after he has burned bonefire.
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
	SetProperty (2 args)
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
	RumblePlay (2 args)
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
		EVENT_7 Op = 0x1d8 Vars = (int)
		EVENT_1 Op = 0x1ea Vars = (object)
		EVENT_6 Op = 0x1ff Vars = ()
	GTASK_2 Vars = (bool, object, bool, object) Params = 6
		EVENT_7 Op = 0x4e1 Vars = (int)
		EVENT_6 Op = 0x4f8 Vars = ()
		EVENT_1 Op = 0x54c Vars = (object)
		EVENT_2 Op = 0x55b Vars = (object)
		EVENT_10 Op = 0x5e1 Vars = (object)
		EVENT_41 Op = 0x5ec Vars = (object)
	GTASK_3 Vars = (bool, object, bool) Params = 2
		EVENT_6 Op = 0x627 Vars = ()
		EVENT_42 Op = 0x630 Vars = (object, string)
		EVENT_1 Op = 0x63b Vars = (object)
		EVENT_3 Op = 0x646 Vars = (object)
		EVENT_17 Op = 0x651 Vars = (object)
		EVENT_7 Op = 0x65e Vars = (int)
		EVENT_10 Op = 0x6e4 Vars = (object)
		EVENT_41 Op = 0x6ef Vars = (object)
	GTASK_4  Params = 0
		EVENT_6 Op = 0x707 Vars = ()
		EVENT_42 Op = 0x70f Vars = (object, string)
		EVENT_1 Op = 0x71a Vars = (object)
		EVENT_3 Op = 0x724 Vars = (object)
		EVENT_17 Op = 0x72e Vars = (object)
	GTASK_5 Vars = (bool) Params = 4
		EVENT_6 Op = 0x7a0 Vars = ()
		EVENT_42 Op = 0x7a8 Vars = (object, string)
		EVENT_1 Op = 0x7b3 Vars = (object)
		EVENT_3 Op = 0x7bd Vars = (object)
		EVENT_17 Op = 0x7c7 Vars = (object)
		EVENT_7 Op = 0x83c Vars = (int)
		EVENT_10 Op = 0x84d Vars = (object)
		EVENT_41 Op = 0x858 Vars = (object)
	GTASK_6 Vars = (bool) Params = 1
		EVENT_42 Op = 0x87c Vars = (object, string)
		EVENT_1 Op = 0x887 Vars = (object)
		EVENT_3 Op = 0x891 Vars = (object)
		EVENT_17 Op = 0x89b Vars = (object)
		EVENT_6 Op = 0x8b7 Vars = ()
		EVENT_7 Op = 0x928 Vars = (int)
		EVENT_10 Op = 0x939 Vars = (object)
		EVENT_41 Op = 0x944 Vars = (object)
	GTASK_7 Vars = (bool) Params = 1
		EVENT_6 Op = 0x960 Vars = ()
		EVENT_42 Op = 0x969 Vars = (object, string)
		EVENT_1 Op = 0x975 Vars = (object)
		EVENT_3 Op = 0x980 Vars = (object)
		EVENT_17 Op = 0x98b Vars = (object)
	GTASK_8  Params = 1
		EVENT_6 Op = 0xa24 Vars = ()
		EVENT_0 Op = 0xa3b Vars = (object)
		EVENT_22 Op = 0xaba Vars = (object, int, float, float)
		EVENT_16 Op = 0xabc Vars = (object, string)
		EVENT_41 Op = 0xabe Vars = (object)
	GTASK_9  Params = 0
		EVENT_26 Op = 0xad2 Vars = (string)
		EVENT_5 Op = 0xade Vars = ()

Events:
EVENT_26 Op = 0xcfa Vars = (string)
EVENT_22 Op = 0xeb9 Vars = (object, int, float, float)
EVENT_43 Op = 0xec1 Vars = (object, int, float, float, cvector, cvector)
EVENT_16 Op = 0xecb Vars = (object, string)
EVENT_41 Op = 0xed8 Vars = (object)

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
0xa: Call2 0xdbd

0xb: Pop(0)
0xc: Pop(1); Push((bool) Stack[-1] == 0)
0xd: IF (Stack[-1] == 0) GOTO 0x17; Pop(1)

0xe: Push("FSM Init failed")
0xf: @ Trace(Stack[-1])
0x10: Pop(1)
0x11: PushEmpty(object)
0x12: Call2 0xc60

0x13: Pop(0)
0x14: @ RemoveActor(Stack[-1])
0x15: Pop(1)
0x16: Return(); Pop(22)

0x17: Push("noaccess")
0x18: Push((int) 0)
0x19: @ SetProperty(Stack[-2], Stack[-1])
0x1a: Pop(2)
0x1b: @ GetPosition(Stack[-0])
0x1c: Pop(0)
0x1d: @ GetDirection(Stack[-1])
0x1e: Pop(0)
0x1f: Push(GlobalVars[3])
0x20: Stack[-1] = (int) 0
0x21: GlobalVars[3] = Stack[-1]; Pop(1)
0x22: Push(GlobalVars[4])
0x23: Stack[-1] = (int) 2
0x24: GlobalVars[4] = Stack[-1]; Pop(1)
0x25: Push((bool) 1)
0x26: IF (Stack[-1] == 0) GOTO 0x1bc; Pop(1)

0x27: Push((int) 0)
0x28: Push(GlobalVars[3])
0x29: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x2a: IF (Stack[-1] == 0) GOTO 0x35; Pop(1)

0x2b: PushEmpty()
0x2c: Push(-0, 0); TaskCall(9)
0x2d: Call2 0xac0

0x2e: Pop(-0, 0); TaskReturn
0x2f: Pop(0)
0x30: PushEmpty(bool, int)
0x31: Stack[-1] = (int) 2
0x32: Call2 0xe11

0x33: Pop(2)
0x34: GOTO 0x1b9

0x35: Push((int) 7)
0x36: Push(GlobalVars[3])
0x37: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x38: IF (Stack[-1] == 0) GOTO 0x54; Pop(1)

0x39: PushEmpty(object)
0x3a: Push(GlobalVars[8])
0x3b: Stack[-2] = Stack[-1]
0x3c: Pop(1)
0x3d: Push(-1, 8); TaskCall(1)
0x3e: Call2 0x1bd

0x3f: Pop(-1, 8); TaskReturn
0x40: Pop(1)
0x41: Push((int) 7)
0x42: Push(GlobalVars[3])
0x43: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x44: IF (Stack[-1] == 0) GOTO 0x53; Pop(1)

0x45: PushEmpty(int)
0x46: Stack[-1] = (int) 1
0x47: Push(-1, 1); TaskCall(7)
0x48: Call2 0x951

0x49: Pop(-1, 1); TaskReturn
0x4a: Pop(1)
0x4b: Push((int) 7)
0x4c: Push(GlobalVars[3])
0x4d: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x4e: IF (Stack[-1] == 0) GOTO 0x53; Pop(1)

0x4f: PushEmpty(bool, int)
0x50: Stack[-1] = (int) 2
0x51: Call2 0xe11

0x52: Pop(2)
0x53: GOTO 0x1b9

0x54: Push((int) 6)
0x55: Push(GlobalVars[3])
0x56: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x57: IF (Stack[-1] == 0) GOTO 0x7e; Pop(1)

0x58: PushEmpty(int)
0x59: Stack[-1] = (int) 1
0x5a: Push(-1, 1); TaskCall(7)
0x5b: Call2 0x951

0x5c: Pop(-1, 1); TaskReturn
0x5d: Pop(1)
0x5e: Push((int) 6)
0x5f: Push(GlobalVars[3])
0x60: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x61: IF (Stack[-1] == 0) GOTO 0x7d; Pop(1)

0x62: PushEmpty(object, float)
0x63: Push(GlobalVars[7])
0x64: Stack[-3] = Stack[-1]
0x65: Pop(1)
0x66: Stack[-1] = (int) 8
0x67: Push(-2, 3); TaskCall(3)
0x68: Call2 0x600

0x69: Pop(-2, 3); TaskReturn
0x6a: Pop(2)
0x6b: Push((int) 6)
0x6c: Push(GlobalVars[3])
0x6d: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x6e: IF (Stack[-1] == 0) GOTO 0x7d; Pop(1)

0x6f: PushEmpty(int)
0x70: Stack[-1] = (int) 1
0x71: Push(-1, 1); TaskCall(7)
0x72: Call2 0x951

0x73: Pop(-1, 1); TaskReturn
0x74: Pop(1)
0x75: Push((int) 6)
0x76: Push(GlobalVars[3])
0x77: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x78: IF (Stack[-1] == 0) GOTO 0x7d; Pop(1)

0x79: PushEmpty(bool, int)
0x7a: Stack[-1] = (int) 2
0x7b: Call2 0xe11

0x7c: Pop(2)
0x7d: GOTO 0x1b9

0x7e: Push((int) 1)
0x7f: Push(GlobalVars[3])
0x80: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x81: IF (Stack[-1] == 0) GOTO 0xad; Pop(1)

0x82: PushEmpty(bool)
0x83: Stack[-1] = (bool) 1
0x84: Call2 0xe92

0x85: Pop(1)
0x86: PushEmpty(bool)
0x87: Push(-1, 1); TaskCall(6)
0x88: Call2 0x865

0x89: Pop(-1, 1); TaskReturn
0x8a: Pop(1)
0x8b: Push((int) 1)
0x8c: Push(GlobalVars[3])
0x8d: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x8e: IF (Stack[-1] == 0) GOTO 0xa8; Pop(1)

0x8f: PushEmpty()
0x90: Push(-0, 0); TaskCall(4)
0x91: Call2 0x703

0x92: Pop(-0, 0); TaskReturn
0x93: Pop(0)
0x94: Push((int) 1)
0x95: Push(GlobalVars[3])
0x96: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x97: IF (Stack[-1] == 0) GOTO 0xa8; Pop(1)

0x98: PushEmpty(bool, cvector, cvector, bool)
0x99: Stack[-3] = Stack[0 + Tasks[-1].StackPointer]
0x9a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x9b: Stack[-1] = (bool) 0
0x9c: Push(-4, 1); TaskCall(5)
0x9d: Call2 0x790

0x9e: Pop(-4, 1); TaskReturn
0x9f: Pop(4)
0xa0: Push((int) 1)
0xa1: Push(GlobalVars[3])
0xa2: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xa3: IF (Stack[-1] == 0) GOTO 0xa8; Pop(1)

0xa4: PushEmpty(bool, int)
0xa5: Stack[-1] = (int) 2
0xa6: Call2 0xe11

0xa7: Pop(2)
0xa8: PushEmpty(bool)
0xa9: Stack[-1] = (bool) 0
0xaa: Call2 0xe92

0xab: Pop(1)
0xac: GOTO 0x1b9

0xad: Push((int) 2)
0xae: Push(GlobalVars[3])
0xaf: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xb0: IF (Stack[-1] == 0) GOTO 0xe4; Pop(1)

0xb1: PushEmpty(bool)
0xb2: Call2 0x0

0xb3: Pop(0)
0xb4: Pop(1); Push((bool) Stack[-1] == 0)
0xb5: IF (Stack[-1] == 0) GOTO 0xbe; Pop(1)

0xb6: PushEmpty(bool, cvector, cvector, bool)
0xb7: Stack[-3] = Stack[0 + Tasks[-1].StackPointer]
0xb8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb9: Stack[-1] = (bool) 0
0xba: Push(-4, 1); TaskCall(5)
0xbb: Call2 0x790

0xbc: Pop(-4, 1); TaskReturn
0xbd: Pop(4)
0xbe: Push((int) 2)
0xbf: Push(GlobalVars[3])
0xc0: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xc1: IF (Stack[-1] == 0) GOTO 0xe3; Pop(1)

0xc2: PushEmpty()
0xc3: Push(-0, 0); TaskCall(4)
0xc4: Call2 0x703

0xc5: Pop(-0, 0); TaskReturn
0xc6: Pop(0)
0xc7: Push((int) 2)
0xc8: Push(GlobalVars[3])
0xc9: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xca: IF (Stack[-1] == 0) GOTO 0xe3; Pop(1)

0xcb: PushEmpty(bool)
0xcc: Call2 0xea0

0xcd: Pop(0)
0xce: Pop(1); Push((bool) Stack[-1] == 0)
0xcf: IF (Stack[-1] == 0) GOTO 0xd5; Pop(1)

0xd0: PushEmpty(bool, int)
0xd1: Stack[-1] = (int) 3
0xd2: Call2 0xe11

0xd3: Pop(2)
0xd4: GOTO 0xe3

0xd5: PushEmpty(bool, float)
0xd6: Stack[-1] = (float) 0.5
0xd7: Call2 0xc82

0xd8: Pop(1)
0xd9: IF (Stack[-1] == 0) GOTO 0xe3; Pop(1)

0xda: PushEmpty(bool)
0xdb: Call2 0xe87

0xdc: Pop(0)
0xdd: Pop(1); Push((bool) Stack[-1] == 0)
0xde: IF (Stack[-1] == 0) GOTO 0xe3; Pop(1)

0xdf: PushEmpty(bool, int)
0xe0: Stack[-1] = (int) 1
0xe1: Call2 0xe11

0xe2: Pop(2)
0xe3: GOTO 0x1b9

0xe4: Push((int) 3)
0xe5: Push(GlobalVars[3])
0xe6: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xe7: IF (Stack[-1] == 0) GOTO 0x138; Pop(1)

0xe8: PushEmpty(bool)
0xe9: Stack[-1] = (bool) 1
0xea: Call2 0xeab

0xeb: Pop(1)
0xec: @ GetMainOutdoorScene(Stack[-11])
0xed: Pop(0)
0xee: Push(GlobalVars[2])
0xef: @ irand(Stack[-11], Stack[-1])
0xf0: Pop(1)
0xf1: PushEmpty(bool, float)
0xf2: Stack[-1] = (float) 0.5
0xf3: Call2 0xc82

0xf4: Stack[-11] = Stack[-2]
0xf5: Pop(2)
0xf6: Stack[-8] = (int) 0
0xf7: Push(GlobalVars[2])
0xf8: Pop(1); Push((bool) Stack[-9] < Stack[-1])
0xf9: IF (Stack[-1] == 0) GOTO 0x12a; Pop(1)

0xfa: Pop(0); Push(Stack[-8] + Stack[-10]);
0xfb: Push(GlobalVars[2])
0xfc: Stack[-6] = Stack[-2] % Stack[-1]; Pop(2);
0xfd: Push(Stack[-9])
0xfe: IF (Stack[-1] == 0) GOTO 0x103; Pop(1)

0xff: Push(GlobalVars[2])
0x100: Push((int) 1)
0x101: Pop(2); Push(Stack[-2] - Stack[-1]);
0x102: Stack[-5] = Stack[-1] - Stack[-5]; Pop(1);
0x103: Push("pt_b9q03_bonfire")
0x104: Push(GlobalVars[1])
0x105: Push((int) 1)
0x106: Pop(2); Push(Stack[-2] + Stack[-1]);
0x107: Pop(2); Push(Stack[-2] + Stack[-1]);
0x108: Push("_patrol")
0x109: Pop(2); Push(Stack[-2] + Stack[-1]);
0x10a: Push((int) 1)
0x10b: Pop(1); Push(Stack[-6] + Stack[-1]);
0x10c: Pop(2); Push(Stack[-2] + Stack[-1]);
0x10d: @@ GetLocator(Stack[-1], Stack[-8], Stack[-7], Stack[-6])
0x10e: Pop(1)
0x10f: PushEmpty(bool, cvector, cvector, bool)
0x110: Stack[-3] = Stack[-10]
0x111: Stack[-2] = Stack[-9]
0x112: Stack[-1] = (bool) 0
0x113: Push(-4, 1); TaskCall(5)
0x114: Call2 0x790

0x115: Pop(-4, 1); TaskReturn
0x116: Pop(4)
0x117: Push((int) 3)
0x118: Push(GlobalVars[3])
0x119: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x11a: IF (Stack[-1] == 0) GOTO 0x11c; Pop(1)

0x11b: GOTO 0x12a

0x11c: PushEmpty(int)
0x11d: Stack[-1] = (int) 1
0x11e: Push(-1, 1); TaskCall(7)
0x11f: Call2 0x951

0x120: Pop(-1, 1); TaskReturn
0x121: Pop(1)
0x122: Push((int) 3)
0x123: Push(GlobalVars[3])
0x124: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x125: IF (Stack[-1] == 0) GOTO 0x127; Pop(1)

0x126: GOTO 0x12a

0x127: Push((int) 1)
0x128: Stack[-9] = Stack[-9] + Stack[-1]; Pop(1);
0x129: GOTO 0xf7

0x12a: Push((int) 3)
0x12b: Push(GlobalVars[3])
0x12c: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x12d: IF (Stack[-1] == 0) GOTO 0x132; Pop(1)

0x12e: PushEmpty(bool, int)
0x12f: Stack[-1] = (int) 2
0x130: Call2 0xe11

0x131: Pop(2)
0x132: PushEmpty(bool)
0x133: Stack[-1] = (bool) 0
0x134: Call2 0xeab

0x135: Pop(1)
0x136: Stack[-11] = 0
0x137: GOTO 0x1b9

0x138: Push((int) 4)
0x139: Push(GlobalVars[3])
0x13a: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x13b: IF (Stack[-1] == 0) GOTO 0x18c; Pop(1)

0x13c: Push(GlobalVars[5])
0x13d: @@ GetPosition(Stack[-4])
0x13e: Pop(1)
0x13f: Push(GlobalVars[5])
0x140: @@ GetDirection(Stack[-3])
0x141: Pop(1)
0x142: PushEmpty(bool, cvector, cvector, bool)
0x143: Stack[-3] = Stack[-7]
0x144: Stack[-2] = -Stack[-6]; Pop(0);
0x145: Stack[-1] = (bool) 1
0x146: Push(-4, 1); TaskCall(5)
0x147: Call2 0x790

0x148: Pop(-4, 1); TaskReturn
0x149: Pop(4)
0x14a: Push((int) 4)
0x14b: Push(GlobalVars[3])
0x14c: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x14d: IF (Stack[-1] == 0) GOTO 0x18b; Pop(1)

0x14e: PushEmpty(int)
0x14f: Stack[-1] = (int) 2
0x150: Push(-1, 1); TaskCall(7)
0x151: Call2 0x951

0x152: Pop(-1, 1); TaskReturn
0x153: Pop(1)
0x154: Push((int) 4)
0x155: Push(GlobalVars[3])
0x156: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x157: IF (Stack[-1] == 0) GOTO 0x18b; Pop(1)

0x158: PushEmpty(bool, cvector, cvector, bool)
0x159: Stack[-3] = Stack[0 + Tasks[-1].StackPointer]
0x15a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x15b: Stack[-1] = (bool) 1
0x15c: Push(-4, 1); TaskCall(5)
0x15d: Call2 0x790

0x15e: Pop(-4, 1); TaskReturn
0x15f: Pop(4)
0x160: Push((int) 4)
0x161: Push(GlobalVars[3])
0x162: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x163: IF (Stack[-1] == 0) GOTO 0x18b; Pop(1)

0x164: @ GetMainOutdoorScene(Stack[-1])
0x165: Pop(0)
0x166: Push("b9q03_corpse")
0x167: Push(GlobalVars[1])
0x168: Push((int) 1)
0x169: Pop(2); Push(Stack[-2] + Stack[-1]);
0x16a: Pop(2); Push(Stack[-2] + Stack[-1]);
0x16b: PushEmpty(object)
0x16c: Call2 0xc60

0x16d: Pop(0)
0x16e: @ BroadcastMessage(Stack[-2], Stack[-1], Stack[-3])
0x16f: Pop(2)
0x170: PushEmpty(bool, cvector, cvector, bool)
0x171: Stack[-3] = Stack[-7]
0x172: Stack[-2] = Stack[-7]
0x173: Stack[-1] = (bool) 1
0x174: Push(-4, 1); TaskCall(5)
0x175: Call2 0x790

0x176: Pop(-4, 1); TaskReturn
0x177: Pop(4)
0x178: Push((int) 4)
0x179: Push(GlobalVars[3])
0x17a: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x17b: IF (Stack[-1] == 0) GOTO 0x18a; Pop(1)

0x17c: PushEmpty(int)
0x17d: Stack[-1] = (int) 3
0x17e: Push(-1, 1); TaskCall(7)
0x17f: Call2 0x951

0x180: Pop(-1, 1); TaskReturn
0x181: Pop(1)
0x182: Push((int) 4)
0x183: Push(GlobalVars[3])
0x184: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x185: IF (Stack[-1] == 0) GOTO 0x18a; Pop(1)

0x186: PushEmpty(bool, int)
0x187: Stack[-1] = (int) 2
0x188: Call2 0xe11

0x189: Pop(2)
0x18a: Stack[-1] = 0
0x18b: GOTO 0x1b9

0x18c: Push((int) 5)
0x18d: Push(GlobalVars[3])
0x18e: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x18f: IF (Stack[-1] == 0) GOTO 0x1b6; Pop(1)

0x190: PushEmpty(int)
0x191: Stack[-1] = (int) 1
0x192: Push(-1, 1); TaskCall(7)
0x193: Call2 0x951

0x194: Pop(-1, 1); TaskReturn
0x195: Pop(1)
0x196: Push((int) 5)
0x197: Push(GlobalVars[3])
0x198: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x199: IF (Stack[-1] == 0) GOTO 0x1b5; Pop(1)

0x19a: PushEmpty(object, float)
0x19b: Push(GlobalVars[6])
0x19c: Stack[-3] = Stack[-1]
0x19d: Pop(1)
0x19e: Stack[-1] = (int) 8
0x19f: Push(-2, 3); TaskCall(3)
0x1a0: Call2 0x600

0x1a1: Pop(-2, 3); TaskReturn
0x1a2: Pop(2)
0x1a3: Push((int) 5)
0x1a4: Push(GlobalVars[3])
0x1a5: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1a6: IF (Stack[-1] == 0) GOTO 0x1b5; Pop(1)

0x1a7: PushEmpty(int)
0x1a8: Stack[-1] = (int) 2
0x1a9: Push(-1, 1); TaskCall(7)
0x1aa: Call2 0x951

0x1ab: Pop(-1, 1); TaskReturn
0x1ac: Pop(1)
0x1ad: Push((int) 5)
0x1ae: Push(GlobalVars[3])
0x1af: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1b0: IF (Stack[-1] == 0) GOTO 0x1b5; Pop(1)

0x1b1: PushEmpty(bool, int)
0x1b2: Stack[-1] = (int) 2
0x1b3: Call2 0xe11

0x1b4: Pop(2)
0x1b5: GOTO 0x1b9

0x1b6: Push("Unknown FSM state")
0x1b7: @ Trace(Stack[-1])
0x1b8: Pop(1)
0x1b9: @ sync()
0x1ba: Pop(0)
0x1bb: GOTO 0x25

0x1bc: Return(); Pop(22)

0x1bd: PushEmpty()
0x1be: Stack[7 + Tasks[-1].StackPointer] = Stack[-1]
0x1bf: Push((int) 1)
0x1c0: Push((int) 1)
0x1c1: @ SetTimer(Stack[-2], Stack[-1])
0x1c2: Pop(2)
0x1c3: PushEmpty(object, bool, float)
0x1c4: Stack[-3] = Stack[-4]
0x1c5: Stack[-2] = (bool) 0
0x1c6: Stack[-1] = (float) 150.0
0x1c7: Call2 0x207

0x1c8: Pop(3)
0x1c9: Push((int) 1)
0x1ca: @ KillTimer(Stack[-1])
0x1cb: Pop(1)
0x1cc: Return(); Pop(0)

0x1cd: PushEmpty()
0x1ce: Stack[-3] = (float) 0.1
0x1cf: Return(); Pop(0)

0x1d0: PushEmpty()
0x1d1: Stack[-3] = (int) 0
0x1d2: Return(); Pop(0)

0x1d3: PushEmpty(int)
0x1d4: Call2 0xee0

0x1d5: Stack[-2] = Stack[-1]
0x1d6: Pop(1)
0x1d7: Return(); Pop(0)

0x1d8: PushEmpty(object, object)
0x1d9: Push((int) 1)
0x1da: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1db: IF (Stack[-1] == 0) GOTO 0x1e9; Pop(1)

0x1dc: @ GetMainOutdoorScene(Stack[-1])
0x1dd: Pop(0)
0x1de: Push("b9q03_helpme")
0x1df: Push(GlobalVars[1])
0x1e0: Push((int) 1)
0x1e1: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1e2: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1e3: @ BroadcastMessage(Stack[-1], Stack[-7], Stack[-2])
0x1e4: Pop(1)
0x1e5: Push("helpme timer")
0x1e6: @ Trace(Stack[-1])
0x1e7: Pop(1)
0x1e8: Stack[-1] = 0
0x1e9: Return(); Pop(2)

0x1ea: PushEmpty()
0x1eb: PushEmpty(bool)
0x1ec: Stack[-1] = (bool) 0
0x1ed: PushEmpty(bool, object)
0x1ee: Stack[-1] = Stack[-4]
0x1ef: Call2 0xaf8

0x1f0: Pop(1)
0x1f1: IF (Stack[-1] == 0) GOTO 0x1f6; Pop(1)

0x1f2: Push(GlobalVars[8])
0x1f3: Pop(1); Push((bool) Stack[-1] != Stack[-3])
0x1f4: IF (Stack[-1] == 0) GOTO 0x1f6; Pop(1)

0x1f5: Stack[-1] = (bool) 1
0x1f6: IF (Stack[-1] == 0) GOTO 0x1fe; Pop(1)

0x1f7: PushEmpty()
0x1f8: Call2 0x301

0x1f9: Pop(0)
0x1fa: PushEmpty(bool, object)
0x1fb: Stack[-1] = Stack[-3]
0x1fc: Call2 0xe75

0x1fd: Pop(2)
0x1fe: Return(); Pop(0)

0x1ff: PushEmpty()
0x200: Call2 0x301

0x201: Pop(0)
0x202: PushEmpty(bool, int)
0x203: Stack[-1] = (int) 0
0x204: Call2 0xe11

0x205: Pop(2)
0x206: Return(); Pop(0)

0x207: PushEmpty(float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float, float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float)
0x208: PushEmpty()
0x209: Call2 0x309

0x20a: Pop(0)
0x20b: Stack[6 + Tasks[-1].StackPointer] = (int)0
0x20c: Push("@GetAttackDistance")
0x20d: Push((int) 1)
0x20e: Pop(2); Push(IsFuncExist(Stack[-27], Stack[-2], Stack[-1]))
0x20f: IF (Stack[-1] == 0) GOTO 0x215; Pop(1)

0x210: @@ GetAttackDistance(Stack[-11])
0x211: Pop(0)
0x212: Push((int) 50)
0x213: Stack[-12] = Stack[-12] + Stack[-1]; Pop(1);
0x214: GOTO 0x216

0x215: Stack[-11] = Stack[-23]
0x216: Push((int) 150)
0x217: Pop(1); Push((bool) Stack[-12] >= Stack[-1])
0x218: IF (Stack[-1] == 0) GOTO 0x21a; Pop(1)

0x219: Stack[-11] = (int) 150
0x21a: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x21b: Stack[0 + Tasks[-1].StackPointer] = Stack[-25]
0x21c: @ IsPlayerActor(Stack[-0], Stack[-8])
0x21d: Pop(0)
0x21e: Push(Stack[-8])
0x21f: IF (Stack[-1] == 0) GOTO 0x223; Pop(1)

0x220: Push("attack")
0x221: @ PlayGlobalMusic(Stack[-1])
0x222: Pop(1)
0x223: Push(Stack[-24])
0x224: IF (Stack[-1] == 0) GOTO 0x227; Pop(1)

0x225: Stack[-7] = (bool) 0
0x226: GOTO 0x228

0x227: Stack[-7] = (bool) 1
0x228: Push((float)300.0)
0x229: Stack[-7] = Stack[-1] + Stack[-12]; Pop(1);
0x22a: PushEmpty(bool)
0x22b: Stack[-1] = (bool) 0
0x22c: PushEmpty(bool)
0x22d: Stack[-1] = (bool) 0
0x22e: PushEmpty(bool, object)
0x22f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x230: Call2 0xb7b

0x231: Pop(1)
0x232: IF (Stack[-1] == 0) GOTO 0x236; Pop(1)

0x233: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x234: IF (Stack[-1] == 0) GOTO 0x236; Pop(1)

0x235: Stack[-1] = (bool) 1
0x236: IF (Stack[-1] == 0) GOTO 0x23a; Pop(1)

0x237: Pop(0); Push((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x238: IF (Stack[-1] == 0) GOTO 0x23a; Pop(1)

0x239: Stack[-1] = (bool) 1
0x23a: IF (Stack[-1] == 0) GOTO 0x2ea; Pop(1)

0x23b: PushEmpty()
0x23c: Call2 0x4bb

0x23d: Pop(0)
0x23e: @@ GetPFPosition(Stack[-10])
0x23f: Pop(0)
0x240: @ GetPFPosition(Stack[-9])
0x241: Pop(0)
0x242: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0x243: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x244: Pop(0); Push(Stack[-6] * Stack[-6]);
0x245: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0x246: IF (Stack[-1] == 0) GOTO 0x257; Pop(1)

0x247: PushEmpty(bool, object, float, float, bool, bool)
0x248: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0x249: Stack[-4] = Stack[-17]
0x24a: Stack[-3] = (float) 2000.0
0x24b: Stack[-2] = (bool) 1
0x24c: Stack[-1] = (bool) 0
0x24d: Push(-6, 4); TaskCall(2)
0x24e: Call2 0x4cd

0x24f: Pop(-6, 4); TaskReturn
0x250: Pop(5)
0x251: Pop(1); Push((bool) Stack[-1] == 0)
0x252: IF (Stack[-1] == 0) GOTO 0x255; Pop(1)

0x253: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x254: GOTO 0x2ea

0x255: Stack[-7] = (bool) 0
0x256: GOTO 0x2e9

0x257: Pop(0); Push(Stack[-23] * Stack[-23]);
0x258: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0x259: IF (Stack[-1] == 0) GOTO 0x2e1; Pop(1)

0x25a: @@ GetPFPosition(Stack[-3])
0x25b: Pop(0)
0x25c: @ CanReachByPF(Stack[-2], Stack[-3])
0x25d: Pop(0)
0x25e: Pop(0); Push((bool) Stack[-2] == 0)
0x25f: IF (Stack[-1] == 0) GOTO 0x270; Pop(1)

0x260: PushEmpty(bool, object, float, float, bool, bool)
0x261: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0x262: Stack[-4] = Stack[-17]
0x263: Stack[-3] = (float) 2000.0
0x264: Stack[-2] = (bool) 1
0x265: Stack[-1] = (bool) 0
0x266: Push(-6, 4); TaskCall(2)
0x267: Call2 0x4cd

0x268: Pop(-6, 4); TaskReturn
0x269: Pop(5)
0x26a: Pop(1); Push((bool) Stack[-1] == 0)
0x26b: IF (Stack[-1] == 0) GOTO 0x26e; Pop(1)

0x26c: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x26d: GOTO 0x2ea

0x26e: Stack[-7] = (bool) 0
0x26f: GOTO 0x22a

0x270: Pop(0); Push((bool) Stack[-7] == 0)
0x271: IF (Stack[-1] == 0) GOTO 0x28f; Pop(1)

0x272: PushEmpty(object)
0x273: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x274: Call2 0xc11

0x275: Pop(1)
0x276: Push("all")
0x277: Push("attack_on")
0x278: @ PlayAnimation(Stack[-2], Stack[-1])
0x279: Pop(2)
0x27a: @ WaitForAnimEnd()
0x27b: Pop(0)
0x27c: PushEmpty()
0x27d: Call2 0x4bb

0x27e: Pop(0)
0x27f: @ StopAsync()
0x280: Pop(0)
0x281: Stack[-7] = (bool) 1
0x282: PushEmpty(bool)
0x283: Stack[-1] = (bool) 1
0x284: PushEmpty(bool, object)
0x285: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x286: Call2 0xb7b

0x287: Pop(1)
0x288: Pop(1); Push((bool) Stack[-1] == 0)
0x289: IF (Stack[-1] == 0) GOTO 0x28d; Pop(1)

0x28a: Push( Stack[4 + Tasks[-1].StackPointer] )
0x28b: IF (Stack[-1] == 0) GOTO 0x28d; Pop(1)

0x28c: Stack[-1] = (bool) 0
0x28d: IF (Stack[-1] == 0) GOTO 0x28f; Pop(1)

0x28e: GOTO 0x2ea

0x28f: @ rand(Stack[-1])
0x290: Pop(0)
0x291: PushEmpty(bool)
0x292: Stack[-1] = (bool) 1
0x293: Push((float)0.6)
0x294: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x295: IF (Stack[-1] == 0) GOTO 0x29b; Pop(1)

0x296: PushEmpty(bool)
0x297: Call2 0x490

0x298: Pop(0)
0x299: IF (Stack[-1] == 0) GOTO 0x29b; Pop(1)

0x29a: Stack[-1] = (bool) 0
0x29b: IF (Stack[-1] == 0) GOTO 0x2ac; Pop(1)

0x29c: @ Face(Stack[-0])
0x29d: Pop(0)
0x29e: PushEmpty()
0x29f: Call2 0x4c0

0x2a0: Pop(0)
0x2a1: Push("all")
0x2a2: Push("attack_stay")
0x2a3: @ PlayAnimation(Stack[-2], Stack[-1])
0x2a4: Pop(2)
0x2a5: PushEmpty(bool, float)
0x2a6: Stack[-1] = Stack[-25]
0x2a7: Call2 0x400

0x2a8: Pop(2)
0x2a9: @ StopAsync()
0x2aa: Pop(0)
0x2ab: GOTO 0x2e0

0x2ac: @ Face(Stack[-0])
0x2ad: Pop(0)
0x2ae: Push("all")
0x2af: Push("fjump")
0x2b0: @ PlayAnimation(Stack[-2], Stack[-1])
0x2b1: Pop(2)
0x2b2: @ WaitForAnimEnd()
0x2b3: Pop(0)
0x2b4: PushEmpty()
0x2b5: Call2 0x4bb

0x2b6: Pop(0)
0x2b7: Push(CVector(0.0, 0.0, 0.0))
0x2b8: @ SetSpeed(Stack[-1])
0x2b9: Pop(1)
0x2ba: @ Stop()
0x2bb: Pop(0)
0x2bc: @ StopAsync()
0x2bd: Pop(0)
0x2be: PushEmpty(bool)
0x2bf: Call2 0x490

0x2c0: Pop(0)
0x2c1: Pop(1); Push((bool) Stack[-1] == 0)
0x2c2: IF (Stack[-1] == 0) GOTO 0x2e0; Pop(1)

0x2c3: PushEmpty(bool)
0x2c4: Stack[-1] = (bool) 1
0x2c5: PushEmpty(bool, object)
0x2c6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2c7: Call2 0xb7b

0x2c8: Pop(1)
0x2c9: Pop(1); Push((bool) Stack[-1] == 0)
0x2ca: IF (Stack[-1] == 0) GOTO 0x2ce; Pop(1)

0x2cb: Push( Stack[4 + Tasks[-1].StackPointer] )
0x2cc: IF (Stack[-1] == 0) GOTO 0x2ce; Pop(1)

0x2cd: Stack[-1] = (bool) 0
0x2ce: IF (Stack[-1] == 0) GOTO 0x2d0; Pop(1)

0x2cf: GOTO 0x2ea

0x2d0: @@ GetPFPosition(Stack[-10])
0x2d1: Pop(0)
0x2d2: @ GetPFPosition(Stack[-9])
0x2d3: Pop(0)
0x2d4: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0x2d5: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x2d6: Pop(0); Push(Stack[-23] * Stack[-23]);
0x2d7: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x2d8: IF (Stack[-1] == 0) GOTO 0x2e0; Pop(1)

0x2d9: PushEmpty(bool, float)
0x2da: Stack[-1] = Stack[-25]
0x2db: Call2 0x353

0x2dc: Pop(1)
0x2dd: Pop(1); Push((bool) Stack[-1] == 0)
0x2de: IF (Stack[-1] == 0) GOTO 0x2e0; Pop(1)

0x2df: GOTO 0x2ea

0x2e0: GOTO 0x2e9

0x2e1: PushEmpty(bool, float)
0x2e2: Stack[-1] = Stack[-25]
0x2e3: Call2 0x353

0x2e4: Pop(1)
0x2e5: Pop(1); Push((bool) Stack[-1] == 0)
0x2e6: IF (Stack[-1] == 0) GOTO 0x2e8; Pop(1)

0x2e7: GOTO 0x2ea

0x2e8: Stack[-7] = (bool) 1
0x2e9: GOTO 0x22a

0x2ea: @ WaitForAnimEnd()
0x2eb: Pop(0)
0x2ec: PushEmpty(bool)
0x2ed: Stack[-1] = (bool) 1
0x2ee: Push( Stack[3 + Tasks[-1].StackPointer] )
0x2ef: IF (Stack[-1] == 0) GOTO 0x2f3; Pop(1)

0x2f0: Push( Stack[4 + Tasks[-1].StackPointer] )
0x2f1: IF (Stack[-1] == 0) GOTO 0x2f3; Pop(1)

0x2f2: Stack[-1] = (bool) 0
0x2f3: IF (Stack[-1] == 0) GOTO 0x2f5; Pop(1)

0x2f4: Return(); Pop(22)

0x2f5: Push("all")
0x2f6: Push("attack_off")
0x2f7: @ PlayAnimation(Stack[-2], Stack[-1])
0x2f8: Pop(2)
0x2f9: @ WaitForAnimEnd()
0x2fa: Pop(0)
0x2fb: Push(Stack[-8])
0x2fc: IF (Stack[-1] == 0) GOTO 0x300; Pop(1)

0x2fd: Push((float)2.0)
0x2fe: @ Sleep(Stack[-1])
0x2ff: Pop(1)
0x300: Return(); Pop(22)

0x301: @ Stop()
0x302: Pop(0)
0x303: @ StopAnimation()
0x304: Pop(0)
0x305: @ StopGroup0()
0x306: Pop(0)
0x307: Stack[4 + Tasks[-1].StackPointer] = (bool)1
0x308: Return(); Pop(0)

0x309: PushEmpty(bool, bool, cvector, bool, bool, cvector)
0x30a: Stack[1 + Tasks[-1].StackPointer] = (int)0
0x30b: Push("all")
0x30c: Push("attack_begin")
0x30d: Push((int) 1)
0x30e: Pop(1); Push(Stack[1 + StackPtr] + Stack[-1]);
0x30f: Pop(2); Push(Stack[-2] + Stack[-1]);
0x310: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0x311: Pop(2)
0x312: Pop(0); Push((bool) Stack[-3] == 0)
0x313: IF (Stack[-1] == 0) GOTO 0x315; Pop(1)

0x314: GOTO 0x318

0x315: Push((int) 1)
0x316: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x317: GOTO 0x30b

0x318: Stack[2 + Tasks[-1].StackPointer] = (int)0
0x319: Push("attack")
0x31a: Push((int) 1)
0x31b: Pop(1); Push(Stack[2 + StackPtr] + Stack[-1]);
0x31c: Pop(2); Push(Stack[-2] + Stack[-1]);
0x31d: @ IsExisting3DSound(Stack[-3], Stack[-1])
0x31e: Pop(1)
0x31f: Pop(0); Push((bool) Stack[-2] == 0)
0x320: IF (Stack[-1] == 0) GOTO 0x322; Pop(1)

0x321: GOTO 0x325

0x322: Push((int) 1)
0x323: Stack[2 + Tasks[-1].StackPointer] = Stack[2 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x324: GOTO 0x319

0x325: Push("all")
0x326: Push("bjump")
0x327: @ GetAnimationOffset(Stack[-3], Stack[-2], Stack[-1])
0x328: Pop(2)
0x329: Push(CvectorIndex(Stack[-1], 2))
0x32a: Stack[5 + Tasks[-1].StackPointer] = -Stack[-1]; Pop(1);
0x32b: Return(); Pop(6)

0x32c: PushEmpty(object, float, float, object, float, float)
0x32d: Push((float)0.9)
0x32e: Pop(1); Push(Stack[-9] * Stack[-1]);
0x32f: @ GetVictim(Stack[-1], Stack[-4])
0x330: Pop(1)
0x331: @ ReportAttack(Stack[-0])
0x332: Pop(0)
0x333: Pop(0); Push((bool) Stack[-3] == Stack[0 + Tasks[-1].StackPointer])
0x334: IF (Stack[-1] == 0) GOTO 0x351; Pop(1)

0x335: PushEmpty(float, object, int)
0x336: Stack[-2] = Stack[-6]
0x337: Stack[-1] = Stack[-10]
0x338: Call2 0x1cd

0x339: Stack[-5] = Stack[-3]
0x33a: Pop(3)
0x33b: PushEmpty(float, object, float, int)
0x33c: Stack[-3] = Stack[-7]
0x33d: Stack[-2] = Stack[-6]
0x33e: PushEmpty(int, object, int)
0x33f: Stack[-2] = Stack[-10]
0x340: Stack[-1] = Stack[-14]
0x341: Call2 0x1d0

0x342: Stack[-4] = Stack[-3]
0x343: Pop(3)
0x344: Call2 0xb09

0x345: Stack[-5] = Stack[-4]
0x346: Pop(4)
0x347: PushEmpty(int)
0x348: Call2 0x1d3

0x349: Pop(0)
0x34a: @ ReportHit(Stack[-0], Stack[-1], Stack[-2], Stack[-3])
0x34b: Pop(1)
0x34c: PushEmpty(object, float)
0x34d: Stack[-2] = Stack[-5]
0x34e: Stack[-1] = Stack[-3]
0x34f: Call2 0x4c5

0x350: Pop(2)
0x351: Return(); Pop(6)

0x352: Stack[-3] = 0
0x353: PushEmpty(int, bool, int, string, int, bool, int, string)
0x354: PushEmpty()
0x355: Call2 0x4bb

0x356: Pop(0)
0x357: @ irand(Stack[-4], Stack[-1])
0x358: Pop(0)
0x359: Push((int) 1)
0x35a: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x35b: @ Face(Stack[-0])
0x35c: Pop(0)
0x35d: Push((bool) 1)
0x35e: @ SetAttackState(Stack[-1])
0x35f: Pop(1)
0x360: Push("all")
0x361: Push("attack_begin")
0x362: Pop(1); Push(Stack[-1] + Stack[-6]);
0x363: @ PlayAnimation(Stack[-2], Stack[-1])
0x364: Pop(2)
0x365: @ WaitForAnimEnd()
0x366: Pop(0)
0x367: PushEmpty()
0x368: Call2 0x49b

0x369: Pop(0)
0x36a: PushEmpty(bool)
0x36b: Stack[-1] = (bool) 1
0x36c: PushEmpty(bool, object)
0x36d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x36e: Call2 0xb7b

0x36f: Pop(1)
0x370: Pop(1); Push((bool) Stack[-1] == 0)
0x371: IF (Stack[-1] == 0) GOTO 0x375; Pop(1)

0x372: Push( Stack[4 + Tasks[-1].StackPointer] )
0x373: IF (Stack[-1] == 0) GOTO 0x375; Pop(1)

0x374: Stack[-1] = (bool) 0
0x375: IF (Stack[-1] == 0) GOTO 0x37a; Pop(1)

0x376: @ StopAsync()
0x377: Pop(0)
0x378: Stack[-10] = (bool) 0
0x379: Return(); Pop(8)

0x37a: PushEmpty(float, int)
0x37b: Stack[-2] = Stack[-11]
0x37c: Stack[-1] = Stack[-6]
0x37d: Call2 0x32c

0x37e: Pop(2)
0x37f: Push("all")
0x380: Push("attack_middle")
0x381: Pop(1); Push(Stack[-1] + Stack[-6]);
0x382: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0x383: Pop(2)
0x384: Push(Stack[-3])
0x385: IF (Stack[-1] == 0) GOTO 0x3d1; Pop(1)

0x386: Push("all")
0x387: Push("attack_middle")
0x388: Pop(1); Push(Stack[-1] + Stack[-6]);
0x389: @ PlayAnimation(Stack[-2], Stack[-1])
0x38a: Pop(2)
0x38b: @ WaitForAnimEnd()
0x38c: Pop(0)
0x38d: PushEmpty()
0x38e: Call2 0x4bb

0x38f: Pop(0)
0x390: PushEmpty(bool)
0x391: Stack[-1] = (bool) 1
0x392: PushEmpty(bool, object)
0x393: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x394: Call2 0xb7b

0x395: Pop(1)
0x396: Pop(1); Push((bool) Stack[-1] == 0)
0x397: IF (Stack[-1] == 0) GOTO 0x39b; Pop(1)

0x398: Push( Stack[4 + Tasks[-1].StackPointer] )
0x399: IF (Stack[-1] == 0) GOTO 0x39b; Pop(1)

0x39a: Stack[-1] = (bool) 0
0x39b: IF (Stack[-1] == 0) GOTO 0x3a0; Pop(1)

0x39c: @ StopAsync()
0x39d: Pop(0)
0x39e: Stack[-10] = (bool) 0
0x39f: Return(); Pop(8)

0x3a0: PushEmpty(float, int)
0x3a1: Stack[-2] = Stack[-11]
0x3a2: Stack[-1] = Stack[-6]
0x3a3: Call2 0x32c

0x3a4: Pop(2)
0x3a5: Stack[-2] = (int) 1
0x3a6: Push("attack_middle")
0x3a7: Pop(1); Push(Stack[-1] + Stack[-5]);
0x3a8: Push("_")
0x3a9: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3aa: Stack[-2] = Stack[-1] + Stack[-3]; Pop(1);
0x3ab: Push("all")
0x3ac: @ HasAnimation(Stack[-4], Stack[-1], Stack[-2])
0x3ad: Pop(1)
0x3ae: Pop(0); Push((bool) Stack[-3] == 0)
0x3af: IF (Stack[-1] == 0) GOTO 0x3b1; Pop(1)

0x3b0: GOTO 0x3d1

0x3b1: Push("all")
0x3b2: @ PlayAnimation(Stack[-1], Stack[-2])
0x3b3: Pop(1)
0x3b4: @ WaitForAnimEnd()
0x3b5: Pop(0)
0x3b6: PushEmpty()
0x3b7: Call2 0x4bb

0x3b8: Pop(0)
0x3b9: PushEmpty(bool)
0x3ba: Stack[-1] = (bool) 1
0x3bb: PushEmpty(bool, object)
0x3bc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3bd: Call2 0xb7b

0x3be: Pop(1)
0x3bf: Pop(1); Push((bool) Stack[-1] == 0)
0x3c0: IF (Stack[-1] == 0) GOTO 0x3c4; Pop(1)

0x3c1: Push( Stack[4 + Tasks[-1].StackPointer] )
0x3c2: IF (Stack[-1] == 0) GOTO 0x3c4; Pop(1)

0x3c3: Stack[-1] = (bool) 0
0x3c4: IF (Stack[-1] == 0) GOTO 0x3c9; Pop(1)

0x3c5: @ StopAsync()
0x3c6: Pop(0)
0x3c7: Stack[-10] = (bool) 0
0x3c8: Return(); Pop(8)

0x3c9: PushEmpty(float, int)
0x3ca: Stack[-2] = Stack[-11]
0x3cb: Stack[-1] = Stack[-6]
0x3cc: Call2 0x32c

0x3cd: Pop(2)
0x3ce: Push((int) 1)
0x3cf: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x3d0: GOTO 0x3a6

0x3d1: Push((bool) 0)
0x3d2: @ SetAttackState(Stack[-1])
0x3d3: Pop(1)
0x3d4: Push("all")
0x3d5: Push("attack_end")
0x3d6: Pop(1); Push(Stack[-1] + Stack[-6]);
0x3d7: @ PlayAnimation(Stack[-2], Stack[-1])
0x3d8: Pop(2)
0x3d9: PushEmpty(bool)
0x3da: Call2 0x4c7

0x3db: Pop(0)
0x3dc: IF (Stack[-1] == 0) GOTO 0x3e3; Pop(1)

0x3dd: PushEmpty(bool, float)
0x3de: Stack[-1] = (float) 0.75
0x3df: Call2 0x3e5

0x3e0: Pop(2)
0x3e1: @ StopAsync()
0x3e2: Pop(0)
0x3e3: Stack[-10] = (bool) 1
0x3e4: Return(); Pop(8)

0x3e5: PushEmpty(float, bool, float, bool)
0x3e6: @ rand(Stack[-2])
0x3e7: Pop(0)
0x3e8: Pop(0); Push((bool) Stack[-2] < Stack[-5])
0x3e9: IF (Stack[-1] == 0) GOTO 0x3f9; Pop(1)

0x3ea: @ IsAnimationPlaying(Stack[-1])
0x3eb: Pop(0)
0x3ec: Pop(0); Push((bool) Stack[-1] == 0)
0x3ed: IF (Stack[-1] == 0) GOTO 0x3ef; Pop(1)

0x3ee: GOTO 0x3f8

0x3ef: PushEmpty(bool)
0x3f0: Call2 0x453

0x3f1: Pop(0)
0x3f2: IF (Stack[-1] == 0) GOTO 0x3f5; Pop(1)

0x3f3: Stack[-6] = (bool) 1
0x3f4: Return(); Pop(4)

0x3f5: @ sync()
0x3f6: Pop(0)
0x3f7: GOTO 0x3ea

0x3f8: GOTO 0x3fe

0x3f9: @ WaitForAnimEnd()
0x3fa: Pop(0)
0x3fb: PushEmpty()
0x3fc: Call2 0x4bb

0x3fd: Pop(0)
0x3fe: Stack[-6] = (bool) 0
0x3ff: Return(); Pop(4)

0x400: PushEmpty(bool, cvector, cvector, cvector, float, bool, cvector, cvector, cvector, float)
0x401: @ IsAnimationPlaying(Stack[-5])
0x402: Pop(0)
0x403: Pop(0); Push((bool) Stack[-5] == 0)
0x404: IF (Stack[-1] == 0) GOTO 0x406; Pop(1)

0x405: GOTO 0x42c

0x406: PushEmpty(bool)
0x407: Call2 0x453

0x408: Pop(0)
0x409: IF (Stack[-1] == 0) GOTO 0x40c; Pop(1)

0x40a: Stack[-12] = (bool) 1
0x40b: Return(); Pop(10)

0x40c: PushEmpty(bool)
0x40d: Stack[-1] = (bool) 1
0x40e: PushEmpty(bool, object)
0x40f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x410: Call2 0xb7b

0x411: Pop(1)
0x412: Pop(1); Push((bool) Stack[-1] == 0)
0x413: IF (Stack[-1] == 0) GOTO 0x417; Pop(1)

0x414: Push( Stack[4 + Tasks[-1].StackPointer] )
0x415: IF (Stack[-1] == 0) GOTO 0x417; Pop(1)

0x416: Stack[-1] = (bool) 0
0x417: IF (Stack[-1] == 0) GOTO 0x41a; Pop(1)

0x418: Stack[-12] = (bool) 0
0x419: Return(); Pop(10)

0x41a: @@ GetPFPosition(Stack[-4])
0x41b: Pop(0)
0x41c: @ GetPFPosition(Stack[-3])
0x41d: Pop(0)
0x41e: Stack[-2] = Stack[-4] - Stack[-3]; Pop(0);
0x41f: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x420: Pop(0); Push(Stack[-11] * Stack[-11]);
0x421: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x422: IF (Stack[-1] == 0) GOTO 0x429; Pop(1)

0x423: PushEmpty(bool, float)
0x424: Stack[-1] = Stack[-13]
0x425: Call2 0x353

0x426: Pop(2)
0x427: Stack[-12] = (bool) 1
0x428: Return(); Pop(10)

0x429: @ sync()
0x42a: Pop(0)
0x42b: GOTO 0x401

0x42c: PushEmpty()
0x42d: Call2 0x4bb

0x42e: Pop(0)
0x42f: Stack[-12] = (bool) 0
0x430: Return(); Pop(10)

0x431: PushEmpty(cvector, cvector, cvector, float, float, cvector, cvector, cvector, float, float)
0x432: PushEmpty(bool)
0x433: Stack[-1] = (bool) 1
0x434: PushEmpty(bool, object)
0x435: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x436: Call2 0xb7b

0x437: Pop(1)
0x438: Pop(1); Push((bool) Stack[-1] == 0)
0x439: IF (Stack[-1] == 0) GOTO 0x43d; Pop(1)

0x43a: Push( Stack[4 + Tasks[-1].StackPointer] )
0x43b: IF (Stack[-1] == 0) GOTO 0x43d; Pop(1)

0x43c: Stack[-1] = (bool) 0
0x43d: IF (Stack[-1] == 0) GOTO 0x440; Pop(1)

0x43e: Stack[-11] = (bool) 0
0x43f: Return(); Pop(10)

0x440: PushEmpty(bool)
0x441: Call2 0x490

0x442: Pop(0)
0x443: IF (Stack[-1] == 0) GOTO 0x451; Pop(1)

0x444: @@ GetPFPosition(Stack[-5])
0x445: Pop(0)
0x446: @ GetPFPosition(Stack[-4])
0x447: Pop(0)
0x448: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x449: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x44a: @@ GetAttackDistance(Stack[-1])
0x44b: Pop(0)
0x44c: Push((int) 50)
0x44d: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x44e: Pop(0); Push(Stack[-1] * Stack[-1]);
0x44f: Stack[-12] = Stack[-3] <= Stack[-1]; Pop(1);
0x450: Return(); Pop(10)

0x451: Stack[-11] = (bool) 0
0x452: Return(); Pop(10)

0x453: PushEmpty(bool)
0x454: Stack[-1] = (bool) 0
0x455: PushEmpty(bool)
0x456: Call2 0x431

0x457: Pop(0)
0x458: IF (Stack[-1] == 0) GOTO 0x45e; Pop(1)

0x459: PushEmpty(bool)
0x45a: Call2 0x463

0x45b: Pop(0)
0x45c: IF (Stack[-1] == 0) GOTO 0x45e; Pop(1)

0x45d: Stack[-1] = (bool) 1
0x45e: IF (Stack[-1] == 0) GOTO 0x461; Pop(1)

0x45f: Stack[-1] = (bool) 1
0x460: Return(); Pop(0)

0x461: Stack[-1] = (bool) 0
0x462: Return(); Pop(0)

0x463: PushEmpty(object, bool, float, cvector, cvector, object, bool, float, cvector, cvector)
0x464: @ GetScene(Stack[-5])
0x465: Pop(0)
0x466: Stack[-4] = (bool) 0
0x467: PushEmpty(cvector, object)
0x468: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x469: Call2 0xaf1

0x46a: Pop(1)
0x46b: Pop(1); Push(( -Stack[-1])
0x46c: @ FindDirLength(Stack[-4], Stack[-1], Stack[-5])
0x46d: Pop(1)
0x46e: Pop(0); Push((bool) Stack[-3] < Stack[5 + Tasks[-1].StackPointer])
0x46f: IF (Stack[-1] == 0) GOTO 0x471; Pop(1)

0x470: GOTO 0x48d

0x471: @ Face(Stack[-0])
0x472: Pop(0)
0x473: Push("all")
0x474: Push("bjump")
0x475: @ PlayAnimation(Stack[-2], Stack[-1])
0x476: Pop(2)
0x477: @@ GetPFPosition(Stack[-2])
0x478: Pop(0)
0x479: @ GetPFPosition(Stack[-1])
0x47a: Pop(0)
0x47b: @ WaitForAnimEnd()
0x47c: Pop(0)
0x47d: PushEmpty()
0x47e: Call2 0x4bb

0x47f: Pop(0)
0x480: @ StopAsync()
0x481: Pop(0)
0x482: Push(CVector(0.0, 0.0, 0.0))
0x483: @ SetSpeed(Stack[-1])
0x484: Pop(1)
0x485: Stack[-4] = (bool) 1
0x486: PushEmpty(bool)
0x487: Call2 0x431

0x488: Pop(0)
0x489: Pop(1); Push((bool) Stack[-1] == 0)
0x48a: IF (Stack[-1] == 0) GOTO 0x48c; Pop(1)

0x48b: GOTO 0x48d

0x48c: GOTO 0x467

0x48d: Stack[-11] = Stack[-4]
0x48e: Return(); Pop(10)

0x48f: Stack[-5] = 0
0x490: PushEmpty(bool, bool)
0x491: Push("IsAttacking")
0x492: Push((int) 1)
0x493: Pop(2); Push(IsFuncExist(Stack[0 + Tasks[-1].StackPointer], Stack[-2], Stack[-1]))
0x494: IF (Stack[-1] == 0) GOTO 0x499; Pop(1)

0x495: @@ IsAttacking(Stack[-1])
0x496: Pop(0)
0x497: Stack[-3] = Stack[-1]
0x498: Return(); Pop(2)

0x499: Stack[-3] = (bool) 0
0x49a: Return(); Pop(2)

0x49b: PushEmpty(float, int, float, int)
0x49c: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x49d: IF (Stack[-1] == 0) GOTO 0x49f; Pop(1)

0x49e: Return(); Pop(4)

0x49f: Push( Stack[6 + Tasks[-1].StackPointer] )
0x4a0: IF (Stack[-1] == 0) GOTO 0x4a7; Pop(1)

0x4a1: Push((int) -1)
0x4a2: Stack[6 + Tasks[-1].StackPointer] = Stack[6 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x4a3: Push((int) 0)
0x4a4: Pop(1); Push((bool) Stack[6 + Tasks[-1].StackPointer] > Stack[-1])
0x4a5: IF (Stack[-1] == 0) GOTO 0x4a7; Pop(1)

0x4a6: Return(); Pop(4)

0x4a7: @ rand(Stack[-2])
0x4a8: Pop(0)
0x4a9: PushEmpty(float)
0x4aa: Call2 0x4cb

0x4ab: Pop(0)
0x4ac: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x4ad: IF (Stack[-1] == 0) GOTO 0x4ba; Pop(1)

0x4ae: @ irand(Stack[-1], Stack[-2])
0x4af: Pop(0)
0x4b0: Push((int) 1)
0x4b1: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x4b2: Push("attack")
0x4b3: Pop(1); Push(Stack[-1] + Stack[-2]);
0x4b4: @ Speak(Stack[-1])
0x4b5: Pop(1)
0x4b6: PushEmpty(int)
0x4b7: Call2 0x4c9

0x4b8: Stack[6 + Tasks[-1].StackPointer] = Stack[-1]
0x4b9: Pop(1)
0x4ba: Return(); Pop(4)

0x4bb: PushEmpty(object)
0x4bc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4bd: Call2 0xc9d

0x4be: Pop(1)
0x4bf: Return(); Pop(0)

0x4c0: PushEmpty(string)
0x4c1: Stack[-1] = "attack_stay"
0x4c2: Call2 0xc37

0x4c3: Pop(1)
0x4c4: Return(); Pop(0)

0x4c5: PushEmpty()
0x4c6: Return(); Pop(0)

0x4c7: Stack[-1] = (bool) 1
0x4c8: Return(); Pop(0)

0x4c9: Stack[-1] = (int) 1
0x4ca: Return(); Pop(0)

0x4cb: Stack[-1] = (float) 0.5
0x4cc: Return(); Pop(0)

0x4cd: PushEmpty(bool, bool)
0x4ce: Stack[3 + Tasks[-1].StackPointer] = Stack[-7]
0x4cf: Push((int) 2)
0x4d0: Push((int) 2)
0x4d1: @ SetTimer(Stack[-2], Stack[-1])
0x4d2: Pop(2)
0x4d3: PushEmpty(bool, object, float, float, bool, bool)
0x4d4: Stack[-5] = Stack[-13]
0x4d5: Stack[-4] = Stack[-12]
0x4d6: Stack[-3] = Stack[-11]
0x4d7: Stack[-2] = Stack[-10]
0x4d8: Stack[-1] = Stack[-9]
0x4d9: Call2 0x500

0x4da: Stack[-7] = Stack[-6]
0x4db: Pop(6)
0x4dc: Push((int) 2)
0x4dd: @ KillTimer(Stack[-1])
0x4de: Pop(1)
0x4df: Stack[-8] = Stack[-1]
0x4e0: Return(); Pop(2)

0x4e1: PushEmpty(object, object)
0x4e2: Push((int) 2)
0x4e3: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x4e4: IF (Stack[-1] == 0) GOTO 0x4f3; Pop(1)

0x4e5: @ GetMainOutdoorScene(Stack[-1])
0x4e6: Pop(0)
0x4e7: Push("b9q03_helpme")
0x4e8: Push(GlobalVars[1])
0x4e9: Push((int) 1)
0x4ea: Pop(2); Push(Stack[-2] + Stack[-1]);
0x4eb: Pop(2); Push(Stack[-2] + Stack[-1]);
0x4ec: @ BroadcastMessage(Stack[-1], Stack[-3], Stack[-2])
0x4ed: Pop(1)
0x4ee: Push("helpme timer")
0x4ef: @ Trace(Stack[-1])
0x4f0: Pop(1)
0x4f1: Stack[-1] = 0
0x4f2: GOTO 0x4f7

0x4f3: PushEmpty(int)
0x4f4: Stack[-1] = Stack[-4]
0x4f5: Call2 0x531

0x4f6: Pop(1)
0x4f7: Return(); Pop(2)

0x4f8: PushEmpty()
0x4f9: Call2 0x53f

0x4fa: Pop(0)
0x4fb: PushEmpty(bool, int)
0x4fc: Stack[-1] = (int) 0
0x4fd: Call2 0xe11

0x4fe: Pop(2)
0x4ff: Return(); Pop(0)

0x500: PushEmpty(bool, bool, bool, bool)
0x501: PushEmpty(object)
0x502: Stack[-1] = Stack[-10]
0x503: Call2 0xc9d

0x504: Pop(1)
0x505: Push((int) 1)
0x506: Push((int) 5)
0x507: @ SetTimer(Stack[-2], Stack[-1])
0x508: Pop(2)
0x509: @ CanSee(Stack[-2], Stack[-9])
0x50a: Pop(0)
0x50b: Push(Stack[-2])
0x50c: IF (Stack[-1] == 0) GOTO 0x513; Pop(1)

0x50d: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x50e: PushEmpty(object)
0x50f: Stack[-1] = Stack[-10]
0x510: Call2 0xc21

0x511: Pop(1)
0x512: GOTO 0x514

0x513: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x514: PushEmpty(bool, object)
0x515: Stack[-1] = Stack[-11]
0x516: Call2 0xaf8

0x517: Pop(1)
0x518: IF (Stack[-1] == 0) GOTO 0x51e; Pop(1)

0x519: PushEmpty(object)
0x51a: Call2 0xc60

0x51b: Pop(0)
0x51c: @ SendPlayerEnemy(Stack[-10], Stack[-1])
0x51d: Pop(1)
0x51e: PushEmpty(bool, object, float, float, bool, bool)
0x51f: Stack[-5] = Stack[-15]
0x520: Stack[-4] = Stack[-14]
0x521: Stack[-3] = Stack[-13]
0x522: Stack[-2] = Stack[-12]
0x523: Stack[-1] = Stack[-11]
0x524: Call2 0x569

0x525: Stack[-7] = Stack[-6]
0x526: Pop(6)
0x527: Push( Stack[2 + Tasks[-1].StackPointer] )
0x528: IF (Stack[-1] == 0) GOTO 0x52c; Pop(1)

0x529: Push("head")
0x52a: @ UnlookAsync(Stack[-1])
0x52b: Pop(1)
0x52c: Push((int) 1)
0x52d: @ KillTimer(Stack[-1])
0x52e: Pop(1)
0x52f: Stack[-10] = Stack[-1]
0x530: Return(); Pop(4)

0x531: PushEmpty()
0x532: Push((int) 1)
0x533: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x534: IF (Stack[-1] == 0) GOTO 0x53a; Pop(1)

0x535: PushEmpty(object)
0x536: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x537: Call2 0xc9d

0x538: Pop(1)
0x539: GOTO 0x53e

0x53a: PushEmpty(int)
0x53b: Stack[-1] = Stack[-2]
0x53c: Call2 0x5cf

0x53d: Pop(1)
0x53e: Return(); Pop(0)

0x53f: Push((int) 1)
0x540: @ KillTimer(Stack[-1])
0x541: Pop(1)
0x542: Push( Stack[2 + Tasks[-1].StackPointer] )
0x543: IF (Stack[-1] == 0) GOTO 0x548; Pop(1)

0x544: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x545: Push("head")
0x546: @ UnlookAsync(Stack[-1])
0x547: Pop(1)
0x548: PushEmpty()
0x549: Call2 0x5e5

0x54a: Pop(0)
0x54b: Return(); Pop(0)

0x54c: PushEmpty()
0x54d: PushEmpty(bool)
0x54e: Stack[-1] = (bool) 0
0x54f: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0x550: IF (Stack[-1] == 0) GOTO 0x554; Pop(1)

0x551: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x552: IF (Stack[-1] == 0) GOTO 0x554; Pop(1)

0x553: Stack[-1] = (bool) 1
0x554: IF (Stack[-1] == 0) GOTO 0x55a; Pop(1)

0x555: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x556: PushEmpty(object)
0x557: Stack[-1] = Stack[-2]
0x558: Call2 0xc21

0x559: Pop(1)
0x55a: Return(); Pop(0)

0x55b: PushEmpty()
0x55c: PushEmpty(bool)
0x55d: Stack[-1] = (bool) 0
0x55e: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0x55f: IF (Stack[-1] == 0) GOTO 0x563; Pop(1)

0x560: Push( Stack[2 + Tasks[-1].StackPointer] )
0x561: IF (Stack[-1] == 0) GOTO 0x563; Pop(1)

0x562: Stack[-1] = (bool) 1
0x563: IF (Stack[-1] == 0) GOTO 0x568; Pop(1)

0x564: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x565: Push("head")
0x566: @ UnlookAsync(Stack[-1])
0x567: Pop(1)
0x568: Return(); Pop(0)

0x569: PushEmpty(bool, bool, object, cvector, cvector, cvector, float, object, bool, bool, object, cvector, cvector, cvector, float, object)
0x56a: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x56b: Stack[1 + Tasks[-1].StackPointer] = Stack[-21]
0x56c: Stack[-7] = Stack[-17]
0x56d: PushEmpty(bool, object)
0x56e: Stack[-1] = Stack[-23]
0x56f: Call2 0x5f5

0x570: Pop(1)
0x571: Pop(1); Push((bool) Stack[-1] == 0)
0x572: IF (Stack[-1] == 0) GOTO 0x575; Pop(1)

0x573: Stack[-22] = (bool) 0
0x574: Return(); Pop(16)

0x575: @@ GetPosition(Stack[-5])
0x576: Pop(0)
0x577: @ GetPosition(Stack[-4])
0x578: Pop(0)
0x579: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x57a: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x57b: PushEmpty(bool)
0x57c: Stack[-1] = (bool) 0
0x57d: Push((int) 0)
0x57e: Pop(1); Push((bool) Stack[-21] > Stack[-1])
0x57f: IF (Stack[-1] == 0) GOTO 0x584; Pop(1)

0x580: Pop(0); Push(Stack[-20] * Stack[-20]);
0x581: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x582: IF (Stack[-1] == 0) GOTO 0x584; Pop(1)

0x583: Stack[-1] = (bool) 1
0x584: IF (Stack[-1] == 0) GOTO 0x589; Pop(1)

0x585: @ Stop()
0x586: Pop(0)
0x587: Stack[-22] = (bool) 0
0x588: Return(); Pop(16)

0x589: Pop(0); Push(Stack[-20] * Stack[-20]);
0x58a: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x58b: IF (Stack[-1] == 0) GOTO 0x5c7; Pop(1)

0x58c: @@ GetPFPosition(Stack[-5])
0x58d: Pop(0)
0x58e: @ FindPathTo(Stack[-1], Stack[-5])
0x58f: Pop(0)
0x590: Pop(0); Push(( Stack[-1] != 0 )
0x591: IF (Stack[-1] == 0) GOTO 0x594; Pop(1)

0x592: Stack[-6] = Stack[-1]
0x593: Stack[-1] = 0
0x594: Pop(0); Push(( Stack[-6] != 0 )
0x595: IF (Stack[-1] == 0) GOTO 0x5b5; Pop(1)

0x596: Push(Stack[-7])
0x597: IF (Stack[-1] == 0) GOTO 0x59e; Pop(1)

0x598: Stack[-7] = (bool) 0
0x599: @ RotatePath(Stack[-6], Stack[-8])
0x59a: Pop(0)
0x59b: Pop(0); Push((bool) Stack[-8] == 0)
0x59c: IF (Stack[-1] == 0) GOTO 0x59e; Pop(1)

0x59d: GOTO 0x5cd

0x59e: Push((int) 0)
0x59f: Push((float)0.3)
0x5a0: @ SetTimer(Stack[-2], Stack[-1])
0x5a1: Pop(2)
0x5a2: PushEmpty(string)
0x5a3: Call2 0x5fc

0x5a4: Pop(0)
0x5a5: PushEmpty(string)
0x5a6: Call2 0x5fe

0x5a7: Pop(0)
0x5a8: @ FollowPath(Stack[-8], Stack[-20], Stack[-10], Stack[-2], Stack[-1])
0x5a9: Pop(2)
0x5aa: Pop(0); Push((bool) Stack[-8] == 0)
0x5ab: IF (Stack[-1] == 0) GOTO 0x5b3; Pop(1)

0x5ac: Push( Stack[0 + Tasks[-1].StackPointer] )
0x5ad: IF (Stack[-1] == 0) GOTO 0x5b1; Pop(1)

0x5ae: Stack[-6] = 0
0x5af: GOTO 0x5cd

0x5b0: GOTO 0x5b2

0x5b1: GOTO 0x5cc

0x5b2: GOTO 0x5b4

0x5b3: Stack[-6] = 0
0x5b4: GOTO 0x5c5

0x5b5: Push((int) 0)
0x5b6: @ KillTimer(Stack[-1])
0x5b7: Pop(1)
0x5b8: Push((float)0.5)
0x5b9: @ Sleep(Stack[-1], Stack[-9])
0x5ba: Pop(1)
0x5bb: Pop(0); Push((bool) Stack[-8] == 0)
0x5bc: IF (Stack[-1] == 0) GOTO 0x5c1; Pop(1)

0x5bd: Push( Stack[0 + Tasks[-1].StackPointer] )
0x5be: IF (Stack[-1] == 0) GOTO 0x5c1; Pop(1)

0x5bf: Stack[-6] = 0
0x5c0: GOTO 0x5cd

0x5c1: Push((int) 0)
0x5c2: Push((float)0.3)
0x5c3: @ SetTimer(Stack[-2], Stack[-1])
0x5c4: Pop(2)
0x5c5: Stack[-1] = 0
0x5c6: GOTO 0x5cb

0x5c7: Push((int) 0)
0x5c8: @ KillTimer(Stack[-1])
0x5c9: Pop(1)
0x5ca: GOTO 0x5cd

0x5cb: Stack[-6] = 0
0x5cc: GOTO 0x56d

0x5cd: Stack[-22] = !Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x5ce: Return(); Pop(16)

0x5cf: PushEmpty()
0x5d0: Push((int) 0)
0x5d1: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x5d2: IF (Stack[-1] == 0) GOTO 0x5d4; Pop(1)

0x5d3: Return(); Pop(0)

0x5d4: PushEmpty(bool, object)
0x5d5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5d6: Call2 0x5f5

0x5d7: Pop(1)
0x5d8: Pop(1); Push((bool) Stack[-1] == 0)
0x5d9: IF (Stack[-1] == 0) GOTO 0x5db; Pop(1)

0x5da: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x5db: Push((int) 0)
0x5dc: @ KillTimer(Stack[-1])
0x5dd: Pop(1)
0x5de: @ Stop()
0x5df: Pop(0)
0x5e0: Return(); Pop(0)

0x5e1: PushEmpty()
0x5e2: @ RequestClearPath(Stack[-1])
0x5e3: Pop(0)
0x5e4: Return(); Pop(0)

0x5e5: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x5e6: Push((int) 0)
0x5e7: @ KillTimer(Stack[-1])
0x5e8: Pop(1)
0x5e9: @ Stop()
0x5ea: Pop(0)
0x5eb: Return(); Pop(0)

0x5ec: PushEmpty()
0x5ed: PushEmpty()
0x5ee: Call2 0x53f

0x5ef: Pop(0)
0x5f0: PushEmpty(object)
0x5f1: Stack[-1] = Stack[-2]
0x5f2: Call2 0xed8

0x5f3: Pop(1)
0x5f4: Return(); Pop(0)

0x5f5: PushEmpty()
0x5f6: PushEmpty(bool, object)
0x5f7: Stack[-1] = Stack[-3]
0x5f8: Call2 0xb7b

0x5f9: Stack[-4] = Stack[-2]
0x5fa: Pop(2)
0x5fb: Return(); Pop(0)

0x5fc: Stack[-1] = "walk"
0x5fd: Return(); Pop(0)

0x5fe: Stack[-1] = "run"
0x5ff: Return(); Pop(0)

0x600: PushEmpty()
0x601: PushEmpty(bool, object)
0x602: Stack[-1] = Stack[-4]
0x603: Call2 0xb7b

0x604: Pop(1)
0x605: Pop(1); Push((bool) Stack[-1] == 0)
0x606: IF (Stack[-1] == 0) GOTO 0x60c; Pop(1)

0x607: PushEmpty(bool, int)
0x608: Stack[-1] = (int) 2
0x609: Call2 0xe11

0x60a: Pop(2)
0x60b: Return(); Pop(0)

0x60c: Push((int) 0)
0x60d: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x60e: IF (Stack[-1] == 0) GOTO 0x61e; Pop(1)

0x60f: Push((int) 3)
0x610: @ SetTimer(Stack[-1], Stack[-2])
0x611: Pop(1)
0x612: PushEmpty(bool, object, float, float, bool, bool)
0x613: Stack[-5] = Stack[-8]
0x614: Stack[-4] = (float) 350.0
0x615: Stack[-3] = (int) 6000
0x616: Stack[-2] = (bool) 1
0x617: Stack[-1] = (bool) 1
0x618: Call2 0x66c

0x619: Pop(6)
0x61a: Push((int) 3)
0x61b: @ KillTimer(Stack[-1])
0x61c: Pop(1)
0x61d: GOTO 0x626

0x61e: PushEmpty(bool, object, float, float, bool, bool)
0x61f: Stack[-5] = Stack[-8]
0x620: Stack[-4] = (float) 350.0
0x621: Stack[-3] = (int) 6000
0x622: Stack[-2] = (bool) 1
0x623: Stack[-1] = (bool) 1
0x624: Call2 0x66c

0x625: Pop(6)
0x626: Return(); Pop(0)

0x627: PushEmpty()
0x628: Call2 0x6e8

0x629: Pop(0)
0x62a: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x62b: PushEmpty(bool, int)
0x62c: Stack[-1] = (int) 0
0x62d: Call2 0xe11

0x62e: Pop(2)
0x62f: Return(); Pop(0)

0x630: PushEmpty()
0x631: PushEmpty(bool, object, string)
0x632: Stack[-2] = Stack[-5]
0x633: Stack[-1] = Stack[-4]
0x634: Call2 0xd02

0x635: Pop(2)
0x636: IF (Stack[-1] == 0) GOTO 0x63a; Pop(1)

0x637: PushEmpty()
0x638: Call2 0x6e8

0x639: Pop(0)
0x63a: Return(); Pop(0)

0x63b: PushEmpty()
0x63c: PushEmpty(bool, object)
0x63d: Stack[-1] = Stack[-3]
0x63e: Call2 0xd67

0x63f: Pop(1)
0x640: IF (Stack[-1] == 0) GOTO 0x645; Pop(1)

0x641: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x642: PushEmpty()
0x643: Call2 0x6e8

0x644: Pop(0)
0x645: Return(); Pop(0)

0x646: PushEmpty()
0x647: PushEmpty(bool, object)
0x648: Stack[-1] = Stack[-3]
0x649: Call2 0xda2

0x64a: Pop(1)
0x64b: IF (Stack[-1] == 0) GOTO 0x650; Pop(1)

0x64c: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x64d: PushEmpty()
0x64e: Call2 0x6e8

0x64f: Pop(0)
0x650: Return(); Pop(0)

0x651: PushEmpty()
0x652: EventDisable(42)
0x653: EventDisable(1)
0x654: EventDisable(3)
0x655: PushEmpty()
0x656: Call2 0x6e8

0x657: Pop(0)
0x658: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x659: PushEmpty(bool, object)
0x65a: Stack[-1] = Stack[-3]
0x65b: Call2 0xe75

0x65c: Pop(2)
0x65d: Return(); Pop(0)

0x65e: PushEmpty()
0x65f: Push((int) 3)
0x660: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x661: IF (Stack[-1] == 0) GOTO 0x667; Pop(1)

0x662: PushEmpty()
0x663: Call2 0x6e8

0x664: Pop(0)
0x665: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x666: Return(); Pop(0)

0x667: PushEmpty(int)
0x668: Stack[-1] = Stack[-2]
0x669: Call2 0x6d2

0x66a: Pop(1)
0x66b: Return(); Pop(0)

0x66c: PushEmpty(bool, bool, object, cvector, cvector, cvector, float, object, bool, bool, object, cvector, cvector, cvector, float, object)
0x66d: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x66e: Stack[1 + Tasks[-1].StackPointer] = Stack[-21]
0x66f: Stack[-7] = Stack[-17]
0x670: PushEmpty(bool, object)
0x671: Stack[-1] = Stack[-23]
0x672: Call2 0x6f8

0x673: Pop(1)
0x674: Pop(1); Push((bool) Stack[-1] == 0)
0x675: IF (Stack[-1] == 0) GOTO 0x678; Pop(1)

0x676: Stack[-22] = (bool) 0
0x677: Return(); Pop(16)

0x678: @@ GetPosition(Stack[-5])
0x679: Pop(0)
0x67a: @ GetPosition(Stack[-4])
0x67b: Pop(0)
0x67c: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x67d: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x67e: PushEmpty(bool)
0x67f: Stack[-1] = (bool) 0
0x680: Push((int) 0)
0x681: Pop(1); Push((bool) Stack[-21] > Stack[-1])
0x682: IF (Stack[-1] == 0) GOTO 0x687; Pop(1)

0x683: Pop(0); Push(Stack[-20] * Stack[-20]);
0x684: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x685: IF (Stack[-1] == 0) GOTO 0x687; Pop(1)

0x686: Stack[-1] = (bool) 1
0x687: IF (Stack[-1] == 0) GOTO 0x68c; Pop(1)

0x688: @ Stop()
0x689: Pop(0)
0x68a: Stack[-22] = (bool) 0
0x68b: Return(); Pop(16)

0x68c: Pop(0); Push(Stack[-20] * Stack[-20]);
0x68d: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x68e: IF (Stack[-1] == 0) GOTO 0x6ca; Pop(1)

0x68f: @@ GetPFPosition(Stack[-5])
0x690: Pop(0)
0x691: @ FindPathTo(Stack[-1], Stack[-5])
0x692: Pop(0)
0x693: Pop(0); Push(( Stack[-1] != 0 )
0x694: IF (Stack[-1] == 0) GOTO 0x697; Pop(1)

0x695: Stack[-6] = Stack[-1]
0x696: Stack[-1] = 0
0x697: Pop(0); Push(( Stack[-6] != 0 )
0x698: IF (Stack[-1] == 0) GOTO 0x6b8; Pop(1)

0x699: Push(Stack[-7])
0x69a: IF (Stack[-1] == 0) GOTO 0x6a1; Pop(1)

0x69b: Stack[-7] = (bool) 0
0x69c: @ RotatePath(Stack[-6], Stack[-8])
0x69d: Pop(0)
0x69e: Pop(0); Push((bool) Stack[-8] == 0)
0x69f: IF (Stack[-1] == 0) GOTO 0x6a1; Pop(1)

0x6a0: GOTO 0x6d0

0x6a1: Push((int) 0)
0x6a2: Push((float)0.3)
0x6a3: @ SetTimer(Stack[-2], Stack[-1])
0x6a4: Pop(2)
0x6a5: PushEmpty(string)
0x6a6: Call2 0x6ff

0x6a7: Pop(0)
0x6a8: PushEmpty(string)
0x6a9: Call2 0x701

0x6aa: Pop(0)
0x6ab: @ FollowPath(Stack[-8], Stack[-20], Stack[-10], Stack[-2], Stack[-1])
0x6ac: Pop(2)
0x6ad: Pop(0); Push((bool) Stack[-8] == 0)
0x6ae: IF (Stack[-1] == 0) GOTO 0x6b6; Pop(1)

0x6af: Push( Stack[0 + Tasks[-1].StackPointer] )
0x6b0: IF (Stack[-1] == 0) GOTO 0x6b4; Pop(1)

0x6b1: Stack[-6] = 0
0x6b2: GOTO 0x6d0

0x6b3: GOTO 0x6b5

0x6b4: GOTO 0x6cf

0x6b5: GOTO 0x6b7

0x6b6: Stack[-6] = 0
0x6b7: GOTO 0x6c8

0x6b8: Push((int) 0)
0x6b9: @ KillTimer(Stack[-1])
0x6ba: Pop(1)
0x6bb: Push((float)0.5)
0x6bc: @ Sleep(Stack[-1], Stack[-9])
0x6bd: Pop(1)
0x6be: Pop(0); Push((bool) Stack[-8] == 0)
0x6bf: IF (Stack[-1] == 0) GOTO 0x6c4; Pop(1)

0x6c0: Push( Stack[0 + Tasks[-1].StackPointer] )
0x6c1: IF (Stack[-1] == 0) GOTO 0x6c4; Pop(1)

0x6c2: Stack[-6] = 0
0x6c3: GOTO 0x6d0

0x6c4: Push((int) 0)
0x6c5: Push((float)0.3)
0x6c6: @ SetTimer(Stack[-2], Stack[-1])
0x6c7: Pop(2)
0x6c8: Stack[-1] = 0
0x6c9: GOTO 0x6ce

0x6ca: Push((int) 0)
0x6cb: @ KillTimer(Stack[-1])
0x6cc: Pop(1)
0x6cd: GOTO 0x6d0

0x6ce: Stack[-6] = 0
0x6cf: GOTO 0x670

0x6d0: Stack[-22] = !Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x6d1: Return(); Pop(16)

0x6d2: PushEmpty()
0x6d3: Push((int) 0)
0x6d4: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x6d5: IF (Stack[-1] == 0) GOTO 0x6d7; Pop(1)

0x6d6: Return(); Pop(0)

0x6d7: PushEmpty(bool, object)
0x6d8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6d9: Call2 0x6f8

0x6da: Pop(1)
0x6db: Pop(1); Push((bool) Stack[-1] == 0)
0x6dc: IF (Stack[-1] == 0) GOTO 0x6de; Pop(1)

0x6dd: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x6de: Push((int) 0)
0x6df: @ KillTimer(Stack[-1])
0x6e0: Pop(1)
0x6e1: @ Stop()
0x6e2: Pop(0)
0x6e3: Return(); Pop(0)

0x6e4: PushEmpty()
0x6e5: @ RequestClearPath(Stack[-1])
0x6e6: Pop(0)
0x6e7: Return(); Pop(0)

0x6e8: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x6e9: Push((int) 0)
0x6ea: @ KillTimer(Stack[-1])
0x6eb: Pop(1)
0x6ec: @ Stop()
0x6ed: Pop(0)
0x6ee: Return(); Pop(0)

0x6ef: PushEmpty()
0x6f0: PushEmpty()
0x6f1: Call2 0x6e8

0x6f2: Pop(0)
0x6f3: PushEmpty(object)
0x6f4: Stack[-1] = Stack[-2]
0x6f5: Call2 0xed8

0x6f6: Pop(1)
0x6f7: Return(); Pop(0)

0x6f8: PushEmpty()
0x6f9: PushEmpty(bool, object)
0x6fa: Stack[-1] = Stack[-3]
0x6fb: Call2 0xb7b

0x6fc: Stack[-4] = Stack[-2]
0x6fd: Pop(2)
0x6fe: Return(); Pop(0)

0x6ff: Stack[-1] = "walk"
0x700: Return(); Pop(0)

0x701: Stack[-1] = "run"
0x702: Return(); Pop(0)

0x703: PushEmpty()
0x704: Call2 0x73a

0x705: Pop(0)
0x706: Return(); Pop(0)

0x707: PushEmpty()
0x708: Call2 0x78b

0x709: Pop(0)
0x70a: PushEmpty(bool, int)
0x70b: Stack[-1] = (int) 0
0x70c: Call2 0xe11

0x70d: Pop(2)
0x70e: Return(); Pop(0)

0x70f: PushEmpty()
0x710: PushEmpty(bool, object, string)
0x711: Stack[-2] = Stack[-5]
0x712: Stack[-1] = Stack[-4]
0x713: Call2 0xd02

0x714: Pop(2)
0x715: IF (Stack[-1] == 0) GOTO 0x719; Pop(1)

0x716: PushEmpty()
0x717: Call2 0x78b

0x718: Pop(0)
0x719: Return(); Pop(0)

0x71a: PushEmpty()
0x71b: PushEmpty(bool, object)
0x71c: Stack[-1] = Stack[-3]
0x71d: Call2 0xd67

0x71e: Pop(1)
0x71f: IF (Stack[-1] == 0) GOTO 0x723; Pop(1)

0x720: PushEmpty()
0x721: Call2 0x78b

0x722: Pop(0)
0x723: Return(); Pop(0)

0x724: PushEmpty()
0x725: PushEmpty(bool, object)
0x726: Stack[-1] = Stack[-3]
0x727: Call2 0xda2

0x728: Pop(1)
0x729: IF (Stack[-1] == 0) GOTO 0x72d; Pop(1)

0x72a: PushEmpty()
0x72b: Call2 0x78b

0x72c: Pop(0)
0x72d: Return(); Pop(0)

0x72e: PushEmpty()
0x72f: EventDisable(42)
0x730: EventDisable(1)
0x731: EventDisable(3)
0x732: PushEmpty()
0x733: Call2 0x78b

0x734: Pop(0)
0x735: PushEmpty(bool, object)
0x736: Stack[-1] = Stack[-3]
0x737: Call2 0xe75

0x738: Pop(2)
0x739: Return(); Pop(0)

0x73a: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x73b: @ WaitForAnimEnd()
0x73c: Pop(0)
0x73d: PushEmpty(bool)
0x73e: Call2 0xc1c

0x73f: Pop(0)
0x740: Pop(1); Push((bool) Stack[-1] == 0)
0x741: IF (Stack[-1] == 0) GOTO 0x743; Pop(1)

0x742: Return(); Pop(14)

0x743: PushEmpty(int)
0x744: Call2 0xcad

0x745: Stack[-8] = Stack[-1]
0x746: Pop(1)
0x747: Stack[-6] = (int) 0
0x748: PushEmpty(bool)
0x749: Stack[-1] = (bool) 0
0x74a: Push((int) 5)
0x74b: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x74c: IF (Stack[-1] == 0) GOTO 0x752; Pop(1)

0x74d: PushEmpty(bool)
0x74e: Call2 0xc1c

0x74f: Pop(0)
0x750: IF (Stack[-1] == 0) GOTO 0x752; Pop(1)

0x751: Stack[-1] = (bool) 1
0x752: IF (Stack[-1] == 0) GOTO 0x786; Pop(1)

0x753: Push((int) 3)
0x754: @ irand(Stack[-6], Stack[-1])
0x755: Pop(1)
0x756: Push((int) 0)
0x757: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x758: IF (Stack[-1] == 0) GOTO 0x76a; Pop(1)

0x759: Push(Stack[-7])
0x75a: IF (Stack[-1] == 0) GOTO 0x769; Pop(1)

0x75b: @ irand(Stack[-4], Stack[-7])
0x75c: Pop(0)
0x75d: Push("all")
0x75e: PushEmpty(string, int)
0x75f: Stack[-1] = Stack[-7]
0x760: Call2 0xca6

0x761: Pop(1)
0x762: @ PlayAnimation(Stack[-2], Stack[-1])
0x763: Pop(2)
0x764: @ WaitForAnimEnd(Stack[-3])
0x765: Pop(0)
0x766: Pop(0); Push((bool) Stack[-3] == 0)
0x767: IF (Stack[-1] == 0) GOTO 0x769; Pop(1)

0x768: GOTO 0x786

0x769: GOTO 0x77b

0x76a: Push((int) 1)
0x76b: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x76c: IF (Stack[-1] == 0) GOTO 0x778; Pop(1)

0x76d: Push((int) 4)
0x76e: @ rand(Stack[-3], Stack[-1])
0x76f: Pop(1)
0x770: Push((int) 1)
0x771: Pop(1); Push(Stack[-3] + Stack[-1]);
0x772: @ Sleep(Stack[-1], Stack[-2])
0x773: Pop(1)
0x774: Pop(0); Push((bool) Stack[-1] == 0)
0x775: IF (Stack[-1] == 0) GOTO 0x777; Pop(1)

0x776: GOTO 0x786

0x777: GOTO 0x77b

0x778: Push(Stack[-6])
0x779: IF (Stack[-1] == 0) GOTO 0x77b; Pop(1)

0x77a: GOTO 0x786

0x77b: PushEmpty(bool)
0x77c: Call2 0x789

0x77d: Pop(0)
0x77e: Pop(1); Push((bool) Stack[-1] == 0)
0x77f: IF (Stack[-1] == 0) GOTO 0x781; Pop(1)

0x780: GOTO 0x786

0x781: @ ResetAAS()
0x782: Pop(0)
0x783: Push((int) 1)
0x784: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x785: GOTO 0x748

0x786: @ ResetAAS()
0x787: Pop(0)
0x788: Return(); Pop(14)

0x789: Stack[-1] = (bool) 1
0x78a: Return(); Pop(0)

0x78b: @ StopAnimation()
0x78c: Pop(0)
0x78d: @ StopGroup0()
0x78e: Pop(0)
0x78f: Return(); Pop(0)

0x790: PushEmpty()
0x791: Push(CvectorIndex(Stack[-3], 1))
0x792: Push((int) 30)
0x793: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x794: CvectorIndex(Stack[-4], 1) = Stack[-1];
0x795: PushEmpty(bool, cvector, cvector, float, float, bool, bool)
0x796: Stack[-6] = Stack[-10]
0x797: Stack[-5] = Stack[-9]
0x798: Stack[-4] = (int) 100
0x799: Stack[-3] = (int) 4000
0x79a: Stack[-2] = Stack[-8]
0x79b: Stack[-1] = (bool) 1
0x79c: Call2 0x7d5

0x79d: Stack[-11] = Stack[-7]
0x79e: Pop(7)
0x79f: Return(); Pop(0)

0x7a0: PushEmpty()
0x7a1: Call2 0x851

0x7a2: Pop(0)
0x7a3: PushEmpty(bool, int)
0x7a4: Stack[-1] = (int) 0
0x7a5: Call2 0xe11

0x7a6: Pop(2)
0x7a7: Return(); Pop(0)

0x7a8: PushEmpty()
0x7a9: PushEmpty(bool, object, string)
0x7aa: Stack[-2] = Stack[-5]
0x7ab: Stack[-1] = Stack[-4]
0x7ac: Call2 0xd02

0x7ad: Pop(2)
0x7ae: IF (Stack[-1] == 0) GOTO 0x7b2; Pop(1)

0x7af: PushEmpty()
0x7b0: Call2 0x851

0x7b1: Pop(0)
0x7b2: Return(); Pop(0)

0x7b3: PushEmpty()
0x7b4: PushEmpty(bool, object)
0x7b5: Stack[-1] = Stack[-3]
0x7b6: Call2 0xd67

0x7b7: Pop(1)
0x7b8: IF (Stack[-1] == 0) GOTO 0x7bc; Pop(1)

0x7b9: PushEmpty()
0x7ba: Call2 0x851

0x7bb: Pop(0)
0x7bc: Return(); Pop(0)

0x7bd: PushEmpty()
0x7be: PushEmpty(bool, object)
0x7bf: Stack[-1] = Stack[-3]
0x7c0: Call2 0xda2

0x7c1: Pop(1)
0x7c2: IF (Stack[-1] == 0) GOTO 0x7c6; Pop(1)

0x7c3: PushEmpty()
0x7c4: Call2 0x851

0x7c5: Pop(0)
0x7c6: Return(); Pop(0)

0x7c7: PushEmpty()
0x7c8: EventDisable(42)
0x7c9: EventDisable(1)
0x7ca: EventDisable(3)
0x7cb: PushEmpty()
0x7cc: Call2 0x851

0x7cd: Pop(0)
0x7ce: PushEmpty(bool, object)
0x7cf: Stack[-1] = Stack[-3]
0x7d0: Call2 0xe75

0x7d1: Pop(2)
0x7d2: Return(); Pop(0)

0x7d3: Stack[-1] = (bool) 1
0x7d4: Return(); Pop(0)

0x7d5: PushEmpty(bool, bool, object, cvector, cvector, cvector, float, object, bool, bool, object, cvector, cvector, cvector, float, object)
0x7d6: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x7d7: Stack[-7] = Stack[-17]
0x7d8: PushEmpty(bool)
0x7d9: Call2 0x7d3

0x7da: Pop(0)
0x7db: Pop(1); Push((bool) Stack[-1] == 0)
0x7dc: IF (Stack[-1] == 0) GOTO 0x7df; Pop(1)

0x7dd: Stack[-23] = (bool) 0
0x7de: Return(); Pop(16)

0x7df: Stack[-5] = Stack[-22]
0x7e0: @ GetPosition(Stack[-4])
0x7e1: Pop(0)
0x7e2: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x7e3: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x7e4: PushEmpty(bool)
0x7e5: Stack[-1] = (bool) 0
0x7e6: Push((int) 0)
0x7e7: Pop(1); Push((bool) Stack[-21] > Stack[-1])
0x7e8: IF (Stack[-1] == 0) GOTO 0x7ed; Pop(1)

0x7e9: Pop(0); Push(Stack[-20] * Stack[-20]);
0x7ea: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x7eb: IF (Stack[-1] == 0) GOTO 0x7ed; Pop(1)

0x7ec: Stack[-1] = (bool) 1
0x7ed: IF (Stack[-1] == 0) GOTO 0x7f2; Pop(1)

0x7ee: @ Stop()
0x7ef: Pop(0)
0x7f0: Stack[-23] = (bool) 0
0x7f1: Return(); Pop(16)

0x7f2: Pop(0); Push(Stack[-20] * Stack[-20]);
0x7f3: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x7f4: IF (Stack[-1] == 0) GOTO 0x82e; Pop(1)

0x7f5: @ FindPathTo(Stack[-1], Stack[-5])
0x7f6: Pop(0)
0x7f7: Pop(0); Push(( Stack[-1] != 0 )
0x7f8: IF (Stack[-1] == 0) GOTO 0x7fb; Pop(1)

0x7f9: Stack[-6] = Stack[-1]
0x7fa: Stack[-1] = 0
0x7fb: Pop(0); Push(( Stack[-6] != 0 )
0x7fc: IF (Stack[-1] == 0) GOTO 0x81c; Pop(1)

0x7fd: Push(Stack[-7])
0x7fe: IF (Stack[-1] == 0) GOTO 0x805; Pop(1)

0x7ff: Stack[-7] = (bool) 0
0x800: @ RotatePath(Stack[-6], Stack[-8])
0x801: Pop(0)
0x802: Pop(0); Push((bool) Stack[-8] == 0)
0x803: IF (Stack[-1] == 0) GOTO 0x805; Pop(1)

0x804: GOTO 0x834

0x805: Push((int) 0)
0x806: Push((float)0.3)
0x807: @ SetTimer(Stack[-2], Stack[-1])
0x808: Pop(2)
0x809: PushEmpty(string)
0x80a: Call2 0x861

0x80b: Pop(0)
0x80c: PushEmpty(string)
0x80d: Call2 0x863

0x80e: Pop(0)
0x80f: @ FollowPath(Stack[-8], Stack[-20], Stack[-10], Stack[-2], Stack[-1])
0x810: Pop(2)
0x811: Pop(0); Push((bool) Stack[-8] == 0)
0x812: IF (Stack[-1] == 0) GOTO 0x81a; Pop(1)

0x813: Push( Stack[0 + Tasks[-1].StackPointer] )
0x814: IF (Stack[-1] == 0) GOTO 0x818; Pop(1)

0x815: Stack[-6] = 0
0x816: GOTO 0x834

0x817: GOTO 0x819

0x818: GOTO 0x833

0x819: GOTO 0x81b

0x81a: Stack[-6] = 0
0x81b: GOTO 0x82c

0x81c: Push((int) 0)
0x81d: @ KillTimer(Stack[-1])
0x81e: Pop(1)
0x81f: Push((float)0.5)
0x820: @ Sleep(Stack[-1], Stack[-9])
0x821: Pop(1)
0x822: Pop(0); Push((bool) Stack[-8] == 0)
0x823: IF (Stack[-1] == 0) GOTO 0x828; Pop(1)

0x824: Push( Stack[0 + Tasks[-1].StackPointer] )
0x825: IF (Stack[-1] == 0) GOTO 0x828; Pop(1)

0x826: Stack[-6] = 0
0x827: GOTO 0x834

0x828: Push((int) 0)
0x829: Push((float)0.3)
0x82a: @ SetTimer(Stack[-2], Stack[-1])
0x82b: Pop(2)
0x82c: Stack[-1] = 0
0x82d: GOTO 0x832

0x82e: Push((int) 0)
0x82f: @ KillTimer(Stack[-1])
0x830: Pop(1)
0x831: GOTO 0x834

0x832: Stack[-6] = 0
0x833: GOTO 0x7d8

0x834: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x835: IF (Stack[-1] == 0) GOTO 0x83a; Pop(1)

0x836: Push(CvectorIndex(Stack[-21], 0))
0x837: Push(CvectorIndex(Stack[-22], 2))
0x838: @ RotateAsync(Stack[-2], Stack[-1])
0x839: Pop(2)
0x83a: Stack[-23] = !Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x83b: Return(); Pop(16)

0x83c: PushEmpty()
0x83d: Push((int) 0)
0x83e: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x83f: IF (Stack[-1] == 0) GOTO 0x841; Pop(1)

0x840: Return(); Pop(0)

0x841: PushEmpty(bool)
0x842: Call2 0x7d3

0x843: Pop(0)
0x844: Pop(1); Push((bool) Stack[-1] == 0)
0x845: IF (Stack[-1] == 0) GOTO 0x847; Pop(1)

0x846: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x847: Push((int) 0)
0x848: @ KillTimer(Stack[-1])
0x849: Pop(1)
0x84a: @ Stop()
0x84b: Pop(0)
0x84c: Return(); Pop(0)

0x84d: PushEmpty()
0x84e: @ RequestClearPath(Stack[-1])
0x84f: Pop(0)
0x850: Return(); Pop(0)

0x851: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x852: Push((int) 0)
0x853: @ KillTimer(Stack[-1])
0x854: Pop(1)
0x855: @ Stop()
0x856: Pop(0)
0x857: Return(); Pop(0)

0x858: PushEmpty()
0x859: PushEmpty()
0x85a: Call2 0x851

0x85b: Pop(0)
0x85c: PushEmpty(object)
0x85d: Stack[-1] = Stack[-2]
0x85e: Call2 0xed8

0x85f: Pop(1)
0x860: Return(); Pop(0)

0x861: Stack[-1] = "walk"
0x862: Return(); Pop(0)

0x863: Stack[-1] = "run"
0x864: Return(); Pop(0)

0x865: PushEmpty(bool, object, cvector, cvector, bool, object, cvector, cvector)
0x866: @ GetMainOutdoorScene(Stack[-3])
0x867: Pop(0)
0x868: Push("pt_b9q03_bonfire")
0x869: Push(GlobalVars[1])
0x86a: Push((int) 1)
0x86b: Pop(2); Push(Stack[-2] + Stack[-1]);
0x86c: Pop(2); Push(Stack[-2] + Stack[-1]);
0x86d: @@ GetLocator(Stack[-1], Stack[-5], Stack[-3], Stack[-2])
0x86e: Pop(1)
0x86f: Pop(0); Push((bool) Stack[-4] == 0)
0x870: IF (Stack[-1] == 0) GOTO 0x873; Pop(1)

0x871: Stack[-9] = (bool) 0
0x872: Return(); Pop(8)

0x873: PushEmpty(bool, cvector, cvector, bool)
0x874: Stack[-3] = Stack[-6]
0x875: Stack[-2] = Stack[-5]
0x876: Stack[-1] = (bool) 0
0x877: Call2 0x8a7

0x878: Stack[-13] = Stack[-4]
0x879: Pop(4)
0x87a: Return(); Pop(8)

0x87b: Stack[-3] = 0
0x87c: PushEmpty()
0x87d: PushEmpty(bool, object, string)
0x87e: Stack[-2] = Stack[-5]
0x87f: Stack[-1] = Stack[-4]
0x880: Call2 0xd02

0x881: Pop(2)
0x882: IF (Stack[-1] == 0) GOTO 0x886; Pop(1)

0x883: PushEmpty()
0x884: Call2 0x93d

0x885: Pop(0)
0x886: Return(); Pop(0)

0x887: PushEmpty()
0x888: PushEmpty(bool, object)
0x889: Stack[-1] = Stack[-3]
0x88a: Call2 0xd67

0x88b: Pop(1)
0x88c: IF (Stack[-1] == 0) GOTO 0x890; Pop(1)

0x88d: PushEmpty()
0x88e: Call2 0x93d

0x88f: Pop(0)
0x890: Return(); Pop(0)

0x891: PushEmpty()
0x892: PushEmpty(bool, object)
0x893: Stack[-1] = Stack[-3]
0x894: Call2 0xda2

0x895: Pop(1)
0x896: IF (Stack[-1] == 0) GOTO 0x89a; Pop(1)

0x897: PushEmpty()
0x898: Call2 0x93d

0x899: Pop(0)
0x89a: Return(); Pop(0)

0x89b: PushEmpty()
0x89c: EventDisable(42)
0x89d: EventDisable(1)
0x89e: EventDisable(3)
0x89f: PushEmpty()
0x8a0: Call2 0x93d

0x8a1: Pop(0)
0x8a2: PushEmpty(bool, object)
0x8a3: Stack[-1] = Stack[-3]
0x8a4: Call2 0xe75

0x8a5: Pop(2)
0x8a6: Return(); Pop(0)

0x8a7: PushEmpty()
0x8a8: Push(CvectorIndex(Stack[-3], 1))
0x8a9: Push((int) 30)
0x8aa: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x8ab: CvectorIndex(Stack[-4], 1) = Stack[-1];
0x8ac: PushEmpty(bool, cvector, cvector, float, float, bool, bool)
0x8ad: Stack[-6] = Stack[-10]
0x8ae: Stack[-5] = Stack[-9]
0x8af: Stack[-4] = (int) 100
0x8b0: Stack[-3] = (int) 4000
0x8b1: Stack[-2] = Stack[-8]
0x8b2: Stack[-1] = (bool) 1
0x8b3: Call2 0x8c1

0x8b4: Stack[-11] = Stack[-7]
0x8b5: Pop(7)
0x8b6: Return(); Pop(0)

0x8b7: PushEmpty()
0x8b8: Call2 0x93d

0x8b9: Pop(0)
0x8ba: PushEmpty(bool, int)
0x8bb: Stack[-1] = (int) 0
0x8bc: Call2 0xe11

0x8bd: Pop(2)
0x8be: Return(); Pop(0)

0x8bf: Stack[-1] = (bool) 1
0x8c0: Return(); Pop(0)

0x8c1: PushEmpty(bool, bool, object, cvector, cvector, cvector, float, object, bool, bool, object, cvector, cvector, cvector, float, object)
0x8c2: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x8c3: Stack[-7] = Stack[-17]
0x8c4: PushEmpty(bool)
0x8c5: Call2 0x8bf

0x8c6: Pop(0)
0x8c7: Pop(1); Push((bool) Stack[-1] == 0)
0x8c8: IF (Stack[-1] == 0) GOTO 0x8cb; Pop(1)

0x8c9: Stack[-23] = (bool) 0
0x8ca: Return(); Pop(16)

0x8cb: Stack[-5] = Stack[-22]
0x8cc: @ GetPosition(Stack[-4])
0x8cd: Pop(0)
0x8ce: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x8cf: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x8d0: PushEmpty(bool)
0x8d1: Stack[-1] = (bool) 0
0x8d2: Push((int) 0)
0x8d3: Pop(1); Push((bool) Stack[-21] > Stack[-1])
0x8d4: IF (Stack[-1] == 0) GOTO 0x8d9; Pop(1)

0x8d5: Pop(0); Push(Stack[-20] * Stack[-20]);
0x8d6: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x8d7: IF (Stack[-1] == 0) GOTO 0x8d9; Pop(1)

0x8d8: Stack[-1] = (bool) 1
0x8d9: IF (Stack[-1] == 0) GOTO 0x8de; Pop(1)

0x8da: @ Stop()
0x8db: Pop(0)
0x8dc: Stack[-23] = (bool) 0
0x8dd: Return(); Pop(16)

0x8de: Pop(0); Push(Stack[-20] * Stack[-20]);
0x8df: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x8e0: IF (Stack[-1] == 0) GOTO 0x91a; Pop(1)

0x8e1: @ FindPathTo(Stack[-1], Stack[-5])
0x8e2: Pop(0)
0x8e3: Pop(0); Push(( Stack[-1] != 0 )
0x8e4: IF (Stack[-1] == 0) GOTO 0x8e7; Pop(1)

0x8e5: Stack[-6] = Stack[-1]
0x8e6: Stack[-1] = 0
0x8e7: Pop(0); Push(( Stack[-6] != 0 )
0x8e8: IF (Stack[-1] == 0) GOTO 0x908; Pop(1)

0x8e9: Push(Stack[-7])
0x8ea: IF (Stack[-1] == 0) GOTO 0x8f1; Pop(1)

0x8eb: Stack[-7] = (bool) 0
0x8ec: @ RotatePath(Stack[-6], Stack[-8])
0x8ed: Pop(0)
0x8ee: Pop(0); Push((bool) Stack[-8] == 0)
0x8ef: IF (Stack[-1] == 0) GOTO 0x8f1; Pop(1)

0x8f0: GOTO 0x920

0x8f1: Push((int) 0)
0x8f2: Push((float)0.3)
0x8f3: @ SetTimer(Stack[-2], Stack[-1])
0x8f4: Pop(2)
0x8f5: PushEmpty(string)
0x8f6: Call2 0x94d

0x8f7: Pop(0)
0x8f8: PushEmpty(string)
0x8f9: Call2 0x94f

0x8fa: Pop(0)
0x8fb: @ FollowPath(Stack[-8], Stack[-20], Stack[-10], Stack[-2], Stack[-1])
0x8fc: Pop(2)
0x8fd: Pop(0); Push((bool) Stack[-8] == 0)
0x8fe: IF (Stack[-1] == 0) GOTO 0x906; Pop(1)

0x8ff: Push( Stack[0 + Tasks[-1].StackPointer] )
0x900: IF (Stack[-1] == 0) GOTO 0x904; Pop(1)

0x901: Stack[-6] = 0
0x902: GOTO 0x920

0x903: GOTO 0x905

0x904: GOTO 0x91f

0x905: GOTO 0x907

0x906: Stack[-6] = 0
0x907: GOTO 0x918

0x908: Push((int) 0)
0x909: @ KillTimer(Stack[-1])
0x90a: Pop(1)
0x90b: Push((float)0.5)
0x90c: @ Sleep(Stack[-1], Stack[-9])
0x90d: Pop(1)
0x90e: Pop(0); Push((bool) Stack[-8] == 0)
0x90f: IF (Stack[-1] == 0) GOTO 0x914; Pop(1)

0x910: Push( Stack[0 + Tasks[-1].StackPointer] )
0x911: IF (Stack[-1] == 0) GOTO 0x914; Pop(1)

0x912: Stack[-6] = 0
0x913: GOTO 0x920

0x914: Push((int) 0)
0x915: Push((float)0.3)
0x916: @ SetTimer(Stack[-2], Stack[-1])
0x917: Pop(2)
0x918: Stack[-1] = 0
0x919: GOTO 0x91e

0x91a: Push((int) 0)
0x91b: @ KillTimer(Stack[-1])
0x91c: Pop(1)
0x91d: GOTO 0x920

0x91e: Stack[-6] = 0
0x91f: GOTO 0x8c4

0x920: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x921: IF (Stack[-1] == 0) GOTO 0x926; Pop(1)

0x922: Push(CvectorIndex(Stack[-21], 0))
0x923: Push(CvectorIndex(Stack[-22], 2))
0x924: @ RotateAsync(Stack[-2], Stack[-1])
0x925: Pop(2)
0x926: Stack[-23] = !Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x927: Return(); Pop(16)

0x928: PushEmpty()
0x929: Push((int) 0)
0x92a: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x92b: IF (Stack[-1] == 0) GOTO 0x92d; Pop(1)

0x92c: Return(); Pop(0)

0x92d: PushEmpty(bool)
0x92e: Call2 0x8bf

0x92f: Pop(0)
0x930: Pop(1); Push((bool) Stack[-1] == 0)
0x931: IF (Stack[-1] == 0) GOTO 0x933; Pop(1)

0x932: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x933: Push((int) 0)
0x934: @ KillTimer(Stack[-1])
0x935: Pop(1)
0x936: @ Stop()
0x937: Pop(0)
0x938: Return(); Pop(0)

0x939: PushEmpty()
0x93a: @ RequestClearPath(Stack[-1])
0x93b: Pop(0)
0x93c: Return(); Pop(0)

0x93d: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x93e: Push((int) 0)
0x93f: @ KillTimer(Stack[-1])
0x940: Pop(1)
0x941: @ Stop()
0x942: Pop(0)
0x943: Return(); Pop(0)

0x944: PushEmpty()
0x945: PushEmpty()
0x946: Call2 0x93d

0x947: Pop(0)
0x948: PushEmpty(object)
0x949: Stack[-1] = Stack[-2]
0x94a: Call2 0xed8

0x94b: Pop(1)
0x94c: Return(); Pop(0)

0x94d: Stack[-1] = "walk"
0x94e: Return(); Pop(0)

0x94f: Stack[-1] = "run"
0x950: Return(); Pop(0)

0x951: PushEmpty(int, int)
0x952: Stack[-1] = (int) 0
0x953: Pop(0); Push((bool) Stack[-1] < Stack[-3])
0x954: IF (Stack[-1] == 0) GOTO 0x95f; Pop(1)

0x955: PushEmpty(string)
0x956: Stack[-1] = "hunt"
0x957: Call2 0x997

0x958: Pop(1)
0x959: Push( Stack[0 + Tasks[-1].StackPointer] )
0x95a: IF (Stack[-1] == 0) GOTO 0x95c; Pop(1)

0x95b: GOTO 0x95f

0x95c: Push((int) 1)
0x95d: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x95e: GOTO 0x953

0x95f: Return(); Pop(2)

0x960: PushEmpty()
0x961: Call2 0x9ac

0x962: Pop(0)
0x963: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x964: PushEmpty(bool, int)
0x965: Stack[-1] = (int) 0
0x966: Call2 0xe11

0x967: Pop(2)
0x968: Return(); Pop(0)

0x969: PushEmpty()
0x96a: PushEmpty(bool, object, string)
0x96b: Stack[-2] = Stack[-5]
0x96c: Stack[-1] = Stack[-4]
0x96d: Call2 0xd02

0x96e: Pop(2)
0x96f: IF (Stack[-1] == 0) GOTO 0x974; Pop(1)

0x970: PushEmpty()
0x971: Call2 0x9ac

0x972: Pop(0)
0x973: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x974: Return(); Pop(0)

0x975: PushEmpty()
0x976: PushEmpty(bool, object)
0x977: Stack[-1] = Stack[-3]
0x978: Call2 0xd67

0x979: Pop(1)
0x97a: IF (Stack[-1] == 0) GOTO 0x97f; Pop(1)

0x97b: PushEmpty()
0x97c: Call2 0x9ac

0x97d: Pop(0)
0x97e: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x97f: Return(); Pop(0)

0x980: PushEmpty()
0x981: PushEmpty(bool, object)
0x982: Stack[-1] = Stack[-3]
0x983: Call2 0xda2

0x984: Pop(1)
0x985: IF (Stack[-1] == 0) GOTO 0x98a; Pop(1)

0x986: PushEmpty()
0x987: Call2 0x9ac

0x988: Pop(0)
0x989: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x98a: Return(); Pop(0)

0x98b: PushEmpty()
0x98c: EventDisable(42)
0x98d: EventDisable(1)
0x98e: EventDisable(3)
0x98f: PushEmpty()
0x990: Call2 0x9ac

0x991: Pop(0)
0x992: PushEmpty(bool, object)
0x993: Stack[-1] = Stack[-3]
0x994: Call2 0xe75

0x995: Pop(2)
0x996: Return(); Pop(0)

0x997: PushEmpty(bool, bool, bool, bool)
0x998: @ WaitForAnimEnd()
0x999: Pop(0)
0x99a: PushEmpty(bool)
0x99b: Call2 0xc1c

0x99c: Pop(0)
0x99d: Pop(1); Push((bool) Stack[-1] == 0)
0x99e: IF (Stack[-1] == 0) GOTO 0x9a0; Pop(1)

0x99f: Return(); Pop(4)

0x9a0: Push("all")
0x9a1: @ HasAnimation(Stack[-3], Stack[-1], Stack[-6])
0x9a2: Pop(1)
0x9a3: Pop(0); Push((bool) Stack[-2] == 0)
0x9a4: IF (Stack[-1] == 0) GOTO 0x9a6; Pop(1)

0x9a5: Return(); Pop(4)

0x9a6: Push("all")
0x9a7: @ PlayAnimation(Stack[-1], Stack[-6])
0x9a8: Pop(1)
0x9a9: @ WaitForAnimEnd(Stack[-1])
0x9aa: Pop(0)
0x9ab: Return(); Pop(4)

0x9ac: @ StopAnimation()
0x9ad: Pop(0)
0x9ae: @ StopGroup0()
0x9af: Pop(0)
0x9b0: Return(); Pop(0)

0x9b1: PushEmpty()
0x9b2: Push((int) 1)
0x9b3: Push(GlobalVars[3])
0x9b4: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x9b5: IF (Stack[-1] == 0) GOTO 0x9ba; Pop(1)

0x9b6: PushEmpty(bool)
0x9b7: Stack[-1] = (bool) 0
0x9b8: Call2 0xe92

0x9b9: Pop(1)
0x9ba: Push((int) 3)
0x9bb: Push(GlobalVars[3])
0x9bc: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x9bd: IF (Stack[-1] == 0) GOTO 0x9c2; Pop(1)

0x9be: PushEmpty(bool)
0x9bf: Stack[-1] = (bool) 0
0x9c0: Call2 0xeab

0x9c1: Pop(1)
0x9c2: PushEmpty(object, string, int, int)
0x9c3: PushEmpty(object)
0x9c4: Call2 0xc60

0x9c5: Stack[-5] = Stack[-1]
0x9c6: Pop(1)
0x9c7: Stack[-3] = "coffee"
0x9c8: Stack[-2] = (int) 1
0x9c9: Stack[-1] = (int) 3
0x9ca: Call2 0xc2c

0x9cb: Pop(4)
0x9cc: PushEmpty(object, string, int, int)
0x9cd: PushEmpty(object)
0x9ce: Call2 0xc60

0x9cf: Stack[-5] = Stack[-1]
0x9d0: Pop(1)
0x9d1: Stack[-3] = "tvirin"
0x9d2: Stack[-2] = (int) 1
0x9d3: Stack[-1] = (int) 6
0x9d4: Call2 0xc2c

0x9d5: Pop(4)
0x9d6: PushEmpty(object, string, int, int)
0x9d7: PushEmpty(object)
0x9d8: Call2 0xc60

0x9d9: Stack[-5] = Stack[-1]
0x9da: Pop(1)
0x9db: Stack[-3] = "silver_ring"
0x9dc: Stack[-2] = (int) 1
0x9dd: Stack[-1] = (int) 9
0x9de: Call2 0xc2c

0x9df: Pop(4)
0x9e0: PushEmpty(object, string, int, int)
0x9e1: PushEmpty(object)
0x9e2: Call2 0xc60

0x9e3: Stack[-5] = Stack[-1]
0x9e4: Pop(1)
0x9e5: Stack[-3] = "gold_ring"
0x9e6: Stack[-2] = (int) 1
0x9e7: Stack[-1] = (int) 8
0x9e8: Call2 0xc2c

0x9e9: Pop(4)
0x9ea: PushEmpty(object, string, int, int)
0x9eb: PushEmpty(object)
0x9ec: Call2 0xc60

0x9ed: Stack[-5] = Stack[-1]
0x9ee: Pop(1)
0x9ef: Stack[-3] = "bracelet"
0x9f0: Stack[-2] = (int) 1
0x9f1: Stack[-1] = (int) 6
0x9f2: Call2 0xc2c

0x9f3: Pop(4)
0x9f4: PushEmpty(object, string, int, int)
0x9f5: PushEmpty(object)
0x9f6: Call2 0xc60

0x9f7: Stack[-5] = Stack[-1]
0x9f8: Pop(1)
0x9f9: Stack[-3] = "watch"
0x9fa: Stack[-2] = (int) 1
0x9fb: Stack[-1] = (int) 9
0x9fc: Call2 0xc2c

0x9fd: Pop(4)
0x9fe: PushEmpty(object, string, int, int)
0x9ff: PushEmpty(object)
0xa00: Call2 0xc60

0xa01: Stack[-5] = Stack[-1]
0xa02: Pop(1)
0xa03: Stack[-3] = "beads"
0xa04: Stack[-2] = (int) 1
0xa05: Stack[-1] = (int) 9
0xa06: Call2 0xc2c

0xa07: Pop(4)
0xa08: PushEmpty(object, string, int, int)
0xa09: PushEmpty(object)
0xa0a: Call2 0xc60

0xa0b: Stack[-5] = Stack[-1]
0xa0c: Pop(1)
0xa0d: Stack[-3] = "ear_ring"
0xa0e: Stack[-2] = (int) 1
0xa0f: Stack[-1] = (int) 9
0xa10: Call2 0xc2c

0xa11: Pop(4)
0xa12: PushEmpty(object, string, int, int)
0xa13: PushEmpty(object)
0xa14: Call2 0xc60

0xa15: Stack[-5] = Stack[-1]
0xa16: Pop(1)
0xa17: Stack[-3] = "feromicin"
0xa18: Stack[-2] = (int) 1
0xa19: Stack[-1] = (int) 10
0xa1a: Call2 0xc2c

0xa1b: Pop(4)
0xa1c: PushEmpty()
0xa1d: Call2 0xce2

0xa1e: Pop(0)
0xa1f: PushEmpty(object)
0xa20: Stack[-1] = Stack[-2]
0xa21: Call2 0xa2c

0xa22: Pop(1)
0xa23: Return(); Pop(0)

0xa24: PushEmpty(object)
0xa25: Call2 0xc60

0xa26: Pop(0)
0xa27: @ RemoveActor(Stack[-1])
0xa28: Pop(1)
0xa29: @ Hold()
0xa2a: Pop(0)
0xa2b: Return(); Pop(0)

0xa2c: PushEmpty()
0xa2d: EventDisable(0)
0xa2e: PushEmpty(object)
0xa2f: Stack[-1] = Stack[-2]
0xa30: Call2 0xa45

0xa31: Pop(1)
0xa32: Push((int) 50)
0xa33: Push((int) 40)
0xa34: @ SetRTEnvelope(Stack[-2], Stack[-1])
0xa35: Pop(2)
0xa36: EventEnable(0)
0xa37: @ Hold()
0xa38: Pop(0)
0xa39: GOTO 0xa37

0xa3a: Return(); Pop(0)

0xa3b: PushEmpty(bool, bool)
0xa3c: @ IsOverrideActive(Stack[-1])
0xa3d: Pop(0)
0xa3e: Pop(0); Push((bool) Stack[-1] == 0)
0xa3f: IF (Stack[-1] == 0) GOTO 0xa44; Pop(1)

0xa40: PushEmpty(object)
0xa41: Stack[-1] = Stack[-4]
0xa42: Call2 0xcc4

0xa43: Pop(1)
0xa44: Return(); Pop(2)

0xa45: PushEmpty(cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector, cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector)
0xa46: Pop(0); Push((bool) Stack[-21] == 0)
0xa47: IF (Stack[-1] == 0) GOTO 0xa4d; Pop(1)

0xa48: PushEmpty(string)
0xa49: Stack[-1] = "fdie"
0xa4a: Call2 0xaa0

0xa4b: Pop(1)
0xa4c: GOTO 0xa9f

0xa4d: @@ GetPosition(Stack[-10])
0xa4e: Pop(0)
0xa4f: @ GetPosition(Stack[-9])
0xa50: Pop(0)
0xa51: @ GetDirection(Stack[-8])
0xa52: Pop(0)
0xa53: Stack[-7] = Stack[-9] - Stack[-10]; Pop(0);
0xa54: Push(CvectorIndex(Stack[-7], 0))
0xa55: Push(CvectorIndex(Stack[-9], 0))
0xa56: Pop(2); Push(Stack[-2] * Stack[-1]);
0xa57: Push(CvectorIndex(Stack[-8], 2))
0xa58: Push(CvectorIndex(Stack[-10], 2))
0xa59: Pop(2); Push(Stack[-2] * Stack[-1]);
0xa5a: Pop(2); Push(Stack[-2] + Stack[-1]);
0xa5b: Push((int) 0)
0xa5c: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0xa5d: IF (Stack[-1] == 0) GOTO 0xa60; Pop(1)

0xa5e: Stack[-6] = "fdie"
0xa5f: GOTO 0xa61

0xa60: Stack[-6] = "bdie"
0xa61: @ RemoveRTEnvelope()
0xa62: Pop(0)
0xa63: @ SetDeathState()
0xa64: Pop(0)
0xa65: @ Stop()
0xa66: Pop(0)
0xa67: @ StopAsync()
0xa68: Pop(0)
0xa69: Stack[-5] = Stack[-21]
0xa6a: Push("GetScriptProperty")
0xa6b: Push((int) 2)
0xa6c: Pop(2); Push(IsFuncExist(Stack[-23], Stack[-2], Stack[-1]))
0xa6d: IF (Stack[-1] == 0) GOTO 0xa79; Pop(1)

0xa6e: Push("Owner")
0xa6f: @@ HasScriptProperty(Stack[-5], Stack[-1])
0xa70: Pop(1)
0xa71: Push(Stack[-4])
0xa72: IF (Stack[-1] == 0) GOTO 0xa79; Pop(1)

0xa73: Push("Owner")
0xa74: @@ GetScriptProperty(Stack[-6], Stack[-1])
0xa75: Pop(1)
0xa76: Pop(0); Push((bool) Stack[-5] == 0)
0xa77: IF (Stack[-1] == 0) GOTO 0xa79; Pop(1)

0xa78: Stack[-5] = Stack[-21]
0xa79: Push("@GetEyesHeight")
0xa7a: Push((int) 1)
0xa7b: Pop(2); Push(IsFuncExist(Stack[-7], Stack[-2], Stack[-1]))
0xa7c: IF (Stack[-1] == 0) GOTO 0xa88; Pop(1)

0xa7d: @@ GetEyesHeight(Stack[-2])
0xa7e: Pop(0)
0xa7f: Stack[-1] = CVector(0.0, 0.0, 0.0)
0xa80: Push(CvectorIndex(Stack[-1], 1))
0xa81: Stack[-1] = Stack[-3]
0xa82: CvectorIndex(Stack[-2], 1) = Stack[-1];
0xa83: Push("head")
0xa84: @ LookAsync(Stack[-22], Stack[-1], Stack[-2])
0xa85: Pop(1)
0xa86: Stack[-3] = (bool) 1
0xa87: GOTO 0xa89

0xa88: Stack[-3] = (bool) 0
0xa89: PushEmpty(string)
0xa8a: Stack[-1] = Stack[-7]
0xa8b: Call2 0xc37

0xa8c: Pop(1)
0xa8d: Push("all")
0xa8e: @ PlayAnimation(Stack[-1], Stack[-7])
0xa8f: Pop(1)
0xa90: @ WaitForAnimEnd()
0xa91: Pop(0)
0xa92: Push(Stack[-3])
0xa93: IF (Stack[-1] == 0) GOTO 0xa99; Pop(1)

0xa94: @ StopAsync()
0xa95: Pop(0)
0xa96: Push("head")
0xa97: @ UnlookAsync(Stack[-1])
0xa98: Pop(1)
0xa99: Push("all")
0xa9a: @ LockAnimationEnd(Stack[-1], Stack[-7])
0xa9b: Pop(1)
0xa9c: @ RemoveEnvelope()
0xa9d: Pop(0)
0xa9e: Stack[-5] = 0
0xa9f: Return(); Pop(20)

0xaa0: PushEmpty()
0xaa1: @ RemoveRTEnvelope()
0xaa2: Pop(0)
0xaa3: @ SetDeathState()
0xaa4: Pop(0)
0xaa5: @ Stop()
0xaa6: Pop(0)
0xaa7: @ StopAsync()
0xaa8: Pop(0)
0xaa9: @ StopSecondaryAnimation()
0xaaa: Pop(0)
0xaab: PushEmpty(string)
0xaac: Stack[-1] = Stack[-2]
0xaad: Call2 0xc37

0xaae: Pop(1)
0xaaf: Push("all")
0xab0: @ PlayAnimation(Stack[-1], Stack[-2])
0xab1: Pop(1)
0xab2: @ WaitForAnimEnd()
0xab3: Pop(0)
0xab4: Push("all")
0xab5: @ LockAnimationEnd(Stack[-1], Stack[-2])
0xab6: Pop(1)
0xab7: @ RemoveEnvelope()
0xab8: Pop(0)
0xab9: Return(); Pop(0)

0xaba: PushEmpty()
0xabb: Return(); Pop(0)

0xabc: PushEmpty()
0xabd: Return(); Pop(0)

0xabe: PushEmpty()
0xabf: Return(); Pop(0)

0xac0: Push(GlobalVars[0])
0xac1: IF (Stack[-1] == 0) GOTO 0xac9; Pop(1)

0xac2: PushEmpty(object)
0xac3: Call2 0xc60

0xac4: Pop(0)
0xac5: @ RemoveActor(Stack[-1])
0xac6: Pop(1)
0xac7: @ Hold()
0xac8: Pop(0)
0xac9: PushEmpty(bool)
0xaca: Call2 0xc1c

0xacb: Pop(0)
0xacc: Pop(1); Push((bool) Stack[-1] == 0)
0xacd: IF (Stack[-1] == 0) GOTO 0xad1; Pop(1)

0xace: @ Hold()
0xacf: Pop(0)
0xad0: GOTO 0xac9

0xad1: Return(); Pop(0)

0xad2: PushEmpty()
0xad3: Push("cleanup")
0xad4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xad5: IF (Stack[-1] == 0) GOTO 0xadd; Pop(1)

0xad6: PushEmpty(object)
0xad7: Call2 0xc60

0xad8: Pop(0)
0xad9: @ RemoveActor(Stack[-1])
0xada: Pop(1)
0xadb: @ Hold()
0xadc: Pop(0)
0xadd: Return(); Pop(0)

0xade: @ StopGroup0()
0xadf: Pop(0)
0xae0: @ sync()
0xae1: Pop(0)
0xae2: Return(); Pop(0)

0xae3: PushEmpty()
0xae4: Push((int) 2)
0xae5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xae6: IF (Stack[-1] == 0) GOTO 0xaea; Pop(1)

0xae7: Stack[-2] = "fire"
0xae8: Return(); Pop(0)

0xae9: GOTO 0xaef

0xaea: Push((int) 1)
0xaeb: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xaec: IF (Stack[-1] == 0) GOTO 0xaef; Pop(1)

0xaed: Stack[-2] = "bullet"
0xaee: Return(); Pop(0)

0xaef: Stack[-2] = "phys"
0xaf0: Return(); Pop(0)

0xaf1: PushEmpty(cvector, cvector, cvector, cvector)
0xaf2: @ GetPosition(Stack[-2])
0xaf3: Pop(0)
0xaf4: @@ GetPosition(Stack[-1])
0xaf5: Pop(0)
0xaf6: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0xaf7: Return(); Pop(4)

0xaf8: PushEmpty(bool, bool)
0xaf9: @ IsPlayerActor(Stack[-3], Stack[-1])
0xafa: Pop(0)
0xafb: Stack[-4] = Stack[-1]
0xafc: Return(); Pop(2)

0xafd: PushEmpty(bool, bool)
0xafe: Push("HasProperty")
0xaff: Push((int) 2)
0xb00: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0xb01: Pop(1); Push((bool) Stack[-1] == 0)
0xb02: IF (Stack[-1] == 0) GOTO 0xb05; Pop(1)

0xb03: Stack[-5] = (bool) 0
0xb04: Return(); Pop(2)

0xb05: @@ HasProperty(Stack[-3], Stack[-1])
0xb06: Pop(0)
0xb07: Stack[-5] = Stack[-1]
0xb08: Return(); Pop(2)

0xb09: PushEmpty(int, string, int, float, float, float, int, string, int, float, float, float)
0xb0a: PushEmpty(bool, object, string)
0xb0b: Stack[-2] = Stack[-18]
0xb0c: Stack[-1] = "health"
0xb0d: Call2 0xafd

0xb0e: Pop(2)
0xb0f: Pop(1); Push((bool) Stack[-1] == 0)
0xb10: IF (Stack[-1] == 0) GOTO 0xb13; Pop(1)

0xb11: Stack[-16] = (float) 0.0
0xb12: Return(); Pop(12)

0xb13: PushEmpty(bool, object, string)
0xb14: Stack[-2] = Stack[-18]
0xb15: Stack[-1] = "armor"
0xb16: Call2 0xafd

0xb17: Pop(2)
0xb18: Pop(1); Push((bool) Stack[-1] == 0)
0xb19: IF (Stack[-1] == 0) GOTO 0xb1c; Pop(1)

0xb1a: Stack[-6] = (int) 0
0xb1b: GOTO 0xb1f

0xb1c: Push("armor")
0xb1d: @@ GetProperty(Stack[-1], Stack[-7])
0xb1e: Pop(1)
0xb1f: Push("armor_")
0xb20: PushEmpty(string, int)
0xb21: Stack[-1] = Stack[-16]
0xb22: Call2 0xae3

0xb23: Pop(1)
0xb24: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0xb25: PushEmpty(bool, object, string)
0xb26: Stack[-2] = Stack[-18]
0xb27: Stack[-1] = Stack[-8]
0xb28: Call2 0xafd

0xb29: Pop(2)
0xb2a: Pop(1); Push((bool) Stack[-1] == 0)
0xb2b: IF (Stack[-1] == 0) GOTO 0xb2e; Pop(1)

0xb2c: Stack[-4] = (int) 0
0xb2d: GOTO 0xb30

0xb2e: @@ GetProperty(Stack[-5], Stack[-4])
0xb2f: Pop(0)
0xb30: PushEmpty(float, float, float)
0xb31: Pop(0); Push(Stack[-9] + Stack[-7]);
0xb32: Push((float)100.0)
0xb33: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0xb34: Stack[-1] = (int) 1
0xb35: Call2 0xc70

0xb36: Stack[-6] = Stack[-3]
0xb37: Pop(3)
0xb38: Push("health")
0xb39: @@ GetProperty(Stack[-1], Stack[-3])
0xb3a: Pop(1)
0xb3b: Push((int) 1)
0xb3c: Pop(1); Push(Stack[-1] - Stack[-4]);
0xb3d: Stack[-2] = Stack[-15] * Stack[-1]; Pop(1);
0xb3e: Push("health")
0xb3f: PushEmpty(float, float, float, float)
0xb40: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0xb41: Stack[-2] = (int) 0
0xb42: Stack[-1] = (int) 1
0xb43: Call2 0xc77

0xb44: Pop(3)
0xb45: @@ SetProperty(Stack[-2], Stack[-1])
0xb46: Pop(2)
0xb47: PushEmpty(bool, object)
0xb48: Stack[-1] = Stack[-17]
0xb49: Call2 0xaf8

0xb4a: Pop(1)
0xb4b: IF (Stack[-1] == 0) GOTO 0xb50; Pop(1)

0xb4c: PushEmpty(float)
0xb4d: Stack[-1] = -Stack[-2]; Pop(0);
0xb4e: Call2 0xc8c

0xb4f: Pop(1)
0xb50: Stack[-16] = Stack[-1]
0xb51: Return(); Pop(12)

0xb52: PushEmpty(bool, bool)
0xb53: @@ IsDead(Stack[-1])
0xb54: Pop(0)
0xb55: Stack[-4] = Stack[-1]
0xb56: Return(); Pop(2)

0xb57: PushEmpty(object, object, object, object)
0xb58: Pop(0); Push((bool) Stack[-5] == 0)
0xb59: IF (Stack[-1] == 0) GOTO 0xb5c; Pop(1)

0xb5a: Stack[-6] = (bool) 0
0xb5b: Return(); Pop(4)

0xb5c: PushEmpty(bool)
0xb5d: Stack[-1] = (bool) 0
0xb5e: Push("IsDead")
0xb5f: Push((int) 1)
0xb60: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0xb61: IF (Stack[-1] == 0) GOTO 0xb68; Pop(1)

0xb62: PushEmpty(bool, object)
0xb63: Stack[-1] = Stack[-8]
0xb64: Call2 0xb52

0xb65: Pop(1)
0xb66: IF (Stack[-1] == 0) GOTO 0xb68; Pop(1)

0xb67: Stack[-1] = (bool) 1
0xb68: IF (Stack[-1] == 0) GOTO 0xb6b; Pop(1)

0xb69: Stack[-6] = (bool) 0
0xb6a: Return(); Pop(4)

0xb6b: @ GetScene(Stack[-2])
0xb6c: Pop(0)
0xb6d: Pop(0); Push((bool) Stack[-2] == 0)
0xb6e: IF (Stack[-1] == 0) GOTO 0xb71; Pop(1)

0xb6f: Stack[-6] = (bool) 0
0xb70: Return(); Pop(4)

0xb71: @@ GetScene(Stack[-1])
0xb72: Pop(0)
0xb73: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0xb74: IF (Stack[-1] == 0) GOTO 0xb77; Pop(1)

0xb75: Stack[-6] = (bool) 0
0xb76: Return(); Pop(4)

0xb77: Stack[-6] = (bool) 1
0xb78: Return(); Pop(4)

0xb79: Stack[-1] = 0
0xb7a: Stack[-2] = 0
0xb7b: PushEmpty(int, int)
0xb7c: PushEmpty(bool, object)
0xb7d: Stack[-1] = Stack[-5]
0xb7e: Call2 0xb57

0xb7f: Pop(1)
0xb80: Pop(1); Push((bool) Stack[-1] == 0)
0xb81: IF (Stack[-1] == 0) GOTO 0xb84; Pop(1)

0xb82: Stack[-4] = (bool) 0
0xb83: Return(); Pop(2)

0xb84: PushEmpty(bool, object, string)
0xb85: Stack[-2] = Stack[-6]
0xb86: Stack[-1] = "noaccess"
0xb87: Call2 0xafd

0xb88: Pop(2)
0xb89: Pop(1); Push((bool) Stack[-1] == 0)
0xb8a: IF (Stack[-1] == 0) GOTO 0xb8d; Pop(1)

0xb8b: Stack[-4] = (bool) 1
0xb8c: Return(); Pop(2)

0xb8d: Push("noaccess")
0xb8e: @@ GetProperty(Stack[-1], Stack[-2])
0xb8f: Pop(1)
0xb90: Push((int) 0)
0xb91: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0xb92: Return(); Pop(2)

0xb93: PushEmpty(bool, int, cvector, cvector, cvector, cvector, string, bool, int, cvector, cvector, cvector, cvector, string)
0xb94: Pop(0); Push((bool) Stack[-15] == 0)
0xb95: IF (Stack[-1] == 0) GOTO 0xb97; Pop(1)

0xb96: Return(); Pop(14)

0xb97: @ IsDead(Stack[-7])
0xb98: Pop(0)
0xb99: Push(Stack[-7])
0xb9a: IF (Stack[-1] == 0) GOTO 0xb9c; Pop(1)

0xb9b: Return(); Pop(14)

0xb9c: @ GetSecondaryAnimationType(Stack[-6])
0xb9d: Pop(0)
0xb9e: Push((int) 0)
0xb9f: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0xba0: IF (Stack[-1] == 0) GOTO 0xba2; Pop(1)

0xba1: Return(); Pop(14)

0xba2: @@ GetPosition(Stack[-5])
0xba3: Pop(0)
0xba4: @ GetPosition(Stack[-4])
0xba5: Pop(0)
0xba6: @ GetDirection(Stack[-3])
0xba7: Pop(0)
0xba8: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0xba9: Push(CvectorIndex(Stack[-2], 0))
0xbaa: Push(CvectorIndex(Stack[-4], 0))
0xbab: Pop(2); Push(Stack[-2] * Stack[-1]);
0xbac: Push(CvectorIndex(Stack[-3], 2))
0xbad: Push(CvectorIndex(Stack[-5], 2))
0xbae: Pop(2); Push(Stack[-2] * Stack[-1]);
0xbaf: Pop(2); Push(Stack[-2] + Stack[-1]);
0xbb0: Push((int) 0)
0xbb1: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0xbb2: IF (Stack[-1] == 0) GOTO 0xbb5; Pop(1)

0xbb3: Stack[-1] = "fhit"
0xbb4: GOTO 0xbb6

0xbb5: Stack[-1] = "bhit"
0xbb6: Push("hit_react")
0xbb7: Push("1")
0xbb8: Pop(1); Push(Stack[-3] + Stack[-1]);
0xbb9: Push("2")
0xbba: Pop(1); Push(Stack[-4] + Stack[-1]);
0xbbb: Push((int) -10)
0xbbc: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xbbd: Pop(4)
0xbbe: Return(); Pop(14)

0xbbf: PushEmpty(cvector, object, int, bool, cvector, cvector, int, int, cvector, cvector, object, int, bool, cvector, cvector, int, int, cvector)
0xbc0: PushEmpty(bool)
0xbc1: Stack[-1] = (bool) 0
0xbc2: PushEmpty(bool)
0xbc3: Stack[-1] = (bool) 0
0xbc4: Push(Stack[-23])
0xbc5: IF (Stack[-1] == 0) GOTO 0xbca; Pop(1)

0xbc6: Push((int) 4)
0xbc7: Pop(1); Push((bool) Stack[-23] != Stack[-1])
0xbc8: IF (Stack[-1] == 0) GOTO 0xbca; Pop(1)

0xbc9: Stack[-1] = (bool) 1
0xbca: IF (Stack[-1] == 0) GOTO 0xbcf; Pop(1)

0xbcb: Push((int) 5)
0xbcc: Pop(1); Push((bool) Stack[-22] != Stack[-1])
0xbcd: IF (Stack[-1] == 0) GOTO 0xbcf; Pop(1)

0xbce: Stack[-1] = (bool) 1
0xbcf: IF (Stack[-1] == 0) GOTO 0xbfe; Pop(1)

0xbd0: PushEmpty(cvector, cvector)
0xbd1: PushEmpty(cvector, object)
0xbd2: Stack[-1] = Stack[-25]
0xbd3: Call2 0xaf1

0xbd4: Stack[-3] = Stack[-2]
0xbd5: Pop(2)
0xbd6: Call2 0xc66

0xbd7: Stack[-11] = Stack[-2]
0xbd8: Pop(2)
0xbd9: @ CreateVectorVector(Stack[-8])
0xbda: Pop(0)
0xbdb: Stack[-7] = (int) 1
0xbdc: Push("hit")
0xbdd: Pop(1); Push(Stack[-1] + Stack[-8]);
0xbde: @ GetGeometryLocator(Stack[-1], Stack[-7], Stack[-6], Stack[-5])
0xbdf: Pop(1)
0xbe0: Pop(0); Push((bool) Stack[-6] == 0)
0xbe1: IF (Stack[-1] == 0) GOTO 0xbe3; Pop(1)

0xbe2: GOTO 0xbec

0xbe3: Pop(0); Push(Stack[-4] | Stack[-9]);
0xbe4: Push((float)0.70711)
0xbe5: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0xbe6: IF (Stack[-1] == 0) GOTO 0xbe9; Pop(1)

0xbe7: @@ add(Stack[-5])
0xbe8: Pop(0)
0xbe9: Push((int) 1)
0xbea: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0xbeb: GOTO 0xbdc

0xbec: @@ size(Stack[-3])
0xbed: Pop(0)
0xbee: Push(Stack[-3])
0xbef: IF (Stack[-1] == 0) GOTO 0xbfd; Pop(1)

0xbf0: @ irand(Stack[-2], Stack[-3])
0xbf1: Pop(0)
0xbf2: @@ get(Stack[-1], Stack[-2])
0xbf3: Pop(0)
0xbf4: PushEmpty(object, int, float, cvector, cvector)
0xbf5: Stack[-5] = Stack[-26]
0xbf6: Stack[-4] = Stack[-25]
0xbf7: Stack[-3] = Stack[-24]
0xbf8: Stack[-2] = Stack[-6]
0xbf9: Stack[-1] = -Stack[-14]; Pop(0);
0xbfa: Call2 0xc03

0xbfb: Pop(5)
0xbfc: Return(); Pop(18)

0xbfd: Stack[-8] = 0
0xbfe: PushEmpty(object)
0xbff: Stack[-1] = Stack[-22]
0xc00: Call2 0xb93

0xc01: Pop(1)
0xc02: Return(); Pop(18)

0xc03: PushEmpty(object, object, object, object)
0xc04: @ GetScene(Stack[-2])
0xc05: Pop(0)
0xc06: Push("scripted")
0xc07: Push("blood_dir.xml")
0xc08: @ AddActorByType(Stack[-3], Stack[-2], Stack[-4], Stack[-8], Stack[-7], Stack[-1])
0xc09: Pop(2)
0xc0a: PushEmpty(object)
0xc0b: Stack[-1] = Stack[-10]
0xc0c: Call2 0xb93

0xc0d: Pop(1)
0xc0e: Return(); Pop(4)

0xc0f: Stack[-1] = 0
0xc10: Stack[-2] = 0
0xc11: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0xc12: @@ GetPosition(Stack[-3])
0xc13: Pop(0)
0xc14: @ GetPosition(Stack[-2])
0xc15: Pop(0)
0xc16: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0xc17: Push(CvectorIndex(Stack[-1], 0))
0xc18: Push(CvectorIndex(Stack[-2], 2))
0xc19: @ RotateAsync(Stack[-2], Stack[-1])
0xc1a: Pop(2)
0xc1b: Return(); Pop(6)

0xc1c: PushEmpty(bool, bool)
0xc1d: @ IsLoaded(Stack[-1])
0xc1e: Pop(0)
0xc1f: Stack[-3] = Stack[-1]
0xc20: Return(); Pop(2)

0xc21: PushEmpty(float, cvector, float, cvector)
0xc22: @@ GetEyesHeight(Stack[-2])
0xc23: Pop(0)
0xc24: Stack[-1] = CVector(0.0, 0.0, 0.0)
0xc25: Push(CvectorIndex(Stack[-1], 1))
0xc26: Stack[-1] = Stack[-3]
0xc27: CvectorIndex(Stack[-2], 1) = Stack[-1];
0xc28: Push("head")
0xc29: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0xc2a: Pop(1)
0xc2b: Return(); Pop(4)

0xc2c: PushEmpty(bool, bool)
0xc2d: PushEmpty(bool, int, int)
0xc2e: Stack[-2] = Stack[-7]
0xc2f: Stack[-1] = Stack[-6]
0xc30: Call2 0xc87

0xc31: Pop(2)
0xc32: IF (Stack[-1] == 0) GOTO 0xc36; Pop(1)

0xc33: Push((int) 0)
0xc34: @@ AddItem(Stack[-2], Stack[-6], Stack[-1])
0xc35: Pop(1)
0xc36: Return(); Pop(2)

0xc37: PushEmpty(bool, int, bool, int, bool, float, cvector, cvector, bool, int, bool, int, bool, float, cvector, cvector)
0xc38: @ IsExisting3DSound(Stack[-8], Stack[-17])
0xc39: Pop(0)
0xc3a: Pop(0); Push((bool) Stack[-8] == 0)
0xc3b: IF (Stack[-1] == 0) GOTO 0xc50; Pop(1)

0xc3c: Stack[-7] = (int) 0
0xc3d: Push((int) 1)
0xc3e: Pop(1); Push(Stack[-8] + Stack[-1]);
0xc3f: Pop(1); Push(Stack[-18] + Stack[-1]);
0xc40: @ IsExisting3DSound(Stack[-7], Stack[-1])
0xc41: Pop(1)
0xc42: Pop(0); Push((bool) Stack[-6] == 0)
0xc43: IF (Stack[-1] == 0) GOTO 0xc45; Pop(1)

0xc44: GOTO 0xc48

0xc45: Push((int) 1)
0xc46: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0xc47: GOTO 0xc3d

0xc48: Pop(0); Push((bool) Stack[-7] == 0)
0xc49: IF (Stack[-1] == 0) GOTO 0xc4b; Pop(1)

0xc4a: Return(); Pop(16)

0xc4b: @ irand(Stack[-5], Stack[-7])
0xc4c: Pop(0)
0xc4d: Push((int) 1)
0xc4e: Pop(1); Push(Stack[-6] + Stack[-1]);
0xc4f: Stack[-18] = Stack[-18] + Stack[-1]; Pop(1);
0xc50: @ Is3DSoundLoaded(Stack[-4], Stack[-17])
0xc51: Pop(0)
0xc52: Push(Stack[-4])
0xc53: IF (Stack[-1] == 0) GOTO 0xc5f; Pop(1)

0xc54: @ GetEyesHeight(Stack[-3])
0xc55: Pop(0)
0xc56: @ GetDirection(Stack[-2])
0xc57: Pop(0)
0xc58: Push((int) 50)
0xc59: Stack[-2] = Stack[-3] * Stack[-1]; Pop(1);
0xc5a: Push(CvectorIndex(Stack[-1], 1))
0xc5b: Stack[-1] = Stack[-1] + Stack[-4]; Pop(0);
0xc5c: CvectorIndex(Stack[-2], 1) = Stack[-1];
0xc5d: @ PlayGlobalSound(Stack[-17], Stack[-1])
0xc5e: Pop(0)
0xc5f: Return(); Pop(16)

0xc60: PushEmpty(object, object)
0xc61: @ self(Stack[-1])
0xc62: Pop(0)
0xc63: Stack[-3] = Stack[-1]
0xc64: Return(); Pop(2)

0xc65: Stack[-1] = 0
0xc66: PushEmpty(float, float)
0xc67: Pop(0); Push(Stack[-3] | Stack[-3]);
0xc68: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0xc69: Push((float)0.0)
0xc6a: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xc6b: IF (Stack[-1] == 0) GOTO 0xc6e; Pop(1)

0xc6c: Stack[-4] = CVector(0.0, 0.0, 0.0)
0xc6d: Return(); Pop(2)

0xc6e: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0xc6f: Return(); Pop(2)

0xc70: PushEmpty()
0xc71: Pop(0); Push((bool) Stack[-2] < Stack[-1])
0xc72: IF (Stack[-1] == 0) GOTO 0xc75; Pop(1)

0xc73: Stack[-3] = Stack[-2]
0xc74: GOTO 0xc76

0xc75: Stack[-3] = Stack[-1]
0xc76: Return(); Pop(0)

0xc77: PushEmpty()
0xc78: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0xc79: IF (Stack[-1] == 0) GOTO 0xc7c; Pop(1)

0xc7a: Stack[-4] = Stack[-2]
0xc7b: Return(); Pop(0)

0xc7c: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0xc7d: IF (Stack[-1] == 0) GOTO 0xc80; Pop(1)

0xc7e: Stack[-4] = Stack[-1]
0xc7f: Return(); Pop(0)

0xc80: Stack[-4] = Stack[-3]
0xc81: Return(); Pop(0)

0xc82: PushEmpty(float, float)
0xc83: @ rand(Stack[-1])
0xc84: Pop(0)
0xc85: Stack[-4] = Stack[-1] < Stack[-3]; Pop(0);
0xc86: Return(); Pop(2)

0xc87: PushEmpty(int, int)
0xc88: @ irand(Stack[-1], Stack[-3])
0xc89: Pop(0)
0xc8a: Stack[-5] = Stack[-1] < Stack[-4]; Pop(0);
0xc8b: Return(); Pop(2)

0xc8c: PushEmpty(object, object)
0xc8d: @ CreateFloatVector(Stack[-1])
0xc8e: Pop(0)
0xc8f: @@ add(Stack[-3])
0xc90: Pop(0)
0xc91: Push((int) 0)
0xc92: Pop(1); Push((bool) Stack[-4] < Stack[-1])
0xc93: IF (Stack[-1] == 0) GOTO 0xc98; Pop(1)

0xc94: Push((float)0.7)
0xc95: Push((int) 500)
0xc96: @ RumblePlay(Stack[-2], Stack[-1])
0xc97: Pop(2)
0xc98: Push((int) 15)
0xc99: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0xc9a: Pop(1)
0xc9b: Return(); Pop(2)

0xc9c: Stack[-1] = 0
0xc9d: PushEmpty(bool, bool)
0xc9e: @ IsPlayerActor(Stack[-3], Stack[-1])
0xc9f: Pop(0)
0xca0: Push(Stack[-1])
0xca1: IF (Stack[-1] == 0) GOTO 0xca5; Pop(1)

0xca2: Push("attack")
0xca3: @ PlayGlobalMusic(Stack[-1])
0xca4: Pop(1)
0xca5: Return(); Pop(2)

0xca6: PushEmpty(string, string)
0xca7: Stack[-1] = "idle"
0xca8: Push(Stack[-3])
0xca9: IF (Stack[-1] == 0) GOTO 0xcab; Pop(1)

0xcaa: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0xcab: Stack[-4] = Stack[-1]
0xcac: Return(); Pop(2)

0xcad: PushEmpty(int, bool, int, bool)
0xcae: Stack[-2] = (int) 0
0xcaf: Push("all")
0xcb0: PushEmpty(string, int)
0xcb1: Stack[-1] = Stack[-5]
0xcb2: Call2 0xca6

0xcb3: Pop(1)
0xcb4: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0xcb5: Pop(2)
0xcb6: Pop(0); Push((bool) Stack[-1] == 0)
0xcb7: IF (Stack[-1] == 0) GOTO 0xcb9; Pop(1)

0xcb8: GOTO 0xcbc

0xcb9: Push((int) 1)
0xcba: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0xcbb: GOTO 0xcaf

0xcbc: Stack[-5] = Stack[-2]
0xcbd: Return(); Pop(4)

0xcbe: PushEmpty(int, int)
0xcbf: Push("branch")
0xcc0: @ GetVariable(Stack[-1], Stack[-2])
0xcc1: Pop(1)
0xcc2: Stack[-3] = Stack[-1]
0xcc3: Return(); Pop(2)

0xcc4: PushEmpty()
0xcc5: PushEmpty(int)
0xcc6: Call2 0xcbe

0xcc7: Pop(0)
0xcc8: Push((int) 1)
0xcc9: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xcca: IF (Stack[-1] == 0) GOTO 0xcce; Pop(1)

0xccb: @ WorkWithCorpse(Stack[-1])
0xccc: Pop(0)
0xccd: GOTO 0xcd0

0xcce: @ Barter(Stack[-1])
0xccf: Pop(0)
0xcd0: Return(); Pop(0)

0xcd1: PushEmpty(object, int, bool, object, int, bool)
0xcd2: @ CreateInvItem(Stack[-3])
0xcd3: Pop(0)
0xcd4: @@ SetItemName(Stack[-7])
0xcd5: Pop(0)
0xcd6: Push("Organ")
0xcd7: Push((int) 1)
0xcd8: @@ SetProperty(Stack[-2], Stack[-1])
0xcd9: Pop(2)
0xcda: @@ GetItemID(Stack[-2])
0xcdb: Pop(0)
0xcdc: Push((int) 0)
0xcdd: Push((int) 1)
0xcde: @ AddItem(Stack[-3], Stack[-5], Stack[-2], Stack[-1])
0xcdf: Pop(2)
0xce0: Return(); Pop(6)

0xce1: Stack[-3] = 0
0xce2: PushEmpty(int)
0xce3: Call2 0xcbe

0xce4: Pop(0)
0xce5: Push((int) 1)
0xce6: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0xce7: IF (Stack[-1] == 0) GOTO 0xce9; Pop(1)

0xce8: Return(); Pop(0)

0xce9: PushEmpty(string)
0xcea: Stack[-1] = "liver"
0xceb: Call2 0xcd1

0xcec: Pop(1)
0xced: PushEmpty(string)
0xcee: Stack[-1] = "kidney"
0xcef: Call2 0xcd1

0xcf0: Pop(1)
0xcf1: PushEmpty(string)
0xcf2: Stack[-1] = "heart"
0xcf3: Call2 0xcd1

0xcf4: Pop(1)
0xcf5: PushEmpty(string)
0xcf6: Stack[-1] = "blood"
0xcf7: Call2 0xcd1

0xcf8: Pop(1)
0xcf9: Return(); Pop(0)

0xcfa: PushEmpty()
0xcfb: Push("cleanup")
0xcfc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xcfd: IF (Stack[-1] == 0) GOTO 0xd01; Pop(1)

0xcfe: Push(GlobalVars[0])
0xcff: Stack[-1] = (bool) 1
0xd00: GlobalVars[0] = Stack[-1]; Pop(1)
0xd01: Return(); Pop(0)

0xd02: PushEmpty(cvector, cvector, cvector, float, cvector, cvector, cvector, float, cvector, cvector, cvector, float, cvector, cvector, cvector, float, cvector, cvector, cvector, float, cvector, cvector, cvector, float)
0xd03: PushEmpty(object)
0xd04: Call2 0xc60

0xd05: Pop(0)
0xd06: Pop(1); Push((bool) Stack[-27] == Stack[-1])
0xd07: IF (Stack[-1] == 0) GOTO 0xd0a; Pop(1)

0xd08: Stack[-27] = (bool) 0
0xd09: Return(); Pop(24)

0xd0a: Push("b9q03_corpse")
0xd0b: Push(GlobalVars[1])
0xd0c: Push((int) 1)
0xd0d: Pop(2); Push(Stack[-2] + Stack[-1]);
0xd0e: Pop(2); Push(Stack[-2] + Stack[-1]);
0xd0f: Pop(1); Push((bool) Stack[-26] == Stack[-1])
0xd10: IF (Stack[-1] == 0) GOTO 0xd19; Pop(1)

0xd11: PushEmpty(bool, object)
0xd12: Stack[-1] = Stack[-28]
0xd13: Call2 0xe51

0xd14: Pop(1)
0xd15: IF (Stack[-1] == 0) GOTO 0xd18; Pop(1)

0xd16: Stack[-27] = (bool) 1
0xd17: Return(); Pop(24)

0xd18: GOTO 0xd65

0xd19: Push("b9q03_helpme")
0xd1a: Push(GlobalVars[1])
0xd1b: Push((int) 1)
0xd1c: Pop(2); Push(Stack[-2] + Stack[-1]);
0xd1d: Pop(2); Push(Stack[-2] + Stack[-1]);
0xd1e: Pop(1); Push((bool) Stack[-26] == Stack[-1])
0xd1f: IF (Stack[-1] == 0) GOTO 0xd31; Pop(1)

0xd20: @@ GetPosition(Stack[-12])
0xd21: Pop(0)
0xd22: @ GetPosition(Stack[-11])
0xd23: Pop(0)
0xd24: Stack[-10] = Stack[-12] - Stack[-11]; Pop(0);
0xd25: Stack[-9] = Stack[-10] | Stack[-10]; Pop(0);
0xd26: Push((float)4000000.0)
0xd27: Pop(1); Push((bool) Stack[-10] < Stack[-1])
0xd28: IF (Stack[-1] == 0) GOTO 0xd30; Pop(1)

0xd29: PushEmpty(bool, object)
0xd2a: Stack[-1] = Stack[-28]
0xd2b: Call2 0xe75

0xd2c: Pop(1)
0xd2d: IF (Stack[-1] == 0) GOTO 0xd30; Pop(1)

0xd2e: Stack[-27] = (bool) 1
0xd2f: Return(); Pop(24)

0xd30: GOTO 0xd65

0xd31: Push("player_shot")
0xd32: Pop(1); Push((bool) Stack[-26] == Stack[-1])
0xd33: IF (Stack[-1] == 0) GOTO 0xd4f; Pop(1)

0xd34: @@ GetPosition(Stack[-8])
0xd35: Pop(0)
0xd36: @ GetPosition(Stack[-7])
0xd37: Pop(0)
0xd38: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0xd39: Stack[-5] = Stack[-6] | Stack[-6]; Pop(0);
0xd3a: Push((float)360000.0)
0xd3b: Pop(1); Push((bool) Stack[-6] < Stack[-1])
0xd3c: IF (Stack[-1] == 0) GOTO 0xd44; Pop(1)

0xd3d: PushEmpty(bool, object)
0xd3e: Stack[-1] = Stack[-28]
0xd3f: Call2 0xe75

0xd40: Pop(1)
0xd41: IF (Stack[-1] == 0) GOTO 0xd44; Pop(1)

0xd42: Stack[-27] = (bool) 1
0xd43: Return(); Pop(24)

0xd44: Push((float)12250000.0)
0xd45: Pop(1); Push((bool) Stack[-6] < Stack[-1])
0xd46: IF (Stack[-1] == 0) GOTO 0xd4e; Pop(1)

0xd47: PushEmpty(bool, object)
0xd48: Stack[-1] = Stack[-28]
0xd49: Call2 0xe51

0xd4a: Pop(1)
0xd4b: IF (Stack[-1] == 0) GOTO 0xd4e; Pop(1)

0xd4c: Stack[-27] = (bool) 1
0xd4d: Return(); Pop(24)

0xd4e: GOTO 0xd65

0xd4f: Push("b9q03BonfireBurnedByFollower")
0xd50: Pop(1); Push((bool) Stack[-26] == Stack[-1])
0xd51: IF (Stack[-1] == 0) GOTO 0xd65; Pop(1)

0xd52: @@ GetPosition(Stack[-4])
0xd53: Pop(0)
0xd54: @ GetPosition(Stack[-3])
0xd55: Pop(0)
0xd56: Stack[-2] = Stack[-4] - Stack[-3]; Pop(0);
0xd57: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0xd58: Push((float)2250000.0)
0xd59: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xd5a: IF (Stack[-1] == 0) GOTO 0xd65; Pop(1)

0xd5b: PushEmpty(bool, object)
0xd5c: Stack[-1] = Stack[-28]
0xd5d: Call2 0xe75

0xd5e: Pop(1)
0xd5f: IF (Stack[-1] == 0) GOTO 0xd65; Pop(1)

0xd60: Push("Attacking follower after he has burned bonefire.")
0xd61: @ Trace(Stack[-1])
0xd62: Pop(1)
0xd63: Stack[-27] = (bool) 1
0xd64: Return(); Pop(24)

0xd65: Stack[-27] = (bool) 0
0xd66: Return(); Pop(24)

0xd67: PushEmpty()
0xd68: PushEmpty(bool)
0xd69: Stack[-1] = (bool) 0
0xd6a: Push("IsDead")
0xd6b: Push((int) 1)
0xd6c: Pop(2); Push(IsFuncExist(Stack[-4], Stack[-2], Stack[-1]))
0xd6d: IF (Stack[-1] == 0) GOTO 0xd74; Pop(1)

0xd6e: PushEmpty(bool, object)
0xd6f: Stack[-1] = Stack[-4]
0xd70: Call2 0xb52

0xd71: Pop(1)
0xd72: IF (Stack[-1] == 0) GOTO 0xd74; Pop(1)

0xd73: Stack[-1] = (bool) 1
0xd74: IF (Stack[-1] == 0) GOTO 0xd88; Pop(1)

0xd75: PushEmpty(bool, object, string)
0xd76: Stack[-2] = Stack[-4]
0xd77: Stack[-1] = "b9q03_corpse"
0xd78: Call2 0xafd

0xd79: Pop(2)
0xd7a: IF (Stack[-1] == 0) GOTO 0xd7d; Pop(1)

0xd7b: Stack[-2] = (bool) 0
0xd7c: Return(); Pop(0)

0xd7d: Push("b9q03_corpse")
0xd7e: Push((int) 1)
0xd7f: @@ SetProperty(Stack[-2], Stack[-1])
0xd80: Pop(2)
0xd81: PushEmpty(bool, object)
0xd82: Stack[-1] = Stack[-3]
0xd83: Call2 0xe3f

0xd84: Stack[-4] = Stack[-2]
0xd85: Pop(2)
0xd86: Return(); Pop(0)

0xd87: GOTO 0xda0

0xd88: PushEmpty(bool, object)
0xd89: Stack[-1] = Stack[-3]
0xd8a: Call2 0xaf8

0xd8b: Pop(1)
0xd8c: IF (Stack[-1] == 0) GOTO 0xd94; Pop(1)

0xd8d: PushEmpty(bool, object)
0xd8e: Stack[-1] = Stack[-3]
0xd8f: Call2 0xe75

0xd90: Stack[-4] = Stack[-2]
0xd91: Pop(2)
0xd92: Return(); Pop(0)

0xd93: GOTO 0xda0

0xd94: PushEmpty(bool, object, string)
0xd95: Stack[-2] = Stack[-4]
0xd96: Stack[-1] = "b9q03"
0xd97: Call2 0xafd

0xd98: Pop(2)
0xd99: IF (Stack[-1] == 0) GOTO 0xda0; Pop(1)

0xd9a: PushEmpty(bool, object)
0xd9b: Stack[-1] = Stack[-3]
0xd9c: Call2 0xe75

0xd9d: Stack[-4] = Stack[-2]
0xd9e: Pop(2)
0xd9f: Return(); Pop(0)

0xda0: Stack[-2] = (bool) 0
0xda1: Return(); Pop(0)

0xda2: PushEmpty()
0xda3: PushEmpty(bool, object)
0xda4: Stack[-1] = Stack[-3]
0xda5: Call2 0xaf8

0xda6: Pop(1)
0xda7: IF (Stack[-1] == 0) GOTO 0xdaf; Pop(1)

0xda8: PushEmpty(bool, object)
0xda9: Stack[-1] = Stack[-3]
0xdaa: Call2 0xe63

0xdab: Stack[-4] = Stack[-2]
0xdac: Pop(2)
0xdad: Return(); Pop(0)

0xdae: GOTO 0xdbb

0xdaf: PushEmpty(bool, object, string)
0xdb0: Stack[-2] = Stack[-4]
0xdb1: Stack[-1] = "b9q03"
0xdb2: Call2 0xafd

0xdb3: Pop(2)
0xdb4: IF (Stack[-1] == 0) GOTO 0xdbb; Pop(1)

0xdb5: PushEmpty(bool, object)
0xdb6: Stack[-1] = Stack[-3]
0xdb7: Call2 0xe63

0xdb8: Stack[-4] = Stack[-2]
0xdb9: Pop(2)
0xdba: Return(); Pop(0)

0xdbb: Stack[-2] = (bool) 0
0xdbc: Return(); Pop(0)

0xdbd: PushEmpty(object, cvector, cvector, cvector, bool, float, int, cvector, float, object, cvector, cvector, cvector, bool, float, int, cvector, float)
0xdbe: @ GetMainOutdoorScene(Stack[-9])
0xdbf: Pop(0)
0xdc0: @ GetPosition(Stack[-8])
0xdc1: Pop(0)
0xdc2: Stack[-4] = (int) 4000000
0xdc3: Stack[-3] = (int) 0
0xdc4: Push(GlobalVars[1])
0xdc5: Stack[-1] = (int) 1
0xdc6: GlobalVars[1] = Stack[-1]; Pop(1)
0xdc7: Push((bool) 1)
0xdc8: IF (Stack[-1] == 0) GOTO 0xdde; Pop(1)

0xdc9: Push("pt_b9q03_bonfire")
0xdca: Push(GlobalVars[1])
0xdcb: Pop(2); Push(Stack[-2] + Stack[-1]);
0xdcc: @@ GetLocator(Stack[-1], Stack[-6], Stack[-8], Stack[-7])
0xdcd: Pop(1)
0xdce: Pop(0); Push((bool) Stack[-5] == 0)
0xdcf: IF (Stack[-1] == 0) GOTO 0xdd1; Pop(1)

0xdd0: GOTO 0xdde

0xdd1: Stack[-2] = Stack[-8] - Stack[-7]; Pop(0);
0xdd2: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0xdd3: Pop(0); Push((bool) Stack[-1] < Stack[-4])
0xdd4: IF (Stack[-1] == 0) GOTO 0xdd9; Pop(1)

0xdd5: Stack[-4] = Stack[-1]
0xdd6: Push(GlobalVars[1])
0xdd7: Stack[-4] = Stack[-1]
0xdd8: Pop(1)
0xdd9: Push(GlobalVars[1])
0xdda: Push((int) 1)
0xddb: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0xddc: GlobalVars[1] = Stack[-1]; Pop(1)
0xddd: GOTO 0xdc7

0xdde: Push(GlobalVars[1])
0xddf: Push((int) 1)
0xde0: Stack[-2] = Stack[-5] - Stack[-1]; Pop(1);
0xde1: GlobalVars[1] = Stack[-1]; Pop(1)
0xde2: Push(GlobalVars[1])
0xde3: Push((int) -1)
0xde4: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xde5: IF (Stack[-1] == 0) GOTO 0xde8; Pop(1)

0xde6: Stack[-19] = (bool) 0
0xde7: Return(); Pop(18)

0xde8: Push("Bonfire index: ")
0xde9: Push(GlobalVars[1])
0xdea: Push((int) 1)
0xdeb: Pop(2); Push(Stack[-2] + Stack[-1]);
0xdec: Pop(2); Push(Stack[-2] + Stack[-1]);
0xded: @ Trace(Stack[-1])
0xdee: Pop(1)
0xdef: Push(GlobalVars[2])
0xdf0: Stack[-1] = (int) 0
0xdf1: GlobalVars[2] = Stack[-1]; Pop(1)
0xdf2: Push((bool) 1)
0xdf3: IF (Stack[-1] == 0) GOTO 0xe09; Pop(1)

0xdf4: Push("pt_b9q03_bonfire")
0xdf5: Push(GlobalVars[1])
0xdf6: Push((int) 1)
0xdf7: Pop(2); Push(Stack[-2] + Stack[-1]);
0xdf8: Pop(2); Push(Stack[-2] + Stack[-1]);
0xdf9: Push("_patrol")
0xdfa: Pop(2); Push(Stack[-2] + Stack[-1]);
0xdfb: Push(GlobalVars[2])
0xdfc: Push((int) 1)
0xdfd: Pop(2); Push(Stack[-2] + Stack[-1]);
0xdfe: Pop(2); Push(Stack[-2] + Stack[-1]);
0xdff: @@ GetLocator(Stack[-1], Stack[-6], Stack[-8], Stack[-7])
0xe00: Pop(1)
0xe01: Pop(0); Push((bool) Stack[-5] == 0)
0xe02: IF (Stack[-1] == 0) GOTO 0xe04; Pop(1)

0xe03: GOTO 0xe09

0xe04: Push(GlobalVars[2])
0xe05: Push((int) 1)
0xe06: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0xe07: GlobalVars[2] = Stack[-1]; Pop(1)
0xe08: GOTO 0xdf2

0xe09: Push("Bonfire pantrol point count: ")
0xe0a: Push(GlobalVars[2])
0xe0b: Pop(2); Push(Stack[-2] + Stack[-1]);
0xe0c: @ Trace(Stack[-1])
0xe0d: Pop(1)
0xe0e: Stack[-19] = (bool) 1
0xe0f: Return(); Pop(18)

0xe10: Stack[-9] = 0
0xe11: PushEmpty()
0xe12: Push(GlobalVars[3])
0xe13: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xe14: IF (Stack[-1] == 0) GOTO 0xe17; Pop(1)

0xe15: Stack[-2] = (bool) 0
0xe16: Return(); Pop(0)

0xe17: Push((int) 0)
0xe18: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xe19: IF (Stack[-1] == 0) GOTO 0xe23; Pop(1)

0xe1a: Push(GlobalVars[4])
0xe1b: Push(GlobalVars[3])
0xe1c: Stack[-2] = Stack[-1]
0xe1d: Pop(1)
0xe1e: GlobalVars[4] = Stack[-1]; Pop(1)
0xe1f: Push("changing state to c_iStateWaitForLoad")
0xe20: @ Trace(Stack[-1])
0xe21: Pop(1)
0xe22: GOTO 0xe3a

0xe23: Push((int) 1)
0xe24: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xe25: IF (Stack[-1] == 0) GOTO 0xe2a; Pop(1)

0xe26: Push("changing state to c_iStateHeatHands")
0xe27: @ Trace(Stack[-1])
0xe28: Pop(1)
0xe29: GOTO 0xe3a

0xe2a: Push((int) 2)
0xe2b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xe2c: IF (Stack[-1] == 0) GOTO 0xe31; Pop(1)

0xe2d: Push("changing state to c_iStateIdle")
0xe2e: @ Trace(Stack[-1])
0xe2f: Pop(1)
0xe30: GOTO 0xe3a

0xe31: Push((int) 3)
0xe32: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xe33: IF (Stack[-1] == 0) GOTO 0xe38; Pop(1)

0xe34: Push("changing state to c_iStatePatrol")
0xe35: @ Trace(Stack[-1])
0xe36: Pop(1)
0xe37: GOTO 0xe3a

0xe38: Stack[-2] = (bool) 0
0xe39: Return(); Pop(0)

0xe3a: Push(GlobalVars[3])
0xe3b: Stack[-1] = Stack[-2]
0xe3c: GlobalVars[3] = Stack[-1]; Pop(1)
0xe3d: Stack[-2] = (bool) 1
0xe3e: Return(); Pop(0)

0xe3f: PushEmpty()
0xe40: Push(GlobalVars[3])
0xe41: Push((int) 4)
0xe42: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xe43: IF (Stack[-1] == 0) GOTO 0xe46; Pop(1)

0xe44: Stack[-2] = (bool) 0
0xe45: Return(); Pop(0)

0xe46: Push(GlobalVars[3])
0xe47: Stack[-1] = (int) 4
0xe48: GlobalVars[3] = Stack[-1]; Pop(1)
0xe49: Push("changing state to c_iStateAware")
0xe4a: @ Trace(Stack[-1])
0xe4b: Pop(1)
0xe4c: Push(GlobalVars[5])
0xe4d: Stack[-1] = Stack[-2]
0xe4e: GlobalVars[5] = Stack[-1]; Pop(1)
0xe4f: Stack[-2] = (bool) 1
0xe50: Return(); Pop(0)

0xe51: PushEmpty()
0xe52: Push(GlobalVars[3])
0xe53: Push((int) 5)
0xe54: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xe55: IF (Stack[-1] == 0) GOTO 0xe58; Pop(1)

0xe56: Stack[-2] = (bool) 0
0xe57: Return(); Pop(0)

0xe58: Push(GlobalVars[3])
0xe59: Stack[-1] = (int) 5
0xe5a: GlobalVars[3] = Stack[-1]; Pop(1)
0xe5b: Push("changing state to c_iStateSearchEnemy")
0xe5c: @ Trace(Stack[-1])
0xe5d: Pop(1)
0xe5e: Push(GlobalVars[6])
0xe5f: Stack[-1] = Stack[-2]
0xe60: GlobalVars[6] = Stack[-1]; Pop(1)
0xe61: Stack[-2] = (bool) 1
0xe62: Return(); Pop(0)

0xe63: PushEmpty()
0xe64: Push(GlobalVars[3])
0xe65: Push((int) 6)
0xe66: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xe67: IF (Stack[-1] == 0) GOTO 0xe6a; Pop(1)

0xe68: Stack[-2] = (bool) 0
0xe69: Return(); Pop(0)

0xe6a: Push(GlobalVars[3])
0xe6b: Stack[-1] = (int) 6
0xe6c: GlobalVars[3] = Stack[-1]; Pop(1)
0xe6d: Push("changing state to c_iStateHearEnemy")
0xe6e: @ Trace(Stack[-1])
0xe6f: Pop(1)
0xe70: Push(GlobalVars[7])
0xe71: Stack[-1] = Stack[-2]
0xe72: GlobalVars[7] = Stack[-1]; Pop(1)
0xe73: Stack[-2] = (bool) 1
0xe74: Return(); Pop(0)

0xe75: PushEmpty()
0xe76: Push(GlobalVars[3])
0xe77: Push((int) 7)
0xe78: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xe79: IF (Stack[-1] == 0) GOTO 0xe7c; Pop(1)

0xe7a: Stack[-2] = (bool) 0
0xe7b: Return(); Pop(0)

0xe7c: Push(GlobalVars[3])
0xe7d: Stack[-1] = (int) 7
0xe7e: GlobalVars[3] = Stack[-1]; Pop(1)
0xe7f: Push("changing state to c_iStateAttack")
0xe80: @ Trace(Stack[-1])
0xe81: Pop(1)
0xe82: Push(GlobalVars[8])
0xe83: Stack[-1] = Stack[-2]
0xe84: GlobalVars[8] = Stack[-1]; Pop(1)
0xe85: Stack[-2] = (bool) 1
0xe86: Return(); Pop(0)

0xe87: PushEmpty(int, int)
0xe88: Push("b9q03HandHeatLock")
0xe89: Push(GlobalVars[1])
0xe8a: Push((int) 1)
0xe8b: Pop(2); Push(Stack[-2] + Stack[-1]);
0xe8c: Pop(2); Push(Stack[-2] + Stack[-1]);
0xe8d: @ GetVariable(Stack[-1], Stack[-2])
0xe8e: Pop(1)
0xe8f: Push((int) 0)
0xe90: Stack[-4] = Stack[-2] != Stack[-1]; Pop(1);
0xe91: Return(); Pop(2)

0xe92: PushEmpty()
0xe93: Push("b9q03HandHeatLock")
0xe94: Push(GlobalVars[1])
0xe95: Push((int) 1)
0xe96: Pop(2); Push(Stack[-2] + Stack[-1]);
0xe97: Pop(2); Push(Stack[-2] + Stack[-1]);
0xe98: Push(Stack[-2])
0xe99: IF (Stack[-1] == 0) GOTO 0xe9c; Pop(1)

0xe9a: Push((int) 1)
0xe9b: GOTO 0xe9d

0xe9c: Push((int) 0)
0xe9d: @ SetVariable(Stack[-2], Stack[-1])
0xe9e: Pop(2)
0xe9f: Return(); Pop(0)

0xea0: PushEmpty(int, int)
0xea1: Push("b9q03PatrolLock")
0xea2: Push(GlobalVars[1])
0xea3: Push((int) 1)
0xea4: Pop(2); Push(Stack[-2] + Stack[-1]);
0xea5: Pop(2); Push(Stack[-2] + Stack[-1]);
0xea6: @ GetVariable(Stack[-1], Stack[-2])
0xea7: Pop(1)
0xea8: Push((int) 0)
0xea9: Stack[-4] = Stack[-2] != Stack[-1]; Pop(1);
0xeaa: Return(); Pop(2)

0xeab: PushEmpty()
0xeac: Push("b9q03PatrolLock")
0xead: Push(GlobalVars[1])
0xeae: Push((int) 1)
0xeaf: Pop(2); Push(Stack[-2] + Stack[-1]);
0xeb0: Pop(2); Push(Stack[-2] + Stack[-1]);
0xeb1: Push(Stack[-2])
0xeb2: IF (Stack[-1] == 0) GOTO 0xeb5; Pop(1)

0xeb3: Push((int) 1)
0xeb4: GOTO 0xeb6

0xeb5: Push((int) 0)
0xeb6: @ SetVariable(Stack[-2], Stack[-1])
0xeb7: Pop(2)
0xeb8: Return(); Pop(0)

0xeb9: PushEmpty()
0xeba: PushEmpty(object, int, float)
0xebb: Stack[-3] = Stack[-7]
0xebc: Stack[-2] = Stack[-6]
0xebd: Stack[-1] = Stack[-5]
0xebe: Call2 0xbbf

0xebf: Pop(3)
0xec0: Return(); Pop(0)

0xec1: PushEmpty()
0xec2: PushEmpty(object, int, float, cvector, cvector)
0xec3: Stack[-5] = Stack[-11]
0xec4: Stack[-4] = Stack[-10]
0xec5: Stack[-3] = Stack[-9]
0xec6: Stack[-2] = Stack[-7]
0xec7: Stack[-1] = Stack[-6]
0xec8: Call2 0xc03

0xec9: Pop(5)
0xeca: Return(); Pop(0)

0xecb: PushEmpty(float, float)
0xecc: Push("health")
0xecd: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xece: IF (Stack[-1] == 0) GOTO 0xed7; Pop(1)

0xecf: Push("health")
0xed0: @ GetProperty(Stack[-1], Stack[-2])
0xed1: Pop(1)
0xed2: Push((int) 0)
0xed3: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0xed4: IF (Stack[-1] == 0) GOTO 0xed7; Pop(1)

0xed5: @ SignalDeath(Stack[-4])
0xed6: Pop(0)
0xed7: Return(); Pop(2)

0xed8: PushEmpty()
0xed9: PushEmpty(object)
0xeda: Stack[-1] = Stack[-2]
0xedb: Push(-1, 0); TaskCall(8)
0xedc: Call2 0x9b1

0xedd: Pop(-1, 0); TaskReturn
0xede: Pop(1)
0xedf: Return(); Pop(0)

0xee0: Stack[-1] = (int) 1
0xee1: Return(); Pop(0)

