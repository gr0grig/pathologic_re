GlobalVarCount = 0

Strings:
	default
	checked

Import:
	SetBackground (1 args)
	ProcessEvents (0 args)
	SendMessageToParent (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (bool) Params = 0
		EVENT_2 Op = 0xf Vars = (int, int)
		EVENT_3 Op = 0x18 Vars = (int, int)
		EVENT_200 Op = 0x1a Vars = (int, string, object)


0x0: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x1: Push("default")
0x2: @ SetBackground(Stack[-1])
0x3: Pop(1)
0x4: @ ProcessEvents()
0x5: Pop(0)
0x6: Return(); Pop(0)

0x7: Push( Stack[0 + Tasks[-1].StackPointer] )
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Push((int) 1)
0xa: GOTO 0xc

0xb: Push((int) 0)
0xc: @ SendMessageToParent(Stack[-1])
0xd: Pop(1)
0xe: Return(); Pop(0)

0xf: PushEmpty()
0x10: Stack[0 + Tasks[-1].StackPointer] = !Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x11: PushEmpty()
0x12: Call2 0x21

0x13: Pop(0)
0x14: PushEmpty()
0x15: Call2 0x7

0x16: Pop(0)
0x17: Return(); Pop(0)

0x18: PushEmpty()
0x19: Return(); Pop(0)

0x1a: PushEmpty()
0x1b: Push((int) 0)
0x1c: Stack[0 + Tasks[-1].StackPointer] = Stack[-4] != Stack[-1]; Pop(1);
0x1d: PushEmpty()
0x1e: Call2 0x21

0x1f: Pop(0)
0x20: Return(); Pop(0)

0x21: Push( Stack[0 + Tasks[-1].StackPointer] )
0x22: IF (Stack[-1] == 0) GOTO 0x27; Pop(1)

0x23: Push("checked")
0x24: @ SetBackground(Stack[-1])
0x25: Pop(1)
0x26: GOTO 0x2a

0x27: Push("default")
0x28: @ SetBackground(Stack[-1])
0x29: Pop(1)
0x2a: Return(); Pop(0)

