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
	GetPosition

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

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_22 Op = 0x7 Vars = (object, int, float, float)
	GTASK_1 Vars = (float, float) Params = 1
		EVENT_22 Op = 0x59 Vars = (object, int, float, float)

Events:
EVENT_7 Op = 0x91 Vars = (int)

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
0xf: Call 0x124

0x10: Pop(3)
0x11: PushEmpty(float)
0x12: Stack[-1] = Stack[-3]
0x13: Push(-1, 2); TaskCall(1)
0x14: Call 0x18

0x15: Pop(-1, 2); TaskReturn
0x16: Pop(1)
0x17: Return(); Pop(0)

0x18: PushEmpty(float, bool, float, float, float, bool, float, float)
0x19: Stack[0 + Tasks[-1].StackPointer] = (float)0.0
0x1a: Stack[-4] = Stack[-9]
0x1b: Push((float)0.2)
0x1c: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x1d: IF (Stack[-1] == 0) GOTO 0x1f; Pop(1)

0x1e: Stack[-4] = (float) 0.2
0x1f: PushEmpty(float, float)
0x20: Push((float)2.0)
0x21: Stack[-2] = Stack[-1] * Stack[-7]; Pop(1);
0x22: Call 0xa6

0x23: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x24: Pop(2)
0x25: @ LockCameraFOV(Stack[-3])
0x26: Pop(0)
0x27: @ GetCameraCurrentFOV(Stack[-2])
0x28: Pop(0)
0x29: @ sync(Stack[-1])
0x2a: Pop(0)
0x2b: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] < Stack[0 + Tasks[-1].StackPointer])
0x2c: IF (Stack[-1] == 0) GOTO 0x3d; Pop(1)

0x2d: Push((float)2.0)
0x2e: Pop(1); Push(Stack[-2] * Stack[-1]);
0x2f: Push((int) 2)
0x30: Pop(2); Push(Stack[-2] / Stack[-1]);
0x31: Stack[0 + Tasks[-1].StackPointer] = Stack[0 + Tasks[-1].StackPointer] - Stack[-1]; Pop(1);
0x32: Push((int) 0)
0x33: Pop(1); Push((bool) Stack[0 + Tasks[-1].StackPointer] <= Stack[-1])
0x34: IF (Stack[-1] == 0) GOTO 0x3c; Pop(1)

0x35: PushEmpty(float, float, bool)
0x36: Stack[-3] = (int) 0
0x37: Stack[-2] = Stack[-5]
0x38: Stack[-1] = Stack[-6]
0x39: Call 0x154

0x3a: Pop(3)
0x3b: GOTO 0x54

0x3c: GOTO 0x4d

0x3d: Push((float)2.0)
0x3e: Pop(1); Push(Stack[-2] * Stack[-1]);
0x3f: Stack[0 + Tasks[-1].StackPointer] = Stack[0 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x40: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] >= Stack[1 + Tasks[-1].StackPointer])
0x41: IF (Stack[-1] == 0) GOTO 0x4d; Pop(1)

0x42: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x43: IF (Stack[-1] == 0) GOTO 0x4b; Pop(1)

0x44: PushEmpty(float, float, bool)
0x45: Stack[-3] = (int) 0
0x46: Stack[-2] = Stack[-5]
0x47: Stack[-1] = Stack[-6]
0x48: Call 0x154

0x49: Pop(3)
0x4a: GOTO 0x54

0x4b: Stack[0 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer]
0x4c: Stack[1 + Tasks[-1].StackPointer] = (int)0
0x4d: PushEmpty(float, float, bool)
0x4e: Stack[-3] = Stack[0 + Tasks[-1].StackPointer]
0x4f: Stack[-2] = Stack[-5]
0x50: Stack[-1] = Stack[-6]
0x51: Call 0x154

0x52: Pop(3)
0x53: GOTO 0x29

0x54: Push(Stack[-3])
0x55: IF (Stack[-1] == 0) GOTO 0x58; Pop(1)

0x56: @ UnlockCameraFOV(Stack[-3])
0x57: Pop(0)
0x58: Return(); Pop(8)

