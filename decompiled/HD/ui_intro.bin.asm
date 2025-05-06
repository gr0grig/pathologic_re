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
	GTASK_0 Vars = (float, float, float, int, int, int, int, int, int, int, string, bool, bool, bool, object) Params = 0
		EVENT_101 Op = 0x84 Vars = (int)
		EVENT_102 Op = 0xc7 Vars = (int)
		EVENT_1 Op = 0x111 Vars = (float)
		EVENT_200 Op = 0x151 Vars = (int, string, object)
		EVENT_0 Op = 0x175 Vars = ()


0x0: Stack[11 + Tasks[-1].StackPointer] = (bool)0
0x1: Stack[12 + Tasks[-1].StackPointer] = (bool)0
0x2: Stack[13 + Tasks[-1].StackPointer] = (bool)0
0x3: Stack[2 + Tasks[-1].StackPointer] = (int)0
0x4: Stack[6 + Tasks[-1].StackPointer] = (int)0
0x5: Stack[1 + Tasks[-1].StackPointer] = (int)0
0x6: @ GetWindowSize(Stack[-3], Stack[-4])
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
0x17: Call2 0x19c

0x18: Pop(0)
0x19: PushEmpty()
0x1a: Call2 0x1b8

0x1b: Pop(0)
0x1c: @ ProcessEvents()
0x1d: Pop(0)
0x1e: Return(); Pop(0)

0x1f: PushEmpty(bool, bool)
0x20: Push((int) 1)
0x21: Pop(1); Push((bool) Stack[7 + Tasks[-1].StackPointer] == Stack[-1])
0x22: IF (Stack[-1] == 0) GOTO 0x27; Pop(1)

0x23: Push("intro_danko")
0x24: @ IsSoundPlaying(Stack[-2], Stack[-1])
0x25: Pop(1)
0x26: GOTO 0x2d

0x27: Push((int) 2)
0x28: Pop(1); Push((bool) Stack[7 + Tasks[-1].StackPointer] == Stack[-1])
0x29: IF (Stack[-1] == 0) GOTO 0x2d; Pop(1)

0x2a: Push("intro_burah")
0x2b: @ IsSoundPlaying(Stack[-2], Stack[-1])
0x2c: Pop(1)
0x2d: Push((int) 3)
0x2e: Pop(1); Push((bool) Stack[7 + Tasks[-1].StackPointer] == Stack[-1])
0x2f: IF (Stack[-1] == 0) GOTO 0x33; Pop(1)

0x30: Push("intro_klara")
0x31: @ IsSoundPlaying(Stack[-2], Stack[-1])
0x32: Pop(1)
0x33: Push((int) 0)
0x34: Pop(1); Push((bool) Stack[7 + Tasks[-1].StackPointer] == Stack[-1])
0x35: IF (Stack[-1] == 0) GOTO 0x3f; Pop(1)

0x36: Push( Stack[8 + Tasks[-1].StackPointer] )
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
0x42: Stack[7 + Tasks[-1].StackPointer] = Stack[-1]
0x43: Push((int) 1)
0x44: Pop(1); Push((bool) Stack[7 + Tasks[-1].StackPointer] == Stack[-1])
0x45: IF (Stack[-1] == 0) GOTO 0x4d; Pop(1)

0x46: Push((int) 204)
0x47: @ GetStringByID(Stack[-10], Stack[-1])
0x48: Pop(1)
0x49: Push("intro_danko")
0x4a: @ PlaySound(Stack[-1])
0x4b: Pop(1)
0x4c: GOTO 0x7a

0x4d: Push((int) 2)
0x4e: Pop(1); Push((bool) Stack[7 + Tasks[-1].StackPointer] == Stack[-1])
0x4f: IF (Stack[-1] == 0) GOTO 0x57; Pop(1)

0x50: Push((int) 207)
0x51: @ GetStringByID(Stack[-10], Stack[-1])
0x52: Pop(1)
0x53: Push("intro_burah")
0x54: @ PlaySound(Stack[-1])
0x55: Pop(1)
0x56: GOTO 0x7a

