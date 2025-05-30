GlobalVarCount = 0

Strings:
	inventory_base.xml
	GetItemCount
	GetItem
	GetItemID
	GetItemAmount
	IsItemSelected
	Weapon
	SelectItem
	Group
	RemoveItem
	SetItemAmount
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
	money
	GetProperty
	AddItem
	slot0
	slot

Import:
	CreateWindow (3 args)
	GetPlayerContainer (1 args)
	HasInvItemProperty (3 args)
	SetPlayerHandsItem (1 args)
	GetInvItemProperty (3 args)
	UseItem (3 args)
	CreateStringVector (1 args)
	SendMessage (3 args)
	SetCursor (1 args)
	ShowCursor (0 args)
	CaptureKeyboard (0 args)
	SetOwnerDraw (1 args)
	SetNeedUpdate (1 args)
	ProcessEvents (0 args)
	SendMessage (2 args)
	DestroyWindow (0 args)
	GetVariable (2 args)
	GetContainer (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (int, object) Params = 0
		EVENT_100 Op = 0xef Vars = (int)
		EVENT_102 Op = 0xf3 Vars = (int)
		EVENT_101 Op = 0xf9 Vars = (int)
		EVENT_1 Op = 0x1b0 Vars = (float)
		EVENT_200 Op = 0x1bc Vars = (int, string, object)


0x0: Push("inventory_base.xml")
0x1: Push((bool) 0)
0x2: @ CreateWindow(Stack[-2], Stack[-1], Stack[-1])
0x3: Pop(2)
0x4: PushEmpty(int)
0x5: Stack[-1] = (int) 0
0x6: Call2 0x9d

0x7: Pop(1)
0x8: Return(); Pop(0)

0x9: PushEmpty(object, object)
0xa: @ GetPlayerContainer(Stack[-1])
0xb: Pop(0)
0xc: Stack[-3] = Stack[-1]
0xd: Return(); Pop(2)

0xe: Stack[-1] = 0
0xf: PushEmpty()
0x10: Stack[-4] = (bool) 0
0x11: Return(); Pop(0)

0x12: Return(); Pop(0)

0x13: Return(); Pop(0)

0x14: PushEmpty()
0x15: Push(Stack[-1])
0x16: IF (Stack[-1] == 0) GOTO 0x1c; Pop(1)

0x17: PushEmpty(int)
0x18: Stack[-1] = Stack[-3]
0x19: Call2 0x23

0x1a: Pop(1)
0x1b: GOTO 0x21

0x1c: PushEmpty(bool, int, int)
0x1d: Stack[-2] = Stack[0 + Tasks[-1].StackPointer]
0x1e: Stack[-1] = Stack[-5]
0x1f: Call2 0x298

0x20: Pop(3)
0x21: Stack[-3] = (bool) 1
0x22: Return(); Pop(0)

0x23: PushEmpty(object, int, object, int, int, bool, bool, int, bool, int, int, bool, object, int, bool, int, bool, bool, object, int, object, int, int, bool, bool, int, bool, int, int, bool, object, int, bool, int, bool, bool)
0x24: PushEmpty(object)
0x25: Call2 0x9

0x26: Stack[-19] = Stack[-1]
0x27: Pop(1)
0x28: @@ GetItemCount(Stack[-17], Stack[-0])
0x29: Pop(0)
0x2a: Pop(0); Push((bool) Stack[-37] >= Stack[-17])
0x2b: IF (Stack[-1] == 0) GOTO 0x2d; Pop(1)

0x2c: Return(); Pop(36)

0x2d: @@ GetItem(Stack[-16], Stack[-37], Stack[-0])
0x2e: Pop(0)
0x2f: @@ GetItemID(Stack[-15])
0x30: Pop(0)
0x31: @@ GetItemAmount(Stack[-14], Stack[-37], Stack[-0])
0x32: Pop(0)
0x33: @@ IsItemSelected(Stack[-13], Stack[-37], Stack[-0])
0x34: Pop(0)
0x35: Push((int) 0)
0x36: Pop(1); Push((bool) Stack[0 + Tasks[-1].StackPointer] == Stack[-1])
0x37: IF (Stack[-1] == 0) GOTO 0x56; Pop(1)

0x38: Push("Weapon")
0x39: @ HasInvItemProperty(Stack[-13], Stack[-16], Stack[-1])
0x3a: Pop(1)
0x3b: Pop(0); Push((bool) Stack[-12] == 0)
0x3c: IF (Stack[-1] == 0) GOTO 0x3e; Pop(1)

0x3d: Return(); Pop(36)

0x3e: Push(Stack[-13])
0x3f: IF (Stack[-1] == 0) GOTO 0x47; Pop(1)

0x40: Push((bool) 0)
0x41: @@ SelectItem(Stack[-38], Stack[-1], Stack[-0])
0x42: Pop(1)
0x43: Push((int) -1)
0x44: @ SetPlayerHandsItem(Stack[-1])
0x45: Pop(1)
0x46: GOTO 0x55

0x47: @ SetPlayerHandsItem(Stack[-15])
0x48: Pop(0)
0x49: Stack[-11] = (int) 0
0x4a: Pop(0); Push((bool) Stack[-11] < Stack[-17])
0x4b: IF (Stack[-1] == 0) GOTO 0x52; Pop(1)

0x4c: Push((bool) 0)
0x4d: @@ SelectItem(Stack[-12], Stack[-1], Stack[-0])
0x4e: Pop(1)
0x4f: Push((int) 1)
0x50: Stack[-12] = Stack[-12] + Stack[-1]; Pop(1);
0x51: GOTO 0x4a

0x52: Push((bool) 1)
0x53: @@ SelectItem(Stack[-38], Stack[-1], Stack[-0])
0x54: Pop(1)
0x55: GOTO 0x9a

0x56: Push((int) 1)
0x57: Pop(1); Push((bool) Stack[0 + Tasks[-1].StackPointer] == Stack[-1])
0x58: IF (Stack[-1] == 0) GOTO 0x8b; Pop(1)

0x59: Push("Group")
0x5a: @ HasInvItemProperty(Stack[-11], Stack[-16], Stack[-1])
0x5b: Pop(1)
0x5c: Pop(0); Push((bool) Stack[-10] == 0)
0x5d: IF (Stack[-1] == 0) GOTO 0x5f; Pop(1)

0x5e: Return(); Pop(36)

0x5f: Push("Group")
0x60: @ GetInvItemProperty(Stack[-10], Stack[-16], Stack[-1])
0x61: Pop(1)
0x62: Push(Stack[-13])
0x63: IF (Stack[-1] == 0) GOTO 0x68; Pop(1)

0x64: Push((bool) 0)
0x65: @@ SelectItem(Stack[-38], Stack[-1], Stack[-0])
0x66: Pop(1)
0x67: GOTO 0x8a

0x68: Stack[-8] = (int) 0
0x69: Pop(0); Push((bool) Stack[-8] < Stack[-17])
0x6a: IF (Stack[-1] == 0) GOTO 0x87; Pop(1)

0x6b: @@ IsItemSelected(Stack[-7], Stack[-8], Stack[-0])
0x6c: Pop(0)
0x6d: Pop(0); Push((bool) Stack[-7] == 0)
0x6e: IF (Stack[-1] == 0) GOTO 0x70; Pop(1)

0x6f: GOTO 0x84

0x70: @@ GetItem(Stack[-6], Stack[-8], Stack[-0])
0x71: Pop(0)
0x72: @@ GetItemID(Stack[-5])
0x73: Pop(0)
0x74: Push("Group")
0x75: @ HasInvItemProperty(Stack[-5], Stack[-6], Stack[-1])
0x76: Pop(1)
0x77: Pop(0); Push((bool) Stack[-4] == 0)
0x78: IF (Stack[-1] == 0) GOTO 0x7a; Pop(1)

0x79: GOTO 0x84

0x7a: Push("Group")
0x7b: @ GetInvItemProperty(Stack[-4], Stack[-6], Stack[-1])
0x7c: Pop(1)
0x7d: Pop(0); Push((bool) Stack[-3] == Stack[-9])
0x7e: IF (Stack[-1] == 0) GOTO 0x83; Pop(1)

0x7f: Push((bool) 0)
0x80: @@ SelectItem(Stack[-9], Stack[-1], Stack[-0])
0x81: Pop(1)
0x82: GOTO 0x87

0x83: Stack[-6] = 0
0x84: Push((int) 1)
0x85: Stack[-9] = Stack[-9] + Stack[-1]; Pop(1);
0x86: GOTO 0x69

0x87: Push((bool) 1)
0x88: @@ SelectItem(Stack[-38], Stack[-1], Stack[-0])
0x89: Pop(1)
0x8a: GOTO 0x9a

0x8b: @ UseItem(Stack[-37], Stack[-0], Stack[-2])
0x8c: Pop(0)
0x8d: Push(Stack[-2])
0x8e: IF (Stack[-1] == 0) GOTO 0x9a; Pop(1)

0x8f: Push((int) -1)
0x90: Stack[-15] = Stack[-15] + Stack[-1]; Pop(1);
0x91: Push((int) 0)
0x92: Pop(1); Push((bool) Stack[-15] == Stack[-1])
0x93: IF (Stack[-1] == 0) GOTO 0x98; Pop(1)

0x94: Push((int) 1)
0x95: @@ RemoveItem(Stack[-38], Stack[-1], Stack[-0])
0x96: Pop(1)
0x97: GOTO 0x9a

0x98: @@ SetItemAmount(Stack[-14], Stack[-37], Stack[-0])
0x99: Pop(0)
0x9a: Return(); Pop(36)

0x9b: Stack[-16] = 0
0x9c: Stack[-18] = 0
0x9d: PushEmpty(int, object, int, object)
0x9e: Stack[0 + Tasks[-1].StackPointer] = (int)-1
0x9f: PushEmpty(int)
0xa0: Stack[-1] = Stack[-6]
0xa1: Call2 0x23a

0xa2: Pop(1)
0xa3: PushEmpty(int)
0xa4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa5: Call2 0x2ca

0xa6: Pop(1)
0xa7: PushEmpty()
0xa8: Call2 0x253

0xa9: Pop(0)
0xaa: Stack[-2] = (int) 0
0xab: Push((int) 12)
0xac: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0xad: IF (Stack[-1] == 0) GOTO 0xd1; Pop(1)

0xae: @ CreateStringVector(Stack[-1])
0xaf: Pop(0)
0xb0: PushEmpty(string, int)
0xb1: Push((int) 12)
0xb2: Pop(1); Push(Stack[-5] + Stack[-1]);
0xb3: Push((int) 1)
0xb4: Pop(2); Push(Stack[-2] - Stack[-1]);
0xb5: Push((int) 12)
0xb6: Stack[-3] = Stack[-2] % Stack[-1]; Pop(2);
0xb7: Call2 0x321

0xb8: Pop(1)
0xb9: @@ add(Stack[-1])
0xba: Pop(1)
0xbb: PushEmpty(string, int)
0xbc: Push((int) 12)
0xbd: Pop(1); Push(Stack[-5] + Stack[-1]);
0xbe: Push((int) 1)
0xbf: Pop(2); Push(Stack[-2] + Stack[-1]);
0xc0: Push((int) 12)
0xc1: Stack[-3] = Stack[-2] % Stack[-1]; Pop(2);
0xc2: Call2 0x321

0xc3: Pop(1)
0xc4: @@ add(Stack[-1])
0xc5: Pop(1)
0xc6: Push((int) -1)
0xc7: PushEmpty(string, int)
0xc8: Stack[-1] = Stack[-5]
0xc9: Call2 0x321

0xca: Pop(1)
0xcb: @ SendMessage(Stack[-2], Stack[-1], Stack[-3])
0xcc: Pop(2)
0xcd: Stack[-1] = 0
0xce: Push((int) 1)
0xcf: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0xd0: GOTO 0xab

0xd1: PushEmpty()
0xd2: Call2 0xe7

0xd3: Pop(0)
0xd4: Push("default")
0xd5: @ SetCursor(Stack[-1])
0xd6: Pop(1)
0xd7: @ ShowCursor()
0xd8: Pop(0)
0xd9: @ CaptureKeyboard()
0xda: Pop(0)
0xdb: Push((bool) 0)
0xdc: @ SetOwnerDraw(Stack[-1])
0xdd: Pop(1)
0xde: Push((bool) 1)
0xdf: @ SetNeedUpdate(Stack[-1])
0xe0: Pop(1)
0xe1: PushEmpty()
0xe2: Call2 0x13

0xe3: Pop(0)
0xe4: @ ProcessEvents()
0xe5: Pop(0)
0xe6: Return(); Pop(4)

0xe7: Push((int) -6)
0xe8: PushEmpty(string, int)
0xe9: Stack[-1] = (int) 0
0xea: Call2 0x321

0xeb: Pop(1)
0xec: @ SendMessage(Stack[-2], Stack[-1])
0xed: Pop(2)
0xee: Return(); Pop(0)

0xef: PushEmpty()
0xf0: @ DestroyWindow()
0xf1: Pop(0)
0xf2: Return(); Pop(0)

0xf3: PushEmpty()
0xf4: PushEmpty(int)
0xf5: Stack[-1] = Stack[-2]
0xf6: Call2 0x178

0xf7: Pop(1)
0xf8: Return(); Pop(0)

0xf9: PushEmpty()
0xfa: Push((int) 266)
0xfb: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xfc: IF (Stack[-1] == 0) GOTO 0x125; Pop(1)

0xfd: Push((int) 0)
0xfe: Pop(1); Push((bool) Stack[0 + Tasks[-1].StackPointer] == Stack[-1])
0xff: IF (Stack[-1] == 0) GOTO 0x105; Pop(1)

0x100: PushEmpty(int)
0x101: Stack[-1] = (int) 1
0x102: Call2 0x23a

0x103: Pop(1)
0x104: GOTO 0x124

0x105: Push((int) 1)
0x106: Pop(1); Push((bool) Stack[0 + Tasks[-1].StackPointer] == Stack[-1])
0x107: IF (Stack[-1] == 0) GOTO 0x10d; Pop(1)

0x108: PushEmpty(int)
0x109: Stack[-1] = (int) 2
0x10a: Call2 0x23a

0x10b: Pop(1)
0x10c: GOTO 0x124

0x10d: Push((int) 2)
0x10e: Pop(1); Push((bool) Stack[0 + Tasks[-1].StackPointer] == Stack[-1])
0x10f: IF (Stack[-1] == 0) GOTO 0x115; Pop(1)

0x110: PushEmpty(int)
0x111: Stack[-1] = (int) 3
0x112: Call2 0x23a

0x113: Pop(1)
0x114: GOTO 0x124

0x115: Push((int) 3)
0x116: Pop(1); Push((bool) Stack[0 + Tasks[-1].StackPointer] == Stack[-1])
0x117: IF (Stack[-1] == 0) GOTO 0x11d; Pop(1)

0x118: PushEmpty(int)
0x119: Stack[-1] = (int) 4
0x11a: Call2 0x23a

0x11b: Pop(1)
0x11c: GOTO 0x124

0x11d: Push((int) 4)
0x11e: Pop(1); Push((bool) Stack[0 + Tasks[-1].StackPointer] == Stack[-1])
0x11f: IF (Stack[-1] == 0) GOTO 0x124; Pop(1)

0x120: PushEmpty(int)
0x121: Stack[-1] = (int) 0
0x122: Call2 0x23a

0x123: Pop(1)
0x124: GOTO 0x14f

0x125: Push((int) 265)
0x126: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x127: IF (Stack[-1] == 0) GOTO 0x14f; Pop(1)

0x128: Push((int) 0)
0x129: Pop(1); Push((bool) Stack[0 + Tasks[-1].StackPointer] == Stack[-1])
0x12a: IF (Stack[-1] == 0) GOTO 0x130; Pop(1)

0x12b: PushEmpty(int)
0x12c: Stack[-1] = (int) 4
0x12d: Call2 0x23a

0x12e: Pop(1)
0x12f: GOTO 0x14f

0x130: Push((int) 1)
0x131: Pop(1); Push((bool) Stack[0 + Tasks[-1].StackPointer] == Stack[-1])
0x132: IF (Stack[-1] == 0) GOTO 0x138; Pop(1)

0x133: PushEmpty(int)
0x134: Stack[-1] = (int) 0
0x135: Call2 0x23a

0x136: Pop(1)
0x137: GOTO 0x14f

0x138: Push((int) 2)
0x139: Pop(1); Push((bool) Stack[0 + Tasks[-1].StackPointer] == Stack[-1])
0x13a: IF (Stack[-1] == 0) GOTO 0x140; Pop(1)

0x13b: PushEmpty(int)
0x13c: Stack[-1] = (int) 1
0x13d: Call2 0x23a

0x13e: Pop(1)
0x13f: GOTO 0x14f

0x140: Push((int) 3)
0x141: Pop(1); Push((bool) Stack[0 + Tasks[-1].StackPointer] == Stack[-1])
0x142: IF (Stack[-1] == 0) GOTO 0x148; Pop(1)

0x143: PushEmpty(int)
0x144: Stack[-1] = (int) 2
0x145: Call2 0x23a

0x146: Pop(1)
0x147: GOTO 0x14f

0x148: Push((int) 4)
0x149: Pop(1); Push((bool) Stack[0 + Tasks[-1].StackPointer] == Stack[-1])
0x14a: IF (Stack[-1] == 0) GOTO 0x14f; Pop(1)

0x14b: PushEmpty(int)
0x14c: Stack[-1] = (int) 3
0x14d: Call2 0x23a

0x14e: Pop(1)
0x14f: PushEmpty(int)
0x150: Stack[-1] = Stack[-2]
0x151: Call2 0x154

0x152: Pop(1)
0x153: Return(); Pop(0)

0x154: PushEmpty(int, int, int, int)
0x155: Push((int) 269)
0x156: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x157: IF (Stack[-1] == 0) GOTO 0x166; Pop(1)

0x158: Stack[-2] = (int) 0
0x159: Push((int) 12)
0x15a: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x15b: IF (Stack[-1] == 0) GOTO 0x166; Pop(1)

0x15c: Push((int) -2)
0x15d: PushEmpty(string, int)
0x15e: Stack[-1] = Stack[-5]
0x15f: Call2 0x321

0x160: Pop(1)
0x161: @ SendMessage(Stack[-2], Stack[-1])
0x162: Pop(2)
0x163: Push((int) 1)
0x164: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x165: GOTO 0x159

0x166: Push((int) 270)
0x167: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x168: IF (Stack[-1] == 0) GOTO 0x177; Pop(1)

0x169: Stack[-1] = (int) 0
0x16a: Push((int) 12)
0x16b: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x16c: IF (Stack[-1] == 0) GOTO 0x177; Pop(1)

0x16d: Push((int) -3)
0x16e: PushEmpty(string, int)
0x16f: Stack[-1] = Stack[-4]
0x170: Call2 0x321

0x171: Pop(1)
0x172: @ SendMessage(Stack[-2], Stack[-1])
0x173: Pop(2)
0x174: Push((int) 1)
0x175: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x176: GOTO 0x16a

0x177: Return(); Pop(4)

0x178: PushEmpty(int, int, int, int)
0x179: Push((int) 273)
0x17a: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x17b: IF (Stack[-1] == 0) GOTO 0x18a; Pop(1)

0x17c: Stack[-2] = (int) 0
0x17d: Push((int) 12)
0x17e: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x17f: IF (Stack[-1] == 0) GOTO 0x18a; Pop(1)

0x180: Push((int) -2)
0x181: PushEmpty(string, int)
0x182: Stack[-1] = Stack[-5]
0x183: Call2 0x321

0x184: Pop(1)
0x185: @ SendMessage(Stack[-2], Stack[-1])
0x186: Pop(2)
0x187: Push((int) 1)
0x188: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x189: GOTO 0x17d

0x18a: Push((int) 271)
0x18b: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x18c: IF (Stack[-1] == 0) GOTO 0x19b; Pop(1)

0x18d: Stack[-1] = (int) 0
0x18e: Push((int) 12)
0x18f: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x190: IF (Stack[-1] == 0) GOTO 0x19b; Pop(1)

0x191: Push((int) -3)
0x192: PushEmpty(string, int)
0x193: Stack[-1] = Stack[-4]
0x194: Call2 0x321

0x195: Pop(1)
0x196: @ SendMessage(Stack[-2], Stack[-1])
0x197: Pop(2)
0x198: Push((int) 1)
0x199: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x19a: GOTO 0x18e

0x19b: Return(); Pop(4)

0x19c: PushEmpty()
0x19d: Stack[-2] = (bool) 0
0x19e: Return(); Pop(0)

0x19f: PushEmpty(bool, bool)
0x1a0: PushEmpty(object)
0x1a1: Call2 0x9

0x1a2: Pop(0)
0x1a3: PushEmpty(object)
0x1a4: Call2 0x9

0x1a5: Pop(1)
0x1a6: PushEmpty(object)
0x1a7: Call2 0x9

0x1a8: Pop(1)
0x1a9: PushEmpty(object)
0x1aa: Call2 0x9

0x1ab: Pop(1)
0x1ac: @@ IsItemSelected(Stack[-2], Stack[-5], Stack[-4])
0x1ad: Pop(1)
0x1ae: Stack[-5] = Stack[-1]
0x1af: Return(); Pop(2)

0x1b0: PushEmpty()
0x1b1: PushEmpty(int)
0x1b2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1b3: Call2 0x2ca

0x1b4: Pop(1)
0x1b5: PushEmpty()
0x1b6: Call2 0x253

0x1b7: Pop(0)
0x1b8: PushEmpty()
0x1b9: Call2 0x12

0x1ba: Pop(0)
0x1bb: Return(); Pop(0)

0x1bc: PushEmpty(bool, int, int, object, int, object, bool, int, int, object, int, object)
0x1bd: Stack[-6] = (bool) 0
0x1be: Push((int) 0)
0x1bf: Pop(1); Push((bool) Stack[-16] < Stack[-1])
0x1c0: IF (Stack[-1] == 0) GOTO 0x1c9; Pop(1)

0x1c1: PushEmpty(bool, int, string, object)
0x1c2: Stack[-3] = Stack[-19]
0x1c3: Stack[-2] = Stack[-18]
0x1c4: Stack[-1] = Stack[-17]
0x1c5: Call2 0xf

0x1c6: Stack[-10] = Stack[-4]
0x1c7: Pop(4)
0x1c8: Return(); Pop(12)

0x1c9: Push("button_weapon")
0x1ca: Pop(1); Push((bool) Stack[-15] == Stack[-1])
0x1cb: IF (Stack[-1] == 0) GOTO 0x1d2; Pop(1)

0x1cc: PushEmpty(int)
0x1cd: Stack[-1] = (int) 0
0x1ce: Call2 0x23a

0x1cf: Pop(1)
0x1d0: Stack[-6] = (bool) 1
0x1d1: GOTO 0x22e

0x1d2: Push("button_clothes")
0x1d3: Pop(1); Push((bool) Stack[-15] == Stack[-1])
0x1d4: IF (Stack[-1] == 0) GOTO 0x1db; Pop(1)

0x1d5: PushEmpty(int)
0x1d6: Stack[-1] = (int) 1
0x1d7: Call2 0x23a

0x1d8: Pop(1)
0x1d9: Stack[-6] = (bool) 1
0x1da: GOTO 0x22e

0x1db: Push("button_medcine")
0x1dc: Pop(1); Push((bool) Stack[-15] == Stack[-1])
0x1dd: IF (Stack[-1] == 0) GOTO 0x1e4; Pop(1)

0x1de: PushEmpty(int)
0x1df: Stack[-1] = (int) 2
0x1e0: Call2 0x23a

0x1e1: Pop(1)
0x1e2: Stack[-6] = (bool) 1
0x1e3: GOTO 0x22e

0x1e4: Push("button_food")
0x1e5: Pop(1); Push((bool) Stack[-15] == Stack[-1])
0x1e6: IF (Stack[-1] == 0) GOTO 0x1ed; Pop(1)

0x1e7: PushEmpty(int)
0x1e8: Stack[-1] = (int) 3
0x1e9: Call2 0x23a

0x1ea: Pop(1)
0x1eb: Stack[-6] = (bool) 1
0x1ec: GOTO 0x22e

0x1ed: Push("button_other")
0x1ee: Pop(1); Push((bool) Stack[-15] == Stack[-1])
0x1ef: IF (Stack[-1] == 0) GOTO 0x1f6; Pop(1)

0x1f0: PushEmpty(int)
0x1f1: Stack[-1] = (int) 4
0x1f2: Call2 0x23a

0x1f3: Pop(1)
0x1f4: Stack[-6] = (bool) 1
0x1f5: GOTO 0x22e

0x1f6: Push("button_detector")
0x1f7: Pop(1); Push((bool) Stack[-15] == Stack[-1])
0x1f8: IF (Stack[-1] == 0) GOTO 0x1fa; Pop(1)

0x1f9: GOTO 0x22e

0x1fa: Push("button_anticeptic")
0x1fb: Pop(1); Push((bool) Stack[-15] == Stack[-1])
0x1fc: IF (Stack[-1] == 0) GOTO 0x1fe; Pop(1)

0x1fd: GOTO 0x22e

0x1fe: Push((int) 0)
0x1ff: Pop(1); Push((bool) Stack[-16] != Stack[-1])
0x200: IF (Stack[-1] == 0) GOTO 0x207; Pop(1)

0x201: Push("noinv_drop")
0x202: @ GetVariable(Stack[-1], Stack[-6])
0x203: Pop(1)
0x204: Push(Stack[-5])
0x205: IF (Stack[-1] == 0) GOTO 0x207; Pop(1)

0x206: Return(); Pop(12)

0x207: Stack[-4] = (int) 0
0x208: Push((int) 12)
0x209: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x20a: IF (Stack[-1] == 0) GOTO 0x22e; Pop(1)

0x20b: PushEmpty(string, int)
0x20c: Stack[-1] = Stack[-6]
0x20d: Call2 0x321

0x20e: Pop(1)
0x20f: Pop(1); Push((bool) Stack[-15] == Stack[-1])
0x210: IF (Stack[-1] == 0) GOTO 0x22b; Pop(1)

0x211: PushEmpty(object)
0x212: Call2 0x9

0x213: Stack[-4] = Stack[-1]
0x214: Pop(1)
0x215: @@ GetItemCount(Stack[-2], Stack[-0])
0x216: Pop(0)
0x217: Pop(0); Push((bool) Stack[-2] > Stack[-4])
0x218: IF (Stack[-1] == 0) GOTO 0x229; Pop(1)

0x219: @@ GetItem(Stack[-1], Stack[-4], Stack[-0])
0x21a: Pop(0)
0x21b: PushEmpty(bool, object)
0x21c: Stack[-1] = Stack[-3]
0x21d: Call2 0x19c

0x21e: Pop(1)
0x21f: Pop(1); Push((bool) Stack[-1] == 0)
0x220: IF (Stack[-1] == 0) GOTO 0x228; Pop(1)

0x221: PushEmpty(bool, int, bool)
0x222: Stack[-2] = Stack[-7]
0x223: Push((int) 0)
0x224: Stack[-2] = Stack[-19] == Stack[-1]; Pop(1);
0x225: Call2 0x14

0x226: Stack[-9] = Stack[-3]
0x227: Pop(3)
0x228: Stack[-1] = 0
0x229: GOTO 0x22e

0x22a: Stack[-3] = 0
0x22b: Push((int) 1)
0x22c: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x22d: GOTO 0x208

0x22e: Pop(0); Push((bool) Stack[-6] == 0)
0x22f: IF (Stack[-1] == 0) GOTO 0x237; Pop(1)

0x230: PushEmpty(bool, int, string, object)
0x231: Stack[-3] = Stack[-19]
0x232: Stack[-2] = Stack[-18]
0x233: Stack[-1] = Stack[-17]
0x234: Call2 0xf

0x235: Stack[-10] = Stack[-4]
0x236: Pop(4)
0x237: Push(Stack[-6])
0x238: IF (Stack[-1] == 0) GOTO 0x239; Pop(1)

0x239: Return(); Pop(12)

0x23a: PushEmpty()
0x23b: Push((int) -1)
0x23c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x23d: IF (Stack[-1] == 0) GOTO 0x23f; Pop(1)

0x23e: Return(); Pop(0)

0x23f: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == Stack[-1])
0x240: IF (Stack[-1] == 0) GOTO 0x242; Pop(1)

