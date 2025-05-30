GlobalVarCount = 0

Strings:
	inventory_base.xml
	scrollbar
	GetItemCount
	GetItem
	GetItemID
	GetItemAmount
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
	Organ
	HasProperty
	RemoveProperty
	Category
	RemoveItem
	AddItem
	Weapon
	slot0
	slot
	cslot0
	cslot
	Money

Import:
	CreateWindow (3 args)
	GetPlayerContainer (1 args)
	GetContainer (1 args)
	SendMessage (2 args)
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
		EVENT_15 Op = 0x42 Vars = (int, int, float)
		EVENT_100 Op = 0xec Vars = (int)
		EVENT_1 Op = 0x104 Vars = (float)
		EVENT_200 Op = 0x110 Vars = (int, string, object)


0x0: Push("inventory_base.xml")
0x1: Push((bool) 0)
0x2: @ CreateWindow(Stack[-2], Stack[-1], Stack[-1])
0x3: Pop(2)
0x4: PushEmpty()
0x5: Call2 0x74

0x6: Pop(0)
0x7: PushEmpty(int)
0x8: Stack[-1] = (int) 0
0x9: Call2 0xcc

0xa: Pop(1)
0xb: Return(); Pop(0)

0xc: PushEmpty(object, object)
0xd: @ GetPlayerContainer(Stack[-1])
0xe: Pop(0)
0xf: Stack[-3] = Stack[-1]
0x10: Return(); Pop(2)

0x11: Stack[-1] = 0
0x12: PushEmpty(int, object, int, int, object, int)
0x13: Stack[-3] = (int) 0
0x14: Push((int) 4)
0x15: Pop(1); Push((bool) Stack[-4] < Stack[-1])
0x16: IF (Stack[-1] == 0) GOTO 0x28; Pop(1)

0x17: PushEmpty(string, int)
0x18: Stack[-1] = Stack[-5]
0x19: Call2 0x2d4

0x1a: Pop(1)
0x1b: Pop(1); Push((bool) Stack[-9] == Stack[-1])
0x1c: IF (Stack[-1] == 0) GOTO 0x25; Pop(1)

0x1d: PushEmpty(int, bool)
0x1e: Stack[-2] = Stack[-5]
0x1f: Push((int) 0)
0x20: Stack[-2] = Stack[-12] == Stack[-1]; Pop(1);
0x21: Call2 0x57

0x22: Pop(2)
0x23: Stack[-10] = (bool) 1
0x24: Return(); Pop(6)

0x25: Push((int) 1)
0x26: Stack[-4] = Stack[-4] + Stack[-1]; Pop(1);
0x27: GOTO 0x14

0x28: Push("scrollbar")
0x29: Pop(1); Push((bool) Stack[-9] == Stack[-1])
0x2a: IF (Stack[-1] == 0) GOTO 0x40; Pop(1)

0x2b: @ GetContainer(Stack[-2])
0x2c: Pop(0)
0x2d: @@ GetItemCount(Stack[-1])
0x2e: Pop(0)
0x2f: Push((float)0.01)
0x30: Push((int) 4)
0x31: Pop(1); Push(Stack[-3] - Stack[-1]);
0x32: Pop(2); Push(Stack[-2] * Stack[-1]);
0x33: Pop(1); Push(Stack[-1] * Stack[-10]);
0x34: Push((float)0.5)
0x35: Stack[2 + Tasks[-1].StackPointer] = Stack[-2] + Stack[-1]; Pop(2);
0x36: Push((int) 0)
0x37: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] < Stack[-1])
0x38: IF (Stack[-1] == 0) GOTO 0x3a; Pop(1)

0x39: Stack[2 + Tasks[-1].StackPointer] = (int)0
0x3a: PushEmpty()
0x3b: Call2 0x9d

0x3c: Pop(0)
0x3d: Stack[-10] = (bool) 1
0x3e: Return(); Pop(6)

0x3f: Stack[-2] = 0
0x40: Stack[-10] = (bool) 0
0x41: Return(); Pop(6)

0x42: PushEmpty()
0x43: Stack[2 + Tasks[-1].StackPointer] = Stack[2 + Tasks[-1].StackPointer] + Stack[-1]; Pop(0);
0x44: Push((int) 0)
0x45: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] < Stack[-1])
0x46: IF (Stack[-1] == 0) GOTO 0x48; Pop(1)

0x47: Stack[2 + Tasks[-1].StackPointer] = (int)0
0x48: PushEmpty()
0x49: Call2 0x74

0x4a: Pop(0)
0x4b: Return(); Pop(0)

