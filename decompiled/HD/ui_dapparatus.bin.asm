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
	CreateStringVector (1 args)
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
		EVENT_100 Op = 0x2df Vars = (int)
		EVENT_102 Op = 0x2e3 Vars = (int)
		EVENT_101 Op = 0x2e9 Vars = (int)
		EVENT_1 Op = 0x38c Vars = (float)
		EVENT_200 Op = 0x398 Vars = (int, string, object)


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
0xb4: Call2 0x4e0

0xb5: Pop(1)
0xb6: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0xb7: Return(); Pop(0)

0xb8: PushEmpty(int, bool, int, bool)
0xb9: PushEmpty(int, object)
0xba: Stack[-1] = Stack[-7]
0xbb: Call2 0x4db

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
0xc6: Call2 0x4db

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
0x183: Call2 0x416

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
0x1a1: Call2 0x416

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
0x1bf: Call2 0x416

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
0x28d: PushEmpty(int, object, int, object)
0x28e: Stack[0 + Tasks[-1].StackPointer] = (int)-1
0x28f: PushEmpty(int)
0x290: Stack[-1] = Stack[-6]
0x291: Call2 0x416

0x292: Pop(1)
0x293: PushEmpty(int)
0x294: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x295: Call2 0x474

0x296: Pop(1)
0x297: PushEmpty()
0x298: Call2 0x42f

0x299: Pop(0)
0x29a: Stack[-2] = (int) 0
0x29b: Push((int) 12)
0x29c: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x29d: IF (Stack[-1] == 0) GOTO 0x2c1; Pop(1)

0x29e: @ CreateStringVector(Stack[-1])
0x29f: Pop(0)
0x2a0: PushEmpty(string, int)
0x2a1: Push((int) 12)
0x2a2: Pop(1); Push(Stack[-5] + Stack[-1]);
0x2a3: Push((int) 1)
0x2a4: Pop(2); Push(Stack[-2] - Stack[-1]);
0x2a5: Push((int) 12)
0x2a6: Stack[-3] = Stack[-2] % Stack[-1]; Pop(2);
0x2a7: Call2 0x4cb

0x2a8: Pop(1)
0x2a9: @@ add(Stack[-1])
0x2aa: Pop(1)
0x2ab: PushEmpty(string, int)
0x2ac: Push((int) 12)
0x2ad: Pop(1); Push(Stack[-5] + Stack[-1]);
0x2ae: Push((int) 1)
0x2af: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2b0: Push((int) 12)
0x2b1: Stack[-3] = Stack[-2] % Stack[-1]; Pop(2);
0x2b2: Call2 0x4cb

0x2b3: Pop(1)
0x2b4: @@ add(Stack[-1])
0x2b5: Pop(1)
0x2b6: Push((int) -1)
0x2b7: PushEmpty(string, int)
0x2b8: Stack[-1] = Stack[-5]
0x2b9: Call2 0x4cb

0x2ba: Pop(1)
0x2bb: @ SendMessage(Stack[-2], Stack[-1], Stack[-3])
0x2bc: Pop(2)
0x2bd: Stack[-1] = 0
0x2be: Push((int) 1)
0x2bf: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x2c0: GOTO 0x29b

0x2c1: PushEmpty()
0x2c2: Call2 0x2d7

0x2c3: Pop(0)
0x2c4: Push("default")
0x2c5: @ SetCursor(Stack[-1])
0x2c6: Pop(1)
0x2c7: @ ShowCursor()
0x2c8: Pop(0)
0x2c9: @ CaptureKeyboard()
0x2ca: Pop(0)
0x2cb: Push((bool) 0)
0x2cc: @ SetOwnerDraw(Stack[-1])
0x2cd: Pop(1)
0x2ce: Push((bool) 1)
0x2cf: @ SetNeedUpdate(Stack[-1])
0x2d0: Pop(1)
0x2d1: PushEmpty()
0x2d2: Call2 0x58

0x2d3: Pop(0)
0x2d4: @ ProcessEvents()
0x2d5: Pop(0)
0x2d6: Return(); Pop(4)

0x2d7: Push((int) -6)
0x2d8: PushEmpty(string, int)
0x2d9: Stack[-1] = (int) 0
0x2da: Call2 0x4cb

