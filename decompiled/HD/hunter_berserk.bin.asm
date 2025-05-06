GlobalVarCount = 0

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
	GetPFPosition
	walk
	run
	jump1
	jump2
	jump
	@GetAttackDistance
	GetAttackDistance
	attack
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
	player
	fire
	bullet
	phys
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
	scripted
	blood_dir.xml
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
	revolver_ammo
	samopal_ammo
	rifle_ammo
	lockpick
	hunter_mark

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
	SetTimer (2 args)
	CanSee (2 args)
	SendPlayerEnemy (2 args)
	KillTimer (1 args)
	FindPathTo (2 args)
	RotatePath (2 args)
	FollowPath (5 args)
	Sleep (2 args)
	RequestClearPath (1 args)
	GetAnimationOffset (3 args)
	FindLongestDir (6 args)
	SetDirection (1 args)
	irand (2 args)
	IsPlayerActor (2 args)
	PlayGlobalMusic (1 args)
	GetPFPosition (1 args)
	CanReachByPF (2 args)
	rand (1 args)
	Face (1 args)
	SetSpeed (1 args)
	Sleep (1 args)
	HasAnimation (3 args)
	IsExisting3DSound (2 args)
	GetVictim (2 args)
	ReportAttack (1 args)
	ReportHit (4 args)
	SetAttackState (1 args)
	IsAnimationPlaying (1 args)
	sync (0 args)
	GetScene (1 args)
	FindDirLength (3 args)
	Speak (1 args)
	FindActor (2 args)
	IsDead (1 args)
	GetSecondaryAnimationType (1 args)
	FadeSecondaryAnimation (4 args)
	CreateVectorVector (1 args)
	GetGeometryLocator (4 args)
	AddActorByType (6 args)
	RotateAsync (2 args)
	AddItem (3 args)
	Is3DSoundLoaded (2 args)
	GetEyesHeight (1 args)
	PlayGlobalSound (2 args)
	self (1 args)
	SendWorldWndMessage (1 args)
	CreateFloatVector (1 args)
	RumblePlay (2 args)
	SendWorldWndMessage (2 args)
	GetGameTime (1 args)
	BroadcastMessage (3 args)
	GetVariable (2 args)
	WorkWithCorpse (1 args)
	Barter (1 args)
	Trace (1 args)
	AddItem (4 args)
	CreateInvItem (1 args)
	ClearSubContainer (1 args)
	GetInvItemByName (2 args)
	GetProperty (2 args)
	SignalDeath (1 args)

RunOp = 0x4b4
RunTask = 3

GlobalTasks: 
	GTASK_0  Params = 1
		EVENT_0 Op = 0x1b Vars = (object)
		EVENT_22 Op = 0x9a Vars = (object, int, float, float)
		EVENT_16 Op = 0x9c Vars = (object, string)
		EVENT_41 Op = 0x9e Vars = (object)
	GTASK_1 Vars = (bool, object, bool) Params = 6
		EVENT_17 Op = 0xa0 Vars = (object)
		EVENT_7 Op = 0xd7 Vars = (int)
		EVENT_1 Op = 0xf2 Vars = (object)
		EVENT_2 Op = 0x101 Vars = (object)
		EVENT_10 Op = 0x187 Vars = (object)
		EVENT_41 Op = 0x192 Vars = (object)
	GTASK_2 Vars = (object, int, int, bool, float, int, bool) Params = 2
		EVENT_17 Op = 0x1b4 Vars = (object)
	GTASK_3  Params = 0
		EVENT_5 Op = 0x4b8 Vars = ()

Events:
EVENT_22 Op = 0x78e Vars = (object, int, float, float)
EVENT_43 Op = 0x796 Vars = (object, int, float, float, cvector, cvector)
EVENT_16 Op = 0x7a0 Vars = (object, string)
EVENT_41 Op = 0x7ad Vars = (object)

0x0: PushEmpty()
0x1: PushEmpty()
0x2: Call2 0x737

0x3: Pop(0)
0x4: PushEmpty()
0x5: Call2 0x71f

0x6: Pop(0)
0x7: PushEmpty(object)
0x8: Stack[-1] = Stack[-2]
0x9: Call2 0xc

0xa: Pop(1)
0xb: Return(); Pop(0)

0xc: PushEmpty()
0xd: EventDisable(0)
0xe: PushEmpty(object)
0xf: Stack[-1] = Stack[-2]
0x10: Call2 0x25

0x11: Pop(1)
0x12: Push((int) 50)
0x13: Push((int) 40)
0x14: @ SetRTEnvelope(Stack[-2], Stack[-1])
0x15: Pop(2)
0x16: EventEnable(0)
0x17: @ Hold()
0x18: Pop(0)
0x19: GOTO 0x17

0x1a: Return(); Pop(0)

0x1b: PushEmpty(bool, bool)
0x1c: @ IsOverrideActive(Stack[-1])
0x1d: Pop(0)
0x1e: Pop(0); Push((bool) Stack[-1] == 0)
0x1f: IF (Stack[-1] == 0) GOTO 0x24; Pop(1)

0x20: PushEmpty(object)
0x21: Stack[-1] = Stack[-4]
0x22: Call2 0x6e2

0x23: Pop(1)
0x24: Return(); Pop(2)

0x25: PushEmpty(cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector, cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector)
0x26: Pop(0); Push((bool) Stack[-21] == 0)
0x27: IF (Stack[-1] == 0) GOTO 0x2d; Pop(1)

0x28: PushEmpty(string)
0x29: Stack[-1] = "fdie"
0x2a: Call2 0x80

0x2b: Pop(1)
0x2c: GOTO 0x7f

0x2d: @@ GetPosition(Stack[-10])
0x2e: Pop(0)
0x2f: @ GetPosition(Stack[-9])
0x30: Pop(0)
0x31: @ GetDirection(Stack[-8])
0x32: Pop(0)
0x33: Stack[-7] = Stack[-9] - Stack[-10]; Pop(0);
0x34: Push(CvectorIndex(Stack[-7], 0))
0x35: Push(CvectorIndex(Stack[-9], 0))
0x36: Pop(2); Push(Stack[-2] * Stack[-1]);
0x37: Push(CvectorIndex(Stack[-8], 2))
0x38: Push(CvectorIndex(Stack[-10], 2))
0x39: Pop(2); Push(Stack[-2] * Stack[-1]);
0x3a: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3b: Push((int) 0)
0x3c: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x3d: IF (Stack[-1] == 0) GOTO 0x40; Pop(1)

0x3e: Stack[-6] = "fdie"
0x3f: GOTO 0x41

0x40: Stack[-6] = "bdie"
0x41: @ RemoveRTEnvelope()
0x42: Pop(0)
0x43: @ SetDeathState()
0x44: Pop(0)
0x45: @ Stop()
0x46: Pop(0)
0x47: @ StopAsync()
0x48: Pop(0)
0x49: Stack[-5] = Stack[-21]
0x4a: Push("GetScriptProperty")
0x4b: Push((int) 2)
0x4c: Pop(2); Push(IsFuncExist(Stack[-23], Stack[-2], Stack[-1]))
0x4d: IF (Stack[-1] == 0) GOTO 0x59; Pop(1)

0x4e: Push("Owner")
0x4f: @@ HasScriptProperty(Stack[-5], Stack[-1])
0x50: Pop(1)
0x51: Push(Stack[-4])
0x52: IF (Stack[-1] == 0) GOTO 0x59; Pop(1)

0x53: Push("Owner")
0x54: @@ GetScriptProperty(Stack[-6], Stack[-1])
0x55: Pop(1)
0x56: Pop(0); Push((bool) Stack[-5] == 0)
0x57: IF (Stack[-1] == 0) GOTO 0x59; Pop(1)

0x58: Stack[-5] = Stack[-21]
0x59: Push("@GetEyesHeight")
0x5a: Push((int) 1)
0x5b: Pop(2); Push(IsFuncExist(Stack[-7], Stack[-2], Stack[-1]))
0x5c: IF (Stack[-1] == 0) GOTO 0x68; Pop(1)

0x5d: @@ GetEyesHeight(Stack[-2])
0x5e: Pop(0)
0x5f: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x60: Push(CvectorIndex(Stack[-1], 1))
0x61: Stack[-1] = Stack[-3]
0x62: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x63: Push("head")
0x64: @ LookAsync(Stack[-22], Stack[-1], Stack[-2])
0x65: Pop(1)
0x66: Stack[-3] = (bool) 1
0x67: GOTO 0x69

0x68: Stack[-3] = (bool) 0
0x69: PushEmpty(string)
0x6a: Stack[-1] = Stack[-7]
0x6b: Call2 0x62c

0x6c: Pop(1)
0x6d: Push("all")
0x6e: @ PlayAnimation(Stack[-1], Stack[-7])
0x6f: Pop(1)
0x70: @ WaitForAnimEnd()
0x71: Pop(0)
0x72: Push(Stack[-3])
0x73: IF (Stack[-1] == 0) GOTO 0x79; Pop(1)

0x74: @ StopAsync()
0x75: Pop(0)
0x76: Push("head")
0x77: @ UnlookAsync(Stack[-1])
0x78: Pop(1)
0x79: Push("all")
0x7a: @ LockAnimationEnd(Stack[-1], Stack[-7])
0x7b: Pop(1)
0x7c: @ RemoveEnvelope()
0x7d: Pop(0)
0x7e: Stack[-5] = 0
0x7f: Return(); Pop(20)

0x80: PushEmpty()
0x81: @ RemoveRTEnvelope()
0x82: Pop(0)
0x83: @ SetDeathState()
0x84: Pop(0)
0x85: @ Stop()
0x86: Pop(0)
0x87: @ StopAsync()
0x88: Pop(0)
0x89: @ StopSecondaryAnimation()
0x8a: Pop(0)
0x8b: PushEmpty(string)
0x8c: Stack[-1] = Stack[-2]
0x8d: Call2 0x62c

0x8e: Pop(1)
0x8f: Push("all")
0x90: @ PlayAnimation(Stack[-1], Stack[-2])
0x91: Pop(1)
0x92: @ WaitForAnimEnd()
0x93: Pop(0)
0x94: Push("all")
0x95: @ LockAnimationEnd(Stack[-1], Stack[-2])
0x96: Pop(1)
0x97: @ RemoveEnvelope()
0x98: Pop(0)
0x99: Return(); Pop(0)

0x9a: PushEmpty()
0x9b: Return(); Pop(0)

0x9c: PushEmpty()
0x9d: Return(); Pop(0)

0x9e: PushEmpty()
0x9f: Return(); Pop(0)

0xa0: PushEmpty()
0xa1: PushEmpty(object)
0xa2: Stack[-1] = Stack[-2]
0xa3: Call2 0x7b3

0xa4: Pop(1)
0xa5: Return(); Pop(0)

0xa6: PushEmpty(bool, bool, bool, bool)
0xa7: PushEmpty(object)
0xa8: Stack[-1] = Stack[-10]
0xa9: Call2 0x6c8

0xaa: Pop(1)
0xab: Push((int) 1)
0xac: Push((int) 5)
0xad: @ SetTimer(Stack[-2], Stack[-1])
0xae: Pop(2)
0xaf: @ CanSee(Stack[-2], Stack[-9])
0xb0: Pop(0)
0xb1: Push(Stack[-2])
0xb2: IF (Stack[-1] == 0) GOTO 0xb9; Pop(1)

0xb3: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0xb4: PushEmpty(object)
0xb5: Stack[-1] = Stack[-10]
0xb6: Call2 0x616

