GlobalVarCount = 0

Strings:
	p_scrollbar
	default
	add
	history_text
	Error: missing replic
	ERROR: missing answer

Import:
	GetWindowSize (2 args)
	EnableClipping (1 args)
	CaptureKeyboard (0 args)
	SetOwnerDraw (1 args)
	ProcessEvents (0 args)
	SendMessage (2 args)
	GetTextHeightInWidth (4 args)
	GetAnswerCount (1 args)
	PrintInWidth (9 args)
	SelectAnswer (2 args)
	CreateStringVector (1 args)
	SendMessage (3 args)
	GetFontHeight (2 args)
	HideCursor (0 args)
	GetReplic (1 args)
	GetAnswer (2 args)
	GetAnswer (3 args)
	GetAnswer (4 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (int, int, int, int, int, int, int) Params = 0
		EVENT_0 Op = 0x60 Vars = ()
		EVENT_8 Op = 0x9f Vars = (int, int)
		EVENT_3 Op = 0xf7 Vars = (int, int)
		EVENT_15 Op = 0xfc Vars = (int, int, float)
		EVENT_200 Op = 0x106 Vars = (int, string, object)
		EVENT_101 Op = 0x135 Vars = (int)
		EVENT_102 Op = 0x148 Vars = (int)


0x0: Stack[3 + Tasks[-1].StackPointer] = (int)-1
0x1: Stack[0 + Tasks[-1].StackPointer] = (int)0
0x2: @ GetWindowSize(Stack[-5], Stack[-6])
0x3: Pop(0)
0x4: Push((bool) 1)
0x5: @ EnableClipping(Stack[-1])
0x6: Pop(1)
0x7: @ CaptureKeyboard()
0x8: Pop(0)
0x9: Push((bool) 1)
0xa: @ SetOwnerDraw(Stack[-1])
0xb: Pop(1)
0xc: PushEmpty()
0xd: Call2 0x12

0xe: Pop(0)
0xf: @ ProcessEvents()
0x10: Pop(0)
0x11: Return(); Pop(0)

0x12: PushEmpty(int)
0x13: Call2 0x34

0x14: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x15: Pop(1)
0x16: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] - Stack[6 + Tasks[-1].StackPointer]; Pop(0);
0x17: Push((int) 0)
0x18: Pop(1); Push((bool) Stack[1 + Tasks[-1].StackPointer] < Stack[-1])
0x19: IF (Stack[-1] == 0) GOTO 0x1b; Pop(1)

0x1a: Stack[1 + Tasks[-1].StackPointer] = (int)0
0x1b: Pop(0); Push(( -Stack[0 + Tasks[-1].StackPointer])
0x1c: Pop(1); Push((bool) Stack[-1] > Stack[1 + Tasks[-1].StackPointer])
0x1d: IF (Stack[-1] == 0) GOTO 0x20; Pop(1)

0x1e: Stack[0 + Tasks[-1].StackPointer] = -Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x1f: GOTO 0x24

0x20: Push((int) 0)
0x21: Pop(1); Push((bool) Stack[0 + Tasks[-1].StackPointer] > Stack[-1])
0x22: IF (Stack[-1] == 0) GOTO 0x24; Pop(1)

0x23: Stack[0 + Tasks[-1].StackPointer] = (int)0
0x24: Push((int) 0)
0x25: Pop(1); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-1])
0x26: IF (Stack[-1] == 0) GOTO 0x2c; Pop(1)

0x27: Push((int) 16384)
0x28: Push("p_scrollbar")
0x29: @ SendMessage(Stack[-2], Stack[-1])
0x2a: Pop(2)
0x2b: GOTO 0x33

