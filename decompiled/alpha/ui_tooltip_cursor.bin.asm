GlobalVarCount = 0

Strings:
	default
	GetTooltipType
	GetTooltipText
	GetTooltipObject
	Price
	Item with id :
	 doesn't have price
	BarterPrice
	GetItemID
	sellf
	HasProperty
	GetProperty
	buyf
	barter
	bg
	border
	Description
	Error: Item doesnt have description (FIXME!)
	size
	get
	GetTime
	GetTextID
	:0
	 
	remove
	


	: 

Import:
	SetBackground (1 args)
	SetOwnerDraw (1 args)
	ProcessEvents (0 args)
	ClientToScreen (2 args)
	FindWindow (3 args)
	HasInvItemProperty (3 args)
	Trace (1 args)
	GetInvItemProperty (3 args)
	GetContainer (1 args)
	BlitClipped (7 args)
	StretchBlit (5 args)
	GetInvItemSprite2 (2 args)
	LoadImage (1 args)
	GetStringByID (2 args)
	GetTextHeightInWidth (4 args)
	GetScreenSize (2 args)
	ScreenToClient (2 args)
	PrintInWidth (9 args)
	GetGameTime (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_0 Op = 0x9 Vars = ()


0x0: Push("default")
0x1: @ SetBackground(Stack[-1])
0x2: Pop(1)
0x3: Push((bool) 1)
0x4: @ SetOwnerDraw(Stack[-1])
0x5: Pop(1)
0x6: @ ProcessEvents()
0x7: Pop(0)
0x8: Return(); Pop(0)

0x9: PushEmpty(object, int, int, int, string, object, object, int, int, int, string, object)
0xa: Stack[-5] = (int) 0
0xb: Stack[-4] = (int) 0
0xc: @ ClientToScreen(Stack[-5], Stack[-4])
0xd: Pop(0)
0xe: @ FindWindow(Stack[-6], Stack[-5], Stack[-4])
0xf: Pop(0)
0x10: Pop(0); Push((bool) Stack[-6] == 0)
0x11: IF (Stack[-1] == 0) GOTO 0x13; Pop(1)

0x12: Return(); Pop(12)

0x13: @@ GetTooltipType(Stack[-3])
0x14: Pop(0)
0x15: @@ GetTooltipText(Stack[-2])
0x16: Pop(0)
0x17: @@ GetTooltipObject(Stack[-1])
0x18: Pop(0)
0x19: PushEmpty(int, string, object, int, int)
0x1a: Stack[-5] = Stack[-8]
0x1b: Stack[-4] = Stack[-7]
0x1c: Stack[-3] = Stack[-6]
0x1d: Stack[-2] = Stack[-10]
0x1e: Stack[-1] = Stack[-9]
0x1f: Call 0xaa

0x20: Pop(5)
0x21: Return(); Pop(12)

0x22: Stack[-1] = 0
0x23: Stack[-6] = 0
0x24: PushEmpty(bool, int, bool, int, bool, int, bool, int)
0x25: Push((int) 0)
0x26: Pop(1); Push((bool) Stack[-10] == Stack[-1])
0x27: IF (Stack[-1] == 0) GOTO 0x46; Pop(1)

0x28: PushEmpty(int, object)
0x29: Stack[-1] = Stack[-12]
0x2a: Call 0x61

0x2b: Pop(1)
0x2c: Push("Price")
0x2d: @ HasInvItemProperty(Stack[-6], Stack[-2], Stack[-1])
0x2e: Pop(2)
0x2f: Pop(0); Push((bool) Stack[-4] == 0)
0x30: IF (Stack[-1] == 0) GOTO 0x3d; Pop(1)

0x31: Push("Item with id :")
0x32: PushEmpty(int, object)
0x33: Stack[-1] = Stack[-13]
0x34: Call 0x61

0x35: Pop(1)
0x36: Pop(2); Push(Stack[-2] + Stack[-1]);
0x37: Push(" doesn't have price")
0x38: Pop(2); Push(Stack[-2] + Stack[-1]);
0x39: @ Trace(Stack[-1])
0x3a: Pop(1)
0x3b: Stack[-11] = (int) 1
0x3c: Return(); Pop(8)

0x3d: PushEmpty(int, object)
0x3e: Stack[-1] = Stack[-12]
0x3f: Call 0x61

0x40: Pop(1)
0x41: Push("Price")
0x42: @ GetInvItemProperty(Stack[-5], Stack[-2], Stack[-1])
0x43: Pop(2)
0x44: Stack[-11] = Stack[-3]
0x45: Return(); Pop(8)

0x46: PushEmpty(int, object)
0x47: Stack[-1] = Stack[-12]
0x48: Call 0x61

0x49: Pop(1)
0x4a: Push("BarterPrice")
0x4b: Pop(1); Push(Stack[-1] + Stack[-11]);
0x4c: @ HasInvItemProperty(Stack[-4], Stack[-2], Stack[-1])
0x4d: Pop(2)
0x4e: Pop(0); Push((bool) Stack[-2] == 0)
0x4f: IF (Stack[-1] == 0) GOTO 0x52; Pop(1)

0x50: Stack[-11] = (int) 0
0x51: Return(); Pop(8)

0x52: PushEmpty(int, object)
0x53: Stack[-1] = Stack[-12]
0x54: Call 0x61

0x55: Pop(1)
0x56: Push("BarterPrice")
0x57: Pop(1); Push(Stack[-1] + Stack[-11]);
0x58: @ GetInvItemProperty(Stack[-3], Stack[-2], Stack[-1])
0x59: Pop(2)
0x5a: Push((int) 0)
0x5b: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x5c: IF (Stack[-1] == 0) GOTO 0x5f; Pop(1)

0x5d: Stack[-11] = Stack[-1]
0x5e: Return(); Pop(8)

0x5f: Stack[-11] = -Stack[-1]; Pop(0);
0x60: Return(); Pop(8)

0x61: PushEmpty(int, int)
0x62: @@ GetItemID(Stack[-1])
0x63: Pop(0)
0x64: Stack[-4] = Stack[-1]
0x65: Return(); Pop(2)

0x66: PushEmpty(float, int, bool, float, int, bool)
0x67: Push((int) 0)
0x68: Pop(1); Push((bool) Stack[-8] != Stack[-1])
0x69: IF (Stack[-1] == 0) GOTO 0x6c; Pop(1)

0x6a: Stack[-10] = (int) 1
0x6b: Return(); Pop(6)

0x6c: Stack[-3] = (int) 1
0x6d: Stack[-2] = (int) 1
0x6e: Pop(0); Push((bool) Stack[-2] <= Stack[-8])
0x6f: IF (Stack[-1] == 0) GOTO 0x7d; Pop(1)

0x70: Push("sellf")
0x71: Pop(1); Push(Stack[-1] + Stack[-3]);
0x72: @@ HasProperty(Stack[-1], Stack[-2])
0x73: Pop(1)
0x74: Push(Stack[-1])
0x75: IF (Stack[-1] == 0) GOTO 0x7a; Pop(1)

0x76: Push("sellf")
0x77: Pop(1); Push(Stack[-1] + Stack[-3]);
0x78: @@ GetProperty(Stack[-1], Stack[-4])
0x79: Pop(1)
0x7a: Push((int) 1)
0x7b: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x7c: GOTO 0x6e

0x7d: Push((int) 100)
0x7e: Stack[-11] = Stack[-4] / Stack[-1]; Pop(1);
0x7f: Return(); Pop(6)

0x80: PushEmpty(float, int, bool, float, int, bool)
0x81: Push((int) 0)
0x82: Pop(1); Push((bool) Stack[-8] != Stack[-1])
0x83: IF (Stack[-1] == 0) GOTO 0x86; Pop(1)

0x84: Stack[-10] = (int) 1
0x85: Return(); Pop(6)

0x86: Stack[-3] = (int) 1
0x87: Stack[-2] = (int) 1
0x88: Pop(0); Push((bool) Stack[-2] <= Stack[-8])
0x89: IF (Stack[-1] == 0) GOTO 0x97; Pop(1)

0x8a: Push("buyf")
0x8b: Pop(1); Push(Stack[-1] + Stack[-3]);
0x8c: @@ HasProperty(Stack[-1], Stack[-2])
0x8d: Pop(1)
0x8e: Push(Stack[-1])
0x8f: IF (Stack[-1] == 0) GOTO 0x94; Pop(1)

0x90: Push("buyf")
0x91: Pop(1); Push(Stack[-1] + Stack[-3]);
0x92: @@ GetProperty(Stack[-1], Stack[-4])
0x93: Pop(1)
0x94: Push((int) 1)
0x95: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x96: GOTO 0x88

0x97: Push((int) 100)
0x98: Stack[-11] = Stack[-4] / Stack[-1]; Pop(1);
0x99: Return(); Pop(6)

0x9a: PushEmpty(object, bool, int, object, bool, int)
0x9b: @ GetContainer(Stack[-3])
0x9c: Pop(0)
0x9d: Push("barter")
0x9e: @@ HasProperty(Stack[-1], Stack[-3])
0x9f: Pop(1)
0xa0: Pop(0); Push((bool) Stack[-2] == 0)
0xa1: IF (Stack[-1] == 0) GOTO 0xa4; Pop(1)

0xa2: Stack[-7] = (int) 0
0xa3: Return(); Pop(6)

0xa4: Push("barter")
0xa5: @@ GetProperty(Stack[-1], Stack[-2])
0xa6: Pop(1)
0xa7: Stack[-7] = Stack[-1]
0xa8: Return(); Pop(6)

0xa9: Stack[-3] = 0
0xaa: PushEmpty()
0xab: Push((int) 1)
0xac: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0xad: IF (Stack[-1] == 0) GOTO 0xb5; Pop(1)

0xae: PushEmpty(int, int, object)
0xaf: Stack[-3] = Stack[-5]
0xb0: Stack[-2] = Stack[-4]
0xb1: Stack[-1] = Stack[-6]
0xb2: Call 0x129

0xb3: Pop(3)
0xb4: GOTO 0xdf

0xb5: Push((int) 2)
0xb6: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0xb7: IF (Stack[-1] == 0) GOTO 0xbf; Pop(1)

0xb8: PushEmpty(int, int, object)
0xb9: Stack[-3] = Stack[-5]
0xba: Stack[-2] = Stack[-4]
0xbb: Stack[-1] = Stack[-6]
0xbc: Call 0x174

0xbd: Pop(3)
0xbe: GOTO 0xdf

0xbf: Push((int) 3)
0xc0: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0xc1: IF (Stack[-1] == 0) GOTO 0xca; Pop(1)

0xc2: PushEmpty(int, int, object, bool)
0xc3: Stack[-4] = Stack[-6]
0xc4: Stack[-3] = Stack[-5]
0xc5: Stack[-2] = Stack[-7]
0xc6: Stack[-1] = (bool) 1
0xc7: Call 0x1e7

0xc8: Pop(4)
0xc9: GOTO 0xdf

0xca: Push((int) 4)
0xcb: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0xcc: IF (Stack[-1] == 0) GOTO 0xd5; Pop(1)

0xcd: PushEmpty(int, int, object, bool)
0xce: Stack[-4] = Stack[-6]
0xcf: Stack[-3] = Stack[-5]
0xd0: Stack[-2] = Stack[-7]
0xd1: Stack[-1] = (bool) 0
0xd2: Call 0x1e7

0xd3: Pop(4)
0xd4: GOTO 0xdf

0xd5: Push((int) 5)
0xd6: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0xd7: IF (Stack[-1] == 0) GOTO 0xdf; Pop(1)

0xd8: PushEmpty(int, int, string, object)
0xd9: Stack[-4] = Stack[-6]
0xda: Stack[-3] = Stack[-5]
0xdb: Stack[-2] = Stack[-8]
0xdc: Stack[-1] = Stack[-7]
0xdd: Call 0x265

0xde: Pop(4)
0xdf: Return(); Pop(0)

0xe0: PushEmpty()
0xe1: Push("bg")
0xe2: @ BlitClipped(Stack[-1], Stack[-5], Stack[-4], Stack[-5], Stack[-4], Stack[-3], Stack[-2])
0xe3: Pop(1)
0xe4: Push("border")
0xe5: Push((int) 1)
0xe6: @ StretchBlit(Stack[-2], Stack[-6], Stack[-5], Stack[-4], Stack[-1])
0xe7: Pop(2)
0xe8: Push("border")
0xe9: Pop(0); Push(Stack[-4] + Stack[-2]);
0xea: Push((int) 1)
0xeb: Pop(2); Push(Stack[-2] - Stack[-1]);
0xec: Push((int) 1)
0xed: @ StretchBlit(Stack[-3], Stack[-7], Stack[-2], Stack[-5], Stack[-1])
0xee: Pop(3)
0xef: Push("border")
0xf0: Push((int) 1)
0xf1: @ StretchBlit(Stack[-2], Stack[-6], Stack[-5], Stack[-1], Stack[-3])
0xf2: Pop(2)
0xf3: Push("border")
0xf4: Pop(0); Push(Stack[-5] + Stack[-3]);
0xf5: Push((int) 1)
0xf6: Pop(2); Push(Stack[-2] - Stack[-1]);
0xf7: Push((int) 1)
0xf8: @ StretchBlit(Stack[-3], Stack[-2], Stack[-6], Stack[-1], Stack[-4])
0xf9: Pop(3)
0xfa: Return(); Pop(0)

0xfb: PushEmpty(int, string, int, string)
0xfc: Pop(0); Push((bool) Stack[-5] == 0)
0xfd: IF (Stack[-1] == 0) GOTO 0xff; Pop(1)

0xfe: Return(); Pop(4)

0xff: PushEmpty(int, object)
0x100: Stack[-1] = Stack[-7]
0x101: Call 0x61

0x102: Stack[-4] = Stack[-2]
0x103: Pop(2)
0x104: @ GetInvItemSprite2(Stack[-1], Stack[-2])
0x105: Pop(0)
0x106: @ LoadImage(Stack[-1])
0x107: Pop(0)
0x108: Push((int) 218)
0x109: Push((int) 218)
0x10a: @ StretchBlit(Stack[-3], Stack[-9], Stack[-8], Stack[-2], Stack[-1])
0x10b: Pop(2)
0x10c: Push("border")
0x10d: Push((int) 218)
0x10e: Push((int) 1)
0x10f: @ StretchBlit(Stack[-3], Stack[-10], Stack[-9], Stack[-2], Stack[-1])
0x110: Pop(3)
0x111: Push("border")
0x112: Push((int) 218)
0x113: Pop(1); Push(Stack[-8] + Stack[-1]);
0x114: Push((int) 1)
0x115: Pop(2); Push(Stack[-2] - Stack[-1]);
0x116: Push((int) 218)
0x117: Push((int) 1)
0x118: @ StretchBlit(Stack[-4], Stack[-11], Stack[-3], Stack[-2], Stack[-1])
0x119: Pop(4)
0x11a: Push("border")
0x11b: Push((int) 1)
0x11c: Push((int) 218)
0x11d: @ StretchBlit(Stack[-3], Stack[-10], Stack[-9], Stack[-2], Stack[-1])
0x11e: Pop(3)
0x11f: Push("border")
0x120: Push((int) 218)
0x121: Pop(1); Push(Stack[-9] + Stack[-1]);
0x122: Push((int) 1)
0x123: Pop(2); Push(Stack[-2] - Stack[-1]);
0x124: Push((int) 1)
0x125: Push((int) 218)
0x126: @ StretchBlit(Stack[-4], Stack[-3], Stack[-10], Stack[-2], Stack[-1])
0x127: Pop(4)
0x128: Return(); Pop(4)

0x129: PushEmpty(int, string, bool, int, int, int, int, int, int, int, string, bool, int, int, int, int, int, int)
0x12a: Pop(0); Push((bool) Stack[-19] == 0)
0x12b: IF (Stack[-1] == 0) GOTO 0x12d; Pop(1)

0x12c: Return(); Pop(18)

0x12d: PushEmpty(int, object)
0x12e: Stack[-1] = Stack[-21]
0x12f: Call 0x61

0x130: Stack[-11] = Stack[-2]
0x131: Pop(2)
0x132: Push("Description")
0x133: @ HasInvItemProperty(Stack[-8], Stack[-10], Stack[-1])
0x134: Pop(1)
0x135: Push(Stack[-7])
0x136: IF (Stack[-1] == 0) GOTO 0x13d; Pop(1)

0x137: Push("Description")
0x138: @ GetInvItemProperty(Stack[-7], Stack[-10], Stack[-1])
0x139: Pop(1)
0x13a: @ GetStringByID(Stack[-8], Stack[-6])
0x13b: Pop(0)
0x13c: GOTO 0x13e

0x13d: Stack[-8] = "Error: Item doesnt have description (FIXME!)"
0x13e: Push("default")
0x13f: Push((int) 218)
0x140: @ GetTextHeightInWidth(Stack[-7], Stack[-2], Stack[-1], Stack[-10])
0x141: Pop(2)
0x142: @ GetScreenSize(Stack[-4], Stack[-3])
0x143: Pop(0)
0x144: Push((int) 266)
0x145: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x146: Pop(0); Push(Stack[-4] - Stack[-21]);
0x147: Push((int) 250)
0x148: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x149: IF (Stack[-1] == 0) GOTO 0x14c; Pop(1)

0x14a: Stack[-2] = Stack[-21]
0x14b: GOTO 0x14e

0x14c: Push((int) 250)
0x14d: Stack[-3] = Stack[-22] - Stack[-1]; Pop(1);
0x14e: Pop(0); Push((bool) Stack[-20] > Stack[-5])
0x14f: IF (Stack[-1] == 0) GOTO 0x152; Pop(1)

0x150: Stack[-1] = Stack[-20] - Stack[-5]; Pop(0);
0x151: GOTO 0x153

0x152: Stack[-1] = Stack[-20]
0x153: @ ScreenToClient(Stack[-2], Stack[-1])
0x154: Pop(0)
0x155: PushEmpty(int, int, int, int)
0x156: Stack[-4] = Stack[-6]
0x157: Stack[-3] = Stack[-5]
0x158: Stack[-2] = (int) 250
0x159: Stack[-1] = Stack[-9]
0x15a: Call 0xe0

0x15b: Pop(4)
0x15c: PushEmpty(int, int, object)
0x15d: Push((int) 16)
0x15e: Stack[-4] = Stack[-6] + Stack[-1]; Pop(1);
0x15f: Push((int) 16)
0x160: Stack[-3] = Stack[-5] + Stack[-1]; Pop(1);
0x161: Stack[-1] = Stack[-22]
0x162: Call 0xfb

0x163: Pop(3)
0x164: Push("default")
0x165: Push((int) 16)
0x166: Pop(1); Push(Stack[-4] + Stack[-1]);
0x167: Push((int) 16)
0x168: Pop(1); Push(Stack[-4] + Stack[-1]);
0x169: Push((int) 218)
0x16a: Pop(2); Push(Stack[-2] + Stack[-1]);
0x16b: Push((int) 16)
0x16c: Pop(2); Push(Stack[-2] + Stack[-1]);
0x16d: Push((int) 218)
0x16e: Push((float)0.64706)
0x16f: Push((float)0.64706)
0x170: Push((float)0.64706)
0x171: @ PrintInWidth(Stack[-12], Stack[-7], Stack[-6], Stack[-5], Stack[-4], Stack[-15], Stack[-3], Stack[-2], Stack[-1])
0x172: Pop(7)
0x173: Return(); Pop(18)

0x174: PushEmpty(int, object, string, string, int, int, float, int, float, float, int, int, int, int, int, int, int, int, object, string, string, int, int, float, int, float, float, int, int, int, int, int, int, int)
0x175: Pop(0); Push((bool) Stack[-35] == 0)
0x176: IF (Stack[-1] == 0) GOTO 0x178; Pop(1)

0x177: Return(); Pop(34)

0x178: @@ size(Stack[-17])
0x179: Pop(0)
0x17a: Pop(0); Push((bool) Stack[-17] == 0)
0x17b: IF (Stack[-1] == 0) GOTO 0x17d; Pop(1)

0x17c: Return(); Pop(34)

0x17d: Push(Stack[-17])
0x17e: IF (Stack[-1] == 0) GOTO 0x1bc; Pop(1)

0x17f: Stack[-12] = (int) 0
0x180: Stack[-11] = (int) 0
0x181: Stack[-10] = (int) 0
0x182: Pop(0); Push((bool) Stack[-10] < Stack[-17])
0x183: IF (Stack[-1] == 0) GOTO 0x18f; Pop(1)

0x184: @@ get(Stack[-16], Stack[-10])
0x185: Pop(0)
0x186: @@ GetTime(Stack[-9])
0x187: Pop(0)
0x188: Pop(0); Push((bool) Stack[-9] > Stack[-11])
0x189: IF (Stack[-1] == 0) GOTO 0x18c; Pop(1)

0x18a: Stack[-11] = Stack[-9]
0x18b: Stack[-12] = Stack[-10]
0x18c: Push((int) 1)
0x18d: Stack[-11] = Stack[-11] + Stack[-1]; Pop(1);
0x18e: GOTO 0x182

0x18f: @@ get(Stack[-16], Stack[-12])
0x190: Pop(0)
0x191: @@ GetTextID(Stack[-13])
0x192: Pop(0)
0x193: @ GetStringByID(Stack[-14], Stack[-13])
0x194: Pop(0)
0x195: @@ GetTime(Stack[-8])
0x196: Pop(0)
0x197: PushEmpty(int)
0x198: Stack[-1] = Stack[-9]
0x199: Stack[-8] = Stack[-1]
0x19a: Pop(1)
0x19b: Push((int) 60)
0x19c: Pop(0); Push(Stack[-9] - Stack[-8]);
0x19d: Stack[-8] = Stack[-2] * Stack[-1]; Pop(2);
0x19e: Push((int) 10)
0x19f: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x1a0: IF (Stack[-1] == 0) GOTO 0x1aa; Pop(1)

0x1a1: Push((int) 24)
0x1a2: Pop(1); Push(Stack[-8] % Stack[-1]);
0x1a3: Push(":0")
0x1a4: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1a5: Pop(1); Push(Stack[-1] + Stack[-7]);
0x1a6: Push(" ")
0x1a7: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1a8: Stack[-16] = Stack[-16] + Stack[-1]; Pop(1);
0x1a9: GOTO 0x1b2

0x1aa: Push((int) 24)
0x1ab: Pop(1); Push(Stack[-8] % Stack[-1]);
0x1ac: Push(":")
0x1ad: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1ae: Pop(1); Push(Stack[-1] + Stack[-7]);
0x1af: Push(" ")
0x1b0: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1b1: Stack[-16] = Stack[-16] + Stack[-1]; Pop(1);
0x1b2: Stack[-15] = Stack[-15] + Stack[-14]; Pop(0);
0x1b3: @@ remove(Stack[-12])
0x1b4: Pop(0)
0x1b5: Push((int) -1)
0x1b6: Stack[-18] = Stack[-18] + Stack[-1]; Pop(1);
0x1b7: Push(Stack[-17])
0x1b8: IF (Stack[-1] == 0) GOTO 0x1bb; Pop(1)

0x1b9: Push("

")
0x1ba: Stack[-16] = Stack[-16] + Stack[-1]; Pop(1);
0x1bb: GOTO 0x17d

0x1bc: Push("default")
0x1bd: Push((int) 218)
0x1be: @ GetTextHeightInWidth(Stack[-7], Stack[-2], Stack[-1], Stack[-17])
0x1bf: Pop(2)
0x1c0: Push((int) 32)
0x1c1: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x1c2: @ GetScreenSize(Stack[-4], Stack[-3])
0x1c3: Pop(0)
0x1c4: Pop(0); Push(Stack[-4] - Stack[-37]);
0x1c5: Push((int) 250)
0x1c6: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x1c7: IF (Stack[-1] == 0) GOTO 0x1ca; Pop(1)

0x1c8: Stack[-2] = Stack[-37]
0x1c9: GOTO 0x1cc

0x1ca: Push((int) 250)
0x1cb: Stack[-3] = Stack[-38] - Stack[-1]; Pop(1);
0x1cc: Pop(0); Push((bool) Stack[-36] > Stack[-5])
0x1cd: IF (Stack[-1] == 0) GOTO 0x1d0; Pop(1)

0x1ce: Stack[-1] = Stack[-36] - Stack[-5]; Pop(0);
0x1cf: GOTO 0x1d1

0x1d0: Stack[-1] = Stack[-36]
0x1d1: @ ScreenToClient(Stack[-2], Stack[-1])
0x1d2: Pop(0)
0x1d3: PushEmpty(int, int, int, int)
0x1d4: Stack[-4] = Stack[-6]
0x1d5: Stack[-3] = Stack[-5]
0x1d6: Stack[-2] = (int) 250
0x1d7: Stack[-1] = Stack[-9]
0x1d8: Call 0xe0

0x1d9: Pop(4)
0x1da: Push("default")
0x1db: Push((int) 16)
0x1dc: Pop(1); Push(Stack[-4] + Stack[-1]);
0x1dd: Push((int) 16)
0x1de: Pop(1); Push(Stack[-4] + Stack[-1]);
0x1df: Push((int) 218)
0x1e0: Push((float)0.64706)
0x1e1: Push((float)0.64706)
0x1e2: Push((float)0.64706)
0x1e3: @ PrintInWidth(Stack[-12], Stack[-7], Stack[-6], Stack[-5], Stack[-4], Stack[-22], Stack[-3], Stack[-2], Stack[-1])
0x1e4: Pop(7)
0x1e5: Return(); Pop(34)

0x1e6: Stack[-16] = 0
0x1e7: PushEmpty(object, float, int, int, int, float, string, bool, int, string, int, int, int, int, int, object, float, int, int, int, float, string, bool, int, string, int, int, int, int, int)
0x1e8: Pop(0); Push((bool) Stack[-32] == 0)
0x1e9: IF (Stack[-1] == 0) GOTO 0x1eb; Pop(1)

0x1ea: Return(); Pop(30)

0x1eb: @ GetContainer(Stack[-15])
0x1ec: Pop(0)
0x1ed: @ GetGameTime(Stack[-14])
0x1ee: Pop(0)
0x1ef: Push((int) 1)
0x1f0: Push((int) 24)
0x1f1: Pop(1); Push(Stack[-16] / Stack[-1]);
0x1f2: Stack[-15] = Stack[-2] + Stack[-1]; Pop(2);
0x1f3: PushEmpty(int, object)
0x1f4: Stack[-1] = Stack[-34]
0x1f5: Call 0x61

0x1f6: Stack[-14] = Stack[-2]
0x1f7: Pop(2)
0x1f8: PushEmpty(int, object, int)
0x1f9: Stack[-2] = Stack[-35]
0x1fa: PushEmpty(int)
0x1fb: Call 0x9a

0x1fc: Stack[-2] = Stack[-1]
0x1fd: Pop(1)
0x1fe: Call 0x24

0x1ff: Stack[-14] = Stack[-3]
0x200: Pop(3)
0x201: Push(Stack[-31])
0x202: IF (Stack[-1] == 0) GOTO 0x20e; Pop(1)

0x203: PushEmpty(float, object, int, int)
0x204: Stack[-3] = Stack[-19]
0x205: Stack[-2] = Stack[-17]
0x206: PushEmpty(int)
0x207: Call 0x9a

0x208: Stack[-2] = Stack[-1]
0x209: Pop(1)
0x20a: Call 0x66

0x20b: Stack[-14] = Stack[-4]
0x20c: Pop(4)
0x20d: GOTO 0x218

0x20e: PushEmpty(float, object, int, int)
0x20f: Stack[-3] = Stack[-19]
0x210: Stack[-2] = Stack[-17]
0x211: PushEmpty(int)
0x212: Call 0x9a

0x213: Stack[-2] = Stack[-1]
0x214: Pop(1)
0x215: Call 0x80

0x216: Stack[-14] = Stack[-4]
0x217: Pop(4)
0x218: Stack[-11] = Stack[-11] * Stack[-10]; Pop(0);
0x219: Push("Description")
0x21a: @ HasInvItemProperty(Stack[-9], Stack[-13], Stack[-1])
0x21b: Pop(1)
0x21c: Push(Stack[-8])
0x21d: IF (Stack[-1] == 0) GOTO 0x224; Pop(1)

0x21e: Push("Description")
0x21f: @ GetInvItemProperty(Stack[-8], Stack[-13], Stack[-1])
0x220: Pop(1)
0x221: @ GetStringByID(Stack[-9], Stack[-7])
0x222: Pop(0)
0x223: GOTO 0x225

0x224: Stack[-9] = "Error: Item doesnt have description (FIXME!)"
0x225: Push("
")
0x226: Stack[-10] = Stack[-10] + Stack[-1]; Pop(1);
0x227: Push((int) 200005)
0x228: @ GetStringByID(Stack[-7], Stack[-1])
0x229: Pop(1)
0x22a: Push(": ")
0x22b: Pop(1); Push(Stack[-7] + Stack[-1]);
0x22c: Pop(1); Push(Stack[-1] + Stack[-12]);
0x22d: Stack[-10] = Stack[-10] + Stack[-1]; Pop(1);
0x22e: Push("default")
0x22f: Push((int) 218)
0x230: @ GetTextHeightInWidth(Stack[-7], Stack[-2], Stack[-1], Stack[-11])
0x231: Pop(2)
0x232: Push((int) 266)
0x233: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x234: @ GetScreenSize(Stack[-4], Stack[-3])
0x235: Pop(0)
0x236: Pop(0); Push(Stack[-4] - Stack[-34]);
0x237: Push((int) 250)
0x238: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x239: IF (Stack[-1] == 0) GOTO 0x23c; Pop(1)

0x23a: Stack[-2] = Stack[-34]
0x23b: GOTO 0x23e

0x23c: Push((int) 250)
0x23d: Stack[-3] = Stack[-35] - Stack[-1]; Pop(1);
0x23e: Pop(0); Push((bool) Stack[-33] > Stack[-5])
0x23f: IF (Stack[-1] == 0) GOTO 0x242; Pop(1)

0x240: Stack[-1] = Stack[-33] - Stack[-5]; Pop(0);
0x241: GOTO 0x243

0x242: Stack[-1] = Stack[-33]
0x243: @ ScreenToClient(Stack[-2], Stack[-1])
0x244: Pop(0)
0x245: PushEmpty(int, int, int, int)
0x246: Stack[-4] = Stack[-6]
0x247: Stack[-3] = Stack[-5]
0x248: Stack[-2] = (int) 250
0x249: Stack[-1] = Stack[-9]
0x24a: Call 0xe0

0x24b: Pop(4)
0x24c: PushEmpty(int, int, object)
0x24d: Push((int) 16)
0x24e: Stack[-4] = Stack[-6] + Stack[-1]; Pop(1);
0x24f: Push((int) 16)
0x250: Stack[-3] = Stack[-5] + Stack[-1]; Pop(1);
0x251: Stack[-1] = Stack[-35]
0x252: Call 0xfb

0x253: Pop(3)
0x254: Push("default")
0x255: Push((int) 16)
0x256: Pop(1); Push(Stack[-4] + Stack[-1]);
0x257: Push((int) 16)
0x258: Pop(1); Push(Stack[-4] + Stack[-1]);
0x259: Push((int) 218)
0x25a: Pop(2); Push(Stack[-2] + Stack[-1]);
0x25b: Push((int) 16)
0x25c: Pop(2); Push(Stack[-2] + Stack[-1]);
0x25d: Push((int) 218)
0x25e: Push((float)0.64706)
0x25f: Push((float)0.64706)
0x260: Push((float)0.64706)
0x261: @ PrintInWidth(Stack[-12], Stack[-7], Stack[-6], Stack[-5], Stack[-4], Stack[-16], Stack[-3], Stack[-2], Stack[-1])
0x262: Pop(7)
0x263: Return(); Pop(30)

0x264: Stack[-15] = 0
0x265: PushEmpty(int, int, int, int, int, int, int, int, int, int)
0x266: Push("default")
0x267: Push((int) 218)
0x268: @ GetTextHeightInWidth(Stack[-7], Stack[-2], Stack[-1], Stack[-14])
0x269: Pop(2)
0x26a: Push((int) 32)
0x26b: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x26c: @ GetScreenSize(Stack[-4], Stack[-3])
0x26d: Pop(0)
0x26e: Pop(0); Push(Stack[-4] - Stack[-14]);
0x26f: Push((int) 250)
0x270: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x271: IF (Stack[-1] == 0) GOTO 0x274; Pop(1)

0x272: Stack[-2] = Stack[-14]
0x273: GOTO 0x276

0x274: Push((int) 250)
0x275: Stack[-3] = Stack[-15] - Stack[-1]; Pop(1);
0x276: Pop(0); Push((bool) Stack[-13] > Stack[-5])
0x277: IF (Stack[-1] == 0) GOTO 0x27a; Pop(1)

0x278: Stack[-1] = Stack[-13] - Stack[-5]; Pop(0);
0x279: GOTO 0x27b

0x27a: Stack[-1] = Stack[-13]
0x27b: @ ScreenToClient(Stack[-2], Stack[-1])
0x27c: Pop(0)
0x27d: PushEmpty(int, int, int, int)
0x27e: Stack[-4] = Stack[-6]
0x27f: Stack[-3] = Stack[-5]
0x280: Stack[-2] = (int) 250
0x281: Stack[-1] = Stack[-9]
0x282: Call 0xe0

0x283: Pop(4)
0x284: Push("default")
0x285: Push((int) 16)
0x286: Pop(1); Push(Stack[-4] + Stack[-1]);
0x287: Push((int) 16)
0x288: Pop(1); Push(Stack[-4] + Stack[-1]);
0x289: Push((int) 218)
0x28a: Push((float)0.64706)
0x28b: Push((float)0.64706)
0x28c: Push((float)0.64706)
0x28d: @ PrintInWidth(Stack[-12], Stack[-7], Stack[-6], Stack[-5], Stack[-4], Stack[-19], Stack[-3], Stack[-2], Stack[-1])
0x28e: Pop(7)
0x28f: Return(); Pop(10)

