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
	Can't find path to noise source
	new hunt point
	attack_begin
	attack_end
	attack
	scripted
	grenade.xml
	SetScriptProperty
	StartVelocity
	DamageAmount
	DamageType
	scream
	hunt
	HasProperty
	HasProperty
	GetProperty
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
	blood_dir.xml
	reputation
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
	fresh_meat
	rusk
	gamma_pills
	bomber_mark
	class
	health
	RemoveStationaryActor

Import:
	SetTimer (2 args)
	KillTimer (1 args)
	GetBrightness (1 args)
	rand (2 args)
	Sleep (1 args)
	GetPosition (1 args)
	GetRandomPFPointInCircle (4 args)
	RotatePath (2 args)
	FollowPath (3 args)
	GetCameraFarDistance (1 args)
	RequestClearPath (1 args)
	Stop (0 args)
	StopGroup0 (0 args)
	FindShiftedPathTo (2 args)
	IsPlayerActor (2 args)
	SetRTEnvelope (2 args)
	Hold (0 args)
	IsOverrideActive (1 args)
	GetDirection (1 args)
	RemoveRTEnvelope (0 args)
	SetDeathState (0 args)
	StopAsync (0 args)
	LookAsync (3 args)
	PlayAnimation (2 args)
	WaitForAnimEnd (0 args)
	UnlookAsync (1 args)
	LockAnimationEnd (2 args)
	RemoveEnvelope (0 args)
	StopSecondaryAnimation (0 args)
	FindPathTo (2 args)
	Trace (1 args)
	ResetAAS (0 args)
	irand (2 args)
	WaitForAnimEnd (1 args)
	Sleep (2 args)
	StopAnimation (0 args)
	CanSee (2 args)
	Face (1 args)
	ReportAttack (1 args)
	GetScene (1 args)
	GetGeometryLocator (4 args)
	AddActorByType (6 args)
	Speak (1 args)
	GetSeeThreshold (1 args)
	GetSeeFOV (1 args)
	SetSeeThreshold (1 args)
	SetSeeFOV (1 args)
	rand (1 args)
	RandVec2D (2 args)
	Rotate (3 args)
	IsDead (1 args)
	GetSecondaryAnimationType (1 args)
	FadeSecondaryAnimation (4 args)
	CreateVectorVector (1 args)
	IsLoaded (1 args)
	AddItem (3 args)
	AddItem (4 args)
	IsExisting3DSound (2 args)
	Is3DSoundLoaded (2 args)
	GetEyesHeight (1 args)
	PlayGlobalSound (2 args)
	self (1 args)
	SendWorldWndMessage (1 args)
	CreateFloatVector (1 args)
	SendWorldWndMessage (2 args)
	PlayGlobalMusic (1 args)
	HasAnimation (3 args)
	GetVariable (2 args)
	WorkWithCorpse (1 args)
	Barter (1 args)
	CreateInvItem (1 args)
	ClearSubContainer (1 args)
	GetInvItemByName (2 args)
	GetProperty (2 args)
	SignalDeath (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (bool, bool) Params = 0
		EVENT_1 Op = 0xc Vars = (object)
		EVENT_3 Op = 0x1a Vars = (object)
		EVENT_17 Op = 0x28 Vars = (object)
		EVENT_30 Op = 0x31 Vars = (object, object, bool)
		EVENT_41 Op = 0x44 Vars = (object)
		EVENT_7 Op = 0x4d Vars = (int)
		EVENT_10 Op = 0xa3 Vars = (object)
		EVENT_28 Op = 0xa7 Vars = ()
	GTASK_1  Params = 1
		EVENT_0 Op = 0xd8 Vars = (object)
		EVENT_22 Op = 0x157 Vars = (object, int, float, float)
		EVENT_16 Op = 0x159 Vars = (object, string)
		EVENT_41 Op = 0x15b Vars = (object)
	GTASK_2 Vars = (cvector, object, object) Params = 1
		EVENT_1 Op = 0x164 Vars = (object)
		EVENT_17 Op = 0x172 Vars = (object)
		EVENT_30 Op = 0x17b Vars = (object, object, bool)
		EVENT_7 Op = 0x1e1 Vars = (int)
		EVENT_3 Op = 0x1f1 Vars = (object)
		EVENT_28 Op = 0x212 Vars = ()
		EVENT_41 Op = 0x21b Vars = (object)
	GTASK_3  Params = 0
		EVENT_1 Op = 0x224 Vars = (object)
		EVENT_3 Op = 0x232 Vars = (object)
		EVENT_17 Op = 0x240 Vars = (object)
		EVENT_30 Op = 0x249 Vars = (object, object, bool)
	GTASK_4 Vars = (object, bool) Params = 1
		EVENT_1 Op = 0x369 Vars = (object)
		EVENT_2 Op = 0x36e Vars = (object)
		EVENT_30 Op = 0x373 Vars = (object, object, bool)
	GTASK_5 Vars = (object) Params = 1
		EVENT_1 Op = 0x37f Vars = (object)
		EVENT_2 Op = 0x385 Vars = (object)
		EVENT_17 Op = 0x38a Vars = (object)
		EVENT_30 Op = 0x390 Vars = (object, object, bool)
	GTASK_6 Vars = (float, float, object) Params = 2
		EVENT_1 Op = 0x3e2 Vars = (object)
		EVENT_3 Op = 0x3f0 Vars = (object)
		EVENT_17 Op = 0x407 Vars = (object)
		EVENT_30 Op = 0x410 Vars = (object, object, bool)
		EVENT_41 Op = 0x425 Vars = (object)
	GTASK_7  Params = 0
		EVENT_1 Op = 0x436 Vars = (object)
		EVENT_3 Op = 0x444 Vars = (object)
		EVENT_17 Op = 0x452 Vars = (object)
		EVENT_30 Op = 0x45b Vars = (object, object, bool)
		EVENT_41 Op = 0x470 Vars = (object)
		EVENT_7 Op = 0x479 Vars = (int)

Events:
EVENT_22 Op = 0x78b Vars = (object, int, float, float)
EVENT_43 Op = 0x793 Vars = (object, int, float, float, cvector, cvector)
EVENT_16 Op = 0x7b3 Vars = (object, string)
EVENT_41 Op = 0x7c0 Vars = (object)

0x0: PushEmpty()
0x1: Call2 0x7e9

0x2: Pop(0)
0x3: Push((int) 90)
0x4: Push((int) 10)
0x5: @ SetTimer(Stack[-2], Stack[-1])
0x6: Pop(2)
0x7: PushEmpty()
0x8: Call2 0x63

0x9: Pop(0)
0xa: GOTO 0x3

0xb: Return(); Pop(0)

0xc: PushEmpty()
0xd: PushEmpty(bool, object)
0xe: Stack[-1] = Stack[-3]
0xf: Call2 0x76c

0x10: Pop(1)
0x11: IF (Stack[-1] == 0) GOTO 0x19; Pop(1)

0x12: PushEmpty()
0x13: Call2 0x3d

0x14: Pop(0)
0x15: PushEmpty(object)
0x16: Stack[-1] = Stack[-2]
0x17: Call2 0x773

0x18: Pop(1)
0x19: Return(); Pop(0)

0x1a: PushEmpty()
0x1b: PushEmpty(bool, object)
0x1c: Stack[-1] = Stack[-3]
0x1d: Call2 0x75d

0x1e: Pop(1)
0x1f: IF (Stack[-1] == 0) GOTO 0x27; Pop(1)

0x20: PushEmpty()
0x21: Call2 0x3d

0x22: Pop(0)
0x23: PushEmpty(object)
0x24: Stack[-1] = Stack[-2]
0x25: Call2 0x764

0x26: Pop(1)
0x27: Return(); Pop(0)

0x28: PushEmpty()
0x29: PushEmpty()
0x2a: Call2 0x3d

0x2b: Pop(0)
0x2c: PushEmpty(object)
0x2d: Stack[-1] = Stack[-2]
0x2e: Call2 0x77d

0x2f: Pop(1)
0x30: Return(); Pop(0)

0x31: PushEmpty()
0x32: PushEmpty(bool, object, object)
0x33: Stack[-2] = Stack[-6]
0x34: Stack[-1] = Stack[-5]
0x35: Call2 0x7c6

0x36: Pop(2)
0x37: IF (Stack[-1] == 0) GOTO 0x3c; Pop(1)

0x38: PushEmpty(object)
0x39: Stack[-1] = Stack[-4]
0x3a: Call2 0x28

0x3b: Pop(1)
0x3c: Return(); Pop(0)

0x3d: Push((int) 90)
0x3e: @ KillTimer(Stack[-1])
0x3f: Pop(1)
0x40: PushEmpty()
0x41: Call2 0xaa

0x42: Pop(0)
0x43: Return(); Pop(0)

0x44: PushEmpty()
0x45: PushEmpty()
0x46: Call2 0x3d

0x47: Pop(0)
0x48: PushEmpty(object)
0x49: Stack[-1] = Stack[-2]
0x4a: Call2 0x7c0

0x4b: Pop(1)
0x4c: Return(); Pop(0)

0x4d: PushEmpty(float, float)
0x4e: Push((int) 90)
0x4f: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x50: IF (Stack[-1] == 0) GOTO 0x62; Pop(1)

0x51: Push((int) 90)
0x52: Push((int) 1)
0x53: @ SetTimer(Stack[-2], Stack[-1])
0x54: Pop(2)
0x55: @ GetBrightness(Stack[-1])
0x56: Pop(0)
0x57: Push((float)0.1)
0x58: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x59: IF (Stack[-1] == 0) GOTO 0x62; Pop(1)

0x5a: PushEmpty()
0x5b: Call2 0x3d

0x5c: Pop(0)
0x5d: PushEmpty()
0x5e: Push(-0, 0); TaskCall(7)
0x5f: Call2 0x42e

0x60: Pop(-0, 0); TaskReturn
0x61: Pop(0)
0x62: Return(); Pop(2)

0x63: PushEmpty(float, cvector, cvector, bool, object, bool, float, cvector, cvector, bool, object, bool)
0x64: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x65: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x66: Push((float)0.5)
0x67: @ rand(Stack[-7], Stack[-1])
0x68: Pop(1)
0x69: @ Sleep(Stack[-6])
0x6a: Pop(0)
0x6b: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x6c: IF (Stack[-1] == 0) GOTO 0x9d; Pop(1)

0x6d: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == 0)
0x6e: IF (Stack[-1] == 0) GOTO 0x7e; Pop(1)

0x6f: @ GetPosition(Stack[-4])
0x70: Pop(0)
0x71: PushEmpty(float)
0x72: Call2 0x9e

0x73: Pop(0)
0x74: @ GetRandomPFPointInCircle(Stack[-6], Stack[-5], Stack[-1], Stack[-4])
0x75: Pop(1)
0x76: Push(Stack[-3])
0x77: IF (Stack[-1] == 0) GOTO 0x79; Pop(1)

0x78: GOTO 0x7d

0x79: Push((int) 1)
0x7a: @ Sleep(Stack[-1])
0x7b: Pop(1)
0x7c: GOTO 0x6f

0x7d: GOTO 0x7f

0x7e: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x7f: PushEmpty(object, cvector)
0x80: Stack[-1] = Stack[-7]
0x81: Call2 0xb3

