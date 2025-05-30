GlobalVarCount = 0

Strings:
	BarterPrice
	size
	get
	remove
	add
	$parent
	default
	cancel_button
	ok_button
	iSlotResetButtons
	background_left
	background_right
	l_scroll_button_top
	l_scroll_button_bottom
	r_scroll_button_top
	r_scroll_button_bottom
	l_scrollbar
	r_scrollbar
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
	durability
	Category
	GetItemCount
	GetItem
	GetItemAmount
	IsItemSelected
	Compare
	RemoveItem
	AddItem

Import:
	HasInvItemProperty (3 args)
	GetInvItemProperty (3 args)
	GetContainer (1 args)
	CreateObjectVector (1 args)
	CreateIntVector (1 args)
	CreateStringVector (1 args)
	SendMessage (3 args)
	SendMessage (2 args)
	GetGameTime (1 args)
	ShowCursor (0 args)
	SetCursor (1 args)
	CaptureKeyboard (0 args)
	ProcessEvents (0 args)
	DestroyWindow (0 args)
	Trace (1 args)
	GetPlayerMoneyCount (1 args)
	GetPlayerContainer (1 args)
	SetPlayerMoneyCount (1 args)
	GetWindowSize (2 args)
	GetItemMaxStackSize (2 args)

RunOp = 0x62
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (int, int, int, int, int, object, object, object, object, object, object, object, object, object, object, object, object, object, object, object, object, object, string, object, object, object, object, int, int, object) Params = 0
		EVENT_101 Op = 0x154 Vars = (int)
		EVENT_102 Op = 0x1d6 Vars = (int)
		EVENT_100 Op = 0x258 Vars = (int)
		EVENT_200 Op = 0x25c Vars = (int, string, object)


0x0: PushEmpty(bool, int, bool, int)
0x1: Push((int) 0)
0x2: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x3: IF (Stack[-1] == 0) GOTO 0x6; Pop(1)

0x4: Stack[-8] = (bool) 0
0x5: Return(); Pop(4)

0x6: PushEmpty(int, object)
0x7: Stack[-1] = Stack[-9]
0x8: Call2 0x969

0x9: Pop(1)
0xa: Push("BarterPrice")
0xb: Pop(1); Push(Stack[-1] + Stack[-8]);
0xc: @ HasInvItemProperty(Stack[-4], Stack[-2], Stack[-1])
0xd: Pop(2)
0xe: Pop(0); Push((bool) Stack[-2] == 0)
0xf: IF (Stack[-1] == 0) GOTO 0x12; Pop(1)

0x10: Stack[-8] = (bool) 1
0x11: Return(); Pop(4)

0x12: PushEmpty(int, object)
0x13: Stack[-1] = Stack[-9]
0x14: Call2 0x969

0x15: Pop(1)
0x16: Push("BarterPrice")
0x17: Pop(1); Push(Stack[-1] + Stack[-8]);
0x18: @ GetInvItemProperty(Stack[-3], Stack[-2], Stack[-1])
0x19: Pop(2)
0x1a: PushEmpty(bool)
0x1b: Stack[-1] = (bool) 0
0x1c: Push(Stack[-6])
0x1d: IF (Stack[-1] == 0) GOTO 0x22; Pop(1)

0x1e: Push((int) 0)
0x1f: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x20: IF (Stack[-1] == 0) GOTO 0x22; Pop(1)

0x21: Stack[-1] = (bool) 1
0x22: IF (Stack[-1] == 0) GOTO 0x25; Pop(1)

0x23: Stack[-8] = (bool) 0
0x24: Return(); Pop(4)

0x25: PushEmpty(bool)
0x26: Stack[-1] = (bool) 0
0x27: Pop(0); Push((bool) Stack[-6] == 0)
0x28: IF (Stack[-1] == 0) GOTO 0x2d; Pop(1)

0x29: Push((int) 0)
0x2a: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x2b: IF (Stack[-1] == 0) GOTO 0x2d; Pop(1)

0x2c: Stack[-1] = (bool) 1
0x2d: IF (Stack[-1] == 0) GOTO 0x30; Pop(1)

0x2e: Stack[-8] = (bool) 0
0x2f: Return(); Pop(4)

0x30: Stack[-8] = (bool) 1
0x31: Return(); Pop(4)

0x32: PushEmpty(int, object, int, int, object, int)
0x33: @@ size(Stack[-3])
0x34: Pop(0)
0x35: Stack[-1] = (int) 0
0x36: Pop(0); Push((bool) Stack[-1] < Stack[-3])
0x37: IF (Stack[-1] == 0) GOTO 0x46; Pop(1)

0x38: @@ get(Stack[-2], Stack[-1])
0x39: Pop(0)
0x3a: PushEmpty(bool, object, object)
0x3b: Stack[-2] = Stack[-5]
0x3c: Stack[-1] = Stack[-10]
0x3d: Call2 0xa0a

0x3e: Pop(2)
0x3f: IF (Stack[-1] == 0) GOTO 0x43; Pop(1)

0x40: @@ remove(Stack[-1])
0x41: Pop(0)
0x42: Return(); Pop(6)

0x43: Push((int) 1)
0x44: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x45: GOTO 0x36

0x46: @@ add(Stack[-7])
0x47: Pop(0)
0x48: Return(); Pop(6)

0x49: Stack[-2] = 0
0x4a: PushEmpty(int, object, int, int, object, int)
0x4b: @@ size(Stack[-3])
0x4c: Pop(0)
0x4d: Stack[-1] = (int) 0
0x4e: Pop(0); Push((bool) Stack[-1] < Stack[-3])
0x4f: IF (Stack[-1] == 0) GOTO 0x5e; Pop(1)

0x50: @@ get(Stack[-2], Stack[-1])
0x51: Pop(0)
0x52: PushEmpty(bool, object, object)
0x53: Stack[-2] = Stack[-5]
0x54: Stack[-1] = Stack[-10]
0x55: Call2 0xa0a

0x56: Pop(2)
0x57: IF (Stack[-1] == 0) GOTO 0x5b; Pop(1)

0x58: @@ remove(Stack[-1])
0x59: Pop(0)
0x5a: Return(); Pop(6)

0x5b: Push((int) 1)
0x5c: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x5d: GOTO 0x4e

0x5e: @@ add(Stack[-7])
0x5f: Pop(0)
0x60: Return(); Pop(6)

0x61: Stack[-2] = 0
0x62: PushEmpty(int, string, string, string, string, object, object, int, string, string, string, string, object, object, float, int, string, string, string, string, object, object, int, string, string, string, string, object, object, float)
0x63: PushEmpty(int)
0x64: Call2 0x836

0x65: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x66: Pop(1)
0x67: @ GetContainer(Stack[-29])
0x68: Pop(0)
0x69: @ CreateObjectVector(Stack[-23])
0x6a: Pop(0)
0x6b: @ CreateObjectVector(Stack[-24])
0x6c: Pop(0)
0x6d: @ CreateObjectVector(Stack[-5])
0x6e: Pop(0)
0x6f: @ CreateIntVector(Stack[-6])
0x70: Pop(0)
0x71: @ CreateIntVector(Stack[-7])
0x72: Pop(0)
0x73: @ CreateIntVector(Stack[-8])
0x74: Pop(0)
0x75: @ CreateObjectVector(Stack[-9])
0x76: Pop(0)
0x77: @ CreateIntVector(Stack[-10])
0x78: Pop(0)
0x79: @ CreateIntVector(Stack[-11])
0x7a: Pop(0)
0x7b: @ CreateObjectVector(Stack[-12])
0x7c: Pop(0)
0x7d: @ CreateIntVector(Stack[-13])
0x7e: Pop(0)
0x7f: @ CreateObjectVector(Stack[-14])
0x80: Pop(0)
0x81: @ CreateIntVector(Stack[-15])
0x82: Pop(0)
0x83: @ CreateObjectVector(Stack[-16])
0x84: Pop(0)
0x85: @ CreateIntVector(Stack[-17])
0x86: Pop(0)
0x87: @ CreateObjectVector(Stack[-18])
0x88: Pop(0)
0x89: @ CreateIntVector(Stack[-19])
0x8a: Pop(0)
0x8b: @ CreateObjectVector(Stack[-20])
0x8c: Pop(0)
0x8d: @ CreateIntVector(Stack[-21])
0x8e: Pop(0)
0x8f: PushEmpty(int)
0x90: Call2 0x959

0x91: Stack[28 + Tasks[-1].StackPointer] = Stack[-1]
0x92: Pop(1)
0x93: Stack[22 + Tasks[-1].StackPointer] = ""
0x94: Stack[-15] = (int) 0
0x95: Pop(0); Push((bool) Stack[-15] < Stack[0 + Tasks[-1].StackPointer])
0x96: IF (Stack[-1] == 0) GOTO 0xe7; Pop(1)

0x97: Stack[-14] = ""
0x98: Stack[-13] = ""
0x99: Stack[-12] = "$parent"
0x9a: Stack[-11] = "$parent"
0x9b: Push((int) 2)
0x9c: Pop(1); Push(Stack[-16] % Stack[-1]);
0x9d: Push((int) 0)
0x9e: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x9f: IF (Stack[-1] == 0) GOTO 0xad; Pop(1)

0xa0: PushEmpty(string, int)
0xa1: Push((int) 1)
0xa2: Stack[-2] = Stack[-18] + Stack[-1]; Pop(1);
0xa3: Call2 0x826

0xa4: Stack[-15] = Stack[-2]
0xa5: Pop(2)
0xa6: PushEmpty(string, int)
0xa7: Push((int) 1)
0xa8: Stack[-2] = Stack[-18] + Stack[-1]; Pop(1);
0xa9: Call2 0x816

0xaa: Stack[-16] = Stack[-2]
0xab: Pop(2)
0xac: GOTO 0xb3

0xad: PushEmpty(string, int)
0xae: Push((int) 1)
0xaf: Stack[-2] = Stack[-18] - Stack[-1]; Pop(1);
0xb0: Call2 0x826

0xb1: Stack[-16] = Stack[-2]
0xb2: Pop(2)
0xb3: Push((int) 1)
0xb4: Pop(1); Push((bool) Stack[-16] > Stack[-1])
0xb5: IF (Stack[-1] == 0) GOTO 0xbc; Pop(1)

0xb6: PushEmpty(string, int)
0xb7: Push((int) 2)
0xb8: Stack[-2] = Stack[-18] - Stack[-1]; Pop(1);
0xb9: Call2 0x826

0xba: Stack[-14] = Stack[-2]
0xbb: Pop(2)
0xbc: Push((int) 2)
0xbd: Pop(1); Push(Stack[0 + StackPtr] - Stack[-1]);
0xbe: Pop(1); Push((bool) Stack[-16] < Stack[-1])
0xbf: IF (Stack[-1] == 0) GOTO 0xc6; Pop(1)

0xc0: PushEmpty(string, int)
0xc1: Push((int) 2)
0xc2: Stack[-2] = Stack[-18] + Stack[-1]; Pop(1);
0xc3: Call2 0x826

0xc4: Stack[-13] = Stack[-2]
0xc5: Pop(2)
0xc6: @ CreateStringVector(Stack[-10])
0xc7: Pop(0)
0xc8: @@ add(Stack[-14])
0xc9: Pop(0)
0xca: @@ add(Stack[-13])
0xcb: Pop(0)
0xcc: @@ add(Stack[-12])
0xcd: Pop(0)
0xce: @@ add(Stack[-11])
0xcf: Pop(0)
0xd0: Push((int) -1)
0xd1: PushEmpty(string, int)
0xd2: Stack[-1] = Stack[-18]
0xd3: Call2 0x826

0xd4: Pop(1)
0xd5: @ SendMessage(Stack[-2], Stack[-1], Stack[-12])
0xd6: Pop(2)
0xd7: @ CreateIntVector(Stack[-9])
0xd8: Pop(0)
0xd9: @@ add(Stack[-0])
0xda: Pop(0)
0xdb: Push((int) -19)
0xdc: PushEmpty(string, int)
0xdd: Stack[-1] = Stack[-18]
0xde: Call2 0x826

0xdf: Pop(1)
0xe0: @ SendMessage(Stack[-2], Stack[-1], Stack[-11])
0xe1: Pop(2)
0xe2: Stack[-9] = 0
0xe3: Stack[-10] = 0
0xe4: Push((int) 1)
0xe5: Stack[-16] = Stack[-16] + Stack[-1]; Pop(1);
0xe6: GOTO 0x95

0xe7: Stack[-8] = (int) 0
0xe8: Pop(0); Push((bool) Stack[-8] < Stack[0 + Tasks[-1].StackPointer])
0xe9: IF (Stack[-1] == 0) GOTO 0x13a; Pop(1)

0xea: Stack[-7] = ""
0xeb: Stack[-6] = ""
0xec: Stack[-5] = "$parent"
0xed: Stack[-4] = "$parent"
0xee: Push((int) 2)
0xef: Pop(1); Push(Stack[-9] % Stack[-1]);
0xf0: Push((int) 0)
0xf1: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xf2: IF (Stack[-1] == 0) GOTO 0xfa; Pop(1)

0xf3: PushEmpty(string, int)
0xf4: Push((int) 1)
0xf5: Stack[-2] = Stack[-11] + Stack[-1]; Pop(1);
0xf6: Call2 0x816

0xf7: Stack[-8] = Stack[-2]
0xf8: Pop(2)
0xf9: GOTO 0x106

0xfa: PushEmpty(string, int)
0xfb: Push((int) 1)
0xfc: Stack[-2] = Stack[-11] - Stack[-1]; Pop(1);
0xfd: Call2 0x816

0xfe: Stack[-9] = Stack[-2]
0xff: Pop(2)
0x100: PushEmpty(string, int)
0x101: Push((int) 1)
0x102: Stack[-2] = Stack[-11] - Stack[-1]; Pop(1);
0x103: Call2 0x826

0x104: Stack[-8] = Stack[-2]
0x105: Pop(2)
0x106: Push((int) 1)
0x107: Pop(1); Push((bool) Stack[-9] > Stack[-1])
0x108: IF (Stack[-1] == 0) GOTO 0x10f; Pop(1)

0x109: PushEmpty(string, int)
0x10a: Push((int) 2)
0x10b: Stack[-2] = Stack[-11] - Stack[-1]; Pop(1);
0x10c: Call2 0x816

0x10d: Stack[-7] = Stack[-2]
0x10e: Pop(2)
0x10f: Push((int) 2)
0x110: Pop(1); Push(Stack[0 + StackPtr] - Stack[-1]);
0x111: Pop(1); Push((bool) Stack[-9] < Stack[-1])
0x112: IF (Stack[-1] == 0) GOTO 0x119; Pop(1)

0x113: PushEmpty(string, int)
0x114: Push((int) 2)
0x115: Stack[-2] = Stack[-11] + Stack[-1]; Pop(1);
0x116: Call2 0x816

0x117: Stack[-6] = Stack[-2]
0x118: Pop(2)
0x119: @ CreateStringVector(Stack[-3])
0x11a: Pop(0)
0x11b: @@ add(Stack[-7])
0x11c: Pop(0)
0x11d: @@ add(Stack[-6])
0x11e: Pop(0)
0x11f: @@ add(Stack[-5])
0x120: Pop(0)
0x121: @@ add(Stack[-4])
0x122: Pop(0)
0x123: Push((int) -1)
0x124: PushEmpty(string, int)
0x125: Stack[-1] = Stack[-11]
0x126: Call2 0x816

0x127: Pop(1)
0x128: @ SendMessage(Stack[-2], Stack[-1], Stack[-5])
0x129: Pop(2)
0x12a: @ CreateIntVector(Stack[-2])
0x12b: Pop(0)
0x12c: @@ add(Stack[-0])
0x12d: Pop(0)
0x12e: Push((int) -19)
0x12f: PushEmpty(string, int)
0x130: Stack[-1] = Stack[-11]
0x131: Call2 0x816

0x132: Pop(1)
0x133: @ SendMessage(Stack[-2], Stack[-1], Stack[-4])
0x134: Pop(2)
0x135: Stack[-2] = 0
0x136: Stack[-3] = 0
0x137: Push((int) 1)
0x138: Stack[-9] = Stack[-9] + Stack[-1]; Pop(1);
0x139: GOTO 0xe8