0x2db: Pop(1)
0x2dc: @ SendMessage(Stack[-2], Stack[-1])
0x2dd: Pop(2)
0x2de: Return(); Pop(0)

0x2df: PushEmpty()
0x2e0: @ DestroyWindow()
0x2e1: Pop(0)
0x2e2: Return(); Pop(0)

0x2e3: PushEmpty()
0x2e4: PushEmpty(int)
0x2e5: Stack[-1] = Stack[-2]
0x2e6: Call2 0x368

0x2e7: Pop(1)
0x2e8: Return(); Pop(0)

0x2e9: PushEmpty()
0x2ea: Push((int) 266)
0x2eb: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2ec: IF (Stack[-1] == 0) GOTO 0x315; Pop(1)

0x2ed: Push((int) 0)
0x2ee: Pop(1); Push((bool) Stack[0 + Tasks[-1].StackPointer] == Stack[-1])
0x2ef: IF (Stack[-1] == 0) GOTO 0x2f5; Pop(1)

0x2f0: PushEmpty(int)
0x2f1: Stack[-1] = (int) 1
0x2f2: Call2 0x416

0x2f3: Pop(1)
0x2f4: GOTO 0x314

0x2f5: Push((int) 1)
0x2f6: Pop(1); Push((bool) Stack[0 + Tasks[-1].StackPointer] == Stack[-1])
0x2f7: IF (Stack[-1] == 0) GOTO 0x2fd; Pop(1)

0x2f8: PushEmpty(int)
0x2f9: Stack[-1] = (int) 2
0x2fa: Call2 0x416

0x2fb: Pop(1)
0x2fc: GOTO 0x314

0x2fd: Push((int) 2)
0x2fe: Pop(1); Push((bool) Stack[0 + Tasks[-1].StackPointer] == Stack[-1])
0x2ff: IF (Stack[-1] == 0) GOTO 0x305; Pop(1)

0x300: PushEmpty(int)
0x301: Stack[-1] = (int) 3
0x302: Call2 0x416

0x303: Pop(1)
0x304: GOTO 0x314

0x305: Push((int) 3)
0x306: Pop(1); Push((bool) Stack[0 + Tasks[-1].StackPointer] == Stack[-1])
0x307: IF (Stack[-1] == 0) GOTO 0x30d; Pop(1)

0x308: PushEmpty(int)
0x309: Stack[-1] = (int) 4
0x30a: Call2 0x416

0x30b: Pop(1)
0x30c: GOTO 0x314

0x30d: Push((int) 4)
0x30e: Pop(1); Push((bool) Stack[0 + Tasks[-1].StackPointer] == Stack[-1])
0x30f: IF (Stack[-1] == 0) GOTO 0x314; Pop(1)

0x310: PushEmpty(int)
0x311: Stack[-1] = (int) 0
0x312: Call2 0x416

0x313: Pop(1)
0x314: GOTO 0x33f

0x315: Push((int) 265)
0x316: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x317: IF (Stack[-1] == 0) GOTO 0x33f; Pop(1)

0x318: Push((int) 0)
0x319: Pop(1); Push((bool) Stack[0 + Tasks[-1].StackPointer] == Stack[-1])
0x31a: IF (Stack[-1] == 0) GOTO 0x320; Pop(1)

0x31b: PushEmpty(int)
0x31c: Stack[-1] = (int) 4
0x31d: Call2 0x416

0x31e: Pop(1)
0x31f: GOTO 0x33f

0x320: Push((int) 1)
0x321: Pop(1); Push((bool) Stack[0 + Tasks[-1].StackPointer] == Stack[-1])
0x322: IF (Stack[-1] == 0) GOTO 0x328; Pop(1)

0x323: PushEmpty(int)
0x324: Stack[-1] = (int) 0
0x325: Call2 0x416

0x326: Pop(1)
0x327: GOTO 0x33f

0x328: Push((int) 2)
0x329: Pop(1); Push((bool) Stack[0 + Tasks[-1].StackPointer] == Stack[-1])
0x32a: IF (Stack[-1] == 0) GOTO 0x330; Pop(1)

