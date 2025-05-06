GlobalVarCount = 0

Strings:
	inventory_base.xml
	scrollbar
	take_organ
	GetItemCount
	GetItem
	GetItemID
	GetItemAmount
	Organ
	HasProperty
	default
	IsItemSelected
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
	SetProperty
	RemoveProperty
	Category
	RemoveItem
	AddItem
	Weapon
	slot0
	slot
	cslot0
	cslot
	ccslot0
	ccslot
	Money

Import:
	CreateWindow (3 args)
	GetPlayerContainer (1 args)
	PlaySound (1 args)
	SendMessage (2 args)
	GetContainer (1 args)
	SendMessage (3 args)
	SetCursor (1 args)
	ShowCursor (0 args)
	CaptureKeyboard (0 args)
	SetOwnerDraw (1 args)
	SetNeedUpdate (1 args)
	ProcessEvents (0 args)
	DestroyWindow (0 args)
	GetVariable (2 args)
	GetInvItemProperty (3 args)
	HasInvItemProperty (3 args)
	SetPlayerHandsItem (1 args)
	GetInvItemByName (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (int, object, int) Params = 0
		EVENT_15 Op = 0x5e Vars = (int, int, float)
		EVENT_100 Op = 0x1b7 Vars = (int)
		EVENT_1 Op = 0x1cf Vars = (float)
		EVENT_200 Op = 0x1db Vars = (int, string, object)


0x0: Push("inventory_base.xml")
0x1: Push((bool) 0)
0x2: @ CreateWindow(Stack[-2], Stack[-1], Stack[-1])
0x3: Pop(2)
0x4: PushEmpty()
0x5: Call2 0xa0

0x6: Pop(0)
0x7: PushEmpty(int)
0x8: Stack[-1] = (int) 0
0x9: Call2 0x197

0xa: Pop(1)
0xb: Return(); Pop(0)

0xc: PushEmpty(object, object)
0xd: @ GetPlayerContainer(Stack[-1])
0xe: Pop(0)
0xf: Stack[-3] = Stack[-1]
0x10: Return(); Pop(2)

0x11: Stack[-1] = 0
0x12: PushEmpty(int, int, int, int, int, int)
0x13: Stack[-3] = (int) 0
0x14: Push((int) 4)
0x15: Pop(1); Push((bool) Stack[-4] < Stack[-1])
0x16: IF (Stack[-1] == 0) GOTO 0x2c; Pop(1)

0x17: PushEmpty(string, int)
0x18: Stack[-1] = Stack[-5]
0x19: Call2 0x3af

0x1a: Pop(1)
0x1b: Pop(1); Push((bool) Stack[-9] == Stack[-1])
0x1c: IF (Stack[-1] == 0) GOTO 0x29; Pop(1)

0x1d: PushEmpty(int, bool)
0x1e: PushEmpty(int, int, bool)
0x1f: Stack[-2] = Stack[-8]
0x20: Stack[-1] = (bool) 1
0x21: Call2 0x143

0x22: Stack[-5] = Stack[-3]
0x23: Pop(3)
0x24: Stack[-1] = (bool) 1
0x25: Call2 0x73

0x26: Pop(2)
0x27: Stack[-10] = (bool) 1
0x28: Return(); Pop(6)

0x29: Push((int) 1)
0x2a: Stack[-4] = Stack[-4] + Stack[-1]; Pop(1);
0x2b: GOTO 0x14

0x2c: Stack[-2] = (int) 0
0x2d: Push((int) 4)
0x2e: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x2f: IF (Stack[-1] == 0) GOTO 0x45; Pop(1)

0x30: PushEmpty(string, int)
0x31: Stack[-1] = Stack[-4]
0x32: Call2 0x39f

0x33: Pop(1)
0x34: Pop(1); Push((bool) Stack[-9] == Stack[-1])
0x35: IF (Stack[-1] == 0) GOTO 0x42; Pop(1)

0x36: PushEmpty(int, bool)
0x37: PushEmpty(int, int, bool)
0x38: Stack[-2] = Stack[-7]
0x39: Stack[-1] = (bool) 0
0x3a: Call2 0x143

0x3b: Stack[-5] = Stack[-3]
0x3c: Pop(3)
0x3d: Stack[-1] = (bool) 1
0x3e: Call2 0x83

0x3f: Pop(2)
0x40: Stack[-10] = (bool) 1
0x41: Return(); Pop(6)

0x42: Push((int) 1)
0x43: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x44: GOTO 0x2d

0x45: Push("scrollbar")
0x46: Pop(1); Push((bool) Stack[-9] == Stack[-1])
0x47: IF (Stack[-1] == 0) GOTO 0x5c; Pop(1)

0x48: PushEmpty(int)
0x49: Call2 0x179

0x4a: Stack[-2] = Stack[-1]
0x4b: Pop(1)
0x4c: Push((float)0.01)
0x4d: Push((int) 4)
0x4e: Pop(1); Push(Stack[-3] - Stack[-1]);
0x4f: Pop(2); Push(Stack[-2] * Stack[-1]);
0x50: Pop(1); Push(Stack[-1] * Stack[-10]);
0x51: Push((float)0.5)
0x52: Stack[2 + Tasks[-1].StackPointer] = Stack[-2] + Stack[-1]; Pop(2);
0x53: Push((int) 0)
0x54: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] < Stack[-1])
0x55: IF (Stack[-1] == 0) GOTO 0x57; Pop(1)

0x56: Stack[2 + Tasks[-1].StackPointer] = (int)0
0x57: PushEmpty()
0x58: Call2 0xc8

0x59: Pop(0)
0x5a: Stack[-10] = (bool) 1
0x5b: Return(); Pop(6)

0x5c: Stack[-10] = (bool) 0
0x5d: Return(); Pop(6)

0x5e: PushEmpty()
0x5f: Stack[2 + Tasks[-1].StackPointer] = Stack[2 + Tasks[-1].StackPointer] + Stack[-1]; Pop(0);
0x60: Push((int) 0)
0x61: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] < Stack[-1])
0x62: IF (Stack[-1] == 0) GOTO 0x64; Pop(1)

