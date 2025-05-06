GlobalVarCount = 0

Strings:
	player
	null apparatus
	inventory_base.xml
	combine
	input_organ
	input_grass
	output
	GetItem
	AddItem
	RemoveItem
	grass_combination
	Microscope
	GetItemCount
	RemoveAllItems
	burah_serum
	SetItemName
	im_inc
	GetProperty
	hl_inc
	organ_combination
	DiseaseRate
	SetProperty
	HealthIncrease
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
	GetItemAmount
	slot0
	slot
	GetItemID

Import:
	FindActor (2 args)
	DestroyWindow (0 args)
	GetWindowData (1 args)
	Trace (1 args)
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
	GetInvItemName (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (int, object, object, object, object) Params = 0
		EVENT_100 Op = 0x2ad Vars = (int)
		EVENT_1 Op = 0x2b1 Vars = (float)
		EVENT_200 Op = 0x2bd Vars = (int, string, object)


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

0x12: Push("inventory_base.xml")
0x13: Push((bool) 0)
0x14: @ CreateWindow(Stack[-2], Stack[-1], Stack[-1])
0x15: Pop(2)
0x16: PushEmpty(int)
0x17: Stack[-1] = (int) 4
0x18: Call2 0x28d

0x19: Pop(1)
0x1a: Return(); Pop(0)

0x1b: Stack[-1] = Stack[3 + Tasks[-1].StackPointer]
0x1c: Return(); Pop(0)

0x1d: PushEmpty()
0x1e: Push("combine")
0x1f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x20: IF (Stack[-1] == 0) GOTO 0x27; Pop(1)

0x21: PushEmpty(bool)
0x22: Call2 0x1fa

0x23: Pop(1)
0x24: Stack[-4] = (bool) 1
0x25: Return(); Pop(0)

0x26: GOTO 0x3b

0x27: Push("input_organ")
0x28: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x29: IF (Stack[-1] == 0) GOTO 0x2e; Pop(1)

0x2a: PushEmpty(bool)
0x2b: Call2 0x169

0x2c: Pop(1)
0x2d: GOTO 0x3b

0x2e: Push("input_grass")
0x2f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x30: IF (Stack[-1] == 0) GOTO 0x35; Pop(1)

0x31: PushEmpty(bool)
0x32: Call2 0x187

0x33: Pop(1)
0x34: GOTO 0x3b

0x35: Push("output")
0x36: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x37: IF (Stack[-1] == 0) GOTO 0x3b; Pop(1)

0x38: PushEmpty(bool)
0x39: Call2 0x1a5

0x3a: Pop(1)
0x3b: Stack[-4] = (bool) 0
0x3c: Return(); Pop(0)

0x3d: PushEmpty()
0x3e: Call2 0x1c4

0x3f: Pop(0)
0x40: PushEmpty()
0x41: Call2 0x1d6

0x42: Pop(0)
0x43: PushEmpty()
0x44: Call2 0x1e8

0x45: Pop(0)
0x46: Return(); Pop(0)

0x47: PushEmpty()
0x48: PushEmpty(bool, object)
0x49: Stack[-1] = Stack[-3]
0x4a: Call2 0xb0

0x4b: Pop(1)
0x4c: IF (Stack[-1] == 0) GOTO 0x4f; Pop(1)

0x4d: Stack[-2] = (bool) 0
0x4e: Return(); Pop(0)

0x4f: PushEmpty(bool, object)
0x50: Stack[-1] = Stack[-3]
0x51: Call2 0xb8

0x52: Pop(1)
0x53: Stack[-3] = !Stack[-1]; Pop(1);
0x54: Return(); Pop(0)

0x55: PushEmpty()
0x56: Stack[-3] = (bool) 0
0x57: Return(); Pop(0)

0x58: Return(); Pop(0)

0x59: PushEmpty()
0x5a: Push(Stack[-1])
0x5b: IF (Stack[-1] == 0) GOTO 0x62; Pop(1)

0x5c: PushEmpty(bool, int)
0x5d: Stack[-1] = Stack[-4]
0x5e: Call2 0x64

0x5f: Stack[-5] = Stack[-2]
0x60: Pop(2)
0x61: Return(); Pop(0)

0x62: Stack[-3] = (bool) 0
0x63: Return(); Pop(0)

0x64: PushEmpty(object, object)
0x65: @@ GetItem(Stack[-1], Stack[-3], Stack[-0])
0x66: Pop(0)
0x67: PushEmpty(bool, object)
0x68: Stack[-1] = Stack[-3]
0x69: Call2 0xb0

0x6a: Pop(1)
0x6b: IF (Stack[-1] == 0) GOTO 0x73; Pop(1)

0x6c: PushEmpty(bool, object, int)
0x6d: Stack[-2] = Stack[-4]
0x6e: Stack[-1] = Stack[-6]
0x6f: Call2 0x82

0x70: Stack[-7] = Stack[-3]
0x71: Pop(3)
0x72: Return(); Pop(2)

0x73: PushEmpty(bool, object)
0x74: Stack[-1] = Stack[-3]
0x75: Call2 0xb8

0x76: Pop(1)
0x77: IF (Stack[-1] == 0) GOTO 0x7f; Pop(1)

0x78: PushEmpty(bool, object, int)
0x79: Stack[-2] = Stack[-4]
0x7a: Stack[-1] = Stack[-6]
0x7b: Call2 0x99

0x7c: Stack[-7] = Stack[-3]
0x7d: Pop(3)
0x7e: Return(); Pop(2)

0x7f: Stack[-4] = (bool) 0
0x80: Return(); Pop(2)

0x81: Stack[-1] = 0
0x82: PushEmpty(object, bool, object, bool)
0x83: PushEmpty(object)
0x84: Call2 0xd5

0x85: Stack[-3] = Stack[-1]
0x86: Pop(1)
0x87: Push(Stack[-2])
0x88: IF (Stack[-1] == 0) GOTO 0x8b; Pop(1)

0x89: Stack[-7] = (bool) 0
0x8a: Return(); Pop(4)

0x8b: Push((int) 0)
0x8c: Push((int) 1)
0x8d: @@ AddItem(Stack[-3], Stack[-8], Stack[-2], Stack[-1])
0x8e: Pop(2)
0x8f: Pop(0); Push((bool) Stack[-1] == 0)
0x90: IF (Stack[-1] == 0) GOTO 0x93; Pop(1)

0x91: Stack[-7] = (bool) 0
0x92: Return(); Pop(4)

0x93: Push((int) 1)
0x94: @@ RemoveItem(Stack[-6], Stack[-1], Stack[-0])
0x95: Pop(1)
0x96: Stack[-7] = (bool) 1
0x97: Return(); Pop(4)

0x98: Stack[-2] = 0
0x99: PushEmpty(object, bool, object, bool)
0x9a: PushEmpty(object)
0x9b: Call2 0xed

0x9c: Stack[-3] = Stack[-1]
0x9d: Pop(1)
0x9e: Push(Stack[-2])
0x9f: IF (Stack[-1] == 0) GOTO 0xa2; Pop(1)

0xa0: Stack[-7] = (bool) 0
0xa1: Return(); Pop(4)

0xa2: Push((int) 0)
0xa3: Push((int) 1)
0xa4: @@ AddItem(Stack[-3], Stack[-8], Stack[-2], Stack[-1])
0xa5: Pop(2)
0xa6: Pop(0); Push((bool) Stack[-1] == 0)
0xa7: IF (Stack[-1] == 0) GOTO 0xaa; Pop(1)

0xa8: Stack[-7] = (bool) 0
0xa9: Return(); Pop(4)

0xaa: Push((int) 1)
0xab: @@ RemoveItem(Stack[-6], Stack[-1], Stack[-0])
0xac: Pop(1)
0xad: Stack[-7] = (bool) 1
0xae: Return(); Pop(4)

0xaf: Stack[-2] = 0
0xb0: PushEmpty()
0xb1: Push("grass_combination")
0xb2: PushEmpty(string, object)
0xb3: Stack[-1] = Stack[-4]
0xb4: Call2 0x3fa

0xb5: Pop(1)
0xb6: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0xb7: Return(); Pop(0)

0xb8: PushEmpty(int, bool, int, bool)
0xb9: PushEmpty(int, object)
0xba: Stack[-1] = Stack[-7]
0xbb: Call2 0x3f5

0xbc: Stack[-4] = Stack[-2]
0xbd: Pop(2)
0xbe: Push("Microscope")
0xbf: @ HasInvItemProperty(Stack[-2], Stack[-3], Stack[-1])
0xc0: Pop(1)
0xc1: Stack[-6] = Stack[-1]
0xc2: Return(); Pop(4)

0xc3: PushEmpty(int, bool, int, int, bool, int)
0xc4: PushEmpty(int, object)
0xc5: Stack[-1] = Stack[-9]
0xc6: Call2 0x3f5

0xc7: Stack[-5] = Stack[-2]
0xc8: Pop(2)
0xc9: Push("Microscope")
0xca: @ HasInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0xcb: Pop(1)
0xcc: Pop(0); Push((bool) Stack[-2] == 0)
0xcd: IF (Stack[-1] == 0) GOTO 0xd0; Pop(1)

0xce: Stack[-8] = (bool) 0
0xcf: Return(); Pop(6)

0xd0: Push("Microscope")
0xd1: @ GetInvItemProperty(Stack[-2], Stack[-4], Stack[-1])
0xd2: Pop(1)
0xd3: Stack[-8] = Stack[-1]
0xd4: Return(); Pop(6)

0xd5: PushEmpty(int, int, int, object, object, int, int, int, object, object)
0xd6: @@ GetItemCount(Stack[-5])
0xd7: Pop(0)
0xd8: Stack[-4] = (int) 0
0xd9: Stack[-3] = (int) 0
0xda: Pop(0); Push((bool) Stack[-3] < Stack[-5])
0xdb: IF (Stack[-1] == 0) GOTO 0xe9; Pop(1)

0xdc: @@ GetItem(Stack[-2], Stack[-3])
0xdd: Pop(0)
0xde: PushEmpty(bool, object)
0xdf: Stack[-1] = Stack[-4]
0xe0: Call2 0xb0

0xe1: Pop(1)
0xe2: IF (Stack[-1] == 0) GOTO 0xe5; Pop(1)

0xe3: Stack[-11] = Stack[-2]
0xe4: Return(); Pop(10)

0xe5: Stack[-2] = 0
0xe6: Push((int) 1)
0xe7: Stack[-4] = Stack[-4] + Stack[-1]; Pop(1);
0xe8: GOTO 0xda

0xe9: Stack[-1] = 0
0xea: Stack[-11] = Stack[-1]
0xeb: Return(); Pop(10)

0xec: Stack[-1] = 0
0xed: PushEmpty(int, int, int, object, object, int, int, int, object, object)
0xee: @@ GetItemCount(Stack[-5])
0xef: Pop(0)
0xf0: Stack[-4] = (int) 0
0xf1: Stack[-3] = (int) 0
0xf2: Pop(0); Push((bool) Stack[-3] < Stack[-5])
0xf3: IF (Stack[-1] == 0) GOTO 0x101; Pop(1)

0xf4: @@ GetItem(Stack[-2], Stack[-3])
0xf5: Pop(0)
0xf6: PushEmpty(bool, object)
0xf7: Stack[-1] = Stack[-4]
0xf8: Call2 0xb8

0xf9: Pop(1)
0xfa: IF (Stack[-1] == 0) GOTO 0xfd; Pop(1)

0xfb: Stack[-11] = Stack[-2]
0xfc: Return(); Pop(10)

0xfd: Stack[-2] = 0
0xfe: Push((int) 1)
0xff: Stack[-4] = Stack[-4] + Stack[-1]; Pop(1);
0x100: GOTO 0xf2

0x101: Stack[-1] = 0
0x102: Stack[-11] = Stack[-1]
0x103: Return(); Pop(10)

0x104: Stack[-1] = 0
0x105: PushEmpty(int, int, int, object, object, int, int, int, object, object)
0x106: @@ GetItemCount(Stack[-5])
0x107: Pop(0)
0x108: Stack[-4] = (int) 0
0x109: Stack[-3] = (int) 0
0x10a: Pop(0); Push((bool) Stack[-3] < Stack[-5])
0x10b: IF (Stack[-1] == 0) GOTO 0x124; Pop(1)

0x10c: @@ GetItem(Stack[-2], Stack[-3])
0x10d: Pop(0)
0x10e: PushEmpty(bool)
0x10f: Stack[-1] = (bool) 0
0x110: PushEmpty(bool, object)
0x111: Stack[-1] = Stack[-5]
0x112: Call2 0xb0

0x113: Pop(1)
0x114: Pop(1); Push((bool) Stack[-1] == 0)
0x115: IF (Stack[-1] == 0) GOTO 0x11d; Pop(1)

0x116: PushEmpty(bool, object)
0x117: Stack[-1] = Stack[-5]
0x118: Call2 0xb8

0x119: Pop(1)
0x11a: Pop(1); Push((bool) Stack[-1] == 0)
0x11b: IF (Stack[-1] == 0) GOTO 0x11d; Pop(1)

0x11c: Stack[-1] = (bool) 1
0x11d: IF (Stack[-1] == 0) GOTO 0x120; Pop(1)

0x11e: Stack[-11] = Stack[-2]
0x11f: Return(); Pop(10)

0x120: Stack[-2] = 0
0x121: Push((int) 1)
0x122: Stack[-4] = Stack[-4] + Stack[-1]; Pop(1);
0x123: GOTO 0x10a

0x124: Stack[-1] = 0
0x125: Stack[-11] = Stack[-1]
0x126: Return(); Pop(10)

0x127: Stack[-1] = 0
0x128: PushEmpty(int, int, object, int, int, object)
0x129: @@ GetItemCount(Stack[-3])
0x12a: Pop(0)
0x12b: Stack[-2] = (int) 0
0x12c: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0x12d: IF (Stack[-1] == 0) GOTO 0x13b; Pop(1)

0x12e: @@ GetItem(Stack[-1], Stack[-2])
0x12f: Pop(0)
0x130: PushEmpty(bool, object)
0x131: Stack[-1] = Stack[-3]
0x132: Call2 0xb0

0x133: Pop(1)
0x134: IF (Stack[-1] == 0) GOTO 0x137; Pop(1)

0x135: Stack[-7] = Stack[-2]
0x136: Return(); Pop(6)

0x137: Stack[-1] = 0
0x138: Push((int) 1)
0x139: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x13a: GOTO 0x12c

0x13b: Stack[-7] = (int) -1
0x13c: Return(); Pop(6)

0x13d: PushEmpty(int, int, object, int, int, object)
0x13e: @@ GetItemCount(Stack[-3])
0x13f: Pop(0)
0x140: Stack[-2] = (int) 0
0x141: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0x142: IF (Stack[-1] == 0) GOTO 0x150; Pop(1)

0x143: @@ GetItem(Stack[-1], Stack[-2])
0x144: Pop(0)
0x145: PushEmpty(bool, object)
0x146: Stack[-1] = Stack[-3]
0x147: Call2 0xb8

0x148: Pop(1)
0x149: IF (Stack[-1] == 0) GOTO 0x14c; Pop(1)

0x14a: Stack[-7] = Stack[-2]
0x14b: Return(); Pop(6)

0x14c: Stack[-1] = 0
0x14d: Push((int) 1)
0x14e: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x14f: GOTO 0x141

0x150: Stack[-7] = (int) -1
0x151: Return(); Pop(6)

0x152: PushEmpty(int, int, int, object, int, int, int, object)
0x153: @@ GetItemCount(Stack[-4])
0x154: Pop(0)
0x155: Stack[-3] = (int) 0
0x156: Stack[-2] = (int) 0
0x157: Pop(0); Push((bool) Stack[-2] < Stack[-4])
0x158: IF (Stack[-1] == 0) GOTO 0x167; Pop(1)

0x159: @@ GetItem(Stack[-1], Stack[-2])
0x15a: Pop(0)
0x15b: PushEmpty(bool, object)
0x15c: Stack[-1] = Stack[-3]
0x15d: Call2 0xb0

0x15e: Pop(1)
0x15f: Pop(1); Push((bool) Stack[-1] == 0)
0x160: IF (Stack[-1] == 0) GOTO 0x163; Pop(1)

0x161: Stack[-9] = Stack[-2]
0x162: Return(); Pop(8)

0x163: Stack[-1] = 0
0x164: Push((int) 1)
0x165: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x166: GOTO 0x157

0x167: Stack[-9] = (int) -1
0x168: Return(); Pop(8)

0x169: PushEmpty(int, bool, int, bool)
0x16a: PushEmpty(int)
0x16b: Call2 0x13d

0x16c: Stack[-3] = Stack[-1]
0x16d: Pop(1)
0x16e: Push((int) -1)
0x16f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x170: IF (Stack[-1] == 0) GOTO 0x173; Pop(1)

0x171: Stack[-5] = (bool) 0
0x172: Return(); Pop(4)

0x173: PushEmpty(object)
0x174: Call2 0xed

0x175: Pop(0)
0x176: Push((int) 4)
0x177: Push((int) 1)
0x178: @@ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x179: Pop(3)
0x17a: Pop(0); Push((bool) Stack[-1] == 0)
0x17b: IF (Stack[-1] == 0) GOTO 0x17e; Pop(1)

0x17c: Stack[-5] = (bool) 0
0x17d: Return(); Pop(4)

0x17e: Push((int) 1)
0x17f: @@ RemoveItem(Stack[-3], Stack[-1])
0x180: Pop(1)
0x181: PushEmpty(int)
0x182: Stack[-1] = (int) 4
0x183: Call2 0x330

0x184: Pop(1)
0x185: Stack[-5] = (bool) 1
0x186: Return(); Pop(4)

0x187: PushEmpty(int, bool, int, bool)
0x188: PushEmpty(int)
0x189: Call2 0x128

0x18a: Stack[-3] = Stack[-1]
0x18b: Pop(1)
0x18c: Push((int) -1)
0x18d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x18e: IF (Stack[-1] == 0) GOTO 0x191; Pop(1)

0x18f: Stack[-5] = (bool) 0
0x190: Return(); Pop(4)

0x191: PushEmpty(object)
0x192: Call2 0xd5

0x193: Pop(0)
0x194: Push((int) 2)
0x195: Push((int) 1)
0x196: @@ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x197: Pop(3)
0x198: Pop(0); Push((bool) Stack[-1] == 0)
0x199: IF (Stack[-1] == 0) GOTO 0x19c; Pop(1)

0x19a: Stack[-5] = (bool) 0
0x19b: Return(); Pop(4)

0x19c: Push((int) 1)
0x19d: @@ RemoveItem(Stack[-3], Stack[-1])
0x19e: Pop(1)
0x19f: PushEmpty(int)
0x1a0: Stack[-1] = (int) 2
0x1a1: Call2 0x330

0x1a2: Pop(1)
0x1a3: Stack[-5] = (bool) 1
0x1a4: Return(); Pop(4)

0x1a5: PushEmpty(object, int, bool, object, int, bool)
0x1a6: PushEmpty(object)
0x1a7: Call2 0x105

0x1a8: Stack[-4] = Stack[-1]
0x1a9: Pop(1)
0x1aa: Pop(0); Push((bool) Stack[-3] == 0)
0x1ab: IF (Stack[-1] == 0) GOTO 0x1ae; Pop(1)

0x1ac: Stack[-7] = (bool) 0
0x1ad: Return(); Pop(6)

0x1ae: PushEmpty(int)
0x1af: Call2 0x152

0x1b0: Stack[-3] = Stack[-1]
0x1b1: Pop(1)
0x1b2: Push((int) 2)
0x1b3: Push((int) 1)
0x1b4: @@ AddItem(Stack[-3], Stack[-5], Stack[-2], Stack[-1])
0x1b5: Pop(2)
0x1b6: Pop(0); Push((bool) Stack[-1] == 0)
0x1b7: IF (Stack[-1] == 0) GOTO 0x1ba; Pop(1)

0x1b8: Stack[-7] = (bool) 0
0x1b9: Return(); Pop(6)

0x1ba: Push((int) 1)
0x1bb: @@ RemoveItem(Stack[-3], Stack[-1])
0x1bc: Pop(1)
0x1bd: PushEmpty(int)
0x1be: Stack[-1] = (int) 2
0x1bf: Call2 0x330

0x1c0: Pop(1)
0x1c1: Stack[-7] = (bool) 1
0x1c2: Return(); Pop(6)

0x1c3: Stack[-3] = 0
0x1c4: PushEmpty(object, object)
0x1c5: PushEmpty(object)
0x1c6: Call2 0xd5

0x1c7: Stack[-2] = Stack[-1]
0x1c8: Pop(1)
0x1c9: Push(Stack[-1])
0x1ca: IF (Stack[-1] == 0) GOTO 0x1d0; Pop(1)

0x1cb: Push((int) 0)
0x1cc: Push("input_grass")
0x1cd: @ SendMessage(Stack[-2], Stack[-1], Stack[-3])
0x1ce: Pop(2)
0x1cf: GOTO 0x1d4

0x1d0: Push((int) 32768)
0x1d1: Push("input_grass")
0x1d2: @ SendMessage(Stack[-2], Stack[-1])
0x1d3: Pop(2)
0x1d4: Return(); Pop(2)

0x1d5: Stack[-1] = 0
0x1d6: PushEmpty(object, object)
0x1d7: PushEmpty(object)
0x1d8: Call2 0xed

0x1d9: Stack[-2] = Stack[-1]
0x1da: Pop(1)
0x1db: Push(Stack[-1])
0x1dc: IF (Stack[-1] == 0) GOTO 0x1e2; Pop(1)

0x1dd: Push((int) 0)
0x1de: Push("input_organ")
0x1df: @ SendMessage(Stack[-2], Stack[-1], Stack[-3])
0x1e0: Pop(2)
0x1e1: GOTO 0x1e6

0x1e2: Push((int) 32768)
0x1e3: Push("input_organ")
0x1e4: @ SendMessage(Stack[-2], Stack[-1])
0x1e5: Pop(2)
0x1e6: Return(); Pop(2)

0x1e7: Stack[-1] = 0
0x1e8: PushEmpty(object, object)
0x1e9: PushEmpty(object)
0x1ea: Call2 0x105

0x1eb: Stack[-2] = Stack[-1]
0x1ec: Pop(1)
0x1ed: Push(Stack[-1])
0x1ee: IF (Stack[-1] == 0) GOTO 0x1f4; Pop(1)

0x1ef: Push((int) 0)
0x1f0: Push("output")
0x1f1: @ SendMessage(Stack[-2], Stack[-1], Stack[-3])
0x1f2: Pop(2)
0x1f3: GOTO 0x1f8

0x1f4: Push((int) 32768)
0x1f5: Push("output")
0x1f6: @ SendMessage(Stack[-2], Stack[-1])
0x1f7: Pop(2)
0x1f8: Return(); Pop(2)

0x1f9: Stack[-1] = 0
0x1fa: PushEmpty(object, object, object, bool, float, float, float, float, float, float, float, float, float, float, float, object, bool, object, object, object, bool, float, float, float, float, float, float, float, float, float, float, float, object, bool)
0x1fb: PushEmpty(object)
0x1fc: Call2 0x105

0x1fd: Pop(0)
0x1fe: IF (Stack[-1] == 0) GOTO 0x201; Pop(1)

0x1ff: Stack[-35] = (bool) 0
0x200: Return(); Pop(34)

0x201: PushEmpty(object)
0x202: Call2 0xd5

0x203: Stack[-18] = Stack[-1]
0x204: Pop(1)
0x205: PushEmpty(object)
0x206: Call2 0xed

0x207: Stack[-17] = Stack[-1]
0x208: Pop(1)
0x209: PushEmpty(bool)
0x20a: Stack[-1] = (bool) 1
0x20b: Pop(0); Push((bool) Stack[-18] == 0)
0x20c: IF (Stack[-1] == 0) GOTO 0x210; Pop(1)

0x20d: Pop(0); Push((bool) Stack[-17] == 0)
0x20e: IF (Stack[-1] == 0) GOTO 0x210; Pop(1)

0x20f: Stack[-1] = (bool) 0
0x210: IF (Stack[-1] == 0) GOTO 0x213; Pop(1)

0x211: Stack[-35] = (bool) 0
0x212: Return(); Pop(34)

0x213: PushEmpty(int, object)
0x214: Stack[-1] = Stack[-18]
0x215: Call2 0xc3

0x216: Pop(1)
0x217: Push((int) 5)
0x218: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x219: IF (Stack[-1] == 0) GOTO 0x228; Pop(1)

0x21a: @@ RemoveAllItems()
0x21b: Pop(0)
0x21c: @ CreateInvItem(Stack[-15])
0x21d: Pop(0)
0x21e: Push("burah_serum")
0x21f: @@ SetItemName(Stack[-1])
0x220: Pop(1)
0x221: Push((int) 0)
0x222: Push((int) 1)
0x223: @@ AddItem(Stack[-16], Stack[-17], Stack[-2], Stack[-1])
0x224: Pop(2)
0x225: Stack[-35] = (bool) 1
0x226: Return(); Pop(34)

0x227: Stack[-15] = 0
0x228: Push("im_inc")
0x229: @@ GetProperty(Stack[-14], Stack[-1])
0x22a: Pop(1)
0x22b: Push("hl_inc")
0x22c: @@ GetProperty(Stack[-13], Stack[-1])
0x22d: Pop(1)
0x22e: PushEmpty(int, object)
0x22f: Stack[-1] = Stack[-18]
0x230: Call2 0xc3

0x231: Pop(1)
0x232: Push((int) 1)
0x233: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x234: IF (Stack[-1] == 0) GOTO 0x237; Pop(1)

0x235: Stack[-11] = (int) 1
0x236: Stack[-9] = Stack[-12]
0x237: PushEmpty(int, object)
0x238: Stack[-1] = Stack[-18]
0x239: Call2 0xc3

0x23a: Pop(1)
0x23b: Push((int) 2)
0x23c: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x23d: IF (Stack[-1] == 0) GOTO 0x244; Pop(1)

0x23e: Push((float)1.0)
0x23f: Push((float)1.0)
0x240: Pop(1); Push(Stack[-1] - Stack[-15]);
0x241: Stack[-8] = Stack[-2] * Stack[-1]; Pop(2);
0x242: Stack[-11] = Stack[-6]
0x243: Stack[-9] = Stack[-12]
0x244: PushEmpty(int, object)
0x245: Stack[-1] = Stack[-18]
0x246: Call2 0xc3

0x247: Pop(1)
0x248: Push((int) 3)
0x249: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x24a: IF (Stack[-1] == 0) GOTO 0x251; Pop(1)

0x24b: Push((float)0.8)
0x24c: Push((float)1.0)
0x24d: Pop(1); Push(Stack[-1] - Stack[-15]);
0x24e: Stack[-7] = Stack[-2] * Stack[-1]; Pop(2);
0x24f: Stack[-11] = Stack[-5]
0x250: Stack[-9] = Stack[-12]
0x251: PushEmpty(int, object)
0x252: Stack[-1] = Stack[-18]
0x253: Call2 0xc3

0x254: Pop(1)
0x255: Push((int) 4)
0x256: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x257: IF (Stack[-1] == 0) GOTO 0x25e; Pop(1)

0x258: Push((float)0.5)
0x259: Push((float)1.0)
0x25a: Pop(1); Push(Stack[-1] - Stack[-15]);
0x25b: Stack[-6] = Stack[-2] * Stack[-1]; Pop(2);
0x25c: Stack[-11] = Stack[-4]
0x25d: Stack[-9] = Stack[-12]
0x25e: PushEmpty(int, object)
0x25f: Stack[-1] = Stack[-18]
0x260: Call2 0xc3

0x261: Pop(1)
0x262: Push((int) 6)
0x263: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x264: IF (Stack[-1] == 0) GOTO 0x26b; Pop(1)

0x265: Push((float)0.3)
0x266: Push((float)1.0)
0x267: Pop(1); Push(Stack[-1] - Stack[-15]);
0x268: Stack[-5] = Stack[-2] * Stack[-1]; Pop(2);
0x269: Stack[-11] = Stack[-3]
0x26a: Stack[-9] = Stack[-12]
0x26b: Push((int) 1)
0x26c: Pop(1); Push((bool) Stack[-12] > Stack[-1])
0x26d: IF (Stack[-1] == 0) GOTO 0x26f; Pop(1)

0x26e: Stack[-11] = (int) 1
0x26f: Push((float)0.03)
0x270: Pop(1); Push((bool) Stack[-12] < Stack[-1])
0x271: IF (Stack[-1] == 0) GOTO 0x273; Pop(1)

0x272: Stack[-11] = (float) 0.03
0x273: Push((int) -1)
0x274: Pop(1); Push((bool) Stack[-10] < Stack[-1])
0x275: IF (Stack[-1] == 0) GOTO 0x277; Pop(1)

0x276: Stack[-9] = (int) -1
0x277: @@ RemoveAllItems()
0x278: Pop(0)
0x279: @ CreateInvItem(Stack[-2])
0x27a: Pop(0)
0x27b: Push("organ_combination")
0x27c: @@ SetItemName(Stack[-1])
0x27d: Pop(1)
0x27e: Push("DiseaseRate")
0x27f: @@ SetProperty(Stack[-1], Stack[-12])
0x280: Pop(1)
0x281: Push("HealthIncrease")
0x282: @@ SetProperty(Stack[-1], Stack[-10])
0x283: Pop(1)
0x284: Push((int) 0)
0x285: Push((int) 1)
0x286: @@ AddItem(Stack[-3], Stack[-4], Stack[-2], Stack[-1])
0x287: Pop(2)
0x288: Stack[-35] = (bool) 1
0x289: Return(); Pop(34)

0x28a: Stack[-2] = 0
0x28b: Stack[-16] = 0
0x28c: Stack[-17] = 0
0x28d: PushEmpty()
0x28e: Stack[0 + Tasks[-1].StackPointer] = (int)-1
0x28f: PushEmpty(int)
0x290: Stack[-1] = Stack[-2]
0x291: Call2 0x330

0x292: Pop(1)
0x293: PushEmpty(int)
0x294: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x295: Call2 0x38e

0x296: Pop(1)
0x297: PushEmpty()
0x298: Call2 0x349

0x299: Pop(0)
0x29a: Push("default")
0x29b: @ SetCursor(Stack[-1])
0x29c: Pop(1)
0x29d: @ ShowCursor()
0x29e: Pop(0)
0x29f: @ CaptureKeyboard()
0x2a0: Pop(0)
0x2a1: Push((bool) 0)
0x2a2: @ SetOwnerDraw(Stack[-1])
0x2a3: Pop(1)
0x2a4: Push((bool) 1)
0x2a5: @ SetNeedUpdate(Stack[-1])
0x2a6: Pop(1)
0x2a7: PushEmpty()
0x2a8: Call2 0x58

0x2a9: Pop(0)
0x2aa: @ ProcessEvents()
0x2ab: Pop(0)
0x2ac: Return(); Pop(0)

0x2ad: PushEmpty()
0x2ae: @ DestroyWindow()
0x2af: Pop(0)
0x2b0: Return(); Pop(0)

0x2b1: PushEmpty()
0x2b2: PushEmpty(int)
0x2b3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2b4: Call2 0x38e

0x2b5: Pop(1)
0x2b6: PushEmpty()
0x2b7: Call2 0x349

0x2b8: Pop(0)
0x2b9: PushEmpty()
0x2ba: Call2 0x3d

0x2bb: Pop(0)
0x2bc: Return(); Pop(0)

0x2bd: PushEmpty(bool, int, int, object, int, object, bool, int, int, object, int, object)
0x2be: Stack[-6] = (bool) 0
0x2bf: Push("button_weapon")
0x2c0: Pop(1); Push((bool) Stack[-15] == Stack[-1])
0x2c1: IF (Stack[-1] == 0) GOTO 0x2c8; Pop(1)

0x2c2: PushEmpty(int)
0x2c3: Stack[-1] = (int) 0
0x2c4: Call2 0x330

0x2c5: Pop(1)
0x2c6: Stack[-6] = (bool) 1
0x2c7: GOTO 0x324

0x2c8: Push("button_clothes")
0x2c9: Pop(1); Push((bool) Stack[-15] == Stack[-1])
0x2ca: IF (Stack[-1] == 0) GOTO 0x2d1; Pop(1)

0x2cb: PushEmpty(int)
0x2cc: Stack[-1] = (int) 1
0x2cd: Call2 0x330

0x2ce: Pop(1)
0x2cf: Stack[-6] = (bool) 1
0x2d0: GOTO 0x324

0x2d1: Push("button_medcine")
0x2d2: Pop(1); Push((bool) Stack[-15] == Stack[-1])
0x2d3: IF (Stack[-1] == 0) GOTO 0x2da; Pop(1)

0x2d4: PushEmpty(int)
0x2d5: Stack[-1] = (int) 2
0x2d6: Call2 0x330

0x2d7: Pop(1)
0x2d8: Stack[-6] = (bool) 1
0x2d9: GOTO 0x324

0x2da: Push("button_food")
0x2db: Pop(1); Push((bool) Stack[-15] == Stack[-1])
0x2dc: IF (Stack[-1] == 0) GOTO 0x2e3; Pop(1)

0x2dd: PushEmpty(int)
0x2de: Stack[-1] = (int) 3
0x2df: Call2 0x330

0x2e0: Pop(1)
0x2e1: Stack[-6] = (bool) 1
0x2e2: GOTO 0x324

0x2e3: Push("button_other")
0x2e4: Pop(1); Push((bool) Stack[-15] == Stack[-1])
0x2e5: IF (Stack[-1] == 0) GOTO 0x2ec; Pop(1)

0x2e6: PushEmpty(int)
0x2e7: Stack[-1] = (int) 4
0x2e8: Call2 0x330

0x2e9: Pop(1)
0x2ea: Stack[-6] = (bool) 1
0x2eb: GOTO 0x324

0x2ec: Push("button_detector")
0x2ed: Pop(1); Push((bool) Stack[-15] == Stack[-1])
0x2ee: IF (Stack[-1] == 0) GOTO 0x2f0; Pop(1)

0x2ef: GOTO 0x324

0x2f0: Push("button_anticeptic")
0x2f1: Pop(1); Push((bool) Stack[-15] == Stack[-1])
0x2f2: IF (Stack[-1] == 0) GOTO 0x2f4; Pop(1)

0x2f3: GOTO 0x324

0x2f4: Push((int) 0)
0x2f5: Pop(1); Push((bool) Stack[-16] != Stack[-1])
0x2f6: IF (Stack[-1] == 0) GOTO 0x2fd; Pop(1)

0x2f7: Push("noinv_drop")
0x2f8: @ GetVariable(Stack[-1], Stack[-6])
0x2f9: Pop(1)
0x2fa: Push(Stack[-5])
0x2fb: IF (Stack[-1] == 0) GOTO 0x2fd; Pop(1)

0x2fc: Return(); Pop(12)

0x2fd: Stack[-4] = (int) 0
0x2fe: Push((int) 12)
0x2ff: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x300: IF (Stack[-1] == 0) GOTO 0x324; Pop(1)

0x301: PushEmpty(string, int)
0x302: Stack[-1] = Stack[-6]
0x303: Call2 0x3e5

0x304: Pop(1)
0x305: Pop(1); Push((bool) Stack[-15] == Stack[-1])
0x306: IF (Stack[-1] == 0) GOTO 0x321; Pop(1)

0x307: PushEmpty(object)
0x308: Call2 0x1b

0x309: Stack[-4] = Stack[-1]
0x30a: Pop(1)
0x30b: @@ GetItemCount(Stack[-2], Stack[-0])
0x30c: Pop(0)
0x30d: Pop(0); Push((bool) Stack[-2] > Stack[-4])
0x30e: IF (Stack[-1] == 0) GOTO 0x31f; Pop(1)

0x30f: @@ GetItem(Stack[-1], Stack[-4], Stack[-0])
0x310: Pop(0)
0x311: PushEmpty(bool, object)
0x312: Stack[-1] = Stack[-3]
0x313: Call2 0x47

0x314: Pop(1)
0x315: Pop(1); Push((bool) Stack[-1] == 0)
0x316: IF (Stack[-1] == 0) GOTO 0x31e; Pop(1)

0x317: PushEmpty(bool, int, bool)
0x318: Stack[-2] = Stack[-7]
0x319: Push((int) 0)
0x31a: Stack[-2] = Stack[-19] == Stack[-1]; Pop(1);
0x31b: Call2 0x59

0x31c: Stack[-9] = Stack[-3]
0x31d: Pop(3)
0x31e: Stack[-1] = 0
0x31f: GOTO 0x324

0x320: Stack[-3] = 0
0x321: Push((int) 1)
0x322: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x323: GOTO 0x2fe

0x324: Pop(0); Push((bool) Stack[-6] == 0)
0x325: IF (Stack[-1] == 0) GOTO 0x32d; Pop(1)

0x326: PushEmpty(bool, int, string, object)
0x327: Stack[-3] = Stack[-19]
0x328: Stack[-2] = Stack[-18]
0x329: Stack[-1] = Stack[-17]
0x32a: Call2 0x1d

0x32b: Stack[-10] = Stack[-4]
0x32c: Pop(4)
0x32d: Push(Stack[-6])
0x32e: IF (Stack[-1] == 0) GOTO 0x32f; Pop(1)

0x32f: Return(); Pop(12)

0x330: PushEmpty()
0x331: Push((int) -1)
0x332: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x333: IF (Stack[-1] == 0) GOTO 0x335; Pop(1)

0x334: Return(); Pop(0)

0x335: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == Stack[-1])
0x336: IF (Stack[-1] == 0) GOTO 0x338; Pop(1)

