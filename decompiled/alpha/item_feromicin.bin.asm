GlobalVarCount = 0

Strings:
	health
	disease
	DiseaseSpeed
	hunger

Import:
	GetProperty (2 args)
	SetProperty (2 args)
	rand (1 args)
	GetGameTime (1 args)
	sync (0 args)
	HasProperty (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0


0x0: PushEmpty(float, float, float, float, float, float)
0x1: PushEmpty(bool, string, float, float, float)
0x2: Stack[-4] = "health"
0x3: Stack[-3] = (float) -0.25
0x4: Stack[-2] = (int) 0
0x5: Stack[-1] = (int) 1
0x6: Call 0x77

0x7: Pop(5)
0x8: PushEmpty(bool)
0x9: Call 0x2c

0xa: Pop(1)
0xb: Push("disease")
0xc: @ GetProperty(Stack[-1], Stack[-4])
0xd: Pop(1)
0xe: Push("disease")
0xf: Push((float)0.5)
0x10: Pop(1); Push(Stack[-5] * Stack[-1]);
0x11: @ SetProperty(Stack[-2], Stack[-1])
0x12: Pop(2)
0x13: Push("DiseaseSpeed")
0x14: @ GetProperty(Stack[-1], Stack[-3])
0x15: Pop(1)
0x16: Push((float)0.5)
0x17: Stack[-2] = Stack[-3] * Stack[-1]; Pop(1);
0x18: Push("DiseaseSpeed")
0x19: Pop(0); Push(Stack[-3] - Stack[-2]);
0x1a: @ SetProperty(Stack[-2], Stack[-1])
0x1b: Pop(2)
0x1c: PushEmpty()
0x1d: Call 0x27

0x1e: Pop(0)
0x1f: Push("DiseaseSpeed")
0x20: @ GetProperty(Stack[-1], Stack[-3])
0x21: Pop(1)
0x22: Push("DiseaseSpeed")
0x23: Pop(0); Push(Stack[-3] + Stack[-2]);
0x24: @ SetProperty(Stack[-2], Stack[-1])
0x25: Pop(2)
0x26: Return(); Pop(6)

0x27: PushEmpty(float)
0x28: Stack[-1] = (float) 6.0
0x29: Call 0x5a

0x2a: Pop(1)
0x2b: Return(); Pop(0)

0x2c: PushEmpty(float, float, float, float, float, float, float, float)
0x2d: Push("disease")
0x2e: @ GetProperty(Stack[-1], Stack[-5])
0x2f: Pop(1)
0x30: PushEmpty(bool)
0x31: Stack[-1] = (bool) 0
0x32: Push((float)0.8)
0x33: Pop(1); Push((bool) Stack[-6] >= Stack[-1])
0x34: IF (Stack[-1] == 0) GOTO 0x39; Pop(1)

0x35: Push((float)0.95)
0x36: Pop(1); Push((bool) Stack[-6] <= Stack[-1])
0x37: IF (Stack[-1] == 0) GOTO 0x39; Pop(1)

0x38: Stack[-1] = (bool) 1
0x39: IF (Stack[-1] == 0) GOTO 0x4d; Pop(1)

0x3a: Push("hunger")
0x3b: @ GetProperty(Stack[-1], Stack[-4])
0x3c: Pop(1)
0x3d: Push((float)0.33)
0x3e: Push((int) 1)
0x3f: Push((float)1.0)
0x40: Pop(1); Push(Stack[-1] * Stack[-6]);
0x41: Pop(2); Push(Stack[-2] + Stack[-1]);
0x42: Stack[-4] = Stack[-2] * Stack[-1]; Pop(2);
0x43: @ rand(Stack[-1])
0x44: Pop(0)
0x45: Pop(0); Push((bool) Stack[-1] < Stack[-2])
0x46: IF (Stack[-1] == 0) GOTO 0x4d; Pop(1)

0x47: Push("disease")
0x48: Push((int) 0)
0x49: @ SetProperty(Stack[-2], Stack[-1])
0x4a: Pop(2)
0x4b: Stack[-9] = (bool) 1
0x4c: Return(); Pop(8)

0x4d: Stack[-9] = (bool) 0
0x4e: Return(); Pop(8)

0x4f: PushEmpty()
0x50: PushEmpty(bool, string, float, float, float)
0x51: Stack[-4] = "health"
0x52: Push((float)-0.05)
0x53: Stack[-4] = Stack[-7] * Stack[-1]; Pop(1);
0x54: Stack[-2] = (int) 0
0x55: Stack[-1] = (int) 1
0x56: Call 0x77

0x57: Pop(5)
0x58: Stack[-2] = (bool) 0
0x59: Return(); Pop(0)

0x5a: PushEmpty(float, float, float, float, float, float, float, float)
0x5b: @ GetGameTime(Stack[-4])
0x5c: Pop(0)
0x5d: Stack[-3] = Stack[-4] + Stack[-9]; Pop(0);
0x5e: Stack[-2] = Stack[-4]
0x5f: @ sync()
0x60: Pop(0)
0x61: @ GetGameTime(Stack[-1])
0x62: Pop(0)
0x63: Pop(0); Push((bool) Stack[-1] <= Stack[-2])
0x64: IF (Stack[-1] == 0) GOTO 0x66; Pop(1)

0x65: GOTO 0x75

0x66: Pop(0); Push((bool) Stack[-1] >= Stack[-3])
0x67: IF (Stack[-1] == 0) GOTO 0x6e; Pop(1)

0x68: PushEmpty(bool, float)
0x69: Stack[-1] = Stack[-5] - Stack[-4]; Pop(0);
0x6a: Call 0x4f

0x6b: Pop(2)
0x6c: GOTO 0x76

0x6d: GOTO 0x75

0x6e: PushEmpty(bool, float)
0x6f: Stack[-1] = Stack[-3] - Stack[-4]; Pop(0);
0x70: Call 0x4f

0x71: Pop(1)
0x72: IF (Stack[-1] == 0) GOTO 0x74; Pop(1)

0x73: GOTO 0x76

0x74: Stack[-2] = Stack[-1]
0x75: GOTO 0x5f

0x76: Return(); Pop(8)

0x77: PushEmpty(bool, float, bool, float)
0x78: @ HasProperty(Stack[-8], Stack[-2])
0x79: Pop(0)
0x7a: Pop(0); Push((bool) Stack[-2] == 0)
0x7b: IF (Stack[-1] == 0) GOTO 0x7e; Pop(1)

0x7c: Stack[-9] = (bool) 0
0x7d: Return(); Pop(4)

0x7e: @ GetProperty(Stack[-8], Stack[-1])
0x7f: Pop(0)
0x80: PushEmpty(float, float, float, float)
0x81: Stack[-3] = Stack[-5] + Stack[-11]; Pop(0);
0x82: Stack[-2] = Stack[-10]
0x83: Stack[-1] = Stack[-9]
0x84: Call 0x8a

0x85: Pop(3)
0x86: @ SetProperty(Stack[-9], Stack[-1])
0x87: Pop(1)
0x88: Stack[-9] = (bool) 1
0x89: Return(); Pop(4)

0x8a: PushEmpty()
0x8b: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x8c: IF (Stack[-1] == 0) GOTO 0x8f; Pop(1)

0x8d: Stack[-4] = Stack[-2]
0x8e: Return(); Pop(0)

0x8f: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x90: IF (Stack[-1] == 0) GOTO 0x93; Pop(1)

0x91: Stack[-4] = Stack[-1]
0x92: Return(); Pop(0)

0x93: Stack[-4] = Stack[-3]
0x94: Return(); Pop(0)