0x57: Push((int) 3)
0x58: Pop(1); Push((bool) Stack[7 + Tasks[-1].StackPointer] == Stack[-1])
0x59: IF (Stack[-1] == 0) GOTO 0x61; Pop(1)

0x5a: Push((int) 210)
0x5b: @ GetStringByID(Stack[-10], Stack[-1])
0x5c: Pop(1)
0x5d: Push("intro_klara")
0x5e: @ PlaySound(Stack[-1])
0x5f: Pop(1)
0x60: GOTO 0x7a

0x61: Push((int) 0)
0x62: Pop(1); Push((bool) Stack[7 + Tasks[-1].StackPointer] == Stack[-1])
0x63: IF (Stack[-1] == 0) GOTO 0x77; Pop(1)

0x64: Push((int) 2)
0x65: @ irand(Stack[-8], Stack[-1])
0x66: Pop(1)
0x67: Push( Stack[8 + Tasks[-1].StackPointer] )
0x68: IF (Stack[-1] == 0) GOTO 0x70; Pop(1)

0x69: Push((int) 211)
0x6a: @ GetStringByID(Stack[-10], Stack[-1])
0x6b: Pop(1)
0x6c: Push("intro1")
0x6d: @ PlaySound(Stack[-1])
0x6e: Pop(1)
0x6f: GOTO 0x76

0x70: Push((int) 212)
0x71: @ GetStringByID(Stack[-10], Stack[-1])
0x72: Pop(1)
0x73: Push("intro2")
0x74: @ PlaySound(Stack[-1])
0x75: Pop(1)
0x76: GOTO 0x7a

0x77: Push((int) 600)
0x78: @ GetStringByID(Stack[-10], Stack[-1])
0x79: Pop(1)
0x7a: Push("intro_font")
0x7b: Push((int) 2)
0x7c: Pop(1); Push(Stack[6 + StackPtr] * Stack[-1]);
0x7d: Pop(1); Push(Stack[3 + StackPtr] - Stack[-1]);
0x7e: Push((int) 8)
0x7f: Pop(2); Push(Stack[-2] - Stack[-1]);
0x80: @ GetTextHeightInWidth(Stack[-5], Stack[-2], Stack[-1], Stack[-10])
0x81: Pop(2)
0x82: Stack[11 + Tasks[-1].StackPointer] = (bool)1
0x83: Return(); Pop(0)

0x84: PushEmpty()
0x85: PushEmpty(bool)
0x86: Stack[-1] = (bool) 1
0x87: PushEmpty(bool)
0x88: Stack[-1] = (bool) 1
0x89: Push((int) 40)
0x8a: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x8b: IF (Stack[-1] == 0) GOTO 0x90; Pop(1)

0x8c: Push((int) 268)
0x8d: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x8e: IF (Stack[-1] == 0) GOTO 0x90; Pop(1)

0x8f: Stack[-1] = (bool) 0
0x90: IF (Stack[-1] == 0) GOTO 0x95; Pop(1)

0x91: Push((int) 274)
0x92: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x93: IF (Stack[-1] == 0) GOTO 0x95; Pop(1)

0x94: Stack[-1] = (bool) 0
0x95: IF (Stack[-1] == 0) GOTO 0x98; Pop(1)

0x96: Stack[12 + Tasks[-1].StackPointer] = (bool)1
0x97: GOTO 0xc6

0x98: PushEmpty(bool)
0x99: Stack[-1] = (bool) 1
0x9a: PushEmpty(bool)
0x9b: Stack[-1] = (bool) 1
0x9c: Push((int) 38)
0x9d: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x9e: IF (Stack[-1] == 0) GOTO 0xa3; Pop(1)

0x9f: Push((int) 267)
0xa0: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xa1: IF (Stack[-1] == 0) GOTO 0xa3; Pop(1)

0xa2: Stack[-1] = (bool) 0
0xa3: IF (Stack[-1] == 0) GOTO 0xa8; Pop(1)