0x63: Stack[2 + Tasks[-1].StackPointer] = (int)0
0x64: PushEmpty()
0x65: Call2 0xa0

0x66: Pop(0)
0x67: Return(); Pop(0)

0x68: PushEmpty()
0x69: Call2 0xc8

0x6a: Pop(0)
0x6b: Return(); Pop(0)

0x6c: PushEmpty()
0x6d: Call2 0xa0

0x6e: Pop(0)
0x6f: PushEmpty()
0x70: Call2 0xc8

0x71: Pop(0)
0x72: Return(); Pop(0)

0x73: PushEmpty(bool, bool)
0x74: Push("take_organ")
0x75: @ PlaySound(Stack[-1])
0x76: Pop(1)
0x77: PushEmpty(int)
0x78: PushEmpty(int, bool, int)
0x79: Stack[-2] = Stack[-5]
0x7a: Stack[-1] = Stack[-8]
0x7b: Call2 0x2b6

0x7c: Stack[-4] = Stack[-3]
0x7d: Pop(3)
0x7e: Call2 0x24e

0x7f: Pop(1)
0x80: Pop(0); Push((bool) Stack[-1] == 0)
0x81: IF (Stack[-1] == 0) GOTO 0x82; Pop(1)

0x82: Return(); Pop(2)

0x83: PushEmpty(bool, bool)
0x84: PushEmpty(int)
0x85: PushEmpty(int, bool, int)
0x86: Stack[-2] = Stack[-5]
0x87: Stack[-1] = Stack[-8] + Stack[2 + Tasks[-1].StackPointer]; Pop(0);
0x88: Call2 0x2b6

0x89: Stack[-4] = Stack[-3]
0x8a: Pop(3)
0x8b: Call2 0x24e

0x8c: Pop(1)
0x8d: Pop(0); Push((bool) Stack[-1] == 0)
0x8e: IF (Stack[-1] == 0) GOTO 0x8f; Pop(1)

0x8f: PushEmpty()
0x90: Call2 0xa0

0x91: Pop(0)
0x92: Return(); Pop(2)

0x93: PushEmpty()
0x94: PushEmpty(bool, int, int)
0x95: Stack[-2] = Stack[0 + Tasks[-1].StackPointer]
0x96: Stack[-1] = Stack[-5]
0x97: Call2 0x306

