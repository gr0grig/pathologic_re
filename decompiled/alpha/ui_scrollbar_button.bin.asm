GlobalVarCount = 0

Strings:
	default
	pressed

Import:
	SetBackground (1 args)
	ProcessEvents (0 args)
	SendMessageToParent (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_2 Op = 0x6 Vars = (int, int)
		EVENT_3 Op = 0xe Vars = (int, int)
		EVENT_10 Op = 0x13 Vars = ()


0x0: Push("default")
0x1: @ SetBackground(Stack[-1])
0x2: Pop(1)
0x3: @ ProcessEvents()
0x4: Pop(0)
0x5: Return(); Pop(0)

0x6: PushEmpty()
0x7: Push("pressed")
0x8: @ SetBackground(Stack[-1])
0x9: Pop(1)
0xa: Push((int) -1)
0xb: @ SendMessageToParent(Stack[-1])
0xc: Pop(1)
0xd: Return(); Pop(0)

0xe: PushEmpty()
0xf: Push("default")
0x10: @ SetBackground(Stack[-1])
0x11: Pop(1)
0x12: Return(); Pop(0)

0x13: Push("default")
0x14: @ SetBackground(Stack[-1])
0x15: Pop(1)
0x16: Return(); Pop(0)

