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
		EVENT_2 Op = 0x8a Vars = (int, int)
		EVENT_6 Op = 0x96 Vars = (int, int)
		EVENT_3 Op = 0xa2 Vars = (int, int)
		EVENT_7 Op = 0xae Vars = (int, int)
		EVENT_15 Op = 0xba Vars = (int, int, float)
		EVENT_0 Op = 0x223 Vars = ()
		EVENT_200 Op = 0x23b Vars = (int, string, object)


0x0: Push((bool) 1)
0x1: @ SetNeedUpdate(Stack[-1])
0x2: Pop(1)
0x3: Stack[11 + Tasks[-1].StackPointer] = (bool)0
0x4: Stack[12 + Tasks[-1].StackPointer] = (bool)0
0x5: Stack[10 + Tasks[-1].StackPointer] = (int)-1
0x6: PushEmpty()
0x7: Call2 0x125

0x8: Pop(0)
0x9: PushEmpty()
0xa: Call2 0x210

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
0x2f: Push((int) 256)
0x30: Pop(1); Push((bool) Stack[-4] < Stack[-1])
0x31: IF (Stack[-1] == 0) GOTO 0x45; Pop(1)

0x32: @ IsValidVirtualKey(Stack[-2], Stack[-3])
0x33: Pop(0)
0x34: Push(Stack[-2])
0x35: IF (Stack[-1] == 0) GOTO 0x42; Pop(1)

0x36: @@ GetKeyState(Stack[-1], Stack[-3])
0x37: Pop(0)
0x38: Push((int) 128)
0x39: Pop(1); Push(Stack[-2] & Stack[-1]);
0x3a: IF (Stack[-1] == 0) GOTO 0x42; Pop(1)

0x3b: Push( Stack[12 + Tasks[-1].StackPointer] )
0x3c: IF (Stack[-1] == 0) GOTO 0x41; Pop(1)

0x3d: PushEmpty(int)
0x3e: Stack[-1] = Stack[-4]
0x3f: Call2 0x48

0x40: Pop(1)
0x41: Return(); Pop(8)

0x42: Push((int) 1)
0x43: Stack[-4] = Stack[-4] + Stack[-1]; Pop(1);
0x44: GOTO 0x2f

0x45: Stack[12 + Tasks[-1].StackPointer] = (bool)1
0x46: Return(); Pop(8)

0x47: Stack[-4] = 0
0x48: PushEmpty(bool, int, object, int, int, int, int, bool, int, object, int, int, int, int)
0x49: PushEmpty(bool)
0x4a: Stack[-1] = (bool) 0
0x4b: Push((int) -1)
0x4c: Pop(1); Push((bool) Stack[-17] != Stack[-1])
0x4d: IF (Stack[-1] == 0) GOTO 0x52; Pop(1)

0x4e: Push((int) 27)
0x4f: Pop(1); Push((bool) Stack[-17] != Stack[-1])
0x50: IF (Stack[-1] == 0) GOTO 0x52; Pop(1)

0x51: Stack[-1] = (bool) 1
0x52: IF (Stack[-1] == 0) GOTO 0x75; Pop(1)

0x53: @ IsValidVirtualKey(Stack[-7], Stack[-15])
0x54: Pop(0)
0x55: Push(Stack[-7])
0x56: IF (Stack[-1] == 0) GOTO 0x72; Pop(1)

0x57: @@ get(Stack[-6], Stack[-10])
0x58: Pop(0)
0x59: @ Unbind(Stack[-15])
0x5a: Pop(0)
0x5b: @@ get(Stack[-5], Stack[-10])
0x5c: Pop(0)
0x5d: @@ size(Stack[-4])
0x5e: Pop(0)
0x5f: Stack[-3] = (int) 0
0x60: Pop(0); Push((bool) Stack[-3] < Stack[-4])
0x61: IF (Stack[-1] == 0) GOTO 0x6b; Pop(1)

0x62: @@ get(Stack[-2], Stack[-3])
0x63: Pop(0)
0x64: @@ get(Stack[-1], Stack[-2])
0x65: Pop(0)
0x66: @ Unbind(Stack[-1])
0x67: Pop(0)
0x68: Push((int) 1)
0x69: Stack[-4] = Stack[-4] + Stack[-1]; Pop(1);
0x6a: GOTO 0x60