0x13a: Push((int) -6)
0x13b: PushEmpty(string, int)
0x13c: Stack[-1] = (int) 0
0x13d: Call2 0x826

0x13e: Pop(1)
0x13f: @ SendMessage(Stack[-2], Stack[-1])
0x140: Pop(2)
0x141: PushEmpty()
0x142: Call2 0x368

0x143: Pop(0)
0x144: @ GetGameTime(Stack[-1])
0x145: Pop(0)
0x146: Push((int) 1)
0x147: Push((int) 24)
0x148: Pop(1); Push(Stack[-3] / Stack[-1]);
0x149: Stack[27 + Tasks[-1].StackPointer] = Stack[-2] + Stack[-1]; Pop(2);
0x14a: @ ShowCursor()
0x14b: Pop(0)
0x14c: Push("default")
0x14d: @ SetCursor(Stack[-1])
0x14e: Pop(1)
0x14f: @ CaptureKeyboard()
0x150: Pop(0)
0x151: @ ProcessEvents()
0x152: Pop(0)
0x153: Return(); Pop(30)

0x154: PushEmpty(int, int, int, int, int, int, int, int)
0x155: Push((int) 269)
0x156: Pop(1); Push((bool) Stack[-10] == Stack[-1])
0x157: IF (Stack[-1] == 0) GOTO 0x16f; Pop(1)

0x158: Push("")
0x159: Pop(1); Push((bool) Stack[22 + Tasks[-1].StackPointer] == Stack[-1])
0x15a: IF (Stack[-1] == 0) GOTO 0x16f; Pop(1)

0x15b: Stack[-4] = (int) 0
0x15c: Pop(0); Push((bool) Stack[-4] < Stack[0 + Tasks[-1].StackPointer])
0x15d: IF (Stack[-1] == 0) GOTO 0x16f; Pop(1)

0x15e: Push((int) -13)
0x15f: PushEmpty(string, int)
0x160: Stack[-1] = Stack[-7]
0x161: Call2 0x826

0x162: Pop(1)
0x163: @ SendMessage(Stack[-2], Stack[-1])
0x164: Pop(2)
0x165: Push((int) -13)
0x166: PushEmpty(string, int)
0x167: Stack[-1] = Stack[-7]
0x168: Call2 0x816

0x169: Pop(1)
0x16a: @ SendMessage(Stack[-2], Stack[-1])
0x16b: Pop(2)
0x16c: Push((int) 1)
0x16d: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x16e: GOTO 0x15c

0x16f: Push((int) 270)
0x170: Pop(1); Push((bool) Stack[-10] == Stack[-1])
0x171: IF (Stack[-1] == 0) GOTO 0x189; Pop(1)

0x172: Push("")
0x173: Pop(1); Push((bool) Stack[22 + Tasks[-1].StackPointer] == Stack[-1])
0x174: IF (Stack[-1] == 0) GOTO 0x189; Pop(1)

0x175: Stack[-3] = (int) 0
0x176: Pop(0); Push((bool) Stack[-3] < Stack[0 + Tasks[-1].StackPointer])
0x177: IF (Stack[-1] == 0) GOTO 0x189; Pop(1)

0x178: Push((int) -14)
0x179: PushEmpty(string, int)
0x17a: Stack[-1] = Stack[-6]
0x17b: Call2 0x826

0x17c: Pop(1)
0x17d: @ SendMessage(Stack[-2], Stack[-1])
0x17e: Pop(2)
0x17f: Push((int) -14)
0x180: PushEmpty(string, int)
0x181: Stack[-1] = Stack[-6]
0x182: Call2 0x816

0x183: Pop(1)
0x184: @ SendMessage(Stack[-2], Stack[-1])
0x185: Pop(2)
0x186: Push((int) 1)
0x187: Stack[-4] = Stack[-4] + Stack[-1]; Pop(1);
0x188: GOTO 0x176

0x189: Push((int) 267)
0x18a: Pop(1); Push((bool) Stack[-10] == Stack[-1])
0x18b: IF (Stack[-1] == 0) GOTO 0x1a9; Pop(1)

0x18c: Push("cancel_button")
0x18d: Pop(1); Push((bool) Stack[22 + Tasks[-1].StackPointer] == Stack[-1])
0x18e: IF (Stack[-1] == 0) GOTO 0x195; Pop(1)

0x18f: Push((int) -4)
0x190: Push("ok_button")
0x191: @ SendMessage(Stack[-2], Stack[-1])
0x192: Pop(2)
0x193: Stack[22 + Tasks[-1].StackPointer] = "ok_button"
0x194: GOTO 0x1a9

0x195: Stack[-2] = (int) 0
0x196: Pop(0); Push((bool) Stack[-2] < Stack[0 + Tasks[-1].StackPointer])
0x197: IF (Stack[-1] == 0) GOTO 0x1a9; Pop(1)

0x198: Push((int) -15)
0x199: PushEmpty(string, int)
0x19a: Stack[-1] = Stack[-5]
0x19b: Call2 0x826

0x19c: Pop(1)
0x19d: @ SendMessage(Stack[-2], Stack[-1])
0x19e: Pop(2)
0x19f: Push((int) -15)
0x1a0: PushEmpty(string, int)
0x1a1: Stack[-1] = Stack[-5]
0x1a2: Call2 0x816

0x1a3: Pop(1)
0x1a4: @ SendMessage(Stack[-2], Stack[-1])
0x1a5: Pop(2)
0x1a6: Push((int) 1)
0x1a7: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x1a8: GOTO 0x196

0x1a9: Push((int) 268)
0x1aa: Pop(1); Push((bool) Stack[-10] == Stack[-1])
0x1ab: IF (Stack[-1] == 0) GOTO 0x1d5; Pop(1)

0x1ac: Push("cancel_button")
0x1ad: Pop(1); Push((bool) Stack[22 + Tasks[-1].StackPointer] == Stack[-1])
0x1ae: IF (Stack[-1] == 0) GOTO 0x1b8; Pop(1)

0x1af: Push((int) -4)
0x1b0: PushEmpty(string, int)
0x1b1: Stack[-1] = (int) 1
0x1b2: Call2 0x826

0x1b3: Pop(1)
0x1b4: @ SendMessage(Stack[-2], Stack[-1])
0x1b5: Pop(2)
0x1b6: Stack[22 + Tasks[-1].StackPointer] = ""
0x1b7: GOTO 0x1d5

0x1b8: Push("ok_button")
0x1b9: Pop(1); Push((bool) Stack[22 + Tasks[-1].StackPointer] == Stack[-1])
0x1ba: IF (Stack[-1] == 0) GOTO 0x1c1; Pop(1)

0x1bb: Push((int) -4)
0x1bc: Push("cancel_button")
0x1bd: @ SendMessage(Stack[-2], Stack[-1])
0x1be: Pop(2)
0x1bf: Stack[22 + Tasks[-1].StackPointer] = "cancel_button"
0x1c0: GOTO 0x1d5

0x1c1: Stack[-1] = (int) 0
0x1c2: Pop(0); Push((bool) Stack[-1] < Stack[0 + Tasks[-1].StackPointer])
0x1c3: IF (Stack[-1] == 0) GOTO 0x1d5; Pop(1)

0x1c4: Push((int) -16)
0x1c5: PushEmpty(string, int)
0x1c6: Stack[-1] = Stack[-4]
0x1c7: Call2 0x826

0x1c8: Pop(1)
0x1c9: @ SendMessage(Stack[-2], Stack[-1])
0x1ca: Pop(2)
0x1cb: Push((int) -16)
0x1cc: PushEmpty(string, int)
0x1cd: Stack[-1] = Stack[-4]
0x1ce: Call2 0x816

0x1cf: Pop(1)
0x1d0: @ SendMessage(Stack[-2], Stack[-1])
0x1d1: Pop(2)
0x1d2: Push((int) 1)
0x1d3: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x1d4: GOTO 0x1c2

0x1d5: Return(); Pop(8)

0x1d6: PushEmpty(int, int, int, int, int, int, int, int)
0x1d7: Push((int) 273)
0x1d8: Pop(1); Push((bool) Stack[-10] == Stack[-1])
0x1d9: IF (Stack[-1] == 0) GOTO 0x1f1; Pop(1)

0x1da: Push("")
0x1db: Pop(1); Push((bool) Stack[22 + Tasks[-1].StackPointer] == Stack[-1])
0x1dc: IF (Stack[-1] == 0) GOTO 0x1f1; Pop(1)

0x1dd: Stack[-4] = (int) 0
0x1de: Pop(0); Push((bool) Stack[-4] < Stack[0 + Tasks[-1].StackPointer])
0x1df: IF (Stack[-1] == 0) GOTO 0x1f1; Pop(1)

0x1e0: Push((int) -13)
0x1e1: PushEmpty(string, int)
0x1e2: Stack[-1] = Stack[-7]
0x1e3: Call2 0x826

0x1e4: Pop(1)
0x1e5: @ SendMessage(Stack[-2], Stack[-1])
0x1e6: Pop(2)
0x1e7: Push((int) -13)
0x1e8: PushEmpty(string, int)
0x1e9: Stack[-1] = Stack[-7]
0x1ea: Call2 0x816

0x1eb: Pop(1)
0x1ec: @ SendMessage(Stack[-2], Stack[-1])
0x1ed: Pop(2)
0x1ee: Push((int) 1)
0x1ef: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x1f0: GOTO 0x1de

0x1f1: Push((int) 271)
0x1f2: Pop(1); Push((bool) Stack[-10] == Stack[-1])
0x1f3: IF (Stack[-1] == 0) GOTO 0x20b; Pop(1)

0x1f4: Push("")
0x1f5: Pop(1); Push((bool) Stack[22 + Tasks[-1].StackPointer] == Stack[-1])
0x1f6: IF (Stack[-1] == 0) GOTO 0x20b; Pop(1)

0x1f7: Stack[-3] = (int) 0
0x1f8: Pop(0); Push((bool) Stack[-3] < Stack[0 + Tasks[-1].StackPointer])
0x1f9: IF (Stack[-1] == 0) GOTO 0x20b; Pop(1)

0x1fa: Push((int) -14)
0x1fb: PushEmpty(string, int)
0x1fc: Stack[-1] = Stack[-6]
0x1fd: Call2 0x826

0x1fe: Pop(1)
0x1ff: @ SendMessage(Stack[-2], Stack[-1])
0x200: Pop(2)
0x201: Push((int) -14)
0x202: PushEmpty(string, int)
0x203: Stack[-1] = Stack[-6]
0x204: Call2 0x816

0x205: Pop(1)
0x206: @ SendMessage(Stack[-2], Stack[-1])
0x207: Pop(2)
0x208: Push((int) 1)
0x209: Stack[-4] = Stack[-4] + Stack[-1]; Pop(1);
0x20a: GOTO 0x1f8

0x20b: Push((int) 272)
0x20c: Pop(1); Push((bool) Stack[-10] == Stack[-1])
0x20d: IF (Stack[-1] == 0) GOTO 0x22b; Pop(1)

0x20e: Push("cancel_button")
0x20f: Pop(1); Push((bool) Stack[22 + Tasks[-1].StackPointer] == Stack[-1])
0x210: IF (Stack[-1] == 0) GOTO 0x217; Pop(1)

0x211: Push((int) -4)
0x212: Push("ok_button")
0x213: @ SendMessage(Stack[-2], Stack[-1])
0x214: Pop(2)
0x215: Stack[22 + Tasks[-1].StackPointer] = "ok_button"
0x216: GOTO 0x22b

0x217: Stack[-2] = (int) 0
0x218: Pop(0); Push((bool) Stack[-2] < Stack[0 + Tasks[-1].StackPointer])
0x219: IF (Stack[-1] == 0) GOTO 0x22b; Pop(1)

0x21a: Push((int) -15)
0x21b: PushEmpty(string, int)
0x21c: Stack[-1] = Stack[-5]
0x21d: Call2 0x826

0x21e: Pop(1)
0x21f: @ SendMessage(Stack[-2], Stack[-1])
0x220: Pop(2)
0x221: Push((int) -15)
0x222: PushEmpty(string, int)
0x223: Stack[-1] = Stack[-5]
0x224: Call2 0x816

0x225: Pop(1)
0x226: @ SendMessage(Stack[-2], Stack[-1])
0x227: Pop(2)
0x228: Push((int) 1)
0x229: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x22a: GOTO 0x218

0x22b: Push((int) 274)
0x22c: Pop(1); Push((bool) Stack[-10] == Stack[-1])
0x22d: IF (Stack[-1] == 0) GOTO 0x257; Pop(1)

0x22e: Push("cancel_button")
0x22f: Pop(1); Push((bool) Stack[22 + Tasks[-1].StackPointer] == Stack[-1])
0x230: IF (Stack[-1] == 0) GOTO 0x23a; Pop(1)

0x231: Push((int) -4)
0x232: PushEmpty(string, int)
0x233: Stack[-1] = (int) 1
0x234: Call2 0x826

0x235: Pop(1)
0x236: @ SendMessage(Stack[-2], Stack[-1])
0x237: Pop(2)
0x238: Stack[22 + Tasks[-1].StackPointer] = ""
0x239: GOTO 0x257

0x23a: Push("ok_button")
0x23b: Pop(1); Push((bool) Stack[22 + Tasks[-1].StackPointer] == Stack[-1])
0x23c: IF (Stack[-1] == 0) GOTO 0x243; Pop(1)

0x23d: Push((int) -4)
0x23e: Push("cancel_button")
0x23f: @ SendMessage(Stack[-2], Stack[-1])
0x240: Pop(2)
0x241: Stack[22 + Tasks[-1].StackPointer] = "cancel_button"
0x242: GOTO 0x257

0x243: Stack[-1] = (int) 0
0x244: Pop(0); Push((bool) Stack[-1] < Stack[0 + Tasks[-1].StackPointer])
0x245: IF (Stack[-1] == 0) GOTO 0x257; Pop(1)

0x246: Push((int) -16)
0x247: PushEmpty(string, int)
0x248: Stack[-1] = Stack[-4]
0x249: Call2 0x826

0x24a: Pop(1)
0x24b: @ SendMessage(Stack[-2], Stack[-1])
0x24c: Pop(2)
0x24d: Push((int) -16)
0x24e: PushEmpty(string, int)
0x24f: Stack[-1] = Stack[-4]
0x250: Call2 0x816

0x251: Pop(1)
0x252: @ SendMessage(Stack[-2], Stack[-1])
0x253: Pop(2)
0x254: Push((int) 1)
0x255: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x256: GOTO 0x244

0x257: Return(); Pop(8)

0x258: PushEmpty()
0x259: @ DestroyWindow()
0x25a: Pop(0)
0x25b: Return(); Pop(0)

0x25c: PushEmpty(int, int)
0x25d: Push((int) -20)
0x25e: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x25f: IF (Stack[-1] == 0) GOTO 0x265; Pop(1)

0x260: Stack[22 + Tasks[-1].StackPointer] = ""
0x261: Push("iSlotResetButtons")
0x262: @ Trace(Stack[-1])
0x263: Pop(1)
0x264: Return(); Pop(2)

0x265: Push((int) -4)
0x266: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x267: IF (Stack[-1] == 0) GOTO 0x2cd; Pop(1)

0x268: PushEmpty(bool)
0x269: Stack[-1] = (bool) 1
0x26a: PushEmpty(string, int)
0x26b: Stack[-1] = (int) 0
0x26c: Call2 0x826

0x26d: Pop(1)
0x26e: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x26f: IF (Stack[-1] == 0) GOTO 0x277; Pop(1)

0x270: PushEmpty(string, int)
0x271: Stack[-1] = (int) 1
0x272: Call2 0x826

0x273: Pop(1)
0x274: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x275: IF (Stack[-1] == 0) GOTO 0x277; Pop(1)

0x276: Stack[-1] = (bool) 0
0x277: IF (Stack[-1] == 0) GOTO 0x286; Pop(1)

0x278: Push((int) 2)
0x279: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] < Stack[-1])
0x27a: IF (Stack[-1] == 0) GOTO 0x281; Pop(1)

