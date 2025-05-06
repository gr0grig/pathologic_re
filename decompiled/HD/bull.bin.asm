GlobalVarCount = 0

Strings:
	all
	idle

Import:
	Hold (0 args)
	StopGroup0 (0 args)
	sync (0 args)
	RemoveEnvelope (0 args)
	RemoveRTEnvelope (0 args)
	irand (2 args)
	PlayAnimation (2 args)
	WaitForAnimEnd (0 args)
	StopAnimation (0 args)
	IsLoaded (1 args)
	IsExisting3DSound (2 args)
	Is3DSoundLoaded (2 args)
	GetEyesHeight (1 args)
	GetDirection (1 args)
	PlayGlobalSound (2 args)
	HasAnimation (3 args)

RunOp = 0xd
RunTask = 1

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_5 Op = 0x8 Vars = ()
	GTASK_1  Params = 0
	GTASK_2  Params = 0
		EVENT_6 Op = 0x46 Vars = ()


0x0: @ Hold()
0x1: Pop(0)
0x2: PushEmpty(bool)
0x3: Call2 0x49

0x4: Pop(0)
0x5: Pop(1); Push((bool) Stack[-1] == 0)
0x6: IF (Stack[-1] == 0) GOTO 0x0; Pop(1)

0x7: Return(); Pop(0)

0x8: @ StopGroup0()
0x9: Pop(0)
0xa: @ sync()
0xb: Pop(0)
0xc: Return(); Pop(0)

0xd: @ RemoveEnvelope()
0xe: Pop(0)
0xf: @ RemoveRTEnvelope()
0x10: Pop(0)
0x11: PushEmpty(bool)
0x12: Call2 0x49

0x13: Pop(0)
0x14: Pop(1); Push((bool) Stack[-1] == 0)
0x15: IF (Stack[-1] == 0) GOTO 0x1b; Pop(1)

0x16: PushEmpty()
0x17: Push(-0, 0); TaskCall(0)
0x18: Call2 0x0

0x19: Pop(-0, 0); TaskReturn
0x1a: Pop(0)
0x1b: PushEmpty()
0x1c: Push(-0, 0); TaskCall(2)
0x1d: Call2 0x22

0x1e: Pop(-0, 0); TaskReturn
0x1f: Pop(0)
0x20: GOTO 0x11

0x21: Return(); Pop(0)

0x22: PushEmpty(int, int, int, string, int, int, int, string)
0x23: Push((int) 3)
0x24: @ irand(Stack[-5], Stack[-1])
0x25: Pop(1)
0x26: Pop(0); Push((bool) Stack[-4] == 0)
0x27: IF (Stack[-1] == 0) GOTO 0x3f; Pop(1)

0x28: PushEmpty(int)
0x29: Call2 0x84

0x2a: Stack[-4] = Stack[-1]
0x2b: Pop(1)
0x2c: Push(Stack[-3])
0x2d: IF (Stack[-1] == 0) GOTO 0x3e; Pop(1)

0x2e: @ irand(Stack[-2], Stack[-3])
0x2f: Pop(0)
0x30: PushEmpty(string, int)
0x31: Stack[-1] = Stack[-4]
0x32: Call2 0x7e

0x33: Stack[-3] = Stack[-2]
0x34: Pop(2)
0x35: Push("all")
0x36: @ PlayAnimation(Stack[-1], Stack[-2])
0x37: Pop(1)
0x38: PushEmpty(string)
0x39: Stack[-1] = Stack[-2]
0x3a: Call2 0x4e

0x3b: Pop(1)
0x3c: @ WaitForAnimEnd()
0x3d: Pop(0)
0x3e: GOTO 0x45

0x3f: Push("all")
0x40: Push("idle")
0x41: @ PlayAnimation(Stack[-2], Stack[-1])
0x42: Pop(2)
0x43: @ WaitForAnimEnd()
0x44: Pop(0)
0x45: Return(); Pop(8)

0x46: @ StopAnimation()
0x47: Pop(0)
0x48: Return(); Pop(0)

