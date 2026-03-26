GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	W:cot_eva
	W:nodanko
	W:icot_eva_door
	W:shouse1_kabak
	W:noandrei
	W:warehouse_rubin
	W:sobor@door1
	W:cot_maria@door1
	W:init_kabak
	W:pt_k11q01_soldier
	A:GetLocator
	W:pers_soldat
	W:k11q01_kabak_soldier.xml
	A:add
	W:pt_k11q01_officer
	W:k11q01_kabak_officer.xml
	W:init_gun
	W:k11q01_soldier.xml
	W:pt_k11q01_agony_officer
	W:k11q01_officer_agony.xml
	A:AddStationaryActor
	W:cure_officer
	W:player
	A:GetPosition
	A:GetDirection
	A:GetActor
	A:Remove
	W:k11q01Cured
	W:quest_k11_01_cutscene
	W:cutscene_end
	W:k11q01_officer.xml
	W:init_house_petr
	W:pt_k11q01_andrei
	W:NPC_Andrei
	W:k11q01_andrei.xml
	W:pt_k11q01_danko
	W:NPC_Bakalavr
	W:k11q01_danko.xml
	W:place_burah
	W:burah_home
	W:noburah
	W:boiny
	W:pt_k11q01_burah
	W:NPC_Burah
	W:k11q01_burah.xml
	W:fail
	W:completed
	W:cleanup
	W:k11q01
	W:.bin
	W:Locator 
	W: doesn't exist
	W:Door 
	W: not found
	W:locked
	A:SetProperty
	A:Close
	A:size
	A:get
	A:clear
	W:klara2_npc_positioner
	W:init
// @pool_raw:63006f0074005f0065007600610000006e006f00640061006e006b006f000000690063006f0074005f006500760061005f0064006f006f0072000000730068006f0075007300650031005f006b006100620061006b0000006e006f0061006e0064007200650069000000770061007200650068006f007500730065005f0072007500620069006e00000073006f0062006f007200400064006f006f0072003100000063006f0074005f006d006100720069006100400064006f006f0072003100000069006e00690074005f006b006100620061006b000000700074005f006b00310031007100300031005f0073006f006c00640069006500720000004765744c6f6361746f720070006500720073005f0073006f006c0064006100740000006b00310031007100300031005f006b006100620061006b005f0073006f006c0064006900650072002e0078006d006c00000061646400700074005f006b00310031007100300031005f006f0066006600690063006500720000006b00310031007100300031005f006b006100620061006b005f006f006600660069006300650072002e0078006d006c00000069006e00690074005f00670075006e0000006b00310031007100300031005f0073006f006c0064006900650072002e0078006d006c000000700074005f006b00310031007100300031005f00610067006f006e0079005f006f0066006600690063006500720000006b00310031007100300031005f006f006600660069006300650072005f00610067006f006e0079002e0078006d006c00000041646453746174696f6e6172794163746f720063007500720065005f006f00660066006900630065007200000070006c0061007900650072000000476574506f736974696f6e00476574446972656374696f6e004765744163746f720052656d6f7665006b0031003100710030003100430075007200650064000000710075006500730074005f006b00310031005f00300031005f006300750074007300630065006e00650000006300750074007300630065006e0065005f0065006e00640000006b00310031007100300031005f006f006600660069006300650072002e0078006d006c00000069006e00690074005f0068006f007500730065005f0070006500740072000000700074005f006b00310031007100300031005f0061006e00640072006500690000004e00500043005f0041006e00640072006500690000006b00310031007100300031005f0061006e0064007200650069002e0078006d006c000000700074005f006b00310031007100300031005f00640061006e006b006f0000004e00500043005f00420061006b0061006c0061007600720000006b00310031007100300031005f00640061006e006b006f002e0078006d006c00000070006c006100630065005f00620075007200610068000000620075007200610068005f0068006f006d00650000006e006f0062007500720061006800000062006f0069006e0079000000700074005f006b00310031007100300031005f006200750072006100680000004e00500043005f004200750072006100680000006b00310031007100300031005f00620075007200610068002e0078006d006c0000006600610069006c00000063006f006d0070006c006500740065006400000063006c00650061006e007500700000006b003100310071003000310000002e00620069006e0000004c006f006300610074006f00720020000000200064006f00650073006e0027007400200065007800690073007400000044006f006f0072002000000020006e006f007400200066006f0075006e00640000006c006f0063006b0065006400000053657450726f706572747900436c6f73650073697a650067657400636c656172006b006c0061007200610032005f006e00700063005f0070006f0073006900740069006f006e0065007200000069006e00690074000000

