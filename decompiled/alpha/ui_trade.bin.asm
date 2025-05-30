GlobalVarCount = 0

Strings:
	size
	get
	remove
	add
	default
	cancel_button
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
	Price
	Item with id :
	 doesn't have price
	BarterPrice
	GetItemID
	Category
	GetItemCount
	GetItem
	GetItemAmount
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
	GetPlayerMoneyCount (1 args)
	SendMessage (2 args)
	SendMessage (3 args)
	GetPlayerContainer (1 args)
	Trace (1 args)
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
0xb: Call 0x62c

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
0x23: Call 0x62c

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
0x58: Call 0x595

0x59: Stack[25 + Tasks[-1].StackPointer] = Stack[-1]
0x5a: Pop(1)
0x5b: PushEmpty()
0x5c: Call 0xf2

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
0x76: Call 0x53d

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
0x81: Call 0x3f3

0x82: Pop(1)
0x83: GOTO 0x88

0x84: PushEmpty(int)
0x85: Stack[-1] = Stack[-2]
0x86: Call 0x435

0x87: Pop(1)
0x88: Return(); Pop(2)

0x89: PushEmpty(int, int, string)
0x8a: Stack[-2] = Stack[-8]
0x8b: Stack[-1] = Stack[-7]
0x8c: Call 0x54f

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
0x97: Call 0x475

0x98: Pop(1)
0x99: GOTO 0x9e

0x9a: PushEmpty(int)
0x9b: Stack[-1] = Stack[-2]
0x9c: Call 0x4b4

0x9d: Pop(1)
0x9e: Return(); Pop(2)

0x9f: Push("cancel_button")
0xa0: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0xa1: IF (Stack[-1] == 0) GOTO 0xa6; Pop(1)

0xa2: PushEmpty()
0xa3: Call 0xf2

0xa4: Pop(0)
0xa5: Return(); Pop(2)

0xa6: Push("l_scroll_button_top")
0xa7: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0xa8: IF (Stack[-1] == 0) GOTO 0xaf; Pop(1)

0xa9: Push((int) 2)
0xaa: Stack[0 + Tasks[-1].StackPointer] = Stack[0 + Tasks[-1].StackPointer] - Stack[-1]; Pop(1);
0xab: PushEmpty()
0xac: Call 0x209

0xad: Pop(0)
0xae: Return(); Pop(2)

0xaf: Push("l_scroll_button_bottom")
0xb0: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0xb1: IF (Stack[-1] == 0) GOTO 0xb8; Pop(1)

0xb2: Push((int) 2)
0xb3: Stack[0 + Tasks[-1].StackPointer] = Stack[0 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0xb4: PushEmpty()
0xb5: Call 0x209

0xb6: Pop(0)
0xb7: Return(); Pop(2)

0xb8: Push("r_scroll_button_top")
0xb9: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0xba: IF (Stack[-1] == 0) GOTO 0xc1; Pop(1)

0xbb: Push((int) 2)
0xbc: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] - Stack[-1]; Pop(1);
0xbd: PushEmpty()
0xbe: Call 0x25c

0xbf: Pop(0)
0xc0: Return(); Pop(2)

0xc1: Push("r_scroll_button_bottom")
0xc2: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0xc3: IF (Stack[-1] == 0) GOTO 0xc8; Pop(1)

0xc4: PushEmpty()
0xc5: Call 0x25c

0xc6: Pop(0)
0xc7: Return(); Pop(2)

0xc8: Push("l_scrollbar")
0xc9: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0xca: IF (Stack[-1] == 0) GOTO 0xd9; Pop(1)

0xcb: PushEmpty(int)
0xcc: Call 0x1e5

0xcd: Pop(0)
0xce: Pop(1); Push(Stack[-1] * Stack[-6]);
0xcf: Push((float)100.0)
0xd0: Pop(2); Push(Stack[-2] / Stack[-1]);
0xd1: Push((float)0.5)
0xd2: Stack[0 + Tasks[-1].StackPointer] = Stack[-2] + Stack[-1]; Pop(2);
0xd3: Push((int) 2)
0xd4: Stack[0 + Tasks[-1].StackPointer] = Stack[0 + Tasks[-1].StackPointer] * Stack[-1]; Pop(1);
0xd5: PushEmpty()
0xd6: Call 0x209

0xd7: Pop(0)
0xd8: Return(); Pop(2)

0xd9: Push("r_scrollbar")
0xda: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0xdb: IF (Stack[-1] == 0) GOTO 0xea; Pop(1)

0xdc: PushEmpty(int)
0xdd: Call 0x1f7

0xde: Pop(0)
0xdf: Pop(1); Push(Stack[-1] * Stack[-6]);
0xe0: Push((float)100.0)
0xe1: Pop(2); Push(Stack[-2] / Stack[-1]);
0xe2: Push((float)0.5)
0xe3: Stack[1 + Tasks[-1].StackPointer] = Stack[-2] + Stack[-1]; Pop(2);
0xe4: Push((int) 2)
0xe5: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] * Stack[-1]; Pop(1);
0xe6: PushEmpty()
0xe7: Call 0x25c

0xe8: Pop(0)
0xe9: Return(); Pop(2)

0xea: Push("ok_button")
0xeb: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0xec: IF (Stack[-1] == 0) GOTO 0xf1; Pop(1)

0xed: PushEmpty()
0xee: Call 0x2ba

0xef: Pop(0)
0xf0: Return(); Pop(2)

0xf1: Return(); Pop(2)

0xf2: PushEmpty(int, int)
0xf3: Stack[0 + Tasks[-1].StackPointer] = (int)0
0xf4: Stack[1 + Tasks[-1].StackPointer] = (int)0
0xf5: Stack[3 + Tasks[-1].StackPointer] = (int)0
0xf6: Push((int) 0)
0xf7: Pop(1); Push((bool) Stack[25 + Tasks[-1].StackPointer] == Stack[-1])
0xf8: IF (Stack[-1] == 0) GOTO 0xfc; Pop(1)

0xf9: @ GetPlayerMoneyCount(Stack[-2])
0xfa: Pop(0)
0xfb: GOTO 0xfd

0xfc: Stack[2 + Tasks[-1].StackPointer] = (int)0
0xfd: @@ clear()
0xfe: Pop(0)
0xff: @@ clear()
0x100: Pop(0)
0x101: @@ clear()
0x102: Pop(0)
0x103: @@ clear()
0x104: Pop(0)
0x105: @@ clear()
0x106: Pop(0)
0x107: @@ clear()
0x108: Pop(0)
0x109: @@ clear()
0x10a: Pop(0)
0x10b: @@ clear()
0x10c: Pop(0)
0x10d: @@ clear()
0x10e: Pop(0)
0x10f: @@ clear()
0x110: Pop(0)
0x111: @@ clear()
0x112: Pop(0)
0x113: @@ clear()
0x114: Pop(0)
0x115: @@ clear()
0x116: Pop(0)
0x117: @@ clear()
0x118: Pop(0)
0x119: @@ clear()
0x11a: Pop(0)
0x11b: @@ clear()
0x11c: Pop(0)
0x11d: @@ clear()
0x11e: Pop(0)
0x11f: @@ clear()
0x120: Pop(0)
0x121: PushEmpty()
0x122: Call 0x189

0x123: Pop(0)
0x124: PushEmpty()
0x125: Call 0x153

0x126: Pop(0)
0x127: PushEmpty()
0x128: Call 0x1a8

0x129: Pop(0)
0x12a: PushEmpty()
0x12b: Call 0x209

0x12c: Pop(0)
0x12d: PushEmpty()
0x12e: Call 0x2b6

0x12f: Pop(0)
0x130: PushEmpty()
0x131: Call 0x25c

0x132: Pop(0)
0x133: PushEmpty()
0x134: Call 0x2b2

0x135: Pop(0)
0x136: @@ size(Stack[-1])
0x137: Pop(0)
0x138: Push((int) 18)
0x139: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x13a: IF (Stack[-1] == 0) GOTO 0x140; Pop(1)

0x13b: Push((int) 16384)
0x13c: Push("l_scrollbar")
0x13d: @ SendMessage(Stack[-2], Stack[-1])
0x13e: Pop(2)
0x13f: GOTO 0x144

0x140: Push((int) 0)
0x141: Push("l_scrollbar")
0x142: @ SendMessage(Stack[-2], Stack[-1])
0x143: Pop(2)
0x144: @@ size(Stack[-1])
0x145: Pop(0)
0x146: Push((int) 18)
0x147: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x148: IF (Stack[-1] == 0) GOTO 0x14e; Pop(1)

0x149: Push((int) 16384)
0x14a: Push("r_scrollbar")
0x14b: @ SendMessage(Stack[-2], Stack[-1])
0x14c: Pop(2)
0x14d: GOTO 0x152

0x14e: Push((int) 0)
0x14f: Push("r_scrollbar")
0x150: @ SendMessage(Stack[-2], Stack[-1])
0x151: Pop(2)
0x152: Return(); Pop(2)

0x153: PushEmpty(int)
0x154: Stack[-1] = (int) 0
0x155: Call 0x168

0x156: Pop(1)
0x157: PushEmpty(int)
0x158: Stack[-1] = (int) 1
0x159: Call 0x168

0x15a: Pop(1)
0x15b: PushEmpty(int)
0x15c: Stack[-1] = (int) 2
0x15d: Call 0x168

0x15e: Pop(1)
0x15f: PushEmpty(int)
0x160: Stack[-1] = (int) 3
0x161: Call 0x168