0x32b: PushEmpty(int)
0x32c: Stack[-1] = (int) 1
0x32d: Call2 0x416

0x32e: Pop(1)
0x32f: GOTO 0x33f

0x330: Push((int) 3)
0x331: Pop(1); Push((bool) Stack[0 + Tasks[-1].StackPointer] == Stack[-1])
0x332: IF (Stack[-1] == 0) GOTO 0x338; Pop(1)

0x333: PushEmpty(int)
0x334: Stack[-1] = (int) 2
0x335: Call2 0x416

0x336: Pop(1)
0x337: GOTO 0x33f

0x338: Push((int) 4)
0x339: Pop(1); Push((bool) Stack[0 + Tasks[-1].StackPointer] == Stack[-1])
0x33a: IF (Stack[-1] == 0) GOTO 0x33f; Pop(1)

0x33b: PushEmpty(int)
0x33c: Stack[-1] = (int) 3
0x33d: Call2 0x416

0x33e: Pop(1)
0x33f: PushEmpty(int)
0x340: Stack[-1] = Stack[-2]
0x341: Call2 0x344

0x342: Pop(1)
0x343: Return(); Pop(0)

0x344: PushEmpty(int, int, int, int)
0x345: Push((int) 269)
0x346: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x347: IF (Stack[-1] == 0) GOTO 0x356; Pop(1)

0x348: Stack[-2] = (int) 0
0x349: Push((int) 12)
0x34a: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x34b: IF (Stack[-1] == 0) GOTO 0x356; Pop(1)

0x34c: Push((int) -2)
0x34d: PushEmpty(string, int)
0x34e: Stack[-1] = Stack[-5]
0x34f: Call2 0x4cb

0x350: Pop(1)
0x351: @ SendMessage(Stack[-2], Stack[-1])
0x352: Pop(2)
0x353: Push((int) 1)
0x354: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x355: GOTO 0x349

0x356: Push((int) 270)
0x357: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x358: IF (Stack[-1] == 0) GOTO 0x367; Pop(1)

0x359: Stack[-1] = (int) 0
0x35a: Push((int) 12)
0x35b: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x35c: IF (Stack[-1] == 0) GOTO 0x367; Pop(1)

0x35d: Push((int) -3)
0x35e: PushEmpty(string, int)
0x35f: Stack[-1] = Stack[-4]
0x360: Call2 0x4cb

0x361: Pop(1)
0x362: @ SendMessage(Stack[-2], Stack[-1])
0x363: Pop(2)
0x364: Push((int) 1)
0x365: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x366: GOTO 0x35a

0x367: Return(); Pop(4)

0x368: PushEmpty(int, int, int, int)
0x369: Push((int) 273)
0x36a: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x36b: IF (Stack[-1] == 0) GOTO 0x37a; Pop(1)

0x36c: Stack[-2] = (int) 0
0x36d: Push((int) 12)
0x36e: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x36f: IF (Stack[-1] == 0) GOTO 0x37a; Pop(1)

0x370: Push((int) -2)
0x371: PushEmpty(string, int)
0x372: Stack[-1] = Stack[-5]
0x373: Call2 0x4cb

0x374: Pop(1)
0x375: @ SendMessage(Stack[-2], Stack[-1])
0x376: Pop(2)
0x377: Push((int) 1)
0x378: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x379: GOTO 0x36d

0x37a: Push((int) 271)
0x37b: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x37c: IF (Stack[-1] == 0) GOTO 0x38b; Pop(1)

0x37d: Stack[-1] = (int) 0
0x37e: Push((int) 12)
0x37f: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x380: IF (Stack[-1] == 0) GOTO 0x38b; Pop(1)

0x381: Push((int) -3)
0x382: PushEmpty(string, int)
0x383: Stack[-1] = Stack[-4]
0x384: Call2 0x4cb

0x385: Pop(1)
0x386: @ SendMessage(Stack[-2], Stack[-1])
0x387: Pop(2)
0x388: Push((int) 1)
0x389: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x38a: GOTO 0x37e

0x38b: Return(); Pop(4)

0x38c: PushEmpty()
0x38d: PushEmpty(int)
0x38e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x38f: Call2 0x474

