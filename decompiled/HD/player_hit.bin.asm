GlobalVarCount = 1
	G_VAR_0 bool 

Strings:
	GetPosition
	_
	No sounds for "
	hit_physical1
	scream_physical1
	hit_physical2
	scream_physical2
	hit_bullet
	scream_bullet
	hit_oscoloc
	scream_oscoloc
	hit_mental
	scream_mental
	hit_rat
	scream_rat
	GetPosition
	blocking

Import:
	Hold (0 args)
	LockCameraFOV (1 args)
	GetCameraCurrentFOV (1 args)
	ModIsDOFEnabled (1 args)
	ModGetDOFParams (4 args)
	ModSetDOFEnabled (1 args)
	sync (1 args)
	UnlockCameraFOV (1 args)
	GetPosition (1 args)
	self (1 args)
	KillTimer (1 args)
	SetTimer (2 args)
	IsExistingSound (2 args)
	Trace (1 args)
	irand (2 args)
	PlaySound (1 args)
	GetSpeed (1 args)
	SetSpeed (1 args)
	ModSetDOFParams (4 args)
	ModDarkenLevel (1 args)
	ModBlurLevel (1 args)
	SetCameraFOV (1 args)
	HasProperty (2 args)
	GetProperty (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_22 Op = 0x7 Vars = (object, int, float, float)
		EVENT_43 Op = 0x18 Vars = (object, int, float, float, cvector, cvector)
	GTASK_1 Vars = (float, float) Params = 1
		EVENT_22 Op = 0x81 Vars = (object, int, float, float)
		EVENT_43 Op = 0x97 Vars = (object, int, float, float, cvector, cvector)

Events:
EVENT_7 Op = 0xc2 Vars = (int)

0x0: Push(GlobalVars[0])
0x1: Stack[-1] = (bool) 1
0x2: GlobalVars[0] = Stack[-1]; Pop(1)
0x3: @ Hold()
0x4: Pop(0)
0x5: GOTO 0x3

0x6: Return(); Pop(0)

0x7: PushEmpty()
0x8: Push((int) 5)
0x9: Pop(1); Push((bool) Stack[-4] != Stack[-1])
0xa: IF (Stack[-1] == 0) GOTO 0x17; Pop(1)

0xb: PushEmpty(object, int, float)
0xc: Stack[-3] = Stack[-7]
0xd: Stack[-2] = Stack[-6]
0xe: Stack[-1] = Stack[-5]
0xf: Call2 0x161

0x10: Pop(3)
0x11: PushEmpty(float)
0x12: Stack[-1] = Stack[-3]
0x13: Push(-1, 2); TaskCall(1)
0x14: Call2 0x21

0x15: Pop(-1, 2); TaskReturn
0x16: Pop(1)
0x17: Return(); Pop(0)

0x18: PushEmpty()
0x19: PushEmpty(object, int, float, float)
0x1a: Stack[-4] = Stack[-10]
0x1b: Stack[-3] = Stack[-9]
0x1c: Stack[-2] = Stack[-8]
0x1d: Stack[-1] = Stack[-7]
0x1e: Call2 0x7

0x1f: Pop(4)
0x20: Return(); Pop(0)

0x21: PushEmpty(float, bool, float, bool, float, float, float, float, float, float, bool, float, bool, float, float, float, float, float)
0x22: Stack[0 + Tasks[-1].StackPointer] = (float)0.0
0x23: Stack[-9] = Stack[-19]
0x24: Push((float)0.2)
0x25: Pop(1); Push((bool) Stack[-10] < Stack[-1])
0x26: IF (Stack[-1] == 0) GOTO 0x28; Pop(1)

0x27: Stack[-9] = (float) 0.2
0x28: PushEmpty(bool)
0x29: Call2 0x1d7

0x2a: Pop(0)
0x2b: Pop(1); Push((bool) Stack[-1] == 0)
0x2c: IF (Stack[-1] == 0) GOTO 0x33; Pop(1)

0x2d: PushEmpty(float, float)
0x2e: Push((float)2.0)
0x2f: Stack[-2] = Stack[-1] * Stack[-12]; Pop(1);
0x30: Call2 0xd7

0x31: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x32: Pop(2)
0x33: @ LockCameraFOV(Stack[-8])
0x34: Pop(0)
0x35: @ GetCameraCurrentFOV(Stack[-7])
0x36: Pop(0)
0x37: @ ModIsDOFEnabled(Stack[-6])
0x38: Pop(0)
0x39: Push(Stack[-6])
0x3a: IF (Stack[-1] == 0) GOTO 0x3e; Pop(1)

0x3b: @ ModGetDOFParams(Stack[-5], Stack[-4], Stack[-3], Stack[-2])
0x3c: Pop(0)
0x3d: GOTO 0x45

0x3e: Stack[-5] = (int) 0
0x3f: Stack[-4] = (int) 0
0x40: Stack[-3] = (float) 4000.0
0x41: Stack[-2] = (float) 4000.0
0x42: Push((bool) 1)
0x43: @ ModSetDOFEnabled(Stack[-1])
0x44: Pop(1)
0x45: @ sync(Stack[-1])
0x46: Pop(0)
0x47: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] < Stack[0 + Tasks[-1].StackPointer])
0x48: IF (Stack[-1] == 0) GOTO 0x5d; Pop(1)

