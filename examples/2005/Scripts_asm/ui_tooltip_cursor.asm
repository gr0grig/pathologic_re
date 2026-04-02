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
0xe: @@@ GetTooltipType(Stack[-3]T); Obj=1 // @poff=0
0xf: Pop(0)
0x10: @@@ GetTooltipText(Stack[-2]T); Obj=1 // @poff=15
0x11: Pop(0)
0x12: @@@ GetTooltipObject(Stack[-0]T); Obj=1 // @poff=30
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

0x21: @@@ GetTooltipType(Stack[-3]); Obj=1 // @poff=0
0x22: Pop(0)
0x23: @@@ GetTooltipText(Stack[-2]); Obj=1 // @poff=15
0x24: Pop(0)
0x25: @@@ GetTooltipObject(Stack[-1]); Obj=1 // @poff=30
0x26: Pop(0)
0x27: PushEmpty(bool)
0x28: Stack[-1] = (bool) 1
0x29: PushEmpty(bool)
0x2a: Stack[-1] = (bool) 1
0x2b: PushEmpty(bool, object, object)
0x2c: Stack[-6] = Stack[-2]
0x2d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2e: Call2 0x4c8

0x2f: Pop(2)
0x30: Pop(1); Push((bool) Stack[-1] == 0)
0x31: IF (Stack[-1] == 1) GOTO 0x35; Pop(1)

0x32: Pop(0); Push((bool) Stack[-5] != Stack[3 + Tasks[-1].StackPointer])
0x33: IF (Stack[-1] == 1) GOTO 0x35; Pop(1)

0x34: Stack[-1] = (bool) 0
0x35: IF (Stack[-1] == 1) GOTO 0x39; Pop(1)

0x36: Pop(0); Push((bool) Stack[-3] != Stack[2 + Tasks[-1].StackPointer])
0x37: IF (Stack[-1] == 1) GOTO 0x39; Pop(1)

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

0x51: Push((float)0.6499999761581421)
0x52: Pop(1); Push((bool) Stack[4 + Tasks[-1].StackPointer] < Stack[-1])
0x53: IF (Stack[-1] == 0) GOTO 0x59; Pop(1)

0x54: Push((float)0.5)
0x55: Pop(1); Push(Stack[4 + Tasks[-1].StackPointer] - Stack[-1]);
0x56: Push((float)0.15000000596046448)
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
0x62: Stack[-8] = Stack[-3]
0x63: Stack[-7] = Stack[-2]
0x64: Stack[-9] = Stack[-1]
0x65: Call2 0x125

0x66: Pop(6)
0x67: Push("default") // @poff=47
0x68: Push((int) 0)
0x69: Push((int) 0)
0x6a: @ Blit(Stack[-3], Stack[-2], Stack[-1])
0x6b: Pop(3)
0x6c: Return(); Pop(6)

0x6d: PushEmpty(int, int)
0x6e: @@ GetItemID(Stack[-1]); Obj=3 // @poff=63
0x6f: Pop(0)
0x70: Stack[-1] = Stack[-4]
0x71: Return(); Pop(2)

0x72: PushEmpty(int, int, int, string, bool, bool, int, bool, int, int, int, int, string, bool, bool, int, bool, int)
0x73: Push((int) 0)
0x74: Pop(1); Push((bool) Stack[-20] == Stack[-1])
0x75: IF (Stack[-1] == 0) GOTO 0xa6; Pop(1)

0x76: PushEmpty(int)
0x77: Call2 0xcb

0x78: Stack[-1] = Stack[-10]
0x79: Pop(1)
0x7a: Stack[-8] = (int) 0
0x7b: Stack[-7] = (int) 1
0x7c: Pop(0); Push((bool) Stack[-7] <= Stack[-9])
0x7d: IF (Stack[-1] == 0) GOTO 0x95; Pop(1)

0x7e: Stack[-6] = "Price" // @poff=73
0x7f: Push((int) 1)
0x80: Pop(1); Push((bool) Stack[-8] != Stack[-1])
0x81: IF (Stack[-1] == 0) GOTO 0x83; Pop(1)

0x82: Stack[-6] = Stack[-6] + Stack[-7]; Pop(0);
0x83: PushEmpty(int, object)
0x84: Stack[-22] = Stack[-1]
0x85: Call2 0x6d

0x86: Pop(1)
0x87: @ HasInvItemProperty(Stack[-6], Stack[-1], Stack[-7])
0x88: Pop(1)
0x89: Pop(0); Push((bool) Stack[-5] == 0)
0x8a: IF (Stack[-1] == 0) GOTO 0x8c; Pop(1)

0x8b: GOTO 0x92

0x8c: PushEmpty(int, object)
0x8d: Stack[-22] = Stack[-1]
0x8e: Call2 0x6d

0x8f: Pop(1)
0x90: @ GetInvItemProperty(Stack[-9], Stack[-1], Stack[-7])
0x91: Pop(1)
0x92: Push((int) 1)
0x93: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x94: GOTO 0x7c

0x95: Push("durability") // @poff=85
0x96: @@ HasProperty(Stack[-5], Stack[-1]); Obj=21 // @poff=107
0x97: Pop(1)
0x98: Push(Stack[-4])
0x99: IF (Stack[-1] == 0) GOTO 0xa4; Pop(1)

0x9a: Push("durability") // @poff=85
0x9b: @@ GetProperty(Stack[-4], Stack[-1]); Obj=21 // @poff=119
0x9c: Pop(1)
0x9d: Push((float)0.5)
0x9e: Push((float)1.0)
0x9f: Push((float)100.0)
0xa0: Pop(1); Push(Stack[-6] / Stack[-1]);
0xa1: Pop(2); Push(Stack[-2] + Stack[-1]);
0xa2: Pop(2); Push(Stack[-2] * Stack[-1]);
0xa3: Stack[-9] = Stack[-9] * Stack[-1]; Pop(1);
0xa4: Stack[-8] = Stack[-21]
0xa5: Return(); Pop(18)

0xa6: PushEmpty(int, object)
0xa7: Stack[-22] = Stack[-1]
0xa8: Call2 0x6d

0xa9: Pop(1)
0xaa: Push("BarterPrice") // @poff=131
0xab: Pop(1); Push(Stack[-1] + Stack[-21]);
0xac: @ HasInvItemProperty(Stack[-4], Stack[-2], Stack[-1])
0xad: Pop(2)
0xae: Pop(0); Push((bool) Stack[-2] == 0)
0xaf: IF (Stack[-1] == 0) GOTO 0xb2; Pop(1)

0xb0: Stack[-21] = (int) 0
0xb1: Return(); Pop(18)

0xb2: PushEmpty(int, object)
0xb3: Stack[-22] = Stack[-1]
0xb4: Call2 0x6d

0xb5: Pop(1)
0xb6: Push("BarterPrice") // @poff=131
0xb7: Pop(1); Push(Stack[-1] + Stack[-21]);
0xb8: @ GetInvItemProperty(Stack[-3], Stack[-2], Stack[-1])
0xb9: Pop(2)
0xba: Push((int) 0)
0xbb: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xbc: IF (Stack[-1] == 0) GOTO 0xbf; Pop(1)

0xbd: Stack[-1] = Stack[-21]
0xbe: Return(); Pop(18)

0xbf: Stack[-21] = -Stack[-1]; Pop(0);
0xc0: Return(); Pop(18)

0xc1: PushEmpty(int, string, int, string)
0xc2: PushEmpty(int, object)
0xc3: Stack[-7] = Stack[-1]
0xc4: Call2 0x6d

0xc5: Stack[-2] = Stack[-4]
0xc6: Pop(2)
0xc7: @ GetInvItemName(Stack[-1], Stack[-2])
0xc8: Pop(0)
0xc9: Stack[-1] = Stack[-6]
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

0xde: Push("sellf") // @poff=155
0xdf: Pop(1); Push(Stack[-1] + Stack[-3]);
0xe0: @@ HasProperty(Stack[-1], Stack[-2]); Obj=10 // @poff=107
0xe1: Pop(1)
0xe2: Push(Stack[-1])
0xe3: IF (Stack[-1] == 0) GOTO 0xe8; Pop(1)

