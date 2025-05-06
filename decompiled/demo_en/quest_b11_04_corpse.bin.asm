GlobalVarCount = 0

Strings:
	disease
	corpse
	Enable
	cleanup
	restore

Import:
	SetProperty (2 args)
	FindGeometry (2 args)
	Hold (0 args)
	IsLoaded (1 args)
	RemoveActor (1 args)
	self (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (bool) Params = 0
		EVENT_16 Op = 0x12 Vars = (object, string)
		EVENT_26 Op = 0x14 Vars = (string)
		EVENT_6 Op = 0x28 Vars = ()


0x0: PushEmpty(object, object)
0x1: Push("disease")
0x2: Push((int) 1)
0x3: @ SetProperty(Stack[-2], Stack[-1])
0x4: Pop(2)
0x5: Push("corpse")
0x6: @ FindGeometry(Stack[-1], Stack[-2])
0x7: Pop(1)
0x8: Push((bool) 1)
0x9: @@ Enable(Stack[-1])
0xa: Pop(1)
0xb: Push((bool) 1)
0xc: IF (Stack[-1] == 0) GOTO 0x10; Pop(1)

0xd: @ Hold()
0xe: Pop(0)
0xf: GOTO 0xb

0x10: Return(); Pop(2)

0x11: Stack[-1] = 0
0x12: PushEmpty()
0x13: Return(); Pop(0)

0x14: PushEmpty(bool, bool)
0x15: Push("cleanup")
0x16: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x17: IF (Stack[-1] == 0) GOTO 0x23; Pop(1)

0x18: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x19: @ IsLoaded(Stack[-1])
0x1a: Pop(0)
0x1b: Pop(0); Push((bool) Stack[-1] == 0)
0x1c: IF (Stack[-1] == 0) GOTO 0x22; Pop(1)

0x1d: PushEmpty(object)
0x1e: Call2 0x30

0x1f: Pop(0)
0x20: @ RemoveActor(Stack[-1])
0x21: Pop(1)
0x22: GOTO 0x27

0x23: Push("restore")
0x24: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x25: IF (Stack[-1] == 0) GOTO 0x27; Pop(1)

0x26: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x27: Return(); Pop(2)

0x28: Push( Stack[0 + Tasks[-1].StackPointer] )
0x29: IF (Stack[-1] == 0) GOTO 0x2f; Pop(1)

0x2a: PushEmpty(object)
0x2b: Call2 0x30

0x2c: Pop(0)
0x2d: @ RemoveActor(Stack[-1])
0x2e: Pop(1)
0x2f: Return(); Pop(0)

0x30: PushEmpty(object, object)
0x31: @ self(Stack[-1])
0x32: Pop(0)
0x33: Stack[-3] = Stack[-1]
0x34: Return(); Pop(2)

0x35: Stack[-1] = 0
