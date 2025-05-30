GlobalVarCount = 0

Strings:
	inventory_base.xml
	$parent
	add
	GetItemCount
	scrollbar
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
	CreateStringVector (1 args)
	SendMessage (3 args)
	SendMessage (2 args)
	GetPlayerContainer (1 args)
	GetContainer (1 args)
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
		EVENT_15 Op = 0x160 Vars = (int, int, float)
		EVENT_100 Op = 0x245 Vars = (int)
		EVENT_102 Op = 0x249 Vars = (int)
		EVENT_101 Op = 0x24f Vars = (int)
		EVENT_1 Op = 0x306 Vars = (float)
		EVENT_200 Op = 0x312 Vars = (int, string, object)


0x0: PushEmpty(int, object, string, string, int, object, string, string)
0x1: Push("inventory_base.xml")
0x2: Push((bool) 0)
0x3: @ CreateWindow(Stack[-2], Stack[-1], Stack[-1])
0x4: Pop(2)
0x5: PushEmpty()
0x6: Call2 0x19b

0x7: Pop(0)
0x8: Stack[3 + Tasks[-1].StackPointer] = (int)2
0x9: Stack[-4] = (int) 0
0xa: Push((int) 4)
0xb: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0xc: IF (Stack[-1] == 0) GOTO 0x38; Pop(1)

0xd: @ CreateStringVector(Stack[-3])
0xe: Pop(0)
0xf: Push((int) 1)
0x10: Pop(1); Push(Stack[-5] - Stack[-1]);
0x11: Push((int) 0)
0x12: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x13: IF (Stack[-1] == 0) GOTO 0x1b; Pop(1)

0x14: PushEmpty(string, int)
0x15: Push((int) 1)
0x16: Stack[-2] = Stack[-7] - Stack[-1]; Pop(1);
0x17: Call2 0x4e1

0x18: Stack[-4] = Stack[-2]
0x19: Pop(2)
0x1a: GOTO 0x1c

0x1b: Stack[-2] = "$parent"
0x1c: Push((int) 1)
0x1d: Pop(1); Push(Stack[-5] + Stack[-1]);
0x1e: Push((int) 4)
0x1f: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x20: IF (Stack[-1] == 0) GOTO 0x28; Pop(1)

0x21: PushEmpty(string, int)
0x22: Push((int) 1)
0x23: Stack[-2] = Stack[-7] + Stack[-1]; Pop(1);
0x24: Call2 0x4e1

0x25: Stack[-3] = Stack[-2]
0x26: Pop(2)
0x27: GOTO 0x29

0x28: Stack[-1] = "$parent"
0x29: @@ add(Stack[-2])
0x2a: Pop(0)
0x2b: @@ add(Stack[-1])
0x2c: Pop(0)
0x2d: Push((int) -1)
0x2e: PushEmpty(string, int)
0x2f: Stack[-1] = Stack[-7]
0x30: Call2 0x4e1

0x31: Pop(1)
0x32: @ SendMessage(Stack[-2], Stack[-1], Stack[-5])
0x33: Pop(2)
0x34: Stack[-3] = 0
0x35: Push((int) 1)
0x36: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x37: GOTO 0xa

0x38: PushEmpty(int)
0x39: Stack[-1] = (int) 0
0x3a: Call2 0x1f3

0x3b: Pop(1)
0x3c: Return(); Pop(8)

0x3d: PushEmpty()
0x3e: Call2 0x23d

0x3f: Pop(0)
0x40: Push((int) -6)
0x41: PushEmpty(string, int)
0x42: Stack[-1] = (int) 0
0x43: Call2 0x4e1

0x44: Pop(1)
0x45: @ SendMessage(Stack[-2], Stack[-1])
0x46: Pop(2)
0x47: Return(); Pop(0)

0x48: PushEmpty(int, int, int, int, int, int, int, int)
0x49: Push((int) 267)
0x4a: Pop(1); Push((bool) Stack[-10] == Stack[-1])
0x4b: IF (Stack[-1] == 0) GOTO 0x5b; Pop(1)

0x4c: Stack[3 + Tasks[-1].StackPointer] = (int)2
0x4d: Stack[-4] = (int) 0
0x4e: Push((int) 4)
0x4f: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x50: IF (Stack[-1] == 0) GOTO 0x5b; Pop(1)

0x51: Push((int) -7)
0x52: PushEmpty(string, int)
0x53: Stack[-1] = Stack[-7]
0x54: Call2 0x4e1

0x55: Pop(1)
0x56: @ SendMessage(Stack[-2], Stack[-1])
0x57: Pop(2)
0x58: Push((int) 1)
0x59: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x5a: GOTO 0x4e

0x5b: Push((int) 268)
0x5c: Pop(1); Push((bool) Stack[-10] == Stack[-1])
0x5d: IF (Stack[-1] == 0) GOTO 0x6d; Pop(1)

0x5e: Stack[3 + Tasks[-1].StackPointer] = (int)0
0x5f: Stack[-3] = (int) 0
0x60: Push((int) 12)
0x61: Pop(1); Push((bool) Stack[-4] < Stack[-1])
0x62: IF (Stack[-1] == 0) GOTO 0x6d; Pop(1)

0x63: Push((int) -7)
0x64: PushEmpty(string, int)
0x65: Stack[-1] = Stack[-6]
0x66: Call2 0x4d1

0x67: Pop(1)
0x68: @ SendMessage(Stack[-2], Stack[-1])
0x69: Pop(2)
0x6a: Push((int) 1)
0x6b: Stack[-4] = Stack[-4] + Stack[-1]; Pop(1);
0x6c: GOTO 0x60

0x6d: Push((int) 0)
0x6e: Pop(1); Push((bool) Stack[3 + Tasks[-1].StackPointer] == Stack[-1])
0x6f: IF (Stack[-1] == 0) GOTO 0x75; Pop(1)

0x70: PushEmpty(int)
0x71: Stack[-1] = Stack[-10]
0x72: Call2 0x2aa

0x73: Pop(1)
0x74: Return(); Pop(8)

0x75: Push((int) 269)
0x76: Pop(1); Push((bool) Stack[-10] == Stack[-1])
0x77: IF (Stack[-1] == 0) GOTO 0x86; Pop(1)

0x78: Stack[-2] = (int) 0
0x79: Push((int) 4)
0x7a: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x7b: IF (Stack[-1] == 0) GOTO 0x86; Pop(1)

0x7c: Push((int) -2)
0x7d: PushEmpty(string, int)
0x7e: Stack[-1] = Stack[-5]
0x7f: Call2 0x4e1

0x80: Pop(1)
0x81: @ SendMessage(Stack[-2], Stack[-1])
0x82: Pop(2)
0x83: Push((int) 1)
0x84: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x85: GOTO 0x79

0x86: Push((int) 270)
0x87: Pop(1); Push((bool) Stack[-10] == Stack[-1])
0x88: IF (Stack[-1] == 0) GOTO 0x97; Pop(1)

0x89: Stack[-1] = (int) 0
0x8a: Push((int) 4)
0x8b: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x8c: IF (Stack[-1] == 0) GOTO 0x97; Pop(1)

0x8d: Push((int) -3)
0x8e: PushEmpty(string, int)
0x8f: Stack[-1] = Stack[-4]
0x90: Call2 0x4e1

0x91: Pop(1)
0x92: @ SendMessage(Stack[-2], Stack[-1])
0x93: Pop(2)
0x94: Push((int) 1)
0x95: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x96: GOTO 0x8a

0x97: Return(); Pop(8)

0x98: PushEmpty(int, int, int, int, int, int, int, int)
0x99: Push((int) 272)
0x9a: Pop(1); Push((bool) Stack[-10] == Stack[-1])
0x9b: IF (Stack[-1] == 0) GOTO 0xab; Pop(1)

