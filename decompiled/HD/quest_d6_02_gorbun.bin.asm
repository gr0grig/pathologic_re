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
	rat
	rat_big
	bomber
	quest_d6_02
	gorbun_death

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
	PlayGlobalSound (4 args)
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
	FindActor (2 args)
	Trigger (2 args)
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
	RemoveActor (1 args)

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
		EVENT_1 Op = 0x36c Vars = (object)
		EVENT_2 Op = 0x371 Vars = (object)
		EVENT_30 Op = 0x376 Vars = (object, object, bool)
	GTASK_5 Vars = (object) Params = 1
		EVENT_1 Op = 0x382 Vars = (object)
		EVENT_2 Op = 0x388 Vars = (object)
		EVENT_17 Op = 0x38d Vars = (object)
		EVENT_30 Op = 0x393 Vars = (object, object, bool)
	GTASK_6 Vars = (float, float, object) Params = 2
		EVENT_1 Op = 0x3e5 Vars = (object)
		EVENT_3 Op = 0x3f3 Vars = (object)
		EVENT_17 Op = 0x40a Vars = (object)
		EVENT_30 Op = 0x413 Vars = (object, object, bool)
		EVENT_41 Op = 0x428 Vars = (object)
	GTASK_7  Params = 0
		EVENT_1 Op = 0x439 Vars = (object)
		EVENT_3 Op = 0x447 Vars = (object)
		EVENT_17 Op = 0x455 Vars = (object)
		EVENT_30 Op = 0x45e Vars = (object, object, bool)
		EVENT_41 Op = 0x473 Vars = (object)
		EVENT_7 Op = 0x47c Vars = (int)

Events:
EVENT_22 Op = 0x79a Vars = (object, int, float, float)
EVENT_43 Op = 0x7a2 Vars = (object, int, float, float, cvector, cvector)
EVENT_16 Op = 0x7c2 Vars = (object, string)
EVENT_41 Op = 0x7cf Vars = (object)
EVENT_6 Op = 0x821 Vars = ()

0x0: PushEmpty()
0x1: Call2 0x7ee

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
0xf: Call2 0x77b

0x10: Pop(1)
0x11: IF (Stack[-1] == 0) GOTO 0x19; Pop(1)

0x12: PushEmpty()
0x13: Call2 0x3d

0x14: Pop(0)
0x15: PushEmpty(object)
0x16: Stack[-1] = Stack[-2]
0x17: Call2 0x782

0x18: Pop(1)
0x19: Return(); Pop(0)

0x1a: PushEmpty()
0x1b: PushEmpty(bool, object)
0x1c: Stack[-1] = Stack[-3]
0x1d: Call2 0x76c

0x1e: Pop(1)
0x1f: IF (Stack[-1] == 0) GOTO 0x27; Pop(1)

0x20: PushEmpty()
0x21: Call2 0x3d

0x22: Pop(0)
0x23: PushEmpty(object)
0x24: Stack[-1] = Stack[-2]
0x25: Call2 0x773

0x26: Pop(1)
0x27: Return(); Pop(0)

0x28: PushEmpty()
0x29: PushEmpty()
0x2a: Call2 0x3d

0x2b: Pop(0)
0x2c: PushEmpty(object)
0x2d: Stack[-1] = Stack[-2]
0x2e: Call2 0x78c

0x2f: Pop(1)
0x30: Return(); Pop(0)

0x31: PushEmpty()
0x32: PushEmpty(bool, object, object)
0x33: Stack[-2] = Stack[-6]
0x34: Stack[-1] = Stack[-5]
0x35: Call2 0x7d5

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
0x4a: Call2 0x7cf

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
0x5f: Call2 0x431

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
0xbf: Call2 0x6e0

0xc0: Pop(0)
0xc1: PushEmpty()
0xc2: Call2 0x6c8

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
0xdf: Call2 0x68b

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
0x128: Call2 0x5e2

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
0x14a: Call2 0x5e2

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
0x167: Call2 0x77b

0x168: Pop(1)
0x169: IF (Stack[-1] == 0) GOTO 0x171; Pop(1)

0x16a: PushEmpty()
0x16b: Call2 0x215

0x16c: Pop(0)
0x16d: PushEmpty(object)
0x16e: Stack[-1] = Stack[-2]
0x16f: Call2 0x782

0x170: Pop(1)
0x171: Return(); Pop(0)

0x172: PushEmpty()
0x173: PushEmpty()
0x174: Call2 0x215

0x175: Pop(0)
0x176: PushEmpty(object)
0x177: Stack[-1] = Stack[-2]
0x178: Call2 0x78c

0x179: Pop(1)
0x17a: Return(); Pop(0)

0x17b: PushEmpty()
0x17c: PushEmpty(bool, object, object)
0x17d: Stack[-2] = Stack[-6]
0x17e: Stack[-1] = Stack[-5]
0x17f: Call2 0x7d5

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
0x190: Call2 0x7ef

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
0x19d: Call2 0x7ef

0x19e: Stack[-4] = Stack[-2]
0x19f: Pop(2)
0x1a0: Return(); Pop(0)

0x1a1: PushEmpty(bool, bool)
0x1a2: PushEmpty(bool, object)
0x1a3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1a4: Call2 0x50f

0x1a5: Pop(1)
0x1a6: Pop(1); Push((bool) Stack[-1] == 0)
0x1a7: IF (Stack[-1] == 0) GOTO 0x1a9; Pop(1)

0x1a8: Return(); Pop(2)

0x1a9: Stack[1 + Tasks[-1].StackPointer] = Stack[-4]
0x1aa: PushEmpty(object)
0x1ab: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1ac: Call2 0x664

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
0x1ca: Call2 0x3af

0x1cb: Pop(-2, 3); TaskReturn
0x1cc: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x1cd: Pop(2)
0x1ce: Push((int) 61)
0x1cf: Push((float)0.5)
0x1d0: @ SetTimer(Stack[-2], Stack[-1])
0x1d1: Pop(2)
0x1d2: PushEmpty(bool, object)
0x1d3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1d4: Call2 0x50f

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
0x221: Call2 0x7cf

0x222: Pop(1)
0x223: Return(); Pop(0)

0x224: PushEmpty()
0x225: PushEmpty(bool, object)
0x226: Stack[-1] = Stack[-3]
0x227: Call2 0x77b

0x228: Pop(1)
0x229: IF (Stack[-1] == 0) GOTO 0x231; Pop(1)

0x22a: PushEmpty()
0x22b: Call2 0x2a6

0x22c: Pop(0)
0x22d: PushEmpty(object)
0x22e: Stack[-1] = Stack[-2]
0x22f: Call2 0x782

0x230: Pop(1)
0x231: Return(); Pop(0)

0x232: PushEmpty()
0x233: PushEmpty(bool, object)
0x234: Stack[-1] = Stack[-3]
0x235: Call2 0x76c

0x236: Pop(1)
0x237: IF (Stack[-1] == 0) GOTO 0x23f; Pop(1)

0x238: PushEmpty()
0x239: Call2 0x2a6

0x23a: Pop(0)
0x23b: PushEmpty(object)
0x23c: Stack[-1] = Stack[-2]
0x23d: Call2 0x773

0x23e: Pop(1)
0x23f: Return(); Pop(0)

0x240: PushEmpty()
0x241: PushEmpty()
0x242: Call2 0x2a6

0x243: Pop(0)
0x244: PushEmpty(object)
0x245: Stack[-1] = Stack[-2]
0x246: Call2 0x78c

0x247: Pop(1)
0x248: Return(); Pop(0)

0x249: PushEmpty()
0x24a: PushEmpty(bool, object, object)
0x24b: Stack[-2] = Stack[-6]
0x24c: Stack[-1] = Stack[-5]
0x24d: Call2 0x7d5

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
0x259: Call2 0x5b8

0x25a: Pop(0)
0x25b: Pop(1); Push((bool) Stack[-1] == 0)
0x25c: IF (Stack[-1] == 0) GOTO 0x25e; Pop(1)

0x25d: Return(); Pop(14)

0x25e: PushEmpty(int)
0x25f: Call2 0x674

0x260: Stack[-8] = Stack[-1]
0x261: Pop(1)
0x262: Stack[-6] = (int) 0
0x263: PushEmpty(bool)
0x264: Stack[-1] = (bool) 0
0x265: Push((int) 5)
0x266: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x267: IF (Stack[-1] == 0) GOTO 0x26d; Pop(1)

0x268: PushEmpty(bool)
0x269: Call2 0x5b8

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
0x27b: Call2 0x66d

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
0x2b1: Call2 0x531

0x2b2: Pop(2)
0x2b3: PushEmpty(bool, object)
0x2b4: Stack[-1] = Stack[-25]
0x2b5: Call2 0x50f