0x98: Pop(3)
0x99: Push((int) 1)
0x9a: Stack[2 + Tasks[-1].StackPointer] = Stack[2 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x9b: PushEmpty()
0x9c: Call2 0xa0

0x9d: Pop(0)
0x9e: Stack[-3] = (bool) 1
0x9f: Return(); Pop(0)

0xa0: PushEmpty(int, int, int, int, int, int)
0xa1: PushEmpty(int)
0xa2: Call2 0x179

0xa3: Stack[-4] = Stack[-1]
0xa4: Pop(1)
0xa5: Push((int) 4)
0xa6: Pop(1); Push((bool) Stack[-4] <= Stack[-1])
0xa7: IF (Stack[-1] == 0) GOTO 0xae; Pop(1)

0xa8: Push((int) 16384)
0xa9: Push("scrollbar")
0xaa: @ SendMessage(Stack[-2], Stack[-1])
0xab: Pop(2)
0xac: Stack[2 + Tasks[-1].StackPointer] = (int)0
0xad: GOTO 0xc7

0xae: Push((int) 4)
0xaf: Pop(1); Push(Stack[2 + StackPtr] + Stack[-1]);
0xb0: Pop(1); Push((bool) Stack[-1] > Stack[-4])
0xb1: IF (Stack[-1] == 0) GOTO 0xbf; Pop(1)

0xb2: Push((int) 4)
0xb3: Pop(1); Push(Stack[2 + StackPtr] + Stack[-1]);
0xb4: Pop(1); Push(Stack[-1] - Stack[-4]);
0xb5: Stack[2 + Tasks[-1].StackPointer] = Stack[2 + Tasks[-1].StackPointer] - Stack[-1]; Pop(1);
0xb6: Push((int) 100)
0xb7: Pop(1); Push(Stack[2 + StackPtr] * Stack[-1]);
0xb8: Push((int) 4)
0xb9: Pop(1); Push(Stack[-5] - Stack[-1]);
0xba: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0xbb: Push("scrollbar")
0xbc: @ SendMessage(Stack[-3], Stack[-1])
0xbd: Pop(1)
0xbe: GOTO 0xc7

0xbf: Push((int) 100)
0xc0: Pop(1); Push(Stack[2 + StackPtr] * Stack[-1]);
0xc1: Push((int) 4)
0xc2: Pop(1); Push(Stack[-5] - Stack[-1]);
0xc3: Stack[-3] = Stack[-2] / Stack[-1]; Pop(2);
0xc4: Push("scrollbar")
0xc5: @ SendMessage(Stack[-2], Stack[-1])
0xc6: Pop(1)
0xc7: Return(); Pop(6)

0xc8: PushEmpty(object, int, int, int, object, int, int, bool, int, int, object, int, int, bool, int, object, int, int, int, object, int, int, bool, int, int, object, int, int, bool, int)
0xc9: @ GetContainer(Stack[-15])
0xca: Pop(0)
0xcb: @@ GetItemCount(Stack[-14])
0xcc: Pop(0)
0xcd: Stack[-13] = (int) 0
0xce: Stack[-12] = (int) 0
0xcf: Pop(0); Push((bool) Stack[-12] < Stack[-14])
0xd0: IF (Stack[-1] == 0) GOTO 0xfa; Pop(1)

0xd1: @@ GetItem(Stack[-11], Stack[-12])
0xd2: Pop(0)
0xd3: @@ GetItemID(Stack[-10])
0xd4: Pop(0)
0xd5: @@ GetItemAmount(Stack[-9], Stack[-12])
0xd6: Pop(0)
0xd7: Stack[-8] = (bool) 0
0xd8: Push("Organ")
0xd9: @@ HasProperty(Stack[-9], Stack[-1])
0xda: Pop(1)
0xdb: Push(Stack[-8])
0xdc: IF (Stack[-1] == 0) GOTO 0xde; Pop(1)

0xdd: GOTO 0xf7

0xde: Pop(0); Push((bool) Stack[-13] >= Stack[2 + Tasks[-1].StackPointer])
0xdf: IF (Stack[-1] == 0) GOTO 0xef; Pop(1)

0xe0: Push((int) 0)
0xe1: PushEmpty(string, int)
0xe2: Stack[-1] = Stack[-16] - Stack[2 + Tasks[-1].StackPointer]; Pop(0);
0xe3: Call2 0x39f

0xe4: Pop(1)
0xe5: @ SendMessage(Stack[-2], Stack[-1], Stack[-13])
0xe6: Pop(2)
0xe7: Push((int) 65536)
0xe8: Pop(1); Push(Stack[-10] | Stack[-1]);
0xe9: PushEmpty(string, int)
0xea: Stack[-1] = Stack[-16] - Stack[2 + Tasks[-1].StackPointer]; Pop(0);
0xeb: Call2 0x39f

0xec: Pop(1)
0xed: @ SendMessage(Stack[-2], Stack[-1])
0xee: Pop(2)
0xef: Push((int) 1)
0xf0: Stack[-14] = Stack[-14] + Stack[-1]; Pop(1);
0xf1: Push((int) 4)
0xf2: Pop(1); Push(Stack[-1] + Stack[2 + StackPtr]);
0xf3: Pop(1); Push((bool) Stack[-14] >= Stack[-1])
0xf4: IF (Stack[-1] == 0) GOTO 0xf6; Pop(1)

0xf5: GOTO 0xfa

0xf6: Stack[-11] = 0
0xf7: Push((int) 1)
0xf8: Stack[-13] = Stack[-13] + Stack[-1]; Pop(1);
0xf9: GOTO 0xcf

0xfa: Stack[-7] = Stack[-13] + Stack[2 + Tasks[-1].StackPointer]; Pop(0);
0xfb: Push((int) 4)
0xfc: Pop(1); Push(Stack[-1] + Stack[2 + StackPtr]);
0xfd: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0xfe: IF (Stack[-1] == 0) GOTO 0x109; Pop(1)

0xff: Push((int) 32768)
0x100: PushEmpty(string, int)
0x101: Stack[-1] = Stack[-10] - Stack[2 + Tasks[-1].StackPointer]; Pop(0);
0x102: Call2 0x39f

0x103: Pop(1)
0x104: @ SendMessage(Stack[-2], Stack[-1])
0x105: Pop(2)
0x106: Push((int) 1)
0x107: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x108: GOTO 0xfb

0x109: Stack[-13] = (int) 0
0x10a: Stack[-6] = (int) 0
0x10b: Pop(0); Push((bool) Stack[-6] < Stack[-14])
0x10c: IF (Stack[-1] == 0) GOTO 0x133; Pop(1)

0x10d: @@ GetItem(Stack[-5], Stack[-6])
0x10e: Pop(0)
0x10f: @@ GetItemID(Stack[-4])
0x110: Pop(0)
0x111: @@ GetItemAmount(Stack[-3], Stack[-6])
0x112: Pop(0)
0x113: Stack[-2] = (bool) 0
0x114: Push("Organ")
0x115: @@ HasProperty(Stack[-3], Stack[-1])
0x116: Pop(1)
0x117: Pop(0); Push((bool) Stack[-2] == 0)
0x118: IF (Stack[-1] == 0) GOTO 0x11a; Pop(1)

0x119: GOTO 0x130

0x11a: Push((int) 0)
0x11b: PushEmpty(string, int)
0x11c: Stack[-1] = Stack[-16]
0x11d: Call2 0x3af

0x11e: Pop(1)
0x11f: @ SendMessage(Stack[-2], Stack[-1], Stack[-7])
0x120: Pop(2)
0x121: Push((int) 65536)
0x122: Pop(1); Push(Stack[-4] | Stack[-1]);
0x123: PushEmpty(string, int)
0x124: Stack[-1] = Stack[-16]
0x125: Call2 0x3af

0x126: Pop(1)
0x127: @ SendMessage(Stack[-2], Stack[-1])
0x128: Pop(2)
0x129: Push((int) 1)
0x12a: Stack[-14] = Stack[-14] + Stack[-1]; Pop(1);
0x12b: Push((int) 4)
0x12c: Pop(1); Push((bool) Stack[-14] >= Stack[-1])
0x12d: IF (Stack[-1] == 0) GOTO 0x12f; Pop(1)

0x12e: GOTO 0x133

0x12f: Stack[-5] = 0
0x130: Push((int) 1)
0x131: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x132: GOTO 0x10b

0x133: Stack[-1] = Stack[-13]
0x134: Push((int) 4)
0x135: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x136: IF (Stack[-1] == 0) GOTO 0x141; Pop(1)

0x137: Push((int) 32768)
0x138: PushEmpty(string, int)
0x139: Stack[-1] = Stack[-4]
0x13a: Call2 0x3af

0x13b: Pop(1)
0x13c: @ SendMessage(Stack[-2], Stack[-1])
0x13d: Pop(2)
0x13e: Push((int) 1)
0x13f: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x140: GOTO 0x134

0x141: Return(); Pop(30)

0x142: Stack[-15] = 0
0x143: PushEmpty(object, int, int, int, int, object, int, int, bool, object, int, int, int, int, object, int, int, bool)
0x144: @ GetContainer(Stack[-9])
0x145: Pop(0)
0x146: @@ GetItemCount(Stack[-8])
0x147: Pop(0)
0x148: Stack[-7] = (int) 0
0x149: Stack[-6] = (int) 0
0x14a: Stack[-5] = (int) 0
0x14b: Pop(0); Push((bool) Stack[-5] < Stack[-8])
0x14c: IF (Stack[-1] == 0) GOTO 0x176; Pop(1)

0x14d: @@ GetItem(Stack[-4], Stack[-5])
0x14e: Pop(0)
0x14f: @@ GetItemID(Stack[-3])
0x150: Pop(0)
0x151: @@ GetItemAmount(Stack[-2], Stack[-5])
0x152: Pop(0)
0x153: Stack[-1] = (bool) 0
0x154: Push("Organ")
0x155: @@ HasProperty(Stack[-2], Stack[-1])
0x156: Pop(1)
0x157: Push(Stack[-1])
0x158: IF (Stack[-1] == 0) GOTO 0x166; Pop(1)

0x159: PushEmpty(bool)
0x15a: Stack[-1] = (bool) 0
0x15b: Push(Stack[-20])
0x15c: IF (Stack[-1] == 0) GOTO 0x160; Pop(1)

0x15d: Pop(0); Push((bool) Stack[-8] == Stack[-21])
0x15e: IF (Stack[-1] == 0) GOTO 0x160; Pop(1)

0x15f: Stack[-1] = (bool) 1
0x160: IF (Stack[-1] == 0) GOTO 0x163; Pop(1)

0x161: Stack[-21] = Stack[-5]
0x162: Return(); Pop(18)

0x163: Push((int) 1)
0x164: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x165: GOTO 0x172

0x166: PushEmpty(bool)
0x167: Stack[-1] = (bool) 0
0x168: Pop(0); Push((bool) Stack[-20] == 0)
0x169: IF (Stack[-1] == 0) GOTO 0x16d; Pop(1)

0x16a: Pop(0); Push((bool) Stack[-7] == Stack[-21])
0x16b: IF (Stack[-1] == 0) GOTO 0x16d; Pop(1)

0x16c: Stack[-1] = (bool) 1
0x16d: IF (Stack[-1] == 0) GOTO 0x170; Pop(1)

0x16e: Stack[-21] = Stack[-5]
0x16f: Return(); Pop(18)

0x170: Push((int) 1)
0x171: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x172: Stack[-4] = 0
0x173: Push((int) 1)
0x174: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x175: GOTO 0x14b

0x176: Stack[-21] = (int) -1
0x177: Return(); Pop(18)

0x178: Stack[-9] = 0
0x179: PushEmpty(object, int, int, int, object, int, int, bool, object, int, int, int, object, int, int, bool)
0x17a: @ GetContainer(Stack[-8])
0x17b: Pop(0)
0x17c: @@ GetItemCount(Stack[-7])
0x17d: Pop(0)
0x17e: Stack[-6] = (int) 0
0x17f: Stack[-5] = (int) 0
0x180: Pop(0); Push((bool) Stack[-5] < Stack[-7])
0x181: IF (Stack[-1] == 0) GOTO 0x194; Pop(1)

0x182: @@ GetItem(Stack[-4], Stack[-5])
0x183: Pop(0)
0x184: @@ GetItemID(Stack[-3])
0x185: Pop(0)
0x186: @@ GetItemAmount(Stack[-2], Stack[-5])
0x187: Pop(0)
0x188: Stack[-1] = (bool) 0
0x189: Push("Organ")
0x18a: @@ HasProperty(Stack[-2], Stack[-1])
0x18b: Pop(1)
0x18c: Pop(0); Push((bool) Stack[-1] == 0)
0x18d: IF (Stack[-1] == 0) GOTO 0x190; Pop(1)

0x18e: Push((int) 1)
0x18f: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x190: Stack[-4] = 0
0x191: Push((int) 1)
0x192: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x193: GOTO 0x180

0x194: Stack[-17] = Stack[-6]
0x195: Return(); Pop(16)

0x196: Stack[-8] = 0
0x197: PushEmpty()
0x198: Stack[0 + Tasks[-1].StackPointer] = (int)-1
0x199: PushEmpty(int)
0x19a: Stack[-1] = Stack[-2]
0x19b: Call2 0x24e

0x19c: Pop(1)
0x19d: PushEmpty(int)
0x19e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x19f: Call2 0x338

0x1a0: Pop(1)
0x1a1: PushEmpty()
0x1a2: Call2 0x271

0x1a3: Pop(0)
0x1a4: Push("default")
0x1a5: @ SetCursor(Stack[-1])
0x1a6: Pop(1)
0x1a7: @ ShowCursor()
0x1a8: Pop(0)
0x1a9: @ CaptureKeyboard()
0x1aa: Pop(0)
0x1ab: Push((bool) 0)
0x1ac: @ SetOwnerDraw(Stack[-1])
0x1ad: Pop(1)
0x1ae: Push((bool) 1)
0x1af: @ SetNeedUpdate(Stack[-1])
0x1b0: Pop(1)
0x1b1: PushEmpty()
0x1b2: Call2 0x6c

0x1b3: Pop(0)
0x1b4: @ ProcessEvents()
0x1b5: Pop(0)
0x1b6: Return(); Pop(0)

0x1b7: PushEmpty()
0x1b8: @ DestroyWindow()
0x1b9: Pop(0)
0x1ba: Return(); Pop(0)

0x1bb: PushEmpty()
0x1bc: Stack[-2] = (bool) 0
0x1bd: Return(); Pop(0)

0x1be: PushEmpty(bool, bool)
0x1bf: PushEmpty(object)
0x1c0: Call2 0xc

0x1c1: Pop(0)
0x1c2: PushEmpty(object)
0x1c3: Call2 0xc

0x1c4: Pop(1)
0x1c5: PushEmpty(object)
0x1c6: Call2 0xc

0x1c7: Pop(1)
0x1c8: PushEmpty(object)
0x1c9: Call2 0xc

0x1ca: Pop(1)
0x1cb: @@ IsItemSelected(Stack[-2], Stack[-5], Stack[-4])
0x1cc: Pop(1)
0x1cd: Stack[-5] = Stack[-1]
0x1ce: Return(); Pop(2)

0x1cf: PushEmpty()
0x1d0: PushEmpty(int)
0x1d1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1d2: Call2 0x338

0x1d3: Pop(1)
0x1d4: PushEmpty()
0x1d5: Call2 0x271

0x1d6: Pop(0)
0x1d7: PushEmpty()
0x1d8: Call2 0x68

0x1d9: Pop(0)
0x1da: Return(); Pop(0)

0x1db: PushEmpty(bool, int, int, object, int, object, bool, int, int, object, int, object)
0x1dc: Stack[-6] = (bool) 0
0x1dd: Push("button_weapon")
0x1de: Pop(1); Push((bool) Stack[-15] == Stack[-1])
0x1df: IF (Stack[-1] == 0) GOTO 0x1e6; Pop(1)

0x1e0: PushEmpty(int)
0x1e1: Stack[-1] = (int) 0
0x1e2: Call2 0x24e

0x1e3: Pop(1)
0x1e4: Stack[-6] = (bool) 1
0x1e5: GOTO 0x242

0x1e6: Push("button_clothes")
0x1e7: Pop(1); Push((bool) Stack[-15] == Stack[-1])
0x1e8: IF (Stack[-1] == 0) GOTO 0x1ef; Pop(1)

0x1e9: PushEmpty(int)
0x1ea: Stack[-1] = (int) 1
0x1eb: Call2 0x24e

0x1ec: Pop(1)
0x1ed: Stack[-6] = (bool) 1
0x1ee: GOTO 0x242

0x1ef: Push("button_medcine")
0x1f0: Pop(1); Push((bool) Stack[-15] == Stack[-1])
0x1f1: IF (Stack[-1] == 0) GOTO 0x1f8; Pop(1)

0x1f2: PushEmpty(int)
0x1f3: Stack[-1] = (int) 2
0x1f4: Call2 0x24e

0x1f5: Pop(1)
0x1f6: Stack[-6] = (bool) 1
0x1f7: GOTO 0x242

0x1f8: Push("button_food")
0x1f9: Pop(1); Push((bool) Stack[-15] == Stack[-1])
0x1fa: IF (Stack[-1] == 0) GOTO 0x201; Pop(1)

0x1fb: PushEmpty(int)
0x1fc: Stack[-1] = (int) 3
0x1fd: Call2 0x24e

0x1fe: Pop(1)
0x1ff: Stack[-6] = (bool) 1
0x200: GOTO 0x242

0x201: Push("button_other")
0x202: Pop(1); Push((bool) Stack[-15] == Stack[-1])
0x203: IF (Stack[-1] == 0) GOTO 0x20a; Pop(1)

0x204: PushEmpty(int)
0x205: Stack[-1] = (int) 4
0x206: Call2 0x24e

0x207: Pop(1)
0x208: Stack[-6] = (bool) 1
0x209: GOTO 0x242

0x20a: Push("button_detector")
0x20b: Pop(1); Push((bool) Stack[-15] == Stack[-1])
0x20c: IF (Stack[-1] == 0) GOTO 0x20e; Pop(1)

0x20d: GOTO 0x242

0x20e: Push("button_anticeptic")
0x20f: Pop(1); Push((bool) Stack[-15] == Stack[-1])
0x210: IF (Stack[-1] == 0) GOTO 0x212; Pop(1)

0x211: GOTO 0x242

0x212: Push((int) 0)
0x213: Pop(1); Push((bool) Stack[-16] != Stack[-1])
0x214: IF (Stack[-1] == 0) GOTO 0x21b; Pop(1)

0x215: Push("noinv_drop")
0x216: @ GetVariable(Stack[-1], Stack[-6])
0x217: Pop(1)
0x218: Push(Stack[-5])
0x219: IF (Stack[-1] == 0) GOTO 0x21b; Pop(1)

0x21a: Return(); Pop(12)

0x21b: Stack[-4] = (int) 0
0x21c: Push((int) 12)
0x21d: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x21e: IF (Stack[-1] == 0) GOTO 0x242; Pop(1)

0x21f: PushEmpty(string, int)
0x220: Stack[-1] = Stack[-6]
0x221: Call2 0x38f

0x222: Pop(1)
0x223: Pop(1); Push((bool) Stack[-15] == Stack[-1])
0x224: IF (Stack[-1] == 0) GOTO 0x23f; Pop(1)

0x225: PushEmpty(object)
0x226: Call2 0xc

0x227: Stack[-4] = Stack[-1]
0x228: Pop(1)
0x229: @@ GetItemCount(Stack[-2], Stack[-0])
0x22a: Pop(0)
0x22b: Pop(0); Push((bool) Stack[-2] > Stack[-4])
0x22c: IF (Stack[-1] == 0) GOTO 0x23d; Pop(1)

0x22d: @@ GetItem(Stack[-1], Stack[-4], Stack[-0])
0x22e: Pop(0)
0x22f: PushEmpty(bool, object)
0x230: Stack[-1] = Stack[-3]
0x231: Call2 0x1bb

0x232: Pop(1)
0x233: Pop(1); Push((bool) Stack[-1] == 0)
0x234: IF (Stack[-1] == 0) GOTO 0x23c; Pop(1)

0x235: PushEmpty(bool, int, int)
0x236: Stack[-2] = Stack[-7]
0x237: Push((int) 0)
0x238: Stack[-2] = Stack[-19] == Stack[-1]; Pop(1);
0x239: Call2 0x93

0x23a: Stack[-9] = Stack[-3]
0x23b: Pop(3)
0x23c: Stack[-1] = 0
0x23d: GOTO 0x242

0x23e: Stack[-3] = 0
0x23f: Push((int) 1)
0x240: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x241: GOTO 0x21c

0x242: Pop(0); Push((bool) Stack[-6] == 0)
0x243: IF (Stack[-1] == 0) GOTO 0x24b; Pop(1)

0x244: PushEmpty(bool, int, string, object)
0x245: Stack[-3] = Stack[-19]
0x246: Stack[-2] = Stack[-18]
0x247: Stack[-1] = Stack[-17]
0x248: Call2 0x12

0x249: Stack[-10] = Stack[-4]
0x24a: Pop(4)
0x24b: Push(Stack[-6])
0x24c: IF (Stack[-1] == 0) GOTO 0x24d; Pop(1)

0x24d: Return(); Pop(12)

0x24e: PushEmpty()
0x24f: Push((int) -1)
0x250: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x251: IF (Stack[-1] == 0) GOTO 0x253; Pop(1)

0x252: Return(); Pop(0)

0x253: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == Stack[-1])
0x254: IF (Stack[-1] == 0) GOTO 0x256; Pop(1)