0x337: Return(); Pop(0)

0x338: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x339: PushEmpty(int)
0x33a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x33b: Call2 0x350

0x33c: Pop(1)
0x33d: Return(); Pop(0)

0x33e: PushEmpty(object, int, object, int)
0x33f: PushEmpty(object)
0x340: Call2 0x1b

0x341: Stack[-3] = Stack[-1]
0x342: Pop(1)
0x343: Push("money")
0x344: @@ GetProperty(Stack[-1], Stack[-2])
0x345: Pop(1)
0x346: Stack[-5] = Stack[-1]
0x347: Return(); Pop(4)

0x348: Stack[-2] = 0
0x349: PushEmpty(int)
0x34a: Call2 0x33e

0x34b: Pop(0)
0x34c: Push("money")
0x34d: @ SendMessage(Stack[-2], Stack[-1])
0x34e: Pop(2)
0x34f: Return(); Pop(0)

0x350: PushEmpty()
0x351: Push((int) 0)
0x352: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x353: IF (Stack[-1] == 0) GOTO 0x359; Pop(1)

0x354: Push((int) 0)
0x355: Push("button_weapon")
0x356: @ SendMessage(Stack[-2], Stack[-1])
0x357: Pop(2)
0x358: GOTO 0x35d

0x359: Push((int) 1)
0x35a: Push("button_weapon")
0x35b: @ SendMessage(Stack[-2], Stack[-1])
0x35c: Pop(2)
0x35d: Push((int) 1)
0x35e: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x35f: IF (Stack[-1] == 0) GOTO 0x365; Pop(1)

