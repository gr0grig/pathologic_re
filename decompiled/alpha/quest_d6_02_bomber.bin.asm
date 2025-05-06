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
	IsDead
	IsDead
	GetScene
	noaccess
	GetProperty
	blood.xml
	fhit
	bhit
	hit_react
	1
	2
	idle
	GenerateMoney: iMin > iMax
	Money
	rifle_ammo
	rusk
	health
	class
	bomber
	rat

Import:
	SetTimer (2 args)
	KillTimer (1 args)
	GetBrightness (1 args)
	rand (2 args)
	Sleep (1 args)
	GetPosition (1 args)
	GetCameraFarDistance (1 args)
	GetRandomPFPointInCircle (4 args)
	FindShiftedPathTo (2 args)
	RotatePath (2 args)
	FollowPath (3 args)
	RequestClearPath (1 args)
	Stop (0 args)
	StopGroup0 (0 args)
	SetRTEnvelope (2 args)
	Hold (0 args)
	IsOverrideActive (1 args)
	WorkWithCorpse (1 args)
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
	IsPlayerActor (2 args)
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
	RandVec2D (2 args)
	Speak (1 args)
	GetSeeThreshold (1 args)
	GetSeeFOV (1 args)
	SetSeeThreshold (1 args)
	SetSeeFOV (1 args)
	rand (1 args)
	Rotate (3 args)
	GetEyesHeight (1 args)
	GetSecondaryAnimationType (1 args)
	FadeSecondaryAnimation (4 args)
	IsLoaded (1 args)
	self (1 args)
	HasAnimation (3 args)
	GetInvItemByName (2 args)
	AddItem (4 args)
	ClearSubContainer (1 args)
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
		EVENT_30 Op = 0x31 Vars = (object, object)
		EVENT_41 Op = 0x44 Vars = (object)
		EVENT_7 Op = 0x4d Vars = (int)
		EVENT_10 Op = 0x9c Vars = (object)
		EVENT_28 Op = 0xa0 Vars = ()
	GTASK_1  Params = 1
		EVENT_0 Op = 0xc4 Vars = (object)
		EVENT_22 Op = 0x139 Vars = (object, int, float, float)
		EVENT_16 Op = 0x13b Vars = (object, string)
		EVENT_41 Op = 0x13d Vars = (object)
	GTASK_2 Vars = (cvector, object, object) Params = 1
		EVENT_1 Op = 0x146 Vars = (object)
		EVENT_17 Op = 0x154 Vars = (object)
		EVENT_30 Op = 0x15d Vars = (object, object)
		EVENT_7 Op = 0x1b4 Vars = (int)
		EVENT_3 Op = 0x1c4 Vars = (object)
		EVENT_28 Op = 0x1e2 Vars = ()
		EVENT_41 Op = 0x1eb Vars = (object)
	GTASK_3  Params = 0
		EVENT_1 Op = 0x1f4 Vars = (object)
		EVENT_3 Op = 0x202 Vars = (object)
		EVENT_17 Op = 0x210 Vars = (object)
		EVENT_30 Op = 0x219 Vars = (object, object)
	GTASK_4 Vars = (object, bool) Params = 1
		EVENT_1 Op = 0x318 Vars = (object)
		EVENT_2 Op = 0x31d Vars = (object)
		EVENT_30 Op = 0x322 Vars = (object, object)
	GTASK_5 Vars = (object) Params = 1
		EVENT_1 Op = 0x32e Vars = (object)
		EVENT_2 Op = 0x334 Vars = (object)
		EVENT_17 Op = 0x339 Vars = (object)
		EVENT_30 Op = 0x33f Vars = (object, object)
	GTASK_6 Vars = (float, float, object) Params = 2
		EVENT_1 Op = 0x389 Vars = (object)
		EVENT_3 Op = 0x397 Vars = (object)
		EVENT_17 Op = 0x3ae Vars = (object)
		EVENT_30 Op = 0x3b7 Vars = (object, object)
		EVENT_41 Op = 0x3cc Vars = (object)
	GTASK_7  Params = 0
		EVENT_1 Op = 0x3dd Vars = (object)
		EVENT_3 Op = 0x3eb Vars = (object)
		EVENT_17 Op = 0x3f9 Vars = (object)
		EVENT_30 Op = 0x402 Vars = (object, object)
		EVENT_41 Op = 0x417 Vars = (object)
		EVENT_7 Op = 0x420 Vars = (int)

Events:
EVENT_22 Op = 0x5e6 Vars = (object, int, float, float)
EVENT_16 Op = 0x5fa Vars = (object, string)
EVENT_41 Op = 0x607 Vars = (object)
EVENT_6 Op = 0x65e Vars = ()

0x0: PushEmpty()
0x1: Call 0x632

0x2: Pop(0)
0x3: Push((int) 90)
0x4: Push((int) 10)
0x5: @ SetTimer(Stack[-2], Stack[-1])
0x6: Pop(2)
0x7: PushEmpty()
0x8: Call 0x63

0x9: Pop(0)
0xa: GOTO 0x3

0xb: Return(); Pop(0)

0xc: PushEmpty()
0xd: PushEmpty(bool, object)
0xe: Stack[-1] = Stack[-3]
0xf: Call 0x5c7

0x10: Pop(1)
0x11: IF (Stack[-1] == 0) GOTO 0x19; Pop(1)

0x12: PushEmpty()
0x13: Call 0x3d

0x14: Pop(0)
0x15: PushEmpty(object)
0x16: Stack[-1] = Stack[-2]
0x17: Call 0x5ce

0x18: Pop(1)
0x19: Return(); Pop(0)

0x1a: PushEmpty()
0x1b: PushEmpty(bool, object)
0x1c: Stack[-1] = Stack[-3]
0x1d: Call 0x5b8

0x1e: Pop(1)
0x1f: IF (Stack[-1] == 0) GOTO 0x27; Pop(1)

0x20: PushEmpty()
0x21: Call 0x3d

0x22: Pop(0)
0x23: PushEmpty(object)
0x24: Stack[-1] = Stack[-2]
0x25: Call 0x5bf

0x26: Pop(1)
0x27: Return(); Pop(0)

0x28: PushEmpty()
0x29: PushEmpty()
0x2a: Call 0x3d

0x2b: Pop(0)
0x2c: PushEmpty(object)
0x2d: Stack[-1] = Stack[-2]
0x2e: Call 0x5d8

0x2f: Pop(1)
0x30: Return(); Pop(0)

0x31: PushEmpty()
0x32: PushEmpty(bool, object, object)
0x33: Stack[-2] = Stack[-5]
0x34: Stack[-1] = Stack[-4]
0x35: Call 0x60d

0x36: Pop(2)
0x37: IF (Stack[-1] == 0) GOTO 0x3c; Pop(1)

0x38: PushEmpty(object)
0x39: Stack[-1] = Stack[-3]
0x3a: Call 0x28

0x3b: Pop(1)
0x3c: Return(); Pop(0)

0x3d: Push((int) 90)
0x3e: @ KillTimer(Stack[-1])
0x3f: Pop(1)
0x40: PushEmpty()
0x41: Call 0xa3

0x42: Pop(0)
0x43: Return(); Pop(0)

0x44: PushEmpty()
0x45: PushEmpty()
0x46: Call 0x3d

0x47: Pop(0)
0x48: PushEmpty(object)
0x49: Stack[-1] = Stack[-2]
0x4a: Call 0x607

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
0x5b: Call 0x3d

0x5c: Pop(0)
0x5d: PushEmpty()
0x5e: Push(-0, 0); TaskCall(7)
0x5f: Call 0x3d5

0x60: Pop(-0, 0); TaskReturn
0x61: Pop(0)
0x62: Return(); Pop(2)

0x63: PushEmpty(float, cvector, cvector, float, bool, object, bool, float, cvector, cvector, float, bool, object, bool)
0x64: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x65: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x66: Push((float)0.5)
0x67: @ rand(Stack[-8], Stack[-1])
0x68: Pop(1)
0x69: @ Sleep(Stack[-7])
0x6a: Pop(0)
0x6b: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x6c: IF (Stack[-1] == 0) GOTO 0x9b; Pop(1)

0x6d: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == 0)
0x6e: IF (Stack[-1] == 0) GOTO 0x7f; Pop(1)

0x6f: @ GetPosition(Stack[-5])
0x70: Pop(0)
0x71: @ GetCameraFarDistance(Stack[-4])
0x72: Pop(0)
0x73: Push((float)2.5)
0x74: Stack[-5] = Stack[-5] * Stack[-1]; Pop(1);
0x75: @ GetRandomPFPointInCircle(Stack[-6], Stack[-5], Stack[-4], Stack[-3])
0x76: Pop(0)
0x77: Push(Stack[-3])
0x78: IF (Stack[-1] == 0) GOTO 0x7a; Pop(1)

0x79: GOTO 0x7e

0x7a: Push((int) 1)
0x7b: @ Sleep(Stack[-1])
0x7c: Pop(1)
0x7d: GOTO 0x6f

0x7e: GOTO 0x80

