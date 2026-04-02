GlobalVarCount = 0

Strings:
	W:immunity
// @pool_raw:69006d006d0075006e006900740079000000

Import:
	GetProperty (2 args)
	SetProperty (2 args)
	GetGameTime (1 args)
	sync (0 args)
	HasProperty (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (bool) Params = 0


0x0: PushEmpty(float, float)
0x1: Push("immunity") // @poff=0
0x2: @ GetProperty(Stack[-1], Stack[-2])
0x3: Pop(1)
0x4: Push((float)1.2000000476837158)
0x5: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x6: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x7: Push("immunity") // @poff=0
0x8: Push((float)1.2000000476837158)
0x9: @ SetProperty(Stack[-2], Stack[-1])
0xa: Pop(2)
0xb: PushEmpty(float)
0xc: Stack[-1] = (float) 4.0
0xd: Call2 0x1b

0xe: Pop(1)
0xf: Return(); Pop(2)

0x10: PushEmpty()
0x11: PushEmpty(bool, string, float, float, float)
0x12: Stack[-4] = "immunity" // @poff=0
0x13: Push((float)2.0)
0x14: Stack[-4] = Stack[-7] * Stack[-1]; Pop(1);
0x15: Stack[-2] = (int) 0
0x16: Stack[-1] = (float) 1.2000000476837158
0x17: Call2 0x3b

0x18: Pop(5)
0x19: Stack[-2] = (bool) 0
0x1a: Return(); Pop(0)

0x1b: PushEmpty(float, float, float, float, float, float, float, float)
0x1c: @ GetGameTime(Stack[-4])
0x1d: Pop(0)
0x1e: Stack[-3] = Stack[-4] + Stack[-9]; Pop(0);
0x1f: Stack[-4] = Stack[-2]
0x20: @ sync()
0x21: Pop(0)
0x22: Push( Stack[0 + Tasks[-1].StackPointer] )
0x23: IF (Stack[-1] == 0) GOTO 0x25; Pop(1)

0x24: GOTO 0x3a

0x25: @ GetGameTime(Stack[-1])
0x26: Pop(0)
0x27: Pop(0); Push((bool) Stack[-1] <= Stack[-2])
0x28: IF (Stack[-1] == 0) GOTO 0x2a; Pop(1)

0x29: GOTO 0x39

0x2a: Pop(0); Push((bool) Stack[-1] >= Stack[-3])
0x2b: IF (Stack[-1] == 0) GOTO 0x32; Pop(1)

0x2c: PushEmpty(bool, float)
0x2d: Stack[-1] = Stack[-5] - Stack[-4]; Pop(0);
0x2e: Call2 0x10

0x2f: Pop(2)
0x30: GOTO 0x3a

0x31: GOTO 0x39

0x32: PushEmpty(bool, float)
0x33: Stack[-1] = Stack[-3] - Stack[-4]; Pop(0);
0x34: Call2 0x10

0x35: Pop(1)
0x36: IF (Stack[-1] == 0) GOTO 0x38; Pop(1)

0x37: GOTO 0x3a

0x38: Stack[-1] = Stack[-2]
0x39: GOTO 0x20

0x3a: Return(); Pop(8)

0x3b: PushEmpty(bool, float, bool, float)
0x3c: @ HasProperty(Stack[-8], Stack[-2])
0x3d: Pop(0)
0x3e: Pop(0); Push((bool) Stack[-2] == 0)
0x3f: IF (Stack[-1] == 0) GOTO 0x42; Pop(1)

0x40: Stack[-9] = (bool) 0
0x41: Return(); Pop(4)

0x42: @ GetProperty(Stack[-8], Stack[-1])
0x43: Pop(0)
0x44: PushEmpty(float, float, float, float)
0x45: Stack[-3] = Stack[-5] + Stack[-11]; Pop(0);
0x46: Stack[-10] = Stack[-2]
0x47: Stack[-9] = Stack[-1]
0x48: Call2 0x4e

0x49: Pop(3)
0x4a: @ SetProperty(Stack[-9], Stack[-1])
0x4b: Pop(1)
0x4c: Stack[-9] = (bool) 1
0x4d: Return(); Pop(4)

0x4e: PushEmpty()
0x4f: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x50: IF (Stack[-1] == 0) GOTO 0x53; Pop(1)

0x51: Stack[-2] = Stack[-4]
0x52: Return(); Pop(0)

0x53: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x54: IF (Stack[-1] == 0) GOTO 0x57; Pop(1)

0x55: Stack[-1] = Stack[-4]
0x56: Return(); Pop(0)

0x57: Stack[-3] = Stack[-4]
0x58: Return(); Pop(0)

