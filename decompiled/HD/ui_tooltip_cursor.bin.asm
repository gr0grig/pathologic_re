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
	SetNeedUpdate (1 args)
	ProcessEvents (0 args)
	ClientToScreen (2 args)
	Blit (3 args)
	HasInvItemProperty (3 args)
	GetInvItemProperty (3 args)
	GetInvItemName (2 args)
	GetGameTime (1 args)
	GetContainer (1 args)
	GetInvItemSprite2 (2 args)
	LoadImage (1 args)
	BlitClipped (8 args)
	StretchBlit (6 args)
	GetStringByID (2 args)
	GetTextHeightInWidth (4 args)
	GetFontHeight (2 args)
	GetScreenSize (2 args)
	ScreenToClient (2 args)
	PrintInWidth (10 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object, object, string, int, float) Params = 0
		EVENT_16 Op = 0x9 Vars = (object, object)
		EVENT_1 Op = 0x1d Vars = (float)
		EVENT_0 Op = 0x48 Vars = ()


0x0: Push((bool) 1)
0x1: @ SetOwnerDraw(Stack[-1])
0x2: Pop(1)
0x3: Push((bool) 1)
0x4: @ SetNeedUpdate(Stack[-1])
0x5: Pop(1)
0x6: @ ProcessEvents()
0x7: Pop(0)
0x8: Return(); Pop(0)

0x9: PushEmpty()
0xa: Push(Stack[-2])
0xb: IF (Stack[-1] == 0) GOTO 0x1b; Pop(1)

0xc: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0xd: Stack[4 + Tasks[-1].StackPointer] = (int)0
0xe: @@ GetTooltipType(Stack[-3])
0xf: Pop(0)
0x10: @@ GetTooltipText(Stack[-2])
0x11: Pop(0)
0x12: @@ GetTooltipObject(Stack[-0])
0x13: Pop(0)
0x14: PushEmpty(int, string, object)
0x15: Stack[-3] = Stack[3 + Tasks[-1].StackPointer]
0x16: Stack[-2] = Stack[2 + Tasks[-1].StackPointer]
0x17: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x18: Call2 0x118

0x19: Pop(3)
0x1a: GOTO 0x1c

0x1b: Stack[1 + Tasks[-1].StackPointer] = 0
0x1c: Return(); Pop(0)

0x1d: PushEmpty(int, string, object, int, string, object)
0x1e: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == 0)
0x1f: IF (Stack[-1] == 0) GOTO 0x21; Pop(1)

0x20: Return(); Pop(6)

0x21: @@ GetTooltipType(Stack[-3])
0x22: Pop(0)
0x23: @@ GetTooltipText(Stack[-2])
0x24: Pop(0)
0x25: @@ GetTooltipObject(Stack[-1])
0x26: Pop(0)
0x27: PushEmpty(bool)
0x28: Stack[-1] = (bool) 1
0x29: PushEmpty(bool)
0x2a: Stack[-1] = (bool) 1
0x2b: PushEmpty(bool, object, object)
0x2c: Stack[-2] = Stack[-6]
0x2d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2e: Call2 0x4c2

0x2f: Pop(2)
0x30: Pop(1); Push((bool) Stack[-1] == 0)
0x31: IF (Stack[-1] == 0) GOTO 0x35; Pop(1)

0x32: Pop(0); Push((bool) Stack[-5] != Stack[3 + Tasks[-1].StackPointer])
0x33: IF (Stack[-1] == 0) GOTO 0x35; Pop(1)

0x34: Stack[-1] = (bool) 0
0x35: IF (Stack[-1] == 0) GOTO 0x39; Pop(1)

0x36: Pop(0); Push((bool) Stack[-3] != Stack[2 + Tasks[-1].StackPointer])
0x37: IF (Stack[-1] == 0) GOTO 0x39; Pop(1)

0x38: Stack[-1] = (bool) 0
0x39: IF (Stack[-1] == 0) GOTO 0x45; Pop(1)

0x3a: Stack[3 + Tasks[-1].StackPointer] = Stack[-3]
0x3b: Stack[2 + Tasks[-1].StackPointer] = Stack[-2]
0x3c: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x3d: PushEmpty(int, string, object)
0x3e: Stack[-3] = Stack[3 + Tasks[-1].StackPointer]
0x3f: Stack[-2] = Stack[2 + Tasks[-1].StackPointer]
0x40: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x41: Call2 0x118

0x42: Pop(3)
0x43: Stack[4 + Tasks[-1].StackPointer] = (int)0
0x44: GOTO 0x46

0x45: Stack[4 + Tasks[-1].StackPointer] = Stack[4 + Tasks[-1].StackPointer] + Stack[-7]; Pop(0);
0x46: Return(); Pop(6)

0x47: Stack[-1] = 0
0x48: PushEmpty(float, int, int, float, int, int)
0x49: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == 0)
0x4a: IF (Stack[-1] == 0) GOTO 0x4c; Pop(1)

0x4b: Return(); Pop(6)

0x4c: Push((float)0.5)
0x4d: Pop(1); Push((bool) Stack[4 + Tasks[-1].StackPointer] < Stack[-1])
0x4e: IF (Stack[-1] == 0) GOTO 0x51; Pop(1)

0x4f: Stack[-3] = (int) 0
0x50: GOTO 0x5a

0x51: Push((float)0.65)
0x52: Pop(1); Push((bool) Stack[4 + Tasks[-1].StackPointer] < Stack[-1])
0x53: IF (Stack[-1] == 0) GOTO 0x59; Pop(1)

0x54: Push((float)0.5)
0x55: Pop(1); Push(Stack[4 + StackPtr] - Stack[-1]);
0x56: Push((float)0.15)
0x57: Stack[-5] = Stack[-2] / Stack[-1]; Pop(2);
0x58: GOTO 0x5a

0x59: Stack[-3] = (int) 1
0x5a: Stack[-2] = (int) 0
0x5b: Stack[-1] = (int) 0
0x5c: @ ClientToScreen(Stack[-2], Stack[-1])
0x5d: Pop(0)
0x5e: PushEmpty(int, string, object, int, int, float)
0x5f: Stack[-6] = Stack[3 + Tasks[-1].StackPointer]
0x60: Stack[-5] = Stack[2 + Tasks[-1].StackPointer]
0x61: Stack[-4] = Stack[0 + Tasks[-1].StackPointer]
0x62: Stack[-3] = Stack[-8]
0x63: Stack[-2] = Stack[-7]
0x64: Stack[-1] = Stack[-9]
0x65: Call2 0x125

0x66: Pop(6)
0x67: Push("default")
0x68: Push((int) 0)
0x69: Push((int) 0)
0x6a: @ Blit(Stack[-3], Stack[-2], Stack[-1])
0x6b: Pop(3)
0x6c: Return(); Pop(6)

0x6d: PushEmpty(int, int)
0x6e: @@ GetItemID(Stack[-1])
0x6f: Pop(0)
0x70: Stack[-4] = Stack[-1]
0x71: Return(); Pop(2)

0x72: PushEmpty(int, int, int, string, bool, bool, int, bool, int, int, int, int, string, bool, bool, int, bool, int)
0x73: Push((int) 0)
0x74: Pop(1); Push((bool) Stack[-20] == Stack[-1])
0x75: IF (Stack[-1] == 0) GOTO 0xa6; Pop(1)

0x76: PushEmpty(int)
0x77: Call2 0xcb

0x78: Stack[-10] = Stack[-1]
0x79: Pop(1)
0x7a: Stack[-8] = (int) 0
0x7b: Stack[-7] = (int) 1
0x7c: Pop(0); Push((bool) Stack[-7] <= Stack[-9])
0x7d: IF (Stack[-1] == 0) GOTO 0x95; Pop(1)

0x7e: Stack[-6] = "Price"
0x7f: Push((int) 1)
0x80: Pop(1); Push((bool) Stack[-8] != Stack[-1])
0x81: IF (Stack[-1] == 0) GOTO 0x83; Pop(1)

0x82: Stack[-6] = Stack[-6] + Stack[-7]; Pop(0);
0x83: PushEmpty(int, object)
0x84: Stack[-1] = Stack[-22]
0x85: Call2 0x6d

0x86: Pop(1)
0x87: @ HasInvItemProperty(Stack[-6], Stack[-1], Stack[-7])
0x88: Pop(1)
0x89: Pop(0); Push((bool) Stack[-5] == 0)
0x8a: IF (Stack[-1] == 0) GOTO 0x8c; Pop(1)

0x8b: GOTO 0x92

0x8c: PushEmpty(int, object)
0x8d: Stack[-1] = Stack[-22]
0x8e: Call2 0x6d

