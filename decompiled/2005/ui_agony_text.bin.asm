GlobalVarCount = 0

Strings:
	default

Import:
	GetWindowSize (2 args)
	GetStringByID (2 args)
	SetOwnerDraw (1 args)
	ProcessEvents (0 args)
	PrintInWidth (9 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (string, int, int) Params = 0
		EVENT_0 Op = 0xb Vars = ()


0x0: @ GetWindowSize(Stack[-1], Stack[-2])
0x1: Pop(0)
0x2: Push((int) 725)
0x3: @ GetStringByID(Stack[-0], Stack[-1])
0x4: Pop(1)
0x5: Push((bool) 1)
0x6: @ SetOwnerDraw(Stack[-1])
0x7: Pop(1)
0x8: @ ProcessEvents()
0x9: Pop(0)
0xa: Return(); Pop(0)

0xb: PushEmpty(int, int)
0xc: Push("default")
0xd: Push((int) 0)
0xe: Push((int) -1)
0xf: Push((float)0.37255)
0x10: Push((float)0.37255)
0x11: Push((float)0.37255)
0x12: @ PrintInWidth(Stack[-7], Stack[-6], Stack[-5], Stack[-4], Stack[-1], Stack[-0], Stack[-3], Stack[-2], Stack[-1])
0x13: Pop(6)
0x14: Return(); Pop(2)

