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
	Can't retreat, distance: 
	HasProperty
	HasProperty
	IsDead
	IsDead
	GetScene
	noaccess
	GetProperty
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
	StopGroup0 (0 args)
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
	rand (2 args)
	Sleep (1 args)
	GetCameraFarDistance (1 args)
	GetRandomPFPointInCircle (4 args)
	FindShiftedPathTo (2 args)
	RotatePath (2 args)
	FollowPath (3 args)
	RequestClearPath (1 args)
	irand (2 args)
	WaitForAnimEnd (1 args)
	Sleep (2 args)
	StopAnimation (0 args)
	FindLongestDir (6 args)
	Trace (1 args)
	Rotate (2 args)
	SetTimer (2 args)
	MovePoint (3 args)
	KillTimer (1 args)
	FindDirLength (3 args)
	GetScene (1 args)
	GetEyesHeight (1 args)
	AddActorByType (6 args)
	GetSecondaryAnimationType (1 args)
	FadeSecondaryAnimation (4 args)
	IsLoaded (1 args)
	GetProperty (2 args)
	SignalDeath (1 args)
	HasAnimation (3 args)

RunOp = 0x9a
RunTask = 2

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_5 Op = 0x3 Vars = ()
	GTASK_1  Params = 1
		EVENT_0 Op = 0x15 Vars = (object)
		EVENT_6 Op = 0x23 Vars = ()
		EVENT_22 Op = 0x94 Vars = (object, int, float, float)
		EVENT_16 Op = 0x96 Vars = (object, string)
		EVENT_41 Op = 0x98 Vars = (object)
	GTASK_2 Vars = (bool, bool) Params = 0
		EVENT_0 Op = 0xb1 Vars = (object)
		EVENT_17 Op = 0xc5 Vars = (object)
		EVENT_30 Op = 0xd9 Vars = (object, object)
		EVENT_40 Op = 0xf3 Vars = (object)
		EVENT_42 Op = 0x107 Vars = (object, string)
		EVENT_6 Op = 0x11d Vars = ()
		EVENT_10 Op = 0x15d Vars = (object)
		EVENT_28 Op = 0x161 Vars = ()
		EVENT_41 Op = 0x16b Vars = (object)
	GTASK_3  Params = 0
		EVENT_0 Op = 0x176 Vars = (object)
		EVENT_17 Op = 0x18a Vars = (object)
		EVENT_30 Op = 0x19e Vars = (object, object)
		EVENT_40 Op = 0x1b8 Vars = (object)
		EVENT_42 Op = 0x1cc Vars = (object, string)
		EVENT_6 Op = 0x1e2 Vars = ()
	GTASK_4 Vars = (object, cvector, bool) Params = 1
		EVENT_6 Op = 0x233 Vars = ()
		EVENT_7 Op = 0x298 Vars = (int)
		EVENT_41 Op = 0x2d3 Vars = (object)
	GTASK_5 Vars = (object, cvector, bool) Params = 1
		EVENT_7 Op = 0x34a Vars = (int)
		EVENT_41 Op = 0x385 Vars = (object)

Events:
EVENT_16 Op = 0x459 Vars = (object, string)
EVENT_41 Op = 0x466 Vars = (object)
EVENT_22 Op = 0x46c Vars = (object, int, float, float)

0x0: @ Hold()
0x1: Pop(0)
0x2: Return(); Pop(0)

0x3: @ StopGroup0()
0x4: Pop(0)
0x5: Return(); Pop(0)

0x6: PushEmpty()
0x7: EventDisable(0)
0x8: PushEmpty(object)
0x9: Stack[-1] = Stack[-2]
0xa: Call 0x27

0xb: Pop(1)
0xc: PushEmpty(object)
0xd: Stack[-1] = Stack[-2]
0xe: Call 0x4b5

0xf: Pop(1)
0x10: EventEnable(0)
0x11: @ Hold()
0x12: Pop(0)
0x13: GOTO 0x11

0x14: Return(); Pop(0)

0x15: PushEmpty(int, int)
0x16: PushEmpty(int, object)
0x17: Stack[-1] = Stack[-5]
0x18: Call 0x4b0

0x19: Stack[-3] = Stack[-2]
0x1a: Pop(2)
0x1b: Push((int) 0)
0x1c: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x1d: IF (Stack[-1] == 0) GOTO 0x22; Pop(1)

0x1e: PushEmpty(object)
0x1f: Stack[-1] = Stack[-4]
0x20: Call 0x4b3

0x21: Pop(1)
0x22: Return(); Pop(2)

0x23: PushEmpty()
0x24: Call 0x4b7

0x25: Pop(0)
0x26: Return(); Pop(0)

0x27: PushEmpty(cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector, cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector)
0x28: Pop(0); Push((bool) Stack[-21] == 0)
0x29: IF (Stack[-1] == 0) GOTO 0x2f; Pop(1)

0x2a: PushEmpty(string)
0x2b: Stack[-1] = "fdie"
0x2c: Call 0x7e

0x2d: Pop(1)
0x2e: GOTO 0x7d

0x2f: @@ GetPosition(Stack[-10])
0x30: Pop(0)
0x31: @ GetPosition(Stack[-9])
0x32: Pop(0)
0x33: @ GetDirection(Stack[-8])
0x34: Pop(0)
0x35: Stack[-7] = Stack[-9] - Stack[-10]; Pop(0);
0x36: Push(CvectorIndex(Stack[-7], 0))
0x37: Push(CvectorIndex(Stack[-9], 0))
0x38: Pop(2); Push(Stack[-2] * Stack[-1]);
0x39: Push(CvectorIndex(Stack[-8], 2))
0x3a: Push(CvectorIndex(Stack[-10], 2))
0x3b: Pop(2); Push(Stack[-2] * Stack[-1]);
0x3c: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3d: Push((int) 0)
0x3e: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x3f: IF (Stack[-1] == 0) GOTO 0x42; Pop(1)

0x40: Stack[-6] = "fdie"
0x41: GOTO 0x43

0x42: Stack[-6] = "bdie"
0x43: @ RemoveRTEnvelope()
0x44: Pop(0)
0x45: @ SetDeathState()
0x46: Pop(0)
0x47: @ Stop()
0x48: Pop(0)
0x49: @ StopAsync()
0x4a: Pop(0)
0x4b: Stack[-5] = Stack[-21]
0x4c: Push("GetScriptProperty")
0x4d: Push((int) 2)
0x4e: Pop(2); Push(IsFuncExist(Stack[-23], Stack[-2], Stack[-1]))
0x4f: IF (Stack[-1] == 0) GOTO 0x5b; Pop(1)

0x50: Push("Owner")
0x51: @@ HasScriptProperty(Stack[-5], Stack[-1])
0x52: Pop(1)
0x53: Push(Stack[-4])
0x54: IF (Stack[-1] == 0) GOTO 0x5b; Pop(1)

0x55: Push("Owner")
0x56: @@ GetScriptProperty(Stack[-6], Stack[-1])
0x57: Pop(1)
0x58: Pop(0); Push((bool) Stack[-5] == 0)
0x59: IF (Stack[-1] == 0) GOTO 0x5b; Pop(1)

