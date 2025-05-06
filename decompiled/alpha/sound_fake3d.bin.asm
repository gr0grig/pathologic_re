GlobalVarCount = 11
	G_VAR_0 float reference_distance
	G_VAR_1 float sound_distance
	G_VAR_2 float min_repeat_delay
	G_VAR_3 float max_repeat_delay
	G_VAR_4 int num_sounds
	G_VAR_5 int night
	G_VAR_6 int day
	G_VAR_7 int evening
	G_VAR_8 int morning
	G_VAR_9 int play_in_dregion
	G_VAR_10 int play_in_region

Strings:
	GetPosition
	GetRegionByPt
	player
	Region
	State
	sound0
	sound

Import:
	Hold (0 args)
	StopGroup0 (0 args)
	irand (2 args)
	WaitForSoundToLoad (1 args)
	PlaySound (3 args)
	rand (3 args)
	Sleep (1 args)
	GetPosition (1 args)
	GetScene (1 args)
	FindActor (2 args)
	IsLoaded (1 args)
	GetGameTime (1 args)
	GetVariable (2 args)

RunOp = 0x6
RunTask = 1

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_5 Op = 0x3 Vars = ()
	GTASK_1 Vars = (int) Params = 0
		EVENT_6 Op = 0x51 Vars = ()
	GTASK_2  Params = 1
		EVENT_6 Op = 0xcc Vars = ()


0x0: @ Hold()
0x1: Pop(0)
0x2: Return(); Pop(0)

0x3: @ StopGroup0()
0x4: Pop(0)
0x5: Return(); Pop(0)

0x6: PushEmpty(float, float, int, float, float, float, int, float)
0x7: Push(GlobalVars[4])
0x8: Push((int) 0)
0x9: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0xa: IF (Stack[-1] == 0) GOTO 0xc; Pop(1)

0xb: Return(); Pop(8)

0xc: PushEmpty(bool)
0xd: Call 0xf1

0xe: Pop(0)
0xf: Pop(1); Push((bool) Stack[-1] == 0)
0x10: IF (Stack[-1] == 0) GOTO 0x16; Pop(1)

0x11: PushEmpty()
0x12: Push(-0, 0); TaskCall(0)
0x13: Call 0x0

0x14: Pop(-0, 0); TaskReturn
0x15: Pop(0)
0x16: Stack[0 + Tasks[-1].StackPointer] = (int)0
0x17: PushEmpty(float)
0x18: Push(-1, 0); TaskCall(2)
0x19: Call 0x5c

0x1a: Pop(-1, 0); TaskReturn
0x1b: Stack[-5] = Stack[-1]
0x1c: Pop(1)
0x1d: Push(GlobalVars[0])
0x1e: Push((int) 0)
0x1f: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x20: IF (Stack[-1] == 0) GOTO 0x23; Pop(1)

0x21: Stack[-3] = (float) 1.0
0x22: GOTO 0x2c

0x23: Push((float)1.0)
0x24: Push((int) 1)
0x25: Pop(0); Push(Stack[-6] * Stack[-6]);
0x26: Push(GlobalVars[0])
0x27: Pop(2); Push(Stack[-2] / Stack[-1]);
0x28: Push(GlobalVars[0])
0x29: Pop(2); Push(Stack[-2] / Stack[-1]);
0x2a: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2b: Stack[-5] = Stack[-2] / Stack[-1]; Pop(2);
0x2c: Stack[-2] = (int) 0
0x2d: Push(GlobalVars[4])
0x2e: Push((int) 1)
0x2f: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x30: IF (Stack[-1] == 0) GOTO 0x3c; Pop(1)

0x31: Push(GlobalVars[4])
0x32: Push((int) 1)
0x33: Pop(2); Push(Stack[-2] - Stack[-1]);
0x34: @ irand(Stack[-3], Stack[-1])
0x35: Pop(1)
0x36: Pop(0); Push(Stack[0 + StackPtr] + Stack[-2]);
0x37: Push((int) 1)
0x38: Pop(2); Push(Stack[-2] + Stack[-1]);
0x39: Push(GlobalVars[4])
0x3a: Stack[-4] = Stack[-2] % Stack[-1]; Pop(2);
0x3b: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x3c: PushEmpty(string, int)
0x3d: Stack[-1] = Stack[-4]
0x3e: Call 0x124

0x3f: Pop(1)
0x40: @ WaitForSoundToLoad(Stack[-1])
0x41: Pop(1)
0x42: PushEmpty(string, int)
0x43: Stack[-1] = Stack[-4]
0x44: Call 0x124

0x45: Pop(1)
0x46: Push((bool) 0)
0x47: @ PlaySound(Stack[-2], Stack[-1], Stack[-5])
0x48: Pop(2)
0x49: Push(GlobalVars[2])
0x4a: Push(GlobalVars[3])
0x4b: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x4c: Pop(2)
0x4d: @ Sleep(Stack[-1])
0x4e: Pop(0)
0x4f: GOTO 0x17

