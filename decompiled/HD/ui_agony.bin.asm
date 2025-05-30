GlobalVarCount = 0

Strings:
	default
	agony
	GetProperty
	$parent
	add
	size
	get
	player
	GetItemCount
	GetItem
	Agony
	GetItemCountOfType
	ok
	cancel
	level
	scrollbar
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
	CreateStringVector (1 args)
	SendMessage (3 args)
	SendMessage (2 args)
	ProcessEvents (0 args)
	CreateObjectVector (1 args)
	CreateFloatVector (1 args)
	CreateIntVector (1 args)
	FindActor (2 args)
	HasInvItemProperty (3 args)
	GetInvItemProperty (3 args)
	Trace (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object, object, object, object, object, object, float, int, int) Params = 0
		EVENT_101 Op = 0xaf Vars = (int)
		EVENT_102 Op = 0xfd Vars = (int)
		EVENT_100 Op = 0x14b Vars = (int)
		EVENT_15 Op = 0x14f Vars = (int, int, float)
		EVENT_200 Op = 0x1d6 Vars = (int, string, object)


0x0: PushEmpty(int, object, string, string, int, object, string, string)
0x1: Push("default")
0x2: @ SetCursor(Stack[-1])
0x3: Pop(1)
0x4: @ ShowCursor()
0x5: Pop(0)
0x6: @ CaptureKeyboard()
0x7: Pop(0)
0x8: Push((bool) 0)
0x9: @ SetOwnerDraw(Stack[-1])
0xa: Pop(1)
0xb: @ GetWindowData(Stack[-5])
0xc: Pop(0)
0xd: Pop(0); Push((bool) Stack[5 + Tasks[-1].StackPointer] == 0)
0xe: IF (Stack[-1] == 0) GOTO 0x12; Pop(1)

0xf: @ DestroyWindow()
0x10: Pop(0)
0x11: Return(); Pop(8)

0x12: Push("agony")
0x13: @@ GetProperty(Stack[-1], Stack[-6])
0x14: Pop(1)
0x15: PushEmpty()
0x16: Call2 0x71

0x17: Pop(0)
0x18: Stack[8 + Tasks[-1].StackPointer] = (int)1
0x19: Stack[-4] = (int) 0
0x1a: Push((int) 4)
0x1b: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x1c: IF (Stack[-1] == 0) GOTO 0x48; Pop(1)

0x1d: @ CreateStringVector(Stack[-3])
0x1e: Pop(0)
0x1f: Push((int) 1)
0x20: Pop(1); Push(Stack[-5] - Stack[-1]);
0x21: Push((int) 0)
0x22: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x23: IF (Stack[-1] == 0) GOTO 0x2b; Pop(1)

0x24: PushEmpty(string, int)
0x25: Push((int) 1)
0x26: Stack[-2] = Stack[-7] - Stack[-1]; Pop(1);
0x27: Call2 0x30b

0x28: Stack[-4] = Stack[-2]
0x29: Pop(2)
0x2a: GOTO 0x2c

0x2b: Stack[-2] = "$parent"
0x2c: Push((int) 1)
0x2d: Pop(1); Push(Stack[-5] + Stack[-1]);
0x2e: Push((int) 4)
0x2f: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x30: IF (Stack[-1] == 0) GOTO 0x38; Pop(1)

0x31: PushEmpty(string, int)
0x32: Push((int) 1)
0x33: Stack[-2] = Stack[-7] + Stack[-1]; Pop(1);
0x34: Call2 0x30b

0x35: Stack[-3] = Stack[-2]
0x36: Pop(2)
0x37: GOTO 0x39

0x38: Stack[-1] = "$parent"
0x39: @@ add(Stack[-2])
0x3a: Pop(0)
0x3b: @@ add(Stack[-1])
0x3c: Pop(0)
0x3d: Push((int) -1)
0x3e: PushEmpty(string, int)
0x3f: Stack[-1] = Stack[-7]
0x40: Call2 0x30b

0x41: Pop(1)
0x42: @ SendMessage(Stack[-2], Stack[-1], Stack[-5])
0x43: Pop(2)
0x44: Stack[-3] = 0
0x45: Push((int) 1)
0x46: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x47: GOTO 0x1a

0x48: Push((int) -6)
0x49: PushEmpty(string, int)
0x4a: Stack[-1] = (int) 0
0x4b: Call2 0x30b

0x4c: Pop(1)
0x4d: @ SendMessage(Stack[-2], Stack[-1])
0x4e: Pop(2)
0x4f: PushEmpty()
0x50: Call2 0x183

0x51: Pop(0)
0x52: PushEmpty()
0x53: Call2 0x1a0

0x54: Pop(0)
0x55: PushEmpty()
0x56: Call2 0x17a

0x57: Pop(0)
0x58: @ ProcessEvents()
0x59: Pop(0)
0x5a: Return(); Pop(8)

0x5b: PushEmpty(int, int, object, int, int, object)
0x5c: @@ size(Stack[-3])
0x5d: Pop(0)
0x5e: Stack[-2] = (int) 0
0x5f: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0x60: IF (Stack[-1] == 0) GOTO 0x6f; Pop(1)