0xa4: Push((int) 272)
0xa5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa6: IF (Stack[-1] == 0) GOTO 0xa8; Pop(1)

0xa7: Stack[-1] = (bool) 0
0xa8: IF (Stack[-1] == 0) GOTO 0xab; Pop(1)

0xa9: Stack[13 + Tasks[-1].StackPointer] = (bool)1
0xaa: GOTO 0xc6

0xab: PushEmpty(bool)
0xac: Stack[-1] = (bool) 1
0xad: PushEmpty(bool)
0xae: Stack[-1] = (bool) 1
0xaf: PushEmpty(bool)
0xb0: Stack[-1] = (bool) 1
0xb1: Push((int) 27)
0xb2: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0xb3: IF (Stack[-1] == 0) GOTO 0xb8; Pop(1)

0xb4: Push((int) 32)
0xb5: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0xb6: IF (Stack[-1] == 0) GOTO 0xb8; Pop(1)

0xb7: Stack[-1] = (bool) 0
0xb8: IF (Stack[-1] == 0) GOTO 0xbd; Pop(1)

0xb9: Push((int) 257)
0xba: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xbb: IF (Stack[-1] == 0) GOTO 0xbd; Pop(1)

0xbc: Stack[-1] = (bool) 0
0xbd: IF (Stack[-1] == 0) GOTO 0xc2; Pop(1)

0xbe: Push((int) 262)
0xbf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc0: IF (Stack[-1] == 0) GOTO 0xc2; Pop(1)

0xc1: Stack[-1] = (bool) 0
0xc2: IF (Stack[-1] == 0) GOTO 0xc6; Pop(1)

0xc3: PushEmpty()
0xc4: Call2 0xee

0xc5: Pop(0)
0xc6: Return(); Pop(0)

0xc7: PushEmpty()
0xc8: PushEmpty(bool)
0xc9: Stack[-1] = (bool) 1
0xca: PushEmpty(bool)
0xcb: Stack[-1] = (bool) 1
0xcc: Push((int) 40)
0xcd: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xce: IF (Stack[-1] == 0) GOTO 0xd3; Pop(1)

0xcf: Push((int) 268)
0xd0: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xd1: IF (Stack[-1] == 0) GOTO 0xd3; Pop(1)

0xd2: Stack[-1] = (bool) 0
0xd3: IF (Stack[-1] == 0) GOTO 0xd8; Pop(1)

0xd4: Push((int) 274)
0xd5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd6: IF (Stack[-1] == 0) GOTO 0xd8; Pop(1)

0xd7: Stack[-1] = (bool) 0
0xd8: IF (Stack[-1] == 0) GOTO 0xdb; Pop(1)

0xd9: Stack[12 + Tasks[-1].StackPointer] = (bool)0
0xda: GOTO 0xed

0xdb: PushEmpty(bool)
0xdc: Stack[-1] = (bool) 1
0xdd: PushEmpty(bool)
0xde: Stack[-1] = (bool) 1
0xdf: Push((int) 38)
0xe0: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xe1: IF (Stack[-1] == 0) GOTO 0xe6; Pop(1)

0xe2: Push((int) 267)
0xe3: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xe4: IF (Stack[-1] == 0) GOTO 0xe6; Pop(1)

0xe5: Stack[-1] = (bool) 0
0xe6: IF (Stack[-1] == 0) GOTO 0xeb; Pop(1)

0xe7: Push((int) 272)
0xe8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe9: IF (Stack[-1] == 0) GOTO 0xeb; Pop(1)

0xea: Stack[-1] = (bool) 0
0xeb: IF (Stack[-1] == 0) GOTO 0xed; Pop(1)

0xec: Stack[13 + Tasks[-1].StackPointer] = (bool)0
0xed: Return(); Pop(0)