0x162: Pop(1)
0x163: PushEmpty(int)
0x164: Stack[-1] = (int) 4
0x165: Call 0x168

0x166: Pop(1)
0x167: Return(); Pop(0)

0x168: PushEmpty(object, int, int, int, object, int, int, int)
0x169: PushEmpty(int, int)
0x16a: Stack[-1] = Stack[-11]
0x16b: Call 0x602

0x16c: Stack[-5] = Stack[-2]
0x16d: Pop(2)
0x16e: Stack[-1] = (int) 0
0x16f: Pop(0); Push((bool) Stack[-1] < Stack[-3])
0x170: IF (Stack[-1] == 0) GOTO 0x187; Pop(1)

0x171: PushEmpty(int, int, int)
0x172: Stack[-2] = Stack[-12]
0x173: Stack[-1] = Stack[-4]
0x174: Call 0x613

0x175: Stack[-5] = Stack[-3]
0x176: Pop(3)
0x177: PushEmpty(object, int, int)
0x178: Stack[-2] = Stack[-12]
0x179: Stack[-1] = Stack[-4]
0x17a: Call 0x60a

0x17b: Stack[-7] = Stack[-3]
0x17c: Pop(3)
0x17d: @@ add(Stack[-4])
0x17e: Pop(0)
0x17f: @@ add(Stack[-2])
0x180: Pop(0)
0x181: Push((int) 0)
0x182: @@ add(Stack[-1])
0x183: Pop(1)
0x184: Push((int) 1)
0x185: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x186: GOTO 0x16f

0x187: Return(); Pop(8)

0x188: Stack[-4] = 0
0x189: PushEmpty(int, int, object, object, int, int, int, object, object, int)
0x18a: PushEmpty(int)
0x18b: Call 0x5fa

0x18c: Stack[-6] = Stack[-1]
0x18d: Pop(1)
0x18e: Stack[-1] = (int) 0
0x18f: Pop(0); Push((bool) Stack[-1] < Stack[-5])
0x190: IF (Stack[-1] == 0) GOTO 0x1a5; Pop(1)

0x191: PushEmpty(int, int)
0x192: Stack[-1] = Stack[-3]
0x193: Call 0x624

0x194: Stack[-6] = Stack[-2]
0x195: Pop(2)
0x196: PushEmpty(object, int)
0x197: Stack[-1] = Stack[-3]
0x198: Call 0x61b

0x199: Stack[-4] = Stack[-2]
0x19a: Pop(2)
0x19b: @@ add(Stack[-2])
0x19c: Pop(0)
0x19d: @@ add(Stack[-4])
0x19e: Pop(0)
0x19f: Push((int) 0)
0x1a0: @@ add(Stack[-1])
0x1a1: Pop(1)
0x1a2: Push((int) 1)
0x1a3: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x1a4: GOTO 0x18f

0x1a5: Return(); Pop(10)

0x1a6: Stack[-2] = 0
0x1a7: Stack[-3] = 0
0x1a8: PushEmpty(int, object, object)
0x1a9: Stack[-3] = (int) 0
0x1aa: Stack[-2] = Stack[10 + Tasks[-1].StackPointer]
0x1ab: Stack[-1] = Stack[11 + Tasks[-1].StackPointer]
0x1ac: Call 0x1c7

0x1ad: Pop(3)
0x1ae: PushEmpty(int, object, object)
0x1af: Stack[-3] = (int) 1
0x1b0: Stack[-2] = Stack[12 + Tasks[-1].StackPointer]
0x1b1: Stack[-1] = Stack[13 + Tasks[-1].StackPointer]
0x1b2: Call 0x1c7

0x1b3: Pop(3)
0x1b4: PushEmpty(int, object, object)
0x1b5: Stack[-3] = (int) 2
0x1b6: Stack[-2] = Stack[14 + Tasks[-1].StackPointer]
0x1b7: Stack[-1] = Stack[15 + Tasks[-1].StackPointer]
0x1b8: Call 0x1c7

0x1b9: Pop(3)
0x1ba: PushEmpty(int, object, object)
0x1bb: Stack[-3] = (int) 3
0x1bc: Stack[-2] = Stack[16 + Tasks[-1].StackPointer]
0x1bd: Stack[-1] = Stack[17 + Tasks[-1].StackPointer]
0x1be: Call 0x1c7

0x1bf: Pop(3)
0x1c0: PushEmpty(int, object, object)
0x1c1: Stack[-3] = (int) 4
0x1c2: Stack[-2] = Stack[18 + Tasks[-1].StackPointer]
0x1c3: Stack[-1] = Stack[19 + Tasks[-1].StackPointer]
0x1c4: Call 0x1c7

0x1c5: Pop(3)
0x1c6: Return(); Pop(0)

0x1c7: PushEmpty(object, int, int, int, object, int, int, int)
0x1c8: PushEmpty(int, int)
0x1c9: Stack[-1] = Stack[-13]
0x1ca: Call 0x602

0x1cb: Stack[-5] = Stack[-2]
0x1cc: Pop(2)
0x1cd: Stack[-1] = (int) 0
0x1ce: Pop(0); Push((bool) Stack[-1] < Stack[-3])
0x1cf: IF (Stack[-1] == 0) GOTO 0x1e3; Pop(1)

0x1d0: PushEmpty(int, int, int)
0x1d1: Stack[-2] = Stack[-14]
0x1d2: Stack[-1] = Stack[-4]
0x1d3: Call 0x613

0x1d4: Stack[-5] = Stack[-3]
0x1d5: Pop(3)
0x1d6: PushEmpty(object, int, int)
0x1d7: Stack[-2] = Stack[-14]
0x1d8: Stack[-1] = Stack[-4]
0x1d9: Call 0x60a

0x1da: Stack[-7] = Stack[-3]
0x1db: Pop(3)
0x1dc: @@ add(Stack[-4])
0x1dd: Pop(0)
0x1de: @@ add(Stack[-2])
0x1df: Pop(0)
0x1e0: Push((int) 1)
0x1e1: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x1e2: GOTO 0x1ce

0x1e3: Return(); Pop(8)

0x1e4: Stack[-4] = 0
0x1e5: PushEmpty(int, int, int, int)
0x1e6: @@ size(Stack[-2])
0x1e7: Pop(0)
0x1e8: Push((int) 2)
0x1e9: Pop(1); Push(Stack[-3] + Stack[-1]);
0x1ea: Push((int) 1)
0x1eb: Pop(2); Push(Stack[-2] - Stack[-1]);
0x1ec: Push((int) 2)
0x1ed: Pop(2); Push(Stack[-2] / Stack[-1]);
0x1ee: Push((int) 9)
0x1ef: Stack[-3] = Stack[-2] - Stack[-1]; Pop(2);
0x1f0: Push((int) 0)
0x1f1: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x1f2: IF (Stack[-1] == 0) GOTO 0x1f5; Pop(1)

0x1f3: Stack[-5] = (int) 0
0x1f4: Return(); Pop(4)

0x1f5: Stack[-5] = Stack[-1]
0x1f6: Return(); Pop(4)

0x1f7: PushEmpty(int, int, int, int)
0x1f8: @@ size(Stack[-2])
0x1f9: Pop(0)
0x1fa: Push((int) 2)
0x1fb: Pop(1); Push(Stack[-3] + Stack[-1]);
0x1fc: Push((int) 1)
0x1fd: Pop(2); Push(Stack[-2] - Stack[-1]);
0x1fe: Push((int) 2)
0x1ff: Pop(2); Push(Stack[-2] / Stack[-1]);
0x200: Push((int) 9)
0x201: Stack[-3] = Stack[-2] - Stack[-1]; Pop(2);
0x202: Push((int) 0)
0x203: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x204: IF (Stack[-1] == 0) GOTO 0x207; Pop(1)

0x205: Stack[-5] = (int) 0
0x206: Return(); Pop(4)

0x207: Stack[-5] = Stack[-1]
0x208: Return(); Pop(4)

0x209: PushEmpty(int, int, int, object, int, int, int, int, object, int)
0x20a: @@ size(Stack[-5])
0x20b: Pop(0)
0x20c: Push((int) 18)
0x20d: Pop(1); Push(Stack[0 + StackPtr] + Stack[-1]);
0x20e: Pop(1); Push((bool) Stack[-1] > Stack[-6])
0x20f: IF (Stack[-1] == 0) GOTO 0x220; Pop(1)

0x210: Push((int) 2)
0x211: Pop(1); Push(Stack[-6] % Stack[-1]);
0x212: Push((int) 0)
0x213: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x214: IF (Stack[-1] == 0) GOTO 0x21a; Pop(1)

0x215: Push((int) 18)
0x216: Pop(1); Push(Stack[0 + StackPtr] + Stack[-1]);
0x217: Pop(1); Push(Stack[-1] - Stack[-6]);
0x218: Stack[0 + Tasks[-1].StackPointer] = Stack[0 + Tasks[-1].StackPointer] - Stack[-1]; Pop(1);
0x219: GOTO 0x220

0x21a: Push((int) 18)
0x21b: Pop(1); Push(Stack[0 + StackPtr] + Stack[-1]);
0x21c: Pop(1); Push(Stack[-1] - Stack[-6]);
0x21d: Push((int) 1)
0x21e: Pop(2); Push(Stack[-2] - Stack[-1]);
0x21f: Stack[0 + Tasks[-1].StackPointer] = Stack[0 + Tasks[-1].StackPointer] - Stack[-1]; Pop(1);
0x220: Push((int) 0)
0x221: Pop(1); Push((bool) Stack[0 + Tasks[-1].StackPointer] < Stack[-1])
0x222: IF (Stack[-1] == 0) GOTO 0x224; Pop(1)

