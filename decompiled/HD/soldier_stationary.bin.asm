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
	in
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
	RemoveStationaryActor

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
	GetPFPosition (1 args)
	irand (2 args)
	FindPathTo (2 args)
	RotatePath (2 args)
	FollowPath (3 args)
	Rotate (3 args)
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
	CreateFloatVector (1 args)
	RumblePlay (2 args)
	SendWorldWndMessage (2 args)
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

RunOp = 0x31c
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
	GTASK_4 Vars = (cvector, cvector) Params = 0
		EVENT_3 Op = 0x325 Vars = (object)
		EVENT_17 Op = 0x343 Vars = (object)
		EVENT_30 Op = 0x357 Vars = (object, object, bool)
		EVENT_1 Op = 0x364 Vars = (object)

Events:
EVENT_22 Op = 0x6b4 Vars = (object, int, float, float)
EVENT_43 Op = 0x6bc Vars = (object, int, float, float, cvector, cvector)
EVENT_16 Op = 0x6c6 Vars = (object, string)
EVENT_41 Op = 0x6d3 Vars = (object)

0x0: PushEmpty()
0x1: PushEmpty(bool, object)
0x2: Stack[-1] = Stack[-3]
0x3: Call2 0x3e9

0x4: Pop(1)
0x5: IF (Stack[-1] == 0) GOTO 0x9; Pop(1)

0x6: PushEmpty()
0x7: Call2 0x683

0x8: Pop(0)
0x9: PushEmpty()
0xa: Call2 0x66b

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
0x27: Call2 0x62e

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
0x70: Call2 0x52e

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
0x92: Call2 0x52e

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
0xb2: Call2 0x46c

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
0xcb: Call2 0x6d3

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
0xe0: Call2 0x502

0xe1: Pop(1)
0xe2: Return(); Pop(0)

0xe3: PushEmpty()
0xe4: PushEmpty(bool, object)
0xe5: Stack[-1] = Stack[-3]
0xe6: Call2 0x46c

0xe7: Pop(1)
0xe8: Pop(1); Push((bool) Stack[-1] == 0)
0xe9: IF (Stack[-1] == 0) GOTO 0xef; Pop(1)

0xea: PushEmpty(object)
0xeb: Stack[-1] = Stack[-2]
0xec: Call2 0x77f

0xed: Pop(1)
0xee: Return(); Pop(0)

0xef: PushEmpty()
0xf0: Call2 0xbd

0xf1: Pop(0)
0xf2: PushEmpty(object)
0xf3: Stack[-1] = Stack[-2]
0xf4: Call2 0x797

0xf5: Pop(1)
0xf6: Return(); Pop(0)

0xf7: PushEmpty()
0xf8: PushEmpty(bool, object, object, bool)
0xf9: Stack[-3] = Stack[-7]
0xfa: Stack[-2] = Stack[-6]
0xfb: Stack[-1] = Stack[-5]
0xfc: Call2 0x82b

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
0x107: Call2 0x80f

0x108: Pop(1)
0x109: IF (Stack[-1] == 0) GOTO 0x111; Pop(1)

0x10a: PushEmpty()
0x10b: Call2 0xbd

0x10c: Pop(0)
0x10d: PushEmpty(object)
0x10e: Stack[-1] = Stack[-2]
0x10f: Call2 0x825

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
0x121: Call2 0x614

0x122: Pop(1)
0x123: @ CanSee(Stack[-1], Stack[-0])
0x124: Pop(0)
0x125: Push( Stack[1 + Tasks[-1].StackPointer] )
0x126: IF (Stack[-1] == 0) GOTO 0x134; Pop(1)

0x127: PushEmpty(bool, object)
0x128: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x129: Call2 0x7b7

0x12a: Pop(1)
0x12b: IF (Stack[-1] == 0) GOTO 0x132; Pop(1)

0x12c: PushEmpty(object, bool)
0x12d: Stack[-2] = Stack[0 + Tasks[-1].StackPointer]
0x12e: Stack[-1] = (bool) 1
0x12f: Call2 0x774

0x130: Pop(2)
0x131: Return(); Pop(6)

0x132: @ Face(Stack[-0])
0x133: Pop(0)
0x134: PushEmpty()
0x135: Call2 0x61d

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
0x15e: Call2 0x614

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
0x16d: Call2 0x7b7

0x16e: Pop(1)
0x16f: IF (Stack[-1] == 0) GOTO 0x179; Pop(1)

0x170: PushEmpty()
0x171: Call2 0x1b7

0x172: Pop(0)
0x173: PushEmpty(object, bool)
0x174: Stack[-2] = Stack[0 + Tasks[-1].StackPointer]
0x175: Stack[-1] = (bool) 0
0x176: Call2 0x774

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
0x193: Call2 0x774

0x194: Pop(2)
0x195: Return(); Pop(6)

0x196: PushEmpty()
0x197: PushEmpty(bool, object)
0x198: Stack[-1] = Stack[-3]
0x199: Call2 0x46c

0x19a: Pop(1)
0x19b: Pop(1); Push((bool) Stack[-1] == 0)
0x19c: IF (Stack[-1] == 0) GOTO 0x1a2; Pop(1)

0x19d: PushEmpty(object)
0x19e: Stack[-1] = Stack[-2]
0x19f: Call2 0x77f

0x1a0: Pop(1)
0x1a1: Return(); Pop(0)

0x1a2: PushEmpty()
0x1a3: Call2 0x1b7

0x1a4: Pop(0)
0x1a5: PushEmpty(object)
0x1a6: Stack[-1] = Stack[-2]
0x1a7: Call2 0x797

0x1a8: Pop(1)
0x1a9: Return(); Pop(0)

0x1aa: PushEmpty()
0x1ab: PushEmpty(bool, object, object, bool)
0x1ac: Stack[-3] = Stack[-7]
0x1ad: Stack[-2] = Stack[-6]
0x1ae: Stack[-1] = Stack[-5]
0x1af: Call2 0x82b

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
0x1c4: Call2 0x6d3

0x1c5: Pop(1)
0x1c6: Return(); Pop(0)

0x1c7: PushEmpty(bool, bool, bool, bool)
0x1c8: Stack[0 + Tasks[-1].StackPointer] = Stack[-6]
0x1c9: PushEmpty(object)
0x1ca: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1cb: Call2 0x614

0x1cc: Pop(1)
0x1cd: PushEmpty()
0x1ce: Call2 0x61d

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
0x1e3: Call2 0x46c

0x1e4: Pop(1)
0x1e5: IF (Stack[-1] == 0) GOTO 0x24b; Pop(1)

0x1e6: @ CanSee(Stack[-1], Stack[-0])
0x1e7: Pop(0)
0x1e8: Push(Stack[-1])
0x1e9: IF (Stack[-1] == 0) GOTO 0x1f2; Pop(1)

0x1ea: PushEmpty(object)
0x1eb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1ec: Call2 0x614

0x1ed: Pop(1)
0x1ee: PushEmpty()
0x1ef: Call2 0x27b

0x1f0: Pop(0)
0x1f1: GOTO 0x241

0x1f2: PushEmpty(object)
0x1f3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1f4: Call2 0x502

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
0x20b: Call2 0x46c

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
0x230: Call2 0x46c

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
0x262: Call2 0x502

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
0x27e: Call2 0x614

0x27f: Pop(1)
0x280: @ ReportAttack(Stack[-0])
0x281: Pop(0)
0x282: PushEmpty(bool, object)
0x283: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x284: Call2 0x3e9

0x285: Pop(1)
0x286: IF (Stack[-1] == 0) GOTO 0x28c; Pop(1)

0x287: PushEmpty(object)
0x288: Call2 0x5ae

0x289: Pop(0)
0x28a: @ SendPlayerEnemy(Stack[-0], Stack[-1])
0x28b: Pop(1)
0x28c: @ GetDirection(Stack[-14])
0x28d: Pop(0)
0x28e: PushEmpty(cvector, object)
0x28f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x290: Call2 0x3da

0x291: Stack[-15] = Stack[-2]
0x292: Pop(2)
0x293: PushEmpty(float, cvector, cvector)
0x294: Stack[-2] = Stack[-17]
0x295: Stack[-1] = Stack[-16]
0x296: Call2 0x5f2

0x297: Pop(2)
0x298: Push((float)0.99939)
0x299: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x29a: IF (Stack[-1] == 0) GOTO 0x29c; Pop(1)

0x29b: Return(); Pop(28)

0x29c: PushEmpty()
0x29d: Call2 0x61d

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
0x2bd: Call2 0x3da

0x2be: Stack[-15] = Stack[-2]
0x2bf: Pop(2)
0x2c0: Push(CvectorIndex(Stack[-13], 1))
0x2c1: PushEmpty(float, object)
0x2c2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2c3: Call2 0x50d

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
0x2d4: Call2 0x3fa

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
0x2fa: Call2 0x46c

0x2fb: Pop(1)
0x2fc: Pop(1); Push((bool) Stack[-1] == 0)
0x2fd: IF (Stack[-1] == 0) GOTO 0x2ff; Pop(1)

0x2fe: Return(); Pop(0)

0x2ff: PushEmpty(object)
0x300: Stack[-1] = Stack[-2]
0x301: Call2 0x77f

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
0x314: Call2 0x82b

0x315: Pop(3)
0x316: IF (Stack[-1] == 0) GOTO 0x31b; Pop(1)

