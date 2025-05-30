GlobalVarCount = 1
	G_VAR_0 bool 

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
	dattack_begin
	dattack_end
	zwalk
	GetPFPosition
	run
	HasProperty
	HasProperty
	GetProperty
	SetProperty
	disease
	armor_disease
	immunity
	IsDead
	IsDead
	GetScene
	noaccess
	scripted
	blood.xml
	fhit
	bhit
	hit_react
	1
	2
	health
	idle

Import:
	Hold (0 args)
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
	SensePlayerOnly (1 args)
	KillTimer (1 args)
	ResetAAS (0 args)
	IsPlayerActor (2 args)
	SetTimer (2 args)
	rand (2 args)
	Sleep (1 args)
	GetCameraFarDistance (1 args)
	GetRandomPFPointInCircle (4 args)
	FindShiftedPathTo (2 args)
	RotatePath (2 args)
	FollowPath (3 args)
	RequestClearPath (1 args)
	StopGroup0 (0 args)
	irand (2 args)
	WaitForAnimEnd (1 args)
	Sleep (2 args)
	StopAnimation (0 args)
	Face (1 args)
	FindPathTo (2 args)
	FollowPath (5 args)
	GetScene (1 args)
	GetEyesHeight (1 args)
	AddActorByType (6 args)
	GetSecondaryAnimationType (1 args)
	FadeSecondaryAnimation (4 args)
	IsLoaded (1 args)
	self (1 args)
	GetProperty (2 args)
	SignalDeath (1 args)
	HasAnimation (3 args)
	CanSee (2 args)
	ReportReputationChange (3 args)
	SetRTEnvelope (2 args)
	RemoveActor (1 args)

RunOp = 0x94
RunTask = 1

GlobalTasks: 
	GTASK_0  Params = 1
		EVENT_0 Op = 0xf Vars = (object)
		EVENT_6 Op = 0x1d Vars = ()
		EVENT_22 Op = 0x8e Vars = (object, int, float, float)
		EVENT_16 Op = 0x90 Vars = (object, string)
		EVENT_41 Op = 0x92 Vars = (object)
	GTASK_1 Vars = (bool, bool, bool) Params = 0
		EVENT_0 Op = 0xac Vars = (object)
		EVENT_17 Op = 0xc0 Vars = (object)
		EVENT_30 Op = 0xd4 Vars = (object, object)
		EVENT_40 Op = 0xee Vars = (object)
		EVENT_42 Op = 0x102 Vars = (object, string)
		EVENT_1 Op = 0x118 Vars = (object)
		EVENT_3 Op = 0x11e Vars = (object)
		EVENT_7 Op = 0x124 Vars = (int)
		EVENT_6 Op = 0x130 Vars = ()
		EVENT_41 Op = 0x147 Vars = (object)
		EVENT_10 Op = 0x1b1 Vars = (object)
		EVENT_28 Op = 0x1b5 Vars = ()
	GTASK_2  Params = 0
		EVENT_0 Op = 0x1c8 Vars = (object)
		EVENT_17 Op = 0x1dc Vars = (object)
		EVENT_30 Op = 0x1f0 Vars = (object, object)
		EVENT_40 Op = 0x20a Vars = (object)
		EVENT_42 Op = 0x21e Vars = (object, string)
		EVENT_6 Op = 0x234 Vars = ()
	GTASK_3  Params = 1
		EVENT_17 Op = 0x290 Vars = (object)
		EVENT_6 Op = 0x2a4 Vars = ()
		EVENT_41 Op = 0x2e1 Vars = (object)
	GTASK_4 Vars = (bool, object) Params = 2
		EVENT_17 Op = 0x2ea Vars = (object)
		EVENT_6 Op = 0x2fe Vars = ()
		EVENT_7 Op = 0x378 Vars = (int)
		EVENT_10 Op = 0x38a Vars = (object)
		EVENT_41 Op = 0x395 Vars = (object)

Events:
EVENT_16 Op = 0x4b2 Vars = (object, string)
EVENT_41 Op = 0x4bf Vars = (object)
EVENT_22 Op = 0x4c5 Vars = (object, int, float, float)

0x0: PushEmpty()
0x1: EventDisable(0)
0x2: PushEmpty(object)
0x3: Stack[-1] = Stack[-2]
0x4: Call 0x21

0x5: Pop(1)
0x6: PushEmpty(object)
0x7: Stack[-1] = Stack[-2]
0x8: Call 0x52e

0x9: Pop(1)
0xa: EventEnable(0)
0xb: @ Hold()
0xc: Pop(0)
0xd: GOTO 0xb

0xe: Return(); Pop(0)

0xf: PushEmpty(int, int)
0x10: PushEmpty(int, object)
0x11: Stack[-1] = Stack[-5]
0x12: Call 0x4fa

0x13: Stack[-3] = Stack[-2]
0x14: Pop(2)
0x15: Push((int) 0)
0x16: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x17: IF (Stack[-1] == 0) GOTO 0x1c; Pop(1)

0x18: PushEmpty(object)
0x19: Stack[-1] = Stack[-4]
0x1a: Call 0x4fd

0x1b: Pop(1)
0x1c: Return(); Pop(2)

0x1d: PushEmpty()
0x1e: Call 0x537

0x1f: Pop(0)
0x20: Return(); Pop(0)

0x21: PushEmpty(cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector, cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector)
0x22: Pop(0); Push((bool) Stack[-21] == 0)
0x23: IF (Stack[-1] == 0) GOTO 0x29; Pop(1)

0x24: PushEmpty(string)
0x25: Stack[-1] = "fdie"
0x26: Call 0x78

0x27: Pop(1)
0x28: GOTO 0x77

0x29: @@ GetPosition(Stack[-10])
0x2a: Pop(0)
0x2b: @ GetPosition(Stack[-9])
0x2c: Pop(0)
0x2d: @ GetDirection(Stack[-8])
0x2e: Pop(0)
0x2f: Stack[-7] = Stack[-9] - Stack[-10]; Pop(0);
0x30: Push(CvectorIndex(Stack[-7], 0))
0x31: Push(CvectorIndex(Stack[-9], 0))
0x32: Pop(2); Push(Stack[-2] * Stack[-1]);
0x33: Push(CvectorIndex(Stack[-8], 2))
0x34: Push(CvectorIndex(Stack[-10], 2))
0x35: Pop(2); Push(Stack[-2] * Stack[-1]);
0x36: Pop(2); Push(Stack[-2] + Stack[-1]);
0x37: Push((int) 0)
0x38: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x39: IF (Stack[-1] == 0) GOTO 0x3c; Pop(1)

0x3a: Stack[-6] = "fdie"
0x3b: GOTO 0x3d

0x3c: Stack[-6] = "bdie"
0x3d: @ RemoveRTEnvelope()
0x3e: Pop(0)
0x3f: @ SetDeathState()
0x40: Pop(0)
0x41: @ Stop()
0x42: Pop(0)
0x43: @ StopAsync()
0x44: Pop(0)
0x45: Stack[-5] = Stack[-21]
0x46: Push("GetScriptProperty")
0x47: Push((int) 2)
0x48: Pop(2); Push(IsFuncExist(Stack[-23], Stack[-2], Stack[-1]))
0x49: IF (Stack[-1] == 0) GOTO 0x55; Pop(1)

0x4a: Push("Owner")
0x4b: @@ HasScriptProperty(Stack[-5], Stack[-1])
0x4c: Pop(1)
0x4d: Push(Stack[-4])
0x4e: IF (Stack[-1] == 0) GOTO 0x55; Pop(1)

0x4f: Push("Owner")
0x50: @@ GetScriptProperty(Stack[-6], Stack[-1])
0x51: Pop(1)
0x52: Pop(0); Push((bool) Stack[-5] == 0)
0x53: IF (Stack[-1] == 0) GOTO 0x55; Pop(1)

