GlobalVarCount = 0

Strings:
	health
	add

Import:
	HasProperty (2 args)
	GetProperty (2 args)
	SetProperty (2 args)
	CreateFloatVector (1 args)
	SendWorldWndMessage (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0


0x0: PushEmpty(bool, string, float, float, float)
0x1: Stack[-4] = "health"
0x2: Stack[-3] = (float) 0.1
0x3: Stack[-2] = (int) 0
0x4: Stack[-1] = (int) 1
0x5: Call2 0xc

0x6: Pop(5)
0x7: PushEmpty(float)
0x8: Stack[-1] = (float) 0.1
0x9: Call2 0x2a

0xa: Pop(1)
0xb: Return(); Pop(0)

0xc: PushEmpty(bool, float, bool, float)
0xd: @ HasProperty(Stack[-8], Stack[-2])
0xe: Pop(0)
0xf: Pop(0); Push((bool) Stack[-2] == 0)
0x10: IF (Stack[-1] == 0) GOTO 0x13; Pop(1)

0x11: Stack[-9] = (bool) 0
0x12: Return(); Pop(4)

0x13: @ GetProperty(Stack[-8], Stack[-1])
0x14: Pop(0)
0x15: PushEmpty(float, float, float, float)
0x16: Stack[-3] = Stack[-5] + Stack[-11]; Pop(0);
0x17: Stack[-2] = Stack[-10]
0x18: Stack[-1] = Stack[-9]
0x19: Call2 0x1f

0x1a: Pop(3)
0x1b: @ SetProperty(Stack[-9], Stack[-1])
0x1c: Pop(1)
0x1d: Stack[-9] = (bool) 1
0x1e: Return(); Pop(4)

0x1f: PushEmpty()
0x20: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x21: IF (Stack[-1] == 0) GOTO 0x24; Pop(1)

0x22: Stack[-4] = Stack[-2]
0x23: Return(); Pop(0)

0x24: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x25: IF (Stack[-1] == 0) GOTO 0x28; Pop(1)

0x26: Stack[-4] = Stack[-1]
0x27: Return(); Pop(0)

0x28: Stack[-4] = Stack[-3]
0x29: Return(); Pop(0)

0x2a: PushEmpty(object, object)
0x2b: @ CreateFloatVector(Stack[-1])
0x2c: Pop(0)
0x2d: @@ add(Stack[-3])
0x2e: Pop(0)
0x2f: Push((int) 15)
0x30: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x31: Pop(1)
0x32: Return(); Pop(2)

0x33: Stack[-1] = 0
