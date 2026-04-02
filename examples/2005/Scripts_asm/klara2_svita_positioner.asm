GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	W:place_svita
	W:wonder
	W:lightning
	W:bad_wonder
	W:pt_k2system
	W:_albinos
	W:pers_rat
	W:k2system_rat.xml
	W:_patrol
	W:pers_rat_big
	W:k2system_rat_big.xml
	W:_nude
	W:_dohodyaga1
	W:_dohodyaga2
	W:pers_albinos
	W:_albinos.xml
	A:add
	W:pers_patrool
	W:_patrol.xml
	W:pers_nudegirl
	W:_nude.xml
	W:pers_dohodyaga
	W:_dohodyaga1.xml
	W:_dohodyaga2.xml
	A:clear
	A:GetLocator
	W:Locator 
	W: doesn't exist
	A:AddStationaryActor
	A:size
	A:get
	A:Remove
	A:GetActor
	W:Can't retrieve diary root
	A:Find
	W:Can't find diary parent with id: 
	A:AddChild
	A:GetCategory
	W:K2SystemSvitaRemoved
// @pool_raw:70006c006100630065005f0073007600690074006100000077006f006e0064006500720000006c0069006700680074006e0069006e00670000006200610064005f0077006f006e006400650072000000700074005f006b003200730079007300740065006d0000005f0061006c00620069006e006f007300000070006500720073005f0072006100740000006b003200730079007300740065006d005f007200610074002e0078006d006c0000005f0070006100740072006f006c00000070006500720073005f007200610074005f0062006900670000006b003200730079007300740065006d005f007200610074005f006200690067002e0078006d006c0000005f006e0075006400650000005f0064006f0068006f0064007900610067006100310000005f0064006f0068006f00640079006100670061003200000070006500720073005f0061006c00620069006e006f00730000005f0061006c00620069006e006f0073002e0078006d006c0000006164640070006500720073005f0070006100740072006f006f006c0000005f0070006100740072006f006c002e0078006d006c00000070006500720073005f006e007500640065006700690072006c0000005f006e007500640065002e0078006d006c00000070006500720073005f0064006f0068006f006400790061006700610000005f0064006f0068006f006400790061006700610031002e0078006d006c0000005f0064006f0068006f006400790061006700610032002e0078006d006c000000636c656172004765744c6f6361746f72004c006f006300610074006f00720020000000200064006f00650073006e0027007400200065007800690073007400000041646453746174696f6e6172794163746f720073697a65006765740052656d6f7665004765744163746f7200430061006e0027007400200072006500740072006900650076006500200064006900610072007900200072006f006f007400000046696e6400430061006e00270074002000660069006e006400200064006900610072007900200070006100720065006e007400200077006900740068002000690064003a00200000004164644368696c640047657443617465676f7279004b003200530079007300740065006d0053007600690074006100520065006d006f007600650064000000

Import:
	SetTimeEvent (2 args)
	CreateObjectVector (1 args)
	Hold (0 args)
	Trace (1 args)
	TriggerWorld (1 args)
	GetMainOutdoorScene (1 args)
	rand (1 args)
	AddActor (6 args)
	Trigger (2 args)
	GetGameTime (1 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)
	SetVariable (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object, int) Params = 0
		EVENT_26 Op = 0x17 Vars = (string)
		EVENT_9 Op = 0x91 Vars = (int, float)


0x0: PushEmpty(int, int)
0x1: Stack[1 + Tasks[-1].StackPointer] = (int)-1
0x2: Stack[-1] = (int) 0
0x3: Push((int) 6)
0x4: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x5: IF (Stack[-1] == 0) GOTO 0x11; Pop(1)

0x6: Push((int) 6)
0x7: Pop(1); Push(Stack[-1] + Stack[-2]);
0x8: Push((int) 6)
0x9: Pop(1); Push(Stack[-3] + Stack[-1]);
0xa: Push((int) 24)
0xb: Pop(2); Push(Stack[-2] * Stack[-1]);
0xc: @ SetTimeEvent(Stack[-2], Stack[-1])
0xd: Pop(2)
0xe: Push((int) 1)
0xf: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x10: GOTO 0x3

