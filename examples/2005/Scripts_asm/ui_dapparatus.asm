GlobalVarCount = 0

Strings:
	W:player
	W:null apparatus
	W:inventory_base.xml
	W:combine
	W:input_organ
	W:input_grass
	W:output
	A:GetItem
	A:AddItem
	A:RemoveItem
	W:grass_combination
	W:Microscope
	A:GetItemCount
	A:RemoveAllItems
	W:burah_serum
	A:SetItemName
	W:im_inc
	A:GetProperty
	W:hl_inc
	W:organ_combination
	W:DiseaseRate
	A:SetProperty
	W:HealthIncrease
	W:default
	W:button_weapon
	W:button_clothes
	W:button_medcine
	W:button_food
	W:button_other
	W:button_detector
	W:button_anticeptic
	W:noinv_drop
	W:money
	A:GetItemAmount
	W:slot0
	W:slot
	A:GetItemID
// @pool_raw:70006c00610079006500720000006e0075006c006c002000610070007000610072006100740075007300000069006e00760065006e0074006f00720079005f0062006100730065002e0078006d006c00000063006f006d00620069006e006500000069006e007000750074005f006f007200670061006e00000069006e007000750074005f006700720061007300730000006f007500740070007500740000004765744974656d004164644974656d0052656d6f76654974656d00670072006100730073005f0063006f006d00620069006e006100740069006f006e0000004d006900630072006f00730063006f007000650000004765744974656d436f756e740052656d6f7665416c6c4974656d7300620075007200610068005f0073006500720075006d0000005365744974656d4e616d650069006d005f0069006e006300000047657450726f70657274790068006c005f0069006e00630000006f007200670061006e005f0063006f006d00620069006e006100740069006f006e00000044006900730065006100730065005200610074006500000053657450726f7065727479004800650061006c007400680049006e006300720065006100730065000000640065006600610075006c007400000062007500740074006f006e005f0077006500610070006f006e00000062007500740074006f006e005f0063006c006f007400680065007300000062007500740074006f006e005f006d0065006400630069006e006500000062007500740074006f006e005f0066006f006f006400000062007500740074006f006e005f006f007400680065007200000062007500740074006f006e005f006400650074006500630074006f007200000062007500740074006f006e005f0061006e007400690063006500700074006900630000006e006f0069006e0076005f00640072006f00700000006d006f006e006500790000004765744974656d416d6f756e740073006c006f0074003000000073006c006f00740000004765744974656d494400

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
		EVENT_100 Op = 0x2a7 Vars = (int)
		EVENT_1 Op = 0x2ab Vars = (float)
		EVENT_200 Op = 0x2b7 Vars = (int, string, object)


0x0: Push("player") // @poff=0
0x1: @ FindActor(Stack[-3]T, Stack[-1])
0x2: Pop(1)
0x3: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x4: IF (Stack[-1] == 0) GOTO 0x8; Pop(1)

0x5: @ DestroyWindow()
0x6: Pop(0)
0x7: Return(); Pop(0)