0xee: Push((int) 0)
0xef: @ SendMessageToParent(Stack[-1])
0xf0: Pop(1)
0xf1: Stack[11 + Tasks[-1].StackPointer] = (bool)0
0xf2: Push((int) 1)
0xf3: Pop(1); Push((bool) Stack[7 + Tasks[-1].StackPointer] == Stack[-1])
0xf4: IF (Stack[-1] == 0) GOTO 0xf9; Pop(1)

0xf5: Push("intro_danko")
0xf6: @ PauseSound(Stack[-1])
0xf7: Pop(1)
0xf8: GOTO 0x110

0xf9: Push((int) 2)
0xfa: Pop(1); Push((bool) Stack[7 + Tasks[-1].StackPointer] == Stack[-1])
0xfb: IF (Stack[-1] == 0) GOTO 0x100; Pop(1)

0xfc: Push("intro_burah")
0xfd: @ PauseSound(Stack[-1])
0xfe: Pop(1)
0xff: GOTO 0x110

0x100: Push((int) 3)
0x101: Pop(1); Push((bool) Stack[7 + Tasks[-1].StackPointer] == Stack[-1])
0x102: IF (Stack[-1] == 0) GOTO 0x107; Pop(1)

0x103: Push("intro_klara")
0x104: @ PauseSound(Stack[-1])
0x105: Pop(1)
0x106: GOTO 0x110

0x107: Push( Stack[8 + Tasks[-1].StackPointer] )
0x108: IF (Stack[-1] == 0) GOTO 0x10d; Pop(1)

0x109: Push("intro1")
0x10a: @ PauseSound(Stack[-1])
0x10b: Pop(1)
0x10c: GOTO 0x110

0x10d: Push("intro2")
0x10e: @ PauseSound(Stack[-1])
0x10f: Pop(1)
0x110: Return(); Pop(0)

0x111: PushEmpty(float, float)
0x112: Pop(0); Push((bool) Stack[11 + Tasks[-1].StackPointer] == 0)
0x113: IF (Stack[-1] == 0) GOTO 0x115; Pop(1)

0x114: Return(); Pop(2)

0x115: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] + Stack[-3]; Pop(0);
0x116: Stack[-1] = (float) 16.0
0x117: Push((int) 1)
0x118: Pop(1); Push((bool) Stack[-1] == Stack[7 + Tasks[-1].StackPointer])
0x119: IF (Stack[-1] == 0) GOTO 0x11c; Pop(1)

0x11a: Stack[-1] = (float) 16.0
0x11b: GOTO 0x125

0x11c: Push((int) 2)
0x11d: Pop(1); Push((bool) Stack[-1] == Stack[7 + Tasks[-1].StackPointer])
0x11e: IF (Stack[-1] == 0) GOTO 0x121; Pop(1)

0x11f: Stack[-1] = (float) 16.0
0x120: GOTO 0x125

0x121: Push((int) 3)
0x122: Pop(1); Push((bool) Stack[-1] == Stack[7 + Tasks[-1].StackPointer])
0x123: IF (Stack[-1] == 0) GOTO 0x125; Pop(1)

0x124: Stack[-1] = (float) 11.0
0x125: Push( Stack[13 + Tasks[-1].StackPointer] )
0x126: IF (Stack[-1] == 0) GOTO 0x129; Pop(1)

0x127: Push((float)4.0)
0x128: Stack[-2] = Stack[-2] * Stack[-1]; Pop(1);
0x129: Push( Stack[12 + Tasks[-1].StackPointer] )
0x12a: IF (Stack[-1] == 0) GOTO 0x12d; Pop(1)

0x12b: Push((float)4.0)
0x12c: Stack[-2] = Stack[-2] / Stack[-1]; Pop(1);
0x12d: Pop(0); Push(Stack[-3] * Stack[-1]);
0x12e: Stack[2 + Tasks[-1].StackPointer] = Stack[2 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x12f: PushEmpty(bool)
0x130: Stack[-1] = (bool) 0
0x131: Pop(0); Push(Stack[4 + StackPtr] + Stack[5 + StackPtr]);
0x132: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] > Stack[-1])
0x133: IF (Stack[-1] == 0) GOTO 0x13a; Pop(1)

