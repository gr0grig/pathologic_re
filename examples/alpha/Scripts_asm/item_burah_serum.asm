GlobalVarCount = 0

Strings:
	W:disease
// @pool_raw:64006900730065006100730065000000

Import:
	SetProperty (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0


0x0: Push("disease") // @poff=0
0x1: Push((int) 0)
0x2: @ SetProperty(Stack[-2], Stack[-1])
0x3: Pop(2)
0x4: Return(); Pop(0)

