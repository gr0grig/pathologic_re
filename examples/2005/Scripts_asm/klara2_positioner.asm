GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	A:add
	W:sleep_end
	W:remove_klara
	W:klara_stay
	W:cleanup
	A:set
	A:get
	W:Klara scene: 
	W:pt_klara
	W:NPC_Klara
	W:k2system_klara2.xml
	W:day
	A:SetProperty
	W:ERROR: Klara2 scene was not found: 
	A:GetLocator
	W:Locator 
	W: doesn't exist
	W:Can't retrieve diary root
	A:Find
	W:Can't find diary parent with id: 
	A:AddChild
	A:GetCategory
	W:K2System
	W:lc_House6_04
	W:r2_house3_03
	W:house1_se_04r
	W:r7_house3_02_i2
	W:house5_15
	W:r5_house2_01
	W:k2system_klara_day
// @pool_raw:6164640073006c006500650070005f0065006e0064000000720065006d006f00760065005f006b006c0061007200610000006b006c006100720061005f007300740061007900000063006c00650061006e0075007000000073657400676574004b006c0061007200610020007300630065006e0065003a0020000000700074005f006b006c0061007200610000004e00500043005f004b006c0061007200610000006b003200730079007300740065006d005f006b006c0061007200610032002e0078006d006c000000640061007900000053657450726f7065727479004500520052004f0052003a0020004b006c00610072006100320020007300630065006e006500200077006100730020006e006f007400200066006f0075006e0064003a00200000004765744c6f6361746f72004c006f006300610074006f00720020000000200064006f00650073006e00270074002000650078006900730074000000430061006e0027007400200072006500740072006900650076006500200064006900610072007900200072006f006f007400000046696e6400430061006e00270074002000660069006e006400200064006900610072007900200070006100720065006e007400200077006900740068002000690064003a00200000004164644368696c640047657443617465676f7279004b003200530079007300740065006d0000006c0063005f0048006f0075007300650036005f00300034000000720032005f0068006f0075007300650033005f0030003300000068006f0075007300650031005f00730065005f003000340072000000720037005f0068006f0075007300650033005f00300032005f0069003200000068006f0075007300650035005f00310035000000720035005f0068006f0075007300650032005f003000310000006b003200730079007300740065006d005f006b006c006100720061005f006400610079000000
// @pool_encoding:utf8

