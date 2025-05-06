GlobalVarCount = 0

Strings:
	remove

Import:
	PlayAnimation (0 args)
	lshPlayAnimation (0 args)
	lshWaitForAnimEnd (0 args)
	Hold (0 args)
	RemoveActor (1 args)
	self (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (bool) Params = 0
		EVENT_26 Op = 0xc Vars = (string)
		EVENT_6 Op = 0x12 Vars = ()


0x0: @ PlayAnimation()
0x1: Pop(0)
0x2: Push((bool) 1)
0x3: IF (Stack[-1] == 0) GOTO 0x9; Pop(1)

0x4: @ lshPlayAnimation()
0x5: Pop(0)
0x6: @ lshWaitForAnimEnd()
0x7: Pop(0)
0x8: GOTO 0x2

0x9: @ Hold()
0xa: Pop(0)
0xb: Return(); Pop(0)

0xc: PushEmpty()
0xd: Push("remove")
0xe: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf: IF (Stack[-1] == 0) GOTO 0x11; Pop(1)

0x10: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x11: Return(); Pop(0)

0x12: Push( Stack[0 + Tasks[-1].StackPointer] )
0x13: IF (Stack[-1] == 0) GOTO 0x19; Pop(1)

0x14: PushEmpty(object)
0x15: Call2 0x1a

0x16: Pop(0)
0x17: @ RemoveActor(Stack[-1])
0x18: Pop(1)
0x19: Return(); Pop(0)

0x1a: PushEmpty(object, object)
0x1b: @ self(Stack[-1])
0x1c: Pop(0)
0x1d: Stack[-3] = Stack[-1]
0x1e: Return(); Pop(2)

0x1f: Stack[-1] = 0
