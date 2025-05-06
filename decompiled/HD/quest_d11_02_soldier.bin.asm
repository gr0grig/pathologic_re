GlobalVarCount = 1
	G_VAR_0 object 

Strings:
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
	all
	shoot_begin
	shot
	shoot_end
	attack_off
	attack_on
	hunt
	@Stop hunt
	attack_begin1
	attack
	light-dynamic
	soldier_fire.xml
	scripted
	richochet.xml
	Material
	SetScriptProperty
	attack_end1
	execute
	quest_d11_02
	soldier_attack
	cleanup
	restore
	in
	fire
	bullet
	phys
	player
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
	reputation
	battle
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
	rifle_ammo
	rusk
	bandage
	tourniquet
	class
	patrol
	sanitar
	soldier
	little_girl
	bomber
	hunter
	grabitel
	disease
	dog
	actor_unload
	soldier_dead

Import:
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
	PlayAnimation (2 args)
	WaitForAnimEnd (0 args)
	UnlookAsync (1 args)
	LockAnimationEnd (2 args)
	RemoveEnvelope (0 args)
	StopSecondaryAnimation (0 args)
	Face (1 args)
	Sleep (2 args)
	KillTimer (1 args)
	StopGroup0 (0 args)
	SetTimer (2 args)
	CanSee (2 args)
	WaitForAnimEnd (1 args)
	PlayGlobalSound (4 args)
	SetAttackState (1 args)
	Sleep (1 args)
	Trace (1 args)
	StopAnimation (0 args)
	ReportAttack (1 args)
	SendPlayerEnemy (2 args)
	GetGeometryLocator (4 args)
	GetScene (1 args)
	AddActorByType (6 args)
	RandVecCone3D (3 args)
	GetVictimMaterial (4 args)
	ReportHit (4 args)
	IsLoaded (1 args)
	RemoveActor (1 args)
	GetPFPosition (1 args)
	irand (2 args)
	FindPathTo (2 args)
	RotatePath (2 args)
	FollowPath (3 args)
	Rotate (3 args)
	FindActor (2 args)
	IsPlayerActor (2 args)
	IsDead (1 args)
	GetSecondaryAnimationType (1 args)
	FadeSecondaryAnimation (4 args)
	CreateVectorVector (1 args)
	RotateAsync (2 args)
	GetEyesHeight (1 args)
	AddItem (3 args)
	AddItem (4 args)
	IsExisting3DSound (2 args)
	Is3DSoundLoaded (2 args)
	PlayGlobalSound (2 args)
	self (1 args)
	CreateObjectSet (1 args)
	SendWorldWndMessage (1 args)
	CreateFloatVector (1 args)
	RumblePlay (2 args)
	SendWorldWndMessage (2 args)
	Trigger (2 args)
	PlayGlobalMusic (1 args)
	BroadcastMessage (3 args)
	GetVariable (2 args)
	WorkWithCorpse (1 args)
	Barter (1 args)
	CreateInvItem (1 args)
	ClearSubContainer (1 args)
	GetInvItemByName (2 args)
	GetProperty (2 args)
	SignalDeath (1 args)
	ReportReputationChange (4 args)
	ResetAAS (0 args)
	ReportReputationChange (3 args)

RunOp = 0x33f
RunTask = 4

GlobalTasks: 
	GTASK_0  Params = 1
		EVENT_0 Op = 0x20 Vars = (object)
		EVENT_22 Op = 0x9f Vars = (object, int, float, float)
		EVENT_16 Op = 0xa1 Vars = (object, string)
		EVENT_41 Op = 0xa3 Vars = (object)
	GTASK_1 Vars = (object) Params = 1
		EVENT_41 Op = 0xc5 Vars = (object)
		EVENT_3 Op = 0xce Vars = (object)
		EVENT_4 Op = 0xd7 Vars = (object)
		EVENT_17 Op = 0xe3 Vars = (object)
		EVENT_30 Op = 0xf7 Vars = (object, object, bool)
		EVENT_1 Op = 0x104 Vars = (object)
		EVENT_7 Op = 0x112 Vars = (int)
	GTASK_2 Vars = (object, bool) Params = 1
		EVENT_17 Op = 0x196 Vars = (object)
		EVENT_30 Op = 0x1aa Vars = (object, object, bool)
		EVENT_41 Op = 0x1be Vars = (object)
	GTASK_3 Vars = (object, object, bool) Params = 2
		EVENT_3 Op = 0x257 Vars = (object)
		EVENT_1 Op = 0x265 Vars = (object)
		EVENT_17 Op = 0x2f7 Vars = (object)
		EVENT_30 Op = 0x30f Vars = (object, object, bool)
	GTASK_4 Vars = (bool) Params = 0
		EVENT_26 Op = 0x31c Vars = (string)
		EVENT_17 Op = 0x338 Vars = (object)
		EVENT_6 Op = 0x35f Vars = ()
	GTASK_5 Vars = (cvector, cvector) Params = 1
		EVENT_3 Op = 0x387 Vars = (object)
		EVENT_17 Op = 0x3a5 Vars = (object)
		EVENT_30 Op = 0x3b9 Vars = (object, object, bool)
		EVENT_1 Op = 0x3c6 Vars = (object)
	GTASK_6 Vars = (bool) Params = 0
		EVENT_17 Op = 0x469 Vars = (object)
		EVENT_26 Op = 0x470 Vars = (string)

Events:
EVENT_22 Op = 0x7b6 Vars = (object, int, float, float)
EVENT_43 Op = 0x7be Vars = (object, int, float, float, cvector, cvector)
EVENT_16 Op = 0x7c8 Vars = (object, string)
EVENT_41 Op = 0x7d5 Vars = (object)
EVENT_6 Op = 0x947 Vars = ()

0x0: PushEmpty()
0x1: PushEmpty(bool, object)
0x2: Stack[-1] = Stack[-3]
0x3: Call2 0x49c

0x4: Pop(1)
0x5: IF (Stack[-1] == 0) GOTO 0x9; Pop(1)

0x6: PushEmpty()
0x7: Call2 0x785

0x8: Pop(0)
0x9: PushEmpty()
0xa: Call2 0x76d

0xb: Pop(0)
0xc: PushEmpty(object)
0xd: Stack[-1] = Stack[-2]
0xe: Call2 0x11

0xf: Pop(1)
0x10: Return(); Pop(0)

0x11: PushEmpty()
0x12: EventDisable(0)
0x13: PushEmpty(object)
0x14: Stack[-1] = Stack[-2]
0x15: Call2 0x2a

0x16: Pop(1)
0x17: Push((int) 50)
0x18: Push((int) 40)
0x19: @ SetRTEnvelope(Stack[-2], Stack[-1])
0x1a: Pop(2)
0x1b: EventEnable(0)
0x1c: @ Hold()
0x1d: Pop(0)
0x1e: GOTO 0x1c

0x1f: Return(); Pop(0)

0x20: PushEmpty(bool, bool)
0x21: @ IsOverrideActive(Stack[-1])
0x22: Pop(0)
0x23: Pop(0); Push((bool) Stack[-1] == 0)
0x24: IF (Stack[-1] == 0) GOTO 0x29; Pop(1)

0x25: PushEmpty(object)
0x26: Stack[-1] = Stack[-4]
0x27: Call2 0x730

0x28: Pop(1)
0x29: Return(); Pop(2)

0x2a: PushEmpty(cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector, cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector)
0x2b: Pop(0); Push((bool) Stack[-21] == 0)
0x2c: IF (Stack[-1] == 0) GOTO 0x32; Pop(1)

0x2d: PushEmpty(string)
0x2e: Stack[-1] = "fdie"
0x2f: Call2 0x85

0x30: Pop(1)
0x31: GOTO 0x84

0x32: @@ GetPosition(Stack[-10])
0x33: Pop(0)
0x34: @ GetPosition(Stack[-9])
0x35: Pop(0)
0x36: @ GetDirection(Stack[-8])
0x37: Pop(0)
0x38: Stack[-7] = Stack[-9] - Stack[-10]; Pop(0);
0x39: Push(CvectorIndex(Stack[-7], 0))
0x3a: Push(CvectorIndex(Stack[-9], 0))
0x3b: Pop(2); Push(Stack[-2] * Stack[-1]);
0x3c: Push(CvectorIndex(Stack[-8], 2))
0x3d: Push(CvectorIndex(Stack[-10], 2))
0x3e: Pop(2); Push(Stack[-2] * Stack[-1]);
0x3f: Pop(2); Push(Stack[-2] + Stack[-1]);
0x40: Push((int) 0)
0x41: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x42: IF (Stack[-1] == 0) GOTO 0x45; Pop(1)

0x43: Stack[-6] = "fdie"
0x44: GOTO 0x46

0x45: Stack[-6] = "bdie"
0x46: @ RemoveRTEnvelope()
0x47: Pop(0)
0x48: @ SetDeathState()
0x49: Pop(0)
0x4a: @ Stop()
0x4b: Pop(0)
0x4c: @ StopAsync()
0x4d: Pop(0)
0x4e: Stack[-5] = Stack[-21]
0x4f: Push("GetScriptProperty")
0x50: Push((int) 2)
0x51: Pop(2); Push(IsFuncExist(Stack[-23], Stack[-2], Stack[-1]))
0x52: IF (Stack[-1] == 0) GOTO 0x5e; Pop(1)

0x53: Push("Owner")
0x54: @@ HasScriptProperty(Stack[-5], Stack[-1])
0x55: Pop(1)
0x56: Push(Stack[-4])
0x57: IF (Stack[-1] == 0) GOTO 0x5e; Pop(1)

0x58: Push("Owner")
0x59: @@ GetScriptProperty(Stack[-6], Stack[-1])
0x5a: Pop(1)
0x5b: Pop(0); Push((bool) Stack[-5] == 0)
0x5c: IF (Stack[-1] == 0) GOTO 0x5e; Pop(1)

0x5d: Stack[-5] = Stack[-21]
0x5e: Push("@GetEyesHeight")
0x5f: Push((int) 1)
0x60: Pop(2); Push(IsFuncExist(Stack[-7], Stack[-2], Stack[-1]))
0x61: IF (Stack[-1] == 0) GOTO 0x6d; Pop(1)

0x62: @@ GetEyesHeight(Stack[-2])
0x63: Pop(0)
0x64: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x65: Push(CvectorIndex(Stack[-1], 1))
0x66: Stack[-1] = Stack[-3]
0x67: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x68: Push("head")
0x69: @ LookAsync(Stack[-22], Stack[-1], Stack[-2])
0x6a: Pop(1)
0x6b: Stack[-3] = (bool) 1
0x6c: GOTO 0x6e

0x6d: Stack[-3] = (bool) 0
0x6e: PushEmpty(string)
0x6f: Stack[-1] = Stack[-7]
0x70: Call2 0x5f7

0x71: Pop(1)
0x72: Push("all")
0x73: @ PlayAnimation(Stack[-1], Stack[-7])
0x74: Pop(1)
0x75: @ WaitForAnimEnd()
0x76: Pop(0)
0x77: Push(Stack[-3])
0x78: IF (Stack[-1] == 0) GOTO 0x7e; Pop(1)

0x79: @ StopAsync()
0x7a: Pop(0)
0x7b: Push("head")
0x7c: @ UnlookAsync(Stack[-1])
0x7d: Pop(1)
0x7e: Push("all")
0x7f: @ LockAnimationEnd(Stack[-1], Stack[-7])
0x80: Pop(1)
0x81: @ RemoveEnvelope()
0x82: Pop(0)
0x83: Stack[-5] = 0
0x84: Return(); Pop(20)

0x85: PushEmpty()
0x86: @ RemoveRTEnvelope()
0x87: Pop(0)
0x88: @ SetDeathState()
0x89: Pop(0)
0x8a: @ Stop()
0x8b: Pop(0)
0x8c: @ StopAsync()
0x8d: Pop(0)
0x8e: @ StopSecondaryAnimation()
0x8f: Pop(0)
0x90: PushEmpty(string)
0x91: Stack[-1] = Stack[-2]
0x92: Call2 0x5f7

0x93: Pop(1)
0x94: Push("all")
0x95: @ PlayAnimation(Stack[-1], Stack[-2])
0x96: Pop(1)
0x97: @ WaitForAnimEnd()
0x98: Pop(0)
0x99: Push("all")
0x9a: @ LockAnimationEnd(Stack[-1], Stack[-2])
0x9b: Pop(1)
0x9c: @ RemoveEnvelope()
0x9d: Pop(0)
0x9e: Return(); Pop(0)

0x9f: PushEmpty()
0xa0: Return(); Pop(0)

0xa1: PushEmpty()
0xa2: Return(); Pop(0)

0xa3: PushEmpty()
0xa4: Return(); Pop(0)

0xa5: PushEmpty(bool, bool)
0xa6: Stack[0 + Tasks[-1].StackPointer] = Stack[-3]
0xa7: @ Face(Stack[-3])
0xa8: Pop(0)
0xa9: Push((float)0.5)
0xaa: @ Sleep(Stack[-1], Stack[-2])
0xab: Pop(1)
0xac: PushEmpty(bool)
0xad: Stack[-1] = (bool) 1
0xae: Pop(0); Push((bool) Stack[-2] == 0)
0xaf: IF (Stack[-1] == 0) GOTO 0xb7; Pop(1)

0xb0: PushEmpty(bool, object)
0xb1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb2: Call2 0x535

0xb3: Pop(1)
0xb4: Pop(1); Push((bool) Stack[-1] == 0)
0xb5: IF (Stack[-1] == 0) GOTO 0xb7; Pop(1)

0xb6: Stack[-1] = (bool) 0
0xb7: IF (Stack[-1] == 0) GOTO 0xb9; Pop(1)

0xb8: GOTO 0xba

0xb9: GOTO 0xa9

0xba: @ StopAsync()
0xbb: Pop(0)
0xbc: Return(); Pop(2)

0xbd: @ StopAsync()
0xbe: Pop(0)
0xbf: Push((int) 100)
0xc0: @ KillTimer(Stack[-1])
0xc1: Pop(1)
0xc2: @ StopGroup0()
0xc3: Pop(0)
0xc4: Return(); Pop(0)

0xc5: PushEmpty()
0xc6: PushEmpty()
0xc7: Call2 0xbd

0xc8: Pop(0)
0xc9: PushEmpty(object)
0xca: Stack[-1] = Stack[-2]
0xcb: Call2 0x7d5

0xcc: Pop(1)
0xcd: Return(); Pop(0)

0xce: PushEmpty()
0xcf: Pop(0); Push((bool) Stack[-1] == Stack[0 + Tasks[-1].StackPointer])
0xd0: IF (Stack[-1] == 0) GOTO 0xd6; Pop(1)

