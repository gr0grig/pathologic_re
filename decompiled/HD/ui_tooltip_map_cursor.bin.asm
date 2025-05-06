GlobalVarCount = 0

Strings:
	GetTooltipType
	GetTooltipText
	GetTooltipObject
	default
	GetItemID
	Price
	durability
	HasProperty
	GetProperty
	BarterPrice
	sellf
	buyf
	barter
	bg
	border
	Description
	Error: Item doesnt have description (FIXME!)
	HasDurability
	 
	%
	HasUses
	uses
	grass_combination
	im_inc
	hl_inc
	%

	organ_combination
	DiseaseRate
	HealthIncrease
	: 
	size
	get
	GetTime
	GetTextID
	:0
	:
	remove
	



Import:
	SetOwnerDraw (1 args)
	ProcessEvents (0 args)
	ClientToScreen (2 args)
	FindWindow (3 args)
	Blit (3 args)
	HasInvItemProperty (3 args)
	GetInvItemProperty (3 args)
	GetInvItemName (2 args)
	GetGameTime (1 args)
	GetContainer (1 args)
	BlitClipped (8 args)
	StretchBlit (6 args)
	GetInvItemSprite2 (2 args)
	GetStringByID (2 args)
	GetTextHeightInWidth (4 args)
	GetFontHeight (2 args)
	GetScreenSize (2 args)
	ScreenToClient (2 args)
	PrintInWidth (10 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_0 Op = 0x6 Vars = ()


0x0: Push((bool) 1)
0x1: @ SetOwnerDraw(Stack[-1])
0x2: Pop(1)
0x3: @ ProcessEvents()
0x4: Pop(0)
0x5: Return(); Pop(0)

0x6: PushEmpty(object, int, int, int, string, object, object, int, int, int, string, object)
0x7: Stack[-5] = (int) 0
0x8: Stack[-4] = (int) 0
0x9: @ ClientToScreen(Stack[-5], Stack[-4])
0xa: Pop(0)
0xb: @ FindWindow(Stack[-6], Stack[-5], Stack[-4])
0xc: Pop(0)
0xd: Pop(0); Push((bool) Stack[-6] == 0)
0xe: IF (Stack[-1] == 0) GOTO 0x10; Pop(1)

0xf: Return(); Pop(12)

0x10: @@ GetTooltipType(Stack[-3])
0x11: Pop(0)
0x12: @@ GetTooltipText(Stack[-2])
0x13: Pop(0)
0x14: @@ GetTooltipObject(Stack[-1])
0x15: Pop(0)
0x16: PushEmpty(int, string, object, int, int, float)
0x17: Stack[-6] = Stack[-9]
0x18: Stack[-5] = Stack[-8]
0x19: Stack[-4] = Stack[-7]
0x1a: Stack[-3] = Stack[-11]
0x1b: Stack[-2] = Stack[-10]
0x1c: Stack[-1] = (int) 1
0x1d: Call2 0xd2

0x1e: Pop(6)
0x1f: Push("default")
0x20: Push((int) 0)
0x21: Push((int) 0)
0x22: @ Blit(Stack[-3], Stack[-2], Stack[-1])
0x23: Pop(3)
0x24: Return(); Pop(12)

0x25: Stack[-1] = 0
0x26: Stack[-6] = 0
0x27: PushEmpty(int, int)
0x28: @@ GetItemID(Stack[-1])
0x29: Pop(0)
0x2a: Stack[-4] = Stack[-1]
0x2b: Return(); Pop(2)

0x2c: PushEmpty(int, int, int, string, bool, bool, int, bool, int, int, int, int, string, bool, bool, int, bool, int)
0x2d: Push((int) 0)
0x2e: Pop(1); Push((bool) Stack[-20] == Stack[-1])
0x2f: IF (Stack[-1] == 0) GOTO 0x60; Pop(1)

0x30: PushEmpty(int)
0x31: Call2 0x85

0x32: Stack[-10] = Stack[-1]
0x33: Pop(1)
0x34: Stack[-8] = (int) 0
0x35: Stack[-7] = (int) 1
0x36: Pop(0); Push((bool) Stack[-7] <= Stack[-9])
0x37: IF (Stack[-1] == 0) GOTO 0x4f; Pop(1)

0x38: Stack[-6] = "Price"
0x39: Push((int) 1)
0x3a: Pop(1); Push((bool) Stack[-8] != Stack[-1])
0x3b: IF (Stack[-1] == 0) GOTO 0x3d; Pop(1)

0x3c: Stack[-6] = Stack[-6] + Stack[-7]; Pop(0);
0x3d: PushEmpty(int, object)
0x3e: Stack[-1] = Stack[-22]
0x3f: Call2 0x27

0x40: Pop(1)
0x41: @ HasInvItemProperty(Stack[-6], Stack[-1], Stack[-7])
0x42: Pop(1)
0x43: Pop(0); Push((bool) Stack[-5] == 0)
0x44: IF (Stack[-1] == 0) GOTO 0x46; Pop(1)

0x45: GOTO 0x4c

0x46: PushEmpty(int, object)
0x47: Stack[-1] = Stack[-22]
0x48: Call2 0x27

0x49: Pop(1)
0x4a: @ GetInvItemProperty(Stack[-9], Stack[-1], Stack[-7])
0x4b: Pop(1)
0x4c: Push((int) 1)
0x4d: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x4e: GOTO 0x36

0x4f: Push("durability")
0x50: @@ HasProperty(Stack[-5], Stack[-1])
0x51: Pop(1)
0x52: Push(Stack[-4])
0x53: IF (Stack[-1] == 0) GOTO 0x5e; Pop(1)

0x54: Push("durability")
0x55: @@ GetProperty(Stack[-4], Stack[-1])
0x56: Pop(1)
0x57: Push((float)0.5)
0x58: Push((float)1.0)
0x59: Push((float)100.0)
0x5a: Pop(1); Push(Stack[-6] / Stack[-1]);
0x5b: Pop(2); Push(Stack[-2] + Stack[-1]);
0x5c: Pop(2); Push(Stack[-2] * Stack[-1]);
0x5d: Stack[-9] = Stack[-9] * Stack[-1]; Pop(1);
0x5e: Stack[-21] = Stack[-8]
0x5f: Return(); Pop(18)

0x60: PushEmpty(int, object)
0x61: Stack[-1] = Stack[-22]
0x62: Call2 0x27

0x63: Pop(1)
0x64: Push("BarterPrice")
0x65: Pop(1); Push(Stack[-1] + Stack[-21]);
0x66: @ HasInvItemProperty(Stack[-4], Stack[-2], Stack[-1])
0x67: Pop(2)
0x68: Pop(0); Push((bool) Stack[-2] == 0)
0x69: IF (Stack[-1] == 0) GOTO 0x6c; Pop(1)

0x6a: Stack[-21] = (int) 0
0x6b: Return(); Pop(18)

0x6c: PushEmpty(int, object)
0x6d: Stack[-1] = Stack[-22]
0x6e: Call2 0x27

0x6f: Pop(1)
0x70: Push("BarterPrice")
0x71: Pop(1); Push(Stack[-1] + Stack[-21]);
0x72: @ GetInvItemProperty(Stack[-3], Stack[-2], Stack[-1])
0x73: Pop(2)
0x74: Push((int) 0)
0x75: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x76: IF (Stack[-1] == 0) GOTO 0x79; Pop(1)

0x77: Stack[-21] = Stack[-1]
0x78: Return(); Pop(18)

0x79: Stack[-21] = -Stack[-1]; Pop(0);
0x7a: Return(); Pop(18)

0x7b: PushEmpty(int, string, int, string)
0x7c: PushEmpty(int, object)
0x7d: Stack[-1] = Stack[-7]
0x7e: Call2 0x27

0x7f: Stack[-4] = Stack[-2]
0x80: Pop(2)
0x81: @ GetInvItemName(Stack[-1], Stack[-2])
0x82: Pop(0)
0x83: Stack[-6] = Stack[-1]
0x84: Return(); Pop(4)

0x85: PushEmpty(float, float)
0x86: @ GetGameTime(Stack[-1])
0x87: Pop(0)
0x88: Push((int) 1)
0x89: PushEmpty(int)
0x8a: Push((int) 24)
0x8b: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x8c: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x8d: Return(); Pop(2)

0x8e: PushEmpty(float, int, bool, float, int, bool)
0x8f: Push((int) 0)
0x90: Pop(1); Push((bool) Stack[-8] != Stack[-1])
0x91: IF (Stack[-1] == 0) GOTO 0x94; Pop(1)

0x92: Stack[-10] = (int) 1
0x93: Return(); Pop(6)

0x94: Stack[-3] = (int) 1
0x95: Stack[-2] = (int) 1
0x96: Pop(0); Push((bool) Stack[-2] <= Stack[-8])
0x97: IF (Stack[-1] == 0) GOTO 0xa5; Pop(1)

0x98: Push("sellf")
0x99: Pop(1); Push(Stack[-1] + Stack[-3]);
0x9a: @@ HasProperty(Stack[-1], Stack[-2])
0x9b: Pop(1)
0x9c: Push(Stack[-1])
0x9d: IF (Stack[-1] == 0) GOTO 0xa2; Pop(1)

0x9e: Push("sellf")
0x9f: Pop(1); Push(Stack[-1] + Stack[-3]);
0xa0: @@ GetProperty(Stack[-1], Stack[-4])
0xa1: Pop(1)
0xa2: Push((int) 1)
0xa3: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0xa4: GOTO 0x96

0xa5: Push((int) 100)
0xa6: Stack[-11] = Stack[-4] / Stack[-1]; Pop(1);
0xa7: Return(); Pop(6)

0xa8: PushEmpty(float, int, bool, float, int, bool)
0xa9: Push((int) 0)
0xaa: Pop(1); Push((bool) Stack[-8] != Stack[-1])
0xab: IF (Stack[-1] == 0) GOTO 0xae; Pop(1)

0xac: Stack[-10] = (int) 1
0xad: Return(); Pop(6)

0xae: Stack[-3] = (int) 1
0xaf: Stack[-2] = (int) 1
0xb0: Pop(0); Push((bool) Stack[-2] <= Stack[-8])
0xb1: IF (Stack[-1] == 0) GOTO 0xbf; Pop(1)

0xb2: Push("buyf")
0xb3: Pop(1); Push(Stack[-1] + Stack[-3]);
0xb4: @@ HasProperty(Stack[-1], Stack[-2])
0xb5: Pop(1)
0xb6: Push(Stack[-1])
0xb7: IF (Stack[-1] == 0) GOTO 0xbc; Pop(1)

0xb8: Push("buyf")
0xb9: Pop(1); Push(Stack[-1] + Stack[-3]);
0xba: @@ GetProperty(Stack[-1], Stack[-4])
0xbb: Pop(1)
0xbc: Push((int) 1)
0xbd: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0xbe: GOTO 0xb0

0xbf: Push((int) 100)
0xc0: Stack[-11] = Stack[-4] / Stack[-1]; Pop(1);
0xc1: Return(); Pop(6)

0xc2: PushEmpty(object, bool, int, object, bool, int)
0xc3: @ GetContainer(Stack[-3])
0xc4: Pop(0)
0xc5: Push("barter")
0xc6: @@ HasProperty(Stack[-1], Stack[-3])
0xc7: Pop(1)
0xc8: Pop(0); Push((bool) Stack[-2] == 0)
0xc9: IF (Stack[-1] == 0) GOTO 0xcc; Pop(1)

0xca: Stack[-7] = (int) 0
0xcb: Return(); Pop(6)

0xcc: Push("barter")
0xcd: @@ GetProperty(Stack[-1], Stack[-2])
0xce: Pop(1)
0xcf: Stack[-7] = Stack[-1]
0xd0: Return(); Pop(6)

0xd1: Stack[-3] = 0
0xd2: PushEmpty()
0xd3: Push((int) 1)
0xd4: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0xd5: IF (Stack[-1] == 0) GOTO 0xdf; Pop(1)

0xd6: PushEmpty(int, int, object, string, float)
0xd7: Stack[-5] = Stack[-8]
0xd8: Stack[-4] = Stack[-7]
0xd9: Stack[-3] = Stack[-9]
0xda: Stack[-2] = Stack[-10]
0xdb: Stack[-1] = Stack[-6]
0xdc: Call2 0x155

0xdd: Pop(5)
0xde: GOTO 0x10d

0xdf: Push((int) 2)
0xe0: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0xe1: IF (Stack[-1] == 0) GOTO 0xea; Pop(1)

0xe2: PushEmpty(int, int, object, float)
0xe3: Stack[-4] = Stack[-7]
0xe4: Stack[-3] = Stack[-6]
0xe5: Stack[-2] = Stack[-8]
0xe6: Stack[-1] = Stack[-5]
0xe7: Call2 0x3c1

0xe8: Pop(4)
0xe9: GOTO 0x10d

0xea: Push((int) 3)
0xeb: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0xec: IF (Stack[-1] == 0) GOTO 0xf6; Pop(1)

0xed: PushEmpty(int, int, object, bool, float)
0xee: Stack[-5] = Stack[-8]
0xef: Stack[-4] = Stack[-7]
0xf0: Stack[-3] = Stack[-9]
0xf1: Stack[-2] = (bool) 1
0xf2: Stack[-1] = Stack[-6]
0xf3: Call2 0x27a

0xf4: Pop(5)
0xf5: GOTO 0x10d

0xf6: Push((int) 4)
0xf7: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0xf8: IF (Stack[-1] == 0) GOTO 0x102; Pop(1)

0xf9: PushEmpty(int, int, object, bool, float)
0xfa: Stack[-5] = Stack[-8]
0xfb: Stack[-4] = Stack[-7]
0xfc: Stack[-3] = Stack[-9]
0xfd: Stack[-2] = (bool) 0
0xfe: Stack[-1] = Stack[-6]
0xff: Call2 0x27a

0x100: Pop(5)
0x101: GOTO 0x10d

0x102: Push((int) 5)
0x103: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x104: IF (Stack[-1] == 0) GOTO 0x10d; Pop(1)

0x105: PushEmpty(int, int, string, object, float)
0x106: Stack[-5] = Stack[-8]
0x107: Stack[-4] = Stack[-7]
0x108: Stack[-3] = Stack[-10]
0x109: Stack[-2] = Stack[-9]
0x10a: Stack[-1] = Stack[-6]
0x10b: Call2 0x43c

0x10c: Pop(5)
0x10d: Return(); Pop(0)

0x10e: PushEmpty()
0x10f: Push("bg")
0x110: @ BlitClipped(Stack[-1], Stack[-6], Stack[-5], Stack[-6], Stack[-5], Stack[-4], Stack[-3], Stack[-2])
0x111: Pop(1)
0x112: Push("border")
0x113: Push((int) 1)
0x114: @ StretchBlit(Stack[-2], Stack[-7], Stack[-6], Stack[-5], Stack[-1], Stack[-3])
0x115: Pop(2)
0x116: Push("border")
0x117: Pop(0); Push(Stack[-5] + Stack[-3]);
0x118: Push((int) 1)
0x119: Pop(2); Push(Stack[-2] - Stack[-1]);
0x11a: Push((int) 1)
0x11b: @ StretchBlit(Stack[-3], Stack[-8], Stack[-2], Stack[-6], Stack[-1], Stack[-4])
0x11c: Pop(3)
0x11d: Push("border")
0x11e: Push((int) 1)
0x11f: @ StretchBlit(Stack[-2], Stack[-7], Stack[-6], Stack[-1], Stack[-4], Stack[-3])
0x120: Pop(2)
0x121: Push("border")
0x122: Pop(0); Push(Stack[-6] + Stack[-4]);
0x123: Push((int) 1)
0x124: Pop(2); Push(Stack[-2] - Stack[-1]);
0x125: Push((int) 1)
0x126: @ StretchBlit(Stack[-3], Stack[-2], Stack[-7], Stack[-1], Stack[-5], Stack[-4])
0x127: Pop(3)
0x128: Return(); Pop(0)

0x129: PushEmpty(int, string, int, string)
0x12a: Pop(0); Push((bool) Stack[-6] == 0)
0x12b: IF (Stack[-1] == 0) GOTO 0x12d; Pop(1)

0x12c: Return(); Pop(4)

0x12d: PushEmpty(int, object)
0x12e: Stack[-1] = Stack[-8]
0x12f: Call2 0x27

0x130: Stack[-4] = Stack[-2]
0x131: Pop(2)
0x132: @ GetInvItemSprite2(Stack[-1], Stack[-2])
0x133: Pop(0)
0x134: Push((int) 218)
0x135: Push((int) 218)
0x136: @ StretchBlit(Stack[-3], Stack[-10], Stack[-9], Stack[-2], Stack[-1], Stack[-7])
0x137: Pop(2)
0x138: Push("border")
0x139: Push((int) 218)
0x13a: Push((int) 1)
0x13b: @ StretchBlit(Stack[-3], Stack[-11], Stack[-10], Stack[-2], Stack[-1], Stack[-8])
0x13c: Pop(3)
0x13d: Push("border")
0x13e: Push((int) 218)
0x13f: Pop(1); Push(Stack[-9] + Stack[-1]);
0x140: Push((int) 1)
0x141: Pop(2); Push(Stack[-2] - Stack[-1]);
0x142: Push((int) 218)
0x143: Push((int) 1)
0x144: @ StretchBlit(Stack[-4], Stack[-12], Stack[-3], Stack[-2], Stack[-1], Stack[-9])
0x145: Pop(4)
0x146: Push("border")
0x147: Push((int) 1)
0x148: Push((int) 218)
0x149: @ StretchBlit(Stack[-3], Stack[-11], Stack[-10], Stack[-2], Stack[-1], Stack[-8])
0x14a: Pop(3)
0x14b: Push("border")
0x14c: Push((int) 218)
0x14d: Pop(1); Push(Stack[-10] + Stack[-1]);
0x14e: Push((int) 1)
0x14f: Pop(2); Push(Stack[-2] - Stack[-1]);
0x150: Push((int) 1)
0x151: Push((int) 218)
0x152: @ StretchBlit(Stack[-4], Stack[-3], Stack[-11], Stack[-2], Stack[-1], Stack[-9])
0x153: Pop(4)
0x154: Return(); Pop(4)

0x155: PushEmpty(int, string, string, string, bool, int, int, int, bool, bool, int, int, bool, bool, int, int, string, bool, float, float, string, string, string, int, int, float, float, float, float, string, string, int, int, int, int, int, int, int, string, string, string, bool, int, int, int, bool, bool, int, int, bool, bool, int, int, string, bool, float, float, string, string, string, int, int, float, float, float, float, string, string, int, int, int, int, int, int)
0x156: Pop(0); Push((bool) Stack[-77] == 0)
0x157: IF (Stack[-1] == 0) GOTO 0x159; Pop(1)

0x158: Return(); Pop(74)

0x159: PushEmpty(int, object)
0x15a: Stack[-1] = Stack[-79]
0x15b: Call2 0x27

0x15c: Stack[-39] = Stack[-2]
0x15d: Pop(2)
0x15e: Push("Description")
0x15f: @ HasInvItemProperty(Stack[-34], Stack[-38], Stack[-1])
0x160: Pop(1)
0x161: Push(Stack[-33])
0x162: IF (Stack[-1] == 0) GOTO 0x169; Pop(1)

0x163: Push("Description")
0x164: @ GetInvItemProperty(Stack[-33], Stack[-38], Stack[-1])
0x165: Pop(1)
0x166: @ GetStringByID(Stack[-36], Stack[-32])
0x167: Pop(0)
0x168: GOTO 0x16a

0x169: Stack[-36] = "Error: Item doesnt have description (FIXME!)"
0x16a: Push("default")
0x16b: Push((int) 268)
0x16c: @ GetTextHeightInWidth(Stack[-33], Stack[-2], Stack[-1], Stack[-38])
0x16d: Pop(2)
0x16e: Push("default")
0x16f: @ GetFontHeight(Stack[-31], Stack[-1])
0x170: Pop(1)
0x171: Stack[-31] = Stack[-31] + Stack[-30]; Pop(0);
0x172: Push("HasDurability")
0x173: @ HasInvItemProperty(Stack[-30], Stack[-38], Stack[-1])
0x174: Pop(1)
0x175: Push("durability")
0x176: @@ HasProperty(Stack[-29], Stack[-1])
0x177: Pop(1)
0x178: PushEmpty(bool)
0x179: Stack[-1] = (bool) 1
0x17a: Push(Stack[-29])
0x17b: IF (Stack[-1] == 0) GOTO 0x17f; Pop(1)

0x17c: Push(Stack[-30])
0x17d: IF (Stack[-1] == 0) GOTO 0x17f; Pop(1)

0x17e: Stack[-1] = (bool) 0
0x17f: IF (Stack[-1] == 0) GOTO 0x196; Pop(1)

0x180: Push(Stack[-28])
0x181: IF (Stack[-1] == 0) GOTO 0x186; Pop(1)

0x182: Push("durability")
0x183: @@ GetProperty(Stack[-28], Stack[-1])
0x184: Pop(1)
0x185: GOTO 0x187

0x186: Stack[-27] = (int) 100
0x187: Push((int) 7)
0x188: @ GetStringByID(Stack[-36], Stack[-1])
0x189: Pop(1)
0x18a: Push(" ")
0x18b: Pop(1); Push(Stack[-1] + Stack[-28]);
0x18c: Push("%")
0x18d: Pop(2); Push(Stack[-2] + Stack[-1]);
0x18e: Stack[-36] = Stack[-36] + Stack[-1]; Pop(1);
0x18f: Push("default")
0x190: Push((int) 268)
0x191: @ GetTextHeightInWidth(Stack[-28], Stack[-2], Stack[-1], Stack[-37])
0x192: Pop(2)
0x193: Push((int) 2)
0x194: Pop(1); Push(Stack[-27] * Stack[-1]);
0x195: Stack[-32] = Stack[-32] + Stack[-1]; Pop(1);
0x196: Push("HasUses")
0x197: @ HasInvItemProperty(Stack[-26], Stack[-38], Stack[-1])
0x198: Pop(1)
0x199: Push("uses")
0x19a: @@ HasProperty(Stack[-25], Stack[-1])
0x19b: Pop(1)
0x19c: PushEmpty(bool)
0x19d: Stack[-1] = (bool) 1
0x19e: Push(Stack[-25])
0x19f: IF (Stack[-1] == 0) GOTO 0x1a3; Pop(1)

0x1a0: Push(Stack[-26])
0x1a1: IF (Stack[-1] == 0) GOTO 0x1a3; Pop(1)

0x1a2: Stack[-1] = (bool) 0
0x1a3: IF (Stack[-1] == 0) GOTO 0x1b6; Pop(1)

0x1a4: Push(Stack[-24])
0x1a5: IF (Stack[-1] == 0) GOTO 0x1aa; Pop(1)

0x1a6: Push("uses")
0x1a7: @@ GetProperty(Stack[-24], Stack[-1])
0x1a8: Pop(1)
0x1a9: GOTO 0x1ab

0x1aa: Stack[-23] = (int) 1
0x1ab: Push((int) 1006)
0x1ac: @ GetStringByID(Stack[-35], Stack[-1])
0x1ad: Pop(1)
0x1ae: Push(" ")
0x1af: Pop(1); Push(Stack[-1] + Stack[-24]);
0x1b0: Stack[-35] = Stack[-35] + Stack[-1]; Pop(1);
0x1b1: Push("default")
0x1b2: Push((int) 268)
0x1b3: @ GetTextHeightInWidth(Stack[-24], Stack[-2], Stack[-1], Stack[-36])
0x1b4: Pop(2)
0x1b5: Stack[-31] = Stack[-31] + Stack[-22]; Pop(0);
0x1b6: Stack[-20] = (bool) 0
0x1b7: PushEmpty(string, object)
0x1b8: Stack[-1] = Stack[-79]
0x1b9: Call2 0x7b

0x1ba: Pop(1)
0x1bb: Push("grass_combination")
0x1bc: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1bd: IF (Stack[-1] == 0) GOTO 0x1e0; Pop(1)

0x1be: Stack[-20] = (bool) 1
0x1bf: Push("im_inc")
0x1c0: @@ GetProperty(Stack[-20], Stack[-1])
0x1c1: Pop(1)
0x1c2: Push("hl_inc")
0x1c3: @@ GetProperty(Stack[-19], Stack[-1])
0x1c4: Pop(1)
0x1c5: Push((int) 8)
0x1c6: @ GetStringByID(Stack[-18], Stack[-1])
0x1c7: Pop(1)
0x1c8: Push((int) 9)
0x1c9: @ GetStringByID(Stack[-16], Stack[-1])
0x1ca: Pop(1)
0x1cb: Push((int) 100)
0x1cc: Stack[-15] = Stack[-20] * Stack[-1]; Pop(1);
0x1cd: Push(" ")
0x1ce: Pop(1); Push(Stack[-18] + Stack[-1]);
0x1cf: Pop(1); Push(Stack[-1] + Stack[-15]);
0x1d0: Push("%
")
0x1d1: Stack[-23] = Stack[-2] + Stack[-1]; Pop(2);
0x1d2: Push((int) 100)
0x1d3: Stack[-15] = Stack[-19] * Stack[-1]; Pop(1);
0x1d4: Push(" ")
0x1d5: Pop(1); Push(Stack[-16] + Stack[-1]);
0x1d6: Pop(1); Push(Stack[-1] + Stack[-15]);
0x1d7: Push("%
")
0x1d8: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1d9: Stack[-22] = Stack[-22] + Stack[-1]; Pop(1);
0x1da: Push("default")
0x1db: Push((int) 268)
0x1dc: @ GetTextHeightInWidth(Stack[-15], Stack[-2], Stack[-1], Stack[-23])
0x1dd: Pop(2)
0x1de: Stack[-31] = Stack[-31] + Stack[-13]; Pop(0);
0x1df: GOTO 0x208

0x1e0: PushEmpty(string, object)
0x1e1: Stack[-1] = Stack[-79]
0x1e2: Call2 0x7b

0x1e3: Pop(1)
0x1e4: Push("organ_combination")
0x1e5: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1e6: IF (Stack[-1] == 0) GOTO 0x208; Pop(1)

0x1e7: Stack[-20] = (bool) 1
0x1e8: Push("DiseaseRate")
0x1e9: @@ GetProperty(Stack[-13], Stack[-1])
0x1ea: Pop(1)
0x1eb: Push("HealthIncrease")
0x1ec: @@ GetProperty(Stack[-11], Stack[-1])
0x1ed: Pop(1)
0x1ee: Push((int) 11)
0x1ef: @ GetStringByID(Stack[-9], Stack[-1])
0x1f0: Pop(1)
0x1f1: Push((int) 13)
0x1f2: @ GetStringByID(Stack[-8], Stack[-1])
0x1f3: Pop(1)
0x1f4: Push((int) 100)
0x1f5: Stack[-7] = Stack[-13] * Stack[-1]; Pop(1);
0x1f6: Push(" ")
0x1f7: Pop(1); Push(Stack[-9] + Stack[-1]);
0x1f8: Pop(1); Push(Stack[-1] + Stack[-7]);
0x1f9: Push("%
")
0x1fa: Stack[-23] = Stack[-2] + Stack[-1]; Pop(2);
0x1fb: Push((int) 100)
0x1fc: Stack[-7] = Stack[-11] * Stack[-1]; Pop(1);
0x1fd: Push(" ")
0x1fe: Pop(1); Push(Stack[-8] + Stack[-1]);
0x1ff: Pop(1); Push(Stack[-1] + Stack[-7]);
0x200: Push("%
")
0x201: Pop(2); Push(Stack[-2] + Stack[-1]);
0x202: Stack[-22] = Stack[-22] + Stack[-1]; Pop(1);
0x203: Push("default")
0x204: Push((int) 268)
0x205: @ GetTextHeightInWidth(Stack[-7], Stack[-2], Stack[-1], Stack[-23])
0x206: Pop(2)
0x207: Stack[-31] = Stack[-31] + Stack[-5]; Pop(0);
0x208: @ GetScreenSize(Stack[-4], Stack[-3])
0x209: Pop(0)
0x20a: Push((int) 266)
0x20b: Stack[-32] = Stack[-32] + Stack[-1]; Pop(1);
0x20c: Pop(0); Push(Stack[-4] - Stack[-79]);
0x20d: Push((int) 300)
0x20e: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x20f: IF (Stack[-1] == 0) GOTO 0x212; Pop(1)

0x210: Stack[-2] = Stack[-79]
0x211: GOTO 0x214

0x212: Push((int) 300)
0x213: Stack[-3] = Stack[-80] - Stack[-1]; Pop(1);
0x214: Pop(0); Push((bool) Stack[-78] > Stack[-31])
0x215: IF (Stack[-1] == 0) GOTO 0x218; Pop(1)

0x216: Stack[-1] = Stack[-78] - Stack[-31]; Pop(0);
0x217: GOTO 0x21f

0x218: Stack[-1] = Stack[-78]
0x219: Pop(0); Push(Stack[-1] + Stack[-31]);
0x21a: Push((int) 600)
0x21b: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x21c: IF (Stack[-1] == 0) GOTO 0x21f; Pop(1)

0x21d: Push((int) 600)
0x21e: Stack[-2] = Stack[-1] - Stack[-32]; Pop(1);
0x21f: @ ScreenToClient(Stack[-2], Stack[-1])
0x220: Pop(0)
0x221: PushEmpty(int, int, int, int, float)
0x222: Stack[-5] = Stack[-7]
0x223: Stack[-4] = Stack[-6]
0x224: Stack[-3] = (int) 300
0x225: Stack[-2] = Stack[-36]
0x226: Stack[-1] = Stack[-80]
0x227: Call2 0x10e

0x228: Pop(5)
0x229: PushEmpty(int, int, object, float)
0x22a: Push((int) 41)
0x22b: Stack[-5] = Stack[-7] + Stack[-1]; Pop(1);
0x22c: Push((int) 16)
0x22d: Stack[-4] = Stack[-6] + Stack[-1]; Pop(1);
0x22e: Stack[-2] = Stack[-81]
0x22f: Stack[-1] = Stack[-79]
0x230: Call2 0x129

0x231: Pop(4)
0x232: Push((int) 250)
0x233: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x234: Push("default")
0x235: Push((int) 16)
0x236: Pop(1); Push(Stack[-4] + Stack[-1]);
0x237: Push((int) 268)
0x238: Push((float)0.64706)
0x239: Push((float)0.64706)
0x23a: Push((float)0.64706)
0x23b: @ PrintInWidth(Stack[-37], Stack[-6], Stack[-5], Stack[-7], Stack[-4], Stack[-42], Stack[-3], Stack[-2], Stack[-1], Stack[-81])
0x23c: Pop(6)
0x23d: Pop(0); Push(Stack[-31] + Stack[-30]);
0x23e: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x23f: PushEmpty(bool)
0x240: Stack[-1] = (bool) 1
0x241: Push(Stack[-29])
0x242: IF (Stack[-1] == 0) GOTO 0x246; Pop(1)

0x243: Push(Stack[-30])
0x244: IF (Stack[-1] == 0) GOTO 0x246; Pop(1)

0x245: Stack[-1] = (bool) 0
0x246: IF (Stack[-1] == 0) GOTO 0x251; Pop(1)

0x247: Push("default")
0x248: Push((int) 16)
0x249: Pop(1); Push(Stack[-4] + Stack[-1]);
0x24a: Push((int) 268)
0x24b: Push((float)0.64706)
0x24c: Push((float)0.64706)
0x24d: Push((float)0.64706)
0x24e: @ PrintInWidth(Stack[-37], Stack[-6], Stack[-5], Stack[-7], Stack[-4], Stack[-41], Stack[-3], Stack[-2], Stack[-1], Stack[-81])
0x24f: Pop(6)
0x250: Stack[-1] = Stack[-1] + Stack[-31]; Pop(0);
0x251: PushEmpty(bool)
0x252: Stack[-1] = (bool) 1
0x253: Push(Stack[-25])
0x254: IF (Stack[-1] == 0) GOTO 0x258; Pop(1)

0x255: Push(Stack[-26])
0x256: IF (Stack[-1] == 0) GOTO 0x258; Pop(1)

0x257: Stack[-1] = (bool) 0
0x258: IF (Stack[-1] == 0) GOTO 0x263; Pop(1)

0x259: Push("default")
0x25a: Push((int) 16)
0x25b: Pop(1); Push(Stack[-4] + Stack[-1]);
0x25c: Push((int) 268)
0x25d: Push((float)0.64706)
0x25e: Push((float)0.64706)
0x25f: Push((float)0.64706)
0x260: @ PrintInWidth(Stack[-37], Stack[-6], Stack[-5], Stack[-7], Stack[-4], Stack[-40], Stack[-3], Stack[-2], Stack[-1], Stack[-81])
0x261: Pop(6)
0x262: Stack[-1] = Stack[-1] + Stack[-31]; Pop(0);
0x263: Push(Stack[-20])
0x264: IF (Stack[-1] == 0) GOTO 0x26f; Pop(1)

0x265: Push("default")
0x266: Push((int) 16)
0x267: Pop(1); Push(Stack[-4] + Stack[-1]);
0x268: Push((int) 268)
0x269: Push((float)0.64706)
0x26a: Push((float)0.64706)
0x26b: Push((float)0.64706)
0x26c: @ PrintInWidth(Stack[-37], Stack[-6], Stack[-5], Stack[-7], Stack[-4], Stack[-27], Stack[-3], Stack[-2], Stack[-1], Stack[-81])
0x26d: Pop(6)
0x26e: Stack[-1] = Stack[-1] + Stack[-31]; Pop(0);
0x26f: Push("default")
0x270: Push((int) 16)
0x271: Pop(1); Push(Stack[-4] + Stack[-1]);
0x272: Push((int) 268)
0x273: Push((float)0.64706)
0x274: Push((float)0.64706)
0x275: Push((float)0.64706)
0x276: @ PrintInWidth(Stack[-37], Stack[-6], Stack[-5], Stack[-7], Stack[-4], Stack[-82], Stack[-3], Stack[-2], Stack[-1], Stack[-81])
0x277: Pop(6)
0x278: Stack[-1] = Stack[-1] + Stack[-31]; Pop(0);
0x279: Return(); Pop(74)

0x27a: PushEmpty(object, float, int, int, int, float, string, bool, int, string, int, string, bool, bool, int, int, string, bool, bool, int, int, string, bool, float, float, float, string, string, string, int, int, float, float, string, string, int, int, int, int, int, int, object, float, int, int, int, float, string, bool, int, string, int, string, bool, bool, int, int, string, bool, bool, int, int, string, bool, float, float, float, string, string, string, int, int, float, float, string, string, int, int, int, int, int, int)
0x27b: Pop(0); Push((bool) Stack[-85] == 0)
0x27c: IF (Stack[-1] == 0) GOTO 0x27e; Pop(1)

0x27d: Return(); Pop(82)

0x27e: @ GetContainer(Stack[-41])
0x27f: Pop(0)
0x280: @ GetGameTime(Stack[-40])
0x281: Pop(0)
0x282: Push((int) 1)
0x283: Push((int) 24)
0x284: Pop(1); Push(Stack[-42] / Stack[-1]);
0x285: Stack[-41] = Stack[-2] + Stack[-1]; Pop(2);
0x286: PushEmpty(int, object)
0x287: Stack[-1] = Stack[-87]
0x288: Call2 0x27

0x289: Stack[-40] = Stack[-2]
0x28a: Pop(2)
0x28b: PushEmpty(int, object, int)
0x28c: Stack[-2] = Stack[-88]
0x28d: PushEmpty(int)
0x28e: Call2 0xc2

0x28f: Stack[-2] = Stack[-1]
0x290: Pop(1)
0x291: Call2 0x2c

0x292: Stack[-40] = Stack[-3]
0x293: Pop(3)
0x294: Push(Stack[-84])
0x295: IF (Stack[-1] == 0) GOTO 0x2a1; Pop(1)

0x296: PushEmpty(float, object, int, int)
0x297: Stack[-3] = Stack[-45]
0x298: Stack[-2] = Stack[-43]
0x299: PushEmpty(int)
0x29a: Call2 0xc2

0x29b: Stack[-2] = Stack[-1]
0x29c: Pop(1)
0x29d: Call2 0x8e

0x29e: Stack[-40] = Stack[-4]
0x29f: Pop(4)
0x2a0: GOTO 0x2ab

0x2a1: PushEmpty(float, object, int, int)
0x2a2: Stack[-3] = Stack[-45]
0x2a3: Stack[-2] = Stack[-43]
0x2a4: PushEmpty(int)
0x2a5: Call2 0xc2

0x2a6: Stack[-2] = Stack[-1]
0x2a7: Pop(1)
0x2a8: Call2 0xa8

0x2a9: Stack[-40] = Stack[-4]
0x2aa: Pop(4)
0x2ab: Stack[-37] = Stack[-37] * Stack[-36]; Pop(0);
0x2ac: Push("Description")
0x2ad: @ HasInvItemProperty(Stack[-35], Stack[-39], Stack[-1])
0x2ae: Pop(1)
0x2af: Push(Stack[-34])
0x2b0: IF (Stack[-1] == 0) GOTO 0x2b7; Pop(1)

0x2b1: Push("Description")
0x2b2: @ GetInvItemProperty(Stack[-34], Stack[-39], Stack[-1])
0x2b3: Pop(1)
0x2b4: @ GetStringByID(Stack[-35], Stack[-33])
0x2b5: Pop(0)
0x2b6: GOTO 0x2b8

0x2b7: Stack[-35] = "Error: Item doesnt have description (FIXME!)"
0x2b8: Push("
")
0x2b9: Stack[-36] = Stack[-36] + Stack[-1]; Pop(1);
0x2ba: Push((int) 5)
0x2bb: @ GetStringByID(Stack[-33], Stack[-1])
0x2bc: Pop(1)
0x2bd: Push(": ")
0x2be: Pop(1); Push(Stack[-33] + Stack[-1]);
0x2bf: Pop(1); Push(Stack[-1] + Stack[-38]);
0x2c0: Stack[-36] = Stack[-36] + Stack[-1]; Pop(1);
0x2c1: Push("default")
0x2c2: Push((int) 268)
0x2c3: @ GetTextHeightInWidth(Stack[-33], Stack[-2], Stack[-1], Stack[-37])
0x2c4: Pop(2)
0x2c5: Push((int) 266)
0x2c6: Stack[-32] = Stack[-32] + Stack[-1]; Pop(1);
0x2c7: Push("HasDurability")
0x2c8: @ HasInvItemProperty(Stack[-30], Stack[-39], Stack[-1])
0x2c9: Pop(1)
0x2ca: Push("durability")
0x2cb: @@ HasProperty(Stack[-29], Stack[-1])
0x2cc: Pop(1)
0x2cd: PushEmpty(bool)
0x2ce: Stack[-1] = (bool) 1
0x2cf: Push(Stack[-29])
0x2d0: IF (Stack[-1] == 0) GOTO 0x2d4; Pop(1)

0x2d1: Push(Stack[-30])
0x2d2: IF (Stack[-1] == 0) GOTO 0x2d4; Pop(1)

0x2d3: Stack[-1] = (bool) 0
0x2d4: IF (Stack[-1] == 0) GOTO 0x2e9; Pop(1)

0x2d5: Push(Stack[-28])
0x2d6: IF (Stack[-1] == 0) GOTO 0x2db; Pop(1)

0x2d7: Push("durability")
0x2d8: @@ GetProperty(Stack[-28], Stack[-1])
0x2d9: Pop(1)
0x2da: GOTO 0x2dc

0x2db: Stack[-27] = (int) 100
0x2dc: Push((int) 7)
0x2dd: @ GetStringByID(Stack[-31], Stack[-1])
0x2de: Pop(1)
0x2df: Push(" ")
0x2e0: Pop(1); Push(Stack[-1] + Stack[-28]);
0x2e1: Push("%")
0x2e2: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2e3: Stack[-31] = Stack[-31] + Stack[-1]; Pop(1);
0x2e4: Push("default")
0x2e5: Push((int) 268)
0x2e6: @ GetTextHeightInWidth(Stack[-28], Stack[-2], Stack[-1], Stack[-32])
0x2e7: Pop(2)
0x2e8: Stack[-31] = Stack[-31] + Stack[-26]; Pop(0);
0x2e9: Push("HasUses")
0x2ea: @ HasInvItemProperty(Stack[-25], Stack[-39], Stack[-1])
0x2eb: Pop(1)
0x2ec: Push("uses")
0x2ed: @@ HasProperty(Stack[-24], Stack[-1])
0x2ee: Pop(1)
0x2ef: PushEmpty(bool)
0x2f0: Stack[-1] = (bool) 1
0x2f1: Push(Stack[-24])
0x2f2: IF (Stack[-1] == 0) GOTO 0x2f6; Pop(1)

0x2f3: Push(Stack[-25])
0x2f4: IF (Stack[-1] == 0) GOTO 0x2f6; Pop(1)

0x2f5: Stack[-1] = (bool) 0
0x2f6: IF (Stack[-1] == 0) GOTO 0x309; Pop(1)

0x2f7: Push(Stack[-23])
0x2f8: IF (Stack[-1] == 0) GOTO 0x2fd; Pop(1)

0x2f9: Push("uses")
0x2fa: @@ GetProperty(Stack[-23], Stack[-1])
0x2fb: Pop(1)
0x2fc: GOTO 0x2fe

0x2fd: Stack[-22] = (int) 1
0x2fe: Push((int) 1006)
0x2ff: @ GetStringByID(Stack[-26], Stack[-1])
0x300: Pop(1)
0x301: Push(" ")
0x302: Pop(1); Push(Stack[-1] + Stack[-23]);
0x303: Stack[-26] = Stack[-26] + Stack[-1]; Pop(1);
0x304: Push("default")
0x305: Push((int) 268)
0x306: @ GetTextHeightInWidth(Stack[-23], Stack[-2], Stack[-1], Stack[-27])
0x307: Pop(2)
0x308: Stack[-31] = Stack[-31] + Stack[-21]; Pop(0);
0x309: Stack[-19] = (bool) 0
0x30a: PushEmpty(string, object)
0x30b: Stack[-1] = Stack[-87]
0x30c: Call2 0x7b

0x30d: Pop(1)
0x30e: Push("grass_combination")
0x30f: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x310: IF (Stack[-1] == 0) GOTO 0x333; Pop(1)

0x311: Stack[-19] = (bool) 1
0x312: Push("im_inc")
0x313: @@ GetProperty(Stack[-19], Stack[-1])
0x314: Pop(1)
0x315: Push("hl_inc")
0x316: @@ GetProperty(Stack[-18], Stack[-1])
0x317: Pop(1)
0x318: Push((int) 8)
0x319: @ GetStringByID(Stack[-16], Stack[-1])
0x31a: Pop(1)
0x31b: Push((int) 9)
0x31c: @ GetStringByID(Stack[-14], Stack[-1])
0x31d: Pop(1)
0x31e: Push((int) 100)
0x31f: Stack[-13] = Stack[-19] * Stack[-1]; Pop(1);
0x320: Push(" ")
0x321: Pop(1); Push(Stack[-16] + Stack[-1]);
0x322: Pop(1); Push(Stack[-1] + Stack[-13]);
0x323: Push("%
")
0x324: Stack[-22] = Stack[-2] + Stack[-1]; Pop(2);
0x325: Push((int) 100)
0x326: Stack[-13] = Stack[-18] * Stack[-1]; Pop(1);
0x327: Push(" ")
0x328: Pop(1); Push(Stack[-14] + Stack[-1]);
0x329: Pop(1); Push(Stack[-1] + Stack[-13]);
0x32a: Push("%
")
0x32b: Pop(2); Push(Stack[-2] + Stack[-1]);
0x32c: Stack[-21] = Stack[-21] + Stack[-1]; Pop(1);
0x32d: Push("default")
0x32e: Push((int) 268)
0x32f: @ GetTextHeightInWidth(Stack[-13], Stack[-2], Stack[-1], Stack[-22])
0x330: Pop(2)
0x331: Stack[-31] = Stack[-31] + Stack[-11]; Pop(0);
0x332: GOTO 0x35b

0x333: PushEmpty(string, object)
0x334: Stack[-1] = Stack[-87]
0x335: Call2 0x7b

0x336: Pop(1)
0x337: Push("organ_combination")
0x338: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x339: IF (Stack[-1] == 0) GOTO 0x35b; Pop(1)

0x33a: Stack[-19] = (bool) 1
0x33b: Push("DiseaseRate")
0x33c: @@ GetProperty(Stack[-11], Stack[-1])
0x33d: Pop(1)
0x33e: Push("HealthIncrease")
0x33f: @@ GetProperty(Stack[-10], Stack[-1])
0x340: Pop(1)
0x341: Push((int) 11)
0x342: @ GetStringByID(Stack[-9], Stack[-1])
0x343: Pop(1)
0x344: Push((int) 13)
0x345: @ GetStringByID(Stack[-8], Stack[-1])
0x346: Pop(1)
0x347: Push((int) 100)
0x348: Stack[-7] = Stack[-11] * Stack[-1]; Pop(1);
0x349: Push(" ")
0x34a: Pop(1); Push(Stack[-9] + Stack[-1]);
0x34b: Pop(1); Push(Stack[-1] + Stack[-7]);
0x34c: Push("%
")
0x34d: Stack[-22] = Stack[-2] + Stack[-1]; Pop(2);
0x34e: Push((int) 100)
0x34f: Stack[-7] = Stack[-10] * Stack[-1]; Pop(1);
0x350: Push(" ")
0x351: Pop(1); Push(Stack[-8] + Stack[-1]);
0x352: Pop(1); Push(Stack[-1] + Stack[-7]);
0x353: Push("%
")
0x354: Pop(2); Push(Stack[-2] + Stack[-1]);
0x355: Stack[-21] = Stack[-21] + Stack[-1]; Pop(1);
0x356: Push("default")
0x357: Push((int) 268)
0x358: @ GetTextHeightInWidth(Stack[-7], Stack[-2], Stack[-1], Stack[-22])
0x359: Pop(2)
0x35a: Stack[-31] = Stack[-31] + Stack[-5]; Pop(0);
0x35b: @ GetScreenSize(Stack[-4], Stack[-3])
0x35c: Pop(0)
0x35d: Pop(0); Push(Stack[-4] - Stack[-87]);
0x35e: Push((int) 300)
0x35f: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x360: IF (Stack[-1] == 0) GOTO 0x363; Pop(1)

0x361: Stack[-2] = Stack[-87]
0x362: GOTO 0x365

0x363: Push((int) 300)
0x364: Stack[-3] = Stack[-88] - Stack[-1]; Pop(1);
0x365: Pop(0); Push((bool) Stack[-86] > Stack[-31])
0x366: IF (Stack[-1] == 0) GOTO 0x369; Pop(1)

0x367: Stack[-1] = Stack[-86] - Stack[-31]; Pop(0);
0x368: GOTO 0x370

0x369: Stack[-1] = Stack[-86]
0x36a: Pop(0); Push(Stack[-1] + Stack[-31]);
0x36b: Push((int) 600)
0x36c: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x36d: IF (Stack[-1] == 0) GOTO 0x370; Pop(1)

0x36e: Push((int) 600)
0x36f: Stack[-2] = Stack[-1] - Stack[-32]; Pop(1);
0x370: @ ScreenToClient(Stack[-2], Stack[-1])
0x371: Pop(0)
0x372: PushEmpty(int, int, int, int, float)
0x373: Stack[-5] = Stack[-7]
0x374: Stack[-4] = Stack[-6]
0x375: Stack[-3] = (int) 300
0x376: Stack[-2] = Stack[-36]
0x377: Stack[-1] = Stack[-88]
0x378: Call2 0x10e

0x379: Pop(5)
0x37a: PushEmpty(int, int, object, float)
0x37b: Push((int) 16)
0x37c: Stack[-5] = Stack[-7] + Stack[-1]; Pop(1);
0x37d: Push((int) 16)
0x37e: Stack[-4] = Stack[-6] + Stack[-1]; Pop(1);
0x37f: Stack[-2] = Stack[-89]
0x380: Stack[-1] = Stack[-87]
0x381: Call2 0x129

0x382: Pop(4)
0x383: Push((int) 250)
0x384: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x385: Push("default")
0x386: Push((int) 16)
0x387: Pop(1); Push(Stack[-4] + Stack[-1]);
0x388: Push((int) 268)
0x389: Push((float)0.64706)
0x38a: Push((float)0.64706)
0x38b: Push((float)0.64706)
0x38c: @ PrintInWidth(Stack[-37], Stack[-6], Stack[-5], Stack[-7], Stack[-4], Stack[-41], Stack[-3], Stack[-2], Stack[-1], Stack[-89])
0x38d: Pop(6)
0x38e: Stack[-1] = Stack[-1] + Stack[-31]; Pop(0);
0x38f: PushEmpty(bool)
0x390: Stack[-1] = (bool) 1
0x391: Push(Stack[-29])
0x392: IF (Stack[-1] == 0) GOTO 0x396; Pop(1)

0x393: Push(Stack[-30])
0x394: IF (Stack[-1] == 0) GOTO 0x396; Pop(1)

0x395: Stack[-1] = (bool) 0
0x396: IF (Stack[-1] == 0) GOTO 0x3a1; Pop(1)

0x397: Push("default")
0x398: Push((int) 16)
0x399: Pop(1); Push(Stack[-4] + Stack[-1]);
0x39a: Push((int) 268)
0x39b: Push((float)0.64706)
0x39c: Push((float)0.64706)
0x39d: Push((float)0.64706)
0x39e: @ PrintInWidth(Stack[-37], Stack[-6], Stack[-5], Stack[-7], Stack[-4], Stack[-36], Stack[-3], Stack[-2], Stack[-1], Stack[-89])
0x39f: Pop(6)
0x3a0: Stack[-1] = Stack[-1] + Stack[-31]; Pop(0);
0x3a1: PushEmpty(bool)
0x3a2: Stack[-1] = (bool) 1
0x3a3: Push(Stack[-24])
0x3a4: IF (Stack[-1] == 0) GOTO 0x3a8; Pop(1)

0x3a5: Push(Stack[-25])
0x3a6: IF (Stack[-1] == 0) GOTO 0x3a8; Pop(1)

0x3a7: Stack[-1] = (bool) 0
0x3a8: IF (Stack[-1] == 0) GOTO 0x3b3; Pop(1)

0x3a9: Push("default")
0x3aa: Push((int) 16)
0x3ab: Pop(1); Push(Stack[-4] + Stack[-1]);
0x3ac: Push((int) 268)
0x3ad: Push((float)0.64706)
0x3ae: Push((float)0.64706)
0x3af: Push((float)0.64706)
0x3b0: @ PrintInWidth(Stack[-37], Stack[-6], Stack[-5], Stack[-7], Stack[-4], Stack[-31], Stack[-3], Stack[-2], Stack[-1], Stack[-89])
0x3b1: Pop(6)
0x3b2: Stack[-1] = Stack[-1] + Stack[-31]; Pop(0);
0x3b3: Push(Stack[-19])
0x3b4: IF (Stack[-1] == 0) GOTO 0x3bf; Pop(1)

0x3b5: Push("default")
0x3b6: Push((int) 16)
0x3b7: Pop(1); Push(Stack[-4] + Stack[-1]);
0x3b8: Push((int) 268)
0x3b9: Push((float)0.64706)
0x3ba: Push((float)0.64706)
0x3bb: Push((float)0.64706)
0x3bc: @ PrintInWidth(Stack[-37], Stack[-6], Stack[-5], Stack[-7], Stack[-4], Stack[-26], Stack[-3], Stack[-2], Stack[-1], Stack[-89])
0x3bd: Pop(6)
0x3be: Stack[-1] = Stack[-1] + Stack[-31]; Pop(0);
0x3bf: Return(); Pop(82)

0x3c0: Stack[-41] = 0
0x3c1: PushEmpty(int, object, string, string, int, int, float, int, float, float, int, int, int, int, int, int, int, int, object, string, string, int, int, float, int, float, float, int, int, int, int, int, int, int)
0x3c2: Pop(0); Push((bool) Stack[-36] == 0)
0x3c3: IF (Stack[-1] == 0) GOTO 0x3c5; Pop(1)

0x3c4: Return(); Pop(34)

0x3c5: Stack[-35] = (int) 1
0x3c6: @@ size(Stack[-17])
0x3c7: Pop(0)
0x3c8: Pop(0); Push((bool) Stack[-17] == 0)
0x3c9: IF (Stack[-1] == 0) GOTO 0x3cb; Pop(1)

0x3ca: Return(); Pop(34)

0x3cb: Push(Stack[-17])
0x3cc: IF (Stack[-1] == 0) GOTO 0x40a; Pop(1)

0x3cd: Stack[-12] = (int) 0
0x3ce: Stack[-11] = (int) 0
0x3cf: Stack[-10] = (int) 0
0x3d0: Pop(0); Push((bool) Stack[-10] < Stack[-17])
0x3d1: IF (Stack[-1] == 0) GOTO 0x3dd; Pop(1)

0x3d2: @@ get(Stack[-16], Stack[-10])
0x3d3: Pop(0)
0x3d4: @@ GetTime(Stack[-9])
0x3d5: Pop(0)
0x3d6: Pop(0); Push((bool) Stack[-9] > Stack[-11])
0x3d7: IF (Stack[-1] == 0) GOTO 0x3da; Pop(1)

0x3d8: Stack[-11] = Stack[-9]
0x3d9: Stack[-12] = Stack[-10]
0x3da: Push((int) 1)
0x3db: Stack[-11] = Stack[-11] + Stack[-1]; Pop(1);
0x3dc: GOTO 0x3d0

0x3dd: @@ get(Stack[-16], Stack[-12])
0x3de: Pop(0)
0x3df: @@ GetTextID(Stack[-13])
0x3e0: Pop(0)
0x3e1: @ GetStringByID(Stack[-14], Stack[-13])
0x3e2: Pop(0)
0x3e3: @@ GetTime(Stack[-8])
0x3e4: Pop(0)
0x3e5: PushEmpty(int)
0x3e6: Stack[-1] = Stack[-9]
0x3e7: Stack[-8] = Stack[-1]
0x3e8: Pop(1)
0x3e9: Push((int) 60)
0x3ea: Pop(0); Push(Stack[-9] - Stack[-8]);
0x3eb: Stack[-8] = Stack[-2] * Stack[-1]; Pop(2);
0x3ec: Push((int) 10)
0x3ed: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x3ee: IF (Stack[-1] == 0) GOTO 0x3f8; Pop(1)

0x3ef: Push((int) 24)
0x3f0: Pop(1); Push(Stack[-8] % Stack[-1]);
0x3f1: Push(":0")
0x3f2: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3f3: Pop(1); Push(Stack[-1] + Stack[-7]);
0x3f4: Push(" ")
0x3f5: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3f6: Stack[-16] = Stack[-16] + Stack[-1]; Pop(1);
0x3f7: GOTO 0x400

0x3f8: Push((int) 24)
0x3f9: Pop(1); Push(Stack[-8] % Stack[-1]);
0x3fa: Push(":")
0x3fb: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3fc: Pop(1); Push(Stack[-1] + Stack[-7]);
0x3fd: Push(" ")
0x3fe: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3ff: Stack[-16] = Stack[-16] + Stack[-1]; Pop(1);
0x400: Stack[-15] = Stack[-15] + Stack[-14]; Pop(0);
0x401: @@ remove(Stack[-12])
0x402: Pop(0)
0x403: Push((int) -1)
0x404: Stack[-18] = Stack[-18] + Stack[-1]; Pop(1);
0x405: Push(Stack[-17])
0x406: IF (Stack[-1] == 0) GOTO 0x409; Pop(1)

0x407: Push("

")
0x408: Stack[-16] = Stack[-16] + Stack[-1]; Pop(1);
0x409: GOTO 0x3cb

0x40a: Push("default")
0x40b: Push((int) 268)
0x40c: @ GetTextHeightInWidth(Stack[-7], Stack[-2], Stack[-1], Stack[-17])
0x40d: Pop(2)
0x40e: Push((int) 32)
0x40f: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x410: @ GetScreenSize(Stack[-4], Stack[-3])
0x411: Pop(0)
0x412: Pop(0); Push(Stack[-4] - Stack[-38]);
0x413: Push((int) 300)
0x414: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x415: IF (Stack[-1] == 0) GOTO 0x418; Pop(1)

0x416: Stack[-2] = Stack[-38]
0x417: GOTO 0x41a

0x418: Push((int) 300)
0x419: Stack[-3] = Stack[-39] - Stack[-1]; Pop(1);
0x41a: Pop(0); Push((bool) Stack[-37] > Stack[-5])
0x41b: IF (Stack[-1] == 0) GOTO 0x41e; Pop(1)

0x41c: Stack[-1] = Stack[-37] - Stack[-5]; Pop(0);
0x41d: GOTO 0x425

0x41e: Stack[-1] = Stack[-37]
0x41f: Pop(0); Push(Stack[-1] + Stack[-5]);
0x420: Push((int) 600)
0x421: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x422: IF (Stack[-1] == 0) GOTO 0x425; Pop(1)

0x423: Push((int) 600)
0x424: Stack[-2] = Stack[-1] - Stack[-6]; Pop(1);
0x425: @ ScreenToClient(Stack[-2], Stack[-1])
0x426: Pop(0)
0x427: PushEmpty(int, int, int, int, float)
0x428: Stack[-5] = Stack[-7]
0x429: Stack[-4] = Stack[-6]
0x42a: Stack[-3] = (int) 300
0x42b: Stack[-2] = Stack[-10]
0x42c: Stack[-1] = Stack[-40]
0x42d: Call2 0x10e

0x42e: Pop(5)
0x42f: Push("default")
0x430: Push((int) 16)
0x431: Pop(1); Push(Stack[-4] + Stack[-1]);
0x432: Push((int) 16)
0x433: Pop(1); Push(Stack[-4] + Stack[-1]);
0x434: Push((int) 268)
0x435: Push((float)0.64706)
0x436: Push((float)0.64706)
0x437: Push((float)0.64706)
0x438: @ PrintInWidth(Stack[-12], Stack[-7], Stack[-6], Stack[-5], Stack[-4], Stack[-22], Stack[-3], Stack[-2], Stack[-1], Stack[-42])
0x439: Pop(7)
0x43a: Return(); Pop(34)

0x43b: Stack[-16] = 0
0x43c: PushEmpty(int, int, int, int, int, int, int, int, int, int)
0x43d: Stack[-11] = (int) 1
0x43e: Push("default")
0x43f: Push((int) 268)
0x440: @ GetTextHeightInWidth(Stack[-7], Stack[-2], Stack[-1], Stack[-15])
0x441: Pop(2)
0x442: Push((int) 32)
0x443: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x444: @ GetScreenSize(Stack[-4], Stack[-3])
0x445: Pop(0)
0x446: Pop(0); Push(Stack[-4] - Stack[-15]);
0x447: Push((int) 300)
0x448: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x449: IF (Stack[-1] == 0) GOTO 0x44c; Pop(1)

0x44a: Stack[-2] = Stack[-15]
0x44b: GOTO 0x44e

0x44c: Push((int) 300)
0x44d: Stack[-3] = Stack[-16] - Stack[-1]; Pop(1);
0x44e: Pop(0); Push((bool) Stack[-14] > Stack[-5])
0x44f: IF (Stack[-1] == 0) GOTO 0x452; Pop(1)

0x450: Stack[-1] = Stack[-14] - Stack[-5]; Pop(0);
0x451: GOTO 0x459

0x452: Stack[-1] = Stack[-14]
0x453: Pop(0); Push(Stack[-1] + Stack[-5]);
0x454: Push((int) 600)
0x455: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x456: IF (Stack[-1] == 0) GOTO 0x459; Pop(1)

0x457: Push((int) 600)
0x458: Stack[-2] = Stack[-1] - Stack[-6]; Pop(1);
0x459: @ ScreenToClient(Stack[-2], Stack[-1])
0x45a: Pop(0)
0x45b: PushEmpty(int, int, int, int, float)
0x45c: Stack[-5] = Stack[-7]
0x45d: Stack[-4] = Stack[-6]
0x45e: Stack[-3] = (int) 300
0x45f: Stack[-2] = Stack[-10]
0x460: Stack[-1] = Stack[-16]
0x461: Call2 0x10e

0x462: Pop(5)
0x463: Push("default")
0x464: Push((int) 16)
0x465: Pop(1); Push(Stack[-4] + Stack[-1]);
0x466: Push((int) 16)
0x467: Pop(1); Push(Stack[-4] + Stack[-1]);
0x468: Push((int) 268)
0x469: Push((float)0.64706)
0x46a: Push((float)0.64706)
0x46b: Push((float)0.64706)
0x46c: @ PrintInWidth(Stack[-12], Stack[-7], Stack[-6], Stack[-5], Stack[-4], Stack[-20], Stack[-3], Stack[-2], Stack[-1], Stack[-18])
0x46d: Pop(7)
0x46e: Return(); Pop(10)

