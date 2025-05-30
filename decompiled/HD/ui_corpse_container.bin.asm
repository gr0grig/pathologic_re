GlobalVarCount = 0

Strings:
	inventory_base.xml
	$parent
	add
	GetItemCount
	scrollbar
	take_organ
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
	CreateStringVector (1 args)
	SendMessage (3 args)
	SendMessage (2 args)
	GetPlayerContainer (1 args)
	GetContainer (1 args)
	PlaySound (1 args)
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
	GTASK_0 Vars = (int, object, int, int) Params = 0
		EVENT_15 Op = 0x260 Vars = (int, int, float)
		EVENT_100 Op = 0x3ec Vars = (int)
		EVENT_102 Op = 0x3f0 Vars = (int)
		EVENT_101 Op = 0x3f6 Vars = (int)
		EVENT_1 Op = 0x4ad Vars = (float)
		EVENT_200 Op = 0x4b9 Vars = (int, string, object)


0x0: PushEmpty(int, object, string, string, int, object, int, object, string, string, int, object)
0x1: Push("inventory_base.xml")
0x2: Push((bool) 0)
0x3: @ CreateWindow(Stack[-2], Stack[-1], Stack[-1])
0x4: Pop(2)
0x5: PushEmpty()
0x6: Call2 0x2ab

0x7: Pop(0)
0x8: Stack[3 + Tasks[-1].StackPointer] = (int)2
0x9: Stack[-6] = (int) 0
0xa: Push((int) 4)
0xb: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0xc: IF (Stack[-1] == 0) GOTO 0x38; Pop(1)

0xd: @ CreateStringVector(Stack[-5])
0xe: Pop(0)
0xf: Push((int) 1)
0x10: Pop(1); Push(Stack[-7] - Stack[-1]);
0x11: Push((int) 0)
0x12: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x13: IF (Stack[-1] == 0) GOTO 0x1b; Pop(1)

0x14: PushEmpty(string, int)
0x15: Push((int) 1)
0x16: Stack[-2] = Stack[-9] - Stack[-1]; Pop(1);
0x17: Call2 0x688

0x18: Stack[-6] = Stack[-2]
0x19: Pop(2)
0x1a: GOTO 0x1c

0x1b: Stack[-4] = "$parent"
0x1c: Push((int) 1)
0x1d: Pop(1); Push(Stack[-7] + Stack[-1]);
0x1e: Push((int) 4)
0x1f: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x20: IF (Stack[-1] == 0) GOTO 0x28; Pop(1)

0x21: PushEmpty(string, int)
0x22: Push((int) 1)
0x23: Stack[-2] = Stack[-9] + Stack[-1]; Pop(1);
0x24: Call2 0x688

0x25: Stack[-5] = Stack[-2]
0x26: Pop(2)
0x27: GOTO 0x29

0x28: Stack[-3] = "$parent"
0x29: @@ add(Stack[-4])
0x2a: Pop(0)
0x2b: @@ add(Stack[-3])
0x2c: Pop(0)
0x2d: Push((int) -1)
0x2e: PushEmpty(string, int)
0x2f: Stack[-1] = Stack[-9]
0x30: Call2 0x688

0x31: Pop(1)
0x32: @ SendMessage(Stack[-2], Stack[-1], Stack[-7])
0x33: Pop(2)
0x34: Stack[-5] = 0
0x35: Push((int) 1)
0x36: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x37: GOTO 0xa

0x38: Stack[-2] = (int) 0
0x39: Push((int) 4)
0x3a: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x3b: IF (Stack[-1] == 0) GOTO 0x5f; Pop(1)

0x3c: @ CreateStringVector(Stack[-1])
0x3d: Pop(0)
0x3e: PushEmpty(string, int)
0x3f: Push((int) 4)
0x40: Pop(1); Push(Stack[-5] + Stack[-1]);
0x41: Push((int) 1)
0x42: Pop(2); Push(Stack[-2] - Stack[-1]);
0x43: Push((int) 4)
0x44: Stack[-3] = Stack[-2] % Stack[-1]; Pop(2);
0x45: Call2 0x698

0x46: Pop(1)
0x47: @@ add(Stack[-1])
0x48: Pop(1)
0x49: PushEmpty(string, int)
0x4a: Push((int) 4)
0x4b: Pop(1); Push(Stack[-5] + Stack[-1]);
0x4c: Push((int) 1)
0x4d: Pop(2); Push(Stack[-2] + Stack[-1]);
0x4e: Push((int) 4)
0x4f: Stack[-3] = Stack[-2] % Stack[-1]; Pop(2);
0x50: Call2 0x698

0x51: Pop(1)
0x52: @@ add(Stack[-1])
0x53: Pop(1)
0x54: Push((int) -1)
0x55: PushEmpty(string, int)
0x56: Stack[-1] = Stack[-5]
0x57: Call2 0x698

0x58: Pop(1)
0x59: @ SendMessage(Stack[-2], Stack[-1], Stack[-3])
0x5a: Pop(2)
0x5b: Stack[-1] = 0
0x5c: Push((int) 1)
0x5d: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x5e: GOTO 0x39

0x5f: PushEmpty(int)
0x60: Stack[-1] = (int) 0
0x61: Call2 0x3a2

0x62: Pop(1)
0x63: Return(); Pop(12)

0x64: Push((int) -6)
0x65: PushEmpty(string, int)
0x66: Stack[-1] = (int) 0
0x67: Call2 0x678

0x68: Pop(1)
0x69: @ SendMessage(Stack[-2], Stack[-1])
0x6a: Pop(2)
0x6b: Push((int) -6)
0x6c: PushEmpty(string, int)
0x6d: Stack[-1] = (int) 0
0x6e: Call2 0x698

0x6f: Pop(1)
0x70: @ SendMessage(Stack[-2], Stack[-1])
0x71: Pop(2)
0x72: Push((int) -6)
0x73: PushEmpty(string, int)
0x74: Stack[-1] = (int) 0
0x75: Call2 0x688

0x76: Pop(1)
0x77: @ SendMessage(Stack[-2], Stack[-1])
0x78: Pop(2)
0x79: Return(); Pop(0)

0x7a: PushEmpty(int, int, int, int, int, int, int, int, int, int, int, int)
0x7b: Push((int) 267)
0x7c: Pop(1); Push((bool) Stack[-14] == Stack[-1])
0x7d: IF (Stack[-1] == 0) GOTO 0xaa; Pop(1)

0x7e: Push((int) 0)
0x7f: Pop(1); Push((bool) Stack[3 + Tasks[-1].StackPointer] == Stack[-1])
0x80: IF (Stack[-1] == 0) GOTO 0x91; Pop(1)

0x81: Stack[3 + Tasks[-1].StackPointer] = (int)1
0x82: Stack[-6] = (int) 0
0x83: Push((int) 4)
0x84: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x85: IF (Stack[-1] == 0) GOTO 0x90; Pop(1)

0x86: Push((int) -7)
0x87: PushEmpty(string, int)
0x88: Stack[-1] = Stack[-9]
0x89: Call2 0x698

0x8a: Pop(1)
0x8b: @ SendMessage(Stack[-2], Stack[-1])
0x8c: Pop(2)
0x8d: Push((int) 1)
0x8e: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x8f: GOTO 0x83

0x90: GOTO 0xaa

0x91: PushEmpty(bool)
0x92: Stack[-1] = (bool) 1
0x93: Push((int) 1)
0x94: Pop(1); Push((bool) Stack[3 + Tasks[-1].StackPointer] == Stack[-1])
0x95: IF (Stack[-1] == 0) GOTO 0x9a; Pop(1)

0x96: Push((int) 2)
0x97: Pop(1); Push((bool) Stack[3 + Tasks[-1].StackPointer] == Stack[-1])
0x98: IF (Stack[-1] == 0) GOTO 0x9a; Pop(1)

0x99: Stack[-1] = (bool) 0
0x9a: IF (Stack[-1] == 0) GOTO 0xaa; Pop(1)

0x9b: Stack[3 + Tasks[-1].StackPointer] = (int)2
0x9c: Stack[-5] = (int) 0
0x9d: Push((int) 4)
0x9e: Pop(1); Push((bool) Stack[-6] < Stack[-1])
0x9f: IF (Stack[-1] == 0) GOTO 0xaa; Pop(1)

0xa0: Push((int) -7)
0xa1: PushEmpty(string, int)
0xa2: Stack[-1] = Stack[-8]
0xa3: Call2 0x688

0xa4: Pop(1)
0xa5: @ SendMessage(Stack[-2], Stack[-1])
0xa6: Pop(2)
0xa7: Push((int) 1)
0xa8: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0xa9: GOTO 0x9d

0xaa: Push((int) 268)
0xab: Pop(1); Push((bool) Stack[-14] == Stack[-1])
0xac: IF (Stack[-1] == 0) GOTO 0xd9; Pop(1)

0xad: PushEmpty(bool)
0xae: Stack[-1] = (bool) 1
0xaf: Push((int) 1)
0xb0: Pop(1); Push((bool) Stack[3 + Tasks[-1].StackPointer] == Stack[-1])
0xb1: IF (Stack[-1] == 0) GOTO 0xb6; Pop(1)

0xb2: Push((int) 0)
0xb3: Pop(1); Push((bool) Stack[3 + Tasks[-1].StackPointer] == Stack[-1])
0xb4: IF (Stack[-1] == 0) GOTO 0xb6; Pop(1)

0xb5: Stack[-1] = (bool) 0
0xb6: IF (Stack[-1] == 0) GOTO 0xc7; Pop(1)

0xb7: Stack[3 + Tasks[-1].StackPointer] = (int)0
0xb8: Stack[-4] = (int) 0
0xb9: Push((int) 12)
0xba: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0xbb: IF (Stack[-1] == 0) GOTO 0xc6; Pop(1)

0xbc: Push((int) -7)
0xbd: PushEmpty(string, int)
0xbe: Stack[-1] = Stack[-7]
0xbf: Call2 0x678

0xc0: Pop(1)
0xc1: @ SendMessage(Stack[-2], Stack[-1])
0xc2: Pop(2)
0xc3: Push((int) 1)
0xc4: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0xc5: GOTO 0xb9

0xc6: GOTO 0xd9

0xc7: Push((int) 2)
0xc8: Pop(1); Push((bool) Stack[3 + Tasks[-1].StackPointer] == Stack[-1])
0xc9: IF (Stack[-1] == 0) GOTO 0xd9; Pop(1)

