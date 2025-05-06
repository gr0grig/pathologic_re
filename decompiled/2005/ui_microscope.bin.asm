GlobalVarCount = 0

Strings:
	player
	inventory_base.xml
	GetItemID
	Microscope
	GetItem
	video
	microscope_
	default
	button_weapon
	button_clothes
	button_medcine
	button_food
	button_other
	button_detector
	button_anticeptic
	noinv_drop
	GetItemCount
	money
	GetProperty
	GetItemAmount
	slot0
	slot
	Compare

Import:
	FindActor (2 args)
	DestroyWindow (0 args)
	CreateWindow (3 args)
	HasInvItemProperty (3 args)
	SendMessage (2 args)
	GetInvItemProperty (3 args)
	SetVariable (2 args)
	SetCursor (1 args)
	ShowCursor (0 args)
	CaptureKeyboard (0 args)
	SetOwnerDraw (1 args)
	SetNeedUpdate (1 args)
	ProcessEvents (0 args)
	GetVariable (2 args)
	SendMessage (3 args)
	GetInvItemName (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (int, object, object, object) Params = 0
		EVENT_100 Op = 0x8e Vars = (int)
		EVENT_1 Op = 0x92 Vars = (float)
		EVENT_200 Op = 0x9e Vars = (int, string, object)


0x0: Push("player")
0x1: @ FindActor(Stack[-3], Stack[-1])
0x2: Pop(1)
0x3: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x4: IF (Stack[-1] == 0) GOTO 0x8; Pop(1)

0x5: @ DestroyWindow()
0x6: Pop(0)
0x7: Return(); Pop(0)

0x8: Push("inventory_base.xml")
0x9: Push((bool) 0)
0xa: @ CreateWindow(Stack[-2], Stack[-1], Stack[-1])
0xb: Pop(2)
0xc: PushEmpty(int)
0xd: Stack[-1] = (int) 4
0xe: Call2 0x6e

0xf: Pop(1)
0x10: Return(); Pop(0)

0x11: Stack[-1] = Stack[3 + Tasks[-1].StackPointer]
0x12: Return(); Pop(0)

0x13: PushEmpty()
0x14: Stack[-4] = (bool) 0
0x15: Return(); Pop(0)

0x16: Return(); Pop(0)

0x17: PushEmpty(int, bool, int, bool)
0x18: @@ GetItemID(Stack[-2])
0x19: Pop(0)
0x1a: Push("Microscope")
0x1b: @ HasInvItemProperty(Stack[-2], Stack[-3], Stack[-1])
0x1c: Pop(1)
0x1d: Stack[-6] = !Stack[-1]; Pop(0);
0x1e: Return(); Pop(4)

0x1f: PushEmpty(object, object)
0x20: PushEmpty(object)
0x21: Call2 0x11

0x22: Pop(0)
0x23: PushEmpty(object)
0x24: Call2 0x11

0x25: Pop(1)
0x26: PushEmpty(object)
0x27: Call2 0x11

0x28: Pop(1)
0x29: PushEmpty(object)
0x2a: Call2 0x11

0x2b: Pop(1)
0x2c: @@ GetItem(Stack[-2], Stack[-5], Stack[-4])
0x2d: Pop(1)
0x2e: PushEmpty(bool, object, object)
0x2f: Stack[-2] = Stack[2 + Tasks[-1].StackPointer]
0x30: Stack[-1] = Stack[-4]
0x31: Call2 0x1e5

0x32: Stack[-8] = Stack[-3]
0x33: Pop(3)
0x34: Return(); Pop(2)

0x35: Stack[-1] = 0
0x36: Return(); Pop(0)

0x37: PushEmpty()
0x38: Push(Stack[-1])
0x39: IF (Stack[-1] == 0) GOTO 0x40; Pop(1)

0x3a: PushEmpty(int)
0x3b: Stack[-1] = Stack[-3]
0x3c: Call2 0x42

0x3d: Pop(1)
0x3e: Stack[-3] = (bool) 1
0x3f: Return(); Pop(0)

0x40: Stack[-3] = (bool) 0
0x41: Return(); Pop(0)

0x42: PushEmpty(object, object, bool, int, object, object, bool, int)
0x43: PushEmpty(object)
0x44: Call2 0x11

0x45: Stack[-5] = Stack[-1]
0x46: Pop(1)
0x47: @@ GetItem(Stack[-3], Stack[-9], Stack[-0])
0x48: Pop(0)
0x49: PushEmpty(bool, object, object)
0x4a: Stack[-2] = Stack[2 + Tasks[-1].StackPointer]
0x4b: Stack[-1] = Stack[-6]
0x4c: Call2 0x1e5

0x4d: Stack[-5] = Stack[-3]
0x4e: Pop(3)
0x4f: Push(Stack[-2])
0x50: IF (Stack[-1] == 0) GOTO 0x57; Pop(1)

0x51: Stack[2 + Tasks[-1].StackPointer] = 0
0x52: Push((int) 0)
0x53: Push("video")
0x54: @ SendMessage(Stack[-2], Stack[-1])
0x55: Pop(2)
0x56: GOTO 0x6b

0x57: PushEmpty(int, object)
0x58: Stack[-1] = Stack[-5]
0x59: Call2 0x1d6

0x5a: Pop(1)
0x5b: Push("Microscope")
0x5c: @ GetInvItemProperty(Stack[-3], Stack[-2], Stack[-1])
0x5d: Pop(2)
0x5e: Push("video")
0x5f: @ SendMessage(Stack[-2], Stack[-1])
0x60: Pop(1)
0x61: Push("microscope_")
0x62: PushEmpty(string, object)
0x63: Stack[-1] = Stack[-6]
0x64: Call2 0x1db

0x65: Pop(1)
0x66: Pop(2); Push(Stack[-2] + Stack[-1]);
0x67: Push((int) 1)
0x68: @ SetVariable(Stack[-2], Stack[-1])
0x69: Pop(2)
0x6a: Stack[2 + Tasks[-1].StackPointer] = Stack[-3]
0x6b: Return(); Pop(8)

0x6c: Stack[-3] = 0
0x6d: Stack[-4] = 0
0x6e: PushEmpty()
0x6f: Stack[0 + Tasks[-1].StackPointer] = (int)-1
0x70: PushEmpty(int)
0x71: Stack[-1] = Stack[-2]
0x72: Call2 0x111

0x73: Pop(1)
0x74: PushEmpty(int)
0x75: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x76: Call2 0x16f

0x77: Pop(1)
0x78: PushEmpty()
0x79: Call2 0x12a

0x7a: Pop(0)
0x7b: Push("default")
0x7c: @ SetCursor(Stack[-1])
0x7d: Pop(1)
0x7e: @ ShowCursor()
0x7f: Pop(0)
0x80: @ CaptureKeyboard()
0x81: Pop(0)
0x82: Push((bool) 0)
0x83: @ SetOwnerDraw(Stack[-1])
0x84: Pop(1)
0x85: Push((bool) 1)
0x86: @ SetNeedUpdate(Stack[-1])
0x87: Pop(1)
0x88: PushEmpty()
0x89: Call2 0x36

0x8a: Pop(0)
0x8b: @ ProcessEvents()
0x8c: Pop(0)
0x8d: Return(); Pop(0)

0x8e: PushEmpty()
0x8f: @ DestroyWindow()
0x90: Pop(0)
0x91: Return(); Pop(0)

0x92: PushEmpty()
0x93: PushEmpty(int)
0x94: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x95: Call2 0x16f

0x96: Pop(1)
0x97: PushEmpty()
0x98: Call2 0x12a

0x99: Pop(0)
0x9a: PushEmpty()
0x9b: Call2 0x16

0x9c: Pop(0)
0x9d: Return(); Pop(0)

0x9e: PushEmpty(bool, int, int, object, int, object, bool, int, int, object, int, object)
0x9f: Stack[-6] = (bool) 0
0xa0: Push("button_weapon")
0xa1: Pop(1); Push((bool) Stack[-15] == Stack[-1])
0xa2: IF (Stack[-1] == 0) GOTO 0xa9; Pop(1)

0xa3: PushEmpty(int)
0xa4: Stack[-1] = (int) 0
0xa5: Call2 0x111

0xa6: Pop(1)
0xa7: Stack[-6] = (bool) 1
0xa8: GOTO 0x105

0xa9: Push("button_clothes")
0xaa: Pop(1); Push((bool) Stack[-15] == Stack[-1])
0xab: IF (Stack[-1] == 0) GOTO 0xb2; Pop(1)

0xac: PushEmpty(int)
0xad: Stack[-1] = (int) 1
0xae: Call2 0x111

0xaf: Pop(1)
0xb0: Stack[-6] = (bool) 1
0xb1: GOTO 0x105

0xb2: Push("button_medcine")
0xb3: Pop(1); Push((bool) Stack[-15] == Stack[-1])
0xb4: IF (Stack[-1] == 0) GOTO 0xbb; Pop(1)

0xb5: PushEmpty(int)
0xb6: Stack[-1] = (int) 2
0xb7: Call2 0x111

0xb8: Pop(1)
0xb9: Stack[-6] = (bool) 1
0xba: GOTO 0x105

0xbb: Push("button_food")
0xbc: Pop(1); Push((bool) Stack[-15] == Stack[-1])
0xbd: IF (Stack[-1] == 0) GOTO 0xc4; Pop(1)

0xbe: PushEmpty(int)
0xbf: Stack[-1] = (int) 3
0xc0: Call2 0x111

0xc1: Pop(1)
0xc2: Stack[-6] = (bool) 1
0xc3: GOTO 0x105

0xc4: Push("button_other")
0xc5: Pop(1); Push((bool) Stack[-15] == Stack[-1])
0xc6: IF (Stack[-1] == 0) GOTO 0xcd; Pop(1)

0xc7: PushEmpty(int)
0xc8: Stack[-1] = (int) 4
0xc9: Call2 0x111

0xca: Pop(1)
0xcb: Stack[-6] = (bool) 1
0xcc: GOTO 0x105

0xcd: Push("button_detector")
0xce: Pop(1); Push((bool) Stack[-15] == Stack[-1])
0xcf: IF (Stack[-1] == 0) GOTO 0xd1; Pop(1)

0xd0: GOTO 0x105

0xd1: Push("button_anticeptic")
0xd2: Pop(1); Push((bool) Stack[-15] == Stack[-1])
0xd3: IF (Stack[-1] == 0) GOTO 0xd5; Pop(1)

0xd4: GOTO 0x105

0xd5: Push((int) 0)
0xd6: Pop(1); Push((bool) Stack[-16] != Stack[-1])
0xd7: IF (Stack[-1] == 0) GOTO 0xde; Pop(1)

0xd8: Push("noinv_drop")
0xd9: @ GetVariable(Stack[-1], Stack[-6])
0xda: Pop(1)
0xdb: Push(Stack[-5])
0xdc: IF (Stack[-1] == 0) GOTO 0xde; Pop(1)

0xdd: Return(); Pop(12)

0xde: Stack[-4] = (int) 0
0xdf: Push((int) 12)
0xe0: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0xe1: IF (Stack[-1] == 0) GOTO 0x105; Pop(1)

0xe2: PushEmpty(string, int)
0xe3: Stack[-1] = Stack[-6]
0xe4: Call2 0x1c6

0xe5: Pop(1)
0xe6: Pop(1); Push((bool) Stack[-15] == Stack[-1])
0xe7: IF (Stack[-1] == 0) GOTO 0x102; Pop(1)

0xe8: PushEmpty(object)
0xe9: Call2 0x11

0xea: Stack[-4] = Stack[-1]
0xeb: Pop(1)
0xec: @@ GetItemCount(Stack[-2], Stack[-0])
0xed: Pop(0)
0xee: Pop(0); Push((bool) Stack[-2] > Stack[-4])
0xef: IF (Stack[-1] == 0) GOTO 0x100; Pop(1)

0xf0: @@ GetItem(Stack[-1], Stack[-4], Stack[-0])
0xf1: Pop(0)
0xf2: PushEmpty(bool, object)
0xf3: Stack[-1] = Stack[-3]
0xf4: Call2 0x17

0xf5: Pop(1)
0xf6: Pop(1); Push((bool) Stack[-1] == 0)
0xf7: IF (Stack[-1] == 0) GOTO 0xff; Pop(1)

0xf8: PushEmpty(bool, int, bool)
0xf9: Stack[-2] = Stack[-7]
0xfa: Push((int) 0)
0xfb: Stack[-2] = Stack[-19] == Stack[-1]; Pop(1);
0xfc: Call2 0x37

0xfd: Stack[-9] = Stack[-3]
0xfe: Pop(3)
0xff: Stack[-1] = 0
0x100: GOTO 0x105

0x101: Stack[-3] = 0
0x102: Push((int) 1)
0x103: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x104: GOTO 0xdf

0x105: Pop(0); Push((bool) Stack[-6] == 0)
0x106: IF (Stack[-1] == 0) GOTO 0x10e; Pop(1)

0x107: PushEmpty(bool, int, string, object)
0x108: Stack[-3] = Stack[-19]
0x109: Stack[-2] = Stack[-18]
0x10a: Stack[-1] = Stack[-17]
0x10b: Call2 0x13

0x10c: Stack[-10] = Stack[-4]
0x10d: Pop(4)
0x10e: Push(Stack[-6])
0x10f: IF (Stack[-1] == 0) GOTO 0x110; Pop(1)

0x110: Return(); Pop(12)

0x111: PushEmpty()
0x112: Push((int) -1)
0x113: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x114: IF (Stack[-1] == 0) GOTO 0x116; Pop(1)

0x115: Return(); Pop(0)

0x116: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == Stack[-1])
0x117: IF (Stack[-1] == 0) GOTO 0x119; Pop(1)

