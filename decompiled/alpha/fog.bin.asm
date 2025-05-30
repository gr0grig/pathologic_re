GlobalVarCount = 1
	G_VAR_0 int Region

Strings:
	breath
	GetPFPosition
	attack
	GetPosition
	walk
	run
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
	GetCurrentRegion
	GetCurrentRegion

Import:
	FogLinear (2 args)
	GetHeight (1 args)
	PlayGlobalSound (2 args)
	MovePoint (2 args)
	PlaySound (1 args)
	ReportHit (4 args)
	SetVisirVisibility (1 args)
	Sleep (1 args)
	RemoveActor (1 args)
	PutOnGrid (0 args)
	SetTimer (2 args)
	rand (2 args)
	GetPosition (1 args)
	GetCameraFarDistance (1 args)
	GetRandomPFPointInCircle (4 args)
	FindShiftedPathTo (2 args)
	RotatePath (2 args)
	FollowPath (3 args)
	RequestClearPath (1 args)
	Stop (0 args)
	StopGroup0 (0 args)
	FindPathTo (2 args)
	FollowPath (5 args)
	KillTimer (1 args)
	Sleep (2 args)
	FindActor (2 args)
	GetScene (1 args)
	self (1 args)
	IsPlayerActor (2 args)
	ResetAAS (0 args)
	GetActiveScene (1 args)

RunOp = 0x44
RunTask = 1

GlobalTasks: 
	GTASK_0  Params = 1
	GTASK_1  Params = 0
	GTASK_2 Vars = (bool, bool) Params = 0
		EVENT_7 Op = 0x56 Vars = (int)
		EVENT_1 Op = 0x6a Vars = (object)
		EVENT_10 Op = 0xb1 Vars = (object)
		EVENT_28 Op = 0xb5 Vars = ()
		EVENT_41 Op = 0xbf Vars = (object)
	GTASK_3 Vars = (bool, object) Params = 0
		EVENT_7 Op = 0xe0 Vars = (int)
		EVENT_1 Op = 0xf9 Vars = (object)
		EVENT_10 Op = 0x186 Vars = (object)
		EVENT_41 Op = 0x191 Vars = (object)
	GTASK_4  Params = 0
		EVENT_1 Op = 0x1a5 Vars = (object)
		EVENT_7 Op = 0x1b0 Vars = (int)

Events:
EVENT_41 Op = 0x2b7 Vars = (object)

0x0: PushEmpty(float, cvector, cvector, float, float, cvector, cvector, float)
0x1: Push((int) 1)
0x2: Push((int) 1)
0x3: @ FogLinear(Stack[-2], Stack[-1])
0x4: Pop(2)
0x5: @ GetHeight(Stack[-4])
0x6: Pop(0)
0x7: Stack[-3] = CVector(0.0, 0.0, 0.0)
0x8: Push(CvectorIndex(Stack[-3], 1))
0x9: Stack[-1] = Stack[-5]
0xa: CvectorIndex(Stack[-4], 1) = Stack[-1];
0xb: Push("breath")
0xc: @ PlayGlobalSound(Stack[-1], Stack[-4])
0xd: Pop(1)
0xe: @@ GetPFPosition(Stack[-2])
0xf: Pop(0)
0x10: Push((int) 500)
0x11: @ MovePoint(Stack[-3], Stack[-1])
0x12: Pop(1)
0x13: PushEmpty(bool, object)
0x14: Stack[-1] = Stack[-11]
0x15: Call 0x251

0x16: Pop(1)
0x17: IF (Stack[-1] == 0) GOTO 0x34; Pop(1)

0x18: PushEmpty(float, cvector, cvector)
0x19: PushEmpty(cvector)
0x1a: Call 0x1b6

0x1b: Stack[-3] = Stack[-1]
0x1c: Pop(1)
0x1d: PushEmpty(cvector, object)
0x1e: Stack[-1] = Stack[-14]
0x1f: Call 0x1bb

0x20: Stack[-3] = Stack[-2]
0x21: Pop(2)
0x22: Call 0x26f

0x23: Pop(2)
0x24: Push((float)90000.0)
0x25: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x26: IF (Stack[-1] == 0) GOTO 0x34; Pop(1)

