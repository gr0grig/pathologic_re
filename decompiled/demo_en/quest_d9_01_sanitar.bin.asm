GlobalVarCount = 5
	G_VAR_0 object 
	G_VAR_1 object 
	G_VAR_2 float 
	G_VAR_3 bool 
	G_VAR_4 object 

Strings:
	all
	attack_on
	attack_off
	RemoveStationaryActor
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
	cattack
	@GetHeight
	GetHeight
	in
	reputation
	disease
	bomber
	hunter
	grabitel
	rat_big
	dog
	Intersect
	Next

Import:
	SetTimer (2 args)
	GetDirection (1 args)
	Hold (0 args)
	Rotate (3 args)
	ResetAAS (0 args)
	StopGroup0 (0 args)
	Face (1 args)
	SetAttackState (1 args)
	PlayAnimation (2 args)
	WaitForAnimEnd (0 args)
	StopAsync (0 args)
	KillTimer (1 args)
	GetScene (1 args)
	RemoveActor (1 args)
	IsPlayerActor (2 args)
	SetRTEnvelope (2 args)
	IsOverrideActive (1 args)
	GetPosition (1 args)
	RemoveRTEnvelope (0 args)
	SetDeathState (0 args)
	Stop (0 args)
	LookAsync (3 args)
	UnlookAsync (1 args)
	LockAnimationEnd (2 args)
	RemoveEnvelope (0 args)
	StopSecondaryAnimation (0 args)
	IsDead (1 args)
	GetSecondaryAnimationType (1 args)
	FadeSecondaryAnimation (4 args)
	CreateVectorVector (1 args)
	GetGeometryLocator (4 args)
	irand (2 args)
	AddActorByType (6 args)
	AddItem (4 args)
	IsExisting3DSound (2 args)
	Is3DSoundLoaded (2 args)
	GetEyesHeight (1 args)
	PlayGlobalSound (2 args)
	self (1 args)
	CreateObjectSet (1 args)
	CreateFloatVector (1 args)
	SendWorldWndMessage (2 args)
	BroadcastMessage (3 args)
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
	CanSee (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_1 Op = 0x15 Vars = (object)
		EVENT_3 Op = 0x21 Vars = (object)
		EVENT_17 Op = 0x2d Vars = (object)
		EVENT_30 Op = 0x3d Vars = (object, object, bool)
		EVENT_7 Op = 0x54 Vars = (int)
	GTASK_1 Vars = (object, bool) Params = 2
		EVENT_1 Op = 0xb4 Vars = (object)
		EVENT_3 Op = 0xcb Vars = (object)
		EVENT_17 Op = 0xe2 Vars = (object)
		EVENT_30 Op = 0xfd Vars = (object, object, bool)
		EVENT_7 Op = 0x10a Vars = (int)
	GTASK_2  Params = 1
		EVENT_0 Op = 0x155 Vars = (object)
		EVENT_22 Op = 0x1d4 Vars = (object, int, float, float)
		EVENT_16 Op = 0x1d6 Vars = (object, string)
		EVENT_41 Op = 0x1d8 Vars = (object)

Events:
EVENT_22 Op = 0x617 Vars = (object, int, float, float)
EVENT_43 Op = 0x61f Vars = (object, int, float, float, cvector, cvector)
EVENT_16 Op = 0x629 Vars = (object, string)
EVENT_41 Op = 0x636 Vars = (object)

0x0: PushEmpty(cvector, bool, cvector, bool)
0x1: PushEmpty()
0x2: Call2 0x4f7

0x3: Pop(0)
0x4: Push((int) 75)
0x5: Push((float)0.5)
0x6: @ SetTimer(Stack[-2], Stack[-1])
0x7: Pop(2)
0x8: @ GetDirection(Stack[-2])
0x9: Pop(0)
0xa: @ Hold()
0xb: Pop(0)
0xc: Push(CvectorIndex(Stack[-2], 0))
0xd: Push(CvectorIndex(Stack[-3], 2))
0xe: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0xf: Pop(2)
0x10: Pop(0); Push((bool) Stack[-1] == 0)
0x11: IF (Stack[-1] == 0) GOTO 0x13; Pop(1)

0x12: GOTO 0xc

0x13: GOTO 0xa

0x14: Return(); Pop(4)

0x15: PushEmpty()
0x16: PushEmpty(bool, object)
0x17: Stack[-1] = Stack[-3]
0x18: Call2 0x6c7

0x19: Pop(1)
0x1a: IF (Stack[-1] == 0) GOTO 0x20; Pop(1)

0x1b: PushEmpty(object, bool)
0x1c: Stack[-2] = Stack[-3]
0x1d: Stack[-1] = (bool) 0
0x1e: Call2 0x60

0x1f: Pop(2)
0x20: Return(); Pop(0)

0x21: PushEmpty()
0x22: PushEmpty(bool, object)
0x23: Stack[-1] = Stack[-3]
0x24: Call2 0x6d5

0x25: Pop(1)
0x26: IF (Stack[-1] == 0) GOTO 0x2c; Pop(1)

0x27: PushEmpty(object, bool)
0x28: Stack[-2] = Stack[-3]
0x29: Stack[-1] = (bool) 0
0x2a: Call2 0x60

0x2b: Pop(2)
0x2c: Return(); Pop(0)

0x2d: PushEmpty()
0x2e: PushEmpty(bool, object)
0x2f: Stack[-1] = Stack[-3]
0x30: Call2 0x27a

0x31: Pop(1)
0x32: IF (Stack[-1] == 0) GOTO 0x3c; Pop(1)

0x33: PushEmpty(object)
0x34: Stack[-1] = Stack[-2]
0x35: Call2 0x5f0

0x36: Pop(1)
0x37: PushEmpty(object, bool)
0x38: Stack[-2] = Stack[-3]
0x39: Stack[-1] = (bool) 1
0x3a: Call2 0x60

0x3b: Pop(2)
0x3c: Return(); Pop(0)

0x3d: PushEmpty()
0x3e: PushEmpty(bool, object, object, bool)
0x3f: Stack[-3] = Stack[-7]
0x40: Stack[-2] = Stack[-6]
0x41: Stack[-1] = Stack[-5]
0x42: Call2 0x63c

0x43: Pop(3)
0x44: IF (Stack[-1] == 0) GOTO 0x53; Pop(1)

0x45: PushEmpty(bool, object)
0x46: Stack[-1] = Stack[-5]
0x47: Call2 0x27a

0x48: Pop(1)
0x49: IF (Stack[-1] == 0) GOTO 0x53; Pop(1)

0x4a: PushEmpty(object)
0x4b: Stack[-1] = Stack[-4]
0x4c: Call2 0x5f0

0x4d: Pop(1)
0x4e: PushEmpty(object, bool)
0x4f: Stack[-2] = Stack[-5]
0x50: Stack[-1] = (bool) 0
0x51: Call2 0x60

0x52: Pop(2)
0x53: Return(); Pop(0)

0x54: PushEmpty()
0x55: Push((int) 75)
0x56: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x57: IF (Stack[-1] == 0) GOTO 0x5b; Pop(1)

0x58: @ ResetAAS()
0x59: Pop(0)
0x5a: GOTO 0x5f

0x5b: PushEmpty(int)
0x5c: Stack[-1] = Stack[-2]
0x5d: Call2 0x656

0x5e: Pop(1)
0x5f: Return(); Pop(0)

0x60: PushEmpty()
0x61: @ StopGroup0()
0x62: Pop(0)
0x63: PushEmpty(object, bool)
0x64: Stack[-2] = Stack[-4]
0x65: Stack[-1] = Stack[-3]
0x66: Push(-2, 2); TaskCall(1)
0x67: Call2 0x6b

0x68: Pop(-2, 2); TaskReturn
0x69: Pop(2)
0x6a: Return(); Pop(0)

0x6b: PushEmpty()
0x6c: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x6d: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x6e: @ Face(Stack[-0])
0x6f: Pop(0)
0x70: PushEmpty(bool)
0x71: Stack[-1] = (bool) 1
0x72: Call2 0x520

0x73: Pop(1)
0x74: Push((bool) 1)
0x75: @ SetAttackState(Stack[-1])
0x76: Pop(1)
0x77: Push("all")
0x78: Push("attack_on")
0x79: @ PlayAnimation(Stack[-2], Stack[-1])
0x7a: Pop(2)
0x7b: @ WaitForAnimEnd()
0x7c: Pop(0)
0x7d: PushEmpty(bool)
0x7e: Stack[-1] = (bool) 0
0x7f: PushEmpty(bool)
0x80: Stack[-1] = (bool) 1
0x81: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x82: IF (Stack[-1] == 0) GOTO 0x86; Pop(1)

0x83: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == 0)
0x84: IF (Stack[-1] == 0) GOTO 0x86; Pop(1)

0x85: Stack[-1] = (bool) 0
0x86: IF (Stack[-1] == 0) GOTO 0x98; Pop(1)

0x87: PushEmpty(bool)
0x88: Stack[-1] = (bool) 1
0x89: PushEmpty(bool, object)
0x8a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x8b: Call2 0x6fd

0x8c: Pop(1)
0x8d: Pop(1); Push((bool) Stack[-1] == 0)
0x8e: IF (Stack[-1] == 0) GOTO 0x96; Pop(1)

0x8f: PushEmpty(bool, object)
0x90: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x91: Call2 0x6ba

0x92: Pop(1)
0x93: Pop(1); Push((bool) Stack[-1] == 0)
0x94: IF (Stack[-1] == 0) GOTO 0x96; Pop(1)

0x95: Stack[-1] = (bool) 0
0x96: IF (Stack[-1] == 0) GOTO 0x98; Pop(1)

0x97: Stack[-1] = (bool) 1
0x98: IF (Stack[-1] == 0) GOTO 0x9a; Pop(1)

0x99: GOTO 0xa1

0x9a: PushEmpty(object)
0x9b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x9c: Call2 0x577

0x9d: Pop(1)
0x9e: @ WaitForAnimEnd()
0x9f: Pop(0)
0xa0: GOTO 0x7d

0xa1: Stack[0 + Tasks[-1].StackPointer] = 0
0xa2: Push((bool) 0)
0xa3: @ SetAttackState(Stack[-1])
0xa4: Pop(1)
0xa5: PushEmpty(bool)
0xa6: Stack[-1] = (bool) 0
0xa7: Call2 0x520