0x8: @ GetWindowData(Stack[-4]T)
0x9: Pop(0)
0xa: Pop(0); Push((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0xb: IF (Stack[-1] == 0) GOTO 0x12; Pop(1)

0xc: Push("null apparatus") // @poff=14
0xd: @ Trace(Stack[-1])
0xe: Pop(1)
0xf: @ DestroyWindow()
0x10: Pop(0)
0x11: Return(); Pop(0)

0x12: Push("inventory_base.xml") // @poff=44
0x13: Push((bool) 0)
0x14: @ CreateWindow(Stack[-2], Stack[-1], Stack[-1]T)
0x15: Pop(2)
0x16: PushEmpty(int)
0x17: Stack[-1] = (int) 4
0x18: Call2 0x287

0x19: Pop(1)
0x1a: Return(); Pop(0)

0x1b: Stack[-1] = Stack[3 + Tasks[-1].StackPointer]
0x1c: Return(); Pop(0)

0x1d: PushEmpty()
0x1e: Push("combine") // @poff=82
0x1f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x20: IF (Stack[-1] == 0) GOTO 0x27; Pop(1)

0x21: PushEmpty(bool)
0x22: Call2 0x1fa

0x23: Pop(1)
0x24: Stack[-4] = (bool) 1
0x25: Return(); Pop(0)

0x26: GOTO 0x3b

0x27: Push("input_organ") // @poff=98
0x28: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x29: IF (Stack[-1] == 0) GOTO 0x2e; Pop(1)

0x2a: PushEmpty(bool)
0x2b: Call2 0x169

0x2c: Pop(1)
0x2d: GOTO 0x3b

0x2e: Push("input_grass") // @poff=122
0x2f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x30: IF (Stack[-1] == 0) GOTO 0x35; Pop(1)

0x31: PushEmpty(bool)
0x32: Call2 0x187

0x33: Pop(1)
0x34: GOTO 0x3b

0x35: Push("output") // @poff=146
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
0x49: Stack[-3] = Stack[-1]
0x4a: Call2 0xb0

0x4b: Pop(1)
0x4c: IF (Stack[-1] == 0) GOTO 0x4f; Pop(1)

0x4d: Stack[-2] = (bool) 0
0x4e: Return(); Pop(0)

0x4f: PushEmpty(bool, object)
0x50: Stack[-3] = Stack[-1]
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
0x5d: Stack[-4] = Stack[-1]
0x5e: Call2 0x64

0x5f: Stack[-2] = Stack[-5]
0x60: Pop(2)
0x61: Return(); Pop(0)

0x62: Stack[-3] = (bool) 0
0x63: Return(); Pop(0)

0x64: PushEmpty(object, object)
0x65: @@@ GetItem(Stack[-1], Stack[-3], Stack[-0]T); Obj=3 // @poff=160
0x66: Pop(0)
0x67: PushEmpty(bool, object)
0x68: Stack[-3] = Stack[-1]
0x69: Call2 0xb0

0x6a: Pop(1)
0x6b: IF (Stack[-1] == 0) GOTO 0x73; Pop(1)

0x6c: PushEmpty(bool, object, int)
0x6d: Stack[-4] = Stack[-2]
0x6e: Stack[-6] = Stack[-1]
0x6f: Call2 0x82

0x70: Stack[-3] = Stack[-7]
0x71: Pop(3)
0x72: Return(); Pop(2)

0x73: PushEmpty(bool, object)
0x74: Stack[-3] = Stack[-1]
0x75: Call2 0xb8

0x76: Pop(1)
0x77: IF (Stack[-1] == 0) GOTO 0x7f; Pop(1)

0x78: PushEmpty(bool, object, int)
0x79: Stack[-4] = Stack[-2]
0x7a: Stack[-6] = Stack[-1]
0x7b: Call2 0x99

0x7c: Stack[-3] = Stack[-7]
0x7d: Pop(3)
0x7e: Return(); Pop(2)

0x7f: Stack[-4] = (bool) 0
0x80: Return(); Pop(2)

0x81: Stack[-1] = 0
0x82: PushEmpty(object, bool, object, bool)
0x83: PushEmpty(object)
0x84: Call2 0xd5

0x85: Stack[-1] = Stack[-3]
0x86: Pop(1)
0x87: Push(Stack[-2])
0x88: IF (Stack[-1] == 0) GOTO 0x8b; Pop(1)

0x89: Stack[-7] = (bool) 0
0x8a: Return(); Pop(4)

0x8b: Push((int) 0)
0x8c: Push((int) 1)
0x8d: @@@ AddItem(Stack[-3], Stack[-8], Stack[-2], Stack[-1]); Obj=4 // @poff=168
0x8e: Pop(2)
0x8f: Pop(0); Push((bool) Stack[-1] == 0)
0x90: IF (Stack[-1] == 0) GOTO 0x93; Pop(1)

0x91: Stack[-7] = (bool) 0
0x92: Return(); Pop(4)

0x93: Push((int) 1)
0x94: @@@ RemoveItem(Stack[-6], Stack[-1], Stack[-0]T); Obj=3 // @poff=176
0x95: Pop(1)
0x96: Stack[-7] = (bool) 1
0x97: Return(); Pop(4)

0x98: Stack[-2] = 0
0x99: PushEmpty(object, bool, object, bool)
0x9a: PushEmpty(object)
0x9b: Call2 0xed

0x9c: Stack[-1] = Stack[-3]
0x9d: Pop(1)
0x9e: Push(Stack[-2])
0x9f: IF (Stack[-1] == 0) GOTO 0xa2; Pop(1)

0xa0: Stack[-7] = (bool) 0
0xa1: Return(); Pop(4)

0xa2: Push((int) 0)
0xa3: Push((int) 1)
0xa4: @@@ AddItem(Stack[-3], Stack[-8], Stack[-2], Stack[-1]); Obj=4 // @poff=168
0xa5: Pop(2)
0xa6: Pop(0); Push((bool) Stack[-1] == 0)
0xa7: IF (Stack[-1] == 0) GOTO 0xaa; Pop(1)

0xa8: Stack[-7] = (bool) 0
0xa9: Return(); Pop(4)

0xaa: Push((int) 1)
0xab: @@@ RemoveItem(Stack[-6], Stack[-1], Stack[-0]T); Obj=3 // @poff=176
0xac: Pop(1)
0xad: Stack[-7] = (bool) 1
0xae: Return(); Pop(4)

0xaf: Stack[-2] = 0
0xb0: PushEmpty()
0xb1: Push("grass_combination") // @poff=187
0xb2: PushEmpty(string, object)
0xb3: Stack[-4] = Stack[-1]
0xb4: Call2 0x3f4

0xb5: Pop(1)
0xb6: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0xb7: Return(); Pop(0)

0xb8: PushEmpty(int, bool, int, bool)
0xb9: PushEmpty(int, object)
0xba: Stack[-7] = Stack[-1]
0xbb: Call2 0x3ef

0xbc: Stack[-2] = Stack[-4]
0xbd: Pop(2)
0xbe: Push("Microscope") // @poff=223
0xbf: @ HasInvItemProperty(Stack[-2], Stack[-3], Stack[-1])
0xc0: Pop(1)
0xc1: Stack[-1] = Stack[-6]
0xc2: Return(); Pop(4)

0xc3: PushEmpty(int, bool, int, int, bool, int)
0xc4: PushEmpty(int, object)
0xc5: Stack[-9] = Stack[-1]
0xc6: Call2 0x3ef

0xc7: Stack[-2] = Stack[-5]
0xc8: Pop(2)
0xc9: Push("Microscope") // @poff=223
0xca: @ HasInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0xcb: Pop(1)
0xcc: Pop(0); Push((bool) Stack[-2] == 0)
0xcd: IF (Stack[-1] == 0) GOTO 0xd0; Pop(1)

0xce: Stack[-8] = (bool) 0
0xcf: Return(); Pop(6)

0xd0: Push("Microscope") // @poff=223
0xd1: @ GetInvItemProperty(Stack[-2], Stack[-4], Stack[-1])
0xd2: Pop(1)
0xd3: Stack[-1] = Stack[-8]
0xd4: Return(); Pop(6)

0xd5: PushEmpty(int, int, int, object, object, int, int, int, object, object)
0xd6: @@@ GetItemCount(Stack[-5]); Obj=4 // @poff=245
0xd7: Pop(0)
0xd8: Stack[-4] = (int) 0
0xd9: Stack[-3] = (int) 0
0xda: Pop(0); Push((bool) Stack[-3] < Stack[-5])
0xdb: IF (Stack[-1] == 0) GOTO 0xe9; Pop(1)

0xdc: @@@ GetItem(Stack[-2], Stack[-3]); Obj=4 // @poff=160
0xdd: Pop(0)
0xde: PushEmpty(bool, object)
0xdf: Stack[-4] = Stack[-1]
0xe0: Call2 0xb0

0xe1: Pop(1)
0xe2: IF (Stack[-1] == 0) GOTO 0xe5; Pop(1)

0xe3: Stack[-2] = Stack[-11]
0xe4: Return(); Pop(10)

0xe5: Stack[-2] = 0
0xe6: Push((int) 1)
0xe7: Stack[-4] = Stack[-4] + Stack[-1]; Pop(1);
0xe8: GOTO 0xda

0xe9: Stack[-1] = 0
0xea: Stack[-1] = Stack[-11]
0xeb: Return(); Pop(10)

0xec: Stack[-1] = 0
0xed: PushEmpty(int, int, int, object, object, int, int, int, object, object)
0xee: @@@ GetItemCount(Stack[-5]); Obj=4 // @poff=245
0xef: Pop(0)
0xf0: Stack[-4] = (int) 0
0xf1: Stack[-3] = (int) 0
0xf2: Pop(0); Push((bool) Stack[-3] < Stack[-5])
0xf3: IF (Stack[-1] == 0) GOTO 0x101; Pop(1)

0xf4: @@@ GetItem(Stack[-2], Stack[-3]); Obj=4 // @poff=160
0xf5: Pop(0)
0xf6: PushEmpty(bool, object)
0xf7: Stack[-4] = Stack[-1]
0xf8: Call2 0xb8

0xf9: Pop(1)
0xfa: IF (Stack[-1] == 0) GOTO 0xfd; Pop(1)

0xfb: Stack[-2] = Stack[-11]
0xfc: Return(); Pop(10)

0xfd: Stack[-2] = 0
0xfe: Push((int) 1)
0xff: Stack[-4] = Stack[-4] + Stack[-1]; Pop(1);
0x100: GOTO 0xf2

0x101: Stack[-1] = 0
0x102: Stack[-1] = Stack[-11]
0x103: Return(); Pop(10)

0x104: Stack[-1] = 0
0x105: PushEmpty(int, int, int, object, object, int, int, int, object, object)
0x106: @@@ GetItemCount(Stack[-5]); Obj=4 // @poff=245
0x107: Pop(0)
0x108: Stack[-4] = (int) 0
0x109: Stack[-3] = (int) 0
0x10a: Pop(0); Push((bool) Stack[-3] < Stack[-5])
0x10b: IF (Stack[-1] == 0) GOTO 0x124; Pop(1)

0x10c: @@@ GetItem(Stack[-2], Stack[-3]); Obj=4 // @poff=160
0x10d: Pop(0)
0x10e: PushEmpty(bool)
0x10f: Stack[-1] = (bool) 0
0x110: PushEmpty(bool, object)
0x111: Stack[-5] = Stack[-1]
0x112: Call2 0xb0

0x113: Pop(1)
0x114: Pop(1); Push((bool) Stack[-1] == 0)
0x115: IF (Stack[-1] == 0) GOTO 0x11d; Pop(1)

0x116: PushEmpty(bool, object)
0x117: Stack[-5] = Stack[-1]
0x118: Call2 0xb8

0x119: Pop(1)
0x11a: Pop(1); Push((bool) Stack[-1] == 0)
0x11b: IF (Stack[-1] == 0) GOTO 0x11d; Pop(1)

0x11c: Stack[-1] = (bool) 1
0x11d: IF (Stack[-1] == 0) GOTO 0x120; Pop(1)

0x11e: Stack[-2] = Stack[-11]
0x11f: Return(); Pop(10)

0x120: Stack[-2] = 0
0x121: Push((int) 1)
0x122: Stack[-4] = Stack[-4] + Stack[-1]; Pop(1);
0x123: GOTO 0x10a

0x124: Stack[-1] = 0
0x125: Stack[-1] = Stack[-11]
0x126: Return(); Pop(10)

0x127: Stack[-1] = 0
0x128: PushEmpty(int, int, object, int, int, object)
0x129: @@@ GetItemCount(Stack[-3]); Obj=4 // @poff=245
0x12a: Pop(0)
0x12b: Stack[-2] = (int) 0
0x12c: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0x12d: IF (Stack[-1] == 0) GOTO 0x13b; Pop(1)

0x12e: @@@ GetItem(Stack[-1], Stack[-2]); Obj=4 // @poff=160
0x12f: Pop(0)
0x130: PushEmpty(bool, object)
0x131: Stack[-3] = Stack[-1]
0x132: Call2 0xb0

0x133: Pop(1)
0x134: IF (Stack[-1] == 0) GOTO 0x137; Pop(1)

0x135: Stack[-2] = Stack[-7]
0x136: Return(); Pop(6)

0x137: Stack[-1] = 0
0x138: Push((int) 1)
0x139: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x13a: GOTO 0x12c

0x13b: Stack[-7] = (int) -1
0x13c: Return(); Pop(6)

0x13d: PushEmpty(int, int, object, int, int, object)
0x13e: @@@ GetItemCount(Stack[-3]); Obj=4 // @poff=245
0x13f: Pop(0)
0x140: Stack[-2] = (int) 0
0x141: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0x142: IF (Stack[-1] == 0) GOTO 0x150; Pop(1)

0x143: @@@ GetItem(Stack[-1], Stack[-2]); Obj=4 // @poff=160
0x144: Pop(0)
0x145: PushEmpty(bool, object)
0x146: Stack[-3] = Stack[-1]
0x147: Call2 0xb8

0x148: Pop(1)
0x149: IF (Stack[-1] == 0) GOTO 0x14c; Pop(1)

0x14a: Stack[-2] = Stack[-7]
0x14b: Return(); Pop(6)

0x14c: Stack[-1] = 0
0x14d: Push((int) 1)
0x14e: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x14f: GOTO 0x141

0x150: Stack[-7] = (int) -1
0x151: Return(); Pop(6)

0x152: PushEmpty(int, int, int, object, int, int, int, object)
0x153: @@@ GetItemCount(Stack[-4]); Obj=4 // @poff=245
0x154: Pop(0)
0x155: Stack[-3] = (int) 0
0x156: Stack[-2] = (int) 0
0x157: Pop(0); Push((bool) Stack[-2] < Stack[-4])
0x158: IF (Stack[-1] == 0) GOTO 0x167; Pop(1)

0x159: @@@ GetItem(Stack[-1], Stack[-2]); Obj=4 // @poff=160
0x15a: Pop(0)
0x15b: PushEmpty(bool, object)
0x15c: Stack[-3] = Stack[-1]
0x15d: Call2 0xb0

0x15e: Pop(1)
0x15f: Pop(1); Push((bool) Stack[-1] == 0)
0x160: IF (Stack[-1] == 0) GOTO 0x163; Pop(1)

0x161: Stack[-2] = Stack[-9]
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

0x16c: Stack[-1] = Stack[-3]
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
0x178: @@@ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1]); Obj=3 // @poff=168
0x179: Pop(3)
0x17a: Pop(0); Push((bool) Stack[-1] == 0)
0x17b: IF (Stack[-1] == 0) GOTO 0x17e; Pop(1)

