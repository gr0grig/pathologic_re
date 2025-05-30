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
		EVENT_22 Op = 0x67 Vars = (object, int, float, float)
		EVENT_43 Op = 0x7d Vars = (object, int, float, float, cvector, cvector)

Events:
EVENT_7 Op = 0xa8 Vars = (int)

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
0xf: Call2 0x147

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

0x21: PushEmpty(float, bool, float, float, float, bool, float, float)
0x22: Stack[0 + Tasks[-1].StackPointer] = (float)0.0
0x23: Stack[-4] = Stack[-9]
0x24: Push((float)0.2)
0x25: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x26: IF (Stack[-1] == 0) GOTO 0x28; Pop(1)

0x27: Stack[-4] = (float) 0.2
0x28: PushEmpty(bool)
0x29: Call2 0x186

0x2a: Pop(0)
0x2b: Pop(1); Push((bool) Stack[-1] == 0)
0x2c: IF (Stack[-1] == 0) GOTO 0x33; Pop(1)

0x2d: PushEmpty(float, float)
0x2e: Push((float)2.0)
0x2f: Stack[-2] = Stack[-1] * Stack[-7]; Pop(1);
0x30: Call2 0xbd

0x31: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x32: Pop(2)
0x33: @ LockCameraFOV(Stack[-3])
0x34: Pop(0)
0x35: @ GetCameraCurrentFOV(Stack[-2])
0x36: Pop(0)
0x37: @ sync(Stack[-1])
0x38: Pop(0)
0x39: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] < Stack[0 + Tasks[-1].StackPointer])
0x3a: IF (Stack[-1] == 0) GOTO 0x4b; Pop(1)

0x3b: Push((float)2.0)
0x3c: Pop(1); Push(Stack[-2] * Stack[-1]);
0x3d: Push((int) 2)
0x3e: Pop(2); Push(Stack[-2] / Stack[-1]);
0x3f: Stack[0 + Tasks[-1].StackPointer] = Stack[0 + Tasks[-1].StackPointer] - Stack[-1]; Pop(1);
0x40: Push((int) 0)
0x41: Pop(1); Push((bool) Stack[0 + Tasks[-1].StackPointer] <= Stack[-1])
0x42: IF (Stack[-1] == 0) GOTO 0x4a; Pop(1)

0x43: PushEmpty(float, float, bool)
0x44: Stack[-3] = (int) 0
0x45: Stack[-2] = Stack[-5]
0x46: Stack[-1] = Stack[-6]
0x47: Call2 0x177

0x48: Pop(3)
0x49: GOTO 0x62

0x4a: GOTO 0x5b

0x4b: Push((float)2.0)
0x4c: Pop(1); Push(Stack[-2] * Stack[-1]);
0x4d: Stack[0 + Tasks[-1].StackPointer] = Stack[0 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x4e: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] >= Stack[1 + Tasks[-1].StackPointer])
0x4f: IF (Stack[-1] == 0) GOTO 0x5b; Pop(1)

0x50: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x51: IF (Stack[-1] == 0) GOTO 0x59; Pop(1)

0x52: PushEmpty(float, float, bool)
0x53: Stack[-3] = (int) 0
0x54: Stack[-2] = Stack[-5]
0x55: Stack[-1] = Stack[-6]
0x56: Call2 0x177

0x57: Pop(3)
0x58: GOTO 0x62

0x59: Stack[0 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer]
0x5a: Stack[1 + Tasks[-1].StackPointer] = (int)0
0x5b: PushEmpty(float, float, bool)
0x5c: Stack[-3] = Stack[0 + Tasks[-1].StackPointer]
0x5d: Stack[-2] = Stack[-5]
0x5e: Stack[-1] = Stack[-6]
0x5f: Call2 0x177

0x60: Pop(3)
0x61: GOTO 0x37

0x62: Push(Stack[-3])
0x63: IF (Stack[-1] == 0) GOTO 0x66; Pop(1)

0x64: @ UnlockCameraFOV(Stack[-3])
0x65: Pop(0)
0x66: Return(); Pop(8)

0x67: PushEmpty(float, float)
0x68: PushEmpty(object, int, float)
0x69: Stack[-3] = Stack[-9]
0x6a: Stack[-2] = Stack[-8]
0x6b: Stack[-1] = Stack[-7]
0x6c: Call2 0x147

0x6d: Pop(3)
0x6e: PushEmpty(float, float)
0x6f: Stack[-1] = Stack[-6]
0x70: Call2 0xbd