0x5a: Stack[-5] = Stack[-21]
0x5b: Push("@GetEyesHeight")
0x5c: Push((int) 1)
0x5d: Pop(2); Push(IsFuncExist(Stack[-7], Stack[-2], Stack[-1]))
0x5e: IF (Stack[-1] == 0) GOTO 0x6a; Pop(1)

0x5f: @@ GetEyesHeight(Stack[-2])
0x60: Pop(0)
0x61: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x62: Push(CvectorIndex(Stack[-1], 1))
0x63: Stack[-1] = Stack[-3]
0x64: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x65: Push("head")
0x66: @ LookAsync(Stack[-22], Stack[-1], Stack[-2])
0x67: Pop(1)
0x68: Stack[-3] = (bool) 1
0x69: GOTO 0x6b

0x6a: Stack[-3] = (bool) 0
0x6b: Push("all")
0x6c: @ PlayAnimation(Stack[-1], Stack[-7])
0x6d: Pop(1)
0x6e: @ WaitForAnimEnd()
0x6f: Pop(0)
0x70: Push(Stack[-3])
0x71: IF (Stack[-1] == 0) GOTO 0x77; Pop(1)

0x72: @ StopAsync()
0x73: Pop(0)
0x74: Push("head")
0x75: @ UnlookAsync(Stack[-1])
0x76: Pop(1)
0x77: Push("all")
0x78: @ LockAnimationEnd(Stack[-1], Stack[-7])
0x79: Pop(1)
0x7a: @ RemoveEnvelope()
0x7b: Pop(0)
0x7c: Stack[-5] = 0
0x7d: Return(); Pop(20)

0x7e: PushEmpty()
0x7f: @ RemoveRTEnvelope()
0x80: Pop(0)
0x81: @ SetDeathState()
0x82: Pop(0)
0x83: @ Stop()
0x84: Pop(0)
0x85: @ StopAsync()
0x86: Pop(0)
0x87: @ StopSecondaryAnimation()
0x88: Pop(0)
0x89: Push("all")
0x8a: @ PlayAnimation(Stack[-1], Stack[-2])
0x8b: Pop(1)
0x8c: @ WaitForAnimEnd()
0x8d: Pop(0)
0x8e: Push("all")
0x8f: @ LockAnimationEnd(Stack[-1], Stack[-2])
0x90: Pop(1)
0x91: @ RemoveEnvelope()
0x92: Pop(0)
0x93: Return(); Pop(0)

0x94: PushEmpty()
0x95: Return(); Pop(0)

0x96: PushEmpty()
0x97: Return(); Pop(0)

0x98: PushEmpty()
0x99: Return(); Pop(0)

0x9a: Push((bool) 1)
0x9b: @ SensePlayerOnly(Stack[-1])
0x9c: Pop(1)
0x9d: PushEmpty()
0x9e: Call 0x4c7

0x9f: Pop(0)
0xa0: PushEmpty()
0xa1: Call 0xa8

0xa2: Pop(0)
0xa3: PushEmpty()
0xa4: Call 0x124

0xa5: Pop(0)
0xa6: GOTO 0xa3

0xa7: Return(); Pop(0)

0xa8: PushEmpty(bool)
0xa9: Call 0x43a

0xaa: Pop(0)
0xab: Pop(1); Push((bool) Stack[-1] == 0)
0xac: IF (Stack[-1] == 0) GOTO 0xb0; Pop(1)

0xad: PushEmpty()
0xae: Call 0x4b7

0xaf: Pop(0)
0xb0: Return(); Pop(0)

0xb1: PushEmpty(int, int)
0xb2: PushEmpty(int, object)
0xb3: Stack[-1] = Stack[-5]
0xb4: Call 0x4b0

0xb5: Stack[-3] = Stack[-2]
0xb6: Pop(2)
0xb7: Push((int) 0)
0xb8: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xb9: IF (Stack[-1] == 0) GOTO 0xc4; Pop(1)

0xba: Push((int) 1)
0xbb: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xbc: IF (Stack[-1] == 0) GOTO 0xc0; Pop(1)

0xbd: PushEmpty()
0xbe: Call 0x164

0xbf: Pop(0)
0xc0: PushEmpty(object)
0xc1: Stack[-1] = Stack[-4]
0xc2: Call 0x4b3

0xc3: Pop(1)
0xc4: Return(); Pop(2)

0xc5: PushEmpty(int, int)
0xc6: PushEmpty(int, object)
0xc7: Stack[-1] = Stack[-5]
0xc8: Call 0x48c

0xc9: Stack[-3] = Stack[-2]
0xca: Pop(2)
0xcb: Push((int) 0)
0xcc: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xcd: IF (Stack[-1] == 0) GOTO 0xd8; Pop(1)

0xce: Push((int) 1)
0xcf: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xd0: IF (Stack[-1] == 0) GOTO 0xd4; Pop(1)

0xd1: PushEmpty()
0xd2: Call 0x164

0xd3: Pop(0)
0xd4: PushEmpty(object)
0xd5: Stack[-1] = Stack[-4]
0xd6: Call 0x496

0xd7: Pop(1)
0xd8: Return(); Pop(2)

0xd9: PushEmpty(int, int)
0xda: PushEmpty(bool, object, object)
0xdb: Stack[-2] = Stack[-7]
0xdc: Stack[-1] = Stack[-6]
0xdd: Call 0x4c8

0xde: Pop(2)
0xdf: IF (Stack[-1] == 0) GOTO 0xf2; Pop(1)

0xe0: PushEmpty(int, object)
0xe1: Stack[-1] = Stack[-6]
0xe2: Call 0x49e

0xe3: Stack[-3] = Stack[-2]
0xe4: Pop(2)
0xe5: Push((int) 0)
0xe6: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xe7: IF (Stack[-1] == 0) GOTO 0xf2; Pop(1)

0xe8: Push((int) 1)
0xe9: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xea: IF (Stack[-1] == 0) GOTO 0xee; Pop(1)

0xeb: PushEmpty()
0xec: Call 0x164

0xed: Pop(0)
0xee: PushEmpty(object)
0xef: Stack[-1] = Stack[-5]
0xf0: Call 0x4a8

0xf1: Pop(1)
0xf2: Return(); Pop(2)

0xf3: PushEmpty(int, int)
0xf4: PushEmpty(int, object)
0xf5: Stack[-1] = Stack[-5]
0xf6: Call 0x4bd

0xf7: Stack[-3] = Stack[-2]
0xf8: Pop(2)
0xf9: Push((int) 0)
0xfa: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xfb: IF (Stack[-1] == 0) GOTO 0x106; Pop(1)

0xfc: Push((int) 1)
0xfd: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xfe: IF (Stack[-1] == 0) GOTO 0x102; Pop(1)

0xff: PushEmpty()
0x100: Call 0x164

0x101: Pop(0)
0x102: PushEmpty(object)
0x103: Stack[-1] = Stack[-4]
0x104: Call 0x4c0

0x105: Pop(1)
0x106: Return(); Pop(2)

0x107: PushEmpty(int, int)
0x108: PushEmpty(int, string, object)
0x109: Stack[-2] = Stack[-6]
0x10a: Stack[-1] = Stack[-7]
0x10b: Call 0x4c2

