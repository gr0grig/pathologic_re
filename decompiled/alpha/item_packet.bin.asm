GlobalVarCount = 0

Strings:
	health

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
0x2: Stack[-3] = (float) 0.3
0x3: Stack[-2] = (int) 0
0x4: Stack[-1] = (int) 1
0x5: Call 0x8

0x6: Pop(5)
0x7: Return(); Pop(0)

0x8: PushEmpty(bool, float, bool, float)
0x9: @ HasProperty(Stack[-8], Stack[-2])
0xa: Pop(0)
0xb: Pop(0); Push((bool) Stack[-2] == 0)
0xc: IF (Stack[-1] == 0) GOTO 0xf; Pop(1)

0xd: Stack[-9] = (bool) 0
0xe: Return(); Pop(4)

0xf: @ GetProperty(Stack[-8], Stack[-1])
0x10: Pop(0)
0x11: PushEmpty(float, float, float, float)
0x12: Stack[-3] = Stack[-5] + Stack[-11]; Pop(0);
0x13: Stack[-2] = Stack[-10]
0x14: Stack[-1] = Stack[-9]
0x15: Call 0x1b

0x16: Pop(3)
0x17: @ SetProperty(Stack[-9], Stack[-1])
0x18: Pop(1)
0x19: Stack[-9] = (bool) 1
0x1a: Return(); Pop(4)

0x1b: PushEmpty()
0x1c: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x1d: IF (Stack[-1] == 0) GOTO 0x20; Pop(1)

0x1e: Stack[-4] = Stack[-2]
0x1f: Return(); Pop(0)

0x20: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x21: IF (Stack[-1] == 0) GOTO 0x24; Pop(1)

0x22: Stack[-4] = Stack[-1]
0x23: Return(); Pop(0)

0x24: Stack[-4] = Stack[-3]
0x25: Return(); Pop(0)

