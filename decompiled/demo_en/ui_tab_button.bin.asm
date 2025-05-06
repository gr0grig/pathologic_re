GlobalVarCount = 0

Strings:
	default
	text
	pressed

Import:
	SetBackground (1 args)
	SetOwnerDraw (1 args)
	ProcessEvents (0 args)
	Blit (3 args)
	SendMessageToParent (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_0 Op = 0x9 Vars = ()
		EVENT_2 Op = 0xf Vars = (int, int)
		EVENT_3 Op = 0x17 Vars = (int, int)
		EVENT_200 Op = 0x19 Vars = (int, string, object)


0x0: Push("default")
0x1: @ SetBackground(Stack[-1])
0x2: Pop(1)
0x3: Push((bool) 1)
0x4: @ SetOwnerDraw(Stack[-1])
0x5: Pop(1)
0x6: @ ProcessEvents()
0x7: Pop(0)
0x8: Return(); Pop(0)

0x9: Push("text")
0xa: Push((int) 0)
0xb: Push((int) 0)
0xc: @ Blit(Stack[-3], Stack[-2], Stack[-1])
0xd: Pop(3)
0xe: Return(); Pop(0)

0xf: PushEmpty()
0x10: Push("pressed")
0x11: @ SetBackground(Stack[-1])
0x12: Pop(1)
0x13: Push((int) 0)
0x14: @ SendMessageToParent(Stack[-1])
0x15: Pop(1)
0x16: Return(); Pop(0)

0x17: PushEmpty()
0x18: Return(); Pop(0)

0x19: PushEmpty()
0x1a: Push((int) 0)
0x1b: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1c: IF (Stack[-1] == 0) GOTO 0x21; Pop(1)

0x1d: Push("default")
0x1e: @ SetBackground(Stack[-1])
0x1f: Pop(1)
0x20: GOTO 0x24

0x21: Push("pressed")
0x22: @ SetBackground(Stack[-1])
0x23: Pop(1)
0x24: Return(); Pop(0)