0x7f: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x80: @ FindShiftedPathTo(Stack[-2], Stack[-6])
0x81: Pop(0)
0x82: Pop(0); Push(( Stack[-2] != 0 )
0x83: IF (Stack[-1] == 0) GOTO 0x96; Pop(1)

0x84: @ RotatePath(Stack[-2], Stack[-1])
0x85: Pop(0)
0x86: Push(Stack[-1])
0x87: IF (Stack[-1] == 0) GOTO 0x95; Pop(1)

0x88: PushEmpty(bool)
0x89: Call 0xaa

0x8a: Pop(0)
0x8b: @ FollowPath(Stack[-3], Stack[-1], Stack[-2])
0x8c: Pop(1)
0x8d: Stack[-2] = 0
0x8e: Push(Stack[-1])
0x8f: IF (Stack[-1] == 0) GOTO 0x95; Pop(1)

0x90: PushEmpty()
0x91: Push(-0, 0); TaskCall(3)
0x92: Call 0x225

0x93: Pop(-0, 0); TaskReturn
0x94: Pop(0)
0x95: GOTO 0x99

0x96: Push((int) 1)
0x97: @ Sleep(Stack[-1])
0x98: Pop(1)
0x99: Stack[-2] = 0
0x9a: GOTO 0x6b

0x9b: Return(); Pop(14)

0x9c: PushEmpty()
0x9d: @ RequestClearPath(Stack[-1])
0x9e: Pop(0)
0x9f: Return(); Pop(0)

0xa0: @ Stop()
0xa1: Pop(0)
0xa2: Return(); Pop(0)

0xa3: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0xa4: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0xa5: @ Stop()
0xa6: Pop(0)
0xa7: @ StopGroup0()
0xa8: Pop(0)
0xa9: Return(); Pop(0)

0xaa: Stack[-1] = (bool) 0
0xab: Return(); Pop(0)

0xac: PushEmpty()
0xad: PushEmpty()
0xae: Call 0x53e

0xaf: Pop(0)
0xb0: PushEmpty(object)
0xb1: Stack[-1] = Stack[-2]
0xb2: Call 0xb5

0xb3: Pop(1)
0xb4: Return(); Pop(0)

0xb5: PushEmpty()
0xb6: EventDisable(0)
0xb7: PushEmpty(object)
0xb8: Stack[-1] = Stack[-2]
0xb9: Call 0xcc

0xba: Pop(1)
0xbb: Push((int) 50)
0xbc: Push((int) 40)
0xbd: @ SetRTEnvelope(Stack[-2], Stack[-1])
0xbe: Pop(2)
0xbf: EventEnable(0)
0xc0: @ Hold()
0xc1: Pop(0)
0xc2: GOTO 0xc0

0xc3: Return(); Pop(0)

0xc4: PushEmpty(bool, bool)
0xc5: @ IsOverrideActive(Stack[-1])
0xc6: Pop(0)
0xc7: Pop(0); Push((bool) Stack[-1] == 0)
0xc8: IF (Stack[-1] == 0) GOTO 0xcb; Pop(1)

0xc9: @ WorkWithCorpse(Stack[-3])
0xca: Pop(0)
0xcb: Return(); Pop(2)

0xcc: PushEmpty(cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector, cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector)
0xcd: Pop(0); Push((bool) Stack[-21] == 0)
0xce: IF (Stack[-1] == 0) GOTO 0xd4; Pop(1)

0xcf: PushEmpty(string)
0xd0: Stack[-1] = "fdie"
0xd1: Call 0x123

0xd2: Pop(1)
0xd3: GOTO 0x122

0xd4: @@ GetPosition(Stack[-10])
0xd5: Pop(0)
0xd6: @ GetPosition(Stack[-9])
0xd7: Pop(0)
0xd8: @ GetDirection(Stack[-8])
0xd9: Pop(0)
0xda: Stack[-7] = Stack[-9] - Stack[-10]; Pop(0);
0xdb: Push(CvectorIndex(Stack[-7], 0))
0xdc: Push(CvectorIndex(Stack[-9], 0))
0xdd: Pop(2); Push(Stack[-2] * Stack[-1]);
0xde: Push(CvectorIndex(Stack[-8], 2))
0xdf: Push(CvectorIndex(Stack[-10], 2))
0xe0: Pop(2); Push(Stack[-2] * Stack[-1]);
0xe1: Pop(2); Push(Stack[-2] + Stack[-1]);
0xe2: Push((int) 0)
0xe3: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0xe4: IF (Stack[-1] == 0) GOTO 0xe7; Pop(1)

0xe5: Stack[-6] = "fdie"
0xe6: GOTO 0xe8

0xe7: Stack[-6] = "bdie"
0xe8: @ RemoveRTEnvelope()
0xe9: Pop(0)
0xea: @ SetDeathState()
0xeb: Pop(0)
0xec: @ Stop()
0xed: Pop(0)
0xee: @ StopAsync()
0xef: Pop(0)
0xf0: Stack[-5] = Stack[-21]
0xf1: Push("GetScriptProperty")
0xf2: Push((int) 2)
0xf3: Pop(2); Push(IsFuncExist(Stack[-23], Stack[-2], Stack[-1]))
0xf4: IF (Stack[-1] == 0) GOTO 0x100; Pop(1)

0xf5: Push("Owner")
0xf6: @@ HasScriptProperty(Stack[-5], Stack[-1])
0xf7: Pop(1)
0xf8: Push(Stack[-4])
0xf9: IF (Stack[-1] == 0) GOTO 0x100; Pop(1)

0xfa: Push("Owner")
0xfb: @@ GetScriptProperty(Stack[-6], Stack[-1])
0xfc: Pop(1)
0xfd: Pop(0); Push((bool) Stack[-5] == 0)
0xfe: IF (Stack[-1] == 0) GOTO 0x100; Pop(1)

0xff: Stack[-5] = Stack[-21]
0x100: Push("@GetEyesHeight")
0x101: Push((int) 1)
0x102: Pop(2); Push(IsFuncExist(Stack[-7], Stack[-2], Stack[-1]))
0x103: IF (Stack[-1] == 0) GOTO 0x10f; Pop(1)

0x104: @@ GetEyesHeight(Stack[-2])
0x105: Pop(0)
0x106: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x107: Push(CvectorIndex(Stack[-1], 1))
0x108: Stack[-1] = Stack[-3]
0x109: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x10a: Push("head")
0x10b: @ LookAsync(Stack[-22], Stack[-1], Stack[-2])
0x10c: Pop(1)
0x10d: Stack[-3] = (bool) 1
0x10e: GOTO 0x110

0x10f: Stack[-3] = (bool) 0
0x110: Push("all")
0x111: @ PlayAnimation(Stack[-1], Stack[-7])
0x112: Pop(1)
0x113: @ WaitForAnimEnd()
0x114: Pop(0)
0x115: Push(Stack[-3])
0x116: IF (Stack[-1] == 0) GOTO 0x11c; Pop(1)

0x117: @ StopAsync()
0x118: Pop(0)
0x119: Push("head")
0x11a: @ UnlookAsync(Stack[-1])
0x11b: Pop(1)
0x11c: Push("all")
0x11d: @ LockAnimationEnd(Stack[-1], Stack[-7])
0x11e: Pop(1)
0x11f: @ RemoveEnvelope()
0x120: Pop(0)
0x121: Stack[-5] = 0
0x122: Return(); Pop(20)

0x123: PushEmpty()
0x124: @ RemoveRTEnvelope()
0x125: Pop(0)
0x126: @ SetDeathState()
0x127: Pop(0)
0x128: @ Stop()
0x129: Pop(0)
0x12a: @ StopAsync()
0x12b: Pop(0)
0x12c: @ StopSecondaryAnimation()
0x12d: Pop(0)
0x12e: Push("all")
0x12f: @ PlayAnimation(Stack[-1], Stack[-2])
0x130: Pop(1)
0x131: @ WaitForAnimEnd()
0x132: Pop(0)
0x133: Push("all")
0x134: @ LockAnimationEnd(Stack[-1], Stack[-2])
0x135: Pop(1)
0x136: @ RemoveEnvelope()
0x137: Pop(0)
0x138: Return(); Pop(0)

0x139: PushEmpty()
0x13a: Return(); Pop(0)

0x13b: PushEmpty()
0x13c: Return(); Pop(0)

0x13d: PushEmpty()
0x13e: Return(); Pop(0)

0x13f: PushEmpty()
0x140: PushEmpty(object, bool)
0x141: Stack[-2] = Stack[-3]
0x142: Stack[-1] = (bool) 0
0x143: Call 0x183

0x144: Pop(2)
0x145: Return(); Pop(0)

0x146: PushEmpty()
0x147: PushEmpty(bool, object)
0x148: Stack[-1] = Stack[-3]
0x149: Call 0x5c7

0x14a: Pop(1)
0x14b: IF (Stack[-1] == 0) GOTO 0x153; Pop(1)

0x14c: PushEmpty()
0x14d: Call 0x1e5

0x14e: Pop(0)
0x14f: PushEmpty(object)
0x150: Stack[-1] = Stack[-2]
0x151: Call 0x5ce

0x152: Pop(1)
0x153: Return(); Pop(0)

0x154: PushEmpty()
0x155: PushEmpty()
0x156: Call 0x1e5

0x157: Pop(0)
0x158: PushEmpty(object)
0x159: Stack[-1] = Stack[-2]
0x15a: Call 0x5d8

0x15b: Pop(1)
0x15c: Return(); Pop(0)

0x15d: PushEmpty()
0x15e: PushEmpty(bool, object, object)
0x15f: Stack[-2] = Stack[-5]
0x160: Stack[-1] = Stack[-4]
0x161: Call 0x60d

0x162: Pop(2)
0x163: IF (Stack[-1] == 0) GOTO 0x168; Pop(1)

0x164: PushEmpty(object)
0x165: Stack[-1] = Stack[-3]
0x166: Call 0x154

0x167: Pop(1)
0x168: Return(); Pop(0)

0x169: PushEmpty(bool, bool)
0x16a: @ IsPlayerActor(Stack[-4], Stack[-1])
0x16b: Pop(0)
0x16c: Push(Stack[-1])
0x16d: IF (Stack[-1] == 0) GOTO 0x170; Pop(1)

0x16e: Stack[-5] = (bool) 0
0x16f: Return(); Pop(2)

0x170: PushEmpty(bool, object)
0x171: Stack[-1] = Stack[-5]
0x172: Call 0x633

0x173: Pop(1)
0x174: Pop(1); Push((bool) Stack[-1] == 0)
0x175: IF (Stack[-1] == 0) GOTO 0x178; Pop(1)

0x176: Stack[-5] = (bool) 0
0x177: Return(); Pop(2)

0x178: @ IsPlayerActor(Stack[-3], Stack[-1])
0x179: Pop(0)
0x17a: Stack[-5] = Stack[-1]
0x17b: Return(); Pop(2)

0x17c: PushEmpty()
0x17d: PushEmpty(bool, object)
0x17e: Stack[-1] = Stack[-3]
0x17f: Call 0x633

0x180: Stack[-4] = Stack[-2]
0x181: Pop(2)
0x182: Return(); Pop(0)

0x183: PushEmpty(bool, bool)
0x184: Stack[1 + Tasks[-1].StackPointer] = Stack[-4]
0x185: @@ GetPFPosition(Stack[-0])
0x186: Pop(0)
0x187: Push((int) 61)
0x188: Push((float)0.5)
0x189: @ SetTimer(Stack[-2], Stack[-1])
0x18a: Pop(2)
0x18b: @ FindPathTo(Stack[-2], Stack[-0])
0x18c: Pop(0)
0x18d: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x18e: IF (Stack[-1] == 0) GOTO 0x193; Pop(1)

0x18f: Push("Can't find path to noise source")
0x190: @ Trace(Stack[-1])
0x191: Pop(1)
0x192: GOTO 0x1b0

0x193: @ FollowPath(Stack[-2], Stack[-3], Stack[-1])
0x194: Pop(0)
0x195: Pop(0); Push((bool) Stack[-1] == 0)
0x196: IF (Stack[-1] == 0) GOTO 0x19b; Pop(1)

0x197: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x198: IF (Stack[-1] == 0) GOTO 0x19a; Pop(1)

0x199: GOTO 0x1b0

0x19a: GOTO 0x1ae

0x19b: Push((int) 61)
0x19c: @ KillTimer(Stack[-1])
0x19d: Pop(1)
0x19e: PushEmpty(object, object)
0x19f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1a0: Push(-2, 3); TaskCall(6)
0x1a1: Call 0x35b

0x1a2: Pop(-2, 3); TaskReturn
0x1a3: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x1a4: Pop(2)
0x1a5: Push((int) 61)
0x1a6: Push((float)0.5)
0x1a7: @ SetTimer(Stack[-2], Stack[-1])
0x1a8: Pop(2)
0x1a9: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == 0)
0x1aa: IF (Stack[-1] == 0) GOTO 0x1ac; Pop(1)