0x6b: @ Bind(Stack[-15], Stack[-6])
0x6c: Pop(0)
0x6d: PushEmpty()
0x6e: Call2 0x125

0x6f: Pop(0)
0x70: Stack[-5] = 0
0x71: GOTO 0x75

0x72: Push("wrong key code")
0x73: @ Trace(Stack[-1])
0x74: Pop(1)
0x75: Stack[10 + Tasks[-1].StackPointer] = (int)-1
0x76: Stack[11 + Tasks[-1].StackPointer] = (bool)0
0x77: Stack[12 + Tasks[-1].StackPointer] = (bool)0
0x78: @ ReleaseKeyboard()
0x79: Pop(0)
0x7a: @ ReleaseMouse()
0x7b: Pop(0)
0x7c: Push((int) 1)
0x7d: @ SendMessageToParent(Stack[-1])
0x7e: Pop(1)
0x7f: Return(); Pop(14)

0x80: PushEmpty()
0x81: Push((int) -1)
0x82: Pop(1); Push((bool) Stack[10 + Tasks[-1].StackPointer] == Stack[-1])
0x83: IF (Stack[-1] == 0) GOTO 0x89; Pop(1)

0x84: PushEmpty(int)
0x85: Stack[-1] = Stack[-4]
0x86: Call2 0x16

0x87: Pop(1)
0x88: GOTO 0x89

0x89: Return(); Pop(0)

0x8a: PushEmpty()
0x8b: PushEmpty(bool)
0x8c: Call2 0x14

0x8d: Pop(0)
0x8e: Pop(1); Push((bool) Stack[-1] == 0)
0x8f: IF (Stack[-1] == 0) GOTO 0x95; Pop(1)

0x90: PushEmpty(int, int)
0x91: Stack[-2] = Stack[-4]
0x92: Stack[-1] = Stack[-3]
0x93: Call2 0x256

0x94: Pop(2)
0x95: Return(); Pop(0)

0x96: PushEmpty()
0x97: PushEmpty(bool)
0x98: Call2 0x14

0x99: Pop(0)
0x9a: Pop(1); Push((bool) Stack[-1] == 0)
0x9b: IF (Stack[-1] == 0) GOTO 0xa1; Pop(1)

0x9c: PushEmpty(int, int)
0x9d: Stack[-2] = Stack[-4]
0x9e: Stack[-1] = Stack[-3]
0x9f: Call2 0x278

0xa0: Pop(2)
0xa1: Return(); Pop(0)

0xa2: PushEmpty()
0xa3: PushEmpty(bool)
0xa4: Call2 0x14

0xa5: Pop(0)
0xa6: Pop(1); Push((bool) Stack[-1] == 0)
0xa7: IF (Stack[-1] == 0) GOTO 0xad; Pop(1)

0xa8: PushEmpty(int, int)
0xa9: Stack[-2] = Stack[-4]
0xaa: Stack[-1] = Stack[-3]
0xab: Call2 0x267

0xac: Pop(2)
0xad: Return(); Pop(0)

0xae: PushEmpty()
0xaf: PushEmpty(bool)
0xb0: Call2 0x14

0xb1: Pop(0)
0xb2: Pop(1); Push((bool) Stack[-1] == 0)
0xb3: IF (Stack[-1] == 0) GOTO 0xb9; Pop(1)

0xb4: PushEmpty(int, int)
0xb5: Stack[-2] = Stack[-4]
0xb6: Stack[-1] = Stack[-3]
0xb7: Call2 0x289

0xb8: Pop(2)
0xb9: Return(); Pop(0)

0xba: PushEmpty()
0xbb: PushEmpty(bool)
0xbc: Call2 0x14

0xbd: Pop(0)
0xbe: Pop(1); Push((bool) Stack[-1] == 0)
0xbf: IF (Stack[-1] == 0) GOTO 0xc6; Pop(1)

0xc0: PushEmpty(int, int, float)
0xc1: Stack[-3] = Stack[-6]
0xc2: Stack[-2] = Stack[-5]
0xc3: Stack[-1] = Stack[-4]
0xc4: Call2 0x24a

