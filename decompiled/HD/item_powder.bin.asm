GlobalVarCount = 0

Strings:
	health
	disease
	add

Import:
	GetProperty (2 args)
	SetProperty (2 args)
	CreateFloatVector (1 args)
	SendWorldWndMessage (2 args)
	RumblePlay (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0


0x0: PushEmpty(float, float, float, float)
0x1: Push("health")
0x2: @ GetProperty(Stack[-1], Stack[-3])
0x3: Pop(1)
0x4: Push((float)0.05)
0x5: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x6: IF (Stack[-1] == 0) GOTO 0x10; Pop(1)

0x7: Push("health")
0x8: Push((float)0.05)
0x9: @ SetProperty(Stack[-2], Stack[-1])
0xa: Pop(2)
0xb: PushEmpty(float)
0xc: Push((float)0.05)
0xd: Stack[-2] = Stack[-1] - Stack[-4]; Pop(1);
0xe: Call2 0x26

0xf: Pop(1)
0x10: Push("disease")
0x11: @ GetProperty(Stack[-1], Stack[-2])
0x12: Pop(1)
0x13: Push("disease")
0x14: Push((int) 0)
0x15: @ SetProperty(Stack[-2], Stack[-1])
0x16: Pop(2)
0x17: PushEmpty(float)
0x18: Stack[-1] = -Stack[-2]; Pop(0);
0x19: Call2 0x1c

0x1a: Pop(1)
0x1b: Return(); Pop(4)

0x1c: PushEmpty(object, object)
0x1d: @ CreateFloatVector(Stack[-1])
0x1e: Pop(0)
0x1f: @@ add(Stack[-3])
0x20: Pop(0)
0x21: Push((int) 14)
0x22: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x23: Pop(1)
0x24: Return(); Pop(2)

0x25: Stack[-1] = 0
0x26: PushEmpty(object, object)
0x27: @ CreateFloatVector(Stack[-1])
0x28: Pop(0)
0x29: @@ add(Stack[-3])
0x2a: Pop(0)
0x2b: Push((int) 0)
0x2c: Pop(1); Push((bool) Stack[-4] < Stack[-1])
0x2d: IF (Stack[-1] == 0) GOTO 0x32; Pop(1)

0x2e: Push((float)0.7)
0x2f: Push((int) 500)
0x30: @ RumblePlay(Stack[-2], Stack[-1])
0x31: Pop(2)
0x32: Push((int) 15)
0x33: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x34: Pop(1)
0x35: Return(); Pop(2)

0x36: Stack[-1] = 0