0x241: Return(); Pop(0)

0x242: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x243: PushEmpty(int)
0x244: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x245: Call2 0x25a

0x246: Pop(1)
0x247: Return(); Pop(0)

0x248: PushEmpty(object, int, object, int)
0x249: PushEmpty(object)
0x24a: Call2 0x9

0x24b: Stack[-3] = Stack[-1]
0x24c: Pop(1)
0x24d: Push("money")
0x24e: @@ GetProperty(Stack[-1], Stack[-2])
0x24f: Pop(1)
0x250: Stack[-5] = Stack[-1]
0x251: Return(); Pop(4)

0x252: Stack[-2] = 0
0x253: PushEmpty(int)
0x254: Call2 0x248

0x255: Pop(0)
0x256: Push("money")
0x257: @ SendMessage(Stack[-2], Stack[-1])
0x258: Pop(2)
0x259: Return(); Pop(0)

0x25a: PushEmpty()
0x25b: Push((int) 0)
0x25c: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x25d: IF (Stack[-1] == 0) GOTO 0x263; Pop(1)

0x25e: Push((int) 0)
0x25f: Push("button_weapon")
0x260: @ SendMessage(Stack[-2], Stack[-1])
0x261: Pop(2)
0x262: GOTO 0x267

0x263: Push((int) 1)
0x264: Push("button_weapon")
0x265: @ SendMessage(Stack[-2], Stack[-1])
0x266: Pop(2)
0x267: Push((int) 1)
0x268: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x269: IF (Stack[-1] == 0) GOTO 0x26f; Pop(1)