0x27b: Stack[22 + Tasks[-1].StackPointer] = "cancel_button"
0x27c: Push((int) -4)
0x27d: @ SendMessage(Stack[-1], Stack[-22])
0x27e: Pop(1)
0x27f: Return(); Pop(2)

0x280: GOTO 0x286

0x281: Push((int) 2)
0x282: Stack[2 + Tasks[-1].StackPointer] = Stack[2 + Tasks[-1].StackPointer] - Stack[-1]; Pop(1);
0x283: PushEmpty()
0x284: Call2 0x534

0x285: Pop(0)
0x286: PushEmpty(bool)
0x287: Stack[-1] = (bool) 1
0x288: PushEmpty(string, int)
0x289: Push((int) 1)
0x28a: Stack[-2] = Stack[0 + Tasks[-1].StackPointer] - Stack[-1]; Pop(1);
0x28b: Call2 0x826

0x28c: Pop(1)
0x28d: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x28e: IF (Stack[-1] == 0) GOTO 0x297; Pop(1)

0x28f: PushEmpty(string, int)
0x290: Push((int) 2)
0x291: Stack[-2] = Stack[0 + Tasks[-1].StackPointer] - Stack[-1]; Pop(1);
0x292: Call2 0x826

0x293: Pop(1)
0x294: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x295: IF (Stack[-1] == 0) GOTO 0x297; Pop(1)

0x296: Stack[-1] = (bool) 0
0x297: IF (Stack[-1] == 0) GOTO 0x29d; Pop(1)

0x298: Push((int) 2)
0x299: Stack[2 + Tasks[-1].StackPointer] = Stack[2 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x29a: PushEmpty()
0x29b: Call2 0x534

0x29c: Pop(0)
0x29d: PushEmpty(bool)
0x29e: Stack[-1] = (bool) 1
0x29f: PushEmpty(string, int)
0x2a0: Stack[-1] = (int) 0
0x2a1: Call2 0x816

0x2a2: Pop(1)
0x2a3: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x2a4: IF (Stack[-1] == 0) GOTO 0x2ac; Pop(1)

0x2a5: PushEmpty(string, int)
0x2a6: Stack[-1] = (int) 1
0x2a7: Call2 0x816

0x2a8: Pop(1)
0x2a9: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x2aa: IF (Stack[-1] == 0) GOTO 0x2ac; Pop(1)

0x2ab: Stack[-1] = (bool) 0
0x2ac: IF (Stack[-1] == 0) GOTO 0x2b2; Pop(1)

0x2ad: Push((int) 2)
0x2ae: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] - Stack[-1]; Pop(1);
0x2af: PushEmpty()
0x2b0: Call2 0x4dd

0x2b1: Pop(0)
0x2b2: PushEmpty(bool)
0x2b3: Stack[-1] = (bool) 1
0x2b4: PushEmpty(string, int)
0x2b5: Push((int) 1)
0x2b6: Stack[-2] = Stack[0 + Tasks[-1].StackPointer] - Stack[-1]; Pop(1);
0x2b7: Call2 0x816

0x2b8: Pop(1)
0x2b9: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x2ba: IF (Stack[-1] == 0) GOTO 0x2c3; Pop(1)

0x2bb: PushEmpty(string, int)
0x2bc: Push((int) 2)
0x2bd: Stack[-2] = Stack[0 + Tasks[-1].StackPointer] - Stack[-1]; Pop(1);
0x2be: Call2 0x816

0x2bf: Pop(1)
0x2c0: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x2c1: IF (Stack[-1] == 0) GOTO 0x2c3; Pop(1)

0x2c2: Stack[-1] = (bool) 0
0x2c3: IF (Stack[-1] == 0) GOTO 0x2c9; Pop(1)

0x2c4: Push((int) 2)
0x2c5: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x2c6: PushEmpty()
0x2c7: Call2 0x4dd

0x2c8: Pop(0)
0x2c9: Push((int) -4)
0x2ca: @ SendMessage(Stack[-1], Stack[-5])
0x2cb: Pop(1)
0x2cc: Return(); Pop(2)

0x2cd: PushEmpty(int, int, string)
0x2ce: Stack[-2] = Stack[-8]
0x2cf: Stack[-1] = Stack[-7]
0x2d0: Call2 0x8fb

0x2d1: Stack[-4] = Stack[-3]
0x2d2: Pop(3)
0x2d3: Push((int) -1)
0x2d4: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x2d5: IF (Stack[-1] == 0) GOTO 0x2e3; Pop(1)

0x2d6: Push((int) 0)
0x2d7: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x2d8: IF (Stack[-1] == 0) GOTO 0x2de; Pop(1)

0x2d9: PushEmpty(int)
0x2da: Stack[-1] = Stack[-2]
0x2db: Call2 0x6d5

0x2dc: Pop(1)
0x2dd: GOTO 0x2e2

0x2de: PushEmpty(int)
0x2df: Stack[-1] = Stack[-2]
0x2e0: Call2 0x717

0x2e1: Pop(1)
0x2e2: Return(); Pop(2)

0x2e3: PushEmpty(int, int, string)
0x2e4: Stack[-2] = Stack[-8]
0x2e5: Stack[-1] = Stack[-7]
0x2e6: Call2 0x910

0x2e7: Stack[-4] = Stack[-3]
0x2e8: Pop(3)
0x2e9: Push((int) -1)
0x2ea: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x2eb: IF (Stack[-1] == 0) GOTO 0x2f9; Pop(1)

0x2ec: Push((int) 0)
0x2ed: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x2ee: IF (Stack[-1] == 0) GOTO 0x2f4; Pop(1)

0x2ef: PushEmpty(int)
0x2f0: Stack[-1] = Stack[-2]
0x2f1: Call2 0x757

0x2f2: Pop(1)
0x2f3: GOTO 0x2f8

0x2f4: PushEmpty(int)
0x2f5: Stack[-1] = Stack[-2]
0x2f6: Call2 0x79d

0x2f7: Pop(1)
0x2f8: Return(); Pop(2)

0x2f9: Push("cancel_button")
0x2fa: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x2fb: IF (Stack[-1] == 0) GOTO 0x300; Pop(1)

0x2fc: PushEmpty()
0x2fd: Call2 0x368

0x2fe: Pop(0)
0x2ff: Return(); Pop(2)

0x300: Push("background_left")
0x301: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x302: IF (Stack[-1] == 0) GOTO 0x30d; Pop(1)

0x303: Push("background_left")
0x304: Pop(1); Push(Stack[-1] + Stack[-6]);
0x305: @ Trace(Stack[-1])
0x306: Pop(1)
0x307: Push((int) 2)
0x308: Pop(1); Push(Stack[-1] * Stack[-6]);
0x309: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] - Stack[-1]; Pop(1);
0x30a: PushEmpty()
0x30b: Call2 0x4dd

0x30c: Pop(0)
0x30d: Push("background_right")
0x30e: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x30f: IF (Stack[-1] == 0) GOTO 0x31a; Pop(1)

0x310: Push("background_right")
0x311: Pop(1); Push(Stack[-1] + Stack[-6]);
0x312: @ Trace(Stack[-1])
0x313: Pop(1)
0x314: Push((int) 2)
0x315: Pop(1); Push(Stack[-1] * Stack[-6]);
0x316: Stack[2 + Tasks[-1].StackPointer] = Stack[2 + Tasks[-1].StackPointer] - Stack[-1]; Pop(1);
0x317: PushEmpty()
0x318: Call2 0x534

0x319: Pop(0)
0x31a: Push("l_scroll_button_top")
0x31b: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x31c: IF (Stack[-1] == 0) GOTO 0x323; Pop(1)

0x31d: Push((int) 2)
0x31e: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] - Stack[-1]; Pop(1);
0x31f: PushEmpty()
0x320: Call2 0x4dd

0x321: Pop(0)
0x322: Return(); Pop(2)

0x323: Push("l_scroll_button_bottom")
0x324: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x325: IF (Stack[-1] == 0) GOTO 0x32c; Pop(1)

0x326: Push((int) 2)
0x327: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x328: PushEmpty()
0x329: Call2 0x4dd

0x32a: Pop(0)
0x32b: Return(); Pop(2)

0x32c: Push("r_scroll_button_top")
0x32d: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x32e: IF (Stack[-1] == 0) GOTO 0x335; Pop(1)

0x32f: Push((int) 2)
0x330: Stack[2 + Tasks[-1].StackPointer] = Stack[2 + Tasks[-1].StackPointer] - Stack[-1]; Pop(1);
0x331: PushEmpty()
0x332: Call2 0x534

0x333: Pop(0)
0x334: Return(); Pop(2)

0x335: Push("r_scroll_button_bottom")
0x336: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x337: IF (Stack[-1] == 0) GOTO 0x33e; Pop(1)

0x338: Push((int) 2)
0x339: Stack[2 + Tasks[-1].StackPointer] = Stack[2 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x33a: PushEmpty()
0x33b: Call2 0x534

0x33c: Pop(0)
0x33d: Return(); Pop(2)

0x33e: Push("l_scrollbar")
0x33f: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x340: IF (Stack[-1] == 0) GOTO 0x34f; Pop(1)

0x341: PushEmpty(int)
0x342: Call2 0x4b7

0x343: Pop(0)
0x344: Pop(1); Push(Stack[-1] * Stack[-6]);
0x345: Push((float)100.0)
0x346: Pop(2); Push(Stack[-2] / Stack[-1]);
0x347: Push((float)0.5)
0x348: Stack[1 + Tasks[-1].StackPointer] = Stack[-2] + Stack[-1]; Pop(2);
0x349: Push((int) 2)
0x34a: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] * Stack[-1]; Pop(1);
0x34b: PushEmpty()
0x34c: Call2 0x4dd

0x34d: Pop(0)
0x34e: Return(); Pop(2)

0x34f: Push("r_scrollbar")
0x350: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x351: IF (Stack[-1] == 0) GOTO 0x360; Pop(1)

0x352: PushEmpty(int)
0x353: Call2 0x4ca

0x354: Pop(0)
0x355: Pop(1); Push(Stack[-1] * Stack[-6]);
0x356: Push((float)100.0)
0x357: Pop(2); Push(Stack[-2] / Stack[-1]);
0x358: Push((float)0.5)
0x359: Stack[2 + Tasks[-1].StackPointer] = Stack[-2] + Stack[-1]; Pop(2);
0x35a: Push((int) 2)
0x35b: Stack[2 + Tasks[-1].StackPointer] = Stack[2 + Tasks[-1].StackPointer] * Stack[-1]; Pop(1);
0x35c: PushEmpty()
0x35d: Call2 0x534

0x35e: Pop(0)
0x35f: Return(); Pop(2)

0x360: Push("ok_button")
0x361: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x362: IF (Stack[-1] == 0) GOTO 0x367; Pop(1)

0x363: PushEmpty()
0x364: Call2 0x59c

0x365: Pop(0)
0x366: Return(); Pop(2)

0x367: Return(); Pop(2)

0x368: PushEmpty(int, int)
0x369: Stack[1 + Tasks[-1].StackPointer] = (int)0
0x36a: Stack[2 + Tasks[-1].StackPointer] = (int)0
0x36b: Stack[4 + Tasks[-1].StackPointer] = (int)0
0x36c: Push((int) 0)
0x36d: Pop(1); Push((bool) Stack[28 + Tasks[-1].StackPointer] == Stack[-1])
0x36e: IF (Stack[-1] == 0) GOTO 0x372; Pop(1)

0x36f: @ GetPlayerMoneyCount(Stack[-3])
0x370: Pop(0)
0x371: GOTO 0x373

0x372: Stack[3 + Tasks[-1].StackPointer] = (int)0
0x373: @@ clear()
0x374: Pop(0)
0x375: @@ clear()
0x376: Pop(0)
0x377: @@ clear()
0x378: Pop(0)
0x379: @@ clear()
0x37a: Pop(0)
0x37b: @@ clear()
0x37c: Pop(0)
0x37d: @@ clear()
0x37e: Pop(0)
0x37f: @@ clear()
0x380: Pop(0)
0x381: @@ clear()
0x382: Pop(0)
0x383: @@ clear()
0x384: Pop(0)
0x385: @@ clear()
0x386: Pop(0)
0x387: @@ clear()
0x388: Pop(0)
0x389: @@ clear()
0x38a: Pop(0)
0x38b: @@ clear()
0x38c: Pop(0)
0x38d: @@ clear()
0x38e: Pop(0)
0x38f: @@ clear()
0x390: Pop(0)
0x391: @@ clear()
0x392: Pop(0)
0x393: @@ clear()
0x394: Pop(0)
0x395: @@ clear()
0x396: Pop(0)
0x397: @@ clear()
0x398: Pop(0)
0x399: PushEmpty()
0x39a: Call2 0x45b

0x39b: Pop(0)
0x39c: PushEmpty()
0x39d: Call2 0x3c9

0x39e: Pop(0)
0x39f: PushEmpty()
0x3a0: Call2 0x47a

0x3a1: Pop(0)
0x3a2: PushEmpty()
0x3a3: Call2 0x4dd

0x3a4: Pop(0)
0x3a5: PushEmpty()
0x3a6: Call2 0x598

0x3a7: Pop(0)
0x3a8: PushEmpty()
0x3a9: Call2 0x534

0x3aa: Pop(0)
0x3ab: PushEmpty()
0x3ac: Call2 0x594

0x3ad: Pop(0)
0x3ae: @@ size(Stack[-1])
0x3af: Pop(0)
0x3b0: Pop(0); Push((bool) Stack[-1] <= Stack[0 + Tasks[-1].StackPointer])
0x3b1: IF (Stack[-1] == 0) GOTO 0x3b7; Pop(1)

0x3b2: Push((int) 16384)
0x3b3: Push("l_scrollbar")
0x3b4: @ SendMessage(Stack[-2], Stack[-1])
0x3b5: Pop(2)
0x3b6: GOTO 0x3bb

0x3b7: Push((int) 0)
0x3b8: Push("l_scrollbar")
0x3b9: @ SendMessage(Stack[-2], Stack[-1])
0x3ba: Pop(2)
0x3bb: @@ size(Stack[-1])
0x3bc: Pop(0)
0x3bd: Pop(0); Push((bool) Stack[-1] <= Stack[0 + Tasks[-1].StackPointer])
0x3be: IF (Stack[-1] == 0) GOTO 0x3c4; Pop(1)

0x3bf: Push((int) 16384)
0x3c0: Push("r_scrollbar")
0x3c1: @ SendMessage(Stack[-2], Stack[-1])
0x3c2: Pop(2)
0x3c3: GOTO 0x3c8

0x3c4: Push((int) 0)
0x3c5: Push("r_scrollbar")
0x3c6: @ SendMessage(Stack[-2], Stack[-1])
0x3c7: Pop(2)
0x3c8: Return(); Pop(2)

0x3c9: PushEmpty(int, bool)
0x3ca: Stack[-2] = (int) 0
0x3cb: Stack[-1] = (bool) 0
0x3cc: Call2 0x3fc

0x3cd: Pop(2)
0x3ce: PushEmpty(int, bool)
0x3cf: Stack[-2] = (int) 1
0x3d0: Stack[-1] = (bool) 0
0x3d1: Call2 0x3fc

0x3d2: Pop(2)
0x3d3: PushEmpty(int, bool)
0x3d4: Stack[-2] = (int) 2
0x3d5: Stack[-1] = (bool) 0
0x3d6: Call2 0x3fc

0x3d7: Pop(2)
0x3d8: PushEmpty(int, bool)
0x3d9: Stack[-2] = (int) 3
0x3da: Stack[-1] = (bool) 0
0x3db: Call2 0x3fc

0x3dc: Pop(2)
0x3dd: PushEmpty(int, bool)
0x3de: Stack[-2] = (int) 4
0x3df: Stack[-1] = (bool) 0
0x3e0: Call2 0x3fc

0x3e1: Pop(2)
0x3e2: PushEmpty(int, bool)
0x3e3: Stack[-2] = (int) 0
0x3e4: Stack[-1] = (bool) 1
0x3e5: Call2 0x3fc

0x3e6: Pop(2)
0x3e7: PushEmpty(int, bool)
0x3e8: Stack[-2] = (int) 1
0x3e9: Stack[-1] = (bool) 1
0x3ea: Call2 0x3fc