0x8f: Pop(1)
0x90: @ GetInvItemProperty(Stack[-9], Stack[-1], Stack[-7])
0x91: Pop(1)
0x92: Push((int) 1)
0x93: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x94: GOTO 0x7c

0x95: Push("durability")
0x96: @@ HasProperty(Stack[-5], Stack[-1])
0x97: Pop(1)
0x98: Push(Stack[-4])
0x99: IF (Stack[-1] == 0) GOTO 0xa4; Pop(1)

0x9a: Push("durability")
0x9b: @@ GetProperty(Stack[-4], Stack[-1])
0x9c: Pop(1)
0x9d: Push((float)0.5)
0x9e: Push((float)1.0)
0x9f: Push((float)100.0)
0xa0: Pop(1); Push(Stack[-6] / Stack[-1]);
0xa1: Pop(2); Push(Stack[-2] + Stack[-1]);
0xa2: Pop(2); Push(Stack[-2] * Stack[-1]);
0xa3: Stack[-9] = Stack[-9] * Stack[-1]; Pop(1);
0xa4: Stack[-21] = Stack[-8]
0xa5: Return(); Pop(18)

0xa6: PushEmpty(int, object)
0xa7: Stack[-1] = Stack[-22]
0xa8: Call2 0x6d

0xa9: Pop(1)
0xaa: Push("BarterPrice")
0xab: Pop(1); Push(Stack[-1] + Stack[-21]);
0xac: @ HasInvItemProperty(Stack[-4], Stack[-2], Stack[-1])
0xad: Pop(2)
0xae: Pop(0); Push((bool) Stack[-2] == 0)
0xaf: IF (Stack[-1] == 0) GOTO 0xb2; Pop(1)

0xb0: Stack[-21] = (int) 0
0xb1: Return(); Pop(18)

0xb2: PushEmpty(int, object)
0xb3: Stack[-1] = Stack[-22]
0xb4: Call2 0x6d

0xb5: Pop(1)
0xb6: Push("BarterPrice")
0xb7: Pop(1); Push(Stack[-1] + Stack[-21]);
0xb8: @ GetInvItemProperty(Stack[-3], Stack[-2], Stack[-1])
0xb9: Pop(2)
0xba: Push((int) 0)
0xbb: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xbc: IF (Stack[-1] == 0) GOTO 0xbf; Pop(1)

0xbd: Stack[-21] = Stack[-1]
0xbe: Return(); Pop(18)

0xbf: Stack[-21] = -Stack[-1]; Pop(0);
0xc0: Return(); Pop(18)

0xc1: PushEmpty(int, string, int, string)
0xc2: PushEmpty(int, object)
0xc3: Stack[-1] = Stack[-7]
0xc4: Call2 0x6d

0xc5: Stack[-4] = Stack[-2]
0xc6: Pop(2)
0xc7: @ GetInvItemName(Stack[-1], Stack[-2])
0xc8: Pop(0)
0xc9: Stack[-6] = Stack[-1]
0xca: Return(); Pop(4)

0xcb: PushEmpty(float, float)
0xcc: @ GetGameTime(Stack[-1])
0xcd: Pop(0)
0xce: Push((int) 1)
0xcf: PushEmpty(int)
0xd0: Push((int) 24)
0xd1: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0xd2: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0xd3: Return(); Pop(2)

0xd4: PushEmpty(float, int, bool, float, int, bool)
0xd5: Push((int) 0)
0xd6: Pop(1); Push((bool) Stack[-8] != Stack[-1])
0xd7: IF (Stack[-1] == 0) GOTO 0xda; Pop(1)

0xd8: Stack[-10] = (int) 1
0xd9: Return(); Pop(6)

0xda: Stack[-3] = (int) 1
0xdb: Stack[-2] = (int) 1
0xdc: Pop(0); Push((bool) Stack[-2] <= Stack[-8])
0xdd: IF (Stack[-1] == 0) GOTO 0xeb; Pop(1)

0xde: Push("sellf")
0xdf: Pop(1); Push(Stack[-1] + Stack[-3]);
0xe0: @@ HasProperty(Stack[-1], Stack[-2])
0xe1: Pop(1)
0xe2: Push(Stack[-1])
0xe3: IF (Stack[-1] == 0) GOTO 0xe8; Pop(1)

0xe4: Push("sellf")
0xe5: Pop(1); Push(Stack[-1] + Stack[-3]);
0xe6: @@ GetProperty(Stack[-1], Stack[-4])
0xe7: Pop(1)
0xe8: Push((int) 1)
0xe9: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0xea: GOTO 0xdc

0xeb: Push((int) 100)
0xec: Stack[-11] = Stack[-4] / Stack[-1]; Pop(1);
0xed: Return(); Pop(6)

0xee: PushEmpty(float, int, bool, float, int, bool)
0xef: Push((int) 0)
0xf0: Pop(1); Push((bool) Stack[-8] != Stack[-1])
0xf1: IF (Stack[-1] == 0) GOTO 0xf4; Pop(1)

0xf2: Stack[-10] = (int) 1
0xf3: Return(); Pop(6)

0xf4: Stack[-3] = (int) 1
0xf5: Stack[-2] = (int) 1
0xf6: Pop(0); Push((bool) Stack[-2] <= Stack[-8])
0xf7: IF (Stack[-1] == 0) GOTO 0x105; Pop(1)

0xf8: Push("buyf")
0xf9: Pop(1); Push(Stack[-1] + Stack[-3]);
0xfa: @@ HasProperty(Stack[-1], Stack[-2])
0xfb: Pop(1)
0xfc: Push(Stack[-1])
0xfd: IF (Stack[-1] == 0) GOTO 0x102; Pop(1)

0xfe: Push("buyf")
0xff: Pop(1); Push(Stack[-1] + Stack[-3]);
0x100: @@ GetProperty(Stack[-1], Stack[-4])
0x101: Pop(1)
0x102: Push((int) 1)
0x103: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x104: GOTO 0xf6

0x105: Push((int) 100)
0x106: Stack[-11] = Stack[-4] / Stack[-1]; Pop(1);
0x107: Return(); Pop(6)

0x108: PushEmpty(object, bool, int, object, bool, int)
0x109: @ GetContainer(Stack[-3])
0x10a: Pop(0)
0x10b: Push("barter")
0x10c: @@ HasProperty(Stack[-1], Stack[-3])
0x10d: Pop(1)
0x10e: Pop(0); Push((bool) Stack[-2] == 0)
0x10f: IF (Stack[-1] == 0) GOTO 0x112; Pop(1)

0x110: Stack[-7] = (int) 0
0x111: Return(); Pop(6)

0x112: Push("barter")
0x113: @@ GetProperty(Stack[-1], Stack[-2])
0x114: Pop(1)
0x115: Stack[-7] = Stack[-1]
0x116: Return(); Pop(6)

0x117: Stack[-3] = 0
0x118: PushEmpty(int, string, int, string)
0x119: Push(Stack[-5])
0x11a: IF (Stack[-1] == 0) GOTO 0x124; Pop(1)

0x11b: PushEmpty(int, object)
0x11c: Stack[-1] = Stack[-7]
0x11d: Call2 0x6d

0x11e: Stack[-4] = Stack[-2]
0x11f: Pop(2)
0x120: @ GetInvItemSprite2(Stack[-1], Stack[-2])
0x121: Pop(0)
0x122: @ LoadImage(Stack[-1])
0x123: Pop(0)
0x124: Return(); Pop(4)

0x125: PushEmpty()
0x126: Push((int) 1)
0x127: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x128: IF (Stack[-1] == 0) GOTO 0x132; Pop(1)

0x129: PushEmpty(int, int, object, string, float)
0x12a: Stack[-5] = Stack[-8]
0x12b: Stack[-4] = Stack[-7]
0x12c: Stack[-3] = Stack[-9]
0x12d: Stack[-2] = Stack[-10]
0x12e: Stack[-1] = Stack[-6]
0x12f: Call2 0x1a8

0x130: Pop(5)
0x131: GOTO 0x160

0x132: Push((int) 2)
0x133: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x134: IF (Stack[-1] == 0) GOTO 0x13d; Pop(1)

0x135: PushEmpty(int, int, object, float)
0x136: Stack[-4] = Stack[-7]
0x137: Stack[-3] = Stack[-6]
0x138: Stack[-2] = Stack[-8]
0x139: Stack[-1] = Stack[-5]
0x13a: Call2 0x414

0x13b: Pop(4)
0x13c: GOTO 0x160

0x13d: Push((int) 3)
0x13e: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x13f: IF (Stack[-1] == 0) GOTO 0x149; Pop(1)

0x140: PushEmpty(int, int, object, bool, float)
0x141: Stack[-5] = Stack[-8]
0x142: Stack[-4] = Stack[-7]
0x143: Stack[-3] = Stack[-9]
0x144: Stack[-2] = (bool) 1
0x145: Stack[-1] = Stack[-6]
0x146: Call2 0x2cd

