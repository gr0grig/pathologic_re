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
		EVENT_100 Op = 0x26c Vars = (int)
		EVENT_1 Op = 0x270 Vars = (float)
		EVENT_200 Op = 0x27c Vars = (int, string, object)


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
0x125: Call2 0x3b4

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
0x130: Call2 0x3b4

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
0x18f: Call2 0x2ef

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
0x1ad: Call2 0x2ef

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
0x24c: PushEmpty()
0x24d: Stack[0 + Tasks[-1].StackPointer] = (int)-1
0x24e: PushEmpty(int)
0x24f: Stack[-1] = Stack[-2]
0x250: Call2 0x2ef

0x251: Pop(1)
0x252: PushEmpty(int)
0x253: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x254: Call2 0x34d

0x255: Pop(1)
0x256: PushEmpty()
0x257: Call2 0x308

0x258: Pop(0)
0x259: Push("default")
0x25a: @ SetCursor(Stack[-1])
0x25b: Pop(1)
0x25c: @ ShowCursor()
0x25d: Pop(0)
0x25e: @ CaptureKeyboard()
0x25f: Pop(0)
0x260: Push((bool) 0)
0x261: @ SetOwnerDraw(Stack[-1])
0x262: Pop(1)
0x263: Push((bool) 1)
0x264: @ SetNeedUpdate(Stack[-1])
0x265: Pop(1)
0x266: PushEmpty()
0x267: Call2 0x99

0x268: Pop(0)
0x269: @ ProcessEvents()
0x26a: Pop(0)
0x26b: Return(); Pop(0)

0x26c: PushEmpty()
0x26d: @ DestroyWindow()
0x26e: Pop(0)
0x26f: Return(); Pop(0)

0x270: PushEmpty()
0x271: PushEmpty(int)
0x272: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x273: Call2 0x34d

0x274: Pop(1)
0x275: PushEmpty()
0x276: Call2 0x308

0x277: Pop(0)
0x278: PushEmpty()
0x279: Call2 0x88

0x27a: Pop(0)
0x27b: Return(); Pop(0)

0x27c: PushEmpty(bool, int, int, object, int, object, bool, int, int, object, int, object)
0x27d: Stack[-6] = (bool) 0
0x27e: Push("button_weapon")
0x27f: Pop(1); Push((bool) Stack[-15] == Stack[-1])
0x280: IF (Stack[-1] == 0) GOTO 0x287; Pop(1)

0x281: PushEmpty(int)
0x282: Stack[-1] = (int) 0
0x283: Call2 0x2ef

0x284: Pop(1)
0x285: Stack[-6] = (bool) 1
0x286: GOTO 0x2e3

0x287: Push("button_clothes")
0x288: Pop(1); Push((bool) Stack[-15] == Stack[-1])
0x289: IF (Stack[-1] == 0) GOTO 0x290; Pop(1)

0x28a: PushEmpty(int)
0x28b: Stack[-1] = (int) 1
0x28c: Call2 0x2ef

0x28d: Pop(1)
0x28e: Stack[-6] = (bool) 1
0x28f: GOTO 0x2e3

0x290: Push("button_medcine")
0x291: Pop(1); Push((bool) Stack[-15] == Stack[-1])
0x292: IF (Stack[-1] == 0) GOTO 0x299; Pop(1)

0x293: PushEmpty(int)
0x294: Stack[-1] = (int) 2
0x295: Call2 0x2ef

0x296: Pop(1)
0x297: Stack[-6] = (bool) 1
0x298: GOTO 0x2e3

0x299: Push("button_food")
0x29a: Pop(1); Push((bool) Stack[-15] == Stack[-1])
0x29b: IF (Stack[-1] == 0) GOTO 0x2a2; Pop(1)

0x29c: PushEmpty(int)
0x29d: Stack[-1] = (int) 3
0x29e: Call2 0x2ef

0x29f: Pop(1)
0x2a0: Stack[-6] = (bool) 1
0x2a1: GOTO 0x2e3

0x2a2: Push("button_other")
0x2a3: Pop(1); Push((bool) Stack[-15] == Stack[-1])
0x2a4: IF (Stack[-1] == 0) GOTO 0x2ab; Pop(1)

0x2a5: PushEmpty(int)
0x2a6: Stack[-1] = (int) 4
0x2a7: Call2 0x2ef

