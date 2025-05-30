GlobalVarCount = 0

Strings:
	health
	immunity
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
0x2: Stack[-3] = (float) 0.05
0x3: Stack[-2] = (int) 0
0x4: Stack[-1] = (int) 1
0x5: Call2 0x55

0x6: Pop(5)
0x7: PushEmpty(float)
0x8: Stack[-1] = (float) 0.05
0x9: Call2 0x94

0xa: Pop(1)
0xb: PushEmpty(bool, string, float, float, float)
0xc: Stack[-4] = "immunity"
0xd: Stack[-3] = (float) 0.05
0xe: Stack[-2] = (int) 0
0xf: Stack[-1] = (int) 1
0x10: Call2 0x55

0x11: Pop(5)
0x12: PushEmpty(float)
0x13: Stack[-1] = (float) 0.05
0x14: Call2 0x8a

0x15: Pop(1)
0x16: PushEmpty(bool, string, float, float, float)
0x17: Stack[-4] = "tiredness"
0x18: Stack[-3] = (float) 0.05
0x19: Stack[-2] = (int) 0
0x1a: Stack[-1] = (int) 1
0x1b: Call2 0x55

0x1c: Pop(5)
0x1d: PushEmpty(float)
0x1e: Stack[-1] = (float) 0.05
0x1f: Call2 0x80

0x20: Pop(1)
0x21: PushEmpty(float)
0x22: Stack[-1] = (float) 12.0
0x23: Call2 0x35

0x24: Pop(1)
0x25: Return(); Pop(0)

0x26: PushEmpty()
0x27: PushEmpty(bool)
0x28: Call2 0x68

0x29: Pop(0)
0x2a: IF (Stack[-1] == 0) GOTO 0x33; Pop(1)

0x2b: PushEmpty(bool, string, float, float, float)
0x2c: Stack[-4] = "tiredness"
0x2d: Push((float)-0.1)
0x2e: Stack[-4] = Stack[-7] * Stack[-1]; Pop(1);
0x2f: Stack[-2] = (int) 0
0x30: Stack[-1] = (int) 1
0x31: Call2 0x55

0x32: Pop(5)
0x33: Stack[-2] = (bool) 0
0x34: Return(); Pop(0)

0x35: PushEmpty(float, float, float, float, float, float, float, float)
0x36: @ GetGameTime(Stack[-4])
0x37: Pop(0)
0x38: Stack[-3] = Stack[-4] + Stack[-9]; Pop(0);
0x39: Stack[-2] = Stack[-4]
0x3a: @ sync()
0x3b: Pop(0)
0x3c: Push( Stack[0 + Tasks[-1].StackPointer] )
0x3d: IF (Stack[-1] == 0) GOTO 0x3f; Pop(1)

0x3e: GOTO 0x54

0x3f: @ GetGameTime(Stack[-1])
0x40: Pop(0)
0x41: Pop(0); Push((bool) Stack[-1] <= Stack[-2])
0x42: IF (Stack[-1] == 0) GOTO 0x44; Pop(1)

0x43: GOTO 0x53

0x44: Pop(0); Push((bool) Stack[-1] >= Stack[-3])
0x45: IF (Stack[-1] == 0) GOTO 0x4c; Pop(1)

0x46: PushEmpty(bool, float)
0x47: Stack[-1] = Stack[-5] - Stack[-4]; Pop(0);
0x48: Call2 0x26

0x49: Pop(2)
0x4a: GOTO 0x54

0x4b: GOTO 0x53

0x4c: PushEmpty(bool, float)
0x4d: Stack[-1] = Stack[-3] - Stack[-4]; Pop(0);
0x4e: Call2 0x26

0x4f: Pop(1)
0x50: IF (Stack[-1] == 0) GOTO 0x52; Pop(1)

0x51: GOTO 0x54

0x52: Stack[-2] = Stack[-1]
0x53: GOTO 0x3a

0x54: Return(); Pop(8)

0x55: PushEmpty(bool, float, bool, float)
0x56: @ HasProperty(Stack[-8], Stack[-2])
0x57: Pop(0)
0x58: Pop(0); Push((bool) Stack[-2] == 0)
0x59: IF (Stack[-1] == 0) GOTO 0x5c; Pop(1)

0x5a: Stack[-9] = (bool) 0
0x5b: Return(); Pop(4)

0x5c: @ GetProperty(Stack[-8], Stack[-1])
0x5d: Pop(0)
0x5e: PushEmpty(float, float, float, float)
0x5f: Stack[-3] = Stack[-5] + Stack[-11]; Pop(0);
0x60: Stack[-2] = Stack[-10]
0x61: Stack[-1] = Stack[-9]
0x62: Call2 0x75

0x63: Pop(3)
0x64: @ SetProperty(Stack[-9], Stack[-1])
0x65: Pop(1)
0x66: Stack[-9] = (bool) 1
0x67: Return(); Pop(4)

0x68: PushEmpty(bool, bool, bool, bool)
0x69: Push("sleeping")
0x6a: @ HasProperty(Stack[-1], Stack[-3])
0x6b: Pop(1)
0x6c: Pop(0); Push((bool) Stack[-2] == 0)
0x6d: IF (Stack[-1] == 0) GOTO 0x70; Pop(1)

0x6e: Stack[-5] = (bool) 0
0x6f: Return(); Pop(4)

0x70: Push("sleeping")
0x71: @ GetProperty(Stack[-1], Stack[-2])
0x72: Pop(1)
0x73: Stack[-5] = Stack[-1]
0x74: Return(); Pop(4)

0x75: PushEmpty()
0x76: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x77: IF (Stack[-1] == 0) GOTO 0x7a; Pop(1)

0x78: Stack[-4] = Stack[-2]
0x79: Return(); Pop(0)

0x7a: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x7b: IF (Stack[-1] == 0) GOTO 0x7e; Pop(1)

0x7c: Stack[-4] = Stack[-1]
0x7d: Return(); Pop(0)

0x7e: Stack[-4] = Stack[-3]
0x7f: Return(); Pop(0)

0x80: PushEmpty(object, object)
0x81: @ CreateFloatVector(Stack[-1])
0x82: Pop(0)
0x83: @@ add(Stack[-3])
0x84: Pop(0)
0x85: Push((int) 11)
0x86: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x87: Pop(1)
0x88: Return(); Pop(2)

0x89: Stack[-1] = 0
0x8a: PushEmpty(object, object)
0x8b: @ CreateFloatVector(Stack[-1])
0x8c: Pop(0)
0x8d: @@ add(Stack[-3])
0x8e: Pop(0)
0x8f: Push((int) 13)
0x90: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x91: Pop(1)
0x92: Return(); Pop(2)

0x93: Stack[-1] = 0
0x94: PushEmpty(object, object)
0x95: @ CreateFloatVector(Stack[-1])
0x96: Pop(0)
0x97: @@ add(Stack[-3])
0x98: Pop(0)
0x99: Push((int) 0)
0x9a: Pop(1); Push((bool) Stack[-4] < Stack[-1])
0x9b: IF (Stack[-1] == 0) GOTO 0xa0; Pop(1)

0x9c: Push((float)0.7)
0x9d: Push((int) 500)
0x9e: @ RumblePlay(Stack[-2], Stack[-1])
0x9f: Pop(2)
0xa0: Push((int) 15)
0xa1: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0xa2: Pop(1)
0xa3: Return(); Pop(2)

0xa4: Stack[-1] = 0
