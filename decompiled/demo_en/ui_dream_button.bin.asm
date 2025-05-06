GlobalVarCount = 0

Strings:
	default
	pressed
	start
	stop

Import:
	SetBackground (1 args)
	SetOwnerDraw (1 args)
	ProcessEvents (0 args)
	SendMessageToParent (1 args)
	Blit (3 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (bool) Params = 0
		EVENT_2 Op = 0xa Vars = (int, int)
		EVENT_3 Op = 0xf Vars = (int, int)
		EVENT_10 Op = 0x18 Vars = ()
		EVENT_0 Op = 0x1c Vars = ()


0x0: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x1: Push("default")
0x2: @ SetBackground(Stack[-1])
0x3: Pop(1)
0x4: Push((bool) 1)
0x5: @ SetOwnerDraw(Stack[-1])
0x6: Pop(1)
0x7: @ ProcessEvents()
0x8: Pop(0)
0x9: Return(); Pop(0)

0xa: PushEmpty()
0xb: Push("pressed")
0xc: @ SetBackground(Stack[-1])
0xd: Pop(1)
0xe: Return(); Pop(0)

0xf: PushEmpty()
0x10: Push("default")
0x11: @ SetBackground(Stack[-1])
0x12: Pop(1)
0x13: Push((int) 0)
0x14: @ SendMessageToParent(Stack[-1])
0x15: Pop(1)
0x16: Stack[0 + Tasks[-1].StackPointer] = !Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x17: Return(); Pop(0)

0x18: Push("default")
0x19: @ SetBackground(Stack[-1])
0x1a: Pop(1)
0x1b: Return(); Pop(0)

0x1c: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x1d: IF (Stack[-1] == 0) GOTO 0x24; Pop(1)

0x1e: Push("start")
0x1f: Push((int) 0)
0x20: Push((int) 0)
0x21: @ Blit(Stack[-3], Stack[-2], Stack[-1])
0x22: Pop(3)
0x23: GOTO 0x29

0x24: Push("stop")
0x25: Push((int) 0)
0x26: Push((int) 0)
0x27: @ Blit(Stack[-3], Stack[-2], Stack[-1])
0x28: Pop(3)
0x29: Return(); Pop(0)