0x2a8: Pop(1)
0x2a9: Stack[-6] = (bool) 1
0x2aa: GOTO 0x2e3

0x2ab: Push("button_detector")
0x2ac: Pop(1); Push((bool) Stack[-15] == Stack[-1])
0x2ad: IF (Stack[-1] == 0) GOTO 0x2af; Pop(1)

0x2ae: GOTO 0x2e3

0x2af: Push("button_anticeptic")
0x2b0: Pop(1); Push((bool) Stack[-15] == Stack[-1])
0x2b1: IF (Stack[-1] == 0) GOTO 0x2b3; Pop(1)

0x2b2: GOTO 0x2e3

0x2b3: Push((int) 0)
0x2b4: Pop(1); Push((bool) Stack[-16] != Stack[-1])
0x2b5: IF (Stack[-1] == 0) GOTO 0x2bc; Pop(1)

0x2b6: Push("noinv_drop")
0x2b7: @ GetVariable(Stack[-1], Stack[-6])
0x2b8: Pop(1)
0x2b9: Push(Stack[-5])
0x2ba: IF (Stack[-1] == 0) GOTO 0x2bc; Pop(1)

0x2bb: Return(); Pop(12)

0x2bc: Stack[-4] = (int) 0
0x2bd: Push((int) 12)
0x2be: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x2bf: IF (Stack[-1] == 0) GOTO 0x2e3; Pop(1)

0x2c0: PushEmpty(string, int)
0x2c1: Stack[-1] = Stack[-6]
0x2c2: Call2 0x3a4

0x2c3: Pop(1)
0x2c4: Pop(1); Push((bool) Stack[-15] == Stack[-1])
0x2c5: IF (Stack[-1] == 0) GOTO 0x2e0; Pop(1)

0x2c6: PushEmpty(object)
0x2c7: Call2 0x5f

0x2c8: Stack[-4] = Stack[-1]
0x2c9: Pop(1)
0x2ca: @@ GetItemCount(Stack[-2], Stack[-0])
0x2cb: Pop(0)
0x2cc: Pop(0); Push((bool) Stack[-2] > Stack[-4])
0x2cd: IF (Stack[-1] == 0) GOTO 0x2de; Pop(1)

0x2ce: @@ GetItem(Stack[-1], Stack[-4], Stack[-0])
0x2cf: Pop(0)
0x2d0: PushEmpty(bool, object)
0x2d1: Stack[-1] = Stack[-3]
0x2d2: Call2 0x8f

0x2d3: Pop(1)
0x2d4: Pop(1); Push((bool) Stack[-1] == 0)
0x2d5: IF (Stack[-1] == 0) GOTO 0x2dd; Pop(1)

0x2d6: PushEmpty(bool, int, bool)
0x2d7: Stack[-2] = Stack[-7]
0x2d8: Push((int) 0)
0x2d9: Stack[-2] = Stack[-19] == Stack[-1]; Pop(1);
0x2da: Call2 0x9a

0x2db: Stack[-9] = Stack[-3]
0x2dc: Pop(3)
0x2dd: Stack[-1] = 0
0x2de: GOTO 0x2e3

0x2df: Stack[-3] = 0
0x2e0: Push((int) 1)
0x2e1: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x2e2: GOTO 0x2bd

0x2e3: Pop(0); Push((bool) Stack[-6] == 0)
0x2e4: IF (Stack[-1] == 0) GOTO 0x2ec; Pop(1)

0x2e5: PushEmpty(bool, int, string, object)
0x2e6: Stack[-3] = Stack[-19]
0x2e7: Stack[-2] = Stack[-18]
0x2e8: Stack[-1] = Stack[-17]
0x2e9: Call2 0x61

0x2ea: Stack[-10] = Stack[-4]
0x2eb: Pop(4)
0x2ec: Push(Stack[-6])
0x2ed: IF (Stack[-1] == 0) GOTO 0x2ee; Pop(1)

0x2ee: Return(); Pop(12)

0x2ef: PushEmpty()
0x2f0: Push((int) -1)
0x2f1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2f2: IF (Stack[-1] == 0) GOTO 0x2f4; Pop(1)

0x2f3: Return(); Pop(0)

0x2f4: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == Stack[-1])
0x2f5: IF (Stack[-1] == 0) GOTO 0x2f7; Pop(1)

0x2f6: Return(); Pop(0)