0xca: Stack[3 + Tasks[-1].StackPointer] = (int)1
0xcb: Stack[-3] = (int) 0
0xcc: Push((int) 4)
0xcd: Pop(1); Push((bool) Stack[-4] < Stack[-1])
0xce: IF (Stack[-1] == 0) GOTO 0xd9; Pop(1)

0xcf: Push((int) -7)
0xd0: PushEmpty(string, int)
0xd1: Stack[-1] = Stack[-6]
0xd2: Call2 0x698

0xd3: Pop(1)
0xd4: @ SendMessage(Stack[-2], Stack[-1])
0xd5: Pop(2)
0xd6: Push((int) 1)
0xd7: Stack[-4] = Stack[-4] + Stack[-1]; Pop(1);
0xd8: GOTO 0xcc

0xd9: Push((int) 0)
0xda: Pop(1); Push((bool) Stack[3 + Tasks[-1].StackPointer] == Stack[-1])
0xdb: IF (Stack[-1] == 0) GOTO 0xe1; Pop(1)

0xdc: PushEmpty(int)
0xdd: Stack[-1] = Stack[-14]
0xde: Call2 0x451

0xdf: Pop(1)
0xe0: Return(); Pop(12)

0xe1: Push((int) 269)
0xe2: Pop(1); Push((bool) Stack[-14] == Stack[-1])
0xe3: IF (Stack[-1] == 0) GOTO 0x100; Pop(1)

0xe4: Stack[-2] = (int) 0
0xe5: Push((int) 4)
0xe6: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0xe7: IF (Stack[-1] == 0) GOTO 0x100; Pop(1)

0xe8: Push((int) 2)
0xe9: Pop(1); Push((bool) Stack[3 + Tasks[-1].StackPointer] == Stack[-1])
0xea: IF (Stack[-1] == 0) GOTO 0xf3; Pop(1)

0xeb: Push((int) -2)
0xec: PushEmpty(string, int)
0xed: Stack[-1] = Stack[-5]
0xee: Call2 0x688

0xef: Pop(1)
0xf0: @ SendMessage(Stack[-2], Stack[-1])
0xf1: Pop(2)
0xf2: GOTO 0xfd

0xf3: Push((int) 1)
0xf4: Pop(1); Push((bool) Stack[3 + Tasks[-1].StackPointer] == Stack[-1])
0xf5: IF (Stack[-1] == 0) GOTO 0xfd; Pop(1)

0xf6: Push((int) -2)
0xf7: PushEmpty(string, int)
0xf8: Stack[-1] = Stack[-5]
0xf9: Call2 0x698

0xfa: Pop(1)
0xfb: @ SendMessage(Stack[-2], Stack[-1])
0xfc: Pop(2)
0xfd: Push((int) 1)
0xfe: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0xff: GOTO 0xe5

0x100: Push((int) 270)
0x101: Pop(1); Push((bool) Stack[-14] == Stack[-1])
0x102: IF (Stack[-1] == 0) GOTO 0x11f; Pop(1)

0x103: Stack[-1] = (int) 0
0x104: Push((int) 4)
0x105: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x106: IF (Stack[-1] == 0) GOTO 0x11f; Pop(1)

0x107: Push((int) 2)
0x108: Pop(1); Push((bool) Stack[3 + Tasks[-1].StackPointer] == Stack[-1])
0x109: IF (Stack[-1] == 0) GOTO 0x112; Pop(1)

0x10a: Push((int) -3)
0x10b: PushEmpty(string, int)
0x10c: Stack[-1] = Stack[-4]
0x10d: Call2 0x688

0x10e: Pop(1)
0x10f: @ SendMessage(Stack[-2], Stack[-1])
0x110: Pop(2)
0x111: GOTO 0x11c

0x112: Push((int) 1)
0x113: Pop(1); Push((bool) Stack[3 + Tasks[-1].StackPointer] == Stack[-1])
0x114: IF (Stack[-1] == 0) GOTO 0x11c; Pop(1)

0x115: Push((int) -3)
0x116: PushEmpty(string, int)
0x117: Stack[-1] = Stack[-4]
0x118: Call2 0x698

0x119: Pop(1)
0x11a: @ SendMessage(Stack[-2], Stack[-1])
0x11b: Pop(2)
0x11c: Push((int) 1)
0x11d: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x11e: GOTO 0x104

0x11f: Return(); Pop(12)

0x120: PushEmpty(int, int, int, int, int, int, int, int, int, int, int, int)
0x121: Push((int) 272)
0x122: Pop(1); Push((bool) Stack[-14] == Stack[-1])
0x123: IF (Stack[-1] == 0) GOTO 0x150; Pop(1)

0x124: Push((int) 0)
0x125: Pop(1); Push((bool) Stack[3 + Tasks[-1].StackPointer] == Stack[-1])
0x126: IF (Stack[-1] == 0) GOTO 0x137; Pop(1)

0x127: Stack[3 + Tasks[-1].StackPointer] = (int)1
0x128: Stack[-6] = (int) 0
0x129: Push((int) 4)
0x12a: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x12b: IF (Stack[-1] == 0) GOTO 0x136; Pop(1)

0x12c: Push((int) -7)
0x12d: PushEmpty(string, int)
0x12e: Stack[-1] = Stack[-9]
0x12f: Call2 0x698

0x130: Pop(1)
0x131: @ SendMessage(Stack[-2], Stack[-1])
0x132: Pop(2)
0x133: Push((int) 1)
0x134: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x135: GOTO 0x129

0x136: GOTO 0x150

0x137: PushEmpty(bool)
0x138: Stack[-1] = (bool) 1
0x139: Push((int) 1)
0x13a: Pop(1); Push((bool) Stack[3 + Tasks[-1].StackPointer] == Stack[-1])
0x13b: IF (Stack[-1] == 0) GOTO 0x140; Pop(1)

0x13c: Push((int) 2)
0x13d: Pop(1); Push((bool) Stack[3 + Tasks[-1].StackPointer] == Stack[-1])
0x13e: IF (Stack[-1] == 0) GOTO 0x140; Pop(1)

0x13f: Stack[-1] = (bool) 0
0x140: IF (Stack[-1] == 0) GOTO 0x150; Pop(1)

0x141: Stack[3 + Tasks[-1].StackPointer] = (int)2
0x142: Stack[-5] = (int) 0
0x143: Push((int) 4)
0x144: Pop(1); Push((bool) Stack[-6] < Stack[-1])
0x145: IF (Stack[-1] == 0) GOTO 0x150; Pop(1)

0x146: Push((int) -7)
0x147: PushEmpty(string, int)
0x148: Stack[-1] = Stack[-8]
0x149: Call2 0x688

0x14a: Pop(1)
0x14b: @ SendMessage(Stack[-2], Stack[-1])
0x14c: Pop(2)
0x14d: Push((int) 1)
0x14e: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x14f: GOTO 0x143

0x150: Push((int) 274)
0x151: Pop(1); Push((bool) Stack[-14] == Stack[-1])
0x152: IF (Stack[-1] == 0) GOTO 0x17f; Pop(1)

0x153: PushEmpty(bool)
0x154: Stack[-1] = (bool) 1
0x155: Push((int) 1)
0x156: Pop(1); Push((bool) Stack[3 + Tasks[-1].StackPointer] == Stack[-1])
0x157: IF (Stack[-1] == 0) GOTO 0x15c; Pop(1)

0x158: Push((int) 0)
0x159: Pop(1); Push((bool) Stack[3 + Tasks[-1].StackPointer] == Stack[-1])
0x15a: IF (Stack[-1] == 0) GOTO 0x15c; Pop(1)

0x15b: Stack[-1] = (bool) 0
0x15c: IF (Stack[-1] == 0) GOTO 0x16d; Pop(1)

0x15d: Stack[3 + Tasks[-1].StackPointer] = (int)0
0x15e: Stack[-4] = (int) 0
0x15f: Push((int) 12)
0x160: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x161: IF (Stack[-1] == 0) GOTO 0x16c; Pop(1)

0x162: Push((int) -7)
0x163: PushEmpty(string, int)
0x164: Stack[-1] = Stack[-7]
0x165: Call2 0x678

0x166: Pop(1)
0x167: @ SendMessage(Stack[-2], Stack[-1])
0x168: Pop(2)
0x169: Push((int) 1)
0x16a: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x16b: GOTO 0x15f

0x16c: GOTO 0x17f

0x16d: Push((int) 2)
0x16e: Pop(1); Push((bool) Stack[3 + Tasks[-1].StackPointer] == Stack[-1])
0x16f: IF (Stack[-1] == 0) GOTO 0x17f; Pop(1)

0x170: Stack[3 + Tasks[-1].StackPointer] = (int)1
0x171: Stack[-3] = (int) 0
0x172: Push((int) 4)
0x173: Pop(1); Push((bool) Stack[-4] < Stack[-1])
0x174: IF (Stack[-1] == 0) GOTO 0x17f; Pop(1)

0x175: Push((int) -7)
0x176: PushEmpty(string, int)
0x177: Stack[-1] = Stack[-6]
0x178: Call2 0x698

0x179: Pop(1)
0x17a: @ SendMessage(Stack[-2], Stack[-1])
0x17b: Pop(2)
0x17c: Push((int) 1)
0x17d: Stack[-4] = Stack[-4] + Stack[-1]; Pop(1);
0x17e: GOTO 0x172

0x17f: Push((int) 0)
0x180: Pop(1); Push((bool) Stack[3 + Tasks[-1].StackPointer] == Stack[-1])
0x181: IF (Stack[-1] == 0) GOTO 0x187; Pop(1)

0x182: PushEmpty(int)
0x183: Stack[-1] = Stack[-14]
0x184: Call2 0x475

0x185: Pop(1)
0x186: Return(); Pop(12)

0x187: Push((int) 273)
0x188: Pop(1); Push((bool) Stack[-14] == Stack[-1])
0x189: IF (Stack[-1] == 0) GOTO 0x1a6; Pop(1)

0x18a: Stack[-2] = (int) 0
0x18b: Push((int) 4)
0x18c: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x18d: IF (Stack[-1] == 0) GOTO 0x1a6; Pop(1)

0x18e: Push((int) 2)
0x18f: Pop(1); Push((bool) Stack[3 + Tasks[-1].StackPointer] == Stack[-1])
0x190: IF (Stack[-1] == 0) GOTO 0x199; Pop(1)

0x191: Push((int) -2)
0x192: PushEmpty(string, int)
0x193: Stack[-1] = Stack[-5]
0x194: Call2 0x688

