GlobalVarCount = 0

Strings:
	k6q01
	k6q01ItemsRemoved
	reputation
	sleeping
	add

Import:
	GetVariable (2 args)
	GetGameTime (1 args)
	sync (0 args)
	HasProperty (2 args)
	GetProperty (2 args)
	SetProperty (2 args)
	CreateFloatVector (1 args)
	SendWorldWndMessage (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (bool) Params = 0


0x0: PushEmpty(float)
0x1: Stack[-1] = (int) 288
0x2: Call2 0x39

0x3: Pop(1)
0x4: Return(); Pop(0)

0x5: PushEmpty(float, int, int, float, int, int)
0x6: PushEmpty(bool)
0x7: Call2 0x6c

0x8: Pop(0)
0x9: Pop(1); Push((bool) Stack[-1] == 0)
0xa: IF (Stack[-1] == 0) GOTO 0x37; Pop(1)

0xb: Pop(0); Push(( -Stack[-7])
0xc: Push((float)36.0)
0xd: Stack[-5] = Stack[-2] / Stack[-1]; Pop(2);
0xe: PushEmpty(bool, int)
0xf: Stack[-1] = (int) 6
0x10: Call2 0x97

0x11: Pop(1)
0x12: IF (Stack[-1] == 0) GOTO 0x2c; Pop(1)

0x13: Push("k6q01")
0x14: @ GetVariable(Stack[-1], Stack[-3])
0x15: Pop(1)
0x16: Push((int) 1000)
0x17: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x18: IF (Stack[-1] == 0) GOTO 0x2c; Pop(1)

0x19: Push((float)2.0)
0x1a: Stack[-4] = Stack[-4] * Stack[-1]; Pop(1);
0x1b: Push((int) 1)
0x1c: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x1d: IF (Stack[-1] == 0) GOTO 0x20; Pop(1)

0x1e: Push((float)3.0)
0x1f: Stack[-4] = Stack[-4] * Stack[-1]; Pop(1);
0x20: Push((int) 2)
0x21: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x22: IF (Stack[-1] == 0) GOTO 0x25; Pop(1)

0x23: Push((float)4.0)
0x24: Stack[-4] = Stack[-4] * Stack[-1]; Pop(1);
0x25: Push("k6q01ItemsRemoved")
0x26: @ GetVariable(Stack[-1], Stack[-2])
0x27: Pop(1)
0x28: Push(Stack[-1])
0x29: IF (Stack[-1] == 0) GOTO 0x2c; Pop(1)

0x2a: Push((float)4.0)
0x2b: Stack[-4] = Stack[-4] / Stack[-1]; Pop(1);
0x2c: PushEmpty(bool, string, float, float, float)
0x2d: Stack[-4] = "reputation"
0x2e: Stack[-3] = Stack[-8]
0x2f: Stack[-2] = (int) 0
0x30: Stack[-1] = (int) 1
0x31: Call2 0x59

0x32: Pop(5)
0x33: PushEmpty(float)
0x34: Stack[-1] = Stack[-4]
0x35: Call2 0x84

0x36: Pop(1)
0x37: Stack[-8] = (bool) 0
0x38: Return(); Pop(6)

0x39: PushEmpty(float, float, float, float, float, float, float, float)
0x3a: @ GetGameTime(Stack[-4])
0x3b: Pop(0)
0x3c: Stack[-3] = Stack[-4] + Stack[-9]; Pop(0);
0x3d: Stack[-2] = Stack[-4]
0x3e: @ sync()
0x3f: Pop(0)
0x40: Push( Stack[0 + Tasks[-1].StackPointer] )
0x41: IF (Stack[-1] == 0) GOTO 0x43; Pop(1)

0x42: GOTO 0x58

0x43: @ GetGameTime(Stack[-1])
0x44: Pop(0)
0x45: Pop(0); Push((bool) Stack[-1] <= Stack[-2])
0x46: IF (Stack[-1] == 0) GOTO 0x48; Pop(1)

0x47: GOTO 0x57

0x48: Pop(0); Push((bool) Stack[-1] >= Stack[-3])
0x49: IF (Stack[-1] == 0) GOTO 0x50; Pop(1)

0x4a: PushEmpty(bool, float)
0x4b: Stack[-1] = Stack[-5] - Stack[-4]; Pop(0);
0x4c: Call2 0x5

0x4d: Pop(2)
0x4e: GOTO 0x58

0x4f: GOTO 0x57

0x50: PushEmpty(bool, float)
0x51: Stack[-1] = Stack[-3] - Stack[-4]; Pop(0);
0x52: Call2 0x5

0x53: Pop(1)
0x54: IF (Stack[-1] == 0) GOTO 0x56; Pop(1)

0x55: GOTO 0x58

0x56: Stack[-2] = Stack[-1]
0x57: GOTO 0x3e

0x58: Return(); Pop(8)

0x59: PushEmpty(bool, float, bool, float)
0x5a: @ HasProperty(Stack[-8], Stack[-2])
0x5b: Pop(0)
0x5c: Pop(0); Push((bool) Stack[-2] == 0)
0x5d: IF (Stack[-1] == 0) GOTO 0x60; Pop(1)

0x5e: Stack[-9] = (bool) 0
0x5f: Return(); Pop(4)

0x60: @ GetProperty(Stack[-8], Stack[-1])
0x61: Pop(0)
0x62: PushEmpty(float, float, float, float)
0x63: Stack[-3] = Stack[-5] + Stack[-11]; Pop(0);
0x64: Stack[-2] = Stack[-10]
0x65: Stack[-1] = Stack[-9]
0x66: Call2 0x79

0x67: Pop(3)
0x68: @ SetProperty(Stack[-9], Stack[-1])
0x69: Pop(1)
0x6a: Stack[-9] = (bool) 1
0x6b: Return(); Pop(4)

0x6c: PushEmpty(bool, bool, bool, bool)
0x6d: Push("sleeping")
0x6e: @ HasProperty(Stack[-1], Stack[-3])
0x6f: Pop(1)
0x70: Pop(0); Push((bool) Stack[-2] == 0)
0x71: IF (Stack[-1] == 0) GOTO 0x74; Pop(1)

0x72: Stack[-5] = (bool) 0
0x73: Return(); Pop(4)

0x74: Push("sleeping")
0x75: @ GetProperty(Stack[-1], Stack[-2])
0x76: Pop(1)
0x77: Stack[-5] = Stack[-1]
0x78: Return(); Pop(4)

0x79: PushEmpty()
0x7a: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x7b: IF (Stack[-1] == 0) GOTO 0x7e; Pop(1)

0x7c: Stack[-4] = Stack[-2]
0x7d: Return(); Pop(0)

0x7e: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x7f: IF (Stack[-1] == 0) GOTO 0x82; Pop(1)

0x80: Stack[-4] = Stack[-1]
0x81: Return(); Pop(0)

0x82: Stack[-4] = Stack[-3]
0x83: Return(); Pop(0)

0x84: PushEmpty(object, object)
0x85: @ CreateFloatVector(Stack[-1])
0x86: Pop(0)
0x87: @@ add(Stack[-3])
0x88: Pop(0)
0x89: Push((int) 16)
0x8a: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x8b: Pop(1)
0x8c: Return(); Pop(2)

0x8d: Stack[-1] = 0
0x8e: PushEmpty(float, float)
0x8f: @ GetGameTime(Stack[-1])
0x90: Pop(0)
0x91: Push((int) 1)
0x92: PushEmpty(int)
0x93: Push((int) 24)
0x94: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x95: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x96: Return(); Pop(2)

0x97: PushEmpty()
0x98: PushEmpty(int)
0x99: Call2 0x8e

0x9a: Pop(0)
0x9b: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0x9c: Return(); Pop(0)

