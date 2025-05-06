GlobalVarCount = 0

Strings:
	ChildCount
	Child
	GetCategory
	GetTextID
	default
	scrollbar
	diary

Import:
	GetWindowSize (2 args)
	EnableClipping (1 args)
	SetOwnerDraw (1 args)
	ProcessEvents (0 args)
	GetDiaryRoot (1 args)
	GetStringByID (2 args)
	GetTextHeightInWidth (4 args)
	PrintInWidth (9 args)
	SendMessage (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (bool, int, int, int, int, int, int) Params = 0
		EVENT_0 Op = 0x37 Vars = ()
		EVENT_200 Op = 0x70 Vars = (int, string, object)
		EVENT_15 Op = 0x8a Vars = (int, int, float)


0x0: Stack[5 + Tasks[-1].StackPointer] = (int)0
0x1: Stack[1 + Tasks[-1].StackPointer] = (int)0
0x2: @ GetWindowSize(Stack[-3], Stack[-4])
0x3: Pop(0)
0x4: PushEmpty(bool)
0x5: Stack[-1] = (bool) 1
0x6: Call2 0x14

0x7: Pop(1)
0x8: PushEmpty()
0x9: Call2 0xa6

0xa: Pop(0)
0xb: Push((bool) 1)
0xc: @ EnableClipping(Stack[-1])
0xd: Pop(1)
0xe: Push((bool) 1)
0xf: @ SetOwnerDraw(Stack[-1])
0x10: Pop(1)
0x11: @ ProcessEvents()
0x12: Pop(0)
0x13: Return(); Pop(0)

0x14: PushEmpty(object, int, int, int, object, object, int, int, int, object)
0x15: Stack[6 + Tasks[-1].StackPointer] = (int)0
0x16: @ GetDiaryRoot(Stack[-5])
0x17: Pop(0)
0x18: @@ ChildCount(Stack[-4])
0x19: Pop(0)
0x1a: Stack[-2] = (int) 0
0x1b: Pop(0); Push((bool) Stack[-2] < Stack[-4])
0x1c: IF (Stack[-1] == 0) GOTO 0x30; Pop(1)

0x1d: @@ Child(Stack[-1], Stack[-2])
0x1e: Pop(0)
0x1f: @@ GetCategory(Stack[-3])
0x20: Pop(0)
0x21: Pop(0); Push((bool) Stack[-3] != Stack[5 + Tasks[-1].StackPointer])
0x22: IF (Stack[-1] == 0) GOTO 0x24; Pop(1)

0x23: GOTO 0x2d

0x24: PushEmpty(object, int, bool)
0x25: Stack[-3] = Stack[-4]
0x26: Stack[-2] = (int) 0
0x27: Stack[-1] = Stack[-14]
0x28: Call2 0x3c

0x29: Pop(3)
0x2a: Push((int) 15)
0x2b: Stack[6 + Tasks[-1].StackPointer] = Stack[6 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x2c: Stack[-1] = 0
0x2d: Push((int) 1)
0x2e: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x2f: GOTO 0x1b

0x30: Stack[2 + Tasks[-1].StackPointer] = Stack[6 + Tasks[-1].StackPointer] - Stack[4 + Tasks[-1].StackPointer]; Pop(0);
0x31: Push((int) 0)
0x32: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] < Stack[-1])
0x33: IF (Stack[-1] == 0) GOTO 0x35; Pop(1)

0x34: Stack[2 + Tasks[-1].StackPointer] = (int)0
0x35: Return(); Pop(10)

0x36: Stack[-5] = 0
0x37: PushEmpty(bool)
0x38: Stack[-1] = (bool) 0
0x39: Call2 0x14

0x3a: Pop(1)
0x3b: Return(); Pop(0)

0x3c: PushEmpty(int, int, string, int, int, int, object, int, int, int, string, int, int, int, object, int)
0x3d: @@ GetCategory(Stack[-8])
0x3e: Pop(0)
0x3f: Pop(0); Push((bool) Stack[-8] != Stack[5 + Tasks[-1].StackPointer])
0x40: IF (Stack[-1] == 0) GOTO 0x42; Pop(1)

0x41: Return(); Pop(16)

0x42: @@ GetTextID(Stack[-7])
0x43: Pop(0)
0x44: @ GetStringByID(Stack[-6], Stack[-7])
0x45: Pop(0)
0x46: Push(Stack[-17])
0x47: IF (Stack[-1] == 0) GOTO 0x4d; Pop(1)

0x48: Push("default")
0x49: Pop(0); Push(Stack[3 + StackPtr] - Stack[-19]);
0x4a: @ GetTextHeightInWidth(Stack[-7], Stack[-2], Stack[-1], Stack[-8])
0x4b: Pop(2)
0x4c: GOTO 0x55

0x4d: Push("default")
0x4e: Pop(0); Push(Stack[1 + StackPtr] + Stack[6 + StackPtr]);
0x4f: Pop(0); Push(Stack[3 + StackPtr] - Stack[-20]);
0x50: Push((float)1.0)
0x51: Push((float)1.0)
0x52: Push((float)1.0)
0x53: @ PrintInWidth(Stack[-11], Stack[-6], Stack[-24], Stack[-5], Stack[-4], Stack[-12], Stack[-3], Stack[-2], Stack[-1])
0x54: Pop(6)
0x55: Stack[6 + Tasks[-1].StackPointer] = Stack[6 + Tasks[-1].StackPointer] + Stack[-5]; Pop(0);
0x56: @@ ChildCount(Stack[-4])
0x57: Pop(0)
0x58: Stack[-3] = (int) 0
0x59: Pop(0); Push((bool) Stack[-3] < Stack[-4])
0x5a: IF (Stack[-1] == 0) GOTO 0x6f; Pop(1)

