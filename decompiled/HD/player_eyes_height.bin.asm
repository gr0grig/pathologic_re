GlobalVarCount = 0

Strings:

Import:
	GetEyesHeightCoef (1 args)
	sync (0 args)
	IsSneakEnabled (1 args)
	sync (1 args)
	SetEyesHeightCoef (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0


0x0: PushEmpty(bool, float, bool, float)
0x1: @ GetEyesHeightCoef(Stack[-1])
0x2: Pop(0)
0x3: Push((int) 1)
0x4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5: IF (Stack[-1] == 0) GOTO 0x12; Pop(1)

0x6: @ sync()
0x7: Pop(0)
0x8: @ IsSneakEnabled(Stack[-2])
0x9: Pop(0)
0xa: Push(Stack[-2])
0xb: IF (Stack[-1] == 0) GOTO 0xd; Pop(1)

0xc: GOTO 0xe

0xd: GOTO 0x6

0xe: PushEmpty()
0xf: Call2 0x1f

0x10: Pop(0)
0x11: GOTO 0x1d

0x12: @ IsSneakEnabled(Stack[-2])
0x13: Pop(0)
0x14: Push(Stack[-2])
0x15: IF (Stack[-1] == 0) GOTO 0x1a; Pop(1)

0x16: PushEmpty()
0x17: Call2 0x1f

0x18: Pop(0)
0x19: GOTO 0x1d

0x1a: PushEmpty()
0x1b: Call2 0x3a

0x1c: Pop(0)
0x1d: GOTO 0x1

0x1e: Return(); Pop(4)

0x1f: PushEmpty(bool, float, float, bool, float, float)
0x20: @ sync(Stack[-2])
0x21: Pop(0)
0x22: @ GetEyesHeightCoef(Stack[-1])
0x23: Pop(0)
0x24: Push((float)1.2)
0x25: Pop(1); Push(Stack[-1] * Stack[-3]);
0x26: Stack[-2] = Stack[-2] - Stack[-1]; Pop(1);
0x27: Push((float)0.8)
0x28: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x29: IF (Stack[-1] == 0) GOTO 0x2e; Pop(1)

0x2a: Push((float)0.8)
0x2b: @ SetEyesHeightCoef(Stack[-1])
0x2c: Pop(1)
0x2d: GOTO 0x31

0x2e: @ SetEyesHeightCoef(Stack[-1])
0x2f: Pop(0)
0x30: GOTO 0x20

0x31: @ sync()
0x32: Pop(0)
0x33: @ IsSneakEnabled(Stack[-3])
0x34: Pop(0)
0x35: Pop(0); Push((bool) Stack[-3] == 0)
0x36: IF (Stack[-1] == 0) GOTO 0x38; Pop(1)

0x37: GOTO 0x39

0x38: GOTO 0x31

0x39: Return(); Pop(6)

0x3a: PushEmpty(bool, float, float, bool, float, float)
0x3b: @ sync(Stack[-2])
0x3c: Pop(0)
0x3d: @ GetEyesHeightCoef(Stack[-1])
0x3e: Pop(0)
0x3f: Push((float)1.2)
0x40: Pop(1); Push(Stack[-1] * Stack[-3]);
0x41: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x42: Push((int) 1)
0x43: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x44: IF (Stack[-1] == 0) GOTO 0x46; Pop(1)

0x45: GOTO 0x49

0x46: @ SetEyesHeightCoef(Stack[-1])
0x47: Pop(0)
0x48: GOTO 0x3b

0x49: Push((int) 1)
0x4a: @ SetEyesHeightCoef(Stack[-1])
0x4b: Pop(1)
0x4c: Return(); Pop(6)

