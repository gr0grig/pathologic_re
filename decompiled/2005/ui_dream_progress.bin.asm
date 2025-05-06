GlobalVarCount = 0

Strings:
	white
	default

Import:
	GetWindowSize (2 args)
	SetOwnerDraw (1 args)
	ProcessEvents (0 args)
	StretchBlit (5 args)
	Print (7 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (int, int, int) Params = 0
		EVENT_200 Op = 0x9 Vars = (int, string, object)
		EVENT_0 Op = 0xc Vars = ()


0x0: Stack[0 + Tasks[-1].StackPointer] = (int)0
0x1: @ GetWindowSize(Stack[-1], Stack[-2])
0x2: Pop(0)
0x3: Push((bool) 1)
0x4: @ SetOwnerDraw(Stack[-1])
0x5: Pop(1)
0x6: @ ProcessEvents()
0x7: Pop(0)
0x8: Return(); Pop(0)

0x9: PushEmpty()
0xa: Stack[0 + Tasks[-1].StackPointer] = Stack[-3]
0xb: Return(); Pop(0)

0xc: PushEmpty(int, int, int, int, int, int)
0xd: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0xe: IF (Stack[-1] == 0) GOTO 0x10; Pop(1)

0xf: Return(); Pop(6)

0x10: Pop(0); Push(Stack[1 + StackPtr] * Stack[0 + StackPtr]);
0x11: Push((int) 100)
0x12: Stack[-5] = Stack[-2] / Stack[-1]; Pop(2);
0x13: Push((int) 0)
0x14: Pop(1); Push((bool) Stack[-4] != Stack[-1])
0x15: IF (Stack[-1] == 0) GOTO 0x1b; Pop(1)

0x16: Push("white")
0x17: Push((int) 0)
0x18: Push((int) 0)
0x19: @ StretchBlit(Stack[-3], Stack[-2], Stack[-1], Stack[-6], Stack[-2])
0x1a: Pop(3)
0x1b: Push((float)6.0)
0x1c: Push((int) 1)
0x1d: Pop(1); Push(Stack[0 + StackPtr] + Stack[-1]);
0x1e: Pop(2); Push(Stack[-2] * Stack[-1]);
0x1f: Push((float)100.0)
0x20: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0x21: Push(Stack[-2])
0x22: IF (Stack[-1] == 0) GOTO 0x31; Pop(1)

0x23: Push((int) 1)
0x24: Pop(1); Push(Stack[-3] - Stack[-1]);
0x25: Pop(1); Push(Stack[-1] * Stack[1 + StackPtr]);
0x26: Push((float)6.0)
0x27: Stack[-3] = Stack[-2] / Stack[-1]; Pop(2);
0x28: Push("default")
0x29: Push((int) 5)
0x2a: Pop(1); Push(Stack[-3] + Stack[-1]);
0x2b: Push((int) 5)
0x2c: Push((int) 0)
0x2d: Push((int) 0)
0x2e: Push((int) 0)
0x2f: @ Print(Stack[-6], Stack[-5], Stack[-4], Stack[-8], Stack[-3], Stack[-2], Stack[-1])
0x30: Pop(6)
0x31: Return(); Pop(6)

