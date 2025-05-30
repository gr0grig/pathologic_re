GlobalVarCount = 1
	G_VAR_0 int Region

Strings:
	TFogAttack
	GetPFPosition
	Watching
	Leaving
	Attacking
	breath
	attack
	fog hunter inited
	fog hunter following
	GetPosition
	walk
	run
	fog hunter idling
	player
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
	add
	GetCurrentRegion
	GetCurrentRegion

Import:
	Trace (1 args)
	FogLinear (2 args)
	GetPosition (1 args)
	MovePoint (2 args)
	Sleep (1 args)
	KillTimer (1 args)
	SetTimer (2 args)
	RemoveActor (1 args)
	GetHeight (1 args)
	PlayGlobalSound (2 args)
	PlaySound (1 args)
	ReportHit (4 args)
	SetVisirVisibility (1 args)
	PutOnGrid (0 args)
	rand (2 args)
	GetRandomPFPointInCircle (4 args)
	RotatePath (2 args)
	FollowPath (3 args)
	GetCameraFarDistance (1 args)
	RequestClearPath (1 args)
	Stop (0 args)
	StopGroup0 (0 args)
	FindShiftedPathTo (2 args)
	FindPathTo (2 args)
	FollowPath (5 args)
	Sleep (2 args)
	FindActor (2 args)
	IsPlayerActor (2 args)
	GetScene (1 args)
	self (1 args)
	CreateFloatVector (1 args)
	SendWorldWndMessage (2 args)
	ResetAAS (0 args)
	GetActiveScene (1 args)

RunOp = 0xd8
RunTask = 1

GlobalTasks: 
	GTASK_0 Vars = (object, bool, cvector, cvector) Params = 1
		EVENT_7 Op = 0xc1 Vars = (int)
	GTASK_1  Params = 0
	GTASK_2 Vars = (bool, bool) Params = 0
		EVENT_7 Op = 0xed Vars = (int)
		EVENT_1 Op = 0x101 Vars = (object)
		EVENT_3 Op = 0x10f Vars = (object)
		EVENT_10 Op = 0x15d Vars = (object)
		EVENT_28 Op = 0x161 Vars = ()
		EVENT_41 Op = 0x16b Vars = (object)
	GTASK_3 Vars = (bool, object) Params = 0
		EVENT_7 Op = 0x195 Vars = (int)
		EVENT_1 Op = 0x1ae Vars = (object)
		EVENT_3 Op = 0x1bc Vars = (object)
		EVENT_10 Op = 0x249 Vars = (object)
		EVENT_41 Op = 0x254 Vars = (object)
	GTASK_4  Params = 0
		EVENT_7 Op = 0x283 Vars = (int)

Events:
EVENT_41 Op = 0x3d5 Vars = (object)

0x0: PushEmpty(cvector, cvector, float, float, bool, cvector, float, cvector, cvector, float, float, cvector, cvector, float, cvector, cvector, float, float, bool, cvector, float, cvector, cvector, float, float, cvector, cvector, float)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-29]
0x2: Push("TFogAttack")
0x3: @ Trace(Stack[-1])
0x4: Pop(1)
0x5: Push((float)0.8)
0x6: Push((float)2.0)
0x7: @ FogLinear(Stack[-2], Stack[-1])
0x8: Pop(2)
0x9: Stack[-12] = (int) 0
0xa: @ GetPosition(Stack[-14])
0xb: Pop(0)
0xc: @@ GetPFPosition(Stack[-13])
0xd: Pop(0)
0xe: Stack[-10] = (bool) 1
0xf: Push((bool) 1)
0x10: IF (Stack[-1] == 0) GOTO 0x78; Pop(1)

0x11: Push("Watching")
0x12: @ Trace(Stack[-1])
0x13: Pop(1)
0x14: @@ GetPFPosition(Stack[-13])
0x15: Pop(0)
0x16: @ GetPosition(Stack[-9])
0x17: Pop(0)
0x18: PushEmpty(float, cvector, cvector)
0x19: Stack[-2] = Stack[-12]
0x1a: Stack[-1] = Stack[-16]
0x1b: Call2 0x364

0x1c: Stack[-11] = Stack[-3]
0x1d: Pop(3)
0x1e: Push((float)160000.0)
0x1f: Pop(1); Push((bool) Stack[-9] > Stack[-1])
0x20: IF (Stack[-1] == 0) GOTO 0x39; Pop(1)

0x21: PushEmpty(cvector, cvector)
0x22: Stack[-1] = Stack[-15] - Stack[-11]; Pop(0);
0x23: Call2 0x355

0x24: Stack[-8] = Stack[-2]
0x25: Pop(2)
0x26: Pop(0); Push(Sqrt(Stack[-8]))
0x27: Push((float)360.0)
0x28: Stack[-7] = Stack[-2] - Stack[-1]; Pop(2);
0x29: Pop(0); Push(Stack[-6] * Stack[-5]);
0x2a: Stack[-8] = Stack[-10] + Stack[-1]; Pop(1);
0x2b: Push(Stack[-10])
0x2c: IF (Stack[-1] == 0) GOTO 0x33; Pop(1)

0x2d: Push((int) 700)
0x2e: @ MovePoint(Stack[-8], Stack[-1])
0x2f: Pop(1)
0x30: Push((float)700.0)
0x31: Stack[-12] = Stack[-6] / Stack[-1]; Pop(1);
0x32: GOTO 0x38

0x33: Push((int) 220)
0x34: @ MovePoint(Stack[-8], Stack[-1])
0x35: Pop(1)
0x36: Push((float)100.0)
0x37: Stack[-12] = Stack[-6] / Stack[-1]; Pop(1);
0x38: GOTO 0x3d

0x39: Push((float)1.0)
0x3a: @ Sleep(Stack[-1])
0x3b: Pop(1)
0x3c: Stack[-11] = (float) 1.0
0x3d: PushEmpty(bool, object)
0x3e: Stack[-1] = Stack[-31]
0x3f: Call2 0x337