0x71: Stack[-3] = Stack[-2]
0x72: Pop(2)
0x73: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] < Stack[0 + Tasks[-1].StackPointer])
0x74: IF (Stack[-1] == 0) GOTO 0x79; Pop(1)

0x75: Pop(0); Push((bool) Stack[-1] > Stack[0 + Tasks[-1].StackPointer])
0x76: IF (Stack[-1] == 0) GOTO 0x78; Pop(1)

0x77: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x78: GOTO 0x7c

0x79: Pop(0); Push((bool) Stack[-1] > Stack[1 + Tasks[-1].StackPointer])
0x7a: IF (Stack[-1] == 0) GOTO 0x7c; Pop(1)

0x7b: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x7c: Return(); Pop(2)

0x7d: PushEmpty()
0x7e: PushEmpty(object, int, float, float)
0x7f: Stack[-4] = Stack[-10]
0x80: Stack[-3] = Stack[-9]
0x81: Stack[-2] = Stack[-8]
0x82: Stack[-1] = Stack[-7]
0x83: Call2 0x67

0x84: Pop(4)
0x85: Return(); Pop(0)

0x86: PushEmpty(cvector, cvector, cvector, cvector)
0x87: @ GetPosition(Stack[-2])
0x88: Pop(0)
0x89: @@ GetPosition(Stack[-1])
0x8a: Pop(0)
0x8b: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x8c: Return(); Pop(4)

0x8d: PushEmpty(object, object)
0x8e: @ self(Stack[-1])
0x8f: Pop(0)
0x90: Stack[-3] = Stack[-1]
0x91: Return(); Pop(2)

0x92: Stack[-1] = 0
0x93: PushEmpty(float, float)
0x94: Pop(0); Push(Stack[-3] | Stack[-3]);
0x95: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x96: Push((float)0.0)
0x97: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x98: IF (Stack[-1] == 0) GOTO 0x9b; Pop(1)

0x99: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x9a: Return(); Pop(2)

0x9b: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x9c: Return(); Pop(2)

0x9d: PushEmpty()
0x9e: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x9f: IF (Stack[-1] == 0) GOTO 0xa2; Pop(1)

0xa0: Stack[-4] = Stack[-2]
0xa1: Return(); Pop(0)

0xa2: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0xa3: IF (Stack[-1] == 0) GOTO 0xa6; Pop(1)

0xa4: Stack[-4] = Stack[-1]
0xa5: Return(); Pop(0)

0xa6: Stack[-4] = Stack[-3]
0xa7: Return(); Pop(0)

0xa8: PushEmpty()
0xa9: Push((int) 0)
0xaa: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xab: IF (Stack[-1] == 0) GOTO 0xb2; Pop(1)

0xac: Push(GlobalVars[0])
0xad: Stack[-1] = (bool) 1
0xae: GlobalVars[0] = Stack[-1]; Pop(1)
0xaf: Push((int) 0)
0xb0: @ KillTimer(Stack[-1])
0xb1: Pop(1)
0xb2: Return(); Pop(0)

0xb3: Push(GlobalVars[0])
0xb4: IF (Stack[-1] == 0) GOTO 0xbc; Pop(1)

0xb5: Push(GlobalVars[0])
0xb6: Stack[-1] = (bool) 0
0xb7: GlobalVars[0] = Stack[-1]; Pop(1)
0xb8: Push((int) 0)
0xb9: Push((float)3.0)
0xba: @ SetTimer(Stack[-2], Stack[-1])
0xbb: Pop(2)
0xbc: Return(); Pop(0)

0xbd: PushEmpty()
0xbe: PushEmpty(float, float, float, float)
0xbf: Stack[-3] = Sqrt(Stack[-5]); Pop(0);
0xc0: Stack[-2] = (int) 0
0xc1: Stack[-1] = (int) 1
0xc2: Call2 0x9d

0xc3: Stack[-6] = Stack[-4]
0xc4: Pop(4)
0xc5: Return(); Pop(0)

0xc6: PushEmpty(int, bool, int, bool)
0xc7: Stack[-2] = (int) 0
0xc8: Push((int) 1)
0xc9: Pop(1); Push(Stack[-3] + Stack[-1]);
0xca: Pop(1); Push(Stack[-6] + Stack[-1]);
0xcb: @ IsExistingSound(Stack[-2], Stack[-1])
0xcc: Pop(1)
0xcd: Pop(0); Push((bool) Stack[-1] == 0)
0xce: IF (Stack[-1] == 0) GOTO 0xd0; Pop(1)