0x4c: PushEmpty()
0x4d: Call2 0x9d

0x4e: Pop(0)
0x4f: Return(); Pop(0)

0x50: PushEmpty()
0x51: Call2 0x74

0x52: Pop(0)
0x53: PushEmpty()
0x54: Call2 0x9d

0x55: Pop(0)
0x56: Return(); Pop(0)

0x57: PushEmpty(bool, bool)
0x58: PushEmpty(int)
0x59: PushEmpty(int, bool, int)
0x5a: Stack[-2] = Stack[-5]
0x5b: Stack[-1] = Stack[-8] + Stack[2 + Tasks[-1].StackPointer]; Pop(0);
0x5c: Call2 0x1eb

0x5d: Stack[-4] = Stack[-3]
0x5e: Pop(3)
0x5f: Call2 0x183

0x60: Pop(1)
0x61: Pop(0); Push((bool) Stack[-1] == 0)
0x62: IF (Stack[-1] == 0) GOTO 0x63; Pop(1)

0x63: PushEmpty()
0x64: Call2 0x74

0x65: Pop(0)
0x66: Return(); Pop(2)

0x67: PushEmpty()
0x68: PushEmpty(bool, int, int)
0x69: Stack[-2] = Stack[0 + Tasks[-1].StackPointer]
0x6a: Stack[-1] = Stack[-5]
0x6b: Call2 0x23b

