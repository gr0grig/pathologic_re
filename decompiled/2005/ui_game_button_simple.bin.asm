GlobalVarCount = 0

Strings:
	default

Import:
	SetBackground (1 args)
	ProcessEvents (0 args)
	SendMessageToParent (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_2 Op = 0x6 Vars = (int, int)


0x0: Push("default")
0x1: @ SetBackground(Stack[-1])
0x2: Pop(1)
0x3: @ ProcessEvents()
0x4: Pop(0)
0x5: Return(); Pop(0)

0x6: PushEmpty()
0x7: Push((int) 0)
0x8: @ SendMessageToParent(Stack[-1])
0x9: Pop(1)
0xa: Return(); Pop(0)