0x26a: Push((int) 0)
0x26b: Push("button_clothes")
0x26c: @ SendMessage(Stack[-2], Stack[-1])
0x26d: Pop(2)
0x26e: GOTO 0x273

0x26f: Push((int) 1)
0x270: Push("button_clothes")
0x271: @ SendMessage(Stack[-2], Stack[-1])
0x272: Pop(2)
0x273: Push((int) 2)
0x274: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x275: IF (Stack[-1] == 0) GOTO 0x27b; Pop(1)

0x276: Push((int) 0)
0x277: Push("button_medcine")
0x278: @ SendMessage(Stack[-2], Stack[-1])
0x279: Pop(2)
0x27a: GOTO 0x27f

0x27b: Push((int) 1)
0x27c: Push("button_medcine")
0x27d: @ SendMessage(Stack[-2], Stack[-1])
0x27e: Pop(2)
0x27f: Push((int) 3)
0x280: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x281: IF (Stack[-1] == 0) GOTO 0x287; Pop(1)

0x282: Push((int) 0)
0x283: Push("button_food")
0x284: @ SendMessage(Stack[-2], Stack[-1])
0x285: Pop(2)
0x286: GOTO 0x28b

0x287: Push((int) 1)
0x288: Push("button_food")
0x289: @ SendMessage(Stack[-2], Stack[-1])
0x28a: Pop(2)
0x28b: Push((int) 4)
0x28c: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x28d: IF (Stack[-1] == 0) GOTO 0x293; Pop(1)

