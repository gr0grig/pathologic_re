GlobalVarCount = 0

Strings:
	size
	get
	remove
	add
	default
	cancel_button
	background_left
	background_right
	l_scroll_button_top
	l_scroll_button_bottom
	r_scroll_button_top
	r_scroll_button_bottom
	l_scrollbar
	r_scrollbar
	ok_button
	clear
	r_money_slot
	l_money_slot
	Error: failed to remove item
	Error: failed to add item
	set
	l_slot0
	l_slot
	r_slot0
	r_slot
	sellf
	HasProperty
	GetProperty
	buyf
	barter
	GetItemID
	Price
	durability
	BarterPrice
	Category
	GetItemCount
	GetItem
	GetItemAmount
	IsItemSelected
	RemoveItem
	AddItem

Import:
	GetContainer (1 args)
	CreateObjectVector (1 args)
	CreateIntVector (1 args)
	GetGameTime (1 args)
	ShowCursor (0 args)
	SetCursor (1 args)
	CaptureKeyboard (0 args)
	ProcessEvents (0 args)
	DestroyWindow (0 args)
	Trace (1 args)
	GetPlayerMoneyCount (1 args)
	SendMessage (2 args)
	SendMessage (3 args)
	GetPlayerContainer (1 args)
	SetPlayerMoneyCount (1 args)
	HasInvItemProperty (3 args)
	GetInvItemProperty (3 args)
	GetItemMaxStackSize (2 args)

RunOp = 0x30
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (int, int, int, int, object, object, object, object, object, object, object, object, object, object, object, object, object, object, object, object, object, object, object, object, int, int, object) Params = 0
		EVENT_100 Op = 0x6e Vars = (int)
		EVENT_200 Op = 0x72 Vars = (int, string, object)


0x0: PushEmpty(int, object, int, int, object, int)
0x1: @@ size(Stack[-3])
0x2: Pop(0)
0x3: Stack[-1] = (int) 0
0x4: Pop(0); Push((bool) Stack[-1] < Stack[-3])
0x5: IF (Stack[-1] == 0) GOTO 0x14; Pop(1)

0x6: @@ get(Stack[-2], Stack[-1])
0x7: Pop(0)
0x8: PushEmpty(bool, object, object)
0x9: Stack[-2] = Stack[-5]
0xa: Stack[-1] = Stack[-10]
0xb: Call2 0x6bf

0xc: Pop(2)
0xd: IF (Stack[-1] == 0) GOTO 0x11; Pop(1)

0xe: @@ remove(Stack[-1])
0xf: Pop(0)
0x10: Return(); Pop(6)

0x11: Push((int) 1)
0x12: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x13: GOTO 0x4

0x14: @@ add(Stack[-7])
0x15: Pop(0)
0x16: Return(); Pop(6)

0x17: Stack[-2] = 0
0x18: PushEmpty(int, object, int, int, object, int)
0x19: @@ size(Stack[-3])
0x1a: Pop(0)
0x1b: Stack[-1] = (int) 0
0x1c: Pop(0); Push((bool) Stack[-1] < Stack[-3])
0x1d: IF (Stack[-1] == 0) GOTO 0x2c; Pop(1)

0x1e: @@ get(Stack[-2], Stack[-1])
0x1f: Pop(0)
0x20: PushEmpty(bool, object, object)
0x21: Stack[-2] = Stack[-5]
0x22: Stack[-1] = Stack[-10]
0x23: Call2 0x6bf

0x24: Pop(2)
0x25: IF (Stack[-1] == 0) GOTO 0x29; Pop(1)

0x26: @@ remove(Stack[-1])
0x27: Pop(0)
0x28: Return(); Pop(6)

0x29: Push((int) 1)
0x2a: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x2b: GOTO 0x1c

0x2c: @@ add(Stack[-7])
0x2d: Pop(0)
0x2e: Return(); Pop(6)

0x2f: Stack[-2] = 0
0x30: PushEmpty(float, float)
0x31: @ GetContainer(Stack[-26])
0x32: Pop(0)
0x33: @ CreateObjectVector(Stack[-20])
0x34: Pop(0)
0x35: @ CreateObjectVector(Stack[-21])
0x36: Pop(0)
0x37: @ CreateObjectVector(Stack[-4])
0x38: Pop(0)
0x39: @ CreateIntVector(Stack[-5])
0x3a: Pop(0)
0x3b: @ CreateIntVector(Stack[-6])
0x3c: Pop(0)
0x3d: @ CreateObjectVector(Stack[-7])
0x3e: Pop(0)
0x3f: @ CreateIntVector(Stack[-8])
0x40: Pop(0)
0x41: @ CreateIntVector(Stack[-9])
0x42: Pop(0)
0x43: @ CreateObjectVector(Stack[-10])
0x44: Pop(0)
0x45: @ CreateIntVector(Stack[-11])
0x46: Pop(0)
0x47: @ CreateObjectVector(Stack[-12])
0x48: Pop(0)
0x49: @ CreateIntVector(Stack[-13])
0x4a: Pop(0)
0x4b: @ CreateObjectVector(Stack[-14])
0x4c: Pop(0)
0x4d: @ CreateIntVector(Stack[-15])
0x4e: Pop(0)
0x4f: @ CreateObjectVector(Stack[-16])
0x50: Pop(0)
0x51: @ CreateIntVector(Stack[-17])
0x52: Pop(0)
0x53: @ CreateObjectVector(Stack[-18])
0x54: Pop(0)
0x55: @ CreateIntVector(Stack[-19])
0x56: Pop(0)
0x57: PushEmpty(int)
0x58: Call2 0x60e

0x59: Stack[25 + Tasks[-1].StackPointer] = Stack[-1]
0x5a: Pop(1)
0x5b: PushEmpty()
0x5c: Call2 0x10e

0x5d: Pop(0)
0x5e: @ GetGameTime(Stack[-1])
0x5f: Pop(0)
0x60: Push((int) 1)
0x61: Push((int) 24)
0x62: Pop(1); Push(Stack[-3] / Stack[-1]);
0x63: Stack[24 + Tasks[-1].StackPointer] = Stack[-2] + Stack[-1]; Pop(2);
0x64: @ ShowCursor()
0x65: Pop(0)
0x66: Push("default")
0x67: @ SetCursor(Stack[-1])
0x68: Pop(1)
0x69: @ CaptureKeyboard()
0x6a: Pop(0)
0x6b: @ ProcessEvents()
0x6c: Pop(0)
0x6d: Return(); Pop(2)

0x6e: PushEmpty()
0x6f: @ DestroyWindow()
0x70: Pop(0)
0x71: Return(); Pop(0)

0x72: PushEmpty(int, int)
0x73: PushEmpty(int, int, string)
0x74: Stack[-2] = Stack[-8]
0x75: Stack[-1] = Stack[-7]
0x76: Call2 0x5b6

0x77: Stack[-4] = Stack[-3]
0x78: Pop(3)
0x79: Push((int) -1)
0x7a: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x7b: IF (Stack[-1] == 0) GOTO 0x89; Pop(1)

0x7c: Push((int) 0)
0x7d: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x7e: IF (Stack[-1] == 0) GOTO 0x84; Pop(1)

0x7f: PushEmpty(int)
0x80: Stack[-1] = Stack[-2]
0x81: Call2 0x463

0x82: Pop(1)
0x83: GOTO 0x88

0x84: PushEmpty(int)
0x85: Stack[-1] = Stack[-2]
0x86: Call2 0x4a5

0x87: Pop(1)
0x88: Return(); Pop(2)

0x89: PushEmpty(int, int, string)
0x8a: Stack[-2] = Stack[-8]
0x8b: Stack[-1] = Stack[-7]
0x8c: Call2 0x5c8

0x8d: Stack[-4] = Stack[-3]
0x8e: Pop(3)
0x8f: Push((int) -1)
0x90: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x91: IF (Stack[-1] == 0) GOTO 0x9f; Pop(1)

0x92: Push((int) 0)
0x93: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x94: IF (Stack[-1] == 0) GOTO 0x9a; Pop(1)

0x95: PushEmpty(int)
0x96: Stack[-1] = Stack[-2]
0x97: Call2 0x4e5

0x98: Pop(1)
0x99: GOTO 0x9e

0x9a: PushEmpty(int)
0x9b: Stack[-1] = Stack[-2]
0x9c: Call2 0x524

0x9d: Pop(1)
0x9e: Return(); Pop(2)

0x9f: Push("cancel_button")
0xa0: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0xa1: IF (Stack[-1] == 0) GOTO 0xa6; Pop(1)

0xa2: PushEmpty()
0xa3: Call2 0x10e

0xa4: Pop(0)
0xa5: Return(); Pop(2)

0xa6: Push("background_left")
0xa7: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0xa8: IF (Stack[-1] == 0) GOTO 0xb3; Pop(1)

0xa9: Push("background_left")
0xaa: Pop(1); Push(Stack[-1] + Stack[-6]);
0xab: @ Trace(Stack[-1])
0xac: Pop(1)
0xad: Push((int) 2)
0xae: Pop(1); Push(Stack[-1] * Stack[-6]);
0xaf: Stack[0 + Tasks[-1].StackPointer] = Stack[0 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0xb0: PushEmpty()
0xb1: Call2 0x274

0xb2: Pop(0)
0xb3: Push("background_right")
0xb4: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0xb5: IF (Stack[-1] == 0) GOTO 0xc0; Pop(1)

0xb6: Push("background_right")
0xb7: Pop(1); Push(Stack[-1] + Stack[-6]);
0xb8: @ Trace(Stack[-1])
0xb9: Pop(1)
0xba: Push((int) 2)
0xbb: Pop(1); Push(Stack[-1] * Stack[-6]);
0xbc: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0xbd: PushEmpty()
0xbe: Call2 0x2cf

0xbf: Pop(0)
0xc0: Push("l_scroll_button_top")
0xc1: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0xc2: IF (Stack[-1] == 0) GOTO 0xc9; Pop(1)

0xc3: Push((int) 2)
0xc4: Stack[0 + Tasks[-1].StackPointer] = Stack[0 + Tasks[-1].StackPointer] - Stack[-1]; Pop(1);
0xc5: PushEmpty()
0xc6: Call2 0x274

0xc7: Pop(0)
0xc8: Return(); Pop(2)

0xc9: Push("l_scroll_button_bottom")
0xca: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0xcb: IF (Stack[-1] == 0) GOTO 0xd2; Pop(1)

0xcc: Push((int) 2)
0xcd: Stack[0 + Tasks[-1].StackPointer] = Stack[0 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0xce: PushEmpty()
0xcf: Call2 0x274

0xd0: Pop(0)
0xd1: Return(); Pop(2)

0xd2: Push("r_scroll_button_top")
0xd3: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0xd4: IF (Stack[-1] == 0) GOTO 0xdb; Pop(1)

0xd5: Push((int) 2)
0xd6: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] - Stack[-1]; Pop(1);
0xd7: PushEmpty()
0xd8: Call2 0x2cf

0xd9: Pop(0)
0xda: Return(); Pop(2)

0xdb: Push("r_scroll_button_bottom")
0xdc: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0xdd: IF (Stack[-1] == 0) GOTO 0xe4; Pop(1)

0xde: Push((int) 2)
0xdf: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0xe0: PushEmpty()
0xe1: Call2 0x2cf

0xe2: Pop(0)
0xe3: Return(); Pop(2)

0xe4: Push("l_scrollbar")
0xe5: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0xe6: IF (Stack[-1] == 0) GOTO 0xf5; Pop(1)

0xe7: PushEmpty(int)
0xe8: Call2 0x250

0xe9: Pop(0)
0xea: Pop(1); Push(Stack[-1] * Stack[-6]);
0xeb: Push((float)100.0)
0xec: Pop(2); Push(Stack[-2] / Stack[-1]);
0xed: Push((float)0.5)
0xee: Stack[0 + Tasks[-1].StackPointer] = Stack[-2] + Stack[-1]; Pop(2);
0xef: Push((int) 2)
0xf0: Stack[0 + Tasks[-1].StackPointer] = Stack[0 + Tasks[-1].StackPointer] * Stack[-1]; Pop(1);
0xf1: PushEmpty()
0xf2: Call2 0x274

0xf3: Pop(0)
0xf4: Return(); Pop(2)

0xf5: Push("r_scrollbar")
0xf6: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0xf7: IF (Stack[-1] == 0) GOTO 0x106; Pop(1)

0xf8: PushEmpty(int)
0xf9: Call2 0x262

0xfa: Pop(0)
0xfb: Pop(1); Push(Stack[-1] * Stack[-6]);
0xfc: Push((float)100.0)
0xfd: Pop(2); Push(Stack[-2] / Stack[-1]);
0xfe: Push((float)0.5)
0xff: Stack[1 + Tasks[-1].StackPointer] = Stack[-2] + Stack[-1]; Pop(2);
0x100: Push((int) 2)
0x101: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] * Stack[-1]; Pop(1);
0x102: PushEmpty()
0x103: Call2 0x2cf