0x10c: Stack[-4] = Stack[-3]
0x10d: Pop(3)
0x10e: Push((int) 0)
0x10f: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x110: IF (Stack[-1] == 0) GOTO 0x11c; Pop(1)

0x111: Push((int) 1)
0x112: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x113: IF (Stack[-1] == 0) GOTO 0x117; Pop(1)

0x114: PushEmpty()
0x115: Call 0x164

0x116: Pop(0)
0x117: PushEmpty(string, object)
0x118: Stack[-2] = Stack[-5]
0x119: Stack[-1] = Stack[-6]
0x11a: Call 0x4c5

0x11b: Pop(2)
0x11c: Return(); Pop(2)

0x11d: PushEmpty()
0x11e: Call 0x164

0x11f: Pop(0)
0x120: PushEmpty()
0x121: Call 0x4b7

0x122: Pop(0)
0x123: Return(); Pop(0)

0x124: PushEmpty(float, cvector, cvector, float, bool, object, bool, float, cvector, cvector, float, bool, object, bool)
0x125: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x126: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x127: Push((float)0.5)
0x128: @ rand(Stack[-8], Stack[-1])
0x129: Pop(1)
0x12a: @ Sleep(Stack[-7])
0x12b: Pop(0)
0x12c: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x12d: IF (Stack[-1] == 0) GOTO 0x15c; Pop(1)

0x12e: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == 0)
0x12f: IF (Stack[-1] == 0) GOTO 0x140; Pop(1)

0x130: @ GetPosition(Stack[-5])
0x131: Pop(0)
0x132: @ GetCameraFarDistance(Stack[-4])
0x133: Pop(0)
0x134: Push((float)2.5)
0x135: Stack[-5] = Stack[-5] * Stack[-1]; Pop(1);
0x136: @ GetRandomPFPointInCircle(Stack[-6], Stack[-5], Stack[-4], Stack[-3])
0x137: Pop(0)
0x138: Push(Stack[-3])
0x139: IF (Stack[-1] == 0) GOTO 0x13b; Pop(1)

0x13a: GOTO 0x13f

0x13b: Push((int) 1)
0x13c: @ Sleep(Stack[-1])
0x13d: Pop(1)
0x13e: GOTO 0x130

0x13f: GOTO 0x141