0x28e: Push((int) 0)
0x28f: Push("button_other")
0x290: @ SendMessage(Stack[-2], Stack[-1])
0x291: Pop(2)
0x292: GOTO 0x297

0x293: Push((int) 1)
0x294: Push("button_other")
0x295: @ SendMessage(Stack[-2], Stack[-1])
0x296: Pop(2)
0x297: Return(); Pop(0)

0x298: PushEmpty(object, object, object, int, int, bool, int, bool, bool, object, object, object, int, int, bool, int, bool, bool)
0x299: PushEmpty(object)
0x29a: Call2 0x9

0x29b: Stack[-9] = Stack[-1]
0x29c: Pop(1)
0x29d: @ GetContainer(Stack[-9])
0x29e: Pop(0)
0x29f: @@ GetItemCount(Stack[-6], Stack[-20])
0x2a0: Pop(0)
0x2a1: Pop(0); Push((bool) Stack[-6] <= Stack[-19])
0x2a2: IF (Stack[-1] == 0) GOTO 0x2a5; Pop(1)

0x2a3: Stack[-21] = (bool) 0
0x2a4: Return(); Pop(18)

0x2a5: @@ GetItemAmount(Stack[-5], Stack[-19], Stack[-20])
0x2a6: Pop(0)
0x2a7: @@ GetItem(Stack[-7], Stack[-19], Stack[-20])
0x2a8: Pop(0)
0x2a9: Push((int) 0)
0x2aa: Push((int) 1)
0x2ab: @@ AddItem(Stack[-6], Stack[-9], Stack[-2], Stack[-1])
0x2ac: Pop(2)
0x2ad: Pop(0); Push((bool) Stack[-4] == 0)
0x2ae: IF (Stack[-1] == 0) GOTO 0x2b1; Pop(1)