0xe4: Push("sellf") // @poff=155
0xe5: Pop(1); Push(Stack[-1] + Stack[-3]);
0xe6: @@ GetProperty(Stack[-1], Stack[-4]); Obj=10 // @poff=119
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

0xf8: Push("buyf") // @poff=167
0xf9: Pop(1); Push(Stack[-1] + Stack[-3]);
0xfa: @@ HasProperty(Stack[-1], Stack[-2]); Obj=10 // @poff=107
0xfb: Pop(1)
0xfc: Push(Stack[-1])
0xfd: IF (Stack[-1] == 0) GOTO 0x102; Pop(1)

0xfe: Push("buyf") // @poff=167
0xff: Pop(1); Push(Stack[-1] + Stack[-3]);
0x100: @@ GetProperty(Stack[-1], Stack[-4]); Obj=10 // @poff=119
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
0x10b: Push("barter") // @poff=177
0x10c: @@ HasProperty(Stack[-1], Stack[-3]); Obj=4 // @poff=107
0x10d: Pop(1)
0x10e: Pop(0); Push((bool) Stack[-2] == 0)
0x10f: IF (Stack[-1] == 0) GOTO 0x112; Pop(1)

0x110: Stack[-7] = (int) 0
0x111: Return(); Pop(6)

0x112: Push("barter") // @poff=177
0x113: @@ GetProperty(Stack[-1], Stack[-2]); Obj=4 // @poff=119
0x114: Pop(1)
0x115: Stack[-1] = Stack[-7]
0x116: Return(); Pop(6)

0x117: Stack[-3] = 0
0x118: PushEmpty(int, string, int, string)
0x119: Push(Stack[-5])
0x11a: IF (Stack[-1] == 0) GOTO 0x124; Pop(1)

0x11b: PushEmpty(int, object)
0x11c: Stack[-7] = Stack[-1]
0x11d: Call2 0x6d

0x11e: Stack[-2] = Stack[-4]
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
0x12a: Stack[-8] = Stack[-5]
0x12b: Stack[-7] = Stack[-4]
0x12c: Stack[-9] = Stack[-3]
0x12d: Stack[-10] = Stack[-2]
0x12e: Stack[-6] = Stack[-1]
0x12f: Call2 0x1a8

0x130: Pop(5)
0x131: GOTO 0x160

0x132: Push((int) 2)
0x133: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x134: IF (Stack[-1] == 0) GOTO 0x13d; Pop(1)

0x135: PushEmpty(int, int, object, float)
0x136: Stack[-7] = Stack[-4]
0x137: Stack[-6] = Stack[-3]
0x138: Stack[-8] = Stack[-2]
0x139: Stack[-5] = Stack[-1]
0x13a: Call2 0x41a

0x13b: Pop(4)
0x13c: GOTO 0x160

0x13d: Push((int) 3)
0x13e: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x13f: IF (Stack[-1] == 0) GOTO 0x149; Pop(1)

0x140: PushEmpty(int, int, object, bool, float)
0x141: Stack[-8] = Stack[-5]
0x142: Stack[-7] = Stack[-4]
0x143: Stack[-9] = Stack[-3]
0x144: Stack[-2] = (bool) 1
0x145: Stack[-6] = Stack[-1]
0x146: Call2 0x2cb

0x147: Pop(5)
0x148: GOTO 0x160

0x149: Push((int) 4)
0x14a: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x14b: IF (Stack[-1] == 0) GOTO 0x155; Pop(1)

0x14c: PushEmpty(int, int, object, bool, float)
0x14d: Stack[-8] = Stack[-5]
0x14e: Stack[-7] = Stack[-4]
0x14f: Stack[-9] = Stack[-3]
0x150: Stack[-2] = (bool) 0
0x151: Stack[-6] = Stack[-1]
0x152: Call2 0x2cb

0x153: Pop(5)
0x154: GOTO 0x160

0x155: Push((int) 5)
0x156: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x157: IF (Stack[-1] == 0) GOTO 0x160; Pop(1)

0x158: PushEmpty(int, int, string, object, float)
0x159: Stack[-8] = Stack[-5]
0x15a: Stack[-7] = Stack[-4]
0x15b: Stack[-10] = Stack[-3]
0x15c: Stack[-9] = Stack[-2]
0x15d: Stack[-6] = Stack[-1]
0x15e: Call2 0x495

0x15f: Pop(5)
0x160: Return(); Pop(0)

0x161: PushEmpty()
0x162: Push("bg") // @poff=191
0x163: @ BlitClipped(Stack[-1], Stack[-6], Stack[-5], Stack[-6], Stack[-5], Stack[-4], Stack[-3], Stack[-2])
0x164: Pop(1)
0x165: Push("border") // @poff=197
0x166: Push((int) 1)
0x167: @ StretchBlit(Stack[-2], Stack[-7], Stack[-6], Stack[-5], Stack[-1], Stack[-3])
0x168: Pop(2)
0x169: Push("border") // @poff=197
0x16a: Pop(0); Push(Stack[-5] + Stack[-3]);
0x16b: Push((int) 1)
0x16c: Pop(2); Push(Stack[-2] - Stack[-1]);
0x16d: Push((int) 1)
0x16e: @ StretchBlit(Stack[-3], Stack[-8], Stack[-2], Stack[-6], Stack[-1], Stack[-4])
0x16f: Pop(3)
0x170: Push("border") // @poff=197
0x171: Push((int) 1)
0x172: @ StretchBlit(Stack[-2], Stack[-7], Stack[-6], Stack[-1], Stack[-4], Stack[-3])
0x173: Pop(2)
0x174: Push("border") // @poff=197
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
0x181: Stack[-8] = Stack[-1]
0x182: Call2 0x6d

0x183: Stack[-2] = Stack[-4]
0x184: Pop(2)
0x185: @ GetInvItemSprite2(Stack[-1], Stack[-2])
0x186: Pop(0)
0x187: Push((int) 218)
0x188: Push((int) 218)
0x189: @ StretchBlit(Stack[-3], Stack[-10], Stack[-9], Stack[-2], Stack[-1], Stack[-7])
0x18a: Pop(2)
0x18b: Push("border") // @poff=197
0x18c: Push((int) 218)
0x18d: Push((int) 1)
0x18e: @ StretchBlit(Stack[-3], Stack[-11], Stack[-10], Stack[-2], Stack[-1], Stack[-8])
0x18f: Pop(3)
0x190: Push("border") // @poff=197
0x191: Push((int) 218)
0x192: Pop(1); Push(Stack[-9] + Stack[-1]);
0x193: Push((int) 1)
0x194: Pop(2); Push(Stack[-2] - Stack[-1]);
0x195: Push((int) 218)
0x196: Push((int) 1)
0x197: @ StretchBlit(Stack[-4], Stack[-12], Stack[-3], Stack[-2], Stack[-1], Stack[-9])
0x198: Pop(4)
0x199: Push("border") // @poff=197
0x19a: Push((int) 1)
0x19b: Push((int) 218)
0x19c: @ StretchBlit(Stack[-3], Stack[-11], Stack[-10], Stack[-2], Stack[-1], Stack[-8])
0x19d: Pop(3)
0x19e: Push("border") // @poff=197
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
0x1ad: Stack[-79] = Stack[-1]
0x1ae: Call2 0x6d

0x1af: Stack[-2] = Stack[-39]
0x1b0: Pop(2)
0x1b1: Push("Description") // @poff=211
0x1b2: @ HasInvItemProperty(Stack[-34], Stack[-38], Stack[-1])
0x1b3: Pop(1)
0x1b4: Push(Stack[-33])
0x1b5: IF (Stack[-1] == 0) GOTO 0x1bc; Pop(1)

0x1b6: Push("Description") // @poff=211
0x1b7: @ GetInvItemProperty(Stack[-33], Stack[-38], Stack[-1])
0x1b8: Pop(1)
0x1b9: @ GetStringByID(Stack[-36], Stack[-32])
0x1ba: Pop(0)
0x1bb: GOTO 0x1bd

