GlobalVarCount = 0

Strings:
	add
	get
	scrollbar
	size
	default
	message

Import:
	SetOwnerDraw (1 args)
	EnableClipping (1 args)
	GetWindowSize (2 args)
	CreateObjectVector (1 args)
	CreateStringVector (1 args)
	CreateIntVector (1 args)
	GetMessageCount (1 args)
	GetMessage (4 args)
	ProcessEvents (0 args)
	SendMessage (2 args)
	GetTextHeightInWidth (4 args)
	PrintInWidth (9 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (int, int, int, int, int, int, int, object, object, object) Params = 0
		EVENT_15 Op = 0x5f Vars = (int, int, float)
		EVENT_0 Op = 0x10c Vars = ()
		EVENT_3 Op = 0x157 Vars = (int, int)
		EVENT_8 Op = 0x16d Vars = (int, int)
		EVENT_10 Op = 0x174 Vars = ()
		EVENT_200 Op = 0x176 Vars = (int, string, object)


0x0: PushEmpty(int, object, int, int, float, string, string, int, int, object, object, object, int, object, int, int, float, string, string, int, int, object, object, object)
0x1: Push((bool) 1)
0x2: @ SetOwnerDraw(Stack[-1])
0x3: Pop(1)
0x4: Push((bool) 1)
0x5: @ EnableClipping(Stack[-1])
0x6: Pop(1)
0x7: @ GetWindowSize(Stack[-2], Stack[-3])
0x8: Pop(0)
0x9: Stack[0 + Tasks[-1].StackPointer] = (int)0
0xa: Stack[4 + Tasks[-1].StackPointer] = (int)0
0xb: Stack[5 + Tasks[-1].StackPointer] = (int)-1
0xc: @ CreateObjectVector(Stack[-7])
0xd: Pop(0)
0xe: @ CreateObjectVector(Stack[-8])
0xf: Pop(0)
0x10: @ CreateObjectVector(Stack[-9])
0x11: Pop(0)
0x12: Stack[-12] = (int) 0
0x13: Push((int) 12)
0x14: Pop(1); Push((bool) Stack[-13] < Stack[-1])
0x15: IF (Stack[-1] == 0) GOTO 0x26; Pop(1)

0x16: @ CreateStringVector(Stack[-11])
0x17: Pop(0)
0x18: @@ add(Stack[-11])
0x19: Pop(0)
0x1a: @ CreateStringVector(Stack[-11])
0x1b: Pop(0)
0x1c: @@ add(Stack[-11])
0x1d: Pop(0)
0x1e: @ CreateIntVector(Stack[-11])
0x1f: Pop(0)
0x20: @@ add(Stack[-11])
0x21: Pop(0)
0x22: Stack[-11] = 0
0x23: Push((int) 1)
0x24: Stack[-13] = Stack[-13] + Stack[-1]; Pop(1);
0x25: GOTO 0x13

0x26: @ GetMessageCount(Stack[-10])
0x27: Pop(0)
0x28: Push(Stack[-10])
0x29: IF (Stack[-1] == 0) GOTO 0x56; Pop(1)

0x2a: Push((int) 1)
0x2b: Stack[-10] = Stack[-11] - Stack[-1]; Pop(1);
0x2c: Push((int) 0)
0x2d: Pop(1); Push((bool) Stack[-10] >= Stack[-1])
0x2e: IF (Stack[-1] == 0) GOTO 0x54; Pop(1)

0x2f: @ GetMessage(Stack[-9], Stack[-7], Stack[-6], Stack[-8])
0x30: Pop(0)
0x31: Push((int) 24)
0x32: Stack[-6] = Stack[-9] / Stack[-1]; Pop(1);
0x33: Push((int) 24)
0x34: Pop(1); Push(Stack[-6] * Stack[-1]);
0x35: Stack[-5] = Stack[-9] - Stack[-1]; Pop(1);
0x36: PushEmpty(bool)
0x37: Stack[-1] = (bool) 0
0x38: Push((int) 7)
0x39: Pop(1); Push((bool) Stack[-6] < Stack[-1])
0x3a: IF (Stack[-1] == 0) GOTO 0x3f; Pop(1)

0x3b: Push((int) 0)
0x3c: Pop(1); Push((bool) Stack[-7] > Stack[-1])
0x3d: IF (Stack[-1] == 0) GOTO 0x3f; Pop(1)

0x3e: Stack[-1] = (bool) 1
0x3f: IF (Stack[-1] == 0) GOTO 0x42; Pop(1)

0x40: Push((int) -1)
0x41: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x42: @@ get(Stack[-3], Stack[-5])
0x43: Pop(0)
0x44: @@ get(Stack[-2], Stack[-5])
0x45: Pop(0)
0x46: @@ get(Stack[-1], Stack[-5])
0x47: Pop(0)
0x48: @@ add(Stack[-7])
0x49: Pop(0)
0x4a: @@ add(Stack[-6])
0x4b: Pop(0)
0x4c: @@ add(Stack[-9])
0x4d: Pop(0)
0x4e: Stack[-1] = 0
0x4f: Stack[-2] = 0
0x50: Stack[-3] = 0
0x51: Push((int) -1)
0x52: Stack[-10] = Stack[-10] + Stack[-1]; Pop(1);
0x53: GOTO 0x2c

0x54: Push((int) 1)
0x55: Stack[5 + Tasks[-1].StackPointer] = Stack[-11] - Stack[-1]; Pop(1);
0x56: PushEmpty()
0x57: Call2 0x80

0x58: Pop(0)
0x59: PushEmpty()
0x5a: Call2 0x95

0x5b: Pop(0)
0x5c: @ ProcessEvents()
0x5d: Pop(0)
0x5e: Return(); Pop(24)

0x5f: PushEmpty(int, int)
0x60: Push((int) 5)
0x61: Pop(1); Push(Stack[-4] * Stack[-1]);
0x62: Push((int) 2)
0x63: Stack[-3] = Stack[-2] * Stack[-1]; Pop(2);
0x64: Stack[0 + Tasks[-1].StackPointer] = Stack[0 + Tasks[-1].StackPointer] + Stack[-1]; Pop(0);
0x65: PushEmpty()
0x66: Call2 0x80

0x67: Pop(0)
0x68: PushEmpty()
0x69: Call2 0x95

0x6a: Pop(0)
0x6b: Return(); Pop(2)

0x6c: PushEmpty(int, int)
0x6d: Stack[-1] = (int) 20
0x6e: Stack[0 + Tasks[-1].StackPointer] = Stack[0 + Tasks[-1].StackPointer] + Stack[-1]; Pop(0);
0x6f: PushEmpty()
0x70: Call2 0x80

0x71: Pop(0)
0x72: PushEmpty()
0x73: Call2 0x95

0x74: Pop(0)
0x75: Return(); Pop(2)

0x76: PushEmpty(int, int)
0x77: Stack[-1] = (int) -20
0x78: Stack[0 + Tasks[-1].StackPointer] = Stack[0 + Tasks[-1].StackPointer] + Stack[-1]; Pop(0);
0x79: PushEmpty()
0x7a: Call2 0x80

0x7b: Pop(0)
0x7c: PushEmpty()
0x7d: Call2 0x95

0x7e: Pop(0)
0x7f: Return(); Pop(2)

0x80: PushEmpty(int)
0x81: Call2 0xa5

0x82: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x83: Pop(1)
0x84: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] - Stack[3 + Tasks[-1].StackPointer]; Pop(0);
0x85: Push((int) 0)
0x86: Pop(1); Push((bool) Stack[1 + Tasks[-1].StackPointer] < Stack[-1])
0x87: IF (Stack[-1] == 0) GOTO 0x8b; Pop(1)

