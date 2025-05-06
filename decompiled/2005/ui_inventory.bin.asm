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
	SetCursor (1 args)
	ShowCursor (0 args)
	CaptureKeyboard (0 args)
	SetOwnerDraw (1 args)
	SetNeedUpdate (1 args)
	ProcessEvents (0 args)
	DestroyWindow (0 args)
	GetVariable (2 args)
	SendMessage (2 args)
	GetContainer (1 args)
	SendMessage (3 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (int, object) Params = 0
		EVENT_100 Op = 0xbd Vars = (int)
		EVENT_1 Op = 0xd5 Vars = (float)
		EVENT_200 Op = 0xe1 Vars = (int, string, object)


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
0x1f: Call2 0x1b2

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
0x9d: PushEmpty()
0x9e: Stack[0 + Tasks[-1].StackPointer] = (int)-1
0x9f: PushEmpty(int)
0xa0: Stack[-1] = Stack[-2]
0xa1: Call2 0x154

0xa2: Pop(1)
0xa3: PushEmpty(int)
0xa4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa5: Call2 0x1e4

0xa6: Pop(1)
0xa7: PushEmpty()
0xa8: Call2 0x16d

0xa9: Pop(0)
0xaa: Push("default")
0xab: @ SetCursor(Stack[-1])
0xac: Pop(1)
0xad: @ ShowCursor()
0xae: Pop(0)
0xaf: @ CaptureKeyboard()
0xb0: Pop(0)
0xb1: Push((bool) 0)
0xb2: @ SetOwnerDraw(Stack[-1])
0xb3: Pop(1)
0xb4: Push((bool) 1)
0xb5: @ SetNeedUpdate(Stack[-1])
0xb6: Pop(1)
0xb7: PushEmpty()
0xb8: Call2 0x13

0xb9: Pop(0)
0xba: @ ProcessEvents()
0xbb: Pop(0)
0xbc: Return(); Pop(0)

0xbd: PushEmpty()
0xbe: @ DestroyWindow()
0xbf: Pop(0)
0xc0: Return(); Pop(0)

0xc1: PushEmpty()
0xc2: Stack[-2] = (bool) 0
0xc3: Return(); Pop(0)

0xc4: PushEmpty(bool, bool)
0xc5: PushEmpty(object)
0xc6: Call2 0x9

0xc7: Pop(0)
0xc8: PushEmpty(object)
0xc9: Call2 0x9

0xca: Pop(1)
0xcb: PushEmpty(object)
0xcc: Call2 0x9

0xcd: Pop(1)
0xce: PushEmpty(object)
0xcf: Call2 0x9

0xd0: Pop(1)
0xd1: @@ IsItemSelected(Stack[-2], Stack[-5], Stack[-4])
0xd2: Pop(1)
0xd3: Stack[-5] = Stack[-1]
0xd4: Return(); Pop(2)

0xd5: PushEmpty()
0xd6: PushEmpty(int)
0xd7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd8: Call2 0x1e4

0xd9: Pop(1)
0xda: PushEmpty()
0xdb: Call2 0x16d

0xdc: Pop(0)
0xdd: PushEmpty()
0xde: Call2 0x12

0xdf: Pop(0)
0xe0: Return(); Pop(0)

0xe1: PushEmpty(bool, int, int, object, int, object, bool, int, int, object, int, object)
0xe2: Stack[-6] = (bool) 0
0xe3: Push("button_weapon")
0xe4: Pop(1); Push((bool) Stack[-15] == Stack[-1])
0xe5: IF (Stack[-1] == 0) GOTO 0xec; Pop(1)

0xe6: PushEmpty(int)
0xe7: Stack[-1] = (int) 0
0xe8: Call2 0x154

0xe9: Pop(1)
0xea: Stack[-6] = (bool) 1
0xeb: GOTO 0x148

0xec: Push("button_clothes")
0xed: Pop(1); Push((bool) Stack[-15] == Stack[-1])
0xee: IF (Stack[-1] == 0) GOTO 0xf5; Pop(1)

0xef: PushEmpty(int)
0xf0: Stack[-1] = (int) 1
0xf1: Call2 0x154

0xf2: Pop(1)
0xf3: Stack[-6] = (bool) 1
0xf4: GOTO 0x148

0xf5: Push("button_medcine")
0xf6: Pop(1); Push((bool) Stack[-15] == Stack[-1])
0xf7: IF (Stack[-1] == 0) GOTO 0xfe; Pop(1)

0xf8: PushEmpty(int)
0xf9: Stack[-1] = (int) 2
0xfa: Call2 0x154

0xfb: Pop(1)
0xfc: Stack[-6] = (bool) 1
0xfd: GOTO 0x148

0xfe: Push("button_food")
0xff: Pop(1); Push((bool) Stack[-15] == Stack[-1])
0x100: IF (Stack[-1] == 0) GOTO 0x107; Pop(1)

0x101: PushEmpty(int)
0x102: Stack[-1] = (int) 3
0x103: Call2 0x154

0x104: Pop(1)
0x105: Stack[-6] = (bool) 1
0x106: GOTO 0x148

0x107: Push("button_other")
0x108: Pop(1); Push((bool) Stack[-15] == Stack[-1])
0x109: IF (Stack[-1] == 0) GOTO 0x110; Pop(1)

0x10a: PushEmpty(int)
0x10b: Stack[-1] = (int) 4
0x10c: Call2 0x154

0x10d: Pop(1)
0x10e: Stack[-6] = (bool) 1
0x10f: GOTO 0x148

0x110: Push("button_detector")
0x111: Pop(1); Push((bool) Stack[-15] == Stack[-1])
0x112: IF (Stack[-1] == 0) GOTO 0x114; Pop(1)

0x113: GOTO 0x148

0x114: Push("button_anticeptic")
0x115: Pop(1); Push((bool) Stack[-15] == Stack[-1])
0x116: IF (Stack[-1] == 0) GOTO 0x118; Pop(1)

0x117: GOTO 0x148

0x118: Push((int) 0)
0x119: Pop(1); Push((bool) Stack[-16] != Stack[-1])
0x11a: IF (Stack[-1] == 0) GOTO 0x121; Pop(1)

0x11b: Push("noinv_drop")
0x11c: @ GetVariable(Stack[-1], Stack[-6])
0x11d: Pop(1)
0x11e: Push(Stack[-5])
0x11f: IF (Stack[-1] == 0) GOTO 0x121; Pop(1)

0x120: Return(); Pop(12)

0x121: Stack[-4] = (int) 0
0x122: Push((int) 12)
0x123: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x124: IF (Stack[-1] == 0) GOTO 0x148; Pop(1)

0x125: PushEmpty(string, int)
0x126: Stack[-1] = Stack[-6]
0x127: Call2 0x23b

0x128: Pop(1)
0x129: Pop(1); Push((bool) Stack[-15] == Stack[-1])
0x12a: IF (Stack[-1] == 0) GOTO 0x145; Pop(1)

0x12b: PushEmpty(object)
0x12c: Call2 0x9

0x12d: Stack[-4] = Stack[-1]
0x12e: Pop(1)
0x12f: @@ GetItemCount(Stack[-2], Stack[-0])
0x130: Pop(0)
0x131: Pop(0); Push((bool) Stack[-2] > Stack[-4])
0x132: IF (Stack[-1] == 0) GOTO 0x143; Pop(1)

0x133: @@ GetItem(Stack[-1], Stack[-4], Stack[-0])
0x134: Pop(0)
0x135: PushEmpty(bool, object)
0x136: Stack[-1] = Stack[-3]
0x137: Call2 0xc1

0x138: Pop(1)
0x139: Pop(1); Push((bool) Stack[-1] == 0)
0x13a: IF (Stack[-1] == 0) GOTO 0x142; Pop(1)

0x13b: PushEmpty(bool, int, bool)
0x13c: Stack[-2] = Stack[-7]
0x13d: Push((int) 0)
0x13e: Stack[-2] = Stack[-19] == Stack[-1]; Pop(1);
0x13f: Call2 0x14

0x140: Stack[-9] = Stack[-3]
0x141: Pop(3)
0x142: Stack[-1] = 0
0x143: GOTO 0x148

0x144: Stack[-3] = 0
0x145: Push((int) 1)
0x146: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x147: GOTO 0x122

0x148: Pop(0); Push((bool) Stack[-6] == 0)
0x149: IF (Stack[-1] == 0) GOTO 0x151; Pop(1)

0x14a: PushEmpty(bool, int, string, object)
0x14b: Stack[-3] = Stack[-19]
0x14c: Stack[-2] = Stack[-18]
0x14d: Stack[-1] = Stack[-17]
0x14e: Call2 0xf

0x14f: Stack[-10] = Stack[-4]
0x150: Pop(4)
0x151: Push(Stack[-6])
0x152: IF (Stack[-1] == 0) GOTO 0x153; Pop(1)

0x153: Return(); Pop(12)

0x154: PushEmpty()
0x155: Push((int) -1)
0x156: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x157: IF (Stack[-1] == 0) GOTO 0x159; Pop(1)

0x158: Return(); Pop(0)

0x159: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == Stack[-1])
0x15a: IF (Stack[-1] == 0) GOTO 0x15c; Pop(1)

