GlobalVarCount = 0

Strings:
	default
	agony
	GetProperty
	size
	get
	player
	GetItemCount
	GetItem
	Agony
	GetItemCountOfType
	add
	level
	scrollbar
	ok
	cancel
	disease
	HasProperty
	RemoveItem
	Do 
	SetProperty
	set
	slot0
	slot
	GetItemID

Import:
	SetCursor (1 args)
	ShowCursor (0 args)
	CaptureKeyboard (0 args)
	SetOwnerDraw (1 args)
	GetWindowData (1 args)
	DestroyWindow (0 args)
	ProcessEvents (0 args)
	CreateObjectVector (1 args)
	CreateFloatVector (1 args)
	CreateIntVector (1 args)
	FindActor (2 args)
	HasInvItemProperty (3 args)
	GetInvItemProperty (3 args)
	SendMessage (2 args)
	SendMessage (3 args)
	Trace (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object, object, object, object, object, object, float, int) Params = 0
		EVENT_100 Op = 0x77 Vars = (int)
		EVENT_15 Op = 0x7b Vars = (int, int, float)
		EVENT_200 Op = 0xf9 Vars = (int, string, object)


0x0: Push("default")
0x1: @ SetCursor(Stack[-1])
0x2: Pop(1)
0x3: @ ShowCursor()
0x4: Pop(0)
0x5: @ CaptureKeyboard()
0x6: Pop(0)
0x7: Push((bool) 0)
0x8: @ SetOwnerDraw(Stack[-1])
0x9: Pop(1)
0xa: @ GetWindowData(Stack[-5])
0xb: Pop(0)
0xc: Pop(0); Push((bool) Stack[5 + Tasks[-1].StackPointer] == 0)
0xd: IF (Stack[-1] == 0) GOTO 0x11; Pop(1)

0xe: @ DestroyWindow()
0xf: Pop(0)
0x10: Return(); Pop(0)

0x11: Push("agony")
0x12: @@ GetProperty(Stack[-1], Stack[-6])
0x13: Pop(1)
0x14: PushEmpty()
0x15: Call2 0x39

0x16: Pop(0)
0x17: PushEmpty()
0x18: Call2 0xa6

0x19: Pop(0)
0x1a: PushEmpty()
0x1b: Call2 0xc3

0x1c: Pop(0)
0x1d: PushEmpty()
0x1e: Call2 0x9d

0x1f: Pop(0)
0x20: @ ProcessEvents()
0x21: Pop(0)
0x22: Return(); Pop(0)

0x23: PushEmpty(int, int, object, int, int, object)
0x24: @@ size(Stack[-3])
0x25: Pop(0)
0x26: Stack[-2] = (int) 0
0x27: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0x28: IF (Stack[-1] == 0) GOTO 0x37; Pop(1)

0x29: @@ get(Stack[-1], Stack[-2])
0x2a: Pop(0)
0x2b: PushEmpty(int, object)
0x2c: Stack[-1] = Stack[-3]
0x2d: Call2 0x203

0x2e: Pop(1)
0x2f: Pop(1); Push((bool) Stack[-1] == Stack[-8])
0x30: IF (Stack[-1] == 0) GOTO 0x33; Pop(1)

0x31: Stack[-8] = (bool) 1
0x32: Return(); Pop(6)

0x33: Stack[-1] = 0
0x34: Push((int) 1)
0x35: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x36: GOTO 0x27

0x37: Stack[-8] = (bool) 0
0x38: Return(); Pop(6)

0x39: PushEmpty(int, int, object, int, bool, float, int, int, int, object, int, bool, float, int)
0x3a: @ CreateObjectVector(Stack[-0])
0x3b: Pop(0)
0x3c: @ CreateFloatVector(Stack[-1])
0x3d: Pop(0)
0x3e: @ CreateIntVector(Stack[-3])
0x3f: Pop(0)
0x40: @ CreateIntVector(Stack[-4])
0x41: Pop(0)
0x42: Push("player")
0x43: @ FindActor(Stack[-2], Stack[-1])
0x44: Pop(1)
0x45: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x46: IF (Stack[-1] == 0) GOTO 0x4a; Pop(1)