0x255: Return(); Pop(0)

0x256: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x257: PushEmpty(int)
0x258: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x259: Call2 0x278

0x25a: Pop(1)
0x25b: Return(); Pop(0)

0x25c: PushEmpty(object, int, object, int)
0x25d: PushEmpty(object)
0x25e: Call2 0xc

0x25f: Stack[-3] = Stack[-1]
0x260: Pop(1)
0x261: Push("money")
0x262: @@ GetProperty(Stack[-1], Stack[-2])
0x263: Pop(1)
0x264: Stack[-5] = Stack[-1]
0x265: Return(); Pop(4)

0x266: Stack[-2] = 0
0x267: PushEmpty(object, object)
0x268: PushEmpty(object)
0x269: Call2 0xc

0x26a: Stack[-2] = Stack[-1]
0x26b: Pop(1)
0x26c: Push("money")
0x26d: @@ SetProperty(Stack[-1], Stack[-4])
0x26e: Pop(1)
0x26f: Return(); Pop(2)

0x270: Stack[-1] = 0
0x271: PushEmpty(int)
0x272: Call2 0x25c

0x273: Pop(0)
0x274: Push("money")
0x275: @ SendMessage(Stack[-2], Stack[-1])
0x276: Pop(2)
0x277: Return(); Pop(0)