0xa8: Pop(1)
0xa9: @ StopAsync()
0xaa: Pop(0)
0xab: Push("all")
0xac: Push("attack_off")
0xad: @ PlayAnimation(Stack[-2], Stack[-1])
0xae: Pop(2)
0xaf: @ WaitForAnimEnd()
0xb0: Pop(0)
0xb1: Pop(0); Push(( Stack[0 + Tasks[-1].StackPointer] != 0 )
0xb2: IF (Stack[-1] == 0) GOTO 0x70; Pop(1)

0xb3: Return(); Pop(0)

0xb4: PushEmpty()
0xb5: Push( Stack[1 + Tasks[-1].StackPointer] )
0xb6: IF (Stack[-1] == 0) GOTO 0xb8; Pop(1)

0xb7: Return(); Pop(0)

0xb8: PushEmpty(bool)
0xb9: Stack[-1] = (bool) 0
0xba: PushEmpty(bool, object)
0xbb: Stack[-1] = Stack[-4]
0xbc: Call2 0x6c7

0xbd: Pop(1)
0xbe: IF (Stack[-1] == 0) GOTO 0xc6; Pop(1)

0xbf: PushEmpty(bool, object, object)
0xc0: Stack[-2] = Stack[0 + Tasks[-1].StackPointer]
0xc1: Stack[-1] = Stack[-5]
0xc2: Call2 0x6e3

0xc3: Pop(2)
0xc4: IF (Stack[-1] == 0) GOTO 0xc6; Pop(1)

0xc5: Stack[-1] = (bool) 1
0xc6: IF (Stack[-1] == 0) GOTO 0xca; Pop(1)

0xc7: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0xc8: @ Face(Stack[-1])
0xc9: Pop(0)
0xca: Return(); Pop(0)

0xcb: PushEmpty()
0xcc: Push( Stack[1 + Tasks[-1].StackPointer] )
0xcd: IF (Stack[-1] == 0) GOTO 0xcf; Pop(1)

0xce: Return(); Pop(0)

0xcf: PushEmpty(bool)
0xd0: Stack[-1] = (bool) 0
0xd1: PushEmpty(bool, object)
0xd2: Stack[-1] = Stack[-4]
0xd3: Call2 0x6d5

0xd4: Pop(1)
0xd5: IF (Stack[-1] == 0) GOTO 0xdd; Pop(1)

0xd6: PushEmpty(bool, object, object)
0xd7: Stack[-2] = Stack[0 + Tasks[-1].StackPointer]
0xd8: Stack[-1] = Stack[-5]
0xd9: Call2 0x6e3

0xda: Pop(2)
0xdb: IF (Stack[-1] == 0) GOTO 0xdd; Pop(1)

0xdc: Stack[-1] = (bool) 1
0xdd: IF (Stack[-1] == 0) GOTO 0xe1; Pop(1)

0xde: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0xdf: @ Face(Stack[-1])
0xe0: Pop(0)
0xe1: Return(); Pop(0)

0xe2: PushEmpty()
0xe3: PushEmpty(object)
0xe4: Stack[-1] = Stack[-2]
0xe5: Call2 0x5f0

0xe6: Pop(1)
0xe7: PushEmpty(bool)
0xe8: Stack[-1] = (bool) 1
0xe9: PushEmpty(bool, object)
0xea: Stack[-1] = Stack[-4]
0xeb: Call2 0x27a

0xec: Pop(1)
0xed: Pop(1); Push((bool) Stack[-1] == 0)
0xee: IF (Stack[-1] == 0) GOTO 0xf6; Pop(1)

0xef: PushEmpty(bool, object)
0xf0: Stack[-1] = Stack[-4]
0xf1: Call2 0x6ba

0xf2: Pop(1)
0xf3: Pop(1); Push((bool) Stack[-1] == 0)
0xf4: IF (Stack[-1] == 0) GOTO 0xf6; Pop(1)

0xf5: Stack[-1] = (bool) 0
0xf6: IF (Stack[-1] == 0) GOTO 0xf8; Pop(1)

0xf7: Return(); Pop(0)

0xf8: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0xf9: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0xfa: @ Face(Stack[-1])
0xfb: Pop(0)
0xfc: Return(); Pop(0)

0xfd: PushEmpty()
0xfe: PushEmpty(bool, object, object, bool)
0xff: Stack[-3] = Stack[-7]
0x100: Stack[-2] = Stack[-6]
0x101: Stack[-1] = Stack[-5]
0x102: Call2 0x63c

0x103: Pop(3)
0x104: IF (Stack[-1] == 0) GOTO 0x109; Pop(1)

0x105: PushEmpty(object)
0x106: Stack[-1] = Stack[-4]
0x107: Call2 0xe2

0x108: Pop(1)
0x109: Return(); Pop(0)

0x10a: PushEmpty()
0x10b: Push((int) 75)
0x10c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x10d: IF (Stack[-1] == 0) GOTO 0x111; Pop(1)

0x10e: @ ResetAAS()
0x10f: Pop(0)
0x110: GOTO 0x115

0x111: PushEmpty(int)
0x112: Stack[-1] = Stack[-2]
0x113: Call2 0x656

0x114: Pop(1)
0x115: Return(); Pop(0)

0x116: PushEmpty(object, object)
0x117: Push((int) 75)
0x118: @ KillTimer(Stack[-1])
0x119: Pop(1)
0x11a: PushEmpty(bool, object)
0x11b: Stack[-1] = Stack[-5]
0x11c: Call2 0x1f7

0x11d: Pop(1)
0x11e: IF (Stack[-1] == 0) GOTO 0x127; Pop(1)

0x11f: @ GetScene(Stack[-1])
0x120: Pop(0)
0x121: PushEmpty(object)
0x122: Call2 0x39f

0x123: Pop(0)
0x124: @@ RemoveStationaryActor(Stack[-1])
0x125: Pop(1)
0x126: Stack[-1] = 0
0x127: PushEmpty(object)
0x128: Stack[-1] = Stack[-4]
0x129: Call2 0x12c

0x12a: Pop(1)
0x12b: Return(); Pop(2)

0x12c: PushEmpty(bool, bool)
0x12d: Push((int) 70)
0x12e: @ KillTimer(Stack[-1])
0x12f: Pop(1)
0x130: PushEmpty(bool)
0x131: Stack[-1] = (bool) 0
0x132: Call2 0x520

0x133: Pop(1)
0x134: Push(GlobalVars[0])
0x135: @ RemoveActor(Stack[-1])
0x136: Pop(1)
0x137: @ IsPlayerActor(Stack[-3], Stack[-1])
0x138: Pop(0)
0x139: Push(Stack[-1])
0x13a: IF (Stack[-1] == 0) GOTO 0x13e; Pop(1)

0x13b: PushEmpty()
0x13c: Call2 0x43c

0x13d: Pop(0)
0x13e: PushEmpty()
0x13f: Call2 0x424

0x140: Pop(0)
0x141: PushEmpty(object)
0x142: Stack[-1] = Stack[-4]
0x143: Call2 0x146

0x144: Pop(1)
0x145: Return(); Pop(2)

0x146: PushEmpty()
0x147: EventDisable(0)
0x148: PushEmpty(object)
0x149: Stack[-1] = Stack[-2]
0x14a: Call2 0x15f

0x14b: Pop(1)
0x14c: Push((int) 50)
0x14d: Push((int) 40)
0x14e: @ SetRTEnvelope(Stack[-2], Stack[-1])
0x14f: Pop(2)
0x150: EventEnable(0)
0x151: @ Hold()
0x152: Pop(0)
0x153: GOTO 0x151

0x154: Return(); Pop(0)

0x155: PushEmpty(bool, bool)
0x156: @ IsOverrideActive(Stack[-1])
0x157: Pop(0)
0x158: Pop(0); Push((bool) Stack[-1] == 0)
0x159: IF (Stack[-1] == 0) GOTO 0x15e; Pop(1)

0x15a: PushEmpty(object)
0x15b: Stack[-1] = Stack[-4]
0x15c: Call2 0x3e7

0x15d: Pop(1)
0x15e: Return(); Pop(2)

0x15f: PushEmpty(cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector, cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector)
0x160: Pop(0); Push((bool) Stack[-21] == 0)
0x161: IF (Stack[-1] == 0) GOTO 0x167; Pop(1)

0x162: PushEmpty(string)
0x163: Stack[-1] = "fdie"
0x164: Call2 0x1ba

0x165: Pop(1)
0x166: GOTO 0x1b9

0x167: @@ GetPosition(Stack[-10])
0x168: Pop(0)
0x169: @ GetPosition(Stack[-9])
0x16a: Pop(0)
0x16b: @ GetDirection(Stack[-8])
0x16c: Pop(0)
0x16d: Stack[-7] = Stack[-9] - Stack[-10]; Pop(0);
0x16e: Push(CvectorIndex(Stack[-7], 0))
0x16f: Push(CvectorIndex(Stack[-9], 0))
0x170: Pop(2); Push(Stack[-2] * Stack[-1]);
0x171: Push(CvectorIndex(Stack[-8], 2))
0x172: Push(CvectorIndex(Stack[-10], 2))
0x173: Pop(2); Push(Stack[-2] * Stack[-1]);
0x174: Pop(2); Push(Stack[-2] + Stack[-1]);
0x175: Push((int) 0)
0x176: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x177: IF (Stack[-1] == 0) GOTO 0x17a; Pop(1)

0x178: Stack[-6] = "fdie"
0x179: GOTO 0x17b

0x17a: Stack[-6] = "bdie"
0x17b: @ RemoveRTEnvelope()
0x17c: Pop(0)
0x17d: @ SetDeathState()
0x17e: Pop(0)
0x17f: @ Stop()
0x180: Pop(0)
0x181: @ StopAsync()
0x182: Pop(0)
0x183: Stack[-5] = Stack[-21]
0x184: Push("GetScriptProperty")
0x185: Push((int) 2)
0x186: Pop(2); Push(IsFuncExist(Stack[-23], Stack[-2], Stack[-1]))
0x187: IF (Stack[-1] == 0) GOTO 0x193; Pop(1)

0x188: Push("Owner")
0x189: @@ HasScriptProperty(Stack[-5], Stack[-1])
0x18a: Pop(1)
0x18b: Push(Stack[-4])
0x18c: IF (Stack[-1] == 0) GOTO 0x193; Pop(1)

0x18d: Push("Owner")
0x18e: @@ GetScriptProperty(Stack[-6], Stack[-1])
0x18f: Pop(1)
0x190: Pop(0); Push((bool) Stack[-5] == 0)
0x191: IF (Stack[-1] == 0) GOTO 0x193; Pop(1)

0x192: Stack[-5] = Stack[-21]
0x193: Push("@GetEyesHeight")
0x194: Push((int) 1)
0x195: Pop(2); Push(IsFuncExist(Stack[-7], Stack[-2], Stack[-1]))
0x196: IF (Stack[-1] == 0) GOTO 0x1a2; Pop(1)

0x197: @@ GetEyesHeight(Stack[-2])
0x198: Pop(0)
0x199: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x19a: Push(CvectorIndex(Stack[-1], 1))
0x19b: Stack[-1] = Stack[-3]
0x19c: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x19d: Push("head")
0x19e: @ LookAsync(Stack[-22], Stack[-1], Stack[-2])
0x19f: Pop(1)
0x1a0: Stack[-3] = (bool) 1
0x1a1: GOTO 0x1a3

0x1a2: Stack[-3] = (bool) 0
0x1a3: PushEmpty(string)
0x1a4: Stack[-1] = Stack[-7]
0x1a5: Call2 0x31f

0x1a6: Pop(1)
0x1a7: Push("all")
0x1a8: @ PlayAnimation(Stack[-1], Stack[-7])
0x1a9: Pop(1)
0x1aa: @ WaitForAnimEnd()
0x1ab: Pop(0)
0x1ac: Push(Stack[-3])
0x1ad: IF (Stack[-1] == 0) GOTO 0x1b3; Pop(1)

0x1ae: @ StopAsync()
0x1af: Pop(0)
0x1b0: Push("head")
0x1b1: @ UnlookAsync(Stack[-1])
0x1b2: Pop(1)
0x1b3: Push("all")
0x1b4: @ LockAnimationEnd(Stack[-1], Stack[-7])
0x1b5: Pop(1)
0x1b6: @ RemoveEnvelope()
0x1b7: Pop(0)
0x1b8: Stack[-5] = 0
0x1b9: Return(); Pop(20)

0x1ba: PushEmpty()
0x1bb: @ RemoveRTEnvelope()
0x1bc: Pop(0)
0x1bd: @ SetDeathState()
0x1be: Pop(0)
0x1bf: @ Stop()
0x1c0: Pop(0)
0x1c1: @ StopAsync()
0x1c2: Pop(0)
0x1c3: @ StopSecondaryAnimation()
0x1c4: Pop(0)
0x1c5: PushEmpty(string)
0x1c6: Stack[-1] = Stack[-2]
0x1c7: Call2 0x31f

0x1c8: Pop(1)
0x1c9: Push("all")
0x1ca: @ PlayAnimation(Stack[-1], Stack[-2])
0x1cb: Pop(1)
0x1cc: @ WaitForAnimEnd()
0x1cd: Pop(0)
0x1ce: Push("all")
0x1cf: @ LockAnimationEnd(Stack[-1], Stack[-2])
0x1d0: Pop(1)
0x1d1: @ RemoveEnvelope()
0x1d2: Pop(0)
0x1d3: Return(); Pop(0)

0x1d4: PushEmpty()
0x1d5: Return(); Pop(0)

0x1d6: PushEmpty()
0x1d7: Return(); Pop(0)

0x1d8: PushEmpty()
0x1d9: Return(); Pop(0)

0x1da: PushEmpty()
0x1db: Push((int) 2)
0x1dc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1dd: IF (Stack[-1] == 0) GOTO 0x1e1; Pop(1)

0x1de: Stack[-2] = "fire"
0x1df: Return(); Pop(0)

0x1e0: GOTO 0x1e6

0x1e1: Push((int) 1)
0x1e2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1e3: IF (Stack[-1] == 0) GOTO 0x1e6; Pop(1)

0x1e4: Stack[-2] = "bullet"
0x1e5: Return(); Pop(0)

0x1e6: Stack[-2] = "phys"
0x1e7: Return(); Pop(0)

0x1e8: PushEmpty(cvector, cvector, cvector, cvector)
0x1e9: @ GetPosition(Stack[-2])
0x1ea: Pop(0)
0x1eb: @@ GetPosition(Stack[-1])
0x1ec: Pop(0)
0x1ed: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x1ee: Return(); Pop(4)

0x1ef: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x1f0: @ GetPosition(Stack[-3])
0x1f1: Pop(0)
0x1f2: @@ GetPosition(Stack[-2])
0x1f3: Pop(0)
0x1f4: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x1f5: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x1f6: Return(); Pop(6)

0x1f7: PushEmpty(bool, bool)
0x1f8: @ IsPlayerActor(Stack[-3], Stack[-1])
0x1f9: Pop(0)
0x1fa: Stack[-4] = Stack[-1]
0x1fb: Return(); Pop(2)

0x1fc: PushEmpty(bool, bool)
0x1fd: Push("HasProperty")
0x1fe: Push((int) 2)
0x1ff: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x200: Pop(1); Push((bool) Stack[-1] == 0)
0x201: IF (Stack[-1] == 0) GOTO 0x204; Pop(1)

0x202: Stack[-5] = (bool) 0
0x203: Return(); Pop(2)

0x204: @@ HasProperty(Stack[-3], Stack[-1])
0x205: Pop(0)
0x206: Stack[-5] = Stack[-1]
0x207: Return(); Pop(2)

0x208: PushEmpty(int, string, int, float, float, float, int, string, int, float, float, float)
0x209: PushEmpty(bool, object, string)
0x20a: Stack[-2] = Stack[-18]
0x20b: Stack[-1] = "health"
0x20c: Call2 0x1fc

0x20d: Pop(2)
0x20e: Pop(1); Push((bool) Stack[-1] == 0)
0x20f: IF (Stack[-1] == 0) GOTO 0x212; Pop(1)

0x210: Stack[-16] = (float) 0.0
0x211: Return(); Pop(12)

0x212: PushEmpty(bool, object, string)
0x213: Stack[-2] = Stack[-18]
0x214: Stack[-1] = "armor"
0x215: Call2 0x1fc

0x216: Pop(2)
0x217: Pop(1); Push((bool) Stack[-1] == 0)
0x218: IF (Stack[-1] == 0) GOTO 0x21b; Pop(1)

0x219: Stack[-6] = (int) 0
0x21a: GOTO 0x21e

0x21b: Push("armor")
0x21c: @@ GetProperty(Stack[-1], Stack[-7])
0x21d: Pop(1)
0x21e: Push("armor_")
0x21f: PushEmpty(string, int)
0x220: Stack[-1] = Stack[-16]
0x221: Call2 0x1da

0x222: Pop(1)
0x223: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x224: PushEmpty(bool, object, string)
0x225: Stack[-2] = Stack[-18]
0x226: Stack[-1] = Stack[-8]
0x227: Call2 0x1fc

0x228: Pop(2)
0x229: Pop(1); Push((bool) Stack[-1] == 0)
0x22a: IF (Stack[-1] == 0) GOTO 0x22d; Pop(1)

0x22b: Stack[-4] = (int) 0
0x22c: GOTO 0x22f

0x22d: @@ GetProperty(Stack[-5], Stack[-4])
0x22e: Pop(0)
0x22f: PushEmpty(float, float, float)
0x230: Pop(0); Push(Stack[-9] + Stack[-7]);
0x231: Push((float)100.0)
0x232: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0x233: Stack[-1] = (int) 1
0x234: Call2 0x3af

0x235: Stack[-6] = Stack[-3]
0x236: Pop(3)
0x237: Push("health")
0x238: @@ GetProperty(Stack[-1], Stack[-3])
0x239: Pop(1)
0x23a: Push((int) 1)
0x23b: Pop(1); Push(Stack[-1] - Stack[-4]);
0x23c: Stack[-2] = Stack[-15] * Stack[-1]; Pop(1);
0x23d: Push("health")
0x23e: PushEmpty(float, float, float, float)
0x23f: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0x240: Stack[-2] = (int) 0
0x241: Stack[-1] = (int) 1
0x242: Call2 0x3b6

0x243: Pop(3)
0x244: @@ SetProperty(Stack[-2], Stack[-1])
0x245: Pop(2)
0x246: PushEmpty(bool, object)
0x247: Stack[-1] = Stack[-17]
0x248: Call2 0x1f7

0x249: Pop(1)
0x24a: IF (Stack[-1] == 0) GOTO 0x24f; Pop(1)

0x24b: PushEmpty(float)
0x24c: Stack[-1] = -Stack[-2]; Pop(0);
0x24d: Call2 0x3cc

0x24e: Pop(1)
0x24f: Stack[-16] = Stack[-1]
0x250: Return(); Pop(12)

0x251: PushEmpty(bool, bool)
0x252: @@ IsDead(Stack[-1])
0x253: Pop(0)
0x254: Stack[-4] = Stack[-1]
0x255: Return(); Pop(2)

0x256: PushEmpty(object, object, object, object)
0x257: Pop(0); Push((bool) Stack[-5] == 0)
0x258: IF (Stack[-1] == 0) GOTO 0x25b; Pop(1)

0x259: Stack[-6] = (bool) 0
0x25a: Return(); Pop(4)

0x25b: PushEmpty(bool)
0x25c: Stack[-1] = (bool) 0
0x25d: Push("IsDead")
0x25e: Push((int) 1)
0x25f: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x260: IF (Stack[-1] == 0) GOTO 0x267; Pop(1)

0x261: PushEmpty(bool, object)
0x262: Stack[-1] = Stack[-8]
0x263: Call2 0x251

0x264: Pop(1)
0x265: IF (Stack[-1] == 0) GOTO 0x267; Pop(1)

0x266: Stack[-1] = (bool) 1
0x267: IF (Stack[-1] == 0) GOTO 0x26a; Pop(1)

0x268: Stack[-6] = (bool) 0
0x269: Return(); Pop(4)

0x26a: @ GetScene(Stack[-2])
0x26b: Pop(0)
0x26c: Pop(0); Push((bool) Stack[-2] == 0)
0x26d: IF (Stack[-1] == 0) GOTO 0x270; Pop(1)

0x26e: Stack[-6] = (bool) 0
0x26f: Return(); Pop(4)

0x270: @@ GetScene(Stack[-1])
0x271: Pop(0)
0x272: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x273: IF (Stack[-1] == 0) GOTO 0x276; Pop(1)

0x274: Stack[-6] = (bool) 0
0x275: Return(); Pop(4)

0x276: Stack[-6] = (bool) 1
0x277: Return(); Pop(4)

0x278: Stack[-1] = 0
0x279: Stack[-2] = 0
0x27a: PushEmpty(int, int)
0x27b: PushEmpty(bool, object)
0x27c: Stack[-1] = Stack[-5]
0x27d: Call2 0x256

0x27e: Pop(1)
0x27f: Pop(1); Push((bool) Stack[-1] == 0)
0x280: IF (Stack[-1] == 0) GOTO 0x283; Pop(1)

0x281: Stack[-4] = (bool) 0
0x282: Return(); Pop(2)

0x283: PushEmpty(bool, object, string)
0x284: Stack[-2] = Stack[-6]
0x285: Stack[-1] = "noaccess"
0x286: Call2 0x1fc

0x287: Pop(2)
0x288: Pop(1); Push((bool) Stack[-1] == 0)
0x289: IF (Stack[-1] == 0) GOTO 0x28c; Pop(1)

0x28a: Stack[-4] = (bool) 1
0x28b: Return(); Pop(2)

0x28c: Push("noaccess")
0x28d: @@ GetProperty(Stack[-1], Stack[-2])
0x28e: Pop(1)
0x28f: Push((int) 0)
0x290: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x291: Return(); Pop(2)

0x292: PushEmpty(bool, int, cvector, cvector, cvector, cvector, string, bool, int, cvector, cvector, cvector, cvector, string)
0x293: Pop(0); Push((bool) Stack[-15] == 0)
0x294: IF (Stack[-1] == 0) GOTO 0x296; Pop(1)

0x295: Return(); Pop(14)

0x296: @ IsDead(Stack[-7])
0x297: Pop(0)
0x298: Push(Stack[-7])
0x299: IF (Stack[-1] == 0) GOTO 0x29b; Pop(1)

0x29a: Return(); Pop(14)

0x29b: @ GetSecondaryAnimationType(Stack[-6])
0x29c: Pop(0)
0x29d: Push((int) 0)
0x29e: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x29f: IF (Stack[-1] == 0) GOTO 0x2a1; Pop(1)

0x2a0: Return(); Pop(14)

0x2a1: @@ GetPosition(Stack[-5])
0x2a2: Pop(0)
0x2a3: @ GetPosition(Stack[-4])
0x2a4: Pop(0)
0x2a5: @ GetDirection(Stack[-3])
0x2a6: Pop(0)
0x2a7: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0x2a8: Push(CvectorIndex(Stack[-2], 0))
0x2a9: Push(CvectorIndex(Stack[-4], 0))
0x2aa: Pop(2); Push(Stack[-2] * Stack[-1]);
0x2ab: Push(CvectorIndex(Stack[-3], 2))
0x2ac: Push(CvectorIndex(Stack[-5], 2))
0x2ad: Pop(2); Push(Stack[-2] * Stack[-1]);
0x2ae: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2af: Push((int) 0)
0x2b0: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x2b1: IF (Stack[-1] == 0) GOTO 0x2b4; Pop(1)

0x2b2: Stack[-1] = "fhit"
0x2b3: GOTO 0x2b5

0x2b4: Stack[-1] = "bhit"
0x2b5: Push("hit_react")
0x2b6: Push("1")
0x2b7: Pop(1); Push(Stack[-3] + Stack[-1]);
0x2b8: Push("2")
0x2b9: Pop(1); Push(Stack[-4] + Stack[-1]);
0x2ba: Push((int) -10)
0x2bb: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x2bc: Pop(4)
0x2bd: Return(); Pop(14)

0x2be: PushEmpty(cvector, object, int, bool, cvector, cvector, int, int, cvector, cvector, object, int, bool, cvector, cvector, int, int, cvector)
0x2bf: PushEmpty(bool)
0x2c0: Stack[-1] = (bool) 0
0x2c1: PushEmpty(bool)
0x2c2: Stack[-1] = (bool) 0
0x2c3: Push(Stack[-23])
0x2c4: IF (Stack[-1] == 0) GOTO 0x2c9; Pop(1)

0x2c5: Push((int) 4)
0x2c6: Pop(1); Push((bool) Stack[-23] != Stack[-1])
0x2c7: IF (Stack[-1] == 0) GOTO 0x2c9; Pop(1)

0x2c8: Stack[-1] = (bool) 1
0x2c9: IF (Stack[-1] == 0) GOTO 0x2ce; Pop(1)

0x2ca: Push((int) 5)
0x2cb: Pop(1); Push((bool) Stack[-22] != Stack[-1])
0x2cc: IF (Stack[-1] == 0) GOTO 0x2ce; Pop(1)

0x2cd: Stack[-1] = (bool) 1
0x2ce: IF (Stack[-1] == 0) GOTO 0x2fd; Pop(1)

0x2cf: PushEmpty(cvector, cvector)
0x2d0: PushEmpty(cvector, object)
0x2d1: Stack[-1] = Stack[-25]
0x2d2: Call2 0x1e8

0x2d3: Stack[-3] = Stack[-2]
0x2d4: Pop(2)
0x2d5: Call2 0x3a5

0x2d6: Stack[-11] = Stack[-2]
0x2d7: Pop(2)
0x2d8: @ CreateVectorVector(Stack[-8])
0x2d9: Pop(0)
0x2da: Stack[-7] = (int) 1
0x2db: Push("hit")
0x2dc: Pop(1); Push(Stack[-1] + Stack[-8]);
0x2dd: @ GetGeometryLocator(Stack[-1], Stack[-7], Stack[-6], Stack[-5])
0x2de: Pop(1)
0x2df: Pop(0); Push((bool) Stack[-6] == 0)
0x2e0: IF (Stack[-1] == 0) GOTO 0x2e2; Pop(1)

0x2e1: GOTO 0x2eb

0x2e2: Pop(0); Push(Stack[-4] | Stack[-9]);
0x2e3: Push((float)0.70711)
0x2e4: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x2e5: IF (Stack[-1] == 0) GOTO 0x2e8; Pop(1)

0x2e6: @@ add(Stack[-5])
0x2e7: Pop(0)
0x2e8: Push((int) 1)
0x2e9: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x2ea: GOTO 0x2db

0x2eb: @@ size(Stack[-3])
0x2ec: Pop(0)
0x2ed: Push(Stack[-3])
0x2ee: IF (Stack[-1] == 0) GOTO 0x2fc; Pop(1)

0x2ef: @ irand(Stack[-2], Stack[-3])
0x2f0: Pop(0)
0x2f1: @@ get(Stack[-1], Stack[-2])
0x2f2: Pop(0)
0x2f3: PushEmpty(object, int, float, cvector, cvector)
0x2f4: Stack[-5] = Stack[-26]
0x2f5: Stack[-4] = Stack[-25]
0x2f6: Stack[-3] = Stack[-24]
0x2f7: Stack[-2] = Stack[-6]
0x2f8: Stack[-1] = -Stack[-14]; Pop(0);
0x2f9: Call2 0x302

0x2fa: Pop(5)
0x2fb: Return(); Pop(18)

0x2fc: Stack[-8] = 0
0x2fd: PushEmpty(object)
0x2fe: Stack[-1] = Stack[-22]
0x2ff: Call2 0x292

0x300: Pop(1)
0x301: Return(); Pop(18)

0x302: PushEmpty(object, object, object, object)
0x303: @ GetScene(Stack[-2])
0x304: Pop(0)
0x305: Push("scripted")
0x306: Push("blood_dir.xml")
0x307: @ AddActorByType(Stack[-3], Stack[-2], Stack[-4], Stack[-8], Stack[-7], Stack[-1])
0x308: Pop(2)
0x309: PushEmpty(object)
0x30a: Stack[-1] = Stack[-10]
0x30b: Call2 0x292

0x30c: Pop(1)
0x30d: Return(); Pop(4)

0x30e: Stack[-1] = 0
0x30f: Stack[-2] = 0
0x310: PushEmpty(int, bool, int, bool)
0x311: PushEmpty(bool, int, int)
0x312: Stack[-2] = Stack[-10]
0x313: Stack[-1] = Stack[-9]
0x314: Call2 0x3c1

0x315: Pop(2)
0x316: IF (Stack[-1] == 0) GOTO 0x31e; Pop(1)

0x317: @ irand(Stack[-2], Stack[-5])
0x318: Pop(0)
0x319: Push((int) 0)
0x31a: Push((int) 1)
0x31b: Pop(1); Push(Stack[-4] + Stack[-1]);
0x31c: @ AddItem(Stack[-3], Stack[-10], Stack[-2], Stack[-1])
0x31d: Pop(2)
0x31e: Return(); Pop(4)

0x31f: PushEmpty(bool, int, bool, int, bool, float, cvector, cvector, bool, int, bool, int, bool, float, cvector, cvector)
0x320: @ IsExisting3DSound(Stack[-8], Stack[-17])
0x321: Pop(0)
0x322: Pop(0); Push((bool) Stack[-8] == 0)
0x323: IF (Stack[-1] == 0) GOTO 0x338; Pop(1)

0x324: Stack[-7] = (int) 0
0x325: Push((int) 1)
0x326: Pop(1); Push(Stack[-8] + Stack[-1]);
0x327: Pop(1); Push(Stack[-18] + Stack[-1]);
0x328: @ IsExisting3DSound(Stack[-7], Stack[-1])
0x329: Pop(1)
0x32a: Pop(0); Push((bool) Stack[-6] == 0)
0x32b: IF (Stack[-1] == 0) GOTO 0x32d; Pop(1)

0x32c: GOTO 0x330

0x32d: Push((int) 1)
0x32e: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x32f: GOTO 0x325

0x330: Pop(0); Push((bool) Stack[-7] == 0)
0x331: IF (Stack[-1] == 0) GOTO 0x333; Pop(1)

0x332: Return(); Pop(16)

0x333: @ irand(Stack[-5], Stack[-7])
0x334: Pop(0)
0x335: Push((int) 1)
0x336: Pop(1); Push(Stack[-6] + Stack[-1]);
0x337: Stack[-18] = Stack[-18] + Stack[-1]; Pop(1);
0x338: @ Is3DSoundLoaded(Stack[-4], Stack[-17])
0x339: Pop(0)
0x33a: Push(Stack[-4])
0x33b: IF (Stack[-1] == 0) GOTO 0x347; Pop(1)

0x33c: @ GetEyesHeight(Stack[-3])
0x33d: Pop(0)
0x33e: @ GetDirection(Stack[-2])
0x33f: Pop(0)
0x340: Push((int) 50)
0x341: Stack[-2] = Stack[-3] * Stack[-1]; Pop(1);
0x342: Push(CvectorIndex(Stack[-1], 1))
0x343: Stack[-1] = Stack[-1] + Stack[-4]; Pop(0);
0x344: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x345: @ PlayGlobalSound(Stack[-17], Stack[-1])
0x346: Pop(0)
0x347: Return(); Pop(16)

0x348: PushEmpty()
0x349: Stack[-2] = (bool) 1
0x34a: PushEmpty(bool)
0x34b: Stack[-1] = (bool) 1
0x34c: PushEmpty(bool)
0x34d: Stack[-1] = (bool) 1
0x34e: PushEmpty(bool)
0x34f: Stack[-1] = (bool) 1
0x350: PushEmpty(bool)
0x351: Stack[-1] = (bool) 1
0x352: PushEmpty(bool)
0x353: Stack[-1] = (bool) 1
0x354: PushEmpty(bool)
0x355: Stack[-1] = (bool) 1
0x356: PushEmpty(bool)
0x357: Stack[-1] = (bool) 1
0x358: PushEmpty(bool)
0x359: Stack[-1] = (bool) 1
0x35a: PushEmpty(bool)
0x35b: Stack[-1] = (bool) 1
0x35c: PushEmpty(bool)
0x35d: Stack[-1] = (bool) 1
0x35e: PushEmpty(bool)
0x35f: Stack[-1] = (bool) 1
0x360: Push("woman")
0x361: Pop(1); Push((bool) Stack[-13] == Stack[-1])
0x362: IF (Stack[-1] == 0) GOTO 0x367; Pop(1)

0x363: Push("worker")
0x364: Pop(1); Push((bool) Stack[-13] == Stack[-1])
0x365: IF (Stack[-1] == 0) GOTO 0x367; Pop(1)

0x366: Stack[-1] = (bool) 0
0x367: IF (Stack[-1] == 0) GOTO 0x36c; Pop(1)

0x368: Push("butcher")
0x369: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0x36a: IF (Stack[-1] == 0) GOTO 0x36c; Pop(1)

0x36b: Stack[-1] = (bool) 0
0x36c: IF (Stack[-1] == 0) GOTO 0x371; Pop(1)

0x36d: Push("wasted_girl")
0x36e: Pop(1); Push((bool) Stack[-11] == Stack[-1])
0x36f: IF (Stack[-1] == 0) GOTO 0x371; Pop(1)

0x370: Stack[-1] = (bool) 0
0x371: IF (Stack[-1] == 0) GOTO 0x376; Pop(1)

0x372: Push("boy")
0x373: Pop(1); Push((bool) Stack[-10] == Stack[-1])
0x374: IF (Stack[-1] == 0) GOTO 0x376; Pop(1)

0x375: Stack[-1] = (bool) 0
0x376: IF (Stack[-1] == 0) GOTO 0x37b; Pop(1)

0x377: Push("vaxxabitka")
0x378: Pop(1); Push((bool) Stack[-9] == Stack[-1])
0x379: IF (Stack[-1] == 0) GOTO 0x37b; Pop(1)

0x37a: Stack[-1] = (bool) 0
0x37b: IF (Stack[-1] == 0) GOTO 0x380; Pop(1)

0x37c: Push("unosha")
0x37d: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x37e: IF (Stack[-1] == 0) GOTO 0x380; Pop(1)

0x37f: Stack[-1] = (bool) 0
0x380: IF (Stack[-1] == 0) GOTO 0x385; Pop(1)

0x381: Push("wasted_male")
0x382: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x383: IF (Stack[-1] == 0) GOTO 0x385; Pop(1)

0x384: Stack[-1] = (bool) 0
0x385: IF (Stack[-1] == 0) GOTO 0x38a; Pop(1)

0x386: Push("alkash")
0x387: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x388: IF (Stack[-1] == 0) GOTO 0x38a; Pop(1)

0x389: Stack[-1] = (bool) 0
0x38a: IF (Stack[-1] == 0) GOTO 0x38f; Pop(1)

0x38b: Push("dohodyaga")
0x38c: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x38d: IF (Stack[-1] == 0) GOTO 0x38f; Pop(1)

0x38e: Stack[-1] = (bool) 0
0x38f: IF (Stack[-1] == 0) GOTO 0x394; Pop(1)

0x390: Push("vaxxabit")
0x391: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x392: IF (Stack[-1] == 0) GOTO 0x394; Pop(1)

0x393: Stack[-1] = (bool) 0
0x394: IF (Stack[-1] == 0) GOTO 0x399; Pop(1)

0x395: Push("nudegirl")
0x396: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x397: IF (Stack[-1] == 0) GOTO 0x399; Pop(1)

0x398: Stack[-1] = (bool) 0
0x399: IF (Stack[-1] == 0) GOTO 0x39e; Pop(1)

0x39a: Push("morlok")
0x39b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x39c: IF (Stack[-1] == 0) GOTO 0x39e; Pop(1)

0x39d: Stack[-2] = (bool) 0
0x39e: Return(); Pop(0)

0x39f: PushEmpty(object, object)
0x3a0: @ self(Stack[-1])
0x3a1: Pop(0)
0x3a2: Stack[-3] = Stack[-1]
0x3a3: Return(); Pop(2)

0x3a4: Stack[-1] = 0
0x3a5: PushEmpty(float, float)
0x3a6: Pop(0); Push(Stack[-3] | Stack[-3]);
0x3a7: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x3a8: Push((float)0.0)
0x3a9: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x3aa: IF (Stack[-1] == 0) GOTO 0x3ad; Pop(1)

0x3ab: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x3ac: Return(); Pop(2)

0x3ad: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x3ae: Return(); Pop(2)

0x3af: PushEmpty()
0x3b0: Pop(0); Push((bool) Stack[-2] < Stack[-1])
0x3b1: IF (Stack[-1] == 0) GOTO 0x3b4; Pop(1)

0x3b2: Stack[-3] = Stack[-2]
0x3b3: GOTO 0x3b5

0x3b4: Stack[-3] = Stack[-1]
0x3b5: Return(); Pop(0)

0x3b6: PushEmpty()
0x3b7: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x3b8: IF (Stack[-1] == 0) GOTO 0x3bb; Pop(1)

0x3b9: Stack[-4] = Stack[-2]
0x3ba: Return(); Pop(0)

0x3bb: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x3bc: IF (Stack[-1] == 0) GOTO 0x3bf; Pop(1)

0x3bd: Stack[-4] = Stack[-1]
0x3be: Return(); Pop(0)

0x3bf: Stack[-4] = Stack[-3]
0x3c0: Return(); Pop(0)

0x3c1: PushEmpty(int, int)
0x3c2: @ irand(Stack[-1], Stack[-3])
0x3c3: Pop(0)
0x3c4: Stack[-5] = Stack[-1] < Stack[-4]; Pop(0);
0x3c5: Return(); Pop(2)

0x3c6: PushEmpty(object, object)
0x3c7: @ CreateObjectSet(Stack[-1])
0x3c8: Pop(0)
0x3c9: Stack[-3] = Stack[-1]
0x3ca: Return(); Pop(2)

0x3cb: Stack[-1] = 0
0x3cc: PushEmpty(object, object)
0x3cd: @ CreateFloatVector(Stack[-1])
0x3ce: Pop(0)
0x3cf: @@ add(Stack[-3])
0x3d0: Pop(0)
0x3d1: Push((int) 15)
0x3d2: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x3d3: Pop(1)
0x3d4: Return(); Pop(2)

0x3d5: Stack[-1] = 0
0x3d6: PushEmpty(object, object)
0x3d7: @ GetScene(Stack[-1])
0x3d8: Pop(0)
0x3d9: Push("battle")
0x3da: PushEmpty(object)
0x3db: Call2 0x39f

0x3dc: Pop(0)
0x3dd: @ BroadcastMessage(Stack[-2], Stack[-1], Stack[-3])
0x3de: Pop(2)
0x3df: Return(); Pop(2)

0x3e0: Stack[-1] = 0
0x3e1: PushEmpty(int, int)
0x3e2: Push("branch")
0x3e3: @ GetVariable(Stack[-1], Stack[-2])
0x3e4: Pop(1)
0x3e5: Stack[-3] = Stack[-1]
0x3e6: Return(); Pop(2)

0x3e7: PushEmpty()
0x3e8: PushEmpty(int)
0x3e9: Call2 0x3e1

0x3ea: Pop(0)
0x3eb: Push((int) 1)
0x3ec: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x3ed: IF (Stack[-1] == 0) GOTO 0x3f1; Pop(1)

0x3ee: @ WorkWithCorpse(Stack[-1])
0x3ef: Pop(0)
0x3f0: GOTO 0x3f3

0x3f1: @ Barter(Stack[-1])
0x3f2: Pop(0)
0x3f3: Return(); Pop(0)

0x3f4: PushEmpty(int, bool, int, bool)
0x3f5: Pop(0); Push((bool) Stack[-6] > Stack[-5])
0x3f6: IF (Stack[-1] == 0) GOTO 0x3fb; Pop(1)

0x3f7: Push("GenerateMoney: iMin > iMax")
0x3f8: @ Trace(Stack[-1])
0x3f9: Pop(1)
0x3fa: Return(); Pop(4)

0x3fb: Stack[-2] = (int) 0
0x3fc: Pop(0); Push((bool) Stack[-6] != Stack[-5])
0x3fd: IF (Stack[-1] == 0) GOTO 0x402; Pop(1)

0x3fe: Pop(0); Push(Stack[-5] - Stack[-6]);
0x3ff: @ irand(Stack[-3], Stack[-1])
0x400: Pop(1)
0x401: GOTO 0x406

0x402: Push((int) 0)
0x403: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x404: IF (Stack[-1] == 0) GOTO 0x406; Pop(1)

0x405: Return(); Pop(4)

0x406: Stack[-2] = Stack[-2] + Stack[-6]; Pop(0);
0x407: Push((int) 0)
0x408: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x409: IF (Stack[-1] == 0) GOTO 0x40b; Pop(1)

0x40a: Return(); Pop(4)

0x40b: PushEmpty(int, string)
0x40c: Stack[-1] = "Money"
0x40d: Call2 0x46a

0x40e: Pop(1)
0x40f: Push((int) 0)
0x410: @ AddItem(Stack[-3], Stack[-2], Stack[-1], Stack[-4])
0x411: Pop(2)
0x412: Return(); Pop(4)

0x413: PushEmpty(object, int, bool, object, int, bool)
0x414: @ CreateInvItem(Stack[-3])
0x415: Pop(0)
0x416: @@ SetItemName(Stack[-7])
0x417: Pop(0)
0x418: Push("Organ")
0x419: Push((int) 1)
0x41a: @@ SetProperty(Stack[-2], Stack[-1])
0x41b: Pop(2)
0x41c: @@ GetItemID(Stack[-2])
0x41d: Pop(0)
0x41e: Push((int) 0)
0x41f: Push((int) 1)
0x420: @ AddItem(Stack[-3], Stack[-5], Stack[-2], Stack[-1])
0x421: Pop(2)
0x422: Return(); Pop(6)

0x423: Stack[-3] = 0
0x424: PushEmpty(int)
0x425: Call2 0x3e1

0x426: Pop(0)
0x427: Push((int) 1)
0x428: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x429: IF (Stack[-1] == 0) GOTO 0x42b; Pop(1)

0x42a: Return(); Pop(0)

0x42b: PushEmpty(string)
0x42c: Stack[-1] = "liver"
0x42d: Call2 0x413

0x42e: Pop(1)
0x42f: PushEmpty(string)
0x430: Stack[-1] = "kidney"
0x431: Call2 0x413

0x432: Pop(1)
0x433: PushEmpty(string)
0x434: Stack[-1] = "heart"
0x435: Call2 0x413

0x436: Pop(1)
0x437: PushEmpty(string)
0x438: Stack[-1] = "blood"
0x439: Call2 0x413

0x43a: Pop(1)
0x43b: Return(); Pop(0)

0x43c: PushEmpty(int, bool, int, bool)
0x43d: Push((int) 0)
0x43e: @ ClearSubContainer(Stack[-1])
0x43f: Pop(1)
0x440: PushEmpty(int, int)
0x441: Stack[-2] = (int) 600
0x442: Stack[-1] = (int) 1500
0x443: Call2 0x3f4

0x444: Pop(2)
0x445: PushEmpty(string, int, int, int)
0x446: Stack[-4] = "rusk"
0x447: Stack[-3] = (int) 1
0x448: Stack[-2] = (int) 3
0x449: Stack[-1] = (int) 2
0x44a: Call2 0x310

0x44b: Pop(4)
0x44c: PushEmpty(string, int, int, int)
0x44d: Stack[-4] = "alpha_pills"
0x44e: Stack[-3] = (int) 1
0x44f: Stack[-2] = (int) 3
0x450: Stack[-1] = (int) 5
0x451: Call2 0x310

0x452: Pop(4)
0x453: PushEmpty(string, int, int, int)
0x454: Stack[-4] = "beta_pills"
0x455: Stack[-3] = (int) 1
0x456: Stack[-2] = (int) 6
0x457: Stack[-1] = (int) 4
0x458: Call2 0x310

0x459: Pop(4)
0x45a: PushEmpty(string, int, int, int)
0x45b: Stack[-4] = "gamma_pills"
0x45c: Stack[-3] = (int) 1
0x45d: Stack[-2] = (int) 12
0x45e: Stack[-1] = (int) 3
0x45f: Call2 0x310

0x460: Pop(4)
0x461: PushEmpty(int, string)
0x462: Stack[-1] = "ognemet_ammo"
0x463: Call2 0x46a

0x464: Pop(1)
0x465: Push((int) 0)
0x466: Push((int) 1)
0x467: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x468: Pop(3)
0x469: Return(); Pop(4)

0x46a: PushEmpty(int, int)
0x46b: @ GetInvItemByName(Stack[-1], Stack[-3])
0x46c: Pop(0)
0x46d: Stack[-4] = Stack[-1]
0x46e: Return(); Pop(2)

0x46f: PushEmpty(string, string)
0x470: PushEmpty(bool, object, string)
0x471: Stack[-2] = Stack[-7]
0x472: Stack[-1] = "class"
0x473: Call2 0x1fc

0x474: Pop(2)
0x475: Pop(1); Push((bool) Stack[-1] == 0)
0x476: IF (Stack[-1] == 0) GOTO 0x479; Pop(1)

0x477: Stack[-5] = (bool) 0
0x478: Return(); Pop(2)

0x479: Push("class")
0x47a: @@ GetProperty(Stack[-1], Stack[-2])
0x47b: Pop(1)
0x47c: PushEmpty(bool)
0x47d: Stack[-1] = (bool) 1
0x47e: PushEmpty(bool)
0x47f: Stack[-1] = (bool) 1
0x480: PushEmpty(bool)
0x481: Stack[-1] = (bool) 1
0x482: PushEmpty(bool)
0x483: Stack[-1] = (bool) 1
0x484: PushEmpty(bool)
0x485: Stack[-1] = (bool) 1
0x486: PushEmpty(bool)
0x487: Stack[-1] = (bool) 1
0x488: PushEmpty(bool)
0x489: Stack[-1] = (bool) 1
0x48a: PushEmpty(bool)
0x48b: Stack[-1] = (bool) 1
0x48c: PushEmpty(bool)
0x48d: Stack[-1] = (bool) 1
0x48e: PushEmpty(bool)
0x48f: Stack[-1] = (bool) 1
0x490: Push("patrol")
0x491: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0x492: IF (Stack[-1] == 0) GOTO 0x497; Pop(1)

0x493: Push("sanitar")
0x494: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0x495: IF (Stack[-1] == 0) GOTO 0x497; Pop(1)

0x496: Stack[-1] = (bool) 0
0x497: IF (Stack[-1] == 0) GOTO 0x49c; Pop(1)

0x498: Push("soldier")
0x499: Pop(1); Push((bool) Stack[-11] == Stack[-1])
0x49a: IF (Stack[-1] == 0) GOTO 0x49c; Pop(1)

0x49b: Stack[-1] = (bool) 0
0x49c: IF (Stack[-1] == 0) GOTO 0x4a1; Pop(1)

0x49d: Push("woman")
0x49e: Pop(1); Push((bool) Stack[-10] == Stack[-1])
0x49f: IF (Stack[-1] == 0) GOTO 0x4a1; Pop(1)

0x4a0: Stack[-1] = (bool) 0
0x4a1: IF (Stack[-1] == 0) GOTO 0x4a6; Pop(1)

0x4a2: Push("wasted_girl")
0x4a3: Pop(1); Push((bool) Stack[-9] == Stack[-1])
0x4a4: IF (Stack[-1] == 0) GOTO 0x4a6; Pop(1)

0x4a5: Stack[-1] = (bool) 0
0x4a6: IF (Stack[-1] == 0) GOTO 0x4ab; Pop(1)

0x4a7: Push("vaxxabitka")
0x4a8: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x4a9: IF (Stack[-1] == 0) GOTO 0x4ab; Pop(1)

0x4aa: Stack[-1] = (bool) 0
0x4ab: IF (Stack[-1] == 0) GOTO 0x4b0; Pop(1)

0x4ac: Push("vaxxabit")
0x4ad: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x4ae: IF (Stack[-1] == 0) GOTO 0x4b0; Pop(1)

0x4af: Stack[-1] = (bool) 0
0x4b0: IF (Stack[-1] == 0) GOTO 0x4b5; Pop(1)

0x4b1: Push("little_girl")
0x4b2: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x4b3: IF (Stack[-1] == 0) GOTO 0x4b5; Pop(1)

0x4b4: Stack[-1] = (bool) 0
0x4b5: IF (Stack[-1] == 0) GOTO 0x4ba; Pop(1)

0x4b6: Push("girl")
0x4b7: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x4b8: IF (Stack[-1] == 0) GOTO 0x4ba; Pop(1)

0x4b9: Stack[-1] = (bool) 0
0x4ba: IF (Stack[-1] == 0) GOTO 0x4bf; Pop(1)

0x4bb: Push("dohodyaga")
0x4bc: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x4bd: IF (Stack[-1] == 0) GOTO 0x4bf; Pop(1)

0x4be: Stack[-1] = (bool) 0
0x4bf: IF (Stack[-1] == 0) GOTO 0x4c4; Pop(1)

0x4c0: Push("nudegirl")
0x4c1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4c2: IF (Stack[-1] == 0) GOTO 0x4c4; Pop(1)

0x4c3: Stack[-1] = (bool) 0
0x4c4: IF (Stack[-1] == 0) GOTO 0x4c7; Pop(1)

0x4c5: Stack[-5] = (bool) 1
0x4c6: Return(); Pop(2)

0x4c7: Push(Stack[-3])
0x4c8: IF (Stack[-1] == 0) GOTO 0x4cb; Pop(1)

0x4c9: Stack[-5] = (bool) 0
0x4ca: Return(); Pop(2)

0x4cb: Stack[-5] = (bool) 1
0x4cc: PushEmpty(bool)
0x4cd: Stack[-1] = (bool) 1
0x4ce: PushEmpty(bool)
0x4cf: Stack[-1] = (bool) 1
0x4d0: PushEmpty(bool)
0x4d1: Stack[-1] = (bool) 1
0x4d2: PushEmpty(bool)
0x4d3: Stack[-1] = (bool) 1
0x4d4: PushEmpty(bool)
0x4d5: Stack[-1] = (bool) 1
0x4d6: Push("worker")
0x4d7: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x4d8: IF (Stack[-1] == 0) GOTO 0x4dd; Pop(1)

0x4d9: Push("butcher")
0x4da: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x4db: IF (Stack[-1] == 0) GOTO 0x4dd; Pop(1)

0x4dc: Stack[-1] = (bool) 0
0x4dd: IF (Stack[-1] == 0) GOTO 0x4e2; Pop(1)

0x4de: Push("boy")
0x4df: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x4e0: IF (Stack[-1] == 0) GOTO 0x4e2; Pop(1)

0x4e1: Stack[-1] = (bool) 0
0x4e2: IF (Stack[-1] == 0) GOTO 0x4e7; Pop(1)

0x4e3: Push("unosha")
0x4e4: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x4e5: IF (Stack[-1] == 0) GOTO 0x4e7; Pop(1)

0x4e6: Stack[-1] = (bool) 0
0x4e7: IF (Stack[-1] == 0) GOTO 0x4ec; Pop(1)

0x4e8: Push("wasted_male")
0x4e9: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x4ea: IF (Stack[-1] == 0) GOTO 0x4ec; Pop(1)

0x4eb: Stack[-1] = (bool) 0
0x4ec: IF (Stack[-1] == 0) GOTO 0x4f1; Pop(1)

0x4ed: Push("alkash")
0x4ee: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4ef: IF (Stack[-1] == 0) GOTO 0x4f1; Pop(1)

0x4f0: Stack[-1] = (bool) 0
0x4f1: IF (Stack[-1] == 0) GOTO 0x4f6; Pop(1)

0x4f2: Push("morlok")
0x4f3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4f4: IF (Stack[-1] == 0) GOTO 0x4f6; Pop(1)

0x4f5: Stack[-5] = (bool) 0
0x4f6: Return(); Pop(2)

0x4f7: PushEmpty(float, object, object, float, object, object)
0x4f8: Push(GlobalVars[4])
0x4f9: PushEmpty(object)
0x4fa: Call2 0x3c6

0x4fb: Stack[-2] = Stack[-1]
0x4fc: Pop(1)
0x4fd: GlobalVars[4] = Stack[-1]; Pop(1)
0x4fe: @ GetAttackDistance(Stack[-3])
0x4ff: Pop(0)
0x500: Push(GlobalVars[2])
0x501: Push((float)600.0)
0x502: Stack[-2] = Stack[-5] / Stack[-1]; Pop(1);
0x503: GlobalVars[2] = Stack[-1]; Pop(1)
0x504: @ GetScene(Stack[-2])
0x505: Pop(0)
0x506: Push("flame")
0x507: Push(CVector(0.0, 0.0, 0.0))
0x508: @ AddActorByType(Stack[-3], Stack[-2], Stack[-4], Stack[-1])
0x509: Pop(2)
0x50a: PushEmpty(object)
0x50b: Call2 0x39f

0x50c: Pop(0)
0x50d: Push("flame")
0x50e: @@ Attach(Stack[-2], Stack[-1])
0x50f: Pop(2)
0x510: Push(GlobalVars[3])
0x511: Stack[-1] = (bool) 0
0x512: GlobalVars[3] = Stack[-1]; Pop(1)
0x513: Push((float)0.05)
0x514: @@ SetLength(Stack[-1])
0x515: Pop(1)
0x516: Push(GlobalVars[0])
0x517: Stack[-1] = Stack[-2]
0x518: GlobalVars[0] = Stack[-1]; Pop(1)
0x519: Push((int) 70)
0x51a: Push((float)0.1)
0x51b: @ SetTimer(Stack[-2], Stack[-1])
0x51c: Pop(2)
0x51d: Return(); Pop(6)

0x51e: Stack[-1] = 0
0x51f: Stack[-2] = 0
0x520: PushEmpty(float, float, object, cvector, float, float, float, object, cvector, float)
0x521: Push(Stack[-11])
0x522: IF (Stack[-1] == 0) GOTO 0x527; Pop(1)

0x523: Push(GlobalVars[2])
0x524: Stack[-6] = Stack[-1]
0x525: Pop(1)
0x526: GOTO 0x528

0x527: Stack[-5] = (float) 0.05
0x528: Push(GlobalVars[0])
0x529: @@ GetLength(Stack[-5])
0x52a: Pop(1)
0x52b: Pop(0); Push((bool) Stack[-5] < Stack[-4])
0x52c: IF (Stack[-1] == 0) GOTO 0x52e; Pop(1)

0x52d: Stack[-4] = Stack[-5]
0x52e: Push(GlobalVars[0])
0x52f: @@ SetLength(Stack[-5])
0x530: Pop(1)
0x531: Push(GlobalVars[3])
0x532: Pop(1); Push((bool) Stack[-1] != Stack[-12])
0x533: IF (Stack[-1] == 0) GOTO 0x557; Pop(1)

0x534: Push(Stack[-11])
0x535: IF (Stack[-1] == 0) GOTO 0x54d; Pop(1)

0x536: Push(GlobalVars[1])
0x537: Pop(1); Push((bool) Stack[-1] == 0)
0x538: IF (Stack[-1] == 0) GOTO 0x548; Pop(1)

0x539: Stack[-2] = CVector(0.0, 0.0, 0.0)
0x53a: @ GetHeight(Stack[-1])
0x53b: Pop(0)
0x53c: Push(CvectorIndex(Stack[-2], 1))
0x53d: Stack[-1] = Stack[-2]
0x53e: CvectorIndex(Stack[-3], 1) = Stack[-1];
0x53f: Push("flame_loop")
0x540: Push((int) 0)
0x541: Push((int) 200)
0x542: @ PlayLoopedGlobalSound(Stack[-6], Stack[-3], Stack[-5], Stack[-2], Stack[-1])
0x543: Pop(3)
0x544: Push(GlobalVars[1])
0x545: Stack[-1] = Stack[-4]
0x546: GlobalVars[1] = Stack[-1]; Pop(1)
0x547: Stack[-3] = 0
0x548: Push(GlobalVars[1])
0x549: Push((int) 2)
0x54a: @@ FadeIn(Stack[-1])
0x54b: Pop(2)
0x54c: GOTO 0x554

0x54d: Push(GlobalVars[1])
0x54e: Pop(1); Push(( Stack[-1] != 0 )
0x54f: IF (Stack[-1] == 0) GOTO 0x554; Pop(1)

0x550: Push(GlobalVars[1])
0x551: Push((int) 2)
0x552: @@ FadeOut(Stack[-1])
0x553: Pop(2)
0x554: Push(GlobalVars[3])
0x555: Stack[-1] = Stack[-12]
0x556: GlobalVars[3] = Stack[-1]; Pop(1)
0x557: Return(); Pop(10)

0x558: PushEmpty(cvector, float, cvector, float, bool, cvector, float, cvector, float, bool)
0x559: @ GetPosition(Stack[-5])
0x55a: Pop(0)
0x55b: @ GetHeight(Stack[-4])
0x55c: Pop(0)
0x55d: Push(CvectorIndex(Stack[-5], 1))
0x55e: Push((int) 2)
0x55f: Pop(1); Push(Stack[-6] / Stack[-1]);
0x560: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x561: CvectorIndex(Stack[-6], 1) = Stack[-1];
0x562: Stack[-3] = Stack[-11] - Stack[-5]; Pop(0);
0x563: Pop(0); Push(Stack[-3] | Stack[-3]);
0x564: Stack[-3] = Sqrt(Stack[-1]); Pop(1);
0x565: Push((int) 50)
0x566: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x567: IF (Stack[-1] == 0) GOTO 0x56a; Pop(1)

0x568: Stack[-1] = (bool) 0
0x569: GOTO 0x56e

0x56a: Push(CvectorIndex(Stack[-3], 1))
0x56b: Pop(1); Push(Stack[-1] / Stack[-3]);
0x56c: Push((float)-0.14286)
0x56d: Stack[-3] = Stack[-2] < Stack[-1]; Pop(2);
0x56e: Push("all")
0x56f: Push(Stack[-2])
0x570: IF (Stack[-1] == 0) GOTO 0x573; Pop(1)

0x571: Push("cattack")
0x572: GOTO 0x574

0x573: Push("attack")
0x574: @ PlayAnimation(Stack[-2], Stack[-1])
0x575: Pop(2)
0x576: Return(); Pop(10)

0x577: PushEmpty(cvector, float, cvector, float)
0x578: @@ GetPosition(Stack[-2])
0x579: Pop(0)
0x57a: Push("@GetHeight")
0x57b: Push((int) 1)
0x57c: Pop(2); Push(IsFuncExist(Stack[-7], Stack[-2], Stack[-1]))
0x57d: IF (Stack[-1] == 0) GOTO 0x585; Pop(1)

0x57e: @@ GetHeight(Stack[-1])
0x57f: Pop(0)
0x580: Push(CvectorIndex(Stack[-2], 1))
0x581: Push((int) 2)
0x582: Pop(1); Push(Stack[-3] / Stack[-1]);
0x583: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x584: CvectorIndex(Stack[-3], 1) = Stack[-1];
0x585: PushEmpty(cvector)
0x586: Stack[-1] = Stack[-3]
0x587: Call2 0x558

0x588: Pop(1)
0x589: Return(); Pop(4)

0x58a: PushEmpty(bool, float, float, string, float, bool, float, float, string, float)
0x58b: PushEmpty(bool, object)
0x58c: Stack[-1] = Stack[-13]
0x58d: Call2 0x27a

0x58e: Pop(1)
0x58f: Pop(1); Push((bool) Stack[-1] == 0)
0x590: IF (Stack[-1] == 0) GOTO 0x593; Pop(1)

0x591: Stack[-12] = (bool) 0
0x592: Return(); Pop(10)

0x593: Push(GlobalVars[4])
0x594: @@ in(Stack[-6], Stack[-12])
0x595: Pop(1)
0x596: Push(Stack[-5])
0x597: IF (Stack[-1] == 0) GOTO 0x59a; Pop(1)

0x598: Stack[-12] = (bool) 1
0x599: Return(); Pop(10)

0x59a: PushEmpty(bool, object)
0x59b: Stack[-1] = Stack[-13]
0x59c: Call2 0x1f7

0x59d: Pop(1)
0x59e: IF (Stack[-1] == 0) GOTO 0x5ad; Pop(1)

0x59f: Push("reputation")
0x5a0: @@ GetProperty(Stack[-1], Stack[-5])
0x5a1: Pop(1)
0x5a2: Push((float)0.33)
0x5a3: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x5a4: IF (Stack[-1] == 0) GOTO 0x5a7; Pop(1)

0x5a5: Stack[-12] = (bool) 1
0x5a6: Return(); Pop(10)

0x5a7: Push("disease")
0x5a8: @@ GetProperty(Stack[-1], Stack[-4])
0x5a9: Pop(1)
0x5aa: Push((float)0.33)
0x5ab: Stack[-13] = Stack[-4] > Stack[-1]; Pop(1);
0x5ac: Return(); Pop(10)

0x5ad: PushEmpty(bool, object, string)
0x5ae: Stack[-2] = Stack[-14]
0x5af: Stack[-1] = "class"
0x5b0: Call2 0x1fc

0x5b1: Pop(2)
0x5b2: Pop(1); Push((bool) Stack[-1] == 0)
0x5b3: IF (Stack[-1] == 0) GOTO 0x5b6; Pop(1)

0x5b4: Stack[-12] = (bool) 0
0x5b5: Return(); Pop(10)

0x5b6: Push("class")
0x5b7: @@ GetProperty(Stack[-1], Stack[-3])
0x5b8: Pop(1)
0x5b9: PushEmpty(bool)
0x5ba: Stack[-1] = (bool) 1
0x5bb: PushEmpty(bool)
0x5bc: Stack[-1] = (bool) 1
0x5bd: PushEmpty(bool)
0x5be: Stack[-1] = (bool) 1
0x5bf: Push("bomber")
0x5c0: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x5c1: IF (Stack[-1] == 0) GOTO 0x5c6; Pop(1)

0x5c2: Push("hunter")
0x5c3: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x5c4: IF (Stack[-1] == 0) GOTO 0x5c6; Pop(1)

0x5c5: Stack[-1] = (bool) 0
0x5c6: IF (Stack[-1] == 0) GOTO 0x5cb; Pop(1)

0x5c7: Push("grabitel")
0x5c8: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x5c9: IF (Stack[-1] == 0) GOTO 0x5cb; Pop(1)

0x5ca: Stack[-1] = (bool) 0
0x5cb: IF (Stack[-1] == 0) GOTO 0x5d0; Pop(1)

0x5cc: Push("rat_big")
0x5cd: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x5ce: IF (Stack[-1] == 0) GOTO 0x5d0; Pop(1)

0x5cf: Stack[-1] = (bool) 0
0x5d0: IF (Stack[-1] == 0) GOTO 0x5d3; Pop(1)

0x5d1: Stack[-12] = (bool) 1
0x5d2: Return(); Pop(10)

0x5d3: PushEmpty(bool, object, string)
0x5d4: Stack[-2] = Stack[-14]
0x5d5: Stack[-1] = "disease"
0x5d6: Call2 0x1fc

0x5d7: Pop(2)
0x5d8: Pop(1); Push((bool) Stack[-1] == 0)
0x5d9: IF (Stack[-1] == 0) GOTO 0x5dc; Pop(1)

0x5da: Stack[-12] = (bool) 0
0x5db: Return(); Pop(10)

0x5dc: PushEmpty(bool)
0x5dd: Stack[-1] = (bool) 1
0x5de: PushEmpty(bool, string)
0x5df: Stack[-1] = Stack[-5]
0x5e0: Call2 0x348

0x5e1: Pop(1)
0x5e2: IF (Stack[-1] == 0) GOTO 0x5e7; Pop(1)

0x5e3: Push("dog")
0x5e4: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x5e5: IF (Stack[-1] == 0) GOTO 0x5e7; Pop(1)

0x5e6: Stack[-1] = (bool) 0
0x5e7: IF (Stack[-1] == 0) GOTO 0x5ee; Pop(1)

0x5e8: Push("disease")
0x5e9: @@ GetProperty(Stack[-1], Stack[-2])
0x5ea: Pop(1)
0x5eb: Push((int) 0)
0x5ec: Stack[-13] = Stack[-2] > Stack[-1]; Pop(1);
0x5ed: Return(); Pop(10)

0x5ee: Stack[-12] = (bool) 0
0x5ef: Return(); Pop(10)

0x5f0: PushEmpty(bool, bool)
0x5f1: Pop(0); Push((bool) Stack[-3] == 0)
0x5f2: IF (Stack[-1] == 0) GOTO 0x5f4; Pop(1)

0x5f3: Return(); Pop(2)

0x5f4: Push(GlobalVars[4])
0x5f5: @@ in(Stack[-2], Stack[-4])
0x5f6: Pop(1)
0x5f7: Pop(0); Push((bool) Stack[-1] == 0)
0x5f8: IF (Stack[-1] == 0) GOTO 0x5fc; Pop(1)

0x5f9: Push(GlobalVars[4])
0x5fa: @@ add(Stack[-4])
0x5fb: Pop(1)
0x5fc: PushEmpty(bool, object)
0x5fd: Stack[-1] = Stack[-5]
0x5fe: Call2 0x1f7

0x5ff: Pop(1)
0x600: IF (Stack[-1] == 0) GOTO 0x607; Pop(1)

0x601: PushEmpty(object)
0x602: Call2 0x39f

0x603: Pop(0)
0x604: Push((float)-0.07)
0x605: @ ReportReputationChange(Stack[-5], Stack[-2], Stack[-1])
0x606: Pop(2)
0x607: Return(); Pop(2)

0x608: PushEmpty()
0x609: PushEmpty(object)
0x60a: Call2 0x39f

0x60b: Pop(0)
0x60c: Push((float)-0.13)
0x60d: Push((bool) 1)
0x60e: @ ReportReputationChange(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x60f: Pop(3)
0x610: PushEmpty(object)
0x611: Stack[-1] = Stack[-2]
0x612: Push(-1, 0); TaskCall(2)
0x613: Call2 0x116

0x614: Pop(-1, 0); TaskReturn
0x615: Pop(1)
0x616: Return(); Pop(0)

0x617: PushEmpty()
0x618: PushEmpty(object, int, float)
0x619: Stack[-3] = Stack[-7]
0x61a: Stack[-2] = Stack[-6]
0x61b: Stack[-1] = Stack[-5]
0x61c: Call2 0x2be

0x61d: Pop(3)
0x61e: Return(); Pop(0)

0x61f: PushEmpty()
0x620: PushEmpty(object, int, float, cvector, cvector)
0x621: Stack[-5] = Stack[-11]
0x622: Stack[-4] = Stack[-10]
0x623: Stack[-3] = Stack[-9]
0x624: Stack[-2] = Stack[-7]
0x625: Stack[-1] = Stack[-6]
0x626: Call2 0x302

0x627: Pop(5)
0x628: Return(); Pop(0)

0x629: PushEmpty(float, float)
0x62a: Push("health")
0x62b: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x62c: IF (Stack[-1] == 0) GOTO 0x635; Pop(1)

0x62d: Push("health")
0x62e: @ GetProperty(Stack[-1], Stack[-2])
0x62f: Pop(1)
0x630: Push((int) 0)
0x631: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x632: IF (Stack[-1] == 0) GOTO 0x635; Pop(1)

0x633: @ SignalDeath(Stack[-4])
0x634: Pop(0)
0x635: Return(); Pop(2)

0x636: PushEmpty()
0x637: PushEmpty(object)
0x638: Stack[-1] = Stack[-2]
0x639: Call2 0x608

0x63a: Pop(1)
0x63b: Return(); Pop(0)

0x63c: PushEmpty(bool, bool)
0x63d: PushEmpty(bool, object, bool)
0x63e: Stack[-2] = Stack[-7]
0x63f: Stack[-1] = !Stack[-6]; Pop(0);
0x640: Call2 0x46f

0x641: Pop(2)
0x642: IF (Stack[-1] == 0) GOTO 0x654; Pop(1)

0x643: @ CanSee(Stack[-1], Stack[-5])
0x644: Pop(0)
0x645: PushEmpty(bool)
0x646: Stack[-1] = (bool) 1
0x647: Push(Stack[-2])
0x648: IF (Stack[-1] == 0) GOTO 0x651; Pop(1)

0x649: PushEmpty(float, object)
0x64a: Stack[-1] = Stack[-8]
0x64b: Call2 0x1ef

0x64c: Pop(1)
0x64d: Push((float)490000.0)
0x64e: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x64f: IF (Stack[-1] == 0) GOTO 0x651; Pop(1)

0x650: Stack[-1] = (bool) 0
0x651: IF (Stack[-1] == 0) GOTO 0x654; Pop(1)

0x652: Stack[-6] = (bool) 1
0x653: Return(); Pop(2)

0x654: Stack[-6] = (bool) 0
0x655: Return(); Pop(2)

0x656: PushEmpty(object, float, object, bool, string, float, float, float, object, float, object, bool, string, float, float, float)
0x657: Push((int) 70)
0x658: Pop(1); Push((bool) Stack[-18] != Stack[-1])
0x659: IF (Stack[-1] == 0) GOTO 0x65b; Pop(1)

0x65a: Return(); Pop(16)

0x65b: Push(GlobalVars[0])
0x65c: Pop(1); Push((bool) Stack[-1] == 0)
0x65d: IF (Stack[-1] == 0) GOTO 0x65f; Pop(1)

0x65e: Return(); Pop(16)

0x65f: Push(GlobalVars[0])
0x660: @@ Intersect(Stack[-9], Stack[-8])
0x661: Pop(1)
0x662: Push(GlobalVars[0])
0x663: Push(GlobalVars[3])
0x664: IF (Stack[-1] == 0) GOTO 0x66d; Pop(1)

0x665: PushEmpty(float, float, float)
0x666: Stack[-2] = Stack[-11]
0x667: Push(GlobalVars[2])
0x668: Stack[-2] = Stack[-1]
0x669: Pop(1)
0x66a: Call2 0x3af

0x66b: Pop(2)
0x66c: GOTO 0x66e

0x66d: Push((float)0.05)
0x66e: @@ SetLength(Stack[-1])
0x66f: Pop(2)
0x670: PushEmpty()
0x671: Call2 0x3d6

0x672: Pop(0)
0x673: @@ Next(Stack[-5], Stack[-6])
0x674: Pop(0)
0x675: Push(Stack[-5])
0x676: IF (Stack[-1] == 0) GOTO 0x6b7; Pop(1)

0x677: PushEmpty(bool)
0x678: Stack[-1] = (bool) 0
0x679: Pop(0); Push(( Stack[-7] != 0 )
0x67a: IF (Stack[-1] == 0) GOTO 0x681; Pop(1)

0x67b: PushEmpty(object)
0x67c: Call2 0x39f

0x67d: Pop(0)
0x67e: Pop(1); Push((bool) Stack[-8] != Stack[-1])
0x67f: IF (Stack[-1] == 0) GOTO 0x681; Pop(1)

0x680: Stack[-1] = (bool) 1
0x681: IF (Stack[-1] == 0) GOTO 0x6b6; Pop(1)

0x682: PushEmpty(bool, object, string)
0x683: Stack[-2] = Stack[-9]
0x684: Stack[-1] = "class"
0x685: Call2 0x1fc

0x686: Pop(2)
0x687: IF (Stack[-1] == 0) GOTO 0x68b; Pop(1)

0x688: Push("class")
0x689: @@ GetProperty(Stack[-1], Stack[-5])
0x68a: Pop(1)
0x68b: Push("sanitar")
0x68c: Pop(1); Push((bool) Stack[-5] != Stack[-1])
0x68d: IF (Stack[-1] == 0) GOTO 0x6b6; Pop(1)

0x68e: PushEmpty(float, object, float, int)
0x68f: Stack[-3] = Stack[-10]
0x690: Stack[-2] = (float) 0.1
0x691: Stack[-1] = (int) 2
0x692: Call2 0x208

0x693: Stack[-7] = Stack[-4]
0x694: Pop(4)
0x695: PushEmpty(bool, object, string)
0x696: Stack[-2] = Stack[-9]
0x697: Stack[-1] = "disease"
0x698: Call2 0x1fc

0x699: Pop(2)
0x69a: IF (Stack[-1] == 0) GOTO 0x6a8; Pop(1)

0x69b: Push("disease")
0x69c: @@ GetProperty(Stack[-1], Stack[-3])
0x69d: Pop(1)
0x69e: Push((float)0.1)
0x69f: Pop(1); Push((bool) Stack[-3] <= Stack[-1])
0x6a0: IF (Stack[-1] == 0) GOTO 0x6a3; Pop(1)

0x6a1: Stack[-2] = (int) 0
0x6a2: GOTO 0x6a5

0x6a3: Push((float)0.1)
0x6a4: Stack[-3] = Stack[-3] - Stack[-1]; Pop(1);
0x6a5: Push("disease")
0x6a6: @@ SetProperty(Stack[-1], Stack[-3])
0x6a7: Pop(1)
0x6a8: PushEmpty(bool, object, string)
0x6a9: Stack[-2] = Stack[-9]
0x6aa: Stack[-1] = "fire"
0x6ab: Call2 0x1fc

0x6ac: Pop(2)
0x6ad: IF (Stack[-1] == 0) GOTO 0x6b6; Pop(1)

0x6ae: Push("fire")
0x6af: @@ GetProperty(Stack[-1], Stack[-2])
0x6b0: Pop(1)
0x6b1: Push("fire")
0x6b2: Push((float)0.1)
0x6b3: Pop(1); Push(Stack[-3] + Stack[-1]);
0x6b4: @@ SetProperty(Stack[-2], Stack[-1])
0x6b5: Pop(2)
0x6b6: GOTO 0x673

0x6b7: Return(); Pop(16)

0x6b8: Stack[-6] = 0
0x6b9: Stack[-8] = 0
0x6ba: PushEmpty()
0x6bb: Stack[-2] = (bool) 0
0x6bc: Pop(0); Push(( Stack[-1] != 0 )
0x6bd: IF (Stack[-1] == 0) GOTO 0x6c6; Pop(1)

0x6be: PushEmpty(float, object)
0x6bf: Stack[-1] = Stack[-3]
0x6c0: Call2 0x1ef

0x6c1: Pop(1)
0x6c2: Push((float)302500.0)
0x6c3: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x6c4: IF (Stack[-1] == 0) GOTO 0x6c6; Pop(1)

0x6c5: Stack[-2] = (bool) 1
0x6c6: Return(); Pop(0)

0x6c7: PushEmpty()
0x6c8: Stack[-2] = (bool) 0
0x6c9: PushEmpty(bool, object)
0x6ca: Stack[-1] = Stack[-3]
0x6cb: Call2 0x6fd

0x6cc: Pop(1)
0x6cd: IF (Stack[-1] == 0) GOTO 0x6d4; Pop(1)

0x6ce: PushEmpty(bool, object)
0x6cf: Stack[-1] = Stack[-3]
0x6d0: Call2 0x6ba

0x6d1: Pop(1)
0x6d2: IF (Stack[-1] == 0) GOTO 0x6d4; Pop(1)

0x6d3: Stack[-2] = (bool) 1
0x6d4: Return(); Pop(0)

0x6d5: PushEmpty()
0x6d6: Stack[-2] = (bool) 0
0x6d7: PushEmpty(bool, object)
0x6d8: Stack[-1] = Stack[-3]
0x6d9: Call2 0x6fd

0x6da: Pop(1)
0x6db: IF (Stack[-1] == 0) GOTO 0x6e2; Pop(1)

0x6dc: PushEmpty(bool, object)
0x6dd: Stack[-1] = Stack[-3]
0x6de: Call2 0x6ba

0x6df: Pop(1)
0x6e0: IF (Stack[-1] == 0) GOTO 0x6e2; Pop(1)

0x6e1: Stack[-2] = (bool) 1
0x6e2: Return(); Pop(0)

0x6e3: PushEmpty()
0x6e4: Pop(0); Push((bool) Stack[-1] == 0)
0x6e5: IF (Stack[-1] == 0) GOTO 0x6e8; Pop(1)

0x6e6: Stack[-3] = (bool) 0
0x6e7: Return(); Pop(0)

0x6e8: Stack[-3] = (bool) 1
0x6e9: PushEmpty(bool, object)
0x6ea: Stack[-1] = Stack[-4]
0x6eb: Call2 0x6fd

0x6ec: Pop(1)
0x6ed: Pop(1); Push((bool) Stack[-1] == 0)
0x6ee: IF (Stack[-1] == 0) GOTO 0x6fc; Pop(1)

0x6ef: PushEmpty(float, object)
0x6f0: Stack[-1] = Stack[-3]
0x6f1: Call2 0x1ef

0x6f2: Pop(1)
0x6f3: PushEmpty(float, object)
0x6f4: Stack[-1] = Stack[-5]
0x6f5: Call2 0x1ef

0x6f6: Pop(1)
0x6f7: Push((int) 25)
0x6f8: Pop(2); Push(Stack[-2] - Stack[-1]);
0x6f9: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x6fa: IF (Stack[-1] == 0) GOTO 0x6fc; Pop(1)

0x6fb: Stack[-3] = (bool) 0
0x6fc: Return(); Pop(0)

0x6fd: PushEmpty(bool, bool)
0x6fe: @ IsPlayerActor(Stack[-3], Stack[-1])
0x6ff: Pop(0)
0x700: Stack[-4] = (bool) 1
0x701: Push(Stack[-1])
0x702: IF (Stack[-1] == 0) GOTO 0x709; Pop(1)

0x703: PushEmpty(bool, object)
0x704: Stack[-1] = Stack[-5]
0x705: Call2 0x58a

0x706: Pop(1)
0x707: IF (Stack[-1] == 0) GOTO 0x709; Pop(1)

0x708: Stack[-4] = (bool) 0
0x709: Return(); Pop(2)