0x147: Pop(5)
0x148: GOTO 0x160

0x149: Push((int) 4)
0x14a: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x14b: IF (Stack[-1] == 0) GOTO 0x155; Pop(1)

0x14c: PushEmpty(int, int, object, bool, float)
0x14d: Stack[-5] = Stack[-8]
0x14e: Stack[-4] = Stack[-7]
0x14f: Stack[-3] = Stack[-9]
0x150: Stack[-2] = (bool) 0
0x151: Stack[-1] = Stack[-6]
0x152: Call2 0x2cd

0x153: Pop(5)
0x154: GOTO 0x160

0x155: Push((int) 5)
0x156: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x157: IF (Stack[-1] == 0) GOTO 0x160; Pop(1)

0x158: PushEmpty(int, int, string, object, float)
0x159: Stack[-5] = Stack[-8]
0x15a: Stack[-4] = Stack[-7]
0x15b: Stack[-3] = Stack[-10]
0x15c: Stack[-2] = Stack[-9]
0x15d: Stack[-1] = Stack[-6]
0x15e: Call2 0x48f

0x15f: Pop(5)
0x160: Return(); Pop(0)

0x161: PushEmpty()
0x162: Push("bg")
0x163: @ BlitClipped(Stack[-1], Stack[-6], Stack[-5], Stack[-6], Stack[-5], Stack[-4], Stack[-3], Stack[-2])
0x164: Pop(1)
0x165: Push("border")
0x166: Push((int) 1)
0x167: @ StretchBlit(Stack[-2], Stack[-7], Stack[-6], Stack[-5], Stack[-1], Stack[-3])
0x168: Pop(2)
0x169: Push("border")
0x16a: Pop(0); Push(Stack[-5] + Stack[-3]);
0x16b: Push((int) 1)
0x16c: Pop(2); Push(Stack[-2] - Stack[-1]);
0x16d: Push((int) 1)
0x16e: @ StretchBlit(Stack[-3], Stack[-8], Stack[-2], Stack[-6], Stack[-1], Stack[-4])
0x16f: Pop(3)
0x170: Push("border")
0x171: Push((int) 1)
0x172: @ StretchBlit(Stack[-2], Stack[-7], Stack[-6], Stack[-1], Stack[-4], Stack[-3])
0x173: Pop(2)
0x174: Push("border")
0x175: Pop(0); Push(Stack[-6] + Stack[-4]);
0x176: Push((int) 1)
0x177: Pop(2); Push(Stack[-2] - Stack[-1]);
0x178: Push((int) 1)
0x179: @ StretchBlit(Stack[-3], Stack[-2], Stack[-7], Stack[-1], Stack[-5], Stack[-4])
0x17a: Pop(3)
0x17b: Return(); Pop(0)

0x17c: PushEmpty(int, string, int, string)
0x17d: Pop(0); Push((bool) Stack[-6] == 0)
0x17e: IF (Stack[-1] == 0) GOTO 0x180; Pop(1)

0x17f: Return(); Pop(4)

0x180: PushEmpty(int, object)
0x181: Stack[-1] = Stack[-8]
0x182: Call2 0x6d

0x183: Stack[-4] = Stack[-2]
0x184: Pop(2)
0x185: @ GetInvItemSprite2(Stack[-1], Stack[-2])
0x186: Pop(0)
0x187: Push((int) 218)
0x188: Push((int) 218)
0x189: @ StretchBlit(Stack[-3], Stack[-10], Stack[-9], Stack[-2], Stack[-1], Stack[-7])
0x18a: Pop(2)
0x18b: Push("border")
0x18c: Push((int) 218)
0x18d: Push((int) 1)
0x18e: @ StretchBlit(Stack[-3], Stack[-11], Stack[-10], Stack[-2], Stack[-1], Stack[-8])
0x18f: Pop(3)
0x190: Push("border")
0x191: Push((int) 218)
0x192: Pop(1); Push(Stack[-9] + Stack[-1]);
0x193: Push((int) 1)
0x194: Pop(2); Push(Stack[-2] - Stack[-1]);
0x195: Push((int) 218)
0x196: Push((int) 1)
0x197: @ StretchBlit(Stack[-4], Stack[-12], Stack[-3], Stack[-2], Stack[-1], Stack[-9])
0x198: Pop(4)
0x199: Push("border")
0x19a: Push((int) 1)
0x19b: Push((int) 218)
0x19c: @ StretchBlit(Stack[-3], Stack[-11], Stack[-10], Stack[-2], Stack[-1], Stack[-8])
0x19d: Pop(3)
0x19e: Push("border")
0x19f: Push((int) 218)
0x1a0: Pop(1); Push(Stack[-10] + Stack[-1]);
0x1a1: Push((int) 1)
0x1a2: Pop(2); Push(Stack[-2] - Stack[-1]);
0x1a3: Push((int) 1)
0x1a4: Push((int) 218)
0x1a5: @ StretchBlit(Stack[-4], Stack[-3], Stack[-11], Stack[-2], Stack[-1], Stack[-9])
0x1a6: Pop(4)
0x1a7: Return(); Pop(4)

0x1a8: PushEmpty(int, string, string, string, bool, int, int, int, bool, bool, int, int, bool, bool, int, int, string, bool, float, float, string, string, string, int, int, float, float, float, float, string, string, int, int, int, int, int, int, int, string, string, string, bool, int, int, int, bool, bool, int, int, bool, bool, int, int, string, bool, float, float, string, string, string, int, int, float, float, float, float, string, string, int, int, int, int, int, int)
0x1a9: Pop(0); Push((bool) Stack[-77] == 0)
0x1aa: IF (Stack[-1] == 0) GOTO 0x1ac; Pop(1)

0x1ab: Return(); Pop(74)

0x1ac: PushEmpty(int, object)
0x1ad: Stack[-1] = Stack[-79]
0x1ae: Call2 0x6d

0x1af: Stack[-39] = Stack[-2]
0x1b0: Pop(2)
0x1b1: Push("Description")
0x1b2: @ HasInvItemProperty(Stack[-34], Stack[-38], Stack[-1])
0x1b3: Pop(1)
0x1b4: Push(Stack[-33])
0x1b5: IF (Stack[-1] == 0) GOTO 0x1bc; Pop(1)

0x1b6: Push("Description")
0x1b7: @ GetInvItemProperty(Stack[-33], Stack[-38], Stack[-1])
0x1b8: Pop(1)
0x1b9: @ GetStringByID(Stack[-36], Stack[-32])
0x1ba: Pop(0)
0x1bb: GOTO 0x1bd

0x1bc: Stack[-36] = "Error: Item doesnt have description (FIXME!)"
0x1bd: Push("default")
0x1be: Push((int) 268)
0x1bf: @ GetTextHeightInWidth(Stack[-33], Stack[-2], Stack[-1], Stack[-38])
0x1c0: Pop(2)
0x1c1: Push("default")
0x1c2: @ GetFontHeight(Stack[-31], Stack[-1])
0x1c3: Pop(1)
0x1c4: Stack[-31] = Stack[-31] + Stack[-30]; Pop(0);
0x1c5: Push("HasDurability")
0x1c6: @ HasInvItemProperty(Stack[-30], Stack[-38], Stack[-1])
0x1c7: Pop(1)
0x1c8: Push("durability")
0x1c9: @@ HasProperty(Stack[-29], Stack[-1])
0x1ca: Pop(1)
0x1cb: PushEmpty(bool)
0x1cc: Stack[-1] = (bool) 1
0x1cd: Push(Stack[-29])
0x1ce: IF (Stack[-1] == 0) GOTO 0x1d2; Pop(1)

0x1cf: Push(Stack[-30])
0x1d0: IF (Stack[-1] == 0) GOTO 0x1d2; Pop(1)

0x1d1: Stack[-1] = (bool) 0
0x1d2: IF (Stack[-1] == 0) GOTO 0x1e9; Pop(1)

0x1d3: Push(Stack[-28])
0x1d4: IF (Stack[-1] == 0) GOTO 0x1d9; Pop(1)

0x1d5: Push("durability")
0x1d6: @@ GetProperty(Stack[-28], Stack[-1])
0x1d7: Pop(1)
0x1d8: GOTO 0x1da

