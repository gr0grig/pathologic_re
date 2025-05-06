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
	GetReplic (1 args)
	GetAnswer (2 args)
	GetAnswer (3 args)
	GetAnswer (4 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (int, int, int, int, int, int, int) Params = 0
		EVENT_0 Op = 0x5e Vars = ()
		EVENT_8 Op = 0x9d Vars = (int, int)
		EVENT_3 Op = 0xca Vars = (int, int)
		EVENT_15 Op = 0xf5 Vars = (int, int, float)
		EVENT_200 Op = 0xff Vars = (int, string, object)


0x0: Stack[3 + Tasks[-1].StackPointer] = (int)-1
0x1: Stack[0 + Tasks[-1].StackPointer] = (int)0
0x2: @ GetWindowSize(Stack[-5], Stack[-6])
0x3: Pop(0)
0x4: Push((bool) 1)
0x5: @ EnableClipping(Stack[-1])
0x6: Pop(1)
0x7: Push((bool) 1)
0x8: @ SetOwnerDraw(Stack[-1])
0x9: Pop(1)
0xa: PushEmpty()
0xb: Call2 0x10

0xc: Pop(0)
0xd: @ ProcessEvents()
0xe: Pop(0)
0xf: Return(); Pop(0)

0x10: PushEmpty(int)
0x11: Call2 0x32

0x12: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x13: Pop(1)
0x14: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] - Stack[6 + Tasks[-1].StackPointer]; Pop(0);
0x15: Push((int) 0)
0x16: Pop(1); Push((bool) Stack[1 + Tasks[-1].StackPointer] < Stack[-1])
0x17: IF (Stack[-1] == 0) GOTO 0x19; Pop(1)

0x18: Stack[1 + Tasks[-1].StackPointer] = (int)0
0x19: Pop(0); Push(( -Stack[0 + Tasks[-1].StackPointer])
0x1a: Pop(1); Push((bool) Stack[-1] > Stack[1 + Tasks[-1].StackPointer])
0x1b: IF (Stack[-1] == 0) GOTO 0x1e; Pop(1)

0x1c: Stack[0 + Tasks[-1].StackPointer] = -Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x1d: GOTO 0x22

0x1e: Push((int) 0)
0x1f: Pop(1); Push((bool) Stack[0 + Tasks[-1].StackPointer] > Stack[-1])
0x20: IF (Stack[-1] == 0) GOTO 0x22; Pop(1)

0x21: Stack[0 + Tasks[-1].StackPointer] = (int)0
0x22: Push((int) 0)
0x23: Pop(1); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-1])
0x24: IF (Stack[-1] == 0) GOTO 0x2a; Pop(1)

0x25: Push((int) 16384)
0x26: Push("p_scrollbar")
0x27: @ SendMessage(Stack[-2], Stack[-1])
0x28: Pop(2)
0x29: GOTO 0x31