0x17c: Stack[-5] = (bool) 0
0x17d: Return(); Pop(4)

0x17e: Push((int) 1)
0x17f: @@@ RemoveItem(Stack[-3], Stack[-1]); Obj=4 // @poff=176
0x180: Pop(1)
0x181: PushEmpty(int)
0x182: Stack[-1] = (int) 4
0x183: Call2 0x32a

0x184: Pop(1)
0x185: Stack[-5] = (bool) 1
0x186: Return(); Pop(4)

0x187: PushEmpty(int, bool, int, bool)
0x188: PushEmpty(int)
0x189: Call2 0x128

0x18a: Stack[-1] = Stack[-3]
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
0x196: @@@ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1]); Obj=3 // @poff=168
0x197: Pop(3)
0x198: Pop(0); Push((bool) Stack[-1] == 0)
0x199: IF (Stack[-1] == 0) GOTO 0x19c; Pop(1)

0x19a: Stack[-5] = (bool) 0
0x19b: Return(); Pop(4)

0x19c: Push((int) 1)
0x19d: @@@ RemoveItem(Stack[-3], Stack[-1]); Obj=4 // @poff=176
0x19e: Pop(1)
0x19f: PushEmpty(int)
0x1a0: Stack[-1] = (int) 2
0x1a1: Call2 0x32a

