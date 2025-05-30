GlobalVarCount = 0

Strings:
	player
	inventory_base.xml
	GetItemID
	Microscope
	GetItem
	video
	microscope_
	add
	default
	button_weapon
	button_clothes
	button_medcine
	button_food
	button_other
	button_detector
	button_anticeptic
	noinv_drop
	GetItemCount
	money
	GetProperty
	GetItemAmount
	slot0
	slot
	Compare

Import:
	FindActor (2 args)
	DestroyWindow (0 args)
	CreateWindow (3 args)
	HasInvItemProperty (3 args)
	SendMessage (2 args)
	GetInvItemProperty (3 args)
	SetVariable (2 args)
	CreateStringVector (1 args)
	SendMessage (3 args)
	SetCursor (1 args)
	ShowCursor (0 args)
	CaptureKeyboard (0 args)
	SetOwnerDraw (1 args)
	SetNeedUpdate (1 args)
	ProcessEvents (0 args)
	GetVariable (2 args)
	GetInvItemName (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (int, object, object, object) Params = 0
		EVENT_100 Op = 0xc0 Vars = (int)
		EVENT_102 Op = 0xc4 Vars = (int)
		EVENT_101 Op = 0xca Vars = (int)
		EVENT_1 Op = 0x16d Vars = (float)
		EVENT_200 Op = 0x179 Vars = (int, string, object)


0x0: Push("player")
0x1: @ FindActor(Stack[-3], Stack[-1])
0x2: Pop(1)
0x3: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x4: IF (Stack[-1] == 0) GOTO 0x8; Pop(1)

0x5: @ DestroyWindow()
0x6: Pop(0)
0x7: Return(); Pop(0)

0x8: Push("inventory_base.xml")
0x9: Push((bool) 0)
0xa: @ CreateWindow(Stack[-2], Stack[-1], Stack[-1])
0xb: Pop(2)
0xc: PushEmpty(int)
0xd: Stack[-1] = (int) 4
0xe: Call2 0x6e

0xf: Pop(1)
0x10: Return(); Pop(0)

0x11: Stack[-1] = Stack[3 + Tasks[-1].StackPointer]
0x12: Return(); Pop(0)

0x13: PushEmpty()
0x14: Stack[-4] = (bool) 0
0x15: Return(); Pop(0)

0x16: Return(); Pop(0)

0x17: PushEmpty(int, bool, int, bool)
0x18: @@ GetItemID(Stack[-2])
0x19: Pop(0)
0x1a: Push("Microscope")
0x1b: @ HasInvItemProperty(Stack[-2], Stack[-3], Stack[-1])
0x1c: Pop(1)
0x1d: Stack[-6] = !Stack[-1]; Pop(0);
0x1e: Return(); Pop(4)

0x1f: PushEmpty(object, object)
0x20: PushEmpty(object)
0x21: Call2 0x11

0x22: Pop(0)
0x23: PushEmpty(object)
0x24: Call2 0x11

0x25: Pop(1)
0x26: PushEmpty(object)
0x27: Call2 0x11

0x28: Pop(1)
0x29: PushEmpty(object)
0x2a: Call2 0x11

0x2b: Pop(1)
0x2c: @@ GetItem(Stack[-2], Stack[-5], Stack[-4])
0x2d: Pop(1)
0x2e: PushEmpty(bool, object, object)
0x2f: Stack[-2] = Stack[2 + Tasks[-1].StackPointer]
0x30: Stack[-1] = Stack[-4]
0x31: Call2 0x2cb

0x32: Stack[-8] = Stack[-3]
0x33: Pop(3)
0x34: Return(); Pop(2)

0x35: Stack[-1] = 0
0x36: Return(); Pop(0)

0x37: PushEmpty()
0x38: Push(Stack[-1])
0x39: IF (Stack[-1] == 0) GOTO 0x40; Pop(1)

0x3a: PushEmpty(int)
0x3b: Stack[-1] = Stack[-3]
0x3c: Call2 0x42

0x3d: Pop(1)
0x3e: Stack[-3] = (bool) 1
0x3f: Return(); Pop(0)

0x40: Stack[-3] = (bool) 0
0x41: Return(); Pop(0)

0x42: PushEmpty(object, object, bool, int, object, object, bool, int)
0x43: PushEmpty(object)
0x44: Call2 0x11

0x45: Stack[-5] = Stack[-1]
0x46: Pop(1)
0x47: @@ GetItem(Stack[-3], Stack[-9], Stack[-0])
0x48: Pop(0)
0x49: PushEmpty(bool, object, object)
0x4a: Stack[-2] = Stack[2 + Tasks[-1].StackPointer]
0x4b: Stack[-1] = Stack[-6]
0x4c: Call2 0x2cb

0x4d: Stack[-5] = Stack[-3]
0x4e: Pop(3)
0x4f: Push(Stack[-2])
0x50: IF (Stack[-1] == 0) GOTO 0x57; Pop(1)

0x51: Stack[2 + Tasks[-1].StackPointer] = 0
0x52: Push((int) 0)
0x53: Push("video")
0x54: @ SendMessage(Stack[-2], Stack[-1])
0x55: Pop(2)
0x56: GOTO 0x6b

0x57: PushEmpty(int, object)
0x58: Stack[-1] = Stack[-5]
0x59: Call2 0x2bc

0x5a: Pop(1)
0x5b: Push("Microscope")
0x5c: @ GetInvItemProperty(Stack[-3], Stack[-2], Stack[-1])
0x5d: Pop(2)
0x5e: Push("video")
0x5f: @ SendMessage(Stack[-2], Stack[-1])
0x60: Pop(1)
0x61: Push("microscope_")
0x62: PushEmpty(string, object)
0x63: Stack[-1] = Stack[-6]
0x64: Call2 0x2c1

0x65: Pop(1)
0x66: Pop(2); Push(Stack[-2] + Stack[-1]);
0x67: Push((int) 1)
0x68: @ SetVariable(Stack[-2], Stack[-1])
0x69: Pop(2)
0x6a: Stack[2 + Tasks[-1].StackPointer] = Stack[-3]
0x6b: Return(); Pop(8)

0x6c: Stack[-3] = 0
0x6d: Stack[-4] = 0
0x6e: PushEmpty(int, object, int, object)
0x6f: Stack[0 + Tasks[-1].StackPointer] = (int)-1
0x70: PushEmpty(int)
0x71: Stack[-1] = Stack[-6]
0x72: Call2 0x1f7

0x73: Pop(1)
0x74: PushEmpty(int)
0x75: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x76: Call2 0x255

0x77: Pop(1)
0x78: PushEmpty()
0x79: Call2 0x210

0x7a: Pop(0)
0x7b: Stack[-2] = (int) 0
0x7c: Push((int) 12)
0x7d: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x7e: IF (Stack[-1] == 0) GOTO 0xa2; Pop(1)

0x7f: @ CreateStringVector(Stack[-1])
0x80: Pop(0)
0x81: PushEmpty(string, int)
0x82: Push((int) 12)
0x83: Pop(1); Push(Stack[-5] + Stack[-1]);
0x84: Push((int) 1)
0x85: Pop(2); Push(Stack[-2] - Stack[-1]);
0x86: Push((int) 12)
0x87: Stack[-3] = Stack[-2] % Stack[-1]; Pop(2);
0x88: Call2 0x2ac

0x89: Pop(1)
0x8a: @@ add(Stack[-1])
0x8b: Pop(1)
0x8c: PushEmpty(string, int)
0x8d: Push((int) 12)
0x8e: Pop(1); Push(Stack[-5] + Stack[-1]);
0x8f: Push((int) 1)
0x90: Pop(2); Push(Stack[-2] + Stack[-1]);
0x91: Push((int) 12)
0x92: Stack[-3] = Stack[-2] % Stack[-1]; Pop(2);
0x93: Call2 0x2ac

0x94: Pop(1)
0x95: @@ add(Stack[-1])
0x96: Pop(1)
0x97: Push((int) -1)
0x98: PushEmpty(string, int)
0x99: Stack[-1] = Stack[-5]
0x9a: Call2 0x2ac

0x9b: Pop(1)
0x9c: @ SendMessage(Stack[-2], Stack[-1], Stack[-3])
0x9d: Pop(2)
0x9e: Stack[-1] = 0
0x9f: Push((int) 1)
0xa0: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0xa1: GOTO 0x7c

0xa2: PushEmpty()
0xa3: Call2 0xb8

0xa4: Pop(0)
0xa5: Push("default")
0xa6: @ SetCursor(Stack[-1])
0xa7: Pop(1)
0xa8: @ ShowCursor()
0xa9: Pop(0)
0xaa: @ CaptureKeyboard()
0xab: Pop(0)
0xac: Push((bool) 0)
0xad: @ SetOwnerDraw(Stack[-1])
0xae: Pop(1)
0xaf: Push((bool) 1)
0xb0: @ SetNeedUpdate(Stack[-1])
0xb1: Pop(1)
0xb2: PushEmpty()
0xb3: Call2 0x36

0xb4: Pop(0)
0xb5: @ ProcessEvents()
0xb6: Pop(0)
0xb7: Return(); Pop(4)

0xb8: Push((int) -6)
0xb9: PushEmpty(string, int)
0xba: Stack[-1] = (int) 0
0xbb: Call2 0x2ac

0xbc: Pop(1)
0xbd: @ SendMessage(Stack[-2], Stack[-1])
0xbe: Pop(2)
0xbf: Return(); Pop(0)

0xc0: PushEmpty()
0xc1: @ DestroyWindow()
0xc2: Pop(0)
0xc3: Return(); Pop(0)

0xc4: PushEmpty()
0xc5: PushEmpty(int)
0xc6: Stack[-1] = Stack[-2]
0xc7: Call2 0x149

0xc8: Pop(1)
0xc9: Return(); Pop(0)

0xca: PushEmpty()
0xcb: Push((int) 266)
0xcc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xcd: IF (Stack[-1] == 0) GOTO 0xf6; Pop(1)

0xce: Push((int) 0)
0xcf: Pop(1); Push((bool) Stack[0 + Tasks[-1].StackPointer] == Stack[-1])
0xd0: IF (Stack[-1] == 0) GOTO 0xd6; Pop(1)

0xd1: PushEmpty(int)
0xd2: Stack[-1] = (int) 1
0xd3: Call2 0x1f7

0xd4: Pop(1)
0xd5: GOTO 0xf5

0xd6: Push((int) 1)
0xd7: Pop(1); Push((bool) Stack[0 + Tasks[-1].StackPointer] == Stack[-1])
0xd8: IF (Stack[-1] == 0) GOTO 0xde; Pop(1)

0xd9: PushEmpty(int)
0xda: Stack[-1] = (int) 2
0xdb: Call2 0x1f7

0xdc: Pop(1)
0xdd: GOTO 0xf5

0xde: Push((int) 2)
0xdf: Pop(1); Push((bool) Stack[0 + Tasks[-1].StackPointer] == Stack[-1])
0xe0: IF (Stack[-1] == 0) GOTO 0xe6; Pop(1)

0xe1: PushEmpty(int)
0xe2: Stack[-1] = (int) 3
0xe3: Call2 0x1f7

0xe4: Pop(1)
0xe5: GOTO 0xf5

0xe6: Push((int) 3)
0xe7: Pop(1); Push((bool) Stack[0 + Tasks[-1].StackPointer] == Stack[-1])
0xe8: IF (Stack[-1] == 0) GOTO 0xee; Pop(1)

0xe9: PushEmpty(int)
0xea: Stack[-1] = (int) 4
0xeb: Call2 0x1f7

0xec: Pop(1)
0xed: GOTO 0xf5

0xee: Push((int) 4)
0xef: Pop(1); Push((bool) Stack[0 + Tasks[-1].StackPointer] == Stack[-1])
0xf0: IF (Stack[-1] == 0) GOTO 0xf5; Pop(1)

0xf1: PushEmpty(int)
0xf2: Stack[-1] = (int) 0
0xf3: Call2 0x1f7

0xf4: Pop(1)
0xf5: GOTO 0x120

0xf6: Push((int) 265)
0xf7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf8: IF (Stack[-1] == 0) GOTO 0x120; Pop(1)

0xf9: Push((int) 0)
0xfa: Pop(1); Push((bool) Stack[0 + Tasks[-1].StackPointer] == Stack[-1])
0xfb: IF (Stack[-1] == 0) GOTO 0x101; Pop(1)

0xfc: PushEmpty(int)
0xfd: Stack[-1] = (int) 4
0xfe: Call2 0x1f7

0xff: Pop(1)
0x100: GOTO 0x120

0x101: Push((int) 1)
0x102: Pop(1); Push((bool) Stack[0 + Tasks[-1].StackPointer] == Stack[-1])
0x103: IF (Stack[-1] == 0) GOTO 0x109; Pop(1)

0x104: PushEmpty(int)
0x105: Stack[-1] = (int) 0
0x106: Call2 0x1f7

0x107: Pop(1)
0x108: GOTO 0x120

0x109: Push((int) 2)
0x10a: Pop(1); Push((bool) Stack[0 + Tasks[-1].StackPointer] == Stack[-1])
0x10b: IF (Stack[-1] == 0) GOTO 0x111; Pop(1)

0x10c: PushEmpty(int)
0x10d: Stack[-1] = (int) 1
0x10e: Call2 0x1f7

0x10f: Pop(1)
0x110: GOTO 0x120

0x111: Push((int) 3)
0x112: Pop(1); Push((bool) Stack[0 + Tasks[-1].StackPointer] == Stack[-1])
0x113: IF (Stack[-1] == 0) GOTO 0x119; Pop(1)

0x114: PushEmpty(int)
0x115: Stack[-1] = (int) 2
0x116: Call2 0x1f7

0x117: Pop(1)
0x118: GOTO 0x120

0x119: Push((int) 4)
0x11a: Pop(1); Push((bool) Stack[0 + Tasks[-1].StackPointer] == Stack[-1])
0x11b: IF (Stack[-1] == 0) GOTO 0x120; Pop(1)

0x11c: PushEmpty(int)
0x11d: Stack[-1] = (int) 3
0x11e: Call2 0x1f7

0x11f: Pop(1)
0x120: PushEmpty(int)
0x121: Stack[-1] = Stack[-2]
0x122: Call2 0x125

0x123: Pop(1)
0x124: Return(); Pop(0)

0x125: PushEmpty(int, int, int, int)
0x126: Push((int) 269)
0x127: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x128: IF (Stack[-1] == 0) GOTO 0x137; Pop(1)

0x129: Stack[-2] = (int) 0
0x12a: Push((int) 12)
0x12b: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x12c: IF (Stack[-1] == 0) GOTO 0x137; Pop(1)

0x12d: Push((int) -2)
0x12e: PushEmpty(string, int)
0x12f: Stack[-1] = Stack[-5]
0x130: Call2 0x2ac

0x131: Pop(1)
0x132: @ SendMessage(Stack[-2], Stack[-1])
0x133: Pop(2)
0x134: Push((int) 1)
0x135: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x136: GOTO 0x12a

0x137: Push((int) 270)
0x138: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x139: IF (Stack[-1] == 0) GOTO 0x148; Pop(1)

0x13a: Stack[-1] = (int) 0
0x13b: Push((int) 12)
0x13c: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x13d: IF (Stack[-1] == 0) GOTO 0x148; Pop(1)

0x13e: Push((int) -3)
0x13f: PushEmpty(string, int)
0x140: Stack[-1] = Stack[-4]
0x141: Call2 0x2ac

0x142: Pop(1)
0x143: @ SendMessage(Stack[-2], Stack[-1])
0x144: Pop(2)
0x145: Push((int) 1)
0x146: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x147: GOTO 0x13b

0x148: Return(); Pop(4)

0x149: PushEmpty(int, int, int, int)
0x14a: Push((int) 273)
0x14b: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x14c: IF (Stack[-1] == 0) GOTO 0x15b; Pop(1)

0x14d: Stack[-2] = (int) 0
0x14e: Push((int) 12)
0x14f: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x150: IF (Stack[-1] == 0) GOTO 0x15b; Pop(1)

0x151: Push((int) -2)
0x152: PushEmpty(string, int)
0x153: Stack[-1] = Stack[-5]
0x154: Call2 0x2ac

0x155: Pop(1)
0x156: @ SendMessage(Stack[-2], Stack[-1])
0x157: Pop(2)
0x158: Push((int) 1)
0x159: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x15a: GOTO 0x14e

0x15b: Push((int) 271)
0x15c: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x15d: IF (Stack[-1] == 0) GOTO 0x16c; Pop(1)

0x15e: Stack[-1] = (int) 0
0x15f: Push((int) 12)
0x160: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x161: IF (Stack[-1] == 0) GOTO 0x16c; Pop(1)

0x162: Push((int) -3)
0x163: PushEmpty(string, int)
0x164: Stack[-1] = Stack[-4]
0x165: Call2 0x2ac

0x166: Pop(1)
0x167: @ SendMessage(Stack[-2], Stack[-1])
0x168: Pop(2)
0x169: Push((int) 1)
0x16a: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x16b: GOTO 0x15f

0x16c: Return(); Pop(4)

0x16d: PushEmpty()
0x16e: PushEmpty(int)
0x16f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x170: Call2 0x255

0x171: Pop(1)
0x172: PushEmpty()
0x173: Call2 0x210

0x174: Pop(0)
0x175: PushEmpty()
0x176: Call2 0x16

0x177: Pop(0)
0x178: Return(); Pop(0)

0x179: PushEmpty(bool, int, int, object, int, object, bool, int, int, object, int, object)
0x17a: Stack[-6] = (bool) 0
0x17b: Push((int) 0)
0x17c: Pop(1); Push((bool) Stack[-16] < Stack[-1])
0x17d: IF (Stack[-1] == 0) GOTO 0x186; Pop(1)

0x17e: PushEmpty(bool, int, string, object)
0x17f: Stack[-3] = Stack[-19]
0x180: Stack[-2] = Stack[-18]
0x181: Stack[-1] = Stack[-17]
0x182: Call2 0x13

0x183: Stack[-10] = Stack[-4]
0x184: Pop(4)
0x185: Return(); Pop(12)

0x186: Push("button_weapon")
0x187: Pop(1); Push((bool) Stack[-15] == Stack[-1])
0x188: IF (Stack[-1] == 0) GOTO 0x18f; Pop(1)

0x189: PushEmpty(int)
0x18a: Stack[-1] = (int) 0
0x18b: Call2 0x1f7

0x18c: Pop(1)
0x18d: Stack[-6] = (bool) 1
0x18e: GOTO 0x1eb

0x18f: Push("button_clothes")
0x190: Pop(1); Push((bool) Stack[-15] == Stack[-1])
0x191: IF (Stack[-1] == 0) GOTO 0x198; Pop(1)

0x192: PushEmpty(int)
0x193: Stack[-1] = (int) 1
0x194: Call2 0x1f7

0x195: Pop(1)
0x196: Stack[-6] = (bool) 1
0x197: GOTO 0x1eb

0x198: Push("button_medcine")
0x199: Pop(1); Push((bool) Stack[-15] == Stack[-1])
0x19a: IF (Stack[-1] == 0) GOTO 0x1a1; Pop(1)

0x19b: PushEmpty(int)
0x19c: Stack[-1] = (int) 2
0x19d: Call2 0x1f7

0x19e: Pop(1)
0x19f: Stack[-6] = (bool) 1
0x1a0: GOTO 0x1eb

0x1a1: Push("button_food")
0x1a2: Pop(1); Push((bool) Stack[-15] == Stack[-1])
0x1a3: IF (Stack[-1] == 0) GOTO 0x1aa; Pop(1)

0x1a4: PushEmpty(int)
0x1a5: Stack[-1] = (int) 3
0x1a6: Call2 0x1f7

0x1a7: Pop(1)
0x1a8: Stack[-6] = (bool) 1
0x1a9: GOTO 0x1eb

0x1aa: Push("button_other")
0x1ab: Pop(1); Push((bool) Stack[-15] == Stack[-1])
0x1ac: IF (Stack[-1] == 0) GOTO 0x1b3; Pop(1)

0x1ad: PushEmpty(int)
0x1ae: Stack[-1] = (int) 4
0x1af: Call2 0x1f7

0x1b0: Pop(1)
0x1b1: Stack[-6] = (bool) 1
0x1b2: GOTO 0x1eb

0x1b3: Push("button_detector")
0x1b4: Pop(1); Push((bool) Stack[-15] == Stack[-1])
0x1b5: IF (Stack[-1] == 0) GOTO 0x1b7; Pop(1)

0x1b6: GOTO 0x1eb

0x1b7: Push("button_anticeptic")
0x1b8: Pop(1); Push((bool) Stack[-15] == Stack[-1])
0x1b9: IF (Stack[-1] == 0) GOTO 0x1bb; Pop(1)

0x1ba: GOTO 0x1eb

0x1bb: Push((int) 0)
0x1bc: Pop(1); Push((bool) Stack[-16] != Stack[-1])
0x1bd: IF (Stack[-1] == 0) GOTO 0x1c4; Pop(1)

0x1be: Push("noinv_drop")
0x1bf: @ GetVariable(Stack[-1], Stack[-6])
0x1c0: Pop(1)
0x1c1: Push(Stack[-5])
0x1c2: IF (Stack[-1] == 0) GOTO 0x1c4; Pop(1)

0x1c3: Return(); Pop(12)

0x1c4: Stack[-4] = (int) 0
0x1c5: Push((int) 12)
0x1c6: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x1c7: IF (Stack[-1] == 0) GOTO 0x1eb; Pop(1)

0x1c8: PushEmpty(string, int)
0x1c9: Stack[-1] = Stack[-6]
0x1ca: Call2 0x2ac

0x1cb: Pop(1)
0x1cc: Pop(1); Push((bool) Stack[-15] == Stack[-1])
0x1cd: IF (Stack[-1] == 0) GOTO 0x1e8; Pop(1)

0x1ce: PushEmpty(object)
0x1cf: Call2 0x11

0x1d0: Stack[-4] = Stack[-1]
0x1d1: Pop(1)
0x1d2: @@ GetItemCount(Stack[-2], Stack[-0])
0x1d3: Pop(0)
0x1d4: Pop(0); Push((bool) Stack[-2] > Stack[-4])
0x1d5: IF (Stack[-1] == 0) GOTO 0x1e6; Pop(1)

0x1d6: @@ GetItem(Stack[-1], Stack[-4], Stack[-0])
0x1d7: Pop(0)
0x1d8: PushEmpty(bool, object)
0x1d9: Stack[-1] = Stack[-3]
0x1da: Call2 0x17

0x1db: Pop(1)
0x1dc: Pop(1); Push((bool) Stack[-1] == 0)
0x1dd: IF (Stack[-1] == 0) GOTO 0x1e5; Pop(1)

0x1de: PushEmpty(bool, int, bool)
0x1df: Stack[-2] = Stack[-7]
0x1e0: Push((int) 0)
0x1e1: Stack[-2] = Stack[-19] == Stack[-1]; Pop(1);
0x1e2: Call2 0x37

0x1e3: Stack[-9] = Stack[-3]
0x1e4: Pop(3)
0x1e5: Stack[-1] = 0
0x1e6: GOTO 0x1eb

0x1e7: Stack[-3] = 0
0x1e8: Push((int) 1)
0x1e9: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x1ea: GOTO 0x1c5

0x1eb: Pop(0); Push((bool) Stack[-6] == 0)
0x1ec: IF (Stack[-1] == 0) GOTO 0x1f4; Pop(1)

0x1ed: PushEmpty(bool, int, string, object)
0x1ee: Stack[-3] = Stack[-19]
0x1ef: Stack[-2] = Stack[-18]
0x1f0: Stack[-1] = Stack[-17]
0x1f1: Call2 0x13

0x1f2: Stack[-10] = Stack[-4]
0x1f3: Pop(4)
0x1f4: Push(Stack[-6])
0x1f5: IF (Stack[-1] == 0) GOTO 0x1f6; Pop(1)

0x1f6: Return(); Pop(12)

0x1f7: PushEmpty()
0x1f8: Push((int) -1)
0x1f9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1fa: IF (Stack[-1] == 0) GOTO 0x1fc; Pop(1)

0x1fb: Return(); Pop(0)

0x1fc: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == Stack[-1])
0x1fd: IF (Stack[-1] == 0) GOTO 0x1ff; Pop(1)