0x61: @@ get(Stack[-1], Stack[-2])
0x62: Pop(0)
0x63: PushEmpty(int, object)
0x64: Stack[-1] = Stack[-3]
0x65: Call2 0x31b

0x66: Pop(1)
0x67: Pop(1); Push((bool) Stack[-1] == Stack[-8])
0x68: IF (Stack[-1] == 0) GOTO 0x6b; Pop(1)

0x69: Stack[-8] = (bool) 1
0x6a: Return(); Pop(6)

0x6b: Stack[-1] = 0
0x6c: Push((int) 1)
0x6d: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x6e: GOTO 0x5f

0x6f: Stack[-8] = (bool) 0
0x70: Return(); Pop(6)

0x71: PushEmpty(int, int, object, int, bool, float, int, int, int, object, int, bool, float, int)
0x72: @ CreateObjectVector(Stack[-0])
0x73: Pop(0)
0x74: @ CreateFloatVector(Stack[-1])
0x75: Pop(0)
0x76: @ CreateIntVector(Stack[-3])
0x77: Pop(0)
0x78: @ CreateIntVector(Stack[-4])
0x79: Pop(0)
0x7a: Push("player")
0x7b: @ FindActor(Stack[-2], Stack[-1])
0x7c: Pop(1)
0x7d: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x7e: IF (Stack[-1] == 0) GOTO 0x82; Pop(1)

0x7f: @ DestroyWindow()
0x80: Pop(0)
0x81: Return(); Pop(14)

0x82: Push((int) 2)
0x83: @@ GetItemCount(Stack[-8], Stack[-1])
0x84: Pop(1)
0x85: Stack[-6] = (int) 0
0x86: Pop(0); Push((bool) Stack[-6] < Stack[-7])
0x87: IF (Stack[-1] == 0) GOTO 0xae; Pop(1)

0x88: Push((int) 2)
0x89: @@ GetItem(Stack[-6], Stack[-7], Stack[-1])
0x8a: Pop(1)
0x8b: PushEmpty(int, object)
0x8c: Stack[-1] = Stack[-7]
0x8d: Call2 0x31b

0x8e: Stack[-6] = Stack[-2]
0x8f: Pop(2)
0x90: Push("Agony")
0x91: @ HasInvItemProperty(Stack[-4], Stack[-5], Stack[-1])
0x92: Pop(1)
0x93: Pop(0); Push((bool) Stack[-3] == 0)
0x94: IF (Stack[-1] == 0) GOTO 0x96; Pop(1)

0x95: GOTO 0xab

0x96: PushEmpty(bool, int)
0x97: Stack[-1] = Stack[-6]
0x98: Call2 0x5b

0x99: Pop(1)
0x9a: IF (Stack[-1] == 0) GOTO 0x9c; Pop(1)

0x9b: GOTO 0xab

0x9c: Push("Agony")
0x9d: @ GetInvItemProperty(Stack[-3], Stack[-5], Stack[-1])
0x9e: Pop(1)
0x9f: @@ GetItemCountOfType(Stack[-1], Stack[-4])
0xa0: Pop(0)
0xa1: @@ add(Stack[-5])
0xa2: Pop(0)
0xa3: @@ add(Stack[-2])
0xa4: Pop(0)
0xa5: @@ add(Stack[-1])
0xa6: Pop(0)
0xa7: Push((int) 0)
0xa8: @@ add(Stack[-1])
0xa9: Pop(1)
0xaa: Stack[-5] = 0
0xab: Push((int) 1)
0xac: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0xad: GOTO 0x86

0xae: Return(); Pop(14)

0xaf: PushEmpty(int, int, int, int, int, int)
0xb0: Push((int) 267)
0xb1: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0xb2: IF (Stack[-1] == 0) GOTO 0xc2; Pop(1)

0xb3: Stack[8 + Tasks[-1].StackPointer] = (int)1
0xb4: Stack[-3] = (int) 0
0xb5: Push((int) 4)
0xb6: Pop(1); Push((bool) Stack[-4] < Stack[-1])
0xb7: IF (Stack[-1] == 0) GOTO 0xc2; Pop(1)

0xb8: Push((int) -7)
0xb9: PushEmpty(string, int)
0xba: Stack[-1] = Stack[-6]
0xbb: Call2 0x30b

0xbc: Pop(1)
0xbd: @ SendMessage(Stack[-2], Stack[-1])
0xbe: Pop(2)
0xbf: Push((int) 1)
0xc0: Stack[-4] = Stack[-4] + Stack[-1]; Pop(1);
0xc1: GOTO 0xb5

0xc2: Push((int) 268)
0xc3: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0xc4: IF (Stack[-1] == 0) GOTO 0xca; Pop(1)

0xc5: Stack[8 + Tasks[-1].StackPointer] = (int)0
0xc6: Push((int) -4)
0xc7: Push("ok")
0xc8: @ SendMessage(Stack[-2], Stack[-1])
0xc9: Pop(2)
0xca: Push((int) 269)
0xcb: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0xcc: IF (Stack[-1] == 0) GOTO 0xe3; Pop(1)

