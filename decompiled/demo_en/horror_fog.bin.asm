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
	add

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
	IsPlayerActor (2 args)
	GetScene (1 args)
	self (1 args)
	CreateFloatVector (1 args)
	SendWorldWndMessage (2 args)
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
EVENT_41 Op = 0x1ed Vars = (object)
EVENT_7 Op = 0x1ef Vars = (int)
EVENT_6 Op = 0x208 Vars = ()

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
0x15: Call2 0x1b6

0x16: Pop(1)
0x17: IF (Stack[-1] == 0) GOTO 0x34; Pop(1)

0x18: PushEmpty(float, cvector, cvector)
0x19: PushEmpty(cvector)
0x1a: Call2 0x117

0x1b: Stack[-3] = Stack[-1]
0x1c: Pop(1)
0x1d: PushEmpty(cvector, object)
0x1e: Stack[-1] = Stack[-14]
0x1f: Call2 0x11c

0x20: Stack[-3] = Stack[-2]
0x21: Pop(2)
0x22: Call2 0x1d4

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
0x2d: Call2 0x148

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
0x3f: Call2 0x1ce

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
0x4c: Push((int) 30)
0x4d: @ SetTimer(Stack[-2], Stack[-1])
0x4e: Pop(2)
0x4f: Push("player")
0x50: @ FindActor(Stack[-2], Stack[-1])
0x51: Pop(1)
0x52: PushEmpty(bool, object)
0x53: Stack[-1] = Stack[-3]
0x54: Push(-2, 2); TaskCall(2)
0x55: Call2 0x6b

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
0x61: Call2 0x0

0x62: Pop(-1, 0); TaskReturn
0x63: Pop(1)
0x64: PushEmpty(object)
0x65: Call2 0x1ce

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
0x72: Call2 0x80

0x73: Stack[-8] = Stack[-6]
0x74: Pop(6)
0x75: Return(); Pop(0)

0x76: PushEmpty()
0x77: PushEmpty(int)
0x78: Stack[-1] = Stack[-2]
0x79: Call2 0xe6

0x7a: Pop(1)
0x7b: PushEmpty(int)
0x7c: Stack[-1] = Stack[-2]
0x7d: Call2 0x1ef

0x7e: Pop(1)
0x7f: Return(); Pop(0)

0x80: PushEmpty(bool, bool, object, cvector, cvector, cvector, float, object, bool, bool, object, cvector, cvector, cvector, float, object)
0x81: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x82: Stack[1 + Tasks[-1].StackPointer] = Stack[-21]
0x83: Stack[-7] = Stack[-17]
0x84: PushEmpty(bool, object)
0x85: Stack[-1] = Stack[-23]
0x86: Call2 0x10c

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
0xba: Call2 0x113

0xbb: Pop(0)
0xbc: PushEmpty(string)
0xbd: Call2 0x115

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
0xed: Call2 0x10c

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
0x105: Call2 0xfc

0x106: Pop(0)
0x107: PushEmpty(object)
0x108: Stack[-1] = Stack[-2]
0x109: Call2 0x1ed

0x10a: Pop(1)
0x10b: Return(); Pop(0)

0x10c: PushEmpty()
0x10d: PushEmpty(bool, object)
0x10e: Stack[-1] = Stack[-3]
0x10f: Call2 0x1b6

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
0x122: @ IsPlayerActor(Stack[-3], Stack[-1])
0x123: Pop(0)
0x124: Stack[-4] = Stack[-1]
0x125: Return(); Pop(2)

0x126: PushEmpty(bool, bool)
0x127: Push("HasProperty")
0x128: Push((int) 2)
0x129: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x12a: Pop(1); Push((bool) Stack[-1] == 0)
0x12b: IF (Stack[-1] == 0) GOTO 0x12e; Pop(1)

0x12c: Stack[-5] = (bool) 0
0x12d: Return(); Pop(2)

0x12e: @@ HasProperty(Stack[-3], Stack[-1])
0x12f: Pop(0)
0x130: Stack[-5] = Stack[-1]
0x131: Return(); Pop(2)

0x132: PushEmpty(float, float)
0x133: PushEmpty(bool, object, string)
0x134: Stack[-2] = Stack[-10]
0x135: Stack[-1] = Stack[-9]
0x136: Call2 0x126

0x137: Pop(2)
0x138: Pop(1); Push((bool) Stack[-1] == 0)
0x139: IF (Stack[-1] == 0) GOTO 0x13c; Pop(1)

0x13a: Stack[-8] = (bool) 0
0x13b: Return(); Pop(2)

0x13c: @@ GetProperty(Stack[-6], Stack[-1])
0x13d: Pop(0)
0x13e: PushEmpty(float, float, float, float)
0x13f: Stack[-3] = Stack[-5] + Stack[-9]; Pop(0);
0x140: Stack[-2] = Stack[-8]
0x141: Stack[-1] = Stack[-7]
0x142: Call2 0x1d8

