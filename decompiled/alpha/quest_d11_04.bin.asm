GlobalVarCount = 0

Strings:
	d11q04
	fail
	completed
	cleanup

Import:
	SetVariable (2 args)
	Trace (1 args)
	GetVariable (2 args)
	Trigger (2 args)
	RemoveActor (1 args)
	GetGameTime (1 args)
	SetTimeEvent (2 args)
	Hold (0 args)
	self (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 0
		EVENT_26 Op = 0x9 Vars = (string)
		EVENT_9 Op = 0x54 Vars = (int, float)


0x0: Push("d11q04")
0x1: Push((int) 1)
0x2: @ SetVariable(Stack[-2], Stack[-1])
0x3: Pop(2)
0x4: PushEmpty(int)
0x5: Stack[-1] = (int) 11
0x6: Call 0x41

0x7: Pop(1)
0x8: Return(); Pop(0)

0x9: PushEmpty()
0xa: @ Trace(Stack[-1])
0xb: Pop(0)
0xc: Push("fail")
0xd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xe: IF (Stack[-1] == 0) GOTO 0x13; Pop(1)

0xf: PushEmpty()
0x10: Call 0x25

0x11: Pop(0)
0x12: GOTO 0x19

0x13: Push("completed")
0x14: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x15: IF (Stack[-1] == 0) GOTO 0x19; Pop(1)

0x16: PushEmpty()
0x17: Call 0x2d

0x18: Pop(0)
0x19: Return(); Pop(0)

0x1a: PushEmpty(int, int)
0x1b: Push("d11q04")
0x1c: @ GetVariable(Stack[-1], Stack[-2])
0x1d: Pop(1)
0x1e: Push((int) 1000)
0x1f: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x20: IF (Stack[-1] == 0) GOTO 0x24; Pop(1)

0x21: PushEmpty()
0x22: Call 0x25

0x23: Pop(0)
0x24: Return(); Pop(2)

0x25: Push("d11q04")
0x26: Push((int) -1)
0x27: @ SetVariable(Stack[-2], Stack[-1])
0x28: Pop(2)
0x29: PushEmpty()
0x2a: Call 0x35

0x2b: Pop(0)
0x2c: Return(); Pop(0)

0x2d: Push("d11q04")
0x2e: Push((int) 1000)
0x2f: @ SetVariable(Stack[-2], Stack[-1])
0x30: Pop(2)
0x31: PushEmpty()
0x32: Call 0x35

0x33: Pop(0)
0x34: Return(); Pop(0)

0x35: EventDisable(26)
0x36: Push( Stack[0 + Tasks[-1].StackPointer] )
0x37: IF (Stack[-1] == 0) GOTO 0x3b; Pop(1)

0x38: Push("cleanup")
0x39: @ Trigger(Stack[-0], Stack[-1])
0x3a: Pop(1)
0x3b: PushEmpty(object)
0x3c: Call 0x59

0x3d: Pop(0)
0x3e: @ RemoveActor(Stack[-1])
0x3f: Pop(1)
0x40: Return(); Pop(0)

0x41: PushEmpty(float, float)
0x42: @ GetGameTime(Stack[-1])
0x43: Pop(0)
0x44: Push((int) 24)
0x45: Pop(1); Push(Stack[-4] * Stack[-1]);
0x46: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x47: IF (Stack[-1] == 0) GOTO 0x4c; Pop(1)

0x48: PushEmpty()
0x49: Call 0x35

0x4a: Pop(0)
0x4b: GOTO 0x53

0x4c: Push((int) 0)
0x4d: Push((int) 24)
0x4e: Pop(1); Push(Stack[-5] * Stack[-1]);
0x4f: @ SetTimeEvent(Stack[-2], Stack[-1])
0x50: Pop(2)
0x51: @ Hold()
0x52: Pop(0)
0x53: Return(); Pop(2)

0x54: PushEmpty()
0x55: PushEmpty()
0x56: Call 0x1a

0x57: Pop(0)
0x58: Return(); Pop(0)

0x59: PushEmpty(object, object)
0x5a: @ self(Stack[-1])
0x5b: Pop(0)
0x5c: Stack[-3] = Stack[-1]
0x5d: Return(); Pop(2)

0x5e: Stack[-1] = 0