0x1fe: Return(); Pop(0)

0x1ff: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x200: PushEmpty(int)
0x201: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x202: Call2 0x217

0x203: Pop(1)
0x204: Return(); Pop(0)

0x205: PushEmpty(object, int, object, int)
0x206: PushEmpty(object)
0x207: Call2 0x11

0x208: Stack[-3] = Stack[-1]
0x209: Pop(1)
0x20a: Push("money")
0x20b: @@ GetProperty(Stack[-1], Stack[-2])
0x20c: Pop(1)
0x20d: Stack[-5] = Stack[-1]
0x20e: Return(); Pop(4)

0x20f: Stack[-2] = 0
0x210: PushEmpty(int)
0x211: Call2 0x205

0x212: Pop(0)
0x213: Push("money")
0x214: @ SendMessage(Stack[-2], Stack[-1])
0x215: Pop(2)
0x216: Return(); Pop(0)

0x217: PushEmpty()
0x218: Push((int) 0)
0x219: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x21a: IF (Stack[-1] == 0) GOTO 0x220; Pop(1)

0x21b: Push((int) 0)
0x21c: Push("button_weapon")
0x21d: @ SendMessage(Stack[-2], Stack[-1])
0x21e: Pop(2)
0x21f: GOTO 0x224

0x220: Push((int) 1)
0x221: Push("button_weapon")
0x222: @ SendMessage(Stack[-2], Stack[-1])
0x223: Pop(2)
0x224: Push((int) 1)
0x225: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x226: IF (Stack[-1] == 0) GOTO 0x22c; Pop(1)