0x6c: Pop(3)
0x6d: Push((int) 1)
0x6e: Stack[2 + Tasks[-1].StackPointer] = Stack[2 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x6f: PushEmpty()
0x70: Call2 0x74

0x71: Pop(0)
0x72: Stack[-3] = (bool) 1
0x73: Return(); Pop(0)

0x74: PushEmpty(object, int, int, int, object, int, int, int)
0x75: @ GetContainer(Stack[-4])
0x76: Pop(0)
0x77: @@ GetItemCount(Stack[-3])
0x78: Pop(0)
0x79: Push((int) 4)
0x7a: Pop(1); Push((bool) Stack[-4] <= Stack[-1])
0x7b: IF (Stack[-1] == 0) GOTO 0x82; Pop(1)

0x7c: Push((int) 16384)
0x7d: Push("scrollbar")
0x7e: @ SendMessage(Stack[-2], Stack[-1])
0x7f: Pop(2)
0x80: Stack[2 + Tasks[-1].StackPointer] = (int)0
0x81: GOTO 0x9b

0x82: Push((int) 4)
0x83: Pop(1); Push(Stack[2 + StackPtr] + Stack[-1]);
0x84: Pop(1); Push((bool) Stack[-1] > Stack[-4])
0x85: IF (Stack[-1] == 0) GOTO 0x93; Pop(1)

0x86: Push((int) 4)
0x87: Pop(1); Push(Stack[2 + StackPtr] + Stack[-1]);
0x88: Pop(1); Push(Stack[-1] - Stack[-4]);
0x89: Stack[2 + Tasks[-1].StackPointer] = Stack[2 + Tasks[-1].StackPointer] - Stack[-1]; Pop(1);
0x8a: Push((int) 100)
0x8b: Pop(1); Push(Stack[2 + StackPtr] * Stack[-1]);
0x8c: Push((int) 4)
0x8d: Pop(1); Push(Stack[-5] - Stack[-1]);
0x8e: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0x8f: Push("scrollbar")
0x90: @ SendMessage(Stack[-3], Stack[-1])
0x91: Pop(1)
0x92: GOTO 0x9b

0x93: Push((int) 100)
0x94: Pop(1); Push(Stack[2 + StackPtr] * Stack[-1]);
0x95: Push((int) 4)
0x96: Pop(1); Push(Stack[-5] - Stack[-1]);
0x97: Stack[-3] = Stack[-2] / Stack[-1]; Pop(2);
0x98: Push("scrollbar")
0x99: @ SendMessage(Stack[-2], Stack[-1])
0x9a: Pop(1)
0x9b: Return(); Pop(8)

0x9c: Stack[-4] = 0
0x9d: PushEmpty(object, int, int, object, int, int, object, int, int, object, int, int)
0x9e: @ GetContainer(Stack[-6])
0x9f: Pop(0)
0xa0: @@ GetItemCount(Stack[-5])
0xa1: Pop(0)
0xa2: Stack[-4] = Stack[2 + Tasks[-1].StackPointer]
0xa3: Push((int) 4)
0xa4: Pop(1); Push(Stack[2 + StackPtr] + Stack[-1]);
0xa5: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0xa6: IF (Stack[-1] == 0) GOTO 0xca; Pop(1)

0xa7: Pop(0); Push((bool) Stack[-4] < Stack[-5])
0xa8: IF (Stack[-1] == 0) GOTO 0xc0; Pop(1)

0xa9: @@ GetItem(Stack[-3], Stack[-4])
0xaa: Pop(0)
0xab: @@ GetItemID(Stack[-2])
0xac: Pop(0)
0xad: @@ GetItemAmount(Stack[-1], Stack[-4])
0xae: Pop(0)
0xaf: Push((int) 0)
0xb0: PushEmpty(string, int)
0xb1: Stack[-1] = Stack[-7] - Stack[2 + Tasks[-1].StackPointer]; Pop(0);
0xb2: Call2 0x2d4

0xb3: Pop(1)
0xb4: @ SendMessage(Stack[-2], Stack[-1], Stack[-5])
0xb5: Pop(2)
0xb6: Push((int) 65536)
0xb7: Pop(1); Push(Stack[-2] | Stack[-1]);
0xb8: PushEmpty(string, int)
0xb9: Stack[-1] = Stack[-7] - Stack[2 + Tasks[-1].StackPointer]; Pop(0);
0xba: Call2 0x2d4

0xbb: Pop(1)
0xbc: @ SendMessage(Stack[-2], Stack[-1])
0xbd: Pop(2)
0xbe: Stack[-3] = 0
0xbf: GOTO 0xc7

0xc0: Push((int) 32768)
0xc1: PushEmpty(string, int)
0xc2: Stack[-1] = Stack[-7] - Stack[2 + Tasks[-1].StackPointer]; Pop(0);
0xc3: Call2 0x2d4

0xc4: Pop(1)
0xc5: @ SendMessage(Stack[-2], Stack[-1])
0xc6: Pop(2)
0xc7: Push((int) 1)
0xc8: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0xc9: GOTO 0xa3

0xca: Return(); Pop(12)

0xcb: Stack[-6] = 0
0xcc: PushEmpty()
0xcd: Stack[0 + Tasks[-1].StackPointer] = (int)-1
0xce: PushEmpty(int)
0xcf: Stack[-1] = Stack[-2]
0xd0: Call2 0x183

0xd1: Pop(1)
0xd2: PushEmpty(int)
0xd3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd4: Call2 0x26d

0xd5: Pop(1)
0xd6: PushEmpty()
0xd7: Call2 0x1a6

0xd8: Pop(0)
0xd9: Push("default")
0xda: @ SetCursor(Stack[-1])
0xdb: Pop(1)
0xdc: @ ShowCursor()
0xdd: Pop(0)
0xde: @ CaptureKeyboard()
0xdf: Pop(0)
0xe0: Push((bool) 0)
0xe1: @ SetOwnerDraw(Stack[-1])
0xe2: Pop(1)
0xe3: Push((bool) 1)
0xe4: @ SetNeedUpdate(Stack[-1])
0xe5: Pop(1)
0xe6: PushEmpty()
0xe7: Call2 0x50

0xe8: Pop(0)
0xe9: @ ProcessEvents()
0xea: Pop(0)
0xeb: Return(); Pop(0)

0xec: PushEmpty()
0xed: @ DestroyWindow()
0xee: Pop(0)
0xef: Return(); Pop(0)

0xf0: PushEmpty()
0xf1: Stack[-2] = (bool) 0
0xf2: Return(); Pop(0)

0xf3: PushEmpty(bool, bool)
0xf4: PushEmpty(object)
0xf5: Call2 0xc

0xf6: Pop(0)
0xf7: PushEmpty(object)
0xf8: Call2 0xc

0xf9: Pop(1)
0xfa: PushEmpty(object)
0xfb: Call2 0xc

0xfc: Pop(1)
0xfd: PushEmpty(object)
0xfe: Call2 0xc

0xff: Pop(1)
0x100: @@ IsItemSelected(Stack[-2], Stack[-5], Stack[-4])
0x101: Pop(1)
0x102: Stack[-5] = Stack[-1]
0x103: Return(); Pop(2)

0x104: PushEmpty()
0x105: PushEmpty(int)
0x106: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x107: Call2 0x26d

0x108: Pop(1)
0x109: PushEmpty()
0x10a: Call2 0x1a6

0x10b: Pop(0)
0x10c: PushEmpty()
0x10d: Call2 0x4c

0x10e: Pop(0)
0x10f: Return(); Pop(0)

0x110: PushEmpty(bool, int, int, object, int, object, bool, int, int, object, int, object)
0x111: Stack[-6] = (bool) 0
0x112: Push("button_weapon")
0x113: Pop(1); Push((bool) Stack[-15] == Stack[-1])
0x114: IF (Stack[-1] == 0) GOTO 0x11b; Pop(1)

0x115: PushEmpty(int)
0x116: Stack[-1] = (int) 0
0x117: Call2 0x183

0x118: Pop(1)
0x119: Stack[-6] = (bool) 1
0x11a: GOTO 0x177

0x11b: Push("button_clothes")
0x11c: Pop(1); Push((bool) Stack[-15] == Stack[-1])
0x11d: IF (Stack[-1] == 0) GOTO 0x124; Pop(1)

0x11e: PushEmpty(int)
0x11f: Stack[-1] = (int) 1
0x120: Call2 0x183

0x121: Pop(1)
0x122: Stack[-6] = (bool) 1
0x123: GOTO 0x177

0x124: Push("button_medcine")
0x125: Pop(1); Push((bool) Stack[-15] == Stack[-1])
0x126: IF (Stack[-1] == 0) GOTO 0x12d; Pop(1)

0x127: PushEmpty(int)
0x128: Stack[-1] = (int) 2
0x129: Call2 0x183

0x12a: Pop(1)
0x12b: Stack[-6] = (bool) 1
0x12c: GOTO 0x177

0x12d: Push("button_food")
0x12e: Pop(1); Push((bool) Stack[-15] == Stack[-1])
0x12f: IF (Stack[-1] == 0) GOTO 0x136; Pop(1)

0x130: PushEmpty(int)
0x131: Stack[-1] = (int) 3
0x132: Call2 0x183

0x133: Pop(1)
0x134: Stack[-6] = (bool) 1
0x135: GOTO 0x177

0x136: Push("button_other")
0x137: Pop(1); Push((bool) Stack[-15] == Stack[-1])
0x138: IF (Stack[-1] == 0) GOTO 0x13f; Pop(1)

0x139: PushEmpty(int)
0x13a: Stack[-1] = (int) 4
0x13b: Call2 0x183

0x13c: Pop(1)
0x13d: Stack[-6] = (bool) 1
0x13e: GOTO 0x177

0x13f: Push("button_detector")
0x140: Pop(1); Push((bool) Stack[-15] == Stack[-1])
0x141: IF (Stack[-1] == 0) GOTO 0x143; Pop(1)

0x142: GOTO 0x177

0x143: Push("button_anticeptic")
0x144: Pop(1); Push((bool) Stack[-15] == Stack[-1])
0x145: IF (Stack[-1] == 0) GOTO 0x147; Pop(1)

0x146: GOTO 0x177

0x147: Push((int) 0)
0x148: Pop(1); Push((bool) Stack[-16] != Stack[-1])
0x149: IF (Stack[-1] == 0) GOTO 0x150; Pop(1)

0x14a: Push("noinv_drop")
0x14b: @ GetVariable(Stack[-1], Stack[-6])
0x14c: Pop(1)
0x14d: Push(Stack[-5])
0x14e: IF (Stack[-1] == 0) GOTO 0x150; Pop(1)

0x14f: Return(); Pop(12)

0x150: Stack[-4] = (int) 0
0x151: Push((int) 12)
0x152: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x153: IF (Stack[-1] == 0) GOTO 0x177; Pop(1)

0x154: PushEmpty(string, int)
0x155: Stack[-1] = Stack[-6]
0x156: Call2 0x2c4

0x157: Pop(1)
0x158: Pop(1); Push((bool) Stack[-15] == Stack[-1])
0x159: IF (Stack[-1] == 0) GOTO 0x174; Pop(1)

0x15a: PushEmpty(object)
0x15b: Call2 0xc

0x15c: Stack[-4] = Stack[-1]
0x15d: Pop(1)
0x15e: @@ GetItemCount(Stack[-2], Stack[-0])
0x15f: Pop(0)
0x160: Pop(0); Push((bool) Stack[-2] > Stack[-4])
0x161: IF (Stack[-1] == 0) GOTO 0x172; Pop(1)

0x162: @@ GetItem(Stack[-1], Stack[-4], Stack[-0])
0x163: Pop(0)
0x164: PushEmpty(bool, object)
0x165: Stack[-1] = Stack[-3]
0x166: Call2 0xf0

0x167: Pop(1)
0x168: Pop(1); Push((bool) Stack[-1] == 0)
0x169: IF (Stack[-1] == 0) GOTO 0x171; Pop(1)

0x16a: PushEmpty(bool, int, bool)
0x16b: Stack[-2] = Stack[-7]
0x16c: Push((int) 0)
0x16d: Stack[-2] = Stack[-19] == Stack[-1]; Pop(1);
0x16e: Call2 0x67

0x16f: Stack[-9] = Stack[-3]
0x170: Pop(3)
0x171: Stack[-1] = 0
0x172: GOTO 0x177

0x173: Stack[-3] = 0
0x174: Push((int) 1)
0x175: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x176: GOTO 0x151

0x177: Pop(0); Push((bool) Stack[-6] == 0)
0x178: IF (Stack[-1] == 0) GOTO 0x180; Pop(1)

0x179: PushEmpty(bool, int, string, object)
0x17a: Stack[-3] = Stack[-19]
0x17b: Stack[-2] = Stack[-18]
0x17c: Stack[-1] = Stack[-17]
0x17d: Call2 0x12

0x17e: Stack[-10] = Stack[-4]
0x17f: Pop(4)
0x180: Push(Stack[-6])
0x181: IF (Stack[-1] == 0) GOTO 0x182; Pop(1)

0x182: Return(); Pop(12)

0x183: PushEmpty()
0x184: Push((int) -1)
0x185: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x186: IF (Stack[-1] == 0) GOTO 0x188; Pop(1)

0x187: Return(); Pop(0)

0x188: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == Stack[-1])
0x189: IF (Stack[-1] == 0) GOTO 0x18b; Pop(1)