0x223: Stack[0 + Tasks[-1].StackPointer] = (int)0
0x224: Stack[-3] = Stack[0 + Tasks[-1].StackPointer]
0x225: Push((int) 18)
0x226: Pop(1); Push(Stack[0 + StackPtr] + Stack[-1]);
0x227: Pop(1); Push((bool) Stack[-4] < Stack[-1])
0x228: IF (Stack[-1] == 0) GOTO 0x25b; Pop(1)

0x229: Pop(0); Push((bool) Stack[-3] < Stack[-5])
0x22a: IF (Stack[-1] == 0) GOTO 0x251; Pop(1)

0x22b: @@ get(Stack[-2], Stack[-3])
0x22c: Pop(0)
0x22d: Stack[-4] = (int) 0
0x22e: PushEmpty(int, int)
0x22f: Stack[-1] = Stack[-5] - Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x230: Call 0x503

0x231: Stack[-3] = Stack[-2]
0x232: Pop(2)
0x233: Push((int) 0)
0x234: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x235: IF (Stack[-1] == 0) GOTO 0x238; Pop(1)

0x236: Push((int) 16384)
0x237: Stack[-5] = Stack[-5] | Stack[-1]; Pop(1);
0x238: PushEmpty(bool, object, int, bool)
0x239: Stack[-3] = Stack[-6]
0x23a: Stack[-2] = Stack[25 + Tasks[-1].StackPointer]
0x23b: Stack[-1] = (bool) 0
0x23c: Call 0x642

0x23d: Pop(3)
0x23e: IF (Stack[-1] == 0) GOTO 0x241; Pop(1)

0x23f: Push((int) 131072)
0x240: Stack[-5] = Stack[-5] | Stack[-1]; Pop(1);
0x241: Push((int) 65536)
0x242: Pop(1); Push(Stack[-2] | Stack[-1]);
0x243: PushEmpty(string, int)
0x244: Stack[-1] = Stack[-6] - Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x245: Call 0x51d

0x246: Pop(1)
0x247: @ SendMessage(Stack[-2], Stack[-1])
0x248: Pop(2)
0x249: PushEmpty(string, int)
0x24a: Stack[-1] = Stack[-5] - Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x24b: Call 0x51d

0x24c: Pop(1)
0x24d: @ SendMessage(Stack[-5], Stack[-1], Stack[-3])
0x24e: Pop(1)
0x24f: Stack[-2] = 0
0x250: GOTO 0x258

0x251: Push((int) 32768)
0x252: PushEmpty(string, int)
0x253: Stack[-1] = Stack[-6] - Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x254: Call 0x51d

0x255: Pop(1)
0x256: @ SendMessage(Stack[-2], Stack[-1])
0x257: Pop(2)
0x258: Push((int) 1)
0x259: Stack[-4] = Stack[-4] + Stack[-1]; Pop(1);
0x25a: GOTO 0x225

0x25b: Return(); Pop(10)

0x25c: PushEmpty(int, object, int, int, int, int, int, object, int, int, int, int)
0x25d: @@ size(Stack[-6])
0x25e: Pop(0)
0x25f: Push((int) 18)
0x260: Pop(1); Push(Stack[1 + StackPtr] + Stack[-1]);
0x261: Pop(1); Push((bool) Stack[-1] > Stack[-7])
0x262: IF (Stack[-1] == 0) GOTO 0x273; Pop(1)

0x263: Push((int) 2)
0x264: Pop(1); Push(Stack[-7] % Stack[-1]);
0x265: Push((int) 0)
0x266: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x267: IF (Stack[-1] == 0) GOTO 0x26d; Pop(1)

0x268: Push((int) 18)
0x269: Pop(1); Push(Stack[1 + StackPtr] + Stack[-1]);
0x26a: Pop(1); Push(Stack[-1] - Stack[-7]);
0x26b: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] - Stack[-1]; Pop(1);
0x26c: GOTO 0x273

0x26d: Push((int) 18)
0x26e: Pop(1); Push(Stack[1 + StackPtr] + Stack[-1]);
0x26f: Pop(1); Push(Stack[-1] - Stack[-7]);
0x270: Push((int) 1)
0x271: Pop(2); Push(Stack[-2] - Stack[-1]);
0x272: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] - Stack[-1]; Pop(1);
0x273: Push((int) 0)
0x274: Pop(1); Push((bool) Stack[1 + Tasks[-1].StackPointer] < Stack[-1])
0x275: IF (Stack[-1] == 0) GOTO 0x277; Pop(1)

0x276: Stack[1 + Tasks[-1].StackPointer] = (int)0
0x277: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x278: Push((int) 18)
0x279: Pop(1); Push(Stack[1 + StackPtr] + Stack[-1]);
0x27a: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x27b: IF (Stack[-1] == 0) GOTO 0x2b0; Pop(1)

0x27c: Pop(0); Push((bool) Stack[-2] < Stack[-6])
0x27d: IF (Stack[-1] == 0) GOTO 0x2a6; Pop(1)

0x27e: @@ get(Stack[-5], Stack[-2])
0x27f: Pop(0)
0x280: @@ get(Stack[-3], Stack[-2])
0x281: Pop(0)
0x282: Stack[-4] = (int) 0
0x283: PushEmpty(int, int)
0x284: Stack[-1] = Stack[-4] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x285: Call 0x510

0x286: Stack[-3] = Stack[-2]
0x287: Pop(2)
0x288: Push((int) 0)
0x289: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x28a: IF (Stack[-1] == 0) GOTO 0x28d; Pop(1)

0x28b: Push((int) 16384)
0x28c: Stack[-5] = Stack[-5] | Stack[-1]; Pop(1);
0x28d: PushEmpty(bool, object, int, bool)
0x28e: Stack[-3] = Stack[-9]
0x28f: Stack[-2] = Stack[25 + Tasks[-1].StackPointer]
0x290: Stack[-1] = (bool) 1
0x291: Call 0x642

0x292: Pop(3)
0x293: IF (Stack[-1] == 0) GOTO 0x296; Pop(1)

0x294: Push((int) 131072)
0x295: Stack[-5] = Stack[-5] | Stack[-1]; Pop(1);
0x296: Pop(0); Push(Stack[-3] - Stack[-1]);
0x297: Push((int) 65536)
0x298: Pop(2); Push(Stack[-2] | Stack[-1]);
0x299: PushEmpty(string, int)
0x29a: Stack[-1] = Stack[-5] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x29b: Call 0x52d

0x29c: Pop(1)
0x29d: @ SendMessage(Stack[-2], Stack[-1])
0x29e: Pop(2)
0x29f: PushEmpty(string, int)
0x2a0: Stack[-1] = Stack[-4] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x2a1: Call 0x52d

0x2a2: Pop(1)
0x2a3: @ SendMessage(Stack[-5], Stack[-1], Stack[-6])
0x2a4: Pop(1)
0x2a5: GOTO 0x2ad

0x2a6: Push((int) 32768)
0x2a7: PushEmpty(string, int)
0x2a8: Stack[-1] = Stack[-5] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x2a9: Call 0x52d

0x2aa: Pop(1)
0x2ab: @ SendMessage(Stack[-2], Stack[-1])
0x2ac: Pop(2)
0x2ad: Push((int) 1)
0x2ae: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x2af: GOTO 0x278

0x2b0: Return(); Pop(12)

0x2b1: Stack[-5] = 0
0x2b2: Push("r_money_slot")
0x2b3: @ SendMessage(Stack[-2], Stack[-1])
0x2b4: Pop(1)
0x2b5: Return(); Pop(0)

0x2b6: Push("l_money_slot")
0x2b7: @ SendMessage(Stack[-3], Stack[-1])
0x2b8: Pop(1)
0x2b9: Return(); Pop(0)

0x2ba: PushEmpty(int, bool, object, object, object, int, int, int, bool, object, object, object, int, int)
0x2bb: @ GetContainer(Stack[-4])
0x2bc: Pop(0)
0x2bd: @ GetPlayerContainer(Stack[-3])
0x2be: Pop(0)
0x2bf: @@ size(Stack[-7])
0x2c0: Pop(0)
0x2c1: Stack[-2] = (int) 0
0x2c2: Pop(0); Push((bool) Stack[-2] < Stack[-7])
0x2c3: IF (Stack[-1] == 0) GOTO 0x2e5; Pop(1)

0x2c4: @@ get(Stack[-5], Stack[-2])
0x2c5: Pop(0)
0x2c6: PushEmpty(bool, object, object, int)
0x2c7: Stack[-3] = Stack[-7]
0x2c8: Stack[-2] = Stack[-9]
0x2c9: PushEmpty(int, object)
0x2ca: Stack[-1] = Stack[-11]
0x2cb: Call 0x5e7

0x2cc: Stack[-3] = Stack[-2]
0x2cd: Pop(2)
0x2ce: Call 0x674

0x2cf: Stack[-10] = Stack[-4]
0x2d0: Pop(4)
0x2d1: Pop(0); Push((bool) Stack[-6] == 0)
0x2d2: IF (Stack[-1] == 0) GOTO 0x2d6; Pop(1)

0x2d3: Push("Error: failed to remove item")
0x2d4: @ Trace(Stack[-1])
0x2d5: Pop(1)
0x2d6: PushEmpty(bool, object, object, int)
0x2d7: Stack[-3] = Stack[-8]
0x2d8: Stack[-2] = Stack[-9]
0x2d9: Stack[-1] = (int) 0
0x2da: Call 0x68d