Import:
	GetSceneByName (2 args)
	Trigger (2 args)
	Hold (0 args)
	Trace (1 args)
	GetMainOutdoorScene (1 args)
	FindActor (2 args)
	RemoveActor (1 args)
	SetVariable (2 args)
	GetVariable (2 args)
	self (1 args)
	CreateObjectVector (1 args)
	AddBlankActor (4 args)
	AddActor (6 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object, object, object, object, object, object, object, object, cvector, cvector) Params = 0
		EVENT_26 Op = 0x2f Vars = (string)


0x0: PushEmpty(object, object)
0x1: PushEmpty(object)
0x2: Call2 0x16b

0x3: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x4: Pop(1)
0x5: PushEmpty(object)
0x6: Call2 0x16b

0x7: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x8: Pop(1)
0x9: Push("cot_eva") // @poff=0
0xa: @ GetSceneByName(Stack[-2], Stack[-1])
0xb: Pop(1)
0xc: Push("nodanko") // @poff=16
0xd: @ Trigger(Stack[-2], Stack[-1])
0xe: Pop(1)
0xf: PushEmpty(string, bool)
0x10: Stack[-2] = "icot_eva_door" // @poff=32
0x11: Stack[-1] = (bool) 0
0x12: Call2 0x1b1

0x13: Pop(2)
0x14: Push("shouse1_kabak") // @poff=60
0x15: @ GetSceneByName(Stack[-2], Stack[-1])
0x16: Pop(1)
0x17: Push("noandrei") // @poff=88
0x18: @ Trigger(Stack[-2], Stack[-1])
0x19: Pop(1)
0x1a: Push("warehouse_rubin") // @poff=106
0x1b: @ GetSceneByName(Stack[-2], Stack[-1])
0x1c: Pop(1)
0x1d: Push("rubin") // @poff=126
0x1e: @ Trigger(Stack[-2], Stack[-1])
0x1f: Pop(1)
0x20: PushEmpty(string, bool)
0x21: Stack[-2] = "sobor@door1" // @poff=138
0x22: Stack[-1] = (bool) 0
0x23: Call2 0x1a0

0x24: Pop(2)
0x25: PushEmpty(string, bool)
0x26: Stack[-2] = "cot_maria@door1" // @poff=162
0x27: Stack[-1] = (bool) 1
0x28: Call2 0x1a0

0x29: Pop(2)
0x2a: @ Hold()
0x2b: Pop(0)
0x2c: GOTO 0x2a

0x2d: Return(); Pop(2)

0x2e: Stack[-1] = 0
0x2f: PushEmpty(object, int, bool, cvector, cvector, object, int, bool, cvector, cvector, bool, cvector, cvector, object, object, object, cvector, object, object, int, object, int, bool, cvector, cvector, object, int, bool, cvector, cvector, bool, cvector, cvector, object, object, object, cvector, object, object, int)
0x30: @ Trace(Stack[-41])
0x31: Pop(0)
0x32: Push("init_kabak") // @poff=194
0x33: Pop(1); Push((bool) Stack[-42] == Stack[-1])
0x34: IF (Stack[-1] == 0) GOTO 0x57; Pop(1)

0x35: Push("shouse1_kabak") // @poff=60
0x36: @ GetSceneByName(Stack[-21], Stack[-1])
0x37: Pop(1)
0x38: Stack[-19] = (int) 1
0x39: Push("pt_k11q01_soldier") // @poff=216
0x3a: Pop(1); Push(Stack[-1] + Stack[-20]);
0x3b: @@ GetLocator(Stack[-1], Stack[-19], Stack[-18], Stack[-17]); Obj=21 // @poff=252
0x3c: Pop(1)
0x3d: Pop(0); Push((bool) Stack[-18] == 0)
0x3e: IF (Stack[-1] == 0) GOTO 0x40; Pop(1)

