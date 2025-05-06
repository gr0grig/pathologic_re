GlobalVarCount = 0

Strings:
	player
	GetEyesHeight
	head

Import:
	FindActor (2 args)
	Hold (0 args)
	LookAsync (3 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0


0x0: PushEmpty(object, object)
0x1: Push("player")
0x2: @ FindActor(Stack[-2], Stack[-1])
0x3: Pop(1)
0x4: PushEmpty(object)
0x5: Stack[-1] = Stack[-2]
0x6: Call 0xc

0x7: Pop(1)
0x8: @ Hold()
0x9: Pop(0)
0xa: Return(); Pop(2)

0xb: Stack[-1] = 0
0xc: PushEmpty(float, cvector, float, cvector)
0xd: @@ GetEyesHeight(Stack[-2])
0xe: Pop(0)
0xf: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x10: Push(CvectorIndex(Stack[-1], 1))
0x11: Stack[-1] = Stack[-3]
0x12: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x13: Push("head")
0x14: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x15: Pop(1)
0x16: Return(); Pop(4)