0x227: Push((int) 0)
0x228: Push("button_clothes")
0x229: @ SendMessage(Stack[-2], Stack[-1])
0x22a: Pop(2)
0x22b: GOTO 0x230

0x22c: Push((int) 1)
0x22d: Push("button_clothes")
0x22e: @ SendMessage(Stack[-2], Stack[-1])
0x22f: Pop(2)
0x230: Push((int) 2)
0x231: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x232: IF (Stack[-1] == 0) GOTO 0x238; Pop(1)

0x233: Push((int) 0)
0x234: Push("button_medcine")
0x235: @ SendMessage(Stack[-2], Stack[-1])
0x236: Pop(2)
0x237: GOTO 0x23c

0x238: Push((int) 1)
0x239: Push("button_medcine")
0x23a: @ SendMessage(Stack[-2], Stack[-1])
0x23b: Pop(2)
0x23c: Push((int) 3)
0x23d: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x23e: IF (Stack[-1] == 0) GOTO 0x244; Pop(1)

0x23f: Push((int) 0)
0x240: Push("button_food")
0x241: @ SendMessage(Stack[-2], Stack[-1])
0x242: Pop(2)
0x243: GOTO 0x248

0x244: Push((int) 1)
0x245: Push("button_food")
0x246: @ SendMessage(Stack[-2], Stack[-1])
0x247: Pop(2)
0x248: Push((int) 4)
0x249: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x24a: IF (Stack[-1] == 0) GOTO 0x250; Pop(1)