0x15b: Return(); Pop(0)

0x15c: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x15d: PushEmpty(int)
0x15e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x15f: Call2 0x174

0x160: Pop(1)
0x161: Return(); Pop(0)

0x162: PushEmpty(object, int, object, int)
0x163: PushEmpty(object)
0x164: Call2 0x9

0x165: Stack[-3] = Stack[-1]
0x166: Pop(1)
0x167: Push("money")
0x168: @@ GetProperty(Stack[-1], Stack[-2])
0x169: Pop(1)
0x16a: Stack[-5] = Stack[-1]
0x16b: Return(); Pop(4)

0x16c: Stack[-2] = 0
0x16d: PushEmpty(int)
0x16e: Call2 0x162

0x16f: Pop(0)
0x170: Push("money")
0x171: @ SendMessage(Stack[-2], Stack[-1])
0x172: Pop(2)
0x173: Return(); Pop(0)

0x174: PushEmpty()
0x175: Push((int) 0)
0x176: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x177: IF (Stack[-1] == 0) GOTO 0x17d; Pop(1)

0x178: Push((int) 0)
0x179: Push("button_weapon")
0x17a: @ SendMessage(Stack[-2], Stack[-1])
0x17b: Pop(2)
0x17c: GOTO 0x181

0x17d: Push((int) 1)
0x17e: Push("button_weapon")
0x17f: @ SendMessage(Stack[-2], Stack[-1])
0x180: Pop(2)
0x181: Push((int) 1)
0x182: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x183: IF (Stack[-1] == 0) GOTO 0x189; Pop(1)