0x1a2: Pop(1)
0x1a3: Stack[-5] = (bool) 1
0x1a4: Return(); Pop(4)

0x1a5: PushEmpty(object, int, bool, object, int, bool)
0x1a6: PushEmpty(object)
0x1a7: Call2 0x105

0x1a8: Stack[-1] = Stack[-4]
0x1a9: Pop(1)
0x1aa: Pop(0); Push((bool) Stack[-3] == 0)
0x1ab: IF (Stack[-1] == 0) GOTO 0x1ae; Pop(1)

0x1ac: Stack[-7] = (bool) 0
0x1ad: Return(); Pop(6)

0x1ae: PushEmpty(int)
0x1af: Call2 0x152

0x1b0: Stack[-1] = Stack[-3]
0x1b1: Pop(1)
0x1b2: Push((int) 2)
0x1b3: Push((int) 1)
0x1b4: @@@ AddItem(Stack[-3], Stack[-5], Stack[-2], Stack[-1]); Obj=3 // @poff=168
0x1b5: Pop(2)
0x1b6: Pop(0); Push((bool) Stack[-1] == 0)
0x1b7: IF (Stack[-1] == 0) GOTO 0x1ba; Pop(1)

0x1b8: Stack[-7] = (bool) 0
0x1b9: Return(); Pop(6)

0x1ba: Push((int) 1)
0x1bb: @@@ RemoveItem(Stack[-3], Stack[-1]); Obj=4 // @poff=176
0x1bc: Pop(1)
0x1bd: PushEmpty(int)
0x1be: Stack[-1] = (int) 2
0x1bf: Call2 0x32a

0x1c0: Pop(1)
0x1c1: Stack[-7] = (bool) 1
0x1c2: Return(); Pop(6)

0x1c3: Stack[-3] = 0
0x1c4: PushEmpty(object, object)
0x1c5: PushEmpty(object)
0x1c6: Call2 0xd5

0x1c7: Stack[-1] = Stack[-2]
0x1c8: Pop(1)
0x1c9: Push(Stack[-1])
0x1ca: IF (Stack[-1] == 0) GOTO 0x1d0; Pop(1)

0x1cb: Push((int) 0)
0x1cc: Push("input_grass") // @poff=122
0x1cd: @ SendMessage(Stack[-2], Stack[-1], Stack[-3])
0x1ce: Pop(2)
0x1cf: GOTO 0x1d4

0x1d0: Push((int) 32768)
0x1d1: Push("input_grass") // @poff=122
0x1d2: @ SendMessage(Stack[-2], Stack[-1])
0x1d3: Pop(2)
0x1d4: Return(); Pop(2)

0x1d5: Stack[-1] = 0
0x1d6: PushEmpty(object, object)
0x1d7: PushEmpty(object)
0x1d8: Call2 0xed

0x1d9: Stack[-1] = Stack[-2]
0x1da: Pop(1)
0x1db: Push(Stack[-1])
0x1dc: IF (Stack[-1] == 0) GOTO 0x1e2; Pop(1)

0x1dd: Push((int) 0)
0x1de: Push("input_organ") // @poff=98
0x1df: @ SendMessage(Stack[-2], Stack[-1], Stack[-3])
0x1e0: Pop(2)
0x1e1: GOTO 0x1e6

0x1e2: Push((int) 32768)
0x1e3: Push("input_organ") // @poff=98
0x1e4: @ SendMessage(Stack[-2], Stack[-1])
0x1e5: Pop(2)
0x1e6: Return(); Pop(2)

0x1e7: Stack[-1] = 0
0x1e8: PushEmpty(object, object)
0x1e9: PushEmpty(object)
0x1ea: Call2 0x105

0x1eb: Stack[-1] = Stack[-2]
0x1ec: Pop(1)
0x1ed: Push(Stack[-1])
0x1ee: IF (Stack[-1] == 0) GOTO 0x1f4; Pop(1)

0x1ef: Push((int) 0)
0x1f0: Push("output") // @poff=146
0x1f1: @ SendMessage(Stack[-2], Stack[-1], Stack[-3])
0x1f2: Pop(2)
0x1f3: GOTO 0x1f8

0x1f4: Push((int) 32768)
0x1f5: Push("output") // @poff=146
0x1f6: @ SendMessage(Stack[-2], Stack[-1])
0x1f7: Pop(2)
0x1f8: Return(); Pop(2)

0x1f9: Stack[-1] = 0
0x1fa: PushEmpty(object, object, object, bool, float, float, float, float, float, float, float, float, float, float, float, object, bool, object, object, object, bool, float, float, float, float, float, float, float, float, float, float, float, object, bool)
0x1fb: PushEmpty(object)
0x1fc: Call2 0xd5

0x1fd: Stack[-1] = Stack[-18]
0x1fe: Pop(1)
0x1ff: PushEmpty(object)
0x200: Call2 0xed