0x140: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x141: @ FindShiftedPathTo(Stack[-2], Stack[-6])
0x142: Pop(0)
0x143: Pop(0); Push(( Stack[-2] != 0 )
0x144: IF (Stack[-1] == 0) GOTO 0x157; Pop(1)

0x145: @ RotatePath(Stack[-2], Stack[-1])
0x146: Pop(0)
0x147: Push(Stack[-1])
0x148: IF (Stack[-1] == 0) GOTO 0x156; Pop(1)

0x149: PushEmpty(bool)
0x14a: Call 0x174

0x14b: Pop(0)
0x14c: @ FollowPath(Stack[-3], Stack[-1], Stack[-2])
0x14d: Pop(1)
0x14e: Stack[-2] = 0
0x14f: Push(Stack[-1])
0x150: IF (Stack[-1] == 0) GOTO 0x156; Pop(1)

0x151: PushEmpty()
0x152: Push(-0, 0); TaskCall(3)
0x153: Call 0x1e9

0x154: Pop(-0, 0); TaskReturn
0x155: Pop(0)
0x156: GOTO 0x15a

0x157: Push((int) 1)
0x158: @ Sleep(Stack[-1])
0x159: Pop(1)
0x15a: Stack[-2] = 0
0x15b: GOTO 0x12c

0x15c: Return(); Pop(14)

0x15d: PushEmpty()
0x15e: @ RequestClearPath(Stack[-1])
0x15f: Pop(0)
0x160: Return(); Pop(0)

0x161: @ Stop()
0x162: Pop(0)
0x163: Return(); Pop(0)

0x164: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x165: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x166: @ Stop()
0x167: Pop(0)
0x168: @ StopGroup0()
0x169: Pop(0)
0x16a: Return(); Pop(0)

0x16b: PushEmpty()
0x16c: PushEmpty()
0x16d: Call 0x164

0x16e: Pop(0)
0x16f: PushEmpty(object)
0x170: Stack[-1] = Stack[-2]
0x171: Call 0x466

0x172: Pop(1)
0x173: Return(); Pop(0)

0x174: Stack[-1] = (bool) 0
0x175: Return(); Pop(0)

0x176: PushEmpty(int, int)
0x177: PushEmpty(int, object)
0x178: Stack[-1] = Stack[-5]
0x179: Call 0x4b0

0x17a: Stack[-3] = Stack[-2]
0x17b: Pop(2)
0x17c: Push((int) 0)
0x17d: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x17e: IF (Stack[-1] == 0) GOTO 0x189; Pop(1)

0x17f: Push((int) 1)
0x180: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x181: IF (Stack[-1] == 0) GOTO 0x185; Pop(1)

0x182: PushEmpty()
0x183: Call 0x22e

0x184: Pop(0)
0x185: PushEmpty(object)
0x186: Stack[-1] = Stack[-4]
0x187: Call 0x4b3

0x188: Pop(1)
0x189: Return(); Pop(2)

0x18a: PushEmpty(int, int)
0x18b: PushEmpty(int, object)
0x18c: Stack[-1] = Stack[-5]
0x18d: Call 0x48c

0x18e: Stack[-3] = Stack[-2]
0x18f: Pop(2)
0x190: Push((int) 0)
0x191: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x192: IF (Stack[-1] == 0) GOTO 0x19d; Pop(1)

0x193: Push((int) 1)
0x194: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x195: IF (Stack[-1] == 0) GOTO 0x199; Pop(1)

0x196: PushEmpty()
0x197: Call 0x22e

0x198: Pop(0)
0x199: PushEmpty(object)
0x19a: Stack[-1] = Stack[-4]
0x19b: Call 0x496

0x19c: Pop(1)
0x19d: Return(); Pop(2)

0x19e: PushEmpty(int, int)
0x19f: PushEmpty(bool, object, object)
0x1a0: Stack[-2] = Stack[-7]
0x1a1: Stack[-1] = Stack[-6]
0x1a2: Call 0x4c8

0x1a3: Pop(2)
0x1a4: IF (Stack[-1] == 0) GOTO 0x1b7; Pop(1)

0x1a5: PushEmpty(int, object)
0x1a6: Stack[-1] = Stack[-6]
0x1a7: Call 0x49e

0x1a8: Stack[-3] = Stack[-2]
0x1a9: Pop(2)
0x1aa: Push((int) 0)
0x1ab: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x1ac: IF (Stack[-1] == 0) GOTO 0x1b7; Pop(1)

0x1ad: Push((int) 1)
0x1ae: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x1af: IF (Stack[-1] == 0) GOTO 0x1b3; Pop(1)

0x1b0: PushEmpty()
0x1b1: Call 0x22e

0x1b2: Pop(0)
0x1b3: PushEmpty(object)
0x1b4: Stack[-1] = Stack[-5]
0x1b5: Call 0x4a8

0x1b6: Pop(1)
0x1b7: Return(); Pop(2)

0x1b8: PushEmpty(int, int)
0x1b9: PushEmpty(int, object)
0x1ba: Stack[-1] = Stack[-5]
0x1bb: Call 0x4bd

0x1bc: Stack[-3] = Stack[-2]
0x1bd: Pop(2)
0x1be: Push((int) 0)
0x1bf: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x1c0: IF (Stack[-1] == 0) GOTO 0x1cb; Pop(1)

0x1c1: Push((int) 1)
0x1c2: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x1c3: IF (Stack[-1] == 0) GOTO 0x1c7; Pop(1)

0x1c4: PushEmpty()
0x1c5: Call 0x22e

0x1c6: Pop(0)
0x1c7: PushEmpty(object)
0x1c8: Stack[-1] = Stack[-4]
0x1c9: Call 0x4c0

0x1ca: Pop(1)
0x1cb: Return(); Pop(2)

0x1cc: PushEmpty(int, int)
0x1cd: PushEmpty(int, string, object)
0x1ce: Stack[-2] = Stack[-6]
0x1cf: Stack[-1] = Stack[-7]
0x1d0: Call 0x4c2

0x1d1: Stack[-4] = Stack[-3]
0x1d2: Pop(3)
0x1d3: Push((int) 0)
0x1d4: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x1d5: IF (Stack[-1] == 0) GOTO 0x1e1; Pop(1)

0x1d6: Push((int) 1)
0x1d7: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x1d8: IF (Stack[-1] == 0) GOTO 0x1dc; Pop(1)

0x1d9: PushEmpty()
0x1da: Call 0x22e

0x1db: Pop(0)
0x1dc: PushEmpty(string, object)
0x1dd: Stack[-2] = Stack[-5]
0x1de: Stack[-1] = Stack[-6]
0x1df: Call 0x4c5

0x1e0: Pop(2)
0x1e1: Return(); Pop(2)

0x1e2: PushEmpty()
0x1e3: Call 0x22e

0x1e4: Pop(0)
0x1e5: PushEmpty()
0x1e6: Call 0x4b7

0x1e7: Pop(0)
0x1e8: Return(); Pop(0)

0x1e9: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x1ea: @ WaitForAnimEnd()
0x1eb: Pop(0)
0x1ec: PushEmpty(bool)
0x1ed: Call 0x43a

0x1ee: Pop(0)
0x1ef: Pop(1); Push((bool) Stack[-1] == 0)
0x1f0: IF (Stack[-1] == 0) GOTO 0x1f2; Pop(1)

0x1f1: Return(); Pop(14)

0x1f2: PushEmpty(int)
0x1f3: Call 0x47b

0x1f4: Stack[-8] = Stack[-1]
0x1f5: Pop(1)
0x1f6: Stack[-6] = (int) 0
0x1f7: PushEmpty(bool)
0x1f8: Stack[-1] = (bool) 0
0x1f9: Push((int) 5)
0x1fa: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x1fb: IF (Stack[-1] == 0) GOTO 0x201; Pop(1)

0x1fc: PushEmpty(bool)
0x1fd: Call 0x43a

0x1fe: Pop(0)
0x1ff: IF (Stack[-1] == 0) GOTO 0x201; Pop(1)

0x200: Stack[-1] = (bool) 1
0x201: IF (Stack[-1] == 0) GOTO 0x22d; Pop(1)

0x202: Push((int) 3)
0x203: @ irand(Stack[-6], Stack[-1])
0x204: Pop(1)
0x205: Push((int) 0)
0x206: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x207: IF (Stack[-1] == 0) GOTO 0x219; Pop(1)

0x208: Push(Stack[-7])
0x209: IF (Stack[-1] == 0) GOTO 0x218; Pop(1)

0x20a: @ irand(Stack[-4], Stack[-7])
0x20b: Pop(0)
0x20c: Push("all")
0x20d: PushEmpty(string, int)
0x20e: Stack[-1] = Stack[-7]
0x20f: Call 0x474

0x210: Pop(1)
0x211: @ PlayAnimation(Stack[-2], Stack[-1])
0x212: Pop(2)
0x213: @ WaitForAnimEnd(Stack[-3])
0x214: Pop(0)
0x215: Pop(0); Push((bool) Stack[-3] == 0)
0x216: IF (Stack[-1] == 0) GOTO 0x218; Pop(1)

0x217: GOTO 0x22d

0x218: GOTO 0x22a

0x219: Push((int) 1)
0x21a: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x21b: IF (Stack[-1] == 0) GOTO 0x227; Pop(1)

0x21c: Push((int) 4)
0x21d: @ rand(Stack[-3], Stack[-1])
0x21e: Pop(1)
0x21f: Push((int) 1)
0x220: Pop(1); Push(Stack[-3] + Stack[-1]);
0x221: @ Sleep(Stack[-1], Stack[-2])
0x222: Pop(1)
0x223: Pop(0); Push((bool) Stack[-1] == 0)
0x224: IF (Stack[-1] == 0) GOTO 0x226; Pop(1)

0x225: GOTO 0x22d

0x226: GOTO 0x22a

0x227: Push(Stack[-6])
0x228: IF (Stack[-1] == 0) GOTO 0x22a; Pop(1)

0x229: GOTO 0x22d

0x22a: Push((int) 1)
0x22b: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x22c: GOTO 0x1f7

0x22d: Return(); Pop(14)

0x22e: @ StopAnimation()
0x22f: Pop(0)
0x230: @ StopGroup0()
0x231: Pop(0)
0x232: Return(); Pop(0)

0x233: PushEmpty()
0x234: Call 0x2cc

0x235: Pop(0)
0x236: PushEmpty()
0x237: Call 0x4b7

0x238: Pop(0)
0x239: Return(); Pop(0)

0x23a: PushEmpty(cvector, cvector, cvector, cvector, cvector, float, cvector, cvector, cvector, cvector, cvector, float)
0x23b: @ GetPosition(Stack[-6])
0x23c: Pop(0)
0x23d: @@ GetPosition(Stack[-5])
0x23e: Pop(0)
0x23f: @ GetDirection(Stack[-4])
0x240: Pop(0)
0x241: PushEmpty(cvector, cvector)
0x242: PushEmpty(cvector, cvector)
0x243: Stack[-1] = Stack[-10] - Stack[-9]; Pop(0);
0x244: Call 0x43f

0x245: Pop(1)
0x246: Push((float)0.75)
0x247: Pop(1); Push(Stack[-8] * Stack[-1]);
0x248: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x249: Call 0x43f

0x24a: Stack[-5] = Stack[-2]
0x24b: Pop(2)
0x24c: Push((int) 32)
0x24d: Push((float)7000.0)
0x24e: @ FindLongestDir(Stack[-4], Stack[-3], Stack[-5], Stack[-15], Stack[-2], Stack[-1])
0x24f: Pop(2)
0x250: Push((int) 100)
0x251: Stack[-2] = Stack[-2] - Stack[-1]; Pop(1);
0x252: Push((int) 0)
0x253: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x254: IF (Stack[-1] == 0) GOTO 0x256; Pop(1)

0x255: Stack[-1] = (int) 0
0x256: Stack[-14] = Stack[-2] * Stack[-1]; Pop(0);
0x257: Return(); Pop(12)

0x258: PushEmpty(cvector, float, bool, cvector, float, cvector, float, bool, cvector, float)
0x259: Stack[0 + Tasks[-1].StackPointer] = Stack[-11]
0x25a: PushEmpty(cvector, float)
0x25b: Stack[-1] = (float) 1.74533
0x25c: Call 0x23a

0x25d: Stack[-7] = Stack[-2]
0x25e: Pop(2)
0x25f: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x260: Push((float)10000.0)
0x261: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x262: IF (Stack[-1] == 0) GOTO 0x26c; Pop(1)

0x263: Push("Can't retreat, distance: ")
0x264: Pop(0); Push(Sqrt(Stack[-5]))
0x265: Pop(2); Push(Stack[-2] + Stack[-1]);
0x266: @ Trace(Stack[-1])
0x267: Pop(1)
0x268: Push((float)0.5)
0x269: @ Sleep(Stack[-1])
0x26a: Pop(1)
0x26b: Return(); Pop(10)

0x26c: Push(CvectorIndex(Stack[-5], 0))
0x26d: Push(CvectorIndex(Stack[-6], 2))
0x26e: @ Rotate(Stack[-2], Stack[-1])
0x26f: Pop(2)
0x270: PushEmpty(cvector)
0x271: Call 0x39e

0x272: Pop(0)
0x273: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-6]; Pop(1);
0x274: Push((int) 120)
0x275: Push((float)0.5)
0x276: @ SetTimer(Stack[-2], Stack[-1])
0x277: Pop(2)
0x278: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x279: Push((int) 1)
0x27a: @ MovePoint(Stack[-1], Stack[-1], Stack[-4])
0x27b: Pop(1)
0x27c: Push(Stack[-3])
0x27d: IF (Stack[-1] == 0) GOTO 0x295; Pop(1)