0x104: Pop(0)
0x105: Return(); Pop(2)

0x106: Push("ok_button")
0x107: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x108: IF (Stack[-1] == 0) GOTO 0x10d; Pop(1)

0x109: PushEmpty()
0x10a: Call2 0x332

0x10b: Pop(0)
0x10c: Return(); Pop(2)

0x10d: Return(); Pop(2)

0x10e: PushEmpty(int, int)
0x10f: Stack[0 + Tasks[-1].StackPointer] = (int)0
0x110: Stack[1 + Tasks[-1].StackPointer] = (int)0
0x111: Stack[3 + Tasks[-1].StackPointer] = (int)0
0x112: Push((int) 0)
0x113: Pop(1); Push((bool) Stack[25 + Tasks[-1].StackPointer] == Stack[-1])
0x114: IF (Stack[-1] == 0) GOTO 0x118; Pop(1)

0x115: @ GetPlayerMoneyCount(Stack[-2])
0x116: Pop(0)
0x117: GOTO 0x119

0x118: Stack[2 + Tasks[-1].StackPointer] = (int)0
0x119: @@ clear()
0x11a: Pop(0)
0x11b: @@ clear()
0x11c: Pop(0)
0x11d: @@ clear()
0x11e: Pop(0)
0x11f: @@ clear()
0x120: Pop(0)
0x121: @@ clear()
0x122: Pop(0)
0x123: @@ clear()
0x124: Pop(0)
0x125: @@ clear()
0x126: Pop(0)
0x127: @@ clear()
0x128: Pop(0)
0x129: @@ clear()
0x12a: Pop(0)
0x12b: @@ clear()
0x12c: Pop(0)
0x12d: @@ clear()
0x12e: Pop(0)
0x12f: @@ clear()
0x130: Pop(0)
0x131: @@ clear()
0x132: Pop(0)
0x133: @@ clear()
0x134: Pop(0)
0x135: @@ clear()
0x136: Pop(0)
0x137: @@ clear()
0x138: Pop(0)
0x139: @@ clear()
0x13a: Pop(0)
0x13b: @@ clear()
0x13c: Pop(0)
0x13d: PushEmpty()
0x13e: Call2 0x1ed

0x13f: Pop(0)
0x140: PushEmpty()
0x141: Call2 0x16f

0x142: Pop(0)
0x143: PushEmpty()
0x144: Call2 0x20c

0x145: Pop(0)
0x146: PushEmpty()
0x147: Call2 0x274

0x148: Pop(0)
0x149: PushEmpty()
0x14a: Call2 0x32e

0x14b: Pop(0)
0x14c: PushEmpty()
0x14d: Call2 0x2cf

0x14e: Pop(0)
0x14f: PushEmpty()
0x150: Call2 0x32a

0x151: Pop(0)
0x152: @@ size(Stack[-1])
0x153: Pop(0)
0x154: Push((int) 18)
0x155: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x156: IF (Stack[-1] == 0) GOTO 0x15c; Pop(1)

0x157: Push((int) 16384)
0x158: Push("l_scrollbar")
0x159: @ SendMessage(Stack[-2], Stack[-1])
0x15a: Pop(2)
0x15b: GOTO 0x160

0x15c: Push((int) 0)
0x15d: Push("l_scrollbar")
0x15e: @ SendMessage(Stack[-2], Stack[-1])
0x15f: Pop(2)
0x160: @@ size(Stack[-1])
0x161: Pop(0)
0x162: Push((int) 18)
0x163: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x164: IF (Stack[-1] == 0) GOTO 0x16a; Pop(1)

0x165: Push((int) 16384)
0x166: Push("r_scrollbar")
0x167: @ SendMessage(Stack[-2], Stack[-1])
0x168: Pop(2)
0x169: GOTO 0x16e

0x16a: Push((int) 0)
0x16b: Push("r_scrollbar")
0x16c: @ SendMessage(Stack[-2], Stack[-1])
0x16d: Pop(2)
0x16e: Return(); Pop(2)

0x16f: PushEmpty(int, bool)
0x170: Stack[-2] = (int) 0
0x171: Stack[-1] = (bool) 0
0x172: Call2 0x1a2

0x173: Pop(2)
0x174: PushEmpty(int, bool)
0x175: Stack[-2] = (int) 1
0x176: Stack[-1] = (bool) 0
0x177: Call2 0x1a2

0x178: Pop(2)
0x179: PushEmpty(int, bool)
0x17a: Stack[-2] = (int) 2
0x17b: Stack[-1] = (bool) 0
0x17c: Call2 0x1a2

0x17d: Pop(2)
0x17e: PushEmpty(int, bool)
0x17f: Stack[-2] = (int) 3
0x180: Stack[-1] = (bool) 0
0x181: Call2 0x1a2

0x182: Pop(2)
0x183: PushEmpty(int, bool)
0x184: Stack[-2] = (int) 4
0x185: Stack[-1] = (bool) 0
0x186: Call2 0x1a2

0x187: Pop(2)
0x188: PushEmpty(int, bool)
0x189: Stack[-2] = (int) 0
0x18a: Stack[-1] = (bool) 1
0x18b: Call2 0x1a2

0x18c: Pop(2)
0x18d: PushEmpty(int, bool)
0x18e: Stack[-2] = (int) 1
0x18f: Stack[-1] = (bool) 1
0x190: Call2 0x1a2

0x191: Pop(2)
0x192: PushEmpty(int, bool)
0x193: Stack[-2] = (int) 2
0x194: Stack[-1] = (bool) 1
0x195: Call2 0x1a2

0x196: Pop(2)
0x197: PushEmpty(int, bool)
0x198: Stack[-2] = (int) 3
0x199: Stack[-1] = (bool) 1
0x19a: Call2 0x1a2

0x19b: Pop(2)
0x19c: PushEmpty(int, bool)
0x19d: Stack[-2] = (int) 4
0x19e: Stack[-1] = (bool) 1
0x19f: Call2 0x1a2

0x1a0: Pop(2)
0x1a1: Return(); Pop(0)

0x1a2: PushEmpty(object, int, int, int, object, int, int, int)
0x1a3: PushEmpty(int, int)
0x1a4: Stack[-1] = Stack[-12]
0x1a5: Call2 0x68d

0x1a6: Stack[-5] = Stack[-2]
0x1a7: Pop(2)
0x1a8: Stack[-1] = (int) 0
0x1a9: Pop(0); Push((bool) Stack[-1] < Stack[-3])
0x1aa: IF (Stack[-1] == 0) GOTO 0x1eb; Pop(1)

0x1ab: PushEmpty(bool, int, int)
0x1ac: Stack[-2] = Stack[-13]
0x1ad: Stack[-1] = Stack[-4]
0x1ae: Call2 0x6a6

0x1af: Pop(2)
0x1b0: IF (Stack[-1] == 0) GOTO 0x1b2; Pop(1)

0x1b1: GOTO 0x1e8

0x1b2: PushEmpty(int, int, int)
0x1b3: Stack[-2] = Stack[-13]
0x1b4: Stack[-1] = Stack[-4]
0x1b5: Call2 0x69e

0x1b6: Stack[-5] = Stack[-3]
0x1b7: Pop(3)
0x1b8: PushEmpty(object, int, int)
0x1b9: Stack[-2] = Stack[-13]
0x1ba: Stack[-1] = Stack[-4]
0x1bb: Call2 0x695

0x1bc: Stack[-7] = Stack[-3]
0x1bd: Pop(3)
0x1be: PushEmpty(bool)
0x1bf: Stack[-1] = (bool) 0
0x1c0: Push(Stack[-10])
0x1c1: IF (Stack[-1] == 0) GOTO 0x1ca; Pop(1)

0x1c2: PushEmpty(bool, object, int, bool)
0x1c3: Stack[-3] = Stack[-9]
0x1c4: Stack[-2] = Stack[25 + Tasks[-1].StackPointer]
0x1c5: Stack[-1] = (bool) 1
0x1c6: Call2 0x6ca

0x1c7: Pop(3)
0x1c8: IF (Stack[-1] == 0) GOTO 0x1ca; Pop(1)

0x1c9: Stack[-1] = (bool) 1
0x1ca: IF (Stack[-1] == 0) GOTO 0x1d3; Pop(1)

0x1cb: @@ add(Stack[-4])
0x1cc: Pop(0)
0x1cd: @@ add(Stack[-2])
0x1ce: Pop(0)
0x1cf: Push((int) 0)
0x1d0: @@ add(Stack[-1])
0x1d1: Pop(1)
0x1d2: GOTO 0x1e8

0x1d3: PushEmpty(bool)
0x1d4: Stack[-1] = (bool) 0
0x1d5: Pop(0); Push((bool) Stack[-10] == 0)
0x1d6: IF (Stack[-1] == 0) GOTO 0x1e0; Pop(1)

0x1d7: PushEmpty(bool, object, int, bool)
0x1d8: Stack[-3] = Stack[-9]
0x1d9: Stack[-2] = Stack[25 + Tasks[-1].StackPointer]
0x1da: Stack[-1] = (bool) 1
0x1db: Call2 0x6ca

0x1dc: Pop(3)
0x1dd: Pop(1); Push((bool) Stack[-1] == 0)
0x1de: IF (Stack[-1] == 0) GOTO 0x1e0; Pop(1)

0x1df: Stack[-1] = (bool) 1
0x1e0: IF (Stack[-1] == 0) GOTO 0x1e8; Pop(1)

