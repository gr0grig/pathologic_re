GlobalVarCount = 0

Strings:
	A:GetTooltipType
	A:GetTooltipText
	A:GetTooltipObject
	W:default
	A:GetItemID
	W:Price
	W:durability
	A:HasProperty
	A:GetProperty
	W:BarterPrice
	W:sellf
	W:buyf
	W:barter
	W:bg
	W:border
	W:Description
	W:Error: Item doesnt have description (FIXME!)
	W:HasDurability
	W: 
	W:%
	W:HasUses
	W:uses
	W:grass_combination
	W:im_inc
	W:hl_inc
	W:%

	W:organ_combination
	W:DiseaseRate
	W:HealthIncrease
	W:: 
	A:size
	A:get
	A:GetTime
	A:GetTextID
	W::0
	W::
	A:remove
	W:


// @pool_raw:476574546f6f6c7469705479706500476574546f6f6c7469705465787400476574546f6f6c7469704f626a65637400640065006600610075006c00740000004765744974656d4944005000720069006300650000006400750072006100620069006c00690074007900000048617350726f70657274790047657450726f706572747900420061007200740065007200500072006900630065000000730065006c006c006600000062007500790066000000620061007200740065007200000062006700000062006f00720064006500720000004400650073006300720069007000740069006f006e0000004500720072006f0072003a0020004900740065006d00200064006f00650073006e0074002000680061007600650020006400650073006300720069007000740069006f006e00200028004600490058004d0045002100290000004800610073004400750072006100620069006c00690074007900000020000000250000004800610073005500730065007300000075007300650073000000670072006100730073005f0063006f006d00620069006e006100740069006f006e00000069006d005f0069006e006300000068006c005f0069006e006300000025000a0000006f007200670061006e005f0063006f006d00620069006e006100740069006f006e0000004400690073006500610073006500520061007400650000004800650061006c007400680049006e0063007200650061007300650000003a002000000073697a65006765740047657454696d6500476574546578744944003a00300000003a00000072656d6f7665000a000a000000
// @pool_encoding:utf8

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

0x10: @@ GetTooltipType(Stack[-3]); Obj=6 // @poff=0
0x11: Pop(0)
0x12: @@ GetTooltipText(Stack[-2]); Obj=6 // @poff=15
0x13: Pop(0)
0x14: @@ GetTooltipObject(Stack[-1]); Obj=6 // @poff=30
0x15: Pop(0)
0x16: PushEmpty(int, string, object, int, int, float)
0x17: Stack[-9] = Stack[-6]
0x18: Stack[-8] = Stack[-5]
0x19: Stack[-7] = Stack[-4]
0x1a: Stack[-11] = Stack[-3]
0x1b: Stack[-10] = Stack[-2]
0x1c: Stack[-1] = (int) 1
0x1d: Call2 0xd2

0x1e: Pop(6)
0x1f: Push("default") // @poff=47
0x20: Push((int) 0)
0x21: Push((int) 0)
0x22: @ Blit(Stack[-3], Stack[-2], Stack[-1])
0x23: Pop(3)
0x24: Return(); Pop(12)

0x25: Stack[-1] = 0
0x26: Stack[-6] = 0
0x27: PushEmpty(int, int)
0x28: @@ GetItemID(Stack[-1]); Obj=3 // @poff=63
0x29: Pop(0)
0x2a: Stack[-1] = Stack[-4]
0x2b: Return(); Pop(2)

0x2c: PushEmpty(int, int, int, string, bool, bool, int, bool, int, int, int, int, string, bool, bool, int, bool, int)
0x2d: Push((int) 0)
0x2e: Pop(1); Push((bool) Stack[-20] == Stack[-1])
0x2f: IF (Stack[-1] == 0) GOTO 0x60; Pop(1)

0x30: PushEmpty(int)
0x31: Call2 0x85

0x32: Stack[-1] = Stack[-10]
0x33: Pop(1)
0x34: Stack[-8] = (int) 0
0x35: Stack[-7] = (int) 1
0x36: Pop(0); Push((bool) Stack[-7] <= Stack[-9])
0x37: IF (Stack[-1] == 0) GOTO 0x4f; Pop(1)

0x38: Stack[-6] = "Price" // @poff=73
0x39: Push((int) 1)
0x3a: Pop(1); Push((bool) Stack[-8] != Stack[-1])
0x3b: IF (Stack[-1] == 0) GOTO 0x3d; Pop(1)

0x3c: Stack[-6] = Stack[-6] + Stack[-7]; Pop(0);
0x3d: PushEmpty(int, object)
0x3e: Stack[-22] = Stack[-1]
0x3f: Call2 0x27

0x40: Pop(1)
0x41: @ HasInvItemProperty(Stack[-6], Stack[-1], Stack[-7])
0x42: Pop(1)
0x43: Pop(0); Push((bool) Stack[-5] == 0)
0x44: IF (Stack[-1] == 0) GOTO 0x46; Pop(1)

0x45: GOTO 0x4c

0x46: PushEmpty(int, object)
0x47: Stack[-22] = Stack[-1]
0x48: Call2 0x27

0x49: Pop(1)
0x4a: @ GetInvItemProperty(Stack[-9], Stack[-1], Stack[-7])
0x4b: Pop(1)
0x4c: Push((int) 1)
0x4d: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x4e: GOTO 0x36

0x4f: Push("durability") // @poff=85
0x50: @@ HasProperty(Stack[-5], Stack[-1]); Obj=21 // @poff=107
0x51: Pop(1)
0x52: Push(Stack[-4])
0x53: IF (Stack[-1] == 0) GOTO 0x5e; Pop(1)

0x54: Push("durability") // @poff=85
0x55: @@ GetProperty(Stack[-4], Stack[-1]); Obj=21 // @poff=119
0x56: Pop(1)
0x57: Push((float)0.5)
0x58: Push((float)1.0)
0x59: Push((float)100.0)
0x5a: Pop(1); Push(Stack[-6] / Stack[-1]);
0x5b: Pop(2); Push(Stack[-2] + Stack[-1]);
0x5c: Pop(2); Push(Stack[-2] * Stack[-1]);
0x5d: Stack[-9] = Stack[-9] * Stack[-1]; Pop(1);
0x5e: Stack[-8] = Stack[-21]
0x5f: Return(); Pop(18)

0x60: PushEmpty(int, object)
0x61: Stack[-22] = Stack[-1]
0x62: Call2 0x27

0x63: Pop(1)
0x64: Push("BarterPrice") // @poff=131
0x65: Pop(1); Push(Stack[-1] + Stack[-21]);
0x66: @ HasInvItemProperty(Stack[-4], Stack[-2], Stack[-1])
0x67: Pop(2)
0x68: Pop(0); Push((bool) Stack[-2] == 0)
0x69: IF (Stack[-1] == 0) GOTO 0x6c; Pop(1)

0x6a: Stack[-21] = (int) 0
0x6b: Return(); Pop(18)

0x6c: PushEmpty(int, object)
0x6d: Stack[-22] = Stack[-1]
0x6e: Call2 0x27

0x6f: Pop(1)
0x70: Push("BarterPrice") // @poff=131
0x71: Pop(1); Push(Stack[-1] + Stack[-21]);
0x72: @ GetInvItemProperty(Stack[-3], Stack[-2], Stack[-1])
0x73: Pop(2)
0x74: Push((int) 0)
0x75: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x76: IF (Stack[-1] == 0) GOTO 0x79; Pop(1)

0x77: Stack[-1] = Stack[-21]
0x78: Return(); Pop(18)

0x79: Stack[-21] = -Stack[-1]; Pop(0);
0x7a: Return(); Pop(18)