0x2b6: Pop(1)
0x2b7: Pop(1); Push((bool) Stack[-1] == 0)
0x2b8: IF (Stack[-1] == 0) GOTO 0x2ba; Pop(1)

0x2b9: Return(); Pop(22)

0x2ba: @ Face(Stack[-23])
0x2bb: Pop(0)
0x2bc: PushEmpty(bool, object)
0x2bd: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2be: Call2 0x50f

0x2bf: Pop(1)
0x2c0: IF (Stack[-1] == 0) GOTO 0x369; Pop(1)

0x2c1: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == 0)
0x2c2: IF (Stack[-1] == 0) GOTO 0x2d2; Pop(1)

0x2c3: @ StopAsync()
0x2c4: Pop(0)
0x2c5: PushEmpty(object)
0x2c6: Push(-1, 1); TaskCall(5)
0x2c7: Call2 0x37d

0x2c8: Pop(-1, 1); TaskReturn
0x2c9: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x2ca: Pop(1)
0x2cb: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x2cc: IF (Stack[-1] == 0) GOTO 0x2ce; Pop(1)

0x2cd: GOTO 0x369

0x2ce: @ CanSee(Stack[-1], Stack[-0])
0x2cf: Pop(0)
0x2d0: @ Face(Stack[-0])
0x2d1: Pop(0)
0x2d2: PushEmpty(object)
0x2d3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2d4: Call2 0x664

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
0x2e0: Call2 0x748

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

0x2ec: GOTO 0x369

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
0x2ff: Call2 0x60b

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
0x327: Call2 0x71c

0x328: Stack[-6] = Stack[-4]
0x329: Pop(4)
0x32a: Push((int) 0)
0x32b: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x32c: IF (Stack[-1] == 0) GOTO 0x333; Pop(1)

0x32d: PushEmpty(float, int)
0x32e: Stack[-1] = Stack[-10]
0x32f: Call2 0x756

0x330: Stack[-4] = Stack[-2]
0x331: Pop(2)
0x332: GOTO 0x339

0x333: PushEmpty(float, int, float)
0x334: Stack[-2] = Stack[-11]
0x335: Stack[-1] = Stack[-5]
0x336: Call2 0x75e

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
0x349: IF (Stack[-1] == 0) GOTO 0x366; Pop(1)