0x2a: Pop(0); Push(( -Stack[0 + Tasks[-1].StackPointer])
0x2b: Push((int) 100)
0x2c: Pop(2); Push(Stack[-2] * Stack[-1]);
0x2d: Pop(1); Push(Stack[-1] / Stack[1 + StackPtr]);
0x2e: Push("p_scrollbar")
0x2f: @ SendMessage(Stack[-2], Stack[-1])
0x30: Pop(2)
0x31: Return(); Pop(0)

0x32: PushEmpty(int, int, string, int, int, int, string, int, int, string, int, int, int, string)
0x33: PushEmpty(string)
0x34: Call2 0x10b

0x35: Stack[-6] = Stack[-1]
0x36: Pop(1)
0x37: Push("default")
0x38: Push((int) 5)
0x39: Pop(1); Push(Stack[5 + StackPtr] - Stack[-1]);
0x3a: @ GetTextHeightInWidth(Stack[-9], Stack[-2], Stack[-1], Stack[-7])
0x3b: Pop(2)
0x3c: Stack[-6] = Stack[-7]
0x3d: Push((int) 10)
0x3e: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x3f: @ GetAnswerCount(Stack[-4])
0x40: Pop(0)
0x41: Stack[-2] = (int) 0
0x42: Pop(0); Push((bool) Stack[-2] < Stack[-4])
0x43: IF (Stack[-1] == 0) GOTO 0x5c; Pop(1)

0x44: Push((int) 0)
0x45: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x46: IF (Stack[-1] == 0) GOTO 0x4a; Pop(1)

0x47: Push((int) 10)
0x48: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x49: GOTO 0x4c

0x4a: Push((int) 5)
0x4b: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x4c: PushEmpty(string, int)
0x4d: Stack[-1] = Stack[-4]
0x4e: Call2 0x114

0x4f: Stack[-3] = Stack[-2]
0x50: Pop(2)
0x51: Push("default")
0x52: Push((int) 15)
0x53: Pop(1); Push(Stack[5 + StackPtr] - Stack[-1]);
0x54: Push((int) 5)
0x55: Pop(2); Push(Stack[-2] - Stack[-1]);
0x56: @ GetTextHeightInWidth(Stack[-9], Stack[-2], Stack[-1], Stack[-3])
0x57: Pop(2)
0x58: Stack[-6] = Stack[-6] + Stack[-7]; Pop(0);
0x59: Push((int) 1)
0x5a: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x5b: GOTO 0x42

0x5c: Stack[-15] = Stack[-6]
0x5d: Return(); Pop(14)

0x5e: PushEmpty(int, string, int, int, int, string, int, string, int, int, int, string)
0x5f: PushEmpty()
0x60: Call2 0x10

0x61: Pop(0)
0x62: Stack[-6] = Stack[0 + Tasks[-1].StackPointer]
0x63: PushEmpty(string)
0x64: Call2 0x10b

0x65: Stack[-6] = Stack[-1]
0x66: Pop(1)
0x67: Push("default")
0x68: Push((int) 0)
0x69: Push((int) 5)
0x6a: Pop(1); Push(Stack[5 + StackPtr] - Stack[-1]);
0x6b: Push((float)0.804)
0x6c: Push((float)0.804)
0x6d: Push((float)0.804)
0x6e: @ PrintInWidth(Stack[-2], Stack[-6], Stack[-5], Stack[-12], Stack[-4], Stack[-11], Stack[-3], Stack[-2], Stack[-1])
0x6f: Pop(6)
0x70: Stack[-6] = Stack[-6] + Stack[2 + Tasks[-1].StackPointer]; Pop(0);
0x71: Push((int) 10)
0x72: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x73: @ GetAnswerCount(Stack[-4])
0x74: Pop(0)
0x75: Stack[-2] = (int) 0
0x76: Pop(0); Push((bool) Stack[-2] < Stack[-4])
0x77: IF (Stack[-1] == 0) GOTO 0x9c; Pop(1)

0x78: PushEmpty(string, int)
0x79: Stack[-1] = Stack[-4]
0x7a: Call2 0x114

0x7b: Stack[-3] = Stack[-2]
0x7c: Pop(2)
0x7d: Pop(0); Push((bool) Stack[-2] == Stack[3 + Tasks[-1].StackPointer])
0x7e: IF (Stack[-1] == 0) GOTO 0x8b; Pop(1)

0x7f: Push("default")
0x80: Push((int) 15)
0x81: Push((int) 15)
0x82: Pop(1); Push(Stack[5 + StackPtr] - Stack[-1]);
0x83: Push((int) 5)
0x84: Pop(2); Push(Stack[-2] - Stack[-1]);
0x85: Push((float)1.0)
0x86: Push((float)1.0)
0x87: Push((float)1.0)
0x88: @ PrintInWidth(Stack[-9], Stack[-6], Stack[-5], Stack[-12], Stack[-4], Stack[-7], Stack[-3], Stack[-2], Stack[-1])
0x89: Pop(6)
0x8a: GOTO 0x96

0x8b: Push("default")
0x8c: Push((int) 15)
0x8d: Push((int) 15)
0x8e: Pop(1); Push(Stack[5 + StackPtr] - Stack[-1]);
0x8f: Push((int) 5)
0x90: Pop(2); Push(Stack[-2] - Stack[-1]);
0x91: Push((float)0.698)
0x92: Push((float)0.659)
0x93: Push((float)0.647)
0x94: @ PrintInWidth(Stack[-9], Stack[-6], Stack[-5], Stack[-12], Stack[-4], Stack[-7], Stack[-3], Stack[-2], Stack[-1])
0x95: Pop(6)
0x96: Stack[-6] = Stack[-6] + Stack[-3]; Pop(0);
0x97: Push((int) 5)
0x98: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x99: Push((int) 1)
0x9a: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x9b: GOTO 0x76

0x9c: Return(); Pop(12)

0x9d: PushEmpty(int, int, int, int, string, int, int, int, int, int, string, int)
0x9e: Pop(0); Push(Stack[0 + StackPtr] + Stack[2 + StackPtr]);
0x9f: Push((int) 10)
0xa0: Stack[-8] = Stack[-2] + Stack[-1]; Pop(2);
0xa1: @ GetAnswerCount(Stack[-5])
0xa2: Pop(0)
0xa3: Stack[3 + Tasks[-1].StackPointer] = (int)-1
0xa4: Stack[-3] = (int) 0
0xa5: Pop(0); Push((bool) Stack[-3] < Stack[-5])
0xa6: IF (Stack[-1] == 0) GOTO 0xc9; Pop(1)

0xa7: PushEmpty(string, int)
0xa8: Stack[-1] = Stack[-5]
0xa9: Call2 0x114

0xaa: Stack[-4] = Stack[-2]
0xab: Pop(2)
0xac: PushEmpty(int, int)
0xad: Stack[-1] = Stack[-5]
0xae: Call2 0x11d

0xaf: Stack[-3] = Stack[-2]
0xb0: Pop(2)
0xb1: Push("default")
0xb2: Push((int) 15)
0xb3: Pop(1); Push(Stack[5 + StackPtr] - Stack[-1]);
0xb4: Push((int) 5)
0xb5: Pop(2); Push(Stack[-2] - Stack[-1]);
0xb6: @ GetTextHeightInWidth(Stack[-6], Stack[-2], Stack[-1], Stack[-4])
0xb7: Pop(2)
0xb8: PushEmpty(bool)
0xb9: Stack[-1] = (bool) 0
0xba: Pop(0); Push((bool) Stack[-14] > Stack[-7])
0xbb: IF (Stack[-1] == 0) GOTO 0xc0; Pop(1)

0xbc: Pop(0); Push(Stack[-7] + Stack[-5]);
0xbd: Pop(1); Push((bool) Stack[-15] < Stack[-1])
0xbe: IF (Stack[-1] == 0) GOTO 0xc0; Pop(1)

0xbf: Stack[-1] = (bool) 1
0xc0: IF (Stack[-1] == 0) GOTO 0xc3; Pop(1)

0xc1: Stack[3 + Tasks[-1].StackPointer] = Stack[-3]
0xc2: Stack[4 + Tasks[-1].StackPointer] = Stack[-1]
0xc3: Stack[-6] = Stack[-6] + Stack[-4]; Pop(0);
0xc4: Push((int) 5)
0xc5: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0xc6: Push((int) 1)
0xc7: Stack[-4] = Stack[-4] + Stack[-1]; Pop(1);
0xc8: GOTO 0xa5

0xc9: Return(); Pop(12)

0xca: PushEmpty(string, int, int, string, object, string, int, int, string, object)
0xcb: Push((int) -1)
0xcc: Pop(1); Push((bool) Stack[3 + Tasks[-1].StackPointer] == Stack[-1])
0xcd: IF (Stack[-1] == 0) GOTO 0xcf; Pop(1)

0xce: Return(); Pop(10)

0xcf: PushEmpty(string)
0xd0: Call2 0x10b

0xd1: Stack[-6] = Stack[-1]
0xd2: Pop(1)
0xd3: PushEmpty(string, int)
0xd4: Stack[-1] = Stack[3 + Tasks[-1].StackPointer]
0xd5: Call2 0x114

0xd6: Stack[-4] = Stack[-2]
0xd7: Pop(2)
0xd8: PushEmpty(int, int)
0xd9: Stack[-1] = Stack[3 + Tasks[-1].StackPointer]
0xda: Call2 0x11d

0xdb: Stack[-6] = Stack[-2]
0xdc: Pop(2)
0xdd: PushEmpty(int, int)
0xde: Stack[-1] = Stack[3 + Tasks[-1].StackPointer]
0xdf: Call2 0x122

0xe0: Stack[-5] = Stack[-2]
0xe1: Pop(2)
0xe2: @ SelectAnswer(Stack[-4], Stack[-3])
0xe3: Pop(0)
0xe4: @ CreateStringVector(Stack[-1])
0xe5: Pop(0)
0xe6: @@ add(Stack[-5])
0xe7: Pop(0)
0xe8: @@ add(Stack[-2])
0xe9: Pop(0)
0xea: Stack[3 + Tasks[-1].StackPointer] = (int)-1
0xeb: Push((int) 0)
0xec: Push("history_text")
0xed: @ SendMessage(Stack[-2], Stack[-1], Stack[-3])
0xee: Pop(2)
0xef: Stack[0 + Tasks[-1].StackPointer] = (int)0
0xf0: PushEmpty()
0xf1: Call2 0x10

0xf2: Pop(0)
0xf3: Return(); Pop(10)

0xf4: Stack[-1] = 0
0xf5: PushEmpty(int, int, int, int)
0xf6: Push("default")
0xf7: @ GetFontHeight(Stack[-3], Stack[-1])
0xf8: Pop(1)
0xf9: Stack[-1] = Stack[-5] * Stack[-2]; Pop(0);
0xfa: Stack[0 + Tasks[-1].StackPointer] = Stack[0 + Tasks[-1].StackPointer] + Stack[-1]; Pop(0);
0xfb: PushEmpty()
0xfc: Call2 0x10

0xfd: Pop(0)
0xfe: Return(); Pop(4)

0xff: PushEmpty()
0x100: Push("p_scrollbar")
0x101: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x102: IF (Stack[-1] == 0) GOTO 0x10a; Pop(1)

0x103: Pop(0); Push(( -Stack[1 + Tasks[-1].StackPointer])
0x104: Pop(1); Push(Stack[-1] * Stack[-4]);
0x105: Push((int) 100)
0x106: Stack[0 + Tasks[-1].StackPointer] = Stack[-2] / Stack[-1]; Pop(2);
0x107: PushEmpty()
0x108: Call2 0x10

0x109: Pop(0)
0x10a: Return(); Pop(0)

0x10b: PushEmpty(string, string)
0x10c: @ GetReplic(Stack[-1])
0x10d: Pop(0)
0x10e: Push("")
0x10f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x110: IF (Stack[-1] == 0) GOTO 0x112; Pop(1)

0x111: Stack[-1] = "Error: missing replic"
0x112: Stack[-3] = Stack[-1]
0x113: Return(); Pop(2)

0x114: PushEmpty(string, string)
0x115: @ GetAnswer(Stack[-3], Stack[-1])
0x116: Pop(0)
0x117: Push("")
0x118: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x119: IF (Stack[-1] == 0) GOTO 0x11b; Pop(1)

0x11a: Stack[-1] = "ERROR: missing answer"
0x11b: Stack[-4] = Stack[-1]
0x11c: Return(); Pop(2)

0x11d: PushEmpty(int, string, int, string)
0x11e: @ GetAnswer(Stack[-5], Stack[-1], Stack[-2])
0x11f: Pop(0)
0x120: Stack[-6] = Stack[-2]
0x121: Return(); Pop(4)

0x122: PushEmpty(int, int, string, int, int, string)
0x123: @ GetAnswer(Stack[-7], Stack[-1], Stack[-3], Stack[-2])
0x124: Pop(0)
0x125: Stack[-8] = Stack[-2]
0x126: Return(); Pop(6)