0x9c: Stack[3 + Tasks[-1].StackPointer] = (int)2
0x9d: Stack[-4] = (int) 0
0x9e: Push((int) 4)
0x9f: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0xa0: IF (Stack[-1] == 0) GOTO 0xab; Pop(1)

0xa1: Push((int) -7)
0xa2: PushEmpty(string, int)
0xa3: Stack[-1] = Stack[-7]
0xa4: Call2 0x4e1

0xa5: Pop(1)
0xa6: @ SendMessage(Stack[-2], Stack[-1])
0xa7: Pop(2)
0xa8: Push((int) 1)
0xa9: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0xaa: GOTO 0x9e

0xab: Push((int) 274)
0xac: Pop(1); Push((bool) Stack[-10] == Stack[-1])
0xad: IF (Stack[-1] == 0) GOTO 0xbd; Pop(1)

0xae: Stack[3 + Tasks[-1].StackPointer] = (int)0
0xaf: Stack[-3] = (int) 0
0xb0: Push((int) 12)
0xb1: Pop(1); Push((bool) Stack[-4] < Stack[-1])
0xb2: IF (Stack[-1] == 0) GOTO 0xbd; Pop(1)

0xb3: Push((int) -7)
0xb4: PushEmpty(string, int)
0xb5: Stack[-1] = Stack[-6]
0xb6: Call2 0x4d1

0xb7: Pop(1)
0xb8: @ SendMessage(Stack[-2], Stack[-1])
0xb9: Pop(2)
0xba: Push((int) 1)
0xbb: Stack[-4] = Stack[-4] + Stack[-1]; Pop(1);
0xbc: GOTO 0xb0

0xbd: Push((int) 0)
0xbe: Pop(1); Push((bool) Stack[3 + Tasks[-1].StackPointer] == Stack[-1])
0xbf: IF (Stack[-1] == 0) GOTO 0xc5; Pop(1)

0xc0: PushEmpty(int)
0xc1: Stack[-1] = Stack[-10]
0xc2: Call2 0x2ce

0xc3: Pop(1)
0xc4: Return(); Pop(8)

0xc5: Push((int) 273)
0xc6: Pop(1); Push((bool) Stack[-10] == Stack[-1])
0xc7: IF (Stack[-1] == 0) GOTO 0xd6; Pop(1)

0xc8: Stack[-2] = (int) 0
0xc9: Push((int) 4)
0xca: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0xcb: IF (Stack[-1] == 0) GOTO 0xd6; Pop(1)

0xcc: Push((int) -2)
0xcd: PushEmpty(string, int)
0xce: Stack[-1] = Stack[-5]
0xcf: Call2 0x4e1

0xd0: Pop(1)
0xd1: @ SendMessage(Stack[-2], Stack[-1])
0xd2: Pop(2)
0xd3: Push((int) 1)
0xd4: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0xd5: GOTO 0xc9

0xd6: Push((int) 271)
0xd7: Pop(1); Push((bool) Stack[-10] == Stack[-1])
0xd8: IF (Stack[-1] == 0) GOTO 0xe7; Pop(1)

0xd9: Stack[-1] = (int) 0
0xda: Push((int) 4)
0xdb: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xdc: IF (Stack[-1] == 0) GOTO 0xe7; Pop(1)

0xdd: Push((int) -3)
0xde: PushEmpty(string, int)
0xdf: Stack[-1] = Stack[-4]
0xe0: Call2 0x4e1

0xe1: Pop(1)
0xe2: @ SendMessage(Stack[-2], Stack[-1])
0xe3: Pop(2)
0xe4: Push((int) 1)
0xe5: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0xe6: GOTO 0xda

0xe7: Return(); Pop(8)

0xe8: PushEmpty(object, object)
0xe9: @ GetPlayerContainer(Stack[-1])
0xea: Pop(0)
0xeb: Stack[-3] = Stack[-1]
0xec: Return(); Pop(2)

0xed: Stack[-1] = 0
0xee: PushEmpty(object, int, int, object, int, object, int, int, object, int)
0xef: Push((int) -4)
0xf0: Pop(1); Push((bool) Stack[-14] == Stack[-1])
0xf1: IF (Stack[-1] == 0) GOTO 0x120; Pop(1)

0xf2: PushEmpty(string, int)
0xf3: Stack[-1] = (int) 0
0xf4: Call2 0x4e1

0xf5: Pop(1)
0xf6: Pop(1); Push((bool) Stack[-13] == Stack[-1])
0xf7: IF (Stack[-1] == 0) GOTO 0x104; Pop(1)

0xf8: Push((int) 0)
0xf9: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] > Stack[-1])
0xfa: IF (Stack[-1] == 0) GOTO 0x103; Pop(1)

0xfb: Push((int) -1)
0xfc: Stack[2 + Tasks[-1].StackPointer] = Stack[2 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0xfd: PushEmpty()
0xfe: Call2 0x1c4

0xff: Pop(0)
0x100: PushEmpty()
0x101: Call2 0x19b

0x102: Pop(0)
0x103: GOTO 0x11b

0x104: PushEmpty(string, int)
0x105: Stack[-1] = (int) 3
0x106: Call2 0x4e1

0x107: Pop(1)
0x108: Pop(1); Push((bool) Stack[-13] == Stack[-1])
0x109: IF (Stack[-1] == 0) GOTO 0x11b; Pop(1)

0x10a: @ GetContainer(Stack[-5])
0x10b: Pop(0)
0x10c: @@ GetItemCount(Stack[-4])
0x10d: Pop(0)
0x10e: Push((int) 4)
0x10f: Pop(1); Push(Stack[2 + StackPtr] + Stack[-1]);
0x110: Pop(1); Push((bool) Stack[-1] <= Stack[-5])
0x111: IF (Stack[-1] == 0) GOTO 0x11a; Pop(1)

0x112: Push((int) 1)
0x113: Stack[2 + Tasks[-1].StackPointer] = Stack[2 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x114: PushEmpty()
0x115: Call2 0x1c4

0x116: Pop(0)
0x117: PushEmpty()
0x118: Call2 0x19b

0x119: Pop(0)
0x11a: Stack[-5] = 0
0x11b: Push((int) -4)
0x11c: @ SendMessage(Stack[-1], Stack[-13])
0x11d: Pop(1)
0x11e: Stack[-14] = (bool) 1
0x11f: Return(); Pop(10)

0x120: Push((int) -8)
0x121: Pop(1); Push((bool) Stack[-14] == Stack[-1])
0x122: IF (Stack[-1] == 0) GOTO 0x126; Pop(1)

0x123: Stack[3 + Tasks[-1].StackPointer] = (int)0
0x124: Stack[-14] = (bool) 1
0x125: Return(); Pop(10)

0x126: Push((int) -9)
0x127: Pop(1); Push((bool) Stack[-14] == Stack[-1])
0x128: IF (Stack[-1] == 0) GOTO 0x12c; Pop(1)

0x129: Stack[3 + Tasks[-1].StackPointer] = (int)2
0x12a: Stack[-14] = (bool) 1
0x12b: Return(); Pop(10)

0x12c: Push((int) 0)
0x12d: Pop(1); Push((bool) Stack[-14] < Stack[-1])
0x12e: IF (Stack[-1] == 0) GOTO 0x131; Pop(1)

0x12f: Stack[-14] = (bool) 1
0x130: Return(); Pop(10)

0x131: Stack[-3] = (int) 0
0x132: Push((int) 4)
0x133: Pop(1); Push((bool) Stack[-4] < Stack[-1])
0x134: IF (Stack[-1] == 0) GOTO 0x146; Pop(1)

0x135: PushEmpty(string, int)
0x136: Stack[-1] = Stack[-5]
0x137: Call2 0x4e1

0x138: Pop(1)
0x139: Pop(1); Push((bool) Stack[-13] == Stack[-1])
0x13a: IF (Stack[-1] == 0) GOTO 0x143; Pop(1)

0x13b: PushEmpty(int, bool)
0x13c: Stack[-2] = Stack[-5]
0x13d: Push((int) 0)
0x13e: Stack[-2] = Stack[-16] == Stack[-1]; Pop(1);
0x13f: Call2 0x17e

0x140: Pop(2)
0x141: Stack[-14] = (bool) 1
0x142: Return(); Pop(10)

0x143: Push((int) 1)
0x144: Stack[-4] = Stack[-4] + Stack[-1]; Pop(1);
0x145: GOTO 0x132

0x146: Push("scrollbar")
0x147: Pop(1); Push((bool) Stack[-13] == Stack[-1])
0x148: IF (Stack[-1] == 0) GOTO 0x15e; Pop(1)

0x149: @ GetContainer(Stack[-2])
0x14a: Pop(0)
0x14b: @@ GetItemCount(Stack[-1])
0x14c: Pop(0)
0x14d: Push((float)0.01)
0x14e: Push((int) 4)
0x14f: Pop(1); Push(Stack[-3] - Stack[-1]);
0x150: Pop(2); Push(Stack[-2] * Stack[-1]);
0x151: Pop(1); Push(Stack[-1] * Stack[-14]);
0x152: Push((float)0.5)
0x153: Stack[2 + Tasks[-1].StackPointer] = Stack[-2] + Stack[-1]; Pop(2);
0x154: Push((int) 0)
0x155: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] < Stack[-1])
0x156: IF (Stack[-1] == 0) GOTO 0x158; Pop(1)