0x3f: GOTO 0x4d

0x40: PushEmpty(object, object, string, string, string)
0x41: Stack[-25] = Stack[-4]
0x42: Push("pt_k11q01_soldier") // @poff=216
0x43: Stack[-4] = Stack[-1] + Stack[-25]; Pop(1);
0x44: Stack[-2] = "pers_soldat" // @poff=263
0x45: Stack[-1] = "k11q01_kabak_soldier.xml" // @poff=287
0x46: Call2 0x17c

0x47: Pop(4)
0x48: @@@ add(Stack[-1]); Obj=0 // @poff=337
0x49: Pop(1)
0x4a: Push((int) 1)
0x4b: Stack[-20] = Stack[-20] + Stack[-1]; Pop(1);
0x4c: GOTO 0x39

0x4d: PushEmpty(object, object, string, string, string)
0x4e: Stack[-25] = Stack[-4]
0x4f: Stack[-3] = "pt_k11q01_officer" // @poff=341
0x50: Stack[-2] = "pers_soldat" // @poff=263
0x51: Stack[-1] = "k11q01_kabak_officer.xml" // @poff=377
0x52: Call2 0x17c

0x53: Stack[1 + Tasks[-1].StackPointer] = Stack[-5]
0x54: Pop(5)
0x55: Stack[-20] = 0
0x56: GOTO 0x10b

0x57: Push("init_gun") // @poff=427
0x58: Pop(1); Push((bool) Stack[-42] == Stack[-1])
0x59: IF (Stack[-1] == 0) GOTO 0x7d; Pop(1)

0x5a: @ GetMainOutdoorScene(Stack[-15])
0x5b: Pop(0)
0x5c: Stack[-14] = (int) 1
0x5d: Push("pt_k11q01_soldier") // @poff=216
0x5e: Pop(1); Push(Stack[-1] + Stack[-15]);
0x5f: @@ GetLocator(Stack[-1], Stack[-14], Stack[-13], Stack[-12]); Obj=16 // @poff=252
0x60: Pop(1)
0x61: Pop(0); Push((bool) Stack[-13] == 0)
0x62: IF (Stack[-1] == 0) GOTO 0x64; Pop(1)

0x63: GOTO 0x71

0x64: PushEmpty(object, object, string, string, string)
0x65: Stack[-20] = Stack[-4]
0x66: Push("pt_k11q01_soldier") // @poff=216
0x67: Stack[-4] = Stack[-1] + Stack[-20]; Pop(1);
0x68: Stack[-2] = "pers_soldat" // @poff=263
0x69: Stack[-1] = "k11q01_soldier.xml" // @poff=445
0x6a: Call2 0x18e

0x6b: Pop(4)
0x6c: @@@ add(Stack[-1]); Obj=2 // @poff=337
0x6d: Pop(1)
0x6e: Push((int) 1)
0x6f: Stack[-15] = Stack[-15] + Stack[-1]; Pop(1);
0x70: GOTO 0x5d

0x71: Push("pt_k11q01_agony_officer") // @poff=483
0x72: @@ GetLocator(Stack[-1], Stack[-11], Stack[-10], Stack[-9]); Obj=16 // @poff=252
0x73: Pop(1)
0x74: Push(CVector(0.0, 7.0, 0.0))
0x75: Stack[-10] = Stack[-10] + Stack[-1]; Pop(1);
0x76: Push("pers_soldat") // @poff=263
0x77: Push("k11q01_officer_agony.xml") // @poff=531
0x78: Push((bool) 1)
0x79: @@ AddStationaryActor(Stack[-4]T, Stack[-12], Stack[-11], Stack[-3], Stack[-2], Stack[-1]); Obj=18 // @poff=581
0x7a: Pop(3)
0x7b: Stack[-15] = 0
0x7c: GOTO 0x10b

0x7d: Push("cure_officer") // @poff=600
0x7e: Pop(1); Push((bool) Stack[-42] == Stack[-1])
0x7f: IF (Stack[-1] == 0) GOTO 0xa2; Pop(1)

