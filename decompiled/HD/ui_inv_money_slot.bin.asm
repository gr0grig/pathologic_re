GlobalVarCount = 0

Strings:
	default
	money
	selected

Import:
	SetBackground (1 args)
	SetOwnerDraw (1 args)
	ProcessEvents (0 args)
	Blit (3 args)
	Print (4 args)
	SendMessageToParent (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (int) Params = 0
		EVENT_0 Op = 0xa Vars = ()
		EVENT_2 Op = 0x15 Vars = (int, int)
		EVENT_6 Op = 0x1d Vars = (int, int)
		EVENT_3 Op = 0x22 Vars = (int, int)
		EVENT_200 Op = 0x24 Vars = (int, string, object)


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

0xa: Push("money")
0xb: Push((int) 1)
0xc: Push((int) 1)
0xd: @ Blit(Stack[-3], Stack[-2], Stack[-1])
0xe: Pop(3)
0xf: Push("default")
0x10: Push((int) 2)
0x11: Push((int) 35)
0x12: @ Print(Stack[-3], Stack[-2], Stack[-1], Stack[-0])
0x13: Pop(3)
0x14: Return(); Pop(0)

0x15: PushEmpty()
0x16: Push("selected")
0x17: @ SetBackground(Stack[-1])
0x18: Pop(1)
0x19: Push((int) 0)
0x1a: @ SendMessageToParent(Stack[-1])
0x1b: Pop(1)
0x1c: Return(); Pop(0)

0x1d: PushEmpty()
0x1e: Push((int) 1)
0x1f: @ SendMessageToParent(Stack[-1])
0x20: Pop(1)
0x21: Return(); Pop(0)

0x22: PushEmpty()
0x23: Return(); Pop(0)

0x24: PushEmpty()
0x25: Stack[0 + Tasks[-1].StackPointer] = Stack[-3]
0x26: Return(); Pop(0)

