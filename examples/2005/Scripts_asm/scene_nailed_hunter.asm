GlobalVarCount = 0

Strings:
	W:HunterCount
	W:HunterProb
	W:pt_lmarauders
	A:add
	W:pt_umarauders
	A:resize
	A:set
	A:get
	A:remove
	W:pers_hunter
	W:hunter.xml
	W:hunter2.xml
	W:nailed
	W:pt_item_food
	W:pt_item_pfood
	W:pt_item_knife
	W:pt_item_bottle
	W:bread
	W:bottle_water
	W:milk
	W:vegetables
	W:lemon
	W:scripted_container
	W:item_
	W:_steal.xml
	W:item_plate.xml
	W:rusk
	W:dried_fish
	W:dried_meat
	W:smoked_meat
	W:fresh_fish
	W:fresh_meat
	W:tvirin
	W:item_knife_steal.xml
	W:bottle_empty
	W:egg
	A:IsDead
	W:ToDie
	W:HasProperty
	A:HasProperty
	A:GetLocator
	W:Locator 
	W: doesn't exist
	A:clear
// @pool_raw:480075006e0074006500720043006f0075006e0074000000480075006e00740065007200500072006f0062000000700074005f006c006d0061007200610075006400650072007300000061646400700074005f0075006d00610072006100750064006500720073000000726573697a6500736574006765740072656d6f76650070006500720073005f00680075006e007400650072000000680075006e007400650072002e0078006d006c000000680075006e0074006500720032002e0078006d006c0000006e00610069006c00650064000000700074005f006900740065006d005f0066006f006f0064000000700074005f006900740065006d005f00700066006f006f0064000000700074005f006900740065006d005f006b006e006900660065000000700074005f006900740065006d005f0062006f00740074006c006500000062007200650061006400000062006f00740074006c0065005f007700610074006500720000006d0069006c006b00000076006500670065007400610062006c006500730000006c0065006d006f006e000000730063007200690070007400650064005f0063006f006e007400610069006e006500720000006900740065006d005f0000005f0073007400650061006c002e0078006d006c0000006900740065006d005f0070006c006100740065002e0078006d006c0000007200750073006b000000640072006900650064005f0066006900730068000000640072006900650064005f006d00650061007400000073006d006f006b00650064005f006d006500610074000000660072006500730068005f0066006900730068000000660072006500730068005f006d006500610074000000740076006900720069006e0000006900740065006d005f006b006e006900660065005f0073007400650061006c002e0078006d006c00000062006f00740074006c0065005f0065006d00700074007900000065006700670000004973446561640054006f004400690065000000480061007300500072006f0070006500720074007900000048617350726f7065727479004765744c6f6361746f72004c006f006300610074006f00720020000000200064006f00650073006e00270074002000650078006900730074000000636c65617200

Import:
	GetProperty (2 args)
	HasProperty (2 args)
	irand (2 args)
	CreateIntVector (1 args)
	GetLocator (4 args)
	RandOneOf (11 args)
	AddActorByType (6 args)
	RandVec2D (2 args)
	RandOneOf (15 args)
	RandOneOf (13 args)
	Hold (0 args)
	RemoveActor (1 args)
	self (1 args)
	rand (1 args)
	CreateObjectVector (1 args)
	GetLocator (2 args)
	Trace (1 args)
	AddActor (6 args)

RunOp = 0x72
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object, object) Params = 0
		EVENT_5 Op = 0x1b1 Vars = ()
		EVENT_6 Op = 0x1f1 Vars = ()


0x0: PushEmpty(int, float, bool, int, int, object, int, int, int, int, float, bool, int, int, object, int, int, int)
0x1: Push("HunterCount") // @poff=0
0x2: @ GetProperty(Stack[-1], Stack[-10])
0x3: Pop(1)
0x4: Push("HunterProb") // @poff=24
0x5: @ HasProperty(Stack[-1], Stack[-8])
0x6: Pop(1)
0x7: Push(Stack[-7])
0x8: IF (Stack[-1] == 0) GOTO 0xd; Pop(1)

0x9: Push("HunterProb") // @poff=24
0xa: @ GetProperty(Stack[-1], Stack[-9])
0xb: Pop(1)
0xc: GOTO 0xe

0xd: Stack[-8] = (float) 0.33000001311302185
0xe: PushEmpty(bool, float)
0xf: Stack[-1] = (float) 0.33000001311302185
0x10: Call2 0x230