0x1ab: GOTO 0x1b0

0x1ac: @@ GetPFPosition(Stack[-0])
0x1ad: Pop(0)
0x1ae: Pop(0); Push(( Stack[2 + Tasks[-1].StackPointer] != 0 )
0x1af: IF (Stack[-1] == 0) GOTO 0x18b; Pop(1)

0x1b0: Push((int) 61)
0x1b1: @ KillTimer(Stack[-1])
0x1b2: Pop(1)
0x1b3: Return(); Pop(2)

0x1b4: PushEmpty()
0x1b5: Push((int) 61)
0x1b6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1b7: IF (Stack[-1] == 0) GOTO 0x1c3; Pop(1)

0x1b8: PushEmpty(bool, object)
0x1b9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1ba: Call 0x17c

0x1bb: Pop(1)
0x1bc: Pop(1); Push((bool) Stack[-1] == 0)
0x1bd: IF (Stack[-1] == 0) GOTO 0x1c1; Pop(1)

0x1be: @ Stop()
0x1bf: Pop(0)
0x1c0: Stack[2 + Tasks[-1].StackPointer] = 0
0x1c1: @ ResetAAS()
0x1c2: Pop(0)
0x1c3: Return(); Pop(0)

0x1c4: PushEmpty()
0x1c5: Pop(0); Push((bool) Stack[-1] == Stack[1 + Tasks[-1].StackPointer])
0x1c6: IF (Stack[-1] == 0) GOTO 0x1d3; Pop(1)

0x1c7: PushEmpty(bool, object)
0x1c8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1c9: Call 0x17c

0x1ca: Pop(1)
0x1cb: Pop(1); Push((bool) Stack[-1] == 0)
0x1cc: IF (Stack[-1] == 0) GOTO 0x1d2; Pop(1)

0x1cd: PushEmpty()
0x1ce: Call 0x1e5

0x1cf: Pop(0)
0x1d0: Stack[2 + Tasks[-1].StackPointer] = 0
0x1d1: Return(); Pop(0)

0x1d2: GOTO 0x1da

0x1d3: PushEmpty(bool, object, object)
0x1d4: Stack[-2] = Stack[-4]
0x1d5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1d6: Call 0x169

0x1d7: Pop(2)
0x1d8: IF (Stack[-1] == 0) GOTO 0x1da; Pop(1)

0x1d9: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x1da: @@ GetPFPosition(Stack[-0])
0x1db: Pop(0)
0x1dc: Push("new hunt point")
0x1dd: @ Trace(Stack[-1])
0x1de: Pop(1)
0x1df: @ Stop()
0x1e0: Pop(0)
0x1e1: Return(); Pop(0)

0x1e2: @ Stop()
0x1e3: Pop(0)
0x1e4: Return(); Pop(0)

0x1e5: Push((int) 61)
0x1e6: @ KillTimer(Stack[-1])
0x1e7: Pop(1)
0x1e8: @ Stop()
0x1e9: Pop(0)
0x1ea: Return(); Pop(0)

0x1eb: PushEmpty()
0x1ec: PushEmpty()
0x1ed: Call 0x1e5

0x1ee: Pop(0)
0x1ef: PushEmpty(object)
0x1f0: Stack[-1] = Stack[-2]
0x1f1: Call 0x607

0x1f2: Pop(1)
0x1f3: Return(); Pop(0)

0x1f4: PushEmpty()
0x1f5: PushEmpty(bool, object)
0x1f6: Stack[-1] = Stack[-3]
0x1f7: Call 0x5c7

0x1f8: Pop(1)
0x1f9: IF (Stack[-1] == 0) GOTO 0x201; Pop(1)

0x1fa: PushEmpty()
0x1fb: Call 0x26a

0x1fc: Pop(0)
0x1fd: PushEmpty(object)
0x1fe: Stack[-1] = Stack[-2]
0x1ff: Call 0x5ce

0x200: Pop(1)
0x201: Return(); Pop(0)

0x202: PushEmpty()
0x203: PushEmpty(bool, object)
0x204: Stack[-1] = Stack[-3]
0x205: Call 0x5b8

0x206: Pop(1)
0x207: IF (Stack[-1] == 0) GOTO 0x20f; Pop(1)

0x208: PushEmpty()
0x209: Call 0x26a

0x20a: Pop(0)
0x20b: PushEmpty(object)
0x20c: Stack[-1] = Stack[-2]
0x20d: Call 0x5bf

0x20e: Pop(1)
0x20f: Return(); Pop(0)

0x210: PushEmpty()
0x211: PushEmpty()
0x212: Call 0x26a

0x213: Pop(0)
0x214: PushEmpty(object)
0x215: Stack[-1] = Stack[-2]
0x216: Call 0x5d8

0x217: Pop(1)
0x218: Return(); Pop(0)

0x219: PushEmpty()
0x21a: PushEmpty(bool, object, object)
0x21b: Stack[-2] = Stack[-5]
0x21c: Stack[-1] = Stack[-4]
0x21d: Call 0x60d

0x21e: Pop(2)
0x21f: IF (Stack[-1] == 0) GOTO 0x224; Pop(1)

0x220: PushEmpty(object)
0x221: Stack[-1] = Stack[-3]
0x222: Call 0x210

0x223: Pop(1)
0x224: Return(); Pop(0)

0x225: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x226: @ WaitForAnimEnd()
0x227: Pop(0)
0x228: PushEmpty(bool)
0x229: Call 0x4f8

0x22a: Pop(0)
0x22b: Pop(1); Push((bool) Stack[-1] == 0)
0x22c: IF (Stack[-1] == 0) GOTO 0x22e; Pop(1)

0x22d: Return(); Pop(14)

0x22e: PushEmpty(int)
0x22f: Call 0x50f

0x230: Stack[-8] = Stack[-1]
0x231: Pop(1)
0x232: Stack[-6] = (int) 0
0x233: PushEmpty(bool)
0x234: Stack[-1] = (bool) 0
0x235: Push((int) 5)
0x236: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x237: IF (Stack[-1] == 0) GOTO 0x23d; Pop(1)

0x238: PushEmpty(bool)
0x239: Call 0x4f8

0x23a: Pop(0)
0x23b: IF (Stack[-1] == 0) GOTO 0x23d; Pop(1)

0x23c: Stack[-1] = (bool) 1
0x23d: IF (Stack[-1] == 0) GOTO 0x269; Pop(1)

0x23e: Push((int) 3)
0x23f: @ irand(Stack[-6], Stack[-1])
0x240: Pop(1)
0x241: Push((int) 0)
0x242: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x243: IF (Stack[-1] == 0) GOTO 0x255; Pop(1)

0x244: Push(Stack[-7])
0x245: IF (Stack[-1] == 0) GOTO 0x254; Pop(1)

0x246: @ irand(Stack[-4], Stack[-7])
0x247: Pop(0)
0x248: Push("all")
0x249: PushEmpty(string, int)
0x24a: Stack[-1] = Stack[-7]
0x24b: Call 0x508

0x24c: Pop(1)
0x24d: @ PlayAnimation(Stack[-2], Stack[-1])
0x24e: Pop(2)
0x24f: @ WaitForAnimEnd(Stack[-3])
0x250: Pop(0)
0x251: Pop(0); Push((bool) Stack[-3] == 0)
0x252: IF (Stack[-1] == 0) GOTO 0x254; Pop(1)

0x253: GOTO 0x269

0x254: GOTO 0x266

0x255: Push((int) 1)
0x256: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x257: IF (Stack[-1] == 0) GOTO 0x263; Pop(1)

0x258: Push((int) 4)
0x259: @ rand(Stack[-3], Stack[-1])
0x25a: Pop(1)
0x25b: Push((int) 1)
0x25c: Pop(1); Push(Stack[-3] + Stack[-1]);
0x25d: @ Sleep(Stack[-1], Stack[-2])
0x25e: Pop(1)
0x25f: Pop(0); Push((bool) Stack[-1] == 0)
0x260: IF (Stack[-1] == 0) GOTO 0x262; Pop(1)

0x261: GOTO 0x269

0x262: GOTO 0x266

0x263: Push(Stack[-6])
0x264: IF (Stack[-1] == 0) GOTO 0x266; Pop(1)

0x265: GOTO 0x269

0x266: Push((int) 1)
0x267: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x268: GOTO 0x233

0x269: Return(); Pop(14)

0x26a: @ StopAnimation()
0x26b: Pop(0)
0x26c: @ StopGroup0()
0x26d: Pop(0)
0x26e: Return(); Pop(0)

0x26f: PushEmpty(bool, cvector, cvector, int, object, cvector, bool, object, float, float, float, int, bool, cvector, cvector, int, object, cvector, bool, object, float, float, float, int)
0x270: Stack[0 + Tasks[-1].StackPointer] = Stack[-25]
0x271: @ CanSee(Stack[-1], Stack[-25])
0x272: Pop(0)
0x273: PushEmpty(bool, object)
0x274: Stack[-1] = Stack[-27]
0x275: Call 0x4a9

0x276: Pop(2)
0x277: PushEmpty(bool, object)
0x278: Stack[-1] = Stack[-27]
0x279: Call 0x491

0x27a: Pop(1)
0x27b: Pop(1); Push((bool) Stack[-1] == 0)
0x27c: IF (Stack[-1] == 0) GOTO 0x27e; Pop(1)

0x27d: Return(); Pop(24)

0x27e: @ Face(Stack[-25])
0x27f: Pop(0)
0x280: @ IsPlayerActor(Stack[-25], Stack[-12])
0x281: Pop(0)
0x282: PushEmpty(bool, object)
0x283: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x284: Call 0x491

0x285: Pop(1)
0x286: IF (Stack[-1] == 0) GOTO 0x315; Pop(1)

0x287: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == 0)
0x288: IF (Stack[-1] == 0) GOTO 0x298; Pop(1)