0x47: @ DestroyWindow()
0x48: Pop(0)
0x49: Return(); Pop(14)

0x4a: Push((int) 2)
0x4b: @@ GetItemCount(Stack[-8], Stack[-1])
0x4c: Pop(1)
0x4d: Stack[-6] = (int) 0
0x4e: Pop(0); Push((bool) Stack[-6] < Stack[-7])
0x4f: IF (Stack[-1] == 0) GOTO 0x76; Pop(1)

0x50: Push((int) 2)
0x51: @@ GetItem(Stack[-6], Stack[-7], Stack[-1])
0x52: Pop(1)
0x53: PushEmpty(int, object)
0x54: Stack[-1] = Stack[-7]
0x55: Call2 0x203

0x56: Stack[-6] = Stack[-2]
0x57: Pop(2)
0x58: Push("Agony")
0x59: @ HasInvItemProperty(Stack[-4], Stack[-5], Stack[-1])
0x5a: Pop(1)
0x5b: Pop(0); Push((bool) Stack[-3] == 0)
0x5c: IF (Stack[-1] == 0) GOTO 0x5e; Pop(1)

0x5d: GOTO 0x73

0x5e: PushEmpty(bool, int)
0x5f: Stack[-1] = Stack[-6]
0x60: Call2 0x23

0x61: Pop(1)
0x62: IF (Stack[-1] == 0) GOTO 0x64; Pop(1)

0x63: GOTO 0x73

0x64: Push("Agony")
0x65: @ GetInvItemProperty(Stack[-3], Stack[-5], Stack[-1])
0x66: Pop(1)
0x67: @@ GetItemCountOfType(Stack[-1], Stack[-4])
0x68: Pop(0)
0x69: @@ add(Stack[-5])
0x6a: Pop(0)
0x6b: @@ add(Stack[-2])
0x6c: Pop(0)
0x6d: @@ add(Stack[-1])
0x6e: Pop(0)
0x6f: Push((int) 0)
0x70: @@ add(Stack[-1])
0x71: Pop(1)
0x72: Stack[-5] = 0
0x73: Push((int) 1)
0x74: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x75: GOTO 0x4e

0x76: Return(); Pop(14)

0x77: PushEmpty()
0x78: @ DestroyWindow()
0x79: Pop(0)
0x7a: Return(); Pop(0)

0x7b: PushEmpty()
0x7c: Stack[7 + Tasks[-1].StackPointer] = Stack[7 + Tasks[-1].StackPointer] + Stack[-1]; Pop(0);
0x7d: Push((int) 0)
0x7e: Pop(1); Push((bool) Stack[7 + Tasks[-1].StackPointer] < Stack[-1])
0x7f: IF (Stack[-1] == 0) GOTO 0x81; Pop(1)

0x80: Stack[7 + Tasks[-1].StackPointer] = (int)0
0x81: PushEmpty()
0x82: Call2 0xa6

0x83: Pop(0)
0x84: PushEmpty()
0x85: Call2 0xc3

0x86: Pop(0)
0x87: Return(); Pop(0)

0x88: PushEmpty(float, int, int, object, float, int, float, int, int, object, float, int)
0x89: Stack[-6] = Stack[6 + Tasks[-1].StackPointer]
0x8a: @@ size(Stack[-5])
0x8b: Pop(0)
0x8c: Stack[-4] = (int) 0
0x8d: Pop(0); Push((bool) Stack[-4] < Stack[-5])
0x8e: IF (Stack[-1] == 0) GOTO 0x9b; Pop(1)