0x11: Pop(1)
0x12: Pop(1); Push((bool) Stack[-1] == 0)
0x13: IF (Stack[-1] == 0) GOTO 0x16; Pop(1)

0x14: Push((int) -1)
0x15: Stack[-10] = Stack[-10] + Stack[-1]; Pop(1);
0x16: PushEmpty(int, string)
0x17: Stack[-1] = "pt_lmarauders" // @poff=46
0x18: Call2 0x23b

0x19: Pop(1)
0x1a: @ irand(Stack[-7], Stack[-1])
0x1b: Pop(1)
0x1c: Push((int) 0)
0x1d: @@ add(Stack[-1]); Obj=20 // @poff=74
0x1e: Pop(1)
0x1f: Push((int) 1)
0x20: Pop(1); Push(Stack[-7] + Stack[-1]);
0x21: @@ add(Stack[-1]); Obj=20 // @poff=74
0x22: Pop(1)
0x23: Push((int) 0)
0x24: @@ add(Stack[-1]); Obj=20 // @poff=74
0x25: Pop(1)
0x26: PushEmpty(int, string)
0x27: Stack[-1] = "pt_umarauders" // @poff=78
0x28: Call2 0x23b

0x29: Stack[-2] = Stack[-7]
0x2a: Pop(2)
0x2b: @ CreateIntVector(Stack[-4])
0x2c: Pop(0)
0x2d: @@ resize(Stack[-5]); Obj=4 // @poff=106
0x2e: Pop(0)
0x2f: Stack[-3] = (int) 0
0x30: Pop(0); Push((bool) Stack[-3] < Stack[-5])
0x31: IF (Stack[-1] == 0) GOTO 0x37; Pop(1)

0x32: @@ set(Stack[-3], Stack[-3]); Obj=4 // @poff=113
0x33: Pop(0)
0x34: Push((int) 1)
0x35: Stack[-4] = Stack[-4] + Stack[-1]; Pop(1);
0x36: GOTO 0x30

0x37: Stack[-2] = (int) 0
0x38: Pop(0); Push((bool) Stack[-2] < Stack[-9])
0x39: IF (Stack[-1] == 0) GOTO 0x4f; Pop(1)

0x3a: @ irand(Stack[-1], Stack[-5])
0x3b: Pop(0)
0x3c: @@ get(Stack[-6], Stack[-1]); Obj=4 // @poff=117
0x3d: Pop(0)
0x3e: Push((int) 1)
0x3f: @@ add(Stack[-1]); Obj=20 // @poff=74
0x40: Pop(1)
0x41: Push((int) 1)
0x42: Pop(1); Push(Stack[-7] + Stack[-1]);
0x43: @@ add(Stack[-1]); Obj=20 // @poff=74
0x44: Pop(1)
0x45: Push((int) 0)
0x46: @@ add(Stack[-1]); Obj=20 // @poff=74
0x47: Pop(1)
0x48: @@ remove(Stack[-1]); Obj=4 // @poff=121
0x49: Pop(0)
0x4a: Push((int) -1)
0x4b: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x4c: Push((int) 1)
0x4d: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x4e: GOTO 0x38

0x4f: Return(); Pop(18)

0x50: Stack[-4] = 0
0x51: PushEmpty()
0x52: Push((int) 0)
0x53: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x54: IF (Stack[-1] == 0) GOTO 0x59; Pop(1)

0x55: Push("pt_lmarauders") // @poff=46
0x56: Stack[-4] = Stack[-1] + Stack[-2]; Pop(1);
0x57: Return(); Pop(0)

0x58: GOTO 0x5f

0x59: Push((int) 1)
0x5a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5b: IF (Stack[-1] == 0) GOTO 0x5f; Pop(1)

0x5c: Push("pt_umarauders") // @poff=78
0x5d: Stack[-4] = Stack[-1] + Stack[-2]; Pop(1);
0x5e: Return(); Pop(0)

0x5f: Stack[-3] = "" // @poff=21
0x60: Return(); Pop(0)

0x61: PushEmpty()
0x62: Stack[-3] = "pers_hunter" // @poff=128
0x63: Return(); Pop(0)

0x64: PushEmpty()
0x65: Push((int) 0)
0x66: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x67: IF (Stack[-1] == 0) GOTO 0x6b; Pop(1)

0x68: Stack[-3] = "hunter.xml" // @poff=152
0x69: Return(); Pop(0)

