GlobalVarCount = 0

Strings:
	breath
	GetPFPosition
	attack
	player
	GetPosition
	walk
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
	FindActor (2 args)
	GetPosition (1 args)
	Stop (0 args)
	FindPathTo (2 args)
	RotatePath (2 args)
	FollowPath (5 args)
	KillTimer (1 args)
	Sleep (2 args)
	RequestClearPath (1 args)
	GetScene (1 args)
	self (1 args)
	Hold (0 args)

RunOp = 0x44
RunTask = 1

GlobalTasks: 
	GTASK_0  Params = 1
	GTASK_1  Params = 0
	GTASK_2 Vars = (bool, object) Params = 2
		EVENT_7 Op = 0x76 Vars = (int)
		EVENT_10 Op = 0xf8 Vars = (object)
		EVENT_41 Op = 0x103 Vars = (object)

Events:
EVENT_41 Op = 0x1d8 Vars = (object)
EVENT_7 Op = 0x1da Vars = (int)
EVENT_6 Op = 0x1f3 Vars = ()

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
0x15: Call 0x1ab

0x16: Pop(1)
0x17: IF (Stack[-1] == 0) GOTO 0x34; Pop(1)

0x18: PushEmpty(float, cvector, cvector)
0x19: PushEmpty(cvector)
0x1a: Call 0x117

0x1b: Stack[-3] = Stack[-1]
0x1c: Pop(1)
0x1d: PushEmpty(cvector, object)
0x1e: Stack[-1] = Stack[-14]
0x1f: Call 0x11c

0x20: Stack[-3] = Stack[-2]
0x21: Pop(2)
0x22: Call 0x1c9

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
0x2d: Call 0x143

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
0x3f: Call 0x1c3

0x40: Pop(0)
0x41: @ RemoveActor(Stack[-1])
0x42: Pop(1)
0x43: Return(); Pop(8)

0x44: PushEmpty(object, object)
0x45: @ PutOnGrid()
0x46: Pop(0)
0x47: Push((int) 1)
0x48: Push((int) 1)
0x49: @ FogLinear(Stack[-2], Stack[-1])
0x4a: Pop(2)
0x4b: Push((int) 10)
0x4c: Push((int) 20)
0x4d: @ SetTimer(Stack[-2], Stack[-1])
0x4e: Pop(2)
0x4f: Push("player")
0x50: @ FindActor(Stack[-2], Stack[-1])
0x51: Pop(1)
0x52: PushEmpty(bool, object)
0x53: Stack[-1] = Stack[-3]
0x54: Push(-2, 2); TaskCall(2)
0x55: Call 0x6b

0x56: Pop(-2, 2); TaskReturn
0x57: Pop(1)
0x58: Pop(1); Push((bool) Stack[-1] == 0)
0x59: IF (Stack[-1] == 0) GOTO 0x5e; Pop(1)

0x5a: Push((float)0.5)
0x5b: @ Sleep(Stack[-1])
0x5c: Pop(1)
0x5d: GOTO 0x52

0x5e: PushEmpty(object)
0x5f: Stack[-1] = Stack[-2]
0x60: Push(-1, 0); TaskCall(0)
0x61: Call 0x0

0x62: Pop(-1, 0); TaskReturn
0x63: Pop(1)
0x64: PushEmpty(object)
0x65: Call 0x1c3

0x66: Pop(0)
0x67: @ RemoveActor(Stack[-1])
0x68: Pop(1)
0x69: Return(); Pop(2)

0x6a: Stack[-1] = 0
0x6b: PushEmpty()
0x6c: PushEmpty(bool, object, float, float, bool, bool)
0x6d: Stack[-5] = Stack[-7]
0x6e: Stack[-4] = (int) 150
0x6f: Stack[-3] = (int) 0
0x70: Stack[-2] = (bool) 0
0x71: Stack[-1] = (bool) 0
0x72: Call 0x80

0x73: Stack[-8] = Stack[-6]
0x74: Pop(6)
0x75: Return(); Pop(0)

0x76: PushEmpty()
0x77: PushEmpty(int)
0x78: Stack[-1] = Stack[-2]
0x79: Call 0xe6

0x7a: Pop(1)
0x7b: PushEmpty(int)
0x7c: Stack[-1] = Stack[-2]
0x7d: Call 0x1da

0x7e: Pop(1)
0x7f: Return(); Pop(0)

