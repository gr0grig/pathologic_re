GlobalVarCount = 0

Strings:
	health
	immunity
	tiredness
	sleeping

Import:
	GetGameTime (1 args)
	sync (0 args)
	HasProperty (2 args)
	GetProperty (2 args)
	SetProperty (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0


0x0: PushEmpty(bool, string, float, float, float)
0x1: Stack[-4] = "health"
0x2: Stack[-3] = (float) 0.05
0x3: Stack[-2] = (int) 0
0x4: Stack[-1] = (int) 1
0x5: Call 0x46

0x6: Pop(5)
0x7: PushEmpty(bool, string, float, float, float)
0x8: Stack[-4] = "immunity"
0x9: Stack[-3] = (float) 0.05
0xa: Stack[-2] = (int) 0
0xb: Stack[-1] = (int) 1
0xc: Call 0x46

0xd: Pop(5)
0xe: PushEmpty(bool, string, float, float, float)
0xf: Stack[-4] = "tiredness"
0x10: Stack[-3] = (float) 0.05
0x11: Stack[-2] = (int) 0
0x12: Stack[-1] = (int) 1
0x13: Call 0x46

0x14: Pop(5)
0x15: PushEmpty(float)
0x16: Stack[-1] = (float) 12.0
0x17: Call 0x29

0x18: Pop(1)
0x19: Return(); Pop(0)

0x1a: PushEmpty()
0x1b: PushEmpty(bool)
0x1c: Call 0x59

0x1d: Pop(0)
0x1e: IF (Stack[-1] == 0) GOTO 0x27; Pop(1)

0x1f: PushEmpty(bool, string, float, float, float)
0x20: Stack[-4] = "tiredness"
0x21: Push((float)-0.1)
0x22: Stack[-4] = Stack[-7] * Stack[-1]; Pop(1);
0x23: Stack[-2] = (int) 0
0x24: Stack[-1] = (int) 1
0x25: Call 0x46

0x26: Pop(5)
0x27: Stack[-2] = (bool) 0
0x28: Return(); Pop(0)

0x29: PushEmpty(float, float, float, float, float, float, float, float)
0x2a: @ GetGameTime(Stack[-4])
0x2b: Pop(0)
0x2c: Stack[-3] = Stack[-4] + Stack[-9]; Pop(0);
0x2d: Stack[-2] = Stack[-4]
0x2e: @ sync()
0x2f: Pop(0)
0x30: @ GetGameTime(Stack[-1])
0x31: Pop(0)
0x32: Pop(0); Push((bool) Stack[-1] <= Stack[-2])
0x33: IF (Stack[-1] == 0) GOTO 0x35; Pop(1)

0x34: GOTO 0x44

0x35: Pop(0); Push((bool) Stack[-1] >= Stack[-3])
0x36: IF (Stack[-1] == 0) GOTO 0x3d; Pop(1)

0x37: PushEmpty(bool, float)
0x38: Stack[-1] = Stack[-5] - Stack[-4]; Pop(0);
0x39: Call 0x1a

0x3a: Pop(2)
0x3b: GOTO 0x45

0x3c: GOTO 0x44

0x3d: PushEmpty(bool, float)
0x3e: Stack[-1] = Stack[-3] - Stack[-4]; Pop(0);
0x3f: Call 0x1a

0x40: Pop(1)
0x41: IF (Stack[-1] == 0) GOTO 0x43; Pop(1)

0x42: GOTO 0x45

0x43: Stack[-2] = Stack[-1]
0x44: GOTO 0x2e

0x45: Return(); Pop(8)

0x46: PushEmpty(bool, float, bool, float)
0x47: @ HasProperty(Stack[-8], Stack[-2])
0x48: Pop(0)
0x49: Pop(0); Push((bool) Stack[-2] == 0)
0x4a: IF (Stack[-1] == 0) GOTO 0x4d; Pop(1)

0x4b: Stack[-9] = (bool) 0
0x4c: Return(); Pop(4)

0x4d: @ GetProperty(Stack[-8], Stack[-1])
0x4e: Pop(0)
0x4f: PushEmpty(float, float, float, float)
0x50: Stack[-3] = Stack[-5] + Stack[-11]; Pop(0);
0x51: Stack[-2] = Stack[-10]
0x52: Stack[-1] = Stack[-9]
0x53: Call 0x66

0x54: Pop(3)
0x55: @ SetProperty(Stack[-9], Stack[-1])
0x56: Pop(1)
0x57: Stack[-9] = (bool) 1
0x58: Return(); Pop(4)

0x59: PushEmpty(bool, bool, bool, bool)
0x5a: Push("sleeping")
0x5b: @ HasProperty(Stack[-1], Stack[-3])
0x5c: Pop(1)
0x5d: Pop(0); Push((bool) Stack[-2] == 0)
0x5e: IF (Stack[-1] == 0) GOTO 0x61; Pop(1)

0x5f: Stack[-5] = (bool) 0
0x60: Return(); Pop(4)

0x61: Push("sleeping")
0x62: @ GetProperty(Stack[-1], Stack[-2])
0x63: Pop(1)
0x64: Stack[-5] = Stack[-1]
0x65: Return(); Pop(4)

0x66: PushEmpty()
0x67: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x68: IF (Stack[-1] == 0) GOTO 0x6b; Pop(1)

0x69: Stack[-4] = Stack[-2]
0x6a: Return(); Pop(0)

0x6b: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x6c: IF (Stack[-1] == 0) GOTO 0x6f; Pop(1)

0x6d: Stack[-4] = Stack[-1]
0x6e: Return(); Pop(0)

0x6f: Stack[-4] = Stack[-3]
0x70: Return(); Pop(0)