0x195: Pop(1)
0x196: @ SendMessage(Stack[-2], Stack[-1])
0x197: Pop(2)
0x198: GOTO 0x1a3

0x199: Push((int) 1)
0x19a: Pop(1); Push((bool) Stack[3 + Tasks[-1].StackPointer] == Stack[-1])
0x19b: IF (Stack[-1] == 0) GOTO 0x1a3; Pop(1)

0x19c: Push((int) -2)
0x19d: PushEmpty(string, int)
0x19e: Stack[-1] = Stack[-5]
0x19f: Call2 0x698

0x1a0: Pop(1)
0x1a1: @ SendMessage(Stack[-2], Stack[-1])
0x1a2: Pop(2)
0x1a3: Push((int) 1)
0x1a4: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x1a5: GOTO 0x18b

0x1a6: Push((int) 271)
0x1a7: Pop(1); Push((bool) Stack[-14] == Stack[-1])
0x1a8: IF (Stack[-1] == 0) GOTO 0x1c5; Pop(1)

0x1a9: Stack[-1] = (int) 0
0x1aa: Push((int) 4)
0x1ab: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x1ac: IF (Stack[-1] == 0) GOTO 0x1c5; Pop(1)

0x1ad: Push((int) 2)
0x1ae: Pop(1); Push((bool) Stack[3 + Tasks[-1].StackPointer] == Stack[-1])
0x1af: IF (Stack[-1] == 0) GOTO 0x1b8; Pop(1)

0x1b0: Push((int) -3)
0x1b1: PushEmpty(string, int)
0x1b2: Stack[-1] = Stack[-4]
0x1b3: Call2 0x688

0x1b4: Pop(1)
0x1b5: @ SendMessage(Stack[-2], Stack[-1])
0x1b6: Pop(2)
0x1b7: GOTO 0x1c2

0x1b8: Push((int) 1)
0x1b9: Pop(1); Push((bool) Stack[3 + Tasks[-1].StackPointer] == Stack[-1])
0x1ba: IF (Stack[-1] == 0) GOTO 0x1c2; Pop(1)

0x1bb: Push((int) -3)
0x1bc: PushEmpty(string, int)
0x1bd: Stack[-1] = Stack[-4]
0x1be: Call2 0x698

0x1bf: Pop(1)
0x1c0: @ SendMessage(Stack[-2], Stack[-1])
0x1c1: Pop(2)
0x1c2: Push((int) 1)
0x1c3: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x1c4: GOTO 0x1aa

0x1c5: Return(); Pop(12)

0x1c6: PushEmpty(object, object)
0x1c7: @ GetPlayerContainer(Stack[-1])
0x1c8: Pop(0)
0x1c9: Stack[-3] = Stack[-1]
0x1ca: Return(); Pop(2)

0x1cb: Stack[-1] = 0
0x1cc: PushEmpty(object, int, int, int, int, object, int, int, int, int)
0x1cd: Push((int) -4)
0x1ce: Pop(1); Push((bool) Stack[-14] == Stack[-1])
0x1cf: IF (Stack[-1] == 0) GOTO 0x1fe; Pop(1)

0x1d0: PushEmpty(string, int)
0x1d1: Stack[-1] = (int) 0
0x1d2: Call2 0x688

0x1d3: Pop(1)
0x1d4: Pop(1); Push((bool) Stack[-13] == Stack[-1])
0x1d5: IF (Stack[-1] == 0) GOTO 0x1e2; Pop(1)

0x1d6: Push((int) 0)
0x1d7: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] > Stack[-1])
0x1d8: IF (Stack[-1] == 0) GOTO 0x1e1; Pop(1)

0x1d9: Push((int) -1)
0x1da: Stack[2 + Tasks[-1].StackPointer] = Stack[2 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x1db: PushEmpty()
0x1dc: Call2 0x2d3

0x1dd: Pop(0)
0x1de: PushEmpty()
0x1df: Call2 0x2ab

0x1e0: Pop(0)
0x1e1: GOTO 0x1f9

0x1e2: PushEmpty(string, int)
0x1e3: Stack[-1] = (int) 3
0x1e4: Call2 0x688

0x1e5: Pop(1)
0x1e6: Pop(1); Push((bool) Stack[-13] == Stack[-1])
0x1e7: IF (Stack[-1] == 0) GOTO 0x1f9; Pop(1)

0x1e8: @ GetContainer(Stack[-5])
0x1e9: Pop(0)
0x1ea: @@ GetItemCount(Stack[-4])
0x1eb: Pop(0)
0x1ec: Push((int) 4)
0x1ed: Pop(1); Push(Stack[2 + StackPtr] + Stack[-1]);
0x1ee: Pop(1); Push((bool) Stack[-1] <= Stack[-5])
0x1ef: IF (Stack[-1] == 0) GOTO 0x1f8; Pop(1)

0x1f0: Push((int) 1)
0x1f1: Stack[2 + Tasks[-1].StackPointer] = Stack[2 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x1f2: PushEmpty()
0x1f3: Call2 0x2d3

0x1f4: Pop(0)
0x1f5: PushEmpty()
0x1f6: Call2 0x2ab

0x1f7: Pop(0)
0x1f8: Stack[-5] = 0
0x1f9: Push((int) -4)
0x1fa: @ SendMessage(Stack[-1], Stack[-13])
0x1fb: Pop(1)
0x1fc: Stack[-14] = (bool) 1
0x1fd: Return(); Pop(10)

0x1fe: Push((int) -8)
0x1ff: Pop(1); Push((bool) Stack[-14] == Stack[-1])
0x200: IF (Stack[-1] == 0) GOTO 0x204; Pop(1)

0x201: Stack[3 + Tasks[-1].StackPointer] = (int)0
0x202: Stack[-14] = (bool) 1
0x203: Return(); Pop(10)

0x204: Push((int) -10)
0x205: Pop(1); Push((bool) Stack[-14] == Stack[-1])
0x206: IF (Stack[-1] == 0) GOTO 0x20a; Pop(1)

0x207: Stack[3 + Tasks[-1].StackPointer] = (int)1
0x208: Stack[-14] = (bool) 1
0x209: Return(); Pop(10)

0x20a: Push((int) -9)
0x20b: Pop(1); Push((bool) Stack[-14] == Stack[-1])
0x20c: IF (Stack[-1] == 0) GOTO 0x210; Pop(1)

0x20d: Stack[3 + Tasks[-1].StackPointer] = (int)2
0x20e: Stack[-14] = (bool) 1
0x20f: Return(); Pop(10)

0x210: Push((int) 0)
0x211: Pop(1); Push((bool) Stack[-14] < Stack[-1])
0x212: IF (Stack[-1] == 0) GOTO 0x215; Pop(1)

0x213: Stack[-14] = (bool) 1
0x214: Return(); Pop(10)

0x215: Stack[-3] = (int) 0
0x216: Push((int) 4)
0x217: Pop(1); Push((bool) Stack[-4] < Stack[-1])
0x218: IF (Stack[-1] == 0) GOTO 0x22e; Pop(1)

0x219: PushEmpty(string, int)
0x21a: Stack[-1] = Stack[-5]
0x21b: Call2 0x698

0x21c: Pop(1)
0x21d: Pop(1); Push((bool) Stack[-13] == Stack[-1])
0x21e: IF (Stack[-1] == 0) GOTO 0x22b; Pop(1)

0x21f: PushEmpty(int, bool)
0x220: PushEmpty(int, int, bool)
0x221: Stack[-2] = Stack[-8]
0x222: Stack[-1] = (bool) 1
0x223: Call2 0x34e

0x224: Stack[-5] = Stack[-3]
0x225: Pop(3)
0x226: Stack[-1] = (bool) 1
0x227: Call2 0x27e

0x228: Pop(2)
0x229: Stack[-14] = (bool) 1
0x22a: Return(); Pop(10)

0x22b: Push((int) 1)
0x22c: Stack[-4] = Stack[-4] + Stack[-1]; Pop(1);
0x22d: GOTO 0x216

0x22e: Stack[-2] = (int) 0
0x22f: Push((int) 4)
0x230: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x231: IF (Stack[-1] == 0) GOTO 0x247; Pop(1)

0x232: PushEmpty(string, int)
0x233: Stack[-1] = Stack[-4]
0x234: Call2 0x688

0x235: Pop(1)
0x236: Pop(1); Push((bool) Stack[-13] == Stack[-1])
0x237: IF (Stack[-1] == 0) GOTO 0x244; Pop(1)

0x238: PushEmpty(int, bool)
0x239: PushEmpty(int, int, bool)
0x23a: Stack[-2] = Stack[-7]
0x23b: Stack[-1] = (bool) 0
0x23c: Call2 0x34e

0x23d: Stack[-5] = Stack[-3]
0x23e: Pop(3)
0x23f: Stack[-1] = (bool) 1
0x240: Call2 0x28e

0x241: Pop(2)
0x242: Stack[-14] = (bool) 1
0x243: Return(); Pop(10)

0x244: Push((int) 1)
0x245: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x246: GOTO 0x22f

0x247: Push("scrollbar")
0x248: Pop(1); Push((bool) Stack[-13] == Stack[-1])
0x249: IF (Stack[-1] == 0) GOTO 0x25e; Pop(1)

0x24a: PushEmpty(int)
0x24b: Call2 0x384

0x24c: Stack[-2] = Stack[-1]
0x24d: Pop(1)
0x24e: Push((float)0.01)
0x24f: Push((int) 4)
0x250: Pop(1); Push(Stack[-3] - Stack[-1]);
0x251: Pop(2); Push(Stack[-2] * Stack[-1]);
0x252: Pop(1); Push(Stack[-1] * Stack[-14]);
0x253: Push((float)0.5)
0x254: Stack[2 + Tasks[-1].StackPointer] = Stack[-2] + Stack[-1]; Pop(2);
0x255: Push((int) 0)
0x256: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] < Stack[-1])
0x257: IF (Stack[-1] == 0) GOTO 0x259; Pop(1)

0x258: Stack[2 + Tasks[-1].StackPointer] = (int)0
0x259: PushEmpty()
0x25a: Call2 0x2d3

0x25b: Pop(0)
0x25c: Stack[-14] = (bool) 1
0x25d: Return(); Pop(10)

0x25e: Stack[-14] = (bool) 0
0x25f: Return(); Pop(10)

0x260: PushEmpty()
0x261: Push((int) 0)
0x262: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x263: IF (Stack[-1] == 0) GOTO 0x266; Pop(1)

0x264: Stack[-1] = (int) 1
0x265: GOTO 0x26a