0x88: Stack[1 + Tasks[-1].StackPointer] = (int)0
0x89: Stack[0 + Tasks[-1].StackPointer] = (int)0
0x8a: GOTO 0x94

0x8b: Pop(0); Push(( -Stack[0 + Tasks[-1].StackPointer])
0x8c: Pop(1); Push((bool) Stack[-1] > Stack[1 + Tasks[-1].StackPointer])
0x8d: IF (Stack[-1] == 0) GOTO 0x90; Pop(1)

0x8e: Stack[0 + Tasks[-1].StackPointer] = -Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x8f: GOTO 0x94

0x90: Push((int) 0)
0x91: Pop(1); Push((bool) Stack[0 + Tasks[-1].StackPointer] > Stack[-1])
0x92: IF (Stack[-1] == 0) GOTO 0x94; Pop(1)

0x93: Stack[0 + Tasks[-1].StackPointer] = (int)0
0x94: Return(); Pop(0)

0x95: Push((int) 0)
0x96: Pop(1); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-1])
0x97: IF (Stack[-1] == 0) GOTO 0x9d; Pop(1)

0x98: Push((int) 16384)
0x99: Push("scrollbar")
0x9a: @ SendMessage(Stack[-2], Stack[-1])
0x9b: Pop(2)
0x9c: GOTO 0xa4