0x2db: Stack[-10] = Stack[-4]
0x2dc: Pop(4)
0x2dd: Pop(0); Push((bool) Stack[-6] == 0)
0x2de: IF (Stack[-1] == 0) GOTO 0x2e2; Pop(1)

0x2df: Push("Error: failed to add item")
0x2e0: @ Trace(Stack[-1])
0x2e1: Pop(1)
0x2e2: Push((int) 1)
0x2e3: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x2e4: GOTO 0x2c2

0x2e5: @@ size(Stack[-7])
0x2e6: Pop(0)
0x2e7: Stack[-1] = (int) 0
0x2e8: Pop(0); Push((bool) Stack[-1] < Stack[-7])
0x2e9: IF (Stack[-1] == 0) GOTO 0x30b; Pop(1)

0x2ea: @@ get(Stack[-5], Stack[-1])
0x2eb: Pop(0)
0x2ec: PushEmpty(bool, object, object, int)
0x2ed: Stack[-3] = Stack[-8]
0x2ee: Stack[-2] = Stack[-9]
0x2ef: Stack[-1] = (int) 0
0x2f0: Call 0x674

0x2f1: Stack[-10] = Stack[-4]
0x2f2: Pop(4)
0x2f3: Pop(0); Push((bool) Stack[-6] == 0)
0x2f4: IF (Stack[-1] == 0) GOTO 0x2f8; Pop(1)

0x2f5: Push("Error: failed to remove item")
0x2f6: @ Trace(Stack[-1])
0x2f7: Pop(1)
0x2f8: PushEmpty(bool, object, object, int)
0x2f9: Stack[-3] = Stack[-7]
0x2fa: Stack[-2] = Stack[-9]
0x2fb: PushEmpty(int, object)
0x2fc: Stack[-1] = Stack[-11]
0x2fd: Call 0x5e7

0x2fe: Stack[-3] = Stack[-2]
0x2ff: Pop(2)
0x300: Call 0x68d

0x301: Stack[-10] = Stack[-4]
0x302: Pop(4)
0x303: Pop(0); Push((bool) Stack[-6] == 0)
0x304: IF (Stack[-1] == 0) GOTO 0x308; Pop(1)

0x305: Push("Error: failed to add item")
0x306: @ Trace(Stack[-1])
0x307: Pop(1)
0x308: Push((int) 1)
0x309: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x30a: GOTO 0x2e8

0x30b: Push((int) 0)
0x30c: Pop(1); Push((bool) Stack[25 + Tasks[-1].StackPointer] == Stack[-1])
0x30d: IF (Stack[-1] == 0) GOTO 0x310; Pop(1)

0x30e: @ SetPlayerMoneyCount(Stack[-2])
0x30f: Pop(0)
0x310: Stack[3 + Tasks[-1].StackPointer] = (int)0
0x311: PushEmpty()
0x312: Call 0xf2

0x313: Pop(0)
0x314: Return(); Pop(14)

0x315: Stack[-3] = 0
0x316: Stack[-4] = 0
0x317: Stack[-5] = 0
0x318: PushEmpty(int, int)
0x319: PushEmpty(int, object)
0x31a: Stack[-1] = Stack[-5]
0x31b: Call 0x5e7

0x31c: Stack[-3] = Stack[-2]
0x31d: Pop(2)
0x31e: Push((int) 0)
0x31f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x320: IF (Stack[-1] == 0) GOTO 0x32a; Pop(1)

0x321: PushEmpty(bool, object, object, object)
0x322: Stack[-3] = Stack[-7]
0x323: Stack[-2] = Stack[10 + Tasks[-1].StackPointer]
0x324: Stack[-1] = Stack[11 + Tasks[-1].StackPointer]
0x325: Call 0x392

0x326: Stack[-8] = Stack[-4]
0x327: Pop(4)
0x328: Return(); Pop(2)

0x329: GOTO 0x34d

0x32a: Push((int) 1)
0x32b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x32c: IF (Stack[-1] == 0) GOTO 0x336; Pop(1)

0x32d: PushEmpty(bool, object, object, object)
0x32e: Stack[-3] = Stack[-7]
0x32f: Stack[-2] = Stack[12 + Tasks[-1].StackPointer]
0x330: Stack[-1] = Stack[13 + Tasks[-1].StackPointer]
0x331: Call 0x392

0x332: Stack[-8] = Stack[-4]
0x333: Pop(4)
0x334: Return(); Pop(2)

0x335: GOTO 0x34d

0x336: Push((int) 2)
0x337: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x338: IF (Stack[-1] == 0) GOTO 0x342; Pop(1)

0x339: PushEmpty(bool, object, object, object)
0x33a: Stack[-3] = Stack[-7]
0x33b: Stack[-2] = Stack[14 + Tasks[-1].StackPointer]
0x33c: Stack[-1] = Stack[15 + Tasks[-1].StackPointer]
0x33d: Call 0x392

0x33e: Stack[-8] = Stack[-4]
0x33f: Pop(4)
0x340: Return(); Pop(2)

0x341: GOTO 0x34d

0x342: Push((int) 3)
0x343: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x344: IF (Stack[-1] == 0) GOTO 0x34d; Pop(1)

0x345: PushEmpty(bool, object, object, object)
0x346: Stack[-3] = Stack[-7]
0x347: Stack[-2] = Stack[16 + Tasks[-1].StackPointer]
0x348: Stack[-1] = Stack[17 + Tasks[-1].StackPointer]
0x349: Call 0x392

0x34a: Stack[-8] = Stack[-4]
0x34b: Pop(4)
0x34c: Return(); Pop(2)

0x34d: PushEmpty(bool, object, object, object)
0x34e: Stack[-3] = Stack[-7]
0x34f: Stack[-2] = Stack[18 + Tasks[-1].StackPointer]
0x350: Stack[-1] = Stack[19 + Tasks[-1].StackPointer]
0x351: Call 0x392

0x352: Stack[-8] = Stack[-4]
0x353: Pop(4)
0x354: Return(); Pop(2)

0x355: PushEmpty(int, int)
0x356: PushEmpty(int, object)
0x357: Stack[-1] = Stack[-5]
0x358: Call 0x5e7

0x359: Stack[-3] = Stack[-2]
0x35a: Pop(2)
0x35b: Push((int) 0)
0x35c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x35d: IF (Stack[-1] == 0) GOTO 0x367; Pop(1)

0x35e: PushEmpty(bool, object, object, object)
0x35f: Stack[-3] = Stack[-7]
0x360: Stack[-2] = Stack[10 + Tasks[-1].StackPointer]
0x361: Stack[-1] = Stack[11 + Tasks[-1].StackPointer]
0x362: Call 0x3c5

0x363: Stack[-8] = Stack[-4]
0x364: Pop(4)
0x365: Return(); Pop(2)

0x366: GOTO 0x38a

0x367: Push((int) 1)
0x368: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x369: IF (Stack[-1] == 0) GOTO 0x373; Pop(1)

0x36a: PushEmpty(bool, object, object, object)
0x36b: Stack[-3] = Stack[-7]
0x36c: Stack[-2] = Stack[12 + Tasks[-1].StackPointer]
0x36d: Stack[-1] = Stack[13 + Tasks[-1].StackPointer]
0x36e: Call 0x3c5

0x36f: Stack[-8] = Stack[-4]
0x370: Pop(4)
0x371: Return(); Pop(2)

0x372: GOTO 0x38a

0x373: Push((int) 2)
0x374: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x375: IF (Stack[-1] == 0) GOTO 0x37f; Pop(1)

0x376: PushEmpty(bool, object, object, object)
0x377: Stack[-3] = Stack[-7]
0x378: Stack[-2] = Stack[14 + Tasks[-1].StackPointer]
0x379: Stack[-1] = Stack[15 + Tasks[-1].StackPointer]
0x37a: Call 0x3c5

0x37b: Stack[-8] = Stack[-4]
0x37c: Pop(4)
0x37d: Return(); Pop(2)

0x37e: GOTO 0x38a

0x37f: Push((int) 3)
0x380: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x381: IF (Stack[-1] == 0) GOTO 0x38a; Pop(1)

0x382: PushEmpty(bool, object, object, object)
0x383: Stack[-3] = Stack[-7]
0x384: Stack[-2] = Stack[16 + Tasks[-1].StackPointer]
0x385: Stack[-1] = Stack[17 + Tasks[-1].StackPointer]
0x386: Call 0x3c5

0x387: Stack[-8] = Stack[-4]
0x388: Pop(4)
0x389: Return(); Pop(2)

0x38a: PushEmpty(bool, object, object, object)
0x38b: Stack[-3] = Stack[-7]
0x38c: Stack[-2] = Stack[18 + Tasks[-1].StackPointer]
0x38d: Stack[-1] = Stack[19 + Tasks[-1].StackPointer]
0x38e: Call 0x3c5

0x38f: Stack[-8] = Stack[-4]
0x390: Pop(4)
0x391: Return(); Pop(2)

0x392: PushEmpty(int, object, int, int, int, object, int, int)
0x393: @@ size(Stack[-4])
0x394: Pop(0)
0x395: PushEmpty(int, object)
0x396: Stack[-1] = Stack[-13]
0x397: Call 0x5f1

0x398: Pop(1)
0x399: Push((int) 1)
0x39a: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x39b: IF (Stack[-1] == 0) GOTO 0x3b8; Pop(1)

0x39c: Stack[-2] = (int) 0
0x39d: Pop(0); Push((bool) Stack[-2] < Stack[-4])
0x39e: IF (Stack[-1] == 0) GOTO 0x3b8; Pop(1)