0x1e1: @@ add(Stack[-4])
0x1e2: Pop(0)
0x1e3: @@ add(Stack[-2])
0x1e4: Pop(0)
0x1e5: Push((int) 0)
0x1e6: @@ add(Stack[-1])
0x1e7: Pop(1)
0x1e8: Push((int) 1)
0x1e9: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x1ea: GOTO 0x1a9

0x1eb: Return(); Pop(8)

0x1ec: Stack[-4] = 0
0x1ed: PushEmpty(int, int, object, object, int, int, int, object, object, int)
0x1ee: PushEmpty(int)
0x1ef: Call2 0x685

0x1f0: Stack[-6] = Stack[-1]
0x1f1: Pop(1)
0x1f2: Stack[-1] = (int) 0
0x1f3: Pop(0); Push((bool) Stack[-1] < Stack[-5])
0x1f4: IF (Stack[-1] == 0) GOTO 0x209; Pop(1)

0x1f5: PushEmpty(int, int)
0x1f6: Stack[-1] = Stack[-3]
0x1f7: Call2 0x6b7

0x1f8: Stack[-6] = Stack[-2]
0x1f9: Pop(2)
0x1fa: PushEmpty(object, int)
0x1fb: Stack[-1] = Stack[-3]
0x1fc: Call2 0x6ae

0x1fd: Stack[-4] = Stack[-2]
0x1fe: Pop(2)
0x1ff: @@ add(Stack[-2])
0x200: Pop(0)
0x201: @@ add(Stack[-4])
0x202: Pop(0)
0x203: Push((int) 0)
0x204: @@ add(Stack[-1])
0x205: Pop(1)
0x206: Push((int) 1)
0x207: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x208: GOTO 0x1f3

0x209: Return(); Pop(10)

0x20a: Stack[-2] = 0
0x20b: Stack[-3] = 0
0x20c: PushEmpty(int, object, object)
0x20d: Stack[-3] = (int) 0
0x20e: Stack[-2] = Stack[10 + Tasks[-1].StackPointer]
0x20f: Stack[-1] = Stack[11 + Tasks[-1].StackPointer]
0x210: Call2 0x22b

0x211: Pop(3)
0x212: PushEmpty(int, object, object)
0x213: Stack[-3] = (int) 1
0x214: Stack[-2] = Stack[12 + Tasks[-1].StackPointer]
0x215: Stack[-1] = Stack[13 + Tasks[-1].StackPointer]
0x216: Call2 0x22b

0x217: Pop(3)
0x218: PushEmpty(int, object, object)
0x219: Stack[-3] = (int) 2
0x21a: Stack[-2] = Stack[14 + Tasks[-1].StackPointer]
0x21b: Stack[-1] = Stack[15 + Tasks[-1].StackPointer]
0x21c: Call2 0x22b

0x21d: Pop(3)
0x21e: PushEmpty(int, object, object)
0x21f: Stack[-3] = (int) 3
0x220: Stack[-2] = Stack[16 + Tasks[-1].StackPointer]
0x221: Stack[-1] = Stack[17 + Tasks[-1].StackPointer]
0x222: Call2 0x22b

0x223: Pop(3)
0x224: PushEmpty(int, object, object)
0x225: Stack[-3] = (int) 4
0x226: Stack[-2] = Stack[18 + Tasks[-1].StackPointer]
0x227: Stack[-1] = Stack[19 + Tasks[-1].StackPointer]
0x228: Call2 0x22b

0x229: Pop(3)
0x22a: Return(); Pop(0)

0x22b: PushEmpty(object, int, int, int, object, int, int, int)
0x22c: PushEmpty(int, int)
0x22d: Stack[-1] = Stack[-13]
0x22e: Call2 0x68d

0x22f: Stack[-5] = Stack[-2]
0x230: Pop(2)
0x231: Stack[-1] = (int) 0
0x232: Pop(0); Push((bool) Stack[-1] < Stack[-3])
0x233: IF (Stack[-1] == 0) GOTO 0x24e; Pop(1)

0x234: PushEmpty(bool, int, int)
0x235: Stack[-2] = Stack[-14]
0x236: Stack[-1] = Stack[-4]
0x237: Call2 0x6a6

0x238: Pop(2)
0x239: IF (Stack[-1] == 0) GOTO 0x23b; Pop(1)

0x23a: GOTO 0x24b

0x23b: PushEmpty(int, int, int)
0x23c: Stack[-2] = Stack[-14]
0x23d: Stack[-1] = Stack[-4]
0x23e: Call2 0x69e

0x23f: Stack[-5] = Stack[-3]
0x240: Pop(3)
0x241: PushEmpty(object, int, int)
0x242: Stack[-2] = Stack[-14]
0x243: Stack[-1] = Stack[-4]
0x244: Call2 0x695

0x245: Stack[-7] = Stack[-3]
0x246: Pop(3)
0x247: @@ add(Stack[-4])
0x248: Pop(0)
0x249: @@ add(Stack[-2])
0x24a: Pop(0)
0x24b: Push((int) 1)
0x24c: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x24d: GOTO 0x232

0x24e: Return(); Pop(8)

0x24f: Stack[-4] = 0
0x250: PushEmpty(int, int, int, int)
0x251: @@ size(Stack[-2])
0x252: Pop(0)
0x253: Push((int) 2)
0x254: Pop(1); Push(Stack[-3] + Stack[-1]);
0x255: Push((int) 1)
0x256: Pop(2); Push(Stack[-2] - Stack[-1]);
0x257: Push((int) 2)
0x258: Pop(2); Push(Stack[-2] / Stack[-1]);
0x259: Push((int) 9)
0x25a: Stack[-3] = Stack[-2] - Stack[-1]; Pop(2);
0x25b: Push((int) 0)
0x25c: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x25d: IF (Stack[-1] == 0) GOTO 0x260; Pop(1)

0x25e: Stack[-5] = (int) 0
0x25f: Return(); Pop(4)

0x260: Stack[-5] = Stack[-1]
0x261: Return(); Pop(4)

0x262: PushEmpty(int, int, int, int)
0x263: @@ size(Stack[-2])
0x264: Pop(0)
0x265: Push((int) 2)
0x266: Pop(1); Push(Stack[-3] + Stack[-1]);
0x267: Push((int) 1)
0x268: Pop(2); Push(Stack[-2] - Stack[-1]);
0x269: Push((int) 2)
0x26a: Pop(2); Push(Stack[-2] / Stack[-1]);
0x26b: Push((int) 9)
0x26c: Stack[-3] = Stack[-2] - Stack[-1]; Pop(2);
0x26d: Push((int) 0)
0x26e: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x26f: IF (Stack[-1] == 0) GOTO 0x272; Pop(1)

0x270: Stack[-5] = (int) 0
0x271: Return(); Pop(4)

0x272: Stack[-5] = Stack[-1]
0x273: Return(); Pop(4)

0x274: PushEmpty(int, int, int, object, int, int, object, int, int, int, object, int, int, object)
0x275: @@ size(Stack[-7])
0x276: Pop(0)
0x277: Push((int) 18)
0x278: Pop(1); Push(Stack[0 + StackPtr] + Stack[-1]);
0x279: Pop(1); Push((bool) Stack[-1] > Stack[-8])
0x27a: IF (Stack[-1] == 0) GOTO 0x28b; Pop(1)

0x27b: Push((int) 2)
0x27c: Pop(1); Push(Stack[-8] % Stack[-1]);
0x27d: Push((int) 0)
0x27e: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x27f: IF (Stack[-1] == 0) GOTO 0x285; Pop(1)

0x280: Push((int) 18)
0x281: Pop(1); Push(Stack[0 + StackPtr] + Stack[-1]);
0x282: Pop(1); Push(Stack[-1] - Stack[-8]);
0x283: Stack[0 + Tasks[-1].StackPointer] = Stack[0 + Tasks[-1].StackPointer] - Stack[-1]; Pop(1);
0x284: GOTO 0x28b

0x285: Push((int) 18)
0x286: Pop(1); Push(Stack[0 + StackPtr] + Stack[-1]);
0x287: Pop(1); Push(Stack[-1] - Stack[-8]);
0x288: Push((int) 1)
0x289: Pop(2); Push(Stack[-2] - Stack[-1]);
0x28a: Stack[0 + Tasks[-1].StackPointer] = Stack[0 + Tasks[-1].StackPointer] - Stack[-1]; Pop(1);
0x28b: Push((int) 0)
0x28c: Pop(1); Push((bool) Stack[0 + Tasks[-1].StackPointer] < Stack[-1])
0x28d: IF (Stack[-1] == 0) GOTO 0x28f; Pop(1)

0x28e: Stack[0 + Tasks[-1].StackPointer] = (int)0
0x28f: Stack[-5] = Stack[0 + Tasks[-1].StackPointer]
0x290: Push((int) 18)
0x291: Pop(1); Push(Stack[0 + StackPtr] + Stack[-1]);
0x292: Pop(1); Push((bool) Stack[-6] < Stack[-1])
0x293: IF (Stack[-1] == 0) GOTO 0x2ce; Pop(1)

0x294: Pop(0); Push((bool) Stack[-5] < Stack[-7])
0x295: IF (Stack[-1] == 0) GOTO 0x2c4; Pop(1)

0x296: @@ get(Stack[-4], Stack[-5])
0x297: Pop(0)
0x298: @@ get(Stack[-3], Stack[-5])
0x299: Pop(0)
0x29a: Stack[-6] = (int) 0
0x29b: PushEmpty(int, int)
0x29c: Stack[-1] = Stack[-7] - Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x29d: Call2 0x573

0x29e: Stack[-4] = Stack[-2]
0x29f: Pop(2)
0x2a0: Push((int) 0)
0x2a1: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x2a2: IF (Stack[-1] == 0) GOTO 0x2a5; Pop(1)

0x2a3: Push((int) 16384)
0x2a4: Stack[-7] = Stack[-7] | Stack[-1]; Pop(1);
0x2a5: PushEmpty(bool, object, int, bool)
0x2a6: Stack[-3] = Stack[-8]
0x2a7: Stack[-2] = Stack[25 + Tasks[-1].StackPointer]
0x2a8: Stack[-1] = (bool) 0
0x2a9: Call2 0x6ca

0x2aa: Pop(3)
0x2ab: IF (Stack[-1] == 0) GOTO 0x2ae; Pop(1)

0x2ac: Push((int) 131072)
0x2ad: Stack[-7] = Stack[-7] | Stack[-1]; Pop(1);
0x2ae: @ CreateIntVector(Stack[-1])
0x2af: Pop(0)
0x2b0: @@ add(Stack[-2])
0x2b1: Pop(0)
0x2b2: @@ add(Stack[-3])
0x2b3: Pop(0)
0x2b4: Push((int) 65536)
0x2b5: PushEmpty(string, int)
0x2b6: Stack[-1] = Stack[-8] - Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x2b7: Call2 0x596

0x2b8: Pop(1)
0x2b9: @ SendMessage(Stack[-2], Stack[-1], Stack[-3])
0x2ba: Pop(2)
0x2bb: PushEmpty(string, int)
0x2bc: Stack[-1] = Stack[-7] - Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x2bd: Call2 0x596

0x2be: Pop(1)
0x2bf: @ SendMessage(Stack[-7], Stack[-1], Stack[-5])
0x2c0: Pop(1)
0x2c1: Stack[-1] = 0
0x2c2: Stack[-4] = 0
0x2c3: GOTO 0x2cb