0xb7: Pop(1)
0xb8: GOTO 0xba

0xb9: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0xba: PushEmpty(bool, object)
0xbb: Stack[-1] = Stack[-11]
0xbc: Call2 0x4dc

0xbd: Pop(1)
0xbe: IF (Stack[-1] == 0) GOTO 0xc4; Pop(1)

0xbf: PushEmpty(object)
0xc0: Call2 0x655

0xc1: Pop(0)
0xc2: @ SendPlayerEnemy(Stack[-10], Stack[-1])
0xc3: Pop(1)
0xc4: PushEmpty(bool, object, float, float, bool, bool)
0xc5: Stack[-5] = Stack[-15]
0xc6: Stack[-4] = Stack[-14]
0xc7: Stack[-3] = Stack[-13]
0xc8: Stack[-2] = Stack[-12]
0xc9: Stack[-1] = Stack[-11]
0xca: Call2 0x10f

0xcb: Stack[-7] = Stack[-6]
0xcc: Pop(6)
0xcd: Push( Stack[2 + Tasks[-1].StackPointer] )
0xce: IF (Stack[-1] == 0) GOTO 0xd2; Pop(1)

0xcf: Push("head")
0xd0: @ UnlookAsync(Stack[-1])
0xd1: Pop(1)
0xd2: Push((int) 1)
0xd3: @ KillTimer(Stack[-1])
0xd4: Pop(1)
0xd5: Stack[-10] = Stack[-1]
0xd6: Return(); Pop(4)

0xd7: PushEmpty()
0xd8: Push((int) 1)
0xd9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xda: IF (Stack[-1] == 0) GOTO 0xe0; Pop(1)

0xdb: PushEmpty(object)
0xdc: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xdd: Call2 0x6c8

0xde: Pop(1)
0xdf: GOTO 0xe4

0xe0: PushEmpty(int)
0xe1: Stack[-1] = Stack[-2]
0xe2: Call2 0x175

0xe3: Pop(1)
0xe4: Return(); Pop(0)

0xe5: Push((int) 1)
0xe6: @ KillTimer(Stack[-1])
0xe7: Pop(1)
0xe8: Push( Stack[2 + Tasks[-1].StackPointer] )
0xe9: IF (Stack[-1] == 0) GOTO 0xee; Pop(1)

0xea: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0xeb: Push("head")
0xec: @ UnlookAsync(Stack[-1])
0xed: Pop(1)
0xee: PushEmpty()
0xef: Call2 0x18b

0xf0: Pop(0)
0xf1: Return(); Pop(0)

0xf2: PushEmpty()
0xf3: PushEmpty(bool)
0xf4: Stack[-1] = (bool) 0
0xf5: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0xf6: IF (Stack[-1] == 0) GOTO 0xfa; Pop(1)

0xf7: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0xf8: IF (Stack[-1] == 0) GOTO 0xfa; Pop(1)

0xf9: Stack[-1] = (bool) 1
0xfa: IF (Stack[-1] == 0) GOTO 0x100; Pop(1)

0xfb: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0xfc: PushEmpty(object)
0xfd: Stack[-1] = Stack[-2]
0xfe: Call2 0x616

0xff: Pop(1)
0x100: Return(); Pop(0)

0x101: PushEmpty()
0x102: PushEmpty(bool)
0x103: Stack[-1] = (bool) 0
0x104: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-2])
0x105: IF (Stack[-1] == 0) GOTO 0x109; Pop(1)

0x106: Push( Stack[2 + Tasks[-1].StackPointer] )
0x107: IF (Stack[-1] == 0) GOTO 0x109; Pop(1)

0x108: Stack[-1] = (bool) 1
0x109: IF (Stack[-1] == 0) GOTO 0x10e; Pop(1)

0x10a: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x10b: Push("head")
0x10c: @ UnlookAsync(Stack[-1])
0x10d: Pop(1)
0x10e: Return(); Pop(0)

0x10f: PushEmpty(bool, bool, object, cvector, cvector, cvector, float, object, bool, bool, object, cvector, cvector, cvector, float, object)
0x110: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x111: Stack[1 + Tasks[-1].StackPointer] = Stack[-21]
0x112: Stack[-7] = Stack[-17]
0x113: PushEmpty(bool, object)
0x114: Stack[-1] = Stack[-23]
0x115: Call2 0x19b

0x116: Pop(1)
0x117: Pop(1); Push((bool) Stack[-1] == 0)
0x118: IF (Stack[-1] == 0) GOTO 0x11b; Pop(1)

0x119: Stack[-22] = (bool) 0
0x11a: Return(); Pop(16)

0x11b: @@ GetPosition(Stack[-5])
0x11c: Pop(0)
0x11d: @ GetPosition(Stack[-4])
0x11e: Pop(0)
0x11f: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x120: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x121: PushEmpty(bool)
0x122: Stack[-1] = (bool) 0
0x123: Push((int) 0)
0x124: Pop(1); Push((bool) Stack[-21] > Stack[-1])
0x125: IF (Stack[-1] == 0) GOTO 0x12a; Pop(1)

0x126: Pop(0); Push(Stack[-20] * Stack[-20]);
0x127: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x128: IF (Stack[-1] == 0) GOTO 0x12a; Pop(1)

0x129: Stack[-1] = (bool) 1
0x12a: IF (Stack[-1] == 0) GOTO 0x12f; Pop(1)

0x12b: @ Stop()
0x12c: Pop(0)
0x12d: Stack[-22] = (bool) 0
0x12e: Return(); Pop(16)

0x12f: Pop(0); Push(Stack[-20] * Stack[-20]);
0x130: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x131: IF (Stack[-1] == 0) GOTO 0x16d; Pop(1)