0x80: Push("player") // @poff=626
0x81: @ FindActor(Stack[-8], Stack[-1])
0x82: Pop(1)
0x83: @@ GetPosition(Stack[-8]T); Obj=7 // @poff=640
0x84: Pop(0)
0x85: @@ GetDirection(Stack[-9]T); Obj=7 // @poff=652
0x86: Pop(0)
0x87: Push(CvectorIndex(Stack[9 + Tasks[-1].StackPointer], 1))
0x88: Stack[-1] = (int) 0
0x89: CvectorIndex(Stack[9 + Tasks[-1].StackPointer], 1) = Stack[-1];
0x8a: PushEmpty(cvector, cvector)
0x8b: Stack[-1] = Stack[9 + Tasks[-1].StackPointer]
0x8c: Call2 0x161

0x8d: Stack[9 + Tasks[-1].StackPointer] = Stack[-2]
0x8e: Pop(2)
0x8f: @@@ GetActor(Stack[-6]); Obj=4 // @poff=665
0x90: Pop(0)
0x91: Push(Stack[-6])
0x92: IF (Stack[-1] == 0) GOTO 0x95; Pop(1)

0x93: @ RemoveActor(Stack[-6])
0x94: Pop(0)
0x95: @@@ Remove(); Obj=4 // @poff=674
0x96: Pop(0)
0x97: Push("k11q01Cured") // @poff=681
0x98: Push((int) 1)
0x99: @ SetVariable(Stack[-2], Stack[-1])
0x9a: Pop(2)
0x9b: PushEmpty(object, string)
0x9c: Stack[-1] = "quest_k11_01_cutscene" // @poff=705
0x9d: Call2 0x171

0x9e: Pop(2)
0x9f: Stack[-6] = 0
0xa0: Stack[-7] = 0
0xa1: GOTO 0x10b

0xa2: Push("cutscene_end") // @poff=749
0xa3: Pop(1); Push((bool) Stack[-42] == Stack[-1])
0xa4: IF (Stack[-1] == 0) GOTO 0xb4; Pop(1)