0xcd: Push((int) 1)
0xce: Pop(1); Push((bool) Stack[8 + Tasks[-1].StackPointer] == Stack[-1])
0xcf: IF (Stack[-1] == 0) GOTO 0xdf; Pop(1)

0xd0: Stack[-2] = (int) 0
0xd1: Push((int) 4)
0xd2: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0xd3: IF (Stack[-1] == 0) GOTO 0xde; Pop(1)

0xd4: Push((int) -2)
0xd5: PushEmpty(string, int)
0xd6: Stack[-1] = Stack[-5]
0xd7: Call2 0x30b

0xd8: Pop(1)
0xd9: @ SendMessage(Stack[-2], Stack[-1])
0xda: Pop(2)
0xdb: Push((int) 1)
0xdc: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0xdd: GOTO 0xd1

0xde: GOTO 0xe3

0xdf: Push((int) -4)
0xe0: Push("ok")
0xe1: @ SendMessage(Stack[-2], Stack[-1])
0xe2: Pop(2)
0xe3: Push((int) 270)
0xe4: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0xe5: IF (Stack[-1] == 0) GOTO 0xfc; Pop(1)

0xe6: Push((int) 1)
0xe7: Pop(1); Push((bool) Stack[8 + Tasks[-1].StackPointer] == Stack[-1])
0xe8: IF (Stack[-1] == 0) GOTO 0xf8; Pop(1)

0xe9: Stack[-1] = (int) 0
0xea: Push((int) 4)
0xeb: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xec: IF (Stack[-1] == 0) GOTO 0xf7; Pop(1)

0xed: Push((int) -3)
0xee: PushEmpty(string, int)
0xef: Stack[-1] = Stack[-4]
0xf0: Call2 0x30b

0xf1: Pop(1)
0xf2: @ SendMessage(Stack[-2], Stack[-1])
0xf3: Pop(2)
0xf4: Push((int) 1)
0xf5: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0xf6: GOTO 0xea

0xf7: GOTO 0xfc

0xf8: Push((int) -4)
0xf9: Push("cancel")
0xfa: @ SendMessage(Stack[-2], Stack[-1])
0xfb: Pop(2)
0xfc: Return(); Pop(6)

0xfd: PushEmpty(int, int, int, int, int, int)
0xfe: Push((int) 272)
0xff: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x100: IF (Stack[-1] == 0) GOTO 0x110; Pop(1)

0x101: Stack[8 + Tasks[-1].StackPointer] = (int)1
0x102: Stack[-3] = (int) 0
0x103: Push((int) 4)
0x104: Pop(1); Push((bool) Stack[-4] < Stack[-1])
0x105: IF (Stack[-1] == 0) GOTO 0x110; Pop(1)

0x106: Push((int) -7)
0x107: PushEmpty(string, int)
0x108: Stack[-1] = Stack[-6]
0x109: Call2 0x30b

0x10a: Pop(1)
0x10b: @ SendMessage(Stack[-2], Stack[-1])
0x10c: Pop(2)
0x10d: Push((int) 1)
0x10e: Stack[-4] = Stack[-4] + Stack[-1]; Pop(1);
0x10f: GOTO 0x103

0x110: Push((int) 274)
0x111: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x112: IF (Stack[-1] == 0) GOTO 0x118; Pop(1)

0x113: Stack[8 + Tasks[-1].StackPointer] = (int)0
0x114: Push((int) -4)
0x115: Push("ok")
0x116: @ SendMessage(Stack[-2], Stack[-1])
0x117: Pop(2)
0x118: Push((int) 273)
0x119: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x11a: IF (Stack[-1] == 0) GOTO 0x131; Pop(1)

0x11b: Push((int) 1)
0x11c: Pop(1); Push((bool) Stack[8 + Tasks[-1].StackPointer] == Stack[-1])
0x11d: IF (Stack[-1] == 0) GOTO 0x12d; Pop(1)

0x11e: Stack[-2] = (int) 0
0x11f: Push((int) 4)
0x120: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x121: IF (Stack[-1] == 0) GOTO 0x12c; Pop(1)

0x122: Push((int) -2)
0x123: PushEmpty(string, int)
0x124: Stack[-1] = Stack[-5]
0x125: Call2 0x30b

0x126: Pop(1)
0x127: @ SendMessage(Stack[-2], Stack[-1])
0x128: Pop(2)
0x129: Push((int) 1)
0x12a: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x12b: GOTO 0x11f

0x12c: GOTO 0x131

0x12d: Push((int) -4)
0x12e: Push("ok")
0x12f: @ SendMessage(Stack[-2], Stack[-1])
0x130: Pop(2)
0x131: Push((int) 271)
0x132: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x133: IF (Stack[-1] == 0) GOTO 0x14a; Pop(1)

0x134: Push((int) 1)
0x135: Pop(1); Push((bool) Stack[8 + Tasks[-1].StackPointer] == Stack[-1])
0x136: IF (Stack[-1] == 0) GOTO 0x146; Pop(1)

0x137: Stack[-1] = (int) 0
0x138: Push((int) 4)
0x139: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x13a: IF (Stack[-1] == 0) GOTO 0x145; Pop(1)