0xd1: Push((int) 100)
0xd2: @ KillTimer(Stack[-1])
0xd3: Pop(1)
0xd4: @ Face(Stack[-0])
0xd5: Pop(0)
0xd6: Return(); Pop(0)

0xd7: PushEmpty()
0xd8: Pop(0); Push((bool) Stack[-1] == Stack[0 + Tasks[-1].StackPointer])
0xd9: IF (Stack[-1] == 0) GOTO 0xe2; Pop(1)

0xda: Push((int) 100)
0xdb: Push((float)3.0)
0xdc: @ SetTimer(Stack[-2], Stack[-1])
0xdd: Pop(2)
0xde: PushEmpty(object)
0xdf: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe0: Call2 0x5cb

0xe1: Pop(1)
0xe2: Return(); Pop(0)

0xe3: PushEmpty()
0xe4: PushEmpty(bool, object)
0xe5: Stack[-1] = Stack[-3]
0xe6: Call2 0x535

0xe7: Pop(1)
0xe8: Pop(1); Push((bool) Stack[-1] == 0)
0xe9: IF (Stack[-1] == 0) GOTO 0xef; Pop(1)

0xea: PushEmpty(object)
0xeb: Stack[-1] = Stack[-2]
0xec: Call2 0x881

0xed: Pop(1)
0xee: Return(); Pop(0)

0xef: PushEmpty()
0xf0: Call2 0xbd

0xf1: Pop(0)
0xf2: PushEmpty(object)
0xf3: Stack[-1] = Stack[-2]
0xf4: Call2 0x899

0xf5: Pop(1)
0xf6: Return(); Pop(0)

0xf7: PushEmpty()
0xf8: PushEmpty(bool, object, object, bool)
0xf9: Stack[-3] = Stack[-7]
0xfa: Stack[-2] = Stack[-6]
0xfb: Stack[-1] = Stack[-5]
0xfc: Call2 0x92d

0xfd: Pop(3)
0xfe: IF (Stack[-1] == 0) GOTO 0x103; Pop(1)

0xff: PushEmpty(object)
0x100: Stack[-1] = Stack[-4]
0x101: Call2 0xe3

0x102: Pop(1)
0x103: Return(); Pop(0)

0x104: PushEmpty()
0x105: PushEmpty(bool, object)
0x106: Stack[-1] = Stack[-3]
0x107: Call2 0x911

0x108: Pop(1)
0x109: IF (Stack[-1] == 0) GOTO 0x111; Pop(1)

0x10a: PushEmpty()
0x10b: Call2 0xbd

0x10c: Pop(0)
0x10d: PushEmpty(object)
0x10e: Stack[-1] = Stack[-2]
0x10f: Call2 0x927

0x110: Pop(1)
0x111: Return(); Pop(0)

0x112: PushEmpty()
0x113: Push((int) 100)
0x114: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x115: IF (Stack[-1] == 0) GOTO 0x117; Pop(1)

0x116: Return(); Pop(0)

0x117: Push((int) 100)
0x118: @ KillTimer(Stack[-1])
0x119: Pop(1)
0x11a: @ StopGroup0()
0x11b: Pop(0)
0x11c: Return(); Pop(0)

0x11d: PushEmpty(bool, int, int, bool, int, int)
0x11e: Stack[0 + Tasks[-1].StackPointer] = Stack[-7]
0x11f: PushEmpty(object)
0x120: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x121: Call2 0x716

0x122: Pop(1)
0x123: @ CanSee(Stack[-1], Stack[-0])
0x124: Pop(0)
0x125: Push( Stack[1 + Tasks[-1].StackPointer] )
0x126: IF (Stack[-1] == 0) GOTO 0x134; Pop(1)

0x127: PushEmpty(bool, object)
0x128: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x129: Call2 0x8b9

0x12a: Pop(1)
0x12b: IF (Stack[-1] == 0) GOTO 0x132; Pop(1)

0x12c: PushEmpty(object, bool)
0x12d: Stack[-2] = Stack[0 + Tasks[-1].StackPointer]
0x12e: Stack[-1] = (bool) 1
0x12f: Call2 0x876

0x130: Pop(2)
0x131: Return(); Pop(6)

0x132: @ Face(Stack[-0])
0x133: Pop(0)
0x134: PushEmpty()
0x135: Call2 0x71f

0x136: Pop(0)
0x137: Push("all")
0x138: Push("shoot_begin")
0x139: @ PlayAnimation(Stack[-2], Stack[-1])
0x13a: Pop(2)
0x13b: @ WaitForAnimEnd(Stack[-3])
0x13c: Pop(0)
0x13d: Pop(0); Push((bool) Stack[-3] == 0)
0x13e: IF (Stack[-1] == 0) GOTO 0x142; Pop(1)

0x13f: @ StopAsync()
0x140: Pop(0)
0x141: Return(); Pop(6)