0x27e: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x27f: IF (Stack[-1] == 0) GOTO 0x282; Pop(1)

0x280: GOTO 0x297

0x281: GOTO 0x295

0x282: PushEmpty(cvector, float)
0x283: Stack[-1] = (float) 2.61799
0x284: Call 0x23a

0x285: Stack[-4] = Stack[-2]
0x286: Pop(2)
0x287: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x288: Push((float)10000.0)
0x289: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x28a: IF (Stack[-1] == 0) GOTO 0x294; Pop(1)

0x28b: PushEmpty(cvector)
0x28c: Call 0x39e

0x28d: Pop(0)
0x28e: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x28f: Push((int) 120)
0x290: Push((float)0.5)
0x291: @ SetTimer(Stack[-2], Stack[-1])
0x292: Pop(2)
0x293: GOTO 0x295

0x294: GOTO 0x297

0x295: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x296: IF (Stack[-1] == 0) GOTO 0x279; Pop(1)

0x297: Return(); Pop(10)

0x298: PushEmpty(cvector, float, cvector, float, cvector, float, cvector, float)
0x299: Push((int) 120)
0x29a: Pop(1); Push((bool) Stack[-10] != Stack[-1])
0x29b: IF (Stack[-1] == 0) GOTO 0x29d; Pop(1)

0x29c: Return(); Pop(8)

0x29d: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x29e: IF (Stack[-1] == 0) GOTO 0x2a6; Pop(1)

0x29f: @ Stop()
0x2a0: Pop(0)
0x2a1: Push((int) 1)
0x2a2: @ KillTimer(Stack[-1])
0x2a3: Pop(1)
0x2a4: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x2a5: GOTO 0x2cb

0x2a6: @ GetDirection(Stack[-4])
0x2a7: Pop(0)
0x2a8: Push((float)7000.0)
0x2a9: @ FindDirLength(Stack[-4], Stack[-5], Stack[-1])
0x2aa: Pop(1)
0x2ab: PushEmpty(cvector, float)
0x2ac: Stack[-1] = (float) 1.74533
0x2ad: Call 0x23a

0x2ae: Stack[-4] = Stack[-2]
0x2af: Pop(2)
0x2b0: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x2b1: PushEmpty(bool)
0x2b2: Stack[-1] = (bool) 0
0x2b3: Push((float)10000.0)
0x2b4: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x2b5: IF (Stack[-1] == 0) GOTO 0x2c4; Pop(1)

0x2b6: PushEmpty(bool)
0x2b7: Stack[-1] = (bool) 1
0x2b8: Pop(0); Push(Stack[-5] * Stack[-5]);
0x2b9: Push((float)2.25)
0x2ba: Pop(2); Push(Stack[-2] * Stack[-1]);
0x2bb: Pop(1); Push((bool) Stack[-4] >= Stack[-1])
0x2bc: IF (Stack[-1] == 0) GOTO 0x2c2; Pop(1)

0x2bd: PushEmpty(bool)
0x2be: Call 0x2dc

0x2bf: Pop(0)
0x2c0: IF (Stack[-1] == 0) GOTO 0x2c2; Pop(1)

0x2c1: Stack[-1] = (bool) 0
0x2c2: IF (Stack[-1] == 0) GOTO 0x2c4; Pop(1)

0x2c3: Stack[-1] = (bool) 1
0x2c4: IF (Stack[-1] == 0) GOTO 0x2cb; Pop(1)

0x2c5: @ Stop()
0x2c6: Pop(0)
0x2c7: PushEmpty(cvector)
0x2c8: Call 0x39e

0x2c9: Pop(0)
0x2ca: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x2cb: Return(); Pop(8)

0x2cc: @ Stop()
0x2cd: Pop(0)
0x2ce: Push((int) 120)
0x2cf: @ KillTimer(Stack[-1])
0x2d0: Pop(1)
0x2d1: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x2d2: Return(); Pop(0)

0x2d3: PushEmpty()
0x2d4: PushEmpty()
0x2d5: Call 0x2cc

0x2d6: Pop(0)
0x2d7: PushEmpty(object)
0x2d8: Stack[-1] = Stack[-2]
0x2d9: Call 0x466

0x2da: Pop(1)
0x2db: Return(); Pop(0)

0x2dc: PushEmpty(cvector, cvector, cvector, cvector)
0x2dd: @ GetDirection(Stack[-2])
0x2de: Pop(0)
0x2df: PushEmpty(cvector, object)
0x2e0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2e1: Call 0x3a3

0x2e2: Stack[-3] = Stack[-2]
0x2e3: Pop(2)
0x2e4: PushEmpty(float, cvector, cvector)
0x2e5: Stack[-2] = Stack[-5]
0x2e6: Stack[-1] = Stack[-4]
0x2e7: Call 0x449

0x2e8: Pop(2)
0x2e9: Push((float)-0.34202)
0x2ea: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0x2eb: Return(); Pop(4)

0x2ec: PushEmpty(cvector, cvector, cvector, cvector, cvector, float, cvector, cvector, cvector, cvector, cvector, float)
0x2ed: @ GetPosition(Stack[-6])
0x2ee: Pop(0)
0x2ef: @@ GetPosition(Stack[-5])
0x2f0: Pop(0)
0x2f1: @ GetDirection(Stack[-4])
0x2f2: Pop(0)
0x2f3: PushEmpty(cvector, cvector)
0x2f4: PushEmpty(cvector, cvector)
0x2f5: Stack[-1] = Stack[-10] - Stack[-9]; Pop(0);
0x2f6: Call 0x43f

