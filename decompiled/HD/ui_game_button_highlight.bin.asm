GlobalVarCount = 0

Strings:
	default
	highlight

Import:
	SetBackground (1 args)
	ProcessEvents (0 args)
	GetWindowName (1 args)
	Trace (1 args)
	SendMessageToParent (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (string) Params = 0
		EVENT_2 Op = 0xa Vars = (int, int)
		EVENT_3 Op = 0x12 Vars = (int, int)
		EVENT_9 Op = 0x17 Vars = ()
		EVENT_10 Op = 0x1b Vars = ()
		EVENT_200 Op = 0x1f Vars = (int, string, object)


0x0: Push("default")
0x1: @ SetBackground(Stack[-1])
0x2: Pop(1)
0x3: @ ProcessEvents()
0x4: Pop(0)
0x5: @ GetWindowName(Stack[-0])
0x6: Pop(0)
0x7: @ Trace(Stack[-0])
0x8: Pop(0)
0x9: Return(); Pop(0)

0xa: PushEmpty()
0xb: Push("highlight")
0xc: @ SetBackground(Stack[-1])
0xd: Pop(1)
0xe: Push((int) 0)
0xf: @ SendMessageToParent(Stack[-1])
0x10: Pop(1)
0x11: Return(); Pop(0)

0x12: PushEmpty()
0x13: Push("default")
0x14: @ SetBackground(Stack[-1])
0x15: Pop(1)
0x16: Return(); Pop(0)

0x17: Push("highlight")
0x18: @ SetBackground(Stack[-1])
0x19: Pop(1)
0x1a: Return(); Pop(0)

0x1b: Push("default")
0x1c: @ SetBackground(Stack[-1])
0x1d: Pop(1)
0x1e: Return(); Pop(0)

0x1f: PushEmpty()
0x20: Push((int) 1)
0x21: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x22: IF (Stack[-1] == 0) GOTO 0x27; Pop(1)

0x23: Push("highlight")
0x24: @ SetBackground(Stack[-1])
0x25: Pop(1)
0x26: GOTO 0x37

0x27: Push((int) 0)
0x28: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x29: IF (Stack[-1] == 0) GOTO 0x2e; Pop(1)

0x2a: Push("default")
0x2b: @ SetBackground(Stack[-1])
0x2c: Pop(1)
0x2d: GOTO 0x37

0x2e: Push((int) 2)
0x2f: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x30: IF (Stack[-1] == 0) GOTO 0x37; Pop(1)

0x31: Push("highlight")
0x32: @ SetBackground(Stack[-1])
0x33: Pop(1)
0x34: Push((int) 0)
0x35: @ SendMessageToParent(Stack[-1])
0x36: Pop(1)
0x37: Return(); Pop(0)