0x7b: PushEmpty(int, string, int, string)
0x7c: PushEmpty(int, object)
0x7d: Stack[-7] = Stack[-1]
0x7e: Call2 0x27

0x7f: Stack[-2] = Stack[-4]
0x80: Pop(2)
0x81: @ GetInvItemName(Stack[-1], Stack[-2])
0x82: Pop(0)
0x83: Stack[-1] = Stack[-6]
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

0x98: Push("sellf") // @poff=155
0x99: Pop(1); Push(Stack[-1] + Stack[-3]);
0x9a: @@ HasProperty(Stack[-1], Stack[-2]); Obj=10 // @poff=107
0x9b: Pop(1)
0x9c: Push(Stack[-1])
0x9d: IF (Stack[-1] == 0) GOTO 0xa2; Pop(1)

0x9e: Push("sellf") // @poff=155
0x9f: Pop(1); Push(Stack[-1] + Stack[-3]);
0xa0: @@ GetProperty(Stack[-1], Stack[-4]); Obj=10 // @poff=119
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

0xb2: Push("buyf") // @poff=167
0xb3: Pop(1); Push(Stack[-1] + Stack[-3]);
0xb4: @@ HasProperty(Stack[-1], Stack[-2]); Obj=10 // @poff=107
0xb5: Pop(1)
0xb6: Push(Stack[-1])
0xb7: IF (Stack[-1] == 0) GOTO 0xbc; Pop(1)

0xb8: Push("buyf") // @poff=167
0xb9: Pop(1); Push(Stack[-1] + Stack[-3]);
0xba: @@ GetProperty(Stack[-1], Stack[-4]); Obj=10 // @poff=119
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
0xc5: Push("barter") // @poff=177
0xc6: @@ HasProperty(Stack[-1], Stack[-3]); Obj=4 // @poff=107
0xc7: Pop(1)
0xc8: Pop(0); Push((bool) Stack[-2] == 0)
0xc9: IF (Stack[-1] == 0) GOTO 0xcc; Pop(1)

0xca: Stack[-7] = (int) 0
0xcb: Return(); Pop(6)

0xcc: Push("barter") // @poff=177
0xcd: @@ GetProperty(Stack[-1], Stack[-2]); Obj=4 // @poff=119
0xce: Pop(1)
0xcf: Stack[-1] = Stack[-7]
0xd0: Return(); Pop(6)

0xd1: Stack[-3] = 0
0xd2: PushEmpty()
0xd3: Push((int) 1)
0xd4: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0xd5: IF (Stack[-1] == 0) GOTO 0xdf; Pop(1)

0xd6: PushEmpty(int, int, object, string, float)
0xd7: Stack[-8] = Stack[-5]
0xd8: Stack[-7] = Stack[-4]
0xd9: Stack[-9] = Stack[-3]
0xda: Stack[-10] = Stack[-2]
0xdb: Stack[-6] = Stack[-1]
0xdc: Call2 0x155

0xdd: Pop(5)
0xde: GOTO 0x10d

0xdf: Push((int) 2)
0xe0: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0xe1: IF (Stack[-1] == 0) GOTO 0xea; Pop(1)

0xe2: PushEmpty(int, int, object, float)
0xe3: Stack[-7] = Stack[-4]
0xe4: Stack[-6] = Stack[-3]
0xe5: Stack[-8] = Stack[-2]
0xe6: Stack[-5] = Stack[-1]
0xe7: Call2 0x3c7

0xe8: Pop(4)
0xe9: GOTO 0x10d

0xea: Push((int) 3)
0xeb: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0xec: IF (Stack[-1] == 0) GOTO 0xf6; Pop(1)

0xed: PushEmpty(int, int, object, bool, float)
0xee: Stack[-8] = Stack[-5]
0xef: Stack[-7] = Stack[-4]
0xf0: Stack[-9] = Stack[-3]
0xf1: Stack[-2] = (bool) 1
0xf2: Stack[-6] = Stack[-1]
0xf3: Call2 0x278

0xf4: Pop(5)
0xf5: GOTO 0x10d

0xf6: Push((int) 4)
0xf7: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0xf8: IF (Stack[-1] == 0) GOTO 0x102; Pop(1)

0xf9: PushEmpty(int, int, object, bool, float)
0xfa: Stack[-8] = Stack[-5]
0xfb: Stack[-7] = Stack[-4]
0xfc: Stack[-9] = Stack[-3]
0xfd: Stack[-2] = (bool) 0
0xfe: Stack[-6] = Stack[-1]
0xff: Call2 0x278

0x100: Pop(5)
0x101: GOTO 0x10d

0x102: Push((int) 5)
0x103: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x104: IF (Stack[-1] == 0) GOTO 0x10d; Pop(1)

0x105: PushEmpty(int, int, string, object, float)
0x106: Stack[-8] = Stack[-5]
0x107: Stack[-7] = Stack[-4]
0x108: Stack[-10] = Stack[-3]
0x109: Stack[-9] = Stack[-2]
0x10a: Stack[-6] = Stack[-1]
0x10b: Call2 0x442

0x10c: Pop(5)
0x10d: Return(); Pop(0)

0x10e: PushEmpty()
0x10f: Push("bg") // @poff=191
0x110: @ BlitClipped(Stack[-1], Stack[-6], Stack[-5], Stack[-6], Stack[-5], Stack[-4], Stack[-3], Stack[-2])
0x111: Pop(1)
0x112: Push("border") // @poff=197
0x113: Push((int) 1)
0x114: @ StretchBlit(Stack[-2], Stack[-7], Stack[-6], Stack[-5], Stack[-1], Stack[-3])
0x115: Pop(2)
0x116: Push("border") // @poff=197
0x117: Pop(0); Push(Stack[-5] + Stack[-3]);
0x118: Push((int) 1)
0x119: Pop(2); Push(Stack[-2] - Stack[-1]);
0x11a: Push((int) 1)
0x11b: @ StretchBlit(Stack[-3], Stack[-8], Stack[-2], Stack[-6], Stack[-1], Stack[-4])
0x11c: Pop(3)
0x11d: Push("border") // @poff=197
0x11e: Push((int) 1)
0x11f: @ StretchBlit(Stack[-2], Stack[-7], Stack[-6], Stack[-1], Stack[-4], Stack[-3])
0x120: Pop(2)
0x121: Push("border") // @poff=197
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
0x12e: Stack[-8] = Stack[-1]
0x12f: Call2 0x27

0x130: Stack[-2] = Stack[-4]
0x131: Pop(2)
0x132: @ GetInvItemSprite2(Stack[-1], Stack[-2])
0x133: Pop(0)
0x134: Push((int) 218)
0x135: Push((int) 218)
0x136: @ StretchBlit(Stack[-3], Stack[-10], Stack[-9], Stack[-2], Stack[-1], Stack[-7])
0x137: Pop(2)
0x138: Push("border") // @poff=197
0x139: Push((int) 218)
0x13a: Push((int) 1)
0x13b: @ StretchBlit(Stack[-3], Stack[-11], Stack[-10], Stack[-2], Stack[-1], Stack[-8])
0x13c: Pop(3)
0x13d: Push("border") // @poff=197
0x13e: Push((int) 218)
0x13f: Pop(1); Push(Stack[-9] + Stack[-1]);
0x140: Push((int) 1)
0x141: Pop(2); Push(Stack[-2] - Stack[-1]);
0x142: Push((int) 218)
0x143: Push((int) 1)
0x144: @ StretchBlit(Stack[-4], Stack[-12], Stack[-3], Stack[-2], Stack[-1], Stack[-9])
0x145: Pop(4)
0x146: Push("border") // @poff=197
0x147: Push((int) 1)
0x148: Push((int) 218)
0x149: @ StretchBlit(Stack[-3], Stack[-11], Stack[-10], Stack[-2], Stack[-1], Stack[-8])
0x14a: Pop(3)
0x14b: Push("border") // @poff=197
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
0x15a: Stack[-79] = Stack[-1]
0x15b: Call2 0x27