0x3eb: Pop(2)
0x3ec: PushEmpty(int, bool)
0x3ed: Stack[-2] = (int) 2
0x3ee: Stack[-1] = (bool) 1
0x3ef: Call2 0x3fc

0x3f0: Pop(2)
0x3f1: PushEmpty(int, bool)
0x3f2: Stack[-2] = (int) 3
0x3f3: Stack[-1] = (bool) 1
0x3f4: Call2 0x3fc

0x3f5: Pop(2)
0x3f6: PushEmpty(int, bool)
0x3f7: Stack[-2] = (int) 4
0x3f8: Stack[-1] = (bool) 1
0x3f9: Call2 0x3fc

0x3fa: Pop(2)
0x3fb: Return(); Pop(0)

0x3fc: PushEmpty(object, int, int, int, bool, object, int, int, int, bool)
0x3fd: PushEmpty(int, int)
0x3fe: Stack[-1] = Stack[-14]
0x3ff: Call2 0x9d8

0x400: Stack[-6] = Stack[-2]
0x401: Pop(2)
0x402: Stack[-2] = (int) 0
0x403: Pop(0); Push((bool) Stack[-2] < Stack[-4])
0x404: IF (Stack[-1] == 0) GOTO 0x459; Pop(1)

0x405: PushEmpty(bool, int, int)
0x406: Stack[-2] = Stack[-15]
0x407: Stack[-1] = Stack[-5]
0x408: Call2 0x9f1

0x409: Stack[-4] = Stack[-3]
0x40a: Pop(3)
0x40b: PushEmpty(bool)
0x40c: Stack[-1] = (bool) 0
0x40d: Pop(0); Push((bool) Stack[-12] == 0)
0x40e: IF (Stack[-1] == 0) GOTO 0x412; Pop(1)

0x40f: Push(Stack[-2])
0x410: IF (Stack[-1] == 0) GOTO 0x412; Pop(1)

0x411: Stack[-1] = (bool) 1
0x412: IF (Stack[-1] == 0) GOTO 0x414; Pop(1)

0x413: GOTO 0x456

0x414: PushEmpty(int, int, int)
0x415: Stack[-2] = Stack[-15]
0x416: Stack[-1] = Stack[-5]
0x417: Call2 0x9e9

0x418: Stack[-6] = Stack[-3]
0x419: Pop(3)
0x41a: PushEmpty(object, int, int)
0x41b: Stack[-2] = Stack[-15]
0x41c: Stack[-1] = Stack[-5]
0x41d: Call2 0x9e0

0x41e: Stack[-8] = Stack[-3]
0x41f: Pop(3)
0x420: PushEmpty(bool)
0x421: Stack[-1] = (bool) 0
0x422: Push(Stack[-12])
0x423: IF (Stack[-1] == 0) GOTO 0x432; Pop(1)

0x424: PushEmpty(bool)
0x425: Stack[-1] = (bool) 1
0x426: PushEmpty(bool, object, int, bool)
0x427: Stack[-3] = Stack[-11]
0x428: Stack[-2] = Stack[28 + Tasks[-1].StackPointer]
0x429: Stack[-1] = (bool) 1
0x42a: Call2 0x0

0x42b: Pop(3)
0x42c: IF (Stack[-1] == 0) GOTO 0x430; Pop(1)

0x42d: Push(Stack[-3])
0x42e: IF (Stack[-1] == 0) GOTO 0x430; Pop(1)

0x42f: Stack[-1] = (bool) 0
0x430: IF (Stack[-1] == 0) GOTO 0x432; Pop(1)

0x431: Stack[-1] = (bool) 1
0x432: IF (Stack[-1] == 0) GOTO 0x43e; Pop(1)

0x433: @@ add(Stack[-5])
0x434: Pop(0)
0x435: @@ add(Stack[-3])
0x436: Pop(0)
0x437: Push((int) 0)
0x438: @@ add(Stack[-1])
0x439: Pop(1)
0x43a: Push((int) 1)
0x43b: @@ add(Stack[-1])
0x43c: Pop(1)
0x43d: GOTO 0x456

0x43e: PushEmpty(bool)
0x43f: Stack[-1] = (bool) 0
0x440: Pop(0); Push((bool) Stack[-12] == 0)
0x441: IF (Stack[-1] == 0) GOTO 0x44b; Pop(1)

0x442: PushEmpty(bool, object, int, bool)
0x443: Stack[-3] = Stack[-10]
0x444: Stack[-2] = Stack[28 + Tasks[-1].StackPointer]
0x445: Stack[-1] = (bool) 1
0x446: Call2 0x0

0x447: Pop(3)
0x448: Pop(1); Push((bool) Stack[-1] == 0)
0x449: IF (Stack[-1] == 0) GOTO 0x44b; Pop(1)

0x44a: Stack[-1] = (bool) 1
0x44b: IF (Stack[-1] == 0) GOTO 0x456; Pop(1)

0x44c: @@ add(Stack[-5])
0x44d: Pop(0)
0x44e: @@ add(Stack[-3])
0x44f: Pop(0)
0x450: Push((int) 0)
0x451: @@ add(Stack[-1])
0x452: Pop(1)
0x453: Push((int) 0)
0x454: @@ add(Stack[-1])
0x455: Pop(1)
0x456: Push((int) 1)
0x457: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x458: GOTO 0x403

0x459: Return(); Pop(10)

0x45a: Stack[-5] = 0
0x45b: PushEmpty(int, int, object, object, int, int, int, object, object, int)
0x45c: PushEmpty(int)
0x45d: Call2 0x9d0

0x45e: Stack[-6] = Stack[-1]
0x45f: Pop(1)
0x460: Stack[-1] = (int) 0
0x461: Pop(0); Push((bool) Stack[-1] < Stack[-5])
0x462: IF (Stack[-1] == 0) GOTO 0x477; Pop(1)

0x463: PushEmpty(int, int)
0x464: Stack[-1] = Stack[-3]
0x465: Call2 0xa02

0x466: Stack[-6] = Stack[-2]
0x467: Pop(2)
0x468: PushEmpty(object, int)
0x469: Stack[-1] = Stack[-3]
0x46a: Call2 0x9f9

0x46b: Stack[-4] = Stack[-2]
0x46c: Pop(2)
0x46d: @@ add(Stack[-2])
0x46e: Pop(0)
0x46f: @@ add(Stack[-4])
0x470: Pop(0)
0x471: Push((int) 0)
0x472: @@ add(Stack[-1])
0x473: Pop(1)
0x474: Push((int) 1)
0x475: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x476: GOTO 0x461

0x477: Return(); Pop(10)

0x478: Stack[-2] = 0
0x479: Stack[-3] = 0
0x47a: PushEmpty(int, object, object)
0x47b: Stack[-3] = (int) 0
0x47c: Stack[-2] = Stack[12 + Tasks[-1].StackPointer]
0x47d: Stack[-1] = Stack[13 + Tasks[-1].StackPointer]
0x47e: Call2 0x499

0x47f: Pop(3)
0x480: PushEmpty(int, object, object)
0x481: Stack[-3] = (int) 1
0x482: Stack[-2] = Stack[14 + Tasks[-1].StackPointer]
0x483: Stack[-1] = Stack[15 + Tasks[-1].StackPointer]
0x484: Call2 0x499

0x485: Pop(3)
0x486: PushEmpty(int, object, object)
0x487: Stack[-3] = (int) 2
0x488: Stack[-2] = Stack[16 + Tasks[-1].StackPointer]
0x489: Stack[-1] = Stack[17 + Tasks[-1].StackPointer]
0x48a: Call2 0x499

0x48b: Pop(3)
0x48c: PushEmpty(int, object, object)
0x48d: Stack[-3] = (int) 3
0x48e: Stack[-2] = Stack[18 + Tasks[-1].StackPointer]
0x48f: Stack[-1] = Stack[19 + Tasks[-1].StackPointer]
0x490: Call2 0x499

0x491: Pop(3)
0x492: PushEmpty(int, object, object)
0x493: Stack[-3] = (int) 4
0x494: Stack[-2] = Stack[20 + Tasks[-1].StackPointer]
0x495: Stack[-1] = Stack[21 + Tasks[-1].StackPointer]
0x496: Call2 0x499

0x497: Pop(3)
0x498: Return(); Pop(0)

0x499: PushEmpty(object, int, int, int, object, int, int, int)
0x49a: PushEmpty(int, int)
0x49b: Stack[-1] = Stack[-13]
0x49c: Call2 0x9d8

0x49d: Stack[-5] = Stack[-2]
0x49e: Pop(2)
0x49f: Stack[-1] = (int) 0
0x4a0: Pop(0); Push((bool) Stack[-1] < Stack[-3])
0x4a1: IF (Stack[-1] == 0) GOTO 0x4b5; Pop(1)

0x4a2: PushEmpty(int, int, int)
0x4a3: Stack[-2] = Stack[-14]
0x4a4: Stack[-1] = Stack[-4]
0x4a5: Call2 0x9e9

0x4a6: Stack[-5] = Stack[-3]
0x4a7: Pop(3)
0x4a8: PushEmpty(object, int, int)
0x4a9: Stack[-2] = Stack[-14]
0x4aa: Stack[-1] = Stack[-4]
0x4ab: Call2 0x9e0

0x4ac: Stack[-7] = Stack[-3]
0x4ad: Pop(3)
0x4ae: @@ add(Stack[-4])
0x4af: Pop(0)
0x4b0: @@ add(Stack[-2])
0x4b1: Pop(0)
0x4b2: Push((int) 1)
0x4b3: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x4b4: GOTO 0x4a0

0x4b5: Return(); Pop(8)

0x4b6: Stack[-4] = 0
0x4b7: PushEmpty(int, int, int, int)
0x4b8: @@ size(Stack[-2])
0x4b9: Pop(0)
0x4ba: Push((int) 2)
0x4bb: Pop(1); Push(Stack[-3] + Stack[-1]);
0x4bc: Push((int) 1)
0x4bd: Pop(2); Push(Stack[-2] - Stack[-1]);
0x4be: Push((int) 2)
0x4bf: Pop(2); Push(Stack[-2] / Stack[-1]);
0x4c0: Push((int) 2)
0x4c1: Pop(1); Push(Stack[0 + StackPtr] / Stack[-1]);
0x4c2: Stack[-3] = Stack[-2] - Stack[-1]; Pop(2);
0x4c3: Push((int) 0)
0x4c4: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x4c5: IF (Stack[-1] == 0) GOTO 0x4c8; Pop(1)

0x4c6: Stack[-5] = (int) 0
0x4c7: Return(); Pop(4)

0x4c8: Stack[-5] = Stack[-1]
0x4c9: Return(); Pop(4)

0x4ca: PushEmpty(int, int, int, int)
0x4cb: @@ size(Stack[-2])
0x4cc: Pop(0)
0x4cd: Push((int) 2)
0x4ce: Pop(1); Push(Stack[-3] + Stack[-1]);
0x4cf: Push((int) 1)
0x4d0: Pop(2); Push(Stack[-2] - Stack[-1]);
0x4d1: Push((int) 2)
0x4d2: Pop(2); Push(Stack[-2] / Stack[-1]);
0x4d3: Push((int) 2)
0x4d4: Pop(1); Push(Stack[0 + StackPtr] / Stack[-1]);
0x4d5: Stack[-3] = Stack[-2] - Stack[-1]; Pop(2);
0x4d6: Push((int) 0)
0x4d7: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x4d8: IF (Stack[-1] == 0) GOTO 0x4db; Pop(1)

0x4d9: Stack[-5] = (int) 0
0x4da: Return(); Pop(4)

0x4db: Stack[-5] = Stack[-1]
0x4dc: Return(); Pop(4)

0x4dd: PushEmpty(int, int, int, object, int, int, object, int, int, int, object, int, int, object)
0x4de: @@ size(Stack[-7])
0x4df: Pop(0)
0x4e0: Pop(0); Push(Stack[1 + StackPtr] + Stack[0 + StackPtr]);
0x4e1: Pop(1); Push((bool) Stack[-1] > Stack[-8])
0x4e2: IF (Stack[-1] == 0) GOTO 0x4f1; Pop(1)

0x4e3: Push((int) 2)
0x4e4: Pop(1); Push(Stack[-8] % Stack[-1]);
0x4e5: Push((int) 0)
0x4e6: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x4e7: IF (Stack[-1] == 0) GOTO 0x4ec; Pop(1)

0x4e8: Pop(0); Push(Stack[1 + StackPtr] + Stack[0 + StackPtr]);
0x4e9: Pop(1); Push(Stack[-1] - Stack[-8]);
0x4ea: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] - Stack[-1]; Pop(1);
0x4eb: GOTO 0x4f1

0x4ec: Pop(0); Push(Stack[1 + StackPtr] + Stack[0 + StackPtr]);
0x4ed: Pop(1); Push(Stack[-1] - Stack[-8]);
0x4ee: Push((int) 1)
0x4ef: Pop(2); Push(Stack[-2] - Stack[-1]);
0x4f0: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] - Stack[-1]; Pop(1);
0x4f1: Push((int) 0)
0x4f2: Pop(1); Push((bool) Stack[1 + Tasks[-1].StackPointer] < Stack[-1])
0x4f3: IF (Stack[-1] == 0) GOTO 0x4f5; Pop(1)

0x4f4: Stack[1 + Tasks[-1].StackPointer] = (int)0
0x4f5: Stack[-5] = Stack[1 + Tasks[-1].StackPointer]
0x4f6: Pop(0); Push(Stack[1 + StackPtr] + Stack[0 + StackPtr]);
0x4f7: Pop(1); Push((bool) Stack[-6] < Stack[-1])
0x4f8: IF (Stack[-1] == 0) GOTO 0x533; Pop(1)

0x4f9: Pop(0); Push((bool) Stack[-5] < Stack[-7])
0x4fa: IF (Stack[-1] == 0) GOTO 0x529; Pop(1)

0x4fb: @@ get(Stack[-4], Stack[-5])
0x4fc: Pop(0)
0x4fd: @@ get(Stack[-3], Stack[-5])
0x4fe: Pop(0)
0x4ff: Stack[-6] = (int) 0
0x500: PushEmpty(int, int)
0x501: Stack[-1] = Stack[-7] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x502: Call2 0x7f3

0x503: Stack[-4] = Stack[-2]
0x504: Pop(2)
0x505: Push((int) 0)
0x506: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x507: IF (Stack[-1] == 0) GOTO 0x50a; Pop(1)

0x508: Push((int) 16384)
0x509: Stack[-7] = Stack[-7] | Stack[-1]; Pop(1);
0x50a: PushEmpty(bool, object, int, bool)
0x50b: Stack[-3] = Stack[-8]
0x50c: Stack[-2] = Stack[28 + Tasks[-1].StackPointer]
0x50d: Stack[-1] = (bool) 0
0x50e: Call2 0x0

0x50f: Pop(3)
0x510: IF (Stack[-1] == 0) GOTO 0x513; Pop(1)

0x511: Push((int) 131072)
0x512: Stack[-7] = Stack[-7] | Stack[-1]; Pop(1);
0x513: @ CreateIntVector(Stack[-1])
0x514: Pop(0)
0x515: @@ add(Stack[-2])
0x516: Pop(0)
0x517: @@ add(Stack[-3])
0x518: Pop(0)
0x519: Push((int) 65536)
0x51a: PushEmpty(string, int)
0x51b: Stack[-1] = Stack[-8] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x51c: Call2 0x816

0x51d: Pop(1)
0x51e: @ SendMessage(Stack[-2], Stack[-1], Stack[-3])
0x51f: Pop(2)
0x520: PushEmpty(string, int)
0x521: Stack[-1] = Stack[-7] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x522: Call2 0x816

0x523: Pop(1)
0x524: @ SendMessage(Stack[-7], Stack[-1], Stack[-5])
0x525: Pop(1)
0x526: Stack[-1] = 0
0x527: Stack[-4] = 0
0x528: GOTO 0x530

0x529: Push((int) 32768)
0x52a: PushEmpty(string, int)
0x52b: Stack[-1] = Stack[-8] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x52c: Call2 0x816

0x52d: Pop(1)
0x52e: @ SendMessage(Stack[-2], Stack[-1])
0x52f: Pop(2)
0x530: Push((int) 1)
0x531: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x532: GOTO 0x4f6