0x278: PushEmpty()
0x279: Push((int) 0)
0x27a: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x27b: IF (Stack[-1] == 0) GOTO 0x281; Pop(1)

0x27c: Push((int) 0)
0x27d: Push("button_weapon")
0x27e: @ SendMessage(Stack[-2], Stack[-1])
0x27f: Pop(2)
0x280: GOTO 0x285

0x281: Push((int) 1)
0x282: Push("button_weapon")
0x283: @ SendMessage(Stack[-2], Stack[-1])
0x284: Pop(2)
0x285: Push((int) 1)
0x286: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x287: IF (Stack[-1] == 0) GOTO 0x28d; Pop(1)

0x288: Push((int) 0)
0x289: Push("button_clothes")
0x28a: @ SendMessage(Stack[-2], Stack[-1])
0x28b: Pop(2)
0x28c: GOTO 0x291

0x28d: Push((int) 1)
0x28e: Push("button_clothes")
0x28f: @ SendMessage(Stack[-2], Stack[-1])
0x290: Pop(2)
0x291: Push((int) 2)
0x292: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x293: IF (Stack[-1] == 0) GOTO 0x299; Pop(1)

0x294: Push((int) 0)
0x295: Push("button_medcine")
0x296: @ SendMessage(Stack[-2], Stack[-1])
0x297: Pop(2)
0x298: GOTO 0x29d