0x6a: GOTO 0x70

0x6b: Push((int) 1)
0x6c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6d: IF (Stack[-1] == 0) GOTO 0x70; Pop(1)

0x6e: Stack[-3] = "hunter2.xml" // @poff=174
0x6f: Return(); Pop(0)

0x70: Stack[-3] = "" // @poff=21
0x71: Return(); Pop(0)

0x72: PushEmpty()
0x73: Call2 0x79

0x74: Pop(0)
0x75: PushEmpty()
0x76: Call2 0x19f

0x77: Pop(0)
0x78: Return(); Pop(0)

0x79: PushEmpty(bool, bool)
0x7a: Push("nailed") // @poff=198
0x7b: @ GetProperty(Stack[-1], Stack[-2])
0x7c: Pop(1)
0x7d: PushEmpty(bool)
0x7e: Stack[-2] = Stack[-1]
0x7f: Call2 0x8e

0x80: Pop(1)
0x81: PushEmpty(bool)
0x82: Stack[-2] = Stack[-1]
0x83: Call2 0xa1

0x84: Pop(1)
0x85: PushEmpty(bool)
0x86: Stack[-2] = Stack[-1]
0x87: Call2 0xb4

0x88: Pop(1)
0x89: PushEmpty(bool)
0x8a: Stack[-2] = Stack[-1]
0x8b: Call2 0xc7

0x8c: Pop(1)
0x8d: Return(); Pop(2)

0x8e: PushEmpty(int, bool, cvector, cvector, int, bool, cvector, cvector)
0x8f: Stack[-4] = (int) 1
0x90: Push("pt_item_food") // @poff=212
0x91: Pop(1); Push(Stack[-1] + Stack[-5]);
0x92: @ GetLocator(Stack[-1], Stack[-4], Stack[-3], Stack[-2])
0x93: Pop(1)
0x94: Pop(0); Push((bool) Stack[-3] == 0)
0x95: IF (Stack[-1] == 0) GOTO 0x97; Pop(1)

0x96: GOTO 0xa0

0x97: PushEmpty(cvector, cvector, bool)
0x98: Stack[-5] = Stack[-3]
0x99: Stack[-4] = Stack[-2]
0x9a: Stack[-12] = Stack[-1]
0x9b: Call2 0xda

0x9c: Pop(3)
0x9d: Push((int) 1)
0x9e: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x9f: GOTO 0x90

0xa0: Return(); Pop(8)

0xa1: PushEmpty(int, bool, cvector, cvector, int, bool, cvector, cvector)
0xa2: Stack[-4] = (int) 1
0xa3: Push("pt_item_pfood") // @poff=238
0xa4: Pop(1); Push(Stack[-1] + Stack[-5]);
0xa5: @ GetLocator(Stack[-1], Stack[-4], Stack[-3], Stack[-2])
0xa6: Pop(1)
0xa7: Pop(0); Push((bool) Stack[-3] == 0)
0xa8: IF (Stack[-1] == 0) GOTO 0xaa; Pop(1)

0xa9: GOTO 0xb3

0xaa: PushEmpty(cvector, cvector, bool)
0xab: Stack[-5] = Stack[-3]
0xac: Stack[-4] = Stack[-2]
0xad: Stack[-12] = Stack[-1]
0xae: Call2 0x115

0xaf: Pop(3)
0xb0: Push((int) 1)
0xb1: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0xb2: GOTO 0xa3

0xb3: Return(); Pop(8)

0xb4: PushEmpty(int, bool, cvector, cvector, int, bool, cvector, cvector)
0xb5: Stack[-4] = (int) 1
0xb6: Push("pt_item_knife") // @poff=266
0xb7: Pop(1); Push(Stack[-1] + Stack[-5]);
0xb8: @ GetLocator(Stack[-1], Stack[-4], Stack[-3], Stack[-2])
0xb9: Pop(1)
0xba: Pop(0); Push((bool) Stack[-3] == 0)
0xbb: IF (Stack[-1] == 0) GOTO 0xbd; Pop(1)

0xbc: GOTO 0xc6

0xbd: PushEmpty(cvector, cvector, bool)
0xbe: Stack[-5] = Stack[-3]
0xbf: Stack[-4] = Stack[-2]
0xc0: Stack[-12] = Stack[-1]
0xc1: Call2 0x168

0xc2: Pop(3)
0xc3: Push((int) 1)
0xc4: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0xc5: GOTO 0xb6

