GlobalVarCount = 0

Strings:
	default

Import:
	GetWindowSize (2 args)
	SetOwnerDraw (1 args)
	ProcessEvents (0 args)
	PrintInWidth (9 args)
	GetStringByID (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (bool, string, int, int) Params = 0
		EVENT_0 Op = 0x9 Vars = ()
		EVENT_200 Op = 0x15 Vars = (int, string, object)


0x0: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x1: @ GetWindowSize(Stack[-2], Stack[-3])
0x2: Pop(0)
0x3: Push((bool) 1)
0x4: @ SetOwnerDraw(Stack[-1])
0x5: Pop(1)
0x6: @ ProcessEvents()
0x7: Pop(0)
0x8: Return(); Pop(0)

0x9: PushEmpty(int, int)
0xa: Push( Stack[0 + Tasks[-1].StackPointer] )
0xb: IF (Stack[-1] == 0) GOTO 0x14; Pop(1)

0xc: Push("default")
0xd: Push((int) 0)
0xe: Push((int) 0)
0xf: Push((float)1.0)
0x10: Push((float)1.0)
0x11: Push((float)1.0)
0x12: @ PrintInWidth(Stack[-7], Stack[-6], Stack[-5], Stack[-4], Stack[-2], Stack[-1], Stack[-3], Stack[-2], Stack[-1])
0x13: Pop(6)
0x14: Return(); Pop(2)

0x15: PushEmpty()
0x16: Push((int) -1)
0x17: Pop(1); Push((bool) Stack[-4] != Stack[-1])
0x18: IF (Stack[-1] == 0) GOTO 0x1d; Pop(1)

0x19: @ GetStringByID(Stack[-1], Stack[-3])
0x1a: Pop(0)
0x1b: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x1c: GOTO 0x1e

0x1d: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x1e: Return(); Pop(0)