0x11: @ CreateObjectVector(Stack[-0]T)
0x12: Pop(0)
0x13: @ Hold()
0x14: Pop(0)
0x15: GOTO 0x13

0x16: Return(); Pop(2)

0x17: PushEmpty(int, object, int, object)
0x18: @ Trace(Stack[-5])
0x19: Pop(0)
0x1a: Push("place_svita") // @poff=0
0x1b: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x1c: IF (Stack[-1] == 0) GOTO 0x25; Pop(1)

0x1d: PushEmpty(int)
0x1e: PushEmpty(int)
0x1f: Call2 0x14f

0x20: Stack[-1] = Stack[-2]
0x21: Pop(1)
0x22: Call2 0x98

0x23: Pop(1)
0x24: GOTO 0x90

0x25: Push("wonder") // @poff=24
0x26: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x27: IF (Stack[-1] == 0) GOTO 0x3d; Pop(1)

0x28: Push("lightning") // @poff=38
0x29: @ TriggerWorld(Stack[-1])
0x2a: Pop(1)
0x2b: PushEmpty()
0x2c: Call2 0xec

0x2d: Pop(0)
0x2e: PushEmpty()
0x2f: Call2 0xf2

0x30: Pop(0)
0x31: Push((int) -1)
0x32: Pop(1); Push((bool) Stack[1 + Tasks[-1].StackPointer] != Stack[-1])
0x33: IF (Stack[-1] == 0) GOTO 0x3c; Pop(1)

0x34: PushEmpty(int, bool)
0x35: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x36: Stack[-1] = (bool) 1
0x37: Call2 0x19b

0x38: Pop(2)
0x39: PushEmpty()
0x3a: Call2 0x158

0x3b: Pop(0)
0x3c: GOTO 0x90

0x3d: Push("bad_wonder") // @poff=58
0x3e: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x3f: IF (Stack[-1] == 0) GOTO 0x90; Pop(1)

0x40: PushEmpty(int)
0x41: Call2 0x14f

0x42: Stack[-1] = Stack[-3]
0x43: Pop(1)
0x44: @ GetMainOutdoorScene(Stack[-1])
0x45: Pop(0)
0x46: PushEmpty(object, object, string, string, string)
0x47: Stack[-6] = Stack[-4]
0x48: Push("pt_k2system") // @poff=80
0x49: Pop(1); Push(Stack[-1] + Stack[-8]);
0x4a: Push("_albinos") // @poff=104
0x4b: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x4c: Stack[-2] = "pers_rat" // @poff=122
0x4d: Stack[-1] = "k2system_rat.xml" // @poff=140
0x4e: Call2 0xfe

0x4f: Pop(5)
0x50: PushEmpty(bool, float)
0x51: Stack[-1] = (float) 0.5
0x52: Call2 0xf9

0x53: Pop(1)
0x54: IF (Stack[-1] == 0) GOTO 0x5f; Pop(1)

0x55: PushEmpty(object, object, string, string, string)
0x56: Stack[-6] = Stack[-4]
0x57: Push("pt_k2system") // @poff=80
0x58: Pop(1); Push(Stack[-1] + Stack[-8]);
0x59: Push("_patrol") // @poff=174
0x5a: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x5b: Stack[-2] = "pers_rat_big" // @poff=190
0x5c: Stack[-1] = "k2system_rat_big.xml" // @poff=216
0x5d: Call2 0xfe

0x5e: Pop(5)
0x5f: PushEmpty(bool, float)
0x60: Stack[-1] = (float) 0.5
0x61: Call2 0xf9

0x62: Pop(1)
0x63: IF (Stack[-1] == 0) GOTO 0x6e; Pop(1)