0x39f: @@ get(Stack[-3], Stack[-2])
0x3a0: Pop(0)
0x3a1: @@ get(Stack[-1], Stack[-2])
0x3a2: Pop(0)
0x3a3: PushEmpty(bool, object, object)
0x3a4: Stack[-2] = Stack[-14]
0x3a5: Stack[-1] = Stack[-6]
0x3a6: Call 0x637

0x3a7: Pop(2)
0x3a8: IF (Stack[-1] == 0) GOTO 0x3b5; Pop(1)

0x3a9: PushEmpty(int, object)
0x3aa: Stack[-1] = Stack[-13]
0x3ab: Call 0x5f1

0x3ac: Pop(1)
0x3ad: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x3ae: IF (Stack[-1] == 0) GOTO 0x3b3; Pop(1)

0x3af: Push((int) 1)
0x3b0: Pop(1); Push(Stack[-2] + Stack[-1]);
0x3b1: @@ set(Stack[-3], Stack[-1])
0x3b2: Pop(1)
0x3b3: Stack[-12] = (bool) 1
0x3b4: Return(); Pop(8)

0x3b5: Push((int) 1)
0x3b6: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x3b7: GOTO 0x39d

0x3b8: Push((int) 12)
0x3b9: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x3ba: IF (Stack[-1] == 0) GOTO 0x3c2; Pop(1)

0x3bb: @@ add(Stack[-11])
0x3bc: Pop(0)
0x3bd: Push((int) 1)
0x3be: @@ add(Stack[-1])
0x3bf: Pop(1)
0x3c0: Stack[-12] = (bool) 1
0x3c1: Return(); Pop(8)

0x3c2: Stack[-12] = (bool) 0
0x3c3: Return(); Pop(8)

0x3c4: Stack[-3] = 0
0x3c5: PushEmpty(int, object, int, int, int, object, int, int)
0x3c6: @@ size(Stack[-4])
0x3c7: Pop(0)
0x3c8: Stack[-2] = (int) 0
0x3c9: Pop(0); Push((bool) Stack[-2] < Stack[-4])
0x3ca: IF (Stack[-1] == 0) GOTO 0x3e6; Pop(1)

0x3cb: @@ get(Stack[-3], Stack[-2])
0x3cc: Pop(0)
0x3cd: @@ get(Stack[-1], Stack[-2])
0x3ce: Pop(0)
0x3cf: PushEmpty(bool, object, object)
0x3d0: Stack[-2] = Stack[-14]
0x3d1: Stack[-1] = Stack[-6]
0x3d2: Call 0x637

0x3d3: Pop(2)
0x3d4: IF (Stack[-1] == 0) GOTO 0x3e3; Pop(1)

0x3d5: Push((int) -1)
0x3d6: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x3d7: Push((int) 0)
0x3d8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3d9: IF (Stack[-1] == 0) GOTO 0x3df; Pop(1)

0x3da: @@ remove(Stack[-2])
0x3db: Pop(0)
0x3dc: @@ remove(Stack[-2])
0x3dd: Pop(0)
0x3de: GOTO 0x3e1

0x3df: @@ set(Stack[-2], Stack[-1])
0x3e0: Pop(0)
0x3e1: Stack[-12] = (bool) 1
0x3e2: Return(); Pop(8)

0x3e3: Push((int) 1)
0x3e4: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x3e5: GOTO 0x3c9

0x3e6: Stack[-12] = (bool) 0
0x3e7: Return(); Pop(8)

0x3e8: Stack[-3] = 0
0x3e9: PushEmpty()
0x3ea: Stack[2 + Tasks[-1].StackPointer] = Stack[2 + Tasks[-1].StackPointer] + Stack[-1]; Pop(0);
0x3eb: Stack[3 + Tasks[-1].StackPointer] = Stack[3 + Tasks[-1].StackPointer] - Stack[-1]; Pop(0);
0x3ec: PushEmpty()
0x3ed: Call 0x2b2

0x3ee: Pop(0)
0x3ef: PushEmpty()
0x3f0: Call 0x2b6

0x3f1: Pop(0)
0x3f2: Return(); Pop(0)

0x3f3: PushEmpty(int, object, int, int, int, int, object, int, int, int)
0x3f4: @@ size(Stack[-5])
0x3f5: Pop(0)
0x3f6: Pop(0); Push(Stack[-11] + Stack[0 + StackPtr]);
0x3f7: Pop(1); Push((bool) Stack[-1] >= Stack[-6])
0x3f8: IF (Stack[-1] == 0) GOTO 0x3fa; Pop(1)

0x3f9: Return(); Pop(10)

0x3fa: Pop(0); Push(Stack[-11] + Stack[0 + StackPtr]);
0x3fb: @@ get(Stack[-5], Stack[-1])
0x3fc: Pop(1)
0x3fd: PushEmpty(bool, object, int, bool)
0x3fe: Stack[-3] = Stack[-8]
0x3ff: Stack[-2] = Stack[25 + Tasks[-1].StackPointer]
0x400: Stack[-1] = (bool) 0
0x401: Call 0x642

0x402: Pop(3)
0x403: IF (Stack[-1] == 0) GOTO 0x405; Pop(1)

0x404: Return(); Pop(10)

0x405: Pop(0); Push(Stack[-11] + Stack[0 + StackPtr]);
0x406: @@ get(Stack[-4], Stack[-1])
0x407: Pop(1)
0x408: Pop(0); Push(Stack[-11] + Stack[0 + StackPtr]);
0x409: @@ get(Stack[-3], Stack[-1])
0x40a: Pop(1)
0x40b: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x40c: IF (Stack[-1] == 0) GOTO 0x42d; Pop(1)

0x40d: PushEmpty(int, object, int)
0x40e: Stack[-2] = Stack[-7]
0x40f: Stack[-1] = Stack[25 + Tasks[-1].StackPointer]
0x410: Call 0x5a5

0x411: Pop(2)
0x412: PushEmpty(float, object, int, int)
0x413: Stack[-3] = Stack[26 + Tasks[-1].StackPointer]
0x414: Stack[-2] = Stack[24 + Tasks[-1].StackPointer]
0x415: Stack[-1] = Stack[25 + Tasks[-1].StackPointer]
0x416: Call 0x57b

0x417: Pop(3)
0x418: Stack[-3] = Stack[-2] * Stack[-1]; Pop(2);
0x419: Pop(0); Push((bool) Stack[-1] <= Stack[2 + Tasks[-1].StackPointer])
0x41a: IF (Stack[-1] == 0) GOTO 0x42d; Pop(1)

0x41b: PushEmpty(bool, object)
0x41c: Stack[-1] = Stack[-6]
0x41d: Call 0x318

0x41e: Pop(1)
0x41f: IF (Stack[-1] == 0) GOTO 0x42d; Pop(1)

0x420: Push((int) 1)
0x421: Stack[-4] = Stack[-4] + Stack[-1]; Pop(1);
0x422: Pop(0); Push(Stack[-11] + Stack[0 + StackPtr]);
0x423: @@ set(Stack[-1], Stack[-4])
0x424: Pop(1)
0x425: PushEmpty(object)
0x426: Stack[-1] = Stack[-5]
0x427: Call 0x0

0x428: Pop(1)
0x429: PushEmpty(int)
0x42a: Stack[-1] = -Stack[-2]; Pop(0);
0x42b: Call 0x3e9

0x42c: Pop(1)
0x42d: PushEmpty()
0x42e: Call 0x209

0x42f: Pop(0)
0x430: PushEmpty()
0x431: Call 0x25c

0x432: Pop(0)
0x433: Return(); Pop(10)

0x434: Stack[-4] = 0
0x435: PushEmpty(int, object, int, int, int, int, object, int, int, int)
0x436: @@ size(Stack[-5])
0x437: Pop(0)
0x438: Pop(0); Push(Stack[-11] + Stack[0 + StackPtr]);
0x439: Pop(1); Push((bool) Stack[-1] >= Stack[-6])
0x43a: IF (Stack[-1] == 0) GOTO 0x43c; Pop(1)

0x43b: Return(); Pop(10)

0x43c: Pop(0); Push(Stack[-11] + Stack[0 + StackPtr]);
0x43d: @@ get(Stack[-5], Stack[-1])
0x43e: Pop(1)
0x43f: PushEmpty(bool, object, int, bool)
0x440: Stack[-3] = Stack[-8]
0x441: Stack[-2] = Stack[25 + Tasks[-1].StackPointer]
0x442: Stack[-1] = (bool) 0
0x443: Call 0x642

0x444: Pop(3)
0x445: IF (Stack[-1] == 0) GOTO 0x447; Pop(1)

0x446: Return(); Pop(10)

0x447: Pop(0); Push(Stack[-11] + Stack[0 + StackPtr]);
0x448: @@ get(Stack[-4], Stack[-1])
0x449: Pop(1)
0x44a: Pop(0); Push(Stack[-11] + Stack[0 + StackPtr]);
0x44b: @@ get(Stack[-3], Stack[-1])
0x44c: Pop(1)
0x44d: Push((int) 0)
0x44e: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x44f: IF (Stack[-1] == 0) GOTO 0x46d; Pop(1)

0x450: PushEmpty(bool, object)
0x451: Stack[-1] = Stack[-6]
0x452: Call 0x355

0x453: Pop(2)
0x454: PushEmpty(object)
0x455: Stack[-1] = Stack[-5]
0x456: Call 0x18