0x9d: Pop(0); Push(( -Stack[0 + Tasks[-1].StackPointer])
0x9e: Push((int) 100)
0x9f: Pop(2); Push(Stack[-2] * Stack[-1]);
0xa0: Pop(1); Push(Stack[-1] / Stack[1 + StackPtr]);
0xa1: Push("scrollbar")
0xa2: @ SendMessage(Stack[-2], Stack[-1])
0xa3: Pop(2)
0xa4: Return(); Pop(0)

0xa5: PushEmpty(int, object, object, object, int, int, string, string, int, int, int, object, object, object, int, int, string, string, int, int)
0xa6: Stack[-10] = (int) 0
0xa7: @@ get(Stack[-9], Stack[-4])
0xa8: Pop(0)
0xa9: @@ get(Stack[-8], Stack[-4])
0xaa: Pop(0)
0xab: @@ get(Stack[-7], Stack[-4])
0xac: Pop(0)
0xad: @@ size(Stack[-6])
0xae: Pop(0)
0xaf: Stack[-5] = (int) 0
0xb0: Pop(0); Push((bool) Stack[-5] < Stack[-6])
0xb1: IF (Stack[-1] == 0) GOTO 0xce; Pop(1)

0xb2: @@ get(Stack[-4], Stack[-5])
0xb3: Pop(0)
0xb4: @@ get(Stack[-3], Stack[-5])
0xb5: Pop(0)
0xb6: @@ get(Stack[-2], Stack[-5])
0xb7: Pop(0)
0xb8: Push("default")
0xb9: @ GetTextHeightInWidth(Stack[-2], Stack[-1], Stack[-2], Stack[-5])
0xba: Pop(1)
0xbb: Stack[-10] = Stack[-10] + Stack[-1]; Pop(0);
0xbc: Pop(0); Push((bool) Stack[-2] == Stack[5 + Tasks[-1].StackPointer])
0xbd: IF (Stack[-1] == 0) GOTO 0xc9; Pop(1)

0xbe: Push((int) 5)
0xbf: Stack[-11] = Stack[-11] + Stack[-1]; Pop(1);
0xc0: Push("default")
0xc1: Push((int) 15)
0xc2: Pop(1); Push(Stack[2 + StackPtr] - Stack[-1]);
0xc3: @ GetTextHeightInWidth(Stack[-3], Stack[-2], Stack[-1], Stack[-5])
0xc4: Pop(2)
0xc5: Stack[-10] = Stack[-10] + Stack[-1]; Pop(0);
0xc6: Push((int) 5)
0xc7: Stack[-11] = Stack[-11] + Stack[-1]; Pop(1);
0xc8: GOTO 0xcb

0xc9: Push((int) 5)
0xca: Stack[-11] = Stack[-11] + Stack[-1]; Pop(1);
0xcb: Push((int) 1)
0xcc: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0xcd: GOTO 0xb0

0xce: Stack[-21] = Stack[-10]
0xcf: Return(); Pop(20)

0xd0: Stack[-7] = 0
0xd1: Stack[-8] = 0
0xd2: Stack[-9] = 0
0xd3: PushEmpty(int, object, object, object, int, int, int, string, string, int, int, int, object, object, object, int, int, int, string, string, int, int)
0xd4: Stack[-11] = Stack[0 + Tasks[-1].StackPointer]
0xd5: @@ get(Stack[-10], Stack[-4])
0xd6: Pop(0)
0xd7: @@ get(Stack[-9], Stack[-4])
0xd8: Pop(0)
0xd9: @@ get(Stack[-8], Stack[-4])
0xda: Pop(0)
0xdb: @@ size(Stack[-7])
0xdc: Pop(0)
0xdd: Stack[-6] = (int) 0
0xde: Pop(0); Push((bool) Stack[-6] < Stack[-7])
0xdf: IF (Stack[-1] == 0) GOTO 0x107; Pop(1)

0xe0: Stack[-5] = Stack[-11]
0xe1: @@ get(Stack[-4], Stack[-6])
0xe2: Pop(0)
0xe3: @@ get(Stack[-3], Stack[-6])
0xe4: Pop(0)
0xe5: @@ get(Stack[-2], Stack[-6])
0xe6: Pop(0)
0xe7: Push("default")
0xe8: @ GetTextHeightInWidth(Stack[-2], Stack[-1], Stack[-2], Stack[-5])
0xe9: Pop(1)
0xea: Stack[-11] = Stack[-11] + Stack[-1]; Pop(0);
0xeb: Pop(0); Push((bool) Stack[-2] == Stack[5 + Tasks[-1].StackPointer])
0xec: IF (Stack[-1] == 0) GOTO 0xf8; Pop(1)

0xed: Push((int) 5)
0xee: Stack[-12] = Stack[-12] + Stack[-1]; Pop(1);
0xef: Push("default")
0xf0: Push((int) 15)
0xf1: Pop(1); Push(Stack[2 + StackPtr] - Stack[-1]);
0xf2: @ GetTextHeightInWidth(Stack[-3], Stack[-2], Stack[-1], Stack[-5])
0xf3: Pop(2)
0xf4: Stack[-11] = Stack[-11] + Stack[-1]; Pop(0);
0xf5: Push((int) 5)
0xf6: Stack[-12] = Stack[-12] + Stack[-1]; Pop(1);
0xf7: GOTO 0xfa

0xf8: Push((int) 5)
0xf9: Stack[-12] = Stack[-12] + Stack[-1]; Pop(1);
0xfa: PushEmpty(bool)
0xfb: Stack[-1] = (bool) 0
0xfc: Pop(0); Push((bool) Stack[-24] > Stack[-6])
0xfd: IF (Stack[-1] == 0) GOTO 0x101; Pop(1)

0xfe: Pop(0); Push((bool) Stack[-24] < Stack[-12])
0xff: IF (Stack[-1] == 0) GOTO 0x101; Pop(1)

0x100: Stack[-1] = (bool) 1
0x101: IF (Stack[-1] == 0) GOTO 0x104; Pop(1)

0x102: Stack[-24] = Stack[-2]
0x103: Return(); Pop(22)

0x104: Push((int) 1)
0x105: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x106: GOTO 0xde

0x107: Stack[-24] = (int) -1
0x108: Return(); Pop(22)

0x109: Stack[-8] = 0
0x10a: Stack[-9] = 0
0x10b: Stack[-10] = 0
0x10c: PushEmpty(int, object, object, object, int, int, string, string, int, int, int, object, object, object, int, int, string, string, int, int)
0x10d: Stack[-10] = Stack[0 + Tasks[-1].StackPointer]
0x10e: @@ get(Stack[-9], Stack[-4])
0x10f: Pop(0)
0x110: @@ get(Stack[-8], Stack[-4])
0x111: Pop(0)
0x112: @@ get(Stack[-7], Stack[-4])
0x113: Pop(0)
0x114: @@ size(Stack[-6])
0x115: Pop(0)
0x116: Stack[-5] = (int) 0
0x117: Pop(0); Push((bool) Stack[-5] < Stack[-6])
0x118: IF (Stack[-1] == 0) GOTO 0x153; Pop(1)

0x119: @@ get(Stack[-4], Stack[-5])
0x11a: Pop(0)
0x11b: @@ get(Stack[-3], Stack[-5])
0x11c: Pop(0)
0x11d: @@ get(Stack[-2], Stack[-5])
0x11e: Pop(0)
0x11f: Pop(0); Push((bool) Stack[-2] == Stack[6 + Tasks[-1].StackPointer])
0x120: IF (Stack[-1] == 0) GOTO 0x129; Pop(1)

0x121: Push("default")
0x122: Push((int) 0)
0x123: Push((float)1.0)
0x124: Push((float)1.0)
0x125: Push((float)1.0)
0x126: @ PrintInWidth(Stack[-6], Stack[-5], Stack[-4], Stack[-15], Stack[-2], Stack[-9], Stack[-3], Stack[-2], Stack[-1])
0x127: Pop(5)
0x128: GOTO 0x130

0x129: Push("default")
0x12a: Push((int) 0)
0x12b: Push((float)0.804)
0x12c: Push((float)0.804)
0x12d: Push((float)0.804)
0x12e: @ PrintInWidth(Stack[-6], Stack[-5], Stack[-4], Stack[-15], Stack[-2], Stack[-9], Stack[-3], Stack[-2], Stack[-1])
0x12f: Pop(5)
0x130: Stack[-10] = Stack[-10] + Stack[-1]; Pop(0);
0x131: Pop(0); Push((bool) Stack[-2] == Stack[5 + Tasks[-1].StackPointer])
0x132: IF (Stack[-1] == 0) GOTO 0x14e; Pop(1)

0x133: Push((int) 5)
0x134: Stack[-11] = Stack[-11] + Stack[-1]; Pop(1);
0x135: Pop(0); Push((bool) Stack[-2] == Stack[6 + Tasks[-1].StackPointer])
0x136: IF (Stack[-1] == 0) GOTO 0x141; Pop(1)

0x137: Push("default")
0x138: Push((int) 15)
0x139: Push((int) 15)
0x13a: Pop(1); Push(Stack[2 + StackPtr] - Stack[-1]);
0x13b: Push((float)0.804)
0x13c: Push((float)0.804)
0x13d: Push((float)0.804)
0x13e: @ PrintInWidth(Stack[-7], Stack[-6], Stack[-5], Stack[-16], Stack[-4], Stack[-9], Stack[-3], Stack[-2], Stack[-1])
0x13f: Pop(6)
0x140: GOTO 0x14a

0x141: Push("default")
0x142: Push((int) 15)
0x143: Push((int) 15)
0x144: Pop(1); Push(Stack[2 + StackPtr] - Stack[-1]);
0x145: Push((float)0.698)
0x146: Push((float)0.659)
0x147: Push((float)0.647)
0x148: @ PrintInWidth(Stack[-7], Stack[-6], Stack[-5], Stack[-16], Stack[-4], Stack[-9], Stack[-3], Stack[-2], Stack[-1])
0x149: Pop(6)
0x14a: Stack[-10] = Stack[-10] + Stack[-1]; Pop(0);
0x14b: Push((int) 5)
0x14c: Stack[-11] = Stack[-11] + Stack[-1]; Pop(1);
0x14d: GOTO 0x150

0x14e: Push((int) 5)
0x14f: Stack[-11] = Stack[-11] + Stack[-1]; Pop(1);
0x150: Push((int) 1)
0x151: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x152: GOTO 0x117

0x153: Return(); Pop(20)

0x154: Stack[-7] = 0
0x155: Stack[-8] = 0
0x156: Stack[-9] = 0
0x157: PushEmpty(int, int)
0x158: PushEmpty(int, int)
0x159: Stack[-1] = Stack[-5]
0x15a: Call2 0xd3

0x15b: Stack[-3] = Stack[-2]
0x15c: Pop(2)
0x15d: Push((int) -1)
0x15e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x15f: IF (Stack[-1] == 0) GOTO 0x161; Pop(1)

0x160: Return(); Pop(2)

0x161: Pop(0); Push((bool) Stack[-1] == Stack[5 + Tasks[-1].StackPointer])
0x162: IF (Stack[-1] == 0) GOTO 0x165; Pop(1)

0x163: Stack[5 + Tasks[-1].StackPointer] = (int)-1
0x164: GOTO 0x166

0x165: Stack[5 + Tasks[-1].StackPointer] = Stack[-1]
0x166: PushEmpty()
0x167: Call2 0x80

0x168: Pop(0)
0x169: PushEmpty()
0x16a: Call2 0x95

0x16b: Pop(0)
0x16c: Return(); Pop(2)

0x16d: PushEmpty()
0x16e: PushEmpty(int, int)
0x16f: Stack[-1] = Stack[-3]
0x170: Call2 0xd3

0x171: Stack[6 + Tasks[-1].StackPointer] = Stack[-2]
0x172: Pop(2)
0x173: Return(); Pop(0)

0x174: Stack[6 + Tasks[-1].StackPointer] = (int)-1
0x175: Return(); Pop(0)

0x176: PushEmpty()
0x177: Push("scrollbar")
0x178: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x179: IF (Stack[-1] == 0) GOTO 0x183; Pop(1)

0x17a: Pop(0); Push(( -Stack[1 + Tasks[-1].StackPointer])
0x17b: Pop(1); Push(Stack[-1] * Stack[-4]);
0x17c: Push((int) 100)
0x17d: Stack[0 + Tasks[-1].StackPointer] = Stack[-2] / Stack[-1]; Pop(2);
0x17e: PushEmpty()
0x17f: Call2 0x80

0x180: Pop(0)
0x181: Return(); Pop(0)

0x182: GOTO 0x1a1

0x183: Push("message")
0x184: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x185: IF (Stack[-1] == 0) GOTO 0x1a1; Pop(1)

0x186: Push((int) 32768)
0x187: Pop(1); Push(Stack[-4] & Stack[-1]);
0x188: IF (Stack[-1] == 0) GOTO 0x18c; Pop(1)

0x189: Push((int) 32767)
0x18a: Stack[5 + Tasks[-1].StackPointer] = Stack[-4] & Stack[-1]; Pop(1);
0x18b: GOTO 0x1a1

0x18c: Push((int) 1000)
0x18d: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x18e: IF (Stack[-1] == 0) GOTO 0x193; Pop(1)

0x18f: PushEmpty()
0x190: Call2 0x76

0x191: Pop(0)
0x192: GOTO 0x1a1

0x193: Push((int) 1001)
0x194: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x195: IF (Stack[-1] == 0) GOTO 0x19a; Pop(1)

0x196: PushEmpty()
0x197: Call2 0x6c

0x198: Pop(0)
0x199: GOTO 0x1a1

0x19a: Stack[4 + Tasks[-1].StackPointer] = Stack[-3]
0x19b: PushEmpty()
0x19c: Call2 0x80

0x19d: Pop(0)
0x19e: PushEmpty()
0x19f: Call2 0x95

0x1a0: Pop(0)
0x1a1: Return(); Pop(0)