0x289: @ StopAsync()
0x28a: Pop(0)
0x28b: PushEmpty(object)
0x28c: Push(-1, 1); TaskCall(5)
0x28d: Call 0x329

0x28e: Pop(-1, 1); TaskReturn
0x28f: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x290: Pop(1)
0x291: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x292: IF (Stack[-1] == 0) GOTO 0x294; Pop(1)

0x293: GOTO 0x315

0x294: @ CanSee(Stack[-1], Stack[-0])
0x295: Pop(0)
0x296: @ Face(Stack[-0])
0x297: Pop(0)
0x298: @ ReportAttack(Stack[-0])
0x299: Pop(0)
0x29a: @ GetPosition(Stack[-11])
0x29b: Pop(0)
0x29c: @@ GetPosition(Stack[-10])
0x29d: Pop(0)
0x29e: PushEmpty(int, float)
0x29f: PushEmpty(float, cvector, cvector)
0x2a0: Stack[-2] = Stack[-15]
0x2a1: Stack[-1] = Stack[-16]
0x2a2: Call 0x503

0x2a3: Stack[-4] = Stack[-3]
0x2a4: Pop(3)
0x2a5: Call 0x594

0x2a6: Stack[-11] = Stack[-2]
0x2a7: Pop(2)
0x2a8: Push("all")
0x2a9: Push("attack_begin")
0x2aa: Pop(1); Push(Stack[-1] + Stack[-11]);
0x2ab: @ PlayAnimation(Stack[-2], Stack[-1])
0x2ac: Pop(2)
0x2ad: @ WaitForAnimEnd()
0x2ae: Pop(0)
0x2af: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x2b0: IF (Stack[-1] == 0) GOTO 0x2b2; Pop(1)

0x2b1: GOTO 0x315

0x2b2: Push("all")
0x2b3: Push("attack_end")
0x2b4: Pop(1); Push(Stack[-1] + Stack[-11]);
0x2b5: @ PlayAnimation(Stack[-2], Stack[-1])
0x2b6: Pop(2)
0x2b7: @ GetScene(Stack[-8])
0x2b8: Pop(0)
0x2b9: Push("attack")
0x2ba: Pop(1); Push(Stack[-1] + Stack[-10]);
0x2bb: @ GetGeometryLocator(Stack[-1], Stack[-7], Stack[-12], Stack[-8])
0x2bc: Pop(1)
0x2bd: Push("scripted")
0x2be: Push(CVector(0.0, 0.0, 1.0))
0x2bf: Push("grenade.xml")
0x2c0: @ AddActorByType(Stack[-8], Stack[-3], Stack[-11], Stack[-14], Stack[-2], Stack[-1])
0x2c1: Pop(3)
0x2c2: Push("Owner")
0x2c3: PushEmpty(object)
0x2c4: Call 0x4fd

0x2c5: Pop(0)
0x2c6: @@ SetScriptProperty(Stack[-2], Stack[-1])
0x2c7: Pop(2)
0x2c8: @@ GetPosition(Stack[-10])
0x2c9: Pop(0)
0x2ca: Push(Stack[-12])
0x2cb: IF (Stack[-1] == 0) GOTO 0x2d9; Pop(1)

0x2cc: Stack[-12] = (bool) 0
0x2cd: @ RandVec2D(Stack[-4], Stack[-3])
0x2ce: Pop(0)
0x2cf: Push(CvectorIndex(Stack[-10], 0))
0x2d0: Push((int) 500)
0x2d1: Pop(1); Push(Stack[-6] * Stack[-1]);
0x2d2: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x2d3: CvectorIndex(Stack[-11], 0) = Stack[-1];
0x2d4: Push(CvectorIndex(Stack[-10], 2))
0x2d5: Push((int) 500)
0x2d6: Pop(1); Push(Stack[-5] * Stack[-1]);
0x2d7: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x2d8: CvectorIndex(Stack[-11], 2) = Stack[-1];
0x2d9: PushEmpty(float, cvector, cvector, cvector)
0x2da: Stack[-3] = Stack[-15]
0x2db: Stack[-2] = Stack[-14]
0x2dc: Stack[-1] = Stack[-11]
0x2dd: Call 0x568

0x2de: Stack[-6] = Stack[-4]
0x2df: Pop(4)
0x2e0: Push((int) 0)
0x2e1: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x2e2: IF (Stack[-1] == 0) GOTO 0x2e9; Pop(1)

0x2e3: PushEmpty(float, int)
0x2e4: Stack[-1] = Stack[-11]
0x2e5: Call 0x5a2

0x2e6: Stack[-4] = Stack[-2]
0x2e7: Pop(2)
0x2e8: GOTO 0x2ef

0x2e9: PushEmpty(float, int, float)
0x2ea: Stack[-2] = Stack[-12]
0x2eb: Stack[-1] = Stack[-5]
0x2ec: Call 0x5aa

0x2ed: Stack[-5] = Stack[-3]
0x2ee: Pop(3)
0x2ef: Push("StartVelocity")
0x2f0: Pop(0); Push(Stack[-8] * Stack[-3]);
0x2f1: @@ SetScriptProperty(Stack[-2], Stack[-1])
0x2f2: Pop(2)
0x2f3: Push("DamageAmount")
0x2f4: Push((float)0.8)
0x2f5: @@ SetScriptProperty(Stack[-2], Stack[-1])
0x2f6: Pop(2)
0x2f7: Push("DamageType")
0x2f8: Push((int) 1)
0x2f9: @@ SetScriptProperty(Stack[-2], Stack[-1])
0x2fa: Pop(2)
0x2fb: @ WaitForAnimEnd()
0x2fc: Pop(0)
0x2fd: Push((int) 1)
0x2fe: Pop(1); Push((bool) Stack[-10] == Stack[-1])
0x2ff: IF (Stack[-1] == 0) GOTO 0x312; Pop(1)

0x300: Push((int) 2)
0x301: @ irand(Stack[-2], Stack[-1])
0x302: Pop(1)
0x303: Push("scream")
0x304: Push((int) 1)
0x305: Pop(1); Push(Stack[-3] + Stack[-1]);
0x306: Pop(2); Push(Stack[-2] + Stack[-1]);
0x307: @ Speak(Stack[-1])
0x308: Pop(1)
0x309: Push("all")
0x30a: Push("scream")
0x30b: Push((int) 1)
0x30c: Pop(1); Push(Stack[-4] + Stack[-1]);
0x30d: Pop(2); Push(Stack[-2] + Stack[-1]);
0x30e: @ PlayAnimation(Stack[-2], Stack[-1])
0x30f: Pop(2)
0x310: @ WaitForAnimEnd()
0x311: Pop(0)
0x312: Stack[-5] = 0
0x313: Stack[-8] = 0
0x314: GOTO 0x282

0x315: @ StopAsync()
0x316: Pop(0)
0x317: Return(); Pop(24)

0x318: PushEmpty()
0x319: Pop(0); Push((bool) Stack[-1] == Stack[0 + Tasks[-1].StackPointer])
0x31a: IF (Stack[-1] == 0) GOTO 0x31c; Pop(1)

0x31b: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x31c: Return(); Pop(0)