0x59: PushEmpty(float, float)
0x5a: PushEmpty(object, int, float)
0x5b: Stack[-3] = Stack[-9]
0x5c: Stack[-2] = Stack[-8]
0x5d: Stack[-1] = Stack[-7]
0x5e: Call 0x124

0x5f: Pop(3)
0x60: PushEmpty(float, float)
0x61: Stack[-1] = Stack[-6]
0x62: Call 0xa6

0x63: Stack[-3] = Stack[-2]
0x64: Pop(2)
0x65: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] < Stack[0 + Tasks[-1].StackPointer])
0x66: IF (Stack[-1] == 0) GOTO 0x6b; Pop(1)

0x67: Pop(0); Push((bool) Stack[-1] > Stack[0 + Tasks[-1].StackPointer])
0x68: IF (Stack[-1] == 0) GOTO 0x6a; Pop(1)

0x69: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x6a: GOTO 0x6e

0x6b: Pop(0); Push((bool) Stack[-1] > Stack[1 + Tasks[-1].StackPointer])
0x6c: IF (Stack[-1] == 0) GOTO 0x6e; Pop(1)

0x6d: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x6e: Return(); Pop(2)

0x6f: PushEmpty(cvector, cvector, cvector, cvector)
0x70: @ GetPosition(Stack[-2])
0x71: Pop(0)
0x72: @@ GetPosition(Stack[-1])
0x73: Pop(0)
0x74: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x75: Return(); Pop(4)

0x76: PushEmpty(object, object)
0x77: @ self(Stack[-1])
0x78: Pop(0)
0x79: Stack[-3] = Stack[-1]
0x7a: Return(); Pop(2)

0x7b: Stack[-1] = 0
0x7c: PushEmpty(float, float)
0x7d: Pop(0); Push(Stack[-3] | Stack[-3]);
0x7e: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x7f: Push((float)0.0)
0x80: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x81: IF (Stack[-1] == 0) GOTO 0x84; Pop(1)

0x82: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x83: Return(); Pop(2)

0x84: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x85: Return(); Pop(2)

0x86: PushEmpty()
0x87: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x88: IF (Stack[-1] == 0) GOTO 0x8b; Pop(1)

0x89: Stack[-4] = Stack[-2]
0x8a: Return(); Pop(0)

0x8b: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x8c: IF (Stack[-1] == 0) GOTO 0x8f; Pop(1)

0x8d: Stack[-4] = Stack[-1]
0x8e: Return(); Pop(0)

0x8f: Stack[-4] = Stack[-3]
0x90: Return(); Pop(0)

0x91: PushEmpty()
0x92: Push((int) 0)
0x93: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x94: IF (Stack[-1] == 0) GOTO 0x9b; Pop(1)

0x95: Push(GlobalVars[0])
0x96: Stack[-1] = (bool) 1
0x97: GlobalVars[0] = Stack[-1]; Pop(1)
0x98: Push((int) 0)
0x99: @ KillTimer(Stack[-1])
0x9a: Pop(1)
0x9b: Return(); Pop(0)

0x9c: Push(GlobalVars[0])
0x9d: IF (Stack[-1] == 0) GOTO 0xa5; Pop(1)

0x9e: Push(GlobalVars[0])
0x9f: Stack[-1] = (bool) 0
0xa0: GlobalVars[0] = Stack[-1]; Pop(1)
0xa1: Push((int) 0)
0xa2: Push((float)3.0)
0xa3: @ SetTimer(Stack[-2], Stack[-1])
0xa4: Pop(2)
0xa5: Return(); Pop(0)

0xa6: PushEmpty()
0xa7: PushEmpty(float, float, float, float)
0xa8: Stack[-3] = Sqrt(Stack[-5]); Pop(0);
0xa9: Stack[-2] = (int) 0
0xaa: Stack[-1] = (int) 1
0xab: Call 0x86

0xac: Stack[-6] = Stack[-4]
0xad: Pop(4)
0xae: Return(); Pop(0)

