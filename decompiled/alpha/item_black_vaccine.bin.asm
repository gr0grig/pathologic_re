GlobalVarCount = 0

Strings:
	immunity

Import:
	GetProperty (2 args)
	SetProperty (2 args)
	GetGameTime (1 args)
	sync (0 args)
	HasProperty (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0


0x0: PushEmpty(float, float)
0x1: Push("immunity")
0x2: @ GetProperty(Stack[-1], Stack[-2])
0x3: Pop(1)
0x4: Push((float)0.6)
0x5: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x6: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x7: Push("immunity")
0x8: Push((float)0.6)
0x9: @ SetProperty(Stack[-2], Stack[-1])
0xa: Pop(2)
0xb: PushEmpty(float)
0xc: Stack[-1] = (float) 6.0
0xd: Call 0x1b

0xe: Pop(1)
0xf: Return(); Pop(2)

0x10: PushEmpty()
0x11: PushEmpty(bool, string, float, float, float)
0x12: Stack[-4] = "immunity"
0x13: Push((float)0.6)
0x14: Stack[-4] = Stack[-7] * Stack[-1]; Pop(1);
0x15: Stack[-2] = (int) 0
0x16: Stack[-1] = (float) 0.6
0x17: Call 0x38

0x18: Pop(5)
0x19: Stack[-2] = (bool) 0
0x1a: Return(); Pop(0)

0x1b: PushEmpty(float, float, float, float, float, float, float, float)
0x1c: @ GetGameTime(Stack[-4])
0x1d: Pop(0)
0x1e: Stack[-3] = Stack[-4] + Stack[-9]; Pop(0);
0x1f: Stack[-2] = Stack[-4]
0x20: @ sync()
0x21: Pop(0)
0x22: @ GetGameTime(Stack[-1])
0x23: Pop(0)
0x24: Pop(0); Push((bool) Stack[-1] <= Stack[-2])
0x25: IF (Stack[-1] == 0) GOTO 0x27; Pop(1)

0x26: GOTO 0x36

0x27: Pop(0); Push((bool) Stack[-1] >= Stack[-3])
0x28: IF (Stack[-1] == 0) GOTO 0x2f; Pop(1)

0x29: PushEmpty(bool, float)
0x2a: Stack[-1] = Stack[-5] - Stack[-4]; Pop(0);
0x2b: Call 0x10

0x2c: Pop(2)
0x2d: GOTO 0x37

0x2e: GOTO 0x36

0x2f: PushEmpty(bool, float)
0x30: Stack[-1] = Stack[-3] - Stack[-4]; Pop(0);
0x31: Call 0x10

0x32: Pop(1)
0x33: IF (Stack[-1] == 0) GOTO 0x35; Pop(1)

0x34: GOTO 0x37

0x35: Stack[-2] = Stack[-1]
0x36: GOTO 0x20

0x37: Return(); Pop(8)

0x38: PushEmpty(bool, float, bool, float)
0x39: @ HasProperty(Stack[-8], Stack[-2])
0x3a: Pop(0)
0x3b: Pop(0); Push((bool) Stack[-2] == 0)
0x3c: IF (Stack[-1] == 0) GOTO 0x3f; Pop(1)

0x3d: Stack[-9] = (bool) 0
0x3e: Return(); Pop(4)

0x3f: @ GetProperty(Stack[-8], Stack[-1])
0x40: Pop(0)
0x41: PushEmpty(float, float, float, float)
0x42: Stack[-3] = Stack[-5] + Stack[-11]; Pop(0);
0x43: Stack[-2] = Stack[-10]
0x44: Stack[-1] = Stack[-9]
0x45: Call 0x4b

0x46: Pop(3)
0x47: @ SetProperty(Stack[-9], Stack[-1])
0x48: Pop(1)
0x49: Stack[-9] = (bool) 1
0x4a: Return(); Pop(4)

0x4b: PushEmpty()
0x4c: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x4d: IF (Stack[-1] == 0) GOTO 0x50; Pop(1)

0x4e: Stack[-4] = Stack[-2]
0x4f: Return(); Pop(0)

0x50: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x51: IF (Stack[-1] == 0) GOTO 0x54; Pop(1)

0x52: Stack[-4] = Stack[-1]
0x53: Return(); Pop(0)

0x54: Stack[-4] = Stack[-3]
0x55: Return(); Pop(0)