0x40: Pop(1)
0x41: Pop(1); Push((bool) Stack[-1] == 0)
0x42: IF (Stack[-1] == 0) GOTO 0x50; Pop(1)

0x43: Pop(0); Push((bool) Stack[-10] == 0)
0x44: IF (Stack[-1] == 0) GOTO 0x48; Pop(1)

0x45: Push((int) 21)
0x46: @ KillTimer(Stack[-1])
0x47: Pop(1)
0x48: Push((int) 0)
0x49: Push((float)0.5)
0x4a: @ FogLinear(Stack[-2], Stack[-1])
0x4b: Pop(2)
0x4c: Push((float)0.5)
0x4d: @ Sleep(Stack[-1])
0x4e: Pop(1)
0x4f: Return(); Pop(28)

0x50: Push(Stack[-10])
0x51: IF (Stack[-1] == 0) GOTO 0x5a; Pop(1)

0x52: Stack[-10] = (bool) 0
0x53: @@ GetPFPosition(Stack[-2])
0x54: Pop(0)
0x55: Push((int) 21)
0x56: Push((int) 1)
0x57: @ SetTimer(Stack[-2], Stack[-1])
0x58: Pop(2)
0x59: GOTO 0x5d

0x5a: Push( Stack[1 + Tasks[-1].StackPointer] )
0x5b: IF (Stack[-1] == 0) GOTO 0x5d; Pop(1)

0x5c: GOTO 0x78

0x5d: Stack[-12] = Stack[-12] + Stack[-11]; Pop(0);
0x5e: Push((float)12.0)
0x5f: Pop(1); Push((bool) Stack[-13] >= Stack[-1])
0x60: IF (Stack[-1] == 0) GOTO 0x77; Pop(1)

0x61: Push("Leaving")
0x62: @ Trace(Stack[-1])
0x63: Pop(1)
0x64: Push((int) 21)
0x65: @ KillTimer(Stack[-1])
0x66: Pop(1)
0x67: Push((int) 0)
0x68: Push((float)1.0)
0x69: @ FogLinear(Stack[-2], Stack[-1])
0x6a: Pop(2)
0x6b: Push((int) 900)
0x6c: @ MovePoint(Stack[-15], Stack[-1])
0x6d: Pop(1)
0x6e: Push((int) 5)
0x6f: @ Sleep(Stack[-1])
0x70: Pop(1)
0x71: PushEmpty(object)
0x72: Call2 0x34f

0x73: Pop(0)
0x74: @ RemoveActor(Stack[-1])
0x75: Pop(1)
0x76: Return(); Pop(28)

0x77: GOTO 0xf

0x78: Push((int) 21)
0x79: @ KillTimer(Stack[-1])
0x7a: Pop(1)
0x7b: Push("Attacking")
0x7c: @ Trace(Stack[-1])
0x7d: Pop(1)
0x7e: Push((int) 1)
0x7f: Push((float)0.5)
0x80: @ FogLinear(Stack[-2], Stack[-1])
0x81: Pop(2)
0x82: @ GetHeight(Stack[-4])
0x83: Pop(0)
0x84: Stack[-3] = CVector(0.0, 0.0, 0.0)
0x85: Push(CvectorIndex(Stack[-3], 1))
0x86: Stack[-1] = Stack[-5]
0x87: CvectorIndex(Stack[-4], 1) = Stack[-1];
0x88: Push("breath")
0x89: @ PlayGlobalSound(Stack[-1], Stack[-4])
0x8a: Pop(1)
0x8b: @@ GetPFPosition(Stack[-2])
0x8c: Pop(0)
0x8d: Push((int) 500)
0x8e: @ MovePoint(Stack[-3], Stack[-1])
0x8f: Pop(1)
0x90: PushEmpty(bool, object)
0x91: Stack[-1] = Stack[-31]
0x92: Call2 0x337

0x93: Pop(1)
0x94: IF (Stack[-1] == 0) GOTO 0xb1; Pop(1)

0x95: PushEmpty(float, cvector, cvector)
0x96: PushEmpty(cvector)
0x97: Call2 0x289

0x98: Stack[-3] = Stack[-1]
0x99: Pop(1)
0x9a: PushEmpty(cvector, object)
0x9b: Stack[-1] = Stack[-34]
0x9c: Call2 0x28e

0x9d: Stack[-3] = Stack[-2]
0x9e: Pop(2)
0x9f: Call2 0x364

0xa0: Pop(2)
0xa1: Push((float)90000.0)
0xa2: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0xa3: IF (Stack[-1] == 0) GOTO 0xb1; Pop(1)

0xa4: Push("attack")
0xa5: @ PlaySound(Stack[-1])
0xa6: Pop(1)
0xa7: PushEmpty(float, object, float)
0xa8: Stack[-2] = Stack[-32]
0xa9: Stack[-1] = (float) 0.2
0xaa: Call2 0x2c9

0xab: Stack[-4] = Stack[-3]
0xac: Pop(3)
0xad: Push((int) 5)
0xae: Push((float)0.2)
0xaf: @ ReportHit(Stack[-31], Stack[-2], Stack[-3], Stack[-1])
0xb0: Pop(2)
0xb1: Push((bool) 0)
0xb2: @ SetVisirVisibility(Stack[-1])
0xb3: Pop(1)
0xb4: Push((int) 0)
0xb5: Push((int) 1)
0xb6: @ FogLinear(Stack[-2], Stack[-1])
0xb7: Pop(2)
0xb8: Push((int) 5)
0xb9: @ Sleep(Stack[-1])
0xba: Pop(1)
0xbb: PushEmpty(object)
0xbc: Call2 0x34f

0xbd: Pop(0)
0xbe: @ RemoveActor(Stack[-1])
0xbf: Pop(1)
0xc0: Return(); Pop(28)

0xc1: PushEmpty()
0xc2: Push((int) 21)
0xc3: Pop(1); Push((bool) Stack[-1] == Stack[-2])
0xc4: IF (Stack[-1] == 0) GOTO 0xd7; Pop(1)