0x118: Return(); Pop(0)

0x119: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x11a: PushEmpty(int)
0x11b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x11c: Call2 0x131

0x11d: Pop(1)
0x11e: Return(); Pop(0)

0x11f: PushEmpty(object, int, object, int)
0x120: PushEmpty(object)
0x121: Call2 0x11

0x122: Stack[-3] = Stack[-1]
0x123: Pop(1)
0x124: Push("money")
0x125: @@ GetProperty(Stack[-1], Stack[-2])
0x126: Pop(1)
0x127: Stack[-5] = Stack[-1]
0x128: Return(); Pop(4)

0x129: Stack[-2] = 0
0x12a: PushEmpty(int)
0x12b: Call2 0x11f

0x12c: Pop(0)
0x12d: Push("money")
0x12e: @ SendMessage(Stack[-2], Stack[-1])
0x12f: Pop(2)
0x130: Return(); Pop(0)

0x131: PushEmpty()
0x132: Push((int) 0)
0x133: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x134: IF (Stack[-1] == 0) GOTO 0x13a; Pop(1)

0x135: Push((int) 0)
0x136: Push("button_weapon")
0x137: @ SendMessage(Stack[-2], Stack[-1])
0x138: Pop(2)
0x139: GOTO 0x13e

0x13a: Push((int) 1)
0x13b: Push("button_weapon")
0x13c: @ SendMessage(Stack[-2], Stack[-1])
0x13d: Pop(2)
0x13e: Push((int) 1)
0x13f: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x140: IF (Stack[-1] == 0) GOTO 0x146; Pop(1)

