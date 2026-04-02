GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	W:vera_kabak
	W:shouse1_kabak
	W:pt_b5q01_vera
	W:pers_nudegirl
	W:b5q01_vera1.xml
	W:vera_stvorki
	W:cleanup
	W:b5q01_vera2.xml
	W:vera_retreat
	A:GetActor
	W:place_butchers
	W:pt_b5q01_butcher1
	W:pers_butcher
	W:b5q01_butcher.xml
	A:add
	W:pt_b5q01_butcher2
	W:pt_b5q01_butcher3
	W:pt_b5q01_nudegirl
	W:b5q01_gwife.xml
	W:butcher_attack
	A:size
	A:get
	A:Remove
	W:gwife_dead
	W:b5q01WifeDead
	W:player
	W:b5q01
	W:cutscene
	W:cs_burah_danko_microscope
	W:cutscene_end
	W:b5q01MicroscopeCS
	W:fail
	W:completed
	W:HasProperty
	A:HasProperty
	A:GetProperty
	A:SetProperty
	W:.bin
	A:GetLocator
	W:Locator 
	W: doesn't exist
	A:AddStationaryActor
	W:reputation
	A:clear
// @pool_raw:76006500720061005f006b006100620061006b000000730068006f0075007300650031005f006b006100620061006b000000700074005f00620035007100300031005f007600650072006100000070006500720073005f006e007500640065006700690072006c000000620035007100300031005f00760065007200610031002e0078006d006c00000076006500720061005f007300740076006f0072006b006900000063006c00650061006e00750070000000620035007100300031005f00760065007200610032002e0078006d006c00000076006500720061005f00720065007400720065006100740000004765744163746f720070006c006100630065005f00620075007400630068006500720073000000700074005f00620035007100300031005f0062007500740063006800650072003100000070006500720073005f0062007500740063006800650072000000620035007100300031005f0062007500740063006800650072002e0078006d006c00000061646400700074005f00620035007100300031005f00620075007400630068006500720032000000700074005f00620035007100300031005f00620075007400630068006500720033000000700074005f00620035007100300031005f006e007500640065006700690072006c000000620035007100300031005f00670077006900660065002e0078006d006c00000062007500740063006800650072005f00610074007400610063006b00000073697a65006765740052656d6f766500670077006900660065005f00640065006100640000006200350071003000310057006900660065004400650061006400000070006c00610079006500720000006200350071003000310000006300750074007300630065006e0065000000630073005f00620075007200610068005f00640061006e006b006f005f006d006900630072006f00730063006f007000650000006300750074007300630065006e0065005f0065006e0064000000620035007100300031004d006900630072006f00730063006f00700065004300530000006600610069006c00000063006f006d0070006c0065007400650064000000480061007300500072006f0070006500720074007900000048617350726f70657274790047657450726f70657274790053657450726f7065727479002e00620069006e0000004765744c6f6361746f72004c006f006300610074006f00720020000000200064006f00650073006e0027007400200065007800690073007400000041646453746174696f6e6172794163746f7200720065007000750074006100740069006f006e000000636c65617200

Import:
	Hold (0 args)
	Trace (1 args)
	GetSceneByName (2 args)
	Trigger (2 args)
	GetMainOutdoorScene (1 args)
	GetGameTime (1 args)
	SetTimeEvent (2 args)
	SetVariable (2 args)
	FindActor (2 args)
	GetVariable (2 args)
	RemoveActor (1 args)
	self (1 args)
	CreateObjectVector (1 args)
	AddBlankActor (4 args)
	AddActor (6 args)
	SendWorldWndMessage (1 args)
	CreateFloatVector (1 args)
	SendWorldWndMessage (2 args)
	AddMessage (4 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object, object, object, object) Params = 0
		EVENT_9 Op = 0x8 Vars = (int, float)
		EVENT_26 Op = 0xe Vars = (string)


0x0: PushEmpty(object)
0x1: Call2 0x13b

0x2: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x3: Pop(1)
0x4: @ Hold()
0x5: Pop(0)
0x6: GOTO 0x4

0x7: Return(); Pop(0)

0x8: PushEmpty()
0x9: PushEmpty(int, float)
0xa: Stack[-3] = Stack[-1]
0xb: Call2 0x1b2

0xc: Pop(2)
0xd: Return(); Pop(0)