0x360: Push((int) 0)
0x361: Push("button_clothes")
0x362: @ SendMessage(Stack[-2], Stack[-1])
0x363: Pop(2)
0x364: GOTO 0x369

0x365: Push((int) 1)
0x366: Push("button_clothes")
0x367: @ SendMessage(Stack[-2], Stack[-1])
0x368: Pop(2)
0x369: Push((int) 2)
0x36a: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x36b: IF (Stack[-1] == 0) GOTO 0x371; Pop(1)

0x36c: Push((int) 0)
0x36d: Push("button_medcine")
0x36e: @ SendMessage(Stack[-2], Stack[-1])
0x36f: Pop(2)
0x370: GOTO 0x375

0x371: Push((int) 1)
0x372: Push("button_medcine")
0x373: @ SendMessage(Stack[-2], Stack[-1])
0x374: Pop(2)
0x375: Push((int) 3)
0x376: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x377: IF (Stack[-1] == 0) GOTO 0x37d; Pop(1)

0x378: Push((int) 0)
0x379: Push("button_food")
0x37a: @ SendMessage(Stack[-2], Stack[-1])
0x37b: Pop(2)
0x37c: GOTO 0x381

0x37d: Push((int) 1)
0x37e: Push("button_food")
0x37f: @ SendMessage(Stack[-2], Stack[-1])
0x380: Pop(2)
0x381: Push((int) 4)
0x382: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x383: IF (Stack[-1] == 0) GOTO 0x389; Pop(1)