0x54: Stack[-5] = Stack[-21]
0x55: Push("@GetEyesHeight")
0x56: Push((int) 1)
0x57: Pop(2); Push(IsFuncExist(Stack[-7], Stack[-2], Stack[-1]))
0x58: IF (Stack[-1] == 0) GOTO 0x64; Pop(1)

0x59: @@ GetEyesHeight(Stack[-2])
0x5a: Pop(0)
0x5b: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x5c: Push(CvectorIndex(Stack[-1], 1))
0x5d: Stack[-1] = Stack[-3]
0x5e: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x5f: Push("head")
0x60: @ LookAsync(Stack[-22], Stack[-1], Stack[-2])
0x61: Pop(1)
0x62: Stack[-3] = (bool) 1
0x63: GOTO 0x65

0x64: Stack[-3] = (bool) 0
0x65: Push("all")
0x66: @ PlayAnimation(Stack[-1], Stack[-7])
0x67: Pop(1)
0x68: @ WaitForAnimEnd()
0x69: Pop(0)
0x6a: Push(Stack[-3])
0x6b: IF (Stack[-1] == 0) GOTO 0x71; Pop(1)

0x6c: @ StopAsync()
0x6d: Pop(0)
0x6e: Push("head")
0x6f: @ UnlookAsync(Stack[-1])
0x70: Pop(1)
0x71: Push("all")
0x72: @ LockAnimationEnd(Stack[-1], Stack[-7])
0x73: Pop(1)
0x74: @ RemoveEnvelope()
0x75: Pop(0)
0x76: Stack[-5] = 0
0x77: Return(); Pop(20)

0x78: PushEmpty()
0x79: @ RemoveRTEnvelope()
0x7a: Pop(0)
0x7b: @ SetDeathState()
0x7c: Pop(0)
0x7d: @ Stop()
0x7e: Pop(0)
0x7f: @ StopAsync()
0x80: Pop(0)
0x81: @ StopSecondaryAnimation()
0x82: Pop(0)
0x83: Push("all")
0x84: @ PlayAnimation(Stack[-1], Stack[-2])
0x85: Pop(1)
0x86: @ WaitForAnimEnd()
0x87: Pop(0)
0x88: Push("all")
0x89: @ LockAnimationEnd(Stack[-1], Stack[-2])
0x8a: Pop(1)
0x8b: @ RemoveEnvelope()
0x8c: Pop(0)
0x8d: Return(); Pop(0)

0x8e: PushEmpty()
0x8f: Return(); Pop(0)

0x90: PushEmpty()
0x91: Return(); Pop(0)

0x92: PushEmpty()
0x93: Return(); Pop(0)

0x94: Push((bool) 1)
0x95: @ SensePlayerOnly(Stack[-1])
0x96: Pop(1)
0x97: PushEmpty()
0x98: Call 0x509

0x99: Pop(0)
0x9a: PushEmpty()
0x9b: Call 0xa3

0x9c: Pop(0)
0x9d: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x9e: PushEmpty()
0x9f: Call 0x178

0xa0: Pop(0)
0xa1: GOTO 0x9d

0xa2: Return(); Pop(0)

0xa3: PushEmpty(bool)
0xa4: Call 0x494

0xa5: Pop(0)
0xa6: Pop(1); Push((bool) Stack[-1] == 0)
0xa7: IF (Stack[-1] == 0) GOTO 0xab; Pop(1)

0xa8: PushEmpty()
0xa9: Call 0x537

0xaa: Pop(0)
0xab: Return(); Pop(0)

0xac: PushEmpty(int, int)
0xad: PushEmpty(int, object)
0xae: Stack[-1] = Stack[-5]
0xaf: Call 0x4fa

0xb0: Stack[-3] = Stack[-2]
0xb1: Pop(2)
0xb2: Push((int) 0)
0xb3: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xb4: IF (Stack[-1] == 0) GOTO 0xbf; Pop(1)

0xb5: Push((int) 1)
0xb6: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xb7: IF (Stack[-1] == 0) GOTO 0xbb; Pop(1)

0xb8: PushEmpty()
0xb9: Call 0x137

0xba: Pop(0)
0xbb: PushEmpty(object)
0xbc: Stack[-1] = Stack[-4]
0xbd: Call 0x4fd

0xbe: Pop(1)
0xbf: Return(); Pop(2)

0xc0: PushEmpty(int, int)
0xc1: PushEmpty(int, object)
0xc2: Stack[-1] = Stack[-5]
0xc3: Call 0x4f0

0xc4: Stack[-3] = Stack[-2]
0xc5: Pop(2)
0xc6: Push((int) 0)
0xc7: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xc8: IF (Stack[-1] == 0) GOTO 0xd3; Pop(1)

0xc9: Push((int) 1)
0xca: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xcb: IF (Stack[-1] == 0) GOTO 0xcf; Pop(1)

0xcc: PushEmpty()
0xcd: Call 0x137

0xce: Pop(0)
0xcf: PushEmpty(object)
0xd0: Stack[-1] = Stack[-4]
0xd1: Call 0x4f3

0xd2: Pop(1)
0xd3: Return(); Pop(2)

0xd4: PushEmpty(int, int)
0xd5: PushEmpty(bool, object, object)
0xd6: Stack[-2] = Stack[-7]
0xd7: Stack[-1] = Stack[-6]
0xd8: Call 0x517

0xd9: Pop(2)
0xda: IF (Stack[-1] == 0) GOTO 0xed; Pop(1)

0xdb: PushEmpty(int, object)
0xdc: Stack[-1] = Stack[-6]
0xdd: Call 0x4f5

0xde: Stack[-3] = Stack[-2]
0xdf: Pop(2)
0xe0: Push((int) 0)
0xe1: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xe2: IF (Stack[-1] == 0) GOTO 0xed; Pop(1)

0xe3: Push((int) 1)
0xe4: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xe5: IF (Stack[-1] == 0) GOTO 0xe9; Pop(1)

0xe6: PushEmpty()
0xe7: Call 0x137

0xe8: Pop(0)
0xe9: PushEmpty(object)
0xea: Stack[-1] = Stack[-5]
0xeb: Call 0x4f8

0xec: Pop(1)
0xed: Return(); Pop(2)

0xee: PushEmpty(int, int)
0xef: PushEmpty(int, object)
0xf0: Stack[-1] = Stack[-5]
0xf1: Call 0x4ff

0xf2: Stack[-3] = Stack[-2]
0xf3: Pop(2)
0xf4: Push((int) 0)
0xf5: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xf6: IF (Stack[-1] == 0) GOTO 0x101; Pop(1)

0xf7: Push((int) 1)
0xf8: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xf9: IF (Stack[-1] == 0) GOTO 0xfd; Pop(1)

0xfa: PushEmpty()
0xfb: Call 0x137

0xfc: Pop(0)
0xfd: PushEmpty(object)
0xfe: Stack[-1] = Stack[-4]
0xff: Call 0x502

0x100: Pop(1)
0x101: Return(); Pop(2)

0x102: PushEmpty(int, int)
0x103: PushEmpty(int, string, object)
0x104: Stack[-2] = Stack[-6]
0x105: Stack[-1] = Stack[-7]
0x106: Call 0x504

0x107: Stack[-4] = Stack[-3]
0x108: Pop(3)
0x109: Push((int) 0)
0x10a: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x10b: IF (Stack[-1] == 0) GOTO 0x117; Pop(1)

0x10c: Push((int) 1)
0x10d: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x10e: IF (Stack[-1] == 0) GOTO 0x112; Pop(1)

0x10f: PushEmpty()
0x110: Call 0x137

0x111: Pop(0)
0x112: PushEmpty(string, object)
0x113: Stack[-2] = Stack[-5]
0x114: Stack[-1] = Stack[-6]
0x115: Call 0x507

0x116: Pop(2)
0x117: Return(); Pop(2)

0x118: PushEmpty()
0x119: PushEmpty(object)
0x11a: Stack[-1] = Stack[-2]
0x11b: Call 0x150