0x317: PushEmpty(object)
0x318: Stack[-1] = Stack[-4]
0x319: Call2 0x2f7

0x31a: Pop(1)
0x31b: Return(); Pop(0)

0x31c: PushEmpty()
0x31d: Call2 0x76d

0x31e: Pop(0)
0x31f: PushEmpty()
0x320: Call2 0x372

0x321: Pop(0)
0x322: GOTO 0x31f

0x323: Return(); Pop(0)

0x324: Return(); Pop(0)

0x325: PushEmpty(bool, bool)
0x326: PushEmpty(bool, object)
0x327: Stack[-1] = Stack[-5]
0x328: Call2 0x46c

0x329: Pop(1)
0x32a: Pop(1); Push((bool) Stack[-1] == 0)
0x32b: IF (Stack[-1] == 0) GOTO 0x32d; Pop(1)

0x32c: Return(); Pop(2)

0x32d: PushEmpty(bool, object)
0x32e: Stack[-1] = Stack[-5]
0x32f: Call2 0x7bf

0x330: Pop(1)
0x331: Pop(1); Push((bool) Stack[-1] == 0)
0x332: IF (Stack[-1] == 0) GOTO 0x339; Pop(1)

0x333: Push(GlobalVars[0])
0x334: @@ in(Stack[-2], Stack[-4])
0x335: Pop(1)
0x336: Pop(0); Push((bool) Stack[-1] == 0)
0x337: IF (Stack[-1] == 0) GOTO 0x339; Pop(1)

0x338: Return(); Pop(2)

0x339: PushEmpty()
0x33a: Call2 0x3c6

0x33b: Pop(0)
0x33c: PushEmpty(object)
0x33d: Stack[-1] = Stack[-4]
0x33e: Push(-1, 1); TaskCall(1)
0x33f: Call2 0xa5

0x340: Pop(-1, 1); TaskReturn
0x341: Pop(1)
0x342: Return(); Pop(2)

0x343: PushEmpty()
0x344: PushEmpty(bool, object)
0x345: Stack[-1] = Stack[-3]
0x346: Call2 0x46c

0x347: Pop(1)
0x348: Pop(1); Push((bool) Stack[-1] == 0)
0x349: IF (Stack[-1] == 0) GOTO 0x34f; Pop(1)

0x34a: PushEmpty(object)
0x34b: Stack[-1] = Stack[-2]
0x34c: Call2 0x77f

0x34d: Pop(1)
0x34e: Return(); Pop(0)

0x34f: PushEmpty()
0x350: Call2 0x3c6

0x351: Pop(0)
0x352: PushEmpty(object)
0x353: Stack[-1] = Stack[-2]
0x354: Call2 0x797

0x355: Pop(1)
0x356: Return(); Pop(0)

0x357: PushEmpty()
0x358: PushEmpty(bool, object, object, bool)
0x359: Stack[-3] = Stack[-7]
0x35a: Stack[-2] = Stack[-6]
0x35b: Stack[-1] = Stack[-5]
0x35c: Call2 0x82b

0x35d: Pop(3)
0x35e: IF (Stack[-1] == 0) GOTO 0x363; Pop(1)

0x35f: PushEmpty(object)
0x360: Stack[-1] = Stack[-4]
0x361: Call2 0x343

0x362: Pop(1)
0x363: Return(); Pop(0)

0x364: PushEmpty()
0x365: PushEmpty(bool, object)
0x366: Stack[-1] = Stack[-3]
0x367: Call2 0x80f

0x368: Pop(1)
0x369: IF (Stack[-1] == 0) GOTO 0x371; Pop(1)

0x36a: PushEmpty()
0x36b: Call2 0x3c6

0x36c: Pop(0)
0x36d: PushEmpty(object)
0x36e: Stack[-1] = Stack[-2]
0x36f: Call2 0x845

0x370: Pop(1)
0x371: Return(); Pop(0)

0x372: PushEmpty(int, bool, cvector, object, int, bool, cvector, object)
0x373: @ GetPFPosition(Stack[-1])
0x374: Pop(0)
0x375: @ GetDirection(Stack[-0])
0x376: Pop(0)
0x377: PushEmpty()
0x378: Call2 0x3cb

0x379: Pop(0)
0x37a: Push((int) 10)
0x37b: @ irand(Stack[-5], Stack[-1])
0x37c: Pop(1)
0x37d: Push((int) 5)
0x37e: Pop(1); Push(Stack[-5] + Stack[-1]);
0x37f: @ Sleep(Stack[-1], Stack[-4])
0x380: Pop(1)
0x381: Push(Stack[-3])
0x382: IF (Stack[-1] == 0) GOTO 0x387; Pop(1)

0x383: PushEmpty()
0x384: Call2 0x324

0x385: Pop(0)
0x386: GOTO 0x3c4

0x387: PushEmpty()
0x388: Call2 0x3cb

0x389: Pop(0)
0x38a: @ GetPFPosition(Stack[-2])
0x38b: Pop(0)
0x38c: PushEmpty(float, cvector, cvector)
0x38d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x38e: Stack[-1] = Stack[-5]
0x38f: Call2 0x5be

0x390: Pop(2)
0x391: Push((int) 40000)
0x392: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x393: IF (Stack[-1] == 0) GOTO 0x3b6; Pop(1)