0x2af: Stack[-21] = (bool) 0
0x2b0: Return(); Pop(18)

0x2b1: Push((int) 0)
0x2b2: Pop(1); Push((bool) Stack[0 + Tasks[-1].StackPointer] == Stack[-1])
0x2b3: IF (Stack[-1] == 0) GOTO 0x2c2; Pop(1)

0x2b4: @@ GetItemID(Stack[-3])
0x2b5: Pop(0)
0x2b6: Push("Weapon")
0x2b7: @ HasInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0x2b8: Pop(1)
0x2b9: Push(Stack[-2])
0x2ba: IF (Stack[-1] == 0) GOTO 0x2c2; Pop(1)

0x2bb: @@ IsItemSelected(Stack[-1], Stack[-19], Stack[-0])
0x2bc: Pop(0)
0x2bd: Push(Stack[-1])
0x2be: IF (Stack[-1] == 0) GOTO 0x2c2; Pop(1)

0x2bf: Push((int) -1)
0x2c0: @ SetPlayerHandsItem(Stack[-1])
0x2c1: Pop(1)
0x2c2: Push((int) 1)
0x2c3: @@ RemoveItem(Stack[-20], Stack[-1], Stack[-21])
0x2c4: Pop(1)
0x2c5: Stack[-21] = (bool) 1
0x2c6: Return(); Pop(18)