0x141: Push((int) 0)
0x142: Push("button_clothes")
0x143: @ SendMessage(Stack[-2], Stack[-1])
0x144: Pop(2)
0x145: GOTO 0x14a

0x146: Push((int) 1)
0x147: Push("button_clothes")
0x148: @ SendMessage(Stack[-2], Stack[-1])
0x149: Pop(2)
0x14a: Push((int) 2)
0x14b: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x14c: IF (Stack[-1] == 0) GOTO 0x152; Pop(1)

0x14d: Push((int) 0)
0x14e: Push("button_medcine")
0x14f: @ SendMessage(Stack[-2], Stack[-1])
0x150: Pop(2)
0x151: GOTO 0x156

0x152: Push((int) 1)
0x153: Push("button_medcine")
0x154: @ SendMessage(Stack[-2], Stack[-1])
0x155: Pop(2)
0x156: Push((int) 3)
0x157: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x158: IF (Stack[-1] == 0) GOTO 0x15e; Pop(1)

0x159: Push((int) 0)
0x15a: Push("button_food")
0x15b: @ SendMessage(Stack[-2], Stack[-1])
0x15c: Pop(2)
0x15d: GOTO 0x162

0x15e: Push((int) 1)
0x15f: Push("button_food")
0x160: @ SendMessage(Stack[-2], Stack[-1])
0x161: Pop(2)
0x162: Push((int) 4)
0x163: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x164: IF (Stack[-1] == 0) GOTO 0x16a; Pop(1)