0xaf: PushEmpty(int, bool, int, bool)
0xb0: Stack[-2] = (int) 0
0xb1: Push((int) 1)
0xb2: Pop(1); Push(Stack[-3] + Stack[-1]);
0xb3: Pop(1); Push(Stack[-6] + Stack[-1]);
0xb4: @ IsExistingSound(Stack[-2], Stack[-1])
0xb5: Pop(1)
0xb6: Pop(0); Push((bool) Stack[-1] == 0)
0xb7: IF (Stack[-1] == 0) GOTO 0xb9; Pop(1)

0xb8: GOTO 0xbc

0xb9: Push((int) 1)
0xba: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0xbb: GOTO 0xb1

0xbc: Stack[-6] = Stack[-2]
0xbd: Return(); Pop(4)

0xbe: PushEmpty(int, int, int, int)
0xbf: PushEmpty(int, string)
0xc0: Push("_")
0xc1: Stack[-2] = Stack[-8] + Stack[-1]; Pop(1);
0xc2: Call 0xaf

0xc3: Stack[-4] = Stack[-2]
0xc4: Pop(2)
0xc5: Pop(0); Push((bool) Stack[-2] == 0)
0xc6: IF (Stack[-1] == 0) GOTO 0xce; Pop(1)

0xc7: Push("No sounds for "")
0xc8: Pop(1); Push(Stack[-1] + Stack[-6]);
0xc9: Push(""")
0xca: Pop(2); Push(Stack[-2] + Stack[-1]);
0xcb: @ Trace(Stack[-1])
0xcc: Pop(1)
0xcd: GOTO 0xd7

0xce: @ irand(Stack[-1], Stack[-2])
0xcf: Pop(0)
0xd0: Push("_")
0xd1: Pop(1); Push(Stack[-6] + Stack[-1]);
0xd2: Push((int) 1)
0xd3: Pop(1); Push(Stack[-3] + Stack[-1]);
0xd4: Pop(2); Push(Stack[-2] + Stack[-1]);
0xd5: @ PlaySound(Stack[-1])
0xd6: Pop(1)
0xd7: Return(); Pop(4)

0xd8: PushEmpty()
0xd9: Push(GlobalVars[0])
0xda: IF (Stack[-1] == 0) GOTO 0xe2; Pop(1)

0xdb: PushEmpty()
0xdc: Call 0x9c

0xdd: Pop(0)
0xde: PushEmpty(string)
0xdf: Stack[-1] = Stack[-2]
0xe0: Call 0xbe

0xe1: Pop(1)
0xe2: Return(); Pop(0)

0xe3: PushEmpty()
0xe4: Push((int) 0)
0xe5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xe6: IF (Stack[-1] == 0) GOTO 0xf0; Pop(1)

0xe7: PushEmpty(string)
0xe8: Stack[-1] = "hit_physical1"
0xe9: Call 0xbe

0xea: Pop(1)
0xeb: PushEmpty(string)
0xec: Stack[-1] = "scream_physical1"
0xed: Call 0xd8

0xee: Pop(1)
0xef: GOTO 0x123

0xf0: Push((int) 1)
0xf1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf2: IF (Stack[-1] == 0) GOTO 0xfc; Pop(1)

0xf3: PushEmpty(string)
0xf4: Stack[-1] = "hit_physical2"
0xf5: Call 0xbe

0xf6: Pop(1)
0xf7: PushEmpty(string)
0xf8: Stack[-1] = "scream_physical2"
0xf9: Call 0xd8

0xfa: Pop(1)
0xfb: GOTO 0x123

0xfc: Push((int) 2)
0xfd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xfe: IF (Stack[-1] == 0) GOTO 0x108; Pop(1)

0xff: PushEmpty(string)
0x100: Stack[-1] = "hit_bullet"
0x101: Call 0xbe

0x102: Pop(1)
0x103: PushEmpty(string)
0x104: Stack[-1] = "scream_bullet"
0x105: Call 0xd8

0x106: Pop(1)
0x107: GOTO 0x123

0x108: Push((int) 3)
0x109: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x10a: IF (Stack[-1] == 0) GOTO 0x114; Pop(1)

0x10b: PushEmpty(string)
0x10c: Stack[-1] = "hit_oscoloc"
0x10d: Call 0xbe

0x10e: Pop(1)
0x10f: PushEmpty(string)
0x110: Stack[-1] = "scream_oscoloc"
0x111: Call 0xd8

0x112: Pop(1)
0x113: GOTO 0x123

0x114: Push((int) 6)
0x115: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x116: IF (Stack[-1] == 0) GOTO 0x120; Pop(1)

0x117: PushEmpty(string)
0x118: Stack[-1] = "hit_mental"
0x119: Call 0xbe

0x11a: Pop(1)
0x11b: PushEmpty(string)
0x11c: Stack[-1] = "scream_mental"
0x11d: Call 0xd8

0x11e: Pop(1)
0x11f: GOTO 0x123

0x120: Push((int) 4)
0x121: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x122: IF (Stack[-1] == 0) GOTO 0x123; Pop(1)

0x123: Return(); Pop(0)

0x124: PushEmpty(cvector, cvector)
0x125: PushEmpty(int)
0x126: Stack[-1] = Stack[-5]
0x127: Call 0xe3

0x128: Pop(1)
0x129: PushEmpty(bool)
0x12a: Stack[-1] = (bool) 0
0x12b: Push((int) 5)
0x12c: Pop(1); Push((bool) Stack[-6] != Stack[-1])
0x12d: IF (Stack[-1] == 0) GOTO 0x132; Pop(1)

0x12e: Push((int) 6)
0x12f: Pop(1); Push((bool) Stack[-6] != Stack[-1])
0x130: IF (Stack[-1] == 0) GOTO 0x132; Pop(1)

0x131: Stack[-1] = (bool) 1
0x132: IF (Stack[-1] == 0) GOTO 0x153; Pop(1)

0x133: PushEmpty(bool)
0x134: Stack[-1] = (bool) 0
0x135: PushEmpty(object)
0x136: Call 0x76

0x137: Pop(0)
0x138: Pop(1); Push((bool) Stack[-7] != Stack[-1])
0x139: IF (Stack[-1] == 0) GOTO 0x13f; Pop(1)

0x13a: Push("GetPosition")
0x13b: Push((int) 1)
0x13c: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x13d: IF (Stack[-1] == 0) GOTO 0x13f; Pop(1)

0x13e: Stack[-1] = (bool) 1
0x13f: IF (Stack[-1] == 0) GOTO 0x153; Pop(1)

0x140: @ GetSpeed(Stack[-1])
0x141: Pop(0)
0x142: PushEmpty(cvector, cvector)
0x143: PushEmpty(cvector, object)
0x144: Stack[-1] = Stack[-9]
0x145: Call 0x6f

0x146: Stack[-3] = Stack[-2]
0x147: Pop(2)
0x148: Call 0x7c

0x149: Pop(1)
0x14a: Push((int) 400)
0x14b: Pop(2); Push(Stack[-2] * Stack[-1]);
0x14c: Stack[-2] = Stack[-2] - Stack[-1]; Pop(1);
0x14d: Pop(0); Push(Stack[-1] | Stack[-1]);
0x14e: Push((int) 160000)
0x14f: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x150: IF (Stack[-1] == 0) GOTO 0x153; Pop(1)

0x151: @ SetSpeed(Stack[-1])
0x152: Pop(0)
0x153: Return(); Pop(2)

0x154: PushEmpty()
0x155: @ ModDarkenLevel(Stack[-3])
0x156: Pop(0)
0x157: @ ModBlurLevel(Stack[-3])
0x158: Pop(0)
0x159: Push(Stack[-1])
0x15a: IF (Stack[-1] == 0) GOTO 0x162; Pop(1)

0x15b: Push((int) 1)
0x15c: Push((float)0.1)
0x15d: Pop(1); Push(Stack[-5] * Stack[-1]);
0x15e: Pop(2); Push(Stack[-2] + Stack[-1]);
0x15f: Pop(1); Push(Stack[-3] * Stack[-1]);
0x160: @ SetCameraFOV(Stack[-1])
0x161: Pop(1)
0x162: Return(); Pop(0)