0x18a: Return(); Pop(0)

0x18b: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x18c: PushEmpty(int)
0x18d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x18e: Call2 0x1ad

0x18f: Pop(1)
0x190: Return(); Pop(0)

0x191: PushEmpty(object, int, object, int)
0x192: PushEmpty(object)
0x193: Call2 0xc

0x194: Stack[-3] = Stack[-1]
0x195: Pop(1)
0x196: Push("money")
0x197: @@ GetProperty(Stack[-1], Stack[-2])
0x198: Pop(1)
0x199: Stack[-5] = Stack[-1]
0x19a: Return(); Pop(4)

0x19b: Stack[-2] = 0
0x19c: PushEmpty(object, object)
0x19d: PushEmpty(object)
0x19e: Call2 0xc

0x19f: Stack[-2] = Stack[-1]
0x1a0: Pop(1)
0x1a1: Push("money")
0x1a2: @@ SetProperty(Stack[-1], Stack[-4])
0x1a3: Pop(1)
0x1a4: Return(); Pop(2)

0x1a5: Stack[-1] = 0
0x1a6: PushEmpty(int)
0x1a7: Call2 0x191

0x1a8: Pop(0)
0x1a9: Push("money")
0x1aa: @ SendMessage(Stack[-2], Stack[-1])
0x1ab: Pop(2)
0x1ac: Return(); Pop(0)

