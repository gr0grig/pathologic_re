GlobalVarCount = 0

Strings:
	key
	GetItemCountOfType
	locked

Import:
	GetProperty (2 args)
	Hold (0 args)
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
		EVENT_38 Op = 0x44 Vars = (object)


0x0: PushEmpty(string, int, string, int)
0x1: PushEmpty(bool)
0x2: Call 0x5e

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
0xe: Call 0x65

0xf: Pop(1)
0x10: PushEmpty(object)
0x11: Stack[-1] = Stack[-6]
0x12: Call 0x19

0x13: Pop(1)
0x14: Return(); Pop(4)

0x15: @ Hold()
0x16: Pop(0)
0x17: GOTO 0x15

0x18: Return(); Pop(0)

0x19: PushEmpty(bool, int, bool, int)
0x1a: PushEmpty(bool)
0x1b: Stack[-1] = (bool) 1
0x1c: Pop(0); Push((bool) Stack[-6] == 0)
0x1d: IF (Stack[-1] == 0) GOTO 0x25; Pop(1)

0x1e: PushEmpty(bool, object)
0x1f: Stack[-1] = Stack[-8]
0x20: Call 0x58

0x21: Pop(1)
0x22: Pop(1); Push((bool) Stack[-1] == 0)
0x23: IF (Stack[-1] == 0) GOTO 0x25; Pop(1)

0x24: Stack[-1] = (bool) 0
0x25: IF (Stack[-1] == 0) GOTO 0x27; Pop(1)

0x26: Return(); Pop(4)

0x27: @ ClassifyActor(Stack[-2], Stack[-5])
0x28: Pop(0)
0x29: Stack[-2] = !Stack[-2]; Pop(0);
0x2a: @ GetOpenSide(Stack[-1])
0x2b: Pop(0)
0x2c: Pop(0); Push((bool) Stack[-1] == 0)
0x2d: IF (Stack[-1] == 0) GOTO 0x31; Pop(1)

0x2e: @ Open(Stack[-2])
0x2f: Pop(0)
0x30: GOTO 0x43

0x31: Push((int) 0)
0x32: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x33: IF (Stack[-1] == 0) GOTO 0x3c; Pop(1)

0x34: Push(Stack[-2])
0x35: IF (Stack[-1] == 0) GOTO 0x39; Pop(1)

0x36: @ Close()
0x37: Pop(0)
0x38: GOTO 0x3b

0x39: @ Open(Stack[-2])
0x3a: Pop(0)
0x3b: GOTO 0x43

0x3c: Push(Stack[-2])
0x3d: IF (Stack[-1] == 0) GOTO 0x41; Pop(1)

0x3e: @ Open(Stack[-2])
0x3f: Pop(0)
0x40: GOTO 0x43

0x41: @ Close()
0x42: Pop(0)
0x43: Return(); Pop(4)

0x44: PushEmpty(bool, bool)
0x45: PushEmpty(bool)
0x46: Stack[-1] = (bool) 1
0x47: Pop(0); Push((bool) Stack[-4] == 0)
0x48: IF (Stack[-1] == 0) GOTO 0x50; Pop(1)

0x49: PushEmpty(bool, object)
0x4a: Stack[-1] = Stack[-6]
0x4b: Call 0x58

0x4c: Pop(1)
0x4d: Pop(1); Push((bool) Stack[-1] == 0)
0x4e: IF (Stack[-1] == 0) GOTO 0x50; Pop(1)

0x4f: Stack[-1] = (bool) 0
0x50: IF (Stack[-1] == 0) GOTO 0x52; Pop(1)

0x51: Return(); Pop(2)

0x52: @ ClassifyActor(Stack[-1], Stack[-3])
0x53: Pop(0)
0x54: Pop(0); Push((bool) Stack[-1] == 0)
0x55: @ Open(Stack[-1])
0x56: Pop(1)
0x57: Return(); Pop(2)

0x58: PushEmpty()
0x59: PushEmpty(bool)
0x5a: Call 0x5e

0x5b: Pop(0)
0x5c: Stack[-3] = !Stack[-1]; Pop(1);
0x5d: Return(); Pop(0)

0x5e: PushEmpty(int, int)
0x5f: Push("locked")
0x60: @ GetProperty(Stack[-1], Stack[-2])
0x61: Pop(1)
0x62: Push((int) 0)
0x63: Stack[-4] = Stack[-2] != Stack[-1]; Pop(1);
0x64: Return(); Pop(2)

0x65: PushEmpty()
0x66: Push("locked")
0x67: @ SetProperty(Stack[-1], Stack[-2])
0x68: Pop(1)
0x69: Return(); Pop(0)

