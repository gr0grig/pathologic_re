GlobalVarCount = 0

Strings:

Import:
	ProcessEvents (0 args)
	SendMessageToParent (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_15 Op = 0x3 Vars = (int, int, float)


0x0: @ ProcessEvents()
0x1: Pop(0)
0x2: Return(); Pop(0)

0x3: PushEmpty()
0x4: @ SendMessageToParent(Stack[-1])
0x5: Pop(0)
0x6: Return(); Pop(0)