0x157: Stack[2 + Tasks[-1].StackPointer] = (int)0
0x158: PushEmpty()
0x159: Call2 0x1c4

0x15a: Pop(0)
0x15b: Stack[-14] = (bool) 1
0x15c: Return(); Pop(10)

0x15d: Stack[-2] = 0
0x15e: Stack[-14] = (bool) 0
0x15f: Return(); Pop(10)

0x160: PushEmpty()
0x161: Push((int) 0)
0x162: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x163: IF (Stack[-1] == 0) GOTO 0x166; Pop(1)

0x164: Stack[-1] = (int) 1
0x165: GOTO 0x16a

0x166: Push((int) 0)
0x167: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x168: IF (Stack[-1] == 0) GOTO 0x16a; Pop(1)

0x169: Stack[-1] = (int) -1
0x16a: Stack[2 + Tasks[-1].StackPointer] = Stack[2 + Tasks[-1].StackPointer] + Stack[-1]; Pop(0);
0x16b: Push((int) 0)
0x16c: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] < Stack[-1])
0x16d: IF (Stack[-1] == 0) GOTO 0x16f; Pop(1)

0x16e: Stack[2 + Tasks[-1].StackPointer] = (int)0
0x16f: PushEmpty()
0x170: Call2 0x19b

0x171: Pop(0)
0x172: Return(); Pop(0)

0x173: PushEmpty()
0x174: Call2 0x1c4

0x175: Pop(0)
0x176: Return(); Pop(0)

0x177: PushEmpty()
0x178: Call2 0x19b

0x179: Pop(0)
0x17a: PushEmpty()
0x17b: Call2 0x1c4

0x17c: Pop(0)
0x17d: Return(); Pop(0)

0x17e: PushEmpty(bool, bool)
0x17f: PushEmpty(int)
0x180: PushEmpty(int, bool, int)
0x181: Stack[-2] = Stack[-5]
0x182: Stack[-1] = Stack[-8] + Stack[2 + Tasks[-1].StackPointer]; Pop(0);
0x183: Call2 0x3f8

0x184: Stack[-4] = Stack[-3]
0x185: Pop(3)
0x186: Call2 0x390

0x187: Pop(1)
0x188: Pop(0); Push((bool) Stack[-1] == 0)
0x189: IF (Stack[-1] == 0) GOTO 0x18a; Pop(1)

0x18a: PushEmpty()
0x18b: Call2 0x19b

0x18c: Pop(0)
0x18d: Return(); Pop(2)

0x18e: PushEmpty()
0x18f: PushEmpty(bool, int, int)
0x190: Stack[-2] = Stack[0 + Tasks[-1].StackPointer]
0x191: Stack[-1] = Stack[-5]
0x192: Call2 0x448

