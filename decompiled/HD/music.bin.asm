GlobalVarCount = 0

Strings:
	Music time limit reached
	horror
	id
	day
	night
	general
	music
	Playing: '
	' from category: 
	Chosen agressive: 
	attack
	Region
	State
	agressive

Import:
	sync (0 args)
	SetTimer (2 args)
	WaitForMusicEnd1 (0 args)
	Sleep (1 args)
	Trace (1 args)
	HasMusicAttribute (2 args)
	GetMusicAttribute (2 args)
	_strtoi (2 args)
	GetVariable (2 args)
	GetGameTime (1 args)
	HasMusicValue (3 args)
	GetMusicValue (3 args)
	SwitchMusic1 (1 args)
	PlayMusic1 (1 args)
	KillTimer (1 args)
	StopMusic1 (0 args)
	GetActiveScene (1 args)
	SwitchMusic1 (2 args)
	PlayMusic1 (2 args)
	FadeMusic1 (1 args)
	irand (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (string, string, string) Params = 0
		EVENT_7 Op = 0x13 Vars = (int)
		EVENT_12 Op = 0xbf Vars = (string)
		EVENT_8 Op = 0xde Vars = ()
	GTASK_1 Vars = (bool, object) Params = 1
		EVENT_12 Op = 0x100 Vars = (string)
		EVENT_7 Op = 0x117 Vars = (int)
		EVENT_8 Op = 0x128 Vars = ()
	GTASK_2  Params = 1
		EVENT_12 Op = 0x138 Vars = (string)


0x0: @ sync()
0x1: Pop(0)
0x2: Push((int) 0)
0x3: Push((int) 15)
0x4: @ SetTimer(Stack[-2], Stack[-1])
0x5: Pop(2)
0x6: PushEmpty(bool, bool)
0x7: Stack[-1] = (bool) 0
0x8: Call2 0x74

0x9: Pop(1)
0xa: IF (Stack[-1] == 0) GOTO 0xe; Pop(1)

0xb: @ WaitForMusicEnd1()
0xc: Pop(0)
0xd: GOTO 0x11

0xe: Push((int) 1)
0xf: @ Sleep(Stack[-1])
0x10: Pop(1)
0x11: GOTO 0x6

0x12: Return(); Pop(0)

0x13: PushEmpty(string, string)
0x14: Push((int) 0)
0x15: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x16: IF (Stack[-1] == 0) GOTO 0x3e; Pop(1)

0x17: Push("Music time limit reached")
0x18: @ Trace(Stack[-1])
0x19: Pop(1)
0x1a: Push("")
0x1b: Pop(1); Push((bool) Stack[1 + Tasks[-1].StackPointer] != Stack[-1])
0x1c: IF (Stack[-1] == 0) GOTO 0x3e; Pop(1)

0x1d: PushEmpty(string)
0x1e: Call2 0x3f

0x1f: Stack[-2] = Stack[-1]
0x20: Pop(1)
0x21: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == Stack[-1])
0x22: IF (Stack[-1] == 0) GOTO 0x2a; Pop(1)

0x23: PushEmpty(bool, string)
0x24: Stack[-1] = Stack[-3]
0x25: Call2 0xae

0x26: Pop(1)
0x27: IF (Stack[-1] == 0) GOTO 0x29; Pop(1)

0x28: Return(); Pop(2)

0x29: GOTO 0x3a

0x2a: PushEmpty(bool)
0x2b: Stack[-1] = (bool) 0
0x2c: Push("horror")
0x2d: Pop(1); Push((bool) Stack[0 + Tasks[-1].StackPointer] != Stack[-1])
0x2e: IF (Stack[-1] == 0) GOTO 0x33; Pop(1)

0x2f: Push("horror")
0x30: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x31: IF (Stack[-1] == 0) GOTO 0x33; Pop(1)

0x32: Stack[-1] = (bool) 1
0x33: IF (Stack[-1] == 0) GOTO 0x3a; Pop(1)

0x34: PushEmpty(bool, string)
0x35: Stack[-1] = Stack[-3]
0x36: Call2 0xae

0x37: Pop(1)
0x38: IF (Stack[-1] == 0) GOTO 0x3a; Pop(1)

0x39: Return(); Pop(2)

0x3a: PushEmpty(bool, bool)
0x3b: Stack[-1] = (bool) 1
0x3c: Call2 0x74

