GlobalVarCount = 0

Strings:
	default
	player

Import:
	GetStringByID (2 args)
	_strupr (1 args)
	GetWindowSize (2 args)
	GetTextWidth (3 args)
	GetFontHeight (2 args)
	SetOwnerDraw (1 args)
	ProcessEvents (0 args)
	Print (7 args)
	GetVariable (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (string, int, int) Params = 0
		EVENT_0 Op = 0x24 Vars = ()


0x0: PushEmpty(int, int, int, int, int, int, int, int)
0x1: PushEmpty(int)
0x2: Call 0x2b

0x3: Pop(0)
0x4: @ GetStringByID(Stack[-0], Stack[-1])
0x5: Pop(1)
0x6: @ _strupr(Stack[-0])
0x7: Pop(0)
0x8: @ GetWindowSize(Stack[-4], Stack[-3])
0x9: Pop(0)
0xa: Push("default")
0xb: @ GetTextWidth(Stack[-3], Stack[-1], Stack[-0])
0xc: Pop(1)
0xd: Stack[-4] = Stack[-4] - Stack[-2]; Pop(0);
0xe: Push((int) 0)
0xf: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x10: IF (Stack[-1] == 0) GOTO 0x12; Pop(1)

0x11: Stack[-4] = (int) 0
0x12: Push((int) 2)
0x13: Stack[1 + Tasks[-1].StackPointer] = Stack[-5] / Stack[-1]; Pop(1);
0x14: Push("default")
0x15: @ GetFontHeight(Stack[-2], Stack[-1])
0x16: Pop(1)
0x17: Pop(0); Push(Stack[-3] - Stack[-1]);
0x18: Push((int) 2)
0x19: Stack[2 + Tasks[-1].StackPointer] = Stack[-2] / Stack[-1]; Pop(2);
0x1a: Push((int) 0)
0x1b: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] < Stack[-1])
0x1c: IF (Stack[-1] == 0) GOTO 0x1e; Pop(1)

0x1d: Stack[2 + Tasks[-1].StackPointer] = (int)0
0x1e: Push((bool) 1)
0x1f: @ SetOwnerDraw(Stack[-1])
0x20: Pop(1)
0x21: @ ProcessEvents()
0x22: Pop(0)
0x23: Return(); Pop(8)

0x24: Push("default")
0x25: Push((float)1.0)
0x26: Push((float)1.0)
0x27: Push((float)1.0)
0x28: @ Print(Stack[-4], Stack[-1], Stack[-2], Stack[-0], Stack[-3], Stack[-2], Stack[-1])
0x29: Pop(4)
0x2a: Return(); Pop(0)

0x2b: PushEmpty(int, int)
0x2c: Push("player")
0x2d: @ GetVariable(Stack[-1], Stack[-2])
0x2e: Pop(1)
0x2f: Push((int) 0)
0x30: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x31: IF (Stack[-1] == 0) GOTO 0x35; Pop(1)

0x32: Stack[-3] = (int) 200001
0x33: Return(); Pop(2)

0x34: GOTO 0x3a

0x35: Push((int) 1)
0x36: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x37: IF (Stack[-1] == 0) GOTO 0x3a; Pop(1)

0x38: Stack[-3] = (int) 200002
0x39: Return(); Pop(2)

0x3a: Stack[-3] = (int) 200003
0x3b: Return(); Pop(2)

