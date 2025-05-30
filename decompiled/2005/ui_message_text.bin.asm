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
		EVENT_0 Op = 0xf8 Vars = ()
		EVENT_3 Op = 0x143 Vars = (int, int)
		EVENT_8 Op = 0x159 Vars = (int, int)
		EVENT_10 Op = 0x160 Vars = ()
		EVENT_200 Op = 0x162 Vars = (int, string, object)


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
0x57: Call2 0x6c

0x58: Pop(0)
0x59: PushEmpty()
0x5a: Call2 0x81

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
0x66: Call2 0x6c

0x67: Pop(0)
0x68: PushEmpty()
0x69: Call2 0x81

0x6a: Pop(0)
0x6b: Return(); Pop(2)

0x6c: PushEmpty(int)
0x6d: Call2 0x91

0x6e: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x6f: Pop(1)
0x70: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] - Stack[3 + Tasks[-1].StackPointer]; Pop(0);
0x71: Push((int) 0)
0x72: Pop(1); Push((bool) Stack[1 + Tasks[-1].StackPointer] < Stack[-1])
0x73: IF (Stack[-1] == 0) GOTO 0x77; Pop(1)

0x74: Stack[1 + Tasks[-1].StackPointer] = (int)0
0x75: Stack[0 + Tasks[-1].StackPointer] = (int)0
0x76: GOTO 0x80

0x77: Pop(0); Push(( -Stack[0 + Tasks[-1].StackPointer])
0x78: Pop(1); Push((bool) Stack[-1] > Stack[1 + Tasks[-1].StackPointer])
0x79: IF (Stack[-1] == 0) GOTO 0x7c; Pop(1)

0x7a: Stack[0 + Tasks[-1].StackPointer] = -Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x7b: GOTO 0x80

0x7c: Push((int) 0)
0x7d: Pop(1); Push((bool) Stack[0 + Tasks[-1].StackPointer] > Stack[-1])
0x7e: IF (Stack[-1] == 0) GOTO 0x80; Pop(1)

0x7f: Stack[0 + Tasks[-1].StackPointer] = (int)0
0x80: Return(); Pop(0)

0x81: Push((int) 0)
0x82: Pop(1); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-1])
0x83: IF (Stack[-1] == 0) GOTO 0x89; Pop(1)

0x84: Push((int) 16384)
0x85: Push("scrollbar")
0x86: @ SendMessage(Stack[-2], Stack[-1])
0x87: Pop(2)
0x88: GOTO 0x90