0x266: Push((int) 0)
0x267: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x268: IF (Stack[-1] == 0) GOTO 0x26a; Pop(1)

0x269: Stack[-1] = (int) -1
0x26a: Stack[2 + Tasks[-1].StackPointer] = Stack[2 + Tasks[-1].StackPointer] + Stack[-1]; Pop(0);
0x26b: Push((int) 0)
0x26c: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] < Stack[-1])
0x26d: IF (Stack[-1] == 0) GOTO 0x26f; Pop(1)

0x26e: Stack[2 + Tasks[-1].StackPointer] = (int)0
0x26f: PushEmpty()
0x270: Call2 0x2ab

0x271: Pop(0)
0x272: Return(); Pop(0)

0x273: PushEmpty()
0x274: Call2 0x2d3

0x275: Pop(0)
0x276: Return(); Pop(0)

0x277: PushEmpty()
0x278: Call2 0x2ab

0x279: Pop(0)
0x27a: PushEmpty()
0x27b: Call2 0x2d3

0x27c: Pop(0)
0x27d: Return(); Pop(0)

0x27e: PushEmpty(bool, bool)
0x27f: Push("take_organ")
0x280: @ PlaySound(Stack[-1])
0x281: Pop(1)
0x282: PushEmpty(int)
0x283: PushEmpty(int, bool, int)
0x284: Stack[-2] = Stack[-5]
0x285: Stack[-1] = Stack[-8]
0x286: Call2 0x59f

0x287: Stack[-4] = Stack[-3]
0x288: Pop(3)
0x289: Call2 0x537

0x28a: Pop(1)
0x28b: Pop(0); Push((bool) Stack[-1] == 0)
0x28c: IF (Stack[-1] == 0) GOTO 0x28d; Pop(1)

0x28d: Return(); Pop(2)

0x28e: PushEmpty(bool, bool)
0x28f: PushEmpty(int)
0x290: PushEmpty(int, bool, int)
0x291: Stack[-2] = Stack[-5]
0x292: Stack[-1] = Stack[-8] + Stack[2 + Tasks[-1].StackPointer]; Pop(0);
0x293: Call2 0x59f

0x294: Stack[-4] = Stack[-3]
0x295: Pop(3)
0x296: Call2 0x537

0x297: Pop(1)
0x298: Pop(0); Push((bool) Stack[-1] == 0)
0x299: IF (Stack[-1] == 0) GOTO 0x29a; Pop(1)

0x29a: PushEmpty()
0x29b: Call2 0x2ab

0x29c: Pop(0)
0x29d: Return(); Pop(2)

0x29e: PushEmpty()
0x29f: PushEmpty(bool, int, int)
0x2a0: Stack[-2] = Stack[0 + Tasks[-1].StackPointer]
0x2a1: Stack[-1] = Stack[-5]
0x2a2: Call2 0x5ef

