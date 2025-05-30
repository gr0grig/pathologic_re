GlobalVarCount = 0

Strings:
	default
	button_weapon
	button_clothes
	button_medcine
	button_food
	button_other
	button_detector
	button_anticeptic
	noinv_drop
	slot0
	slot
	cslot0
	cslot
	GetCapacity
	Money
	MoveToContainer
	GetItemCount
	GetItemAmount
	GetItem
	GetItemID
	AddItem
	RemoveItem
	MoveToPlayerContainer
	Category
	money
	IsItemSelected
	Weapon
	SelectItem
	Group
	SetItemAmount

Import:
	SetCursor (1 args)
	ShowCursor (0 args)
	CaptureKeyboard (0 args)
	SetOwnerDraw (1 args)
	SetNeedUpdate (1 args)
	ProcessEvents (0 args)
	DestroyWindow (0 args)
	GetVariable (2 args)
	HasContainer (1 args)
	GetContainer (1 args)
	GetInvItemByName (2 args)
	Trace (1 args)
	GetPlayerContainer (1 args)
	GetInvItemProperty (3 args)
	GetPlayerMoneyCount (1 args)
	SetPlayerMoneyCount (1 args)
	SendMessage (2 args)
	SendMessage (3 args)
	HasInvItemProperty (3 args)
	SetPlayerHandsItem (1 args)
	UseItem (3 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (int) Params = 0
		EVENT_100 Op = 0x1f Vars = (int)
		EVENT_1 Op = 0x23 Vars = (float)
		EVENT_200 Op = 0x29 Vars = (int, string, object)


0x0: Stack[0 + Tasks[-1].StackPointer] = (int)0
0x1: PushEmpty(int)
0x2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3: Call 0x1b5

0x4: Pop(1)
0x5: PushEmpty(int)
0x6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x7: Call 0x17d

0x8: Pop(1)
0x9: PushEmpty()
0xa: Call 0x146

0xb: Pop(0)
0xc: PushEmpty()
0xd: Call 0x13f

0xe: Pop(0)
0xf: Push("default")
0x10: @ SetCursor(Stack[-1])
0x11: Pop(1)
0x12: @ ShowCursor()
0x13: Pop(0)
0x14: @ CaptureKeyboard()
0x15: Pop(0)
0x16: Push((bool) 0)
0x17: @ SetOwnerDraw(Stack[-1])
0x18: Pop(1)
0x19: Push((bool) 1)
0x1a: @ SetNeedUpdate(Stack[-1])
0x1b: Pop(1)
0x1c: @ ProcessEvents()
0x1d: Pop(0)
0x1e: Return(); Pop(0)

0x1f: PushEmpty()
0x20: @ DestroyWindow()
0x21: Pop(0)
0x22: Return(); Pop(0)

0x23: PushEmpty()
0x24: PushEmpty(int)
0x25: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x26: Call 0x17d

0x27: Pop(1)
0x28: Return(); Pop(0)

0x29: PushEmpty(int, int, int, int, int, int, int, int, int, int, int, int)
0x2a: Push("button_weapon")
0x2b: Pop(1); Push((bool) Stack[-15] == Stack[-1])
0x2c: IF (Stack[-1] == 0) GOTO 0x2f; Pop(1)

0x2d: Stack[0 + Tasks[-1].StackPointer] = (int)0
0x2e: GOTO 0x95

0x2f: Push("button_clothes")
0x30: Pop(1); Push((bool) Stack[-15] == Stack[-1])
0x31: IF (Stack[-1] == 0) GOTO 0x34; Pop(1)

0x32: Stack[0 + Tasks[-1].StackPointer] = (int)1
0x33: GOTO 0x95

0x34: Push("button_medcine")
0x35: Pop(1); Push((bool) Stack[-15] == Stack[-1])
0x36: IF (Stack[-1] == 0) GOTO 0x39; Pop(1)

0x37: Stack[0 + Tasks[-1].StackPointer] = (int)2
0x38: GOTO 0x95

0x39: Push("button_food")
0x3a: Pop(1); Push((bool) Stack[-15] == Stack[-1])
0x3b: IF (Stack[-1] == 0) GOTO 0x3e; Pop(1)

0x3c: Stack[0 + Tasks[-1].StackPointer] = (int)3
0x3d: GOTO 0x95

0x3e: Push("button_other")
0x3f: Pop(1); Push((bool) Stack[-15] == Stack[-1])
0x40: IF (Stack[-1] == 0) GOTO 0x43; Pop(1)

0x41: Stack[0 + Tasks[-1].StackPointer] = (int)4
0x42: GOTO 0x95

0x43: Push("button_detector")
0x44: Pop(1); Push((bool) Stack[-15] == Stack[-1])
0x45: IF (Stack[-1] == 0) GOTO 0x47; Pop(1)

0x46: GOTO 0x95

0x47: Push("button_anticeptic")
0x48: Pop(1); Push((bool) Stack[-15] == Stack[-1])
0x49: IF (Stack[-1] == 0) GOTO 0x4b; Pop(1)

0x4a: GOTO 0x95

0x4b: Push((int) 0)
0x4c: Pop(1); Push((bool) Stack[-16] != Stack[-1])
0x4d: IF (Stack[-1] == 0) GOTO 0x54; Pop(1)

0x4e: Push("noinv_drop")
0x4f: @ GetVariable(Stack[-1], Stack[-7])
0x50: Pop(1)
0x51: Push(Stack[-6])
0x52: IF (Stack[-1] == 0) GOTO 0x54; Pop(1)

0x53: Return(); Pop(12)

0x54: Stack[-5] = (int) 0
0x55: Push((int) 12)
0x56: Pop(1); Push((bool) Stack[-6] < Stack[-1])
0x57: IF (Stack[-1] == 0) GOTO 0x7c; Pop(1)

0x58: PushEmpty(string, int)
0x59: Stack[-1] = Stack[-7]
0x5a: Call 0xa1

0x5b: Pop(1)
0x5c: Pop(1); Push((bool) Stack[-15] == Stack[-1])
0x5d: IF (Stack[-1] == 0) GOTO 0x79; Pop(1)

0x5e: PushEmpty(bool)
0x5f: Call 0xc1

0x60: Pop(0)
0x61: IF (Stack[-1] == 0) GOTO 0x69; Pop(1)

0x62: PushEmpty(bool, int, int)
0x63: Stack[-2] = Stack[0 + Tasks[-1].StackPointer]
0x64: Stack[-1] = Stack[-8]
0x65: Call 0xdf

0x66: Stack[-7] = Stack[-3]
0x67: Pop(3)
0x68: GOTO 0x78

0x69: Push((int) 0)
0x6a: Pop(1); Push((bool) Stack[-16] == Stack[-1])
0x6b: IF (Stack[-1] == 0) GOTO 0x72; Pop(1)

0x6c: PushEmpty(int, int)
0x6d: Stack[-2] = Stack[0 + Tasks[-1].StackPointer]
0x6e: Stack[-1] = Stack[-7]
0x6f: Call 0x1f3

0x70: Pop(2)
0x71: GOTO 0x78

0x72: PushEmpty(bool, int, int)
0x73: Stack[-2] = Stack[0 + Tasks[-1].StackPointer]
0x74: Stack[-1] = Stack[-8]
0x75: Call 0xdf

0x76: Stack[-6] = Stack[-3]
0x77: Pop(3)
0x78: GOTO 0x7c

0x79: Push((int) 1)
0x7a: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x7b: GOTO 0x55

0x7c: Stack[-2] = (int) 0
0x7d: PushEmpty(int)
0x7e: Call 0xc6

0x7f: Pop(0)
0x80: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x81: IF (Stack[-1] == 0) GOTO 0x95; Pop(1)

0x82: PushEmpty(string, int)
0x83: Stack[-1] = Stack[-4]
0x84: Call 0xb1

0x85: Pop(1)
0x86: Pop(1); Push((bool) Stack[-15] == Stack[-1])
0x87: IF (Stack[-1] == 0) GOTO 0x92; Pop(1)

0x88: PushEmpty(int, int)
0x89: Stack[-1] = Stack[-4]
0x8a: Call 0x103

0x8b: Stack[-3] = Stack[-2]
0x8c: Pop(2)
0x8d: Push((int) -1)
0x8e: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x8f: IF (Stack[-1] == 0) GOTO 0x91; Pop(1)

0x90: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x91: GOTO 0x95

0x92: Push((int) 1)
0x93: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x94: GOTO 0x7d

0x95: PushEmpty(int)
0x96: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x97: Call 0x1b5

0x98: Pop(1)
0x99: PushEmpty(int)
0x9a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x9b: Call 0x17d

0x9c: Pop(1)
0x9d: PushEmpty()
0x9e: Call 0x146

0x9f: Pop(0)
0xa0: Return(); Pop(12)

0xa1: PushEmpty()
0xa2: Push((int) 1)
0xa3: Pop(1); Push(Stack[-2] + Stack[-1]);
0xa4: Push((int) 10)
0xa5: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0xa6: IF (Stack[-1] == 0) GOTO 0xac; Pop(1)

0xa7: Push("slot0")
0xa8: Push((int) 1)
0xa9: Pop(1); Push(Stack[-3] + Stack[-1]);
0xaa: Stack[-4] = Stack[-2] + Stack[-1]; Pop(2);
0xab: Return(); Pop(0)

0xac: Push("slot")
0xad: Push((int) 1)
0xae: Pop(1); Push(Stack[-3] + Stack[-1]);
0xaf: Stack[-4] = Stack[-2] + Stack[-1]; Pop(2);
0xb0: Return(); Pop(0)

0xb1: PushEmpty()
0xb2: Push((int) 1)
0xb3: Pop(1); Push(Stack[-2] + Stack[-1]);
0xb4: Push((int) 10)
0xb5: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0xb6: IF (Stack[-1] == 0) GOTO 0xbc; Pop(1)

0xb7: Push("cslot0")
0xb8: Push((int) 1)
0xb9: Pop(1); Push(Stack[-3] + Stack[-1]);
0xba: Stack[-4] = Stack[-2] + Stack[-1]; Pop(2);
0xbb: Return(); Pop(0)

0xbc: Push("cslot")
0xbd: Push((int) 1)
0xbe: Pop(1); Push(Stack[-3] + Stack[-1]);
0xbf: Stack[-4] = Stack[-2] + Stack[-1]; Pop(2);
0xc0: Return(); Pop(0)

0xc1: PushEmpty(bool, bool)
0xc2: @ HasContainer(Stack[-1])
0xc3: Pop(0)
0xc4: Stack[-3] = Stack[-1]
0xc5: Return(); Pop(2)

0xc6: PushEmpty(object, int, object, int)
0xc7: PushEmpty(bool)
0xc8: Call 0xc1

0xc9: Pop(0)
0xca: Pop(1); Push((bool) Stack[-1] == 0)
0xcb: IF (Stack[-1] == 0) GOTO 0xce; Pop(1)

0xcc: Stack[-5] = (bool) 0
0xcd: Return(); Pop(4)

0xce: @ GetContainer(Stack[-2])
0xcf: Pop(0)
0xd0: Pop(0); Push((bool) Stack[-2] == 0)
0xd1: IF (Stack[-1] == 0) GOTO 0xd4; Pop(1)

0xd2: Stack[-5] = (int) 0
0xd3: Return(); Pop(4)

0xd4: @@ GetCapacity(Stack[-1])
0xd5: Pop(0)
0xd6: Stack[-5] = Stack[-1]
0xd7: Return(); Pop(4)

0xd8: Stack[-2] = 0
0xd9: PushEmpty(int, int)
0xda: Push("Money")
0xdb: @ GetInvItemByName(Stack[-2], Stack[-1])
0xdc: Pop(1)
0xdd: Stack[-3] = Stack[-1]
0xde: Return(); Pop(2)

0xdf: PushEmpty(object, object, object, int, int, int, bool, object, object, object, int, int, int, bool)
0xe0: Push("MoveToContainer")
0xe1: @ Trace(Stack[-1])
0xe2: Pop(1)
0xe3: @ GetPlayerContainer(Stack[-6])
0xe4: Pop(0)
0xe5: @ GetContainer(Stack[-7])
0xe6: Pop(0)
0xe7: @@ GetItemCount(Stack[-4], Stack[-16])
0xe8: Pop(0)
0xe9: Pop(0); Push((bool) Stack[-4] <= Stack[-15])
0xea: IF (Stack[-1] == 0) GOTO 0xed; Pop(1)

0xeb: Stack[-17] = (bool) 0
0xec: Return(); Pop(14)

0xed: @@ GetItemAmount(Stack[-3], Stack[-15], Stack[-16])
0xee: Pop(0)
0xef: @@ GetItem(Stack[-5], Stack[-15], Stack[-16])
0xf0: Pop(0)
0xf1: @@ GetItemID(Stack[-2])
0xf2: Pop(0)
0xf3: Push((int) 0)
0xf4: Push((int) 1)
0xf5: @@ AddItem(Stack[-3], Stack[-7], Stack[-2], Stack[-1])
0xf6: Pop(2)
0xf7: Pop(0); Push((bool) Stack[-1] == 0)
0xf8: IF (Stack[-1] == 0) GOTO 0xfb; Pop(1)

0xf9: Stack[-17] = (bool) 0
0xfa: Return(); Pop(14)

0xfb: Push((int) 1)
0xfc: @@ RemoveItem(Stack[-16], Stack[-1], Stack[-17])
0xfd: Pop(1)
0xfe: Stack[-17] = (bool) 1
0xff: Return(); Pop(14)

0x100: Stack[-5] = 0
0x101: Stack[-6] = 0
0x102: Stack[-7] = 0
0x103: PushEmpty(object, object, object, int, int, int, int, int, bool, bool, object, object, object, int, int, int, int, int, bool, bool)
0x104: Push("MoveToPlayerContainer")
0x105: @ Trace(Stack[-1])
0x106: Pop(1)
0x107: @ GetPlayerContainer(Stack[-9])
0x108: Pop(0)
0x109: @ GetContainer(Stack[-10])
0x10a: Pop(0)
0x10b: @@ GetItemCount(Stack[-7])
0x10c: Pop(0)
0x10d: Pop(0); Push((bool) Stack[-7] <= Stack[-21])
0x10e: IF (Stack[-1] == 0) GOTO 0x111; Pop(1)

0x10f: Stack[-22] = (int) -1
0x110: Return(); Pop(20)

0x111: @@ GetItemAmount(Stack[-6], Stack[-21])
0x112: Pop(0)
0x113: Push((int) 0)
0x114: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x115: IF (Stack[-1] == 0) GOTO 0x118; Pop(1)

0x116: Stack[-22] = (int) -1
0x117: Return(); Pop(20)

0x118: @@ GetItem(Stack[-8], Stack[-21])
0x119: Pop(0)
0x11a: @@ GetItemID(Stack[-5])
0x11b: Pop(0)
0x11c: Push("Category")
0x11d: @ GetInvItemProperty(Stack[-5], Stack[-6], Stack[-1])
0x11e: Pop(1)
0x11f: PushEmpty(int)
0x120: Call 0xd9

0x121: Pop(0)
0x122: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x123: IF (Stack[-1] == 0) GOTO 0x130; Pop(1)

0x124: @ GetPlayerMoneyCount(Stack[-3])
0x125: Pop(0)
0x126: Stack[-3] = Stack[-3] + Stack[-6]; Pop(0);
0x127: @ SetPlayerMoneyCount(Stack[-3])
0x128: Pop(0)
0x129: @@ RemoveItem(Stack[-21], Stack[-6])
0x12a: Pop(0)
0x12b: PushEmpty()
0x12c: Call 0x13f

0x12d: Pop(0)
0x12e: Stack[-22] = (int) -1
0x12f: Return(); Pop(20)

0x130: Push((int) 1)
0x131: @@ AddItem(Stack[-2], Stack[-9], Stack[-5], Stack[-1])
0x132: Pop(1)
0x133: Pop(0); Push((bool) Stack[-1] == 0)
0x134: IF (Stack[-1] == 0) GOTO 0x137; Pop(1)

0x135: Stack[-22] = (int) -1
0x136: Return(); Pop(20)

0x137: Push((int) 1)
0x138: @@ RemoveItem(Stack[-22], Stack[-1])
0x139: Pop(1)
0x13a: Stack[-22] = Stack[-4]
0x13b: Return(); Pop(20)

0x13c: Stack[-8] = 0
0x13d: Stack[-9] = 0
0x13e: Stack[-10] = 0
0x13f: PushEmpty(int, int)
0x140: @ GetPlayerMoneyCount(Stack[-1])
0x141: Pop(0)
0x142: Push("money")
0x143: @ SendMessage(Stack[-2], Stack[-1])
0x144: Pop(1)
0x145: Return(); Pop(2)

0x146: PushEmpty(object, int, int, int, object, int, int, object, int, int, int, object, int, int)
0x147: PushEmpty(bool)
0x148: Call 0xc1

0x149: Pop(0)
0x14a: Pop(1); Push((bool) Stack[-1] == 0)
0x14b: IF (Stack[-1] == 0) GOTO 0x14d; Pop(1)

0x14c: Return(); Pop(14)

0x14d: @ GetContainer(Stack[-7])
0x14e: Pop(0)
0x14f: @@ GetItemCount(Stack[-6])
0x150: Pop(0)
0x151: PushEmpty(int)
0x152: Call 0xc6

0x153: Stack[-6] = Stack[-1]
0x154: Pop(1)
0x155: Stack[-4] = (int) 0
0x156: Pop(0); Push((bool) Stack[-4] < Stack[-5])
0x157: IF (Stack[-1] == 0) GOTO 0x17b; Pop(1)

0x158: Pop(0); Push((bool) Stack[-4] < Stack[-6])
0x159: IF (Stack[-1] == 0) GOTO 0x171; Pop(1)

0x15a: @@ GetItem(Stack[-3], Stack[-4])
0x15b: Pop(0)
0x15c: @@ GetItemID(Stack[-2])
0x15d: Pop(0)
0x15e: @@ GetItemAmount(Stack[-1], Stack[-4])
0x15f: Pop(0)
0x160: Push((int) 0)
0x161: PushEmpty(string, int)
0x162: Stack[-1] = Stack[-7]
0x163: Call 0xb1

0x164: Pop(1)
0x165: @ SendMessage(Stack[-2], Stack[-1], Stack[-5])
0x166: Pop(2)
0x167: Push((int) 65536)
0x168: Pop(1); Push(Stack[-2] | Stack[-1]);
0x169: PushEmpty(string, int)
0x16a: Stack[-1] = Stack[-7]
0x16b: Call 0xb1

0x16c: Pop(1)
0x16d: @ SendMessage(Stack[-2], Stack[-1])
0x16e: Pop(2)
0x16f: Stack[-3] = 0
0x170: GOTO 0x178

0x171: Push((int) 32768)
0x172: PushEmpty(string, int)
0x173: Stack[-1] = Stack[-7]
0x174: Call 0xb1

0x175: Pop(1)
0x176: @ SendMessage(Stack[-2], Stack[-1])
0x177: Pop(2)
0x178: Push((int) 1)
0x179: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x17a: GOTO 0x156

0x17b: Return(); Pop(14)

0x17c: Stack[-7] = 0
0x17d: PushEmpty(object, int, int, object, int, bool, object, int, int, object, int, bool)
0x17e: @ GetPlayerContainer(Stack[-6])
0x17f: Pop(0)
0x180: @@ GetItemCount(Stack[-5], Stack[-13])
0x181: Pop(0)
0x182: Stack[-4] = (int) 0
0x183: Push((int) 12)
0x184: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x185: IF (Stack[-1] == 0) GOTO 0x1b3; Pop(1)

0x186: Pop(0); Push((bool) Stack[-4] < Stack[-5])
0x187: IF (Stack[-1] == 0) GOTO 0x1a9; Pop(1)

0x188: @@ GetItem(Stack[-3], Stack[-4], Stack[-13])
0x189: Pop(0)
0x18a: @@ GetItemAmount(Stack[-2], Stack[-4], Stack[-13])
0x18b: Pop(0)
0x18c: @@ IsItemSelected(Stack[-1], Stack[-4], Stack[-13])
0x18d: Pop(0)
0x18e: Push(Stack[-1])
0x18f: IF (Stack[-1] == 0) GOTO 0x198; Pop(1)

0x190: Push((int) 16384)
0x191: PushEmpty(string, int)
0x192: Stack[-1] = Stack[-7]
0x193: Call 0xa1

0x194: Pop(1)
0x195: @ SendMessage(Stack[-2], Stack[-1], Stack[-5])
0x196: Pop(2)
0x197: GOTO 0x19f

0x198: Push((int) 0)
0x199: PushEmpty(string, int)
0x19a: Stack[-1] = Stack[-7]
0x19b: Call 0xa1

0x19c: Pop(1)
0x19d: @ SendMessage(Stack[-2], Stack[-1], Stack[-5])
0x19e: Pop(2)
0x19f: Push((int) 65536)
0x1a0: Pop(1); Push(Stack[-3] | Stack[-1]);
0x1a1: PushEmpty(string, int)
0x1a2: Stack[-1] = Stack[-7]
0x1a3: Call 0xa1

0x1a4: Pop(1)
0x1a5: @ SendMessage(Stack[-2], Stack[-1])
0x1a6: Pop(2)
0x1a7: Stack[-3] = 0
0x1a8: GOTO 0x1b0

0x1a9: Push((int) 32768)
0x1aa: PushEmpty(string, int)
0x1ab: Stack[-1] = Stack[-7]
0x1ac: Call 0xa1

0x1ad: Pop(1)
0x1ae: @ SendMessage(Stack[-2], Stack[-1])
0x1af: Pop(2)
0x1b0: Push((int) 1)
0x1b1: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x1b2: GOTO 0x183

0x1b3: Return(); Pop(12)

0x1b4: Stack[-6] = 0
0x1b5: PushEmpty()
0x1b6: Push((int) 0)
0x1b7: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x1b8: IF (Stack[-1] == 0) GOTO 0x1be; Pop(1)

0x1b9: Push((int) 0)
0x1ba: Push("button_weapon")
0x1bb: @ SendMessage(Stack[-2], Stack[-1])
0x1bc: Pop(2)
0x1bd: GOTO 0x1c2

0x1be: Push((int) 1)
0x1bf: Push("button_weapon")
0x1c0: @ SendMessage(Stack[-2], Stack[-1])
0x1c1: Pop(2)
0x1c2: Push((int) 1)
0x1c3: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x1c4: IF (Stack[-1] == 0) GOTO 0x1ca; Pop(1)

0x1c5: Push((int) 0)
0x1c6: Push("button_clothes")
0x1c7: @ SendMessage(Stack[-2], Stack[-1])
0x1c8: Pop(2)
0x1c9: GOTO 0x1ce

0x1ca: Push((int) 1)
0x1cb: Push("button_clothes")
0x1cc: @ SendMessage(Stack[-2], Stack[-1])
0x1cd: Pop(2)
0x1ce: Push((int) 2)
0x1cf: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x1d0: IF (Stack[-1] == 0) GOTO 0x1d6; Pop(1)

0x1d1: Push((int) 0)
0x1d2: Push("button_medcine")
0x1d3: @ SendMessage(Stack[-2], Stack[-1])
0x1d4: Pop(2)
0x1d5: GOTO 0x1da

0x1d6: Push((int) 1)
0x1d7: Push("button_medcine")
0x1d8: @ SendMessage(Stack[-2], Stack[-1])
0x1d9: Pop(2)
0x1da: Push((int) 3)
0x1db: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x1dc: IF (Stack[-1] == 0) GOTO 0x1e2; Pop(1)

0x1dd: Push((int) 0)
0x1de: Push("button_food")
0x1df: @ SendMessage(Stack[-2], Stack[-1])
0x1e0: Pop(2)
0x1e1: GOTO 0x1e6

0x1e2: Push((int) 1)
0x1e3: Push("button_food")
0x1e4: @ SendMessage(Stack[-2], Stack[-1])
0x1e5: Pop(2)
0x1e6: Push((int) 4)
0x1e7: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x1e8: IF (Stack[-1] == 0) GOTO 0x1ee; Pop(1)

0x1e9: Push((int) 0)
0x1ea: Push("button_other")
0x1eb: @ SendMessage(Stack[-2], Stack[-1])
0x1ec: Pop(2)
0x1ed: GOTO 0x1f2

0x1ee: Push((int) 1)
0x1ef: Push("button_other")
0x1f0: @ SendMessage(Stack[-2], Stack[-1])
0x1f1: Pop(2)
0x1f2: Return(); Pop(0)

0x1f3: PushEmpty(object, int, object, int, int, bool, bool, int, bool, int, int, bool, object, int, bool, int, bool, bool, object, int, object, int, int, bool, bool, int, bool, int, int, bool, object, int, bool, int, bool, bool)
0x1f4: @ GetPlayerContainer(Stack[-18])
0x1f5: Pop(0)
0x1f6: @@ GetItemCount(Stack[-17], Stack[-38])
0x1f7: Pop(0)
0x1f8: Pop(0); Push((bool) Stack[-37] >= Stack[-17])
0x1f9: IF (Stack[-1] == 0) GOTO 0x1fb; Pop(1)

0x1fa: Return(); Pop(36)

0x1fb: @@ GetItem(Stack[-16], Stack[-37], Stack[-38])
0x1fc: Pop(0)
0x1fd: @@ GetItemID(Stack[-15])
0x1fe: Pop(0)
0x1ff: @@ GetItemAmount(Stack[-14], Stack[-37], Stack[-38])
0x200: Pop(0)
0x201: @@ IsItemSelected(Stack[-13], Stack[-37], Stack[-38])
0x202: Pop(0)
0x203: Push((int) 0)
0x204: Pop(1); Push((bool) Stack[-39] == Stack[-1])
0x205: IF (Stack[-1] == 0) GOTO 0x224; Pop(1)

0x206: Push("Weapon")
0x207: @ HasInvItemProperty(Stack[-13], Stack[-16], Stack[-1])
0x208: Pop(1)
0x209: Pop(0); Push((bool) Stack[-12] == 0)
0x20a: IF (Stack[-1] == 0) GOTO 0x20c; Pop(1)

0x20b: Return(); Pop(36)

0x20c: Push(Stack[-13])
0x20d: IF (Stack[-1] == 0) GOTO 0x215; Pop(1)

0x20e: Push((bool) 0)
0x20f: @@ SelectItem(Stack[-38], Stack[-1], Stack[-39])
0x210: Pop(1)
0x211: Push((int) -1)
0x212: @ SetPlayerHandsItem(Stack[-1])
0x213: Pop(1)
0x214: GOTO 0x223

0x215: @ SetPlayerHandsItem(Stack[-15])
0x216: Pop(0)
0x217: Stack[-11] = (int) 0
0x218: Pop(0); Push((bool) Stack[-11] < Stack[-17])
0x219: IF (Stack[-1] == 0) GOTO 0x220; Pop(1)

0x21a: Push((bool) 0)
0x21b: @@ SelectItem(Stack[-12], Stack[-1], Stack[-39])
0x21c: Pop(1)
0x21d: Push((int) 1)
0x21e: Stack[-12] = Stack[-12] + Stack[-1]; Pop(1);
0x21f: GOTO 0x218

0x220: Push((bool) 1)
0x221: @@ SelectItem(Stack[-38], Stack[-1], Stack[-39])
0x222: Pop(1)
0x223: GOTO 0x268

0x224: Push((int) 1)
0x225: Pop(1); Push((bool) Stack[-39] == Stack[-1])
0x226: IF (Stack[-1] == 0) GOTO 0x259; Pop(1)

0x227: Push("Group")
0x228: @ HasInvItemProperty(Stack[-11], Stack[-16], Stack[-1])
0x229: Pop(1)
0x22a: Pop(0); Push((bool) Stack[-10] == 0)
0x22b: IF (Stack[-1] == 0) GOTO 0x22d; Pop(1)

0x22c: Return(); Pop(36)

0x22d: Push("Group")
0x22e: @ GetInvItemProperty(Stack[-10], Stack[-16], Stack[-1])
0x22f: Pop(1)
0x230: Push(Stack[-13])
0x231: IF (Stack[-1] == 0) GOTO 0x236; Pop(1)

0x232: Push((bool) 0)
0x233: @@ SelectItem(Stack[-38], Stack[-1], Stack[-39])
0x234: Pop(1)
0x235: GOTO 0x258

0x236: Stack[-8] = (int) 0
0x237: Pop(0); Push((bool) Stack[-8] < Stack[-17])
0x238: IF (Stack[-1] == 0) GOTO 0x255; Pop(1)

0x239: @@ IsItemSelected(Stack[-7], Stack[-8], Stack[-38])
0x23a: Pop(0)
0x23b: Pop(0); Push((bool) Stack[-7] == 0)
0x23c: IF (Stack[-1] == 0) GOTO 0x23e; Pop(1)

0x23d: GOTO 0x252

0x23e: @@ GetItem(Stack[-6], Stack[-8], Stack[-38])
0x23f: Pop(0)
0x240: @@ GetItemID(Stack[-5])
0x241: Pop(0)
0x242: Push("Group")
0x243: @ HasInvItemProperty(Stack[-5], Stack[-6], Stack[-1])
0x244: Pop(1)
0x245: Pop(0); Push((bool) Stack[-4] == 0)
0x246: IF (Stack[-1] == 0) GOTO 0x248; Pop(1)

0x247: GOTO 0x252

0x248: Push("Group")
0x249: @ GetInvItemProperty(Stack[-4], Stack[-6], Stack[-1])
0x24a: Pop(1)
0x24b: Pop(0); Push((bool) Stack[-3] == Stack[-9])
0x24c: IF (Stack[-1] == 0) GOTO 0x251; Pop(1)

0x24d: Push((bool) 0)
0x24e: @@ SelectItem(Stack[-9], Stack[-1], Stack[-39])
0x24f: Pop(1)
0x250: GOTO 0x255

0x251: Stack[-6] = 0
0x252: Push((int) 1)
0x253: Stack[-9] = Stack[-9] + Stack[-1]; Pop(1);
0x254: GOTO 0x237

0x255: Push((bool) 1)
0x256: @@ SelectItem(Stack[-38], Stack[-1], Stack[-39])
0x257: Pop(1)
0x258: GOTO 0x268

0x259: @ UseItem(Stack[-37], Stack[-38], Stack[-2])
0x25a: Pop(0)
0x25b: Push(Stack[-2])
0x25c: IF (Stack[-1] == 0) GOTO 0x268; Pop(1)

0x25d: Push((int) -1)
0x25e: Stack[-15] = Stack[-15] + Stack[-1]; Pop(1);
0x25f: Push((int) 0)
0x260: Pop(1); Push((bool) Stack[-15] == Stack[-1])
0x261: IF (Stack[-1] == 0) GOTO 0x266; Pop(1)

0x262: Push((int) 1)
0x263: @@ RemoveItem(Stack[-38], Stack[-1], Stack[-39])
0x264: Pop(1)
0x265: GOTO 0x268

0x266: @@ SetItemAmount(Stack[-14], Stack[-37], Stack[-38])
0x267: Pop(0)
0x268: PushEmpty(int)
0x269: Stack[-1] = Stack[-39]
0x26a: Call 0x17d

0x26b: Pop(1)
0x26c: Return(); Pop(36)

0x26d: Stack[-16] = 0
0x26e: Stack[-18] = 0