0x31d: PushEmpty()
0x31e: Pop(0); Push((bool) Stack[-1] == Stack[0 + Tasks[-1].StackPointer])
0x31f: IF (Stack[-1] == 0) GOTO 0x321; Pop(1)

0x320: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x321: Return(); Pop(0)

0x322: PushEmpty()
0x323: PushEmpty(bool, object, object)
0x324: Stack[-2] = Stack[-5]
0x325: Stack[-1] = Stack[-4]
0x326: Call 0x60d

0x327: Pop(3)
0x328: Return(); Pop(0)

0x329: Push((int) 5)
0x32a: @ Sleep(Stack[-1])
0x32b: Pop(1)
0x32c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x32d: Return(); Pop(0)

0x32e: PushEmpty()
0x32f: PushEmpty(object)
0x330: Stack[-1] = Stack[-2]
0x331: Call 0x34b

0x332: Pop(1)
0x333: Return(); Pop(0)

0x334: PushEmpty()
0x335: Pop(0); Push((bool) Stack[-1] == Stack[0 + Tasks[-1].StackPointer])
0x336: IF (Stack[-1] == 0) GOTO 0x338; Pop(1)

0x337: Stack[0 + Tasks[-1].StackPointer] = 0
0x338: Return(); Pop(0)

0x339: PushEmpty()
0x33a: PushEmpty(object)
0x33b: Stack[-1] = Stack[-2]
0x33c: Call 0x34b

0x33d: Pop(1)
0x33e: Return(); Pop(0)

0x33f: PushEmpty()
0x340: PushEmpty(bool, object, object)
0x341: Stack[-2] = Stack[-5]
0x342: Stack[-1] = Stack[-4]
0x343: Call 0x60d

0x344: Pop(2)
0x345: IF (Stack[-1] == 0) GOTO 0x34a; Pop(1)

0x346: PushEmpty(object)
0x347: Stack[-1] = Stack[-3]
0x348: Call 0x339

0x349: Pop(1)
0x34a: Return(); Pop(0)

0x34b: PushEmpty()
0x34c: PushEmpty(bool)
0x34d: Stack[-1] = (bool) 0
0x34e: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x34f: IF (Stack[-1] == 0) GOTO 0x356; Pop(1)

0x350: PushEmpty(bool, object)
0x351: Stack[-1] = Stack[-4]
0x352: Call 0x633

0x353: Pop(1)
0x354: IF (Stack[-1] == 0) GOTO 0x356; Pop(1)

0x355: Stack[-1] = (bool) 1
0x356: IF (Stack[-1] == 0) GOTO 0x35a; Pop(1)

0x357: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x358: @ StopGroup0()
0x359: Pop(0)
0x35a: Return(); Pop(0)

0x35b: PushEmpty(bool, int, bool, int)
0x35c: @ GetSeeThreshold(Stack[-0])
0x35d: Pop(0)
0x35e: @ GetSeeFOV(Stack[-1])
0x35f: Pop(0)
0x360: Push((float)1.5)
0x361: Pop(1); Push(Stack[0 + StackPtr] / Stack[-1]);
0x362: @ SetSeeThreshold(Stack[-1])
0x363: Pop(1)
0x364: Stack[2 + Tasks[-1].StackPointer] = Stack[-5]
0x365: Stack[-1] = (int) 0
0x366: Push((int) 3)
0x367: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x368: IF (Stack[-1] == 0) GOTO 0x381; Pop(1)

0x369: Push((float)1.8)
0x36a: Pop(1); Push(Stack[1 + StackPtr] * Stack[-1]);
0x36b: @ SetSeeFOV(Stack[-1])
0x36c: Pop(1)
0x36d: Push("all")
0x36e: Push("hunt")
0x36f: @ PlayAnimation(Stack[-2], Stack[-1])
0x370: Pop(2)
0x371: @ WaitForAnimEnd(Stack[-2])
0x372: Pop(0)
0x373: @ SetSeeFOV(Stack[-1])
0x374: Pop(0)
0x375: Pop(0); Push((bool) Stack[-2] == 0)
0x376: IF (Stack[-1] == 0) GOTO 0x378; Pop(1)

0x377: GOTO 0x381

0x378: Push((int) 2)
0x379: @ Sleep(Stack[-1], Stack[-3])
0x37a: Pop(1)
0x37b: Pop(0); Push((bool) Stack[-2] == 0)
0x37c: IF (Stack[-1] == 0) GOTO 0x37e; Pop(1)

0x37d: GOTO 0x381

0x37e: Push((int) 1)
0x37f: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x380: GOTO 0x366

0x381: PushEmpty()
0x382: Call 0x3c3

0x383: Pop(0)
0x384: Push(Stack[-2])
0x385: IF (Stack[-1] == 0) GOTO 0x387; Pop(1)

0x386: Stack[2 + Tasks[-1].StackPointer] = 0
0x387: Stack[-6] = Stack[2 + Tasks[-1].StackPointer]
0x388: Return(); Pop(4)

0x389: PushEmpty()
0x38a: PushEmpty(bool, object)
0x38b: Stack[-1] = Stack[-3]
0x38c: Call 0x5c7

0x38d: Pop(1)
0x38e: IF (Stack[-1] == 0) GOTO 0x396; Pop(1)

0x38f: PushEmpty()
0x390: Call 0x3c3

0x391: Pop(0)
0x392: PushEmpty(object)
0x393: Stack[-1] = Stack[-2]
0x394: Call 0x5ce

0x395: Pop(1)
0x396: Return(); Pop(0)

0x397: PushEmpty(bool, bool)
0x398: @ IsPlayerActor(Stack[-2], Stack[-1])
0x399: Pop(0)
0x39a: Push(Stack[-1])
0x39b: IF (Stack[-1] == 0) GOTO 0x39d; Pop(1)

0x39c: Return(); Pop(2)

0x39d: PushEmpty(bool, object)
0x39e: Stack[-1] = Stack[-5]
0x39f: Call 0x633

0x3a0: Pop(1)
0x3a1: Pop(1); Push((bool) Stack[-1] == 0)
0x3a2: IF (Stack[-1] == 0) GOTO 0x3a4; Pop(1)

0x3a3: Return(); Pop(2)

0x3a4: @ IsPlayerActor(Stack[-3], Stack[-1])
0x3a5: Pop(0)
0x3a6: Push(Stack[-1])
0x3a7: IF (Stack[-1] == 0) GOTO 0x3ad; Pop(1)

0x3a8: Stack[2 + Tasks[-1].StackPointer] = Stack[-3]
0x3a9: @ Stop()
0x3aa: Pop(0)
0x3ab: @ StopGroup0()
0x3ac: Pop(0)
0x3ad: Return(); Pop(2)

0x3ae: PushEmpty()
0x3af: PushEmpty()
0x3b0: Call 0x3c3

0x3b1: Pop(0)
0x3b2: PushEmpty(object)
0x3b3: Stack[-1] = Stack[-2]
0x3b4: Call 0x5d8

0x3b5: Pop(1)
0x3b6: Return(); Pop(0)

0x3b7: PushEmpty()
0x3b8: PushEmpty(bool, object, object)
0x3b9: Stack[-2] = Stack[-5]
0x3ba: Stack[-1] = Stack[-4]
0x3bb: Call 0x60d

0x3bc: Pop(2)
0x3bd: IF (Stack[-1] == 0) GOTO 0x3c2; Pop(1)

0x3be: PushEmpty(object)
0x3bf: Stack[-1] = Stack[-3]
0x3c0: Call 0x3ae

0x3c1: Pop(1)
0x3c2: Return(); Pop(0)

0x3c3: @ SetSeeThreshold(Stack[-0])
0x3c4: Pop(0)
0x3c5: @ SetSeeFOV(Stack[-1])
0x3c6: Pop(0)
0x3c7: @ Stop()
0x3c8: Pop(0)
0x3c9: @ StopGroup0()
0x3ca: Pop(0)
0x3cb: Return(); Pop(0)

0x3cc: PushEmpty()
0x3cd: PushEmpty()
0x3ce: Call 0x3c3

0x3cf: Pop(0)
0x3d0: PushEmpty(object)
0x3d1: Stack[-1] = Stack[-2]
0x3d2: Call 0x607

0x3d3: Pop(1)
0x3d4: Return(); Pop(0)

0x3d5: Push((int) 91)
0x3d6: Push((int) 20)
0x3d7: @ SetTimer(Stack[-2], Stack[-1])
0x3d8: Pop(2)
0x3d9: PushEmpty()
0x3da: Call 0x43a

0x3db: Pop(0)
0x3dc: Return(); Pop(0)

0x3dd: PushEmpty()
0x3de: PushEmpty(bool, object)
0x3df: Stack[-1] = Stack[-3]
0x3e0: Call 0x5c7

0x3e1: Pop(1)
0x3e2: IF (Stack[-1] == 0) GOTO 0x3ea; Pop(1)

0x3e3: PushEmpty()
0x3e4: Call 0x40e

0x3e5: Pop(0)
0x3e6: PushEmpty(object)
0x3e7: Stack[-1] = Stack[-2]
0x3e8: Call 0x5ce

0x3e9: Pop(1)
0x3ea: Return(); Pop(0)

0x3eb: PushEmpty()
0x3ec: PushEmpty(bool, object)
0x3ed: Stack[-1] = Stack[-3]
0x3ee: Call 0x5b8

0x3ef: Pop(1)
0x3f0: IF (Stack[-1] == 0) GOTO 0x3f8; Pop(1)

0x3f1: PushEmpty()
0x3f2: Call 0x40e

0x3f3: Pop(0)
0x3f4: PushEmpty(object)
0x3f5: Stack[-1] = Stack[-2]
0x3f6: Call 0x5bf

0x3f7: Pop(1)
0x3f8: Return(); Pop(0)

