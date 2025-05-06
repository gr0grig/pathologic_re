GlobalVarCount = 0

Strings:
	remove

Import:
	PlayAnimation (0 args)
	lshPlayAnimation (0 args)
	Hold (0 args)
	RemoveActor (1 args)
	self (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (bool) Params = 0
		EVENT_26 Op = 0x7 Vars = (string)
		EVENT_6 Op = 0xd Vars = ()


0x0: @ PlayAnimation()
0x1: Pop(0)
0x2: @ lshPlayAnimation()
0x3: Pop(0)
0x4: @ Hold()
0x5: Pop(0)
0x6: Return(); Pop(0)

0x7: PushEmpty()
0x8: Push("remove")
0x9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa: IF (Stack[-1] == 0) GOTO 0xc; Pop(1)

0xb: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0xc: Return(); Pop(0)

0xd: Push( Stack[0 + Tasks[-1].StackPointer] )
0xe: IF (Stack[-1] == 0) GOTO 0x14; Pop(1)

0xf: PushEmpty(object)
0x10: Call2 0x15

0x11: Pop(0)
0x12: @ RemoveActor(Stack[-1])
0x13: Pop(1)
0x14: Return(); Pop(0)

0x15: PushEmpty(object, object)
0x16: @ self(Stack[-1])
0x17: Pop(0)
0x18: Stack[-3] = Stack[-1]
0x19: Return(); Pop(2)

0x1a: Stack[-1] = 0