0x8f: @@ get(Stack[-3], Stack[-4])
0x90: Pop(0)
0x91: @@ get(Stack[-2], Stack[-4])
0x92: Pop(0)
0x93: @@ get(Stack[-1], Stack[-4])
0x94: Pop(0)
0x95: Pop(0); Push(Stack[-1] * Stack[-2]);
0x96: Stack[-7] = Stack[-7] - Stack[-1]; Pop(1);
0x97: Stack[-3] = 0
0x98: Push((int) 1)
0x99: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x9a: GOTO 0x8d

0x9b: Stack[-13] = Stack[-6]
0x9c: Return(); Pop(12)

0x9d: Push((int) 100)
0x9e: PushEmpty(float)
0x9f: Call2 0x88

0xa0: Pop(0)
0xa1: Pop(2); Push(Stack[-2] * Stack[-1]);
0xa2: Push("level")
0xa3: @ SendMessage(Stack[-2], Stack[-1])
0xa4: Pop(2)
0xa5: Return(); Pop(0)

0xa6: PushEmpty(int, int, int, int)
0xa7: @@ size(Stack[-2])
0xa8: Pop(0)
0xa9: Push((int) 4)
0xaa: Pop(1); Push((bool) Stack[-3] <= Stack[-1])
0xab: IF (Stack[-1] == 0) GOTO 0xb2; Pop(1)

0xac: Push((int) 16384)
0xad: Push("scrollbar")
0xae: @ SendMessage(Stack[-2], Stack[-1])
0xaf: Pop(2)
0xb0: Stack[7 + Tasks[-1].StackPointer] = (int)0
0xb1: GOTO 0xc2

0xb2: Push((int) 4)
0xb3: Pop(1); Push(Stack[7 + StackPtr] + Stack[-1]);
0xb4: Pop(1); Push((bool) Stack[-1] > Stack[-3])
0xb5: IF (Stack[-1] == 0) GOTO 0xc2; Pop(1)

0xb6: Push((int) 4)
0xb7: Pop(1); Push(Stack[7 + StackPtr] + Stack[-1]);
0xb8: Pop(1); Push(Stack[-1] - Stack[-3]);
0xb9: Stack[7 + Tasks[-1].StackPointer] = Stack[7 + Tasks[-1].StackPointer] - Stack[-1]; Pop(1);
0xba: Push((int) 100)
0xbb: Pop(1); Push(Stack[7 + StackPtr] * Stack[-1]);
0xbc: Push((int) 4)
0xbd: Pop(1); Push(Stack[-4] - Stack[-1]);
0xbe: Stack[-3] = Stack[-2] / Stack[-1]; Pop(2);
0xbf: Push("scrollbar")
0xc0: @ SendMessage(Stack[-2], Stack[-1])
0xc1: Pop(1)
0xc2: Return(); Pop(4)

0xc3: PushEmpty(int, int, object, int, int, int, int, object, int, int)
0xc4: @@ size(Stack[-5])
0xc5: Pop(0)
0xc6: Stack[-4] = Stack[7 + Tasks[-1].StackPointer]
0xc7: Push((int) 4)
0xc8: Pop(1); Push(Stack[-1] + Stack[7 + StackPtr]);
0xc9: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0xca: IF (Stack[-1] == 0) GOTO 0xf8; Pop(1)

0xcb: Pop(0); Push((bool) Stack[-4] < Stack[-5])
0xcc: IF (Stack[-1] == 0) GOTO 0xee; Pop(1)

0xcd: @@ get(Stack[-3], Stack[-4])
0xce: Pop(0)
0xcf: @@ get(Stack[-2], Stack[-4])
0xd0: Pop(0)
0xd1: @@ get(Stack[-1], Stack[-4])
0xd2: Pop(0)
0xd3: Push(Stack[-2])
0xd4: IF (Stack[-1] == 0) GOTO 0xdd; Pop(1)

0xd5: Push((int) 16384)
0xd6: PushEmpty(string, int)
0xd7: Stack[-1] = Stack[-7] - Stack[7 + Tasks[-1].StackPointer]; Pop(0);
0xd8: Call2 0x1f3

