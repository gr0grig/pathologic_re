GlobalVarCount = 0

Strings:
	intro_danko
	intro_burah
	intro_klara
	intro1
	intro2
	intro_font
	ul
	bl
	br
	ur
	add
	get
	size

Import:
	GetWindowSize (2 args)
	EnableClipping (1 args)
	SetOwnerDraw (1 args)
	ShowCursor (1 args)
	CaptureKeyboard (0 args)
	SetNeedUpdate (1 args)
	ProcessEvents (0 args)
	IsSoundPlaying (2 args)
	GetStringByID (2 args)
	PlaySound (1 args)
	irand (2 args)
	GetTextHeightInWidth (4 args)
	SendMessageToParent (1 args)
	PauseSound (1 args)
	PrintInWidth (10 args)
	CreateStringVector (1 args)
	SendMessage (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (float, float, int, int, int, int, int, int, int, string, bool, bool, bool, object) Params = 0
		EVENT_101 Op = 0x84 Vars = (int)
		EVENT_102 Op = 0x93 Vars = (int)
		EVENT_1 Op = 0xc1 Vars = (float)
		EVENT_200 Op = 0xef Vars = (int, string, object)
		EVENT_0 Op = 0x113 Vars = ()


0x0: Stack[10 + Tasks[-1].StackPointer] = (bool)0
0x1: Stack[11 + Tasks[-1].StackPointer] = (bool)0
0x2: Stack[12 + Tasks[-1].StackPointer] = (bool)0
0x3: Stack[1 + Tasks[-1].StackPointer] = (int)0
0x4: Stack[5 + Tasks[-1].StackPointer] = (int)0
0x5: Stack[0 + Tasks[-1].StackPointer] = (int)0
0x6: @ GetWindowSize(Stack[-2], Stack[-3])
0x7: Pop(0)
0x8: Push((bool) 1)
0x9: @ EnableClipping(Stack[-1])
0xa: Pop(1)
0xb: Push((bool) 1)
0xc: @ SetOwnerDraw(Stack[-1])
0xd: Pop(1)
0xe: Push((bool) 0)
0xf: @ ShowCursor(Stack[-1])
0x10: Pop(1)
0x11: @ CaptureKeyboard()
0x12: Pop(0)
0x13: Push((bool) 1)
0x14: @ SetNeedUpdate(Stack[-1])
0x15: Pop(1)
0x16: PushEmpty()
0x17: Call2 0x13a

0x18: Pop(0)
0x19: PushEmpty()
0x1a: Call2 0x156

0x1b: Pop(0)
0x1c: @ ProcessEvents()
0x1d: Pop(0)
0x1e: Return(); Pop(0)

0x1f: PushEmpty(bool, bool)
0x20: Push((int) 1)
0x21: Pop(1); Push((bool) Stack[6 + Tasks[-1].StackPointer] == Stack[-1])
0x22: IF (Stack[-1] == 0) GOTO 0x27; Pop(1)

0x23: Push("intro_danko")
0x24: @ IsSoundPlaying(Stack[-2], Stack[-1])
0x25: Pop(1)
0x26: GOTO 0x2d

0x27: Push((int) 2)
0x28: Pop(1); Push((bool) Stack[6 + Tasks[-1].StackPointer] == Stack[-1])
0x29: IF (Stack[-1] == 0) GOTO 0x2d; Pop(1)

0x2a: Push("intro_burah")
0x2b: @ IsSoundPlaying(Stack[-2], Stack[-1])
0x2c: Pop(1)
0x2d: Push((int) 3)
0x2e: Pop(1); Push((bool) Stack[6 + Tasks[-1].StackPointer] == Stack[-1])
0x2f: IF (Stack[-1] == 0) GOTO 0x33; Pop(1)

0x30: Push("intro_klara")
0x31: @ IsSoundPlaying(Stack[-2], Stack[-1])
0x32: Pop(1)
0x33: Push((int) 0)
0x34: Pop(1); Push((bool) Stack[6 + Tasks[-1].StackPointer] == Stack[-1])
0x35: IF (Stack[-1] == 0) GOTO 0x3f; Pop(1)

0x36: Push( Stack[7 + Tasks[-1].StackPointer] )
0x37: IF (Stack[-1] == 0) GOTO 0x3c; Pop(1)

0x38: Push("intro1")
0x39: @ IsSoundPlaying(Stack[-2], Stack[-1])
0x3a: Pop(1)
0x3b: GOTO 0x3f

0x3c: Push("intro2")
0x3d: @ IsSoundPlaying(Stack[-2], Stack[-1])
0x3e: Pop(1)
0x3f: Stack[-3] = Stack[-1]
0x40: Return(); Pop(2)

0x41: PushEmpty()
0x42: Stack[6 + Tasks[-1].StackPointer] = Stack[-1]
0x43: Push((int) 1)
0x44: Pop(1); Push((bool) Stack[6 + Tasks[-1].StackPointer] == Stack[-1])
0x45: IF (Stack[-1] == 0) GOTO 0x4d; Pop(1)

0x46: Push((int) 204)
0x47: @ GetStringByID(Stack[-9], Stack[-1])
0x48: Pop(1)
0x49: Push("intro_danko")
0x4a: @ PlaySound(Stack[-1])
0x4b: Pop(1)
0x4c: GOTO 0x7a

0x4d: Push((int) 2)
0x4e: Pop(1); Push((bool) Stack[6 + Tasks[-1].StackPointer] == Stack[-1])
0x4f: IF (Stack[-1] == 0) GOTO 0x57; Pop(1)

0x50: Push((int) 207)
0x51: @ GetStringByID(Stack[-9], Stack[-1])
0x52: Pop(1)
0x53: Push("intro_burah")
0x54: @ PlaySound(Stack[-1])
0x55: Pop(1)
0x56: GOTO 0x7a

0x57: Push((int) 3)
0x58: Pop(1); Push((bool) Stack[6 + Tasks[-1].StackPointer] == Stack[-1])
0x59: IF (Stack[-1] == 0) GOTO 0x61; Pop(1)

0x5a: Push((int) 210)
0x5b: @ GetStringByID(Stack[-9], Stack[-1])
0x5c: Pop(1)
0x5d: Push("intro_klara")
0x5e: @ PlaySound(Stack[-1])
0x5f: Pop(1)
0x60: GOTO 0x7a

0x61: Push((int) 0)
0x62: Pop(1); Push((bool) Stack[6 + Tasks[-1].StackPointer] == Stack[-1])
0x63: IF (Stack[-1] == 0) GOTO 0x77; Pop(1)

0x64: Push((int) 2)
0x65: @ irand(Stack[-7], Stack[-1])
0x66: Pop(1)
0x67: Push( Stack[7 + Tasks[-1].StackPointer] )
0x68: IF (Stack[-1] == 0) GOTO 0x70; Pop(1)

0x69: Push((int) 211)
0x6a: @ GetStringByID(Stack[-9], Stack[-1])
0x6b: Pop(1)
0x6c: Push("intro1")
0x6d: @ PlaySound(Stack[-1])
0x6e: Pop(1)
0x6f: GOTO 0x76

0x70: Push((int) 212)
0x71: @ GetStringByID(Stack[-9], Stack[-1])
0x72: Pop(1)
0x73: Push("intro2")
0x74: @ PlaySound(Stack[-1])
0x75: Pop(1)
0x76: GOTO 0x7a

0x77: Push((int) 600)
0x78: @ GetStringByID(Stack[-9], Stack[-1])
0x79: Pop(1)
0x7a: Push("intro_font")
0x7b: Push((int) 2)
0x7c: Pop(1); Push(Stack[5 + StackPtr] * Stack[-1]);
0x7d: Pop(1); Push(Stack[2 + StackPtr] - Stack[-1]);
0x7e: Push((int) 8)
0x7f: Pop(2); Push(Stack[-2] - Stack[-1]);
0x80: @ GetTextHeightInWidth(Stack[-4], Stack[-2], Stack[-1], Stack[-9])
0x81: Pop(2)
0x82: Stack[10 + Tasks[-1].StackPointer] = (bool)1
0x83: Return(); Pop(0)

0x84: PushEmpty()
0x85: Push((int) 40)
0x86: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x87: IF (Stack[-1] == 0) GOTO 0x8a; Pop(1)

0x88: Stack[11 + Tasks[-1].StackPointer] = (bool)1
0x89: GOTO 0x92

0x8a: Push((int) 38)
0x8b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x8c: IF (Stack[-1] == 0) GOTO 0x8f; Pop(1)

0x8d: Stack[12 + Tasks[-1].StackPointer] = (bool)1
0x8e: GOTO 0x92

0x8f: PushEmpty()
0x90: Call2 0x9e

0x91: Pop(0)
0x92: Return(); Pop(0)

0x93: PushEmpty()
0x94: Push((int) 40)
0x95: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x96: IF (Stack[-1] == 0) GOTO 0x99; Pop(1)

0x97: Stack[11 + Tasks[-1].StackPointer] = (bool)0
0x98: GOTO 0x9d

0x99: Push((int) 38)
0x9a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x9b: IF (Stack[-1] == 0) GOTO 0x9d; Pop(1)

0x9c: Stack[12 + Tasks[-1].StackPointer] = (bool)0
0x9d: Return(); Pop(0)

0x9e: Push((int) 0)
0x9f: @ SendMessageToParent(Stack[-1])
0xa0: Pop(1)
0xa1: Stack[10 + Tasks[-1].StackPointer] = (bool)0
0xa2: Push((int) 1)
0xa3: Pop(1); Push((bool) Stack[6 + Tasks[-1].StackPointer] == Stack[-1])
0xa4: IF (Stack[-1] == 0) GOTO 0xa9; Pop(1)

0xa5: Push("intro_danko")
0xa6: @ PauseSound(Stack[-1])
0xa7: Pop(1)
0xa8: GOTO 0xc0

0xa9: Push((int) 2)
0xaa: Pop(1); Push((bool) Stack[6 + Tasks[-1].StackPointer] == Stack[-1])
0xab: IF (Stack[-1] == 0) GOTO 0xb0; Pop(1)

0xac: Push("intro_burah")
0xad: @ PauseSound(Stack[-1])
0xae: Pop(1)
0xaf: GOTO 0xc0

0xb0: Push((int) 3)
0xb1: Pop(1); Push((bool) Stack[6 + Tasks[-1].StackPointer] == Stack[-1])
0xb2: IF (Stack[-1] == 0) GOTO 0xb7; Pop(1)

0xb3: Push("intro_klara")
0xb4: @ PauseSound(Stack[-1])
0xb5: Pop(1)
0xb6: GOTO 0xc0

0xb7: Push( Stack[7 + Tasks[-1].StackPointer] )
0xb8: IF (Stack[-1] == 0) GOTO 0xbd; Pop(1)

0xb9: Push("intro1")
0xba: @ PauseSound(Stack[-1])
0xbb: Pop(1)
0xbc: GOTO 0xc0

0xbd: Push("intro2")
0xbe: @ PauseSound(Stack[-1])
0xbf: Pop(1)
0xc0: Return(); Pop(0)

0xc1: PushEmpty(float, float)
0xc2: Pop(0); Push((bool) Stack[10 + Tasks[-1].StackPointer] == 0)
0xc3: IF (Stack[-1] == 0) GOTO 0xc5; Pop(1)

0xc4: Return(); Pop(2)

0xc5: Stack[0 + Tasks[-1].StackPointer] = Stack[0 + Tasks[-1].StackPointer] + Stack[-3]; Pop(0);
0xc6: Stack[-1] = (float) 16.0
0xc7: Push((int) 1)
0xc8: Pop(1); Push((bool) Stack[-1] == Stack[6 + Tasks[-1].StackPointer])
0xc9: IF (Stack[-1] == 0) GOTO 0xcc; Pop(1)

0xca: Stack[-1] = (float) 16.0
0xcb: GOTO 0xd5

0xcc: Push((int) 2)
0xcd: Pop(1); Push((bool) Stack[-1] == Stack[6 + Tasks[-1].StackPointer])
0xce: IF (Stack[-1] == 0) GOTO 0xd1; Pop(1)

0xcf: Stack[-1] = (float) 13.0
0xd0: GOTO 0xd5

0xd1: Push((int) 3)
0xd2: Pop(1); Push((bool) Stack[-1] == Stack[6 + Tasks[-1].StackPointer])
0xd3: IF (Stack[-1] == 0) GOTO 0xd5; Pop(1)

0xd4: Stack[-1] = (float) 11.0
0xd5: Push( Stack[12 + Tasks[-1].StackPointer] )
0xd6: IF (Stack[-1] == 0) GOTO 0xd9; Pop(1)

0xd7: Push((float)4.0)
0xd8: Stack[-2] = Stack[-2] * Stack[-1]; Pop(1);
0xd9: Push( Stack[11 + Tasks[-1].StackPointer] )
0xda: IF (Stack[-1] == 0) GOTO 0xdd; Pop(1)

0xdb: Push((float)4.0)
0xdc: Stack[-2] = Stack[-2] / Stack[-1]; Pop(1);
0xdd: Pop(0); Push(Stack[-3] * Stack[-1]);
0xde: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0xdf: PushEmpty(bool)
0xe0: Stack[-1] = (bool) 0
0xe1: Pop(0); Push(Stack[3 + StackPtr] + Stack[4 + StackPtr]);
0xe2: Pop(1); Push((bool) Stack[1 + Tasks[-1].StackPointer] > Stack[-1])
0xe3: IF (Stack[-1] == 0) GOTO 0xea; Pop(1)

0xe4: PushEmpty(bool)
0xe5: Call2 0x1f

0xe6: Pop(0)
0xe7: Pop(1); Push((bool) Stack[-1] == 0)
0xe8: IF (Stack[-1] == 0) GOTO 0xea; Pop(1)

0xe9: Stack[-1] = (bool) 1
0xea: IF (Stack[-1] == 0) GOTO 0xee; Pop(1)

0xeb: PushEmpty()
0xec: Call2 0x9e

0xed: Pop(0)
0xee: Return(); Pop(2)

0xef: PushEmpty()
0xf0: PushEmpty(bool)
0xf1: Stack[-1] = (bool) 1
0xf2: PushEmpty(bool)
0xf3: Stack[-1] = (bool) 1
0xf4: PushEmpty(bool)
0xf5: Stack[-1] = (bool) 1
0xf6: Push("ul")
0xf7: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0xf8: IF (Stack[-1] == 0) GOTO 0xfd; Pop(1)

0xf9: Push("bl")
0xfa: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0xfb: IF (Stack[-1] == 0) GOTO 0xfd; Pop(1)

0xfc: Stack[-1] = (bool) 0
0xfd: IF (Stack[-1] == 0) GOTO 0x102; Pop(1)

0xfe: Push("br")
0xff: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x100: IF (Stack[-1] == 0) GOTO 0x102; Pop(1)

0x101: Stack[-1] = (bool) 0
0x102: IF (Stack[-1] == 0) GOTO 0x107; Pop(1)

0x103: Push("ur")
0x104: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x105: IF (Stack[-1] == 0) GOTO 0x107; Pop(1)

0x106: Stack[-1] = (bool) 0
0x107: IF (Stack[-1] == 0) GOTO 0x10c; Pop(1)

0x108: PushEmpty()
0x109: Call2 0x156

0x10a: Pop(0)
0x10b: Return(); Pop(0)

0x10c: Pop(0); Push((bool) Stack[10 + Tasks[-1].StackPointer] == 0)
0x10d: IF (Stack[-1] == 0) GOTO 0x112; Pop(1)

0x10e: PushEmpty(int)
0x10f: Stack[-1] = Stack[-4]
0x110: Call2 0x41

0x111: Pop(1)
0x112: Return(); Pop(0)

0x113: PushEmpty(int, float, int, int, float, int)
0x114: Pop(0); Push((bool) Stack[10 + Tasks[-1].StackPointer] == 0)
0x115: IF (Stack[-1] == 0) GOTO 0x117; Pop(1)

0x116: Return(); Pop(6)

0x117: Stack[-3] = Stack[1 + Tasks[-1].StackPointer]
0x118: Stack[-2] = Stack[1 + Tasks[-1].StackPointer] - Stack[-3]; Pop(0);
0x119: Push("intro_font")
0x11a: Push((int) 4)
0x11b: Pop(1); Push(Stack[5 + StackPtr] + Stack[-1]);
0x11c: Pop(0); Push(Stack[3 + StackPtr] - Stack[-5]);
0x11d: Push((int) 2)
0x11e: Pop(1); Push(Stack[5 + StackPtr] * Stack[-1]);
0x11f: Pop(1); Push(Stack[2 + StackPtr] - Stack[-1]);
0x120: Push((int) 8)
0x121: Pop(2); Push(Stack[-2] - Stack[-1]);
0x122: Push((float)0.24314)
0x123: Push((float)0.12157)
0x124: Push((float)0.11765)
0x125: Push((int) 1)
0x126: Pop(1); Push(Stack[-1] - Stack[-10]);
0x127: @ PrintInWidth(Stack[-9], Stack[-8], Stack[-7], Stack[-6], Stack[-5], Stack[-9], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x128: Pop(8)
0x129: Push("intro_font")
0x12a: Push((int) 4)
0x12b: Pop(1); Push(Stack[5 + StackPtr] + Stack[-1]);
0x12c: Pop(0); Push(Stack[3 + StackPtr] - Stack[-5]);
0x12d: Push((int) 1)
0x12e: Pop(2); Push(Stack[-2] - Stack[-1]);
0x12f: Push((int) 2)
0x130: Pop(1); Push(Stack[5 + StackPtr] * Stack[-1]);
0x131: Pop(1); Push(Stack[2 + StackPtr] - Stack[-1]);
0x132: Push((int) 8)
0x133: Pop(2); Push(Stack[-2] - Stack[-1]);
0x134: Push((float)0.24314)
0x135: Push((float)0.12157)
0x136: Push((float)0.11765)
0x137: @ PrintInWidth(Stack[-8], Stack[-7], Stack[-6], Stack[-5], Stack[-4], Stack[-9], Stack[-3], Stack[-2], Stack[-1], Stack[-9])
0x138: Pop(7)
0x139: Return(); Pop(6)

0x13a: Stack[8 + Tasks[-1].StackPointer] = (int)0
0x13b: @ CreateStringVector(Stack[-13])
0x13c: Pop(0)
0x13d: Push("ul")
0x13e: @@ add(Stack[-1])
0x13f: Pop(1)
0x140: Push("ur")
0x141: @@ add(Stack[-1])
0x142: Pop(1)
0x143: Push("br")
0x144: @@ add(Stack[-1])
0x145: Pop(1)
0x146: Push("ul")
0x147: @@ add(Stack[-1])
0x148: Pop(1)
0x149: Push("br")
0x14a: @@ add(Stack[-1])
0x14b: Pop(1)
0x14c: Push("ul")
0x14d: @@ add(Stack[-1])
0x14e: Pop(1)
0x14f: Push("bl")
0x150: @@ add(Stack[-1])
0x151: Pop(1)
0x152: Push("ul")
0x153: @@ add(Stack[-1])
0x154: Pop(1)
0x155: Return(); Pop(0)

0x156: PushEmpty(string, int, string, int)
0x157: @@ get(Stack[-2], Stack[-8])
0x158: Pop(0)
0x159: Push((int) 0)
0x15a: @ SendMessage(Stack[-1], Stack[-3])
0x15b: Pop(1)
0x15c: Push((int) 1)
0x15d: Stack[8 + Tasks[-1].StackPointer] = Stack[8 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x15e: @@ size(Stack[-1])
0x15f: Pop(0)
0x160: Pop(0); Push((bool) Stack[8 + Tasks[-1].StackPointer] >= Stack[-1])
0x161: IF (Stack[-1] == 0) GOTO 0x163; Pop(1)

0x162: Stack[8 + Tasks[-1].StackPointer] = Stack[8 + Tasks[-1].StackPointer] - Stack[-1]; Pop(0);
0x163: Return(); Pop(4)