0x15c: Stack[-2] = Stack[-39]
0x15d: Pop(2)
0x15e: Push("Description") // @poff=211
0x15f: @ HasInvItemProperty(Stack[-34], Stack[-38], Stack[-1])
0x160: Pop(1)
0x161: Push(Stack[-33])
0x162: IF (Stack[-1] == 0) GOTO 0x169; Pop(1)

0x163: Push("Description") // @poff=211
0x164: @ GetInvItemProperty(Stack[-33], Stack[-38], Stack[-1])
0x165: Pop(1)
0x166: @ GetStringByID(Stack[-36], Stack[-32])
0x167: Pop(0)
0x168: GOTO 0x16a

0x169: Stack[-36] = "Error: Item doesnt have description (FIXME!)" // @poff=235
0x16a: Push("default") // @poff=47
0x16b: Push((int) 218)
0x16c: @ GetTextHeightInWidth(Stack[-33], Stack[-2], Stack[-1], Stack[-38])
0x16d: Pop(2)
0x16e: Push("default") // @poff=47
0x16f: @ GetFontHeight(Stack[-31], Stack[-1])
0x170: Pop(1)
0x171: Stack[-31] = Stack[-31] + Stack[-30]; Pop(0);
0x172: Push("HasDurability") // @poff=325
0x173: @ HasInvItemProperty(Stack[-30], Stack[-38], Stack[-1])
0x174: Pop(1)
0x175: Push("durability") // @poff=85
0x176: @@ HasProperty(Stack[-29], Stack[-1]); Obj=78 // @poff=107
0x177: Pop(1)
0x178: PushEmpty(bool)
0x179: Stack[-1] = (bool) 1
0x17a: Push(Stack[-29])
0x17b: IF (Stack[-1] == 1) GOTO 0x17f; Pop(1)

0x17c: Push(Stack[-30])
0x17d: IF (Stack[-1] == 1) GOTO 0x17f; Pop(1)

0x17e: Stack[-1] = (bool) 0
0x17f: IF (Stack[-1] == 0) GOTO 0x194; Pop(1)

0x180: Push(Stack[-28])
0x181: IF (Stack[-1] == 0) GOTO 0x186; Pop(1)

0x182: Push("durability") // @poff=85
0x183: @@ GetProperty(Stack[-28], Stack[-1]); Obj=78 // @poff=119
0x184: Pop(1)
0x185: GOTO 0x187

0x186: Stack[-27] = (int) 100
0x187: Push((int) 7)
0x188: @ GetStringByID(Stack[-36], Stack[-1])
0x189: Pop(1)
0x18a: Push(" ") // @poff=353
0x18b: Pop(1); Push(Stack[-1] + Stack[-28]);
0x18c: Push("%") // @poff=357
0x18d: Pop(2); Push(Stack[-2] + Stack[-1]);
0x18e: Stack[-36] = Stack[-36] + Stack[-1]; Pop(1);
0x18f: Push("default") // @poff=47
0x190: Push((int) 218)
0x191: @ GetTextHeightInWidth(Stack[-28], Stack[-2], Stack[-1], Stack[-37])
0x192: Pop(2)
0x193: Stack[-31] = Stack[-31] + Stack[-26]; Pop(0);
0x194: Push("HasUses") // @poff=361
0x195: @ HasInvItemProperty(Stack[-26], Stack[-38], Stack[-1])
0x196: Pop(1)
0x197: Push("uses") // @poff=377
0x198: @@ HasProperty(Stack[-25], Stack[-1]); Obj=78 // @poff=107
0x199: Pop(1)
0x19a: PushEmpty(bool)
0x19b: Stack[-1] = (bool) 1
0x19c: Push(Stack[-25])
0x19d: IF (Stack[-1] == 1) GOTO 0x1a1; Pop(1)

0x19e: Push(Stack[-26])
0x19f: IF (Stack[-1] == 1) GOTO 0x1a1; Pop(1)

0x1a0: Stack[-1] = (bool) 0
0x1a1: IF (Stack[-1] == 0) GOTO 0x1b4; Pop(1)

0x1a2: Push(Stack[-24])
0x1a3: IF (Stack[-1] == 0) GOTO 0x1a8; Pop(1)

0x1a4: Push("uses") // @poff=377
0x1a5: @@ GetProperty(Stack[-24], Stack[-1]); Obj=78 // @poff=119
0x1a6: Pop(1)
0x1a7: GOTO 0x1a9

0x1a8: Stack[-23] = (int) 1
0x1a9: Push((int) 1006)
0x1aa: @ GetStringByID(Stack[-35], Stack[-1])
0x1ab: Pop(1)
0x1ac: Push(" ") // @poff=353
0x1ad: Pop(1); Push(Stack[-1] + Stack[-24]);
0x1ae: Stack[-35] = Stack[-35] + Stack[-1]; Pop(1);
0x1af: Push("default") // @poff=47
0x1b0: Push((int) 218)
0x1b1: @ GetTextHeightInWidth(Stack[-24], Stack[-2], Stack[-1], Stack[-36])
0x1b2: Pop(2)
0x1b3: Stack[-31] = Stack[-31] + Stack[-22]; Pop(0);
0x1b4: Stack[-20] = (bool) 0
0x1b5: PushEmpty(string, object)
0x1b6: Stack[-79] = Stack[-1]
0x1b7: Call2 0x7b

0x1b8: Pop(1)
0x1b9: Push("grass_combination") // @poff=387
0x1ba: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1bb: IF (Stack[-1] == 0) GOTO 0x1de; Pop(1)

