GlobalVarCount = 0

Strings:
	key
	GetItemCountOfType
	door_closed
	Door is locked

Import:
	GetProperty (2 args)
	Hold (0 args)
	PlaySound (1 args)
	Trace (1 args)
	ClassifyActor (2 args)
	GetOpenSide (1 args)
	Open (1 args)
	Close (0 args)
	SetProperty (2 args)

RunOp = 0x15
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_0 Op = 0x0 Vars = (object)
		EVENT_38 Op = 0x47 Vars = (object)


0x0: PushEmpty(string, int, string, int)
0x1: PushEmpty(bool)
0x2: Call2 0x61

0x3: Pop(0)
0x4: IF (Stack[-1] == 0) GOTO 0x10; Pop(1)

0x5: Push("key")
0x6: @ GetProperty(Stack[-1], Stack[-3])
0x7: Pop(1)
0x8: @@ GetItemCountOfType(Stack[-1], Stack[-2])
0x9: Pop(0)
0xa: Push(Stack[-1])
0xb: IF (Stack[-1] == 0) GOTO 0x10; Pop(1)

0xc: PushEmpty(bool)
0xd: Stack[-1] = (bool) 0
0xe: Call2 0x68

0xf: Pop(1)
0x10: PushEmpty(object)
0x11: Stack[-1] = Stack[-6]
0x12: Call2 0x19

0x13: Pop(1)
0x14: Return(); Pop(4)

0x15: @ Hold()
0x16: Pop(0)
0x17: GOTO 0x15

0x18: Return(); Pop(0)

0x19: PushEmpty(bool, int, bool, int)
0x1a: Pop(0); Push((bool) Stack[-5] == 0)
0x1b: IF (Stack[-1] == 0) GOTO 0x1d; Pop(1)

0x1c: Return(); Pop(4)

0x1d: PushEmpty(bool, object)
0x1e: Stack[-1] = Stack[-7]
0x1f: Call2 0x5b

0x20: Pop(1)
0x21: Pop(1); Push((bool) Stack[-1] == 0)
0x22: IF (Stack[-1] == 0) GOTO 0x2a; Pop(1)

0x23: Push("door_closed")
0x24: @ PlaySound(Stack[-1])
0x25: Pop(1)
0x26: Push("Door is locked")
0x27: @ Trace(Stack[-1])
0x28: Pop(1)
0x29: Return(); Pop(4)

0x2a: @ ClassifyActor(Stack[-2], Stack[-5])
0x2b: Pop(0)
0x2c: Stack[-2] = !Stack[-2]; Pop(0);
0x2d: @ GetOpenSide(Stack[-1])
0x2e: Pop(0)
0x2f: Pop(0); Push((bool) Stack[-1] == 0)
0x30: IF (Stack[-1] == 0) GOTO 0x34; Pop(1)

0x31: @ Open(Stack[-2])
0x32: Pop(0)
0x33: GOTO 0x46

0x34: Push((int) 0)
0x35: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x36: IF (Stack[-1] == 0) GOTO 0x3f; Pop(1)

0x37: Push(Stack[-2])
0x38: IF (Stack[-1] == 0) GOTO 0x3c; Pop(1)

0x39: @ Close()
0x3a: Pop(0)
0x3b: GOTO 0x3e

0x3c: @ Open(Stack[-2])
0x3d: Pop(0)
0x3e: GOTO 0x46

0x3f: Push(Stack[-2])
0x40: IF (Stack[-1] == 0) GOTO 0x44; Pop(1)

0x41: @ Open(Stack[-2])
0x42: Pop(0)
0x43: GOTO 0x46

0x44: @ Close()
0x45: Pop(0)
0x46: Return(); Pop(4)

0x47: PushEmpty(bool, bool)
0x48: PushEmpty(bool)
0x49: Stack[-1] = (bool) 1
0x4a: Pop(0); Push((bool) Stack[-4] == 0)
0x4b: IF (Stack[-1] == 0) GOTO 0x53; Pop(1)

0x4c: PushEmpty(bool, object)
0x4d: Stack[-1] = Stack[-6]
0x4e: Call2 0x5b

0x4f: Pop(1)
0x50: Pop(1); Push((bool) Stack[-1] == 0)
0x51: IF (Stack[-1] == 0) GOTO 0x53; Pop(1)

0x52: Stack[-1] = (bool) 0
0x53: IF (Stack[-1] == 0) GOTO 0x55; Pop(1)

0x54: Return(); Pop(2)

0x55: @ ClassifyActor(Stack[-1], Stack[-3])
0x56: Pop(0)
0x57: Pop(0); Push((bool) Stack[-1] == 0)
0x58: @ Open(Stack[-1])
0x59: Pop(1)
0x5a: Return(); Pop(2)

0x5b: PushEmpty()
0x5c: PushEmpty(bool)
0x5d: Call2 0x61

0x5e: Pop(0)
0x5f: Stack[-3] = !Stack[-1]; Pop(1);
0x60: Return(); Pop(0)

0x61: PushEmpty(int, int)
0x62: Push("locked")
0x63: @ GetProperty(Stack[-1], Stack[-2])
0x64: Pop(1)
0x65: Push((int) 0)
0x66: Stack[-4] = Stack[-2] != Stack[-1]; Pop(1);
0x67: Return(); Pop(2)

0x68: PushEmpty()
0x69: Push("locked")
0x6a: @ SetProperty(Stack[-1], Stack[-2])
0x6b: Pop(1)
0x6c: Return(); Pop(0)