0x384: Push((int) 0)
0x385: Push("button_other")
0x386: @ SendMessage(Stack[-2], Stack[-1])
0x387: Pop(2)
0x388: GOTO 0x38d

0x389: Push((int) 1)
0x38a: Push("button_other")
0x38b: @ SendMessage(Stack[-2], Stack[-1])
0x38c: Pop(2)
0x38d: Return(); Pop(0)

0x38e: PushEmpty(object, int, int, object, int, bool, bool, object, int, int, object, int, bool, bool)
0x38f: PushEmpty(object)
0x390: Call2 0x1b

0x391: Stack[-8] = Stack[-1]
0x392: Pop(1)
0x393: @@ GetItemCount(Stack[-6], Stack[-15])
0x394: Pop(0)
0x395: Stack[-5] = (int) 0
0x396: Push((int) 12)
0x397: Pop(1); Push((bool) Stack[-6] < Stack[-1])
0x398: IF (Stack[-1] == 0) GOTO 0x3e3; Pop(1)

0x399: Pop(0); Push((bool) Stack[-5] < Stack[-6])
0x39a: IF (Stack[-1] == 0) GOTO 0x3d9; Pop(1)

0x39b: @@ GetItem(Stack[-4], Stack[-5], Stack[-15])
0x39c: Pop(0)
0x39d: @@ GetItemAmount(Stack[-3], Stack[-5], Stack[-15])
0x39e: Pop(0)
0x39f: PushEmpty(bool, int, int)
0x3a0: Stack[-2] = Stack[-8]
0x3a1: Stack[-1] = Stack[-18]
0x3a2: Call2 0x55