0x193: Pop(3)
0x194: Push((int) 1)
0x195: Stack[2 + Tasks[-1].StackPointer] = Stack[2 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x196: PushEmpty()
0x197: Call2 0x19b

0x198: Pop(0)
0x199: Stack[-3] = (bool) 1
0x19a: Return(); Pop(0)

0x19b: PushEmpty(object, int, int, int, object, int, int, int)
0x19c: @ GetContainer(Stack[-4])
0x19d: Pop(0)
0x19e: @@ GetItemCount(Stack[-3])
0x19f: Pop(0)
0x1a0: Push((int) 4)
0x1a1: Pop(1); Push((bool) Stack[-4] <= Stack[-1])
0x1a2: IF (Stack[-1] == 0) GOTO 0x1a9; Pop(1)

0x1a3: Push((int) 16384)
0x1a4: Push("scrollbar")
0x1a5: @ SendMessage(Stack[-2], Stack[-1])
0x1a6: Pop(2)
0x1a7: Stack[2 + Tasks[-1].StackPointer] = (int)0
0x1a8: GOTO 0x1c2

0x1a9: Push((int) 4)
0x1aa: Pop(1); Push(Stack[2 + StackPtr] + Stack[-1]);
0x1ab: Pop(1); Push((bool) Stack[-1] > Stack[-4])
0x1ac: IF (Stack[-1] == 0) GOTO 0x1ba; Pop(1)

0x1ad: Push((int) 4)
0x1ae: Pop(1); Push(Stack[2 + StackPtr] + Stack[-1]);
0x1af: Pop(1); Push(Stack[-1] - Stack[-4]);
0x1b0: Stack[2 + Tasks[-1].StackPointer] = Stack[2 + Tasks[-1].StackPointer] - Stack[-1]; Pop(1);
0x1b1: Push((int) 100)
0x1b2: Pop(1); Push(Stack[2 + StackPtr] * Stack[-1]);
0x1b3: Push((int) 4)
0x1b4: Pop(1); Push(Stack[-5] - Stack[-1]);
0x1b5: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0x1b6: Push("scrollbar")
0x1b7: @ SendMessage(Stack[-3], Stack[-1])
0x1b8: Pop(1)
0x1b9: GOTO 0x1c2

0x1ba: Push((int) 100)
0x1bb: Pop(1); Push(Stack[2 + StackPtr] * Stack[-1]);
0x1bc: Push((int) 4)
0x1bd: Pop(1); Push(Stack[-5] - Stack[-1]);
0x1be: Stack[-3] = Stack[-2] / Stack[-1]; Pop(2);
0x1bf: Push("scrollbar")
0x1c0: @ SendMessage(Stack[-2], Stack[-1])
0x1c1: Pop(1)
0x1c2: Return(); Pop(8)

0x1c3: Stack[-4] = 0
0x1c4: PushEmpty(object, int, int, object, int, int, object, int, int, object, int, int)
0x1c5: @ GetContainer(Stack[-6])
0x1c6: Pop(0)
0x1c7: @@ GetItemCount(Stack[-5])
0x1c8: Pop(0)
0x1c9: Stack[-4] = Stack[2 + Tasks[-1].StackPointer]
0x1ca: Push((int) 4)
0x1cb: Pop(1); Push(Stack[2 + StackPtr] + Stack[-1]);
0x1cc: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x1cd: IF (Stack[-1] == 0) GOTO 0x1f1; Pop(1)

0x1ce: Pop(0); Push((bool) Stack[-4] < Stack[-5])
0x1cf: IF (Stack[-1] == 0) GOTO 0x1e7; Pop(1)

0x1d0: @@ GetItem(Stack[-3], Stack[-4])
0x1d1: Pop(0)
0x1d2: @@ GetItemID(Stack[-2])
0x1d3: Pop(0)
0x1d4: @@ GetItemAmount(Stack[-1], Stack[-4])
0x1d5: Pop(0)
0x1d6: Push((int) 0)
0x1d7: PushEmpty(string, int)
0x1d8: Stack[-1] = Stack[-7] - Stack[2 + Tasks[-1].StackPointer]; Pop(0);
0x1d9: Call2 0x4e1

0x1da: Pop(1)
0x1db: @ SendMessage(Stack[-2], Stack[-1], Stack[-5])
0x1dc: Pop(2)
0x1dd: Push((int) 65536)
0x1de: Pop(1); Push(Stack[-2] | Stack[-1]);
0x1df: PushEmpty(string, int)
0x1e0: Stack[-1] = Stack[-7] - Stack[2 + Tasks[-1].StackPointer]; Pop(0);
0x1e1: Call2 0x4e1

0x1e2: Pop(1)
0x1e3: @ SendMessage(Stack[-2], Stack[-1])
0x1e4: Pop(2)
0x1e5: Stack[-3] = 0
0x1e6: GOTO 0x1ee

0x1e7: Push((int) 32768)
0x1e8: PushEmpty(string, int)
0x1e9: Stack[-1] = Stack[-7] - Stack[2 + Tasks[-1].StackPointer]; Pop(0);
0x1ea: Call2 0x4e1

0x1eb: Pop(1)
0x1ec: @ SendMessage(Stack[-2], Stack[-1])
0x1ed: Pop(2)
0x1ee: Push((int) 1)
0x1ef: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x1f0: GOTO 0x1ca

0x1f1: Return(); Pop(12)

0x1f2: Stack[-6] = 0
0x1f3: PushEmpty(int, object, int, object)
0x1f4: Stack[0 + Tasks[-1].StackPointer] = (int)-1
0x1f5: PushEmpty(int)
0x1f6: Stack[-1] = Stack[-6]
0x1f7: Call2 0x390

0x1f8: Pop(1)
0x1f9: PushEmpty(int)
0x1fa: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1fb: Call2 0x47a

0x1fc: Pop(1)
0x1fd: PushEmpty()
0x1fe: Call2 0x3b3

0x1ff: Pop(0)
0x200: Stack[-2] = (int) 0
0x201: Push((int) 12)
0x202: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x203: IF (Stack[-1] == 0) GOTO 0x227; Pop(1)

0x204: @ CreateStringVector(Stack[-1])
0x205: Pop(0)
0x206: PushEmpty(string, int)
0x207: Push((int) 12)
0x208: Pop(1); Push(Stack[-5] + Stack[-1]);
0x209: Push((int) 1)
0x20a: Pop(2); Push(Stack[-2] - Stack[-1]);
0x20b: Push((int) 12)
0x20c: Stack[-3] = Stack[-2] % Stack[-1]; Pop(2);
0x20d: Call2 0x4d1

0x20e: Pop(1)
0x20f: @@ add(Stack[-1])
0x210: Pop(1)
0x211: PushEmpty(string, int)
0x212: Push((int) 12)
0x213: Pop(1); Push(Stack[-5] + Stack[-1]);
0x214: Push((int) 1)
0x215: Pop(2); Push(Stack[-2] + Stack[-1]);
0x216: Push((int) 12)
0x217: Stack[-3] = Stack[-2] % Stack[-1]; Pop(2);
0x218: Call2 0x4d1

0x219: Pop(1)
0x21a: @@ add(Stack[-1])
0x21b: Pop(1)
0x21c: Push((int) -1)
0x21d: PushEmpty(string, int)
0x21e: Stack[-1] = Stack[-5]
0x21f: Call2 0x4d1

0x220: Pop(1)
0x221: @ SendMessage(Stack[-2], Stack[-1], Stack[-3])
0x222: Pop(2)
0x223: Stack[-1] = 0
0x224: Push((int) 1)
0x225: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x226: GOTO 0x201

0x227: PushEmpty()
0x228: Call2 0x3d

0x229: Pop(0)
0x22a: Push("default")
0x22b: @ SetCursor(Stack[-1])
0x22c: Pop(1)
0x22d: @ ShowCursor()
0x22e: Pop(0)
0x22f: @ CaptureKeyboard()
0x230: Pop(0)
0x231: Push((bool) 0)
0x232: @ SetOwnerDraw(Stack[-1])
0x233: Pop(1)
0x234: Push((bool) 1)
0x235: @ SetNeedUpdate(Stack[-1])
0x236: Pop(1)
0x237: PushEmpty()
0x238: Call2 0x177

0x239: Pop(0)
0x23a: @ ProcessEvents()
0x23b: Pop(0)
0x23c: Return(); Pop(4)

0x23d: Push((int) -6)
0x23e: PushEmpty(string, int)
0x23f: Stack[-1] = (int) 0
0x240: Call2 0x4d1

0x241: Pop(1)
0x242: @ SendMessage(Stack[-2], Stack[-1])
0x243: Pop(2)
0x244: Return(); Pop(0)

0x245: PushEmpty()
0x246: @ DestroyWindow()
0x247: Pop(0)
0x248: Return(); Pop(0)

0x249: PushEmpty()
0x24a: PushEmpty(int)
0x24b: Stack[-1] = Stack[-2]
0x24c: Call2 0x98

0x24d: Pop(1)
0x24e: Return(); Pop(0)

0x24f: PushEmpty()
0x250: Push((int) 266)
0x251: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x252: IF (Stack[-1] == 0) GOTO 0x27b; Pop(1)

0x253: Push((int) 0)
0x254: Pop(1); Push((bool) Stack[0 + Tasks[-1].StackPointer] == Stack[-1])
0x255: IF (Stack[-1] == 0) GOTO 0x25b; Pop(1)

0x256: PushEmpty(int)
0x257: Stack[-1] = (int) 1
0x258: Call2 0x390

0x259: Pop(1)
0x25a: GOTO 0x27a

0x25b: Push((int) 1)
0x25c: Pop(1); Push((bool) Stack[0 + Tasks[-1].StackPointer] == Stack[-1])
0x25d: IF (Stack[-1] == 0) GOTO 0x263; Pop(1)

0x25e: PushEmpty(int)
0x25f: Stack[-1] = (int) 2
0x260: Call2 0x390

0x261: Pop(1)
0x262: GOTO 0x27a

0x263: Push((int) 2)
0x264: Pop(1); Push((bool) Stack[0 + Tasks[-1].StackPointer] == Stack[-1])
0x265: IF (Stack[-1] == 0) GOTO 0x26b; Pop(1)

0x266: PushEmpty(int)
0x267: Stack[-1] = (int) 3
0x268: Call2 0x390

0x269: Pop(1)
0x26a: GOTO 0x27a

0x26b: Push((int) 3)
0x26c: Pop(1); Push((bool) Stack[0 + Tasks[-1].StackPointer] == Stack[-1])
0x26d: IF (Stack[-1] == 0) GOTO 0x273; Pop(1)

0x26e: PushEmpty(int)
0x26f: Stack[-1] = (int) 4
0x270: Call2 0x390

0x271: Pop(1)
0x272: GOTO 0x27a

0x273: Push((int) 4)
0x274: Pop(1); Push((bool) Stack[0 + Tasks[-1].StackPointer] == Stack[-1])
0x275: IF (Stack[-1] == 0) GOTO 0x27a; Pop(1)

0x276: PushEmpty(int)
0x277: Stack[-1] = (int) 0
0x278: Call2 0x390

0x279: Pop(1)
0x27a: GOTO 0x2a5

0x27b: Push((int) 265)
0x27c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x27d: IF (Stack[-1] == 0) GOTO 0x2a5; Pop(1)

0x27e: Push((int) 0)
0x27f: Pop(1); Push((bool) Stack[0 + Tasks[-1].StackPointer] == Stack[-1])
0x280: IF (Stack[-1] == 0) GOTO 0x286; Pop(1)

0x281: PushEmpty(int)
0x282: Stack[-1] = (int) 4
0x283: Call2 0x390

0x284: Pop(1)
0x285: GOTO 0x2a5

0x286: Push((int) 1)
0x287: Pop(1); Push((bool) Stack[0 + Tasks[-1].StackPointer] == Stack[-1])
0x288: IF (Stack[-1] == 0) GOTO 0x28e; Pop(1)

0x289: PushEmpty(int)
0x28a: Stack[-1] = (int) 0
0x28b: Call2 0x390

0x28c: Pop(1)
0x28d: GOTO 0x2a5

0x28e: Push((int) 2)
0x28f: Pop(1); Push((bool) Stack[0 + Tasks[-1].StackPointer] == Stack[-1])
0x290: IF (Stack[-1] == 0) GOTO 0x296; Pop(1)

0x291: PushEmpty(int)
0x292: Stack[-1] = (int) 1
0x293: Call2 0x390

0x294: Pop(1)
0x295: GOTO 0x2a5

0x296: Push((int) 3)
0x297: Pop(1); Push((bool) Stack[0 + Tasks[-1].StackPointer] == Stack[-1])
0x298: IF (Stack[-1] == 0) GOTO 0x29e; Pop(1)

0x299: PushEmpty(int)
0x29a: Stack[-1] = (int) 2
0x29b: Call2 0x390

0x29c: Pop(1)
0x29d: GOTO 0x2a5

0x29e: Push((int) 4)
0x29f: Pop(1); Push((bool) Stack[0 + Tasks[-1].StackPointer] == Stack[-1])
0x2a0: IF (Stack[-1] == 0) GOTO 0x2a5; Pop(1)

0x2a1: PushEmpty(int)
0x2a2: Stack[-1] = (int) 3
0x2a3: Call2 0x390

0x2a4: Pop(1)
0x2a5: PushEmpty(int)
0x2a6: Stack[-1] = Stack[-2]
0x2a7: Call2 0x48

0x2a8: Pop(1)
0x2a9: Return(); Pop(0)

0x2aa: PushEmpty(int, int, int, int)
0x2ab: Push((int) 269)
0x2ac: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x2ad: IF (Stack[-1] == 0) GOTO 0x2bc; Pop(1)

0x2ae: Stack[-2] = (int) 0
0x2af: Push((int) 12)
0x2b0: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x2b1: IF (Stack[-1] == 0) GOTO 0x2bc; Pop(1)

0x2b2: Push((int) -2)
0x2b3: PushEmpty(string, int)
0x2b4: Stack[-1] = Stack[-5]
0x2b5: Call2 0x4d1

0x2b6: Pop(1)
0x2b7: @ SendMessage(Stack[-2], Stack[-1])
0x2b8: Pop(2)
0x2b9: Push((int) 1)
0x2ba: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x2bb: GOTO 0x2af

0x2bc: Push((int) 270)
0x2bd: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x2be: IF (Stack[-1] == 0) GOTO 0x2cd; Pop(1)

0x2bf: Stack[-1] = (int) 0
0x2c0: Push((int) 12)
0x2c1: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x2c2: IF (Stack[-1] == 0) GOTO 0x2cd; Pop(1)

0x2c3: Push((int) -3)
0x2c4: PushEmpty(string, int)
0x2c5: Stack[-1] = Stack[-4]
0x2c6: Call2 0x4d1

0x2c7: Pop(1)
0x2c8: @ SendMessage(Stack[-2], Stack[-1])
0x2c9: Pop(2)
0x2ca: Push((int) 1)
0x2cb: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x2cc: GOTO 0x2c0

0x2cd: Return(); Pop(4)

0x2ce: PushEmpty(int, int, int, int)
0x2cf: Push((int) 273)
0x2d0: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x2d1: IF (Stack[-1] == 0) GOTO 0x2e0; Pop(1)

0x2d2: Stack[-2] = (int) 0
0x2d3: Push((int) 12)
0x2d4: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x2d5: IF (Stack[-1] == 0) GOTO 0x2e0; Pop(1)

0x2d6: Push((int) -2)
0x2d7: PushEmpty(string, int)
0x2d8: Stack[-1] = Stack[-5]
0x2d9: Call2 0x4d1

0x2da: Pop(1)
0x2db: @ SendMessage(Stack[-2], Stack[-1])
0x2dc: Pop(2)
0x2dd: Push((int) 1)
0x2de: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x2df: GOTO 0x2d3

0x2e0: Push((int) 271)
0x2e1: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x2e2: IF (Stack[-1] == 0) GOTO 0x2f1; Pop(1)

0x2e3: Stack[-1] = (int) 0
0x2e4: Push((int) 12)
0x2e5: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x2e6: IF (Stack[-1] == 0) GOTO 0x2f1; Pop(1)

0x2e7: Push((int) -3)
0x2e8: PushEmpty(string, int)
0x2e9: Stack[-1] = Stack[-4]
0x2ea: Call2 0x4d1

0x2eb: Pop(1)
0x2ec: @ SendMessage(Stack[-2], Stack[-1])
0x2ed: Pop(2)
0x2ee: Push((int) 1)
0x2ef: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x2f0: GOTO 0x2e4

0x2f1: Return(); Pop(4)

0x2f2: PushEmpty()
0x2f3: Stack[-2] = (bool) 0
0x2f4: Return(); Pop(0)

0x2f5: PushEmpty(bool, bool)
0x2f6: PushEmpty(object)
0x2f7: Call2 0xe8

0x2f8: Pop(0)
0x2f9: PushEmpty(object)
0x2fa: Call2 0xe8

0x2fb: Pop(1)
0x2fc: PushEmpty(object)
0x2fd: Call2 0xe8

0x2fe: Pop(1)
0x2ff: PushEmpty(object)
0x300: Call2 0xe8

0x301: Pop(1)
0x302: @@ IsItemSelected(Stack[-2], Stack[-5], Stack[-4])
0x303: Pop(1)
0x304: Stack[-5] = Stack[-1]
0x305: Return(); Pop(2)

0x306: PushEmpty()
0x307: PushEmpty(int)
0x308: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x309: Call2 0x47a

0x30a: Pop(1)
0x30b: PushEmpty()
0x30c: Call2 0x3b3

0x30d: Pop(0)
0x30e: PushEmpty()
0x30f: Call2 0x173

0x310: Pop(0)
0x311: Return(); Pop(0)

0x312: PushEmpty(bool, int, int, object, int, object, bool, int, int, object, int, object)
0x313: Stack[-6] = (bool) 0
0x314: Push((int) 0)
0x315: Pop(1); Push((bool) Stack[-16] < Stack[-1])
0x316: IF (Stack[-1] == 0) GOTO 0x31f; Pop(1)

0x317: PushEmpty(bool, int, string, object)
0x318: Stack[-3] = Stack[-19]
0x319: Stack[-2] = Stack[-18]
0x31a: Stack[-1] = Stack[-17]
0x31b: Call2 0xee

0x31c: Stack[-10] = Stack[-4]
0x31d: Pop(4)
0x31e: Return(); Pop(12)

0x31f: Push("button_weapon")
0x320: Pop(1); Push((bool) Stack[-15] == Stack[-1])
0x321: IF (Stack[-1] == 0) GOTO 0x328; Pop(1)

0x322: PushEmpty(int)
0x323: Stack[-1] = (int) 0
0x324: Call2 0x390

0x325: Pop(1)
0x326: Stack[-6] = (bool) 1
0x327: GOTO 0x384

0x328: Push("button_clothes")
0x329: Pop(1); Push((bool) Stack[-15] == Stack[-1])
0x32a: IF (Stack[-1] == 0) GOTO 0x331; Pop(1)

0x32b: PushEmpty(int)
0x32c: Stack[-1] = (int) 1
0x32d: Call2 0x390

0x32e: Pop(1)
0x32f: Stack[-6] = (bool) 1
0x330: GOTO 0x384

0x331: Push("button_medcine")
0x332: Pop(1); Push((bool) Stack[-15] == Stack[-1])
0x333: IF (Stack[-1] == 0) GOTO 0x33a; Pop(1)

0x334: PushEmpty(int)
0x335: Stack[-1] = (int) 2
0x336: Call2 0x390

0x337: Pop(1)
0x338: Stack[-6] = (bool) 1
0x339: GOTO 0x384

0x33a: Push("button_food")
0x33b: Pop(1); Push((bool) Stack[-15] == Stack[-1])
0x33c: IF (Stack[-1] == 0) GOTO 0x343; Pop(1)

0x33d: PushEmpty(int)
0x33e: Stack[-1] = (int) 3
0x33f: Call2 0x390

0x340: Pop(1)
0x341: Stack[-6] = (bool) 1
0x342: GOTO 0x384

0x343: Push("button_other")
0x344: Pop(1); Push((bool) Stack[-15] == Stack[-1])
0x345: IF (Stack[-1] == 0) GOTO 0x34c; Pop(1)

0x346: PushEmpty(int)
0x347: Stack[-1] = (int) 4
0x348: Call2 0x390

0x349: Pop(1)
0x34a: Stack[-6] = (bool) 1
0x34b: GOTO 0x384

0x34c: Push("button_detector")
0x34d: Pop(1); Push((bool) Stack[-15] == Stack[-1])
0x34e: IF (Stack[-1] == 0) GOTO 0x350; Pop(1)

0x34f: GOTO 0x384

0x350: Push("button_anticeptic")
0x351: Pop(1); Push((bool) Stack[-15] == Stack[-1])
0x352: IF (Stack[-1] == 0) GOTO 0x354; Pop(1)

0x353: GOTO 0x384

0x354: Push((int) 0)
0x355: Pop(1); Push((bool) Stack[-16] != Stack[-1])
0x356: IF (Stack[-1] == 0) GOTO 0x35d; Pop(1)

0x357: Push("noinv_drop")
0x358: @ GetVariable(Stack[-1], Stack[-6])
0x359: Pop(1)
0x35a: Push(Stack[-5])
0x35b: IF (Stack[-1] == 0) GOTO 0x35d; Pop(1)

0x35c: Return(); Pop(12)

0x35d: Stack[-4] = (int) 0
0x35e: Push((int) 12)
0x35f: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x360: IF (Stack[-1] == 0) GOTO 0x384; Pop(1)

0x361: PushEmpty(string, int)
0x362: Stack[-1] = Stack[-6]
0x363: Call2 0x4d1

0x364: Pop(1)
0x365: Pop(1); Push((bool) Stack[-15] == Stack[-1])
0x366: IF (Stack[-1] == 0) GOTO 0x381; Pop(1)

0x367: PushEmpty(object)
0x368: Call2 0xe8

0x369: Stack[-4] = Stack[-1]
0x36a: Pop(1)
0x36b: @@ GetItemCount(Stack[-2], Stack[-0])
0x36c: Pop(0)
0x36d: Pop(0); Push((bool) Stack[-2] > Stack[-4])
0x36e: IF (Stack[-1] == 0) GOTO 0x37f; Pop(1)

0x36f: @@ GetItem(Stack[-1], Stack[-4], Stack[-0])
0x370: Pop(0)
0x371: PushEmpty(bool, object)
0x372: Stack[-1] = Stack[-3]
0x373: Call2 0x2f2

0x374: Pop(1)
0x375: Pop(1); Push((bool) Stack[-1] == 0)
0x376: IF (Stack[-1] == 0) GOTO 0x37e; Pop(1)

0x377: PushEmpty(bool, int, bool)
0x378: Stack[-2] = Stack[-7]
0x379: Push((int) 0)
0x37a: Stack[-2] = Stack[-19] == Stack[-1]; Pop(1);
0x37b: Call2 0x18e

0x37c: Stack[-9] = Stack[-3]
0x37d: Pop(3)
0x37e: Stack[-1] = 0
0x37f: GOTO 0x384

0x380: Stack[-3] = 0
0x381: Push((int) 1)
0x382: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x383: GOTO 0x35e

0x384: Pop(0); Push((bool) Stack[-6] == 0)
0x385: IF (Stack[-1] == 0) GOTO 0x38d; Pop(1)

0x386: PushEmpty(bool, int, string, object)
0x387: Stack[-3] = Stack[-19]
0x388: Stack[-2] = Stack[-18]
0x389: Stack[-1] = Stack[-17]
0x38a: Call2 0xee

0x38b: Stack[-10] = Stack[-4]
0x38c: Pop(4)
0x38d: Push(Stack[-6])
0x38e: IF (Stack[-1] == 0) GOTO 0x38f; Pop(1)

0x38f: Return(); Pop(12)

0x390: PushEmpty()
0x391: Push((int) -1)
0x392: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x393: IF (Stack[-1] == 0) GOTO 0x395; Pop(1)

0x394: Return(); Pop(0)

0x395: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == Stack[-1])
0x396: IF (Stack[-1] == 0) GOTO 0x398; Pop(1)