0x2c4: Push((int) 32768)
0x2c5: PushEmpty(string, int)
0x2c6: Stack[-1] = Stack[-8] - Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x2c7: Call2 0x596

0x2c8: Pop(1)
0x2c9: @ SendMessage(Stack[-2], Stack[-1])
0x2ca: Pop(2)
0x2cb: Push((int) 1)
0x2cc: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x2cd: GOTO 0x290

0x2ce: Return(); Pop(14)

0x2cf: PushEmpty(int, object, int, int, int, int, object, int, object, int, int, int, int, object)
0x2d0: @@ size(Stack[-7])
0x2d1: Pop(0)
0x2d2: Push((int) 18)
0x2d3: Pop(1); Push(Stack[1 + StackPtr] + Stack[-1]);
0x2d4: Pop(1); Push((bool) Stack[-1] > Stack[-8])
0x2d5: IF (Stack[-1] == 0) GOTO 0x2e6; Pop(1)

0x2d6: Push((int) 2)
0x2d7: Pop(1); Push(Stack[-8] % Stack[-1]);
0x2d8: Push((int) 0)
0x2d9: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x2da: IF (Stack[-1] == 0) GOTO 0x2e0; Pop(1)

0x2db: Push((int) 18)
0x2dc: Pop(1); Push(Stack[1 + StackPtr] + Stack[-1]);
0x2dd: Pop(1); Push(Stack[-1] - Stack[-8]);
0x2de: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] - Stack[-1]; Pop(1);
0x2df: GOTO 0x2e6

0x2e0: Push((int) 18)
0x2e1: Pop(1); Push(Stack[1 + StackPtr] + Stack[-1]);
0x2e2: Pop(1); Push(Stack[-1] - Stack[-8]);
0x2e3: Push((int) 1)
0x2e4: Pop(2); Push(Stack[-2] - Stack[-1]);
0x2e5: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] - Stack[-1]; Pop(1);
0x2e6: Push((int) 0)
0x2e7: Pop(1); Push((bool) Stack[1 + Tasks[-1].StackPointer] < Stack[-1])
0x2e8: IF (Stack[-1] == 0) GOTO 0x2ea; Pop(1)

0x2e9: Stack[1 + Tasks[-1].StackPointer] = (int)0
0x2ea: Stack[-3] = Stack[1 + Tasks[-1].StackPointer]
0x2eb: Push((int) 18)
0x2ec: Pop(1); Push(Stack[1 + StackPtr] + Stack[-1]);
0x2ed: Pop(1); Push((bool) Stack[-4] < Stack[-1])
0x2ee: IF (Stack[-1] == 0) GOTO 0x328; Pop(1)

0x2ef: Pop(0); Push((bool) Stack[-3] < Stack[-7])
0x2f0: IF (Stack[-1] == 0) GOTO 0x31e; Pop(1)

0x2f1: @@ get(Stack[-6], Stack[-3])
0x2f2: Pop(0)
0x2f3: @@ get(Stack[-4], Stack[-3])
0x2f4: Pop(0)
0x2f5: Stack[-5] = (int) 0
0x2f6: PushEmpty(int, int)
0x2f7: Stack[-1] = Stack[-5] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x2f8: Call2 0x580

0x2f9: Stack[-4] = Stack[-2]
0x2fa: Pop(2)
0x2fb: Push((int) 0)
0x2fc: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x2fd: IF (Stack[-1] == 0) GOTO 0x300; Pop(1)

0x2fe: Push((int) 16384)
0x2ff: Stack[-6] = Stack[-6] | Stack[-1]; Pop(1);
0x300: PushEmpty(bool, object, int, bool)
0x301: Stack[-3] = Stack[-10]
0x302: Stack[-2] = Stack[25 + Tasks[-1].StackPointer]
0x303: Stack[-1] = (bool) 1
0x304: Call2 0x6ca

0x305: Pop(3)
0x306: IF (Stack[-1] == 0) GOTO 0x309; Pop(1)

0x307: Push((int) 131072)
0x308: Stack[-6] = Stack[-6] | Stack[-1]; Pop(1);
0x309: @ CreateIntVector(Stack[-1])
0x30a: Pop(0)
0x30b: @@ add(Stack[-2])
0x30c: Pop(0)
0x30d: @@ add(Stack[-4])
0x30e: Pop(0)
0x30f: Push((int) 65536)
0x310: PushEmpty(string, int)
0x311: Stack[-1] = Stack[-6] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x312: Call2 0x5a6

0x313: Pop(1)
0x314: @ SendMessage(Stack[-2], Stack[-1], Stack[-3])
0x315: Pop(2)
0x316: PushEmpty(string, int)
0x317: Stack[-1] = Stack[-5] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x318: Call2 0x5a6

0x319: Pop(1)
0x31a: @ SendMessage(Stack[-6], Stack[-1], Stack[-7])
0x31b: Pop(1)
0x31c: Stack[-1] = 0
0x31d: GOTO 0x325

0x31e: Push((int) 32768)
0x31f: PushEmpty(string, int)
0x320: Stack[-1] = Stack[-6] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x321: Call2 0x5a6

0x322: Pop(1)
0x323: @ SendMessage(Stack[-2], Stack[-1])
0x324: Pop(2)
0x325: Push((int) 1)
0x326: Stack[-4] = Stack[-4] + Stack[-1]; Pop(1);
0x327: GOTO 0x2eb

0x328: Return(); Pop(14)

0x329: Stack[-6] = 0
0x32a: Push("r_money_slot")
0x32b: @ SendMessage(Stack[-2], Stack[-1])
0x32c: Pop(1)
0x32d: Return(); Pop(0)

0x32e: Push("l_money_slot")
0x32f: @ SendMessage(Stack[-3], Stack[-1])
0x330: Pop(1)
0x331: Return(); Pop(0)

0x332: PushEmpty(int, bool, object, object, object, int, int, int, bool, object, object, object, int, int)
0x333: @ GetContainer(Stack[-4])
0x334: Pop(0)
0x335: @ GetPlayerContainer(Stack[-3])
0x336: Pop(0)
0x337: @@ size(Stack[-7])
0x338: Pop(0)
0x339: Stack[-2] = (int) 0
0x33a: Pop(0); Push((bool) Stack[-2] < Stack[-7])
0x33b: IF (Stack[-1] == 0) GOTO 0x35d; Pop(1)

0x33c: @@ get(Stack[-5], Stack[-2])
0x33d: Pop(0)
0x33e: PushEmpty(bool, object, object, int)
0x33f: Stack[-3] = Stack[-7]
0x340: Stack[-2] = Stack[-9]
0x341: PushEmpty(int, object)
0x342: Stack[-1] = Stack[-11]
0x343: Call2 0x672

0x344: Stack[-3] = Stack[-2]
0x345: Pop(2)
0x346: Call2 0x6fc

0x347: Stack[-10] = Stack[-4]
0x348: Pop(4)
0x349: Pop(0); Push((bool) Stack[-6] == 0)
0x34a: IF (Stack[-1] == 0) GOTO 0x34e; Pop(1)

0x34b: Push("Error: failed to remove item")
0x34c: @ Trace(Stack[-1])
0x34d: Pop(1)
0x34e: PushEmpty(bool, object, object, int)
0x34f: Stack[-3] = Stack[-8]
0x350: Stack[-2] = Stack[-9]
0x351: Stack[-1] = (int) 0
0x352: Call2 0x715

0x353: Stack[-10] = Stack[-4]
0x354: Pop(4)
0x355: Pop(0); Push((bool) Stack[-6] == 0)
0x356: IF (Stack[-1] == 0) GOTO 0x35a; Pop(1)

0x357: Push("Error: failed to add item")
0x358: @ Trace(Stack[-1])
0x359: Pop(1)
0x35a: Push((int) 1)
0x35b: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x35c: GOTO 0x33a

0x35d: @@ size(Stack[-7])
0x35e: Pop(0)
0x35f: Stack[-1] = (int) 0
0x360: Pop(0); Push((bool) Stack[-1] < Stack[-7])
0x361: IF (Stack[-1] == 0) GOTO 0x383; Pop(1)

0x362: @@ get(Stack[-5], Stack[-1])
0x363: Pop(0)
0x364: PushEmpty(bool, object, object, int)
0x365: Stack[-3] = Stack[-8]
0x366: Stack[-2] = Stack[-9]
0x367: Stack[-1] = (int) 0
0x368: Call2 0x6fc

0x369: Stack[-10] = Stack[-4]
0x36a: Pop(4)
0x36b: Pop(0); Push((bool) Stack[-6] == 0)
0x36c: IF (Stack[-1] == 0) GOTO 0x370; Pop(1)

0x36d: Push("Error: failed to remove item")
0x36e: @ Trace(Stack[-1])
0x36f: Pop(1)
0x370: PushEmpty(bool, object, object, int)
0x371: Stack[-3] = Stack[-7]
0x372: Stack[-2] = Stack[-9]
0x373: PushEmpty(int, object)
0x374: Stack[-1] = Stack[-11]
0x375: Call2 0x672

0x376: Stack[-3] = Stack[-2]
0x377: Pop(2)
0x378: Call2 0x715

0x379: Stack[-10] = Stack[-4]
0x37a: Pop(4)
0x37b: Pop(0); Push((bool) Stack[-6] == 0)
0x37c: IF (Stack[-1] == 0) GOTO 0x380; Pop(1)

0x37d: Push("Error: failed to add item")
0x37e: @ Trace(Stack[-1])
0x37f: Pop(1)
0x380: Push((int) 1)
0x381: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x382: GOTO 0x360

0x383: Push((int) 0)
0x384: Pop(1); Push((bool) Stack[25 + Tasks[-1].StackPointer] == Stack[-1])
0x385: IF (Stack[-1] == 0) GOTO 0x388; Pop(1)

0x386: @ SetPlayerMoneyCount(Stack[-2])
0x387: Pop(0)
0x388: Stack[3 + Tasks[-1].StackPointer] = (int)0
0x389: PushEmpty()
0x38a: Call2 0x10e

0x38b: Pop(0)
0x38c: Return(); Pop(14)

0x38d: Stack[-3] = 0
0x38e: Stack[-4] = 0
0x38f: Stack[-5] = 0
0x390: PushEmpty(int, int)
0x391: PushEmpty(int, object)
0x392: Stack[-1] = Stack[-5]
0x393: Call2 0x672

0x394: Stack[-3] = Stack[-2]
0x395: Pop(2)
0x396: Push((int) 0)
0x397: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x398: IF (Stack[-1] == 0) GOTO 0x3a2; Pop(1)

0x399: PushEmpty(bool, object, object, object)
0x39a: Stack[-3] = Stack[-7]
0x39b: Stack[-2] = Stack[10 + Tasks[-1].StackPointer]
0x39c: Stack[-1] = Stack[11 + Tasks[-1].StackPointer]
0x39d: Call2 0x40a

0x39e: Stack[-8] = Stack[-4]
0x39f: Pop(4)
0x3a0: Return(); Pop(2)

0x3a1: GOTO 0x3c5

0x3a2: Push((int) 1)
0x3a3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3a4: IF (Stack[-1] == 0) GOTO 0x3ae; Pop(1)