0x3f9: PushEmpty()
0x3fa: PushEmpty()
0x3fb: Call 0x40e

0x3fc: Pop(0)
0x3fd: PushEmpty(object)
0x3fe: Stack[-1] = Stack[-2]
0x3ff: Call 0x5d8

0x400: Pop(1)
0x401: Return(); Pop(0)

0x402: PushEmpty()
0x403: PushEmpty(bool, object, object)
0x404: Stack[-2] = Stack[-5]
0x405: Stack[-1] = Stack[-4]
0x406: Call 0x60d

0x407: Pop(2)
0x408: IF (Stack[-1] == 0) GOTO 0x40d; Pop(1)

0x409: PushEmpty(object)
0x40a: Stack[-1] = Stack[-3]
0x40b: Call 0x3f9

0x40c: Pop(1)
0x40d: Return(); Pop(0)

0x40e: Push((int) 91)
0x40f: @ KillTimer(Stack[-1])
0x410: Pop(1)
0x411: @ Stop()
0x412: Pop(0)
0x413: PushEmpty()
0x414: Call 0x44f

0x415: Pop(0)
0x416: Return(); Pop(0)

0x417: PushEmpty()
0x418: PushEmpty()
0x419: Call 0x40e

0x41a: Pop(0)
0x41b: PushEmpty(object)
0x41c: Stack[-1] = Stack[-2]
0x41d: Call 0x607

0x41e: Pop(1)
0x41f: Return(); Pop(0)

0x420: PushEmpty()
0x421: Push((int) 91)
0x422: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x423: IF (Stack[-1] == 0) GOTO 0x427; Pop(1)

0x424: PushEmpty()
0x425: Call 0x40e

0x426: Pop(0)
0x427: Return(); Pop(0)

0x428: PushEmpty(float, bool, float, bool)
0x429: @ rand(Stack[-2])
0x42a: Pop(0)
0x42b: Push((float)0.3)
0x42c: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x42d: IF (Stack[-1] == 0) GOTO 0x438; Pop(1)

0x42e: Push("all")
0x42f: Push("hunt")
0x430: @ PlayAnimation(Stack[-2], Stack[-1])
0x431: Pop(2)
0x432: @ WaitForAnimEnd(Stack[-1])
0x433: Pop(0)
0x434: Pop(0); Push((bool) Stack[-1] == 0)
0x435: IF (Stack[-1] == 0) GOTO 0x438; Pop(1)

0x436: Stack[-5] = (bool) 1
0x437: Return(); Pop(4)

0x438: Stack[-5] = (bool) 0
0x439: Return(); Pop(4)

0x43a: PushEmpty(float, float, bool, float, float, bool)
0x43b: @ RandVec2D(Stack[-3], Stack[-2])
0x43c: Pop(0)
0x43d: @ Rotate(Stack[-3], Stack[-2], Stack[-1])
0x43e: Pop(0)
0x43f: Pop(0); Push((bool) Stack[-1] == 0)
0x440: IF (Stack[-1] == 0) GOTO 0x442; Pop(1)

0x441: GOTO 0x44e

0x442: PushEmpty(bool)
0x443: Call 0x428

0x444: Pop(0)
0x445: IF (Stack[-1] == 0) GOTO 0x447; Pop(1)

0x446: GOTO 0x44e

0x447: Push((int) 5)
0x448: @ Sleep(Stack[-1], Stack[-2])
0x449: Pop(1)
0x44a: Pop(0); Push((bool) Stack[-1] == 0)
0x44b: IF (Stack[-1] == 0) GOTO 0x44d; Pop(1)

0x44c: GOTO 0x44e

0x44d: GOTO 0x43b

0x44e: Return(); Pop(6)

0x44f: @ Stop()
0x450: Pop(0)
0x451: @ StopGroup0()
0x452: Pop(0)
0x453: Return(); Pop(0)

0x454: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x455: @ GetPosition(Stack[-3])
0x456: Pop(0)
0x457: @@ GetPosition(Stack[-2])
0x458: Pop(0)
0x459: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x45a: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x45b: Return(); Pop(6)

0x45c: PushEmpty(bool, bool)
0x45d: Push("HasProperty")
0x45e: Push((int) 2)
0x45f: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x460: Pop(1); Push((bool) Stack[-1] == 0)
0x461: IF (Stack[-1] == 0) GOTO 0x464; Pop(1)

0x462: Stack[-5] = (bool) 0
0x463: Return(); Pop(2)

0x464: @@ HasProperty(Stack[-3], Stack[-1])
0x465: Pop(0)
0x466: Stack[-5] = Stack[-1]
0x467: Return(); Pop(2)

0x468: PushEmpty(bool, bool)
0x469: @@ IsDead(Stack[-1])
0x46a: Pop(0)
0x46b: Stack[-4] = Stack[-1]
0x46c: Return(); Pop(2)

0x46d: PushEmpty(object, object, object, object)
0x46e: Pop(0); Push((bool) Stack[-5] == 0)
0x46f: IF (Stack[-1] == 0) GOTO 0x472; Pop(1)

0x470: Stack[-6] = (bool) 0
0x471: Return(); Pop(4)

0x472: PushEmpty(bool)
0x473: Stack[-1] = (bool) 0
0x474: Push("IsDead")
0x475: Push((int) 1)
0x476: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x477: IF (Stack[-1] == 0) GOTO 0x47e; Pop(1)

0x478: PushEmpty(bool, object)
0x479: Stack[-1] = Stack[-8]
0x47a: Call 0x468

0x47b: Pop(1)
0x47c: IF (Stack[-1] == 0) GOTO 0x47e; Pop(1)

0x47d: Stack[-1] = (bool) 1
0x47e: IF (Stack[-1] == 0) GOTO 0x481; Pop(1)

0x47f: Stack[-6] = (bool) 0
0x480: Return(); Pop(4)

0x481: @ GetScene(Stack[-2])
0x482: Pop(0)
0x483: Pop(0); Push((bool) Stack[-2] == 0)
0x484: IF (Stack[-1] == 0) GOTO 0x487; Pop(1)

0x485: Stack[-6] = (bool) 0
0x486: Return(); Pop(4)

0x487: @@ GetScene(Stack[-1])
0x488: Pop(0)
0x489: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x48a: IF (Stack[-1] == 0) GOTO 0x48d; Pop(1)

0x48b: Stack[-6] = (bool) 0
0x48c: Return(); Pop(4)

0x48d: Stack[-6] = (bool) 1
0x48e: Return(); Pop(4)

0x48f: Stack[-1] = 0
0x490: Stack[-2] = 0
0x491: PushEmpty(int, int)
0x492: PushEmpty(bool, object)
0x493: Stack[-1] = Stack[-5]
0x494: Call 0x46d

0x495: Pop(1)
0x496: Pop(1); Push((bool) Stack[-1] == 0)
0x497: IF (Stack[-1] == 0) GOTO 0x49a; Pop(1)

0x498: Stack[-4] = (bool) 0
0x499: Return(); Pop(2)

0x49a: PushEmpty(bool, object, string)
0x49b: Stack[-2] = Stack[-6]
0x49c: Stack[-1] = "noaccess"
0x49d: Call 0x45c

0x49e: Pop(2)
0x49f: Pop(1); Push((bool) Stack[-1] == 0)
0x4a0: IF (Stack[-1] == 0) GOTO 0x4a3; Pop(1)

0x4a1: Stack[-4] = (bool) 1
0x4a2: Return(); Pop(2)

0x4a3: Push("noaccess")
0x4a4: @@ GetProperty(Stack[-1], Stack[-2])
0x4a5: Pop(1)
0x4a6: Push((int) 0)
0x4a7: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x4a8: Return(); Pop(2)

0x4a9: PushEmpty(cvector, cvector, cvector, bool, cvector, cvector, cvector, bool)
0x4aa: @@ GetPosition(Stack[-4])
0x4ab: Pop(0)
0x4ac: @ GetPosition(Stack[-3])
0x4ad: Pop(0)
0x4ae: Stack[-2] = Stack[-4] - Stack[-3]; Pop(0);
0x4af: Push(CvectorIndex(Stack[-2], 0))
0x4b0: Push(CvectorIndex(Stack[-3], 2))
0x4b1: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x4b2: Pop(2)
0x4b3: Stack[-10] = Stack[-1]
0x4b4: Return(); Pop(8)

0x4b5: PushEmpty(object, object, cvector, float, int, cvector, cvector, cvector, cvector, string, object, object, cvector, float, int, cvector, cvector, cvector, cvector, string)
0x4b6: PushEmpty(bool)
0x4b7: Stack[-1] = (bool) 0
0x4b8: Push((int) 4)
0x4b9: Pop(1); Push((bool) Stack[-24] != Stack[-1])
0x4ba: IF (Stack[-1] == 0) GOTO 0x4bf; Pop(1)

0x4bb: Push((int) 5)
0x4bc: Pop(1); Push((bool) Stack[-24] != Stack[-1])
0x4bd: IF (Stack[-1] == 0) GOTO 0x4bf; Pop(1)

0x4be: Stack[-1] = (bool) 1
0x4bf: IF (Stack[-1] == 0) GOTO 0x4d2; Pop(1)

0x4c0: @ GetScene(Stack[-10])
0x4c1: Pop(0)
0x4c2: @ GetPosition(Stack[-8])
0x4c3: Pop(0)
0x4c4: @ GetEyesHeight(Stack[-7])
0x4c5: Pop(0)
0x4c6: Push(CvectorIndex(Stack[-8], 1))
0x4c7: Push((int) 2)
0x4c8: Pop(1); Push(Stack[-9] / Stack[-1]);
0x4c9: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x4ca: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x4cb: Push("scripted")
0x4cc: Push(CVector(0.0, 0.0, 1.0))
0x4cd: Push("blood.xml")
0x4ce: @ AddActorByType(Stack[-12], Stack[-3], Stack[-13], Stack[-11], Stack[-2], Stack[-1])
0x4cf: Pop(3)
0x4d0: Stack[-9] = 0
0x4d1: Stack[-10] = 0
0x4d2: Pop(0); Push((bool) Stack[-23] == 0)
0x4d3: IF (Stack[-1] == 0) GOTO 0x4d5; Pop(1)