0x2f7: Pop(1)
0x2f8: Push((float)0.75)
0x2f9: Pop(1); Push(Stack[-8] * Stack[-1]);
0x2fa: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x2fb: Call 0x43f

0x2fc: Stack[-5] = Stack[-2]
0x2fd: Pop(2)
0x2fe: Push((int) 32)
0x2ff: Push((float)7000.0)
0x300: @ FindLongestDir(Stack[-4], Stack[-3], Stack[-5], Stack[-15], Stack[-2], Stack[-1])
0x301: Pop(2)
0x302: Push((int) 100)
0x303: Stack[-2] = Stack[-2] - Stack[-1]; Pop(1);
0x304: Push((int) 0)
0x305: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x306: IF (Stack[-1] == 0) GOTO 0x308; Pop(1)

0x307: Stack[-1] = (int) 0
0x308: Stack[-14] = Stack[-2] * Stack[-1]; Pop(0);
0x309: Return(); Pop(12)

0x30a: PushEmpty(cvector, float, bool, cvector, float, cvector, float, bool, cvector, float)
0x30b: Stack[0 + Tasks[-1].StackPointer] = Stack[-11]
0x30c: PushEmpty(cvector, float)
0x30d: Stack[-1] = (float) 1.74533
0x30e: Call 0x2ec

0x30f: Stack[-7] = Stack[-2]
0x310: Pop(2)
0x311: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x312: Push((float)10000.0)
0x313: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x314: IF (Stack[-1] == 0) GOTO 0x31e; Pop(1)

0x315: Push("Can't retreat, distance: ")
0x316: Pop(0); Push(Sqrt(Stack[-5]))
0x317: Pop(2); Push(Stack[-2] + Stack[-1]);
0x318: @ Trace(Stack[-1])
0x319: Pop(1)
0x31a: Push((float)0.5)
0x31b: @ Sleep(Stack[-1])
0x31c: Pop(1)
0x31d: Return(); Pop(10)

0x31e: Push(CvectorIndex(Stack[-5], 0))
0x31f: Push(CvectorIndex(Stack[-6], 2))
0x320: @ Rotate(Stack[-2], Stack[-1])
0x321: Pop(2)
0x322: PushEmpty(cvector)
0x323: Call 0x39e

0x324: Pop(0)
0x325: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-6]; Pop(1);
0x326: Push((int) 120)
0x327: Push((float)0.5)
0x328: @ SetTimer(Stack[-2], Stack[-1])
0x329: Pop(2)
0x32a: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x32b: Push((int) 1)
0x32c: @ MovePoint(Stack[-1], Stack[-1], Stack[-4])
0x32d: Pop(1)
0x32e: Push(Stack[-3])
0x32f: IF (Stack[-1] == 0) GOTO 0x347; Pop(1)

0x330: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x331: IF (Stack[-1] == 0) GOTO 0x334; Pop(1)

0x332: GOTO 0x349

0x333: GOTO 0x347

0x334: PushEmpty(cvector, float)
0x335: Stack[-1] = (float) 2.61799
0x336: Call 0x2ec

0x337: Stack[-4] = Stack[-2]
0x338: Pop(2)
0x339: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x33a: Push((float)10000.0)
0x33b: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x33c: IF (Stack[-1] == 0) GOTO 0x346; Pop(1)

0x33d: PushEmpty(cvector)
0x33e: Call 0x39e

0x33f: Pop(0)
0x340: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x341: Push((int) 120)
0x342: Push((float)0.5)
0x343: @ SetTimer(Stack[-2], Stack[-1])
0x344: Pop(2)
0x345: GOTO 0x347

0x346: GOTO 0x349

0x347: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x348: IF (Stack[-1] == 0) GOTO 0x32b; Pop(1)

0x349: Return(); Pop(10)

0x34a: PushEmpty(cvector, float, cvector, float, cvector, float, cvector, float)
0x34b: Push((int) 120)
0x34c: Pop(1); Push((bool) Stack[-10] != Stack[-1])
0x34d: IF (Stack[-1] == 0) GOTO 0x34f; Pop(1)

0x34e: Return(); Pop(8)

0x34f: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x350: IF (Stack[-1] == 0) GOTO 0x358; Pop(1)

0x351: @ Stop()
0x352: Pop(0)
0x353: Push((int) 1)
0x354: @ KillTimer(Stack[-1])
0x355: Pop(1)
0x356: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x357: GOTO 0x37d

0x358: @ GetDirection(Stack[-4])
0x359: Pop(0)
0x35a: Push((float)7000.0)
0x35b: @ FindDirLength(Stack[-4], Stack[-5], Stack[-1])
0x35c: Pop(1)
0x35d: PushEmpty(cvector, float)
0x35e: Stack[-1] = (float) 1.74533
0x35f: Call 0x2ec

0x360: Stack[-4] = Stack[-2]
0x361: Pop(2)
0x362: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x363: PushEmpty(bool)
0x364: Stack[-1] = (bool) 0
0x365: Push((float)10000.0)
0x366: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x367: IF (Stack[-1] == 0) GOTO 0x376; Pop(1)

0x368: PushEmpty(bool)
0x369: Stack[-1] = (bool) 1
0x36a: Pop(0); Push(Stack[-5] * Stack[-5]);
0x36b: Push((float)2.25)
0x36c: Pop(2); Push(Stack[-2] * Stack[-1]);
0x36d: Pop(1); Push((bool) Stack[-4] >= Stack[-1])
0x36e: IF (Stack[-1] == 0) GOTO 0x374; Pop(1)

0x36f: PushEmpty(bool)
0x370: Call 0x38e

0x371: Pop(0)
0x372: IF (Stack[-1] == 0) GOTO 0x374; Pop(1)

0x373: Stack[-1] = (bool) 0
0x374: IF (Stack[-1] == 0) GOTO 0x376; Pop(1)

0x375: Stack[-1] = (bool) 1
0x376: IF (Stack[-1] == 0) GOTO 0x37d; Pop(1)

0x377: @ Stop()
0x378: Pop(0)
0x379: PushEmpty(cvector)
0x37a: Call 0x39e

0x37b: Pop(0)
0x37c: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x37d: Return(); Pop(8)

0x37e: @ Stop()
0x37f: Pop(0)
0x380: Push((int) 120)
0x381: @ KillTimer(Stack[-1])
0x382: Pop(1)
0x383: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x384: Return(); Pop(0)

0x385: PushEmpty()
0x386: PushEmpty()
0x387: Call 0x37e

0x388: Pop(0)
0x389: PushEmpty(object)
0x38a: Stack[-1] = Stack[-2]
0x38b: Call 0x466

0x38c: Pop(1)
0x38d: Return(); Pop(0)

0x38e: PushEmpty(cvector, cvector, cvector, cvector)
0x38f: @ GetDirection(Stack[-2])
0x390: Pop(0)
0x391: PushEmpty(cvector, object)
0x392: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x393: Call 0x3a3

0x394: Stack[-3] = Stack[-2]
0x395: Pop(2)
0x396: PushEmpty(float, cvector, cvector)
0x397: Stack[-2] = Stack[-5]
0x398: Stack[-1] = Stack[-4]
0x399: Call 0x449