0x2c: Pop(0); Push(( -Stack[0 + Tasks[-1].StackPointer])
0x2d: Push((int) 100)
0x2e: Pop(2); Push(Stack[-2] * Stack[-1]);
0x2f: Pop(1); Push(Stack[-1] / Stack[1 + StackPtr]);
0x30: Push("p_scrollbar")
0x31: @ SendMessage(Stack[-2], Stack[-1])
0x32: Pop(2)
0x33: Return(); Pop(0)

0x34: PushEmpty(int, int, string, int, int, int, string, int, int, string, int, int, int, string)
0x35: PushEmpty(string)
0x36: Call2 0x162

0x37: Stack[-6] = Stack[-1]
0x38: Pop(1)
0x39: Push("default")
0x3a: Push((int) 5)
0x3b: Pop(1); Push(Stack[5 + StackPtr] - Stack[-1]);
0x3c: @ GetTextHeightInWidth(Stack[-9], Stack[-2], Stack[-1], Stack[-7])
0x3d: Pop(2)
0x3e: Stack[-6] = Stack[-7]
0x3f: Push((int) 10)
0x40: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x41: @ GetAnswerCount(Stack[-4])
0x42: Pop(0)
0x43: Stack[-2] = (int) 0
0x44: Pop(0); Push((bool) Stack[-2] < Stack[-4])
0x45: IF (Stack[-1] == 0) GOTO 0x5e; Pop(1)

0x46: Push((int) 0)
0x47: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x48: IF (Stack[-1] == 0) GOTO 0x4c; Pop(1)

0x49: Push((int) 10)
0x4a: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x4b: GOTO 0x4e

0x4c: Push((int) 5)
0x4d: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x4e: PushEmpty(string, int)
0x4f: Stack[-1] = Stack[-4]
0x50: Call2 0x16b

0x51: Stack[-3] = Stack[-2]
0x52: Pop(2)
0x53: Push("default")
0x54: Push((int) 15)
0x55: Pop(1); Push(Stack[5 + StackPtr] - Stack[-1]);
0x56: Push((int) 5)
0x57: Pop(2); Push(Stack[-2] - Stack[-1]);
0x58: @ GetTextHeightInWidth(Stack[-9], Stack[-2], Stack[-1], Stack[-3])
0x59: Pop(2)
0x5a: Stack[-6] = Stack[-6] + Stack[-7]; Pop(0);
0x5b: Push((int) 1)
0x5c: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x5d: GOTO 0x44

0x5e: Stack[-15] = Stack[-6]
0x5f: Return(); Pop(14)

0x60: PushEmpty(int, string, int, int, int, string, int, string, int, int, int, string)
0x61: PushEmpty()
0x62: Call2 0x12

0x63: Pop(0)
0x64: Stack[-6] = Stack[0 + Tasks[-1].StackPointer]
0x65: PushEmpty(string)
0x66: Call2 0x162

0x67: Stack[-6] = Stack[-1]
0x68: Pop(1)
0x69: Push("default")
0x6a: Push((int) 0)
0x6b: Push((int) 5)
0x6c: Pop(1); Push(Stack[5 + StackPtr] - Stack[-1]);
0x6d: Push((float)0.804)
0x6e: Push((float)0.804)
0x6f: Push((float)0.804)
0x70: @ PrintInWidth(Stack[-2], Stack[-6], Stack[-5], Stack[-12], Stack[-4], Stack[-11], Stack[-3], Stack[-2], Stack[-1])
0x71: Pop(6)
0x72: Stack[-6] = Stack[-6] + Stack[2 + Tasks[-1].StackPointer]; Pop(0);
0x73: Push((int) 10)
0x74: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x75: @ GetAnswerCount(Stack[-4])
0x76: Pop(0)
0x77: Stack[-2] = (int) 0
0x78: Pop(0); Push((bool) Stack[-2] < Stack[-4])
0x79: IF (Stack[-1] == 0) GOTO 0x9e; Pop(1)

0x7a: PushEmpty(string, int)
0x7b: Stack[-1] = Stack[-4]
0x7c: Call2 0x16b

0x7d: Stack[-3] = Stack[-2]
0x7e: Pop(2)
0x7f: Pop(0); Push((bool) Stack[-2] == Stack[3 + Tasks[-1].StackPointer])
0x80: IF (Stack[-1] == 0) GOTO 0x8d; Pop(1)

0x81: Push("default")
0x82: Push((int) 15)
0x83: Push((int) 15)
0x84: Pop(1); Push(Stack[5 + StackPtr] - Stack[-1]);
0x85: Push((int) 5)
0x86: Pop(2); Push(Stack[-2] - Stack[-1]);
0x87: Push((float)1.0)
0x88: Push((float)1.0)
0x89: Push((float)1.0)
0x8a: @ PrintInWidth(Stack[-9], Stack[-6], Stack[-5], Stack[-12], Stack[-4], Stack[-7], Stack[-3], Stack[-2], Stack[-1])
0x8b: Pop(6)
0x8c: GOTO 0x98

0x8d: Push("default")
0x8e: Push((int) 15)
0x8f: Push((int) 15)
0x90: Pop(1); Push(Stack[5 + StackPtr] - Stack[-1]);
0x91: Push((int) 5)
0x92: Pop(2); Push(Stack[-2] - Stack[-1]);
0x93: Push((float)0.698)
0x94: Push((float)0.659)
0x95: Push((float)0.647)
0x96: @ PrintInWidth(Stack[-9], Stack[-6], Stack[-5], Stack[-12], Stack[-4], Stack[-7], Stack[-3], Stack[-2], Stack[-1])
0x97: Pop(6)
0x98: Stack[-6] = Stack[-6] + Stack[-3]; Pop(0);
0x99: Push((int) 5)
0x9a: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x9b: Push((int) 1)
0x9c: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x9d: GOTO 0x78

0x9e: Return(); Pop(12)

0x9f: PushEmpty(int, int, int, int, string, int, int, int, int, int, string, int)
0xa0: Pop(0); Push(Stack[0 + StackPtr] + Stack[2 + StackPtr]);
0xa1: Push((int) 10)
0xa2: Stack[-8] = Stack[-2] + Stack[-1]; Pop(2);
0xa3: @ GetAnswerCount(Stack[-5])
0xa4: Pop(0)
0xa5: Stack[3 + Tasks[-1].StackPointer] = (int)-1
0xa6: Stack[-3] = (int) 0
0xa7: Pop(0); Push((bool) Stack[-3] < Stack[-5])
0xa8: IF (Stack[-1] == 0) GOTO 0xcb; Pop(1)

0xa9: PushEmpty(string, int)
0xaa: Stack[-1] = Stack[-5]
0xab: Call2 0x16b

0xac: Stack[-4] = Stack[-2]
0xad: Pop(2)
0xae: PushEmpty(int, int)
0xaf: Stack[-1] = Stack[-5]
0xb0: Call2 0x174

0xb1: Stack[-3] = Stack[-2]
0xb2: Pop(2)
0xb3: Push("default")
0xb4: Push((int) 15)
0xb5: Pop(1); Push(Stack[5 + StackPtr] - Stack[-1]);
0xb6: Push((int) 5)
0xb7: Pop(2); Push(Stack[-2] - Stack[-1]);
0xb8: @ GetTextHeightInWidth(Stack[-6], Stack[-2], Stack[-1], Stack[-4])
0xb9: Pop(2)
0xba: PushEmpty(bool)
0xbb: Stack[-1] = (bool) 0
0xbc: Pop(0); Push((bool) Stack[-14] > Stack[-7])
0xbd: IF (Stack[-1] == 0) GOTO 0xc2; Pop(1)

0xbe: Pop(0); Push(Stack[-7] + Stack[-5]);
0xbf: Pop(1); Push((bool) Stack[-15] < Stack[-1])
0xc0: IF (Stack[-1] == 0) GOTO 0xc2; Pop(1)

0xc1: Stack[-1] = (bool) 1
0xc2: IF (Stack[-1] == 0) GOTO 0xc5; Pop(1)

0xc3: Stack[3 + Tasks[-1].StackPointer] = Stack[-3]
0xc4: Stack[4 + Tasks[-1].StackPointer] = Stack[-1]
0xc5: Stack[-6] = Stack[-6] + Stack[-4]; Pop(0);
0xc6: Push((int) 5)
0xc7: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0xc8: Push((int) 1)
0xc9: Stack[-4] = Stack[-4] + Stack[-1]; Pop(1);
0xca: GOTO 0xa7

0xcb: Return(); Pop(12)

0xcc: PushEmpty(string, int, int, string, object, string, int, int, string, object)
0xcd: Push((int) -1)
0xce: Pop(1); Push((bool) Stack[3 + Tasks[-1].StackPointer] == Stack[-1])
0xcf: IF (Stack[-1] == 0) GOTO 0xd1; Pop(1)

0xd0: Return(); Pop(10)

0xd1: PushEmpty(string)
0xd2: Call2 0x162

0xd3: Stack[-6] = Stack[-1]
0xd4: Pop(1)
0xd5: PushEmpty(string, int)
0xd6: Stack[-1] = Stack[3 + Tasks[-1].StackPointer]
0xd7: Call2 0x16b

0xd8: Stack[-4] = Stack[-2]
0xd9: Pop(2)
0xda: PushEmpty(int, int)
0xdb: Stack[-1] = Stack[3 + Tasks[-1].StackPointer]
0xdc: Call2 0x174

0xdd: Stack[-6] = Stack[-2]
0xde: Pop(2)
0xdf: PushEmpty(int, int)
0xe0: Stack[-1] = Stack[3 + Tasks[-1].StackPointer]
0xe1: Call2 0x179

0xe2: Stack[-5] = Stack[-2]
0xe3: Pop(2)
0xe4: @ SelectAnswer(Stack[-4], Stack[-3])
0xe5: Pop(0)
0xe6: @ CreateStringVector(Stack[-1])
0xe7: Pop(0)
0xe8: @@ add(Stack[-5])
0xe9: Pop(0)
0xea: @@ add(Stack[-2])
0xeb: Pop(0)
0xec: Stack[3 + Tasks[-1].StackPointer] = (int)-1
0xed: Push((int) 0)
0xee: Push("history_text")
0xef: @ SendMessage(Stack[-2], Stack[-1], Stack[-3])
0xf0: Pop(2)
0xf1: Stack[0 + Tasks[-1].StackPointer] = (int)0
0xf2: PushEmpty()
0xf3: Call2 0x12

0xf4: Pop(0)
0xf5: Return(); Pop(10)

0xf6: Stack[-1] = 0
0xf7: PushEmpty()
0xf8: PushEmpty()
0xf9: Call2 0xcc

0xfa: Pop(0)
0xfb: Return(); Pop(0)

0xfc: PushEmpty(int, int, int, int)
0xfd: Push("default")
0xfe: @ GetFontHeight(Stack[-3], Stack[-1])
0xff: Pop(1)
0x100: Stack[-1] = Stack[-5] * Stack[-2]; Pop(0);
0x101: Stack[0 + Tasks[-1].StackPointer] = Stack[0 + Tasks[-1].StackPointer] + Stack[-1]; Pop(0);
0x102: PushEmpty()
0x103: Call2 0x12

0x104: Pop(0)
0x105: Return(); Pop(4)

0x106: PushEmpty()
0x107: Push("p_scrollbar")
0x108: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x109: IF (Stack[-1] == 0) GOTO 0x111; Pop(1)

0x10a: Pop(0); Push(( -Stack[1 + Tasks[-1].StackPointer])
0x10b: Pop(1); Push(Stack[-1] * Stack[-4]);
0x10c: Push((int) 100)
0x10d: Stack[0 + Tasks[-1].StackPointer] = Stack[-2] / Stack[-1]; Pop(2);
0x10e: PushEmpty()
0x10f: Call2 0x12

0x110: Pop(0)
0x111: Return(); Pop(0)

0x112: PushEmpty(int, int)
0x113: @ GetAnswerCount(Stack[-1])
0x114: Pop(0)
0x115: Push((int) -1)
0x116: Pop(1); Push((bool) Stack[3 + Tasks[-1].StackPointer] == Stack[-1])
0x117: IF (Stack[-1] == 0) GOTO 0x11b; Pop(1)

0x118: Push((int) 1)
0x119: Stack[3 + Tasks[-1].StackPointer] = Stack[-2] - Stack[-1]; Pop(1);
0x11a: GOTO 0x123

0x11b: Push((int) 0)
0x11c: Pop(1); Push((bool) Stack[3 + Tasks[-1].StackPointer] > Stack[-1])
0x11d: IF (Stack[-1] == 0) GOTO 0x121; Pop(1)

0x11e: Push((int) -1)
0x11f: Stack[3 + Tasks[-1].StackPointer] = Stack[3 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x120: GOTO 0x123

0x121: Push((int) 1)
0x122: Stack[3 + Tasks[-1].StackPointer] = Stack[-2] - Stack[-1]; Pop(1);
0x123: Return(); Pop(2)

0x124: PushEmpty(int, int)
0x125: @ GetAnswerCount(Stack[-1])
0x126: Pop(0)
0x127: Push((int) -1)
0x128: Pop(1); Push((bool) Stack[3 + Tasks[-1].StackPointer] == Stack[-1])
0x129: IF (Stack[-1] == 0) GOTO 0x12c; Pop(1)

0x12a: Stack[3 + Tasks[-1].StackPointer] = (int)0
0x12b: GOTO 0x134

0x12c: Push((int) 1)
0x12d: Pop(1); Push(Stack[-2] - Stack[-1]);
0x12e: Pop(1); Push((bool) Stack[3 + Tasks[-1].StackPointer] < Stack[-1])
0x12f: IF (Stack[-1] == 0) GOTO 0x133; Pop(1)

0x130: Push((int) 1)
0x131: Stack[3 + Tasks[-1].StackPointer] = Stack[3 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x132: GOTO 0x134

0x133: Stack[3 + Tasks[-1].StackPointer] = (int)0
0x134: Return(); Pop(2)

0x135: PushEmpty()
0x136: Push((int) 267)
0x137: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x138: IF (Stack[-1] == 0) GOTO 0x13f; Pop(1)

0x139: @ HideCursor()
0x13a: Pop(0)
0x13b: PushEmpty()
0x13c: Call2 0x112

0x13d: Pop(0)
0x13e: GOTO 0x147

0x13f: Push((int) 268)
0x140: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x141: IF (Stack[-1] == 0) GOTO 0x147; Pop(1)

0x142: @ HideCursor()
0x143: Pop(0)
0x144: PushEmpty()
0x145: Call2 0x124

0x146: Pop(0)
0x147: Return(); Pop(0)

0x148: PushEmpty()
0x149: Push((int) 272)
0x14a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x14b: IF (Stack[-1] == 0) GOTO 0x152; Pop(1)

0x14c: @ HideCursor()
0x14d: Pop(0)
0x14e: PushEmpty()
0x14f: Call2 0x112

0x150: Pop(0)
0x151: GOTO 0x161

0x152: Push((int) 274)
0x153: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x154: IF (Stack[-1] == 0) GOTO 0x15b; Pop(1)

0x155: @ HideCursor()
0x156: Pop(0)
0x157: PushEmpty()
0x158: Call2 0x124

0x159: Pop(0)
0x15a: GOTO 0x161

0x15b: Push((int) 256)
0x15c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x15d: IF (Stack[-1] == 0) GOTO 0x161; Pop(1)

0x15e: PushEmpty()
0x15f: Call2 0xcc

0x160: Pop(0)
0x161: Return(); Pop(0)

0x162: PushEmpty(string, string)
0x163: @ GetReplic(Stack[-1])
0x164: Pop(0)
0x165: Push("")
0x166: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x167: IF (Stack[-1] == 0) GOTO 0x169; Pop(1)

0x168: Stack[-1] = "Error: missing replic"
0x169: Stack[-3] = Stack[-1]
0x16a: Return(); Pop(2)

0x16b: PushEmpty(string, string)
0x16c: @ GetAnswer(Stack[-3], Stack[-1])
0x16d: Pop(0)
0x16e: Push("")
0x16f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x170: IF (Stack[-1] == 0) GOTO 0x172; Pop(1)

0x171: Stack[-1] = "ERROR: missing answer"
0x172: Stack[-4] = Stack[-1]
0x173: Return(); Pop(2)

0x174: PushEmpty(int, string, int, string)
0x175: @ GetAnswer(Stack[-5], Stack[-1], Stack[-2])
0x176: Pop(0)
0x177: Stack[-6] = Stack[-2]
0x178: Return(); Pop(4)

0x179: PushEmpty(int, int, string, int, int, string)
0x17a: @ GetAnswer(Stack[-7], Stack[-1], Stack[-3], Stack[-2])
0x17b: Pop(0)
0x17c: Stack[-8] = Stack[-2]
0x17d: Return(); Pop(6)

