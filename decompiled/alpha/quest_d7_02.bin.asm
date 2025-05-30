GlobalVarCount = 0

Strings:
	d7q02
	completed
	fail
	place_corpse
	d7q02_corpse
	d7q02_corpse.xml
	cleanup

Import:
	SetVariable (2 args)
	Trace (1 args)
	GetMainOutdoorScene (1 args)
	AddActor (6 args)
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
		EVENT_9 Op = 0x6f Vars = (int, float)


0x0: Push("d7q02")
0x1: Push((int) 1)
0x2: @ SetVariable(Stack[-2], Stack[-1])
0x3: Pop(2)
0x4: PushEmpty(int)
0x5: Stack[-1] = (int) 7
0x6: Call 0x5c

0x7: Pop(1)
0x8: Return(); Pop(0)

0x9: PushEmpty(object, object)
0xa: @ Trace(Stack[-3])
0xb: Pop(0)
0xc: Push("completed")
0xd: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xe: IF (Stack[-1] == 0) GOTO 0x13; Pop(1)

0xf: PushEmpty()
0x10: Call 0x3a

0x11: Pop(0)
0x12: GOTO 0x26

0x13: Push("fail")
0x14: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x15: IF (Stack[-1] == 0) GOTO 0x1a; Pop(1)

0x16: PushEmpty()
0x17: Call 0x32

0x18: Pop(0)
0x19: GOTO 0x26

0x1a: Push("place_corpse")
0x1b: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1c: IF (Stack[-1] == 0) GOTO 0x26; Pop(1)

0x1d: @ GetMainOutdoorScene(Stack[-1])
0x1e: Pop(0)
0x1f: Push("d7q02_corpse")
0x20: Push(CVector(0.0, 0.0, 0.0))
0x21: Push(CVector(0.0, 0.0, 1.0))
0x22: Push("d7q02_corpse.xml")
0x23: @ AddActor(Stack[-0], Stack[-4], Stack[-5], Stack[-3], Stack[-2], Stack[-1])
0x24: Pop(4)
0x25: Stack[-1] = 0
0x26: Return(); Pop(2)

0x27: PushEmpty(int, int)
0x28: Push("d7q02")
0x29: @ GetVariable(Stack[-1], Stack[-2])
0x2a: Pop(1)
0x2b: Push((int) 1000)
0x2c: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x2d: IF (Stack[-1] == 0) GOTO 0x31; Pop(1)

0x2e: PushEmpty()
0x2f: Call 0x32

0x30: Pop(0)
0x31: Return(); Pop(2)

0x32: Push("d7q02")
0x33: Push((int) -1)
0x34: @ SetVariable(Stack[-2], Stack[-1])
0x35: Pop(2)
0x36: PushEmpty()
0x37: Call 0x50

0x38: Pop(0)
0x39: Return(); Pop(0)

0x3a: PushEmpty(int, int)
0x3b: Push("d7q02")
0x3c: @ GetVariable(Stack[-1], Stack[-2])
0x3d: Pop(1)
0x3e: PushEmpty(bool)
0x3f: Stack[-1] = (bool) 0
0x40: Push((int) 1000)
0x41: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x42: IF (Stack[-1] == 0) GOTO 0x47; Pop(1)

0x43: Push((int) -1)
0x44: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x45: IF (Stack[-1] == 0) GOTO 0x47; Pop(1)

0x46: Stack[-1] = (bool) 1
0x47: IF (Stack[-1] == 0) GOTO 0x4f; Pop(1)

0x48: Push("d7q02")
0x49: Push((int) 1000)
0x4a: @ SetVariable(Stack[-2], Stack[-1])
0x4b: Pop(2)
0x4c: PushEmpty()
0x4d: Call 0x50

0x4e: Pop(0)
0x4f: Return(); Pop(2)

0x50: EventDisable(26)
0x51: Push( Stack[0 + Tasks[-1].StackPointer] )
0x52: IF (Stack[-1] == 0) GOTO 0x56; Pop(1)

0x53: Push("cleanup")
0x54: @ Trigger(Stack[-0], Stack[-1])
0x55: Pop(1)
0x56: PushEmpty(object)
0x57: Call 0x74

0x58: Pop(0)
0x59: @ RemoveActor(Stack[-1])
0x5a: Pop(1)
0x5b: Return(); Pop(0)

0x5c: PushEmpty(float, float)
0x5d: @ GetGameTime(Stack[-1])
0x5e: Pop(0)
0x5f: Push((int) 24)
0x60: Pop(1); Push(Stack[-4] * Stack[-1]);
0x61: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x62: IF (Stack[-1] == 0) GOTO 0x67; Pop(1)

0x63: PushEmpty()
0x64: Call 0x50

0x65: Pop(0)
0x66: GOTO 0x6e

0x67: Push((int) 0)
0x68: Push((int) 24)
0x69: Pop(1); Push(Stack[-5] * Stack[-1]);
0x6a: @ SetTimeEvent(Stack[-2], Stack[-1])
0x6b: Pop(2)
0x6c: @ Hold()
0x6d: Pop(0)
0x6e: Return(); Pop(2)

0x6f: PushEmpty()
0x70: PushEmpty()
0x71: Call 0x27

0x72: Pop(0)
0x73: Return(); Pop(0)

0x74: PushEmpty(object, object)
0x75: @ self(Stack[-1])
0x76: Pop(0)
0x77: Stack[-3] = Stack[-1]
0x78: Return(); Pop(2)

0x79: Stack[-1] = 0