0x1ad: PushEmpty()
0x1ae: Push((int) 0)
0x1af: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x1b0: IF (Stack[-1] == 0) GOTO 0x1b6; Pop(1)

0x1b1: Push((int) 0)
0x1b2: Push("button_weapon")
0x1b3: @ SendMessage(Stack[-2], Stack[-1])
0x1b4: Pop(2)
0x1b5: GOTO 0x1ba

0x1b6: Push((int) 1)
0x1b7: Push("button_weapon")
0x1b8: @ SendMessage(Stack[-2], Stack[-1])
0x1b9: Pop(2)
0x1ba: Push((int) 1)
0x1bb: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x1bc: IF (Stack[-1] == 0) GOTO 0x1c2; Pop(1)

0x1bd: Push((int) 0)
0x1be: Push("button_clothes")
0x1bf: @ SendMessage(Stack[-2], Stack[-1])
0x1c0: Pop(2)
0x1c1: GOTO 0x1c6

0x1c2: Push((int) 1)
0x1c3: Push("button_clothes")
0x1c4: @ SendMessage(Stack[-2], Stack[-1])
0x1c5: Pop(2)
0x1c6: Push((int) 2)
0x1c7: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x1c8: IF (Stack[-1] == 0) GOTO 0x1ce; Pop(1)

0x1c9: Push((int) 0)
0x1ca: Push("button_medcine")
0x1cb: @ SendMessage(Stack[-2], Stack[-1])
0x1cc: Pop(2)
0x1cd: GOTO 0x1d2

0x1ce: Push((int) 1)
0x1cf: Push("button_medcine")
0x1d0: @ SendMessage(Stack[-2], Stack[-1])
0x1d1: Pop(2)
0x1d2: Push((int) 3)
0x1d3: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x1d4: IF (Stack[-1] == 0) GOTO 0x1da; Pop(1)

