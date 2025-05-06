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
		EVENT_15 Op = 0x9b Vars = (int, int, float)


0x0: Stack[5 + Tasks[-1].StackPointer] = (int)0
0x1: Stack[1 + Tasks[-1].StackPointer] = (int)0
0x2: @ GetWindowSize(Stack[-3], Stack[-4])
0x3: Pop(0)
0x4: PushEmpty(bool)
0x5: Stack[-1] = (bool) 1
0x6: Call2 0x14

0x7: Pop(1)
0x8: PushEmpty()
0x9: Call2 0xcb

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
0x79: Call2 0xbc

0x7a: Pop(0)
0x7b: Return(); Pop(0)

0x7c: GOTO 0x9a

0x7d: Push("diary")
0x7e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7f: IF (Stack[-1] == 0) GOTO 0x9a; Pop(1)

0x80: Push((int) 1000)
0x81: Pop(1); Push((bool) Stack[-4] < Stack[-1])
0x82: IF (Stack[-1] == 0) GOTO 0x8d; Pop(1)

0x83: Stack[5 + Tasks[-1].StackPointer] = Stack[-3]
0x84: Stack[1 + Tasks[-1].StackPointer] = (int)0
0x85: PushEmpty(bool)
0x86: Stack[-1] = (bool) 1
0x87: Call2 0x14

0x88: Pop(1)
0x89: PushEmpty()
0x8a: Call2 0xcb

0x8b: Pop(0)
0x8c: GOTO 0x9a

0x8d: Push((int) 1000)
0x8e: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x8f: IF (Stack[-1] == 0) GOTO 0x94; Pop(1)

0x90: PushEmpty()
0x91: Call2 0xb2

0x92: Pop(0)
0x93: GOTO 0x9a

0x94: Push((int) 1001)
0x95: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x96: IF (Stack[-1] == 0) GOTO 0x9a; Pop(1)

0x97: PushEmpty()
0x98: Call2 0xa8

0x99: Pop(0)
0x9a: Return(); Pop(0)

0x9b: PushEmpty(int, int)
0x9c: Push((int) 15)
0x9d: Pop(1); Push(Stack[-4] * Stack[-1]);
0x9e: Push((int) 2)
0x9f: Stack[-3] = Stack[-2] * Stack[-1]; Pop(2);
0xa0: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] + Stack[-1]; Pop(0);
0xa1: PushEmpty()
0xa2: Call2 0xbc

0xa3: Pop(0)
0xa4: PushEmpty()
0xa5: Call2 0xcb

0xa6: Pop(0)
0xa7: Return(); Pop(2)

0xa8: PushEmpty(int, int)
0xa9: Stack[-1] = (int) 60
0xaa: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] + Stack[-1]; Pop(0);
0xab: PushEmpty()
0xac: Call2 0xbc

0xad: Pop(0)
0xae: PushEmpty()
0xaf: Call2 0xcb

0xb0: Pop(0)
0xb1: Return(); Pop(2)

0xb2: PushEmpty(int, int)
0xb3: Stack[-1] = (int) -60
0xb4: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] + Stack[-1]; Pop(0);
0xb5: PushEmpty()
0xb6: Call2 0xbc

0xb7: Pop(0)
0xb8: PushEmpty()
0xb9: Call2 0xcb

0xba: Pop(0)
0xbb: Return(); Pop(2)

0xbc: Push((int) 0)
0xbd: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] == Stack[-1])
0xbe: IF (Stack[-1] == 0) GOTO 0xc1; Pop(1)

0xbf: Stack[1 + Tasks[-1].StackPointer] = (int)0
0xc0: Return(); Pop(0)

0xc1: Pop(0); Push(( -Stack[1 + Tasks[-1].StackPointer])
0xc2: Pop(1); Push((bool) Stack[-1] > Stack[2 + Tasks[-1].StackPointer])
0xc3: IF (Stack[-1] == 0) GOTO 0xc6; Pop(1)

0xc4: Stack[1 + Tasks[-1].StackPointer] = -Stack[2 + Tasks[-1].StackPointer]; Pop(0);
0xc5: GOTO 0xca

0xc6: Push((int) 0)
0xc7: Pop(1); Push((bool) Stack[1 + Tasks[-1].StackPointer] > Stack[-1])
0xc8: IF (Stack[-1] == 0) GOTO 0xca; Pop(1)

0xc9: Stack[1 + Tasks[-1].StackPointer] = (int)0
0xca: Return(); Pop(0)

0xcb: Push((int) 0)
0xcc: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] == Stack[-1])
0xcd: IF (Stack[-1] == 0) GOTO 0xd3; Pop(1)

0xce: Push((int) 16384)
0xcf: Push("scrollbar")
0xd0: @ SendMessage(Stack[-2], Stack[-1])
0xd1: Pop(2)
0xd2: GOTO 0xda

0xd3: Pop(0); Push(( -Stack[1 + Tasks[-1].StackPointer])
0xd4: Push((int) 100)
0xd5: Pop(2); Push(Stack[-2] * Stack[-1]);
0xd6: Pop(1); Push(Stack[-1] / Stack[2 + StackPtr]);
0xd7: Push("scrollbar")
0xd8: @ SendMessage(Stack[-2], Stack[-1])
0xd9: Pop(2)
0xda: Return(); Pop(0)