0x397: Return(); Pop(0)

0x398: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x399: PushEmpty(int)
0x39a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x39b: Call2 0x3ba

0x39c: Pop(1)
0x39d: Return(); Pop(0)

0x39e: PushEmpty(object, int, object, int)
0x39f: PushEmpty(object)
0x3a0: Call2 0xe8

0x3a1: Stack[-3] = Stack[-1]
0x3a2: Pop(1)
0x3a3: Push("money")
0x3a4: @@ GetProperty(Stack[-1], Stack[-2])
0x3a5: Pop(1)
0x3a6: Stack[-5] = Stack[-1]
0x3a7: Return(); Pop(4)

0x3a8: Stack[-2] = 0
0x3a9: PushEmpty(object, object)
0x3aa: PushEmpty(object)
0x3ab: Call2 0xe8

0x3ac: Stack[-2] = Stack[-1]
0x3ad: Pop(1)
0x3ae: Push("money")
0x3af: @@ SetProperty(Stack[-1], Stack[-4])
0x3b0: Pop(1)
0x3b1: Return(); Pop(2)

0x3b2: Stack[-1] = 0
0x3b3: PushEmpty(int)
0x3b4: Call2 0x39e

0x3b5: Pop(0)
0x3b6: Push("money")
0x3b7: @ SendMessage(Stack[-2], Stack[-1])
0x3b8: Pop(2)
0x3b9: Return(); Pop(0)