0x3a5: PushEmpty(bool, object, object, object)
0x3a6: Stack[-3] = Stack[-7]
0x3a7: Stack[-2] = Stack[12 + Tasks[-1].StackPointer]
0x3a8: Stack[-1] = Stack[13 + Tasks[-1].StackPointer]
0x3a9: Call2 0x40a

0x3aa: Stack[-8] = Stack[-4]
0x3ab: Pop(4)
0x3ac: Return(); Pop(2)

0x3ad: GOTO 0x3c5

0x3ae: Push((int) 2)
0x3af: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3b0: IF (Stack[-1] == 0) GOTO 0x3ba; Pop(1)

0x3b1: PushEmpty(bool, object, object, object)
0x3b2: Stack[-3] = Stack[-7]
0x3b3: Stack[-2] = Stack[14 + Tasks[-1].StackPointer]
0x3b4: Stack[-1] = Stack[15 + Tasks[-1].StackPointer]
0x3b5: Call2 0x40a

0x3b6: Stack[-8] = Stack[-4]
0x3b7: Pop(4)
0x3b8: Return(); Pop(2)

0x3b9: GOTO 0x3c5

0x3ba: Push((int) 3)
0x3bb: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3bc: IF (Stack[-1] == 0) GOTO 0x3c5; Pop(1)

0x3bd: PushEmpty(bool, object, object, object)
0x3be: Stack[-3] = Stack[-7]
0x3bf: Stack[-2] = Stack[16 + Tasks[-1].StackPointer]
0x3c0: Stack[-1] = Stack[17 + Tasks[-1].StackPointer]
0x3c1: Call2 0x40a

0x3c2: Stack[-8] = Stack[-4]
0x3c3: Pop(4)
0x3c4: Return(); Pop(2)

0x3c5: PushEmpty(bool, object, object, object)
0x3c6: Stack[-3] = Stack[-7]
0x3c7: Stack[-2] = Stack[18 + Tasks[-1].StackPointer]
0x3c8: Stack[-1] = Stack[19 + Tasks[-1].StackPointer]
0x3c9: Call2 0x40a

0x3ca: Stack[-8] = Stack[-4]
0x3cb: Pop(4)
0x3cc: Return(); Pop(2)

0x3cd: PushEmpty(int, int)
0x3ce: PushEmpty(int, object)
0x3cf: Stack[-1] = Stack[-5]
0x3d0: Call2 0x672

0x3d1: Stack[-3] = Stack[-2]
0x3d2: Pop(2)
0x3d3: Push((int) 0)
0x3d4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3d5: IF (Stack[-1] == 0) GOTO 0x3df; Pop(1)

0x3d6: PushEmpty(bool, object, object, object)
0x3d7: Stack[-3] = Stack[-7]
0x3d8: Stack[-2] = Stack[10 + Tasks[-1].StackPointer]
0x3d9: Stack[-1] = Stack[11 + Tasks[-1].StackPointer]
0x3da: Call2 0x439

0x3db: Stack[-8] = Stack[-4]
0x3dc: Pop(4)
0x3dd: Return(); Pop(2)

0x3de: GOTO 0x402

0x3df: Push((int) 1)
0x3e0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3e1: IF (Stack[-1] == 0) GOTO 0x3eb; Pop(1)

0x3e2: PushEmpty(bool, object, object, object)
0x3e3: Stack[-3] = Stack[-7]
0x3e4: Stack[-2] = Stack[12 + Tasks[-1].StackPointer]
0x3e5: Stack[-1] = Stack[13 + Tasks[-1].StackPointer]
0x3e6: Call2 0x439

0x3e7: Stack[-8] = Stack[-4]
0x3e8: Pop(4)
0x3e9: Return(); Pop(2)

0x3ea: GOTO 0x402

0x3eb: Push((int) 2)
0x3ec: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3ed: IF (Stack[-1] == 0) GOTO 0x3f7; Pop(1)

0x3ee: PushEmpty(bool, object, object, object)
0x3ef: Stack[-3] = Stack[-7]
0x3f0: Stack[-2] = Stack[14 + Tasks[-1].StackPointer]
0x3f1: Stack[-1] = Stack[15 + Tasks[-1].StackPointer]
0x3f2: Call2 0x439

0x3f3: Stack[-8] = Stack[-4]
0x3f4: Pop(4)
0x3f5: Return(); Pop(2)

0x3f6: GOTO 0x402

0x3f7: Push((int) 3)
0x3f8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3f9: IF (Stack[-1] == 0) GOTO 0x402; Pop(1)

0x3fa: PushEmpty(bool, object, object, object)
0x3fb: Stack[-3] = Stack[-7]
0x3fc: Stack[-2] = Stack[16 + Tasks[-1].StackPointer]
0x3fd: Stack[-1] = Stack[17 + Tasks[-1].StackPointer]
0x3fe: Call2 0x439

0x3ff: Stack[-8] = Stack[-4]
0x400: Pop(4)
0x401: Return(); Pop(2)

0x402: PushEmpty(bool, object, object, object)
0x403: Stack[-3] = Stack[-7]
0x404: Stack[-2] = Stack[18 + Tasks[-1].StackPointer]
0x405: Stack[-1] = Stack[19 + Tasks[-1].StackPointer]
0x406: Call2 0x439

0x407: Stack[-8] = Stack[-4]
0x408: Pop(4)
0x409: Return(); Pop(2)

0x40a: PushEmpty(int, object, int, int, int, object, int, int)
0x40b: @@ size(Stack[-4])
0x40c: Pop(0)
0x40d: PushEmpty(int, object)
0x40e: Stack[-1] = Stack[-13]
0x40f: Call2 0x67c

0x410: Pop(1)
0x411: Push((int) 1)
0x412: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x413: IF (Stack[-1] == 0) GOTO 0x42c; Pop(1)

0x414: Stack[-2] = (int) 0
0x415: Pop(0); Push((bool) Stack[-2] < Stack[-4])
0x416: IF (Stack[-1] == 0) GOTO 0x42c; Pop(1)

0x417: @@ get(Stack[-3], Stack[-2])
0x418: Pop(0)
0x419: @@ get(Stack[-1], Stack[-2])
0x41a: Pop(0)
0x41b: Pop(0); Push((bool) Stack[-11] == Stack[-3])
0x41c: IF (Stack[-1] == 0) GOTO 0x429; Pop(1)

0x41d: PushEmpty(int, object)
0x41e: Stack[-1] = Stack[-13]
0x41f: Call2 0x67c

0x420: Pop(1)
0x421: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x422: IF (Stack[-1] == 0) GOTO 0x427; Pop(1)

0x423: Push((int) 1)
0x424: Pop(1); Push(Stack[-2] + Stack[-1]);
0x425: @@ set(Stack[-3], Stack[-1])
0x426: Pop(1)
0x427: Stack[-12] = (bool) 1
0x428: Return(); Pop(8)

0x429: Push((int) 1)
0x42a: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x42b: GOTO 0x415

0x42c: Push((int) 12)
0x42d: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x42e: IF (Stack[-1] == 0) GOTO 0x436; Pop(1)

0x42f: @@ add(Stack[-11])
0x430: Pop(0)
0x431: Push((int) 1)
0x432: @@ add(Stack[-1])
0x433: Pop(1)
0x434: Stack[-12] = (bool) 1
0x435: Return(); Pop(8)

0x436: Stack[-12] = (bool) 0
0x437: Return(); Pop(8)

0x438: Stack[-3] = 0
0x439: PushEmpty(int, object, int, int, int, object, int, int)
0x43a: @@ size(Stack[-4])
0x43b: Pop(0)
0x43c: Stack[-2] = (int) 0
0x43d: Pop(0); Push((bool) Stack[-2] < Stack[-4])
0x43e: IF (Stack[-1] == 0) GOTO 0x456; Pop(1)

0x43f: @@ get(Stack[-3], Stack[-2])
0x440: Pop(0)
0x441: @@ get(Stack[-1], Stack[-2])
0x442: Pop(0)
0x443: Pop(0); Push((bool) Stack[-11] == Stack[-3])
0x444: IF (Stack[-1] == 0) GOTO 0x453; Pop(1)

0x445: Push((int) -1)
0x446: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x447: Push((int) 0)
0x448: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x449: IF (Stack[-1] == 0) GOTO 0x44f; Pop(1)

0x44a: @@ remove(Stack[-2])
0x44b: Pop(0)
0x44c: @@ remove(Stack[-2])
0x44d: Pop(0)
0x44e: GOTO 0x451

0x44f: @@ set(Stack[-2], Stack[-1])
0x450: Pop(0)
0x451: Stack[-12] = (bool) 1
0x452: Return(); Pop(8)

0x453: Push((int) 1)
0x454: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x455: GOTO 0x43d

0x456: Stack[-12] = (bool) 0
0x457: Return(); Pop(8)

0x458: Stack[-3] = 0
0x459: PushEmpty()
0x45a: Stack[2 + Tasks[-1].StackPointer] = Stack[2 + Tasks[-1].StackPointer] + Stack[-1]; Pop(0);
0x45b: Stack[3 + Tasks[-1].StackPointer] = Stack[3 + Tasks[-1].StackPointer] - Stack[-1]; Pop(0);
0x45c: PushEmpty()
0x45d: Call2 0x32a

0x45e: Pop(0)
0x45f: PushEmpty()
0x460: Call2 0x32e

0x461: Pop(0)
0x462: Return(); Pop(0)

0x463: PushEmpty(int, object, int, int, int, int, object, int, int, int)
0x464: @@ size(Stack[-5])
0x465: Pop(0)
0x466: Pop(0); Push(Stack[-11] + Stack[0 + StackPtr]);
0x467: Pop(1); Push((bool) Stack[-1] >= Stack[-6])
0x468: IF (Stack[-1] == 0) GOTO 0x46a; Pop(1)

0x469: Return(); Pop(10)

0x46a: Pop(0); Push(Stack[-11] + Stack[0 + StackPtr]);
0x46b: @@ get(Stack[-5], Stack[-1])
0x46c: Pop(1)
0x46d: PushEmpty(bool, object, int, bool)
0x46e: Stack[-3] = Stack[-8]
0x46f: Stack[-2] = Stack[25 + Tasks[-1].StackPointer]
0x470: Stack[-1] = (bool) 0
0x471: Call2 0x6ca

0x472: Pop(3)
0x473: IF (Stack[-1] == 0) GOTO 0x475; Pop(1)

0x474: Return(); Pop(10)

0x475: Pop(0); Push(Stack[-11] + Stack[0 + StackPtr]);
0x476: @@ get(Stack[-4], Stack[-1])
0x477: Pop(1)
0x478: Pop(0); Push(Stack[-11] + Stack[0 + StackPtr]);
0x479: @@ get(Stack[-3], Stack[-1])
0x47a: Pop(1)
0x47b: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x47c: IF (Stack[-1] == 0) GOTO 0x49d; Pop(1)

0x47d: PushEmpty(int, object, int)
0x47e: Stack[-2] = Stack[-7]
0x47f: Stack[-1] = Stack[25 + Tasks[-1].StackPointer]
0x480: Call2 0x623

0x481: Pop(2)
0x482: PushEmpty(float, object, int, int)
0x483: Stack[-3] = Stack[26 + Tasks[-1].StackPointer]
0x484: Stack[-2] = Stack[24 + Tasks[-1].StackPointer]
0x485: Stack[-1] = Stack[25 + Tasks[-1].StackPointer]
0x486: Call2 0x5f4