0x201: Stack[-1] = Stack[-17]
0x202: Pop(1)
0x203: PushEmpty(bool)
0x204: Stack[-1] = (bool) 1
0x205: Pop(0); Push((bool) Stack[-18] == 0)
0x206: IF (Stack[-1] == 1) GOTO 0x20a; Pop(1)

0x207: Pop(0); Push((bool) Stack[-17] == 0)
0x208: IF (Stack[-1] == 1) GOTO 0x20a; Pop(1)

0x209: Stack[-1] = (bool) 0
0x20a: IF (Stack[-1] == 0) GOTO 0x20d; Pop(1)

0x20b: Stack[-35] = (bool) 0
0x20c: Return(); Pop(34)

0x20d: PushEmpty(int, object)
0x20e: Stack[-18] = Stack[-1]
0x20f: Call2 0xc3

0x210: Pop(1)
0x211: Push((int) 5)
0x212: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x213: IF (Stack[-1] == 0) GOTO 0x222; Pop(1)

0x214: @@@ RemoveAllItems(); Obj=4 // @poff=258
0x215: Pop(0)
0x216: @ CreateInvItem(Stack[-15])
0x217: Pop(0)
0x218: Push("burah_serum") // @poff=273
0x219: @@ SetItemName(Stack[-1]); Obj=16 // @poff=297
0x21a: Pop(1)
0x21b: Push((int) 0)
0x21c: Push((int) 1)
0x21d: @@@ AddItem(Stack[-16], Stack[-17], Stack[-2], Stack[-1]); Obj=4 // @poff=168
0x21e: Pop(2)
0x21f: Stack[-35] = (bool) 1
0x220: Return(); Pop(34)

0x221: Stack[-15] = 0
0x222: Push("im_inc") // @poff=309
0x223: @@ GetProperty(Stack[-14], Stack[-1]); Obj=18 // @poff=323
0x224: Pop(1)
0x225: Push("hl_inc") // @poff=335
0x226: @@ GetProperty(Stack[-13], Stack[-1]); Obj=18 // @poff=323
0x227: Pop(1)
0x228: PushEmpty(int, object)
0x229: Stack[-18] = Stack[-1]
0x22a: Call2 0xc3

0x22b: Pop(1)
0x22c: Push((int) 1)
0x22d: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x22e: IF (Stack[-1] == 0) GOTO 0x231; Pop(1)

0x22f: Stack[-11] = (int) 1
0x230: Stack[-12] = Stack[-9]
0x231: PushEmpty(int, object)
0x232: Stack[-18] = Stack[-1]
0x233: Call2 0xc3

0x234: Pop(1)
0x235: Push((int) 2)
0x236: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x237: IF (Stack[-1] == 0) GOTO 0x23e; Pop(1)

0x238: Push((float)1.0)
0x239: Push((float)1.0)
0x23a: Pop(1); Push(Stack[-1] - Stack[-15]);
0x23b: Stack[-8] = Stack[-2] * Stack[-1]; Pop(2);
0x23c: Stack[-6] = Stack[-11]
0x23d: Stack[-12] = Stack[-9]
0x23e: PushEmpty(int, object)
0x23f: Stack[-18] = Stack[-1]
0x240: Call2 0xc3

0x241: Pop(1)
0x242: Push((int) 3)
0x243: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x244: IF (Stack[-1] == 0) GOTO 0x24b; Pop(1)

0x245: Push((float)0.800000011920929)
0x246: Push((float)1.0)
0x247: Pop(1); Push(Stack[-1] - Stack[-15]);
0x248: Stack[-7] = Stack[-2] * Stack[-1]; Pop(2);
0x249: Stack[-5] = Stack[-11]
0x24a: Stack[-12] = Stack[-9]
0x24b: PushEmpty(int, object)
0x24c: Stack[-18] = Stack[-1]
0x24d: Call2 0xc3

0x24e: Pop(1)
0x24f: Push((int) 4)
0x250: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x251: IF (Stack[-1] == 0) GOTO 0x258; Pop(1)

0x252: Push((float)0.5)
0x253: Push((float)1.0)
0x254: Pop(1); Push(Stack[-1] - Stack[-15]);
0x255: Stack[-6] = Stack[-2] * Stack[-1]; Pop(2);
0x256: Stack[-4] = Stack[-11]
0x257: Stack[-12] = Stack[-9]
0x258: PushEmpty(int, object)
0x259: Stack[-18] = Stack[-1]
0x25a: Call2 0xc3

0x25b: Pop(1)
0x25c: Push((int) 6)
0x25d: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x25e: IF (Stack[-1] == 0) GOTO 0x265; Pop(1)

0x25f: Push((float)0.30000001192092896)
0x260: Push((float)1.0)
0x261: Pop(1); Push(Stack[-1] - Stack[-15]);
0x262: Stack[-5] = Stack[-2] * Stack[-1]; Pop(2);
0x263: Stack[-3] = Stack[-11]
0x264: Stack[-12] = Stack[-9]
0x265: Push((int) 1)
0x266: Pop(1); Push((bool) Stack[-12] > Stack[-1])
0x267: IF (Stack[-1] == 0) GOTO 0x269; Pop(1)

0x268: Stack[-11] = (int) 1
0x269: Push((float)0.029999999329447746)
0x26a: Pop(1); Push((bool) Stack[-12] < Stack[-1])
0x26b: IF (Stack[-1] == 0) GOTO 0x26d; Pop(1)

0x26c: Stack[-11] = (float) 0.029999999329447746
0x26d: Push((int) -1)
0x26e: Pop(1); Push((bool) Stack[-10] < Stack[-1])
0x26f: IF (Stack[-1] == 0) GOTO 0x271; Pop(1)