0x390: Pop(1)
0x391: PushEmpty()
0x392: Call2 0x42f

0x393: Pop(0)
0x394: PushEmpty()
0x395: Call2 0x3d

0x396: Pop(0)
0x397: Return(); Pop(0)

0x398: PushEmpty(bool, int, int, object, int, object, bool, int, int, object, int, object)
0x399: Stack[-6] = (bool) 0
0x39a: Push((int) 0)
0x39b: Pop(1); Push((bool) Stack[-16] < Stack[-1])
0x39c: IF (Stack[-1] == 0) GOTO 0x3a5; Pop(1)

0x39d: PushEmpty(bool, int, string, object)
0x39e: Stack[-3] = Stack[-19]
0x39f: Stack[-2] = Stack[-18]
0x3a0: Stack[-1] = Stack[-17]
0x3a1: Call2 0x1d

0x3a2: Stack[-10] = Stack[-4]
0x3a3: Pop(4)
0x3a4: Return(); Pop(12)

0x3a5: Push("button_weapon")
0x3a6: Pop(1); Push((bool) Stack[-15] == Stack[-1])
0x3a7: IF (Stack[-1] == 0) GOTO 0x3ae; Pop(1)

0x3a8: PushEmpty(int)
0x3a9: Stack[-1] = (int) 0
0x3aa: Call2 0x416

0x3ab: Pop(1)
0x3ac: Stack[-6] = (bool) 1
0x3ad: GOTO 0x40a

0x3ae: Push("button_clothes")
0x3af: Pop(1); Push((bool) Stack[-15] == Stack[-1])
0x3b0: IF (Stack[-1] == 0) GOTO 0x3b7; Pop(1)

0x3b1: PushEmpty(int)
0x3b2: Stack[-1] = (int) 1
0x3b3: Call2 0x416

0x3b4: Pop(1)
0x3b5: Stack[-6] = (bool) 1
0x3b6: GOTO 0x40a

0x3b7: Push("button_medcine")
0x3b8: Pop(1); Push((bool) Stack[-15] == Stack[-1])
0x3b9: IF (Stack[-1] == 0) GOTO 0x3c0; Pop(1)

0x3ba: PushEmpty(int)
0x3bb: Stack[-1] = (int) 2
0x3bc: Call2 0x416

0x3bd: Pop(1)
0x3be: Stack[-6] = (bool) 1
0x3bf: GOTO 0x40a

0x3c0: Push("button_food")
0x3c1: Pop(1); Push((bool) Stack[-15] == Stack[-1])
0x3c2: IF (Stack[-1] == 0) GOTO 0x3c9; Pop(1)

0x3c3: PushEmpty(int)
0x3c4: Stack[-1] = (int) 3
0x3c5: Call2 0x416

0x3c6: Pop(1)
0x3c7: Stack[-6] = (bool) 1
0x3c8: GOTO 0x40a

0x3c9: Push("button_other")
0x3ca: Pop(1); Push((bool) Stack[-15] == Stack[-1])
0x3cb: IF (Stack[-1] == 0) GOTO 0x3d2; Pop(1)

0x3cc: PushEmpty(int)
0x3cd: Stack[-1] = (int) 4
0x3ce: Call2 0x416

0x3cf: Pop(1)
0x3d0: Stack[-6] = (bool) 1
0x3d1: GOTO 0x40a

0x3d2: Push("button_detector")
0x3d3: Pop(1); Push((bool) Stack[-15] == Stack[-1])
0x3d4: IF (Stack[-1] == 0) GOTO 0x3d6; Pop(1)

0x3d5: GOTO 0x40a

0x3d6: Push("button_anticeptic")
0x3d7: Pop(1); Push((bool) Stack[-15] == Stack[-1])
0x3d8: IF (Stack[-1] == 0) GOTO 0x3da; Pop(1)

0x3d9: GOTO 0x40a

0x3da: Push((int) 0)
0x3db: Pop(1); Push((bool) Stack[-16] != Stack[-1])
0x3dc: IF (Stack[-1] == 0) GOTO 0x3e3; Pop(1)