0x27: Push("attack")
0x28: @ PlaySound(Stack[-1])
0x29: Pop(1)
0x2a: PushEmpty(float, object, float)
0x2b: Stack[-2] = Stack[-12]
0x2c: Stack[-1] = (float) 0.2
0x2d: Call 0x1e9

0x2e: Stack[-4] = Stack[-3]
0x2f: Pop(3)
0x30: Push((int) 5)
0x31: Push((float)0.2)
0x32: @ ReportHit(Stack[-11], Stack[-2], Stack[-3], Stack[-1])
0x33: Pop(2)
0x34: Push((bool) 0)
0x35: @ SetVisirVisibility(Stack[-1])
0x36: Pop(1)
0x37: Push((int) 0)
0x38: Push((int) 2)
0x39: @ FogLinear(Stack[-2], Stack[-1])
0x3a: Pop(2)
0x3b: Push((int) 5)
0x3c: @ Sleep(Stack[-1])
0x3d: Pop(1)
0x3e: PushEmpty(object)
0x3f: Call 0x269

0x40: Pop(0)
0x41: @ RemoveActor(Stack[-1])
0x42: Pop(1)
0x43: Return(); Pop(8)

0x44: @ PutOnGrid()
0x45: Pop(0)
0x46: Push((int) 20)
0x47: Push((int) 1)
0x48: @ SetTimer(Stack[-2], Stack[-1])
0x49: Pop(2)
0x4a: PushEmpty()
0x4b: Push(-0, 2); TaskCall(2)
0x4c: Call 0x78

0x4d: Pop(-0, 2); TaskReturn
0x4e: Pop(0)
0x4f: PushEmpty()
0x50: Push(-0, 2); TaskCall(3)
0x51: Call 0xca

0x52: Pop(-0, 2); TaskReturn
0x53: Pop(0)
0x54: GOTO 0x4a

0x55: Return(); Pop(0)

0x56: PushEmpty()
0x57: PushEmpty(int)
0x58: Stack[-1] = Stack[-2]
0x59: Call 0x293

0x5a: Pop(1)
0x5b: Push((int) 20)
0x5c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5d: IF (Stack[-1] == 0) GOTO 0x69; Pop(1)

0x5e: PushEmpty(bool, object)
0x5f: PushEmpty(object)
0x60: Call 0x1c0

0x61: Stack[-2] = Stack[-1]
0x62: Pop(1)
0x63: Call 0x29a

0x64: Pop(1)
0x65: IF (Stack[-1] == 0) GOTO 0x69; Pop(1)

0x66: PushEmpty()
0x67: Call 0xb8

0x68: Pop(0)
0x69: Return(); Pop(0)

0x6a: PushEmpty()
0x6b: PushEmpty(bool, object)
0x6c: Stack[-1] = Stack[-3]
0x6d: Call 0x27e

0x6e: Pop(1)
0x6f: IF (Stack[-1] == 0) GOTO 0x77; Pop(1)

0x70: PushEmpty()
0x71: Call 0xb8

0x72: Pop(0)
0x73: PushEmpty(object)
0x74: Stack[-1] = Stack[-2]
0x75: Call 0x28b

0x76: Pop(1)
0x77: Return(); Pop(0)

0x78: PushEmpty(float, cvector, cvector, float, bool, object, bool, float, cvector, cvector, float, bool, object, bool)
0x79: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x7a: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x7b: Push((float)0.5)
0x7c: @ rand(Stack[-8], Stack[-1])
0x7d: Pop(1)
0x7e: @ Sleep(Stack[-7])
0x7f: Pop(0)
0x80: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x81: IF (Stack[-1] == 0) GOTO 0xb0; Pop(1)

0x82: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == 0)
0x83: IF (Stack[-1] == 0) GOTO 0x94; Pop(1)

0x84: @ GetPosition(Stack[-5])
0x85: Pop(0)
0x86: @ GetCameraFarDistance(Stack[-4])
0x87: Pop(0)
0x88: Push((float)2.5)
0x89: Stack[-5] = Stack[-5] * Stack[-1]; Pop(1);
0x8a: @ GetRandomPFPointInCircle(Stack[-6], Stack[-5], Stack[-4], Stack[-3])
0x8b: Pop(0)
0x8c: Push(Stack[-3])
0x8d: IF (Stack[-1] == 0) GOTO 0x8f; Pop(1)

0x8e: GOTO 0x93