0x64: PushEmpty(object, object, string, string, string)
0x65: Stack[-6] = Stack[-4]
0x66: Push("pt_k2system") // @poff=80
0x67: Pop(1); Push(Stack[-1] + Stack[-8]);
0x68: Push("_nude") // @poff=258
0x69: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x6a: Stack[-2] = "pers_rat" // @poff=122
0x6b: Stack[-1] = "k2system_rat.xml" // @poff=140
0x6c: Call2 0xfe

0x6d: Pop(5)
0x6e: PushEmpty(bool, float)
0x6f: Stack[-1] = (float) 0.5
0x70: Call2 0xf9

0x71: Pop(1)
0x72: IF (Stack[-1] == 0) GOTO 0x7d; Pop(1)

0x73: PushEmpty(object, object, string, string, string)
0x74: Stack[-6] = Stack[-4]
0x75: Push("pt_k2system") // @poff=80
0x76: Pop(1); Push(Stack[-1] + Stack[-8]);
0x77: Push("_dohodyaga1") // @poff=270
0x78: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x79: Stack[-2] = "pers_rat_big" // @poff=190
0x7a: Stack[-1] = "k2system_rat_big.xml" // @poff=216
0x7b: Call2 0xfe

0x7c: Pop(5)
0x7d: PushEmpty(bool, float)
0x7e: Stack[-1] = (float) 0.5
0x7f: Call2 0xf9

0x80: Pop(1)
0x81: IF (Stack[-1] == 0) GOTO 0x8c; Pop(1)

0x82: PushEmpty(object, object, string, string, string)
0x83: Stack[-6] = Stack[-4]
0x84: Push("pt_k2system") // @poff=80
0x85: Pop(1); Push(Stack[-1] + Stack[-8]);
0x86: Push("_dohodyaga2") // @poff=294
0x87: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x88: Stack[-2] = "pers_rat" // @poff=122
0x89: Stack[-1] = "k2system_rat.xml" // @poff=140
0x8a: Call2 0xfe

0x8b: Pop(5)
0x8c: PushEmpty()
0x8d: Call2 0x165

0x8e: Pop(0)
0x8f: Stack[-1] = 0
0x90: Return(); Pop(4)

0x91: PushEmpty()
0x92: Pop(0); Push((bool) Stack[-2] == Stack[1 + Tasks[-1].StackPointer])
0x93: IF (Stack[-1] == 0) GOTO 0x97; Pop(1)

0x94: PushEmpty()
0x95: Call2 0xf2

0x96: Pop(0)
0x97: Return(); Pop(0)

0x98: PushEmpty(object, object)
0x99: @ GetMainOutdoorScene(Stack[-1])
0x9a: Pop(0)
0x9b: PushEmpty()
0x9c: Call2 0xf2

0x9d: Pop(0)
0x9e: Stack[1 + Tasks[-1].StackPointer] = Stack[-3]
0x9f: PushEmpty(object, object, string, string, string)
0xa0: Stack[-6] = Stack[-4]
0xa1: Push("pt_k2system") // @poff=80
0xa2: Pop(1); Push(Stack[-1] + Stack[-9]);
0xa3: Push("_albinos") // @poff=104
0xa4: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0xa5: Stack[-2] = "pers_albinos" // @poff=318
0xa6: Push("k2system") // @poff=86
0xa7: Pop(1); Push(Stack[-1] + Stack[-9]);
0xa8: Push("_albinos.xml") // @poff=344
0xa9: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0xaa: Call2 0x110

0xab: Pop(4)
0xac: @@@ add(Stack[-1]); Obj=0 // @poff=370
0xad: Pop(1)
0xae: PushEmpty(object, object, string, string, string)
0xaf: Stack[-6] = Stack[-4]
0xb0: Push("pt_k2system") // @poff=80
0xb1: Pop(1); Push(Stack[-1] + Stack[-9]);
0xb2: Push("_patrol") // @poff=174
0xb3: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0xb4: Stack[-2] = "pers_patrool" // @poff=374
0xb5: Push("k2system") // @poff=86
0xb6: Pop(1); Push(Stack[-1] + Stack[-9]);
0xb7: Push("_patrol.xml") // @poff=400
0xb8: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0xb9: Call2 0x110