0x142: Push("shot")
0x143: Push(CVector(0.0, 150.0, 0.0))
0x144: Push((int) 800)
0x145: Push((int) 100000)
0x146: @ PlayGlobalSound(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x147: Pop(4)
0x148: Push("all")
0x149: Push("shoot_end")
0x14a: @ PlayAnimation(Stack[-2], Stack[-1])
0x14b: Pop(2)
0x14c: @ WaitForAnimEnd(Stack[-3])
0x14d: Pop(0)
0x14e: Pop(0); Push((bool) Stack[-3] == 0)
0x14f: IF (Stack[-1] == 0) GOTO 0x153; Pop(1)

0x150: @ StopAsync()
0x151: Pop(0)
0x152: Return(); Pop(6)

0x153: Push("all")
0x154: Push("shoot_end")
0x155: @ LockAnimationEnd(Stack[-2], Stack[-1])
0x156: Pop(2)
0x157: Stack[-2] = (int) 0
0x158: Stack[-1] = (int) 0
0x159: Push((int) 20)
0x15a: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x15b: IF (Stack[-1] == 0) GOTO 0x18d; Pop(1)

0x15c: PushEmpty(object)
0x15d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x15e: Call2 0x716

0x15f: Pop(1)
0x160: Push((float)0.5)
0x161: @ Sleep(Stack[-1], Stack[-4])
0x162: Pop(1)
0x163: Pop(0); Push((bool) Stack[-3] == 0)
0x164: IF (Stack[-1] == 0) GOTO 0x166; Pop(1)

0x165: Return(); Pop(6)

0x166: @ CanSee(Stack[-1], Stack[-0])
0x167: Pop(0)
0x168: Push( Stack[1 + Tasks[-1].StackPointer] )
0x169: IF (Stack[-1] == 0) GOTO 0x17c; Pop(1)

0x16a: Stack[-2] = (int) 0
0x16b: PushEmpty(bool, object)
0x16c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x16d: Call2 0x8b9

0x16e: Pop(1)
0x16f: IF (Stack[-1] == 0) GOTO 0x179; Pop(1)

0x170: PushEmpty()
0x171: Call2 0x1b7

0x172: Pop(0)
0x173: PushEmpty(object, bool)
0x174: Stack[-2] = Stack[0 + Tasks[-1].StackPointer]
0x175: Stack[-1] = (bool) 0
0x176: Call2 0x876

0x177: Pop(2)
0x178: Return(); Pop(6)

0x179: @ Face(Stack[-0])
0x17a: Pop(0)
0x17b: GOTO 0x18a

0x17c: @ StopAsync()
0x17d: Pop(0)
0x17e: Push((int) 1)
0x17f: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x180: Push((int) 4)
0x181: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x182: IF (Stack[-1] == 0) GOTO 0x18a; Pop(1)

0x183: Push("all")
0x184: Push("attack_off")
0x185: @ PlayAnimation(Stack[-2], Stack[-1])
0x186: Pop(2)
0x187: @ WaitForAnimEnd()
0x188: Pop(0)
0x189: Return(); Pop(6)

0x18a: Push((int) 1)
0x18b: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x18c: GOTO 0x159

0x18d: PushEmpty()
0x18e: Call2 0x1b7

0x18f: Pop(0)
0x190: PushEmpty(object, bool)
0x191: Stack[-2] = Stack[-9]
0x192: Stack[-1] = (bool) 0
0x193: Call2 0x876

0x194: Pop(2)
0x195: Return(); Pop(6)

0x196: PushEmpty()
0x197: PushEmpty(bool, object)
0x198: Stack[-1] = Stack[-3]
0x199: Call2 0x535

0x19a: Pop(1)
0x19b: Pop(1); Push((bool) Stack[-1] == 0)
0x19c: IF (Stack[-1] == 0) GOTO 0x1a2; Pop(1)

0x19d: PushEmpty(object)
0x19e: Stack[-1] = Stack[-2]
0x19f: Call2 0x881

0x1a0: Pop(1)
0x1a1: Return(); Pop(0)

0x1a2: PushEmpty()
0x1a3: Call2 0x1b7

0x1a4: Pop(0)
0x1a5: PushEmpty(object)
0x1a6: Stack[-1] = Stack[-2]
0x1a7: Call2 0x899

0x1a8: Pop(1)
0x1a9: Return(); Pop(0)

0x1aa: PushEmpty()
0x1ab: PushEmpty(bool, object, object, bool)
0x1ac: Stack[-3] = Stack[-7]
0x1ad: Stack[-2] = Stack[-6]
0x1ae: Stack[-1] = Stack[-5]
0x1af: Call2 0x92d

0x1b0: Pop(3)
0x1b1: IF (Stack[-1] == 0) GOTO 0x1b6; Pop(1)

0x1b2: PushEmpty(object)
0x1b3: Stack[-1] = Stack[-4]
0x1b4: Call2 0x196

0x1b5: Pop(1)
0x1b6: Return(); Pop(0)

0x1b7: @ StopAsync()
0x1b8: Pop(0)
0x1b9: @ StopGroup0()
0x1ba: Pop(0)
0x1bb: @ Stop()
0x1bc: Pop(0)
0x1bd: Return(); Pop(0)

0x1be: PushEmpty()
0x1bf: PushEmpty()
0x1c0: Call2 0x1b7

0x1c1: Pop(0)
0x1c2: PushEmpty(object)
0x1c3: Stack[-1] = Stack[-2]
0x1c4: Call2 0x7d5

0x1c5: Pop(1)
0x1c6: Return(); Pop(0)

0x1c7: PushEmpty(bool, bool, bool, bool)
0x1c8: Stack[0 + Tasks[-1].StackPointer] = Stack[-6]
0x1c9: PushEmpty(object)
0x1ca: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1cb: Call2 0x716

0x1cc: Pop(1)
0x1cd: PushEmpty()
0x1ce: Call2 0x71f

0x1cf: Pop(0)
0x1d0: @ Face(Stack[-0])
0x1d1: Pop(0)
0x1d2: Push(Stack[-5])
0x1d3: IF (Stack[-1] == 0) GOTO 0x1da; Pop(1)

0x1d4: Push("all")
0x1d5: Push("attack_on")
0x1d6: @ PlayAnimation(Stack[-2], Stack[-1])
0x1d7: Pop(2)
0x1d8: @ WaitForAnimEnd()
0x1d9: Pop(0)
0x1da: Push("all")
0x1db: Push("attack_on")
0x1dc: @ LockAnimationEnd(Stack[-2], Stack[-1])
0x1dd: Pop(2)
0x1de: Push((bool) 1)
0x1df: @ SetAttackState(Stack[-1])
0x1e0: Pop(1)
0x1e1: PushEmpty(bool, object)
0x1e2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1e3: Call2 0x535

0x1e4: Pop(1)
0x1e5: IF (Stack[-1] == 0) GOTO 0x24b; Pop(1)

0x1e6: @ CanSee(Stack[-1], Stack[-0])
0x1e7: Pop(0)
0x1e8: Push(Stack[-1])
0x1e9: IF (Stack[-1] == 0) GOTO 0x1f2; Pop(1)

0x1ea: PushEmpty(object)
0x1eb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1ec: Call2 0x716

0x1ed: Pop(1)
0x1ee: PushEmpty()
0x1ef: Call2 0x27b

0x1f0: Pop(0)
0x1f1: GOTO 0x241

0x1f2: PushEmpty(object)
0x1f3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1f4: Call2 0x5cb

0x1f5: Pop(1)
0x1f6: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x1f7: Push("all")
0x1f8: Push("hunt")
0x1f9: @ PlayAnimation(Stack[-2], Stack[-1])
0x1fa: Pop(2)
0x1fb: @ WaitForAnimEnd(Stack[-2])
0x1fc: Pop(0)
0x1fd: Pop(0); Push((bool) Stack[-2] == 0)
0x1fe: IF (Stack[-1] == 0) GOTO 0x209; Pop(1)

0x1ff: Pop(0); Push(( Stack[1 + Tasks[-1].StackPointer] != 0 )
0x200: IF (Stack[-1] == 0) GOTO 0x204; Pop(1)

0x201: PushEmpty()
0x202: Call2 0x276

0x203: Pop(0)
0x204: Push("all")
0x205: Push("attack_on")
0x206: @ LockAnimationEnd(Stack[-2], Stack[-1])
0x207: Pop(2)
0x208: GOTO 0x1e1

0x209: PushEmpty(bool, object)
0x20a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x20b: Call2 0x535

0x20c: Pop(1)
0x20d: Pop(1); Push((bool) Stack[-1] == 0)
0x20e: IF (Stack[-1] == 0) GOTO 0x210; Pop(1)

0x20f: GOTO 0x24b

0x210: @ CanSee(Stack[-1], Stack[-0])
0x211: Pop(0)
0x212: Push(Stack[-1])
0x213: IF (Stack[-1] == 0) GOTO 0x21b; Pop(1)

0x214: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x215: @ Face(Stack[-0])
0x216: Pop(0)
0x217: PushEmpty()
0x218: Call2 0x27b

0x219: Pop(0)
0x21a: GOTO 0x241

0x21b: Push("all")
0x21c: Push("attack_on")
0x21d: @ LockAnimationEnd(Stack[-2], Stack[-1])
0x21e: Pop(2)
0x21f: Push((int) 3)
0x220: @ Sleep(Stack[-1], Stack[-3])
0x221: Pop(1)
0x222: Pop(0); Push((bool) Stack[-2] == 0)
0x223: IF (Stack[-1] == 0) GOTO 0x22e; Pop(1)

0x224: Pop(0); Push(( Stack[1 + Tasks[-1].StackPointer] != 0 )
0x225: IF (Stack[-1] == 0) GOTO 0x229; Pop(1)

0x226: PushEmpty()
0x227: Call2 0x276

0x228: Pop(0)
0x229: Push("all")
0x22a: Push("attack_on")
0x22b: @ LockAnimationEnd(Stack[-2], Stack[-1])
0x22c: Pop(2)
0x22d: GOTO 0x1e1

0x22e: PushEmpty(bool, object)
0x22f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x230: Call2 0x535

0x231: Pop(1)
0x232: Pop(1); Push((bool) Stack[-1] == 0)
0x233: IF (Stack[-1] == 0) GOTO 0x235; Pop(1)

0x234: GOTO 0x24b

0x235: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x236: @ CanSee(Stack[-1], Stack[-0])
0x237: Pop(0)
0x238: Push(Stack[-1])
0x239: IF (Stack[-1] == 0) GOTO 0x240; Pop(1)

0x23a: @ Face(Stack[-0])
0x23b: Pop(0)
0x23c: PushEmpty()
0x23d: Call2 0x27b

0x23e: Pop(0)
0x23f: GOTO 0x241

0x240: GOTO 0x24b

0x241: Pop(0); Push(( Stack[1 + Tasks[-1].StackPointer] != 0 )
0x242: IF (Stack[-1] == 0) GOTO 0x247; Pop(1)

0x243: PushEmpty()
0x244: Call2 0x276

0x245: Pop(0)
0x246: GOTO 0x24a

0x247: Push((int) 2)
0x248: @ Sleep(Stack[-1])
0x249: Pop(1)
0x24a: GOTO 0x1e1

0x24b: Push((bool) 0)
0x24c: @ SetAttackState(Stack[-1])
0x24d: Pop(1)
0x24e: @ StopAsync()
0x24f: Pop(0)
0x250: Push("all")
0x251: Push("attack_off")
0x252: @ PlayAnimation(Stack[-2], Stack[-1])
0x253: Pop(2)
0x254: @ WaitForAnimEnd()
0x255: Pop(0)
0x256: Return(); Pop(4)

0x257: PushEmpty()
0x258: PushEmpty(bool)
0x259: Stack[-1] = (bool) 0
0x25a: Push( Stack[2 + Tasks[-1].StackPointer] )
0x25b: IF (Stack[-1] == 0) GOTO 0x25f; Pop(1)

0x25c: Pop(0); Push((bool) Stack[-2] == Stack[0 + Tasks[-1].StackPointer])
0x25d: IF (Stack[-1] == 0) GOTO 0x25f; Pop(1)

0x25e: Stack[-1] = (bool) 1
0x25f: IF (Stack[-1] == 0) GOTO 0x264; Pop(1)

0x260: PushEmpty(object)
0x261: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x262: Call2 0x5cb

0x263: Pop(1)
0x264: Return(); Pop(0)

0x265: PushEmpty()
0x266: PushEmpty(bool)
0x267: Stack[-1] = (bool) 0
0x268: Push( Stack[2 + Tasks[-1].StackPointer] )
0x269: IF (Stack[-1] == 0) GOTO 0x26d; Pop(1)

0x26a: Pop(0); Push((bool) Stack[-2] == Stack[0 + Tasks[-1].StackPointer])
0x26b: IF (Stack[-1] == 0) GOTO 0x26d; Pop(1)

0x26c: Stack[-1] = (bool) 1
0x26d: IF (Stack[-1] == 0) GOTO 0x275; Pop(1)

0x26e: Push("@Stop hunt")
0x26f: @ Trace(Stack[-1])
0x270: Pop(1)
0x271: @ StopAnimation()
0x272: Pop(0)
0x273: @ StopGroup0()
0x274: Pop(0)
0x275: Return(); Pop(0)

0x276: Stack[0 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer]
0x277: Stack[1 + Tasks[-1].StackPointer] = 0
0x278: @ Face(Stack[-0])
0x279: Pop(0)
0x27a: Return(); Pop(0)

0x27b: PushEmpty(cvector, cvector, bool, cvector, cvector, object, object, cvector, object, int, cvector, float, object, object, cvector, cvector, bool, cvector, cvector, object, object, cvector, object, int, cvector, float, object, object)
0x27c: PushEmpty(object)
0x27d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x27e: Call2 0x716

0x27f: Pop(1)
0x280: @ ReportAttack(Stack[-0])
0x281: Pop(0)
0x282: PushEmpty(bool, object)
0x283: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x284: Call2 0x49c

0x285: Pop(1)
0x286: IF (Stack[-1] == 0) GOTO 0x28c; Pop(1)

0x287: PushEmpty(object)
0x288: Call2 0x677

0x289: Pop(0)
0x28a: @ SendPlayerEnemy(Stack[-0], Stack[-1])
0x28b: Pop(1)
0x28c: @ GetDirection(Stack[-14])
0x28d: Pop(0)
0x28e: PushEmpty(cvector, object)
0x28f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x290: Call2 0x486

0x291: Stack[-15] = Stack[-2]
0x292: Pop(2)
0x293: PushEmpty(float, cvector, cvector)
0x294: Stack[-2] = Stack[-17]
0x295: Stack[-1] = Stack[-16]
0x296: Call2 0x6bb

0x297: Pop(2)
0x298: Push((float)0.99939)
0x299: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x29a: IF (Stack[-1] == 0) GOTO 0x29c; Pop(1)

0x29b: Return(); Pop(28)

0x29c: PushEmpty()
0x29d: Call2 0x71f

0x29e: Pop(0)
0x29f: Push("all")
0x2a0: Push("attack_begin1")
0x2a1: @ PlayAnimation(Stack[-2], Stack[-1])
0x2a2: Pop(2)
0x2a3: Push("attack")
0x2a4: @ GetGeometryLocator(Stack[-1], Stack[-13], Stack[-12], Stack[-11])
0x2a5: Pop(1)
0x2a6: Push(Stack[-12])
0x2a7: IF (Stack[-1] == 0) GOTO 0x2b1; Pop(1)

0x2a8: @ GetScene(Stack[-8])
0x2a9: Pop(0)
0x2aa: Push("light-dynamic")
0x2ab: Push("soldier_fire.xml")
0x2ac: @ AddActorByType(Stack[-11], Stack[-2], Stack[-10], Stack[-13], Stack[-12], Stack[-1])
0x2ad: Pop(2)
0x2ae: Stack[-8] = 0
0x2af: Stack[-9] = 0
0x2b0: GOTO 0x2b3

0x2b1: @ WaitForAnimEnd()
0x2b2: Pop(0)
0x2b3: Push("shot")
0x2b4: Push(CVector(0.0, 150.0, 0.0))
0x2b5: Push((int) 800)
0x2b6: Push((int) 100000)
0x2b7: @ PlayGlobalSound(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x2b8: Pop(4)
0x2b9: @ GetDirection(Stack[-14])
0x2ba: Pop(0)
0x2bb: PushEmpty(cvector, object)
0x2bc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2bd: Call2 0x486

0x2be: Stack[-15] = Stack[-2]
0x2bf: Pop(2)
0x2c0: Push(CvectorIndex(Stack[-13], 1))
0x2c1: PushEmpty(float, object)
0x2c2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2c3: Call2 0x5d6

0x2c4: Pop(1)
0x2c5: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x2c6: CvectorIndex(Stack[-14], 1) = Stack[-1];
0x2c7: Push((float)0.03491)
0x2c8: @ RandVecCone3D(Stack[-8], Stack[-14], Stack[-1])
0x2c9: Pop(1)
0x2ca: @ GetVictimMaterial(Stack[-7], Stack[-6], Stack[-5], Stack[-4])
0x2cb: Pop(0)
0x2cc: Pop(0); Push(( Stack[-6] != 0 )
0x2cd: IF (Stack[-1] == 0) GOTO 0x2eb; Pop(1)

0x2ce: Pop(0); Push((bool) Stack[-6] == Stack[0 + Tasks[-1].StackPointer])
0x2cf: IF (Stack[-1] == 0) GOTO 0x2dc; Pop(1)

0x2d0: PushEmpty(float, object, float, int)
0x2d1: Stack[-3] = Stack[0 + Tasks[-1].StackPointer]
0x2d2: Stack[-2] = (float) 1.5
0x2d3: Stack[-1] = (int) 1
0x2d4: Call2 0x4c3

0x2d5: Stack[-7] = Stack[-4]
0x2d6: Pop(4)
0x2d7: Push((int) 2)
0x2d8: Push((float)1.5)
0x2d9: @ ReportHit(Stack[-0], Stack[-2], Stack[-5], Stack[-1])
0x2da: Pop(2)
0x2db: GOTO 0x2eb

0x2dc: Push((int) -1)
0x2dd: Pop(1); Push((bool) Stack[-6] != Stack[-1])
0x2de: IF (Stack[-1] == 0) GOTO 0x2eb; Pop(1)

0x2df: @ GetScene(Stack[-2])
0x2e0: Pop(0)
0x2e1: Push("scripted")
0x2e2: Push(CVector(0.0, 0.0, 1.0))
0x2e3: Push("richochet.xml")
0x2e4: @ AddActorByType(Stack[-4], Stack[-3], Stack[-5], Stack[-7], Stack[-2], Stack[-1])
0x2e5: Pop(3)
0x2e6: Push("Material")
0x2e7: @@ SetScriptProperty(Stack[-1], Stack[-6])
0x2e8: Pop(1)
0x2e9: Stack[-1] = 0
0x2ea: Stack[-2] = 0
0x2eb: Push("all")
0x2ec: Push("attack_end1")
0x2ed: @ PlayAnimation(Stack[-2], Stack[-1])
0x2ee: Pop(2)
0x2ef: @ WaitForAnimEnd()
0x2f0: Pop(0)
0x2f1: Push("all")
0x2f2: Push("attack_on")
0x2f3: @ LockAnimationEnd(Stack[-2], Stack[-1])
0x2f4: Pop(2)
0x2f5: Return(); Pop(28)

0x2f6: Stack[-6] = 0
0x2f7: PushEmpty()
0x2f8: PushEmpty(bool, object)
0x2f9: Stack[-1] = Stack[-3]
0x2fa: Call2 0x535

0x2fb: Pop(1)
0x2fc: Pop(1); Push((bool) Stack[-1] == 0)
0x2fd: IF (Stack[-1] == 0) GOTO 0x2ff; Pop(1)

0x2fe: Return(); Pop(0)

0x2ff: PushEmpty(object)
0x300: Stack[-1] = Stack[-2]
0x301: Call2 0x881

0x302: Pop(1)
0x303: Pop(0); Push((bool) Stack[-1] == Stack[0 + Tasks[-1].StackPointer])
0x304: IF (Stack[-1] == 0) GOTO 0x307; Pop(1)

0x305: Stack[1 + Tasks[-1].StackPointer] = 0
0x306: GOTO 0x30e

0x307: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x308: Push( Stack[2 + Tasks[-1].StackPointer] )
0x309: IF (Stack[-1] == 0) GOTO 0x30e; Pop(1)

0x30a: @ StopAnimation()
0x30b: Pop(0)
0x30c: @ StopGroup0()
0x30d: Pop(0)
0x30e: Return(); Pop(0)

0x30f: PushEmpty()
0x310: PushEmpty(bool, object, object, bool)
0x311: Stack[-3] = Stack[-7]
0x312: Stack[-2] = Stack[-6]
0x313: Stack[-1] = Stack[-5]
0x314: Call2 0x92d

0x315: Pop(3)
0x316: IF (Stack[-1] == 0) GOTO 0x31b; Pop(1)

0x317: PushEmpty(object)
0x318: Stack[-1] = Stack[-4]
0x319: Call2 0x2f7

0x31a: Pop(1)
0x31b: Return(); Pop(0)

0x31c: PushEmpty()
0x31d: Push("attack")
0x31e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x31f: IF (Stack[-1] == 0) GOTO 0x32a; Pop(1)

0x320: PushEmpty(object)
0x321: PushEmpty(object)
0x322: Call2 0x495

0x323: Stack[-2] = Stack[-1]
0x324: Pop(1)
0x325: Push(-1, 2); TaskCall(5)
0x326: Call2 0x371

0x327: Pop(-1, 2); TaskReturn
0x328: Pop(1)
0x329: GOTO 0x337

0x32a: Push("execute")
0x32b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x32c: IF (Stack[-1] == 0) GOTO 0x333; Pop(1)

0x32d: PushEmpty()
0x32e: Push(-0, 1); TaskCall(6)
0x32f: Call2 0x42e

0x330: Pop(-0, 1); TaskReturn
0x331: Pop(0)
0x332: GOTO 0x337

0x333: PushEmpty(string)
0x334: Stack[-1] = Stack[-2]
0x335: Call2 0x343

0x336: Pop(1)
0x337: Return(); Pop(0)

0x338: PushEmpty()
0x339: PushEmpty(bool, string, string)
0x33a: Stack[-2] = "quest_d11_02"
0x33b: Stack[-1] = "soldier_attack"
0x33c: Call2 0x70a

0x33d: Pop(3)
0x33e: Return(); Pop(0)

0x33f: @ Hold()
0x340: Pop(0)
0x341: GOTO 0x33f

0x342: Return(); Pop(0)

0x343: PushEmpty(bool, bool)
0x344: Push("cleanup")
0x345: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x346: IF (Stack[-1] == 0) GOTO 0x35a; Pop(1)

0x347: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x348: @ IsLoaded(Stack[-1])
0x349: Pop(0)
0x34a: PushEmpty(bool)
0x34b: Stack[-1] = (bool) 0
0x34c: Pop(0); Push((bool) Stack[-2] == 0)
0x34d: IF (Stack[-1] == 0) GOTO 0x353; Pop(1)

0x34e: PushEmpty(bool)
0x34f: Call2 0x36f

0x350: Pop(0)
0x351: IF (Stack[-1] == 0) GOTO 0x353; Pop(1)

0x352: Stack[-1] = (bool) 1
0x353: IF (Stack[-1] == 0) GOTO 0x359; Pop(1)

0x354: PushEmpty(object)
0x355: Call2 0x677

0x356: Pop(0)
0x357: @ RemoveActor(Stack[-1])
0x358: Pop(1)
0x359: GOTO 0x35e

0x35a: Push("restore")
0x35b: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x35c: IF (Stack[-1] == 0) GOTO 0x35e; Pop(1)

0x35d: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x35e: Return(); Pop(2)

0x35f: PushEmpty(bool)
0x360: Stack[-1] = (bool) 0
0x361: Push( Stack[0 + Tasks[-1].StackPointer] )
0x362: IF (Stack[-1] == 0) GOTO 0x368; Pop(1)

0x363: PushEmpty(bool)
0x364: Call2 0x36f

0x365: Pop(0)
0x366: IF (Stack[-1] == 0) GOTO 0x368; Pop(1)

0x367: Stack[-1] = (bool) 1
0x368: IF (Stack[-1] == 0) GOTO 0x36e; Pop(1)

0x369: PushEmpty(object)
0x36a: Call2 0x677

0x36b: Pop(0)
0x36c: @ RemoveActor(Stack[-1])
0x36d: Pop(1)
0x36e: Return(); Pop(0)

0x36f: Stack[-1] = (bool) 1
0x370: Return(); Pop(0)

0x371: PushEmpty()
0x372: PushEmpty()
0x373: Call2 0x86f

0x374: Pop(0)
0x375: PushEmpty(object)
0x376: Stack[-1] = Stack[-2]
0x377: Call2 0x3a5

0x378: Pop(1)
0x379: PushEmpty()
0x37a: Call2 0x37e

0x37b: Pop(0)
0x37c: GOTO 0x379

0x37d: Return(); Pop(0)

0x37e: PushEmpty()
0x37f: Call2 0x86f

0x380: Pop(0)
0x381: PushEmpty()
0x382: Call2 0x3d4

0x383: Pop(0)
0x384: GOTO 0x381

0x385: Return(); Pop(0)

0x386: Return(); Pop(0)

0x387: PushEmpty(bool, bool)
0x388: PushEmpty(bool, object)
0x389: Stack[-1] = Stack[-5]
0x38a: Call2 0x535

0x38b: Pop(1)
0x38c: Pop(1); Push((bool) Stack[-1] == 0)
0x38d: IF (Stack[-1] == 0) GOTO 0x38f; Pop(1)

0x38e: Return(); Pop(2)

0x38f: PushEmpty(bool, object)
0x390: Stack[-1] = Stack[-5]
0x391: Call2 0x8c1

0x392: Pop(1)
0x393: Pop(1); Push((bool) Stack[-1] == 0)
0x394: IF (Stack[-1] == 0) GOTO 0x39b; Pop(1)

0x395: Push(GlobalVars[0])
0x396: @@ in(Stack[-2], Stack[-4])
0x397: Pop(1)
0x398: Pop(0); Push((bool) Stack[-1] == 0)
0x399: IF (Stack[-1] == 0) GOTO 0x39b; Pop(1)

0x39a: Return(); Pop(2)

0x39b: PushEmpty()
0x39c: Call2 0x428

0x39d: Pop(0)
0x39e: PushEmpty(object)
0x39f: Stack[-1] = Stack[-4]
0x3a0: Push(-1, 1); TaskCall(1)
0x3a1: Call2 0xa5

0x3a2: Pop(-1, 1); TaskReturn
0x3a3: Pop(1)
0x3a4: Return(); Pop(2)

0x3a5: PushEmpty()
0x3a6: PushEmpty(bool, object)
0x3a7: Stack[-1] = Stack[-3]
0x3a8: Call2 0x535

0x3a9: Pop(1)
0x3aa: Pop(1); Push((bool) Stack[-1] == 0)
0x3ab: IF (Stack[-1] == 0) GOTO 0x3b1; Pop(1)

0x3ac: PushEmpty(object)
0x3ad: Stack[-1] = Stack[-2]
0x3ae: Call2 0x881

0x3af: Pop(1)
0x3b0: Return(); Pop(0)

0x3b1: PushEmpty()
0x3b2: Call2 0x428

0x3b3: Pop(0)
0x3b4: PushEmpty(object)
0x3b5: Stack[-1] = Stack[-2]
0x3b6: Call2 0x899

0x3b7: Pop(1)
0x3b8: Return(); Pop(0)

0x3b9: PushEmpty()
0x3ba: PushEmpty(bool, object, object, bool)
0x3bb: Stack[-3] = Stack[-7]
0x3bc: Stack[-2] = Stack[-6]
0x3bd: Stack[-1] = Stack[-5]
0x3be: Call2 0x92d

0x3bf: Pop(3)
0x3c0: IF (Stack[-1] == 0) GOTO 0x3c5; Pop(1)

0x3c1: PushEmpty(object)
0x3c2: Stack[-1] = Stack[-4]
0x3c3: Call2 0x3a5

0x3c4: Pop(1)
0x3c5: Return(); Pop(0)

0x3c6: PushEmpty()
0x3c7: PushEmpty(bool, object)
0x3c8: Stack[-1] = Stack[-3]
0x3c9: Call2 0x911

0x3ca: Pop(1)
0x3cb: IF (Stack[-1] == 0) GOTO 0x3d3; Pop(1)

0x3cc: PushEmpty()
0x3cd: Call2 0x428

0x3ce: Pop(0)
0x3cf: PushEmpty(object)
0x3d0: Stack[-1] = Stack[-2]
0x3d1: Call2 0x954

0x3d2: Pop(1)
0x3d3: Return(); Pop(0)

0x3d4: PushEmpty(int, bool, cvector, object, int, bool, cvector, object)
0x3d5: @ GetPFPosition(Stack[-1])
0x3d6: Pop(0)
0x3d7: @ GetDirection(Stack[-0])
0x3d8: Pop(0)
0x3d9: PushEmpty()
0x3da: Call2 0x42d

0x3db: Pop(0)
0x3dc: Push((int) 10)
0x3dd: @ irand(Stack[-5], Stack[-1])
0x3de: Pop(1)
0x3df: Push((int) 5)
0x3e0: Pop(1); Push(Stack[-5] + Stack[-1]);
0x3e1: @ Sleep(Stack[-1], Stack[-4])
0x3e2: Pop(1)
0x3e3: Push(Stack[-3])
0x3e4: IF (Stack[-1] == 0) GOTO 0x3e9; Pop(1)

0x3e5: PushEmpty()
0x3e6: Call2 0x386

0x3e7: Pop(0)
0x3e8: GOTO 0x426

0x3e9: PushEmpty()
0x3ea: Call2 0x42d

0x3eb: Pop(0)
0x3ec: @ GetPFPosition(Stack[-2])
0x3ed: Pop(0)
0x3ee: PushEmpty(float, cvector, cvector)
0x3ef: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x3f0: Stack[-1] = Stack[-5]
0x3f1: Call2 0x687

0x3f2: Pop(2)
0x3f3: Push((int) 40000)
0x3f4: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x3f5: IF (Stack[-1] == 0) GOTO 0x418; Pop(1)

0x3f6: @ FindPathTo(Stack[-1], Stack[-1])
0x3f7: Pop(0)
0x3f8: Pop(0); Push(( Stack[-1] != 0 )
0x3f9: IF (Stack[-1] == 0) GOTO 0x413; Pop(1)

0x3fa: @ RotatePath(Stack[-1], Stack[-3])
0x3fb: Pop(0)
0x3fc: Pop(0); Push((bool) Stack[-3] == 0)
0x3fd: IF (Stack[-1] == 0) GOTO 0x3ff; Pop(1)

0x3fe: GOTO 0x425

0x3ff: Push((bool) 0)
0x400: @ FollowPath(Stack[-2], Stack[-1], Stack[-4])
0x401: Pop(1)
0x402: Pop(0); Push((bool) Stack[-3] == 0)
0x403: IF (Stack[-1] == 0) GOTO 0x405; Pop(1)

0x404: GOTO 0x425

0x405: Push(CvectorIndex(Stack[-0], 0))
0x406: Push(CvectorIndex(Stack[-0], 2))
0x407: @ Rotate(Stack[-2], Stack[-1], Stack[-5])
0x408: Pop(2)
0x409: Pop(0); Push((bool) Stack[-3] == 0)
0x40a: IF (Stack[-1] == 0) GOTO 0x40c; Pop(1)

0x40b: GOTO 0x425

0x40c: @ WaitForAnimEnd(Stack[-3])
0x40d: Pop(0)
0x40e: Pop(0); Push((bool) Stack[-3] == 0)
0x40f: IF (Stack[-1] == 0) GOTO 0x411; Pop(1)

0x410: GOTO 0x425

0x411: GOTO 0x426

0x412: GOTO 0x416

0x413: Push((int) 1)
0x414: @ Sleep(Stack[-1])
0x415: Pop(1)
0x416: Stack[-1] = 0
0x417: GOTO 0x425

0x418: Push(CvectorIndex(Stack[-0], 0))
0x419: Push(CvectorIndex(Stack[-0], 2))
0x41a: @ Rotate(Stack[-2], Stack[-1], Stack[-5])
0x41b: Pop(2)
0x41c: Pop(0); Push((bool) Stack[-3] == 0)
0x41d: IF (Stack[-1] == 0) GOTO 0x41f; Pop(1)

0x41e: GOTO 0x425

0x41f: @ WaitForAnimEnd(Stack[-3])
0x420: Pop(0)
0x421: Pop(0); Push((bool) Stack[-3] == 0)
0x422: IF (Stack[-1] == 0) GOTO 0x424; Pop(1)

0x423: GOTO 0x425

0x424: GOTO 0x426

0x425: GOTO 0x3e9

0x426: GOTO 0x3d9

0x427: Return(); Pop(8)

0x428: @ StopGroup0()
0x429: Pop(0)
0x42a: @ Stop()
0x42b: Pop(0)
0x42c: Return(); Pop(0)

0x42d: Return(); Pop(0)

0x42e: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x42f: Push("all")
0x430: Push("attack_on")
0x431: @ PlayAnimation(Stack[-2], Stack[-1])
0x432: Pop(2)
0x433: @ WaitForAnimEnd()
0x434: Pop(0)
0x435: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x436: IF (Stack[-1] == 0) GOTO 0x45d; Pop(1)

0x437: Push("all")
0x438: Push("attack_on")
0x439: @ LockAnimationEnd(Stack[-2], Stack[-1])
0x43a: Pop(2)
0x43b: Push((int) 20)
0x43c: @ Sleep(Stack[-1])
0x43d: Pop(1)
0x43e: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x43f: IF (Stack[-1] == 0) GOTO 0x45d; Pop(1)

0x440: Push("all")
0x441: Push("attack_begin1")
0x442: @ PlayAnimation(Stack[-2], Stack[-1])
0x443: Pop(2)
0x444: @ WaitForAnimEnd()
0x445: Pop(0)
0x446: PushEmpty(bool, string, string)
0x447: Stack[-2] = "quest_d11_02"
0x448: Stack[-1] = "execute"
0x449: Call2 0x70a

0x44a: Pop(3)
0x44b: Push("shot")
0x44c: Push(CVector(0.0, 150.0, 0.0))
0x44d: Push((int) 800)
0x44e: Push((int) 100000)
0x44f: @ PlayGlobalSound(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x450: Pop(4)
0x451: Push("all")
0x452: Push("attack_end1")
0x453: @ PlayAnimation(Stack[-2], Stack[-1])
0x454: Pop(2)
0x455: @ WaitForAnimEnd()
0x456: Pop(0)
0x457: Push("all")
0x458: Push("attack_off")
0x459: @ PlayAnimation(Stack[-2], Stack[-1])
0x45a: Pop(2)
0x45b: @ WaitForAnimEnd()
0x45c: Pop(0)
0x45d: Push( Stack[0 + Tasks[-1].StackPointer] )
0x45e: IF (Stack[-1] == 0) GOTO 0x468; Pop(1)

0x45f: PushEmpty(object)
0x460: PushEmpty(object)
0x461: Call2 0x495

0x462: Stack[-2] = Stack[-1]
0x463: Pop(1)
0x464: Push(-1, 2); TaskCall(5)
0x465: Call2 0x371

0x466: Pop(-1, 2); TaskReturn
0x467: Pop(1)
0x468: Return(); Pop(0)

0x469: PushEmpty()
0x46a: PushEmpty(bool, string, string)
0x46b: Stack[-2] = "quest_d11_02"
0x46c: Stack[-1] = "soldier_attack"
0x46d: Call2 0x70a

0x46e: Pop(3)
0x46f: Return(); Pop(0)

0x470: PushEmpty()
0x471: Push("attack")
0x472: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x473: IF (Stack[-1] == 0) GOTO 0x477; Pop(1)

0x474: @ StopGroup0()
0x475: Pop(0)
0x476: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x477: Return(); Pop(0)

0x478: PushEmpty()
0x479: Push((int) 2)
0x47a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x47b: IF (Stack[-1] == 0) GOTO 0x47f; Pop(1)

0x47c: Stack[-2] = "fire"
0x47d: Return(); Pop(0)

0x47e: GOTO 0x484

0x47f: Push((int) 1)
0x480: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x481: IF (Stack[-1] == 0) GOTO 0x484; Pop(1)

0x482: Stack[-2] = "bullet"
0x483: Return(); Pop(0)

0x484: Stack[-2] = "phys"
0x485: Return(); Pop(0)

0x486: PushEmpty(cvector, cvector, cvector, cvector)
0x487: @ GetPosition(Stack[-2])
0x488: Pop(0)
0x489: @@ GetPosition(Stack[-1])
0x48a: Pop(0)
0x48b: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x48c: Return(); Pop(4)

0x48d: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x48e: @ GetPosition(Stack[-3])
0x48f: Pop(0)
0x490: @@ GetPosition(Stack[-2])
0x491: Pop(0)
0x492: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x493: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x494: Return(); Pop(6)

0x495: PushEmpty(object, object)
0x496: Push("player")
0x497: @ FindActor(Stack[-2], Stack[-1])
0x498: Pop(1)
0x499: Stack[-3] = Stack[-1]
0x49a: Return(); Pop(2)

0x49b: Stack[-1] = 0
0x49c: PushEmpty(bool, bool)
0x49d: @ IsPlayerActor(Stack[-3], Stack[-1])
0x49e: Pop(0)
0x49f: Stack[-4] = Stack[-1]
0x4a0: Return(); Pop(2)

0x4a1: PushEmpty(bool, bool)
0x4a2: Push("HasProperty")
0x4a3: Push((int) 2)
0x4a4: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x4a5: Pop(1); Push((bool) Stack[-1] == 0)
0x4a6: IF (Stack[-1] == 0) GOTO 0x4a9; Pop(1)

0x4a7: Stack[-5] = (bool) 0
0x4a8: Return(); Pop(2)

0x4a9: @@ HasProperty(Stack[-3], Stack[-1])
0x4aa: Pop(0)
0x4ab: Stack[-5] = Stack[-1]
0x4ac: Return(); Pop(2)

0x4ad: PushEmpty(float, float)
0x4ae: PushEmpty(bool, object, string)
0x4af: Stack[-2] = Stack[-10]
0x4b0: Stack[-1] = Stack[-9]
0x4b1: Call2 0x4a1

0x4b2: Pop(2)
0x4b3: Pop(1); Push((bool) Stack[-1] == 0)
0x4b4: IF (Stack[-1] == 0) GOTO 0x4b7; Pop(1)

0x4b5: Stack[-8] = (bool) 0
0x4b6: Return(); Pop(2)

0x4b7: @@ GetProperty(Stack[-6], Stack[-1])
0x4b8: Pop(0)
0x4b9: PushEmpty(float, float, float, float)
0x4ba: Stack[-3] = Stack[-5] + Stack[-9]; Pop(0);
0x4bb: Stack[-2] = Stack[-8]
0x4bc: Stack[-1] = Stack[-7]
0x4bd: Call2 0x692

0x4be: Pop(3)
0x4bf: @@ SetProperty(Stack[-7], Stack[-1])
0x4c0: Pop(1)
0x4c1: Stack[-8] = (bool) 1
0x4c2: Return(); Pop(2)

0x4c3: PushEmpty(int, string, int, float, float, float, int, string, int, float, float, float)
0x4c4: PushEmpty(bool, object, string)
0x4c5: Stack[-2] = Stack[-18]
0x4c6: Stack[-1] = "health"
0x4c7: Call2 0x4a1

0x4c8: Pop(2)
0x4c9: Pop(1); Push((bool) Stack[-1] == 0)
0x4ca: IF (Stack[-1] == 0) GOTO 0x4cd; Pop(1)

0x4cb: Stack[-16] = (float) 0.0
0x4cc: Return(); Pop(12)

0x4cd: PushEmpty(bool, object, string)
0x4ce: Stack[-2] = Stack[-18]
0x4cf: Stack[-1] = "armor"
0x4d0: Call2 0x4a1

0x4d1: Pop(2)
0x4d2: Pop(1); Push((bool) Stack[-1] == 0)
0x4d3: IF (Stack[-1] == 0) GOTO 0x4d6; Pop(1)

0x4d4: Stack[-6] = (int) 0
0x4d5: GOTO 0x4d9

0x4d6: Push("armor")
0x4d7: @@ GetProperty(Stack[-1], Stack[-7])
0x4d8: Pop(1)
0x4d9: Push("armor_")
0x4da: PushEmpty(string, int)
0x4db: Stack[-1] = Stack[-16]
0x4dc: Call2 0x478

0x4dd: Pop(1)
0x4de: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x4df: PushEmpty(bool, object, string)
0x4e0: Stack[-2] = Stack[-18]
0x4e1: Stack[-1] = Stack[-8]
0x4e2: Call2 0x4a1

0x4e3: Pop(2)
0x4e4: Pop(1); Push((bool) Stack[-1] == 0)
0x4e5: IF (Stack[-1] == 0) GOTO 0x4e8; Pop(1)

0x4e6: Stack[-4] = (int) 0
0x4e7: GOTO 0x4ea

0x4e8: @@ GetProperty(Stack[-5], Stack[-4])
0x4e9: Pop(0)
0x4ea: PushEmpty(float, float, float)
0x4eb: Pop(0); Push(Stack[-9] + Stack[-7]);
0x4ec: Push((float)100.0)
0x4ed: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0x4ee: Stack[-1] = (int) 1
0x4ef: Call2 0x68b

0x4f0: Stack[-6] = Stack[-3]
0x4f1: Pop(3)
0x4f2: Push("health")
0x4f3: @@ GetProperty(Stack[-1], Stack[-3])
0x4f4: Pop(1)
0x4f5: Push((int) 1)
0x4f6: Pop(1); Push(Stack[-1] - Stack[-4]);
0x4f7: Stack[-2] = Stack[-15] * Stack[-1]; Pop(1);
0x4f8: Push("health")
0x4f9: PushEmpty(float, float, float, float)
0x4fa: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0x4fb: Stack[-2] = (int) 0
0x4fc: Stack[-1] = (int) 1
0x4fd: Call2 0x692

0x4fe: Pop(3)
0x4ff: @@ SetProperty(Stack[-2], Stack[-1])
0x500: Pop(2)
0x501: PushEmpty(bool, object)
0x502: Stack[-1] = Stack[-17]
0x503: Call2 0x49c

0x504: Pop(1)
0x505: IF (Stack[-1] == 0) GOTO 0x50a; Pop(1)

0x506: PushEmpty(float)
0x507: Stack[-1] = -Stack[-2]; Pop(0);
0x508: Call2 0x6ef

0x509: Pop(1)
0x50a: Stack[-16] = Stack[-1]
0x50b: Return(); Pop(12)

0x50c: PushEmpty(bool, bool)
0x50d: @@ IsDead(Stack[-1])
0x50e: Pop(0)
0x50f: Stack[-4] = Stack[-1]
0x510: Return(); Pop(2)

0x511: PushEmpty(object, object, object, object)
0x512: Pop(0); Push((bool) Stack[-5] == 0)
0x513: IF (Stack[-1] == 0) GOTO 0x516; Pop(1)

0x514: Stack[-6] = (bool) 0
0x515: Return(); Pop(4)

0x516: PushEmpty(bool)
0x517: Stack[-1] = (bool) 0
0x518: Push("IsDead")
0x519: Push((int) 1)
0x51a: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x51b: IF (Stack[-1] == 0) GOTO 0x522; Pop(1)

0x51c: PushEmpty(bool, object)
0x51d: Stack[-1] = Stack[-8]
0x51e: Call2 0x50c

0x51f: Pop(1)
0x520: IF (Stack[-1] == 0) GOTO 0x522; Pop(1)

0x521: Stack[-1] = (bool) 1
0x522: IF (Stack[-1] == 0) GOTO 0x525; Pop(1)

0x523: Stack[-6] = (bool) 0
0x524: Return(); Pop(4)

0x525: @ GetScene(Stack[-2])
0x526: Pop(0)
0x527: Pop(0); Push((bool) Stack[-2] == 0)
0x528: IF (Stack[-1] == 0) GOTO 0x52b; Pop(1)

0x529: Stack[-6] = (bool) 0
0x52a: Return(); Pop(4)

0x52b: @@ GetScene(Stack[-1])
0x52c: Pop(0)
0x52d: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x52e: IF (Stack[-1] == 0) GOTO 0x531; Pop(1)

0x52f: Stack[-6] = (bool) 0
0x530: Return(); Pop(4)

0x531: Stack[-6] = (bool) 1
0x532: Return(); Pop(4)

0x533: Stack[-1] = 0
0x534: Stack[-2] = 0
0x535: PushEmpty(int, int)
0x536: PushEmpty(bool, object)
0x537: Stack[-1] = Stack[-5]
0x538: Call2 0x511

0x539: Pop(1)
0x53a: Pop(1); Push((bool) Stack[-1] == 0)
0x53b: IF (Stack[-1] == 0) GOTO 0x53e; Pop(1)

0x53c: Stack[-4] = (bool) 0
0x53d: Return(); Pop(2)

0x53e: PushEmpty(bool, object, string)
0x53f: Stack[-2] = Stack[-6]
0x540: Stack[-1] = "noaccess"
0x541: Call2 0x4a1

0x542: Pop(2)
0x543: Pop(1); Push((bool) Stack[-1] == 0)
0x544: IF (Stack[-1] == 0) GOTO 0x547; Pop(1)

0x545: Stack[-4] = (bool) 1
0x546: Return(); Pop(2)

0x547: Push("noaccess")
0x548: @@ GetProperty(Stack[-1], Stack[-2])
0x549: Pop(1)
0x54a: Push((int) 0)
0x54b: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x54c: Return(); Pop(2)

0x54d: PushEmpty(bool, int, cvector, cvector, cvector, cvector, string, bool, int, cvector, cvector, cvector, cvector, string)
0x54e: Pop(0); Push((bool) Stack[-15] == 0)
0x54f: IF (Stack[-1] == 0) GOTO 0x551; Pop(1)

0x550: Return(); Pop(14)

0x551: @ IsDead(Stack[-7])
0x552: Pop(0)
0x553: Push(Stack[-7])
0x554: IF (Stack[-1] == 0) GOTO 0x556; Pop(1)

0x555: Return(); Pop(14)

0x556: @ GetSecondaryAnimationType(Stack[-6])
0x557: Pop(0)
0x558: Push((int) 0)
0x559: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x55a: IF (Stack[-1] == 0) GOTO 0x55c; Pop(1)

0x55b: Return(); Pop(14)

0x55c: @@ GetPosition(Stack[-5])
0x55d: Pop(0)
0x55e: @ GetPosition(Stack[-4])
0x55f: Pop(0)
0x560: @ GetDirection(Stack[-3])
0x561: Pop(0)
0x562: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0x563: Push(CvectorIndex(Stack[-2], 0))
0x564: Push(CvectorIndex(Stack[-4], 0))
0x565: Pop(2); Push(Stack[-2] * Stack[-1]);
0x566: Push(CvectorIndex(Stack[-3], 2))
0x567: Push(CvectorIndex(Stack[-5], 2))
0x568: Pop(2); Push(Stack[-2] * Stack[-1]);
0x569: Pop(2); Push(Stack[-2] + Stack[-1]);
0x56a: Push((int) 0)
0x56b: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x56c: IF (Stack[-1] == 0) GOTO 0x56f; Pop(1)

0x56d: Stack[-1] = "fhit"
0x56e: GOTO 0x570

0x56f: Stack[-1] = "bhit"
0x570: Push("hit_react")
0x571: Push("1")
0x572: Pop(1); Push(Stack[-3] + Stack[-1]);
0x573: Push("2")
0x574: Pop(1); Push(Stack[-4] + Stack[-1]);
0x575: Push((int) -10)
0x576: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x577: Pop(4)
0x578: Return(); Pop(14)

0x579: PushEmpty(cvector, object, int, bool, cvector, cvector, int, int, cvector, cvector, object, int, bool, cvector, cvector, int, int, cvector)
0x57a: PushEmpty(bool)
0x57b: Stack[-1] = (bool) 0
0x57c: PushEmpty(bool)
0x57d: Stack[-1] = (bool) 0
0x57e: Push(Stack[-23])
0x57f: IF (Stack[-1] == 0) GOTO 0x584; Pop(1)

0x580: Push((int) 4)
0x581: Pop(1); Push((bool) Stack[-23] != Stack[-1])
0x582: IF (Stack[-1] == 0) GOTO 0x584; Pop(1)

0x583: Stack[-1] = (bool) 1
0x584: IF (Stack[-1] == 0) GOTO 0x589; Pop(1)

0x585: Push((int) 5)
0x586: Pop(1); Push((bool) Stack[-22] != Stack[-1])
0x587: IF (Stack[-1] == 0) GOTO 0x589; Pop(1)

0x588: Stack[-1] = (bool) 1
0x589: IF (Stack[-1] == 0) GOTO 0x5b8; Pop(1)

0x58a: PushEmpty(cvector, cvector)
0x58b: PushEmpty(cvector, object)
0x58c: Stack[-1] = Stack[-25]
0x58d: Call2 0x486

0x58e: Stack[-3] = Stack[-2]
0x58f: Pop(2)
0x590: Call2 0x67d

0x591: Stack[-11] = Stack[-2]
0x592: Pop(2)
0x593: @ CreateVectorVector(Stack[-8])
0x594: Pop(0)
0x595: Stack[-7] = (int) 1
0x596: Push("hit")
0x597: Pop(1); Push(Stack[-1] + Stack[-8]);
0x598: @ GetGeometryLocator(Stack[-1], Stack[-7], Stack[-6], Stack[-5])
0x599: Pop(1)
0x59a: Pop(0); Push((bool) Stack[-6] == 0)
0x59b: IF (Stack[-1] == 0) GOTO 0x59d; Pop(1)

0x59c: GOTO 0x5a6

0x59d: Pop(0); Push(Stack[-4] | Stack[-9]);
0x59e: Push((float)0.70711)
0x59f: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x5a0: IF (Stack[-1] == 0) GOTO 0x5a3; Pop(1)

0x5a1: @@ add(Stack[-5])
0x5a2: Pop(0)
0x5a3: Push((int) 1)
0x5a4: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x5a5: GOTO 0x596

0x5a6: @@ size(Stack[-3])
0x5a7: Pop(0)
0x5a8: Push(Stack[-3])
0x5a9: IF (Stack[-1] == 0) GOTO 0x5b7; Pop(1)

0x5aa: @ irand(Stack[-2], Stack[-3])
0x5ab: Pop(0)
0x5ac: @@ get(Stack[-1], Stack[-2])
0x5ad: Pop(0)
0x5ae: PushEmpty(object, int, float, cvector, cvector)
0x5af: Stack[-5] = Stack[-26]
0x5b0: Stack[-4] = Stack[-25]
0x5b1: Stack[-3] = Stack[-24]
0x5b2: Stack[-2] = Stack[-6]
0x5b3: Stack[-1] = -Stack[-14]; Pop(0);
0x5b4: Call2 0x5bd

0x5b5: Pop(5)
0x5b6: Return(); Pop(18)

0x5b7: Stack[-8] = 0
0x5b8: PushEmpty(object)
0x5b9: Stack[-1] = Stack[-22]
0x5ba: Call2 0x54d

0x5bb: Pop(1)
0x5bc: Return(); Pop(18)

0x5bd: PushEmpty(object, object, object, object)
0x5be: @ GetScene(Stack[-2])
0x5bf: Pop(0)
0x5c0: Push("scripted")
0x5c1: Push("blood_dir.xml")
0x5c2: @ AddActorByType(Stack[-3], Stack[-2], Stack[-4], Stack[-8], Stack[-7], Stack[-1])
0x5c3: Pop(2)
0x5c4: PushEmpty(object)
0x5c5: Stack[-1] = Stack[-10]
0x5c6: Call2 0x54d

0x5c7: Pop(1)
0x5c8: Return(); Pop(4)

0x5c9: Stack[-1] = 0
0x5ca: Stack[-2] = 0
0x5cb: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x5cc: @@ GetPosition(Stack[-3])
0x5cd: Pop(0)
0x5ce: @ GetPosition(Stack[-2])
0x5cf: Pop(0)
0x5d0: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0x5d1: Push(CvectorIndex(Stack[-1], 0))
0x5d2: Push(CvectorIndex(Stack[-2], 2))
0x5d3: @ RotateAsync(Stack[-2], Stack[-1])
0x5d4: Pop(2)
0x5d5: Return(); Pop(6)

0x5d6: PushEmpty(float, float, float, float)
0x5d7: @ GetEyesHeight(Stack[-2])
0x5d8: Pop(0)
0x5d9: @@ GetEyesHeight(Stack[-1])
0x5da: Pop(0)
0x5db: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x5dc: Return(); Pop(4)

0x5dd: PushEmpty(bool, bool)
0x5de: PushEmpty(bool, int, int)
0x5df: Stack[-2] = Stack[-7]
0x5e0: Stack[-1] = Stack[-6]
0x5e1: Call2 0x69d

0x5e2: Pop(2)
0x5e3: IF (Stack[-1] == 0) GOTO 0x5e7; Pop(1)

0x5e4: Push((int) 0)
0x5e5: @ AddItem(Stack[-2], Stack[-6], Stack[-1])
0x5e6: Pop(1)
0x5e7: Return(); Pop(2)

0x5e8: PushEmpty(int, bool, int, bool)
0x5e9: PushEmpty(bool, int, int)
0x5ea: Stack[-2] = Stack[-10]
0x5eb: Stack[-1] = Stack[-9]
0x5ec: Call2 0x69d

0x5ed: Pop(2)
0x5ee: IF (Stack[-1] == 0) GOTO 0x5f6; Pop(1)

0x5ef: @ irand(Stack[-2], Stack[-5])
0x5f0: Pop(0)
0x5f1: Push((int) 0)
0x5f2: Push((int) 1)
0x5f3: Pop(1); Push(Stack[-4] + Stack[-1]);
0x5f4: @ AddItem(Stack[-3], Stack[-10], Stack[-2], Stack[-1])
0x5f5: Pop(2)
0x5f6: Return(); Pop(4)

0x5f7: PushEmpty(bool, int, bool, int, bool, float, cvector, cvector, bool, int, bool, int, bool, float, cvector, cvector)
0x5f8: @ IsExisting3DSound(Stack[-8], Stack[-17])
0x5f9: Pop(0)
0x5fa: Pop(0); Push((bool) Stack[-8] == 0)
0x5fb: IF (Stack[-1] == 0) GOTO 0x610; Pop(1)

0x5fc: Stack[-7] = (int) 0
0x5fd: Push((int) 1)
0x5fe: Pop(1); Push(Stack[-8] + Stack[-1]);
0x5ff: Pop(1); Push(Stack[-18] + Stack[-1]);
0x600: @ IsExisting3DSound(Stack[-7], Stack[-1])
0x601: Pop(1)
0x602: Pop(0); Push((bool) Stack[-6] == 0)
0x603: IF (Stack[-1] == 0) GOTO 0x605; Pop(1)

0x604: GOTO 0x608

0x605: Push((int) 1)
0x606: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x607: GOTO 0x5fd

0x608: Pop(0); Push((bool) Stack[-7] == 0)
0x609: IF (Stack[-1] == 0) GOTO 0x60b; Pop(1)

0x60a: Return(); Pop(16)

0x60b: @ irand(Stack[-5], Stack[-7])
0x60c: Pop(0)
0x60d: Push((int) 1)
0x60e: Pop(1); Push(Stack[-6] + Stack[-1]);
0x60f: Stack[-18] = Stack[-18] + Stack[-1]; Pop(1);
0x610: @ Is3DSoundLoaded(Stack[-4], Stack[-17])
0x611: Pop(0)
0x612: Push(Stack[-4])
0x613: IF (Stack[-1] == 0) GOTO 0x61f; Pop(1)

0x614: @ GetEyesHeight(Stack[-3])
0x615: Pop(0)
0x616: @ GetDirection(Stack[-2])
0x617: Pop(0)
0x618: Push((int) 50)
0x619: Stack[-2] = Stack[-3] * Stack[-1]; Pop(1);
0x61a: Push(CvectorIndex(Stack[-1], 1))
0x61b: Stack[-1] = Stack[-1] + Stack[-4]; Pop(0);
0x61c: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x61d: @ PlayGlobalSound(Stack[-17], Stack[-1])
0x61e: Pop(0)
0x61f: Return(); Pop(16)

0x620: PushEmpty()
0x621: Stack[-2] = (bool) 1
0x622: PushEmpty(bool)
0x623: Stack[-1] = (bool) 1
0x624: PushEmpty(bool)
0x625: Stack[-1] = (bool) 1
0x626: PushEmpty(bool)
0x627: Stack[-1] = (bool) 1
0x628: PushEmpty(bool)
0x629: Stack[-1] = (bool) 1
0x62a: PushEmpty(bool)
0x62b: Stack[-1] = (bool) 1
0x62c: PushEmpty(bool)
0x62d: Stack[-1] = (bool) 1
0x62e: PushEmpty(bool)
0x62f: Stack[-1] = (bool) 1
0x630: PushEmpty(bool)
0x631: Stack[-1] = (bool) 1
0x632: PushEmpty(bool)
0x633: Stack[-1] = (bool) 1
0x634: PushEmpty(bool)
0x635: Stack[-1] = (bool) 1
0x636: PushEmpty(bool)
0x637: Stack[-1] = (bool) 1
0x638: Push("woman")
0x639: Pop(1); Push((bool) Stack[-13] == Stack[-1])
0x63a: IF (Stack[-1] == 0) GOTO 0x63f; Pop(1)

0x63b: Push("worker")
0x63c: Pop(1); Push((bool) Stack[-13] == Stack[-1])
0x63d: IF (Stack[-1] == 0) GOTO 0x63f; Pop(1)

0x63e: Stack[-1] = (bool) 0
0x63f: IF (Stack[-1] == 0) GOTO 0x644; Pop(1)

0x640: Push("butcher")
0x641: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0x642: IF (Stack[-1] == 0) GOTO 0x644; Pop(1)

0x643: Stack[-1] = (bool) 0
0x644: IF (Stack[-1] == 0) GOTO 0x649; Pop(1)

0x645: Push("wasted_girl")
0x646: Pop(1); Push((bool) Stack[-11] == Stack[-1])
0x647: IF (Stack[-1] == 0) GOTO 0x649; Pop(1)

0x648: Stack[-1] = (bool) 0
0x649: IF (Stack[-1] == 0) GOTO 0x64e; Pop(1)

0x64a: Push("boy")
0x64b: Pop(1); Push((bool) Stack[-10] == Stack[-1])
0x64c: IF (Stack[-1] == 0) GOTO 0x64e; Pop(1)

0x64d: Stack[-1] = (bool) 0
0x64e: IF (Stack[-1] == 0) GOTO 0x653; Pop(1)

0x64f: Push("vaxxabitka")
0x650: Pop(1); Push((bool) Stack[-9] == Stack[-1])
0x651: IF (Stack[-1] == 0) GOTO 0x653; Pop(1)

0x652: Stack[-1] = (bool) 0
0x653: IF (Stack[-1] == 0) GOTO 0x658; Pop(1)

0x654: Push("unosha")
0x655: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x656: IF (Stack[-1] == 0) GOTO 0x658; Pop(1)

0x657: Stack[-1] = (bool) 0
0x658: IF (Stack[-1] == 0) GOTO 0x65d; Pop(1)

0x659: Push("wasted_male")
0x65a: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x65b: IF (Stack[-1] == 0) GOTO 0x65d; Pop(1)

0x65c: Stack[-1] = (bool) 0
0x65d: IF (Stack[-1] == 0) GOTO 0x662; Pop(1)

0x65e: Push("alkash")
0x65f: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x660: IF (Stack[-1] == 0) GOTO 0x662; Pop(1)

0x661: Stack[-1] = (bool) 0
0x662: IF (Stack[-1] == 0) GOTO 0x667; Pop(1)

0x663: Push("dohodyaga")
0x664: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x665: IF (Stack[-1] == 0) GOTO 0x667; Pop(1)

0x666: Stack[-1] = (bool) 0
0x667: IF (Stack[-1] == 0) GOTO 0x66c; Pop(1)

0x668: Push("vaxxabit")
0x669: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x66a: IF (Stack[-1] == 0) GOTO 0x66c; Pop(1)

0x66b: Stack[-1] = (bool) 0
0x66c: IF (Stack[-1] == 0) GOTO 0x671; Pop(1)

0x66d: Push("nudegirl")
0x66e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x66f: IF (Stack[-1] == 0) GOTO 0x671; Pop(1)

0x670: Stack[-1] = (bool) 0
0x671: IF (Stack[-1] == 0) GOTO 0x676; Pop(1)

0x672: Push("morlok")
0x673: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x674: IF (Stack[-1] == 0) GOTO 0x676; Pop(1)

0x675: Stack[-2] = (bool) 0
0x676: Return(); Pop(0)

0x677: PushEmpty(object, object)
0x678: @ self(Stack[-1])
0x679: Pop(0)
0x67a: Stack[-3] = Stack[-1]
0x67b: Return(); Pop(2)

0x67c: Stack[-1] = 0
0x67d: PushEmpty(float, float)
0x67e: Pop(0); Push(Stack[-3] | Stack[-3]);
0x67f: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x680: Push((float)0.0)
0x681: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x682: IF (Stack[-1] == 0) GOTO 0x685; Pop(1)

0x683: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x684: Return(); Pop(2)

0x685: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x686: Return(); Pop(2)

0x687: PushEmpty(cvector, cvector)
0x688: Stack[-1] = Stack[-3] - Stack[-4]; Pop(0);
0x689: Stack[-5] = Stack[-1] | Stack[-1]; Pop(0);
0x68a: Return(); Pop(2)

0x68b: PushEmpty()
0x68c: Pop(0); Push((bool) Stack[-2] < Stack[-1])
0x68d: IF (Stack[-1] == 0) GOTO 0x690; Pop(1)

0x68e: Stack[-3] = Stack[-2]
0x68f: GOTO 0x691

0x690: Stack[-3] = Stack[-1]
0x691: Return(); Pop(0)

0x692: PushEmpty()
0x693: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x694: IF (Stack[-1] == 0) GOTO 0x697; Pop(1)

0x695: Stack[-4] = Stack[-2]
0x696: Return(); Pop(0)

0x697: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x698: IF (Stack[-1] == 0) GOTO 0x69b; Pop(1)

0x699: Stack[-4] = Stack[-1]
0x69a: Return(); Pop(0)

0x69b: Stack[-4] = Stack[-3]
0x69c: Return(); Pop(0)

0x69d: PushEmpty(int, int)
0x69e: @ irand(Stack[-1], Stack[-3])
0x69f: Pop(0)
0x6a0: Stack[-5] = Stack[-1] < Stack[-4]; Pop(0);
0x6a1: Return(); Pop(2)

0x6a2: PushEmpty(object, object)
0x6a3: @ CreateObjectSet(Stack[-1])
0x6a4: Pop(0)
0x6a5: Stack[-3] = Stack[-1]
0x6a6: Return(); Pop(2)

0x6a7: Stack[-1] = 0
0x6a8: PushEmpty()
0x6a9: Push(CvectorIndex(Stack[-2], 0))
0x6aa: Push(CvectorIndex(Stack[-2], 0))
0x6ab: Pop(2); Push(Stack[-2] * Stack[-1]);
0x6ac: Push(CvectorIndex(Stack[-3], 2))
0x6ad: Push(CvectorIndex(Stack[-3], 2))
0x6ae: Pop(2); Push(Stack[-2] * Stack[-1]);
0x6af: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x6b0: Return(); Pop(0)

0x6b1: PushEmpty()
0x6b2: Push(CvectorIndex(Stack[-1], 0))
0x6b3: Push(CvectorIndex(Stack[-2], 0))
0x6b4: Pop(2); Push(Stack[-2] * Stack[-1]);
0x6b5: Push(CvectorIndex(Stack[-2], 2))
0x6b6: Push(CvectorIndex(Stack[-3], 2))
0x6b7: Pop(2); Push(Stack[-2] * Stack[-1]);
0x6b8: Pop(2); Push(Stack[-2] + Stack[-1]);
0x6b9: Stack[-3] = Sqrt(Stack[-1]); Pop(1);
0x6ba: Return(); Pop(0)

0x6bb: PushEmpty()
0x6bc: PushEmpty(float, cvector, cvector)
0x6bd: Stack[-2] = Stack[-5]
0x6be: Stack[-1] = Stack[-4]
0x6bf: Call2 0x6a8

0x6c0: Pop(2)
0x6c1: PushEmpty(float, cvector)
0x6c2: Stack[-1] = Stack[-5]
0x6c3: Call2 0x6b1

0x6c4: Pop(1)
0x6c5: PushEmpty(float, cvector)
0x6c6: Stack[-1] = Stack[-5]
0x6c7: Call2 0x6b1

0x6c8: Pop(1)
0x6c9: Pop(2); Push(Stack[-2] * Stack[-1]);
0x6ca: Stack[-5] = Stack[-2] / Stack[-1]; Pop(2);
0x6cb: Return(); Pop(0)

0x6cc: PushEmpty()
0x6cd: Pop(0); Push((bool) Stack[-2] == 0)
0x6ce: IF (Stack[-1] == 0) GOTO 0x6d1; Pop(1)

0x6cf: Stack[-3] = (bool) 0
0x6d0: Return(); Pop(0)

0x6d1: Push((int) 0)
0x6d2: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x6d3: IF (Stack[-1] == 0) GOTO 0x6d8; Pop(1)

0x6d4: Push((int) 8)
0x6d5: @ SendWorldWndMessage(Stack[-1])
0x6d6: Pop(1)
0x6d7: GOTO 0x6e1

0x6d8: Push((int) 0)
0x6d9: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x6da: IF (Stack[-1] == 0) GOTO 0x6df; Pop(1)

0x6db: Push((int) 9)
0x6dc: @ SendWorldWndMessage(Stack[-1])
0x6dd: Pop(1)
0x6de: GOTO 0x6e1

0x6df: Stack[-3] = (bool) 0
0x6e0: Return(); Pop(0)

0x6e1: PushEmpty(float)
0x6e2: Stack[-1] = Stack[-2]
0x6e3: Call2 0x700

0x6e4: Pop(1)
0x6e5: PushEmpty(bool, object, string, float, float, float)
0x6e6: Stack[-5] = Stack[-8]
0x6e7: Stack[-4] = "reputation"
0x6e8: Stack[-3] = Stack[-7]
0x6e9: Stack[-2] = (int) 0
0x6ea: Stack[-1] = (int) 1
0x6eb: Call2 0x4ad

0x6ec: Pop(6)
0x6ed: Stack[-3] = (bool) 1
0x6ee: Return(); Pop(0)

0x6ef: PushEmpty(object, object)
0x6f0: @ CreateFloatVector(Stack[-1])
0x6f1: Pop(0)
0x6f2: @@ add(Stack[-3])
0x6f3: Pop(0)
0x6f4: Push((int) 0)
0x6f5: Pop(1); Push((bool) Stack[-4] < Stack[-1])
0x6f6: IF (Stack[-1] == 0) GOTO 0x6fb; Pop(1)

0x6f7: Push((float)0.7)
0x6f8: Push((int) 500)
0x6f9: @ RumblePlay(Stack[-2], Stack[-1])
0x6fa: Pop(2)
0x6fb: Push((int) 15)
0x6fc: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x6fd: Pop(1)
0x6fe: Return(); Pop(2)

0x6ff: Stack[-1] = 0
0x700: PushEmpty(object, object)
0x701: @ CreateFloatVector(Stack[-1])
0x702: Pop(0)
0x703: @@ add(Stack[-3])
0x704: Pop(0)
0x705: Push((int) 16)
0x706: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x707: Pop(1)
0x708: Return(); Pop(2)

0x709: Stack[-1] = 0
0x70a: PushEmpty(object, object)
0x70b: @ FindActor(Stack[-1], Stack[-4])
0x70c: Pop(0)
0x70d: Pop(0); Push((bool) Stack[-1] == 0)
0x70e: IF (Stack[-1] == 0) GOTO 0x711; Pop(1)

0x70f: Stack[-5] = (bool) 0
0x710: Return(); Pop(2)

0x711: @ Trigger(Stack[-1], Stack[-3])
0x712: Pop(0)
0x713: Stack[-5] = (bool) 1
0x714: Return(); Pop(2)

0x715: Stack[-1] = 0
0x716: PushEmpty(bool, bool)
0x717: @ IsPlayerActor(Stack[-3], Stack[-1])
0x718: Pop(0)
0x719: Push(Stack[-1])
0x71a: IF (Stack[-1] == 0) GOTO 0x71e; Pop(1)

0x71b: Push("attack")
0x71c: @ PlayGlobalMusic(Stack[-1])
0x71d: Pop(1)
0x71e: Return(); Pop(2)

0x71f: PushEmpty(object, object)
0x720: @ GetScene(Stack[-1])
0x721: Pop(0)
0x722: Push("battle")
0x723: PushEmpty(object)
0x724: Call2 0x677

0x725: Pop(0)
0x726: @ BroadcastMessage(Stack[-2], Stack[-1], Stack[-3])
0x727: Pop(2)
0x728: Return(); Pop(2)

0x729: Stack[-1] = 0
0x72a: PushEmpty(int, int)
0x72b: Push("branch")
0x72c: @ GetVariable(Stack[-1], Stack[-2])
0x72d: Pop(1)
0x72e: Stack[-3] = Stack[-1]
0x72f: Return(); Pop(2)

0x730: PushEmpty()
0x731: PushEmpty(int)
0x732: Call2 0x72a

0x733: Pop(0)
0x734: Push((int) 1)
0x735: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x736: IF (Stack[-1] == 0) GOTO 0x73a; Pop(1)

0x737: @ WorkWithCorpse(Stack[-1])
0x738: Pop(0)
0x739: GOTO 0x73c

0x73a: @ Barter(Stack[-1])
0x73b: Pop(0)
0x73c: Return(); Pop(0)

0x73d: PushEmpty(int, bool, int, bool)
0x73e: Pop(0); Push((bool) Stack[-6] > Stack[-5])
0x73f: IF (Stack[-1] == 0) GOTO 0x744; Pop(1)

0x740: Push("GenerateMoney: iMin > iMax")
0x741: @ Trace(Stack[-1])
0x742: Pop(1)
0x743: Return(); Pop(4)

0x744: Stack[-2] = (int) 0
0x745: Pop(0); Push((bool) Stack[-6] != Stack[-5])
0x746: IF (Stack[-1] == 0) GOTO 0x74b; Pop(1)

0x747: Pop(0); Push(Stack[-5] - Stack[-6]);
0x748: @ irand(Stack[-3], Stack[-1])
0x749: Pop(1)
0x74a: GOTO 0x74f

0x74b: Push((int) 0)
0x74c: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x74d: IF (Stack[-1] == 0) GOTO 0x74f; Pop(1)

0x74e: Return(); Pop(4)

0x74f: Stack[-2] = Stack[-2] + Stack[-6]; Pop(0);
0x750: Push((int) 0)
0x751: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x752: IF (Stack[-1] == 0) GOTO 0x754; Pop(1)

0x753: Return(); Pop(4)

0x754: PushEmpty(int, string)
0x755: Stack[-1] = "Money"
0x756: Call2 0x7a9

0x757: Pop(1)
0x758: Push((int) 0)
0x759: @ AddItem(Stack[-3], Stack[-2], Stack[-1], Stack[-4])
0x75a: Pop(2)
0x75b: Return(); Pop(4)

0x75c: PushEmpty(object, int, bool, object, int, bool)
0x75d: @ CreateInvItem(Stack[-3])
0x75e: Pop(0)
0x75f: @@ SetItemName(Stack[-7])
0x760: Pop(0)
0x761: Push("Organ")
0x762: Push((int) 1)
0x763: @@ SetProperty(Stack[-2], Stack[-1])
0x764: Pop(2)
0x765: @@ GetItemID(Stack[-2])
0x766: Pop(0)
0x767: Push((int) 0)
0x768: Push((int) 1)
0x769: @ AddItem(Stack[-3], Stack[-5], Stack[-2], Stack[-1])
0x76a: Pop(2)
0x76b: Return(); Pop(6)

0x76c: Stack[-3] = 0
0x76d: PushEmpty(int)
0x76e: Call2 0x72a

0x76f: Pop(0)
0x770: Push((int) 1)
0x771: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x772: IF (Stack[-1] == 0) GOTO 0x774; Pop(1)

0x773: Return(); Pop(0)

0x774: PushEmpty(string)
0x775: Stack[-1] = "liver"
0x776: Call2 0x75c

0x777: Pop(1)
0x778: PushEmpty(string)
0x779: Stack[-1] = "kidney"
0x77a: Call2 0x75c

0x77b: Pop(1)
0x77c: PushEmpty(string)
0x77d: Stack[-1] = "heart"
0x77e: Call2 0x75c

0x77f: Pop(1)
0x780: PushEmpty(string)
0x781: Stack[-1] = "blood"
0x782: Call2 0x75c

0x783: Pop(1)
0x784: Return(); Pop(0)

0x785: PushEmpty(int, bool, int, bool)
0x786: Push((int) 0)
0x787: @ ClearSubContainer(Stack[-1])
0x788: Pop(1)
0x789: PushEmpty(int, int)
0x78a: Stack[-2] = (int) 500
0x78b: Stack[-1] = (int) 1000
0x78c: Call2 0x73d

0x78d: Pop(2)
0x78e: PushEmpty(string, int, int, int)
0x78f: Stack[-4] = "rifle_ammo"
0x790: Stack[-3] = (int) 1
0x791: Stack[-2] = (int) 3
0x792: Stack[-1] = (int) 3
0x793: Call2 0x5e8

0x794: Pop(4)
0x795: PushEmpty(string, int, int, int)
0x796: Stack[-4] = "rusk"
0x797: Stack[-3] = (int) 1
0x798: Stack[-2] = (int) 3
0x799: Stack[-1] = (int) 2
0x79a: Call2 0x5e8

0x79b: Pop(4)
0x79c: PushEmpty(string, int, int)
0x79d: Stack[-3] = "bandage"
0x79e: Stack[-2] = (int) 1
0x79f: Stack[-1] = (int) 6
0x7a0: Call2 0x5dd

0x7a1: Pop(3)
0x7a2: PushEmpty(string, int, int)
0x7a3: Stack[-3] = "tourniquet"
0x7a4: Stack[-2] = (int) 1
0x7a5: Stack[-1] = (int) 6
0x7a6: Call2 0x5dd

0x7a7: Pop(3)
0x7a8: Return(); Pop(4)

0x7a9: PushEmpty(int, int)
0x7aa: @ GetInvItemByName(Stack[-1], Stack[-3])
0x7ab: Pop(0)
0x7ac: Stack[-4] = Stack[-1]
0x7ad: Return(); Pop(2)

0x7ae: PushEmpty()
0x7af: PushEmpty(object)
0x7b0: Stack[-1] = Stack[-2]
0x7b1: Push(-1, 0); TaskCall(0)
0x7b2: Call2 0x0

0x7b3: Pop(-1, 0); TaskReturn
0x7b4: Pop(1)
0x7b5: Return(); Pop(0)

0x7b6: PushEmpty()
0x7b7: PushEmpty(object, int, float)
0x7b8: Stack[-3] = Stack[-7]
0x7b9: Stack[-2] = Stack[-6]
0x7ba: Stack[-1] = Stack[-5]
0x7bb: Call2 0x579

0x7bc: Pop(3)
0x7bd: Return(); Pop(0)

0x7be: PushEmpty()
0x7bf: PushEmpty(object, int, float, cvector, cvector)
0x7c0: Stack[-5] = Stack[-11]
0x7c1: Stack[-4] = Stack[-10]
0x7c2: Stack[-3] = Stack[-9]
0x7c3: Stack[-2] = Stack[-7]
0x7c4: Stack[-1] = Stack[-6]
0x7c5: Call2 0x5bd

0x7c6: Pop(5)
0x7c7: Return(); Pop(0)

0x7c8: PushEmpty(float, float)
0x7c9: Push("health")
0x7ca: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x7cb: IF (Stack[-1] == 0) GOTO 0x7d4; Pop(1)

0x7cc: Push("health")
0x7cd: @ GetProperty(Stack[-1], Stack[-2])
0x7ce: Pop(1)
0x7cf: Push((int) 0)
0x7d0: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x7d1: IF (Stack[-1] == 0) GOTO 0x7d4; Pop(1)

0x7d2: @ SignalDeath(Stack[-4])
0x7d3: Pop(0)
0x7d4: Return(); Pop(2)

0x7d5: PushEmpty()
0x7d6: PushEmpty(bool, object)
0x7d7: Stack[-1] = Stack[-3]
0x7d8: Call2 0x49c

0x7d9: Pop(1)
0x7da: IF (Stack[-1] == 0) GOTO 0x7e2; Pop(1)

0x7db: PushEmpty(object)
0x7dc: Call2 0x677

0x7dd: Pop(0)
0x7de: Push((float)0.05)
0x7df: Push((bool) 1)
0x7e0: @ ReportReputationChange(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x7e1: Pop(3)
0x7e2: PushEmpty(object)
0x7e3: Stack[-1] = Stack[-2]
0x7e4: Call2 0x95a

0x7e5: Pop(1)
0x7e6: Return(); Pop(0)

0x7e7: PushEmpty(string, string)
0x7e8: PushEmpty(bool, object, string)
0x7e9: Stack[-2] = Stack[-7]
0x7ea: Stack[-1] = "class"
0x7eb: Call2 0x4a1

0x7ec: Pop(2)
0x7ed: Pop(1); Push((bool) Stack[-1] == 0)
0x7ee: IF (Stack[-1] == 0) GOTO 0x7f1; Pop(1)

0x7ef: Stack[-5] = (bool) 0
0x7f0: Return(); Pop(2)

0x7f1: Push("class")
0x7f2: @@ GetProperty(Stack[-1], Stack[-2])
0x7f3: Pop(1)
0x7f4: PushEmpty(bool)
0x7f5: Stack[-1] = (bool) 1
0x7f6: PushEmpty(bool)
0x7f7: Stack[-1] = (bool) 1
0x7f8: PushEmpty(bool)
0x7f9: Stack[-1] = (bool) 1
0x7fa: PushEmpty(bool)
0x7fb: Stack[-1] = (bool) 1
0x7fc: PushEmpty(bool)
0x7fd: Stack[-1] = (bool) 1
0x7fe: PushEmpty(bool)
0x7ff: Stack[-1] = (bool) 1
0x800: PushEmpty(bool)
0x801: Stack[-1] = (bool) 1
0x802: PushEmpty(bool)
0x803: Stack[-1] = (bool) 1
0x804: PushEmpty(bool)
0x805: Stack[-1] = (bool) 1
0x806: PushEmpty(bool)
0x807: Stack[-1] = (bool) 1
0x808: Push("patrol")
0x809: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0x80a: IF (Stack[-1] == 0) GOTO 0x80f; Pop(1)

0x80b: Push("sanitar")
0x80c: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0x80d: IF (Stack[-1] == 0) GOTO 0x80f; Pop(1)

0x80e: Stack[-1] = (bool) 0
0x80f: IF (Stack[-1] == 0) GOTO 0x814; Pop(1)

0x810: Push("soldier")
0x811: Pop(1); Push((bool) Stack[-11] == Stack[-1])
0x812: IF (Stack[-1] == 0) GOTO 0x814; Pop(1)

0x813: Stack[-1] = (bool) 0
0x814: IF (Stack[-1] == 0) GOTO 0x819; Pop(1)

0x815: Push("woman")
0x816: Pop(1); Push((bool) Stack[-10] == Stack[-1])
0x817: IF (Stack[-1] == 0) GOTO 0x819; Pop(1)

0x818: Stack[-1] = (bool) 0
0x819: IF (Stack[-1] == 0) GOTO 0x81e; Pop(1)

0x81a: Push("wasted_girl")
0x81b: Pop(1); Push((bool) Stack[-9] == Stack[-1])
0x81c: IF (Stack[-1] == 0) GOTO 0x81e; Pop(1)

0x81d: Stack[-1] = (bool) 0
0x81e: IF (Stack[-1] == 0) GOTO 0x823; Pop(1)

0x81f: Push("vaxxabitka")
0x820: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x821: IF (Stack[-1] == 0) GOTO 0x823; Pop(1)

0x822: Stack[-1] = (bool) 0
0x823: IF (Stack[-1] == 0) GOTO 0x828; Pop(1)

0x824: Push("vaxxabit")
0x825: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x826: IF (Stack[-1] == 0) GOTO 0x828; Pop(1)

0x827: Stack[-1] = (bool) 0
0x828: IF (Stack[-1] == 0) GOTO 0x82d; Pop(1)

0x829: Push("little_girl")
0x82a: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x82b: IF (Stack[-1] == 0) GOTO 0x82d; Pop(1)

0x82c: Stack[-1] = (bool) 0
0x82d: IF (Stack[-1] == 0) GOTO 0x832; Pop(1)

0x82e: Push("girl")
0x82f: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x830: IF (Stack[-1] == 0) GOTO 0x832; Pop(1)

0x831: Stack[-1] = (bool) 0
0x832: IF (Stack[-1] == 0) GOTO 0x837; Pop(1)

0x833: Push("dohodyaga")
0x834: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x835: IF (Stack[-1] == 0) GOTO 0x837; Pop(1)

0x836: Stack[-1] = (bool) 0
0x837: IF (Stack[-1] == 0) GOTO 0x83c; Pop(1)

0x838: Push("nudegirl")
0x839: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x83a: IF (Stack[-1] == 0) GOTO 0x83c; Pop(1)

0x83b: Stack[-1] = (bool) 0
0x83c: IF (Stack[-1] == 0) GOTO 0x83f; Pop(1)

0x83d: Stack[-5] = (bool) 1
0x83e: Return(); Pop(2)

0x83f: Push(Stack[-3])
0x840: IF (Stack[-1] == 0) GOTO 0x843; Pop(1)

0x841: Stack[-5] = (bool) 0
0x842: Return(); Pop(2)

0x843: Stack[-5] = (bool) 1
0x844: PushEmpty(bool)
0x845: Stack[-1] = (bool) 1
0x846: PushEmpty(bool)
0x847: Stack[-1] = (bool) 1
0x848: PushEmpty(bool)
0x849: Stack[-1] = (bool) 1
0x84a: PushEmpty(bool)
0x84b: Stack[-1] = (bool) 1
0x84c: PushEmpty(bool)
0x84d: Stack[-1] = (bool) 1
0x84e: Push("worker")
0x84f: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x850: IF (Stack[-1] == 0) GOTO 0x855; Pop(1)

0x851: Push("butcher")
0x852: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x853: IF (Stack[-1] == 0) GOTO 0x855; Pop(1)

0x854: Stack[-1] = (bool) 0
0x855: IF (Stack[-1] == 0) GOTO 0x85a; Pop(1)

0x856: Push("boy")
0x857: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x858: IF (Stack[-1] == 0) GOTO 0x85a; Pop(1)

0x859: Stack[-1] = (bool) 0
0x85a: IF (Stack[-1] == 0) GOTO 0x85f; Pop(1)

0x85b: Push("unosha")
0x85c: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x85d: IF (Stack[-1] == 0) GOTO 0x85f; Pop(1)

0x85e: Stack[-1] = (bool) 0
0x85f: IF (Stack[-1] == 0) GOTO 0x864; Pop(1)

0x860: Push("wasted_male")
0x861: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x862: IF (Stack[-1] == 0) GOTO 0x864; Pop(1)

0x863: Stack[-1] = (bool) 0
0x864: IF (Stack[-1] == 0) GOTO 0x869; Pop(1)

0x865: Push("alkash")
0x866: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x867: IF (Stack[-1] == 0) GOTO 0x869; Pop(1)

0x868: Stack[-1] = (bool) 0
0x869: IF (Stack[-1] == 0) GOTO 0x86e; Pop(1)

0x86a: Push("morlok")
0x86b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x86c: IF (Stack[-1] == 0) GOTO 0x86e; Pop(1)

0x86d: Stack[-5] = (bool) 0
0x86e: Return(); Pop(2)

0x86f: Push(GlobalVars[0])
0x870: PushEmpty(object)
0x871: Call2 0x6a2

0x872: Stack[-2] = Stack[-1]
0x873: Pop(1)
0x874: GlobalVars[0] = Stack[-1]; Pop(1)
0x875: Return(); Pop(0)

0x876: PushEmpty()
0x877: PushEmpty(object, bool)
0x878: Stack[-2] = Stack[-4]
0x879: Stack[-1] = Stack[-3]
0x87a: Push(-2, 3); TaskCall(3)
0x87b: Call2 0x1c7

0x87c: Pop(-2, 3); TaskReturn
0x87d: Pop(2)
0x87e: @ ResetAAS()
0x87f: Pop(0)
0x880: Return(); Pop(0)

0x881: PushEmpty(bool, bool)
0x882: Pop(0); Push((bool) Stack[-3] == 0)
0x883: IF (Stack[-1] == 0) GOTO 0x885; Pop(1)

0x884: Return(); Pop(2)

0x885: Push(GlobalVars[0])
0x886: @@ in(Stack[-2], Stack[-4])
0x887: Pop(1)
0x888: Pop(0); Push((bool) Stack[-1] == 0)
0x889: IF (Stack[-1] == 0) GOTO 0x88d; Pop(1)

0x88a: Push(GlobalVars[0])
0x88b: @@ add(Stack[-4])
0x88c: Pop(1)
0x88d: PushEmpty(bool, object)
0x88e: Stack[-1] = Stack[-5]
0x88f: Call2 0x49c

0x890: Pop(1)
0x891: IF (Stack[-1] == 0) GOTO 0x898; Pop(1)

0x892: PushEmpty(object)
0x893: Call2 0x677

0x894: Pop(0)
0x895: Push((float)0.0)
0x896: @ ReportReputationChange(Stack[-5], Stack[-2], Stack[-1])
0x897: Pop(2)
0x898: Return(); Pop(2)

0x899: PushEmpty()
0x89a: PushEmpty(object)
0x89b: Stack[-1] = Stack[-2]
0x89c: Call2 0x881

0x89d: Pop(1)
0x89e: PushEmpty(object, bool)
0x89f: Stack[-2] = Stack[-3]
0x8a0: Stack[-1] = (bool) 1
0x8a1: Call2 0x876

0x8a2: Pop(2)
0x8a3: Return(); Pop(0)

0x8a4: PushEmpty(bool, bool)
0x8a5: Push(GlobalVars[0])
0x8a6: @@ in(Stack[-2], Stack[-4])
0x8a7: Pop(1)
0x8a8: Push(Stack[-1])
0x8a9: IF (Stack[-1] == 0) GOTO 0x8b0; Pop(1)

0x8aa: PushEmpty(object, bool)
0x8ab: Stack[-2] = Stack[-5]
0x8ac: Stack[-1] = (bool) 1
0x8ad: Call2 0x876

0x8ae: Pop(2)
0x8af: GOTO 0x8b8

0x8b0: PushEmpty(object)
0x8b1: Stack[-1] = Stack[-4]
0x8b2: Push(-1, 2); TaskCall(2)
0x8b3: Call2 0x11d

0x8b4: Pop(-1, 2); TaskReturn
0x8b5: Pop(1)
0x8b6: @ ResetAAS()
0x8b7: Pop(0)
0x8b8: Return(); Pop(2)

0x8b9: PushEmpty()
0x8ba: PushEmpty(float, object)
0x8bb: Stack[-1] = Stack[-3]
0x8bc: Call2 0x48d

0x8bd: Pop(1)
0x8be: Push((float)40000.0)
0x8bf: Stack[-4] = Stack[-2] <= Stack[-1]; Pop(2);
0x8c0: Return(); Pop(0)

0x8c1: PushEmpty(float, string, float, float, string, float)
0x8c2: PushEmpty(bool, object)
0x8c3: Stack[-1] = Stack[-9]
0x8c4: Call2 0x535

0x8c5: Pop(1)
0x8c6: Pop(1); Push((bool) Stack[-1] == 0)
0x8c7: IF (Stack[-1] == 0) GOTO 0x8ca; Pop(1)

0x8c8: Stack[-8] = (bool) 0
0x8c9: Return(); Pop(6)

0x8ca: PushEmpty(bool, object)
0x8cb: Stack[-1] = Stack[-9]
0x8cc: Call2 0x49c

0x8cd: Pop(1)
0x8ce: IF (Stack[-1] == 0) GOTO 0x8d5; Pop(1)

0x8cf: Push("reputation")
0x8d0: @@ GetProperty(Stack[-1], Stack[-4])
0x8d1: Pop(1)
0x8d2: Push((float)0.33)
0x8d3: Stack[-9] = Stack[-4] < Stack[-1]; Pop(1);
0x8d4: Return(); Pop(6)

0x8d5: PushEmpty(bool, object, string)
0x8d6: Stack[-2] = Stack[-10]
0x8d7: Stack[-1] = "class"
0x8d8: Call2 0x4a1

0x8d9: Pop(2)
0x8da: Pop(1); Push((bool) Stack[-1] == 0)
0x8db: IF (Stack[-1] == 0) GOTO 0x8de; Pop(1)

0x8dc: Stack[-8] = (bool) 0
0x8dd: Return(); Pop(6)

0x8de: Push("class")
0x8df: @@ GetProperty(Stack[-1], Stack[-3])
0x8e0: Pop(1)
0x8e1: PushEmpty(bool)
0x8e2: Stack[-1] = (bool) 1
0x8e3: PushEmpty(bool)
0x8e4: Stack[-1] = (bool) 1
0x8e5: Push("bomber")
0x8e6: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x8e7: IF (Stack[-1] == 0) GOTO 0x8ec; Pop(1)

0x8e8: Push("hunter")
0x8e9: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x8ea: IF (Stack[-1] == 0) GOTO 0x8ec; Pop(1)

0x8eb: Stack[-1] = (bool) 0
0x8ec: IF (Stack[-1] == 0) GOTO 0x8f1; Pop(1)

0x8ed: Push("grabitel")
0x8ee: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x8ef: IF (Stack[-1] == 0) GOTO 0x8f1; Pop(1)

0x8f0: Stack[-1] = (bool) 0
0x8f1: IF (Stack[-1] == 0) GOTO 0x8f4; Pop(1)

0x8f2: Stack[-8] = (bool) 1
0x8f3: Return(); Pop(6)

0x8f4: PushEmpty(bool, object, string)
0x8f5: Stack[-2] = Stack[-10]
0x8f6: Stack[-1] = "disease"
0x8f7: Call2 0x4a1

0x8f8: Pop(2)
0x8f9: Pop(1); Push((bool) Stack[-1] == 0)
0x8fa: IF (Stack[-1] == 0) GOTO 0x8fd; Pop(1)

0x8fb: Stack[-8] = (bool) 0
0x8fc: Return(); Pop(6)

0x8fd: PushEmpty(bool)
0x8fe: Stack[-1] = (bool) 1
0x8ff: PushEmpty(bool, string)
0x900: Stack[-1] = Stack[-5]
0x901: Call2 0x620

0x902: Pop(1)
0x903: IF (Stack[-1] == 0) GOTO 0x908; Pop(1)

0x904: Push("dog")
0x905: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x906: IF (Stack[-1] == 0) GOTO 0x908; Pop(1)

0x907: Stack[-1] = (bool) 0
0x908: IF (Stack[-1] == 0) GOTO 0x90f; Pop(1)

0x909: Push("disease")
0x90a: @@ GetProperty(Stack[-1], Stack[-2])
0x90b: Pop(1)
0x90c: Push((int) 0)
0x90d: Stack[-9] = Stack[-2] > Stack[-1]; Pop(1);
0x90e: Return(); Pop(6)

0x90f: Stack[-8] = (bool) 0
0x910: Return(); Pop(6)

0x911: PushEmpty(bool, bool)
0x912: PushEmpty(bool, object)
0x913: Stack[-1] = Stack[-5]
0x914: Call2 0x535

0x915: Pop(1)
0x916: Pop(1); Push((bool) Stack[-1] == 0)
0x917: IF (Stack[-1] == 0) GOTO 0x91a; Pop(1)

0x918: Stack[-4] = (bool) 0
0x919: Return(); Pop(2)

0x91a: Push(GlobalVars[0])
0x91b: @@ in(Stack[-2], Stack[-4])
0x91c: Pop(1)
0x91d: Push(Stack[-1])
0x91e: IF (Stack[-1] == 0) GOTO 0x921; Pop(1)

0x91f: Stack[-4] = (bool) 1
0x920: Return(); Pop(2)

0x921: PushEmpty(bool, object)
0x922: Stack[-1] = Stack[-5]
0x923: Call2 0x8c1

0x924: Stack[-6] = Stack[-2]
0x925: Pop(2)
0x926: Return(); Pop(2)

0x927: PushEmpty()
0x928: PushEmpty(object)
0x929: Stack[-1] = Stack[-2]
0x92a: Call2 0x954

0x92b: Pop(1)
0x92c: Return(); Pop(0)

0x92d: PushEmpty(bool, bool)
0x92e: PushEmpty(bool, object, bool)
0x92f: Stack[-2] = Stack[-7]
0x930: Stack[-1] = !Stack[-6]; Pop(0);
0x931: Call2 0x7e7

0x932: Pop(2)
0x933: IF (Stack[-1] == 0) GOTO 0x945; Pop(1)

0x934: @ CanSee(Stack[-1], Stack[-5])
0x935: Pop(0)
0x936: PushEmpty(bool)
0x937: Stack[-1] = (bool) 1
0x938: Push(Stack[-2])
0x939: IF (Stack[-1] == 0) GOTO 0x942; Pop(1)

0x93a: PushEmpty(float, object)
0x93b: Stack[-1] = Stack[-8]
0x93c: Call2 0x48d

0x93d: Pop(1)
0x93e: Push((float)490000.0)
0x93f: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x940: IF (Stack[-1] == 0) GOTO 0x942; Pop(1)

0x941: Stack[-1] = (bool) 0
0x942: IF (Stack[-1] == 0) GOTO 0x945; Pop(1)

0x943: Stack[-6] = (bool) 1
0x944: Return(); Pop(2)

0x945: Stack[-6] = (bool) 0
0x946: Return(); Pop(2)

0x947: PushEmpty(bool, string, string)
0x948: Stack[-2] = "quest_d11_02"
0x949: Stack[-1] = "actor_unload"
0x94a: Call2 0x70a

0x94b: Pop(3)
0x94c: PushEmpty(object)
0x94d: Call2 0x677

0x94e: Pop(0)
0x94f: @ RemoveActor(Stack[-1])
0x950: Pop(1)
0x951: @ Hold()
0x952: Pop(0)
0x953: Return(); Pop(0)

0x954: PushEmpty()
0x955: PushEmpty(object)
0x956: Stack[-1] = Stack[-2]
0x957: Call2 0x8a4

0x958: Pop(1)
0x959: Return(); Pop(0)

0x95a: PushEmpty()
0x95b: PushEmpty(bool, string, string)
0x95c: Stack[-2] = "quest_d11_02"
0x95d: Stack[-1] = "soldier_dead"
0x95e: Call2 0x70a

0x95f: Pop(3)
0x960: PushEmpty(bool, object)
0x961: Stack[-1] = Stack[-3]
0x962: Call2 0x49c

0x963: Pop(1)
0x964: IF (Stack[-1] == 0) GOTO 0x96a; Pop(1)

0x965: PushEmpty(bool, object, float)
0x966: Stack[-2] = Stack[-4]
0x967: Stack[-1] = (float) 0.03
0x968: Call2 0x6cc

0x969: Pop(3)
0x96a: PushEmpty(object)
0x96b: Stack[-1] = Stack[-2]
0x96c: Call2 0x7ae

0x96d: Pop(1)
0x96e: Return(); Pop(0)