0x3d: Pop(2)
0x3e: Return(); Pop(2)

0x3f: PushEmpty(bool, string, int, int, float, bool, string, int, int, float)
0x40: Push("id")
0x41: @ HasMusicAttribute(Stack[-6], Stack[-1])
0x42: Pop(1)
0x43: Push(Stack[-5])
0x44: IF (Stack[-1] == 0) GOTO 0x72; Pop(1)

0x45: Push("id")
0x46: @ GetMusicAttribute(Stack[-5], Stack[-1])
0x47: Pop(1)
0x48: @ _strtoi(Stack[-3], Stack[-4])
0x49: Pop(0)
0x4a: PushEmpty(string, int)
0x4b: Push((int) 1)
0x4c: Stack[-2] = Stack[-6] - Stack[-1]; Pop(1);
0x4d: Call2 0x140

0x4e: Pop(1)
0x4f: @ GetVariable(Stack[-1], Stack[-3])
0x50: Pop(1)
0x51: Push((int) 3)
0x52: Stack[-3] = Stack[-3] & Stack[-1]; Pop(1);
0x53: PushEmpty(bool)
0x54: Stack[-1] = (bool) 1
0x55: Push((int) 1)
0x56: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x57: IF (Stack[-1] == 0) GOTO 0x5c; Pop(1)

0x58: Push((int) 2)
0x59: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x5a: IF (Stack[-1] == 0) GOTO 0x5c; Pop(1)

0x5b: Stack[-1] = (bool) 0
0x5c: IF (Stack[-1] == 0) GOTO 0x60; Pop(1)

0x5d: Stack[-11] = "horror"
0x5e: Return(); Pop(10)

0x5f: GOTO 0x72

0x60: @ GetGameTime(Stack[-1])
0x61: Pop(0)
0x62: Push((int) 24)
0x63: Stack[-2] = Stack[-2] % Stack[-1]; Pop(1);
0x64: PushEmpty(bool)
0x65: Stack[-1] = (bool) 0
0x66: Push((int) 9)
0x67: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x68: IF (Stack[-1] == 0) GOTO 0x6d; Pop(1)

0x69: Push((int) 19)
0x6a: Pop(1); Push((bool) Stack[-3] <= Stack[-1])
0x6b: IF (Stack[-1] == 0) GOTO 0x6d; Pop(1)

0x6c: Stack[-1] = (bool) 1
0x6d: IF (Stack[-1] == 0) GOTO 0x70; Pop(1)

0x6e: Stack[-11] = "day"
0x6f: GOTO 0x71

0x70: Stack[-11] = "night"
0x71: Return(); Pop(10)

0x72: Stack[-11] = "general"
0x73: Return(); Pop(10)

0x74: PushEmpty(bool, string, bool, string)
0x75: PushEmpty(string)
0x76: Call2 0x3f

0x77: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x78: Pop(1)
0x79: Push("music")
0x7a: @ HasMusicValue(Stack[-3], Stack[-0], Stack[-1])
0x7b: Pop(1)
0x7c: Push(Stack[-2])
0x7d: IF (Stack[-1] == 0) GOTO 0x89; Pop(1)

0x7e: Push("music")
0x7f: @ GetMusicValue(Stack[-2], Stack[-0], Stack[-1])
0x80: Pop(1)
0x81: PushEmpty(string, string, bool)
0x82: Stack[-3] = Stack[0 + Tasks[-1].StackPointer]
0x83: Stack[-2] = Stack[-4]
0x84: Stack[-1] = Stack[-8]
0x85: Call2 0x91

0x86: Pop(3)
0x87: Stack[-6] = (bool) 1
0x88: Return(); Pop(4)

0x89: PushEmpty(string, string, bool)
0x8a: Stack[-3] = Stack[0 + Tasks[-1].StackPointer]
0x8b: Stack[-2] = ""
0x8c: Stack[-1] = Stack[-8]
0x8d: Call2 0x91

0x8e: Pop(3)
0x8f: Stack[-6] = (bool) 0
0x90: Return(); Pop(4)

0x91: PushEmpty()
0x92: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x93: Push("")
0x94: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x95: IF (Stack[-1] == 0) GOTO 0xa4; Pop(1)