0x3ba: PushEmpty()
0x3bb: Push((int) 0)
0x3bc: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x3bd: IF (Stack[-1] == 0) GOTO 0x3c3; Pop(1)

0x3be: Push((int) 0)
0x3bf: Push("button_weapon")
0x3c0: @ SendMessage(Stack[-2], Stack[-1])
0x3c1: Pop(2)
0x3c2: GOTO 0x3c7

0x3c3: Push((int) 1)
0x3c4: Push("button_weapon")
0x3c5: @ SendMessage(Stack[-2], Stack[-1])
0x3c6: Pop(2)
0x3c7: Push((int) 1)
0x3c8: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x3c9: IF (Stack[-1] == 0) GOTO 0x3cf; Pop(1)

0x3ca: Push((int) 0)
0x3cb: Push("button_clothes")
0x3cc: @ SendMessage(Stack[-2], Stack[-1])
0x3cd: Pop(2)
0x3ce: GOTO 0x3d3

0x3cf: Push((int) 1)
0x3d0: Push("button_clothes")
0x3d1: @ SendMessage(Stack[-2], Stack[-1])
0x3d2: Pop(2)
0x3d3: Push((int) 2)
0x3d4: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x3d5: IF (Stack[-1] == 0) GOTO 0x3db; Pop(1)