0x34a: Push((int) 2)
0x34b: @ irand(Stack[-2], Stack[-1])
0x34c: Pop(1)
0x34d: Push("scream")
0x34e: Push((int) 1)
0x34f: Pop(1); Push(Stack[-3] + Stack[-1]);
0x350: Pop(2); Push(Stack[-2] + Stack[-1]);
0x351: Push(CVector(0.0, 150.0, 0.0))
0x352: Push((int) 1)
0x353: Push((int) 500)
0x354: @ PlayGlobalSound(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x355: Pop(4)
0x356: PushEmpty(object)
0x357: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x358: Call2 0x5bd

0x359: Pop(1)
0x35a: Push("all")
0x35b: Push("scream")
0x35c: Push((int) 1)
0x35d: Pop(1); Push(Stack[-4] + Stack[-1]);
0x35e: Pop(2); Push(Stack[-2] + Stack[-1]);
0x35f: @ PlayAnimation(Stack[-2], Stack[-1])
0x360: Pop(2)
0x361: @ WaitForAnimEnd()
0x362: Pop(0)
0x363: Push("head")
0x364: @ UnlookAsync(Stack[-1])
0x365: Pop(1)
0x366: Stack[-4] = 0
0x367: Stack[-7] = 0
0x368: GOTO 0x2bc

0x369: @ StopAsync()
0x36a: Pop(0)
0x36b: Return(); Pop(22)

0x36c: PushEmpty()
0x36d: Pop(0); Push((bool) Stack[-1] == Stack[0 + Tasks[-1].StackPointer])
0x36e: IF (Stack[-1] == 0) GOTO 0x370; Pop(1)

0x36f: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x370: Return(); Pop(0)

0x371: PushEmpty()
0x372: Pop(0); Push((bool) Stack[-1] == Stack[0 + Tasks[-1].StackPointer])
0x373: IF (Stack[-1] == 0) GOTO 0x375; Pop(1)

0x374: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x375: Return(); Pop(0)

0x376: PushEmpty()
0x377: PushEmpty(bool, object, object)
0x378: Stack[-2] = Stack[-6]
0x379: Stack[-1] = Stack[-5]
0x37a: Call2 0x7d5

0x37b: Pop(3)
0x37c: Return(); Pop(0)

0x37d: Push((int) 5)
0x37e: @ Sleep(Stack[-1])
0x37f: Pop(1)
0x380: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x381: Return(); Pop(0)

0x382: PushEmpty()
0x383: PushEmpty(object)
0x384: Stack[-1] = Stack[-2]
0x385: Call2 0x39f

0x386: Pop(1)
0x387: Return(); Pop(0)

0x388: PushEmpty()
0x389: Pop(0); Push((bool) Stack[-1] == Stack[0 + Tasks[-1].StackPointer])
0x38a: IF (Stack[-1] == 0) GOTO 0x38c; Pop(1)

0x38b: Stack[0 + Tasks[-1].StackPointer] = 0
0x38c: Return(); Pop(0)

0x38d: PushEmpty()
0x38e: PushEmpty(object)
0x38f: Stack[-1] = Stack[-2]
0x390: Call2 0x39f

0x391: Pop(1)
0x392: Return(); Pop(0)

0x393: PushEmpty()
0x394: PushEmpty(bool, object, object)
0x395: Stack[-2] = Stack[-6]
0x396: Stack[-1] = Stack[-5]
0x397: Call2 0x7d5

0x398: Pop(2)
0x399: IF (Stack[-1] == 0) GOTO 0x39e; Pop(1)

0x39a: PushEmpty(object)
0x39b: Stack[-1] = Stack[-4]
0x39c: Call2 0x38d

0x39d: Pop(1)
0x39e: Return(); Pop(0)

0x39f: PushEmpty()
0x3a0: PushEmpty(bool)
0x3a1: Stack[-1] = (bool) 0
0x3a2: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x3a3: IF (Stack[-1] == 0) GOTO 0x3aa; Pop(1)

0x3a4: PushEmpty(bool, object)
0x3a5: Stack[-1] = Stack[-4]
0x3a6: Call2 0x7ef

0x3a7: Pop(1)
0x3a8: IF (Stack[-1] == 0) GOTO 0x3aa; Pop(1)

0x3a9: Stack[-1] = (bool) 1
0x3aa: IF (Stack[-1] == 0) GOTO 0x3ae; Pop(1)

0x3ab: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x3ac: @ StopGroup0()
0x3ad: Pop(0)
0x3ae: Return(); Pop(0)

0x3af: PushEmpty(bool, int, bool, int)
0x3b0: @ GetSeeThreshold(Stack[-0])
0x3b1: Pop(0)
0x3b2: @ GetSeeFOV(Stack[-1])
0x3b3: Pop(0)
0x3b4: Push((float)1.5)
0x3b5: Pop(1); Push(Stack[0 + StackPtr] / Stack[-1]);
0x3b6: @ SetSeeThreshold(Stack[-1])
0x3b7: Pop(1)
0x3b8: Stack[2 + Tasks[-1].StackPointer] = Stack[-5]
0x3b9: PushEmpty(object)
0x3ba: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x3bb: Call2 0x664

0x3bc: Pop(1)
0x3bd: Stack[-1] = (int) 0
0x3be: Push((int) 3)
0x3bf: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x3c0: IF (Stack[-1] == 0) GOTO 0x3dd; Pop(1)

0x3c1: Push((float)1.8)
0x3c2: Pop(1); Push(Stack[1 + StackPtr] * Stack[-1]);
0x3c3: @ SetSeeFOV(Stack[-1])
0x3c4: Pop(1)
0x3c5: Push("all")
0x3c6: Push("hunt")
0x3c7: @ PlayAnimation(Stack[-2], Stack[-1])
0x3c8: Pop(2)
0x3c9: @ WaitForAnimEnd(Stack[-2])
0x3ca: Pop(0)
0x3cb: @ SetSeeFOV(Stack[-1])
0x3cc: Pop(0)
0x3cd: Pop(0); Push((bool) Stack[-2] == 0)
0x3ce: IF (Stack[-1] == 0) GOTO 0x3d0; Pop(1)

0x3cf: GOTO 0x3dd

0x3d0: Push((int) 2)
0x3d1: @ Sleep(Stack[-1], Stack[-3])
0x3d2: Pop(1)
0x3d3: Pop(0); Push((bool) Stack[-2] == 0)
0x3d4: IF (Stack[-1] == 0) GOTO 0x3d6; Pop(1)

0x3d5: GOTO 0x3dd

0x3d6: PushEmpty(object)
0x3d7: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x3d8: Call2 0x664

0x3d9: Pop(1)
0x3da: Push((int) 1)
0x3db: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x3dc: GOTO 0x3be

0x3dd: PushEmpty()
0x3de: Call2 0x41f

0x3df: Pop(0)
0x3e0: Push(Stack[-2])
0x3e1: IF (Stack[-1] == 0) GOTO 0x3e3; Pop(1)

0x3e2: Stack[2 + Tasks[-1].StackPointer] = 0
0x3e3: Stack[-6] = Stack[2 + Tasks[-1].StackPointer]
0x3e4: Return(); Pop(4)

0x3e5: PushEmpty()
0x3e6: PushEmpty(bool, object)
0x3e7: Stack[-1] = Stack[-3]
0x3e8: Call2 0x77b

0x3e9: Pop(1)
0x3ea: IF (Stack[-1] == 0) GOTO 0x3f2; Pop(1)

0x3eb: PushEmpty()
0x3ec: Call2 0x41f

0x3ed: Pop(0)
0x3ee: PushEmpty(object)
0x3ef: Stack[-1] = Stack[-2]
0x3f0: Call2 0x782

0x3f1: Pop(1)
0x3f2: Return(); Pop(0)

0x3f3: PushEmpty(bool, bool)
0x3f4: @ IsPlayerActor(Stack[-2], Stack[-1])
0x3f5: Pop(0)
0x3f6: Push(Stack[-1])
0x3f7: IF (Stack[-1] == 0) GOTO 0x3f9; Pop(1)

0x3f8: Return(); Pop(2)

0x3f9: PushEmpty(bool, object)
0x3fa: Stack[-1] = Stack[-5]
0x3fb: Call2 0x7ef

0x3fc: Pop(1)
0x3fd: Pop(1); Push((bool) Stack[-1] == 0)
0x3fe: IF (Stack[-1] == 0) GOTO 0x400; Pop(1)

0x3ff: Return(); Pop(2)

0x400: @ IsPlayerActor(Stack[-3], Stack[-1])
0x401: Pop(0)
0x402: Push(Stack[-1])
0x403: IF (Stack[-1] == 0) GOTO 0x409; Pop(1)

0x404: Stack[2 + Tasks[-1].StackPointer] = Stack[-3]
0x405: @ Stop()
0x406: Pop(0)
0x407: @ StopGroup0()
0x408: Pop(0)
0x409: Return(); Pop(2)

0x40a: PushEmpty()
0x40b: PushEmpty()
0x40c: Call2 0x41f

0x40d: Pop(0)
0x40e: PushEmpty(object)
0x40f: Stack[-1] = Stack[-2]
0x410: Call2 0x78c

0x411: Pop(1)
0x412: Return(); Pop(0)

0x413: PushEmpty()
0x414: PushEmpty(bool, object, object)
0x415: Stack[-2] = Stack[-6]
0x416: Stack[-1] = Stack[-5]
0x417: Call2 0x7d5

0x418: Pop(2)
0x419: IF (Stack[-1] == 0) GOTO 0x41e; Pop(1)

0x41a: PushEmpty(object)
0x41b: Stack[-1] = Stack[-4]
0x41c: Call2 0x40a

0x41d: Pop(1)
0x41e: Return(); Pop(0)

0x41f: @ SetSeeThreshold(Stack[-0])
0x420: Pop(0)
0x421: @ SetSeeFOV(Stack[-1])
0x422: Pop(0)
0x423: @ Stop()
0x424: Pop(0)
0x425: @ StopGroup0()
0x426: Pop(0)
0x427: Return(); Pop(0)

0x428: PushEmpty()
0x429: PushEmpty()
0x42a: Call2 0x41f

0x42b: Pop(0)
0x42c: PushEmpty(object)
0x42d: Stack[-1] = Stack[-2]
0x42e: Call2 0x7cf

0x42f: Pop(1)
0x430: Return(); Pop(0)

0x431: Push((int) 91)
0x432: Push((int) 20)
0x433: @ SetTimer(Stack[-2], Stack[-1])
0x434: Pop(2)
0x435: PushEmpty()
0x436: Call2 0x496

0x437: Pop(0)
0x438: Return(); Pop(0)

0x439: PushEmpty()
0x43a: PushEmpty(bool, object)
0x43b: Stack[-1] = Stack[-3]
0x43c: Call2 0x77b

0x43d: Pop(1)
0x43e: IF (Stack[-1] == 0) GOTO 0x446; Pop(1)

0x43f: PushEmpty()
0x440: Call2 0x46a

0x441: Pop(0)
0x442: PushEmpty(object)
0x443: Stack[-1] = Stack[-2]
0x444: Call2 0x782

0x445: Pop(1)
0x446: Return(); Pop(0)

0x447: PushEmpty()
0x448: PushEmpty(bool, object)
0x449: Stack[-1] = Stack[-3]
0x44a: Call2 0x76c

0x44b: Pop(1)
0x44c: IF (Stack[-1] == 0) GOTO 0x454; Pop(1)

0x44d: PushEmpty()
0x44e: Call2 0x46a

0x44f: Pop(0)
0x450: PushEmpty(object)
0x451: Stack[-1] = Stack[-2]
0x452: Call2 0x773

0x453: Pop(1)
0x454: Return(); Pop(0)

0x455: PushEmpty()
0x456: PushEmpty()
0x457: Call2 0x46a

0x458: Pop(0)
0x459: PushEmpty(object)
0x45a: Stack[-1] = Stack[-2]
0x45b: Call2 0x78c

0x45c: Pop(1)
0x45d: Return(); Pop(0)

0x45e: PushEmpty()
0x45f: PushEmpty(bool, object, object)
0x460: Stack[-2] = Stack[-6]
0x461: Stack[-1] = Stack[-5]
0x462: Call2 0x7d5

0x463: Pop(2)
0x464: IF (Stack[-1] == 0) GOTO 0x469; Pop(1)

0x465: PushEmpty(object)
0x466: Stack[-1] = Stack[-4]
0x467: Call2 0x455

0x468: Pop(1)
0x469: Return(); Pop(0)

0x46a: Push((int) 91)
0x46b: @ KillTimer(Stack[-1])
0x46c: Pop(1)
0x46d: @ Stop()
0x46e: Pop(0)
0x46f: PushEmpty()
0x470: Call2 0x4ab

0x471: Pop(0)
0x472: Return(); Pop(0)

0x473: PushEmpty()
0x474: PushEmpty()
0x475: Call2 0x46a

0x476: Pop(0)
0x477: PushEmpty(object)
0x478: Stack[-1] = Stack[-2]
0x479: Call2 0x7cf

0x47a: Pop(1)
0x47b: Return(); Pop(0)

0x47c: PushEmpty()
0x47d: Push((int) 91)
0x47e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x47f: IF (Stack[-1] == 0) GOTO 0x483; Pop(1)

0x480: PushEmpty()
0x481: Call2 0x46a

0x482: Pop(0)
0x483: Return(); Pop(0)

0x484: PushEmpty(float, bool, float, bool)
0x485: @ rand(Stack[-2])
0x486: Pop(0)
0x487: Push((float)0.3)
0x488: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x489: IF (Stack[-1] == 0) GOTO 0x494; Pop(1)

0x48a: Push("all")
0x48b: Push("hunt")
0x48c: @ PlayAnimation(Stack[-2], Stack[-1])
0x48d: Pop(2)
0x48e: @ WaitForAnimEnd(Stack[-1])
0x48f: Pop(0)
0x490: Pop(0); Push((bool) Stack[-1] == 0)
0x491: IF (Stack[-1] == 0) GOTO 0x494; Pop(1)

0x492: Stack[-5] = (bool) 1
0x493: Return(); Pop(4)

0x494: Stack[-5] = (bool) 0
0x495: Return(); Pop(4)

0x496: PushEmpty(float, float, bool, float, float, bool)
0x497: @ RandVec2D(Stack[-3], Stack[-2])
0x498: Pop(0)
0x499: @ Rotate(Stack[-3], Stack[-2], Stack[-1])
0x49a: Pop(0)
0x49b: Pop(0); Push((bool) Stack[-1] == 0)
0x49c: IF (Stack[-1] == 0) GOTO 0x49e; Pop(1)

0x49d: GOTO 0x4aa

0x49e: PushEmpty(bool)
0x49f: Call2 0x484

0x4a0: Pop(0)
0x4a1: IF (Stack[-1] == 0) GOTO 0x4a3; Pop(1)

0x4a2: GOTO 0x4aa

0x4a3: Push((int) 5)
0x4a4: @ Sleep(Stack[-1], Stack[-2])
0x4a5: Pop(1)
0x4a6: Pop(0); Push((bool) Stack[-1] == 0)
0x4a7: IF (Stack[-1] == 0) GOTO 0x4a9; Pop(1)

0x4a8: GOTO 0x4aa

0x4a9: GOTO 0x497

0x4aa: Return(); Pop(6)

0x4ab: @ Stop()
0x4ac: Pop(0)
0x4ad: @ StopGroup0()
0x4ae: Pop(0)
0x4af: Return(); Pop(0)

0x4b0: PushEmpty(cvector, cvector, cvector, cvector)
0x4b1: @ GetPosition(Stack[-2])
0x4b2: Pop(0)
0x4b3: @@ GetPosition(Stack[-1])
0x4b4: Pop(0)
0x4b5: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x4b6: Return(); Pop(4)

0x4b7: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x4b8: @ GetPosition(Stack[-3])
0x4b9: Pop(0)
0x4ba: @@ GetPosition(Stack[-2])
0x4bb: Pop(0)
0x4bc: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x4bd: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x4be: Return(); Pop(6)

0x4bf: PushEmpty(bool, bool)
0x4c0: @ IsPlayerActor(Stack[-3], Stack[-1])
0x4c1: Pop(0)
0x4c2: Stack[-4] = Stack[-1]
0x4c3: Return(); Pop(2)

0x4c4: PushEmpty(bool, bool)
0x4c5: Push("HasProperty")
0x4c6: Push((int) 2)
0x4c7: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x4c8: Pop(1); Push((bool) Stack[-1] == 0)
0x4c9: IF (Stack[-1] == 0) GOTO 0x4cc; Pop(1)

0x4ca: Stack[-5] = (bool) 0
0x4cb: Return(); Pop(2)

0x4cc: @@ HasProperty(Stack[-3], Stack[-1])
0x4cd: Pop(0)
0x4ce: Stack[-5] = Stack[-1]
0x4cf: Return(); Pop(2)

0x4d0: PushEmpty(float, float)
0x4d1: PushEmpty(bool, object, string)
0x4d2: Stack[-2] = Stack[-10]
0x4d3: Stack[-1] = Stack[-9]
0x4d4: Call2 0x4c4

0x4d5: Pop(2)
0x4d6: Pop(1); Push((bool) Stack[-1] == 0)
0x4d7: IF (Stack[-1] == 0) GOTO 0x4da; Pop(1)

0x4d8: Stack[-8] = (bool) 0
0x4d9: Return(); Pop(2)

0x4da: @@ GetProperty(Stack[-6], Stack[-1])
0x4db: Pop(0)
0x4dc: PushEmpty(float, float, float, float)
0x4dd: Stack[-3] = Stack[-5] + Stack[-9]; Pop(0);
0x4de: Stack[-2] = Stack[-8]
0x4df: Stack[-1] = Stack[-7]
0x4e0: Call2 0x61b

0x4e1: Pop(3)
0x4e2: @@ SetProperty(Stack[-7], Stack[-1])
0x4e3: Pop(1)
0x4e4: Stack[-8] = (bool) 1
0x4e5: Return(); Pop(2)

0x4e6: PushEmpty(bool, bool)
0x4e7: @@ IsDead(Stack[-1])
0x4e8: Pop(0)
0x4e9: Stack[-4] = Stack[-1]
0x4ea: Return(); Pop(2)

0x4eb: PushEmpty(object, object, object, object)
0x4ec: Pop(0); Push((bool) Stack[-5] == 0)
0x4ed: IF (Stack[-1] == 0) GOTO 0x4f0; Pop(1)

0x4ee: Stack[-6] = (bool) 0
0x4ef: Return(); Pop(4)

0x4f0: PushEmpty(bool)
0x4f1: Stack[-1] = (bool) 0
0x4f2: Push("IsDead")
0x4f3: Push((int) 1)
0x4f4: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x4f5: IF (Stack[-1] == 0) GOTO 0x4fc; Pop(1)

0x4f6: PushEmpty(bool, object)
0x4f7: Stack[-1] = Stack[-8]
0x4f8: Call2 0x4e6

0x4f9: Pop(1)
0x4fa: IF (Stack[-1] == 0) GOTO 0x4fc; Pop(1)

0x4fb: Stack[-1] = (bool) 1
0x4fc: IF (Stack[-1] == 0) GOTO 0x4ff; Pop(1)

0x4fd: Stack[-6] = (bool) 0
0x4fe: Return(); Pop(4)

0x4ff: @ GetScene(Stack[-2])
0x500: Pop(0)
0x501: Pop(0); Push((bool) Stack[-2] == 0)
0x502: IF (Stack[-1] == 0) GOTO 0x505; Pop(1)

0x503: Stack[-6] = (bool) 0
0x504: Return(); Pop(4)

0x505: @@ GetScene(Stack[-1])
0x506: Pop(0)
0x507: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x508: IF (Stack[-1] == 0) GOTO 0x50b; Pop(1)

0x509: Stack[-6] = (bool) 0
0x50a: Return(); Pop(4)

0x50b: Stack[-6] = (bool) 1
0x50c: Return(); Pop(4)

0x50d: Stack[-1] = 0
0x50e: Stack[-2] = 0
0x50f: PushEmpty(int, int)
0x510: PushEmpty(bool, object)
0x511: Stack[-1] = Stack[-5]
0x512: Call2 0x4eb

0x513: Pop(1)
0x514: Pop(1); Push((bool) Stack[-1] == 0)
0x515: IF (Stack[-1] == 0) GOTO 0x518; Pop(1)

0x516: Stack[-4] = (bool) 0
0x517: Return(); Pop(2)

0x518: PushEmpty(bool, object, string)
0x519: Stack[-2] = Stack[-6]
0x51a: Stack[-1] = "noaccess"
0x51b: Call2 0x4c4

0x51c: Pop(2)
0x51d: Pop(1); Push((bool) Stack[-1] == 0)
0x51e: IF (Stack[-1] == 0) GOTO 0x521; Pop(1)

0x51f: Stack[-4] = (bool) 1
0x520: Return(); Pop(2)

0x521: Push("noaccess")
0x522: @@ GetProperty(Stack[-1], Stack[-2])
0x523: Pop(1)
0x524: Push((int) 0)
0x525: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x526: Return(); Pop(2)

0x527: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x528: @ GetPosition(Stack[-3])
0x529: Pop(0)
0x52a: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x52b: Push(CvectorIndex(Stack[-2], 0))
0x52c: Push(CvectorIndex(Stack[-3], 2))
0x52d: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x52e: Pop(2)
0x52f: Stack[-8] = Stack[-1]
0x530: Return(); Pop(6)

0x531: PushEmpty(cvector, cvector)
0x532: @@ GetPosition(Stack[-1])
0x533: Pop(0)
0x534: PushEmpty(bool, cvector)
0x535: Stack[-1] = Stack[-3]
0x536: Call2 0x527

0x537: Stack[-6] = Stack[-2]
0x538: Pop(2)
0x539: Return(); Pop(2)

0x53a: PushEmpty(bool, int, cvector, cvector, cvector, cvector, string, bool, int, cvector, cvector, cvector, cvector, string)
0x53b: Pop(0); Push((bool) Stack[-15] == 0)
0x53c: IF (Stack[-1] == 0) GOTO 0x53e; Pop(1)

0x53d: Return(); Pop(14)

0x53e: @ IsDead(Stack[-7])
0x53f: Pop(0)
0x540: Push(Stack[-7])
0x541: IF (Stack[-1] == 0) GOTO 0x543; Pop(1)

0x542: Return(); Pop(14)

0x543: @ GetSecondaryAnimationType(Stack[-6])
0x544: Pop(0)
0x545: Push((int) 0)
0x546: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x547: IF (Stack[-1] == 0) GOTO 0x549; Pop(1)

0x548: Return(); Pop(14)

0x549: @@ GetPosition(Stack[-5])
0x54a: Pop(0)
0x54b: @ GetPosition(Stack[-4])
0x54c: Pop(0)
0x54d: @ GetDirection(Stack[-3])
0x54e: Pop(0)
0x54f: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0x550: Push(CvectorIndex(Stack[-2], 0))
0x551: Push(CvectorIndex(Stack[-4], 0))
0x552: Pop(2); Push(Stack[-2] * Stack[-1]);
0x553: Push(CvectorIndex(Stack[-3], 2))
0x554: Push(CvectorIndex(Stack[-5], 2))
0x555: Pop(2); Push(Stack[-2] * Stack[-1]);
0x556: Pop(2); Push(Stack[-2] + Stack[-1]);
0x557: Push((int) 0)
0x558: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x559: IF (Stack[-1] == 0) GOTO 0x55c; Pop(1)

0x55a: Stack[-1] = "fhit"
0x55b: GOTO 0x55d

0x55c: Stack[-1] = "bhit"
0x55d: Push("hit_react")
0x55e: Push("1")
0x55f: Pop(1); Push(Stack[-3] + Stack[-1]);
0x560: Push("2")
0x561: Pop(1); Push(Stack[-4] + Stack[-1]);
0x562: Push((int) -10)
0x563: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x564: Pop(4)
0x565: Return(); Pop(14)

0x566: PushEmpty(cvector, object, int, bool, cvector, cvector, int, int, cvector, cvector, object, int, bool, cvector, cvector, int, int, cvector)
0x567: PushEmpty(bool)
0x568: Stack[-1] = (bool) 0
0x569: PushEmpty(bool)
0x56a: Stack[-1] = (bool) 0
0x56b: Push(Stack[-23])
0x56c: IF (Stack[-1] == 0) GOTO 0x571; Pop(1)

0x56d: Push((int) 4)
0x56e: Pop(1); Push((bool) Stack[-23] != Stack[-1])
0x56f: IF (Stack[-1] == 0) GOTO 0x571; Pop(1)

0x570: Stack[-1] = (bool) 1
0x571: IF (Stack[-1] == 0) GOTO 0x576; Pop(1)

0x572: Push((int) 5)
0x573: Pop(1); Push((bool) Stack[-22] != Stack[-1])
0x574: IF (Stack[-1] == 0) GOTO 0x576; Pop(1)

0x575: Stack[-1] = (bool) 1
0x576: IF (Stack[-1] == 0) GOTO 0x5a5; Pop(1)

0x577: PushEmpty(cvector, cvector)
0x578: PushEmpty(cvector, object)
0x579: Stack[-1] = Stack[-25]
0x57a: Call2 0x4b0

0x57b: Stack[-3] = Stack[-2]
0x57c: Pop(2)
0x57d: Call2 0x611

0x57e: Stack[-11] = Stack[-2]
0x57f: Pop(2)
0x580: @ CreateVectorVector(Stack[-8])
0x581: Pop(0)
0x582: Stack[-7] = (int) 1
0x583: Push("hit")
0x584: Pop(1); Push(Stack[-1] + Stack[-8]);
0x585: @ GetGeometryLocator(Stack[-1], Stack[-7], Stack[-6], Stack[-5])
0x586: Pop(1)
0x587: Pop(0); Push((bool) Stack[-6] == 0)
0x588: IF (Stack[-1] == 0) GOTO 0x58a; Pop(1)

0x589: GOTO 0x593

0x58a: Pop(0); Push(Stack[-4] | Stack[-9]);
0x58b: Push((float)0.70711)
0x58c: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x58d: IF (Stack[-1] == 0) GOTO 0x590; Pop(1)

0x58e: @@ add(Stack[-5])
0x58f: Pop(0)
0x590: Push((int) 1)
0x591: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x592: GOTO 0x583

0x593: @@ size(Stack[-3])
0x594: Pop(0)
0x595: Push(Stack[-3])
0x596: IF (Stack[-1] == 0) GOTO 0x5a4; Pop(1)

0x597: @ irand(Stack[-2], Stack[-3])
0x598: Pop(0)
0x599: @@ get(Stack[-1], Stack[-2])
0x59a: Pop(0)
0x59b: PushEmpty(object, int, float, cvector, cvector)
0x59c: Stack[-5] = Stack[-26]
0x59d: Stack[-4] = Stack[-25]
0x59e: Stack[-3] = Stack[-24]
0x59f: Stack[-2] = Stack[-6]
0x5a0: Stack[-1] = -Stack[-14]; Pop(0);
0x5a1: Call2 0x5aa

0x5a2: Pop(5)
0x5a3: Return(); Pop(18)

0x5a4: Stack[-8] = 0
0x5a5: PushEmpty(object)
0x5a6: Stack[-1] = Stack[-22]
0x5a7: Call2 0x53a

0x5a8: Pop(1)
0x5a9: Return(); Pop(18)

0x5aa: PushEmpty(object, object, object, object)
0x5ab: @ GetScene(Stack[-2])
0x5ac: Pop(0)
0x5ad: Push("scripted")
0x5ae: Push("blood_dir.xml")
0x5af: @ AddActorByType(Stack[-3], Stack[-2], Stack[-4], Stack[-8], Stack[-7], Stack[-1])
0x5b0: Pop(2)
0x5b1: PushEmpty(object)
0x5b2: Stack[-1] = Stack[-10]
0x5b3: Call2 0x53a

0x5b4: Pop(1)
0x5b5: Return(); Pop(4)

0x5b6: Stack[-1] = 0
0x5b7: Stack[-2] = 0
0x5b8: PushEmpty(bool, bool)
0x5b9: @ IsLoaded(Stack[-1])
0x5ba: Pop(0)
0x5bb: Stack[-3] = Stack[-1]
0x5bc: Return(); Pop(2)

0x5bd: PushEmpty(float, cvector, float, cvector)
0x5be: @@ GetEyesHeight(Stack[-2])
0x5bf: Pop(0)
0x5c0: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x5c1: Push(CvectorIndex(Stack[-1], 1))
0x5c2: Stack[-1] = Stack[-3]
0x5c3: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x5c4: Push("head")
0x5c5: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x5c6: Pop(1)
0x5c7: Return(); Pop(4)

0x5c8: PushEmpty(bool, bool)
0x5c9: PushEmpty(bool, int, int)
0x5ca: Stack[-2] = Stack[-7]
0x5cb: Stack[-1] = Stack[-6]
0x5cc: Call2 0x626

0x5cd: Pop(2)
0x5ce: IF (Stack[-1] == 0) GOTO 0x5d2; Pop(1)

0x5cf: Push((int) 0)
0x5d0: @ AddItem(Stack[-2], Stack[-6], Stack[-1])
0x5d1: Pop(1)
0x5d2: Return(); Pop(2)

0x5d3: PushEmpty(int, bool, int, bool)
0x5d4: PushEmpty(bool, int, int)
0x5d5: Stack[-2] = Stack[-10]
0x5d6: Stack[-1] = Stack[-9]
0x5d7: Call2 0x626

0x5d8: Pop(2)
0x5d9: IF (Stack[-1] == 0) GOTO 0x5e1; Pop(1)

0x5da: @ irand(Stack[-2], Stack[-5])
0x5db: Pop(0)
0x5dc: Push((int) 0)
0x5dd: Push((int) 1)
0x5de: Pop(1); Push(Stack[-4] + Stack[-1]);
0x5df: @ AddItem(Stack[-3], Stack[-10], Stack[-2], Stack[-1])
0x5e0: Pop(2)
0x5e1: Return(); Pop(4)

0x5e2: PushEmpty(bool, int, bool, int, bool, float, cvector, cvector, bool, int, bool, int, bool, float, cvector, cvector)
0x5e3: @ IsExisting3DSound(Stack[-8], Stack[-17])
0x5e4: Pop(0)
0x5e5: Pop(0); Push((bool) Stack[-8] == 0)
0x5e6: IF (Stack[-1] == 0) GOTO 0x5fb; Pop(1)

0x5e7: Stack[-7] = (int) 0
0x5e8: Push((int) 1)
0x5e9: Pop(1); Push(Stack[-8] + Stack[-1]);
0x5ea: Pop(1); Push(Stack[-18] + Stack[-1]);
0x5eb: @ IsExisting3DSound(Stack[-7], Stack[-1])
0x5ec: Pop(1)
0x5ed: Pop(0); Push((bool) Stack[-6] == 0)
0x5ee: IF (Stack[-1] == 0) GOTO 0x5f0; Pop(1)

0x5ef: GOTO 0x5f3

0x5f0: Push((int) 1)
0x5f1: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x5f2: GOTO 0x5e8

0x5f3: Pop(0); Push((bool) Stack[-7] == 0)
0x5f4: IF (Stack[-1] == 0) GOTO 0x5f6; Pop(1)

0x5f5: Return(); Pop(16)

0x5f6: @ irand(Stack[-5], Stack[-7])
0x5f7: Pop(0)
0x5f8: Push((int) 1)
0x5f9: Pop(1); Push(Stack[-6] + Stack[-1]);
0x5fa: Stack[-18] = Stack[-18] + Stack[-1]; Pop(1);
0x5fb: @ Is3DSoundLoaded(Stack[-4], Stack[-17])
0x5fc: Pop(0)
0x5fd: Push(Stack[-4])
0x5fe: IF (Stack[-1] == 0) GOTO 0x60a; Pop(1)

0x5ff: @ GetEyesHeight(Stack[-3])
0x600: Pop(0)
0x601: @ GetDirection(Stack[-2])
0x602: Pop(0)
0x603: Push((int) 50)
0x604: Stack[-2] = Stack[-3] * Stack[-1]; Pop(1);
0x605: Push(CvectorIndex(Stack[-1], 1))
0x606: Stack[-1] = Stack[-1] + Stack[-4]; Pop(0);
0x607: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x608: @ PlayGlobalSound(Stack[-17], Stack[-1])
0x609: Pop(0)
0x60a: Return(); Pop(16)

0x60b: PushEmpty(object, object)
0x60c: @ self(Stack[-1])
0x60d: Pop(0)
0x60e: Stack[-3] = Stack[-1]
0x60f: Return(); Pop(2)

0x610: Stack[-1] = 0
0x611: PushEmpty(float, float)
0x612: Pop(0); Push(Stack[-3] | Stack[-3]);
0x613: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x614: Push((float)0.0)
0x615: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x616: IF (Stack[-1] == 0) GOTO 0x619; Pop(1)

0x617: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x618: Return(); Pop(2)

0x619: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x61a: Return(); Pop(2)

0x61b: PushEmpty()
0x61c: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x61d: IF (Stack[-1] == 0) GOTO 0x620; Pop(1)

0x61e: Stack[-4] = Stack[-2]
0x61f: Return(); Pop(0)

0x620: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x621: IF (Stack[-1] == 0) GOTO 0x624; Pop(1)

0x622: Stack[-4] = Stack[-1]
0x623: Return(); Pop(0)

0x624: Stack[-4] = Stack[-3]
0x625: Return(); Pop(0)

0x626: PushEmpty(int, int)
0x627: @ irand(Stack[-1], Stack[-3])
0x628: Pop(0)
0x629: Stack[-5] = Stack[-1] < Stack[-4]; Pop(0);
0x62a: Return(); Pop(2)

0x62b: PushEmpty()
0x62c: Pop(0); Push((bool) Stack[-2] == 0)
0x62d: IF (Stack[-1] == 0) GOTO 0x630; Pop(1)

0x62e: Stack[-3] = (bool) 0
0x62f: Return(); Pop(0)

0x630: Push((int) 0)
0x631: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x632: IF (Stack[-1] == 0) GOTO 0x637; Pop(1)

0x633: Push((int) 8)
0x634: @ SendWorldWndMessage(Stack[-1])
0x635: Pop(1)
0x636: GOTO 0x640

0x637: Push((int) 0)
0x638: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x639: IF (Stack[-1] == 0) GOTO 0x63e; Pop(1)

0x63a: Push((int) 9)
0x63b: @ SendWorldWndMessage(Stack[-1])
0x63c: Pop(1)
0x63d: GOTO 0x640

0x63e: Stack[-3] = (bool) 0
0x63f: Return(); Pop(0)

0x640: PushEmpty(float)
0x641: Stack[-1] = Stack[-2]
0x642: Call2 0x64e

0x643: Pop(1)
0x644: PushEmpty(bool, object, string, float, float, float)
0x645: Stack[-5] = Stack[-8]
0x646: Stack[-4] = "reputation"
0x647: Stack[-3] = Stack[-7]
0x648: Stack[-2] = (int) 0
0x649: Stack[-1] = (int) 1
0x64a: Call2 0x4d0

0x64b: Pop(6)
0x64c: Stack[-3] = (bool) 1
0x64d: Return(); Pop(0)

0x64e: PushEmpty(object, object)
0x64f: @ CreateFloatVector(Stack[-1])
0x650: Pop(0)
0x651: @@ add(Stack[-3])
0x652: Pop(0)
0x653: Push((int) 16)
0x654: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x655: Pop(1)
0x656: Return(); Pop(2)

0x657: Stack[-1] = 0
0x658: PushEmpty(object, object)
0x659: @ FindActor(Stack[-1], Stack[-4])
0x65a: Pop(0)
0x65b: Pop(0); Push((bool) Stack[-1] == 0)
0x65c: IF (Stack[-1] == 0) GOTO 0x65f; Pop(1)

0x65d: Stack[-5] = (bool) 0
0x65e: Return(); Pop(2)

0x65f: @ Trigger(Stack[-1], Stack[-3])
0x660: Pop(0)
0x661: Stack[-5] = (bool) 1
0x662: Return(); Pop(2)

0x663: Stack[-1] = 0
0x664: PushEmpty(bool, bool)
0x665: @ IsPlayerActor(Stack[-3], Stack[-1])
0x666: Pop(0)
0x667: Push(Stack[-1])
0x668: IF (Stack[-1] == 0) GOTO 0x66c; Pop(1)

0x669: Push("attack")
0x66a: @ PlayGlobalMusic(Stack[-1])
0x66b: Pop(1)
0x66c: Return(); Pop(2)

0x66d: PushEmpty(string, string)
0x66e: Stack[-1] = "idle"
0x66f: Push(Stack[-3])
0x670: IF (Stack[-1] == 0) GOTO 0x672; Pop(1)

0x671: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x672: Stack[-4] = Stack[-1]
0x673: Return(); Pop(2)

0x674: PushEmpty(int, bool, int, bool)
0x675: Stack[-2] = (int) 0
0x676: Push("all")
0x677: PushEmpty(string, int)
0x678: Stack[-1] = Stack[-5]
0x679: Call2 0x66d

0x67a: Pop(1)
0x67b: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x67c: Pop(2)
0x67d: Pop(0); Push((bool) Stack[-1] == 0)
0x67e: IF (Stack[-1] == 0) GOTO 0x680; Pop(1)

0x67f: GOTO 0x683

0x680: Push((int) 1)
0x681: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x682: GOTO 0x676

0x683: Stack[-5] = Stack[-2]
0x684: Return(); Pop(4)

0x685: PushEmpty(int, int)
0x686: Push("branch")
0x687: @ GetVariable(Stack[-1], Stack[-2])
0x688: Pop(1)
0x689: Stack[-3] = Stack[-1]
0x68a: Return(); Pop(2)

0x68b: PushEmpty()
0x68c: PushEmpty(int)
0x68d: Call2 0x685

0x68e: Pop(0)
0x68f: Push((int) 1)
0x690: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x691: IF (Stack[-1] == 0) GOTO 0x695; Pop(1)

0x692: @ WorkWithCorpse(Stack[-1])
0x693: Pop(0)
0x694: GOTO 0x697

0x695: @ Barter(Stack[-1])
0x696: Pop(0)
0x697: Return(); Pop(0)

0x698: PushEmpty(int, bool, int, bool)
0x699: Pop(0); Push((bool) Stack[-6] > Stack[-5])
0x69a: IF (Stack[-1] == 0) GOTO 0x69f; Pop(1)

0x69b: Push("GenerateMoney: iMin > iMax")
0x69c: @ Trace(Stack[-1])
0x69d: Pop(1)
0x69e: Return(); Pop(4)

0x69f: Stack[-2] = (int) 0
0x6a0: Pop(0); Push((bool) Stack[-6] != Stack[-5])
0x6a1: IF (Stack[-1] == 0) GOTO 0x6a6; Pop(1)

0x6a2: Pop(0); Push(Stack[-5] - Stack[-6]);
0x6a3: @ irand(Stack[-3], Stack[-1])
0x6a4: Pop(1)
0x6a5: GOTO 0x6aa

0x6a6: Push((int) 0)
0x6a7: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x6a8: IF (Stack[-1] == 0) GOTO 0x6aa; Pop(1)

0x6a9: Return(); Pop(4)

0x6aa: Stack[-2] = Stack[-2] + Stack[-6]; Pop(0);
0x6ab: Push((int) 0)
0x6ac: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6ad: IF (Stack[-1] == 0) GOTO 0x6af; Pop(1)

0x6ae: Return(); Pop(4)

0x6af: PushEmpty(int, string)
0x6b0: Stack[-1] = "Money"
0x6b1: Call2 0x705

0x6b2: Pop(1)
0x6b3: Push((int) 0)
0x6b4: @ AddItem(Stack[-3], Stack[-2], Stack[-1], Stack[-4])
0x6b5: Pop(2)
0x6b6: Return(); Pop(4)

0x6b7: PushEmpty(object, int, bool, object, int, bool)
0x6b8: @ CreateInvItem(Stack[-3])
0x6b9: Pop(0)
0x6ba: @@ SetItemName(Stack[-7])
0x6bb: Pop(0)
0x6bc: Push("Organ")
0x6bd: Push((int) 1)
0x6be: @@ SetProperty(Stack[-2], Stack[-1])
0x6bf: Pop(2)
0x6c0: @@ GetItemID(Stack[-2])
0x6c1: Pop(0)
0x6c2: Push((int) 0)
0x6c3: Push((int) 1)
0x6c4: @ AddItem(Stack[-3], Stack[-5], Stack[-2], Stack[-1])
0x6c5: Pop(2)
0x6c6: Return(); Pop(6)

0x6c7: Stack[-3] = 0
0x6c8: PushEmpty(int)
0x6c9: Call2 0x685

0x6ca: Pop(0)
0x6cb: Push((int) 1)
0x6cc: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x6cd: IF (Stack[-1] == 0) GOTO 0x6cf; Pop(1)

0x6ce: Return(); Pop(0)

0x6cf: PushEmpty(string)
0x6d0: Stack[-1] = "liver"
0x6d1: Call2 0x6b7

0x6d2: Pop(1)
0x6d3: PushEmpty(string)
0x6d4: Stack[-1] = "kidney"
0x6d5: Call2 0x6b7

0x6d6: Pop(1)
0x6d7: PushEmpty(string)
0x6d8: Stack[-1] = "heart"
0x6d9: Call2 0x6b7

0x6da: Pop(1)
0x6db: PushEmpty(string)
0x6dc: Stack[-1] = "blood"
0x6dd: Call2 0x6b7

0x6de: Pop(1)
0x6df: Return(); Pop(0)

0x6e0: PushEmpty(int, bool, int, bool)
0x6e1: Push((int) 0)
0x6e2: @ ClearSubContainer(Stack[-1])
0x6e3: Pop(1)
0x6e4: PushEmpty(int, int)
0x6e5: Stack[-2] = (int) 600
0x6e6: Stack[-1] = (int) 1500
0x6e7: Call2 0x698

0x6e8: Pop(2)
0x6e9: PushEmpty(string, int, int)
0x6ea: Stack[-3] = "fresh_meat"
0x6eb: Stack[-2] = (int) 1
0x6ec: Stack[-1] = (int) 6
0x6ed: Call2 0x5c8

0x6ee: Pop(3)
0x6ef: PushEmpty(string, int, int, int)
0x6f0: Stack[-4] = "rusk"
0x6f1: Stack[-3] = (int) 1
0x6f2: Stack[-2] = (int) 6
0x6f3: Stack[-1] = (int) 2
0x6f4: Call2 0x5d3

0x6f5: Pop(4)
0x6f6: PushEmpty(string, int, int)
0x6f7: Stack[-3] = "gamma_pills"
0x6f8: Stack[-2] = (int) 1
0x6f9: Stack[-1] = (int) 3
0x6fa: Call2 0x5c8

0x6fb: Pop(3)
0x6fc: PushEmpty(int, string)
0x6fd: Stack[-1] = "bomber_mark"
0x6fe: Call2 0x705

0x6ff: Pop(1)
0x700: Push((int) 0)
0x701: Push((int) 1)
0x702: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x703: Pop(3)
0x704: Return(); Pop(4)

0x705: PushEmpty(int, int)
0x706: @ GetInvItemByName(Stack[-1], Stack[-3])
0x707: Pop(0)
0x708: Stack[-4] = Stack[-1]
0x709: Return(); Pop(2)

0x70a: PushEmpty(string, string, string, string)
0x70b: PushEmpty(bool, object, string)
0x70c: Stack[-2] = Stack[-8]
0x70d: Stack[-1] = "class"
0x70e: Call2 0x4c4

0x70f: Pop(2)
0x710: Pop(1); Push((bool) Stack[-1] == 0)
0x711: IF (Stack[-1] == 0) GOTO 0x714; Pop(1)

0x712: Stack[-6] = (bool) 0
0x713: Return(); Pop(4)

0x714: Push("class")
0x715: @ GetProperty(Stack[-1], Stack[-3])
0x716: Pop(1)
0x717: Push("class")
0x718: @@ GetProperty(Stack[-1], Stack[-2])
0x719: Pop(1)
0x71a: Stack[-6] = Stack[-1] == Stack[-2]; Pop(0);
0x71b: Return(); Pop(4)

0x71c: PushEmpty(float, float, float, float, float, float, float, float, float, float)
0x71d: Push(CvectorIndex(Stack[-11], 0))
0x71e: Push(CvectorIndex(Stack[-12], 0))
0x71f: Pop(2); Push(Stack[-2] * Stack[-1]);
0x720: Push(CvectorIndex(Stack[-12], 2))
0x721: Push(CvectorIndex(Stack[-13], 2))
0x722: Pop(2); Push(Stack[-2] * Stack[-1]);
0x723: Pop(2); Push(Stack[-2] + Stack[-1]);
0x724: Stack[-6] = Sqrt(Stack[-1]); Pop(1);
0x725: Push(CvectorIndex(Stack[-11], 1))
0x726: Stack[-5] = Stack[-1] / Stack[-6]; Pop(1);
0x727: Push(CvectorIndex(Stack[-13], 0))
0x728: Push(CvectorIndex(Stack[-13], 0))
0x729: Pop(2); Push(Stack[-2] - Stack[-1]);
0x72a: Push(CvectorIndex(Stack[-14], 0))
0x72b: Push(CvectorIndex(Stack[-14], 0))
0x72c: Pop(2); Push(Stack[-2] - Stack[-1]);
0x72d: Pop(2); Push(Stack[-2] * Stack[-1]);
0x72e: Push(CvectorIndex(Stack[-14], 2))
0x72f: Push(CvectorIndex(Stack[-14], 2))
0x730: Pop(2); Push(Stack[-2] - Stack[-1]);
0x731: Push(CvectorIndex(Stack[-15], 2))
0x732: Push(CvectorIndex(Stack[-15], 2))
0x733: Pop(2); Push(Stack[-2] - Stack[-1]);
0x734: Pop(2); Push(Stack[-2] * Stack[-1]);
0x735: Pop(2); Push(Stack[-2] + Stack[-1]);
0x736: Stack[-4] = Sqrt(Stack[-1]); Pop(1);
0x737: Push((float)500.0)
0x738: Pop(0); Push(Stack[-4] * Stack[-5]);
0x739: Push(CvectorIndex(Stack[-14], 1))
0x73a: Push(CvectorIndex(Stack[-16], 1))
0x73b: Pop(2); Push(Stack[-2] - Stack[-1]);
0x73c: Pop(2); Push(Stack[-2] - Stack[-1]);
0x73d: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0x73e: Push((int) 0)
0x73f: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x740: IF (Stack[-1] == 0) GOTO 0x743; Pop(1)

0x741: Stack[-14] = (int) -1
0x742: Return(); Pop(10)

0x743: Pop(0); Push(Stack[-3] / Stack[-5]);
0x744: Pop(0); Push(Sqrt(Stack[-3]))
0x745: Stack[-3] = Stack[-2] * Stack[-1]; Pop(2);
0x746: Stack[-14] = Stack[-1]
0x747: Return(); Pop(10)

0x748: PushEmpty()
0x749: Push((int) 200)
0x74a: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x74b: IF (Stack[-1] == 0) GOTO 0x74f; Pop(1)

0x74c: Stack[-2] = (int) 1
0x74d: Return(); Pop(0)

0x74e: GOTO 0x754

0x74f: Push((int) 1000)
0x750: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x751: IF (Stack[-1] == 0) GOTO 0x754; Pop(1)

0x752: Stack[-2] = (int) 2
0x753: Return(); Pop(0)

0x754: Stack[-2] = (int) 3
0x755: Return(); Pop(0)

0x756: PushEmpty()
0x757: Push((int) 1)
0x758: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x759: IF (Stack[-1] == 0) GOTO 0x75c; Pop(1)

0x75a: Stack[-2] = (int) 30
0x75b: Return(); Pop(0)

0x75c: Stack[-2] = (int) 700
0x75d: Return(); Pop(0)

0x75e: PushEmpty()
0x75f: Push((int) 10)
0x760: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x761: IF (Stack[-1] == 0) GOTO 0x765; Pop(1)

0x762: Stack[-3] = (int) 10
0x763: Return(); Pop(0)

0x764: GOTO 0x76a

0x765: Push((int) 1500)
0x766: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x767: IF (Stack[-1] == 0) GOTO 0x76a; Pop(1)

0x768: Stack[-3] = (int) 1500
0x769: Return(); Pop(0)

0x76a: Stack[-3] = Stack[-1]
0x76b: Return(); Pop(0)

0x76c: PushEmpty()
0x76d: PushEmpty(bool, object)
0x76e: Stack[-1] = Stack[-3]
0x76f: Call2 0x7ef

0x770: Stack[-4] = Stack[-2]
0x771: Pop(2)
0x772: Return(); Pop(0)

0x773: PushEmpty()
0x774: PushEmpty(object)
0x775: Stack[-1] = Stack[-2]
0x776: Push(-1, 3); TaskCall(2)
0x777: Call2 0x15d

0x778: Pop(-1, 3); TaskReturn
0x779: Pop(1)
0x77a: Return(); Pop(0)

0x77b: PushEmpty()
0x77c: PushEmpty(bool, object)
0x77d: Stack[-1] = Stack[-3]
0x77e: Call2 0x7ef

0x77f: Stack[-4] = Stack[-2]
0x780: Pop(2)
0x781: Return(); Pop(0)

0x782: PushEmpty()
0x783: PushEmpty(object)
0x784: Stack[-1] = Stack[-2]
0x785: Push(-1, 2); TaskCall(4)
0x786: Call2 0x2ab

0x787: Pop(-1, 2); TaskReturn
0x788: Pop(1)
0x789: @ ResetAAS()
0x78a: Pop(0)
0x78b: Return(); Pop(0)

0x78c: PushEmpty()
0x78d: PushEmpty(object)
0x78e: Stack[-1] = Stack[-2]
0x78f: Call2 0x81f

0x790: Pop(1)
0x791: PushEmpty(object)
0x792: Stack[-1] = Stack[-2]
0x793: Push(-1, 2); TaskCall(4)
0x794: Call2 0x2ab

0x795: Pop(-1, 2); TaskReturn
0x796: Pop(1)
0x797: @ ResetAAS()
0x798: Pop(0)
0x799: Return(); Pop(0)

0x79a: PushEmpty()
0x79b: PushEmpty(object, int, float)
0x79c: Stack[-3] = Stack[-7]
0x79d: Stack[-2] = Stack[-6]
0x79e: Stack[-1] = Stack[-5]
0x79f: Call2 0x566

0x7a0: Pop(3)
0x7a1: Return(); Pop(0)

0x7a2: PushEmpty()
0x7a3: PushEmpty(object, int, float, cvector, cvector)
0x7a4: Stack[-5] = Stack[-11]
0x7a5: Stack[-4] = Stack[-10]
0x7a6: Stack[-3] = Stack[-9]
0x7a7: Stack[-2] = Stack[-7]
0x7a8: Stack[-1] = Stack[-6]
0x7a9: Call2 0x5aa

0x7aa: Pop(5)
0x7ab: Return(); Pop(0)

0x7ac: PushEmpty()
0x7ad: PushEmpty(object)
0x7ae: Stack[-1] = Stack[-2]
0x7af: Call2 0x829

0x7b0: Pop(1)
0x7b1: PushEmpty(bool, object)
0x7b2: Stack[-1] = Stack[-3]
0x7b3: Call2 0x4bf

0x7b4: Pop(1)
0x7b5: IF (Stack[-1] == 0) GOTO 0x7bb; Pop(1)

0x7b6: PushEmpty(bool, object, float)
0x7b7: Stack[-2] = Stack[-4]
0x7b8: Stack[-1] = (float) 0.05
0x7b9: Call2 0x62b

0x7ba: Pop(3)
0x7bb: PushEmpty(object)
0x7bc: Stack[-1] = Stack[-2]
0x7bd: Push(-1, 0); TaskCall(1)
0x7be: Call2 0xb9

0x7bf: Pop(-1, 0); TaskReturn
0x7c0: Pop(1)
0x7c1: Return(); Pop(0)

0x7c2: PushEmpty(float, float)
0x7c3: Push("health")
0x7c4: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x7c5: IF (Stack[-1] == 0) GOTO 0x7ce; Pop(1)

0x7c6: Push("health")
0x7c7: @ GetProperty(Stack[-1], Stack[-2])
0x7c8: Pop(1)
0x7c9: Push((int) 0)
0x7ca: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x7cb: IF (Stack[-1] == 0) GOTO 0x7ce; Pop(1)

0x7cc: @ SignalDeath(Stack[-4])
0x7cd: Pop(0)
0x7ce: Return(); Pop(2)

0x7cf: PushEmpty()
0x7d0: PushEmpty(object)
0x7d1: Stack[-1] = Stack[-2]
0x7d2: Call2 0x7ac

0x7d3: Pop(1)
0x7d4: Return(); Pop(0)

0x7d5: PushEmpty(bool, bool)
0x7d6: PushEmpty(bool, object)
0x7d7: Stack[-1] = Stack[-5]
0x7d8: Call2 0x70a

0x7d9: Pop(1)
0x7da: IF (Stack[-1] == 0) GOTO 0x7ec; Pop(1)

0x7db: @ CanSee(Stack[-1], Stack[-4])
0x7dc: Pop(0)
0x7dd: PushEmpty(bool)
0x7de: Stack[-1] = (bool) 1
0x7df: Push(Stack[-2])
0x7e0: IF (Stack[-1] == 0) GOTO 0x7e9; Pop(1)

0x7e1: PushEmpty(float, object)
0x7e2: Stack[-1] = Stack[-7]
0x7e3: Call2 0x4b7

0x7e4: Pop(1)
0x7e5: Push((float)490000.0)
0x7e6: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x7e7: IF (Stack[-1] == 0) GOTO 0x7e9; Pop(1)

0x7e8: Stack[-1] = (bool) 0
0x7e9: IF (Stack[-1] == 0) GOTO 0x7ec; Pop(1)

0x7ea: Stack[-5] = (bool) 1
0x7eb: Return(); Pop(2)

0x7ec: Stack[-5] = (bool) 0
0x7ed: Return(); Pop(2)

0x7ee: Return(); Pop(0)

0x7ef: PushEmpty(string, string)
0x7f0: PushEmpty(bool, object)
0x7f1: Stack[-1] = Stack[-5]
0x7f2: Call2 0x50f

0x7f3: Pop(1)
0x7f4: Pop(1); Push((bool) Stack[-1] == 0)
0x7f5: IF (Stack[-1] == 0) GOTO 0x7f8; Pop(1)

0x7f6: Stack[-4] = (bool) 0
0x7f7: Return(); Pop(2)

0x7f8: PushEmpty(bool, object, string)
0x7f9: Stack[-2] = Stack[-6]
0x7fa: Stack[-1] = "health"
0x7fb: Call2 0x4c4

0x7fc: Pop(2)
0x7fd: Pop(1); Push((bool) Stack[-1] == 0)
0x7fe: IF (Stack[-1] == 0) GOTO 0x801; Pop(1)

0x7ff: Stack[-4] = (bool) 0
0x800: Return(); Pop(2)

0x801: PushEmpty(bool, object, string)
0x802: Stack[-2] = Stack[-6]
0x803: Stack[-1] = "class"
0x804: Call2 0x4c4

0x805: Pop(2)
0x806: IF (Stack[-1] == 0) GOTO 0x81d; Pop(1)

0x807: Push("class")
0x808: @@ GetProperty(Stack[-1], Stack[-2])
0x809: Pop(1)
0x80a: PushEmpty(bool)
0x80b: Stack[-1] = (bool) 1
0x80c: PushEmpty(bool)
0x80d: Stack[-1] = (bool) 1
0x80e: Push("rat")
0x80f: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x810: IF (Stack[-1] == 0) GOTO 0x815; Pop(1)

0x811: Push("rat_big")
0x812: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x813: IF (Stack[-1] == 0) GOTO 0x815; Pop(1)

0x814: Stack[-1] = (bool) 0
0x815: IF (Stack[-1] == 0) GOTO 0x81a; Pop(1)

0x816: Push("bomber")
0x817: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x818: IF (Stack[-1] == 0) GOTO 0x81a; Pop(1)

0x819: Stack[-1] = (bool) 0
0x81a: IF (Stack[-1] == 0) GOTO 0x81d; Pop(1)

0x81b: Stack[-4] = (bool) 0
0x81c: Return(); Pop(2)

0x81d: Stack[-4] = (bool) 1
0x81e: Return(); Pop(2)

0x81f: PushEmpty()
0x820: Return(); Pop(0)

0x821: PushEmpty(object)
0x822: Call2 0x60b

0x823: Pop(0)
0x824: @ RemoveActor(Stack[-1])
0x825: Pop(1)
0x826: @ Hold()
0x827: Pop(0)
0x828: Return(); Pop(0)

0x829: PushEmpty()
0x82a: PushEmpty(bool, string, string)
0x82b: Stack[-2] = "quest_d6_02"
0x82c: Stack[-1] = "gorbun_death"
0x82d: Call2 0x658

0x82e: Pop(3)
0x82f: Return(); Pop(0)

