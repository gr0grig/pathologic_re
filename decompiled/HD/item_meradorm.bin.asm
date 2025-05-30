GlobalVarCount = 0

Strings:
	health
	tiredness
	sleeping
	add

Import:
	GetGameTime (1 args)
	sync (0 args)
	HasProperty (2 args)
	GetProperty (2 args)
	SetProperty (2 args)
	CreateFloatVector (1 args)
	SendWorldWndMessage (2 args)
	RumblePlay (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (bool) Params = 0


0x0: PushEmpty(bool, string, float, float, float)
0x1: Stack[-4] = "health"
0x2: Stack[-3] = (float) 0.03
0x3: Stack[-2] = (int) 0
0x4: Stack[-1] = (int) 1
0x5: Call2 0x52

0x6: Pop(5)
0x7: PushEmpty(float)
0x8: Stack[-1] = (float) 0.03
0x9: Call2 0x87

0xa: Pop(1)
0xb: PushEmpty(bool, string, float, float, float)
0xc: Stack[-4] = "tiredness"
0xd: Stack[-3] = (float) 0.25
0xe: Stack[-2] = (int) 0
0xf: Stack[-1] = (int) 1
0x10: Call2 0x52

0x11: Pop(5)
0x12: PushEmpty(float)
0x13: Stack[-1] = (float) 0.25
0x14: Call2 0x7d

0x15: Pop(1)
0x16: PushEmpty(float)
0x17: Stack[-1] = (float) 5.0
0x18: Call2 0x32

0x19: Pop(1)
0x1a: Return(); Pop(0)

0x1b: PushEmpty()
0x1c: PushEmpty(bool)
0x1d: Call2 0x65

0x1e: Pop(0)
0x1f: IF (Stack[-1] == 0) GOTO 0x30; Pop(1)

0x20: PushEmpty(bool, string, float, float, float)
0x21: Stack[-4] = "health"
0x22: Push((float)0.08)
0x23: Stack[-4] = Stack[-7] * Stack[-1]; Pop(1);
0x24: Stack[-2] = (int) 0
0x25: Stack[-1] = (int) 1
0x26: Call2 0x52

0x27: Pop(5)
0x28: PushEmpty(bool, string, float, float, float)
0x29: Stack[-4] = "tiredness"
0x2a: Push((float)-0.05)
0x2b: Stack[-4] = Stack[-7] * Stack[-1]; Pop(1);
0x2c: Stack[-2] = (int) 0
0x2d: Stack[-1] = (int) 1
0x2e: Call2 0x52

0x2f: Pop(5)
0x30: Stack[-2] = (bool) 0
0x31: Return(); Pop(0)

0x32: PushEmpty(float, float, float, float, float, float, float, float)
0x33: @ GetGameTime(Stack[-4])
0x34: Pop(0)
0x35: Stack[-3] = Stack[-4] + Stack[-9]; Pop(0);
0x36: Stack[-2] = Stack[-4]
0x37: @ sync()
0x38: Pop(0)
0x39: Push( Stack[0 + Tasks[-1].StackPointer] )
0x3a: IF (Stack[-1] == 0) GOTO 0x3c; Pop(1)

0x3b: GOTO 0x51

0x3c: @ GetGameTime(Stack[-1])
0x3d: Pop(0)
0x3e: Pop(0); Push((bool) Stack[-1] <= Stack[-2])
0x3f: IF (Stack[-1] == 0) GOTO 0x41; Pop(1)

0x40: GOTO 0x50

0x41: Pop(0); Push((bool) Stack[-1] >= Stack[-3])
0x42: IF (Stack[-1] == 0) GOTO 0x49; Pop(1)

0x43: PushEmpty(bool, float)
0x44: Stack[-1] = Stack[-5] - Stack[-4]; Pop(0);
0x45: Call2 0x1b

0x46: Pop(2)
0x47: GOTO 0x51

0x48: GOTO 0x50

0x49: PushEmpty(bool, float)
0x4a: Stack[-1] = Stack[-3] - Stack[-4]; Pop(0);
0x4b: Call2 0x1b

0x4c: Pop(1)
0x4d: IF (Stack[-1] == 0) GOTO 0x4f; Pop(1)

0x4e: GOTO 0x51

0x4f: Stack[-2] = Stack[-1]
0x50: GOTO 0x37

0x51: Return(); Pop(8)

0x52: PushEmpty(bool, float, bool, float)
0x53: @ HasProperty(Stack[-8], Stack[-2])
0x54: Pop(0)
0x55: Pop(0); Push((bool) Stack[-2] == 0)
0x56: IF (Stack[-1] == 0) GOTO 0x59; Pop(1)

0x57: Stack[-9] = (bool) 0
0x58: Return(); Pop(4)

0x59: @ GetProperty(Stack[-8], Stack[-1])
0x5a: Pop(0)
0x5b: PushEmpty(float, float, float, float)
0x5c: Stack[-3] = Stack[-5] + Stack[-11]; Pop(0);
0x5d: Stack[-2] = Stack[-10]
0x5e: Stack[-1] = Stack[-9]
0x5f: Call2 0x72

0x60: Pop(3)
0x61: @ SetProperty(Stack[-9], Stack[-1])
0x62: Pop(1)
0x63: Stack[-9] = (bool) 1
0x64: Return(); Pop(4)

0x65: PushEmpty(bool, bool, bool, bool)
0x66: Push("sleeping")
0x67: @ HasProperty(Stack[-1], Stack[-3])
0x68: Pop(1)
0x69: Pop(0); Push((bool) Stack[-2] == 0)
0x6a: IF (Stack[-1] == 0) GOTO 0x6d; Pop(1)

0x6b: Stack[-5] = (bool) 0
0x6c: Return(); Pop(4)

0x6d: Push("sleeping")
0x6e: @ GetProperty(Stack[-1], Stack[-2])
0x6f: Pop(1)
0x70: Stack[-5] = Stack[-1]
0x71: Return(); Pop(4)

0x72: PushEmpty()
0x73: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x74: IF (Stack[-1] == 0) GOTO 0x77; Pop(1)

0x75: Stack[-4] = Stack[-2]
0x76: Return(); Pop(0)

0x77: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x78: IF (Stack[-1] == 0) GOTO 0x7b; Pop(1)

0x79: Stack[-4] = Stack[-1]
0x7a: Return(); Pop(0)

0x7b: Stack[-4] = Stack[-3]
0x7c: Return(); Pop(0)

0x7d: PushEmpty(object, object)
0x7e: @ CreateFloatVector(Stack[-1])
0x7f: Pop(0)
0x80: @@ add(Stack[-3])
0x81: Pop(0)
0x82: Push((int) 11)
0x83: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x84: Pop(1)
0x85: Return(); Pop(2)

0x86: Stack[-1] = 0
0x87: PushEmpty(object, object)
0x88: @ CreateFloatVector(Stack[-1])
0x89: Pop(0)
0x8a: @@ add(Stack[-3])
0x8b: Pop(0)
0x8c: Push((int) 0)
0x8d: Pop(1); Push((bool) Stack[-4] < Stack[-1])
0x8e: IF (Stack[-1] == 0) GOTO 0x93; Pop(1)

0x8f: Push((float)0.7)
0x90: Push((int) 500)
0x91: @ RumblePlay(Stack[-2], Stack[-1])
0x92: Pop(2)
0x93: Push((int) 15)
0x94: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x95: Pop(1)
0x96: Return(); Pop(2)

0x97: Stack[-1] = 0
