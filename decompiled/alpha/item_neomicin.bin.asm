GlobalVarCount = 0

Strings:
	disease
	hunger
	health

Import:
	GetProperty (2 args)
	SetProperty (2 args)
	rand (1 args)
	GetGameTime (1 args)
	sync (0 args)
	HasProperty (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0


0x0: PushEmpty(float, float)
0x1: PushEmpty(bool)
0x2: Call 0x17

0x3: Pop(0)
0x4: Pop(1); Push((bool) Stack[-1] == 0)
0x5: IF (Stack[-1] == 0) GOTO 0xe; Pop(1)

0x6: Push("disease")
0x7: @ GetProperty(Stack[-1], Stack[-2])
0x8: Pop(1)
0x9: Push("disease")
0xa: Push((float)0.5)
0xb: Pop(1); Push(Stack[-3] * Stack[-1]);
0xc: @ SetProperty(Stack[-2], Stack[-1])
0xd: Pop(2)
0xe: PushEmpty()
0xf: Call 0x12

0x10: Pop(0)
0x11: Return(); Pop(2)

0x12: PushEmpty(float)
0x13: Stack[-1] = (float) 12.0
0x14: Call 0x45

0x15: Pop(1)
0x16: Return(); Pop(0)

0x17: PushEmpty(float, float, float, float, float, float, float, float)
0x18: Push("disease")
0x19: @ GetProperty(Stack[-1], Stack[-5])
0x1a: Pop(1)
0x1b: PushEmpty(bool)
0x1c: Stack[-1] = (bool) 0
0x1d: Push((float)0.0)
0x1e: Pop(1); Push((bool) Stack[-6] >= Stack[-1])
0x1f: IF (Stack[-1] == 0) GOTO 0x24; Pop(1)

0x20: Push((float)0.4)
0x21: Pop(1); Push((bool) Stack[-6] <= Stack[-1])
0x22: IF (Stack[-1] == 0) GOTO 0x24; Pop(1)

0x23: Stack[-1] = (bool) 1
0x24: IF (Stack[-1] == 0) GOTO 0x38; Pop(1)

0x25: Push("hunger")
0x26: @ GetProperty(Stack[-1], Stack[-4])
0x27: Pop(1)
0x28: Push((float)0.15)
0x29: Push((int) 1)
0x2a: Push((float)2.0)
0x2b: Pop(1); Push(Stack[-1] * Stack[-6]);
0x2c: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2d: Stack[-4] = Stack[-2] * Stack[-1]; Pop(2);
0x2e: @ rand(Stack[-1])
0x2f: Pop(0)
0x30: Pop(0); Push((bool) Stack[-1] < Stack[-2])
0x31: IF (Stack[-1] == 0) GOTO 0x38; Pop(1)

0x32: Push("disease")
0x33: Push((int) 0)
0x34: @ SetProperty(Stack[-2], Stack[-1])
0x35: Pop(2)
0x36: Stack[-9] = (bool) 1
0x37: Return(); Pop(8)

0x38: Stack[-9] = (bool) 0
0x39: Return(); Pop(8)

0x3a: PushEmpty()
0x3b: PushEmpty(bool, string, float, float, float)
0x3c: Stack[-4] = "health"
0x3d: Push((float)-0.01)
0x3e: Stack[-4] = Stack[-7] * Stack[-1]; Pop(1);
0x3f: Stack[-2] = (int) 0
0x40: Stack[-1] = (int) 1
0x41: Call 0x62

0x42: Pop(5)
0x43: Stack[-2] = (bool) 0
0x44: Return(); Pop(0)

0x45: PushEmpty(float, float, float, float, float, float, float, float)
0x46: @ GetGameTime(Stack[-4])
0x47: Pop(0)
0x48: Stack[-3] = Stack[-4] + Stack[-9]; Pop(0);
0x49: Stack[-2] = Stack[-4]
0x4a: @ sync()
0x4b: Pop(0)
0x4c: @ GetGameTime(Stack[-1])
0x4d: Pop(0)
0x4e: Pop(0); Push((bool) Stack[-1] <= Stack[-2])
0x4f: IF (Stack[-1] == 0) GOTO 0x51; Pop(1)

0x50: GOTO 0x60

0x51: Pop(0); Push((bool) Stack[-1] >= Stack[-3])
0x52: IF (Stack[-1] == 0) GOTO 0x59; Pop(1)

0x53: PushEmpty(bool, float)
0x54: Stack[-1] = Stack[-5] - Stack[-4]; Pop(0);
0x55: Call 0x3a

0x56: Pop(2)
0x57: GOTO 0x61

0x58: GOTO 0x60

0x59: PushEmpty(bool, float)
0x5a: Stack[-1] = Stack[-3] - Stack[-4]; Pop(0);
0x5b: Call 0x3a

0x5c: Pop(1)
0x5d: IF (Stack[-1] == 0) GOTO 0x5f; Pop(1)

0x5e: GOTO 0x61

0x5f: Stack[-2] = Stack[-1]
0x60: GOTO 0x4a

0x61: Return(); Pop(8)

0x62: PushEmpty(bool, float, bool, float)
0x63: @ HasProperty(Stack[-8], Stack[-2])
0x64: Pop(0)
0x65: Pop(0); Push((bool) Stack[-2] == 0)
0x66: IF (Stack[-1] == 0) GOTO 0x69; Pop(1)

0x67: Stack[-9] = (bool) 0
0x68: Return(); Pop(4)

0x69: @ GetProperty(Stack[-8], Stack[-1])
0x6a: Pop(0)
0x6b: PushEmpty(float, float, float, float)
0x6c: Stack[-3] = Stack[-5] + Stack[-11]; Pop(0);
0x6d: Stack[-2] = Stack[-10]
0x6e: Stack[-1] = Stack[-9]
0x6f: Call 0x75

0x70: Pop(3)
0x71: @ SetProperty(Stack[-9], Stack[-1])
0x72: Pop(1)
0x73: Stack[-9] = (bool) 1
0x74: Return(); Pop(4)

0x75: PushEmpty()
0x76: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x77: IF (Stack[-1] == 0) GOTO 0x7a; Pop(1)

0x78: Stack[-4] = Stack[-2]
0x79: Return(); Pop(0)

0x7a: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x7b: IF (Stack[-1] == 0) GOTO 0x7e; Pop(1)

0x7c: Stack[-4] = Stack[-1]
0x7d: Return(); Pop(0)

0x7e: Stack[-4] = Stack[-3]
0x7f: Return(); Pop(0)