0x2f7: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x2f8: PushEmpty(int)
0x2f9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2fa: Call2 0x30f

0x2fb: Pop(1)
0x2fc: Return(); Pop(0)

0x2fd: PushEmpty(object, int, object, int)
0x2fe: PushEmpty(object)
0x2ff: Call2 0x5f

0x300: Stack[-3] = Stack[-1]
0x301: Pop(1)
0x302: Push("money")
0x303: @@ GetProperty(Stack[-1], Stack[-2])
0x304: Pop(1)
0x305: Stack[-5] = Stack[-1]
0x306: Return(); Pop(4)

0x307: Stack[-2] = 0
0x308: PushEmpty(int)
0x309: Call2 0x2fd

0x30a: Pop(0)
0x30b: Push("money")
0x30c: @ SendMessage(Stack[-2], Stack[-1])
0x30d: Pop(2)
0x30e: Return(); Pop(0)

0x30f: PushEmpty()
0x310: Push((int) 0)
0x311: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x312: IF (Stack[-1] == 0) GOTO 0x318; Pop(1)

0x313: Push((int) 0)
0x314: Push("button_weapon")
0x315: @ SendMessage(Stack[-2], Stack[-1])
0x316: Pop(2)
0x317: GOTO 0x31c

0x318: Push((int) 1)
0x319: Push("button_weapon")
0x31a: @ SendMessage(Stack[-2], Stack[-1])
0x31b: Pop(2)
0x31c: Push((int) 1)
0x31d: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x31e: IF (Stack[-1] == 0) GOTO 0x324; Pop(1)

0x31f: Push((int) 0)
0x320: Push("button_clothes")
0x321: @ SendMessage(Stack[-2], Stack[-1])
0x322: Pop(2)
0x323: GOTO 0x328

0x324: Push((int) 1)
0x325: Push("button_clothes")
0x326: @ SendMessage(Stack[-2], Stack[-1])
0x327: Pop(2)
0x328: Push((int) 2)
0x329: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x32a: IF (Stack[-1] == 0) GOTO 0x330; Pop(1)

0x32b: Push((int) 0)
0x32c: Push("button_medcine")
0x32d: @ SendMessage(Stack[-2], Stack[-1])
0x32e: Pop(2)
0x32f: GOTO 0x334

0x330: Push((int) 1)
0x331: Push("button_medcine")
0x332: @ SendMessage(Stack[-2], Stack[-1])
0x333: Pop(2)
0x334: Push((int) 3)
0x335: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x336: IF (Stack[-1] == 0) GOTO 0x33c; Pop(1)

0x337: Push((int) 0)
0x338: Push("button_food")
0x339: @ SendMessage(Stack[-2], Stack[-1])
0x33a: Pop(2)
0x33b: GOTO 0x340

0x33c: Push((int) 1)
0x33d: Push("button_food")
0x33e: @ SendMessage(Stack[-2], Stack[-1])
0x33f: Pop(2)
0x340: Push((int) 4)
0x341: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x342: IF (Stack[-1] == 0) GOTO 0x348; Pop(1)

0x343: Push((int) 0)
0x344: Push("button_other")
0x345: @ SendMessage(Stack[-2], Stack[-1])
0x346: Pop(2)
0x347: GOTO 0x34c

0x348: Push((int) 1)
0x349: Push("button_other")
0x34a: @ SendMessage(Stack[-2], Stack[-1])
0x34b: Pop(2)
0x34c: Return(); Pop(0)

0x34d: PushEmpty(object, int, int, object, int, bool, bool, object, int, int, object, int, bool, bool)
0x34e: PushEmpty(object)
0x34f: Call2 0x5f

0x350: Stack[-8] = Stack[-1]
0x351: Pop(1)
0x352: @@ GetItemCount(Stack[-6], Stack[-15])
0x353: Pop(0)
0x354: Stack[-5] = (int) 0
0x355: Push((int) 12)
0x356: Pop(1); Push((bool) Stack[-6] < Stack[-1])
0x357: IF (Stack[-1] == 0) GOTO 0x3a2; Pop(1)

0x358: Pop(0); Push((bool) Stack[-5] < Stack[-6])
0x359: IF (Stack[-1] == 0) GOTO 0x398; Pop(1)