0x11c: Pop(1)
0x11d: Return(); Pop(0)

0x11e: PushEmpty()
0x11f: PushEmpty(object)
0x120: Stack[-1] = Stack[-2]
0x121: Call 0x150

0x122: Pop(1)
0x123: Return(); Pop(0)

0x124: PushEmpty()
0x125: Push((int) 110)
0x126: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x127: IF (Stack[-1] == 0) GOTO 0x129; Pop(1)

0x128: Return(); Pop(0)

0x129: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x12a: Push((int) 110)
0x12b: @ KillTimer(Stack[-1])
0x12c: Pop(1)
0x12d: @ ResetAAS()
0x12e: Pop(0)
0x12f: Return(); Pop(0)

0x130: PushEmpty()
0x131: Call 0x137

0x132: Pop(0)
0x133: PushEmpty()
0x134: Call 0x537

0x135: Pop(0)
0x136: Return(); Pop(0)

0x137: Push((int) 110)
0x138: @ KillTimer(Stack[-1])
0x139: Pop(1)
0x13a: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x13b: PushEmpty()
0x13c: Call 0x1b8

0x13d: Pop(0)
0x13e: Return(); Pop(0)

0x13f: Push((int) 110)
0x140: @ KillTimer(Stack[-1])
0x141: Pop(1)
0x142: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x143: PushEmpty()
0x144: Call 0x1bf

0x145: Pop(0)
0x146: Return(); Pop(0)

0x147: PushEmpty()
0x148: PushEmpty()
0x149: Call 0x137

0x14a: Pop(0)
0x14b: PushEmpty(object)
0x14c: Stack[-1] = Stack[-2]
0x14d: Call 0x4bf

0x14e: Pop(1)
0x14f: Return(); Pop(0)

0x150: PushEmpty(bool, int, bool, int)
0x151: PushEmpty(bool, object)
0x152: Stack[-1] = Stack[-7]
0x153: Call 0x439

0x154: Pop(1)
0x155: Pop(1); Push((bool) Stack[-1] == 0)
0x156: IF (Stack[-1] == 0) GOTO 0x158; Pop(1)

0x157: Return(); Pop(4)

0x158: Push( Stack[2 + Tasks[-1].StackPointer] )
0x159: IF (Stack[-1] == 0) GOTO 0x15b; Pop(1)

0x15a: Return(); Pop(4)

0x15b: @ IsPlayerActor(Stack[-5], Stack[-2])
0x15c: Pop(0)
0x15d: Pop(0); Push((bool) Stack[-2] == 0)
0x15e: IF (Stack[-1] == 0) GOTO 0x160; Pop(1)

0x15f: Return(); Pop(4)

0x160: PushEmpty(int, object)
0x161: Stack[-1] = Stack[-7]
0x162: Call 0x4e5

0x163: Stack[-3] = Stack[-2]
0x164: Pop(2)
0x165: Push((int) 0)
0x166: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x167: IF (Stack[-1] == 0) GOTO 0x177; Pop(1)

0x168: Push((int) 1)
0x169: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x16a: IF (Stack[-1] == 0) GOTO 0x16e; Pop(1)

0x16b: PushEmpty()
0x16c: Call 0x13f

0x16d: Pop(0)
0x16e: PushEmpty(object)
0x16f: Stack[-1] = Stack[-6]
0x170: Call 0x4e8

0x171: Pop(1)
0x172: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x173: Push((int) 110)
0x174: Push((float)10.0)
0x175: @ SetTimer(Stack[-2], Stack[-1])
0x176: Pop(2)
0x177: Return(); Pop(4)

0x178: PushEmpty(float, cvector, cvector, float, bool, object, bool, float, cvector, cvector, float, bool, object, bool)
0x179: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x17a: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x17b: Push((float)0.5)
0x17c: @ rand(Stack[-8], Stack[-1])
0x17d: Pop(1)
0x17e: @ Sleep(Stack[-7])
0x17f: Pop(0)
0x180: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x181: IF (Stack[-1] == 0) GOTO 0x1b0; Pop(1)

0x182: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == 0)
0x183: IF (Stack[-1] == 0) GOTO 0x194; Pop(1)

0x184: @ GetPosition(Stack[-5])
0x185: Pop(0)
0x186: @ GetCameraFarDistance(Stack[-4])
0x187: Pop(0)
0x188: Push((float)2.5)
0x189: Stack[-5] = Stack[-5] * Stack[-1]; Pop(1);
0x18a: @ GetRandomPFPointInCircle(Stack[-6], Stack[-5], Stack[-4], Stack[-3])
0x18b: Pop(0)
0x18c: Push(Stack[-3])
0x18d: IF (Stack[-1] == 0) GOTO 0x18f; Pop(1)

0x18e: GOTO 0x193

0x18f: Push((int) 1)
0x190: @ Sleep(Stack[-1])
0x191: Pop(1)
0x192: GOTO 0x184

0x193: GOTO 0x195

