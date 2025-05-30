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
	add
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
	KillTimer (1 args)
	Sleep (2 args)
	FindActor (2 args)
	IsPlayerActor (2 args)
	GetScene (1 args)
	self (1 args)
	CreateFloatVector (1 args)
	SendWorldWndMessage (2 args)
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
		EVENT_10 Op = 0xb8 Vars = (object)
		EVENT_28 Op = 0xbc Vars = ()
		EVENT_41 Op = 0xc6 Vars = (object)
	GTASK_3 Vars = (bool, object) Params = 0
		EVENT_7 Op = 0xed Vars = (int)
		EVENT_1 Op = 0x106 Vars = (object)
		EVENT_10 Op = 0x193 Vars = (object)
		EVENT_41 Op = 0x19e Vars = (object)
	GTASK_4  Params = 0
		EVENT_1 Op = 0x1b2 Vars = (object)
		EVENT_7 Op = 0x1bd Vars = (int)

Events:
EVENT_41 Op = 0x2eb Vars = (object)

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
0x15: Call2 0x271

0x16: Pop(1)
0x17: IF (Stack[-1] == 0) GOTO 0x34; Pop(1)

0x18: PushEmpty(float, cvector, cvector)
0x19: PushEmpty(cvector)
0x1a: Call2 0x1c3

0x1b: Stack[-3] = Stack[-1]
0x1c: Pop(1)
0x1d: PushEmpty(cvector, object)
0x1e: Stack[-1] = Stack[-14]
0x1f: Call2 0x1c8

0x20: Stack[-3] = Stack[-2]
0x21: Pop(2)
0x22: Call2 0x28f

0x23: Pop(2)
0x24: Push((float)90000.0)
0x25: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x26: IF (Stack[-1] == 0) GOTO 0x34; Pop(1)

0x27: Push("attack")
0x28: @ PlaySound(Stack[-1])
0x29: Pop(1)
0x2a: PushEmpty(float, object, float)
0x2b: Stack[-2] = Stack[-12]
0x2c: Stack[-1] = (float) 0.25
0x2d: Call2 0x203

0x2e: Stack[-4] = Stack[-3]
0x2f: Pop(3)
0x30: Push((int) 5)
0x31: Push((float)0.25)
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
0x3f: Call2 0x289

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
0x4c: Call2 0x78

0x4d: Pop(-0, 2); TaskReturn
0x4e: Pop(0)
0x4f: PushEmpty()
0x50: Push(-0, 2); TaskCall(3)
0x51: Call2 0xd7

0x52: Pop(-0, 2); TaskReturn
0x53: Pop(0)
0x54: GOTO 0x4a

0x55: Return(); Pop(0)

0x56: PushEmpty()
0x57: PushEmpty(int)
0x58: Stack[-1] = Stack[-2]
0x59: Call2 0x2bd

0x5a: Pop(1)
0x5b: Push((int) 20)
0x5c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5d: IF (Stack[-1] == 0) GOTO 0x69; Pop(1)

0x5e: PushEmpty(bool, object)
0x5f: PushEmpty(object)
0x60: Call2 0x1d5

0x61: Stack[-2] = Stack[-1]
0x62: Pop(1)
0x63: Call2 0x2c4

0x64: Pop(1)
0x65: IF (Stack[-1] == 0) GOTO 0x69; Pop(1)

0x66: PushEmpty()
0x67: Call2 0xbf

0x68: Pop(0)
0x69: Return(); Pop(0)

0x6a: PushEmpty()
0x6b: PushEmpty(bool, object)
0x6c: Stack[-1] = Stack[-3]
0x6d: Call2 0x2a8

0x6e: Pop(1)
0x6f: IF (Stack[-1] == 0) GOTO 0x77; Pop(1)

0x70: PushEmpty()
0x71: Call2 0xbf

0x72: Pop(0)
0x73: PushEmpty(object)
0x74: Stack[-1] = Stack[-2]
0x75: Call2 0x2b5

0x76: Pop(1)
0x77: Return(); Pop(0)

