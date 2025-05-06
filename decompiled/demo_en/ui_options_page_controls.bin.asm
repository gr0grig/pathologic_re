GlobalVarCount = 0

Strings:
	default

Import:
	SetOwnerDraw (1 args)
	ProcessEvents (0 args)
	Print (4 args)
	GetStringByID (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_0 Op = 0x6 Vars = ()


0x0: Push((bool) 1)
0x1: @ SetOwnerDraw(Stack[-1])
0x2: Pop(1)
0x3: @ ProcessEvents()
0x4: Pop(0)
0x5: Return(); Pop(0)

0x6: Push("default")
0x7: Push((int) 15)
0x8: Push((int) 15)
0x9: PushEmpty(string, int)
0xa: Stack[-1] = (int) 100
0xb: Call2 0x19

0xc: Pop(1)
0xd: @ Print(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xe: Pop(4)
0xf: Push("default")
0x10: Push((int) 15)
0x11: Push((int) 98)
0x12: PushEmpty(string, int)
0x13: Stack[-1] = (int) 101
0x14: Call2 0x19

0x15: Pop(1)
0x16: @ Print(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x17: Pop(4)
0x18: Return(); Pop(0)

0x19: PushEmpty(string, string)
0x1a: @ GetStringByID(Stack[-1], Stack[-3])
0x1b: Pop(0)
0x1c: Stack[-4] = Stack[-1]
0x1d: Return(); Pop(2)