0xba: Pop(4)
0xbb: @@@ add(Stack[-1]); Obj=0 // @poff=370
0xbc: Pop(1)
0xbd: PushEmpty(object, object, string, string, string)
0xbe: Stack[-6] = Stack[-4]
0xbf: Push("pt_k2system") // @poff=80
0xc0: Pop(1); Push(Stack[-1] + Stack[-9]);
0xc1: Push("_nude") // @poff=258
0xc2: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0xc3: Stack[-2] = "pers_nudegirl" // @poff=424
0xc4: Push("k2system") // @poff=86
0xc5: Pop(1); Push(Stack[-1] + Stack[-9]);
0xc6: Push("_nude.xml") // @poff=452
0xc7: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0xc8: Call2 0x110

0xc9: Pop(4)
0xca: @@@ add(Stack[-1]); Obj=0 // @poff=370
0xcb: Pop(1)
0xcc: PushEmpty(object, object, string, string, string)
0xcd: Stack[-6] = Stack[-4]
0xce: Push("pt_k2system") // @poff=80
0xcf: Pop(1); Push(Stack[-1] + Stack[-9]);
0xd0: Push("_dohodyaga1") // @poff=270
0xd1: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0xd2: Stack[-2] = "pers_dohodyaga" // @poff=472
0xd3: Push("k2system") // @poff=86
0xd4: Pop(1); Push(Stack[-1] + Stack[-9]);
0xd5: Push("_dohodyaga1.xml") // @poff=502
0xd6: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0xd7: Call2 0x110

0xd8: Pop(4)
0xd9: @@@ add(Stack[-1]); Obj=0 // @poff=370
0xda: Pop(1)
0xdb: PushEmpty(object, object, string, string, string)
0xdc: Stack[-6] = Stack[-4]
0xdd: Push("pt_k2system") // @poff=80
0xde: Pop(1); Push(Stack[-1] + Stack[-9]);
0xdf: Push("_dohodyaga2") // @poff=294
0xe0: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0xe1: Stack[-2] = "pers_dohodyaga" // @poff=472
0xe2: Push("k2system") // @poff=86
0xe3: Pop(1); Push(Stack[-1] + Stack[-9]);
0xe4: Push("_dohodyaga2.xml") // @poff=534
0xe5: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0xe6: Call2 0x110

0xe7: Pop(4)
0xe8: @@@ add(Stack[-1]); Obj=0 // @poff=370
0xe9: Pop(1)
0xea: Return(); Pop(2)

0xeb: Stack[-1] = 0
0xec: PushEmpty(object, string)
0xed: Stack[-2] = Stack[0 + Tasks[-1].StackPointer]
0xee: Stack[-1] = "wonder" // @poff=24
0xef: Call2 0x137

0xf0: Pop(2)
0xf1: Return(); Pop(0)

0xf2: PushEmpty(object)
0xf3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf4: Call2 0x122

0xf5: Pop(1)
0xf6: @@@ clear(); Obj=0 // @poff=566
0xf7: Pop(0)
0xf8: Return(); Pop(0)

0xf9: PushEmpty(float, float)
0xfa: @ rand(Stack[-1])
0xfb: Pop(0)
0xfc: Stack[-4] = Stack[-1] < Stack[-3]; Pop(0);
0xfd: Return(); Pop(2)

0xfe: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0xff: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2]); Obj=12 // @poff=572
0x100: Pop(0)
0x101: Pop(0); Push((bool) Stack[-4] == 0)
0x102: IF (Stack[-1] == 0) GOTO 0x10b; Pop(1)

