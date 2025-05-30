GlobalVarCount = 0

Strings:
	health
	DiseaseSpeed
	disease
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


0x0: PushEmpty(float, float, float, float)
0x1: PushEmpty(bool)
0x2: Call 0x24

0x3: Pop(1)
0x4: PushEmpty(bool, string, float, float, float)
0x5: Stack[-4] = "health"
0x6: Stack[-3] = (float) -0.05
0x7: Stack[-2] = (int) 0
0x8: Stack[-1] = (int) 1
0x9: Call 0x6f

0xa: Pop(5)
0xb: Push("DiseaseSpeed")
0xc: @ GetProperty(Stack[-1], Stack[-3])
0xd: Pop(1)
0xe: Push((float)0.5)
0xf: Stack[-2] = Stack[-3] * Stack[-1]; Pop(1);
0x10: Push("DiseaseSpeed")
0x11: Pop(0); Push(Stack[-3] - Stack[-2]);
0x12: @ SetProperty(Stack[-2], Stack[-1])
0x13: Pop(2)
0x14: PushEmpty()
0x15: Call 0x1f

0x16: Pop(0)
0x17: Push("DiseaseSpeed")
0x18: @ GetProperty(Stack[-1], Stack[-3])
0x19: Pop(1)
0x1a: Push("DiseaseSpeed")
0x1b: Pop(0); Push(Stack[-3] + Stack[-2]);
0x1c: @ SetProperty(Stack[-2], Stack[-1])
0x1d: Pop(2)
0x1e: Return(); Pop(4)

0x1f: PushEmpty(float)
0x20: Stack[-1] = (float) 6.0
0x21: Call 0x52

0x22: Pop(1)
0x23: Return(); Pop(0)

0x24: PushEmpty(float, float, float, float, float, float, float, float)
0x25: Push("disease")
0x26: @ GetProperty(Stack[-1], Stack[-5])
0x27: Pop(1)
0x28: PushEmpty(bool)
0x29: Stack[-1] = (bool) 0
0x2a: Push((float)0.3)
0x2b: Pop(1); Push((bool) Stack[-6] >= Stack[-1])
0x2c: IF (Stack[-1] == 0) GOTO 0x31; Pop(1)

0x2d: Push((float)0.6)
0x2e: Pop(1); Push((bool) Stack[-6] <= Stack[-1])
0x2f: IF (Stack[-1] == 0) GOTO 0x31; Pop(1)

0x30: Stack[-1] = (bool) 1
0x31: IF (Stack[-1] == 0) GOTO 0x45; Pop(1)

0x32: Push("hunger")
0x33: @ GetProperty(Stack[-1], Stack[-4])
0x34: Pop(1)
0x35: Push((float)0.25)
0x36: Push((int) 1)
0x37: Push((float)2.0)
0x38: Pop(1); Push(Stack[-1] * Stack[-6]);
0x39: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3a: Stack[-4] = Stack[-2] * Stack[-1]; Pop(2);
0x3b: @ rand(Stack[-1])
0x3c: Pop(0)
0x3d: Pop(0); Push((bool) Stack[-1] < Stack[-2])
0x3e: IF (Stack[-1] == 0) GOTO 0x45; Pop(1)

0x3f: Push("disease")
0x40: Push((int) 0)
0x41: @ SetProperty(Stack[-2], Stack[-1])
0x42: Pop(2)
0x43: Stack[-9] = (bool) 1
0x44: Return(); Pop(8)

0x45: Stack[-9] = (bool) 0
0x46: Return(); Pop(8)

0x47: PushEmpty()
0x48: PushEmpty(bool, string, float, float, float)
0x49: Stack[-4] = "health"
0x4a: Push((float)-0.05)
0x4b: Stack[-4] = Stack[-7] * Stack[-1]; Pop(1);
0x4c: Stack[-2] = (int) 0
0x4d: Stack[-1] = (int) 1
0x4e: Call 0x6f

0x4f: Pop(5)
0x50: Stack[-2] = (bool) 0
0x51: Return(); Pop(0)

0x52: PushEmpty(float, float, float, float, float, float, float, float)
0x53: @ GetGameTime(Stack[-4])
0x54: Pop(0)
0x55: Stack[-3] = Stack[-4] + Stack[-9]; Pop(0);
0x56: Stack[-2] = Stack[-4]
0x57: @ sync()
0x58: Pop(0)
0x59: @ GetGameTime(Stack[-1])
0x5a: Pop(0)
0x5b: Pop(0); Push((bool) Stack[-1] <= Stack[-2])
0x5c: IF (Stack[-1] == 0) GOTO 0x5e; Pop(1)

0x5d: GOTO 0x6d

0x5e: Pop(0); Push((bool) Stack[-1] >= Stack[-3])
0x5f: IF (Stack[-1] == 0) GOTO 0x66; Pop(1)

0x60: PushEmpty(bool, float)
0x61: Stack[-1] = Stack[-5] - Stack[-4]; Pop(0);
0x62: Call 0x47

0x63: Pop(2)
0x64: GOTO 0x6e

0x65: GOTO 0x6d

0x66: PushEmpty(bool, float)
0x67: Stack[-1] = Stack[-3] - Stack[-4]; Pop(0);
0x68: Call 0x47

0x69: Pop(1)
0x6a: IF (Stack[-1] == 0) GOTO 0x6c; Pop(1)

0x6b: GOTO 0x6e

0x6c: Stack[-2] = Stack[-1]
0x6d: GOTO 0x57

0x6e: Return(); Pop(8)

0x6f: PushEmpty(bool, float, bool, float)
0x70: @ HasProperty(Stack[-8], Stack[-2])
0x71: Pop(0)
0x72: Pop(0); Push((bool) Stack[-2] == 0)
0x73: IF (Stack[-1] == 0) GOTO 0x76; Pop(1)

0x74: Stack[-9] = (bool) 0
0x75: Return(); Pop(4)

0x76: @ GetProperty(Stack[-8], Stack[-1])
0x77: Pop(0)
0x78: PushEmpty(float, float, float, float)
0x79: Stack[-3] = Stack[-5] + Stack[-11]; Pop(0);
0x7a: Stack[-2] = Stack[-10]
0x7b: Stack[-1] = Stack[-9]
0x7c: Call 0x82

0x7d: Pop(3)
0x7e: @ SetProperty(Stack[-9], Stack[-1])
0x7f: Pop(1)
0x80: Stack[-9] = (bool) 1
0x81: Return(); Pop(4)

0x82: PushEmpty()
0x83: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x84: IF (Stack[-1] == 0) GOTO 0x87; Pop(1)

0x85: Stack[-4] = Stack[-2]
0x86: Return(); Pop(0)

0x87: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x88: IF (Stack[-1] == 0) GOTO 0x8b; Pop(1)

0x89: Stack[-4] = Stack[-1]
0x8a: Return(); Pop(0)

0x8b: Stack[-4] = Stack[-3]
0x8c: Return(); Pop(0)

