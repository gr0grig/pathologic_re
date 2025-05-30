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
	GTASK_0 Vars = (object, object, object, object, object, object, float) Params = 0
		EVENT_100 Op = 0x74 Vars = (int)
		EVENT_200 Op = 0xcb Vars = (int, string, object)


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
0x15: Call 0x36

0x16: Pop(0)
0x17: PushEmpty()
0x18: Call 0x96

0x19: Pop(0)
0x1a: PushEmpty()
0x1b: Call 0x8d

0x1c: Pop(0)
0x1d: @ ProcessEvents()
0x1e: Pop(0)
0x1f: Return(); Pop(0)

0x20: PushEmpty(int, int, object, int, int, object)
0x21: @@ size(Stack[-3])
0x22: Pop(0)
0x23: Stack[-2] = (int) 0
0x24: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0x25: IF (Stack[-1] == 0) GOTO 0x34; Pop(1)

0x26: @@ get(Stack[-1], Stack[-2])
0x27: Pop(0)
0x28: PushEmpty(int, object)
0x29: Stack[-1] = Stack[-3]
0x2a: Call 0x1be

0x2b: Pop(1)
0x2c: Pop(1); Push((bool) Stack[-1] == Stack[-8])
0x2d: IF (Stack[-1] == 0) GOTO 0x30; Pop(1)

0x2e: Stack[-8] = (bool) 1
0x2f: Return(); Pop(6)

0x30: Stack[-1] = 0
0x31: Push((int) 1)
0x32: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x33: GOTO 0x24

0x34: Stack[-8] = (bool) 0
0x35: Return(); Pop(6)

0x36: PushEmpty(int, int, object, int, bool, float, int, int, int, object, int, bool, float, int)
0x37: @ CreateObjectVector(Stack[-0])
0x38: Pop(0)
0x39: @ CreateFloatVector(Stack[-1])
0x3a: Pop(0)
0x3b: @ CreateIntVector(Stack[-3])
0x3c: Pop(0)
0x3d: @ CreateIntVector(Stack[-4])
0x3e: Pop(0)
0x3f: Push("player")
0x40: @ FindActor(Stack[-2], Stack[-1])
0x41: Pop(1)
0x42: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x43: IF (Stack[-1] == 0) GOTO 0x47; Pop(1)

0x44: @ DestroyWindow()
0x45: Pop(0)
0x46: Return(); Pop(14)

0x47: Push((int) 2)
0x48: @@ GetItemCount(Stack[-8], Stack[-1])
0x49: Pop(1)
0x4a: Stack[-6] = (int) 0
0x4b: Pop(0); Push((bool) Stack[-6] < Stack[-7])
0x4c: IF (Stack[-1] == 0) GOTO 0x73; Pop(1)

0x4d: Push((int) 2)
0x4e: @@ GetItem(Stack[-6], Stack[-7], Stack[-1])
0x4f: Pop(1)
0x50: PushEmpty(int, object)
0x51: Stack[-1] = Stack[-7]
0x52: Call 0x1be

0x53: Stack[-6] = Stack[-2]
0x54: Pop(2)
0x55: Push("Agony")
0x56: @ HasInvItemProperty(Stack[-4], Stack[-5], Stack[-1])
0x57: Pop(1)
0x58: Pop(0); Push((bool) Stack[-3] == 0)
0x59: IF (Stack[-1] == 0) GOTO 0x5b; Pop(1)

0x5a: GOTO 0x70

0x5b: PushEmpty(bool, int)
0x5c: Stack[-1] = Stack[-6]
0x5d: Call 0x20

0x5e: Pop(1)
0x5f: IF (Stack[-1] == 0) GOTO 0x61; Pop(1)

0x60: GOTO 0x70

0x61: Push("Agony")
0x62: @ GetInvItemProperty(Stack[-3], Stack[-5], Stack[-1])
0x63: Pop(1)
0x64: @@ GetItemCountOfType(Stack[-1], Stack[-4])
0x65: Pop(0)
0x66: @@ add(Stack[-5])
0x67: Pop(0)
0x68: @@ add(Stack[-2])
0x69: Pop(0)
0x6a: @@ add(Stack[-1])
0x6b: Pop(0)
0x6c: Push((int) 0)
0x6d: @@ add(Stack[-1])
0x6e: Pop(1)
0x6f: Stack[-5] = 0
0x70: Push((int) 1)
0x71: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x72: GOTO 0x4b

