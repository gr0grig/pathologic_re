GlobalVarCount = 0

Strings:
	default
	pressed

Import:
	SetBackground (1 args)
	SetOwnerDraw (1 args)
	ProcessEvents (0 args)
	ClientToScreen (2 args)
	GetWindowSize (2 args)
	SetMousePos (2 args)
	SendMessageToParent (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_200 Op = 0x1b Vars = (int, string, object)
		EVENT_2 Op = 0x24 Vars = (int, int)
		EVENT_3 Op = 0x2c Vars = (int, int)
		EVENT_10 Op = 0x31 Vars = ()


0x0: Push("default")
0x1: @ SetBackground(Stack[-1])
0x2: Pop(1)
0x3: Push((bool) 0)
0x4: @ SetOwnerDraw(Stack[-1])
0x5: Pop(1)
0x6: @ ProcessEvents()
0x7: Pop(0)
0x8: Return(); Pop(0)

0x9: PushEmpty(int, int, int, int, int, int, int, int)
0xa: Stack[-4] = (int) 0
0xb: Stack[-3] = (int) 0
0xc: Stack[-2] = (int) 0
0xd: Stack[-1] = (int) 0
0xe: @ ClientToScreen(Stack[-4], Stack[-3])
0xf: Pop(0)
0x10: @ GetWindowSize(Stack[-2], Stack[-1])
0x11: Pop(0)
0x12: Push((int) 2)
0x13: Pop(1); Push(Stack[-3] / Stack[-1]);
0x14: Pop(1); Push(Stack[-5] + Stack[-1]);
0x15: Push((int) 2)
0x16: Pop(1); Push(Stack[-3] / Stack[-1]);
0x17: Pop(1); Push(Stack[-5] + Stack[-1]);
0x18: @ SetMousePos(Stack[-2], Stack[-1])
0x19: Pop(2)
0x1a: Return(); Pop(8)

0x1b: PushEmpty()
0x1c: Push((int) -4)
0x1d: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1e: IF (Stack[-1] == 0) GOTO 0x23; Pop(1)

0x1f: PushEmpty()
0x20: Call2 0x9

0x21: Pop(0)
0x22: Return(); Pop(0)

0x23: Return(); Pop(0)

0x24: PushEmpty()
0x25: Push("pressed")
0x26: @ SetBackground(Stack[-1])
0x27: Pop(1)
0x28: Push((int) 0)
0x29: @ SendMessageToParent(Stack[-1])
0x2a: Pop(1)
0x2b: Return(); Pop(0)

0x2c: PushEmpty()
0x2d: Push("default")
0x2e: @ SetBackground(Stack[-1])
0x2f: Pop(1)
0x30: Return(); Pop(0)

0x31: Push("default")
0x32: @ SetBackground(Stack[-1])
0x33: Pop(1)
0x34: Return(); Pop(0)