0xe: PushEmpty(object, object, float, object, object, int, int, object, object, object, object, int, object, object, float, object, object, int, int, object, object, object, object, int)
0xf: @ Trace(Stack[-25])
0x10: Pop(0)
0x11: Push("vera_kabak") // @poff=0
0x12: Pop(1); Push((bool) Stack[-26] == Stack[-1])
0x13: IF (Stack[-1] == 0) GOTO 0x21; Pop(1)

0x14: Push("shouse1_kabak") // @poff=22
0x15: @ GetSceneByName(Stack[-13], Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(object, object, string, string, string)
0x18: Stack[-17] = Stack[-4]
0x19: Stack[-3] = "pt_b5q01_vera" // @poff=50
0x1a: Stack[-2] = "pers_nudegirl" // @poff=78
0x1b: Stack[-1] = "b5q01_vera1.xml" // @poff=106
0x1c: Call2 0x14c

0x1d: Stack[0 + Tasks[-1].StackPointer] = Stack[-5]
0x1e: Pop(5)
0x1f: Stack[-12] = 0
0x20: GOTO 0xde

0x21: Push("vera_stvorki") // @poff=138
0x22: Pop(1); Push((bool) Stack[-26] == Stack[-1])
0x23: IF (Stack[-1] == 0) GOTO 0x3a; Pop(1)

0x24: Push("cleanup") // @poff=164
0x25: @ Trigger(Stack[-0]T, Stack[-1])
0x26: Pop(1)
0x27: @ GetMainOutdoorScene(Stack[-11])
0x28: Pop(0)
0x29: PushEmpty(object, object, string, string, string)
0x2a: Stack[-16] = Stack[-4]
0x2b: Stack[-3] = "pt_b5q01_vera" // @poff=50
0x2c: Stack[-2] = "pers_nudegirl" // @poff=78
0x2d: Stack[-1] = "b5q01_vera2.xml" // @poff=180
0x2e: Call2 0x15e

0x2f: Stack[1 + Tasks[-1].StackPointer] = Stack[-5]
0x30: Pop(5)
0x31: @ GetGameTime(Stack[-10])
0x32: Pop(0)
0x33: Push((int) 1)
0x34: Stack[-11] = Stack[-11] + Stack[-1]; Pop(1);
0x35: Push((int) 0)
0x36: @ SetTimeEvent(Stack[-1], Stack[-11])
0x37: Pop(1)
0x38: Stack[-11] = 0
0x39: GOTO 0xde

0x3a: Push("vera_retreat") // @poff=212
0x3b: Pop(1); Push((bool) Stack[-26] == Stack[-1])
0x3c: IF (Stack[-1] == 0) GOTO 0x44; Pop(1)

0x3d: @@@ GetActor(Stack[-9]); Obj=1 // @poff=238
0x3e: Pop(0)
0x3f: Push("retreat") // @poff=222
0x40: @ Trigger(Stack[-10], Stack[-1])
0x41: Pop(1)
0x42: Stack[-9] = 0
0x43: GOTO 0xde

0x44: Push("place_butchers") // @poff=247
0x45: Pop(1); Push((bool) Stack[-26] == Stack[-1])
0x46: IF (Stack[-1] == 0) GOTO 0x6e; Pop(1)

0x47: @ GetMainOutdoorScene(Stack[-8])
0x48: Pop(0)
0x49: PushEmpty(object, object, string, string, string)
0x4a: Stack[-13] = Stack[-4]
0x4b: Stack[-3] = "pt_b5q01_butcher1" // @poff=277
0x4c: Stack[-2] = "pers_butcher" // @poff=313
0x4d: Stack[-1] = "b5q01_butcher.xml" // @poff=339
0x4e: Call2 0x15e

0x4f: Pop(4)
0x50: @@@ add(Stack[-1]); Obj=2 // @poff=375
0x51: Pop(1)
0x52: PushEmpty(object, object, string, string, string)
0x53: Stack[-13] = Stack[-4]
0x54: Stack[-3] = "pt_b5q01_butcher2" // @poff=379
0x55: Stack[-2] = "pers_butcher" // @poff=313
0x56: Stack[-1] = "b5q01_butcher.xml" // @poff=339
0x57: Call2 0x15e

0x58: Pop(4)
0x59: @@@ add(Stack[-1]); Obj=2 // @poff=375
0x5a: Pop(1)
0x5b: PushEmpty(object, object, string, string, string)
0x5c: Stack[-13] = Stack[-4]
0x5d: Stack[-3] = "pt_b5q01_butcher3" // @poff=415
0x5e: Stack[-2] = "pers_butcher" // @poff=313
0x5f: Stack[-1] = "b5q01_butcher.xml" // @poff=339
0x60: Call2 0x15e

0x61: Pop(4)
0x62: @@@ add(Stack[-1]); Obj=2 // @poff=375
0x63: Pop(1)
0x64: PushEmpty(object, object, string, string, string)
0x65: Stack[-13] = Stack[-4]
0x66: Stack[-3] = "pt_b5q01_nudegirl" // @poff=451
0x67: Stack[-2] = "pers_nudegirl" // @poff=78
0x68: Stack[-1] = "b5q01_gwife.xml" // @poff=487
0x69: Call2 0x15e

0x6a: Stack[3 + Tasks[-1].StackPointer] = Stack[-5]
0x6b: Pop(5)
0x6c: Stack[-8] = 0
0x6d: GOTO 0xde

0x6e: Push("butcher_attack") // @poff=519
0x6f: Pop(1); Push((bool) Stack[-26] == Stack[-1])
0x70: IF (Stack[-1] == 0) GOTO 0x98; Pop(1)

0x71: @@@ size(Stack[-7]); Obj=2 // @poff=549
0x72: Pop(0)
0x73: Stack[-6] = (int) 0
0x74: Pop(0); Push((bool) Stack[-6] < Stack[-7])
0x75: IF (Stack[-1] == 0) GOTO 0x86; Pop(1)

0x76: @@@ get(Stack[-5], Stack[-6]); Obj=2 // @poff=554
0x77: Pop(0)
0x78: Push(Stack[-5])
0x79: IF (Stack[-1] == 0) GOTO 0x82; Pop(1)

0x7a: @@ GetActor(Stack[-4]); Obj=5 // @poff=238
0x7b: Pop(0)
0x7c: Push(Stack[-4])
0x7d: IF (Stack[-1] == 0) GOTO 0x81; Pop(1)

0x7e: Push("attack") // @poff=535
0x7f: @ Trigger(Stack[-5], Stack[-1])
0x80: Pop(1)
0x81: Stack[-4] = 0
0x82: Stack[-5] = 0
0x83: Push((int) 1)
0x84: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x85: GOTO 0x74

0x86: PushEmpty(object)
0x87: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x88: Call2 0x19d

0x89: Pop(1)
0x8a: Stack[2 + Tasks[-1].StackPointer] = 0
0x8b: Push( Stack[3 + Tasks[-1].StackPointer] )
0x8c: IF (Stack[-1] == 0) GOTO 0x97; Pop(1)

0x8d: @@@ GetActor(Stack[-3]); Obj=3 // @poff=238
0x8e: Pop(0)
0x8f: Push(Stack[-3])
0x90: IF (Stack[-1] == 0) GOTO 0x94; Pop(1)

0x91: Push("retreat") // @poff=222
0x92: @ Trigger(Stack[-4], Stack[-1])
0x93: Pop(1)
0x94: @@@ Remove(); Obj=3 // @poff=558
0x95: Pop(0)
0x96: Stack[-3] = 0
0x97: GOTO 0xde

0x98: Push("gwife_dead") // @poff=565
0x99: Pop(1); Push((bool) Stack[-26] == Stack[-1])
0x9a: IF (Stack[-1] == 0) GOTO 0xb0; Pop(1)

0x9b: Push("b5q01WifeDead") // @poff=587
0x9c: Push((int) 1)
0x9d: @ SetVariable(Stack[-2], Stack[-1])
0x9e: Pop(2)
0x9f: PushEmpty(object)
0xa0: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xa1: Call2 0x19d

0xa2: Pop(1)
0xa3: Stack[2 + Tasks[-1].StackPointer] = 0
0xa4: Push("player") // @poff=615
0xa5: @ FindActor(Stack[-3], Stack[-1])
0xa6: Pop(1)
0xa7: Push(Stack[-2])
0xa8: IF (Stack[-1] == 0) GOTO 0xae; Pop(1)

0xa9: PushEmpty(bool, object, float)
0xaa: Stack[-5] = Stack[-2]
0xab: Stack[-1] = (float) 0.5
0xac: Call2 0x170

0xad: Pop(3)
0xae: Stack[-2] = 0
0xaf: GOTO 0xde

0xb0: Push("cleanup") // @poff=164
0xb1: Pop(1); Push((bool) Stack[-26] == Stack[-1])
0xb2: IF (Stack[-1] == 0) GOTO 0xc1; Pop(1)

0xb3: Push("b5q01") // @poff=629
0xb4: @ GetVariable(Stack[-1], Stack[-2])
0xb5: Pop(1)
0xb6: Push((int) 1000)
0xb7: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0xb8: IF (Stack[-1] == 0) GOTO 0xbd; Pop(1)

0xb9: PushEmpty()
0xba: Call2 0xdf

0xbb: Pop(0)
0xbc: GOTO 0xc0

0xbd: PushEmpty()
0xbe: Call2 0xef

0xbf: Pop(0)
0xc0: GOTO 0xde

0xc1: Push("cutscene") // @poff=641
0xc2: Pop(1); Push((bool) Stack[-26] == Stack[-1])
0xc3: IF (Stack[-1] == 0) GOTO 0xc9; Pop(1)

0xc4: PushEmpty(object, string)
0xc5: Stack[-1] = "cs_burah_danko_microscope" // @poff=659
0xc6: Call2 0x141

0xc7: Pop(2)
0xc8: GOTO 0xde

0xc9: Push("cutscene_end") // @poff=711
0xca: Pop(1); Push((bool) Stack[-26] == Stack[-1])
0xcb: IF (Stack[-1] == 0) GOTO 0xd1; Pop(1)

0xcc: Push("b5q01MicroscopeCS") // @poff=737
0xcd: Push((int) 1)
0xce: @ SetVariable(Stack[-2], Stack[-1])
0xcf: Pop(2)
0xd0: GOTO 0xde

0xd1: Push("fail") // @poff=773
0xd2: Pop(1); Push((bool) Stack[-26] == Stack[-1])
0xd3: IF (Stack[-1] == 0) GOTO 0xd8; Pop(1)

0xd4: PushEmpty()
0xd5: Call2 0xdf

0xd6: Pop(0)
0xd7: GOTO 0xde

0xd8: Push("completed") // @poff=783
0xd9: Pop(1); Push((bool) Stack[-26] == Stack[-1])
0xda: IF (Stack[-1] == 0) GOTO 0xde; Pop(1)

0xdb: PushEmpty()
0xdc: Call2 0xe7

0xdd: Pop(0)
0xde: Return(); Pop(24)

0xdf: Push("b5q01") // @poff=629
0xe0: Push((int) -1)
0xe1: @ SetVariable(Stack[-2], Stack[-1])
0xe2: Pop(2)
0xe3: PushEmpty()
0xe4: Call2 0xef

0xe5: Pop(0)
0xe6: Return(); Pop(0)

0xe7: Push("b5q01") // @poff=629
0xe8: Push((int) 1000)
0xe9: @ SetVariable(Stack[-2], Stack[-1])
0xea: Pop(2)
0xeb: PushEmpty()
0xec: Call2 0xef

0xed: Pop(0)
0xee: Return(); Pop(0)

0xef: EventDisable(9)
0xf0: Push( Stack[0 + Tasks[-1].StackPointer] )
0xf1: IF (Stack[-1] == 0) GOTO 0xf5; Pop(1)

0xf2: Push("cleanup") // @poff=164
0xf3: @ Trigger(Stack[-0]T, Stack[-1])
0xf4: Pop(1)
0xf5: Push( Stack[1 + Tasks[-1].StackPointer] )
0xf6: IF (Stack[-1] == 0) GOTO 0xf9; Pop(1)

0xf7: @@@ Remove(); Obj=1 // @poff=558
0xf8: Pop(0)
0xf9: PushEmpty(object)
0xfa: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xfb: Call2 0x19d

0xfc: Pop(1)
0xfd: Stack[2 + Tasks[-1].StackPointer] = 0
0xfe: Push( Stack[3 + Tasks[-1].StackPointer] )
0xff: IF (Stack[-1] == 0) GOTO 0x102; Pop(1)

0x100: @@@ Remove(); Obj=3 // @poff=558
0x101: Pop(0)
0x102: PushEmpty(object)
0x103: Call2 0x12a

0x104: Pop(0)
0x105: @ RemoveActor(Stack[-1])
0x106: Pop(1)
0x107: Return(); Pop(0)

0x108: PushEmpty(bool, bool)
0x109: Push("HasProperty") // @poff=803
0x10a: Push((int) 2)
0x10b: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x10c: Pop(1); Push((bool) Stack[-1] == 0)
0x10d: IF (Stack[-1] == 0) GOTO 0x110; Pop(1)

0x10e: Stack[-5] = (bool) 0
0x10f: Return(); Pop(2)

0x110: @@ HasProperty(Stack[-3], Stack[-1]); Obj=4 // @poff=827
0x111: Pop(0)
0x112: Stack[-1] = Stack[-5]
0x113: Return(); Pop(2)

0x114: PushEmpty(float, float)
0x115: PushEmpty(bool, object, string)
0x116: Stack[-10] = Stack[-2]
0x117: Stack[-9] = Stack[-1]
0x118: Call2 0x108

0x119: Pop(2)
0x11a: Pop(1); Push((bool) Stack[-1] == 0)
0x11b: IF (Stack[-1] == 0) GOTO 0x11e; Pop(1)

0x11c: Stack[-8] = (bool) 0
0x11d: Return(); Pop(2)

0x11e: @@ GetProperty(Stack[-6], Stack[-1]); Obj=7 // @poff=839
0x11f: Pop(0)
0x120: PushEmpty(float, float, float, float)
0x121: Stack[-3] = Stack[-5] + Stack[-9]; Pop(0);
0x122: Stack[-8] = Stack[-2]
0x123: Stack[-7] = Stack[-1]
0x124: Call2 0x130

0x125: Pop(3)
0x126: @@ SetProperty(Stack[-7], Stack[-1]); Obj=8 // @poff=851
0x127: Pop(1)
0x128: Stack[-8] = (bool) 1
0x129: Return(); Pop(2)

0x12a: PushEmpty(object, object)
0x12b: @ self(Stack[-1])
0x12c: Pop(0)
0x12d: Stack[-1] = Stack[-3]
0x12e: Return(); Pop(2)

0x12f: Stack[-1] = 0
0x130: PushEmpty()
0x131: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x132: IF (Stack[-1] == 0) GOTO 0x135; Pop(1)

0x133: Stack[-2] = Stack[-4]
0x134: Return(); Pop(0)

0x135: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x136: IF (Stack[-1] == 0) GOTO 0x139; Pop(1)

0x137: Stack[-1] = Stack[-4]
0x138: Return(); Pop(0)

0x139: Stack[-3] = Stack[-4]
0x13a: Return(); Pop(0)

0x13b: PushEmpty(object, object)
0x13c: @ CreateObjectVector(Stack[-1])
0x13d: Pop(0)
0x13e: Stack[-1] = Stack[-3]
0x13f: Return(); Pop(2)

0x140: Stack[-1] = 0
0x141: PushEmpty(object, object, object, object)
0x142: @ GetMainOutdoorScene(Stack[-2])
0x143: Pop(0)
0x144: Push(".bin") // @poff=863
0x145: Pop(1); Push(Stack[-6] + Stack[-1]);
0x146: @ AddBlankActor(Stack[-2], Stack[-3], Stack[-6], Stack[-1])
0x147: Pop(1)
0x148: Stack[-1] = Stack[-6]
0x149: Return(); Pop(4)

0x14a: Stack[-1] = 0
0x14b: Stack[-2] = 0
0x14c: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x14d: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2]); Obj=12 // @poff=873
0x14e: Pop(0)
0x14f: Pop(0); Push((bool) Stack[-4] == 0)
0x150: IF (Stack[-1] == 0) GOTO 0x159; Pop(1)