0x13b: Push((int) -3)
0x13c: PushEmpty(string, int)
0x13d: Stack[-1] = Stack[-4]
0x13e: Call2 0x30b

0x13f: Pop(1)
0x140: @ SendMessage(Stack[-2], Stack[-1])
0x141: Pop(2)
0x142: Push((int) 1)
0x143: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x144: GOTO 0x138

0x145: GOTO 0x14a

0x146: Push((int) -4)
0x147: Push("cancel")
0x148: @ SendMessage(Stack[-2], Stack[-1])
0x149: Pop(2)
0x14a: Return(); Pop(6)

0x14b: PushEmpty()
0x14c: @ DestroyWindow()
0x14d: Pop(0)
0x14e: Return(); Pop(0)

0x14f: PushEmpty()
0x150: Push((int) 0)
0x151: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x152: IF (Stack[-1] == 0) GOTO 0x155; Pop(1)

0x153: Stack[-1] = (int) 1
0x154: GOTO 0x159

0x155: Push((int) 0)
0x156: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x157: IF (Stack[-1] == 0) GOTO 0x159; Pop(1)

0x158: Stack[-1] = (int) -1
0x159: Stack[7 + Tasks[-1].StackPointer] = Stack[7 + Tasks[-1].StackPointer] + Stack[-1]; Pop(0);
0x15a: Push((int) 0)
0x15b: Pop(1); Push((bool) Stack[7 + Tasks[-1].StackPointer] < Stack[-1])
0x15c: IF (Stack[-1] == 0) GOTO 0x15e; Pop(1)

0x15d: Stack[7 + Tasks[-1].StackPointer] = (int)0
0x15e: PushEmpty()
0x15f: Call2 0x183

0x160: Pop(0)
0x161: PushEmpty()
0x162: Call2 0x1a0

0x163: Pop(0)
0x164: Return(); Pop(0)

0x165: PushEmpty(float, int, int, object, float, int, float, int, int, object, float, int)
0x166: Stack[-6] = Stack[6 + Tasks[-1].StackPointer]
0x167: @@ size(Stack[-5])
0x168: Pop(0)
0x169: Stack[-4] = (int) 0
0x16a: Pop(0); Push((bool) Stack[-4] < Stack[-5])
0x16b: IF (Stack[-1] == 0) GOTO 0x178; Pop(1)

0x16c: @@ get(Stack[-3], Stack[-4])
0x16d: Pop(0)
0x16e: @@ get(Stack[-2], Stack[-4])
0x16f: Pop(0)
0x170: @@ get(Stack[-1], Stack[-4])
0x171: Pop(0)
0x172: Pop(0); Push(Stack[-1] * Stack[-2]);
0x173: Stack[-7] = Stack[-7] - Stack[-1]; Pop(1);
0x174: Stack[-3] = 0
0x175: Push((int) 1)
0x176: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x177: GOTO 0x16a

0x178: Stack[-13] = Stack[-6]
0x179: Return(); Pop(12)

0x17a: Push((int) 100)
0x17b: PushEmpty(float)
0x17c: Call2 0x165

0x17d: Pop(0)
0x17e: Pop(2); Push(Stack[-2] * Stack[-1]);
0x17f: Push("level")
0x180: @ SendMessage(Stack[-2], Stack[-1])
0x181: Pop(2)
0x182: Return(); Pop(0)

0x183: PushEmpty(int, int, int, int)
0x184: @@ size(Stack[-2])
0x185: Pop(0)
0x186: Push((int) 4)
0x187: Pop(1); Push((bool) Stack[-3] <= Stack[-1])
0x188: IF (Stack[-1] == 0) GOTO 0x18f; Pop(1)

0x189: Push((int) 16384)
0x18a: Push("scrollbar")
0x18b: @ SendMessage(Stack[-2], Stack[-1])
0x18c: Pop(2)
0x18d: Stack[7 + Tasks[-1].StackPointer] = (int)0
0x18e: GOTO 0x19f

0x18f: Push((int) 4)
0x190: Pop(1); Push(Stack[7 + StackPtr] + Stack[-1]);
0x191: Pop(1); Push((bool) Stack[-1] > Stack[-3])
0x192: IF (Stack[-1] == 0) GOTO 0x19f; Pop(1)

0x193: Push((int) 4)
0x194: Pop(1); Push(Stack[7 + StackPtr] + Stack[-1]);
0x195: Pop(1); Push(Stack[-1] - Stack[-3]);
0x196: Stack[7 + Tasks[-1].StackPointer] = Stack[7 + Tasks[-1].StackPointer] - Stack[-1]; Pop(1);
0x197: Push((int) 100)
0x198: Pop(1); Push(Stack[7 + StackPtr] * Stack[-1]);
0x199: Push((int) 4)
0x19a: Pop(1); Push(Stack[-4] - Stack[-1]);
0x19b: Stack[-3] = Stack[-2] / Stack[-1]; Pop(2);
0x19c: Push("scrollbar")
0x19d: @ SendMessage(Stack[-2], Stack[-1])
0x19e: Pop(1)
0x19f: Return(); Pop(4)