0x533: Return(); Pop(14)

0x534: PushEmpty(int, object, int, int, int, int, int, object, int, object, int, int, int, int, int, object)
0x535: @@ size(Stack[-8])
0x536: Pop(0)
0x537: Pop(0); Push(Stack[2 + StackPtr] + Stack[0 + StackPtr]);
0x538: Pop(1); Push((bool) Stack[-1] > Stack[-9])
0x539: IF (Stack[-1] == 0) GOTO 0x548; Pop(1)

0x53a: Push((int) 2)
0x53b: Pop(1); Push(Stack[-9] % Stack[-1]);
0x53c: Push((int) 0)
0x53d: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x53e: IF (Stack[-1] == 0) GOTO 0x543; Pop(1)

0x53f: Pop(0); Push(Stack[2 + StackPtr] + Stack[0 + StackPtr]);
0x540: Pop(1); Push(Stack[-1] - Stack[-9]);
0x541: Stack[2 + Tasks[-1].StackPointer] = Stack[2 + Tasks[-1].StackPointer] - Stack[-1]; Pop(1);
0x542: GOTO 0x548

0x543: Pop(0); Push(Stack[2 + StackPtr] + Stack[0 + StackPtr]);
0x544: Pop(1); Push(Stack[-1] - Stack[-9]);
0x545: Push((int) 1)
0x546: Pop(2); Push(Stack[-2] - Stack[-1]);
0x547: Stack[2 + Tasks[-1].StackPointer] = Stack[2 + Tasks[-1].StackPointer] - Stack[-1]; Pop(1);
0x548: Push((int) 0)
0x549: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] < Stack[-1])
0x54a: IF (Stack[-1] == 0) GOTO 0x54c; Pop(1)

0x54b: Stack[2 + Tasks[-1].StackPointer] = (int)0
0x54c: Stack[-4] = Stack[2 + Tasks[-1].StackPointer]
0x54d: Pop(0); Push(Stack[2 + StackPtr] + Stack[0 + StackPtr]);
0x54e: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x54f: IF (Stack[-1] == 0) GOTO 0x592; Pop(1)

0x550: Pop(0); Push((bool) Stack[-4] < Stack[-8])
0x551: IF (Stack[-1] == 0) GOTO 0x588; Pop(1)

0x552: @@ get(Stack[-7], Stack[-4])
0x553: Pop(0)
0x554: @@ get(Stack[-5], Stack[-4])
0x555: Pop(0)
0x556: Stack[-6] = (int) 0
0x557: PushEmpty(int, int)
0x558: Stack[-1] = Stack[-6] - Stack[2 + Tasks[-1].StackPointer]; Pop(0);
0x559: Call2 0x800

0x55a: Stack[-5] = Stack[-2]
0x55b: Pop(2)
0x55c: Push((int) 0)
0x55d: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x55e: IF (Stack[-1] == 0) GOTO 0x561; Pop(1)

0x55f: Push((int) 16384)
0x560: Stack[-7] = Stack[-7] | Stack[-1]; Pop(1);
0x561: @@ get(Stack[-2], Stack[-4])
0x562: Pop(0)
0x563: PushEmpty(bool)
0x564: Stack[-1] = (bool) 1
0x565: PushEmpty(bool, object, int, bool)
0x566: Stack[-3] = Stack[-12]
0x567: Stack[-2] = Stack[28 + Tasks[-1].StackPointer]
0x568: Stack[-1] = (bool) 1
0x569: Call2 0x0

0x56a: Pop(3)
0x56b: IF (Stack[-1] == 0) GOTO 0x570; Pop(1)

0x56c: Push((int) 0)
0x56d: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x56e: IF (Stack[-1] == 0) GOTO 0x570; Pop(1)

0x56f: Stack[-1] = (bool) 0
0x570: IF (Stack[-1] == 0) GOTO 0x573; Pop(1)

0x571: Push((int) 131072)
0x572: Stack[-7] = Stack[-7] | Stack[-1]; Pop(1);
0x573: @ CreateIntVector(Stack[-1])
0x574: Pop(0)
0x575: @@ add(Stack[-3])
0x576: Pop(0)
0x577: @@ add(Stack[-5])
0x578: Pop(0)
0x579: Push((int) 65536)
0x57a: PushEmpty(string, int)
0x57b: Stack[-1] = Stack[-7] - Stack[2 + Tasks[-1].StackPointer]; Pop(0);
0x57c: Call2 0x826

0x57d: Pop(1)
0x57e: @ SendMessage(Stack[-2], Stack[-1], Stack[-3])
0x57f: Pop(2)
0x580: PushEmpty(string, int)
0x581: Stack[-1] = Stack[-6] - Stack[2 + Tasks[-1].StackPointer]; Pop(0);
0x582: Call2 0x826

0x583: Pop(1)
0x584: @ SendMessage(Stack[-7], Stack[-1], Stack[-8])
0x585: Pop(1)
0x586: Stack[-1] = 0
0x587: GOTO 0x58f

0x588: Push((int) 32768)
0x589: PushEmpty(string, int)
0x58a: Stack[-1] = Stack[-7] - Stack[2 + Tasks[-1].StackPointer]; Pop(0);
0x58b: Call2 0x826

0x58c: Pop(1)
0x58d: @ SendMessage(Stack[-2], Stack[-1])
0x58e: Pop(2)
0x58f: Push((int) 1)
0x590: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x591: GOTO 0x54d

0x592: Return(); Pop(16)

0x593: Stack[-7] = 0
0x594: Push("r_money_slot")
0x595: @ SendMessage(Stack[-3], Stack[-1])
0x596: Pop(1)
0x597: Return(); Pop(0)

0x598: Push("l_money_slot")
0x599: @ SendMessage(Stack[-4], Stack[-1])
0x59a: Pop(1)
0x59b: Return(); Pop(0)

0x59c: PushEmpty(int, bool, object, object, object, int, int, int, bool, object, object, object, int, int)
0x59d: @ GetContainer(Stack[-4])
0x59e: Pop(0)
0x59f: @ GetPlayerContainer(Stack[-3])
0x5a0: Pop(0)
0x5a1: @@ size(Stack[-7])
0x5a2: Pop(0)
0x5a3: Stack[-2] = (int) 0
0x5a4: Pop(0); Push((bool) Stack[-2] < Stack[-7])
0x5a5: IF (Stack[-1] == 0) GOTO 0x5c7; Pop(1)

0x5a6: @@ get(Stack[-5], Stack[-2])
0x5a7: Pop(0)
0x5a8: PushEmpty(bool, object, object, int)
0x5a9: Stack[-3] = Stack[-7]
0x5aa: Stack[-2] = Stack[-9]
0x5ab: PushEmpty(int, object)
0x5ac: Stack[-1] = Stack[-11]
0x5ad: Call2 0x9bd

0x5ae: Stack[-3] = Stack[-2]
0x5af: Pop(2)
0x5b0: Call2 0xa17

0x5b1: Stack[-10] = Stack[-4]
0x5b2: Pop(4)
0x5b3: Pop(0); Push((bool) Stack[-6] == 0)
0x5b4: IF (Stack[-1] == 0) GOTO 0x5b8; Pop(1)

0x5b5: Push("Error: failed to remove item")
0x5b6: @ Trace(Stack[-1])
0x5b7: Pop(1)
0x5b8: PushEmpty(bool, object, object, int)
0x5b9: Stack[-3] = Stack[-8]
0x5ba: Stack[-2] = Stack[-9]
0x5bb: Stack[-1] = (int) 0
0x5bc: Call2 0xa30

0x5bd: Stack[-10] = Stack[-4]
0x5be: Pop(4)
0x5bf: Pop(0); Push((bool) Stack[-6] == 0)
0x5c0: IF (Stack[-1] == 0) GOTO 0x5c4; Pop(1)

0x5c1: Push("Error: failed to add item")
0x5c2: @ Trace(Stack[-1])
0x5c3: Pop(1)
0x5c4: Push((int) 1)
0x5c5: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x5c6: GOTO 0x5a4

0x5c7: @@ size(Stack[-7])
0x5c8: Pop(0)
0x5c9: Stack[-1] = (int) 0
0x5ca: Pop(0); Push((bool) Stack[-1] < Stack[-7])
0x5cb: IF (Stack[-1] == 0) GOTO 0x5ed; Pop(1)

0x5cc: @@ get(Stack[-5], Stack[-1])
0x5cd: Pop(0)
0x5ce: PushEmpty(bool, object, object, int)
0x5cf: Stack[-3] = Stack[-8]
0x5d0: Stack[-2] = Stack[-9]
0x5d1: Stack[-1] = (int) 0
0x5d2: Call2 0xa17

0x5d3: Stack[-10] = Stack[-4]
0x5d4: Pop(4)
0x5d5: Pop(0); Push((bool) Stack[-6] == 0)
0x5d6: IF (Stack[-1] == 0) GOTO 0x5da; Pop(1)

0x5d7: Push("Error: failed to remove item")
0x5d8: @ Trace(Stack[-1])
0x5d9: Pop(1)
0x5da: PushEmpty(bool, object, object, int)
0x5db: Stack[-3] = Stack[-7]
0x5dc: Stack[-2] = Stack[-9]
0x5dd: PushEmpty(int, object)
0x5de: Stack[-1] = Stack[-11]
0x5df: Call2 0x9bd

0x5e0: Stack[-3] = Stack[-2]
0x5e1: Pop(2)
0x5e2: Call2 0xa30

0x5e3: Stack[-10] = Stack[-4]
0x5e4: Pop(4)
0x5e5: Pop(0); Push((bool) Stack[-6] == 0)
0x5e6: IF (Stack[-1] == 0) GOTO 0x5ea; Pop(1)

0x5e7: Push("Error: failed to add item")
0x5e8: @ Trace(Stack[-1])
0x5e9: Pop(1)
0x5ea: Push((int) 1)
0x5eb: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x5ec: GOTO 0x5ca

0x5ed: Push((int) 0)
0x5ee: Pop(1); Push((bool) Stack[28 + Tasks[-1].StackPointer] == Stack[-1])
0x5ef: IF (Stack[-1] == 0) GOTO 0x5f2; Pop(1)

0x5f0: @ SetPlayerMoneyCount(Stack[-3])
0x5f1: Pop(0)
0x5f2: Stack[4 + Tasks[-1].StackPointer] = (int)0
0x5f3: PushEmpty()
0x5f4: Call2 0x368

0x5f5: Pop(0)
0x5f6: Return(); Pop(14)

0x5f7: Stack[-3] = 0
0x5f8: Stack[-4] = 0
0x5f9: Stack[-5] = 0
0x5fa: PushEmpty(int, int)
0x5fb: PushEmpty(int, object)
0x5fc: Stack[-1] = Stack[-5]
0x5fd: Call2 0x9bd

0x5fe: Stack[-3] = Stack[-2]
0x5ff: Pop(2)
0x600: Push((int) 0)
0x601: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x602: IF (Stack[-1] == 0) GOTO 0x60c; Pop(1)

0x603: PushEmpty(bool, object, object, object)
0x604: Stack[-3] = Stack[-7]
0x605: Stack[-2] = Stack[12 + Tasks[-1].StackPointer]
0x606: Stack[-1] = Stack[13 + Tasks[-1].StackPointer]
0x607: Call2 0x674

0x608: Stack[-8] = Stack[-4]
0x609: Pop(4)
0x60a: Return(); Pop(2)

0x60b: GOTO 0x62f

0x60c: Push((int) 1)
0x60d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x60e: IF (Stack[-1] == 0) GOTO 0x618; Pop(1)

0x60f: PushEmpty(bool, object, object, object)
0x610: Stack[-3] = Stack[-7]
0x611: Stack[-2] = Stack[14 + Tasks[-1].StackPointer]
0x612: Stack[-1] = Stack[15 + Tasks[-1].StackPointer]
0x613: Call2 0x674

0x614: Stack[-8] = Stack[-4]
0x615: Pop(4)
0x616: Return(); Pop(2)

0x617: GOTO 0x62f

0x618: Push((int) 2)
0x619: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x61a: IF (Stack[-1] == 0) GOTO 0x624; Pop(1)

0x61b: PushEmpty(bool, object, object, object)
0x61c: Stack[-3] = Stack[-7]
0x61d: Stack[-2] = Stack[16 + Tasks[-1].StackPointer]
0x61e: Stack[-1] = Stack[17 + Tasks[-1].StackPointer]
0x61f: Call2 0x674

0x620: Stack[-8] = Stack[-4]
0x621: Pop(4)
0x622: Return(); Pop(2)

0x623: GOTO 0x62f

0x624: Push((int) 3)
0x625: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x626: IF (Stack[-1] == 0) GOTO 0x62f; Pop(1)

0x627: PushEmpty(bool, object, object, object)
0x628: Stack[-3] = Stack[-7]
0x629: Stack[-2] = Stack[18 + Tasks[-1].StackPointer]
0x62a: Stack[-1] = Stack[19 + Tasks[-1].StackPointer]
0x62b: Call2 0x674

0x62c: Stack[-8] = Stack[-4]
0x62d: Pop(4)
0x62e: Return(); Pop(2)

0x62f: PushEmpty(bool, object, object, object)
0x630: Stack[-3] = Stack[-7]
0x631: Stack[-2] = Stack[20 + Tasks[-1].StackPointer]
0x632: Stack[-1] = Stack[21 + Tasks[-1].StackPointer]
0x633: Call2 0x674

0x634: Stack[-8] = Stack[-4]
0x635: Pop(4)
0x636: Return(); Pop(2)

0x637: PushEmpty(int, int)
0x638: PushEmpty(int, object)
0x639: Stack[-1] = Stack[-5]
0x63a: Call2 0x9bd

0x63b: Stack[-3] = Stack[-2]
0x63c: Pop(2)
0x63d: Push((int) 0)
0x63e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x63f: IF (Stack[-1] == 0) GOTO 0x649; Pop(1)

0x640: PushEmpty(bool, object, object, object)
0x641: Stack[-3] = Stack[-7]
0x642: Stack[-2] = Stack[12 + Tasks[-1].StackPointer]
0x643: Stack[-1] = Stack[13 + Tasks[-1].StackPointer]
0x644: Call2 0x6a7

0x645: Stack[-8] = Stack[-4]
0x646: Pop(4)
0x647: Return(); Pop(2)

0x648: GOTO 0x66c

0x649: Push((int) 1)
0x64a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x64b: IF (Stack[-1] == 0) GOTO 0x655; Pop(1)

0x64c: PushEmpty(bool, object, object, object)
0x64d: Stack[-3] = Stack[-7]
0x64e: Stack[-2] = Stack[14 + Tasks[-1].StackPointer]
0x64f: Stack[-1] = Stack[15 + Tasks[-1].StackPointer]
0x650: Call2 0x6a7

0x651: Stack[-8] = Stack[-4]
0x652: Pop(4)
0x653: Return(); Pop(2)

0x654: GOTO 0x66c

0x655: Push((int) 2)
0x656: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x657: IF (Stack[-1] == 0) GOTO 0x661; Pop(1)

0x658: PushEmpty(bool, object, object, object)
0x659: Stack[-3] = Stack[-7]
0x65a: Stack[-2] = Stack[16 + Tasks[-1].StackPointer]
0x65b: Stack[-1] = Stack[17 + Tasks[-1].StackPointer]
0x65c: Call2 0x6a7

0x65d: Stack[-8] = Stack[-4]
0x65e: Pop(4)
0x65f: Return(); Pop(2)

0x660: GOTO 0x66c

0x661: Push((int) 3)
0x662: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x663: IF (Stack[-1] == 0) GOTO 0x66c; Pop(1)

0x664: PushEmpty(bool, object, object, object)
0x665: Stack[-3] = Stack[-7]
0x666: Stack[-2] = Stack[18 + Tasks[-1].StackPointer]
0x667: Stack[-1] = Stack[19 + Tasks[-1].StackPointer]
0x668: Call2 0x6a7

0x669: Stack[-8] = Stack[-4]
0x66a: Pop(4)
0x66b: Return(); Pop(2)

0x66c: PushEmpty(bool, object, object, object)
0x66d: Stack[-3] = Stack[-7]
0x66e: Stack[-2] = Stack[20 + Tasks[-1].StackPointer]
0x66f: Stack[-1] = Stack[21 + Tasks[-1].StackPointer]
0x670: Call2 0x6a7