0x184: Push((int) 0)
0x185: Push("button_clothes")
0x186: @ SendMessage(Stack[-2], Stack[-1])
0x187: Pop(2)
0x188: GOTO 0x18d

0x189: Push((int) 1)
0x18a: Push("button_clothes")
0x18b: @ SendMessage(Stack[-2], Stack[-1])
0x18c: Pop(2)
0x18d: Push((int) 2)
0x18e: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x18f: IF (Stack[-1] == 0) GOTO 0x195; Pop(1)

0x190: Push((int) 0)
0x191: Push("button_medcine")
0x192: @ SendMessage(Stack[-2], Stack[-1])
0x193: Pop(2)
0x194: GOTO 0x199

0x195: Push((int) 1)
0x196: Push("button_medcine")
0x197: @ SendMessage(Stack[-2], Stack[-1])
0x198: Pop(2)
0x199: Push((int) 3)
0x19a: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x19b: IF (Stack[-1] == 0) GOTO 0x1a1; Pop(1)

0x19c: Push((int) 0)
0x19d: Push("button_food")
0x19e: @ SendMessage(Stack[-2], Stack[-1])
0x19f: Pop(2)
0x1a0: GOTO 0x1a5

0x1a1: Push((int) 1)
0x1a2: Push("button_food")
0x1a3: @ SendMessage(Stack[-2], Stack[-1])
0x1a4: Pop(2)
0x1a5: Push((int) 4)
0x1a6: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x1a7: IF (Stack[-1] == 0) GOTO 0x1ad; Pop(1)

