GlobalVarCount = 0

Strings:
	default

Import:
	SetOwnerDraw (1 args)
	ProcessEvents (0 args)
	Blit (3 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (bool) Params = 0
		EVENT_0 Op = 0x7 Vars = ()
		EVENT_200 Op = 0xf Vars = (int, string, object)


0x0: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x1: Push((bool) 1)
0x2: @ SetOwnerDraw(Stack[-1])
0x3: Pop(1)
0x4: @ ProcessEvents()
0x5: Pop(0)
0x6: Return(); Pop(0)

0x7: Push( Stack[0 + Tasks[-1].StackPointer] )
0x8: IF (Stack[-1] == 0) GOTO 0xe; Pop(1)

0x9: Push("default")
0xa: Push((int) 0)
0xb: Push((int) 0)
0xc: @ Blit(Stack[-3], Stack[-2], Stack[-1])
0xd: Pop(3)
0xe: Return(); Pop(0)

0xf: PushEmpty()
0x10: Push((int) 0)
0x11: Stack[0 + Tasks[-1].StackPointer] = Stack[-4] != Stack[-1]; Pop(1);
0x12: Return(); Pop(0)

