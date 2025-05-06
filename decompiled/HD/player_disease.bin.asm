GlobalVarCount = 0

Strings:
	disease
	Disease effect started
	Disease effect stopped
	sick
	sleeping

Import:
	Hold (0 args)
	Trace (1 args)
	GetProperty (2 args)
	rand (3 args)
	PlaySound (1 args)
	LockCameraRoll (1 args)
	LockCameraFOV (1 args)
	irand (2 args)
	GetCameraCurrentFOV (1 args)
	sync (1 args)
	UnlockCameraFOV (1 args)
	UnlockCameraRoll (1 args)
	ModDarkenLevel (1 args)
	ModBlurLevel (1 args)
	Sleep (1 args)
	SetCameraRoll (1 args)
	GetForce (1 args)
	GetDirection (1 args)
	SetForce (1 args)
	SetCameraFOV (1 args)
	Sleep (2 args)
	StopGroup0 (0 args)
	HasProperty (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_16 Op = 0x4 Vars = (object, string)
	GTASK_1  Params = 0
	GTASK_2 Vars = (float, int) Params = 2
		EVENT_16 Op = 0x15c Vars = (object, string)


0x0: @ Hold()
0x1: Pop(0)
0x2: GOTO 0x0

0x3: Return(); Pop(0)

0x4: PushEmpty()
0x5: Push("disease")
0x6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7: IF (Stack[-1] == 0) GOTO 0x12; Pop(1)

0x8: PushEmpty(bool)
0x9: Call2 0x1a4

0xa: Pop(0)
0xb: Pop(1); Push((bool) Stack[-1] == 0)
0xc: IF (Stack[-1] == 0) GOTO 0x12; Pop(1)

0xd: PushEmpty()
0xe: Push(-0, 0); TaskCall(1)
0xf: Call2 0x13

0x10: Pop(-0, 0); TaskReturn
0x11: Pop(0)
0x12: Return(); Pop(0)

0x13: PushEmpty(float, float, int, float, float, int)
0x14: PushEmpty(bool)
0x15: Call2 0x182

0x16: Pop(0)
0x17: IF (Stack[-1] == 0) GOTO 0x19; Pop(1)

0x18: Return(); Pop(6)

0x19: Push("Disease effect started")
0x1a: @ Trace(Stack[-1])
0x1b: Pop(1)
0x1c: Push("disease")
0x1d: @ GetProperty(Stack[-1], Stack[-4])
0x1e: Pop(1)
0x1f: PushEmpty(float, float, float, float)
0x20: Push((int) 2)
0x21: Stack[-4] = Stack[-8] * Stack[-1]; Pop(1);
0x22: Stack[-2] = (int) 0
0x23: Stack[-1] = (int) 1
0x24: Call2 0x199

0x25: Stack[-7] = Stack[-4]
0x26: Pop(4)
0x27: PushEmpty(bool, float)
0x28: Stack[-1] = Stack[-5]
0x29: Call2 0xc8

0x2a: Pop(1)
0x2b: IF (Stack[-1] == 0) GOTO 0x72; Pop(1)

0x2c: PushEmpty(bool)
0x2d: Call2 0x1a4

0x2e: Pop(0)
0x2f: Pop(1); Push((bool) Stack[-1] == 0)
0x30: IF (Stack[-1] == 0) GOTO 0x72; Pop(1)

0x31: Push("disease")
0x32: @ GetProperty(Stack[-1], Stack[-4])
0x33: Pop(1)
0x34: PushEmpty(float, float, float, float)
0x35: Stack[-3] = Stack[-7]
0x36: Stack[-2] = (int) 0
0x37: Stack[-1] = (int) 1
0x38: Call2 0x199

0x39: Stack[-7] = Stack[-4]
0x3a: Pop(4)
0x3b: Push((int) 600)
0x3c: Push((int) 500)
0x3d: Pop(1); Push(Stack[-5] * Stack[-1]);
0x3e: Pop(2); Push(Stack[-2] - Stack[-1]);
0x3f: Push((int) 1200)
0x40: Push((int) 1000)
0x41: Pop(1); Push(Stack[-6] * Stack[-1]);
0x42: Pop(2); Push(Stack[-2] - Stack[-1]);
0x43: @ rand(Stack[-4], Stack[-2], Stack[-1])
0x44: Pop(2)
0x45: PushEmpty(int, float)
0x46: Stack[-1] = Stack[-4]
0x47: Push(-2, 2); TaskCall(2)
0x48: Call2 0x14c

0x49: Pop(-2, 2); TaskReturn
0x4a: Stack[-3] = Stack[-2]
0x4b: Pop(2)
0x4c: Push("disease")
0x4d: @ GetProperty(Stack[-1], Stack[-4])
0x4e: Pop(1)
0x4f: PushEmpty(float, float, float, float)
0x50: Stack[-3] = Stack[-7]
0x51: Stack[-2] = (int) 0
0x52: Stack[-1] = (int) 1
0x53: Call2 0x199

0x54: Stack[-7] = Stack[-4]
0x55: Pop(4)
0x56: Push((int) 1)
0x57: Pop(1); Push((bool) Stack[-1] == Stack[-2])
0x58: IF (Stack[-1] == 0) GOTO 0x5f; Pop(1)

0x59: PushEmpty(bool, float)
0x5a: Stack[-1] = (float) 0.1
0x5b: Call2 0x76

0x5c: Pop(2)
0x5d: GOTO 0x72

0x5e: GOTO 0x71

0x5f: Push((int) 2)
0x60: Pop(1); Push((bool) Stack[-1] == Stack[-2])
0x61: IF (Stack[-1] == 0) GOTO 0x6a; Pop(1)

0x62: PushEmpty(bool, float)
0x63: Stack[-1] = Stack[-5]
0x64: Call2 0x76

0x65: Pop(1)
0x66: Pop(1); Push((bool) Stack[-1] == 0)
0x67: IF (Stack[-1] == 0) GOTO 0x69; Pop(1)

0x68: GOTO 0x72

0x69: GOTO 0x71

0x6a: PushEmpty(bool, float)
0x6b: Stack[-1] = Stack[-5]
0x6c: Call2 0xc8

0x6d: Pop(1)
0x6e: Pop(1); Push((bool) Stack[-1] == 0)
0x6f: IF (Stack[-1] == 0) GOTO 0x71; Pop(1)

0x70: GOTO 0x72

0x71: GOTO 0x2c

0x72: Push("Disease effect stopped")
0x73: @ Trace(Stack[-1])
0x74: Pop(1)
0x75: Return(); Pop(6)

0x76: PushEmpty(bool, bool, float, float, float, float, float, float, float, bool, bool, float, float, float, float, float, float, float)
0x77: PushEmpty(bool)
0x78: Call2 0x182

0x79: Pop(0)
0x7a: IF (Stack[-1] == 0) GOTO 0x7d; Pop(1)

0x7b: Stack[-20] = (bool) 0
0x7c: Return(); Pop(18)

0x7d: Push("sick")
0x7e: @ PlaySound(Stack[-1])
0x7f: Pop(1)
0x80: @ LockCameraRoll(Stack[-9])
0x81: Pop(0)
0x82: @ LockCameraFOV(Stack[-8])
0x83: Pop(0)
0x84: Push((int) 2)
0x85: @ irand(Stack[-8], Stack[-1])
0x86: Pop(1)
0x87: Push((float)0.62832)
0x88: Push((float)0.5)
0x89: Pop(1); Push(Stack[-9] - Stack[-1]);
0x8a: Stack[-9] = Stack[-2] * Stack[-1]; Pop(2);
0x8b: @ GetCameraCurrentFOV(Stack[-6])
0x8c: Pop(0)
0x8d: Push((float)0.5)
0x8e: Push((float)0.5)
0x8f: Pop(1); Push(Stack[-1] * Stack[-21]);
0x90: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x91: Push((float)0.25)
0x92: Push((float)0.75)
0x93: Pop(1); Push(Stack[-1] * Stack[-21]);
0x94: Stack[-6] = Stack[-2] + Stack[-1]; Pop(2);
0x95: Stack[-3] = (int) 0
0x96: @ sync(Stack[-2])
0x97: Pop(0)
0x98: Pop(0); Push(Stack[-2] * Stack[-5]);
0x99: Stack[-4] = Stack[-4] + Stack[-1]; Pop(1);
0x9a: Push(Stack[-9])
0x9b: IF (Stack[-1] == 0) GOTO 0xa1; Pop(1)

0x9c: PushEmpty(float, float)
0x9d: Stack[-2] = Stack[-5]
0x9e: Stack[-1] = Stack[-9]
0x9f: Call2 0x12f

0xa0: Pop(2)
0xa1: Push(Stack[-8])
0xa2: IF (Stack[-1] == 0) GOTO 0xa8; Pop(1)

0xa3: PushEmpty(float, float)
0xa4: Stack[-2] = Stack[-5]
0xa5: Stack[-1] = Stack[-8]
0xa6: Call2 0x143

0xa7: Pop(2)
0xa8: Pop(0); Push((bool) Stack[-3] < Stack[-4])
0xa9: IF (Stack[-1] == 0) GOTO 0x96; Pop(1)

0xaa: Stack[-3] = Stack[-4]
0xab: @ sync(Stack[-1])
0xac: Pop(0)
0xad: Pop(0); Push(Stack[-1] * Stack[-5]);
0xae: Push((int) 5)
0xaf: Pop(2); Push(Stack[-2] / Stack[-1]);
0xb0: Stack[-4] = Stack[-4] - Stack[-1]; Pop(1);
0xb1: Push(Stack[-9])
0xb2: IF (Stack[-1] == 0) GOTO 0xb8; Pop(1)

0xb3: PushEmpty(float, float)
0xb4: Stack[-2] = Stack[-5]
0xb5: Stack[-1] = Stack[-9]
0xb6: Call2 0x12f

0xb7: Pop(2)
0xb8: Push(Stack[-8])
0xb9: IF (Stack[-1] == 0) GOTO 0xbf; Pop(1)

0xba: PushEmpty(float, float)
0xbb: Stack[-2] = Stack[-5]
0xbc: Stack[-1] = Stack[-8]
0xbd: Call2 0x143

0xbe: Pop(2)
0xbf: Push((int) 0)
0xc0: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0xc1: IF (Stack[-1] == 0) GOTO 0xab; Pop(1)

0xc2: @ UnlockCameraFOV(Stack[-8])
0xc3: Pop(0)
0xc4: @ UnlockCameraRoll(Stack[-9])
0xc5: Pop(0)
0xc6: Stack[-20] = (bool) 1
0xc7: Return(); Pop(18)

0xc8: PushEmpty(bool, bool, float, float, float, float, float, float, float, bool, bool, float, float, float, float, float, float, float)
0xc9: PushEmpty(bool)
0xca: Call2 0x182

0xcb: Pop(0)
0xcc: IF (Stack[-1] == 0) GOTO 0xcf; Pop(1)

0xcd: Stack[-20] = (bool) 0
0xce: Return(); Pop(18)

0xcf: Push("sick")
0xd0: @ PlaySound(Stack[-1])
0xd1: Pop(1)
0xd2: @ LockCameraRoll(Stack[-9])
0xd3: Pop(0)
0xd4: @ LockCameraFOV(Stack[-8])
0xd5: Pop(0)
0xd6: Push((int) 2)
0xd7: @ irand(Stack[-8], Stack[-1])
0xd8: Pop(1)
0xd9: Push((float)0.62832)
0xda: Push((float)0.5)
0xdb: Pop(1); Push(Stack[-9] - Stack[-1]);
0xdc: Stack[-9] = Stack[-2] * Stack[-1]; Pop(2);
0xdd: Push((float)0.25)
0xde: Pop(1); Push((bool) Stack[-20] < Stack[-1])
0xdf: IF (Stack[-1] == 0) GOTO 0xe2; Pop(1)

0xe0: Push((float)0.25)
0xe1: GOTO 0xe3

0xe2: Push(Stack[-19])
0xe3: Stack[-8] = Stack[-8] * Stack[-1]; Pop(1);
0xe4: @ GetCameraCurrentFOV(Stack[-6])
0xe5: Pop(0)
0xe6: Push((float)0.5)
0xe7: Push((float)0.5)
0xe8: Pop(1); Push(Stack[-1] * Stack[-21]);
0xe9: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0xea: Push((float)0.25)
0xeb: Push((float)0.75)
0xec: Pop(1); Push(Stack[-1] * Stack[-21]);
0xed: Stack[-6] = Stack[-2] + Stack[-1]; Pop(2);
0xee: Stack[-3] = (int) 0
0xef: @ sync(Stack[-2])
0xf0: Pop(0)
0xf1: Pop(0); Push(Stack[-2] * Stack[-5]);
0xf2: Stack[-4] = Stack[-4] + Stack[-1]; Pop(1);
0xf3: Push(Stack[-9])
0xf4: IF (Stack[-1] == 0) GOTO 0xfa; Pop(1)

0xf5: PushEmpty(float, float)
0xf6: Stack[-2] = Stack[-5]
0xf7: Stack[-1] = Stack[-9]
0xf8: Call2 0x12f

0xf9: Pop(2)
0xfa: Push(Stack[-8])
0xfb: IF (Stack[-1] == 0) GOTO 0x101; Pop(1)

0xfc: PushEmpty(float, float)
0xfd: Stack[-2] = Stack[-5]
0xfe: Stack[-1] = Stack[-8]
0xff: Call2 0x143

0x100: Pop(2)
0x101: @ ModDarkenLevel(Stack[-3])
0x102: Pop(0)
0x103: Pop(0); Push((bool) Stack[-3] < Stack[-4])
0x104: IF (Stack[-1] == 0) GOTO 0xef; Pop(1)

0x105: Stack[-3] = Stack[-4]
0x106: @ sync(Stack[-1])
0x107: Pop(0)
0x108: Pop(0); Push(Stack[-1] * Stack[-5]);
0x109: Push((int) 5)
0x10a: Pop(2); Push(Stack[-2] / Stack[-1]);
0x10b: Stack[-4] = Stack[-4] - Stack[-1]; Pop(1);
0x10c: Push(Stack[-9])
0x10d: IF (Stack[-1] == 0) GOTO 0x113; Pop(1)

0x10e: PushEmpty(float, float)
0x10f: Stack[-2] = Stack[-5]
0x110: Stack[-1] = Stack[-9]
0x111: Call2 0x12f

0x112: Pop(2)
0x113: Push(Stack[-8])
0x114: IF (Stack[-1] == 0) GOTO 0x11a; Pop(1)

0x115: PushEmpty(float, float)
0x116: Stack[-2] = Stack[-5]
0x117: Stack[-1] = Stack[-8]
0x118: Call2 0x143

0x119: Pop(2)
0x11a: @ ModDarkenLevel(Stack[-3])
0x11b: Pop(0)
0x11c: Push((int) 0)
0x11d: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x11e: IF (Stack[-1] == 0) GOTO 0x106; Pop(1)

0x11f: @ UnlockCameraFOV(Stack[-8])
0x120: Pop(0)
0x121: @ UnlockCameraRoll(Stack[-9])
0x122: Pop(0)
0x123: Push((int) 2)
0x124: Pop(1); Push(Stack[-20] / Stack[-1]);
0x125: @ ModBlurLevel(Stack[-1])
0x126: Pop(1)
0x127: Push((int) 10)
0x128: @ Sleep(Stack[-1])
0x129: Pop(1)
0x12a: Push((int) 0)
0x12b: @ ModBlurLevel(Stack[-1])
0x12c: Pop(1)
0x12d: Stack[-20] = (bool) 1
0x12e: Return(); Pop(18)

0x12f: PushEmpty(float, cvector, cvector, float, cvector, cvector)
0x130: Stack[-3] = Stack[-8] * Stack[-7]; Pop(0);
0x131: @ SetCameraRoll(Stack[-3])
0x132: Pop(0)
0x133: @ GetForce(Stack[-2])
0x134: Pop(0)
0x135: @ GetDirection(Stack[-1])
0x136: Pop(0)
0x137: PushEmpty(cvector, cvector)
0x138: Push(CVector(0.0, 1.0, 0.0))
0x139: Stack[-2] = Stack[-4] ^ Stack[-1]; Pop(1);
0x13a: Call2 0x18f

0x13b: Pop(1)
0x13c: Pop(1); Push(Stack[-1] * Stack[-4]);
0x13d: Push((int) 1500)
0x13e: Pop(2); Push(Stack[-2] * Stack[-1]);
0x13f: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x140: @ SetForce(Stack[-2])
0x141: Pop(0)
0x142: Return(); Pop(6)

0x143: PushEmpty()
0x144: Push((int) 1)
0x145: Push((float)0.75)
0x146: Pop(1); Push(Stack[-4] * Stack[-1]);
0x147: Pop(2); Push(Stack[-2] - Stack[-1]);
0x148: Pop(1); Push(Stack[-2] * Stack[-1]);
0x149: @ SetCameraFOV(Stack[-1])
0x14a: Pop(1)
0x14b: Return(); Pop(0)

0x14c: PushEmpty(bool, bool)
0x14d: Stack[1 + Tasks[-1].StackPointer] = (int)0
0x14e: Push("disease")
0x14f: @ GetProperty(Stack[-1], Stack[-0])
0x150: Pop(1)
0x151: PushEmpty(float, float, float, float)
0x152: Stack[-3] = Stack[0 + Tasks[-1].StackPointer]
0x153: Stack[-2] = (int) 0
0x154: Stack[-1] = (int) 1
0x155: Call2 0x199

0x156: Stack[0 + Tasks[-1].StackPointer] = Stack[-4]
0x157: Pop(4)
0x158: @ Sleep(Stack[-3], Stack[-1])
0x159: Pop(0)
0x15a: Stack[-4] = Stack[1 + Tasks[-1].StackPointer]
0x15b: Return(); Pop(2)

0x15c: PushEmpty(float, float)
0x15d: Push("disease")
0x15e: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x15f: IF (Stack[-1] == 0) GOTO 0x181; Pop(1)

0x160: PushEmpty(bool)
0x161: Call2 0x1a4

0x162: Pop(0)
0x163: IF (Stack[-1] == 0) GOTO 0x167; Pop(1)

0x164: Stack[1 + Tasks[-1].StackPointer] = (int)1
0x165: @ StopGroup0()
0x166: Pop(0)
0x167: Push("disease")
0x168: @ GetProperty(Stack[-1], Stack[-2])
0x169: Pop(1)
0x16a: PushEmpty(float, float, float, float)
0x16b: Stack[-3] = Stack[-5]
0x16c: Stack[-2] = (int) 0
0x16d: Stack[-1] = (int) 1
0x16e: Call2 0x199

0x16f: Stack[-5] = Stack[-4]
0x170: Pop(4)
0x171: Push((float)0.001)
0x172: Pop(1); Push(Stack[0 + StackPtr] + Stack[-1]);
0x173: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x174: IF (Stack[-1] == 0) GOTO 0x178; Pop(1)

0x175: @ StopGroup0()
0x176: Pop(0)
0x177: GOTO 0x181

0x178: Push((float)0.001)
0x179: Pop(1); Push(Stack[-2] + Stack[-1]);
0x17a: Pop(1); Push((bool) Stack[-1] < Stack[0 + Tasks[-1].StackPointer])
0x17b: IF (Stack[-1] == 0) GOTO 0x180; Pop(1)

0x17c: Stack[1 + Tasks[-1].StackPointer] = (int)2
0x17d: @ StopGroup0()
0x17e: Pop(0)
0x17f: GOTO 0x181

0x180: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x181: Return(); Pop(2)

0x182: PushEmpty(bool, bool, bool, bool)
0x183: Push("sleeping")
0x184: @ HasProperty(Stack[-1], Stack[-3])
0x185: Pop(1)
0x186: Pop(0); Push((bool) Stack[-2] == 0)
0x187: IF (Stack[-1] == 0) GOTO 0x18a; Pop(1)

0x188: Stack[-5] = (bool) 0
0x189: Return(); Pop(4)

0x18a: Push("sleeping")
0x18b: @ GetProperty(Stack[-1], Stack[-2])
0x18c: Pop(1)
0x18d: Stack[-5] = Stack[-1]
0x18e: Return(); Pop(4)

0x18f: PushEmpty(float, float)
0x190: Pop(0); Push(Stack[-3] | Stack[-3]);
0x191: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x192: Push((float)0.0)
0x193: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x194: IF (Stack[-1] == 0) GOTO 0x197; Pop(1)

0x195: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x196: Return(); Pop(2)

0x197: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x198: Return(); Pop(2)

0x199: PushEmpty()
0x19a: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x19b: IF (Stack[-1] == 0) GOTO 0x19e; Pop(1)

0x19c: Stack[-4] = Stack[-2]
0x19d: Return(); Pop(0)

0x19e: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x19f: IF (Stack[-1] == 0) GOTO 0x1a2; Pop(1)

0x1a0: Stack[-4] = Stack[-1]
0x1a1: Return(); Pop(0)

0x1a2: Stack[-4] = Stack[-3]
0x1a3: Return(); Pop(0)

0x1a4: PushEmpty(float, float)
0x1a5: Push("disease")
0x1a6: @ GetProperty(Stack[-1], Stack[-2])
0x1a7: Pop(1)
0x1a8: Push((float)0.001)
0x1a9: Stack[-4] = Stack[-2] <= Stack[-1]; Pop(1);
0x1aa: Return(); Pop(2)