0xa5: @ GetMainOutdoorScene(Stack[-5])
0xa6: Pop(0)
0xa7: Push((float)150.0)
0xa8: Pop(1); Push(Stack[9 + Tasks[-1].StackPointer] * Stack[-1]);
0xa9: Pop(1); Push(Stack[8 + Tasks[-1].StackPointer] + Stack[-1]);
0xaa: Push(CVector(0.0, 10.0, 0.0))
0xab: Stack[-6] = Stack[-2] + Stack[-1]; Pop(2);
0xac: Pop(0); Push(( -Stack[9 + Tasks[-1].StackPointer])
0xad: Push("pers_soldat") // @poff=263
0xae: Push("k11q01_officer.xml") // @poff=775
0xaf: Push((bool) 1)
0xb0: @@ AddStationaryActor(Stack[-3]T, Stack[-8], Stack[-4], Stack[-3], Stack[-2], Stack[-1]); Obj=9 // @poff=581
0xb1: Pop(4)
0xb2: Stack[-5] = 0
0xb3: GOTO 0x10b

0xb4: Push("init_house_petr") // @poff=813
0xb5: Pop(1); Push((bool) Stack[-42] == Stack[-1])
0xb6: IF (Stack[-1] == 0) GOTO 0xcc; Pop(1)

0xb7: Push("house_petr") // @poff=823
0xb8: @ GetSceneByName(Stack[-4], Stack[-1])
0xb9: Pop(1)
0xba: PushEmpty(object, object, string, string, string)
0xbb: Stack[-8] = Stack[-4]
0xbc: Stack[-3] = "pt_k11q01_andrei" // @poff=845
0xbd: Stack[-2] = "NPC_Andrei" // @poff=879
0xbe: Stack[-1] = "k11q01_andrei.xml" // @poff=901
0xbf: Call2 0x17c

0xc0: Stack[7 + Tasks[-1].StackPointer] = Stack[-5]
0xc1: Pop(5)
0xc2: PushEmpty(object, object, string, string, string)
0xc3: Stack[-8] = Stack[-4]
0xc4: Stack[-3] = "pt_k11q01_danko" // @poff=937
0xc5: Stack[-2] = "NPC_Bakalavr" // @poff=969
0xc6: Stack[-1] = "k11q01_danko.xml" // @poff=995
0xc7: Call2 0x17c

0xc8: Stack[5 + Tasks[-1].StackPointer] = Stack[-5]
0xc9: Pop(5)
0xca: Stack[-3] = 0
0xcb: GOTO 0x10b

0xcc: Push("place_burah") // @poff=1029
0xcd: Pop(1); Push((bool) Stack[-42] == Stack[-1])
0xce: IF (Stack[-1] == 0) GOTO 0xe2; Pop(1)

0xcf: Push("burah_home") // @poff=1053
0xd0: @ GetSceneByName(Stack[-3], Stack[-1])
0xd1: Pop(1)
0xd2: Push("noburah") // @poff=1075
0xd3: @ Trigger(Stack[-3], Stack[-1])
0xd4: Pop(1)
0xd5: Push("boiny") // @poff=1091
0xd6: @ GetSceneByName(Stack[-3], Stack[-1])
0xd7: Pop(1)
0xd8: PushEmpty(object, object, string, string, string)
0xd9: Stack[-7] = Stack[-4]
0xda: Stack[-3] = "pt_k11q01_burah" // @poff=1103
0xdb: Stack[-2] = "NPC_Burah" // @poff=1135
0xdc: Stack[-1] = "k11q01_burah.xml" // @poff=1155
0xdd: Call2 0x17c

0xde: Stack[6 + Tasks[-1].StackPointer] = Stack[-5]
0xdf: Pop(5)
0xe0: Stack[-2] = 0
0xe1: GOTO 0x10b

0xe2: Push("fail") // @poff=1189
0xe3: Pop(1); Push((bool) Stack[-42] == Stack[-1])
0xe4: IF (Stack[-1] == 0) GOTO 0xef; Pop(1)

0xe5: PushEmpty()
0xe6: Call2 0x10c

0xe7: Pop(0)
0xe8: PushEmpty()
0xe9: Call2 0x1fa

0xea: Pop(0)
0xeb: PushEmpty()
0xec: Call2 0x200

0xed: Pop(0)
0xee: GOTO 0x10b

0xef: Push("completed") // @poff=1199
0xf0: Pop(1); Push((bool) Stack[-42] == Stack[-1])
0xf1: IF (Stack[-1] == 0) GOTO 0xfc; Pop(1)

0xf2: PushEmpty()
0xf3: Call2 0x114

0xf4: Pop(0)
0xf5: PushEmpty()
0xf6: Call2 0x1fa

0xf7: Pop(0)
0xf8: PushEmpty()
0xf9: Call2 0x200

0xfa: Pop(0)
0xfb: GOTO 0x10b

0xfc: Push("cleanup") // @poff=1219
0xfd: Pop(1); Push((bool) Stack[-42] == Stack[-1])
0xfe: IF (Stack[-1] == 0) GOTO 0x10b; Pop(1)

0xff: Push("k11q01") // @poff=1235
0x100: @ GetVariable(Stack[-1], Stack[-2])
0x101: Pop(1)
0x102: Push((int) 1000)
0x103: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x104: IF (Stack[-1] == 0) GOTO 0x108; Pop(1)

0x105: PushEmpty()
0x106: Call2 0x10c

0x107: Pop(0)
0x108: PushEmpty()
0x109: Call2 0x14c

0x10a: Pop(0)
0x10b: Return(); Pop(40)

0x10c: Push("k11q01") // @poff=1235
0x10d: Push((int) -1)
0x10e: @ SetVariable(Stack[-2], Stack[-1])
0x10f: Pop(2)
0x110: PushEmpty()
0x111: Call2 0x11c

0x112: Pop(0)
0x113: Return(); Pop(0)

0x114: Push("k11q01") // @poff=1235
0x115: Push((int) 1000)
0x116: @ SetVariable(Stack[-2], Stack[-1])
0x117: Pop(2)
0x118: PushEmpty()
0x119: Call2 0x11c

0x11a: Pop(0)
0x11b: Return(); Pop(0)

0x11c: PushEmpty(object, object)
0x11d: Push("cot_eva") // @poff=0
0x11e: @ GetSceneByName(Stack[-2], Stack[-1])
0x11f: Pop(1)
0x120: Push("danko") // @poff=20
0x121: @ Trigger(Stack[-2], Stack[-1])
0x122: Pop(1)
0x123: Push("shouse1_kabak") // @poff=60
0x124: @ GetSceneByName(Stack[-2], Stack[-1])
0x125: Pop(1)
0x126: Push("andrei") // @poff=92
0x127: @ Trigger(Stack[-2], Stack[-1])
0x128: Pop(1)
0x129: PushEmpty(object, string)
0x12a: Stack[-2] = Stack[0 + Tasks[-1].StackPointer]
0x12b: Stack[-1] = "cleanup" // @poff=1219
0x12c: Call2 0x1e7

0x12d: Pop(2)
0x12e: Push( Stack[1 + Tasks[-1].StackPointer] )
0x12f: IF (Stack[-1] == 0) GOTO 0x133; Pop(1)

0x130: Push("cleanup") // @poff=1219
0x131: @ Trigger(Stack[-1]T, Stack[-1])
0x132: Pop(1)
0x133: PushEmpty(object)
0x134: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x135: Call2 0x1d2

0x136: Pop(1)
0x137: Push( Stack[3 + Tasks[-1].StackPointer] )
0x138: IF (Stack[-1] == 0) GOTO 0x13b; Pop(1)

0x139: @@@ Remove(); Obj=3 // @poff=674
0x13a: Pop(0)
0x13b: Push( Stack[5 + Tasks[-1].StackPointer] )
0x13c: IF (Stack[-1] == 0) GOTO 0x140; Pop(1)

0x13d: Push("cleanup") // @poff=1219
0x13e: @ Trigger(Stack[-5]T, Stack[-1])
0x13f: Pop(1)
0x140: Push( Stack[6 + Tasks[-1].StackPointer] )
0x141: IF (Stack[-1] == 0) GOTO 0x145; Pop(1)

0x142: Push("cleanup") // @poff=1219
0x143: @ Trigger(Stack[-6]T, Stack[-1])
0x144: Pop(1)
0x145: Push( Stack[7 + Tasks[-1].StackPointer] )
0x146: IF (Stack[-1] == 0) GOTO 0x14a; Pop(1)

0x147: Push("cleanup") // @poff=1219
0x148: @ Trigger(Stack[-7]T, Stack[-1])
0x149: Pop(1)
0x14a: Return(); Pop(2)

0x14b: Stack[-1] = 0
0x14c: EventDisable(26)
0x14d: PushEmpty(string, bool)
0x14e: Stack[-2] = "cot_maria@door1" // @poff=162
0x14f: Stack[-1] = (bool) 0
0x150: Call2 0x1a0

0x151: Pop(2)
0x152: PushEmpty()
0x153: Call2 0x209

0x154: Pop(0)
0x155: PushEmpty(object)
0x156: Call2 0x15b

0x157: Pop(0)
0x158: @ RemoveActor(Stack[-1])
0x159: Pop(1)
0x15a: Return(); Pop(0)

0x15b: PushEmpty(object, object)
0x15c: @ self(Stack[-1])
0x15d: Pop(0)
0x15e: Stack[-1] = Stack[-3]
0x15f: Return(); Pop(2)

0x160: Stack[-1] = 0
0x161: PushEmpty(float, float)
0x162: Pop(0); Push(Stack[-3] | Stack[-3]);
0x163: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x164: Push((float)9.999999974752427e-07)
0x165: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x166: IF (Stack[-1] == 0) GOTO 0x169; Pop(1)

0x167: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x168: Return(); Pop(2)

0x169: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x16a: Return(); Pop(2)

0x16b: PushEmpty(object, object)
0x16c: @ CreateObjectVector(Stack[-1])
0x16d: Pop(0)
0x16e: Stack[-1] = Stack[-3]
0x16f: Return(); Pop(2)

0x170: Stack[-1] = 0
0x171: PushEmpty(object, object, object, object)
0x172: @ GetMainOutdoorScene(Stack[-2])
0x173: Pop(0)
0x174: Push(".bin") // @poff=1249
0x175: Pop(1); Push(Stack[-6] + Stack[-1]);
0x176: @ AddBlankActor(Stack[-2], Stack[-3], Stack[-6], Stack[-1])
0x177: Pop(1)
0x178: Stack[-1] = Stack[-6]
0x179: Return(); Pop(4)

0x17a: Stack[-1] = 0
0x17b: Stack[-2] = 0
0x17c: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x17d: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2]); Obj=12 // @poff=252
0x17e: Pop(0)
0x17f: Pop(0); Push((bool) Stack[-4] == 0)
0x180: IF (Stack[-1] == 0) GOTO 0x189; Pop(1)

