GlobalVarCount = 0

Strings:
	default
	branch

Import:
	GetStringByID (2 args)
	GetWindowSize (2 args)
	GetFontHeight (2 args)
	SetOwnerDraw (1 args)
	ProcessEvents (0 args)
	Print (7 args)
	GetVariable (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (string, int, int) Params = 0
		EVENT_0 Op = 0x2d Vars = ()


0x0: PushEmpty(int, int, int, int, int, int, int, int)
0x1: PushEmpty(int)
0x2: Call2 0x34

0x3: Pop(0)
0x4: Push((int) 1)
0x5: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x6: IF (Stack[-1] == 0) GOTO 0x9; Pop(1)

0x7: Stack[-4] = (int) 713
0x8: GOTO 0x18

0x9: PushEmpty(int)
0xa: Call2 0x34

0xb: Pop(0)
0xc: Push((int) 0)
0xd: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xe: IF (Stack[-1] == 0) GOTO 0x11; Pop(1)

0xf: Stack[-4] = (int) 714
0x10: GOTO 0x18

0x11: PushEmpty(int)
0x12: Call2 0x34

0x13: Pop(0)
0x14: Push((int) 2)
0x15: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x16: IF (Stack[-1] == 0) GOTO 0x18; Pop(1)

0x17: Stack[-4] = (int) 715
0x18: @ GetStringByID(Stack[-0], Stack[-4])
0x19: Pop(0)
0x1a: @ GetWindowSize(Stack[-3], Stack[-2])
0x1b: Pop(0)
0x1c: Stack[1 + Tasks[-1].StackPointer] = (int)2
0x1d: Push("default")
0x1e: @ GetFontHeight(Stack[-2], Stack[-1])
0x1f: Pop(1)
0x20: Pop(0); Push(Stack[-2] - Stack[-1]);
0x21: Push((int) 2)
0x22: Stack[2 + Tasks[-1].StackPointer] = Stack[-2] / Stack[-1]; Pop(2);
0x23: Push((int) 0)
0x24: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] < Stack[-1])
0x25: IF (Stack[-1] == 0) GOTO 0x27; Pop(1)

0x26: Stack[2 + Tasks[-1].StackPointer] = (int)0
0x27: Push((bool) 1)
0x28: @ SetOwnerDraw(Stack[-1])
0x29: Pop(1)
0x2a: @ ProcessEvents()
0x2b: Pop(0)
0x2c: Return(); Pop(8)

0x2d: Push("default")
0x2e: Push((float)0.6549)
0x2f: Push((float)0.6549)
0x30: Push((float)0.6549)
0x31: @ Print(Stack[-4], Stack[-1], Stack[-2], Stack[-0], Stack[-3], Stack[-2], Stack[-1])
0x32: Pop(4)
0x33: Return(); Pop(0)

0x34: PushEmpty(int, int)
0x35: Push("branch")
0x36: @ GetVariable(Stack[-1], Stack[-2])
0x37: Pop(1)
0x38: Stack[-3] = Stack[-1]
0x39: Return(); Pop(2)

