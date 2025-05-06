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
0xe7: Call2 0x35b

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
0xf3: Call2 0x246

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
0xff: Call2 0x246

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
0x10b: Call2 0x3d6

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

0x155: PushEmpty(int, string, string, string, bool, int, int, int, bool, bool, int, int, string, bool, float, float, string, string, int, int, float, float, float, float, string, string, int, int, int, int, int, int, int, string, string, string, bool, int, int, int, bool, bool, int, int, string, bool, float, float, string, string, int, int, float, float, float, float, string, string, int, int, int, int, int, int)
0x156: Pop(0); Push((bool) Stack[-67] == 0)
0x157: IF (Stack[-1] == 0) GOTO 0x159; Pop(1)

0x158: Return(); Pop(64)

0x159: PushEmpty(int, object)
0x15a: Stack[-1] = Stack[-69]
0x15b: Call2 0x27

0x15c: Stack[-34] = Stack[-2]
0x15d: Pop(2)
0x15e: Push("Description")
0x15f: @ HasInvItemProperty(Stack[-29], Stack[-33], Stack[-1])
0x160: Pop(1)
0x161: Push(Stack[-28])
0x162: IF (Stack[-1] == 0) GOTO 0x169; Pop(1)

0x163: Push("Description")
0x164: @ GetInvItemProperty(Stack[-28], Stack[-33], Stack[-1])
0x165: Pop(1)
0x166: @ GetStringByID(Stack[-31], Stack[-27])
0x167: Pop(0)
0x168: GOTO 0x16a

0x169: Stack[-31] = "Error: Item doesnt have description (FIXME!)"
0x16a: Push("default")
0x16b: Push((int) 218)
0x16c: @ GetTextHeightInWidth(Stack[-28], Stack[-2], Stack[-1], Stack[-33])
0x16d: Pop(2)
0x16e: Push("default")
0x16f: @ GetFontHeight(Stack[-26], Stack[-1])
0x170: Pop(1)
0x171: Stack[-26] = Stack[-26] + Stack[-25]; Pop(0);
0x172: Push("HasDurability")
0x173: @ HasInvItemProperty(Stack[-25], Stack[-33], Stack[-1])
0x174: Pop(1)
0x175: Push("durability")
0x176: @@ HasProperty(Stack[-24], Stack[-1])
0x177: Pop(1)
0x178: PushEmpty(bool)
0x179: Stack[-1] = (bool) 1
0x17a: Push(Stack[-24])
0x17b: IF (Stack[-1] == 0) GOTO 0x17f; Pop(1)

0x17c: Push(Stack[-25])
0x17d: IF (Stack[-1] == 0) GOTO 0x17f; Pop(1)

0x17e: Stack[-1] = (bool) 0
0x17f: IF (Stack[-1] == 0) GOTO 0x194; Pop(1)

0x180: Push(Stack[-23])
0x181: IF (Stack[-1] == 0) GOTO 0x186; Pop(1)

0x182: Push("durability")
0x183: @@ GetProperty(Stack[-23], Stack[-1])
0x184: Pop(1)
0x185: GOTO 0x187

0x186: Stack[-22] = (int) 100
0x187: Push((int) 7)
0x188: @ GetStringByID(Stack[-31], Stack[-1])
0x189: Pop(1)
0x18a: Push(" ")
0x18b: Pop(1); Push(Stack[-1] + Stack[-23]);
0x18c: Push("%")
0x18d: Pop(2); Push(Stack[-2] + Stack[-1]);
0x18e: Stack[-31] = Stack[-31] + Stack[-1]; Pop(1);
0x18f: Push("default")
0x190: Push((int) 218)
0x191: @ GetTextHeightInWidth(Stack[-23], Stack[-2], Stack[-1], Stack[-32])
0x192: Pop(2)
0x193: Stack[-26] = Stack[-26] + Stack[-21]; Pop(0);
0x194: Stack[-19] = (bool) 0
0x195: PushEmpty(string, object)
0x196: Stack[-1] = Stack[-69]
0x197: Call2 0x7b

0x198: Pop(1)
0x199: Push("grass_combination")
0x19a: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x19b: IF (Stack[-1] == 0) GOTO 0x1be; Pop(1)