0x3dd: Push("noinv_drop")
0x3de: @ GetVariable(Stack[-1], Stack[-6])
0x3df: Pop(1)
0x3e0: Push(Stack[-5])
0x3e1: IF (Stack[-1] == 0) GOTO 0x3e3; Pop(1)

0x3e2: Return(); Pop(12)

0x3e3: Stack[-4] = (int) 0
0x3e4: Push((int) 12)
0x3e5: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x3e6: IF (Stack[-1] == 0) GOTO 0x40a; Pop(1)

0x3e7: PushEmpty(string, int)
0x3e8: Stack[-1] = Stack[-6]
0x3e9: Call2 0x4cb

0x3ea: Pop(1)
0x3eb: Pop(1); Push((bool) Stack[-15] == Stack[-1])
0x3ec: IF (Stack[-1] == 0) GOTO 0x407; Pop(1)

0x3ed: PushEmpty(object)
0x3ee: Call2 0x1b

0x3ef: Stack[-4] = Stack[-1]
0x3f0: Pop(1)
0x3f1: @@ GetItemCount(Stack[-2], Stack[-0])
0x3f2: Pop(0)
0x3f3: Pop(0); Push((bool) Stack[-2] > Stack[-4])
0x3f4: IF (Stack[-1] == 0) GOTO 0x405; Pop(1)

0x3f5: @@ GetItem(Stack[-1], Stack[-4], Stack[-0])
0x3f6: Pop(0)
0x3f7: PushEmpty(bool, object)
0x3f8: Stack[-1] = Stack[-3]
0x3f9: Call2 0x47

0x3fa: Pop(1)
0x3fb: Pop(1); Push((bool) Stack[-1] == 0)
0x3fc: IF (Stack[-1] == 0) GOTO 0x404; Pop(1)

0x3fd: PushEmpty(bool, int, bool)
0x3fe: Stack[-2] = Stack[-7]
0x3ff: Push((int) 0)
0x400: Stack[-2] = Stack[-19] == Stack[-1]; Pop(1);
0x401: Call2 0x59

0x402: Stack[-9] = Stack[-3]
0x403: Pop(3)
0x404: Stack[-1] = 0
0x405: GOTO 0x40a

0x406: Stack[-3] = 0
0x407: Push((int) 1)
0x408: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x409: GOTO 0x3e4

0x40a: Pop(0); Push((bool) Stack[-6] == 0)
0x40b: IF (Stack[-1] == 0) GOTO 0x413; Pop(1)

0x40c: PushEmpty(bool, int, string, object)
0x40d: Stack[-3] = Stack[-19]
0x40e: Stack[-2] = Stack[-18]
0x40f: Stack[-1] = Stack[-17]
0x410: Call2 0x1d

0x411: Stack[-10] = Stack[-4]
0x412: Pop(4)
0x413: Push(Stack[-6])
0x414: IF (Stack[-1] == 0) GOTO 0x415; Pop(1)

0x415: Return(); Pop(12)

0x416: PushEmpty()
0x417: Push((int) -1)
0x418: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x419: IF (Stack[-1] == 0) GOTO 0x41b; Pop(1)

0x41a: Return(); Pop(0)

0x41b: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == Stack[-1])
0x41c: IF (Stack[-1] == 0) GOTO 0x41e; Pop(1)

0x41d: Return(); Pop(0)

0x41e: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x41f: PushEmpty(int)
0x420: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x421: Call2 0x436

0x422: Pop(1)
0x423: Return(); Pop(0)

0x424: PushEmpty(object, int, object, int)
0x425: PushEmpty(object)
0x426: Call2 0x1b

0x427: Stack[-3] = Stack[-1]
0x428: Pop(1)
0x429: Push("money")
0x42a: @@ GetProperty(Stack[-1], Stack[-2])
0x42b: Pop(1)
0x42c: Stack[-5] = Stack[-1]
0x42d: Return(); Pop(4)

0x42e: Stack[-2] = 0
0x42f: PushEmpty(int)
0x430: Call2 0x424

0x431: Pop(0)
0x432: Push("money")
0x433: @ SendMessage(Stack[-2], Stack[-1])
0x434: Pop(2)
0x435: Return(); Pop(0)

0x436: PushEmpty()
0x437: Push((int) 0)
0x438: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x439: IF (Stack[-1] == 0) GOTO 0x43f; Pop(1)

