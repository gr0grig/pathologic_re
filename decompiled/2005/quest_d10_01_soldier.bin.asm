GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	cleanup
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
	attack_on
	hunt
	attack_off
	@Stop hunt
	attack_begin1
	attack
	light-dynamic
	soldier_fire.xml
	shot
	scripted
	richochet.xml
	Material
	SetScriptProperty
	attack_end1
	in
	quest_d10_01
	soldier_fight
	fire
	bullet
	phys
	player
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
	reputation
	bomber
	hunter
	grabitel
	disease
	dog

Import:
	RemoveActor (1 args)
	Hold (0 args)
	StopGroup0 (0 args)
	sync (0 args)
	SetRTEnvelope (2 args)
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
	SetTimer (2 args)
	SetAttackState (1 args)
	CanSee (2 args)
	WaitForAnimEnd (1 args)
	Sleep (1 args)
	Trace (1 args)
	StopAnimation (0 args)
	ReportAttack (1 args)
	SendPlayerEnemy (2 args)
	GetGeometryLocator (4 args)
	GetScene (1 args)
	AddActorByType (6 args)
	Speak (1 args)
	RandVecCone3D (3 args)
	GetVictimMaterial (4 args)
	ReportHit (4 args)
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
	IsLoaded (1 args)
	AddItem (3 args)
	AddItem (4 args)
	IsExisting3DSound (2 args)
	Is3DSoundLoaded (2 args)
	PlayGlobalSound (2 args)
	self (1 args)
	CreateObjectSet (1 args)
	CreateFloatVector (1 args)
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

RunOp = 0x28d
RunTask = 4

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_26 Op = 0x0 Vars = (string)
		EVENT_5 Op = 0x14 Vars = ()
	GTASK_1  Params = 1
		EVENT_0 Op = 0x39 Vars = (object)
		EVENT_22 Op = 0xb8 Vars = (object, int, float, float)
		EVENT_16 Op = 0xba Vars = (object, string)
		EVENT_41 Op = 0xbc Vars = (object)
	GTASK_2 Vars = (object) Params = 1
		EVENT_41 Op = 0xde Vars = (object)
		EVENT_3 Op = 0xe7 Vars = (object)
		EVENT_4 Op = 0xf0 Vars = (object)
		EVENT_17 Op = 0xfc Vars = (object)
		EVENT_30 Op = 0x110 Vars = (object, object, bool)
		EVENT_1 Op = 0x11d Vars = (object)
		EVENT_7 Op = 0x12b Vars = (int)
	GTASK_3 Vars = (object, object, bool) Params = 2
		EVENT_3 Op = 0x1c6 Vars = (object)
		EVENT_1 Op = 0x1d4 Vars = (object)
		EVENT_17 Op = 0x263 Vars = (object)
		EVENT_30 Op = 0x27b Vars = (object, object, bool)
	GTASK_4 Vars = (cvector, cvector, bool) Params = 0
		EVENT_0 Op = 0x29b Vars = (object)
		EVENT_26 Op = 0x2a6 Vars = (string)
		EVENT_17 Op = 0x2bc Vars = (object)
		EVENT_30 Op = 0x2c3 Vars = (object, object, bool)
		EVENT_3 Op = 0x2c5 Vars = (object)
		EVENT_1 Op = 0x2e5 Vars = (object)

Events:
EVENT_22 Op = 0x646 Vars = (object, int, float, float)
EVENT_43 Op = 0x64e Vars = (object, int, float, float, cvector, cvector)
EVENT_16 Op = 0x658 Vars = (object, string)
EVENT_41 Op = 0x665 Vars = (object)
EVENT_6 Op = 0x7c6 Vars = ()

0x0: PushEmpty()
0x1: Push("cleanup")
0x2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x4: PushEmpty(object)
0x5: Call2 0x53b

0x6: Pop(0)
0x7: @ RemoveActor(Stack[-1])
0x8: Pop(1)
0x9: @ Hold()
0xa: Pop(0)
0xb: Return(); Pop(0)

0xc: @ Hold()
0xd: Pop(0)
0xe: PushEmpty(bool)
0xf: Call2 0x49c

0x10: Pop(0)
0x11: Pop(1); Push((bool) Stack[-1] == 0)
0x12: IF (Stack[-1] == 0) GOTO 0xc; Pop(1)

0x13: Return(); Pop(0)

0x14: @ StopGroup0()
0x15: Pop(0)
0x16: @ sync()
0x17: Pop(0)
0x18: Return(); Pop(0)

0x19: PushEmpty()
0x1a: PushEmpty(bool, object)
0x1b: Stack[-1] = Stack[-3]
0x1c: Call2 0x371

0x1d: Pop(1)
0x1e: IF (Stack[-1] == 0) GOTO 0x22; Pop(1)

0x1f: PushEmpty()
0x20: Call2 0x615

0x21: Pop(0)
0x22: PushEmpty()
0x23: Call2 0x5fd

0x24: Pop(0)
0x25: PushEmpty(object)
0x26: Stack[-1] = Stack[-2]
0x27: Call2 0x2a

0x28: Pop(1)
0x29: Return(); Pop(0)

0x2a: PushEmpty()
0x2b: EventDisable(0)
0x2c: PushEmpty(object)
0x2d: Stack[-1] = Stack[-2]
0x2e: Call2 0x43

0x2f: Pop(1)
0x30: Push((int) 50)
0x31: Push((int) 40)
0x32: @ SetRTEnvelope(Stack[-2], Stack[-1])
0x33: Pop(2)
0x34: EventEnable(0)
0x35: @ Hold()
0x36: Pop(0)
0x37: GOTO 0x35

0x38: Return(); Pop(0)

0x39: PushEmpty(bool, bool)
0x3a: @ IsOverrideActive(Stack[-1])
0x3b: Pop(0)
0x3c: Pop(0); Push((bool) Stack[-1] == 0)
0x3d: IF (Stack[-1] == 0) GOTO 0x42; Pop(1)

0x3e: PushEmpty(object)
0x3f: Stack[-1] = Stack[-4]
0x40: Call2 0x5c0

0x41: Pop(1)
0x42: Return(); Pop(2)

0x43: PushEmpty(cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector, cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector)
0x44: Pop(0); Push((bool) Stack[-21] == 0)
0x45: IF (Stack[-1] == 0) GOTO 0x4b; Pop(1)

0x46: PushEmpty(string)
0x47: Stack[-1] = "fdie"
0x48: Call2 0x9e

0x49: Pop(1)
0x4a: GOTO 0x9d

0x4b: @@ GetPosition(Stack[-10])
0x4c: Pop(0)
0x4d: @ GetPosition(Stack[-9])
0x4e: Pop(0)
0x4f: @ GetDirection(Stack[-8])
0x50: Pop(0)
0x51: Stack[-7] = Stack[-9] - Stack[-10]; Pop(0);
0x52: Push(CvectorIndex(Stack[-7], 0))
0x53: Push(CvectorIndex(Stack[-9], 0))
0x54: Pop(2); Push(Stack[-2] * Stack[-1]);
0x55: Push(CvectorIndex(Stack[-8], 2))
0x56: Push(CvectorIndex(Stack[-10], 2))
0x57: Pop(2); Push(Stack[-2] * Stack[-1]);
0x58: Pop(2); Push(Stack[-2] + Stack[-1]);
0x59: Push((int) 0)
0x5a: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x5b: IF (Stack[-1] == 0) GOTO 0x5e; Pop(1)

0x5c: Stack[-6] = "fdie"
0x5d: GOTO 0x5f

0x5e: Stack[-6] = "bdie"
0x5f: @ RemoveRTEnvelope()
0x60: Pop(0)
0x61: @ SetDeathState()
0x62: Pop(0)
0x63: @ Stop()
0x64: Pop(0)
0x65: @ StopAsync()
0x66: Pop(0)
0x67: Stack[-5] = Stack[-21]
0x68: Push("GetScriptProperty")
0x69: Push((int) 2)
0x6a: Pop(2); Push(IsFuncExist(Stack[-23], Stack[-2], Stack[-1]))
0x6b: IF (Stack[-1] == 0) GOTO 0x77; Pop(1)

0x6c: Push("Owner")
0x6d: @@ HasScriptProperty(Stack[-5], Stack[-1])
0x6e: Pop(1)
0x6f: Push(Stack[-4])
0x70: IF (Stack[-1] == 0) GOTO 0x77; Pop(1)

0x71: Push("Owner")
0x72: @@ GetScriptProperty(Stack[-6], Stack[-1])
0x73: Pop(1)
0x74: Pop(0); Push((bool) Stack[-5] == 0)
0x75: IF (Stack[-1] == 0) GOTO 0x77; Pop(1)

0x76: Stack[-5] = Stack[-21]
0x77: Push("@GetEyesHeight")
0x78: Push((int) 1)
0x79: Pop(2); Push(IsFuncExist(Stack[-7], Stack[-2], Stack[-1]))
0x7a: IF (Stack[-1] == 0) GOTO 0x86; Pop(1)

0x7b: @@ GetEyesHeight(Stack[-2])
0x7c: Pop(0)
0x7d: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x7e: Push(CvectorIndex(Stack[-1], 1))
0x7f: Stack[-1] = Stack[-3]
0x80: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x81: Push("head")
0x82: @ LookAsync(Stack[-22], Stack[-1], Stack[-2])
0x83: Pop(1)
0x84: Stack[-3] = (bool) 1
0x85: GOTO 0x87

0x86: Stack[-3] = (bool) 0
0x87: PushEmpty(string)
0x88: Stack[-1] = Stack[-7]
0x89: Call2 0x4bb

0x8a: Pop(1)
0x8b: Push("all")
0x8c: @ PlayAnimation(Stack[-1], Stack[-7])
0x8d: Pop(1)
0x8e: @ WaitForAnimEnd()
0x8f: Pop(0)
0x90: Push(Stack[-3])
0x91: IF (Stack[-1] == 0) GOTO 0x97; Pop(1)

0x92: @ StopAsync()
0x93: Pop(0)
0x94: Push("head")
0x95: @ UnlookAsync(Stack[-1])
0x96: Pop(1)
0x97: Push("all")
0x98: @ LockAnimationEnd(Stack[-1], Stack[-7])
0x99: Pop(1)
0x9a: @ RemoveEnvelope()
0x9b: Pop(0)
0x9c: Stack[-5] = 0
0x9d: Return(); Pop(20)

0x9e: PushEmpty()
0x9f: @ RemoveRTEnvelope()
0xa0: Pop(0)
0xa1: @ SetDeathState()
0xa2: Pop(0)
0xa3: @ Stop()
0xa4: Pop(0)
0xa5: @ StopAsync()
0xa6: Pop(0)
0xa7: @ StopSecondaryAnimation()
0xa8: Pop(0)
0xa9: PushEmpty(string)
0xaa: Stack[-1] = Stack[-2]
0xab: Call2 0x4bb

0xac: Pop(1)
0xad: Push("all")
0xae: @ PlayAnimation(Stack[-1], Stack[-2])
0xaf: Pop(1)
0xb0: @ WaitForAnimEnd()
0xb1: Pop(0)
0xb2: Push("all")
0xb3: @ LockAnimationEnd(Stack[-1], Stack[-2])
0xb4: Pop(1)
0xb5: @ RemoveEnvelope()
0xb6: Pop(0)
0xb7: Return(); Pop(0)

0xb8: PushEmpty()
0xb9: Return(); Pop(0)

0xba: PushEmpty()
0xbb: Return(); Pop(0)

0xbc: PushEmpty()
0xbd: Return(); Pop(0)

0xbe: PushEmpty(bool, bool)
0xbf: Stack[0 + Tasks[-1].StackPointer] = Stack[-3]
0xc0: @ Face(Stack[-3])
0xc1: Pop(0)
0xc2: Push((float)0.5)
0xc3: @ Sleep(Stack[-1], Stack[-2])
0xc4: Pop(1)
0xc5: PushEmpty(bool)
0xc6: Stack[-1] = (bool) 1
0xc7: Pop(0); Push((bool) Stack[-2] == 0)
0xc8: IF (Stack[-1] == 0) GOTO 0xd0; Pop(1)

