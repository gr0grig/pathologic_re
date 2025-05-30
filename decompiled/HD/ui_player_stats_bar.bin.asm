GlobalVarCount = 0

Strings:
	r1
	r2
	r3
	default

Import:
	EnableClipping (1 args)
	SetOwnerDraw (1 args)
	ProcessEvents (0 args)
	GetWindowSize (2 args)
	Blit (3 args)
	BlitClipped (7 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (int) Params = 0
		EVENT_200 Op = 0xa Vars = (int, string, object)
		EVENT_0 Op = 0x15 Vars = ()


0x0: Stack[0 + Tasks[-1].StackPointer] = (int)0
0x1: Push((bool) 1)
0x2: @ EnableClipping(Stack[-1])
0x3: Pop(1)
0x4: Push((bool) 1)
0x5: @ SetOwnerDraw(Stack[-1])
0x6: Pop(1)
0x7: @ ProcessEvents()
0x8: Pop(0)
0x9: Return(); Pop(0)

0xa: PushEmpty()
0xb: Stack[0 + Tasks[-1].StackPointer] = Stack[-3]
0xc: Push((int) 100)
0xd: Pop(1); Push((bool) Stack[0 + Tasks[-1].StackPointer] > Stack[-1])
0xe: IF (Stack[-1] == 0) GOTO 0x10; Pop(1)

0xf: Stack[0 + Tasks[-1].StackPointer] = (int)100
0x10: Push((int) 0)
0x11: Pop(1); Push((bool) Stack[0 + Tasks[-1].StackPointer] < Stack[-1])
0x12: IF (Stack[-1] == 0) GOTO 0x14; Pop(1)

0x13: Stack[0 + Tasks[-1].StackPointer] = (int)0
0x14: Return(); Pop(0)

0x15: PushEmpty(string, int, int, int, int, string, int, int, int, int)
0x16: Push((int) 33)
0x17: Pop(1); Push((bool) Stack[0 + Tasks[-1].StackPointer] <= Stack[-1])
0x18: IF (Stack[-1] == 0) GOTO 0x1b; Pop(1)

0x19: Stack[-5] = "r1"
0x1a: GOTO 0x21

0x1b: Push((int) 66)
0x1c: Pop(1); Push((bool) Stack[0 + Tasks[-1].StackPointer] <= Stack[-1])
0x1d: IF (Stack[-1] == 0) GOTO 0x20; Pop(1)

0x1e: Stack[-5] = "r2"
0x1f: GOTO 0x21

0x20: Stack[-5] = "r3"
0x21: @ GetWindowSize(Stack[-4], Stack[-3])
0x22: Pop(0)
0x23: Push((int) 2)
0x24: Stack[-3] = Stack[0 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x25: Push((int) 100)
0x26: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x27: IF (Stack[-1] == 0) GOTO 0x29; Pop(1)

0x28: Stack[-2] = (int) 100
0x29: Pop(0); Push(Stack[-4] * Stack[0 + StackPtr]);
0x2a: Push((int) 100)
0x2b: Stack[-3] = Stack[-2] / Stack[-1]; Pop(2);
0x2c: Push("default")
0x2d: Push((int) 0)
0x2e: Push((int) 0)
0x2f: @ Blit(Stack[-3], Stack[-2], Stack[-1])
0x30: Pop(3)
0x31: Push((int) 0)
0x32: Push((int) 0)
0x33: Push((int) 0)
0x34: Push((int) 0)
0x35: @ BlitClipped(Stack[-9], Stack[-4], Stack[-3], Stack[-2], Stack[-1], Stack[-5], Stack[-7])
0x36: Pop(4)
0x37: Return(); Pop(10)

