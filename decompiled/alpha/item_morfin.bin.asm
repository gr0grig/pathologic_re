GlobalVarCount = 0

Strings:
	health
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
0x2: Stack[-3] = (float) 0.2
0x3: Stack[-2] = (int) 0
0x4: Stack[-1] = (int) 1
0x5: Call 0x47

0x6: Pop(5)
0x7: PushEmpty(bool, string, float, float, float)
0x8: Stack[-4] = "tiredness"
0x9: Stack[-3] = (float) 0.25
0xa: Stack[-2] = (int) 0
0xb: Stack[-1] = (int) 1
0xc: Call 0x47

0xd: Pop(5)
0xe: PushEmpty(float)
0xf: Stack[-1] = (float) 10.0
0x10: Call 0x2a

0x11: Pop(1)
0x12: Return(); Pop(0)

0x13: PushEmpty()
0x14: PushEmpty(bool)
0x15: Call 0x5a

0x16: Pop(0)
0x17: IF (Stack[-1] == 0) GOTO 0x28; Pop(1)

0x18: PushEmpty(bool, string, float, float, float)
0x19: Stack[-4] = "health"
0x1a: Push((float)0.15)
0x1b: Stack[-4] = Stack[-7] * Stack[-1]; Pop(1);
0x1c: Stack[-2] = (int) 0
0x1d: Stack[-1] = (int) 1
0x1e: Call 0x47

0x1f: Pop(5)
0x20: PushEmpty(bool, string, float, float, float)
0x21: Stack[-4] = "tiredness"
0x22: Push((float)-0.15)
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
0x3a: Call 0x13

0x3b: Pop(2)
0x3c: GOTO 0x46

0x3d: GOTO 0x45

0x3e: PushEmpty(bool, float)
0x3f: Stack[-1] = Stack[-3] - Stack[-4]; Pop(0);
0x40: Call 0x13

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
0x54: Call 0x67

0x55: Pop(3)
0x56: @ SetProperty(Stack[-9], Stack[-1])
0x57: Pop(1)
0x58: Stack[-9] = (bool) 1
0x59: Return(); Pop(4)

0x5a: PushEmpty(bool, bool, bool, bool)
0x5b: Push("sleeping")
0x5c: @ HasProperty(Stack[-1], Stack[-3])
0x5d: Pop(1)
0x5e: Pop(0); Push((bool) Stack[-2] == 0)
0x5f: IF (Stack[-1] == 0) GOTO 0x62; Pop(1)

0x60: Stack[-5] = (bool) 0
0x61: Return(); Pop(4)

0x62: Push("sleeping")
0x63: @ GetProperty(Stack[-1], Stack[-2])
0x64: Pop(1)
0x65: Stack[-5] = Stack[-1]
0x66: Return(); Pop(4)

0x67: PushEmpty()
0x68: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x69: IF (Stack[-1] == 0) GOTO 0x6c; Pop(1)

0x6a: Stack[-4] = Stack[-2]
0x6b: Return(); Pop(0)

0x6c: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x6d: IF (Stack[-1] == 0) GOTO 0x70; Pop(1)

0x6e: Stack[-4] = Stack[-1]
0x6f: Return(); Pop(0)

0x70: Stack[-4] = Stack[-3]
0x71: Return(); Pop(0)