0x143: Pop(3)
0x144: @@ SetProperty(Stack[-7], Stack[-1])
0x145: Pop(1)
0x146: Stack[-8] = (bool) 1
0x147: Return(); Pop(2)

0x148: PushEmpty(float, float, float, float)
0x149: PushEmpty(bool, object, string)
0x14a: Stack[-2] = Stack[-9]
0x14b: Stack[-1] = "disease"
0x14c: Call2 0x126

0x14d: Pop(2)
0x14e: Pop(1); Push((bool) Stack[-1] == 0)
0x14f: IF (Stack[-1] == 0) GOTO 0x152; Pop(1)

0x150: Stack[-7] = (int) 0
0x151: Return(); Pop(4)

0x152: Stack[-2] = (int) 0
0x153: PushEmpty(bool, object, string)
0x154: Stack[-2] = Stack[-9]
0x155: Stack[-1] = "armor_disease"
0x156: Call2 0x126

0x157: Pop(2)
0x158: IF (Stack[-1] == 0) GOTO 0x15e; Pop(1)

0x159: Push("armor_disease")
0x15a: @@ GetProperty(Stack[-1], Stack[-3])
0x15b: Pop(1)
0x15c: Push((int) 100)
0x15d: Stack[-3] = Stack[-3] / Stack[-1]; Pop(1);
0x15e: PushEmpty(bool, object, string)
0x15f: Stack[-2] = Stack[-9]
0x160: Stack[-1] = "immunity"
0x161: Call2 0x126

0x162: Pop(2)
0x163: IF (Stack[-1] == 0) GOTO 0x170; Pop(1)

0x164: Push("immunity")
0x165: @@ GetProperty(Stack[-1], Stack[-2])
0x166: Pop(1)
0x167: Stack[-2] = Stack[-2] + Stack[-1]; Pop(0);
0x168: PushEmpty(bool, object, string, float, float, float)
0x169: Stack[-5] = Stack[-12]
0x16a: Stack[-4] = "immunity"
0x16b: Stack[-3] = -Stack[-11]; Pop(0);
0x16c: Stack[-2] = (int) 0
0x16d: Stack[-1] = (int) 1
0x16e: Call2 0x132

0x16f: Pop(6)
0x170: Push((int) 1)
0x171: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x172: IF (Stack[-1] == 0) GOTO 0x175; Pop(1)

0x173: Stack[-7] = (float) 0.0
0x174: Return(); Pop(4)

0x175: Push((int) 1)
0x176: Pop(1); Push(Stack[-1] - Stack[-3]);
0x177: Push((int) 2)
0x178: Pop(2); Push(Stack[-2] / Stack[-1]);
0x179: Stack[-6] = Stack[-6] * Stack[-1]; Pop(1);
0x17a: PushEmpty(bool, object, string, float, float, float)
0x17b: Stack[-5] = Stack[-12]
0x17c: Stack[-4] = "disease"
0x17d: Stack[-3] = Stack[-11]
0x17e: Stack[-2] = (int) 0
0x17f: Stack[-1] = (int) 1
0x180: Call2 0x132

0x181: Pop(6)
0x182: PushEmpty(bool, object)
0x183: Stack[-1] = Stack[-8]
0x184: Call2 0x121

0x185: Pop(1)
0x186: IF (Stack[-1] == 0) GOTO 0x18b; Pop(1)

0x187: PushEmpty(float)
0x188: Stack[-1] = Stack[-6]
0x189: Call2 0x1e3

0x18a: Pop(1)
0x18b: Stack[-7] = Stack[-5]
0x18c: Return(); Pop(4)

0x18d: PushEmpty(bool, bool)
0x18e: @@ IsDead(Stack[-1])
0x18f: Pop(0)
0x190: Stack[-4] = Stack[-1]
0x191: Return(); Pop(2)

0x192: PushEmpty(object, object, object, object)
0x193: Pop(0); Push((bool) Stack[-5] == 0)
0x194: IF (Stack[-1] == 0) GOTO 0x197; Pop(1)

0x195: Stack[-6] = (bool) 0
0x196: Return(); Pop(4)

0x197: PushEmpty(bool)
0x198: Stack[-1] = (bool) 0
0x199: Push("IsDead")
0x19a: Push((int) 1)
0x19b: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x19c: IF (Stack[-1] == 0) GOTO 0x1a3; Pop(1)

0x19d: PushEmpty(bool, object)
0x19e: Stack[-1] = Stack[-8]
0x19f: Call2 0x18d

0x1a0: Pop(1)
0x1a1: IF (Stack[-1] == 0) GOTO 0x1a3; Pop(1)

0x1a2: Stack[-1] = (bool) 1
0x1a3: IF (Stack[-1] == 0) GOTO 0x1a6; Pop(1)

0x1a4: Stack[-6] = (bool) 0
0x1a5: Return(); Pop(4)

