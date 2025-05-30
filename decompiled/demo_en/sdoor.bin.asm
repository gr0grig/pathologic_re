GlobalVarCount = 0

Strings:
	door_closed
	Door is locked

Import:
	Hold (0 args)
	PlaySound (1 args)
	Trace (1 args)
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
		EVENT_38 Op = 0x32 Vars = (object)


0x0: @ Hold()
0x1: Pop(0)
0x2: GOTO 0x0

0x3: Return(); Pop(0)

0x4: PushEmpty(bool, int, bool, int)
0x5: Pop(0); Push((bool) Stack[-5] == 0)
0x6: IF (Stack[-1] == 0) GOTO 0x8; Pop(1)

0x7: Return(); Pop(4)

0x8: PushEmpty(bool, object)
0x9: Stack[-1] = Stack[-7]
0xa: Call2 0x46

0xb: Pop(1)
0xc: Pop(1); Push((bool) Stack[-1] == 0)
0xd: IF (Stack[-1] == 0) GOTO 0x15; Pop(1)

0xe: Push("door_closed")
0xf: @ PlaySound(Stack[-1])
0x10: Pop(1)
0x11: Push("Door is locked")
0x12: @ Trace(Stack[-1])
0x13: Pop(1)
0x14: Return(); Pop(4)

0x15: @ ClassifyActor(Stack[-2], Stack[-5])
0x16: Pop(0)
0x17: Stack[-2] = !Stack[-2]; Pop(0);
0x18: @ GetOpenSide(Stack[-1])
0x19: Pop(0)
0x1a: Pop(0); Push((bool) Stack[-1] == 0)
0x1b: IF (Stack[-1] == 0) GOTO 0x1f; Pop(1)

0x1c: @ Open(Stack[-2])
0x1d: Pop(0)
0x1e: GOTO 0x31

0x1f: Push((int) 0)
0x20: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x21: IF (Stack[-1] == 0) GOTO 0x2a; Pop(1)

0x22: Push(Stack[-2])
0x23: IF (Stack[-1] == 0) GOTO 0x27; Pop(1)

0x24: @ Close()
0x25: Pop(0)
0x26: GOTO 0x29

0x27: @ Open(Stack[-2])
0x28: Pop(0)
0x29: GOTO 0x31

0x2a: Push(Stack[-2])
0x2b: IF (Stack[-1] == 0) GOTO 0x2f; Pop(1)

0x2c: @ Open(Stack[-2])
0x2d: Pop(0)
0x2e: GOTO 0x31

0x2f: @ Close()
0x30: Pop(0)
0x31: Return(); Pop(4)

0x32: PushEmpty(bool, bool)
0x33: PushEmpty(bool)
0x34: Stack[-1] = (bool) 1
0x35: Pop(0); Push((bool) Stack[-4] == 0)
0x36: IF (Stack[-1] == 0) GOTO 0x3e; Pop(1)

0x37: PushEmpty(bool, object)
0x38: Stack[-1] = Stack[-6]
0x39: Call2 0x46

0x3a: Pop(1)
0x3b: Pop(1); Push((bool) Stack[-1] == 0)
0x3c: IF (Stack[-1] == 0) GOTO 0x3e; Pop(1)

0x3d: Stack[-1] = (bool) 0
0x3e: IF (Stack[-1] == 0) GOTO 0x40; Pop(1)

0x3f: Return(); Pop(2)

0x40: @ ClassifyActor(Stack[-1], Stack[-3])
0x41: Pop(0)
0x42: Pop(0); Push((bool) Stack[-1] == 0)
0x43: @ Open(Stack[-1])
0x44: Pop(1)
0x45: Return(); Pop(2)

0x46: PushEmpty()
0x47: PushEmpty(bool)
0x48: Call2 0x4c

0x49: Pop(0)
0x4a: Stack[-3] = !Stack[-1]; Pop(1);
0x4b: Return(); Pop(0)

0x4c: PushEmpty(int, int)
0x4d: Push("locked")
0x4e: @ GetProperty(Stack[-1], Stack[-2])
0x4f: Pop(1)
0x50: Push((int) 0)
0x51: Stack[-4] = Stack[-2] != Stack[-1]; Pop(1);
0x52: Return(); Pop(2)

