GlobalVarCount = 0

Strings:
	default
	pressed

Import:
	SetBackground (1 args)
	SetOwnerDraw (1 args)
	ProcessEvents (0 args)
	SendMessageToParent (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_2 Op = 0x9 Vars = (int, int)
		EVENT_3 Op = 0x11 Vars = (int, int)
		EVENT_10 Op = 0x16 Vars = ()


0x0: Push("default")
0x1: @ SetBackground(Stack[-1])
0x2: Pop(1)
0x3: Push((bool) 0)
0x4: @ SetOwnerDraw(Stack[-1])
0x5: Pop(1)
0x6: @ ProcessEvents()
0x7: Pop(0)
0x8: Return(); Pop(0)

0x9: PushEmpty()
0xa: Push("pressed")
0xb: @ SetBackground(Stack[-1])
0xc: Pop(1)
0xd: Push((int) 0)
0xe: @ SendMessageToParent(Stack[-1])
0xf: Pop(1)
0x10: Return(); Pop(0)

0x11: PushEmpty()
0x12: Push("default")
0x13: @ SetBackground(Stack[-1])
0x14: Pop(1)
0x15: Return(); Pop(0)

0x16: Push("default")
0x17: @ SetBackground(Stack[-1])
0x18: Pop(1)
0x19: Return(); Pop(0)