0x73: Return(); Pop(14)

0x74: PushEmpty()
0x75: @ DestroyWindow()
0x76: Pop(0)
0x77: Return(); Pop(0)

0x78: PushEmpty(float, int, int, object, float, int, float, int, int, object, float, int)
0x79: Stack[-6] = Stack[6 + Tasks[-1].StackPointer]
0x7a: @@ size(Stack[-5])
0x7b: Pop(0)
0x7c: Stack[-4] = (int) 0
0x7d: Pop(0); Push((bool) Stack[-4] < Stack[-5])
0x7e: IF (Stack[-1] == 0) GOTO 0x8b; Pop(1)

0x7f: @@ get(Stack[-3], Stack[-4])
0x80: Pop(0)
0x81: @@ get(Stack[-2], Stack[-4])
0x82: Pop(0)
0x83: @@ get(Stack[-1], Stack[-4])
0x84: Pop(0)
0x85: Pop(0); Push(Stack[-1] * Stack[-2]);
0x86: Stack[-7] = Stack[-7] - Stack[-1]; Pop(1);
0x87: Stack[-3] = 0
0x88: Push((int) 1)
0x89: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x8a: GOTO 0x7d

0x8b: Stack[-13] = Stack[-6]
0x8c: Return(); Pop(12)

0x8d: Push((int) 100)
0x8e: PushEmpty(float)
0x8f: Call 0x78

0x90: Pop(0)
0x91: Pop(2); Push(Stack[-2] * Stack[-1]);
0x92: Push("level")
0x93: @ SendMessage(Stack[-2], Stack[-1])
0x94: Pop(2)
0x95: Return(); Pop(0)

0x96: PushEmpty(int, int, object, int, int, int, int, object, int, int)
0x97: @@ size(Stack[-5])
0x98: Pop(0)
0x99: Stack[-4] = (int) 0
0x9a: Push((int) 6)
0x9b: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x9c: IF (Stack[-1] == 0) GOTO 0xca; Pop(1)

0x9d: Pop(0); Push((bool) Stack[-4] < Stack[-5])
0x9e: IF (Stack[-1] == 0) GOTO 0xc0; Pop(1)

0x9f: @@ get(Stack[-3], Stack[-4])
0xa0: Pop(0)
0xa1: @@ get(Stack[-2], Stack[-4])
0xa2: Pop(0)
0xa3: @@ get(Stack[-1], Stack[-4])
0xa4: Pop(0)
0xa5: Push(Stack[-2])
0xa6: IF (Stack[-1] == 0) GOTO 0xaf; Pop(1)

0xa7: Push((int) 16384)
0xa8: PushEmpty(string, int)
0xa9: Stack[-1] = Stack[-7]
0xaa: Call 0x1ae

0xab: Pop(1)
0xac: @ SendMessage(Stack[-2], Stack[-1], Stack[-5])
0xad: Pop(2)
0xae: GOTO 0xb6

0xaf: Push((int) 0)
0xb0: PushEmpty(string, int)
0xb1: Stack[-1] = Stack[-7]
0xb2: Call 0x1ae

0xb3: Pop(1)
0xb4: @ SendMessage(Stack[-2], Stack[-1], Stack[-5])
0xb5: Pop(2)
0xb6: Push((int) 65536)
0xb7: Pop(1); Push(Stack[-3] | Stack[-1]);
0xb8: PushEmpty(string, int)
0xb9: Stack[-1] = Stack[-7]
0xba: Call 0x1ae

0xbb: Pop(1)
0xbc: @ SendMessage(Stack[-2], Stack[-1])
0xbd: Pop(2)
0xbe: Stack[-3] = 0
0xbf: GOTO 0xc7

0xc0: Push((int) 32768)
0xc1: PushEmpty(string, int)
0xc2: Stack[-1] = Stack[-7]
0xc3: Call 0x1ae

0xc4: Pop(1)
0xc5: @ SendMessage(Stack[-2], Stack[-1])
0xc6: Pop(2)
0xc7: Push((int) 1)
0xc8: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0xc9: GOTO 0x9a