0x270: Stack[-9] = (int) -1
0x271: @@@ RemoveAllItems(); Obj=4 // @poff=258
0x272: Pop(0)
0x273: @ CreateInvItem(Stack[-2])
0x274: Pop(0)
0x275: Push("organ_combination") // @poff=349
0x276: @@ SetItemName(Stack[-1]); Obj=3 // @poff=297
0x277: Pop(1)
0x278: Push("DiseaseRate") // @poff=385
0x279: @@ SetProperty(Stack[-1], Stack[-12]); Obj=3 // @poff=409
0x27a: Pop(1)
0x27b: Push("HealthIncrease") // @poff=421
0x27c: @@ SetProperty(Stack[-1], Stack[-10]); Obj=3 // @poff=409
0x27d: Pop(1)
0x27e: Push((int) 0)
0x27f: Push((int) 1)
0x280: @@@ AddItem(Stack[-3], Stack[-4], Stack[-2], Stack[-1]); Obj=4 // @poff=168
0x281: Pop(2)
0x282: Stack[-35] = (bool) 1
0x283: Return(); Pop(34)

0x284: Stack[-2] = 0
0x285: Stack[-16] = 0
0x286: Stack[-17] = 0
0x287: PushEmpty()
0x288: Stack[0 + Tasks[-1].StackPointer] = (int)-1
0x289: PushEmpty(int)
0x28a: Stack[-2] = Stack[-1]
0x28b: Call2 0x32a

0x28c: Pop(1)
0x28d: PushEmpty(int)
0x28e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x28f: Call2 0x388

0x290: Pop(1)
0x291: PushEmpty()
0x292: Call2 0x343

0x293: Pop(0)
0x294: Push("default") // @poff=451
0x295: @ SetCursor(Stack[-1])
0x296: Pop(1)
0x297: @ ShowCursor()
0x298: Pop(0)
0x299: @ CaptureKeyboard()
0x29a: Pop(0)
0x29b: Push((bool) 0)
0x29c: @ SetOwnerDraw(Stack[-1])
0x29d: Pop(1)
0x29e: Push((bool) 1)
0x29f: @ SetNeedUpdate(Stack[-1])
0x2a0: Pop(1)
0x2a1: PushEmpty()
0x2a2: Call2 0x58

0x2a3: Pop(0)
0x2a4: @ ProcessEvents()
0x2a5: Pop(0)
0x2a6: Return(); Pop(0)

0x2a7: PushEmpty()
0x2a8: @ DestroyWindow()
0x2a9: Pop(0)
0x2aa: Return(); Pop(0)

0x2ab: PushEmpty()
0x2ac: PushEmpty(int)
0x2ad: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2ae: Call2 0x388

0x2af: Pop(1)
0x2b0: PushEmpty()
0x2b1: Call2 0x343

0x2b2: Pop(0)
0x2b3: PushEmpty()
0x2b4: Call2 0x3d

0x2b5: Pop(0)
0x2b6: Return(); Pop(0)

0x2b7: PushEmpty(bool, int, int, object, int, object, bool, int, int, object, int, object)
0x2b8: Stack[-6] = (bool) 0
0x2b9: Push("button_weapon") // @poff=467
0x2ba: Pop(1); Push((bool) Stack[-15] == Stack[-1])
0x2bb: IF (Stack[-1] == 0) GOTO 0x2c2; Pop(1)

0x2bc: PushEmpty(int)
0x2bd: Stack[-1] = (int) 0
0x2be: Call2 0x32a

0x2bf: Pop(1)
0x2c0: Stack[-6] = (bool) 1
0x2c1: GOTO 0x31e

0x2c2: Push("button_clothes") // @poff=495
0x2c3: Pop(1); Push((bool) Stack[-15] == Stack[-1])
0x2c4: IF (Stack[-1] == 0) GOTO 0x2cb; Pop(1)

0x2c5: PushEmpty(int)
0x2c6: Stack[-1] = (int) 1
0x2c7: Call2 0x32a

0x2c8: Pop(1)
0x2c9: Stack[-6] = (bool) 1
0x2ca: GOTO 0x31e

0x2cb: Push("button_medcine") // @poff=525
0x2cc: Pop(1); Push((bool) Stack[-15] == Stack[-1])
0x2cd: IF (Stack[-1] == 0) GOTO 0x2d4; Pop(1)

0x2ce: PushEmpty(int)
0x2cf: Stack[-1] = (int) 2
0x2d0: Call2 0x32a

0x2d1: Pop(1)
0x2d2: Stack[-6] = (bool) 1
0x2d3: GOTO 0x31e

0x2d4: Push("button_food") // @poff=555
0x2d5: Pop(1); Push((bool) Stack[-15] == Stack[-1])
0x2d6: IF (Stack[-1] == 0) GOTO 0x2dd; Pop(1)

0x2d7: PushEmpty(int)
0x2d8: Stack[-1] = (int) 3
0x2d9: Call2 0x32a

0x2da: Pop(1)
0x2db: Stack[-6] = (bool) 1
0x2dc: GOTO 0x31e

0x2dd: Push("button_other") // @poff=579
0x2de: Pop(1); Push((bool) Stack[-15] == Stack[-1])
0x2df: IF (Stack[-1] == 0) GOTO 0x2e6; Pop(1)

0x2e0: PushEmpty(int)
0x2e1: Stack[-1] = (int) 4
0x2e2: Call2 0x32a

0x2e3: Pop(1)
0x2e4: Stack[-6] = (bool) 1
0x2e5: GOTO 0x31e

0x2e6: Push("button_detector") // @poff=605
0x2e7: Pop(1); Push((bool) Stack[-15] == Stack[-1])
0x2e8: IF (Stack[-1] == 0) GOTO 0x2ea; Pop(1)

0x2e9: GOTO 0x31e

0x2ea: Push("button_anticeptic") // @poff=637
0x2eb: Pop(1); Push((bool) Stack[-15] == Stack[-1])
0x2ec: IF (Stack[-1] == 0) GOTO 0x2ee; Pop(1)

0x2ed: GOTO 0x31e

0x2ee: Push((int) 0)
0x2ef: Pop(1); Push((bool) Stack[-16] != Stack[-1])
0x2f0: IF (Stack[-1] == 0) GOTO 0x2f7; Pop(1)

0x2f1: Push("noinv_drop") // @poff=673
0x2f2: @ GetVariable(Stack[-1], Stack[-6])
0x2f3: Pop(1)
0x2f4: Push(Stack[-5])
0x2f5: IF (Stack[-1] == 0) GOTO 0x2f7; Pop(1)

0x2f6: Return(); Pop(12)

0x2f7: Stack[-4] = (int) 0
0x2f8: Push((int) 12)
0x2f9: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x2fa: IF (Stack[-1] == 0) GOTO 0x31e; Pop(1)