0x19c: Stack[-19] = (bool) 1
0x19d: Push("im_inc")
0x19e: @@ GetProperty(Stack[-19], Stack[-1])
0x19f: Pop(1)
0x1a0: Push("hl_inc")
0x1a1: @@ GetProperty(Stack[-18], Stack[-1])
0x1a2: Pop(1)
0x1a3: Push((int) 8)
0x1a4: @ GetStringByID(Stack[-17], Stack[-1])
0x1a5: Pop(1)
0x1a6: Push((int) 9)
0x1a7: @ GetStringByID(Stack[-16], Stack[-1])
0x1a8: Pop(1)
0x1a9: Push((int) 100)
0x1aa: Stack[-15] = Stack[-19] * Stack[-1]; Pop(1);
0x1ab: Push(" ")
0x1ac: Pop(1); Push(Stack[-17] + Stack[-1]);
0x1ad: Pop(1); Push(Stack[-1] + Stack[-15]);
0x1ae: Push("%
")
0x1af: Stack[-22] = Stack[-2] + Stack[-1]; Pop(2);
0x1b0: Push((int) 100)
0x1b1: Stack[-15] = Stack[-18] * Stack[-1]; Pop(1);
0x1b2: Push(" ")
0x1b3: Pop(1); Push(Stack[-16] + Stack[-1]);
0x1b4: Pop(1); Push(Stack[-1] + Stack[-15]);
0x1b5: Push("%
")
0x1b6: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1b7: Stack[-21] = Stack[-21] + Stack[-1]; Pop(1);
0x1b8: Push("default")
0x1b9: Push((int) 218)
0x1ba: @ GetTextHeightInWidth(Stack[-15], Stack[-2], Stack[-1], Stack[-22])
0x1bb: Pop(2)
0x1bc: Stack[-26] = Stack[-26] + Stack[-13]; Pop(0);
0x1bd: GOTO 0x1e6

0x1be: PushEmpty(string, object)
0x1bf: Stack[-1] = Stack[-69]
0x1c0: Call2 0x7b

0x1c1: Pop(1)
0x1c2: Push("organ_combination")
0x1c3: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1c4: IF (Stack[-1] == 0) GOTO 0x1e6; Pop(1)

0x1c5: Stack[-19] = (bool) 1
0x1c6: Push("DiseaseRate")
0x1c7: @@ GetProperty(Stack[-13], Stack[-1])
0x1c8: Pop(1)
0x1c9: Push("HealthIncrease")
0x1ca: @@ GetProperty(Stack[-11], Stack[-1])
0x1cb: Pop(1)
0x1cc: Push((int) 11)
0x1cd: @ GetStringByID(Stack[-9], Stack[-1])
0x1ce: Pop(1)
0x1cf: Push((int) 13)
0x1d0: @ GetStringByID(Stack[-8], Stack[-1])
0x1d1: Pop(1)
0x1d2: Push((int) 100)
0x1d3: Stack[-7] = Stack[-13] * Stack[-1]; Pop(1);
0x1d4: Push(" ")
0x1d5: Pop(1); Push(Stack[-9] + Stack[-1]);
0x1d6: Pop(1); Push(Stack[-1] + Stack[-7]);
0x1d7: Push("%
")
0x1d8: Stack[-22] = Stack[-2] + Stack[-1]; Pop(2);
0x1d9: Push((int) 100)
0x1da: Stack[-7] = Stack[-11] * Stack[-1]; Pop(1);
0x1db: Push(" ")
0x1dc: Pop(1); Push(Stack[-8] + Stack[-1]);
0x1dd: Pop(1); Push(Stack[-1] + Stack[-7]);
0x1de: Push("%
")
0x1df: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1e0: Stack[-21] = Stack[-21] + Stack[-1]; Pop(1);
0x1e1: Push("default")
0x1e2: Push((int) 218)
0x1e3: @ GetTextHeightInWidth(Stack[-7], Stack[-2], Stack[-1], Stack[-22])
0x1e4: Pop(2)
0x1e5: Stack[-26] = Stack[-26] + Stack[-5]; Pop(0);
0x1e6: @ GetScreenSize(Stack[-4], Stack[-3])
0x1e7: Pop(0)
0x1e8: Push((int) 266)
0x1e9: Stack[-27] = Stack[-27] + Stack[-1]; Pop(1);
0x1ea: Pop(0); Push(Stack[-4] - Stack[-69]);
0x1eb: Push((int) 250)
0x1ec: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x1ed: IF (Stack[-1] == 0) GOTO 0x1f0; Pop(1)

0x1ee: Stack[-2] = Stack[-69]
0x1ef: GOTO 0x1f2

0x1f0: Push((int) 250)
0x1f1: Stack[-3] = Stack[-70] - Stack[-1]; Pop(1);
0x1f2: Pop(0); Push((bool) Stack[-68] > Stack[-26])
0x1f3: IF (Stack[-1] == 0) GOTO 0x1f6; Pop(1)

0x1f4: Stack[-1] = Stack[-68] - Stack[-26]; Pop(0);
0x1f5: GOTO 0x1fd

0x1f6: Stack[-1] = Stack[-68]
0x1f7: Pop(0); Push(Stack[-1] + Stack[-26]);
0x1f8: Push((int) 600)
0x1f9: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x1fa: IF (Stack[-1] == 0) GOTO 0x1fd; Pop(1)

0x1fb: Push((int) 600)
0x1fc: Stack[-2] = Stack[-1] - Stack[-27]; Pop(1);
0x1fd: @ ScreenToClient(Stack[-2], Stack[-1])
0x1fe: Pop(0)
0x1ff: PushEmpty(int, int, int, int, float)
0x200: Stack[-5] = Stack[-7]
0x201: Stack[-4] = Stack[-6]
0x202: Stack[-3] = (int) 250
0x203: Stack[-2] = Stack[-31]
0x204: Stack[-1] = Stack[-70]
0x205: Call2 0x10e

0x206: Pop(5)
0x207: PushEmpty(int, int, object, float)
0x208: Push((int) 16)
0x209: Stack[-5] = Stack[-7] + Stack[-1]; Pop(1);
0x20a: Push((int) 16)
0x20b: Stack[-4] = Stack[-6] + Stack[-1]; Pop(1);
0x20c: Stack[-2] = Stack[-71]
0x20d: Stack[-1] = Stack[-69]
0x20e: Call2 0x129

0x20f: Pop(4)
0x210: Push((int) 250)
0x211: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x212: Push("default")
0x213: Push((int) 16)
0x214: Pop(1); Push(Stack[-4] + Stack[-1]);
0x215: Push((int) 218)
0x216: Push((float)0.64706)
0x217: Push((float)0.64706)
0x218: Push((float)0.64706)
0x219: @ PrintInWidth(Stack[-32], Stack[-6], Stack[-5], Stack[-7], Stack[-4], Stack[-37], Stack[-3], Stack[-2], Stack[-1], Stack[-71])
0x21a: Pop(6)
0x21b: Pop(0); Push(Stack[-26] + Stack[-25]);
0x21c: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x21d: PushEmpty(bool)
0x21e: Stack[-1] = (bool) 1
0x21f: Push(Stack[-24])
0x220: IF (Stack[-1] == 0) GOTO 0x224; Pop(1)

0x221: Push(Stack[-25])
0x222: IF (Stack[-1] == 0) GOTO 0x224; Pop(1)

0x223: Stack[-1] = (bool) 0
0x224: IF (Stack[-1] == 0) GOTO 0x22f; Pop(1)

0x225: Push("default")
0x226: Push((int) 16)
0x227: Pop(1); Push(Stack[-4] + Stack[-1]);
0x228: Push((int) 218)
0x229: Push((float)0.64706)
0x22a: Push((float)0.64706)
0x22b: Push((float)0.64706)
0x22c: @ PrintInWidth(Stack[-32], Stack[-6], Stack[-5], Stack[-7], Stack[-4], Stack[-36], Stack[-3], Stack[-2], Stack[-1], Stack[-71])
0x22d: Pop(6)
0x22e: Stack[-1] = Stack[-1] + Stack[-26]; Pop(0);
0x22f: Push(Stack[-19])
0x230: IF (Stack[-1] == 0) GOTO 0x23b; Pop(1)

0x231: Push("default")
0x232: Push((int) 16)
0x233: Pop(1); Push(Stack[-4] + Stack[-1]);
0x234: Push((int) 218)
0x235: Push((float)0.64706)
0x236: Push((float)0.64706)
0x237: Push((float)0.64706)
0x238: @ PrintInWidth(Stack[-32], Stack[-6], Stack[-5], Stack[-7], Stack[-4], Stack[-26], Stack[-3], Stack[-2], Stack[-1], Stack[-71])
0x239: Pop(6)
0x23a: Stack[-1] = Stack[-1] + Stack[-26]; Pop(0);
0x23b: Push("default")
0x23c: Push((int) 16)
0x23d: Pop(1); Push(Stack[-4] + Stack[-1]);
0x23e: Push((int) 218)
0x23f: Push((float)0.64706)
0x240: Push((float)0.64706)
0x241: Push((float)0.64706)
0x242: @ PrintInWidth(Stack[-32], Stack[-6], Stack[-5], Stack[-7], Stack[-4], Stack[-72], Stack[-3], Stack[-2], Stack[-1], Stack[-71])
0x243: Pop(6)
0x244: Stack[-1] = Stack[-1] + Stack[-26]; Pop(0);
0x245: Return(); Pop(64)

0x246: PushEmpty(object, float, int, int, int, float, string, bool, int, string, int, string, bool, bool, int, int, string, bool, float, float, float, string, string, int, int, float, float, string, string, int, int, int, int, int, int, object, float, int, int, int, float, string, bool, int, string, int, string, bool, bool, int, int, string, bool, float, float, float, string, string, int, int, float, float, string, string, int, int, int, int, int, int)
0x247: Pop(0); Push((bool) Stack[-73] == 0)
0x248: IF (Stack[-1] == 0) GOTO 0x24a; Pop(1)

0x249: Return(); Pop(70)

0x24a: @ GetContainer(Stack[-35])
0x24b: Pop(0)
0x24c: @ GetGameTime(Stack[-34])
0x24d: Pop(0)
0x24e: Push((int) 1)
0x24f: Push((int) 24)
0x250: Pop(1); Push(Stack[-36] / Stack[-1]);
0x251: Stack[-35] = Stack[-2] + Stack[-1]; Pop(2);
0x252: PushEmpty(int, object)
0x253: Stack[-1] = Stack[-75]
0x254: Call2 0x27

0x255: Stack[-34] = Stack[-2]
0x256: Pop(2)
0x257: PushEmpty(int, object, int)
0x258: Stack[-2] = Stack[-76]
0x259: PushEmpty(int)
0x25a: Call2 0xc2

0x25b: Stack[-2] = Stack[-1]
0x25c: Pop(1)
0x25d: Call2 0x2c

0x25e: Stack[-34] = Stack[-3]
0x25f: Pop(3)
0x260: Push(Stack[-72])
0x261: IF (Stack[-1] == 0) GOTO 0x26d; Pop(1)

0x262: PushEmpty(float, object, int, int)
0x263: Stack[-3] = Stack[-39]
0x264: Stack[-2] = Stack[-37]
0x265: PushEmpty(int)
0x266: Call2 0xc2

0x267: Stack[-2] = Stack[-1]
0x268: Pop(1)
0x269: Call2 0x8e

0x26a: Stack[-34] = Stack[-4]
0x26b: Pop(4)
0x26c: GOTO 0x277

0x26d: PushEmpty(float, object, int, int)
0x26e: Stack[-3] = Stack[-39]
0x26f: Stack[-2] = Stack[-37]
0x270: PushEmpty(int)
0x271: Call2 0xc2

0x272: Stack[-2] = Stack[-1]
0x273: Pop(1)
0x274: Call2 0xa8

0x275: Stack[-34] = Stack[-4]
0x276: Pop(4)
0x277: Stack[-31] = Stack[-31] * Stack[-30]; Pop(0);
0x278: Push("Description")
0x279: @ HasInvItemProperty(Stack[-29], Stack[-33], Stack[-1])
0x27a: Pop(1)
0x27b: Push(Stack[-28])
0x27c: IF (Stack[-1] == 0) GOTO 0x283; Pop(1)

0x27d: Push("Description")
0x27e: @ GetInvItemProperty(Stack[-28], Stack[-33], Stack[-1])
0x27f: Pop(1)
0x280: @ GetStringByID(Stack[-29], Stack[-27])
0x281: Pop(0)
0x282: GOTO 0x284

0x283: Stack[-29] = "Error: Item doesnt have description (FIXME!)"
0x284: Push("
")
0x285: Stack[-30] = Stack[-30] + Stack[-1]; Pop(1);
0x286: Push((int) 5)
0x287: @ GetStringByID(Stack[-27], Stack[-1])
0x288: Pop(1)
0x289: Push(": ")
0x28a: Pop(1); Push(Stack[-27] + Stack[-1]);
0x28b: Pop(1); Push(Stack[-1] + Stack[-32]);
0x28c: Stack[-30] = Stack[-30] + Stack[-1]; Pop(1);
0x28d: Push("default")
0x28e: Push((int) 218)
0x28f: @ GetTextHeightInWidth(Stack[-27], Stack[-2], Stack[-1], Stack[-31])
0x290: Pop(2)
0x291: Push((int) 266)
0x292: Stack[-26] = Stack[-26] + Stack[-1]; Pop(1);
0x293: Push("HasDurability")
0x294: @ HasInvItemProperty(Stack[-24], Stack[-33], Stack[-1])
0x295: Pop(1)
0x296: Push("durability")
0x297: @@ HasProperty(Stack[-23], Stack[-1])
0x298: Pop(1)
0x299: PushEmpty(bool)
0x29a: Stack[-1] = (bool) 1
0x29b: Push(Stack[-23])
0x29c: IF (Stack[-1] == 0) GOTO 0x2a0; Pop(1)

0x29d: Push(Stack[-24])
0x29e: IF (Stack[-1] == 0) GOTO 0x2a0; Pop(1)

0x29f: Stack[-1] = (bool) 0
0x2a0: IF (Stack[-1] == 0) GOTO 0x2b5; Pop(1)

0x2a1: Push(Stack[-22])
0x2a2: IF (Stack[-1] == 0) GOTO 0x2a7; Pop(1)

0x2a3: Push("durability")
0x2a4: @@ GetProperty(Stack[-22], Stack[-1])
0x2a5: Pop(1)
0x2a6: GOTO 0x2a8

0x2a7: Stack[-21] = (int) 100
0x2a8: Push((int) 7)
0x2a9: @ GetStringByID(Stack[-25], Stack[-1])
0x2aa: Pop(1)
0x2ab: Push(" ")
0x2ac: Pop(1); Push(Stack[-1] + Stack[-22]);
0x2ad: Push("%")
0x2ae: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2af: Stack[-25] = Stack[-25] + Stack[-1]; Pop(1);
0x2b0: Push("default")
0x2b1: Push((int) 218)
0x2b2: @ GetTextHeightInWidth(Stack[-22], Stack[-2], Stack[-1], Stack[-26])
0x2b3: Pop(2)
0x2b4: Stack[-25] = Stack[-25] + Stack[-20]; Pop(0);
0x2b5: Stack[-18] = (bool) 0
0x2b6: PushEmpty(string, object)
0x2b7: Stack[-1] = Stack[-75]
0x2b8: Call2 0x7b

0x2b9: Pop(1)
0x2ba: Push("grass_combination")
0x2bb: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x2bc: IF (Stack[-1] == 0) GOTO 0x2df; Pop(1)

0x2bd: Stack[-18] = (bool) 1
0x2be: Push("im_inc")
0x2bf: @@ GetProperty(Stack[-18], Stack[-1])
0x2c0: Pop(1)
0x2c1: Push("hl_inc")
0x2c2: @@ GetProperty(Stack[-17], Stack[-1])
0x2c3: Pop(1)
0x2c4: Push((int) 8)
0x2c5: @ GetStringByID(Stack[-15], Stack[-1])
0x2c6: Pop(1)
0x2c7: Push((int) 9)
0x2c8: @ GetStringByID(Stack[-14], Stack[-1])
0x2c9: Pop(1)
0x2ca: Push((int) 100)
0x2cb: Stack[-13] = Stack[-18] * Stack[-1]; Pop(1);
0x2cc: Push(" ")
0x2cd: Pop(1); Push(Stack[-15] + Stack[-1]);
0x2ce: Pop(1); Push(Stack[-1] + Stack[-13]);
0x2cf: Push("%
")
0x2d0: Stack[-21] = Stack[-2] + Stack[-1]; Pop(2);
0x2d1: Push((int) 100)
0x2d2: Stack[-13] = Stack[-17] * Stack[-1]; Pop(1);
0x2d3: Push(" ")
0x2d4: Pop(1); Push(Stack[-14] + Stack[-1]);
0x2d5: Pop(1); Push(Stack[-1] + Stack[-13]);
0x2d6: Push("%
")
0x2d7: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2d8: Stack[-20] = Stack[-20] + Stack[-1]; Pop(1);
0x2d9: Push("default")
0x2da: Push((int) 218)
0x2db: @ GetTextHeightInWidth(Stack[-13], Stack[-2], Stack[-1], Stack[-21])
0x2dc: Pop(2)
0x2dd: Stack[-25] = Stack[-25] + Stack[-11]; Pop(0);
0x2de: GOTO 0x307

0x2df: PushEmpty(string, object)
0x2e0: Stack[-1] = Stack[-75]
0x2e1: Call2 0x7b

0x2e2: Pop(1)
0x2e3: Push("organ_combination")
0x2e4: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x2e5: IF (Stack[-1] == 0) GOTO 0x307; Pop(1)

0x2e6: Stack[-18] = (bool) 1
0x2e7: Push("DiseaseRate")
0x2e8: @@ GetProperty(Stack[-11], Stack[-1])
0x2e9: Pop(1)
0x2ea: Push("HealthIncrease")
0x2eb: @@ GetProperty(Stack[-10], Stack[-1])
0x2ec: Pop(1)
0x2ed: Push((int) 11)
0x2ee: @ GetStringByID(Stack[-9], Stack[-1])
0x2ef: Pop(1)
0x2f0: Push((int) 13)
0x2f1: @ GetStringByID(Stack[-8], Stack[-1])
0x2f2: Pop(1)
0x2f3: Push((int) 100)
0x2f4: Stack[-7] = Stack[-11] * Stack[-1]; Pop(1);
0x2f5: Push(" ")
0x2f6: Pop(1); Push(Stack[-9] + Stack[-1]);
0x2f7: Pop(1); Push(Stack[-1] + Stack[-7]);
0x2f8: Push("%
")
0x2f9: Stack[-21] = Stack[-2] + Stack[-1]; Pop(2);
0x2fa: Push((int) 100)
0x2fb: Stack[-7] = Stack[-10] * Stack[-1]; Pop(1);
0x2fc: Push(" ")
0x2fd: Pop(1); Push(Stack[-8] + Stack[-1]);
0x2fe: Pop(1); Push(Stack[-1] + Stack[-7]);
0x2ff: Push("%
")
0x300: Pop(2); Push(Stack[-2] + Stack[-1]);
0x301: Stack[-20] = Stack[-20] + Stack[-1]; Pop(1);
0x302: Push("default")
0x303: Push((int) 218)
0x304: @ GetTextHeightInWidth(Stack[-7], Stack[-2], Stack[-1], Stack[-21])
0x305: Pop(2)
0x306: Stack[-25] = Stack[-25] + Stack[-5]; Pop(0);
0x307: @ GetScreenSize(Stack[-4], Stack[-3])
0x308: Pop(0)
0x309: Pop(0); Push(Stack[-4] - Stack[-75]);
0x30a: Push((int) 250)
0x30b: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x30c: IF (Stack[-1] == 0) GOTO 0x30f; Pop(1)

0x30d: Stack[-2] = Stack[-75]
0x30e: GOTO 0x311

0x30f: Push((int) 250)
0x310: Stack[-3] = Stack[-76] - Stack[-1]; Pop(1);
0x311: Pop(0); Push((bool) Stack[-74] > Stack[-25])
0x312: IF (Stack[-1] == 0) GOTO 0x315; Pop(1)

0x313: Stack[-1] = Stack[-74] - Stack[-25]; Pop(0);
0x314: GOTO 0x31c

0x315: Stack[-1] = Stack[-74]
0x316: Pop(0); Push(Stack[-1] + Stack[-25]);
0x317: Push((int) 600)
0x318: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x319: IF (Stack[-1] == 0) GOTO 0x31c; Pop(1)

0x31a: Push((int) 600)
0x31b: Stack[-2] = Stack[-1] - Stack[-26]; Pop(1);
0x31c: @ ScreenToClient(Stack[-2], Stack[-1])
0x31d: Pop(0)
0x31e: PushEmpty(int, int, int, int, float)
0x31f: Stack[-5] = Stack[-7]
0x320: Stack[-4] = Stack[-6]
0x321: Stack[-3] = (int) 250
0x322: Stack[-2] = Stack[-30]
0x323: Stack[-1] = Stack[-76]
0x324: Call2 0x10e

0x325: Pop(5)
0x326: PushEmpty(int, int, object, float)
0x327: Push((int) 16)
0x328: Stack[-5] = Stack[-7] + Stack[-1]; Pop(1);
0x329: Push((int) 16)
0x32a: Stack[-4] = Stack[-6] + Stack[-1]; Pop(1);
0x32b: Stack[-2] = Stack[-77]
0x32c: Stack[-1] = Stack[-75]
0x32d: Call2 0x129

0x32e: Pop(4)
0x32f: Push((int) 250)
0x330: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x331: Push("default")
0x332: Push((int) 16)
0x333: Pop(1); Push(Stack[-4] + Stack[-1]);
0x334: Push((int) 218)
0x335: Push((float)0.64706)
0x336: Push((float)0.64706)
0x337: Push((float)0.64706)
0x338: @ PrintInWidth(Stack[-31], Stack[-6], Stack[-5], Stack[-7], Stack[-4], Stack[-35], Stack[-3], Stack[-2], Stack[-1], Stack[-77])
0x339: Pop(6)
0x33a: Stack[-1] = Stack[-1] + Stack[-25]; Pop(0);
0x33b: PushEmpty(bool)
0x33c: Stack[-1] = (bool) 1
0x33d: Push(Stack[-23])
0x33e: IF (Stack[-1] == 0) GOTO 0x342; Pop(1)

0x33f: Push(Stack[-24])
0x340: IF (Stack[-1] == 0) GOTO 0x342; Pop(1)

0x341: Stack[-1] = (bool) 0
0x342: IF (Stack[-1] == 0) GOTO 0x34d; Pop(1)

0x343: Push("default")
0x344: Push((int) 16)
0x345: Pop(1); Push(Stack[-4] + Stack[-1]);
0x346: Push((int) 218)
0x347: Push((float)0.64706)
0x348: Push((float)0.64706)
0x349: Push((float)0.64706)
0x34a: @ PrintInWidth(Stack[-31], Stack[-6], Stack[-5], Stack[-7], Stack[-4], Stack[-30], Stack[-3], Stack[-2], Stack[-1], Stack[-77])
0x34b: Pop(6)
0x34c: Stack[-1] = Stack[-1] + Stack[-25]; Pop(0);
0x34d: Push(Stack[-18])
0x34e: IF (Stack[-1] == 0) GOTO 0x359; Pop(1)

0x34f: Push("default")
0x350: Push((int) 16)
0x351: Pop(1); Push(Stack[-4] + Stack[-1]);
0x352: Push((int) 218)
0x353: Push((float)0.64706)
0x354: Push((float)0.64706)
0x355: Push((float)0.64706)
0x356: @ PrintInWidth(Stack[-31], Stack[-6], Stack[-5], Stack[-7], Stack[-4], Stack[-25], Stack[-3], Stack[-2], Stack[-1], Stack[-77])
0x357: Pop(6)
0x358: Stack[-1] = Stack[-1] + Stack[-25]; Pop(0);
0x359: Return(); Pop(70)

0x35a: Stack[-35] = 0
0x35b: PushEmpty(int, object, string, string, int, int, float, int, float, float, int, int, int, int, int, int, int, int, object, string, string, int, int, float, int, float, float, int, int, int, int, int, int, int)
0x35c: Pop(0); Push((bool) Stack[-36] == 0)
0x35d: IF (Stack[-1] == 0) GOTO 0x35f; Pop(1)

0x35e: Return(); Pop(34)

0x35f: Stack[-35] = (int) 1
0x360: @@ size(Stack[-17])
0x361: Pop(0)
0x362: Pop(0); Push((bool) Stack[-17] == 0)
0x363: IF (Stack[-1] == 0) GOTO 0x365; Pop(1)

0x364: Return(); Pop(34)

0x365: Push(Stack[-17])
0x366: IF (Stack[-1] == 0) GOTO 0x3a4; Pop(1)

0x367: Stack[-12] = (int) 0
0x368: Stack[-11] = (int) 0
0x369: Stack[-10] = (int) 0
0x36a: Pop(0); Push((bool) Stack[-10] < Stack[-17])
0x36b: IF (Stack[-1] == 0) GOTO 0x377; Pop(1)

0x36c: @@ get(Stack[-16], Stack[-10])
0x36d: Pop(0)
0x36e: @@ GetTime(Stack[-9])
0x36f: Pop(0)
0x370: Pop(0); Push((bool) Stack[-9] > Stack[-11])
0x371: IF (Stack[-1] == 0) GOTO 0x374; Pop(1)

0x372: Stack[-11] = Stack[-9]
0x373: Stack[-12] = Stack[-10]
0x374: Push((int) 1)
0x375: Stack[-11] = Stack[-11] + Stack[-1]; Pop(1);
0x376: GOTO 0x36a

0x377: @@ get(Stack[-16], Stack[-12])
0x378: Pop(0)
0x379: @@ GetTextID(Stack[-13])
0x37a: Pop(0)
0x37b: @ GetStringByID(Stack[-14], Stack[-13])
0x37c: Pop(0)
0x37d: @@ GetTime(Stack[-8])
0x37e: Pop(0)
0x37f: PushEmpty(int)
0x380: Stack[-1] = Stack[-9]
0x381: Stack[-8] = Stack[-1]
0x382: Pop(1)
0x383: Push((int) 60)
0x384: Pop(0); Push(Stack[-9] - Stack[-8]);
0x385: Stack[-8] = Stack[-2] * Stack[-1]; Pop(2);
0x386: Push((int) 10)
0x387: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x388: IF (Stack[-1] == 0) GOTO 0x392; Pop(1)

0x389: Push((int) 24)
0x38a: Pop(1); Push(Stack[-8] % Stack[-1]);
0x38b: Push(":0")
0x38c: Pop(2); Push(Stack[-2] + Stack[-1]);
0x38d: Pop(1); Push(Stack[-1] + Stack[-7]);
0x38e: Push(" ")
0x38f: Pop(2); Push(Stack[-2] + Stack[-1]);
0x390: Stack[-16] = Stack[-16] + Stack[-1]; Pop(1);
0x391: GOTO 0x39a

0x392: Push((int) 24)
0x393: Pop(1); Push(Stack[-8] % Stack[-1]);
0x394: Push(":")
0x395: Pop(2); Push(Stack[-2] + Stack[-1]);
0x396: Pop(1); Push(Stack[-1] + Stack[-7]);
0x397: Push(" ")
0x398: Pop(2); Push(Stack[-2] + Stack[-1]);
0x399: Stack[-16] = Stack[-16] + Stack[-1]; Pop(1);
0x39a: Stack[-15] = Stack[-15] + Stack[-14]; Pop(0);
0x39b: @@ remove(Stack[-12])
0x39c: Pop(0)
0x39d: Push((int) -1)
0x39e: Stack[-18] = Stack[-18] + Stack[-1]; Pop(1);
0x39f: Push(Stack[-17])
0x3a0: IF (Stack[-1] == 0) GOTO 0x3a3; Pop(1)

0x3a1: Push("

")
0x3a2: Stack[-16] = Stack[-16] + Stack[-1]; Pop(1);
0x3a3: GOTO 0x365

0x3a4: Push("default")
0x3a5: Push((int) 218)
0x3a6: @ GetTextHeightInWidth(Stack[-7], Stack[-2], Stack[-1], Stack[-17])
0x3a7: Pop(2)
0x3a8: Push((int) 32)
0x3a9: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x3aa: @ GetScreenSize(Stack[-4], Stack[-3])
0x3ab: Pop(0)
0x3ac: Pop(0); Push(Stack[-4] - Stack[-38]);
0x3ad: Push((int) 250)
0x3ae: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x3af: IF (Stack[-1] == 0) GOTO 0x3b2; Pop(1)

0x3b0: Stack[-2] = Stack[-38]
0x3b1: GOTO 0x3b4

0x3b2: Push((int) 250)
0x3b3: Stack[-3] = Stack[-39] - Stack[-1]; Pop(1);
0x3b4: Pop(0); Push((bool) Stack[-37] > Stack[-5])
0x3b5: IF (Stack[-1] == 0) GOTO 0x3b8; Pop(1)

0x3b6: Stack[-1] = Stack[-37] - Stack[-5]; Pop(0);
0x3b7: GOTO 0x3bf

0x3b8: Stack[-1] = Stack[-37]
0x3b9: Pop(0); Push(Stack[-1] + Stack[-5]);
0x3ba: Push((int) 600)
0x3bb: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x3bc: IF (Stack[-1] == 0) GOTO 0x3bf; Pop(1)

0x3bd: Push((int) 600)
0x3be: Stack[-2] = Stack[-1] - Stack[-6]; Pop(1);
0x3bf: @ ScreenToClient(Stack[-2], Stack[-1])
0x3c0: Pop(0)
0x3c1: PushEmpty(int, int, int, int, float)
0x3c2: Stack[-5] = Stack[-7]
0x3c3: Stack[-4] = Stack[-6]
0x3c4: Stack[-3] = (int) 250
0x3c5: Stack[-2] = Stack[-10]
0x3c6: Stack[-1] = Stack[-40]
0x3c7: Call2 0x10e

0x3c8: Pop(5)
0x3c9: Push("default")
0x3ca: Push((int) 16)
0x3cb: Pop(1); Push(Stack[-4] + Stack[-1]);
0x3cc: Push((int) 16)
0x3cd: Pop(1); Push(Stack[-4] + Stack[-1]);
0x3ce: Push((int) 218)
0x3cf: Push((float)0.64706)
0x3d0: Push((float)0.64706)
0x3d1: Push((float)0.64706)
0x3d2: @ PrintInWidth(Stack[-12], Stack[-7], Stack[-6], Stack[-5], Stack[-4], Stack[-22], Stack[-3], Stack[-2], Stack[-1], Stack[-42])
0x3d3: Pop(7)
0x3d4: Return(); Pop(34)

0x3d5: Stack[-16] = 0
0x3d6: PushEmpty(int, int, int, int, int, int, int, int, int, int)
0x3d7: Stack[-11] = (int) 1
0x3d8: Push("default")
0x3d9: Push((int) 218)
0x3da: @ GetTextHeightInWidth(Stack[-7], Stack[-2], Stack[-1], Stack[-15])
0x3db: Pop(2)
0x3dc: Push((int) 32)
0x3dd: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x3de: @ GetScreenSize(Stack[-4], Stack[-3])
0x3df: Pop(0)
0x3e0: Pop(0); Push(Stack[-4] - Stack[-15]);
0x3e1: Push((int) 250)
0x3e2: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x3e3: IF (Stack[-1] == 0) GOTO 0x3e6; Pop(1)

0x3e4: Stack[-2] = Stack[-15]
0x3e5: GOTO 0x3e8

0x3e6: Push((int) 250)
0x3e7: Stack[-3] = Stack[-16] - Stack[-1]; Pop(1);
0x3e8: Pop(0); Push((bool) Stack[-14] > Stack[-5])
0x3e9: IF (Stack[-1] == 0) GOTO 0x3ec; Pop(1)

0x3ea: Stack[-1] = Stack[-14] - Stack[-5]; Pop(0);
0x3eb: GOTO 0x3f3

0x3ec: Stack[-1] = Stack[-14]
0x3ed: Pop(0); Push(Stack[-1] + Stack[-5]);
0x3ee: Push((int) 600)
0x3ef: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x3f0: IF (Stack[-1] == 0) GOTO 0x3f3; Pop(1)

0x3f1: Push((int) 600)
0x3f2: Stack[-2] = Stack[-1] - Stack[-6]; Pop(1);
0x3f3: @ ScreenToClient(Stack[-2], Stack[-1])
0x3f4: Pop(0)
0x3f5: PushEmpty(int, int, int, int, float)
0x3f6: Stack[-5] = Stack[-7]
0x3f7: Stack[-4] = Stack[-6]
0x3f8: Stack[-3] = (int) 250
0x3f9: Stack[-2] = Stack[-10]
0x3fa: Stack[-1] = Stack[-16]
0x3fb: Call2 0x10e

0x3fc: Pop(5)
0x3fd: Push("default")
0x3fe: Push((int) 16)
0x3ff: Pop(1); Push(Stack[-4] + Stack[-1]);
0x400: Push((int) 16)
0x401: Pop(1); Push(Stack[-4] + Stack[-1]);
0x402: Push((int) 218)
0x403: Push((float)0.64706)
0x404: Push((float)0.64706)
0x405: Push((float)0.64706)
0x406: @ PrintInWidth(Stack[-12], Stack[-7], Stack[-6], Stack[-5], Stack[-4], Stack[-20], Stack[-3], Stack[-2], Stack[-1], Stack[-18])
0x407: Pop(7)
0x408: Return(); Pop(10)

