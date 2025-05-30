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
	PlayGlobalSound (4 args)
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

RunOp = 0x290
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
		EVENT_17 Op = 0x266 Vars = (object)
		EVENT_30 Op = 0x27e Vars = (object, object, bool)
	GTASK_4 Vars = (cvector, cvector, bool) Params = 0
		EVENT_0 Op = 0x29e Vars = (object)
		EVENT_26 Op = 0x2a9 Vars = (string)
		EVENT_17 Op = 0x2bf Vars = (object)
		EVENT_30 Op = 0x2c6 Vars = (object, object, bool)
		EVENT_3 Op = 0x2c8 Vars = (object)
		EVENT_1 Op = 0x2e8 Vars = (object)

Events:
EVENT_22 Op = 0x650 Vars = (object, int, float, float)
EVENT_43 Op = 0x658 Vars = (object, int, float, float, cvector, cvector)
EVENT_16 Op = 0x662 Vars = (object, string)
EVENT_41 Op = 0x66f Vars = (object)
EVENT_6 Op = 0x7d0 Vars = ()

0x0: PushEmpty()
0x1: Push("cleanup")
0x2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x4: PushEmpty(object)
0x5: Call2 0x53e

0x6: Pop(0)
0x7: @ RemoveActor(Stack[-1])
0x8: Pop(1)
0x9: @ Hold()
0xa: Pop(0)
0xb: Return(); Pop(0)

0xc: @ Hold()
0xd: Pop(0)
0xe: PushEmpty(bool)
0xf: Call2 0x49f

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
0x1c: Call2 0x374

0x1d: Pop(1)
0x1e: IF (Stack[-1] == 0) GOTO 0x22; Pop(1)

0x1f: PushEmpty()
0x20: Call2 0x61f

0x21: Pop(0)
0x22: PushEmpty()
0x23: Call2 0x607

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
0x40: Call2 0x5ca

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
0x89: Call2 0x4be

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
0xab: Call2 0x4be

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
0xcb: Call2 0x3f7

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
0xe4: Call2 0x66f

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
0xf9: Call2 0x48d

0xfa: Pop(1)
0xfb: Return(); Pop(0)

0xfc: PushEmpty()
0xfd: PushEmpty(bool, object)
0xfe: Stack[-1] = Stack[-3]
0xff: Call2 0x3f7

0x100: Pop(1)
0x101: Pop(1); Push((bool) Stack[-1] == 0)
0x102: IF (Stack[-1] == 0) GOTO 0x108; Pop(1)

0x103: PushEmpty(object)
0x104: Stack[-1] = Stack[-2]
0x105: Call2 0x71b

0x106: Pop(1)
0x107: Return(); Pop(0)

0x108: PushEmpty()
0x109: Call2 0xd6

0x10a: Pop(0)
0x10b: PushEmpty(object)
0x10c: Stack[-1] = Stack[-2]
0x10d: Call2 0x733

0x10e: Pop(1)
0x10f: Return(); Pop(0)

0x110: PushEmpty()
0x111: PushEmpty(bool, object, object, bool)
0x112: Stack[-3] = Stack[-7]
0x113: Stack[-2] = Stack[-6]
0x114: Stack[-1] = Stack[-5]
0x115: Call2 0x7aa

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
0x120: Call2 0x78e

0x121: Pop(1)
0x122: IF (Stack[-1] == 0) GOTO 0x12a; Pop(1)

0x123: PushEmpty()
0x124: Call2 0xd6

0x125: Pop(0)
0x126: PushEmpty(object)
0x127: Stack[-1] = Stack[-2]
0x128: Call2 0x7a4

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
0x13a: Call2 0x5b0

0x13b: Pop(1)
0x13c: PushEmpty()
0x13d: Call2 0x5b9

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
0x152: Call2 0x3f7

0x153: Pop(1)
0x154: IF (Stack[-1] == 0) GOTO 0x1ba; Pop(1)

0x155: @ CanSee(Stack[-1], Stack[-0])
0x156: Pop(0)
0x157: Push(Stack[-1])
0x158: IF (Stack[-1] == 0) GOTO 0x161; Pop(1)

0x159: PushEmpty(object)
0x15a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x15b: Call2 0x5b0

0x15c: Pop(1)
0x15d: PushEmpty()
0x15e: Call2 0x1ea

0x15f: Pop(0)
0x160: GOTO 0x1b0

0x161: PushEmpty(object)
0x162: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x163: Call2 0x48d

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
0x17a: Call2 0x3f7

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
0x19f: Call2 0x3f7

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
0x1d1: Call2 0x48d

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
0x1ed: Call2 0x5b0

0x1ee: Pop(1)
0x1ef: @ ReportAttack(Stack[-0])
0x1f0: Pop(0)
0x1f1: PushEmpty(bool, object)
0x1f2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1f3: Call2 0x374

0x1f4: Pop(1)
0x1f5: IF (Stack[-1] == 0) GOTO 0x1fb; Pop(1)

0x1f6: PushEmpty(object)
0x1f7: Call2 0x53e

0x1f8: Pop(0)
0x1f9: @ SendPlayerEnemy(Stack[-0], Stack[-1])
0x1fa: Pop(1)
0x1fb: @ GetDirection(Stack[-14])
0x1fc: Pop(0)
0x1fd: PushEmpty(cvector, object)
0x1fe: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1ff: Call2 0x35e

0x200: Stack[-15] = Stack[-2]
0x201: Pop(2)
0x202: PushEmpty(float, cvector, cvector)
0x203: Stack[-2] = Stack[-17]
0x204: Stack[-1] = Stack[-16]
0x205: Call2 0x582

0x206: Pop(2)
0x207: Push((float)0.99939)
0x208: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x209: IF (Stack[-1] == 0) GOTO 0x20b; Pop(1)

0x20a: Return(); Pop(28)

