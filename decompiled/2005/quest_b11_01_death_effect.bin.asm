GlobalVarCount = 0

Strings:
	health
	add

Import:
	sync (1 args)
	Trace (1 args)
	HasProperty (2 args)
	GetProperty (2 args)
	SetProperty (2 args)
	CreateFloatVector (1 args)
	SendWorldWndMessage (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (bool) Params = 0


0x0: PushEmpty(float, float)
0x1: @ sync(Stack[-1])
0x2: Pop(0)
0x3: Pop(0); Push(( -Stack[-1])
0x4: Push((float)4.0)
0x5: Pop(2); Push(Stack[-2] / Stack[-1]);
0x6: @ Trace(Stack[-1])
0x7: Pop(1)
0x8: PushEmpty(bool, string, float, float, float)
0x9: Stack[-4] = "health"
0xa: Pop(0); Push(( -Stack[-6])
0xb: Push((float)2.0)
0xc: Stack[-5] = Stack[-2] / Stack[-1]; Pop(2);
0xd: Stack[-2] = (int) 0
0xe: Stack[-1] = (int) 1
0xf: Call2 0x19

0x10: Pop(5)
0x11: PushEmpty(float)
0x12: Pop(0); Push(( -Stack[-2])
0x13: Push((float)3.0)
0x14: Stack[-3] = Stack[-2] / Stack[-1]; Pop(2);
0x15: Call2 0x37

0x16: Pop(1)
0x17: GOTO 0x1

0x18: Return(); Pop(2)

0x19: PushEmpty(bool, float, bool, float)
0x1a: @ HasProperty(Stack[-8], Stack[-2])
0x1b: Pop(0)
0x1c: Pop(0); Push((bool) Stack[-2] == 0)
0x1d: IF (Stack[-1] == 0) GOTO 0x20; Pop(1)

0x1e: Stack[-9] = (bool) 0
0x1f: Return(); Pop(4)

0x20: @ GetProperty(Stack[-8], Stack[-1])
0x21: Pop(0)
0x22: PushEmpty(float, float, float, float)
0x23: Stack[-3] = Stack[-5] + Stack[-11]; Pop(0);
0x24: Stack[-2] = Stack[-10]
0x25: Stack[-1] = Stack[-9]
0x26: Call2 0x2c

0x27: Pop(3)
0x28: @ SetProperty(Stack[-9], Stack[-1])
0x29: Pop(1)
0x2a: Stack[-9] = (bool) 1
0x2b: Return(); Pop(4)

0x2c: PushEmpty()
0x2d: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x2e: IF (Stack[-1] == 0) GOTO 0x31; Pop(1)

0x2f: Stack[-4] = Stack[-2]
0x30: Return(); Pop(0)

0x31: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x32: IF (Stack[-1] == 0) GOTO 0x35; Pop(1)

0x33: Stack[-4] = Stack[-1]
0x34: Return(); Pop(0)

0x35: Stack[-4] = Stack[-3]
0x36: Return(); Pop(0)

0x37: PushEmpty(object, object)
0x38: @ CreateFloatVector(Stack[-1])
0x39: Pop(0)
0x3a: @@ add(Stack[-3])
0x3b: Pop(0)
0x3c: Push((int) 15)
0x3d: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x3e: Pop(1)
0x3f: Return(); Pop(2)

0x40: Stack[-1] = 0
