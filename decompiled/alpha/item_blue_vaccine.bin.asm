GlobalVarCount = 0

Strings:
	immunity
	health

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
0x4: Push((float)0.8)
0x5: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x6: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x7: Push("immunity")
0x8: Push((float)0.8)
0x9: @ SetProperty(Stack[-2], Stack[-1])
0xa: Pop(2)
0xb: PushEmpty(bool, string, float, float, float)
0xc: Stack[-4] = "health"
0xd: Stack[-3] = (float) 0.05
0xe: Stack[-2] = (int) 0
0xf: Stack[-1] = (int) 1
0x10: Call 0x47

0x11: Pop(5)
0x12: PushEmpty(float)
0x13: Stack[-1] = (float) 8.0
0x14: Call 0x2a

0x15: Pop(1)
0x16: Return(); Pop(2)

0x17: PushEmpty()
0x18: PushEmpty(bool, string, float, float, float)
0x19: Stack[-4] = "immunity"
0x1a: Push((float)1.0)
0x1b: Stack[-4] = Stack[-7] * Stack[-1]; Pop(1);
0x1c: Stack[-2] = (int) 0
0x1d: Stack[-1] = (float) 0.8
0x1e: Call 0x47

0x1f: Pop(5)
0x20: PushEmpty(bool, string, float, float, float)
0x21: Stack[-4] = "health"
0x22: Push((float)-0.1)
0x23: Stack[-4] = Stack[-7] * Stack[-1]; Pop(1);
0x24: Stack[-2] = (int) 0
0x25: Stack[-1] = (int) 1
0x26: Call 0x47

0x27: Pop(5)
0x28: Stack[-2] = (bool) 0
0x29: Return(); Pop(0)

0x2a: PushEmpty(float, float, float, float, float, float, float, float)
0x2b: @ GetGameTime(Stack[-4])
0x2c: Pop(0)
0x2d: Stack[-3] = Stack[-4] + Stack[-9]; Pop(0);
0x2e: Stack[-2] = Stack[-4]
0x2f: @ sync()
0x30: Pop(0)
0x31: @ GetGameTime(Stack[-1])
0x32: Pop(0)
0x33: Pop(0); Push((bool) Stack[-1] <= Stack[-2])
0x34: IF (Stack[-1] == 0) GOTO 0x36; Pop(1)

0x35: GOTO 0x45

0x36: Pop(0); Push((bool) Stack[-1] >= Stack[-3])
0x37: IF (Stack[-1] == 0) GOTO 0x3e; Pop(1)

0x38: PushEmpty(bool, float)
0x39: Stack[-1] = Stack[-5] - Stack[-4]; Pop(0);
0x3a: Call 0x17

0x3b: Pop(2)
0x3c: GOTO 0x46

0x3d: GOTO 0x45

0x3e: PushEmpty(bool, float)
0x3f: Stack[-1] = Stack[-3] - Stack[-4]; Pop(0);
0x40: Call 0x17

0x41: Pop(1)
0x42: IF (Stack[-1] == 0) GOTO 0x44; Pop(1)

0x43: GOTO 0x46

0x44: Stack[-2] = Stack[-1]
0x45: GOTO 0x2f

0x46: Return(); Pop(8)

0x47: PushEmpty(bool, float, bool, float)
0x48: @ HasProperty(Stack[-8], Stack[-2])
0x49: Pop(0)
0x4a: Pop(0); Push((bool) Stack[-2] == 0)
0x4b: IF (Stack[-1] == 0) GOTO 0x4e; Pop(1)

0x4c: Stack[-9] = (bool) 0
0x4d: Return(); Pop(4)

0x4e: @ GetProperty(Stack[-8], Stack[-1])
0x4f: Pop(0)
0x50: PushEmpty(float, float, float, float)
0x51: Stack[-3] = Stack[-5] + Stack[-11]; Pop(0);
0x52: Stack[-2] = Stack[-10]
0x53: Stack[-1] = Stack[-9]
0x54: Call 0x5a

0x55: Pop(3)
0x56: @ SetProperty(Stack[-9], Stack[-1])
0x57: Pop(1)
0x58: Stack[-9] = (bool) 1
0x59: Return(); Pop(4)

0x5a: PushEmpty()
0x5b: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x5c: IF (Stack[-1] == 0) GOTO 0x5f; Pop(1)

0x5d: Stack[-4] = Stack[-2]
0x5e: Return(); Pop(0)

0x5f: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x60: IF (Stack[-1] == 0) GOTO 0x63; Pop(1)

0x61: Stack[-4] = Stack[-1]
0x62: Return(); Pop(0)

0x63: Stack[-4] = Stack[-3]
0x64: Return(); Pop(0)