0x394: @ FindPathTo(Stack[-1], Stack[-1])
0x395: Pop(0)
0x396: Pop(0); Push(( Stack[-1] != 0 )
0x397: IF (Stack[-1] == 0) GOTO 0x3b1; Pop(1)

0x398: @ RotatePath(Stack[-1], Stack[-3])
0x399: Pop(0)
0x39a: Pop(0); Push((bool) Stack[-3] == 0)
0x39b: IF (Stack[-1] == 0) GOTO 0x39d; Pop(1)

0x39c: GOTO 0x3c3

0x39d: Push((bool) 0)
0x39e: @ FollowPath(Stack[-2], Stack[-1], Stack[-4])
0x39f: Pop(1)
0x3a0: Pop(0); Push((bool) Stack[-3] == 0)
0x3a1: IF (Stack[-1] == 0) GOTO 0x3a3; Pop(1)

0x3a2: GOTO 0x3c3

0x3a3: Push(CvectorIndex(Stack[-0], 0))
0x3a4: Push(CvectorIndex(Stack[-0], 2))
0x3a5: @ Rotate(Stack[-2], Stack[-1], Stack[-5])
0x3a6: Pop(2)
0x3a7: Pop(0); Push((bool) Stack[-3] == 0)
0x3a8: IF (Stack[-1] == 0) GOTO 0x3aa; Pop(1)

0x3a9: GOTO 0x3c3

0x3aa: @ WaitForAnimEnd(Stack[-3])
0x3ab: Pop(0)
0x3ac: Pop(0); Push((bool) Stack[-3] == 0)
0x3ad: IF (Stack[-1] == 0) GOTO 0x3af; Pop(1)

0x3ae: GOTO 0x3c3

0x3af: GOTO 0x3c4

0x3b0: GOTO 0x3b4

0x3b1: Push((int) 1)
0x3b2: @ Sleep(Stack[-1])
0x3b3: Pop(1)
0x3b4: Stack[-1] = 0
0x3b5: GOTO 0x3c3

0x3b6: Push(CvectorIndex(Stack[-0], 0))
0x3b7: Push(CvectorIndex(Stack[-0], 2))
0x3b8: @ Rotate(Stack[-2], Stack[-1], Stack[-5])
0x3b9: Pop(2)
0x3ba: Pop(0); Push((bool) Stack[-3] == 0)
0x3bb: IF (Stack[-1] == 0) GOTO 0x3bd; Pop(1)

0x3bc: GOTO 0x3c3

0x3bd: @ WaitForAnimEnd(Stack[-3])
0x3be: Pop(0)
0x3bf: Pop(0); Push((bool) Stack[-3] == 0)
0x3c0: IF (Stack[-1] == 0) GOTO 0x3c2; Pop(1)

0x3c1: GOTO 0x3c3

0x3c2: GOTO 0x3c4

0x3c3: GOTO 0x387

0x3c4: GOTO 0x377

0x3c5: Return(); Pop(8)

0x3c6: @ StopGroup0()
0x3c7: Pop(0)
0x3c8: @ Stop()
0x3c9: Pop(0)
0x3ca: Return(); Pop(0)

0x3cb: Return(); Pop(0)

0x3cc: PushEmpty()
0x3cd: Push((int) 2)
0x3ce: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3cf: IF (Stack[-1] == 0) GOTO 0x3d3; Pop(1)

0x3d0: Stack[-2] = "fire"
0x3d1: Return(); Pop(0)

0x3d2: GOTO 0x3d8

0x3d3: Push((int) 1)
0x3d4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3d5: IF (Stack[-1] == 0) GOTO 0x3d8; Pop(1)

0x3d6: Stack[-2] = "bullet"
0x3d7: Return(); Pop(0)

0x3d8: Stack[-2] = "phys"
0x3d9: Return(); Pop(0)

0x3da: PushEmpty(cvector, cvector, cvector, cvector)
0x3db: @ GetPosition(Stack[-2])
0x3dc: Pop(0)
0x3dd: @@ GetPosition(Stack[-1])
0x3de: Pop(0)
0x3df: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x3e0: Return(); Pop(4)

0x3e1: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x3e2: @ GetPosition(Stack[-3])
0x3e3: Pop(0)
0x3e4: @@ GetPosition(Stack[-2])
0x3e5: Pop(0)
0x3e6: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x3e7: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x3e8: Return(); Pop(6)

0x3e9: PushEmpty(bool, bool)
0x3ea: @ IsPlayerActor(Stack[-3], Stack[-1])
0x3eb: Pop(0)
0x3ec: Stack[-4] = Stack[-1]
0x3ed: Return(); Pop(2)

0x3ee: PushEmpty(bool, bool)
0x3ef: Push("HasProperty")
0x3f0: Push((int) 2)
0x3f1: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x3f2: Pop(1); Push((bool) Stack[-1] == 0)
0x3f3: IF (Stack[-1] == 0) GOTO 0x3f6; Pop(1)

0x3f4: Stack[-5] = (bool) 0
0x3f5: Return(); Pop(2)

0x3f6: @@ HasProperty(Stack[-3], Stack[-1])
0x3f7: Pop(0)
0x3f8: Stack[-5] = Stack[-1]
0x3f9: Return(); Pop(2)

0x3fa: PushEmpty(int, string, int, float, float, float, int, string, int, float, float, float)
0x3fb: PushEmpty(bool, object, string)
0x3fc: Stack[-2] = Stack[-18]
0x3fd: Stack[-1] = "health"
0x3fe: Call2 0x3ee

0x3ff: Pop(2)
0x400: Pop(1); Push((bool) Stack[-1] == 0)
0x401: IF (Stack[-1] == 0) GOTO 0x404; Pop(1)

0x402: Stack[-16] = (float) 0.0
0x403: Return(); Pop(12)

0x404: PushEmpty(bool, object, string)
0x405: Stack[-2] = Stack[-18]
0x406: Stack[-1] = "armor"
0x407: Call2 0x3ee

0x408: Pop(2)
0x409: Pop(1); Push((bool) Stack[-1] == 0)
0x40a: IF (Stack[-1] == 0) GOTO 0x40d; Pop(1)

0x40b: Stack[-6] = (int) 0
0x40c: GOTO 0x410

0x40d: Push("armor")
0x40e: @@ GetProperty(Stack[-1], Stack[-7])
0x40f: Pop(1)
0x410: Push("armor_")
0x411: PushEmpty(string, int)
0x412: Stack[-1] = Stack[-16]
0x413: Call2 0x3cc

0x414: Pop(1)
0x415: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x416: PushEmpty(bool, object, string)
0x417: Stack[-2] = Stack[-18]
0x418: Stack[-1] = Stack[-8]
0x419: Call2 0x3ee

0x41a: Pop(2)
0x41b: Pop(1); Push((bool) Stack[-1] == 0)
0x41c: IF (Stack[-1] == 0) GOTO 0x41f; Pop(1)

0x41d: Stack[-4] = (int) 0
0x41e: GOTO 0x421

0x41f: @@ GetProperty(Stack[-5], Stack[-4])
0x420: Pop(0)
0x421: PushEmpty(float, float, float)
0x422: Pop(0); Push(Stack[-9] + Stack[-7]);
0x423: Push((float)100.0)
0x424: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0x425: Stack[-1] = (int) 1
0x426: Call2 0x5c2

0x427: Stack[-6] = Stack[-3]
0x428: Pop(3)
0x429: Push("health")
0x42a: @@ GetProperty(Stack[-1], Stack[-3])
0x42b: Pop(1)
0x42c: Push((int) 1)
0x42d: Pop(1); Push(Stack[-1] - Stack[-4]);
0x42e: Stack[-2] = Stack[-15] * Stack[-1]; Pop(1);
0x42f: Push("health")
0x430: PushEmpty(float, float, float, float)
0x431: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0x432: Stack[-2] = (int) 0
0x433: Stack[-1] = (int) 1
0x434: Call2 0x5c9

0x435: Pop(3)
0x436: @@ SetProperty(Stack[-2], Stack[-1])
0x437: Pop(2)
0x438: PushEmpty(bool, object)
0x439: Stack[-1] = Stack[-17]
0x43a: Call2 0x3e9

0x43b: Pop(1)
0x43c: IF (Stack[-1] == 0) GOTO 0x441; Pop(1)

0x43d: PushEmpty(float)
0x43e: Stack[-1] = -Stack[-2]; Pop(0);
0x43f: Call2 0x603

0x440: Pop(1)
0x441: Stack[-16] = Stack[-1]
0x442: Return(); Pop(12)

0x443: PushEmpty(bool, bool)
0x444: @@ IsDead(Stack[-1])
0x445: Pop(0)
0x446: Stack[-4] = Stack[-1]
0x447: Return(); Pop(2)

0x448: PushEmpty(object, object, object, object)
0x449: Pop(0); Push((bool) Stack[-5] == 0)
0x44a: IF (Stack[-1] == 0) GOTO 0x44d; Pop(1)

0x44b: Stack[-6] = (bool) 0
0x44c: Return(); Pop(4)

0x44d: PushEmpty(bool)
0x44e: Stack[-1] = (bool) 0
0x44f: Push("IsDead")
0x450: Push((int) 1)
0x451: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x452: IF (Stack[-1] == 0) GOTO 0x459; Pop(1)

0x453: PushEmpty(bool, object)
0x454: Stack[-1] = Stack[-8]
0x455: Call2 0x443

0x456: Pop(1)
0x457: IF (Stack[-1] == 0) GOTO 0x459; Pop(1)

0x458: Stack[-1] = (bool) 1
0x459: IF (Stack[-1] == 0) GOTO 0x45c; Pop(1)

0x45a: Stack[-6] = (bool) 0
0x45b: Return(); Pop(4)

0x45c: @ GetScene(Stack[-2])
0x45d: Pop(0)
0x45e: Pop(0); Push((bool) Stack[-2] == 0)
0x45f: IF (Stack[-1] == 0) GOTO 0x462; Pop(1)

0x460: Stack[-6] = (bool) 0
0x461: Return(); Pop(4)

0x462: @@ GetScene(Stack[-1])
0x463: Pop(0)
0x464: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x465: IF (Stack[-1] == 0) GOTO 0x468; Pop(1)

0x466: Stack[-6] = (bool) 0
0x467: Return(); Pop(4)

0x468: Stack[-6] = (bool) 1
0x469: Return(); Pop(4)

0x46a: Stack[-1] = 0
0x46b: Stack[-2] = 0
0x46c: PushEmpty(int, int)
0x46d: PushEmpty(bool, object)
0x46e: Stack[-1] = Stack[-5]
0x46f: Call2 0x448

0x470: Pop(1)
0x471: Pop(1); Push((bool) Stack[-1] == 0)
0x472: IF (Stack[-1] == 0) GOTO 0x475; Pop(1)

0x473: Stack[-4] = (bool) 0
0x474: Return(); Pop(2)

0x475: PushEmpty(bool, object, string)
0x476: Stack[-2] = Stack[-6]
0x477: Stack[-1] = "noaccess"
0x478: Call2 0x3ee

0x479: Pop(2)
0x47a: Pop(1); Push((bool) Stack[-1] == 0)
0x47b: IF (Stack[-1] == 0) GOTO 0x47e; Pop(1)

0x47c: Stack[-4] = (bool) 1
0x47d: Return(); Pop(2)

0x47e: Push("noaccess")
0x47f: @@ GetProperty(Stack[-1], Stack[-2])
0x480: Pop(1)
0x481: Push((int) 0)
0x482: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x483: Return(); Pop(2)

0x484: PushEmpty(bool, int, cvector, cvector, cvector, cvector, string, bool, int, cvector, cvector, cvector, cvector, string)
0x485: Pop(0); Push((bool) Stack[-15] == 0)
0x486: IF (Stack[-1] == 0) GOTO 0x488; Pop(1)

0x487: Return(); Pop(14)

0x488: @ IsDead(Stack[-7])
0x489: Pop(0)
0x48a: Push(Stack[-7])
0x48b: IF (Stack[-1] == 0) GOTO 0x48d; Pop(1)

0x48c: Return(); Pop(14)

0x48d: @ GetSecondaryAnimationType(Stack[-6])
0x48e: Pop(0)
0x48f: Push((int) 0)
0x490: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x491: IF (Stack[-1] == 0) GOTO 0x493; Pop(1)

0x492: Return(); Pop(14)

0x493: @@ GetPosition(Stack[-5])
0x494: Pop(0)
0x495: @ GetPosition(Stack[-4])
0x496: Pop(0)
0x497: @ GetDirection(Stack[-3])
0x498: Pop(0)
0x499: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0x49a: Push(CvectorIndex(Stack[-2], 0))
0x49b: Push(CvectorIndex(Stack[-4], 0))
0x49c: Pop(2); Push(Stack[-2] * Stack[-1]);
0x49d: Push(CvectorIndex(Stack[-3], 2))
0x49e: Push(CvectorIndex(Stack[-5], 2))
0x49f: Pop(2); Push(Stack[-2] * Stack[-1]);
0x4a0: Pop(2); Push(Stack[-2] + Stack[-1]);
0x4a1: Push((int) 0)
0x4a2: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x4a3: IF (Stack[-1] == 0) GOTO 0x4a6; Pop(1)

0x4a4: Stack[-1] = "fhit"
0x4a5: GOTO 0x4a7

0x4a6: Stack[-1] = "bhit"
0x4a7: Push("hit_react")
0x4a8: Push("1")
0x4a9: Pop(1); Push(Stack[-3] + Stack[-1]);
0x4aa: Push("2")
0x4ab: Pop(1); Push(Stack[-4] + Stack[-1]);
0x4ac: Push((int) -10)
0x4ad: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x4ae: Pop(4)
0x4af: Return(); Pop(14)

0x4b0: PushEmpty(cvector, object, int, bool, cvector, cvector, int, int, cvector, cvector, object, int, bool, cvector, cvector, int, int, cvector)
0x4b1: PushEmpty(bool)
0x4b2: Stack[-1] = (bool) 0
0x4b3: PushEmpty(bool)
0x4b4: Stack[-1] = (bool) 0
0x4b5: Push(Stack[-23])
0x4b6: IF (Stack[-1] == 0) GOTO 0x4bb; Pop(1)

0x4b7: Push((int) 4)
0x4b8: Pop(1); Push((bool) Stack[-23] != Stack[-1])
0x4b9: IF (Stack[-1] == 0) GOTO 0x4bb; Pop(1)

0x4ba: Stack[-1] = (bool) 1
0x4bb: IF (Stack[-1] == 0) GOTO 0x4c0; Pop(1)

0x4bc: Push((int) 5)
0x4bd: Pop(1); Push((bool) Stack[-22] != Stack[-1])
0x4be: IF (Stack[-1] == 0) GOTO 0x4c0; Pop(1)

0x4bf: Stack[-1] = (bool) 1
0x4c0: IF (Stack[-1] == 0) GOTO 0x4ef; Pop(1)

0x4c1: PushEmpty(cvector, cvector)
0x4c2: PushEmpty(cvector, object)
0x4c3: Stack[-1] = Stack[-25]
0x4c4: Call2 0x3da

0x4c5: Stack[-3] = Stack[-2]
0x4c6: Pop(2)
0x4c7: Call2 0x5b4

0x4c8: Stack[-11] = Stack[-2]
0x4c9: Pop(2)
0x4ca: @ CreateVectorVector(Stack[-8])
0x4cb: Pop(0)
0x4cc: Stack[-7] = (int) 1
0x4cd: Push("hit")
0x4ce: Pop(1); Push(Stack[-1] + Stack[-8]);
0x4cf: @ GetGeometryLocator(Stack[-1], Stack[-7], Stack[-6], Stack[-5])
0x4d0: Pop(1)
0x4d1: Pop(0); Push((bool) Stack[-6] == 0)
0x4d2: IF (Stack[-1] == 0) GOTO 0x4d4; Pop(1)

0x4d3: GOTO 0x4dd

0x4d4: Pop(0); Push(Stack[-4] | Stack[-9]);
0x4d5: Push((float)0.70711)
0x4d6: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x4d7: IF (Stack[-1] == 0) GOTO 0x4da; Pop(1)

0x4d8: @@ add(Stack[-5])
0x4d9: Pop(0)
0x4da: Push((int) 1)
0x4db: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x4dc: GOTO 0x4cd

0x4dd: @@ size(Stack[-3])
0x4de: Pop(0)
0x4df: Push(Stack[-3])
0x4e0: IF (Stack[-1] == 0) GOTO 0x4ee; Pop(1)

0x4e1: @ irand(Stack[-2], Stack[-3])
0x4e2: Pop(0)
0x4e3: @@ get(Stack[-1], Stack[-2])
0x4e4: Pop(0)
0x4e5: PushEmpty(object, int, float, cvector, cvector)
0x4e6: Stack[-5] = Stack[-26]
0x4e7: Stack[-4] = Stack[-25]
0x4e8: Stack[-3] = Stack[-24]
0x4e9: Stack[-2] = Stack[-6]
0x4ea: Stack[-1] = -Stack[-14]; Pop(0);
0x4eb: Call2 0x4f4

0x4ec: Pop(5)
0x4ed: Return(); Pop(18)

0x4ee: Stack[-8] = 0
0x4ef: PushEmpty(object)
0x4f0: Stack[-1] = Stack[-22]
0x4f1: Call2 0x484

0x4f2: Pop(1)
0x4f3: Return(); Pop(18)

0x4f4: PushEmpty(object, object, object, object)
0x4f5: @ GetScene(Stack[-2])
0x4f6: Pop(0)
0x4f7: Push("scripted")
0x4f8: Push("blood_dir.xml")
0x4f9: @ AddActorByType(Stack[-3], Stack[-2], Stack[-4], Stack[-8], Stack[-7], Stack[-1])
0x4fa: Pop(2)
0x4fb: PushEmpty(object)
0x4fc: Stack[-1] = Stack[-10]
0x4fd: Call2 0x484

0x4fe: Pop(1)
0x4ff: Return(); Pop(4)

0x500: Stack[-1] = 0
0x501: Stack[-2] = 0
0x502: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x503: @@ GetPosition(Stack[-3])
0x504: Pop(0)
0x505: @ GetPosition(Stack[-2])
0x506: Pop(0)
0x507: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0x508: Push(CvectorIndex(Stack[-1], 0))
0x509: Push(CvectorIndex(Stack[-2], 2))
0x50a: @ RotateAsync(Stack[-2], Stack[-1])
0x50b: Pop(2)
0x50c: Return(); Pop(6)

0x50d: PushEmpty(float, float, float, float)
0x50e: @ GetEyesHeight(Stack[-2])
0x50f: Pop(0)
0x510: @@ GetEyesHeight(Stack[-1])
0x511: Pop(0)
0x512: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x513: Return(); Pop(4)

0x514: PushEmpty(bool, bool)
0x515: PushEmpty(bool, int, int)
0x516: Stack[-2] = Stack[-7]
0x517: Stack[-1] = Stack[-6]
0x518: Call2 0x5d4

0x519: Pop(2)
0x51a: IF (Stack[-1] == 0) GOTO 0x51e; Pop(1)

0x51b: Push((int) 0)
0x51c: @ AddItem(Stack[-2], Stack[-6], Stack[-1])
0x51d: Pop(1)
0x51e: Return(); Pop(2)

0x51f: PushEmpty(int, bool, int, bool)
0x520: PushEmpty(bool, int, int)
0x521: Stack[-2] = Stack[-10]
0x522: Stack[-1] = Stack[-9]
0x523: Call2 0x5d4

0x524: Pop(2)
0x525: IF (Stack[-1] == 0) GOTO 0x52d; Pop(1)

0x526: @ irand(Stack[-2], Stack[-5])
0x527: Pop(0)
0x528: Push((int) 0)
0x529: Push((int) 1)
0x52a: Pop(1); Push(Stack[-4] + Stack[-1]);
0x52b: @ AddItem(Stack[-3], Stack[-10], Stack[-2], Stack[-1])
0x52c: Pop(2)
0x52d: Return(); Pop(4)

0x52e: PushEmpty(bool, int, bool, int, bool, float, cvector, cvector, bool, int, bool, int, bool, float, cvector, cvector)
0x52f: @ IsExisting3DSound(Stack[-8], Stack[-17])
0x530: Pop(0)
0x531: Pop(0); Push((bool) Stack[-8] == 0)
0x532: IF (Stack[-1] == 0) GOTO 0x547; Pop(1)

0x533: Stack[-7] = (int) 0
0x534: Push((int) 1)
0x535: Pop(1); Push(Stack[-8] + Stack[-1]);
0x536: Pop(1); Push(Stack[-18] + Stack[-1]);
0x537: @ IsExisting3DSound(Stack[-7], Stack[-1])
0x538: Pop(1)
0x539: Pop(0); Push((bool) Stack[-6] == 0)
0x53a: IF (Stack[-1] == 0) GOTO 0x53c; Pop(1)

0x53b: GOTO 0x53f

0x53c: Push((int) 1)
0x53d: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x53e: GOTO 0x534

0x53f: Pop(0); Push((bool) Stack[-7] == 0)
0x540: IF (Stack[-1] == 0) GOTO 0x542; Pop(1)

0x541: Return(); Pop(16)

0x542: @ irand(Stack[-5], Stack[-7])
0x543: Pop(0)
0x544: Push((int) 1)
0x545: Pop(1); Push(Stack[-6] + Stack[-1]);
0x546: Stack[-18] = Stack[-18] + Stack[-1]; Pop(1);
0x547: @ Is3DSoundLoaded(Stack[-4], Stack[-17])
0x548: Pop(0)
0x549: Push(Stack[-4])
0x54a: IF (Stack[-1] == 0) GOTO 0x556; Pop(1)

0x54b: @ GetEyesHeight(Stack[-3])
0x54c: Pop(0)
0x54d: @ GetDirection(Stack[-2])
0x54e: Pop(0)
0x54f: Push((int) 50)
0x550: Stack[-2] = Stack[-3] * Stack[-1]; Pop(1);
0x551: Push(CvectorIndex(Stack[-1], 1))
0x552: Stack[-1] = Stack[-1] + Stack[-4]; Pop(0);
0x553: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x554: @ PlayGlobalSound(Stack[-17], Stack[-1])
0x555: Pop(0)
0x556: Return(); Pop(16)

0x557: PushEmpty()
0x558: Stack[-2] = (bool) 1
0x559: PushEmpty(bool)
0x55a: Stack[-1] = (bool) 1
0x55b: PushEmpty(bool)
0x55c: Stack[-1] = (bool) 1
0x55d: PushEmpty(bool)
0x55e: Stack[-1] = (bool) 1
0x55f: PushEmpty(bool)
0x560: Stack[-1] = (bool) 1
0x561: PushEmpty(bool)
0x562: Stack[-1] = (bool) 1
0x563: PushEmpty(bool)
0x564: Stack[-1] = (bool) 1
0x565: PushEmpty(bool)
0x566: Stack[-1] = (bool) 1
0x567: PushEmpty(bool)
0x568: Stack[-1] = (bool) 1
0x569: PushEmpty(bool)
0x56a: Stack[-1] = (bool) 1
0x56b: PushEmpty(bool)
0x56c: Stack[-1] = (bool) 1
0x56d: PushEmpty(bool)
0x56e: Stack[-1] = (bool) 1
0x56f: Push("woman")
0x570: Pop(1); Push((bool) Stack[-13] == Stack[-1])
0x571: IF (Stack[-1] == 0) GOTO 0x576; Pop(1)

0x572: Push("worker")
0x573: Pop(1); Push((bool) Stack[-13] == Stack[-1])
0x574: IF (Stack[-1] == 0) GOTO 0x576; Pop(1)

0x575: Stack[-1] = (bool) 0
0x576: IF (Stack[-1] == 0) GOTO 0x57b; Pop(1)

0x577: Push("butcher")
0x578: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0x579: IF (Stack[-1] == 0) GOTO 0x57b; Pop(1)

0x57a: Stack[-1] = (bool) 0
0x57b: IF (Stack[-1] == 0) GOTO 0x580; Pop(1)

0x57c: Push("wasted_girl")
0x57d: Pop(1); Push((bool) Stack[-11] == Stack[-1])
0x57e: IF (Stack[-1] == 0) GOTO 0x580; Pop(1)

0x57f: Stack[-1] = (bool) 0
0x580: IF (Stack[-1] == 0) GOTO 0x585; Pop(1)

0x581: Push("boy")
0x582: Pop(1); Push((bool) Stack[-10] == Stack[-1])
0x583: IF (Stack[-1] == 0) GOTO 0x585; Pop(1)

0x584: Stack[-1] = (bool) 0
0x585: IF (Stack[-1] == 0) GOTO 0x58a; Pop(1)

0x586: Push("vaxxabitka")
0x587: Pop(1); Push((bool) Stack[-9] == Stack[-1])
0x588: IF (Stack[-1] == 0) GOTO 0x58a; Pop(1)

0x589: Stack[-1] = (bool) 0
0x58a: IF (Stack[-1] == 0) GOTO 0x58f; Pop(1)

0x58b: Push("unosha")
0x58c: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x58d: IF (Stack[-1] == 0) GOTO 0x58f; Pop(1)

0x58e: Stack[-1] = (bool) 0
0x58f: IF (Stack[-1] == 0) GOTO 0x594; Pop(1)

0x590: Push("wasted_male")
0x591: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x592: IF (Stack[-1] == 0) GOTO 0x594; Pop(1)

0x593: Stack[-1] = (bool) 0
0x594: IF (Stack[-1] == 0) GOTO 0x599; Pop(1)

0x595: Push("alkash")
0x596: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x597: IF (Stack[-1] == 0) GOTO 0x599; Pop(1)

0x598: Stack[-1] = (bool) 0
0x599: IF (Stack[-1] == 0) GOTO 0x59e; Pop(1)

0x59a: Push("dohodyaga")
0x59b: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x59c: IF (Stack[-1] == 0) GOTO 0x59e; Pop(1)

0x59d: Stack[-1] = (bool) 0
0x59e: IF (Stack[-1] == 0) GOTO 0x5a3; Pop(1)

0x59f: Push("vaxxabit")
0x5a0: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x5a1: IF (Stack[-1] == 0) GOTO 0x5a3; Pop(1)

0x5a2: Stack[-1] = (bool) 0
0x5a3: IF (Stack[-1] == 0) GOTO 0x5a8; Pop(1)

0x5a4: Push("nudegirl")
0x5a5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5a6: IF (Stack[-1] == 0) GOTO 0x5a8; Pop(1)

0x5a7: Stack[-1] = (bool) 0
0x5a8: IF (Stack[-1] == 0) GOTO 0x5ad; Pop(1)

0x5a9: Push("morlok")
0x5aa: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5ab: IF (Stack[-1] == 0) GOTO 0x5ad; Pop(1)

0x5ac: Stack[-2] = (bool) 0
0x5ad: Return(); Pop(0)

0x5ae: PushEmpty(object, object)
0x5af: @ self(Stack[-1])
0x5b0: Pop(0)
0x5b1: Stack[-3] = Stack[-1]
0x5b2: Return(); Pop(2)

0x5b3: Stack[-1] = 0
0x5b4: PushEmpty(float, float)
0x5b5: Pop(0); Push(Stack[-3] | Stack[-3]);
0x5b6: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x5b7: Push((float)0.0)
0x5b8: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x5b9: IF (Stack[-1] == 0) GOTO 0x5bc; Pop(1)

0x5ba: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x5bb: Return(); Pop(2)

0x5bc: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x5bd: Return(); Pop(2)

0x5be: PushEmpty(cvector, cvector)
0x5bf: Stack[-1] = Stack[-3] - Stack[-4]; Pop(0);
0x5c0: Stack[-5] = Stack[-1] | Stack[-1]; Pop(0);
0x5c1: Return(); Pop(2)

0x5c2: PushEmpty()
0x5c3: Pop(0); Push((bool) Stack[-2] < Stack[-1])
0x5c4: IF (Stack[-1] == 0) GOTO 0x5c7; Pop(1)

0x5c5: Stack[-3] = Stack[-2]
0x5c6: GOTO 0x5c8

0x5c7: Stack[-3] = Stack[-1]
0x5c8: Return(); Pop(0)

0x5c9: PushEmpty()
0x5ca: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x5cb: IF (Stack[-1] == 0) GOTO 0x5ce; Pop(1)

0x5cc: Stack[-4] = Stack[-2]
0x5cd: Return(); Pop(0)

0x5ce: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x5cf: IF (Stack[-1] == 0) GOTO 0x5d2; Pop(1)

0x5d0: Stack[-4] = Stack[-1]
0x5d1: Return(); Pop(0)

0x5d2: Stack[-4] = Stack[-3]
0x5d3: Return(); Pop(0)

0x5d4: PushEmpty(int, int)
0x5d5: @ irand(Stack[-1], Stack[-3])
0x5d6: Pop(0)
0x5d7: Stack[-5] = Stack[-1] < Stack[-4]; Pop(0);
0x5d8: Return(); Pop(2)

0x5d9: PushEmpty(object, object)
0x5da: @ CreateObjectSet(Stack[-1])
0x5db: Pop(0)
0x5dc: Stack[-3] = Stack[-1]
0x5dd: Return(); Pop(2)

0x5de: Stack[-1] = 0
0x5df: PushEmpty()
0x5e0: Push(CvectorIndex(Stack[-2], 0))
0x5e1: Push(CvectorIndex(Stack[-2], 0))
0x5e2: Pop(2); Push(Stack[-2] * Stack[-1]);
0x5e3: Push(CvectorIndex(Stack[-3], 2))
0x5e4: Push(CvectorIndex(Stack[-3], 2))
0x5e5: Pop(2); Push(Stack[-2] * Stack[-1]);
0x5e6: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x5e7: Return(); Pop(0)

0x5e8: PushEmpty()
0x5e9: Push(CvectorIndex(Stack[-1], 0))
0x5ea: Push(CvectorIndex(Stack[-2], 0))
0x5eb: Pop(2); Push(Stack[-2] * Stack[-1]);
0x5ec: Push(CvectorIndex(Stack[-2], 2))
0x5ed: Push(CvectorIndex(Stack[-3], 2))
0x5ee: Pop(2); Push(Stack[-2] * Stack[-1]);
0x5ef: Pop(2); Push(Stack[-2] + Stack[-1]);
0x5f0: Stack[-3] = Sqrt(Stack[-1]); Pop(1);
0x5f1: Return(); Pop(0)

0x5f2: PushEmpty()
0x5f3: PushEmpty(float, cvector, cvector)
0x5f4: Stack[-2] = Stack[-5]
0x5f5: Stack[-1] = Stack[-4]
0x5f6: Call2 0x5df

0x5f7: Pop(2)
0x5f8: PushEmpty(float, cvector)
0x5f9: Stack[-1] = Stack[-5]
0x5fa: Call2 0x5e8

0x5fb: Pop(1)
0x5fc: PushEmpty(float, cvector)
0x5fd: Stack[-1] = Stack[-5]
0x5fe: Call2 0x5e8

0x5ff: Pop(1)
0x600: Pop(2); Push(Stack[-2] * Stack[-1]);
0x601: Stack[-5] = Stack[-2] / Stack[-1]; Pop(2);
0x602: Return(); Pop(0)

0x603: PushEmpty(object, object)
0x604: @ CreateFloatVector(Stack[-1])
0x605: Pop(0)
0x606: @@ add(Stack[-3])
0x607: Pop(0)
0x608: Push((int) 0)
0x609: Pop(1); Push((bool) Stack[-4] < Stack[-1])
0x60a: IF (Stack[-1] == 0) GOTO 0x60f; Pop(1)

0x60b: Push((float)0.7)
0x60c: Push((int) 500)
0x60d: @ RumblePlay(Stack[-2], Stack[-1])
0x60e: Pop(2)
0x60f: Push((int) 15)
0x610: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x611: Pop(1)
0x612: Return(); Pop(2)

0x613: Stack[-1] = 0
0x614: PushEmpty(bool, bool)
0x615: @ IsPlayerActor(Stack[-3], Stack[-1])
0x616: Pop(0)
0x617: Push(Stack[-1])
0x618: IF (Stack[-1] == 0) GOTO 0x61c; Pop(1)

0x619: Push("attack")
0x61a: @ PlayGlobalMusic(Stack[-1])
0x61b: Pop(1)
0x61c: Return(); Pop(2)

0x61d: PushEmpty(object, object)
0x61e: @ GetScene(Stack[-1])
0x61f: Pop(0)
0x620: Push("battle")
0x621: PushEmpty(object)
0x622: Call2 0x5ae

0x623: Pop(0)
0x624: @ BroadcastMessage(Stack[-2], Stack[-1], Stack[-3])
0x625: Pop(2)
0x626: Return(); Pop(2)

0x627: Stack[-1] = 0
0x628: PushEmpty(int, int)
0x629: Push("branch")
0x62a: @ GetVariable(Stack[-1], Stack[-2])
0x62b: Pop(1)
0x62c: Stack[-3] = Stack[-1]
0x62d: Return(); Pop(2)

0x62e: PushEmpty()
0x62f: PushEmpty(int)
0x630: Call2 0x628

0x631: Pop(0)
0x632: Push((int) 1)
0x633: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x634: IF (Stack[-1] == 0) GOTO 0x638; Pop(1)

0x635: @ WorkWithCorpse(Stack[-1])
0x636: Pop(0)
0x637: GOTO 0x63a

0x638: @ Barter(Stack[-1])
0x639: Pop(0)
0x63a: Return(); Pop(0)

0x63b: PushEmpty(int, bool, int, bool)
0x63c: Pop(0); Push((bool) Stack[-6] > Stack[-5])
0x63d: IF (Stack[-1] == 0) GOTO 0x642; Pop(1)

0x63e: Push("GenerateMoney: iMin > iMax")
0x63f: @ Trace(Stack[-1])
0x640: Pop(1)
0x641: Return(); Pop(4)

0x642: Stack[-2] = (int) 0
0x643: Pop(0); Push((bool) Stack[-6] != Stack[-5])
0x644: IF (Stack[-1] == 0) GOTO 0x649; Pop(1)

0x645: Pop(0); Push(Stack[-5] - Stack[-6]);
0x646: @ irand(Stack[-3], Stack[-1])
0x647: Pop(1)
0x648: GOTO 0x64d

0x649: Push((int) 0)
0x64a: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x64b: IF (Stack[-1] == 0) GOTO 0x64d; Pop(1)

0x64c: Return(); Pop(4)

0x64d: Stack[-2] = Stack[-2] + Stack[-6]; Pop(0);
0x64e: Push((int) 0)
0x64f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x650: IF (Stack[-1] == 0) GOTO 0x652; Pop(1)

0x651: Return(); Pop(4)

0x652: PushEmpty(int, string)
0x653: Stack[-1] = "Money"
0x654: Call2 0x6a7

0x655: Pop(1)
0x656: Push((int) 0)
0x657: @ AddItem(Stack[-3], Stack[-2], Stack[-1], Stack[-4])
0x658: Pop(2)
0x659: Return(); Pop(4)

0x65a: PushEmpty(object, int, bool, object, int, bool)
0x65b: @ CreateInvItem(Stack[-3])
0x65c: Pop(0)
0x65d: @@ SetItemName(Stack[-7])
0x65e: Pop(0)
0x65f: Push("Organ")
0x660: Push((int) 1)
0x661: @@ SetProperty(Stack[-2], Stack[-1])
0x662: Pop(2)
0x663: @@ GetItemID(Stack[-2])
0x664: Pop(0)
0x665: Push((int) 0)
0x666: Push((int) 1)
0x667: @ AddItem(Stack[-3], Stack[-5], Stack[-2], Stack[-1])
0x668: Pop(2)
0x669: Return(); Pop(6)

0x66a: Stack[-3] = 0
0x66b: PushEmpty(int)
0x66c: Call2 0x628

0x66d: Pop(0)
0x66e: Push((int) 1)
0x66f: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x670: IF (Stack[-1] == 0) GOTO 0x672; Pop(1)

0x671: Return(); Pop(0)

0x672: PushEmpty(string)
0x673: Stack[-1] = "liver"
0x674: Call2 0x65a

0x675: Pop(1)
0x676: PushEmpty(string)
0x677: Stack[-1] = "kidney"
0x678: Call2 0x65a

0x679: Pop(1)
0x67a: PushEmpty(string)
0x67b: Stack[-1] = "heart"
0x67c: Call2 0x65a

0x67d: Pop(1)
0x67e: PushEmpty(string)
0x67f: Stack[-1] = "blood"
0x680: Call2 0x65a

0x681: Pop(1)
0x682: Return(); Pop(0)

0x683: PushEmpty(int, bool, int, bool)
0x684: Push((int) 0)
0x685: @ ClearSubContainer(Stack[-1])
0x686: Pop(1)
0x687: PushEmpty(int, int)
0x688: Stack[-2] = (int) 500
0x689: Stack[-1] = (int) 1000
0x68a: Call2 0x63b

0x68b: Pop(2)
0x68c: PushEmpty(string, int, int, int)
0x68d: Stack[-4] = "rifle_ammo"
0x68e: Stack[-3] = (int) 1
0x68f: Stack[-2] = (int) 3
0x690: Stack[-1] = (int) 3
0x691: Call2 0x51f

0x692: Pop(4)
0x693: PushEmpty(string, int, int, int)
0x694: Stack[-4] = "rusk"
0x695: Stack[-3] = (int) 1
0x696: Stack[-2] = (int) 3
0x697: Stack[-1] = (int) 2
0x698: Call2 0x51f

0x699: Pop(4)
0x69a: PushEmpty(string, int, int)
0x69b: Stack[-3] = "bandage"
0x69c: Stack[-2] = (int) 1
0x69d: Stack[-1] = (int) 6
0x69e: Call2 0x514

0x69f: Pop(3)
0x6a0: PushEmpty(string, int, int)
0x6a1: Stack[-3] = "tourniquet"
0x6a2: Stack[-2] = (int) 1
0x6a3: Stack[-1] = (int) 6
0x6a4: Call2 0x514

0x6a5: Pop(3)
0x6a6: Return(); Pop(4)

0x6a7: PushEmpty(int, int)
0x6a8: @ GetInvItemByName(Stack[-1], Stack[-3])
0x6a9: Pop(0)
0x6aa: Stack[-4] = Stack[-1]
0x6ab: Return(); Pop(2)

0x6ac: PushEmpty()
0x6ad: PushEmpty(object)
0x6ae: Stack[-1] = Stack[-2]
0x6af: Push(-1, 0); TaskCall(0)
0x6b0: Call2 0x0

0x6b1: Pop(-1, 0); TaskReturn
0x6b2: Pop(1)
0x6b3: Return(); Pop(0)

0x6b4: PushEmpty()
0x6b5: PushEmpty(object, int, float)
0x6b6: Stack[-3] = Stack[-7]
0x6b7: Stack[-2] = Stack[-6]
0x6b8: Stack[-1] = Stack[-5]
0x6b9: Call2 0x4b0

0x6ba: Pop(3)
0x6bb: Return(); Pop(0)

0x6bc: PushEmpty()
0x6bd: PushEmpty(object, int, float, cvector, cvector)
0x6be: Stack[-5] = Stack[-11]
0x6bf: Stack[-4] = Stack[-10]
0x6c0: Stack[-3] = Stack[-9]
0x6c1: Stack[-2] = Stack[-7]
0x6c2: Stack[-1] = Stack[-6]
0x6c3: Call2 0x4f4

0x6c4: Pop(5)
0x6c5: Return(); Pop(0)

0x6c6: PushEmpty(float, float)
0x6c7: Push("health")
0x6c8: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x6c9: IF (Stack[-1] == 0) GOTO 0x6d2; Pop(1)

0x6ca: Push("health")
0x6cb: @ GetProperty(Stack[-1], Stack[-2])
0x6cc: Pop(1)
0x6cd: Push((int) 0)
0x6ce: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x6cf: IF (Stack[-1] == 0) GOTO 0x6d2; Pop(1)

0x6d0: @ SignalDeath(Stack[-4])
0x6d1: Pop(0)
0x6d2: Return(); Pop(2)

0x6d3: PushEmpty()
0x6d4: PushEmpty(bool, object)
0x6d5: Stack[-1] = Stack[-3]
0x6d6: Call2 0x3e9

0x6d7: Pop(1)
0x6d8: IF (Stack[-1] == 0) GOTO 0x6e0; Pop(1)

0x6d9: PushEmpty(object)
0x6da: Call2 0x5ae

0x6db: Pop(0)
0x6dc: Push((float)-0.13)
0x6dd: Push((bool) 1)
0x6de: @ ReportReputationChange(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x6df: Pop(3)
0x6e0: PushEmpty(object)
0x6e1: Stack[-1] = Stack[-2]
0x6e2: Call2 0x84b

0x6e3: Pop(1)
0x6e4: Return(); Pop(0)

0x6e5: PushEmpty(string, string)
0x6e6: PushEmpty(bool, object, string)
0x6e7: Stack[-2] = Stack[-7]
0x6e8: Stack[-1] = "class"
0x6e9: Call2 0x3ee

0x6ea: Pop(2)
0x6eb: Pop(1); Push((bool) Stack[-1] == 0)
0x6ec: IF (Stack[-1] == 0) GOTO 0x6ef; Pop(1)

0x6ed: Stack[-5] = (bool) 0
0x6ee: Return(); Pop(2)

0x6ef: Push("class")
0x6f0: @@ GetProperty(Stack[-1], Stack[-2])
0x6f1: Pop(1)
0x6f2: PushEmpty(bool)
0x6f3: Stack[-1] = (bool) 1
0x6f4: PushEmpty(bool)
0x6f5: Stack[-1] = (bool) 1
0x6f6: PushEmpty(bool)
0x6f7: Stack[-1] = (bool) 1
0x6f8: PushEmpty(bool)
0x6f9: Stack[-1] = (bool) 1
0x6fa: PushEmpty(bool)
0x6fb: Stack[-1] = (bool) 1
0x6fc: PushEmpty(bool)
0x6fd: Stack[-1] = (bool) 1
0x6fe: PushEmpty(bool)
0x6ff: Stack[-1] = (bool) 1
0x700: PushEmpty(bool)
0x701: Stack[-1] = (bool) 1
0x702: PushEmpty(bool)
0x703: Stack[-1] = (bool) 1
0x704: PushEmpty(bool)
0x705: Stack[-1] = (bool) 1
0x706: Push("patrol")
0x707: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0x708: IF (Stack[-1] == 0) GOTO 0x70d; Pop(1)

0x709: Push("sanitar")
0x70a: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0x70b: IF (Stack[-1] == 0) GOTO 0x70d; Pop(1)

0x70c: Stack[-1] = (bool) 0
0x70d: IF (Stack[-1] == 0) GOTO 0x712; Pop(1)

0x70e: Push("soldier")
0x70f: Pop(1); Push((bool) Stack[-11] == Stack[-1])
0x710: IF (Stack[-1] == 0) GOTO 0x712; Pop(1)

0x711: Stack[-1] = (bool) 0
0x712: IF (Stack[-1] == 0) GOTO 0x717; Pop(1)

0x713: Push("woman")
0x714: Pop(1); Push((bool) Stack[-10] == Stack[-1])
0x715: IF (Stack[-1] == 0) GOTO 0x717; Pop(1)

0x716: Stack[-1] = (bool) 0
0x717: IF (Stack[-1] == 0) GOTO 0x71c; Pop(1)

0x718: Push("wasted_girl")
0x719: Pop(1); Push((bool) Stack[-9] == Stack[-1])
0x71a: IF (Stack[-1] == 0) GOTO 0x71c; Pop(1)

0x71b: Stack[-1] = (bool) 0
0x71c: IF (Stack[-1] == 0) GOTO 0x721; Pop(1)

0x71d: Push("vaxxabitka")
0x71e: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x71f: IF (Stack[-1] == 0) GOTO 0x721; Pop(1)

0x720: Stack[-1] = (bool) 0
0x721: IF (Stack[-1] == 0) GOTO 0x726; Pop(1)

0x722: Push("vaxxabit")
0x723: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x724: IF (Stack[-1] == 0) GOTO 0x726; Pop(1)

0x725: Stack[-1] = (bool) 0
0x726: IF (Stack[-1] == 0) GOTO 0x72b; Pop(1)

0x727: Push("little_girl")
0x728: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x729: IF (Stack[-1] == 0) GOTO 0x72b; Pop(1)

0x72a: Stack[-1] = (bool) 0
0x72b: IF (Stack[-1] == 0) GOTO 0x730; Pop(1)

0x72c: Push("girl")
0x72d: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x72e: IF (Stack[-1] == 0) GOTO 0x730; Pop(1)

0x72f: Stack[-1] = (bool) 0
0x730: IF (Stack[-1] == 0) GOTO 0x735; Pop(1)

0x731: Push("dohodyaga")
0x732: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x733: IF (Stack[-1] == 0) GOTO 0x735; Pop(1)

0x734: Stack[-1] = (bool) 0
0x735: IF (Stack[-1] == 0) GOTO 0x73a; Pop(1)

0x736: Push("nudegirl")
0x737: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x738: IF (Stack[-1] == 0) GOTO 0x73a; Pop(1)

0x739: Stack[-1] = (bool) 0
0x73a: IF (Stack[-1] == 0) GOTO 0x73d; Pop(1)

0x73b: Stack[-5] = (bool) 1
0x73c: Return(); Pop(2)

0x73d: Push(Stack[-3])
0x73e: IF (Stack[-1] == 0) GOTO 0x741; Pop(1)

0x73f: Stack[-5] = (bool) 0
0x740: Return(); Pop(2)

0x741: Stack[-5] = (bool) 1
0x742: PushEmpty(bool)
0x743: Stack[-1] = (bool) 1
0x744: PushEmpty(bool)
0x745: Stack[-1] = (bool) 1
0x746: PushEmpty(bool)
0x747: Stack[-1] = (bool) 1
0x748: PushEmpty(bool)
0x749: Stack[-1] = (bool) 1
0x74a: PushEmpty(bool)
0x74b: Stack[-1] = (bool) 1
0x74c: Push("worker")
0x74d: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x74e: IF (Stack[-1] == 0) GOTO 0x753; Pop(1)

0x74f: Push("butcher")
0x750: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x751: IF (Stack[-1] == 0) GOTO 0x753; Pop(1)

0x752: Stack[-1] = (bool) 0
0x753: IF (Stack[-1] == 0) GOTO 0x758; Pop(1)

0x754: Push("boy")
0x755: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x756: IF (Stack[-1] == 0) GOTO 0x758; Pop(1)

0x757: Stack[-1] = (bool) 0
0x758: IF (Stack[-1] == 0) GOTO 0x75d; Pop(1)

0x759: Push("unosha")
0x75a: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x75b: IF (Stack[-1] == 0) GOTO 0x75d; Pop(1)

0x75c: Stack[-1] = (bool) 0
0x75d: IF (Stack[-1] == 0) GOTO 0x762; Pop(1)

0x75e: Push("wasted_male")
0x75f: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x760: IF (Stack[-1] == 0) GOTO 0x762; Pop(1)

0x761: Stack[-1] = (bool) 0
0x762: IF (Stack[-1] == 0) GOTO 0x767; Pop(1)

0x763: Push("alkash")
0x764: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x765: IF (Stack[-1] == 0) GOTO 0x767; Pop(1)

0x766: Stack[-1] = (bool) 0
0x767: IF (Stack[-1] == 0) GOTO 0x76c; Pop(1)

0x768: Push("morlok")
0x769: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x76a: IF (Stack[-1] == 0) GOTO 0x76c; Pop(1)

0x76b: Stack[-5] = (bool) 0
0x76c: Return(); Pop(2)

0x76d: Push(GlobalVars[0])
0x76e: PushEmpty(object)
0x76f: Call2 0x5d9

0x770: Stack[-2] = Stack[-1]
0x771: Pop(1)
0x772: GlobalVars[0] = Stack[-1]; Pop(1)
0x773: Return(); Pop(0)

0x774: PushEmpty()
0x775: PushEmpty(object, bool)
0x776: Stack[-2] = Stack[-4]
0x777: Stack[-1] = Stack[-3]
0x778: Push(-2, 3); TaskCall(3)
0x779: Call2 0x1c7

0x77a: Pop(-2, 3); TaskReturn
0x77b: Pop(2)
0x77c: @ ResetAAS()
0x77d: Pop(0)
0x77e: Return(); Pop(0)

0x77f: PushEmpty(bool, bool)
0x780: Pop(0); Push((bool) Stack[-3] == 0)
0x781: IF (Stack[-1] == 0) GOTO 0x783; Pop(1)

0x782: Return(); Pop(2)

0x783: Push(GlobalVars[0])
0x784: @@ in(Stack[-2], Stack[-4])
0x785: Pop(1)
0x786: Pop(0); Push((bool) Stack[-1] == 0)
0x787: IF (Stack[-1] == 0) GOTO 0x78b; Pop(1)

0x788: Push(GlobalVars[0])
0x789: @@ add(Stack[-4])
0x78a: Pop(1)
0x78b: PushEmpty(bool, object)
0x78c: Stack[-1] = Stack[-5]
0x78d: Call2 0x3e9

0x78e: Pop(1)
0x78f: IF (Stack[-1] == 0) GOTO 0x796; Pop(1)

0x790: PushEmpty(object)
0x791: Call2 0x5ae

0x792: Pop(0)
0x793: Push((float)-0.07)
0x794: @ ReportReputationChange(Stack[-5], Stack[-2], Stack[-1])
0x795: Pop(2)
0x796: Return(); Pop(2)

0x797: PushEmpty()
0x798: PushEmpty(object)
0x799: Stack[-1] = Stack[-2]
0x79a: Call2 0x77f

0x79b: Pop(1)
0x79c: PushEmpty(object, bool)
0x79d: Stack[-2] = Stack[-3]
0x79e: Stack[-1] = (bool) 1
0x79f: Call2 0x774

0x7a0: Pop(2)
0x7a1: Return(); Pop(0)

0x7a2: PushEmpty(bool, bool)
0x7a3: Push(GlobalVars[0])
0x7a4: @@ in(Stack[-2], Stack[-4])
0x7a5: Pop(1)
0x7a6: Push(Stack[-1])
0x7a7: IF (Stack[-1] == 0) GOTO 0x7ae; Pop(1)

0x7a8: PushEmpty(object, bool)
0x7a9: Stack[-2] = Stack[-5]
0x7aa: Stack[-1] = (bool) 1
0x7ab: Call2 0x774

0x7ac: Pop(2)
0x7ad: GOTO 0x7b6

0x7ae: PushEmpty(object)
0x7af: Stack[-1] = Stack[-4]
0x7b0: Push(-1, 2); TaskCall(2)
0x7b1: Call2 0x11d

0x7b2: Pop(-1, 2); TaskReturn
0x7b3: Pop(1)
0x7b4: @ ResetAAS()
0x7b5: Pop(0)
0x7b6: Return(); Pop(2)

0x7b7: PushEmpty()
0x7b8: PushEmpty(float, object)
0x7b9: Stack[-1] = Stack[-3]
0x7ba: Call2 0x3e1

0x7bb: Pop(1)
0x7bc: Push((float)40000.0)
0x7bd: Stack[-4] = Stack[-2] <= Stack[-1]; Pop(2);
0x7be: Return(); Pop(0)

0x7bf: PushEmpty(float, string, float, float, string, float)
0x7c0: PushEmpty(bool, object)
0x7c1: Stack[-1] = Stack[-9]
0x7c2: Call2 0x46c

0x7c3: Pop(1)
0x7c4: Pop(1); Push((bool) Stack[-1] == 0)
0x7c5: IF (Stack[-1] == 0) GOTO 0x7c8; Pop(1)

0x7c6: Stack[-8] = (bool) 0
0x7c7: Return(); Pop(6)

0x7c8: PushEmpty(bool, object)
0x7c9: Stack[-1] = Stack[-9]
0x7ca: Call2 0x3e9

0x7cb: Pop(1)
0x7cc: IF (Stack[-1] == 0) GOTO 0x7d3; Pop(1)

0x7cd: Push("reputation")
0x7ce: @@ GetProperty(Stack[-1], Stack[-4])
0x7cf: Pop(1)
0x7d0: Push((float)0.33)
0x7d1: Stack[-9] = Stack[-4] < Stack[-1]; Pop(1);
0x7d2: Return(); Pop(6)

0x7d3: PushEmpty(bool, object, string)
0x7d4: Stack[-2] = Stack[-10]
0x7d5: Stack[-1] = "class"
0x7d6: Call2 0x3ee

0x7d7: Pop(2)
0x7d8: Pop(1); Push((bool) Stack[-1] == 0)
0x7d9: IF (Stack[-1] == 0) GOTO 0x7dc; Pop(1)

0x7da: Stack[-8] = (bool) 0
0x7db: Return(); Pop(6)

0x7dc: Push("class")
0x7dd: @@ GetProperty(Stack[-1], Stack[-3])
0x7de: Pop(1)
0x7df: PushEmpty(bool)
0x7e0: Stack[-1] = (bool) 1
0x7e1: PushEmpty(bool)
0x7e2: Stack[-1] = (bool) 1
0x7e3: Push("bomber")
0x7e4: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x7e5: IF (Stack[-1] == 0) GOTO 0x7ea; Pop(1)

0x7e6: Push("hunter")
0x7e7: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x7e8: IF (Stack[-1] == 0) GOTO 0x7ea; Pop(1)

0x7e9: Stack[-1] = (bool) 0
0x7ea: IF (Stack[-1] == 0) GOTO 0x7ef; Pop(1)

0x7eb: Push("grabitel")
0x7ec: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x7ed: IF (Stack[-1] == 0) GOTO 0x7ef; Pop(1)

0x7ee: Stack[-1] = (bool) 0
0x7ef: IF (Stack[-1] == 0) GOTO 0x7f2; Pop(1)

0x7f0: Stack[-8] = (bool) 1
0x7f1: Return(); Pop(6)

0x7f2: PushEmpty(bool, object, string)
0x7f3: Stack[-2] = Stack[-10]
0x7f4: Stack[-1] = "disease"
0x7f5: Call2 0x3ee

0x7f6: Pop(2)
0x7f7: Pop(1); Push((bool) Stack[-1] == 0)
0x7f8: IF (Stack[-1] == 0) GOTO 0x7fb; Pop(1)

0x7f9: Stack[-8] = (bool) 0
0x7fa: Return(); Pop(6)

0x7fb: PushEmpty(bool)
0x7fc: Stack[-1] = (bool) 1
0x7fd: PushEmpty(bool, string)
0x7fe: Stack[-1] = Stack[-5]
0x7ff: Call2 0x557

0x800: Pop(1)
0x801: IF (Stack[-1] == 0) GOTO 0x806; Pop(1)

0x802: Push("dog")
0x803: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x804: IF (Stack[-1] == 0) GOTO 0x806; Pop(1)

0x805: Stack[-1] = (bool) 0
0x806: IF (Stack[-1] == 0) GOTO 0x80d; Pop(1)

0x807: Push("disease")
0x808: @@ GetProperty(Stack[-1], Stack[-2])
0x809: Pop(1)
0x80a: Push((int) 0)
0x80b: Stack[-9] = Stack[-2] > Stack[-1]; Pop(1);
0x80c: Return(); Pop(6)

0x80d: Stack[-8] = (bool) 0
0x80e: Return(); Pop(6)

0x80f: PushEmpty(bool, bool)
0x810: PushEmpty(bool, object)
0x811: Stack[-1] = Stack[-5]
0x812: Call2 0x46c

0x813: Pop(1)
0x814: Pop(1); Push((bool) Stack[-1] == 0)
0x815: IF (Stack[-1] == 0) GOTO 0x818; Pop(1)

0x816: Stack[-4] = (bool) 0
0x817: Return(); Pop(2)

0x818: Push(GlobalVars[0])
0x819: @@ in(Stack[-2], Stack[-4])
0x81a: Pop(1)
0x81b: Push(Stack[-1])
0x81c: IF (Stack[-1] == 0) GOTO 0x81f; Pop(1)

0x81d: Stack[-4] = (bool) 1
0x81e: Return(); Pop(2)

0x81f: PushEmpty(bool, object)
0x820: Stack[-1] = Stack[-5]
0x821: Call2 0x7bf

0x822: Stack[-6] = Stack[-2]
0x823: Pop(2)
0x824: Return(); Pop(2)

0x825: PushEmpty()
0x826: PushEmpty(object)
0x827: Stack[-1] = Stack[-2]
0x828: Call2 0x845

0x829: Pop(1)
0x82a: Return(); Pop(0)

0x82b: PushEmpty(bool, bool)
0x82c: PushEmpty(bool, object, bool)
0x82d: Stack[-2] = Stack[-7]
0x82e: Stack[-1] = !Stack[-6]; Pop(0);
0x82f: Call2 0x6e5

0x830: Pop(2)
0x831: IF (Stack[-1] == 0) GOTO 0x843; Pop(1)

0x832: @ CanSee(Stack[-1], Stack[-5])
0x833: Pop(0)
0x834: PushEmpty(bool)
0x835: Stack[-1] = (bool) 1
0x836: Push(Stack[-2])
0x837: IF (Stack[-1] == 0) GOTO 0x840; Pop(1)

0x838: PushEmpty(float, object)
0x839: Stack[-1] = Stack[-8]
0x83a: Call2 0x3e1

0x83b: Pop(1)
0x83c: Push((float)490000.0)
0x83d: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x83e: IF (Stack[-1] == 0) GOTO 0x840; Pop(1)

0x83f: Stack[-1] = (bool) 0
0x840: IF (Stack[-1] == 0) GOTO 0x843; Pop(1)

0x841: Stack[-6] = (bool) 1
0x842: Return(); Pop(2)

0x843: Stack[-6] = (bool) 0
0x844: Return(); Pop(2)

0x845: PushEmpty()
0x846: PushEmpty(object)
0x847: Stack[-1] = Stack[-2]
0x848: Call2 0x7a2

0x849: Pop(1)
0x84a: Return(); Pop(0)

0x84b: PushEmpty(object, object)
0x84c: PushEmpty(bool, object)
0x84d: Stack[-1] = Stack[-5]
0x84e: Call2 0x3e9

0x84f: Pop(1)
0x850: IF (Stack[-1] == 0) GOTO 0x859; Pop(1)

0x851: @ GetScene(Stack[-1])
0x852: Pop(0)
0x853: PushEmpty(object)
0x854: Call2 0x5ae

0x855: Pop(0)
0x856: @@ RemoveStationaryActor(Stack[-1])
0x857: Pop(1)
0x858: Stack[-1] = 0
0x859: PushEmpty(object)
0x85a: Stack[-1] = Stack[-4]
0x85b: Call2 0x6ac

0x85c: Pop(1)
0x85d: Return(); Pop(2)