0x8f: Push((int) 1)
0x90: @ Sleep(Stack[-1])
0x91: Pop(1)
0x92: GOTO 0x84

0x93: GOTO 0x95

0x94: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x95: @ FindShiftedPathTo(Stack[-2], Stack[-6])
0x96: Pop(0)
0x97: Pop(0); Push(( Stack[-2] != 0 )
0x98: IF (Stack[-1] == 0) GOTO 0xab; Pop(1)

0x99: @ RotatePath(Stack[-2], Stack[-1])
0x9a: Pop(0)
0x9b: Push(Stack[-1])
0x9c: IF (Stack[-1] == 0) GOTO 0xaa; Pop(1)

0x9d: PushEmpty(bool)
0x9e: Call 0xc8

0x9f: Pop(0)
0xa0: @ FollowPath(Stack[-3], Stack[-1], Stack[-2])
0xa1: Pop(1)
0xa2: Stack[-2] = 0
0xa3: Push(Stack[-1])
0xa4: IF (Stack[-1] == 0) GOTO 0xaa; Pop(1)

0xa5: PushEmpty()
0xa6: Push(-0, 0); TaskCall(4)
0xa7: Call 0x19e

0xa8: Pop(-0, 0); TaskReturn
0xa9: Pop(0)
0xaa: GOTO 0xae

0xab: Push((int) 1)
0xac: @ Sleep(Stack[-1])
0xad: Pop(1)
0xae: Stack[-2] = 0
0xaf: GOTO 0x80

0xb0: Return(); Pop(14)

0xb1: PushEmpty()
0xb2: @ RequestClearPath(Stack[-1])
0xb3: Pop(0)
0xb4: Return(); Pop(0)

0xb5: @ Stop()
0xb6: Pop(0)
0xb7: Return(); Pop(0)

0xb8: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0xb9: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0xba: @ Stop()
0xbb: Pop(0)
0xbc: @ StopGroup0()
0xbd: Pop(0)
0xbe: Return(); Pop(0)

0xbf: PushEmpty()
0xc0: PushEmpty()
0xc1: Call 0xb8

0xc2: Pop(0)
0xc3: PushEmpty(object)
0xc4: Stack[-1] = Stack[-2]
0xc5: Call 0x2b7

0xc6: Pop(1)
0xc7: Return(); Pop(0)

0xc8: Stack[-1] = (bool) 0
0xc9: Return(); Pop(0)

0xca: PushEmpty(object, object)
0xcb: PushEmpty(object)
0xcc: Call 0x1c0

0xcd: Stack[-2] = Stack[-1]
0xce: Pop(1)
0xcf: PushEmpty(bool, object)
0xd0: Stack[-1] = Stack[-3]
0xd1: Call 0x29a

0xd2: Pop(1)
0xd3: Pop(1); Push((bool) Stack[-1] == 0)
0xd4: IF (Stack[-1] == 0) GOTO 0xd6; Pop(1)

0xd5: Return(); Pop(2)

0xd6: PushEmpty(bool, object, float, float, bool, bool)
0xd7: Stack[-5] = Stack[-7]
0xd8: Stack[-4] = (int) 100
0xd9: Stack[-3] = (int) 0
0xda: Stack[-2] = (bool) 0
0xdb: Stack[-1] = (bool) 0
0xdc: Call 0x10e

0xdd: Pop(6)
0xde: Return(); Pop(2)

0xdf: Stack[-1] = 0
0xe0: PushEmpty()
0xe1: PushEmpty(int)
0xe2: Stack[-1] = Stack[-2]
0xe3: Call 0x293

0xe4: Pop(1)
0xe5: PushEmpty(int)
0xe6: Stack[-1] = Stack[-2]
0xe7: Call 0x174

0xe8: Pop(1)
0xe9: Push((int) 20)
0xea: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xeb: IF (Stack[-1] == 0) GOTO 0xf8; Pop(1)

0xec: PushEmpty(bool, object)
0xed: PushEmpty(object)
0xee: Call 0x1c0

0xef: Stack[-2] = Stack[-1]
0xf0: Pop(1)
0xf1: Call 0x29a

0xf2: Pop(1)
0xf3: Pop(1); Push((bool) Stack[-1] == 0)
0xf4: IF (Stack[-1] == 0) GOTO 0xf8; Pop(1)

0xf5: PushEmpty()
0xf6: Call 0x18a

0xf7: Pop(0)
0xf8: Return(); Pop(0)

0xf9: PushEmpty()
0xfa: PushEmpty(bool, object)
0xfb: Stack[-1] = Stack[-3]
0xfc: Call 0x27e

0xfd: Pop(1)
0xfe: IF (Stack[-1] == 0) GOTO 0x106; Pop(1)

0xff: PushEmpty()
0x100: Call 0x18a

0x101: Pop(0)
0x102: PushEmpty(object)
0x103: Stack[-1] = Stack[-2]
0x104: Call 0x28b

0x105: Pop(1)
0x106: Return(); Pop(0)

0x107: PushEmpty()
0x108: PushEmpty(bool, object)
0x109: Stack[-1] = Stack[-3]
0x10a: Call 0x29a

0x10b: Stack[-4] = Stack[-2]
0x10c: Pop(2)
0x10d: Return(); Pop(0)

0x10e: PushEmpty(bool, bool, object, cvector, cvector, cvector, float, object, bool, bool, object, cvector, cvector, cvector, float, object)
0x10f: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x110: Stack[1 + Tasks[-1].StackPointer] = Stack[-21]
0x111: Stack[-7] = Stack[-17]
0x112: PushEmpty(bool, object)
0x113: Stack[-1] = Stack[-23]
0x114: Call 0x107

0x115: Pop(1)
0x116: Pop(1); Push((bool) Stack[-1] == 0)
0x117: IF (Stack[-1] == 0) GOTO 0x11a; Pop(1)

0x118: Stack[-22] = (bool) 0
0x119: Return(); Pop(16)

0x11a: @@ GetPosition(Stack[-5])
0x11b: Pop(0)
0x11c: @ GetPosition(Stack[-4])
0x11d: Pop(0)
0x11e: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x11f: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x120: PushEmpty(bool)
0x121: Stack[-1] = (bool) 0
0x122: Push((int) 0)
0x123: Pop(1); Push((bool) Stack[-21] > Stack[-1])
0x124: IF (Stack[-1] == 0) GOTO 0x129; Pop(1)

0x125: Pop(0); Push(Stack[-20] * Stack[-20]);
0x126: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x127: IF (Stack[-1] == 0) GOTO 0x129; Pop(1)

0x128: Stack[-1] = (bool) 1
0x129: IF (Stack[-1] == 0) GOTO 0x12e; Pop(1)

0x12a: @ Stop()
0x12b: Pop(0)
0x12c: Stack[-22] = (bool) 0
0x12d: Return(); Pop(16)

0x12e: Pop(0); Push(Stack[-20] * Stack[-20]);
0x12f: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x130: IF (Stack[-1] == 0) GOTO 0x16c; Pop(1)

0x131: @@ GetPFPosition(Stack[-5])
0x132: Pop(0)
0x133: @ FindPathTo(Stack[-1], Stack[-5])
0x134: Pop(0)
0x135: Pop(0); Push(( Stack[-1] != 0 )
0x136: IF (Stack[-1] == 0) GOTO 0x139; Pop(1)

0x137: Stack[-6] = Stack[-1]
0x138: Stack[-1] = 0
0x139: Pop(0); Push(( Stack[-6] != 0 )
0x13a: IF (Stack[-1] == 0) GOTO 0x15a; Pop(1)

0x13b: Push(Stack[-7])
0x13c: IF (Stack[-1] == 0) GOTO 0x143; Pop(1)

0x13d: Stack[-7] = (bool) 0
0x13e: @ RotatePath(Stack[-6], Stack[-8])
0x13f: Pop(0)
0x140: Pop(0); Push((bool) Stack[-8] == 0)
0x141: IF (Stack[-1] == 0) GOTO 0x143; Pop(1)

0x142: GOTO 0x172

0x143: Push((int) 0)
0x144: Push((float)0.3)
0x145: @ SetTimer(Stack[-2], Stack[-1])
0x146: Pop(2)
0x147: PushEmpty(string)
0x148: Call 0x19a

0x149: Pop(0)
0x14a: PushEmpty(string)
0x14b: Call 0x19c

0x14c: Pop(0)
0x14d: @ FollowPath(Stack[-8], Stack[-20], Stack[-10], Stack[-2], Stack[-1])
0x14e: Pop(2)
0x14f: Pop(0); Push((bool) Stack[-8] == 0)
0x150: IF (Stack[-1] == 0) GOTO 0x158; Pop(1)

0x151: Push( Stack[0 + Tasks[-1].StackPointer] )
0x152: IF (Stack[-1] == 0) GOTO 0x156; Pop(1)

0x153: Stack[-6] = 0
0x154: GOTO 0x172

0x155: GOTO 0x157

0x156: GOTO 0x171

0x157: GOTO 0x159

0x158: Stack[-6] = 0
0x159: GOTO 0x16a

0x15a: Push((int) 0)
0x15b: @ KillTimer(Stack[-1])
0x15c: Pop(1)
0x15d: Push((float)0.5)
0x15e: @ Sleep(Stack[-1], Stack[-9])
0x15f: Pop(1)
0x160: Pop(0); Push((bool) Stack[-8] == 0)
0x161: IF (Stack[-1] == 0) GOTO 0x166; Pop(1)

0x162: Push( Stack[0 + Tasks[-1].StackPointer] )
0x163: IF (Stack[-1] == 0) GOTO 0x166; Pop(1)

0x164: Stack[-6] = 0
0x165: GOTO 0x172

0x166: Push((int) 0)
0x167: Push((float)0.3)
0x168: @ SetTimer(Stack[-2], Stack[-1])
0x169: Pop(2)
0x16a: Stack[-1] = 0
0x16b: GOTO 0x170

0x16c: Push((int) 0)
0x16d: @ KillTimer(Stack[-1])
0x16e: Pop(1)
0x16f: GOTO 0x172

0x170: Stack[-6] = 0
0x171: GOTO 0x112

0x172: Stack[-22] = !Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x173: Return(); Pop(16)

0x174: PushEmpty()
0x175: Push((int) 0)
0x176: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x177: IF (Stack[-1] == 0) GOTO 0x179; Pop(1)

0x178: Return(); Pop(0)

0x179: PushEmpty(bool, object)
0x17a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x17b: Call 0x107

0x17c: Pop(1)
0x17d: Pop(1); Push((bool) Stack[-1] == 0)
0x17e: IF (Stack[-1] == 0) GOTO 0x180; Pop(1)

0x17f: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x180: Push((int) 0)
0x181: @ KillTimer(Stack[-1])
0x182: Pop(1)
0x183: @ Stop()
0x184: Pop(0)
0x185: Return(); Pop(0)

0x186: PushEmpty()
0x187: @ RequestClearPath(Stack[-1])
0x188: Pop(0)
0x189: Return(); Pop(0)

0x18a: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x18b: Push((int) 0)
0x18c: @ KillTimer(Stack[-1])
0x18d: Pop(1)
0x18e: @ Stop()
0x18f: Pop(0)
0x190: Return(); Pop(0)

0x191: PushEmpty()
0x192: PushEmpty()
0x193: Call 0x18a

0x194: Pop(0)
0x195: PushEmpty(object)
0x196: Stack[-1] = Stack[-2]
0x197: Call 0x2b7

0x198: Pop(1)
0x199: Return(); Pop(0)

0x19a: Stack[-1] = "walk"
0x19b: Return(); Pop(0)

0x19c: Stack[-1] = "run"
0x19d: Return(); Pop(0)

0x19e: PushEmpty(float, float)
0x19f: Push((int) 30)
0x1a0: @ rand(Stack[-2], Stack[-1])
0x1a1: Pop(1)
0x1a2: @ Sleep(Stack[-1])
0x1a3: Pop(0)
0x1a4: Return(); Pop(2)

0x1a5: PushEmpty()
0x1a6: PushEmpty(bool, object)
0x1a7: Stack[-1] = Stack[-3]
0x1a8: Call 0x27e

0x1a9: Pop(1)
0x1aa: IF (Stack[-1] == 0) GOTO 0x1af; Pop(1)

0x1ab: PushEmpty(object)
0x1ac: Stack[-1] = Stack[-2]
0x1ad: Call 0x28b

0x1ae: Pop(1)
0x1af: Return(); Pop(0)

0x1b0: PushEmpty()
0x1b1: PushEmpty(int)
0x1b2: Stack[-1] = Stack[-2]
0x1b3: Call 0x293

0x1b4: Pop(1)
0x1b5: Return(); Pop(0)

0x1b6: PushEmpty(cvector, cvector)
0x1b7: @ GetPosition(Stack[-1])
0x1b8: Pop(0)
0x1b9: Stack[-3] = Stack[-1]
0x1ba: Return(); Pop(2)

0x1bb: PushEmpty(cvector, cvector)
0x1bc: @@ GetPosition(Stack[-1])
0x1bd: Pop(0)
0x1be: Stack[-4] = Stack[-1]
0x1bf: Return(); Pop(2)

0x1c0: PushEmpty(object, object)
0x1c1: Push("player")
0x1c2: @ FindActor(Stack[-2], Stack[-1])
0x1c3: Pop(1)
0x1c4: Stack[-3] = Stack[-1]
0x1c5: Return(); Pop(2)

0x1c6: Stack[-1] = 0
0x1c7: PushEmpty(bool, bool)
0x1c8: Push("HasProperty")
0x1c9: Push((int) 2)
0x1ca: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x1cb: Pop(1); Push((bool) Stack[-1] == 0)
0x1cc: IF (Stack[-1] == 0) GOTO 0x1cf; Pop(1)

0x1cd: Stack[-5] = (bool) 0
0x1ce: Return(); Pop(2)

0x1cf: @@ HasProperty(Stack[-3], Stack[-1])
0x1d0: Pop(0)
0x1d1: Stack[-5] = Stack[-1]
0x1d2: Return(); Pop(2)

0x1d3: PushEmpty(float, float)
0x1d4: PushEmpty(bool, object, string)
0x1d5: Stack[-2] = Stack[-10]
0x1d6: Stack[-1] = Stack[-9]
0x1d7: Call 0x1c7

0x1d8: Pop(2)
0x1d9: Pop(1); Push((bool) Stack[-1] == 0)
0x1da: IF (Stack[-1] == 0) GOTO 0x1dd; Pop(1)

0x1db: Stack[-8] = (bool) 0
0x1dc: Return(); Pop(2)

0x1dd: @@ GetProperty(Stack[-6], Stack[-1])
0x1de: Pop(0)
0x1df: PushEmpty(float, float, float, float)
0x1e0: Stack[-3] = Stack[-5] + Stack[-9]; Pop(0);
0x1e1: Stack[-2] = Stack[-8]
0x1e2: Stack[-1] = Stack[-7]
0x1e3: Call 0x273

0x1e4: Pop(3)
0x1e5: @@ SetProperty(Stack[-7], Stack[-1])
0x1e6: Pop(1)
0x1e7: Stack[-8] = (bool) 1
0x1e8: Return(); Pop(2)

0x1e9: PushEmpty(int, float, float, int, float, float)
0x1ea: PushEmpty(bool, object, string)
0x1eb: Stack[-2] = Stack[-11]
0x1ec: Stack[-1] = "disease"
0x1ed: Call 0x1c7

0x1ee: Pop(2)
0x1ef: Pop(1); Push((bool) Stack[-1] == 0)
0x1f0: IF (Stack[-1] == 0) GOTO 0x1f3; Pop(1)

0x1f1: Stack[-9] = (int) 0
0x1f2: Return(); Pop(6)

0x1f3: PushEmpty(bool, object, string)
0x1f4: Stack[-2] = Stack[-11]
0x1f5: Stack[-1] = "armor_disease"
0x1f6: Call 0x1c7

0x1f7: Pop(2)
0x1f8: IF (Stack[-1] == 0) GOTO 0x207; Pop(1)

0x1f9: Push("armor_disease")
0x1fa: @@ GetProperty(Stack[-1], Stack[-4])
0x1fb: Pop(1)
0x1fc: Push((int) 100)
0x1fd: Pop(1); Push((bool) Stack[-4] < Stack[-1])
0x1fe: IF (Stack[-1] == 0) GOTO 0x205; Pop(1)

0x1ff: Push((int) 1)
0x200: Push((float)100.0)
0x201: Pop(1); Push(Stack[-5] / Stack[-1]);
0x202: Pop(2); Push(Stack[-2] - Stack[-1]);
0x203: Stack[-8] = Stack[-8] * Stack[-1]; Pop(1);
0x204: GOTO 0x207

0x205: Stack[-9] = (int) 0
0x206: Return(); Pop(6)

0x207: PushEmpty(bool, object, string)
0x208: Stack[-2] = Stack[-11]
0x209: Stack[-1] = "immunity"
0x20a: Call 0x1c7

0x20b: Pop(2)
0x20c: IF (Stack[-1] == 0) GOTO 0x21e; Pop(1)

0x20d: Push("immunity")
0x20e: @@ GetProperty(Stack[-1], Stack[-2])
0x20f: Pop(1)
0x210: Pop(0); Push((bool) Stack[-1] < Stack[-7])
0x211: IF (Stack[-1] == 0) GOTO 0x218; Pop(1)

0x212: Push("immunity")
0x213: Push((int) 0)
0x214: @@ SetProperty(Stack[-2], Stack[-1])
0x215: Pop(2)
0x216: Stack[-2] = Stack[-7] - Stack[-1]; Pop(0);
0x217: GOTO 0x21e

0x218: Push("immunity")
0x219: Pop(0); Push(Stack[-2] - Stack[-8]);
0x21a: @@ SetProperty(Stack[-2], Stack[-1])
0x21b: Pop(2)
0x21c: Stack[-9] = Stack[-7]
0x21d: Return(); Pop(6)

0x21e: PushEmpty(bool, object, string, float, float, float)
0x21f: Stack[-5] = Stack[-14]
0x220: Stack[-4] = "disease"
0x221: Stack[-3] = Stack[-8]
0x222: Stack[-2] = (int) 0
0x223: Stack[-1] = (int) 1
0x224: Call 0x1d3

0x225: Pop(6)
0x226: Stack[-9] = Stack[-7]
0x227: Return(); Pop(6)

0x228: PushEmpty(bool, bool)
0x229: @@ IsDead(Stack[-1])
0x22a: Pop(0)
0x22b: Stack[-4] = Stack[-1]
0x22c: Return(); Pop(2)

0x22d: PushEmpty(object, object, object, object)
0x22e: Pop(0); Push((bool) Stack[-5] == 0)
0x22f: IF (Stack[-1] == 0) GOTO 0x232; Pop(1)

0x230: Stack[-6] = (bool) 0
0x231: Return(); Pop(4)

0x232: PushEmpty(bool)
0x233: Stack[-1] = (bool) 0
0x234: Push("IsDead")
0x235: Push((int) 1)
0x236: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x237: IF (Stack[-1] == 0) GOTO 0x23e; Pop(1)

0x238: PushEmpty(bool, object)
0x239: Stack[-1] = Stack[-8]
0x23a: Call 0x228

0x23b: Pop(1)
0x23c: IF (Stack[-1] == 0) GOTO 0x23e; Pop(1)

0x23d: Stack[-1] = (bool) 1
0x23e: IF (Stack[-1] == 0) GOTO 0x241; Pop(1)

0x23f: Stack[-6] = (bool) 0
0x240: Return(); Pop(4)

0x241: @ GetScene(Stack[-2])
0x242: Pop(0)
0x243: Pop(0); Push((bool) Stack[-2] == 0)
0x244: IF (Stack[-1] == 0) GOTO 0x247; Pop(1)

0x245: Stack[-6] = (bool) 0
0x246: Return(); Pop(4)

0x247: @@ GetScene(Stack[-1])
0x248: Pop(0)
0x249: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x24a: IF (Stack[-1] == 0) GOTO 0x24d; Pop(1)

0x24b: Stack[-6] = (bool) 0
0x24c: Return(); Pop(4)

0x24d: Stack[-6] = (bool) 1
0x24e: Return(); Pop(4)

0x24f: Stack[-1] = 0
0x250: Stack[-2] = 0
0x251: PushEmpty(int, int)
0x252: PushEmpty(bool, object)
0x253: Stack[-1] = Stack[-5]
0x254: Call 0x22d

0x255: Pop(1)
0x256: Pop(1); Push((bool) Stack[-1] == 0)
0x257: IF (Stack[-1] == 0) GOTO 0x25a; Pop(1)

0x258: Stack[-4] = (bool) 0
0x259: Return(); Pop(2)

0x25a: PushEmpty(bool, object, string)
0x25b: Stack[-2] = Stack[-6]
0x25c: Stack[-1] = "noaccess"
0x25d: Call 0x1c7

0x25e: Pop(2)
0x25f: Pop(1); Push((bool) Stack[-1] == 0)
0x260: IF (Stack[-1] == 0) GOTO 0x263; Pop(1)

0x261: Stack[-4] = (bool) 1
0x262: Return(); Pop(2)

0x263: Push("noaccess")
0x264: @@ GetProperty(Stack[-1], Stack[-2])
0x265: Pop(1)
0x266: Push((int) 0)
0x267: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x268: Return(); Pop(2)

0x269: PushEmpty(object, object)
0x26a: @ self(Stack[-1])
0x26b: Pop(0)
0x26c: Stack[-3] = Stack[-1]
0x26d: Return(); Pop(2)

0x26e: Stack[-1] = 0
0x26f: PushEmpty(cvector, cvector)
0x270: Stack[-1] = Stack[-3] - Stack[-4]; Pop(0);
0x271: Stack[-5] = Stack[-1] | Stack[-1]; Pop(0);
0x272: Return(); Pop(2)

0x273: PushEmpty()
0x274: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x275: IF (Stack[-1] == 0) GOTO 0x278; Pop(1)

0x276: Stack[-4] = Stack[-2]
0x277: Return(); Pop(0)

0x278: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x279: IF (Stack[-1] == 0) GOTO 0x27c; Pop(1)

0x27a: Stack[-4] = Stack[-1]
0x27b: Return(); Pop(0)

0x27c: Stack[-4] = Stack[-3]
0x27d: Return(); Pop(0)

0x27e: PushEmpty(bool, bool)
0x27f: @ IsPlayerActor(Stack[-3], Stack[-1])
0x280: Pop(0)
0x281: Stack[-4] = (bool) 0
0x282: Push(Stack[-1])
0x283: IF (Stack[-1] == 0) GOTO 0x28a; Pop(1)

0x284: PushEmpty(bool, object)
0x285: Stack[-1] = Stack[-5]
0x286: Call 0x251

0x287: Pop(1)
0x288: IF (Stack[-1] == 0) GOTO 0x28a; Pop(1)

0x289: Stack[-4] = (bool) 1
0x28a: Return(); Pop(2)

0x28b: PushEmpty()
0x28c: PushEmpty(object)
0x28d: Stack[-1] = Stack[-2]
0x28e: Push(-1, 0); TaskCall(0)
0x28f: Call 0x0

0x290: Pop(-1, 0); TaskReturn
0x291: Pop(1)
0x292: Return(); Pop(0)

0x293: PushEmpty()
0x294: Push((int) 20)
0x295: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x296: IF (Stack[-1] == 0) GOTO 0x299; Pop(1)

0x297: @ ResetAAS()
0x298: Pop(0)
0x299: Return(); Pop(0)

0x29a: PushEmpty(object, int, object, int)
0x29b: PushEmpty(bool, object)
0x29c: Stack[-1] = Stack[-7]
0x29d: Call 0x251

0x29e: Pop(1)
0x29f: Pop(1); Push((bool) Stack[-1] == 0)
0x2a0: IF (Stack[-1] == 0) GOTO 0x2a3; Pop(1)

0x2a1: Stack[-6] = (bool) 0
0x2a2: Return(); Pop(4)

0x2a3: @ GetActiveScene(Stack[-2])
0x2a4: Pop(0)
0x2a5: PushEmpty(bool)
0x2a6: Stack[-1] = (bool) 0
0x2a7: Pop(0); Push(( Stack[-3] != 0 )
0x2a8: IF (Stack[-1] == 0) GOTO 0x2ae; Pop(1)

0x2a9: Push("GetCurrentRegion")
0x2aa: Push((int) 1)
0x2ab: Pop(2); Push(IsFuncExist(Stack[-5], Stack[-2], Stack[-1]))
0x2ac: IF (Stack[-1] == 0) GOTO 0x2ae; Pop(1)

0x2ad: Stack[-1] = (bool) 1
0x2ae: IF (Stack[-1] == 0) GOTO 0x2b4; Pop(1)

0x2af: @@ GetCurrentRegion(Stack[-1])
0x2b0: Pop(0)
0x2b1: Push(GlobalVars[0])
0x2b2: Stack[-7] = Stack[-2] == Stack[-1]; Pop(1);
0x2b3: Return(); Pop(4)

0x2b4: Stack[-6] = (bool) 0
0x2b5: Return(); Pop(4)

0x2b6: Stack[-2] = 0
0x2b7: PushEmpty()
0x2b8: Return(); Pop(0)

