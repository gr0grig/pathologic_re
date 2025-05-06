GlobalVarCount = 5
	G_VAR_0 object 
	G_VAR_1 object 
	G_VAR_2 float 
	G_VAR_3 bool 
	G_VAR_4 object 

Strings:
	GetPosition
	GetPFPosition
	walk
	run
	head
	all
	attack_on
	bjump
	attack_off
	fdie
	bdie
	GetScriptProperty
	Owner
	HasScriptProperty
	GetScriptProperty
	@GetEyesHeight
	GetEyesHeight
	disease
	cleansed
	SetProperty
	scripted
	corpse_fire.xml
	cattack
	GetProperty
	RemoveProperty
	continue
	fire
	bullet
	phys
	HasProperty
	HasProperty
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
	blood_dir.xml
	woman
	worker
	butcher
	wasted_girl
	boy
	vaxxabitka
	unosha
	wasted_male
	alkash
	dohodyaga
	vaxxabit
	nudegirl
	morlok
	battle
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
	rusk
	alpha_pills
	beta_pills
	gamma_pills
	ognemet_ammo
	class
	patrol
	sanitar
	soldier
	little_girl
	flame
	Attach
	SetLength
	GetLength
	flame_loop
	FadeIn
	FadeOut
	@GetHeight
	GetHeight
	in
	reputation
	bomber
	hunter
	grabitel
	rat_big
	dog
	Intersect
	Next

Import:
	GetPosition (1 args)
	Stop (0 args)
	FindPathTo (2 args)
	RotatePath (2 args)
	SetTimer (2 args)
	FollowPath (5 args)
	KillTimer (1 args)
	Sleep (2 args)
	RequestClearPath (1 args)
	CanSee (2 args)
	SendPlayerEnemy (2 args)
	UnlookAsync (1 args)
	rand (2 args)
	Sleep (1 args)
	GetRandomPFPointInCircle (4 args)
	FollowPath (3 args)
	GetCameraFarDistance (1 args)
	StopGroup0 (0 args)
	FindShiftedPathTo (2 args)
	WaitForAnimEnd (0 args)
	irand (2 args)
	PlayAnimation (2 args)
	WaitForAnimEnd (1 args)
	ResetAAS (0 args)
	StopAnimation (0 args)
	Face (1 args)
	SetAttackState (1 args)
	ReportAttack (1 args)
	StopAsync (0 args)
	RemoveActor (1 args)
	IsPlayerActor (2 args)
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
	GetScene (1 args)
	AddActorByType (6 args)
	Trigger (2 args)
	IsDead (1 args)
	GetSecondaryAnimationType (1 args)
	FadeSecondaryAnimation (4 args)
	CreateVectorVector (1 args)
	GetGeometryLocator (4 args)
	IsLoaded (1 args)
	AddItem (4 args)
	IsExisting3DSound (2 args)
	Is3DSoundLoaded (2 args)
	GetEyesHeight (1 args)
	PlayGlobalSound (2 args)
	self (1 args)
	CreateObjectSet (1 args)
	CreateFloatVector (1 args)
	SendWorldWndMessage (2 args)
	PlayGlobalMusic (1 args)
	BroadcastMessage (3 args)
	HasAnimation (3 args)
	GetVariable (2 args)
	WorkWithCorpse (1 args)
	Barter (1 args)
	Trace (1 args)
	CreateInvItem (1 args)
	ClearSubContainer (1 args)
	GetInvItemByName (2 args)
	GetAttackDistance (1 args)
	AddActorByType (4 args)
	GetHeight (1 args)
	PlayLoopedGlobalSound (5 args)
	ReportReputationChange (3 args)
	ReportReputationChange (4 args)
	GetProperty (2 args)
	SignalDeath (1 args)

RunOp = 0x202
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (bool, object) Params = 2
		EVENT_1 Op = 0x12 Vars = (object)
		EVENT_3 Op = 0x20 Vars = (object)
		EVENT_17 Op = 0x2e Vars = (object)
		EVENT_7 Op = 0x42 Vars = (int)
		EVENT_10 Op = 0xc4 Vars = (object)
		EVENT_41 Op = 0xcf Vars = (object)
	GTASK_1 Vars = (bool, object, bool, object) Params = 2
		EVENT_17 Op = 0xeb Vars = (object)
		EVENT_7 Op = 0xf8 Vars = (int)
		EVENT_1 Op = 0x14e Vars = (object)
		EVENT_2 Op = 0x15d Vars = (object)
		EVENT_10 Op = 0x1e3 Vars = (object)
		EVENT_41 Op = 0x1ee Vars = (object)
	GTASK_2 Vars = (bool, bool) Params = 0
		EVENT_1 Op = 0x20a Vars = (object)
		EVENT_3 Op = 0x225 Vars = (object)
		EVENT_17 Op = 0x233 Vars = (object)
		EVENT_30 Op = 0x247 Vars = (object, object, bool)
		EVENT_7 Op = 0x254 Vars = (int)
		EVENT_10 Op = 0x29a Vars = (object)
		EVENT_28 Op = 0x29e Vars = ()
		EVENT_41 Op = 0x2a8 Vars = (object)
	GTASK_3  Params = 0
		EVENT_1 Op = 0x2b9 Vars = (object)
		EVENT_3 Op = 0x2d4 Vars = (object)
		EVENT_17 Op = 0x2e2 Vars = (object)
		EVENT_30 Op = 0x2f6 Vars = (object, object, bool)
		EVENT_7 Op = 0x303 Vars = (int)
	GTASK_4 Vars = (object) Params = 2
		EVENT_17 Op = 0x3d6 Vars = (object)
		EVENT_7 Op = 0x3e1 Vars = (int)
	GTASK_5  Params = 1
		EVENT_0 Op = 0x410 Vars = (object)
		EVENT_22 Op = 0x48f Vars = (object, int, float, float)
		EVENT_16 Op = 0x491 Vars = (object, string)
		EVENT_41 Op = 0x493 Vars = (object)
	GTASK_6 Vars = (object, object) Params = 1
		EVENT_32 Op = 0x515 Vars = ()
		EVENT_41 Op = 0x52c Vars = (object)
		EVENT_1 Op = 0x535 Vars = (object)
		EVENT_3 Op = 0x543 Vars = (object)
		EVENT_17 Op = 0x551 Vars = (object)
		EVENT_7 Op = 0x565 Vars = (int)

Events:
EVENT_22 Op = 0xa73 Vars = (object, int, float, float)
EVENT_43 Op = 0xa7b Vars = (object, int, float, float, cvector, cvector)
EVENT_16 Op = 0xa85 Vars = (object, string)
EVENT_41 Op = 0xa92 Vars = (object)

0x0: PushEmpty()
0x1: PushEmpty(bool, object, float, float, bool, bool)
0x2: Stack[-5] = Stack[-7]
0x3: Stack[-4] = (int) 350
0x4: Stack[-3] = (int) 5000
0x5: Stack[-2] = (bool) 0
0x6: Stack[-1] = (bool) 1
0x7: Call2 0x4c

0x8: Stack[-8] = Stack[-6]
0x9: Pop(6)
0xa: Return(); Pop(0)

0xb: PushEmpty()
0xc: PushEmpty(bool, object)
0xd: Stack[-1] = Stack[-3]
0xe: Call2 0x62c

0xf: Stack[-4] = Stack[-2]
0x10: Pop(2)
0x11: Return(); Pop(0)

0x12: PushEmpty()
0x13: PushEmpty(bool, object)
0x14: Stack[-1] = Stack[-3]
0x15: Call2 0x9fe

0x16: Pop(1)
0x17: IF (Stack[-1] == 0) GOTO 0x1f; Pop(1)

0x18: PushEmpty()
0x19: Call2 0xc8

0x1a: Pop(0)
0x1b: PushEmpty(object)
0x1c: Stack[-1] = Stack[-2]
0x1d: Call2 0xa05

0x1e: Pop(1)
0x1f: Return(); Pop(0)

0x20: PushEmpty()
0x21: PushEmpty(bool, object)
0x22: Stack[-1] = Stack[-3]
0x23: Call2 0xa0b

0x24: Pop(1)
0x25: IF (Stack[-1] == 0) GOTO 0x2d; Pop(1)

0x26: PushEmpty()
0x27: Call2 0xc8

0x28: Pop(0)
0x29: PushEmpty(object)
0x2a: Stack[-1] = Stack[-2]
0x2b: Call2 0xa12

0x2c: Pop(1)
0x2d: Return(); Pop(0)

0x2e: PushEmpty()
0x2f: PushEmpty(bool, object)
0x30: Stack[-1] = Stack[-3]
0x31: Call2 0x614

0x32: Pop(1)
0x33: Pop(1); Push((bool) Stack[-1] == 0)
0x34: IF (Stack[-1] == 0) GOTO 0x3a; Pop(1)

0x35: PushEmpty(object)
0x36: Stack[-1] = Stack[-2]
0x37: Call2 0xa42

0x38: Pop(1)
0x39: Return(); Pop(0)

0x3a: PushEmpty()
0x3b: Call2 0xc8

0x3c: Pop(0)
0x3d: PushEmpty(object)
0x3e: Stack[-1] = Stack[-2]
0x3f: Call2 0xa5a

0x40: Pop(1)
0x41: Return(); Pop(0)

0x42: PushEmpty()
0x43: PushEmpty(int)
0x44: Stack[-1] = Stack[-2]
0x45: Call2 0xb2

0x46: Pop(1)
0x47: PushEmpty(int)
0x48: Stack[-1] = Stack[-2]
0x49: Call2 0xab2

0x4a: Pop(1)
0x4b: Return(); Pop(0)

0x4c: PushEmpty(bool, bool, object, cvector, cvector, cvector, float, object, bool, bool, object, cvector, cvector, cvector, float, object)
0x4d: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x4e: Stack[1 + Tasks[-1].StackPointer] = Stack[-21]
0x4f: Stack[-7] = Stack[-17]
0x50: PushEmpty(bool, object)
0x51: Stack[-1] = Stack[-23]
0x52: Call2 0xb

0x53: Pop(1)
0x54: Pop(1); Push((bool) Stack[-1] == 0)
0x55: IF (Stack[-1] == 0) GOTO 0x58; Pop(1)

0x56: Stack[-22] = (bool) 0
0x57: Return(); Pop(16)

0x58: @@ GetPosition(Stack[-5])
0x59: Pop(0)
0x5a: @ GetPosition(Stack[-4])
0x5b: Pop(0)
0x5c: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x5d: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x5e: PushEmpty(bool)
0x5f: Stack[-1] = (bool) 0
0x60: Push((int) 0)
0x61: Pop(1); Push((bool) Stack[-21] > Stack[-1])
0x62: IF (Stack[-1] == 0) GOTO 0x67; Pop(1)

0x63: Pop(0); Push(Stack[-20] * Stack[-20]);
0x64: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x65: IF (Stack[-1] == 0) GOTO 0x67; Pop(1)

0x66: Stack[-1] = (bool) 1
0x67: IF (Stack[-1] == 0) GOTO 0x6c; Pop(1)

0x68: @ Stop()
0x69: Pop(0)
0x6a: Stack[-22] = (bool) 0
0x6b: Return(); Pop(16)

0x6c: Pop(0); Push(Stack[-20] * Stack[-20]);
0x6d: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x6e: IF (Stack[-1] == 0) GOTO 0xaa; Pop(1)

