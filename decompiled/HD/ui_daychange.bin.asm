GlobalVarCount = 0

Strings:

Import:
	DestroyWindow (0 args)
	GetStringByID (2 args)
	GetWindowSize (2 args)
	SetOwnerDraw (1 args)
	SetNeedUpdate (1 args)
	ProcessEvents (0 args)
	GetTextHeightInWidth (4 args)
	PrintInWidth (10 args)
	StopEventProcessing (0 args)
	GetGameTime (1 args)
	GetVariable (2 args)
	format (7 args)
	irand (2 args)
	SetVariable (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (int, int, int, string, float) Params = 0
		EVENT_0 Op = 0x48 Vars = ()
		EVENT_1 Op = 0x62 Vars = (float)


0x0: PushEmpty(int, string, int, string)
0x1: PushEmpty(int)
0x2: Call2 0x82

0x3: Pop(0)
0x4: Push((int) 0)
0x5: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x6: IF (Stack[-1] == 0) GOTO 0x9; Pop(1)

0x7: Stack[-2] = (int) 12
0x8: GOTO 0x12

0x9: PushEmpty(int)
0xa: Call2 0x82

0xb: Pop(0)
0xc: Push((int) 1)
0xd: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xe: IF (Stack[-1] == 0) GOTO 0x11; Pop(1)

0xf: Stack[-2] = (int) 0
0x10: GOTO 0x12

0x11: Stack[-2] = (int) 24
0x12: PushEmpty(string, int)
0x13: PushEmpty(int)
0x14: Call2 0x74

0x15: Stack[-2] = Stack[-1]
0x16: Pop(1)
0x17: Call2 0x88

0x18: Stack[-3] = Stack[-2]
0x19: Pop(2)
0x1a: Push("")
0x1b: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x1c: IF (Stack[-1] == 0) GOTO 0x22; Pop(1)

0x1d: PushEmpty(string, float)
0x1e: Stack[-2] = Stack[-3]
0x1f: Stack[-1] = (int) 10
0x20: Call2 0x3a

0x21: Pop(2)
0x22: PushEmpty(int, float)
0x23: Push((int) 300)
0x24: Pop(1); Push(Stack[-1] + Stack[-5]);
0x25: PushEmpty(int)
0x26: Call2 0x74

0x27: Pop(0)
0x28: Pop(2); Push(Stack[-2] + Stack[-1]);
0x29: Push((int) 1)
0x2a: Stack[-4] = Stack[-2] - Stack[-1]; Pop(2);
0x2b: Stack[-1] = (int) 8
0x2c: Call2 0x31

0x2d: Pop(2)
0x2e: @ DestroyWindow()
0x2f: Pop(0)
0x30: Return(); Pop(4)

0x31: PushEmpty(string, string)
0x32: @ GetStringByID(Stack[-1], Stack[-4])
0x33: Pop(0)
0x34: PushEmpty(string, float)
0x35: Stack[-2] = Stack[-3]
0x36: Stack[-1] = Stack[-5]
0x37: Call2 0x3a

0x38: Pop(2)
0x39: Return(); Pop(2)

0x3a: PushEmpty()
0x3b: Stack[3 + Tasks[-1].StackPointer] = Stack[-2]
0x3c: Stack[4 + Tasks[-1].StackPointer] = Stack[-1]
0x3d: @ GetWindowSize(Stack[-0], Stack[-1])
0x3e: Pop(0)
0x3f: Push((bool) 1)
0x40: @ SetOwnerDraw(Stack[-1])
0x41: Pop(1)
0x42: Push((bool) 1)
0x43: @ SetNeedUpdate(Stack[-1])
0x44: Pop(1)
0x45: @ ProcessEvents()
0x46: Pop(0)
0x47: Return(); Pop(0)

0x48: PushEmpty(float, int, float, int)
0x49: Push((int) 0)
0x4a: Pop(1); Push((bool) Stack[4 + Tasks[-1].StackPointer] <= Stack[-1])
0x4b: IF (Stack[-1] == 0) GOTO 0x4d; Pop(1)

0x4c: Return(); Pop(4)

0x4d: Push((float)1.0)
0x4e: Pop(1); Push((bool) Stack[4 + Tasks[-1].StackPointer] < Stack[-1])
0x4f: IF (Stack[-1] == 0) GOTO 0x53; Pop(1)

0x50: Push((float)1.0)
0x51: Stack[-3] = Stack[4 + Tasks[-1].StackPointer] / Stack[-1]; Pop(1);
0x52: GOTO 0x54

0x53: Stack[-2] = (int) 1
0x54: Push("default")
0x55: @ GetTextHeightInWidth(Stack[-2], Stack[-1], Stack[-0], Stack[-3])
0x56: Pop(1)
0x57: Push("default")
0x58: Push((int) 0)
0x59: Pop(0); Push(Stack[1 + StackPtr] - Stack[-3]);
0x5a: Push((int) 2)
0x5b: Pop(2); Push(Stack[-2] / Stack[-1]);
0x5c: Push((float)1.0)
0x5d: Push((float)1.0)
0x5e: Push((float)1.0)
0x5f: @ PrintInWidth(Stack[-7], Stack[-6], Stack[-5], Stack[-4], Stack[-0], Stack[-3], Stack[-3], Stack[-2], Stack[-1], Stack[-8])
0x60: Pop(6)
0x61: Return(); Pop(4)

0x62: PushEmpty()
0x63: Stack[4 + Tasks[-1].StackPointer] = Stack[4 + Tasks[-1].StackPointer] - Stack[-1]; Pop(0);
0x64: PushEmpty(bool)
0x65: Stack[-1] = (bool) 0
0x66: Push((int) 0)
0x67: Pop(1); Push((bool) Stack[4 + Tasks[-1].StackPointer] <= Stack[-1])
0x68: IF (Stack[-1] == 0) GOTO 0x6e; Pop(1)

0x69: PushEmpty(bool)
0x6a: Call2 0x72

0x6b: Pop(0)
0x6c: IF (Stack[-1] == 0) GOTO 0x6e; Pop(1)

0x6d: Stack[-1] = (bool) 1
0x6e: IF (Stack[-1] == 0) GOTO 0x71; Pop(1)

0x6f: @ StopEventProcessing()
0x70: Pop(0)
0x71: Return(); Pop(0)

0x72: Stack[-1] = (bool) 1
0x73: Return(); Pop(0)

0x74: PushEmpty(float, float)
0x75: @ GetGameTime(Stack[-1])
0x76: Pop(0)
0x77: Push((int) 1)
0x78: PushEmpty(int)
0x79: Push((int) 24)
0x7a: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x7b: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x7c: Return(); Pop(2)

0x7d: PushEmpty(string, string)
0x7e: @ GetStringByID(Stack[-1], Stack[-3])
0x7f: Pop(0)
0x80: Stack[-4] = Stack[-1]
0x81: Return(); Pop(2)

0x82: PushEmpty(int, int)
0x83: Push("branch")
0x84: @ GetVariable(Stack[-1], Stack[-2])
0x85: Pop(1)
0x86: Stack[-3] = Stack[-1]
0x87: Return(); Pop(2)

0x88: PushEmpty(int, int, int, int, int, string, int, int, int, int, int, string)
0x89: PushEmpty(bool)
0x8a: Stack[-1] = (bool) 1
0x8b: Push((int) 2)
0x8c: Pop(1); Push((bool) Stack[-15] < Stack[-1])
0x8d: IF (Stack[-1] == 0) GOTO 0x92; Pop(1)

0x8e: Push((int) 12)
0x8f: Pop(1); Push((bool) Stack[-15] > Stack[-1])
0x90: IF (Stack[-1] == 0) GOTO 0x92; Pop(1)

0x91: Stack[-1] = (bool) 0
0x92: IF (Stack[-1] == 0) GOTO 0x95; Pop(1)

0x93: Stack[-14] = ""
0x94: Return(); Pop(12)

0x95: PushEmpty(int, int)
0x96: Stack[-1] = Stack[-15]
0x97: Call2 0xc8

0x98: Stack[-8] = Stack[-2]
0x99: Pop(2)
0x9a: PushEmpty(int, int)
0x9b: Stack[-1] = Stack[-15]
0x9c: Call2 0x112

0x9d: Stack[-7] = Stack[-2]
0x9e: Pop(2)
0x9f: PushEmpty(int, int)
0xa0: Stack[-1] = Stack[-15]
0xa1: Call2 0x161

0xa2: Stack[-6] = Stack[-2]
0xa3: Pop(2)
0xa4: PushEmpty(int, int)
0xa5: Stack[-1] = Stack[-15]
0xa6: Call2 0x1ab

0xa7: Stack[-5] = Stack[-2]
0xa8: Pop(2)
0xa9: PushEmpty(int, int)
0xaa: Stack[-1] = Stack[-15]
0xab: Call2 0xb9

0xac: Stack[-4] = Stack[-2]
0xad: Pop(2)
0xae: PushEmpty(string, int)
0xaf: Push((int) 550)
0xb0: Push((int) 2)
0xb1: Pop(1); Push(Stack[-17] - Stack[-1]);
0xb2: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0xb3: Call2 0x7d

0xb4: Pop(1)
0xb5: @ format(Stack[-2], Stack[-1], Stack[-7], Stack[-6], Stack[-5], Stack[-3], Stack[-4])
0xb6: Pop(1)
0xb7: Stack[-14] = Stack[-1]
0xb8: Return(); Pop(12)

0xb9: PushEmpty(int, int, int, int, int, int)
0xba: Stack[-3] = (int) 0
0xbb: Stack[-2] = (int) 1
0xbc: Pop(0); Push((bool) Stack[-2] <= Stack[-7])
0xbd: IF (Stack[-1] == 0) GOTO 0xc6; Pop(1)

0xbe: Push("ps_dead_count")
0xbf: Pop(1); Push(Stack[-1] + Stack[-8]);
0xc0: @ GetVariable(Stack[-1], Stack[-2])
0xc1: Pop(1)
0xc2: Stack[-3] = Stack[-3] + Stack[-1]; Pop(0);
0xc3: Push((int) 1)
0xc4: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0xc5: GOTO 0xbc

0xc6: Stack[-8] = Stack[-3]
0xc7: Return(); Pop(6)

0xc8: PushEmpty(int, int, int, int, int, int)
0xc9: Push((int) 2)
0xca: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0xcb: IF (Stack[-1] == 0) GOTO 0xcf; Pop(1)

0xcc: Stack[-3] = (int) 20
0xcd: Stack[-2] = (int) 30
0xce: GOTO 0x10d

0xcf: Push((int) 3)
0xd0: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0xd1: IF (Stack[-1] == 0) GOTO 0xd5; Pop(1)

0xd2: Stack[-3] = (int) 30
0xd3: Stack[-2] = (int) 50
0xd4: GOTO 0x10d

0xd5: Push((int) 4)
0xd6: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0xd7: IF (Stack[-1] == 0) GOTO 0xdb; Pop(1)

0xd8: Stack[-3] = (int) 40
0xd9: Stack[-2] = (int) 60
0xda: GOTO 0x10d

0xdb: Push((int) 5)
0xdc: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0xdd: IF (Stack[-1] == 0) GOTO 0xe1; Pop(1)

0xde: Stack[-3] = (int) 100
0xdf: Stack[-2] = (int) 130
0xe0: GOTO 0x10d

0xe1: Push((int) 6)
0xe2: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0xe3: IF (Stack[-1] == 0) GOTO 0xe7; Pop(1)

0xe4: Stack[-3] = (int) 150
0xe5: Stack[-2] = (int) 200
0xe6: GOTO 0x10d

0xe7: Push((int) 7)
0xe8: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0xe9: IF (Stack[-1] == 0) GOTO 0xed; Pop(1)

0xea: Stack[-3] = (int) 170
0xeb: Stack[-2] = (int) 220
0xec: GOTO 0x10d

0xed: Push((int) 8)
0xee: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0xef: IF (Stack[-1] == 0) GOTO 0xf3; Pop(1)

0xf0: Stack[-3] = (int) 200
0xf1: Stack[-2] = (int) 250
0xf2: GOTO 0x10d

0xf3: Push((int) 9)
0xf4: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0xf5: IF (Stack[-1] == 0) GOTO 0xf9; Pop(1)

0xf6: Stack[-3] = (int) 330
0xf7: Stack[-2] = (int) 390
0xf8: GOTO 0x10d

0xf9: Push((int) 10)
0xfa: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0xfb: IF (Stack[-1] == 0) GOTO 0xff; Pop(1)

0xfc: Stack[-3] = (int) 330
0xfd: Stack[-2] = (int) 390
0xfe: GOTO 0x10d

0xff: Push((int) 11)
0x100: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x101: IF (Stack[-1] == 0) GOTO 0x105; Pop(1)

0x102: Stack[-3] = (int) 330
0x103: Stack[-2] = (int) 390
0x104: GOTO 0x10d

0x105: Push((int) 12)
0x106: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x107: IF (Stack[-1] == 0) GOTO 0x10b; Pop(1)

0x108: Stack[-3] = (int) 330
0x109: Stack[-2] = (int) 390
0x10a: GOTO 0x10d

0x10b: Stack[-8] = (int) 0
0x10c: Return(); Pop(6)

0x10d: Pop(0); Push(Stack[-2] - Stack[-3]);
0x10e: @ irand(Stack[-2], Stack[-1])
0x10f: Pop(1)
0x110: Stack[-8] = Stack[-1] + Stack[-3]; Pop(0);
0x111: Return(); Pop(6)

0x112: PushEmpty(int, int, int, int, int, int)
0x113: Push((int) 2)
0x114: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x115: IF (Stack[-1] == 0) GOTO 0x119; Pop(1)

0x116: Stack[-3] = (int) 10
0x117: Stack[-2] = (int) 20
0x118: GOTO 0x157

0x119: Push((int) 3)
0x11a: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x11b: IF (Stack[-1] == 0) GOTO 0x11f; Pop(1)

0x11c: Stack[-3] = (int) 30
0x11d: Stack[-2] = (int) 40
0x11e: GOTO 0x157

0x11f: Push((int) 4)
0x120: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x121: IF (Stack[-1] == 0) GOTO 0x125; Pop(1)

0x122: Stack[-3] = (int) 50
0x123: Stack[-2] = (int) 60
0x124: GOTO 0x157

0x125: Push((int) 5)
0x126: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x127: IF (Stack[-1] == 0) GOTO 0x12b; Pop(1)

0x128: Stack[-3] = (int) 70
0x129: Stack[-2] = (int) 90
0x12a: GOTO 0x157

0x12b: Push((int) 6)
0x12c: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x12d: IF (Stack[-1] == 0) GOTO 0x131; Pop(1)

0x12e: Stack[-3] = (int) 110
0x12f: Stack[-2] = (int) 170
0x130: GOTO 0x157

0x131: Push((int) 7)
0x132: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x133: IF (Stack[-1] == 0) GOTO 0x137; Pop(1)

0x134: Stack[-3] = (int) 310
0x135: Stack[-2] = (int) 360
0x136: GOTO 0x157

0x137: Push((int) 8)
0x138: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x139: IF (Stack[-1] == 0) GOTO 0x13d; Pop(1)

0x13a: Stack[-3] = (int) 360
0x13b: Stack[-2] = (int) 430
0x13c: GOTO 0x157

0x13d: Push((int) 9)
0x13e: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x13f: IF (Stack[-1] == 0) GOTO 0x143; Pop(1)

0x140: Stack[-3] = (int) 400
0x141: Stack[-2] = (int) 490
0x142: GOTO 0x157

0x143: Push((int) 10)
0x144: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x145: IF (Stack[-1] == 0) GOTO 0x149; Pop(1)

0x146: Stack[-3] = (int) 600
0x147: Stack[-2] = (int) 690
0x148: GOTO 0x157

0x149: Push((int) 11)
0x14a: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x14b: IF (Stack[-1] == 0) GOTO 0x14f; Pop(1)

0x14c: Stack[-3] = (int) 600
0x14d: Stack[-2] = (int) 690
0x14e: GOTO 0x157

0x14f: Push((int) 12)
0x150: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x151: IF (Stack[-1] == 0) GOTO 0x155; Pop(1)

0x152: Stack[-3] = (int) 600
0x153: Stack[-2] = (int) 690
0x154: GOTO 0x157

0x155: Stack[-8] = (int) 0
0x156: Return(); Pop(6)

0x157: Pop(0); Push(Stack[-2] - Stack[-3]);
0x158: @ irand(Stack[-2], Stack[-1])
0x159: Pop(1)
0x15a: Push("ps_dead_count")
0x15b: Pop(1); Push(Stack[-1] + Stack[-8]);
0x15c: Pop(0); Push(Stack[-2] + Stack[-4]);
0x15d: @ SetVariable(Stack[-2], Stack[-1])
0x15e: Pop(2)
0x15f: Stack[-8] = Stack[-1] + Stack[-3]; Pop(0);
0x160: Return(); Pop(6)

0x161: PushEmpty(int, int, int, int, int, int)
0x162: Push((int) 2)
0x163: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x164: IF (Stack[-1] == 0) GOTO 0x168; Pop(1)

0x165: Stack[-3] = (int) 5
0x166: Stack[-2] = (int) 10
0x167: GOTO 0x1a6

0x168: Push((int) 3)
0x169: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x16a: IF (Stack[-1] == 0) GOTO 0x16e; Pop(1)

0x16b: Stack[-3] = (int) 10
0x16c: Stack[-2] = (int) 15
0x16d: GOTO 0x1a6

0x16e: Push((int) 4)
0x16f: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x170: IF (Stack[-1] == 0) GOTO 0x174; Pop(1)

0x171: Stack[-3] = (int) 15
0x172: Stack[-2] = (int) 35
0x173: GOTO 0x1a6

0x174: Push((int) 5)
0x175: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x176: IF (Stack[-1] == 0) GOTO 0x17a; Pop(1)

0x177: Stack[-3] = (int) 15
0x178: Stack[-2] = (int) 35
0x179: GOTO 0x1a6

0x17a: Push((int) 6)
0x17b: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x17c: IF (Stack[-1] == 0) GOTO 0x180; Pop(1)

0x17d: Stack[-3] = (int) 10
0x17e: Stack[-2] = (int) 30
0x17f: GOTO 0x1a6

0x180: Push((int) 7)
0x181: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x182: IF (Stack[-1] == 0) GOTO 0x186; Pop(1)

0x183: Stack[-3] = (int) 10
0x184: Stack[-2] = (int) 30
0x185: GOTO 0x1a6

0x186: Push((int) 8)
0x187: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x188: IF (Stack[-1] == 0) GOTO 0x18c; Pop(1)

0x189: Stack[-3] = (int) 30
0x18a: Stack[-2] = (int) 60
0x18b: GOTO 0x1a6

0x18c: Push((int) 9)
0x18d: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x18e: IF (Stack[-1] == 0) GOTO 0x192; Pop(1)

0x18f: Stack[-3] = (int) 30
0x190: Stack[-2] = (int) 60
0x191: GOTO 0x1a6

0x192: Push((int) 10)
0x193: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x194: IF (Stack[-1] == 0) GOTO 0x198; Pop(1)

0x195: Stack[-3] = (int) 120
0x196: Stack[-2] = (int) 140
0x197: GOTO 0x1a6

0x198: Push((int) 11)
0x199: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x19a: IF (Stack[-1] == 0) GOTO 0x19e; Pop(1)

0x19b: Stack[-3] = (int) 120
0x19c: Stack[-2] = (int) 140
0x19d: GOTO 0x1a6

0x19e: Push((int) 12)
0x19f: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x1a0: IF (Stack[-1] == 0) GOTO 0x1a4; Pop(1)

0x1a1: Stack[-3] = (int) 120
0x1a2: Stack[-2] = (int) 140
0x1a3: GOTO 0x1a6

0x1a4: Stack[-8] = (int) 0
0x1a5: Return(); Pop(6)

0x1a6: Pop(0); Push(Stack[-2] - Stack[-3]);
0x1a7: @ irand(Stack[-2], Stack[-1])
0x1a8: Pop(1)
0x1a9: Stack[-8] = Stack[-1] + Stack[-3]; Pop(0);
0x1aa: Return(); Pop(6)

0x1ab: PushEmpty(int, int, int, int, int, int)
0x1ac: Push((int) 2)
0x1ad: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x1ae: IF (Stack[-1] == 0) GOTO 0x1b2; Pop(1)

0x1af: Stack[-3] = (int) 20
0x1b0: Stack[-2] = (int) 30
0x1b1: GOTO 0x1f0

0x1b2: Push((int) 3)
0x1b3: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x1b4: IF (Stack[-1] == 0) GOTO 0x1b8; Pop(1)

0x1b5: Stack[-3] = (int) 40
0x1b6: Stack[-2] = (int) 60
0x1b7: GOTO 0x1f0

0x1b8: Push((int) 4)
0x1b9: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x1ba: IF (Stack[-1] == 0) GOTO 0x1be; Pop(1)

0x1bb: Stack[-3] = (int) 50
0x1bc: Stack[-2] = (int) 70
0x1bd: GOTO 0x1f0

0x1be: Push((int) 5)
0x1bf: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x1c0: IF (Stack[-1] == 0) GOTO 0x1c4; Pop(1)

0x1c1: Stack[-3] = (int) 90
0x1c2: Stack[-2] = (int) 110
0x1c3: GOTO 0x1f0

0x1c4: Push((int) 6)
0x1c5: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x1c6: IF (Stack[-1] == 0) GOTO 0x1ca; Pop(1)

0x1c7: Stack[-3] = (int) 310
0x1c8: Stack[-2] = (int) 360
0x1c9: GOTO 0x1f0

0x1ca: Push((int) 7)
0x1cb: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x1cc: IF (Stack[-1] == 0) GOTO 0x1d0; Pop(1)

0x1cd: Stack[-3] = (int) 360
0x1ce: Stack[-2] = (int) 460
0x1cf: GOTO 0x1f0

0x1d0: Push((int) 8)
0x1d1: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x1d2: IF (Stack[-1] == 0) GOTO 0x1d6; Pop(1)

0x1d3: Stack[-3] = (int) 500
0x1d4: Stack[-2] = (int) 590
0x1d5: GOTO 0x1f0

0x1d6: Push((int) 9)
0x1d7: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x1d8: IF (Stack[-1] == 0) GOTO 0x1dc; Pop(1)

0x1d9: Stack[-3] = (int) 500
0x1da: Stack[-2] = (int) 590
0x1db: GOTO 0x1f0

0x1dc: Push((int) 10)
0x1dd: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x1de: IF (Stack[-1] == 0) GOTO 0x1e2; Pop(1)

0x1df: Stack[-3] = (int) 500
0x1e0: Stack[-2] = (int) 590
0x1e1: GOTO 0x1f0

0x1e2: Push((int) 11)
0x1e3: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x1e4: IF (Stack[-1] == 0) GOTO 0x1e8; Pop(1)

0x1e5: Stack[-3] = (int) 500
0x1e6: Stack[-2] = (int) 590
0x1e7: GOTO 0x1f0

0x1e8: Push((int) 12)
0x1e9: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x1ea: IF (Stack[-1] == 0) GOTO 0x1ee; Pop(1)

0x1eb: Stack[-3] = (int) 500
0x1ec: Stack[-2] = (int) 590
0x1ed: GOTO 0x1f0

0x1ee: Stack[-8] = (int) 0
0x1ef: Return(); Pop(6)

0x1f0: Pop(0); Push(Stack[-2] - Stack[-3]);
0x1f1: @ irand(Stack[-2], Stack[-1])
0x1f2: Pop(1)
0x1f3: Stack[-8] = Stack[-1] + Stack[-3]; Pop(0);
0x1f4: Return(); Pop(6)

