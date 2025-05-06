GlobalVarCount = 0

Strings:
	DiseaseSpeed
	hunger
	immunity
	disease
	tiredness
	health
	sleeping

Import:
	Sleep (1 args)
	GetGameTimeScale (1 args)
	GetProperty (2 args)
	SetProperty (2 args)
	HasProperty (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0


0x0: PushEmpty(bool, float, float, int, float, float, float, float, float, bool, float, float, int, float, float, float, float, float)
0x1: Push((float)1.0)
0x2: @ Sleep(Stack[-1])
0x3: Pop(1)
0x4: PushEmpty(bool)
0x5: Call2 0x94

0x6: Stack[-10] = Stack[-1]
0x7: Pop(1)
0x8: Push(Stack[-9])
0x9: IF (Stack[-1] == 0) GOTO 0xc; Pop(1)

0xa: Stack[-8] = (float) 200.0
0xb: GOTO 0xd

0xc: Stack[-8] = (float) 1.0
0xd: @ GetGameTimeScale(Stack[-7])
0xe: Pop(0)
0xf: Stack[-8] = Stack[-8] * Stack[-7]; Pop(0);
0x10: Push("DiseaseSpeed")
0x11: @ GetProperty(Stack[-1], Stack[-7])
0x12: Pop(1)
0x13: PushEmpty(bool, string, float, float, float)
0x14: Stack[-4] = "hunger"
0x15: Push((float)0.04167)
0x16: Stack[-4] = Stack[-14] * Stack[-1]; Pop(1);
0x17: Stack[-2] = (int) 0
0x18: Stack[-1] = (int) 1
0x19: Call2 0x81

0x1a: Pop(5)
0x1b: Push("hunger")
0x1c: @ GetProperty(Stack[-1], Stack[-6])
0x1d: Pop(1)
0x1e: Push("immunity")
0x1f: @ GetProperty(Stack[-1], Stack[-5])
0x20: Pop(1)
0x21: Push((float)0.5)
0x22: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x23: IF (Stack[-1] == 0) GOTO 0x2f; Pop(1)

0x24: Push((float)0.125)
0x25: Pop(1); Push(Stack[-1] * Stack[-9]);
0x26: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x27: Push((float)0.5)
0x28: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x29: IF (Stack[-1] == 0) GOTO 0x2b; Pop(1)

0x2a: Stack[-4] = (float) 0.5
0x2b: Push("immunity")
0x2c: @ SetProperty(Stack[-1], Stack[-5])
0x2d: Pop(1)
0x2e: GOTO 0x3c

0x2f: Push((float)0.5)
0x30: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x31: IF (Stack[-1] == 0) GOTO 0x3c; Pop(1)

0x32: Push((float)0.0625)
0x33: Pop(1); Push(Stack[-1] * Stack[-9]);
0x34: Stack[-5] = Stack[-5] - Stack[-1]; Pop(1);
0x35: Push((int) 0)
0x36: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x37: IF (Stack[-1] == 0) GOTO 0x39; Pop(1)

0x38: Stack[-4] = (int) 0
0x39: Push("immunity")
0x3a: @ SetProperty(Stack[-1], Stack[-5])
0x3b: Pop(1)
0x3c: Push("disease")
0x3d: @ GetProperty(Stack[-1], Stack[-4])
0x3e: Pop(1)
0x3f: Push((float)0.001)
0x40: Pop(1); Push((bool) Stack[-4] < Stack[-1])
0x41: IF (Stack[-1] == 0) GOTO 0x44; Pop(1)

0x42: Stack[-3] = (int) 0
0x43: GOTO 0x54

0x44: Push((float)0.33333)
0x45: Pop(1); Push((bool) Stack[-4] < Stack[-1])
0x46: IF (Stack[-1] == 0) GOTO 0x4c; Pop(1)

0x47: Push((float)0.00694)
0x48: Pop(1); Push(Stack[-1] * Stack[-9]);
0x49: Pop(1); Push(Stack[-1] / Stack[-7]);
0x4a: Stack[-4] = Stack[-4] + Stack[-1]; Pop(1);
0x4b: GOTO 0x50

0x4c: Push((float)0.04167)
0x4d: Pop(1); Push(Stack[-1] * Stack[-9]);
0x4e: Pop(1); Push(Stack[-1] / Stack[-7]);
0x4f: Stack[-4] = Stack[-4] + Stack[-1]; Pop(1);
0x50: Push((int) 1)
0x51: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x52: IF (Stack[-1] == 0) GOTO 0x54; Pop(1)

0x53: Stack[-3] = (int) 1
0x54: Push("disease")
0x55: @ SetProperty(Stack[-1], Stack[-4])
0x56: Pop(1)
0x57: PushEmpty(bool, string, float, float, float)
0x58: Stack[-4] = "tiredness"
0x59: Push(Stack[-14])
0x5a: IF (Stack[-1] == 0) GOTO 0x5d; Pop(1)

0x5b: Push((float)-0.125)
0x5c: GOTO 0x5e

0x5d: Push((float)0.0625)
0x5e: Stack[-4] = Stack[-14] * Stack[-1]; Pop(1);
0x5f: Stack[-2] = (int) 0
0x60: Stack[-1] = (int) 1
0x61: Call2 0x81

0x62: Pop(5)
0x63: Push("tiredness")
0x64: @ GetProperty(Stack[-1], Stack[-3])
0x65: Pop(1)
0x66: Stack[-1] = (int) 0
0x67: Push((float)0.001)
0x68: Pop(1); Push((bool) Stack[-4] >= Stack[-1])
0x69: IF (Stack[-1] == 0) GOTO 0x6d; Pop(1)

0x6a: Push((float)0.16667)
0x6b: Pop(1); Push(Stack[-4] * Stack[-1]);
0x6c: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x6d: Push((int) 1)
0x6e: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x6f: IF (Stack[-1] == 0) GOTO 0x72; Pop(1)

0x70: Push((float)0.33333)
0x71: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x72: Push((int) 1)
0x73: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x74: IF (Stack[-1] == 0) GOTO 0x77; Pop(1)

0x75: Push((float)0.16667)
0x76: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x77: PushEmpty(bool, string, float, float, float)
0x78: Stack[-4] = "health"
0x79: Pop(0); Push(( -Stack[-13])
0x7a: Stack[-4] = Stack[-1] * Stack[-7]; Pop(1);
0x7b: Stack[-2] = (int) 0
0x7c: Stack[-1] = (int) 1
0x7d: Call2 0x81

0x7e: Pop(5)
0x7f: GOTO 0x1

0x80: Return(); Pop(18)

0x81: PushEmpty(bool, float, bool, float)
0x82: @ HasProperty(Stack[-8], Stack[-2])
0x83: Pop(0)
0x84: Pop(0); Push((bool) Stack[-2] == 0)
0x85: IF (Stack[-1] == 0) GOTO 0x88; Pop(1)

0x86: Stack[-9] = (bool) 0
0x87: Return(); Pop(4)

0x88: @ GetProperty(Stack[-8], Stack[-1])
0x89: Pop(0)
0x8a: PushEmpty(float, float, float, float)
0x8b: Stack[-3] = Stack[-5] + Stack[-11]; Pop(0);
0x8c: Stack[-2] = Stack[-10]
0x8d: Stack[-1] = Stack[-9]
0x8e: Call2 0xa1

0x8f: Pop(3)
0x90: @ SetProperty(Stack[-9], Stack[-1])
0x91: Pop(1)
0x92: Stack[-9] = (bool) 1
0x93: Return(); Pop(4)

0x94: PushEmpty(bool, bool, bool, bool)
0x95: Push("sleeping")
0x96: @ HasProperty(Stack[-1], Stack[-3])
0x97: Pop(1)
0x98: Pop(0); Push((bool) Stack[-2] == 0)
0x99: IF (Stack[-1] == 0) GOTO 0x9c; Pop(1)

0x9a: Stack[-5] = (bool) 0
0x9b: Return(); Pop(4)

0x9c: Push("sleeping")
0x9d: @ GetProperty(Stack[-1], Stack[-2])
0x9e: Pop(1)
0x9f: Stack[-5] = Stack[-1]
0xa0: Return(); Pop(4)

0xa1: PushEmpty()
0xa2: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0xa3: IF (Stack[-1] == 0) GOTO 0xa6; Pop(1)

0xa4: Stack[-4] = Stack[-2]
0xa5: Return(); Pop(0)

0xa6: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0xa7: IF (Stack[-1] == 0) GOTO 0xaa; Pop(1)

0xa8: Stack[-4] = Stack[-1]
0xa9: Return(); Pop(0)

0xaa: Stack[-4] = Stack[-3]
0xab: Return(); Pop(0)