0x487: Pop(3)
0x488: Stack[-3] = Stack[-2] * Stack[-1]; Pop(2);
0x489: Pop(0); Push((bool) Stack[-1] <= Stack[2 + Tasks[-1].StackPointer])
0x48a: IF (Stack[-1] == 0) GOTO 0x49d; Pop(1)

0x48b: PushEmpty(bool, object)
0x48c: Stack[-1] = Stack[-6]
0x48d: Call2 0x390

0x48e: Pop(1)
0x48f: IF (Stack[-1] == 0) GOTO 0x49d; Pop(1)

0x490: Push((int) 1)
0x491: Stack[-4] = Stack[-4] + Stack[-1]; Pop(1);
0x492: Pop(0); Push(Stack[-11] + Stack[0 + StackPtr]);
0x493: @@ set(Stack[-1], Stack[-4])
0x494: Pop(1)
0x495: PushEmpty(object)
0x496: Stack[-1] = Stack[-5]
0x497: Call2 0x0

0x498: Pop(1)
0x499: PushEmpty(int)
0x49a: Stack[-1] = -Stack[-2]; Pop(0);
0x49b: Call2 0x459

0x49c: Pop(1)
0x49d: PushEmpty()
0x49e: Call2 0x274

0x49f: Pop(0)
0x4a0: PushEmpty()
0x4a1: Call2 0x2cf

0x4a2: Pop(0)
0x4a3: Return(); Pop(10)

0x4a4: Stack[-4] = 0
0x4a5: PushEmpty(int, object, int, int, int, int, object, int, int, int)
0x4a6: @@ size(Stack[-5])
0x4a7: Pop(0)
0x4a8: Pop(0); Push(Stack[-11] + Stack[0 + StackPtr]);
0x4a9: Pop(1); Push((bool) Stack[-1] >= Stack[-6])
0x4aa: IF (Stack[-1] == 0) GOTO 0x4ac; Pop(1)

0x4ab: Return(); Pop(10)

0x4ac: Pop(0); Push(Stack[-11] + Stack[0 + StackPtr]);
0x4ad: @@ get(Stack[-5], Stack[-1])
0x4ae: Pop(1)
0x4af: PushEmpty(bool, object, int, bool)
0x4b0: Stack[-3] = Stack[-8]
0x4b1: Stack[-2] = Stack[25 + Tasks[-1].StackPointer]
0x4b2: Stack[-1] = (bool) 0
0x4b3: Call2 0x6ca

0x4b4: Pop(3)
0x4b5: IF (Stack[-1] == 0) GOTO 0x4b7; Pop(1)

0x4b6: Return(); Pop(10)

0x4b7: Pop(0); Push(Stack[-11] + Stack[0 + StackPtr]);
0x4b8: @@ get(Stack[-4], Stack[-1])
0x4b9: Pop(1)
0x4ba: Pop(0); Push(Stack[-11] + Stack[0 + StackPtr]);
0x4bb: @@ get(Stack[-3], Stack[-1])
0x4bc: Pop(1)
0x4bd: Push((int) 0)
0x4be: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x4bf: IF (Stack[-1] == 0) GOTO 0x4dd; Pop(1)

0x4c0: PushEmpty(bool, object)
0x4c1: Stack[-1] = Stack[-6]
0x4c2: Call2 0x3cd

0x4c3: Pop(2)
0x4c4: PushEmpty(object)
0x4c5: Stack[-1] = Stack[-5]
0x4c6: Call2 0x18

0x4c7: Pop(1)
0x4c8: Push((int) -1)
0x4c9: Stack[-4] = Stack[-4] + Stack[-1]; Pop(1);
0x4ca: Pop(0); Push(Stack[-11] + Stack[0 + StackPtr]);
0x4cb: @@ set(Stack[-1], Stack[-4])
0x4cc: Pop(1)
0x4cd: PushEmpty(int, object, int)
0x4ce: Stack[-2] = Stack[-7]
0x4cf: Stack[-1] = Stack[25 + Tasks[-1].StackPointer]
0x4d0: Call2 0x623

0x4d1: Pop(2)
0x4d2: PushEmpty(float, object, int, int)
0x4d3: Stack[-3] = Stack[26 + Tasks[-1].StackPointer]
0x4d4: Stack[-2] = Stack[24 + Tasks[-1].StackPointer]
0x4d5: Stack[-1] = Stack[25 + Tasks[-1].StackPointer]
0x4d6: Call2 0x5f4

0x4d7: Pop(3)
0x4d8: Stack[-3] = Stack[-2] * Stack[-1]; Pop(2);
0x4d9: PushEmpty(int)
0x4da: Stack[-1] = Stack[-2]
0x4db: Call2 0x459

0x4dc: Pop(1)
0x4dd: PushEmpty()
0x4de: Call2 0x274

0x4df: Pop(0)
0x4e0: PushEmpty()
0x4e1: Call2 0x2cf

0x4e2: Pop(0)
0x4e3: Return(); Pop(10)

0x4e4: Stack[-4] = 0
0x4e5: PushEmpty(int, object, int, int, int, int, object, int, int, int)
0x4e6: @@ size(Stack[-5])
0x4e7: Pop(0)
0x4e8: Pop(0); Push(Stack[-11] + Stack[1 + StackPtr]);
0x4e9: Pop(1); Push((bool) Stack[-1] >= Stack[-6])
0x4ea: IF (Stack[-1] == 0) GOTO 0x4ec; Pop(1)

0x4eb: Return(); Pop(10)

0x4ec: Pop(0); Push(Stack[-11] + Stack[1 + StackPtr]);
0x4ed: @@ get(Stack[-5], Stack[-1])
0x4ee: Pop(1)
0x4ef: PushEmpty(bool, object, int, bool)
0x4f0: Stack[-3] = Stack[-8]
0x4f1: Stack[-2] = Stack[25 + Tasks[-1].StackPointer]
0x4f2: Stack[-1] = (bool) 1
0x4f3: Call2 0x6ca

0x4f4: Pop(3)
0x4f5: IF (Stack[-1] == 0) GOTO 0x4f7; Pop(1)

0x4f6: Return(); Pop(10)

0x4f7: Pop(0); Push(Stack[-11] + Stack[1 + StackPtr]);
0x4f8: @@ get(Stack[-4], Stack[-1])
0x4f9: Pop(1)
0x4fa: Pop(0); Push(Stack[-11] + Stack[1 + StackPtr]);
0x4fb: @@ get(Stack[-3], Stack[-1])
0x4fc: Pop(1)
0x4fd: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x4fe: IF (Stack[-1] == 0) GOTO 0x51c; Pop(1)

0x4ff: PushEmpty(bool, object)
0x500: Stack[-1] = Stack[-6]
0x501: Call2 0x3cd

0x502: Pop(2)
0x503: PushEmpty(object)
0x504: Stack[-1] = Stack[-5]
0x505: Call2 0x18

0x506: Pop(1)
0x507: Push((int) 1)
0x508: Stack[-4] = Stack[-4] + Stack[-1]; Pop(1);
0x509: Pop(0); Push(Stack[-11] + Stack[1 + StackPtr]);
0x50a: @@ set(Stack[-1], Stack[-4])
0x50b: Pop(1)
0x50c: PushEmpty(int, object, int)
0x50d: Stack[-2] = Stack[-7]
0x50e: Stack[-1] = Stack[25 + Tasks[-1].StackPointer]
0x50f: Call2 0x623

0x510: Pop(2)
0x511: PushEmpty(float, object, int, int)
0x512: Stack[-3] = Stack[26 + Tasks[-1].StackPointer]
0x513: Stack[-2] = Stack[24 + Tasks[-1].StackPointer]
0x514: Stack[-1] = Stack[25 + Tasks[-1].StackPointer]
0x515: Call2 0x5da

0x516: Pop(3)
0x517: Stack[-3] = Stack[-2] * Stack[-1]; Pop(2);
0x518: PushEmpty(int)
0x519: Stack[-1] = Stack[-2]
0x51a: Call2 0x459

0x51b: Pop(1)
0x51c: PushEmpty()
0x51d: Call2 0x274

0x51e: Pop(0)
0x51f: PushEmpty()
0x520: Call2 0x2cf

0x521: Pop(0)
0x522: Return(); Pop(10)

0x523: Stack[-4] = 0
0x524: PushEmpty(int, object, int, int, int, int, object, int, int, int)
0x525: @@ size(Stack[-5])
0x526: Pop(0)
0x527: Pop(0); Push(Stack[-11] + Stack[1 + StackPtr]);
0x528: Pop(1); Push((bool) Stack[-1] >= Stack[-6])
0x529: IF (Stack[-1] == 0) GOTO 0x52b; Pop(1)

0x52a: Return(); Pop(10)

0x52b: Pop(0); Push(Stack[-11] + Stack[1 + StackPtr]);
0x52c: @@ get(Stack[-5], Stack[-1])
0x52d: Pop(1)
0x52e: PushEmpty(bool, object, int, bool)
0x52f: Stack[-3] = Stack[-8]
0x530: Stack[-2] = Stack[25 + Tasks[-1].StackPointer]
0x531: Stack[-1] = (bool) 1
0x532: Call2 0x6ca

0x533: Pop(3)
0x534: IF (Stack[-1] == 0) GOTO 0x536; Pop(1)

0x535: Return(); Pop(10)

0x536: Pop(0); Push(Stack[-11] + Stack[1 + StackPtr]);
0x537: @@ get(Stack[-4], Stack[-1])
0x538: Pop(1)
0x539: Pop(0); Push(Stack[-11] + Stack[1 + StackPtr]);
0x53a: @@ get(Stack[-3], Stack[-1])
0x53b: Pop(1)
0x53c: Push((int) 0)
0x53d: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x53e: IF (Stack[-1] == 0) GOTO 0x56b; Pop(1)

0x53f: PushEmpty(int, object, int)
0x540: Stack[-2] = Stack[-7]
0x541: Stack[-1] = Stack[25 + Tasks[-1].StackPointer]
0x542: Call2 0x623

0x543: Pop(2)
0x544: PushEmpty(float, object, int, int)
0x545: Stack[-3] = Stack[26 + Tasks[-1].StackPointer]
0x546: Stack[-2] = Stack[24 + Tasks[-1].StackPointer]
0x547: Stack[-1] = Stack[25 + Tasks[-1].StackPointer]
0x548: Call2 0x5da

0x549: Pop(3)
0x54a: Stack[-3] = Stack[-2] * Stack[-1]; Pop(2);
0x54b: Pop(0); Push((bool) Stack[-1] <= Stack[2 + Tasks[-1].StackPointer])
0x54c: IF (Stack[-1] == 0) GOTO 0x56b; Pop(1)

0x54d: PushEmpty(bool, object)
0x54e: Stack[-1] = Stack[-6]
0x54f: Call2 0x390

0x550: Pop(1)
0x551: IF (Stack[-1] == 0) GOTO 0x56b; Pop(1)

0x552: Push((int) -1)
0x553: Stack[-4] = Stack[-4] + Stack[-1]; Pop(1);
0x554: PushEmpty(object)
0x555: Stack[-1] = Stack[-5]
0x556: Call2 0x0

