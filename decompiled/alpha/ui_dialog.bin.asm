GlobalVarCount = 0

Strings:
	default

Import:
	ShowCursor (0 args)
	SetCursor (1 args)
	ProcessEvents (0 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0


0x0: @ ShowCursor()
0x1: Pop(0)
0x2: Push("default")
0x3: @ SetCursor(Stack[-1])
0x4: Pop(1)
0x5: @ ProcessEvents()
0x6: Pop(0)
0x7: Return(); Pop(0)