0xc6: Return(); Pop(8)

0xc7: PushEmpty(int, bool, cvector, cvector, int, bool, cvector, cvector)
0xc8: Stack[-4] = (int) 1
0xc9: Push("pt_item_bottle") // @poff=294
0xca: Pop(1); Push(Stack[-1] + Stack[-5]);
0xcb: @ GetLocator(Stack[-1], Stack[-4], Stack[-3], Stack[-2])
0xcc: Pop(1)
0xcd: Pop(0); Push((bool) Stack[-3] == 0)
0xce: IF (Stack[-1] == 0) GOTO 0xd0; Pop(1)

0xcf: GOTO 0xd9

0xd0: PushEmpty(cvector, cvector, bool)
0xd1: Stack[-5] = Stack[-3]
0xd2: Stack[-4] = Stack[-2]
0xd3: Stack[-12] = Stack[-1]
0xd4: Call2 0x17b

0xd5: Pop(3)
0xd6: Push((int) 1)
0xd7: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0xd8: GOTO 0xc9

0xd9: Return(); Pop(8)

0xda: PushEmpty(string, object, object, float, float, cvector, string, object, object, float, float, cvector)
0xdb: PushEmpty(bool, float)
0xdc: Push(Stack[-15])
0xdd: IF (Stack[-1] == 0) GOTO 0xe0; Pop(1)

0xde: Stack[-1] = (float) 0.05000000074505806
0xdf: GOTO 0xe1

0xe0: Stack[-1] = (float) 0.20000000298023224
0xe1: Call2 0x230

0xe2: Pop(1)
0xe3: IF (Stack[-1] == 0) GOTO 0xfc; Pop(1)