0x78: PushEmpty(float, cvector, cvector, bool, object, bool, float, cvector, cvector, bool, object, bool)
0x79: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x7a: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x7b: Push((float)0.5)
0x7c: @ rand(Stack[-7], Stack[-1])
0x7d: Pop(1)
0x7e: @ Sleep(Stack[-6])
0x7f: Pop(0)
0x80: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x81: IF (Stack[-1] == 0) GOTO 0xb2; Pop(1)

0x82: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == 0)
0x83: IF (Stack[-1] == 0) GOTO 0x93; Pop(1)

0x84: @ GetPosition(Stack[-4])
0x85: Pop(0)
0x86: PushEmpty(float)
0x87: Call2 0xb3

0x88: Pop(0)
0x89: @ GetRandomPFPointInCircle(Stack[-6], Stack[-5], Stack[-1], Stack[-4])
0x8a: Pop(1)
0x8b: Push(Stack[-3])
0x8c: IF (Stack[-1] == 0) GOTO 0x8e; Pop(1)

0x8d: GOTO 0x92

0x8e: Push((int) 1)
0x8f: @ Sleep(Stack[-1])
0x90: Pop(1)
0x91: GOTO 0x84

0x92: GOTO 0x94

0x93: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x94: PushEmpty(object, cvector)
0x95: Stack[-1] = Stack[-7]
0x96: Call2 0xd1