0x103: Push("Locator ") // @poff=583
0x104: Pop(1); Push(Stack[-1] + Stack[-12]);
0x105: Push(" doesn't exist") // @poff=601
0x106: Pop(2); Push(Stack[-2] + Stack[-1]);
0x107: @ Trace(Stack[-1])
0x108: Pop(1)
0x109: Stack[-1] = 0
0x10a: GOTO 0x10d

0x10b: @ AddActor(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0x10c: Pop(0)
0x10d: Stack[-1] = Stack[-13]
0x10e: Return(); Pop(8)

0x10f: Stack[-1] = 0
0x110: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x111: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2]); Obj=12 // @poff=572
0x112: Pop(0)
0x113: Pop(0); Push((bool) Stack[-4] == 0)
0x114: IF (Stack[-1] == 0) GOTO 0x11d; Pop(1)

0x115: Push("Locator ") // @poff=583
0x116: Pop(1); Push(Stack[-1] + Stack[-12]);
0x117: Push(" doesn't exist") // @poff=601
0x118: Pop(2); Push(Stack[-2] + Stack[-1]);
0x119: @ Trace(Stack[-1])
0x11a: Pop(1)
0x11b: Stack[-1] = 0
0x11c: GOTO 0x11f

0x11d: @@ AddStationaryActor(Stack[-1], Stack[-3], Stack[-2], Stack[-10], Stack[-9]); Obj=12 // @poff=631
0x11e: Pop(0)
0x11f: Stack[-1] = Stack[-13]
0x120: Return(); Pop(8)

0x121: Stack[-1] = 0
0x122: PushEmpty(int, int, object, int, int, object)
0x123: Push(Stack[-7])
0x124: IF (Stack[-1] == 0) GOTO 0x136; Pop(1)

0x125: @@ size(Stack[-3]); Obj=7 // @poff=650
0x126: Pop(0)
0x127: Stack[-2] = (int) 0
0x128: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0x129: IF (Stack[-1] == 0) GOTO 0x134; Pop(1)

0x12a: @@ get(Stack[-1], Stack[-2]); Obj=7 // @poff=655
0x12b: Pop(0)
0x12c: Push(Stack[-1])
0x12d: IF (Stack[-1] == 0) GOTO 0x130; Pop(1)

0x12e: @@ Remove(); Obj=1 // @poff=659
0x12f: Pop(0)
0x130: Stack[-1] = 0
0x131: Push((int) 1)
0x132: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x133: GOTO 0x128

0x134: @@ clear(); Obj=7 // @poff=566
0x135: Pop(0)
0x136: Return(); Pop(6)

0x137: PushEmpty(int, int, object, object, int, int, object, object)
0x138: Push(Stack[-10])
0x139: IF (Stack[-1] == 0) GOTO 0x14e; Pop(1)

0x13a: @@ size(Stack[-4]); Obj=10 // @poff=650
0x13b: Pop(0)
0x13c: Stack[-3] = (int) 0
0x13d: Pop(0); Push((bool) Stack[-3] < Stack[-4])
0x13e: IF (Stack[-1] == 0) GOTO 0x14e; Pop(1)

0x13f: @@ get(Stack[-2], Stack[-3]); Obj=10 // @poff=655
0x140: Pop(0)
0x141: Push(Stack[-2])
0x142: IF (Stack[-1] == 0) GOTO 0x14a; Pop(1)

0x143: @@ GetActor(Stack[-1]); Obj=2 // @poff=666
0x144: Pop(0)
0x145: Push(Stack[-1])
0x146: IF (Stack[-1] == 0) GOTO 0x149; Pop(1)

0x147: @ Trigger(Stack[-1], Stack[-9])
0x148: Pop(0)
0x149: Stack[-1] = 0
0x14a: Stack[-2] = 0
0x14b: Push((int) 1)
0x14c: Stack[-4] = Stack[-4] + Stack[-1]; Pop(1);
0x14d: GOTO 0x13d