0xe4: Push((int) 5)
0xe5: Push((int) 5)
0xe6: Push((int) 3)
0xe7: Push((int) 2)
0xe8: Push((int) 3)
0xe9: Push("bread") // @poff=324
0xea: Push("bottle_water") // @poff=336
0xeb: Push("milk") // @poff=362
0xec: Push("vegetables") // @poff=372
0xed: Push("lemon") // @poff=394
0xee: @ RandOneOf(Stack[-16], Stack[-10], Stack[-9], Stack[-8], Stack[-7], Stack[-6], Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xef: Pop(10)
0xf0: Push("scripted_container") // @poff=406
0xf1: PushEmpty(object)
0xf2: Call2 0x22a

0xf3: Pop(0)
0xf4: Push("item_") // @poff=444
0xf5: Pop(1); Push(Stack[-1] + Stack[-9]);
0xf6: Push("_steal.xml") // @poff=456
0xf7: Pop(2); Push(Stack[-2] + Stack[-1]);
0xf8: @ AddActorByType(Stack[-8], Stack[-3], Stack[-2], Stack[-18], Stack[-17], Stack[-1])
0xf9: Pop(3)
0xfa: Stack[-5] = 0
0xfb: GOTO 0x114

0xfc: PushEmpty(bool, float)
0xfd: Stack[-1] = (float) 0.5
0xfe: Call2 0x230

0xff: Pop(1)
0x100: IF (Stack[-1] == 0) GOTO 0x114; Pop(1)

0x101: @ RandVec2D(Stack[-3], Stack[-2])
0x102: Pop(0)
0x103: Push(CvectorIndex(Stack[-1], 0))
0x104: Stack[-4] = Stack[-1]
0x105: CvectorIndex(Stack[-2], 0) = Stack[-1];
0x106: Push(CvectorIndex(Stack[-1], 1))
0x107: Stack[-1] = (int) 0
0x108: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x109: Push(CvectorIndex(Stack[-1], 2))
0x10a: Stack[-3] = Stack[-1]
0x10b: CvectorIndex(Stack[-2], 2) = Stack[-1];
0x10c: Push("scripted_container") // @poff=406
0x10d: PushEmpty(object)
0x10e: Call2 0x22a

0x10f: Pop(0)
0x110: Push("item_plate.xml") // @poff=478
0x111: @ AddActorByType(Stack[-7], Stack[-3], Stack[-2], Stack[-18], Stack[-4], Stack[-1])
0x112: Pop(3)
0x113: Stack[-4] = 0
0x114: Return(); Pop(12)

0x115: PushEmpty(string, object, float, float, cvector, object, float, float, cvector, string, object, float, float, cvector, object, float, float, cvector)
0x116: PushEmpty(bool, float)
0x117: Push(Stack[-21])
0x118: IF (Stack[-1] == 0) GOTO 0x11b; Pop(1)

0x119: Stack[-1] = (float) 0.05000000074505806
0x11a: GOTO 0x11c

0x11b: Stack[-1] = (float) 0.20000000298023224
0x11c: Call2 0x230

0x11d: Pop(1)
0x11e: IF (Stack[-1] == 0) GOTO 0x14f; Pop(1)

0x11f: Push((int) 8)
0x120: Push((int) 3)
0x121: Push((int) 3)
0x122: Push((int) 3)
0x123: Push((int) 2)
0x124: Push((int) 2)
0x125: Push((int) 1)
0x126: Push("rusk") // @poff=508
0x127: Push("dried_fish") // @poff=518
0x128: Push("dried_meat") // @poff=540
0x129: Push("smoked_meat") // @poff=562
0x12a: Push("fresh_fish") // @poff=586
0x12b: Push("fresh_meat") // @poff=608
0x12c: Push("tvirin") // @poff=630
0x12d: @ RandOneOf(Stack[-23], Stack[-14], Stack[-13], Stack[-12], Stack[-11], Stack[-10], Stack[-9], Stack[-8], Stack[-7], Stack[-6], Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x12e: Pop(14)
0x12f: @ RandVec2D(Stack[-7], Stack[-6])
0x130: Pop(0)
0x131: Push(CvectorIndex(Stack[-5], 0))
0x132: Stack[-8] = Stack[-1]
0x133: CvectorIndex(Stack[-6], 0) = Stack[-1];
0x134: Push(CvectorIndex(Stack[-5], 1))
0x135: Stack[-1] = (int) 0
0x136: CvectorIndex(Stack[-6], 1) = Stack[-1];
0x137: Push(CvectorIndex(Stack[-5], 2))
0x138: Stack[-7] = Stack[-1]
0x139: CvectorIndex(Stack[-6], 2) = Stack[-1];
0x13a: Push("scripted_container") // @poff=406
0x13b: PushEmpty(object)
0x13c: Call2 0x22a

0x13d: Pop(0)
0x13e: Push("item_plate.xml") // @poff=478
0x13f: @ AddActorByType(Stack[-11], Stack[-3], Stack[-2], Stack[-24], Stack[-8], Stack[-1])
0x140: Pop(3)
0x141: Push("scripted_container") // @poff=406
0x142: PushEmpty(object)
0x143: Call2 0x22a

0x144: Pop(0)
0x145: Push([0.0, 5.0, 0.0])
0x146: Pop(1); Push(Stack[-24] + Stack[-1]);
0x147: Push("item_") // @poff=444
0x148: Pop(1); Push(Stack[-1] + Stack[-13]);
0x149: Push("_steal.xml") // @poff=456
0x14a: Pop(2); Push(Stack[-2] + Stack[-1]);
0x14b: @ AddActorByType(Stack[-12], Stack[-4], Stack[-3], Stack[-2], Stack[-24], Stack[-1])
0x14c: Pop(4)
0x14d: Stack[-8] = 0
0x14e: GOTO 0x167

0x14f: PushEmpty(bool, float)
0x150: Stack[-1] = (float) 0.5
0x151: Call2 0x230

0x152: Pop(1)
0x153: IF (Stack[-1] == 0) GOTO 0x167; Pop(1)

0x154: @ RandVec2D(Stack[-3], Stack[-2])
0x155: Pop(0)
0x156: Push(CvectorIndex(Stack[-1], 0))
0x157: Stack[-4] = Stack[-1]
0x158: CvectorIndex(Stack[-2], 0) = Stack[-1];
0x159: Push(CvectorIndex(Stack[-1], 1))
0x15a: Stack[-1] = (int) 0
0x15b: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x15c: Push(CvectorIndex(Stack[-1], 2))
0x15d: Stack[-3] = Stack[-1]
0x15e: CvectorIndex(Stack[-2], 2) = Stack[-1];
0x15f: Push("scripted_container") // @poff=406
0x160: PushEmpty(object)
0x161: Call2 0x22a

0x162: Pop(0)
0x163: Push("item_plate.xml") // @poff=478
0x164: @ AddActorByType(Stack[-7], Stack[-3], Stack[-2], Stack[-24], Stack[-4], Stack[-1])
0x165: Pop(3)
0x166: Stack[-4] = 0
0x167: Return(); Pop(18)

0x168: PushEmpty(object, object)
0x169: PushEmpty(bool, float)
0x16a: Push(Stack[-5])
0x16b: IF (Stack[-1] == 0) GOTO 0x16e; Pop(1)

0x16c: Stack[-1] = (float) 0.05000000074505806
0x16d: GOTO 0x16f

0x16e: Stack[-1] = (float) 0.05000000074505806
0x16f: Call2 0x230

0x170: Pop(1)
0x171: IF (Stack[-1] == 0) GOTO 0x17a; Pop(1)

0x172: Push("scripted_container") // @poff=406
0x173: PushEmpty(object)
0x174: Call2 0x22a

0x175: Pop(0)
0x176: Push("item_knife_steal.xml") // @poff=644
0x177: @ AddActorByType(Stack[-4], Stack[-3], Stack[-2], Stack[-8], Stack[-7], Stack[-1])
0x178: Pop(3)
0x179: Stack[-1] = 0
0x17a: Return(); Pop(2)

0x17b: PushEmpty(string, object, string, object)
0x17c: PushEmpty(bool, float)
0x17d: Push(Stack[-7])
0x17e: IF (Stack[-1] == 0) GOTO 0x181; Pop(1)

0x17f: Stack[-1] = (float) 0.20000000298023224
0x180: GOTO 0x182

0x181: Stack[-1] = (float) 0.4000000059604645
0x182: Call2 0x230

0x183: Pop(1)
0x184: IF (Stack[-1] == 0) GOTO 0x19e; Pop(1)

0x185: Push((int) 10)
0x186: Push((int) 15)
0x187: Push((int) 3)
0x188: Push((int) 3)
0x189: Push((int) 3)
0x18a: Push((int) 1)
0x18b: Push("bottle_water") // @poff=336
0x18c: Push("bottle_empty") // @poff=686
0x18d: Push("vegetables") // @poff=372
0x18e: Push("milk") // @poff=362
0x18f: Push("egg") // @poff=712
0x190: Push("tvirin") // @poff=630
0x191: @ RandOneOf(Stack[-14], Stack[-12], Stack[-11], Stack[-10], Stack[-9], Stack[-8], Stack[-7], Stack[-6], Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x192: Pop(12)
0x193: Push("scripted_container") // @poff=406
0x194: PushEmpty(object)
0x195: Call2 0x22a

0x196: Pop(0)
0x197: Push("item_") // @poff=444
0x198: Pop(1); Push(Stack[-1] + Stack[-5]);
0x199: Push("_steal.xml") // @poff=456
0x19a: Pop(2); Push(Stack[-2] + Stack[-1]);
0x19b: @ AddActorByType(Stack[-4], Stack[-3], Stack[-2], Stack[-10], Stack[-9], Stack[-1])
0x19c: Pop(3)
0x19d: Stack[-1] = 0
0x19e: Return(); Pop(4)

0x19f: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == 0)
0x1a0: IF (Stack[-1] == 0) GOTO 0x1a5; Pop(1)

0x1a1: PushEmpty(object)
0x1a2: Call2 0x235

0x1a3: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x1a4: Pop(1)
0x1a5: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x1a6: IF (Stack[-1] == 0) GOTO 0x1a9; Pop(1)

0x1a7: @ CreateIntVector(Stack[-0]T)
0x1a8: Pop(0)
0x1a9: PushEmpty(object)
0x1aa: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1ab: Call2 0x0

0x1ac: Pop(1)
0x1ad: @ Hold()
0x1ae: Pop(0)
0x1af: GOTO 0x1ad

0x1b0: Return(); Pop(0)

0x1b1: PushEmpty(int, int, int, int, int, string, string, string, int, int, int, int, int, string, string, string)
0x1b2: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == 0)
0x1b3: IF (Stack[-1] == 0) GOTO 0x1b8; Pop(1)

0x1b4: PushEmpty(object)
0x1b5: Call2 0x235

0x1b6: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x1b7: Pop(1)
0x1b8: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x1b9: IF (Stack[-1] == 0) GOTO 0x1bc; Pop(1)

0x1ba: @ CreateIntVector(Stack[-0]T)
0x1bb: Pop(0)
0x1bc: PushEmpty(object)
0x1bd: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1be: Call2 0x25b

0x1bf: Pop(1)
0x1c0: @@@ size(Stack[-8]); Obj=0 // @poff=108
0x1c1: Pop(0)
0x1c2: Stack[-7] = (int) 0
0x1c3: Pop(0); Push((bool) Stack[-7] < Stack[-8])
0x1c4: IF (Stack[-1] == 0) GOTO 0x1f0; Pop(1)

0x1c5: @@@ get(Stack[-6], Stack[-7]); Obj=0 // @poff=117
0x1c6: Pop(0)
0x1c7: Push((int) 1)
0x1c8: Pop(1); Push(Stack[-8] + Stack[-1]);
0x1c9: @@@ get(Stack[-6], Stack[-1]); Obj=0 // @poff=117
0x1ca: Pop(1)
0x1cb: Push((int) 2)
0x1cc: Pop(1); Push(Stack[-8] + Stack[-1]);
0x1cd: @@@ get(Stack[-5], Stack[-1]); Obj=0 // @poff=117
0x1ce: Pop(1)
0x1cf: PushEmpty(string, int, int)
0x1d0: Stack[-9] = Stack[-2]
0x1d1: Stack[-8] = Stack[-1]
0x1d2: Call2 0x51

0x1d3: Stack[-3] = Stack[-6]
0x1d4: Pop(3)
0x1d5: PushEmpty(string, int, int)
0x1d6: Stack[-9] = Stack[-2]
0x1d7: Stack[-7] = Stack[-1]
0x1d8: Call2 0x61

0x1d9: Stack[-3] = Stack[-5]
0x1da: Pop(3)
0x1db: PushEmpty(string, int, int)
0x1dc: Stack[-9] = Stack[-2]
0x1dd: Stack[-7] = Stack[-1]
0x1de: Call2 0x64

0x1df: Stack[-3] = Stack[-4]
0x1e0: Pop(3)
0x1e1: PushEmpty(object, object, string, string, string)
0x1e2: PushEmpty(object)
0x1e3: Call2 0x22a

0x1e4: Stack[-1] = Stack[-5]
0x1e5: Pop(1)
0x1e6: Stack[-8] = Stack[-3]
0x1e7: Stack[-7] = Stack[-2]
0x1e8: Stack[-6] = Stack[-1]
0x1e9: Call2 0x249

0x1ea: Pop(4)
0x1eb: @@@ add(Stack[-1]); Obj=1 // @poff=74
0x1ec: Pop(1)
0x1ed: Push((int) 3)
0x1ee: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x1ef: GOTO 0x1c3

0x1f0: Return(); Pop(16)

0x1f1: PushEmpty(int, int, object, bool, int, int, object, bool)
0x1f2: @@@ size(Stack[-4]); Obj=1 // @poff=108
0x1f3: Pop(0)
0x1f4: Stack[-3] = (int) 0
0x1f5: Pop(0); Push((bool) Stack[-3] < Stack[-4])
0x1f6: IF (Stack[-1] == 0) GOTO 0x219; Pop(1)

0x1f7: @@@ get(Stack[-2], Stack[-3]); Obj=1 // @poff=117
0x1f8: Pop(0)
0x1f9: Pop(0); Push(( Stack[-2] != 0 )
0x1fa: IF (Stack[-1] == 0) GOTO 0x20b; Pop(1)

0x1fb: @@ IsDead(Stack[-1]); Obj=2 // @poff=720
0x1fc: Pop(0)
0x1fd: Pop(0); Push((bool) Stack[-1] == 0)
0x1fe: IF (Stack[-1] == 0) GOTO 0x209; Pop(1)

0x1ff: PushEmpty(bool, object, string)
0x200: Stack[-5] = Stack[-2]
0x201: Stack[-1] = "ToDie" // @poff=727
0x202: Call2 0x21e

0x203: Pop(2)
0x204: Pop(1); Push((bool) Stack[-1] == 0)
0x205: IF (Stack[-1] == 0) GOTO 0x209; Pop(1)

0x206: Push((int) 1)
0x207: Stack[-4] = Stack[-4] + Stack[-1]; Pop(1);
0x208: GOTO 0x218

0x209: @ RemoveActor(Stack[-2])
0x20a: Pop(0)
0x20b: @@@ remove(Stack[-3]); Obj=1 // @poff=121
0x20c: Pop(0)
0x20d: Push((int) 3)
0x20e: Pop(1); Push(Stack[-4] * Stack[-1]);
0x20f: Push((int) 1)
0x210: Pop(1); Push(Stack[-5] + Stack[-1]);
0x211: Push((int) 3)
0x212: Pop(2); Push(Stack[-2] * Stack[-1]);
0x213: @@@ remove(Stack[-2], Stack[-1]); Obj=0 // @poff=121
0x214: Pop(2)
0x215: Push((int) -1)
0x216: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x217: Stack[-2] = 0
0x218: GOTO 0x1f5

0x219: PushEmpty(object)
0x21a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x21b: Call2 0x25b

0x21c: Pop(1)
0x21d: Return(); Pop(8)

0x21e: PushEmpty(bool, bool)
0x21f: Push("HasProperty") // @poff=739
0x220: Push((int) 2)
0x221: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x222: Pop(1); Push((bool) Stack[-1] == 0)
0x223: IF (Stack[-1] == 0) GOTO 0x226; Pop(1)

0x224: Stack[-5] = (bool) 0
0x225: Return(); Pop(2)

0x226: @@ HasProperty(Stack[-3], Stack[-1]); Obj=4 // @poff=763
0x227: Pop(0)
0x228: Stack[-1] = Stack[-5]
0x229: Return(); Pop(2)

0x22a: PushEmpty(object, object)
0x22b: @ self(Stack[-1])
0x22c: Pop(0)
0x22d: Stack[-1] = Stack[-3]
0x22e: Return(); Pop(2)

0x22f: Stack[-1] = 0
0x230: PushEmpty(float, float)
0x231: @ rand(Stack[-1])
0x232: Pop(0)
0x233: Stack[-4] = Stack[-1] < Stack[-3]; Pop(0);
0x234: Return(); Pop(2)

0x235: PushEmpty(object, object)
0x236: @ CreateObjectVector(Stack[-1])
0x237: Pop(0)
0x238: Stack[-1] = Stack[-3]
0x239: Return(); Pop(2)

0x23a: Stack[-1] = 0
0x23b: PushEmpty(int, bool, int, bool)
0x23c: Stack[-2] = (int) 1
0x23d: Pop(0); Push(Stack[-5] + Stack[-2]);
0x23e: @ GetLocator(Stack[-1], Stack[-2])
0x23f: Pop(1)
0x240: Pop(0); Push((bool) Stack[-1] == 0)
0x241: IF (Stack[-1] == 0) GOTO 0x243; Pop(1)

0x242: GOTO 0x246

0x243: Push((int) 1)
0x244: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x245: GOTO 0x23d

0x246: Push((int) 1)
0x247: Stack[-7] = Stack[-3] - Stack[-1]; Pop(1);
0x248: Return(); Pop(4)

0x249: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x24a: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2]); Obj=12 // @poff=775
0x24b: Pop(0)
0x24c: Pop(0); Push((bool) Stack[-4] == 0)
0x24d: IF (Stack[-1] == 0) GOTO 0x256; Pop(1)

