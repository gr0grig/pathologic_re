GlobalVarCount = 0

Strings:
	player
	null apparatus
	add
	inventory_base.xml
	combine
	input0
	output
	GetItemCount
	GetItemAmount
	GetItem
	GetItemID
	AddItem
	RemoveItem
	Grass
	get
	grass_combination
	SetItemName
	im_inc
	SetProperty
	hl_inc
	RemoveAllItems
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
	slot0
	slot

Import:
	FindActor (2 args)
	DestroyWindow (0 args)
	GetWindowData (1 args)
	Trace (1 args)
	CreateFloatVector (1 args)
	CreateWindow (3 args)
	HasInvItemProperty (3 args)
	GetInvItemProperty (3 args)
	SendMessage (3 args)
	SendMessage (2 args)
	CreateInvItem (1 args)
	CreateStringVector (1 args)
	SetCursor (1 args)
	ShowCursor (0 args)
	CaptureKeyboard (0 args)
	SetOwnerDraw (1 args)
	SetNeedUpdate (1 args)
	ProcessEvents (0 args)
	GetVariable (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (int, object, object, object, object, object, object, object, object) Params = 0
		EVENT_100 Op = 0x29e Vars = (int)
		EVENT_102 Op = 0x2a2 Vars = (int)
		EVENT_101 Op = 0x2a8 Vars = (int)
		EVENT_1 Op = 0x34b Vars = (float)
		EVENT_200 Op = 0x357 Vars = (int, string, object)


0x0: Push("player")
0x1: @ FindActor(Stack[-3], Stack[-1])
0x2: Pop(1)
0x3: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x4: IF (Stack[-1] == 0) GOTO 0x8; Pop(1)

0x5: @ DestroyWindow()
0x6: Pop(0)
0x7: Return(); Pop(0)

0x8: @ GetWindowData(Stack[-4])
0x9: Pop(0)
0xa: Pop(0); Push((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0xb: IF (Stack[-1] == 0) GOTO 0x12; Pop(1)

0xc: Push("null apparatus")
0xd: @ Trace(Stack[-1])
0xe: Pop(1)
0xf: @ DestroyWindow()
0x10: Pop(0)
0x11: Return(); Pop(0)

0x12: @ CreateFloatVector(Stack[-6])
0x13: Pop(0)
0x14: @ CreateFloatVector(Stack[-5])
0x15: Pop(0)
0x16: @ CreateFloatVector(Stack[-7])
0x17: Pop(0)
0x18: @ CreateFloatVector(Stack[-8])
0x19: Pop(0)
0x1a: Push((float)0.3)
0x1b: @@ add(Stack[-1])
0x1c: Pop(1)
0x1d: Push((float)0.4)
0x1e: @@ add(Stack[-1])
0x1f: Pop(1)
0x20: Push((int) 1)
0x21: @@ add(Stack[-1])
0x22: Pop(1)
0x23: Push((int) 1)
0x24: @@ add(Stack[-1])
0x25: Pop(1)
0x26: Push((float)-0.3)
0x27: @@ add(Stack[-1])
0x28: Pop(1)
0x29: Push((float)0.4)
0x2a: @@ add(Stack[-1])
0x2b: Pop(1)
0x2c: Push((int) 1)
0x2d: @@ add(Stack[-1])
0x2e: Pop(1)
0x2f: Push((int) 1)
0x30: @@ add(Stack[-1])
0x31: Pop(1)
0x32: Push((float)1.0)
0x33: @@ add(Stack[-1])
0x34: Pop(1)
0x35: Push((float)-1.0)
0x36: @@ add(Stack[-1])
0x37: Pop(1)
0x38: Push((int) 1)
0x39: @@ add(Stack[-1])
0x3a: Pop(1)
0x3b: Push((int) 1)
0x3c: @@ add(Stack[-1])
0x3d: Pop(1)
0x3e: Push((int) 0)
0x3f: @@ add(Stack[-1])
0x40: Pop(1)
0x41: Push((int) 0)
0x42: @@ add(Stack[-1])
0x43: Pop(1)
0x44: Push((float)2.0)
0x45: @@ add(Stack[-1])
0x46: Pop(1)
0x47: Push((int) 1)
0x48: @@ add(Stack[-1])
0x49: Pop(1)
0x4a: Push((int) 0)
0x4b: @@ add(Stack[-1])
0x4c: Pop(1)
0x4d: Push((int) 0)
0x4e: @@ add(Stack[-1])
0x4f: Pop(1)
0x50: Push((int) 1)
0x51: @@ add(Stack[-1])
0x52: Pop(1)
0x53: Push((float)0.5)
0x54: @@ add(Stack[-1])
0x55: Pop(1)
0x56: Push("inventory_base.xml")
0x57: Push((bool) 0)
0x58: @ CreateWindow(Stack[-2], Stack[-1], Stack[-1])
0x59: Pop(2)
0x5a: PushEmpty(int)
0x5b: Stack[-1] = (int) 4
0x5c: Call2 0x24c

0x5d: Pop(1)
0x5e: Return(); Pop(0)

0x5f: Stack[-1] = Stack[3 + Tasks[-1].StackPointer]
0x60: Return(); Pop(0)

0x61: PushEmpty(int, int)
0x62: Push("combine")
0x63: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x64: IF (Stack[-1] == 0) GOTO 0x6a; Pop(1)

0x65: PushEmpty(bool)
0x66: Call2 0x1e8

0x67: Pop(1)
0x68: Stack[-6] = (bool) 1
0x69: Return(); Pop(2)

0x6a: Stack[-1] = (int) 0
0x6b: Push((int) 4)
0x6c: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x6d: IF (Stack[-1] == 0) GOTO 0x80; Pop(1)

0x6e: Push("input0")
0x6f: Push((int) 1)
0x70: Pop(1); Push(Stack[-3] + Stack[-1]);
0x71: Pop(2); Push(Stack[-2] + Stack[-1]);
0x72: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x73: IF (Stack[-1] == 0) GOTO 0x7d; Pop(1)

0x74: PushEmpty(int)
0x75: Call2 0xd1

0x76: Pop(0)
0x77: Pop(1); Push((bool) Stack[-1] > Stack[-2])
0x78: IF (Stack[-1] == 0) GOTO 0x7d; Pop(1)

0x79: PushEmpty(bool, int)
0x7a: Stack[-1] = Stack[-3]
0x7b: Call2 0x173

0x7c: Pop(2)
0x7d: Push((int) 1)
0x7e: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x7f: GOTO 0x6b

0x80: Push("output")
0x81: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x82: IF (Stack[-1] == 0) GOTO 0x86; Pop(1)

0x83: PushEmpty(bool)
0x84: Call2 0x193

0x85: Pop(1)
0x86: Stack[-6] = (bool) 0
0x87: Return(); Pop(2)

0x88: PushEmpty()
0x89: Call2 0x1b2

0x8a: Pop(0)
0x8b: PushEmpty()
0x8c: Call2 0x1d6

0x8d: Pop(0)
0x8e: Return(); Pop(0)

0x8f: PushEmpty()
0x90: PushEmpty(bool, object)
0x91: Stack[-1] = Stack[-3]
0x92: Call2 0x122

0x93: Pop(1)
0x94: Stack[-3] = !Stack[-1]; Pop(1);
0x95: Return(); Pop(0)

0x96: PushEmpty()
0x97: Stack[-3] = (bool) 0
0x98: Return(); Pop(0)

0x99: Return(); Pop(0)

0x9a: PushEmpty()
0x9b: Push(Stack[-1])
0x9c: IF (Stack[-1] == 0) GOTO 0xa3; Pop(1)

0x9d: PushEmpty(bool, int)
0x9e: Stack[-1] = Stack[-4]
0x9f: Call2 0xa5

0xa0: Pop(2)
0xa1: Stack[-3] = (bool) 1
0xa2: Return(); Pop(0)

0xa3: Stack[-3] = (bool) 0
0xa4: Return(); Pop(0)

0xa5: PushEmpty(object, int, int, int, bool, object, int, int, int, bool)
0xa6: PushEmpty(bool)
0xa7: Call2 0xcb

0xa8: Pop(0)
0xa9: Pop(1); Push((bool) Stack[-1] == 0)
0xaa: IF (Stack[-1] == 0) GOTO 0xad; Pop(1)

0xab: Stack[-12] = (bool) 0
0xac: Return(); Pop(10)

0xad: Push((int) 4)
0xae: @@ GetItemCount(Stack[-5], Stack[-1])
0xaf: Pop(1)
0xb0: Pop(0); Push((bool) Stack[-4] <= Stack[-11])
0xb1: IF (Stack[-1] == 0) GOTO 0xb4; Pop(1)

0xb2: Stack[-12] = (bool) 0
0xb3: Return(); Pop(10)

0xb4: Push((int) 4)
0xb5: @@ GetItemAmount(Stack[-4], Stack[-12], Stack[-1])
0xb6: Pop(1)
0xb7: Push((int) 4)
0xb8: @@ GetItem(Stack[-6], Stack[-12], Stack[-1])
0xb9: Pop(1)
0xba: @@ GetItemID(Stack[-2])
0xbb: Pop(0)
0xbc: Push((int) 0)
0xbd: Push((int) 1)
0xbe: @@ AddItem(Stack[-3], Stack[-7], Stack[-2], Stack[-1])
0xbf: Pop(2)
0xc0: Pop(0); Push((bool) Stack[-1] == 0)
0xc1: IF (Stack[-1] == 0) GOTO 0xc4; Pop(1)

0xc2: Stack[-12] = (bool) 0
0xc3: Return(); Pop(10)

0xc4: Push((int) 1)
0xc5: Push((int) 4)
0xc6: @@ RemoveItem(Stack[-13], Stack[-2], Stack[-1])
0xc7: Pop(2)
0xc8: Stack[-12] = (bool) 1
0xc9: Return(); Pop(10)

0xca: Stack[-5] = 0
0xcb: PushEmpty(int)
0xcc: Call2 0xd1

0xcd: Pop(0)
0xce: Push((int) 4)
0xcf: Stack[-3] = Stack[-2] < Stack[-1]; Pop(2);
0xd0: Return(); Pop(0)

0xd1: PushEmpty(int, int, int, object, int, int, int, int, object, int)
0xd2: @@ GetItemCount(Stack[-5])
0xd3: Pop(0)
0xd4: Stack[-4] = (int) 0
0xd5: Stack[-3] = (int) 0
0xd6: Pop(0); Push((bool) Stack[-3] < Stack[-5])
0xd7: IF (Stack[-1] == 0) GOTO 0xe8; Pop(1)

0xd8: @@ GetItem(Stack[-2], Stack[-3])
0xd9: Pop(0)
0xda: PushEmpty(bool, object)
0xdb: Stack[-1] = Stack[-4]
0xdc: Call2 0x122

0xdd: Pop(1)
0xde: Pop(1); Push((bool) Stack[-1] == 0)
0xdf: IF (Stack[-1] == 0) GOTO 0xe1; Pop(1)

0xe0: GOTO 0xe5

0xe1: @@ GetItemAmount(Stack[-1], Stack[-3])
0xe2: Pop(0)
0xe3: Stack[-4] = Stack[-4] + Stack[-1]; Pop(0);
0xe4: Stack[-2] = 0
0xe5: Push((int) 1)
0xe6: Stack[-4] = Stack[-4] + Stack[-1]; Pop(1);
0xe7: GOTO 0xd6

0xe8: Stack[-11] = Stack[-4]
0xe9: Return(); Pop(10)

0xea: PushEmpty(int, int, int, object, int, object, int, int, int, object, int, object)
0xeb: @@ GetItemCount(Stack[-6])
0xec: Pop(0)
0xed: Stack[-5] = (int) 0
0xee: Stack[-4] = (int) 0
0xef: Pop(0); Push((bool) Stack[-4] < Stack[-6])
0xf0: IF (Stack[-1] == 0) GOTO 0x105; Pop(1)

0xf1: @@ GetItem(Stack[-3], Stack[-4])
0xf2: Pop(0)
0xf3: PushEmpty(bool, object)
0xf4: Stack[-1] = Stack[-5]
0xf5: Call2 0x122

0xf6: Pop(1)
0xf7: Pop(1); Push((bool) Stack[-1] == 0)
0xf8: IF (Stack[-1] == 0) GOTO 0xfa; Pop(1)

0xf9: GOTO 0x102

0xfa: @@ GetItemAmount(Stack[-2], Stack[-4])
0xfb: Pop(0)
0xfc: Stack[-5] = Stack[-5] + Stack[-2]; Pop(0);
0xfd: Pop(0); Push((bool) Stack[-5] > Stack[-13])
0xfe: IF (Stack[-1] == 0) GOTO 0x101; Pop(1)

0xff: Stack[-14] = Stack[-3]
0x100: Return(); Pop(12)

0x101: Stack[-3] = 0
0x102: Push((int) 1)
0x103: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x104: GOTO 0xef

0x105: Stack[-1] = 0
0x106: Stack[-14] = Stack[-1]
0x107: Return(); Pop(12)

0x108: Stack[-1] = 0
0x109: PushEmpty(int, int, int, object, object, int, int, int, object, object)
0x10a: @@ GetItemCount(Stack[-5])
0x10b: Pop(0)
0x10c: Stack[-4] = (int) 0
0x10d: Stack[-3] = (int) 0
0x10e: Pop(0); Push((bool) Stack[-3] < Stack[-5])
0x10f: IF (Stack[-1] == 0) GOTO 0x11e; Pop(1)

0x110: @@ GetItem(Stack[-2], Stack[-3])
0x111: Pop(0)
0x112: PushEmpty(bool, object)
0x113: Stack[-1] = Stack[-4]
0x114: Call2 0x122

0x115: Pop(1)
0x116: Pop(1); Push((bool) Stack[-1] == 0)
0x117: IF (Stack[-1] == 0) GOTO 0x11a; Pop(1)

0x118: Stack[-11] = Stack[-2]
0x119: Return(); Pop(10)

0x11a: Stack[-2] = 0
0x11b: Push((int) 1)
0x11c: Stack[-4] = Stack[-4] + Stack[-1]; Pop(1);
0x11d: GOTO 0x10e

0x11e: Stack[-1] = 0
0x11f: Stack[-11] = Stack[-1]
0x120: Return(); Pop(10)

0x121: Stack[-1] = 0
0x122: PushEmpty(int, bool, int, bool)
0x123: PushEmpty(int, object)
0x124: Stack[-1] = Stack[-7]
0x125: Call2 0x49a

0x126: Stack[-4] = Stack[-2]
0x127: Pop(2)
0x128: Push("Grass")
0x129: @ HasInvItemProperty(Stack[-2], Stack[-3], Stack[-1])
0x12a: Pop(1)
0x12b: Stack[-6] = Stack[-1]
0x12c: Return(); Pop(4)

0x12d: PushEmpty(int, bool, int, int, bool, int)
0x12e: PushEmpty(int, object)
0x12f: Stack[-1] = Stack[-9]
0x130: Call2 0x49a

0x131: Stack[-5] = Stack[-2]
0x132: Pop(2)
0x133: Push("Grass")
0x134: @ HasInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0x135: Pop(1)
0x136: Pop(0); Push((bool) Stack[-2] == 0)
0x137: IF (Stack[-1] == 0) GOTO 0x13a; Pop(1)

0x138: Stack[-8] = (int) -1
0x139: Return(); Pop(6)

0x13a: Push("Grass")
0x13b: @ GetInvItemProperty(Stack[-2], Stack[-4], Stack[-1])
0x13c: Pop(1)
0x13d: Stack[-8] = Stack[-1]
0x13e: Return(); Pop(6)

0x13f: PushEmpty(int, int, int, object, int, int, int, int, object, int)
0x140: @@ GetItemCount(Stack[-5])
0x141: Pop(0)
0x142: Stack[-4] = (int) 0
0x143: Stack[-3] = (int) 0
0x144: Pop(0); Push((bool) Stack[-3] < Stack[-5])
0x145: IF (Stack[-1] == 0) GOTO 0x15a; Pop(1)

0x146: @@ GetItem(Stack[-2], Stack[-3])
0x147: Pop(0)
0x148: PushEmpty(bool, object)
0x149: Stack[-1] = Stack[-4]
0x14a: Call2 0x122

0x14b: Pop(1)
0x14c: Pop(1); Push((bool) Stack[-1] == 0)
0x14d: IF (Stack[-1] == 0) GOTO 0x14f; Pop(1)

0x14e: GOTO 0x157

0x14f: @@ GetItemAmount(Stack[-1], Stack[-3])
0x150: Pop(0)
0x151: Stack[-4] = Stack[-4] + Stack[-1]; Pop(0);
0x152: Pop(0); Push((bool) Stack[-4] > Stack[-11])
0x153: IF (Stack[-1] == 0) GOTO 0x156; Pop(1)

0x154: Stack[-12] = Stack[-3]
0x155: Return(); Pop(10)

0x156: Stack[-2] = 0
0x157: Push((int) 1)
0x158: Stack[-4] = Stack[-4] + Stack[-1]; Pop(1);
0x159: GOTO 0x144

0x15a: Stack[-12] = (int) -1
0x15b: Return(); Pop(10)

0x15c: PushEmpty(int, int, int, object, int, int, int, object)
0x15d: @@ GetItemCount(Stack[-4])
0x15e: Pop(0)
0x15f: Stack[-3] = (int) 0
0x160: Stack[-2] = (int) 0
0x161: Pop(0); Push((bool) Stack[-2] < Stack[-4])
0x162: IF (Stack[-1] == 0) GOTO 0x171; Pop(1)

0x163: @@ GetItem(Stack[-1], Stack[-2])
0x164: Pop(0)
0x165: PushEmpty(bool, object)
0x166: Stack[-1] = Stack[-3]
0x167: Call2 0x122

0x168: Pop(1)
0x169: Pop(1); Push((bool) Stack[-1] == 0)
0x16a: IF (Stack[-1] == 0) GOTO 0x16d; Pop(1)

0x16b: Stack[-9] = Stack[-2]
0x16c: Return(); Pop(8)

0x16d: Stack[-1] = 0
0x16e: Push((int) 1)
0x16f: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x170: GOTO 0x161

0x171: Stack[-9] = (int) -1
0x172: Return(); Pop(8)

0x173: PushEmpty(int, bool, int, bool)
0x174: PushEmpty(int, int)
0x175: Stack[-1] = Stack[-7]
0x176: Call2 0x13f

0x177: Stack[-4] = Stack[-2]
0x178: Pop(2)
0x179: Push((int) -1)
0x17a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x17b: IF (Stack[-1] == 0) GOTO 0x17e; Pop(1)

0x17c: Stack[-6] = (bool) 0
0x17d: Return(); Pop(4)

0x17e: PushEmpty(object, int)
0x17f: Stack[-1] = Stack[-7]
0x180: Call2 0xea

0x181: Pop(1)
0x182: Push((int) 4)
0x183: Push((int) 1)
0x184: @@ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x185: Pop(3)
0x186: Pop(0); Push((bool) Stack[-1] == 0)
0x187: IF (Stack[-1] == 0) GOTO 0x18a; Pop(1)

0x188: Stack[-6] = (bool) 0
0x189: Return(); Pop(4)

0x18a: Push((int) 1)
0x18b: @@ RemoveItem(Stack[-3], Stack[-1])
0x18c: Pop(1)
0x18d: PushEmpty(int)
0x18e: Stack[-1] = (int) 4
0x18f: Call2 0x3d5

0x190: Pop(1)
0x191: Stack[-6] = (bool) 1
0x192: Return(); Pop(4)

0x193: PushEmpty(object, int, bool, object, int, bool)
0x194: PushEmpty(object)
0x195: Call2 0x109

0x196: Stack[-4] = Stack[-1]
0x197: Pop(1)
0x198: Pop(0); Push((bool) Stack[-3] == 0)
0x199: IF (Stack[-1] == 0) GOTO 0x19c; Pop(1)

0x19a: Stack[-7] = (bool) 0
0x19b: Return(); Pop(6)

0x19c: PushEmpty(int)
0x19d: Call2 0x15c

0x19e: Stack[-3] = Stack[-1]
0x19f: Pop(1)
0x1a0: Push((int) 2)
0x1a1: Push((int) 1)
0x1a2: @@ AddItem(Stack[-3], Stack[-5], Stack[-2], Stack[-1])
0x1a3: Pop(2)
0x1a4: Pop(0); Push((bool) Stack[-1] == 0)
0x1a5: IF (Stack[-1] == 0) GOTO 0x1a8; Pop(1)

0x1a6: Stack[-7] = (bool) 0
0x1a7: Return(); Pop(6)

0x1a8: Push((int) 1)
0x1a9: @@ RemoveItem(Stack[-3], Stack[-1])
0x1aa: Pop(1)
0x1ab: PushEmpty(int)
0x1ac: Stack[-1] = (int) 2
0x1ad: Call2 0x3d5

0x1ae: Pop(1)
0x1af: Stack[-7] = (bool) 1
0x1b0: Return(); Pop(6)

0x1b1: Stack[-3] = 0
0x1b2: PushEmpty(int, int, object, int, int, object)
0x1b3: PushEmpty(int)
0x1b4: Call2 0xd1

0x1b5: Stack[-4] = Stack[-1]
0x1b6: Pop(1)
0x1b7: Stack[-2] = (int) 0
0x1b8: Push((int) 4)
0x1b9: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x1ba: IF (Stack[-1] == 0) GOTO 0x1d5; Pop(1)

0x1bb: PushEmpty(object, int)
0x1bc: Stack[-1] = Stack[-4]
0x1bd: Call2 0xea

0x1be: Stack[-3] = Stack[-2]
0x1bf: Pop(2)
0x1c0: Push(Stack[-1])
0x1c1: IF (Stack[-1] == 0) GOTO 0x1ca; Pop(1)

0x1c2: Push((int) 0)
0x1c3: Push("input0")
0x1c4: Push((int) 1)
0x1c5: Pop(1); Push(Stack[-5] + Stack[-1]);
0x1c6: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1c7: @ SendMessage(Stack[-2], Stack[-1], Stack[-3])
0x1c8: Pop(2)
0x1c9: GOTO 0x1d1

0x1ca: Push((int) 32768)
0x1cb: Push("input0")
0x1cc: Push((int) 1)
0x1cd: Pop(1); Push(Stack[-5] + Stack[-1]);
0x1ce: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1cf: @ SendMessage(Stack[-2], Stack[-1])
0x1d0: Pop(2)
0x1d1: Stack[-1] = 0
0x1d2: Push((int) 1)
0x1d3: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x1d4: GOTO 0x1b8

0x1d5: Return(); Pop(6)

0x1d6: PushEmpty(object, object)
0x1d7: PushEmpty(object)
0x1d8: Call2 0x109

0x1d9: Stack[-2] = Stack[-1]
0x1da: Pop(1)
0x1db: Push(Stack[-1])
0x1dc: IF (Stack[-1] == 0) GOTO 0x1e2; Pop(1)

0x1dd: Push((int) 0)
0x1de: Push("output")
0x1df: @ SendMessage(Stack[-2], Stack[-1], Stack[-3])
0x1e0: Pop(2)
0x1e1: GOTO 0x1e6

0x1e2: Push((int) 32768)
0x1e3: Push("output")
0x1e4: @ SendMessage(Stack[-2], Stack[-1])
0x1e5: Pop(2)
0x1e6: Return(); Pop(2)

0x1e7: Stack[-1] = 0
0x1e8: PushEmpty(float, float, float, float, int, object, int, float, object, bool, float, float, float, float, int, object, int, float, object, bool)
0x1e9: PushEmpty(int)
0x1ea: Call2 0xd1

0x1eb: Pop(0)
0x1ec: Push((int) 0)
0x1ed: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1ee: IF (Stack[-1] == 0) GOTO 0x1f1; Pop(1)

0x1ef: Stack[-21] = (bool) 0
0x1f0: Return(); Pop(20)

0x1f1: PushEmpty(object)
0x1f2: Call2 0x109

0x1f3: Pop(0)
0x1f4: IF (Stack[-1] == 0) GOTO 0x1f7; Pop(1)

0x1f5: Stack[-21] = (bool) 0
0x1f6: Return(); Pop(20)

0x1f7: Stack[-10] = (int) 0
0x1f8: Stack[-9] = (int) 0
0x1f9: Stack[-8] = (int) 1
0x1fa: Stack[-7] = (int) 1
0x1fb: Stack[-6] = (int) 0
0x1fc: PushEmpty(int)
0x1fd: Call2 0xd1

0x1fe: Pop(0)
0x1ff: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x200: IF (Stack[-1] == 0) GOTO 0x21b; Pop(1)

0x201: PushEmpty(object, int)
0x202: Stack[-1] = Stack[-8]
0x203: Call2 0xea

0x204: Stack[-7] = Stack[-2]
0x205: Pop(2)
0x206: PushEmpty(int, object)
0x207: Stack[-1] = Stack[-7]
0x208: Call2 0x12d

0x209: Stack[-6] = Stack[-2]
0x20a: Pop(2)
0x20b: @@ get(Stack[-3], Stack[-4])
0x20c: Pop(0)
0x20d: Stack[-10] = Stack[-10] + Stack[-3]; Pop(0);
0x20e: @@ get(Stack[-3], Stack[-4])
0x20f: Pop(0)
0x210: Stack[-9] = Stack[-9] + Stack[-3]; Pop(0);
0x211: @@ get(Stack[-3], Stack[-4])
0x212: Pop(0)
0x213: Stack[-8] = Stack[-8] * Stack[-3]; Pop(0);
0x214: @@ get(Stack[-3], Stack[-4])
0x215: Pop(0)
0x216: Stack[-7] = Stack[-7] * Stack[-3]; Pop(0);
0x217: Stack[-5] = 0
0x218: Push((int) 1)
0x219: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x21a: GOTO 0x1fc

0x21b: Stack[-10] = Stack[-10] * Stack[-8]; Pop(0);
0x21c: Stack[-9] = Stack[-9] * Stack[-7]; Pop(0);
0x21d: Push((int) 0)
0x21e: Pop(1); Push((bool) Stack[-11] > Stack[-1])
0x21f: IF (Stack[-1] == 0) GOTO 0x221; Pop(1)

0x220: GOTO 0x222

0x221: Stack[-10] = -Stack[-10]; Pop(0);
0x222: Push((int) 0)
0x223: Pop(1); Push((bool) Stack[-10] > Stack[-1])
0x224: IF (Stack[-1] == 0) GOTO 0x226; Pop(1)

0x225: GOTO 0x227

0x226: Stack[-9] = -Stack[-9]; Pop(0);
0x227: Push((float)20.0)
0x228: Stack[-11] = Stack[-11] * Stack[-1]; Pop(1);
0x229: Push((float)15.0)
0x22a: Stack[-10] = Stack[-10] * Stack[-1]; Pop(1);
0x22b: Push((int) 100)
0x22c: Pop(1); Push((bool) Stack[-11] > Stack[-1])
0x22d: IF (Stack[-1] == 0) GOTO 0x22f; Pop(1)

0x22e: Stack[-10] = (int) 100
0x22f: Push((int) 100)
0x230: Pop(1); Push((bool) Stack[-10] > Stack[-1])
0x231: IF (Stack[-1] == 0) GOTO 0x233; Pop(1)

0x232: Stack[-9] = (int) 100
0x233: @ CreateInvItem(Stack[-2])
0x234: Pop(0)
0x235: Push("grass_combination")
0x236: @@ SetItemName(Stack[-1])
0x237: Pop(1)
0x238: Push("im_inc")
0x239: Push((float)100.0)
0x23a: Pop(1); Push(Stack[-12] / Stack[-1]);
0x23b: @@ SetProperty(Stack[-2], Stack[-1])
0x23c: Pop(2)
0x23d: Push("hl_inc")
0x23e: Push((float)100.0)
0x23f: Pop(1); Push(Stack[-11] / Stack[-1]);
0x240: Pop(1); Push(( -Stack[-1])
0x241: @@ SetProperty(Stack[-2], Stack[-1])
0x242: Pop(2)
0x243: @@ RemoveAllItems()
0x244: Pop(0)
0x245: Push((int) 0)
0x246: Push((int) 1)
0x247: @@ AddItem(Stack[-3], Stack[-4], Stack[-2], Stack[-1])
0x248: Pop(2)
0x249: Stack[-21] = (bool) 1
0x24a: Return(); Pop(20)

0x24b: Stack[-2] = 0
0x24c: PushEmpty(int, object, int, object)
0x24d: Stack[0 + Tasks[-1].StackPointer] = (int)-1
0x24e: PushEmpty(int)
0x24f: Stack[-1] = Stack[-6]
0x250: Call2 0x3d5

0x251: Pop(1)
0x252: PushEmpty(int)
0x253: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x254: Call2 0x433

0x255: Pop(1)
0x256: PushEmpty()
0x257: Call2 0x3ee

0x258: Pop(0)
0x259: Stack[-2] = (int) 0
0x25a: Push((int) 12)
0x25b: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x25c: IF (Stack[-1] == 0) GOTO 0x280; Pop(1)

0x25d: @ CreateStringVector(Stack[-1])
0x25e: Pop(0)
0x25f: PushEmpty(string, int)
0x260: Push((int) 12)
0x261: Pop(1); Push(Stack[-5] + Stack[-1]);
0x262: Push((int) 1)
0x263: Pop(2); Push(Stack[-2] - Stack[-1]);
0x264: Push((int) 12)
0x265: Stack[-3] = Stack[-2] % Stack[-1]; Pop(2);
0x266: Call2 0x48a

0x267: Pop(1)
0x268: @@ add(Stack[-1])
0x269: Pop(1)
0x26a: PushEmpty(string, int)
0x26b: Push((int) 12)
0x26c: Pop(1); Push(Stack[-5] + Stack[-1]);
0x26d: Push((int) 1)
0x26e: Pop(2); Push(Stack[-2] + Stack[-1]);
0x26f: Push((int) 12)
0x270: Stack[-3] = Stack[-2] % Stack[-1]; Pop(2);
0x271: Call2 0x48a

0x272: Pop(1)
0x273: @@ add(Stack[-1])
0x274: Pop(1)
0x275: Push((int) -1)
0x276: PushEmpty(string, int)
0x277: Stack[-1] = Stack[-5]
0x278: Call2 0x48a

0x279: Pop(1)
0x27a: @ SendMessage(Stack[-2], Stack[-1], Stack[-3])
0x27b: Pop(2)
0x27c: Stack[-1] = 0
0x27d: Push((int) 1)
0x27e: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x27f: GOTO 0x25a

0x280: PushEmpty()
0x281: Call2 0x296

0x282: Pop(0)
0x283: Push("default")
0x284: @ SetCursor(Stack[-1])
0x285: Pop(1)
0x286: @ ShowCursor()
0x287: Pop(0)
0x288: @ CaptureKeyboard()
0x289: Pop(0)
0x28a: Push((bool) 0)
0x28b: @ SetOwnerDraw(Stack[-1])
0x28c: Pop(1)
0x28d: Push((bool) 1)
0x28e: @ SetNeedUpdate(Stack[-1])
0x28f: Pop(1)
0x290: PushEmpty()
0x291: Call2 0x99

0x292: Pop(0)
0x293: @ ProcessEvents()
0x294: Pop(0)
0x295: Return(); Pop(4)

0x296: Push((int) -6)
0x297: PushEmpty(string, int)
0x298: Stack[-1] = (int) 0
0x299: Call2 0x48a

0x29a: Pop(1)
0x29b: @ SendMessage(Stack[-2], Stack[-1])
0x29c: Pop(2)
0x29d: Return(); Pop(0)

0x29e: PushEmpty()
0x29f: @ DestroyWindow()
0x2a0: Pop(0)
0x2a1: Return(); Pop(0)

0x2a2: PushEmpty()
0x2a3: PushEmpty(int)
0x2a4: Stack[-1] = Stack[-2]
0x2a5: Call2 0x327

0x2a6: Pop(1)
0x2a7: Return(); Pop(0)

0x2a8: PushEmpty()
0x2a9: Push((int) 266)
0x2aa: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2ab: IF (Stack[-1] == 0) GOTO 0x2d4; Pop(1)

0x2ac: Push((int) 0)
0x2ad: Pop(1); Push((bool) Stack[0 + Tasks[-1].StackPointer] == Stack[-1])
0x2ae: IF (Stack[-1] == 0) GOTO 0x2b4; Pop(1)

0x2af: PushEmpty(int)
0x2b0: Stack[-1] = (int) 1
0x2b1: Call2 0x3d5

0x2b2: Pop(1)
0x2b3: GOTO 0x2d3

0x2b4: Push((int) 1)
0x2b5: Pop(1); Push((bool) Stack[0 + Tasks[-1].StackPointer] == Stack[-1])
0x2b6: IF (Stack[-1] == 0) GOTO 0x2bc; Pop(1)

0x2b7: PushEmpty(int)
0x2b8: Stack[-1] = (int) 2
0x2b9: Call2 0x3d5

0x2ba: Pop(1)
0x2bb: GOTO 0x2d3

0x2bc: Push((int) 2)
0x2bd: Pop(1); Push((bool) Stack[0 + Tasks[-1].StackPointer] == Stack[-1])
0x2be: IF (Stack[-1] == 0) GOTO 0x2c4; Pop(1)

0x2bf: PushEmpty(int)
0x2c0: Stack[-1] = (int) 3
0x2c1: Call2 0x3d5

0x2c2: Pop(1)
0x2c3: GOTO 0x2d3

0x2c4: Push((int) 3)
0x2c5: Pop(1); Push((bool) Stack[0 + Tasks[-1].StackPointer] == Stack[-1])
0x2c6: IF (Stack[-1] == 0) GOTO 0x2cc; Pop(1)

0x2c7: PushEmpty(int)
0x2c8: Stack[-1] = (int) 4
0x2c9: Call2 0x3d5

0x2ca: Pop(1)
0x2cb: GOTO 0x2d3

0x2cc: Push((int) 4)
0x2cd: Pop(1); Push((bool) Stack[0 + Tasks[-1].StackPointer] == Stack[-1])
0x2ce: IF (Stack[-1] == 0) GOTO 0x2d3; Pop(1)

0x2cf: PushEmpty(int)
0x2d0: Stack[-1] = (int) 0
0x2d1: Call2 0x3d5

0x2d2: Pop(1)
0x2d3: GOTO 0x2fe

0x2d4: Push((int) 265)
0x2d5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2d6: IF (Stack[-1] == 0) GOTO 0x2fe; Pop(1)

0x2d7: Push((int) 0)
0x2d8: Pop(1); Push((bool) Stack[0 + Tasks[-1].StackPointer] == Stack[-1])
0x2d9: IF (Stack[-1] == 0) GOTO 0x2df; Pop(1)

0x2da: PushEmpty(int)
0x2db: Stack[-1] = (int) 4
0x2dc: Call2 0x3d5

0x2dd: Pop(1)
0x2de: GOTO 0x2fe

0x2df: Push((int) 1)
0x2e0: Pop(1); Push((bool) Stack[0 + Tasks[-1].StackPointer] == Stack[-1])
0x2e1: IF (Stack[-1] == 0) GOTO 0x2e7; Pop(1)

0x2e2: PushEmpty(int)
0x2e3: Stack[-1] = (int) 0
0x2e4: Call2 0x3d5

0x2e5: Pop(1)
0x2e6: GOTO 0x2fe

0x2e7: Push((int) 2)
0x2e8: Pop(1); Push((bool) Stack[0 + Tasks[-1].StackPointer] == Stack[-1])
0x2e9: IF (Stack[-1] == 0) GOTO 0x2ef; Pop(1)

0x2ea: PushEmpty(int)
0x2eb: Stack[-1] = (int) 1
0x2ec: Call2 0x3d5

0x2ed: Pop(1)
0x2ee: GOTO 0x2fe

0x2ef: Push((int) 3)
0x2f0: Pop(1); Push((bool) Stack[0 + Tasks[-1].StackPointer] == Stack[-1])
0x2f1: IF (Stack[-1] == 0) GOTO 0x2f7; Pop(1)

0x2f2: PushEmpty(int)
0x2f3: Stack[-1] = (int) 2
0x2f4: Call2 0x3d5

0x2f5: Pop(1)
0x2f6: GOTO 0x2fe

0x2f7: Push((int) 4)
0x2f8: Pop(1); Push((bool) Stack[0 + Tasks[-1].StackPointer] == Stack[-1])
0x2f9: IF (Stack[-1] == 0) GOTO 0x2fe; Pop(1)

0x2fa: PushEmpty(int)
0x2fb: Stack[-1] = (int) 3
0x2fc: Call2 0x3d5

0x2fd: Pop(1)
0x2fe: PushEmpty(int)
0x2ff: Stack[-1] = Stack[-2]
0x300: Call2 0x303

0x301: Pop(1)
0x302: Return(); Pop(0)

0x303: PushEmpty(int, int, int, int)
0x304: Push((int) 269)
0x305: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x306: IF (Stack[-1] == 0) GOTO 0x315; Pop(1)

0x307: Stack[-2] = (int) 0
0x308: Push((int) 12)
0x309: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x30a: IF (Stack[-1] == 0) GOTO 0x315; Pop(1)

0x30b: Push((int) -2)
0x30c: PushEmpty(string, int)
0x30d: Stack[-1] = Stack[-5]
0x30e: Call2 0x48a

0x30f: Pop(1)
0x310: @ SendMessage(Stack[-2], Stack[-1])
0x311: Pop(2)
0x312: Push((int) 1)
0x313: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x314: GOTO 0x308

0x315: Push((int) 270)
0x316: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x317: IF (Stack[-1] == 0) GOTO 0x326; Pop(1)

0x318: Stack[-1] = (int) 0
0x319: Push((int) 12)
0x31a: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x31b: IF (Stack[-1] == 0) GOTO 0x326; Pop(1)

0x31c: Push((int) -3)
0x31d: PushEmpty(string, int)
0x31e: Stack[-1] = Stack[-4]
0x31f: Call2 0x48a

0x320: Pop(1)
0x321: @ SendMessage(Stack[-2], Stack[-1])
0x322: Pop(2)
0x323: Push((int) 1)
0x324: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x325: GOTO 0x319

0x326: Return(); Pop(4)

0x327: PushEmpty(int, int, int, int)
0x328: Push((int) 273)
0x329: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x32a: IF (Stack[-1] == 0) GOTO 0x339; Pop(1)

0x32b: Stack[-2] = (int) 0
0x32c: Push((int) 12)
0x32d: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x32e: IF (Stack[-1] == 0) GOTO 0x339; Pop(1)

0x32f: Push((int) -2)
0x330: PushEmpty(string, int)
0x331: Stack[-1] = Stack[-5]
0x332: Call2 0x48a

0x333: Pop(1)
0x334: @ SendMessage(Stack[-2], Stack[-1])
0x335: Pop(2)
0x336: Push((int) 1)
0x337: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x338: GOTO 0x32c

0x339: Push((int) 271)
0x33a: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x33b: IF (Stack[-1] == 0) GOTO 0x34a; Pop(1)

0x33c: Stack[-1] = (int) 0
0x33d: Push((int) 12)
0x33e: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x33f: IF (Stack[-1] == 0) GOTO 0x34a; Pop(1)

0x340: Push((int) -3)
0x341: PushEmpty(string, int)
0x342: Stack[-1] = Stack[-4]
0x343: Call2 0x48a

0x344: Pop(1)
0x345: @ SendMessage(Stack[-2], Stack[-1])
0x346: Pop(2)
0x347: Push((int) 1)
0x348: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x349: GOTO 0x33d

0x34a: Return(); Pop(4)

0x34b: PushEmpty()
0x34c: PushEmpty(int)
0x34d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x34e: Call2 0x433

0x34f: Pop(1)
0x350: PushEmpty()
0x351: Call2 0x3ee

0x352: Pop(0)
0x353: PushEmpty()
0x354: Call2 0x88

0x355: Pop(0)
0x356: Return(); Pop(0)

0x357: PushEmpty(bool, int, int, object, int, object, bool, int, int, object, int, object)
0x358: Stack[-6] = (bool) 0
0x359: Push((int) 0)
0x35a: Pop(1); Push((bool) Stack[-16] < Stack[-1])
0x35b: IF (Stack[-1] == 0) GOTO 0x364; Pop(1)

0x35c: PushEmpty(bool, int, string, object)
0x35d: Stack[-3] = Stack[-19]
0x35e: Stack[-2] = Stack[-18]
0x35f: Stack[-1] = Stack[-17]
0x360: Call2 0x61

0x361: Stack[-10] = Stack[-4]
0x362: Pop(4)
0x363: Return(); Pop(12)

0x364: Push("button_weapon")
0x365: Pop(1); Push((bool) Stack[-15] == Stack[-1])
0x366: IF (Stack[-1] == 0) GOTO 0x36d; Pop(1)

0x367: PushEmpty(int)
0x368: Stack[-1] = (int) 0
0x369: Call2 0x3d5

0x36a: Pop(1)
0x36b: Stack[-6] = (bool) 1
0x36c: GOTO 0x3c9

0x36d: Push("button_clothes")
0x36e: Pop(1); Push((bool) Stack[-15] == Stack[-1])
0x36f: IF (Stack[-1] == 0) GOTO 0x376; Pop(1)

0x370: PushEmpty(int)
0x371: Stack[-1] = (int) 1
0x372: Call2 0x3d5

0x373: Pop(1)
0x374: Stack[-6] = (bool) 1
0x375: GOTO 0x3c9

0x376: Push("button_medcine")
0x377: Pop(1); Push((bool) Stack[-15] == Stack[-1])
0x378: IF (Stack[-1] == 0) GOTO 0x37f; Pop(1)

0x379: PushEmpty(int)
0x37a: Stack[-1] = (int) 2
0x37b: Call2 0x3d5

0x37c: Pop(1)
0x37d: Stack[-6] = (bool) 1
0x37e: GOTO 0x3c9

0x37f: Push("button_food")
0x380: Pop(1); Push((bool) Stack[-15] == Stack[-1])
0x381: IF (Stack[-1] == 0) GOTO 0x388; Pop(1)

0x382: PushEmpty(int)
0x383: Stack[-1] = (int) 3
0x384: Call2 0x3d5

0x385: Pop(1)
0x386: Stack[-6] = (bool) 1
0x387: GOTO 0x3c9

0x388: Push("button_other")
0x389: Pop(1); Push((bool) Stack[-15] == Stack[-1])
0x38a: IF (Stack[-1] == 0) GOTO 0x391; Pop(1)

0x38b: PushEmpty(int)
0x38c: Stack[-1] = (int) 4
0x38d: Call2 0x3d5

0x38e: Pop(1)
0x38f: Stack[-6] = (bool) 1
0x390: GOTO 0x3c9

0x391: Push("button_detector")
0x392: Pop(1); Push((bool) Stack[-15] == Stack[-1])
0x393: IF (Stack[-1] == 0) GOTO 0x395; Pop(1)

0x394: GOTO 0x3c9

0x395: Push("button_anticeptic")
0x396: Pop(1); Push((bool) Stack[-15] == Stack[-1])
0x397: IF (Stack[-1] == 0) GOTO 0x399; Pop(1)

0x398: GOTO 0x3c9

0x399: Push((int) 0)
0x39a: Pop(1); Push((bool) Stack[-16] != Stack[-1])
0x39b: IF (Stack[-1] == 0) GOTO 0x3a2; Pop(1)

0x39c: Push("noinv_drop")
0x39d: @ GetVariable(Stack[-1], Stack[-6])
0x39e: Pop(1)
0x39f: Push(Stack[-5])
0x3a0: IF (Stack[-1] == 0) GOTO 0x3a2; Pop(1)

0x3a1: Return(); Pop(12)

0x3a2: Stack[-4] = (int) 0
0x3a3: Push((int) 12)
0x3a4: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x3a5: IF (Stack[-1] == 0) GOTO 0x3c9; Pop(1)

0x3a6: PushEmpty(string, int)
0x3a7: Stack[-1] = Stack[-6]
0x3a8: Call2 0x48a

0x3a9: Pop(1)
0x3aa: Pop(1); Push((bool) Stack[-15] == Stack[-1])
0x3ab: IF (Stack[-1] == 0) GOTO 0x3c6; Pop(1)

0x3ac: PushEmpty(object)
0x3ad: Call2 0x5f

0x3ae: Stack[-4] = Stack[-1]
0x3af: Pop(1)
0x3b0: @@ GetItemCount(Stack[-2], Stack[-0])
0x3b1: Pop(0)
0x3b2: Pop(0); Push((bool) Stack[-2] > Stack[-4])
0x3b3: IF (Stack[-1] == 0) GOTO 0x3c4; Pop(1)

0x3b4: @@ GetItem(Stack[-1], Stack[-4], Stack[-0])
0x3b5: Pop(0)
0x3b6: PushEmpty(bool, object)
0x3b7: Stack[-1] = Stack[-3]
0x3b8: Call2 0x8f

0x3b9: Pop(1)
0x3ba: Pop(1); Push((bool) Stack[-1] == 0)
0x3bb: IF (Stack[-1] == 0) GOTO 0x3c3; Pop(1)

0x3bc: PushEmpty(bool, int, bool)
0x3bd: Stack[-2] = Stack[-7]
0x3be: Push((int) 0)
0x3bf: Stack[-2] = Stack[-19] == Stack[-1]; Pop(1);
0x3c0: Call2 0x9a

0x3c1: Stack[-9] = Stack[-3]
0x3c2: Pop(3)
0x3c3: Stack[-1] = 0
0x3c4: GOTO 0x3c9

0x3c5: Stack[-3] = 0
0x3c6: Push((int) 1)
0x3c7: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x3c8: GOTO 0x3a3

0x3c9: Pop(0); Push((bool) Stack[-6] == 0)
0x3ca: IF (Stack[-1] == 0) GOTO 0x3d2; Pop(1)

0x3cb: PushEmpty(bool, int, string, object)
0x3cc: Stack[-3] = Stack[-19]
0x3cd: Stack[-2] = Stack[-18]
0x3ce: Stack[-1] = Stack[-17]
0x3cf: Call2 0x61

0x3d0: Stack[-10] = Stack[-4]
0x3d1: Pop(4)
0x3d2: Push(Stack[-6])
0x3d3: IF (Stack[-1] == 0) GOTO 0x3d4; Pop(1)

0x3d4: Return(); Pop(12)

0x3d5: PushEmpty()
0x3d6: Push((int) -1)
0x3d7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3d8: IF (Stack[-1] == 0) GOTO 0x3da; Pop(1)

0x3d9: Return(); Pop(0)

0x3da: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == Stack[-1])
0x3db: IF (Stack[-1] == 0) GOTO 0x3dd; Pop(1)

0x3dc: Return(); Pop(0)

0x3dd: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x3de: PushEmpty(int)
0x3df: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3e0: Call2 0x3f5

0x3e1: Pop(1)
0x3e2: Return(); Pop(0)

0x3e3: PushEmpty(object, int, object, int)
0x3e4: PushEmpty(object)
0x3e5: Call2 0x5f

0x3e6: Stack[-3] = Stack[-1]
0x3e7: Pop(1)
0x3e8: Push("money")
0x3e9: @@ GetProperty(Stack[-1], Stack[-2])
0x3ea: Pop(1)
0x3eb: Stack[-5] = Stack[-1]
0x3ec: Return(); Pop(4)

0x3ed: Stack[-2] = 0
0x3ee: PushEmpty(int)
0x3ef: Call2 0x3e3

0x3f0: Pop(0)
0x3f1: Push("money")
0x3f2: @ SendMessage(Stack[-2], Stack[-1])
0x3f3: Pop(2)
0x3f4: Return(); Pop(0)

0x3f5: PushEmpty()
0x3f6: Push((int) 0)
0x3f7: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x3f8: IF (Stack[-1] == 0) GOTO 0x3fe; Pop(1)

0x3f9: Push((int) 0)
0x3fa: Push("button_weapon")
0x3fb: @ SendMessage(Stack[-2], Stack[-1])
0x3fc: Pop(2)
0x3fd: GOTO 0x402

0x3fe: Push((int) 1)
0x3ff: Push("button_weapon")
0x400: @ SendMessage(Stack[-2], Stack[-1])
0x401: Pop(2)
0x402: Push((int) 1)
0x403: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x404: IF (Stack[-1] == 0) GOTO 0x40a; Pop(1)

0x405: Push((int) 0)
0x406: Push("button_clothes")
0x407: @ SendMessage(Stack[-2], Stack[-1])
0x408: Pop(2)
0x409: GOTO 0x40e

0x40a: Push((int) 1)
0x40b: Push("button_clothes")
0x40c: @ SendMessage(Stack[-2], Stack[-1])
0x40d: Pop(2)
0x40e: Push((int) 2)
0x40f: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x410: IF (Stack[-1] == 0) GOTO 0x416; Pop(1)

0x411: Push((int) 0)
0x412: Push("button_medcine")
0x413: @ SendMessage(Stack[-2], Stack[-1])
0x414: Pop(2)
0x415: GOTO 0x41a

0x416: Push((int) 1)
0x417: Push("button_medcine")
0x418: @ SendMessage(Stack[-2], Stack[-1])
0x419: Pop(2)
0x41a: Push((int) 3)
0x41b: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x41c: IF (Stack[-1] == 0) GOTO 0x422; Pop(1)

0x41d: Push((int) 0)
0x41e: Push("button_food")
0x41f: @ SendMessage(Stack[-2], Stack[-1])
0x420: Pop(2)
0x421: GOTO 0x426

0x422: Push((int) 1)
0x423: Push("button_food")
0x424: @ SendMessage(Stack[-2], Stack[-1])
0x425: Pop(2)
0x426: Push((int) 4)
0x427: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x428: IF (Stack[-1] == 0) GOTO 0x42e; Pop(1)

0x429: Push((int) 0)
0x42a: Push("button_other")
0x42b: @ SendMessage(Stack[-2], Stack[-1])
0x42c: Pop(2)
0x42d: GOTO 0x432

0x42e: Push((int) 1)
0x42f: Push("button_other")
0x430: @ SendMessage(Stack[-2], Stack[-1])
0x431: Pop(2)
0x432: Return(); Pop(0)

0x433: PushEmpty(object, int, int, object, int, bool, bool, object, int, int, object, int, bool, bool)
0x434: PushEmpty(object)
0x435: Call2 0x5f

0x436: Stack[-8] = Stack[-1]
0x437: Pop(1)
0x438: @@ GetItemCount(Stack[-6], Stack[-15])
0x439: Pop(0)
0x43a: Stack[-5] = (int) 0
0x43b: Push((int) 12)
0x43c: Pop(1); Push((bool) Stack[-6] < Stack[-1])
0x43d: IF (Stack[-1] == 0) GOTO 0x488; Pop(1)

0x43e: Pop(0); Push((bool) Stack[-5] < Stack[-6])
0x43f: IF (Stack[-1] == 0) GOTO 0x47e; Pop(1)

0x440: @@ GetItem(Stack[-4], Stack[-5], Stack[-15])
0x441: Pop(0)
0x442: @@ GetItemAmount(Stack[-3], Stack[-5], Stack[-15])
0x443: Pop(0)
0x444: PushEmpty(bool, int, int)
0x445: Stack[-2] = Stack[-8]
0x446: Stack[-1] = Stack[-18]
0x447: Call2 0x96

0x448: Stack[-5] = Stack[-3]
0x449: Pop(3)
0x44a: PushEmpty(bool, object)
0x44b: Stack[-1] = Stack[-6]
0x44c: Call2 0x8f

0x44d: Stack[-3] = Stack[-2]
0x44e: Pop(2)
0x44f: Push(Stack[-2])
0x450: IF (Stack[-1] == 0) GOTO 0x463; Pop(1)

0x451: Push(Stack[-1])
0x452: IF (Stack[-1] == 0) GOTO 0x45b; Pop(1)

0x453: Push((int) 0)
0x454: PushEmpty(string, int)
0x455: Stack[-1] = Stack[-8]
0x456: Call2 0x48a

0x457: Pop(1)
0x458: @ SendMessage(Stack[-2], Stack[-1], Stack[-6])
0x459: Pop(2)
0x45a: GOTO 0x462

0x45b: Push((int) 16384)
0x45c: PushEmpty(string, int)
0x45d: Stack[-1] = Stack[-8]
0x45e: Call2 0x48a

0x45f: Pop(1)
0x460: @ SendMessage(Stack[-2], Stack[-1], Stack[-6])
0x461: Pop(2)
0x462: GOTO 0x474

0x463: Push(Stack[-1])
0x464: IF (Stack[-1] == 0) GOTO 0x46d; Pop(1)

0x465: Push((int) 131072)
0x466: PushEmpty(string, int)
0x467: Stack[-1] = Stack[-8]
0x468: Call2 0x48a

0x469: Pop(1)
0x46a: @ SendMessage(Stack[-2], Stack[-1], Stack[-6])
0x46b: Pop(2)
0x46c: GOTO 0x474

0x46d: Push((int) 0)
0x46e: PushEmpty(string, int)
0x46f: Stack[-1] = Stack[-8]
0x470: Call2 0x48a

0x471: Pop(1)
0x472: @ SendMessage(Stack[-2], Stack[-1], Stack[-6])
0x473: Pop(2)
0x474: Push((int) 65536)
0x475: Pop(1); Push(Stack[-4] | Stack[-1]);
0x476: PushEmpty(string, int)
0x477: Stack[-1] = Stack[-8]
0x478: Call2 0x48a

0x479: Pop(1)
0x47a: @ SendMessage(Stack[-2], Stack[-1])
0x47b: Pop(2)
0x47c: Stack[-4] = 0
0x47d: GOTO 0x485

0x47e: Push((int) 32768)
0x47f: PushEmpty(string, int)
0x480: Stack[-1] = Stack[-8]
0x481: Call2 0x48a

0x482: Pop(1)
0x483: @ SendMessage(Stack[-2], Stack[-1])
0x484: Pop(2)
0x485: Push((int) 1)
0x486: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x487: GOTO 0x43b

0x488: Return(); Pop(14)

0x489: Stack[-7] = 0
0x48a: PushEmpty()
0x48b: Push((int) 1)
0x48c: Pop(1); Push(Stack[-2] + Stack[-1]);
0x48d: Push((int) 10)
0x48e: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x48f: IF (Stack[-1] == 0) GOTO 0x495; Pop(1)

0x490: Push("slot0")
0x491: Push((int) 1)
0x492: Pop(1); Push(Stack[-3] + Stack[-1]);
0x493: Stack[-4] = Stack[-2] + Stack[-1]; Pop(2);
0x494: Return(); Pop(0)

0x495: Push("slot")
0x496: Push((int) 1)
0x497: Pop(1); Push(Stack[-3] + Stack[-1]);
0x498: Stack[-4] = Stack[-2] + Stack[-1]; Pop(2);
0x499: Return(); Pop(0)

0x49a: PushEmpty(int, int)
0x49b: @@ GetItemID(Stack[-1])
0x49c: Pop(0)
0x49d: Stack[-4] = Stack[-1]
0x49e: Return(); Pop(2)