0x80: PushEmpty(bool, bool, object, cvector, cvector, cvector, float, object, bool, bool, object, cvector, cvector, cvector, float, object)
0x81: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x82: Stack[1 + Tasks[-1].StackPointer] = Stack[-21]
0x83: Stack[-7] = Stack[-17]
0x84: PushEmpty(bool, object)
0x85: Stack[-1] = Stack[-23]
0x86: Call 0x10c

0x87: Pop(1)
0x88: Pop(1); Push((bool) Stack[-1] == 0)
0x89: IF (Stack[-1] == 0) GOTO 0x8c; Pop(1)

0x8a: Stack[-22] = (bool) 0
0x8b: Return(); Pop(16)

0x8c: @@ GetPosition(Stack[-5])
0x8d: Pop(0)
0x8e: @ GetPosition(Stack[-4])
0x8f: Pop(0)
0x90: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x91: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x92: PushEmpty(bool)
0x93: Stack[-1] = (bool) 0
0x94: Push((int) 0)
0x95: Pop(1); Push((bool) Stack[-21] > Stack[-1])
0x96: IF (Stack[-1] == 0) GOTO 0x9b; Pop(1)

0x97: Pop(0); Push(Stack[-20] * Stack[-20]);
0x98: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x99: IF (Stack[-1] == 0) GOTO 0x9b; Pop(1)

0x9a: Stack[-1] = (bool) 1
0x9b: IF (Stack[-1] == 0) GOTO 0xa0; Pop(1)

0x9c: @ Stop()
0x9d: Pop(0)
0x9e: Stack[-22] = (bool) 0
0x9f: Return(); Pop(16)

0xa0: Pop(0); Push(Stack[-20] * Stack[-20]);
0xa1: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0xa2: IF (Stack[-1] == 0) GOTO 0xde; Pop(1)