0x557: Pop(1)
0x558: Pop(0); Push(Stack[-11] + Stack[1 + StackPtr]);
0x559: @@ set(Stack[-1], Stack[-4])
0x55a: Pop(1)
0x55b: PushEmpty(int)
0x55c: PushEmpty(int, object, int)
0x55d: Stack[-2] = Stack[-8]
0x55e: Stack[-1] = Stack[25 + Tasks[-1].StackPointer]
0x55f: Call2 0x623

0x560: Pop(2)
0x561: Pop(1); Push(( -Stack[-1])
0x562: PushEmpty(float, object, int, int)
0x563: Stack[-3] = Stack[26 + Tasks[-1].StackPointer]
0x564: Stack[-2] = Stack[24 + Tasks[-1].StackPointer]
0x565: Stack[-1] = Stack[25 + Tasks[-1].StackPointer]
0x566: Call2 0x5da

0x567: Pop(3)
0x568: Stack[-3] = Stack[-2] * Stack[-1]; Pop(2);
0x569: Call2 0x459

0x56a: Pop(1)
0x56b: PushEmpty()
0x56c: Call2 0x274

0x56d: Pop(0)
0x56e: PushEmpty()
0x56f: Call2 0x2cf

0x570: Pop(0)
0x571: Return(); Pop(10)

0x572: Stack[-4] = 0
0x573: PushEmpty(int, int, int, int)
0x574: @@ size(Stack[-2])
0x575: Pop(0)
0x576: Pop(0); Push(Stack[-5] + Stack[0 + StackPtr]);
0x577: Pop(1); Push((bool) Stack[-1] >= Stack[-3])
0x578: IF (Stack[-1] == 0) GOTO 0x57b; Pop(1)

0x579: Stack[-6] = (int) 0
0x57a: Return(); Pop(4)

0x57b: Pop(0); Push(Stack[-5] + Stack[0 + StackPtr]);
0x57c: @@ get(Stack[-2], Stack[-1])
0x57d: Pop(1)
0x57e: Stack[-6] = Stack[-1]
0x57f: Return(); Pop(4)

0x580: PushEmpty(int, int, int, int)
0x581: @@ size(Stack[-2])
0x582: Pop(0)
0x583: Pop(0); Push(Stack[-5] + Stack[1 + StackPtr]);
0x584: Pop(1); Push((bool) Stack[-1] >= Stack[-3])
0x585: IF (Stack[-1] == 0) GOTO 0x588; Pop(1)

0x586: Stack[-6] = (int) 0
0x587: Return(); Pop(4)

0x588: Pop(0); Push(Stack[-5] + Stack[1 + StackPtr]);
0x589: @@ get(Stack[-2], Stack[-1])
0x58a: Pop(1)
0x58b: Stack[-6] = Stack[-1]
0x58c: Return(); Pop(4)

0x58d: PushEmpty(float, float)
0x58e: @ GetGameTime(Stack[-1])
0x58f: Pop(0)
0x590: Push((int) 1)
0x591: PushEmpty(int)
0x592: Push((int) 24)
0x593: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x594: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x595: Return(); Pop(2)

0x596: PushEmpty()
0x597: Push((int) 1)
0x598: Pop(1); Push(Stack[-2] + Stack[-1]);
0x599: Push((int) 10)
0x59a: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x59b: IF (Stack[-1] == 0) GOTO 0x5a1; Pop(1)

0x59c: Push("l_slot0")
0x59d: Push((int) 1)
0x59e: Pop(1); Push(Stack[-3] + Stack[-1]);
0x59f: Stack[-4] = Stack[-2] + Stack[-1]; Pop(2);
0x5a0: Return(); Pop(0)

0x5a1: Push("l_slot")
0x5a2: Push((int) 1)
0x5a3: Pop(1); Push(Stack[-3] + Stack[-1]);
0x5a4: Stack[-4] = Stack[-2] + Stack[-1]; Pop(2);
0x5a5: Return(); Pop(0)

0x5a6: PushEmpty()
0x5a7: Push((int) 1)
0x5a8: Pop(1); Push(Stack[-2] + Stack[-1]);
0x5a9: Push((int) 10)
0x5aa: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x5ab: IF (Stack[-1] == 0) GOTO 0x5b1; Pop(1)

0x5ac: Push("r_slot0")
0x5ad: Push((int) 1)
0x5ae: Pop(1); Push(Stack[-3] + Stack[-1]);
0x5af: Stack[-4] = Stack[-2] + Stack[-1]; Pop(2);
0x5b0: Return(); Pop(0)

0x5b1: Push("r_slot")
0x5b2: Push((int) 1)
0x5b3: Pop(1); Push(Stack[-3] + Stack[-1]);
0x5b4: Stack[-4] = Stack[-2] + Stack[-1]; Pop(2);
0x5b5: Return(); Pop(0)

0x5b6: PushEmpty(int, int)
0x5b7: Stack[-1] = (int) 0
0x5b8: Push((int) 18)
0x5b9: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x5ba: IF (Stack[-1] == 0) GOTO 0x5c6; Pop(1)

0x5bb: PushEmpty(string, int)
0x5bc: Stack[-1] = Stack[-3]
0x5bd: Call2 0x596

0x5be: Pop(1)
0x5bf: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x5c0: IF (Stack[-1] == 0) GOTO 0x5c3; Pop(1)

0x5c1: Stack[-5] = Stack[-1]
0x5c2: Return(); Pop(2)

0x5c3: Push((int) 1)
0x5c4: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x5c5: GOTO 0x5b8

0x5c6: Stack[-5] = (int) -1
0x5c7: Return(); Pop(2)

0x5c8: PushEmpty(int, int)
0x5c9: Stack[-1] = (int) 0
0x5ca: Push((int) 18)
0x5cb: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x5cc: IF (Stack[-1] == 0) GOTO 0x5d8; Pop(1)

0x5cd: PushEmpty(string, int)
0x5ce: Stack[-1] = Stack[-3]
0x5cf: Call2 0x5a6

0x5d0: Pop(1)
0x5d1: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x5d2: IF (Stack[-1] == 0) GOTO 0x5d5; Pop(1)

0x5d3: Stack[-5] = Stack[-1]
0x5d4: Return(); Pop(2)

0x5d5: Push((int) 1)
0x5d6: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x5d7: GOTO 0x5ca

0x5d8: Stack[-5] = (int) -1
0x5d9: Return(); Pop(2)

0x5da: PushEmpty(float, int, bool, float, int, bool)
0x5db: Push((int) 0)
0x5dc: Pop(1); Push((bool) Stack[-8] != Stack[-1])
0x5dd: IF (Stack[-1] == 0) GOTO 0x5e0; Pop(1)

0x5de: Stack[-10] = (int) 1
0x5df: Return(); Pop(6)

0x5e0: Stack[-3] = (int) 1
0x5e1: Stack[-2] = (int) 1
0x5e2: Pop(0); Push((bool) Stack[-2] <= Stack[-8])
0x5e3: IF (Stack[-1] == 0) GOTO 0x5f1; Pop(1)

0x5e4: Push("sellf")
0x5e5: Pop(1); Push(Stack[-1] + Stack[-3]);
0x5e6: @@ HasProperty(Stack[-1], Stack[-2])
0x5e7: Pop(1)
0x5e8: Push(Stack[-1])
0x5e9: IF (Stack[-1] == 0) GOTO 0x5ee; Pop(1)

0x5ea: Push("sellf")
0x5eb: Pop(1); Push(Stack[-1] + Stack[-3]);
0x5ec: @@ GetProperty(Stack[-1], Stack[-4])
0x5ed: Pop(1)
0x5ee: Push((int) 1)
0x5ef: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x5f0: GOTO 0x5e2

0x5f1: Push((int) 100)
0x5f2: Stack[-11] = Stack[-4] / Stack[-1]; Pop(1);
0x5f3: Return(); Pop(6)

0x5f4: PushEmpty(float, int, bool, float, int, bool)
0x5f5: Push((int) 0)
0x5f6: Pop(1); Push((bool) Stack[-8] != Stack[-1])
0x5f7: IF (Stack[-1] == 0) GOTO 0x5fa; Pop(1)

0x5f8: Stack[-10] = (int) 1
0x5f9: Return(); Pop(6)

0x5fa: Stack[-3] = (int) 1
0x5fb: Stack[-2] = (int) 1
0x5fc: Pop(0); Push((bool) Stack[-2] <= Stack[-8])
0x5fd: IF (Stack[-1] == 0) GOTO 0x60b; Pop(1)

0x5fe: Push("buyf")
0x5ff: Pop(1); Push(Stack[-1] + Stack[-3]);
0x600: @@ HasProperty(Stack[-1], Stack[-2])
0x601: Pop(1)
0x602: Push(Stack[-1])
0x603: IF (Stack[-1] == 0) GOTO 0x608; Pop(1)

0x604: Push("buyf")
0x605: Pop(1); Push(Stack[-1] + Stack[-3]);
0x606: @@ GetProperty(Stack[-1], Stack[-4])
0x607: Pop(1)
0x608: Push((int) 1)
0x609: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x60a: GOTO 0x5fc

0x60b: Push((int) 100)
0x60c: Stack[-11] = Stack[-4] / Stack[-1]; Pop(1);
0x60d: Return(); Pop(6)

0x60e: PushEmpty(object, bool, int, object, bool, int)
0x60f: @ GetContainer(Stack[-3])
0x610: Pop(0)
0x611: Push("barter")
0x612: @@ HasProperty(Stack[-1], Stack[-3])
0x613: Pop(1)
0x614: Pop(0); Push((bool) Stack[-2] == 0)
0x615: IF (Stack[-1] == 0) GOTO 0x618; Pop(1)

0x616: Stack[-7] = (int) 0
0x617: Return(); Pop(6)

0x618: Push("barter")
0x619: @@ GetProperty(Stack[-1], Stack[-2])
0x61a: Pop(1)
0x61b: Stack[-7] = Stack[-1]
0x61c: Return(); Pop(6)

0x61d: Stack[-3] = 0
0x61e: PushEmpty(int, int)
0x61f: @@ GetItemID(Stack[-1])
0x620: Pop(0)
0x621: Stack[-4] = Stack[-1]
0x622: Return(); Pop(2)

0x623: PushEmpty(int, int, int, string, bool, bool, int, bool, int, int, int, int, string, bool, bool, int, bool, int)
0x624: Push((int) 0)
0x625: Pop(1); Push((bool) Stack[-20] == Stack[-1])
0x626: IF (Stack[-1] == 0) GOTO 0x657; Pop(1)

0x627: PushEmpty(int)
0x628: Call2 0x58d

0x629: Stack[-10] = Stack[-1]
0x62a: Pop(1)
0x62b: Stack[-8] = (int) 0
0x62c: Stack[-7] = (int) 1
0x62d: Pop(0); Push((bool) Stack[-7] <= Stack[-9])
0x62e: IF (Stack[-1] == 0) GOTO 0x646; Pop(1)

0x62f: Stack[-6] = "Price"
0x630: Push((int) 1)
0x631: Pop(1); Push((bool) Stack[-8] != Stack[-1])
0x632: IF (Stack[-1] == 0) GOTO 0x634; Pop(1)

0x633: Stack[-6] = Stack[-6] + Stack[-7]; Pop(0);
0x634: PushEmpty(int, object)
0x635: Stack[-1] = Stack[-22]
0x636: Call2 0x61e

0x637: Pop(1)
0x638: @ HasInvItemProperty(Stack[-6], Stack[-1], Stack[-7])
0x639: Pop(1)
0x63a: Pop(0); Push((bool) Stack[-5] == 0)
0x63b: IF (Stack[-1] == 0) GOTO 0x63d; Pop(1)

0x63c: GOTO 0x643

0x63d: PushEmpty(int, object)
0x63e: Stack[-1] = Stack[-22]
0x63f: Call2 0x61e

0x640: Pop(1)
0x641: @ GetInvItemProperty(Stack[-9], Stack[-1], Stack[-7])
0x642: Pop(1)
0x643: Push((int) 1)
0x644: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x645: GOTO 0x62d

0x646: Push("durability")
0x647: @@ HasProperty(Stack[-5], Stack[-1])
0x648: Pop(1)
0x649: Push(Stack[-4])
0x64a: IF (Stack[-1] == 0) GOTO 0x655; Pop(1)

0x64b: Push("durability")
0x64c: @@ GetProperty(Stack[-4], Stack[-1])
0x64d: Pop(1)
0x64e: Push((float)0.5)
0x64f: Push((float)1.0)
0x650: Push((float)100.0)
0x651: Pop(1); Push(Stack[-6] / Stack[-1]);
0x652: Pop(2); Push(Stack[-2] + Stack[-1]);
0x653: Pop(2); Push(Stack[-2] * Stack[-1]);
0x654: Stack[-9] = Stack[-9] * Stack[-1]; Pop(1);
0x655: Stack[-21] = Stack[-8]
0x656: Return(); Pop(18)

0x657: PushEmpty(int, object)
0x658: Stack[-1] = Stack[-22]
0x659: Call2 0x61e

0x65a: Pop(1)
0x65b: Push("BarterPrice")
0x65c: Pop(1); Push(Stack[-1] + Stack[-21]);
0x65d: @ HasInvItemProperty(Stack[-4], Stack[-2], Stack[-1])
0x65e: Pop(2)
0x65f: Pop(0); Push((bool) Stack[-2] == 0)
0x660: IF (Stack[-1] == 0) GOTO 0x663; Pop(1)

0x661: Stack[-21] = (int) 0
0x662: Return(); Pop(18)

0x663: PushEmpty(int, object)
0x664: Stack[-1] = Stack[-22]
0x665: Call2 0x61e

0x666: Pop(1)
0x667: Push("BarterPrice")
0x668: Pop(1); Push(Stack[-1] + Stack[-21]);
0x669: @ GetInvItemProperty(Stack[-3], Stack[-2], Stack[-1])
0x66a: Pop(2)
0x66b: Push((int) 0)
0x66c: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x66d: IF (Stack[-1] == 0) GOTO 0x670; Pop(1)

0x66e: Stack[-21] = Stack[-1]
0x66f: Return(); Pop(18)

0x670: Stack[-21] = -Stack[-1]; Pop(0);
0x671: Return(); Pop(18)

0x672: PushEmpty(int, int)
0x673: PushEmpty(int, object)
0x674: Stack[-1] = Stack[-5]
0x675: Call2 0x61e

0x676: Pop(1)
0x677: Push("Category")
0x678: @ GetInvItemProperty(Stack[-3], Stack[-2], Stack[-1])
0x679: Pop(2)
0x67a: Stack[-4] = Stack[-1]
0x67b: Return(); Pop(2)

0x67c: PushEmpty(int, int)
0x67d: PushEmpty(int, object)
0x67e: Stack[-1] = Stack[-5]
0x67f: Call2 0x61e

0x680: Pop(1)
0x681: @ GetItemMaxStackSize(Stack[-1], Stack[-2])
0x682: Pop(1)
0x683: Stack[-4] = Stack[-1]
0x684: Return(); Pop(2)

0x685: PushEmpty(int, object, int, object)
0x686: @ GetContainer(Stack[-1])
0x687: Pop(0)
0x688: @@ GetItemCount(Stack[-2])
0x689: Pop(0)
0x68a: Stack[-5] = Stack[-2]
0x68b: Return(); Pop(4)

0x68c: Stack[-1] = 0
0x68d: PushEmpty(int, object, int, object)
0x68e: @ GetPlayerContainer(Stack[-1])
0x68f: Pop(0)
0x690: @@ GetItemCount(Stack[-2], Stack[-5])
0x691: Pop(0)
0x692: Stack[-6] = Stack[-2]
0x693: Return(); Pop(4)

0x694: Stack[-1] = 0
0x695: PushEmpty(object, object, object, object)
0x696: @ GetPlayerContainer(Stack[-2])
0x697: Pop(0)
0x698: @@ GetItem(Stack[-1], Stack[-5], Stack[-6])
0x699: Pop(0)
0x69a: Stack[-7] = Stack[-1]
0x69b: Return(); Pop(4)

0x69c: Stack[-1] = 0
0x69d: Stack[-2] = 0
0x69e: PushEmpty(object, int, object, int)
0x69f: @ GetPlayerContainer(Stack[-2])
0x6a0: Pop(0)
0x6a1: @@ GetItemAmount(Stack[-1], Stack[-5], Stack[-6])
0x6a2: Pop(0)
0x6a3: Stack[-7] = Stack[-1]
0x6a4: Return(); Pop(4)

0x6a5: Stack[-2] = 0
0x6a6: PushEmpty(object, bool, object, bool)
0x6a7: @ GetPlayerContainer(Stack[-2])
0x6a8: Pop(0)
0x6a9: @@ IsItemSelected(Stack[-1], Stack[-5], Stack[-6])
0x6aa: Pop(0)
0x6ab: Stack[-7] = Stack[-1]
0x6ac: Return(); Pop(4)

0x6ad: Stack[-2] = 0
0x6ae: PushEmpty(object, object, object, object)
0x6af: @ GetContainer(Stack[-2])
0x6b0: Pop(0)
0x6b1: @@ GetItem(Stack[-1], Stack[-5])
0x6b2: Pop(0)
0x6b3: Stack[-6] = Stack[-1]
0x6b4: Return(); Pop(4)

0x6b5: Stack[-1] = 0
0x6b6: Stack[-2] = 0
0x6b7: PushEmpty(object, int, object, int)
0x6b8: @ GetContainer(Stack[-2])
0x6b9: Pop(0)
0x6ba: @@ GetItemAmount(Stack[-1], Stack[-5])
0x6bb: Pop(0)
0x6bc: Stack[-6] = Stack[-1]
0x6bd: Return(); Pop(4)

0x6be: Stack[-2] = 0
0x6bf: PushEmpty()
0x6c0: PushEmpty(int, object)
0x6c1: Stack[-1] = Stack[-4]
0x6c2: Call2 0x61e

0x6c3: Pop(1)
0x6c4: PushEmpty(int, object)
0x6c5: Stack[-1] = Stack[-4]
0x6c6: Call2 0x61e

0x6c7: Pop(1)
0x6c8: Stack[-5] = Stack[-2] == Stack[-1]; Pop(2);
0x6c9: Return(); Pop(0)

0x6ca: PushEmpty(bool, int, bool, int)
0x6cb: Push((int) 0)
0x6cc: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x6cd: IF (Stack[-1] == 0) GOTO 0x6d0; Pop(1)

0x6ce: Stack[-8] = (bool) 0
0x6cf: Return(); Pop(4)

0x6d0: PushEmpty(int, object)
0x6d1: Stack[-1] = Stack[-9]
0x6d2: Call2 0x61e

0x6d3: Pop(1)
0x6d4: Push("BarterPrice")
0x6d5: Pop(1); Push(Stack[-1] + Stack[-8]);
0x6d6: @ HasInvItemProperty(Stack[-4], Stack[-2], Stack[-1])
0x6d7: Pop(2)
0x6d8: Pop(0); Push((bool) Stack[-2] == 0)
0x6d9: IF (Stack[-1] == 0) GOTO 0x6dc; Pop(1)

0x6da: Stack[-8] = (bool) 1
0x6db: Return(); Pop(4)

0x6dc: PushEmpty(int, object)
0x6dd: Stack[-1] = Stack[-9]
0x6de: Call2 0x61e

0x6df: Pop(1)
0x6e0: Push("BarterPrice")
0x6e1: Pop(1); Push(Stack[-1] + Stack[-8]);
0x6e2: @ GetInvItemProperty(Stack[-3], Stack[-2], Stack[-1])
0x6e3: Pop(2)
0x6e4: PushEmpty(bool)
0x6e5: Stack[-1] = (bool) 0
0x6e6: Push(Stack[-6])
0x6e7: IF (Stack[-1] == 0) GOTO 0x6ec; Pop(1)

0x6e8: Push((int) 0)
0x6e9: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x6ea: IF (Stack[-1] == 0) GOTO 0x6ec; Pop(1)

0x6eb: Stack[-1] = (bool) 1
0x6ec: IF (Stack[-1] == 0) GOTO 0x6ef; Pop(1)

0x6ed: Stack[-8] = (bool) 0
0x6ee: Return(); Pop(4)

0x6ef: PushEmpty(bool)
0x6f0: Stack[-1] = (bool) 0
0x6f1: Pop(0); Push((bool) Stack[-6] == 0)
0x6f2: IF (Stack[-1] == 0) GOTO 0x6f7; Pop(1)

0x6f3: Push((int) 0)
0x6f4: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x6f5: IF (Stack[-1] == 0) GOTO 0x6f7; Pop(1)

0x6f6: Stack[-1] = (bool) 1
0x6f7: IF (Stack[-1] == 0) GOTO 0x6fa; Pop(1)

0x6f8: Stack[-8] = (bool) 0
0x6f9: Return(); Pop(4)

0x6fa: Stack[-8] = (bool) 1
0x6fb: Return(); Pop(4)

0x6fc: PushEmpty(int, object, int, int, object, int)
0x6fd: @@ GetItemCount(Stack[-3], Stack[-7])
0x6fe: Pop(0)
0x6ff: Stack[-1] = (int) 0
0x700: Pop(0); Push((bool) Stack[-1] < Stack[-3])
0x701: IF (Stack[-1] == 0) GOTO 0x712; Pop(1)

0x702: @@ GetItem(Stack[-2], Stack[-1], Stack[-7])
0x703: Pop(0)
0x704: PushEmpty(bool, object, object)
0x705: Stack[-2] = Stack[-11]
0x706: Stack[-1] = Stack[-5]
0x707: Call2 0x6bf

0x708: Pop(2)
0x709: IF (Stack[-1] == 0) GOTO 0x70f; Pop(1)

0x70a: Push((int) 1)
0x70b: @@ RemoveItem(Stack[-2], Stack[-1], Stack[-8])
0x70c: Pop(1)
0x70d: Stack[-10] = (bool) 1
0x70e: Return(); Pop(6)

0x70f: Push((int) 1)
0x710: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x711: GOTO 0x700

0x712: Stack[-10] = (bool) 0
0x713: Return(); Pop(6)

0x714: Stack[-2] = 0
0x715: PushEmpty(bool, bool)
0x716: Push((int) 1)
0x717: @@ AddItem(Stack[-2], Stack[-5], Stack[-4], Stack[-1])
0x718: Pop(1)
0x719: Stack[-6] = Stack[-1]
0x71a: Return(); Pop(2)