0x134: PushEmpty(bool)
0x135: Call2 0x1f

0x136: Pop(0)
0x137: Pop(1); Push((bool) Stack[-1] == 0)
0x138: IF (Stack[-1] == 0) GOTO 0x13a; Pop(1)

0x139: Stack[-1] = (bool) 1
0x13a: IF (Stack[-1] == 0) GOTO 0x13e; Pop(1)

0x13b: PushEmpty()
0x13c: Call2 0xee

0x13d: Pop(0)
0x13e: PushEmpty(bool)
0x13f: Stack[-1] = (bool) 0
0x140: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] > Stack[5 + Tasks[-1].StackPointer])
0x141: IF (Stack[-1] == 0) GOTO 0x148; Pop(1)

0x142: PushEmpty(bool)
0x143: Call2 0x1f

0x144: Pop(0)
0x145: Pop(1); Push((bool) Stack[-1] == 0)
0x146: IF (Stack[-1] == 0) GOTO 0x148; Pop(1)

0x147: Stack[-1] = (bool) 1
0x148: IF (Stack[-1] == 0) GOTO 0x150; Pop(1)

0x149: Stack[0 + Tasks[-1].StackPointer] = Stack[0 + Tasks[-1].StackPointer] + Stack[-3]; Pop(0);
0x14a: Push((int) 1)
0x14b: Pop(1); Push((bool) Stack[0 + Tasks[-1].StackPointer] > Stack[-1])
0x14c: IF (Stack[-1] == 0) GOTO 0x150; Pop(1)

0x14d: PushEmpty()
0x14e: Call2 0xee

0x14f: Pop(0)
0x150: Return(); Pop(2)

0x151: PushEmpty()
0x152: PushEmpty(bool)
0x153: Stack[-1] = (bool) 1
0x154: PushEmpty(bool)
0x155: Stack[-1] = (bool) 1
0x156: PushEmpty(bool)
0x157: Stack[-1] = (bool) 1
0x158: Push("ul")
0x159: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x15a: IF (Stack[-1] == 0) GOTO 0x15f; Pop(1)

0x15b: Push("bl")
0x15c: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x15d: IF (Stack[-1] == 0) GOTO 0x15f; Pop(1)

0x15e: Stack[-1] = (bool) 0
0x15f: IF (Stack[-1] == 0) GOTO 0x164; Pop(1)

0x160: Push("br")
0x161: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x162: IF (Stack[-1] == 0) GOTO 0x164; Pop(1)

0x163: Stack[-1] = (bool) 0
0x164: IF (Stack[-1] == 0) GOTO 0x169; Pop(1)

0x165: Push("ur")
0x166: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x167: IF (Stack[-1] == 0) GOTO 0x169; Pop(1)

0x168: Stack[-1] = (bool) 0
0x169: IF (Stack[-1] == 0) GOTO 0x16e; Pop(1)

0x16a: PushEmpty()
0x16b: Call2 0x1b8

0x16c: Pop(0)
0x16d: Return(); Pop(0)

0x16e: Pop(0); Push((bool) Stack[11 + Tasks[-1].StackPointer] == 0)
0x16f: IF (Stack[-1] == 0) GOTO 0x174; Pop(1)

0x170: PushEmpty(int)
0x171: Stack[-1] = Stack[-4]
0x172: Call2 0x41

0x173: Pop(1)
0x174: Return(); Pop(0)

0x175: PushEmpty(int, float, int, int, float, int)
0x176: Pop(0); Push((bool) Stack[11 + Tasks[-1].StackPointer] == 0)
0x177: IF (Stack[-1] == 0) GOTO 0x179; Pop(1)

0x178: Return(); Pop(6)