0xca: Return(); Pop(10)

0xcb: PushEmpty(int, int)
0xcc: Push("ok")
0xcd: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0xce: IF (Stack[-1] == 0) GOTO 0xd3; Pop(1)

0xcf: PushEmpty()
0xd0: Call 0x150

0xd1: Pop(0)
0xd2: GOTO 0xf2

0xd3: Push("cancel")
0xd4: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0xd5: IF (Stack[-1] == 0) GOTO 0xda; Pop(1)

0xd6: PushEmpty()
0xd7: Call 0x166

0xd8: Pop(0)
0xd9: GOTO 0xf2

0xda: PushEmpty(int, int, string)
0xdb: Stack[-2] = Stack[-8]
0xdc: Stack[-1] = Stack[-7]
0xdd: Call 0x1c3

0xde: Stack[-4] = Stack[-3]
0xdf: Pop(3)
0xe0: Push((int) -1)
0xe1: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0xe2: IF (Stack[-1] == 0) GOTO 0xf2; Pop(1)

0xe3: Push((int) 0)
0xe4: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0xe5: IF (Stack[-1] == 0) GOTO 0xeb; Pop(1)

0xe6: PushEmpty(int)
0xe7: Stack[-1] = Stack[-2]
0xe8: Call 0x179

0xe9: Pop(1)
0xea: GOTO 0xf2

0xeb: Push((int) 1)
0xec: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0xed: IF (Stack[-1] == 0) GOTO 0xf2; Pop(1)

0xee: PushEmpty(int)
0xef: Stack[-1] = Stack[-2]
0xf0: Call 0x194

0xf1: Pop(1)
0xf2: Return(); Pop(2)

0xf3: PushEmpty(int, int, float, int, object, int, bool, float, int, int, float, int, object, int, bool, float)
0xf4: Push((int) 2)
0xf5: @@ GetItemCount(Stack[-9], Stack[-1])
0xf6: Pop(1)
0xf7: Stack[-7] = (int) -1
0xf8: Stack[-5] = (int) 0
0xf9: Pop(0); Push((bool) Stack[-5] < Stack[-8])
0xfa: IF (Stack[-1] == 0) GOTO 0x129; Pop(1)

0xfb: Push((int) 2)
0xfc: @@ GetItem(Stack[-5], Stack[-6], Stack[-1])
0xfd: Pop(1)
0xfe: PushEmpty(int, object)
0xff: Stack[-1] = Stack[-6]
0x100: Call 0x1be

0x101: Stack[-5] = Stack[-2]
0x102: Pop(2)
0x103: Pop(0); Push((bool) Stack[-3] == Stack[-17])
0x104: IF (Stack[-1] == 0) GOTO 0x125; Pop(1)

0x105: Push("disease")
0x106: @@ HasProperty(Stack[-3], Stack[-1])
0x107: Pop(1)
0x108: Pop(0); Push((bool) Stack[-2] == 0)
0x109: IF (Stack[-1] == 0) GOTO 0x117; Pop(1)

0x10a: PushEmpty(bool)
0x10b: Stack[-1] = (bool) 1
0x10c: Push((int) -1)
0x10d: Pop(1); Push((bool) Stack[-9] == Stack[-1])
0x10e: IF (Stack[-1] == 0) GOTO 0x113; Pop(1)

0x10f: Push((int) 0)
0x110: Pop(1); Push((bool) Stack[-8] > Stack[-1])
0x111: IF (Stack[-1] == 0) GOTO 0x113; Pop(1)

0x112: Stack[-1] = (bool) 0
0x113: IF (Stack[-1] == 0) GOTO 0x116; Pop(1)

0x114: Stack[-7] = Stack[-5]
0x115: Stack[-6] = (int) 0
0x116: GOTO 0x125

0x117: Push("disease")
0x118: @@ GetProperty(Stack[-2], Stack[-1])
0x119: Pop(1)
0x11a: PushEmpty(bool)
0x11b: Stack[-1] = (bool) 1
0x11c: Push((int) -1)
0x11d: Pop(1); Push((bool) Stack[-9] == Stack[-1])
0x11e: IF (Stack[-1] == 0) GOTO 0x122; Pop(1)