0x49: Push((float)2.0)
0x4a: Pop(1); Push(Stack[-2] * Stack[-1]);
0x4b: Push((int) 2)
0x4c: Pop(2); Push(Stack[-2] / Stack[-1]);
0x4d: Stack[0 + Tasks[-1].StackPointer] = Stack[0 + Tasks[-1].StackPointer] - Stack[-1]; Pop(1);
0x4e: Push((int) 0)
0x4f: Pop(1); Push((bool) Stack[0 + Tasks[-1].StackPointer] <= Stack[-1])
0x50: IF (Stack[-1] == 0) GOTO 0x5c; Pop(1)

0x51: PushEmpty(float, float, bool, float, float, float, float)
0x52: Stack[-7] = (int) 0
0x53: Stack[-6] = Stack[-14]
0x54: Stack[-5] = Stack[-15]
0x55: Stack[-4] = Stack[-12]
0x56: Stack[-3] = Stack[-11]
0x57: Stack[-2] = Stack[-10]
0x58: Stack[-1] = Stack[-9]
0x59: Call2 0x191

0x5a: Pop(7)
0x5b: GOTO 0x7c

0x5c: GOTO 0x71

0x5d: Push((float)2.0)
0x5e: Pop(1); Push(Stack[-2] * Stack[-1]);
0x5f: Stack[0 + Tasks[-1].StackPointer] = Stack[0 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x60: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] >= Stack[1 + Tasks[-1].StackPointer])
0x61: IF (Stack[-1] == 0) GOTO 0x71; Pop(1)

0x62: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x63: IF (Stack[-1] == 0) GOTO 0x6f; Pop(1)

0x64: PushEmpty(float, float, bool, float, float, float, float)
0x65: Stack[-7] = (int) 0
0x66: Stack[-6] = Stack[-14]
0x67: Stack[-5] = Stack[-15]
0x68: Stack[-4] = Stack[-12]
0x69: Stack[-3] = Stack[-11]
0x6a: Stack[-2] = Stack[-10]
0x6b: Stack[-1] = Stack[-9]
0x6c: Call2 0x191

0x6d: Pop(7)
0x6e: GOTO 0x7c

0x6f: Stack[0 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer]
0x70: Stack[1 + Tasks[-1].StackPointer] = (int)0
0x71: PushEmpty(float, float, bool, float, float, float, float)
0x72: Stack[-7] = Stack[0 + Tasks[-1].StackPointer]
0x73: Stack[-6] = Stack[-14]
0x74: Stack[-5] = Stack[-15]
0x75: Stack[-4] = Stack[-12]
0x76: Stack[-3] = Stack[-11]
0x77: Stack[-2] = Stack[-10]
0x78: Stack[-1] = Stack[-9]
0x79: Call2 0x191

0x7a: Pop(7)
0x7b: GOTO 0x45

0x7c: Push(Stack[-8])
0x7d: IF (Stack[-1] == 0) GOTO 0x80; Pop(1)

0x7e: @ UnlockCameraFOV(Stack[-8])
0x7f: Pop(0)
0x80: Return(); Pop(18)

0x81: PushEmpty(float, float)
0x82: PushEmpty(object, int, float)
0x83: Stack[-3] = Stack[-9]
0x84: Stack[-2] = Stack[-8]
0x85: Stack[-1] = Stack[-7]
0x86: Call2 0x161