0x2c7: Stack[-7] = 0
0x2c8: Stack[-8] = 0
0x2c9: Stack[-9] = 0
0x2ca: PushEmpty(object, int, int, object, int, bool, bool, object, int, int, object, int, bool, bool)
0x2cb: PushEmpty(object)
0x2cc: Call2 0x9

0x2cd: Stack[-8] = Stack[-1]
0x2ce: Pop(1)
0x2cf: @@ GetItemCount(Stack[-6], Stack[-15])
0x2d0: Pop(0)
0x2d1: Stack[-5] = (int) 0
0x2d2: Push((int) 12)
0x2d3: Pop(1); Push((bool) Stack[-6] < Stack[-1])
0x2d4: IF (Stack[-1] == 0) GOTO 0x31f; Pop(1)

0x2d5: Pop(0); Push((bool) Stack[-5] < Stack[-6])
0x2d6: IF (Stack[-1] == 0) GOTO 0x315; Pop(1)

0x2d7: @@ GetItem(Stack[-4], Stack[-5], Stack[-15])
0x2d8: Pop(0)
0x2d9: @@ GetItemAmount(Stack[-3], Stack[-5], Stack[-15])
0x2da: Pop(0)
0x2db: PushEmpty(bool, int, int)
0x2dc: Stack[-2] = Stack[-8]
0x2dd: Stack[-1] = Stack[-18]
0x2de: Call2 0x19f