0x132: @@ GetPFPosition(Stack[-5])
0x133: Pop(0)
0x134: @ FindPathTo(Stack[-1], Stack[-5])
0x135: Pop(0)
0x136: Pop(0); Push(( Stack[-1] != 0 )
0x137: IF (Stack[-1] == 0) GOTO 0x13a; Pop(1)

0x138: Stack[-6] = Stack[-1]
0x139: Stack[-1] = 0
0x13a: Pop(0); Push(( Stack[-6] != 0 )
0x13b: IF (Stack[-1] == 0) GOTO 0x15b; Pop(1)

0x13c: Push(Stack[-7])
0x13d: IF (Stack[-1] == 0) GOTO 0x144; Pop(1)

0x13e: Stack[-7] = (bool) 0
0x13f: @ RotatePath(Stack[-6], Stack[-8])
0x140: Pop(0)
0x141: Pop(0); Push((bool) Stack[-8] == 0)
0x142: IF (Stack[-1] == 0) GOTO 0x144; Pop(1)

0x143: GOTO 0x173

0x144: Push((int) 0)
0x145: Push((float)0.3)
0x146: @ SetTimer(Stack[-2], Stack[-1])
0x147: Pop(2)
0x148: PushEmpty(string)
0x149: Call2 0x1a2

0x14a: Pop(0)
0x14b: PushEmpty(string)
0x14c: Call2 0x1a4

0x14d: Pop(0)
0x14e: @ FollowPath(Stack[-8], Stack[-20], Stack[-10], Stack[-2], Stack[-1])
0x14f: Pop(2)
0x150: Pop(0); Push((bool) Stack[-8] == 0)
0x151: IF (Stack[-1] == 0) GOTO 0x159; Pop(1)

0x152: Push( Stack[0 + Tasks[-1].StackPointer] )
0x153: IF (Stack[-1] == 0) GOTO 0x157; Pop(1)

0x154: Stack[-6] = 0
0x155: GOTO 0x173

0x156: GOTO 0x158

0x157: GOTO 0x172

0x158: GOTO 0x15a

0x159: Stack[-6] = 0
0x15a: GOTO 0x16b

0x15b: Push((int) 0)
0x15c: @ KillTimer(Stack[-1])
0x15d: Pop(1)
0x15e: Push((float)0.5)
0x15f: @ Sleep(Stack[-1], Stack[-9])
0x160: Pop(1)
0x161: Pop(0); Push((bool) Stack[-8] == 0)
0x162: IF (Stack[-1] == 0) GOTO 0x167; Pop(1)

0x163: Push( Stack[0 + Tasks[-1].StackPointer] )
0x164: IF (Stack[-1] == 0) GOTO 0x167; Pop(1)

0x165: Stack[-6] = 0
0x166: GOTO 0x173

0x167: Push((int) 0)
0x168: Push((float)0.3)
0x169: @ SetTimer(Stack[-2], Stack[-1])
0x16a: Pop(2)
0x16b: Stack[-1] = 0
0x16c: GOTO 0x171

0x16d: Push((int) 0)
0x16e: @ KillTimer(Stack[-1])
0x16f: Pop(1)
0x170: GOTO 0x173

0x171: Stack[-6] = 0
0x172: GOTO 0x113

0x173: Stack[-22] = !Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x174: Return(); Pop(16)

0x175: PushEmpty()
0x176: Push((int) 0)
0x177: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x178: IF (Stack[-1] == 0) GOTO 0x17a; Pop(1)

0x179: Return(); Pop(0)

0x17a: PushEmpty(bool, object)
0x17b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x17c: Call2 0x19b

0x17d: Pop(1)
0x17e: Pop(1); Push((bool) Stack[-1] == 0)
0x17f: IF (Stack[-1] == 0) GOTO 0x181; Pop(1)

0x180: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x181: Push((int) 0)
0x182: @ KillTimer(Stack[-1])
0x183: Pop(1)
0x184: @ Stop()
0x185: Pop(0)
0x186: Return(); Pop(0)

0x187: PushEmpty()
0x188: @ RequestClearPath(Stack[-1])
0x189: Pop(0)
0x18a: Return(); Pop(0)

0x18b: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x18c: Push((int) 0)
0x18d: @ KillTimer(Stack[-1])
0x18e: Pop(1)
0x18f: @ Stop()
0x190: Pop(0)
0x191: Return(); Pop(0)

0x192: PushEmpty()
0x193: PushEmpty()
0x194: Call2 0xe5

0x195: Pop(0)
0x196: PushEmpty(object)
0x197: Stack[-1] = Stack[-2]
0x198: Call2 0x7ad

0x199: Pop(1)
0x19a: Return(); Pop(0)

0x19b: PushEmpty()
0x19c: PushEmpty(bool, object)
0x19d: Stack[-1] = Stack[-3]
0x19e: Call2 0x575

0x19f: Stack[-4] = Stack[-2]
0x1a0: Pop(2)
0x1a1: Return(); Pop(0)

0x1a2: Stack[-1] = "walk"
0x1a3: Return(); Pop(0)

0x1a4: Stack[-1] = "run"
0x1a5: Return(); Pop(0)

0x1a6: PushEmpty()
0x1a7: PushEmpty(object, bool, float)
0x1a8: Stack[-3] = Stack[-5]
0x1a9: Stack[-2] = Stack[-4]
0x1aa: Stack[-1] = (float) 180.0
0x1ab: Call2 0x220

0x1ac: Pop(3)
0x1ad: Return(); Pop(0)

0x1ae: PushEmpty()
0x1af: Stack[-3] = (float) 0.2
0x1b0: Return(); Pop(0)

0x1b1: PushEmpty()
0x1b2: Stack[-3] = (int) 0
0x1b3: Return(); Pop(0)

0x1b4: PushEmpty()
0x1b5: PushEmpty(object)
0x1b6: Stack[-1] = Stack[-2]
0x1b7: Call2 0x7b3

0x1b8: Pop(1)
0x1b9: Return(); Pop(0)

0x1ba: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector, float, float, cvector, float, int, cvector, cvector, cvector, cvector, cvector, cvector, float, float, cvector, float, int)
0x1bb: PushEmpty(bool)
0x1bc: Stack[-1] = (bool) 0
0x1bd: PushEmpty(bool, object)
0x1be: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1bf: Call2 0x575

0x1c0: Pop(1)
0x1c1: IF (Stack[-1] == 0) GOTO 0x1c8; Pop(1)

0x1c2: PushEmpty(bool, float)
0x1c3: Stack[-1] = (float) 0.5
0x1c4: Call2 0x677

0x1c5: Pop(1)
0x1c6: IF (Stack[-1] == 0) GOTO 0x1c8; Pop(1)

0x1c7: Stack[-1] = (bool) 1
0x1c8: IF (Stack[-1] == 0) GOTO 0x21e; Pop(1)

0x1c9: @ GetPosition(Stack[-11])
0x1ca: Pop(0)
0x1cb: @@ GetPosition(Stack[-10])
0x1cc: Pop(0)
0x1cd: @ GetDirection(Stack[-9])
0x1ce: Pop(0)
0x1cf: PushEmpty(cvector, cvector)
0x1d0: Stack[-1] = Stack[-13] - Stack[-12]; Pop(0);
0x1d1: Call2 0x65b

0x1d2: Stack[-10] = Stack[-2]
0x1d3: Pop(2)
0x1d4: Push("all")
0x1d5: Push("jump1")
0x1d6: @ GetAnimationOffset(Stack[-9], Stack[-2], Stack[-1])
0x1d7: Pop(2)
0x1d8: Push("all")
0x1d9: Push("jump2")
0x1da: @ GetAnimationOffset(Stack[-8], Stack[-2], Stack[-1])
0x1db: Pop(2)
0x1dc: Push(CvectorIndex(Stack[-7], 2))
0x1dd: Push(CvectorIndex(Stack[-7], 2))
0x1de: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x1df: IF (Stack[-1] == 0) GOTO 0x1e5; Pop(1)

0x1e0: Push(CvectorIndex(Stack[-6], 2))
0x1e1: Stack[-6] = -Stack[-1]; Pop(1);
0x1e2: Push(CvectorIndex(Stack[-7], 2))
0x1e3: Stack[-5] = -Stack[-1]; Pop(1);
0x1e4: GOTO 0x1e9

0x1e5: Push(CvectorIndex(Stack[-7], 2))
0x1e6: Stack[-6] = -Stack[-1]; Pop(1);
0x1e7: Push(CvectorIndex(Stack[-6], 2))
0x1e8: Stack[-5] = -Stack[-1]; Pop(1);
0x1e9: Push((float)0.17453)
0x1ea: Push((int) 6)
0x1eb: Push((int) 3)
0x1ec: Pop(1); Push(Stack[-7] * Stack[-1]);
0x1ed: @ FindLongestDir(Stack[-6], Stack[-5], Stack[-11], Stack[-3], Stack[-2], Stack[-1])
0x1ee: Pop(3)
0x1ef: Pop(0); Push((bool) Stack[-2] < Stack[-5])
0x1f0: IF (Stack[-1] == 0) GOTO 0x1f7; Pop(1)

0x1f1: Push((float)0.5236)
0x1f2: Push((int) 16)
0x1f3: Push((int) 3)
0x1f4: Pop(1); Push(Stack[-7] * Stack[-1]);
0x1f5: @ FindLongestDir(Stack[-6], Stack[-5], Stack[-11], Stack[-3], Stack[-2], Stack[-1])
0x1f6: Pop(3)
0x1f7: Pop(0); Push((bool) Stack[-2] >= Stack[-5])
0x1f8: IF (Stack[-1] == 0) GOTO 0x21e; Pop(1)

0x1f9: @ StopAsync()
0x1fa: Pop(0)
0x1fb: Pop(0); Push(( -Stack[-3])
0x1fc: @ SetDirection(Stack[-1])
0x1fd: Pop(1)
0x1fe: Stack[6 + Tasks[-1].StackPointer] = (bool)1
0x1ff: Pop(0); Push((bool) Stack[-2] >= Stack[-4])
0x200: IF (Stack[-1] == 0) GOTO 0x20c; Pop(1)

0x201: Push((int) 2)
0x202: @ irand(Stack[-2], Stack[-1])
0x203: Pop(1)
0x204: Push("all")
0x205: Push("jump")
0x206: Push((int) 1)
0x207: Pop(1); Push(Stack[-4] + Stack[-1]);
0x208: Pop(2); Push(Stack[-2] + Stack[-1]);
0x209: @ PlayAnimation(Stack[-2], Stack[-1])
0x20a: Pop(2)
0x20b: GOTO 0x219

0x20c: Push(CvectorIndex(Stack[-7], 2))
0x20d: Pop(1); Push(( -Stack[-1])
0x20e: Pop(1); Push((bool) Stack[-1] <= Stack[-3])
0x20f: IF (Stack[-1] == 0) GOTO 0x215; Pop(1)

0x210: Push("all")
0x211: Push("jump1")
0x212: @ PlayAnimation(Stack[-2], Stack[-1])
0x213: Pop(2)
0x214: GOTO 0x219

0x215: Push("all")
0x216: Push("jump2")
0x217: @ PlayAnimation(Stack[-2], Stack[-1])
0x218: Pop(2)
0x219: @ WaitForAnimEnd()
0x21a: Pop(0)
0x21b: Stack[6 + Tasks[-1].StackPointer] = (bool)0
0x21c: Stack[-23] = (bool) 0
0x21d: Return(); Pop(22)

0x21e: Stack[-23] = (bool) 1
0x21f: Return(); Pop(22)

0x220: PushEmpty(float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float, float, cvector, cvector, bool, bool, float, cvector, float, cvector, bool, float)
0x221: PushEmpty()
0x222: Call2 0x305

0x223: Pop(0)
0x224: Stack[5 + Tasks[-1].StackPointer] = (int)0
0x225: Push("@GetAttackDistance")
0x226: Push((int) 1)
0x227: Pop(2); Push(IsFuncExist(Stack[-27], Stack[-2], Stack[-1]))
0x228: IF (Stack[-1] == 0) GOTO 0x22e; Pop(1)

0x229: @@ GetAttackDistance(Stack[-11])
0x22a: Pop(0)
0x22b: Push((int) 50)
0x22c: Stack[-12] = Stack[-12] + Stack[-1]; Pop(1);
0x22d: GOTO 0x22f

0x22e: Stack[-11] = Stack[-23]
0x22f: Push((int) 150)
0x230: Pop(1); Push((bool) Stack[-12] >= Stack[-1])
0x231: IF (Stack[-1] == 0) GOTO 0x233; Pop(1)

0x232: Stack[-11] = (int) 150
0x233: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x234: Stack[0 + Tasks[-1].StackPointer] = Stack[-25]
0x235: @ IsPlayerActor(Stack[-0], Stack[-8])
0x236: Pop(0)
0x237: Push(Stack[-8])
0x238: IF (Stack[-1] == 0) GOTO 0x241; Pop(1)

0x239: Push("attack")
0x23a: @ PlayGlobalMusic(Stack[-1])
0x23b: Pop(1)
0x23c: PushEmpty(object)
0x23d: Call2 0x655

0x23e: Pop(0)
0x23f: @ SendPlayerEnemy(Stack[-26], Stack[-1])
0x240: Pop(1)
0x241: Push(Stack[-24])
0x242: IF (Stack[-1] == 0) GOTO 0x245; Pop(1)

0x243: Stack[-7] = (bool) 0
0x244: GOTO 0x246

0x245: Stack[-7] = (bool) 1
0x246: Push((float)300.0)
0x247: Stack[-7] = Stack[-1] + Stack[-12]; Pop(1);
0x248: PushEmpty(bool)
0x249: Stack[-1] = (bool) 0
0x24a: PushEmpty(bool, object)
0x24b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x24c: Call2 0x575

0x24d: Pop(1)
0x24e: IF (Stack[-1] == 0) GOTO 0x252; Pop(1)

0x24f: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x250: IF (Stack[-1] == 0) GOTO 0x252; Pop(1)

0x251: Stack[-1] = (bool) 1
0x252: IF (Stack[-1] == 0) GOTO 0x2f4; Pop(1)

0x253: PushEmpty()
0x254: Call2 0x4a2

0x255: Pop(0)
0x256: @@ GetPFPosition(Stack[-10])
0x257: Pop(0)
0x258: @ GetPFPosition(Stack[-9])
0x259: Pop(0)
0x25a: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0x25b: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x25c: Pop(0); Push(Stack[-6] * Stack[-6]);
0x25d: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0x25e: IF (Stack[-1] == 0) GOTO 0x26e; Pop(1)

0x25f: PushEmpty(bool, object, float, float, bool, bool)
0x260: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0x261: Stack[-4] = Stack[-17]
0x262: Stack[-3] = (float) 3000.0
0x263: Stack[-2] = (bool) 1
0x264: Stack[-1] = (bool) 0
0x265: Push(-6, 3); TaskCall(1)
0x266: Call2 0xa6

0x267: Pop(-6, 3); TaskReturn
0x268: Pop(5)
0x269: Pop(1); Push((bool) Stack[-1] == 0)
0x26a: IF (Stack[-1] == 0) GOTO 0x26c; Pop(1)

0x26b: GOTO 0x2f4

0x26c: Stack[-7] = (bool) 0
0x26d: GOTO 0x2f3

0x26e: Pop(0); Push(Stack[-23] * Stack[-23]);
0x26f: Pop(1); Push((bool) Stack[-5] >= Stack[-1])
0x270: IF (Stack[-1] == 0) GOTO 0x2eb; Pop(1)

0x271: @@ GetPFPosition(Stack[-3])
0x272: Pop(0)
0x273: @ CanReachByPF(Stack[-2], Stack[-3])
0x274: Pop(0)
0x275: Pop(0); Push((bool) Stack[-2] == 0)
0x276: IF (Stack[-1] == 0) GOTO 0x286; Pop(1)

0x277: PushEmpty(bool, object, float, float, bool, bool)
0x278: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0x279: Stack[-4] = Stack[-17]
0x27a: Stack[-3] = (float) 3000.0
0x27b: Stack[-2] = (bool) 1
0x27c: Stack[-1] = (bool) 0
0x27d: Push(-6, 3); TaskCall(1)
0x27e: Call2 0xa6

0x27f: Pop(-6, 3); TaskReturn
0x280: Pop(5)
0x281: Pop(1); Push((bool) Stack[-1] == 0)
0x282: IF (Stack[-1] == 0) GOTO 0x284; Pop(1)

0x283: GOTO 0x2f4

0x284: Stack[-7] = (bool) 0
0x285: GOTO 0x248

0x286: Pop(0); Push((bool) Stack[-7] == 0)
0x287: IF (Stack[-1] == 0) GOTO 0x29f; Pop(1)

0x288: PushEmpty(object)
0x289: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x28a: Call2 0x60b

0x28b: Pop(1)
0x28c: Push("all")
0x28d: Push("attack_on")
0x28e: @ PlayAnimation(Stack[-2], Stack[-1])
0x28f: Pop(2)
0x290: @ WaitForAnimEnd()
0x291: Pop(0)
0x292: PushEmpty()
0x293: Call2 0x4a2

0x294: Pop(0)
0x295: @ StopAsync()
0x296: Pop(0)
0x297: Stack[-7] = (bool) 1
0x298: PushEmpty(bool, object)
0x299: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x29a: Call2 0x575

0x29b: Pop(1)
0x29c: Pop(1); Push((bool) Stack[-1] == 0)
0x29d: IF (Stack[-1] == 0) GOTO 0x29f; Pop(1)

0x29e: GOTO 0x2f4

0x29f: @ rand(Stack[-1])
0x2a0: Pop(0)
0x2a1: PushEmpty(bool)
0x2a2: Stack[-1] = (bool) 1
0x2a3: Push((float)0.6)
0x2a4: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x2a5: IF (Stack[-1] == 0) GOTO 0x2ab; Pop(1)

0x2a6: PushEmpty(bool)
0x2a7: Call2 0x477

0x2a8: Pop(0)
0x2a9: IF (Stack[-1] == 0) GOTO 0x2ab; Pop(1)

0x2aa: Stack[-1] = (bool) 0
0x2ab: IF (Stack[-1] == 0) GOTO 0x2bc; Pop(1)

0x2ac: @ Face(Stack[-0])
0x2ad: Pop(0)
0x2ae: PushEmpty()
0x2af: Call2 0x4a9

0x2b0: Pop(0)
0x2b1: Push("all")
0x2b2: Push("attack_stay")
0x2b3: @ PlayAnimation(Stack[-2], Stack[-1])
0x2b4: Pop(2)
0x2b5: PushEmpty(bool, float)
0x2b6: Stack[-1] = Stack[-25]
0x2b7: Call2 0x3f3

0x2b8: Pop(2)
0x2b9: @ StopAsync()
0x2ba: Pop(0)
0x2bb: GOTO 0x2ea

0x2bc: @ Face(Stack[-0])
0x2bd: Pop(0)
0x2be: Push("all")
0x2bf: Push("fjump")
0x2c0: @ PlayAnimation(Stack[-2], Stack[-1])
0x2c1: Pop(2)
0x2c2: @ WaitForAnimEnd()
0x2c3: Pop(0)
0x2c4: PushEmpty()
0x2c5: Call2 0x4a2

0x2c6: Pop(0)
0x2c7: Push(CVector(0.0, 0.0, 0.0))
0x2c8: @ SetSpeed(Stack[-1])
0x2c9: Pop(1)
0x2ca: @ Stop()
0x2cb: Pop(0)
0x2cc: @ StopAsync()
0x2cd: Pop(0)
0x2ce: PushEmpty(bool)
0x2cf: Call2 0x477

0x2d0: Pop(0)
0x2d1: Pop(1); Push((bool) Stack[-1] == 0)
0x2d2: IF (Stack[-1] == 0) GOTO 0x2ea; Pop(1)

0x2d3: PushEmpty(bool, object)
0x2d4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2d5: Call2 0x575

0x2d6: Pop(1)
0x2d7: Pop(1); Push((bool) Stack[-1] == 0)
0x2d8: IF (Stack[-1] == 0) GOTO 0x2da; Pop(1)

0x2d9: GOTO 0x2f4

0x2da: @@ GetPFPosition(Stack[-10])
0x2db: Pop(0)
0x2dc: @ GetPFPosition(Stack[-9])
0x2dd: Pop(0)
0x2de: Stack[-5] = Stack[-10] - Stack[-9]; Pop(0);
0x2df: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x2e0: Pop(0); Push(Stack[-23] * Stack[-23]);
0x2e1: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x2e2: IF (Stack[-1] == 0) GOTO 0x2ea; Pop(1)

0x2e3: PushEmpty(bool, float)
0x2e4: Stack[-1] = Stack[-25]
0x2e5: Call2 0x34f

0x2e6: Pop(1)
0x2e7: Pop(1); Push((bool) Stack[-1] == 0)
0x2e8: IF (Stack[-1] == 0) GOTO 0x2ea; Pop(1)

0x2e9: GOTO 0x2f4

0x2ea: GOTO 0x2f3

0x2eb: PushEmpty(bool, float)
0x2ec: Stack[-1] = Stack[-25]
0x2ed: Call2 0x34f

0x2ee: Pop(1)
0x2ef: Pop(1); Push((bool) Stack[-1] == 0)
0x2f0: IF (Stack[-1] == 0) GOTO 0x2f2; Pop(1)

0x2f1: GOTO 0x2f4

0x2f2: Stack[-7] = (bool) 1
0x2f3: GOTO 0x248

0x2f4: @ WaitForAnimEnd()
0x2f5: Pop(0)
0x2f6: Push( Stack[3 + Tasks[-1].StackPointer] )
0x2f7: IF (Stack[-1] == 0) GOTO 0x2f9; Pop(1)

0x2f8: Return(); Pop(22)

0x2f9: Push("all")
0x2fa: Push("attack_off")
0x2fb: @ PlayAnimation(Stack[-2], Stack[-1])
0x2fc: Pop(2)
0x2fd: @ WaitForAnimEnd()
0x2fe: Pop(0)
0x2ff: Push(Stack[-8])
0x300: IF (Stack[-1] == 0) GOTO 0x304; Pop(1)

0x301: Push((float)2.0)
0x302: @ Sleep(Stack[-1])
0x303: Pop(1)
0x304: Return(); Pop(22)

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
0x326: Stack[4 + Tasks[-1].StackPointer] = -Stack[-1]; Pop(1);
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
0x334: Call2 0x1ae

0x335: Stack[-5] = Stack[-3]
0x336: Pop(3)
0x337: PushEmpty(float, object, float, int)
0x338: Stack[-3] = Stack[-7]
0x339: Stack[-2] = Stack[-6]
0x33a: PushEmpty(int, object, int)
0x33b: Stack[-2] = Stack[-10]
0x33c: Stack[-1] = Stack[-14]
0x33d: Call2 0x1b1

0x33e: Stack[-4] = Stack[-3]
0x33f: Pop(3)
0x340: Call2 0x503

0x341: Stack[-5] = Stack[-4]
0x342: Pop(4)
0x343: PushEmpty(int)
0x344: Call2 0x4a7

0x345: Pop(0)
0x346: @ ReportHit(Stack[-0], Stack[-1], Stack[-2], Stack[-3])
0x347: Pop(1)
0x348: PushEmpty(object, float)
0x349: Stack[-2] = Stack[-5]
0x34a: Stack[-1] = Stack[-3]
0x34b: Call2 0x4ae

0x34c: Pop(2)
0x34d: Return(); Pop(6)

0x34e: Stack[-3] = 0
0x34f: PushEmpty(int, bool, int, string, int, bool, int, string)
0x350: PushEmpty()
0x351: Call2 0x4a2

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
0x35c: PushEmpty()
0x35d: Call2 0x6d1

0x35e: Pop(0)
0x35f: Push("all")
0x360: Push("attack_begin")
0x361: Pop(1); Push(Stack[-1] + Stack[-6]);
0x362: @ PlayAnimation(Stack[-2], Stack[-1])
0x363: Pop(2)
0x364: @ WaitForAnimEnd()
0x365: Pop(0)
0x366: PushEmpty()
0x367: Call2 0x482

0x368: Pop(0)
0x369: PushEmpty(bool, object)
0x36a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x36b: Call2 0x575

0x36c: Pop(1)
0x36d: Pop(1); Push((bool) Stack[-1] == 0)
0x36e: IF (Stack[-1] == 0) GOTO 0x373; Pop(1)

0x36f: @ StopAsync()
0x370: Pop(0)
0x371: Stack[-10] = (bool) 0
0x372: Return(); Pop(8)

0x373: PushEmpty(float, int)
0x374: Stack[-2] = Stack[-11]
0x375: Stack[-1] = Stack[-6]
0x376: Call2 0x328

0x377: Pop(2)
0x378: Push("all")
0x379: Push("attack_middle")
0x37a: Pop(1); Push(Stack[-1] + Stack[-6]);
0x37b: @ HasAnimation(Stack[-5], Stack[-2], Stack[-1])
0x37c: Pop(2)
0x37d: Push(Stack[-3])
0x37e: IF (Stack[-1] == 0) GOTO 0x3c4; Pop(1)

0x37f: PushEmpty()
0x380: Call2 0x6d1

0x381: Pop(0)
0x382: Push("all")
0x383: Push("attack_middle")
0x384: Pop(1); Push(Stack[-1] + Stack[-6]);
0x385: @ PlayAnimation(Stack[-2], Stack[-1])
0x386: Pop(2)
0x387: @ WaitForAnimEnd()
0x388: Pop(0)
0x389: PushEmpty()
0x38a: Call2 0x4a2

0x38b: Pop(0)
0x38c: PushEmpty(bool, object)
0x38d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x38e: Call2 0x575

0x38f: Pop(1)
0x390: Pop(1); Push((bool) Stack[-1] == 0)
0x391: IF (Stack[-1] == 0) GOTO 0x396; Pop(1)

0x392: @ StopAsync()
0x393: Pop(0)
0x394: Stack[-10] = (bool) 0
0x395: Return(); Pop(8)

0x396: PushEmpty(float, int)
0x397: Stack[-2] = Stack[-11]
0x398: Stack[-1] = Stack[-6]
0x399: Call2 0x328

0x39a: Pop(2)
0x39b: Stack[-2] = (int) 1
0x39c: Push("attack_middle")
0x39d: Pop(1); Push(Stack[-1] + Stack[-5]);
0x39e: Push("_")
0x39f: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3a0: Stack[-2] = Stack[-1] + Stack[-3]; Pop(1);
0x3a1: Push("all")
0x3a2: @ HasAnimation(Stack[-4], Stack[-1], Stack[-2])
0x3a3: Pop(1)
0x3a4: Pop(0); Push((bool) Stack[-3] == 0)
0x3a5: IF (Stack[-1] == 0) GOTO 0x3a7; Pop(1)

0x3a6: GOTO 0x3c4

0x3a7: PushEmpty()
0x3a8: Call2 0x6d1

0x3a9: Pop(0)
0x3aa: Push("all")
0x3ab: @ PlayAnimation(Stack[-1], Stack[-2])
0x3ac: Pop(1)
0x3ad: @ WaitForAnimEnd()
0x3ae: Pop(0)
0x3af: PushEmpty()
0x3b0: Call2 0x4a2

0x3b1: Pop(0)
0x3b2: PushEmpty(bool, object)
0x3b3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3b4: Call2 0x575

0x3b5: Pop(1)
0x3b6: Pop(1); Push((bool) Stack[-1] == 0)
0x3b7: IF (Stack[-1] == 0) GOTO 0x3bc; Pop(1)

0x3b8: @ StopAsync()
0x3b9: Pop(0)
0x3ba: Stack[-10] = (bool) 0
0x3bb: Return(); Pop(8)

0x3bc: PushEmpty(float, int)
0x3bd: Stack[-2] = Stack[-11]
0x3be: Stack[-1] = Stack[-6]
0x3bf: Call2 0x328

0x3c0: Pop(2)
0x3c1: Push((int) 1)
0x3c2: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x3c3: GOTO 0x39c

0x3c4: Push((bool) 0)
0x3c5: @ SetAttackState(Stack[-1])
0x3c6: Pop(1)
0x3c7: Push("all")
0x3c8: Push("attack_end")
0x3c9: Pop(1); Push(Stack[-1] + Stack[-6]);
0x3ca: @ PlayAnimation(Stack[-2], Stack[-1])
0x3cb: Pop(2)
0x3cc: PushEmpty(bool)
0x3cd: Call2 0x1ba

0x3ce: Pop(0)
0x3cf: IF (Stack[-1] == 0) GOTO 0x3d6; Pop(1)

0x3d0: PushEmpty(bool, float)
0x3d1: Stack[-1] = (float) 0.75
0x3d2: Call2 0x3d8

0x3d3: Pop(2)
0x3d4: @ StopAsync()
0x3d5: Pop(0)
0x3d6: Stack[-10] = (bool) 1
0x3d7: Return(); Pop(8)

0x3d8: PushEmpty(float, bool, float, bool)
0x3d9: @ rand(Stack[-2])
0x3da: Pop(0)
0x3db: Pop(0); Push((bool) Stack[-2] < Stack[-5])
0x3dc: IF (Stack[-1] == 0) GOTO 0x3ec; Pop(1)

0x3dd: @ IsAnimationPlaying(Stack[-1])
0x3de: Pop(0)
0x3df: Pop(0); Push((bool) Stack[-1] == 0)
0x3e0: IF (Stack[-1] == 0) GOTO 0x3e2; Pop(1)

0x3e1: GOTO 0x3eb

0x3e2: PushEmpty(bool)
0x3e3: Call2 0x43a

0x3e4: Pop(0)
0x3e5: IF (Stack[-1] == 0) GOTO 0x3e8; Pop(1)

0x3e6: Stack[-6] = (bool) 1
0x3e7: Return(); Pop(4)

0x3e8: @ sync()
0x3e9: Pop(0)
0x3ea: GOTO 0x3dd

0x3eb: GOTO 0x3f1

0x3ec: @ WaitForAnimEnd()
0x3ed: Pop(0)
0x3ee: PushEmpty()
0x3ef: Call2 0x4a2

0x3f0: Pop(0)
0x3f1: Stack[-6] = (bool) 0
0x3f2: Return(); Pop(4)

0x3f3: PushEmpty(bool, cvector, cvector, cvector, float, bool, cvector, cvector, cvector, float)
0x3f4: @ IsAnimationPlaying(Stack[-5])
0x3f5: Pop(0)
0x3f6: Pop(0); Push((bool) Stack[-5] == 0)
0x3f7: IF (Stack[-1] == 0) GOTO 0x3f9; Pop(1)

0x3f8: GOTO 0x419

0x3f9: PushEmpty(bool)
0x3fa: Call2 0x43a

0x3fb: Pop(0)
0x3fc: IF (Stack[-1] == 0) GOTO 0x3ff; Pop(1)

0x3fd: Stack[-12] = (bool) 1
0x3fe: Return(); Pop(10)

0x3ff: PushEmpty(bool, object)
0x400: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x401: Call2 0x575

0x402: Pop(1)
0x403: Pop(1); Push((bool) Stack[-1] == 0)
0x404: IF (Stack[-1] == 0) GOTO 0x407; Pop(1)

0x405: Stack[-12] = (bool) 0
0x406: Return(); Pop(10)

0x407: @@ GetPFPosition(Stack[-4])
0x408: Pop(0)
0x409: @ GetPFPosition(Stack[-3])
0x40a: Pop(0)
0x40b: Stack[-2] = Stack[-4] - Stack[-3]; Pop(0);
0x40c: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x40d: Pop(0); Push(Stack[-11] * Stack[-11]);
0x40e: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x40f: IF (Stack[-1] == 0) GOTO 0x416; Pop(1)

0x410: PushEmpty(bool, float)
0x411: Stack[-1] = Stack[-13]
0x412: Call2 0x34f

0x413: Pop(2)
0x414: Stack[-12] = (bool) 1
0x415: Return(); Pop(10)

0x416: @ sync()
0x417: Pop(0)
0x418: GOTO 0x3f4

0x419: PushEmpty()
0x41a: Call2 0x4a2

0x41b: Pop(0)
0x41c: Stack[-12] = (bool) 0
0x41d: Return(); Pop(10)

0x41e: PushEmpty(cvector, cvector, cvector, float, float, cvector, cvector, cvector, float, float)
0x41f: PushEmpty(bool, object)
0x420: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x421: Call2 0x575

0x422: Pop(1)
0x423: Pop(1); Push((bool) Stack[-1] == 0)
0x424: IF (Stack[-1] == 0) GOTO 0x427; Pop(1)

0x425: Stack[-11] = (bool) 0
0x426: Return(); Pop(10)

0x427: PushEmpty(bool)
0x428: Call2 0x477

0x429: Pop(0)
0x42a: IF (Stack[-1] == 0) GOTO 0x438; Pop(1)

0x42b: @@ GetPFPosition(Stack[-5])
0x42c: Pop(0)
0x42d: @ GetPFPosition(Stack[-4])
0x42e: Pop(0)
0x42f: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x430: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x431: @@ GetAttackDistance(Stack[-1])
0x432: Pop(0)
0x433: Push((int) 50)
0x434: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x435: Pop(0); Push(Stack[-1] * Stack[-1]);
0x436: Stack[-12] = Stack[-3] <= Stack[-1]; Pop(1);
0x437: Return(); Pop(10)

0x438: Stack[-11] = (bool) 0
0x439: Return(); Pop(10)

0x43a: PushEmpty(bool)
0x43b: Stack[-1] = (bool) 0
0x43c: PushEmpty(bool)
0x43d: Call2 0x41e

0x43e: Pop(0)
0x43f: IF (Stack[-1] == 0) GOTO 0x445; Pop(1)

0x440: PushEmpty(bool)
0x441: Call2 0x44a

0x442: Pop(0)
0x443: IF (Stack[-1] == 0) GOTO 0x445; Pop(1)

0x444: Stack[-1] = (bool) 1
0x445: IF (Stack[-1] == 0) GOTO 0x448; Pop(1)

0x446: Stack[-1] = (bool) 1
0x447: Return(); Pop(0)

0x448: Stack[-1] = (bool) 0
0x449: Return(); Pop(0)

0x44a: PushEmpty(object, bool, float, cvector, cvector, object, bool, float, cvector, cvector)
0x44b: @ GetScene(Stack[-5])
0x44c: Pop(0)
0x44d: Stack[-4] = (bool) 0
0x44e: PushEmpty(cvector, object)
0x44f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x450: Call2 0x4d5

0x451: Pop(1)
0x452: Pop(1); Push(( -Stack[-1])
0x453: @ FindDirLength(Stack[-4], Stack[-1], Stack[-4])
0x454: Pop(1)
0x455: Pop(0); Push((bool) Stack[-3] < Stack[4 + Tasks[-1].StackPointer])
0x456: IF (Stack[-1] == 0) GOTO 0x458; Pop(1)

0x457: GOTO 0x474

0x458: @ Face(Stack[-0])
0x459: Pop(0)
0x45a: Push("all")
0x45b: Push("bjump")
0x45c: @ PlayAnimation(Stack[-2], Stack[-1])
0x45d: Pop(2)
0x45e: @@ GetPFPosition(Stack[-2])
0x45f: Pop(0)
0x460: @ GetPFPosition(Stack[-1])
0x461: Pop(0)
0x462: @ WaitForAnimEnd()
0x463: Pop(0)
0x464: PushEmpty()
0x465: Call2 0x4a2

0x466: Pop(0)
0x467: @ StopAsync()
0x468: Pop(0)
0x469: Push(CVector(0.0, 0.0, 0.0))
0x46a: @ SetSpeed(Stack[-1])
0x46b: Pop(1)
0x46c: Stack[-4] = (bool) 1
0x46d: PushEmpty(bool)
0x46e: Call2 0x41e

0x46f: Pop(0)
0x470: Pop(1); Push((bool) Stack[-1] == 0)
0x471: IF (Stack[-1] == 0) GOTO 0x473; Pop(1)

0x472: GOTO 0x474

0x473: GOTO 0x44e

0x474: Stack[-11] = Stack[-4]
0x475: Return(); Pop(10)

0x476: Stack[-5] = 0
0x477: PushEmpty(bool, bool)
0x478: Push("IsAttacking")
0x479: Push((int) 1)
0x47a: Pop(2); Push(IsFuncExist(Stack[0 + Tasks[-1].StackPointer], Stack[-2], Stack[-1]))
0x47b: IF (Stack[-1] == 0) GOTO 0x480; Pop(1)

0x47c: @@ IsAttacking(Stack[-1])
0x47d: Pop(0)
0x47e: Stack[-3] = Stack[-1]
0x47f: Return(); Pop(2)

0x480: Stack[-3] = (bool) 0
0x481: Return(); Pop(2)

0x482: PushEmpty(float, int, float, int)
0x483: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x484: IF (Stack[-1] == 0) GOTO 0x486; Pop(1)

0x485: Return(); Pop(4)

0x486: Push( Stack[5 + Tasks[-1].StackPointer] )
0x487: IF (Stack[-1] == 0) GOTO 0x48e; Pop(1)

0x488: Push((int) -1)
0x489: Stack[5 + Tasks[-1].StackPointer] = Stack[5 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x48a: Push((int) 0)
0x48b: Pop(1); Push((bool) Stack[5 + Tasks[-1].StackPointer] > Stack[-1])
0x48c: IF (Stack[-1] == 0) GOTO 0x48e; Pop(1)

0x48d: Return(); Pop(4)

0x48e: @ rand(Stack[-2])
0x48f: Pop(0)
0x490: PushEmpty(float)
0x491: Call2 0x4b2

0x492: Pop(0)
0x493: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x494: IF (Stack[-1] == 0) GOTO 0x4a1; Pop(1)

0x495: @ irand(Stack[-1], Stack[-2])
0x496: Pop(0)
0x497: Push((int) 1)
0x498: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x499: Push("attack")
0x49a: Pop(1); Push(Stack[-1] + Stack[-2]);
0x49b: @ Speak(Stack[-1])
0x49c: Pop(1)
0x49d: PushEmpty(int)
0x49e: Call2 0x4b0

0x49f: Stack[5 + Tasks[-1].StackPointer] = Stack[-1]
0x4a0: Pop(1)
0x4a1: Return(); Pop(4)

0x4a2: PushEmpty(object)
0x4a3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4a4: Call2 0x6c8

0x4a5: Pop(1)
0x4a6: Return(); Pop(0)

0x4a7: Stack[-1] = (int) 0
0x4a8: Return(); Pop(0)

0x4a9: PushEmpty(string)
0x4aa: Stack[-1] = "attack_stay"
0x4ab: Call2 0x62c

0x4ac: Pop(1)
0x4ad: Return(); Pop(0)

0x4ae: PushEmpty()
0x4af: Return(); Pop(0)

0x4b0: Stack[-1] = (int) 1
0x4b1: Return(); Pop(0)

0x4b2: Stack[-1] = (float) 0.5
0x4b3: Return(); Pop(0)

0x4b4: @ Hold()
0x4b5: Pop(0)
0x4b6: GOTO 0x4b4

0x4b7: Return(); Pop(0)

0x4b8: PushEmpty(object, object)
0x4b9: Push("player")
0x4ba: @ FindActor(Stack[-2], Stack[-1])
0x4bb: Pop(1)
0x4bc: Push(Stack[-1])
0x4bd: IF (Stack[-1] == 0) GOTO 0x4c5; Pop(1)

0x4be: PushEmpty(object, bool)
0x4bf: Stack[-2] = Stack[-3]
0x4c0: Stack[-1] = (bool) 0
0x4c1: Push(-2, 7); TaskCall(2)
0x4c2: Call2 0x1a6

0x4c3: Pop(-2, 7); TaskReturn
0x4c4: Pop(2)
0x4c5: Return(); Pop(2)

0x4c6: Stack[-1] = 0
0x4c7: PushEmpty()
0x4c8: Push((int) 2)
0x4c9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4ca: IF (Stack[-1] == 0) GOTO 0x4ce; Pop(1)

0x4cb: Stack[-2] = "fire"
0x4cc: Return(); Pop(0)

0x4cd: GOTO 0x4d3

0x4ce: Push((int) 1)
0x4cf: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4d0: IF (Stack[-1] == 0) GOTO 0x4d3; Pop(1)

0x4d1: Stack[-2] = "bullet"
0x4d2: Return(); Pop(0)

0x4d3: Stack[-2] = "phys"
0x4d4: Return(); Pop(0)

0x4d5: PushEmpty(cvector, cvector, cvector, cvector)
0x4d6: @ GetPosition(Stack[-2])
0x4d7: Pop(0)
0x4d8: @@ GetPosition(Stack[-1])
0x4d9: Pop(0)
0x4da: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x4db: Return(); Pop(4)

0x4dc: PushEmpty(bool, bool)
0x4dd: @ IsPlayerActor(Stack[-3], Stack[-1])
0x4de: Pop(0)
0x4df: Stack[-4] = Stack[-1]
0x4e0: Return(); Pop(2)

0x4e1: PushEmpty(bool, bool)
0x4e2: Push("HasProperty")
0x4e3: Push((int) 2)
0x4e4: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x4e5: Pop(1); Push((bool) Stack[-1] == 0)
0x4e6: IF (Stack[-1] == 0) GOTO 0x4e9; Pop(1)

0x4e7: Stack[-5] = (bool) 0
0x4e8: Return(); Pop(2)

0x4e9: @@ HasProperty(Stack[-3], Stack[-1])
0x4ea: Pop(0)
0x4eb: Stack[-5] = Stack[-1]
0x4ec: Return(); Pop(2)

0x4ed: PushEmpty(float, float)
0x4ee: PushEmpty(bool, object, string)
0x4ef: Stack[-2] = Stack[-10]
0x4f0: Stack[-1] = Stack[-9]
0x4f1: Call2 0x4e1

0x4f2: Pop(2)
0x4f3: Pop(1); Push((bool) Stack[-1] == 0)
0x4f4: IF (Stack[-1] == 0) GOTO 0x4f7; Pop(1)

0x4f5: Stack[-8] = (bool) 0
0x4f6: Return(); Pop(2)

0x4f7: @@ GetProperty(Stack[-6], Stack[-1])
0x4f8: Pop(0)
0x4f9: PushEmpty(float, float, float, float)
0x4fa: Stack[-3] = Stack[-5] + Stack[-9]; Pop(0);
0x4fb: Stack[-2] = Stack[-8]
0x4fc: Stack[-1] = Stack[-7]
0x4fd: Call2 0x66c

0x4fe: Pop(3)
0x4ff: @@ SetProperty(Stack[-7], Stack[-1])
0x500: Pop(1)
0x501: Stack[-8] = (bool) 1
0x502: Return(); Pop(2)

0x503: PushEmpty(int, string, int, float, float, float, int, string, int, float, float, float)
0x504: PushEmpty(bool, object, string)
0x505: Stack[-2] = Stack[-18]
0x506: Stack[-1] = "health"
0x507: Call2 0x4e1

0x508: Pop(2)
0x509: Pop(1); Push((bool) Stack[-1] == 0)
0x50a: IF (Stack[-1] == 0) GOTO 0x50d; Pop(1)

0x50b: Stack[-16] = (float) 0.0
0x50c: Return(); Pop(12)

0x50d: PushEmpty(bool, object, string)
0x50e: Stack[-2] = Stack[-18]
0x50f: Stack[-1] = "armor"
0x510: Call2 0x4e1

0x511: Pop(2)
0x512: Pop(1); Push((bool) Stack[-1] == 0)
0x513: IF (Stack[-1] == 0) GOTO 0x516; Pop(1)

0x514: Stack[-6] = (int) 0
0x515: GOTO 0x519

0x516: Push("armor")
0x517: @@ GetProperty(Stack[-1], Stack[-7])
0x518: Pop(1)
0x519: Push("armor_")
0x51a: PushEmpty(string, int)
0x51b: Stack[-1] = Stack[-16]
0x51c: Call2 0x4c7

0x51d: Pop(1)
0x51e: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x51f: PushEmpty(bool, object, string)
0x520: Stack[-2] = Stack[-18]
0x521: Stack[-1] = Stack[-8]
0x522: Call2 0x4e1

0x523: Pop(2)
0x524: Pop(1); Push((bool) Stack[-1] == 0)
0x525: IF (Stack[-1] == 0) GOTO 0x528; Pop(1)

0x526: Stack[-4] = (int) 0
0x527: GOTO 0x52a

0x528: @@ GetProperty(Stack[-5], Stack[-4])
0x529: Pop(0)
0x52a: PushEmpty(float, float, float)
0x52b: Pop(0); Push(Stack[-9] + Stack[-7]);
0x52c: Push((float)100.0)
0x52d: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0x52e: Stack[-1] = (int) 1
0x52f: Call2 0x665

0x530: Stack[-6] = Stack[-3]
0x531: Pop(3)
0x532: Push("health")
0x533: @@ GetProperty(Stack[-1], Stack[-3])
0x534: Pop(1)
0x535: Push((int) 1)
0x536: Pop(1); Push(Stack[-1] - Stack[-4]);
0x537: Stack[-2] = Stack[-15] * Stack[-1]; Pop(1);
0x538: Push("health")
0x539: PushEmpty(float, float, float, float)
0x53a: Stack[-3] = Stack[-7] - Stack[-6]; Pop(0);
0x53b: Stack[-2] = (int) 0
0x53c: Stack[-1] = (int) 1
0x53d: Call2 0x66c

0x53e: Pop(3)
0x53f: @@ SetProperty(Stack[-2], Stack[-1])
0x540: Pop(2)
0x541: PushEmpty(bool, object)
0x542: Stack[-1] = Stack[-17]
0x543: Call2 0x4dc

0x544: Pop(1)
0x545: IF (Stack[-1] == 0) GOTO 0x54a; Pop(1)

0x546: PushEmpty(float)
0x547: Stack[-1] = -Stack[-2]; Pop(0);
0x548: Call2 0x6a4

0x549: Pop(1)
0x54a: Stack[-16] = Stack[-1]
0x54b: Return(); Pop(12)

0x54c: PushEmpty(bool, bool)
0x54d: @@ IsDead(Stack[-1])
0x54e: Pop(0)
0x54f: Stack[-4] = Stack[-1]
0x550: Return(); Pop(2)

0x551: PushEmpty(object, object, object, object)
0x552: Pop(0); Push((bool) Stack[-5] == 0)
0x553: IF (Stack[-1] == 0) GOTO 0x556; Pop(1)

0x554: Stack[-6] = (bool) 0
0x555: Return(); Pop(4)

0x556: PushEmpty(bool)
0x557: Stack[-1] = (bool) 0
0x558: Push("IsDead")
0x559: Push((int) 1)
0x55a: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x55b: IF (Stack[-1] == 0) GOTO 0x562; Pop(1)

0x55c: PushEmpty(bool, object)
0x55d: Stack[-1] = Stack[-8]
0x55e: Call2 0x54c

0x55f: Pop(1)
0x560: IF (Stack[-1] == 0) GOTO 0x562; Pop(1)

0x561: Stack[-1] = (bool) 1
0x562: IF (Stack[-1] == 0) GOTO 0x565; Pop(1)

0x563: Stack[-6] = (bool) 0
0x564: Return(); Pop(4)

0x565: @ GetScene(Stack[-2])
0x566: Pop(0)
0x567: Pop(0); Push((bool) Stack[-2] == 0)
0x568: IF (Stack[-1] == 0) GOTO 0x56b; Pop(1)

0x569: Stack[-6] = (bool) 0
0x56a: Return(); Pop(4)

0x56b: @@ GetScene(Stack[-1])
0x56c: Pop(0)
0x56d: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x56e: IF (Stack[-1] == 0) GOTO 0x571; Pop(1)

0x56f: Stack[-6] = (bool) 0
0x570: Return(); Pop(4)

0x571: Stack[-6] = (bool) 1
0x572: Return(); Pop(4)

0x573: Stack[-1] = 0
0x574: Stack[-2] = 0
0x575: PushEmpty(int, int)
0x576: PushEmpty(bool, object)
0x577: Stack[-1] = Stack[-5]
0x578: Call2 0x551

0x579: Pop(1)
0x57a: Pop(1); Push((bool) Stack[-1] == 0)
0x57b: IF (Stack[-1] == 0) GOTO 0x57e; Pop(1)

0x57c: Stack[-4] = (bool) 0
0x57d: Return(); Pop(2)

0x57e: PushEmpty(bool, object, string)
0x57f: Stack[-2] = Stack[-6]
0x580: Stack[-1] = "noaccess"
0x581: Call2 0x4e1

0x582: Pop(2)
0x583: Pop(1); Push((bool) Stack[-1] == 0)
0x584: IF (Stack[-1] == 0) GOTO 0x587; Pop(1)

0x585: Stack[-4] = (bool) 1
0x586: Return(); Pop(2)

0x587: Push("noaccess")
0x588: @@ GetProperty(Stack[-1], Stack[-2])
0x589: Pop(1)
0x58a: Push((int) 0)
0x58b: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x58c: Return(); Pop(2)

0x58d: PushEmpty(bool, int, cvector, cvector, cvector, cvector, string, bool, int, cvector, cvector, cvector, cvector, string)
0x58e: Pop(0); Push((bool) Stack[-15] == 0)
0x58f: IF (Stack[-1] == 0) GOTO 0x591; Pop(1)

0x590: Return(); Pop(14)

0x591: @ IsDead(Stack[-7])
0x592: Pop(0)
0x593: Push(Stack[-7])
0x594: IF (Stack[-1] == 0) GOTO 0x596; Pop(1)

0x595: Return(); Pop(14)

0x596: @ GetSecondaryAnimationType(Stack[-6])
0x597: Pop(0)
0x598: Push((int) 0)
0x599: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x59a: IF (Stack[-1] == 0) GOTO 0x59c; Pop(1)

0x59b: Return(); Pop(14)

0x59c: @@ GetPosition(Stack[-5])
0x59d: Pop(0)
0x59e: @ GetPosition(Stack[-4])
0x59f: Pop(0)
0x5a0: @ GetDirection(Stack[-3])
0x5a1: Pop(0)
0x5a2: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0x5a3: Push(CvectorIndex(Stack[-2], 0))
0x5a4: Push(CvectorIndex(Stack[-4], 0))
0x5a5: Pop(2); Push(Stack[-2] * Stack[-1]);
0x5a6: Push(CvectorIndex(Stack[-3], 2))
0x5a7: Push(CvectorIndex(Stack[-5], 2))
0x5a8: Pop(2); Push(Stack[-2] * Stack[-1]);
0x5a9: Pop(2); Push(Stack[-2] + Stack[-1]);
0x5aa: Push((int) 0)
0x5ab: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x5ac: IF (Stack[-1] == 0) GOTO 0x5af; Pop(1)

0x5ad: Stack[-1] = "fhit"
0x5ae: GOTO 0x5b0

0x5af: Stack[-1] = "bhit"
0x5b0: Push("hit_react")
0x5b1: Push("1")
0x5b2: Pop(1); Push(Stack[-3] + Stack[-1]);
0x5b3: Push("2")
0x5b4: Pop(1); Push(Stack[-4] + Stack[-1]);
0x5b5: Push((int) -10)
0x5b6: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x5b7: Pop(4)
0x5b8: Return(); Pop(14)

0x5b9: PushEmpty(cvector, object, int, bool, cvector, cvector, int, int, cvector, cvector, object, int, bool, cvector, cvector, int, int, cvector)
0x5ba: PushEmpty(bool)
0x5bb: Stack[-1] = (bool) 0
0x5bc: PushEmpty(bool)
0x5bd: Stack[-1] = (bool) 0
0x5be: Push(Stack[-23])
0x5bf: IF (Stack[-1] == 0) GOTO 0x5c4; Pop(1)

0x5c0: Push((int) 4)
0x5c1: Pop(1); Push((bool) Stack[-23] != Stack[-1])
0x5c2: IF (Stack[-1] == 0) GOTO 0x5c4; Pop(1)

0x5c3: Stack[-1] = (bool) 1
0x5c4: IF (Stack[-1] == 0) GOTO 0x5c9; Pop(1)

0x5c5: Push((int) 5)
0x5c6: Pop(1); Push((bool) Stack[-22] != Stack[-1])
0x5c7: IF (Stack[-1] == 0) GOTO 0x5c9; Pop(1)

0x5c8: Stack[-1] = (bool) 1
0x5c9: IF (Stack[-1] == 0) GOTO 0x5f8; Pop(1)

0x5ca: PushEmpty(cvector, cvector)
0x5cb: PushEmpty(cvector, object)
0x5cc: Stack[-1] = Stack[-25]
0x5cd: Call2 0x4d5

0x5ce: Stack[-3] = Stack[-2]
0x5cf: Pop(2)
0x5d0: Call2 0x65b

0x5d1: Stack[-11] = Stack[-2]
0x5d2: Pop(2)
0x5d3: @ CreateVectorVector(Stack[-8])
0x5d4: Pop(0)
0x5d5: Stack[-7] = (int) 1
0x5d6: Push("hit")
0x5d7: Pop(1); Push(Stack[-1] + Stack[-8]);
0x5d8: @ GetGeometryLocator(Stack[-1], Stack[-7], Stack[-6], Stack[-5])
0x5d9: Pop(1)
0x5da: Pop(0); Push((bool) Stack[-6] == 0)
0x5db: IF (Stack[-1] == 0) GOTO 0x5dd; Pop(1)

0x5dc: GOTO 0x5e6

0x5dd: Pop(0); Push(Stack[-4] | Stack[-9]);
0x5de: Push((float)0.70711)
0x5df: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x5e0: IF (Stack[-1] == 0) GOTO 0x5e3; Pop(1)

0x5e1: @@ add(Stack[-5])
0x5e2: Pop(0)
0x5e3: Push((int) 1)
0x5e4: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x5e5: GOTO 0x5d6

0x5e6: @@ size(Stack[-3])
0x5e7: Pop(0)
0x5e8: Push(Stack[-3])
0x5e9: IF (Stack[-1] == 0) GOTO 0x5f7; Pop(1)

0x5ea: @ irand(Stack[-2], Stack[-3])
0x5eb: Pop(0)
0x5ec: @@ get(Stack[-1], Stack[-2])
0x5ed: Pop(0)
0x5ee: PushEmpty(object, int, float, cvector, cvector)
0x5ef: Stack[-5] = Stack[-26]
0x5f0: Stack[-4] = Stack[-25]
0x5f1: Stack[-3] = Stack[-24]
0x5f2: Stack[-2] = Stack[-6]
0x5f3: Stack[-1] = -Stack[-14]; Pop(0);
0x5f4: Call2 0x5fd

0x5f5: Pop(5)
0x5f6: Return(); Pop(18)

0x5f7: Stack[-8] = 0
0x5f8: PushEmpty(object)
0x5f9: Stack[-1] = Stack[-22]
0x5fa: Call2 0x58d

0x5fb: Pop(1)
0x5fc: Return(); Pop(18)

0x5fd: PushEmpty(object, object, object, object)
0x5fe: @ GetScene(Stack[-2])
0x5ff: Pop(0)
0x600: Push("scripted")
0x601: Push("blood_dir.xml")
0x602: @ AddActorByType(Stack[-3], Stack[-2], Stack[-4], Stack[-8], Stack[-7], Stack[-1])
0x603: Pop(2)
0x604: PushEmpty(object)
0x605: Stack[-1] = Stack[-10]
0x606: Call2 0x58d

0x607: Pop(1)
0x608: Return(); Pop(4)

0x609: Stack[-1] = 0
0x60a: Stack[-2] = 0
0x60b: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x60c: @@ GetPosition(Stack[-3])
0x60d: Pop(0)
0x60e: @ GetPosition(Stack[-2])
0x60f: Pop(0)
0x610: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0x611: Push(CvectorIndex(Stack[-1], 0))
0x612: Push(CvectorIndex(Stack[-2], 2))
0x613: @ RotateAsync(Stack[-2], Stack[-1])
0x614: Pop(2)
0x615: Return(); Pop(6)

0x616: PushEmpty(float, cvector, float, cvector)
0x617: @@ GetEyesHeight(Stack[-2])
0x618: Pop(0)
0x619: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x61a: Push(CvectorIndex(Stack[-1], 1))
0x61b: Stack[-1] = Stack[-3]
0x61c: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x61d: Push("head")
0x61e: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x61f: Pop(1)
0x620: Return(); Pop(4)

0x621: PushEmpty(bool, bool)
0x622: PushEmpty(bool, int, int)
0x623: Stack[-2] = Stack[-7]
0x624: Stack[-1] = Stack[-6]
0x625: Call2 0x67c

0x626: Pop(2)
0x627: IF (Stack[-1] == 0) GOTO 0x62b; Pop(1)

0x628: Push((int) 0)
0x629: @ AddItem(Stack[-2], Stack[-6], Stack[-1])
0x62a: Pop(1)
0x62b: Return(); Pop(2)

0x62c: PushEmpty(bool, int, bool, int, bool, float, cvector, cvector, bool, int, bool, int, bool, float, cvector, cvector)
0x62d: @ IsExisting3DSound(Stack[-8], Stack[-17])
0x62e: Pop(0)
0x62f: Pop(0); Push((bool) Stack[-8] == 0)
0x630: IF (Stack[-1] == 0) GOTO 0x645; Pop(1)

0x631: Stack[-7] = (int) 0
0x632: Push((int) 1)
0x633: Pop(1); Push(Stack[-8] + Stack[-1]);
0x634: Pop(1); Push(Stack[-18] + Stack[-1]);
0x635: @ IsExisting3DSound(Stack[-7], Stack[-1])
0x636: Pop(1)
0x637: Pop(0); Push((bool) Stack[-6] == 0)
0x638: IF (Stack[-1] == 0) GOTO 0x63a; Pop(1)

0x639: GOTO 0x63d

0x63a: Push((int) 1)
0x63b: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x63c: GOTO 0x632

0x63d: Pop(0); Push((bool) Stack[-7] == 0)
0x63e: IF (Stack[-1] == 0) GOTO 0x640; Pop(1)

0x63f: Return(); Pop(16)

0x640: @ irand(Stack[-5], Stack[-7])
0x641: Pop(0)
0x642: Push((int) 1)
0x643: Pop(1); Push(Stack[-6] + Stack[-1]);
0x644: Stack[-18] = Stack[-18] + Stack[-1]; Pop(1);
0x645: @ Is3DSoundLoaded(Stack[-4], Stack[-17])
0x646: Pop(0)
0x647: Push(Stack[-4])
0x648: IF (Stack[-1] == 0) GOTO 0x654; Pop(1)

0x649: @ GetEyesHeight(Stack[-3])
0x64a: Pop(0)
0x64b: @ GetDirection(Stack[-2])
0x64c: Pop(0)
0x64d: Push((int) 50)
0x64e: Stack[-2] = Stack[-3] * Stack[-1]; Pop(1);
0x64f: Push(CvectorIndex(Stack[-1], 1))
0x650: Stack[-1] = Stack[-1] + Stack[-4]; Pop(0);
0x651: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x652: @ PlayGlobalSound(Stack[-17], Stack[-1])
0x653: Pop(0)
0x654: Return(); Pop(16)

0x655: PushEmpty(object, object)
0x656: @ self(Stack[-1])
0x657: Pop(0)
0x658: Stack[-3] = Stack[-1]
0x659: Return(); Pop(2)

0x65a: Stack[-1] = 0
0x65b: PushEmpty(float, float)
0x65c: Pop(0); Push(Stack[-3] | Stack[-3]);
0x65d: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x65e: Push((float)0.0)
0x65f: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x660: IF (Stack[-1] == 0) GOTO 0x663; Pop(1)

0x661: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x662: Return(); Pop(2)

0x663: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x664: Return(); Pop(2)

0x665: PushEmpty()
0x666: Pop(0); Push((bool) Stack[-2] < Stack[-1])
0x667: IF (Stack[-1] == 0) GOTO 0x66a; Pop(1)

0x668: Stack[-3] = Stack[-2]
0x669: GOTO 0x66b

0x66a: Stack[-3] = Stack[-1]
0x66b: Return(); Pop(0)

0x66c: PushEmpty()
0x66d: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x66e: IF (Stack[-1] == 0) GOTO 0x671; Pop(1)

0x66f: Stack[-4] = Stack[-2]
0x670: Return(); Pop(0)

0x671: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x672: IF (Stack[-1] == 0) GOTO 0x675; Pop(1)

0x673: Stack[-4] = Stack[-1]
0x674: Return(); Pop(0)

0x675: Stack[-4] = Stack[-3]
0x676: Return(); Pop(0)

0x677: PushEmpty(float, float)
0x678: @ rand(Stack[-1])
0x679: Pop(0)
0x67a: Stack[-4] = Stack[-1] < Stack[-3]; Pop(0);
0x67b: Return(); Pop(2)

0x67c: PushEmpty(int, int)
0x67d: @ irand(Stack[-1], Stack[-3])
0x67e: Pop(0)
0x67f: Stack[-5] = Stack[-1] < Stack[-4]; Pop(0);
0x680: Return(); Pop(2)

0x681: PushEmpty()
0x682: Pop(0); Push((bool) Stack[-2] == 0)
0x683: IF (Stack[-1] == 0) GOTO 0x686; Pop(1)

0x684: Stack[-3] = (bool) 0
0x685: Return(); Pop(0)

0x686: Push((int) 0)
0x687: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x688: IF (Stack[-1] == 0) GOTO 0x68d; Pop(1)

0x689: Push((int) 8)
0x68a: @ SendWorldWndMessage(Stack[-1])
0x68b: Pop(1)
0x68c: GOTO 0x696

0x68d: Push((int) 0)
0x68e: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x68f: IF (Stack[-1] == 0) GOTO 0x694; Pop(1)

0x690: Push((int) 9)
0x691: @ SendWorldWndMessage(Stack[-1])
0x692: Pop(1)
0x693: GOTO 0x696

0x694: Stack[-3] = (bool) 0
0x695: Return(); Pop(0)

0x696: PushEmpty(float)
0x697: Stack[-1] = Stack[-2]
0x698: Call2 0x6b5

0x699: Pop(1)
0x69a: PushEmpty(bool, object, string, float, float, float)
0x69b: Stack[-5] = Stack[-8]
0x69c: Stack[-4] = "reputation"
0x69d: Stack[-3] = Stack[-7]
0x69e: Stack[-2] = (int) 0
0x69f: Stack[-1] = (int) 1
0x6a0: Call2 0x4ed

0x6a1: Pop(6)
0x6a2: Stack[-3] = (bool) 1
0x6a3: Return(); Pop(0)

0x6a4: PushEmpty(object, object)
0x6a5: @ CreateFloatVector(Stack[-1])
0x6a6: Pop(0)
0x6a7: @@ add(Stack[-3])
0x6a8: Pop(0)
0x6a9: Push((int) 0)
0x6aa: Pop(1); Push((bool) Stack[-4] < Stack[-1])
0x6ab: IF (Stack[-1] == 0) GOTO 0x6b0; Pop(1)

0x6ac: Push((float)0.7)
0x6ad: Push((int) 500)
0x6ae: @ RumblePlay(Stack[-2], Stack[-1])
0x6af: Pop(2)
0x6b0: Push((int) 15)
0x6b1: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x6b2: Pop(1)
0x6b3: Return(); Pop(2)

0x6b4: Stack[-1] = 0
0x6b5: PushEmpty(object, object)
0x6b6: @ CreateFloatVector(Stack[-1])
0x6b7: Pop(0)
0x6b8: @@ add(Stack[-3])
0x6b9: Pop(0)
0x6ba: Push((int) 16)
0x6bb: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x6bc: Pop(1)
0x6bd: Return(); Pop(2)

0x6be: Stack[-1] = 0
0x6bf: PushEmpty(float, float)
0x6c0: @ GetGameTime(Stack[-1])
0x6c1: Pop(0)
0x6c2: Push((int) 1)
0x6c3: PushEmpty(int)
0x6c4: Push((int) 24)
0x6c5: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x6c6: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x6c7: Return(); Pop(2)

0x6c8: PushEmpty(bool, bool)
0x6c9: @ IsPlayerActor(Stack[-3], Stack[-1])
0x6ca: Pop(0)
0x6cb: Push(Stack[-1])
0x6cc: IF (Stack[-1] == 0) GOTO 0x6d0; Pop(1)

0x6cd: Push("attack")
0x6ce: @ PlayGlobalMusic(Stack[-1])
0x6cf: Pop(1)
0x6d0: Return(); Pop(2)

0x6d1: PushEmpty(object, object)
0x6d2: @ GetScene(Stack[-1])
0x6d3: Pop(0)
0x6d4: Push("battle")
0x6d5: PushEmpty(object)
0x6d6: Call2 0x655

0x6d7: Pop(0)
0x6d8: @ BroadcastMessage(Stack[-2], Stack[-1], Stack[-3])
0x6d9: Pop(2)
0x6da: Return(); Pop(2)

0x6db: Stack[-1] = 0
0x6dc: PushEmpty(int, int)
0x6dd: Push("branch")
0x6de: @ GetVariable(Stack[-1], Stack[-2])
0x6df: Pop(1)
0x6e0: Stack[-3] = Stack[-1]
0x6e1: Return(); Pop(2)

0x6e2: PushEmpty()
0x6e3: PushEmpty(int)
0x6e4: Call2 0x6dc

0x6e5: Pop(0)
0x6e6: Push((int) 1)
0x6e7: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x6e8: IF (Stack[-1] == 0) GOTO 0x6ec; Pop(1)

0x6e9: @ WorkWithCorpse(Stack[-1])
0x6ea: Pop(0)
0x6eb: GOTO 0x6ee

0x6ec: @ Barter(Stack[-1])
0x6ed: Pop(0)
0x6ee: Return(); Pop(0)

0x6ef: PushEmpty(int, bool, int, bool)
0x6f0: Pop(0); Push((bool) Stack[-6] > Stack[-5])
0x6f1: IF (Stack[-1] == 0) GOTO 0x6f6; Pop(1)

0x6f2: Push("GenerateMoney: iMin > iMax")
0x6f3: @ Trace(Stack[-1])
0x6f4: Pop(1)
0x6f5: Return(); Pop(4)

0x6f6: Stack[-2] = (int) 0
0x6f7: Pop(0); Push((bool) Stack[-6] != Stack[-5])
0x6f8: IF (Stack[-1] == 0) GOTO 0x6fd; Pop(1)

0x6f9: Pop(0); Push(Stack[-5] - Stack[-6]);
0x6fa: @ irand(Stack[-3], Stack[-1])
0x6fb: Pop(1)
0x6fc: GOTO 0x701

0x6fd: Push((int) 0)
0x6fe: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x6ff: IF (Stack[-1] == 0) GOTO 0x701; Pop(1)

0x700: Return(); Pop(4)

0x701: Stack[-2] = Stack[-2] + Stack[-6]; Pop(0);
0x702: Push((int) 0)
0x703: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x704: IF (Stack[-1] == 0) GOTO 0x706; Pop(1)

0x705: Return(); Pop(4)

0x706: PushEmpty(int, string)
0x707: Stack[-1] = "Money"
0x708: Call2 0x761

0x709: Pop(1)
0x70a: Push((int) 0)
0x70b: @ AddItem(Stack[-3], Stack[-2], Stack[-1], Stack[-4])
0x70c: Pop(2)
0x70d: Return(); Pop(4)

0x70e: PushEmpty(object, int, bool, object, int, bool)
0x70f: @ CreateInvItem(Stack[-3])
0x710: Pop(0)
0x711: @@ SetItemName(Stack[-7])
0x712: Pop(0)
0x713: Push("Organ")
0x714: Push((int) 1)
0x715: @@ SetProperty(Stack[-2], Stack[-1])
0x716: Pop(2)
0x717: @@ GetItemID(Stack[-2])
0x718: Pop(0)
0x719: Push((int) 0)
0x71a: Push((int) 1)
0x71b: @ AddItem(Stack[-3], Stack[-5], Stack[-2], Stack[-1])
0x71c: Pop(2)
0x71d: Return(); Pop(6)

0x71e: Stack[-3] = 0
0x71f: PushEmpty(int)
0x720: Call2 0x6dc

0x721: Pop(0)
0x722: Push((int) 1)
0x723: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x724: IF (Stack[-1] == 0) GOTO 0x726; Pop(1)

0x725: Return(); Pop(0)

0x726: PushEmpty(string)
0x727: Stack[-1] = "liver"
0x728: Call2 0x70e

0x729: Pop(1)
0x72a: PushEmpty(string)
0x72b: Stack[-1] = "kidney"
0x72c: Call2 0x70e

0x72d: Pop(1)
0x72e: PushEmpty(string)
0x72f: Stack[-1] = "heart"
0x730: Call2 0x70e

0x731: Pop(1)
0x732: PushEmpty(string)
0x733: Stack[-1] = "blood"
0x734: Call2 0x70e

0x735: Pop(1)
0x736: Return(); Pop(0)

0x737: PushEmpty(int, bool, int, bool)
0x738: Push((int) 0)
0x739: @ ClearSubContainer(Stack[-1])
0x73a: Pop(1)
0x73b: PushEmpty(int, int)
0x73c: Stack[-2] = (int) 200
0x73d: Stack[-1] = (int) 500
0x73e: Call2 0x6ef

0x73f: Pop(2)
0x740: PushEmpty(string, int, int)
0x741: Stack[-3] = "revolver_ammo"
0x742: Stack[-2] = (int) 1
0x743: Stack[-1] = (int) 80
0x744: Call2 0x621

0x745: Pop(3)
0x746: PushEmpty(string, int, int)
0x747: Stack[-3] = "samopal_ammo"
0x748: Stack[-2] = (int) 1
0x749: Stack[-1] = (int) 80
0x74a: Call2 0x621

0x74b: Pop(3)
0x74c: PushEmpty(string, int, int)
0x74d: Stack[-3] = "rifle_ammo"
0x74e: Stack[-2] = (int) 1
0x74f: Stack[-1] = (int) 80
0x750: Call2 0x621

0x751: Pop(3)
0x752: PushEmpty(string, int, int)
0x753: Stack[-3] = "lockpick"
0x754: Stack[-2] = (int) 1
0x755: Stack[-1] = (int) 80
0x756: Call2 0x621

0x757: Pop(3)
0x758: PushEmpty(int, string)
0x759: Stack[-1] = "hunter_mark"
0x75a: Call2 0x761

0x75b: Pop(1)
0x75c: Push((int) 0)
0x75d: Push((int) 1)
0x75e: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x75f: Pop(3)
0x760: Return(); Pop(4)

0x761: PushEmpty(int, int)
0x762: @ GetInvItemByName(Stack[-1], Stack[-3])
0x763: Pop(0)
0x764: Stack[-4] = Stack[-1]
0x765: Return(); Pop(2)

0x766: PushEmpty()
0x767: PushEmpty(bool, object)
0x768: Stack[-1] = Stack[-3]
0x769: Call2 0x4dc

0x76a: Pop(1)
0x76b: IF (Stack[-1] == 0) GOTO 0x787; Pop(1)

0x76c: PushEmpty(bool)
0x76d: Stack[-1] = (bool) 0
0x76e: PushEmpty(int)
0x76f: Call2 0x6dc

0x770: Pop(0)
0x771: Push((int) 2)
0x772: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x773: IF (Stack[-1] == 0) GOTO 0x77b; Pop(1)

0x774: PushEmpty(int)
0x775: Call2 0x6bf

0x776: Pop(0)
0x777: Push((int) 6)
0x778: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x779: IF (Stack[-1] == 0) GOTO 0x77b; Pop(1)

0x77a: Stack[-1] = (bool) 1
0x77b: IF (Stack[-1] == 0) GOTO 0x782; Pop(1)

0x77c: PushEmpty(bool, object, float)
0x77d: Stack[-2] = Stack[-4]
0x77e: Stack[-1] = (float) 0.1
0x77f: Call2 0x681

0x780: Pop(3)
0x781: GOTO 0x787

0x782: PushEmpty(bool, object, float)
0x783: Stack[-2] = Stack[-4]
0x784: Stack[-1] = (float) 0.05
0x785: Call2 0x681

0x786: Pop(3)
0x787: PushEmpty(object)
0x788: Stack[-1] = Stack[-2]
0x789: Push(-1, 0); TaskCall(0)
0x78a: Call2 0x0

0x78b: Pop(-1, 0); TaskReturn
0x78c: Pop(1)
0x78d: Return(); Pop(0)

0x78e: PushEmpty()
0x78f: PushEmpty(object, int, float)
0x790: Stack[-3] = Stack[-7]
0x791: Stack[-2] = Stack[-6]
0x792: Stack[-1] = Stack[-5]
0x793: Call2 0x5b9

0x794: Pop(3)
0x795: Return(); Pop(0)

0x796: PushEmpty()
0x797: PushEmpty(object, int, float, cvector, cvector)
0x798: Stack[-5] = Stack[-11]
0x799: Stack[-4] = Stack[-10]
0x79a: Stack[-3] = Stack[-9]
0x79b: Stack[-2] = Stack[-7]
0x79c: Stack[-1] = Stack[-6]
0x79d: Call2 0x5fd

0x79e: Pop(5)
0x79f: Return(); Pop(0)

0x7a0: PushEmpty(float, float)
0x7a1: Push("health")
0x7a2: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x7a3: IF (Stack[-1] == 0) GOTO 0x7ac; Pop(1)

0x7a4: Push("health")
0x7a5: @ GetProperty(Stack[-1], Stack[-2])
0x7a6: Pop(1)
0x7a7: Push((int) 0)
0x7a8: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x7a9: IF (Stack[-1] == 0) GOTO 0x7ac; Pop(1)

0x7aa: @ SignalDeath(Stack[-4])
0x7ab: Pop(0)
0x7ac: Return(); Pop(2)

0x7ad: PushEmpty()
0x7ae: PushEmpty(object)
0x7af: Stack[-1] = Stack[-2]
0x7b0: Call2 0x766

0x7b1: Pop(1)
0x7b2: Return(); Pop(0)

0x7b3: PushEmpty()
0x7b4: Return(); Pop(0)