0x1d5: Push((int) 0)
0x1d6: Push("button_food")
0x1d7: @ SendMessage(Stack[-2], Stack[-1])
0x1d8: Pop(2)
0x1d9: GOTO 0x1de

0x1da: Push((int) 1)
0x1db: Push("button_food")
0x1dc: @ SendMessage(Stack[-2], Stack[-1])
0x1dd: Pop(2)
0x1de: Push((int) 4)
0x1df: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x1e0: IF (Stack[-1] == 0) GOTO 0x1e6; Pop(1)

0x1e1: Push((int) 0)
0x1e2: Push("button_other")
0x1e3: @ SendMessage(Stack[-2], Stack[-1])
0x1e4: Pop(2)
0x1e5: GOTO 0x1ea

0x1e6: Push((int) 1)
0x1e7: Push("button_other")
0x1e8: @ SendMessage(Stack[-2], Stack[-1])
0x1e9: Pop(2)
0x1ea: Return(); Pop(0)

0x1eb: PushEmpty(object, object, object, int, int, int, bool, int, int, bool, bool, object, object, object, int, int, int, bool, int, int, bool, bool)
0x1ec: Stack[-24] = (bool) 0
0x1ed: Push((int) -1)
0x1ee: Pop(1); Push((bool) Stack[-24] == Stack[-1])
0x1ef: IF (Stack[-1] == 0) GOTO 0x1f2; Pop(1)

0x1f0: Stack[-25] = (int) -1
0x1f1: Return(); Pop(22)

0x1f2: PushEmpty(object)
0x1f3: Call2 0xc

0x1f4: Stack[-11] = Stack[-1]
0x1f5: Pop(1)
0x1f6: @ GetContainer(Stack[-11])
0x1f7: Pop(0)
0x1f8: @@ GetItemCount(Stack[-8])
0x1f9: Pop(0)
0x1fa: Pop(0); Push((bool) Stack[-8] <= Stack[-23])
0x1fb: IF (Stack[-1] == 0) GOTO 0x1fe; Pop(1)

0x1fc: Stack[-25] = (int) -1
0x1fd: Return(); Pop(22)

0x1fe: @@ GetItemAmount(Stack[-7], Stack[-23])
0x1ff: Pop(0)
0x200: Push((int) 0)
0x201: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x202: IF (Stack[-1] == 0) GOTO 0x205; Pop(1)

0x203: Stack[-25] = (int) -1
0x204: Return(); Pop(22)

0x205: @@ GetItem(Stack[-9], Stack[-23])
0x206: Pop(0)
0x207: @@ GetItemID(Stack[-6])
0x208: Pop(0)
0x209: Stack[-5] = (bool) 0
0x20a: Push("Organ")
0x20b: @@ HasProperty(Stack[-6], Stack[-1])
0x20c: Pop(1)
0x20d: Push(Stack[-5])
0x20e: IF (Stack[-1] == 0) GOTO 0x212; Pop(1)

0x20f: Push("Organ")
0x210: @@ RemoveProperty(Stack[-1])
0x211: Pop(1)
0x212: Push("Category")
0x213: @ GetInvItemProperty(Stack[-5], Stack[-7], Stack[-1])
0x214: Pop(1)
0x215: PushEmpty(int)
0x216: Call2 0x2e4

0x217: Pop(0)
0x218: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x219: IF (Stack[-1] == 0) GOTO 0x22b; Pop(1)

0x21a: PushEmpty(int)
0x21b: Call2 0x191

0x21c: Stack[-4] = Stack[-1]
0x21d: Pop(1)
0x21e: Stack[-3] = Stack[-3] + Stack[-7]; Pop(0);
0x21f: PushEmpty(int)
0x220: Stack[-1] = Stack[-4]
0x221: Call2 0x19c

0x222: Pop(1)
0x223: @@ RemoveItem(Stack[-23], Stack[-7])
0x224: Pop(0)
0x225: PushEmpty()
0x226: Call2 0x1a6

0x227: Pop(0)
0x228: Stack[-24] = (bool) 1
0x229: Stack[-25] = (int) -1
0x22a: Return(); Pop(22)

0x22b: Push((int) 1)
0x22c: @@ AddItem(Stack[-2], Stack[-10], Stack[-5], Stack[-1])
0x22d: Pop(1)
0x22e: Pop(0); Push((bool) Stack[-1] == 0)
0x22f: IF (Stack[-1] == 0) GOTO 0x232; Pop(1)

0x230: Stack[-25] = Stack[-4]
0x231: Return(); Pop(22)

0x232: Stack[-24] = (bool) 1
0x233: Push((int) 1)
0x234: @@ RemoveItem(Stack[-24], Stack[-1])
0x235: Pop(1)
0x236: Stack[-25] = Stack[-4]
0x237: Return(); Pop(22)