0x96: Push("Playing: '")
0x97: Pop(1); Push(Stack[-1] + Stack[-3]);
0x98: Push("' from category: ")
0x99: Pop(2); Push(Stack[-2] + Stack[-1]);
0x9a: Pop(1); Push(Stack[-1] + Stack[-4]);
0x9b: @ Trace(Stack[-1])
0x9c: Pop(1)
0x9d: Push(Stack[-1])
0x9e: IF (Stack[-1] == 0) GOTO 0xa2; Pop(1)

0x9f: @ SwitchMusic1(Stack[-2])
0xa0: Pop(0)
0xa1: GOTO 0xa4

0xa2: @ PlayMusic1(Stack[-2])
0xa3: Pop(0)
0xa4: PushEmpty(string, string)
0xa5: Stack[-1] = Stack[-5]
0xa6: Call2 0x146

0xa7: Stack[2 + Tasks[-1].StackPointer] = Stack[-2]
0xa8: Pop(2)
0xa9: Push("Chosen agressive: ")
0xaa: Pop(1); Push(Stack[-1] + Stack[2 + StackPtr]);
0xab: @ Trace(Stack[-1])
0xac: Pop(1)
0xad: Return(); Pop(0)

0xae: PushEmpty(bool, string, bool, string)
0xaf: Push("music")
0xb0: @ HasMusicValue(Stack[-3], Stack[-6], Stack[-1])
0xb1: Pop(1)
0xb2: Push(Stack[-2])
0xb3: IF (Stack[-1] == 0) GOTO 0xb9; Pop(1)

0xb4: Push("music")
0xb5: @ GetMusicValue(Stack[-2], Stack[-6], Stack[-1])
0xb6: Pop(1)
0xb7: Stack[-6] = Stack[1 + Tasks[-1].StackPointer] == Stack[-1]; Pop(0);
0xb8: Return(); Pop(4)

0xb9: Stack[-6] = (bool) 0
0xba: Return(); Pop(4)

0xbb: Push((int) 0)
0xbc: @ KillTimer(Stack[-1])
0xbd: Pop(1)
0xbe: Return(); Pop(0)

0xbf: PushEmpty()
0xc0: Push("attack")
0xc1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc2: IF (Stack[-1] == 0) GOTO 0xd4; Pop(1)

0xc3: Push("")
0xc4: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] != Stack[-1])
0xc5: IF (Stack[-1] == 0) GOTO 0xd3; Pop(1)

0xc6: PushEmpty()
0xc7: Call2 0xbb

0xc8: Pop(0)
0xc9: PushEmpty(string)
0xca: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xcb: Push(-1, 2); TaskCall(1)
0xcc: Call2 0xea

0xcd: Pop(-1, 2); TaskReturn
0xce: Pop(1)
0xcf: Push((int) 0)
0xd0: Push((int) 15)
0xd1: @ SetTimer(Stack[-2], Stack[-1])
0xd2: Pop(2)
0xd3: GOTO 0xdd

0xd4: PushEmpty()
0xd5: Call2 0xbb

0xd6: Pop(0)
0xd7: PushEmpty(string)
0xd8: Stack[-1] = Stack[-2]
0xd9: Push(-1, 0); TaskCall(2)
0xda: Call2 0x132

0xdb: Pop(-1, 0); TaskReturn
0xdc: Pop(1)
0xdd: Return(); Pop(0)

0xde: PushEmpty(bool, string)
0xdf: PushEmpty(string)
0xe0: Call2 0x3f

0xe1: Stack[-2] = Stack[-1]
0xe2: Pop(1)
0xe3: Call2 0xae

0xe4: Pop(1)
0xe5: Pop(1); Push((bool) Stack[-1] == 0)
0xe6: IF (Stack[-1] == 0) GOTO 0xe9; Pop(1)

0xe7: @ StopMusic1()
0xe8: Pop(0)
0xe9: Return(); Pop(0)

0xea: PushEmpty()
0xeb: Push((int) 1)
0xec: Push((int) 10)
0xed: @ SetTimer(Stack[-2], Stack[-1])
0xee: Pop(2)
0xef: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0xf0: @ GetActiveScene(Stack[-1])
0xf1: Pop(0)
0xf2: Push((bool) 1)
0xf3: @ SwitchMusic1(Stack[-2], Stack[-1])
0xf4: Pop(1)
0xf5: @ WaitForMusicEnd1()
0xf6: Pop(0)
0xf7: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0xf8: IF (Stack[-1] == 0) GOTO 0xff; Pop(1)

