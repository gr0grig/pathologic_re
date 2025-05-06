GlobalVarCount = 0

Strings:
	size
	GetKeyboardState fail
	GetKeyState
	get
	wrong key code
	scrollbar
	whitepixel
	default
	 , 
	add
	Next
	qsave
	qload
	clear
	AddKeyToAction fail

Import:
	SetNeedUpdate (1 args)
	CaptureKeyboard (0 args)
	CaptureMouse (0 args)
	GetKeyboardState (1 args)
	Trace (1 args)
	IsValidVirtualKey (2 args)
	Unbind (1 args)
	Bind (2 args)
	ReleaseKeyboard (0 args)
	ReleaseMouse (0 args)
	SendMessageToParent (1 args)
	StretchBlit (5 args)
	GetTextWidth (3 args)
	Print (7 args)
	CreateIntVector (1 args)
	CreateStringVector (1 args)
	CreateKeyEnumerator (1 args)
	GetKeyName (2 args)
	CreateObjectVector (1 args)
	GetBindType (2 args)
	GetBindAction (2 args)
	GetBindCommand (2 args)
	GetWindowSize (2 args)
	ClientToScreen (2 args)
	EnableClipping (1 args)
	SetOwnerDraw (1 args)
	ProcessEvents (0 args)
	SendMessage (2 args)
	GetStringByID (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (int, int, int, int, int, object, object, object, object, object, int, bool, bool) Params = 0
		EVENT_1 Op = 0x1f Vars = (float)
		EVENT_2 Op = 0x9d Vars = (int, int)
		EVENT_6 Op = 0xa9 Vars = (int, int)
		EVENT_3 Op = 0xb5 Vars = (int, int)
		EVENT_7 Op = 0xc1 Vars = (int, int)
		EVENT_15 Op = 0xcd Vars = (int, int, float)
		EVENT_0 Op = 0x236 Vars = ()
		EVENT_200 Op = 0x24e Vars = (int, string, object)


0x0: Push((bool) 1)
0x1: @ SetNeedUpdate(Stack[-1])
0x2: Pop(1)
0x3: Stack[11 + Tasks[-1].StackPointer] = (bool)0
0x4: Stack[12 + Tasks[-1].StackPointer] = (bool)0
0x5: Stack[10 + Tasks[-1].StackPointer] = (int)-1
0x6: PushEmpty()
0x7: Call2 0x138

0x8: Pop(0)
0x9: PushEmpty()
0xa: Call2 0x223

0xb: Pop(0)
0xc: Return(); Pop(0)

0xd: PushEmpty(int, int)
0xe: @@ size(Stack[-1])
0xf: Pop(0)
0x10: Stack[-3] = Stack[-1]
0x11: Return(); Pop(2)

0x12: Stack[-1] = (int) 17
0x13: Return(); Pop(0)

0x14: Stack[-1] = Stack[11 + Tasks[-1].StackPointer]
0x15: Return(); Pop(0)

0x16: PushEmpty()
0x17: Stack[10 + Tasks[-1].StackPointer] = Stack[-1]
0x18: Stack[11 + Tasks[-1].StackPointer] = (bool)1
0x19: Stack[12 + Tasks[-1].StackPointer] = (bool)0
0x1a: @ CaptureKeyboard()
0x1b: Pop(0)
0x1c: @ CaptureMouse()
0x1d: Pop(0)
0x1e: Return(); Pop(0)

0x1f: PushEmpty(object, int, bool, int, object, int, bool, int)
0x20: PushEmpty(bool)
0x21: Call2 0x14

0x22: Pop(0)
0x23: Pop(1); Push((bool) Stack[-1] == 0)
0x24: IF (Stack[-1] == 0) GOTO 0x26; Pop(1)

0x25: Return(); Pop(8)

0x26: @ GetKeyboardState(Stack[-4])
0x27: Pop(0)
0x28: Pop(0); Push((bool) Stack[-4] == 0)
0x29: IF (Stack[-1] == 0) GOTO 0x2e; Pop(1)

0x2a: Push("GetKeyboardState fail")
0x2b: @ Trace(Stack[-1])
0x2c: Pop(1)
0x2d: Return(); Pop(8)

0x2e: Stack[-3] = (int) 0
0x2f: Push((int) 512)
0x30: Pop(1); Push((bool) Stack[-4] < Stack[-1])
0x31: IF (Stack[-1] == 0) GOTO 0x46; Pop(1)

0x32: @ IsValidVirtualKey(Stack[-2], Stack[-3])
0x33: Pop(0)
0x34: Push(Stack[-2])
0x35: IF (Stack[-1] == 0) GOTO 0x43; Pop(1)

0x36: @@ GetKeyState(Stack[-1], Stack[-3])
0x37: Pop(0)
0x38: Push((int) 128)
0x39: Pop(1); Push(Stack[-2] & Stack[-1]);
0x3a: IF (Stack[-1] == 0) GOTO 0x42; Pop(1)

0x3b: Push( Stack[12 + Tasks[-1].StackPointer] )
0x3c: IF (Stack[-1] == 0) GOTO 0x41; Pop(1)

0x3d: PushEmpty(int)
0x3e: Stack[-1] = Stack[-4]
0x3f: Call2 0x49

0x40: Pop(1)
0x41: Return(); Pop(8)

0x42: GOTO 0x43

0x43: Push((int) 1)
0x44: Stack[-4] = Stack[-4] + Stack[-1]; Pop(1);
0x45: GOTO 0x2f

0x46: Stack[12 + Tasks[-1].StackPointer] = (bool)1
0x47: Return(); Pop(8)

0x48: Stack[-4] = 0
0x49: PushEmpty(bool, int, object, int, bool, bool, int, int, int, bool, int, object, int, bool, bool, int, int, int)
0x4a: PushEmpty(bool)
0x4b: Stack[-1] = (bool) 0
0x4c: Push((int) -1)
0x4d: Pop(1); Push((bool) Stack[-21] != Stack[-1])
0x4e: IF (Stack[-1] == 0) GOTO 0x53; Pop(1)

0x4f: Push((int) 27)
0x50: Pop(1); Push((bool) Stack[-21] != Stack[-1])
0x51: IF (Stack[-1] == 0) GOTO 0x53; Pop(1)

0x52: Stack[-1] = (bool) 1
0x53: IF (Stack[-1] == 0) GOTO 0x88; Pop(1)

0x54: @ IsValidVirtualKey(Stack[-9], Stack[-19])
0x55: Pop(0)
0x56: Push(Stack[-9])
0x57: IF (Stack[-1] == 0) GOTO 0x85; Pop(1)

0x58: @@ get(Stack[-8], Stack[-10])
0x59: Pop(0)
0x5a: @ Unbind(Stack[-19])
0x5b: Pop(0)
0x5c: @@ get(Stack[-7], Stack[-10])
0x5d: Pop(0)
0x5e: @@ size(Stack[-6])
0x5f: Pop(0)
0x60: Push((int) 256)
0x61: Pop(1); Push((bool) Stack[-20] >= Stack[-1])
0x62: IF (Stack[-1] == 0) GOTO 0x65; Pop(1)

0x63: Stack[-5] = (bool) 1
0x64: GOTO 0x66

0x65: Stack[-5] = (bool) 0
0x66: Stack[-3] = (int) 0
0x67: Pop(0); Push((bool) Stack[-3] < Stack[-6])
0x68: IF (Stack[-1] == 0) GOTO 0x7e; Pop(1)

0x69: @@ get(Stack[-2], Stack[-3])
0x6a: Pop(0)
0x6b: @@ get(Stack[-1], Stack[-2])
0x6c: Pop(0)
0x6d: Push(Stack[-5])
0x6e: IF (Stack[-1] == 0) GOTO 0x76; Pop(1)

0x6f: Push((int) 256)
0x70: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x71: IF (Stack[-1] == 0) GOTO 0x75; Pop(1)

0x72: @ Unbind(Stack[-1])
0x73: Pop(0)
0x74: GOTO 0x7e

0x75: GOTO 0x7b

0x76: Push((int) 256)
0x77: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x78: IF (Stack[-1] == 0) GOTO 0x7b; Pop(1)

0x79: @ Unbind(Stack[-1])
0x7a: Pop(0)
0x7b: Push((int) 1)
0x7c: Stack[-4] = Stack[-4] + Stack[-1]; Pop(1);
0x7d: GOTO 0x67

0x7e: @ Bind(Stack[-19], Stack[-8])
0x7f: Pop(0)
0x80: PushEmpty()
0x81: Call2 0x138

0x82: Pop(0)
0x83: Stack[-7] = 0
0x84: GOTO 0x88

0x85: Push("wrong key code")
0x86: @ Trace(Stack[-1])
0x87: Pop(1)
0x88: Stack[10 + Tasks[-1].StackPointer] = (int)-1
0x89: Stack[11 + Tasks[-1].StackPointer] = (bool)0
0x8a: Stack[12 + Tasks[-1].StackPointer] = (bool)0
0x8b: @ ReleaseKeyboard()
0x8c: Pop(0)
0x8d: @ ReleaseMouse()
0x8e: Pop(0)
0x8f: Push((int) 1)
0x90: @ SendMessageToParent(Stack[-1])
0x91: Pop(1)
0x92: Return(); Pop(18)

0x93: PushEmpty()
0x94: Push((int) -1)
0x95: Pop(1); Push((bool) Stack[10 + Tasks[-1].StackPointer] == Stack[-1])
0x96: IF (Stack[-1] == 0) GOTO 0x9c; Pop(1)

0x97: PushEmpty(int)
0x98: Stack[-1] = Stack[-4]
0x99: Call2 0x16

0x9a: Pop(1)
0x9b: GOTO 0x9c

0x9c: Return(); Pop(0)

0x9d: PushEmpty()
0x9e: PushEmpty(bool)
0x9f: Call2 0x14

0xa0: Pop(0)
0xa1: Pop(1); Push((bool) Stack[-1] == 0)
0xa2: IF (Stack[-1] == 0) GOTO 0xa8; Pop(1)

0xa3: PushEmpty(int, int)
0xa4: Stack[-2] = Stack[-4]
0xa5: Stack[-1] = Stack[-3]
0xa6: Call2 0x269

0xa7: Pop(2)
0xa8: Return(); Pop(0)

0xa9: PushEmpty()
0xaa: PushEmpty(bool)
0xab: Call2 0x14

0xac: Pop(0)
0xad: Pop(1); Push((bool) Stack[-1] == 0)
0xae: IF (Stack[-1] == 0) GOTO 0xb4; Pop(1)

0xaf: PushEmpty(int, int)
0xb0: Stack[-2] = Stack[-4]
0xb1: Stack[-1] = Stack[-3]
0xb2: Call2 0x28b

0xb3: Pop(2)
0xb4: Return(); Pop(0)

0xb5: PushEmpty()
0xb6: PushEmpty(bool)
0xb7: Call2 0x14

0xb8: Pop(0)
0xb9: Pop(1); Push((bool) Stack[-1] == 0)
0xba: IF (Stack[-1] == 0) GOTO 0xc0; Pop(1)

0xbb: PushEmpty(int, int)
0xbc: Stack[-2] = Stack[-4]
0xbd: Stack[-1] = Stack[-3]
0xbe: Call2 0x27a

0xbf: Pop(2)
0xc0: Return(); Pop(0)

0xc1: PushEmpty()
0xc2: PushEmpty(bool)
0xc3: Call2 0x14

0xc4: Pop(0)
0xc5: Pop(1); Push((bool) Stack[-1] == 0)
0xc6: IF (Stack[-1] == 0) GOTO 0xcc; Pop(1)

0xc7: PushEmpty(int, int)
0xc8: Stack[-2] = Stack[-4]
0xc9: Stack[-1] = Stack[-3]
0xca: Call2 0x29c

0xcb: Pop(2)
0xcc: Return(); Pop(0)

0xcd: PushEmpty()
0xce: PushEmpty(bool)
0xcf: Call2 0x14

0xd0: Pop(0)
0xd1: Pop(1); Push((bool) Stack[-1] == 0)
0xd2: IF (Stack[-1] == 0) GOTO 0xd9; Pop(1)

0xd3: PushEmpty(int, int, float)
0xd4: Stack[-3] = Stack[-6]
0xd5: Stack[-2] = Stack[-5]
0xd6: Stack[-1] = Stack[-4]
0xd7: Call2 0x25d

0xd8: Pop(3)
0xd9: Return(); Pop(0)

0xda: PushEmpty()
0xdb: Return(); Pop(0)

0xdc: PushEmpty()
0xdd: Return(); Pop(0)

0xde: PushEmpty()
0xdf: Return(); Pop(0)

0xe0: Stack[-1] = "scrollbar"
0xe1: Return(); Pop(0)

0xe2: PushEmpty(string, int, int, string, string, object, int, int, int, string, int, string, int, int, string, string, object, int, int, int, string, int)
0xe3: Pop(0); Push((bool) Stack[-25] == Stack[10 + Tasks[-1].StackPointer])
0xe4: IF (Stack[-1] == 0) GOTO 0xfe; Pop(1)

0xe5: Push("whitepixel")
0xe6: PushEmpty(int)
0xe7: Call2 0x12

0xe8: Pop(0)
0xe9: @ StretchBlit(Stack[-2], Stack[-26], Stack[-25], Stack[-1], Stack[-1])
0xea: Pop(2)
0xeb: PushEmpty(string, int)
0xec: Stack[-1] = (int) 108
0xed: Call2 0x2eb

0xee: Stack[-13] = Stack[-2]
0xef: Pop(2)
0xf0: Push("default")
0xf1: @ GetTextWidth(Stack[-11], Stack[-1], Stack[-12])
0xf2: Pop(1)
0xf3: Push("default")
0xf4: Pop(0); Push(Stack[1 + StackPtr] - Stack[-11]);
0xf5: Push((int) 2)
0xf6: Pop(2); Push(Stack[-2] / Stack[-1]);
0xf7: Pop(1); Push(Stack[-26] + Stack[-1]);
0xf8: Push((float)0.25098)
0xf9: Push((float)0.25098)
0xfa: Push((float)0.25098)
0xfb: @ Print(Stack[-5], Stack[-4], Stack[-28], Stack[-16], Stack[-3], Stack[-2], Stack[-1])
0xfc: Pop(5)
0xfd: Return(); Pop(22)

0xfe: @@ get(Stack[-9], Stack[-25])
0xff: Pop(0)
0x100: PushEmpty(string, int)
0x101: Stack[-1] = Stack[-11]
0x102: Call2 0x2eb

0x103: Stack[-10] = Stack[-2]
0x104: Pop(2)
0x105: @@ get(Stack[-6], Stack[-25])
0x106: Pop(0)
0x107: @@ size(Stack[-5])
0x108: Pop(0)
0x109: Stack[-4] = (int) 0
0x10a: Pop(0); Push((bool) Stack[-4] < Stack[-5])
0x10b: IF (Stack[-1] == 0) GOTO 0x118; Pop(1)

0x10c: Push(Stack[-4])
0x10d: IF (Stack[-1] == 0) GOTO 0x110; Pop(1)

0x10e: Push(" , ")
0x10f: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x110: @@ get(Stack[-3], Stack[-4])
0x111: Pop(0)
0x112: @@ get(Stack[-2], Stack[-3])
0x113: Pop(0)
0x114: Stack[-7] = Stack[-7] + Stack[-2]; Pop(0);
0x115: Push((int) 1)
0x116: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x117: GOTO 0x10a

0x118: Push("default")
0x119: Push((float)0.55686)
0x11a: Push((float)0.55686)
0x11b: Push((float)0.55686)
0x11c: @ Print(Stack[-4], Stack[-28], Stack[-27], Stack[-12], Stack[-3], Stack[-2], Stack[-1])
0x11d: Pop(4)
0x11e: Push(Stack[-5])
0x11f: IF (Stack[-1] == 0) GOTO 0x12b; Pop(1)

0x120: Push("default")
0x121: @ GetTextWidth(Stack[-2], Stack[-1], Stack[-8])
0x122: Pop(1)
0x123: Push("default")
0x124: Pop(0); Push(Stack[-25] + Stack[1 + StackPtr]);
0x125: Pop(1); Push(Stack[-1] - Stack[-3]);
0x126: Push((float)0.55686)
0x127: Push((float)0.55686)
0x128: Push((float)0.55686)
0x129: @ Print(Stack[-5], Stack[-4], Stack[-28], Stack[-12], Stack[-3], Stack[-2], Stack[-1])
0x12a: Pop(5)
0x12b: Return(); Pop(22)

0x12c: Stack[-6] = 0
0x12d: PushEmpty(object, object)
0x12e: @@ add(Stack[-4])
0x12f: Pop(0)
0x130: @@ add(Stack[-3])
0x131: Pop(0)
0x132: @ CreateIntVector(Stack[-1])
0x133: Pop(0)
0x134: @@ add(Stack[-1])
0x135: Pop(0)
0x136: Return(); Pop(2)

0x137: Stack[-1] = 0
0x138: PushEmpty(object, bool, int, string, object, bool, int, string)
0x139: @ CreateIntVector(Stack[-8])
0x13a: Pop(0)
0x13b: @ CreateStringVector(Stack[-9])
0x13c: Pop(0)
0x13d: @ CreateKeyEnumerator(Stack[-4])
0x13e: Pop(0)
0x13f: Push((bool) 1)
0x140: IF (Stack[-1] == 0) GOTO 0x14d; Pop(1)

0x141: @@ Next(Stack[-3], Stack[-2])
0x142: Pop(0)
0x143: Pop(0); Push((bool) Stack[-3] == 0)
0x144: IF (Stack[-1] == 0) GOTO 0x146; Pop(1)

0x145: GOTO 0x14d

0x146: @@ add(Stack[-2])
0x147: Pop(0)
0x148: @ GetKeyName(Stack[-1], Stack[-2])
0x149: Pop(0)
0x14a: @@ add(Stack[-1])
0x14b: Pop(0)
0x14c: GOTO 0x13f

0x14d: @ CreateIntVector(Stack[-5])
0x14e: Pop(0)
0x14f: @ CreateIntVector(Stack[-6])
0x150: Pop(0)
0x151: @ CreateObjectVector(Stack[-7])
0x152: Pop(0)
0x153: PushEmpty(int, int)
0x154: Stack[-2] = (int) 0
0x155: Stack[-1] = (int) 33
0x156: Call2 0x12d

0x157: Pop(2)
0x158: PushEmpty(int, int)
0x159: Stack[-2] = (int) 1
0x15a: Stack[-1] = (int) 34
0x15b: Call2 0x12d

0x15c: Pop(2)
0x15d: PushEmpty(int, int)
0x15e: Stack[-2] = (int) 2
0x15f: Stack[-1] = (int) 35
0x160: Call2 0x12d

0x161: Pop(2)
0x162: PushEmpty(int, int)
0x163: Stack[-2] = (int) 3
0x164: Stack[-1] = (int) 36
0x165: Call2 0x12d

0x166: Pop(2)
0x167: PushEmpty(int, int)
0x168: Stack[-2] = (int) 4
0x169: Stack[-1] = (int) 37
0x16a: Call2 0x12d

0x16b: Pop(2)
0x16c: PushEmpty(int, int)
0x16d: Stack[-2] = (int) 5
0x16e: Stack[-1] = (int) 38
0x16f: Call2 0x12d

0x170: Pop(2)
0x171: PushEmpty(int, int)
0x172: Stack[-2] = (int) 7
0x173: Stack[-1] = (int) 40
0x174: Call2 0x12d

0x175: Pop(2)
0x176: PushEmpty(int, int)
0x177: Stack[-2] = (int) 8
0x178: Stack[-1] = (int) 41
0x179: Call2 0x12d

0x17a: Pop(2)
0x17b: PushEmpty(int, int)
0x17c: Stack[-2] = (int) 9
0x17d: Stack[-1] = (int) 42
0x17e: Call2 0x12d

0x17f: Pop(2)
0x180: PushEmpty(int, int)
0x181: Stack[-2] = (int) 10
0x182: Stack[-1] = (int) 43
0x183: Call2 0x12d

0x184: Pop(2)
0x185: PushEmpty(int, int)
0x186: Stack[-2] = (int) 11
0x187: Stack[-1] = (int) 44
0x188: Call2 0x12d

0x189: Pop(2)
0x18a: PushEmpty(int, int)
0x18b: Stack[-2] = (int) 20
0x18c: Stack[-1] = (int) 54
0x18d: Call2 0x12d

0x18e: Pop(2)
0x18f: PushEmpty(int, int)
0x190: Stack[-2] = (int) 18
0x191: Stack[-1] = (int) 55
0x192: Call2 0x12d

0x193: Pop(2)
0x194: PushEmpty(int, int)
0x195: Stack[-2] = (int) 12
0x196: Stack[-1] = (int) 45
0x197: Call2 0x12d

0x198: Pop(2)
0x199: PushEmpty(int, int)
0x19a: Stack[-2] = (int) 13
0x19b: Stack[-1] = (int) 46
0x19c: Call2 0x12d

0x19d: Pop(2)
0x19e: PushEmpty(int, int)
0x19f: Stack[-2] = (int) 14
0x1a0: Stack[-1] = (int) 47
0x1a1: Call2 0x12d

0x1a2: Pop(2)
0x1a3: PushEmpty(int, int)
0x1a4: Stack[-2] = (int) 15
0x1a5: Stack[-1] = (int) 48
0x1a6: Call2 0x12d

0x1a7: Pop(2)
0x1a8: PushEmpty(int, int)
0x1a9: Stack[-2] = (int) 16
0x1aa: Stack[-1] = (int) 49
0x1ab: Call2 0x12d

0x1ac: Pop(2)
0x1ad: PushEmpty(int, int)
0x1ae: Stack[-2] = (int) 17
0x1af: Stack[-1] = (int) 50
0x1b0: Call2 0x12d

0x1b1: Pop(2)
0x1b2: PushEmpty(int, int)
0x1b3: Stack[-2] = (int) 21
0x1b4: Stack[-1] = (int) 56
0x1b5: Call2 0x12d

0x1b6: Pop(2)
0x1b7: PushEmpty(int, int)
0x1b8: Stack[-2] = (int) 100
0x1b9: Stack[-1] = (int) 52
0x1ba: Call2 0x12d

0x1bb: Pop(2)
0x1bc: PushEmpty(int, int)
0x1bd: Stack[-2] = (int) 101
0x1be: Stack[-1] = (int) 53
0x1bf: Call2 0x12d

0x1c0: Pop(2)
0x1c1: PushEmpty()
0x1c2: Call2 0x1c6

0x1c3: Pop(0)
0x1c4: Return(); Pop(8)

0x1c5: Stack[-4] = 0
0x1c6: PushEmpty(int, int, int, int, int, string, int, int, int, int, int, string)
0x1c7: PushEmpty()
0x1c8: Call2 0x1fd

0x1c9: Pop(0)
0x1ca: @@ size(Stack[-6])
0x1cb: Pop(0)
0x1cc: Stack[-5] = (int) 0
0x1cd: Pop(0); Push((bool) Stack[-5] < Stack[-6])
0x1ce: IF (Stack[-1] == 0) GOTO 0x1fc; Pop(1)

0x1cf: @@ get(Stack[-4], Stack[-5])
0x1d0: Pop(0)
0x1d1: @ GetBindType(Stack[-3], Stack[-4])
0x1d2: Pop(0)
0x1d3: Push((int) 0)
0x1d4: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1d5: IF (Stack[-1] == 0) GOTO 0x1d8; Pop(1)

0x1d6: GOTO 0x1f9

0x1d7: GOTO 0x1f9

0x1d8: Push((int) 1)
0x1d9: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1da: IF (Stack[-1] == 0) GOTO 0x1e3; Pop(1)

0x1db: @ GetBindAction(Stack[-2], Stack[-4])
0x1dc: Pop(0)
0x1dd: PushEmpty(int, int)
0x1de: Stack[-2] = Stack[-4]
0x1df: Stack[-1] = Stack[-7]
0x1e0: Call2 0x20c

0x1e1: Pop(2)
0x1e2: GOTO 0x1f9

0x1e3: Push((int) 2)
0x1e4: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1e5: IF (Stack[-1] == 0) GOTO 0x1f9; Pop(1)

0x1e6: @ GetBindCommand(Stack[-1], Stack[-4])
0x1e7: Pop(0)
0x1e8: Push("qsave")
0x1e9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1ea: IF (Stack[-1] == 0) GOTO 0x1f1; Pop(1)

0x1eb: PushEmpty(int, int)
0x1ec: Stack[-2] = (int) 100
0x1ed: Stack[-1] = Stack[-7]
0x1ee: Call2 0x20c

0x1ef: Pop(2)
0x1f0: GOTO 0x1f9

0x1f1: Push("qload")
0x1f2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1f3: IF (Stack[-1] == 0) GOTO 0x1f9; Pop(1)

0x1f4: PushEmpty(int, int)
0x1f5: Stack[-2] = (int) 101
0x1f6: Stack[-1] = Stack[-7]
0x1f7: Call2 0x20c

0x1f8: Pop(2)
0x1f9: Push((int) 1)
0x1fa: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x1fb: GOTO 0x1cd

0x1fc: Return(); Pop(12)

0x1fd: PushEmpty(int, int, object, int, int, object)
0x1fe: @@ size(Stack[-3])
0x1ff: Pop(0)
0x200: Stack[-2] = (int) 0
0x201: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0x202: IF (Stack[-1] == 0) GOTO 0x20b; Pop(1)

0x203: @@ get(Stack[-1], Stack[-2])
0x204: Pop(0)
0x205: @@ clear()
0x206: Pop(0)
0x207: Stack[-1] = 0
0x208: Push((int) 1)
0x209: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x20a: GOTO 0x201

0x20b: Return(); Pop(6)

0x20c: PushEmpty(int, int, int, object, int, int, int, object)
0x20d: @@ size(Stack[-4])
0x20e: Pop(0)
0x20f: Stack[-3] = (int) 0
0x210: Pop(0); Push((bool) Stack[-3] < Stack[-4])
0x211: IF (Stack[-1] == 0) GOTO 0x21f; Pop(1)

0x212: @@ get(Stack[-2], Stack[-3])
0x213: Pop(0)
0x214: Pop(0); Push((bool) Stack[-10] == Stack[-2])
0x215: IF (Stack[-1] == 0) GOTO 0x21c; Pop(1)

0x216: @@ get(Stack[-1], Stack[-3])
0x217: Pop(0)
0x218: @@ add(Stack[-9])
0x219: Pop(0)
0x21a: Return(); Pop(8)

0x21b: Stack[-1] = 0
0x21c: Push((int) 1)
0x21d: Stack[-4] = Stack[-4] + Stack[-1]; Pop(1);
0x21e: GOTO 0x210

0x21f: Push("AddKeyToAction fail")
0x220: @ Trace(Stack[-1])
0x221: Pop(1)
0x222: Return(); Pop(8)

0x223: @ GetWindowSize(Stack[-1], Stack[-2])
0x224: Pop(0)
0x225: Stack[3 + Tasks[-1].StackPointer] = (int)0
0x226: Stack[4 + Tasks[-1].StackPointer] = (int)0
0x227: @ ClientToScreen(Stack[-3], Stack[-4])
0x228: Pop(0)
0x229: Stack[0 + Tasks[-1].StackPointer] = (int)0
0x22a: Push((bool) 1)
0x22b: @ EnableClipping(Stack[-1])
0x22c: Pop(1)
0x22d: Push((bool) 1)
0x22e: @ SetOwnerDraw(Stack[-1])
0x22f: Pop(1)
0x230: PushEmpty()
0x231: Call2 0x2c5

0x232: Pop(0)
0x233: @ ProcessEvents()
0x234: Pop(0)
0x235: Return(); Pop(0)

0x236: PushEmpty(int, int, int, int, int, int, int, int)
0x237: PushEmpty(int)
0x238: Call2 0xd

0x239: Stack[-5] = Stack[-1]
0x23a: Pop(1)
0x23b: PushEmpty(int)
0x23c: Call2 0x12

0x23d: Stack[-4] = Stack[-1]
0x23e: Pop(1)
0x23f: Stack[-2] = (int) 0
0x240: Pop(0); Push((bool) Stack[-2] < Stack[-4])
0x241: IF (Stack[-1] == 0) GOTO 0x24d; Pop(1)

0x242: Pop(0); Push(Stack[-2] * Stack[-3]);
0x243: Stack[-2] = Stack[-1] + Stack[0 + Tasks[-1].StackPointer]; Pop(1);
0x244: PushEmpty(int, int, int)
0x245: Stack[-3] = Stack[-5]
0x246: Stack[-2] = (int) 0
0x247: Stack[-1] = Stack[-4]
0x248: Call2 0xe2

0x249: Pop(3)
0x24a: Push((int) 1)
0x24b: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x24c: GOTO 0x240

0x24d: Return(); Pop(8)

0x24e: PushEmpty()
0x24f: PushEmpty(string)
0x250: Call2 0xe0

0x251: Pop(0)
0x252: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x253: IF (Stack[-1] == 0) GOTO 0x25c; Pop(1)

0x254: Pop(0); Push(( -Stack[-3])
0x255: PushEmpty(int)
0x256: Call2 0x2bd

0x257: Pop(0)
0x258: Pop(1); Push(Stack[-1] - Stack[2 + StackPtr]);
0x259: Pop(2); Push(Stack[-2] * Stack[-1]);
0x25a: Push((int) 100)
0x25b: Stack[0 + Tasks[-1].StackPointer] = Stack[-2] / Stack[-1]; Pop(2);
0x25c: Return(); Pop(0)

0x25d: PushEmpty(int, int)
0x25e: PushEmpty(int)
0x25f: Call2 0x12

0x260: Pop(0)
0x261: Pop(1); Push(Stack[-4] * Stack[-1]);
0x262: Push((int) 2)
0x263: Stack[-3] = Stack[-2] / Stack[-1]; Pop(2);
0x264: Stack[0 + Tasks[-1].StackPointer] = Stack[0 + Tasks[-1].StackPointer] + Stack[-1]; Pop(0);
0x265: PushEmpty()
0x266: Call2 0x2c5

0x267: Pop(0)
0x268: Return(); Pop(2)

0x269: PushEmpty(int, int)
0x26a: PushEmpty(int, int, int)
0x26b: Stack[-2] = Stack[-7]
0x26c: Stack[-1] = Stack[-6]
0x26d: Call2 0x2ad

0x26e: Stack[-4] = Stack[-3]
0x26f: Pop(3)
0x270: Push((int) -1)
0x271: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x272: IF (Stack[-1] == 0) GOTO 0x279; Pop(1)

0x273: PushEmpty(int, int, int)
0x274: Stack[-3] = Stack[-4]
0x275: Stack[-2] = Stack[-7]
0x276: Stack[-1] = Stack[-6]
0x277: Call2 0x93

0x278: Pop(3)
0x279: Return(); Pop(2)

0x27a: PushEmpty(int, int)
0x27b: PushEmpty(int, int, int)
0x27c: Stack[-2] = Stack[-7]
0x27d: Stack[-1] = Stack[-6]
0x27e: Call2 0x2ad

0x27f: Stack[-4] = Stack[-3]
0x280: Pop(3)
0x281: Push((int) -1)
0x282: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x283: IF (Stack[-1] == 0) GOTO 0x28a; Pop(1)

0x284: PushEmpty(int, int, int)
0x285: Stack[-3] = Stack[-4]
0x286: Stack[-2] = Stack[-7]
0x287: Stack[-1] = Stack[-6]
0x288: Call2 0xda

0x289: Pop(3)
0x28a: Return(); Pop(2)

0x28b: PushEmpty(int, int)
0x28c: PushEmpty(int, int, int)
0x28d: Stack[-2] = Stack[-7]
0x28e: Stack[-1] = Stack[-6]
0x28f: Call2 0x2ad

0x290: Stack[-4] = Stack[-3]
0x291: Pop(3)
0x292: Push((int) -1)
0x293: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x294: IF (Stack[-1] == 0) GOTO 0x29b; Pop(1)

0x295: PushEmpty(int, int, int)
0x296: Stack[-3] = Stack[-4]
0x297: Stack[-2] = Stack[-7]
0x298: Stack[-1] = Stack[-6]
0x299: Call2 0xdc

0x29a: Pop(3)
0x29b: Return(); Pop(2)

0x29c: PushEmpty(int, int)
0x29d: PushEmpty(int, int, int)
0x29e: Stack[-2] = Stack[-7]
0x29f: Stack[-1] = Stack[-6]
0x2a0: Call2 0x2ad

0x2a1: Stack[-4] = Stack[-3]
0x2a2: Pop(3)
0x2a3: Push((int) -1)
0x2a4: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x2a5: IF (Stack[-1] == 0) GOTO 0x2ac; Pop(1)

0x2a6: PushEmpty(int, int, int)
0x2a7: Stack[-3] = Stack[-4]
0x2a8: Stack[-2] = Stack[-7]
0x2a9: Stack[-1] = Stack[-6]
0x2aa: Call2 0xde

0x2ab: Pop(3)
0x2ac: Return(); Pop(2)

0x2ad: PushEmpty(int, int, int, int, int, int)
0x2ae: Stack[-3] = Stack[-7] - Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x2af: PushEmpty(int)
0x2b0: Call2 0x12

0x2b1: Stack[-3] = Stack[-1]
0x2b2: Pop(1)
0x2b3: Stack[-1] = Stack[-3] / Stack[-2]; Pop(0);
0x2b4: PushEmpty(int)
0x2b5: Call2 0xd

0x2b6: Pop(0)
0x2b7: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x2b8: IF (Stack[-1] == 0) GOTO 0x2bb; Pop(1)

0x2b9: Stack[-9] = (int) -1
0x2ba: Return(); Pop(6)

0x2bb: Stack[-9] = Stack[-1]
0x2bc: Return(); Pop(6)

0x2bd: PushEmpty(int)
0x2be: Call2 0xd

0x2bf: Pop(0)
0x2c0: PushEmpty(int)
0x2c1: Call2 0x12

0x2c2: Pop(0)
0x2c3: Stack[-3] = Stack[-2] * Stack[-1]; Pop(2);
0x2c4: Return(); Pop(0)

0x2c5: PushEmpty(int, int)
0x2c6: PushEmpty(int)
0x2c7: Call2 0x2bd

0x2c8: Pop(0)
0x2c9: Stack[-2] = Stack[-1] - Stack[2 + Tasks[-1].StackPointer]; Pop(1);
0x2ca: Push((int) 0)
0x2cb: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x2cc: IF (Stack[-1] == 0) GOTO 0x2ce; Pop(1)

0x2cd: Stack[-1] = (int) 0
0x2ce: Pop(0); Push(( -Stack[0 + Tasks[-1].StackPointer])
0x2cf: Pop(1); Push((bool) Stack[-1] > Stack[-2])
0x2d0: IF (Stack[-1] == 0) GOTO 0x2d3; Pop(1)

0x2d1: Stack[0 + Tasks[-1].StackPointer] = -Stack[-1]; Pop(0);
0x2d2: GOTO 0x2d7

0x2d3: Push((int) 0)
0x2d4: Pop(1); Push((bool) Stack[0 + Tasks[-1].StackPointer] > Stack[-1])
0x2d5: IF (Stack[-1] == 0) GOTO 0x2d7; Pop(1)

0x2d6: Stack[0 + Tasks[-1].StackPointer] = (int)0
0x2d7: Push((int) 0)
0x2d8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2d9: IF (Stack[-1] == 0) GOTO 0x2e1; Pop(1)

0x2da: Push((int) 16384)
0x2db: PushEmpty(string)
0x2dc: Call2 0xe0

0x2dd: Pop(0)
0x2de: @ SendMessage(Stack[-2], Stack[-1])
0x2df: Pop(2)
0x2e0: GOTO 0x2ea

0x2e1: Pop(0); Push(( -Stack[0 + Tasks[-1].StackPointer])
0x2e2: Push((int) 100)
0x2e3: Pop(2); Push(Stack[-2] * Stack[-1]);
0x2e4: Pop(1); Push(Stack[-1] / Stack[-2]);
0x2e5: PushEmpty(string)
0x2e6: Call2 0xe0

0x2e7: Pop(0)
0x2e8: @ SendMessage(Stack[-2], Stack[-1])
0x2e9: Pop(2)
0x2ea: Return(); Pop(2)

0x2eb: PushEmpty(string, string)
0x2ec: @ GetStringByID(Stack[-1], Stack[-3])
0x2ed: Pop(0)
0x2ee: Stack[-4] = Stack[-1]
0x2ef: Return(); Pop(2)