0xd9: Pop(1)
0xda: @ SendMessage(Stack[-2], Stack[-1], Stack[-5])
0xdb: Pop(2)
0xdc: GOTO 0xe4

0xdd: Push((int) 0)
0xde: PushEmpty(string, int)
0xdf: Stack[-1] = Stack[-7] - Stack[7 + Tasks[-1].StackPointer]; Pop(0);
0xe0: Call2 0x1f3

0xe1: Pop(1)
0xe2: @ SendMessage(Stack[-2], Stack[-1], Stack[-5])
0xe3: Pop(2)
0xe4: Push((int) 65536)
0xe5: Pop(1); Push(Stack[-3] | Stack[-1]);
0xe6: PushEmpty(string, int)
0xe7: Stack[-1] = Stack[-7] - Stack[7 + Tasks[-1].StackPointer]; Pop(0);
0xe8: Call2 0x1f3

0xe9: Pop(1)
0xea: @ SendMessage(Stack[-2], Stack[-1])
0xeb: Pop(2)
0xec: Stack[-3] = 0
0xed: GOTO 0xf5

0xee: Push((int) 32768)
0xef: PushEmpty(string, int)
0xf0: Stack[-1] = Stack[-7] - Stack[7 + Tasks[-1].StackPointer]; Pop(0);
0xf1: Call2 0x1f3

0xf2: Pop(1)
0xf3: @ SendMessage(Stack[-2], Stack[-1])
0xf4: Pop(2)
0xf5: Push((int) 1)
0xf6: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0xf7: GOTO 0xc7

0xf8: Return(); Pop(10)

0xf9: PushEmpty(int, int, int, int)
0xfa: Push("ok")
0xfb: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0xfc: IF (Stack[-1] == 0) GOTO 0x101; Pop(1)

0xfd: PushEmpty()
0xfe: Call2 0x195

0xff: Pop(0)
0x100: GOTO 0x137

0x101: Push("cancel")
0x102: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x103: IF (Stack[-1] == 0) GOTO 0x108; Pop(1)

0x104: PushEmpty()
0x105: Call2 0x1ab

0x106: Pop(0)
0x107: GOTO 0x137

0x108: Push("scrollbar")
0x109: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x10a: IF (Stack[-1] == 0) GOTO 0x11f; Pop(1)

0x10b: @@ size(Stack[-2])
0x10c: Pop(0)
0x10d: Push((float)0.01)
0x10e: Push((int) 4)
0x10f: Pop(1); Push(Stack[-4] - Stack[-1]);
0x110: Pop(2); Push(Stack[-2] * Stack[-1]);
0x111: Pop(1); Push(Stack[-1] * Stack[-8]);
0x112: Push((float)0.5)
0x113: Stack[7 + Tasks[-1].StackPointer] = Stack[-2] + Stack[-1]; Pop(2);
0x114: Push((int) 0)
0x115: Pop(1); Push((bool) Stack[7 + Tasks[-1].StackPointer] < Stack[-1])
0x116: IF (Stack[-1] == 0) GOTO 0x118; Pop(1)

0x117: Stack[7 + Tasks[-1].StackPointer] = (int)0
0x118: PushEmpty()
0x119: Call2 0xa6

0x11a: Pop(0)
0x11b: PushEmpty()
0x11c: Call2 0xc3

0x11d: Pop(0)
0x11e: GOTO 0x137

0x11f: PushEmpty(int, int, string)
0x120: Stack[-2] = Stack[-10]
0x121: Stack[-1] = Stack[-9]
0x122: Call2 0x208

0x123: Stack[-4] = Stack[-3]
0x124: Pop(3)
0x125: Push((int) -1)
0x126: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x127: IF (Stack[-1] == 0) GOTO 0x137; Pop(1)

0x128: Push((int) 0)
0x129: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x12a: IF (Stack[-1] == 0) GOTO 0x130; Pop(1)