0x3d6: Push((int) 0)
0x3d7: Push("button_medcine")
0x3d8: @ SendMessage(Stack[-2], Stack[-1])
0x3d9: Pop(2)
0x3da: GOTO 0x3df

0x3db: Push((int) 1)
0x3dc: Push("button_medcine")
0x3dd: @ SendMessage(Stack[-2], Stack[-1])
0x3de: Pop(2)
0x3df: Push((int) 3)
0x3e0: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x3e1: IF (Stack[-1] == 0) GOTO 0x3e7; Pop(1)

0x3e2: Push((int) 0)
0x3e3: Push("button_food")
0x3e4: @ SendMessage(Stack[-2], Stack[-1])
0x3e5: Pop(2)
0x3e6: GOTO 0x3eb

0x3e7: Push((int) 1)
0x3e8: Push("button_food")
0x3e9: @ SendMessage(Stack[-2], Stack[-1])
0x3ea: Pop(2)
0x3eb: Push((int) 4)
0x3ec: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x3ed: IF (Stack[-1] == 0) GOTO 0x3f3; Pop(1)

0x3ee: Push((int) 0)
0x3ef: Push("button_other")
0x3f0: @ SendMessage(Stack[-2], Stack[-1])
0x3f1: Pop(2)
0x3f2: GOTO 0x3f7

0x3f3: Push((int) 1)
0x3f4: Push("button_other")
0x3f5: @ SendMessage(Stack[-2], Stack[-1])
0x3f6: Pop(2)
0x3f7: Return(); Pop(0)

0x3f8: PushEmpty(object, object, object, int, int, int, bool, int, int, bool, bool, object, object, object, int, int, int, bool, int, int, bool, bool)
0x3f9: Stack[-24] = (bool) 0
0x3fa: Push((int) -1)
0x3fb: Pop(1); Push((bool) Stack[-24] == Stack[-1])
0x3fc: IF (Stack[-1] == 0) GOTO 0x3ff; Pop(1)

0x3fd: Stack[-25] = (int) -1
0x3fe: Return(); Pop(22)

0x3ff: PushEmpty(object)
0x400: Call2 0xe8

0x401: Stack[-11] = Stack[-1]
0x402: Pop(1)
0x403: @ GetContainer(Stack[-11])
0x404: Pop(0)
0x405: @@ GetItemCount(Stack[-8])
0x406: Pop(0)
0x407: Pop(0); Push((bool) Stack[-8] <= Stack[-23])
0x408: IF (Stack[-1] == 0) GOTO 0x40b; Pop(1)

0x409: Stack[-25] = (int) -1
0x40a: Return(); Pop(22)

0x40b: @@ GetItemAmount(Stack[-7], Stack[-23])
0x40c: Pop(0)
0x40d: Push((int) 0)
0x40e: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x40f: IF (Stack[-1] == 0) GOTO 0x412; Pop(1)

0x410: Stack[-25] = (int) -1
0x411: Return(); Pop(22)

0x412: @@ GetItem(Stack[-9], Stack[-23])
0x413: Pop(0)
0x414: @@ GetItemID(Stack[-6])
0x415: Pop(0)
0x416: Stack[-5] = (bool) 0
0x417: Push("Organ")
0x418: @@ HasProperty(Stack[-6], Stack[-1])
0x419: Pop(1)
0x41a: Push(Stack[-5])
0x41b: IF (Stack[-1] == 0) GOTO 0x41f; Pop(1)

0x41c: Push("Organ")
0x41d: @@ RemoveProperty(Stack[-1])
0x41e: Pop(1)
0x41f: Push("Category")
0x420: @ GetInvItemProperty(Stack[-5], Stack[-7], Stack[-1])
0x421: Pop(1)
0x422: PushEmpty(int)
0x423: Call2 0x4f1

0x424: Pop(0)
0x425: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x426: IF (Stack[-1] == 0) GOTO 0x438; Pop(1)

0x427: PushEmpty(int)
0x428: Call2 0x39e

0x429: Stack[-4] = Stack[-1]
0x42a: Pop(1)
0x42b: Stack[-3] = Stack[-3] + Stack[-7]; Pop(0);
0x42c: PushEmpty(int)
0x42d: Stack[-1] = Stack[-4]
0x42e: Call2 0x3a9

0x42f: Pop(1)
0x430: @@ RemoveItem(Stack[-23], Stack[-7])
0x431: Pop(0)
0x432: PushEmpty()
0x433: Call2 0x3b3

0x434: Pop(0)
0x435: Stack[-24] = (bool) 1
0x436: Stack[-25] = (int) -1
0x437: Return(); Pop(22)

0x438: Push((int) 1)
0x439: @@ AddItem(Stack[-2], Stack[-10], Stack[-5], Stack[-1])
0x43a: Pop(1)
0x43b: Pop(0); Push((bool) Stack[-1] == 0)
0x43c: IF (Stack[-1] == 0) GOTO 0x43f; Pop(1)

0x43d: Stack[-25] = Stack[-4]
0x43e: Return(); Pop(22)

0x43f: Stack[-24] = (bool) 1
0x440: Push((int) 1)
0x441: @@ RemoveItem(Stack[-24], Stack[-1])
0x442: Pop(1)
0x443: Stack[-25] = Stack[-4]
0x444: Return(); Pop(22)

0x445: Stack[-9] = 0
0x446: Stack[-10] = 0
0x447: Stack[-11] = 0
0x448: PushEmpty(object, object, object, int, int, bool, int, bool, bool, object, object, object, int, int, bool, int, bool, bool)
0x449: PushEmpty(object)
0x44a: Call2 0xe8

0x44b: Stack[-9] = Stack[-1]
0x44c: Pop(1)
0x44d: @ GetContainer(Stack[-9])
0x44e: Pop(0)
0x44f: @@ GetItemCount(Stack[-6], Stack[-20])
0x450: Pop(0)
0x451: Pop(0); Push((bool) Stack[-6] <= Stack[-19])
0x452: IF (Stack[-1] == 0) GOTO 0x455; Pop(1)

0x453: Stack[-21] = (bool) 0
0x454: Return(); Pop(18)

0x455: @@ GetItemAmount(Stack[-5], Stack[-19], Stack[-20])
0x456: Pop(0)
0x457: @@ GetItem(Stack[-7], Stack[-19], Stack[-20])
0x458: Pop(0)
0x459: Push((int) 0)
0x45a: Push((int) 1)
0x45b: @@ AddItem(Stack[-6], Stack[-9], Stack[-2], Stack[-1])
0x45c: Pop(2)
0x45d: Pop(0); Push((bool) Stack[-4] == 0)
0x45e: IF (Stack[-1] == 0) GOTO 0x461; Pop(1)

