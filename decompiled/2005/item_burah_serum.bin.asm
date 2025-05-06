GlobalVarCount = 0

Strings:
	disease
	add

Import:
	GetProperty (2 args)
	SetProperty (2 args)
	CreateFloatVector (1 args)
	SendWorldWndMessage (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0


0x0: PushEmpty(float, float)
0x1: Push("disease")
0x2: @ GetProperty(Stack[-1], Stack[-2])
0x3: Pop(1)
0x4: Push("disease")
0x5: Push((int) 0)
0x6: @ SetProperty(Stack[-2], Stack[-1])
0x7: Pop(2)
0x8: PushEmpty(float)
0x9: Stack[-1] = -Stack[-2]; Pop(0);
0xa: Call2 0xd

0xb: Pop(1)
0xc: Return(); Pop(2)

0xd: PushEmpty(object, object)
0xe: @ CreateFloatVector(Stack[-1])
0xf: Pop(0)
0x10: @@ add(Stack[-3])
0x11: Pop(0)
0x12: Push((int) 14)
0x13: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x14: Pop(1)
0x15: Return(); Pop(2)

0x16: Stack[-1] = 0
