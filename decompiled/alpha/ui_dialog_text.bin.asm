GlobalVarCount = 0

Strings:
	p_scrollbar
	default
	history_text

Import:
	GetWindowSize (2 args)
	EnableClipping (1 args)
	SetOwnerDraw (1 args)
	ProcessEvents (0 args)
	SendMessage (2 args)
	GetReplic (1 args)
	GetTextHeightInWidth (4 args)
	GetAnswerCount (1 args)
	GetAnswer (2 args)
	PrintInWidth (9 args)
	GetAnswer (3 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (int, int, int, int, int, int, int) Params = 0
		EVENT_0 Op = 0x49 Vars = ()
		EVENT_8 Op = 0x7d Vars = (int, int)
		EVENT_3 Op = 0x9e Vars = (int, int)
		EVENT_200 Op = 0xab Vars = (int, string, object)


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
0xb: Call 0x10

0xc: Pop(0)
0xd: @ ProcessEvents()
0xe: Pop(0)
0xf: Return(); Pop(0)

0x10: PushEmpty(int)
0x11: Call 0x26

0x12: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x13: Pop(1)
0x14: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] - Stack[6 + Tasks[-1].StackPointer]; Pop(0);
0x15: Push((int) 0)
0x16: Pop(1); Push((bool) Stack[1 + Tasks[-1].StackPointer] < Stack[-1])
0x17: IF (Stack[-1] == 0) GOTO 0x1e; Pop(1)

0x18: Stack[1 + Tasks[-1].StackPointer] = (int)0
0x19: Push((int) 16384)
0x1a: Push("p_scrollbar")
0x1b: @ SendMessage(Stack[-2], Stack[-1])
0x1c: Pop(2)
0x1d: GOTO 0x25