0xc5: Pop(3)
0xc6: Return(); Pop(0)

0xc7: PushEmpty()
0xc8: Return(); Pop(0)

0xc9: PushEmpty()
0xca: Return(); Pop(0)

0xcb: PushEmpty()
0xcc: Return(); Pop(0)

0xcd: Stack[-1] = "scrollbar"
0xce: Return(); Pop(0)

0xcf: PushEmpty(string, int, int, string, string, object, int, int, int, string, int, string, int, int, string, string, object, int, int, int, string, int)
0xd0: Pop(0); Push((bool) Stack[-25] == Stack[10 + Tasks[-1].StackPointer])
0xd1: IF (Stack[-1] == 0) GOTO 0xeb; Pop(1)

0xd2: Push("whitepixel")
0xd3: PushEmpty(int)
0xd4: Call2 0x12

0xd5: Pop(0)
0xd6: @ StretchBlit(Stack[-2], Stack[-26], Stack[-25], Stack[-1], Stack[-1])
0xd7: Pop(2)
0xd8: PushEmpty(string, int)
0xd9: Stack[-1] = (int) 108
0xda: Call2 0x2d8

0xdb: Stack[-13] = Stack[-2]
0xdc: Pop(2)
0xdd: Push("default")
0xde: @ GetTextWidth(Stack[-11], Stack[-1], Stack[-12])
0xdf: Pop(1)
0xe0: Push("default")
0xe1: Pop(0); Push(Stack[1 + StackPtr] - Stack[-11]);
0xe2: Push((int) 2)
0xe3: Pop(2); Push(Stack[-2] / Stack[-1]);
0xe4: Pop(1); Push(Stack[-26] + Stack[-1]);
0xe5: Push((float)0.25098)
0xe6: Push((float)0.25098)
0xe7: Push((float)0.25098)
0xe8: @ Print(Stack[-5], Stack[-4], Stack[-28], Stack[-16], Stack[-3], Stack[-2], Stack[-1])
0xe9: Pop(5)
0xea: Return(); Pop(22)

0xeb: @@ get(Stack[-9], Stack[-25])
0xec: Pop(0)
0xed: PushEmpty(string, int)
0xee: Stack[-1] = Stack[-11]
0xef: Call2 0x2d8

0xf0: Stack[-10] = Stack[-2]
0xf1: Pop(2)
0xf2: @@ get(Stack[-6], Stack[-25])
0xf3: Pop(0)
0xf4: @@ size(Stack[-5])
0xf5: Pop(0)
0xf6: Stack[-4] = (int) 0
0xf7: Pop(0); Push((bool) Stack[-4] < Stack[-5])
0xf8: IF (Stack[-1] == 0) GOTO 0x105; Pop(1)

0xf9: Push(Stack[-4])
0xfa: IF (Stack[-1] == 0) GOTO 0xfd; Pop(1)

0xfb: Push(" , ")
0xfc: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0xfd: @@ get(Stack[-3], Stack[-4])
0xfe: Pop(0)
0xff: @@ get(Stack[-2], Stack[-3])
0x100: Pop(0)
0x101: Stack[-7] = Stack[-7] + Stack[-2]; Pop(0);
0x102: Push((int) 1)
0x103: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x104: GOTO 0xf7

0x105: Push("default")
0x106: Push((float)0.55686)
0x107: Push((float)0.55686)
0x108: Push((float)0.55686)
0x109: @ Print(Stack[-4], Stack[-28], Stack[-27], Stack[-12], Stack[-3], Stack[-2], Stack[-1])
0x10a: Pop(4)
0x10b: Push(Stack[-5])
0x10c: IF (Stack[-1] == 0) GOTO 0x118; Pop(1)

0x10d: Push("default")
0x10e: @ GetTextWidth(Stack[-2], Stack[-1], Stack[-8])
0x10f: Pop(1)
0x110: Push("default")
0x111: Pop(0); Push(Stack[-25] + Stack[1 + StackPtr]);
0x112: Pop(1); Push(Stack[-1] - Stack[-3]);
0x113: Push((float)0.55686)
0x114: Push((float)0.55686)
0x115: Push((float)0.55686)
0x116: @ Print(Stack[-5], Stack[-4], Stack[-28], Stack[-12], Stack[-3], Stack[-2], Stack[-1])
0x117: Pop(5)
0x118: Return(); Pop(22)

