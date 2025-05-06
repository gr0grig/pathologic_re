GlobalVarCount = 0

Strings:
	health
	disease

Import:
	GetProperty (2 args)
	SetProperty (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0


0x0: PushEmpty(float, float)
0x1: Push("health")
0x2: @ GetProperty(Stack[-1], Stack[-2])
0x3: Pop(1)
0x4: Push((float)0.05)
0x5: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x6: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x7: Push("health")
0x8: Push((float)0.05)
0x9: @ SetProperty(Stack[-2], Stack[-1])
0xa: Pop(2)
0xb: Push("disease")
0xc: Push((int) 0)
0xd: @ SetProperty(Stack[-2], Stack[-1])
0xe: Pop(2)
0xf: Return(); Pop(2)