0xc5: Stack[3 + Tasks[-1].StackPointer] = Stack[2 + Tasks[-1].StackPointer]
0xc6: Push(CvectorIndex(Stack[-3], 1))
0xc7: Stack[-1] = (int) 0
0xc8: CvectorIndex(Stack[3 + Tasks[-1].StackPointer], 1) = Stack[-1];
0xc9: @@ GetPFPosition(Stack[-2])
0xca: Pop(0)
0xcb: Push(CvectorIndex(Stack[-2], 1))
0xcc: Stack[-1] = (int) 0
0xcd: CvectorIndex(Stack[2 + Tasks[-1].StackPointer], 1) = Stack[-1];
0xce: PushEmpty(float, cvector, cvector)
0xcf: Stack[-2] = Stack[2 + Tasks[-1].StackPointer]
0xd0: Stack[-1] = Stack[3 + Tasks[-1].StackPointer]
0xd1: Call2 0x35f

0xd2: Pop(2)
0xd3: Push((float)220.0)
0xd4: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0xd5: IF (Stack[-1] == 0) GOTO 0xd7; Pop(1)

0xd6: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0xd7: Return(); Pop(0)

0xd8: Push("fog hunter inited")
0xd9: @ Trace(Stack[-1])
0xda: Pop(1)
0xdb: @ PutOnGrid()
0xdc: Pop(0)
0xdd: Push((int) 20)
0xde: Push((int) 1)
0xdf: @ SetTimer(Stack[-2], Stack[-1])
0xe0: Pop(2)
0xe1: PushEmpty()
0xe2: Push(-0, 2); TaskCall(2)
0xe3: Call2 0x11d

0xe4: Pop(-0, 2); TaskReturn
0xe5: Pop(0)
0xe6: PushEmpty()
0xe7: Push(-0, 2); TaskCall(3)
0xe8: Call2 0x17c

0xe9: Pop(-0, 2); TaskReturn
0xea: Pop(0)
0xeb: GOTO 0xe1

0xec: Return(); Pop(0)

0xed: PushEmpty()
0xee: PushEmpty(int)
0xef: Stack[-1] = Stack[-2]
0xf0: Call2 0x3a7

0xf1: Pop(1)
0xf2: Push((int) 20)
0xf3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf4: IF (Stack[-1] == 0) GOTO 0x100; Pop(1)

0xf5: PushEmpty(bool, object)
0xf6: PushEmpty(object)
0xf7: Call2 0x29b

0xf8: Stack[-2] = Stack[-1]
0xf9: Pop(1)
0xfa: Call2 0x3ae

0xfb: Pop(1)
0xfc: IF (Stack[-1] == 0) GOTO 0x100; Pop(1)

0xfd: PushEmpty()
0xfe: Call2 0x164

0xff: Pop(0)
0x100: Return(); Pop(0)

0x101: PushEmpty()
0x102: PushEmpty(bool, object)
0x103: Stack[-1] = Stack[-3]
0x104: Call2 0x37d

0x105: Pop(1)
0x106: IF (Stack[-1] == 0) GOTO 0x10e; Pop(1)

0x107: PushEmpty()
0x108: Call2 0x164

0x109: Pop(0)
0x10a: PushEmpty(object)
0x10b: Stack[-1] = Stack[-2]
0x10c: Call2 0x397

0x10d: Pop(1)
0x10e: Return(); Pop(0)

0x10f: PushEmpty()
0x110: PushEmpty(bool, object)
0x111: Stack[-1] = Stack[-3]
0x112: Call2 0x38a

0x113: Pop(1)
0x114: IF (Stack[-1] == 0) GOTO 0x11c; Pop(1)

0x115: PushEmpty()
0x116: Call2 0x164

0x117: Pop(0)
0x118: PushEmpty(object)
0x119: Stack[-1] = Stack[-2]
0x11a: Call2 0x39f

0x11b: Pop(1)
0x11c: Return(); Pop(0)

0x11d: PushEmpty(float, cvector, cvector, bool, object, bool, float, cvector, cvector, bool, object, bool)
0x11e: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x11f: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x120: Push((float)0.5)
0x121: @ rand(Stack[-7], Stack[-1])
0x122: Pop(1)
0x123: @ Sleep(Stack[-6])
0x124: Pop(0)
0x125: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x126: IF (Stack[-1] == 0) GOTO 0x157; Pop(1)

0x127: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == 0)
0x128: IF (Stack[-1] == 0) GOTO 0x138; Pop(1)

0x129: @ GetPosition(Stack[-4])
0x12a: Pop(0)
0x12b: PushEmpty(float)
0x12c: Call2 0x158

0x12d: Pop(0)
0x12e: @ GetRandomPFPointInCircle(Stack[-6], Stack[-5], Stack[-1], Stack[-4])
0x12f: Pop(1)
0x130: Push(Stack[-3])
0x131: IF (Stack[-1] == 0) GOTO 0x133; Pop(1)

0x132: GOTO 0x137

0x133: Push((int) 1)
0x134: @ Sleep(Stack[-1])
0x135: Pop(1)
0x136: GOTO 0x129

0x137: GOTO 0x139

0x138: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x139: PushEmpty(object, cvector)
0x13a: Stack[-1] = Stack[-7]
0x13b: Call2 0x176

