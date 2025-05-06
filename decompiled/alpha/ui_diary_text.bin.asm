GlobalVarCount = 0

Strings:
	ChildCount
	Child
	GetCategory
	GetTextID
	default
	scrollbar

Import:
	GetWindowSize (2 args)
	EnableClipping (1 args)
	SetOwnerDraw (1 args)
	ProcessEvents (0 args)
	GetDiaryRoot (1 args)
	GetStringByID (2 args)
	PrintInWidth (9 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (bool, int, int, int, int, int, int) Params = 0
		EVENT_0 Op = 0xd Vars = ()
		EVENT_200 Op = 0x56 Vars = (int, string, object)


0x0: Stack[5 + Tasks[-1].StackPointer] = (int)0
0x1: Stack[1 + Tasks[-1].StackPointer] = (int)0
0x2: @ GetWindowSize(Stack[-3], Stack[-4])
0x3: Pop(0)
0x4: Push((bool) 1)
0x5: @ EnableClipping(Stack[-1])
0x6: Pop(1)
0x7: Push((bool) 1)
0x8: @ SetOwnerDraw(Stack[-1])
0x9: Pop(1)
0xa: @ ProcessEvents()
0xb: Pop(0)
0xc: Return(); Pop(0)

0xd: PushEmpty(object, int, int, object, object, int, int, object)
0xe: @ GetDiaryRoot(Stack[-4])
0xf: Pop(0)
0x10: Stack[6 + Tasks[-1].StackPointer] = (int)0
0x11: @@ ChildCount(Stack[-3])
0x12: Pop(0)
0x13: Stack[-2] = (int) 0
0x14: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0x15: IF (Stack[-1] == 0) GOTO 0x23; Pop(1)

0x16: @@ Child(Stack[-1], Stack[-2])
0x17: Pop(0)
0x18: PushEmpty(object, int)
0x19: Stack[-2] = Stack[-3]
0x1a: Stack[-1] = (int) 0
0x1b: Call 0x2a

0x1c: Pop(2)
0x1d: Push((int) 15)
0x1e: Stack[6 + Tasks[-1].StackPointer] = Stack[6 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x1f: Stack[-1] = 0
0x20: Push((int) 1)
0x21: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x22: GOTO 0x14

0x23: Stack[2 + Tasks[-1].StackPointer] = Stack[6 + Tasks[-1].StackPointer] - Stack[4 + Tasks[-1].StackPointer]; Pop(0);
0x24: Push((int) 0)
0x25: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] < Stack[-1])
0x26: IF (Stack[-1] == 0) GOTO 0x28; Pop(1)

0x27: Stack[2 + Tasks[-1].StackPointer] = (int)0
0x28: Return(); Pop(8)

0x29: Stack[-4] = 0
0x2a: PushEmpty(int, int, string, int, int, int, object, int, int, int, string, int, int, int, object, int)
0x2b: @@ GetCategory(Stack[-8])
0x2c: Pop(0)
0x2d: Pop(0); Push((bool) Stack[-8] != Stack[5 + Tasks[-1].StackPointer])
0x2e: IF (Stack[-1] == 0) GOTO 0x30; Pop(1)

0x2f: Return(); Pop(16)

0x30: @@ GetTextID(Stack[-7])
0x31: Pop(0)
0x32: @ GetStringByID(Stack[-6], Stack[-7])
0x33: Pop(0)
0x34: Push("default")
0x35: Pop(0); Push(Stack[1 + StackPtr] + Stack[6 + StackPtr]);
0x36: Pop(0); Push(Stack[3 + StackPtr] + Stack[-19]);
0x37: Push((float)1.0)
0x38: Push((float)1.0)
0x39: Push((float)1.0)
0x3a: @ PrintInWidth(Stack[-11], Stack[-6], Stack[-23], Stack[-5], Stack[-4], Stack[-12], Stack[-3], Stack[-2], Stack[-1])
0x3b: Pop(6)
0x3c: Stack[6 + Tasks[-1].StackPointer] = Stack[6 + Tasks[-1].StackPointer] + Stack[-5]; Pop(0);
0x3d: @@ ChildCount(Stack[-4])
0x3e: Pop(0)
0x3f: Stack[-3] = (int) 0
0x40: Pop(0); Push((bool) Stack[-3] < Stack[-4])
0x41: IF (Stack[-1] == 0) GOTO 0x55; Pop(1)

0x42: @@ Child(Stack[-2], Stack[-3])
0x43: Pop(0)
0x44: @@ GetCategory(Stack[-1])
0x45: Pop(0)
0x46: Pop(0); Push((bool) Stack[-1] != Stack[5 + Tasks[-1].StackPointer])
0x47: IF (Stack[-1] == 0) GOTO 0x49; Pop(1)

0x48: GOTO 0x52

0x49: Push((int) 10)
0x4a: Stack[6 + Tasks[-1].StackPointer] = Stack[6 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x4b: PushEmpty(object, int)
0x4c: Stack[-2] = Stack[-4]
0x4d: Push((int) 20)
0x4e: Stack[-2] = Stack[-20] + Stack[-1]; Pop(1);
0x4f: Call 0x2a

0x50: Pop(2)
0x51: Stack[-2] = 0
0x52: Push((int) 1)
0x53: Stack[-4] = Stack[-4] + Stack[-1]; Pop(1);
0x54: GOTO 0x40

0x55: Return(); Pop(16)

0x56: PushEmpty()
0x57: Push("scrollbar")
0x58: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x59: IF (Stack[-1] == 0) GOTO 0x5f; Pop(1)

0x5a: Pop(0); Push(( -Stack[2 + Tasks[-1].StackPointer])
0x5b: Pop(1); Push(Stack[-1] * Stack[-4]);
0x5c: Push((int) 100)
0x5d: Stack[1 + Tasks[-1].StackPointer] = Stack[-2] / Stack[-1]; Pop(2);
0x5e: Return(); Pop(0)

0x5f: Stack[5 + Tasks[-1].StackPointer] = Stack[-3]
0x60: Return(); Pop(0)