0x2df: Stack[-5] = Stack[-3]
0x2e0: Pop(3)
0x2e1: PushEmpty(bool, object)
0x2e2: Stack[-1] = Stack[-6]
0x2e3: Call2 0x19c

0x2e4: Stack[-3] = Stack[-2]
0x2e5: Pop(2)
0x2e6: Push(Stack[-2])
0x2e7: IF (Stack[-1] == 0) GOTO 0x2fa; Pop(1)

0x2e8: Push(Stack[-1])
0x2e9: IF (Stack[-1] == 0) GOTO 0x2f2; Pop(1)

0x2ea: Push((int) 0)
0x2eb: PushEmpty(string, int)
0x2ec: Stack[-1] = Stack[-8]
0x2ed: Call2 0x321

0x2ee: Pop(1)
0x2ef: @ SendMessage(Stack[-2], Stack[-1], Stack[-6])
0x2f0: Pop(2)
0x2f1: GOTO 0x2f9

0x2f2: Push((int) 16384)
0x2f3: PushEmpty(string, int)
0x2f4: Stack[-1] = Stack[-8]
0x2f5: Call2 0x321

0x2f6: Pop(1)
0x2f7: @ SendMessage(Stack[-2], Stack[-1], Stack[-6])
0x2f8: Pop(2)
0x2f9: GOTO 0x30b