0x24b: Push((int) 0)
0x24c: Push("button_other")
0x24d: @ SendMessage(Stack[-2], Stack[-1])
0x24e: Pop(2)
0x24f: GOTO 0x254

0x250: Push((int) 1)
0x251: Push("button_other")
0x252: @ SendMessage(Stack[-2], Stack[-1])
0x253: Pop(2)
0x254: Return(); Pop(0)

0x255: PushEmpty(object, int, int, object, int, bool, bool, object, int, int, object, int, bool, bool)
0x256: PushEmpty(object)
0x257: Call2 0x11

0x258: Stack[-8] = Stack[-1]
0x259: Pop(1)
0x25a: @@ GetItemCount(Stack[-6], Stack[-15])
0x25b: Pop(0)
0x25c: Stack[-5] = (int) 0
0x25d: Push((int) 12)
0x25e: Pop(1); Push((bool) Stack[-6] < Stack[-1])
0x25f: IF (Stack[-1] == 0) GOTO 0x2aa; Pop(1)

0x260: Pop(0); Push((bool) Stack[-5] < Stack[-6])
0x261: IF (Stack[-1] == 0) GOTO 0x2a0; Pop(1)

0x262: @@ GetItem(Stack[-4], Stack[-5], Stack[-15])
0x263: Pop(0)
0x264: @@ GetItemAmount(Stack[-3], Stack[-5], Stack[-15])
0x265: Pop(0)
0x266: PushEmpty(bool, int, int)
0x267: Stack[-2] = Stack[-8]
0x268: Stack[-1] = Stack[-18]
0x269: Call2 0x1f