0x82: Stack[-4] = Stack[-2]
0x83: Pop(2)
0x84: Pop(0); Push(( Stack[-2] != 0 )
0x85: IF (Stack[-1] == 0) GOTO 0x98; Pop(1)

0x86: @ RotatePath(Stack[-2], Stack[-1])
0x87: Pop(0)
0x88: Push(Stack[-1])
0x89: IF (Stack[-1] == 0) GOTO 0x97; Pop(1)

0x8a: PushEmpty(bool)
0x8b: Call2 0xb1

0x8c: Pop(0)
0x8d: @ FollowPath(Stack[-3], Stack[-1], Stack[-2])
0x8e: Pop(1)
0x8f: Stack[-2] = 0
0x90: Push(Stack[-1])
0x91: IF (Stack[-1] == 0) GOTO 0x97; Pop(1)

0x92: PushEmpty()
0x93: Push(-0, 0); TaskCall(3)
0x94: Call2 0x255

0x95: Pop(-0, 0); TaskReturn
0x96: Pop(0)
0x97: GOTO 0x9b

0x98: Push((int) 1)
0x99: @ Sleep(Stack[-1])
0x9a: Pop(1)
0x9b: Stack[-2] = 0
0x9c: GOTO 0x6b

0x9d: Return(); Pop(12)

0x9e: PushEmpty(float, float)
0x9f: @ GetCameraFarDistance(Stack[-1])
0xa0: Pop(0)
0xa1: Stack[-3] = Stack[-1]
0xa2: Return(); Pop(2)

0xa3: PushEmpty()
0xa4: @ RequestClearPath(Stack[-1])
0xa5: Pop(0)
0xa6: Return(); Pop(0)

0xa7: @ Stop()
0xa8: Pop(0)
0xa9: Return(); Pop(0)

0xaa: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0xab: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0xac: @ Stop()
0xad: Pop(0)
0xae: @ StopGroup0()
0xaf: Pop(0)
0xb0: Return(); Pop(0)

0xb1: Stack[-1] = (bool) 0
0xb2: Return(); Pop(0)

0xb3: PushEmpty(object, object)
0xb4: @ FindShiftedPathTo(Stack[-1], Stack[-3])
0xb5: Pop(0)
0xb6: Stack[-4] = Stack[-1]
0xb7: Return(); Pop(2)

0xb8: Stack[-1] = 0
0xb9: PushEmpty(bool, bool)
0xba: @ IsPlayerActor(Stack[-3], Stack[-1])
0xbb: Pop(0)
0xbc: Push(Stack[-1])
0xbd: IF (Stack[-1] == 0) GOTO 0xc1; Pop(1)

0xbe: PushEmpty()
0xbf: Call2 0x6d1

0xc0: Pop(0)
0xc1: PushEmpty()
0xc2: Call2 0x6b9

0xc3: Pop(0)
0xc4: PushEmpty(object)
0xc5: Stack[-1] = Stack[-4]
0xc6: Call2 0xc9

0xc7: Pop(1)
0xc8: Return(); Pop(2)

0xc9: PushEmpty()
0xca: EventDisable(0)
0xcb: PushEmpty(object)
0xcc: Stack[-1] = Stack[-2]
0xcd: Call2 0xe2

0xce: Pop(1)
0xcf: Push((int) 50)
0xd0: Push((int) 40)
0xd1: @ SetRTEnvelope(Stack[-2], Stack[-1])
0xd2: Pop(2)
0xd3: EventEnable(0)
0xd4: @ Hold()
0xd5: Pop(0)
0xd6: GOTO 0xd4

0xd7: Return(); Pop(0)

0xd8: PushEmpty(bool, bool)
0xd9: @ IsOverrideActive(Stack[-1])
0xda: Pop(0)
0xdb: Pop(0); Push((bool) Stack[-1] == 0)
0xdc: IF (Stack[-1] == 0) GOTO 0xe1; Pop(1)

0xdd: PushEmpty(object)
0xde: Stack[-1] = Stack[-4]
0xdf: Call2 0x67c

0xe0: Pop(1)
0xe1: Return(); Pop(2)

0xe2: PushEmpty(cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector, cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector)
0xe3: Pop(0); Push((bool) Stack[-21] == 0)
0xe4: IF (Stack[-1] == 0) GOTO 0xea; Pop(1)

0xe5: PushEmpty(string)
0xe6: Stack[-1] = "fdie"
0xe7: Call2 0x13d

0xe8: Pop(1)
0xe9: GOTO 0x13c

0xea: @@ GetPosition(Stack[-10])
0xeb: Pop(0)
0xec: @ GetPosition(Stack[-9])
0xed: Pop(0)
0xee: @ GetDirection(Stack[-8])
0xef: Pop(0)
0xf0: Stack[-7] = Stack[-9] - Stack[-10]; Pop(0);
0xf1: Push(CvectorIndex(Stack[-7], 0))
0xf2: Push(CvectorIndex(Stack[-9], 0))
0xf3: Pop(2); Push(Stack[-2] * Stack[-1]);
0xf4: Push(CvectorIndex(Stack[-8], 2))
0xf5: Push(CvectorIndex(Stack[-10], 2))
0xf6: Pop(2); Push(Stack[-2] * Stack[-1]);
0xf7: Pop(2); Push(Stack[-2] + Stack[-1]);
0xf8: Push((int) 0)
0xf9: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0xfa: IF (Stack[-1] == 0) GOTO 0xfd; Pop(1)

0xfb: Stack[-6] = "fdie"
0xfc: GOTO 0xfe

0xfd: Stack[-6] = "bdie"
0xfe: @ RemoveRTEnvelope()
0xff: Pop(0)
0x100: @ SetDeathState()
0x101: Pop(0)
0x102: @ Stop()
0x103: Pop(0)
0x104: @ StopAsync()
0x105: Pop(0)
0x106: Stack[-5] = Stack[-21]
0x107: Push("GetScriptProperty")
0x108: Push((int) 2)
0x109: Pop(2); Push(IsFuncExist(Stack[-23], Stack[-2], Stack[-1]))
0x10a: IF (Stack[-1] == 0) GOTO 0x116; Pop(1)

0x10b: Push("Owner")
0x10c: @@ HasScriptProperty(Stack[-5], Stack[-1])
0x10d: Pop(1)
0x10e: Push(Stack[-4])
0x10f: IF (Stack[-1] == 0) GOTO 0x116; Pop(1)

0x110: Push("Owner")
0x111: @@ GetScriptProperty(Stack[-6], Stack[-1])
0x112: Pop(1)
0x113: Pop(0); Push((bool) Stack[-5] == 0)
0x114: IF (Stack[-1] == 0) GOTO 0x116; Pop(1)

0x115: Stack[-5] = Stack[-21]
0x116: Push("@GetEyesHeight")
0x117: Push((int) 1)
0x118: Pop(2); Push(IsFuncExist(Stack[-7], Stack[-2], Stack[-1]))
0x119: IF (Stack[-1] == 0) GOTO 0x125; Pop(1)

0x11a: @@ GetEyesHeight(Stack[-2])
0x11b: Pop(0)
0x11c: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x11d: Push(CvectorIndex(Stack[-1], 1))
0x11e: Stack[-1] = Stack[-3]
0x11f: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x120: Push("head")
0x121: @ LookAsync(Stack[-22], Stack[-1], Stack[-2])
0x122: Pop(1)
0x123: Stack[-3] = (bool) 1
0x124: GOTO 0x126

0x125: Stack[-3] = (bool) 0
0x126: PushEmpty(string)
0x127: Stack[-1] = Stack[-7]
0x128: Call2 0x5df

0x129: Pop(1)
0x12a: Push("all")
0x12b: @ PlayAnimation(Stack[-1], Stack[-7])
0x12c: Pop(1)
0x12d: @ WaitForAnimEnd()
0x12e: Pop(0)
0x12f: Push(Stack[-3])
0x130: IF (Stack[-1] == 0) GOTO 0x136; Pop(1)

0x131: @ StopAsync()
0x132: Pop(0)
0x133: Push("head")
0x134: @ UnlookAsync(Stack[-1])
0x135: Pop(1)
0x136: Push("all")
0x137: @ LockAnimationEnd(Stack[-1], Stack[-7])
0x138: Pop(1)
0x139: @ RemoveEnvelope()
0x13a: Pop(0)
0x13b: Stack[-5] = 0
0x13c: Return(); Pop(20)

0x13d: PushEmpty()
0x13e: @ RemoveRTEnvelope()
0x13f: Pop(0)
0x140: @ SetDeathState()
0x141: Pop(0)
0x142: @ Stop()
0x143: Pop(0)
0x144: @ StopAsync()
0x145: Pop(0)
0x146: @ StopSecondaryAnimation()
0x147: Pop(0)
0x148: PushEmpty(string)
0x149: Stack[-1] = Stack[-2]
0x14a: Call2 0x5df

0x14b: Pop(1)
0x14c: Push("all")
0x14d: @ PlayAnimation(Stack[-1], Stack[-2])
0x14e: Pop(1)
0x14f: @ WaitForAnimEnd()
0x150: Pop(0)
0x151: Push("all")
0x152: @ LockAnimationEnd(Stack[-1], Stack[-2])
0x153: Pop(1)
0x154: @ RemoveEnvelope()
0x155: Pop(0)
0x156: Return(); Pop(0)

0x157: PushEmpty()
0x158: Return(); Pop(0)

0x159: PushEmpty()
0x15a: Return(); Pop(0)

0x15b: PushEmpty()
0x15c: Return(); Pop(0)

0x15d: PushEmpty()
0x15e: PushEmpty(object, bool)
0x15f: Stack[-2] = Stack[-3]
0x160: Stack[-1] = (bool) 0
0x161: Call2 0x1a1

0x162: Pop(2)
0x163: Return(); Pop(0)

0x164: PushEmpty()
0x165: PushEmpty(bool, object)
0x166: Stack[-1] = Stack[-3]
0x167: Call2 0x76c

0x168: Pop(1)
0x169: IF (Stack[-1] == 0) GOTO 0x171; Pop(1)

0x16a: PushEmpty()
0x16b: Call2 0x215

0x16c: Pop(0)
0x16d: PushEmpty(object)
0x16e: Stack[-1] = Stack[-2]
0x16f: Call2 0x773

0x170: Pop(1)
0x171: Return(); Pop(0)

0x172: PushEmpty()
0x173: PushEmpty()
0x174: Call2 0x215

0x175: Pop(0)
0x176: PushEmpty(object)
0x177: Stack[-1] = Stack[-2]
0x178: Call2 0x77d

0x179: Pop(1)
0x17a: Return(); Pop(0)

0x17b: PushEmpty()
0x17c: PushEmpty(bool, object, object)
0x17d: Stack[-2] = Stack[-6]
0x17e: Stack[-1] = Stack[-5]
0x17f: Call2 0x7c6

0x180: Pop(2)
0x181: IF (Stack[-1] == 0) GOTO 0x186; Pop(1)

0x182: PushEmpty(object)
0x183: Stack[-1] = Stack[-4]
0x184: Call2 0x172

0x185: Pop(1)
0x186: Return(); Pop(0)

0x187: PushEmpty(bool, bool)
0x188: @ IsPlayerActor(Stack[-4], Stack[-1])
0x189: Pop(0)
0x18a: Push(Stack[-1])
0x18b: IF (Stack[-1] == 0) GOTO 0x18e; Pop(1)

0x18c: Stack[-5] = (bool) 0
0x18d: Return(); Pop(2)

0x18e: PushEmpty(bool, object)
0x18f: Stack[-1] = Stack[-5]
0x190: Call2 0x7ea

0x191: Pop(1)
0x192: Pop(1); Push((bool) Stack[-1] == 0)
0x193: IF (Stack[-1] == 0) GOTO 0x196; Pop(1)

0x194: Stack[-5] = (bool) 0
0x195: Return(); Pop(2)

0x196: @ IsPlayerActor(Stack[-3], Stack[-1])
0x197: Pop(0)
0x198: Stack[-5] = Stack[-1]
0x199: Return(); Pop(2)

0x19a: PushEmpty()
0x19b: PushEmpty(bool, object)
0x19c: Stack[-1] = Stack[-3]
0x19d: Call2 0x7ea

0x19e: Stack[-4] = Stack[-2]
0x19f: Pop(2)
0x1a0: Return(); Pop(0)

0x1a1: PushEmpty(bool, bool)
0x1a2: PushEmpty(bool, object)
0x1a3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1a4: Call2 0x50c

0x1a5: Pop(1)
0x1a6: Pop(1); Push((bool) Stack[-1] == 0)
0x1a7: IF (Stack[-1] == 0) GOTO 0x1a9; Pop(1)

0x1a8: Return(); Pop(2)

0x1a9: Stack[1 + Tasks[-1].StackPointer] = Stack[-4]
0x1aa: PushEmpty(object)
0x1ab: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1ac: Call2 0x655

0x1ad: Pop(1)
0x1ae: @@ GetPFPosition(Stack[-0])
0x1af: Pop(0)
0x1b0: Push((int) 61)
0x1b1: Push((float)0.5)
0x1b2: @ SetTimer(Stack[-2], Stack[-1])
0x1b3: Pop(2)
0x1b4: @ FindPathTo(Stack[-2], Stack[-0])
0x1b5: Pop(0)
0x1b6: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x1b7: IF (Stack[-1] == 0) GOTO 0x1bc; Pop(1)

0x1b8: Push("Can't find path to noise source")
0x1b9: @ Trace(Stack[-1])
0x1ba: Pop(1)
0x1bb: GOTO 0x1dd

0x1bc: @ FollowPath(Stack[-2], Stack[-3], Stack[-1])
0x1bd: Pop(0)
0x1be: Pop(0); Push((bool) Stack[-1] == 0)
0x1bf: IF (Stack[-1] == 0) GOTO 0x1c4; Pop(1)

0x1c0: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x1c1: IF (Stack[-1] == 0) GOTO 0x1c3; Pop(1)

0x1c2: GOTO 0x1dd

0x1c3: GOTO 0x1db

0x1c4: Push((int) 61)
0x1c5: @ KillTimer(Stack[-1])
0x1c6: Pop(1)
0x1c7: PushEmpty(object, object)
0x1c8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1c9: Push(-2, 3); TaskCall(6)
0x1ca: Call2 0x3ac

0x1cb: Pop(-2, 3); TaskReturn
0x1cc: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x1cd: Pop(2)
0x1ce: Push((int) 61)
0x1cf: Push((float)0.5)
0x1d0: @ SetTimer(Stack[-2], Stack[-1])
0x1d1: Pop(2)
0x1d2: PushEmpty(bool, object)
0x1d3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1d4: Call2 0x50c

0x1d5: Pop(1)
0x1d6: Pop(1); Push((bool) Stack[-1] == 0)
0x1d7: IF (Stack[-1] == 0) GOTO 0x1d9; Pop(1)

0x1d8: GOTO 0x1dd

0x1d9: @@ GetPFPosition(Stack[-0])
0x1da: Pop(0)
0x1db: Pop(0); Push(( Stack[2 + Tasks[-1].StackPointer] != 0 )
0x1dc: IF (Stack[-1] == 0) GOTO 0x1b4; Pop(1)

0x1dd: Push((int) 61)
0x1de: @ KillTimer(Stack[-1])
0x1df: Pop(1)
0x1e0: Return(); Pop(2)

0x1e1: PushEmpty()
0x1e2: Push((int) 61)
0x1e3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1e4: IF (Stack[-1] == 0) GOTO 0x1f0; Pop(1)

0x1e5: PushEmpty(bool, object)
0x1e6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1e7: Call2 0x19a

0x1e8: Pop(1)
0x1e9: Pop(1); Push((bool) Stack[-1] == 0)
0x1ea: IF (Stack[-1] == 0) GOTO 0x1ee; Pop(1)

0x1eb: @ Stop()
0x1ec: Pop(0)
0x1ed: Stack[2 + Tasks[-1].StackPointer] = 0
0x1ee: @ ResetAAS()
0x1ef: Pop(0)
0x1f0: Return(); Pop(0)

0x1f1: PushEmpty()
0x1f2: Pop(0); Push((bool) Stack[-1] == 0)
0x1f3: IF (Stack[-1] == 0) GOTO 0x1f5; Pop(1)

0x1f4: Return(); Pop(0)

0x1f5: Pop(0); Push((bool) Stack[-1] == Stack[1 + Tasks[-1].StackPointer])
0x1f6: IF (Stack[-1] == 0) GOTO 0x203; Pop(1)

0x1f7: PushEmpty(bool, object)
0x1f8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1f9: Call2 0x19a

0x1fa: Pop(1)
0x1fb: Pop(1); Push((bool) Stack[-1] == 0)
0x1fc: IF (Stack[-1] == 0) GOTO 0x202; Pop(1)

0x1fd: PushEmpty()
0x1fe: Call2 0x215

0x1ff: Pop(0)
0x200: Stack[2 + Tasks[-1].StackPointer] = 0
0x201: Return(); Pop(0)

0x202: GOTO 0x20a

0x203: PushEmpty(bool, object, object)
0x204: Stack[-2] = Stack[-4]
0x205: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x206: Call2 0x187

0x207: Pop(2)
0x208: IF (Stack[-1] == 0) GOTO 0x20a; Pop(1)

0x209: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x20a: @@ GetPFPosition(Stack[-0])
0x20b: Pop(0)
0x20c: Push("new hunt point")
0x20d: @ Trace(Stack[-1])
0x20e: Pop(1)
0x20f: @ Stop()
0x210: Pop(0)
0x211: Return(); Pop(0)

0x212: @ Stop()
0x213: Pop(0)
0x214: Return(); Pop(0)

0x215: Push((int) 61)
0x216: @ KillTimer(Stack[-1])
0x217: Pop(1)
0x218: @ Stop()
0x219: Pop(0)
0x21a: Return(); Pop(0)

0x21b: PushEmpty()
0x21c: PushEmpty()
0x21d: Call2 0x215

0x21e: Pop(0)
0x21f: PushEmpty(object)
0x220: Stack[-1] = Stack[-2]
0x221: Call2 0x7c0

0x222: Pop(1)
0x223: Return(); Pop(0)

0x224: PushEmpty()
0x225: PushEmpty(bool, object)
0x226: Stack[-1] = Stack[-3]
0x227: Call2 0x76c

0x228: Pop(1)
0x229: IF (Stack[-1] == 0) GOTO 0x231; Pop(1)

0x22a: PushEmpty()
0x22b: Call2 0x2a6

0x22c: Pop(0)
0x22d: PushEmpty(object)
0x22e: Stack[-1] = Stack[-2]
0x22f: Call2 0x773

0x230: Pop(1)
0x231: Return(); Pop(0)

0x232: PushEmpty()
0x233: PushEmpty(bool, object)
0x234: Stack[-1] = Stack[-3]
0x235: Call2 0x75d

0x236: Pop(1)
0x237: IF (Stack[-1] == 0) GOTO 0x23f; Pop(1)

0x238: PushEmpty()
0x239: Call2 0x2a6

0x23a: Pop(0)
0x23b: PushEmpty(object)
0x23c: Stack[-1] = Stack[-2]
0x23d: Call2 0x764

0x23e: Pop(1)
0x23f: Return(); Pop(0)

0x240: PushEmpty()
0x241: PushEmpty()
0x242: Call2 0x2a6

0x243: Pop(0)
0x244: PushEmpty(object)
0x245: Stack[-1] = Stack[-2]
0x246: Call2 0x77d

0x247: Pop(1)
0x248: Return(); Pop(0)

0x249: PushEmpty()
0x24a: PushEmpty(bool, object, object)
0x24b: Stack[-2] = Stack[-6]
0x24c: Stack[-1] = Stack[-5]
0x24d: Call2 0x7c6

0x24e: Pop(2)
0x24f: IF (Stack[-1] == 0) GOTO 0x254; Pop(1)

0x250: PushEmpty(object)
0x251: Stack[-1] = Stack[-4]
0x252: Call2 0x240

0x253: Pop(1)
0x254: Return(); Pop(0)

0x255: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x256: @ WaitForAnimEnd()
0x257: Pop(0)
0x258: PushEmpty(bool)
0x259: Call2 0x5b5

0x25a: Pop(0)
0x25b: Pop(1); Push((bool) Stack[-1] == 0)
0x25c: IF (Stack[-1] == 0) GOTO 0x25e; Pop(1)

0x25d: Return(); Pop(14)

0x25e: PushEmpty(int)
0x25f: Call2 0x665

0x260: Stack[-8] = Stack[-1]
0x261: Pop(1)
0x262: Stack[-6] = (int) 0
0x263: PushEmpty(bool)
0x264: Stack[-1] = (bool) 0
0x265: Push((int) 5)
0x266: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x267: IF (Stack[-1] == 0) GOTO 0x26d; Pop(1)

0x268: PushEmpty(bool)
0x269: Call2 0x5b5

0x26a: Pop(0)
0x26b: IF (Stack[-1] == 0) GOTO 0x26d; Pop(1)

0x26c: Stack[-1] = (bool) 1
0x26d: IF (Stack[-1] == 0) GOTO 0x2a1; Pop(1)

0x26e: Push((int) 3)
0x26f: @ irand(Stack[-6], Stack[-1])
0x270: Pop(1)
0x271: Push((int) 0)
0x272: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x273: IF (Stack[-1] == 0) GOTO 0x285; Pop(1)

0x274: Push(Stack[-7])
0x275: IF (Stack[-1] == 0) GOTO 0x284; Pop(1)

0x276: @ irand(Stack[-4], Stack[-7])
0x277: Pop(0)
0x278: Push("all")
0x279: PushEmpty(string, int)
0x27a: Stack[-1] = Stack[-7]
0x27b: Call2 0x65e

0x27c: Pop(1)
0x27d: @ PlayAnimation(Stack[-2], Stack[-1])
0x27e: Pop(2)
0x27f: @ WaitForAnimEnd(Stack[-3])
0x280: Pop(0)
0x281: Pop(0); Push((bool) Stack[-3] == 0)
0x282: IF (Stack[-1] == 0) GOTO 0x284; Pop(1)

0x283: GOTO 0x2a1

0x284: GOTO 0x296

0x285: Push((int) 1)
0x286: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x287: IF (Stack[-1] == 0) GOTO 0x293; Pop(1)

0x288: Push((int) 4)
0x289: @ rand(Stack[-3], Stack[-1])
0x28a: Pop(1)
0x28b: Push((int) 1)
0x28c: Pop(1); Push(Stack[-3] + Stack[-1]);
0x28d: @ Sleep(Stack[-1], Stack[-2])
0x28e: Pop(1)
0x28f: Pop(0); Push((bool) Stack[-1] == 0)
0x290: IF (Stack[-1] == 0) GOTO 0x292; Pop(1)

0x291: GOTO 0x2a1

0x292: GOTO 0x296

0x293: Push(Stack[-6])
0x294: IF (Stack[-1] == 0) GOTO 0x296; Pop(1)

0x295: GOTO 0x2a1

0x296: PushEmpty(bool)
0x297: Call2 0x2a4

0x298: Pop(0)
0x299: Pop(1); Push((bool) Stack[-1] == 0)
0x29a: IF (Stack[-1] == 0) GOTO 0x29c; Pop(1)

0x29b: GOTO 0x2a1

0x29c: @ ResetAAS()
0x29d: Pop(0)
0x29e: Push((int) 1)
0x29f: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x2a0: GOTO 0x263

0x2a1: @ ResetAAS()
0x2a2: Pop(0)
0x2a3: Return(); Pop(14)

0x2a4: Stack[-1] = (bool) 1
0x2a5: Return(); Pop(0)

0x2a6: @ StopAnimation()
0x2a7: Pop(0)
0x2a8: @ StopGroup0()
0x2a9: Pop(0)
0x2aa: Return(); Pop(0)

0x2ab: PushEmpty(cvector, cvector, cvector, int, object, cvector, bool, object, float, float, int, cvector, cvector, cvector, int, object, cvector, bool, object, float, float, int)
0x2ac: Stack[0 + Tasks[-1].StackPointer] = Stack[-23]
0x2ad: @ CanSee(Stack[-1], Stack[-23])
0x2ae: Pop(0)
0x2af: PushEmpty(bool, object)
0x2b0: Stack[-1] = Stack[-25]
0x2b1: Call2 0x52e

0x2b2: Pop(2)
0x2b3: PushEmpty(bool, object)
0x2b4: Stack[-1] = Stack[-25]
0x2b5: Call2 0x50c

0x2b6: Pop(1)
0x2b7: Pop(1); Push((bool) Stack[-1] == 0)
0x2b8: IF (Stack[-1] == 0) GOTO 0x2ba; Pop(1)

0x2b9: Return(); Pop(22)

0x2ba: @ Face(Stack[-23])
0x2bb: Pop(0)
0x2bc: PushEmpty(bool, object)
0x2bd: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2be: Call2 0x50c

0x2bf: Pop(1)
0x2c0: IF (Stack[-1] == 0) GOTO 0x366; Pop(1)

0x2c1: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == 0)
0x2c2: IF (Stack[-1] == 0) GOTO 0x2d2; Pop(1)

0x2c3: @ StopAsync()
0x2c4: Pop(0)
0x2c5: PushEmpty(object)
0x2c6: Push(-1, 1); TaskCall(5)
0x2c7: Call2 0x37a

0x2c8: Pop(-1, 1); TaskReturn
0x2c9: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x2ca: Pop(1)
0x2cb: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x2cc: IF (Stack[-1] == 0) GOTO 0x2ce; Pop(1)

0x2cd: GOTO 0x366

0x2ce: @ CanSee(Stack[-1], Stack[-0])
0x2cf: Pop(0)
0x2d0: @ Face(Stack[-0])
0x2d1: Pop(0)
0x2d2: PushEmpty(object)
0x2d3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2d4: Call2 0x655

0x2d5: Pop(1)
0x2d6: @ ReportAttack(Stack[-0])
0x2d7: Pop(0)
0x2d8: @ GetPosition(Stack[-11])
0x2d9: Pop(0)
0x2da: @@ GetPosition(Stack[-10])
0x2db: Pop(0)
0x2dc: Stack[-9] = Stack[-10] - Stack[-11]; Pop(0);
0x2dd: PushEmpty(int, float)
0x2de: Pop(0); Push(Stack[-11] | Stack[-11]);
0x2df: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x2e0: Call2 0x739

0x2e1: Stack[-10] = Stack[-2]
0x2e2: Pop(2)
0x2e3: Push("all")
0x2e4: Push("attack_begin")
0x2e5: Pop(1); Push(Stack[-1] + Stack[-10]);
0x2e6: @ PlayAnimation(Stack[-2], Stack[-1])
0x2e7: Pop(2)
0x2e8: @ WaitForAnimEnd()
0x2e9: Pop(0)
0x2ea: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x2eb: IF (Stack[-1] == 0) GOTO 0x2ed; Pop(1)

0x2ec: GOTO 0x366

0x2ed: Push("all")
0x2ee: Push("attack_end")
0x2ef: Pop(1); Push(Stack[-1] + Stack[-10]);
0x2f0: @ PlayAnimation(Stack[-2], Stack[-1])
0x2f1: Pop(2)
0x2f2: @ GetScene(Stack[-7])
0x2f3: Pop(0)
0x2f4: Push("attack")
0x2f5: Pop(1); Push(Stack[-1] + Stack[-9]);
0x2f6: @ GetGeometryLocator(Stack[-1], Stack[-6], Stack[-12], Stack[-7])
0x2f7: Pop(1)
0x2f8: Push("scripted")
0x2f9: Push(CVector(0.0, 0.0, 1.0))
0x2fa: Push("grenade.xml")
0x2fb: @ AddActorByType(Stack[-7], Stack[-3], Stack[-10], Stack[-14], Stack[-2], Stack[-1])
0x2fc: Pop(3)
0x2fd: Push("Owner")
0x2fe: PushEmpty(object)
0x2ff: Call2 0x608

0x300: Pop(0)
0x301: @@ SetScriptProperty(Stack[-2], Stack[-1])
0x302: Pop(2)
0x303: Push((int) 1)
0x304: Pop(1); Push((bool) Stack[-9] == Stack[-1])
0x305: IF (Stack[-1] == 0) GOTO 0x30b; Pop(1)

0x306: Push("StartVelocity")
0x307: Push(CVector(0.0, -500.0, 0.0))
0x308: @@ SetScriptProperty(Stack[-2], Stack[-1])
0x309: Pop(2)
0x30a: GOTO 0x33d

0x30b: Push((int) 1)
0x30c: Push(CvectorIndex(Stack[-7], 1))
0x30d: Push(CvectorIndex(Stack[-8], 1))
0x30e: Pop(2); Push(Stack[-2] * Stack[-1]);
0x30f: Pop(2); Push(Stack[-2] - Stack[-1]);
0x310: Push(CvectorIndex(Stack[-10], 0))
0x311: Push(CvectorIndex(Stack[-11], 0))
0x312: Pop(2); Push(Stack[-2] * Stack[-1]);
0x313: Push(CvectorIndex(Stack[-11], 2))
0x314: Push(CvectorIndex(Stack[-12], 2))
0x315: Pop(2); Push(Stack[-2] * Stack[-1]);
0x316: Pop(2); Push(Stack[-2] + Stack[-1]);
0x317: Pop(2); Push(Stack[-2] / Stack[-1]);
0x318: Stack[-4] = Sqrt(Stack[-1]); Pop(1);
0x319: Push(CvectorIndex(Stack[-6], 0))
0x31a: Push(CvectorIndex(Stack[-10], 0))
0x31b: Stack[-2] = Stack[-1] * Stack[-5]; Pop(1);
0x31c: CvectorIndex(Stack[-7], 0) = Stack[-1];
0x31d: Push(CvectorIndex(Stack[-6], 2))
0x31e: Push(CvectorIndex(Stack[-10], 2))
0x31f: Stack[-2] = Stack[-1] * Stack[-5]; Pop(1);
0x320: CvectorIndex(Stack[-7], 2) = Stack[-1];
0x321: @@ GetPosition(Stack[-10])
0x322: Pop(0)
0x323: PushEmpty(float, cvector, cvector, cvector)
0x324: Stack[-3] = Stack[-15]
0x325: Stack[-2] = Stack[-14]
0x326: Stack[-1] = Stack[-10]
0x327: Call2 0x70d

0x328: Stack[-6] = Stack[-4]
0x329: Pop(4)
0x32a: Push((int) 0)
0x32b: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x32c: IF (Stack[-1] == 0) GOTO 0x333; Pop(1)

0x32d: PushEmpty(float, int)
0x32e: Stack[-1] = Stack[-10]
0x32f: Call2 0x747

0x330: Stack[-4] = Stack[-2]
0x331: Pop(2)
0x332: GOTO 0x339

0x333: PushEmpty(float, int, float)
0x334: Stack[-2] = Stack[-11]
0x335: Stack[-1] = Stack[-5]
0x336: Call2 0x74f

0x337: Stack[-5] = Stack[-3]
0x338: Pop(3)
0x339: Push("StartVelocity")
0x33a: Pop(0); Push(Stack[-7] * Stack[-3]);
0x33b: @@ SetScriptProperty(Stack[-2], Stack[-1])
0x33c: Pop(2)
0x33d: Push("DamageAmount")
0x33e: Push((float)0.8)
0x33f: @@ SetScriptProperty(Stack[-2], Stack[-1])
0x340: Pop(2)
0x341: Push("DamageType")
0x342: Push((int) 2)
0x343: @@ SetScriptProperty(Stack[-2], Stack[-1])
0x344: Pop(2)
0x345: @ WaitForAnimEnd()
0x346: Pop(0)
0x347: Push((int) 1)
0x348: Pop(1); Push((bool) Stack[-9] == Stack[-1])
0x349: IF (Stack[-1] == 0) GOTO 0x363; Pop(1)

0x34a: Push((int) 2)
0x34b: @ irand(Stack[-2], Stack[-1])
0x34c: Pop(1)
0x34d: Push("scream")
0x34e: Push((int) 1)
0x34f: Pop(1); Push(Stack[-3] + Stack[-1]);
0x350: Pop(2); Push(Stack[-2] + Stack[-1]);
0x351: @ Speak(Stack[-1])
0x352: Pop(1)
0x353: PushEmpty(object)
0x354: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x355: Call2 0x5ba

0x356: Pop(1)
0x357: Push("all")
0x358: Push("scream")
0x359: Push((int) 1)
0x35a: Pop(1); Push(Stack[-4] + Stack[-1]);
0x35b: Pop(2); Push(Stack[-2] + Stack[-1]);
0x35c: @ PlayAnimation(Stack[-2], Stack[-1])
0x35d: Pop(2)
0x35e: @ WaitForAnimEnd()
0x35f: Pop(0)
0x360: Push("head")
0x361: @ UnlookAsync(Stack[-1])
0x362: Pop(1)
0x363: Stack[-4] = 0
0x364: Stack[-7] = 0
0x365: GOTO 0x2bc

0x366: @ StopAsync()
0x367: Pop(0)
0x368: Return(); Pop(22)

0x369: PushEmpty()
0x36a: Pop(0); Push((bool) Stack[-1] == Stack[0 + Tasks[-1].StackPointer])
0x36b: IF (Stack[-1] == 0) GOTO 0x36d; Pop(1)

0x36c: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x36d: Return(); Pop(0)

0x36e: PushEmpty()
0x36f: Pop(0); Push((bool) Stack[-1] == Stack[0 + Tasks[-1].StackPointer])
0x370: IF (Stack[-1] == 0) GOTO 0x372; Pop(1)

0x371: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x372: Return(); Pop(0)

0x373: PushEmpty()
0x374: PushEmpty(bool, object, object)
0x375: Stack[-2] = Stack[-6]
0x376: Stack[-1] = Stack[-5]
0x377: Call2 0x7c6

0x378: Pop(3)
0x379: Return(); Pop(0)

0x37a: Push((int) 5)
0x37b: @ Sleep(Stack[-1])
0x37c: Pop(1)
0x37d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x37e: Return(); Pop(0)

0x37f: PushEmpty()
0x380: PushEmpty(object)
0x381: Stack[-1] = Stack[-2]
0x382: Call2 0x39c

0x383: Pop(1)
0x384: Return(); Pop(0)

0x385: PushEmpty()
0x386: Pop(0); Push((bool) Stack[-1] == Stack[0 + Tasks[-1].StackPointer])
0x387: IF (Stack[-1] == 0) GOTO 0x389; Pop(1)

0x388: Stack[0 + Tasks[-1].StackPointer] = 0
0x389: Return(); Pop(0)

0x38a: PushEmpty()
0x38b: PushEmpty(object)
0x38c: Stack[-1] = Stack[-2]
0x38d: Call2 0x39c

0x38e: Pop(1)
0x38f: Return(); Pop(0)

0x390: PushEmpty()
0x391: PushEmpty(bool, object, object)
0x392: Stack[-2] = Stack[-6]
0x393: Stack[-1] = Stack[-5]
0x394: Call2 0x7c6

0x395: Pop(2)
0x396: IF (Stack[-1] == 0) GOTO 0x39b; Pop(1)

0x397: PushEmpty(object)
0x398: Stack[-1] = Stack[-4]
0x399: Call2 0x38a

0x39a: Pop(1)
0x39b: Return(); Pop(0)

0x39c: PushEmpty()
0x39d: PushEmpty(bool)
0x39e: Stack[-1] = (bool) 0
0x39f: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x3a0: IF (Stack[-1] == 0) GOTO 0x3a7; Pop(1)

0x3a1: PushEmpty(bool, object)
0x3a2: Stack[-1] = Stack[-4]
0x3a3: Call2 0x7ea

0x3a4: Pop(1)
0x3a5: IF (Stack[-1] == 0) GOTO 0x3a7; Pop(1)

0x3a6: Stack[-1] = (bool) 1
0x3a7: IF (Stack[-1] == 0) GOTO 0x3ab; Pop(1)

0x3a8: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x3a9: @ StopGroup0()
0x3aa: Pop(0)
0x3ab: Return(); Pop(0)

0x3ac: PushEmpty(bool, int, bool, int)
0x3ad: @ GetSeeThreshold(Stack[-0])
0x3ae: Pop(0)
0x3af: @ GetSeeFOV(Stack[-1])
0x3b0: Pop(0)
0x3b1: Push((float)1.5)
0x3b2: Pop(1); Push(Stack[0 + StackPtr] / Stack[-1]);
0x3b3: @ SetSeeThreshold(Stack[-1])
0x3b4: Pop(1)
0x3b5: Stack[2 + Tasks[-1].StackPointer] = Stack[-5]
0x3b6: PushEmpty(object)
0x3b7: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x3b8: Call2 0x655

0x3b9: Pop(1)
0x3ba: Stack[-1] = (int) 0
0x3bb: Push((int) 3)
0x3bc: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x3bd: IF (Stack[-1] == 0) GOTO 0x3da; Pop(1)

0x3be: Push((float)1.8)
0x3bf: Pop(1); Push(Stack[1 + StackPtr] * Stack[-1]);
0x3c0: @ SetSeeFOV(Stack[-1])
0x3c1: Pop(1)
0x3c2: Push("all")
0x3c3: Push("hunt")
0x3c4: @ PlayAnimation(Stack[-2], Stack[-1])
0x3c5: Pop(2)
0x3c6: @ WaitForAnimEnd(Stack[-2])
0x3c7: Pop(0)
0x3c8: @ SetSeeFOV(Stack[-1])
0x3c9: Pop(0)
0x3ca: Pop(0); Push((bool) Stack[-2] == 0)
0x3cb: IF (Stack[-1] == 0) GOTO 0x3cd; Pop(1)

0x3cc: GOTO 0x3da

0x3cd: Push((int) 2)
0x3ce: @ Sleep(Stack[-1], Stack[-3])
0x3cf: Pop(1)
0x3d0: Pop(0); Push((bool) Stack[-2] == 0)
0x3d1: IF (Stack[-1] == 0) GOTO 0x3d3; Pop(1)

0x3d2: GOTO 0x3da

0x3d3: PushEmpty(object)
0x3d4: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x3d5: Call2 0x655

0x3d6: Pop(1)
0x3d7: Push((int) 1)
0x3d8: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x3d9: GOTO 0x3bb

0x3da: PushEmpty()
0x3db: Call2 0x41c

0x3dc: Pop(0)
0x3dd: Push(Stack[-2])
0x3de: IF (Stack[-1] == 0) GOTO 0x3e0; Pop(1)

0x3df: Stack[2 + Tasks[-1].StackPointer] = 0
0x3e0: Stack[-6] = Stack[2 + Tasks[-1].StackPointer]
0x3e1: Return(); Pop(4)

0x3e2: PushEmpty()
0x3e3: PushEmpty(bool, object)
0x3e4: Stack[-1] = Stack[-3]
0x3e5: Call2 0x76c

0x3e6: Pop(1)
0x3e7: IF (Stack[-1] == 0) GOTO 0x3ef; Pop(1)

0x3e8: PushEmpty()
0x3e9: Call2 0x41c

0x3ea: Pop(0)
0x3eb: PushEmpty(object)
0x3ec: Stack[-1] = Stack[-2]
0x3ed: Call2 0x773

0x3ee: Pop(1)
0x3ef: Return(); Pop(0)

0x3f0: PushEmpty(bool, bool)
0x3f1: @ IsPlayerActor(Stack[-2], Stack[-1])
0x3f2: Pop(0)
0x3f3: Push(Stack[-1])
0x3f4: IF (Stack[-1] == 0) GOTO 0x3f6; Pop(1)

0x3f5: Return(); Pop(2)

0x3f6: PushEmpty(bool, object)
0x3f7: Stack[-1] = Stack[-5]
0x3f8: Call2 0x7ea

0x3f9: Pop(1)
0x3fa: Pop(1); Push((bool) Stack[-1] == 0)
0x3fb: IF (Stack[-1] == 0) GOTO 0x3fd; Pop(1)

0x3fc: Return(); Pop(2)

0x3fd: @ IsPlayerActor(Stack[-3], Stack[-1])
0x3fe: Pop(0)
0x3ff: Push(Stack[-1])
0x400: IF (Stack[-1] == 0) GOTO 0x406; Pop(1)

0x401: Stack[2 + Tasks[-1].StackPointer] = Stack[-3]
0x402: @ Stop()
0x403: Pop(0)
0x404: @ StopGroup0()
0x405: Pop(0)
0x406: Return(); Pop(2)

0x407: PushEmpty()
0x408: PushEmpty()
0x409: Call2 0x41c

0x40a: Pop(0)
0x40b: PushEmpty(object)
0x40c: Stack[-1] = Stack[-2]
0x40d: Call2 0x77d

0x40e: Pop(1)
0x40f: Return(); Pop(0)

0x410: PushEmpty()
0x411: PushEmpty(bool, object, object)
0x412: Stack[-2] = Stack[-6]
0x413: Stack[-1] = Stack[-5]
0x414: Call2 0x7c6

0x415: Pop(2)
0x416: IF (Stack[-1] == 0) GOTO 0x41b; Pop(1)

0x417: PushEmpty(object)
0x418: Stack[-1] = Stack[-4]
0x419: Call2 0x407

0x41a: Pop(1)
0x41b: Return(); Pop(0)

0x41c: @ SetSeeThreshold(Stack[-0])
0x41d: Pop(0)
0x41e: @ SetSeeFOV(Stack[-1])
0x41f: Pop(0)
0x420: @ Stop()
0x421: Pop(0)
0x422: @ StopGroup0()
0x423: Pop(0)
0x424: Return(); Pop(0)

0x425: PushEmpty()
0x426: PushEmpty()
0x427: Call2 0x41c

0x428: Pop(0)
0x429: PushEmpty(object)
0x42a: Stack[-1] = Stack[-2]
0x42b: Call2 0x7c0

0x42c: Pop(1)
0x42d: Return(); Pop(0)

0x42e: Push((int) 91)
0x42f: Push((int) 20)
0x430: @ SetTimer(Stack[-2], Stack[-1])
0x431: Pop(2)
0x432: PushEmpty()
0x433: Call2 0x493

0x434: Pop(0)
0x435: Return(); Pop(0)

0x436: PushEmpty()
0x437: PushEmpty(bool, object)
0x438: Stack[-1] = Stack[-3]
0x439: Call2 0x76c

0x43a: Pop(1)
0x43b: IF (Stack[-1] == 0) GOTO 0x443; Pop(1)

0x43c: PushEmpty()
0x43d: Call2 0x467

0x43e: Pop(0)
0x43f: PushEmpty(object)
0x440: Stack[-1] = Stack[-2]
0x441: Call2 0x773

0x442: Pop(1)
0x443: Return(); Pop(0)

0x444: PushEmpty()
0x445: PushEmpty(bool, object)
0x446: Stack[-1] = Stack[-3]
0x447: Call2 0x75d

0x448: Pop(1)
0x449: IF (Stack[-1] == 0) GOTO 0x451; Pop(1)

0x44a: PushEmpty()
0x44b: Call2 0x467

0x44c: Pop(0)
0x44d: PushEmpty(object)
0x44e: Stack[-1] = Stack[-2]
0x44f: Call2 0x764

0x450: Pop(1)
0x451: Return(); Pop(0)

0x452: PushEmpty()
0x453: PushEmpty()
0x454: Call2 0x467

0x455: Pop(0)
0x456: PushEmpty(object)
0x457: Stack[-1] = Stack[-2]
0x458: Call2 0x77d

0x459: Pop(1)
0x45a: Return(); Pop(0)

0x45b: PushEmpty()
0x45c: PushEmpty(bool, object, object)
0x45d: Stack[-2] = Stack[-6]
0x45e: Stack[-1] = Stack[-5]
0x45f: Call2 0x7c6

0x460: Pop(2)
0x461: IF (Stack[-1] == 0) GOTO 0x466; Pop(1)

0x462: PushEmpty(object)
0x463: Stack[-1] = Stack[-4]
0x464: Call2 0x452

0x465: Pop(1)
0x466: Return(); Pop(0)

0x467: Push((int) 91)
0x468: @ KillTimer(Stack[-1])
0x469: Pop(1)
0x46a: @ Stop()
0x46b: Pop(0)
0x46c: PushEmpty()
0x46d: Call2 0x4a8

0x46e: Pop(0)
0x46f: Return(); Pop(0)

0x470: PushEmpty()
0x471: PushEmpty()
0x472: Call2 0x467

0x473: Pop(0)
0x474: PushEmpty(object)
0x475: Stack[-1] = Stack[-2]
0x476: Call2 0x7c0

0x477: Pop(1)
0x478: Return(); Pop(0)

0x479: PushEmpty()
0x47a: Push((int) 91)
0x47b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x47c: IF (Stack[-1] == 0) GOTO 0x480; Pop(1)

0x47d: PushEmpty()
0x47e: Call2 0x467

0x47f: Pop(0)
0x480: Return(); Pop(0)

0x481: PushEmpty(float, bool, float, bool)
0x482: @ rand(Stack[-2])
0x483: Pop(0)
0x484: Push((float)0.3)
0x485: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x486: IF (Stack[-1] == 0) GOTO 0x491; Pop(1)

0x487: Push("all")
0x488: Push("hunt")
0x489: @ PlayAnimation(Stack[-2], Stack[-1])
0x48a: Pop(2)
0x48b: @ WaitForAnimEnd(Stack[-1])
0x48c: Pop(0)
0x48d: Pop(0); Push((bool) Stack[-1] == 0)
0x48e: IF (Stack[-1] == 0) GOTO 0x491; Pop(1)

0x48f: Stack[-5] = (bool) 1
0x490: Return(); Pop(4)

0x491: Stack[-5] = (bool) 0
0x492: Return(); Pop(4)

0x493: PushEmpty(float, float, bool, float, float, bool)
0x494: @ RandVec2D(Stack[-3], Stack[-2])
0x495: Pop(0)
0x496: @ Rotate(Stack[-3], Stack[-2], Stack[-1])
0x497: Pop(0)
0x498: Pop(0); Push((bool) Stack[-1] == 0)
0x499: IF (Stack[-1] == 0) GOTO 0x49b; Pop(1)

0x49a: GOTO 0x4a7

0x49b: PushEmpty(bool)
0x49c: Call2 0x481

0x49d: Pop(0)
0x49e: IF (Stack[-1] == 0) GOTO 0x4a0; Pop(1)

0x49f: GOTO 0x4a7

0x4a0: Push((int) 5)
0x4a1: @ Sleep(Stack[-1], Stack[-2])
0x4a2: Pop(1)
0x4a3: Pop(0); Push((bool) Stack[-1] == 0)
0x4a4: IF (Stack[-1] == 0) GOTO 0x4a6; Pop(1)

0x4a5: GOTO 0x4a7

0x4a6: GOTO 0x494

0x4a7: Return(); Pop(6)

0x4a8: @ Stop()
0x4a9: Pop(0)
0x4aa: @ StopGroup0()
0x4ab: Pop(0)
0x4ac: Return(); Pop(0)

0x4ad: PushEmpty(cvector, cvector, cvector, cvector)
0x4ae: @ GetPosition(Stack[-2])
0x4af: Pop(0)
0x4b0: @@ GetPosition(Stack[-1])
0x4b1: Pop(0)
0x4b2: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x4b3: Return(); Pop(4)

0x4b4: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x4b5: @ GetPosition(Stack[-3])
0x4b6: Pop(0)
0x4b7: @@ GetPosition(Stack[-2])
0x4b8: Pop(0)
0x4b9: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x4ba: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x4bb: Return(); Pop(6)

0x4bc: PushEmpty(bool, bool)
0x4bd: @ IsPlayerActor(Stack[-3], Stack[-1])
0x4be: Pop(0)
0x4bf: Stack[-4] = Stack[-1]
0x4c0: Return(); Pop(2)

0x4c1: PushEmpty(bool, bool)
0x4c2: Push("HasProperty")
0x4c3: Push((int) 2)
0x4c4: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x4c5: Pop(1); Push((bool) Stack[-1] == 0)
0x4c6: IF (Stack[-1] == 0) GOTO 0x4c9; Pop(1)

0x4c7: Stack[-5] = (bool) 0
0x4c8: Return(); Pop(2)

0x4c9: @@ HasProperty(Stack[-3], Stack[-1])
0x4ca: Pop(0)
0x4cb: Stack[-5] = Stack[-1]
0x4cc: Return(); Pop(2)

0x4cd: PushEmpty(float, float)
0x4ce: PushEmpty(bool, object, string)
0x4cf: Stack[-2] = Stack[-10]
0x4d0: Stack[-1] = Stack[-9]
0x4d1: Call2 0x4c1

0x4d2: Pop(2)
0x4d3: Pop(1); Push((bool) Stack[-1] == 0)
0x4d4: IF (Stack[-1] == 0) GOTO 0x4d7; Pop(1)

0x4d5: Stack[-8] = (bool) 0
0x4d6: Return(); Pop(2)

0x4d7: @@ GetProperty(Stack[-6], Stack[-1])
0x4d8: Pop(0)
0x4d9: PushEmpty(float, float, float, float)
0x4da: Stack[-3] = Stack[-5] + Stack[-9]; Pop(0);
0x4db: Stack[-2] = Stack[-8]
0x4dc: Stack[-1] = Stack[-7]
0x4dd: Call2 0x618

0x4de: Pop(3)
0x4df: @@ SetProperty(Stack[-7], Stack[-1])
0x4e0: Pop(1)
0x4e1: Stack[-8] = (bool) 1
0x4e2: Return(); Pop(2)

0x4e3: PushEmpty(bool, bool)
0x4e4: @@ IsDead(Stack[-1])
0x4e5: Pop(0)
0x4e6: Stack[-4] = Stack[-1]
0x4e7: Return(); Pop(2)

0x4e8: PushEmpty(object, object, object, object)
0x4e9: Pop(0); Push((bool) Stack[-5] == 0)
0x4ea: IF (Stack[-1] == 0) GOTO 0x4ed; Pop(1)

0x4eb: Stack[-6] = (bool) 0
0x4ec: Return(); Pop(4)

0x4ed: PushEmpty(bool)
0x4ee: Stack[-1] = (bool) 0
0x4ef: Push("IsDead")
0x4f0: Push((int) 1)
0x4f1: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x4f2: IF (Stack[-1] == 0) GOTO 0x4f9; Pop(1)

0x4f3: PushEmpty(bool, object)
0x4f4: Stack[-1] = Stack[-8]
0x4f5: Call2 0x4e3

0x4f6: Pop(1)
0x4f7: IF (Stack[-1] == 0) GOTO 0x4f9; Pop(1)

0x4f8: Stack[-1] = (bool) 1
0x4f9: IF (Stack[-1] == 0) GOTO 0x4fc; Pop(1)

0x4fa: Stack[-6] = (bool) 0
0x4fb: Return(); Pop(4)

0x4fc: @ GetScene(Stack[-2])
0x4fd: Pop(0)
0x4fe: Pop(0); Push((bool) Stack[-2] == 0)
0x4ff: IF (Stack[-1] == 0) GOTO 0x502; Pop(1)

0x500: Stack[-6] = (bool) 0
0x501: Return(); Pop(4)

0x502: @@ GetScene(Stack[-1])
0x503: Pop(0)
0x504: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x505: IF (Stack[-1] == 0) GOTO 0x508; Pop(1)

0x506: Stack[-6] = (bool) 0
0x507: Return(); Pop(4)

0x508: Stack[-6] = (bool) 1
0x509: Return(); Pop(4)

0x50a: Stack[-1] = 0
0x50b: Stack[-2] = 0
0x50c: PushEmpty(int, int)
0x50d: PushEmpty(bool, object)
0x50e: Stack[-1] = Stack[-5]
0x50f: Call2 0x4e8

0x510: Pop(1)
0x511: Pop(1); Push((bool) Stack[-1] == 0)
0x512: IF (Stack[-1] == 0) GOTO 0x515; Pop(1)

0x513: Stack[-4] = (bool) 0
0x514: Return(); Pop(2)

0x515: PushEmpty(bool, object, string)
0x516: Stack[-2] = Stack[-6]
0x517: Stack[-1] = "noaccess"
0x518: Call2 0x4c1

0x519: Pop(2)
0x51a: Pop(1); Push((bool) Stack[-1] == 0)
0x51b: IF (Stack[-1] == 0) GOTO 0x51e; Pop(1)

0x51c: Stack[-4] = (bool) 1
0x51d: Return(); Pop(2)

0x51e: Push("noaccess")
0x51f: @@ GetProperty(Stack[-1], Stack[-2])
0x520: Pop(1)
0x521: Push((int) 0)
0x522: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x523: Return(); Pop(2)

0x524: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x525: @ GetPosition(Stack[-3])
0x526: Pop(0)
0x527: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x528: Push(CvectorIndex(Stack[-2], 0))
0x529: Push(CvectorIndex(Stack[-3], 2))
0x52a: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x52b: Pop(2)
0x52c: Stack[-8] = Stack[-1]
0x52d: Return(); Pop(6)

0x52e: PushEmpty(cvector, cvector)
0x52f: @@ GetPosition(Stack[-1])
0x530: Pop(0)
0x531: PushEmpty(bool, cvector)
0x532: Stack[-1] = Stack[-3]
0x533: Call2 0x524

0x534: Stack[-6] = Stack[-2]
0x535: Pop(2)
0x536: Return(); Pop(2)

0x537: PushEmpty(bool, int, cvector, cvector, cvector, cvector, string, bool, int, cvector, cvector, cvector, cvector, string)
0x538: Pop(0); Push((bool) Stack[-15] == 0)
0x539: IF (Stack[-1] == 0) GOTO 0x53b; Pop(1)

0x53a: Return(); Pop(14)

0x53b: @ IsDead(Stack[-7])
0x53c: Pop(0)
0x53d: Push(Stack[-7])
0x53e: IF (Stack[-1] == 0) GOTO 0x540; Pop(1)

0x53f: Return(); Pop(14)

0x540: @ GetSecondaryAnimationType(Stack[-6])
0x541: Pop(0)
0x542: Push((int) 0)
0x543: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x544: IF (Stack[-1] == 0) GOTO 0x546; Pop(1)

0x545: Return(); Pop(14)

0x546: @@ GetPosition(Stack[-5])
0x547: Pop(0)
0x548: @ GetPosition(Stack[-4])
0x549: Pop(0)
0x54a: @ GetDirection(Stack[-3])
0x54b: Pop(0)
0x54c: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0x54d: Push(CvectorIndex(Stack[-2], 0))
0x54e: Push(CvectorIndex(Stack[-4], 0))
0x54f: Pop(2); Push(Stack[-2] * Stack[-1]);
0x550: Push(CvectorIndex(Stack[-3], 2))
0x551: Push(CvectorIndex(Stack[-5], 2))
0x552: Pop(2); Push(Stack[-2] * Stack[-1]);
0x553: Pop(2); Push(Stack[-2] + Stack[-1]);
0x554: Push((int) 0)
0x555: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x556: IF (Stack[-1] == 0) GOTO 0x559; Pop(1)

0x557: Stack[-1] = "fhit"
0x558: GOTO 0x55a

0x559: Stack[-1] = "bhit"
0x55a: Push("hit_react")
0x55b: Push("1")
0x55c: Pop(1); Push(Stack[-3] + Stack[-1]);
0x55d: Push("2")
0x55e: Pop(1); Push(Stack[-4] + Stack[-1]);
0x55f: Push((int) -10)
0x560: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x561: Pop(4)
0x562: Return(); Pop(14)

0x563: PushEmpty(cvector, object, int, bool, cvector, cvector, int, int, cvector, cvector, object, int, bool, cvector, cvector, int, int, cvector)
0x564: PushEmpty(bool)
0x565: Stack[-1] = (bool) 0
0x566: PushEmpty(bool)
0x567: Stack[-1] = (bool) 0
0x568: Push(Stack[-23])
0x569: IF (Stack[-1] == 0) GOTO 0x56e; Pop(1)

0x56a: Push((int) 4)
0x56b: Pop(1); Push((bool) Stack[-23] != Stack[-1])
0x56c: IF (Stack[-1] == 0) GOTO 0x56e; Pop(1)

0x56d: Stack[-1] = (bool) 1
0x56e: IF (Stack[-1] == 0) GOTO 0x573; Pop(1)

0x56f: Push((int) 5)
0x570: Pop(1); Push((bool) Stack[-22] != Stack[-1])
0x571: IF (Stack[-1] == 0) GOTO 0x573; Pop(1)

0x572: Stack[-1] = (bool) 1
0x573: IF (Stack[-1] == 0) GOTO 0x5a2; Pop(1)

0x574: PushEmpty(cvector, cvector)
0x575: PushEmpty(cvector, object)
0x576: Stack[-1] = Stack[-25]
0x577: Call2 0x4ad

0x578: Stack[-3] = Stack[-2]
0x579: Pop(2)
0x57a: Call2 0x60e

0x57b: Stack[-11] = Stack[-2]
0x57c: Pop(2)
0x57d: @ CreateVectorVector(Stack[-8])
0x57e: Pop(0)
0x57f: Stack[-7] = (int) 1
0x580: Push("hit")
0x581: Pop(1); Push(Stack[-1] + Stack[-8]);
0x582: @ GetGeometryLocator(Stack[-1], Stack[-7], Stack[-6], Stack[-5])
0x583: Pop(1)
0x584: Pop(0); Push((bool) Stack[-6] == 0)
0x585: IF (Stack[-1] == 0) GOTO 0x587; Pop(1)

0x586: GOTO 0x590

0x587: Pop(0); Push(Stack[-4] | Stack[-9]);
0x588: Push((float)0.70711)
0x589: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x58a: IF (Stack[-1] == 0) GOTO 0x58d; Pop(1)

0x58b: @@ add(Stack[-5])
0x58c: Pop(0)
0x58d: Push((int) 1)
0x58e: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x58f: GOTO 0x580

0x590: @@ size(Stack[-3])
0x591: Pop(0)
0x592: Push(Stack[-3])
0x593: IF (Stack[-1] == 0) GOTO 0x5a1; Pop(1)

0x594: @ irand(Stack[-2], Stack[-3])
0x595: Pop(0)
0x596: @@ get(Stack[-1], Stack[-2])
0x597: Pop(0)
0x598: PushEmpty(object, int, float, cvector, cvector)
0x599: Stack[-5] = Stack[-26]
0x59a: Stack[-4] = Stack[-25]
0x59b: Stack[-3] = Stack[-24]
0x59c: Stack[-2] = Stack[-6]
0x59d: Stack[-1] = -Stack[-14]; Pop(0);
0x59e: Call2 0x5a7

0x59f: Pop(5)
0x5a0: Return(); Pop(18)

0x5a1: Stack[-8] = 0
0x5a2: PushEmpty(object)
0x5a3: Stack[-1] = Stack[-22]
0x5a4: Call2 0x537

0x5a5: Pop(1)
0x5a6: Return(); Pop(18)

0x5a7: PushEmpty(object, object, object, object)
0x5a8: @ GetScene(Stack[-2])
0x5a9: Pop(0)
0x5aa: Push("scripted")
0x5ab: Push("blood_dir.xml")
0x5ac: @ AddActorByType(Stack[-3], Stack[-2], Stack[-4], Stack[-8], Stack[-7], Stack[-1])
0x5ad: Pop(2)
0x5ae: PushEmpty(object)
0x5af: Stack[-1] = Stack[-10]
0x5b0: Call2 0x537

0x5b1: Pop(1)
0x5b2: Return(); Pop(4)

0x5b3: Stack[-1] = 0
0x5b4: Stack[-2] = 0
0x5b5: PushEmpty(bool, bool)
0x5b6: @ IsLoaded(Stack[-1])
0x5b7: Pop(0)
0x5b8: Stack[-3] = Stack[-1]
0x5b9: Return(); Pop(2)

0x5ba: PushEmpty(float, cvector, float, cvector)
0x5bb: @@ GetEyesHeight(Stack[-2])
0x5bc: Pop(0)
0x5bd: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x5be: Push(CvectorIndex(Stack[-1], 1))
0x5bf: Stack[-1] = Stack[-3]
0x5c0: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x5c1: Push("head")
0x5c2: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x5c3: Pop(1)
0x5c4: Return(); Pop(4)

0x5c5: PushEmpty(bool, bool)
0x5c6: PushEmpty(bool, int, int)
0x5c7: Stack[-2] = Stack[-7]
0x5c8: Stack[-1] = Stack[-6]
0x5c9: Call2 0x623

0x5ca: Pop(2)
0x5cb: IF (Stack[-1] == 0) GOTO 0x5cf; Pop(1)

0x5cc: Push((int) 0)
0x5cd: @ AddItem(Stack[-2], Stack[-6], Stack[-1])
0x5ce: Pop(1)
0x5cf: Return(); Pop(2)

0x5d0: PushEmpty(int, bool, int, bool)
0x5d1: PushEmpty(bool, int, int)
0x5d2: Stack[-2] = Stack[-10]
0x5d3: Stack[-1] = Stack[-9]
0x5d4: Call2 0x623

0x5d5: Pop(2)
0x5d6: IF (Stack[-1] == 0) GOTO 0x5de; Pop(1)

0x5d7: @ irand(Stack[-2], Stack[-5])
0x5d8: Pop(0)
0x5d9: Push((int) 0)
0x5da: Push((int) 1)
0x5db: Pop(1); Push(Stack[-4] + Stack[-1]);
0x5dc: @ AddItem(Stack[-3], Stack[-10], Stack[-2], Stack[-1])
0x5dd: Pop(2)
0x5de: Return(); Pop(4)

0x5df: PushEmpty(bool, int, bool, int, bool, float, cvector, cvector, bool, int, bool, int, bool, float, cvector, cvector)
0x5e0: @ IsExisting3DSound(Stack[-8], Stack[-17])
0x5e1: Pop(0)
0x5e2: Pop(0); Push((bool) Stack[-8] == 0)
0x5e3: IF (Stack[-1] == 0) GOTO 0x5f8; Pop(1)

0x5e4: Stack[-7] = (int) 0
0x5e5: Push((int) 1)
0x5e6: Pop(1); Push(Stack[-8] + Stack[-1]);
0x5e7: Pop(1); Push(Stack[-18] + Stack[-1]);
0x5e8: @ IsExisting3DSound(Stack[-7], Stack[-1])
0x5e9: Pop(1)
0x5ea: Pop(0); Push((bool) Stack[-6] == 0)
0x5eb: IF (Stack[-1] == 0) GOTO 0x5ed; Pop(1)

0x5ec: GOTO 0x5f0

0x5ed: Push((int) 1)
0x5ee: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x5ef: GOTO 0x5e5

0x5f0: Pop(0); Push((bool) Stack[-7] == 0)
0x5f1: IF (Stack[-1] == 0) GOTO 0x5f3; Pop(1)

0x5f2: Return(); Pop(16)

0x5f3: @ irand(Stack[-5], Stack[-7])
0x5f4: Pop(0)
0x5f5: Push((int) 1)
0x5f6: Pop(1); Push(Stack[-6] + Stack[-1]);
0x5f7: Stack[-18] = Stack[-18] + Stack[-1]; Pop(1);
0x5f8: @ Is3DSoundLoaded(Stack[-4], Stack[-17])
0x5f9: Pop(0)
0x5fa: Push(Stack[-4])
0x5fb: IF (Stack[-1] == 0) GOTO 0x607; Pop(1)

0x5fc: @ GetEyesHeight(Stack[-3])
0x5fd: Pop(0)
0x5fe: @ GetDirection(Stack[-2])
0x5ff: Pop(0)
0x600: Push((int) 50)
0x601: Stack[-2] = Stack[-3] * Stack[-1]; Pop(1);
0x602: Push(CvectorIndex(Stack[-1], 1))
0x603: Stack[-1] = Stack[-1] + Stack[-4]; Pop(0);
0x604: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x605: @ PlayGlobalSound(Stack[-17], Stack[-1])
0x606: Pop(0)
0x607: Return(); Pop(16)

0x608: PushEmpty(object, object)
0x609: @ self(Stack[-1])
0x60a: Pop(0)
0x60b: Stack[-3] = Stack[-1]
0x60c: Return(); Pop(2)

0x60d: Stack[-1] = 0
0x60e: PushEmpty(float, float)
0x60f: Pop(0); Push(Stack[-3] | Stack[-3]);
0x610: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x611: Push((float)0.0)
0x612: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x613: IF (Stack[-1] == 0) GOTO 0x616; Pop(1)

0x614: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x615: Return(); Pop(2)

0x616: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x617: Return(); Pop(2)

0x618: PushEmpty()
0x619: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x61a: IF (Stack[-1] == 0) GOTO 0x61d; Pop(1)

0x61b: Stack[-4] = Stack[-2]
0x61c: Return(); Pop(0)

0x61d: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x61e: IF (Stack[-1] == 0) GOTO 0x621; Pop(1)

0x61f: Stack[-4] = Stack[-1]
0x620: Return(); Pop(0)

0x621: Stack[-4] = Stack[-3]
0x622: Return(); Pop(0)

0x623: PushEmpty(int, int)
0x624: @ irand(Stack[-1], Stack[-3])
0x625: Pop(0)
0x626: Stack[-5] = Stack[-1] < Stack[-4]; Pop(0);
0x627: Return(); Pop(2)

0x628: PushEmpty()
0x629: Pop(0); Push((bool) Stack[-2] == 0)
0x62a: IF (Stack[-1] == 0) GOTO 0x62d; Pop(1)

0x62b: Stack[-3] = (bool) 0
0x62c: Return(); Pop(0)

0x62d: Push((int) 0)
0x62e: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x62f: IF (Stack[-1] == 0) GOTO 0x634; Pop(1)

0x630: Push((int) 8)
0x631: @ SendWorldWndMessage(Stack[-1])
0x632: Pop(1)
0x633: GOTO 0x63d

0x634: Push((int) 0)
0x635: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x636: IF (Stack[-1] == 0) GOTO 0x63b; Pop(1)

0x637: Push((int) 9)
0x638: @ SendWorldWndMessage(Stack[-1])
0x639: Pop(1)
0x63a: GOTO 0x63d

0x63b: Stack[-3] = (bool) 0
0x63c: Return(); Pop(0)

0x63d: PushEmpty(float)
0x63e: Stack[-1] = Stack[-2]
0x63f: Call2 0x64b

0x640: Pop(1)
0x641: PushEmpty(bool, object, string, float, float, float)
0x642: Stack[-5] = Stack[-8]
0x643: Stack[-4] = "reputation"
0x644: Stack[-3] = Stack[-7]
0x645: Stack[-2] = (int) 0
0x646: Stack[-1] = (int) 1
0x647: Call2 0x4cd

0x648: Pop(6)
0x649: Stack[-3] = (bool) 1
0x64a: Return(); Pop(0)

0x64b: PushEmpty(object, object)
0x64c: @ CreateFloatVector(Stack[-1])
0x64d: Pop(0)
0x64e: @@ add(Stack[-3])
0x64f: Pop(0)
0x650: Push((int) 16)
0x651: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x652: Pop(1)
0x653: Return(); Pop(2)

0x654: Stack[-1] = 0
0x655: PushEmpty(bool, bool)
0x656: @ IsPlayerActor(Stack[-3], Stack[-1])
0x657: Pop(0)
0x658: Push(Stack[-1])
0x659: IF (Stack[-1] == 0) GOTO 0x65d; Pop(1)

0x65a: Push("attack")
0x65b: @ PlayGlobalMusic(Stack[-1])
0x65c: Pop(1)
0x65d: Return(); Pop(2)

0x65e: PushEmpty(string, string)
0x65f: Stack[-1] = "idle"
0x660: Push(Stack[-3])
0x661: IF (Stack[-1] == 0) GOTO 0x663; Pop(1)

0x662: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x663: Stack[-4] = Stack[-1]
0x664: Return(); Pop(2)

0x665: PushEmpty(int, bool, int, bool)
0x666: Stack[-2] = (int) 0
0x667: Push("all")
0x668: PushEmpty(string, int)
0x669: Stack[-1] = Stack[-5]
0x66a: Call2 0x65e

0x66b: Pop(1)
0x66c: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x66d: Pop(2)
0x66e: Pop(0); Push((bool) Stack[-1] == 0)
0x66f: IF (Stack[-1] == 0) GOTO 0x671; Pop(1)

0x670: GOTO 0x674

0x671: Push((int) 1)
0x672: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x673: GOTO 0x667

0x674: Stack[-5] = Stack[-2]
0x675: Return(); Pop(4)

0x676: PushEmpty(int, int)
0x677: Push("branch")
0x678: @ GetVariable(Stack[-1], Stack[-2])
0x679: Pop(1)
0x67a: Stack[-3] = Stack[-1]
0x67b: Return(); Pop(2)

0x67c: PushEmpty()
0x67d: PushEmpty(int)
0x67e: Call2 0x676

0x67f: Pop(0)
0x680: Push((int) 1)
0x681: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x682: IF (Stack[-1] == 0) GOTO 0x686; Pop(1)

0x683: @ WorkWithCorpse(Stack[-1])
0x684: Pop(0)
0x685: GOTO 0x688

0x686: @ Barter(Stack[-1])
0x687: Pop(0)
0x688: Return(); Pop(0)

0x689: PushEmpty(int, bool, int, bool)
0x68a: Pop(0); Push((bool) Stack[-6] > Stack[-5])
0x68b: IF (Stack[-1] == 0) GOTO 0x690; Pop(1)

0x68c: Push("GenerateMoney: iMin > iMax")
0x68d: @ Trace(Stack[-1])
0x68e: Pop(1)
0x68f: Return(); Pop(4)

0x690: Stack[-2] = (int) 0
0x691: Pop(0); Push((bool) Stack[-6] != Stack[-5])
0x692: IF (Stack[-1] == 0) GOTO 0x697; Pop(1)

0x693: Pop(0); Push(Stack[-5] - Stack[-6]);
0x694: @ irand(Stack[-3], Stack[-1])
0x695: Pop(1)
0x696: GOTO 0x69b

0x697: Push((int) 0)
0x698: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x699: IF (Stack[-1] == 0) GOTO 0x69b; Pop(1)

0x69a: Return(); Pop(4)

0x69b: Stack[-2] = Stack[-2] + Stack[-6]; Pop(0);
0x69c: Push((int) 0)
0x69d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x69e: IF (Stack[-1] == 0) GOTO 0x6a0; Pop(1)

0x69f: Return(); Pop(4)

0x6a0: PushEmpty(int, string)
0x6a1: Stack[-1] = "Money"
0x6a2: Call2 0x6f6

0x6a3: Pop(1)
0x6a4: Push((int) 0)
0x6a5: @ AddItem(Stack[-3], Stack[-2], Stack[-1], Stack[-4])
0x6a6: Pop(2)
0x6a7: Return(); Pop(4)

0x6a8: PushEmpty(object, int, bool, object, int, bool)
0x6a9: @ CreateInvItem(Stack[-3])
0x6aa: Pop(0)
0x6ab: @@ SetItemName(Stack[-7])
0x6ac: Pop(0)
0x6ad: Push("Organ")
0x6ae: Push((int) 1)
0x6af: @@ SetProperty(Stack[-2], Stack[-1])
0x6b0: Pop(2)
0x6b1: @@ GetItemID(Stack[-2])
0x6b2: Pop(0)
0x6b3: Push((int) 0)
0x6b4: Push((int) 1)
0x6b5: @ AddItem(Stack[-3], Stack[-5], Stack[-2], Stack[-1])
0x6b6: Pop(2)
0x6b7: Return(); Pop(6)

0x6b8: Stack[-3] = 0
0x6b9: PushEmpty(int)
0x6ba: Call2 0x676

0x6bb: Pop(0)
0x6bc: Push((int) 1)
0x6bd: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x6be: IF (Stack[-1] == 0) GOTO 0x6c0; Pop(1)

0x6bf: Return(); Pop(0)

0x6c0: PushEmpty(string)
0x6c1: Stack[-1] = "liver"
0x6c2: Call2 0x6a8

0x6c3: Pop(1)
0x6c4: PushEmpty(string)
0x6c5: Stack[-1] = "kidney"
0x6c6: Call2 0x6a8

0x6c7: Pop(1)
0x6c8: PushEmpty(string)
0x6c9: Stack[-1] = "heart"
0x6ca: Call2 0x6a8

0x6cb: Pop(1)
0x6cc: PushEmpty(string)
0x6cd: Stack[-1] = "blood"
0x6ce: Call2 0x6a8

0x6cf: Pop(1)
0x6d0: Return(); Pop(0)

0x6d1: PushEmpty(int, bool, int, bool)
0x6d2: Push((int) 0)
0x6d3: @ ClearSubContainer(Stack[-1])
0x6d4: Pop(1)
0x6d5: PushEmpty(int, int)
0x6d6: Stack[-2] = (int) 600
0x6d7: Stack[-1] = (int) 1500
0x6d8: Call2 0x689

0x6d9: Pop(2)
0x6da: PushEmpty(string, int, int)
0x6db: Stack[-3] = "fresh_meat"
0x6dc: Stack[-2] = (int) 1
0x6dd: Stack[-1] = (int) 6
0x6de: Call2 0x5c5

0x6df: Pop(3)
0x6e0: PushEmpty(string, int, int, int)
0x6e1: Stack[-4] = "rusk"
0x6e2: Stack[-3] = (int) 1
0x6e3: Stack[-2] = (int) 6
0x6e4: Stack[-1] = (int) 2
0x6e5: Call2 0x5d0

0x6e6: Pop(4)
0x6e7: PushEmpty(string, int, int)
0x6e8: Stack[-3] = "gamma_pills"
0x6e9: Stack[-2] = (int) 1
0x6ea: Stack[-1] = (int) 3
0x6eb: Call2 0x5c5

0x6ec: Pop(3)
0x6ed: PushEmpty(int, string)
0x6ee: Stack[-1] = "bomber_mark"
0x6ef: Call2 0x6f6

0x6f0: Pop(1)
0x6f1: Push((int) 0)
0x6f2: Push((int) 1)
0x6f3: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x6f4: Pop(3)
0x6f5: Return(); Pop(4)

0x6f6: PushEmpty(int, int)
0x6f7: @ GetInvItemByName(Stack[-1], Stack[-3])
0x6f8: Pop(0)
0x6f9: Stack[-4] = Stack[-1]
0x6fa: Return(); Pop(2)

0x6fb: PushEmpty(string, string, string, string)
0x6fc: PushEmpty(bool, object, string)
0x6fd: Stack[-2] = Stack[-8]
0x6fe: Stack[-1] = "class"
0x6ff: Call2 0x4c1

0x700: Pop(2)
0x701: Pop(1); Push((bool) Stack[-1] == 0)
0x702: IF (Stack[-1] == 0) GOTO 0x705; Pop(1)

0x703: Stack[-6] = (bool) 0
0x704: Return(); Pop(4)

0x705: Push("class")
0x706: @ GetProperty(Stack[-1], Stack[-3])
0x707: Pop(1)
0x708: Push("class")
0x709: @@ GetProperty(Stack[-1], Stack[-2])
0x70a: Pop(1)
0x70b: Stack[-6] = Stack[-1] == Stack[-2]; Pop(0);
0x70c: Return(); Pop(4)

0x70d: PushEmpty(float, float, float, float, float, float, float, float, float, float)
0x70e: Push(CvectorIndex(Stack[-11], 0))
0x70f: Push(CvectorIndex(Stack[-12], 0))
0x710: Pop(2); Push(Stack[-2] * Stack[-1]);
0x711: Push(CvectorIndex(Stack[-12], 2))
0x712: Push(CvectorIndex(Stack[-13], 2))
0x713: Pop(2); Push(Stack[-2] * Stack[-1]);
0x714: Pop(2); Push(Stack[-2] + Stack[-1]);
0x715: Stack[-6] = Sqrt(Stack[-1]); Pop(1);
0x716: Push(CvectorIndex(Stack[-11], 1))
0x717: Stack[-5] = Stack[-1] / Stack[-6]; Pop(1);
0x718: Push(CvectorIndex(Stack[-13], 0))
0x719: Push(CvectorIndex(Stack[-13], 0))
0x71a: Pop(2); Push(Stack[-2] - Stack[-1]);
0x71b: Push(CvectorIndex(Stack[-14], 0))
0x71c: Push(CvectorIndex(Stack[-14], 0))
0x71d: Pop(2); Push(Stack[-2] - Stack[-1]);
0x71e: Pop(2); Push(Stack[-2] * Stack[-1]);
0x71f: Push(CvectorIndex(Stack[-14], 2))
0x720: Push(CvectorIndex(Stack[-14], 2))
0x721: Pop(2); Push(Stack[-2] - Stack[-1]);
0x722: Push(CvectorIndex(Stack[-15], 2))
0x723: Push(CvectorIndex(Stack[-15], 2))
0x724: Pop(2); Push(Stack[-2] - Stack[-1]);
0x725: Pop(2); Push(Stack[-2] * Stack[-1]);
0x726: Pop(2); Push(Stack[-2] + Stack[-1]);
0x727: Stack[-4] = Sqrt(Stack[-1]); Pop(1);
0x728: Push((float)500.0)
0x729: Pop(0); Push(Stack[-4] * Stack[-5]);
0x72a: Push(CvectorIndex(Stack[-14], 1))
0x72b: Push(CvectorIndex(Stack[-16], 1))
0x72c: Pop(2); Push(Stack[-2] - Stack[-1]);
0x72d: Pop(2); Push(Stack[-2] - Stack[-1]);
0x72e: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0x72f: Push((int) 0)
0x730: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x731: IF (Stack[-1] == 0) GOTO 0x734; Pop(1)

0x732: Stack[-14] = (int) -1
0x733: Return(); Pop(10)

0x734: Pop(0); Push(Stack[-3] / Stack[-5]);
0x735: Pop(0); Push(Sqrt(Stack[-3]))
0x736: Stack[-3] = Stack[-2] * Stack[-1]; Pop(2);
0x737: Stack[-14] = Stack[-1]
0x738: Return(); Pop(10)

0x739: PushEmpty()
0x73a: Push((int) 200)
0x73b: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x73c: IF (Stack[-1] == 0) GOTO 0x740; Pop(1)

0x73d: Stack[-2] = (int) 1
0x73e: Return(); Pop(0)

0x73f: GOTO 0x745

0x740: Push((int) 1000)
0x741: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x742: IF (Stack[-1] == 0) GOTO 0x745; Pop(1)

0x743: Stack[-2] = (int) 2
0x744: Return(); Pop(0)

0x745: Stack[-2] = (int) 3
0x746: Return(); Pop(0)

0x747: PushEmpty()
0x748: Push((int) 1)
0x749: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x74a: IF (Stack[-1] == 0) GOTO 0x74d; Pop(1)

0x74b: Stack[-2] = (int) 30
0x74c: Return(); Pop(0)

0x74d: Stack[-2] = (int) 700
0x74e: Return(); Pop(0)

0x74f: PushEmpty()
0x750: Push((int) 10)
0x751: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x752: IF (Stack[-1] == 0) GOTO 0x756; Pop(1)

0x753: Stack[-3] = (int) 10
0x754: Return(); Pop(0)

0x755: GOTO 0x75b

0x756: Push((int) 1500)
0x757: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x758: IF (Stack[-1] == 0) GOTO 0x75b; Pop(1)

0x759: Stack[-3] = (int) 1500
0x75a: Return(); Pop(0)

0x75b: Stack[-3] = Stack[-1]
0x75c: Return(); Pop(0)

0x75d: PushEmpty()
0x75e: PushEmpty(bool, object)
0x75f: Stack[-1] = Stack[-3]
0x760: Call2 0x7ea

0x761: Stack[-4] = Stack[-2]
0x762: Pop(2)
0x763: Return(); Pop(0)

0x764: PushEmpty()
0x765: PushEmpty(object)
0x766: Stack[-1] = Stack[-2]
0x767: Push(-1, 3); TaskCall(2)
0x768: Call2 0x15d

0x769: Pop(-1, 3); TaskReturn
0x76a: Pop(1)
0x76b: Return(); Pop(0)

0x76c: PushEmpty()
0x76d: PushEmpty(bool, object)
0x76e: Stack[-1] = Stack[-3]
0x76f: Call2 0x7ea

0x770: Stack[-4] = Stack[-2]
0x771: Pop(2)
0x772: Return(); Pop(0)

0x773: PushEmpty()
0x774: PushEmpty(object)
0x775: Stack[-1] = Stack[-2]
0x776: Push(-1, 2); TaskCall(4)
0x777: Call2 0x2ab

0x778: Pop(-1, 2); TaskReturn
0x779: Pop(1)
0x77a: @ ResetAAS()
0x77b: Pop(0)
0x77c: Return(); Pop(0)

0x77d: PushEmpty()
0x77e: PushEmpty(object)
0x77f: Stack[-1] = Stack[-2]
0x780: Call2 0x7f9

0x781: Pop(1)
0x782: PushEmpty(object)
0x783: Stack[-1] = Stack[-2]
0x784: Push(-1, 2); TaskCall(4)
0x785: Call2 0x2ab

0x786: Pop(-1, 2); TaskReturn
0x787: Pop(1)
0x788: @ ResetAAS()
0x789: Pop(0)
0x78a: Return(); Pop(0)

0x78b: PushEmpty()
0x78c: PushEmpty(object, int, float)
0x78d: Stack[-3] = Stack[-7]
0x78e: Stack[-2] = Stack[-6]
0x78f: Stack[-1] = Stack[-5]
0x790: Call2 0x563

0x791: Pop(3)
0x792: Return(); Pop(0)

0x793: PushEmpty()
0x794: PushEmpty(object, int, float, cvector, cvector)
0x795: Stack[-5] = Stack[-11]
0x796: Stack[-4] = Stack[-10]
0x797: Stack[-3] = Stack[-9]
0x798: Stack[-2] = Stack[-7]
0x799: Stack[-1] = Stack[-6]
0x79a: Call2 0x5a7

0x79b: Pop(5)
0x79c: Return(); Pop(0)

0x79d: PushEmpty()
0x79e: PushEmpty(object)
0x79f: Stack[-1] = Stack[-2]
0x7a0: Call2 0x7fb

0x7a1: Pop(1)
0x7a2: PushEmpty(bool, object)
0x7a3: Stack[-1] = Stack[-3]
0x7a4: Call2 0x4bc

0x7a5: Pop(1)
0x7a6: IF (Stack[-1] == 0) GOTO 0x7ac; Pop(1)

0x7a7: PushEmpty(bool, object, float)
0x7a8: Stack[-2] = Stack[-4]
0x7a9: Stack[-1] = (float) 0.05
0x7aa: Call2 0x628

0x7ab: Pop(3)
0x7ac: PushEmpty(object)
0x7ad: Stack[-1] = Stack[-2]
0x7ae: Push(-1, 0); TaskCall(1)
0x7af: Call2 0xb9

0x7b0: Pop(-1, 0); TaskReturn
0x7b1: Pop(1)
0x7b2: Return(); Pop(0)

0x7b3: PushEmpty(float, float)
0x7b4: Push("health")
0x7b5: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x7b6: IF (Stack[-1] == 0) GOTO 0x7bf; Pop(1)

0x7b7: Push("health")
0x7b8: @ GetProperty(Stack[-1], Stack[-2])
0x7b9: Pop(1)
0x7ba: Push((int) 0)
0x7bb: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x7bc: IF (Stack[-1] == 0) GOTO 0x7bf; Pop(1)

0x7bd: @ SignalDeath(Stack[-4])
0x7be: Pop(0)
0x7bf: Return(); Pop(2)

0x7c0: PushEmpty()
0x7c1: PushEmpty(object)
0x7c2: Stack[-1] = Stack[-2]
0x7c3: Call2 0x79d

0x7c4: Pop(1)
0x7c5: Return(); Pop(0)

0x7c6: PushEmpty(bool, bool)
0x7c7: PushEmpty(bool, object)
0x7c8: Stack[-1] = Stack[-5]
0x7c9: Call2 0x6fb

0x7ca: Pop(1)
0x7cb: IF (Stack[-1] == 0) GOTO 0x7dd; Pop(1)

0x7cc: @ CanSee(Stack[-1], Stack[-4])
0x7cd: Pop(0)
0x7ce: PushEmpty(bool)
0x7cf: Stack[-1] = (bool) 1
0x7d0: Push(Stack[-2])
0x7d1: IF (Stack[-1] == 0) GOTO 0x7da; Pop(1)

0x7d2: PushEmpty(float, object)
0x7d3: Stack[-1] = Stack[-7]
0x7d4: Call2 0x4b4

0x7d5: Pop(1)
0x7d6: Push((float)490000.0)
0x7d7: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x7d8: IF (Stack[-1] == 0) GOTO 0x7da; Pop(1)

0x7d9: Stack[-1] = (bool) 0
0x7da: IF (Stack[-1] == 0) GOTO 0x7dd; Pop(1)

0x7db: Stack[-5] = (bool) 1
0x7dc: Return(); Pop(2)

0x7dd: Stack[-5] = (bool) 0
0x7de: Return(); Pop(2)

0x7df: PushEmpty(object, object)
0x7e0: @ GetScene(Stack[-1])
0x7e1: Pop(0)
0x7e2: PushEmpty(object)
0x7e3: Call2 0x608

0x7e4: Pop(0)
0x7e5: @@ RemoveStationaryActor(Stack[-1])
0x7e6: Pop(1)
0x7e7: Return(); Pop(2)

0x7e8: Stack[-1] = 0
0x7e9: Return(); Pop(0)

0x7ea: PushEmpty()
0x7eb: PushEmpty(bool, object)
0x7ec: Stack[-1] = Stack[-3]
0x7ed: Call2 0x50c

0x7ee: Pop(1)
0x7ef: Pop(1); Push((bool) Stack[-1] == 0)
0x7f0: IF (Stack[-1] == 0) GOTO 0x7f3; Pop(1)

0x7f1: Stack[-2] = (bool) 0
0x7f2: Return(); Pop(0)

0x7f3: PushEmpty(bool, object)
0x7f4: Stack[-1] = Stack[-3]
0x7f5: Call2 0x4bc

0x7f6: Stack[-4] = Stack[-2]
0x7f7: Pop(2)
0x7f8: Return(); Pop(0)

0x7f9: PushEmpty()
0x7fa: Return(); Pop(0)

0x7fb: PushEmpty()
0x7fc: PushEmpty()
0x7fd: Call2 0x7df

0x7fe: Pop(0)
0x7ff: Return(); Pop(0)