0x89: Pop(0); Push(( -Stack[0 + Tasks[-1].StackPointer])
0x8a: Push((int) 100)
0x8b: Pop(2); Push(Stack[-2] * Stack[-1]);
0x8c: Pop(1); Push(Stack[-1] / Stack[1 + StackPtr]);
0x8d: Push("scrollbar")
0x8e: @ SendMessage(Stack[-2], Stack[-1])
0x8f: Pop(2)
0x90: Return(); Pop(0)

0x91: PushEmpty(int, object, object, object, int, int, string, string, int, int, int, object, object, object, int, int, string, string, int, int)
0x92: Stack[-10] = (int) 0
0x93: @@ get(Stack[-9], Stack[-4])
0x94: Pop(0)
0x95: @@ get(Stack[-8], Stack[-4])
0x96: Pop(0)
0x97: @@ get(Stack[-7], Stack[-4])
0x98: Pop(0)
0x99: @@ size(Stack[-6])
0x9a: Pop(0)
0x9b: Stack[-5] = (int) 0
0x9c: Pop(0); Push((bool) Stack[-5] < Stack[-6])
0x9d: IF (Stack[-1] == 0) GOTO 0xba; Pop(1)

0x9e: @@ get(Stack[-4], Stack[-5])
0x9f: Pop(0)
0xa0: @@ get(Stack[-3], Stack[-5])
0xa1: Pop(0)
0xa2: @@ get(Stack[-2], Stack[-5])
0xa3: Pop(0)
0xa4: Push("default")
0xa5: @ GetTextHeightInWidth(Stack[-2], Stack[-1], Stack[-2], Stack[-5])
0xa6: Pop(1)
0xa7: Stack[-10] = Stack[-10] + Stack[-1]; Pop(0);
0xa8: Pop(0); Push((bool) Stack[-2] == Stack[5 + Tasks[-1].StackPointer])
0xa9: IF (Stack[-1] == 0) GOTO 0xb5; Pop(1)

0xaa: Push((int) 5)
0xab: Stack[-11] = Stack[-11] + Stack[-1]; Pop(1);
0xac: Push("default")
0xad: Push((int) 15)
0xae: Pop(1); Push(Stack[2 + StackPtr] - Stack[-1]);
0xaf: @ GetTextHeightInWidth(Stack[-3], Stack[-2], Stack[-1], Stack[-5])
0xb0: Pop(2)
0xb1: Stack[-10] = Stack[-10] + Stack[-1]; Pop(0);
0xb2: Push((int) 5)
0xb3: Stack[-11] = Stack[-11] + Stack[-1]; Pop(1);
0xb4: GOTO 0xb7

0xb5: Push((int) 5)
0xb6: Stack[-11] = Stack[-11] + Stack[-1]; Pop(1);
0xb7: Push((int) 1)
0xb8: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0xb9: GOTO 0x9c

0xba: Stack[-21] = Stack[-10]
0xbb: Return(); Pop(20)

0xbc: Stack[-7] = 0
0xbd: Stack[-8] = 0
0xbe: Stack[-9] = 0
0xbf: PushEmpty(int, object, object, object, int, int, int, string, string, int, int, int, object, object, object, int, int, int, string, string, int, int)
0xc0: Stack[-11] = Stack[0 + Tasks[-1].StackPointer]
0xc1: @@ get(Stack[-10], Stack[-4])
0xc2: Pop(0)
0xc3: @@ get(Stack[-9], Stack[-4])
0xc4: Pop(0)
0xc5: @@ get(Stack[-8], Stack[-4])
0xc6: Pop(0)
0xc7: @@ size(Stack[-7])
0xc8: Pop(0)
0xc9: Stack[-6] = (int) 0
0xca: Pop(0); Push((bool) Stack[-6] < Stack[-7])
0xcb: IF (Stack[-1] == 0) GOTO 0xf3; Pop(1)

0xcc: Stack[-5] = Stack[-11]
0xcd: @@ get(Stack[-4], Stack[-6])
0xce: Pop(0)
0xcf: @@ get(Stack[-3], Stack[-6])
0xd0: Pop(0)
0xd1: @@ get(Stack[-2], Stack[-6])
0xd2: Pop(0)
0xd3: Push("default")
0xd4: @ GetTextHeightInWidth(Stack[-2], Stack[-1], Stack[-2], Stack[-5])
0xd5: Pop(1)
0xd6: Stack[-11] = Stack[-11] + Stack[-1]; Pop(0);
0xd7: Pop(0); Push((bool) Stack[-2] == Stack[5 + Tasks[-1].StackPointer])
0xd8: IF (Stack[-1] == 0) GOTO 0xe4; Pop(1)

0xd9: Push((int) 5)
0xda: Stack[-12] = Stack[-12] + Stack[-1]; Pop(1);
0xdb: Push("default")
0xdc: Push((int) 15)
0xdd: Pop(1); Push(Stack[2 + StackPtr] - Stack[-1]);
0xde: @ GetTextHeightInWidth(Stack[-3], Stack[-2], Stack[-1], Stack[-5])
0xdf: Pop(2)
0xe0: Stack[-11] = Stack[-11] + Stack[-1]; Pop(0);
0xe1: Push((int) 5)
0xe2: Stack[-12] = Stack[-12] + Stack[-1]; Pop(1);
0xe3: GOTO 0xe6

0xe4: Push((int) 5)
0xe5: Stack[-12] = Stack[-12] + Stack[-1]; Pop(1);
0xe6: PushEmpty(bool)
0xe7: Stack[-1] = (bool) 0
0xe8: Pop(0); Push((bool) Stack[-24] > Stack[-6])
0xe9: IF (Stack[-1] == 0) GOTO 0xed; Pop(1)

0xea: Pop(0); Push((bool) Stack[-24] < Stack[-12])
0xeb: IF (Stack[-1] == 0) GOTO 0xed; Pop(1)

0xec: Stack[-1] = (bool) 1
0xed: IF (Stack[-1] == 0) GOTO 0xf0; Pop(1)

0xee: Stack[-24] = Stack[-2]
0xef: Return(); Pop(22)

0xf0: Push((int) 1)
0xf1: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0xf2: GOTO 0xca

0xf3: Stack[-24] = (int) -1
0xf4: Return(); Pop(22)

0xf5: Stack[-8] = 0
0xf6: Stack[-9] = 0
0xf7: Stack[-10] = 0
0xf8: PushEmpty(int, object, object, object, int, int, string, string, int, int, int, object, object, object, int, int, string, string, int, int)
0xf9: Stack[-10] = Stack[0 + Tasks[-1].StackPointer]
0xfa: @@ get(Stack[-9], Stack[-4])
0xfb: Pop(0)
0xfc: @@ get(Stack[-8], Stack[-4])
0xfd: Pop(0)
0xfe: @@ get(Stack[-7], Stack[-4])
0xff: Pop(0)
0x100: @@ size(Stack[-6])
0x101: Pop(0)
0x102: Stack[-5] = (int) 0
0x103: Pop(0); Push((bool) Stack[-5] < Stack[-6])
0x104: IF (Stack[-1] == 0) GOTO 0x13f; Pop(1)

0x105: @@ get(Stack[-4], Stack[-5])
0x106: Pop(0)
0x107: @@ get(Stack[-3], Stack[-5])
0x108: Pop(0)
0x109: @@ get(Stack[-2], Stack[-5])
0x10a: Pop(0)
0x10b: Pop(0); Push((bool) Stack[-2] == Stack[6 + Tasks[-1].StackPointer])
0x10c: IF (Stack[-1] == 0) GOTO 0x115; Pop(1)

0x10d: Push("default")
0x10e: Push((int) 0)
0x10f: Push((float)1.0)
0x110: Push((float)1.0)
0x111: Push((float)1.0)
0x112: @ PrintInWidth(Stack[-6], Stack[-5], Stack[-4], Stack[-15], Stack[-2], Stack[-9], Stack[-3], Stack[-2], Stack[-1])
0x113: Pop(5)
0x114: GOTO 0x11c

0x115: Push("default")
0x116: Push((int) 0)
0x117: Push((float)0.804)
0x118: Push((float)0.804)
0x119: Push((float)0.804)
0x11a: @ PrintInWidth(Stack[-6], Stack[-5], Stack[-4], Stack[-15], Stack[-2], Stack[-9], Stack[-3], Stack[-2], Stack[-1])
0x11b: Pop(5)
0x11c: Stack[-10] = Stack[-10] + Stack[-1]; Pop(0);
0x11d: Pop(0); Push((bool) Stack[-2] == Stack[5 + Tasks[-1].StackPointer])
0x11e: IF (Stack[-1] == 0) GOTO 0x13a; Pop(1)

0x11f: Push((int) 5)
0x120: Stack[-11] = Stack[-11] + Stack[-1]; Pop(1);
0x121: Pop(0); Push((bool) Stack[-2] == Stack[6 + Tasks[-1].StackPointer])
0x122: IF (Stack[-1] == 0) GOTO 0x12d; Pop(1)

0x123: Push("default")
0x124: Push((int) 15)
0x125: Push((int) 15)
0x126: Pop(1); Push(Stack[2 + StackPtr] - Stack[-1]);
0x127: Push((float)0.804)
0x128: Push((float)0.804)
0x129: Push((float)0.804)
0x12a: @ PrintInWidth(Stack[-7], Stack[-6], Stack[-5], Stack[-16], Stack[-4], Stack[-9], Stack[-3], Stack[-2], Stack[-1])
0x12b: Pop(6)
0x12c: GOTO 0x136

0x12d: Push("default")
0x12e: Push((int) 15)
0x12f: Push((int) 15)
0x130: Pop(1); Push(Stack[2 + StackPtr] - Stack[-1]);
0x131: Push((float)0.698)
0x132: Push((float)0.659)
0x133: Push((float)0.647)
0x134: @ PrintInWidth(Stack[-7], Stack[-6], Stack[-5], Stack[-16], Stack[-4], Stack[-9], Stack[-3], Stack[-2], Stack[-1])
0x135: Pop(6)
0x136: Stack[-10] = Stack[-10] + Stack[-1]; Pop(0);
0x137: Push((int) 5)
0x138: Stack[-11] = Stack[-11] + Stack[-1]; Pop(1);
0x139: GOTO 0x13c

0x13a: Push((int) 5)
0x13b: Stack[-11] = Stack[-11] + Stack[-1]; Pop(1);
0x13c: Push((int) 1)
0x13d: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x13e: GOTO 0x103

0x13f: Return(); Pop(20)

0x140: Stack[-7] = 0
0x141: Stack[-8] = 0
0x142: Stack[-9] = 0
0x143: PushEmpty(int, int)
0x144: PushEmpty(int, int)
0x145: Stack[-1] = Stack[-5]
0x146: Call2 0xbf

0x147: Stack[-3] = Stack[-2]
0x148: Pop(2)
0x149: Push((int) -1)
0x14a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x14b: IF (Stack[-1] == 0) GOTO 0x14d; Pop(1)

0x14c: Return(); Pop(2)

0x14d: Pop(0); Push((bool) Stack[-1] == Stack[5 + Tasks[-1].StackPointer])
0x14e: IF (Stack[-1] == 0) GOTO 0x151; Pop(1)

0x14f: Stack[5 + Tasks[-1].StackPointer] = (int)-1
0x150: GOTO 0x152

0x151: Stack[5 + Tasks[-1].StackPointer] = Stack[-1]
0x152: PushEmpty()
0x153: Call2 0x6c

0x154: Pop(0)
0x155: PushEmpty()
0x156: Call2 0x81

0x157: Pop(0)
0x158: Return(); Pop(2)

0x159: PushEmpty()
0x15a: PushEmpty(int, int)
0x15b: Stack[-1] = Stack[-3]
0x15c: Call2 0xbf

0x15d: Stack[6 + Tasks[-1].StackPointer] = Stack[-2]
0x15e: Pop(2)
0x15f: Return(); Pop(0)

0x160: Stack[6 + Tasks[-1].StackPointer] = (int)-1
0x161: Return(); Pop(0)

0x162: PushEmpty()
0x163: Push("scrollbar")
0x164: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x165: IF (Stack[-1] == 0) GOTO 0x16f; Pop(1)

0x166: Pop(0); Push(( -Stack[1 + Tasks[-1].StackPointer])
0x167: Pop(1); Push(Stack[-1] * Stack[-4]);
0x168: Push((int) 100)
0x169: Stack[0 + Tasks[-1].StackPointer] = Stack[-2] / Stack[-1]; Pop(2);
0x16a: PushEmpty()
0x16b: Call2 0x6c

0x16c: Pop(0)
0x16d: Return(); Pop(0)

0x16e: GOTO 0x17f

0x16f: Push("message")
0x170: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x171: IF (Stack[-1] == 0) GOTO 0x17f; Pop(1)

0x172: Push((int) 32768)
0x173: Pop(1); Push(Stack[-4] & Stack[-1]);
0x174: IF (Stack[-1] == 0) GOTO 0x178; Pop(1)

0x175: Push((int) 32767)
0x176: Stack[5 + Tasks[-1].StackPointer] = Stack[-4] & Stack[-1]; Pop(1);
0x177: GOTO 0x17f

0x178: Stack[4 + Tasks[-1].StackPointer] = Stack[-3]
0x179: PushEmpty()
0x17a: Call2 0x6c

0x17b: Pop(0)
0x17c: PushEmpty()
0x17d: Call2 0x81

0x17e: Pop(0)
0x17f: Return(); Pop(0)

