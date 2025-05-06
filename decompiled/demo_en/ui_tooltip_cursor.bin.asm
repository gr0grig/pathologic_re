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
0x2e: Call2 0x45c

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
0x13a: Call2 0x3ae

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
0x146: Call2 0x299

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
0x152: Call2 0x299

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
0x15e: Call2 0x429

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

0x1a8: PushEmpty(int, string, string, string, bool, int, int, int, bool, bool, int, int, string, bool, float, float, string, string, int, int, float, float, float, float, string, string, int, int, int, int, int, int, int, string, string, string, bool, int, int, int, bool, bool, int, int, string, bool, float, float, string, string, int, int, float, float, float, float, string, string, int, int, int, int, int, int)
0x1a9: Pop(0); Push((bool) Stack[-67] == 0)
0x1aa: IF (Stack[-1] == 0) GOTO 0x1ac; Pop(1)

0x1ab: Return(); Pop(64)

0x1ac: PushEmpty(int, object)
0x1ad: Stack[-1] = Stack[-69]
0x1ae: Call2 0x6d

0x1af: Stack[-34] = Stack[-2]
0x1b0: Pop(2)
0x1b1: Push("Description")
0x1b2: @ HasInvItemProperty(Stack[-29], Stack[-33], Stack[-1])
0x1b3: Pop(1)
0x1b4: Push(Stack[-28])
0x1b5: IF (Stack[-1] == 0) GOTO 0x1bc; Pop(1)

0x1b6: Push("Description")
0x1b7: @ GetInvItemProperty(Stack[-28], Stack[-33], Stack[-1])
0x1b8: Pop(1)
0x1b9: @ GetStringByID(Stack[-31], Stack[-27])
0x1ba: Pop(0)
0x1bb: GOTO 0x1bd

0x1bc: Stack[-31] = "Error: Item doesnt have description (FIXME!)"
0x1bd: Push("default")
0x1be: Push((int) 218)
0x1bf: @ GetTextHeightInWidth(Stack[-28], Stack[-2], Stack[-1], Stack[-33])
0x1c0: Pop(2)
0x1c1: Push("default")
0x1c2: @ GetFontHeight(Stack[-26], Stack[-1])
0x1c3: Pop(1)
0x1c4: Stack[-26] = Stack[-26] + Stack[-25]; Pop(0);
0x1c5: Push("HasDurability")
0x1c6: @ HasInvItemProperty(Stack[-25], Stack[-33], Stack[-1])
0x1c7: Pop(1)
0x1c8: Push("durability")
0x1c9: @@ HasProperty(Stack[-24], Stack[-1])
0x1ca: Pop(1)
0x1cb: PushEmpty(bool)
0x1cc: Stack[-1] = (bool) 1
0x1cd: Push(Stack[-24])
0x1ce: IF (Stack[-1] == 0) GOTO 0x1d2; Pop(1)

0x1cf: Push(Stack[-25])
0x1d0: IF (Stack[-1] == 0) GOTO 0x1d2; Pop(1)

0x1d1: Stack[-1] = (bool) 0
0x1d2: IF (Stack[-1] == 0) GOTO 0x1e7; Pop(1)

0x1d3: Push(Stack[-23])
0x1d4: IF (Stack[-1] == 0) GOTO 0x1d9; Pop(1)

0x1d5: Push("durability")
0x1d6: @@ GetProperty(Stack[-23], Stack[-1])
0x1d7: Pop(1)
0x1d8: GOTO 0x1da

0x1d9: Stack[-22] = (int) 100
0x1da: Push((int) 7)
0x1db: @ GetStringByID(Stack[-31], Stack[-1])
0x1dc: Pop(1)
0x1dd: Push(" ")
0x1de: Pop(1); Push(Stack[-1] + Stack[-23]);
0x1df: Push("%")
0x1e0: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1e1: Stack[-31] = Stack[-31] + Stack[-1]; Pop(1);
0x1e2: Push("default")
0x1e3: Push((int) 218)
0x1e4: @ GetTextHeightInWidth(Stack[-23], Stack[-2], Stack[-1], Stack[-32])
0x1e5: Pop(2)
0x1e6: Stack[-26] = Stack[-26] + Stack[-21]; Pop(0);
0x1e7: Stack[-19] = (bool) 0
0x1e8: PushEmpty(string, object)
0x1e9: Stack[-1] = Stack[-69]
0x1ea: Call2 0xc1

0x1eb: Pop(1)
0x1ec: Push("grass_combination")
0x1ed: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1ee: IF (Stack[-1] == 0) GOTO 0x211; Pop(1)