0x26a: Stack[-5] = Stack[-3]
0x26b: Pop(3)
0x26c: PushEmpty(bool, object)
0x26d: Stack[-1] = Stack[-6]
0x26e: Call2 0x17

0x26f: Stack[-3] = Stack[-2]
0x270: Pop(2)
0x271: Push(Stack[-2])
0x272: IF (Stack[-1] == 0) GOTO 0x285; Pop(1)

0x273: Push(Stack[-1])
0x274: IF (Stack[-1] == 0) GOTO 0x27d; Pop(1)

0x275: Push((int) 0)
0x276: PushEmpty(string, int)
0x277: Stack[-1] = Stack[-8]
0x278: Call2 0x2ac

0x279: Pop(1)
0x27a: @ SendMessage(Stack[-2], Stack[-1], Stack[-6])
0x27b: Pop(2)
0x27c: GOTO 0x284

0x27d: Push((int) 16384)
0x27e: PushEmpty(string, int)
0x27f: Stack[-1] = Stack[-8]
0x280: Call2 0x2ac

0x281: Pop(1)
0x282: @ SendMessage(Stack[-2], Stack[-1], Stack[-6])
0x283: Pop(2)
0x284: GOTO 0x296

0x285: Push(Stack[-1])
0x286: IF (Stack[-1] == 0) GOTO 0x28f; Pop(1)