0x1a8: Push((int) 0)
0x1a9: Push("button_other")
0x1aa: @ SendMessage(Stack[-2], Stack[-1])
0x1ab: Pop(2)
0x1ac: GOTO 0x1b1

0x1ad: Push((int) 1)
0x1ae: Push("button_other")
0x1af: @ SendMessage(Stack[-2], Stack[-1])
0x1b0: Pop(2)
0x1b1: Return(); Pop(0)

0x1b2: PushEmpty(object, object, object, int, int, bool, int, bool, bool, object, object, object, int, int, bool, int, bool, bool)
0x1b3: PushEmpty(object)
0x1b4: Call2 0x9

0x1b5: Stack[-9] = Stack[-1]
0x1b6: Pop(1)
0x1b7: @ GetContainer(Stack[-9])
0x1b8: Pop(0)
0x1b9: @@ GetItemCount(Stack[-6], Stack[-20])
0x1ba: Pop(0)
0x1bb: Pop(0); Push((bool) Stack[-6] <= Stack[-19])
0x1bc: IF (Stack[-1] == 0) GOTO 0x1bf; Pop(1)

0x1bd: Stack[-21] = (bool) 0
0x1be: Return(); Pop(18)

0x1bf: @@ GetItemAmount(Stack[-5], Stack[-19], Stack[-20])
0x1c0: Pop(0)
0x1c1: @@ GetItem(Stack[-7], Stack[-19], Stack[-20])
0x1c2: Pop(0)
0x1c3: Push((int) 0)
0x1c4: Push((int) 1)
0x1c5: @@ AddItem(Stack[-6], Stack[-9], Stack[-2], Stack[-1])
0x1c6: Pop(2)
0x1c7: Pop(0); Push((bool) Stack[-4] == 0)
0x1c8: IF (Stack[-1] == 0) GOTO 0x1cb; Pop(1)

0x1c9: Stack[-21] = (bool) 0
0x1ca: Return(); Pop(18)

0x1cb: Push((int) 0)
0x1cc: Pop(1); Push((bool) Stack[0 + Tasks[-1].StackPointer] == Stack[-1])
0x1cd: IF (Stack[-1] == 0) GOTO 0x1dc; Pop(1)

0x1ce: @@ GetItemID(Stack[-3])
0x1cf: Pop(0)
0x1d0: Push("Weapon")
0x1d1: @ HasInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0x1d2: Pop(1)
0x1d3: Push(Stack[-2])
0x1d4: IF (Stack[-1] == 0) GOTO 0x1dc; Pop(1)

0x1d5: @@ IsItemSelected(Stack[-1], Stack[-19], Stack[-0])
0x1d6: Pop(0)
0x1d7: Push(Stack[-1])
0x1d8: IF (Stack[-1] == 0) GOTO 0x1dc; Pop(1)

0x1d9: Push((int) -1)
0x1da: @ SetPlayerHandsItem(Stack[-1])
0x1db: Pop(1)
0x1dc: Push((int) 1)
0x1dd: @@ RemoveItem(Stack[-20], Stack[-1], Stack[-21])
0x1de: Pop(1)
0x1df: Stack[-21] = (bool) 1
0x1e0: Return(); Pop(18)

0x1e1: Stack[-7] = 0
0x1e2: Stack[-8] = 0
0x1e3: Stack[-9] = 0
0x1e4: PushEmpty(object, int, int, object, int, bool, bool, object, int, int, object, int, bool, bool)
0x1e5: PushEmpty(object)
0x1e6: Call2 0x9

0x1e7: Stack[-8] = Stack[-1]
0x1e8: Pop(1)
0x1e9: @@ GetItemCount(Stack[-6], Stack[-15])
0x1ea: Pop(0)
0x1eb: Stack[-5] = (int) 0
0x1ec: Push((int) 12)
0x1ed: Pop(1); Push((bool) Stack[-6] < Stack[-1])
0x1ee: IF (Stack[-1] == 0) GOTO 0x239; Pop(1)

0x1ef: Pop(0); Push((bool) Stack[-5] < Stack[-6])
0x1f0: IF (Stack[-1] == 0) GOTO 0x22f; Pop(1)