0x151: Push("Locator ") // @poff=884
0x152: Pop(1); Push(Stack[-1] + Stack[-12]);
0x153: Push(" doesn't exist") // @poff=902
0x154: Pop(2); Push(Stack[-2] + Stack[-1]);
0x155: @ Trace(Stack[-1])
0x156: Pop(1)
0x157: Stack[-1] = 0
0x158: GOTO 0x15b

0x159: @ AddActor(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0x15a: Pop(0)
0x15b: Stack[-1] = Stack[-13]
0x15c: Return(); Pop(8)

0x15d: Stack[-1] = 0
0x15e: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x15f: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2]); Obj=12 // @poff=873
0x160: Pop(0)
0x161: Pop(0); Push((bool) Stack[-4] == 0)
0x162: IF (Stack[-1] == 0) GOTO 0x16b; Pop(1)

0x163: Push("Locator ") // @poff=884
0x164: Pop(1); Push(Stack[-1] + Stack[-12]);
0x165: Push(" doesn't exist") // @poff=902
0x166: Pop(2); Push(Stack[-2] + Stack[-1]);
0x167: @ Trace(Stack[-1])
0x168: Pop(1)
0x169: Stack[-1] = 0
0x16a: GOTO 0x16d

0x16b: @@ AddStationaryActor(Stack[-1], Stack[-3], Stack[-2], Stack[-10], Stack[-9]); Obj=12 // @poff=932
0x16c: Pop(0)
0x16d: Stack[-1] = Stack[-13]
0x16e: Return(); Pop(8)