0x1ef: Stack[-19] = (bool) 1
0x1f0: Push("im_inc")
0x1f1: @@ GetProperty(Stack[-19], Stack[-1])
0x1f2: Pop(1)
0x1f3: Push("hl_inc")
0x1f4: @@ GetProperty(Stack[-18], Stack[-1])
0x1f5: Pop(1)
0x1f6: Push((int) 8)
0x1f7: @ GetStringByID(Stack[-17], Stack[-1])
0x1f8: Pop(1)
0x1f9: Push((int) 9)
0x1fa: @ GetStringByID(Stack[-16], Stack[-1])
0x1fb: Pop(1)
0x1fc: Push((int) 100)
0x1fd: Stack[-15] = Stack[-19] * Stack[-1]; Pop(1);
0x1fe: Push(" ")
0x1ff: Pop(1); Push(Stack[-17] + Stack[-1]);
0x200: Pop(1); Push(Stack[-1] + Stack[-15]);
0x201: Push("%
")
0x202: Stack[-22] = Stack[-2] + Stack[-1]; Pop(2);
0x203: Push((int) 100)
0x204: Stack[-15] = Stack[-18] * Stack[-1]; Pop(1);
0x205: Push(" ")
0x206: Pop(1); Push(Stack[-16] + Stack[-1]);
0x207: Pop(1); Push(Stack[-1] + Stack[-15]);
0x208: Push("%
")
0x209: Pop(2); Push(Stack[-2] + Stack[-1]);
0x20a: Stack[-21] = Stack[-21] + Stack[-1]; Pop(1);
0x20b: Push("default")
0x20c: Push((int) 218)
0x20d: @ GetTextHeightInWidth(Stack[-15], Stack[-2], Stack[-1], Stack[-22])
0x20e: Pop(2)
0x20f: Stack[-26] = Stack[-26] + Stack[-13]; Pop(0);
0x210: GOTO 0x239

0x211: PushEmpty(string, object)
0x212: Stack[-1] = Stack[-69]
0x213: Call2 0xc1

0x214: Pop(1)
0x215: Push("organ_combination")
0x216: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x217: IF (Stack[-1] == 0) GOTO 0x239; Pop(1)

0x218: Stack[-19] = (bool) 1
0x219: Push("DiseaseRate")
0x21a: @@ GetProperty(Stack[-13], Stack[-1])
0x21b: Pop(1)
0x21c: Push("HealthIncrease")
0x21d: @@ GetProperty(Stack[-11], Stack[-1])
0x21e: Pop(1)
0x21f: Push((int) 11)
0x220: @ GetStringByID(Stack[-9], Stack[-1])
0x221: Pop(1)
0x222: Push((int) 13)
0x223: @ GetStringByID(Stack[-8], Stack[-1])
0x224: Pop(1)
0x225: Push((int) 100)
0x226: Stack[-7] = Stack[-13] * Stack[-1]; Pop(1);
0x227: Push(" ")
0x228: Pop(1); Push(Stack[-9] + Stack[-1]);
0x229: Pop(1); Push(Stack[-1] + Stack[-7]);
0x22a: Push("%
")
0x22b: Stack[-22] = Stack[-2] + Stack[-1]; Pop(2);
0x22c: Push((int) 100)
0x22d: Stack[-7] = Stack[-11] * Stack[-1]; Pop(1);
0x22e: Push(" ")
0x22f: Pop(1); Push(Stack[-8] + Stack[-1]);
0x230: Pop(1); Push(Stack[-1] + Stack[-7]);
0x231: Push("%
")
0x232: Pop(2); Push(Stack[-2] + Stack[-1]);
0x233: Stack[-21] = Stack[-21] + Stack[-1]; Pop(1);
0x234: Push("default")
0x235: Push((int) 218)
0x236: @ GetTextHeightInWidth(Stack[-7], Stack[-2], Stack[-1], Stack[-22])
0x237: Pop(2)
0x238: Stack[-26] = Stack[-26] + Stack[-5]; Pop(0);
0x239: @ GetScreenSize(Stack[-4], Stack[-3])
0x23a: Pop(0)
0x23b: Push((int) 266)
0x23c: Stack[-27] = Stack[-27] + Stack[-1]; Pop(1);
0x23d: Pop(0); Push(Stack[-4] - Stack[-69]);
0x23e: Push((int) 250)
0x23f: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x240: IF (Stack[-1] == 0) GOTO 0x243; Pop(1)

0x241: Stack[-2] = Stack[-69]
0x242: GOTO 0x245

0x243: Push((int) 250)
0x244: Stack[-3] = Stack[-70] - Stack[-1]; Pop(1);
0x245: Pop(0); Push((bool) Stack[-68] > Stack[-26])
0x246: IF (Stack[-1] == 0) GOTO 0x249; Pop(1)

0x247: Stack[-1] = Stack[-68] - Stack[-26]; Pop(0);
0x248: GOTO 0x250

0x249: Stack[-1] = Stack[-68]
0x24a: Pop(0); Push(Stack[-1] + Stack[-26]);
0x24b: Push((int) 600)
0x24c: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x24d: IF (Stack[-1] == 0) GOTO 0x250; Pop(1)

0x24e: Push((int) 600)
0x24f: Stack[-2] = Stack[-1] - Stack[-27]; Pop(1);
0x250: @ ScreenToClient(Stack[-2], Stack[-1])
0x251: Pop(0)
0x252: PushEmpty(int, int, int, int, float)
0x253: Stack[-5] = Stack[-7]
0x254: Stack[-4] = Stack[-6]
0x255: Stack[-3] = (int) 250
0x256: Stack[-2] = Stack[-31]
0x257: Stack[-1] = Stack[-70]
0x258: Call2 0x161

0x259: Pop(5)
0x25a: PushEmpty(int, int, object, float)
0x25b: Push((int) 16)
0x25c: Stack[-5] = Stack[-7] + Stack[-1]; Pop(1);
0x25d: Push((int) 16)
0x25e: Stack[-4] = Stack[-6] + Stack[-1]; Pop(1);
0x25f: Stack[-2] = Stack[-71]
0x260: Stack[-1] = Stack[-69]
0x261: Call2 0x17c

0x262: Pop(4)
0x263: Push((int) 250)
0x264: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x265: Push("default")
0x266: Push((int) 16)
0x267: Pop(1); Push(Stack[-4] + Stack[-1]);
0x268: Push((int) 218)
0x269: Push((float)0.64706)
0x26a: Push((float)0.64706)
0x26b: Push((float)0.64706)
0x26c: @ PrintInWidth(Stack[-32], Stack[-6], Stack[-5], Stack[-7], Stack[-4], Stack[-37], Stack[-3], Stack[-2], Stack[-1], Stack[-71])
0x26d: Pop(6)
0x26e: Pop(0); Push(Stack[-26] + Stack[-25]);
0x26f: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x270: PushEmpty(bool)
0x271: Stack[-1] = (bool) 1
0x272: Push(Stack[-24])
0x273: IF (Stack[-1] == 0) GOTO 0x277; Pop(1)

0x274: Push(Stack[-25])
0x275: IF (Stack[-1] == 0) GOTO 0x277; Pop(1)

0x276: Stack[-1] = (bool) 0
0x277: IF (Stack[-1] == 0) GOTO 0x282; Pop(1)

0x278: Push("default")
0x279: Push((int) 16)
0x27a: Pop(1); Push(Stack[-4] + Stack[-1]);
0x27b: Push((int) 218)
0x27c: Push((float)0.64706)
0x27d: Push((float)0.64706)
0x27e: Push((float)0.64706)
0x27f: @ PrintInWidth(Stack[-32], Stack[-6], Stack[-5], Stack[-7], Stack[-4], Stack[-36], Stack[-3], Stack[-2], Stack[-1], Stack[-71])
0x280: Pop(6)
0x281: Stack[-1] = Stack[-1] + Stack[-26]; Pop(0);
0x282: Push(Stack[-19])
0x283: IF (Stack[-1] == 0) GOTO 0x28e; Pop(1)

0x284: Push("default")
0x285: Push((int) 16)
0x286: Pop(1); Push(Stack[-4] + Stack[-1]);
0x287: Push((int) 218)
0x288: Push((float)0.64706)
0x289: Push((float)0.64706)
0x28a: Push((float)0.64706)
0x28b: @ PrintInWidth(Stack[-32], Stack[-6], Stack[-5], Stack[-7], Stack[-4], Stack[-26], Stack[-3], Stack[-2], Stack[-1], Stack[-71])
0x28c: Pop(6)
0x28d: Stack[-1] = Stack[-1] + Stack[-26]; Pop(0);
0x28e: Push("default")
0x28f: Push((int) 16)
0x290: Pop(1); Push(Stack[-4] + Stack[-1]);
0x291: Push((int) 218)
0x292: Push((float)0.64706)
0x293: Push((float)0.64706)
0x294: Push((float)0.64706)
0x295: @ PrintInWidth(Stack[-32], Stack[-6], Stack[-5], Stack[-7], Stack[-4], Stack[-72], Stack[-3], Stack[-2], Stack[-1], Stack[-71])
0x296: Pop(6)
0x297: Stack[-1] = Stack[-1] + Stack[-26]; Pop(0);
0x298: Return(); Pop(64)

0x299: PushEmpty(object, float, int, int, int, float, string, bool, int, string, int, string, bool, bool, int, int, string, bool, float, float, float, string, string, int, int, float, float, string, string, int, int, int, int, int, int, object, float, int, int, int, float, string, bool, int, string, int, string, bool, bool, int, int, string, bool, float, float, float, string, string, int, int, float, float, string, string, int, int, int, int, int, int)
0x29a: Pop(0); Push((bool) Stack[-73] == 0)
0x29b: IF (Stack[-1] == 0) GOTO 0x29d; Pop(1)

0x29c: Return(); Pop(70)

0x29d: @ GetContainer(Stack[-35])
0x29e: Pop(0)
0x29f: @ GetGameTime(Stack[-34])
0x2a0: Pop(0)
0x2a1: Push((int) 1)
0x2a2: Push((int) 24)
0x2a3: Pop(1); Push(Stack[-36] / Stack[-1]);
0x2a4: Stack[-35] = Stack[-2] + Stack[-1]; Pop(2);
0x2a5: PushEmpty(int, object)
0x2a6: Stack[-1] = Stack[-75]
0x2a7: Call2 0x6d

0x2a8: Stack[-34] = Stack[-2]
0x2a9: Pop(2)
0x2aa: PushEmpty(int, object, int)
0x2ab: Stack[-2] = Stack[-76]
0x2ac: PushEmpty(int)
0x2ad: Call2 0x108

0x2ae: Stack[-2] = Stack[-1]
0x2af: Pop(1)
0x2b0: Call2 0x72

0x2b1: Stack[-34] = Stack[-3]
0x2b2: Pop(3)
0x2b3: Push(Stack[-72])
0x2b4: IF (Stack[-1] == 0) GOTO 0x2c0; Pop(1)

0x2b5: PushEmpty(float, object, int, int)
0x2b6: Stack[-3] = Stack[-39]
0x2b7: Stack[-2] = Stack[-37]
0x2b8: PushEmpty(int)
0x2b9: Call2 0x108

0x2ba: Stack[-2] = Stack[-1]
0x2bb: Pop(1)
0x2bc: Call2 0xd4

0x2bd: Stack[-34] = Stack[-4]
0x2be: Pop(4)
0x2bf: GOTO 0x2ca

0x2c0: PushEmpty(float, object, int, int)
0x2c1: Stack[-3] = Stack[-39]
0x2c2: Stack[-2] = Stack[-37]
0x2c3: PushEmpty(int)
0x2c4: Call2 0x108

0x2c5: Stack[-2] = Stack[-1]
0x2c6: Pop(1)
0x2c7: Call2 0xee

0x2c8: Stack[-34] = Stack[-4]
0x2c9: Pop(4)
0x2ca: Stack[-31] = Stack[-31] * Stack[-30]; Pop(0);
0x2cb: Push("Description")
0x2cc: @ HasInvItemProperty(Stack[-29], Stack[-33], Stack[-1])
0x2cd: Pop(1)
0x2ce: Push(Stack[-28])
0x2cf: IF (Stack[-1] == 0) GOTO 0x2d6; Pop(1)

0x2d0: Push("Description")
0x2d1: @ GetInvItemProperty(Stack[-28], Stack[-33], Stack[-1])
0x2d2: Pop(1)
0x2d3: @ GetStringByID(Stack[-29], Stack[-27])
0x2d4: Pop(0)
0x2d5: GOTO 0x2d7

0x2d6: Stack[-29] = "Error: Item doesnt have description (FIXME!)"
0x2d7: Push("
")
0x2d8: Stack[-30] = Stack[-30] + Stack[-1]; Pop(1);
0x2d9: Push((int) 5)
0x2da: @ GetStringByID(Stack[-27], Stack[-1])
0x2db: Pop(1)
0x2dc: Push(": ")
0x2dd: Pop(1); Push(Stack[-27] + Stack[-1]);
0x2de: Pop(1); Push(Stack[-1] + Stack[-32]);
0x2df: Stack[-30] = Stack[-30] + Stack[-1]; Pop(1);
0x2e0: Push("default")
0x2e1: Push((int) 218)
0x2e2: @ GetTextHeightInWidth(Stack[-27], Stack[-2], Stack[-1], Stack[-31])
0x2e3: Pop(2)
0x2e4: Push((int) 266)
0x2e5: Stack[-26] = Stack[-26] + Stack[-1]; Pop(1);
0x2e6: Push("HasDurability")
0x2e7: @ HasInvItemProperty(Stack[-24], Stack[-33], Stack[-1])
0x2e8: Pop(1)
0x2e9: Push("durability")
0x2ea: @@ HasProperty(Stack[-23], Stack[-1])
0x2eb: Pop(1)
0x2ec: PushEmpty(bool)
0x2ed: Stack[-1] = (bool) 1
0x2ee: Push(Stack[-23])
0x2ef: IF (Stack[-1] == 0) GOTO 0x2f3; Pop(1)

0x2f0: Push(Stack[-24])
0x2f1: IF (Stack[-1] == 0) GOTO 0x2f3; Pop(1)

0x2f2: Stack[-1] = (bool) 0
0x2f3: IF (Stack[-1] == 0) GOTO 0x308; Pop(1)

0x2f4: Push(Stack[-22])
0x2f5: IF (Stack[-1] == 0) GOTO 0x2fa; Pop(1)

0x2f6: Push("durability")
0x2f7: @@ GetProperty(Stack[-22], Stack[-1])
0x2f8: Pop(1)
0x2f9: GOTO 0x2fb

0x2fa: Stack[-21] = (int) 100
0x2fb: Push((int) 7)
0x2fc: @ GetStringByID(Stack[-25], Stack[-1])
0x2fd: Pop(1)
0x2fe: Push(" ")
0x2ff: Pop(1); Push(Stack[-1] + Stack[-22]);
0x300: Push("%")
0x301: Pop(2); Push(Stack[-2] + Stack[-1]);
0x302: Stack[-25] = Stack[-25] + Stack[-1]; Pop(1);
0x303: Push("default")
0x304: Push((int) 218)
0x305: @ GetTextHeightInWidth(Stack[-22], Stack[-2], Stack[-1], Stack[-26])
0x306: Pop(2)
0x307: Stack[-25] = Stack[-25] + Stack[-20]; Pop(0);
0x308: Stack[-18] = (bool) 0
0x309: PushEmpty(string, object)
0x30a: Stack[-1] = Stack[-75]
0x30b: Call2 0xc1

0x30c: Pop(1)
0x30d: Push("grass_combination")
0x30e: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x30f: IF (Stack[-1] == 0) GOTO 0x332; Pop(1)

0x310: Stack[-18] = (bool) 1
0x311: Push("im_inc")
0x312: @@ GetProperty(Stack[-18], Stack[-1])
0x313: Pop(1)
0x314: Push("hl_inc")
0x315: @@ GetProperty(Stack[-17], Stack[-1])
0x316: Pop(1)
0x317: Push((int) 8)
0x318: @ GetStringByID(Stack[-15], Stack[-1])
0x319: Pop(1)
0x31a: Push((int) 9)
0x31b: @ GetStringByID(Stack[-14], Stack[-1])
0x31c: Pop(1)
0x31d: Push((int) 100)
0x31e: Stack[-13] = Stack[-18] * Stack[-1]; Pop(1);
0x31f: Push(" ")
0x320: Pop(1); Push(Stack[-15] + Stack[-1]);
0x321: Pop(1); Push(Stack[-1] + Stack[-13]);
0x322: Push("%
")
0x323: Stack[-21] = Stack[-2] + Stack[-1]; Pop(2);
0x324: Push((int) 100)
0x325: Stack[-13] = Stack[-17] * Stack[-1]; Pop(1);
0x326: Push(" ")
0x327: Pop(1); Push(Stack[-14] + Stack[-1]);
0x328: Pop(1); Push(Stack[-1] + Stack[-13]);
0x329: Push("%
")
0x32a: Pop(2); Push(Stack[-2] + Stack[-1]);
0x32b: Stack[-20] = Stack[-20] + Stack[-1]; Pop(1);
0x32c: Push("default")
0x32d: Push((int) 218)
0x32e: @ GetTextHeightInWidth(Stack[-13], Stack[-2], Stack[-1], Stack[-21])
0x32f: Pop(2)
0x330: Stack[-25] = Stack[-25] + Stack[-11]; Pop(0);
0x331: GOTO 0x35a

0x332: PushEmpty(string, object)
0x333: Stack[-1] = Stack[-75]
0x334: Call2 0xc1

0x335: Pop(1)
0x336: Push("organ_combination")
0x337: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x338: IF (Stack[-1] == 0) GOTO 0x35a; Pop(1)

0x339: Stack[-18] = (bool) 1
0x33a: Push("DiseaseRate")
0x33b: @@ GetProperty(Stack[-11], Stack[-1])
0x33c: Pop(1)
0x33d: Push("HealthIncrease")
0x33e: @@ GetProperty(Stack[-10], Stack[-1])
0x33f: Pop(1)
0x340: Push((int) 11)
0x341: @ GetStringByID(Stack[-9], Stack[-1])
0x342: Pop(1)
0x343: Push((int) 13)
0x344: @ GetStringByID(Stack[-8], Stack[-1])
0x345: Pop(1)
0x346: Push((int) 100)
0x347: Stack[-7] = Stack[-11] * Stack[-1]; Pop(1);
0x348: Push(" ")
0x349: Pop(1); Push(Stack[-9] + Stack[-1]);
0x34a: Pop(1); Push(Stack[-1] + Stack[-7]);
0x34b: Push("%
")
0x34c: Stack[-21] = Stack[-2] + Stack[-1]; Pop(2);
0x34d: Push((int) 100)
0x34e: Stack[-7] = Stack[-10] * Stack[-1]; Pop(1);
0x34f: Push(" ")
0x350: Pop(1); Push(Stack[-8] + Stack[-1]);
0x351: Pop(1); Push(Stack[-1] + Stack[-7]);
0x352: Push("%
")
0x353: Pop(2); Push(Stack[-2] + Stack[-1]);
0x354: Stack[-20] = Stack[-20] + Stack[-1]; Pop(1);
0x355: Push("default")
0x356: Push((int) 218)
0x357: @ GetTextHeightInWidth(Stack[-7], Stack[-2], Stack[-1], Stack[-21])
0x358: Pop(2)
0x359: Stack[-25] = Stack[-25] + Stack[-5]; Pop(0);
0x35a: @ GetScreenSize(Stack[-4], Stack[-3])
0x35b: Pop(0)
0x35c: Pop(0); Push(Stack[-4] - Stack[-75]);
0x35d: Push((int) 250)
0x35e: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x35f: IF (Stack[-1] == 0) GOTO 0x362; Pop(1)

0x360: Stack[-2] = Stack[-75]
0x361: GOTO 0x364

0x362: Push((int) 250)
0x363: Stack[-3] = Stack[-76] - Stack[-1]; Pop(1);
0x364: Pop(0); Push((bool) Stack[-74] > Stack[-25])
0x365: IF (Stack[-1] == 0) GOTO 0x368; Pop(1)

0x366: Stack[-1] = Stack[-74] - Stack[-25]; Pop(0);
0x367: GOTO 0x36f

0x368: Stack[-1] = Stack[-74]
0x369: Pop(0); Push(Stack[-1] + Stack[-25]);
0x36a: Push((int) 600)
0x36b: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x36c: IF (Stack[-1] == 0) GOTO 0x36f; Pop(1)

0x36d: Push((int) 600)
0x36e: Stack[-2] = Stack[-1] - Stack[-26]; Pop(1);
0x36f: @ ScreenToClient(Stack[-2], Stack[-1])
0x370: Pop(0)
0x371: PushEmpty(int, int, int, int, float)
0x372: Stack[-5] = Stack[-7]
0x373: Stack[-4] = Stack[-6]
0x374: Stack[-3] = (int) 250
0x375: Stack[-2] = Stack[-30]
0x376: Stack[-1] = Stack[-76]
0x377: Call2 0x161

0x378: Pop(5)
0x379: PushEmpty(int, int, object, float)
0x37a: Push((int) 16)
0x37b: Stack[-5] = Stack[-7] + Stack[-1]; Pop(1);
0x37c: Push((int) 16)
0x37d: Stack[-4] = Stack[-6] + Stack[-1]; Pop(1);
0x37e: Stack[-2] = Stack[-77]
0x37f: Stack[-1] = Stack[-75]
0x380: Call2 0x17c

0x381: Pop(4)
0x382: Push((int) 250)
0x383: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x384: Push("default")
0x385: Push((int) 16)
0x386: Pop(1); Push(Stack[-4] + Stack[-1]);
0x387: Push((int) 218)
0x388: Push((float)0.64706)
0x389: Push((float)0.64706)
0x38a: Push((float)0.64706)
0x38b: @ PrintInWidth(Stack[-31], Stack[-6], Stack[-5], Stack[-7], Stack[-4], Stack[-35], Stack[-3], Stack[-2], Stack[-1], Stack[-77])
0x38c: Pop(6)
0x38d: Stack[-1] = Stack[-1] + Stack[-25]; Pop(0);
0x38e: PushEmpty(bool)
0x38f: Stack[-1] = (bool) 1
0x390: Push(Stack[-23])
0x391: IF (Stack[-1] == 0) GOTO 0x395; Pop(1)

0x392: Push(Stack[-24])
0x393: IF (Stack[-1] == 0) GOTO 0x395; Pop(1)

0x394: Stack[-1] = (bool) 0
0x395: IF (Stack[-1] == 0) GOTO 0x3a0; Pop(1)

0x396: Push("default")
0x397: Push((int) 16)
0x398: Pop(1); Push(Stack[-4] + Stack[-1]);
0x399: Push((int) 218)
0x39a: Push((float)0.64706)
0x39b: Push((float)0.64706)
0x39c: Push((float)0.64706)
0x39d: @ PrintInWidth(Stack[-31], Stack[-6], Stack[-5], Stack[-7], Stack[-4], Stack[-30], Stack[-3], Stack[-2], Stack[-1], Stack[-77])
0x39e: Pop(6)
0x39f: Stack[-1] = Stack[-1] + Stack[-25]; Pop(0);
0x3a0: Push(Stack[-18])
0x3a1: IF (Stack[-1] == 0) GOTO 0x3ac; Pop(1)

0x3a2: Push("default")
0x3a3: Push((int) 16)
0x3a4: Pop(1); Push(Stack[-4] + Stack[-1]);
0x3a5: Push((int) 218)
0x3a6: Push((float)0.64706)
0x3a7: Push((float)0.64706)
0x3a8: Push((float)0.64706)
0x3a9: @ PrintInWidth(Stack[-31], Stack[-6], Stack[-5], Stack[-7], Stack[-4], Stack[-25], Stack[-3], Stack[-2], Stack[-1], Stack[-77])
0x3aa: Pop(6)
0x3ab: Stack[-1] = Stack[-1] + Stack[-25]; Pop(0);
0x3ac: Return(); Pop(70)

0x3ad: Stack[-35] = 0
0x3ae: PushEmpty(int, object, string, string, int, int, float, int, float, float, int, int, int, int, int, int, int, int, object, string, string, int, int, float, int, float, float, int, int, int, int, int, int, int)
0x3af: Pop(0); Push((bool) Stack[-36] == 0)
0x3b0: IF (Stack[-1] == 0) GOTO 0x3b2; Pop(1)

0x3b1: Return(); Pop(34)

0x3b2: Stack[-35] = (int) 1
0x3b3: @@ size(Stack[-17])
0x3b4: Pop(0)
0x3b5: Pop(0); Push((bool) Stack[-17] == 0)
0x3b6: IF (Stack[-1] == 0) GOTO 0x3b8; Pop(1)

0x3b7: Return(); Pop(34)

0x3b8: Push(Stack[-17])
0x3b9: IF (Stack[-1] == 0) GOTO 0x3f7; Pop(1)

0x3ba: Stack[-12] = (int) 0
0x3bb: Stack[-11] = (int) 0
0x3bc: Stack[-10] = (int) 0
0x3bd: Pop(0); Push((bool) Stack[-10] < Stack[-17])
0x3be: IF (Stack[-1] == 0) GOTO 0x3ca; Pop(1)

0x3bf: @@ get(Stack[-16], Stack[-10])
0x3c0: Pop(0)
0x3c1: @@ GetTime(Stack[-9])
0x3c2: Pop(0)
0x3c3: Pop(0); Push((bool) Stack[-9] > Stack[-11])
0x3c4: IF (Stack[-1] == 0) GOTO 0x3c7; Pop(1)

0x3c5: Stack[-11] = Stack[-9]
0x3c6: Stack[-12] = Stack[-10]
0x3c7: Push((int) 1)
0x3c8: Stack[-11] = Stack[-11] + Stack[-1]; Pop(1);
0x3c9: GOTO 0x3bd

0x3ca: @@ get(Stack[-16], Stack[-12])
0x3cb: Pop(0)
0x3cc: @@ GetTextID(Stack[-13])
0x3cd: Pop(0)
0x3ce: @ GetStringByID(Stack[-14], Stack[-13])
0x3cf: Pop(0)
0x3d0: @@ GetTime(Stack[-8])
0x3d1: Pop(0)
0x3d2: PushEmpty(int)
0x3d3: Stack[-1] = Stack[-9]
0x3d4: Stack[-8] = Stack[-1]
0x3d5: Pop(1)
0x3d6: Push((int) 60)
0x3d7: Pop(0); Push(Stack[-9] - Stack[-8]);
0x3d8: Stack[-8] = Stack[-2] * Stack[-1]; Pop(2);
0x3d9: Push((int) 10)
0x3da: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x3db: IF (Stack[-1] == 0) GOTO 0x3e5; Pop(1)

0x3dc: Push((int) 24)
0x3dd: Pop(1); Push(Stack[-8] % Stack[-1]);
0x3de: Push(":0")
0x3df: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3e0: Pop(1); Push(Stack[-1] + Stack[-7]);
0x3e1: Push(" ")
0x3e2: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3e3: Stack[-16] = Stack[-16] + Stack[-1]; Pop(1);
0x3e4: GOTO 0x3ed

0x3e5: Push((int) 24)
0x3e6: Pop(1); Push(Stack[-8] % Stack[-1]);
0x3e7: Push(":")
0x3e8: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3e9: Pop(1); Push(Stack[-1] + Stack[-7]);
0x3ea: Push(" ")
0x3eb: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3ec: Stack[-16] = Stack[-16] + Stack[-1]; Pop(1);
0x3ed: Stack[-15] = Stack[-15] + Stack[-14]; Pop(0);
0x3ee: @@ remove(Stack[-12])
0x3ef: Pop(0)
0x3f0: Push((int) -1)
0x3f1: Stack[-18] = Stack[-18] + Stack[-1]; Pop(1);
0x3f2: Push(Stack[-17])
0x3f3: IF (Stack[-1] == 0) GOTO 0x3f6; Pop(1)

0x3f4: Push("

")
0x3f5: Stack[-16] = Stack[-16] + Stack[-1]; Pop(1);
0x3f6: GOTO 0x3b8

0x3f7: Push("default")
0x3f8: Push((int) 218)
0x3f9: @ GetTextHeightInWidth(Stack[-7], Stack[-2], Stack[-1], Stack[-17])
0x3fa: Pop(2)
0x3fb: Push((int) 32)
0x3fc: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x3fd: @ GetScreenSize(Stack[-4], Stack[-3])
0x3fe: Pop(0)
0x3ff: Pop(0); Push(Stack[-4] - Stack[-38]);
0x400: Push((int) 250)
0x401: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x402: IF (Stack[-1] == 0) GOTO 0x405; Pop(1)

0x403: Stack[-2] = Stack[-38]
0x404: GOTO 0x407

0x405: Push((int) 250)
0x406: Stack[-3] = Stack[-39] - Stack[-1]; Pop(1);
0x407: Pop(0); Push((bool) Stack[-37] > Stack[-5])
0x408: IF (Stack[-1] == 0) GOTO 0x40b; Pop(1)

0x409: Stack[-1] = Stack[-37] - Stack[-5]; Pop(0);
0x40a: GOTO 0x412

0x40b: Stack[-1] = Stack[-37]
0x40c: Pop(0); Push(Stack[-1] + Stack[-5]);
0x40d: Push((int) 600)
0x40e: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x40f: IF (Stack[-1] == 0) GOTO 0x412; Pop(1)

0x410: Push((int) 600)
0x411: Stack[-2] = Stack[-1] - Stack[-6]; Pop(1);
0x412: @ ScreenToClient(Stack[-2], Stack[-1])
0x413: Pop(0)
0x414: PushEmpty(int, int, int, int, float)
0x415: Stack[-5] = Stack[-7]
0x416: Stack[-4] = Stack[-6]
0x417: Stack[-3] = (int) 250
0x418: Stack[-2] = Stack[-10]
0x419: Stack[-1] = Stack[-40]
0x41a: Call2 0x161

0x41b: Pop(5)
0x41c: Push("default")
0x41d: Push((int) 16)
0x41e: Pop(1); Push(Stack[-4] + Stack[-1]);
0x41f: Push((int) 16)
0x420: Pop(1); Push(Stack[-4] + Stack[-1]);
0x421: Push((int) 218)
0x422: Push((float)0.64706)
0x423: Push((float)0.64706)
0x424: Push((float)0.64706)
0x425: @ PrintInWidth(Stack[-12], Stack[-7], Stack[-6], Stack[-5], Stack[-4], Stack[-22], Stack[-3], Stack[-2], Stack[-1], Stack[-42])
0x426: Pop(7)
0x427: Return(); Pop(34)

0x428: Stack[-16] = 0
0x429: PushEmpty(int, int, int, int, int, int, int, int, int, int)
0x42a: Stack[-11] = (int) 1
0x42b: Push("default")
0x42c: Push((int) 218)
0x42d: @ GetTextHeightInWidth(Stack[-7], Stack[-2], Stack[-1], Stack[-15])
0x42e: Pop(2)
0x42f: Push((int) 32)
0x430: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x431: @ GetScreenSize(Stack[-4], Stack[-3])
0x432: Pop(0)
0x433: Pop(0); Push(Stack[-4] - Stack[-15]);
0x434: Push((int) 250)
0x435: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x436: IF (Stack[-1] == 0) GOTO 0x439; Pop(1)

0x437: Stack[-2] = Stack[-15]
0x438: GOTO 0x43b

0x439: Push((int) 250)
0x43a: Stack[-3] = Stack[-16] - Stack[-1]; Pop(1);
0x43b: Pop(0); Push((bool) Stack[-14] > Stack[-5])
0x43c: IF (Stack[-1] == 0) GOTO 0x43f; Pop(1)

0x43d: Stack[-1] = Stack[-14] - Stack[-5]; Pop(0);
0x43e: GOTO 0x446

0x43f: Stack[-1] = Stack[-14]
0x440: Pop(0); Push(Stack[-1] + Stack[-5]);
0x441: Push((int) 600)
0x442: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x443: IF (Stack[-1] == 0) GOTO 0x446; Pop(1)

0x444: Push((int) 600)
0x445: Stack[-2] = Stack[-1] - Stack[-6]; Pop(1);
0x446: @ ScreenToClient(Stack[-2], Stack[-1])
0x447: Pop(0)
0x448: PushEmpty(int, int, int, int, float)
0x449: Stack[-5] = Stack[-7]
0x44a: Stack[-4] = Stack[-6]
0x44b: Stack[-3] = (int) 250
0x44c: Stack[-2] = Stack[-10]
0x44d: Stack[-1] = Stack[-16]
0x44e: Call2 0x161

0x44f: Pop(5)
0x450: Push("default")
0x451: Push((int) 16)
0x452: Pop(1); Push(Stack[-4] + Stack[-1]);
0x453: Push((int) 16)
0x454: Pop(1); Push(Stack[-4] + Stack[-1]);
0x455: Push((int) 218)
0x456: Push((float)0.64706)
0x457: Push((float)0.64706)
0x458: Push((float)0.64706)
0x459: @ PrintInWidth(Stack[-12], Stack[-7], Stack[-6], Stack[-5], Stack[-4], Stack[-20], Stack[-3], Stack[-2], Stack[-1], Stack[-18])
0x45a: Pop(7)
0x45b: Return(); Pop(10)

0x45c: PushEmpty(int, string, string, int, string, string)
0x45d: PushEmpty(bool)
0x45e: Stack[-1] = (bool) 0
0x45f: Pop(0); Push((bool) Stack[-9] == 0)
0x460: IF (Stack[-1] == 0) GOTO 0x464; Pop(1)

0x461: Pop(0); Push(( Stack[-8] != 0 )
0x462: IF (Stack[-1] == 0) GOTO 0x464; Pop(1)

0x463: Stack[-1] = (bool) 1
0x464: IF (Stack[-1] == 0) GOTO 0x467; Pop(1)

0x465: Stack[-9] = (bool) 0
0x466: Return(); Pop(6)

0x467: PushEmpty(bool)
0x468: Stack[-1] = (bool) 0
0x469: Pop(0); Push((bool) Stack[-8] == 0)
0x46a: IF (Stack[-1] == 0) GOTO 0x46e; Pop(1)

0x46b: Pop(0); Push(( Stack[-9] != 0 )
0x46c: IF (Stack[-1] == 0) GOTO 0x46e; Pop(1)

0x46d: Stack[-1] = (bool) 1
0x46e: IF (Stack[-1] == 0) GOTO 0x471; Pop(1)

0x46f: Stack[-9] = (bool) 0
0x470: Return(); Pop(6)

0x471: PushEmpty(bool)
0x472: Stack[-1] = (bool) 0
0x473: Pop(0); Push((bool) Stack[-9] == 0)
0x474: IF (Stack[-1] == 0) GOTO 0x478; Pop(1)

0x475: Pop(0); Push((bool) Stack[-8] == 0)
0x476: IF (Stack[-1] == 0) GOTO 0x478; Pop(1)

0x477: Stack[-1] = (bool) 1
0x478: IF (Stack[-1] == 0) GOTO 0x47b; Pop(1)

0x479: Stack[-9] = (bool) 1
0x47a: Return(); Pop(6)

0x47b: PushEmpty(int, object)
0x47c: Stack[-1] = Stack[-10]
0x47d: Call2 0x6d

0x47e: Stack[-5] = Stack[-2]
0x47f: Pop(2)
0x480: @ GetInvItemSprite2(Stack[-2], Stack[-3])
0x481: Pop(0)
0x482: PushEmpty(int, object)
0x483: Stack[-1] = Stack[-9]
0x484: Call2 0x6d

0x485: Stack[-5] = Stack[-2]
0x486: Pop(2)
0x487: @ GetInvItemSprite2(Stack[-1], Stack[-3])
0x488: Pop(0)
0x489: Stack[-9] = Stack[-2] == Stack[-1]; Pop(0);
0x48a: Return(); Pop(6)