0x1bc: Stack[-20] = (bool) 1
0x1bd: Push("im_inc") // @poff=423
0x1be: @@ GetProperty(Stack[-20], Stack[-1]); Obj=78 // @poff=119
0x1bf: Pop(1)
0x1c0: Push("hl_inc") // @poff=437
0x1c1: @@ GetProperty(Stack[-19], Stack[-1]); Obj=78 // @poff=119
0x1c2: Pop(1)
0x1c3: Push((int) 8)
0x1c4: @ GetStringByID(Stack[-18], Stack[-1])
0x1c5: Pop(1)
0x1c6: Push((int) 9)
0x1c7: @ GetStringByID(Stack[-16], Stack[-1])
0x1c8: Pop(1)
0x1c9: Push((int) 100)
0x1ca: Stack[-15] = Stack[-20] * Stack[-1]; Pop(1);
0x1cb: Push(" ") // @poff=353
0x1cc: Pop(1); Push(Stack[-18] + Stack[-1]);
0x1cd: Pop(1); Push(Stack[-1] + Stack[-15]);
0x1ce: Push("%
") // @poff=451
0x1cf: Stack[-23] = Stack[-2] + Stack[-1]; Pop(2);
0x1d0: Push((int) 100)
0x1d1: Stack[-15] = Stack[-19] * Stack[-1]; Pop(1);
0x1d2: Push(" ") // @poff=353
0x1d3: Pop(1); Push(Stack[-16] + Stack[-1]);
0x1d4: Pop(1); Push(Stack[-1] + Stack[-15]);
0x1d5: Push("%
") // @poff=451
0x1d6: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1d7: Stack[-22] = Stack[-22] + Stack[-1]; Pop(1);
0x1d8: Push("default") // @poff=47
0x1d9: Push((int) 218)
0x1da: @ GetTextHeightInWidth(Stack[-15], Stack[-2], Stack[-1], Stack[-23])
0x1db: Pop(2)
0x1dc: Stack[-31] = Stack[-31] + Stack[-13]; Pop(0);
0x1dd: GOTO 0x206

0x1de: PushEmpty(string, object)
0x1df: Stack[-79] = Stack[-1]
0x1e0: Call2 0x7b

0x1e1: Pop(1)
0x1e2: Push("organ_combination") // @poff=457
0x1e3: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1e4: IF (Stack[-1] == 0) GOTO 0x206; Pop(1)

0x1e5: Stack[-20] = (bool) 1
0x1e6: Push("DiseaseRate") // @poff=493
0x1e7: @@ GetProperty(Stack[-13], Stack[-1]); Obj=78 // @poff=119
0x1e8: Pop(1)
0x1e9: Push("HealthIncrease") // @poff=517
0x1ea: @@ GetProperty(Stack[-11], Stack[-1]); Obj=78 // @poff=119
0x1eb: Pop(1)
0x1ec: Push((int) 11)
0x1ed: @ GetStringByID(Stack[-9], Stack[-1])
0x1ee: Pop(1)
0x1ef: Push((int) 13)
0x1f0: @ GetStringByID(Stack[-8], Stack[-1])
0x1f1: Pop(1)
0x1f2: Push((int) 100)
0x1f3: Stack[-7] = Stack[-13] * Stack[-1]; Pop(1);
0x1f4: Push(" ") // @poff=353
0x1f5: Pop(1); Push(Stack[-9] + Stack[-1]);
0x1f6: Pop(1); Push(Stack[-1] + Stack[-7]);
0x1f7: Push("%
") // @poff=451
0x1f8: Stack[-23] = Stack[-2] + Stack[-1]; Pop(2);
0x1f9: Push((int) 100)
0x1fa: Stack[-7] = Stack[-11] * Stack[-1]; Pop(1);
0x1fb: Push(" ") // @poff=353
0x1fc: Pop(1); Push(Stack[-8] + Stack[-1]);
0x1fd: Pop(1); Push(Stack[-1] + Stack[-7]);
0x1fe: Push("%
") // @poff=451
0x1ff: Pop(2); Push(Stack[-2] + Stack[-1]);
0x200: Stack[-22] = Stack[-22] + Stack[-1]; Pop(1);
0x201: Push("default") // @poff=47
0x202: Push((int) 218)
0x203: @ GetTextHeightInWidth(Stack[-7], Stack[-2], Stack[-1], Stack[-23])
0x204: Pop(2)
0x205: Stack[-31] = Stack[-31] + Stack[-5]; Pop(0);
0x206: @ GetScreenSize(Stack[-4], Stack[-3])
0x207: Pop(0)
0x208: Push((int) 266)
0x209: Stack[-32] = Stack[-32] + Stack[-1]; Pop(1);
0x20a: Pop(0); Push(Stack[-4] - Stack[-79]);
0x20b: Push((int) 250)
0x20c: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x20d: IF (Stack[-1] == 0) GOTO 0x210; Pop(1)

0x20e: Stack[-79] = Stack[-2]
0x20f: GOTO 0x212

0x210: Push((int) 250)
0x211: Stack[-3] = Stack[-80] - Stack[-1]; Pop(1);
0x212: Pop(0); Push((bool) Stack[-78] > Stack[-31])
0x213: IF (Stack[-1] == 0) GOTO 0x216; Pop(1)

0x214: Stack[-1] = Stack[-78] - Stack[-31]; Pop(0);
0x215: GOTO 0x21d

0x216: Stack[-78] = Stack[-1]
0x217: Pop(0); Push(Stack[-1] + Stack[-31]);
0x218: Push((int) 600)
0x219: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x21a: IF (Stack[-1] == 0) GOTO 0x21d; Pop(1)

0x21b: Push((int) 600)
0x21c: Stack[-2] = Stack[-1] - Stack[-32]; Pop(1);
0x21d: @ ScreenToClient(Stack[-2], Stack[-1])
0x21e: Pop(0)
0x21f: PushEmpty(int, int, int, int, float)
0x220: Stack[-7] = Stack[-5]
0x221: Stack[-6] = Stack[-4]
0x222: Stack[-3] = (int) 250
0x223: Stack[-36] = Stack[-2]
0x224: Stack[-80] = Stack[-1]
0x225: Call2 0x10e

0x226: Pop(5)
0x227: PushEmpty(int, int, object, float)
0x228: Push((int) 16)
0x229: Stack[-5] = Stack[-7] + Stack[-1]; Pop(1);
0x22a: Push((int) 16)
0x22b: Stack[-4] = Stack[-6] + Stack[-1]; Pop(1);
0x22c: Stack[-81] = Stack[-2]
0x22d: Stack[-79] = Stack[-1]
0x22e: Call2 0x129

0x22f: Pop(4)
0x230: Push((int) 250)
0x231: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x232: Push("default") // @poff=47
0x233: Push((int) 16)
0x234: Pop(1); Push(Stack[-4] + Stack[-1]);
0x235: Push((int) 218)
0x236: Push((float)0.6470588445663452)
0x237: Push((float)0.6470588445663452)
0x238: Push((float)0.6470588445663452)
0x239: @ PrintInWidth(Stack[-37], Stack[-6], Stack[-5], Stack[-7], Stack[-4], Stack[-42], Stack[-3], Stack[-2], Stack[-1], Stack[-81])
0x23a: Pop(6)
0x23b: Pop(0); Push(Stack[-31] + Stack[-30]);
0x23c: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x23d: PushEmpty(bool)
0x23e: Stack[-1] = (bool) 1
0x23f: Push(Stack[-29])
0x240: IF (Stack[-1] == 1) GOTO 0x244; Pop(1)

0x241: Push(Stack[-30])
0x242: IF (Stack[-1] == 1) GOTO 0x244; Pop(1)

0x243: Stack[-1] = (bool) 0
0x244: IF (Stack[-1] == 0) GOTO 0x24f; Pop(1)

0x245: Push("default") // @poff=47
0x246: Push((int) 16)
0x247: Pop(1); Push(Stack[-4] + Stack[-1]);
0x248: Push((int) 218)
0x249: Push((float)0.6470588445663452)
0x24a: Push((float)0.6470588445663452)
0x24b: Push((float)0.6470588445663452)
0x24c: @ PrintInWidth(Stack[-37], Stack[-6], Stack[-5], Stack[-7], Stack[-4], Stack[-41], Stack[-3], Stack[-2], Stack[-1], Stack[-81])
0x24d: Pop(6)
0x24e: Stack[-1] = Stack[-1] + Stack[-31]; Pop(0);
0x24f: PushEmpty(bool)
0x250: Stack[-1] = (bool) 1
0x251: Push(Stack[-25])
0x252: IF (Stack[-1] == 1) GOTO 0x256; Pop(1)

0x253: Push(Stack[-26])
0x254: IF (Stack[-1] == 1) GOTO 0x256; Pop(1)

0x255: Stack[-1] = (bool) 0
0x256: IF (Stack[-1] == 0) GOTO 0x261; Pop(1)

0x257: Push("default") // @poff=47
0x258: Push((int) 16)
0x259: Pop(1); Push(Stack[-4] + Stack[-1]);
0x25a: Push((int) 218)
0x25b: Push((float)0.6470588445663452)
0x25c: Push((float)0.6470588445663452)
0x25d: Push((float)0.6470588445663452)
0x25e: @ PrintInWidth(Stack[-37], Stack[-6], Stack[-5], Stack[-7], Stack[-4], Stack[-40], Stack[-3], Stack[-2], Stack[-1], Stack[-81])
0x25f: Pop(6)
0x260: Stack[-1] = Stack[-1] + Stack[-31]; Pop(0);
0x261: Push(Stack[-20])
0x262: IF (Stack[-1] == 0) GOTO 0x26d; Pop(1)

0x263: Push("default") // @poff=47
0x264: Push((int) 16)
0x265: Pop(1); Push(Stack[-4] + Stack[-1]);
0x266: Push((int) 218)
0x267: Push((float)0.6470588445663452)
0x268: Push((float)0.6470588445663452)
0x269: Push((float)0.6470588445663452)
0x26a: @ PrintInWidth(Stack[-37], Stack[-6], Stack[-5], Stack[-7], Stack[-4], Stack[-27], Stack[-3], Stack[-2], Stack[-1], Stack[-81])
0x26b: Pop(6)
0x26c: Stack[-1] = Stack[-1] + Stack[-31]; Pop(0);
0x26d: Push("default") // @poff=47
0x26e: Push((int) 16)
0x26f: Pop(1); Push(Stack[-4] + Stack[-1]);
0x270: Push((int) 218)
0x271: Push((float)0.6470588445663452)
0x272: Push((float)0.6470588445663452)
0x273: Push((float)0.6470588445663452)
0x274: @ PrintInWidth(Stack[-37], Stack[-6], Stack[-5], Stack[-7], Stack[-4], Stack[-82], Stack[-3], Stack[-2], Stack[-1], Stack[-81])
0x275: Pop(6)
0x276: Stack[-1] = Stack[-1] + Stack[-31]; Pop(0);
0x277: Return(); Pop(74)

0x278: PushEmpty(object, float, int, int, int, float, string, bool, int, string, int, string, bool, bool, int, int, string, bool, bool, int, int, string, bool, float, float, float, string, string, string, int, int, float, float, string, string, int, int, int, int, int, int, object, float, int, int, int, float, string, bool, int, string, int, string, bool, bool, int, int, string, bool, bool, int, int, string, bool, float, float, float, string, string, string, int, int, float, float, string, string, int, int, int, int, int, int)
0x279: Pop(0); Push((bool) Stack[-85] == 0)
0x27a: IF (Stack[-1] == 0) GOTO 0x27c; Pop(1)

0x27b: Return(); Pop(82)

0x27c: @ GetContainer(Stack[-41])
0x27d: Pop(0)
0x27e: @ GetGameTime(Stack[-40])
0x27f: Pop(0)
0x280: Push((int) 1)
0x281: Push((int) 24)
0x282: Pop(1); Push(Stack[-42] / Stack[-1]);
0x283: Stack[-41] = Stack[-2] + Stack[-1]; Pop(2);
0x284: PushEmpty(int, object)
0x285: Stack[-87] = Stack[-1]
0x286: Call2 0x27

0x287: Stack[-2] = Stack[-40]
0x288: Pop(2)
0x289: PushEmpty(int, object, int)
0x28a: Stack[-88] = Stack[-2]
0x28b: PushEmpty(int)
0x28c: Call2 0xc2

0x28d: Stack[-1] = Stack[-2]
0x28e: Pop(1)
0x28f: Call2 0x2c

0x290: Stack[-3] = Stack[-40]
0x291: Pop(3)
0x292: Push(Stack[-84])
0x293: IF (Stack[-1] == 0) GOTO 0x29f; Pop(1)

0x294: PushEmpty(float, object, int, int)
0x295: Stack[-45] = Stack[-3]
0x296: Stack[-43] = Stack[-2]
0x297: PushEmpty(int)
0x298: Call2 0xc2

0x299: Stack[-1] = Stack[-2]
0x29a: Pop(1)
0x29b: Call2 0x8e

0x29c: Stack[-4] = Stack[-40]
0x29d: Pop(4)
0x29e: GOTO 0x2a9

0x29f: PushEmpty(float, object, int, int)
0x2a0: Stack[-45] = Stack[-3]
0x2a1: Stack[-43] = Stack[-2]
0x2a2: PushEmpty(int)
0x2a3: Call2 0xc2

0x2a4: Stack[-1] = Stack[-2]
0x2a5: Pop(1)
0x2a6: Call2 0xa8

0x2a7: Stack[-4] = Stack[-40]
0x2a8: Pop(4)
0x2a9: Stack[-37] = Stack[-37] * Stack[-36]; Pop(0);
0x2aa: Push("Description") // @poff=211
0x2ab: @ HasInvItemProperty(Stack[-35], Stack[-39], Stack[-1])
0x2ac: Pop(1)
0x2ad: Push(Stack[-34])
0x2ae: IF (Stack[-1] == 0) GOTO 0x2b5; Pop(1)

0x2af: Push("Description") // @poff=211
0x2b0: @ GetInvItemProperty(Stack[-34], Stack[-39], Stack[-1])
0x2b1: Pop(1)
0x2b2: @ GetStringByID(Stack[-35], Stack[-33])
0x2b3: Pop(0)
0x2b4: GOTO 0x2b6

0x2b5: Stack[-35] = "Error: Item doesnt have description (FIXME!)" // @poff=235
0x2b6: Push("
") // @poff=453
0x2b7: Stack[-36] = Stack[-36] + Stack[-1]; Pop(1);
0x2b8: Push((int) 5)
0x2b9: @ GetStringByID(Stack[-33], Stack[-1])
0x2ba: Pop(1)
0x2bb: Push(": ") // @poff=547
0x2bc: Pop(1); Push(Stack[-33] + Stack[-1]);
0x2bd: Pop(1); Push(Stack[-1] + Stack[-38]);
0x2be: Stack[-36] = Stack[-36] + Stack[-1]; Pop(1);
0x2bf: Push("default") // @poff=47
0x2c0: Push((int) 218)
0x2c1: @ GetTextHeightInWidth(Stack[-33], Stack[-2], Stack[-1], Stack[-37])
0x2c2: Pop(2)
0x2c3: Push((int) 266)
0x2c4: Stack[-32] = Stack[-32] + Stack[-1]; Pop(1);
0x2c5: Push("HasDurability") // @poff=325
0x2c6: @ HasInvItemProperty(Stack[-30], Stack[-39], Stack[-1])
0x2c7: Pop(1)
0x2c8: Push("durability") // @poff=85
0x2c9: @@ HasProperty(Stack[-29], Stack[-1]); Obj=86 // @poff=107
0x2ca: Pop(1)
0x2cb: PushEmpty(bool)
0x2cc: Stack[-1] = (bool) 1
0x2cd: Push(Stack[-29])
0x2ce: IF (Stack[-1] == 1) GOTO 0x2d2; Pop(1)

0x2cf: Push(Stack[-30])
0x2d0: IF (Stack[-1] == 1) GOTO 0x2d2; Pop(1)

0x2d1: Stack[-1] = (bool) 0
0x2d2: IF (Stack[-1] == 0) GOTO 0x2e7; Pop(1)

0x2d3: Push(Stack[-28])
0x2d4: IF (Stack[-1] == 0) GOTO 0x2d9; Pop(1)

0x2d5: Push("durability") // @poff=85
0x2d6: @@ GetProperty(Stack[-28], Stack[-1]); Obj=86 // @poff=119
0x2d7: Pop(1)
0x2d8: GOTO 0x2da

0x2d9: Stack[-27] = (int) 100
0x2da: Push((int) 7)
0x2db: @ GetStringByID(Stack[-31], Stack[-1])
0x2dc: Pop(1)
0x2dd: Push(" ") // @poff=353
0x2de: Pop(1); Push(Stack[-1] + Stack[-28]);
0x2df: Push("%") // @poff=357
0x2e0: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2e1: Stack[-31] = Stack[-31] + Stack[-1]; Pop(1);
0x2e2: Push("default") // @poff=47
0x2e3: Push((int) 218)
0x2e4: @ GetTextHeightInWidth(Stack[-28], Stack[-2], Stack[-1], Stack[-32])
0x2e5: Pop(2)
0x2e6: Stack[-31] = Stack[-31] + Stack[-26]; Pop(0);
0x2e7: Push("HasUses") // @poff=361
0x2e8: @ HasInvItemProperty(Stack[-25], Stack[-39], Stack[-1])
0x2e9: Pop(1)
0x2ea: Push("uses") // @poff=377
0x2eb: @@ HasProperty(Stack[-24], Stack[-1]); Obj=86 // @poff=107
0x2ec: Pop(1)
0x2ed: PushEmpty(bool)
0x2ee: Stack[-1] = (bool) 1
0x2ef: Push(Stack[-24])
0x2f0: IF (Stack[-1] == 1) GOTO 0x2f4; Pop(1)

0x2f1: Push(Stack[-25])
0x2f2: IF (Stack[-1] == 1) GOTO 0x2f4; Pop(1)

0x2f3: Stack[-1] = (bool) 0
0x2f4: IF (Stack[-1] == 0) GOTO 0x307; Pop(1)

0x2f5: Push(Stack[-23])
0x2f6: IF (Stack[-1] == 0) GOTO 0x2fb; Pop(1)

0x2f7: Push("uses") // @poff=377
0x2f8: @@ GetProperty(Stack[-23], Stack[-1]); Obj=86 // @poff=119
0x2f9: Pop(1)
0x2fa: GOTO 0x2fc

0x2fb: Stack[-22] = (int) 1
0x2fc: Push((int) 1006)
0x2fd: @ GetStringByID(Stack[-26], Stack[-1])
0x2fe: Pop(1)
0x2ff: Push(" ") // @poff=353
0x300: Pop(1); Push(Stack[-1] + Stack[-23]);
0x301: Stack[-26] = Stack[-26] + Stack[-1]; Pop(1);
0x302: Push("default") // @poff=47
0x303: Push((int) 218)
0x304: @ GetTextHeightInWidth(Stack[-23], Stack[-2], Stack[-1], Stack[-27])
0x305: Pop(2)
0x306: Stack[-31] = Stack[-31] + Stack[-21]; Pop(0);
0x307: Stack[-19] = (bool) 0
0x308: PushEmpty(string, object)
0x309: Stack[-87] = Stack[-1]
0x30a: Call2 0x7b

0x30b: Pop(1)
0x30c: Push("grass_combination") // @poff=387
0x30d: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x30e: IF (Stack[-1] == 0) GOTO 0x339; Pop(1)

0x30f: Stack[-19] = (bool) 1
0x310: Push("im_inc") // @poff=423
0x311: @@ GetProperty(Stack[-19], Stack[-1]); Obj=86 // @poff=119
0x312: Pop(1)
0x313: Push("hl_inc") // @poff=437
0x314: @@ GetProperty(Stack[-18], Stack[-1]); Obj=86 // @poff=119
0x315: Pop(1)
0x316: Push((int) 8)
0x317: @ GetStringByID(Stack[-16], Stack[-1])
0x318: Pop(1)
0x319: Push((int) 9)
0x31a: @ GetStringByID(Stack[-14], Stack[-1])
0x31b: Pop(1)
0x31c: Push((int) 100)
0x31d: Stack[-13] = Stack[-19] * Stack[-1]; Pop(1);
0x31e: Push(" ") // @poff=353
0x31f: Pop(1); Push(Stack[-16] + Stack[-1]);
0x320: Pop(1); Push(Stack[-1] + Stack[-13]);
0x321: Push("%
") // @poff=451
0x322: Stack[-22] = Stack[-2] + Stack[-1]; Pop(2);
0x323: Push((int) 100)
0x324: Stack[-13] = Stack[-18] * Stack[-1]; Pop(1);
0x325: Push(" ") // @poff=353
0x326: Pop(1); Push(Stack[-14] + Stack[-1]);
0x327: Pop(1); Push(Stack[-1] + Stack[-13]);
0x328: Push("%
") // @poff=451
0x329: Pop(2); Push(Stack[-2] + Stack[-1]);
0x32a: Stack[-21] = Stack[-21] + Stack[-1]; Pop(1);
0x32b: Push((int) 100)
0x32c: Stack[-13] = Stack[-17] * Stack[-1]; Pop(1);
0x32d: Push(" ") // @poff=353
0x32e: Pop(1); Push(Stack[-15] + Stack[-1]);
0x32f: Pop(1); Push(Stack[-1] + Stack[-13]);
0x330: Push("%
") // @poff=451
0x331: Pop(2); Push(Stack[-2] + Stack[-1]);
0x332: Stack[-21] = Stack[-21] + Stack[-1]; Pop(1);
0x333: Push("default") // @poff=47
0x334: Push((int) 218)
0x335: @ GetTextHeightInWidth(Stack[-13], Stack[-2], Stack[-1], Stack[-22])
0x336: Pop(2)
0x337: Stack[-31] = Stack[-31] + Stack[-11]; Pop(0);
0x338: GOTO 0x361

0x339: PushEmpty(string, object)
0x33a: Stack[-87] = Stack[-1]
0x33b: Call2 0x7b

0x33c: Pop(1)
0x33d: Push("organ_combination") // @poff=457
0x33e: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x33f: IF (Stack[-1] == 0) GOTO 0x361; Pop(1)

0x340: Stack[-19] = (bool) 1
0x341: Push("DiseaseRate") // @poff=493
0x342: @@ GetProperty(Stack[-11], Stack[-1]); Obj=86 // @poff=119
0x343: Pop(1)
0x344: Push("HealthIncrease") // @poff=517
0x345: @@ GetProperty(Stack[-10], Stack[-1]); Obj=86 // @poff=119
0x346: Pop(1)
0x347: Push((int) 11)
0x348: @ GetStringByID(Stack[-9], Stack[-1])
0x349: Pop(1)
0x34a: Push((int) 13)
0x34b: @ GetStringByID(Stack[-8], Stack[-1])
0x34c: Pop(1)
0x34d: Push((int) 100)
0x34e: Stack[-7] = Stack[-11] * Stack[-1]; Pop(1);
0x34f: Push(" ") // @poff=353
0x350: Pop(1); Push(Stack[-9] + Stack[-1]);
0x351: Pop(1); Push(Stack[-1] + Stack[-7]);
0x352: Push("%
") // @poff=451
0x353: Stack[-22] = Stack[-2] + Stack[-1]; Pop(2);
0x354: Push((int) 100)
0x355: Stack[-7] = Stack[-10] * Stack[-1]; Pop(1);
0x356: Push(" ") // @poff=353
0x357: Pop(1); Push(Stack[-8] + Stack[-1]);
0x358: Pop(1); Push(Stack[-1] + Stack[-7]);
0x359: Push("%
") // @poff=451
0x35a: Pop(2); Push(Stack[-2] + Stack[-1]);
0x35b: Stack[-21] = Stack[-21] + Stack[-1]; Pop(1);
0x35c: Push("default") // @poff=47
0x35d: Push((int) 218)
0x35e: @ GetTextHeightInWidth(Stack[-7], Stack[-2], Stack[-1], Stack[-22])
0x35f: Pop(2)
0x360: Stack[-31] = Stack[-31] + Stack[-5]; Pop(0);
0x361: @ GetScreenSize(Stack[-4], Stack[-3])
0x362: Pop(0)
0x363: Pop(0); Push(Stack[-4] - Stack[-87]);
0x364: Push((int) 250)
0x365: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x366: IF (Stack[-1] == 0) GOTO 0x369; Pop(1)

0x367: Stack[-87] = Stack[-2]
0x368: GOTO 0x36b

0x369: Push((int) 250)
0x36a: Stack[-3] = Stack[-88] - Stack[-1]; Pop(1);
0x36b: Pop(0); Push((bool) Stack[-86] > Stack[-31])
0x36c: IF (Stack[-1] == 0) GOTO 0x36f; Pop(1)

0x36d: Stack[-1] = Stack[-86] - Stack[-31]; Pop(0);
0x36e: GOTO 0x376

0x36f: Stack[-86] = Stack[-1]
0x370: Pop(0); Push(Stack[-1] + Stack[-31]);
0x371: Push((int) 600)
0x372: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x373: IF (Stack[-1] == 0) GOTO 0x376; Pop(1)

0x374: Push((int) 600)
0x375: Stack[-2] = Stack[-1] - Stack[-32]; Pop(1);
0x376: @ ScreenToClient(Stack[-2], Stack[-1])
0x377: Pop(0)
0x378: PushEmpty(int, int, int, int, float)
0x379: Stack[-7] = Stack[-5]
0x37a: Stack[-6] = Stack[-4]
0x37b: Stack[-3] = (int) 250
0x37c: Stack[-36] = Stack[-2]
0x37d: Stack[-88] = Stack[-1]
0x37e: Call2 0x10e

0x37f: Pop(5)
0x380: PushEmpty(int, int, object, float)
0x381: Push((int) 16)
0x382: Stack[-5] = Stack[-7] + Stack[-1]; Pop(1);
0x383: Push((int) 16)
0x384: Stack[-4] = Stack[-6] + Stack[-1]; Pop(1);
0x385: Stack[-89] = Stack[-2]
0x386: Stack[-87] = Stack[-1]
0x387: Call2 0x129

0x388: Pop(4)
0x389: Push((int) 250)
0x38a: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x38b: Push("default") // @poff=47
0x38c: Push((int) 16)
0x38d: Pop(1); Push(Stack[-4] + Stack[-1]);
0x38e: Push((int) 218)
0x38f: Push((float)0.6470588445663452)
0x390: Push((float)0.6470588445663452)
0x391: Push((float)0.6470588445663452)
0x392: @ PrintInWidth(Stack[-37], Stack[-6], Stack[-5], Stack[-7], Stack[-4], Stack[-41], Stack[-3], Stack[-2], Stack[-1], Stack[-89])
0x393: Pop(6)
0x394: Stack[-1] = Stack[-1] + Stack[-31]; Pop(0);
0x395: PushEmpty(bool)
0x396: Stack[-1] = (bool) 1
0x397: Push(Stack[-29])
0x398: IF (Stack[-1] == 1) GOTO 0x39c; Pop(1)

0x399: Push(Stack[-30])
0x39a: IF (Stack[-1] == 1) GOTO 0x39c; Pop(1)

0x39b: Stack[-1] = (bool) 0
0x39c: IF (Stack[-1] == 0) GOTO 0x3a7; Pop(1)

0x39d: Push("default") // @poff=47
0x39e: Push((int) 16)
0x39f: Pop(1); Push(Stack[-4] + Stack[-1]);
0x3a0: Push((int) 218)
0x3a1: Push((float)0.6470588445663452)
0x3a2: Push((float)0.6470588445663452)
0x3a3: Push((float)0.6470588445663452)
0x3a4: @ PrintInWidth(Stack[-37], Stack[-6], Stack[-5], Stack[-7], Stack[-4], Stack[-36], Stack[-3], Stack[-2], Stack[-1], Stack[-89])
0x3a5: Pop(6)
0x3a6: Stack[-1] = Stack[-1] + Stack[-31]; Pop(0);
0x3a7: PushEmpty(bool)
0x3a8: Stack[-1] = (bool) 1
0x3a9: Push(Stack[-24])
0x3aa: IF (Stack[-1] == 1) GOTO 0x3ae; Pop(1)

0x3ab: Push(Stack[-25])
0x3ac: IF (Stack[-1] == 1) GOTO 0x3ae; Pop(1)

0x3ad: Stack[-1] = (bool) 0
0x3ae: IF (Stack[-1] == 0) GOTO 0x3b9; Pop(1)

0x3af: Push("default") // @poff=47
0x3b0: Push((int) 16)
0x3b1: Pop(1); Push(Stack[-4] + Stack[-1]);
0x3b2: Push((int) 218)
0x3b3: Push((float)0.6470588445663452)
0x3b4: Push((float)0.6470588445663452)
0x3b5: Push((float)0.6470588445663452)
0x3b6: @ PrintInWidth(Stack[-37], Stack[-6], Stack[-5], Stack[-7], Stack[-4], Stack[-31], Stack[-3], Stack[-2], Stack[-1], Stack[-89])
0x3b7: Pop(6)
0x3b8: Stack[-1] = Stack[-1] + Stack[-31]; Pop(0);
0x3b9: Push(Stack[-19])
0x3ba: IF (Stack[-1] == 0) GOTO 0x3c5; Pop(1)

0x3bb: Push("default") // @poff=47
0x3bc: Push((int) 16)
0x3bd: Pop(1); Push(Stack[-4] + Stack[-1]);
0x3be: Push((int) 218)
0x3bf: Push((float)0.6470588445663452)
0x3c0: Push((float)0.6470588445663452)
0x3c1: Push((float)0.6470588445663452)
0x3c2: @ PrintInWidth(Stack[-37], Stack[-6], Stack[-5], Stack[-7], Stack[-4], Stack[-26], Stack[-3], Stack[-2], Stack[-1], Stack[-89])
0x3c3: Pop(6)
0x3c4: Stack[-1] = Stack[-1] + Stack[-31]; Pop(0);
0x3c5: Return(); Pop(82)

0x3c6: Stack[-41] = 0
0x3c7: PushEmpty(int, object, string, string, int, int, float, int, float, float, int, int, int, int, int, int, int, int, object, string, string, int, int, float, int, float, float, int, int, int, int, int, int, int)
0x3c8: Pop(0); Push((bool) Stack[-36] == 0)
0x3c9: IF (Stack[-1] == 0) GOTO 0x3cb; Pop(1)

0x3ca: Return(); Pop(34)

0x3cb: Stack[-35] = (int) 1
0x3cc: @@ size(Stack[-17]); Obj=36 // @poff=553
0x3cd: Pop(0)
0x3ce: Pop(0); Push((bool) Stack[-17] == 0)
0x3cf: IF (Stack[-1] == 0) GOTO 0x3d1; Pop(1)

0x3d0: Return(); Pop(34)

0x3d1: Push(Stack[-17])
0x3d2: IF (Stack[-1] == 0) GOTO 0x410; Pop(1)

0x3d3: Stack[-12] = (int) 0
0x3d4: Stack[-11] = (int) 0
0x3d5: Stack[-10] = (int) 0
0x3d6: Pop(0); Push((bool) Stack[-10] < Stack[-17])
0x3d7: IF (Stack[-1] == 0) GOTO 0x3e3; Pop(1)

0x3d8: @@ get(Stack[-16], Stack[-10]); Obj=36 // @poff=558
0x3d9: Pop(0)
0x3da: @@ GetTime(Stack[-9]); Obj=16 // @poff=562
0x3db: Pop(0)
0x3dc: Pop(0); Push((bool) Stack[-9] > Stack[-11])
0x3dd: IF (Stack[-1] == 0) GOTO 0x3e0; Pop(1)

0x3de: Stack[-9] = Stack[-11]
0x3df: Stack[-10] = Stack[-12]
0x3e0: Push((int) 1)
0x3e1: Stack[-11] = Stack[-11] + Stack[-1]; Pop(1);
0x3e2: GOTO 0x3d6

0x3e3: @@ get(Stack[-16], Stack[-12]); Obj=36 // @poff=558
0x3e4: Pop(0)
0x3e5: @@ GetTextID(Stack[-13]); Obj=16 // @poff=570
0x3e6: Pop(0)
0x3e7: @ GetStringByID(Stack[-14], Stack[-13])
0x3e8: Pop(0)
0x3e9: @@ GetTime(Stack[-8]); Obj=16 // @poff=562
0x3ea: Pop(0)
0x3eb: PushEmpty(int)
0x3ec: Stack[-9] = Stack[-1]
0x3ed: Stack[-1] = Stack[-8]
0x3ee: Pop(1)
0x3ef: Push((int) 60)
0x3f0: Pop(0); Push(Stack[-9] - Stack[-8]);
0x3f1: Stack[-8] = Stack[-2] * Stack[-1]; Pop(2);
0x3f2: Push((int) 10)
0x3f3: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x3f4: IF (Stack[-1] == 0) GOTO 0x3fe; Pop(1)

0x3f5: Push((int) 24)
0x3f6: Pop(1); Push(Stack[-8] % Stack[-1]);
0x3f7: Push(":0") // @poff=580
0x3f8: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3f9: Pop(1); Push(Stack[-1] + Stack[-7]);
0x3fa: Push(" ") // @poff=353
0x3fb: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3fc: Stack[-16] = Stack[-16] + Stack[-1]; Pop(1);
0x3fd: GOTO 0x406

0x3fe: Push((int) 24)
0x3ff: Pop(1); Push(Stack[-8] % Stack[-1]);
0x400: Push(":") // @poff=586
0x401: Pop(2); Push(Stack[-2] + Stack[-1]);
0x402: Pop(1); Push(Stack[-1] + Stack[-7]);
0x403: Push(" ") // @poff=353
0x404: Pop(2); Push(Stack[-2] + Stack[-1]);
0x405: Stack[-16] = Stack[-16] + Stack[-1]; Pop(1);
0x406: Stack[-15] = Stack[-15] + Stack[-14]; Pop(0);
0x407: @@ remove(Stack[-12]); Obj=36 // @poff=590
0x408: Pop(0)
0x409: Push((int) -1)
0x40a: Stack[-18] = Stack[-18] + Stack[-1]; Pop(1);
0x40b: Push(Stack[-17])
0x40c: IF (Stack[-1] == 0) GOTO 0x40f; Pop(1)

0x40d: Push("

") // @poff=597
0x40e: Stack[-16] = Stack[-16] + Stack[-1]; Pop(1);
0x40f: GOTO 0x3d1

0x410: Push("default") // @poff=47
0x411: Push((int) 218)
0x412: @ GetTextHeightInWidth(Stack[-7], Stack[-2], Stack[-1], Stack[-17])
0x413: Pop(2)
0x414: Push((int) 32)
0x415: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x416: @ GetScreenSize(Stack[-4], Stack[-3])
0x417: Pop(0)
0x418: Pop(0); Push(Stack[-4] - Stack[-38]);
0x419: Push((int) 250)
0x41a: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x41b: IF (Stack[-1] == 0) GOTO 0x41e; Pop(1)

0x41c: Stack[-38] = Stack[-2]
0x41d: GOTO 0x420

0x41e: Push((int) 250)
0x41f: Stack[-3] = Stack[-39] - Stack[-1]; Pop(1);
0x420: Pop(0); Push((bool) Stack[-37] > Stack[-5])
0x421: IF (Stack[-1] == 0) GOTO 0x424; Pop(1)

0x422: Stack[-1] = Stack[-37] - Stack[-5]; Pop(0);
0x423: GOTO 0x42b

0x424: Stack[-37] = Stack[-1]
0x425: Pop(0); Push(Stack[-1] + Stack[-5]);
0x426: Push((int) 600)
0x427: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x428: IF (Stack[-1] == 0) GOTO 0x42b; Pop(1)

0x429: Push((int) 600)
0x42a: Stack[-2] = Stack[-1] - Stack[-6]; Pop(1);
0x42b: @ ScreenToClient(Stack[-2], Stack[-1])
0x42c: Pop(0)
0x42d: PushEmpty(int, int, int, int, float)
0x42e: Stack[-7] = Stack[-5]
0x42f: Stack[-6] = Stack[-4]
0x430: Stack[-3] = (int) 250
0x431: Stack[-10] = Stack[-2]
0x432: Stack[-40] = Stack[-1]
0x433: Call2 0x10e

0x434: Pop(5)
0x435: Push("default") // @poff=47
0x436: Push((int) 16)
0x437: Pop(1); Push(Stack[-4] + Stack[-1]);
0x438: Push((int) 16)
0x439: Pop(1); Push(Stack[-4] + Stack[-1]);
0x43a: Push((int) 218)
0x43b: Push((float)0.6470588445663452)
0x43c: Push((float)0.6470588445663452)
0x43d: Push((float)0.6470588445663452)
0x43e: @ PrintInWidth(Stack[-12], Stack[-7], Stack[-6], Stack[-5], Stack[-4], Stack[-22], Stack[-3], Stack[-2], Stack[-1], Stack[-42])
0x43f: Pop(7)
0x440: Return(); Pop(34)

0x441: Stack[-16] = 0
0x442: PushEmpty(int, int, int, int, int, int, int, int, int, int)
0x443: Stack[-11] = (int) 1
0x444: Push("default") // @poff=47
0x445: Push((int) 218)
0x446: @ GetTextHeightInWidth(Stack[-7], Stack[-2], Stack[-1], Stack[-15])
0x447: Pop(2)
0x448: Push((int) 32)
0x449: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x44a: @ GetScreenSize(Stack[-4], Stack[-3])
0x44b: Pop(0)
0x44c: Pop(0); Push(Stack[-4] - Stack[-15]);
0x44d: Push((int) 250)
0x44e: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x44f: IF (Stack[-1] == 0) GOTO 0x452; Pop(1)

0x450: Stack[-15] = Stack[-2]
0x451: GOTO 0x454

0x452: Push((int) 250)
0x453: Stack[-3] = Stack[-16] - Stack[-1]; Pop(1);
0x454: Pop(0); Push((bool) Stack[-14] > Stack[-5])
0x455: IF (Stack[-1] == 0) GOTO 0x458; Pop(1)

0x456: Stack[-1] = Stack[-14] - Stack[-5]; Pop(0);
0x457: GOTO 0x45f

0x458: Stack[-14] = Stack[-1]
0x459: Pop(0); Push(Stack[-1] + Stack[-5]);
0x45a: Push((int) 600)
0x45b: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x45c: IF (Stack[-1] == 0) GOTO 0x45f; Pop(1)

0x45d: Push((int) 600)
0x45e: Stack[-2] = Stack[-1] - Stack[-6]; Pop(1);
0x45f: @ ScreenToClient(Stack[-2], Stack[-1])
0x460: Pop(0)
0x461: PushEmpty(int, int, int, int, float)
0x462: Stack[-7] = Stack[-5]
0x463: Stack[-6] = Stack[-4]
0x464: Stack[-3] = (int) 250
0x465: Stack[-10] = Stack[-2]
0x466: Stack[-16] = Stack[-1]
0x467: Call2 0x10e

0x468: Pop(5)
0x469: Push("default") // @poff=47
0x46a: Push((int) 16)
0x46b: Pop(1); Push(Stack[-4] + Stack[-1]);
0x46c: Push((int) 16)
0x46d: Pop(1); Push(Stack[-4] + Stack[-1]);
0x46e: Push((int) 218)
0x46f: Push((float)0.6470588445663452)
0x470: Push((float)0.6470588445663452)
0x471: Push((float)0.6470588445663452)
0x472: @ PrintInWidth(Stack[-12], Stack[-7], Stack[-6], Stack[-5], Stack[-4], Stack[-20], Stack[-3], Stack[-2], Stack[-1], Stack[-18])
0x473: Pop(7)
0x474: Return(); Pop(10)