0x12b: PushEmpty(int)
0x12c: Stack[-1] = Stack[-2] + Stack[7 + Tasks[-1].StackPointer]; Pop(0);
0x12d: Call2 0x1be

0x12e: Pop(1)
0x12f: GOTO 0x137

0x130: Push((int) 1)
0x131: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x132: IF (Stack[-1] == 0) GOTO 0x137; Pop(1)

0x133: PushEmpty(int)
0x134: Stack[-1] = Stack[-2] + Stack[7 + Tasks[-1].StackPointer]; Pop(0);
0x135: Call2 0x1d9

0x136: Pop(1)
0x137: Return(); Pop(4)

0x138: PushEmpty(int, int, float, int, object, int, bool, float, int, int, float, int, object, int, bool, float)
0x139: Push((int) 2)
0x13a: @@ GetItemCount(Stack[-9], Stack[-1])
0x13b: Pop(1)
0x13c: Stack[-7] = (int) -1
0x13d: Stack[-5] = (int) 0
0x13e: Pop(0); Push((bool) Stack[-5] < Stack[-8])
0x13f: IF (Stack[-1] == 0) GOTO 0x16e; Pop(1)

0x140: Push((int) 2)
0x141: @@ GetItem(Stack[-5], Stack[-6], Stack[-1])
0x142: Pop(1)
0x143: PushEmpty(int, object)
0x144: Stack[-1] = Stack[-6]
0x145: Call2 0x203

0x146: Stack[-5] = Stack[-2]
0x147: Pop(2)
0x148: Pop(0); Push((bool) Stack[-3] == Stack[-17])
0x149: IF (Stack[-1] == 0) GOTO 0x16a; Pop(1)

0x14a: Push("disease")
0x14b: @@ HasProperty(Stack[-3], Stack[-1])
0x14c: Pop(1)
0x14d: Pop(0); Push((bool) Stack[-2] == 0)
0x14e: IF (Stack[-1] == 0) GOTO 0x15c; Pop(1)

0x14f: PushEmpty(bool)
0x150: Stack[-1] = (bool) 1
0x151: Push((int) -1)
0x152: Pop(1); Push((bool) Stack[-9] == Stack[-1])
0x153: IF (Stack[-1] == 0) GOTO 0x158; Pop(1)

0x154: Push((int) 0)
0x155: Pop(1); Push((bool) Stack[-8] > Stack[-1])
0x156: IF (Stack[-1] == 0) GOTO 0x158; Pop(1)

0x157: Stack[-1] = (bool) 0
0x158: IF (Stack[-1] == 0) GOTO 0x15b; Pop(1)

0x159: Stack[-7] = Stack[-5]
0x15a: Stack[-6] = (int) 0
0x15b: GOTO 0x16a

0x15c: Push("disease")
0x15d: @@ GetProperty(Stack[-2], Stack[-1])
0x15e: Pop(1)
0x15f: PushEmpty(bool)
0x160: Stack[-1] = (bool) 1
0x161: Push((int) -1)
0x162: Pop(1); Push((bool) Stack[-9] == Stack[-1])
0x163: IF (Stack[-1] == 0) GOTO 0x167; Pop(1)

0x164: Pop(0); Push((bool) Stack[-2] < Stack[-7])
0x165: IF (Stack[-1] == 0) GOTO 0x167; Pop(1)

0x166: Stack[-1] = (bool) 0
0x167: IF (Stack[-1] == 0) GOTO 0x16a; Pop(1)

0x168: Stack[-7] = Stack[-5]
0x169: Stack[-6] = Stack[-1]
0x16a: Stack[-4] = 0
0x16b: Push((int) 1)
0x16c: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x16d: GOTO 0x13e

0x16e: Push((int) -1)
0x16f: Pop(1); Push((bool) Stack[-8] != Stack[-1])
0x170: IF (Stack[-1] == 0) GOTO 0x175; Pop(1)