0x4d4: Return(); Pop(20)

0x4d5: @ GetSecondaryAnimationType(Stack[-6])
0x4d6: Pop(0)
0x4d7: Push((int) 0)
0x4d8: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x4d9: IF (Stack[-1] == 0) GOTO 0x4db; Pop(1)

0x4da: Return(); Pop(20)

0x4db: @@ GetPosition(Stack[-5])
0x4dc: Pop(0)
0x4dd: @ GetPosition(Stack[-4])
0x4de: Pop(0)
0x4df: @ GetDirection(Stack[-3])
0x4e0: Pop(0)
0x4e1: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0x4e2: Push(CvectorIndex(Stack[-2], 0))
0x4e3: Push(CvectorIndex(Stack[-4], 0))
0x4e4: Pop(2); Push(Stack[-2] * Stack[-1]);
0x4e5: Push(CvectorIndex(Stack[-3], 2))
0x4e6: Push(CvectorIndex(Stack[-5], 2))
0x4e7: Pop(2); Push(Stack[-2] * Stack[-1]);
0x4e8: Pop(2); Push(Stack[-2] + Stack[-1]);
0x4e9: Push((int) 0)
0x4ea: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x4eb: IF (Stack[-1] == 0) GOTO 0x4ee; Pop(1)

0x4ec: Stack[-1] = "fhit"
0x4ed: GOTO 0x4ef

0x4ee: Stack[-1] = "bhit"
0x4ef: Push("hit_react")
0x4f0: Push("1")
0x4f1: Pop(1); Push(Stack[-3] + Stack[-1]);
0x4f2: Push("2")
0x4f3: Pop(1); Push(Stack[-4] + Stack[-1]);
0x4f4: Push((int) -10)
0x4f5: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x4f6: Pop(4)
0x4f7: Return(); Pop(20)

0x4f8: PushEmpty(bool, bool)
0x4f9: @ IsLoaded(Stack[-1])
0x4fa: Pop(0)
0x4fb: Stack[-3] = Stack[-1]
0x4fc: Return(); Pop(2)

0x4fd: PushEmpty(object, object)
0x4fe: @ self(Stack[-1])
0x4ff: Pop(0)
0x500: Stack[-3] = Stack[-1]
0x501: Return(); Pop(2)

0x502: Stack[-1] = 0
0x503: PushEmpty(cvector, cvector)
0x504: Stack[-1] = Stack[-3] - Stack[-4]; Pop(0);
0x505: Pop(0); Push(Stack[-1] | Stack[-1]);
0x506: Stack[-6] = Sqrt(Stack[-1]); Pop(1);
0x507: Return(); Pop(2)

0x508: PushEmpty(string, string)
0x509: Stack[-1] = "idle"
0x50a: Push(Stack[-3])
0x50b: IF (Stack[-1] == 0) GOTO 0x50d; Pop(1)

0x50c: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x50d: Stack[-4] = Stack[-1]
0x50e: Return(); Pop(2)

0x50f: PushEmpty(int, bool, int, bool)
0x510: Stack[-2] = (int) 0
0x511: Push("all")
0x512: PushEmpty(string, int)
0x513: Stack[-1] = Stack[-5]
0x514: Call 0x508

0x515: Pop(1)
0x516: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x517: Pop(2)
0x518: Pop(0); Push((bool) Stack[-1] == 0)
0x519: IF (Stack[-1] == 0) GOTO 0x51b; Pop(1)

0x51a: GOTO 0x51e

0x51b: Push((int) 1)
0x51c: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x51d: GOTO 0x511

0x51e: Stack[-5] = Stack[-2]
0x51f: Return(); Pop(4)

0x520: PushEmpty(int, int, int, bool, int, int, int, bool)
0x521: Pop(0); Push((bool) Stack[-10] > Stack[-9])
0x522: IF (Stack[-1] == 0) GOTO 0x527; Pop(1)

0x523: Push("GenerateMoney: iMin > iMax")
0x524: @ Trace(Stack[-1])
0x525: Pop(1)
0x526: Return(); Pop(8)

0x527: Stack[-4] = (int) 0
0x528: Pop(0); Push((bool) Stack[-10] != Stack[-9])
0x529: IF (Stack[-1] == 0) GOTO 0x52e; Pop(1)

0x52a: Pop(0); Push(Stack[-9] - Stack[-10]);
0x52b: @ irand(Stack[-4], Stack[-1])
0x52c: Pop(1)
0x52d: GOTO 0x532

0x52e: Push((int) 0)
0x52f: Pop(1); Push((bool) Stack[-11] == Stack[-1])
0x530: IF (Stack[-1] == 0) GOTO 0x532; Pop(1)

0x531: Return(); Pop(8)

0x532: Stack[-4] = Stack[-4] + Stack[-10]; Pop(0);
0x533: Push((int) 0)
0x534: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x535: IF (Stack[-1] == 0) GOTO 0x537; Pop(1)

0x536: Return(); Pop(8)

0x537: Push("Money")
0x538: @ GetInvItemByName(Stack[-3], Stack[-1])
0x539: Pop(1)
0x53a: Push((int) 0)
0x53b: @ AddItem(Stack[-2], Stack[-3], Stack[-1], Stack[-5])
0x53c: Pop(1)
0x53d: Return(); Pop(8)

0x53e: PushEmpty(int, bool, int, bool)
0x53f: Push((int) 0)
0x540: @ ClearSubContainer(Stack[-1])
0x541: Pop(1)
0x542: PushEmpty(int, int)
0x543: Stack[-2] = (int) 500
0x544: Stack[-1] = (int) 1000
0x545: Call 0x520

0x546: Pop(2)
0x547: Push((int) 4)
0x548: @ irand(Stack[-3], Stack[-1])
0x549: Pop(1)
0x54a: Push((int) 0)
0x54b: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x54c: IF (Stack[-1] == 0) GOTO 0x554; Pop(1)

0x54d: PushEmpty(int, string)
0x54e: Stack[-1] = "rifle_ammo"
0x54f: Call 0x563

0x550: Pop(1)
0x551: Push((int) 0)
0x552: @ AddItem(Stack[-3], Stack[-2], Stack[-1], Stack[-4])
0x553: Pop(2)
0x554: Push((int) 3)
0x555: @ irand(Stack[-3], Stack[-1])
0x556: Pop(1)
0x557: Push((int) 0)
0x558: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x559: IF (Stack[-1] == 0) GOTO 0x562; Pop(1)

0x55a: PushEmpty(int, string)
0x55b: Stack[-1] = "rusk"
0x55c: Call 0x563

0x55d: Pop(1)
0x55e: Push((int) 0)
0x55f: Push((int) 1)
0x560: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x561: Pop(3)
0x562: Return(); Pop(4)

0x563: PushEmpty(int, int)
0x564: @ GetInvItemByName(Stack[-1], Stack[-3])
0x565: Pop(0)
0x566: Stack[-4] = Stack[-1]
0x567: Return(); Pop(2)

0x568: PushEmpty(float, float, float, float, float, float, float, float, float, float)
0x569: Push(CvectorIndex(Stack[-11], 0))
0x56a: Push(CvectorIndex(Stack[-12], 0))
0x56b: Pop(2); Push(Stack[-2] * Stack[-1]);
0x56c: Push(CvectorIndex(Stack[-12], 2))
0x56d: Push(CvectorIndex(Stack[-13], 2))
0x56e: Pop(2); Push(Stack[-2] * Stack[-1]);
0x56f: Pop(2); Push(Stack[-2] + Stack[-1]);
0x570: Stack[-6] = Sqrt(Stack[-1]); Pop(1);
0x571: Push(CvectorIndex(Stack[-11], 1))
0x572: Stack[-5] = Stack[-1] / Stack[-6]; Pop(1);
0x573: Push(CvectorIndex(Stack[-13], 0))
0x574: Push(CvectorIndex(Stack[-13], 0))
0x575: Pop(2); Push(Stack[-2] - Stack[-1]);
0x576: Push(CvectorIndex(Stack[-14], 0))
0x577: Push(CvectorIndex(Stack[-14], 0))
0x578: Pop(2); Push(Stack[-2] - Stack[-1]);
0x579: Pop(2); Push(Stack[-2] * Stack[-1]);
0x57a: Push(CvectorIndex(Stack[-14], 2))
0x57b: Push(CvectorIndex(Stack[-14], 2))
0x57c: Pop(2); Push(Stack[-2] - Stack[-1]);
0x57d: Push(CvectorIndex(Stack[-15], 2))
0x57e: Push(CvectorIndex(Stack[-15], 2))
0x57f: Pop(2); Push(Stack[-2] - Stack[-1]);
0x580: Pop(2); Push(Stack[-2] * Stack[-1]);
0x581: Pop(2); Push(Stack[-2] + Stack[-1]);
0x582: Stack[-4] = Sqrt(Stack[-1]); Pop(1);
0x583: Push((float)500.0)
0x584: Pop(0); Push(Stack[-4] * Stack[-5]);
0x585: Push(CvectorIndex(Stack[-14], 1))
0x586: Push(CvectorIndex(Stack[-16], 1))
0x587: Pop(2); Push(Stack[-2] - Stack[-1]);
0x588: Pop(2); Push(Stack[-2] - Stack[-1]);
0x589: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0x58a: Push((int) 0)
0x58b: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x58c: IF (Stack[-1] == 0) GOTO 0x58f; Pop(1)