0x13c: Stack[-4] = Stack[-2]
0x13d: Pop(2)
0x13e: Pop(0); Push(( Stack[-2] != 0 )
0x13f: IF (Stack[-1] == 0) GOTO 0x152; Pop(1)

0x140: @ RotatePath(Stack[-2], Stack[-1])
0x141: Pop(0)
0x142: Push(Stack[-1])
0x143: IF (Stack[-1] == 0) GOTO 0x151; Pop(1)

0x144: PushEmpty(bool)
0x145: Call2 0x174

0x146: Pop(0)
0x147: @ FollowPath(Stack[-3], Stack[-1], Stack[-2])
0x148: Pop(1)
0x149: Stack[-2] = 0
0x14a: Push(Stack[-1])
0x14b: IF (Stack[-1] == 0) GOTO 0x151; Pop(1)

0x14c: PushEmpty()
0x14d: Push(-0, 0); TaskCall(4)
0x14e: Call2 0x261

0x14f: Pop(-0, 0); TaskReturn
0x150: Pop(0)
0x151: GOTO 0x155

0x152: Push((int) 1)
0x153: @ Sleep(Stack[-1])
0x154: Pop(1)
0x155: Stack[-2] = 0
0x156: GOTO 0x125

0x157: Return(); Pop(12)

0x158: PushEmpty(float, float)
0x159: @ GetCameraFarDistance(Stack[-1])
0x15a: Pop(0)
0x15b: Stack[-3] = Stack[-1]
0x15c: Return(); Pop(2)

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
0x16d: Call2 0x164

0x16e: Pop(0)
0x16f: PushEmpty(object)
0x170: Stack[-1] = Stack[-2]
0x171: Call2 0x3d5

0x172: Pop(1)
0x173: Return(); Pop(0)

0x174: Stack[-1] = (bool) 0
0x175: Return(); Pop(0)

0x176: PushEmpty(object, object)
0x177: @ FindShiftedPathTo(Stack[-1], Stack[-3])
0x178: Pop(0)
0x179: Stack[-4] = Stack[-1]
0x17a: Return(); Pop(2)

0x17b: Stack[-1] = 0
0x17c: PushEmpty(object, object)
0x17d: Push("fog hunter following")
0x17e: @ Trace(Stack[-1])
0x17f: Pop(1)
0x180: PushEmpty(object)
0x181: Call2 0x29b

0x182: Stack[-2] = Stack[-1]
0x183: Pop(1)
0x184: PushEmpty(bool, object)
0x185: Stack[-1] = Stack[-3]
0x186: Call2 0x3ae

0x187: Pop(1)
0x188: Pop(1); Push((bool) Stack[-1] == 0)
0x189: IF (Stack[-1] == 0) GOTO 0x18b; Pop(1)

0x18a: Return(); Pop(2)

0x18b: PushEmpty(bool, object, float, float, bool, bool)
0x18c: Stack[-5] = Stack[-7]
0x18d: Stack[-4] = (int) 100
0x18e: Stack[-3] = (int) 0
0x18f: Stack[-2] = (bool) 0
0x190: Stack[-1] = (bool) 0
0x191: Call2 0x1d1

0x192: Pop(6)
0x193: Return(); Pop(2)

0x194: Stack[-1] = 0
0x195: PushEmpty()
0x196: PushEmpty(int)
0x197: Stack[-1] = Stack[-2]
0x198: Call2 0x3a7

0x199: Pop(1)
0x19a: PushEmpty(int)
0x19b: Stack[-1] = Stack[-2]
0x19c: Call2 0x237

0x19d: Pop(1)
0x19e: Push((int) 20)
0x19f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1a0: IF (Stack[-1] == 0) GOTO 0x1ad; Pop(1)

0x1a1: PushEmpty(bool, object)
0x1a2: PushEmpty(object)
0x1a3: Call2 0x29b

0x1a4: Stack[-2] = Stack[-1]
0x1a5: Pop(1)
0x1a6: Call2 0x3ae

0x1a7: Pop(1)
0x1a8: Pop(1); Push((bool) Stack[-1] == 0)
0x1a9: IF (Stack[-1] == 0) GOTO 0x1ad; Pop(1)

0x1aa: PushEmpty()
0x1ab: Call2 0x24d

0x1ac: Pop(0)
0x1ad: Return(); Pop(0)

0x1ae: PushEmpty()
0x1af: PushEmpty(bool, object)
0x1b0: Stack[-1] = Stack[-3]
0x1b1: Call2 0x37d

0x1b2: Pop(1)
0x1b3: IF (Stack[-1] == 0) GOTO 0x1bb; Pop(1)

0x1b4: PushEmpty()
0x1b5: Call2 0x24d

0x1b6: Pop(0)
0x1b7: PushEmpty(object)
0x1b8: Stack[-1] = Stack[-2]
0x1b9: Call2 0x397

0x1ba: Pop(1)
0x1bb: Return(); Pop(0)

0x1bc: PushEmpty()
0x1bd: PushEmpty(bool, object)
0x1be: Stack[-1] = Stack[-3]
0x1bf: Call2 0x38a

0x1c0: Pop(1)
0x1c1: IF (Stack[-1] == 0) GOTO 0x1c9; Pop(1)

0x1c2: PushEmpty()
0x1c3: Call2 0x24d

0x1c4: Pop(0)
0x1c5: PushEmpty(object)
0x1c6: Stack[-1] = Stack[-2]
0x1c7: Call2 0x39f

0x1c8: Pop(1)
0x1c9: Return(); Pop(0)

0x1ca: PushEmpty()
0x1cb: PushEmpty(bool, object)
0x1cc: Stack[-1] = Stack[-3]
0x1cd: Call2 0x3ae

0x1ce: Stack[-4] = Stack[-2]
0x1cf: Pop(2)
0x1d0: Return(); Pop(0)

0x1d1: PushEmpty(bool, bool, object, cvector, cvector, cvector, float, object, bool, bool, object, cvector, cvector, cvector, float, object)
0x1d2: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x1d3: Stack[1 + Tasks[-1].StackPointer] = Stack[-21]
0x1d4: Stack[-7] = Stack[-17]
0x1d5: PushEmpty(bool, object)
0x1d6: Stack[-1] = Stack[-23]
0x1d7: Call2 0x1ca

0x1d8: Pop(1)
0x1d9: Pop(1); Push((bool) Stack[-1] == 0)
0x1da: IF (Stack[-1] == 0) GOTO 0x1dd; Pop(1)

0x1db: Stack[-22] = (bool) 0
0x1dc: Return(); Pop(16)

0x1dd: @@ GetPosition(Stack[-5])
0x1de: Pop(0)
0x1df: @ GetPosition(Stack[-4])
0x1e0: Pop(0)
0x1e1: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x1e2: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x1e3: PushEmpty(bool)
0x1e4: Stack[-1] = (bool) 0
0x1e5: Push((int) 0)
0x1e6: Pop(1); Push((bool) Stack[-21] > Stack[-1])
0x1e7: IF (Stack[-1] == 0) GOTO 0x1ec; Pop(1)

0x1e8: Pop(0); Push(Stack[-20] * Stack[-20]);
0x1e9: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x1ea: IF (Stack[-1] == 0) GOTO 0x1ec; Pop(1)

0x1eb: Stack[-1] = (bool) 1
0x1ec: IF (Stack[-1] == 0) GOTO 0x1f1; Pop(1)

0x1ed: @ Stop()
0x1ee: Pop(0)
0x1ef: Stack[-22] = (bool) 0
0x1f0: Return(); Pop(16)

0x1f1: Pop(0); Push(Stack[-20] * Stack[-20]);
0x1f2: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x1f3: IF (Stack[-1] == 0) GOTO 0x22f; Pop(1)

0x1f4: @@ GetPFPosition(Stack[-5])
0x1f5: Pop(0)
0x1f6: @ FindPathTo(Stack[-1], Stack[-5])
0x1f7: Pop(0)
0x1f8: Pop(0); Push(( Stack[-1] != 0 )
0x1f9: IF (Stack[-1] == 0) GOTO 0x1fc; Pop(1)

0x1fa: Stack[-6] = Stack[-1]
0x1fb: Stack[-1] = 0
0x1fc: Pop(0); Push(( Stack[-6] != 0 )
0x1fd: IF (Stack[-1] == 0) GOTO 0x21d; Pop(1)

0x1fe: Push(Stack[-7])
0x1ff: IF (Stack[-1] == 0) GOTO 0x206; Pop(1)

0x200: Stack[-7] = (bool) 0
0x201: @ RotatePath(Stack[-6], Stack[-8])
0x202: Pop(0)
0x203: Pop(0); Push((bool) Stack[-8] == 0)
0x204: IF (Stack[-1] == 0) GOTO 0x206; Pop(1)

0x205: GOTO 0x235

0x206: Push((int) 0)
0x207: Push((float)0.3)
0x208: @ SetTimer(Stack[-2], Stack[-1])
0x209: Pop(2)
0x20a: PushEmpty(string)
0x20b: Call2 0x25d

0x20c: Pop(0)
0x20d: PushEmpty(string)
0x20e: Call2 0x25f

0x20f: Pop(0)
0x210: @ FollowPath(Stack[-8], Stack[-20], Stack[-10], Stack[-2], Stack[-1])
0x211: Pop(2)
0x212: Pop(0); Push((bool) Stack[-8] == 0)
0x213: IF (Stack[-1] == 0) GOTO 0x21b; Pop(1)

0x214: Push( Stack[0 + Tasks[-1].StackPointer] )
0x215: IF (Stack[-1] == 0) GOTO 0x219; Pop(1)

0x216: Stack[-6] = 0
0x217: GOTO 0x235

0x218: GOTO 0x21a

0x219: GOTO 0x234

0x21a: GOTO 0x21c

0x21b: Stack[-6] = 0
0x21c: GOTO 0x22d

0x21d: Push((int) 0)
0x21e: @ KillTimer(Stack[-1])
0x21f: Pop(1)
0x220: Push((float)0.5)
0x221: @ Sleep(Stack[-1], Stack[-9])
0x222: Pop(1)
0x223: Pop(0); Push((bool) Stack[-8] == 0)
0x224: IF (Stack[-1] == 0) GOTO 0x229; Pop(1)

0x225: Push( Stack[0 + Tasks[-1].StackPointer] )
0x226: IF (Stack[-1] == 0) GOTO 0x229; Pop(1)

0x227: Stack[-6] = 0
0x228: GOTO 0x235

0x229: Push((int) 0)
0x22a: Push((float)0.3)
0x22b: @ SetTimer(Stack[-2], Stack[-1])
0x22c: Pop(2)
0x22d: Stack[-1] = 0
0x22e: GOTO 0x233

0x22f: Push((int) 0)
0x230: @ KillTimer(Stack[-1])
0x231: Pop(1)
0x232: GOTO 0x235

0x233: Stack[-6] = 0
0x234: GOTO 0x1d5

0x235: Stack[-22] = !Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x236: Return(); Pop(16)

0x237: PushEmpty()
0x238: Push((int) 0)
0x239: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x23a: IF (Stack[-1] == 0) GOTO 0x23c; Pop(1)

0x23b: Return(); Pop(0)

0x23c: PushEmpty(bool, object)
0x23d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x23e: Call2 0x1ca

0x23f: Pop(1)
0x240: Pop(1); Push((bool) Stack[-1] == 0)
0x241: IF (Stack[-1] == 0) GOTO 0x243; Pop(1)

0x242: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x243: Push((int) 0)
0x244: @ KillTimer(Stack[-1])
0x245: Pop(1)
0x246: @ Stop()
0x247: Pop(0)
0x248: Return(); Pop(0)

0x249: PushEmpty()
0x24a: @ RequestClearPath(Stack[-1])
0x24b: Pop(0)
0x24c: Return(); Pop(0)

0x24d: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x24e: Push((int) 0)
0x24f: @ KillTimer(Stack[-1])
0x250: Pop(1)
0x251: @ Stop()
0x252: Pop(0)
0x253: Return(); Pop(0)

0x254: PushEmpty()
0x255: PushEmpty()
0x256: Call2 0x24d

0x257: Pop(0)
0x258: PushEmpty(object)
0x259: Stack[-1] = Stack[-2]
0x25a: Call2 0x3d5

0x25b: Pop(1)
0x25c: Return(); Pop(0)

0x25d: Stack[-1] = "walk"
0x25e: Return(); Pop(0)

0x25f: Stack[-1] = "run"
0x260: Return(); Pop(0)

0x261: PushEmpty(float, cvector, cvector, bool, float, cvector, cvector, bool)
0x262: Push("fog hunter idling")
0x263: @ Trace(Stack[-1])
0x264: Pop(1)
0x265: Push((int) 2)
0x266: @ rand(Stack[-5], Stack[-1])
0x267: Pop(1)
0x268: Push((int) 1)
0x269: Push((int) 1)
0x26a: @ FogLinear(Stack[-2], Stack[-1])
0x26b: Pop(2)
0x26c: Push((int) 1)
0x26d: @ Sleep(Stack[-1])
0x26e: Pop(1)
0x26f: @ Sleep(Stack[-4])
0x270: Pop(0)
0x271: @ GetPosition(Stack[-3])
0x272: Pop(0)
0x273: Push((int) 1000)
0x274: @ GetRandomPFPointInCircle(Stack[-3], Stack[-4], Stack[-1], Stack[-2])
0x275: Pop(1)
0x276: Push((int) 0)
0x277: Push((float)0.5)
0x278: @ FogLinear(Stack[-2], Stack[-1])
0x279: Pop(2)
0x27a: Push(Stack[-1])
0x27b: IF (Stack[-1] == 0) GOTO 0x27f; Pop(1)

0x27c: Push((int) 500)
0x27d: @ MovePoint(Stack[-3], Stack[-1])
0x27e: Pop(1)
0x27f: Push((int) 1)
0x280: @ Sleep(Stack[-1])
0x281: Pop(1)
0x282: Return(); Pop(8)

0x283: PushEmpty()
0x284: PushEmpty(int)
0x285: Stack[-1] = Stack[-2]
0x286: Call2 0x3a7

0x287: Pop(1)
0x288: Return(); Pop(0)

0x289: PushEmpty(cvector, cvector)
0x28a: @ GetPosition(Stack[-1])
0x28b: Pop(0)
0x28c: Stack[-3] = Stack[-1]
0x28d: Return(); Pop(2)

0x28e: PushEmpty(cvector, cvector)
0x28f: @@ GetPosition(Stack[-1])
0x290: Pop(0)
0x291: Stack[-4] = Stack[-1]
0x292: Return(); Pop(2)

0x293: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x294: @ GetPosition(Stack[-3])
0x295: Pop(0)
0x296: @@ GetPosition(Stack[-2])
0x297: Pop(0)
0x298: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x299: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x29a: Return(); Pop(6)

0x29b: PushEmpty(object, object)
0x29c: Push("player")
0x29d: @ FindActor(Stack[-2], Stack[-1])
0x29e: Pop(1)
0x29f: Stack[-3] = Stack[-1]
0x2a0: Return(); Pop(2)

0x2a1: Stack[-1] = 0
0x2a2: PushEmpty(bool, bool)
0x2a3: @ IsPlayerActor(Stack[-3], Stack[-1])
0x2a4: Pop(0)
0x2a5: Stack[-4] = Stack[-1]
0x2a6: Return(); Pop(2)

0x2a7: PushEmpty(bool, bool)
0x2a8: Push("HasProperty")
0x2a9: Push((int) 2)
0x2aa: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x2ab: Pop(1); Push((bool) Stack[-1] == 0)
0x2ac: IF (Stack[-1] == 0) GOTO 0x2af; Pop(1)

0x2ad: Stack[-5] = (bool) 0
0x2ae: Return(); Pop(2)

0x2af: @@ HasProperty(Stack[-3], Stack[-1])
0x2b0: Pop(0)
0x2b1: Stack[-5] = Stack[-1]
0x2b2: Return(); Pop(2)

0x2b3: PushEmpty(float, float)
0x2b4: PushEmpty(bool, object, string)
0x2b5: Stack[-2] = Stack[-10]
0x2b6: Stack[-1] = Stack[-9]
0x2b7: Call2 0x2a7

0x2b8: Pop(2)
0x2b9: Pop(1); Push((bool) Stack[-1] == 0)
0x2ba: IF (Stack[-1] == 0) GOTO 0x2bd; Pop(1)

0x2bb: Stack[-8] = (bool) 0
0x2bc: Return(); Pop(2)

0x2bd: @@ GetProperty(Stack[-6], Stack[-1])
0x2be: Pop(0)
0x2bf: PushEmpty(float, float, float, float)
0x2c0: Stack[-3] = Stack[-5] + Stack[-9]; Pop(0);
0x2c1: Stack[-2] = Stack[-8]
0x2c2: Stack[-1] = Stack[-7]
0x2c3: Call2 0x368

0x2c4: Pop(3)
0x2c5: @@ SetProperty(Stack[-7], Stack[-1])
0x2c6: Pop(1)
0x2c7: Stack[-8] = (bool) 1
0x2c8: Return(); Pop(2)

0x2c9: PushEmpty(float, float, float, float)
0x2ca: PushEmpty(bool, object, string)
0x2cb: Stack[-2] = Stack[-9]
0x2cc: Stack[-1] = "disease"
0x2cd: Call2 0x2a7

0x2ce: Pop(2)
0x2cf: Pop(1); Push((bool) Stack[-1] == 0)
0x2d0: IF (Stack[-1] == 0) GOTO 0x2d3; Pop(1)

0x2d1: Stack[-7] = (int) 0
0x2d2: Return(); Pop(4)

0x2d3: Stack[-2] = (int) 0
0x2d4: PushEmpty(bool, object, string)
0x2d5: Stack[-2] = Stack[-9]
0x2d6: Stack[-1] = "armor_disease"
0x2d7: Call2 0x2a7

0x2d8: Pop(2)
0x2d9: IF (Stack[-1] == 0) GOTO 0x2df; Pop(1)

0x2da: Push("armor_disease")
0x2db: @@ GetProperty(Stack[-1], Stack[-3])
0x2dc: Pop(1)
0x2dd: Push((int) 100)
0x2de: Stack[-3] = Stack[-3] / Stack[-1]; Pop(1);
0x2df: PushEmpty(bool, object, string)
0x2e0: Stack[-2] = Stack[-9]
0x2e1: Stack[-1] = "immunity"
0x2e2: Call2 0x2a7

0x2e3: Pop(2)
0x2e4: IF (Stack[-1] == 0) GOTO 0x2f1; Pop(1)

0x2e5: Push("immunity")
0x2e6: @@ GetProperty(Stack[-1], Stack[-2])
0x2e7: Pop(1)
0x2e8: Stack[-2] = Stack[-2] + Stack[-1]; Pop(0);
0x2e9: PushEmpty(bool, object, string, float, float, float)
0x2ea: Stack[-5] = Stack[-12]
0x2eb: Stack[-4] = "immunity"
0x2ec: Stack[-3] = -Stack[-11]; Pop(0);
0x2ed: Stack[-2] = (int) 0
0x2ee: Stack[-1] = (int) 1
0x2ef: Call2 0x2b3

0x2f0: Pop(6)
0x2f1: Push((int) 1)
0x2f2: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x2f3: IF (Stack[-1] == 0) GOTO 0x2f6; Pop(1)

0x2f4: Stack[-7] = (float) 0.0
0x2f5: Return(); Pop(4)

0x2f6: Push((int) 1)
0x2f7: Pop(1); Push(Stack[-1] - Stack[-3]);
0x2f8: Push((int) 2)
0x2f9: Pop(2); Push(Stack[-2] / Stack[-1]);
0x2fa: Stack[-6] = Stack[-6] * Stack[-1]; Pop(1);
0x2fb: PushEmpty(bool, object, string, float, float, float)
0x2fc: Stack[-5] = Stack[-12]
0x2fd: Stack[-4] = "disease"
0x2fe: Stack[-3] = Stack[-11]
0x2ff: Stack[-2] = (int) 0
0x300: Stack[-1] = (int) 1
0x301: Call2 0x2b3

0x302: Pop(6)
0x303: PushEmpty(bool, object)
0x304: Stack[-1] = Stack[-8]
0x305: Call2 0x2a2

0x306: Pop(1)
0x307: IF (Stack[-1] == 0) GOTO 0x30c; Pop(1)

0x308: PushEmpty(float)
0x309: Stack[-1] = Stack[-6]
0x30a: Call2 0x373

0x30b: Pop(1)
0x30c: Stack[-7] = Stack[-5]
0x30d: Return(); Pop(4)

0x30e: PushEmpty(bool, bool)
0x30f: @@ IsDead(Stack[-1])
0x310: Pop(0)
0x311: Stack[-4] = Stack[-1]
0x312: Return(); Pop(2)

0x313: PushEmpty(object, object, object, object)
0x314: Pop(0); Push((bool) Stack[-5] == 0)
0x315: IF (Stack[-1] == 0) GOTO 0x318; Pop(1)

0x316: Stack[-6] = (bool) 0
0x317: Return(); Pop(4)

0x318: PushEmpty(bool)
0x319: Stack[-1] = (bool) 0
0x31a: Push("IsDead")
0x31b: Push((int) 1)
0x31c: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x31d: IF (Stack[-1] == 0) GOTO 0x324; Pop(1)

0x31e: PushEmpty(bool, object)
0x31f: Stack[-1] = Stack[-8]
0x320: Call2 0x30e

0x321: Pop(1)
0x322: IF (Stack[-1] == 0) GOTO 0x324; Pop(1)

0x323: Stack[-1] = (bool) 1
0x324: IF (Stack[-1] == 0) GOTO 0x327; Pop(1)

0x325: Stack[-6] = (bool) 0
0x326: Return(); Pop(4)

0x327: @ GetScene(Stack[-2])
0x328: Pop(0)
0x329: Pop(0); Push((bool) Stack[-2] == 0)
0x32a: IF (Stack[-1] == 0) GOTO 0x32d; Pop(1)

0x32b: Stack[-6] = (bool) 0
0x32c: Return(); Pop(4)

0x32d: @@ GetScene(Stack[-1])
0x32e: Pop(0)
0x32f: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x330: IF (Stack[-1] == 0) GOTO 0x333; Pop(1)

0x331: Stack[-6] = (bool) 0
0x332: Return(); Pop(4)

0x333: Stack[-6] = (bool) 1
0x334: Return(); Pop(4)

0x335: Stack[-1] = 0
0x336: Stack[-2] = 0
0x337: PushEmpty(int, int)
0x338: PushEmpty(bool, object)
0x339: Stack[-1] = Stack[-5]
0x33a: Call2 0x313

0x33b: Pop(1)
0x33c: Pop(1); Push((bool) Stack[-1] == 0)
0x33d: IF (Stack[-1] == 0) GOTO 0x340; Pop(1)

0x33e: Stack[-4] = (bool) 0
0x33f: Return(); Pop(2)

0x340: PushEmpty(bool, object, string)
0x341: Stack[-2] = Stack[-6]
0x342: Stack[-1] = "noaccess"
0x343: Call2 0x2a7

0x344: Pop(2)
0x345: Pop(1); Push((bool) Stack[-1] == 0)
0x346: IF (Stack[-1] == 0) GOTO 0x349; Pop(1)

0x347: Stack[-4] = (bool) 1
0x348: Return(); Pop(2)

0x349: Push("noaccess")
0x34a: @@ GetProperty(Stack[-1], Stack[-2])
0x34b: Pop(1)
0x34c: Push((int) 0)
0x34d: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x34e: Return(); Pop(2)

0x34f: PushEmpty(object, object)
0x350: @ self(Stack[-1])
0x351: Pop(0)
0x352: Stack[-3] = Stack[-1]
0x353: Return(); Pop(2)

0x354: Stack[-1] = 0
0x355: PushEmpty(float, float)
0x356: Pop(0); Push(Stack[-3] | Stack[-3]);
0x357: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x358: Push((float)0.0)
0x359: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x35a: IF (Stack[-1] == 0) GOTO 0x35d; Pop(1)

0x35b: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x35c: Return(); Pop(2)

0x35d: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x35e: Return(); Pop(2)

0x35f: PushEmpty(cvector, cvector)
0x360: Stack[-1] = Stack[-3] - Stack[-4]; Pop(0);
0x361: Pop(0); Push(Stack[-1] | Stack[-1]);
0x362: Stack[-6] = Sqrt(Stack[-1]); Pop(1);
0x363: Return(); Pop(2)

0x364: PushEmpty(cvector, cvector)
0x365: Stack[-1] = Stack[-3] - Stack[-4]; Pop(0);
0x366: Stack[-5] = Stack[-1] | Stack[-1]; Pop(0);
0x367: Return(); Pop(2)

0x368: PushEmpty()
0x369: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x36a: IF (Stack[-1] == 0) GOTO 0x36d; Pop(1)

0x36b: Stack[-4] = Stack[-2]
0x36c: Return(); Pop(0)

0x36d: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x36e: IF (Stack[-1] == 0) GOTO 0x371; Pop(1)

0x36f: Stack[-4] = Stack[-1]
0x370: Return(); Pop(0)

0x371: Stack[-4] = Stack[-3]
0x372: Return(); Pop(0)

0x373: PushEmpty(object, object)
0x374: @ CreateFloatVector(Stack[-1])
0x375: Pop(0)
0x376: @@ add(Stack[-3])
0x377: Pop(0)
0x378: Push((int) 14)
0x379: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x37a: Pop(1)
0x37b: Return(); Pop(2)

0x37c: Stack[-1] = 0
0x37d: PushEmpty(bool, bool)
0x37e: @ IsPlayerActor(Stack[-3], Stack[-1])
0x37f: Pop(0)
0x380: Stack[-4] = (bool) 0
0x381: Push(Stack[-1])
0x382: IF (Stack[-1] == 0) GOTO 0x389; Pop(1)

0x383: PushEmpty(bool, object)
0x384: Stack[-1] = Stack[-5]
0x385: Call2 0x337

0x386: Pop(1)
0x387: IF (Stack[-1] == 0) GOTO 0x389; Pop(1)

0x388: Stack[-4] = (bool) 1
0x389: Return(); Pop(2)

0x38a: PushEmpty(bool, bool)
0x38b: @ IsPlayerActor(Stack[-3], Stack[-1])
0x38c: Pop(0)
0x38d: Stack[-4] = (bool) 0
0x38e: Push(Stack[-1])
0x38f: IF (Stack[-1] == 0) GOTO 0x396; Pop(1)

0x390: PushEmpty(bool, object)
0x391: Stack[-1] = Stack[-5]
0x392: Call2 0x337

0x393: Pop(1)
0x394: IF (Stack[-1] == 0) GOTO 0x396; Pop(1)

0x395: Stack[-4] = (bool) 1
0x396: Return(); Pop(2)

0x397: PushEmpty()
0x398: PushEmpty(object)
0x399: Stack[-1] = Stack[-2]
0x39a: Push(-1, 4); TaskCall(0)
0x39b: Call2 0x0

0x39c: Pop(-1, 4); TaskReturn
0x39d: Pop(1)
0x39e: Return(); Pop(0)

0x39f: PushEmpty()
0x3a0: PushEmpty(object)
0x3a1: Stack[-1] = Stack[-2]
0x3a2: Push(-1, 4); TaskCall(0)
0x3a3: Call2 0x0

0x3a4: Pop(-1, 4); TaskReturn
0x3a5: Pop(1)
0x3a6: Return(); Pop(0)

0x3a7: PushEmpty()
0x3a8: Push((int) 20)
0x3a9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3aa: IF (Stack[-1] == 0) GOTO 0x3ad; Pop(1)

0x3ab: @ ResetAAS()
0x3ac: Pop(0)
0x3ad: Return(); Pop(0)

0x3ae: PushEmpty(object, int, object, int)
0x3af: PushEmpty(bool, object)
0x3b0: Stack[-1] = Stack[-7]
0x3b1: Call2 0x337

0x3b2: Pop(1)
0x3b3: Pop(1); Push((bool) Stack[-1] == 0)
0x3b4: IF (Stack[-1] == 0) GOTO 0x3b7; Pop(1)

0x3b5: Stack[-6] = (bool) 0
0x3b6: Return(); Pop(4)

0x3b7: @ GetActiveScene(Stack[-2])
0x3b8: Pop(0)
0x3b9: PushEmpty(bool)
0x3ba: Stack[-1] = (bool) 0
0x3bb: Pop(0); Push(( Stack[-3] != 0 )
0x3bc: IF (Stack[-1] == 0) GOTO 0x3c2; Pop(1)

0x3bd: Push("GetCurrentRegion")
0x3be: Push((int) 1)
0x3bf: Pop(2); Push(IsFuncExist(Stack[-5], Stack[-2], Stack[-1]))
0x3c0: IF (Stack[-1] == 0) GOTO 0x3c2; Pop(1)

0x3c1: Stack[-1] = (bool) 1
0x3c2: IF (Stack[-1] == 0) GOTO 0x3d2; Pop(1)

0x3c3: @@ GetCurrentRegion(Stack[-1])
0x3c4: Pop(0)
0x3c5: Stack[-6] = (bool) 0
0x3c6: Push(GlobalVars[0])
0x3c7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3c8: IF (Stack[-1] == 0) GOTO 0x3d1; Pop(1)

0x3c9: PushEmpty(float, object)
0x3ca: Stack[-1] = Stack[-7]
0x3cb: Call2 0x293

0x3cc: Pop(1)
0x3cd: Push((int) 4000000)
0x3ce: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x3cf: IF (Stack[-1] == 0) GOTO 0x3d1; Pop(1)

0x3d0: Stack[-6] = (bool) 1
0x3d1: Return(); Pop(4)

0x3d2: Stack[-6] = (bool) 0
0x3d3: Return(); Pop(4)

0x3d4: Stack[-2] = 0
0x3d5: PushEmpty()
0x3d6: Return(); Pop(0)