0x39a: Pop(2)
0x39b: Push((float)-0.34202)
0x39c: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0x39d: Return(); Pop(4)

0x39e: PushEmpty(cvector, cvector)
0x39f: @ GetPosition(Stack[-1])
0x3a0: Pop(0)
0x3a1: Stack[-3] = Stack[-1]
0x3a2: Return(); Pop(2)

0x3a3: PushEmpty(cvector, cvector, cvector, cvector)
0x3a4: @ GetPosition(Stack[-2])
0x3a5: Pop(0)
0x3a6: @@ GetPosition(Stack[-1])
0x3a7: Pop(0)
0x3a8: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x3a9: Return(); Pop(4)

0x3aa: PushEmpty(bool, bool)
0x3ab: Push("HasProperty")
0x3ac: Push((int) 2)
0x3ad: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x3ae: Pop(1); Push((bool) Stack[-1] == 0)
0x3af: IF (Stack[-1] == 0) GOTO 0x3b2; Pop(1)

0x3b0: Stack[-5] = (bool) 0
0x3b1: Return(); Pop(2)

0x3b2: @@ HasProperty(Stack[-3], Stack[-1])
0x3b3: Pop(0)
0x3b4: Stack[-5] = Stack[-1]
0x3b5: Return(); Pop(2)

0x3b6: PushEmpty(bool, bool)
0x3b7: @@ IsDead(Stack[-1])
0x3b8: Pop(0)
0x3b9: Stack[-4] = Stack[-1]
0x3ba: Return(); Pop(2)

0x3bb: PushEmpty(object, object, object, object)
0x3bc: Pop(0); Push((bool) Stack[-5] == 0)
0x3bd: IF (Stack[-1] == 0) GOTO 0x3c0; Pop(1)

0x3be: Stack[-6] = (bool) 0
0x3bf: Return(); Pop(4)

0x3c0: PushEmpty(bool)
0x3c1: Stack[-1] = (bool) 0
0x3c2: Push("IsDead")
0x3c3: Push((int) 1)
0x3c4: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x3c5: IF (Stack[-1] == 0) GOTO 0x3cc; Pop(1)

0x3c6: PushEmpty(bool, object)
0x3c7: Stack[-1] = Stack[-8]
0x3c8: Call 0x3b6

0x3c9: Pop(1)
0x3ca: IF (Stack[-1] == 0) GOTO 0x3cc; Pop(1)

0x3cb: Stack[-1] = (bool) 1
0x3cc: IF (Stack[-1] == 0) GOTO 0x3cf; Pop(1)

0x3cd: Stack[-6] = (bool) 0
0x3ce: Return(); Pop(4)

0x3cf: @ GetScene(Stack[-2])
0x3d0: Pop(0)
0x3d1: Pop(0); Push((bool) Stack[-2] == 0)
0x3d2: IF (Stack[-1] == 0) GOTO 0x3d5; Pop(1)

0x3d3: Stack[-6] = (bool) 0
0x3d4: Return(); Pop(4)

0x3d5: @@ GetScene(Stack[-1])
0x3d6: Pop(0)
0x3d7: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x3d8: IF (Stack[-1] == 0) GOTO 0x3db; Pop(1)

0x3d9: Stack[-6] = (bool) 0
0x3da: Return(); Pop(4)

0x3db: Stack[-6] = (bool) 1
0x3dc: Return(); Pop(4)

0x3dd: Stack[-1] = 0
0x3de: Stack[-2] = 0
0x3df: PushEmpty(int, int)
0x3e0: PushEmpty(bool, object)
0x3e1: Stack[-1] = Stack[-5]
0x3e2: Call 0x3bb

0x3e3: Pop(1)
0x3e4: Pop(1); Push((bool) Stack[-1] == 0)
0x3e5: IF (Stack[-1] == 0) GOTO 0x3e8; Pop(1)

0x3e6: Stack[-4] = (bool) 0
0x3e7: Return(); Pop(2)

0x3e8: PushEmpty(bool, object, string)
0x3e9: Stack[-2] = Stack[-6]
0x3ea: Stack[-1] = "noaccess"
0x3eb: Call 0x3aa

0x3ec: Pop(2)
0x3ed: Pop(1); Push((bool) Stack[-1] == 0)
0x3ee: IF (Stack[-1] == 0) GOTO 0x3f1; Pop(1)

0x3ef: Stack[-4] = (bool) 1
0x3f0: Return(); Pop(2)

0x3f1: Push("noaccess")
0x3f2: @@ GetProperty(Stack[-1], Stack[-2])
0x3f3: Pop(1)
0x3f4: Push((int) 0)
0x3f5: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x3f6: Return(); Pop(2)

0x3f7: PushEmpty(object, object, cvector, float, int, cvector, cvector, cvector, cvector, string, object, object, cvector, float, int, cvector, cvector, cvector, cvector, string)
0x3f8: PushEmpty(bool)
0x3f9: Stack[-1] = (bool) 0
0x3fa: Push((int) 4)
0x3fb: Pop(1); Push((bool) Stack[-24] != Stack[-1])
0x3fc: IF (Stack[-1] == 0) GOTO 0x401; Pop(1)

0x3fd: Push((int) 5)
0x3fe: Pop(1); Push((bool) Stack[-24] != Stack[-1])
0x3ff: IF (Stack[-1] == 0) GOTO 0x401; Pop(1)

0x400: Stack[-1] = (bool) 1
0x401: IF (Stack[-1] == 0) GOTO 0x414; Pop(1)

0x402: @ GetScene(Stack[-10])
0x403: Pop(0)
0x404: @ GetPosition(Stack[-8])
0x405: Pop(0)
0x406: @ GetEyesHeight(Stack[-7])
0x407: Pop(0)
0x408: Push(CvectorIndex(Stack[-8], 1))
0x409: Push((int) 2)
0x40a: Pop(1); Push(Stack[-9] / Stack[-1]);
0x40b: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x40c: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x40d: Push("scripted")
0x40e: Push(CVector(0.0, 0.0, 1.0))
0x40f: Push("blood.xml")
0x410: @ AddActorByType(Stack[-12], Stack[-3], Stack[-13], Stack[-11], Stack[-2], Stack[-1])
0x411: Pop(3)
0x412: Stack[-9] = 0
0x413: Stack[-10] = 0
0x414: Pop(0); Push((bool) Stack[-23] == 0)
0x415: IF (Stack[-1] == 0) GOTO 0x417; Pop(1)

0x416: Return(); Pop(20)

0x417: @ GetSecondaryAnimationType(Stack[-6])
0x418: Pop(0)
0x419: Push((int) 0)
0x41a: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x41b: IF (Stack[-1] == 0) GOTO 0x41d; Pop(1)

0x41c: Return(); Pop(20)