0x171: Push((int) 1)
0x172: Push((int) 2)
0x173: @@ RemoveItem(Stack[-9], Stack[-2], Stack[-1])
0x174: Pop(2)
0x175: Return(); Pop(16)

0x176: PushEmpty(int, int, int, object, int, int, int, int, object, int)
0x177: @@ size(Stack[-5])
0x178: Pop(0)
0x179: Stack[-4] = (int) 0
0x17a: Pop(0); Push((bool) Stack[-4] < Stack[-5])
0x17b: IF (Stack[-1] == 0) GOTO 0x194; Pop(1)

0x17c: @@ get(Stack[-3], Stack[-4])
0x17d: Pop(0)
0x17e: Push(Stack[-3])
0x17f: IF (Stack[-1] == 0) GOTO 0x191; Pop(1)

0x180: @@ get(Stack[-2], Stack[-4])
0x181: Pop(0)
0x182: Stack[-1] = (int) 0
0x183: Pop(0); Push((bool) Stack[-1] < Stack[-3])
0x184: IF (Stack[-1] == 0) GOTO 0x190; Pop(1)

0x185: PushEmpty(int)
0x186: PushEmpty(int, object)
0x187: Stack[-1] = Stack[-5]
0x188: Call2 0x203

0x189: Stack[-3] = Stack[-2]
0x18a: Pop(2)
0x18b: Call2 0x138

0x18c: Pop(1)
0x18d: Push((int) 1)
0x18e: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x18f: GOTO 0x183

0x190: Stack[-2] = 0
0x191: Push((int) 1)
0x192: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x193: GOTO 0x17a

0x194: Return(); Pop(10)

0x195: PushEmpty(float, float)
0x196: PushEmpty(float)
0x197: Call2 0x88

0x198: Stack[-2] = Stack[-1]
0x199: Pop(1)
0x19a: Push((float)0.001)
0x19b: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x19c: IF (Stack[-1] == 0) GOTO 0x19e; Pop(1)

0x19d: Stack[-1] = (int) 0
0x19e: Push("Do ")
0x19f: Pop(1); Push(Stack[-1] + Stack[-2]);
0x1a0: @ Trace(Stack[-1])
0x1a1: Pop(1)
0x1a2: Push("agony")
0x1a3: @@ SetProperty(Stack[-1], Stack[-2])
0x1a4: Pop(1)
0x1a5: PushEmpty()
0x1a6: Call2 0x176

0x1a7: Pop(0)
0x1a8: @ DestroyWindow()
0x1a9: Pop(0)
0x1aa: Return(); Pop(2)

0x1ab: PushEmpty(int, int, int, int)
0x1ac: @@ size(Stack[-2])
0x1ad: Pop(0)
0x1ae: Stack[-1] = (int) 0
0x1af: Pop(0); Push((bool) Stack[-1] < Stack[-2])
0x1b0: IF (Stack[-1] == 0) GOTO 0x1b7; Pop(1)

0x1b1: Push((int) 0)
0x1b2: @@ set(Stack[-2], Stack[-1])
0x1b3: Pop(1)
0x1b4: Push((int) 1)
0x1b5: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x1b6: GOTO 0x1af

0x1b7: PushEmpty()
0x1b8: Call2 0xc3

0x1b9: Pop(0)
0x1ba: PushEmpty()
0x1bb: Call2 0x9d

0x1bc: Pop(0)
0x1bd: Return(); Pop(4)

0x1be: PushEmpty(int, object, int, int, int, object, int, int)
0x1bf: @@ size(Stack[-4])
0x1c0: Pop(0)
0x1c1: Pop(0); Push((bool) Stack[-9] >= Stack[-4])
0x1c2: IF (Stack[-1] == 0) GOTO 0x1c4; Pop(1)

0x1c3: Return(); Pop(8)