0x119: Stack[-6] = 0
0x11a: PushEmpty(object, object)
0x11b: @@ add(Stack[-4])
0x11c: Pop(0)
0x11d: @@ add(Stack[-3])
0x11e: Pop(0)
0x11f: @ CreateIntVector(Stack[-1])
0x120: Pop(0)
0x121: @@ add(Stack[-1])
0x122: Pop(0)
0x123: Return(); Pop(2)

0x124: Stack[-1] = 0
0x125: PushEmpty(object, bool, int, string, object, bool, int, string)
0x126: @ CreateIntVector(Stack[-8])
0x127: Pop(0)
0x128: @ CreateStringVector(Stack[-9])
0x129: Pop(0)
0x12a: @ CreateKeyEnumerator(Stack[-4])
0x12b: Pop(0)
0x12c: Push((bool) 1)
0x12d: IF (Stack[-1] == 0) GOTO 0x13a; Pop(1)

0x12e: @@ Next(Stack[-3], Stack[-2])
0x12f: Pop(0)
0x130: Pop(0); Push((bool) Stack[-3] == 0)
0x131: IF (Stack[-1] == 0) GOTO 0x133; Pop(1)

0x132: GOTO 0x13a

0x133: @@ add(Stack[-2])
0x134: Pop(0)
0x135: @ GetKeyName(Stack[-1], Stack[-2])
0x136: Pop(0)
0x137: @@ add(Stack[-1])
0x138: Pop(0)
0x139: GOTO 0x12c

0x13a: @ CreateIntVector(Stack[-5])
0x13b: Pop(0)
0x13c: @ CreateIntVector(Stack[-6])
0x13d: Pop(0)
0x13e: @ CreateObjectVector(Stack[-7])
0x13f: Pop(0)
0x140: PushEmpty(int, int)
0x141: Stack[-2] = (int) 0
0x142: Stack[-1] = (int) 33
0x143: Call2 0x11a

0x144: Pop(2)
0x145: PushEmpty(int, int)
0x146: Stack[-2] = (int) 1
0x147: Stack[-1] = (int) 34
0x148: Call2 0x11a

0x149: Pop(2)
0x14a: PushEmpty(int, int)
0x14b: Stack[-2] = (int) 2
0x14c: Stack[-1] = (int) 35
0x14d: Call2 0x11a

0x14e: Pop(2)
0x14f: PushEmpty(int, int)
0x150: Stack[-2] = (int) 3
0x151: Stack[-1] = (int) 36
0x152: Call2 0x11a

0x153: Pop(2)
0x154: PushEmpty(int, int)
0x155: Stack[-2] = (int) 4
0x156: Stack[-1] = (int) 37
0x157: Call2 0x11a

0x158: Pop(2)
0x159: PushEmpty(int, int)
0x15a: Stack[-2] = (int) 5
0x15b: Stack[-1] = (int) 38
0x15c: Call2 0x11a

0x15d: Pop(2)
0x15e: PushEmpty(int, int)
0x15f: Stack[-2] = (int) 7
0x160: Stack[-1] = (int) 40
0x161: Call2 0x11a

0x162: Pop(2)
0x163: PushEmpty(int, int)
0x164: Stack[-2] = (int) 8
0x165: Stack[-1] = (int) 41
0x166: Call2 0x11a

0x167: Pop(2)
0x168: PushEmpty(int, int)
0x169: Stack[-2] = (int) 9
0x16a: Stack[-1] = (int) 42
0x16b: Call2 0x11a

0x16c: Pop(2)
0x16d: PushEmpty(int, int)
0x16e: Stack[-2] = (int) 10
0x16f: Stack[-1] = (int) 43
0x170: Call2 0x11a

0x171: Pop(2)
0x172: PushEmpty(int, int)
0x173: Stack[-2] = (int) 11
0x174: Stack[-1] = (int) 44
0x175: Call2 0x11a

0x176: Pop(2)
0x177: PushEmpty(int, int)
0x178: Stack[-2] = (int) 20
0x179: Stack[-1] = (int) 54
0x17a: Call2 0x11a