0x20b: PushEmpty()
0x20c: Call2 0x5b9

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
0x223: Push(CVector(0.0, 150.0, 0.0))
0x224: Push((int) 800)
0x225: Push((int) 100000)
0x226: @ PlayGlobalSound(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x227: Pop(4)
0x228: @ GetDirection(Stack[-14])
0x229: Pop(0)
0x22a: PushEmpty(cvector, object)
0x22b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x22c: Call2 0x35e

0x22d: Stack[-15] = Stack[-2]
0x22e: Pop(2)
0x22f: Push(CvectorIndex(Stack[-13], 1))
0x230: PushEmpty(float, object)
0x231: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x232: Call2 0x498

0x233: Pop(1)
0x234: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x235: CvectorIndex(Stack[-14], 1) = Stack[-1];
0x236: Push((float)0.03491)
0x237: @ RandVecCone3D(Stack[-8], Stack[-14], Stack[-1])
0x238: Pop(1)
0x239: @ GetVictimMaterial(Stack[-7], Stack[-6], Stack[-5], Stack[-4])
0x23a: Pop(0)
0x23b: Pop(0); Push(( Stack[-6] != 0 )
0x23c: IF (Stack[-1] == 0) GOTO 0x25a; Pop(1)

0x23d: Pop(0); Push((bool) Stack[-6] == Stack[0 + Tasks[-1].StackPointer])
0x23e: IF (Stack[-1] == 0) GOTO 0x24b; Pop(1)

0x23f: PushEmpty(float, object, float, int)
0x240: Stack[-3] = Stack[0 + Tasks[-1].StackPointer]
0x241: Stack[-2] = (float) 1.5
0x242: Stack[-1] = (int) 1
0x243: Call2 0x385

0x244: Stack[-7] = Stack[-4]
0x245: Pop(4)
0x246: Push((int) 2)
0x247: Push((float)1.5)
0x248: @ ReportHit(Stack[-0], Stack[-2], Stack[-5], Stack[-1])
0x249: Pop(2)
0x24a: GOTO 0x25a

0x24b: Push((int) -1)
0x24c: Pop(1); Push((bool) Stack[-6] != Stack[-1])
0x24d: IF (Stack[-1] == 0) GOTO 0x25a; Pop(1)

0x24e: @ GetScene(Stack[-2])
0x24f: Pop(0)
0x250: Push("scripted")
0x251: Push(CVector(0.0, 0.0, 1.0))
0x252: Push("richochet.xml")
0x253: @ AddActorByType(Stack[-4], Stack[-3], Stack[-5], Stack[-7], Stack[-2], Stack[-1])
0x254: Pop(3)
0x255: Push("Material")
0x256: @@ SetScriptProperty(Stack[-1], Stack[-6])
0x257: Pop(1)
0x258: Stack[-1] = 0
0x259: Stack[-2] = 0
0x25a: Push("all")
0x25b: Push("attack_end1")
0x25c: @ PlayAnimation(Stack[-2], Stack[-1])
0x25d: Pop(2)
0x25e: @ WaitForAnimEnd()
0x25f: Pop(0)
0x260: Push("all")
0x261: Push("attack_on")
0x262: @ LockAnimationEnd(Stack[-2], Stack[-1])
0x263: Pop(2)
0x264: Return(); Pop(28)

0x265: Stack[-6] = 0
0x266: PushEmpty()
0x267: PushEmpty(bool, object)
0x268: Stack[-1] = Stack[-3]
0x269: Call2 0x3f7

0x26a: Pop(1)
0x26b: Pop(1); Push((bool) Stack[-1] == 0)
0x26c: IF (Stack[-1] == 0) GOTO 0x26e; Pop(1)

0x26d: Return(); Pop(0)

0x26e: PushEmpty(object)
0x26f: Stack[-1] = Stack[-2]
0x270: Call2 0x71b

0x271: Pop(1)
0x272: Pop(0); Push((bool) Stack[-1] == Stack[0 + Tasks[-1].StackPointer])
0x273: IF (Stack[-1] == 0) GOTO 0x276; Pop(1)

0x274: Stack[1 + Tasks[-1].StackPointer] = 0
0x275: GOTO 0x27d

0x276: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x277: Push( Stack[2 + Tasks[-1].StackPointer] )
0x278: IF (Stack[-1] == 0) GOTO 0x27d; Pop(1)

0x279: @ StopAnimation()
0x27a: Pop(0)
0x27b: @ StopGroup0()
0x27c: Pop(0)
0x27d: Return(); Pop(0)

0x27e: PushEmpty()
0x27f: PushEmpty(bool, object, object, bool)
0x280: Stack[-3] = Stack[-7]
0x281: Stack[-2] = Stack[-6]
0x282: Stack[-1] = Stack[-5]
0x283: Call2 0x7aa

0x284: Pop(3)
0x285: IF (Stack[-1] == 0) GOTO 0x28a; Pop(1)

0x286: PushEmpty(object)
0x287: Stack[-1] = Stack[-4]
0x288: Call2 0x266

0x289: Pop(1)
0x28a: Return(); Pop(0)

0x28b: PushEmpty()
0x28c: PushEmpty()
0x28d: Call2 0x34a

0x28e: Pop(0)
0x28f: Return(); Pop(0)

0x290: PushEmpty(bool)
0x291: Call2 0x49f

0x292: Pop(0)
0x293: Pop(1); Push((bool) Stack[-1] == 0)
0x294: IF (Stack[-1] == 0) GOTO 0x29a; Pop(1)

0x295: PushEmpty()
0x296: Push(-0, 0); TaskCall(0)
0x297: Call2 0xc

0x298: Pop(-0, 0); TaskReturn
0x299: Pop(0)
0x29a: PushEmpty()
0x29b: Call2 0x2df

0x29c: Pop(0)
0x29d: Return(); Pop(0)

0x29e: PushEmpty(bool, bool)
0x29f: Push(GlobalVars[0])
0x2a0: @@ in(Stack[-2], Stack[-4])
0x2a1: Pop(1)
0x2a2: Pop(0); Push((bool) Stack[-1] == 0)
0x2a3: IF (Stack[-1] == 0) GOTO 0x2a8; Pop(1)

0x2a4: PushEmpty(object)
0x2a5: Stack[-1] = Stack[-4]
0x2a6: Call2 0x28b

0x2a7: Pop(1)
0x2a8: Return(); Pop(2)

0x2a9: PushEmpty(object, object)
0x2aa: Push("attack")
0x2ab: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x2ac: IF (Stack[-1] == 0) GOTO 0x2ba; Pop(1)

0x2ad: PushEmpty(object)
0x2ae: Call2 0x36d

0x2af: Stack[-2] = Stack[-1]
0x2b0: Pop(1)
0x2b1: PushEmpty()
0x2b2: Call2 0x34a

0x2b3: Pop(0)
0x2b4: PushEmpty(object)
0x2b5: Stack[-1] = Stack[-2]
0x2b6: Call2 0x733

0x2b7: Pop(1)
0x2b8: Stack[-1] = 0
0x2b9: GOTO 0x2be

0x2ba: Push("cleanup")
0x2bb: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x2bc: IF (Stack[-1] == 0) GOTO 0x2be; Pop(1)

0x2bd: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x2be: Return(); Pop(2)

0x2bf: PushEmpty()
0x2c0: PushEmpty(bool, string, string)
0x2c1: Stack[-2] = "quest_d10_01"
0x2c2: Stack[-1] = "soldier_fight"
0x2c3: Call2 0x5a4

0x2c4: Pop(3)
0x2c5: Return(); Pop(0)

0x2c6: PushEmpty()
0x2c7: Return(); Pop(0)

0x2c8: PushEmpty(bool, bool)
0x2c9: PushEmpty(bool, object)
0x2ca: Stack[-1] = Stack[-5]
0x2cb: Call2 0x3f7

0x2cc: Pop(1)
0x2cd: Pop(1); Push((bool) Stack[-1] == 0)
0x2ce: IF (Stack[-1] == 0) GOTO 0x2d0; Pop(1)

0x2cf: Return(); Pop(2)

0x2d0: Push(GlobalVars[0])
0x2d1: @@ in(Stack[-2], Stack[-4])
0x2d2: Pop(1)
0x2d3: Push(Stack[-1])
0x2d4: IF (Stack[-1] == 0) GOTO 0x2de; Pop(1)

0x2d5: PushEmpty()
0x2d6: Call2 0x34a

0x2d7: Pop(0)
0x2d8: PushEmpty(object)
0x2d9: Stack[-1] = Stack[-4]
0x2da: Push(-1, 1); TaskCall(2)
0x2db: Call2 0xbe

0x2dc: Pop(-1, 1); TaskReturn
0x2dd: Pop(1)
0x2de: Return(); Pop(2)

0x2df: PushEmpty()
0x2e0: Call2 0x709

0x2e1: Pop(0)
0x2e2: PushEmpty()
0x2e3: Call2 0x2f6

0x2e4: Pop(0)
0x2e5: GOTO 0x2e2

0x2e6: Return(); Pop(0)

0x2e7: Return(); Pop(0)

0x2e8: PushEmpty()
0x2e9: PushEmpty(bool, object)
0x2ea: Stack[-1] = Stack[-3]
0x2eb: Call2 0x78e

0x2ec: Pop(1)
0x2ed: IF (Stack[-1] == 0) GOTO 0x2f5; Pop(1)

0x2ee: PushEmpty()
0x2ef: Call2 0x34a

0x2f0: Pop(0)
0x2f1: PushEmpty(object)
0x2f2: Stack[-1] = Stack[-2]
0x2f3: Call2 0x7c4

0x2f4: Pop(1)
0x2f5: Return(); Pop(0)

0x2f6: PushEmpty(int, bool, cvector, object, int, bool, cvector, object)
0x2f7: @ GetPFPosition(Stack[-1])
0x2f8: Pop(0)
0x2f9: @ GetDirection(Stack[-0])
0x2fa: Pop(0)
0x2fb: PushEmpty()
0x2fc: Call2 0x34f

0x2fd: Pop(0)
0x2fe: Push((int) 10)
0x2ff: @ irand(Stack[-5], Stack[-1])
0x300: Pop(1)
0x301: Push((int) 5)
0x302: Pop(1); Push(Stack[-5] + Stack[-1]);
0x303: @ Sleep(Stack[-1], Stack[-4])
0x304: Pop(1)
0x305: Push(Stack[-3])
0x306: IF (Stack[-1] == 0) GOTO 0x30b; Pop(1)

0x307: PushEmpty()
0x308: Call2 0x2e7

0x309: Pop(0)
0x30a: GOTO 0x348

0x30b: PushEmpty()
0x30c: Call2 0x34f

0x30d: Pop(0)
0x30e: @ GetPFPosition(Stack[-2])
0x30f: Pop(0)
0x310: PushEmpty(float, cvector, cvector)
0x311: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x312: Stack[-1] = Stack[-5]
0x313: Call2 0x54e

0x314: Pop(2)
0x315: Push((int) 40000)
0x316: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x317: IF (Stack[-1] == 0) GOTO 0x33a; Pop(1)

0x318: @ FindPathTo(Stack[-1], Stack[-1])
0x319: Pop(0)
0x31a: Pop(0); Push(( Stack[-1] != 0 )
0x31b: IF (Stack[-1] == 0) GOTO 0x335; Pop(1)

0x31c: @ RotatePath(Stack[-1], Stack[-3])
0x31d: Pop(0)
0x31e: Pop(0); Push((bool) Stack[-3] == 0)
0x31f: IF (Stack[-1] == 0) GOTO 0x321; Pop(1)

0x320: GOTO 0x347

0x321: Push((bool) 0)
0x322: @ FollowPath(Stack[-2], Stack[-1], Stack[-4])
0x323: Pop(1)
0x324: Pop(0); Push((bool) Stack[-3] == 0)
0x325: IF (Stack[-1] == 0) GOTO 0x327; Pop(1)

0x326: GOTO 0x347

0x327: Push(CvectorIndex(Stack[-0], 0))
0x328: Push(CvectorIndex(Stack[-0], 2))
0x329: @ Rotate(Stack[-2], Stack[-1], Stack[-5])
0x32a: Pop(2)
0x32b: Pop(0); Push((bool) Stack[-3] == 0)
0x32c: IF (Stack[-1] == 0) GOTO 0x32e; Pop(1)

0x32d: GOTO 0x347

0x32e: @ WaitForAnimEnd(Stack[-3])
0x32f: Pop(0)
0x330: Pop(0); Push((bool) Stack[-3] == 0)
0x331: IF (Stack[-1] == 0) GOTO 0x333; Pop(1)

0x332: GOTO 0x347

0x333: GOTO 0x348

0x334: GOTO 0x338

0x335: Push((int) 1)
0x336: @ Sleep(Stack[-1])
0x337: Pop(1)
0x338: Stack[-1] = 0
0x339: GOTO 0x347

0x33a: Push(CvectorIndex(Stack[-0], 0))
0x33b: Push(CvectorIndex(Stack[-0], 2))
0x33c: @ Rotate(Stack[-2], Stack[-1], Stack[-5])
0x33d: Pop(2)
0x33e: Pop(0); Push((bool) Stack[-3] == 0)
0x33f: IF (Stack[-1] == 0) GOTO 0x341; Pop(1)

0x340: GOTO 0x347

0x341: @ WaitForAnimEnd(Stack[-3])
0x342: Pop(0)
0x343: Pop(0); Push((bool) Stack[-3] == 0)
0x344: IF (Stack[-1] == 0) GOTO 0x346; Pop(1)

0x345: GOTO 0x347

0x346: GOTO 0x348

0x347: GOTO 0x30b

0x348: GOTO 0x2fb

0x349: Return(); Pop(8)

0x34a: @ StopGroup0()
0x34b: Pop(0)
0x34c: @ Stop()
0x34d: Pop(0)
0x34e: Return(); Pop(0)

0x34f: Return(); Pop(0)

0x350: PushEmpty()
0x351: Push((int) 2)
0x352: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x353: IF (Stack[-1] == 0) GOTO 0x357; Pop(1)

0x354: Stack[-2] = "fire"
0x355: Return(); Pop(0)

0x356: GOTO 0x35c

0x357: Push((int) 1)
0x358: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x359: IF (Stack[-1] == 0) GOTO 0x35c; Pop(1)

0x35a: Stack[-2] = "bullet"
0x35b: Return(); Pop(0)

0x35c: Stack[-2] = "phys"
0x35d: Return(); Pop(0)

0x35e: PushEmpty(cvector, cvector, cvector, cvector)
0x35f: @ GetPosition(Stack[-2])
0x360: Pop(0)
0x361: @@ GetPosition(Stack[-1])
0x362: Pop(0)
0x363: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x364: Return(); Pop(4)

0x365: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x366: @ GetPosition(Stack[-3])
0x367: Pop(0)
0x368: @@ GetPosition(Stack[-2])
0x369: Pop(0)
0x36a: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x36b: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x36c: Return(); Pop(6)

0x36d: PushEmpty(object, object)
0x36e: Push("player")
0x36f: @ FindActor(Stack[-2], Stack[-1])
0x370: Pop(1)
0x371: Stack[-3] = Stack[-1]
0x372: Return(); Pop(2)

0x373: Stack[-1] = 0
0x374: PushEmpty(bool, bool)
0x375: @ IsPlayerActor(Stack[-3], Stack[-1])
0x376: Pop(0)
0x377: Stack[-4] = Stack[-1]
0x378: Return(); Pop(2)

0x379: PushEmpty(bool, bool)
0x37a: Push("HasProperty")
0x37b: Push((int) 2)
0x37c: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x37d: Pop(1); Push((bool) Stack[-1] == 0)
0x37e: IF (Stack[-1] == 0) GOTO 0x381; Pop(1)

0x37f: Stack[-5] = (bool) 0
0x380: Return(); Pop(2)

0x381: @@ HasProperty(Stack[-3], Stack[-1])
0x382: Pop(0)
0x383: Stack[-5] = Stack[-1]
0x384: Return(); Pop(2)

0x385: PushEmpty(int, string, int, float, float, float, int, string, int, float, float, float)
0x386: PushEmpty(bool, object, string)
0x387: Stack[-2] = Stack[-18]
0x388: Stack[-1] = "health"
0x389: Call2 0x379

0x38a: Pop(2)
0x38b: Pop(1); Push((bool) Stack[-1] == 0)
0x38c: IF (Stack[-1] == 0) GOTO 0x38f; Pop(1)

0x38d: Stack[-16] = (float) 0.0
0x38e: Return(); Pop(12)

0x38f: PushEmpty(bool, object, string)
0x390: Stack[-2] = Stack[-18]
0x391: Stack[-1] = "armor"
0x392: Call2 0x379

0x393: Pop(2)
0x394: Pop(1); Push((bool) Stack[-1] == 0)
0x395: IF (Stack[-1] == 0) GOTO 0x398; Pop(1)

0x396: Stack[-6] = (int) 0
0x397: GOTO 0x39b

0x398: Push("armor")
0x399: @@ GetProperty(Stack[-1], Stack[-7])
0x39a: Pop(1)
0x39b: Push("armor_")
0x39c: PushEmpty(string, int)
0x39d: Stack[-1] = Stack[-16]
0x39e: Call2 0x350

0x39f: Pop(1)
0x3a0: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x3a1: PushEmpty(bool, object, string)
0x3a2: Stack[-2] = Stack[-18]
0x3a3: Stack[-1] = Stack[-8]
0x3a4: Call2 0x379

0x3a5: Pop(2)
0x3a6: Pop(1); Push((bool) Stack[-1] == 0)
0x3a7: IF (Stack[-1] == 0) GOTO 0x3aa; Pop(1)

0x3a8: Stack[-4] = (int) 0
0x3a9: GOTO 0x3ac

0x3aa: @@ GetProperty(Stack[-5], Stack[-4])
0x3ab: Pop(0)
0x3ac: PushEmpty(float, float, float)
0x3ad: Pop(0); Push(Stack[-9] + Stack[-7]);
0x3ae: Push((float)100.0)
0x3af: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0x3b0: Stack[-1] = (int) 1
0x3b1: Call2 0x552

0x3b2: Stack[-6] = Stack[-3]
0x3b3: Pop(3)
0x3b4: Push("health")
0x3b5: @@ GetProperty(Stack[-1], Stack[-3])
0x3b6: Pop(1)
0x3b7: Push((int) 1)
0x3b8: Pop(1); Push(Stack[-1] - Stack[-4]);
0x3b9: Stack[-2] = Stack[-15] * Stack[-1]; Pop(1);
0x3ba: Push("health")
0x3bb: PushEmpty(float, float, float, float)
0x3bc: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0x3bd: Stack[-2] = (int) 0
0x3be: Stack[-1] = (int) 1
0x3bf: Call2 0x559

0x3c0: Pop(3)
0x3c1: @@ SetProperty(Stack[-2], Stack[-1])
0x3c2: Pop(2)
0x3c3: PushEmpty(bool, object)
0x3c4: Stack[-1] = Stack[-17]
0x3c5: Call2 0x374

0x3c6: Pop(1)
0x3c7: IF (Stack[-1] == 0) GOTO 0x3cc; Pop(1)

0x3c8: PushEmpty(float)
0x3c9: Stack[-1] = -Stack[-2]; Pop(0);
0x3ca: Call2 0x593

0x3cb: Pop(1)
0x3cc: Stack[-16] = Stack[-1]
0x3cd: Return(); Pop(12)

0x3ce: PushEmpty(bool, bool)
0x3cf: @@ IsDead(Stack[-1])
0x3d0: Pop(0)
0x3d1: Stack[-4] = Stack[-1]
0x3d2: Return(); Pop(2)

0x3d3: PushEmpty(object, object, object, object)
0x3d4: Pop(0); Push((bool) Stack[-5] == 0)
0x3d5: IF (Stack[-1] == 0) GOTO 0x3d8; Pop(1)

0x3d6: Stack[-6] = (bool) 0
0x3d7: Return(); Pop(4)

0x3d8: PushEmpty(bool)
0x3d9: Stack[-1] = (bool) 0
0x3da: Push("IsDead")
0x3db: Push((int) 1)
0x3dc: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x3dd: IF (Stack[-1] == 0) GOTO 0x3e4; Pop(1)

0x3de: PushEmpty(bool, object)
0x3df: Stack[-1] = Stack[-8]
0x3e0: Call2 0x3ce

0x3e1: Pop(1)
0x3e2: IF (Stack[-1] == 0) GOTO 0x3e4; Pop(1)

0x3e3: Stack[-1] = (bool) 1
0x3e4: IF (Stack[-1] == 0) GOTO 0x3e7; Pop(1)

0x3e5: Stack[-6] = (bool) 0
0x3e6: Return(); Pop(4)

0x3e7: @ GetScene(Stack[-2])
0x3e8: Pop(0)
0x3e9: Pop(0); Push((bool) Stack[-2] == 0)
0x3ea: IF (Stack[-1] == 0) GOTO 0x3ed; Pop(1)

0x3eb: Stack[-6] = (bool) 0
0x3ec: Return(); Pop(4)

0x3ed: @@ GetScene(Stack[-1])
0x3ee: Pop(0)
0x3ef: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x3f0: IF (Stack[-1] == 0) GOTO 0x3f3; Pop(1)

0x3f1: Stack[-6] = (bool) 0
0x3f2: Return(); Pop(4)

0x3f3: Stack[-6] = (bool) 1
0x3f4: Return(); Pop(4)

0x3f5: Stack[-1] = 0
0x3f6: Stack[-2] = 0
0x3f7: PushEmpty(int, int)
0x3f8: PushEmpty(bool, object)
0x3f9: Stack[-1] = Stack[-5]
0x3fa: Call2 0x3d3

0x3fb: Pop(1)
0x3fc: Pop(1); Push((bool) Stack[-1] == 0)
0x3fd: IF (Stack[-1] == 0) GOTO 0x400; Pop(1)

0x3fe: Stack[-4] = (bool) 0
0x3ff: Return(); Pop(2)

0x400: PushEmpty(bool, object, string)
0x401: Stack[-2] = Stack[-6]
0x402: Stack[-1] = "noaccess"
0x403: Call2 0x379

0x404: Pop(2)
0x405: Pop(1); Push((bool) Stack[-1] == 0)
0x406: IF (Stack[-1] == 0) GOTO 0x409; Pop(1)

0x407: Stack[-4] = (bool) 1
0x408: Return(); Pop(2)

0x409: Push("noaccess")
0x40a: @@ GetProperty(Stack[-1], Stack[-2])
0x40b: Pop(1)
0x40c: Push((int) 0)
0x40d: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x40e: Return(); Pop(2)

0x40f: PushEmpty(bool, int, cvector, cvector, cvector, cvector, string, bool, int, cvector, cvector, cvector, cvector, string)
0x410: Pop(0); Push((bool) Stack[-15] == 0)
0x411: IF (Stack[-1] == 0) GOTO 0x413; Pop(1)

0x412: Return(); Pop(14)

0x413: @ IsDead(Stack[-7])
0x414: Pop(0)
0x415: Push(Stack[-7])
0x416: IF (Stack[-1] == 0) GOTO 0x418; Pop(1)

0x417: Return(); Pop(14)

0x418: @ GetSecondaryAnimationType(Stack[-6])
0x419: Pop(0)
0x41a: Push((int) 0)
0x41b: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x41c: IF (Stack[-1] == 0) GOTO 0x41e; Pop(1)

0x41d: Return(); Pop(14)

0x41e: @@ GetPosition(Stack[-5])
0x41f: Pop(0)
0x420: @ GetPosition(Stack[-4])
0x421: Pop(0)
0x422: @ GetDirection(Stack[-3])
0x423: Pop(0)
0x424: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0x425: Push(CvectorIndex(Stack[-2], 0))
0x426: Push(CvectorIndex(Stack[-4], 0))
0x427: Pop(2); Push(Stack[-2] * Stack[-1]);
0x428: Push(CvectorIndex(Stack[-3], 2))
0x429: Push(CvectorIndex(Stack[-5], 2))
0x42a: Pop(2); Push(Stack[-2] * Stack[-1]);
0x42b: Pop(2); Push(Stack[-2] + Stack[-1]);
0x42c: Push((int) 0)
0x42d: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x42e: IF (Stack[-1] == 0) GOTO 0x431; Pop(1)

0x42f: Stack[-1] = "fhit"
0x430: GOTO 0x432

0x431: Stack[-1] = "bhit"
0x432: Push("hit_react")
0x433: Push("1")
0x434: Pop(1); Push(Stack[-3] + Stack[-1]);
0x435: Push("2")
0x436: Pop(1); Push(Stack[-4] + Stack[-1]);
0x437: Push((int) -10)
0x438: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x439: Pop(4)
0x43a: Return(); Pop(14)

0x43b: PushEmpty(cvector, object, int, bool, cvector, cvector, int, int, cvector, cvector, object, int, bool, cvector, cvector, int, int, cvector)
0x43c: PushEmpty(bool)
0x43d: Stack[-1] = (bool) 0
0x43e: PushEmpty(bool)
0x43f: Stack[-1] = (bool) 0
0x440: Push(Stack[-23])
0x441: IF (Stack[-1] == 0) GOTO 0x446; Pop(1)

0x442: Push((int) 4)
0x443: Pop(1); Push((bool) Stack[-23] != Stack[-1])
0x444: IF (Stack[-1] == 0) GOTO 0x446; Pop(1)

0x445: Stack[-1] = (bool) 1
0x446: IF (Stack[-1] == 0) GOTO 0x44b; Pop(1)

0x447: Push((int) 5)
0x448: Pop(1); Push((bool) Stack[-22] != Stack[-1])
0x449: IF (Stack[-1] == 0) GOTO 0x44b; Pop(1)

0x44a: Stack[-1] = (bool) 1
0x44b: IF (Stack[-1] == 0) GOTO 0x47a; Pop(1)

0x44c: PushEmpty(cvector, cvector)
0x44d: PushEmpty(cvector, object)
0x44e: Stack[-1] = Stack[-25]
0x44f: Call2 0x35e

0x450: Stack[-3] = Stack[-2]
0x451: Pop(2)
0x452: Call2 0x544

0x453: Stack[-11] = Stack[-2]
0x454: Pop(2)
0x455: @ CreateVectorVector(Stack[-8])
0x456: Pop(0)
0x457: Stack[-7] = (int) 1
0x458: Push("hit")
0x459: Pop(1); Push(Stack[-1] + Stack[-8]);
0x45a: @ GetGeometryLocator(Stack[-1], Stack[-7], Stack[-6], Stack[-5])
0x45b: Pop(1)
0x45c: Pop(0); Push((bool) Stack[-6] == 0)
0x45d: IF (Stack[-1] == 0) GOTO 0x45f; Pop(1)

0x45e: GOTO 0x468

0x45f: Pop(0); Push(Stack[-4] | Stack[-9]);
0x460: Push((float)0.70711)
0x461: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x462: IF (Stack[-1] == 0) GOTO 0x465; Pop(1)

0x463: @@ add(Stack[-5])
0x464: Pop(0)
0x465: Push((int) 1)
0x466: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x467: GOTO 0x458

0x468: @@ size(Stack[-3])
0x469: Pop(0)
0x46a: Push(Stack[-3])
0x46b: IF (Stack[-1] == 0) GOTO 0x479; Pop(1)

0x46c: @ irand(Stack[-2], Stack[-3])
0x46d: Pop(0)
0x46e: @@ get(Stack[-1], Stack[-2])
0x46f: Pop(0)
0x470: PushEmpty(object, int, float, cvector, cvector)
0x471: Stack[-5] = Stack[-26]
0x472: Stack[-4] = Stack[-25]
0x473: Stack[-3] = Stack[-24]
0x474: Stack[-2] = Stack[-6]
0x475: Stack[-1] = -Stack[-14]; Pop(0);
0x476: Call2 0x47f

0x477: Pop(5)
0x478: Return(); Pop(18)

0x479: Stack[-8] = 0
0x47a: PushEmpty(object)
0x47b: Stack[-1] = Stack[-22]
0x47c: Call2 0x40f

0x47d: Pop(1)
0x47e: Return(); Pop(18)

0x47f: PushEmpty(object, object, object, object)
0x480: @ GetScene(Stack[-2])
0x481: Pop(0)
0x482: Push("scripted")
0x483: Push("blood_dir.xml")
0x484: @ AddActorByType(Stack[-3], Stack[-2], Stack[-4], Stack[-8], Stack[-7], Stack[-1])
0x485: Pop(2)
0x486: PushEmpty(object)
0x487: Stack[-1] = Stack[-10]
0x488: Call2 0x40f

0x489: Pop(1)
0x48a: Return(); Pop(4)

0x48b: Stack[-1] = 0
0x48c: Stack[-2] = 0
0x48d: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x48e: @@ GetPosition(Stack[-3])
0x48f: Pop(0)
0x490: @ GetPosition(Stack[-2])
0x491: Pop(0)
0x492: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0x493: Push(CvectorIndex(Stack[-1], 0))
0x494: Push(CvectorIndex(Stack[-2], 2))
0x495: @ RotateAsync(Stack[-2], Stack[-1])
0x496: Pop(2)
0x497: Return(); Pop(6)

0x498: PushEmpty(float, float, float, float)
0x499: @ GetEyesHeight(Stack[-2])
0x49a: Pop(0)
0x49b: @@ GetEyesHeight(Stack[-1])
0x49c: Pop(0)
0x49d: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x49e: Return(); Pop(4)

0x49f: PushEmpty(bool, bool)
0x4a0: @ IsLoaded(Stack[-1])
0x4a1: Pop(0)
0x4a2: Stack[-3] = Stack[-1]
0x4a3: Return(); Pop(2)

0x4a4: PushEmpty(bool, bool)
0x4a5: PushEmpty(bool, int, int)
0x4a6: Stack[-2] = Stack[-7]
0x4a7: Stack[-1] = Stack[-6]
0x4a8: Call2 0x564

0x4a9: Pop(2)
0x4aa: IF (Stack[-1] == 0) GOTO 0x4ae; Pop(1)

0x4ab: Push((int) 0)
0x4ac: @ AddItem(Stack[-2], Stack[-6], Stack[-1])
0x4ad: Pop(1)
0x4ae: Return(); Pop(2)

0x4af: PushEmpty(int, bool, int, bool)
0x4b0: PushEmpty(bool, int, int)
0x4b1: Stack[-2] = Stack[-10]
0x4b2: Stack[-1] = Stack[-9]
0x4b3: Call2 0x564

0x4b4: Pop(2)
0x4b5: IF (Stack[-1] == 0) GOTO 0x4bd; Pop(1)

0x4b6: @ irand(Stack[-2], Stack[-5])
0x4b7: Pop(0)
0x4b8: Push((int) 0)
0x4b9: Push((int) 1)
0x4ba: Pop(1); Push(Stack[-4] + Stack[-1]);
0x4bb: @ AddItem(Stack[-3], Stack[-10], Stack[-2], Stack[-1])
0x4bc: Pop(2)
0x4bd: Return(); Pop(4)

0x4be: PushEmpty(bool, int, bool, int, bool, float, cvector, cvector, bool, int, bool, int, bool, float, cvector, cvector)
0x4bf: @ IsExisting3DSound(Stack[-8], Stack[-17])
0x4c0: Pop(0)
0x4c1: Pop(0); Push((bool) Stack[-8] == 0)
0x4c2: IF (Stack[-1] == 0) GOTO 0x4d7; Pop(1)

0x4c3: Stack[-7] = (int) 0
0x4c4: Push((int) 1)
0x4c5: Pop(1); Push(Stack[-8] + Stack[-1]);
0x4c6: Pop(1); Push(Stack[-18] + Stack[-1]);
0x4c7: @ IsExisting3DSound(Stack[-7], Stack[-1])
0x4c8: Pop(1)
0x4c9: Pop(0); Push((bool) Stack[-6] == 0)
0x4ca: IF (Stack[-1] == 0) GOTO 0x4cc; Pop(1)

0x4cb: GOTO 0x4cf

0x4cc: Push((int) 1)
0x4cd: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x4ce: GOTO 0x4c4

0x4cf: Pop(0); Push((bool) Stack[-7] == 0)
0x4d0: IF (Stack[-1] == 0) GOTO 0x4d2; Pop(1)

0x4d1: Return(); Pop(16)

0x4d2: @ irand(Stack[-5], Stack[-7])
0x4d3: Pop(0)
0x4d4: Push((int) 1)
0x4d5: Pop(1); Push(Stack[-6] + Stack[-1]);
0x4d6: Stack[-18] = Stack[-18] + Stack[-1]; Pop(1);
0x4d7: @ Is3DSoundLoaded(Stack[-4], Stack[-17])
0x4d8: Pop(0)
0x4d9: Push(Stack[-4])
0x4da: IF (Stack[-1] == 0) GOTO 0x4e6; Pop(1)

0x4db: @ GetEyesHeight(Stack[-3])
0x4dc: Pop(0)
0x4dd: @ GetDirection(Stack[-2])
0x4de: Pop(0)
0x4df: Push((int) 50)
0x4e0: Stack[-2] = Stack[-3] * Stack[-1]; Pop(1);
0x4e1: Push(CvectorIndex(Stack[-1], 1))
0x4e2: Stack[-1] = Stack[-1] + Stack[-4]; Pop(0);
0x4e3: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x4e4: @ PlayGlobalSound(Stack[-17], Stack[-1])
0x4e5: Pop(0)
0x4e6: Return(); Pop(16)

0x4e7: PushEmpty()
0x4e8: Stack[-2] = (bool) 1
0x4e9: PushEmpty(bool)
0x4ea: Stack[-1] = (bool) 1
0x4eb: PushEmpty(bool)
0x4ec: Stack[-1] = (bool) 1
0x4ed: PushEmpty(bool)
0x4ee: Stack[-1] = (bool) 1
0x4ef: PushEmpty(bool)
0x4f0: Stack[-1] = (bool) 1
0x4f1: PushEmpty(bool)
0x4f2: Stack[-1] = (bool) 1
0x4f3: PushEmpty(bool)
0x4f4: Stack[-1] = (bool) 1
0x4f5: PushEmpty(bool)
0x4f6: Stack[-1] = (bool) 1
0x4f7: PushEmpty(bool)
0x4f8: Stack[-1] = (bool) 1
0x4f9: PushEmpty(bool)
0x4fa: Stack[-1] = (bool) 1
0x4fb: PushEmpty(bool)
0x4fc: Stack[-1] = (bool) 1
0x4fd: PushEmpty(bool)
0x4fe: Stack[-1] = (bool) 1
0x4ff: Push("woman")
0x500: Pop(1); Push((bool) Stack[-13] == Stack[-1])
0x501: IF (Stack[-1] == 0) GOTO 0x506; Pop(1)

0x502: Push("worker")
0x503: Pop(1); Push((bool) Stack[-13] == Stack[-1])
0x504: IF (Stack[-1] == 0) GOTO 0x506; Pop(1)

0x505: Stack[-1] = (bool) 0
0x506: IF (Stack[-1] == 0) GOTO 0x50b; Pop(1)

0x507: Push("butcher")
0x508: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0x509: IF (Stack[-1] == 0) GOTO 0x50b; Pop(1)

0x50a: Stack[-1] = (bool) 0
0x50b: IF (Stack[-1] == 0) GOTO 0x510; Pop(1)

0x50c: Push("wasted_girl")
0x50d: Pop(1); Push((bool) Stack[-11] == Stack[-1])
0x50e: IF (Stack[-1] == 0) GOTO 0x510; Pop(1)

0x50f: Stack[-1] = (bool) 0
0x510: IF (Stack[-1] == 0) GOTO 0x515; Pop(1)

0x511: Push("boy")
0x512: Pop(1); Push((bool) Stack[-10] == Stack[-1])
0x513: IF (Stack[-1] == 0) GOTO 0x515; Pop(1)

0x514: Stack[-1] = (bool) 0
0x515: IF (Stack[-1] == 0) GOTO 0x51a; Pop(1)

0x516: Push("vaxxabitka")
0x517: Pop(1); Push((bool) Stack[-9] == Stack[-1])
0x518: IF (Stack[-1] == 0) GOTO 0x51a; Pop(1)

0x519: Stack[-1] = (bool) 0
0x51a: IF (Stack[-1] == 0) GOTO 0x51f; Pop(1)

0x51b: Push("unosha")
0x51c: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x51d: IF (Stack[-1] == 0) GOTO 0x51f; Pop(1)

0x51e: Stack[-1] = (bool) 0
0x51f: IF (Stack[-1] == 0) GOTO 0x524; Pop(1)

0x520: Push("wasted_male")
0x521: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x522: IF (Stack[-1] == 0) GOTO 0x524; Pop(1)

0x523: Stack[-1] = (bool) 0
0x524: IF (Stack[-1] == 0) GOTO 0x529; Pop(1)

0x525: Push("alkash")
0x526: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x527: IF (Stack[-1] == 0) GOTO 0x529; Pop(1)

0x528: Stack[-1] = (bool) 0
0x529: IF (Stack[-1] == 0) GOTO 0x52e; Pop(1)

0x52a: Push("dohodyaga")
0x52b: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x52c: IF (Stack[-1] == 0) GOTO 0x52e; Pop(1)

0x52d: Stack[-1] = (bool) 0
0x52e: IF (Stack[-1] == 0) GOTO 0x533; Pop(1)

0x52f: Push("vaxxabit")
0x530: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x531: IF (Stack[-1] == 0) GOTO 0x533; Pop(1)

0x532: Stack[-1] = (bool) 0
0x533: IF (Stack[-1] == 0) GOTO 0x538; Pop(1)

0x534: Push("nudegirl")
0x535: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x536: IF (Stack[-1] == 0) GOTO 0x538; Pop(1)

0x537: Stack[-1] = (bool) 0
0x538: IF (Stack[-1] == 0) GOTO 0x53d; Pop(1)

0x539: Push("morlok")
0x53a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x53b: IF (Stack[-1] == 0) GOTO 0x53d; Pop(1)

0x53c: Stack[-2] = (bool) 0
0x53d: Return(); Pop(0)

0x53e: PushEmpty(object, object)
0x53f: @ self(Stack[-1])
0x540: Pop(0)
0x541: Stack[-3] = Stack[-1]
0x542: Return(); Pop(2)

0x543: Stack[-1] = 0
0x544: PushEmpty(float, float)
0x545: Pop(0); Push(Stack[-3] | Stack[-3]);
0x546: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x547: Push((float)0.0)
0x548: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x549: IF (Stack[-1] == 0) GOTO 0x54c; Pop(1)

0x54a: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x54b: Return(); Pop(2)

0x54c: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x54d: Return(); Pop(2)

0x54e: PushEmpty(cvector, cvector)
0x54f: Stack[-1] = Stack[-3] - Stack[-4]; Pop(0);
0x550: Stack[-5] = Stack[-1] | Stack[-1]; Pop(0);
0x551: Return(); Pop(2)

0x552: PushEmpty()
0x553: Pop(0); Push((bool) Stack[-2] < Stack[-1])
0x554: IF (Stack[-1] == 0) GOTO 0x557; Pop(1)

0x555: Stack[-3] = Stack[-2]
0x556: GOTO 0x558

0x557: Stack[-3] = Stack[-1]
0x558: Return(); Pop(0)

0x559: PushEmpty()
0x55a: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x55b: IF (Stack[-1] == 0) GOTO 0x55e; Pop(1)

0x55c: Stack[-4] = Stack[-2]
0x55d: Return(); Pop(0)

0x55e: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x55f: IF (Stack[-1] == 0) GOTO 0x562; Pop(1)

0x560: Stack[-4] = Stack[-1]
0x561: Return(); Pop(0)

0x562: Stack[-4] = Stack[-3]
0x563: Return(); Pop(0)

0x564: PushEmpty(int, int)
0x565: @ irand(Stack[-1], Stack[-3])
0x566: Pop(0)
0x567: Stack[-5] = Stack[-1] < Stack[-4]; Pop(0);
0x568: Return(); Pop(2)

0x569: PushEmpty(object, object)
0x56a: @ CreateObjectSet(Stack[-1])
0x56b: Pop(0)
0x56c: Stack[-3] = Stack[-1]
0x56d: Return(); Pop(2)

0x56e: Stack[-1] = 0
0x56f: PushEmpty()
0x570: Push(CvectorIndex(Stack[-2], 0))
0x571: Push(CvectorIndex(Stack[-2], 0))
0x572: Pop(2); Push(Stack[-2] * Stack[-1]);
0x573: Push(CvectorIndex(Stack[-3], 2))
0x574: Push(CvectorIndex(Stack[-3], 2))
0x575: Pop(2); Push(Stack[-2] * Stack[-1]);
0x576: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x577: Return(); Pop(0)

0x578: PushEmpty()
0x579: Push(CvectorIndex(Stack[-1], 0))
0x57a: Push(CvectorIndex(Stack[-2], 0))
0x57b: Pop(2); Push(Stack[-2] * Stack[-1]);
0x57c: Push(CvectorIndex(Stack[-2], 2))
0x57d: Push(CvectorIndex(Stack[-3], 2))
0x57e: Pop(2); Push(Stack[-2] * Stack[-1]);
0x57f: Pop(2); Push(Stack[-2] + Stack[-1]);
0x580: Stack[-3] = Sqrt(Stack[-1]); Pop(1);
0x581: Return(); Pop(0)

0x582: PushEmpty()
0x583: PushEmpty(float, cvector, cvector)
0x584: Stack[-2] = Stack[-5]
0x585: Stack[-1] = Stack[-4]
0x586: Call2 0x56f

0x587: Pop(2)
0x588: PushEmpty(float, cvector)
0x589: Stack[-1] = Stack[-5]
0x58a: Call2 0x578

0x58b: Pop(1)
0x58c: PushEmpty(float, cvector)
0x58d: Stack[-1] = Stack[-5]
0x58e: Call2 0x578

0x58f: Pop(1)
0x590: Pop(2); Push(Stack[-2] * Stack[-1]);
0x591: Stack[-5] = Stack[-2] / Stack[-1]; Pop(2);
0x592: Return(); Pop(0)

0x593: PushEmpty(object, object)
0x594: @ CreateFloatVector(Stack[-1])
0x595: Pop(0)
0x596: @@ add(Stack[-3])
0x597: Pop(0)
0x598: Push((int) 0)
0x599: Pop(1); Push((bool) Stack[-4] < Stack[-1])
0x59a: IF (Stack[-1] == 0) GOTO 0x59f; Pop(1)

0x59b: Push((float)0.7)
0x59c: Push((int) 500)
0x59d: @ RumblePlay(Stack[-2], Stack[-1])
0x59e: Pop(2)
0x59f: Push((int) 15)
0x5a0: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x5a1: Pop(1)
0x5a2: Return(); Pop(2)

0x5a3: Stack[-1] = 0
0x5a4: PushEmpty(object, object)
0x5a5: @ FindActor(Stack[-1], Stack[-4])
0x5a6: Pop(0)
0x5a7: Pop(0); Push((bool) Stack[-1] == 0)
0x5a8: IF (Stack[-1] == 0) GOTO 0x5ab; Pop(1)

0x5a9: Stack[-5] = (bool) 0
0x5aa: Return(); Pop(2)

0x5ab: @ Trigger(Stack[-1], Stack[-3])
0x5ac: Pop(0)
0x5ad: Stack[-5] = (bool) 1
0x5ae: Return(); Pop(2)

0x5af: Stack[-1] = 0
0x5b0: PushEmpty(bool, bool)
0x5b1: @ IsPlayerActor(Stack[-3], Stack[-1])
0x5b2: Pop(0)
0x5b3: Push(Stack[-1])
0x5b4: IF (Stack[-1] == 0) GOTO 0x5b8; Pop(1)

0x5b5: Push("attack")
0x5b6: @ PlayGlobalMusic(Stack[-1])
0x5b7: Pop(1)
0x5b8: Return(); Pop(2)

0x5b9: PushEmpty(object, object)
0x5ba: @ GetScene(Stack[-1])
0x5bb: Pop(0)
0x5bc: Push("battle")
0x5bd: PushEmpty(object)
0x5be: Call2 0x53e

0x5bf: Pop(0)
0x5c0: @ BroadcastMessage(Stack[-2], Stack[-1], Stack[-3])
0x5c1: Pop(2)
0x5c2: Return(); Pop(2)

0x5c3: Stack[-1] = 0
0x5c4: PushEmpty(int, int)
0x5c5: Push("branch")
0x5c6: @ GetVariable(Stack[-1], Stack[-2])
0x5c7: Pop(1)
0x5c8: Stack[-3] = Stack[-1]
0x5c9: Return(); Pop(2)

0x5ca: PushEmpty()
0x5cb: PushEmpty(int)
0x5cc: Call2 0x5c4

0x5cd: Pop(0)
0x5ce: Push((int) 1)
0x5cf: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x5d0: IF (Stack[-1] == 0) GOTO 0x5d4; Pop(1)

0x5d1: @ WorkWithCorpse(Stack[-1])
0x5d2: Pop(0)
0x5d3: GOTO 0x5d6

0x5d4: @ Barter(Stack[-1])
0x5d5: Pop(0)
0x5d6: Return(); Pop(0)

0x5d7: PushEmpty(int, bool, int, bool)
0x5d8: Pop(0); Push((bool) Stack[-6] > Stack[-5])
0x5d9: IF (Stack[-1] == 0) GOTO 0x5de; Pop(1)

0x5da: Push("GenerateMoney: iMin > iMax")
0x5db: @ Trace(Stack[-1])
0x5dc: Pop(1)
0x5dd: Return(); Pop(4)

0x5de: Stack[-2] = (int) 0
0x5df: Pop(0); Push((bool) Stack[-6] != Stack[-5])
0x5e0: IF (Stack[-1] == 0) GOTO 0x5e5; Pop(1)

0x5e1: Pop(0); Push(Stack[-5] - Stack[-6]);
0x5e2: @ irand(Stack[-3], Stack[-1])
0x5e3: Pop(1)
0x5e4: GOTO 0x5e9

0x5e5: Push((int) 0)
0x5e6: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x5e7: IF (Stack[-1] == 0) GOTO 0x5e9; Pop(1)

0x5e8: Return(); Pop(4)

0x5e9: Stack[-2] = Stack[-2] + Stack[-6]; Pop(0);
0x5ea: Push((int) 0)
0x5eb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5ec: IF (Stack[-1] == 0) GOTO 0x5ee; Pop(1)

0x5ed: Return(); Pop(4)

0x5ee: PushEmpty(int, string)
0x5ef: Stack[-1] = "Money"
0x5f0: Call2 0x643

0x5f1: Pop(1)
0x5f2: Push((int) 0)
0x5f3: @ AddItem(Stack[-3], Stack[-2], Stack[-1], Stack[-4])
0x5f4: Pop(2)
0x5f5: Return(); Pop(4)

0x5f6: PushEmpty(object, int, bool, object, int, bool)
0x5f7: @ CreateInvItem(Stack[-3])
0x5f8: Pop(0)
0x5f9: @@ SetItemName(Stack[-7])
0x5fa: Pop(0)
0x5fb: Push("Organ")
0x5fc: Push((int) 1)
0x5fd: @@ SetProperty(Stack[-2], Stack[-1])
0x5fe: Pop(2)
0x5ff: @@ GetItemID(Stack[-2])
0x600: Pop(0)
0x601: Push((int) 0)
0x602: Push((int) 1)
0x603: @ AddItem(Stack[-3], Stack[-5], Stack[-2], Stack[-1])
0x604: Pop(2)
0x605: Return(); Pop(6)

0x606: Stack[-3] = 0
0x607: PushEmpty(int)
0x608: Call2 0x5c4

0x609: Pop(0)
0x60a: Push((int) 1)
0x60b: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x60c: IF (Stack[-1] == 0) GOTO 0x60e; Pop(1)

0x60d: Return(); Pop(0)

0x60e: PushEmpty(string)
0x60f: Stack[-1] = "liver"
0x610: Call2 0x5f6

0x611: Pop(1)
0x612: PushEmpty(string)
0x613: Stack[-1] = "kidney"
0x614: Call2 0x5f6

0x615: Pop(1)
0x616: PushEmpty(string)
0x617: Stack[-1] = "heart"
0x618: Call2 0x5f6

0x619: Pop(1)
0x61a: PushEmpty(string)
0x61b: Stack[-1] = "blood"
0x61c: Call2 0x5f6

0x61d: Pop(1)
0x61e: Return(); Pop(0)

0x61f: PushEmpty(int, bool, int, bool)
0x620: Push((int) 0)
0x621: @ ClearSubContainer(Stack[-1])
0x622: Pop(1)
0x623: PushEmpty(int, int)
0x624: Stack[-2] = (int) 500
0x625: Stack[-1] = (int) 1000
0x626: Call2 0x5d7

0x627: Pop(2)
0x628: PushEmpty(string, int, int, int)
0x629: Stack[-4] = "rifle_ammo"
0x62a: Stack[-3] = (int) 1
0x62b: Stack[-2] = (int) 3
0x62c: Stack[-1] = (int) 3
0x62d: Call2 0x4af

0x62e: Pop(4)
0x62f: PushEmpty(string, int, int, int)
0x630: Stack[-4] = "rusk"
0x631: Stack[-3] = (int) 1
0x632: Stack[-2] = (int) 3
0x633: Stack[-1] = (int) 2
0x634: Call2 0x4af

0x635: Pop(4)
0x636: PushEmpty(string, int, int)
0x637: Stack[-3] = "bandage"
0x638: Stack[-2] = (int) 1
0x639: Stack[-1] = (int) 6
0x63a: Call2 0x4a4

0x63b: Pop(3)
0x63c: PushEmpty(string, int, int)
0x63d: Stack[-3] = "tourniquet"
0x63e: Stack[-2] = (int) 1
0x63f: Stack[-1] = (int) 6
0x640: Call2 0x4a4

0x641: Pop(3)
0x642: Return(); Pop(4)

0x643: PushEmpty(int, int)
0x644: @ GetInvItemByName(Stack[-1], Stack[-3])
0x645: Pop(0)
0x646: Stack[-4] = Stack[-1]
0x647: Return(); Pop(2)

0x648: PushEmpty()
0x649: PushEmpty(object)
0x64a: Stack[-1] = Stack[-2]
0x64b: Push(-1, 0); TaskCall(1)
0x64c: Call2 0x19

0x64d: Pop(-1, 0); TaskReturn
0x64e: Pop(1)
0x64f: Return(); Pop(0)

0x650: PushEmpty()
0x651: PushEmpty(object, int, float)
0x652: Stack[-3] = Stack[-7]
0x653: Stack[-2] = Stack[-6]
0x654: Stack[-1] = Stack[-5]
0x655: Call2 0x43b

0x656: Pop(3)
0x657: Return(); Pop(0)

0x658: PushEmpty()
0x659: PushEmpty(object, int, float, cvector, cvector)
0x65a: Stack[-5] = Stack[-11]
0x65b: Stack[-4] = Stack[-10]
0x65c: Stack[-3] = Stack[-9]
0x65d: Stack[-2] = Stack[-7]
0x65e: Stack[-1] = Stack[-6]
0x65f: Call2 0x47f

0x660: Pop(5)
0x661: Return(); Pop(0)

0x662: PushEmpty(float, float)
0x663: Push("health")
0x664: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x665: IF (Stack[-1] == 0) GOTO 0x66e; Pop(1)

0x666: Push("health")
0x667: @ GetProperty(Stack[-1], Stack[-2])
0x668: Pop(1)
0x669: Push((int) 0)
0x66a: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x66b: IF (Stack[-1] == 0) GOTO 0x66e; Pop(1)

0x66c: @ SignalDeath(Stack[-4])
0x66d: Pop(0)
0x66e: Return(); Pop(2)

0x66f: PushEmpty()
0x670: PushEmpty(bool, object)
0x671: Stack[-1] = Stack[-3]
0x672: Call2 0x374

0x673: Pop(1)
0x674: IF (Stack[-1] == 0) GOTO 0x67c; Pop(1)

0x675: PushEmpty(object)
0x676: Call2 0x53e

0x677: Pop(0)
0x678: Push((float)0.0)
0x679: Push((bool) 1)
0x67a: @ ReportReputationChange(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x67b: Pop(3)
0x67c: PushEmpty(object)
0x67d: Stack[-1] = Stack[-2]
0x67e: Call2 0x7d8

0x67f: Pop(1)
0x680: Return(); Pop(0)

0x681: PushEmpty(string, string)
0x682: PushEmpty(bool, object, string)
0x683: Stack[-2] = Stack[-7]
0x684: Stack[-1] = "class"
0x685: Call2 0x379

0x686: Pop(2)
0x687: Pop(1); Push((bool) Stack[-1] == 0)
0x688: IF (Stack[-1] == 0) GOTO 0x68b; Pop(1)

0x689: Stack[-5] = (bool) 0
0x68a: Return(); Pop(2)

0x68b: Push("class")
0x68c: @@ GetProperty(Stack[-1], Stack[-2])
0x68d: Pop(1)
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
0x698: PushEmpty(bool)
0x699: Stack[-1] = (bool) 1
0x69a: PushEmpty(bool)
0x69b: Stack[-1] = (bool) 1
0x69c: PushEmpty(bool)
0x69d: Stack[-1] = (bool) 1
0x69e: PushEmpty(bool)
0x69f: Stack[-1] = (bool) 1
0x6a0: PushEmpty(bool)
0x6a1: Stack[-1] = (bool) 1
0x6a2: Push("patrol")
0x6a3: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0x6a4: IF (Stack[-1] == 0) GOTO 0x6a9; Pop(1)

0x6a5: Push("sanitar")
0x6a6: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0x6a7: IF (Stack[-1] == 0) GOTO 0x6a9; Pop(1)

0x6a8: Stack[-1] = (bool) 0
0x6a9: IF (Stack[-1] == 0) GOTO 0x6ae; Pop(1)

0x6aa: Push("soldier")
0x6ab: Pop(1); Push((bool) Stack[-11] == Stack[-1])
0x6ac: IF (Stack[-1] == 0) GOTO 0x6ae; Pop(1)

0x6ad: Stack[-1] = (bool) 0
0x6ae: IF (Stack[-1] == 0) GOTO 0x6b3; Pop(1)

0x6af: Push("woman")
0x6b0: Pop(1); Push((bool) Stack[-10] == Stack[-1])
0x6b1: IF (Stack[-1] == 0) GOTO 0x6b3; Pop(1)

0x6b2: Stack[-1] = (bool) 0
0x6b3: IF (Stack[-1] == 0) GOTO 0x6b8; Pop(1)

0x6b4: Push("wasted_girl")
0x6b5: Pop(1); Push((bool) Stack[-9] == Stack[-1])
0x6b6: IF (Stack[-1] == 0) GOTO 0x6b8; Pop(1)

0x6b7: Stack[-1] = (bool) 0
0x6b8: IF (Stack[-1] == 0) GOTO 0x6bd; Pop(1)

0x6b9: Push("vaxxabitka")
0x6ba: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x6bb: IF (Stack[-1] == 0) GOTO 0x6bd; Pop(1)

0x6bc: Stack[-1] = (bool) 0
0x6bd: IF (Stack[-1] == 0) GOTO 0x6c2; Pop(1)

0x6be: Push("vaxxabit")
0x6bf: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x6c0: IF (Stack[-1] == 0) GOTO 0x6c2; Pop(1)

0x6c1: Stack[-1] = (bool) 0
0x6c2: IF (Stack[-1] == 0) GOTO 0x6c7; Pop(1)

0x6c3: Push("little_girl")
0x6c4: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x6c5: IF (Stack[-1] == 0) GOTO 0x6c7; Pop(1)

0x6c6: Stack[-1] = (bool) 0
0x6c7: IF (Stack[-1] == 0) GOTO 0x6cc; Pop(1)

0x6c8: Push("girl")
0x6c9: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x6ca: IF (Stack[-1] == 0) GOTO 0x6cc; Pop(1)

0x6cb: Stack[-1] = (bool) 0
0x6cc: IF (Stack[-1] == 0) GOTO 0x6d1; Pop(1)

0x6cd: Push("dohodyaga")
0x6ce: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x6cf: IF (Stack[-1] == 0) GOTO 0x6d1; Pop(1)

0x6d0: Stack[-1] = (bool) 0
0x6d1: IF (Stack[-1] == 0) GOTO 0x6d6; Pop(1)

0x6d2: Push("nudegirl")
0x6d3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6d4: IF (Stack[-1] == 0) GOTO 0x6d6; Pop(1)

0x6d5: Stack[-1] = (bool) 0
0x6d6: IF (Stack[-1] == 0) GOTO 0x6d9; Pop(1)

0x6d7: Stack[-5] = (bool) 1
0x6d8: Return(); Pop(2)

0x6d9: Push(Stack[-3])
0x6da: IF (Stack[-1] == 0) GOTO 0x6dd; Pop(1)

0x6db: Stack[-5] = (bool) 0
0x6dc: Return(); Pop(2)

0x6dd: Stack[-5] = (bool) 1
0x6de: PushEmpty(bool)
0x6df: Stack[-1] = (bool) 1
0x6e0: PushEmpty(bool)
0x6e1: Stack[-1] = (bool) 1
0x6e2: PushEmpty(bool)
0x6e3: Stack[-1] = (bool) 1
0x6e4: PushEmpty(bool)
0x6e5: Stack[-1] = (bool) 1
0x6e6: PushEmpty(bool)
0x6e7: Stack[-1] = (bool) 1
0x6e8: Push("worker")
0x6e9: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x6ea: IF (Stack[-1] == 0) GOTO 0x6ef; Pop(1)

0x6eb: Push("butcher")
0x6ec: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x6ed: IF (Stack[-1] == 0) GOTO 0x6ef; Pop(1)

0x6ee: Stack[-1] = (bool) 0
0x6ef: IF (Stack[-1] == 0) GOTO 0x6f4; Pop(1)

0x6f0: Push("boy")
0x6f1: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x6f2: IF (Stack[-1] == 0) GOTO 0x6f4; Pop(1)

0x6f3: Stack[-1] = (bool) 0
0x6f4: IF (Stack[-1] == 0) GOTO 0x6f9; Pop(1)

0x6f5: Push("unosha")
0x6f6: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x6f7: IF (Stack[-1] == 0) GOTO 0x6f9; Pop(1)

0x6f8: Stack[-1] = (bool) 0
0x6f9: IF (Stack[-1] == 0) GOTO 0x6fe; Pop(1)

0x6fa: Push("wasted_male")
0x6fb: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x6fc: IF (Stack[-1] == 0) GOTO 0x6fe; Pop(1)

0x6fd: Stack[-1] = (bool) 0
0x6fe: IF (Stack[-1] == 0) GOTO 0x703; Pop(1)

0x6ff: Push("alkash")
0x700: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x701: IF (Stack[-1] == 0) GOTO 0x703; Pop(1)

0x702: Stack[-1] = (bool) 0
0x703: IF (Stack[-1] == 0) GOTO 0x708; Pop(1)

0x704: Push("morlok")
0x705: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x706: IF (Stack[-1] == 0) GOTO 0x708; Pop(1)

0x707: Stack[-5] = (bool) 0
0x708: Return(); Pop(2)

0x709: Push(GlobalVars[0])
0x70a: PushEmpty(object)
0x70b: Call2 0x569

0x70c: Stack[-2] = Stack[-1]
0x70d: Pop(1)
0x70e: GlobalVars[0] = Stack[-1]; Pop(1)
0x70f: Return(); Pop(0)

0x710: PushEmpty()
0x711: PushEmpty(object, bool)
0x712: Stack[-2] = Stack[-4]
0x713: Stack[-1] = Stack[-3]
0x714: Push(-2, 3); TaskCall(3)
0x715: Call2 0x136

0x716: Pop(-2, 3); TaskReturn
0x717: Pop(2)
0x718: @ ResetAAS()
0x719: Pop(0)
0x71a: Return(); Pop(0)

0x71b: PushEmpty(bool, bool)
0x71c: Pop(0); Push((bool) Stack[-3] == 0)
0x71d: IF (Stack[-1] == 0) GOTO 0x71f; Pop(1)

0x71e: Return(); Pop(2)

0x71f: Push(GlobalVars[0])
0x720: @@ in(Stack[-2], Stack[-4])
0x721: Pop(1)
0x722: Pop(0); Push((bool) Stack[-1] == 0)
0x723: IF (Stack[-1] == 0) GOTO 0x727; Pop(1)

0x724: Push(GlobalVars[0])
0x725: @@ add(Stack[-4])
0x726: Pop(1)
0x727: PushEmpty(bool, object)
0x728: Stack[-1] = Stack[-5]
0x729: Call2 0x374

0x72a: Pop(1)
0x72b: IF (Stack[-1] == 0) GOTO 0x732; Pop(1)

0x72c: PushEmpty(object)
0x72d: Call2 0x53e

0x72e: Pop(0)
0x72f: Push((float)0.0)
0x730: @ ReportReputationChange(Stack[-5], Stack[-2], Stack[-1])
0x731: Pop(2)
0x732: Return(); Pop(2)

0x733: PushEmpty()
0x734: PushEmpty(object)
0x735: Stack[-1] = Stack[-2]
0x736: Call2 0x71b

0x737: Pop(1)
0x738: PushEmpty(object, bool)
0x739: Stack[-2] = Stack[-3]
0x73a: Stack[-1] = (bool) 1
0x73b: Call2 0x710

0x73c: Pop(2)
0x73d: Return(); Pop(0)

0x73e: PushEmpty(float, string, float, float, string, float)
0x73f: PushEmpty(bool, object)
0x740: Stack[-1] = Stack[-9]
0x741: Call2 0x3f7

0x742: Pop(1)
0x743: Pop(1); Push((bool) Stack[-1] == 0)
0x744: IF (Stack[-1] == 0) GOTO 0x747; Pop(1)

0x745: Stack[-8] = (bool) 0
0x746: Return(); Pop(6)

0x747: PushEmpty(bool, object)
0x748: Stack[-1] = Stack[-9]
0x749: Call2 0x374

0x74a: Pop(1)
0x74b: IF (Stack[-1] == 0) GOTO 0x752; Pop(1)

0x74c: Push("reputation")
0x74d: @@ GetProperty(Stack[-1], Stack[-4])
0x74e: Pop(1)
0x74f: Push((float)0.33)
0x750: Stack[-9] = Stack[-4] < Stack[-1]; Pop(1);
0x751: Return(); Pop(6)

0x752: PushEmpty(bool, object, string)
0x753: Stack[-2] = Stack[-10]
0x754: Stack[-1] = "class"
0x755: Call2 0x379

0x756: Pop(2)
0x757: Pop(1); Push((bool) Stack[-1] == 0)
0x758: IF (Stack[-1] == 0) GOTO 0x75b; Pop(1)

0x759: Stack[-8] = (bool) 0
0x75a: Return(); Pop(6)

0x75b: Push("class")
0x75c: @@ GetProperty(Stack[-1], Stack[-3])
0x75d: Pop(1)
0x75e: PushEmpty(bool)
0x75f: Stack[-1] = (bool) 1
0x760: PushEmpty(bool)
0x761: Stack[-1] = (bool) 1
0x762: Push("bomber")
0x763: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x764: IF (Stack[-1] == 0) GOTO 0x769; Pop(1)

0x765: Push("hunter")
0x766: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x767: IF (Stack[-1] == 0) GOTO 0x769; Pop(1)

0x768: Stack[-1] = (bool) 0
0x769: IF (Stack[-1] == 0) GOTO 0x76e; Pop(1)

0x76a: Push("grabitel")
0x76b: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x76c: IF (Stack[-1] == 0) GOTO 0x76e; Pop(1)

0x76d: Stack[-1] = (bool) 0
0x76e: IF (Stack[-1] == 0) GOTO 0x771; Pop(1)

0x76f: Stack[-8] = (bool) 1
0x770: Return(); Pop(6)

0x771: PushEmpty(bool, object, string)
0x772: Stack[-2] = Stack[-10]
0x773: Stack[-1] = "disease"
0x774: Call2 0x379

0x775: Pop(2)
0x776: Pop(1); Push((bool) Stack[-1] == 0)
0x777: IF (Stack[-1] == 0) GOTO 0x77a; Pop(1)

0x778: Stack[-8] = (bool) 0
0x779: Return(); Pop(6)

0x77a: PushEmpty(bool)
0x77b: Stack[-1] = (bool) 1
0x77c: PushEmpty(bool, string)
0x77d: Stack[-1] = Stack[-5]
0x77e: Call2 0x4e7

0x77f: Pop(1)
0x780: IF (Stack[-1] == 0) GOTO 0x785; Pop(1)

0x781: Push("dog")
0x782: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x783: IF (Stack[-1] == 0) GOTO 0x785; Pop(1)

0x784: Stack[-1] = (bool) 0
0x785: IF (Stack[-1] == 0) GOTO 0x78c; Pop(1)

0x786: Push("disease")
0x787: @@ GetProperty(Stack[-1], Stack[-2])
0x788: Pop(1)
0x789: Push((int) 0)
0x78a: Stack[-9] = Stack[-2] > Stack[-1]; Pop(1);
0x78b: Return(); Pop(6)

0x78c: Stack[-8] = (bool) 0
0x78d: Return(); Pop(6)

0x78e: PushEmpty(bool, bool)
0x78f: PushEmpty(bool, object)
0x790: Stack[-1] = Stack[-5]
0x791: Call2 0x3f7

0x792: Pop(1)
0x793: Pop(1); Push((bool) Stack[-1] == 0)
0x794: IF (Stack[-1] == 0) GOTO 0x797; Pop(1)

0x795: Stack[-4] = (bool) 0
0x796: Return(); Pop(2)

0x797: Push(GlobalVars[0])
0x798: @@ in(Stack[-2], Stack[-4])
0x799: Pop(1)
0x79a: Push(Stack[-1])
0x79b: IF (Stack[-1] == 0) GOTO 0x79e; Pop(1)

0x79c: Stack[-4] = (bool) 1
0x79d: Return(); Pop(2)

0x79e: PushEmpty(bool, object)
0x79f: Stack[-1] = Stack[-5]
0x7a0: Call2 0x73e

0x7a1: Stack[-6] = Stack[-2]
0x7a2: Pop(2)
0x7a3: Return(); Pop(2)

0x7a4: PushEmpty()
0x7a5: PushEmpty(object)
0x7a6: Stack[-1] = Stack[-2]
0x7a7: Call2 0x7c4

0x7a8: Pop(1)
0x7a9: Return(); Pop(0)

0x7aa: PushEmpty(bool, bool)
0x7ab: PushEmpty(bool, object, bool)
0x7ac: Stack[-2] = Stack[-7]
0x7ad: Stack[-1] = !Stack[-6]; Pop(0);
0x7ae: Call2 0x681

0x7af: Pop(2)
0x7b0: IF (Stack[-1] == 0) GOTO 0x7c2; Pop(1)

0x7b1: @ CanSee(Stack[-1], Stack[-5])
0x7b2: Pop(0)
0x7b3: PushEmpty(bool)
0x7b4: Stack[-1] = (bool) 1
0x7b5: Push(Stack[-2])
0x7b6: IF (Stack[-1] == 0) GOTO 0x7bf; Pop(1)

0x7b7: PushEmpty(float, object)
0x7b8: Stack[-1] = Stack[-8]
0x7b9: Call2 0x365

0x7ba: Pop(1)
0x7bb: Push((float)490000.0)
0x7bc: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x7bd: IF (Stack[-1] == 0) GOTO 0x7bf; Pop(1)

0x7be: Stack[-1] = (bool) 0
0x7bf: IF (Stack[-1] == 0) GOTO 0x7c2; Pop(1)

0x7c0: Stack[-6] = (bool) 1
0x7c1: Return(); Pop(2)

0x7c2: Stack[-6] = (bool) 0
0x7c3: Return(); Pop(2)

0x7c4: PushEmpty(bool, bool)
0x7c5: Push(GlobalVars[0])
0x7c6: @@ in(Stack[-2], Stack[-4])
0x7c7: Pop(1)
0x7c8: Push(Stack[-1])
0x7c9: IF (Stack[-1] == 0) GOTO 0x7cf; Pop(1)

0x7ca: PushEmpty(object, bool)
0x7cb: Stack[-2] = Stack[-5]
0x7cc: Stack[-1] = (bool) 1
0x7cd: Call2 0x710

0x7ce: Pop(2)
0x7cf: Return(); Pop(2)

0x7d0: PushEmpty(object)
0x7d1: Call2 0x53e

0x7d2: Pop(0)
0x7d3: @ RemoveActor(Stack[-1])
0x7d4: Pop(1)
0x7d5: @ Hold()
0x7d6: Pop(0)
0x7d7: Return(); Pop(0)

0x7d8: PushEmpty()
0x7d9: PushEmpty(object)
0x7da: Stack[-1] = Stack[-2]
0x7db: Call2 0x648

0x7dc: Pop(1)
0x7dd: Return(); Pop(0)