0x165: Push((int) 0)
0x166: Push("button_other")
0x167: @ SendMessage(Stack[-2], Stack[-1])
0x168: Pop(2)
0x169: GOTO 0x16e

0x16a: Push((int) 1)
0x16b: Push("button_other")
0x16c: @ SendMessage(Stack[-2], Stack[-1])
0x16d: Pop(2)
0x16e: Return(); Pop(0)

0x16f: PushEmpty(object, int, int, object, int, bool, bool, object, int, int, object, int, bool, bool)
0x170: PushEmpty(object)
0x171: Call2 0x11

0x172: Stack[-8] = Stack[-1]
0x173: Pop(1)
0x174: @@ GetItemCount(Stack[-6], Stack[-15])
0x175: Pop(0)
0x176: Stack[-5] = (int) 0
0x177: Push((int) 12)
0x178: Pop(1); Push((bool) Stack[-6] < Stack[-1])
0x179: IF (Stack[-1] == 0) GOTO 0x1c4; Pop(1)

0x17a: Pop(0); Push((bool) Stack[-5] < Stack[-6])
0x17b: IF (Stack[-1] == 0) GOTO 0x1ba; Pop(1)

0x17c: @@ GetItem(Stack[-4], Stack[-5], Stack[-15])
0x17d: Pop(0)
0x17e: @@ GetItemAmount(Stack[-3], Stack[-5], Stack[-15])
0x17f: Pop(0)
0x180: PushEmpty(bool, int, int)
0x181: Stack[-2] = Stack[-8]
0x182: Stack[-1] = Stack[-18]
0x183: Call2 0x1f

