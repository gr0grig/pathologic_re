GlobalVarCount = 0

Strings:
	W:object
	A:Enable
// @pool_raw:6f0062006a006500630074000000456e61626c6500

Import:
	FindGeometry (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0


0x0: PushEmpty(object, object)
0x1: Push("object") // @poff=0
0x2: @ FindGeometry(Stack[-1], Stack[-2])
0x3: Pop(1)
0x4: Push((bool) 1)
0x5: @@ Enable(Stack[-1]); Obj=2 // @poff=14
0x6: Pop(1)
0x7: Return(); Pop(2)

0x8: Stack[-1] = 0