0x6f: @@ GetPFPosition(Stack[-5])
0x70: Pop(0)
0x71: @ FindPathTo(Stack[-1], Stack[-5])
0x72: Pop(0)
0x73: Pop(0); Push(( Stack[-1] != 0 )
0x74: IF (Stack[-1] == 0) GOTO 0x77; Pop(1)

0x75: Stack[-6] = Stack[-1]
0x76: Stack[-1] = 0
0x77: Pop(0); Push(( Stack[-6] != 0 )
0x78: IF (Stack[-1] == 0) GOTO 0x98; Pop(1)

0x79: Push(Stack[-7])
0x7a: IF (Stack[-1] == 0) GOTO 0x81; Pop(1)

0x7b: Stack[-7] = (bool) 0
0x7c: @ RotatePath(Stack[-6], Stack[-8])
0x7d: Pop(0)
0x7e: Pop(0); Push((bool) Stack[-8] == 0)
0x7f: IF (Stack[-1] == 0) GOTO 0x81; Pop(1)

0x80: GOTO 0xb0

0x81: Push((int) 0)
0x82: Push((float)0.3)
0x83: @ SetTimer(Stack[-2], Stack[-1])
0x84: Pop(2)
0x85: PushEmpty(string)
0x86: Call2 0xd8

0x87: Pop(0)
0x88: PushEmpty(string)
0x89: Call2 0xda

0x8a: Pop(0)
0x8b: @ FollowPath(Stack[-8], Stack[-20], Stack[-10], Stack[-2], Stack[-1])
0x8c: Pop(2)
0x8d: Pop(0); Push((bool) Stack[-8] == 0)
0x8e: IF (Stack[-1] == 0) GOTO 0x96; Pop(1)

0x8f: Push( Stack[0 + Tasks[-1].StackPointer] )
0x90: IF (Stack[-1] == 0) GOTO 0x94; Pop(1)

0x91: Stack[-6] = 0
0x92: GOTO 0xb0

0x93: GOTO 0x95

0x94: GOTO 0xaf

0x95: GOTO 0x97

0x96: Stack[-6] = 0
0x97: GOTO 0xa8

0x98: Push((int) 0)
0x99: @ KillTimer(Stack[-1])
0x9a: Pop(1)
0x9b: Push((float)0.5)
0x9c: @ Sleep(Stack[-1], Stack[-9])
0x9d: Pop(1)
0x9e: Pop(0); Push((bool) Stack[-8] == 0)
0x9f: IF (Stack[-1] == 0) GOTO 0xa4; Pop(1)

0xa0: Push( Stack[0 + Tasks[-1].StackPointer] )
0xa1: IF (Stack[-1] == 0) GOTO 0xa4; Pop(1)

0xa2: Stack[-6] = 0
0xa3: GOTO 0xb0

0xa4: Push((int) 0)
0xa5: Push((float)0.3)
0xa6: @ SetTimer(Stack[-2], Stack[-1])
0xa7: Pop(2)
0xa8: Stack[-1] = 0
0xa9: GOTO 0xae

0xaa: Push((int) 0)
0xab: @ KillTimer(Stack[-1])
0xac: Pop(1)
0xad: GOTO 0xb0

0xae: Stack[-6] = 0
0xaf: GOTO 0x50

0xb0: Stack[-22] = !Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0xb1: Return(); Pop(16)

0xb2: PushEmpty()
0xb3: Push((int) 0)
0xb4: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0xb5: IF (Stack[-1] == 0) GOTO 0xb7; Pop(1)

0xb6: Return(); Pop(0)

0xb7: PushEmpty(bool, object)
0xb8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb9: Call2 0xb

0xba: Pop(1)
0xbb: Pop(1); Push((bool) Stack[-1] == 0)
0xbc: IF (Stack[-1] == 0) GOTO 0xbe; Pop(1)

0xbd: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0xbe: Push((int) 0)
0xbf: @ KillTimer(Stack[-1])
0xc0: Pop(1)
0xc1: @ Stop()
0xc2: Pop(0)
0xc3: Return(); Pop(0)

0xc4: PushEmpty()
0xc5: @ RequestClearPath(Stack[-1])
0xc6: Pop(0)
0xc7: Return(); Pop(0)

0xc8: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0xc9: Push((int) 0)
0xca: @ KillTimer(Stack[-1])
0xcb: Pop(1)
0xcc: @ Stop()
0xcd: Pop(0)
0xce: Return(); Pop(0)

0xcf: PushEmpty()
0xd0: PushEmpty()
0xd1: Call2 0xc8

0xd2: Pop(0)
0xd3: PushEmpty(object)
0xd4: Stack[-1] = Stack[-2]
0xd5: Call2 0xa92

0xd6: Pop(1)
0xd7: Return(); Pop(0)

0xd8: Stack[-1] = "walk"
0xd9: Return(); Pop(0)

0xda: Stack[-1] = "run"
0xdb: Return(); Pop(0)

0xdc: PushEmpty()
0xdd: Stack[3 + Tasks[-1].StackPointer] = Stack[-1]
0xde: PushEmpty(bool, object, float, float, bool, bool)
0xdf: Stack[-5] = Stack[-7]
0xe0: Stack[-4] = (float) 500.0
0xe1: Stack[-3] = (int) 5000
0xe2: Stack[-2] = (bool) 0
0xe3: Stack[-1] = (bool) 1
0xe4: Call2 0x102

0xe5: Pop(5)
0xe6: Pop(1); Push((bool) Stack[-1] == 0)
0xe7: IF (Stack[-1] == 0) GOTO 0xe9; Pop(1)

0xe8: Stack[3 + Tasks[-1].StackPointer] = 0
0xe9: Stack[-2] = Stack[3 + Tasks[-1].StackPointer]
0xea: Return(); Pop(0)

0xeb: PushEmpty()
0xec: PushEmpty(bool, object)
0xed: Stack[-1] = Stack[-3]
0xee: Call2 0x614

0xef: Pop(1)
0xf0: Pop(1); Push((bool) Stack[-1] == 0)
0xf1: IF (Stack[-1] == 0) GOTO 0xf3; Pop(1)

0xf2: Return(); Pop(0)

0xf3: Stack[3 + Tasks[-1].StackPointer] = Stack[-1]
0xf4: PushEmpty()
0xf5: Call2 0x141

0xf6: Pop(0)
0xf7: Return(); Pop(0)

0xf8: PushEmpty()
0xf9: PushEmpty(int)
0xfa: Stack[-1] = Stack[-2]
0xfb: Call2 0x133

0xfc: Pop(1)
0xfd: PushEmpty(int)
0xfe: Stack[-1] = Stack[-2]
0xff: Call2 0xab2

0x100: Pop(1)
0x101: Return(); Pop(0)

0x102: PushEmpty(bool, bool, bool, bool)
0x103: PushEmpty(object)
0x104: Stack[-1] = Stack[-10]
0x105: Call2 0x7a2

0x106: Pop(1)
0x107: Push((int) 1)
0x108: Push((int) 5)
0x109: @ SetTimer(Stack[-2], Stack[-1])
0x10a: Pop(2)
0x10b: @ CanSee(Stack[-2], Stack[-9])
0x10c: Pop(0)
0x10d: Push(Stack[-2])
0x10e: IF (Stack[-1] == 0) GOTO 0x115; Pop(1)

0x10f: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x110: PushEmpty(object)
0x111: Stack[-1] = Stack[-10]
0x112: Call2 0x6d1

0x113: Pop(1)
0x114: GOTO 0x116

0x115: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x116: PushEmpty(bool, object)
0x117: Stack[-1] = Stack[-11]
0x118: Call2 0x591

0x119: Pop(1)
0x11a: IF (Stack[-1] == 0) GOTO 0x120; Pop(1)

0x11b: PushEmpty(object)
0x11c: Call2 0x76b

0x11d: Pop(0)
0x11e: @ SendPlayerEnemy(Stack[-10], Stack[-1])
0x11f: Pop(1)
0x120: PushEmpty(bool, object, float, float, bool, bool)
0x121: Stack[-5] = Stack[-15]
0x122: Stack[-4] = Stack[-14]
0x123: Stack[-3] = Stack[-13]
0x124: Stack[-2] = Stack[-12]
0x125: Stack[-1] = Stack[-11]
0x126: Call2 0x16b

0x127: Stack[-7] = Stack[-6]
0x128: Pop(6)
0x129: Push( Stack[2 + Tasks[-1].StackPointer] )
0x12a: IF (Stack[-1] == 0) GOTO 0x12e; Pop(1)

0x12b: Push("head")
0x12c: @ UnlookAsync(Stack[-1])
0x12d: Pop(1)
0x12e: Push((int) 1)
0x12f: @ KillTimer(Stack[-1])
0x130: Pop(1)
0x131: Stack[-10] = Stack[-1]
0x132: Return(); Pop(4)

0x133: PushEmpty()
0x134: Push((int) 1)
0x135: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x136: IF (Stack[-1] == 0) GOTO 0x13c; Pop(1)

0x137: PushEmpty(object)
0x138: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x139: Call2 0x7a2

0x13a: Pop(1)
0x13b: GOTO 0x140

0x13c: PushEmpty(int)
0x13d: Stack[-1] = Stack[-2]
0x13e: Call2 0x1d1

0x13f: Pop(1)
0x140: Return(); Pop(0)

0x141: Push((int) 1)
0x142: @ KillTimer(Stack[-1])
0x143: Pop(1)
0x144: Push( Stack[2 + Tasks[-1].StackPointer] )
0x145: IF (Stack[-1] == 0) GOTO 0x14a; Pop(1)

0x146: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x147: Push("head")
0x148: @ UnlookAsync(Stack[-1])
0x149: Pop(1)
0x14a: PushEmpty()
0x14b: Call2 0x1e7

0x14c: Pop(0)
0x14d: Return(); Pop(0)

0x14e: PushEmpty()
0x14f: PushEmpty(bool)
0x150: Stack[-1] = (bool) 0
0x151: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0x152: IF (Stack[-1] == 0) GOTO 0x156; Pop(1)

0x153: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x154: IF (Stack[-1] == 0) GOTO 0x156; Pop(1)

0x155: Stack[-1] = (bool) 1
0x156: IF (Stack[-1] == 0) GOTO 0x15c; Pop(1)

0x157: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x158: PushEmpty(object)
0x159: Stack[-1] = Stack[-2]
0x15a: Call2 0x6d1

0x15b: Pop(1)
0x15c: Return(); Pop(0)

0x15d: PushEmpty()
0x15e: PushEmpty(bool)
0x15f: Stack[-1] = (bool) 0
0x160: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0x161: IF (Stack[-1] == 0) GOTO 0x165; Pop(1)

0x162: Push( Stack[2 + Tasks[-1].StackPointer] )
0x163: IF (Stack[-1] == 0) GOTO 0x165; Pop(1)

0x164: Stack[-1] = (bool) 1
0x165: IF (Stack[-1] == 0) GOTO 0x16a; Pop(1)

0x166: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x167: Push("head")
0x168: @ UnlookAsync(Stack[-1])
0x169: Pop(1)
0x16a: Return(); Pop(0)

0x16b: PushEmpty(bool, bool, object, cvector, cvector, cvector, float, object, bool, bool, object, cvector, cvector, cvector, float, object)
0x16c: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x16d: Stack[1 + Tasks[-1].StackPointer] = Stack[-21]
0x16e: Stack[-7] = Stack[-17]
0x16f: PushEmpty(bool, object)
0x170: Stack[-1] = Stack[-23]
0x171: Call2 0x1f7

0x172: Pop(1)
0x173: Pop(1); Push((bool) Stack[-1] == 0)
0x174: IF (Stack[-1] == 0) GOTO 0x177; Pop(1)

0x175: Stack[-22] = (bool) 0
0x176: Return(); Pop(16)

0x177: @@ GetPosition(Stack[-5])
0x178: Pop(0)
0x179: @ GetPosition(Stack[-4])
0x17a: Pop(0)
0x17b: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x17c: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x17d: PushEmpty(bool)
0x17e: Stack[-1] = (bool) 0
0x17f: Push((int) 0)
0x180: Pop(1); Push((bool) Stack[-21] > Stack[-1])
0x181: IF (Stack[-1] == 0) GOTO 0x186; Pop(1)

0x182: Pop(0); Push(Stack[-20] * Stack[-20]);
0x183: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x184: IF (Stack[-1] == 0) GOTO 0x186; Pop(1)

0x185: Stack[-1] = (bool) 1
0x186: IF (Stack[-1] == 0) GOTO 0x18b; Pop(1)

0x187: @ Stop()
0x188: Pop(0)
0x189: Stack[-22] = (bool) 0
0x18a: Return(); Pop(16)

0x18b: Pop(0); Push(Stack[-20] * Stack[-20]);
0x18c: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x18d: IF (Stack[-1] == 0) GOTO 0x1c9; Pop(1)

0x18e: @@ GetPFPosition(Stack[-5])
0x18f: Pop(0)
0x190: @ FindPathTo(Stack[-1], Stack[-5])
0x191: Pop(0)
0x192: Pop(0); Push(( Stack[-1] != 0 )
0x193: IF (Stack[-1] == 0) GOTO 0x196; Pop(1)

0x194: Stack[-6] = Stack[-1]
0x195: Stack[-1] = 0
0x196: Pop(0); Push(( Stack[-6] != 0 )
0x197: IF (Stack[-1] == 0) GOTO 0x1b7; Pop(1)

0x198: Push(Stack[-7])
0x199: IF (Stack[-1] == 0) GOTO 0x1a0; Pop(1)

0x19a: Stack[-7] = (bool) 0
0x19b: @ RotatePath(Stack[-6], Stack[-8])
0x19c: Pop(0)
0x19d: Pop(0); Push((bool) Stack[-8] == 0)
0x19e: IF (Stack[-1] == 0) GOTO 0x1a0; Pop(1)

0x19f: GOTO 0x1cf

0x1a0: Push((int) 0)
0x1a1: Push((float)0.3)
0x1a2: @ SetTimer(Stack[-2], Stack[-1])
0x1a3: Pop(2)
0x1a4: PushEmpty(string)
0x1a5: Call2 0x1fe

0x1a6: Pop(0)
0x1a7: PushEmpty(string)
0x1a8: Call2 0x200

0x1a9: Pop(0)
0x1aa: @ FollowPath(Stack[-8], Stack[-20], Stack[-10], Stack[-2], Stack[-1])
0x1ab: Pop(2)
0x1ac: Pop(0); Push((bool) Stack[-8] == 0)
0x1ad: IF (Stack[-1] == 0) GOTO 0x1b5; Pop(1)

0x1ae: Push( Stack[0 + Tasks[-1].StackPointer] )
0x1af: IF (Stack[-1] == 0) GOTO 0x1b3; Pop(1)

0x1b0: Stack[-6] = 0
0x1b1: GOTO 0x1cf

0x1b2: GOTO 0x1b4

0x1b3: GOTO 0x1ce

0x1b4: GOTO 0x1b6

0x1b5: Stack[-6] = 0
0x1b6: GOTO 0x1c7

0x1b7: Push((int) 0)
0x1b8: @ KillTimer(Stack[-1])
0x1b9: Pop(1)
0x1ba: Push((float)0.5)
0x1bb: @ Sleep(Stack[-1], Stack[-9])
0x1bc: Pop(1)
0x1bd: Pop(0); Push((bool) Stack[-8] == 0)
0x1be: IF (Stack[-1] == 0) GOTO 0x1c3; Pop(1)

0x1bf: Push( Stack[0 + Tasks[-1].StackPointer] )
0x1c0: IF (Stack[-1] == 0) GOTO 0x1c3; Pop(1)

0x1c1: Stack[-6] = 0
0x1c2: GOTO 0x1cf

0x1c3: Push((int) 0)
0x1c4: Push((float)0.3)
0x1c5: @ SetTimer(Stack[-2], Stack[-1])
0x1c6: Pop(2)
0x1c7: Stack[-1] = 0
0x1c8: GOTO 0x1cd

0x1c9: Push((int) 0)
0x1ca: @ KillTimer(Stack[-1])
0x1cb: Pop(1)
0x1cc: GOTO 0x1cf

0x1cd: Stack[-6] = 0
0x1ce: GOTO 0x16f

0x1cf: Stack[-22] = !Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x1d0: Return(); Pop(16)

0x1d1: PushEmpty()
0x1d2: Push((int) 0)
0x1d3: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x1d4: IF (Stack[-1] == 0) GOTO 0x1d6; Pop(1)

0x1d5: Return(); Pop(0)

0x1d6: PushEmpty(bool, object)
0x1d7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1d8: Call2 0x1f7

0x1d9: Pop(1)
0x1da: Pop(1); Push((bool) Stack[-1] == 0)
0x1db: IF (Stack[-1] == 0) GOTO 0x1dd; Pop(1)

0x1dc: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x1dd: Push((int) 0)
0x1de: @ KillTimer(Stack[-1])
0x1df: Pop(1)
0x1e0: @ Stop()
0x1e1: Pop(0)
0x1e2: Return(); Pop(0)

0x1e3: PushEmpty()
0x1e4: @ RequestClearPath(Stack[-1])
0x1e5: Pop(0)
0x1e6: Return(); Pop(0)

0x1e7: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x1e8: Push((int) 0)
0x1e9: @ KillTimer(Stack[-1])
0x1ea: Pop(1)
0x1eb: @ Stop()
0x1ec: Pop(0)
0x1ed: Return(); Pop(0)

0x1ee: PushEmpty()
0x1ef: PushEmpty()
0x1f0: Call2 0x141

0x1f1: Pop(0)
0x1f2: PushEmpty(object)
0x1f3: Stack[-1] = Stack[-2]
0x1f4: Call2 0xa92

0x1f5: Pop(1)
0x1f6: Return(); Pop(0)

0x1f7: PushEmpty()
0x1f8: PushEmpty(bool, object)
0x1f9: Stack[-1] = Stack[-3]
0x1fa: Call2 0x614

0x1fb: Stack[-4] = Stack[-2]
0x1fc: Pop(2)
0x1fd: Return(); Pop(0)

0x1fe: Stack[-1] = "walk"
0x1ff: Return(); Pop(0)

0x200: Stack[-1] = "run"
0x201: Return(); Pop(0)

0x202: PushEmpty()
0x203: Call2 0x8e4

0x204: Pop(0)
0x205: PushEmpty()
0x206: Call2 0x25a

0x207: Pop(0)
0x208: GOTO 0x205

0x209: Return(); Pop(0)

0x20a: PushEmpty()
0x20b: PushEmpty(bool, object)
0x20c: Stack[-1] = Stack[-3]
0x20d: Call2 0x9fe

0x20e: Pop(1)
0x20f: IF (Stack[-1] == 0) GOTO 0x218; Pop(1)

0x210: PushEmpty()
0x211: Call2 0x2a1

0x212: Pop(0)
0x213: PushEmpty(object)
0x214: Stack[-1] = Stack[-2]
0x215: Call2 0xa05

0x216: Pop(1)
0x217: GOTO 0x224

0x218: PushEmpty(bool, object)
0x219: Stack[-1] = Stack[-3]
0x21a: Call2 0xa18

0x21b: Pop(1)
0x21c: IF (Stack[-1] == 0) GOTO 0x224; Pop(1)

0x21d: PushEmpty()
0x21e: Call2 0x2a1

0x21f: Pop(0)
0x220: PushEmpty(object)
0x221: Stack[-1] = Stack[-2]
0x222: Call2 0xa38

0x223: Pop(1)
0x224: Return(); Pop(0)

0x225: PushEmpty()
0x226: PushEmpty(bool, object)
0x227: Stack[-1] = Stack[-3]
0x228: Call2 0xa0b

0x229: Pop(1)
0x22a: IF (Stack[-1] == 0) GOTO 0x232; Pop(1)

0x22b: PushEmpty()
0x22c: Call2 0x2a1

0x22d: Pop(0)
0x22e: PushEmpty(object)
0x22f: Stack[-1] = Stack[-2]
0x230: Call2 0xa12

0x231: Pop(1)
0x232: Return(); Pop(0)

0x233: PushEmpty()
0x234: PushEmpty(bool, object)
0x235: Stack[-1] = Stack[-3]
0x236: Call2 0x614

0x237: Pop(1)
0x238: Pop(1); Push((bool) Stack[-1] == 0)
0x239: IF (Stack[-1] == 0) GOTO 0x23f; Pop(1)

0x23a: PushEmpty(object)
0x23b: Stack[-1] = Stack[-2]
0x23c: Call2 0xa42

0x23d: Pop(1)
0x23e: Return(); Pop(0)

0x23f: PushEmpty()
0x240: Call2 0x2a1

0x241: Pop(0)
0x242: PushEmpty(object)
0x243: Stack[-1] = Stack[-2]
0x244: Call2 0xa5a

0x245: Pop(1)
0x246: Return(); Pop(0)

0x247: PushEmpty()
0x248: PushEmpty(bool, object, object, bool)
0x249: Stack[-3] = Stack[-7]
0x24a: Stack[-2] = Stack[-6]
0x24b: Stack[-1] = Stack[-5]
0x24c: Call2 0xa98

0x24d: Pop(3)
0x24e: IF (Stack[-1] == 0) GOTO 0x253; Pop(1)

0x24f: PushEmpty(object)
0x250: Stack[-1] = Stack[-4]
0x251: Call2 0x233

0x252: Pop(1)
0x253: Return(); Pop(0)

0x254: PushEmpty()
0x255: PushEmpty(int)
0x256: Stack[-1] = Stack[-2]
0x257: Call2 0xab2

0x258: Pop(1)
0x259: Return(); Pop(0)

0x25a: PushEmpty(float, cvector, cvector, bool, object, bool, float, cvector, cvector, bool, object, bool)
0x25b: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x25c: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x25d: Push((float)0.5)
0x25e: @ rand(Stack[-7], Stack[-1])
0x25f: Pop(1)
0x260: @ Sleep(Stack[-6])
0x261: Pop(0)
0x262: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x263: IF (Stack[-1] == 0) GOTO 0x294; Pop(1)

0x264: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == 0)
0x265: IF (Stack[-1] == 0) GOTO 0x275; Pop(1)

0x266: @ GetPosition(Stack[-4])
0x267: Pop(0)
0x268: PushEmpty(float)
0x269: Call2 0x295

0x26a: Pop(0)
0x26b: @ GetRandomPFPointInCircle(Stack[-6], Stack[-5], Stack[-1], Stack[-4])
0x26c: Pop(1)
0x26d: Push(Stack[-3])
0x26e: IF (Stack[-1] == 0) GOTO 0x270; Pop(1)

0x26f: GOTO 0x274

0x270: Push((int) 1)
0x271: @ Sleep(Stack[-1])
0x272: Pop(1)
0x273: GOTO 0x266

0x274: GOTO 0x276

0x275: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x276: PushEmpty(object, cvector)
0x277: Stack[-1] = Stack[-7]
0x278: Call2 0x2b3

0x279: Stack[-4] = Stack[-2]
0x27a: Pop(2)
0x27b: Pop(0); Push(( Stack[-2] != 0 )
0x27c: IF (Stack[-1] == 0) GOTO 0x28f; Pop(1)

0x27d: @ RotatePath(Stack[-2], Stack[-1])
0x27e: Pop(0)
0x27f: Push(Stack[-1])
0x280: IF (Stack[-1] == 0) GOTO 0x28e; Pop(1)

0x281: PushEmpty(bool)
0x282: Call2 0x2b1

0x283: Pop(0)
0x284: @ FollowPath(Stack[-3], Stack[-1], Stack[-2])
0x285: Pop(1)
0x286: Stack[-2] = 0
0x287: Push(Stack[-1])
0x288: IF (Stack[-1] == 0) GOTO 0x28e; Pop(1)

0x289: PushEmpty()
0x28a: Push(-0, 0); TaskCall(3)
0x28b: Call2 0x309

0x28c: Pop(-0, 0); TaskReturn
0x28d: Pop(0)
0x28e: GOTO 0x292

0x28f: Push((int) 1)
0x290: @ Sleep(Stack[-1])
0x291: Pop(1)
0x292: Stack[-2] = 0
0x293: GOTO 0x262

0x294: Return(); Pop(12)

0x295: PushEmpty(float, float)
0x296: @ GetCameraFarDistance(Stack[-1])
0x297: Pop(0)
0x298: Stack[-3] = Stack[-1]
0x299: Return(); Pop(2)

0x29a: PushEmpty()
0x29b: @ RequestClearPath(Stack[-1])
0x29c: Pop(0)
0x29d: Return(); Pop(0)

0x29e: @ Stop()
0x29f: Pop(0)
0x2a0: Return(); Pop(0)

0x2a1: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x2a2: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x2a3: @ Stop()
0x2a4: Pop(0)
0x2a5: @ StopGroup0()
0x2a6: Pop(0)
0x2a7: Return(); Pop(0)

0x2a8: PushEmpty()
0x2a9: PushEmpty()
0x2aa: Call2 0x2a1

0x2ab: Pop(0)
0x2ac: PushEmpty(object)
0x2ad: Stack[-1] = Stack[-2]
0x2ae: Call2 0xa92

0x2af: Pop(1)
0x2b0: Return(); Pop(0)

0x2b1: Stack[-1] = (bool) 0
0x2b2: Return(); Pop(0)

0x2b3: PushEmpty(object, object)
0x2b4: @ FindShiftedPathTo(Stack[-1], Stack[-3])
0x2b5: Pop(0)
0x2b6: Stack[-4] = Stack[-1]
0x2b7: Return(); Pop(2)

0x2b8: Stack[-1] = 0
0x2b9: PushEmpty()
0x2ba: PushEmpty(bool, object)
0x2bb: Stack[-1] = Stack[-3]
0x2bc: Call2 0x9fe

0x2bd: Pop(1)
0x2be: IF (Stack[-1] == 0) GOTO 0x2c7; Pop(1)

0x2bf: PushEmpty()
0x2c0: Call2 0x35a

0x2c1: Pop(0)
0x2c2: PushEmpty(object)
0x2c3: Stack[-1] = Stack[-2]
0x2c4: Call2 0xa05

0x2c5: Pop(1)
0x2c6: GOTO 0x2d3

0x2c7: PushEmpty(bool, object)
0x2c8: Stack[-1] = Stack[-3]
0x2c9: Call2 0xa18

0x2ca: Pop(1)
0x2cb: IF (Stack[-1] == 0) GOTO 0x2d3; Pop(1)

0x2cc: PushEmpty()
0x2cd: Call2 0x35a

0x2ce: Pop(0)
0x2cf: PushEmpty(object)
0x2d0: Stack[-1] = Stack[-2]
0x2d1: Call2 0xa38

0x2d2: Pop(1)
0x2d3: Return(); Pop(0)

0x2d4: PushEmpty()
0x2d5: PushEmpty(bool, object)
0x2d6: Stack[-1] = Stack[-3]
0x2d7: Call2 0xa0b

0x2d8: Pop(1)
0x2d9: IF (Stack[-1] == 0) GOTO 0x2e1; Pop(1)

0x2da: PushEmpty()
0x2db: Call2 0x35a

0x2dc: Pop(0)
0x2dd: PushEmpty(object)
0x2de: Stack[-1] = Stack[-2]
0x2df: Call2 0xa12

0x2e0: Pop(1)
0x2e1: Return(); Pop(0)

0x2e2: PushEmpty()
0x2e3: PushEmpty(bool, object)
0x2e4: Stack[-1] = Stack[-3]
0x2e5: Call2 0x614

0x2e6: Pop(1)
0x2e7: Pop(1); Push((bool) Stack[-1] == 0)
0x2e8: IF (Stack[-1] == 0) GOTO 0x2ee; Pop(1)

0x2e9: PushEmpty(object)
0x2ea: Stack[-1] = Stack[-2]
0x2eb: Call2 0xa42

0x2ec: Pop(1)
0x2ed: Return(); Pop(0)

0x2ee: PushEmpty()
0x2ef: Call2 0x35a

0x2f0: Pop(0)
0x2f1: PushEmpty(object)
0x2f2: Stack[-1] = Stack[-2]
0x2f3: Call2 0xa5a

0x2f4: Pop(1)
0x2f5: Return(); Pop(0)

0x2f6: PushEmpty()
0x2f7: PushEmpty(bool, object, object, bool)
0x2f8: Stack[-3] = Stack[-7]
0x2f9: Stack[-2] = Stack[-6]
0x2fa: Stack[-1] = Stack[-5]
0x2fb: Call2 0xa98

0x2fc: Pop(3)
0x2fd: IF (Stack[-1] == 0) GOTO 0x302; Pop(1)

0x2fe: PushEmpty(object)
0x2ff: Stack[-1] = Stack[-4]
0x300: Call2 0x2e2

0x301: Pop(1)
0x302: Return(); Pop(0)

0x303: PushEmpty()
0x304: PushEmpty(int)
0x305: Stack[-1] = Stack[-2]
0x306: Call2 0xab2

0x307: Pop(1)
0x308: Return(); Pop(0)

0x309: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x30a: @ WaitForAnimEnd()
0x30b: Pop(0)
0x30c: PushEmpty(bool)
0x30d: Call2 0x6cc

0x30e: Pop(0)
0x30f: Pop(1); Push((bool) Stack[-1] == 0)
0x310: IF (Stack[-1] == 0) GOTO 0x312; Pop(1)

0x311: Return(); Pop(14)

0x312: PushEmpty(int)
0x313: Call2 0x7bd

0x314: Stack[-8] = Stack[-1]
0x315: Pop(1)
0x316: Stack[-6] = (int) 0
0x317: PushEmpty(bool)
0x318: Stack[-1] = (bool) 0
0x319: Push((int) 5)
0x31a: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x31b: IF (Stack[-1] == 0) GOTO 0x321; Pop(1)

0x31c: PushEmpty(bool)
0x31d: Call2 0x6cc

0x31e: Pop(0)
0x31f: IF (Stack[-1] == 0) GOTO 0x321; Pop(1)

0x320: Stack[-1] = (bool) 1
0x321: IF (Stack[-1] == 0) GOTO 0x355; Pop(1)

0x322: Push((int) 3)
0x323: @ irand(Stack[-6], Stack[-1])
0x324: Pop(1)
0x325: Push((int) 0)
0x326: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x327: IF (Stack[-1] == 0) GOTO 0x339; Pop(1)

0x328: Push(Stack[-7])
0x329: IF (Stack[-1] == 0) GOTO 0x338; Pop(1)

0x32a: @ irand(Stack[-4], Stack[-7])
0x32b: Pop(0)
0x32c: Push("all")
0x32d: PushEmpty(string, int)
0x32e: Stack[-1] = Stack[-7]
0x32f: Call2 0x7b6

0x330: Pop(1)
0x331: @ PlayAnimation(Stack[-2], Stack[-1])
0x332: Pop(2)
0x333: @ WaitForAnimEnd(Stack[-3])
0x334: Pop(0)
0x335: Pop(0); Push((bool) Stack[-3] == 0)
0x336: IF (Stack[-1] == 0) GOTO 0x338; Pop(1)

0x337: GOTO 0x355

0x338: GOTO 0x34a

0x339: Push((int) 1)
0x33a: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x33b: IF (Stack[-1] == 0) GOTO 0x347; Pop(1)

0x33c: Push((int) 4)
0x33d: @ rand(Stack[-3], Stack[-1])
0x33e: Pop(1)
0x33f: Push((int) 1)
0x340: Pop(1); Push(Stack[-3] + Stack[-1]);
0x341: @ Sleep(Stack[-1], Stack[-2])
0x342: Pop(1)
0x343: Pop(0); Push((bool) Stack[-1] == 0)
0x344: IF (Stack[-1] == 0) GOTO 0x346; Pop(1)

0x345: GOTO 0x355

0x346: GOTO 0x34a

0x347: Push(Stack[-6])
0x348: IF (Stack[-1] == 0) GOTO 0x34a; Pop(1)

0x349: GOTO 0x355

0x34a: PushEmpty(bool)
0x34b: Call2 0x358

0x34c: Pop(0)
0x34d: Pop(1); Push((bool) Stack[-1] == 0)
0x34e: IF (Stack[-1] == 0) GOTO 0x350; Pop(1)

0x34f: GOTO 0x355

0x350: @ ResetAAS()
0x351: Pop(0)
0x352: Push((int) 1)
0x353: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x354: GOTO 0x317

0x355: @ ResetAAS()
0x356: Pop(0)
0x357: Return(); Pop(14)

0x358: Stack[-1] = (bool) 1
0x359: Return(); Pop(0)

0x35a: @ StopAnimation()
0x35b: Pop(0)
0x35c: @ StopGroup0()
0x35d: Pop(0)
0x35e: Return(); Pop(0)

0x35f: PushEmpty(bool, float, object, bool, float, object)
0x360: Stack[0 + Tasks[-1].StackPointer] = Stack[-7]
0x361: @ Face(Stack[-7])
0x362: Pop(0)
0x363: Push((bool) 1)
0x364: @ SetAttackState(Stack[-1])
0x365: Pop(1)
0x366: Stack[-3] = (bool) 0
0x367: PushEmpty(bool, object)
0x368: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x369: Call2 0xb16

0x36a: Pop(1)
0x36b: IF (Stack[-1] == 0) GOTO 0x3c7; Pop(1)

0x36c: PushEmpty(object)
0x36d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x36e: Call2 0x7a2

0x36f: Pop(1)
0x370: @ ReportAttack(Stack[-0])
0x371: Pop(0)
0x372: PushEmpty(float, object)
0x373: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x374: Call2 0x589

0x375: Stack[-4] = Stack[-2]
0x376: Pop(2)
0x377: Push((float)90000.0)
0x378: Pop(1); Push((bool) Stack[-3] <= Stack[-1])
0x379: IF (Stack[-1] == 0) GOTO 0x38e; Pop(1)

0x37a: Pop(0); Push((bool) Stack[-3] == 0)
0x37b: IF (Stack[-1] == 0) GOTO 0x389; Pop(1)

0x37c: Push((bool) 1)
0x37d: @ SetAttackState(Stack[-1])
0x37e: Pop(1)
0x37f: PushEmpty(bool)
0x380: Stack[-1] = (bool) 1
0x381: Call2 0x90d

0x382: Pop(1)
0x383: Push("all")
0x384: Push("attack_on")
0x385: @ PlayAnimation(Stack[-2], Stack[-1])
0x386: Pop(2)
0x387: Stack[-3] = (bool) 1
0x388: GOTO 0x38d

0x389: Push("all")
0x38a: Push("bjump")
0x38b: @ PlayAnimation(Stack[-2], Stack[-1])
0x38c: Pop(2)
0x38d: GOTO 0x3c4

0x38e: Push((float)490000.0)
0x38f: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x390: IF (Stack[-1] == 0) GOTO 0x3b1; Pop(1)

0x391: Push(Stack[-3])
0x392: IF (Stack[-1] == 0) GOTO 0x3a0; Pop(1)

0x393: Push((bool) 0)
0x394: @ SetAttackState(Stack[-1])
0x395: Pop(1)
0x396: PushEmpty(bool)
0x397: Stack[-1] = (bool) 0
0x398: Call2 0x90d

0x399: Pop(1)
0x39a: Push("all")
0x39b: Push("attack_off")
0x39c: @ PlayAnimation(Stack[-2], Stack[-1])
0x39d: Pop(2)
0x39e: Stack[-3] = (bool) 0
0x39f: GOTO 0x3b0

0x3a0: @ StopAsync()
0x3a1: Pop(0)
0x3a2: PushEmpty(object, object)
0x3a3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3a4: Push(-2, 4); TaskCall(1)
0x3a5: Call2 0xdc

0x3a6: Pop(-2, 4); TaskReturn
0x3a7: Stack[-3] = Stack[-2]
0x3a8: Pop(2)
0x3a9: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x3aa: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x3ab: IF (Stack[-1] == 0) GOTO 0x3ad; Pop(1)

0x3ac: GOTO 0x3c7

0x3ad: @ Face(Stack[-0])
0x3ae: Pop(0)
0x3af: Stack[-1] = 0
0x3b0: GOTO 0x3c4

0x3b1: Pop(0); Push((bool) Stack[-3] == 0)
0x3b2: IF (Stack[-1] == 0) GOTO 0x3c0; Pop(1)

0x3b3: Push((bool) 1)
0x3b4: @ SetAttackState(Stack[-1])
0x3b5: Pop(1)
0x3b6: PushEmpty(bool)
0x3b7: Stack[-1] = (bool) 1
0x3b8: Call2 0x90d

0x3b9: Pop(1)
0x3ba: Push("all")
0x3bb: Push("attack_on")
0x3bc: @ PlayAnimation(Stack[-2], Stack[-1])
0x3bd: Pop(2)
0x3be: Stack[-3] = (bool) 1
0x3bf: GOTO 0x3c4

0x3c0: PushEmpty(object)
0x3c1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3c2: Call2 0x964

0x3c3: Pop(1)
0x3c4: @ WaitForAnimEnd()
0x3c5: Pop(0)
0x3c6: GOTO 0x367

0x3c7: Push((bool) 0)
0x3c8: @ SetAttackState(Stack[-1])
0x3c9: Pop(1)
0x3ca: Push("all")
0x3cb: Push("attack_off")
0x3cc: @ PlayAnimation(Stack[-2], Stack[-1])
0x3cd: Pop(2)
0x3ce: PushEmpty(bool)
0x3cf: Stack[-1] = (bool) 0
0x3d0: Call2 0x90d

0x3d1: Pop(1)
0x3d2: @ StopAsync()
0x3d3: Pop(0)
0x3d4: Stack[-8] = Stack[0 + Tasks[-1].StackPointer]
0x3d5: Return(); Pop(6)

0x3d6: PushEmpty()
0x3d7: PushEmpty(object)
0x3d8: Stack[-1] = Stack[-2]
0x3d9: Call2 0xa42

0x3da: Pop(1)
0x3db: Pop(0); Push(( Stack[-1] != 0 )
0x3dc: IF (Stack[-1] == 0) GOTO 0x3e0; Pop(1)

0x3dd: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x3de: @ Face(Stack[-0])
0x3df: Pop(0)
0x3e0: Return(); Pop(0)

0x3e1: PushEmpty()
0x3e2: PushEmpty(int)
0x3e3: Stack[-1] = Stack[-2]
0x3e4: Call2 0xab2

0x3e5: Pop(1)
0x3e6: Return(); Pop(0)

0x3e7: PushEmpty(bool, bool)
0x3e8: Push((int) 70)
0x3e9: @ KillTimer(Stack[-1])
0x3ea: Pop(1)
0x3eb: PushEmpty(bool)
0x3ec: Stack[-1] = (bool) 0
0x3ed: Call2 0x90d

0x3ee: Pop(1)
0x3ef: Push(GlobalVars[0])
0x3f0: @ RemoveActor(Stack[-1])
0x3f1: Pop(1)
0x3f2: @ IsPlayerActor(Stack[-3], Stack[-1])
0x3f3: Pop(0)
0x3f4: Push(Stack[-1])
0x3f5: IF (Stack[-1] == 0) GOTO 0x3f9; Pop(1)

0x3f6: PushEmpty()
0x3f7: Call2 0x829

0x3f8: Pop(0)
0x3f9: PushEmpty()
0x3fa: Call2 0x811

0x3fb: Pop(0)
0x3fc: PushEmpty(object)
0x3fd: Stack[-1] = Stack[-4]
0x3fe: Call2 0x401

0x3ff: Pop(1)
0x400: Return(); Pop(2)

0x401: PushEmpty()
0x402: EventDisable(0)
0x403: PushEmpty(object)
0x404: Stack[-1] = Stack[-2]
0x405: Call2 0x41a

0x406: Pop(1)
0x407: Push((int) 50)
0x408: Push((int) 40)
0x409: @ SetRTEnvelope(Stack[-2], Stack[-1])
0x40a: Pop(2)
0x40b: EventEnable(0)
0x40c: @ Hold()
0x40d: Pop(0)
0x40e: GOTO 0x40c

0x40f: Return(); Pop(0)

0x410: PushEmpty(bool, bool)
0x411: @ IsOverrideActive(Stack[-1])
0x412: Pop(0)
0x413: Pop(0); Push((bool) Stack[-1] == 0)
0x414: IF (Stack[-1] == 0) GOTO 0x419; Pop(1)

0x415: PushEmpty(object)
0x416: Stack[-1] = Stack[-4]
0x417: Call2 0x7d4

0x418: Pop(1)
0x419: Return(); Pop(2)

0x41a: PushEmpty(cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector, cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector)
0x41b: Pop(0); Push((bool) Stack[-21] == 0)
0x41c: IF (Stack[-1] == 0) GOTO 0x422; Pop(1)

0x41d: PushEmpty(string)
0x41e: Stack[-1] = "fdie"
0x41f: Call2 0x475

0x420: Pop(1)
0x421: GOTO 0x474

0x422: @@ GetPosition(Stack[-10])
0x423: Pop(0)
0x424: @ GetPosition(Stack[-9])
0x425: Pop(0)
0x426: @ GetDirection(Stack[-8])
0x427: Pop(0)
0x428: Stack[-7] = Stack[-9] - Stack[-10]; Pop(0);
0x429: Push(CvectorIndex(Stack[-7], 0))
0x42a: Push(CvectorIndex(Stack[-9], 0))
0x42b: Pop(2); Push(Stack[-2] * Stack[-1]);
0x42c: Push(CvectorIndex(Stack[-8], 2))
0x42d: Push(CvectorIndex(Stack[-10], 2))
0x42e: Pop(2); Push(Stack[-2] * Stack[-1]);
0x42f: Pop(2); Push(Stack[-2] + Stack[-1]);
0x430: Push((int) 0)
0x431: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x432: IF (Stack[-1] == 0) GOTO 0x435; Pop(1)

0x433: Stack[-6] = "fdie"
0x434: GOTO 0x436

0x435: Stack[-6] = "bdie"
0x436: @ RemoveRTEnvelope()
0x437: Pop(0)
0x438: @ SetDeathState()
0x439: Pop(0)
0x43a: @ Stop()
0x43b: Pop(0)
0x43c: @ StopAsync()
0x43d: Pop(0)
0x43e: Stack[-5] = Stack[-21]
0x43f: Push("GetScriptProperty")
0x440: Push((int) 2)
0x441: Pop(2); Push(IsFuncExist(Stack[-23], Stack[-2], Stack[-1]))
0x442: IF (Stack[-1] == 0) GOTO 0x44e; Pop(1)

0x443: Push("Owner")
0x444: @@ HasScriptProperty(Stack[-5], Stack[-1])
0x445: Pop(1)
0x446: Push(Stack[-4])
0x447: IF (Stack[-1] == 0) GOTO 0x44e; Pop(1)

0x448: Push("Owner")
0x449: @@ GetScriptProperty(Stack[-6], Stack[-1])
0x44a: Pop(1)
0x44b: Pop(0); Push((bool) Stack[-5] == 0)
0x44c: IF (Stack[-1] == 0) GOTO 0x44e; Pop(1)

0x44d: Stack[-5] = Stack[-21]
0x44e: Push("@GetEyesHeight")
0x44f: Push((int) 1)
0x450: Pop(2); Push(IsFuncExist(Stack[-7], Stack[-2], Stack[-1]))
0x451: IF (Stack[-1] == 0) GOTO 0x45d; Pop(1)

0x452: @@ GetEyesHeight(Stack[-2])
0x453: Pop(0)
0x454: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x455: Push(CvectorIndex(Stack[-1], 1))
0x456: Stack[-1] = Stack[-3]
0x457: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x458: Push("head")
0x459: @ LookAsync(Stack[-22], Stack[-1], Stack[-2])
0x45a: Pop(1)
0x45b: Stack[-3] = (bool) 1
0x45c: GOTO 0x45e

0x45d: Stack[-3] = (bool) 0
0x45e: PushEmpty(string)
0x45f: Stack[-1] = Stack[-7]
0x460: Call2 0x6eb

0x461: Pop(1)
0x462: Push("all")
0x463: @ PlayAnimation(Stack[-1], Stack[-7])
0x464: Pop(1)
0x465: @ WaitForAnimEnd()
0x466: Pop(0)
0x467: Push(Stack[-3])
0x468: IF (Stack[-1] == 0) GOTO 0x46e; Pop(1)

0x469: @ StopAsync()
0x46a: Pop(0)
0x46b: Push("head")
0x46c: @ UnlookAsync(Stack[-1])
0x46d: Pop(1)
0x46e: Push("all")
0x46f: @ LockAnimationEnd(Stack[-1], Stack[-7])
0x470: Pop(1)
0x471: @ RemoveEnvelope()
0x472: Pop(0)
0x473: Stack[-5] = 0
0x474: Return(); Pop(20)

0x475: PushEmpty()
0x476: @ RemoveRTEnvelope()
0x477: Pop(0)
0x478: @ SetDeathState()
0x479: Pop(0)
0x47a: @ Stop()
0x47b: Pop(0)
0x47c: @ StopAsync()
0x47d: Pop(0)
0x47e: @ StopSecondaryAnimation()
0x47f: Pop(0)
0x480: PushEmpty(string)
0x481: Stack[-1] = Stack[-2]
0x482: Call2 0x6eb

0x483: Pop(1)
0x484: Push("all")
0x485: @ PlayAnimation(Stack[-1], Stack[-2])
0x486: Pop(1)
0x487: @ WaitForAnimEnd()
0x488: Pop(0)
0x489: Push("all")
0x48a: @ LockAnimationEnd(Stack[-1], Stack[-2])
0x48b: Pop(1)
0x48c: @ RemoveEnvelope()
0x48d: Pop(0)
0x48e: Return(); Pop(0)

0x48f: PushEmpty()
0x490: Return(); Pop(0)

0x491: PushEmpty()
0x492: Return(); Pop(0)

0x493: PushEmpty()
0x494: Return(); Pop(0)

0x495: PushEmpty(bool, object, cvector, float, bool, object, cvector, float)
0x496: PushEmpty(bool, object, string)
0x497: Stack[-2] = Stack[-12]
0x498: Stack[-1] = "disease"
0x499: Call2 0x596

0x49a: Pop(2)
0x49b: Pop(1); Push((bool) Stack[-1] == 0)
0x49c: IF (Stack[-1] == 0) GOTO 0x49e; Pop(1)

0x49d: Return(); Pop(8)

0x49e: PushEmpty(bool, object)
0x49f: Stack[-1] = Stack[-11]
0x4a0: Push(-2, 2); TaskCall(0)
0x4a1: Call2 0x0

0x4a2: Pop(-2, 2); TaskReturn
0x4a3: Pop(1)
0x4a4: Pop(1); Push((bool) Stack[-1] == 0)
0x4a5: IF (Stack[-1] == 0) GOTO 0x4a7; Pop(1)

0x4a6: Return(); Pop(8)

0x4a7: @ Face(Stack[-9])
0x4a8: Pop(0)
0x4a9: @ WaitForAnimEnd(Stack[-4])
0x4aa: Pop(0)
0x4ab: Push(Stack[-4])
0x4ac: IF (Stack[-1] == 0) GOTO 0x512; Pop(1)

0x4ad: Push("all")
0x4ae: Push("attack_on")
0x4af: @ PlayAnimation(Stack[-2], Stack[-1])
0x4b0: Pop(2)
0x4b1: @ WaitForAnimEnd(Stack[-4])
0x4b2: Pop(0)
0x4b3: Push(Stack[-4])
0x4b4: IF (Stack[-1] == 0) GOTO 0x512; Pop(1)

0x4b5: PushEmpty(bool)
0x4b6: Stack[-1] = (bool) 1
0x4b7: Call2 0x90d

0x4b8: Pop(1)
0x4b9: Push((int) 71)
0x4ba: Push((int) 1)
0x4bb: @ SetTimer(Stack[-2], Stack[-1])
0x4bc: Pop(2)
0x4bd: PushEmpty(bool)
0x4be: Stack[-1] = (bool) 0
0x4bf: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x4c0: IF (Stack[-1] == 0) GOTO 0x4c9; Pop(1)

0x4c1: PushEmpty(bool, object, string)
0x4c2: Stack[-2] = Stack[-13]
0x4c3: Stack[-1] = "cleansed"
0x4c4: Call2 0x596

0x4c5: Pop(2)
0x4c6: Pop(1); Push((bool) Stack[-1] == 0)
0x4c7: IF (Stack[-1] == 0) GOTO 0x4c9; Pop(1)

0x4c8: Stack[-1] = (bool) 1
0x4c9: IF (Stack[-1] == 0) GOTO 0x4d9; Pop(1)

0x4ca: Push("cleansed")
0x4cb: Push((bool) 1)
0x4cc: @@ SetProperty(Stack[-2], Stack[-1])
0x4cd: Pop(2)
0x4ce: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x4cf: @ GetScene(Stack[-3])
0x4d0: Pop(0)
0x4d1: @@ GetPosition(Stack[-2])
0x4d2: Pop(0)
0x4d3: Push("scripted")
0x4d4: Push(CVector(0.0, 0.0, 1.0))
0x4d5: Push("corpse_fire.xml")
0x4d6: @ AddActorByType(Stack[-1], Stack[-3], Stack[-6], Stack[-5], Stack[-2], Stack[-1])
0x4d7: Pop(3)
0x4d8: Stack[-3] = 0
0x4d9: Push("all")
0x4da: Push("cattack")
0x4db: @ PlayAnimation(Stack[-2], Stack[-1])
0x4dc: Pop(2)
0x4dd: @ WaitForAnimEnd(Stack[-4])
0x4de: Pop(0)
0x4df: PushEmpty(bool)
0x4e0: Stack[-1] = (bool) 1
0x4e1: Pop(0); Push((bool) Stack[-5] == 0)
0x4e2: IF (Stack[-1] == 0) GOTO 0x4ea; Pop(1)

0x4e3: PushEmpty(bool, object)
0x4e4: Stack[-1] = Stack[-12]
0x4e5: Call2 0x62c

0x4e6: Pop(1)
0x4e7: Pop(1); Push((bool) Stack[-1] == 0)
0x4e8: IF (Stack[-1] == 0) GOTO 0x4ea; Pop(1)

0x4e9: Stack[-1] = (bool) 0
0x4ea: IF (Stack[-1] == 0) GOTO 0x4ec; Pop(1)

0x4eb: GOTO 0x4fd

0x4ec: Push("disease")
0x4ed: @@ GetProperty(Stack[-1], Stack[-2])
0x4ee: Pop(1)
0x4ef: Push((float)0.1)
0x4f0: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x4f1: IF (Stack[-1] == 0) GOTO 0x4f7; Pop(1)

0x4f2: Push("disease")
0x4f3: Push((float)0.0)
0x4f4: @@ SetProperty(Stack[-2], Stack[-1])
0x4f5: Pop(2)
0x4f6: GOTO 0x4fd

0x4f7: Push("disease")
0x4f8: Push((float)0.1)
0x4f9: Pop(1); Push(Stack[-3] - Stack[-1]);
0x4fa: @@ SetProperty(Stack[-2], Stack[-1])
0x4fb: Pop(2)
0x4fc: GOTO 0x4bd

0x4fd: Push((int) 71)
0x4fe: @ KillTimer(Stack[-1])
0x4ff: Pop(1)
0x500: PushEmpty(bool)
0x501: Stack[-1] = (bool) 0
0x502: Call2 0x90d

0x503: Pop(1)
0x504: Push( Stack[0 + Tasks[-1].StackPointer] )
0x505: IF (Stack[-1] == 0) GOTO 0x50a; Pop(1)

0x506: Push("cleansed")
0x507: @@ RemoveProperty(Stack[-1])
0x508: Pop(1)
0x509: Stack[0 + Tasks[-1].StackPointer] = 0
0x50a: Push(Stack[-4])
0x50b: IF (Stack[-1] == 0) GOTO 0x512; Pop(1)

0x50c: Push("all")
0x50d: Push("attack_off")
0x50e: @ PlayAnimation(Stack[-2], Stack[-1])
0x50f: Pop(2)
0x510: @ WaitForAnimEnd()
0x511: Pop(0)
0x512: @ StopAsync()
0x513: Pop(0)
0x514: Return(); Pop(8)

0x515: Push( Stack[0 + Tasks[-1].StackPointer] )
0x516: IF (Stack[-1] == 0) GOTO 0x51a; Pop(1)

0x517: Push("cleansed")
0x518: @@ RemoveProperty(Stack[-1])
0x519: Pop(1)
0x51a: Return(); Pop(0)

0x51b: Push( Stack[0 + Tasks[-1].StackPointer] )
0x51c: IF (Stack[-1] == 0) GOTO 0x520; Pop(1)

0x51d: Push("cleansed")
0x51e: @@ RemoveProperty(Stack[-1])
0x51f: Pop(1)
0x520: Push((int) 71)
0x521: @ KillTimer(Stack[-1])
0x522: Pop(1)
0x523: PushEmpty(bool)
0x524: Stack[-1] = (bool) 0
0x525: Call2 0x90d

0x526: Pop(1)
0x527: @ Stop()
0x528: Pop(0)
0x529: @ StopAsync()
0x52a: Pop(0)
0x52b: Return(); Pop(0)

0x52c: PushEmpty()
0x52d: PushEmpty()
0x52e: Call2 0x51b

0x52f: Pop(0)
0x530: PushEmpty(object)
0x531: Stack[-1] = Stack[-2]
0x532: Call2 0xa92

0x533: Pop(1)
0x534: Return(); Pop(0)

0x535: PushEmpty()
0x536: PushEmpty(bool, object)
0x537: Stack[-1] = Stack[-3]
0x538: Call2 0x9fe

0x539: Pop(1)
0x53a: IF (Stack[-1] == 0) GOTO 0x542; Pop(1)

0x53b: PushEmpty()
0x53c: Call2 0x51b

0x53d: Pop(0)
0x53e: PushEmpty(object)
0x53f: Stack[-1] = Stack[-2]
0x540: Call2 0xa05

0x541: Pop(1)
0x542: Return(); Pop(0)

0x543: PushEmpty()
0x544: PushEmpty(bool, object)
0x545: Stack[-1] = Stack[-3]
0x546: Call2 0xa0b

0x547: Pop(1)
0x548: IF (Stack[-1] == 0) GOTO 0x550; Pop(1)

0x549: PushEmpty()
0x54a: Call2 0x51b

0x54b: Pop(0)
0x54c: PushEmpty(object)
0x54d: Stack[-1] = Stack[-2]
0x54e: Call2 0xa12

0x54f: Pop(1)
0x550: Return(); Pop(0)

0x551: PushEmpty()
0x552: PushEmpty(bool, object)
0x553: Stack[-1] = Stack[-3]
0x554: Call2 0x614

0x555: Pop(1)
0x556: Pop(1); Push((bool) Stack[-1] == 0)
0x557: IF (Stack[-1] == 0) GOTO 0x55d; Pop(1)

0x558: PushEmpty(object)
0x559: Stack[-1] = Stack[-2]
0x55a: Call2 0xa42

0x55b: Pop(1)
0x55c: Return(); Pop(0)

0x55d: PushEmpty()
0x55e: Call2 0x51b

0x55f: Pop(0)
0x560: PushEmpty(object)
0x561: Stack[-1] = Stack[-2]
0x562: Call2 0xa5a

0x563: Pop(1)
0x564: Return(); Pop(0)

0x565: PushEmpty()
0x566: Push((int) 71)
0x567: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x568: IF (Stack[-1] == 0) GOTO 0x56f; Pop(1)

0x569: Push( Stack[1 + Tasks[-1].StackPointer] )
0x56a: IF (Stack[-1] == 0) GOTO 0x56e; Pop(1)

0x56b: Push("continue")
0x56c: @ Trigger(Stack[-1], Stack[-1])
0x56d: Pop(1)
0x56e: GOTO 0x573

0x56f: PushEmpty(int)
0x570: Stack[-1] = Stack[-2]
0x571: Call2 0xab2

0x572: Pop(1)
0x573: Return(); Pop(0)

0x574: PushEmpty()
0x575: Push((int) 2)
0x576: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x577: IF (Stack[-1] == 0) GOTO 0x57b; Pop(1)

0x578: Stack[-2] = "fire"
0x579: Return(); Pop(0)

0x57a: GOTO 0x580

0x57b: Push((int) 1)
0x57c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x57d: IF (Stack[-1] == 0) GOTO 0x580; Pop(1)

0x57e: Stack[-2] = "bullet"
0x57f: Return(); Pop(0)

0x580: Stack[-2] = "phys"
0x581: Return(); Pop(0)

0x582: PushEmpty(cvector, cvector, cvector, cvector)
0x583: @ GetPosition(Stack[-2])
0x584: Pop(0)
0x585: @@ GetPosition(Stack[-1])
0x586: Pop(0)
0x587: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x588: Return(); Pop(4)

0x589: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x58a: @ GetPosition(Stack[-3])
0x58b: Pop(0)
0x58c: @@ GetPosition(Stack[-2])
0x58d: Pop(0)
0x58e: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x58f: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x590: Return(); Pop(6)

0x591: PushEmpty(bool, bool)
0x592: @ IsPlayerActor(Stack[-3], Stack[-1])
0x593: Pop(0)
0x594: Stack[-4] = Stack[-1]
0x595: Return(); Pop(2)

0x596: PushEmpty(bool, bool)
0x597: Push("HasProperty")
0x598: Push((int) 2)
0x599: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x59a: Pop(1); Push((bool) Stack[-1] == 0)
0x59b: IF (Stack[-1] == 0) GOTO 0x59e; Pop(1)

0x59c: Stack[-5] = (bool) 0
0x59d: Return(); Pop(2)

0x59e: @@ HasProperty(Stack[-3], Stack[-1])
0x59f: Pop(0)
0x5a0: Stack[-5] = Stack[-1]
0x5a1: Return(); Pop(2)

0x5a2: PushEmpty(int, string, int, float, float, float, int, string, int, float, float, float)
0x5a3: PushEmpty(bool, object, string)
0x5a4: Stack[-2] = Stack[-18]
0x5a5: Stack[-1] = "health"
0x5a6: Call2 0x596

0x5a7: Pop(2)
0x5a8: Pop(1); Push((bool) Stack[-1] == 0)
0x5a9: IF (Stack[-1] == 0) GOTO 0x5ac; Pop(1)

0x5aa: Stack[-16] = (float) 0.0
0x5ab: Return(); Pop(12)

0x5ac: PushEmpty(bool, object, string)
0x5ad: Stack[-2] = Stack[-18]
0x5ae: Stack[-1] = "armor"
0x5af: Call2 0x596

0x5b0: Pop(2)
0x5b1: Pop(1); Push((bool) Stack[-1] == 0)
0x5b2: IF (Stack[-1] == 0) GOTO 0x5b5; Pop(1)

0x5b3: Stack[-6] = (int) 0
0x5b4: GOTO 0x5b8

0x5b5: Push("armor")
0x5b6: @@ GetProperty(Stack[-1], Stack[-7])
0x5b7: Pop(1)
0x5b8: Push("armor_")
0x5b9: PushEmpty(string, int)
0x5ba: Stack[-1] = Stack[-16]
0x5bb: Call2 0x574

0x5bc: Pop(1)
0x5bd: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x5be: PushEmpty(bool, object, string)
0x5bf: Stack[-2] = Stack[-18]
0x5c0: Stack[-1] = Stack[-8]
0x5c1: Call2 0x596

0x5c2: Pop(2)
0x5c3: Pop(1); Push((bool) Stack[-1] == 0)
0x5c4: IF (Stack[-1] == 0) GOTO 0x5c7; Pop(1)

0x5c5: Stack[-4] = (int) 0
0x5c6: GOTO 0x5c9

0x5c7: @@ GetProperty(Stack[-5], Stack[-4])
0x5c8: Pop(0)
0x5c9: PushEmpty(float, float, float)
0x5ca: Pop(0); Push(Stack[-9] + Stack[-7]);
0x5cb: Push((float)100.0)
0x5cc: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0x5cd: Stack[-1] = (int) 1
0x5ce: Call2 0x77b

0x5cf: Stack[-6] = Stack[-3]
0x5d0: Pop(3)
0x5d1: Push("health")
0x5d2: @@ GetProperty(Stack[-1], Stack[-3])
0x5d3: Pop(1)
0x5d4: Push((int) 1)
0x5d5: Pop(1); Push(Stack[-1] - Stack[-4]);
0x5d6: Stack[-2] = Stack[-15] * Stack[-1]; Pop(1);
0x5d7: Push("health")
0x5d8: PushEmpty(float, float, float, float)
0x5d9: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0x5da: Stack[-2] = (int) 0
0x5db: Stack[-1] = (int) 1
0x5dc: Call2 0x782

0x5dd: Pop(3)
0x5de: @@ SetProperty(Stack[-2], Stack[-1])
0x5df: Pop(2)
0x5e0: PushEmpty(bool, object)
0x5e1: Stack[-1] = Stack[-17]
0x5e2: Call2 0x591

0x5e3: Pop(1)
0x5e4: IF (Stack[-1] == 0) GOTO 0x5e9; Pop(1)

0x5e5: PushEmpty(float)
0x5e6: Stack[-1] = -Stack[-2]; Pop(0);
0x5e7: Call2 0x798

0x5e8: Pop(1)
0x5e9: Stack[-16] = Stack[-1]
0x5ea: Return(); Pop(12)

0x5eb: PushEmpty(bool, bool)
0x5ec: @@ IsDead(Stack[-1])
0x5ed: Pop(0)
0x5ee: Stack[-4] = Stack[-1]
0x5ef: Return(); Pop(2)

0x5f0: PushEmpty(object, object, object, object)
0x5f1: Pop(0); Push((bool) Stack[-5] == 0)
0x5f2: IF (Stack[-1] == 0) GOTO 0x5f5; Pop(1)

0x5f3: Stack[-6] = (bool) 0
0x5f4: Return(); Pop(4)

0x5f5: PushEmpty(bool)
0x5f6: Stack[-1] = (bool) 0
0x5f7: Push("IsDead")
0x5f8: Push((int) 1)
0x5f9: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x5fa: IF (Stack[-1] == 0) GOTO 0x601; Pop(1)

0x5fb: PushEmpty(bool, object)
0x5fc: Stack[-1] = Stack[-8]
0x5fd: Call2 0x5eb

0x5fe: Pop(1)
0x5ff: IF (Stack[-1] == 0) GOTO 0x601; Pop(1)

0x600: Stack[-1] = (bool) 1
0x601: IF (Stack[-1] == 0) GOTO 0x604; Pop(1)

0x602: Stack[-6] = (bool) 0
0x603: Return(); Pop(4)

0x604: @ GetScene(Stack[-2])
0x605: Pop(0)
0x606: Pop(0); Push((bool) Stack[-2] == 0)
0x607: IF (Stack[-1] == 0) GOTO 0x60a; Pop(1)

0x608: Stack[-6] = (bool) 0
0x609: Return(); Pop(4)

0x60a: @@ GetScene(Stack[-1])
0x60b: Pop(0)
0x60c: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x60d: IF (Stack[-1] == 0) GOTO 0x610; Pop(1)

0x60e: Stack[-6] = (bool) 0
0x60f: Return(); Pop(4)

0x610: Stack[-6] = (bool) 1
0x611: Return(); Pop(4)

0x612: Stack[-1] = 0
0x613: Stack[-2] = 0
0x614: PushEmpty(int, int)
0x615: PushEmpty(bool, object)
0x616: Stack[-1] = Stack[-5]
0x617: Call2 0x5f0

0x618: Pop(1)
0x619: Pop(1); Push((bool) Stack[-1] == 0)
0x61a: IF (Stack[-1] == 0) GOTO 0x61d; Pop(1)

0x61b: Stack[-4] = (bool) 0
0x61c: Return(); Pop(2)

0x61d: PushEmpty(bool, object, string)
0x61e: Stack[-2] = Stack[-6]
0x61f: Stack[-1] = "noaccess"
0x620: Call2 0x596

0x621: Pop(2)
0x622: Pop(1); Push((bool) Stack[-1] == 0)
0x623: IF (Stack[-1] == 0) GOTO 0x626; Pop(1)

0x624: Stack[-4] = (bool) 1
0x625: Return(); Pop(2)

0x626: Push("noaccess")
0x627: @@ GetProperty(Stack[-1], Stack[-2])
0x628: Pop(1)
0x629: Push((int) 0)
0x62a: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x62b: Return(); Pop(2)

0x62c: PushEmpty(object, object, int, object, object, int)
0x62d: Pop(0); Push((bool) Stack[-7] == 0)
0x62e: IF (Stack[-1] == 0) GOTO 0x631; Pop(1)

0x62f: Stack[-8] = (bool) 0
0x630: Return(); Pop(6)

0x631: @ GetScene(Stack[-3])
0x632: Pop(0)
0x633: Pop(0); Push((bool) Stack[-3] == 0)
0x634: IF (Stack[-1] == 0) GOTO 0x637; Pop(1)

0x635: Stack[-8] = (bool) 0
0x636: Return(); Pop(6)

0x637: @@ GetScene(Stack[-2])
0x638: Pop(0)
0x639: Pop(0); Push((bool) Stack[-3] != Stack[-2])
0x63a: IF (Stack[-1] == 0) GOTO 0x63d; Pop(1)

0x63b: Stack[-8] = (bool) 0
0x63c: Return(); Pop(6)

0x63d: PushEmpty(bool, object, string)
0x63e: Stack[-2] = Stack[-10]
0x63f: Stack[-1] = "noaccess"
0x640: Call2 0x596

0x641: Pop(2)
0x642: Pop(1); Push((bool) Stack[-1] == 0)
0x643: IF (Stack[-1] == 0) GOTO 0x646; Pop(1)

0x644: Stack[-8] = (bool) 1
0x645: Return(); Pop(6)

0x646: Push("noaccess")
0x647: @@ GetProperty(Stack[-1], Stack[-2])
0x648: Pop(1)
0x649: Push((int) 0)
0x64a: Stack[-9] = Stack[-2] == Stack[-1]; Pop(1);
0x64b: Return(); Pop(6)

0x64c: Stack[-2] = 0
0x64d: Stack[-3] = 0
0x64e: PushEmpty(bool, int, cvector, cvector, cvector, cvector, string, bool, int, cvector, cvector, cvector, cvector, string)
0x64f: Pop(0); Push((bool) Stack[-15] == 0)
0x650: IF (Stack[-1] == 0) GOTO 0x652; Pop(1)

0x651: Return(); Pop(14)

0x652: @ IsDead(Stack[-7])
0x653: Pop(0)
0x654: Push(Stack[-7])
0x655: IF (Stack[-1] == 0) GOTO 0x657; Pop(1)

0x656: Return(); Pop(14)

0x657: @ GetSecondaryAnimationType(Stack[-6])
0x658: Pop(0)
0x659: Push((int) 0)
0x65a: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x65b: IF (Stack[-1] == 0) GOTO 0x65d; Pop(1)

0x65c: Return(); Pop(14)

0x65d: @@ GetPosition(Stack[-5])
0x65e: Pop(0)
0x65f: @ GetPosition(Stack[-4])
0x660: Pop(0)
0x661: @ GetDirection(Stack[-3])
0x662: Pop(0)
0x663: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0x664: Push(CvectorIndex(Stack[-2], 0))
0x665: Push(CvectorIndex(Stack[-4], 0))
0x666: Pop(2); Push(Stack[-2] * Stack[-1]);
0x667: Push(CvectorIndex(Stack[-3], 2))
0x668: Push(CvectorIndex(Stack[-5], 2))
0x669: Pop(2); Push(Stack[-2] * Stack[-1]);
0x66a: Pop(2); Push(Stack[-2] + Stack[-1]);
0x66b: Push((int) 0)
0x66c: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x66d: IF (Stack[-1] == 0) GOTO 0x670; Pop(1)

0x66e: Stack[-1] = "fhit"
0x66f: GOTO 0x671

0x670: Stack[-1] = "bhit"
0x671: Push("hit_react")
0x672: Push("1")
0x673: Pop(1); Push(Stack[-3] + Stack[-1]);
0x674: Push("2")
0x675: Pop(1); Push(Stack[-4] + Stack[-1]);
0x676: Push((int) -10)
0x677: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x678: Pop(4)
0x679: Return(); Pop(14)

0x67a: PushEmpty(cvector, object, int, bool, cvector, cvector, int, int, cvector, cvector, object, int, bool, cvector, cvector, int, int, cvector)
0x67b: PushEmpty(bool)
0x67c: Stack[-1] = (bool) 0
0x67d: PushEmpty(bool)
0x67e: Stack[-1] = (bool) 0
0x67f: Push(Stack[-23])
0x680: IF (Stack[-1] == 0) GOTO 0x685; Pop(1)

0x681: Push((int) 4)
0x682: Pop(1); Push((bool) Stack[-23] != Stack[-1])
0x683: IF (Stack[-1] == 0) GOTO 0x685; Pop(1)

0x684: Stack[-1] = (bool) 1
0x685: IF (Stack[-1] == 0) GOTO 0x68a; Pop(1)

0x686: Push((int) 5)
0x687: Pop(1); Push((bool) Stack[-22] != Stack[-1])
0x688: IF (Stack[-1] == 0) GOTO 0x68a; Pop(1)

0x689: Stack[-1] = (bool) 1
0x68a: IF (Stack[-1] == 0) GOTO 0x6b9; Pop(1)

0x68b: PushEmpty(cvector, cvector)
0x68c: PushEmpty(cvector, object)
0x68d: Stack[-1] = Stack[-25]
0x68e: Call2 0x582

0x68f: Stack[-3] = Stack[-2]
0x690: Pop(2)
0x691: Call2 0x771

0x692: Stack[-11] = Stack[-2]
0x693: Pop(2)
0x694: @ CreateVectorVector(Stack[-8])
0x695: Pop(0)
0x696: Stack[-7] = (int) 1
0x697: Push("hit")
0x698: Pop(1); Push(Stack[-1] + Stack[-8]);
0x699: @ GetGeometryLocator(Stack[-1], Stack[-7], Stack[-6], Stack[-5])
0x69a: Pop(1)
0x69b: Pop(0); Push((bool) Stack[-6] == 0)
0x69c: IF (Stack[-1] == 0) GOTO 0x69e; Pop(1)

0x69d: GOTO 0x6a7

0x69e: Pop(0); Push(Stack[-4] | Stack[-9]);
0x69f: Push((float)0.70711)
0x6a0: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x6a1: IF (Stack[-1] == 0) GOTO 0x6a4; Pop(1)

0x6a2: @@ add(Stack[-5])
0x6a3: Pop(0)
0x6a4: Push((int) 1)
0x6a5: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x6a6: GOTO 0x697

0x6a7: @@ size(Stack[-3])
0x6a8: Pop(0)
0x6a9: Push(Stack[-3])
0x6aa: IF (Stack[-1] == 0) GOTO 0x6b8; Pop(1)

0x6ab: @ irand(Stack[-2], Stack[-3])
0x6ac: Pop(0)
0x6ad: @@ get(Stack[-1], Stack[-2])
0x6ae: Pop(0)
0x6af: PushEmpty(object, int, float, cvector, cvector)
0x6b0: Stack[-5] = Stack[-26]
0x6b1: Stack[-4] = Stack[-25]
0x6b2: Stack[-3] = Stack[-24]
0x6b3: Stack[-2] = Stack[-6]
0x6b4: Stack[-1] = -Stack[-14]; Pop(0);
0x6b5: Call2 0x6be

0x6b6: Pop(5)
0x6b7: Return(); Pop(18)

0x6b8: Stack[-8] = 0
0x6b9: PushEmpty(object)
0x6ba: Stack[-1] = Stack[-22]
0x6bb: Call2 0x64e

0x6bc: Pop(1)
0x6bd: Return(); Pop(18)

0x6be: PushEmpty(object, object, object, object)
0x6bf: @ GetScene(Stack[-2])
0x6c0: Pop(0)
0x6c1: Push("scripted")
0x6c2: Push("blood_dir.xml")
0x6c3: @ AddActorByType(Stack[-3], Stack[-2], Stack[-4], Stack[-8], Stack[-7], Stack[-1])
0x6c4: Pop(2)
0x6c5: PushEmpty(object)
0x6c6: Stack[-1] = Stack[-10]
0x6c7: Call2 0x64e

0x6c8: Pop(1)
0x6c9: Return(); Pop(4)

0x6ca: Stack[-1] = 0
0x6cb: Stack[-2] = 0
0x6cc: PushEmpty(bool, bool)
0x6cd: @ IsLoaded(Stack[-1])
0x6ce: Pop(0)
0x6cf: Stack[-3] = Stack[-1]
0x6d0: Return(); Pop(2)

0x6d1: PushEmpty(float, cvector, float, cvector)
0x6d2: @@ GetEyesHeight(Stack[-2])
0x6d3: Pop(0)
0x6d4: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x6d5: Push(CvectorIndex(Stack[-1], 1))
0x6d6: Stack[-1] = Stack[-3]
0x6d7: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x6d8: Push("head")
0x6d9: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x6da: Pop(1)
0x6db: Return(); Pop(4)

0x6dc: PushEmpty(int, bool, int, bool)
0x6dd: PushEmpty(bool, int, int)
0x6de: Stack[-2] = Stack[-10]
0x6df: Stack[-1] = Stack[-9]
0x6e0: Call2 0x78d

0x6e1: Pop(2)
0x6e2: IF (Stack[-1] == 0) GOTO 0x6ea; Pop(1)

0x6e3: @ irand(Stack[-2], Stack[-5])
0x6e4: Pop(0)
0x6e5: Push((int) 0)
0x6e6: Push((int) 1)
0x6e7: Pop(1); Push(Stack[-4] + Stack[-1]);
0x6e8: @ AddItem(Stack[-3], Stack[-10], Stack[-2], Stack[-1])
0x6e9: Pop(2)
0x6ea: Return(); Pop(4)

0x6eb: PushEmpty(bool, int, bool, int, bool, float, cvector, cvector, bool, int, bool, int, bool, float, cvector, cvector)
0x6ec: @ IsExisting3DSound(Stack[-8], Stack[-17])
0x6ed: Pop(0)
0x6ee: Pop(0); Push((bool) Stack[-8] == 0)
0x6ef: IF (Stack[-1] == 0) GOTO 0x704; Pop(1)

0x6f0: Stack[-7] = (int) 0
0x6f1: Push((int) 1)
0x6f2: Pop(1); Push(Stack[-8] + Stack[-1]);
0x6f3: Pop(1); Push(Stack[-18] + Stack[-1]);
0x6f4: @ IsExisting3DSound(Stack[-7], Stack[-1])
0x6f5: Pop(1)
0x6f6: Pop(0); Push((bool) Stack[-6] == 0)
0x6f7: IF (Stack[-1] == 0) GOTO 0x6f9; Pop(1)

0x6f8: GOTO 0x6fc

0x6f9: Push((int) 1)
0x6fa: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x6fb: GOTO 0x6f1

0x6fc: Pop(0); Push((bool) Stack[-7] == 0)
0x6fd: IF (Stack[-1] == 0) GOTO 0x6ff; Pop(1)

0x6fe: Return(); Pop(16)

0x6ff: @ irand(Stack[-5], Stack[-7])
0x700: Pop(0)
0x701: Push((int) 1)
0x702: Pop(1); Push(Stack[-6] + Stack[-1]);
0x703: Stack[-18] = Stack[-18] + Stack[-1]; Pop(1);
0x704: @ Is3DSoundLoaded(Stack[-4], Stack[-17])
0x705: Pop(0)
0x706: Push(Stack[-4])
0x707: IF (Stack[-1] == 0) GOTO 0x713; Pop(1)

0x708: @ GetEyesHeight(Stack[-3])
0x709: Pop(0)
0x70a: @ GetDirection(Stack[-2])
0x70b: Pop(0)
0x70c: Push((int) 50)
0x70d: Stack[-2] = Stack[-3] * Stack[-1]; Pop(1);
0x70e: Push(CvectorIndex(Stack[-1], 1))
0x70f: Stack[-1] = Stack[-1] + Stack[-4]; Pop(0);
0x710: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x711: @ PlayGlobalSound(Stack[-17], Stack[-1])
0x712: Pop(0)
0x713: Return(); Pop(16)

0x714: PushEmpty()
0x715: Stack[-2] = (bool) 1
0x716: PushEmpty(bool)
0x717: Stack[-1] = (bool) 1
0x718: PushEmpty(bool)
0x719: Stack[-1] = (bool) 1
0x71a: PushEmpty(bool)
0x71b: Stack[-1] = (bool) 1
0x71c: PushEmpty(bool)
0x71d: Stack[-1] = (bool) 1
0x71e: PushEmpty(bool)
0x71f: Stack[-1] = (bool) 1
0x720: PushEmpty(bool)
0x721: Stack[-1] = (bool) 1
0x722: PushEmpty(bool)
0x723: Stack[-1] = (bool) 1
0x724: PushEmpty(bool)
0x725: Stack[-1] = (bool) 1
0x726: PushEmpty(bool)
0x727: Stack[-1] = (bool) 1
0x728: PushEmpty(bool)
0x729: Stack[-1] = (bool) 1
0x72a: PushEmpty(bool)
0x72b: Stack[-1] = (bool) 1
0x72c: Push("woman")
0x72d: Pop(1); Push((bool) Stack[-13] == Stack[-1])
0x72e: IF (Stack[-1] == 0) GOTO 0x733; Pop(1)

0x72f: Push("worker")
0x730: Pop(1); Push((bool) Stack[-13] == Stack[-1])
0x731: IF (Stack[-1] == 0) GOTO 0x733; Pop(1)

0x732: Stack[-1] = (bool) 0
0x733: IF (Stack[-1] == 0) GOTO 0x738; Pop(1)

0x734: Push("butcher")
0x735: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0x736: IF (Stack[-1] == 0) GOTO 0x738; Pop(1)

0x737: Stack[-1] = (bool) 0
0x738: IF (Stack[-1] == 0) GOTO 0x73d; Pop(1)

0x739: Push("wasted_girl")
0x73a: Pop(1); Push((bool) Stack[-11] == Stack[-1])
0x73b: IF (Stack[-1] == 0) GOTO 0x73d; Pop(1)

0x73c: Stack[-1] = (bool) 0
0x73d: IF (Stack[-1] == 0) GOTO 0x742; Pop(1)

0x73e: Push("boy")
0x73f: Pop(1); Push((bool) Stack[-10] == Stack[-1])
0x740: IF (Stack[-1] == 0) GOTO 0x742; Pop(1)

0x741: Stack[-1] = (bool) 0
0x742: IF (Stack[-1] == 0) GOTO 0x747; Pop(1)

0x743: Push("vaxxabitka")
0x744: Pop(1); Push((bool) Stack[-9] == Stack[-1])
0x745: IF (Stack[-1] == 0) GOTO 0x747; Pop(1)

0x746: Stack[-1] = (bool) 0
0x747: IF (Stack[-1] == 0) GOTO 0x74c; Pop(1)

0x748: Push("unosha")
0x749: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x74a: IF (Stack[-1] == 0) GOTO 0x74c; Pop(1)

0x74b: Stack[-1] = (bool) 0
0x74c: IF (Stack[-1] == 0) GOTO 0x751; Pop(1)

0x74d: Push("wasted_male")
0x74e: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x74f: IF (Stack[-1] == 0) GOTO 0x751; Pop(1)

0x750: Stack[-1] = (bool) 0
0x751: IF (Stack[-1] == 0) GOTO 0x756; Pop(1)

0x752: Push("alkash")
0x753: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x754: IF (Stack[-1] == 0) GOTO 0x756; Pop(1)

0x755: Stack[-1] = (bool) 0
0x756: IF (Stack[-1] == 0) GOTO 0x75b; Pop(1)

0x757: Push("dohodyaga")
0x758: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x759: IF (Stack[-1] == 0) GOTO 0x75b; Pop(1)

0x75a: Stack[-1] = (bool) 0
0x75b: IF (Stack[-1] == 0) GOTO 0x760; Pop(1)

0x75c: Push("vaxxabit")
0x75d: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x75e: IF (Stack[-1] == 0) GOTO 0x760; Pop(1)

0x75f: Stack[-1] = (bool) 0
0x760: IF (Stack[-1] == 0) GOTO 0x765; Pop(1)

0x761: Push("nudegirl")
0x762: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x763: IF (Stack[-1] == 0) GOTO 0x765; Pop(1)

0x764: Stack[-1] = (bool) 0
0x765: IF (Stack[-1] == 0) GOTO 0x76a; Pop(1)

0x766: Push("morlok")
0x767: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x768: IF (Stack[-1] == 0) GOTO 0x76a; Pop(1)

0x769: Stack[-2] = (bool) 0
0x76a: Return(); Pop(0)

0x76b: PushEmpty(object, object)
0x76c: @ self(Stack[-1])
0x76d: Pop(0)
0x76e: Stack[-3] = Stack[-1]
0x76f: Return(); Pop(2)

0x770: Stack[-1] = 0
0x771: PushEmpty(float, float)
0x772: Pop(0); Push(Stack[-3] | Stack[-3]);
0x773: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x774: Push((float)0.0)
0x775: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x776: IF (Stack[-1] == 0) GOTO 0x779; Pop(1)

0x777: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x778: Return(); Pop(2)

0x779: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x77a: Return(); Pop(2)

0x77b: PushEmpty()
0x77c: Pop(0); Push((bool) Stack[-2] < Stack[-1])
0x77d: IF (Stack[-1] == 0) GOTO 0x780; Pop(1)

0x77e: Stack[-3] = Stack[-2]
0x77f: GOTO 0x781

0x780: Stack[-3] = Stack[-1]
0x781: Return(); Pop(0)

0x782: PushEmpty()
0x783: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x784: IF (Stack[-1] == 0) GOTO 0x787; Pop(1)

0x785: Stack[-4] = Stack[-2]
0x786: Return(); Pop(0)

0x787: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x788: IF (Stack[-1] == 0) GOTO 0x78b; Pop(1)

0x789: Stack[-4] = Stack[-1]
0x78a: Return(); Pop(0)

0x78b: Stack[-4] = Stack[-3]
0x78c: Return(); Pop(0)

0x78d: PushEmpty(int, int)
0x78e: @ irand(Stack[-1], Stack[-3])
0x78f: Pop(0)
0x790: Stack[-5] = Stack[-1] < Stack[-4]; Pop(0);
0x791: Return(); Pop(2)

0x792: PushEmpty(object, object)
0x793: @ CreateObjectSet(Stack[-1])
0x794: Pop(0)
0x795: Stack[-3] = Stack[-1]
0x796: Return(); Pop(2)

0x797: Stack[-1] = 0
0x798: PushEmpty(object, object)
0x799: @ CreateFloatVector(Stack[-1])
0x79a: Pop(0)
0x79b: @@ add(Stack[-3])
0x79c: Pop(0)
0x79d: Push((int) 15)
0x79e: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x79f: Pop(1)
0x7a0: Return(); Pop(2)

0x7a1: Stack[-1] = 0
0x7a2: PushEmpty(bool, bool)
0x7a3: @ IsPlayerActor(Stack[-3], Stack[-1])
0x7a4: Pop(0)
0x7a5: Push(Stack[-1])
0x7a6: IF (Stack[-1] == 0) GOTO 0x7aa; Pop(1)

0x7a7: Push("attack")
0x7a8: @ PlayGlobalMusic(Stack[-1])
0x7a9: Pop(1)
0x7aa: Return(); Pop(2)

0x7ab: PushEmpty(object, object)
0x7ac: @ GetScene(Stack[-1])
0x7ad: Pop(0)
0x7ae: Push("battle")
0x7af: PushEmpty(object)
0x7b0: Call2 0x76b

0x7b1: Pop(0)
0x7b2: @ BroadcastMessage(Stack[-2], Stack[-1], Stack[-3])
0x7b3: Pop(2)
0x7b4: Return(); Pop(2)

0x7b5: Stack[-1] = 0
0x7b6: PushEmpty(string, string)
0x7b7: Stack[-1] = "idle"
0x7b8: Push(Stack[-3])
0x7b9: IF (Stack[-1] == 0) GOTO 0x7bb; Pop(1)

0x7ba: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x7bb: Stack[-4] = Stack[-1]
0x7bc: Return(); Pop(2)

0x7bd: PushEmpty(int, bool, int, bool)
0x7be: Stack[-2] = (int) 0
0x7bf: Push("all")
0x7c0: PushEmpty(string, int)
0x7c1: Stack[-1] = Stack[-5]
0x7c2: Call2 0x7b6

0x7c3: Pop(1)
0x7c4: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x7c5: Pop(2)
0x7c6: Pop(0); Push((bool) Stack[-1] == 0)
0x7c7: IF (Stack[-1] == 0) GOTO 0x7c9; Pop(1)

0x7c8: GOTO 0x7cc

0x7c9: Push((int) 1)
0x7ca: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x7cb: GOTO 0x7bf

0x7cc: Stack[-5] = Stack[-2]
0x7cd: Return(); Pop(4)

0x7ce: PushEmpty(int, int)
0x7cf: Push("branch")
0x7d0: @ GetVariable(Stack[-1], Stack[-2])
0x7d1: Pop(1)
0x7d2: Stack[-3] = Stack[-1]
0x7d3: Return(); Pop(2)

0x7d4: PushEmpty()
0x7d5: PushEmpty(int)
0x7d6: Call2 0x7ce

0x7d7: Pop(0)
0x7d8: Push((int) 1)
0x7d9: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x7da: IF (Stack[-1] == 0) GOTO 0x7de; Pop(1)

0x7db: @ WorkWithCorpse(Stack[-1])
0x7dc: Pop(0)
0x7dd: GOTO 0x7e0

0x7de: @ Barter(Stack[-1])
0x7df: Pop(0)
0x7e0: Return(); Pop(0)

0x7e1: PushEmpty(int, bool, int, bool)
0x7e2: Pop(0); Push((bool) Stack[-6] > Stack[-5])
0x7e3: IF (Stack[-1] == 0) GOTO 0x7e8; Pop(1)

0x7e4: Push("GenerateMoney: iMin > iMax")
0x7e5: @ Trace(Stack[-1])
0x7e6: Pop(1)
0x7e7: Return(); Pop(4)

0x7e8: Stack[-2] = (int) 0
0x7e9: Pop(0); Push((bool) Stack[-6] != Stack[-5])
0x7ea: IF (Stack[-1] == 0) GOTO 0x7ef; Pop(1)

0x7eb: Pop(0); Push(Stack[-5] - Stack[-6]);
0x7ec: @ irand(Stack[-3], Stack[-1])
0x7ed: Pop(1)
0x7ee: GOTO 0x7f3

0x7ef: Push((int) 0)
0x7f0: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x7f1: IF (Stack[-1] == 0) GOTO 0x7f3; Pop(1)

0x7f2: Return(); Pop(4)

0x7f3: Stack[-2] = Stack[-2] + Stack[-6]; Pop(0);
0x7f4: Push((int) 0)
0x7f5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7f6: IF (Stack[-1] == 0) GOTO 0x7f8; Pop(1)

0x7f7: Return(); Pop(4)

0x7f8: PushEmpty(int, string)
0x7f9: Stack[-1] = "Money"
0x7fa: Call2 0x857

0x7fb: Pop(1)
0x7fc: Push((int) 0)
0x7fd: @ AddItem(Stack[-3], Stack[-2], Stack[-1], Stack[-4])
0x7fe: Pop(2)
0x7ff: Return(); Pop(4)

0x800: PushEmpty(object, int, bool, object, int, bool)
0x801: @ CreateInvItem(Stack[-3])
0x802: Pop(0)
0x803: @@ SetItemName(Stack[-7])
0x804: Pop(0)
0x805: Push("Organ")
0x806: Push((int) 1)
0x807: @@ SetProperty(Stack[-2], Stack[-1])
0x808: Pop(2)
0x809: @@ GetItemID(Stack[-2])
0x80a: Pop(0)
0x80b: Push((int) 0)
0x80c: Push((int) 1)
0x80d: @ AddItem(Stack[-3], Stack[-5], Stack[-2], Stack[-1])
0x80e: Pop(2)
0x80f: Return(); Pop(6)

0x810: Stack[-3] = 0
0x811: PushEmpty(int)
0x812: Call2 0x7ce

0x813: Pop(0)
0x814: Push((int) 1)
0x815: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x816: IF (Stack[-1] == 0) GOTO 0x818; Pop(1)

0x817: Return(); Pop(0)

0x818: PushEmpty(string)
0x819: Stack[-1] = "liver"
0x81a: Call2 0x800

0x81b: Pop(1)
0x81c: PushEmpty(string)
0x81d: Stack[-1] = "kidney"
0x81e: Call2 0x800

0x81f: Pop(1)
0x820: PushEmpty(string)
0x821: Stack[-1] = "heart"
0x822: Call2 0x800

0x823: Pop(1)
0x824: PushEmpty(string)
0x825: Stack[-1] = "blood"
0x826: Call2 0x800

0x827: Pop(1)
0x828: Return(); Pop(0)

0x829: PushEmpty(int, bool, int, bool)
0x82a: Push((int) 0)
0x82b: @ ClearSubContainer(Stack[-1])
0x82c: Pop(1)
0x82d: PushEmpty(int, int)
0x82e: Stack[-2] = (int) 600
0x82f: Stack[-1] = (int) 1500
0x830: Call2 0x7e1

0x831: Pop(2)
0x832: PushEmpty(string, int, int, int)
0x833: Stack[-4] = "rusk"
0x834: Stack[-3] = (int) 1
0x835: Stack[-2] = (int) 3
0x836: Stack[-1] = (int) 2
0x837: Call2 0x6dc

0x838: Pop(4)
0x839: PushEmpty(string, int, int, int)
0x83a: Stack[-4] = "alpha_pills"
0x83b: Stack[-3] = (int) 1
0x83c: Stack[-2] = (int) 3
0x83d: Stack[-1] = (int) 5
0x83e: Call2 0x6dc

0x83f: Pop(4)
0x840: PushEmpty(string, int, int, int)
0x841: Stack[-4] = "beta_pills"
0x842: Stack[-3] = (int) 1
0x843: Stack[-2] = (int) 6
0x844: Stack[-1] = (int) 4
0x845: Call2 0x6dc

0x846: Pop(4)
0x847: PushEmpty(string, int, int, int)
0x848: Stack[-4] = "gamma_pills"
0x849: Stack[-3] = (int) 1
0x84a: Stack[-2] = (int) 12
0x84b: Stack[-1] = (int) 3
0x84c: Call2 0x6dc

0x84d: Pop(4)
0x84e: PushEmpty(int, string)
0x84f: Stack[-1] = "ognemet_ammo"
0x850: Call2 0x857

0x851: Pop(1)
0x852: Push((int) 0)
0x853: Push((int) 1)
0x854: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x855: Pop(3)
0x856: Return(); Pop(4)

0x857: PushEmpty(int, int)
0x858: @ GetInvItemByName(Stack[-1], Stack[-3])
0x859: Pop(0)
0x85a: Stack[-4] = Stack[-1]
0x85b: Return(); Pop(2)

0x85c: PushEmpty(string, string)
0x85d: PushEmpty(bool, object, string)
0x85e: Stack[-2] = Stack[-7]
0x85f: Stack[-1] = "class"
0x860: Call2 0x596

0x861: Pop(2)
0x862: Pop(1); Push((bool) Stack[-1] == 0)
0x863: IF (Stack[-1] == 0) GOTO 0x866; Pop(1)

0x864: Stack[-5] = (bool) 0
0x865: Return(); Pop(2)

0x866: Push("class")
0x867: @@ GetProperty(Stack[-1], Stack[-2])
0x868: Pop(1)
0x869: PushEmpty(bool)
0x86a: Stack[-1] = (bool) 1
0x86b: PushEmpty(bool)
0x86c: Stack[-1] = (bool) 1
0x86d: PushEmpty(bool)
0x86e: Stack[-1] = (bool) 1
0x86f: PushEmpty(bool)
0x870: Stack[-1] = (bool) 1
0x871: PushEmpty(bool)
0x872: Stack[-1] = (bool) 1
0x873: PushEmpty(bool)
0x874: Stack[-1] = (bool) 1
0x875: PushEmpty(bool)
0x876: Stack[-1] = (bool) 1
0x877: PushEmpty(bool)
0x878: Stack[-1] = (bool) 1
0x879: PushEmpty(bool)
0x87a: Stack[-1] = (bool) 1
0x87b: PushEmpty(bool)
0x87c: Stack[-1] = (bool) 1
0x87d: Push("patrol")
0x87e: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0x87f: IF (Stack[-1] == 0) GOTO 0x884; Pop(1)

0x880: Push("sanitar")
0x881: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0x882: IF (Stack[-1] == 0) GOTO 0x884; Pop(1)

0x883: Stack[-1] = (bool) 0
0x884: IF (Stack[-1] == 0) GOTO 0x889; Pop(1)

0x885: Push("soldier")
0x886: Pop(1); Push((bool) Stack[-11] == Stack[-1])
0x887: IF (Stack[-1] == 0) GOTO 0x889; Pop(1)

0x888: Stack[-1] = (bool) 0
0x889: IF (Stack[-1] == 0) GOTO 0x88e; Pop(1)

0x88a: Push("woman")
0x88b: Pop(1); Push((bool) Stack[-10] == Stack[-1])
0x88c: IF (Stack[-1] == 0) GOTO 0x88e; Pop(1)

0x88d: Stack[-1] = (bool) 0
0x88e: IF (Stack[-1] == 0) GOTO 0x893; Pop(1)

0x88f: Push("wasted_girl")
0x890: Pop(1); Push((bool) Stack[-9] == Stack[-1])
0x891: IF (Stack[-1] == 0) GOTO 0x893; Pop(1)

0x892: Stack[-1] = (bool) 0
0x893: IF (Stack[-1] == 0) GOTO 0x898; Pop(1)

0x894: Push("vaxxabitka")
0x895: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x896: IF (Stack[-1] == 0) GOTO 0x898; Pop(1)

0x897: Stack[-1] = (bool) 0
0x898: IF (Stack[-1] == 0) GOTO 0x89d; Pop(1)

0x899: Push("vaxxabit")
0x89a: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x89b: IF (Stack[-1] == 0) GOTO 0x89d; Pop(1)

0x89c: Stack[-1] = (bool) 0
0x89d: IF (Stack[-1] == 0) GOTO 0x8a2; Pop(1)

0x89e: Push("little_girl")
0x89f: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x8a0: IF (Stack[-1] == 0) GOTO 0x8a2; Pop(1)

0x8a1: Stack[-1] = (bool) 0
0x8a2: IF (Stack[-1] == 0) GOTO 0x8a7; Pop(1)

0x8a3: Push("girl")
0x8a4: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x8a5: IF (Stack[-1] == 0) GOTO 0x8a7; Pop(1)

0x8a6: Stack[-1] = (bool) 0
0x8a7: IF (Stack[-1] == 0) GOTO 0x8ac; Pop(1)

0x8a8: Push("dohodyaga")
0x8a9: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x8aa: IF (Stack[-1] == 0) GOTO 0x8ac; Pop(1)

0x8ab: Stack[-1] = (bool) 0
0x8ac: IF (Stack[-1] == 0) GOTO 0x8b1; Pop(1)

0x8ad: Push("nudegirl")
0x8ae: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8af: IF (Stack[-1] == 0) GOTO 0x8b1; Pop(1)

0x8b0: Stack[-1] = (bool) 0
0x8b1: IF (Stack[-1] == 0) GOTO 0x8b4; Pop(1)

0x8b2: Stack[-5] = (bool) 1
0x8b3: Return(); Pop(2)

0x8b4: Push(Stack[-3])
0x8b5: IF (Stack[-1] == 0) GOTO 0x8b8; Pop(1)

0x8b6: Stack[-5] = (bool) 0
0x8b7: Return(); Pop(2)

0x8b8: Stack[-5] = (bool) 1
0x8b9: PushEmpty(bool)
0x8ba: Stack[-1] = (bool) 1
0x8bb: PushEmpty(bool)
0x8bc: Stack[-1] = (bool) 1
0x8bd: PushEmpty(bool)
0x8be: Stack[-1] = (bool) 1
0x8bf: PushEmpty(bool)
0x8c0: Stack[-1] = (bool) 1
0x8c1: PushEmpty(bool)
0x8c2: Stack[-1] = (bool) 1
0x8c3: Push("worker")
0x8c4: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x8c5: IF (Stack[-1] == 0) GOTO 0x8ca; Pop(1)

0x8c6: Push("butcher")
0x8c7: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x8c8: IF (Stack[-1] == 0) GOTO 0x8ca; Pop(1)

0x8c9: Stack[-1] = (bool) 0
0x8ca: IF (Stack[-1] == 0) GOTO 0x8cf; Pop(1)

0x8cb: Push("boy")
0x8cc: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x8cd: IF (Stack[-1] == 0) GOTO 0x8cf; Pop(1)

0x8ce: Stack[-1] = (bool) 0
0x8cf: IF (Stack[-1] == 0) GOTO 0x8d4; Pop(1)

0x8d0: Push("unosha")
0x8d1: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x8d2: IF (Stack[-1] == 0) GOTO 0x8d4; Pop(1)

0x8d3: Stack[-1] = (bool) 0
0x8d4: IF (Stack[-1] == 0) GOTO 0x8d9; Pop(1)

0x8d5: Push("wasted_male")
0x8d6: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x8d7: IF (Stack[-1] == 0) GOTO 0x8d9; Pop(1)

0x8d8: Stack[-1] = (bool) 0
0x8d9: IF (Stack[-1] == 0) GOTO 0x8de; Pop(1)

0x8da: Push("alkash")
0x8db: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8dc: IF (Stack[-1] == 0) GOTO 0x8de; Pop(1)

0x8dd: Stack[-1] = (bool) 0
0x8de: IF (Stack[-1] == 0) GOTO 0x8e3; Pop(1)

0x8df: Push("morlok")
0x8e0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x8e1: IF (Stack[-1] == 0) GOTO 0x8e3; Pop(1)

0x8e2: Stack[-5] = (bool) 0
0x8e3: Return(); Pop(2)

0x8e4: PushEmpty(float, object, object, float, object, object)
0x8e5: Push(GlobalVars[4])
0x8e6: PushEmpty(object)
0x8e7: Call2 0x792

0x8e8: Stack[-2] = Stack[-1]
0x8e9: Pop(1)
0x8ea: GlobalVars[4] = Stack[-1]; Pop(1)
0x8eb: @ GetAttackDistance(Stack[-3])
0x8ec: Pop(0)
0x8ed: Push(GlobalVars[2])
0x8ee: Push((float)600.0)
0x8ef: Stack[-2] = Stack[-5] / Stack[-1]; Pop(1);
0x8f0: GlobalVars[2] = Stack[-1]; Pop(1)
0x8f1: @ GetScene(Stack[-2])
0x8f2: Pop(0)
0x8f3: Push("flame")
0x8f4: Push(CVector(0.0, 0.0, 0.0))
0x8f5: @ AddActorByType(Stack[-3], Stack[-2], Stack[-4], Stack[-1])
0x8f6: Pop(2)
0x8f7: PushEmpty(object)
0x8f8: Call2 0x76b

0x8f9: Pop(0)
0x8fa: Push("flame")
0x8fb: @@ Attach(Stack[-2], Stack[-1])
0x8fc: Pop(2)
0x8fd: Push(GlobalVars[3])
0x8fe: Stack[-1] = (bool) 0
0x8ff: GlobalVars[3] = Stack[-1]; Pop(1)
0x900: Push((float)0.05)
0x901: @@ SetLength(Stack[-1])
0x902: Pop(1)
0x903: Push(GlobalVars[0])
0x904: Stack[-1] = Stack[-2]
0x905: GlobalVars[0] = Stack[-1]; Pop(1)
0x906: Push((int) 70)
0x907: Push((float)0.1)
0x908: @ SetTimer(Stack[-2], Stack[-1])
0x909: Pop(2)
0x90a: Return(); Pop(6)

0x90b: Stack[-1] = 0
0x90c: Stack[-2] = 0
0x90d: PushEmpty(float, float, object, cvector, float, float, float, object, cvector, float)
0x90e: Push(Stack[-11])
0x90f: IF (Stack[-1] == 0) GOTO 0x914; Pop(1)

0x910: Push(GlobalVars[2])
0x911: Stack[-6] = Stack[-1]
0x912: Pop(1)
0x913: GOTO 0x915

0x914: Stack[-5] = (float) 0.05
0x915: Push(GlobalVars[0])
0x916: @@ GetLength(Stack[-5])
0x917: Pop(1)
0x918: Pop(0); Push((bool) Stack[-5] < Stack[-4])
0x919: IF (Stack[-1] == 0) GOTO 0x91b; Pop(1)

0x91a: Stack[-4] = Stack[-5]
0x91b: Push(GlobalVars[0])
0x91c: @@ SetLength(Stack[-5])
0x91d: Pop(1)
0x91e: Push(GlobalVars[3])
0x91f: Pop(1); Push((bool) Stack[-1] != Stack[-12])
0x920: IF (Stack[-1] == 0) GOTO 0x944; Pop(1)

0x921: Push(Stack[-11])
0x922: IF (Stack[-1] == 0) GOTO 0x93a; Pop(1)

0x923: Push(GlobalVars[1])
0x924: Pop(1); Push((bool) Stack[-1] == 0)
0x925: IF (Stack[-1] == 0) GOTO 0x935; Pop(1)

0x926: Stack[-2] = CVector(0.0, 0.0, 0.0)
0x927: @ GetHeight(Stack[-1])
0x928: Pop(0)
0x929: Push(CvectorIndex(Stack[-2], 1))
0x92a: Stack[-1] = Stack[-2]
0x92b: CvectorIndex(Stack[-3], 1) = Stack[-1];
0x92c: Push("flame_loop")
0x92d: Push((int) 0)
0x92e: Push((int) 200)
0x92f: @ PlayLoopedGlobalSound(Stack[-6], Stack[-3], Stack[-5], Stack[-2], Stack[-1])
0x930: Pop(3)
0x931: Push(GlobalVars[1])
0x932: Stack[-1] = Stack[-4]
0x933: GlobalVars[1] = Stack[-1]; Pop(1)
0x934: Stack[-3] = 0
0x935: Push(GlobalVars[1])
0x936: Push((int) 2)
0x937: @@ FadeIn(Stack[-1])
0x938: Pop(2)
0x939: GOTO 0x941

0x93a: Push(GlobalVars[1])
0x93b: Pop(1); Push(( Stack[-1] != 0 )
0x93c: IF (Stack[-1] == 0) GOTO 0x941; Pop(1)

0x93d: Push(GlobalVars[1])
0x93e: Push((int) 2)
0x93f: @@ FadeOut(Stack[-1])
0x940: Pop(2)
0x941: Push(GlobalVars[3])
0x942: Stack[-1] = Stack[-12]
0x943: GlobalVars[3] = Stack[-1]; Pop(1)
0x944: Return(); Pop(10)

0x945: PushEmpty(cvector, float, cvector, float, bool, cvector, float, cvector, float, bool)
0x946: @ GetPosition(Stack[-5])
0x947: Pop(0)
0x948: @ GetHeight(Stack[-4])
0x949: Pop(0)
0x94a: Push(CvectorIndex(Stack[-5], 1))
0x94b: Push((int) 2)
0x94c: Pop(1); Push(Stack[-6] / Stack[-1]);
0x94d: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x94e: CvectorIndex(Stack[-6], 1) = Stack[-1];
0x94f: Stack[-3] = Stack[-11] - Stack[-5]; Pop(0);
0x950: Pop(0); Push(Stack[-3] | Stack[-3]);
0x951: Stack[-3] = Sqrt(Stack[-1]); Pop(1);
0x952: Push((int) 50)
0x953: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x954: IF (Stack[-1] == 0) GOTO 0x957; Pop(1)

0x955: Stack[-1] = (bool) 0
0x956: GOTO 0x95b

0x957: Push(CvectorIndex(Stack[-3], 1))
0x958: Pop(1); Push(Stack[-1] / Stack[-3]);
0x959: Push((float)-0.14286)
0x95a: Stack[-3] = Stack[-2] < Stack[-1]; Pop(2);
0x95b: Push("all")
0x95c: Push(Stack[-2])
0x95d: IF (Stack[-1] == 0) GOTO 0x960; Pop(1)

0x95e: Push("cattack")
0x95f: GOTO 0x961

0x960: Push("attack")
0x961: @ PlayAnimation(Stack[-2], Stack[-1])
0x962: Pop(2)
0x963: Return(); Pop(10)

0x964: PushEmpty(cvector, float, cvector, float)
0x965: @@ GetPosition(Stack[-2])
0x966: Pop(0)
0x967: Push("@GetHeight")
0x968: Push((int) 1)
0x969: Pop(2); Push(IsFuncExist(Stack[-7], Stack[-2], Stack[-1]))
0x96a: IF (Stack[-1] == 0) GOTO 0x972; Pop(1)

0x96b: @@ GetHeight(Stack[-1])
0x96c: Pop(0)
0x96d: Push(CvectorIndex(Stack[-2], 1))
0x96e: Push((int) 2)
0x96f: Pop(1); Push(Stack[-3] / Stack[-1]);
0x970: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x971: CvectorIndex(Stack[-3], 1) = Stack[-1];
0x972: PushEmpty(cvector)
0x973: Stack[-1] = Stack[-3]
0x974: Call2 0x945

0x975: Pop(1)
0x976: Return(); Pop(4)

0x977: PushEmpty(bool, float, float, string, float, bool, float, float, string, float)
0x978: PushEmpty(bool, object)
0x979: Stack[-1] = Stack[-13]
0x97a: Call2 0x614

0x97b: Pop(1)
0x97c: Pop(1); Push((bool) Stack[-1] == 0)
0x97d: IF (Stack[-1] == 0) GOTO 0x980; Pop(1)

0x97e: Stack[-12] = (bool) 0
0x97f: Return(); Pop(10)

0x980: Push(GlobalVars[4])
0x981: @@ in(Stack[-6], Stack[-12])
0x982: Pop(1)
0x983: Push(Stack[-5])
0x984: IF (Stack[-1] == 0) GOTO 0x987; Pop(1)

0x985: Stack[-12] = (bool) 1
0x986: Return(); Pop(10)

0x987: PushEmpty(bool, object)
0x988: Stack[-1] = Stack[-13]
0x989: Call2 0x591

0x98a: Pop(1)
0x98b: IF (Stack[-1] == 0) GOTO 0x99a; Pop(1)

0x98c: Push("reputation")
0x98d: @@ GetProperty(Stack[-1], Stack[-5])
0x98e: Pop(1)
0x98f: Push((float)0.33)
0x990: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x991: IF (Stack[-1] == 0) GOTO 0x994; Pop(1)

0x992: Stack[-12] = (bool) 1
0x993: Return(); Pop(10)

0x994: Push("disease")
0x995: @@ GetProperty(Stack[-1], Stack[-4])
0x996: Pop(1)
0x997: Push((float)0.33)
0x998: Stack[-13] = Stack[-4] > Stack[-1]; Pop(1);
0x999: Return(); Pop(10)

0x99a: PushEmpty(bool, object, string)
0x99b: Stack[-2] = Stack[-14]
0x99c: Stack[-1] = "class"
0x99d: Call2 0x596

0x99e: Pop(2)
0x99f: Pop(1); Push((bool) Stack[-1] == 0)
0x9a0: IF (Stack[-1] == 0) GOTO 0x9a3; Pop(1)

0x9a1: Stack[-12] = (bool) 0
0x9a2: Return(); Pop(10)

0x9a3: Push("class")
0x9a4: @@ GetProperty(Stack[-1], Stack[-3])
0x9a5: Pop(1)
0x9a6: PushEmpty(bool)
0x9a7: Stack[-1] = (bool) 1
0x9a8: PushEmpty(bool)
0x9a9: Stack[-1] = (bool) 1
0x9aa: PushEmpty(bool)
0x9ab: Stack[-1] = (bool) 1
0x9ac: Push("bomber")
0x9ad: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x9ae: IF (Stack[-1] == 0) GOTO 0x9b3; Pop(1)

0x9af: Push("hunter")
0x9b0: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x9b1: IF (Stack[-1] == 0) GOTO 0x9b3; Pop(1)

0x9b2: Stack[-1] = (bool) 0
0x9b3: IF (Stack[-1] == 0) GOTO 0x9b8; Pop(1)

0x9b4: Push("grabitel")
0x9b5: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x9b6: IF (Stack[-1] == 0) GOTO 0x9b8; Pop(1)

0x9b7: Stack[-1] = (bool) 0
0x9b8: IF (Stack[-1] == 0) GOTO 0x9bd; Pop(1)

0x9b9: Push("rat_big")
0x9ba: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x9bb: IF (Stack[-1] == 0) GOTO 0x9bd; Pop(1)

0x9bc: Stack[-1] = (bool) 0
0x9bd: IF (Stack[-1] == 0) GOTO 0x9c0; Pop(1)

0x9be: Stack[-12] = (bool) 1
0x9bf: Return(); Pop(10)

0x9c0: PushEmpty(bool, object, string)
0x9c1: Stack[-2] = Stack[-14]
0x9c2: Stack[-1] = "disease"
0x9c3: Call2 0x596

0x9c4: Pop(2)
0x9c5: Pop(1); Push((bool) Stack[-1] == 0)
0x9c6: IF (Stack[-1] == 0) GOTO 0x9c9; Pop(1)

0x9c7: Stack[-12] = (bool) 0
0x9c8: Return(); Pop(10)

0x9c9: PushEmpty(bool)
0x9ca: Stack[-1] = (bool) 1
0x9cb: PushEmpty(bool, string)
0x9cc: Stack[-1] = Stack[-5]
0x9cd: Call2 0x714

0x9ce: Pop(1)
0x9cf: IF (Stack[-1] == 0) GOTO 0x9d4; Pop(1)

0x9d0: Push("dog")
0x9d1: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x9d2: IF (Stack[-1] == 0) GOTO 0x9d4; Pop(1)

0x9d3: Stack[-1] = (bool) 0
0x9d4: IF (Stack[-1] == 0) GOTO 0x9db; Pop(1)

0x9d5: Push("disease")
0x9d6: @@ GetProperty(Stack[-1], Stack[-2])
0x9d7: Pop(1)
0x9d8: Push((int) 0)
0x9d9: Stack[-13] = Stack[-2] > Stack[-1]; Pop(1);
0x9da: Return(); Pop(10)

0x9db: Stack[-12] = (bool) 0
0x9dc: Return(); Pop(10)

0x9dd: PushEmpty()
0x9de: PushEmpty(object, object)
0x9df: Stack[-1] = Stack[-3]
0x9e0: Push(-2, 1); TaskCall(4)
0x9e1: Call2 0x35f

0x9e2: Pop(-2, 1); TaskReturn
0x9e3: Stack[-3] = Stack[-2]
0x9e4: Pop(2)
0x9e5: @ ResetAAS()
0x9e6: Pop(0)
0x9e7: PushEmpty(bool)
0x9e8: Stack[-1] = (bool) 0
0x9e9: PushEmpty(bool, object)
0x9ea: Stack[-1] = Stack[-4]
0x9eb: Call2 0x62c

0x9ec: Pop(1)
0x9ed: IF (Stack[-1] == 0) GOTO 0x9f4; Pop(1)

0x9ee: PushEmpty(bool, object)
0x9ef: Stack[-1] = Stack[-4]
0x9f0: Call2 0x5eb

0x9f1: Pop(1)
0x9f2: IF (Stack[-1] == 0) GOTO 0x9f4; Pop(1)

0x9f3: Stack[-1] = (bool) 1
0x9f4: IF (Stack[-1] == 0) GOTO 0x9fd; Pop(1)

0x9f5: PushEmpty(object)
0x9f6: Stack[-1] = Stack[-2]
0x9f7: Push(-1, 2); TaskCall(6)
0x9f8: Call2 0x495

0x9f9: Pop(-1, 2); TaskReturn
0x9fa: Pop(1)
0x9fb: @ ResetAAS()
0x9fc: Pop(0)
0x9fd: Return(); Pop(0)

0x9fe: PushEmpty()
0x9ff: PushEmpty(bool, object)
0xa00: Stack[-1] = Stack[-3]
0xa01: Call2 0xb16

0xa02: Stack[-4] = Stack[-2]
0xa03: Pop(2)
0xa04: Return(); Pop(0)

0xa05: PushEmpty()
0xa06: PushEmpty(object)
0xa07: Stack[-1] = Stack[-2]
0xa08: Call2 0x9dd

0xa09: Pop(1)
0xa0a: Return(); Pop(0)

0xa0b: PushEmpty()
0xa0c: PushEmpty(bool, object)
0xa0d: Stack[-1] = Stack[-3]
0xa0e: Call2 0xb16

0xa0f: Stack[-4] = Stack[-2]
0xa10: Pop(2)
0xa11: Return(); Pop(0)

0xa12: PushEmpty()
0xa13: PushEmpty(object)
0xa14: Stack[-1] = Stack[-2]
0xa15: Call2 0x9dd

0xa16: Pop(1)
0xa17: Return(); Pop(0)

0xa18: PushEmpty(float, float)
0xa19: PushEmpty(bool)
0xa1a: Stack[-1] = (bool) 1
0xa1b: PushEmpty(bool)
0xa1c: Stack[-1] = (bool) 1
0xa1d: Pop(0); Push((bool) Stack[-5] == 0)
0xa1e: IF (Stack[-1] == 0) GOTO 0xa26; Pop(1)

0xa1f: PushEmpty(bool, object)
0xa20: Stack[-1] = Stack[-7]
0xa21: Call2 0x5eb

0xa22: Pop(1)
0xa23: Pop(1); Push((bool) Stack[-1] == 0)
0xa24: IF (Stack[-1] == 0) GOTO 0xa26; Pop(1)

0xa25: Stack[-1] = (bool) 0
0xa26: IF (Stack[-1] == 0) GOTO 0xa2f; Pop(1)

0xa27: PushEmpty(bool, object, string)
0xa28: Stack[-2] = Stack[-7]
0xa29: Stack[-1] = "disease"
0xa2a: Call2 0x596

0xa2b: Pop(2)
0xa2c: Pop(1); Push((bool) Stack[-1] == 0)
0xa2d: IF (Stack[-1] == 0) GOTO 0xa2f; Pop(1)

0xa2e: Stack[-1] = (bool) 0
0xa2f: IF (Stack[-1] == 0) GOTO 0xa32; Pop(1)

0xa30: Stack[-4] = (bool) 0
0xa31: Return(); Pop(2)

0xa32: Push("disease")
0xa33: @@ GetProperty(Stack[-1], Stack[-2])
0xa34: Pop(1)
0xa35: Push((int) 0)
0xa36: Stack[-5] = Stack[-2] > Stack[-1]; Pop(1);
0xa37: Return(); Pop(2)

0xa38: PushEmpty()
0xa39: PushEmpty(object)
0xa3a: Stack[-1] = Stack[-2]
0xa3b: Push(-1, 2); TaskCall(6)
0xa3c: Call2 0x495

0xa3d: Pop(-1, 2); TaskReturn
0xa3e: Pop(1)
0xa3f: @ ResetAAS()
0xa40: Pop(0)
0xa41: Return(); Pop(0)

0xa42: PushEmpty(bool, bool)
0xa43: Pop(0); Push((bool) Stack[-3] == 0)
0xa44: IF (Stack[-1] == 0) GOTO 0xa46; Pop(1)

0xa45: Return(); Pop(2)

0xa46: Push(GlobalVars[4])
0xa47: @@ in(Stack[-2], Stack[-4])
0xa48: Pop(1)
0xa49: Pop(0); Push((bool) Stack[-1] == 0)
0xa4a: IF (Stack[-1] == 0) GOTO 0xa4e; Pop(1)

0xa4b: Push(GlobalVars[4])
0xa4c: @@ add(Stack[-4])
0xa4d: Pop(1)
0xa4e: PushEmpty(bool, object)
0xa4f: Stack[-1] = Stack[-5]
0xa50: Call2 0x591

0xa51: Pop(1)
0xa52: IF (Stack[-1] == 0) GOTO 0xa59; Pop(1)

0xa53: PushEmpty(object)
0xa54: Call2 0x76b

0xa55: Pop(0)
0xa56: Push((float)-0.07)
0xa57: @ ReportReputationChange(Stack[-5], Stack[-2], Stack[-1])
0xa58: Pop(2)
0xa59: Return(); Pop(2)

0xa5a: PushEmpty()
0xa5b: PushEmpty(object)
0xa5c: Stack[-1] = Stack[-2]
0xa5d: Call2 0xa42

0xa5e: Pop(1)
0xa5f: PushEmpty(object)
0xa60: Stack[-1] = Stack[-2]
0xa61: Call2 0x9dd

0xa62: Pop(1)
0xa63: Return(); Pop(0)

0xa64: PushEmpty()
0xa65: PushEmpty(object)
0xa66: Call2 0x76b

0xa67: Pop(0)
0xa68: Push((float)-0.13)
0xa69: Push((bool) 1)
0xa6a: @ ReportReputationChange(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xa6b: Pop(3)
0xa6c: PushEmpty(object)
0xa6d: Stack[-1] = Stack[-2]
0xa6e: Push(-1, 0); TaskCall(5)
0xa6f: Call2 0x3e7

0xa70: Pop(-1, 0); TaskReturn
0xa71: Pop(1)
0xa72: Return(); Pop(0)

0xa73: PushEmpty()
0xa74: PushEmpty(object, int, float)
0xa75: Stack[-3] = Stack[-7]
0xa76: Stack[-2] = Stack[-6]
0xa77: Stack[-1] = Stack[-5]
0xa78: Call2 0x67a

0xa79: Pop(3)
0xa7a: Return(); Pop(0)

0xa7b: PushEmpty()
0xa7c: PushEmpty(object, int, float, cvector, cvector)
0xa7d: Stack[-5] = Stack[-11]
0xa7e: Stack[-4] = Stack[-10]
0xa7f: Stack[-3] = Stack[-9]
0xa80: Stack[-2] = Stack[-7]
0xa81: Stack[-1] = Stack[-6]
0xa82: Call2 0x6be

0xa83: Pop(5)
0xa84: Return(); Pop(0)

0xa85: PushEmpty(float, float)
0xa86: Push("health")
0xa87: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xa88: IF (Stack[-1] == 0) GOTO 0xa91; Pop(1)

0xa89: Push("health")
0xa8a: @ GetProperty(Stack[-1], Stack[-2])
0xa8b: Pop(1)
0xa8c: Push((int) 0)
0xa8d: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0xa8e: IF (Stack[-1] == 0) GOTO 0xa91; Pop(1)

0xa8f: @ SignalDeath(Stack[-4])
0xa90: Pop(0)
0xa91: Return(); Pop(2)

0xa92: PushEmpty()
0xa93: PushEmpty(object)
0xa94: Stack[-1] = Stack[-2]
0xa95: Call2 0xa64

0xa96: Pop(1)
0xa97: Return(); Pop(0)

0xa98: PushEmpty(bool, bool)
0xa99: PushEmpty(bool, object, bool)
0xa9a: Stack[-2] = Stack[-7]
0xa9b: Stack[-1] = !Stack[-6]; Pop(0);
0xa9c: Call2 0x85c

0xa9d: Pop(2)
0xa9e: IF (Stack[-1] == 0) GOTO 0xab0; Pop(1)

0xa9f: @ CanSee(Stack[-1], Stack[-5])
0xaa0: Pop(0)
0xaa1: PushEmpty(bool)
0xaa2: Stack[-1] = (bool) 1
0xaa3: Push(Stack[-2])
0xaa4: IF (Stack[-1] == 0) GOTO 0xaad; Pop(1)

0xaa5: PushEmpty(float, object)
0xaa6: Stack[-1] = Stack[-8]
0xaa7: Call2 0x589

0xaa8: Pop(1)
0xaa9: Push((float)490000.0)
0xaaa: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0xaab: IF (Stack[-1] == 0) GOTO 0xaad; Pop(1)

0xaac: Stack[-1] = (bool) 0
0xaad: IF (Stack[-1] == 0) GOTO 0xab0; Pop(1)

0xaae: Stack[-6] = (bool) 1
0xaaf: Return(); Pop(2)

0xab0: Stack[-6] = (bool) 0
0xab1: Return(); Pop(2)

0xab2: PushEmpty(object, float, object, bool, string, float, float, float, object, float, object, bool, string, float, float, float)
0xab3: Push((int) 70)
0xab4: Pop(1); Push((bool) Stack[-18] != Stack[-1])
0xab5: IF (Stack[-1] == 0) GOTO 0xab7; Pop(1)

0xab6: Return(); Pop(16)

0xab7: Push(GlobalVars[0])
0xab8: Pop(1); Push((bool) Stack[-1] == 0)
0xab9: IF (Stack[-1] == 0) GOTO 0xabb; Pop(1)

0xaba: Return(); Pop(16)

0xabb: Push(GlobalVars[0])
0xabc: @@ Intersect(Stack[-9], Stack[-8])
0xabd: Pop(1)
0xabe: Push(GlobalVars[0])
0xabf: Push(GlobalVars[3])
0xac0: IF (Stack[-1] == 0) GOTO 0xac9; Pop(1)

0xac1: PushEmpty(float, float, float)
0xac2: Stack[-2] = Stack[-11]
0xac3: Push(GlobalVars[2])
0xac4: Stack[-2] = Stack[-1]
0xac5: Pop(1)
0xac6: Call2 0x77b

0xac7: Pop(2)
0xac8: GOTO 0xaca

0xac9: Push((float)0.05)
0xaca: @@ SetLength(Stack[-1])
0xacb: Pop(2)
0xacc: PushEmpty()
0xacd: Call2 0x7ab

0xace: Pop(0)
0xacf: @@ Next(Stack[-5], Stack[-6])
0xad0: Pop(0)
0xad1: Push(Stack[-5])
0xad2: IF (Stack[-1] == 0) GOTO 0xb13; Pop(1)

0xad3: PushEmpty(bool)
0xad4: Stack[-1] = (bool) 0
0xad5: Pop(0); Push(( Stack[-7] != 0 )
0xad6: IF (Stack[-1] == 0) GOTO 0xadd; Pop(1)

0xad7: PushEmpty(object)
0xad8: Call2 0x76b

0xad9: Pop(0)
0xada: Pop(1); Push((bool) Stack[-8] != Stack[-1])
0xadb: IF (Stack[-1] == 0) GOTO 0xadd; Pop(1)

0xadc: Stack[-1] = (bool) 1
0xadd: IF (Stack[-1] == 0) GOTO 0xb12; Pop(1)

0xade: PushEmpty(bool, object, string)
0xadf: Stack[-2] = Stack[-9]
0xae0: Stack[-1] = "class"
0xae1: Call2 0x596

0xae2: Pop(2)
0xae3: IF (Stack[-1] == 0) GOTO 0xae7; Pop(1)

0xae4: Push("class")
0xae5: @@ GetProperty(Stack[-1], Stack[-5])
0xae6: Pop(1)
0xae7: Push("sanitar")
0xae8: Pop(1); Push((bool) Stack[-5] != Stack[-1])
0xae9: IF (Stack[-1] == 0) GOTO 0xb12; Pop(1)

0xaea: PushEmpty(float, object, float, int)
0xaeb: Stack[-3] = Stack[-10]
0xaec: Stack[-2] = (float) 0.1
0xaed: Stack[-1] = (int) 2
0xaee: Call2 0x5a2

0xaef: Stack[-7] = Stack[-4]
0xaf0: Pop(4)
0xaf1: PushEmpty(bool, object, string)
0xaf2: Stack[-2] = Stack[-9]
0xaf3: Stack[-1] = "disease"
0xaf4: Call2 0x596

0xaf5: Pop(2)
0xaf6: IF (Stack[-1] == 0) GOTO 0xb04; Pop(1)

0xaf7: Push("disease")
0xaf8: @@ GetProperty(Stack[-1], Stack[-3])
0xaf9: Pop(1)
0xafa: Push((float)0.1)
0xafb: Pop(1); Push((bool) Stack[-3] <= Stack[-1])
0xafc: IF (Stack[-1] == 0) GOTO 0xaff; Pop(1)

0xafd: Stack[-2] = (int) 0
0xafe: GOTO 0xb01

0xaff: Push((float)0.1)
0xb00: Stack[-3] = Stack[-3] - Stack[-1]; Pop(1);
0xb01: Push("disease")
0xb02: @@ SetProperty(Stack[-1], Stack[-3])
0xb03: Pop(1)
0xb04: PushEmpty(bool, object, string)
0xb05: Stack[-2] = Stack[-9]
0xb06: Stack[-1] = "fire"
0xb07: Call2 0x596

0xb08: Pop(2)
0xb09: IF (Stack[-1] == 0) GOTO 0xb12; Pop(1)

0xb0a: Push("fire")
0xb0b: @@ GetProperty(Stack[-1], Stack[-2])
0xb0c: Pop(1)
0xb0d: Push("fire")
0xb0e: Push((float)0.1)
0xb0f: Pop(1); Push(Stack[-3] + Stack[-1]);
0xb10: @@ SetProperty(Stack[-2], Stack[-1])
0xb11: Pop(2)
0xb12: GOTO 0xacf

0xb13: Return(); Pop(16)

0xb14: Stack[-6] = 0
0xb15: Stack[-8] = 0
0xb16: PushEmpty()
0xb17: PushEmpty(bool, object)
0xb18: Stack[-1] = Stack[-3]
0xb19: Call2 0x977

0xb1a: Stack[-4] = Stack[-2]
0xb1b: Pop(2)
0xb1c: Return(); Pop(0)