0x1f1: @@ GetItem(Stack[-4], Stack[-5], Stack[-15])
0x1f2: Pop(0)
0x1f3: @@ GetItemAmount(Stack[-3], Stack[-5], Stack[-15])
0x1f4: Pop(0)
0x1f5: PushEmpty(bool, int, int)
0x1f6: Stack[-2] = Stack[-8]
0x1f7: Stack[-1] = Stack[-18]
0x1f8: Call2 0xc4

0x1f9: Stack[-5] = Stack[-3]
0x1fa: Pop(3)
0x1fb: PushEmpty(bool, object)
0x1fc: Stack[-1] = Stack[-6]
0x1fd: Call2 0xc1

0x1fe: Stack[-3] = Stack[-2]
0x1ff: Pop(2)
0x200: Push(Stack[-2])
0x201: IF (Stack[-1] == 0) GOTO 0x214; Pop(1)

0x202: Push(Stack[-1])
0x203: IF (Stack[-1] == 0) GOTO 0x20c; Pop(1)

0x204: Push((int) 0)
0x205: PushEmpty(string, int)
0x206: Stack[-1] = Stack[-8]
0x207: Call2 0x23b

0x208: Pop(1)
0x209: @ SendMessage(Stack[-2], Stack[-1], Stack[-6])
0x20a: Pop(2)
0x20b: GOTO 0x213

0x20c: Push((int) 16384)
0x20d: PushEmpty(string, int)
0x20e: Stack[-1] = Stack[-8]
0x20f: Call2 0x23b

0x210: Pop(1)
0x211: @ SendMessage(Stack[-2], Stack[-1], Stack[-6])
0x212: Pop(2)
0x213: GOTO 0x225

0x214: Push(Stack[-1])
0x215: IF (Stack[-1] == 0) GOTO 0x21e; Pop(1)

0x216: Push((int) 131072)
0x217: PushEmpty(string, int)
0x218: Stack[-1] = Stack[-8]
0x219: Call2 0x23b

0x21a: Pop(1)
0x21b: @ SendMessage(Stack[-2], Stack[-1], Stack[-6])
0x21c: Pop(2)
0x21d: GOTO 0x225

0x21e: Push((int) 0)
0x21f: PushEmpty(string, int)
0x220: Stack[-1] = Stack[-8]
0x221: Call2 0x23b

0x222: Pop(1)
0x223: @ SendMessage(Stack[-2], Stack[-1], Stack[-6])
0x224: Pop(2)
0x225: Push((int) 65536)
0x226: Pop(1); Push(Stack[-4] | Stack[-1]);
0x227: PushEmpty(string, int)
0x228: Stack[-1] = Stack[-8]
0x229: Call2 0x23b

0x22a: Pop(1)
0x22b: @ SendMessage(Stack[-2], Stack[-1])
0x22c: Pop(2)
0x22d: Stack[-4] = 0
0x22e: GOTO 0x236

0x22f: Push((int) 32768)
0x230: PushEmpty(string, int)
0x231: Stack[-1] = Stack[-8]
0x232: Call2 0x23b

0x233: Pop(1)
0x234: @ SendMessage(Stack[-2], Stack[-1])
0x235: Pop(2)
0x236: Push((int) 1)
0x237: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x238: GOTO 0x1ec

0x239: Return(); Pop(14)

0x23a: Stack[-7] = 0
0x23b: PushEmpty()
0x23c: Push((int) 1)
0x23d: Pop(1); Push(Stack[-2] + Stack[-1]);
0x23e: Push((int) 10)
0x23f: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x240: IF (Stack[-1] == 0) GOTO 0x246; Pop(1)

0x241: Push("slot0")
0x242: Push((int) 1)
0x243: Pop(1); Push(Stack[-3] + Stack[-1]);
0x244: Stack[-4] = Stack[-2] + Stack[-1]; Pop(2);
0x245: Return(); Pop(0)

0x246: Push("slot")
0x247: Push((int) 1)
0x248: Pop(1); Push(Stack[-3] + Stack[-1]);
0x249: Stack[-4] = Stack[-2] + Stack[-1]; Pop(2);
0x24a: Return(); Pop(0)