0x181: Push("Locator ") // @poff=1259
0x182: Pop(1); Push(Stack[-1] + Stack[-12]);
0x183: Push(" doesn't exist") // @poff=1277
0x184: Pop(2); Push(Stack[-2] + Stack[-1]);
0x185: @ Trace(Stack[-1])
0x186: Pop(1)
0x187: Stack[-1] = 0
0x188: GOTO 0x18b

0x189: @ AddActor(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0x18a: Pop(0)
0x18b: Stack[-1] = Stack[-13]
0x18c: Return(); Pop(8)

0x18d: Stack[-1] = 0
0x18e: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x18f: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2]); Obj=12 // @poff=252
0x190: Pop(0)
0x191: Pop(0); Push((bool) Stack[-4] == 0)
0x192: IF (Stack[-1] == 0) GOTO 0x19b; Pop(1)

0x193: Push("Locator ") // @poff=1259
0x194: Pop(1); Push(Stack[-1] + Stack[-12]);
0x195: Push(" doesn't exist") // @poff=1277
0x196: Pop(2); Push(Stack[-2] + Stack[-1]);
0x197: @ Trace(Stack[-1])
0x198: Pop(1)
0x199: Stack[-1] = 0
0x19a: GOTO 0x19d

0x19b: @@ AddStationaryActor(Stack[-1], Stack[-3], Stack[-2], Stack[-10], Stack[-9]); Obj=12 // @poff=581
0x19c: Pop(0)
0x19d: Stack[-1] = Stack[-13]
0x19e: Return(); Pop(8)