0x194: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x195: @ FindShiftedPathTo(Stack[-2], Stack[-6])
0x196: Pop(0)
0x197: Pop(0); Push(( Stack[-2] != 0 )
0x198: IF (Stack[-1] == 0) GOTO 0x1ab; Pop(1)

0x199: @ RotatePath(Stack[-2], Stack[-1])
0x19a: Pop(0)
0x19b: Push(Stack[-1])
0x19c: IF (Stack[-1] == 0) GOTO 0x1aa; Pop(1)

0x19d: PushEmpty(bool)
0x19e: Call 0x1c6

0x19f: Pop(0)
0x1a0: @ FollowPath(Stack[-3], Stack[-1], Stack[-2])
0x1a1: Pop(1)
0x1a2: Stack[-2] = 0
0x1a3: Push(Stack[-1])
0x1a4: IF (Stack[-1] == 0) GOTO 0x1aa; Pop(1)

0x1a5: PushEmpty()
0x1a6: Push(-0, 0); TaskCall(2)
0x1a7: Call 0x23b

0x1a8: Pop(-0, 0); TaskReturn
0x1a9: Pop(0)
0x1aa: GOTO 0x1ae

0x1ab: Push((int) 1)
0x1ac: @ Sleep(Stack[-1])
0x1ad: Pop(1)
0x1ae: Stack[-2] = 0
0x1af: GOTO 0x180

0x1b0: Return(); Pop(14)

0x1b1: PushEmpty()
0x1b2: @ RequestClearPath(Stack[-1])
0x1b3: Pop(0)
0x1b4: Return(); Pop(0)

0x1b5: @ Stop()
0x1b6: Pop(0)
0x1b7: Return(); Pop(0)

0x1b8: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x1b9: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x1ba: @ Stop()
0x1bb: Pop(0)
0x1bc: @ StopGroup0()
0x1bd: Pop(0)
0x1be: Return(); Pop(0)

0x1bf: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x1c0: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x1c1: @ Stop()
0x1c2: Pop(0)
0x1c3: @ StopGroup0()
0x1c4: Pop(0)
0x1c5: Return(); Pop(0)

0x1c6: Stack[-1] = (bool) 0
0x1c7: Return(); Pop(0)

0x1c8: PushEmpty(int, int)
0x1c9: PushEmpty(int, object)
0x1ca: Stack[-1] = Stack[-5]
0x1cb: Call 0x4fa

0x1cc: Stack[-3] = Stack[-2]
0x1cd: Pop(2)
0x1ce: Push((int) 0)
0x1cf: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x1d0: IF (Stack[-1] == 0) GOTO 0x1db; Pop(1)

0x1d1: Push((int) 1)
0x1d2: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x1d3: IF (Stack[-1] == 0) GOTO 0x1d7; Pop(1)

0x1d4: PushEmpty()
0x1d5: Call 0x280

0x1d6: Pop(0)
0x1d7: PushEmpty(object)
0x1d8: Stack[-1] = Stack[-4]
0x1d9: Call 0x4fd

0x1da: Pop(1)
0x1db: Return(); Pop(2)

0x1dc: PushEmpty(int, int)
0x1dd: PushEmpty(int, object)
0x1de: Stack[-1] = Stack[-5]
0x1df: Call 0x4f0

0x1e0: Stack[-3] = Stack[-2]
0x1e1: Pop(2)
0x1e2: Push((int) 0)
0x1e3: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x1e4: IF (Stack[-1] == 0) GOTO 0x1ef; Pop(1)

0x1e5: Push((int) 1)
0x1e6: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x1e7: IF (Stack[-1] == 0) GOTO 0x1eb; Pop(1)

0x1e8: PushEmpty()
0x1e9: Call 0x280

0x1ea: Pop(0)
0x1eb: PushEmpty(object)
0x1ec: Stack[-1] = Stack[-4]
0x1ed: Call 0x4f3

0x1ee: Pop(1)
0x1ef: Return(); Pop(2)

0x1f0: PushEmpty(int, int)
0x1f1: PushEmpty(bool, object, object)
0x1f2: Stack[-2] = Stack[-7]
0x1f3: Stack[-1] = Stack[-6]
0x1f4: Call 0x517

0x1f5: Pop(2)
0x1f6: IF (Stack[-1] == 0) GOTO 0x209; Pop(1)

0x1f7: PushEmpty(int, object)
0x1f8: Stack[-1] = Stack[-6]
0x1f9: Call 0x4f5

0x1fa: Stack[-3] = Stack[-2]
0x1fb: Pop(2)
0x1fc: Push((int) 0)
0x1fd: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x1fe: IF (Stack[-1] == 0) GOTO 0x209; Pop(1)

0x1ff: Push((int) 1)
0x200: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x201: IF (Stack[-1] == 0) GOTO 0x205; Pop(1)

0x202: PushEmpty()
0x203: Call 0x280

0x204: Pop(0)
0x205: PushEmpty(object)
0x206: Stack[-1] = Stack[-5]
0x207: Call 0x4f8

0x208: Pop(1)
0x209: Return(); Pop(2)

0x20a: PushEmpty(int, int)
0x20b: PushEmpty(int, object)
0x20c: Stack[-1] = Stack[-5]
0x20d: Call 0x4ff

0x20e: Stack[-3] = Stack[-2]
0x20f: Pop(2)
0x210: Push((int) 0)
0x211: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x212: IF (Stack[-1] == 0) GOTO 0x21d; Pop(1)

0x213: Push((int) 1)
0x214: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x215: IF (Stack[-1] == 0) GOTO 0x219; Pop(1)

0x216: PushEmpty()
0x217: Call 0x280

0x218: Pop(0)
0x219: PushEmpty(object)
0x21a: Stack[-1] = Stack[-4]
0x21b: Call 0x502

0x21c: Pop(1)
0x21d: Return(); Pop(2)

0x21e: PushEmpty(int, int)
0x21f: PushEmpty(int, string, object)
0x220: Stack[-2] = Stack[-6]
0x221: Stack[-1] = Stack[-7]
0x222: Call 0x504

0x223: Stack[-4] = Stack[-3]
0x224: Pop(3)
0x225: Push((int) 0)
0x226: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x227: IF (Stack[-1] == 0) GOTO 0x233; Pop(1)

0x228: Push((int) 1)
0x229: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x22a: IF (Stack[-1] == 0) GOTO 0x22e; Pop(1)

0x22b: PushEmpty()
0x22c: Call 0x280

0x22d: Pop(0)
0x22e: PushEmpty(string, object)
0x22f: Stack[-2] = Stack[-5]
0x230: Stack[-1] = Stack[-6]
0x231: Call 0x507

0x232: Pop(2)
0x233: Return(); Pop(2)

0x234: PushEmpty()
0x235: Call 0x280

0x236: Pop(0)
0x237: PushEmpty()
0x238: Call 0x537

0x239: Pop(0)
0x23a: Return(); Pop(0)

0x23b: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x23c: @ WaitForAnimEnd()
0x23d: Pop(0)
0x23e: PushEmpty(bool)
0x23f: Call 0x494

0x240: Pop(0)
0x241: Pop(1); Push((bool) Stack[-1] == 0)
0x242: IF (Stack[-1] == 0) GOTO 0x244; Pop(1)

0x243: Return(); Pop(14)

0x244: PushEmpty(int)
0x245: Call 0x4d4

0x246: Stack[-8] = Stack[-1]
0x247: Pop(1)
0x248: Stack[-6] = (int) 0
0x249: PushEmpty(bool)
0x24a: Stack[-1] = (bool) 0
0x24b: Push((int) 5)
0x24c: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x24d: IF (Stack[-1] == 0) GOTO 0x253; Pop(1)

0x24e: PushEmpty(bool)
0x24f: Call 0x494

0x250: Pop(0)
0x251: IF (Stack[-1] == 0) GOTO 0x253; Pop(1)

0x252: Stack[-1] = (bool) 1
0x253: IF (Stack[-1] == 0) GOTO 0x27f; Pop(1)

0x254: Push((int) 3)
0x255: @ irand(Stack[-6], Stack[-1])
0x256: Pop(1)
0x257: Push((int) 0)
0x258: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x259: IF (Stack[-1] == 0) GOTO 0x26b; Pop(1)

0x25a: Push(Stack[-7])
0x25b: IF (Stack[-1] == 0) GOTO 0x26a; Pop(1)

0x25c: @ irand(Stack[-4], Stack[-7])
0x25d: Pop(0)
0x25e: Push("all")
0x25f: PushEmpty(string, int)
0x260: Stack[-1] = Stack[-7]
0x261: Call 0x4cd

0x262: Pop(1)
0x263: @ PlayAnimation(Stack[-2], Stack[-1])
0x264: Pop(2)
0x265: @ WaitForAnimEnd(Stack[-3])
0x266: Pop(0)
0x267: Pop(0); Push((bool) Stack[-3] == 0)
0x268: IF (Stack[-1] == 0) GOTO 0x26a; Pop(1)

0x269: GOTO 0x27f

0x26a: GOTO 0x27c

0x26b: Push((int) 1)
0x26c: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x26d: IF (Stack[-1] == 0) GOTO 0x279; Pop(1)

0x26e: Push((int) 4)
0x26f: @ rand(Stack[-3], Stack[-1])
0x270: Pop(1)
0x271: Push((int) 1)
0x272: Pop(1); Push(Stack[-3] + Stack[-1]);
0x273: @ Sleep(Stack[-1], Stack[-2])
0x274: Pop(1)
0x275: Pop(0); Push((bool) Stack[-1] == 0)
0x276: IF (Stack[-1] == 0) GOTO 0x278; Pop(1)

0x277: GOTO 0x27f

0x278: GOTO 0x27c

0x279: Push(Stack[-6])
0x27a: IF (Stack[-1] == 0) GOTO 0x27c; Pop(1)

0x27b: GOTO 0x27f

0x27c: Push((int) 1)
0x27d: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x27e: GOTO 0x249

0x27f: Return(); Pop(14)

0x280: @ StopAnimation()
0x281: Pop(0)
0x282: @ StopGroup0()
0x283: Pop(0)
0x284: Return(); Pop(0)

0x285: PushEmpty()
0x286: PushEmpty(bool, object)
0x287: Stack[-1] = Stack[-3]
0x288: Call 0x50d

0x289: Pop(1)
0x28a: IF (Stack[-1] == 0) GOTO 0x28f; Pop(1)

0x28b: PushEmpty(object)
0x28c: Stack[-1] = Stack[-2]
0x28d: Call 0x2ab

0x28e: Pop(1)
0x28f: Return(); Pop(0)

0x290: PushEmpty(int, int)
0x291: PushEmpty(int, object)
0x292: Stack[-1] = Stack[-5]
0x293: Call 0x512

0x294: Stack[-3] = Stack[-2]
0x295: Pop(2)
0x296: Push((int) 0)
0x297: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x298: IF (Stack[-1] == 0) GOTO 0x2a3; Pop(1)

0x299: Push((int) 1)
0x29a: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x29b: IF (Stack[-1] == 0) GOTO 0x29f; Pop(1)

0x29c: PushEmpty()
0x29d: Call 0x2dc

0x29e: Pop(0)
0x29f: PushEmpty(object)
0x2a0: Stack[-1] = Stack[-4]
0x2a1: Call 0x515

0x2a2: Pop(1)
0x2a3: Return(); Pop(2)

0x2a4: PushEmpty()
0x2a5: Call 0x2dc

0x2a6: Pop(0)
0x2a7: PushEmpty()
0x2a8: Call 0x537

0x2a9: Pop(0)
0x2aa: Return(); Pop(0)

0x2ab: PushEmpty(bool, bool)
0x2ac: PushEmpty(bool, object)
0x2ad: Stack[-1] = Stack[-5]
0x2ae: Push(-2, 2); TaskCall(4)
0x2af: Call 0x305

0x2b0: Pop(-2, 2); TaskReturn
0x2b1: Pop(1)
0x2b2: IF (Stack[-1] == 0) GOTO 0x2db; Pop(1)

0x2b3: @ Face(Stack[-3])
0x2b4: Pop(0)
0x2b5: @ WaitForAnimEnd(Stack[-1])
0x2b6: Pop(0)
0x2b7: Pop(0); Push((bool) Stack[-1] == 0)
0x2b8: IF (Stack[-1] == 0) GOTO 0x2ba; Pop(1)

0x2b9: GOTO 0x2db

0x2ba: Push("all")
0x2bb: Push("dattack_begin")
0x2bc: @ PlayAnimation(Stack[-2], Stack[-1])
0x2bd: Pop(2)
0x2be: @ WaitForAnimEnd(Stack[-1])
0x2bf: Pop(0)
0x2c0: Pop(0); Push((bool) Stack[-1] == 0)
0x2c1: IF (Stack[-1] == 0) GOTO 0x2c3; Pop(1)

0x2c2: GOTO 0x2db

0x2c3: PushEmpty(float, object)
0x2c4: Stack[-1] = Stack[-5]
0x2c5: Call 0x3a7

0x2c6: Pop(1)
0x2c7: Push((float)90000.0)
0x2c8: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x2c9: IF (Stack[-1] == 0) GOTO 0x2cf; Pop(1)

0x2ca: PushEmpty(float, object, float)
0x2cb: Stack[-2] = Stack[-6]
0x2cc: Stack[-1] = (float) 0.2
0x2cd: Call 0x3d1

0x2ce: Pop(3)
0x2cf: Push("all")
0x2d0: Push("dattack_end")
0x2d1: @ PlayAnimation(Stack[-2], Stack[-1])
0x2d2: Pop(2)
0x2d3: @ WaitForAnimEnd(Stack[-1])
0x2d4: Pop(0)
0x2d5: Pop(0); Push((bool) Stack[-1] == 0)
0x2d6: IF (Stack[-1] == 0) GOTO 0x2d8; Pop(1)

0x2d7: GOTO 0x2db

0x2d8: @ StopAsync()
0x2d9: Pop(0)
0x2da: GOTO 0x2ac

0x2db: Return(); Pop(2)

0x2dc: @ StopAsync()
0x2dd: Pop(0)
0x2de: @ StopAnimation()
0x2df: Pop(0)
0x2e0: Return(); Pop(0)

0x2e1: PushEmpty()
0x2e2: PushEmpty()
0x2e3: Call 0x2dc

0x2e4: Pop(0)
0x2e5: PushEmpty(object)
0x2e6: Stack[-1] = Stack[-2]
0x2e7: Call 0x4bf

0x2e8: Pop(1)
0x2e9: Return(); Pop(0)

0x2ea: PushEmpty(int, int)
0x2eb: PushEmpty(int, object)
0x2ec: Stack[-1] = Stack[-5]
0x2ed: Call 0x512

0x2ee: Stack[-3] = Stack[-2]
0x2ef: Pop(2)
0x2f0: Push((int) 0)
0x2f1: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x2f2: IF (Stack[-1] == 0) GOTO 0x2fd; Pop(1)

0x2f3: Push((int) 1)
0x2f4: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x2f5: IF (Stack[-1] == 0) GOTO 0x2f9; Pop(1)

0x2f6: PushEmpty()
0x2f7: Call 0x38e

0x2f8: Pop(0)
0x2f9: PushEmpty(object)
0x2fa: Stack[-1] = Stack[-4]
0x2fb: Call 0x515

0x2fc: Pop(1)
0x2fd: Return(); Pop(2)

0x2fe: PushEmpty()
0x2ff: Call 0x38e

0x300: Pop(0)
0x301: PushEmpty()
0x302: Call 0x537

0x303: Pop(0)
0x304: Return(); Pop(0)

0x305: PushEmpty()
0x306: PushEmpty(bool, object, float, float, bool, bool)
0x307: Stack[-5] = Stack[-7]
0x308: Stack[-4] = (int) 150
0x309: Stack[-3] = (int) 3000
0x30a: Stack[-2] = (bool) 0
0x30b: Stack[-1] = (bool) 1
0x30c: Call 0x312

0x30d: Stack[-8] = Stack[-6]
0x30e: Pop(6)
0x30f: Return(); Pop(0)

0x310: Stack[-1] = "zwalk"
0x311: Return(); Pop(0)

0x312: PushEmpty(bool, bool, object, cvector, cvector, cvector, float, object, bool, bool, object, cvector, cvector, cvector, float, object)
0x313: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x314: Stack[1 + Tasks[-1].StackPointer] = Stack[-21]
0x315: Stack[-7] = Stack[-17]
0x316: PushEmpty(bool, object)
0x317: Stack[-1] = Stack[-23]
0x318: Call 0x39e

0x319: Pop(1)
0x31a: Pop(1); Push((bool) Stack[-1] == 0)
0x31b: IF (Stack[-1] == 0) GOTO 0x31e; Pop(1)

0x31c: Stack[-22] = (bool) 0
0x31d: Return(); Pop(16)

0x31e: @@ GetPosition(Stack[-5])
0x31f: Pop(0)
0x320: @ GetPosition(Stack[-4])
0x321: Pop(0)
0x322: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x323: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x324: PushEmpty(bool)
0x325: Stack[-1] = (bool) 0
0x326: Push((int) 0)
0x327: Pop(1); Push((bool) Stack[-21] > Stack[-1])
0x328: IF (Stack[-1] == 0) GOTO 0x32d; Pop(1)

0x329: Pop(0); Push(Stack[-20] * Stack[-20]);
0x32a: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x32b: IF (Stack[-1] == 0) GOTO 0x32d; Pop(1)

0x32c: Stack[-1] = (bool) 1
0x32d: IF (Stack[-1] == 0) GOTO 0x332; Pop(1)

0x32e: @ Stop()
0x32f: Pop(0)
0x330: Stack[-22] = (bool) 0
0x331: Return(); Pop(16)

0x332: Pop(0); Push(Stack[-20] * Stack[-20]);
0x333: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x334: IF (Stack[-1] == 0) GOTO 0x370; Pop(1)

0x335: @@ GetPFPosition(Stack[-5])
0x336: Pop(0)
0x337: @ FindPathTo(Stack[-1], Stack[-5])
0x338: Pop(0)
0x339: Pop(0); Push(( Stack[-1] != 0 )
0x33a: IF (Stack[-1] == 0) GOTO 0x33d; Pop(1)

0x33b: Stack[-6] = Stack[-1]
0x33c: Stack[-1] = 0
0x33d: Pop(0); Push(( Stack[-6] != 0 )
0x33e: IF (Stack[-1] == 0) GOTO 0x35e; Pop(1)

0x33f: Push(Stack[-7])
0x340: IF (Stack[-1] == 0) GOTO 0x347; Pop(1)

0x341: Stack[-7] = (bool) 0
0x342: @ RotatePath(Stack[-6], Stack[-8])
0x343: Pop(0)
0x344: Pop(0); Push((bool) Stack[-8] == 0)
0x345: IF (Stack[-1] == 0) GOTO 0x347; Pop(1)

0x346: GOTO 0x376

0x347: Push((int) 0)
0x348: Push((float)0.3)
0x349: @ SetTimer(Stack[-2], Stack[-1])
0x34a: Pop(2)
0x34b: PushEmpty(string)
0x34c: Call 0x310

0x34d: Pop(0)
0x34e: PushEmpty(string)
0x34f: Call 0x3a5

0x350: Pop(0)
0x351: @ FollowPath(Stack[-8], Stack[-20], Stack[-10], Stack[-2], Stack[-1])
0x352: Pop(2)
0x353: Pop(0); Push((bool) Stack[-8] == 0)
0x354: IF (Stack[-1] == 0) GOTO 0x35c; Pop(1)

0x355: Push( Stack[0 + Tasks[-1].StackPointer] )
0x356: IF (Stack[-1] == 0) GOTO 0x35a; Pop(1)

0x357: Stack[-6] = 0
0x358: GOTO 0x376

0x359: GOTO 0x35b

0x35a: GOTO 0x375

0x35b: GOTO 0x35d

0x35c: Stack[-6] = 0
0x35d: GOTO 0x36e

0x35e: Push((int) 0)
0x35f: @ KillTimer(Stack[-1])
0x360: Pop(1)
0x361: Push((float)0.5)
0x362: @ Sleep(Stack[-1], Stack[-9])
0x363: Pop(1)
0x364: Pop(0); Push((bool) Stack[-8] == 0)
0x365: IF (Stack[-1] == 0) GOTO 0x36a; Pop(1)

0x366: Push( Stack[0 + Tasks[-1].StackPointer] )
0x367: IF (Stack[-1] == 0) GOTO 0x36a; Pop(1)

0x368: Stack[-6] = 0
0x369: GOTO 0x376

0x36a: Push((int) 0)
0x36b: Push((float)0.3)
0x36c: @ SetTimer(Stack[-2], Stack[-1])
0x36d: Pop(2)
0x36e: Stack[-1] = 0
0x36f: GOTO 0x374

0x370: Push((int) 0)
0x371: @ KillTimer(Stack[-1])
0x372: Pop(1)
0x373: GOTO 0x376

0x374: Stack[-6] = 0
0x375: GOTO 0x316

0x376: Stack[-22] = !Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x377: Return(); Pop(16)

0x378: PushEmpty()
0x379: Push((int) 0)
0x37a: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x37b: IF (Stack[-1] == 0) GOTO 0x37d; Pop(1)

0x37c: Return(); Pop(0)

0x37d: PushEmpty(bool, object)
0x37e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x37f: Call 0x39e

0x380: Pop(1)
0x381: Pop(1); Push((bool) Stack[-1] == 0)
0x382: IF (Stack[-1] == 0) GOTO 0x384; Pop(1)

0x383: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x384: Push((int) 0)
0x385: @ KillTimer(Stack[-1])
0x386: Pop(1)
0x387: @ Stop()
0x388: Pop(0)
0x389: Return(); Pop(0)

0x38a: PushEmpty()
0x38b: @ RequestClearPath(Stack[-1])
0x38c: Pop(0)
0x38d: Return(); Pop(0)

0x38e: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x38f: Push((int) 0)
0x390: @ KillTimer(Stack[-1])
0x391: Pop(1)
0x392: @ Stop()
0x393: Pop(0)
0x394: Return(); Pop(0)

0x395: PushEmpty()
0x396: PushEmpty()
0x397: Call 0x38e

0x398: Pop(0)
0x399: PushEmpty(object)
0x39a: Stack[-1] = Stack[-2]
0x39b: Call 0x4bf

0x39c: Pop(1)
0x39d: Return(); Pop(0)

0x39e: PushEmpty()
0x39f: PushEmpty(bool, object)
0x3a0: Stack[-1] = Stack[-3]
0x3a1: Call 0x439

0x3a2: Stack[-4] = Stack[-2]
0x3a3: Pop(2)
0x3a4: Return(); Pop(0)

0x3a5: Stack[-1] = "run"
0x3a6: Return(); Pop(0)

0x3a7: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x3a8: @ GetPosition(Stack[-3])
0x3a9: Pop(0)
0x3aa: @@ GetPosition(Stack[-2])
0x3ab: Pop(0)
0x3ac: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x3ad: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x3ae: Return(); Pop(6)

0x3af: PushEmpty(bool, bool)
0x3b0: Push("HasProperty")
0x3b1: Push((int) 2)
0x3b2: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x3b3: Pop(1); Push((bool) Stack[-1] == 0)
0x3b4: IF (Stack[-1] == 0) GOTO 0x3b7; Pop(1)

0x3b5: Stack[-5] = (bool) 0
0x3b6: Return(); Pop(2)

0x3b7: @@ HasProperty(Stack[-3], Stack[-1])
0x3b8: Pop(0)
0x3b9: Stack[-5] = Stack[-1]
0x3ba: Return(); Pop(2)

0x3bb: PushEmpty(float, float)
0x3bc: PushEmpty(bool, object, string)
0x3bd: Stack[-2] = Stack[-10]
0x3be: Stack[-1] = Stack[-9]
0x3bf: Call 0x3af

0x3c0: Pop(2)
0x3c1: Pop(1); Push((bool) Stack[-1] == 0)
0x3c2: IF (Stack[-1] == 0) GOTO 0x3c5; Pop(1)

0x3c3: Stack[-8] = (bool) 0
0x3c4: Return(); Pop(2)

0x3c5: @@ GetProperty(Stack[-6], Stack[-1])
0x3c6: Pop(0)
0x3c7: PushEmpty(float, float, float, float)
0x3c8: Stack[-3] = Stack[-5] + Stack[-9]; Pop(0);
0x3c9: Stack[-2] = Stack[-8]
0x3ca: Stack[-1] = Stack[-7]
0x3cb: Call 0x49f

0x3cc: Pop(3)
0x3cd: @@ SetProperty(Stack[-7], Stack[-1])
0x3ce: Pop(1)
0x3cf: Stack[-8] = (bool) 1
0x3d0: Return(); Pop(2)

0x3d1: PushEmpty(int, float, float, int, float, float)
0x3d2: PushEmpty(bool, object, string)
0x3d3: Stack[-2] = Stack[-11]
0x3d4: Stack[-1] = "disease"
0x3d5: Call 0x3af

0x3d6: Pop(2)
0x3d7: Pop(1); Push((bool) Stack[-1] == 0)
0x3d8: IF (Stack[-1] == 0) GOTO 0x3db; Pop(1)

0x3d9: Stack[-9] = (int) 0
0x3da: Return(); Pop(6)

0x3db: PushEmpty(bool, object, string)
0x3dc: Stack[-2] = Stack[-11]
0x3dd: Stack[-1] = "armor_disease"
0x3de: Call 0x3af

0x3df: Pop(2)
0x3e0: IF (Stack[-1] == 0) GOTO 0x3ef; Pop(1)

0x3e1: Push("armor_disease")
0x3e2: @@ GetProperty(Stack[-1], Stack[-4])
0x3e3: Pop(1)
0x3e4: Push((int) 100)
0x3e5: Pop(1); Push((bool) Stack[-4] < Stack[-1])
0x3e6: IF (Stack[-1] == 0) GOTO 0x3ed; Pop(1)

0x3e7: Push((int) 1)
0x3e8: Push((float)100.0)
0x3e9: Pop(1); Push(Stack[-5] / Stack[-1]);
0x3ea: Pop(2); Push(Stack[-2] - Stack[-1]);
0x3eb: Stack[-8] = Stack[-8] * Stack[-1]; Pop(1);
0x3ec: GOTO 0x3ef

0x3ed: Stack[-9] = (int) 0
0x3ee: Return(); Pop(6)

0x3ef: PushEmpty(bool, object, string)
0x3f0: Stack[-2] = Stack[-11]
0x3f1: Stack[-1] = "immunity"
0x3f2: Call 0x3af

0x3f3: Pop(2)
0x3f4: IF (Stack[-1] == 0) GOTO 0x406; Pop(1)

0x3f5: Push("immunity")
0x3f6: @@ GetProperty(Stack[-1], Stack[-2])
0x3f7: Pop(1)
0x3f8: Pop(0); Push((bool) Stack[-1] < Stack[-7])
0x3f9: IF (Stack[-1] == 0) GOTO 0x400; Pop(1)

0x3fa: Push("immunity")
0x3fb: Push((int) 0)
0x3fc: @@ SetProperty(Stack[-2], Stack[-1])
0x3fd: Pop(2)
0x3fe: Stack[-2] = Stack[-7] - Stack[-1]; Pop(0);
0x3ff: GOTO 0x406

0x400: Push("immunity")
0x401: Pop(0); Push(Stack[-2] - Stack[-8]);
0x402: @@ SetProperty(Stack[-2], Stack[-1])
0x403: Pop(2)
0x404: Stack[-9] = Stack[-7]
0x405: Return(); Pop(6)

0x406: PushEmpty(bool, object, string, float, float, float)
0x407: Stack[-5] = Stack[-14]
0x408: Stack[-4] = "disease"
0x409: Stack[-3] = Stack[-8]
0x40a: Stack[-2] = (int) 0
0x40b: Stack[-1] = (int) 1
0x40c: Call 0x3bb

0x40d: Pop(6)
0x40e: Stack[-9] = Stack[-7]
0x40f: Return(); Pop(6)

0x410: PushEmpty(bool, bool)
0x411: @@ IsDead(Stack[-1])
0x412: Pop(0)
0x413: Stack[-4] = Stack[-1]
0x414: Return(); Pop(2)

0x415: PushEmpty(object, object, object, object)
0x416: Pop(0); Push((bool) Stack[-5] == 0)
0x417: IF (Stack[-1] == 0) GOTO 0x41a; Pop(1)

0x418: Stack[-6] = (bool) 0
0x419: Return(); Pop(4)

0x41a: PushEmpty(bool)
0x41b: Stack[-1] = (bool) 0
0x41c: Push("IsDead")
0x41d: Push((int) 1)
0x41e: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x41f: IF (Stack[-1] == 0) GOTO 0x426; Pop(1)

0x420: PushEmpty(bool, object)
0x421: Stack[-1] = Stack[-8]
0x422: Call 0x410

0x423: Pop(1)
0x424: IF (Stack[-1] == 0) GOTO 0x426; Pop(1)

0x425: Stack[-1] = (bool) 1
0x426: IF (Stack[-1] == 0) GOTO 0x429; Pop(1)

0x427: Stack[-6] = (bool) 0
0x428: Return(); Pop(4)

0x429: @ GetScene(Stack[-2])
0x42a: Pop(0)
0x42b: Pop(0); Push((bool) Stack[-2] == 0)
0x42c: IF (Stack[-1] == 0) GOTO 0x42f; Pop(1)

0x42d: Stack[-6] = (bool) 0
0x42e: Return(); Pop(4)

0x42f: @@ GetScene(Stack[-1])
0x430: Pop(0)
0x431: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x432: IF (Stack[-1] == 0) GOTO 0x435; Pop(1)

0x433: Stack[-6] = (bool) 0
0x434: Return(); Pop(4)

0x435: Stack[-6] = (bool) 1
0x436: Return(); Pop(4)

0x437: Stack[-1] = 0
0x438: Stack[-2] = 0
0x439: PushEmpty(int, int)
0x43a: PushEmpty(bool, object)
0x43b: Stack[-1] = Stack[-5]
0x43c: Call 0x415

0x43d: Pop(1)
0x43e: Pop(1); Push((bool) Stack[-1] == 0)
0x43f: IF (Stack[-1] == 0) GOTO 0x442; Pop(1)

0x440: Stack[-4] = (bool) 0
0x441: Return(); Pop(2)

0x442: PushEmpty(bool, object, string)
0x443: Stack[-2] = Stack[-6]
0x444: Stack[-1] = "noaccess"
0x445: Call 0x3af

0x446: Pop(2)
0x447: Pop(1); Push((bool) Stack[-1] == 0)
0x448: IF (Stack[-1] == 0) GOTO 0x44b; Pop(1)

0x449: Stack[-4] = (bool) 1
0x44a: Return(); Pop(2)

0x44b: Push("noaccess")
0x44c: @@ GetProperty(Stack[-1], Stack[-2])
0x44d: Pop(1)
0x44e: Push((int) 0)
0x44f: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x450: Return(); Pop(2)

0x451: PushEmpty(object, object, cvector, float, int, cvector, cvector, cvector, cvector, string, object, object, cvector, float, int, cvector, cvector, cvector, cvector, string)
0x452: PushEmpty(bool)
0x453: Stack[-1] = (bool) 0
0x454: Push((int) 4)
0x455: Pop(1); Push((bool) Stack[-24] != Stack[-1])
0x456: IF (Stack[-1] == 0) GOTO 0x45b; Pop(1)

0x457: Push((int) 5)
0x458: Pop(1); Push((bool) Stack[-24] != Stack[-1])
0x459: IF (Stack[-1] == 0) GOTO 0x45b; Pop(1)

0x45a: Stack[-1] = (bool) 1
0x45b: IF (Stack[-1] == 0) GOTO 0x46e; Pop(1)

0x45c: @ GetScene(Stack[-10])
0x45d: Pop(0)
0x45e: @ GetPosition(Stack[-8])
0x45f: Pop(0)
0x460: @ GetEyesHeight(Stack[-7])
0x461: Pop(0)
0x462: Push(CvectorIndex(Stack[-8], 1))
0x463: Push((int) 2)
0x464: Pop(1); Push(Stack[-9] / Stack[-1]);
0x465: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x466: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x467: Push("scripted")
0x468: Push(CVector(0.0, 0.0, 1.0))
0x469: Push("blood.xml")
0x46a: @ AddActorByType(Stack[-12], Stack[-3], Stack[-13], Stack[-11], Stack[-2], Stack[-1])
0x46b: Pop(3)
0x46c: Stack[-9] = 0
0x46d: Stack[-10] = 0
0x46e: Pop(0); Push((bool) Stack[-23] == 0)
0x46f: IF (Stack[-1] == 0) GOTO 0x471; Pop(1)

0x470: Return(); Pop(20)

0x471: @ GetSecondaryAnimationType(Stack[-6])
0x472: Pop(0)
0x473: Push((int) 0)
0x474: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x475: IF (Stack[-1] == 0) GOTO 0x477; Pop(1)

0x476: Return(); Pop(20)

0x477: @@ GetPosition(Stack[-5])
0x478: Pop(0)
0x479: @ GetPosition(Stack[-4])
0x47a: Pop(0)
0x47b: @ GetDirection(Stack[-3])
0x47c: Pop(0)
0x47d: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0x47e: Push(CvectorIndex(Stack[-2], 0))
0x47f: Push(CvectorIndex(Stack[-4], 0))
0x480: Pop(2); Push(Stack[-2] * Stack[-1]);
0x481: Push(CvectorIndex(Stack[-3], 2))
0x482: Push(CvectorIndex(Stack[-5], 2))
0x483: Pop(2); Push(Stack[-2] * Stack[-1]);
0x484: Pop(2); Push(Stack[-2] + Stack[-1]);
0x485: Push((int) 0)
0x486: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x487: IF (Stack[-1] == 0) GOTO 0x48a; Pop(1)

0x488: Stack[-1] = "fhit"
0x489: GOTO 0x48b

0x48a: Stack[-1] = "bhit"
0x48b: Push("hit_react")
0x48c: Push("1")
0x48d: Pop(1); Push(Stack[-3] + Stack[-1]);
0x48e: Push("2")
0x48f: Pop(1); Push(Stack[-4] + Stack[-1]);
0x490: Push((int) -10)
0x491: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x492: Pop(4)
0x493: Return(); Pop(20)

0x494: PushEmpty(bool, bool)
0x495: @ IsLoaded(Stack[-1])
0x496: Pop(0)
0x497: Stack[-3] = Stack[-1]
0x498: Return(); Pop(2)

0x499: PushEmpty(object, object)
0x49a: @ self(Stack[-1])
0x49b: Pop(0)
0x49c: Stack[-3] = Stack[-1]
0x49d: Return(); Pop(2)

0x49e: Stack[-1] = 0
0x49f: PushEmpty()
0x4a0: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x4a1: IF (Stack[-1] == 0) GOTO 0x4a4; Pop(1)

0x4a2: Stack[-4] = Stack[-2]
0x4a3: Return(); Pop(0)

0x4a4: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x4a5: IF (Stack[-1] == 0) GOTO 0x4a8; Pop(1)

0x4a6: Stack[-4] = Stack[-1]
0x4a7: Return(); Pop(0)

0x4a8: Stack[-4] = Stack[-3]
0x4a9: Return(); Pop(0)

0x4aa: PushEmpty()
0x4ab: PushEmpty(object)
0x4ac: Stack[-1] = Stack[-2]
0x4ad: Push(-1, 0); TaskCall(0)
0x4ae: Call 0x0

0x4af: Pop(-1, 0); TaskReturn
0x4b0: Pop(1)
0x4b1: Return(); Pop(0)

0x4b2: PushEmpty(float, float)
0x4b3: Push("health")
0x4b4: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x4b5: IF (Stack[-1] == 0) GOTO 0x4be; Pop(1)

0x4b6: Push("health")
0x4b7: @ GetProperty(Stack[-1], Stack[-2])
0x4b8: Pop(1)
0x4b9: Push((int) 0)
0x4ba: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x4bb: IF (Stack[-1] == 0) GOTO 0x4be; Pop(1)

0x4bc: @ SignalDeath(Stack[-4])
0x4bd: Pop(0)
0x4be: Return(); Pop(2)

0x4bf: PushEmpty()
0x4c0: PushEmpty(object)
0x4c1: Stack[-1] = Stack[-2]
0x4c2: Call 0x4aa

0x4c3: Pop(1)
0x4c4: Return(); Pop(0)

0x4c5: PushEmpty()
0x4c6: PushEmpty(object, int, float)
0x4c7: Stack[-3] = Stack[-7]
0x4c8: Stack[-2] = Stack[-6]
0x4c9: Stack[-1] = Stack[-5]
0x4ca: Call 0x451

0x4cb: Pop(3)
0x4cc: Return(); Pop(0)

0x4cd: PushEmpty(string, string)
0x4ce: Stack[-1] = "idle"
0x4cf: Push(Stack[-3])
0x4d0: IF (Stack[-1] == 0) GOTO 0x4d2; Pop(1)

0x4d1: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x4d2: Stack[-4] = Stack[-1]
0x4d3: Return(); Pop(2)

0x4d4: PushEmpty(int, bool, int, bool)
0x4d5: Stack[-2] = (int) 0
0x4d6: Push("all")
0x4d7: PushEmpty(string, int)
0x4d8: Stack[-1] = Stack[-5]
0x4d9: Call 0x4cd

0x4da: Pop(1)
0x4db: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x4dc: Pop(2)
0x4dd: Pop(0); Push((bool) Stack[-1] == 0)
0x4de: IF (Stack[-1] == 0) GOTO 0x4e0; Pop(1)

0x4df: GOTO 0x4e3

0x4e0: Push((int) 1)
0x4e1: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x4e2: GOTO 0x4d6

0x4e3: Stack[-5] = Stack[-2]
0x4e4: Return(); Pop(4)

0x4e5: PushEmpty()
0x4e6: Stack[-2] = (int) 2
0x4e7: Return(); Pop(0)

0x4e8: PushEmpty()
0x4e9: PushEmpty(object)
0x4ea: Stack[-1] = Stack[-2]
0x4eb: Push(-1, 0); TaskCall(3)
0x4ec: Call 0x285

0x4ed: Pop(-1, 0); TaskReturn
0x4ee: Pop(1)
0x4ef: Return(); Pop(0)

0x4f0: PushEmpty()
0x4f1: Stack[-2] = (int) 0
0x4f2: Return(); Pop(0)

0x4f3: PushEmpty()
0x4f4: Return(); Pop(0)

0x4f5: PushEmpty()
0x4f6: Stack[-2] = (int) 0
0x4f7: Return(); Pop(0)

0x4f8: PushEmpty()
0x4f9: Return(); Pop(0)

0x4fa: PushEmpty()
0x4fb: Stack[-2] = (int) 0
0x4fc: Return(); Pop(0)

0x4fd: PushEmpty()
0x4fe: Return(); Pop(0)

0x4ff: PushEmpty()
0x500: Stack[-2] = (int) 0
0x501: Return(); Pop(0)

0x502: PushEmpty()
0x503: Return(); Pop(0)

0x504: PushEmpty()
0x505: Stack[-3] = (int) 0
0x506: Return(); Pop(0)

0x507: PushEmpty()
0x508: Return(); Pop(0)

0x509: Push(GlobalVars[0])
0x50a: Stack[-1] = (bool) 0
0x50b: GlobalVars[0] = Stack[-1]; Pop(1)
0x50c: Return(); Pop(0)

0x50d: PushEmpty(bool, bool)
0x50e: @ IsPlayerActor(Stack[-3], Stack[-1])
0x50f: Pop(0)
0x510: Stack[-4] = Stack[-1]
0x511: Return(); Pop(2)

0x512: PushEmpty()
0x513: Stack[-2] = (int) 0
0x514: Return(); Pop(0)

0x515: PushEmpty()
0x516: Return(); Pop(0)

0x517: PushEmpty(bool, bool)
0x518: @ CanSee(Stack[-1], Stack[-4])
0x519: Pop(0)
0x51a: PushEmpty(bool)
0x51b: Stack[-1] = (bool) 1
0x51c: Push(Stack[-2])
0x51d: IF (Stack[-1] == 0) GOTO 0x526; Pop(1)

0x51e: PushEmpty(float, object)
0x51f: Stack[-1] = Stack[-7]
0x520: Call 0x3a7

0x521: Pop(1)
0x522: Push((float)250000.0)
0x523: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x524: IF (Stack[-1] == 0) GOTO 0x526; Pop(1)

0x525: Stack[-1] = (bool) 0
0x526: IF (Stack[-1] == 0) GOTO 0x52c; Pop(1)

0x527: Push((float)-0.3)
0x528: @ ReportReputationChange(Stack[-5], Stack[-4], Stack[-1])
0x529: Pop(1)
0x52a: Stack[-5] = (bool) 1
0x52b: Return(); Pop(2)

0x52c: Stack[-5] = (bool) 0
0x52d: Return(); Pop(2)

0x52e: PushEmpty()
0x52f: Push(GlobalVars[0])
0x530: Stack[-1] = (bool) 1
0x531: GlobalVars[0] = Stack[-1]; Pop(1)
0x532: Push((int) 50)
0x533: Push((int) 40)
0x534: @ SetRTEnvelope(Stack[-2], Stack[-1])
0x535: Pop(2)
0x536: Return(); Pop(0)

0x537: PushEmpty(object)
0x538: Call 0x499

0x539: Pop(0)
0x53a: @ RemoveActor(Stack[-1])
0x53b: Pop(1)
0x53c: Return(); Pop(0)

