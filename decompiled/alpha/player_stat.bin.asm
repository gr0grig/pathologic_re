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


0x0: PushEmpty(bool, float, float, float, float, float, float, float, float, float, bool, float, float, float, float, float, float, float, float, float)
0x1: Push((float)1.0)
0x2: @ Sleep(Stack[-1])
0x3: Pop(1)
0x4: PushEmpty(bool)
0x5: Call 0x7a

0x6: Stack[-11] = Stack[-1]
0x7: Pop(1)
0x8: Push(Stack[-10])
0x9: IF (Stack[-1] == 0) GOTO 0xc; Pop(1)

0xa: Stack[-9] = (float) 200.0
0xb: GOTO 0xd

0xc: Stack[-9] = (float) 1.0
0xd: @ GetGameTimeScale(Stack[-8])
0xe: Pop(0)
0xf: Stack[-9] = Stack[-9] * Stack[-8]; Pop(0);
0x10: Push("DiseaseSpeed")
0x11: @ GetProperty(Stack[-1], Stack[-8])
0x12: Pop(1)
0x13: Push((float)1.0)
0x14: Stack[-8] = Stack[-1] / Stack[-8]; Pop(1);
0x15: Push((float)0.7)
0x16: Stack[-7] = Stack[-8] * Stack[-1]; Pop(1);
0x17: PushEmpty(bool, string, float, float, float)
0x18: Stack[-4] = "hunger"
0x19: Push((float)0.04167)
0x1a: Stack[-4] = Stack[-15] * Stack[-1]; Pop(1);
0x1b: Stack[-2] = (int) 0
0x1c: Stack[-1] = (int) 1
0x1d: Call 0x67

0x1e: Pop(5)
0x1f: Push("hunger")
0x20: @ GetProperty(Stack[-1], Stack[-6])
0x21: Pop(1)
0x22: PushEmpty(bool, string, float, float, float)
0x23: Stack[-4] = "immunity"
0x24: Pop(0); Push(( -Stack[-14])
0x25: Push((float)0.0625)
0x26: Stack[-5] = Stack[-2] * Stack[-1]; Pop(2);
0x27: Stack[-2] = (int) 0
0x28: Stack[-1] = (int) 1
0x29: Call 0x67

0x2a: Pop(5)
0x2b: Push("immunity")
0x2c: @ GetProperty(Stack[-1], Stack[-5])
0x2d: Pop(1)
0x2e: Push("disease")
0x2f: @ GetProperty(Stack[-1], Stack[-4])
0x30: Pop(1)
0x31: Pop(0); Push(Stack[-4] * Stack[-6]);
0x32: Pop(1); Push(Stack[-8] - Stack[-1]);
0x33: Pop(1); Push(Stack[-10] * Stack[-1]);
0x34: Pop(1); Push(Stack[-1] * Stack[-4]);
0x35: Stack[-4] = Stack[-4] + Stack[-1]; Pop(1);
0x36: Push((float)0.01)
0x37: Pop(1); Push((bool) Stack[-4] < Stack[-1])
0x38: IF (Stack[-1] == 0) GOTO 0x3b; Pop(1)

0x39: Stack[-3] = (int) 0
0x3a: GOTO 0x3f

0x3b: Push((int) 1)
0x3c: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x3d: IF (Stack[-1] == 0) GOTO 0x3f; Pop(1)

0x3e: Stack[-3] = (int) 1
0x3f: Push("disease")
0x40: @ SetProperty(Stack[-1], Stack[-4])
0x41: Pop(1)
0x42: PushEmpty(bool, string, float, float, float)
0x43: Stack[-4] = "tiredness"
0x44: Push(Stack[-15])
0x45: IF (Stack[-1] == 0) GOTO 0x48; Pop(1)

0x46: Push((float)-0.125)
0x47: GOTO 0x49

0x48: Push((float)0.0625)
0x49: Stack[-4] = Stack[-15] * Stack[-1]; Pop(1);
0x4a: Stack[-2] = (int) 0
0x4b: Stack[-1] = (int) 1
0x4c: Call 0x67

0x4d: Pop(5)
0x4e: Push("tiredness")
0x4f: @ GetProperty(Stack[-1], Stack[-3])
0x50: Pop(1)
0x51: Push((float)0.16667)
0x52: Stack[-2] = Stack[-4] * Stack[-1]; Pop(1);
0x53: Push((int) 1)
0x54: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x55: IF (Stack[-1] == 0) GOTO 0x58; Pop(1)

0x56: Push((float)0.33333)
0x57: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x58: Push((int) 1)
0x59: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5a: IF (Stack[-1] == 0) GOTO 0x5d; Pop(1)

0x5b: Push((float)0.16667)
0x5c: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x5d: PushEmpty(bool, string, float, float, float)
0x5e: Stack[-4] = "health"
0x5f: Pop(0); Push(( -Stack[-14])
0x60: Stack[-4] = Stack[-1] * Stack[-7]; Pop(1);
0x61: Stack[-2] = (int) 0
0x62: Stack[-1] = (int) 1
0x63: Call 0x67

0x64: Pop(5)
0x65: GOTO 0x1

0x66: Return(); Pop(20)

0x67: PushEmpty(bool, float, bool, float)
0x68: @ HasProperty(Stack[-8], Stack[-2])
0x69: Pop(0)
0x6a: Pop(0); Push((bool) Stack[-2] == 0)
0x6b: IF (Stack[-1] == 0) GOTO 0x6e; Pop(1)

0x6c: Stack[-9] = (bool) 0
0x6d: Return(); Pop(4)

0x6e: @ GetProperty(Stack[-8], Stack[-1])
0x6f: Pop(0)
0x70: PushEmpty(float, float, float, float)
0x71: Stack[-3] = Stack[-5] + Stack[-11]; Pop(0);
0x72: Stack[-2] = Stack[-10]
0x73: Stack[-1] = Stack[-9]
0x74: Call 0x87

0x75: Pop(3)
0x76: @ SetProperty(Stack[-9], Stack[-1])
0x77: Pop(1)
0x78: Stack[-9] = (bool) 1
0x79: Return(); Pop(4)

0x7a: PushEmpty(bool, bool, bool, bool)
0x7b: Push("sleeping")
0x7c: @ HasProperty(Stack[-1], Stack[-3])
0x7d: Pop(1)
0x7e: Pop(0); Push((bool) Stack[-2] == 0)
0x7f: IF (Stack[-1] == 0) GOTO 0x82; Pop(1)

0x80: Stack[-5] = (bool) 0
0x81: Return(); Pop(4)

0x82: Push("sleeping")
0x83: @ GetProperty(Stack[-1], Stack[-2])
0x84: Pop(1)
0x85: Stack[-5] = Stack[-1]
0x86: Return(); Pop(4)

0x87: PushEmpty()
0x88: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x89: IF (Stack[-1] == 0) GOTO 0x8c; Pop(1)

0x8a: Stack[-4] = Stack[-2]
0x8b: Return(); Pop(0)

0x8c: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x8d: IF (Stack[-1] == 0) GOTO 0x90; Pop(1)

0x8e: Stack[-4] = Stack[-1]
0x8f: Return(); Pop(0)

0x90: Stack[-4] = Stack[-3]
0x91: Return(); Pop(0)