0xc9: PushEmpty(bool, object)
0xca: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xcb: Call2 0x3f4

0xcc: Pop(1)
0xcd: Pop(1); Push((bool) Stack[-1] == 0)
0xce: IF (Stack[-1] == 0) GOTO 0xd0; Pop(1)

0xcf: Stack[-1] = (bool) 0
0xd0: IF (Stack[-1] == 0) GOTO 0xd2; Pop(1)

0xd1: GOTO 0xd3

0xd2: GOTO 0xc2

0xd3: @ StopAsync()
0xd4: Pop(0)
0xd5: Return(); Pop(2)

0xd6: @ StopAsync()
0xd7: Pop(0)
0xd8: Push((int) 100)
0xd9: @ KillTimer(Stack[-1])
0xda: Pop(1)
0xdb: @ StopGroup0()
0xdc: Pop(0)
0xdd: Return(); Pop(0)

0xde: PushEmpty()
0xdf: PushEmpty()
0xe0: Call2 0xd6

0xe1: Pop(0)
0xe2: PushEmpty(object)
0xe3: Stack[-1] = Stack[-2]
0xe4: Call2 0x665

0xe5: Pop(1)
0xe6: Return(); Pop(0)

0xe7: PushEmpty()
0xe8: Pop(0); Push((bool) Stack[-1] == Stack[0 + Tasks[-1].StackPointer])
0xe9: IF (Stack[-1] == 0) GOTO 0xef; Pop(1)

0xea: Push((int) 100)
0xeb: @ KillTimer(Stack[-1])
0xec: Pop(1)
0xed: @ Face(Stack[-0])
0xee: Pop(0)
0xef: Return(); Pop(0)

0xf0: PushEmpty()
0xf1: Pop(0); Push((bool) Stack[-1] == Stack[0 + Tasks[-1].StackPointer])
0xf2: IF (Stack[-1] == 0) GOTO 0xfb; Pop(1)

0xf3: Push((int) 100)
0xf4: Push((float)3.0)
0xf5: @ SetTimer(Stack[-2], Stack[-1])
0xf6: Pop(2)
0xf7: PushEmpty(object)
0xf8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf9: Call2 0x48a

0xfa: Pop(1)
0xfb: Return(); Pop(0)

0xfc: PushEmpty()
0xfd: PushEmpty(bool, object)
0xfe: Stack[-1] = Stack[-3]
0xff: Call2 0x3f4

0x100: Pop(1)
0x101: Pop(1); Push((bool) Stack[-1] == 0)
0x102: IF (Stack[-1] == 0) GOTO 0x108; Pop(1)

0x103: PushEmpty(object)
0x104: Stack[-1] = Stack[-2]
0x105: Call2 0x711

0x106: Pop(1)
0x107: Return(); Pop(0)

0x108: PushEmpty()
0x109: Call2 0xd6

0x10a: Pop(0)
0x10b: PushEmpty(object)
0x10c: Stack[-1] = Stack[-2]
0x10d: Call2 0x729

0x10e: Pop(1)
0x10f: Return(); Pop(0)

0x110: PushEmpty()
0x111: PushEmpty(bool, object, object, bool)
0x112: Stack[-3] = Stack[-7]
0x113: Stack[-2] = Stack[-6]
0x114: Stack[-1] = Stack[-5]
0x115: Call2 0x7a0

0x116: Pop(3)
0x117: IF (Stack[-1] == 0) GOTO 0x11c; Pop(1)

0x118: PushEmpty(object)
0x119: Stack[-1] = Stack[-4]
0x11a: Call2 0xfc

0x11b: Pop(1)
0x11c: Return(); Pop(0)

0x11d: PushEmpty()
0x11e: PushEmpty(bool, object)
0x11f: Stack[-1] = Stack[-3]
0x120: Call2 0x784

0x121: Pop(1)
0x122: IF (Stack[-1] == 0) GOTO 0x12a; Pop(1)

0x123: PushEmpty()
0x124: Call2 0xd6

0x125: Pop(0)
0x126: PushEmpty(object)
0x127: Stack[-1] = Stack[-2]
0x128: Call2 0x79a

0x129: Pop(1)
0x12a: Return(); Pop(0)

0x12b: PushEmpty()
0x12c: Push((int) 100)
0x12d: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x12e: IF (Stack[-1] == 0) GOTO 0x130; Pop(1)

0x12f: Return(); Pop(0)

0x130: Push((int) 100)
0x131: @ KillTimer(Stack[-1])
0x132: Pop(1)
0x133: @ StopGroup0()
0x134: Pop(0)
0x135: Return(); Pop(0)

0x136: PushEmpty(bool, bool, bool, bool)
0x137: Stack[0 + Tasks[-1].StackPointer] = Stack[-6]
0x138: PushEmpty(object)
0x139: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x13a: Call2 0x5a6

0x13b: Pop(1)
0x13c: PushEmpty()
0x13d: Call2 0x5af

0x13e: Pop(0)
0x13f: @ Face(Stack[-0])
0x140: Pop(0)
0x141: Push(Stack[-5])
0x142: IF (Stack[-1] == 0) GOTO 0x149; Pop(1)

0x143: Push("all")
0x144: Push("attack_on")
0x145: @ PlayAnimation(Stack[-2], Stack[-1])
0x146: Pop(2)
0x147: @ WaitForAnimEnd()
0x148: Pop(0)
0x149: Push("all")
0x14a: Push("attack_on")
0x14b: @ LockAnimationEnd(Stack[-2], Stack[-1])
0x14c: Pop(2)
0x14d: Push((bool) 1)
0x14e: @ SetAttackState(Stack[-1])
0x14f: Pop(1)
0x150: PushEmpty(bool, object)
0x151: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x152: Call2 0x3f4

0x153: Pop(1)
0x154: IF (Stack[-1] == 0) GOTO 0x1ba; Pop(1)

0x155: @ CanSee(Stack[-1], Stack[-0])
0x156: Pop(0)
0x157: Push(Stack[-1])
0x158: IF (Stack[-1] == 0) GOTO 0x161; Pop(1)

0x159: PushEmpty(object)
0x15a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x15b: Call2 0x5a6

0x15c: Pop(1)
0x15d: PushEmpty()
0x15e: Call2 0x1ea

0x15f: Pop(0)
0x160: GOTO 0x1b0

0x161: PushEmpty(object)
0x162: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x163: Call2 0x48a

0x164: Pop(1)
0x165: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x166: Push("all")
0x167: Push("hunt")
0x168: @ PlayAnimation(Stack[-2], Stack[-1])
0x169: Pop(2)
0x16a: @ WaitForAnimEnd(Stack[-2])
0x16b: Pop(0)
0x16c: Pop(0); Push((bool) Stack[-2] == 0)
0x16d: IF (Stack[-1] == 0) GOTO 0x178; Pop(1)