0x2fb: PushEmpty(string, int)
0x2fc: Stack[-6] = Stack[-1]
0x2fd: Call2 0x3df

0x2fe: Pop(1)
0x2ff: Pop(1); Push((bool) Stack[-15] == Stack[-1])
0x300: IF (Stack[-1] == 0) GOTO 0x31b; Pop(1)

0x301: PushEmpty(object)
0x302: Call2 0x1b

0x303: Stack[-1] = Stack[-4]
0x304: Pop(1)
0x305: @@ GetItemCount(Stack[-2], Stack[-0]T); Obj=3 // @poff=245
0x306: Pop(0)
0x307: Pop(0); Push((bool) Stack[-2] > Stack[-4])
0x308: IF (Stack[-1] == 0) GOTO 0x319; Pop(1)

0x309: @@ GetItem(Stack[-1], Stack[-4], Stack[-0]T); Obj=3 // @poff=160
0x30a: Pop(0)
0x30b: PushEmpty(bool, object)
0x30c: Stack[-3] = Stack[-1]
0x30d: Call2 0x47

0x30e: Pop(1)
0x30f: Pop(1); Push((bool) Stack[-1] == 0)
0x310: IF (Stack[-1] == 0) GOTO 0x318; Pop(1)

0x311: PushEmpty(bool, int, bool)
0x312: Stack[-7] = Stack[-2]
0x313: Push((int) 0)
0x314: Stack[-2] = Stack[-19] == Stack[-1]; Pop(1);
0x315: Call2 0x59

0x316: Stack[-3] = Stack[-9]
0x317: Pop(3)
0x318: Stack[-1] = 0
0x319: GOTO 0x31e

0x31a: Stack[-3] = 0
0x31b: Push((int) 1)
0x31c: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x31d: GOTO 0x2f8

0x31e: Pop(0); Push((bool) Stack[-6] == 0)
0x31f: IF (Stack[-1] == 0) GOTO 0x327; Pop(1)

0x320: PushEmpty(bool, int, string, object)
0x321: Stack[-19] = Stack[-3]
0x322: Stack[-18] = Stack[-2]
0x323: Stack[-17] = Stack[-1]
0x324: Call2 0x1d

0x325: Stack[-4] = Stack[-10]
0x326: Pop(4)
0x327: Push(Stack[-6])
0x328: IF (Stack[-1] == 0) GOTO 0x329; Pop(1)

0x329: Return(); Pop(12)

0x32a: PushEmpty()
0x32b: Push((int) -1)
0x32c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x32d: IF (Stack[-1] == 0) GOTO 0x32f; Pop(1)

0x32e: Return(); Pop(0)

0x32f: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == Stack[-1])
0x330: IF (Stack[-1] == 0) GOTO 0x332; Pop(1)

0x331: Return(); Pop(0)

0x332: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x333: PushEmpty(int)
0x334: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x335: Call2 0x34a

0x336: Pop(1)
0x337: Return(); Pop(0)

0x338: PushEmpty(object, int, object, int)
0x339: PushEmpty(object)
0x33a: Call2 0x1b

0x33b: Stack[-1] = Stack[-3]
0x33c: Pop(1)
0x33d: Push("money") // @poff=695
0x33e: @@ GetProperty(Stack[-1], Stack[-2]); Obj=3 // @poff=323
0x33f: Pop(1)
0x340: Stack[-1] = Stack[-5]
0x341: Return(); Pop(4)

0x342: Stack[-2] = 0
0x343: PushEmpty(int)
0x344: Call2 0x338

0x345: Pop(0)
0x346: Push("money") // @poff=695
0x347: @ SendMessage(Stack[-2], Stack[-1])
0x348: Pop(2)
0x349: Return(); Pop(0)

0x34a: PushEmpty()
0x34b: Push((int) 0)
0x34c: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x34d: IF (Stack[-1] == 0) GOTO 0x353; Pop(1)

0x34e: Push((int) 0)
0x34f: Push("button_weapon") // @poff=467
0x350: @ SendMessage(Stack[-2], Stack[-1])
0x351: Pop(2)
0x352: GOTO 0x357

0x353: Push((int) 1)
0x354: Push("button_weapon") // @poff=467
0x355: @ SendMessage(Stack[-2], Stack[-1])
0x356: Pop(2)
0x357: Push((int) 1)
0x358: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x359: IF (Stack[-1] == 0) GOTO 0x35f; Pop(1)

0x35a: Push((int) 0)
0x35b: Push("button_clothes") // @poff=495
0x35c: @ SendMessage(Stack[-2], Stack[-1])
0x35d: Pop(2)
0x35e: GOTO 0x363

0x35f: Push((int) 1)
0x360: Push("button_clothes") // @poff=495
0x361: @ SendMessage(Stack[-2], Stack[-1])
0x362: Pop(2)
0x363: Push((int) 2)
0x364: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x365: IF (Stack[-1] == 0) GOTO 0x36b; Pop(1)

0x366: Push((int) 0)
0x367: Push("button_medcine") // @poff=525
0x368: @ SendMessage(Stack[-2], Stack[-1])
0x369: Pop(2)
0x36a: GOTO 0x36f

0x36b: Push((int) 1)
0x36c: Push("button_medcine") // @poff=525
0x36d: @ SendMessage(Stack[-2], Stack[-1])
0x36e: Pop(2)
0x36f: Push((int) 3)
0x370: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x371: IF (Stack[-1] == 0) GOTO 0x377; Pop(1)

0x372: Push((int) 0)
0x373: Push("button_food") // @poff=555
0x374: @ SendMessage(Stack[-2], Stack[-1])
0x375: Pop(2)
0x376: GOTO 0x37b

0x377: Push((int) 1)
0x378: Push("button_food") // @poff=555
0x379: @ SendMessage(Stack[-2], Stack[-1])
0x37a: Pop(2)
0x37b: Push((int) 4)
0x37c: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x37d: IF (Stack[-1] == 0) GOTO 0x383; Pop(1)

0x37e: Push((int) 0)
0x37f: Push("button_other") // @poff=579
0x380: @ SendMessage(Stack[-2], Stack[-1])
0x381: Pop(2)
0x382: GOTO 0x387

