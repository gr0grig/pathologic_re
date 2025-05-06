GlobalVarCount = 0

Strings:
	d8q03
	fail
	completed

Import:
	SetVariable (2 args)
	Trace (1 args)
	GetVariable (2 args)
	RemoveActor (1 args)
	GetGameTime (1 args)
	SetTimeEvent (2 args)
	Hold (0 args)
	self (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_26 Op = 0x9 Vars = (string)
		EVENT_9 Op = 0x4f Vars = (int, float)


0x0: Push("d8q03")
0x1: Push((int) 1)
0x2: @ SetVariable(Stack[-2], Stack[-1])
0x3: Pop(2)
0x4: PushEmpty(int)
0x5: Stack[-1] = (int) 8
0x6: Call 0x3c

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
0x1b: Push("d8q03")
0x1c: @ GetVariable(Stack[-1], Stack[-2])
0x1d: Pop(1)
0x1e: Push((int) 1000)
0x1f: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x20: IF (Stack[-1] == 0) GOTO 0x24; Pop(1)

0x21: PushEmpty()
0x22: Call 0x25

0x23: Pop(0)
0x24: Return(); Pop(2)

0x25: Push("d8q03")
0x26: Push((int) -1)
0x27: @ SetVariable(Stack[-2], Stack[-1])
0x28: Pop(2)
0x29: PushEmpty()
0x2a: Call 0x35

0x2b: Pop(0)
0x2c: Return(); Pop(0)

0x2d: Push("d8q03")
0x2e: Push((int) 1000)
0x2f: @ SetVariable(Stack[-2], Stack[-1])
0x30: Pop(2)
0x31: PushEmpty()
0x32: Call 0x35

0x33: Pop(0)
0x34: Return(); Pop(0)

0x35: EventDisable(26)
0x36: PushEmpty(object)
0x37: Call 0x54

0x38: Pop(0)
0x39: @ RemoveActor(Stack[-1])
0x3a: Pop(1)
0x3b: Return(); Pop(0)

0x3c: PushEmpty(float, float)
0x3d: @ GetGameTime(Stack[-1])
0x3e: Pop(0)
0x3f: Push((int) 24)
0x40: Pop(1); Push(Stack[-4] * Stack[-1]);
0x41: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x42: IF (Stack[-1] == 0) GOTO 0x47; Pop(1)

0x43: PushEmpty()
0x44: Call 0x35

0x45: Pop(0)
0x46: GOTO 0x4e

0x47: Push((int) 0)
0x48: Push((int) 24)
0x49: Pop(1); Push(Stack[-5] * Stack[-1]);
0x4a: @ SetTimeEvent(Stack[-2], Stack[-1])
0x4b: Pop(2)
0x4c: @ Hold()
0x4d: Pop(0)
0x4e: Return(); Pop(2)

0x4f: PushEmpty()
0x50: PushEmpty()
0x51: Call 0x1a

0x52: Pop(0)
0x53: Return(); Pop(0)

0x54: PushEmpty(object, object)
0x55: @ self(Stack[-1])
0x56: Pop(0)
0x57: Stack[-3] = Stack[-1]
0x58: Return(); Pop(2)

0x59: Stack[-1] = 0