0x87: Pop(3)
0x88: PushEmpty(float, float)
0x89: Stack[-1] = Stack[-6]
0x8a: Call2 0xd7

0x8b: Stack[-3] = Stack[-2]
0x8c: Pop(2)
0x8d: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] < Stack[0 + Tasks[-1].StackPointer])
0x8e: IF (Stack[-1] == 0) GOTO 0x93; Pop(1)

0x8f: Pop(0); Push((bool) Stack[-1] > Stack[0 + Tasks[-1].StackPointer])
0x90: IF (Stack[-1] == 0) GOTO 0x92; Pop(1)

0x91: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x92: GOTO 0x96

0x93: Pop(0); Push((bool) Stack[-1] > Stack[1 + Tasks[-1].StackPointer])
0x94: IF (Stack[-1] == 0) GOTO 0x96; Pop(1)

0x95: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x96: Return(); Pop(2)

0x97: PushEmpty()
0x98: PushEmpty(object, int, float, float)
0x99: Stack[-4] = Stack[-10]
0x9a: Stack[-3] = Stack[-9]
0x9b: Stack[-2] = Stack[-8]
0x9c: Stack[-1] = Stack[-7]
0x9d: Call2 0x81

0x9e: Pop(4)
0x9f: Return(); Pop(0)

0xa0: PushEmpty(cvector, cvector, cvector, cvector)
0xa1: @ GetPosition(Stack[-2])
0xa2: Pop(0)
0xa3: @@ GetPosition(Stack[-1])
0xa4: Pop(0)
0xa5: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0xa6: Return(); Pop(4)

0xa7: PushEmpty(object, object)
0xa8: @ self(Stack[-1])
0xa9: Pop(0)
0xaa: Stack[-3] = Stack[-1]
0xab: Return(); Pop(2)

0xac: Stack[-1] = 0
0xad: PushEmpty(float, float)
0xae: Pop(0); Push(Stack[-3] | Stack[-3]);
0xaf: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0xb0: Push((float)0.0)
0xb1: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xb2: IF (Stack[-1] == 0) GOTO 0xb5; Pop(1)

0xb3: Stack[-4] = CVector(0.0, 0.0, 0.0)
0xb4: Return(); Pop(2)

0xb5: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0xb6: Return(); Pop(2)

0xb7: PushEmpty()
0xb8: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0xb9: IF (Stack[-1] == 0) GOTO 0xbc; Pop(1)

0xba: Stack[-4] = Stack[-2]
0xbb: Return(); Pop(0)

0xbc: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0xbd: IF (Stack[-1] == 0) GOTO 0xc0; Pop(1)

0xbe: Stack[-4] = Stack[-1]
0xbf: Return(); Pop(0)

0xc0: Stack[-4] = Stack[-3]
0xc1: Return(); Pop(0)

0xc2: PushEmpty()
0xc3: Push((int) 0)
0xc4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc5: IF (Stack[-1] == 0) GOTO 0xcc; Pop(1)

0xc6: Push(GlobalVars[0])
0xc7: Stack[-1] = (bool) 1
0xc8: GlobalVars[0] = Stack[-1]; Pop(1)
0xc9: Push((int) 0)
0xca: @ KillTimer(Stack[-1])
0xcb: Pop(1)
0xcc: Return(); Pop(0)

0xcd: Push(GlobalVars[0])
0xce: IF (Stack[-1] == 0) GOTO 0xd6; Pop(1)

0xcf: Push(GlobalVars[0])
0xd0: Stack[-1] = (bool) 0
0xd1: GlobalVars[0] = Stack[-1]; Pop(1)
0xd2: Push((int) 0)
0xd3: Push((float)3.0)
0xd4: @ SetTimer(Stack[-2], Stack[-1])
0xd5: Pop(2)
0xd6: Return(); Pop(0)

0xd7: PushEmpty()
0xd8: PushEmpty(float, float, float, float)
0xd9: Stack[-3] = Sqrt(Stack[-5]); Pop(0);
0xda: Stack[-2] = (int) 0
0xdb: Stack[-1] = (int) 1
0xdc: Call2 0xb7