0x2a3: Pop(3)
0x2a4: Push((int) 1)
0x2a5: Stack[2 + Tasks[-1].StackPointer] = Stack[2 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x2a6: PushEmpty()
0x2a7: Call2 0x2ab

0x2a8: Pop(0)
0x2a9: Stack[-3] = (bool) 1
0x2aa: Return(); Pop(0)

0x2ab: PushEmpty(int, int, int, int, int, int)
0x2ac: PushEmpty(int)
0x2ad: Call2 0x384

0x2ae: Stack[-4] = Stack[-1]
0x2af: Pop(1)
0x2b0: Push((int) 4)
0x2b1: Pop(1); Push((bool) Stack[-4] <= Stack[-1])
0x2b2: IF (Stack[-1] == 0) GOTO 0x2b9; Pop(1)

0x2b3: Push((int) 16384)
0x2b4: Push("scrollbar")
0x2b5: @ SendMessage(Stack[-2], Stack[-1])
0x2b6: Pop(2)
0x2b7: Stack[2 + Tasks[-1].StackPointer] = (int)0
0x2b8: GOTO 0x2d2

0x2b9: Push((int) 4)
0x2ba: Pop(1); Push(Stack[2 + StackPtr] + Stack[-1]);
0x2bb: Pop(1); Push((bool) Stack[-1] > Stack[-4])
0x2bc: IF (Stack[-1] == 0) GOTO 0x2ca; Pop(1)

0x2bd: Push((int) 4)
0x2be: Pop(1); Push(Stack[2 + StackPtr] + Stack[-1]);
0x2bf: Pop(1); Push(Stack[-1] - Stack[-4]);
0x2c0: Stack[2 + Tasks[-1].StackPointer] = Stack[2 + Tasks[-1].StackPointer] - Stack[-1]; Pop(1);
0x2c1: Push((int) 100)
0x2c2: Pop(1); Push(Stack[2 + StackPtr] * Stack[-1]);
0x2c3: Push((int) 4)
0x2c4: Pop(1); Push(Stack[-5] - Stack[-1]);
0x2c5: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0x2c6: Push("scrollbar")
0x2c7: @ SendMessage(Stack[-3], Stack[-1])
0x2c8: Pop(1)
0x2c9: GOTO 0x2d2

0x2ca: Push((int) 100)
0x2cb: Pop(1); Push(Stack[2 + StackPtr] * Stack[-1]);
0x2cc: Push((int) 4)
0x2cd: Pop(1); Push(Stack[-5] - Stack[-1]);
0x2ce: Stack[-3] = Stack[-2] / Stack[-1]; Pop(2);
0x2cf: Push("scrollbar")
0x2d0: @ SendMessage(Stack[-2], Stack[-1])
0x2d1: Pop(1)
0x2d2: Return(); Pop(6)

0x2d3: PushEmpty(object, int, int, int, object, int, int, bool, int, int, object, int, int, bool, int, object, int, int, int, object, int, int, bool, int, int, object, int, int, bool, int)
0x2d4: @ GetContainer(Stack[-15])
0x2d5: Pop(0)
0x2d6: @@ GetItemCount(Stack[-14])
0x2d7: Pop(0)
0x2d8: Stack[-13] = (int) 0
0x2d9: Stack[-12] = (int) 0
0x2da: Pop(0); Push((bool) Stack[-12] < Stack[-14])
0x2db: IF (Stack[-1] == 0) GOTO 0x305; Pop(1)

0x2dc: @@ GetItem(Stack[-11], Stack[-12])
0x2dd: Pop(0)
0x2de: @@ GetItemID(Stack[-10])
0x2df: Pop(0)
0x2e0: @@ GetItemAmount(Stack[-9], Stack[-12])
0x2e1: Pop(0)
0x2e2: Stack[-8] = (bool) 0
0x2e3: Push("Organ")
0x2e4: @@ HasProperty(Stack[-9], Stack[-1])
0x2e5: Pop(1)
0x2e6: Push(Stack[-8])
0x2e7: IF (Stack[-1] == 0) GOTO 0x2e9; Pop(1)

0x2e8: GOTO 0x302

0x2e9: Pop(0); Push((bool) Stack[-13] >= Stack[2 + Tasks[-1].StackPointer])
0x2ea: IF (Stack[-1] == 0) GOTO 0x2fa; Pop(1)

0x2eb: Push((int) 0)
0x2ec: PushEmpty(string, int)
0x2ed: Stack[-1] = Stack[-16] - Stack[2 + Tasks[-1].StackPointer]; Pop(0);
0x2ee: Call2 0x688

0x2ef: Pop(1)
0x2f0: @ SendMessage(Stack[-2], Stack[-1], Stack[-13])
0x2f1: Pop(2)
0x2f2: Push((int) 65536)
0x2f3: Pop(1); Push(Stack[-10] | Stack[-1]);
0x2f4: PushEmpty(string, int)
0x2f5: Stack[-1] = Stack[-16] - Stack[2 + Tasks[-1].StackPointer]; Pop(0);
0x2f6: Call2 0x688

0x2f7: Pop(1)
0x2f8: @ SendMessage(Stack[-2], Stack[-1])
0x2f9: Pop(2)
0x2fa: Push((int) 1)
0x2fb: Stack[-14] = Stack[-14] + Stack[-1]; Pop(1);
0x2fc: Push((int) 4)
0x2fd: Pop(1); Push(Stack[-1] + Stack[2 + StackPtr]);
0x2fe: Pop(1); Push((bool) Stack[-14] >= Stack[-1])
0x2ff: IF (Stack[-1] == 0) GOTO 0x301; Pop(1)

0x300: GOTO 0x305

0x301: Stack[-11] = 0
0x302: Push((int) 1)
0x303: Stack[-13] = Stack[-13] + Stack[-1]; Pop(1);
0x304: GOTO 0x2da

0x305: Stack[-7] = Stack[-13] + Stack[2 + Tasks[-1].StackPointer]; Pop(0);
0x306: Push((int) 4)
0x307: Pop(1); Push(Stack[-1] + Stack[2 + StackPtr]);
0x308: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x309: IF (Stack[-1] == 0) GOTO 0x314; Pop(1)

0x30a: Push((int) 32768)
0x30b: PushEmpty(string, int)
0x30c: Stack[-1] = Stack[-10] - Stack[2 + Tasks[-1].StackPointer]; Pop(0);
0x30d: Call2 0x688

0x30e: Pop(1)
0x30f: @ SendMessage(Stack[-2], Stack[-1])
0x310: Pop(2)
0x311: Push((int) 1)
0x312: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x313: GOTO 0x306

0x314: Stack[-13] = (int) 0
0x315: Stack[-6] = (int) 0
0x316: Pop(0); Push((bool) Stack[-6] < Stack[-14])
0x317: IF (Stack[-1] == 0) GOTO 0x33e; Pop(1)

0x318: @@ GetItem(Stack[-5], Stack[-6])
0x319: Pop(0)
0x31a: @@ GetItemID(Stack[-4])
0x31b: Pop(0)
0x31c: @@ GetItemAmount(Stack[-3], Stack[-6])
0x31d: Pop(0)
0x31e: Stack[-2] = (bool) 0
0x31f: Push("Organ")
0x320: @@ HasProperty(Stack[-3], Stack[-1])
0x321: Pop(1)
0x322: Pop(0); Push((bool) Stack[-2] == 0)
0x323: IF (Stack[-1] == 0) GOTO 0x325; Pop(1)

0x324: GOTO 0x33b

0x325: Push((int) 0)
0x326: PushEmpty(string, int)
0x327: Stack[-1] = Stack[-16]
0x328: Call2 0x698

0x329: Pop(1)
0x32a: @ SendMessage(Stack[-2], Stack[-1], Stack[-7])
0x32b: Pop(2)
0x32c: Push((int) 65536)
0x32d: Pop(1); Push(Stack[-4] | Stack[-1]);
0x32e: PushEmpty(string, int)
0x32f: Stack[-1] = Stack[-16]
0x330: Call2 0x698

0x331: Pop(1)
0x332: @ SendMessage(Stack[-2], Stack[-1])
0x333: Pop(2)
0x334: Push((int) 1)
0x335: Stack[-14] = Stack[-14] + Stack[-1]; Pop(1);
0x336: Push((int) 4)
0x337: Pop(1); Push((bool) Stack[-14] >= Stack[-1])
0x338: IF (Stack[-1] == 0) GOTO 0x33a; Pop(1)

0x339: GOTO 0x33e

0x33a: Stack[-5] = 0
0x33b: Push((int) 1)
0x33c: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x33d: GOTO 0x316

0x33e: Stack[-1] = Stack[-13]
0x33f: Push((int) 4)
0x340: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x341: IF (Stack[-1] == 0) GOTO 0x34c; Pop(1)

0x342: Push((int) 32768)
0x343: PushEmpty(string, int)
0x344: Stack[-1] = Stack[-4]
0x345: Call2 0x698

0x346: Pop(1)
0x347: @ SendMessage(Stack[-2], Stack[-1])
0x348: Pop(2)
0x349: Push((int) 1)
0x34a: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x34b: GOTO 0x33f

0x34c: Return(); Pop(30)

0x34d: Stack[-15] = 0
0x34e: PushEmpty(object, int, int, int, int, object, int, int, bool, object, int, int, int, int, object, int, int, bool)
0x34f: @ GetContainer(Stack[-9])
0x350: Pop(0)
0x351: @@ GetItemCount(Stack[-8])
0x352: Pop(0)
0x353: Stack[-7] = (int) 0
0x354: Stack[-6] = (int) 0
0x355: Stack[-5] = (int) 0
0x356: Pop(0); Push((bool) Stack[-5] < Stack[-8])
0x357: IF (Stack[-1] == 0) GOTO 0x381; Pop(1)

0x358: @@ GetItem(Stack[-4], Stack[-5])
0x359: Pop(0)
0x35a: @@ GetItemID(Stack[-3])
0x35b: Pop(0)
0x35c: @@ GetItemAmount(Stack[-2], Stack[-5])
0x35d: Pop(0)
0x35e: Stack[-1] = (bool) 0
0x35f: Push("Organ")
0x360: @@ HasProperty(Stack[-2], Stack[-1])
0x361: Pop(1)
0x362: Push(Stack[-1])
0x363: IF (Stack[-1] == 0) GOTO 0x371; Pop(1)

0x364: PushEmpty(bool)
0x365: Stack[-1] = (bool) 0
0x366: Push(Stack[-20])
0x367: IF (Stack[-1] == 0) GOTO 0x36b; Pop(1)

0x368: Pop(0); Push((bool) Stack[-8] == Stack[-21])
0x369: IF (Stack[-1] == 0) GOTO 0x36b; Pop(1)

0x36a: Stack[-1] = (bool) 1
0x36b: IF (Stack[-1] == 0) GOTO 0x36e; Pop(1)

0x36c: Stack[-21] = Stack[-5]
0x36d: Return(); Pop(18)

0x36e: Push((int) 1)
0x36f: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x370: GOTO 0x37d

0x371: PushEmpty(bool)
0x372: Stack[-1] = (bool) 0
0x373: Pop(0); Push((bool) Stack[-20] == 0)
0x374: IF (Stack[-1] == 0) GOTO 0x378; Pop(1)

0x375: Pop(0); Push((bool) Stack[-7] == Stack[-21])
0x376: IF (Stack[-1] == 0) GOTO 0x378; Pop(1)

0x377: Stack[-1] = (bool) 1
0x378: IF (Stack[-1] == 0) GOTO 0x37b; Pop(1)

0x379: Stack[-21] = Stack[-5]
0x37a: Return(); Pop(18)

0x37b: Push((int) 1)
0x37c: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x37d: Stack[-4] = 0
0x37e: Push((int) 1)
0x37f: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x380: GOTO 0x356

0x381: Stack[-21] = (int) -1
0x382: Return(); Pop(18)

0x383: Stack[-9] = 0
0x384: PushEmpty(object, int, int, int, object, int, int, bool, object, int, int, int, object, int, int, bool)
0x385: @ GetContainer(Stack[-8])
0x386: Pop(0)
0x387: @@ GetItemCount(Stack[-7])
0x388: Pop(0)
0x389: Stack[-6] = (int) 0
0x38a: Stack[-5] = (int) 0
0x38b: Pop(0); Push((bool) Stack[-5] < Stack[-7])
0x38c: IF (Stack[-1] == 0) GOTO 0x39f; Pop(1)

0x38d: @@ GetItem(Stack[-4], Stack[-5])
0x38e: Pop(0)
0x38f: @@ GetItemID(Stack[-3])
0x390: Pop(0)
0x391: @@ GetItemAmount(Stack[-2], Stack[-5])
0x392: Pop(0)
0x393: Stack[-1] = (bool) 0
0x394: Push("Organ")
0x395: @@ HasProperty(Stack[-2], Stack[-1])
0x396: Pop(1)
0x397: Pop(0); Push((bool) Stack[-1] == 0)
0x398: IF (Stack[-1] == 0) GOTO 0x39b; Pop(1)

0x399: Push((int) 1)
0x39a: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x39b: Stack[-4] = 0
0x39c: Push((int) 1)
0x39d: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x39e: GOTO 0x38b

0x39f: Stack[-17] = Stack[-6]
0x3a0: Return(); Pop(16)

0x3a1: Stack[-8] = 0
0x3a2: PushEmpty(int, object, int, object)
0x3a3: Stack[0 + Tasks[-1].StackPointer] = (int)-1
0x3a4: PushEmpty(int)
0x3a5: Stack[-1] = Stack[-6]
0x3a6: Call2 0x537

0x3a7: Pop(1)
0x3a8: PushEmpty(int)
0x3a9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3aa: Call2 0x621

0x3ab: Pop(1)
0x3ac: PushEmpty()
0x3ad: Call2 0x55a

0x3ae: Pop(0)
0x3af: Stack[-2] = (int) 0
0x3b0: Push((int) 12)
0x3b1: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x3b2: IF (Stack[-1] == 0) GOTO 0x3d6; Pop(1)

0x3b3: @ CreateStringVector(Stack[-1])
0x3b4: Pop(0)
0x3b5: PushEmpty(string, int)
0x3b6: Push((int) 12)
0x3b7: Pop(1); Push(Stack[-5] + Stack[-1]);
0x3b8: Push((int) 1)
0x3b9: Pop(2); Push(Stack[-2] - Stack[-1]);
0x3ba: Push((int) 12)
0x3bb: Stack[-3] = Stack[-2] % Stack[-1]; Pop(2);
0x3bc: Call2 0x678

0x3bd: Pop(1)
0x3be: @@ add(Stack[-1])
0x3bf: Pop(1)
0x3c0: PushEmpty(string, int)
0x3c1: Push((int) 12)
0x3c2: Pop(1); Push(Stack[-5] + Stack[-1]);
0x3c3: Push((int) 1)
0x3c4: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3c5: Push((int) 12)
0x3c6: Stack[-3] = Stack[-2] % Stack[-1]; Pop(2);
0x3c7: Call2 0x678

0x3c8: Pop(1)
0x3c9: @@ add(Stack[-1])
0x3ca: Pop(1)
0x3cb: Push((int) -1)
0x3cc: PushEmpty(string, int)
0x3cd: Stack[-1] = Stack[-5]
0x3ce: Call2 0x678

0x3cf: Pop(1)
0x3d0: @ SendMessage(Stack[-2], Stack[-1], Stack[-3])
0x3d1: Pop(2)
0x3d2: Stack[-1] = 0
0x3d3: Push((int) 1)
0x3d4: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x3d5: GOTO 0x3b0

0x3d6: PushEmpty()
0x3d7: Call2 0x64

0x3d8: Pop(0)
0x3d9: Push("default")
0x3da: @ SetCursor(Stack[-1])
0x3db: Pop(1)
0x3dc: @ ShowCursor()
0x3dd: Pop(0)
0x3de: @ CaptureKeyboard()
0x3df: Pop(0)
0x3e0: Push((bool) 0)
0x3e1: @ SetOwnerDraw(Stack[-1])
0x3e2: Pop(1)
0x3e3: Push((bool) 1)
0x3e4: @ SetNeedUpdate(Stack[-1])
0x3e5: Pop(1)
0x3e6: PushEmpty()
0x3e7: Call2 0x277

0x3e8: Pop(0)
0x3e9: @ ProcessEvents()
0x3ea: Pop(0)
0x3eb: Return(); Pop(4)

0x3ec: PushEmpty()
0x3ed: @ DestroyWindow()
0x3ee: Pop(0)
0x3ef: Return(); Pop(0)

0x3f0: PushEmpty()
0x3f1: PushEmpty(int)
0x3f2: Stack[-1] = Stack[-2]
0x3f3: Call2 0x120

0x3f4: Pop(1)
0x3f5: Return(); Pop(0)

0x3f6: PushEmpty()
0x3f7: Push((int) 266)
0x3f8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3f9: IF (Stack[-1] == 0) GOTO 0x422; Pop(1)

0x3fa: Push((int) 0)
0x3fb: Pop(1); Push((bool) Stack[0 + Tasks[-1].StackPointer] == Stack[-1])
0x3fc: IF (Stack[-1] == 0) GOTO 0x402; Pop(1)

0x3fd: PushEmpty(int)
0x3fe: Stack[-1] = (int) 1
0x3ff: Call2 0x537

0x400: Pop(1)
0x401: GOTO 0x421

0x402: Push((int) 1)
0x403: Pop(1); Push((bool) Stack[0 + Tasks[-1].StackPointer] == Stack[-1])
0x404: IF (Stack[-1] == 0) GOTO 0x40a; Pop(1)

0x405: PushEmpty(int)
0x406: Stack[-1] = (int) 2
0x407: Call2 0x537

0x408: Pop(1)
0x409: GOTO 0x421

0x40a: Push((int) 2)
0x40b: Pop(1); Push((bool) Stack[0 + Tasks[-1].StackPointer] == Stack[-1])
0x40c: IF (Stack[-1] == 0) GOTO 0x412; Pop(1)

0x40d: PushEmpty(int)
0x40e: Stack[-1] = (int) 3
0x40f: Call2 0x537

0x410: Pop(1)
0x411: GOTO 0x421

0x412: Push((int) 3)
0x413: Pop(1); Push((bool) Stack[0 + Tasks[-1].StackPointer] == Stack[-1])
0x414: IF (Stack[-1] == 0) GOTO 0x41a; Pop(1)

0x415: PushEmpty(int)
0x416: Stack[-1] = (int) 4
0x417: Call2 0x537

0x418: Pop(1)
0x419: GOTO 0x421

0x41a: Push((int) 4)
0x41b: Pop(1); Push((bool) Stack[0 + Tasks[-1].StackPointer] == Stack[-1])
0x41c: IF (Stack[-1] == 0) GOTO 0x421; Pop(1)

0x41d: PushEmpty(int)
0x41e: Stack[-1] = (int) 0
0x41f: Call2 0x537

0x420: Pop(1)
0x421: GOTO 0x44c

0x422: Push((int) 265)
0x423: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x424: IF (Stack[-1] == 0) GOTO 0x44c; Pop(1)

0x425: Push((int) 0)
0x426: Pop(1); Push((bool) Stack[0 + Tasks[-1].StackPointer] == Stack[-1])
0x427: IF (Stack[-1] == 0) GOTO 0x42d; Pop(1)

0x428: PushEmpty(int)
0x429: Stack[-1] = (int) 4
0x42a: Call2 0x537

0x42b: Pop(1)
0x42c: GOTO 0x44c

0x42d: Push((int) 1)
0x42e: Pop(1); Push((bool) Stack[0 + Tasks[-1].StackPointer] == Stack[-1])
0x42f: IF (Stack[-1] == 0) GOTO 0x435; Pop(1)

0x430: PushEmpty(int)
0x431: Stack[-1] = (int) 0
0x432: Call2 0x537

0x433: Pop(1)
0x434: GOTO 0x44c

0x435: Push((int) 2)
0x436: Pop(1); Push((bool) Stack[0 + Tasks[-1].StackPointer] == Stack[-1])
0x437: IF (Stack[-1] == 0) GOTO 0x43d; Pop(1)

0x438: PushEmpty(int)
0x439: Stack[-1] = (int) 1
0x43a: Call2 0x537

0x43b: Pop(1)
0x43c: GOTO 0x44c

0x43d: Push((int) 3)
0x43e: Pop(1); Push((bool) Stack[0 + Tasks[-1].StackPointer] == Stack[-1])
0x43f: IF (Stack[-1] == 0) GOTO 0x445; Pop(1)

0x440: PushEmpty(int)
0x441: Stack[-1] = (int) 2
0x442: Call2 0x537

0x443: Pop(1)
0x444: GOTO 0x44c

0x445: Push((int) 4)
0x446: Pop(1); Push((bool) Stack[0 + Tasks[-1].StackPointer] == Stack[-1])
0x447: IF (Stack[-1] == 0) GOTO 0x44c; Pop(1)

0x448: PushEmpty(int)
0x449: Stack[-1] = (int) 3
0x44a: Call2 0x537

0x44b: Pop(1)
0x44c: PushEmpty(int)
0x44d: Stack[-1] = Stack[-2]
0x44e: Call2 0x7a

0x44f: Pop(1)
0x450: Return(); Pop(0)

0x451: PushEmpty(int, int, int, int)
0x452: Push((int) 269)
0x453: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x454: IF (Stack[-1] == 0) GOTO 0x463; Pop(1)

0x455: Stack[-2] = (int) 0
0x456: Push((int) 12)
0x457: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x458: IF (Stack[-1] == 0) GOTO 0x463; Pop(1)

0x459: Push((int) -2)
0x45a: PushEmpty(string, int)
0x45b: Stack[-1] = Stack[-5]
0x45c: Call2 0x678

0x45d: Pop(1)
0x45e: @ SendMessage(Stack[-2], Stack[-1])
0x45f: Pop(2)
0x460: Push((int) 1)
0x461: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x462: GOTO 0x456

0x463: Push((int) 270)
0x464: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x465: IF (Stack[-1] == 0) GOTO 0x474; Pop(1)

0x466: Stack[-1] = (int) 0
0x467: Push((int) 12)
0x468: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x469: IF (Stack[-1] == 0) GOTO 0x474; Pop(1)

0x46a: Push((int) -3)
0x46b: PushEmpty(string, int)
0x46c: Stack[-1] = Stack[-4]
0x46d: Call2 0x678

0x46e: Pop(1)
0x46f: @ SendMessage(Stack[-2], Stack[-1])
0x470: Pop(2)
0x471: Push((int) 1)
0x472: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x473: GOTO 0x467

0x474: Return(); Pop(4)

0x475: PushEmpty(int, int, int, int)
0x476: Push((int) 273)
0x477: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x478: IF (Stack[-1] == 0) GOTO 0x487; Pop(1)

0x479: Stack[-2] = (int) 0
0x47a: Push((int) 12)
0x47b: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x47c: IF (Stack[-1] == 0) GOTO 0x487; Pop(1)

0x47d: Push((int) -2)
0x47e: PushEmpty(string, int)
0x47f: Stack[-1] = Stack[-5]
0x480: Call2 0x678

0x481: Pop(1)
0x482: @ SendMessage(Stack[-2], Stack[-1])
0x483: Pop(2)
0x484: Push((int) 1)
0x485: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x486: GOTO 0x47a

0x487: Push((int) 271)
0x488: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x489: IF (Stack[-1] == 0) GOTO 0x498; Pop(1)

0x48a: Stack[-1] = (int) 0
0x48b: Push((int) 12)
0x48c: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x48d: IF (Stack[-1] == 0) GOTO 0x498; Pop(1)

0x48e: Push((int) -3)
0x48f: PushEmpty(string, int)
0x490: Stack[-1] = Stack[-4]
0x491: Call2 0x678

0x492: Pop(1)
0x493: @ SendMessage(Stack[-2], Stack[-1])
0x494: Pop(2)
0x495: Push((int) 1)
0x496: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x497: GOTO 0x48b

0x498: Return(); Pop(4)

0x499: PushEmpty()
0x49a: Stack[-2] = (bool) 0
0x49b: Return(); Pop(0)

0x49c: PushEmpty(bool, bool)
0x49d: PushEmpty(object)
0x49e: Call2 0x1c6

0x49f: Pop(0)
0x4a0: PushEmpty(object)
0x4a1: Call2 0x1c6

0x4a2: Pop(1)
0x4a3: PushEmpty(object)
0x4a4: Call2 0x1c6

0x4a5: Pop(1)
0x4a6: PushEmpty(object)
0x4a7: Call2 0x1c6

0x4a8: Pop(1)
0x4a9: @@ IsItemSelected(Stack[-2], Stack[-5], Stack[-4])
0x4aa: Pop(1)
0x4ab: Stack[-5] = Stack[-1]
0x4ac: Return(); Pop(2)

0x4ad: PushEmpty()
0x4ae: PushEmpty(int)
0x4af: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4b0: Call2 0x621

0x4b1: Pop(1)
0x4b2: PushEmpty()
0x4b3: Call2 0x55a

0x4b4: Pop(0)
0x4b5: PushEmpty()
0x4b6: Call2 0x273

0x4b7: Pop(0)
0x4b8: Return(); Pop(0)

0x4b9: PushEmpty(bool, int, int, object, int, object, bool, int, int, object, int, object)
0x4ba: Stack[-6] = (bool) 0
0x4bb: Push((int) 0)
0x4bc: Pop(1); Push((bool) Stack[-16] < Stack[-1])
0x4bd: IF (Stack[-1] == 0) GOTO 0x4c6; Pop(1)

0x4be: PushEmpty(bool, int, string, object)
0x4bf: Stack[-3] = Stack[-19]
0x4c0: Stack[-2] = Stack[-18]
0x4c1: Stack[-1] = Stack[-17]
0x4c2: Call2 0x1cc

0x4c3: Stack[-10] = Stack[-4]
0x4c4: Pop(4)
0x4c5: Return(); Pop(12)

0x4c6: Push("button_weapon")
0x4c7: Pop(1); Push((bool) Stack[-15] == Stack[-1])
0x4c8: IF (Stack[-1] == 0) GOTO 0x4cf; Pop(1)

0x4c9: PushEmpty(int)
0x4ca: Stack[-1] = (int) 0
0x4cb: Call2 0x537

0x4cc: Pop(1)
0x4cd: Stack[-6] = (bool) 1
0x4ce: GOTO 0x52b

0x4cf: Push("button_clothes")
0x4d0: Pop(1); Push((bool) Stack[-15] == Stack[-1])
0x4d1: IF (Stack[-1] == 0) GOTO 0x4d8; Pop(1)

0x4d2: PushEmpty(int)
0x4d3: Stack[-1] = (int) 1
0x4d4: Call2 0x537

0x4d5: Pop(1)
0x4d6: Stack[-6] = (bool) 1
0x4d7: GOTO 0x52b

0x4d8: Push("button_medcine")
0x4d9: Pop(1); Push((bool) Stack[-15] == Stack[-1])
0x4da: IF (Stack[-1] == 0) GOTO 0x4e1; Pop(1)

0x4db: PushEmpty(int)
0x4dc: Stack[-1] = (int) 2
0x4dd: Call2 0x537

0x4de: Pop(1)
0x4df: Stack[-6] = (bool) 1
0x4e0: GOTO 0x52b

0x4e1: Push("button_food")
0x4e2: Pop(1); Push((bool) Stack[-15] == Stack[-1])
0x4e3: IF (Stack[-1] == 0) GOTO 0x4ea; Pop(1)

0x4e4: PushEmpty(int)
0x4e5: Stack[-1] = (int) 3
0x4e6: Call2 0x537

0x4e7: Pop(1)
0x4e8: Stack[-6] = (bool) 1
0x4e9: GOTO 0x52b

0x4ea: Push("button_other")
0x4eb: Pop(1); Push((bool) Stack[-15] == Stack[-1])
0x4ec: IF (Stack[-1] == 0) GOTO 0x4f3; Pop(1)

0x4ed: PushEmpty(int)
0x4ee: Stack[-1] = (int) 4
0x4ef: Call2 0x537

0x4f0: Pop(1)
0x4f1: Stack[-6] = (bool) 1
0x4f2: GOTO 0x52b

0x4f3: Push("button_detector")
0x4f4: Pop(1); Push((bool) Stack[-15] == Stack[-1])
0x4f5: IF (Stack[-1] == 0) GOTO 0x4f7; Pop(1)

0x4f6: GOTO 0x52b

0x4f7: Push("button_anticeptic")
0x4f8: Pop(1); Push((bool) Stack[-15] == Stack[-1])
0x4f9: IF (Stack[-1] == 0) GOTO 0x4fb; Pop(1)

0x4fa: GOTO 0x52b

0x4fb: Push((int) 0)
0x4fc: Pop(1); Push((bool) Stack[-16] != Stack[-1])
0x4fd: IF (Stack[-1] == 0) GOTO 0x504; Pop(1)

0x4fe: Push("noinv_drop")
0x4ff: @ GetVariable(Stack[-1], Stack[-6])
0x500: Pop(1)
0x501: Push(Stack[-5])
0x502: IF (Stack[-1] == 0) GOTO 0x504; Pop(1)

0x503: Return(); Pop(12)

0x504: Stack[-4] = (int) 0
0x505: Push((int) 12)
0x506: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x507: IF (Stack[-1] == 0) GOTO 0x52b; Pop(1)

0x508: PushEmpty(string, int)
0x509: Stack[-1] = Stack[-6]
0x50a: Call2 0x678

0x50b: Pop(1)
0x50c: Pop(1); Push((bool) Stack[-15] == Stack[-1])
0x50d: IF (Stack[-1] == 0) GOTO 0x528; Pop(1)

0x50e: PushEmpty(object)
0x50f: Call2 0x1c6

0x510: Stack[-4] = Stack[-1]
0x511: Pop(1)
0x512: @@ GetItemCount(Stack[-2], Stack[-0])
0x513: Pop(0)
0x514: Pop(0); Push((bool) Stack[-2] > Stack[-4])
0x515: IF (Stack[-1] == 0) GOTO 0x526; Pop(1)

0x516: @@ GetItem(Stack[-1], Stack[-4], Stack[-0])
0x517: Pop(0)
0x518: PushEmpty(bool, object)
0x519: Stack[-1] = Stack[-3]
0x51a: Call2 0x499

0x51b: Pop(1)
0x51c: Pop(1); Push((bool) Stack[-1] == 0)
0x51d: IF (Stack[-1] == 0) GOTO 0x525; Pop(1)

0x51e: PushEmpty(bool, int, int)
0x51f: Stack[-2] = Stack[-7]
0x520: Push((int) 0)
0x521: Stack[-2] = Stack[-19] == Stack[-1]; Pop(1);
0x522: Call2 0x29e

0x523: Stack[-9] = Stack[-3]
0x524: Pop(3)
0x525: Stack[-1] = 0
0x526: GOTO 0x52b

0x527: Stack[-3] = 0
0x528: Push((int) 1)
0x529: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x52a: GOTO 0x505

0x52b: Pop(0); Push((bool) Stack[-6] == 0)
0x52c: IF (Stack[-1] == 0) GOTO 0x534; Pop(1)

0x52d: PushEmpty(bool, int, string, object)
0x52e: Stack[-3] = Stack[-19]
0x52f: Stack[-2] = Stack[-18]
0x530: Stack[-1] = Stack[-17]
0x531: Call2 0x1cc

0x532: Stack[-10] = Stack[-4]
0x533: Pop(4)
0x534: Push(Stack[-6])
0x535: IF (Stack[-1] == 0) GOTO 0x536; Pop(1)

0x536: Return(); Pop(12)

0x537: PushEmpty()
0x538: Push((int) -1)
0x539: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x53a: IF (Stack[-1] == 0) GOTO 0x53c; Pop(1)

0x53b: Return(); Pop(0)

0x53c: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == Stack[-1])
0x53d: IF (Stack[-1] == 0) GOTO 0x53f; Pop(1)