0x41d: @@ GetPosition(Stack[-5])
0x41e: Pop(0)
0x41f: @ GetPosition(Stack[-4])
0x420: Pop(0)
0x421: @ GetDirection(Stack[-3])
0x422: Pop(0)
0x423: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0x424: Push(CvectorIndex(Stack[-2], 0))
0x425: Push(CvectorIndex(Stack[-4], 0))
0x426: Pop(2); Push(Stack[-2] * Stack[-1]);
0x427: Push(CvectorIndex(Stack[-3], 2))
0x428: Push(CvectorIndex(Stack[-5], 2))
0x429: Pop(2); Push(Stack[-2] * Stack[-1]);
0x42a: Pop(2); Push(Stack[-2] + Stack[-1]);
0x42b: Push((int) 0)
0x42c: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x42d: IF (Stack[-1] == 0) GOTO 0x430; Pop(1)

0x42e: Stack[-1] = "fhit"
0x42f: GOTO 0x431

0x430: Stack[-1] = "bhit"
0x431: Push("hit_react")
0x432: Push("1")
0x433: Pop(1); Push(Stack[-3] + Stack[-1]);
0x434: Push("2")
0x435: Pop(1); Push(Stack[-4] + Stack[-1]);
0x436: Push((int) -10)
0x437: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x438: Pop(4)
0x439: Return(); Pop(20)

0x43a: PushEmpty(bool, bool)
0x43b: @ IsLoaded(Stack[-1])
0x43c: Pop(0)
0x43d: Stack[-3] = Stack[-1]
0x43e: Return(); Pop(2)

0x43f: PushEmpty(float, float)
0x440: Pop(0); Push(Stack[-3] | Stack[-3]);
0x441: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x442: Push((float)0.0)
0x443: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x444: IF (Stack[-1] == 0) GOTO 0x447; Pop(1)

0x445: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x446: Return(); Pop(2)

0x447: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x448: Return(); Pop(2)

0x449: PushEmpty()
0x44a: Pop(0); Push(Stack[-2] | Stack[-1]);
0x44b: Pop(0); Push(Stack[-3] | Stack[-3]);
0x44c: Pop(0); Push(Stack[-3] | Stack[-3]);
0x44d: Pop(2); Push(Stack[-2] * Stack[-1]);
0x44e: Pop(1); Push(Sqrt(Stack[-1]))
0x44f: Stack[-5] = Stack[-2] / Stack[-1]; Pop(2);
0x450: Return(); Pop(0)

0x451: PushEmpty()
0x452: PushEmpty(object)
0x453: Stack[-1] = Stack[-2]
0x454: Push(-1, 0); TaskCall(1)
0x455: Call 0x6

0x456: Pop(-1, 0); TaskReturn
0x457: Pop(1)
0x458: Return(); Pop(0)

0x459: PushEmpty(float, float)
0x45a: Push("health")
0x45b: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x45c: IF (Stack[-1] == 0) GOTO 0x465; Pop(1)

0x45d: Push("health")
0x45e: @ GetProperty(Stack[-1], Stack[-2])
0x45f: Pop(1)
0x460: Push((int) 0)
0x461: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x462: IF (Stack[-1] == 0) GOTO 0x465; Pop(1)

0x463: @ SignalDeath(Stack[-4])
0x464: Pop(0)
0x465: Return(); Pop(2)

0x466: PushEmpty()
0x467: PushEmpty(object)
0x468: Stack[-1] = Stack[-2]
0x469: Call 0x451

0x46a: Pop(1)
0x46b: Return(); Pop(0)

0x46c: PushEmpty()
0x46d: PushEmpty(object, int, float)
0x46e: Stack[-3] = Stack[-7]
0x46f: Stack[-2] = Stack[-6]
0x470: Stack[-1] = Stack[-5]
0x471: Call 0x3f7

0x472: Pop(3)
0x473: Return(); Pop(0)

0x474: PushEmpty(string, string)
0x475: Stack[-1] = "idle"
0x476: Push(Stack[-3])
0x477: IF (Stack[-1] == 0) GOTO 0x479; Pop(1)

0x478: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x479: Stack[-4] = Stack[-1]
0x47a: Return(); Pop(2)

0x47b: PushEmpty(int, bool, int, bool)
0x47c: Stack[-2] = (int) 0
0x47d: Push("all")
0x47e: PushEmpty(string, int)
0x47f: Stack[-1] = Stack[-5]
0x480: Call 0x474

0x481: Pop(1)
0x482: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x483: Pop(2)
0x484: Pop(0); Push((bool) Stack[-1] == 0)
0x485: IF (Stack[-1] == 0) GOTO 0x487; Pop(1)

0x486: GOTO 0x48a

0x487: Push((int) 1)
0x488: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x489: GOTO 0x47d

0x48a: Stack[-5] = Stack[-2]
0x48b: Return(); Pop(4)

0x48c: PushEmpty()
0x48d: PushEmpty(bool, object)
0x48e: Stack[-1] = Stack[-3]
0x48f: Call 0x3df

0x490: Pop(1)
0x491: IF (Stack[-1] == 0) GOTO 0x494; Pop(1)

0x492: Stack[-2] = (int) 2
0x493: GOTO 0x495

0x494: Stack[-2] = (int) 0
0x495: Return(); Pop(0)

0x496: PushEmpty()
0x497: PushEmpty(object)
0x498: Stack[-1] = Stack[-2]
0x499: Push(-1, 3); TaskCall(4)
0x49a: Call 0x258

0x49b: Pop(-1, 3); TaskReturn
0x49c: Pop(1)
0x49d: Return(); Pop(0)

0x49e: PushEmpty()
0x49f: PushEmpty(bool, object)
0x4a0: Stack[-1] = Stack[-3]
0x4a1: Call 0x3df

0x4a2: Pop(1)
0x4a3: IF (Stack[-1] == 0) GOTO 0x4a6; Pop(1)

0x4a4: Stack[-2] = (int) 2
0x4a5: GOTO 0x4a7

0x4a6: Stack[-2] = (int) 0
0x4a7: Return(); Pop(0)

0x4a8: PushEmpty()
0x4a9: PushEmpty(object)
0x4aa: Stack[-1] = Stack[-2]
0x4ab: Push(-1, 3); TaskCall(5)
0x4ac: Call 0x30a

0x4ad: Pop(-1, 3); TaskReturn
0x4ae: Pop(1)
0x4af: Return(); Pop(0)

0x4b0: PushEmpty()
0x4b1: Stack[-2] = (int) 0
0x4b2: Return(); Pop(0)

0x4b3: PushEmpty()
0x4b4: Return(); Pop(0)

0x4b5: PushEmpty()
0x4b6: Return(); Pop(0)

0x4b7: PushEmpty()
0x4b8: Push(-0, 0); TaskCall(0)
0x4b9: Call 0x0

0x4ba: Pop(-0, 0); TaskReturn
0x4bb: Pop(0)
0x4bc: Return(); Pop(0)

0x4bd: PushEmpty()
0x4be: Stack[-2] = (int) 0
0x4bf: Return(); Pop(0)

0x4c0: PushEmpty()
0x4c1: Return(); Pop(0)

0x4c2: PushEmpty()
0x4c3: Stack[-3] = (int) 0
0x4c4: Return(); Pop(0)

0x4c5: PushEmpty()
0x4c6: Return(); Pop(0)

0x4c7: Return(); Pop(0)

0x4c8: PushEmpty()
0x4c9: Stack[-3] = (bool) 1
0x4ca: Return(); Pop(0)