0x5b: @@ Child(Stack[-2], Stack[-3])
0x5c: Pop(0)
0x5d: @@ GetCategory(Stack[-1])
0x5e: Pop(0)
0x5f: Pop(0); Push((bool) Stack[-1] != Stack[5 + Tasks[-1].StackPointer])
0x60: IF (Stack[-1] == 0) GOTO 0x62; Pop(1)

0x61: GOTO 0x6c

0x62: Push((int) 10)
0x63: Stack[6 + Tasks[-1].StackPointer] = Stack[6 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x64: PushEmpty(object, int, bool)
0x65: Stack[-3] = Stack[-5]
0x66: Push((int) 20)
0x67: Stack[-3] = Stack[-22] + Stack[-1]; Pop(1);
0x68: Stack[-1] = Stack[-20]
0x69: Call2 0x3c

0x6a: Pop(3)
0x6b: Stack[-2] = 0
0x6c: Push((int) 1)
0x6d: Stack[-4] = Stack[-4] + Stack[-1]; Pop(1);
0x6e: GOTO 0x59

0x6f: Return(); Pop(16)

0x70: PushEmpty()
0x71: Push("scrollbar")
0x72: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x73: IF (Stack[-1] == 0) GOTO 0x7d; Pop(1)

0x74: Pop(0); Push(( -Stack[2 + Tasks[-1].StackPointer])
0x75: Pop(1); Push(Stack[-1] * Stack[-4]);
0x76: Push((int) 100)
0x77: Stack[1 + Tasks[-1].StackPointer] = Stack[-2] / Stack[-1]; Pop(2);
0x78: PushEmpty()
0x79: Call2 0x97

0x7a: Pop(0)
0x7b: Return(); Pop(0)

0x7c: GOTO 0x89

0x7d: Push("diary")
0x7e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7f: IF (Stack[-1] == 0) GOTO 0x89; Pop(1)

0x80: Stack[5 + Tasks[-1].StackPointer] = Stack[-3]
0x81: Stack[1 + Tasks[-1].StackPointer] = (int)0
0x82: PushEmpty(bool)
0x83: Stack[-1] = (bool) 1
0x84: Call2 0x14

0x85: Pop(1)
0x86: PushEmpty()
0x87: Call2 0xa6

0x88: Pop(0)
0x89: Return(); Pop(0)

0x8a: PushEmpty(int, int)
0x8b: Push((int) 15)
0x8c: Pop(1); Push(Stack[-4] * Stack[-1]);
0x8d: Push((int) 2)
0x8e: Stack[-3] = Stack[-2] * Stack[-1]; Pop(2);
0x8f: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] + Stack[-1]; Pop(0);
0x90: PushEmpty()
0x91: Call2 0x97

0x92: Pop(0)
0x93: PushEmpty()
0x94: Call2 0xa6

0x95: Pop(0)
0x96: Return(); Pop(2)

0x97: Push((int) 0)
0x98: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] == Stack[-1])
0x99: IF (Stack[-1] == 0) GOTO 0x9c; Pop(1)

0x9a: Stack[1 + Tasks[-1].StackPointer] = (int)0
0x9b: Return(); Pop(0)

0x9c: Pop(0); Push(( -Stack[1 + Tasks[-1].StackPointer])
0x9d: Pop(1); Push((bool) Stack[-1] > Stack[2 + Tasks[-1].StackPointer])
0x9e: IF (Stack[-1] == 0) GOTO 0xa1; Pop(1)

0x9f: Stack[1 + Tasks[-1].StackPointer] = -Stack[2 + Tasks[-1].StackPointer]; Pop(0);
0xa0: GOTO 0xa5

0xa1: Push((int) 0)
0xa2: Pop(1); Push((bool) Stack[1 + Tasks[-1].StackPointer] > Stack[-1])
0xa3: IF (Stack[-1] == 0) GOTO 0xa5; Pop(1)

0xa4: Stack[1 + Tasks[-1].StackPointer] = (int)0
0xa5: Return(); Pop(0)

0xa6: Push((int) 0)
0xa7: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] == Stack[-1])
0xa8: IF (Stack[-1] == 0) GOTO 0xae; Pop(1)

0xa9: Push((int) 16384)
0xaa: Push("scrollbar")
0xab: @ SendMessage(Stack[-2], Stack[-1])
0xac: Pop(2)
0xad: GOTO 0xb5

0xae: Pop(0); Push(( -Stack[1 + Tasks[-1].StackPointer])
0xaf: Push((int) 100)
0xb0: Pop(2); Push(Stack[-2] * Stack[-1]);
0xb1: Pop(1); Push(Stack[-1] / Stack[2 + StackPtr]);
0xb2: Push("scrollbar")
0xb3: @ SendMessage(Stack[-2], Stack[-1])
0xb4: Pop(2)
0xb5: Return(); Pop(0)