0x1d9: Stack[-27] = (int) 100
0x1da: Push((int) 7)
0x1db: @ GetStringByID(Stack[-36], Stack[-1])
0x1dc: Pop(1)
0x1dd: Push(" ")
0x1de: Pop(1); Push(Stack[-1] + Stack[-28]);
0x1df: Push("%")
0x1e0: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1e1: Stack[-36] = Stack[-36] + Stack[-1]; Pop(1);
0x1e2: Push("default")
0x1e3: Push((int) 268)
0x1e4: @ GetTextHeightInWidth(Stack[-28], Stack[-2], Stack[-1], Stack[-37])
0x1e5: Pop(2)
0x1e6: Push((int) 2)
0x1e7: Pop(1); Push(Stack[-27] * Stack[-1]);
0x1e8: Stack[-32] = Stack[-32] + Stack[-1]; Pop(1);
0x1e9: Push("HasUses")
0x1ea: @ HasInvItemProperty(Stack[-26], Stack[-38], Stack[-1])
0x1eb: Pop(1)
0x1ec: Push("uses")
0x1ed: @@ HasProperty(Stack[-25], Stack[-1])
0x1ee: Pop(1)
0x1ef: PushEmpty(bool)
0x1f0: Stack[-1] = (bool) 1
0x1f1: Push(Stack[-25])
0x1f2: IF (Stack[-1] == 0) GOTO 0x1f6; Pop(1)

0x1f3: Push(Stack[-26])
0x1f4: IF (Stack[-1] == 0) GOTO 0x1f6; Pop(1)

0x1f5: Stack[-1] = (bool) 0
0x1f6: IF (Stack[-1] == 0) GOTO 0x209; Pop(1)

0x1f7: Push(Stack[-24])
0x1f8: IF (Stack[-1] == 0) GOTO 0x1fd; Pop(1)

0x1f9: Push("uses")
0x1fa: @@ GetProperty(Stack[-24], Stack[-1])
0x1fb: Pop(1)
0x1fc: GOTO 0x1fe

0x1fd: Stack[-23] = (int) 1
0x1fe: Push((int) 1006)
0x1ff: @ GetStringByID(Stack[-35], Stack[-1])
0x200: Pop(1)
0x201: Push(" ")
0x202: Pop(1); Push(Stack[-1] + Stack[-24]);
0x203: Stack[-35] = Stack[-35] + Stack[-1]; Pop(1);
0x204: Push("default")
0x205: Push((int) 268)
0x206: @ GetTextHeightInWidth(Stack[-24], Stack[-2], Stack[-1], Stack[-36])
0x207: Pop(2)
0x208: Stack[-31] = Stack[-31] + Stack[-22]; Pop(0);
0x209: Stack[-20] = (bool) 0
0x20a: PushEmpty(string, object)
0x20b: Stack[-1] = Stack[-79]
0x20c: Call2 0xc1

0x20d: Pop(1)
0x20e: Push("grass_combination")
0x20f: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x210: IF (Stack[-1] == 0) GOTO 0x233; Pop(1)