0x97: Stack[-4] = Stack[-2]
0x98: Pop(2)
0x99: Pop(0); Push(( Stack[-2] != 0 )
0x9a: IF (Stack[-1] == 0) GOTO 0xad; Pop(1)

0x9b: @ RotatePath(Stack[-2], Stack[-1])
0x9c: Pop(0)
0x9d: Push(Stack[-1])
0x9e: IF (Stack[-1] == 0) GOTO 0xac; Pop(1)

0x9f: PushEmpty(bool)
0xa0: Call2 0xcf

0xa1: Pop(0)
0xa2: @ FollowPath(Stack[-3], Stack[-1], Stack[-2])
0xa3: Pop(1)
0xa4: Stack[-2] = 0
0xa5: Push(Stack[-1])
0xa6: IF (Stack[-1] == 0) GOTO 0xac; Pop(1)

0xa7: PushEmpty()
0xa8: Push(-0, 0); TaskCall(4)
0xa9: Call2 0x1ab

0xaa: Pop(-0, 0); TaskReturn
0xab: Pop(0)
0xac: GOTO 0xb0

0xad: Push((int) 1)
0xae: @ Sleep(Stack[-1])
0xaf: Pop(1)
0xb0: Stack[-2] = 0
0xb1: GOTO 0x80

0xb2: Return(); Pop(12)

0xb3: PushEmpty(float, float)
0xb4: @ GetCameraFarDistance(Stack[-1])
0xb5: Pop(0)
0xb6: Stack[-3] = Stack[-1]
0xb7: Return(); Pop(2)

0xb8: PushEmpty()
0xb9: @ RequestClearPath(Stack[-1])
0xba: Pop(0)
0xbb: Return(); Pop(0)

0xbc: @ Stop()
0xbd: Pop(0)
0xbe: Return(); Pop(0)

0xbf: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0xc0: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0xc1: @ Stop()
0xc2: Pop(0)
0xc3: @ StopGroup0()
0xc4: Pop(0)
0xc5: Return(); Pop(0)

0xc6: PushEmpty()
0xc7: PushEmpty()
0xc8: Call2 0xbf

0xc9: Pop(0)
0xca: PushEmpty(object)
0xcb: Stack[-1] = Stack[-2]
0xcc: Call2 0x2eb

0xcd: Pop(1)
0xce: Return(); Pop(0)

0xcf: Stack[-1] = (bool) 0
0xd0: Return(); Pop(0)

0xd1: PushEmpty(object, object)
0xd2: @ FindShiftedPathTo(Stack[-1], Stack[-3])
0xd3: Pop(0)
0xd4: Stack[-4] = Stack[-1]
0xd5: Return(); Pop(2)

0xd6: Stack[-1] = 0
0xd7: PushEmpty(object, object)
0xd8: PushEmpty(object)
0xd9: Call2 0x1d5

0xda: Stack[-2] = Stack[-1]
0xdb: Pop(1)
0xdc: PushEmpty(bool, object)
0xdd: Stack[-1] = Stack[-3]
0xde: Call2 0x2c4

0xdf: Pop(1)
0xe0: Pop(1); Push((bool) Stack[-1] == 0)
0xe1: IF (Stack[-1] == 0) GOTO 0xe3; Pop(1)

0xe2: Return(); Pop(2)

0xe3: PushEmpty(bool, object, float, float, bool, bool)
0xe4: Stack[-5] = Stack[-7]
0xe5: Stack[-4] = (int) 100
0xe6: Stack[-3] = (int) 0
0xe7: Stack[-2] = (bool) 0
0xe8: Stack[-1] = (bool) 0
0xe9: Call2 0x11b

0xea: Pop(6)
0xeb: Return(); Pop(2)

0xec: Stack[-1] = 0
0xed: PushEmpty()
0xee: PushEmpty(int)
0xef: Stack[-1] = Stack[-2]
0xf0: Call2 0x2bd

0xf1: Pop(1)
0xf2: PushEmpty(int)
0xf3: Stack[-1] = Stack[-2]
0xf4: Call2 0x181

0xf5: Pop(1)
0xf6: Push((int) 20)
0xf7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf8: IF (Stack[-1] == 0) GOTO 0x105; Pop(1)

0xf9: PushEmpty(bool, object)
0xfa: PushEmpty(object)
0xfb: Call2 0x1d5

0xfc: Stack[-2] = Stack[-1]
0xfd: Pop(1)
0xfe: Call2 0x2c4

0xff: Pop(1)
0x100: Pop(1); Push((bool) Stack[-1] == 0)
0x101: IF (Stack[-1] == 0) GOTO 0x105; Pop(1)

0x102: PushEmpty()
0x103: Call2 0x197

0x104: Pop(0)
0x105: Return(); Pop(0)

0x106: PushEmpty()
0x107: PushEmpty(bool, object)
0x108: Stack[-1] = Stack[-3]
0x109: Call2 0x2a8

0x10a: Pop(1)
0x10b: IF (Stack[-1] == 0) GOTO 0x113; Pop(1)

0x10c: PushEmpty()
0x10d: Call2 0x197

0x10e: Pop(0)
0x10f: PushEmpty(object)
0x110: Stack[-1] = Stack[-2]
0x111: Call2 0x2b5

0x112: Pop(1)
0x113: Return(); Pop(0)

0x114: PushEmpty()
0x115: PushEmpty(bool, object)
0x116: Stack[-1] = Stack[-3]
0x117: Call2 0x2c4

0x118: Stack[-4] = Stack[-2]
0x119: Pop(2)
0x11a: Return(); Pop(0)

0x11b: PushEmpty(bool, bool, object, cvector, cvector, cvector, float, object, bool, bool, object, cvector, cvector, cvector, float, object)
0x11c: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x11d: Stack[1 + Tasks[-1].StackPointer] = Stack[-21]
0x11e: Stack[-7] = Stack[-17]
0x11f: PushEmpty(bool, object)
0x120: Stack[-1] = Stack[-23]
0x121: Call2 0x114

0x122: Pop(1)
0x123: Pop(1); Push((bool) Stack[-1] == 0)
0x124: IF (Stack[-1] == 0) GOTO 0x127; Pop(1)

0x125: Stack[-22] = (bool) 0
0x126: Return(); Pop(16)

0x127: @@ GetPosition(Stack[-5])
0x128: Pop(0)
0x129: @ GetPosition(Stack[-4])
0x12a: Pop(0)
0x12b: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x12c: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x12d: PushEmpty(bool)
0x12e: Stack[-1] = (bool) 0
0x12f: Push((int) 0)
0x130: Pop(1); Push((bool) Stack[-21] > Stack[-1])
0x131: IF (Stack[-1] == 0) GOTO 0x136; Pop(1)

0x132: Pop(0); Push(Stack[-20] * Stack[-20]);
0x133: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x134: IF (Stack[-1] == 0) GOTO 0x136; Pop(1)

0x135: Stack[-1] = (bool) 1
0x136: IF (Stack[-1] == 0) GOTO 0x13b; Pop(1)

0x137: @ Stop()
0x138: Pop(0)
0x139: Stack[-22] = (bool) 0
0x13a: Return(); Pop(16)

0x13b: Pop(0); Push(Stack[-20] * Stack[-20]);
0x13c: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x13d: IF (Stack[-1] == 0) GOTO 0x179; Pop(1)

0x13e: @@ GetPFPosition(Stack[-5])
0x13f: Pop(0)
0x140: @ FindPathTo(Stack[-1], Stack[-5])
0x141: Pop(0)
0x142: Pop(0); Push(( Stack[-1] != 0 )
0x143: IF (Stack[-1] == 0) GOTO 0x146; Pop(1)

0x144: Stack[-6] = Stack[-1]
0x145: Stack[-1] = 0
0x146: Pop(0); Push(( Stack[-6] != 0 )
0x147: IF (Stack[-1] == 0) GOTO 0x167; Pop(1)

0x148: Push(Stack[-7])
0x149: IF (Stack[-1] == 0) GOTO 0x150; Pop(1)

0x14a: Stack[-7] = (bool) 0
0x14b: @ RotatePath(Stack[-6], Stack[-8])
0x14c: Pop(0)
0x14d: Pop(0); Push((bool) Stack[-8] == 0)
0x14e: IF (Stack[-1] == 0) GOTO 0x150; Pop(1)

0x14f: GOTO 0x17f

0x150: Push((int) 0)
0x151: Push((float)0.3)
0x152: @ SetTimer(Stack[-2], Stack[-1])
0x153: Pop(2)
0x154: PushEmpty(string)
0x155: Call2 0x1a7

0x156: Pop(0)
0x157: PushEmpty(string)
0x158: Call2 0x1a9

0x159: Pop(0)
0x15a: @ FollowPath(Stack[-8], Stack[-20], Stack[-10], Stack[-2], Stack[-1])
0x15b: Pop(2)
0x15c: Pop(0); Push((bool) Stack[-8] == 0)
0x15d: IF (Stack[-1] == 0) GOTO 0x165; Pop(1)

0x15e: Push( Stack[0 + Tasks[-1].StackPointer] )
0x15f: IF (Stack[-1] == 0) GOTO 0x163; Pop(1)

0x160: Stack[-6] = 0
0x161: GOTO 0x17f

0x162: GOTO 0x164

0x163: GOTO 0x17e

0x164: GOTO 0x166

0x165: Stack[-6] = 0
0x166: GOTO 0x177

0x167: Push((int) 0)
0x168: @ KillTimer(Stack[-1])
0x169: Pop(1)
0x16a: Push((float)0.5)
0x16b: @ Sleep(Stack[-1], Stack[-9])
0x16c: Pop(1)
0x16d: Pop(0); Push((bool) Stack[-8] == 0)
0x16e: IF (Stack[-1] == 0) GOTO 0x173; Pop(1)

0x16f: Push( Stack[0 + Tasks[-1].StackPointer] )
0x170: IF (Stack[-1] == 0) GOTO 0x173; Pop(1)

0x171: Stack[-6] = 0
0x172: GOTO 0x17f

0x173: Push((int) 0)
0x174: Push((float)0.3)
0x175: @ SetTimer(Stack[-2], Stack[-1])
0x176: Pop(2)
0x177: Stack[-1] = 0
0x178: GOTO 0x17d

0x179: Push((int) 0)
0x17a: @ KillTimer(Stack[-1])
0x17b: Pop(1)
0x17c: GOTO 0x17f

0x17d: Stack[-6] = 0
0x17e: GOTO 0x11f

0x17f: Stack[-22] = !Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x180: Return(); Pop(16)

0x181: PushEmpty()
0x182: Push((int) 0)
0x183: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x184: IF (Stack[-1] == 0) GOTO 0x186; Pop(1)

0x185: Return(); Pop(0)

0x186: PushEmpty(bool, object)
0x187: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x188: Call2 0x114

0x189: Pop(1)
0x18a: Pop(1); Push((bool) Stack[-1] == 0)
0x18b: IF (Stack[-1] == 0) GOTO 0x18d; Pop(1)

0x18c: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x18d: Push((int) 0)
0x18e: @ KillTimer(Stack[-1])
0x18f: Pop(1)
0x190: @ Stop()
0x191: Pop(0)
0x192: Return(); Pop(0)

0x193: PushEmpty()
0x194: @ RequestClearPath(Stack[-1])
0x195: Pop(0)
0x196: Return(); Pop(0)

0x197: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x198: Push((int) 0)
0x199: @ KillTimer(Stack[-1])
0x19a: Pop(1)
0x19b: @ Stop()
0x19c: Pop(0)
0x19d: Return(); Pop(0)

0x19e: PushEmpty()
0x19f: PushEmpty()
0x1a0: Call2 0x197

0x1a1: Pop(0)
0x1a2: PushEmpty(object)
0x1a3: Stack[-1] = Stack[-2]
0x1a4: Call2 0x2eb

0x1a5: Pop(1)
0x1a6: Return(); Pop(0)

0x1a7: Stack[-1] = "walk"
0x1a8: Return(); Pop(0)

0x1a9: Stack[-1] = "run"
0x1aa: Return(); Pop(0)

0x1ab: PushEmpty(float, float)
0x1ac: Push((int) 30)
0x1ad: @ rand(Stack[-2], Stack[-1])
0x1ae: Pop(1)
0x1af: @ Sleep(Stack[-1])
0x1b0: Pop(0)
0x1b1: Return(); Pop(2)

0x1b2: PushEmpty()
0x1b3: PushEmpty(bool, object)
0x1b4: Stack[-1] = Stack[-3]
0x1b5: Call2 0x2a8

0x1b6: Pop(1)
0x1b7: IF (Stack[-1] == 0) GOTO 0x1bc; Pop(1)

0x1b8: PushEmpty(object)
0x1b9: Stack[-1] = Stack[-2]
0x1ba: Call2 0x2b5

0x1bb: Pop(1)
0x1bc: Return(); Pop(0)

0x1bd: PushEmpty()
0x1be: PushEmpty(int)
0x1bf: Stack[-1] = Stack[-2]
0x1c0: Call2 0x2bd

0x1c1: Pop(1)
0x1c2: Return(); Pop(0)

0x1c3: PushEmpty(cvector, cvector)
0x1c4: @ GetPosition(Stack[-1])
0x1c5: Pop(0)
0x1c6: Stack[-3] = Stack[-1]
0x1c7: Return(); Pop(2)

0x1c8: PushEmpty(cvector, cvector)
0x1c9: @@ GetPosition(Stack[-1])
0x1ca: Pop(0)
0x1cb: Stack[-4] = Stack[-1]
0x1cc: Return(); Pop(2)

0x1cd: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x1ce: @ GetPosition(Stack[-3])
0x1cf: Pop(0)
0x1d0: @@ GetPosition(Stack[-2])
0x1d1: Pop(0)
0x1d2: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x1d3: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x1d4: Return(); Pop(6)

0x1d5: PushEmpty(object, object)
0x1d6: Push("player")
0x1d7: @ FindActor(Stack[-2], Stack[-1])
0x1d8: Pop(1)
0x1d9: Stack[-3] = Stack[-1]
0x1da: Return(); Pop(2)

0x1db: Stack[-1] = 0
0x1dc: PushEmpty(bool, bool)
0x1dd: @ IsPlayerActor(Stack[-3], Stack[-1])
0x1de: Pop(0)
0x1df: Stack[-4] = Stack[-1]
0x1e0: Return(); Pop(2)

0x1e1: PushEmpty(bool, bool)
0x1e2: Push("HasProperty")
0x1e3: Push((int) 2)
0x1e4: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x1e5: Pop(1); Push((bool) Stack[-1] == 0)
0x1e6: IF (Stack[-1] == 0) GOTO 0x1e9; Pop(1)

0x1e7: Stack[-5] = (bool) 0
0x1e8: Return(); Pop(2)

0x1e9: @@ HasProperty(Stack[-3], Stack[-1])
0x1ea: Pop(0)
0x1eb: Stack[-5] = Stack[-1]
0x1ec: Return(); Pop(2)

0x1ed: PushEmpty(float, float)
0x1ee: PushEmpty(bool, object, string)
0x1ef: Stack[-2] = Stack[-10]
0x1f0: Stack[-1] = Stack[-9]
0x1f1: Call2 0x1e1

0x1f2: Pop(2)
0x1f3: Pop(1); Push((bool) Stack[-1] == 0)
0x1f4: IF (Stack[-1] == 0) GOTO 0x1f7; Pop(1)

0x1f5: Stack[-8] = (bool) 0
0x1f6: Return(); Pop(2)

0x1f7: @@ GetProperty(Stack[-6], Stack[-1])
0x1f8: Pop(0)
0x1f9: PushEmpty(float, float, float, float)
0x1fa: Stack[-3] = Stack[-5] + Stack[-9]; Pop(0);
0x1fb: Stack[-2] = Stack[-8]
0x1fc: Stack[-1] = Stack[-7]
0x1fd: Call2 0x293

0x1fe: Pop(3)
0x1ff: @@ SetProperty(Stack[-7], Stack[-1])
0x200: Pop(1)
0x201: Stack[-8] = (bool) 1
0x202: Return(); Pop(2)

0x203: PushEmpty(float, float, float, float)
0x204: PushEmpty(bool, object, string)
0x205: Stack[-2] = Stack[-9]
0x206: Stack[-1] = "disease"
0x207: Call2 0x1e1

0x208: Pop(2)
0x209: Pop(1); Push((bool) Stack[-1] == 0)
0x20a: IF (Stack[-1] == 0) GOTO 0x20d; Pop(1)

0x20b: Stack[-7] = (int) 0
0x20c: Return(); Pop(4)

0x20d: Stack[-2] = (int) 0
0x20e: PushEmpty(bool, object, string)
0x20f: Stack[-2] = Stack[-9]
0x210: Stack[-1] = "armor_disease"
0x211: Call2 0x1e1

0x212: Pop(2)
0x213: IF (Stack[-1] == 0) GOTO 0x219; Pop(1)

0x214: Push("armor_disease")
0x215: @@ GetProperty(Stack[-1], Stack[-3])
0x216: Pop(1)
0x217: Push((int) 100)
0x218: Stack[-3] = Stack[-3] / Stack[-1]; Pop(1);
0x219: PushEmpty(bool, object, string)
0x21a: Stack[-2] = Stack[-9]
0x21b: Stack[-1] = "immunity"
0x21c: Call2 0x1e1

0x21d: Pop(2)
0x21e: IF (Stack[-1] == 0) GOTO 0x22b; Pop(1)

0x21f: Push("immunity")
0x220: @@ GetProperty(Stack[-1], Stack[-2])
0x221: Pop(1)
0x222: Stack[-2] = Stack[-2] + Stack[-1]; Pop(0);
0x223: PushEmpty(bool, object, string, float, float, float)
0x224: Stack[-5] = Stack[-12]
0x225: Stack[-4] = "immunity"
0x226: Stack[-3] = -Stack[-11]; Pop(0);
0x227: Stack[-2] = (int) 0
0x228: Stack[-1] = (int) 1
0x229: Call2 0x1ed

0x22a: Pop(6)
0x22b: Push((int) 1)
0x22c: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x22d: IF (Stack[-1] == 0) GOTO 0x230; Pop(1)

0x22e: Stack[-7] = (float) 0.0
0x22f: Return(); Pop(4)

0x230: Push((int) 1)
0x231: Pop(1); Push(Stack[-1] - Stack[-3]);
0x232: Push((int) 2)
0x233: Pop(2); Push(Stack[-2] / Stack[-1]);
0x234: Stack[-6] = Stack[-6] * Stack[-1]; Pop(1);
0x235: PushEmpty(bool, object, string, float, float, float)
0x236: Stack[-5] = Stack[-12]
0x237: Stack[-4] = "disease"
0x238: Stack[-3] = Stack[-11]
0x239: Stack[-2] = (int) 0
0x23a: Stack[-1] = (int) 1
0x23b: Call2 0x1ed

0x23c: Pop(6)
0x23d: PushEmpty(bool, object)
0x23e: Stack[-1] = Stack[-8]
0x23f: Call2 0x1dc

0x240: Pop(1)
0x241: IF (Stack[-1] == 0) GOTO 0x246; Pop(1)

0x242: PushEmpty(float)
0x243: Stack[-1] = Stack[-6]
0x244: Call2 0x29e

0x245: Pop(1)
0x246: Stack[-7] = Stack[-5]
0x247: Return(); Pop(4)

0x248: PushEmpty(bool, bool)
0x249: @@ IsDead(Stack[-1])
0x24a: Pop(0)
0x24b: Stack[-4] = Stack[-1]
0x24c: Return(); Pop(2)

0x24d: PushEmpty(object, object, object, object)
0x24e: Pop(0); Push((bool) Stack[-5] == 0)
0x24f: IF (Stack[-1] == 0) GOTO 0x252; Pop(1)

0x250: Stack[-6] = (bool) 0
0x251: Return(); Pop(4)

0x252: PushEmpty(bool)
0x253: Stack[-1] = (bool) 0
0x254: Push("IsDead")
0x255: Push((int) 1)
0x256: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x257: IF (Stack[-1] == 0) GOTO 0x25e; Pop(1)

0x258: PushEmpty(bool, object)
0x259: Stack[-1] = Stack[-8]
0x25a: Call2 0x248

0x25b: Pop(1)
0x25c: IF (Stack[-1] == 0) GOTO 0x25e; Pop(1)

0x25d: Stack[-1] = (bool) 1
0x25e: IF (Stack[-1] == 0) GOTO 0x261; Pop(1)

0x25f: Stack[-6] = (bool) 0
0x260: Return(); Pop(4)

0x261: @ GetScene(Stack[-2])
0x262: Pop(0)
0x263: Pop(0); Push((bool) Stack[-2] == 0)
0x264: IF (Stack[-1] == 0) GOTO 0x267; Pop(1)

0x265: Stack[-6] = (bool) 0
0x266: Return(); Pop(4)

0x267: @@ GetScene(Stack[-1])
0x268: Pop(0)
0x269: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x26a: IF (Stack[-1] == 0) GOTO 0x26d; Pop(1)

0x26b: Stack[-6] = (bool) 0
0x26c: Return(); Pop(4)

0x26d: Stack[-6] = (bool) 1
0x26e: Return(); Pop(4)

0x26f: Stack[-1] = 0
0x270: Stack[-2] = 0
0x271: PushEmpty(int, int)
0x272: PushEmpty(bool, object)
0x273: Stack[-1] = Stack[-5]
0x274: Call2 0x24d

0x275: Pop(1)
0x276: Pop(1); Push((bool) Stack[-1] == 0)
0x277: IF (Stack[-1] == 0) GOTO 0x27a; Pop(1)

0x278: Stack[-4] = (bool) 0
0x279: Return(); Pop(2)

0x27a: PushEmpty(bool, object, string)
0x27b: Stack[-2] = Stack[-6]
0x27c: Stack[-1] = "noaccess"
0x27d: Call2 0x1e1

0x27e: Pop(2)
0x27f: Pop(1); Push((bool) Stack[-1] == 0)
0x280: IF (Stack[-1] == 0) GOTO 0x283; Pop(1)

0x281: Stack[-4] = (bool) 1
0x282: Return(); Pop(2)

0x283: Push("noaccess")
0x284: @@ GetProperty(Stack[-1], Stack[-2])
0x285: Pop(1)
0x286: Push((int) 0)
0x287: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x288: Return(); Pop(2)

0x289: PushEmpty(object, object)
0x28a: @ self(Stack[-1])
0x28b: Pop(0)
0x28c: Stack[-3] = Stack[-1]
0x28d: Return(); Pop(2)

0x28e: Stack[-1] = 0
0x28f: PushEmpty(cvector, cvector)
0x290: Stack[-1] = Stack[-3] - Stack[-4]; Pop(0);
0x291: Stack[-5] = Stack[-1] | Stack[-1]; Pop(0);
0x292: Return(); Pop(2)

0x293: PushEmpty()
0x294: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x295: IF (Stack[-1] == 0) GOTO 0x298; Pop(1)

0x296: Stack[-4] = Stack[-2]
0x297: Return(); Pop(0)

0x298: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x299: IF (Stack[-1] == 0) GOTO 0x29c; Pop(1)

0x29a: Stack[-4] = Stack[-1]
0x29b: Return(); Pop(0)

0x29c: Stack[-4] = Stack[-3]
0x29d: Return(); Pop(0)

0x29e: PushEmpty(object, object)
0x29f: @ CreateFloatVector(Stack[-1])
0x2a0: Pop(0)
0x2a1: @@ add(Stack[-3])
0x2a2: Pop(0)
0x2a3: Push((int) 14)
0x2a4: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x2a5: Pop(1)
0x2a6: Return(); Pop(2)

0x2a7: Stack[-1] = 0
0x2a8: PushEmpty(bool, bool)
0x2a9: @ IsPlayerActor(Stack[-3], Stack[-1])
0x2aa: Pop(0)
0x2ab: Stack[-4] = (bool) 0
0x2ac: Push(Stack[-1])
0x2ad: IF (Stack[-1] == 0) GOTO 0x2b4; Pop(1)

0x2ae: PushEmpty(bool, object)
0x2af: Stack[-1] = Stack[-5]
0x2b0: Call2 0x271

0x2b1: Pop(1)
0x2b2: IF (Stack[-1] == 0) GOTO 0x2b4; Pop(1)

0x2b3: Stack[-4] = (bool) 1
0x2b4: Return(); Pop(2)

0x2b5: PushEmpty()
0x2b6: PushEmpty(object)
0x2b7: Stack[-1] = Stack[-2]
0x2b8: Push(-1, 0); TaskCall(0)
0x2b9: Call2 0x0

0x2ba: Pop(-1, 0); TaskReturn
0x2bb: Pop(1)
0x2bc: Return(); Pop(0)

0x2bd: PushEmpty()
0x2be: Push((int) 20)
0x2bf: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2c0: IF (Stack[-1] == 0) GOTO 0x2c3; Pop(1)

0x2c1: @ ResetAAS()
0x2c2: Pop(0)
0x2c3: Return(); Pop(0)

0x2c4: PushEmpty(object, int, object, int)
0x2c5: PushEmpty(bool, object)
0x2c6: Stack[-1] = Stack[-7]
0x2c7: Call2 0x271

0x2c8: Pop(1)
0x2c9: Pop(1); Push((bool) Stack[-1] == 0)
0x2ca: IF (Stack[-1] == 0) GOTO 0x2cd; Pop(1)

0x2cb: Stack[-6] = (bool) 0
0x2cc: Return(); Pop(4)

0x2cd: @ GetActiveScene(Stack[-2])
0x2ce: Pop(0)
0x2cf: PushEmpty(bool)
0x2d0: Stack[-1] = (bool) 0
0x2d1: Pop(0); Push(( Stack[-3] != 0 )
0x2d2: IF (Stack[-1] == 0) GOTO 0x2d8; Pop(1)

0x2d3: Push("GetCurrentRegion")
0x2d4: Push((int) 1)
0x2d5: Pop(2); Push(IsFuncExist(Stack[-5], Stack[-2], Stack[-1]))
0x2d6: IF (Stack[-1] == 0) GOTO 0x2d8; Pop(1)

0x2d7: Stack[-1] = (bool) 1
0x2d8: IF (Stack[-1] == 0) GOTO 0x2e8; Pop(1)

0x2d9: @@ GetCurrentRegion(Stack[-1])
0x2da: Pop(0)
0x2db: Stack[-6] = (bool) 0
0x2dc: Push(GlobalVars[0])
0x2dd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2de: IF (Stack[-1] == 0) GOTO 0x2e7; Pop(1)

0x2df: PushEmpty(float, object)
0x2e0: Stack[-1] = Stack[-7]
0x2e1: Call2 0x1cd

0x2e2: Pop(1)
0x2e3: Push((int) 4000000)
0x2e4: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x2e5: IF (Stack[-1] == 0) GOTO 0x2e7; Pop(1)

0x2e6: Stack[-6] = (bool) 1
0x2e7: Return(); Pop(4)

0x2e8: Stack[-6] = (bool) 0
0x2e9: Return(); Pop(4)

0x2ea: Stack[-2] = 0
0x2eb: PushEmpty()
0x2ec: Return(); Pop(0)