0x1bc: Stack[-36] = "Error: Item doesnt have description (FIXME!)" // @poff=235
0x1bd: Push("default") // @poff=47
0x1be: Push((int) 218)
0x1bf: @ GetTextHeightInWidth(Stack[-33], Stack[-2], Stack[-1], Stack[-38])
0x1c0: Pop(2)
0x1c1: Push("default") // @poff=47
0x1c2: @ GetFontHeight(Stack[-31], Stack[-1])
0x1c3: Pop(1)
0x1c4: Stack[-31] = Stack[-31] + Stack[-30]; Pop(0);
0x1c5: Push("HasDurability") // @poff=325
0x1c6: @ HasInvItemProperty(Stack[-30], Stack[-38], Stack[-1])
0x1c7: Pop(1)
0x1c8: Push("durability") // @poff=85
0x1c9: @@ HasProperty(Stack[-29], Stack[-1]); Obj=78 // @poff=107
0x1ca: Pop(1)
0x1cb: PushEmpty(bool)
0x1cc: Stack[-1] = (bool) 1
0x1cd: Push(Stack[-29])
0x1ce: IF (Stack[-1] == 1) GOTO 0x1d2; Pop(1)

0x1cf: Push(Stack[-30])
0x1d0: IF (Stack[-1] == 1) GOTO 0x1d2; Pop(1)

0x1d1: Stack[-1] = (bool) 0
0x1d2: IF (Stack[-1] == 0) GOTO 0x1e7; Pop(1)

0x1d3: Push(Stack[-28])
0x1d4: IF (Stack[-1] == 0) GOTO 0x1d9; Pop(1)

0x1d5: Push("durability") // @poff=85
0x1d6: @@ GetProperty(Stack[-28], Stack[-1]); Obj=78 // @poff=119
0x1d7: Pop(1)
0x1d8: GOTO 0x1da

0x1d9: Stack[-27] = (int) 100
0x1da: Push((int) 7)
0x1db: @ GetStringByID(Stack[-36], Stack[-1])
0x1dc: Pop(1)
0x1dd: Push(" ") // @poff=353
0x1de: Pop(1); Push(Stack[-1] + Stack[-28]);
0x1df: Push("%") // @poff=357
0x1e0: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1e1: Stack[-36] = Stack[-36] + Stack[-1]; Pop(1);
0x1e2: Push("default") // @poff=47
0x1e3: Push((int) 218)
0x1e4: @ GetTextHeightInWidth(Stack[-28], Stack[-2], Stack[-1], Stack[-37])
0x1e5: Pop(2)
0x1e6: Stack[-31] = Stack[-31] + Stack[-26]; Pop(0);
0x1e7: Push("HasUses") // @poff=361
0x1e8: @ HasInvItemProperty(Stack[-26], Stack[-38], Stack[-1])
0x1e9: Pop(1)
0x1ea: Push("uses") // @poff=377
0x1eb: @@ HasProperty(Stack[-25], Stack[-1]); Obj=78 // @poff=107
0x1ec: Pop(1)
0x1ed: PushEmpty(bool)
0x1ee: Stack[-1] = (bool) 1
0x1ef: Push(Stack[-25])
0x1f0: IF (Stack[-1] == 1) GOTO 0x1f4; Pop(1)

0x1f1: Push(Stack[-26])
0x1f2: IF (Stack[-1] == 1) GOTO 0x1f4; Pop(1)

0x1f3: Stack[-1] = (bool) 0
0x1f4: IF (Stack[-1] == 0) GOTO 0x207; Pop(1)

0x1f5: Push(Stack[-24])
0x1f6: IF (Stack[-1] == 0) GOTO 0x1fb; Pop(1)

0x1f7: Push("uses") // @poff=377
0x1f8: @@ GetProperty(Stack[-24], Stack[-1]); Obj=78 // @poff=119
0x1f9: Pop(1)
0x1fa: GOTO 0x1fc

0x1fb: Stack[-23] = (int) 1
0x1fc: Push((int) 1006)
0x1fd: @ GetStringByID(Stack[-35], Stack[-1])
0x1fe: Pop(1)
0x1ff: Push(" ") // @poff=353
0x200: Pop(1); Push(Stack[-1] + Stack[-24]);
0x201: Stack[-35] = Stack[-35] + Stack[-1]; Pop(1);
0x202: Push("default") // @poff=47
0x203: Push((int) 218)
0x204: @ GetTextHeightInWidth(Stack[-24], Stack[-2], Stack[-1], Stack[-36])
0x205: Pop(2)
0x206: Stack[-31] = Stack[-31] + Stack[-22]; Pop(0);
0x207: Stack[-20] = (bool) 0
0x208: PushEmpty(string, object)
0x209: Stack[-79] = Stack[-1]
0x20a: Call2 0xc1

0x20b: Pop(1)
0x20c: Push("grass_combination") // @poff=387
0x20d: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x20e: IF (Stack[-1] == 0) GOTO 0x231; Pop(1)