0x49: PushEmpty(bool, bool)
0x4a: @ IsLoaded(Stack[-1])
0x4b: Pop(0)
0x4c: Stack[-3] = Stack[-1]
0x4d: Return(); Pop(2)

0x4e: PushEmpty(bool, int, bool, int, bool, float, cvector, cvector, bool, int, bool, int, bool, float, cvector, cvector)
0x4f: @ IsExisting3DSound(Stack[-8], Stack[-17])
0x50: Pop(0)
0x51: Pop(0); Push((bool) Stack[-8] == 0)
0x52: IF (Stack[-1] == 0) GOTO 0x67; Pop(1)

0x53: Stack[-7] = (int) 0
0x54: Push((int) 1)
0x55: Pop(1); Push(Stack[-8] + Stack[-1]);
0x56: Pop(1); Push(Stack[-18] + Stack[-1]);
0x57: @ IsExisting3DSound(Stack[-7], Stack[-1])
0x58: Pop(1)
0x59: Pop(0); Push((bool) Stack[-6] == 0)
0x5a: IF (Stack[-1] == 0) GOTO 0x5c; Pop(1)

0x5b: GOTO 0x5f

0x5c: Push((int) 1)
0x5d: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x5e: GOTO 0x54

0x5f: Pop(0); Push((bool) Stack[-7] == 0)
0x60: IF (Stack[-1] == 0) GOTO 0x62; Pop(1)

0x61: Return(); Pop(16)

0x62: @ irand(Stack[-5], Stack[-7])
0x63: Pop(0)
0x64: Push((int) 1)
0x65: Pop(1); Push(Stack[-6] + Stack[-1]);
0x66: Stack[-18] = Stack[-18] + Stack[-1]; Pop(1);
0x67: @ Is3DSoundLoaded(Stack[-4], Stack[-17])
0x68: Pop(0)
0x69: Push(Stack[-4])
0x6a: IF (Stack[-1] == 0) GOTO 0x76; Pop(1)

0x6b: @ GetEyesHeight(Stack[-3])
0x6c: Pop(0)
0x6d: @ GetDirection(Stack[-2])
0x6e: Pop(0)
0x6f: Push((int) 50)
0x70: Stack[-2] = Stack[-3] * Stack[-1]; Pop(1);
0x71: Push(CvectorIndex(Stack[-1], 1))
0x72: Stack[-1] = Stack[-1] + Stack[-4]; Pop(0);
0x73: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x74: @ PlayGlobalSound(Stack[-17], Stack[-1])
0x75: Pop(0)
0x76: Return(); Pop(16)

0x77: PushEmpty(string, string)
0x78: Stack[-1] = "idle"
0x79: Push(Stack[-3])
0x7a: IF (Stack[-1] == 0) GOTO 0x7c; Pop(1)

0x7b: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x7c: Stack[-4] = Stack[-1]
0x7d: Return(); Pop(2)

0x7e: PushEmpty()
0x7f: Push("idle")
0x80: Push((int) 1)
0x81: Pop(1); Push(Stack[-3] + Stack[-1]);
0x82: Stack[-4] = Stack[-2] + Stack[-1]; Pop(2);
0x83: Return(); Pop(0)

0x84: PushEmpty(int, bool, int, bool)
0x85: Stack[-2] = (int) 0
0x86: Push("all")
0x87: PushEmpty(string, int)
0x88: Push((int) 1)
0x89: Stack[-2] = Stack[-6] + Stack[-1]; Pop(1);
0x8a: Call2 0x77

0x8b: Pop(1)
0x8c: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x8d: Pop(2)
0x8e: Pop(0); Push((bool) Stack[-1] == 0)
0x8f: IF (Stack[-1] == 0) GOTO 0x91; Pop(1)

0x90: GOTO 0x94

0x91: Push((int) 1)
0x92: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x93: GOTO 0x86

0x94: Stack[-5] = Stack[-2]
0x95: Return(); Pop(4)

