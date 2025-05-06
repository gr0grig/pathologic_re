GlobalVarCount = 0

Strings:
	Unloaded dynamic light

Import:
	IsLoaded (1 args)
	sync (0 args)
	Trace (1 args)
	RemoveActor (1 args)
	self (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0


0x0: PushEmpty(bool, bool)
0x1: @ IsLoaded(Stack[-1])
0x2: Pop(0)
0x3: Push(Stack[-1])
0x4: IF (Stack[-1] == 0) GOTO 0xa; Pop(1)

0x5: @ sync()
0x6: Pop(0)
0x7: @ sync()
0x8: Pop(0)
0x9: GOTO 0xd

0xa: Push("Unloaded dynamic light")
0xb: @ Trace(Stack[-1])
0xc: Pop(1)
0xd: PushEmpty(object)
0xe: Call2 0x13

0xf: Pop(0)
0x10: @ RemoveActor(Stack[-1])
0x11: Pop(1)
0x12: Return(); Pop(2)

0x13: PushEmpty(object, object)
0x14: @ self(Stack[-1])
0x15: Pop(0)
0x16: Stack[-3] = Stack[-1]
0x17: Return(); Pop(2)

0x18: Stack[-1] = 0
