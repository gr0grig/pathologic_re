GlobalVarCount = 0

Strings:
	help

Import:
	GetWindowSize (2 args)
	SetOwnerDraw (1 args)
	SetNeedUpdate (1 args)
	ProcessEvents (0 args)
	GetStringByID (2 args)
	Print (8 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (int, float, int, int) Params = 0
		EVENT_201 Op = 0xe Vars = (int, object)
		EVENT_1 Op = 0x15 Vars = (float)
		EVENT_0 Op = 0x3d Vars = ()


0x0: EventDisable(201)
0x1: @ GetWindowSize(Stack[-2], Stack[-3])
0x2: Pop(0)
0x3: Stack[0 + Tasks[-1].StackPointer] = (int)-1
0x4: EventEnable(201)
0x5: Push((bool) 1)
0x6: @ SetOwnerDraw(Stack[-1])
0x7: Pop(1)
0x8: Push((bool) 1)
0x9: @ SetNeedUpdate(Stack[-1])
0xa: Pop(1)
0xb: @ ProcessEvents()
0xc: Pop(0)
0xd: Return(); Pop(0)

0xe: PushEmpty()
0xf: Push((int) 1000)
0x10: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11: IF (Stack[-1] == 0) GOTO 0x14; Pop(1)

0x12: Stack[0 + Tasks[-1].StackPointer] = (int)109
0x13: Stack[1 + Tasks[-1].StackPointer] = (float)1.0
0x14: Return(); Pop(0)

0x15: PushEmpty()
0x16: PushEmpty(float)
0x17: Stack[-1] = Stack[-2]
0x18: Call2 0x32

0x19: Pop(1)
0x1a: Return(); Pop(0)

0x1b: PushEmpty(string, float, string, float)
0x1c: Push((int) -1)
0x1d: Pop(1); Push((bool) Stack[0 + Tasks[-1].StackPointer] == Stack[-1])
0x1e: IF (Stack[-1] == 0) GOTO 0x20; Pop(1)

0x1f: Return(); Pop(4)

0x20: @ GetStringByID(Stack[-2], Stack[-0])
0x21: Pop(0)
0x22: Push((float)3.14)
0x23: Pop(1); Push(Stack[-1] * Stack[1 + StackPtr]);
0x24: Push((float)1.0)
0x25: Pop(2); Push(Stack[-2] / Stack[-1]);
0x26: Push((float)2.0)
0x27: Pop(2); Push(Stack[-2] / Stack[-1]);
0x28: Stack[-2] = Sin(Stack[-1]); Pop(1);
0x29: Push("help")
0x2a: Push((int) 10)
0x2b: Push((int) 10)
0x2c: Push((float)1.0)
0x2d: Push((float)1.0)
0x2e: Push((float)1.0)
0x2f: @ Print(Stack[-6], Stack[-5], Stack[-4], Stack[-8], Stack[-3], Stack[-2], Stack[-1], Stack[-7])
0x30: Pop(6)
0x31: Return(); Pop(4)

0x32: PushEmpty()
0x33: Push((int) -1)
0x34: Pop(1); Push((bool) Stack[0 + Tasks[-1].StackPointer] == Stack[-1])
0x35: IF (Stack[-1] == 0) GOTO 0x37; Pop(1)

0x36: Return(); Pop(0)

0x37: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] - Stack[-1]; Pop(0);
0x38: Push((int) 0)
0x39: Pop(1); Push((bool) Stack[1 + Tasks[-1].StackPointer] <= Stack[-1])
0x3a: IF (Stack[-1] == 0) GOTO 0x3c; Pop(1)

0x3b: Stack[0 + Tasks[-1].StackPointer] = (int)-1
0x3c: Return(); Pop(0)

0x3d: PushEmpty()
0x3e: Call2 0x1b

0x3f: Pop(0)
0x40: Return(); Pop(0)