0x43a: Push((int) 0)
0x43b: Push("button_weapon")
0x43c: @ SendMessage(Stack[-2], Stack[-1])
0x43d: Pop(2)
0x43e: GOTO 0x443

0x43f: Push((int) 1)
0x440: Push("button_weapon")
0x441: @ SendMessage(Stack[-2], Stack[-1])
0x442: Pop(2)
0x443: Push((int) 1)
0x444: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x445: IF (Stack[-1] == 0) GOTO 0x44b; Pop(1)

0x446: Push((int) 0)
0x447: Push("button_clothes")
0x448: @ SendMessage(Stack[-2], Stack[-1])
0x449: Pop(2)
0x44a: GOTO 0x44f

0x44b: Push((int) 1)
0x44c: Push("button_clothes")
0x44d: @ SendMessage(Stack[-2], Stack[-1])
0x44e: Pop(2)
0x44f: Push((int) 2)
0x450: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x451: IF (Stack[-1] == 0) GOTO 0x457; Pop(1)

0x452: Push((int) 0)
0x453: Push("button_medcine")
0x454: @ SendMessage(Stack[-2], Stack[-1])
0x455: Pop(2)
0x456: GOTO 0x45b

0x457: Push((int) 1)
0x458: Push("button_medcine")
0x459: @ SendMessage(Stack[-2], Stack[-1])
0x45a: Pop(2)
0x45b: Push((int) 3)
0x45c: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x45d: IF (Stack[-1] == 0) GOTO 0x463; Pop(1)

0x45e: Push((int) 0)
0x45f: Push("button_food")
0x460: @ SendMessage(Stack[-2], Stack[-1])
0x461: Pop(2)
0x462: GOTO 0x467

0x463: Push((int) 1)
0x464: Push("button_food")
0x465: @ SendMessage(Stack[-2], Stack[-1])
0x466: Pop(2)
0x467: Push((int) 4)
0x468: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x469: IF (Stack[-1] == 0) GOTO 0x46f; Pop(1)

0x46a: Push((int) 0)
0x46b: Push("button_other")
0x46c: @ SendMessage(Stack[-2], Stack[-1])
0x46d: Pop(2)
0x46e: GOTO 0x473

0x46f: Push((int) 1)
0x470: Push("button_other")
0x471: @ SendMessage(Stack[-2], Stack[-1])
0x472: Pop(2)
0x473: Return(); Pop(0)

0x474: PushEmpty(object, int, int, object, int, bool, bool, object, int, int, object, int, bool, bool)
0x475: PushEmpty(object)
0x476: Call2 0x1b

0x477: Stack[-8] = Stack[-1]
0x478: Pop(1)
0x479: @@ GetItemCount(Stack[-6], Stack[-15])
0x47a: Pop(0)
0x47b: Stack[-5] = (int) 0
0x47c: Push((int) 12)
0x47d: Pop(1); Push((bool) Stack[-6] < Stack[-1])
0x47e: IF (Stack[-1] == 0) GOTO 0x4c9; Pop(1)

0x47f: Pop(0); Push((bool) Stack[-5] < Stack[-6])
0x480: IF (Stack[-1] == 0) GOTO 0x4bf; Pop(1)

0x481: @@ GetItem(Stack[-4], Stack[-5], Stack[-15])
0x482: Pop(0)
0x483: @@ GetItemAmount(Stack[-3], Stack[-5], Stack[-15])
0x484: Pop(0)
0x485: PushEmpty(bool, int, int)
0x486: Stack[-2] = Stack[-8]
0x487: Stack[-1] = Stack[-18]
0x488: Call2 0x55

0x489: Stack[-5] = Stack[-3]
0x48a: Pop(3)
0x48b: PushEmpty(bool, object)
0x48c: Stack[-1] = Stack[-6]
0x48d: Call2 0x47

0x48e: Stack[-3] = Stack[-2]
0x48f: Pop(2)
0x490: Push(Stack[-2])
0x491: IF (Stack[-1] == 0) GOTO 0x4a4; Pop(1)

0x492: Push(Stack[-1])
0x493: IF (Stack[-1] == 0) GOTO 0x49c; Pop(1)

