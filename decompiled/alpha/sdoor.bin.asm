GlobalVarCount = 0

Strings:
	locked

Import:
	Hold (0 args)
	ClassifyActor (2 args)
	GetOpenSide (1 args)
	Open (1 args)
	Close (0 args)
	GetProperty (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_0 Op = 0x4 Vars = (object)
		EVENT_38 Op = 0x2f Vars = (object)


0x0: @ Hold()
0x1: Pop(0)
0x2: GOTO 0x0

0x3: Return(); Pop(0)

0x4: PushEmpty(bool, int, bool, int)
0x5: PushEmpty(bool)
0x6: Stack[-1] = (bool) 1
0x7: Pop(0); Push((bool) Stack[-6] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0x10; Pop(1)

0x9: PushEmpty(bool, object)
0xa: Stack[-1] = Stack[-8]
0xb: Call 0x43

0xc: Pop(1)
0xd: Pop(1); Push((bool) Stack[-1] == 0)
0xe: IF (Stack[-1] == 0) GOTO 0x10; Pop(1)

0xf: Stack[-1] = (bool) 0
0x10: IF (Stack[-1] == 0) GOTO 0x12; Pop(1)

0x11: Return(); Pop(4)

0x12: @ ClassifyActor(Stack[-2], Stack[-5])
0x13: Pop(0)
0x14: Stack[-2] = !Stack[-2]; Pop(0);
0x15: @ GetOpenSide(Stack[-1])
0x16: Pop(0)
0x17: Pop(0); Push((bool) Stack[-1] == 0)
0x18: IF (Stack[-1] == 0) GOTO 0x1c; Pop(1)

0x19: @ Open(Stack[-2])
0x1a: Pop(0)
0x1b: GOTO 0x2e

0x1c: Push((int) 0)
0x1d: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x1e: IF (Stack[-1] == 0) GOTO 0x27; Pop(1)

0x1f: Push(Stack[-2])
0x20: IF (Stack[-1] == 0) GOTO 0x24; Pop(1)

0x21: @ Close()
0x22: Pop(0)
0x23: GOTO 0x26

0x24: @ Open(Stack[-2])
0x25: Pop(0)
0x26: GOTO 0x2e

0x27: Push(Stack[-2])
0x28: IF (Stack[-1] == 0) GOTO 0x2c; Pop(1)

0x29: @ Open(Stack[-2])
0x2a: Pop(0)
0x2b: GOTO 0x2e

0x2c: @ Close()
0x2d: Pop(0)
0x2e: Return(); Pop(4)

0x2f: PushEmpty(bool, bool)
0x30: PushEmpty(bool)
0x31: Stack[-1] = (bool) 1
0x32: Pop(0); Push((bool) Stack[-4] == 0)
0x33: IF (Stack[-1] == 0) GOTO 0x3b; Pop(1)

0x34: PushEmpty(bool, object)
0x35: Stack[-1] = Stack[-6]
0x36: Call 0x43

0x37: Pop(1)
0x38: Pop(1); Push((bool) Stack[-1] == 0)
0x39: IF (Stack[-1] == 0) GOTO 0x3b; Pop(1)

0x3a: Stack[-1] = (bool) 0
0x3b: IF (Stack[-1] == 0) GOTO 0x3d; Pop(1)

0x3c: Return(); Pop(2)

0x3d: @ ClassifyActor(Stack[-1], Stack[-3])
0x3e: Pop(0)
0x3f: Pop(0); Push((bool) Stack[-1] == 0)
0x40: @ Open(Stack[-1])
0x41: Pop(1)
0x42: Return(); Pop(2)

0x43: PushEmpty()
0x44: PushEmpty(bool)
0x45: Call 0x49

0x46: Pop(0)
0x47: Stack[-3] = !Stack[-1]; Pop(1);
0x48: Return(); Pop(0)

0x49: PushEmpty(int, int)
0x4a: Push("locked")
0x4b: @ GetProperty(Stack[-1], Stack[-2])
0x4c: Pop(1)
0x4d: Push((int) 0)
0x4e: Stack[-4] = Stack[-2] != Stack[-1]; Pop(1);
0x4f: Return(); Pop(2)