0x58d: Stack[-14] = (int) -1
0x58e: Return(); Pop(10)

0x58f: Pop(0); Push(Stack[-3] / Stack[-5]);
0x590: Pop(0); Push(Sqrt(Stack[-3]))
0x591: Stack[-3] = Stack[-2] * Stack[-1]; Pop(2);
0x592: Stack[-14] = Stack[-1]
0x593: Return(); Pop(10)

0x594: PushEmpty()
0x595: Push((int) 200)
0x596: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x597: IF (Stack[-1] == 0) GOTO 0x59b; Pop(1)

0x598: Stack[-2] = (int) 1
0x599: Return(); Pop(0)

0x59a: GOTO 0x5a0

0x59b: Push((int) 600)
0x59c: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x59d: IF (Stack[-1] == 0) GOTO 0x5a0; Pop(1)

0x59e: Stack[-2] = (int) 2
0x59f: Return(); Pop(0)

0x5a0: Stack[-2] = (int) 3
0x5a1: Return(); Pop(0)

0x5a2: PushEmpty()
0x5a3: Push((int) 1)
0x5a4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5a5: IF (Stack[-1] == 0) GOTO 0x5a8; Pop(1)

0x5a6: Stack[-2] = (int) 30
0x5a7: Return(); Pop(0)

0x5a8: Stack[-2] = (int) 700
0x5a9: Return(); Pop(0)

0x5aa: PushEmpty()
0x5ab: Push((int) 10)
0x5ac: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x5ad: IF (Stack[-1] == 0) GOTO 0x5b1; Pop(1)

0x5ae: Stack[-3] = (int) 10
0x5af: Return(); Pop(0)

0x5b0: GOTO 0x5b6

0x5b1: Push((int) 1500)
0x5b2: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x5b3: IF (Stack[-1] == 0) GOTO 0x5b6; Pop(1)

0x5b4: Stack[-3] = (int) 1500
0x5b5: Return(); Pop(0)

0x5b6: Stack[-3] = Stack[-1]
0x5b7: Return(); Pop(0)

0x5b8: PushEmpty()
0x5b9: PushEmpty(bool, object)
0x5ba: Stack[-1] = Stack[-3]
0x5bb: Call 0x633

0x5bc: Stack[-4] = Stack[-2]
0x5bd: Pop(2)
0x5be: Return(); Pop(0)

0x5bf: PushEmpty()
0x5c0: PushEmpty(object)
0x5c1: Stack[-1] = Stack[-2]
0x5c2: Push(-1, 3); TaskCall(2)
0x5c3: Call 0x13f

0x5c4: Pop(-1, 3); TaskReturn
0x5c5: Pop(1)
0x5c6: Return(); Pop(0)

0x5c7: PushEmpty()
0x5c8: PushEmpty(bool, object)
0x5c9: Stack[-1] = Stack[-3]
0x5ca: Call 0x633

0x5cb: Stack[-4] = Stack[-2]
0x5cc: Pop(2)
0x5cd: Return(); Pop(0)

0x5ce: PushEmpty()
0x5cf: PushEmpty(object)
0x5d0: Stack[-1] = Stack[-2]
0x5d1: Push(-1, 2); TaskCall(4)
0x5d2: Call 0x26f

0x5d3: Pop(-1, 2); TaskReturn
0x5d4: Pop(1)
0x5d5: @ ResetAAS()
0x5d6: Pop(0)
0x5d7: Return(); Pop(0)

0x5d8: PushEmpty()
0x5d9: PushEmpty(object)
0x5da: Stack[-1] = Stack[-2]
0x5db: Call 0x65c

0x5dc: Pop(1)
0x5dd: PushEmpty(object)
0x5de: Stack[-1] = Stack[-2]
0x5df: Push(-1, 2); TaskCall(4)
0x5e0: Call 0x26f

0x5e1: Pop(-1, 2); TaskReturn
0x5e2: Pop(1)
0x5e3: @ ResetAAS()
0x5e4: Pop(0)
0x5e5: Return(); Pop(0)

0x5e6: PushEmpty()
0x5e7: PushEmpty(object, int, float)
0x5e8: Stack[-3] = Stack[-7]
0x5e9: Stack[-2] = Stack[-6]
0x5ea: Stack[-1] = Stack[-5]
0x5eb: Call 0x4b5

0x5ec: Pop(3)
0x5ed: Return(); Pop(0)

0x5ee: PushEmpty()
0x5ef: PushEmpty(object)
0x5f0: Stack[-1] = Stack[-2]
0x5f1: Call 0x666

0x5f2: Pop(1)
0x5f3: PushEmpty(object)
0x5f4: Stack[-1] = Stack[-2]
0x5f5: Push(-1, 0); TaskCall(1)
0x5f6: Call 0xac

0x5f7: Pop(-1, 0); TaskReturn
0x5f8: Pop(1)
0x5f9: Return(); Pop(0)

0x5fa: PushEmpty(float, float)
0x5fb: Push("health")
0x5fc: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x5fd: IF (Stack[-1] == 0) GOTO 0x606; Pop(1)

0x5fe: Push("health")
0x5ff: @ GetProperty(Stack[-1], Stack[-2])
0x600: Pop(1)
0x601: Push((int) 0)
0x602: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x603: IF (Stack[-1] == 0) GOTO 0x606; Pop(1)

0x604: @ SignalDeath(Stack[-4])
0x605: Pop(0)
0x606: Return(); Pop(2)

0x607: PushEmpty()
0x608: PushEmpty(object)
0x609: Stack[-1] = Stack[-2]
0x60a: Call 0x5ee

0x60b: Pop(1)
0x60c: Return(); Pop(0)

0x60d: PushEmpty(string, bool, string, bool)
0x60e: PushEmpty(bool, object, string)
0x60f: Stack[-2] = Stack[-8]
0x610: Stack[-1] = "class"
0x611: Call 0x45c

0x612: Pop(2)
0x613: Pop(1); Push((bool) Stack[-1] == 0)
0x614: IF (Stack[-1] == 0) GOTO 0x617; Pop(1)

0x615: Stack[-7] = (bool) 0
0x616: Return(); Pop(4)

0x617: Push("class")
0x618: @@ GetProperty(Stack[-1], Stack[-3])
0x619: Pop(1)
0x61a: Push("bomber")
0x61b: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x61c: IF (Stack[-1] == 0) GOTO 0x61f; Pop(1)

0x61d: Stack[-7] = (bool) 0
0x61e: Return(); Pop(4)

0x61f: @ CanSee(Stack[-1], Stack[-6])
0x620: Pop(0)
0x621: PushEmpty(bool)
0x622: Stack[-1] = (bool) 1
0x623: Push(Stack[-2])
0x624: IF (Stack[-1] == 0) GOTO 0x62d; Pop(1)

0x625: PushEmpty(float, object)
0x626: Stack[-1] = Stack[-9]
0x627: Call 0x454

0x628: Pop(1)
0x629: Push((float)160000.0)
0x62a: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x62b: IF (Stack[-1] == 0) GOTO 0x62d; Pop(1)

0x62c: Stack[-1] = (bool) 0
0x62d: IF (Stack[-1] == 0) GOTO 0x630; Pop(1)

0x62e: Stack[-7] = (bool) 1
0x62f: Return(); Pop(4)

0x630: Stack[-7] = (bool) 0
0x631: Return(); Pop(4)

0x632: Return(); Pop(0)

0x633: PushEmpty(string, string)
0x634: PushEmpty(bool, object)
0x635: Stack[-1] = Stack[-5]
0x636: Call 0x491

0x637: Pop(1)
0x638: Pop(1); Push((bool) Stack[-1] == 0)
0x639: IF (Stack[-1] == 0) GOTO 0x63c; Pop(1)

0x63a: Stack[-4] = (bool) 0
0x63b: Return(); Pop(2)

0x63c: PushEmpty(bool, object, string)
0x63d: Stack[-2] = Stack[-6]
0x63e: Stack[-1] = "health"
0x63f: Call 0x45c

0x640: Pop(2)
0x641: Pop(1); Push((bool) Stack[-1] == 0)
0x642: IF (Stack[-1] == 0) GOTO 0x645; Pop(1)

0x643: Stack[-4] = (bool) 0
0x644: Return(); Pop(2)

0x645: PushEmpty(bool, object, string)
0x646: Stack[-2] = Stack[-6]
0x647: Stack[-1] = "class"
0x648: Call 0x45c

0x649: Pop(2)
0x64a: IF (Stack[-1] == 0) GOTO 0x65a; Pop(1)

0x64b: Push("class")
0x64c: @@ GetProperty(Stack[-1], Stack[-2])
0x64d: Pop(1)
0x64e: PushEmpty(bool)
0x64f: Stack[-1] = (bool) 1
0x650: Push("rat")
0x651: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x652: IF (Stack[-1] == 0) GOTO 0x657; Pop(1)

0x653: Push("bomber")
0x654: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x655: IF (Stack[-1] == 0) GOTO 0x657; Pop(1)

0x656: Stack[-1] = (bool) 0
0x657: IF (Stack[-1] == 0) GOTO 0x65a; Pop(1)

0x658: Stack[-4] = (bool) 0
0x659: Return(); Pop(2)

0x65a: Stack[-4] = (bool) 1
0x65b: Return(); Pop(2)

0x65c: PushEmpty()
0x65d: Return(); Pop(0)

0x65e: PushEmpty(object)
0x65f: Call 0x4fd

0x660: Pop(0)
0x661: @ RemoveActor(Stack[-1])
0x662: Pop(1)
0x663: @ Hold()
0x664: Pop(0)
0x665: Return(); Pop(0)

0x666: PushEmpty()
0x667: Return(); Pop(0)

