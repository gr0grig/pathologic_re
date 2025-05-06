GlobalVarCount = 0

Strings:
	disease
	Disease effect started
	Disease effect stopped

Import:
	Hold (0 args)
	Trace (1 args)
	GetProperty (2 args)
	rand (3 args)
	LockCameraRoll (1 args)
	LockCameraFOV (1 args)
	irand (2 args)
	GetCameraCurrentFOV (1 args)
	sync (1 args)
	ModDarkenLevel (1 args)
	UnlockCameraFOV (1 args)
	UnlockCameraRoll (1 args)
	ModBlurLevel (1 args)
	Sleep (1 args)
	SetCameraRoll (1 args)
	GetForce (1 args)
	GetDirection (1 args)
	SetForce (1 args)
	SetCameraFOV (1 args)
	Sleep (2 args)
	StopGroup0 (0 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_16 Op = 0x4 Vars = (object, string)
	GTASK_1  Params = 0
	GTASK_2  Params = 2
		EVENT_16 Op = 0xd8 Vars = (object, string)


0x0: @ Hold()
0x1: Pop(0)
0x2: GOTO 0x0

0x3: Return(); Pop(0)

0x4: PushEmpty()
0x5: Push("disease")
0x6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7: IF (Stack[-1] == 0) GOTO 0x12; Pop(1)

0x8: PushEmpty(bool)
0x9: Call 0xf8

0xa: Pop(0)
0xb: Pop(1); Push((bool) Stack[-1] == 0)
0xc: IF (Stack[-1] == 0) GOTO 0x12; Pop(1)

0xd: PushEmpty()
0xe: Push(-0, 0); TaskCall(1)
0xf: Call 0x13

0x10: Pop(-0, 0); TaskReturn
0x11: Pop(0)
0x12: Return(); Pop(0)

0x13: PushEmpty(float, float, float, float)
0x14: Push("Disease effect started")
0x15: @ Trace(Stack[-1])
0x16: Pop(1)
0x17: Push("disease")
0x18: @ GetProperty(Stack[-1], Stack[-3])
0x19: Pop(1)
0x1a: PushEmpty(float, float, float, float)
0x1b: Push((int) 2)
0x1c: Stack[-4] = Stack[-7] * Stack[-1]; Pop(1);
0x1d: Stack[-2] = (int) 0
0x1e: Stack[-1] = (int) 1
0x1f: Call 0xed

0x20: Stack[-6] = Stack[-4]
0x21: Pop(4)
0x22: PushEmpty(bool, float)
0x23: Stack[-1] = Stack[-4]
0x24: Call 0x5f

0x25: Pop(1)
0x26: IF (Stack[-1] == 0) GOTO 0x5b; Pop(1)

0x27: PushEmpty(bool)
0x28: Call 0xf8

0x29: Pop(0)
0x2a: Pop(1); Push((bool) Stack[-1] == 0)
0x2b: IF (Stack[-1] == 0) GOTO 0x5b; Pop(1)

0x2c: Push("disease")
0x2d: @ GetProperty(Stack[-1], Stack[-3])
0x2e: Pop(1)
0x2f: PushEmpty(float, float, float, float)
0x30: Stack[-3] = Stack[-6]
0x31: Stack[-2] = (int) 0
0x32: Stack[-1] = (int) 1
0x33: Call 0xed

0x34: Stack[-6] = Stack[-4]
0x35: Pop(4)
0x36: Push((int) 30)
0x37: Push((int) 15)
0x38: Pop(1); Push(Stack[-4] * Stack[-1]);
0x39: Pop(2); Push(Stack[-2] - Stack[-1]);
0x3a: Push((int) 120)
0x3b: Push((int) 80)
0x3c: Pop(1); Push(Stack[-5] * Stack[-1]);
0x3d: Pop(2); Push(Stack[-2] - Stack[-1]);
0x3e: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x3f: Pop(2)
0x40: PushEmpty(bool, float)
0x41: Stack[-1] = Stack[-3]
0x42: Push(-2, 0); TaskCall(2)
0x43: Call 0xd3

0x44: Pop(-2, 0); TaskReturn
0x45: Pop(1)
0x46: Pop(1); Push((bool) Stack[-1] == 0)
0x47: IF (Stack[-1] == 0) GOTO 0x49; Pop(1)

0x48: GOTO 0x5b

0x49: Push("disease")
0x4a: @ GetProperty(Stack[-1], Stack[-3])
0x4b: Pop(1)
0x4c: PushEmpty(float, float, float, float)
0x4d: Stack[-3] = Stack[-6]
0x4e: Stack[-2] = (int) 0
0x4f: Stack[-1] = (int) 1
0x50: Call 0xed

0x51: Stack[-6] = Stack[-4]
0x52: Pop(4)
0x53: PushEmpty(bool, float)
0x54: Stack[-1] = Stack[-4]
0x55: Call 0x5f

0x56: Pop(1)
0x57: Pop(1); Push((bool) Stack[-1] == 0)
0x58: IF (Stack[-1] == 0) GOTO 0x5a; Pop(1)

0x59: GOTO 0x5b

0x5a: GOTO 0x27

0x5b: Push("Disease effect stopped")
0x5c: @ Trace(Stack[-1])
0x5d: Pop(1)
0x5e: Return(); Pop(4)

0x5f: PushEmpty(bool, bool, float, float, float, float, float, float, float, bool, bool, float, float, float, float, float, float, float)
0x60: @ LockCameraRoll(Stack[-9])
0x61: Pop(0)
0x62: @ LockCameraFOV(Stack[-8])
0x63: Pop(0)
0x64: Push((int) 2)
0x65: @ irand(Stack[-8], Stack[-1])
0x66: Pop(1)
0x67: Push((float)0.62832)
0x68: Push((float)0.5)
0x69: Pop(1); Push(Stack[-9] - Stack[-1]);
0x6a: Stack[-9] = Stack[-2] * Stack[-1]; Pop(2);
0x6b: @ GetCameraCurrentFOV(Stack[-6])
0x6c: Pop(0)
0x6d: Push((float)0.5)
0x6e: Push((float)0.5)
0x6f: Pop(1); Push(Stack[-1] * Stack[-21]);
0x70: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x71: Push((float)0.5)
0x72: Push((float)0.5)
0x73: Pop(1); Push(Stack[-1] * Stack[-21]);
0x74: Stack[-6] = Stack[-2] + Stack[-1]; Pop(2);
0x75: Stack[-3] = (int) 0
0x76: @ sync(Stack[-2])
0x77: Pop(0)
0x78: Pop(0); Push(Stack[-2] * Stack[-5]);
0x79: Stack[-4] = Stack[-4] + Stack[-1]; Pop(1);
0x7a: Push(Stack[-9])
0x7b: IF (Stack[-1] == 0) GOTO 0x81; Pop(1)

0x7c: PushEmpty(float, float)
0x7d: Stack[-2] = Stack[-5]
0x7e: Stack[-1] = Stack[-9]
0x7f: Call 0xb6

0x80: Pop(2)
0x81: Push(Stack[-8])
0x82: IF (Stack[-1] == 0) GOTO 0x88; Pop(1)

0x83: PushEmpty(float, float)
0x84: Stack[-2] = Stack[-5]
0x85: Stack[-1] = Stack[-8]
0x86: Call 0xca

0x87: Pop(2)
0x88: @ ModDarkenLevel(Stack[-3])
0x89: Pop(0)
0x8a: Pop(0); Push((bool) Stack[-3] < Stack[-4])
0x8b: IF (Stack[-1] == 0) GOTO 0x76; Pop(1)

0x8c: Stack[-3] = Stack[-4]
0x8d: @ sync(Stack[-1])
0x8e: Pop(0)
0x8f: Pop(0); Push(Stack[-1] * Stack[-5]);
0x90: Push((int) 5)
0x91: Pop(2); Push(Stack[-2] / Stack[-1]);
0x92: Stack[-4] = Stack[-4] - Stack[-1]; Pop(1);
0x93: Push(Stack[-9])
0x94: IF (Stack[-1] == 0) GOTO 0x9a; Pop(1)

0x95: PushEmpty(float, float)
0x96: Stack[-2] = Stack[-5]
0x97: Stack[-1] = Stack[-9]
0x98: Call 0xb6

0x99: Pop(2)
0x9a: Push(Stack[-8])
0x9b: IF (Stack[-1] == 0) GOTO 0xa1; Pop(1)

0x9c: PushEmpty(float, float)
0x9d: Stack[-2] = Stack[-5]
0x9e: Stack[-1] = Stack[-8]
0x9f: Call 0xca

0xa0: Pop(2)
0xa1: @ ModDarkenLevel(Stack[-3])
0xa2: Pop(0)
0xa3: Push((int) 0)
0xa4: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0xa5: IF (Stack[-1] == 0) GOTO 0x8d; Pop(1)

0xa6: @ UnlockCameraFOV(Stack[-8])
0xa7: Pop(0)
0xa8: @ UnlockCameraRoll(Stack[-9])
0xa9: Pop(0)
0xaa: Push((int) 2)
0xab: Pop(1); Push(Stack[-20] / Stack[-1]);
0xac: @ ModBlurLevel(Stack[-1])
0xad: Pop(1)
0xae: Push((int) 10)
0xaf: @ Sleep(Stack[-1])
0xb0: Pop(1)
0xb1: Push((int) 0)
0xb2: @ ModBlurLevel(Stack[-1])
0xb3: Pop(1)
0xb4: Stack[-20] = (bool) 1
0xb5: Return(); Pop(18)

0xb6: PushEmpty(float, cvector, cvector, float, cvector, cvector)
0xb7: Stack[-3] = Stack[-8] * Stack[-7]; Pop(0);
0xb8: @ SetCameraRoll(Stack[-3])
0xb9: Pop(0)
0xba: @ GetForce(Stack[-2])
0xbb: Pop(0)
0xbc: @ GetDirection(Stack[-1])
0xbd: Pop(0)
0xbe: PushEmpty(cvector, cvector)
0xbf: Push(CVector(0.0, 1.0, 0.0))
0xc0: Stack[-2] = Stack[-4] ^ Stack[-1]; Pop(1);
0xc1: Call 0xe3

0xc2: Pop(1)
0xc3: Pop(1); Push(Stack[-1] * Stack[-4]);
0xc4: Push((int) 1500)
0xc5: Pop(2); Push(Stack[-2] * Stack[-1]);
0xc6: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0xc7: @ SetForce(Stack[-2])
0xc8: Pop(0)
0xc9: Return(); Pop(6)

0xca: PushEmpty()
0xcb: Push((int) 1)
0xcc: Push((float)0.75)
0xcd: Pop(1); Push(Stack[-4] * Stack[-1]);
0xce: Pop(2); Push(Stack[-2] - Stack[-1]);
0xcf: Pop(1); Push(Stack[-2] * Stack[-1]);
0xd0: @ SetCameraFOV(Stack[-1])
0xd1: Pop(1)
0xd2: Return(); Pop(0)

0xd3: PushEmpty(bool, bool)
0xd4: @ Sleep(Stack[-3], Stack[-1])
0xd5: Pop(0)
0xd6: Stack[-4] = Stack[-1]
0xd7: Return(); Pop(2)

0xd8: PushEmpty()
0xd9: Push("disease")
0xda: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xdb: IF (Stack[-1] == 0) GOTO 0xe2; Pop(1)

0xdc: PushEmpty(bool)
0xdd: Call 0xf8

0xde: Pop(0)
0xdf: IF (Stack[-1] == 0) GOTO 0xe2; Pop(1)

0xe0: @ StopGroup0()
0xe1: Pop(0)
0xe2: Return(); Pop(0)

0xe3: PushEmpty(float, float)
0xe4: Pop(0); Push(Stack[-3] | Stack[-3]);
0xe5: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0xe6: Push((float)0.0)
0xe7: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xe8: IF (Stack[-1] == 0) GOTO 0xeb; Pop(1)

0xe9: Stack[-4] = CVector(0.0, 0.0, 0.0)
0xea: Return(); Pop(2)

0xeb: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0xec: Return(); Pop(2)

0xed: PushEmpty()
0xee: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0xef: IF (Stack[-1] == 0) GOTO 0xf2; Pop(1)

0xf0: Stack[-4] = Stack[-2]
0xf1: Return(); Pop(0)

0xf2: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0xf3: IF (Stack[-1] == 0) GOTO 0xf6; Pop(1)

0xf4: Stack[-4] = Stack[-1]
0xf5: Return(); Pop(0)

0xf6: Stack[-4] = Stack[-3]
0xf7: Return(); Pop(0)

0xf8: PushEmpty(float, float)
0xf9: Push("disease")
0xfa: @ GetProperty(Stack[-1], Stack[-2])
0xfb: Pop(1)
0xfc: Push((float)0.01)
0xfd: Stack[-4] = Stack[-2] <= Stack[-1]; Pop(1);
0xfe: Return(); Pop(2)