0x671: Stack[-8] = Stack[-4]
0x672: Pop(4)
0x673: Return(); Pop(2)

0x674: PushEmpty(int, object, int, int, int, object, int, int)
0x675: @@ size(Stack[-4])
0x676: Pop(0)
0x677: PushEmpty(int, object)
0x678: Stack[-1] = Stack[-13]
0x679: Call2 0x9c7

0x67a: Pop(1)
0x67b: Push((int) 1)
0x67c: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x67d: IF (Stack[-1] == 0) GOTO 0x69a; Pop(1)

0x67e: Stack[-2] = (int) 0
0x67f: Pop(0); Push((bool) Stack[-2] < Stack[-4])
0x680: IF (Stack[-1] == 0) GOTO 0x69a; Pop(1)

0x681: @@ get(Stack[-3], Stack[-2])
0x682: Pop(0)
0x683: @@ get(Stack[-1], Stack[-2])
0x684: Pop(0)
0x685: PushEmpty(bool, object, object)
0x686: Stack[-2] = Stack[-14]
0x687: Stack[-1] = Stack[-6]
0x688: Call2 0xa0f

0x689: Pop(2)
0x68a: IF (Stack[-1] == 0) GOTO 0x697; Pop(1)

0x68b: PushEmpty(int, object)
0x68c: Stack[-1] = Stack[-13]
0x68d: Call2 0x9c7

0x68e: Pop(1)
0x68f: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x690: IF (Stack[-1] == 0) GOTO 0x695; Pop(1)

0x691: Push((int) 1)
0x692: Pop(1); Push(Stack[-2] + Stack[-1]);
0x693: @@ set(Stack[-3], Stack[-1])
0x694: Pop(1)
0x695: Stack[-12] = (bool) 1
0x696: Return(); Pop(8)

0x697: Push((int) 1)
0x698: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x699: GOTO 0x67f

0x69a: Push((int) 12)
0x69b: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x69c: IF (Stack[-1] == 0) GOTO 0x6a4; Pop(1)

0x69d: @@ add(Stack[-11])
0x69e: Pop(0)
0x69f: Push((int) 1)
0x6a0: @@ add(Stack[-1])
0x6a1: Pop(1)
0x6a2: Stack[-12] = (bool) 1
0x6a3: Return(); Pop(8)

0x6a4: Stack[-12] = (bool) 0
0x6a5: Return(); Pop(8)

0x6a6: Stack[-3] = 0
0x6a7: PushEmpty(int, object, int, int, int, object, int, int)
0x6a8: @@ size(Stack[-4])
0x6a9: Pop(0)
0x6aa: Stack[-2] = (int) 0
0x6ab: Pop(0); Push((bool) Stack[-2] < Stack[-4])
0x6ac: IF (Stack[-1] == 0) GOTO 0x6c8; Pop(1)

0x6ad: @@ get(Stack[-3], Stack[-2])
0x6ae: Pop(0)
0x6af: @@ get(Stack[-1], Stack[-2])
0x6b0: Pop(0)
0x6b1: PushEmpty(bool, object, object)
0x6b2: Stack[-2] = Stack[-14]
0x6b3: Stack[-1] = Stack[-6]
0x6b4: Call2 0xa0f

0x6b5: Pop(2)
0x6b6: IF (Stack[-1] == 0) GOTO 0x6c5; Pop(1)

0x6b7: Push((int) -1)
0x6b8: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x6b9: Push((int) 0)
0x6ba: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6bb: IF (Stack[-1] == 0) GOTO 0x6c1; Pop(1)

0x6bc: @@ remove(Stack[-2])
0x6bd: Pop(0)
0x6be: @@ remove(Stack[-2])
0x6bf: Pop(0)
0x6c0: GOTO 0x6c3

0x6c1: @@ set(Stack[-2], Stack[-1])
0x6c2: Pop(0)
0x6c3: Stack[-12] = (bool) 1
0x6c4: Return(); Pop(8)

0x6c5: Push((int) 1)
0x6c6: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x6c7: GOTO 0x6ab

0x6c8: Stack[-12] = (bool) 0
0x6c9: Return(); Pop(8)

0x6ca: Stack[-3] = 0
0x6cb: PushEmpty()
0x6cc: Stack[3 + Tasks[-1].StackPointer] = Stack[3 + Tasks[-1].StackPointer] + Stack[-1]; Pop(0);
0x6cd: Stack[4 + Tasks[-1].StackPointer] = Stack[4 + Tasks[-1].StackPointer] - Stack[-1]; Pop(0);
0x6ce: PushEmpty()
0x6cf: Call2 0x594

0x6d0: Pop(0)
0x6d1: PushEmpty()
0x6d2: Call2 0x598

0x6d3: Pop(0)
0x6d4: Return(); Pop(0)

0x6d5: PushEmpty(int, object, int, int, int, int, object, int, int, int)
0x6d6: @@ size(Stack[-5])
0x6d7: Pop(0)
0x6d8: Pop(0); Push(Stack[-11] + Stack[1 + StackPtr]);
0x6d9: Pop(1); Push((bool) Stack[-1] >= Stack[-6])
0x6da: IF (Stack[-1] == 0) GOTO 0x6dc; Pop(1)

0x6db: Return(); Pop(10)

0x6dc: Pop(0); Push(Stack[-11] + Stack[1 + StackPtr]);
0x6dd: @@ get(Stack[-5], Stack[-1])
0x6de: Pop(1)
0x6df: PushEmpty(bool, object, int, bool)
0x6e0: Stack[-3] = Stack[-8]
0x6e1: Stack[-2] = Stack[28 + Tasks[-1].StackPointer]
0x6e2: Stack[-1] = (bool) 0
0x6e3: Call2 0x0

0x6e4: Pop(3)
0x6e5: IF (Stack[-1] == 0) GOTO 0x6e7; Pop(1)

0x6e6: Return(); Pop(10)

0x6e7: Pop(0); Push(Stack[-11] + Stack[1 + StackPtr]);
0x6e8: @@ get(Stack[-4], Stack[-1])
0x6e9: Pop(1)
0x6ea: Pop(0); Push(Stack[-11] + Stack[1 + StackPtr]);
0x6eb: @@ get(Stack[-3], Stack[-1])
0x6ec: Pop(1)
0x6ed: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x6ee: IF (Stack[-1] == 0) GOTO 0x70f; Pop(1)

0x6ef: PushEmpty(int, object, int)
0x6f0: Stack[-2] = Stack[-7]
0x6f1: Stack[-1] = Stack[28 + Tasks[-1].StackPointer]
0x6f2: Call2 0x96e

0x6f3: Pop(2)
0x6f4: PushEmpty(float, object, int, int)
0x6f5: Stack[-3] = Stack[29 + Tasks[-1].StackPointer]
0x6f6: Stack[-2] = Stack[27 + Tasks[-1].StackPointer]
0x6f7: Stack[-1] = Stack[28 + Tasks[-1].StackPointer]
0x6f8: Call2 0x93f

0x6f9: Pop(3)
0x6fa: Stack[-3] = Stack[-2] * Stack[-1]; Pop(2);
0x6fb: Pop(0); Push((bool) Stack[-1] <= Stack[3 + Tasks[-1].StackPointer])
0x6fc: IF (Stack[-1] == 0) GOTO 0x70f; Pop(1)

0x6fd: PushEmpty(bool, object)
0x6fe: Stack[-1] = Stack[-6]
0x6ff: Call2 0x5fa

0x700: Pop(1)
0x701: IF (Stack[-1] == 0) GOTO 0x70f; Pop(1)

0x702: Push((int) 1)
0x703: Stack[-4] = Stack[-4] + Stack[-1]; Pop(1);
0x704: Pop(0); Push(Stack[-11] + Stack[1 + StackPtr]);
0x705: @@ set(Stack[-1], Stack[-4])
0x706: Pop(1)
0x707: PushEmpty(object)
0x708: Stack[-1] = Stack[-5]
0x709: Call2 0x32

0x70a: Pop(1)
0x70b: PushEmpty(int)
0x70c: Stack[-1] = -Stack[-2]; Pop(0);
0x70d: Call2 0x6cb

0x70e: Pop(1)
0x70f: PushEmpty()
0x710: Call2 0x4dd

0x711: Pop(0)
0x712: PushEmpty()
0x713: Call2 0x534

0x714: Pop(0)
0x715: Return(); Pop(10)

0x716: Stack[-4] = 0
0x717: PushEmpty(int, object, int, int, int, int, object, int, int, int)
0x718: @@ size(Stack[-5])
0x719: Pop(0)
0x71a: Pop(0); Push(Stack[-11] + Stack[1 + StackPtr]);
0x71b: Pop(1); Push((bool) Stack[-1] >= Stack[-6])
0x71c: IF (Stack[-1] == 0) GOTO 0x71e; Pop(1)

0x71d: Return(); Pop(10)

0x71e: Pop(0); Push(Stack[-11] + Stack[1 + StackPtr]);
0x71f: @@ get(Stack[-5], Stack[-1])
0x720: Pop(1)
0x721: PushEmpty(bool, object, int, bool)
0x722: Stack[-3] = Stack[-8]
0x723: Stack[-2] = Stack[28 + Tasks[-1].StackPointer]
0x724: Stack[-1] = (bool) 0
0x725: Call2 0x0

0x726: Pop(3)
0x727: IF (Stack[-1] == 0) GOTO 0x729; Pop(1)

0x728: Return(); Pop(10)

0x729: Pop(0); Push(Stack[-11] + Stack[1 + StackPtr]);
0x72a: @@ get(Stack[-4], Stack[-1])
0x72b: Pop(1)
0x72c: Pop(0); Push(Stack[-11] + Stack[1 + StackPtr]);
0x72d: @@ get(Stack[-3], Stack[-1])
0x72e: Pop(1)
0x72f: Push((int) 0)
0x730: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x731: IF (Stack[-1] == 0) GOTO 0x74f; Pop(1)

0x732: PushEmpty(bool, object)
0x733: Stack[-1] = Stack[-6]
0x734: Call2 0x637

0x735: Pop(2)
0x736: PushEmpty(object)
0x737: Stack[-1] = Stack[-5]
0x738: Call2 0x4a

0x739: Pop(1)
0x73a: Push((int) -1)
0x73b: Stack[-4] = Stack[-4] + Stack[-1]; Pop(1);
0x73c: Pop(0); Push(Stack[-11] + Stack[1 + StackPtr]);
0x73d: @@ set(Stack[-1], Stack[-4])
0x73e: Pop(1)
0x73f: PushEmpty(int, object, int)
0x740: Stack[-2] = Stack[-7]
0x741: Stack[-1] = Stack[28 + Tasks[-1].StackPointer]
0x742: Call2 0x96e

0x743: Pop(2)
0x744: PushEmpty(float, object, int, int)
0x745: Stack[-3] = Stack[29 + Tasks[-1].StackPointer]
0x746: Stack[-2] = Stack[27 + Tasks[-1].StackPointer]
0x747: Stack[-1] = Stack[28 + Tasks[-1].StackPointer]
0x748: Call2 0x93f

0x749: Pop(3)
0x74a: Stack[-3] = Stack[-2] * Stack[-1]; Pop(2);
0x74b: PushEmpty(int)
0x74c: Stack[-1] = Stack[-2]
0x74d: Call2 0x6cb

0x74e: Pop(1)
0x74f: PushEmpty()
0x750: Call2 0x4dd

0x751: Pop(0)
0x752: PushEmpty()
0x753: Call2 0x534

0x754: Pop(0)
0x755: Return(); Pop(10)

0x756: Stack[-4] = 0
0x757: PushEmpty(int, object, int, int, int, int, int, object, int, int, int, int)
0x758: @@ size(Stack[-6])
0x759: Pop(0)
0x75a: Pop(0); Push(Stack[-13] + Stack[2 + StackPtr]);
0x75b: Pop(1); Push((bool) Stack[-1] >= Stack[-7])
0x75c: IF (Stack[-1] == 0) GOTO 0x75e; Pop(1)

0x75d: Return(); Pop(12)

0x75e: Pop(0); Push(Stack[-13] + Stack[2 + StackPtr]);
0x75f: @@ get(Stack[-6], Stack[-1])
0x760: Pop(1)
0x761: PushEmpty(bool, object, int, bool)
0x762: Stack[-3] = Stack[-9]
0x763: Stack[-2] = Stack[28 + Tasks[-1].StackPointer]
0x764: Stack[-1] = (bool) 1
0x765: Call2 0x0

0x766: Pop(3)
0x767: IF (Stack[-1] == 0) GOTO 0x769; Pop(1)

0x768: Return(); Pop(12)

0x769: Pop(0); Push(Stack[-13] + Stack[2 + StackPtr]);
0x76a: @@ get(Stack[-5], Stack[-1])
0x76b: Pop(1)
0x76c: Push((int) 0)
0x76d: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x76e: IF (Stack[-1] == 0) GOTO 0x770; Pop(1)

0x76f: Return(); Pop(12)

0x770: Pop(0); Push(Stack[-13] + Stack[2 + StackPtr]);
0x771: @@ get(Stack[-4], Stack[-1])
0x772: Pop(1)
0x773: Pop(0); Push(Stack[-13] + Stack[2 + StackPtr]);
0x774: @@ get(Stack[-3], Stack[-1])
0x775: Pop(1)
0x776: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x777: IF (Stack[-1] == 0) GOTO 0x795; Pop(1)

0x778: PushEmpty(bool, object)
0x779: Stack[-1] = Stack[-7]
0x77a: Call2 0x637

0x77b: Pop(2)
0x77c: PushEmpty(object)
0x77d: Stack[-1] = Stack[-6]
0x77e: Call2 0x4a

0x77f: Pop(1)
0x780: Push((int) 1)
0x781: Stack[-4] = Stack[-4] + Stack[-1]; Pop(1);
0x782: Pop(0); Push(Stack[-13] + Stack[2 + StackPtr]);
0x783: @@ set(Stack[-1], Stack[-4])
0x784: Pop(1)
0x785: PushEmpty(int, object, int)
0x786: Stack[-2] = Stack[-8]
0x787: Stack[-1] = Stack[28 + Tasks[-1].StackPointer]
0x788: Call2 0x96e

0x789: Pop(2)
0x78a: PushEmpty(float, object, int, int)
0x78b: Stack[-3] = Stack[29 + Tasks[-1].StackPointer]
0x78c: Stack[-2] = Stack[27 + Tasks[-1].StackPointer]
0x78d: Stack[-1] = Stack[28 + Tasks[-1].StackPointer]
0x78e: Call2 0x925

0x78f: Pop(3)
0x790: Stack[-3] = Stack[-2] * Stack[-1]; Pop(2);
0x791: PushEmpty(int)
0x792: Stack[-1] = Stack[-2]
0x793: Call2 0x6cb

0x794: Pop(1)
0x795: PushEmpty()
0x796: Call2 0x4dd

0x797: Pop(0)
0x798: PushEmpty()
0x799: Call2 0x534

0x79a: Pop(0)
0x79b: Return(); Pop(12)

0x79c: Stack[-5] = 0
0x79d: PushEmpty(int, object, int, int, int, int, int, object, int, int, int, int)
0x79e: @@ size(Stack[-6])
0x79f: Pop(0)
0x7a0: Pop(0); Push(Stack[-13] + Stack[2 + StackPtr]);
0x7a1: Pop(1); Push((bool) Stack[-1] >= Stack[-7])
0x7a2: IF (Stack[-1] == 0) GOTO 0x7a4; Pop(1)

0x7a3: Return(); Pop(12)

0x7a4: Pop(0); Push(Stack[-13] + Stack[2 + StackPtr]);
0x7a5: @@ get(Stack[-6], Stack[-1])
0x7a6: Pop(1)
0x7a7: PushEmpty(bool, object, int, bool)
0x7a8: Stack[-3] = Stack[-9]
0x7a9: Stack[-2] = Stack[28 + Tasks[-1].StackPointer]
0x7aa: Stack[-1] = (bool) 1
0x7ab: Call2 0x0

0x7ac: Pop(3)
0x7ad: IF (Stack[-1] == 0) GOTO 0x7af; Pop(1)