0x50: Return(); Pop(8)

0x51: PushEmpty()
0x52: Push(-0, 0); TaskCall(0)
0x53: Call 0x0

0x54: Pop(-0, 0); TaskReturn
0x55: Pop(0)
0x56: PushEmpty(float)
0x57: Push(-1, 0); TaskCall(2)
0x58: Call 0x5c

0x59: Pop(-1, 0); TaskReturn
0x5a: Pop(1)
0x5b: Return(); Pop(0)

0x5c: PushEmpty(object, int, float, object, int, float)
0x5d: PushEmpty(object)
0x5e: Call 0xea

0x5f: Stack[-4] = Stack[-1]
0x60: Pop(1)
0x61: Pop(0); Push((bool) Stack[-3] == 0)
0x62: IF (Stack[-1] == 0) GOTO 0x67; Pop(1)

0x63: Push((int) 10)
0x64: @ Sleep(Stack[-1])
0x65: Pop(1)
0x66: GOTO 0xc9

0x67: PushEmpty(int)
0x68: Call 0xdf

0x69: Stack[-3] = Stack[-1]
0x6a: Pop(1)
0x6b: PushEmpty(bool, int)
0x6c: Stack[-1] = Stack[-4]
0x6d: Call 0x104

0x6e: Pop(1)
0x6f: IF (Stack[-1] == 0) GOTO 0x78; Pop(1)

0x70: Push(GlobalVars[10])
0x71: Push((int) 0)
0x72: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x73: IF (Stack[-1] == 0) GOTO 0x78; Pop(1)

0x74: Push((int) 10)
0x75: @ Sleep(Stack[-1])
0x76: Pop(1)
0x77: GOTO 0xc9

0x78: PushEmpty(bool, int)
0x79: Stack[-1] = Stack[-4]
0x7a: Call 0x114

0x7b: Pop(1)
0x7c: IF (Stack[-1] == 0) GOTO 0x85; Pop(1)

0x7d: Push(GlobalVars[9])
0x7e: Push((int) 0)
0x7f: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x80: IF (Stack[-1] == 0) GOTO 0x85; Pop(1)

0x81: Push((int) 10)
0x82: @ Sleep(Stack[-1])
0x83: Pop(1)
0x84: GOTO 0xc9

0x85: PushEmpty(float, object)
0x86: Stack[-1] = Stack[-5]
0x87: Call 0xd7

0x88: Stack[-3] = Stack[-2]
0x89: Pop(2)
0x8a: Push(GlobalVars[1])
0x8b: Push(GlobalVars[1])
0x8c: Pop(2); Push(Stack[-2] * Stack[-1]);
0x8d: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x8e: IF (Stack[-1] == 0) GOTO 0xc5; Pop(1)

0x8f: PushEmpty(bool)
0x90: Stack[-1] = (bool) 1
0x91: PushEmpty(bool)
0x92: Stack[-1] = (bool) 1
0x93: PushEmpty(bool)
0x94: Stack[-1] = (bool) 1
0x95: PushEmpty(bool)
0x96: Stack[-1] = (bool) 0
0x97: PushEmpty(bool)
0x98: Call 0x16d

0x99: Pop(0)
0x9a: IF (Stack[-1] == 0) GOTO 0x9e; Pop(1)

0x9b: Push(GlobalVars[5])
0x9c: IF (Stack[-1] == 0) GOTO 0x9e; Pop(1)

0x9d: Stack[-1] = (bool) 1
0x9e: IF (Stack[-1] == 0) GOTO 0xaa; Pop(1)

0x9f: PushEmpty(bool)
0xa0: Stack[-1] = (bool) 0
0xa1: PushEmpty(bool)
0xa2: Call 0x147

0xa3: Pop(0)
0xa4: IF (Stack[-1] == 0) GOTO 0xa8; Pop(1)

0xa5: Push(GlobalVars[6])
0xa6: IF (Stack[-1] == 0) GOTO 0xa8; Pop(1)

0xa7: Stack[-1] = (bool) 1
0xa8: IF (Stack[-1] == 0) GOTO 0xaa; Pop(1)

0xa9: Stack[-1] = (bool) 0
0xaa: IF (Stack[-1] == 0) GOTO 0xb6; Pop(1)

0xab: PushEmpty(bool)
0xac: Stack[-1] = (bool) 0
0xad: PushEmpty(bool)
0xae: Call 0x15a

0xaf: Pop(0)
0xb0: IF (Stack[-1] == 0) GOTO 0xb4; Pop(1)