0x19f: Stack[-1] = 0
0x1a0: PushEmpty(object, object)
0x1a1: @ FindActor(Stack[-1], Stack[-4])
0x1a2: Pop(0)
0x1a3: Pop(0); Push((bool) Stack[-1] == 0)
0x1a4: IF (Stack[-1] == 0) GOTO 0x1ac; Pop(1)

0x1a5: Push("Door ") // @poff=1307
0x1a6: Pop(1); Push(Stack[-1] + Stack[-5]);
0x1a7: Push(" not found") // @poff=1319
0x1a8: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1a9: @ Trace(Stack[-1])
0x1aa: Pop(1)
0x1ab: GOTO 0x1af

0x1ac: Push("locked") // @poff=1341
0x1ad: @@ SetProperty(Stack[-1], Stack[-4]); Obj=2 // @poff=1355
0x1ae: Pop(1)
0x1af: Return(); Pop(2)

0x1b0: Stack[-1] = 0
0x1b1: PushEmpty(object, object)
0x1b2: @ FindActor(Stack[-1], Stack[-4])
0x1b3: Pop(0)
0x1b4: Pop(0); Push((bool) Stack[-1] == 0)
0x1b5: IF (Stack[-1] == 0) GOTO 0x1bd; Pop(1)

0x1b6: Push("Door ") // @poff=1307
0x1b7: Pop(1); Push(Stack[-1] + Stack[-5]);
0x1b8: Push(" not found") // @poff=1319
0x1b9: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1ba: @ Trace(Stack[-1])
0x1bb: Pop(1)
0x1bc: GOTO 0x1c4

0x1bd: Push(Stack[-3])
0x1be: IF (Stack[-1] == 0) GOTO 0x1c1; Pop(1)

0x1bf: @@ Close(); Obj=1 // @poff=1367
0x1c0: Pop(0)
0x1c1: Push("locked") // @poff=1341
0x1c2: @@ SetProperty(Stack[-1], Stack[-4]); Obj=2 // @poff=1355
0x1c3: Pop(1)
0x1c4: Return(); Pop(2)