0x299: Push((int) 1)
0x29a: Push("button_medcine")
0x29b: @ SendMessage(Stack[-2], Stack[-1])
0x29c: Pop(2)
0x29d: Push((int) 3)
0x29e: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x29f: IF (Stack[-1] == 0) GOTO 0x2a5; Pop(1)

0x2a0: Push((int) 0)
0x2a1: Push("button_food")
0x2a2: @ SendMessage(Stack[-2], Stack[-1])
0x2a3: Pop(2)
0x2a4: GOTO 0x2a9

0x2a5: Push((int) 1)
0x2a6: Push("button_food")
0x2a7: @ SendMessage(Stack[-2], Stack[-1])
0x2a8: Pop(2)
0x2a9: Push((int) 4)
0x2aa: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x2ab: IF (Stack[-1] == 0) GOTO 0x2b1; Pop(1)

0x2ac: Push((int) 0)
0x2ad: Push("button_other")
0x2ae: @ SendMessage(Stack[-2], Stack[-1])
0x2af: Pop(2)
0x2b0: GOTO 0x2b5

0x2b1: Push((int) 1)
0x2b2: Push("button_other")
0x2b3: @ SendMessage(Stack[-2], Stack[-1])
0x2b4: Pop(2)
0x2b5: Return(); Pop(0)

0x2b6: PushEmpty(object, object, object, int, int, int, bool, int, int, bool, bool, object, object, object, int, int, int, bool, int, int, bool, bool)
0x2b7: Stack[-24] = (bool) 0
0x2b8: Push((int) -1)
0x2b9: Pop(1); Push((bool) Stack[-24] == Stack[-1])
0x2ba: IF (Stack[-1] == 0) GOTO 0x2bd; Pop(1)

0x2bb: Stack[-25] = (int) -1
0x2bc: Return(); Pop(22)

0x2bd: PushEmpty(object)
0x2be: Call2 0xc

0x2bf: Stack[-11] = Stack[-1]
0x2c0: Pop(1)
0x2c1: @ GetContainer(Stack[-11])
0x2c2: Pop(0)
0x2c3: @@ GetItemCount(Stack[-8])
0x2c4: Pop(0)
0x2c5: Pop(0); Push((bool) Stack[-8] <= Stack[-23])
0x2c6: IF (Stack[-1] == 0) GOTO 0x2c9; Pop(1)

0x2c7: Stack[-25] = (int) -1
0x2c8: Return(); Pop(22)

0x2c9: @@ GetItemAmount(Stack[-7], Stack[-23])
0x2ca: Pop(0)
0x2cb: Push((int) 0)
0x2cc: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x2cd: IF (Stack[-1] == 0) GOTO 0x2d0; Pop(1)

0x2ce: Stack[-25] = (int) -1
0x2cf: Return(); Pop(22)