0x494: Push((int) 0)
0x495: PushEmpty(string, int)
0x496: Stack[-1] = Stack[-8]
0x497: Call2 0x4cb

0x498: Pop(1)
0x499: @ SendMessage(Stack[-2], Stack[-1], Stack[-6])
0x49a: Pop(2)
0x49b: GOTO 0x4a3

0x49c: Push((int) 16384)
0x49d: PushEmpty(string, int)
0x49e: Stack[-1] = Stack[-8]
0x49f: Call2 0x4cb

0x4a0: Pop(1)
0x4a1: @ SendMessage(Stack[-2], Stack[-1], Stack[-6])
0x4a2: Pop(2)
0x4a3: GOTO 0x4b5

0x4a4: Push(Stack[-1])
0x4a5: IF (Stack[-1] == 0) GOTO 0x4ae; Pop(1)

0x4a6: Push((int) 131072)
0x4a7: PushEmpty(string, int)
0x4a8: Stack[-1] = Stack[-8]
0x4a9: Call2 0x4cb

0x4aa: Pop(1)
0x4ab: @ SendMessage(Stack[-2], Stack[-1], Stack[-6])
0x4ac: Pop(2)
0x4ad: GOTO 0x4b5

0x4ae: Push((int) 0)
0x4af: PushEmpty(string, int)
0x4b0: Stack[-1] = Stack[-8]
0x4b1: Call2 0x4cb

0x4b2: Pop(1)
0x4b3: @ SendMessage(Stack[-2], Stack[-1], Stack[-6])
0x4b4: Pop(2)
0x4b5: Push((int) 65536)
0x4b6: Pop(1); Push(Stack[-4] | Stack[-1]);
0x4b7: PushEmpty(string, int)
0x4b8: Stack[-1] = Stack[-8]
0x4b9: Call2 0x4cb

0x4ba: Pop(1)
0x4bb: @ SendMessage(Stack[-2], Stack[-1])
0x4bc: Pop(2)
0x4bd: Stack[-4] = 0
0x4be: GOTO 0x4c6

0x4bf: Push((int) 32768)
0x4c0: PushEmpty(string, int)
0x4c1: Stack[-1] = Stack[-8]
0x4c2: Call2 0x4cb

0x4c3: Pop(1)
0x4c4: @ SendMessage(Stack[-2], Stack[-1])
0x4c5: Pop(2)
0x4c6: Push((int) 1)
0x4c7: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x4c8: GOTO 0x47c

0x4c9: Return(); Pop(14)

0x4ca: Stack[-7] = 0
0x4cb: PushEmpty()
0x4cc: Push((int) 1)
0x4cd: Pop(1); Push(Stack[-2] + Stack[-1]);
0x4ce: Push((int) 10)
0x4cf: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x4d0: IF (Stack[-1] == 0) GOTO 0x4d6; Pop(1)

0x4d1: Push("slot0")
0x4d2: Push((int) 1)
0x4d3: Pop(1); Push(Stack[-3] + Stack[-1]);
0x4d4: Stack[-4] = Stack[-2] + Stack[-1]; Pop(2);
0x4d5: Return(); Pop(0)

0x4d6: Push("slot")
0x4d7: Push((int) 1)
0x4d8: Pop(1); Push(Stack[-3] + Stack[-1]);
0x4d9: Stack[-4] = Stack[-2] + Stack[-1]; Pop(2);
0x4da: Return(); Pop(0)

0x4db: PushEmpty(int, int)
0x4dc: @@ GetItemID(Stack[-1])
0x4dd: Pop(0)
0x4de: Stack[-4] = Stack[-1]
0x4df: Return(); Pop(2)

0x4e0: PushEmpty(int, string, int, string)
0x4e1: PushEmpty(int, object)
0x4e2: Stack[-1] = Stack[-7]
0x4e3: Call2 0x4db

0x4e4: Stack[-4] = Stack[-2]
0x4e5: Pop(2)
0x4e6: @ GetInvItemName(Stack[-1], Stack[-2])
0x4e7: Pop(0)
0x4e8: Stack[-6] = Stack[-1]
0x4e9: Return(); Pop(4)