0x1a0: PushEmpty(int, int, object, int, int, int, int, object, int, int)
0x1a1: @@ size(Stack[-5])
0x1a2: Pop(0)
0x1a3: Stack[-4] = Stack[7 + Tasks[-1].StackPointer]
0x1a4: Push((int) 4)
0x1a5: Pop(1); Push(Stack[-1] + Stack[7 + StackPtr]);
0x1a6: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x1a7: IF (Stack[-1] == 0) GOTO 0x1d5; Pop(1)

0x1a8: Pop(0); Push((bool) Stack[-4] < Stack[-5])
0x1a9: IF (Stack[-1] == 0) GOTO 0x1cb; Pop(1)

0x1aa: @@ get(Stack[-3], Stack[-4])
0x1ab: Pop(0)
0x1ac: @@ get(Stack[-2], Stack[-4])
0x1ad: Pop(0)
0x1ae: @@ get(Stack[-1], Stack[-4])
0x1af: Pop(0)
0x1b0: Push(Stack[-2])
0x1b1: IF (Stack[-1] == 0) GOTO 0x1ba; Pop(1)

0x1b2: Push((int) 16384)
0x1b3: PushEmpty(string, int)
0x1b4: Stack[-1] = Stack[-7] - Stack[7 + Tasks[-1].StackPointer]; Pop(0);
0x1b5: Call2 0x30b

0x1b6: Pop(1)
0x1b7: @ SendMessage(Stack[-2], Stack[-1], Stack[-5])
0x1b8: Pop(2)
0x1b9: GOTO 0x1c1

0x1ba: Push((int) 0)
0x1bb: PushEmpty(string, int)
0x1bc: Stack[-1] = Stack[-7] - Stack[7 + Tasks[-1].StackPointer]; Pop(0);
0x1bd: Call2 0x30b

0x1be: Pop(1)
0x1bf: @ SendMessage(Stack[-2], Stack[-1], Stack[-5])
0x1c0: Pop(2)
0x1c1: Push((int) 65536)
0x1c2: Pop(1); Push(Stack[-3] | Stack[-1]);
0x1c3: PushEmpty(string, int)
0x1c4: Stack[-1] = Stack[-7] - Stack[7 + Tasks[-1].StackPointer]; Pop(0);
0x1c5: Call2 0x30b

0x1c6: Pop(1)
0x1c7: @ SendMessage(Stack[-2], Stack[-1])
0x1c8: Pop(2)
0x1c9: Stack[-3] = 0
0x1ca: GOTO 0x1d2

0x1cb: Push((int) 32768)
0x1cc: PushEmpty(string, int)
0x1cd: Stack[-1] = Stack[-7] - Stack[7 + Tasks[-1].StackPointer]; Pop(0);
0x1ce: Call2 0x30b

0x1cf: Pop(1)
0x1d0: @ SendMessage(Stack[-2], Stack[-1])
0x1d1: Pop(2)
0x1d2: Push((int) 1)
0x1d3: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x1d4: GOTO 0x1a4

0x1d5: Return(); Pop(10)

0x1d6: PushEmpty(int, int, int, int, int, int)
0x1d7: Push((int) -4)
0x1d8: Pop(1); Push((bool) Stack[-10] == Stack[-1])
0x1d9: IF (Stack[-1] == 0) GOTO 0x204; Pop(1)

0x1da: PushEmpty(string, int)
0x1db: Stack[-1] = (int) 0
0x1dc: Call2 0x30b

0x1dd: Pop(1)
0x1de: Pop(1); Push((bool) Stack[-9] == Stack[-1])
0x1df: IF (Stack[-1] == 0) GOTO 0x1ec; Pop(1)

0x1e0: Push((int) 0)
0x1e1: Pop(1); Push((bool) Stack[7 + Tasks[-1].StackPointer] > Stack[-1])
0x1e2: IF (Stack[-1] == 0) GOTO 0x1eb; Pop(1)