0xcf: GOTO 0xd3

0xd0: Push((int) 1)
0xd1: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0xd2: GOTO 0xc8

0xd3: Stack[-6] = Stack[-2]
0xd4: Return(); Pop(4)

0xd5: PushEmpty(int, int, int, int)
0xd6: PushEmpty(int, string)
0xd7: Push("_")
0xd8: Stack[-2] = Stack[-8] + Stack[-1]; Pop(1);
0xd9: Call2 0xc6

0xda: Stack[-4] = Stack[-2]
0xdb: Pop(2)
0xdc: Pop(0); Push((bool) Stack[-2] == 0)
0xdd: IF (Stack[-1] == 0) GOTO 0xe5; Pop(1)

0xde: Push("No sounds for "")
0xdf: Pop(1); Push(Stack[-1] + Stack[-6]);
0xe0: Push(""")
0xe1: Pop(2); Push(Stack[-2] + Stack[-1]);
0xe2: @ Trace(Stack[-1])
0xe3: Pop(1)
0xe4: GOTO 0xee

0xe5: @ irand(Stack[-1], Stack[-2])
0xe6: Pop(0)
0xe7: Push("_")
0xe8: Pop(1); Push(Stack[-6] + Stack[-1]);
0xe9: Push((int) 1)
0xea: Pop(1); Push(Stack[-3] + Stack[-1]);
0xeb: Pop(2); Push(Stack[-2] + Stack[-1]);
0xec: @ PlaySound(Stack[-1])
0xed: Pop(1)
0xee: Return(); Pop(4)

0xef: PushEmpty()
0xf0: Push(GlobalVars[0])
0xf1: IF (Stack[-1] == 0) GOTO 0xf9; Pop(1)

0xf2: PushEmpty()
0xf3: Call2 0xb3

0xf4: Pop(0)
0xf5: PushEmpty(string)
0xf6: Stack[-1] = Stack[-2]
0xf7: Call2 0xd5

0xf8: Pop(1)
0xf9: Return(); Pop(0)

0xfa: PushEmpty()
0xfb: Push((int) 0)
0xfc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xfd: IF (Stack[-1] == 0) GOTO 0x107; Pop(1)

0xfe: PushEmpty(string)
0xff: Stack[-1] = "hit_physical1"
0x100: Call2 0xd5

0x101: Pop(1)
0x102: PushEmpty(string)
0x103: Stack[-1] = "scream_physical1"
0x104: Call2 0xef

0x105: Pop(1)
0x106: GOTO 0x146

0x107: Push((int) 1)
0x108: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x109: IF (Stack[-1] == 0) GOTO 0x113; Pop(1)

0x10a: PushEmpty(string)
0x10b: Stack[-1] = "hit_physical2"
0x10c: Call2 0xd5

0x10d: Pop(1)
0x10e: PushEmpty(string)
0x10f: Stack[-1] = "scream_physical2"
0x110: Call2 0xef

0x111: Pop(1)
0x112: GOTO 0x146

0x113: Push((int) 2)
0x114: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x115: IF (Stack[-1] == 0) GOTO 0x11f; Pop(1)

0x116: PushEmpty(string)
0x117: Stack[-1] = "hit_bullet"
0x118: Call2 0xd5

0x119: Pop(1)
0x11a: PushEmpty(string)
0x11b: Stack[-1] = "scream_bullet"
0x11c: Call2 0xef

0x11d: Pop(1)
0x11e: GOTO 0x146

0x11f: Push((int) 3)
0x120: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x121: IF (Stack[-1] == 0) GOTO 0x12b; Pop(1)

0x122: PushEmpty(string)
0x123: Stack[-1] = "hit_oscoloc"
0x124: Call2 0xd5

0x125: Pop(1)
0x126: PushEmpty(string)
0x127: Stack[-1] = "scream_oscoloc"
0x128: Call2 0xef

0x129: Pop(1)
0x12a: GOTO 0x146

0x12b: Push((int) 6)
0x12c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x12d: IF (Stack[-1] == 0) GOTO 0x137; Pop(1)

0x12e: PushEmpty(string)
0x12f: Stack[-1] = "hit_mental"
0x130: Call2 0xd5

0x131: Pop(1)
0x132: PushEmpty(string)
0x133: Stack[-1] = "scream_mental"
0x134: Call2 0xef

0x135: Pop(1)
0x136: GOTO 0x146

0x137: Push((int) 7)
0x138: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x139: IF (Stack[-1] == 0) GOTO 0x143; Pop(1)

0x13a: PushEmpty(string)
0x13b: Stack[-1] = "hit_rat"
0x13c: Call2 0xd5

0x13d: Pop(1)
0x13e: PushEmpty(string)
0x13f: Stack[-1] = "scream_rat"
0x140: Call2 0xef

0x141: Pop(1)
0x142: GOTO 0x146

0x143: Push((int) 4)
0x144: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x145: IF (Stack[-1] == 0) GOTO 0x146; Pop(1)

0x146: Return(); Pop(0)

0x147: PushEmpty(cvector, cvector)
0x148: PushEmpty(int)
0x149: Stack[-1] = Stack[-5]
0x14a: Call2 0xfa

0x14b: Pop(1)
0x14c: PushEmpty(bool)
0x14d: Stack[-1] = (bool) 0
0x14e: Push((int) 5)
0x14f: Pop(1); Push((bool) Stack[-6] != Stack[-1])
0x150: IF (Stack[-1] == 0) GOTO 0x155; Pop(1)

0x151: Push((int) 6)
0x152: Pop(1); Push((bool) Stack[-6] != Stack[-1])
0x153: IF (Stack[-1] == 0) GOTO 0x155; Pop(1)

0x154: Stack[-1] = (bool) 1
0x155: IF (Stack[-1] == 0) GOTO 0x176; Pop(1)

0x156: PushEmpty(bool)
0x157: Stack[-1] = (bool) 0
0x158: PushEmpty(object)
0x159: Call2 0x8d

0x15a: Pop(0)
0x15b: Pop(1); Push((bool) Stack[-7] != Stack[-1])
0x15c: IF (Stack[-1] == 0) GOTO 0x162; Pop(1)

0x15d: Push("GetPosition")
0x15e: Push((int) 1)
0x15f: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x160: IF (Stack[-1] == 0) GOTO 0x162; Pop(1)

0x161: Stack[-1] = (bool) 1
0x162: IF (Stack[-1] == 0) GOTO 0x176; Pop(1)

0x163: @ GetSpeed(Stack[-1])
0x164: Pop(0)
0x165: PushEmpty(cvector, cvector)
0x166: PushEmpty(cvector, object)
0x167: Stack[-1] = Stack[-9]
0x168: Call2 0x86

0x169: Stack[-3] = Stack[-2]
0x16a: Pop(2)
0x16b: Call2 0x93

0x16c: Pop(1)
0x16d: Push((int) 400)
0x16e: Pop(2); Push(Stack[-2] * Stack[-1]);
0x16f: Stack[-2] = Stack[-2] - Stack[-1]; Pop(1);
0x170: Pop(0); Push(Stack[-1] | Stack[-1]);
0x171: Push((int) 160000)
0x172: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x173: IF (Stack[-1] == 0) GOTO 0x176; Pop(1)

0x174: @ SetSpeed(Stack[-1])
0x175: Pop(0)
0x176: Return(); Pop(2)

0x177: PushEmpty()
0x178: @ ModDarkenLevel(Stack[-3])
0x179: Pop(0)
0x17a: @ ModBlurLevel(Stack[-3])
0x17b: Pop(0)
0x17c: Push(Stack[-1])
0x17d: IF (Stack[-1] == 0) GOTO 0x185; Pop(1)

0x17e: Push((int) 1)
0x17f: Push((float)0.1)
0x180: Pop(1); Push(Stack[-5] * Stack[-1]);
0x181: Pop(2); Push(Stack[-2] + Stack[-1]);
0x182: Pop(1); Push(Stack[-3] * Stack[-1]);
0x183: @ SetCameraFOV(Stack[-1])
0x184: Pop(1)
0x185: Return(); Pop(0)

0x186: PushEmpty(bool, bool)
0x187: Push("blocking")
0x188: @ HasProperty(Stack[-1], Stack[-2])
0x189: Pop(1)
0x18a: Pop(0); Push((bool) Stack[-1] == 0)
0x18b: IF (Stack[-1] == 0) GOTO 0x18e; Pop(1)

0x18c: Stack[-3] = (bool) 0
0x18d: Return(); Pop(2)

0x18e: Push("blocking")
0x18f: @ GetProperty(Stack[-1], Stack[-2])
0x190: Pop(1)
0x191: Stack[-3] = Stack[-1]
0x192: Return(); Pop(2)