Import:
	CreateBoolVector (1 args)
	Hold (0 args)
	Trace (1 args)
	Trigger (2 args)
	RemoveActor (1 args)
	GetSceneByName (2 args)
	AddActor (6 args)
	GetGameTime (1 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)
	AddMessage (4 args)
	SetVariable (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (int, object, object, object) Params = 0
		EVENT_26 Op = 0x29 Vars = (string)


0x0: PushEmpty(int, int)
0x1: Stack[0 + Tasks[-1].StackPointer] = (int)-1
0x2: @ CreateBoolVector(Stack[-2]T)
0x3: Pop(0)
0x4: @ CreateBoolVector(Stack[-3]T)
0x5: Pop(0)
0x6: Stack[-1] = (int) 0
0x7: Push((int) 12)
0x8: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x9: IF (Stack[-1] == 0) GOTO 0x25; Pop(1)

0xa: Push((bool) 0)
0xb: @@@ add(Stack[-1]); Obj=2 // @poff=0
0xc: Pop(1)
0xd: PushEmpty(bool)
0xe: Stack[-1] = (bool) 1
0xf: Push((int) 1)
0x10: Pop(1); Push(Stack[-3] + Stack[-1]);
0x11: Push((int) 6)
0x12: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x13: IF (Stack[-1] == 1) GOTO 0x1a; Pop(1)

0x14: Push((int) 1)
0x15: Pop(1); Push(Stack[-3] + Stack[-1]);
0x16: Push((int) 12)
0x17: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x18: IF (Stack[-1] == 1) GOTO 0x1a; Pop(1)

0x19: Stack[-1] = (bool) 0
0x1a: IF (Stack[-1] == 0) GOTO 0x1f; Pop(1)

0x1b: Push((bool) 0)
0x1c: @@@ add(Stack[-1]); Obj=3 // @poff=0
0x1d: Pop(1)
0x1e: GOTO 0x22

0x1f: Push((bool) 1)
0x20: @@@ add(Stack[-1]); Obj=3 // @poff=0
0x21: Pop(1)
0x22: Push((int) 1)
0x23: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x24: GOTO 0x7

0x25: @ Hold()
0x26: Pop(0)
0x27: GOTO 0x25

0x28: Return(); Pop(2)

0x29: PushEmpty()
0x2a: @ Trace(Stack[-1])
0x2b: Pop(0)
0x2c: Push("sleep_end") // @poff=4
0x2d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2e: IF (Stack[-1] == 0) GOTO 0x42; Pop(1)

0x2f: PushEmpty(int)
0x30: PushEmpty(int)
0x31: Call2 0xcd

0x32: Stack[-1] = Stack[-2]
0x33: Pop(1)
0x34: Call2 0x61

0x35: Pop(1)
0x36: PushEmpty(int, float)
0x37: PushEmpty(int)
0x38: Call2 0xcd

0x39: Stack[-1] = Stack[-3]
0x3a: Pop(1)
0x3b: PushEmpty(float)
0x3c: Call2 0xc8

0x3d: Stack[-1] = Stack[-2]
0x3e: Pop(1)
0x3f: Call2 0x92

0x40: Pop(2)
0x41: GOTO 0x52

0x42: Push("remove_klara") // @poff=24
0x43: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x44: IF (Stack[-1] == 0) GOTO 0x4c; Pop(1)

0x45: PushEmpty()
0x46: Call2 0x53

0x47: Pop(0)
0x48: PushEmpty()
0x49: Call2 0x126

0x4a: Pop(0)
0x4b: GOTO 0x52

0x4c: Push("klara_stay") // @poff=50
0x4d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4e: IF (Stack[-1] == 0) GOTO 0x52; Pop(1)

0x4f: PushEmpty()
0x50: Call2 0x133

0x51: Pop(0)
0x52: Return(); Pop(0)

0x53: Push( Stack[1 + Tasks[-1].StackPointer] )
0x54: IF (Stack[-1] == 0) GOTO 0x58; Pop(1)

0x55: Push("cleanup") // @poff=72
0x56: @ Trigger(Stack[-1]T, Stack[-1])
0x57: Pop(1)
0x58: Push((int) 1)
0x59: Pop(1); Push(Stack[0 + Tasks[-1].StackPointer] - Stack[-1]);
0x5a: Push((bool) 0)
0x5b: @@@ set(Stack[-2], Stack[-1]); Obj=3 // @poff=88
0x5c: Pop(2)
0x5d: PushEmpty()
0x5e: Call2 0xa5

0x5f: Pop(0)
0x60: Return(); Pop(0)

0x61: PushEmpty(bool, object, string, bool, object, string)
0x62: Push( Stack[1 + Tasks[-1].StackPointer] )
0x63: IF (Stack[-1] == 0) GOTO 0x66; Pop(1)

0x64: @ RemoveActor(Stack[-1]T)
0x65: Pop(0)
0x66: Push((int) 1)
0x67: Pop(1); Push(Stack[-8] - Stack[-1]);
0x68: @@@ get(Stack[-4], Stack[-1]); Obj=3 // @poff=92
0x69: Pop(1)
0x6a: Pop(0); Push((bool) Stack[-3] == 0)
0x6b: IF (Stack[-1] == 0) GOTO 0x6d; Pop(1)

0x6c: Return(); Pop(6)

0x6d: PushEmpty(string, int)
0x6e: Stack[-9] = Stack[-1]
0x6f: Call2 0x17c

0x70: Stack[-2] = Stack[-3]
0x71: Pop(2)
0x72: Push("Klara scene: ") // @poff=96
0x73: Pop(1); Push(Stack[-1] + Stack[-2]);
0x74: @ Trace(Stack[-1])
0x75: Pop(1)
0x76: @ GetSceneByName(Stack[-2], Stack[-1])
0x77: Pop(0)
0x78: Push(Stack[-2])
0x79: IF (Stack[-1] == 0) GOTO 0x8c; Pop(1)

0x7a: PushEmpty(object, object, string, string, string)
0x7b: Stack[-7] = Stack[-4]
0x7c: Push("pt_klara") // @poff=124
0x7d: Stack[-4] = Stack[-1] + Stack[-13]; Pop(1);
0x7e: Stack[-2] = "NPC_Klara" // @poff=142
0x7f: Stack[-1] = "k2system_klara2.xml" // @poff=162
0x80: Call2 0xb6

0x81: Stack[1 + Tasks[-1].StackPointer] = Stack[-5]
0x82: Pop(5)
0x83: Push("day") // @poff=202
0x84: @@@ SetProperty(Stack[-1], Stack[-8]); Obj=1 // @poff=210
0x85: Pop(1)
0x86: PushEmpty(int)
0x87: Stack[-8] = Stack[-1]
0x88: Call2 0x1f7

0x89: Pop(1)
0x8a: Stack[0 + Tasks[-1].StackPointer] = Stack[-7]
0x8b: GOTO 0x90

0x8c: Push("ERROR: Klara2 scene was not found: ") // @poff=222
0x8d: Pop(1); Push(Stack[-1] + Stack[-2]);
0x8e: @ Trace(Stack[-1])
0x8f: Pop(1)
0x90: Return(); Pop(6)

0x91: Stack[-2] = 0
0x92: PushEmpty(bool, bool)
0x93: Push((int) 1)
0x94: Pop(1); Push(Stack[-5] - Stack[-1]);
0x95: @@@ get(Stack[-2], Stack[-1]); Obj=2 // @poff=92
0x96: Pop(1)
0x97: Push(Stack[-1])
0x98: IF (Stack[-1] == 0) GOTO 0x9a; Pop(1)

0x99: Return(); Pop(2)

0x9a: Push((int) 1)
0x9b: Pop(1); Push(Stack[-5] - Stack[-1]);
0x9c: Push((bool) 1)
0x9d: @@@ set(Stack[-2], Stack[-1]); Obj=2 // @poff=88
0x9e: Pop(2)
0x9f: PushEmpty(int, float)
0xa0: Stack[-6] = Stack[-2]
0xa1: Stack[-5] = Stack[-1]
0xa2: Call2 0x1a2

0xa3: Pop(2)
0xa4: Return(); Pop(2)

0xa5: PushEmpty(int, bool, int, bool)
0xa6: Stack[-2] = (int) 0
0xa7: Push((int) 12)
0xa8: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0xa9: IF (Stack[-1] == 0) GOTO 0xb5; Pop(1)

0xaa: @@@ get(Stack[-1], Stack[-2]); Obj=3 // @poff=92
0xab: Pop(0)
0xac: PushEmpty(int, bool)
0xad: Push((int) 1)
0xae: Stack[-3] = Stack[-5] + Stack[-1]; Pop(1);
0xaf: Stack[-3] = Stack[-1]
0xb0: Call2 0x171

0xb1: Pop(2)
0xb2: Push((int) 1)
0xb3: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0xb4: GOTO 0xa7

0xb5: Return(); Pop(4)

0xb6: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0xb7: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2]); Obj=12 // @poff=294
0xb8: Pop(0)
0xb9: Pop(0); Push((bool) Stack[-4] == 0)
0xba: IF (Stack[-1] == 0) GOTO 0xc3; Pop(1)