0x383: Push((int) 1)
0x384: Push("button_other") // @poff=579
0x385: @ SendMessage(Stack[-2], Stack[-1])
0x386: Pop(2)
0x387: Return(); Pop(0)

0x388: PushEmpty(object, int, int, object, int, bool, bool, object, int, int, object, int, bool, bool)
0x389: PushEmpty(object)
0x38a: Call2 0x1b

0x38b: Stack[-1] = Stack[-8]
0x38c: Pop(1)
0x38d: @@ GetItemCount(Stack[-6], Stack[-15]); Obj=7 // @poff=245
0x38e: Pop(0)
0x38f: Stack[-5] = (int) 0
0x390: Push((int) 12)
0x391: Pop(1); Push((bool) Stack[-6] < Stack[-1])
0x392: IF (Stack[-1] == 0) GOTO 0x3dd; Pop(1)

0x393: Pop(0); Push((bool) Stack[-5] < Stack[-6])
0x394: IF (Stack[-1] == 0) GOTO 0x3d3; Pop(1)

0x395: @@ GetItem(Stack[-4], Stack[-5], Stack[-15]); Obj=7 // @poff=160
0x396: Pop(0)
0x397: @@ GetItemAmount(Stack[-3], Stack[-5], Stack[-15]); Obj=7 // @poff=707
0x398: Pop(0)
0x399: PushEmpty(bool, int, int)
0x39a: Stack[-8] = Stack[-2]
0x39b: Stack[-18] = Stack[-1]
0x39c: Call2 0x55

0x39d: Stack[-3] = Stack[-5]
0x39e: Pop(3)
0x39f: PushEmpty(bool, object)
0x3a0: Stack[-6] = Stack[-1]
0x3a1: Call2 0x47

0x3a2: Stack[-2] = Stack[-3]
0x3a3: Pop(2)
0x3a4: Push(Stack[-2])
0x3a5: IF (Stack[-1] == 0) GOTO 0x3b8; Pop(1)

0x3a6: Push(Stack[-1])
0x3a7: IF (Stack[-1] == 0) GOTO 0x3b0; Pop(1)

0x3a8: Push((int) 0)
0x3a9: PushEmpty(string, int)
0x3aa: Stack[-8] = Stack[-1]
0x3ab: Call2 0x3df

0x3ac: Pop(1)
0x3ad: @ SendMessage(Stack[-2], Stack[-1], Stack[-6])
0x3ae: Pop(2)
0x3af: GOTO 0x3b7

0x3b0: Push((int) 16384)
0x3b1: PushEmpty(string, int)
0x3b2: Stack[-8] = Stack[-1]
0x3b3: Call2 0x3df

0x3b4: Pop(1)
0x3b5: @ SendMessage(Stack[-2], Stack[-1], Stack[-6])
0x3b6: Pop(2)
0x3b7: GOTO 0x3c9

0x3b8: Push(Stack[-1])
0x3b9: IF (Stack[-1] == 0) GOTO 0x3c2; Pop(1)

0x3ba: Push((int) 131072)
0x3bb: PushEmpty(string, int)
0x3bc: Stack[-8] = Stack[-1]
0x3bd: Call2 0x3df

0x3be: Pop(1)
0x3bf: @ SendMessage(Stack[-2], Stack[-1], Stack[-6])
0x3c0: Pop(2)
0x3c1: GOTO 0x3c9

0x3c2: Push((int) 0)
0x3c3: PushEmpty(string, int)
0x3c4: Stack[-8] = Stack[-1]
0x3c5: Call2 0x3df

0x3c6: Pop(1)
0x3c7: @ SendMessage(Stack[-2], Stack[-1], Stack[-6])
0x3c8: Pop(2)
0x3c9: Push((int) 65536)
0x3ca: Pop(1); Push(Stack[-4] | Stack[-1]);
0x3cb: PushEmpty(string, int)
0x3cc: Stack[-8] = Stack[-1]
0x3cd: Call2 0x3df

0x3ce: Pop(1)
0x3cf: @ SendMessage(Stack[-2], Stack[-1])
0x3d0: Pop(2)
0x3d1: Stack[-4] = 0
0x3d2: GOTO 0x3da

0x3d3: Push((int) 32768)
0x3d4: PushEmpty(string, int)
0x3d5: Stack[-8] = Stack[-1]
0x3d6: Call2 0x3df

0x3d7: Pop(1)
0x3d8: @ SendMessage(Stack[-2], Stack[-1])
0x3d9: Pop(2)
0x3da: Push((int) 1)
0x3db: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x3dc: GOTO 0x390

0x3dd: Return(); Pop(14)

0x3de: Stack[-7] = 0
0x3df: PushEmpty()
0x3e0: Push((int) 1)
0x3e1: Pop(1); Push(Stack[-2] + Stack[-1]);
0x3e2: Push((int) 10)
0x3e3: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x3e4: IF (Stack[-1] == 0) GOTO 0x3ea; Pop(1)

0x3e5: Push("slot0") // @poff=721
0x3e6: Push((int) 1)
0x3e7: Pop(1); Push(Stack[-3] + Stack[-1]);
0x3e8: Stack[-4] = Stack[-2] + Stack[-1]; Pop(2);
0x3e9: Return(); Pop(0)

0x3ea: Push("slot") // @poff=733
0x3eb: Push((int) 1)
0x3ec: Pop(1); Push(Stack[-3] + Stack[-1]);
0x3ed: Stack[-4] = Stack[-2] + Stack[-1]; Pop(2);
0x3ee: Return(); Pop(0)

0x3ef: PushEmpty(int, int)
0x3f0: @@ GetItemID(Stack[-1]); Obj=3 // @poff=743
0x3f1: Pop(0)
0x3f2: Stack[-1] = Stack[-4]
0x3f3: Return(); Pop(2)

0x3f4: PushEmpty(int, string, int, string)
0x3f5: PushEmpty(int, object)
0x3f6: Stack[-7] = Stack[-1]
0x3f7: Call2 0x3ef

0x3f8: Stack[-2] = Stack[-4]
0x3f9: Pop(2)
0x3fa: @ GetInvItemName(Stack[-1], Stack[-2])
0x3fb: Pop(0)
0x3fc: Stack[-1] = Stack[-6]
0x3fd: Return(); Pop(4)