0x184: Stack[-5] = Stack[-3]
0x185: Pop(3)
0x186: PushEmpty(bool, object)
0x187: Stack[-1] = Stack[-6]
0x188: Call2 0x17

0x189: Stack[-3] = Stack[-2]
0x18a: Pop(2)
0x18b: Push(Stack[-2])
0x18c: IF (Stack[-1] == 0) GOTO 0x19f; Pop(1)

0x18d: Push(Stack[-1])
0x18e: IF (Stack[-1] == 0) GOTO 0x197; Pop(1)

0x18f: Push((int) 0)
0x190: PushEmpty(string, int)
0x191: Stack[-1] = Stack[-8]
0x192: Call2 0x1c6

0x193: Pop(1)
0x194: @ SendMessage(Stack[-2], Stack[-1], Stack[-6])
0x195: Pop(2)
0x196: GOTO 0x19e

0x197: Push((int) 16384)
0x198: PushEmpty(string, int)
0x199: Stack[-1] = Stack[-8]
0x19a: Call2 0x1c6

0x19b: Pop(1)
0x19c: @ SendMessage(Stack[-2], Stack[-1], Stack[-6])
0x19d: Pop(2)
0x19e: GOTO 0x1b0

0x19f: Push(Stack[-1])
0x1a0: IF (Stack[-1] == 0) GOTO 0x1a9; Pop(1)

0x1a1: Push((int) 131072)
0x1a2: PushEmpty(string, int)
0x1a3: Stack[-1] = Stack[-8]
0x1a4: Call2 0x1c6