0x53e: Return(); Pop(0)

0x53f: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x540: PushEmpty(int)
0x541: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x542: Call2 0x561

0x543: Pop(1)
0x544: Return(); Pop(0)

0x545: PushEmpty(object, int, object, int)
0x546: PushEmpty(object)
0x547: Call2 0x1c6

0x548: Stack[-3] = Stack[-1]
0x549: Pop(1)
0x54a: Push("money")
0x54b: @@ GetProperty(Stack[-1], Stack[-2])
0x54c: Pop(1)
0x54d: Stack[-5] = Stack[-1]
0x54e: Return(); Pop(4)

0x54f: Stack[-2] = 0
0x550: PushEmpty(object, object)
0x551: PushEmpty(object)
0x552: Call2 0x1c6

0x553: Stack[-2] = Stack[-1]
0x554: Pop(1)
0x555: Push("money")
0x556: @@ SetProperty(Stack[-1], Stack[-4])
0x557: Pop(1)
0x558: Return(); Pop(2)

0x559: Stack[-1] = 0
0x55a: PushEmpty(int)
0x55b: Call2 0x545

0x55c: Pop(0)
0x55d: Push("money")
0x55e: @ SendMessage(Stack[-2], Stack[-1])
0x55f: Pop(2)
0x560: Return(); Pop(0)

