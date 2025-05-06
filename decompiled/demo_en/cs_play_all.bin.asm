GlobalVarCount = 0

Strings:
	remove

Import:
	PlayAnimation (0 args)
	Hold (0 args)
	RemoveActor (1 args)
	self (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (bool) Params = 0
		EVENT_26 Op = 0x5 Vars = (string)
		EVENT_6 Op = 0xb Vars = ()


0x0: @ PlayAnimation()
0x1: Pop(0)
0x2: @ Hold()
0x3: Pop(0)
0x4: Return(); Pop(0)

0x5: PushEmpty()
0x6: Push("remove")
0x7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x8: IF (Stack[-1] == 0) GOTO 0xa; Pop(1)

0x9: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0xa: Return(); Pop(0)

0xb: Push( Stack[0 + Tasks[-1].StackPointer] )
0xc: IF (Stack[-1] == 0) GOTO 0x12; Pop(1)

0xd: PushEmpty(object)
0xe: Call2 0x13

0xf: Pop(0)
0x10: @ RemoveActor(Stack[-1])
0x11: Pop(1)
0x12: Return(); Pop(0)

0x13: PushEmpty(object, object)
0x14: @ self(Stack[-1])
0x15: Pop(0)
0x16: Stack[-3] = Stack[-1]
0x17: Return(); Pop(2)

0x18: Stack[-1] = 0