0x35a: @@ GetItem(Stack[-4], Stack[-5], Stack[-15])
0x35b: Pop(0)
0x35c: @@ GetItemAmount(Stack[-3], Stack[-5], Stack[-15])
0x35d: Pop(0)
0x35e: PushEmpty(bool, int, int)
0x35f: Stack[-2] = Stack[-8]
0x360: Stack[-1] = Stack[-18]
0x361: Call2 0x96

0x362: Stack[-5] = Stack[-3]
0x363: Pop(3)
0x364: PushEmpty(bool, object)
0x365: Stack[-1] = Stack[-6]
0x366: Call2 0x8f

0x367: Stack[-3] = Stack[-2]
0x368: Pop(2)
0x369: Push(Stack[-2])
0x36a: IF (Stack[-1] == 0) GOTO 0x37d; Pop(1)

0x36b: Push(Stack[-1])
0x36c: IF (Stack[-1] == 0) GOTO 0x375; Pop(1)

0x36d: Push((int) 0)
0x36e: PushEmpty(string, int)
0x36f: Stack[-1] = Stack[-8]
0x370: Call2 0x3a4

0x371: Pop(1)
0x372: @ SendMessage(Stack[-2], Stack[-1], Stack[-6])
0x373: Pop(2)
0x374: GOTO 0x37c

0x375: Push((int) 16384)
0x376: PushEmpty(string, int)
0x377: Stack[-1] = Stack[-8]
0x378: Call2 0x3a4

0x379: Pop(1)
0x37a: @ SendMessage(Stack[-2], Stack[-1], Stack[-6])
0x37b: Pop(2)
0x37c: GOTO 0x38e

0x37d: Push(Stack[-1])
0x37e: IF (Stack[-1] == 0) GOTO 0x387; Pop(1)

0x37f: Push((int) 131072)
0x380: PushEmpty(string, int)
0x381: Stack[-1] = Stack[-8]
0x382: Call2 0x3a4

0x383: Pop(1)
0x384: @ SendMessage(Stack[-2], Stack[-1], Stack[-6])
0x385: Pop(2)
0x386: GOTO 0x38e

0x387: Push((int) 0)
0x388: PushEmpty(string, int)
0x389: Stack[-1] = Stack[-8]
0x38a: Call2 0x3a4

0x38b: Pop(1)
0x38c: @ SendMessage(Stack[-2], Stack[-1], Stack[-6])
0x38d: Pop(2)
0x38e: Push((int) 65536)
0x38f: Pop(1); Push(Stack[-4] | Stack[-1]);
0x390: PushEmpty(string, int)
0x391: Stack[-1] = Stack[-8]
0x392: Call2 0x3a4

0x393: Pop(1)
0x394: @ SendMessage(Stack[-2], Stack[-1])
0x395: Pop(2)
0x396: Stack[-4] = 0
0x397: GOTO 0x39f

0x398: Push((int) 32768)
0x399: PushEmpty(string, int)
0x39a: Stack[-1] = Stack[-8]
0x39b: Call2 0x3a4

0x39c: Pop(1)
0x39d: @ SendMessage(Stack[-2], Stack[-1])
0x39e: Pop(2)
0x39f: Push((int) 1)
0x3a0: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x3a1: GOTO 0x355

0x3a2: Return(); Pop(14)

0x3a3: Stack[-7] = 0
0x3a4: PushEmpty()
0x3a5: Push((int) 1)
0x3a6: Pop(1); Push(Stack[-2] + Stack[-1]);
0x3a7: Push((int) 10)
0x3a8: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x3a9: IF (Stack[-1] == 0) GOTO 0x3af; Pop(1)

0x3aa: Push("slot0")
0x3ab: Push((int) 1)
0x3ac: Pop(1); Push(Stack[-3] + Stack[-1]);
0x3ad: Stack[-4] = Stack[-2] + Stack[-1]; Pop(2);
0x3ae: Return(); Pop(0)

0x3af: Push("slot")
0x3b0: Push((int) 1)
0x3b1: Pop(1); Push(Stack[-3] + Stack[-1]);
0x3b2: Stack[-4] = Stack[-2] + Stack[-1]; Pop(2);
0x3b3: Return(); Pop(0)

0x3b4: PushEmpty(int, int)
0x3b5: @@ GetItemID(Stack[-1])
0x3b6: Pop(0)
0x3b7: Stack[-4] = Stack[-1]
0x3b8: Return(); Pop(2)

