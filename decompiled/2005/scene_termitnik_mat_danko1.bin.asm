GlobalVarCount = 0

Strings:

Import:
	Hold (0 args)
	GetGameTime (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (bool) Params = 0
		EVENT_5 Op = 0x5 Vars = ()


0x0: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x1: @ Hold()
0x2: Pop(0)
0x3: GOTO 0x1

0x4: Return(); Pop(0)

0x5: PushEmpty(float, float)
0x6: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x7: IF (Stack[-1] == 0) GOTO 0xe; Pop(1)

0x8: @ GetGameTime(Stack[-1])
0x9: Pop(0)
0xa: Push((int) 240)
0xb: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0xc: IF (Stack[-1] == 0) GOTO 0xe; Pop(1)

0xd: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0xe: Return(); Pop(2)