0x14e: Return(); Pop(8)

0x14f: PushEmpty(float, float)
0x150: @ GetGameTime(Stack[-1])
0x151: Pop(0)
0x152: Push((int) 1)
0x153: PushEmpty(int)
0x154: Push((int) 24)
0x155: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x156: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x157: Return(); Pop(2)

0x158: PushEmpty(object, object)
0x159: Push((int) 727)
0x15a: Push((int) 1)
0x15b: Push((int) 539106)
0x15c: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x15d: Pop(3)
0x15e: PushEmpty(bool, object, int)
0x15f: Stack[-4] = Stack[-2]
0x160: Stack[-1] = (int) 723
0x161: Call2 0x17f

0x162: Pop(3)
0x163: Return(); Pop(2)

0x164: Stack[-1] = 0
0x165: PushEmpty(object, object)
0x166: Push((int) 728)
0x167: Push((int) 1)
0x168: Push((int) 539107)
0x169: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x16a: Pop(3)
0x16b: PushEmpty(bool, object, int)
0x16c: Stack[-4] = Stack[-2]
0x16d: Stack[-1] = (int) 723
0x16e: Call2 0x17f

0x16f: Pop(3)
0x170: Return(); Pop(2)

0x171: Stack[-1] = 0
0x172: PushEmpty(object, object)
0x173: @ GetDiaryRoot(Stack[-1])
0x174: Pop(0)
0x175: Pop(0); Push((bool) Stack[-1] == 0)
0x176: IF (Stack[-1] == 0) GOTO 0x17c; Pop(1)

0x177: Push("Can't retrieve diary root") // @poff=675
0x178: @ Trace(Stack[-1])
0x179: Pop(1)
0x17a: Stack[-3] = (bool) 0
0x17b: Return(); Pop(2)

0x17c: Stack[-1] = Stack[-3]
0x17d: Return(); Pop(2)

0x17e: Stack[-1] = 0
0x17f: PushEmpty(object, object, int, object, object, int)
0x180: PushEmpty(object)
0x181: Call2 0x172

0x182: Stack[-1] = Stack[-4]
0x183: Pop(1)
0x184: @@ Find(Stack[-7], Stack[-2]); Obj=3 // @poff=727
0x185: Pop(0)
0x186: Pop(0); Push((bool) Stack[-2] == 0)
0x187: IF (Stack[-1] == 0) GOTO 0x18e; Pop(1)

0x188: Push("Can't find diary parent with id: ") // @poff=732
0x189: Pop(1); Push(Stack[-1] + Stack[-8]);
0x18a: @ Trace(Stack[-1])
0x18b: Pop(1)
0x18c: Stack[-9] = (bool) 0
0x18d: Return(); Pop(6)

0x18e: @@ AddChild(Stack[-8]); Obj=2 // @poff=800
0x18f: Pop(0)
0x190: Push((int) 7)
0x191: @ SendWorldWndMessage(Stack[-1])
0x192: Pop(1)
0x193: @@ GetCategory(Stack[-1]); Obj=8 // @poff=809
0x194: Pop(0)
0x195: @ SetDiarySection(Stack[-1])
0x196: Pop(0)
0x197: Stack[-9] = (bool) 0
0x198: Return(); Pop(6)

0x199: Stack[-2] = 0
0x19a: Stack[-3] = 0
0x19b: PushEmpty()
0x19c: Push("K2SystemSvitaRemoved") // @poff=821
0x19d: Pop(1); Push(Stack[-1] + Stack[-3]);
0x19e: Push(Stack[-2])
0x19f: IF (Stack[-1] == 0) GOTO 0x1a2; Pop(1)

0x1a0: Push((int) 1)
0x1a1: GOTO 0x1a3

0x1a2: Push((int) 0)
0x1a3: @ SetVariable(Stack[-2], Stack[-1])
0x1a4: Pop(2)
0x1a5: Return(); Pop(0)