0x3a3: Stack[-5] = Stack[-3]
0x3a4: Pop(3)
0x3a5: PushEmpty(bool, object)
0x3a6: Stack[-1] = Stack[-6]
0x3a7: Call2 0x47

0x3a8: Stack[-3] = Stack[-2]
0x3a9: Pop(2)
0x3aa: Push(Stack[-2])
0x3ab: IF (Stack[-1] == 0) GOTO 0x3be; Pop(1)

0x3ac: Push(Stack[-1])
0x3ad: IF (Stack[-1] == 0) GOTO 0x3b6; Pop(1)

0x3ae: Push((int) 0)
0x3af: PushEmpty(string, int)
0x3b0: Stack[-1] = Stack[-8]
0x3b1: Call2 0x3e5

0x3b2: Pop(1)
0x3b3: @ SendMessage(Stack[-2], Stack[-1], Stack[-6])
0x3b4: Pop(2)
0x3b5: GOTO 0x3bd

0x3b6: Push((int) 16384)
0x3b7: PushEmpty(string, int)
0x3b8: Stack[-1] = Stack[-8]
0x3b9: Call2 0x3e5

0x3ba: Pop(1)
0x3bb: @ SendMessage(Stack[-2], Stack[-1], Stack[-6])
0x3bc: Pop(2)
0x3bd: GOTO 0x3cf