0xdd: Stack[-6] = Stack[-4]
0xde: Pop(4)
0xdf: Return(); Pop(0)

0xe0: PushEmpty(int, bool, int, bool)
0xe1: Stack[-2] = (int) 0
0xe2: Push((int) 1)
0xe3: Pop(1); Push(Stack[-3] + Stack[-1]);
0xe4: Pop(1); Push(Stack[-6] + Stack[-1]);
0xe5: @ IsExistingSound(Stack[-2], Stack[-1])
0xe6: Pop(1)
0xe7: Pop(0); Push((bool) Stack[-1] == 0)
0xe8: IF (Stack[-1] == 0) GOTO 0xea; Pop(1)

0xe9: GOTO 0xed

0xea: Push((int) 1)
0xeb: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0xec: GOTO 0xe2

0xed: Stack[-6] = Stack[-2]
0xee: Return(); Pop(4)

0xef: PushEmpty(int, int, int, int)
0xf0: PushEmpty(int, string)
0xf1: Push("_")
0xf2: Stack[-2] = Stack[-8] + Stack[-1]; Pop(1);
0xf3: Call2 0xe0

0xf4: Stack[-4] = Stack[-2]
0xf5: Pop(2)
0xf6: Pop(0); Push((bool) Stack[-2] == 0)
0xf7: IF (Stack[-1] == 0) GOTO 0xff; Pop(1)