0x287: Push((int) 131072)
0x288: PushEmpty(string, int)
0x289: Stack[-1] = Stack[-8]
0x28a: Call2 0x2ac

0x28b: Pop(1)
0x28c: @ SendMessage(Stack[-2], Stack[-1], Stack[-6])
0x28d: Pop(2)
0x28e: GOTO 0x296

0x28f: Push((int) 0)
0x290: PushEmpty(string, int)
0x291: Stack[-1] = Stack[-8]
0x292: Call2 0x2ac

0x293: Pop(1)
0x294: @ SendMessage(Stack[-2], Stack[-1], Stack[-6])
0x295: Pop(2)
0x296: Push((int) 65536)
0x297: Pop(1); Push(Stack[-4] | Stack[-1]);
0x298: PushEmpty(string, int)
0x299: Stack[-1] = Stack[-8]
0x29a: Call2 0x2ac

0x29b: Pop(1)
0x29c: @ SendMessage(Stack[-2], Stack[-1])
0x29d: Pop(2)
0x29e: Stack[-4] = 0
0x29f: GOTO 0x2a7

0x2a0: Push((int) 32768)
0x2a1: PushEmpty(string, int)
0x2a2: Stack[-1] = Stack[-8]
0x2a3: Call2 0x2ac

0x2a4: Pop(1)
0x2a5: @ SendMessage(Stack[-2], Stack[-1])
0x2a6: Pop(2)
0x2a7: Push((int) 1)
0x2a8: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x2a9: GOTO 0x25d