0x17b: Pop(2)
0x17c: PushEmpty(int, int)
0x17d: Stack[-2] = (int) 18
0x17e: Stack[-1] = (int) 55
0x17f: Call2 0x11a

0x180: Pop(2)
0x181: PushEmpty(int, int)
0x182: Stack[-2] = (int) 12
0x183: Stack[-1] = (int) 45
0x184: Call2 0x11a

0x185: Pop(2)
0x186: PushEmpty(int, int)
0x187: Stack[-2] = (int) 13
0x188: Stack[-1] = (int) 46
0x189: Call2 0x11a

0x18a: Pop(2)
0x18b: PushEmpty(int, int)
0x18c: Stack[-2] = (int) 14
0x18d: Stack[-1] = (int) 47
0x18e: Call2 0x11a

0x18f: Pop(2)
0x190: PushEmpty(int, int)
0x191: Stack[-2] = (int) 15
0x192: Stack[-1] = (int) 48
0x193: Call2 0x11a

0x194: Pop(2)
0x195: PushEmpty(int, int)
0x196: Stack[-2] = (int) 16
0x197: Stack[-1] = (int) 49
0x198: Call2 0x11a

0x199: Pop(2)
0x19a: PushEmpty(int, int)
0x19b: Stack[-2] = (int) 17
0x19c: Stack[-1] = (int) 50
0x19d: Call2 0x11a

0x19e: Pop(2)
0x19f: PushEmpty(int, int)
0x1a0: Stack[-2] = (int) 21
0x1a1: Stack[-1] = (int) 56
0x1a2: Call2 0x11a

0x1a3: Pop(2)
0x1a4: PushEmpty(int, int)
0x1a5: Stack[-2] = (int) 100
0x1a6: Stack[-1] = (int) 52
0x1a7: Call2 0x11a

0x1a8: Pop(2)
0x1a9: PushEmpty(int, int)
0x1aa: Stack[-2] = (int) 101
0x1ab: Stack[-1] = (int) 53
0x1ac: Call2 0x11a

0x1ad: Pop(2)
0x1ae: PushEmpty()
0x1af: Call2 0x1b3

0x1b0: Pop(0)
0x1b1: Return(); Pop(8)

0x1b2: Stack[-4] = 0
0x1b3: PushEmpty(int, int, int, int, int, string, int, int, int, int, int, string)
0x1b4: PushEmpty()
0x1b5: Call2 0x1ea

0x1b6: Pop(0)
0x1b7: @@ size(Stack[-6])
0x1b8: Pop(0)
0x1b9: Stack[-5] = (int) 0
0x1ba: Pop(0); Push((bool) Stack[-5] < Stack[-6])
0x1bb: IF (Stack[-1] == 0) GOTO 0x1e9; Pop(1)

0x1bc: @@ get(Stack[-4], Stack[-5])
0x1bd: Pop(0)
0x1be: @ GetBindType(Stack[-3], Stack[-4])
0x1bf: Pop(0)
0x1c0: Push((int) 0)
0x1c1: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1c2: IF (Stack[-1] == 0) GOTO 0x1c5; Pop(1)

0x1c3: GOTO 0x1e6

0x1c4: GOTO 0x1e6

0x1c5: Push((int) 1)
0x1c6: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1c7: IF (Stack[-1] == 0) GOTO 0x1d0; Pop(1)

0x1c8: @ GetBindAction(Stack[-2], Stack[-4])
0x1c9: Pop(0)
0x1ca: PushEmpty(int, int)
0x1cb: Stack[-2] = Stack[-4]
0x1cc: Stack[-1] = Stack[-7]
0x1cd: Call2 0x1f9

0x1ce: Pop(2)
0x1cf: GOTO 0x1e6

0x1d0: Push((int) 2)
0x1d1: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1d2: IF (Stack[-1] == 0) GOTO 0x1e6; Pop(1)

0x1d3: @ GetBindCommand(Stack[-1], Stack[-4])
0x1d4: Pop(0)
0x1d5: Push("qsave")
0x1d6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1d7: IF (Stack[-1] == 0) GOTO 0x1de; Pop(1)