0x1a6: @ GetScene(Stack[-2])
0x1a7: Pop(0)
0x1a8: Pop(0); Push((bool) Stack[-2] == 0)
0x1a9: IF (Stack[-1] == 0) GOTO 0x1ac; Pop(1)

0x1aa: Stack[-6] = (bool) 0
0x1ab: Return(); Pop(4)

0x1ac: @@ GetScene(Stack[-1])
0x1ad: Pop(0)
0x1ae: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x1af: IF (Stack[-1] == 0) GOTO 0x1b2; Pop(1)

0x1b0: Stack[-6] = (bool) 0
0x1b1: Return(); Pop(4)

0x1b2: Stack[-6] = (bool) 1
0x1b3: Return(); Pop(4)

0x1b4: Stack[-1] = 0
0x1b5: Stack[-2] = 0
0x1b6: PushEmpty(int, int)
0x1b7: PushEmpty(bool, object)
0x1b8: Stack[-1] = Stack[-5]
0x1b9: Call2 0x192

0x1ba: Pop(1)
0x1bb: Pop(1); Push((bool) Stack[-1] == 0)
0x1bc: IF (Stack[-1] == 0) GOTO 0x1bf; Pop(1)

0x1bd: Stack[-4] = (bool) 0
0x1be: Return(); Pop(2)

0x1bf: PushEmpty(bool, object, string)
0x1c0: Stack[-2] = Stack[-6]
0x1c1: Stack[-1] = "noaccess"
0x1c2: Call2 0x126

0x1c3: Pop(2)
0x1c4: Pop(1); Push((bool) Stack[-1] == 0)
0x1c5: IF (Stack[-1] == 0) GOTO 0x1c8; Pop(1)

0x1c6: Stack[-4] = (bool) 1
0x1c7: Return(); Pop(2)

0x1c8: Push("noaccess")
0x1c9: @@ GetProperty(Stack[-1], Stack[-2])
0x1ca: Pop(1)
0x1cb: Push((int) 0)
0x1cc: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x1cd: Return(); Pop(2)

0x1ce: PushEmpty(object, object)
0x1cf: @ self(Stack[-1])
0x1d0: Pop(0)
0x1d1: Stack[-3] = Stack[-1]
0x1d2: Return(); Pop(2)

0x1d3: Stack[-1] = 0
0x1d4: PushEmpty(cvector, cvector)
0x1d5: Stack[-1] = Stack[-3] - Stack[-4]; Pop(0);
0x1d6: Stack[-5] = Stack[-1] | Stack[-1]; Pop(0);
0x1d7: Return(); Pop(2)

0x1d8: PushEmpty()
0x1d9: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x1da: IF (Stack[-1] == 0) GOTO 0x1dd; Pop(1)

0x1db: Stack[-4] = Stack[-2]
0x1dc: Return(); Pop(0)

0x1dd: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x1de: IF (Stack[-1] == 0) GOTO 0x1e1; Pop(1)

0x1df: Stack[-4] = Stack[-1]
0x1e0: Return(); Pop(0)

0x1e1: Stack[-4] = Stack[-3]
0x1e2: Return(); Pop(0)

0x1e3: PushEmpty(object, object)
0x1e4: @ CreateFloatVector(Stack[-1])
0x1e5: Pop(0)
0x1e6: @@ add(Stack[-3])
0x1e7: Pop(0)
0x1e8: Push((int) 14)
0x1e9: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x1ea: Pop(1)
0x1eb: Return(); Pop(2)

0x1ec: Stack[-1] = 0
0x1ed: PushEmpty()
0x1ee: Return(); Pop(0)

0x1ef: PushEmpty()
0x1f0: Push((int) 10)
0x1f1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1f2: IF (Stack[-1] == 0) GOTO 0x207; Pop(1)

0x1f3: Push((int) 10)
0x1f4: @ KillTimer(Stack[-1])
0x1f5: Pop(1)
0x1f6: Push((bool) 0)
0x1f7: @ SetVisirVisibility(Stack[-1])
0x1f8: Pop(1)
0x1f9: Push((int) 0)
0x1fa: Push((int) 2)
0x1fb: @ FogLinear(Stack[-2], Stack[-1])
0x1fc: Pop(2)
0x1fd: Push((int) 2)
0x1fe: @ Sleep(Stack[-1])
0x1ff: Pop(1)
0x200: PushEmpty(object)
0x201: Call2 0x1ce

0x202: Pop(0)
0x203: @ RemoveActor(Stack[-1])
0x204: Pop(1)
0x205: @ Hold()
0x206: Pop(0)
0x207: Return(); Pop(0)

0x208: PushEmpty(object)
0x209: Call2 0x1ce

0x20a: Pop(0)
0x20b: @ RemoveActor(Stack[-1])
0x20c: Pop(1)
0x20d: @ Hold()
0x20e: Pop(0)
0x20f: Return(); Pop(0)

