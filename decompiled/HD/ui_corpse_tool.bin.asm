GlobalVarCount = 0

Strings:
	disabled
	pressed
	default

Import:
	SetBackground (1 args)
	SetOwnerDraw (1 args)
	ProcessEvents (0 args)
	SendMessageToParent (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (bool) Params = 0
		EVENT_2 Op = 0xa Vars = (int, int)
		EVENT_3 Op = 0x14 Vars = (int, int)
		EVENT_10 Op = 0x1f Vars = ()
		EVENT_200 Op = 0x29 Vars = (int, string, object)


0x0: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x1: Push("disabled")
0x2: @ SetBackground(Stack[-1])
0x3: Pop(1)
0x4: Push((bool) 0)
0x5: @ SetOwnerDraw(Stack[-1])
0x6: Pop(1)
0x7: @ ProcessEvents()
0x8: Pop(0)
0x9: Return(); Pop(0)

0xa: PushEmpty()
0xb: Push( Stack[0 + Tasks[-1].StackPointer] )
0xc: IF (Stack[-1] == 0) GOTO 0x13; Pop(1)

0xd: Push((int) 0)
0xe: @ SendMessageToParent(Stack[-1])
0xf: Pop(1)
0x10: Push("pressed")
0x11: @ SetBackground(Stack[-1])
0x12: Pop(1)
0x13: Return(); Pop(0)

0x14: PushEmpty()
0x15: Push( Stack[0 + Tasks[-1].StackPointer] )
0x16: IF (Stack[-1] == 0) GOTO 0x1b; Pop(1)

0x17: Push("default")
0x18: @ SetBackground(Stack[-1])
0x19: Pop(1)
0x1a: GOTO 0x1e

0x1b: Push("disabled")
0x1c: @ SetBackground(Stack[-1])
0x1d: Pop(1)
0x1e: Return(); Pop(0)

0x1f: Push( Stack[0 + Tasks[-1].StackPointer] )
0x20: IF (Stack[-1] == 0) GOTO 0x25; Pop(1)

0x21: Push("default")
0x22: @ SetBackground(Stack[-1])
0x23: Pop(1)
0x24: GOTO 0x28

0x25: Push("disabled")
0x26: @ SetBackground(Stack[-1])
0x27: Pop(1)
0x28: Return(); Pop(0)

0x29: PushEmpty()
0x2a: Push((int) 0)
0x2b: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x2c: IF (Stack[-1] == 0) GOTO 0x32; Pop(1)

0x2d: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x2e: Push("default")
0x2f: @ SetBackground(Stack[-1])
0x30: Pop(1)
0x31: GOTO 0x36

0x32: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x33: Push("disabled")
0x34: @ SetBackground(Stack[-1])
0x35: Pop(1)
0x36: Return(); Pop(0)