0x2aa: Return(); Pop(14)

0x2ab: Stack[-7] = 0
0x2ac: PushEmpty()
0x2ad: Push((int) 1)
0x2ae: Pop(1); Push(Stack[-2] + Stack[-1]);
0x2af: Push((int) 10)
0x2b0: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x2b1: IF (Stack[-1] == 0) GOTO 0x2b7; Pop(1)

0x2b2: Push("slot0")
0x2b3: Push((int) 1)
0x2b4: Pop(1); Push(Stack[-3] + Stack[-1]);
0x2b5: Stack[-4] = Stack[-2] + Stack[-1]; Pop(2);
0x2b6: Return(); Pop(0)

0x2b7: Push("slot")
0x2b8: Push((int) 1)
0x2b9: Pop(1); Push(Stack[-3] + Stack[-1]);
0x2ba: Stack[-4] = Stack[-2] + Stack[-1]; Pop(2);
0x2bb: Return(); Pop(0)

0x2bc: PushEmpty(int, int)
0x2bd: @@ GetItemID(Stack[-1])
0x2be: Pop(0)
0x2bf: Stack[-4] = Stack[-1]
0x2c0: Return(); Pop(2)

0x2c1: PushEmpty(int, string, int, string)
0x2c2: PushEmpty(int, object)
0x2c3: Stack[-1] = Stack[-7]
0x2c4: Call2 0x2bc

0x2c5: Stack[-4] = Stack[-2]
0x2c6: Pop(2)
0x2c7: @ GetInvItemName(Stack[-1], Stack[-2])
0x2c8: Pop(0)
0x2c9: Stack[-6] = Stack[-1]
0x2ca: Return(); Pop(4)

0x2cb: PushEmpty(bool, bool)
0x2cc: PushEmpty(bool)
0x2cd: Stack[-1] = (bool) 1
0x2ce: Pop(0); Push((bool) Stack[-5] == 0)
0x2cf: IF (Stack[-1] == 0) GOTO 0x2d3; Pop(1)

0x2d0: Pop(0); Push((bool) Stack[-4] == 0)
0x2d1: IF (Stack[-1] == 0) GOTO 0x2d3; Pop(1)

0x2d2: Stack[-1] = (bool) 0
0x2d3: IF (Stack[-1] == 0) GOTO 0x2d6; Pop(1)

0x2d4: Stack[-5] = (bool) 0
0x2d5: Return(); Pop(2)

0x2d6: @@ Compare(Stack[-1], Stack[-3])
0x2d7: Pop(0)
0x2d8: Stack[-5] = Stack[-1]
0x2d9: Return(); Pop(2)