0x561: PushEmpty()
0x562: Push((int) 0)
0x563: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x564: IF (Stack[-1] == 0) GOTO 0x56a; Pop(1)

0x565: Push((int) 0)
0x566: Push("button_weapon")
0x567: @ SendMessage(Stack[-2], Stack[-1])
0x568: Pop(2)
0x569: GOTO 0x56e

0x56a: Push((int) 1)
0x56b: Push("button_weapon")
0x56c: @ SendMessage(Stack[-2], Stack[-1])
0x56d: Pop(2)
0x56e: Push((int) 1)
0x56f: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x570: IF (Stack[-1] == 0) GOTO 0x576; Pop(1)

0x571: Push((int) 0)
0x572: Push("button_clothes")
0x573: @ SendMessage(Stack[-2], Stack[-1])
0x574: Pop(2)
0x575: GOTO 0x57a

0x576: Push((int) 1)
0x577: Push("button_clothes")
0x578: @ SendMessage(Stack[-2], Stack[-1])
0x579: Pop(2)
0x57a: Push((int) 2)
0x57b: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x57c: IF (Stack[-1] == 0) GOTO 0x582; Pop(1)

0x57d: Push((int) 0)
0x57e: Push("button_medcine")
0x57f: @ SendMessage(Stack[-2], Stack[-1])
0x580: Pop(2)
0x581: GOTO 0x586

0x582: Push((int) 1)
0x583: Push("button_medcine")
0x584: @ SendMessage(Stack[-2], Stack[-1])
0x585: Pop(2)
0x586: Push((int) 3)
0x587: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x588: IF (Stack[-1] == 0) GOTO 0x58e; Pop(1)

0x589: Push((int) 0)
0x58a: Push("button_food")
0x58b: @ SendMessage(Stack[-2], Stack[-1])
0x58c: Pop(2)
0x58d: GOTO 0x592

0x58e: Push((int) 1)
0x58f: Push("button_food")
0x590: @ SendMessage(Stack[-2], Stack[-1])
0x591: Pop(2)
0x592: Push((int) 4)
0x593: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x594: IF (Stack[-1] == 0) GOTO 0x59a; Pop(1)

0x595: Push((int) 0)
0x596: Push("button_other")
0x597: @ SendMessage(Stack[-2], Stack[-1])
0x598: Pop(2)
0x599: GOTO 0x59e

0x59a: Push((int) 1)
0x59b: Push("button_other")
0x59c: @ SendMessage(Stack[-2], Stack[-1])
0x59d: Pop(2)
0x59e: Return(); Pop(0)

0x59f: PushEmpty(object, object, object, int, int, int, bool, int, int, bool, bool, object, object, object, int, int, int, bool, int, int, bool, bool)
0x5a0: Stack[-24] = (bool) 0
0x5a1: Push((int) -1)
0x5a2: Pop(1); Push((bool) Stack[-24] == Stack[-1])
0x5a3: IF (Stack[-1] == 0) GOTO 0x5a6; Pop(1)

0x5a4: Stack[-25] = (int) -1
0x5a5: Return(); Pop(22)

0x5a6: PushEmpty(object)
0x5a7: Call2 0x1c6

0x5a8: Stack[-11] = Stack[-1]
0x5a9: Pop(1)
0x5aa: @ GetContainer(Stack[-11])
0x5ab: Pop(0)
0x5ac: @@ GetItemCount(Stack[-8])
0x5ad: Pop(0)
0x5ae: Pop(0); Push((bool) Stack[-8] <= Stack[-23])
0x5af: IF (Stack[-1] == 0) GOTO 0x5b2; Pop(1)

0x5b0: Stack[-25] = (int) -1
0x5b1: Return(); Pop(22)

0x5b2: @@ GetItemAmount(Stack[-7], Stack[-23])
0x5b3: Pop(0)
0x5b4: Push((int) 0)
0x5b5: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x5b6: IF (Stack[-1] == 0) GOTO 0x5b9; Pop(1)

0x5b7: Stack[-25] = (int) -1
0x5b8: Return(); Pop(22)

0x5b9: @@ GetItem(Stack[-9], Stack[-23])
0x5ba: Pop(0)
0x5bb: @@ GetItemID(Stack[-6])
0x5bc: Pop(0)
0x5bd: Stack[-5] = (bool) 0
0x5be: Push("Organ")
0x5bf: @@ HasProperty(Stack[-6], Stack[-1])
0x5c0: Pop(1)
0x5c1: Push(Stack[-5])
0x5c2: IF (Stack[-1] == 0) GOTO 0x5c6; Pop(1)

0x5c3: Push("Organ")
0x5c4: @@ RemoveProperty(Stack[-1])
0x5c5: Pop(1)
0x5c6: Push("Category")
0x5c7: @ GetInvItemProperty(Stack[-5], Stack[-7], Stack[-1])
0x5c8: Pop(1)
0x5c9: PushEmpty(int)
0x5ca: Call2 0x6a8

0x5cb: Pop(0)
0x5cc: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x5cd: IF (Stack[-1] == 0) GOTO 0x5df; Pop(1)

0x5ce: PushEmpty(int)
0x5cf: Call2 0x545

0x5d0: Stack[-4] = Stack[-1]
0x5d1: Pop(1)
0x5d2: Stack[-3] = Stack[-3] + Stack[-7]; Pop(0);
0x5d3: PushEmpty(int)
0x5d4: Stack[-1] = Stack[-4]
0x5d5: Call2 0x550

0x5d6: Pop(1)
0x5d7: @@ RemoveItem(Stack[-23], Stack[-7])
0x5d8: Pop(0)
0x5d9: PushEmpty()
0x5da: Call2 0x55a