0x1d8: PushEmpty(int, int)
0x1d9: Stack[-2] = (int) 100
0x1da: Stack[-1] = Stack[-7]
0x1db: Call2 0x1f9

0x1dc: Pop(2)
0x1dd: GOTO 0x1e6

0x1de: Push("qload")
0x1df: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1e0: IF (Stack[-1] == 0) GOTO 0x1e6; Pop(1)

0x1e1: PushEmpty(int, int)
0x1e2: Stack[-2] = (int) 101
0x1e3: Stack[-1] = Stack[-7]
0x1e4: Call2 0x1f9

0x1e5: Pop(2)
0x1e6: Push((int) 1)
0x1e7: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x1e8: GOTO 0x1ba

0x1e9: Return(); Pop(12)

0x1ea: PushEmpty(int, int, object, int, int, object)
0x1eb: @@ size(Stack[-3])
0x1ec: Pop(0)
0x1ed: Stack[-2] = (int) 0
0x1ee: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0x1ef: IF (Stack[-1] == 0) GOTO 0x1f8; Pop(1)

0x1f0: @@ get(Stack[-1], Stack[-2])
0x1f1: Pop(0)
0x1f2: @@ clear()
0x1f3: Pop(0)
0x1f4: Stack[-1] = 0
0x1f5: Push((int) 1)
0x1f6: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x1f7: GOTO 0x1ee

0x1f8: Return(); Pop(6)

0x1f9: PushEmpty(int, int, int, object, int, int, int, object)
0x1fa: @@ size(Stack[-4])
0x1fb: Pop(0)
0x1fc: Stack[-3] = (int) 0
0x1fd: Pop(0); Push((bool) Stack[-3] < Stack[-4])
0x1fe: IF (Stack[-1] == 0) GOTO 0x20c; Pop(1)

0x1ff: @@ get(Stack[-2], Stack[-3])
0x200: Pop(0)
0x201: Pop(0); Push((bool) Stack[-10] == Stack[-2])
0x202: IF (Stack[-1] == 0) GOTO 0x209; Pop(1)

0x203: @@ get(Stack[-1], Stack[-3])
0x204: Pop(0)
0x205: @@ add(Stack[-9])
0x206: Pop(0)
0x207: Return(); Pop(8)

0x208: Stack[-1] = 0
0x209: Push((int) 1)
0x20a: Stack[-4] = Stack[-4] + Stack[-1]; Pop(1);
0x20b: GOTO 0x1fd

0x20c: Push("AddKeyToAction fail")
0x20d: @ Trace(Stack[-1])
0x20e: Pop(1)
0x20f: Return(); Pop(8)

0x210: @ GetWindowSize(Stack[-1], Stack[-2])
0x211: Pop(0)
0x212: Stack[3 + Tasks[-1].StackPointer] = (int)0
0x213: Stack[4 + Tasks[-1].StackPointer] = (int)0
0x214: @ ClientToScreen(Stack[-3], Stack[-4])
0x215: Pop(0)
0x216: Stack[0 + Tasks[-1].StackPointer] = (int)0
0x217: Push((bool) 1)
0x218: @ EnableClipping(Stack[-1])
0x219: Pop(1)
0x21a: Push((bool) 1)
0x21b: @ SetOwnerDraw(Stack[-1])
0x21c: Pop(1)
0x21d: PushEmpty()
0x21e: Call2 0x2b2

0x21f: Pop(0)
0x220: @ ProcessEvents()
0x221: Pop(0)
0x222: Return(); Pop(0)

0x223: PushEmpty(int, int, int, int, int, int, int, int)
0x224: PushEmpty(int)
0x225: Call2 0xd

0x226: Stack[-5] = Stack[-1]
0x227: Pop(1)
0x228: PushEmpty(int)
0x229: Call2 0x12

0x22a: Stack[-4] = Stack[-1]
0x22b: Pop(1)
0x22c: Stack[-2] = (int) 0
0x22d: Pop(0); Push((bool) Stack[-2] < Stack[-4])
0x22e: IF (Stack[-1] == 0) GOTO 0x23a; Pop(1)

