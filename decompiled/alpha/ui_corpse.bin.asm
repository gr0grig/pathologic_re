GlobalVarCount = 0

Strings:
	scalpel
	has slot
	squirt

Import:
	SetOwnerDraw (1 args)
	ProcessEvents (0 args)
	UITrace (1 args)
	GetContainerItemCount (1 args)
	GetContainerSize (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_200 Op = 0x9 Vars = (int, string, object)


0x0: Push((bool) 0)
0x1: @ SetOwnerDraw(Stack[-1])
0x2: Pop(1)
0x3: PushEmpty()
0x4: Call 0x2b

0x5: Pop(0)
0x6: @ ProcessEvents()
0x7: Pop(0)
0x8: Return(); Pop(0)

0x9: PushEmpty()
0xa: Push("scalpel")
0xb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc: IF (Stack[-1] == 0) GOTO 0x15; Pop(1)

0xd: PushEmpty(bool)
0xe: Call 0x20

0xf: Pop(0)
0x10: IF (Stack[-1] == 0) GOTO 0x14; Pop(1)

0x11: Push("has slot")
0x12: @ UITrace(Stack[-1])
0x13: Pop(1)
0x14: GOTO 0x1f

0x15: Push("squirt")
0x16: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x17: IF (Stack[-1] == 0) GOTO 0x1f; Pop(1)

0x18: PushEmpty(bool)
0x19: Call 0x20

0x1a: Pop(0)
0x1b: IF (Stack[-1] == 0) GOTO 0x1f; Pop(1)

0x1c: Push("has slot")
0x1d: @ UITrace(Stack[-1])
0x1e: Pop(1)
0x1f: Return(); Pop(0)

0x20: PushEmpty(int, int, int, int)
0x21: @ GetContainerItemCount(Stack[-2])
0x22: Pop(0)
0x23: @ GetContainerSize(Stack[-1])
0x24: Pop(0)
0x25: Pop(0); Push((bool) Stack[-2] >= Stack[-1])
0x26: IF (Stack[-1] == 0) GOTO 0x29; Pop(1)

0x27: Stack[-5] = (bool) 0
0x28: Return(); Pop(4)

0x29: Stack[-5] = (bool) 1
0x2a: Return(); Pop(4)

0x2b: Return(); Pop(0)