0x211: Stack[-20] = (bool) 1
0x212: Push("im_inc")
0x213: @@ GetProperty(Stack[-20], Stack[-1])
0x214: Pop(1)
0x215: Push("hl_inc")
0x216: @@ GetProperty(Stack[-19], Stack[-1])
0x217: Pop(1)
0x218: Push((int) 8)
0x219: @ GetStringByID(Stack[-18], Stack[-1])
0x21a: Pop(1)
0x21b: Push((int) 9)
0x21c: @ GetStringByID(Stack[-16], Stack[-1])
0x21d: Pop(1)
0x21e: Push((int) 100)
0x21f: Stack[-15] = Stack[-20] * Stack[-1]; Pop(1);
0x220: Push(" ")
0x221: Pop(1); Push(Stack[-18] + Stack[-1]);
0x222: Pop(1); Push(Stack[-1] + Stack[-15]);
0x223: Push("%
")
0x224: Stack[-23] = Stack[-2] + Stack[-1]; Pop(2);
0x225: Push((int) 100)
0x226: Stack[-15] = Stack[-19] * Stack[-1]; Pop(1);
0x227: Push(" ")
0x228: Pop(1); Push(Stack[-16] + Stack[-1]);
0x229: Pop(1); Push(Stack[-1] + Stack[-15]);
0x22a: Push("%
")
0x22b: Pop(2); Push(Stack[-2] + Stack[-1]);
0x22c: Stack[-22] = Stack[-22] + Stack[-1]; Pop(1);
0x22d: Push("default")
0x22e: Push((int) 268)
0x22f: @ GetTextHeightInWidth(Stack[-15], Stack[-2], Stack[-1], Stack[-23])
0x230: Pop(2)
0x231: Stack[-31] = Stack[-31] + Stack[-13]; Pop(0);
0x232: GOTO 0x25b

0x233: PushEmpty(string, object)
0x234: Stack[-1] = Stack[-79]
0x235: Call2 0xc1

0x236: Pop(1)
0x237: Push("organ_combination")
0x238: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x239: IF (Stack[-1] == 0) GOTO 0x25b; Pop(1)

0x23a: Stack[-20] = (bool) 1
0x23b: Push("DiseaseRate")
0x23c: @@ GetProperty(Stack[-13], Stack[-1])
0x23d: Pop(1)
0x23e: Push("HealthIncrease")
0x23f: @@ GetProperty(Stack[-11], Stack[-1])
0x240: Pop(1)
0x241: Push((int) 11)
0x242: @ GetStringByID(Stack[-9], Stack[-1])
0x243: Pop(1)
0x244: Push((int) 13)
0x245: @ GetStringByID(Stack[-8], Stack[-1])
0x246: Pop(1)
0x247: Push((int) 100)
0x248: Stack[-7] = Stack[-13] * Stack[-1]; Pop(1);
0x249: Push(" ")
0x24a: Pop(1); Push(Stack[-9] + Stack[-1]);
0x24b: Pop(1); Push(Stack[-1] + Stack[-7]);
0x24c: Push("%
")
0x24d: Stack[-23] = Stack[-2] + Stack[-1]; Pop(2);
0x24e: Push((int) 100)
0x24f: Stack[-7] = Stack[-11] * Stack[-1]; Pop(1);
0x250: Push(" ")
0x251: Pop(1); Push(Stack[-8] + Stack[-1]);
0x252: Pop(1); Push(Stack[-1] + Stack[-7]);
0x253: Push("%
")
0x254: Pop(2); Push(Stack[-2] + Stack[-1]);
0x255: Stack[-22] = Stack[-22] + Stack[-1]; Pop(1);
0x256: Push("default")
0x257: Push((int) 268)
0x258: @ GetTextHeightInWidth(Stack[-7], Stack[-2], Stack[-1], Stack[-23])
0x259: Pop(2)
0x25a: Stack[-31] = Stack[-31] + Stack[-5]; Pop(0);
0x25b: @ GetScreenSize(Stack[-4], Stack[-3])
0x25c: Pop(0)
0x25d: Push((int) 266)
0x25e: Stack[-32] = Stack[-32] + Stack[-1]; Pop(1);
0x25f: Pop(0); Push(Stack[-4] - Stack[-79]);
0x260: Push((int) 300)
0x261: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x262: IF (Stack[-1] == 0) GOTO 0x265; Pop(1)

0x263: Stack[-2] = Stack[-79]
0x264: GOTO 0x267

0x265: Push((int) 300)
0x266: Stack[-3] = Stack[-80] - Stack[-1]; Pop(1);
0x267: Pop(0); Push((bool) Stack[-78] > Stack[-31])
0x268: IF (Stack[-1] == 0) GOTO 0x26b; Pop(1)

0x269: Stack[-1] = Stack[-78] - Stack[-31]; Pop(0);
0x26a: GOTO 0x272

0x26b: Stack[-1] = Stack[-78]
0x26c: Pop(0); Push(Stack[-1] + Stack[-31]);
0x26d: Push((int) 600)
0x26e: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x26f: IF (Stack[-1] == 0) GOTO 0x272; Pop(1)

0x270: Push((int) 600)
0x271: Stack[-2] = Stack[-1] - Stack[-32]; Pop(1);
0x272: @ ScreenToClient(Stack[-2], Stack[-1])
0x273: Pop(0)
0x274: PushEmpty(int, int, int, int, float)
0x275: Stack[-5] = Stack[-7]
0x276: Stack[-4] = Stack[-6]
0x277: Stack[-3] = (int) 300
0x278: Stack[-2] = Stack[-36]
0x279: Stack[-1] = Stack[-80]
0x27a: Call2 0x161

0x27b: Pop(5)
0x27c: PushEmpty(int, int, object, float)
0x27d: Push((int) 41)
0x27e: Stack[-5] = Stack[-7] + Stack[-1]; Pop(1);
0x27f: Push((int) 16)
0x280: Stack[-4] = Stack[-6] + Stack[-1]; Pop(1);
0x281: Stack[-2] = Stack[-81]
0x282: Stack[-1] = Stack[-79]
0x283: Call2 0x17c

0x284: Pop(4)
0x285: Push((int) 250)
0x286: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x287: Push("default")
0x288: Push((int) 16)
0x289: Pop(1); Push(Stack[-4] + Stack[-1]);
0x28a: Push((int) 268)
0x28b: Push((float)0.64706)
0x28c: Push((float)0.64706)
0x28d: Push((float)0.64706)
0x28e: @ PrintInWidth(Stack[-37], Stack[-6], Stack[-5], Stack[-7], Stack[-4], Stack[-42], Stack[-3], Stack[-2], Stack[-1], Stack[-81])
0x28f: Pop(6)
0x290: Pop(0); Push(Stack[-31] + Stack[-30]);
0x291: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x292: PushEmpty(bool)
0x293: Stack[-1] = (bool) 1
0x294: Push(Stack[-29])
0x295: IF (Stack[-1] == 0) GOTO 0x299; Pop(1)

0x296: Push(Stack[-30])
0x297: IF (Stack[-1] == 0) GOTO 0x299; Pop(1)

0x298: Stack[-1] = (bool) 0
0x299: IF (Stack[-1] == 0) GOTO 0x2a4; Pop(1)

0x29a: Push("default")
0x29b: Push((int) 16)
0x29c: Pop(1); Push(Stack[-4] + Stack[-1]);
0x29d: Push((int) 268)
0x29e: Push((float)0.64706)
0x29f: Push((float)0.64706)
0x2a0: Push((float)0.64706)
0x2a1: @ PrintInWidth(Stack[-37], Stack[-6], Stack[-5], Stack[-7], Stack[-4], Stack[-41], Stack[-3], Stack[-2], Stack[-1], Stack[-81])
0x2a2: Pop(6)
0x2a3: Stack[-1] = Stack[-1] + Stack[-31]; Pop(0);
0x2a4: PushEmpty(bool)
0x2a5: Stack[-1] = (bool) 1
0x2a6: Push(Stack[-25])
0x2a7: IF (Stack[-1] == 0) GOTO 0x2ab; Pop(1)

0x2a8: Push(Stack[-26])
0x2a9: IF (Stack[-1] == 0) GOTO 0x2ab; Pop(1)

0x2aa: Stack[-1] = (bool) 0
0x2ab: IF (Stack[-1] == 0) GOTO 0x2b6; Pop(1)

0x2ac: Push("default")
0x2ad: Push((int) 16)
0x2ae: Pop(1); Push(Stack[-4] + Stack[-1]);
0x2af: Push((int) 268)
0x2b0: Push((float)0.64706)
0x2b1: Push((float)0.64706)
0x2b2: Push((float)0.64706)
0x2b3: @ PrintInWidth(Stack[-37], Stack[-6], Stack[-5], Stack[-7], Stack[-4], Stack[-40], Stack[-3], Stack[-2], Stack[-1], Stack[-81])
0x2b4: Pop(6)
0x2b5: Stack[-1] = Stack[-1] + Stack[-31]; Pop(0);
0x2b6: Push(Stack[-20])
0x2b7: IF (Stack[-1] == 0) GOTO 0x2c2; Pop(1)

0x2b8: Push("default")
0x2b9: Push((int) 16)
0x2ba: Pop(1); Push(Stack[-4] + Stack[-1]);
0x2bb: Push((int) 268)
0x2bc: Push((float)0.64706)
0x2bd: Push((float)0.64706)
0x2be: Push((float)0.64706)
0x2bf: @ PrintInWidth(Stack[-37], Stack[-6], Stack[-5], Stack[-7], Stack[-4], Stack[-27], Stack[-3], Stack[-2], Stack[-1], Stack[-81])
0x2c0: Pop(6)
0x2c1: Stack[-1] = Stack[-1] + Stack[-31]; Pop(0);
0x2c2: Push("default")
0x2c3: Push((int) 16)
0x2c4: Pop(1); Push(Stack[-4] + Stack[-1]);
0x2c5: Push((int) 268)
0x2c6: Push((float)0.64706)
0x2c7: Push((float)0.64706)
0x2c8: Push((float)0.64706)
0x2c9: @ PrintInWidth(Stack[-37], Stack[-6], Stack[-5], Stack[-7], Stack[-4], Stack[-82], Stack[-3], Stack[-2], Stack[-1], Stack[-81])
0x2ca: Pop(6)
0x2cb: Stack[-1] = Stack[-1] + Stack[-31]; Pop(0);
0x2cc: Return(); Pop(74)

0x2cd: PushEmpty(object, float, int, int, int, float, string, bool, int, string, int, string, bool, bool, int, int, string, bool, bool, int, int, string, bool, float, float, float, string, string, string, int, int, float, float, string, string, int, int, int, int, int, int, object, float, int, int, int, float, string, bool, int, string, int, string, bool, bool, int, int, string, bool, bool, int, int, string, bool, float, float, float, string, string, string, int, int, float, float, string, string, int, int, int, int, int, int)
0x2ce: Pop(0); Push((bool) Stack[-85] == 0)
0x2cf: IF (Stack[-1] == 0) GOTO 0x2d1; Pop(1)

0x2d0: Return(); Pop(82)

0x2d1: @ GetContainer(Stack[-41])
0x2d2: Pop(0)
0x2d3: @ GetGameTime(Stack[-40])
0x2d4: Pop(0)
0x2d5: Push((int) 1)
0x2d6: Push((int) 24)
0x2d7: Pop(1); Push(Stack[-42] / Stack[-1]);
0x2d8: Stack[-41] = Stack[-2] + Stack[-1]; Pop(2);
0x2d9: PushEmpty(int, object)
0x2da: Stack[-1] = Stack[-87]
0x2db: Call2 0x6d

0x2dc: Stack[-40] = Stack[-2]
0x2dd: Pop(2)
0x2de: PushEmpty(int, object, int)
0x2df: Stack[-2] = Stack[-88]
0x2e0: PushEmpty(int)
0x2e1: Call2 0x108

0x2e2: Stack[-2] = Stack[-1]
0x2e3: Pop(1)
0x2e4: Call2 0x72

0x2e5: Stack[-40] = Stack[-3]
0x2e6: Pop(3)
0x2e7: Push(Stack[-84])
0x2e8: IF (Stack[-1] == 0) GOTO 0x2f4; Pop(1)

0x2e9: PushEmpty(float, object, int, int)
0x2ea: Stack[-3] = Stack[-45]
0x2eb: Stack[-2] = Stack[-43]
0x2ec: PushEmpty(int)
0x2ed: Call2 0x108

0x2ee: Stack[-2] = Stack[-1]
0x2ef: Pop(1)
0x2f0: Call2 0xd4

0x2f1: Stack[-40] = Stack[-4]
0x2f2: Pop(4)
0x2f3: GOTO 0x2fe

0x2f4: PushEmpty(float, object, int, int)
0x2f5: Stack[-3] = Stack[-45]
0x2f6: Stack[-2] = Stack[-43]
0x2f7: PushEmpty(int)
0x2f8: Call2 0x108

0x2f9: Stack[-2] = Stack[-1]
0x2fa: Pop(1)
0x2fb: Call2 0xee

0x2fc: Stack[-40] = Stack[-4]
0x2fd: Pop(4)
0x2fe: Stack[-37] = Stack[-37] * Stack[-36]; Pop(0);
0x2ff: Push("Description")
0x300: @ HasInvItemProperty(Stack[-35], Stack[-39], Stack[-1])
0x301: Pop(1)
0x302: Push(Stack[-34])
0x303: IF (Stack[-1] == 0) GOTO 0x30a; Pop(1)

0x304: Push("Description")
0x305: @ GetInvItemProperty(Stack[-34], Stack[-39], Stack[-1])
0x306: Pop(1)
0x307: @ GetStringByID(Stack[-35], Stack[-33])
0x308: Pop(0)
0x309: GOTO 0x30b

0x30a: Stack[-35] = "Error: Item doesnt have description (FIXME!)"
0x30b: Push("
")
0x30c: Stack[-36] = Stack[-36] + Stack[-1]; Pop(1);
0x30d: Push((int) 5)
0x30e: @ GetStringByID(Stack[-33], Stack[-1])
0x30f: Pop(1)
0x310: Push(": ")
0x311: Pop(1); Push(Stack[-33] + Stack[-1]);
0x312: Pop(1); Push(Stack[-1] + Stack[-38]);
0x313: Stack[-36] = Stack[-36] + Stack[-1]; Pop(1);
0x314: Push("default")
0x315: Push((int) 268)
0x316: @ GetTextHeightInWidth(Stack[-33], Stack[-2], Stack[-1], Stack[-37])
0x317: Pop(2)
0x318: Push((int) 266)
0x319: Stack[-32] = Stack[-32] + Stack[-1]; Pop(1);
0x31a: Push("HasDurability")
0x31b: @ HasInvItemProperty(Stack[-30], Stack[-39], Stack[-1])
0x31c: Pop(1)
0x31d: Push("durability")
0x31e: @@ HasProperty(Stack[-29], Stack[-1])
0x31f: Pop(1)
0x320: PushEmpty(bool)
0x321: Stack[-1] = (bool) 1
0x322: Push(Stack[-29])
0x323: IF (Stack[-1] == 0) GOTO 0x327; Pop(1)

0x324: Push(Stack[-30])
0x325: IF (Stack[-1] == 0) GOTO 0x327; Pop(1)

0x326: Stack[-1] = (bool) 0
0x327: IF (Stack[-1] == 0) GOTO 0x33c; Pop(1)

0x328: Push(Stack[-28])
0x329: IF (Stack[-1] == 0) GOTO 0x32e; Pop(1)

0x32a: Push("durability")
0x32b: @@ GetProperty(Stack[-28], Stack[-1])
0x32c: Pop(1)
0x32d: GOTO 0x32f

0x32e: Stack[-27] = (int) 100
0x32f: Push((int) 7)
0x330: @ GetStringByID(Stack[-31], Stack[-1])
0x331: Pop(1)
0x332: Push(" ")
0x333: Pop(1); Push(Stack[-1] + Stack[-28]);
0x334: Push("%")
0x335: Pop(2); Push(Stack[-2] + Stack[-1]);
0x336: Stack[-31] = Stack[-31] + Stack[-1]; Pop(1);
0x337: Push("default")
0x338: Push((int) 268)
0x339: @ GetTextHeightInWidth(Stack[-28], Stack[-2], Stack[-1], Stack[-32])
0x33a: Pop(2)
0x33b: Stack[-31] = Stack[-31] + Stack[-26]; Pop(0);
0x33c: Push("HasUses")
0x33d: @ HasInvItemProperty(Stack[-25], Stack[-39], Stack[-1])
0x33e: Pop(1)
0x33f: Push("uses")
0x340: @@ HasProperty(Stack[-24], Stack[-1])
0x341: Pop(1)
0x342: PushEmpty(bool)
0x343: Stack[-1] = (bool) 1
0x344: Push(Stack[-24])
0x345: IF (Stack[-1] == 0) GOTO 0x349; Pop(1)

0x346: Push(Stack[-25])
0x347: IF (Stack[-1] == 0) GOTO 0x349; Pop(1)

0x348: Stack[-1] = (bool) 0
0x349: IF (Stack[-1] == 0) GOTO 0x35c; Pop(1)

0x34a: Push(Stack[-23])
0x34b: IF (Stack[-1] == 0) GOTO 0x350; Pop(1)

0x34c: Push("uses")
0x34d: @@ GetProperty(Stack[-23], Stack[-1])
0x34e: Pop(1)
0x34f: GOTO 0x351

0x350: Stack[-22] = (int) 1
0x351: Push((int) 1006)
0x352: @ GetStringByID(Stack[-26], Stack[-1])
0x353: Pop(1)
0x354: Push(" ")
0x355: Pop(1); Push(Stack[-1] + Stack[-23]);
0x356: Stack[-26] = Stack[-26] + Stack[-1]; Pop(1);
0x357: Push("default")
0x358: Push((int) 268)
0x359: @ GetTextHeightInWidth(Stack[-23], Stack[-2], Stack[-1], Stack[-27])
0x35a: Pop(2)
0x35b: Stack[-31] = Stack[-31] + Stack[-21]; Pop(0);
0x35c: Stack[-19] = (bool) 0
0x35d: PushEmpty(string, object)
0x35e: Stack[-1] = Stack[-87]
0x35f: Call2 0xc1

0x360: Pop(1)
0x361: Push("grass_combination")
0x362: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x363: IF (Stack[-1] == 0) GOTO 0x386; Pop(1)

0x364: Stack[-19] = (bool) 1
0x365: Push("im_inc")
0x366: @@ GetProperty(Stack[-19], Stack[-1])
0x367: Pop(1)
0x368: Push("hl_inc")
0x369: @@ GetProperty(Stack[-18], Stack[-1])
0x36a: Pop(1)
0x36b: Push((int) 8)
0x36c: @ GetStringByID(Stack[-16], Stack[-1])
0x36d: Pop(1)
0x36e: Push((int) 9)
0x36f: @ GetStringByID(Stack[-14], Stack[-1])
0x370: Pop(1)
0x371: Push((int) 100)
0x372: Stack[-13] = Stack[-19] * Stack[-1]; Pop(1);
0x373: Push(" ")
0x374: Pop(1); Push(Stack[-16] + Stack[-1]);
0x375: Pop(1); Push(Stack[-1] + Stack[-13]);
0x376: Push("%
")
0x377: Stack[-22] = Stack[-2] + Stack[-1]; Pop(2);
0x378: Push((int) 100)
0x379: Stack[-13] = Stack[-18] * Stack[-1]; Pop(1);
0x37a: Push(" ")
0x37b: Pop(1); Push(Stack[-14] + Stack[-1]);
0x37c: Pop(1); Push(Stack[-1] + Stack[-13]);
0x37d: Push("%
")
0x37e: Pop(2); Push(Stack[-2] + Stack[-1]);
0x37f: Stack[-21] = Stack[-21] + Stack[-1]; Pop(1);
0x380: Push("default")
0x381: Push((int) 268)
0x382: @ GetTextHeightInWidth(Stack[-13], Stack[-2], Stack[-1], Stack[-22])
0x383: Pop(2)
0x384: Stack[-31] = Stack[-31] + Stack[-11]; Pop(0);
0x385: GOTO 0x3ae

0x386: PushEmpty(string, object)
0x387: Stack[-1] = Stack[-87]
0x388: Call2 0xc1

0x389: Pop(1)
0x38a: Push("organ_combination")
0x38b: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x38c: IF (Stack[-1] == 0) GOTO 0x3ae; Pop(1)

0x38d: Stack[-19] = (bool) 1
0x38e: Push("DiseaseRate")
0x38f: @@ GetProperty(Stack[-11], Stack[-1])
0x390: Pop(1)
0x391: Push("HealthIncrease")
0x392: @@ GetProperty(Stack[-10], Stack[-1])
0x393: Pop(1)
0x394: Push((int) 11)
0x395: @ GetStringByID(Stack[-9], Stack[-1])
0x396: Pop(1)
0x397: Push((int) 13)
0x398: @ GetStringByID(Stack[-8], Stack[-1])
0x399: Pop(1)
0x39a: Push((int) 100)
0x39b: Stack[-7] = Stack[-11] * Stack[-1]; Pop(1);
0x39c: Push(" ")
0x39d: Pop(1); Push(Stack[-9] + Stack[-1]);
0x39e: Pop(1); Push(Stack[-1] + Stack[-7]);
0x39f: Push("%
")
0x3a0: Stack[-22] = Stack[-2] + Stack[-1]; Pop(2);
0x3a1: Push((int) 100)
0x3a2: Stack[-7] = Stack[-10] * Stack[-1]; Pop(1);
0x3a3: Push(" ")
0x3a4: Pop(1); Push(Stack[-8] + Stack[-1]);
0x3a5: Pop(1); Push(Stack[-1] + Stack[-7]);
0x3a6: Push("%
")
0x3a7: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3a8: Stack[-21] = Stack[-21] + Stack[-1]; Pop(1);
0x3a9: Push("default")
0x3aa: Push((int) 268)
0x3ab: @ GetTextHeightInWidth(Stack[-7], Stack[-2], Stack[-1], Stack[-22])
0x3ac: Pop(2)
0x3ad: Stack[-31] = Stack[-31] + Stack[-5]; Pop(0);
0x3ae: @ GetScreenSize(Stack[-4], Stack[-3])
0x3af: Pop(0)
0x3b0: Pop(0); Push(Stack[-4] - Stack[-87]);
0x3b1: Push((int) 300)
0x3b2: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x3b3: IF (Stack[-1] == 0) GOTO 0x3b6; Pop(1)

0x3b4: Stack[-2] = Stack[-87]
0x3b5: GOTO 0x3b8

0x3b6: Push((int) 300)
0x3b7: Stack[-3] = Stack[-88] - Stack[-1]; Pop(1);
0x3b8: Pop(0); Push((bool) Stack[-86] > Stack[-31])
0x3b9: IF (Stack[-1] == 0) GOTO 0x3bc; Pop(1)

0x3ba: Stack[-1] = Stack[-86] - Stack[-31]; Pop(0);
0x3bb: GOTO 0x3c3

0x3bc: Stack[-1] = Stack[-86]
0x3bd: Pop(0); Push(Stack[-1] + Stack[-31]);
0x3be: Push((int) 600)
0x3bf: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x3c0: IF (Stack[-1] == 0) GOTO 0x3c3; Pop(1)

0x3c1: Push((int) 600)
0x3c2: Stack[-2] = Stack[-1] - Stack[-32]; Pop(1);
0x3c3: @ ScreenToClient(Stack[-2], Stack[-1])
0x3c4: Pop(0)
0x3c5: PushEmpty(int, int, int, int, float)
0x3c6: Stack[-5] = Stack[-7]
0x3c7: Stack[-4] = Stack[-6]
0x3c8: Stack[-3] = (int) 300
0x3c9: Stack[-2] = Stack[-36]
0x3ca: Stack[-1] = Stack[-88]
0x3cb: Call2 0x161

0x3cc: Pop(5)
0x3cd: PushEmpty(int, int, object, float)
0x3ce: Push((int) 16)
0x3cf: Stack[-5] = Stack[-7] + Stack[-1]; Pop(1);
0x3d0: Push((int) 16)
0x3d1: Stack[-4] = Stack[-6] + Stack[-1]; Pop(1);
0x3d2: Stack[-2] = Stack[-89]
0x3d3: Stack[-1] = Stack[-87]
0x3d4: Call2 0x17c

0x3d5: Pop(4)
0x3d6: Push((int) 250)
0x3d7: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x3d8: Push("default")
0x3d9: Push((int) 16)
0x3da: Pop(1); Push(Stack[-4] + Stack[-1]);
0x3db: Push((int) 268)
0x3dc: Push((float)0.64706)
0x3dd: Push((float)0.64706)
0x3de: Push((float)0.64706)
0x3df: @ PrintInWidth(Stack[-37], Stack[-6], Stack[-5], Stack[-7], Stack[-4], Stack[-41], Stack[-3], Stack[-2], Stack[-1], Stack[-89])
0x3e0: Pop(6)
0x3e1: Stack[-1] = Stack[-1] + Stack[-31]; Pop(0);
0x3e2: PushEmpty(bool)
0x3e3: Stack[-1] = (bool) 1
0x3e4: Push(Stack[-29])
0x3e5: IF (Stack[-1] == 0) GOTO 0x3e9; Pop(1)

0x3e6: Push(Stack[-30])
0x3e7: IF (Stack[-1] == 0) GOTO 0x3e9; Pop(1)

0x3e8: Stack[-1] = (bool) 0
0x3e9: IF (Stack[-1] == 0) GOTO 0x3f4; Pop(1)

0x3ea: Push("default")
0x3eb: Push((int) 16)
0x3ec: Pop(1); Push(Stack[-4] + Stack[-1]);
0x3ed: Push((int) 268)
0x3ee: Push((float)0.64706)
0x3ef: Push((float)0.64706)
0x3f0: Push((float)0.64706)
0x3f1: @ PrintInWidth(Stack[-37], Stack[-6], Stack[-5], Stack[-7], Stack[-4], Stack[-36], Stack[-3], Stack[-2], Stack[-1], Stack[-89])
0x3f2: Pop(6)
0x3f3: Stack[-1] = Stack[-1] + Stack[-31]; Pop(0);
0x3f4: PushEmpty(bool)
0x3f5: Stack[-1] = (bool) 1
0x3f6: Push(Stack[-24])
0x3f7: IF (Stack[-1] == 0) GOTO 0x3fb; Pop(1)

0x3f8: Push(Stack[-25])
0x3f9: IF (Stack[-1] == 0) GOTO 0x3fb; Pop(1)

0x3fa: Stack[-1] = (bool) 0
0x3fb: IF (Stack[-1] == 0) GOTO 0x406; Pop(1)

0x3fc: Push("default")
0x3fd: Push((int) 16)
0x3fe: Pop(1); Push(Stack[-4] + Stack[-1]);
0x3ff: Push((int) 268)
0x400: Push((float)0.64706)
0x401: Push((float)0.64706)
0x402: Push((float)0.64706)
0x403: @ PrintInWidth(Stack[-37], Stack[-6], Stack[-5], Stack[-7], Stack[-4], Stack[-31], Stack[-3], Stack[-2], Stack[-1], Stack[-89])
0x404: Pop(6)
0x405: Stack[-1] = Stack[-1] + Stack[-31]; Pop(0);
0x406: Push(Stack[-19])
0x407: IF (Stack[-1] == 0) GOTO 0x412; Pop(1)

0x408: Push("default")
0x409: Push((int) 16)
0x40a: Pop(1); Push(Stack[-4] + Stack[-1]);
0x40b: Push((int) 268)
0x40c: Push((float)0.64706)
0x40d: Push((float)0.64706)
0x40e: Push((float)0.64706)
0x40f: @ PrintInWidth(Stack[-37], Stack[-6], Stack[-5], Stack[-7], Stack[-4], Stack[-26], Stack[-3], Stack[-2], Stack[-1], Stack[-89])
0x410: Pop(6)
0x411: Stack[-1] = Stack[-1] + Stack[-31]; Pop(0);
0x412: Return(); Pop(82)

0x413: Stack[-41] = 0
0x414: PushEmpty(int, object, string, string, int, int, float, int, float, float, int, int, int, int, int, int, int, int, object, string, string, int, int, float, int, float, float, int, int, int, int, int, int, int)
0x415: Pop(0); Push((bool) Stack[-36] == 0)
0x416: IF (Stack[-1] == 0) GOTO 0x418; Pop(1)

0x417: Return(); Pop(34)

0x418: Stack[-35] = (int) 1
0x419: @@ size(Stack[-17])
0x41a: Pop(0)
0x41b: Pop(0); Push((bool) Stack[-17] == 0)
0x41c: IF (Stack[-1] == 0) GOTO 0x41e; Pop(1)

0x41d: Return(); Pop(34)

0x41e: Push(Stack[-17])
0x41f: IF (Stack[-1] == 0) GOTO 0x45d; Pop(1)

0x420: Stack[-12] = (int) 0
0x421: Stack[-11] = (int) 0
0x422: Stack[-10] = (int) 0
0x423: Pop(0); Push((bool) Stack[-10] < Stack[-17])
0x424: IF (Stack[-1] == 0) GOTO 0x430; Pop(1)

0x425: @@ get(Stack[-16], Stack[-10])
0x426: Pop(0)
0x427: @@ GetTime(Stack[-9])
0x428: Pop(0)
0x429: Pop(0); Push((bool) Stack[-9] > Stack[-11])
0x42a: IF (Stack[-1] == 0) GOTO 0x42d; Pop(1)

0x42b: Stack[-11] = Stack[-9]
0x42c: Stack[-12] = Stack[-10]
0x42d: Push((int) 1)
0x42e: Stack[-11] = Stack[-11] + Stack[-1]; Pop(1);
0x42f: GOTO 0x423

0x430: @@ get(Stack[-16], Stack[-12])
0x431: Pop(0)
0x432: @@ GetTextID(Stack[-13])
0x433: Pop(0)
0x434: @ GetStringByID(Stack[-14], Stack[-13])
0x435: Pop(0)
0x436: @@ GetTime(Stack[-8])
0x437: Pop(0)
0x438: PushEmpty(int)
0x439: Stack[-1] = Stack[-9]
0x43a: Stack[-8] = Stack[-1]
0x43b: Pop(1)
0x43c: Push((int) 60)
0x43d: Pop(0); Push(Stack[-9] - Stack[-8]);
0x43e: Stack[-8] = Stack[-2] * Stack[-1]; Pop(2);
0x43f: Push((int) 10)
0x440: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x441: IF (Stack[-1] == 0) GOTO 0x44b; Pop(1)

0x442: Push((int) 24)
0x443: Pop(1); Push(Stack[-8] % Stack[-1]);
0x444: Push(":0")
0x445: Pop(2); Push(Stack[-2] + Stack[-1]);
0x446: Pop(1); Push(Stack[-1] + Stack[-7]);
0x447: Push(" ")
0x448: Pop(2); Push(Stack[-2] + Stack[-1]);
0x449: Stack[-16] = Stack[-16] + Stack[-1]; Pop(1);
0x44a: GOTO 0x453

0x44b: Push((int) 24)
0x44c: Pop(1); Push(Stack[-8] % Stack[-1]);
0x44d: Push(":")
0x44e: Pop(2); Push(Stack[-2] + Stack[-1]);
0x44f: Pop(1); Push(Stack[-1] + Stack[-7]);
0x450: Push(" ")
0x451: Pop(2); Push(Stack[-2] + Stack[-1]);
0x452: Stack[-16] = Stack[-16] + Stack[-1]; Pop(1);
0x453: Stack[-15] = Stack[-15] + Stack[-14]; Pop(0);
0x454: @@ remove(Stack[-12])
0x455: Pop(0)
0x456: Push((int) -1)
0x457: Stack[-18] = Stack[-18] + Stack[-1]; Pop(1);
0x458: Push(Stack[-17])
0x459: IF (Stack[-1] == 0) GOTO 0x45c; Pop(1)

0x45a: Push("

")
0x45b: Stack[-16] = Stack[-16] + Stack[-1]; Pop(1);
0x45c: GOTO 0x41e

0x45d: Push("default")
0x45e: Push((int) 268)
0x45f: @ GetTextHeightInWidth(Stack[-7], Stack[-2], Stack[-1], Stack[-17])
0x460: Pop(2)
0x461: Push((int) 32)
0x462: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x463: @ GetScreenSize(Stack[-4], Stack[-3])
0x464: Pop(0)
0x465: Pop(0); Push(Stack[-4] - Stack[-38]);
0x466: Push((int) 300)
0x467: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x468: IF (Stack[-1] == 0) GOTO 0x46b; Pop(1)

0x469: Stack[-2] = Stack[-38]
0x46a: GOTO 0x46d

0x46b: Push((int) 300)
0x46c: Stack[-3] = Stack[-39] - Stack[-1]; Pop(1);
0x46d: Pop(0); Push((bool) Stack[-37] > Stack[-5])
0x46e: IF (Stack[-1] == 0) GOTO 0x471; Pop(1)

0x46f: Stack[-1] = Stack[-37] - Stack[-5]; Pop(0);
0x470: GOTO 0x478

0x471: Stack[-1] = Stack[-37]
0x472: Pop(0); Push(Stack[-1] + Stack[-5]);
0x473: Push((int) 600)
0x474: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x475: IF (Stack[-1] == 0) GOTO 0x478; Pop(1)

0x476: Push((int) 600)
0x477: Stack[-2] = Stack[-1] - Stack[-6]; Pop(1);
0x478: @ ScreenToClient(Stack[-2], Stack[-1])
0x479: Pop(0)
0x47a: PushEmpty(int, int, int, int, float)
0x47b: Stack[-5] = Stack[-7]
0x47c: Stack[-4] = Stack[-6]
0x47d: Stack[-3] = (int) 300
0x47e: Stack[-2] = Stack[-10]
0x47f: Stack[-1] = Stack[-40]
0x480: Call2 0x161

0x481: Pop(5)
0x482: Push("default")
0x483: Push((int) 16)
0x484: Pop(1); Push(Stack[-4] + Stack[-1]);
0x485: Push((int) 16)
0x486: Pop(1); Push(Stack[-4] + Stack[-1]);
0x487: Push((int) 268)
0x488: Push((float)0.64706)
0x489: Push((float)0.64706)
0x48a: Push((float)0.64706)
0x48b: @ PrintInWidth(Stack[-12], Stack[-7], Stack[-6], Stack[-5], Stack[-4], Stack[-22], Stack[-3], Stack[-2], Stack[-1], Stack[-42])
0x48c: Pop(7)
0x48d: Return(); Pop(34)

0x48e: Stack[-16] = 0
0x48f: PushEmpty(int, int, int, int, int, int, int, int, int, int)
0x490: Stack[-11] = (int) 1
0x491: Push("default")
0x492: Push((int) 268)
0x493: @ GetTextHeightInWidth(Stack[-7], Stack[-2], Stack[-1], Stack[-15])
0x494: Pop(2)
0x495: Push((int) 32)
0x496: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x497: @ GetScreenSize(Stack[-4], Stack[-3])
0x498: Pop(0)
0x499: Pop(0); Push(Stack[-4] - Stack[-15]);
0x49a: Push((int) 300)
0x49b: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x49c: IF (Stack[-1] == 0) GOTO 0x49f; Pop(1)

0x49d: Stack[-2] = Stack[-15]
0x49e: GOTO 0x4a1

0x49f: Push((int) 300)
0x4a0: Stack[-3] = Stack[-16] - Stack[-1]; Pop(1);
0x4a1: Pop(0); Push((bool) Stack[-14] > Stack[-5])
0x4a2: IF (Stack[-1] == 0) GOTO 0x4a5; Pop(1)

0x4a3: Stack[-1] = Stack[-14] - Stack[-5]; Pop(0);
0x4a4: GOTO 0x4ac

0x4a5: Stack[-1] = Stack[-14]
0x4a6: Pop(0); Push(Stack[-1] + Stack[-5]);
0x4a7: Push((int) 600)
0x4a8: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x4a9: IF (Stack[-1] == 0) GOTO 0x4ac; Pop(1)

0x4aa: Push((int) 600)
0x4ab: Stack[-2] = Stack[-1] - Stack[-6]; Pop(1);
0x4ac: @ ScreenToClient(Stack[-2], Stack[-1])
0x4ad: Pop(0)
0x4ae: PushEmpty(int, int, int, int, float)
0x4af: Stack[-5] = Stack[-7]
0x4b0: Stack[-4] = Stack[-6]
0x4b1: Stack[-3] = (int) 300
0x4b2: Stack[-2] = Stack[-10]
0x4b3: Stack[-1] = Stack[-16]
0x4b4: Call2 0x161

0x4b5: Pop(5)
0x4b6: Push("default")
0x4b7: Push((int) 16)
0x4b8: Pop(1); Push(Stack[-4] + Stack[-1]);
0x4b9: Push((int) 16)
0x4ba: Pop(1); Push(Stack[-4] + Stack[-1]);
0x4bb: Push((int) 268)
0x4bc: Push((float)0.64706)
0x4bd: Push((float)0.64706)
0x4be: Push((float)0.64706)
0x4bf: @ PrintInWidth(Stack[-12], Stack[-7], Stack[-6], Stack[-5], Stack[-4], Stack[-20], Stack[-3], Stack[-2], Stack[-1], Stack[-18])
0x4c0: Pop(7)
0x4c1: Return(); Pop(10)

0x4c2: PushEmpty(int, string, string, int, string, string)
0x4c3: PushEmpty(bool)
0x4c4: Stack[-1] = (bool) 0
0x4c5: Pop(0); Push((bool) Stack[-9] == 0)
0x4c6: IF (Stack[-1] == 0) GOTO 0x4ca; Pop(1)

0x4c7: Pop(0); Push(( Stack[-8] != 0 )
0x4c8: IF (Stack[-1] == 0) GOTO 0x4ca; Pop(1)

0x4c9: Stack[-1] = (bool) 1
0x4ca: IF (Stack[-1] == 0) GOTO 0x4cd; Pop(1)

0x4cb: Stack[-9] = (bool) 0
0x4cc: Return(); Pop(6)

0x4cd: PushEmpty(bool)
0x4ce: Stack[-1] = (bool) 0
0x4cf: Pop(0); Push((bool) Stack[-8] == 0)
0x4d0: IF (Stack[-1] == 0) GOTO 0x4d4; Pop(1)

0x4d1: Pop(0); Push(( Stack[-9] != 0 )
0x4d2: IF (Stack[-1] == 0) GOTO 0x4d4; Pop(1)

0x4d3: Stack[-1] = (bool) 1
0x4d4: IF (Stack[-1] == 0) GOTO 0x4d7; Pop(1)

0x4d5: Stack[-9] = (bool) 0
0x4d6: Return(); Pop(6)

0x4d7: PushEmpty(bool)
0x4d8: Stack[-1] = (bool) 0
0x4d9: Pop(0); Push((bool) Stack[-9] == 0)
0x4da: IF (Stack[-1] == 0) GOTO 0x4de; Pop(1)

0x4db: Pop(0); Push((bool) Stack[-8] == 0)
0x4dc: IF (Stack[-1] == 0) GOTO 0x4de; Pop(1)

0x4dd: Stack[-1] = (bool) 1
0x4de: IF (Stack[-1] == 0) GOTO 0x4e1; Pop(1)

0x4df: Stack[-9] = (bool) 1
0x4e0: Return(); Pop(6)

0x4e1: PushEmpty(int, object)
0x4e2: Stack[-1] = Stack[-10]
0x4e3: Call2 0x6d

0x4e4: Stack[-5] = Stack[-2]
0x4e5: Pop(2)
0x4e6: @ GetInvItemSprite2(Stack[-2], Stack[-3])
0x4e7: Pop(0)
0x4e8: PushEmpty(int, object)
0x4e9: Stack[-1] = Stack[-9]
0x4ea: Call2 0x6d

0x4eb: Stack[-5] = Stack[-2]
0x4ec: Pop(2)
0x4ed: @ GetInvItemSprite2(Stack[-1], Stack[-3])
0x4ee: Pop(0)
0x4ef: Stack[-9] = Stack[-2] == Stack[-1]; Pop(0);
0x4f0: Return(); Pop(6)