0xbb: Push("Locator ") // @poff=305
0xbc: Pop(1); Push(Stack[-1] + Stack[-12]);
0xbd: Push(" doesn't exist") // @poff=323
0xbe: Pop(2); Push(Stack[-2] + Stack[-1]);
0xbf: @ Trace(Stack[-1])
0xc0: Pop(1)
0xc1: Stack[-1] = 0
0xc2: GOTO 0xc5

0xc3: @ AddActor(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0xc4: Pop(0)
0xc5: Stack[-1] = Stack[-13]
0xc6: Return(); Pop(8)

0xc7: Stack[-1] = 0
0xc8: PushEmpty(float, float)
0xc9: @ GetGameTime(Stack[-1])
0xca: Pop(0)
0xcb: Stack[-1] = Stack[-3]
0xcc: Return(); Pop(2)

0xcd: PushEmpty(float, float)
0xce: @ GetGameTime(Stack[-1])
0xcf: Pop(0)
0xd0: Push((int) 1)
0xd1: PushEmpty(int)
0xd2: Push((int) 24)
0xd3: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0xd4: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0xd5: Return(); Pop(2)

0xd6: PushEmpty()
0xd7: PushEmpty(int, int, int, float)
0xd8: Stack[-3] = (int) 538512
0xd9: Stack[-2] = (int) 538511
0xda: Stack[-5] = Stack[-1]
0xdb: Call2 0x169

0xdc: Stack[-4] = Stack[-6]
0xdd: Pop(4)
0xde: Return(); Pop(0)

0xdf: PushEmpty()
0xe0: PushEmpty(int, int, int, float)
0xe1: Stack[-3] = (int) 538514
0xe2: Stack[-2] = (int) 538513
0xe3: Stack[-5] = Stack[-1]
0xe4: Call2 0x169

0xe5: Stack[-4] = Stack[-6]
0xe6: Pop(4)
0xe7: Return(); Pop(0)

0xe8: PushEmpty()
0xe9: PushEmpty(int, int, int, float)
0xea: Stack[-3] = (int) 538504
0xeb: Stack[-2] = (int) 538503
0xec: Stack[-5] = Stack[-1]
0xed: Call2 0x169

0xee: Stack[-4] = Stack[-6]
0xef: Pop(4)
0xf0: Return(); Pop(0)

0xf1: PushEmpty()
0xf2: PushEmpty(int, int, int, float)
0xf3: Stack[-3] = (int) 538506
0xf4: Stack[-2] = (int) 538505
0xf5: Stack[-5] = Stack[-1]
0xf6: Call2 0x169

0xf7: Stack[-4] = Stack[-6]
0xf8: Pop(4)
0xf9: Return(); Pop(0)

0xfa: PushEmpty()
0xfb: PushEmpty(int, int, int, float)
0xfc: Stack[-3] = (int) 538508
0xfd: Stack[-2] = (int) 538507
0xfe: Stack[-5] = Stack[-1]
0xff: Call2 0x169

0x100: Stack[-4] = Stack[-6]
0x101: Pop(4)
0x102: Return(); Pop(0)

0x103: PushEmpty()
0x104: PushEmpty(int, int, int, float)
0x105: Stack[-3] = (int) 538510
0x106: Stack[-2] = (int) 538509
0x107: Stack[-5] = Stack[-1]
0x108: Call2 0x169

0x109: Stack[-4] = Stack[-6]
0x10a: Pop(4)
0x10b: Return(); Pop(0)

0x10c: PushEmpty(object, object)
0x10d: Push((int) 723)
0x10e: Push((int) 1)
0x10f: Push((int) 539102)
0x110: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x111: Pop(3)
0x112: PushEmpty(bool, object, int)
0x113: Stack[-4] = Stack[-2]
0x114: Stack[-1] = (int) -1
0x115: Call2 0x14d

0x116: Pop(3)
0x117: Return(); Pop(2)

0x118: Stack[-1] = 0
0x119: PushEmpty(object, object)
0x11a: Push((int) 724)
0x11b: Push((int) 1)
0x11c: Push((int) 539103)
0x11d: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x11e: Pop(3)
0x11f: PushEmpty(bool, object, int)
0x120: Stack[-4] = Stack[-2]
0x121: Stack[-1] = (int) 723
0x122: Call2 0x14d

0x123: Pop(3)
0x124: Return(); Pop(2)

0x125: Stack[-1] = 0
0x126: PushEmpty(object, object)
0x127: Push((int) 725)
0x128: Push((int) 1)
0x129: Push((int) 539104)
0x12a: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x12b: Pop(3)
0x12c: PushEmpty(bool, object, int)
0x12d: Stack[-4] = Stack[-2]
0x12e: Stack[-1] = (int) 723
0x12f: Call2 0x14d

0x130: Pop(3)
0x131: Return(); Pop(2)

0x132: Stack[-1] = 0
0x133: PushEmpty(object, object)
0x134: Push((int) 726)
0x135: Push((int) 1)
0x136: Push((int) 539105)
0x137: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x138: Pop(3)
0x139: PushEmpty(bool, object, int)
0x13a: Stack[-4] = Stack[-2]
0x13b: Stack[-1] = (int) 723
0x13c: Call2 0x14d

0x13d: Pop(3)
0x13e: Return(); Pop(2)

0x13f: Stack[-1] = 0
0x140: PushEmpty(object, object)
0x141: @ GetDiaryRoot(Stack[-1])
0x142: Pop(0)
0x143: Pop(0); Push((bool) Stack[-1] == 0)
0x144: IF (Stack[-1] == 0) GOTO 0x14a; Pop(1)

0x145: Push("Can't retrieve diary root") // @poff=353
0x146: @ Trace(Stack[-1])
0x147: Pop(1)
0x148: Stack[-3] = (bool) 0
0x149: Return(); Pop(2)

0x14a: Stack[-1] = Stack[-3]
0x14b: Return(); Pop(2)

0x14c: Stack[-1] = 0
0x14d: PushEmpty(object, object, int, object, object, int)
0x14e: PushEmpty(object)
0x14f: Call2 0x140

0x150: Stack[-1] = Stack[-4]
0x151: Pop(1)
0x152: @@ Find(Stack[-7], Stack[-2]); Obj=3 // @poff=405
0x153: Pop(0)
0x154: Pop(0); Push((bool) Stack[-2] == 0)
0x155: IF (Stack[-1] == 0) GOTO 0x15c; Pop(1)

0x156: Push("Can't find diary parent with id: ") // @poff=410
0x157: Pop(1); Push(Stack[-1] + Stack[-8]);
0x158: @ Trace(Stack[-1])
0x159: Pop(1)
0x15a: Stack[-9] = (bool) 0
0x15b: Return(); Pop(6)

0x15c: @@ AddChild(Stack[-8]); Obj=2 // @poff=478
0x15d: Pop(0)
0x15e: Push((int) 7)
0x15f: @ SendWorldWndMessage(Stack[-1])
0x160: Pop(1)
0x161: @@ GetCategory(Stack[-1]); Obj=8 // @poff=487
0x162: Pop(0)
0x163: @ SetDiarySection(Stack[-1])
0x164: Pop(0)
0x165: Stack[-9] = (bool) 0
0x166: Return(); Pop(6)

0x167: Stack[-2] = 0
0x168: Stack[-3] = 0
0x169: PushEmpty(int, int)
0x16a: @ AddMessage(Stack[-5], Stack[-4], Stack[-3], Stack[-1])
0x16b: Pop(0)
0x16c: Push((int) 6)
0x16d: @ SendWorldWndMessage(Stack[-1])
0x16e: Pop(1)
0x16f: Stack[-1] = Stack[-6]
0x170: Return(); Pop(2)

0x171: PushEmpty()
0x172: Push("K2System") // @poff=499
0x173: Pop(1); Push(Stack[-1] + Stack[-3]);
0x174: Push(Stack[-2])
0x175: IF (Stack[-1] == 0) GOTO 0x178; Pop(1)

0x176: Push((int) 1)
0x177: GOTO 0x179

0x178: Push((int) 0)
0x179: @ SetVariable(Stack[-2], Stack[-1])
0x17a: Pop(2)
0x17b: Return(); Pop(0)

0x17c: PushEmpty()
0x17d: Push((int) 6)
0x17e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x17f: IF (Stack[-1] == 0) GOTO 0x183; Pop(1)

0x180: Stack[-2] = "lc_House6_04" // @poff=517
0x181: Return(); Pop(0)

0x182: GOTO 0x1a0

0x183: Push((int) 7)
0x184: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x185: IF (Stack[-1] == 0) GOTO 0x189; Pop(1)

0x186: Stack[-2] = "r2_house3_03" // @poff=543
0x187: Return(); Pop(0)

0x188: GOTO 0x1a0

0x189: Push((int) 8)
0x18a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x18b: IF (Stack[-1] == 0) GOTO 0x18f; Pop(1)

0x18c: Stack[-2] = "house1_se_04r" // @poff=569
0x18d: Return(); Pop(0)

0x18e: GOTO 0x1a0

0x18f: Push((int) 9)
0x190: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x191: IF (Stack[-1] == 0) GOTO 0x195; Pop(1)

0x192: Stack[-2] = "r7_house3_02_i2" // @poff=597
0x193: Return(); Pop(0)

0x194: GOTO 0x1a0

0x195: Push((int) 10)
0x196: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x197: IF (Stack[-1] == 0) GOTO 0x19b; Pop(1)

0x198: Stack[-2] = "house5_15" // @poff=629
0x199: Return(); Pop(0)

0x19a: GOTO 0x1a0

0x19b: Push((int) 11)
0x19c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x19d: IF (Stack[-1] == 0) GOTO 0x1a0; Pop(1)

0x19e: Stack[-2] = "r5_house2_01" // @poff=649
0x19f: Return(); Pop(0)

0x1a0: Stack[-2] = "" // @poff=21
0x1a1: Return(); Pop(0)

0x1a2: PushEmpty()
0x1a3: Push((int) 6)
0x1a4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1a5: IF (Stack[-1] == 0) GOTO 0x1b1; Pop(1)

0x1a6: PushEmpty(int, float)
0x1a7: Stack[-3] = Stack[-1]
0x1a8: Call2 0xe8

0x1a9: Pop(2)
0x1aa: PushEmpty()
0x1ab: Call2 0x10c

0x1ac: Pop(0)
0x1ad: PushEmpty()
0x1ae: Call2 0x119

0x1af: Pop(0)
0x1b0: GOTO 0x1f6

0x1b1: Push((int) 7)
0x1b2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1b3: IF (Stack[-1] == 0) GOTO 0x1bf; Pop(1)

0x1b4: PushEmpty(int, float)
0x1b5: Stack[-3] = Stack[-1]
0x1b6: Call2 0xf1

0x1b7: Pop(2)
0x1b8: PushEmpty()
0x1b9: Call2 0x10c

0x1ba: Pop(0)
0x1bb: PushEmpty()
0x1bc: Call2 0x119

0x1bd: Pop(0)
0x1be: GOTO 0x1f6

0x1bf: Push((int) 8)
0x1c0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1c1: IF (Stack[-1] == 0) GOTO 0x1cd; Pop(1)

0x1c2: PushEmpty(int, float)
0x1c3: Stack[-3] = Stack[-1]
0x1c4: Call2 0xfa

0x1c5: Pop(2)
0x1c6: PushEmpty()
0x1c7: Call2 0x10c

0x1c8: Pop(0)
0x1c9: PushEmpty()
0x1ca: Call2 0x119

0x1cb: Pop(0)
0x1cc: GOTO 0x1f6

0x1cd: Push((int) 9)
0x1ce: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1cf: IF (Stack[-1] == 0) GOTO 0x1db; Pop(1)

0x1d0: PushEmpty(int, float)
0x1d1: Stack[-3] = Stack[-1]
0x1d2: Call2 0x103

0x1d3: Pop(2)
0x1d4: PushEmpty()
0x1d5: Call2 0x10c

0x1d6: Pop(0)
0x1d7: PushEmpty()
0x1d8: Call2 0x119

0x1d9: Pop(0)
0x1da: GOTO 0x1f6

0x1db: Push((int) 10)
0x1dc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1dd: IF (Stack[-1] == 0) GOTO 0x1e9; Pop(1)

0x1de: PushEmpty(int, float)
0x1df: Stack[-3] = Stack[-1]
0x1e0: Call2 0xd6

0x1e1: Pop(2)
0x1e2: PushEmpty()
0x1e3: Call2 0x10c

0x1e4: Pop(0)
0x1e5: PushEmpty()
0x1e6: Call2 0x119

0x1e7: Pop(0)
0x1e8: GOTO 0x1f6

0x1e9: Push((int) 11)
0x1ea: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1eb: IF (Stack[-1] == 0) GOTO 0x1f6; Pop(1)

0x1ec: PushEmpty(int, float)
0x1ed: Stack[-3] = Stack[-1]
0x1ee: Call2 0xdf

0x1ef: Pop(2)
0x1f0: PushEmpty()
0x1f1: Call2 0x10c

0x1f2: Pop(0)
0x1f3: PushEmpty()
0x1f4: Call2 0x119

0x1f5: Pop(0)
0x1f6: Return(); Pop(0)

0x1f7: PushEmpty()
0x1f8: Push("k2system_klara_day") // @poff=675
0x1f9: @ SetVariable(Stack[-1], Stack[-2])
0x1fa: Pop(1)
0x1fb: Return(); Pop(0)