0x11f: Pop(0); Push((bool) Stack[-2] < Stack[-7])
0x120: IF (Stack[-1] == 0) GOTO 0x122; Pop(1)

0x121: Stack[-1] = (bool) 0
0x122: IF (Stack[-1] == 0) GOTO 0x125; Pop(1)

0x123: Stack[-7] = Stack[-5]
0x124: Stack[-6] = Stack[-1]
0x125: Stack[-4] = 0
0x126: Push((int) 1)
0x127: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x128: GOTO 0xf9

0x129: Push((int) -1)
0x12a: Pop(1); Push((bool) Stack[-8] != Stack[-1])
0x12b: IF (Stack[-1] == 0) GOTO 0x130; Pop(1)

0x12c: Push((int) 1)
0x12d: Push((int) 2)
0x12e: @@ RemoveItem(Stack[-9], Stack[-2], Stack[-1])
0x12f: Pop(2)
0x130: Return(); Pop(16)

0x131: PushEmpty(int, int, int, object, int, int, int, int, object, int)
0x132: @@ size(Stack[-5])
0x133: Pop(0)
0x134: Stack[-4] = (int) 0
0x135: Pop(0); Push((bool) Stack[-4] < Stack[-5])
0x136: IF (Stack[-1] == 0) GOTO 0x14f; Pop(1)

0x137: @@ get(Stack[-3], Stack[-4])
0x138: Pop(0)
0x139: Push(Stack[-3])
0x13a: IF (Stack[-1] == 0) GOTO 0x14c; Pop(1)

0x13b: @@ get(Stack[-2], Stack[-4])
0x13c: Pop(0)
0x13d: Stack[-1] = (int) 0
0x13e: Pop(0); Push((bool) Stack[-1] < Stack[-3])
0x13f: IF (Stack[-1] == 0) GOTO 0x14b; Pop(1)

0x140: PushEmpty(int)
0x141: PushEmpty(int, object)
0x142: Stack[-1] = Stack[-5]
0x143: Call 0x1be

0x144: Stack[-3] = Stack[-2]
0x145: Pop(2)
0x146: Call 0xf3

0x147: Pop(1)
0x148: Push((int) 1)
0x149: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x14a: GOTO 0x13e

0x14b: Stack[-2] = 0
0x14c: Push((int) 1)
0x14d: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x14e: GOTO 0x135

0x14f: Return(); Pop(10)

0x150: PushEmpty(float, float)
0x151: PushEmpty(float)
0x152: Call 0x78

0x153: Stack[-2] = Stack[-1]
0x154: Pop(1)
0x155: Push((float)0.001)
0x156: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x157: IF (Stack[-1] == 0) GOTO 0x159; Pop(1)

0x158: Stack[-1] = (int) 0
0x159: Push("Do ")
0x15a: Pop(1); Push(Stack[-1] + Stack[-2]);
0x15b: @ Trace(Stack[-1])
0x15c: Pop(1)
0x15d: Push("agony")
0x15e: @@ SetProperty(Stack[-1], Stack[-2])
0x15f: Pop(1)
0x160: PushEmpty()
0x161: Call 0x131

0x162: Pop(0)
0x163: @ DestroyWindow()
0x164: Pop(0)
0x165: Return(); Pop(2)

0x166: PushEmpty(int, int, int, int)
0x167: @@ size(Stack[-2])
0x168: Pop(0)
0x169: Stack[-1] = (int) 0
0x16a: Pop(0); Push((bool) Stack[-1] < Stack[-2])
0x16b: IF (Stack[-1] == 0) GOTO 0x172; Pop(1)

0x16c: Push((int) 0)
0x16d: @@ set(Stack[-2], Stack[-1])
0x16e: Pop(1)
0x16f: Push((int) 1)
0x170: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x171: GOTO 0x16a

0x172: PushEmpty()
0x173: Call 0x96

0x174: Pop(0)
0x175: PushEmpty()
0x176: Call 0x8d

0x177: Pop(0)
0x178: Return(); Pop(4)

0x179: PushEmpty(int, object, int, int, int, object, int, int)
0x17a: @@ size(Stack[-4])
0x17b: Pop(0)
0x17c: Pop(0); Push((bool) Stack[-9] >= Stack[-4])
0x17d: IF (Stack[-1] == 0) GOTO 0x17f; Pop(1)