0x238: Stack[-9] = 0
0x239: Stack[-10] = 0
0x23a: Stack[-11] = 0
0x23b: PushEmpty(object, object, object, int, int, bool, int, bool, bool, object, object, object, int, int, bool, int, bool, bool)
0x23c: PushEmpty(object)
0x23d: Call2 0xc

0x23e: Stack[-9] = Stack[-1]
0x23f: Pop(1)
0x240: @ GetContainer(Stack[-9])
0x241: Pop(0)
0x242: @@ GetItemCount(Stack[-6], Stack[-20])
0x243: Pop(0)
0x244: Pop(0); Push((bool) Stack[-6] <= Stack[-19])
0x245: IF (Stack[-1] == 0) GOTO 0x248; Pop(1)

0x246: Stack[-21] = (bool) 0
0x247: Return(); Pop(18)

0x248: @@ GetItemAmount(Stack[-5], Stack[-19], Stack[-20])
0x249: Pop(0)
0x24a: @@ GetItem(Stack[-7], Stack[-19], Stack[-20])
0x24b: Pop(0)
0x24c: Push((int) 0)
0x24d: Push((int) 1)
0x24e: @@ AddItem(Stack[-6], Stack[-9], Stack[-2], Stack[-1])
0x24f: Pop(2)
0x250: Pop(0); Push((bool) Stack[-4] == 0)
0x251: IF (Stack[-1] == 0) GOTO 0x254; Pop(1)

0x252: Stack[-21] = (bool) 0
0x253: Return(); Pop(18)

0x254: Push((int) 0)
0x255: Pop(1); Push((bool) Stack[0 + Tasks[-1].StackPointer] == Stack[-1])
0x256: IF (Stack[-1] == 0) GOTO 0x265; Pop(1)

0x257: @@ GetItemID(Stack[-3])
0x258: Pop(0)
0x259: Push("Weapon")
0x25a: @ HasInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0x25b: Pop(1)
0x25c: Push(Stack[-2])
0x25d: IF (Stack[-1] == 0) GOTO 0x265; Pop(1)

0x25e: @@ IsItemSelected(Stack[-1], Stack[-19], Stack[-0])
0x25f: Pop(0)
0x260: Push(Stack[-1])
0x261: IF (Stack[-1] == 0) GOTO 0x265; Pop(1)

0x262: Push((int) -1)
0x263: @ SetPlayerHandsItem(Stack[-1])
0x264: Pop(1)
0x265: Push((int) 1)
0x266: @@ RemoveItem(Stack[-20], Stack[-1], Stack[-21])
0x267: Pop(1)
0x268: Stack[-21] = (bool) 1
0x269: Return(); Pop(18)

0x26a: Stack[-7] = 0
0x26b: Stack[-8] = 0
0x26c: Stack[-9] = 0
0x26d: PushEmpty(object, int, int, object, int, bool, bool, object, int, int, object, int, bool, bool)
0x26e: PushEmpty(object)
0x26f: Call2 0xc

0x270: Stack[-8] = Stack[-1]
0x271: Pop(1)
0x272: @@ GetItemCount(Stack[-6], Stack[-15])
0x273: Pop(0)
0x274: Stack[-5] = (int) 0
0x275: Push((int) 12)
0x276: Pop(1); Push((bool) Stack[-6] < Stack[-1])
0x277: IF (Stack[-1] == 0) GOTO 0x2c2; Pop(1)

0x278: Pop(0); Push((bool) Stack[-5] < Stack[-6])
0x279: IF (Stack[-1] == 0) GOTO 0x2b8; Pop(1)

0x27a: @@ GetItem(Stack[-4], Stack[-5], Stack[-15])
0x27b: Pop(0)
0x27c: @@ GetItemAmount(Stack[-3], Stack[-5], Stack[-15])
0x27d: Pop(0)
0x27e: PushEmpty(bool, int, int)
0x27f: Stack[-2] = Stack[-8]
0x280: Stack[-1] = Stack[-18]
0x281: Call2 0xf3

0x282: Stack[-5] = Stack[-3]
0x283: Pop(3)
0x284: PushEmpty(bool, object)
0x285: Stack[-1] = Stack[-6]
0x286: Call2 0xf0

0x287: Stack[-3] = Stack[-2]
0x288: Pop(2)
0x289: Push(Stack[-2])
0x28a: IF (Stack[-1] == 0) GOTO 0x29d; Pop(1)

0x28b: Push(Stack[-1])
0x28c: IF (Stack[-1] == 0) GOTO 0x295; Pop(1)