0xf8: Push("No sounds for "")
0xf9: Pop(1); Push(Stack[-1] + Stack[-6]);
0xfa: Push(""")
0xfb: Pop(2); Push(Stack[-2] + Stack[-1]);
0xfc: @ Trace(Stack[-1])
0xfd: Pop(1)
0xfe: GOTO 0x108

0xff: @ irand(Stack[-1], Stack[-2])
0x100: Pop(0)
0x101: Push("_")
0x102: Pop(1); Push(Stack[-6] + Stack[-1]);
0x103: Push((int) 1)
0x104: Pop(1); Push(Stack[-3] + Stack[-1]);
0x105: Pop(2); Push(Stack[-2] + Stack[-1]);
0x106: @ PlaySound(Stack[-1])
0x107: Pop(1)
0x108: Return(); Pop(4)

0x109: PushEmpty()
0x10a: Push(GlobalVars[0])
0x10b: IF (Stack[-1] == 0) GOTO 0x113; Pop(1)

0x10c: PushEmpty()
0x10d: Call2 0xcd

0x10e: Pop(0)
0x10f: PushEmpty(string)
0x110: Stack[-1] = Stack[-2]
0x111: Call2 0xef

0x112: Pop(1)
0x113: Return(); Pop(0)

0x114: PushEmpty()
0x115: Push((int) 0)
0x116: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x117: IF (Stack[-1] == 0) GOTO 0x121; Pop(1)

0x118: PushEmpty(string)
0x119: Stack[-1] = "hit_physical1"
0x11a: Call2 0xef

0x11b: Pop(1)
0x11c: PushEmpty(string)
0x11d: Stack[-1] = "scream_physical1"
0x11e: Call2 0x109

0x11f: Pop(1)
0x120: GOTO 0x160

0x121: Push((int) 1)
0x122: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x123: IF (Stack[-1] == 0) GOTO 0x12d; Pop(1)

0x124: PushEmpty(string)
0x125: Stack[-1] = "hit_physical2"
0x126: Call2 0xef

0x127: Pop(1)
0x128: PushEmpty(string)
0x129: Stack[-1] = "scream_physical2"
0x12a: Call2 0x109

0x12b: Pop(1)
0x12c: GOTO 0x160

0x12d: Push((int) 2)
0x12e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x12f: IF (Stack[-1] == 0) GOTO 0x139; Pop(1)

0x130: PushEmpty(string)
0x131: Stack[-1] = "hit_bullet"
0x132: Call2 0xef

0x133: Pop(1)
0x134: PushEmpty(string)
0x135: Stack[-1] = "scream_bullet"
0x136: Call2 0x109

0x137: Pop(1)
0x138: GOTO 0x160

0x139: Push((int) 3)
0x13a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x13b: IF (Stack[-1] == 0) GOTO 0x145; Pop(1)

0x13c: PushEmpty(string)
0x13d: Stack[-1] = "hit_oscoloc"
0x13e: Call2 0xef

0x13f: Pop(1)
0x140: PushEmpty(string)
0x141: Stack[-1] = "scream_oscoloc"
0x142: Call2 0x109

0x143: Pop(1)
0x144: GOTO 0x160

0x145: Push((int) 6)
0x146: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x147: IF (Stack[-1] == 0) GOTO 0x151; Pop(1)

0x148: PushEmpty(string)
0x149: Stack[-1] = "hit_mental"
0x14a: Call2 0xef

0x14b: Pop(1)
0x14c: PushEmpty(string)
0x14d: Stack[-1] = "scream_mental"
0x14e: Call2 0x109

0x14f: Pop(1)
0x150: GOTO 0x160

0x151: Push((int) 7)
0x152: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x153: IF (Stack[-1] == 0) GOTO 0x15d; Pop(1)

0x154: PushEmpty(string)
0x155: Stack[-1] = "hit_rat"
0x156: Call2 0xef

0x157: Pop(1)
0x158: PushEmpty(string)
0x159: Stack[-1] = "scream_rat"
0x15a: Call2 0x109

0x15b: Pop(1)
0x15c: GOTO 0x160

0x15d: Push((int) 4)
0x15e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x15f: IF (Stack[-1] == 0) GOTO 0x160; Pop(1)

0x160: Return(); Pop(0)

0x161: PushEmpty(cvector, cvector)
0x162: PushEmpty(int)
0x163: Stack[-1] = Stack[-5]
0x164: Call2 0x114

0x165: Pop(1)
0x166: PushEmpty(bool)
0x167: Stack[-1] = (bool) 0
0x168: Push((int) 5)
0x169: Pop(1); Push((bool) Stack[-6] != Stack[-1])
0x16a: IF (Stack[-1] == 0) GOTO 0x16f; Pop(1)

0x16b: Push((int) 6)
0x16c: Pop(1); Push((bool) Stack[-6] != Stack[-1])
0x16d: IF (Stack[-1] == 0) GOTO 0x16f; Pop(1)

0x16e: Stack[-1] = (bool) 1
0x16f: IF (Stack[-1] == 0) GOTO 0x190; Pop(1)

0x170: PushEmpty(bool)
0x171: Stack[-1] = (bool) 0
0x172: PushEmpty(object)
0x173: Call2 0xa7

0x174: Pop(0)
0x175: Pop(1); Push((bool) Stack[-7] != Stack[-1])
0x176: IF (Stack[-1] == 0) GOTO 0x17c; Pop(1)

0x177: Push("GetPosition")
0x178: Push((int) 1)
0x179: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x17a: IF (Stack[-1] == 0) GOTO 0x17c; Pop(1)

0x17b: Stack[-1] = (bool) 1
0x17c: IF (Stack[-1] == 0) GOTO 0x190; Pop(1)

0x17d: @ GetSpeed(Stack[-1])
0x17e: Pop(0)
0x17f: PushEmpty(cvector, cvector)
0x180: PushEmpty(cvector, object)
0x181: Stack[-1] = Stack[-9]
0x182: Call2 0xa0

0x183: Stack[-3] = Stack[-2]
0x184: Pop(2)
0x185: Call2 0xad

0x186: Pop(1)
0x187: Push((int) 400)
0x188: Pop(2); Push(Stack[-2] * Stack[-1]);
0x189: Stack[-2] = Stack[-2] - Stack[-1]; Pop(1);
0x18a: Pop(0); Push(Stack[-1] | Stack[-1]);
0x18b: Push((int) 160000)
0x18c: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x18d: IF (Stack[-1] == 0) GOTO 0x190; Pop(1)

0x18e: @ SetSpeed(Stack[-1])
0x18f: Pop(0)
0x190: Return(); Pop(2)

0x191: PushEmpty(float, float, float, float, bool, float, float, float, float, bool)
0x192: Push((int) 0)
0x193: Pop(1); Push((bool) Stack[-18] <= Stack[-1])
0x194: IF (Stack[-1] == 0) GOTO 0x1a5; Pop(1)

0x195: PushEmpty(bool)
0x196: Stack[-1] = (bool) 0
0x197: Push((float)4000.0)
0x198: Pop(1); Push((bool) Stack[-14] == Stack[-1])
0x199: IF (Stack[-1] == 0) GOTO 0x19e; Pop(1)

0x19a: Push((float)4000.0)
0x19b: Pop(1); Push((bool) Stack[-13] == Stack[-1])
0x19c: IF (Stack[-1] == 0) GOTO 0x19e; Pop(1)

0x19d: Stack[-1] = (bool) 1
0x19e: IF (Stack[-1] == 0) GOTO 0x1a2; Pop(1)

0x19f: Push((bool) 0)
0x1a0: @ ModSetDOFEnabled(Stack[-1])
0x1a1: Pop(1)
0x1a2: @ ModSetDOFParams(Stack[-14], Stack[-13], Stack[-12], Stack[-11])
0x1a3: Pop(0)
0x1a4: GOTO 0x1c7

0x1a5: Push((float)50.0)
0x1a6: Pop(1); Push(Stack[-13] - Stack[-1]);
0x1a7: Push((int) 1)
0x1a8: PushEmpty(float, float, float, float)
0x1a9: Push((int) 2)
0x1aa: Stack[-4] = Stack[-24] * Stack[-1]; Pop(1);
0x1ab: Stack[-2] = (int) 0
0x1ac: Stack[-1] = (float) 0.99
0x1ad: Call2 0xb7

0x1ae: Pop(3)
0x1af: Pop(2); Push(Stack[-2] - Stack[-1]);
0x1b0: Stack[-5] = Stack[-2] * Stack[-1]; Pop(2);
0x1b1: Push((float)70.0)
0x1b2: Pop(1); Push(Stack[-12] - Stack[-1]);
0x1b3: Push((int) 1)
0x1b4: PushEmpty(float, float, float, float)
0x1b5: Push((int) 2)
0x1b6: Stack[-4] = Stack[-24] * Stack[-1]; Pop(1);
0x1b7: Stack[-2] = (int) 0
0x1b8: Stack[-1] = (float) 0.99
0x1b9: Call2 0xb7

0x1ba: Pop(3)
0x1bb: Pop(2); Push(Stack[-2] - Stack[-1]);
0x1bc: Stack[-4] = Stack[-2] * Stack[-1]; Pop(2);
0x1bd: Push((float)50.0)
0x1be: Pop(1); Push((bool) Stack[-4] < Stack[-1])
0x1bf: IF (Stack[-1] == 0) GOTO 0x1c1; Pop(1)

0x1c0: Stack[-3] = (float) 50.0
0x1c1: Push((float)70.0)
0x1c2: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x1c3: IF (Stack[-1] == 0) GOTO 0x1c5; Pop(1)

0x1c4: Stack[-2] = (float) 70.0
0x1c5: @ ModSetDOFParams(Stack[-14], Stack[-13], Stack[-3], Stack[-2])
0x1c6: Pop(0)
0x1c7: @ ModGetDOFParams(Stack[-5], Stack[-4], Stack[-3], Stack[-2])
0x1c8: Pop(0)
0x1c9: @ ModDarkenLevel(Stack[-17])
0x1ca: Pop(0)
0x1cb: @ ModBlurLevel(Stack[-17])
0x1cc: Pop(0)
0x1cd: Push(Stack[-15])
0x1ce: IF (Stack[-1] == 0) GOTO 0x1d6; Pop(1)

0x1cf: Push((int) 1)
0x1d0: Push((float)0.1)
0x1d1: Pop(1); Push(Stack[-19] * Stack[-1]);
0x1d2: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1d3: Pop(1); Push(Stack[-17] * Stack[-1]);
0x1d4: @ SetCameraFOV(Stack[-1])
0x1d5: Pop(1)
0x1d6: Return(); Pop(10)

0x1d7: PushEmpty(bool, bool)
0x1d8: Push("blocking")
0x1d9: @ HasProperty(Stack[-1], Stack[-2])
0x1da: Pop(1)
0x1db: Pop(0); Push((bool) Stack[-1] == 0)
0x1dc: IF (Stack[-1] == 0) GOTO 0x1df; Pop(1)

0x1dd: Stack[-3] = (bool) 0
0x1de: Return(); Pop(2)

0x1df: Push("blocking")
0x1e0: @ GetProperty(Stack[-1], Stack[-2])
0x1e1: Pop(1)
0x1e2: Stack[-3] = Stack[-1]
0x1e3: Return(); Pop(2)