0x20f: Stack[-20] = (bool) 1
0x210: Push("im_inc") // @poff=423
0x211: @@ GetProperty(Stack[-20], Stack[-1]); Obj=78 // @poff=119
0x212: Pop(1)
0x213: Push("hl_inc") // @poff=437
0x214: @@ GetProperty(Stack[-19], Stack[-1]); Obj=78 // @poff=119
0x215: Pop(1)
0x216: Push((int) 8)
0x217: @ GetStringByID(Stack[-18], Stack[-1])
0x218: Pop(1)
0x219: Push((int) 9)
0x21a: @ GetStringByID(Stack[-16], Stack[-1])
0x21b: Pop(1)
0x21c: Push((int) 100)
0x21d: Stack[-15] = Stack[-20] * Stack[-1]; Pop(1);
0x21e: Push(" ") // @poff=353
0x21f: Pop(1); Push(Stack[-18] + Stack[-1]);
0x220: Pop(1); Push(Stack[-1] + Stack[-15]);
0x221: Push("%
") // @poff=451
0x222: Stack[-23] = Stack[-2] + Stack[-1]; Pop(2);
0x223: Push((int) 100)
0x224: Stack[-15] = Stack[-19] * Stack[-1]; Pop(1);
0x225: Push(" ") // @poff=353
0x226: Pop(1); Push(Stack[-16] + Stack[-1]);
0x227: Pop(1); Push(Stack[-1] + Stack[-15]);
0x228: Push("%
") // @poff=451
0x229: Pop(2); Push(Stack[-2] + Stack[-1]);
0x22a: Stack[-22] = Stack[-22] + Stack[-1]; Pop(1);
0x22b: Push("default") // @poff=47
0x22c: Push((int) 218)
0x22d: @ GetTextHeightInWidth(Stack[-15], Stack[-2], Stack[-1], Stack[-23])
0x22e: Pop(2)
0x22f: Stack[-31] = Stack[-31] + Stack[-13]; Pop(0);
0x230: GOTO 0x259

0x231: PushEmpty(string, object)
0x232: Stack[-79] = Stack[-1]
0x233: Call2 0xc1

0x234: Pop(1)
0x235: Push("organ_combination") // @poff=457
0x236: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x237: IF (Stack[-1] == 0) GOTO 0x259; Pop(1)

0x238: Stack[-20] = (bool) 1
0x239: Push("DiseaseRate") // @poff=493
0x23a: @@ GetProperty(Stack[-13], Stack[-1]); Obj=78 // @poff=119
0x23b: Pop(1)
0x23c: Push("HealthIncrease") // @poff=517
0x23d: @@ GetProperty(Stack[-11], Stack[-1]); Obj=78 // @poff=119
0x23e: Pop(1)
0x23f: Push((int) 11)
0x240: @ GetStringByID(Stack[-9], Stack[-1])
0x241: Pop(1)
0x242: Push((int) 13)
0x243: @ GetStringByID(Stack[-8], Stack[-1])
0x244: Pop(1)
0x245: Push((int) 100)
0x246: Stack[-7] = Stack[-13] * Stack[-1]; Pop(1);
0x247: Push(" ") // @poff=353
0x248: Pop(1); Push(Stack[-9] + Stack[-1]);
0x249: Pop(1); Push(Stack[-1] + Stack[-7]);
0x24a: Push("%
") // @poff=451
0x24b: Stack[-23] = Stack[-2] + Stack[-1]; Pop(2);
0x24c: Push((int) 100)
0x24d: Stack[-7] = Stack[-11] * Stack[-1]; Pop(1);
0x24e: Push(" ") // @poff=353
0x24f: Pop(1); Push(Stack[-8] + Stack[-1]);
0x250: Pop(1); Push(Stack[-1] + Stack[-7]);
0x251: Push("%
") // @poff=451
0x252: Pop(2); Push(Stack[-2] + Stack[-1]);
0x253: Stack[-22] = Stack[-22] + Stack[-1]; Pop(1);
0x254: Push("default") // @poff=47
0x255: Push((int) 218)
0x256: @ GetTextHeightInWidth(Stack[-7], Stack[-2], Stack[-1], Stack[-23])
0x257: Pop(2)
0x258: Stack[-31] = Stack[-31] + Stack[-5]; Pop(0);
0x259: @ GetScreenSize(Stack[-4], Stack[-3])
0x25a: Pop(0)
0x25b: Push((int) 266)
0x25c: Stack[-32] = Stack[-32] + Stack[-1]; Pop(1);
0x25d: Pop(0); Push(Stack[-4] - Stack[-79]);
0x25e: Push((int) 250)
0x25f: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x260: IF (Stack[-1] == 0) GOTO 0x263; Pop(1)

0x261: Stack[-79] = Stack[-2]
0x262: GOTO 0x265

0x263: Push((int) 250)
0x264: Stack[-3] = Stack[-80] - Stack[-1]; Pop(1);
0x265: Pop(0); Push((bool) Stack[-78] > Stack[-31])
0x266: IF (Stack[-1] == 0) GOTO 0x269; Pop(1)

0x267: Stack[-1] = Stack[-78] - Stack[-31]; Pop(0);
0x268: GOTO 0x270

0x269: Stack[-78] = Stack[-1]
0x26a: Pop(0); Push(Stack[-1] + Stack[-31]);
0x26b: Push((int) 600)
0x26c: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x26d: IF (Stack[-1] == 0) GOTO 0x270; Pop(1)

0x26e: Push((int) 600)
0x26f: Stack[-2] = Stack[-1] - Stack[-32]; Pop(1);
0x270: @ ScreenToClient(Stack[-2], Stack[-1])
0x271: Pop(0)
0x272: PushEmpty(int, int, int, int, float)
0x273: Stack[-7] = Stack[-5]
0x274: Stack[-6] = Stack[-4]
0x275: Stack[-3] = (int) 250
0x276: Stack[-36] = Stack[-2]
0x277: Stack[-80] = Stack[-1]
0x278: Call2 0x161

0x279: Pop(5)
0x27a: PushEmpty(int, int, object, float)
0x27b: Push((int) 16)
0x27c: Stack[-5] = Stack[-7] + Stack[-1]; Pop(1);
0x27d: Push((int) 16)
0x27e: Stack[-4] = Stack[-6] + Stack[-1]; Pop(1);
0x27f: Stack[-81] = Stack[-2]
0x280: Stack[-79] = Stack[-1]
0x281: Call2 0x17c

0x282: Pop(4)
0x283: Push((int) 250)
0x284: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x285: Push("default") // @poff=47
0x286: Push((int) 16)
0x287: Pop(1); Push(Stack[-4] + Stack[-1]);
0x288: Push((int) 218)
0x289: Push((float)0.6470588445663452)
0x28a: Push((float)0.6470588445663452)
0x28b: Push((float)0.6470588445663452)
0x28c: @ PrintInWidth(Stack[-37], Stack[-6], Stack[-5], Stack[-7], Stack[-4], Stack[-42], Stack[-3], Stack[-2], Stack[-1], Stack[-81])
0x28d: Pop(6)
0x28e: Pop(0); Push(Stack[-31] + Stack[-30]);
0x28f: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x290: PushEmpty(bool)
0x291: Stack[-1] = (bool) 1
0x292: Push(Stack[-29])
0x293: IF (Stack[-1] == 1) GOTO 0x297; Pop(1)

0x294: Push(Stack[-30])
0x295: IF (Stack[-1] == 1) GOTO 0x297; Pop(1)

0x296: Stack[-1] = (bool) 0
0x297: IF (Stack[-1] == 0) GOTO 0x2a2; Pop(1)

0x298: Push("default") // @poff=47
0x299: Push((int) 16)
0x29a: Pop(1); Push(Stack[-4] + Stack[-1]);
0x29b: Push((int) 218)
0x29c: Push((float)0.6470588445663452)
0x29d: Push((float)0.6470588445663452)
0x29e: Push((float)0.6470588445663452)
0x29f: @ PrintInWidth(Stack[-37], Stack[-6], Stack[-5], Stack[-7], Stack[-4], Stack[-41], Stack[-3], Stack[-2], Stack[-1], Stack[-81])
0x2a0: Pop(6)
0x2a1: Stack[-1] = Stack[-1] + Stack[-31]; Pop(0);
0x2a2: PushEmpty(bool)
0x2a3: Stack[-1] = (bool) 1
0x2a4: Push(Stack[-25])
0x2a5: IF (Stack[-1] == 1) GOTO 0x2a9; Pop(1)

0x2a6: Push(Stack[-26])
0x2a7: IF (Stack[-1] == 1) GOTO 0x2a9; Pop(1)

0x2a8: Stack[-1] = (bool) 0
0x2a9: IF (Stack[-1] == 0) GOTO 0x2b4; Pop(1)

0x2aa: Push("default") // @poff=47
0x2ab: Push((int) 16)
0x2ac: Pop(1); Push(Stack[-4] + Stack[-1]);
0x2ad: Push((int) 218)
0x2ae: Push((float)0.6470588445663452)
0x2af: Push((float)0.6470588445663452)
0x2b0: Push((float)0.6470588445663452)
0x2b1: @ PrintInWidth(Stack[-37], Stack[-6], Stack[-5], Stack[-7], Stack[-4], Stack[-40], Stack[-3], Stack[-2], Stack[-1], Stack[-81])
0x2b2: Pop(6)
0x2b3: Stack[-1] = Stack[-1] + Stack[-31]; Pop(0);
0x2b4: Push(Stack[-20])
0x2b5: IF (Stack[-1] == 0) GOTO 0x2c0; Pop(1)

0x2b6: Push("default") // @poff=47
0x2b7: Push((int) 16)
0x2b8: Pop(1); Push(Stack[-4] + Stack[-1]);
0x2b9: Push((int) 218)
0x2ba: Push((float)0.6470588445663452)
0x2bb: Push((float)0.6470588445663452)
0x2bc: Push((float)0.6470588445663452)
0x2bd: @ PrintInWidth(Stack[-37], Stack[-6], Stack[-5], Stack[-7], Stack[-4], Stack[-27], Stack[-3], Stack[-2], Stack[-1], Stack[-81])
0x2be: Pop(6)
0x2bf: Stack[-1] = Stack[-1] + Stack[-31]; Pop(0);
0x2c0: Push("default") // @poff=47
0x2c1: Push((int) 16)
0x2c2: Pop(1); Push(Stack[-4] + Stack[-1]);
0x2c3: Push((int) 218)
0x2c4: Push((float)0.6470588445663452)
0x2c5: Push((float)0.6470588445663452)
0x2c6: Push((float)0.6470588445663452)
0x2c7: @ PrintInWidth(Stack[-37], Stack[-6], Stack[-5], Stack[-7], Stack[-4], Stack[-82], Stack[-3], Stack[-2], Stack[-1], Stack[-81])
0x2c8: Pop(6)
0x2c9: Stack[-1] = Stack[-1] + Stack[-31]; Pop(0);
0x2ca: Return(); Pop(74)

0x2cb: PushEmpty(object, float, int, int, int, float, string, bool, int, string, int, string, bool, bool, int, int, string, bool, bool, int, int, string, bool, float, float, float, string, string, string, int, int, float, float, string, string, int, int, int, int, int, int, object, float, int, int, int, float, string, bool, int, string, int, string, bool, bool, int, int, string, bool, bool, int, int, string, bool, float, float, float, string, string, string, int, int, float, float, string, string, int, int, int, int, int, int)
0x2cc: Pop(0); Push((bool) Stack[-85] == 0)
0x2cd: IF (Stack[-1] == 0) GOTO 0x2cf; Pop(1)

0x2ce: Return(); Pop(82)

0x2cf: @ GetContainer(Stack[-41])
0x2d0: Pop(0)
0x2d1: @ GetGameTime(Stack[-40])
0x2d2: Pop(0)
0x2d3: Push((int) 1)
0x2d4: Push((int) 24)
0x2d5: Pop(1); Push(Stack[-42] / Stack[-1]);
0x2d6: Stack[-41] = Stack[-2] + Stack[-1]; Pop(2);
0x2d7: PushEmpty(int, object)
0x2d8: Stack[-87] = Stack[-1]
0x2d9: Call2 0x6d

0x2da: Stack[-2] = Stack[-40]
0x2db: Pop(2)
0x2dc: PushEmpty(int, object, int)
0x2dd: Stack[-88] = Stack[-2]
0x2de: PushEmpty(int)
0x2df: Call2 0x108

0x2e0: Stack[-1] = Stack[-2]
0x2e1: Pop(1)
0x2e2: Call2 0x72

0x2e3: Stack[-3] = Stack[-40]
0x2e4: Pop(3)
0x2e5: Push(Stack[-84])
0x2e6: IF (Stack[-1] == 0) GOTO 0x2f2; Pop(1)

0x2e7: PushEmpty(float, object, int, int)
0x2e8: Stack[-45] = Stack[-3]
0x2e9: Stack[-43] = Stack[-2]
0x2ea: PushEmpty(int)
0x2eb: Call2 0x108

0x2ec: Stack[-1] = Stack[-2]
0x2ed: Pop(1)
0x2ee: Call2 0xd4

0x2ef: Stack[-4] = Stack[-40]
0x2f0: Pop(4)
0x2f1: GOTO 0x2fc

0x2f2: PushEmpty(float, object, int, int)
0x2f3: Stack[-45] = Stack[-3]
0x2f4: Stack[-43] = Stack[-2]
0x2f5: PushEmpty(int)
0x2f6: Call2 0x108

0x2f7: Stack[-1] = Stack[-2]
0x2f8: Pop(1)
0x2f9: Call2 0xee

0x2fa: Stack[-4] = Stack[-40]
0x2fb: Pop(4)
0x2fc: Stack[-37] = Stack[-37] * Stack[-36]; Pop(0);
0x2fd: Push("Description") // @poff=211
0x2fe: @ HasInvItemProperty(Stack[-35], Stack[-39], Stack[-1])
0x2ff: Pop(1)
0x300: Push(Stack[-34])
0x301: IF (Stack[-1] == 0) GOTO 0x308; Pop(1)

0x302: Push("Description") // @poff=211
0x303: @ GetInvItemProperty(Stack[-34], Stack[-39], Stack[-1])
0x304: Pop(1)
0x305: @ GetStringByID(Stack[-35], Stack[-33])
0x306: Pop(0)
0x307: GOTO 0x309

0x308: Stack[-35] = "Error: Item doesnt have description (FIXME!)" // @poff=235
0x309: Push("
") // @poff=453
0x30a: Stack[-36] = Stack[-36] + Stack[-1]; Pop(1);
0x30b: Push((int) 5)
0x30c: @ GetStringByID(Stack[-33], Stack[-1])
0x30d: Pop(1)
0x30e: Push(": ") // @poff=547
0x30f: Pop(1); Push(Stack[-33] + Stack[-1]);
0x310: Pop(1); Push(Stack[-1] + Stack[-38]);
0x311: Stack[-36] = Stack[-36] + Stack[-1]; Pop(1);
0x312: Push("default") // @poff=47
0x313: Push((int) 218)
0x314: @ GetTextHeightInWidth(Stack[-33], Stack[-2], Stack[-1], Stack[-37])
0x315: Pop(2)
0x316: Push((int) 266)
0x317: Stack[-32] = Stack[-32] + Stack[-1]; Pop(1);
0x318: Push("HasDurability") // @poff=325
0x319: @ HasInvItemProperty(Stack[-30], Stack[-39], Stack[-1])
0x31a: Pop(1)
0x31b: Push("durability") // @poff=85
0x31c: @@ HasProperty(Stack[-29], Stack[-1]); Obj=86 // @poff=107
0x31d: Pop(1)
0x31e: PushEmpty(bool)
0x31f: Stack[-1] = (bool) 1
0x320: Push(Stack[-29])
0x321: IF (Stack[-1] == 1) GOTO 0x325; Pop(1)

0x322: Push(Stack[-30])
0x323: IF (Stack[-1] == 1) GOTO 0x325; Pop(1)

0x324: Stack[-1] = (bool) 0
0x325: IF (Stack[-1] == 0) GOTO 0x33a; Pop(1)

0x326: Push(Stack[-28])
0x327: IF (Stack[-1] == 0) GOTO 0x32c; Pop(1)

0x328: Push("durability") // @poff=85
0x329: @@ GetProperty(Stack[-28], Stack[-1]); Obj=86 // @poff=119
0x32a: Pop(1)
0x32b: GOTO 0x32d

0x32c: Stack[-27] = (int) 100
0x32d: Push((int) 7)
0x32e: @ GetStringByID(Stack[-31], Stack[-1])
0x32f: Pop(1)
0x330: Push(" ") // @poff=353
0x331: Pop(1); Push(Stack[-1] + Stack[-28]);
0x332: Push("%") // @poff=357
0x333: Pop(2); Push(Stack[-2] + Stack[-1]);
0x334: Stack[-31] = Stack[-31] + Stack[-1]; Pop(1);
0x335: Push("default") // @poff=47
0x336: Push((int) 218)
0x337: @ GetTextHeightInWidth(Stack[-28], Stack[-2], Stack[-1], Stack[-32])
0x338: Pop(2)
0x339: Stack[-31] = Stack[-31] + Stack[-26]; Pop(0);
0x33a: Push("HasUses") // @poff=361
0x33b: @ HasInvItemProperty(Stack[-25], Stack[-39], Stack[-1])
0x33c: Pop(1)
0x33d: Push("uses") // @poff=377
0x33e: @@ HasProperty(Stack[-24], Stack[-1]); Obj=86 // @poff=107
0x33f: Pop(1)
0x340: PushEmpty(bool)
0x341: Stack[-1] = (bool) 1
0x342: Push(Stack[-24])
0x343: IF (Stack[-1] == 1) GOTO 0x347; Pop(1)

0x344: Push(Stack[-25])
0x345: IF (Stack[-1] == 1) GOTO 0x347; Pop(1)

0x346: Stack[-1] = (bool) 0
0x347: IF (Stack[-1] == 0) GOTO 0x35a; Pop(1)

0x348: Push(Stack[-23])
0x349: IF (Stack[-1] == 0) GOTO 0x34e; Pop(1)

0x34a: Push("uses") // @poff=377
0x34b: @@ GetProperty(Stack[-23], Stack[-1]); Obj=86 // @poff=119
0x34c: Pop(1)
0x34d: GOTO 0x34f

0x34e: Stack[-22] = (int) 1
0x34f: Push((int) 1006)
0x350: @ GetStringByID(Stack[-26], Stack[-1])
0x351: Pop(1)
0x352: Push(" ") // @poff=353
0x353: Pop(1); Push(Stack[-1] + Stack[-23]);
0x354: Stack[-26] = Stack[-26] + Stack[-1]; Pop(1);
0x355: Push("default") // @poff=47
0x356: Push((int) 218)
0x357: @ GetTextHeightInWidth(Stack[-23], Stack[-2], Stack[-1], Stack[-27])
0x358: Pop(2)
0x359: Stack[-31] = Stack[-31] + Stack[-21]; Pop(0);
0x35a: Stack[-19] = (bool) 0
0x35b: PushEmpty(string, object)
0x35c: Stack[-87] = Stack[-1]
0x35d: Call2 0xc1

0x35e: Pop(1)
0x35f: Push("grass_combination") // @poff=387
0x360: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x361: IF (Stack[-1] == 0) GOTO 0x38c; Pop(1)

0x362: Stack[-19] = (bool) 1
0x363: Push("im_inc") // @poff=423
0x364: @@ GetProperty(Stack[-19], Stack[-1]); Obj=86 // @poff=119
0x365: Pop(1)
0x366: Push("hl_inc") // @poff=437
0x367: @@ GetProperty(Stack[-18], Stack[-1]); Obj=86 // @poff=119
0x368: Pop(1)
0x369: Push((int) 8)
0x36a: @ GetStringByID(Stack[-16], Stack[-1])
0x36b: Pop(1)
0x36c: Push((int) 9)
0x36d: @ GetStringByID(Stack[-14], Stack[-1])
0x36e: Pop(1)
0x36f: Push((int) 100)
0x370: Stack[-13] = Stack[-19] * Stack[-1]; Pop(1);
0x371: Push(" ") // @poff=353
0x372: Pop(1); Push(Stack[-16] + Stack[-1]);
0x373: Pop(1); Push(Stack[-1] + Stack[-13]);
0x374: Push("%
") // @poff=451
0x375: Stack[-22] = Stack[-2] + Stack[-1]; Pop(2);
0x376: Push((int) 100)
0x377: Stack[-13] = Stack[-18] * Stack[-1]; Pop(1);
0x378: Push(" ") // @poff=353
0x379: Pop(1); Push(Stack[-14] + Stack[-1]);
0x37a: Pop(1); Push(Stack[-1] + Stack[-13]);
0x37b: Push("%
") // @poff=451
0x37c: Pop(2); Push(Stack[-2] + Stack[-1]);
0x37d: Stack[-21] = Stack[-21] + Stack[-1]; Pop(1);
0x37e: Push((int) 100)
0x37f: Stack[-13] = Stack[-17] * Stack[-1]; Pop(1);
0x380: Push(" ") // @poff=353
0x381: Pop(1); Push(Stack[-15] + Stack[-1]);
0x382: Pop(1); Push(Stack[-1] + Stack[-13]);
0x383: Push("%
") // @poff=451
0x384: Pop(2); Push(Stack[-2] + Stack[-1]);
0x385: Stack[-21] = Stack[-21] + Stack[-1]; Pop(1);
0x386: Push("default") // @poff=47
0x387: Push((int) 218)
0x388: @ GetTextHeightInWidth(Stack[-13], Stack[-2], Stack[-1], Stack[-22])
0x389: Pop(2)
0x38a: Stack[-31] = Stack[-31] + Stack[-11]; Pop(0);
0x38b: GOTO 0x3b4

0x38c: PushEmpty(string, object)
0x38d: Stack[-87] = Stack[-1]
0x38e: Call2 0xc1

0x38f: Pop(1)
0x390: Push("organ_combination") // @poff=457
0x391: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x392: IF (Stack[-1] == 0) GOTO 0x3b4; Pop(1)

0x393: Stack[-19] = (bool) 1
0x394: Push("DiseaseRate") // @poff=493
0x395: @@ GetProperty(Stack[-11], Stack[-1]); Obj=86 // @poff=119
0x396: Pop(1)
0x397: Push("HealthIncrease") // @poff=517
0x398: @@ GetProperty(Stack[-10], Stack[-1]); Obj=86 // @poff=119
0x399: Pop(1)
0x39a: Push((int) 11)
0x39b: @ GetStringByID(Stack[-9], Stack[-1])
0x39c: Pop(1)
0x39d: Push((int) 13)
0x39e: @ GetStringByID(Stack[-8], Stack[-1])
0x39f: Pop(1)
0x3a0: Push((int) 100)
0x3a1: Stack[-7] = Stack[-11] * Stack[-1]; Pop(1);
0x3a2: Push(" ") // @poff=353
0x3a3: Pop(1); Push(Stack[-9] + Stack[-1]);
0x3a4: Pop(1); Push(Stack[-1] + Stack[-7]);
0x3a5: Push("%
") // @poff=451
0x3a6: Stack[-22] = Stack[-2] + Stack[-1]; Pop(2);
0x3a7: Push((int) 100)
0x3a8: Stack[-7] = Stack[-10] * Stack[-1]; Pop(1);
0x3a9: Push(" ") // @poff=353
0x3aa: Pop(1); Push(Stack[-8] + Stack[-1]);
0x3ab: Pop(1); Push(Stack[-1] + Stack[-7]);
0x3ac: Push("%
") // @poff=451
0x3ad: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3ae: Stack[-21] = Stack[-21] + Stack[-1]; Pop(1);
0x3af: Push("default") // @poff=47
0x3b0: Push((int) 218)
0x3b1: @ GetTextHeightInWidth(Stack[-7], Stack[-2], Stack[-1], Stack[-22])
0x3b2: Pop(2)
0x3b3: Stack[-31] = Stack[-31] + Stack[-5]; Pop(0);
0x3b4: @ GetScreenSize(Stack[-4], Stack[-3])
0x3b5: Pop(0)
0x3b6: Pop(0); Push(Stack[-4] - Stack[-87]);
0x3b7: Push((int) 250)
0x3b8: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x3b9: IF (Stack[-1] == 0) GOTO 0x3bc; Pop(1)

0x3ba: Stack[-87] = Stack[-2]
0x3bb: GOTO 0x3be

0x3bc: Push((int) 250)
0x3bd: Stack[-3] = Stack[-88] - Stack[-1]; Pop(1);
0x3be: Pop(0); Push((bool) Stack[-86] > Stack[-31])
0x3bf: IF (Stack[-1] == 0) GOTO 0x3c2; Pop(1)

0x3c0: Stack[-1] = Stack[-86] - Stack[-31]; Pop(0);
0x3c1: GOTO 0x3c9

0x3c2: Stack[-86] = Stack[-1]
0x3c3: Pop(0); Push(Stack[-1] + Stack[-31]);
0x3c4: Push((int) 600)
0x3c5: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x3c6: IF (Stack[-1] == 0) GOTO 0x3c9; Pop(1)

0x3c7: Push((int) 600)
0x3c8: Stack[-2] = Stack[-1] - Stack[-32]; Pop(1);
0x3c9: @ ScreenToClient(Stack[-2], Stack[-1])
0x3ca: Pop(0)
0x3cb: PushEmpty(int, int, int, int, float)
0x3cc: Stack[-7] = Stack[-5]
0x3cd: Stack[-6] = Stack[-4]
0x3ce: Stack[-3] = (int) 250
0x3cf: Stack[-36] = Stack[-2]
0x3d0: Stack[-88] = Stack[-1]
0x3d1: Call2 0x161

0x3d2: Pop(5)
0x3d3: PushEmpty(int, int, object, float)
0x3d4: Push((int) 16)
0x3d5: Stack[-5] = Stack[-7] + Stack[-1]; Pop(1);
0x3d6: Push((int) 16)
0x3d7: Stack[-4] = Stack[-6] + Stack[-1]; Pop(1);
0x3d8: Stack[-89] = Stack[-2]
0x3d9: Stack[-87] = Stack[-1]
0x3da: Call2 0x17c

0x3db: Pop(4)
0x3dc: Push((int) 250)
0x3dd: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x3de: Push("default") // @poff=47
0x3df: Push((int) 16)
0x3e0: Pop(1); Push(Stack[-4] + Stack[-1]);
0x3e1: Push((int) 218)
0x3e2: Push((float)0.6470588445663452)
0x3e3: Push((float)0.6470588445663452)
0x3e4: Push((float)0.6470588445663452)
0x3e5: @ PrintInWidth(Stack[-37], Stack[-6], Stack[-5], Stack[-7], Stack[-4], Stack[-41], Stack[-3], Stack[-2], Stack[-1], Stack[-89])
0x3e6: Pop(6)
0x3e7: Stack[-1] = Stack[-1] + Stack[-31]; Pop(0);
0x3e8: PushEmpty(bool)
0x3e9: Stack[-1] = (bool) 1
0x3ea: Push(Stack[-29])
0x3eb: IF (Stack[-1] == 1) GOTO 0x3ef; Pop(1)

0x3ec: Push(Stack[-30])
0x3ed: IF (Stack[-1] == 1) GOTO 0x3ef; Pop(1)

0x3ee: Stack[-1] = (bool) 0
0x3ef: IF (Stack[-1] == 0) GOTO 0x3fa; Pop(1)

0x3f0: Push("default") // @poff=47
0x3f1: Push((int) 16)
0x3f2: Pop(1); Push(Stack[-4] + Stack[-1]);
0x3f3: Push((int) 218)
0x3f4: Push((float)0.6470588445663452)
0x3f5: Push((float)0.6470588445663452)
0x3f6: Push((float)0.6470588445663452)
0x3f7: @ PrintInWidth(Stack[-37], Stack[-6], Stack[-5], Stack[-7], Stack[-4], Stack[-36], Stack[-3], Stack[-2], Stack[-1], Stack[-89])
0x3f8: Pop(6)
0x3f9: Stack[-1] = Stack[-1] + Stack[-31]; Pop(0);
0x3fa: PushEmpty(bool)
0x3fb: Stack[-1] = (bool) 1
0x3fc: Push(Stack[-24])
0x3fd: IF (Stack[-1] == 1) GOTO 0x401; Pop(1)

0x3fe: Push(Stack[-25])
0x3ff: IF (Stack[-1] == 1) GOTO 0x401; Pop(1)

0x400: Stack[-1] = (bool) 0
0x401: IF (Stack[-1] == 0) GOTO 0x40c; Pop(1)

0x402: Push("default") // @poff=47
0x403: Push((int) 16)
0x404: Pop(1); Push(Stack[-4] + Stack[-1]);
0x405: Push((int) 218)
0x406: Push((float)0.6470588445663452)
0x407: Push((float)0.6470588445663452)
0x408: Push((float)0.6470588445663452)
0x409: @ PrintInWidth(Stack[-37], Stack[-6], Stack[-5], Stack[-7], Stack[-4], Stack[-31], Stack[-3], Stack[-2], Stack[-1], Stack[-89])
0x40a: Pop(6)
0x40b: Stack[-1] = Stack[-1] + Stack[-31]; Pop(0);
0x40c: Push(Stack[-19])
0x40d: IF (Stack[-1] == 0) GOTO 0x418; Pop(1)

0x40e: Push("default") // @poff=47
0x40f: Push((int) 16)
0x410: Pop(1); Push(Stack[-4] + Stack[-1]);
0x411: Push((int) 218)
0x412: Push((float)0.6470588445663452)
0x413: Push((float)0.6470588445663452)
0x414: Push((float)0.6470588445663452)
0x415: @ PrintInWidth(Stack[-37], Stack[-6], Stack[-5], Stack[-7], Stack[-4], Stack[-26], Stack[-3], Stack[-2], Stack[-1], Stack[-89])
0x416: Pop(6)
0x417: Stack[-1] = Stack[-1] + Stack[-31]; Pop(0);
0x418: Return(); Pop(82)

0x419: Stack[-41] = 0
0x41a: PushEmpty(int, object, string, string, int, int, float, int, float, float, int, int, int, int, int, int, int, int, object, string, string, int, int, float, int, float, float, int, int, int, int, int, int, int)
0x41b: Pop(0); Push((bool) Stack[-36] == 0)
0x41c: IF (Stack[-1] == 0) GOTO 0x41e; Pop(1)

0x41d: Return(); Pop(34)

0x41e: Stack[-35] = (int) 1
0x41f: @@ size(Stack[-17]); Obj=36 // @poff=553
0x420: Pop(0)
0x421: Pop(0); Push((bool) Stack[-17] == 0)
0x422: IF (Stack[-1] == 0) GOTO 0x424; Pop(1)

0x423: Return(); Pop(34)

0x424: Push(Stack[-17])
0x425: IF (Stack[-1] == 0) GOTO 0x463; Pop(1)

0x426: Stack[-12] = (int) 0
0x427: Stack[-11] = (int) 0
0x428: Stack[-10] = (int) 0
0x429: Pop(0); Push((bool) Stack[-10] < Stack[-17])
0x42a: IF (Stack[-1] == 0) GOTO 0x436; Pop(1)

0x42b: @@ get(Stack[-16], Stack[-10]); Obj=36 // @poff=558
0x42c: Pop(0)
0x42d: @@ GetTime(Stack[-9]); Obj=16 // @poff=562
0x42e: Pop(0)
0x42f: Pop(0); Push((bool) Stack[-9] > Stack[-11])
0x430: IF (Stack[-1] == 0) GOTO 0x433; Pop(1)

0x431: Stack[-9] = Stack[-11]
0x432: Stack[-10] = Stack[-12]
0x433: Push((int) 1)
0x434: Stack[-11] = Stack[-11] + Stack[-1]; Pop(1);
0x435: GOTO 0x429

0x436: @@ get(Stack[-16], Stack[-12]); Obj=36 // @poff=558
0x437: Pop(0)
0x438: @@ GetTextID(Stack[-13]); Obj=16 // @poff=570
0x439: Pop(0)
0x43a: @ GetStringByID(Stack[-14], Stack[-13])
0x43b: Pop(0)
0x43c: @@ GetTime(Stack[-8]); Obj=16 // @poff=562
0x43d: Pop(0)
0x43e: PushEmpty(int)
0x43f: Stack[-9] = Stack[-1]
0x440: Stack[-1] = Stack[-8]
0x441: Pop(1)
0x442: Push((int) 60)
0x443: Pop(0); Push(Stack[-9] - Stack[-8]);
0x444: Stack[-8] = Stack[-2] * Stack[-1]; Pop(2);
0x445: Push((int) 10)
0x446: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x447: IF (Stack[-1] == 0) GOTO 0x451; Pop(1)

0x448: Push((int) 24)
0x449: Pop(1); Push(Stack[-8] % Stack[-1]);
0x44a: Push(":0") // @poff=580
0x44b: Pop(2); Push(Stack[-2] + Stack[-1]);
0x44c: Pop(1); Push(Stack[-1] + Stack[-7]);
0x44d: Push(" ") // @poff=353
0x44e: Pop(2); Push(Stack[-2] + Stack[-1]);
0x44f: Stack[-16] = Stack[-16] + Stack[-1]; Pop(1);
0x450: GOTO 0x459

0x451: Push((int) 24)
0x452: Pop(1); Push(Stack[-8] % Stack[-1]);
0x453: Push(":") // @poff=586
0x454: Pop(2); Push(Stack[-2] + Stack[-1]);
0x455: Pop(1); Push(Stack[-1] + Stack[-7]);
0x456: Push(" ") // @poff=353
0x457: Pop(2); Push(Stack[-2] + Stack[-1]);
0x458: Stack[-16] = Stack[-16] + Stack[-1]; Pop(1);
0x459: Stack[-15] = Stack[-15] + Stack[-14]; Pop(0);
0x45a: @@ remove(Stack[-12]); Obj=36 // @poff=590
0x45b: Pop(0)
0x45c: Push((int) -1)
0x45d: Stack[-18] = Stack[-18] + Stack[-1]; Pop(1);
0x45e: Push(Stack[-17])
0x45f: IF (Stack[-1] == 0) GOTO 0x462; Pop(1)

0x460: Push("

") // @poff=597
0x461: Stack[-16] = Stack[-16] + Stack[-1]; Pop(1);
0x462: GOTO 0x424

0x463: Push("default") // @poff=47
0x464: Push((int) 218)
0x465: @ GetTextHeightInWidth(Stack[-7], Stack[-2], Stack[-1], Stack[-17])
0x466: Pop(2)
0x467: Push((int) 32)
0x468: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x469: @ GetScreenSize(Stack[-4], Stack[-3])
0x46a: Pop(0)
0x46b: Pop(0); Push(Stack[-4] - Stack[-38]);
0x46c: Push((int) 250)
0x46d: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x46e: IF (Stack[-1] == 0) GOTO 0x471; Pop(1)

0x46f: Stack[-38] = Stack[-2]
0x470: GOTO 0x473

0x471: Push((int) 250)
0x472: Stack[-3] = Stack[-39] - Stack[-1]; Pop(1);
0x473: Pop(0); Push((bool) Stack[-37] > Stack[-5])
0x474: IF (Stack[-1] == 0) GOTO 0x477; Pop(1)

0x475: Stack[-1] = Stack[-37] - Stack[-5]; Pop(0);
0x476: GOTO 0x47e

0x477: Stack[-37] = Stack[-1]
0x478: Pop(0); Push(Stack[-1] + Stack[-5]);
0x479: Push((int) 600)
0x47a: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x47b: IF (Stack[-1] == 0) GOTO 0x47e; Pop(1)

0x47c: Push((int) 600)
0x47d: Stack[-2] = Stack[-1] - Stack[-6]; Pop(1);
0x47e: @ ScreenToClient(Stack[-2], Stack[-1])
0x47f: Pop(0)
0x480: PushEmpty(int, int, int, int, float)
0x481: Stack[-7] = Stack[-5]
0x482: Stack[-6] = Stack[-4]
0x483: Stack[-3] = (int) 250
0x484: Stack[-10] = Stack[-2]
0x485: Stack[-40] = Stack[-1]
0x486: Call2 0x161

0x487: Pop(5)
0x488: Push("default") // @poff=47
0x489: Push((int) 16)
0x48a: Pop(1); Push(Stack[-4] + Stack[-1]);
0x48b: Push((int) 16)
0x48c: Pop(1); Push(Stack[-4] + Stack[-1]);
0x48d: Push((int) 218)
0x48e: Push((float)0.6470588445663452)
0x48f: Push((float)0.6470588445663452)
0x490: Push((float)0.6470588445663452)
0x491: @ PrintInWidth(Stack[-12], Stack[-7], Stack[-6], Stack[-5], Stack[-4], Stack[-22], Stack[-3], Stack[-2], Stack[-1], Stack[-42])
0x492: Pop(7)
0x493: Return(); Pop(34)

0x494: Stack[-16] = 0
0x495: PushEmpty(int, int, int, int, int, int, int, int, int, int)
0x496: Stack[-11] = (int) 1
0x497: Push("default") // @poff=47
0x498: Push((int) 218)
0x499: @ GetTextHeightInWidth(Stack[-7], Stack[-2], Stack[-1], Stack[-15])
0x49a: Pop(2)
0x49b: Push((int) 32)
0x49c: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x49d: @ GetScreenSize(Stack[-4], Stack[-3])
0x49e: Pop(0)
0x49f: Pop(0); Push(Stack[-4] - Stack[-15]);
0x4a0: Push((int) 250)
0x4a1: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x4a2: IF (Stack[-1] == 0) GOTO 0x4a5; Pop(1)

0x4a3: Stack[-15] = Stack[-2]
0x4a4: GOTO 0x4a7

0x4a5: Push((int) 250)
0x4a6: Stack[-3] = Stack[-16] - Stack[-1]; Pop(1);
0x4a7: Pop(0); Push((bool) Stack[-14] > Stack[-5])
0x4a8: IF (Stack[-1] == 0) GOTO 0x4ab; Pop(1)

0x4a9: Stack[-1] = Stack[-14] - Stack[-5]; Pop(0);
0x4aa: GOTO 0x4b2

0x4ab: Stack[-14] = Stack[-1]
0x4ac: Pop(0); Push(Stack[-1] + Stack[-5]);
0x4ad: Push((int) 600)
0x4ae: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x4af: IF (Stack[-1] == 0) GOTO 0x4b2; Pop(1)

0x4b0: Push((int) 600)
0x4b1: Stack[-2] = Stack[-1] - Stack[-6]; Pop(1);
0x4b2: @ ScreenToClient(Stack[-2], Stack[-1])
0x4b3: Pop(0)
0x4b4: PushEmpty(int, int, int, int, float)
0x4b5: Stack[-7] = Stack[-5]
0x4b6: Stack[-6] = Stack[-4]
0x4b7: Stack[-3] = (int) 250
0x4b8: Stack[-10] = Stack[-2]
0x4b9: Stack[-16] = Stack[-1]
0x4ba: Call2 0x161

0x4bb: Pop(5)
0x4bc: Push("default") // @poff=47
0x4bd: Push((int) 16)
0x4be: Pop(1); Push(Stack[-4] + Stack[-1]);
0x4bf: Push((int) 16)
0x4c0: Pop(1); Push(Stack[-4] + Stack[-1]);
0x4c1: Push((int) 218)
0x4c2: Push((float)0.6470588445663452)
0x4c3: Push((float)0.6470588445663452)
0x4c4: Push((float)0.6470588445663452)
0x4c5: @ PrintInWidth(Stack[-12], Stack[-7], Stack[-6], Stack[-5], Stack[-4], Stack[-20], Stack[-3], Stack[-2], Stack[-1], Stack[-18])
0x4c6: Pop(7)
0x4c7: Return(); Pop(10)

0x4c8: PushEmpty(int, string, string, int, string, string)
0x4c9: PushEmpty(bool)
0x4ca: Stack[-1] = (bool) 0
0x4cb: Pop(0); PushNull((bool) Stack[-9] == 0)
0x4cc: IF (Stack[-1] == 0) GOTO 0x4d0; Pop(1)

0x4cd: Pop(0); Push(( Stack[-8] != 0 )
0x4ce: IF (Stack[-1] == 0) GOTO 0x4d0; Pop(1)

0x4cf: Stack[-1] = (bool) 1
0x4d0: IF (Stack[-1] == 0) GOTO 0x4d3; Pop(1)

0x4d1: Stack[-9] = (bool) 0
0x4d2: Return(); Pop(6)

0x4d3: PushEmpty(bool)
0x4d4: Stack[-1] = (bool) 0
0x4d5: Pop(0); PushNull((bool) Stack[-8] == 0)
0x4d6: IF (Stack[-1] == 0) GOTO 0x4da; Pop(1)

0x4d7: Pop(0); Push(( Stack[-9] != 0 )
0x4d8: IF (Stack[-1] == 0) GOTO 0x4da; Pop(1)

0x4d9: Stack[-1] = (bool) 1
0x4da: IF (Stack[-1] == 0) GOTO 0x4dd; Pop(1)

0x4db: Stack[-9] = (bool) 0
0x4dc: Return(); Pop(6)

0x4dd: PushEmpty(bool)
0x4de: Stack[-1] = (bool) 0
0x4df: Pop(0); PushNull((bool) Stack[-9] == 0)
0x4e0: IF (Stack[-1] == 0) GOTO 0x4e4; Pop(1)

0x4e1: Pop(0); PushNull((bool) Stack[-8] == 0)
0x4e2: IF (Stack[-1] == 0) GOTO 0x4e4; Pop(1)

0x4e3: Stack[-1] = (bool) 1
0x4e4: IF (Stack[-1] == 0) GOTO 0x4e7; Pop(1)

0x4e5: Stack[-9] = (bool) 1
0x4e6: Return(); Pop(6)

0x4e7: PushEmpty(int, object)
0x4e8: Stack[-10] = Stack[-1]
0x4e9: Call2 0x6d

0x4ea: Stack[-2] = Stack[-5]
0x4eb: Pop(2)
0x4ec: @ GetInvItemSprite2(Stack[-2], Stack[-3])
0x4ed: Pop(0)
0x4ee: PushEmpty(int, object)
0x4ef: Stack[-9] = Stack[-1]
0x4f0: Call2 0x6d

0x4f1: Stack[-2] = Stack[-5]
0x4f2: Pop(2)
0x4f3: @ GetInvItemSprite2(Stack[-1], Stack[-3])
0x4f4: Pop(0)
0x4f5: Stack[-9] = Stack[-2] == Stack[-1]; Pop(0);
0x4f6: Return(); Pop(6)