0xb1: Push(GlobalVars[7])
0xb2: IF (Stack[-1] == 0) GOTO 0xb4; Pop(1)

0xb3: Stack[-1] = (bool) 1
0xb4: IF (Stack[-1] == 0) GOTO 0xb6; Pop(1)

0xb5: Stack[-1] = (bool) 0
0xb6: IF (Stack[-1] == 0) GOTO 0xc2; Pop(1)

0xb7: PushEmpty(bool)
0xb8: Stack[-1] = (bool) 0
0xb9: PushEmpty(bool)
0xba: Call 0x134

0xbb: Pop(0)
0xbc: IF (Stack[-1] == 0) GOTO 0xc0; Pop(1)

0xbd: Push(GlobalVars[8])
0xbe: IF (Stack[-1] == 0) GOTO 0xc0; Pop(1)

0xbf: Stack[-1] = (bool) 1
0xc0: IF (Stack[-1] == 0) GOTO 0xc2; Pop(1)

0xc1: Stack[-1] = (bool) 0
0xc2: IF (Stack[-1] == 0) GOTO 0xc5; Pop(1)

0xc3: Stack[-7] = Sqrt(Stack[-1]); Pop(0);
0xc4: Return(); Pop(6)

0xc5: Push((int) 1)
0xc6: @ Sleep(Stack[-1])
0xc7: Pop(1)
0xc8: Stack[-3] = 0
0xc9: GOTO 0x5d

0xca: Stack[-7] = (int) 0
0xcb: Return(); Pop(6)

0xcc: PushEmpty()
0xcd: Push(-0, 0); TaskCall(0)
0xce: Call 0x0

0xcf: Pop(-0, 0); TaskReturn
0xd0: Pop(0)
0xd1: Return(); Pop(0)

0xd2: PushEmpty(cvector, cvector)
0xd3: @ GetPosition(Stack[-1])
0xd4: Pop(0)
0xd5: Stack[-3] = Stack[-1]
0xd6: Return(); Pop(2)

0xd7: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0xd8: @ GetPosition(Stack[-3])
0xd9: Pop(0)
0xda: @@ GetPosition(Stack[-2])
0xdb: Pop(0)
0xdc: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0xdd: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0xde: Return(); Pop(6)

0xdf: PushEmpty(object, int, object, int)
0xe0: @ GetScene(Stack[-2])
0xe1: Pop(0)
0xe2: PushEmpty(cvector)
0xe3: Call 0xd2

0xe4: Pop(0)
0xe5: @@ GetRegionByPt(Stack[-2], Stack[-1])
0xe6: Pop(1)
0xe7: Stack[-5] = Stack[-1]
0xe8: Return(); Pop(4)

0xe9: Stack[-2] = 0
0xea: PushEmpty(object, object)
0xeb: Push("player")
0xec: @ FindActor(Stack[-2], Stack[-1])
0xed: Pop(1)
0xee: Stack[-3] = Stack[-1]
0xef: Return(); Pop(2)

0xf0: Stack[-1] = 0
0xf1: PushEmpty(bool, bool)
0xf2: @ IsLoaded(Stack[-1])
0xf3: Pop(0)
0xf4: Stack[-3] = Stack[-1]
0xf5: Return(); Pop(2)

0xf6: PushEmpty(float, float)
0xf7: @ GetGameTime(Stack[-1])
0xf8: Pop(0)
0xf9: PushEmpty(int)
0xfa: Stack[-1] = Stack[-2]
0xfb: Push((int) 24)
0xfc: Stack[-5] = Stack[-2] % Stack[-1]; Pop(2);
0xfd: Return(); Pop(2)

0xfe: PushEmpty()
0xff: Push("Region")
0x100: Pop(1); Push(Stack[-1] + Stack[-2]);
0x101: Push("State")
0x102: Stack[-4] = Stack[-2] + Stack[-1]; Pop(2);
0x103: Return(); Pop(0)

0x104: PushEmpty(int, int)
0x105: PushEmpty(string, int)
0x106: Stack[-1] = Stack[-5]
0x107: Call 0xfe

0x108: Pop(1)
0x109: @ GetVariable(Stack[-1], Stack[-2])
0x10a: Pop(1)
0x10b: Push((int) 3)
0x10c: Pop(1); Push(Stack[-2] & Stack[-1]);
0x10d: Push((int) 0)
0x10e: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x10f: IF (Stack[-1] == 0) GOTO 0x112; Pop(1)

0x110: Stack[-4] = (bool) 1
0x111: Return(); Pop(2)

0x112: Stack[-4] = (bool) 0
0x113: Return(); Pop(2)

0x114: PushEmpty(int, int)
0x115: PushEmpty(string, int)
0x116: Stack[-1] = Stack[-5]
0x117: Call 0xfe