0x2d0: @@ GetItem(Stack[-9], Stack[-23])
0x2d1: Pop(0)
0x2d2: @@ GetItemID(Stack[-6])
0x2d3: Pop(0)
0x2d4: Stack[-5] = (bool) 0
0x2d5: Push("Organ")
0x2d6: @@ HasProperty(Stack[-6], Stack[-1])
0x2d7: Pop(1)
0x2d8: Push(Stack[-5])
0x2d9: IF (Stack[-1] == 0) GOTO 0x2dd; Pop(1)

0x2da: Push("Organ")
0x2db: @@ RemoveProperty(Stack[-1])
0x2dc: Pop(1)
0x2dd: Push("Category")
0x2de: @ GetInvItemProperty(Stack[-5], Stack[-7], Stack[-1])
0x2df: Pop(1)
0x2e0: PushEmpty(int)
0x2e1: Call2 0x3bf

0x2e2: Pop(0)
0x2e3: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x2e4: IF (Stack[-1] == 0) GOTO 0x2f6; Pop(1)

0x2e5: PushEmpty(int)
0x2e6: Call2 0x25c

0x2e7: Stack[-4] = Stack[-1]
0x2e8: Pop(1)
0x2e9: Stack[-3] = Stack[-3] + Stack[-7]; Pop(0);
0x2ea: PushEmpty(int)
0x2eb: Stack[-1] = Stack[-4]
0x2ec: Call2 0x267

0x2ed: Pop(1)
0x2ee: @@ RemoveItem(Stack[-23], Stack[-7])
0x2ef: Pop(0)
0x2f0: PushEmpty()
0x2f1: Call2 0x271

0x2f2: Pop(0)
0x2f3: Stack[-24] = (bool) 1
0x2f4: Stack[-25] = (int) -1
0x2f5: Return(); Pop(22)

0x2f6: Push((int) 1)
0x2f7: @@ AddItem(Stack[-2], Stack[-10], Stack[-5], Stack[-1])
0x2f8: Pop(1)
0x2f9: Pop(0); Push((bool) Stack[-1] == 0)
0x2fa: IF (Stack[-1] == 0) GOTO 0x2fd; Pop(1)

0x2fb: Stack[-25] = Stack[-4]
0x2fc: Return(); Pop(22)

0x2fd: Stack[-24] = (bool) 1
0x2fe: Push((int) 1)
0x2ff: @@ RemoveItem(Stack[-24], Stack[-1])
0x300: Pop(1)
0x301: Stack[-25] = Stack[-4]
0x302: Return(); Pop(22)

0x303: Stack[-9] = 0
0x304: Stack[-10] = 0
0x305: Stack[-11] = 0
0x306: PushEmpty(object, object, object, int, int, bool, int, bool, bool, object, object, object, int, int, bool, int, bool, bool)
0x307: PushEmpty(object)
0x308: Call2 0xc

0x309: Stack[-9] = Stack[-1]
0x30a: Pop(1)
0x30b: @ GetContainer(Stack[-9])
0x30c: Pop(0)
0x30d: @@ GetItemCount(Stack[-6], Stack[-20])
0x30e: Pop(0)
0x30f: Pop(0); Push((bool) Stack[-6] <= Stack[-19])
0x310: IF (Stack[-1] == 0) GOTO 0x313; Pop(1)

0x311: Stack[-21] = (bool) 0
0x312: Return(); Pop(18)

0x313: @@ GetItemAmount(Stack[-5], Stack[-19], Stack[-20])
0x314: Pop(0)
0x315: @@ GetItem(Stack[-7], Stack[-19], Stack[-20])
0x316: Pop(0)
0x317: Push((int) 0)
0x318: Push((int) 1)
0x319: @@ AddItem(Stack[-6], Stack[-9], Stack[-2], Stack[-1])
0x31a: Pop(2)
0x31b: Pop(0); Push((bool) Stack[-4] == 0)
0x31c: IF (Stack[-1] == 0) GOTO 0x31f; Pop(1)

0x31d: Stack[-21] = (bool) 0
0x31e: Return(); Pop(18)

0x31f: Push((int) 0)
0x320: Pop(1); Push((bool) Stack[0 + Tasks[-1].StackPointer] == Stack[-1])
0x321: IF (Stack[-1] == 0) GOTO 0x330; Pop(1)

0x322: @@ GetItemID(Stack[-3])
0x323: Pop(0)
0x324: Push("Weapon")
0x325: @ HasInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0x326: Pop(1)
0x327: Push(Stack[-2])
0x328: IF (Stack[-1] == 0) GOTO 0x330; Pop(1)

0x329: @@ IsItemSelected(Stack[-1], Stack[-19], Stack[-0])
0x32a: Pop(0)
0x32b: Push(Stack[-1])
0x32c: IF (Stack[-1] == 0) GOTO 0x330; Pop(1)

0x32d: Push((int) -1)
0x32e: @ SetPlayerHandsItem(Stack[-1])
0x32f: Pop(1)
0x330: Push((int) 1)
0x331: @@ RemoveItem(Stack[-20], Stack[-1], Stack[-21])
0x332: Pop(1)
0x333: Stack[-21] = (bool) 1
0x334: Return(); Pop(18)

0x335: Stack[-7] = 0
0x336: Stack[-8] = 0
0x337: Stack[-9] = 0
0x338: PushEmpty(object, int, int, object, int, bool, bool, object, int, int, object, int, bool, bool)
0x339: PushEmpty(object)
0x33a: Call2 0xc

0x33b: Stack[-8] = Stack[-1]
0x33c: Pop(1)
0x33d: @@ GetItemCount(Stack[-6], Stack[-15])
0x33e: Pop(0)
0x33f: Stack[-5] = (int) 0
0x340: Push((int) 12)
0x341: Pop(1); Push((bool) Stack[-6] < Stack[-1])
0x342: IF (Stack[-1] == 0) GOTO 0x38d; Pop(1)

0x343: Pop(0); Push((bool) Stack[-5] < Stack[-6])
0x344: IF (Stack[-1] == 0) GOTO 0x383; Pop(1)