0x179: Stack[-3] = Stack[2 + Tasks[-1].StackPointer]
0x17a: Stack[-2] = Stack[2 + Tasks[-1].StackPointer] - Stack[-3]; Pop(0);
0x17b: Push("intro_font")
0x17c: Push((int) 4)
0x17d: Pop(1); Push(Stack[6 + StackPtr] + Stack[-1]);
0x17e: Pop(0); Push(Stack[4 + StackPtr] - Stack[-5]);
0x17f: Push((int) 2)
0x180: Pop(1); Push(Stack[6 + StackPtr] * Stack[-1]);
0x181: Pop(1); Push(Stack[3 + StackPtr] - Stack[-1]);
0x182: Push((int) 8)
0x183: Pop(2); Push(Stack[-2] - Stack[-1]);
0x184: Push((float)0.24314)
0x185: Push((float)0.12157)
0x186: Push((float)0.11765)
0x187: Push((int) 1)
0x188: Pop(1); Push(Stack[-1] - Stack[-10]);
0x189: @ PrintInWidth(Stack[-9], Stack[-8], Stack[-7], Stack[-6], Stack[-5], Stack[-10], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x18a: Pop(8)
0x18b: Push("intro_font")
0x18c: Push((int) 4)
0x18d: Pop(1); Push(Stack[6 + StackPtr] + Stack[-1]);
0x18e: Pop(0); Push(Stack[4 + StackPtr] - Stack[-5]);
0x18f: Push((int) 1)
0x190: Pop(2); Push(Stack[-2] - Stack[-1]);
0x191: Push((int) 2)
0x192: Pop(1); Push(Stack[6 + StackPtr] * Stack[-1]);
0x193: Pop(1); Push(Stack[3 + StackPtr] - Stack[-1]);
0x194: Push((int) 8)
0x195: Pop(2); Push(Stack[-2] - Stack[-1]);
0x196: Push((float)0.24314)
0x197: Push((float)0.12157)
0x198: Push((float)0.11765)
0x199: @ PrintInWidth(Stack[-8], Stack[-7], Stack[-6], Stack[-5], Stack[-4], Stack[-10], Stack[-3], Stack[-2], Stack[-1], Stack[-9])
0x19a: Pop(7)
0x19b: Return(); Pop(6)

0x19c: Stack[9 + Tasks[-1].StackPointer] = (int)0
0x19d: @ CreateStringVector(Stack[-14])
0x19e: Pop(0)
0x19f: Push("ul")
0x1a0: @@ add(Stack[-1])
0x1a1: Pop(1)
0x1a2: Push("ur")
0x1a3: @@ add(Stack[-1])
0x1a4: Pop(1)
0x1a5: Push("br")
0x1a6: @@ add(Stack[-1])
0x1a7: Pop(1)
0x1a8: Push("ul")
0x1a9: @@ add(Stack[-1])
0x1aa: Pop(1)
0x1ab: Push("br")
0x1ac: @@ add(Stack[-1])
0x1ad: Pop(1)
0x1ae: Push("ul")
0x1af: @@ add(Stack[-1])
0x1b0: Pop(1)
0x1b1: Push("bl")
0x1b2: @@ add(Stack[-1])
0x1b3: Pop(1)
0x1b4: Push("ul")
0x1b5: @@ add(Stack[-1])
0x1b6: Pop(1)
0x1b7: Return(); Pop(0)

0x1b8: PushEmpty(string, int, string, int)
0x1b9: @@ get(Stack[-2], Stack[-9])
0x1ba: Pop(0)
0x1bb: Push((int) 0)
0x1bc: @ SendMessage(Stack[-1], Stack[-3])
0x1bd: Pop(1)
0x1be: Push((int) 1)
0x1bf: Stack[9 + Tasks[-1].StackPointer] = Stack[9 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x1c0: @@ size(Stack[-1])
0x1c1: Pop(0)
0x1c2: Pop(0); Push((bool) Stack[9 + Tasks[-1].StackPointer] >= Stack[-1])
0x1c3: IF (Stack[-1] == 0) GOTO 0x1c5; Pop(1)

0x1c4: Stack[9 + Tasks[-1].StackPointer] = Stack[9 + Tasks[-1].StackPointer] - Stack[-1]; Pop(0);
0x1c5: Return(); Pop(4)