0x457: Pop(1)
0x458: Push((int) -1)
0x459: Stack[-4] = Stack[-4] + Stack[-1]; Pop(1);
0x45a: Pop(0); Push(Stack[-11] + Stack[0 + StackPtr]);
0x45b: @@ set(Stack[-1], Stack[-4])
0x45c: Pop(1)
0x45d: PushEmpty(int, object, int)
0x45e: Stack[-2] = Stack[-7]
0x45f: Stack[-1] = Stack[25 + Tasks[-1].StackPointer]
0x460: Call 0x5a5

0x461: Pop(2)
0x462: PushEmpty(float, object, int, int)
0x463: Stack[-3] = Stack[26 + Tasks[-1].StackPointer]
0x464: Stack[-2] = Stack[24 + Tasks[-1].StackPointer]
0x465: Stack[-1] = Stack[25 + Tasks[-1].StackPointer]
0x466: Call 0x57b

0x467: Pop(3)
0x468: Stack[-3] = Stack[-2] * Stack[-1]; Pop(2);
0x469: PushEmpty(int)
0x46a: Stack[-1] = Stack[-2]
0x46b: Call 0x3e9

0x46c: Pop(1)
0x46d: PushEmpty()
0x46e: Call 0x209

0x46f: Pop(0)
0x470: PushEmpty()
0x471: Call 0x25c

0x472: Pop(0)
0x473: Return(); Pop(10)

0x474: Stack[-4] = 0
0x475: PushEmpty(int, object, int, int, int, int, object, int, int, int)
0x476: @@ size(Stack[-5])
0x477: Pop(0)
0x478: Pop(0); Push(Stack[-11] + Stack[1 + StackPtr]);
0x479: Pop(1); Push((bool) Stack[-1] >= Stack[-6])
0x47a: IF (Stack[-1] == 0) GOTO 0x47c; Pop(1)

0x47b: Return(); Pop(10)

0x47c: Pop(0); Push(Stack[-11] + Stack[1 + StackPtr]);
0x47d: @@ get(Stack[-5], Stack[-1])
0x47e: Pop(1)
0x47f: PushEmpty(bool, object, int, bool)
0x480: Stack[-3] = Stack[-8]
0x481: Stack[-2] = Stack[25 + Tasks[-1].StackPointer]
0x482: Stack[-1] = (bool) 1
0x483: Call 0x642

0x484: Pop(3)
0x485: IF (Stack[-1] == 0) GOTO 0x487; Pop(1)

0x486: Return(); Pop(10)

0x487: Pop(0); Push(Stack[-11] + Stack[1 + StackPtr]);
0x488: @@ get(Stack[-4], Stack[-1])
0x489: Pop(1)
0x48a: Pop(0); Push(Stack[-11] + Stack[1 + StackPtr]);
0x48b: @@ get(Stack[-3], Stack[-1])
0x48c: Pop(1)
0x48d: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x48e: IF (Stack[-1] == 0) GOTO 0x4ac; Pop(1)

0x48f: PushEmpty(bool, object)
0x490: Stack[-1] = Stack[-6]
0x491: Call 0x355

0x492: Pop(2)
0x493: PushEmpty(object)
0x494: Stack[-1] = Stack[-5]
0x495: Call 0x18

0x496: Pop(1)
0x497: Push((int) 1)
0x498: Stack[-4] = Stack[-4] + Stack[-1]; Pop(1);
0x499: Pop(0); Push(Stack[-11] + Stack[1 + StackPtr]);
0x49a: @@ set(Stack[-1], Stack[-4])
0x49b: Pop(1)
0x49c: PushEmpty(int, object, int)
0x49d: Stack[-2] = Stack[-7]
0x49e: Stack[-1] = Stack[25 + Tasks[-1].StackPointer]
0x49f: Call 0x5a5

0x4a0: Pop(2)
0x4a1: PushEmpty(float, object, int, int)
0x4a2: Stack[-3] = Stack[26 + Tasks[-1].StackPointer]
0x4a3: Stack[-2] = Stack[24 + Tasks[-1].StackPointer]
0x4a4: Stack[-1] = Stack[25 + Tasks[-1].StackPointer]
0x4a5: Call 0x561

0x4a6: Pop(3)
0x4a7: Stack[-3] = Stack[-2] * Stack[-1]; Pop(2);
0x4a8: PushEmpty(int)
0x4a9: Stack[-1] = Stack[-2]
0x4aa: Call 0x3e9

0x4ab: Pop(1)
0x4ac: PushEmpty()
0x4ad: Call 0x209

0x4ae: Pop(0)
0x4af: PushEmpty()
0x4b0: Call 0x25c

0x4b1: Pop(0)
0x4b2: Return(); Pop(10)

0x4b3: Stack[-4] = 0
0x4b4: PushEmpty(int, object, int, int, int, int, object, int, int, int)
0x4b5: @@ size(Stack[-5])
0x4b6: Pop(0)
0x4b7: Pop(0); Push(Stack[-11] + Stack[1 + StackPtr]);
0x4b8: Pop(1); Push((bool) Stack[-1] >= Stack[-6])
0x4b9: IF (Stack[-1] == 0) GOTO 0x4bb; Pop(1)

0x4ba: Return(); Pop(10)

0x4bb: Pop(0); Push(Stack[-11] + Stack[1 + StackPtr]);
0x4bc: @@ get(Stack[-5], Stack[-1])
0x4bd: Pop(1)
0x4be: PushEmpty(bool, object, int, bool)
0x4bf: Stack[-3] = Stack[-8]
0x4c0: Stack[-2] = Stack[25 + Tasks[-1].StackPointer]
0x4c1: Stack[-1] = (bool) 1
0x4c2: Call 0x642

0x4c3: Pop(3)
0x4c4: IF (Stack[-1] == 0) GOTO 0x4c6; Pop(1)

0x4c5: Return(); Pop(10)

0x4c6: Pop(0); Push(Stack[-11] + Stack[1 + StackPtr]);
0x4c7: @@ get(Stack[-4], Stack[-1])
0x4c8: Pop(1)
0x4c9: Pop(0); Push(Stack[-11] + Stack[1 + StackPtr]);
0x4ca: @@ get(Stack[-3], Stack[-1])
0x4cb: Pop(1)
0x4cc: Push((int) 0)
0x4cd: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x4ce: IF (Stack[-1] == 0) GOTO 0x4fb; Pop(1)

0x4cf: PushEmpty(int, object, int)
0x4d0: Stack[-2] = Stack[-7]
0x4d1: Stack[-1] = Stack[25 + Tasks[-1].StackPointer]
0x4d2: Call 0x5a5

0x4d3: Pop(2)
0x4d4: PushEmpty(float, object, int, int)
0x4d5: Stack[-3] = Stack[26 + Tasks[-1].StackPointer]
0x4d6: Stack[-2] = Stack[24 + Tasks[-1].StackPointer]
0x4d7: Stack[-1] = Stack[25 + Tasks[-1].StackPointer]
0x4d8: Call 0x561

0x4d9: Pop(3)
0x4da: Stack[-3] = Stack[-2] * Stack[-1]; Pop(2);
0x4db: Pop(0); Push((bool) Stack[-1] <= Stack[2 + Tasks[-1].StackPointer])
0x4dc: IF (Stack[-1] == 0) GOTO 0x4fb; Pop(1)

0x4dd: PushEmpty(bool, object)
0x4de: Stack[-1] = Stack[-6]
0x4df: Call 0x318

0x4e0: Pop(1)
0x4e1: IF (Stack[-1] == 0) GOTO 0x4fb; Pop(1)

0x4e2: Push((int) -1)
0x4e3: Stack[-4] = Stack[-4] + Stack[-1]; Pop(1);
0x4e4: PushEmpty(object)
0x4e5: Stack[-1] = Stack[-5]
0x4e6: Call 0x0

0x4e7: Pop(1)
0x4e8: Pop(0); Push(Stack[-11] + Stack[1 + StackPtr]);
0x4e9: @@ set(Stack[-1], Stack[-4])
0x4ea: Pop(1)
0x4eb: PushEmpty(int)
0x4ec: PushEmpty(int, object, int)
0x4ed: Stack[-2] = Stack[-8]
0x4ee: Stack[-1] = Stack[25 + Tasks[-1].StackPointer]
0x4ef: Call 0x5a5