0x1a5: Pop(1)
0x1a6: @ SendMessage(Stack[-2], Stack[-1], Stack[-6])
0x1a7: Pop(2)
0x1a8: GOTO 0x1b0

0x1a9: Push((int) 0)
0x1aa: PushEmpty(string, int)
0x1ab: Stack[-1] = Stack[-8]
0x1ac: Call2 0x1c6

0x1ad: Pop(1)
0x1ae: @ SendMessage(Stack[-2], Stack[-1], Stack[-6])
0x1af: Pop(2)
0x1b0: Push((int) 65536)
0x1b1: Pop(1); Push(Stack[-4] | Stack[-1]);
0x1b2: PushEmpty(string, int)
0x1b3: Stack[-1] = Stack[-8]
0x1b4: Call2 0x1c6

0x1b5: Pop(1)
0x1b6: @ SendMessage(Stack[-2], Stack[-1])
0x1b7: Pop(2)
0x1b8: Stack[-4] = 0
0x1b9: GOTO 0x1c1

0x1ba: Push((int) 32768)
0x1bb: PushEmpty(string, int)
0x1bc: Stack[-1] = Stack[-8]
0x1bd: Call2 0x1c6

0x1be: Pop(1)
0x1bf: @ SendMessage(Stack[-2], Stack[-1])
0x1c0: Pop(2)
0x1c1: Push((int) 1)
0x1c2: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x1c3: GOTO 0x177

0x1c4: Return(); Pop(14)

0x1c5: Stack[-7] = 0
0x1c6: PushEmpty()
0x1c7: Push((int) 1)
0x1c8: Pop(1); Push(Stack[-2] + Stack[-1]);
0x1c9: Push((int) 10)
0x1ca: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x1cb: IF (Stack[-1] == 0) GOTO 0x1d1; Pop(1)

0x1cc: Push("slot0")
0x1cd: Push((int) 1)
0x1ce: Pop(1); Push(Stack[-3] + Stack[-1]);
0x1cf: Stack[-4] = Stack[-2] + Stack[-1]; Pop(2);
0x1d0: Return(); Pop(0)

0x1d1: Push("slot")
0x1d2: Push((int) 1)
0x1d3: Pop(1); Push(Stack[-3] + Stack[-1]);
0x1d4: Stack[-4] = Stack[-2] + Stack[-1]; Pop(2);
0x1d5: Return(); Pop(0)

0x1d6: PushEmpty(int, int)
0x1d7: @@ GetItemID(Stack[-1])
0x1d8: Pop(0)
0x1d9: Stack[-4] = Stack[-1]
0x1da: Return(); Pop(2)

0x1db: PushEmpty(int, string, int, string)
0x1dc: PushEmpty(int, object)
0x1dd: Stack[-1] = Stack[-7]
0x1de: Call2 0x1d6

0x1df: Stack[-4] = Stack[-2]
0x1e0: Pop(2)
0x1e1: @ GetInvItemName(Stack[-1], Stack[-2])
0x1e2: Pop(0)
0x1e3: Stack[-6] = Stack[-1]
0x1e4: Return(); Pop(4)

0x1e5: PushEmpty(bool, bool)
0x1e6: PushEmpty(bool)
0x1e7: Stack[-1] = (bool) 1
0x1e8: Pop(0); Push((bool) Stack[-5] == 0)
0x1e9: IF (Stack[-1] == 0) GOTO 0x1ed; Pop(1)

0x1ea: Pop(0); Push((bool) Stack[-4] == 0)
0x1eb: IF (Stack[-1] == 0) GOTO 0x1ed; Pop(1)

0x1ec: Stack[-1] = (bool) 0
0x1ed: IF (Stack[-1] == 0) GOTO 0x1f0; Pop(1)

0x1ee: Stack[-5] = (bool) 0
0x1ef: Return(); Pop(2)

0x1f0: @@ Compare(Stack[-1], Stack[-3])
0x1f1: Pop(0)
0x1f2: Stack[-5] = Stack[-1]
0x1f3: Return(); Pop(2)