0x7ae: Return(); Pop(12)

0x7af: Pop(0); Push(Stack[-13] + Stack[2 + StackPtr]);
0x7b0: @@ get(Stack[-5], Stack[-1])
0x7b1: Pop(1)
0x7b2: Push((int) 0)
0x7b3: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x7b4: IF (Stack[-1] == 0) GOTO 0x7b6; Pop(1)

0x7b5: Return(); Pop(12)

0x7b6: Pop(0); Push(Stack[-13] + Stack[2 + StackPtr]);
0x7b7: @@ get(Stack[-4], Stack[-1])
0x7b8: Pop(1)
0x7b9: Pop(0); Push(Stack[-13] + Stack[2 + StackPtr]);
0x7ba: @@ get(Stack[-3], Stack[-1])
0x7bb: Pop(1)
0x7bc: Push((int) 0)
0x7bd: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x7be: IF (Stack[-1] == 0) GOTO 0x7eb; Pop(1)

0x7bf: PushEmpty(int, object, int)
0x7c0: Stack[-2] = Stack[-8]
0x7c1: Stack[-1] = Stack[28 + Tasks[-1].StackPointer]
0x7c2: Call2 0x96e

0x7c3: Pop(2)
0x7c4: PushEmpty(float, object, int, int)
0x7c5: Stack[-3] = Stack[29 + Tasks[-1].StackPointer]
0x7c6: Stack[-2] = Stack[27 + Tasks[-1].StackPointer]
0x7c7: Stack[-1] = Stack[28 + Tasks[-1].StackPointer]
0x7c8: Call2 0x925

0x7c9: Pop(3)
0x7ca: Stack[-3] = Stack[-2] * Stack[-1]; Pop(2);
0x7cb: Pop(0); Push((bool) Stack[-1] <= Stack[3 + Tasks[-1].StackPointer])
0x7cc: IF (Stack[-1] == 0) GOTO 0x7eb; Pop(1)

0x7cd: PushEmpty(bool, object)
0x7ce: Stack[-1] = Stack[-7]
0x7cf: Call2 0x5fa

0x7d0: Pop(1)
0x7d1: IF (Stack[-1] == 0) GOTO 0x7eb; Pop(1)

0x7d2: Push((int) -1)
0x7d3: Stack[-4] = Stack[-4] + Stack[-1]; Pop(1);
0x7d4: PushEmpty(object)
0x7d5: Stack[-1] = Stack[-6]
0x7d6: Call2 0x32

0x7d7: Pop(1)
0x7d8: Pop(0); Push(Stack[-13] + Stack[2 + StackPtr]);
0x7d9: @@ set(Stack[-1], Stack[-4])
0x7da: Pop(1)
0x7db: PushEmpty(int)
0x7dc: PushEmpty(int, object, int)
0x7dd: Stack[-2] = Stack[-9]
0x7de: Stack[-1] = Stack[28 + Tasks[-1].StackPointer]
0x7df: Call2 0x96e