0x1c5: Stack[-1] = 0
0x1c6: PushEmpty(object, object)
0x1c7: @ FindActor(Stack[-1], Stack[-4])
0x1c8: Pop(0)
0x1c9: Pop(0); PushNull((bool) Stack[-1] == 0)
0x1ca: IF (Stack[-1] == 0) GOTO 0x1cd; Pop(1)

0x1cb: Stack[-5] = (bool) 0
0x1cc: Return(); Pop(2)

0x1cd: @ Trigger(Stack[-1], Stack[-3])
0x1ce: Pop(0)
0x1cf: Stack[-5] = (bool) 1
0x1d0: Return(); Pop(2)

0x1d1: Stack[-1] = 0
0x1d2: PushEmpty(int, int, object, int, int, object)
0x1d3: Push(Stack[-7])
0x1d4: IF (Stack[-1] == 0) GOTO 0x1e6; Pop(1)

0x1d5: @@ size(Stack[-3]); Obj=7 // @poff=1373
0x1d6: Pop(0)
0x1d7: Stack[-2] = (int) 0
0x1d8: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0x1d9: IF (Stack[-1] == 0) GOTO 0x1e4; Pop(1)

0x1da: @@ get(Stack[-1], Stack[-2]); Obj=7 // @poff=1378
0x1db: Pop(0)
0x1dc: Push(Stack[-1])
0x1dd: IF (Stack[-1] == 0) GOTO 0x1e0; Pop(1)

0x1de: @@ Remove(); Obj=1 // @poff=674
0x1df: Pop(0)
0x1e0: Stack[-1] = 0
0x1e1: Push((int) 1)
0x1e2: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x1e3: GOTO 0x1d8

0x1e4: @@ clear(); Obj=7 // @poff=1382
0x1e5: Pop(0)
0x1e6: Return(); Pop(6)

0x1e7: PushEmpty(int, int, object, int, int, object)
0x1e8: Push(Stack[-8])
0x1e9: IF (Stack[-1] == 0) GOTO 0x1f9; Pop(1)

0x1ea: @@ size(Stack[-3]); Obj=8 // @poff=1373
0x1eb: Pop(0)
0x1ec: Stack[-2] = (int) 0
0x1ed: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0x1ee: IF (Stack[-1] == 0) GOTO 0x1f9; Pop(1)

0x1ef: @@ get(Stack[-1], Stack[-2]); Obj=8 // @poff=1378
0x1f0: Pop(0)
0x1f1: Push(Stack[-1])
0x1f2: IF (Stack[-1] == 0) GOTO 0x1f5; Pop(1)

0x1f3: @ Trigger(Stack[-1], Stack[-7])
0x1f4: Pop(0)
0x1f5: Stack[-1] = 0
0x1f6: Push((int) 1)
0x1f7: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x1f8: GOTO 0x1ed

0x1f9: Return(); Pop(6)

0x1fa: PushEmpty(bool, string, string)
0x1fb: Stack[-2] = "klara2_npc_positioner" // @poff=1388
0x1fc: Stack[-1] = "init" // @poff=1432
0x1fd: Call2 0x1c6

0x1fe: Pop(3)
0x1ff: Return(); Pop(0)

0x200: PushEmpty(object, object)
0x201: Push("burah_home") // @poff=1053
0x202: @ GetSceneByName(Stack[-2], Stack[-1])
0x203: Pop(1)
0x204: Push("noburah") // @poff=1075
0x205: @ Trigger(Stack[-2], Stack[-1])
0x206: Pop(1)
0x207: Return(); Pop(2)

0x208: Stack[-1] = 0
0x209: PushEmpty(object, object)
0x20a: Push("burah_home") // @poff=1053
0x20b: @ GetSceneByName(Stack[-2], Stack[-1])
0x20c: Pop(1)
0x20d: Push("burah") // @poff=1041
0x20e: @ Trigger(Stack[-2], Stack[-1])
0x20f: Pop(1)
0x210: Return(); Pop(2)

0x211: Stack[-1] = 0