0x4f0: Pop(2)
0x4f1: Pop(1); Push(( -Stack[-1])
0x4f2: PushEmpty(float, object, int, int)
0x4f3: Stack[-3] = Stack[26 + Tasks[-1].StackPointer]
0x4f4: Stack[-2] = Stack[24 + Tasks[-1].StackPointer]
0x4f5: Stack[-1] = Stack[25 + Tasks[-1].StackPointer]
0x4f6: Call 0x561

0x4f7: Pop(3)
0x4f8: Stack[-3] = Stack[-2] * Stack[-1]; Pop(2);
0x4f9: Call 0x3e9

0x4fa: Pop(1)
0x4fb: PushEmpty()
0x4fc: Call 0x209

0x4fd: Pop(0)
0x4fe: PushEmpty()
0x4ff: Call 0x25c

0x500: Pop(0)
0x501: Return(); Pop(10)

0x502: Stack[-4] = 0
0x503: PushEmpty(int, int, int, int)
0x504: @@ size(Stack[-2])
0x505: Pop(0)
0x506: Pop(0); Push(Stack[-5] + Stack[0 + StackPtr]);
0x507: Pop(1); Push((bool) Stack[-1] >= Stack[-3])
0x508: IF (Stack[-1] == 0) GOTO 0x50b; Pop(1)

0x509: Stack[-6] = (int) 0
0x50a: Return(); Pop(4)

0x50b: Pop(0); Push(Stack[-5] + Stack[0 + StackPtr]);
0x50c: @@ get(Stack[-2], Stack[-1])
0x50d: Pop(1)
0x50e: Stack[-6] = Stack[-1]
0x50f: Return(); Pop(4)

0x510: PushEmpty(int, int, int, int)
0x511: @@ size(Stack[-2])
0x512: Pop(0)
0x513: Pop(0); Push(Stack[-5] + Stack[1 + StackPtr]);
0x514: Pop(1); Push((bool) Stack[-1] >= Stack[-3])
0x515: IF (Stack[-1] == 0) GOTO 0x518; Pop(1)

0x516: Stack[-6] = (int) 0
0x517: Return(); Pop(4)

0x518: Pop(0); Push(Stack[-5] + Stack[1 + StackPtr]);
0x519: @@ get(Stack[-2], Stack[-1])
0x51a: Pop(1)
0x51b: Stack[-6] = Stack[-1]
0x51c: Return(); Pop(4)

0x51d: PushEmpty()
0x51e: Push((int) 1)
0x51f: Pop(1); Push(Stack[-2] + Stack[-1]);
0x520: Push((int) 10)
0x521: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x522: IF (Stack[-1] == 0) GOTO 0x528; Pop(1)

0x523: Push("l_slot0")
0x524: Push((int) 1)
0x525: Pop(1); Push(Stack[-3] + Stack[-1]);
0x526: Stack[-4] = Stack[-2] + Stack[-1]; Pop(2);
0x527: Return(); Pop(0)

0x528: Push("l_slot")
0x529: Push((int) 1)
0x52a: Pop(1); Push(Stack[-3] + Stack[-1]);
0x52b: Stack[-4] = Stack[-2] + Stack[-1]; Pop(2);
0x52c: Return(); Pop(0)

0x52d: PushEmpty()
0x52e: Push((int) 1)
0x52f: Pop(1); Push(Stack[-2] + Stack[-1]);
0x530: Push((int) 10)
0x531: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x532: IF (Stack[-1] == 0) GOTO 0x538; Pop(1)

0x533: Push("r_slot0")
0x534: Push((int) 1)
0x535: Pop(1); Push(Stack[-3] + Stack[-1]);
0x536: Stack[-4] = Stack[-2] + Stack[-1]; Pop(2);
0x537: Return(); Pop(0)

0x538: Push("r_slot")
0x539: Push((int) 1)
0x53a: Pop(1); Push(Stack[-3] + Stack[-1]);
0x53b: Stack[-4] = Stack[-2] + Stack[-1]; Pop(2);
0x53c: Return(); Pop(0)

0x53d: PushEmpty(int, int)
0x53e: Stack[-1] = (int) 0
0x53f: Push((int) 18)
0x540: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x541: IF (Stack[-1] == 0) GOTO 0x54d; Pop(1)

0x542: PushEmpty(string, int)
0x543: Stack[-1] = Stack[-3]
0x544: Call 0x51d

0x545: Pop(1)
0x546: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x547: IF (Stack[-1] == 0) GOTO 0x54a; Pop(1)

0x548: Stack[-5] = Stack[-1]
0x549: Return(); Pop(2)

0x54a: Push((int) 1)
0x54b: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x54c: GOTO 0x53f

0x54d: Stack[-5] = (int) -1
0x54e: Return(); Pop(2)

0x54f: PushEmpty(int, int)
0x550: Stack[-1] = (int) 0
0x551: Push((int) 18)
0x552: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x553: IF (Stack[-1] == 0) GOTO 0x55f; Pop(1)

0x554: PushEmpty(string, int)
0x555: Stack[-1] = Stack[-3]
0x556: Call 0x52d

0x557: Pop(1)
0x558: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x559: IF (Stack[-1] == 0) GOTO 0x55c; Pop(1)

0x55a: Stack[-5] = Stack[-1]
0x55b: Return(); Pop(2)

0x55c: Push((int) 1)
0x55d: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x55e: GOTO 0x551

0x55f: Stack[-5] = (int) -1
0x560: Return(); Pop(2)

0x561: PushEmpty(float, int, bool, float, int, bool)
0x562: Push((int) 0)
0x563: Pop(1); Push((bool) Stack[-8] != Stack[-1])
0x564: IF (Stack[-1] == 0) GOTO 0x567; Pop(1)

0x565: Stack[-10] = (int) 1
0x566: Return(); Pop(6)

0x567: Stack[-3] = (int) 1
0x568: Stack[-2] = (int) 1
0x569: Pop(0); Push((bool) Stack[-2] <= Stack[-8])
0x56a: IF (Stack[-1] == 0) GOTO 0x578; Pop(1)

0x56b: Push("sellf")
0x56c: Pop(1); Push(Stack[-1] + Stack[-3]);
0x56d: @@ HasProperty(Stack[-1], Stack[-2])
0x56e: Pop(1)
0x56f: Push(Stack[-1])
0x570: IF (Stack[-1] == 0) GOTO 0x575; Pop(1)

0x571: Push("sellf")
0x572: Pop(1); Push(Stack[-1] + Stack[-3]);
0x573: @@ GetProperty(Stack[-1], Stack[-4])
0x574: Pop(1)
0x575: Push((int) 1)
0x576: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x577: GOTO 0x569

0x578: Push((int) 100)
0x579: Stack[-11] = Stack[-4] / Stack[-1]; Pop(1);
0x57a: Return(); Pop(6)

0x57b: PushEmpty(float, int, bool, float, int, bool)
0x57c: Push((int) 0)
0x57d: Pop(1); Push((bool) Stack[-8] != Stack[-1])
0x57e: IF (Stack[-1] == 0) GOTO 0x581; Pop(1)

0x57f: Stack[-10] = (int) 1
0x580: Return(); Pop(6)

0x581: Stack[-3] = (int) 1
0x582: Stack[-2] = (int) 1
0x583: Pop(0); Push((bool) Stack[-2] <= Stack[-8])
0x584: IF (Stack[-1] == 0) GOTO 0x592; Pop(1)

0x585: Push("buyf")
0x586: Pop(1); Push(Stack[-1] + Stack[-3]);
0x587: @@ HasProperty(Stack[-1], Stack[-2])
0x588: Pop(1)
0x589: Push(Stack[-1])
0x58a: IF (Stack[-1] == 0) GOTO 0x58f; Pop(1)

0x58b: Push("buyf")
0x58c: Pop(1); Push(Stack[-1] + Stack[-3]);
0x58d: @@ GetProperty(Stack[-1], Stack[-4])
0x58e: Pop(1)
0x58f: Push((int) 1)
0x590: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x591: GOTO 0x583

0x592: Push((int) 100)
0x593: Stack[-11] = Stack[-4] / Stack[-1]; Pop(1);
0x594: Return(); Pop(6)

0x595: PushEmpty(object, bool, int, object, bool, int)
0x596: @ GetContainer(Stack[-3])
0x597: Pop(0)
0x598: Push("barter")
0x599: @@ HasProperty(Stack[-1], Stack[-3])
0x59a: Pop(1)
0x59b: Pop(0); Push((bool) Stack[-2] == 0)
0x59c: IF (Stack[-1] == 0) GOTO 0x59f; Pop(1)

0x59d: Stack[-7] = (int) 0
0x59e: Return(); Pop(6)

0x59f: Push("barter")
0x5a0: @@ GetProperty(Stack[-1], Stack[-2])
0x5a1: Pop(1)
0x5a2: Stack[-7] = Stack[-1]
0x5a3: Return(); Pop(6)

0x5a4: Stack[-3] = 0
0x5a5: PushEmpty(bool, int, bool, int, bool, int, bool, int)
0x5a6: Push((int) 0)
0x5a7: Pop(1); Push((bool) Stack[-10] == Stack[-1])
0x5a8: IF (Stack[-1] == 0) GOTO 0x5c7; Pop(1)

0x5a9: PushEmpty(int, object)
0x5aa: Stack[-1] = Stack[-12]
0x5ab: Call 0x5e2

0x5ac: Pop(1)
0x5ad: Push("Price")
0x5ae: @ HasInvItemProperty(Stack[-6], Stack[-2], Stack[-1])
0x5af: Pop(2)
0x5b0: Pop(0); Push((bool) Stack[-4] == 0)
0x5b1: IF (Stack[-1] == 0) GOTO 0x5be; Pop(1)

0x5b2: Push("Item with id :")
0x5b3: PushEmpty(int, object)
0x5b4: Stack[-1] = Stack[-13]
0x5b5: Call 0x5e2

0x5b6: Pop(1)
0x5b7: Pop(2); Push(Stack[-2] + Stack[-1]);
0x5b8: Push(" doesn't have price")
0x5b9: Pop(2); Push(Stack[-2] + Stack[-1]);
0x5ba: @ Trace(Stack[-1])
0x5bb: Pop(1)
0x5bc: Stack[-11] = (int) 1
0x5bd: Return(); Pop(8)

0x5be: PushEmpty(int, object)
0x5bf: Stack[-1] = Stack[-12]
0x5c0: Call 0x5e2

0x5c1: Pop(1)
0x5c2: Push("Price")
0x5c3: @ GetInvItemProperty(Stack[-5], Stack[-2], Stack[-1])
0x5c4: Pop(2)
0x5c5: Stack[-11] = Stack[-3]
0x5c6: Return(); Pop(8)

0x5c7: PushEmpty(int, object)
0x5c8: Stack[-1] = Stack[-12]
0x5c9: Call 0x5e2

0x5ca: Pop(1)
0x5cb: Push("BarterPrice")
0x5cc: Pop(1); Push(Stack[-1] + Stack[-11]);
0x5cd: @ HasInvItemProperty(Stack[-4], Stack[-2], Stack[-1])
0x5ce: Pop(2)
0x5cf: Pop(0); Push((bool) Stack[-2] == 0)
0x5d0: IF (Stack[-1] == 0) GOTO 0x5d3; Pop(1)

0x5d1: Stack[-11] = (int) 0
0x5d2: Return(); Pop(8)

0x5d3: PushEmpty(int, object)
0x5d4: Stack[-1] = Stack[-12]
0x5d5: Call 0x5e2

0x5d6: Pop(1)
0x5d7: Push("BarterPrice")
0x5d8: Pop(1); Push(Stack[-1] + Stack[-11]);
0x5d9: @ GetInvItemProperty(Stack[-3], Stack[-2], Stack[-1])
0x5da: Pop(2)
0x5db: Push((int) 0)
0x5dc: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x5dd: IF (Stack[-1] == 0) GOTO 0x5e0; Pop(1)

0x5de: Stack[-11] = Stack[-1]
0x5df: Return(); Pop(8)

0x5e0: Stack[-11] = -Stack[-1]; Pop(0);
0x5e1: Return(); Pop(8)

0x5e2: PushEmpty(int, int)
0x5e3: @@ GetItemID(Stack[-1])
0x5e4: Pop(0)
0x5e5: Stack[-4] = Stack[-1]
0x5e6: Return(); Pop(2)

0x5e7: PushEmpty(int, int)
0x5e8: PushEmpty(int, object)
0x5e9: Stack[-1] = Stack[-5]
0x5ea: Call 0x5e2

0x5eb: Pop(1)
0x5ec: Push("Category")
0x5ed: @ GetInvItemProperty(Stack[-3], Stack[-2], Stack[-1])
0x5ee: Pop(2)
0x5ef: Stack[-4] = Stack[-1]
0x5f0: Return(); Pop(2)

0x5f1: PushEmpty(int, int)
0x5f2: PushEmpty(int, object)
0x5f3: Stack[-1] = Stack[-5]
0x5f4: Call 0x5e2

0x5f5: Pop(1)
0x5f6: @ GetItemMaxStackSize(Stack[-1], Stack[-2])
0x5f7: Pop(1)
0x5f8: Stack[-4] = Stack[-1]
0x5f9: Return(); Pop(2)

0x5fa: PushEmpty(int, object, int, object)
0x5fb: @ GetContainer(Stack[-1])
0x5fc: Pop(0)
0x5fd: @@ GetItemCount(Stack[-2])
0x5fe: Pop(0)
0x5ff: Stack[-5] = Stack[-2]
0x600: Return(); Pop(4)

0x601: Stack[-1] = 0
0x602: PushEmpty(int, object, int, object)
0x603: @ GetPlayerContainer(Stack[-1])
0x604: Pop(0)
0x605: @@ GetItemCount(Stack[-2], Stack[-5])
0x606: Pop(0)
0x607: Stack[-6] = Stack[-2]
0x608: Return(); Pop(4)

0x609: Stack[-1] = 0
0x60a: PushEmpty(object, object, object, object)
0x60b: @ GetPlayerContainer(Stack[-2])
0x60c: Pop(0)
0x60d: @@ GetItem(Stack[-1], Stack[-5], Stack[-6])
0x60e: Pop(0)
0x60f: Stack[-7] = Stack[-1]
0x610: Return(); Pop(4)

0x611: Stack[-1] = 0
0x612: Stack[-2] = 0
0x613: PushEmpty(object, int, object, int)
0x614: @ GetPlayerContainer(Stack[-2])
0x615: Pop(0)
0x616: @@ GetItemAmount(Stack[-1], Stack[-5], Stack[-6])
0x617: Pop(0)
0x618: Stack[-7] = Stack[-1]
0x619: Return(); Pop(4)

0x61a: Stack[-2] = 0
0x61b: PushEmpty(object, object, object, object)
0x61c: @ GetContainer(Stack[-2])
0x61d: Pop(0)
0x61e: @@ GetItem(Stack[-1], Stack[-5])
0x61f: Pop(0)
0x620: Stack[-6] = Stack[-1]
0x621: Return(); Pop(4)

0x622: Stack[-1] = 0
0x623: Stack[-2] = 0
0x624: PushEmpty(object, int, object, int)
0x625: @ GetContainer(Stack[-2])
0x626: Pop(0)
0x627: @@ GetItemAmount(Stack[-1], Stack[-5])
0x628: Pop(0)
0x629: Stack[-6] = Stack[-1]
0x62a: Return(); Pop(4)

0x62b: Stack[-2] = 0
0x62c: PushEmpty()
0x62d: PushEmpty(int, object)
0x62e: Stack[-1] = Stack[-4]
0x62f: Call 0x5e2

0x630: Pop(1)
0x631: PushEmpty(int, object)
0x632: Stack[-1] = Stack[-4]
0x633: Call 0x5e2

0x634: Pop(1)
0x635: Stack[-5] = Stack[-2] == Stack[-1]; Pop(2);
0x636: Return(); Pop(0)

0x637: PushEmpty()
0x638: PushEmpty(int, object)
0x639: Stack[-1] = Stack[-4]
0x63a: Call 0x5e2

0x63b: Pop(1)
0x63c: PushEmpty(int, object)
0x63d: Stack[-1] = Stack[-4]
0x63e: Call 0x5e2

0x63f: Pop(1)
0x640: Stack[-5] = Stack[-2] == Stack[-1]; Pop(2);
0x641: Return(); Pop(0)

0x642: PushEmpty(bool, int, bool, int)
0x643: Push((int) 0)
0x644: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x645: IF (Stack[-1] == 0) GOTO 0x648; Pop(1)

0x646: Stack[-8] = (bool) 0
0x647: Return(); Pop(4)

0x648: PushEmpty(int, object)
0x649: Stack[-1] = Stack[-9]
0x64a: Call 0x5e2

0x64b: Pop(1)
0x64c: Push("BarterPrice")
0x64d: Pop(1); Push(Stack[-1] + Stack[-8]);
0x64e: @ HasInvItemProperty(Stack[-4], Stack[-2], Stack[-1])
0x64f: Pop(2)
0x650: Pop(0); Push((bool) Stack[-2] == 0)
0x651: IF (Stack[-1] == 0) GOTO 0x654; Pop(1)

0x652: Stack[-8] = (bool) 1
0x653: Return(); Pop(4)

0x654: PushEmpty(int, object)
0x655: Stack[-1] = Stack[-9]
0x656: Call 0x5e2

0x657: Pop(1)
0x658: Push("BarterPrice")
0x659: Pop(1); Push(Stack[-1] + Stack[-8]);
0x65a: @ GetInvItemProperty(Stack[-3], Stack[-2], Stack[-1])
0x65b: Pop(2)
0x65c: PushEmpty(bool)
0x65d: Stack[-1] = (bool) 0
0x65e: Push(Stack[-6])
0x65f: IF (Stack[-1] == 0) GOTO 0x664; Pop(1)

0x660: Push((int) 0)
0x661: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x662: IF (Stack[-1] == 0) GOTO 0x664; Pop(1)

0x663: Stack[-1] = (bool) 1
0x664: IF (Stack[-1] == 0) GOTO 0x667; Pop(1)

0x665: Stack[-8] = (bool) 0
0x666: Return(); Pop(4)

0x667: PushEmpty(bool)
0x668: Stack[-1] = (bool) 0
0x669: Pop(0); Push((bool) Stack[-6] == 0)
0x66a: IF (Stack[-1] == 0) GOTO 0x66f; Pop(1)

0x66b: Push((int) 0)
0x66c: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x66d: IF (Stack[-1] == 0) GOTO 0x66f; Pop(1)

0x66e: Stack[-1] = (bool) 1
0x66f: IF (Stack[-1] == 0) GOTO 0x672; Pop(1)

0x670: Stack[-8] = (bool) 0
0x671: Return(); Pop(4)

0x672: Stack[-8] = (bool) 1
0x673: Return(); Pop(4)

0x674: PushEmpty(int, object, int, int, object, int)
0x675: @@ GetItemCount(Stack[-3], Stack[-7])
0x676: Pop(0)
0x677: Stack[-1] = (int) 0
0x678: Pop(0); Push((bool) Stack[-1] < Stack[-3])
0x679: IF (Stack[-1] == 0) GOTO 0x68a; Pop(1)

0x67a: @@ GetItem(Stack[-2], Stack[-1], Stack[-7])
0x67b: Pop(0)
0x67c: PushEmpty(bool, object, object)
0x67d: Stack[-2] = Stack[-11]
0x67e: Stack[-1] = Stack[-5]
0x67f: Call 0x62c

0x680: Pop(2)
0x681: IF (Stack[-1] == 0) GOTO 0x687; Pop(1)

0x682: Push((int) 1)
0x683: @@ RemoveItem(Stack[-2], Stack[-1], Stack[-8])
0x684: Pop(1)
0x685: Stack[-10] = (bool) 1
0x686: Return(); Pop(6)

0x687: Push((int) 1)
0x688: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x689: GOTO 0x678

0x68a: Stack[-10] = (bool) 0
0x68b: Return(); Pop(6)

0x68c: Stack[-2] = 0
0x68d: PushEmpty(bool, bool)
0x68e: Push((int) 1)
0x68f: @@ AddItem(Stack[-2], Stack[-5], Stack[-4], Stack[-1])
0x690: Pop(1)
0x691: Stack[-6] = Stack[-1]
0x692: Return(); Pop(2)