0x22f: Pop(0); Push(Stack[-2] * Stack[-3]);
0x230: Stack[-2] = Stack[-1] + Stack[0 + Tasks[-1].StackPointer]; Pop(1);
0x231: PushEmpty(int, int, int)
0x232: Stack[-3] = Stack[-5]
0x233: Stack[-2] = (int) 0
0x234: Stack[-1] = Stack[-4]
0x235: Call2 0xcf

0x236: Pop(3)
0x237: Push((int) 1)
0x238: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x239: GOTO 0x22d

0x23a: Return(); Pop(8)

0x23b: PushEmpty()
0x23c: PushEmpty(string)
0x23d: Call2 0xcd

0x23e: Pop(0)
0x23f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x240: IF (Stack[-1] == 0) GOTO 0x249; Pop(1)

0x241: Pop(0); Push(( -Stack[-3])
0x242: PushEmpty(int)
0x243: Call2 0x2aa

0x244: Pop(0)
0x245: Pop(1); Push(Stack[-1] - Stack[2 + StackPtr]);
0x246: Pop(2); Push(Stack[-2] * Stack[-1]);
0x247: Push((int) 100)
0x248: Stack[0 + Tasks[-1].StackPointer] = Stack[-2] / Stack[-1]; Pop(2);
0x249: Return(); Pop(0)

0x24a: PushEmpty(int, int)
0x24b: PushEmpty(int)
0x24c: Call2 0x12

0x24d: Pop(0)
0x24e: Pop(1); Push(Stack[-4] * Stack[-1]);
0x24f: Push((int) 2)
0x250: Stack[-3] = Stack[-2] / Stack[-1]; Pop(2);
0x251: Stack[0 + Tasks[-1].StackPointer] = Stack[0 + Tasks[-1].StackPointer] + Stack[-1]; Pop(0);
0x252: PushEmpty()
0x253: Call2 0x2b2

0x254: Pop(0)
0x255: Return(); Pop(2)

0x256: PushEmpty(int, int)
0x257: PushEmpty(int, int, int)
0x258: Stack[-2] = Stack[-7]
0x259: Stack[-1] = Stack[-6]
0x25a: Call2 0x29a

0x25b: Stack[-4] = Stack[-3]
0x25c: Pop(3)
0x25d: Push((int) -1)
0x25e: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x25f: IF (Stack[-1] == 0) GOTO 0x266; Pop(1)

0x260: PushEmpty(int, int, int)
0x261: Stack[-3] = Stack[-4]
0x262: Stack[-2] = Stack[-7]
0x263: Stack[-1] = Stack[-6]
0x264: Call2 0x80

0x265: Pop(3)
0x266: Return(); Pop(2)

0x267: PushEmpty(int, int)
0x268: PushEmpty(int, int, int)
0x269: Stack[-2] = Stack[-7]
0x26a: Stack[-1] = Stack[-6]
0x26b: Call2 0x29a

0x26c: Stack[-4] = Stack[-3]
0x26d: Pop(3)
0x26e: Push((int) -1)
0x26f: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x270: IF (Stack[-1] == 0) GOTO 0x277; Pop(1)

0x271: PushEmpty(int, int, int)
0x272: Stack[-3] = Stack[-4]
0x273: Stack[-2] = Stack[-7]
0x274: Stack[-1] = Stack[-6]
0x275: Call2 0xc7

0x276: Pop(3)
0x277: Return(); Pop(2)

0x278: PushEmpty(int, int)
0x279: PushEmpty(int, int, int)
0x27a: Stack[-2] = Stack[-7]
0x27b: Stack[-1] = Stack[-6]
0x27c: Call2 0x29a

0x27d: Stack[-4] = Stack[-3]
0x27e: Pop(3)
0x27f: Push((int) -1)
0x280: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x281: IF (Stack[-1] == 0) GOTO 0x288; Pop(1)

0x282: PushEmpty(int, int, int)
0x283: Stack[-3] = Stack[-4]
0x284: Stack[-2] = Stack[-7]
0x285: Stack[-1] = Stack[-6]
0x286: Call2 0xc9

0x287: Pop(3)
0x288: Return(); Pop(2)

0x289: PushEmpty(int, int)
0x28a: PushEmpty(int, int, int)
0x28b: Stack[-2] = Stack[-7]
0x28c: Stack[-1] = Stack[-6]
0x28d: Call2 0x29a

0x28e: Stack[-4] = Stack[-3]
0x28f: Pop(3)
0x290: Push((int) -1)
0x291: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x292: IF (Stack[-1] == 0) GOTO 0x299; Pop(1)

0x293: PushEmpty(int, int, int)
0x294: Stack[-3] = Stack[-4]
0x295: Stack[-2] = Stack[-7]
0x296: Stack[-1] = Stack[-6]
0x297: Call2 0xcb

0x298: Pop(3)
0x299: Return(); Pop(2)

0x29a: PushEmpty(int, int, int, int, int, int)
0x29b: Stack[-3] = Stack[-7] - Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x29c: PushEmpty(int)
0x29d: Call2 0x12

0x29e: Stack[-3] = Stack[-1]
0x29f: Pop(1)
0x2a0: Stack[-1] = Stack[-3] / Stack[-2]; Pop(0);
0x2a1: PushEmpty(int)
0x2a2: Call2 0xd

0x2a3: Pop(0)
0x2a4: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x2a5: IF (Stack[-1] == 0) GOTO 0x2a8; Pop(1)

0x2a6: Stack[-9] = (int) -1
0x2a7: Return(); Pop(6)

0x2a8: Stack[-9] = Stack[-1]
0x2a9: Return(); Pop(6)

0x2aa: PushEmpty(int)
0x2ab: Call2 0xd

0x2ac: Pop(0)
0x2ad: PushEmpty(int)
0x2ae: Call2 0x12

0x2af: Pop(0)
0x2b0: Stack[-3] = Stack[-2] * Stack[-1]; Pop(2);
0x2b1: Return(); Pop(0)

0x2b2: PushEmpty(int, int)
0x2b3: PushEmpty(int)
0x2b4: Call2 0x2aa

0x2b5: Pop(0)
0x2b6: Stack[-2] = Stack[-1] - Stack[2 + Tasks[-1].StackPointer]; Pop(1);
0x2b7: Push((int) 0)
0x2b8: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x2b9: IF (Stack[-1] == 0) GOTO 0x2bb; Pop(1)

0x2ba: Stack[-1] = (int) 0
0x2bb: Pop(0); Push(( -Stack[0 + Tasks[-1].StackPointer])
0x2bc: Pop(1); Push((bool) Stack[-1] > Stack[-2])
0x2bd: IF (Stack[-1] == 0) GOTO 0x2c0; Pop(1)

0x2be: Stack[0 + Tasks[-1].StackPointer] = -Stack[-1]; Pop(0);
0x2bf: GOTO 0x2c4

0x2c0: Push((int) 0)
0x2c1: Pop(1); Push((bool) Stack[0 + Tasks[-1].StackPointer] > Stack[-1])
0x2c2: IF (Stack[-1] == 0) GOTO 0x2c4; Pop(1)

0x2c3: Stack[0 + Tasks[-1].StackPointer] = (int)0
0x2c4: Push((int) 0)
0x2c5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2c6: IF (Stack[-1] == 0) GOTO 0x2ce; Pop(1)

0x2c7: Push((int) 16384)
0x2c8: PushEmpty(string)
0x2c9: Call2 0xcd

0x2ca: Pop(0)
0x2cb: @ SendMessage(Stack[-2], Stack[-1])
0x2cc: Pop(2)
0x2cd: GOTO 0x2d7

0x2ce: Pop(0); Push(( -Stack[0 + Tasks[-1].StackPointer])
0x2cf: Push((int) 100)
0x2d0: Pop(2); Push(Stack[-2] * Stack[-1]);
0x2d1: Pop(1); Push(Stack[-1] / Stack[-2]);
0x2d2: PushEmpty(string)
0x2d3: Call2 0xcd

0x2d4: Pop(0)
0x2d5: @ SendMessage(Stack[-2], Stack[-1])
0x2d6: Pop(2)
0x2d7: Return(); Pop(2)

0x2d8: PushEmpty(string, string)
0x2d9: @ GetStringByID(Stack[-1], Stack[-3])
0x2da: Pop(0)
0x2db: Stack[-4] = Stack[-1]
0x2dc: Return(); Pop(2)