0x2fa: Push(Stack[-1])
0x2fb: IF (Stack[-1] == 0) GOTO 0x304; Pop(1)

0x2fc: Push((int) 131072)
0x2fd: PushEmpty(string, int)
0x2fe: Stack[-1] = Stack[-8]
0x2ff: Call2 0x321

0x300: Pop(1)
0x301: @ SendMessage(Stack[-2], Stack[-1], Stack[-6])
0x302: Pop(2)
0x303: GOTO 0x30b

0x304: Push((int) 0)
0x305: PushEmpty(string, int)
0x306: Stack[-1] = Stack[-8]
0x307: Call2 0x321

0x308: Pop(1)
0x309: @ SendMessage(Stack[-2], Stack[-1], Stack[-6])
0x30a: Pop(2)
0x30b: Push((int) 65536)
0x30c: Pop(1); Push(Stack[-4] | Stack[-1]);
0x30d: PushEmpty(string, int)
0x30e: Stack[-1] = Stack[-8]
0x30f: Call2 0x321

0x310: Pop(1)
0x311: @ SendMessage(Stack[-2], Stack[-1])
0x312: Pop(2)
0x313: Stack[-4] = 0
0x314: GOTO 0x31c

0x315: Push((int) 32768)
0x316: PushEmpty(string, int)
0x317: Stack[-1] = Stack[-8]
0x318: Call2 0x321

0x319: Pop(1)
0x31a: @ SendMessage(Stack[-2], Stack[-1])
0x31b: Pop(2)
0x31c: Push((int) 1)
0x31d: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x31e: GOTO 0x2d2

0x31f: Return(); Pop(14)

0x320: Stack[-7] = 0
0x321: PushEmpty()
0x322: Push((int) 1)
0x323: Pop(1); Push(Stack[-2] + Stack[-1]);
0x324: Push((int) 10)
0x325: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x326: IF (Stack[-1] == 0) GOTO 0x32c; Pop(1)

0x327: Push("slot0")
0x328: Push((int) 1)
0x329: Pop(1); Push(Stack[-3] + Stack[-1]);
0x32a: Stack[-4] = Stack[-2] + Stack[-1]; Pop(2);
0x32b: Return(); Pop(0)

0x32c: Push("slot")
0x32d: Push((int) 1)
0x32e: Pop(1); Push(Stack[-3] + Stack[-1]);
0x32f: Stack[-4] = Stack[-2] + Stack[-1]; Pop(2);
0x330: Return(); Pop(0)