0x45f: Stack[-21] = (bool) 0
0x460: Return(); Pop(18)

0x461: Push((int) 0)
0x462: Pop(1); Push((bool) Stack[0 + Tasks[-1].StackPointer] == Stack[-1])
0x463: IF (Stack[-1] == 0) GOTO 0x472; Pop(1)

0x464: @@ GetItemID(Stack[-3])
0x465: Pop(0)
0x466: Push("Weapon")
0x467: @ HasInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0x468: Pop(1)
0x469: Push(Stack[-2])
0x46a: IF (Stack[-1] == 0) GOTO 0x472; Pop(1)

0x46b: @@ IsItemSelected(Stack[-1], Stack[-19], Stack[-0])
0x46c: Pop(0)
0x46d: Push(Stack[-1])
0x46e: IF (Stack[-1] == 0) GOTO 0x472; Pop(1)

0x46f: Push((int) -1)
0x470: @ SetPlayerHandsItem(Stack[-1])
0x471: Pop(1)
0x472: Push((int) 1)
0x473: @@ RemoveItem(Stack[-20], Stack[-1], Stack[-21])
0x474: Pop(1)
0x475: Stack[-21] = (bool) 1
0x476: Return(); Pop(18)

0x477: Stack[-7] = 0
0x478: Stack[-8] = 0
0x479: Stack[-9] = 0
0x47a: PushEmpty(object, int, int, object, int, bool, bool, object, int, int, object, int, bool, bool)
0x47b: PushEmpty(object)
0x47c: Call2 0xe8

0x47d: Stack[-8] = Stack[-1]
0x47e: Pop(1)
0x47f: @@ GetItemCount(Stack[-6], Stack[-15])
0x480: Pop(0)
0x481: Stack[-5] = (int) 0
0x482: Push((int) 12)
0x483: Pop(1); Push((bool) Stack[-6] < Stack[-1])
0x484: IF (Stack[-1] == 0) GOTO 0x4cf; Pop(1)

0x485: Pop(0); Push((bool) Stack[-5] < Stack[-6])
0x486: IF (Stack[-1] == 0) GOTO 0x4c5; Pop(1)

0x487: @@ GetItem(Stack[-4], Stack[-5], Stack[-15])
0x488: Pop(0)
0x489: @@ GetItemAmount(Stack[-3], Stack[-5], Stack[-15])
0x48a: Pop(0)
0x48b: PushEmpty(bool, int, int)
0x48c: Stack[-2] = Stack[-8]
0x48d: Stack[-1] = Stack[-18]
0x48e: Call2 0x2f5

0x48f: Stack[-5] = Stack[-3]
0x490: Pop(3)
0x491: PushEmpty(bool, object)
0x492: Stack[-1] = Stack[-6]
0x493: Call2 0x2f2

0x494: Stack[-3] = Stack[-2]
0x495: Pop(2)
0x496: Push(Stack[-2])
0x497: IF (Stack[-1] == 0) GOTO 0x4aa; Pop(1)

0x498: Push(Stack[-1])
0x499: IF (Stack[-1] == 0) GOTO 0x4a2; Pop(1)

0x49a: Push((int) 0)
0x49b: PushEmpty(string, int)
0x49c: Stack[-1] = Stack[-8]
0x49d: Call2 0x4d1

0x49e: Pop(1)
0x49f: @ SendMessage(Stack[-2], Stack[-1], Stack[-6])
0x4a0: Pop(2)
0x4a1: GOTO 0x4a9

0x4a2: Push((int) 16384)
0x4a3: PushEmpty(string, int)
0x4a4: Stack[-1] = Stack[-8]
0x4a5: Call2 0x4d1

0x4a6: Pop(1)
0x4a7: @ SendMessage(Stack[-2], Stack[-1], Stack[-6])
0x4a8: Pop(2)
0x4a9: GOTO 0x4bb

0x4aa: Push(Stack[-1])
0x4ab: IF (Stack[-1] == 0) GOTO 0x4b4; Pop(1)

0x4ac: Push((int) 131072)
0x4ad: PushEmpty(string, int)
0x4ae: Stack[-1] = Stack[-8]
0x4af: Call2 0x4d1

0x4b0: Pop(1)
0x4b1: @ SendMessage(Stack[-2], Stack[-1], Stack[-6])
0x4b2: Pop(2)
0x4b3: GOTO 0x4bb

0x4b4: Push((int) 0)
0x4b5: PushEmpty(string, int)
0x4b6: Stack[-1] = Stack[-8]
0x4b7: Call2 0x4d1

0x4b8: Pop(1)
0x4b9: @ SendMessage(Stack[-2], Stack[-1], Stack[-6])
0x4ba: Pop(2)
0x4bb: Push((int) 65536)
0x4bc: Pop(1); Push(Stack[-4] | Stack[-1]);
0x4bd: PushEmpty(string, int)
0x4be: Stack[-1] = Stack[-8]
0x4bf: Call2 0x4d1

0x4c0: Pop(1)
0x4c1: @ SendMessage(Stack[-2], Stack[-1])
0x4c2: Pop(2)
0x4c3: Stack[-4] = 0
0x4c4: GOTO 0x4cc

0x4c5: Push((int) 32768)
0x4c6: PushEmpty(string, int)
0x4c7: Stack[-1] = Stack[-8]
0x4c8: Call2 0x4d1

0x4c9: Pop(1)
0x4ca: @ SendMessage(Stack[-2], Stack[-1])
0x4cb: Pop(2)
0x4cc: Push((int) 1)
0x4cd: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x4ce: GOTO 0x482

0x4cf: Return(); Pop(14)

0x4d0: Stack[-7] = 0
0x4d1: PushEmpty()
0x4d2: Push((int) 1)
0x4d3: Pop(1); Push(Stack[-2] + Stack[-1]);
0x4d4: Push((int) 10)
0x4d5: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x4d6: IF (Stack[-1] == 0) GOTO 0x4dc; Pop(1)

0x4d7: Push("slot0")
0x4d8: Push((int) 1)
0x4d9: Pop(1); Push(Stack[-3] + Stack[-1]);
0x4da: Stack[-4] = Stack[-2] + Stack[-1]; Pop(2);
0x4db: Return(); Pop(0)

0x4dc: Push("slot")
0x4dd: Push((int) 1)
0x4de: Pop(1); Push(Stack[-3] + Stack[-1]);
0x4df: Stack[-4] = Stack[-2] + Stack[-1]; Pop(2);
0x4e0: Return(); Pop(0)

0x4e1: PushEmpty()
0x4e2: Push((int) 1)
0x4e3: Pop(1); Push(Stack[-2] + Stack[-1]);
0x4e4: Push((int) 10)
0x4e5: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x4e6: IF (Stack[-1] == 0) GOTO 0x4ec; Pop(1)

0x4e7: Push("cslot0")
0x4e8: Push((int) 1)
0x4e9: Pop(1); Push(Stack[-3] + Stack[-1]);
0x4ea: Stack[-4] = Stack[-2] + Stack[-1]; Pop(2);
0x4eb: Return(); Pop(0)

0x4ec: Push("cslot")
0x4ed: Push((int) 1)
0x4ee: Pop(1); Push(Stack[-3] + Stack[-1]);
0x4ef: Stack[-4] = Stack[-2] + Stack[-1]; Pop(2);
0x4f0: Return(); Pop(0)

0x4f1: PushEmpty(int, int)
0x4f2: Push("Money")
0x4f3: @ GetInvItemByName(Stack[-2], Stack[-1])
0x4f4: Pop(1)
0x4f5: Stack[-3] = Stack[-1]
0x4f6: Return(); Pop(2)