0x5db: Pop(0)
0x5dc: Stack[-24] = (bool) 1
0x5dd: Stack[-25] = (int) -1
0x5de: Return(); Pop(22)

0x5df: Push((int) 1)
0x5e0: @@ AddItem(Stack[-2], Stack[-10], Stack[-5], Stack[-1])
0x5e1: Pop(1)
0x5e2: Pop(0); Push((bool) Stack[-1] == 0)
0x5e3: IF (Stack[-1] == 0) GOTO 0x5e6; Pop(1)

0x5e4: Stack[-25] = Stack[-4]
0x5e5: Return(); Pop(22)

0x5e6: Stack[-24] = (bool) 1
0x5e7: Push((int) 1)
0x5e8: @@ RemoveItem(Stack[-24], Stack[-1])
0x5e9: Pop(1)
0x5ea: Stack[-25] = Stack[-4]
0x5eb: Return(); Pop(22)

0x5ec: Stack[-9] = 0
0x5ed: Stack[-10] = 0
0x5ee: Stack[-11] = 0
0x5ef: PushEmpty(object, object, object, int, int, bool, int, bool, bool, object, object, object, int, int, bool, int, bool, bool)
0x5f0: PushEmpty(object)
0x5f1: Call2 0x1c6

0x5f2: Stack[-9] = Stack[-1]
0x5f3: Pop(1)
0x5f4: @ GetContainer(Stack[-9])
0x5f5: Pop(0)
0x5f6: @@ GetItemCount(Stack[-6], Stack[-20])
0x5f7: Pop(0)
0x5f8: Pop(0); Push((bool) Stack[-6] <= Stack[-19])
0x5f9: IF (Stack[-1] == 0) GOTO 0x5fc; Pop(1)

0x5fa: Stack[-21] = (bool) 0
0x5fb: Return(); Pop(18)

0x5fc: @@ GetItemAmount(Stack[-5], Stack[-19], Stack[-20])
0x5fd: Pop(0)
0x5fe: @@ GetItem(Stack[-7], Stack[-19], Stack[-20])
0x5ff: Pop(0)
0x600: Push((int) 0)
0x601: Push((int) 1)
0x602: @@ AddItem(Stack[-6], Stack[-9], Stack[-2], Stack[-1])
0x603: Pop(2)
0x604: Pop(0); Push((bool) Stack[-4] == 0)
0x605: IF (Stack[-1] == 0) GOTO 0x608; Pop(1)

0x606: Stack[-21] = (bool) 0
0x607: Return(); Pop(18)

0x608: Push((int) 0)
0x609: Pop(1); Push((bool) Stack[0 + Tasks[-1].StackPointer] == Stack[-1])
0x60a: IF (Stack[-1] == 0) GOTO 0x619; Pop(1)

0x60b: @@ GetItemID(Stack[-3])
0x60c: Pop(0)
0x60d: Push("Weapon")
0x60e: @ HasInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0x60f: Pop(1)
0x610: Push(Stack[-2])
0x611: IF (Stack[-1] == 0) GOTO 0x619; Pop(1)

0x612: @@ IsItemSelected(Stack[-1], Stack[-19], Stack[-0])
0x613: Pop(0)
0x614: Push(Stack[-1])
0x615: IF (Stack[-1] == 0) GOTO 0x619; Pop(1)

0x616: Push((int) -1)
0x617: @ SetPlayerHandsItem(Stack[-1])
0x618: Pop(1)
0x619: Push((int) 1)
0x61a: @@ RemoveItem(Stack[-20], Stack[-1], Stack[-21])
0x61b: Pop(1)
0x61c: Stack[-21] = (bool) 1
0x61d: Return(); Pop(18)

0x61e: Stack[-7] = 0
0x61f: Stack[-8] = 0
0x620: Stack[-9] = 0
0x621: PushEmpty(object, int, int, object, int, bool, bool, object, int, int, object, int, bool, bool)
0x622: PushEmpty(object)
0x623: Call2 0x1c6

0x624: Stack[-8] = Stack[-1]
0x625: Pop(1)
0x626: @@ GetItemCount(Stack[-6], Stack[-15])
0x627: Pop(0)
0x628: Stack[-5] = (int) 0
0x629: Push((int) 12)
0x62a: Pop(1); Push((bool) Stack[-6] < Stack[-1])
0x62b: IF (Stack[-1] == 0) GOTO 0x676; Pop(1)

0x62c: Pop(0); Push((bool) Stack[-5] < Stack[-6])
0x62d: IF (Stack[-1] == 0) GOTO 0x66c; Pop(1)

0x62e: @@ GetItem(Stack[-4], Stack[-5], Stack[-15])
0x62f: Pop(0)
0x630: @@ GetItemAmount(Stack[-3], Stack[-5], Stack[-15])
0x631: Pop(0)
0x632: PushEmpty(bool, int, int)
0x633: Stack[-2] = Stack[-8]
0x634: Stack[-1] = Stack[-18]
0x635: Call2 0x49c

0x636: Stack[-5] = Stack[-3]
0x637: Pop(3)
0x638: PushEmpty(bool, object)
0x639: Stack[-1] = Stack[-6]
0x63a: Call2 0x499

0x63b: Stack[-3] = Stack[-2]
0x63c: Pop(2)
0x63d: Push(Stack[-2])
0x63e: IF (Stack[-1] == 0) GOTO 0x651; Pop(1)

0x63f: Push(Stack[-1])
0x640: IF (Stack[-1] == 0) GOTO 0x649; Pop(1)

0x641: Push((int) 0)
0x642: PushEmpty(string, int)
0x643: Stack[-1] = Stack[-8]
0x644: Call2 0x678

0x645: Pop(1)
0x646: @ SendMessage(Stack[-2], Stack[-1], Stack[-6])
0x647: Pop(2)
0x648: GOTO 0x650

0x649: Push((int) 16384)
0x64a: PushEmpty(string, int)
0x64b: Stack[-1] = Stack[-8]
0x64c: Call2 0x678

0x64d: Pop(1)
0x64e: @ SendMessage(Stack[-2], Stack[-1], Stack[-6])
0x64f: Pop(2)
0x650: GOTO 0x662

0x651: Push(Stack[-1])
0x652: IF (Stack[-1] == 0) GOTO 0x65b; Pop(1)

0x653: Push((int) 131072)
0x654: PushEmpty(string, int)
0x655: Stack[-1] = Stack[-8]
0x656: Call2 0x678

0x657: Pop(1)
0x658: @ SendMessage(Stack[-2], Stack[-1], Stack[-6])
0x659: Pop(2)
0x65a: GOTO 0x662

0x65b: Push((int) 0)
0x65c: PushEmpty(string, int)
0x65d: Stack[-1] = Stack[-8]
0x65e: Call2 0x678

0x65f: Pop(1)
0x660: @ SendMessage(Stack[-2], Stack[-1], Stack[-6])
0x661: Pop(2)
0x662: Push((int) 65536)
0x663: Pop(1); Push(Stack[-4] | Stack[-1]);
0x664: PushEmpty(string, int)
0x665: Stack[-1] = Stack[-8]
0x666: Call2 0x678

0x667: Pop(1)
0x668: @ SendMessage(Stack[-2], Stack[-1])
0x669: Pop(2)
0x66a: Stack[-4] = 0
0x66b: GOTO 0x673

0x66c: Push((int) 32768)
0x66d: PushEmpty(string, int)
0x66e: Stack[-1] = Stack[-8]
0x66f: Call2 0x678

0x670: Pop(1)
0x671: @ SendMessage(Stack[-2], Stack[-1])
0x672: Pop(2)
0x673: Push((int) 1)
0x674: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x675: GOTO 0x629

0x676: Return(); Pop(14)

0x677: Stack[-7] = 0
0x678: PushEmpty()
0x679: Push((int) 1)
0x67a: Pop(1); Push(Stack[-2] + Stack[-1]);
0x67b: Push((int) 10)
0x67c: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x67d: IF (Stack[-1] == 0) GOTO 0x683; Pop(1)

0x67e: Push("slot0")
0x67f: Push((int) 1)
0x680: Pop(1); Push(Stack[-3] + Stack[-1]);
0x681: Stack[-4] = Stack[-2] + Stack[-1]; Pop(2);
0x682: Return(); Pop(0)

0x683: Push("slot")
0x684: Push((int) 1)
0x685: Pop(1); Push(Stack[-3] + Stack[-1]);
0x686: Stack[-4] = Stack[-2] + Stack[-1]; Pop(2);
0x687: Return(); Pop(0)

0x688: PushEmpty()
0x689: Push((int) 1)
0x68a: Pop(1); Push(Stack[-2] + Stack[-1]);
0x68b: Push((int) 10)
0x68c: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x68d: IF (Stack[-1] == 0) GOTO 0x693; Pop(1)

0x68e: Push("cslot0")
0x68f: Push((int) 1)
0x690: Pop(1); Push(Stack[-3] + Stack[-1]);
0x691: Stack[-4] = Stack[-2] + Stack[-1]; Pop(2);
0x692: Return(); Pop(0)

0x693: Push("cslot")
0x694: Push((int) 1)
0x695: Pop(1); Push(Stack[-3] + Stack[-1]);
0x696: Stack[-4] = Stack[-2] + Stack[-1]; Pop(2);
0x697: Return(); Pop(0)

0x698: PushEmpty()
0x699: Push((int) 1)
0x69a: Pop(1); Push(Stack[-2] + Stack[-1]);
0x69b: Push((int) 10)
0x69c: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x69d: IF (Stack[-1] == 0) GOTO 0x6a3; Pop(1)

0x69e: Push("ccslot0")
0x69f: Push((int) 1)
0x6a0: Pop(1); Push(Stack[-3] + Stack[-1]);
0x6a1: Stack[-4] = Stack[-2] + Stack[-1]; Pop(2);
0x6a2: Return(); Pop(0)

0x6a3: Push("ccslot")
0x6a4: Push((int) 1)
0x6a5: Pop(1); Push(Stack[-3] + Stack[-1]);
0x6a6: Stack[-4] = Stack[-2] + Stack[-1]; Pop(2);
0x6a7: Return(); Pop(0)

0x6a8: PushEmpty(int, int)
0x6a9: Push("Money")
0x6aa: @ GetInvItemByName(Stack[-2], Stack[-1])
0x6ab: Pop(1)
0x6ac: Stack[-3] = Stack[-1]
0x6ad: Return(); Pop(2)

