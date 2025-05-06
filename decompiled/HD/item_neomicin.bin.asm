GlobalVarCount = 0

Strings:
	disease
	tiredness
	health
	add

Import:
	GetProperty (2 args)
	SetProperty (2 args)
	HasProperty (2 args)
	CreateFloatVector (1 args)
	SendWorldWndMessage (2 args)
	RumblePlay (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0


0x0: PushEmpty(float, float)
0x1: Push("disease")
0x2: @ GetProperty(Stack[-1], Stack[-2])
0x3: Pop(1)
0x4: Push("disease")
0x5: Push((float)0.6)
0x6: Pop(1); Push(Stack[-3] * Stack[-1]);
0x7: @ SetProperty(Stack[-2], Stack[-1])
0x8: Pop(2)
0x9: PushEmpty(float)
0xa: Push((float)0.6)
0xb: Pop(1); Push(Stack[-3] * Stack[-1]);
0xc: Stack[-2] = Stack[-3] - Stack[-1]; Pop(1);
0xd: Call2 0x4e

0xe: Pop(1)
0xf: PushEmpty(bool, string, float, float, float)
0x10: Stack[-4] = "tiredness"
0x11: Stack[-3] = (float) 0.15
0x12: Stack[-2] = (int) 0
0x13: Stack[-1] = (int) 1
0x14: Call2 0x26

0x15: Pop(5)
0x16: PushEmpty(float)
0x17: Stack[-1] = (float) 0.15
0x18: Call2 0x44

0x19: Pop(1)
0x1a: PushEmpty(bool, string, float, float, float)
0x1b: Stack[-4] = "health"
0x1c: Stack[-3] = (float) -0.15
0x1d: Stack[-2] = (int) 0
0x1e: Stack[-1] = (int) 1
0x1f: Call2 0x26

0x20: Pop(5)
0x21: PushEmpty(float)
0x22: Stack[-1] = (float) -0.15
0x23: Call2 0x58

0x24: Pop(1)
0x25: Return(); Pop(2)

0x26: PushEmpty(bool, float, bool, float)
0x27: @ HasProperty(Stack[-8], Stack[-2])
0x28: Pop(0)
0x29: Pop(0); Push((bool) Stack[-2] == 0)
0x2a: IF (Stack[-1] == 0) GOTO 0x2d; Pop(1)

0x2b: Stack[-9] = (bool) 0
0x2c: Return(); Pop(4)

0x2d: @ GetProperty(Stack[-8], Stack[-1])
0x2e: Pop(0)
0x2f: PushEmpty(float, float, float, float)
0x30: Stack[-3] = Stack[-5] + Stack[-11]; Pop(0);
0x31: Stack[-2] = Stack[-10]
0x32: Stack[-1] = Stack[-9]
0x33: Call2 0x39

0x34: Pop(3)
0x35: @ SetProperty(Stack[-9], Stack[-1])
0x36: Pop(1)
0x37: Stack[-9] = (bool) 1
0x38: Return(); Pop(4)

0x39: PushEmpty()
0x3a: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x3b: IF (Stack[-1] == 0) GOTO 0x3e; Pop(1)

0x3c: Stack[-4] = Stack[-2]
0x3d: Return(); Pop(0)

0x3e: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x3f: IF (Stack[-1] == 0) GOTO 0x42; Pop(1)

0x40: Stack[-4] = Stack[-1]
0x41: Return(); Pop(0)

0x42: Stack[-4] = Stack[-3]
0x43: Return(); Pop(0)

0x44: PushEmpty(object, object)
0x45: @ CreateFloatVector(Stack[-1])
0x46: Pop(0)
0x47: @@ add(Stack[-3])
0x48: Pop(0)
0x49: Push((int) 11)
0x4a: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x4b: Pop(1)
0x4c: Return(); Pop(2)

0x4d: Stack[-1] = 0
0x4e: PushEmpty(object, object)
0x4f: @ CreateFloatVector(Stack[-1])
0x50: Pop(0)
0x51: @@ add(Stack[-3])
0x52: Pop(0)
0x53: Push((int) 14)
0x54: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x55: Pop(1)
0x56: Return(); Pop(2)

0x57: Stack[-1] = 0
0x58: PushEmpty(object, object)
0x59: @ CreateFloatVector(Stack[-1])
0x5a: Pop(0)
0x5b: @@ add(Stack[-3])
0x5c: Pop(0)
0x5d: Push((int) 0)
0x5e: Pop(1); Push((bool) Stack[-4] < Stack[-1])
0x5f: IF (Stack[-1] == 0) GOTO 0x64; Pop(1)

0x60: Push((float)0.7)
0x61: Push((int) 500)
0x62: @ RumblePlay(Stack[-2], Stack[-1])
0x63: Pop(2)
0x64: Push((int) 15)
0x65: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x66: Pop(1)
0x67: Return(); Pop(2)

0x68: Stack[-1] = 0