0x16e: Pop(0); Push(( Stack[1 + Tasks[-1].StackPointer] != 0 )
0x16f: IF (Stack[-1] == 0) GOTO 0x173; Pop(1)

0x170: PushEmpty()
0x171: Call2 0x1e5

0x172: Pop(0)
0x173: Push("all")
0x174: Push("attack_on")
0x175: @ LockAnimationEnd(Stack[-2], Stack[-1])
0x176: Pop(2)
0x177: GOTO 0x150

0x178: PushEmpty(bool, object)
0x179: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x17a: Call2 0x3f4

0x17b: Pop(1)
0x17c: Pop(1); Push((bool) Stack[-1] == 0)
0x17d: IF (Stack[-1] == 0) GOTO 0x17f; Pop(1)

0x17e: GOTO 0x1ba

0x17f: @ CanSee(Stack[-1], Stack[-0])
0x180: Pop(0)
0x181: Push(Stack[-1])
0x182: IF (Stack[-1] == 0) GOTO 0x18a; Pop(1)

0x183: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x184: @ Face(Stack[-0])
0x185: Pop(0)
0x186: PushEmpty()
0x187: Call2 0x1ea

0x188: Pop(0)
0x189: GOTO 0x1b0

0x18a: Push("all")
0x18b: Push("attack_on")
0x18c: @ LockAnimationEnd(Stack[-2], Stack[-1])
0x18d: Pop(2)
0x18e: Push((int) 3)
0x18f: @ Sleep(Stack[-1], Stack[-3])
0x190: Pop(1)
0x191: Pop(0); Push((bool) Stack[-2] == 0)
0x192: IF (Stack[-1] == 0) GOTO 0x19d; Pop(1)

0x193: Pop(0); Push(( Stack[1 + Tasks[-1].StackPointer] != 0 )
0x194: IF (Stack[-1] == 0) GOTO 0x198; Pop(1)

0x195: PushEmpty()
0x196: Call2 0x1e5

0x197: Pop(0)
0x198: Push("all")
0x199: Push("attack_on")
0x19a: @ LockAnimationEnd(Stack[-2], Stack[-1])
0x19b: Pop(2)
0x19c: GOTO 0x150

0x19d: PushEmpty(bool, object)
0x19e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x19f: Call2 0x3f4

0x1a0: Pop(1)
0x1a1: Pop(1); Push((bool) Stack[-1] == 0)
0x1a2: IF (Stack[-1] == 0) GOTO 0x1a4; Pop(1)

0x1a3: GOTO 0x1ba

0x1a4: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x1a5: @ CanSee(Stack[-1], Stack[-0])
0x1a6: Pop(0)
0x1a7: Push(Stack[-1])
0x1a8: IF (Stack[-1] == 0) GOTO 0x1af; Pop(1)

0x1a9: @ Face(Stack[-0])
0x1aa: Pop(0)
0x1ab: PushEmpty()
0x1ac: Call2 0x1ea

0x1ad: Pop(0)
0x1ae: GOTO 0x1b0

0x1af: GOTO 0x1ba

0x1b0: Pop(0); Push(( Stack[1 + Tasks[-1].StackPointer] != 0 )
0x1b1: IF (Stack[-1] == 0) GOTO 0x1b6; Pop(1)

0x1b2: PushEmpty()
0x1b3: Call2 0x1e5

0x1b4: Pop(0)
0x1b5: GOTO 0x1b9

0x1b6: Push((int) 2)
0x1b7: @ Sleep(Stack[-1])
0x1b8: Pop(1)
0x1b9: GOTO 0x150

0x1ba: Push((bool) 0)
0x1bb: @ SetAttackState(Stack[-1])
0x1bc: Pop(1)
0x1bd: @ StopAsync()
0x1be: Pop(0)
0x1bf: Push("all")
0x1c0: Push("attack_off")
0x1c1: @ PlayAnimation(Stack[-2], Stack[-1])
0x1c2: Pop(2)
0x1c3: @ WaitForAnimEnd()
0x1c4: Pop(0)
0x1c5: Return(); Pop(4)

0x1c6: PushEmpty()
0x1c7: PushEmpty(bool)
0x1c8: Stack[-1] = (bool) 0
0x1c9: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1ca: IF (Stack[-1] == 0) GOTO 0x1ce; Pop(1)

0x1cb: Pop(0); Push((bool) Stack[-2] == Stack[0 + Tasks[-1].StackPointer])
0x1cc: IF (Stack[-1] == 0) GOTO 0x1ce; Pop(1)

0x1cd: Stack[-1] = (bool) 1
0x1ce: IF (Stack[-1] == 0) GOTO 0x1d3; Pop(1)

0x1cf: PushEmpty(object)
0x1d0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1d1: Call2 0x48a

0x1d2: Pop(1)
0x1d3: Return(); Pop(0)

0x1d4: PushEmpty()
0x1d5: PushEmpty(bool)
0x1d6: Stack[-1] = (bool) 0
0x1d7: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1d8: IF (Stack[-1] == 0) GOTO 0x1dc; Pop(1)

0x1d9: Pop(0); Push((bool) Stack[-2] == Stack[0 + Tasks[-1].StackPointer])
0x1da: IF (Stack[-1] == 0) GOTO 0x1dc; Pop(1)

0x1db: Stack[-1] = (bool) 1
0x1dc: IF (Stack[-1] == 0) GOTO 0x1e4; Pop(1)

0x1dd: Push("@Stop hunt")
0x1de: @ Trace(Stack[-1])
0x1df: Pop(1)
0x1e0: @ StopAnimation()
0x1e1: Pop(0)
0x1e2: @ StopGroup0()
0x1e3: Pop(0)
0x1e4: Return(); Pop(0)

0x1e5: Stack[0 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer]
0x1e6: Stack[1 + Tasks[-1].StackPointer] = 0
0x1e7: @ Face(Stack[-0])
0x1e8: Pop(0)
0x1e9: Return(); Pop(0)

0x1ea: PushEmpty(cvector, cvector, bool, cvector, cvector, object, object, cvector, object, int, cvector, float, object, object, cvector, cvector, bool, cvector, cvector, object, object, cvector, object, int, cvector, float, object, object)
0x1eb: PushEmpty(object)
0x1ec: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1ed: Call2 0x5a6

0x1ee: Pop(1)
0x1ef: @ ReportAttack(Stack[-0])
0x1f0: Pop(0)
0x1f1: PushEmpty(bool, object)
0x1f2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1f3: Call2 0x371

0x1f4: Pop(1)
0x1f5: IF (Stack[-1] == 0) GOTO 0x1fb; Pop(1)

0x1f6: PushEmpty(object)
0x1f7: Call2 0x53b

0x1f8: Pop(0)
0x1f9: @ SendPlayerEnemy(Stack[-0], Stack[-1])
0x1fa: Pop(1)
0x1fb: @ GetDirection(Stack[-14])
0x1fc: Pop(0)
0x1fd: PushEmpty(cvector, object)
0x1fe: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1ff: Call2 0x35b

0x200: Stack[-15] = Stack[-2]
0x201: Pop(2)
0x202: PushEmpty(float, cvector, cvector)
0x203: Stack[-2] = Stack[-17]
0x204: Stack[-1] = Stack[-16]
0x205: Call2 0x57f

0x206: Pop(2)
0x207: Push((float)0.99939)
0x208: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x209: IF (Stack[-1] == 0) GOTO 0x20b; Pop(1)

0x20a: Return(); Pop(28)

0x20b: PushEmpty()
0x20c: Call2 0x5af

0x20d: Pop(0)
0x20e: Push("all")
0x20f: Push("attack_begin1")
0x210: @ PlayAnimation(Stack[-2], Stack[-1])
0x211: Pop(2)
0x212: Push("attack")
0x213: @ GetGeometryLocator(Stack[-1], Stack[-13], Stack[-12], Stack[-11])
0x214: Pop(1)
0x215: Push(Stack[-12])
0x216: IF (Stack[-1] == 0) GOTO 0x220; Pop(1)

0x217: @ GetScene(Stack[-8])
0x218: Pop(0)
0x219: Push("light-dynamic")
0x21a: Push("soldier_fire.xml")
0x21b: @ AddActorByType(Stack[-11], Stack[-2], Stack[-10], Stack[-13], Stack[-12], Stack[-1])
0x21c: Pop(2)
0x21d: Stack[-8] = 0
0x21e: Stack[-9] = 0
0x21f: GOTO 0x222

0x220: @ WaitForAnimEnd()
0x221: Pop(0)
0x222: Push("shot")
0x223: @ Speak(Stack[-1])
0x224: Pop(1)
0x225: @ GetDirection(Stack[-14])
0x226: Pop(0)
0x227: PushEmpty(cvector, object)
0x228: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x229: Call2 0x35b

0x22a: Stack[-15] = Stack[-2]
0x22b: Pop(2)
0x22c: Push(CvectorIndex(Stack[-13], 1))
0x22d: PushEmpty(float, object)
0x22e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x22f: Call2 0x495

0x230: Pop(1)
0x231: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x232: CvectorIndex(Stack[-14], 1) = Stack[-1];
0x233: Push((float)0.03491)
0x234: @ RandVecCone3D(Stack[-8], Stack[-14], Stack[-1])
0x235: Pop(1)
0x236: @ GetVictimMaterial(Stack[-7], Stack[-6], Stack[-5], Stack[-4])
0x237: Pop(0)
0x238: Pop(0); Push(( Stack[-6] != 0 )
0x239: IF (Stack[-1] == 0) GOTO 0x257; Pop(1)

0x23a: Pop(0); Push((bool) Stack[-6] == Stack[0 + Tasks[-1].StackPointer])
0x23b: IF (Stack[-1] == 0) GOTO 0x248; Pop(1)

0x23c: PushEmpty(float, object, float, int)
0x23d: Stack[-3] = Stack[0 + Tasks[-1].StackPointer]
0x23e: Stack[-2] = (float) 1.5
0x23f: Stack[-1] = (int) 1
0x240: Call2 0x382

0x241: Stack[-7] = Stack[-4]
0x242: Pop(4)
0x243: Push((int) 2)
0x244: Push((float)1.5)
0x245: @ ReportHit(Stack[-0], Stack[-2], Stack[-5], Stack[-1])
0x246: Pop(2)
0x247: GOTO 0x257

0x248: Push((int) -1)
0x249: Pop(1); Push((bool) Stack[-6] != Stack[-1])
0x24a: IF (Stack[-1] == 0) GOTO 0x257; Pop(1)

0x24b: @ GetScene(Stack[-2])
0x24c: Pop(0)
0x24d: Push("scripted")
0x24e: Push(CVector(0.0, 0.0, 1.0))
0x24f: Push("richochet.xml")
0x250: @ AddActorByType(Stack[-4], Stack[-3], Stack[-5], Stack[-7], Stack[-2], Stack[-1])
0x251: Pop(3)
0x252: Push("Material")
0x253: @@ SetScriptProperty(Stack[-1], Stack[-6])
0x254: Pop(1)
0x255: Stack[-1] = 0
0x256: Stack[-2] = 0
0x257: Push("all")
0x258: Push("attack_end1")
0x259: @ PlayAnimation(Stack[-2], Stack[-1])
0x25a: Pop(2)
0x25b: @ WaitForAnimEnd()
0x25c: Pop(0)
0x25d: Push("all")
0x25e: Push("attack_on")
0x25f: @ LockAnimationEnd(Stack[-2], Stack[-1])
0x260: Pop(2)
0x261: Return(); Pop(28)

0x262: Stack[-6] = 0
0x263: PushEmpty()
0x264: PushEmpty(bool, object)
0x265: Stack[-1] = Stack[-3]
0x266: Call2 0x3f4

0x267: Pop(1)
0x268: Pop(1); Push((bool) Stack[-1] == 0)
0x269: IF (Stack[-1] == 0) GOTO 0x26b; Pop(1)

0x26a: Return(); Pop(0)

0x26b: PushEmpty(object)
0x26c: Stack[-1] = Stack[-2]
0x26d: Call2 0x711

0x26e: Pop(1)
0x26f: Pop(0); Push((bool) Stack[-1] == Stack[0 + Tasks[-1].StackPointer])
0x270: IF (Stack[-1] == 0) GOTO 0x273; Pop(1)

0x271: Stack[1 + Tasks[-1].StackPointer] = 0
0x272: GOTO 0x27a

0x273: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x274: Push( Stack[2 + Tasks[-1].StackPointer] )
0x275: IF (Stack[-1] == 0) GOTO 0x27a; Pop(1)

0x276: @ StopAnimation()
0x277: Pop(0)
0x278: @ StopGroup0()
0x279: Pop(0)
0x27a: Return(); Pop(0)

0x27b: PushEmpty()
0x27c: PushEmpty(bool, object, object, bool)
0x27d: Stack[-3] = Stack[-7]
0x27e: Stack[-2] = Stack[-6]
0x27f: Stack[-1] = Stack[-5]
0x280: Call2 0x7a0

0x281: Pop(3)
0x282: IF (Stack[-1] == 0) GOTO 0x287; Pop(1)

0x283: PushEmpty(object)
0x284: Stack[-1] = Stack[-4]
0x285: Call2 0x263

0x286: Pop(1)
0x287: Return(); Pop(0)

0x288: PushEmpty()
0x289: PushEmpty()
0x28a: Call2 0x347

0x28b: Pop(0)
0x28c: Return(); Pop(0)

0x28d: PushEmpty(bool)
0x28e: Call2 0x49c

0x28f: Pop(0)
0x290: Pop(1); Push((bool) Stack[-1] == 0)
0x291: IF (Stack[-1] == 0) GOTO 0x297; Pop(1)

0x292: PushEmpty()
0x293: Push(-0, 0); TaskCall(0)
0x294: Call2 0xc

0x295: Pop(-0, 0); TaskReturn
0x296: Pop(0)
0x297: PushEmpty()
0x298: Call2 0x2dc

0x299: Pop(0)
0x29a: Return(); Pop(0)

0x29b: PushEmpty(bool, bool)
0x29c: Push(GlobalVars[0])
0x29d: @@ in(Stack[-2], Stack[-4])
0x29e: Pop(1)
0x29f: Pop(0); Push((bool) Stack[-1] == 0)
0x2a0: IF (Stack[-1] == 0) GOTO 0x2a5; Pop(1)

0x2a1: PushEmpty(object)
0x2a2: Stack[-1] = Stack[-4]
0x2a3: Call2 0x288

0x2a4: Pop(1)
0x2a5: Return(); Pop(2)

0x2a6: PushEmpty(object, object)
0x2a7: Push("attack")
0x2a8: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x2a9: IF (Stack[-1] == 0) GOTO 0x2b7; Pop(1)

0x2aa: PushEmpty(object)
0x2ab: Call2 0x36a

0x2ac: Stack[-2] = Stack[-1]
0x2ad: Pop(1)
0x2ae: PushEmpty()
0x2af: Call2 0x347

0x2b0: Pop(0)
0x2b1: PushEmpty(object)
0x2b2: Stack[-1] = Stack[-2]
0x2b3: Call2 0x729

0x2b4: Pop(1)
0x2b5: Stack[-1] = 0
0x2b6: GOTO 0x2bb

0x2b7: Push("cleanup")
0x2b8: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x2b9: IF (Stack[-1] == 0) GOTO 0x2bb; Pop(1)

0x2ba: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x2bb: Return(); Pop(2)

0x2bc: PushEmpty()
0x2bd: PushEmpty(bool, string, string)
0x2be: Stack[-2] = "quest_d10_01"
0x2bf: Stack[-1] = "soldier_fight"
0x2c0: Call2 0x59a

0x2c1: Pop(3)
0x2c2: Return(); Pop(0)

0x2c3: PushEmpty()
0x2c4: Return(); Pop(0)

0x2c5: PushEmpty(bool, bool)
0x2c6: PushEmpty(bool, object)
0x2c7: Stack[-1] = Stack[-5]
0x2c8: Call2 0x3f4

0x2c9: Pop(1)
0x2ca: Pop(1); Push((bool) Stack[-1] == 0)
0x2cb: IF (Stack[-1] == 0) GOTO 0x2cd; Pop(1)

0x2cc: Return(); Pop(2)

0x2cd: Push(GlobalVars[0])
0x2ce: @@ in(Stack[-2], Stack[-4])
0x2cf: Pop(1)
0x2d0: Push(Stack[-1])
0x2d1: IF (Stack[-1] == 0) GOTO 0x2db; Pop(1)

0x2d2: PushEmpty()
0x2d3: Call2 0x347

0x2d4: Pop(0)
0x2d5: PushEmpty(object)
0x2d6: Stack[-1] = Stack[-4]
0x2d7: Push(-1, 1); TaskCall(2)
0x2d8: Call2 0xbe

0x2d9: Pop(-1, 1); TaskReturn
0x2da: Pop(1)
0x2db: Return(); Pop(2)

0x2dc: PushEmpty()
0x2dd: Call2 0x6ff

0x2de: Pop(0)
0x2df: PushEmpty()
0x2e0: Call2 0x2f3

0x2e1: Pop(0)
0x2e2: GOTO 0x2df

0x2e3: Return(); Pop(0)

0x2e4: Return(); Pop(0)

0x2e5: PushEmpty()
0x2e6: PushEmpty(bool, object)
0x2e7: Stack[-1] = Stack[-3]
0x2e8: Call2 0x784

0x2e9: Pop(1)
0x2ea: IF (Stack[-1] == 0) GOTO 0x2f2; Pop(1)

0x2eb: PushEmpty()
0x2ec: Call2 0x347

0x2ed: Pop(0)
0x2ee: PushEmpty(object)
0x2ef: Stack[-1] = Stack[-2]
0x2f0: Call2 0x7ba

0x2f1: Pop(1)
0x2f2: Return(); Pop(0)

0x2f3: PushEmpty(int, bool, cvector, object, int, bool, cvector, object)
0x2f4: @ GetPFPosition(Stack[-1])
0x2f5: Pop(0)
0x2f6: @ GetDirection(Stack[-0])
0x2f7: Pop(0)
0x2f8: PushEmpty()
0x2f9: Call2 0x34c

0x2fa: Pop(0)
0x2fb: Push((int) 10)
0x2fc: @ irand(Stack[-5], Stack[-1])
0x2fd: Pop(1)
0x2fe: Push((int) 5)
0x2ff: Pop(1); Push(Stack[-5] + Stack[-1]);
0x300: @ Sleep(Stack[-1], Stack[-4])
0x301: Pop(1)
0x302: Push(Stack[-3])
0x303: IF (Stack[-1] == 0) GOTO 0x308; Pop(1)

0x304: PushEmpty()
0x305: Call2 0x2e4

0x306: Pop(0)
0x307: GOTO 0x345

0x308: PushEmpty()
0x309: Call2 0x34c

0x30a: Pop(0)
0x30b: @ GetPFPosition(Stack[-2])
0x30c: Pop(0)
0x30d: PushEmpty(float, cvector, cvector)
0x30e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x30f: Stack[-1] = Stack[-5]
0x310: Call2 0x54b

0x311: Pop(2)
0x312: Push((int) 40000)
0x313: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x314: IF (Stack[-1] == 0) GOTO 0x337; Pop(1)

0x315: @ FindPathTo(Stack[-1], Stack[-1])
0x316: Pop(0)
0x317: Pop(0); Push(( Stack[-1] != 0 )
0x318: IF (Stack[-1] == 0) GOTO 0x332; Pop(1)

0x319: @ RotatePath(Stack[-1], Stack[-3])
0x31a: Pop(0)
0x31b: Pop(0); Push((bool) Stack[-3] == 0)
0x31c: IF (Stack[-1] == 0) GOTO 0x31e; Pop(1)

0x31d: GOTO 0x344

0x31e: Push((bool) 0)
0x31f: @ FollowPath(Stack[-2], Stack[-1], Stack[-4])
0x320: Pop(1)
0x321: Pop(0); Push((bool) Stack[-3] == 0)
0x322: IF (Stack[-1] == 0) GOTO 0x324; Pop(1)

0x323: GOTO 0x344

0x324: Push(CvectorIndex(Stack[-0], 0))
0x325: Push(CvectorIndex(Stack[-0], 2))
0x326: @ Rotate(Stack[-2], Stack[-1], Stack[-5])
0x327: Pop(2)
0x328: Pop(0); Push((bool) Stack[-3] == 0)
0x329: IF (Stack[-1] == 0) GOTO 0x32b; Pop(1)

0x32a: GOTO 0x344

0x32b: @ WaitForAnimEnd(Stack[-3])
0x32c: Pop(0)
0x32d: Pop(0); Push((bool) Stack[-3] == 0)
0x32e: IF (Stack[-1] == 0) GOTO 0x330; Pop(1)

0x32f: GOTO 0x344

0x330: GOTO 0x345

0x331: GOTO 0x335

0x332: Push((int) 1)
0x333: @ Sleep(Stack[-1])
0x334: Pop(1)
0x335: Stack[-1] = 0
0x336: GOTO 0x344

0x337: Push(CvectorIndex(Stack[-0], 0))
0x338: Push(CvectorIndex(Stack[-0], 2))
0x339: @ Rotate(Stack[-2], Stack[-1], Stack[-5])
0x33a: Pop(2)
0x33b: Pop(0); Push((bool) Stack[-3] == 0)
0x33c: IF (Stack[-1] == 0) GOTO 0x33e; Pop(1)

0x33d: GOTO 0x344

0x33e: @ WaitForAnimEnd(Stack[-3])
0x33f: Pop(0)
0x340: Pop(0); Push((bool) Stack[-3] == 0)
0x341: IF (Stack[-1] == 0) GOTO 0x343; Pop(1)

0x342: GOTO 0x344

0x343: GOTO 0x345

0x344: GOTO 0x308

0x345: GOTO 0x2f8

0x346: Return(); Pop(8)

0x347: @ StopGroup0()
0x348: Pop(0)
0x349: @ Stop()
0x34a: Pop(0)
0x34b: Return(); Pop(0)

0x34c: Return(); Pop(0)

0x34d: PushEmpty()
0x34e: Push((int) 2)
0x34f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x350: IF (Stack[-1] == 0) GOTO 0x354; Pop(1)

0x351: Stack[-2] = "fire"
0x352: Return(); Pop(0)

0x353: GOTO 0x359

0x354: Push((int) 1)
0x355: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x356: IF (Stack[-1] == 0) GOTO 0x359; Pop(1)

0x357: Stack[-2] = "bullet"
0x358: Return(); Pop(0)

0x359: Stack[-2] = "phys"
0x35a: Return(); Pop(0)

0x35b: PushEmpty(cvector, cvector, cvector, cvector)
0x35c: @ GetPosition(Stack[-2])
0x35d: Pop(0)
0x35e: @@ GetPosition(Stack[-1])
0x35f: Pop(0)
0x360: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x361: Return(); Pop(4)

0x362: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x363: @ GetPosition(Stack[-3])
0x364: Pop(0)
0x365: @@ GetPosition(Stack[-2])
0x366: Pop(0)
0x367: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x368: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x369: Return(); Pop(6)

0x36a: PushEmpty(object, object)
0x36b: Push("player")
0x36c: @ FindActor(Stack[-2], Stack[-1])
0x36d: Pop(1)
0x36e: Stack[-3] = Stack[-1]
0x36f: Return(); Pop(2)

0x370: Stack[-1] = 0
0x371: PushEmpty(bool, bool)
0x372: @ IsPlayerActor(Stack[-3], Stack[-1])
0x373: Pop(0)
0x374: Stack[-4] = Stack[-1]
0x375: Return(); Pop(2)

0x376: PushEmpty(bool, bool)
0x377: Push("HasProperty")
0x378: Push((int) 2)
0x379: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x37a: Pop(1); Push((bool) Stack[-1] == 0)
0x37b: IF (Stack[-1] == 0) GOTO 0x37e; Pop(1)

0x37c: Stack[-5] = (bool) 0
0x37d: Return(); Pop(2)

0x37e: @@ HasProperty(Stack[-3], Stack[-1])
0x37f: Pop(0)
0x380: Stack[-5] = Stack[-1]
0x381: Return(); Pop(2)

0x382: PushEmpty(int, string, int, float, float, float, int, string, int, float, float, float)
0x383: PushEmpty(bool, object, string)
0x384: Stack[-2] = Stack[-18]
0x385: Stack[-1] = "health"
0x386: Call2 0x376

0x387: Pop(2)
0x388: Pop(1); Push((bool) Stack[-1] == 0)
0x389: IF (Stack[-1] == 0) GOTO 0x38c; Pop(1)

0x38a: Stack[-16] = (float) 0.0
0x38b: Return(); Pop(12)

0x38c: PushEmpty(bool, object, string)
0x38d: Stack[-2] = Stack[-18]
0x38e: Stack[-1] = "armor"
0x38f: Call2 0x376

0x390: Pop(2)
0x391: Pop(1); Push((bool) Stack[-1] == 0)
0x392: IF (Stack[-1] == 0) GOTO 0x395; Pop(1)

0x393: Stack[-6] = (int) 0
0x394: GOTO 0x398

0x395: Push("armor")
0x396: @@ GetProperty(Stack[-1], Stack[-7])
0x397: Pop(1)
0x398: Push("armor_")
0x399: PushEmpty(string, int)
0x39a: Stack[-1] = Stack[-16]
0x39b: Call2 0x34d

0x39c: Pop(1)
0x39d: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x39e: PushEmpty(bool, object, string)
0x39f: Stack[-2] = Stack[-18]
0x3a0: Stack[-1] = Stack[-8]
0x3a1: Call2 0x376

0x3a2: Pop(2)
0x3a3: Pop(1); Push((bool) Stack[-1] == 0)
0x3a4: IF (Stack[-1] == 0) GOTO 0x3a7; Pop(1)

0x3a5: Stack[-4] = (int) 0
0x3a6: GOTO 0x3a9

0x3a7: @@ GetProperty(Stack[-5], Stack[-4])
0x3a8: Pop(0)
0x3a9: PushEmpty(float, float, float)
0x3aa: Pop(0); Push(Stack[-9] + Stack[-7]);
0x3ab: Push((float)100.0)
0x3ac: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0x3ad: Stack[-1] = (int) 1
0x3ae: Call2 0x54f

0x3af: Stack[-6] = Stack[-3]
0x3b0: Pop(3)
0x3b1: Push("health")
0x3b2: @@ GetProperty(Stack[-1], Stack[-3])
0x3b3: Pop(1)
0x3b4: Push((int) 1)
0x3b5: Pop(1); Push(Stack[-1] - Stack[-4]);
0x3b6: Stack[-2] = Stack[-15] * Stack[-1]; Pop(1);
0x3b7: Push("health")
0x3b8: PushEmpty(float, float, float, float)
0x3b9: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0x3ba: Stack[-2] = (int) 0
0x3bb: Stack[-1] = (int) 1
0x3bc: Call2 0x556

0x3bd: Pop(3)
0x3be: @@ SetProperty(Stack[-2], Stack[-1])
0x3bf: Pop(2)
0x3c0: PushEmpty(bool, object)
0x3c1: Stack[-1] = Stack[-17]
0x3c2: Call2 0x371

0x3c3: Pop(1)
0x3c4: IF (Stack[-1] == 0) GOTO 0x3c9; Pop(1)

0x3c5: PushEmpty(float)
0x3c6: Stack[-1] = -Stack[-2]; Pop(0);
0x3c7: Call2 0x590

0x3c8: Pop(1)
0x3c9: Stack[-16] = Stack[-1]
0x3ca: Return(); Pop(12)

0x3cb: PushEmpty(bool, bool)
0x3cc: @@ IsDead(Stack[-1])
0x3cd: Pop(0)
0x3ce: Stack[-4] = Stack[-1]
0x3cf: Return(); Pop(2)

0x3d0: PushEmpty(object, object, object, object)
0x3d1: Pop(0); Push((bool) Stack[-5] == 0)
0x3d2: IF (Stack[-1] == 0) GOTO 0x3d5; Pop(1)

0x3d3: Stack[-6] = (bool) 0
0x3d4: Return(); Pop(4)

0x3d5: PushEmpty(bool)
0x3d6: Stack[-1] = (bool) 0
0x3d7: Push("IsDead")
0x3d8: Push((int) 1)
0x3d9: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x3da: IF (Stack[-1] == 0) GOTO 0x3e1; Pop(1)

0x3db: PushEmpty(bool, object)
0x3dc: Stack[-1] = Stack[-8]
0x3dd: Call2 0x3cb

0x3de: Pop(1)
0x3df: IF (Stack[-1] == 0) GOTO 0x3e1; Pop(1)

0x3e0: Stack[-1] = (bool) 1
0x3e1: IF (Stack[-1] == 0) GOTO 0x3e4; Pop(1)

0x3e2: Stack[-6] = (bool) 0
0x3e3: Return(); Pop(4)

0x3e4: @ GetScene(Stack[-2])
0x3e5: Pop(0)
0x3e6: Pop(0); Push((bool) Stack[-2] == 0)
0x3e7: IF (Stack[-1] == 0) GOTO 0x3ea; Pop(1)

0x3e8: Stack[-6] = (bool) 0
0x3e9: Return(); Pop(4)

0x3ea: @@ GetScene(Stack[-1])
0x3eb: Pop(0)
0x3ec: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x3ed: IF (Stack[-1] == 0) GOTO 0x3f0; Pop(1)

0x3ee: Stack[-6] = (bool) 0
0x3ef: Return(); Pop(4)

0x3f0: Stack[-6] = (bool) 1
0x3f1: Return(); Pop(4)

0x3f2: Stack[-1] = 0
0x3f3: Stack[-2] = 0
0x3f4: PushEmpty(int, int)
0x3f5: PushEmpty(bool, object)
0x3f6: Stack[-1] = Stack[-5]
0x3f7: Call2 0x3d0

0x3f8: Pop(1)
0x3f9: Pop(1); Push((bool) Stack[-1] == 0)
0x3fa: IF (Stack[-1] == 0) GOTO 0x3fd; Pop(1)

0x3fb: Stack[-4] = (bool) 0
0x3fc: Return(); Pop(2)

0x3fd: PushEmpty(bool, object, string)
0x3fe: Stack[-2] = Stack[-6]
0x3ff: Stack[-1] = "noaccess"
0x400: Call2 0x376

0x401: Pop(2)
0x402: Pop(1); Push((bool) Stack[-1] == 0)
0x403: IF (Stack[-1] == 0) GOTO 0x406; Pop(1)

0x404: Stack[-4] = (bool) 1
0x405: Return(); Pop(2)

0x406: Push("noaccess")
0x407: @@ GetProperty(Stack[-1], Stack[-2])
0x408: Pop(1)
0x409: Push((int) 0)
0x40a: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x40b: Return(); Pop(2)

0x40c: PushEmpty(bool, int, cvector, cvector, cvector, cvector, string, bool, int, cvector, cvector, cvector, cvector, string)
0x40d: Pop(0); Push((bool) Stack[-15] == 0)
0x40e: IF (Stack[-1] == 0) GOTO 0x410; Pop(1)

0x40f: Return(); Pop(14)

0x410: @ IsDead(Stack[-7])
0x411: Pop(0)
0x412: Push(Stack[-7])
0x413: IF (Stack[-1] == 0) GOTO 0x415; Pop(1)

0x414: Return(); Pop(14)

0x415: @ GetSecondaryAnimationType(Stack[-6])
0x416: Pop(0)
0x417: Push((int) 0)
0x418: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x419: IF (Stack[-1] == 0) GOTO 0x41b; Pop(1)

0x41a: Return(); Pop(14)

0x41b: @@ GetPosition(Stack[-5])
0x41c: Pop(0)
0x41d: @ GetPosition(Stack[-4])
0x41e: Pop(0)
0x41f: @ GetDirection(Stack[-3])
0x420: Pop(0)
0x421: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0x422: Push(CvectorIndex(Stack[-2], 0))
0x423: Push(CvectorIndex(Stack[-4], 0))
0x424: Pop(2); Push(Stack[-2] * Stack[-1]);
0x425: Push(CvectorIndex(Stack[-3], 2))
0x426: Push(CvectorIndex(Stack[-5], 2))
0x427: Pop(2); Push(Stack[-2] * Stack[-1]);
0x428: Pop(2); Push(Stack[-2] + Stack[-1]);
0x429: Push((int) 0)
0x42a: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x42b: IF (Stack[-1] == 0) GOTO 0x42e; Pop(1)

0x42c: Stack[-1] = "fhit"
0x42d: GOTO 0x42f

0x42e: Stack[-1] = "bhit"
0x42f: Push("hit_react")
0x430: Push("1")
0x431: Pop(1); Push(Stack[-3] + Stack[-1]);
0x432: Push("2")
0x433: Pop(1); Push(Stack[-4] + Stack[-1]);
0x434: Push((int) -10)
0x435: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x436: Pop(4)
0x437: Return(); Pop(14)

0x438: PushEmpty(cvector, object, int, bool, cvector, cvector, int, int, cvector, cvector, object, int, bool, cvector, cvector, int, int, cvector)
0x439: PushEmpty(bool)
0x43a: Stack[-1] = (bool) 0
0x43b: PushEmpty(bool)
0x43c: Stack[-1] = (bool) 0
0x43d: Push(Stack[-23])
0x43e: IF (Stack[-1] == 0) GOTO 0x443; Pop(1)

0x43f: Push((int) 4)
0x440: Pop(1); Push((bool) Stack[-23] != Stack[-1])
0x441: IF (Stack[-1] == 0) GOTO 0x443; Pop(1)

0x442: Stack[-1] = (bool) 1
0x443: IF (Stack[-1] == 0) GOTO 0x448; Pop(1)

0x444: Push((int) 5)
0x445: Pop(1); Push((bool) Stack[-22] != Stack[-1])
0x446: IF (Stack[-1] == 0) GOTO 0x448; Pop(1)

0x447: Stack[-1] = (bool) 1
0x448: IF (Stack[-1] == 0) GOTO 0x477; Pop(1)

0x449: PushEmpty(cvector, cvector)
0x44a: PushEmpty(cvector, object)
0x44b: Stack[-1] = Stack[-25]
0x44c: Call2 0x35b

0x44d: Stack[-3] = Stack[-2]
0x44e: Pop(2)
0x44f: Call2 0x541

0x450: Stack[-11] = Stack[-2]
0x451: Pop(2)
0x452: @ CreateVectorVector(Stack[-8])
0x453: Pop(0)
0x454: Stack[-7] = (int) 1
0x455: Push("hit")
0x456: Pop(1); Push(Stack[-1] + Stack[-8]);
0x457: @ GetGeometryLocator(Stack[-1], Stack[-7], Stack[-6], Stack[-5])
0x458: Pop(1)
0x459: Pop(0); Push((bool) Stack[-6] == 0)
0x45a: IF (Stack[-1] == 0) GOTO 0x45c; Pop(1)

0x45b: GOTO 0x465

0x45c: Pop(0); Push(Stack[-4] | Stack[-9]);
0x45d: Push((float)0.70711)
0x45e: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x45f: IF (Stack[-1] == 0) GOTO 0x462; Pop(1)

0x460: @@ add(Stack[-5])
0x461: Pop(0)
0x462: Push((int) 1)
0x463: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x464: GOTO 0x455

0x465: @@ size(Stack[-3])
0x466: Pop(0)
0x467: Push(Stack[-3])
0x468: IF (Stack[-1] == 0) GOTO 0x476; Pop(1)

0x469: @ irand(Stack[-2], Stack[-3])
0x46a: Pop(0)
0x46b: @@ get(Stack[-1], Stack[-2])
0x46c: Pop(0)
0x46d: PushEmpty(object, int, float, cvector, cvector)
0x46e: Stack[-5] = Stack[-26]
0x46f: Stack[-4] = Stack[-25]
0x470: Stack[-3] = Stack[-24]
0x471: Stack[-2] = Stack[-6]
0x472: Stack[-1] = -Stack[-14]; Pop(0);
0x473: Call2 0x47c

0x474: Pop(5)
0x475: Return(); Pop(18)

0x476: Stack[-8] = 0
0x477: PushEmpty(object)
0x478: Stack[-1] = Stack[-22]
0x479: Call2 0x40c

0x47a: Pop(1)
0x47b: Return(); Pop(18)

0x47c: PushEmpty(object, object, object, object)
0x47d: @ GetScene(Stack[-2])
0x47e: Pop(0)
0x47f: Push("scripted")
0x480: Push("blood_dir.xml")
0x481: @ AddActorByType(Stack[-3], Stack[-2], Stack[-4], Stack[-8], Stack[-7], Stack[-1])
0x482: Pop(2)
0x483: PushEmpty(object)
0x484: Stack[-1] = Stack[-10]
0x485: Call2 0x40c

0x486: Pop(1)
0x487: Return(); Pop(4)

0x488: Stack[-1] = 0
0x489: Stack[-2] = 0
0x48a: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x48b: @@ GetPosition(Stack[-3])
0x48c: Pop(0)
0x48d: @ GetPosition(Stack[-2])
0x48e: Pop(0)
0x48f: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0x490: Push(CvectorIndex(Stack[-1], 0))
0x491: Push(CvectorIndex(Stack[-2], 2))
0x492: @ RotateAsync(Stack[-2], Stack[-1])
0x493: Pop(2)
0x494: Return(); Pop(6)

0x495: PushEmpty(float, float, float, float)
0x496: @ GetEyesHeight(Stack[-2])
0x497: Pop(0)
0x498: @@ GetEyesHeight(Stack[-1])
0x499: Pop(0)
0x49a: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x49b: Return(); Pop(4)

0x49c: PushEmpty(bool, bool)
0x49d: @ IsLoaded(Stack[-1])
0x49e: Pop(0)
0x49f: Stack[-3] = Stack[-1]
0x4a0: Return(); Pop(2)

0x4a1: PushEmpty(bool, bool)
0x4a2: PushEmpty(bool, int, int)
0x4a3: Stack[-2] = Stack[-7]
0x4a4: Stack[-1] = Stack[-6]
0x4a5: Call2 0x561

0x4a6: Pop(2)
0x4a7: IF (Stack[-1] == 0) GOTO 0x4ab; Pop(1)

0x4a8: Push((int) 0)
0x4a9: @ AddItem(Stack[-2], Stack[-6], Stack[-1])
0x4aa: Pop(1)
0x4ab: Return(); Pop(2)

0x4ac: PushEmpty(int, bool, int, bool)
0x4ad: PushEmpty(bool, int, int)
0x4ae: Stack[-2] = Stack[-10]
0x4af: Stack[-1] = Stack[-9]
0x4b0: Call2 0x561

0x4b1: Pop(2)
0x4b2: IF (Stack[-1] == 0) GOTO 0x4ba; Pop(1)

0x4b3: @ irand(Stack[-2], Stack[-5])
0x4b4: Pop(0)
0x4b5: Push((int) 0)
0x4b6: Push((int) 1)
0x4b7: Pop(1); Push(Stack[-4] + Stack[-1]);
0x4b8: @ AddItem(Stack[-3], Stack[-10], Stack[-2], Stack[-1])
0x4b9: Pop(2)
0x4ba: Return(); Pop(4)

0x4bb: PushEmpty(bool, int, bool, int, bool, float, cvector, cvector, bool, int, bool, int, bool, float, cvector, cvector)
0x4bc: @ IsExisting3DSound(Stack[-8], Stack[-17])
0x4bd: Pop(0)
0x4be: Pop(0); Push((bool) Stack[-8] == 0)
0x4bf: IF (Stack[-1] == 0) GOTO 0x4d4; Pop(1)

0x4c0: Stack[-7] = (int) 0
0x4c1: Push((int) 1)
0x4c2: Pop(1); Push(Stack[-8] + Stack[-1]);
0x4c3: Pop(1); Push(Stack[-18] + Stack[-1]);
0x4c4: @ IsExisting3DSound(Stack[-7], Stack[-1])
0x4c5: Pop(1)
0x4c6: Pop(0); Push((bool) Stack[-6] == 0)
0x4c7: IF (Stack[-1] == 0) GOTO 0x4c9; Pop(1)

0x4c8: GOTO 0x4cc

0x4c9: Push((int) 1)
0x4ca: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x4cb: GOTO 0x4c1

0x4cc: Pop(0); Push((bool) Stack[-7] == 0)
0x4cd: IF (Stack[-1] == 0) GOTO 0x4cf; Pop(1)

0x4ce: Return(); Pop(16)

0x4cf: @ irand(Stack[-5], Stack[-7])
0x4d0: Pop(0)
0x4d1: Push((int) 1)
0x4d2: Pop(1); Push(Stack[-6] + Stack[-1]);
0x4d3: Stack[-18] = Stack[-18] + Stack[-1]; Pop(1);
0x4d4: @ Is3DSoundLoaded(Stack[-4], Stack[-17])
0x4d5: Pop(0)
0x4d6: Push(Stack[-4])
0x4d7: IF (Stack[-1] == 0) GOTO 0x4e3; Pop(1)

0x4d8: @ GetEyesHeight(Stack[-3])
0x4d9: Pop(0)
0x4da: @ GetDirection(Stack[-2])
0x4db: Pop(0)
0x4dc: Push((int) 50)
0x4dd: Stack[-2] = Stack[-3] * Stack[-1]; Pop(1);
0x4de: Push(CvectorIndex(Stack[-1], 1))
0x4df: Stack[-1] = Stack[-1] + Stack[-4]; Pop(0);
0x4e0: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x4e1: @ PlayGlobalSound(Stack[-17], Stack[-1])
0x4e2: Pop(0)
0x4e3: Return(); Pop(16)

0x4e4: PushEmpty()
0x4e5: Stack[-2] = (bool) 1
0x4e6: PushEmpty(bool)
0x4e7: Stack[-1] = (bool) 1
0x4e8: PushEmpty(bool)
0x4e9: Stack[-1] = (bool) 1
0x4ea: PushEmpty(bool)
0x4eb: Stack[-1] = (bool) 1
0x4ec: PushEmpty(bool)
0x4ed: Stack[-1] = (bool) 1
0x4ee: PushEmpty(bool)
0x4ef: Stack[-1] = (bool) 1
0x4f0: PushEmpty(bool)
0x4f1: Stack[-1] = (bool) 1
0x4f2: PushEmpty(bool)
0x4f3: Stack[-1] = (bool) 1
0x4f4: PushEmpty(bool)
0x4f5: Stack[-1] = (bool) 1
0x4f6: PushEmpty(bool)
0x4f7: Stack[-1] = (bool) 1
0x4f8: PushEmpty(bool)
0x4f9: Stack[-1] = (bool) 1
0x4fa: PushEmpty(bool)
0x4fb: Stack[-1] = (bool) 1
0x4fc: Push("woman")
0x4fd: Pop(1); Push((bool) Stack[-13] == Stack[-1])
0x4fe: IF (Stack[-1] == 0) GOTO 0x503; Pop(1)

0x4ff: Push("worker")
0x500: Pop(1); Push((bool) Stack[-13] == Stack[-1])
0x501: IF (Stack[-1] == 0) GOTO 0x503; Pop(1)

0x502: Stack[-1] = (bool) 0
0x503: IF (Stack[-1] == 0) GOTO 0x508; Pop(1)

0x504: Push("butcher")
0x505: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0x506: IF (Stack[-1] == 0) GOTO 0x508; Pop(1)

0x507: Stack[-1] = (bool) 0
0x508: IF (Stack[-1] == 0) GOTO 0x50d; Pop(1)

0x509: Push("wasted_girl")
0x50a: Pop(1); Push((bool) Stack[-11] == Stack[-1])
0x50b: IF (Stack[-1] == 0) GOTO 0x50d; Pop(1)

0x50c: Stack[-1] = (bool) 0
0x50d: IF (Stack[-1] == 0) GOTO 0x512; Pop(1)

0x50e: Push("boy")
0x50f: Pop(1); Push((bool) Stack[-10] == Stack[-1])
0x510: IF (Stack[-1] == 0) GOTO 0x512; Pop(1)

0x511: Stack[-1] = (bool) 0
0x512: IF (Stack[-1] == 0) GOTO 0x517; Pop(1)

0x513: Push("vaxxabitka")
0x514: Pop(1); Push((bool) Stack[-9] == Stack[-1])
0x515: IF (Stack[-1] == 0) GOTO 0x517; Pop(1)

0x516: Stack[-1] = (bool) 0
0x517: IF (Stack[-1] == 0) GOTO 0x51c; Pop(1)

0x518: Push("unosha")
0x519: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x51a: IF (Stack[-1] == 0) GOTO 0x51c; Pop(1)

0x51b: Stack[-1] = (bool) 0
0x51c: IF (Stack[-1] == 0) GOTO 0x521; Pop(1)

0x51d: Push("wasted_male")
0x51e: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x51f: IF (Stack[-1] == 0) GOTO 0x521; Pop(1)

0x520: Stack[-1] = (bool) 0
0x521: IF (Stack[-1] == 0) GOTO 0x526; Pop(1)

0x522: Push("alkash")
0x523: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x524: IF (Stack[-1] == 0) GOTO 0x526; Pop(1)

0x525: Stack[-1] = (bool) 0
0x526: IF (Stack[-1] == 0) GOTO 0x52b; Pop(1)

0x527: Push("dohodyaga")
0x528: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x529: IF (Stack[-1] == 0) GOTO 0x52b; Pop(1)

0x52a: Stack[-1] = (bool) 0
0x52b: IF (Stack[-1] == 0) GOTO 0x530; Pop(1)

0x52c: Push("vaxxabit")
0x52d: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x52e: IF (Stack[-1] == 0) GOTO 0x530; Pop(1)

0x52f: Stack[-1] = (bool) 0
0x530: IF (Stack[-1] == 0) GOTO 0x535; Pop(1)

0x531: Push("nudegirl")
0x532: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x533: IF (Stack[-1] == 0) GOTO 0x535; Pop(1)

0x534: Stack[-1] = (bool) 0
0x535: IF (Stack[-1] == 0) GOTO 0x53a; Pop(1)

0x536: Push("morlok")
0x537: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x538: IF (Stack[-1] == 0) GOTO 0x53a; Pop(1)

0x539: Stack[-2] = (bool) 0
0x53a: Return(); Pop(0)

0x53b: PushEmpty(object, object)
0x53c: @ self(Stack[-1])
0x53d: Pop(0)
0x53e: Stack[-3] = Stack[-1]
0x53f: Return(); Pop(2)

0x540: Stack[-1] = 0
0x541: PushEmpty(float, float)
0x542: Pop(0); Push(Stack[-3] | Stack[-3]);
0x543: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x544: Push((float)0.0)
0x545: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x546: IF (Stack[-1] == 0) GOTO 0x549; Pop(1)

0x547: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x548: Return(); Pop(2)

0x549: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x54a: Return(); Pop(2)

0x54b: PushEmpty(cvector, cvector)
0x54c: Stack[-1] = Stack[-3] - Stack[-4]; Pop(0);
0x54d: Stack[-5] = Stack[-1] | Stack[-1]; Pop(0);
0x54e: Return(); Pop(2)

0x54f: PushEmpty()
0x550: Pop(0); Push((bool) Stack[-2] < Stack[-1])
0x551: IF (Stack[-1] == 0) GOTO 0x554; Pop(1)

0x552: Stack[-3] = Stack[-2]
0x553: GOTO 0x555

0x554: Stack[-3] = Stack[-1]
0x555: Return(); Pop(0)

0x556: PushEmpty()
0x557: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x558: IF (Stack[-1] == 0) GOTO 0x55b; Pop(1)

0x559: Stack[-4] = Stack[-2]
0x55a: Return(); Pop(0)

0x55b: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x55c: IF (Stack[-1] == 0) GOTO 0x55f; Pop(1)

0x55d: Stack[-4] = Stack[-1]
0x55e: Return(); Pop(0)

0x55f: Stack[-4] = Stack[-3]
0x560: Return(); Pop(0)

0x561: PushEmpty(int, int)
0x562: @ irand(Stack[-1], Stack[-3])
0x563: Pop(0)
0x564: Stack[-5] = Stack[-1] < Stack[-4]; Pop(0);
0x565: Return(); Pop(2)

0x566: PushEmpty(object, object)
0x567: @ CreateObjectSet(Stack[-1])
0x568: Pop(0)
0x569: Stack[-3] = Stack[-1]
0x56a: Return(); Pop(2)

0x56b: Stack[-1] = 0
0x56c: PushEmpty()
0x56d: Push(CvectorIndex(Stack[-2], 0))
0x56e: Push(CvectorIndex(Stack[-2], 0))
0x56f: Pop(2); Push(Stack[-2] * Stack[-1]);
0x570: Push(CvectorIndex(Stack[-3], 2))
0x571: Push(CvectorIndex(Stack[-3], 2))
0x572: Pop(2); Push(Stack[-2] * Stack[-1]);
0x573: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x574: Return(); Pop(0)

0x575: PushEmpty()
0x576: Push(CvectorIndex(Stack[-1], 0))
0x577: Push(CvectorIndex(Stack[-2], 0))
0x578: Pop(2); Push(Stack[-2] * Stack[-1]);
0x579: Push(CvectorIndex(Stack[-2], 2))
0x57a: Push(CvectorIndex(Stack[-3], 2))
0x57b: Pop(2); Push(Stack[-2] * Stack[-1]);
0x57c: Pop(2); Push(Stack[-2] + Stack[-1]);
0x57d: Stack[-3] = Sqrt(Stack[-1]); Pop(1);
0x57e: Return(); Pop(0)

0x57f: PushEmpty()
0x580: PushEmpty(float, cvector, cvector)
0x581: Stack[-2] = Stack[-5]
0x582: Stack[-1] = Stack[-4]
0x583: Call2 0x56c

0x584: Pop(2)
0x585: PushEmpty(float, cvector)
0x586: Stack[-1] = Stack[-5]
0x587: Call2 0x575

0x588: Pop(1)
0x589: PushEmpty(float, cvector)
0x58a: Stack[-1] = Stack[-5]
0x58b: Call2 0x575

0x58c: Pop(1)
0x58d: Pop(2); Push(Stack[-2] * Stack[-1]);
0x58e: Stack[-5] = Stack[-2] / Stack[-1]; Pop(2);
0x58f: Return(); Pop(0)

0x590: PushEmpty(object, object)
0x591: @ CreateFloatVector(Stack[-1])
0x592: Pop(0)
0x593: @@ add(Stack[-3])
0x594: Pop(0)
0x595: Push((int) 15)
0x596: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x597: Pop(1)
0x598: Return(); Pop(2)

0x599: Stack[-1] = 0
0x59a: PushEmpty(object, object)
0x59b: @ FindActor(Stack[-1], Stack[-4])
0x59c: Pop(0)
0x59d: Pop(0); Push((bool) Stack[-1] == 0)
0x59e: IF (Stack[-1] == 0) GOTO 0x5a1; Pop(1)

0x59f: Stack[-5] = (bool) 0
0x5a0: Return(); Pop(2)

0x5a1: @ Trigger(Stack[-1], Stack[-3])
0x5a2: Pop(0)
0x5a3: Stack[-5] = (bool) 1
0x5a4: Return(); Pop(2)

0x5a5: Stack[-1] = 0
0x5a6: PushEmpty(bool, bool)
0x5a7: @ IsPlayerActor(Stack[-3], Stack[-1])
0x5a8: Pop(0)
0x5a9: Push(Stack[-1])
0x5aa: IF (Stack[-1] == 0) GOTO 0x5ae; Pop(1)

0x5ab: Push("attack")
0x5ac: @ PlayGlobalMusic(Stack[-1])
0x5ad: Pop(1)
0x5ae: Return(); Pop(2)

0x5af: PushEmpty(object, object)
0x5b0: @ GetScene(Stack[-1])
0x5b1: Pop(0)
0x5b2: Push("battle")
0x5b3: PushEmpty(object)
0x5b4: Call2 0x53b

0x5b5: Pop(0)
0x5b6: @ BroadcastMessage(Stack[-2], Stack[-1], Stack[-3])
0x5b7: Pop(2)
0x5b8: Return(); Pop(2)

0x5b9: Stack[-1] = 0
0x5ba: PushEmpty(int, int)
0x5bb: Push("branch")
0x5bc: @ GetVariable(Stack[-1], Stack[-2])
0x5bd: Pop(1)
0x5be: Stack[-3] = Stack[-1]
0x5bf: Return(); Pop(2)

0x5c0: PushEmpty()
0x5c1: PushEmpty(int)
0x5c2: Call2 0x5ba

0x5c3: Pop(0)
0x5c4: Push((int) 1)
0x5c5: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x5c6: IF (Stack[-1] == 0) GOTO 0x5ca; Pop(1)

0x5c7: @ WorkWithCorpse(Stack[-1])
0x5c8: Pop(0)
0x5c9: GOTO 0x5cc

0x5ca: @ Barter(Stack[-1])
0x5cb: Pop(0)
0x5cc: Return(); Pop(0)

0x5cd: PushEmpty(int, bool, int, bool)
0x5ce: Pop(0); Push((bool) Stack[-6] > Stack[-5])
0x5cf: IF (Stack[-1] == 0) GOTO 0x5d4; Pop(1)

0x5d0: Push("GenerateMoney: iMin > iMax")
0x5d1: @ Trace(Stack[-1])
0x5d2: Pop(1)
0x5d3: Return(); Pop(4)

0x5d4: Stack[-2] = (int) 0
0x5d5: Pop(0); Push((bool) Stack[-6] != Stack[-5])
0x5d6: IF (Stack[-1] == 0) GOTO 0x5db; Pop(1)

0x5d7: Pop(0); Push(Stack[-5] - Stack[-6]);
0x5d8: @ irand(Stack[-3], Stack[-1])
0x5d9: Pop(1)
0x5da: GOTO 0x5df

0x5db: Push((int) 0)
0x5dc: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x5dd: IF (Stack[-1] == 0) GOTO 0x5df; Pop(1)

0x5de: Return(); Pop(4)

0x5df: Stack[-2] = Stack[-2] + Stack[-6]; Pop(0);
0x5e0: Push((int) 0)
0x5e1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5e2: IF (Stack[-1] == 0) GOTO 0x5e4; Pop(1)

0x5e3: Return(); Pop(4)

0x5e4: PushEmpty(int, string)
0x5e5: Stack[-1] = "Money"
0x5e6: Call2 0x639

0x5e7: Pop(1)
0x5e8: Push((int) 0)
0x5e9: @ AddItem(Stack[-3], Stack[-2], Stack[-1], Stack[-4])
0x5ea: Pop(2)
0x5eb: Return(); Pop(4)

0x5ec: PushEmpty(object, int, bool, object, int, bool)
0x5ed: @ CreateInvItem(Stack[-3])
0x5ee: Pop(0)
0x5ef: @@ SetItemName(Stack[-7])
0x5f0: Pop(0)
0x5f1: Push("Organ")
0x5f2: Push((int) 1)
0x5f3: @@ SetProperty(Stack[-2], Stack[-1])
0x5f4: Pop(2)
0x5f5: @@ GetItemID(Stack[-2])
0x5f6: Pop(0)
0x5f7: Push((int) 0)
0x5f8: Push((int) 1)
0x5f9: @ AddItem(Stack[-3], Stack[-5], Stack[-2], Stack[-1])
0x5fa: Pop(2)
0x5fb: Return(); Pop(6)

0x5fc: Stack[-3] = 0
0x5fd: PushEmpty(int)
0x5fe: Call2 0x5ba

0x5ff: Pop(0)
0x600: Push((int) 1)
0x601: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x602: IF (Stack[-1] == 0) GOTO 0x604; Pop(1)

0x603: Return(); Pop(0)

0x604: PushEmpty(string)
0x605: Stack[-1] = "liver"
0x606: Call2 0x5ec

0x607: Pop(1)
0x608: PushEmpty(string)
0x609: Stack[-1] = "kidney"
0x60a: Call2 0x5ec

0x60b: Pop(1)
0x60c: PushEmpty(string)
0x60d: Stack[-1] = "heart"
0x60e: Call2 0x5ec

0x60f: Pop(1)
0x610: PushEmpty(string)
0x611: Stack[-1] = "blood"
0x612: Call2 0x5ec

0x613: Pop(1)
0x614: Return(); Pop(0)

0x615: PushEmpty(int, bool, int, bool)
0x616: Push((int) 0)
0x617: @ ClearSubContainer(Stack[-1])
0x618: Pop(1)
0x619: PushEmpty(int, int)
0x61a: Stack[-2] = (int) 500
0x61b: Stack[-1] = (int) 1000
0x61c: Call2 0x5cd

0x61d: Pop(2)
0x61e: PushEmpty(string, int, int, int)
0x61f: Stack[-4] = "rifle_ammo"
0x620: Stack[-3] = (int) 1
0x621: Stack[-2] = (int) 3
0x622: Stack[-1] = (int) 3
0x623: Call2 0x4ac

0x624: Pop(4)
0x625: PushEmpty(string, int, int, int)
0x626: Stack[-4] = "rusk"
0x627: Stack[-3] = (int) 1
0x628: Stack[-2] = (int) 3
0x629: Stack[-1] = (int) 2
0x62a: Call2 0x4ac

0x62b: Pop(4)
0x62c: PushEmpty(string, int, int)
0x62d: Stack[-3] = "bandage"
0x62e: Stack[-2] = (int) 1
0x62f: Stack[-1] = (int) 6
0x630: Call2 0x4a1

0x631: Pop(3)
0x632: PushEmpty(string, int, int)
0x633: Stack[-3] = "tourniquet"
0x634: Stack[-2] = (int) 1
0x635: Stack[-1] = (int) 6
0x636: Call2 0x4a1

0x637: Pop(3)
0x638: Return(); Pop(4)

0x639: PushEmpty(int, int)
0x63a: @ GetInvItemByName(Stack[-1], Stack[-3])
0x63b: Pop(0)
0x63c: Stack[-4] = Stack[-1]
0x63d: Return(); Pop(2)

0x63e: PushEmpty()
0x63f: PushEmpty(object)
0x640: Stack[-1] = Stack[-2]
0x641: Push(-1, 0); TaskCall(1)
0x642: Call2 0x19

0x643: Pop(-1, 0); TaskReturn
0x644: Pop(1)
0x645: Return(); Pop(0)

0x646: PushEmpty()
0x647: PushEmpty(object, int, float)
0x648: Stack[-3] = Stack[-7]
0x649: Stack[-2] = Stack[-6]
0x64a: Stack[-1] = Stack[-5]
0x64b: Call2 0x438

0x64c: Pop(3)
0x64d: Return(); Pop(0)

0x64e: PushEmpty()
0x64f: PushEmpty(object, int, float, cvector, cvector)
0x650: Stack[-5] = Stack[-11]
0x651: Stack[-4] = Stack[-10]
0x652: Stack[-3] = Stack[-9]
0x653: Stack[-2] = Stack[-7]
0x654: Stack[-1] = Stack[-6]
0x655: Call2 0x47c

0x656: Pop(5)
0x657: Return(); Pop(0)

0x658: PushEmpty(float, float)
0x659: Push("health")
0x65a: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x65b: IF (Stack[-1] == 0) GOTO 0x664; Pop(1)

0x65c: Push("health")
0x65d: @ GetProperty(Stack[-1], Stack[-2])
0x65e: Pop(1)
0x65f: Push((int) 0)
0x660: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x661: IF (Stack[-1] == 0) GOTO 0x664; Pop(1)

0x662: @ SignalDeath(Stack[-4])
0x663: Pop(0)
0x664: Return(); Pop(2)

0x665: PushEmpty()
0x666: PushEmpty(bool, object)
0x667: Stack[-1] = Stack[-3]
0x668: Call2 0x371

0x669: Pop(1)
0x66a: IF (Stack[-1] == 0) GOTO 0x672; Pop(1)

0x66b: PushEmpty(object)
0x66c: Call2 0x53b

0x66d: Pop(0)
0x66e: Push((float)0.0)
0x66f: Push((bool) 1)
0x670: @ ReportReputationChange(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x671: Pop(3)
0x672: PushEmpty(object)
0x673: Stack[-1] = Stack[-2]
0x674: Call2 0x7ce

0x675: Pop(1)
0x676: Return(); Pop(0)

0x677: PushEmpty(string, string)
0x678: PushEmpty(bool, object, string)
0x679: Stack[-2] = Stack[-7]
0x67a: Stack[-1] = "class"
0x67b: Call2 0x376

0x67c: Pop(2)
0x67d: Pop(1); Push((bool) Stack[-1] == 0)
0x67e: IF (Stack[-1] == 0) GOTO 0x681; Pop(1)

0x67f: Stack[-5] = (bool) 0
0x680: Return(); Pop(2)

0x681: Push("class")
0x682: @@ GetProperty(Stack[-1], Stack[-2])
0x683: Pop(1)
0x684: PushEmpty(bool)
0x685: Stack[-1] = (bool) 1
0x686: PushEmpty(bool)
0x687: Stack[-1] = (bool) 1
0x688: PushEmpty(bool)
0x689: Stack[-1] = (bool) 1
0x68a: PushEmpty(bool)
0x68b: Stack[-1] = (bool) 1
0x68c: PushEmpty(bool)
0x68d: Stack[-1] = (bool) 1
0x68e: PushEmpty(bool)
0x68f: Stack[-1] = (bool) 1
0x690: PushEmpty(bool)
0x691: Stack[-1] = (bool) 1
0x692: PushEmpty(bool)
0x693: Stack[-1] = (bool) 1
0x694: PushEmpty(bool)
0x695: Stack[-1] = (bool) 1
0x696: PushEmpty(bool)
0x697: Stack[-1] = (bool) 1
0x698: Push("patrol")
0x699: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0x69a: IF (Stack[-1] == 0) GOTO 0x69f; Pop(1)

0x69b: Push("sanitar")
0x69c: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0x69d: IF (Stack[-1] == 0) GOTO 0x69f; Pop(1)

0x69e: Stack[-1] = (bool) 0
0x69f: IF (Stack[-1] == 0) GOTO 0x6a4; Pop(1)

0x6a0: Push("soldier")
0x6a1: Pop(1); Push((bool) Stack[-11] == Stack[-1])
0x6a2: IF (Stack[-1] == 0) GOTO 0x6a4; Pop(1)

0x6a3: Stack[-1] = (bool) 0
0x6a4: IF (Stack[-1] == 0) GOTO 0x6a9; Pop(1)

0x6a5: Push("woman")
0x6a6: Pop(1); Push((bool) Stack[-10] == Stack[-1])
0x6a7: IF (Stack[-1] == 0) GOTO 0x6a9; Pop(1)

0x6a8: Stack[-1] = (bool) 0
0x6a9: IF (Stack[-1] == 0) GOTO 0x6ae; Pop(1)

0x6aa: Push("wasted_girl")
0x6ab: Pop(1); Push((bool) Stack[-9] == Stack[-1])
0x6ac: IF (Stack[-1] == 0) GOTO 0x6ae; Pop(1)

0x6ad: Stack[-1] = (bool) 0
0x6ae: IF (Stack[-1] == 0) GOTO 0x6b3; Pop(1)

0x6af: Push("vaxxabitka")
0x6b0: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x6b1: IF (Stack[-1] == 0) GOTO 0x6b3; Pop(1)

0x6b2: Stack[-1] = (bool) 0
0x6b3: IF (Stack[-1] == 0) GOTO 0x6b8; Pop(1)

0x6b4: Push("vaxxabit")
0x6b5: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x6b6: IF (Stack[-1] == 0) GOTO 0x6b8; Pop(1)

0x6b7: Stack[-1] = (bool) 0
0x6b8: IF (Stack[-1] == 0) GOTO 0x6bd; Pop(1)

0x6b9: Push("little_girl")
0x6ba: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x6bb: IF (Stack[-1] == 0) GOTO 0x6bd; Pop(1)

0x6bc: Stack[-1] = (bool) 0
0x6bd: IF (Stack[-1] == 0) GOTO 0x6c2; Pop(1)

0x6be: Push("girl")
0x6bf: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x6c0: IF (Stack[-1] == 0) GOTO 0x6c2; Pop(1)

0x6c1: Stack[-1] = (bool) 0
0x6c2: IF (Stack[-1] == 0) GOTO 0x6c7; Pop(1)

0x6c3: Push("dohodyaga")
0x6c4: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x6c5: IF (Stack[-1] == 0) GOTO 0x6c7; Pop(1)

0x6c6: Stack[-1] = (bool) 0
0x6c7: IF (Stack[-1] == 0) GOTO 0x6cc; Pop(1)

0x6c8: Push("nudegirl")
0x6c9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6ca: IF (Stack[-1] == 0) GOTO 0x6cc; Pop(1)

0x6cb: Stack[-1] = (bool) 0
0x6cc: IF (Stack[-1] == 0) GOTO 0x6cf; Pop(1)

0x6cd: Stack[-5] = (bool) 1
0x6ce: Return(); Pop(2)

0x6cf: Push(Stack[-3])
0x6d0: IF (Stack[-1] == 0) GOTO 0x6d3; Pop(1)

0x6d1: Stack[-5] = (bool) 0
0x6d2: Return(); Pop(2)

0x6d3: Stack[-5] = (bool) 1
0x6d4: PushEmpty(bool)
0x6d5: Stack[-1] = (bool) 1
0x6d6: PushEmpty(bool)
0x6d7: Stack[-1] = (bool) 1
0x6d8: PushEmpty(bool)
0x6d9: Stack[-1] = (bool) 1
0x6da: PushEmpty(bool)
0x6db: Stack[-1] = (bool) 1
0x6dc: PushEmpty(bool)
0x6dd: Stack[-1] = (bool) 1
0x6de: Push("worker")
0x6df: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x6e0: IF (Stack[-1] == 0) GOTO 0x6e5; Pop(1)

0x6e1: Push("butcher")
0x6e2: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x6e3: IF (Stack[-1] == 0) GOTO 0x6e5; Pop(1)

0x6e4: Stack[-1] = (bool) 0
0x6e5: IF (Stack[-1] == 0) GOTO 0x6ea; Pop(1)

0x6e6: Push("boy")
0x6e7: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x6e8: IF (Stack[-1] == 0) GOTO 0x6ea; Pop(1)

0x6e9: Stack[-1] = (bool) 0
0x6ea: IF (Stack[-1] == 0) GOTO 0x6ef; Pop(1)

0x6eb: Push("unosha")
0x6ec: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x6ed: IF (Stack[-1] == 0) GOTO 0x6ef; Pop(1)

0x6ee: Stack[-1] = (bool) 0
0x6ef: IF (Stack[-1] == 0) GOTO 0x6f4; Pop(1)

0x6f0: Push("wasted_male")
0x6f1: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x6f2: IF (Stack[-1] == 0) GOTO 0x6f4; Pop(1)

0x6f3: Stack[-1] = (bool) 0
0x6f4: IF (Stack[-1] == 0) GOTO 0x6f9; Pop(1)

0x6f5: Push("alkash")
0x6f6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6f7: IF (Stack[-1] == 0) GOTO 0x6f9; Pop(1)

0x6f8: Stack[-1] = (bool) 0
0x6f9: IF (Stack[-1] == 0) GOTO 0x6fe; Pop(1)

0x6fa: Push("morlok")
0x6fb: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6fc: IF (Stack[-1] == 0) GOTO 0x6fe; Pop(1)

0x6fd: Stack[-5] = (bool) 0
0x6fe: Return(); Pop(2)

0x6ff: Push(GlobalVars[0])
0x700: PushEmpty(object)
0x701: Call2 0x566

0x702: Stack[-2] = Stack[-1]
0x703: Pop(1)
0x704: GlobalVars[0] = Stack[-1]; Pop(1)
0x705: Return(); Pop(0)

0x706: PushEmpty()
0x707: PushEmpty(object, bool)
0x708: Stack[-2] = Stack[-4]
0x709: Stack[-1] = Stack[-3]
0x70a: Push(-2, 3); TaskCall(3)
0x70b: Call2 0x136

0x70c: Pop(-2, 3); TaskReturn
0x70d: Pop(2)
0x70e: @ ResetAAS()
0x70f: Pop(0)
0x710: Return(); Pop(0)

0x711: PushEmpty(bool, bool)
0x712: Pop(0); Push((bool) Stack[-3] == 0)
0x713: IF (Stack[-1] == 0) GOTO 0x715; Pop(1)

0x714: Return(); Pop(2)

0x715: Push(GlobalVars[0])
0x716: @@ in(Stack[-2], Stack[-4])
0x717: Pop(1)
0x718: Pop(0); Push((bool) Stack[-1] == 0)
0x719: IF (Stack[-1] == 0) GOTO 0x71d; Pop(1)

0x71a: Push(GlobalVars[0])
0x71b: @@ add(Stack[-4])
0x71c: Pop(1)
0x71d: PushEmpty(bool, object)
0x71e: Stack[-1] = Stack[-5]
0x71f: Call2 0x371

0x720: Pop(1)
0x721: IF (Stack[-1] == 0) GOTO 0x728; Pop(1)

0x722: PushEmpty(object)
0x723: Call2 0x53b

0x724: Pop(0)
0x725: Push((float)0.0)
0x726: @ ReportReputationChange(Stack[-5], Stack[-2], Stack[-1])
0x727: Pop(2)
0x728: Return(); Pop(2)

0x729: PushEmpty()
0x72a: PushEmpty(object)
0x72b: Stack[-1] = Stack[-2]
0x72c: Call2 0x711

0x72d: Pop(1)
0x72e: PushEmpty(object, bool)
0x72f: Stack[-2] = Stack[-3]
0x730: Stack[-1] = (bool) 1
0x731: Call2 0x706

0x732: Pop(2)
0x733: Return(); Pop(0)

0x734: PushEmpty(float, string, float, float, string, float)
0x735: PushEmpty(bool, object)
0x736: Stack[-1] = Stack[-9]
0x737: Call2 0x3f4

0x738: Pop(1)
0x739: Pop(1); Push((bool) Stack[-1] == 0)
0x73a: IF (Stack[-1] == 0) GOTO 0x73d; Pop(1)

0x73b: Stack[-8] = (bool) 0
0x73c: Return(); Pop(6)

0x73d: PushEmpty(bool, object)
0x73e: Stack[-1] = Stack[-9]
0x73f: Call2 0x371

0x740: Pop(1)
0x741: IF (Stack[-1] == 0) GOTO 0x748; Pop(1)

0x742: Push("reputation")
0x743: @@ GetProperty(Stack[-1], Stack[-4])
0x744: Pop(1)
0x745: Push((float)0.33)
0x746: Stack[-9] = Stack[-4] < Stack[-1]; Pop(1);
0x747: Return(); Pop(6)

0x748: PushEmpty(bool, object, string)
0x749: Stack[-2] = Stack[-10]
0x74a: Stack[-1] = "class"
0x74b: Call2 0x376

0x74c: Pop(2)
0x74d: Pop(1); Push((bool) Stack[-1] == 0)
0x74e: IF (Stack[-1] == 0) GOTO 0x751; Pop(1)

0x74f: Stack[-8] = (bool) 0
0x750: Return(); Pop(6)

0x751: Push("class")
0x752: @@ GetProperty(Stack[-1], Stack[-3])
0x753: Pop(1)
0x754: PushEmpty(bool)
0x755: Stack[-1] = (bool) 1
0x756: PushEmpty(bool)
0x757: Stack[-1] = (bool) 1
0x758: Push("bomber")
0x759: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x75a: IF (Stack[-1] == 0) GOTO 0x75f; Pop(1)

0x75b: Push("hunter")
0x75c: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x75d: IF (Stack[-1] == 0) GOTO 0x75f; Pop(1)

0x75e: Stack[-1] = (bool) 0
0x75f: IF (Stack[-1] == 0) GOTO 0x764; Pop(1)

0x760: Push("grabitel")
0x761: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x762: IF (Stack[-1] == 0) GOTO 0x764; Pop(1)

0x763: Stack[-1] = (bool) 0
0x764: IF (Stack[-1] == 0) GOTO 0x767; Pop(1)

0x765: Stack[-8] = (bool) 1
0x766: Return(); Pop(6)

0x767: PushEmpty(bool, object, string)
0x768: Stack[-2] = Stack[-10]
0x769: Stack[-1] = "disease"
0x76a: Call2 0x376

0x76b: Pop(2)
0x76c: Pop(1); Push((bool) Stack[-1] == 0)
0x76d: IF (Stack[-1] == 0) GOTO 0x770; Pop(1)

0x76e: Stack[-8] = (bool) 0
0x76f: Return(); Pop(6)

0x770: PushEmpty(bool)
0x771: Stack[-1] = (bool) 1
0x772: PushEmpty(bool, string)
0x773: Stack[-1] = Stack[-5]
0x774: Call2 0x4e4

0x775: Pop(1)
0x776: IF (Stack[-1] == 0) GOTO 0x77b; Pop(1)

0x777: Push("dog")
0x778: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x779: IF (Stack[-1] == 0) GOTO 0x77b; Pop(1)

0x77a: Stack[-1] = (bool) 0
0x77b: IF (Stack[-1] == 0) GOTO 0x782; Pop(1)

0x77c: Push("disease")
0x77d: @@ GetProperty(Stack[-1], Stack[-2])
0x77e: Pop(1)
0x77f: Push((int) 0)
0x780: Stack[-9] = Stack[-2] > Stack[-1]; Pop(1);
0x781: Return(); Pop(6)

0x782: Stack[-8] = (bool) 0
0x783: Return(); Pop(6)

0x784: PushEmpty(bool, bool)
0x785: PushEmpty(bool, object)
0x786: Stack[-1] = Stack[-5]
0x787: Call2 0x3f4

0x788: Pop(1)
0x789: Pop(1); Push((bool) Stack[-1] == 0)
0x78a: IF (Stack[-1] == 0) GOTO 0x78d; Pop(1)

0x78b: Stack[-4] = (bool) 0
0x78c: Return(); Pop(2)

0x78d: Push(GlobalVars[0])
0x78e: @@ in(Stack[-2], Stack[-4])
0x78f: Pop(1)
0x790: Push(Stack[-1])
0x791: IF (Stack[-1] == 0) GOTO 0x794; Pop(1)

0x792: Stack[-4] = (bool) 1
0x793: Return(); Pop(2)

0x794: PushEmpty(bool, object)
0x795: Stack[-1] = Stack[-5]
0x796: Call2 0x734

0x797: Stack[-6] = Stack[-2]
0x798: Pop(2)
0x799: Return(); Pop(2)

0x79a: PushEmpty()
0x79b: PushEmpty(object)
0x79c: Stack[-1] = Stack[-2]
0x79d: Call2 0x7ba

0x79e: Pop(1)
0x79f: Return(); Pop(0)

0x7a0: PushEmpty(bool, bool)
0x7a1: PushEmpty(bool, object, bool)
0x7a2: Stack[-2] = Stack[-7]
0x7a3: Stack[-1] = !Stack[-6]; Pop(0);
0x7a4: Call2 0x677

0x7a5: Pop(2)
0x7a6: IF (Stack[-1] == 0) GOTO 0x7b8; Pop(1)

0x7a7: @ CanSee(Stack[-1], Stack[-5])
0x7a8: Pop(0)
0x7a9: PushEmpty(bool)
0x7aa: Stack[-1] = (bool) 1
0x7ab: Push(Stack[-2])
0x7ac: IF (Stack[-1] == 0) GOTO 0x7b5; Pop(1)

0x7ad: PushEmpty(float, object)
0x7ae: Stack[-1] = Stack[-8]
0x7af: Call2 0x362

0x7b0: Pop(1)
0x7b1: Push((float)490000.0)
0x7b2: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x7b3: IF (Stack[-1] == 0) GOTO 0x7b5; Pop(1)

0x7b4: Stack[-1] = (bool) 0
0x7b5: IF (Stack[-1] == 0) GOTO 0x7b8; Pop(1)

0x7b6: Stack[-6] = (bool) 1
0x7b7: Return(); Pop(2)

0x7b8: Stack[-6] = (bool) 0
0x7b9: Return(); Pop(2)

0x7ba: PushEmpty(bool, bool)
0x7bb: Push(GlobalVars[0])
0x7bc: @@ in(Stack[-2], Stack[-4])
0x7bd: Pop(1)
0x7be: Push(Stack[-1])
0x7bf: IF (Stack[-1] == 0) GOTO 0x7c5; Pop(1)

0x7c0: PushEmpty(object, bool)
0x7c1: Stack[-2] = Stack[-5]
0x7c2: Stack[-1] = (bool) 1
0x7c3: Call2 0x706

0x7c4: Pop(2)
0x7c5: Return(); Pop(2)

0x7c6: PushEmpty(object)
0x7c7: Call2 0x53b

0x7c8: Pop(0)
0x7c9: @ RemoveActor(Stack[-1])
0x7ca: Pop(1)
0x7cb: @ Hold()
0x7cc: Pop(0)
0x7cd: Return(); Pop(0)

0x7ce: PushEmpty()
0x7cf: PushEmpty(object)
0x7d0: Stack[-1] = Stack[-2]
0x7d1: Call2 0x63e

0x7d2: Pop(1)
0x7d3: Return(); Pop(0)

