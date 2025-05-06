GlobalVarCount = 0

Strings:
	default

Import:
	SetBackground (1 args)
	SetOwnerDraw (1 args)
	ProcessEvents (0 args)
	Print (4 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (int) Params = 0
		EVENT_0 Op = 0xa Vars = ()
		EVENT_200 Op = 0x10 Vars = (int, string, object)


0x0: Stack[0 + Tasks[-1].StackPointer] = (int)0
0x1: Push("default")
0x2: @ SetBackground(Stack[-1])
0x3: Pop(1)
0x4: Push((bool) 1)
0x5: @ SetOwnerDraw(Stack[-1])
0x6: Pop(1)
0x7: @ ProcessEvents()
0x8: Pop(0)
0x9: Return(); Pop(0)

0xa: Push("default")
0xb: Push((int) 2)
0xc: Push((int) 35)
0xd: @ Print(Stack[-3], Stack[-2], Stack[-1], Stack[-0])
0xe: Pop(3)
0xf: Return(); Pop(0)

0x10: PushEmpty()
0x11: Stack[0 + Tasks[-1].StackPointer] = Stack[-3]
0x12: Return(); Pop(0)

