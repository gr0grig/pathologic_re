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
	GTASK_0 Vars = (bool) Params = 0


0x0: PushEmpty(float, float)
0x1: Push("immunity")
0x2: @ GetProperty(Stack[-1], Stack[-2])
0x3: Pop(1)
0x4: Push((float)0.7)
0x5: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x6: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x7: Push("immunity")
0x8: Push((float)0.7)
0x9: @ SetProperty(Stack[-2], Stack[-1])
0xa: Pop(2)
0xb: PushEmpty(float)
0xc: Stack[-1] = (float) 4.0
0xd: Call2 0x21

0xe: Pop(1)
0xf: Return(); Pop(2)

0x10: PushEmpty(float, float)
0x11: Push("immunity")
0x12: @ GetProperty(Stack[-1], Stack[-2])
0x13: Pop(1)
0x14: Push((float)0.7)
0x15: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x16: IF (Stack[-1] == 0) GOTO 0x1f; Pop(1)

0x17: PushEmpty(bool, string, float, float, float)
0x18: Stack[-4] = "immunity"
0x19: Push((float)1.0)
0x1a: Stack[-4] = Stack[-9] * Stack[-1]; Pop(1);
0x1b: Stack[-2] = (int) 0
0x1c: Stack[-1] = (float) 0.7
0x1d: Call2 0x41

0x1e: Pop(5)
0x1f: Stack[-4] = (bool) 0
0x20: Return(); Pop(2)

0x21: PushEmpty(float, float, float, float, float, float, float, float)
0x22: @ GetGameTime(Stack[-4])
0x23: Pop(0)
0x24: Stack[-3] = Stack[-4] + Stack[-9]; Pop(0);
0x25: Stack[-2] = Stack[-4]
0x26: @ sync()
0x27: Pop(0)
0x28: Push( Stack[0 + Tasks[-1].StackPointer] )
0x29: IF (Stack[-1] == 0) GOTO 0x2b; Pop(1)

0x2a: GOTO 0x40

0x2b: @ GetGameTime(Stack[-1])
0x2c: Pop(0)
0x2d: Pop(0); Push((bool) Stack[-1] <= Stack[-2])
0x2e: IF (Stack[-1] == 0) GOTO 0x30; Pop(1)

0x2f: GOTO 0x3f

0x30: Pop(0); Push((bool) Stack[-1] >= Stack[-3])
0x31: IF (Stack[-1] == 0) GOTO 0x38; Pop(1)

0x32: PushEmpty(bool, float)
0x33: Stack[-1] = Stack[-5] - Stack[-4]; Pop(0);
0x34: Call2 0x10

0x35: Pop(2)
0x36: GOTO 0x40

0x37: GOTO 0x3f

0x38: PushEmpty(bool, float)
0x39: Stack[-1] = Stack[-3] - Stack[-4]; Pop(0);
0x3a: Call2 0x10

0x3b: Pop(1)
0x3c: IF (Stack[-1] == 0) GOTO 0x3e; Pop(1)

0x3d: GOTO 0x40

0x3e: Stack[-2] = Stack[-1]
0x3f: GOTO 0x26

0x40: Return(); Pop(8)

0x41: PushEmpty(bool, float, bool, float)
0x42: @ HasProperty(Stack[-8], Stack[-2])
0x43: Pop(0)
0x44: Pop(0); Push((bool) Stack[-2] == 0)
0x45: IF (Stack[-1] == 0) GOTO 0x48; Pop(1)

0x46: Stack[-9] = (bool) 0
0x47: Return(); Pop(4)

0x48: @ GetProperty(Stack[-8], Stack[-1])
0x49: Pop(0)
0x4a: PushEmpty(float, float, float, float)
0x4b: Stack[-3] = Stack[-5] + Stack[-11]; Pop(0);
0x4c: Stack[-2] = Stack[-10]
0x4d: Stack[-1] = Stack[-9]
0x4e: Call2 0x54

0x4f: Pop(3)
0x50: @ SetProperty(Stack[-9], Stack[-1])
0x51: Pop(1)
0x52: Stack[-9] = (bool) 1
0x53: Return(); Pop(4)

0x54: PushEmpty()
0x55: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x56: IF (Stack[-1] == 0) GOTO 0x59; Pop(1)

0x57: Stack[-4] = Stack[-2]
0x58: Return(); Pop(0)

0x59: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x5a: IF (Stack[-1] == 0) GOTO 0x5d; Pop(1)

0x5b: Stack[-4] = Stack[-1]
0x5c: Return(); Pop(0)

0x5d: Stack[-4] = Stack[-3]
0x5e: Return(); Pop(0)

