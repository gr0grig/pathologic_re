GlobalVarCount = 0

Strings:

Import:
	DisableUpdate (0 args)
	Hold (0 args)
	SetVisibility (1 args)
	StopGroup0 (0 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_5 Op = 0x5 Vars = ()


0x0: @ DisableUpdate()
0x1: Pop(0)
0x2: @ Hold()
0x3: Pop(0)
0x4: Return(); Pop(0)

0x5: Push((bool) 1)
0x6: @ SetVisibility(Stack[-1])
0x7: Pop(1)
0x8: @ StopGroup0()
0x9: Pop(0)
0xa: Return(); Pop(0)