0xf9: Push((bool) 1)
0xfa: @ PlayMusic1(Stack[-2], Stack[-1])
0xfb: Pop(1)
0xfc: @ WaitForMusicEnd1()
0xfd: Pop(0)
0xfe: GOTO 0xf7

0xff: Return(); Pop(0)

0x100: PushEmpty()
0x101: Push("attack")
0x102: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x103: IF (Stack[-1] == 0) GOTO 0x10a; Pop(1)

0x104: Push((int) 1)
0x105: Push((int) 10)
0x106: @ SetTimer(Stack[-2], Stack[-1])
0x107: Pop(2)
0x108: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x109: GOTO 0x116

0x10a: Push("")
0x10b: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x10c: IF (Stack[-1] == 0) GOTO 0x116; Pop(1)

0x10d: PushEmpty()
0x10e: Call2 0x123

0x10f: Pop(0)
0x110: PushEmpty(string)
0x111: Stack[-1] = Stack[-2]
0x112: Push(-1, 0); TaskCall(2)
0x113: Call2 0x132

0x114: Pop(-1, 0); TaskReturn
0x115: Pop(1)
0x116: Return(); Pop(0)

0x117: PushEmpty()
0x118: Push((int) 1)
0x119: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x11a: IF (Stack[-1] == 0) GOTO 0x122; Pop(1)

0x11b: Push((int) 2)
0x11c: @ FadeMusic1(Stack[-1])
0x11d: Pop(1)
0x11e: Push((int) 1)
0x11f: @ KillTimer(Stack[-1])
0x120: Pop(1)
0x121: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x122: Return(); Pop(0)

0x123: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x124: Push((int) 1)
0x125: @ KillTimer(Stack[-1])
0x126: Pop(1)
0x127: Return(); Pop(0)

0x128: PushEmpty(object, object)
0x129: @ GetActiveScene(Stack[-1])
0x12a: Pop(0)
0x12b: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] != Stack[-1])
0x12c: IF (Stack[-1] == 0) GOTO 0x130; Pop(1)

0x12d: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x12e: @ StopMusic1()
0x12f: Pop(0)
0x130: Return(); Pop(2)

0x131: Stack[-1] = 0
0x132: PushEmpty()
0x133: @ PlayMusic1(Stack[-1])
0x134: Pop(0)
0x135: @ WaitForMusicEnd1()
0x136: Pop(0)
0x137: Return(); Pop(0)

0x138: PushEmpty()
0x139: Push("")
0x13a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x13b: IF (Stack[-1] == 0) GOTO 0x13f; Pop(1)

0x13c: Push((int) 1)
0x13d: @ FadeMusic1(Stack[-1])
0x13e: Pop(1)
0x13f: Return(); Pop(0)

0x140: PushEmpty()
0x141: Push("Region")
0x142: Pop(1); Push(Stack[-1] + Stack[-2]);
0x143: Push("State")
0x144: Stack[-4] = Stack[-2] + Stack[-1]; Pop(2);
0x145: Return(); Pop(0)

0x146: PushEmpty(int, bool, int, string, int, bool, int, string)
0x147: Stack[-4] = (int) 0
0x148: Push("agressive")
0x149: Push((int) 1)
0x14a: Pop(1); Push(Stack[-6] + Stack[-1]);
0x14b: Pop(2); Push(Stack[-2] + Stack[-1]);
0x14c: @ HasMusicValue(Stack[-4], Stack[-10], Stack[-1])
0x14d: Pop(1)
0x14e: Pop(0); Push((bool) Stack[-3] == 0)
0x14f: IF (Stack[-1] == 0) GOTO 0x151; Pop(1)

0x150: GOTO 0x154

0x151: Push((int) 1)
0x152: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x153: GOTO 0x148

0x154: Push(Stack[-4])
0x155: IF (Stack[-1] == 0) GOTO 0x160; Pop(1)

0x156: @ irand(Stack[-2], Stack[-4])
0x157: Pop(0)
0x158: Push("agressive")
0x159: Push((int) 1)
0x15a: Pop(1); Push(Stack[-4] + Stack[-1]);
0x15b: Pop(2); Push(Stack[-2] + Stack[-1]);
0x15c: @ GetMusicValue(Stack[-2], Stack[-10], Stack[-1])
0x15d: Pop(1)
0x15e: Stack[-10] = Stack[-1]
0x15f: Return(); Pop(8)

0x160: Stack[-10] = ""
0x161: Return(); Pop(8)

