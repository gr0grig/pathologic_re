GlobalVarCount = 0

Strings:
	object
	Enable

Import:
	FindGeometry (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0


0x0: PushEmpty(object, object)
0x1: Push("object")
0x2: @ FindGeometry(Stack[-1], Stack[-2])
0x3: Pop(1)
0x4: Push((bool) 1)
0x5: @@ Enable(Stack[-1])
0x6: Pop(1)
0x7: Return(); Pop(2)

0x8: Stack[-1] = 0