0x24e: Push("Locator ") // @poff=786
0x24f: Pop(1); Push(Stack[-1] + Stack[-12]);
0x250: Push(" doesn't exist") // @poff=804
0x251: Pop(2); Push(Stack[-2] + Stack[-1]);
0x252: @ Trace(Stack[-1])
0x253: Pop(1)
0x254: Stack[-1] = 0
0x255: GOTO 0x258

0x256: @ AddActor(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0x257: Pop(0)
0x258: Stack[-1] = Stack[-13]
0x259: Return(); Pop(8)

0x25a: Stack[-1] = 0
0x25b: PushEmpty(int, int, object, int, int, object)
0x25c: Push(Stack[-7])
0x25d: IF (Stack[-1] == 0) GOTO 0x26f; Pop(1)

0x25e: @@ size(Stack[-3]); Obj=7 // @poff=108
0x25f: Pop(0)
0x260: Stack[-2] = (int) 0
0x261: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0x262: IF (Stack[-1] == 0) GOTO 0x26d; Pop(1)

0x263: @@ get(Stack[-1], Stack[-2]); Obj=7 // @poff=117
0x264: Pop(0)
0x265: Push(Stack[-1])
0x266: IF (Stack[-1] == 0) GOTO 0x269; Pop(1)

0x267: @ RemoveActor(Stack[-1])
0x268: Pop(0)
0x269: Stack[-1] = 0
0x26a: Push((int) 1)
0x26b: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x26c: GOTO 0x261

0x26d: @@ clear(); Obj=7 // @poff=834
0x26e: Pop(0)
0x26f: Return(); Pop(6)