0x17e: Return(); Pop(8)

0x17f: @@ get(Stack[-3], Stack[-9])
0x180: Pop(0)
0x181: @@ get(Stack[-2], Stack[-9])
0x182: Pop(0)
0x183: @@ get(Stack[-1], Stack[-9])
0x184: Pop(0)
0x185: Pop(0); Push((bool) Stack[-2] <= Stack[-1])
0x186: IF (Stack[-1] == 0) GOTO 0x188; Pop(1)

0x187: Return(); Pop(8)

0x188: Push((int) 1)
0x189: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x18a: @@ set(Stack[-9], Stack[-1])
0x18b: Pop(0)
0x18c: PushEmpty()
0x18d: Call 0x96

0x18e: Pop(0)
0x18f: PushEmpty()
0x190: Call 0x8d

0x191: Pop(0)
0x192: Return(); Pop(8)

0x193: Stack[-3] = 0
0x194: PushEmpty(int, object, int, int, object, int)
0x195: @@ size(Stack[-3])
0x196: Pop(0)
0x197: Pop(0); Push((bool) Stack[-7] >= Stack[-3])
0x198: IF (Stack[-1] == 0) GOTO 0x19a; Pop(1)

0x199: Return(); Pop(6)

0x19a: @@ get(Stack[-2], Stack[-7])
0x19b: Pop(0)
0x19c: @@ get(Stack[-1], Stack[-7])
0x19d: Pop(0)
0x19e: Push((int) 0)
0x19f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1a0: IF (Stack[-1] == 0) GOTO 0x1a2; Pop(1)

0x1a1: Return(); Pop(6)

0x1a2: Push((int) 1)
0x1a3: Stack[-2] = Stack[-2] - Stack[-1]; Pop(1);
0x1a4: @@ set(Stack[-7], Stack[-1])
0x1a5: Pop(0)
0x1a6: PushEmpty()
0x1a7: Call 0x96

0x1a8: Pop(0)
0x1a9: PushEmpty()
0x1aa: Call 0x8d

0x1ab: Pop(0)
0x1ac: Return(); Pop(6)

0x1ad: Stack[-2] = 0
0x1ae: PushEmpty()
0x1af: Push((int) 1)
0x1b0: Pop(1); Push(Stack[-2] + Stack[-1]);
0x1b1: Push((int) 10)
0x1b2: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x1b3: IF (Stack[-1] == 0) GOTO 0x1b9; Pop(1)

0x1b4: Push("slot0")
0x1b5: Push((int) 1)
0x1b6: Pop(1); Push(Stack[-3] + Stack[-1]);
0x1b7: Stack[-4] = Stack[-2] + Stack[-1]; Pop(2);
0x1b8: Return(); Pop(0)

0x1b9: Push("slot")
0x1ba: Push((int) 1)
0x1bb: Pop(1); Push(Stack[-3] + Stack[-1]);
0x1bc: Stack[-4] = Stack[-2] + Stack[-1]; Pop(2);
0x1bd: Return(); Pop(0)

0x1be: PushEmpty(int, int)
0x1bf: @@ GetItemID(Stack[-1])
0x1c0: Pop(0)
0x1c1: Stack[-4] = Stack[-1]
0x1c2: Return(); Pop(2)

0x1c3: PushEmpty(int, int)
0x1c4: Stack[-1] = (int) 0
0x1c5: Push((int) 6)
0x1c6: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x1c7: IF (Stack[-1] == 0) GOTO 0x1d3; Pop(1)

0x1c8: PushEmpty(string, int)
0x1c9: Stack[-1] = Stack[-3]
0x1ca: Call 0x1ae

0x1cb: Pop(1)
0x1cc: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1cd: IF (Stack[-1] == 0) GOTO 0x1d0; Pop(1)

0x1ce: Stack[-5] = Stack[-1]
0x1cf: Return(); Pop(2)

0x1d0: Push((int) 1)
0x1d1: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x1d2: GOTO 0x1c5

0x1d3: Stack[-5] = (int) -1
0x1d4: Return(); Pop(2)