0x1e3: Push((int) -1)
0x1e4: Stack[7 + Tasks[-1].StackPointer] = Stack[7 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x1e5: PushEmpty()
0x1e6: Call2 0x1a0

0x1e7: Pop(0)
0x1e8: PushEmpty()
0x1e9: Call2 0x183

0x1ea: Pop(0)
0x1eb: GOTO 0x200

0x1ec: PushEmpty(string, int)
0x1ed: Stack[-1] = (int) 3
0x1ee: Call2 0x30b

0x1ef: Pop(1)
0x1f0: Pop(1); Push((bool) Stack[-9] == Stack[-1])
0x1f1: IF (Stack[-1] == 0) GOTO 0x200; Pop(1)

0x1f2: @@ size(Stack[-3])
0x1f3: Pop(0)
0x1f4: Push((int) 4)
0x1f5: Pop(1); Push(Stack[7 + StackPtr] + Stack[-1]);
0x1f6: Pop(1); Push((bool) Stack[-1] <= Stack[-4])
0x1f7: IF (Stack[-1] == 0) GOTO 0x200; Pop(1)

0x1f8: Push((int) 1)
0x1f9: Stack[7 + Tasks[-1].StackPointer] = Stack[7 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x1fa: PushEmpty()
0x1fb: Call2 0x1a0

0x1fc: Pop(0)
0x1fd: PushEmpty()
0x1fe: Call2 0x183

0x1ff: Pop(0)
0x200: Push((int) -4)
0x201: @ SendMessage(Stack[-1], Stack[-9])
0x202: Pop(1)
0x203: Return(); Pop(6)

0x204: Push((int) -12)
0x205: Pop(1); Push((bool) Stack[-10] == Stack[-1])
0x206: IF (Stack[-1] == 0) GOTO 0x209; Pop(1)

0x207: Stack[8 + Tasks[-1].StackPointer] = (int)0
0x208: Return(); Pop(6)

0x209: Push((int) -8)
0x20a: Pop(1); Push((bool) Stack[-10] == Stack[-1])
0x20b: IF (Stack[-1] == 0) GOTO 0x20e; Pop(1)

0x20c: Stack[8 + Tasks[-1].StackPointer] = (int)1
0x20d: Return(); Pop(6)

0x20e: Push((int) 0)
0x20f: Pop(1); Push((bool) Stack[-10] < Stack[-1])
0x210: IF (Stack[-1] == 0) GOTO 0x212; Pop(1)

0x211: Return(); Pop(6)

0x212: Push("ok")
0x213: Pop(1); Push((bool) Stack[-9] == Stack[-1])
0x214: IF (Stack[-1] == 0) GOTO 0x219; Pop(1)

0x215: PushEmpty()
0x216: Call2 0x2ad

0x217: Pop(0)
0x218: GOTO 0x24f

0x219: Push("cancel")
0x21a: Pop(1); Push((bool) Stack[-9] == Stack[-1])
0x21b: IF (Stack[-1] == 0) GOTO 0x220; Pop(1)

0x21c: PushEmpty()
0x21d: Call2 0x2c3

0x21e: Pop(0)
0x21f: GOTO 0x24f

0x220: Push("scrollbar")
0x221: Pop(1); Push((bool) Stack[-9] == Stack[-1])
0x222: IF (Stack[-1] == 0) GOTO 0x237; Pop(1)

0x223: @@ size(Stack[-2])
0x224: Pop(0)
0x225: Push((float)0.01)
0x226: Push((int) 4)
0x227: Pop(1); Push(Stack[-4] - Stack[-1]);
0x228: Pop(2); Push(Stack[-2] * Stack[-1]);
0x229: Pop(1); Push(Stack[-1] * Stack[-10]);
0x22a: Push((float)0.5)
0x22b: Stack[7 + Tasks[-1].StackPointer] = Stack[-2] + Stack[-1]; Pop(2);
0x22c: Push((int) 0)
0x22d: Pop(1); Push((bool) Stack[7 + Tasks[-1].StackPointer] < Stack[-1])
0x22e: IF (Stack[-1] == 0) GOTO 0x230; Pop(1)

0x22f: Stack[7 + Tasks[-1].StackPointer] = (int)0
0x230: PushEmpty()
0x231: Call2 0x183

0x232: Pop(0)
0x233: PushEmpty()
0x234: Call2 0x1a0

0x235: Pop(0)
0x236: GOTO 0x24f

0x237: PushEmpty(int, int, string)
0x238: Stack[-2] = Stack[-12]
0x239: Stack[-1] = Stack[-11]
0x23a: Call2 0x320

0x23b: Stack[-4] = Stack[-3]
0x23c: Pop(3)
0x23d: Push((int) -1)
0x23e: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x23f: IF (Stack[-1] == 0) GOTO 0x24f; Pop(1)

0x240: Push((int) 0)
0x241: Pop(1); Push((bool) Stack[-10] == Stack[-1])
0x242: IF (Stack[-1] == 0) GOTO 0x248; Pop(1)

0x243: PushEmpty(int)
0x244: Stack[-1] = Stack[-2] + Stack[7 + Tasks[-1].StackPointer]; Pop(0);
0x245: Call2 0x2d6

0x246: Pop(1)
0x247: GOTO 0x24f

0x248: Push((int) 1)
0x249: Pop(1); Push((bool) Stack[-10] == Stack[-1])
0x24a: IF (Stack[-1] == 0) GOTO 0x24f; Pop(1)

0x24b: PushEmpty(int)
0x24c: Stack[-1] = Stack[-2] + Stack[7 + Tasks[-1].StackPointer]; Pop(0);
0x24d: Call2 0x2f1

0x24e: Pop(1)
0x24f: Return(); Pop(6)

0x250: PushEmpty(int, int, float, int, object, int, bool, float, int, int, float, int, object, int, bool, float)
0x251: Push((int) 2)
0x252: @@ GetItemCount(Stack[-9], Stack[-1])
0x253: Pop(1)
0x254: Stack[-7] = (int) -1
0x255: Stack[-5] = (int) 0
0x256: Pop(0); Push((bool) Stack[-5] < Stack[-8])
0x257: IF (Stack[-1] == 0) GOTO 0x286; Pop(1)

0x258: Push((int) 2)
0x259: @@ GetItem(Stack[-5], Stack[-6], Stack[-1])
0x25a: Pop(1)
0x25b: PushEmpty(int, object)
0x25c: Stack[-1] = Stack[-6]
0x25d: Call2 0x31b

0x25e: Stack[-5] = Stack[-2]
0x25f: Pop(2)
0x260: Pop(0); Push((bool) Stack[-3] == Stack[-17])
0x261: IF (Stack[-1] == 0) GOTO 0x282; Pop(1)

0x262: Push("disease")
0x263: @@ HasProperty(Stack[-3], Stack[-1])
0x264: Pop(1)
0x265: Pop(0); Push((bool) Stack[-2] == 0)
0x266: IF (Stack[-1] == 0) GOTO 0x274; Pop(1)

0x267: PushEmpty(bool)
0x268: Stack[-1] = (bool) 1
0x269: Push((int) -1)
0x26a: Pop(1); Push((bool) Stack[-9] == Stack[-1])
0x26b: IF (Stack[-1] == 0) GOTO 0x270; Pop(1)

0x26c: Push((int) 0)
0x26d: Pop(1); Push((bool) Stack[-8] > Stack[-1])
0x26e: IF (Stack[-1] == 0) GOTO 0x270; Pop(1)

0x26f: Stack[-1] = (bool) 0
0x270: IF (Stack[-1] == 0) GOTO 0x273; Pop(1)

0x271: Stack[-7] = Stack[-5]
0x272: Stack[-6] = (int) 0
0x273: GOTO 0x282

0x274: Push("disease")
0x275: @@ GetProperty(Stack[-2], Stack[-1])
0x276: Pop(1)
0x277: PushEmpty(bool)
0x278: Stack[-1] = (bool) 1
0x279: Push((int) -1)
0x27a: Pop(1); Push((bool) Stack[-9] == Stack[-1])
0x27b: IF (Stack[-1] == 0) GOTO 0x27f; Pop(1)

0x27c: Pop(0); Push((bool) Stack[-2] < Stack[-7])
0x27d: IF (Stack[-1] == 0) GOTO 0x27f; Pop(1)

0x27e: Stack[-1] = (bool) 0
0x27f: IF (Stack[-1] == 0) GOTO 0x282; Pop(1)

0x280: Stack[-7] = Stack[-5]
0x281: Stack[-6] = Stack[-1]
0x282: Stack[-4] = 0
0x283: Push((int) 1)
0x284: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x285: GOTO 0x256

0x286: Push((int) -1)
0x287: Pop(1); Push((bool) Stack[-8] != Stack[-1])
0x288: IF (Stack[-1] == 0) GOTO 0x28d; Pop(1)

0x289: Push((int) 1)
0x28a: Push((int) 2)
0x28b: @@ RemoveItem(Stack[-9], Stack[-2], Stack[-1])
0x28c: Pop(2)
0x28d: Return(); Pop(16)

0x28e: PushEmpty(int, int, int, object, int, int, int, int, object, int)
0x28f: @@ size(Stack[-5])
0x290: Pop(0)
0x291: Stack[-4] = (int) 0
0x292: Pop(0); Push((bool) Stack[-4] < Stack[-5])
0x293: IF (Stack[-1] == 0) GOTO 0x2ac; Pop(1)

0x294: @@ get(Stack[-3], Stack[-4])
0x295: Pop(0)
0x296: Push(Stack[-3])
0x297: IF (Stack[-1] == 0) GOTO 0x2a9; Pop(1)

0x298: @@ get(Stack[-2], Stack[-4])
0x299: Pop(0)
0x29a: Stack[-1] = (int) 0
0x29b: Pop(0); Push((bool) Stack[-1] < Stack[-3])
0x29c: IF (Stack[-1] == 0) GOTO 0x2a8; Pop(1)

0x29d: PushEmpty(int)
0x29e: PushEmpty(int, object)
0x29f: Stack[-1] = Stack[-5]
0x2a0: Call2 0x31b

0x2a1: Stack[-3] = Stack[-2]
0x2a2: Pop(2)
0x2a3: Call2 0x250

0x2a4: Pop(1)
0x2a5: Push((int) 1)
0x2a6: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x2a7: GOTO 0x29b

0x2a8: Stack[-2] = 0
0x2a9: Push((int) 1)
0x2aa: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x2ab: GOTO 0x292

0x2ac: Return(); Pop(10)

0x2ad: PushEmpty(float, float)
0x2ae: PushEmpty(float)
0x2af: Call2 0x165

0x2b0: Stack[-2] = Stack[-1]
0x2b1: Pop(1)
0x2b2: Push((float)0.001)
0x2b3: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x2b4: IF (Stack[-1] == 0) GOTO 0x2b6; Pop(1)

0x2b5: Stack[-1] = (int) 0
0x2b6: Push("Do ")
0x2b7: Pop(1); Push(Stack[-1] + Stack[-2]);
0x2b8: @ Trace(Stack[-1])
0x2b9: Pop(1)
0x2ba: Push("agony")
0x2bb: @@ SetProperty(Stack[-1], Stack[-2])
0x2bc: Pop(1)
0x2bd: PushEmpty()
0x2be: Call2 0x28e

0x2bf: Pop(0)
0x2c0: @ DestroyWindow()
0x2c1: Pop(0)
0x2c2: Return(); Pop(2)

0x2c3: PushEmpty(int, int, int, int)
0x2c4: @@ size(Stack[-2])
0x2c5: Pop(0)
0x2c6: Stack[-1] = (int) 0
0x2c7: Pop(0); Push((bool) Stack[-1] < Stack[-2])
0x2c8: IF (Stack[-1] == 0) GOTO 0x2cf; Pop(1)

0x2c9: Push((int) 0)
0x2ca: @@ set(Stack[-2], Stack[-1])
0x2cb: Pop(1)
0x2cc: Push((int) 1)
0x2cd: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x2ce: GOTO 0x2c7

0x2cf: PushEmpty()
0x2d0: Call2 0x1a0

0x2d1: Pop(0)
0x2d2: PushEmpty()
0x2d3: Call2 0x17a

0x2d4: Pop(0)
0x2d5: Return(); Pop(4)

0x2d6: PushEmpty(int, object, int, int, int, object, int, int)
0x2d7: @@ size(Stack[-4])
0x2d8: Pop(0)
0x2d9: Pop(0); Push((bool) Stack[-9] >= Stack[-4])
0x2da: IF (Stack[-1] == 0) GOTO 0x2dc; Pop(1)

0x2db: Return(); Pop(8)

0x2dc: @@ get(Stack[-3], Stack[-9])
0x2dd: Pop(0)
0x2de: @@ get(Stack[-2], Stack[-9])
0x2df: Pop(0)
0x2e0: @@ get(Stack[-1], Stack[-9])
0x2e1: Pop(0)
0x2e2: Pop(0); Push((bool) Stack[-2] <= Stack[-1])
0x2e3: IF (Stack[-1] == 0) GOTO 0x2e5; Pop(1)

0x2e4: Return(); Pop(8)

0x2e5: Push((int) 1)
0x2e6: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x2e7: @@ set(Stack[-9], Stack[-1])
0x2e8: Pop(0)
0x2e9: PushEmpty()
0x2ea: Call2 0x1a0

0x2eb: Pop(0)
0x2ec: PushEmpty()
0x2ed: Call2 0x17a

0x2ee: Pop(0)
0x2ef: Return(); Pop(8)

0x2f0: Stack[-3] = 0
0x2f1: PushEmpty(int, object, int, int, object, int)
0x2f2: @@ size(Stack[-3])
0x2f3: Pop(0)
0x2f4: Pop(0); Push((bool) Stack[-7] >= Stack[-3])
0x2f5: IF (Stack[-1] == 0) GOTO 0x2f7; Pop(1)

0x2f6: Return(); Pop(6)

0x2f7: @@ get(Stack[-2], Stack[-7])
0x2f8: Pop(0)
0x2f9: @@ get(Stack[-1], Stack[-7])
0x2fa: Pop(0)
0x2fb: Push((int) 0)
0x2fc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2fd: IF (Stack[-1] == 0) GOTO 0x2ff; Pop(1)

0x2fe: Return(); Pop(6)

0x2ff: Push((int) 1)
0x300: Stack[-2] = Stack[-2] - Stack[-1]; Pop(1);
0x301: @@ set(Stack[-7], Stack[-1])
0x302: Pop(0)
0x303: PushEmpty()
0x304: Call2 0x1a0

0x305: Pop(0)
0x306: PushEmpty()
0x307: Call2 0x17a

0x308: Pop(0)
0x309: Return(); Pop(6)

0x30a: Stack[-2] = 0
0x30b: PushEmpty()
0x30c: Push((int) 1)
0x30d: Pop(1); Push(Stack[-2] + Stack[-1]);
0x30e: Push((int) 10)
0x30f: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x310: IF (Stack[-1] == 0) GOTO 0x316; Pop(1)

0x311: Push("slot0")
0x312: Push((int) 1)
0x313: Pop(1); Push(Stack[-3] + Stack[-1]);
0x314: Stack[-4] = Stack[-2] + Stack[-1]; Pop(2);
0x315: Return(); Pop(0)

0x316: Push("slot")
0x317: Push((int) 1)
0x318: Pop(1); Push(Stack[-3] + Stack[-1]);
0x319: Stack[-4] = Stack[-2] + Stack[-1]; Pop(2);
0x31a: Return(); Pop(0)

0x31b: PushEmpty(int, int)
0x31c: @@ GetItemID(Stack[-1])
0x31d: Pop(0)
0x31e: Stack[-4] = Stack[-1]
0x31f: Return(); Pop(2)

0x320: PushEmpty(int, int)
0x321: Stack[-1] = (int) 0
0x322: Push((int) 4)
0x323: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x324: IF (Stack[-1] == 0) GOTO 0x330; Pop(1)

0x325: PushEmpty(string, int)
0x326: Stack[-1] = Stack[-3]
0x327: Call2 0x30b

0x328: Pop(1)
0x329: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x32a: IF (Stack[-1] == 0) GOTO 0x32d; Pop(1)

0x32b: Stack[-5] = Stack[-1]
0x32c: Return(); Pop(2)

0x32d: Push((int) 1)
0x32e: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x32f: GOTO 0x322

0x330: Stack[-5] = (int) -1
0x331: Return(); Pop(2)