0x1c4: @@ get(Stack[-3], Stack[-9])
0x1c5: Pop(0)
0x1c6: @@ get(Stack[-2], Stack[-9])
0x1c7: Pop(0)
0x1c8: @@ get(Stack[-1], Stack[-9])
0x1c9: Pop(0)
0x1ca: Pop(0); Push((bool) Stack[-2] <= Stack[-1])
0x1cb: IF (Stack[-1] == 0) GOTO 0x1cd; Pop(1)

0x1cc: Return(); Pop(8)

0x1cd: Push((int) 1)
0x1ce: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x1cf: @@ set(Stack[-9], Stack[-1])
0x1d0: Pop(0)
0x1d1: PushEmpty()
0x1d2: Call2 0xc3

0x1d3: Pop(0)
0x1d4: PushEmpty()
0x1d5: Call2 0x9d

0x1d6: Pop(0)
0x1d7: Return(); Pop(8)

0x1d8: Stack[-3] = 0
0x1d9: PushEmpty(int, object, int, int, object, int)
0x1da: @@ size(Stack[-3])
0x1db: Pop(0)
0x1dc: Pop(0); Push((bool) Stack[-7] >= Stack[-3])
0x1dd: IF (Stack[-1] == 0) GOTO 0x1df; Pop(1)

0x1de: Return(); Pop(6)

0x1df: @@ get(Stack[-2], Stack[-7])
0x1e0: Pop(0)
0x1e1: @@ get(Stack[-1], Stack[-7])
0x1e2: Pop(0)
0x1e3: Push((int) 0)
0x1e4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1e5: IF (Stack[-1] == 0) GOTO 0x1e7; Pop(1)

0x1e6: Return(); Pop(6)

0x1e7: Push((int) 1)
0x1e8: Stack[-2] = Stack[-2] - Stack[-1]; Pop(1);
0x1e9: @@ set(Stack[-7], Stack[-1])
0x1ea: Pop(0)
0x1eb: PushEmpty()
0x1ec: Call2 0xc3

0x1ed: Pop(0)
0x1ee: PushEmpty()
0x1ef: Call2 0x9d

0x1f0: Pop(0)
0x1f1: Return(); Pop(6)

0x1f2: Stack[-2] = 0
0x1f3: PushEmpty()
0x1f4: Push((int) 1)
0x1f5: Pop(1); Push(Stack[-2] + Stack[-1]);
0x1f6: Push((int) 10)
0x1f7: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x1f8: IF (Stack[-1] == 0) GOTO 0x1fe; Pop(1)

0x1f9: Push("slot0")
0x1fa: Push((int) 1)
0x1fb: Pop(1); Push(Stack[-3] + Stack[-1]);
0x1fc: Stack[-4] = Stack[-2] + Stack[-1]; Pop(2);
0x1fd: Return(); Pop(0)

0x1fe: Push("slot")
0x1ff: Push((int) 1)
0x200: Pop(1); Push(Stack[-3] + Stack[-1]);
0x201: Stack[-4] = Stack[-2] + Stack[-1]; Pop(2);
0x202: Return(); Pop(0)

0x203: PushEmpty(int, int)
0x204: @@ GetItemID(Stack[-1])
0x205: Pop(0)
0x206: Stack[-4] = Stack[-1]
0x207: Return(); Pop(2)

0x208: PushEmpty(int, int)
0x209: Stack[-1] = (int) 0
0x20a: Push((int) 4)
0x20b: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x20c: IF (Stack[-1] == 0) GOTO 0x218; Pop(1)

0x20d: PushEmpty(string, int)
0x20e: Stack[-1] = Stack[-3]
0x20f: Call2 0x1f3

0x210: Pop(1)
0x211: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x212: IF (Stack[-1] == 0) GOTO 0x215; Pop(1)

0x213: Stack[-5] = Stack[-1]
0x214: Return(); Pop(2)

0x215: Push((int) 1)
0x216: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x217: GOTO 0x20a

0x218: Stack[-5] = (int) -1
0x219: Return(); Pop(2)