0x118: Pop(1)
0x119: @ GetVariable(Stack[-1], Stack[-2])
0x11a: Pop(1)
0x11b: Push((int) 3)
0x11c: Pop(1); Push(Stack[-2] & Stack[-1]);
0x11d: Push((int) 1)
0x11e: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x11f: IF (Stack[-1] == 0) GOTO 0x122; Pop(1)

0x120: Stack[-4] = (bool) 1
0x121: Return(); Pop(2)

0x122: Stack[-4] = (bool) 0
0x123: Return(); Pop(2)

0x124: PushEmpty()
0x125: Push((int) 1)
0x126: Pop(1); Push(Stack[-2] + Stack[-1]);
0x127: Push((int) 10)
0x128: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x129: IF (Stack[-1] == 0) GOTO 0x12f; Pop(1)

0x12a: Push("sound0")
0x12b: Push((int) 1)
0x12c: Pop(1); Push(Stack[-3] + Stack[-1]);
0x12d: Stack[-4] = Stack[-2] + Stack[-1]; Pop(2);
0x12e: Return(); Pop(0)

0x12f: Push("sound")
0x130: Push((int) 1)
0x131: Pop(1); Push(Stack[-3] + Stack[-1]);
0x132: Stack[-4] = Stack[-2] + Stack[-1]; Pop(2);
0x133: Return(); Pop(0)

0x134: PushEmpty(int, int)
0x135: PushEmpty(int)
0x136: Call 0xf6

0x137: Stack[-2] = Stack[-1]
0x138: Pop(1)
0x139: PushEmpty(bool)
0x13a: Stack[-1] = (bool) 0
0x13b: Push((int) 7)
0x13c: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x13d: IF (Stack[-1] == 0) GOTO 0x142; Pop(1)

0x13e: Push((int) 10)
0x13f: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x140: IF (Stack[-1] == 0) GOTO 0x142; Pop(1)

0x141: Stack[-1] = (bool) 1
0x142: IF (Stack[-1] == 0) GOTO 0x145; Pop(1)

0x143: Stack[-3] = (bool) 1
0x144: Return(); Pop(2)

0x145: Stack[-3] = (bool) 0
0x146: Return(); Pop(2)

0x147: PushEmpty(int, int)
0x148: PushEmpty(int)
0x149: Call 0xf6

0x14a: Stack[-2] = Stack[-1]
0x14b: Pop(1)
0x14c: PushEmpty(bool)
0x14d: Stack[-1] = (bool) 0
0x14e: Push((int) 9)
0x14f: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x150: IF (Stack[-1] == 0) GOTO 0x155; Pop(1)

0x151: Push((int) 20)
0x152: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x153: IF (Stack[-1] == 0) GOTO 0x155; Pop(1)

0x154: Stack[-1] = (bool) 1
0x155: IF (Stack[-1] == 0) GOTO 0x158; Pop(1)

0x156: Stack[-3] = (bool) 1
0x157: Return(); Pop(2)

0x158: Stack[-3] = (bool) 0
0x159: Return(); Pop(2)

0x15a: PushEmpty(int, int)
0x15b: PushEmpty(int)
0x15c: Call 0xf6

0x15d: Stack[-2] = Stack[-1]
0x15e: Pop(1)
0x15f: PushEmpty(bool)
0x160: Stack[-1] = (bool) 0
0x161: Push((int) 20)
0x162: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x163: IF (Stack[-1] == 0) GOTO 0x168; Pop(1)

0x164: Push((int) 23)
0x165: Pop(1); Push((bool) Stack[-3] <= Stack[-1])
0x166: IF (Stack[-1] == 0) GOTO 0x168; Pop(1)

0x167: Stack[-1] = (bool) 1
0x168: IF (Stack[-1] == 0) GOTO 0x16b; Pop(1)

0x169: Stack[-3] = (bool) 1
0x16a: Return(); Pop(2)

0x16b: Stack[-3] = (bool) 0
0x16c: Return(); Pop(2)

0x16d: PushEmpty(int, int)
0x16e: PushEmpty(int)
0x16f: Call 0xf6

0x170: Stack[-2] = Stack[-1]
0x171: Pop(1)
0x172: PushEmpty(bool)
0x173: Stack[-1] = (bool) 1
0x174: Push((int) 0)
0x175: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x176: IF (Stack[-1] == 0) GOTO 0x17b; Pop(1)

0x177: Push((int) 7)
0x178: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x179: IF (Stack[-1] == 0) GOTO 0x17b; Pop(1)

0x17a: Stack[-1] = (bool) 0
0x17b: IF (Stack[-1] == 0) GOTO 0x17e; Pop(1)

0x17c: Stack[-3] = (bool) 1
0x17d: Return(); Pop(2)

0x17e: Stack[-3] = (bool) 0
0x17f: Return(); Pop(2)

