GlobalVarCount = 0

Strings:
	W:default
// @pool_raw:640065006600610075006c0074000000

Import:
	SetBackground (1 args)
	ProcessEvents (0 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0


0x0: Push("default") // @poff=0
0x1: @ SetBackground(Stack[-1])
0x2: Pop(1)
0x3: @ ProcessEvents()
0x4: Pop(0)
0x5: Return(); Pop(0)

