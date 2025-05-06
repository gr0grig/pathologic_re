GlobalVarCount = 0

Strings:
	all
	prisoner
	cleanup

Import:
	Hold (0 args)
	PlayAnimation (2 args)
	WaitForAnimEnd (0 args)
	IsLoaded (1 args)
	RemoveActor (1 args)
	StopGroup0 (0 args)
	sync (0 args)
	self (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (bool) Params = 0
		EVENT_26 Op = 0x10 Vars = (string)
		EVENT_5 Op = 0x27 Vars = ()
		EVENT_6 Op = 0x2c Vars = ()


0x0: PushEmpty(bool)
0x1: Call2 0x3e

0x2: Pop(0)
0x3: Pop(1); Push((bool) Stack[-1] == 0)
0x4: IF (Stack[-1] == 0) GOTO 0x8; Pop(1)

0x5: @ Hold()
0x6: Pop(0)
0x7: GOTO 0x0

0x8: Push("all")
0x9: Push("prisoner")
0xa: @ PlayAnimation(Stack[-2], Stack[-1])
0xb: Pop(2)
0xc: @ WaitForAnimEnd()
0xd: Pop(0)
0xe: GOTO 0x0

0xf: Return(); Pop(0)

0x10: PushEmpty(bool, bool)
0x11: Push("cleanup")
0x12: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x13: IF (Stack[-1] == 0) GOTO 0x26; Pop(1)

0x14: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x15: @ IsLoaded(Stack[-1])
0x16: Pop(0)
0x17: PushEmpty(bool)
0x18: Stack[-1] = (bool) 0
0x19: Pop(0); Push((bool) Stack[-2] == 0)
0x1a: IF (Stack[-1] == 0) GOTO 0x20; Pop(1)

0x1b: PushEmpty(bool)
0x1c: Call2 0x3c

0x1d: Pop(0)
0x1e: IF (Stack[-1] == 0) GOTO 0x20; Pop(1)

0x1f: Stack[-1] = (bool) 1
0x20: IF (Stack[-1] == 0) GOTO 0x26; Pop(1)

0x21: PushEmpty(object)
0x22: Call2 0x43

0x23: Pop(0)
0x24: @ RemoveActor(Stack[-1])
0x25: Pop(1)
0x26: Return(); Pop(2)

0x27: @ StopGroup0()
0x28: Pop(0)
0x29: @ sync()
0x2a: Pop(0)
0x2b: Return(); Pop(0)

0x2c: PushEmpty(bool)
0x2d: Stack[-1] = (bool) 0
0x2e: Push( Stack[0 + Tasks[-1].StackPointer] )
0x2f: IF (Stack[-1] == 0) GOTO 0x35; Pop(1)

0x30: PushEmpty(bool)
0x31: Call2 0x3c

0x32: Pop(0)
0x33: IF (Stack[-1] == 0) GOTO 0x35; Pop(1)

0x34: Stack[-1] = (bool) 1
0x35: IF (Stack[-1] == 0) GOTO 0x3b; Pop(1)

0x36: PushEmpty(object)
0x37: Call2 0x43

0x38: Pop(0)
0x39: @ RemoveActor(Stack[-1])
0x3a: Pop(1)
0x3b: Return(); Pop(0)

0x3c: Stack[-1] = (bool) 1
0x3d: Return(); Pop(0)

0x3e: PushEmpty(bool, bool)
0x3f: @ IsLoaded(Stack[-1])
0x40: Pop(0)
0x41: Stack[-3] = Stack[-1]
0x42: Return(); Pop(2)

0x43: PushEmpty(object, object)
0x44: @ self(Stack[-1])
0x45: Pop(0)
0x46: Stack[-3] = Stack[-1]
0x47: Return(); Pop(2)

0x48: Stack[-1] = 0