0x1e: Pop(0); Push(( -Stack[0 + Tasks[-1].StackPointer])
0x1f: Push((int) 100)
0x20: Pop(2); Push(Stack[-2] * Stack[-1]);
0x21: Pop(1); Push(Stack[-1] / Stack[1 + StackPtr]);
0x22: Push("p_scrollbar")
0x23: @ SendMessage(Stack[-2], Stack[-1])
0x24: Pop(2)
0x25: Return(); Pop(0)

0x26: PushEmpty(int, int, string, int, int, int, string, int, int, string, int, int, int, string)
0x27: @ GetReplic(Stack[-5])
0x28: Pop(0)
0x29: Push("default")
0x2a: @ GetTextHeightInWidth(Stack[-8], Stack[-1], Stack[-5], Stack[-6])
0x2b: Pop(1)
0x2c: Stack[-6] = Stack[-7]
0x2d: Push((int) 15)
0x2e: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x2f: @ GetAnswerCount(Stack[-4])
0x30: Pop(0)
0x31: Stack[-2] = (int) 0
0x32: Pop(0); Push((bool) Stack[-2] < Stack[-4])
0x33: IF (Stack[-1] == 0) GOTO 0x47; Pop(1)

0x34: Push((int) 0)
0x35: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x36: IF (Stack[-1] == 0) GOTO 0x3a; Pop(1)

0x37: Push((int) 15)
0x38: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x39: GOTO 0x3c

0x3a: Push((int) 10)
0x3b: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x3c: @ GetAnswer(Stack[-2], Stack[-1])
0x3d: Pop(0)
0x3e: Push("default")
0x3f: Push((int) 15)
0x40: Pop(1); Push(Stack[5 + StackPtr] - Stack[-1]);
0x41: @ GetTextHeightInWidth(Stack[-9], Stack[-2], Stack[-1], Stack[-3])
0x42: Pop(2)
0x43: Stack[-6] = Stack[-6] + Stack[-7]; Pop(0);
0x44: Push((int) 1)
0x45: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x46: GOTO 0x32

0x47: Stack[-15] = Stack[-6]
0x48: Return(); Pop(14)

0x49: PushEmpty(int, string, int, int, int, string, int, string, int, int, int, string)
0x4a: PushEmpty()
0x4b: Call 0x10

0x4c: Pop(0)
0x4d: Stack[-6] = Stack[0 + Tasks[-1].StackPointer]
0x4e: @ GetReplic(Stack[-5])
0x4f: Pop(0)
0x50: Push("default")
0x51: Push((int) 0)
0x52: Push((float)0.804)
0x53: Push((float)0.804)
0x54: Push((float)0.804)
0x55: @ PrintInWidth(Stack[-2], Stack[-5], Stack[-4], Stack[-11], Stack[-5], Stack[-10], Stack[-3], Stack[-2], Stack[-1])
0x56: Pop(5)
0x57: Stack[-6] = Stack[-6] + Stack[2 + Tasks[-1].StackPointer]; Pop(0);
0x58: Push((int) 15)
0x59: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x5a: @ GetAnswerCount(Stack[-4])
0x5b: Pop(0)
0x5c: Stack[-2] = (int) 0
0x5d: Pop(0); Push((bool) Stack[-2] < Stack[-4])
0x5e: IF (Stack[-1] == 0) GOTO 0x7c; Pop(1)

0x5f: @ GetAnswer(Stack[-2], Stack[-1])
0x60: Pop(0)
0x61: Pop(0); Push((bool) Stack[-2] == Stack[3 + Tasks[-1].StackPointer])
0x62: IF (Stack[-1] == 0) GOTO 0x6d; Pop(1)

0x63: Push("default")
0x64: Push((int) 15)
0x65: Push((int) 15)
0x66: Pop(1); Push(Stack[5 + StackPtr] - Stack[-1]);
0x67: Push((float)1.0)
0x68: Push((float)1.0)
0x69: Push((float)1.0)
0x6a: @ PrintInWidth(Stack[-9], Stack[-6], Stack[-5], Stack[-12], Stack[-4], Stack[-7], Stack[-3], Stack[-2], Stack[-1])
0x6b: Pop(6)
0x6c: GOTO 0x76

0x6d: Push("default")
0x6e: Push((int) 15)
0x6f: Push((int) 15)
0x70: Pop(1); Push(Stack[5 + StackPtr] - Stack[-1]);
0x71: Push((float)0.698)
0x72: Push((float)0.659)
0x73: Push((float)0.647)
0x74: @ PrintInWidth(Stack[-9], Stack[-6], Stack[-5], Stack[-12], Stack[-4], Stack[-7], Stack[-3], Stack[-2], Stack[-1])
0x75: Pop(6)
0x76: Stack[-6] = Stack[-6] + Stack[-3]; Pop(0);
0x77: Push((int) 10)
0x78: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x79: Push((int) 1)
0x7a: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x7b: GOTO 0x5d

0x7c: Return(); Pop(12)

0x7d: PushEmpty(int, int, int, int, string, int, int, int, int, int, string, int)
0x7e: Pop(0); Push(Stack[0 + StackPtr] + Stack[2 + StackPtr]);
0x7f: Push((int) 15)
0x80: Stack[-8] = Stack[-2] + Stack[-1]; Pop(2);
0x81: @ GetAnswerCount(Stack[-5])
0x82: Pop(0)
0x83: Stack[3 + Tasks[-1].StackPointer] = (int)-1
0x84: Stack[-3] = (int) 0
0x85: Pop(0); Push((bool) Stack[-3] < Stack[-5])
0x86: IF (Stack[-1] == 0) GOTO 0x9d; Pop(1)

0x87: @ GetAnswer(Stack[-3], Stack[-2], Stack[-1])
0x88: Pop(0)
0x89: Push("default")
0x8a: @ GetTextHeightInWidth(Stack[-5], Stack[-1], Stack[-5], Stack[-3])
0x8b: Pop(1)
0x8c: PushEmpty(bool)
0x8d: Stack[-1] = (bool) 0
0x8e: Pop(0); Push((bool) Stack[-14] > Stack[-7])
0x8f: IF (Stack[-1] == 0) GOTO 0x94; Pop(1)

0x90: Pop(0); Push(Stack[-7] + Stack[-5]);
0x91: Pop(1); Push((bool) Stack[-15] < Stack[-1])
0x92: IF (Stack[-1] == 0) GOTO 0x94; Pop(1)

0x93: Stack[-1] = (bool) 1
0x94: IF (Stack[-1] == 0) GOTO 0x97; Pop(1)

0x95: Stack[3 + Tasks[-1].StackPointer] = Stack[-3]
0x96: Stack[4 + Tasks[-1].StackPointer] = Stack[-1]
0x97: Stack[-6] = Stack[-6] + Stack[-4]; Pop(0);
0x98: Push((int) 10)
0x99: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x9a: Push((int) 1)
0x9b: Stack[-4] = Stack[-4] + Stack[-1]; Pop(1);
0x9c: GOTO 0x85

0x9d: Return(); Pop(12)

0x9e: PushEmpty()
0x9f: Push((int) -1)
0xa0: Pop(1); Push((bool) Stack[3 + Tasks[-1].StackPointer] == Stack[-1])
0xa1: IF (Stack[-1] == 0) GOTO 0xa3; Pop(1)

0xa2: Return(); Pop(0)

0xa3: Push("history_text")
0xa4: @ SendMessage(Stack[-3], Stack[-1])
0xa5: Pop(1)
0xa6: Stack[0 + Tasks[-1].StackPointer] = (int)0
0xa7: PushEmpty()
0xa8: Call 0x10

0xa9: Pop(0)
0xaa: Return(); Pop(0)

0xab: PushEmpty()
0xac: Push("p_scrollbar")
0xad: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xae: IF (Stack[-1] == 0) GOTO 0xb6; Pop(1)

0xaf: Pop(0); Push(( -Stack[1 + Tasks[-1].StackPointer])
0xb0: Pop(1); Push(Stack[-1] * Stack[-4]);
0xb1: Push((int) 100)
0xb2: Stack[0 + Tasks[-1].StackPointer] = Stack[-2] / Stack[-1]; Pop(2);
0xb3: PushEmpty()
0xb4: Call 0x10

0xb5: Pop(0)
0xb6: Return(); Pop(0)