0x3be: Push(Stack[-1])
0x3bf: IF (Stack[-1] == 0) GOTO 0x3c8; Pop(1)

0x3c0: Push((int) 131072)
0x3c1: PushEmpty(string, int)
0x3c2: Stack[-1] = Stack[-8]
0x3c3: Call2 0x3e5

0x3c4: Pop(1)
0x3c5: @ SendMessage(Stack[-2], Stack[-1], Stack[-6])
0x3c6: Pop(2)
0x3c7: GOTO 0x3cf

0x3c8: Push((int) 0)
0x3c9: PushEmpty(string, int)
0x3ca: Stack[-1] = Stack[-8]
0x3cb: Call2 0x3e5

0x3cc: Pop(1)
0x3cd: @ SendMessage(Stack[-2], Stack[-1], Stack[-6])
0x3ce: Pop(2)
0x3cf: Push((int) 65536)
0x3d0: Pop(1); Push(Stack[-4] | Stack[-1]);
0x3d1: PushEmpty(string, int)
0x3d2: Stack[-1] = Stack[-8]
0x3d3: Call2 0x3e5

0x3d4: Pop(1)
0x3d5: @ SendMessage(Stack[-2], Stack[-1])
0x3d6: Pop(2)
0x3d7: Stack[-4] = 0
0x3d8: GOTO 0x3e0

