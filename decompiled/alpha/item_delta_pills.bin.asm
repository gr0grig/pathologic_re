GlobalVarCount = 0

Strings:
	health
	immunity
	disease
	hunger
	tiredness

Import:
	HasProperty (2 args)
	GetProperty (2 args)
	SetProperty (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0


0x0: PushEmpty(bool, string, float, float, float)
0x1: Stack[-4] = "health"
0x2: Stack[-3] = (float) -0.03
0x3: Stack[-2] = (int) 0
0x4: Stack[-1] = (int) 1
0x5: Call 0x24

0x6: Pop(5)
0x7: PushEmpty(bool, string, float, float, float)
0x8: Stack[-4] = "immunity"
0x9: Stack[-3] = (float) 0.2
0xa: Stack[-2] = (int) 0
0xb: Stack[-1] = (int) 1
0xc: Call 0x24

0xd: Pop(5)
0xe: PushEmpty(bool, string, float, float, float)
0xf: Stack[-4] = "disease"
0x10: Stack[-3] = (float) 0.0
0x11: Stack[-2] = (int) 0
0x12: Stack[-1] = (int) 1
0x13: Call 0x24

0x14: Pop(5)
0x15: PushEmpty(bool, string, float, float, float)
0x16: Stack[-4] = "hunger"
0x17: Stack[-3] = (float) 0.0
0x18: Stack[-2] = (int) 0
0x19: Stack[-1] = (int) 1
0x1a: Call 0x24

0x1b: Pop(5)
0x1c: PushEmpty(bool, string, float, float, float)
0x1d: Stack[-4] = "tiredness"
0x1e: Stack[-3] = (float) 0.0
0x1f: Stack[-2] = (int) 0
0x20: Stack[-1] = (int) 1
0x21: Call 0x24

0x22: Pop(5)
0x23: Return(); Pop(0)

0x24: PushEmpty(bool, float, bool, float)
0x25: @ HasProperty(Stack[-8], Stack[-2])
0x26: Pop(0)
0x27: Pop(0); Push((bool) Stack[-2] == 0)
0x28: IF (Stack[-1] == 0) GOTO 0x2b; Pop(1)

0x29: Stack[-9] = (bool) 0
0x2a: Return(); Pop(4)

0x2b: @ GetProperty(Stack[-8], Stack[-1])
0x2c: Pop(0)
0x2d: PushEmpty(float, float, float, float)
0x2e: Stack[-3] = Stack[-5] + Stack[-11]; Pop(0);
0x2f: Stack[-2] = Stack[-10]
0x30: Stack[-1] = Stack[-9]
0x31: Call 0x37

0x32: Pop(3)
0x33: @ SetProperty(Stack[-9], Stack[-1])
0x34: Pop(1)
0x35: Stack[-9] = (bool) 1
0x36: Return(); Pop(4)

0x37: PushEmpty()
0x38: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x39: IF (Stack[-1] == 0) GOTO 0x3c; Pop(1)

0x3a: Stack[-4] = Stack[-2]
0x3b: Return(); Pop(0)

0x3c: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x3d: IF (Stack[-1] == 0) GOTO 0x40; Pop(1)

0x3e: Stack[-4] = Stack[-1]
0x3f: Return(); Pop(0)

0x40: Stack[-4] = Stack[-3]
0x41: Return(); Pop(0)