0x16f: Stack[-1] = 0
0x170: PushEmpty()
0x171: Pop(0); Push((bool) Stack[-2] == 0)
0x172: IF (Stack[-1] == 0) GOTO 0x175; Pop(1)

0x173: Stack[-3] = (bool) 0
0x174: Return(); Pop(0)

0x175: Push((int) 0)
0x176: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x177: IF (Stack[-1] == 0) GOTO 0x17c; Pop(1)

0x178: Push((int) 8)
0x179: @ SendWorldWndMessage(Stack[-1])
0x17a: Pop(1)
0x17b: GOTO 0x185

0x17c: Push((int) 0)
0x17d: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x17e: IF (Stack[-1] == 0) GOTO 0x183; Pop(1)

0x17f: Push((int) 9)
0x180: @ SendWorldWndMessage(Stack[-1])
0x181: Pop(1)
0x182: GOTO 0x185

0x183: Stack[-3] = (bool) 0
0x184: Return(); Pop(0)

0x185: PushEmpty(float)
0x186: Stack[-2] = Stack[-1]
0x187: Call2 0x193

0x188: Pop(1)
0x189: PushEmpty(bool, object, string, float, float, float)
0x18a: Stack[-8] = Stack[-5]
0x18b: Stack[-4] = "reputation" // @poff=951
0x18c: Stack[-7] = Stack[-3]
0x18d: Stack[-2] = (int) 0
0x18e: Stack[-1] = (int) 1
0x18f: Call2 0x114