0x3d9: Push((int) 32768)
0x3da: PushEmpty(string, int)
0x3db: Stack[-1] = Stack[-8]
0x3dc: Call2 0x3e5

0x3dd: Pop(1)
0x3de: @ SendMessage(Stack[-2], Stack[-1])
0x3df: Pop(2)
0x3e0: Push((int) 1)
0x3e1: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x3e2: GOTO 0x396

0x3e3: Return(); Pop(14)

0x3e4: Stack[-7] = 0
0x3e5: PushEmpty()
0x3e6: Push((int) 1)
0x3e7: Pop(1); Push(Stack[-2] + Stack[-1]);
0x3e8: Push((int) 10)
0x3e9: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x3ea: IF (Stack[-1] == 0) GOTO 0x3f0; Pop(1)

0x3eb: Push("slot0")
0x3ec: Push((int) 1)
0x3ed: Pop(1); Push(Stack[-3] + Stack[-1]);
0x3ee: Stack[-4] = Stack[-2] + Stack[-1]; Pop(2);
0x3ef: Return(); Pop(0)

0x3f0: Push("slot")
0x3f1: Push((int) 1)
0x3f2: Pop(1); Push(Stack[-3] + Stack[-1]);
0x3f3: Stack[-4] = Stack[-2] + Stack[-1]; Pop(2);
0x3f4: Return(); Pop(0)

0x3f5: PushEmpty(int, int)
0x3f6: @@ GetItemID(Stack[-1])
0x3f7: Pop(0)
0x3f8: Stack[-4] = Stack[-1]
0x3f9: Return(); Pop(2)

0x3fa: PushEmpty(int, string, int, string)
0x3fb: PushEmpty(int, object)
0x3fc: Stack[-1] = Stack[-7]
0x3fd: Call2 0x3f5

0x3fe: Stack[-4] = Stack[-2]
0x3ff: Pop(2)
0x400: @ GetInvItemName(Stack[-1], Stack[-2])
0x401: Pop(0)
0x402: Stack[-6] = Stack[-1]
0x403: Return(); Pop(4)

