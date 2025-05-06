GlobalVarCount = 0

Strings:
	default
	disabled

Import:
	SetBackground (1 args)
	SetOwnerDraw (1 args)
	ProcessEvents (0 args)
	StretchBlit (5 args)
	SendMessageToParent (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (bool, bool) Params = 0
		EVENT_0 Op = 0xb Vars = ()
		EVENT_2 Op = 0x1b Vars = (int, int)
		EVENT_9 Op = 0x22 Vars = ()
		EVENT_10 Op = 0x27 Vars = ()
		EVENT_200 Op = 0x2c Vars = (int, string, object)


0x0: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x1: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x2: Push("default")
0x3: @ SetBackground(Stack[-1])
0x4: Pop(1)
0x5: Push((bool) 1)
0x6: @ SetOwnerDraw(Stack[-1])
0x7: Pop(1)
0x8: @ ProcessEvents()
0x9: Pop(0)
0xa: Return(); Pop(0)

0xb: PushEmpty(bool)
0xc: Stack[-1] = (bool) 1
0xd: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0xe: IF (Stack[-1] == 0) GOTO 0x12; Pop(1)

0xf: Push( Stack[1 + Tasks[-1].StackPointer] )
0x10: IF (Stack[-1] == 0) GOTO 0x12; Pop(1)

0x11: Stack[-1] = (bool) 0
0x12: IF (Stack[-1] == 0) GOTO 0x1a; Pop(1)

0x13: Push("disabled")
0x14: Push((int) 0)
0x15: Push((int) 0)
0x16: Push((int) 250)
0x17: Push((int) 297)
0x18: @ StretchBlit(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x19: Pop(5)
0x1a: Return(); Pop(0)

0x1b: PushEmpty()
0x1c: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == 0)
0x1d: IF (Stack[-1] == 0) GOTO 0x21; Pop(1)

0x1e: Push((int) 0)
0x1f: @ SendMessageToParent(Stack[-1])
0x20: Pop(1)
0x21: Return(); Pop(0)

0x22: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x23: Push((int) 1)
0x24: @ SendMessageToParent(Stack[-1])
0x25: Pop(1)
0x26: Return(); Pop(0)

0x27: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x28: Push((int) 2)
0x29: @ SendMessageToParent(Stack[-1])
0x2a: Pop(1)
0x2b: Return(); Pop(0)

0x2c: PushEmpty()
0x2d: Push((int) 131072)
0x2e: Pop(1); Push((bool) Stack[-1] == Stack[-4])
0x2f: IF (Stack[-1] == 0) GOTO 0x31; Pop(1)

0x30: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x31: Return(); Pop(0)