0x345: @@ GetItem(Stack[-4], Stack[-5], Stack[-15])
0x346: Pop(0)
0x347: @@ GetItemAmount(Stack[-3], Stack[-5], Stack[-15])
0x348: Pop(0)
0x349: PushEmpty(bool, int, int)
0x34a: Stack[-2] = Stack[-8]
0x34b: Stack[-1] = Stack[-18]
0x34c: Call2 0x1be

0x34d: Stack[-5] = Stack[-3]
0x34e: Pop(3)
0x34f: PushEmpty(bool, object)
0x350: Stack[-1] = Stack[-6]
0x351: Call2 0x1bb

0x352: Stack[-3] = Stack[-2]
0x353: Pop(2)
0x354: Push(Stack[-2])
0x355: IF (Stack[-1] == 0) GOTO 0x368; Pop(1)

0x356: Push(Stack[-1])
0x357: IF (Stack[-1] == 0) GOTO 0x360; Pop(1)

0x358: Push((int) 0)
0x359: PushEmpty(string, int)
0x35a: Stack[-1] = Stack[-8]
0x35b: Call2 0x38f

0x35c: Pop(1)
0x35d: @ SendMessage(Stack[-2], Stack[-1], Stack[-6])
0x35e: Pop(2)
0x35f: GOTO 0x367

0x360: Push((int) 16384)
0x361: PushEmpty(string, int)
0x362: Stack[-1] = Stack[-8]
0x363: Call2 0x38f

0x364: Pop(1)
0x365: @ SendMessage(Stack[-2], Stack[-1], Stack[-6])
0x366: Pop(2)
0x367: GOTO 0x379

0x368: Push(Stack[-1])
0x369: IF (Stack[-1] == 0) GOTO 0x372; Pop(1)

0x36a: Push((int) 131072)
0x36b: PushEmpty(string, int)
0x36c: Stack[-1] = Stack[-8]
0x36d: Call2 0x38f

0x36e: Pop(1)
0x36f: @ SendMessage(Stack[-2], Stack[-1], Stack[-6])
0x370: Pop(2)
0x371: GOTO 0x379

0x372: Push((int) 0)
0x373: PushEmpty(string, int)
0x374: Stack[-1] = Stack[-8]
0x375: Call2 0x38f

0x376: Pop(1)
0x377: @ SendMessage(Stack[-2], Stack[-1], Stack[-6])
0x378: Pop(2)
0x379: Push((int) 65536)
0x37a: Pop(1); Push(Stack[-4] | Stack[-1]);
0x37b: PushEmpty(string, int)
0x37c: Stack[-1] = Stack[-8]
0x37d: Call2 0x38f

0x37e: Pop(1)
0x37f: @ SendMessage(Stack[-2], Stack[-1])
0x380: Pop(2)
0x381: Stack[-4] = 0
0x382: GOTO 0x38a

0x383: Push((int) 32768)
0x384: PushEmpty(string, int)
0x385: Stack[-1] = Stack[-8]
0x386: Call2 0x38f

0x387: Pop(1)
0x388: @ SendMessage(Stack[-2], Stack[-1])
0x389: Pop(2)
0x38a: Push((int) 1)
0x38b: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x38c: GOTO 0x340

0x38d: Return(); Pop(14)

0x38e: Stack[-7] = 0
0x38f: PushEmpty()
0x390: Push((int) 1)
0x391: Pop(1); Push(Stack[-2] + Stack[-1]);
0x392: Push((int) 10)
0x393: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x394: IF (Stack[-1] == 0) GOTO 0x39a; Pop(1)

0x395: Push("slot0")
0x396: Push((int) 1)
0x397: Pop(1); Push(Stack[-3] + Stack[-1]);
0x398: Stack[-4] = Stack[-2] + Stack[-1]; Pop(2);
0x399: Return(); Pop(0)

0x39a: Push("slot")
0x39b: Push((int) 1)
0x39c: Pop(1); Push(Stack[-3] + Stack[-1]);
0x39d: Stack[-4] = Stack[-2] + Stack[-1]; Pop(2);
0x39e: Return(); Pop(0)

0x39f: PushEmpty()
0x3a0: Push((int) 1)
0x3a1: Pop(1); Push(Stack[-2] + Stack[-1]);
0x3a2: Push((int) 10)
0x3a3: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x3a4: IF (Stack[-1] == 0) GOTO 0x3aa; Pop(1)

0x3a5: Push("cslot0")
0x3a6: Push((int) 1)
0x3a7: Pop(1); Push(Stack[-3] + Stack[-1]);
0x3a8: Stack[-4] = Stack[-2] + Stack[-1]; Pop(2);
0x3a9: Return(); Pop(0)

0x3aa: Push("cslot")
0x3ab: Push((int) 1)
0x3ac: Pop(1); Push(Stack[-3] + Stack[-1]);
0x3ad: Stack[-4] = Stack[-2] + Stack[-1]; Pop(2);
0x3ae: Return(); Pop(0)

0x3af: PushEmpty()
0x3b0: Push((int) 1)
0x3b1: Pop(1); Push(Stack[-2] + Stack[-1]);
0x3b2: Push((int) 10)
0x3b3: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x3b4: IF (Stack[-1] == 0) GOTO 0x3ba; Pop(1)

0x3b5: Push("ccslot0")
0x3b6: Push((int) 1)
0x3b7: Pop(1); Push(Stack[-3] + Stack[-1]);
0x3b8: Stack[-4] = Stack[-2] + Stack[-1]; Pop(2);
0x3b9: Return(); Pop(0)

0x3ba: Push("ccslot")
0x3bb: Push((int) 1)
0x3bc: Pop(1); Push(Stack[-3] + Stack[-1]);
0x3bd: Stack[-4] = Stack[-2] + Stack[-1]; Pop(2);
0x3be: Return(); Pop(0)

0x3bf: PushEmpty(int, int)
0x3c0: Push("Money")
0x3c1: @ GetInvItemByName(Stack[-2], Stack[-1])
0x3c2: Pop(1)
0x3c3: Stack[-3] = Stack[-1]
0x3c4: Return(); Pop(2)