0x28d: Push((int) 0)
0x28e: PushEmpty(string, int)
0x28f: Stack[-1] = Stack[-8]
0x290: Call2 0x2c4

0x291: Pop(1)
0x292: @ SendMessage(Stack[-2], Stack[-1], Stack[-6])
0x293: Pop(2)
0x294: GOTO 0x29c

0x295: Push((int) 16384)
0x296: PushEmpty(string, int)
0x297: Stack[-1] = Stack[-8]
0x298: Call2 0x2c4

0x299: Pop(1)
0x29a: @ SendMessage(Stack[-2], Stack[-1], Stack[-6])
0x29b: Pop(2)
0x29c: GOTO 0x2ae

0x29d: Push(Stack[-1])
0x29e: IF (Stack[-1] == 0) GOTO 0x2a7; Pop(1)

0x29f: Push((int) 131072)
0x2a0: PushEmpty(string, int)
0x2a1: Stack[-1] = Stack[-8]
0x2a2: Call2 0x2c4

0x2a3: Pop(1)
0x2a4: @ SendMessage(Stack[-2], Stack[-1], Stack[-6])
0x2a5: Pop(2)
0x2a6: GOTO 0x2ae

0x2a7: Push((int) 0)
0x2a8: PushEmpty(string, int)
0x2a9: Stack[-1] = Stack[-8]
0x2aa: Call2 0x2c4

0x2ab: Pop(1)
0x2ac: @ SendMessage(Stack[-2], Stack[-1], Stack[-6])
0x2ad: Pop(2)
0x2ae: Push((int) 65536)
0x2af: Pop(1); Push(Stack[-4] | Stack[-1]);
0x2b0: PushEmpty(string, int)
0x2b1: Stack[-1] = Stack[-8]
0x2b2: Call2 0x2c4

0x2b3: Pop(1)
0x2b4: @ SendMessage(Stack[-2], Stack[-1])
0x2b5: Pop(2)
0x2b6: Stack[-4] = 0
0x2b7: GOTO 0x2bf

0x2b8: Push((int) 32768)
0x2b9: PushEmpty(string, int)
0x2ba: Stack[-1] = Stack[-8]
0x2bb: Call2 0x2c4

0x2bc: Pop(1)
0x2bd: @ SendMessage(Stack[-2], Stack[-1])
0x2be: Pop(2)
0x2bf: Push((int) 1)
0x2c0: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x2c1: GOTO 0x275

0x2c2: Return(); Pop(14)

0x2c3: Stack[-7] = 0
0x2c4: PushEmpty()
0x2c5: Push((int) 1)
0x2c6: Pop(1); Push(Stack[-2] + Stack[-1]);
0x2c7: Push((int) 10)
0x2c8: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x2c9: IF (Stack[-1] == 0) GOTO 0x2cf; Pop(1)

0x2ca: Push("slot0")
0x2cb: Push((int) 1)
0x2cc: Pop(1); Push(Stack[-3] + Stack[-1]);
0x2cd: Stack[-4] = Stack[-2] + Stack[-1]; Pop(2);
0x2ce: Return(); Pop(0)

0x2cf: Push("slot")
0x2d0: Push((int) 1)
0x2d1: Pop(1); Push(Stack[-3] + Stack[-1]);
0x2d2: Stack[-4] = Stack[-2] + Stack[-1]; Pop(2);
0x2d3: Return(); Pop(0)

0x2d4: PushEmpty()
0x2d5: Push((int) 1)
0x2d6: Pop(1); Push(Stack[-2] + Stack[-1]);
0x2d7: Push((int) 10)
0x2d8: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x2d9: IF (Stack[-1] == 0) GOTO 0x2df; Pop(1)

0x2da: Push("cslot0")
0x2db: Push((int) 1)
0x2dc: Pop(1); Push(Stack[-3] + Stack[-1]);
0x2dd: Stack[-4] = Stack[-2] + Stack[-1]; Pop(2);
0x2de: Return(); Pop(0)

0x2df: Push("cslot")
0x2e0: Push((int) 1)
0x2e1: Pop(1); Push(Stack[-3] + Stack[-1]);
0x2e2: Stack[-4] = Stack[-2] + Stack[-1]; Pop(2);
0x2e3: Return(); Pop(0)

0x2e4: PushEmpty(int, int)
0x2e5: Push("Money")
0x2e6: @ GetInvItemByName(Stack[-2], Stack[-1])
0x2e7: Pop(1)
0x2e8: Stack[-3] = Stack[-1]
0x2e9: Return(); Pop(2)