0x190: Pop(6)
0x191: Stack[-3] = (bool) 1
0x192: Return(); Pop(0)

0x193: PushEmpty(object, object)
0x194: @ CreateFloatVector(Stack[-1])
0x195: Pop(0)
0x196: @@ add(Stack[-3]); Obj=1 // @poff=375
0x197: Pop(0)
0x198: Push((int) 16)
0x199: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x19a: Pop(1)
0x19b: Return(); Pop(2)

0x19c: Stack[-1] = 0
0x19d: PushEmpty(int, int, object, int, int, object)
0x19e: Push(Stack[-7])
0x19f: IF (Stack[-1] == 0) GOTO 0x1b1; Pop(1)

0x1a0: @@ size(Stack[-3]); Obj=7 // @poff=549
0x1a1: Pop(0)
0x1a2: Stack[-2] = (int) 0
0x1a3: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0x1a4: IF (Stack[-1] == 0) GOTO 0x1af; Pop(1)

0x1a5: @@ get(Stack[-1], Stack[-2]); Obj=7 // @poff=554
0x1a6: Pop(0)
0x1a7: Push(Stack[-1])
0x1a8: IF (Stack[-1] == 0) GOTO 0x1ab; Pop(1)

0x1a9: @@ Remove(); Obj=1 // @poff=558
0x1aa: Pop(0)
0x1ab: Stack[-1] = 0
0x1ac: Push((int) 1)
0x1ad: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x1ae: GOTO 0x1a3

0x1af: @@ clear(); Obj=7 // @poff=973
0x1b0: Pop(0)
0x1b1: Return(); Pop(6)

0x1b2: PushEmpty()
0x1b3: PushEmpty(int, int, int, float)
0x1b4: Stack[-3] = (int) 530811
0x1b5: Stack[-2] = (int) 530810
0x1b6: Stack[-5] = Stack[-1]
0x1b7: Call2 0x1bb

0x1b8: Stack[-4] = Stack[-6]
0x1b9: Pop(4)
0x1ba: Return(); Pop(0)

0x1bb: PushEmpty(int, int)
0x1bc: @ AddMessage(Stack[-5], Stack[-4], Stack[-3], Stack[-1])
0x1bd: Pop(0)
0x1be: Push((int) 6)
0x1bf: @ SendWorldWndMessage(Stack[-1])
0x1c0: Pop(1)
0x1c1: Stack[-1] = Stack[-6]
0x1c2: Return(); Pop(2)