0xa3: @@ GetPFPosition(Stack[-5])
0xa4: Pop(0)
0xa5: @ FindPathTo(Stack[-1], Stack[-5])
0xa6: Pop(0)
0xa7: Pop(0); Push(( Stack[-1] != 0 )
0xa8: IF (Stack[-1] == 0) GOTO 0xab; Pop(1)

0xa9: Stack[-6] = Stack[-1]
0xaa: Stack[-1] = 0
0xab: Pop(0); Push(( Stack[-6] != 0 )
0xac: IF (Stack[-1] == 0) GOTO 0xcc; Pop(1)

0xad: Push(Stack[-7])
0xae: IF (Stack[-1] == 0) GOTO 0xb5; Pop(1)

0xaf: Stack[-7] = (bool) 0
0xb0: @ RotatePath(Stack[-6], Stack[-8])
0xb1: Pop(0)
0xb2: Pop(0); Push((bool) Stack[-8] == 0)
0xb3: IF (Stack[-1] == 0) GOTO 0xb5; Pop(1)

0xb4: GOTO 0xe4

0xb5: Push((int) 0)
0xb6: Push((float)0.3)
0xb7: @ SetTimer(Stack[-2], Stack[-1])
0xb8: Pop(2)
0xb9: PushEmpty(string)
0xba: Call 0x113

0xbb: Pop(0)
0xbc: PushEmpty(string)
0xbd: Call 0x115

0xbe: Pop(0)
0xbf: @ FollowPath(Stack[-8], Stack[-20], Stack[-10], Stack[-2], Stack[-1])
0xc0: Pop(2)
0xc1: Pop(0); Push((bool) Stack[-8] == 0)
0xc2: IF (Stack[-1] == 0) GOTO 0xca; Pop(1)

0xc3: Push( Stack[0 + Tasks[-1].StackPointer] )
0xc4: IF (Stack[-1] == 0) GOTO 0xc8; Pop(1)

0xc5: Stack[-6] = 0
0xc6: GOTO 0xe4

0xc7: GOTO 0xc9

0xc8: GOTO 0xe3

0xc9: GOTO 0xcb

0xca: Stack[-6] = 0
0xcb: GOTO 0xdc

0xcc: Push((int) 0)
0xcd: @ KillTimer(Stack[-1])
0xce: Pop(1)
0xcf: Push((float)0.5)
0xd0: @ Sleep(Stack[-1], Stack[-9])
0xd1: Pop(1)
0xd2: Pop(0); Push((bool) Stack[-8] == 0)
0xd3: IF (Stack[-1] == 0) GOTO 0xd8; Pop(1)

0xd4: Push( Stack[0 + Tasks[-1].StackPointer] )
0xd5: IF (Stack[-1] == 0) GOTO 0xd8; Pop(1)

0xd6: Stack[-6] = 0
0xd7: GOTO 0xe4

0xd8: Push((int) 0)
0xd9: Push((float)0.3)
0xda: @ SetTimer(Stack[-2], Stack[-1])
0xdb: Pop(2)
0xdc: Stack[-1] = 0
0xdd: GOTO 0xe2

0xde: Push((int) 0)
0xdf: @ KillTimer(Stack[-1])
0xe0: Pop(1)
0xe1: GOTO 0xe4

0xe2: Stack[-6] = 0
0xe3: GOTO 0x84

0xe4: Stack[-22] = !Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0xe5: Return(); Pop(16)

0xe6: PushEmpty()
0xe7: Push((int) 0)
0xe8: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0xe9: IF (Stack[-1] == 0) GOTO 0xeb; Pop(1)

0xea: Return(); Pop(0)

0xeb: PushEmpty(bool, object)
0xec: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xed: Call 0x10c

0xee: Pop(1)
0xef: Pop(1); Push((bool) Stack[-1] == 0)
0xf0: IF (Stack[-1] == 0) GOTO 0xf2; Pop(1)

0xf1: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0xf2: Push((int) 0)
0xf3: @ KillTimer(Stack[-1])
0xf4: Pop(1)
0xf5: @ Stop()
0xf6: Pop(0)
0xf7: Return(); Pop(0)

0xf8: PushEmpty()
0xf9: @ RequestClearPath(Stack[-1])
0xfa: Pop(0)
0xfb: Return(); Pop(0)

0xfc: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0xfd: Push((int) 0)
0xfe: @ KillTimer(Stack[-1])
0xff: Pop(1)
0x100: @ Stop()
0x101: Pop(0)
0x102: Return(); Pop(0)

0x103: PushEmpty()
0x104: PushEmpty()
0x105: Call 0xfc

0x106: Pop(0)
0x107: PushEmpty(object)
0x108: Stack[-1] = Stack[-2]
0x109: Call 0x1d8

0x10a: Pop(1)
0x10b: Return(); Pop(0)

0x10c: PushEmpty()
0x10d: PushEmpty(bool, object)
0x10e: Stack[-1] = Stack[-3]
0x10f: Call 0x1ab

0x110: Stack[-4] = Stack[-2]
0x111: Pop(2)
0x112: Return(); Pop(0)

0x113: Stack[-1] = "walk"
0x114: Return(); Pop(0)

0x115: Stack[-1] = "run"
0x116: Return(); Pop(0)

0x117: PushEmpty(cvector, cvector)
0x118: @ GetPosition(Stack[-1])
0x119: Pop(0)
0x11a: Stack[-3] = Stack[-1]
0x11b: Return(); Pop(2)

0x11c: PushEmpty(cvector, cvector)
0x11d: @@ GetPosition(Stack[-1])
0x11e: Pop(0)
0x11f: Stack[-4] = Stack[-1]
0x120: Return(); Pop(2)

0x121: PushEmpty(bool, bool)
0x122: Push("HasProperty")
0x123: Push((int) 2)
0x124: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x125: Pop(1); Push((bool) Stack[-1] == 0)
0x126: IF (Stack[-1] == 0) GOTO 0x129; Pop(1)

0x127: Stack[-5] = (bool) 0
0x128: Return(); Pop(2)

0x129: @@ HasProperty(Stack[-3], Stack[-1])
0x12a: Pop(0)
0x12b: Stack[-5] = Stack[-1]
0x12c: Return(); Pop(2)

0x12d: PushEmpty(float, float)
0x12e: PushEmpty(bool, object, string)
0x12f: Stack[-2] = Stack[-10]
0x130: Stack[-1] = Stack[-9]
0x131: Call 0x121

0x132: Pop(2)
0x133: Pop(1); Push((bool) Stack[-1] == 0)
0x134: IF (Stack[-1] == 0) GOTO 0x137; Pop(1)

0x135: Stack[-8] = (bool) 0
0x136: Return(); Pop(2)

0x137: @@ GetProperty(Stack[-6], Stack[-1])
0x138: Pop(0)
0x139: PushEmpty(float, float, float, float)
0x13a: Stack[-3] = Stack[-5] + Stack[-9]; Pop(0);
0x13b: Stack[-2] = Stack[-8]
0x13c: Stack[-1] = Stack[-7]
0x13d: Call 0x1cd

0x13e: Pop(3)
0x13f: @@ SetProperty(Stack[-7], Stack[-1])
0x140: Pop(1)
0x141: Stack[-8] = (bool) 1
0x142: Return(); Pop(2)

0x143: PushEmpty(int, float, float, int, float, float)
0x144: PushEmpty(bool, object, string)
0x145: Stack[-2] = Stack[-11]
0x146: Stack[-1] = "disease"
0x147: Call 0x121

0x148: Pop(2)
0x149: Pop(1); Push((bool) Stack[-1] == 0)
0x14a: IF (Stack[-1] == 0) GOTO 0x14d; Pop(1)

0x14b: Stack[-9] = (int) 0
0x14c: Return(); Pop(6)

0x14d: PushEmpty(bool, object, string)
0x14e: Stack[-2] = Stack[-11]
0x14f: Stack[-1] = "armor_disease"
0x150: Call 0x121

0x151: Pop(2)
0x152: IF (Stack[-1] == 0) GOTO 0x161; Pop(1)

0x153: Push("armor_disease")
0x154: @@ GetProperty(Stack[-1], Stack[-4])
0x155: Pop(1)
0x156: Push((int) 100)
0x157: Pop(1); Push((bool) Stack[-4] < Stack[-1])
0x158: IF (Stack[-1] == 0) GOTO 0x15f; Pop(1)

0x159: Push((int) 1)
0x15a: Push((float)100.0)
0x15b: Pop(1); Push(Stack[-5] / Stack[-1]);
0x15c: Pop(2); Push(Stack[-2] - Stack[-1]);
0x15d: Stack[-8] = Stack[-8] * Stack[-1]; Pop(1);
0x15e: GOTO 0x161

0x15f: Stack[-9] = (int) 0
0x160: Return(); Pop(6)

0x161: PushEmpty(bool, object, string)
0x162: Stack[-2] = Stack[-11]
0x163: Stack[-1] = "immunity"
0x164: Call 0x121

0x165: Pop(2)
0x166: IF (Stack[-1] == 0) GOTO 0x178; Pop(1)

0x167: Push("immunity")
0x168: @@ GetProperty(Stack[-1], Stack[-2])
0x169: Pop(1)
0x16a: Pop(0); Push((bool) Stack[-1] < Stack[-7])
0x16b: IF (Stack[-1] == 0) GOTO 0x172; Pop(1)

0x16c: Push("immunity")
0x16d: Push((int) 0)
0x16e: @@ SetProperty(Stack[-2], Stack[-1])
0x16f: Pop(2)
0x170: Stack[-2] = Stack[-7] - Stack[-1]; Pop(0);
0x171: GOTO 0x178

0x172: Push("immunity")
0x173: Pop(0); Push(Stack[-2] - Stack[-8]);
0x174: @@ SetProperty(Stack[-2], Stack[-1])
0x175: Pop(2)
0x176: Stack[-9] = Stack[-7]
0x177: Return(); Pop(6)

0x178: PushEmpty(bool, object, string, float, float, float)
0x179: Stack[-5] = Stack[-14]
0x17a: Stack[-4] = "disease"
0x17b: Stack[-3] = Stack[-8]
0x17c: Stack[-2] = (int) 0
0x17d: Stack[-1] = (int) 1
0x17e: Call 0x12d

0x17f: Pop(6)
0x180: Stack[-9] = Stack[-7]
0x181: Return(); Pop(6)

0x182: PushEmpty(bool, bool)
0x183: @@ IsDead(Stack[-1])
0x184: Pop(0)
0x185: Stack[-4] = Stack[-1]
0x186: Return(); Pop(2)

0x187: PushEmpty(object, object, object, object)
0x188: Pop(0); Push((bool) Stack[-5] == 0)
0x189: IF (Stack[-1] == 0) GOTO 0x18c; Pop(1)

0x18a: Stack[-6] = (bool) 0
0x18b: Return(); Pop(4)

0x18c: PushEmpty(bool)
0x18d: Stack[-1] = (bool) 0
0x18e: Push("IsDead")
0x18f: Push((int) 1)
0x190: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x191: IF (Stack[-1] == 0) GOTO 0x198; Pop(1)

0x192: PushEmpty(bool, object)
0x193: Stack[-1] = Stack[-8]
0x194: Call 0x182

0x195: Pop(1)
0x196: IF (Stack[-1] == 0) GOTO 0x198; Pop(1)

0x197: Stack[-1] = (bool) 1
0x198: IF (Stack[-1] == 0) GOTO 0x19b; Pop(1)

0x199: Stack[-6] = (bool) 0
0x19a: Return(); Pop(4)

0x19b: @ GetScene(Stack[-2])
0x19c: Pop(0)
0x19d: Pop(0); Push((bool) Stack[-2] == 0)
0x19e: IF (Stack[-1] == 0) GOTO 0x1a1; Pop(1)

0x19f: Stack[-6] = (bool) 0
0x1a0: Return(); Pop(4)

0x1a1: @@ GetScene(Stack[-1])
0x1a2: Pop(0)
0x1a3: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x1a4: IF (Stack[-1] == 0) GOTO 0x1a7; Pop(1)

0x1a5: Stack[-6] = (bool) 0
0x1a6: Return(); Pop(4)

0x1a7: Stack[-6] = (bool) 1
0x1a8: Return(); Pop(4)

0x1a9: Stack[-1] = 0
0x1aa: Stack[-2] = 0
0x1ab: PushEmpty(int, int)
0x1ac: PushEmpty(bool, object)
0x1ad: Stack[-1] = Stack[-5]
0x1ae: Call 0x187

0x1af: Pop(1)
0x1b0: Pop(1); Push((bool) Stack[-1] == 0)
0x1b1: IF (Stack[-1] == 0) GOTO 0x1b4; Pop(1)

0x1b2: Stack[-4] = (bool) 0
0x1b3: Return(); Pop(2)

0x1b4: PushEmpty(bool, object, string)
0x1b5: Stack[-2] = Stack[-6]
0x1b6: Stack[-1] = "noaccess"
0x1b7: Call 0x121

0x1b8: Pop(2)
0x1b9: Pop(1); Push((bool) Stack[-1] == 0)
0x1ba: IF (Stack[-1] == 0) GOTO 0x1bd; Pop(1)

0x1bb: Stack[-4] = (bool) 1
0x1bc: Return(); Pop(2)

0x1bd: Push("noaccess")
0x1be: @@ GetProperty(Stack[-1], Stack[-2])
0x1bf: Pop(1)
0x1c0: Push((int) 0)
0x1c1: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x1c2: Return(); Pop(2)

0x1c3: PushEmpty(object, object)
0x1c4: @ self(Stack[-1])
0x1c5: Pop(0)
0x1c6: Stack[-3] = Stack[-1]
0x1c7: Return(); Pop(2)

0x1c8: Stack[-1] = 0
0x1c9: PushEmpty(cvector, cvector)
0x1ca: Stack[-1] = Stack[-3] - Stack[-4]; Pop(0);
0x1cb: Stack[-5] = Stack[-1] | Stack[-1]; Pop(0);
0x1cc: Return(); Pop(2)

0x1cd: PushEmpty()
0x1ce: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x1cf: IF (Stack[-1] == 0) GOTO 0x1d2; Pop(1)

0x1d0: Stack[-4] = Stack[-2]
0x1d1: Return(); Pop(0)

0x1d2: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x1d3: IF (Stack[-1] == 0) GOTO 0x1d6; Pop(1)

0x1d4: Stack[-4] = Stack[-1]
0x1d5: Return(); Pop(0)

0x1d6: Stack[-4] = Stack[-3]
0x1d7: Return(); Pop(0)

0x1d8: PushEmpty()
0x1d9: Return(); Pop(0)

0x1da: PushEmpty()
0x1db: Push((int) 10)
0x1dc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1dd: IF (Stack[-1] == 0) GOTO 0x1f2; Pop(1)

0x1de: Push((int) 10)
0x1df: @ KillTimer(Stack[-1])
0x1e0: Pop(1)
0x1e1: Push((bool) 0)
0x1e2: @ SetVisirVisibility(Stack[-1])
0x1e3: Pop(1)
0x1e4: Push((int) 0)
0x1e5: Push((int) 2)
0x1e6: @ FogLinear(Stack[-2], Stack[-1])
0x1e7: Pop(2)
0x1e8: Push((int) 2)
0x1e9: @ Sleep(Stack[-1])
0x1ea: Pop(1)
0x1eb: PushEmpty(object)
0x1ec: Call 0x1c3

0x1ed: Pop(0)
0x1ee: @ RemoveActor(Stack[-1])
0x1ef: Pop(1)
0x1f0: @ Hold()
0x1f1: Pop(0)
0x1f2: Return(); Pop(0)

0x1f3: PushEmpty(object)
0x1f4: Call 0x1c3

0x1f5: Pop(0)
0x1f6: @ RemoveActor(Stack[-1])
0x1f7: Pop(1)
0x1f8: @ Hold()
0x1f9: Pop(0)
0x1fa: Return(); Pop(0)