0x7e0: Pop(2)
0x7e1: Pop(1); Push(( -Stack[-1])
0x7e2: PushEmpty(float, object, int, int)
0x7e3: Stack[-3] = Stack[29 + Tasks[-1].StackPointer]
0x7e4: Stack[-2] = Stack[27 + Tasks[-1].StackPointer]
0x7e5: Stack[-1] = Stack[28 + Tasks[-1].StackPointer]
0x7e6: Call2 0x925

0x7e7: Pop(3)
0x7e8: Stack[-3] = Stack[-2] * Stack[-1]; Pop(2);
0x7e9: Call2 0x6cb

0x7ea: Pop(1)
0x7eb: PushEmpty()
0x7ec: Call2 0x4dd

0x7ed: Pop(0)
0x7ee: PushEmpty()
0x7ef: Call2 0x534

0x7f0: Pop(0)
0x7f1: Return(); Pop(12)

0x7f2: Stack[-5] = 0
0x7f3: PushEmpty(int, int, int, int)
0x7f4: @@ size(Stack[-2])
0x7f5: Pop(0)
0x7f6: Pop(0); Push(Stack[-5] + Stack[1 + StackPtr]);
0x7f7: Pop(1); Push((bool) Stack[-1] >= Stack[-3])
0x7f8: IF (Stack[-1] == 0) GOTO 0x7fb; Pop(1)

0x7f9: Stack[-6] = (int) 0
0x7fa: Return(); Pop(4)

0x7fb: Pop(0); Push(Stack[-5] + Stack[1 + StackPtr]);
0x7fc: @@ get(Stack[-2], Stack[-1])
0x7fd: Pop(1)
0x7fe: Stack[-6] = Stack[-1]
0x7ff: Return(); Pop(4)

0x800: PushEmpty(int, int, int, int)
0x801: @@ size(Stack[-2])
0x802: Pop(0)
0x803: Pop(0); Push(Stack[-5] + Stack[2 + StackPtr]);
0x804: Pop(1); Push((bool) Stack[-1] >= Stack[-3])
0x805: IF (Stack[-1] == 0) GOTO 0x808; Pop(1)

0x806: Stack[-6] = (int) 0
0x807: Return(); Pop(4)

0x808: Pop(0); Push(Stack[-5] + Stack[2 + StackPtr]);
0x809: @@ get(Stack[-2], Stack[-1])
0x80a: Pop(1)
0x80b: Stack[-6] = Stack[-1]
0x80c: Return(); Pop(4)

0x80d: PushEmpty(float, float)
0x80e: @ GetGameTime(Stack[-1])
0x80f: Pop(0)
0x810: Push((int) 1)
0x811: PushEmpty(int)
0x812: Push((int) 24)
0x813: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x814: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x815: Return(); Pop(2)

0x816: PushEmpty()
0x817: Push((int) 1)
0x818: Pop(1); Push(Stack[-2] + Stack[-1]);
0x819: Push((int) 10)
0x81a: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x81b: IF (Stack[-1] == 0) GOTO 0x821; Pop(1)

0x81c: Push("l_slot0")
0x81d: Push((int) 1)
0x81e: Pop(1); Push(Stack[-3] + Stack[-1]);
0x81f: Stack[-4] = Stack[-2] + Stack[-1]; Pop(2);
0x820: Return(); Pop(0)

0x821: Push("l_slot")
0x822: Push((int) 1)
0x823: Pop(1); Push(Stack[-3] + Stack[-1]);
0x824: Stack[-4] = Stack[-2] + Stack[-1]; Pop(2);
0x825: Return(); Pop(0)

0x826: PushEmpty()
0x827: Push((int) 1)
0x828: Pop(1); Push(Stack[-2] + Stack[-1]);
0x829: Push((int) 10)
0x82a: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x82b: IF (Stack[-1] == 0) GOTO 0x831; Pop(1)

0x82c: Push("r_slot0")
0x82d: Push((int) 1)
0x82e: Pop(1); Push(Stack[-3] + Stack[-1]);
0x82f: Stack[-4] = Stack[-2] + Stack[-1]; Pop(2);
0x830: Return(); Pop(0)

0x831: Push("r_slot")
0x832: Push((int) 1)
0x833: Pop(1); Push(Stack[-3] + Stack[-1]);
0x834: Stack[-4] = Stack[-2] + Stack[-1]; Pop(2);
0x835: Return(); Pop(0)

0x836: PushEmpty(int, int, int, int, int, int)
0x837: @ GetWindowSize(Stack[-2], Stack[-1])
0x838: Pop(0)
0x839: Stack[-3] = (int) 18
0x83a: PushEmpty(bool)
0x83b: Stack[-1] = (bool) 0
0x83c: Push((int) 1024)
0x83d: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x83e: IF (Stack[-1] == 0) GOTO 0x843; Pop(1)

0x83f: Push((int) 768)
0x840: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x841: IF (Stack[-1] == 0) GOTO 0x843; Pop(1)

0x842: Stack[-1] = (bool) 1
0x843: IF (Stack[-1] == 0) GOTO 0x846; Pop(1)

0x844: Stack[-3] = (int) 24
0x845: GOTO 0x8f9

0x846: PushEmpty(bool)
0x847: Stack[-1] = (bool) 0
0x848: Push((int) 1280)
0x849: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x84a: IF (Stack[-1] == 0) GOTO 0x84f; Pop(1)

0x84b: Push((int) 1024)
0x84c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x84d: IF (Stack[-1] == 0) GOTO 0x84f; Pop(1)

0x84e: Stack[-1] = (bool) 1
0x84f: IF (Stack[-1] == 0) GOTO 0x852; Pop(1)

0x850: Stack[-3] = (int) 32
0x851: GOTO 0x8f9

0x852: PushEmpty(bool)
0x853: Stack[-1] = (bool) 0
0x854: Push((int) 1280)
0x855: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x856: IF (Stack[-1] == 0) GOTO 0x85b; Pop(1)

0x857: Push((int) 720)
0x858: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x859: IF (Stack[-1] == 0) GOTO 0x85b; Pop(1)

0x85a: Stack[-1] = (bool) 1
0x85b: IF (Stack[-1] == 0) GOTO 0x85e; Pop(1)

0x85c: Stack[-3] = (int) 22
0x85d: GOTO 0x8f9

0x85e: PushEmpty(bool)
0x85f: Stack[-1] = (bool) 0
0x860: Push((int) 1280)
0x861: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x862: IF (Stack[-1] == 0) GOTO 0x867; Pop(1)

0x863: Push((int) 768)
0x864: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x865: IF (Stack[-1] == 0) GOTO 0x867; Pop(1)

0x866: Stack[-1] = (bool) 1
0x867: IF (Stack[-1] == 0) GOTO 0x86a; Pop(1)

0x868: Stack[-3] = (int) 24
0x869: GOTO 0x8f9

0x86a: PushEmpty(bool)
0x86b: Stack[-1] = (bool) 0
0x86c: Push((int) 1280)
0x86d: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x86e: IF (Stack[-1] == 0) GOTO 0x873; Pop(1)

0x86f: Push((int) 800)
0x870: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x871: IF (Stack[-1] == 0) GOTO 0x873; Pop(1)

0x872: Stack[-1] = (bool) 1
0x873: IF (Stack[-1] == 0) GOTO 0x876; Pop(1)

0x874: Stack[-3] = (int) 24
0x875: GOTO 0x8f9

0x876: PushEmpty(bool)
0x877: Stack[-1] = (bool) 0
0x878: Push((int) 1360)
0x879: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x87a: IF (Stack[-1] == 0) GOTO 0x87f; Pop(1)

0x87b: Push((int) 768)
0x87c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x87d: IF (Stack[-1] == 0) GOTO 0x87f; Pop(1)

0x87e: Stack[-1] = (bool) 1
0x87f: IF (Stack[-1] == 0) GOTO 0x882; Pop(1)

0x880: Stack[-3] = (int) 24
0x881: GOTO 0x8f9

0x882: PushEmpty(bool)
0x883: Stack[-1] = (bool) 0
0x884: Push((int) 1366)
0x885: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x886: IF (Stack[-1] == 0) GOTO 0x88b; Pop(1)

0x887: Push((int) 768)
0x888: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x889: IF (Stack[-1] == 0) GOTO 0x88b; Pop(1)

0x88a: Stack[-1] = (bool) 1
0x88b: IF (Stack[-1] == 0) GOTO 0x88e; Pop(1)

0x88c: Stack[-3] = (int) 24
0x88d: GOTO 0x8f9

0x88e: PushEmpty(bool)
0x88f: Stack[-1] = (bool) 0
0x890: Push((int) 1440)
0x891: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x892: IF (Stack[-1] == 0) GOTO 0x897; Pop(1)

0x893: Push((int) 900)
0x894: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x895: IF (Stack[-1] == 0) GOTO 0x897; Pop(1)

0x896: Stack[-1] = (bool) 1
0x897: IF (Stack[-1] == 0) GOTO 0x89a; Pop(1)

0x898: Stack[-3] = (int) 28
0x899: GOTO 0x8f9

0x89a: PushEmpty(bool)
0x89b: Stack[-1] = (bool) 0
0x89c: Push((int) 1536)
0x89d: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x89e: IF (Stack[-1] == 0) GOTO 0x8a3; Pop(1)

0x89f: Push((int) 864)
0x8a0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8a1: IF (Stack[-1] == 0) GOTO 0x8a3; Pop(1)

0x8a2: Stack[-1] = (bool) 1
0x8a3: IF (Stack[-1] == 0) GOTO 0x8a6; Pop(1)

0x8a4: Stack[-3] = (int) 26
0x8a5: GOTO 0x8f9

0x8a6: PushEmpty(bool)
0x8a7: Stack[-1] = (bool) 0
0x8a8: Push((int) 1600)
0x8a9: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x8aa: IF (Stack[-1] == 0) GOTO 0x8af; Pop(1)

0x8ab: Push((int) 1200)
0x8ac: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8ad: IF (Stack[-1] == 0) GOTO 0x8af; Pop(1)

0x8ae: Stack[-1] = (bool) 1
0x8af: IF (Stack[-1] == 0) GOTO 0x8b2; Pop(1)

0x8b0: Stack[-3] = (int) 38
0x8b1: GOTO 0x8f9

0x8b2: PushEmpty(bool)
0x8b3: Stack[-1] = (bool) 0
0x8b4: Push((int) 1600)
0x8b5: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x8b6: IF (Stack[-1] == 0) GOTO 0x8bb; Pop(1)

0x8b7: Push((int) 1200)
0x8b8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8b9: IF (Stack[-1] == 0) GOTO 0x8bb; Pop(1)

0x8ba: Stack[-1] = (bool) 1
0x8bb: IF (Stack[-1] == 0) GOTO 0x8be; Pop(1)

0x8bc: Stack[-3] = (int) 38
0x8bd: GOTO 0x8f9

0x8be: PushEmpty(bool)
0x8bf: Stack[-1] = (bool) 0
0x8c0: Push((int) 1600)
0x8c1: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x8c2: IF (Stack[-1] == 0) GOTO 0x8c7; Pop(1)

0x8c3: Push((int) 900)
0x8c4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8c5: IF (Stack[-1] == 0) GOTO 0x8c7; Pop(1)

0x8c6: Stack[-1] = (bool) 1
0x8c7: IF (Stack[-1] == 0) GOTO 0x8ca; Pop(1)

0x8c8: Stack[-3] = (int) 28
0x8c9: GOTO 0x8f9

0x8ca: PushEmpty(bool)
0x8cb: Stack[-1] = (bool) 0
0x8cc: Push((int) 1600)
0x8cd: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x8ce: IF (Stack[-1] == 0) GOTO 0x8d3; Pop(1)

0x8cf: Push((int) 1050)
0x8d0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8d1: IF (Stack[-1] == 0) GOTO 0x8d3; Pop(1)

0x8d2: Stack[-1] = (bool) 1
0x8d3: IF (Stack[-1] == 0) GOTO 0x8d6; Pop(1)

0x8d4: Stack[-3] = (int) 32
0x8d5: GOTO 0x8f9

0x8d6: PushEmpty(bool)
0x8d7: Stack[-1] = (bool) 0
0x8d8: Push((int) 1600)
0x8d9: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x8da: IF (Stack[-1] == 0) GOTO 0x8df; Pop(1)

0x8db: Push((int) 1050)
0x8dc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8dd: IF (Stack[-1] == 0) GOTO 0x8df; Pop(1)

0x8de: Stack[-1] = (bool) 1
0x8df: IF (Stack[-1] == 0) GOTO 0x8e2; Pop(1)

0x8e0: Stack[-3] = (int) 32
0x8e1: GOTO 0x8f9

0x8e2: PushEmpty(bool)
0x8e3: Stack[-1] = (bool) 0
0x8e4: Push((int) 1920)
0x8e5: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x8e6: IF (Stack[-1] == 0) GOTO 0x8eb; Pop(1)

0x8e7: Push((int) 1080)
0x8e8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8e9: IF (Stack[-1] == 0) GOTO 0x8eb; Pop(1)

0x8ea: Stack[-1] = (bool) 1
0x8eb: IF (Stack[-1] == 0) GOTO 0x8ee; Pop(1)

0x8ec: Stack[-3] = (int) 34
0x8ed: GOTO 0x8f9

0x8ee: PushEmpty(bool)
0x8ef: Stack[-1] = (bool) 0
0x8f0: Push((int) 1920)
0x8f1: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x8f2: IF (Stack[-1] == 0) GOTO 0x8f7; Pop(1)

0x8f3: Push((int) 1200)
0x8f4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8f5: IF (Stack[-1] == 0) GOTO 0x8f7; Pop(1)

0x8f6: Stack[-1] = (bool) 1
0x8f7: IF (Stack[-1] == 0) GOTO 0x8f9; Pop(1)

0x8f8: Stack[-3] = (int) 38
0x8f9: Stack[-7] = Stack[-3]
0x8fa: Return(); Pop(6)

0x8fb: PushEmpty(int, int, int, int)
0x8fc: PushEmpty(int)
0x8fd: Call2 0x836

0x8fe: Stack[-3] = Stack[-1]
0x8ff: Pop(1)
0x900: Stack[-1] = (int) 0
0x901: Pop(0); Push((bool) Stack[-1] < Stack[-2])
0x902: IF (Stack[-1] == 0) GOTO 0x90e; Pop(1)

0x903: PushEmpty(string, int)
0x904: Stack[-1] = Stack[-3]
0x905: Call2 0x816

0x906: Pop(1)
0x907: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x908: IF (Stack[-1] == 0) GOTO 0x90b; Pop(1)

0x909: Stack[-7] = Stack[-1]
0x90a: Return(); Pop(4)

0x90b: Push((int) 1)
0x90c: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x90d: GOTO 0x901

0x90e: Stack[-7] = (int) -1
0x90f: Return(); Pop(4)

0x910: PushEmpty(int, int, int, int)
0x911: PushEmpty(int)
0x912: Call2 0x836

0x913: Stack[-3] = Stack[-1]
0x914: Pop(1)
0x915: Stack[-1] = (int) 0
0x916: Pop(0); Push((bool) Stack[-1] < Stack[-2])
0x917: IF (Stack[-1] == 0) GOTO 0x923; Pop(1)

0x918: PushEmpty(string, int)
0x919: Stack[-1] = Stack[-3]
0x91a: Call2 0x826

0x91b: Pop(1)
0x91c: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x91d: IF (Stack[-1] == 0) GOTO 0x920; Pop(1)

0x91e: Stack[-7] = Stack[-1]
0x91f: Return(); Pop(4)

0x920: Push((int) 1)
0x921: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x922: GOTO 0x916

0x923: Stack[-7] = (int) -1
0x924: Return(); Pop(4)

0x925: PushEmpty(float, int, bool, float, int, bool)
0x926: Push((int) 0)
0x927: Pop(1); Push((bool) Stack[-8] != Stack[-1])
0x928: IF (Stack[-1] == 0) GOTO 0x92b; Pop(1)

0x929: Stack[-10] = (int) 1
0x92a: Return(); Pop(6)

0x92b: Stack[-3] = (int) 1
0x92c: Stack[-2] = (int) 1
0x92d: Pop(0); Push((bool) Stack[-2] <= Stack[-8])
0x92e: IF (Stack[-1] == 0) GOTO 0x93c; Pop(1)

0x92f: Push("sellf")
0x930: Pop(1); Push(Stack[-1] + Stack[-3]);
0x931: @@ HasProperty(Stack[-1], Stack[-2])
0x932: Pop(1)
0x933: Push(Stack[-1])
0x934: IF (Stack[-1] == 0) GOTO 0x939; Pop(1)

0x935: Push("sellf")
0x936: Pop(1); Push(Stack[-1] + Stack[-3]);
0x937: @@ GetProperty(Stack[-1], Stack[-4])
0x938: Pop(1)
0x939: Push((int) 1)
0x93a: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x93b: GOTO 0x92d

0x93c: Push((int) 100)
0x93d: Stack[-11] = Stack[-4] / Stack[-1]; Pop(1);
0x93e: Return(); Pop(6)

0x93f: PushEmpty(float, int, bool, float, int, bool)
0x940: Push((int) 0)
0x941: Pop(1); Push((bool) Stack[-8] != Stack[-1])
0x942: IF (Stack[-1] == 0) GOTO 0x945; Pop(1)

0x943: Stack[-10] = (int) 1
0x944: Return(); Pop(6)

0x945: Stack[-3] = (int) 1
0x946: Stack[-2] = (int) 1
0x947: Pop(0); Push((bool) Stack[-2] <= Stack[-8])
0x948: IF (Stack[-1] == 0) GOTO 0x956; Pop(1)

0x949: Push("buyf")
0x94a: Pop(1); Push(Stack[-1] + Stack[-3]);
0x94b: @@ HasProperty(Stack[-1], Stack[-2])
0x94c: Pop(1)
0x94d: Push(Stack[-1])
0x94e: IF (Stack[-1] == 0) GOTO 0x953; Pop(1)

0x94f: Push("buyf")
0x950: Pop(1); Push(Stack[-1] + Stack[-3]);
0x951: @@ GetProperty(Stack[-1], Stack[-4])
0x952: Pop(1)
0x953: Push((int) 1)
0x954: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x955: GOTO 0x947

0x956: Push((int) 100)
0x957: Stack[-11] = Stack[-4] / Stack[-1]; Pop(1);
0x958: Return(); Pop(6)

0x959: PushEmpty(object, bool, int, object, bool, int)
0x95a: @ GetContainer(Stack[-3])
0x95b: Pop(0)
0x95c: Push("barter")
0x95d: @@ HasProperty(Stack[-1], Stack[-3])
0x95e: Pop(1)
0x95f: Pop(0); Push((bool) Stack[-2] == 0)
0x960: IF (Stack[-1] == 0) GOTO 0x963; Pop(1)

0x961: Stack[-7] = (int) 0
0x962: Return(); Pop(6)

0x963: Push("barter")
0x964: @@ GetProperty(Stack[-1], Stack[-2])
0x965: Pop(1)
0x966: Stack[-7] = Stack[-1]
0x967: Return(); Pop(6)

0x968: Stack[-3] = 0
0x969: PushEmpty(int, int)
0x96a: @@ GetItemID(Stack[-1])
0x96b: Pop(0)
0x96c: Stack[-4] = Stack[-1]
0x96d: Return(); Pop(2)

0x96e: PushEmpty(int, int, int, string, bool, bool, int, bool, int, int, int, int, string, bool, bool, int, bool, int)
0x96f: Push((int) 0)
0x970: Pop(1); Push((bool) Stack[-20] == Stack[-1])
0x971: IF (Stack[-1] == 0) GOTO 0x9a2; Pop(1)

0x972: PushEmpty(int)
0x973: Call2 0x80d

0x974: Stack[-10] = Stack[-1]
0x975: Pop(1)
0x976: Stack[-8] = (int) 0
0x977: Stack[-7] = (int) 1
0x978: Pop(0); Push((bool) Stack[-7] <= Stack[-9])
0x979: IF (Stack[-1] == 0) GOTO 0x991; Pop(1)

0x97a: Stack[-6] = "Price"
0x97b: Push((int) 1)
0x97c: Pop(1); Push((bool) Stack[-8] != Stack[-1])
0x97d: IF (Stack[-1] == 0) GOTO 0x97f; Pop(1)

0x97e: Stack[-6] = Stack[-6] + Stack[-7]; Pop(0);
0x97f: PushEmpty(int, object)
0x980: Stack[-1] = Stack[-22]
0x981: Call2 0x969

0x982: Pop(1)
0x983: @ HasInvItemProperty(Stack[-6], Stack[-1], Stack[-7])
0x984: Pop(1)
0x985: Pop(0); Push((bool) Stack[-5] == 0)
0x986: IF (Stack[-1] == 0) GOTO 0x988; Pop(1)

0x987: GOTO 0x98e

0x988: PushEmpty(int, object)
0x989: Stack[-1] = Stack[-22]
0x98a: Call2 0x969

0x98b: Pop(1)
0x98c: @ GetInvItemProperty(Stack[-9], Stack[-1], Stack[-7])
0x98d: Pop(1)
0x98e: Push((int) 1)
0x98f: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x990: GOTO 0x978

0x991: Push("durability")
0x992: @@ HasProperty(Stack[-5], Stack[-1])
0x993: Pop(1)
0x994: Push(Stack[-4])
0x995: IF (Stack[-1] == 0) GOTO 0x9a0; Pop(1)

0x996: Push("durability")
0x997: @@ GetProperty(Stack[-4], Stack[-1])
0x998: Pop(1)
0x999: Push((float)0.5)
0x99a: Push((float)1.0)
0x99b: Push((float)100.0)
0x99c: Pop(1); Push(Stack[-6] / Stack[-1]);
0x99d: Pop(2); Push(Stack[-2] + Stack[-1]);
0x99e: Pop(2); Push(Stack[-2] * Stack[-1]);
0x99f: Stack[-9] = Stack[-9] * Stack[-1]; Pop(1);
0x9a0: Stack[-21] = Stack[-8]
0x9a1: Return(); Pop(18)

0x9a2: PushEmpty(int, object)
0x9a3: Stack[-1] = Stack[-22]
0x9a4: Call2 0x969

0x9a5: Pop(1)
0x9a6: Push("BarterPrice")
0x9a7: Pop(1); Push(Stack[-1] + Stack[-21]);
0x9a8: @ HasInvItemProperty(Stack[-4], Stack[-2], Stack[-1])
0x9a9: Pop(2)
0x9aa: Pop(0); Push((bool) Stack[-2] == 0)
0x9ab: IF (Stack[-1] == 0) GOTO 0x9ae; Pop(1)

0x9ac: Stack[-21] = (int) 0
0x9ad: Return(); Pop(18)

0x9ae: PushEmpty(int, object)
0x9af: Stack[-1] = Stack[-22]
0x9b0: Call2 0x969

0x9b1: Pop(1)
0x9b2: Push("BarterPrice")
0x9b3: Pop(1); Push(Stack[-1] + Stack[-21]);
0x9b4: @ GetInvItemProperty(Stack[-3], Stack[-2], Stack[-1])
0x9b5: Pop(2)
0x9b6: Push((int) 0)
0x9b7: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x9b8: IF (Stack[-1] == 0) GOTO 0x9bb; Pop(1)

0x9b9: Stack[-21] = Stack[-1]
0x9ba: Return(); Pop(18)

0x9bb: Stack[-21] = -Stack[-1]; Pop(0);
0x9bc: Return(); Pop(18)

0x9bd: PushEmpty(int, int)
0x9be: PushEmpty(int, object)
0x9bf: Stack[-1] = Stack[-5]
0x9c0: Call2 0x969

0x9c1: Pop(1)
0x9c2: Push("Category")
0x9c3: @ GetInvItemProperty(Stack[-3], Stack[-2], Stack[-1])
0x9c4: Pop(2)
0x9c5: Stack[-4] = Stack[-1]
0x9c6: Return(); Pop(2)

0x9c7: PushEmpty(int, int)
0x9c8: PushEmpty(int, object)
0x9c9: Stack[-1] = Stack[-5]
0x9ca: Call2 0x969

0x9cb: Pop(1)
0x9cc: @ GetItemMaxStackSize(Stack[-1], Stack[-2])
0x9cd: Pop(1)
0x9ce: Stack[-4] = Stack[-1]
0x9cf: Return(); Pop(2)

0x9d0: PushEmpty(int, object, int, object)
0x9d1: @ GetContainer(Stack[-1])
0x9d2: Pop(0)
0x9d3: @@ GetItemCount(Stack[-2])
0x9d4: Pop(0)
0x9d5: Stack[-5] = Stack[-2]
0x9d6: Return(); Pop(4)

0x9d7: Stack[-1] = 0
0x9d8: PushEmpty(int, object, int, object)
0x9d9: @ GetPlayerContainer(Stack[-1])
0x9da: Pop(0)
0x9db: @@ GetItemCount(Stack[-2], Stack[-5])
0x9dc: Pop(0)
0x9dd: Stack[-6] = Stack[-2]
0x9de: Return(); Pop(4)

0x9df: Stack[-1] = 0
0x9e0: PushEmpty(object, object, object, object)
0x9e1: @ GetPlayerContainer(Stack[-2])
0x9e2: Pop(0)
0x9e3: @@ GetItem(Stack[-1], Stack[-5], Stack[-6])
0x9e4: Pop(0)
0x9e5: Stack[-7] = Stack[-1]
0x9e6: Return(); Pop(4)

0x9e7: Stack[-1] = 0
0x9e8: Stack[-2] = 0
0x9e9: PushEmpty(object, int, object, int)
0x9ea: @ GetPlayerContainer(Stack[-2])
0x9eb: Pop(0)
0x9ec: @@ GetItemAmount(Stack[-1], Stack[-5], Stack[-6])
0x9ed: Pop(0)
0x9ee: Stack[-7] = Stack[-1]
0x9ef: Return(); Pop(4)

0x9f0: Stack[-2] = 0
0x9f1: PushEmpty(object, bool, object, bool)
0x9f2: @ GetPlayerContainer(Stack[-2])
0x9f3: Pop(0)
0x9f4: @@ IsItemSelected(Stack[-1], Stack[-5], Stack[-6])
0x9f5: Pop(0)
0x9f6: Stack[-7] = Stack[-1]
0x9f7: Return(); Pop(4)

0x9f8: Stack[-2] = 0
0x9f9: PushEmpty(object, object, object, object)
0x9fa: @ GetContainer(Stack[-2])
0x9fb: Pop(0)
0x9fc: @@ GetItem(Stack[-1], Stack[-5])
0x9fd: Pop(0)
0x9fe: Stack[-6] = Stack[-1]
0x9ff: Return(); Pop(4)

0xa00: Stack[-1] = 0
0xa01: Stack[-2] = 0
0xa02: PushEmpty(object, int, object, int)
0xa03: @ GetContainer(Stack[-2])
0xa04: Pop(0)
0xa05: @@ GetItemAmount(Stack[-1], Stack[-5])
0xa06: Pop(0)
0xa07: Stack[-6] = Stack[-1]
0xa08: Return(); Pop(4)

0xa09: Stack[-2] = 0
0xa0a: PushEmpty(bool, bool)
0xa0b: @@ Compare(Stack[-1], Stack[-3])
0xa0c: Pop(0)
0xa0d: Stack[-5] = Stack[-1]
0xa0e: Return(); Pop(2)

0xa0f: PushEmpty()
0xa10: PushEmpty(bool, object, object)
0xa11: Stack[-2] = Stack[-5]
0xa12: Stack[-1] = Stack[-4]
0xa13: Call2 0xa0a

0xa14: Stack[-6] = Stack[-3]
0xa15: Pop(3)
0xa16: Return(); Pop(0)

0xa17: PushEmpty(int, object, int, int, object, int)
0xa18: @@ GetItemCount(Stack[-3], Stack[-7])
0xa19: Pop(0)
0xa1a: Stack[-1] = (int) 0
0xa1b: Pop(0); Push((bool) Stack[-1] < Stack[-3])
0xa1c: IF (Stack[-1] == 0) GOTO 0xa2d; Pop(1)

0xa1d: @@ GetItem(Stack[-2], Stack[-1], Stack[-7])
0xa1e: Pop(0)
0xa1f: PushEmpty(bool, object, object)
0xa20: Stack[-2] = Stack[-11]
0xa21: Stack[-1] = Stack[-5]
0xa22: Call2 0xa0a

0xa23: Pop(2)
0xa24: IF (Stack[-1] == 0) GOTO 0xa2a; Pop(1)

0xa25: Push((int) 1)
0xa26: @@ RemoveItem(Stack[-2], Stack[-1], Stack[-8])
0xa27: Pop(1)
0xa28: Stack[-10] = (bool) 1
0xa29: Return(); Pop(6)

0xa2a: Push((int) 1)
0xa2b: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0xa2c: GOTO 0xa1b

0xa2d: Stack[-10] = (bool) 0
0xa2e: Return(); Pop(6)

0xa2f: Stack[-2] = 0
0xa30: PushEmpty(bool, bool)
0xa31: Push((int) 1)
0xa32: @@ AddItem(Stack[-2], Stack[-5], Stack[-4], Stack[-1])
0xa33: Pop(1)
0xa34: Stack[-6] = Stack[-1]
0xa35: Return(); Pop(2)

