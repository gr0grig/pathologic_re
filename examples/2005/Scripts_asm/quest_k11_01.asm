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
	W:cure_officer
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
	A:AddStationaryActor
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
// @pool_raw:63006f0074005f0065007600610000006e006f00640061006e006b006f000000690063006f0074005f006500760061005f0064006f006f0072000000730068006f0075007300650031005f006b006100620061006b0000006e006f0061006e0064007200650069000000770061007200650068006f007500730065005f0072007500620069006e00000073006f0062006f007200400064006f006f0072003100000069006e00690074005f006b006100620061006b000000700074005f006b00310031007100300031005f0073006f006c00640069006500720000004765744c6f6361746f720070006500720073005f0073006f006c0064006100740000006b00310031007100300031005f006b006100620061006b005f0073006f006c0064006900650072002e0078006d006c00000061646400700074005f006b00310031007100300031005f006f0066006600690063006500720000006b00310031007100300031005f006b006100620061006b005f006f006600660069006300650072002e0078006d006c00000069006e00690074005f00670075006e0000006b00310031007100300031005f0073006f006c0064006900650072002e0078006d006c000000700074005f006b00310031007100300031005f00610067006f006e0079005f006f0066006600690063006500720000006b00310031007100300031005f006f006600660069006300650072005f00610067006f006e0079002e0078006d006c00000063007500720065005f006f0066006600690063006500720000004765744163746f720052656d6f7665006b0031003100710030003100430075007200650064000000710075006500730074005f006b00310031005f00300031005f006300750074007300630065006e00650000006300750074007300630065006e0065005f0065006e00640000006b00310031007100300031005f006f006600660069006300650072002e0078006d006c00000069006e00690074005f0068006f007500730065005f0070006500740072000000700074005f006b00310031007100300031005f0061006e00640072006500690000004e00500043005f0041006e00640072006500690000006b00310031007100300031005f0061006e0064007200650069002e0078006d006c000000700074005f006b00310031007100300031005f00640061006e006b006f0000004e00500043005f00420061006b0061006c0061007600720000006b00310031007100300031005f00640061006e006b006f002e0078006d006c00000070006c006100630065005f00620075007200610068000000620075007200610068005f0068006f006d00650000006e006f0062007500720061006800000062006f0069006e0079000000700074005f006b00310031007100300031005f006200750072006100680000004e00500043005f004200750072006100680000006b00310031007100300031005f00620075007200610068002e0078006d006c0000006600610069006c00000063006f006d0070006c006500740065006400000063006c00650061006e007500700000006b003100310071003000310000002e00620069006e0000004c006f006300610074006f00720020000000200064006f00650073006e0027007400200065007800690073007400000041646453746174696f6e6172794163746f720044006f006f0072002000000020006e006f007400200066006f0075006e00640000006c006f0063006b0065006400000053657450726f706572747900436c6f73650073697a650067657400636c656172006b006c0061007200610032005f006e00700063005f0070006f0073006900740069006f006e0065007200000069006e00690074000000

Import:
	GetSceneByName (2 args)
	Trigger (2 args)
	Hold (0 args)
	Trace (1 args)
	GetMainOutdoorScene (1 args)
	RemoveActor (1 args)
	SetVariable (2 args)
	GetVariable (2 args)
	self (1 args)
	CreateObjectVector (1 args)
	AddBlankActor (4 args)
	AddActor (6 args)
	FindActor (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object, object, object, object, object, object, object, object) Params = 0
		EVENT_26 Op = 0x2a Vars = (string)


0x0: PushEmpty(object, object)
0x1: PushEmpty(object)
0x2: Call2 0x140

0x3: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x4: Pop(1)
0x5: PushEmpty(object)
0x6: Call2 0x140

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
0x12: Call2 0x199

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
0x23: Call2 0x188

0x24: Pop(2)
0x25: @ Hold()
0x26: Pop(0)
0x27: GOTO 0x25

0x28: Return(); Pop(2)

0x29: Stack[-1] = 0
0x2a: PushEmpty(object, int, bool, cvector, cvector, object, int, bool, cvector, cvector, object, object, object, object, int, object, int, bool, cvector, cvector, object, int, bool, cvector, cvector, object, object, object, object, int)
0x2b: @ Trace(Stack[-31])
0x2c: Pop(0)
0x2d: Push("init_kabak") // @poff=162
0x2e: Pop(1); Push((bool) Stack[-32] == Stack[-1])
0x2f: IF (Stack[-1] == 0) GOTO 0x52; Pop(1)

0x30: Push("shouse1_kabak") // @poff=60
0x31: @ GetSceneByName(Stack[-16], Stack[-1])
0x32: Pop(1)
0x33: Stack[-14] = (int) 1
0x34: Push("pt_k11q01_soldier") // @poff=184
0x35: Pop(1); Push(Stack[-1] + Stack[-15]);
0x36: @@ GetLocator(Stack[-1], Stack[-14], Stack[-13], Stack[-12]); Obj=16 // @poff=220
0x37: Pop(1)
0x38: Pop(0); Push((bool) Stack[-13] == 0)
0x39: IF (Stack[-1] == 0) GOTO 0x3b; Pop(1)

0x3a: GOTO 0x48

0x3b: PushEmpty(object, object, string, string, string)
0x3c: Stack[-20] = Stack[-4]
0x3d: Push("pt_k11q01_soldier") // @poff=184
0x3e: Stack[-4] = Stack[-1] + Stack[-20]; Pop(1);
0x3f: Stack[-2] = "pers_soldat" // @poff=231
0x40: Stack[-1] = "k11q01_kabak_soldier.xml" // @poff=255
0x41: Call2 0x151

0x42: Pop(4)
0x43: @@@ add(Stack[-1]); Obj=0 // @poff=305
0x44: Pop(1)
0x45: Push((int) 1)
0x46: Stack[-15] = Stack[-15] + Stack[-1]; Pop(1);
0x47: GOTO 0x34

0x48: PushEmpty(object, object, string, string, string)
0x49: Stack[-20] = Stack[-4]
0x4a: Stack[-3] = "pt_k11q01_officer" // @poff=309
0x4b: Stack[-2] = "pers_soldat" // @poff=231
0x4c: Stack[-1] = "k11q01_kabak_officer.xml" // @poff=345
0x4d: Call2 0x151

0x4e: Stack[1 + Tasks[-1].StackPointer] = Stack[-5]
0x4f: Pop(5)
0x50: Stack[-15] = 0
0x51: GOTO 0xec

0x52: Push("init_gun") // @poff=395
0x53: Pop(1); Push((bool) Stack[-32] == Stack[-1])
0x54: IF (Stack[-1] == 0) GOTO 0x76; Pop(1)

0x55: @ GetMainOutdoorScene(Stack[-10])
0x56: Pop(0)
0x57: Stack[-9] = (int) 1
0x58: Push("pt_k11q01_soldier") // @poff=184
0x59: Pop(1); Push(Stack[-1] + Stack[-10]);
0x5a: @@ GetLocator(Stack[-1], Stack[-9], Stack[-8], Stack[-7]); Obj=11 // @poff=220
0x5b: Pop(1)
0x5c: Pop(0); Push((bool) Stack[-8] == 0)
0x5d: IF (Stack[-1] == 0) GOTO 0x5f; Pop(1)

0x5e: GOTO 0x6c

0x5f: PushEmpty(object, object, string, string, string)
0x60: Stack[-15] = Stack[-4]
0x61: Push("pt_k11q01_soldier") // @poff=184
0x62: Stack[-4] = Stack[-1] + Stack[-15]; Pop(1);
0x63: Stack[-2] = "pers_soldat" // @poff=231
0x64: Stack[-1] = "k11q01_soldier.xml" // @poff=413
0x65: Call2 0x163

0x66: Pop(4)
0x67: @@@ add(Stack[-1]); Obj=2 // @poff=305
0x68: Pop(1)
0x69: Push((int) 1)
0x6a: Stack[-10] = Stack[-10] + Stack[-1]; Pop(1);
0x6b: GOTO 0x58

0x6c: PushEmpty(object, object, string, string, string)
0x6d: Stack[-15] = Stack[-4]
0x6e: Stack[-3] = "pt_k11q01_agony_officer" // @poff=451
0x6f: Stack[-2] = "pers_soldat" // @poff=231
0x70: Stack[-1] = "k11q01_officer_agony.xml" // @poff=499
0x71: Call2 0x163

0x72: Stack[4 + Tasks[-1].StackPointer] = Stack[-5]
0x73: Pop(5)
0x74: Stack[-10] = 0
0x75: GOTO 0xec

0x76: Push("cure_officer") // @poff=549
0x77: Pop(1); Push((bool) Stack[-32] == Stack[-1])
0x78: IF (Stack[-1] == 0) GOTO 0x8b; Pop(1)

0x79: @@@ GetActor(Stack[-5]); Obj=4 // @poff=575
0x7a: Pop(0)
0x7b: Push(Stack[-5])
0x7c: IF (Stack[-1] == 0) GOTO 0x7f; Pop(1)

0x7d: @ RemoveActor(Stack[-5])
0x7e: Pop(0)
0x7f: @@@ Remove(); Obj=4 // @poff=584
0x80: Pop(0)
0x81: Push("k11q01Cured") // @poff=591
0x82: Push((int) 1)
0x83: @ SetVariable(Stack[-2], Stack[-1])
0x84: Pop(2)
0x85: PushEmpty(object, string)
0x86: Stack[-1] = "quest_k11_01_cutscene" // @poff=615
0x87: Call2 0x146

0x88: Pop(2)
0x89: Stack[-5] = 0
0x8a: GOTO 0xec

0x8b: Push("cutscene_end") // @poff=659
0x8c: Pop(1); Push((bool) Stack[-32] == Stack[-1])
0x8d: IF (Stack[-1] == 0) GOTO 0x9a; Pop(1)

0x8e: @ GetMainOutdoorScene(Stack[-4])
0x8f: Pop(0)
0x90: PushEmpty(object, object, string, string, string)
0x91: Stack[-9] = Stack[-4]
0x92: Stack[-3] = "pt_k11q01_officer" // @poff=309
0x93: Stack[-2] = "pers_soldat" // @poff=231
0x94: Stack[-1] = "k11q01_officer.xml" // @poff=685
0x95: Call2 0x175

0x96: Stack[3 + Tasks[-1].StackPointer] = Stack[-5]
0x97: Pop(5)
0x98: Stack[-4] = 0
0x99: GOTO 0xec

0x9a: Push("init_house_petr") // @poff=723
0x9b: Pop(1); Push((bool) Stack[-32] == Stack[-1])
0x9c: IF (Stack[-1] == 0) GOTO 0xb2; Pop(1)

0x9d: Push("house_petr") // @poff=733
0x9e: @ GetSceneByName(Stack[-4], Stack[-1])
0x9f: Pop(1)
0xa0: PushEmpty(object, object, string, string, string)
0xa1: Stack[-8] = Stack[-4]
0xa2: Stack[-3] = "pt_k11q01_andrei" // @poff=755
0xa3: Stack[-2] = "NPC_Andrei" // @poff=789
0xa4: Stack[-1] = "k11q01_andrei.xml" // @poff=811
0xa5: Call2 0x151

0xa6: Stack[7 + Tasks[-1].StackPointer] = Stack[-5]
0xa7: Pop(5)
0xa8: PushEmpty(object, object, string, string, string)
0xa9: Stack[-8] = Stack[-4]
0xaa: Stack[-3] = "pt_k11q01_danko" // @poff=847
0xab: Stack[-2] = "NPC_Bakalavr" // @poff=879
0xac: Stack[-1] = "k11q01_danko.xml" // @poff=905
0xad: Call2 0x151

0xae: Stack[5 + Tasks[-1].StackPointer] = Stack[-5]
0xaf: Pop(5)
0xb0: Stack[-3] = 0
0xb1: GOTO 0xec

0xb2: Push("place_burah") // @poff=939
0xb3: Pop(1); Push((bool) Stack[-32] == Stack[-1])
0xb4: IF (Stack[-1] == 0) GOTO 0xc8; Pop(1)

0xb5: Push("burah_home") // @poff=963
0xb6: @ GetSceneByName(Stack[-3], Stack[-1])
0xb7: Pop(1)
0xb8: Push("noburah") // @poff=985
0xb9: @ Trigger(Stack[-3], Stack[-1])
0xba: Pop(1)
0xbb: Push("boiny") // @poff=1001
0xbc: @ GetSceneByName(Stack[-3], Stack[-1])
0xbd: Pop(1)
0xbe: PushEmpty(object, object, string, string, string)
0xbf: Stack[-7] = Stack[-4]
0xc0: Stack[-3] = "pt_k11q01_burah" // @poff=1013
0xc1: Stack[-2] = "NPC_Burah" // @poff=1045
0xc2: Stack[-1] = "k11q01_burah.xml" // @poff=1065
0xc3: Call2 0x151

0xc4: Stack[6 + Tasks[-1].StackPointer] = Stack[-5]
0xc5: Pop(5)
0xc6: Stack[-2] = 0
0xc7: GOTO 0xec

0xc8: Push("fail") // @poff=1099
0xc9: Pop(1); Push((bool) Stack[-32] == Stack[-1])
0xca: IF (Stack[-1] == 0) GOTO 0xd2; Pop(1)

0xcb: PushEmpty()
0xcc: Call2 0x1e2

0xcd: Pop(0)
0xce: PushEmpty()
0xcf: Call2 0xed

0xd0: Pop(0)
0xd1: GOTO 0xec

0xd2: Push("completed") // @poff=1109
0xd3: Pop(1); Push((bool) Stack[-32] == Stack[-1])
0xd4: IF (Stack[-1] == 0) GOTO 0xdc; Pop(1)

0xd5: PushEmpty()
0xd6: Call2 0x1e2

0xd7: Pop(0)
0xd8: PushEmpty()
0xd9: Call2 0xf5

0xda: Pop(0)
0xdb: GOTO 0xec

0xdc: Push("cleanup") // @poff=1129
0xdd: Pop(1); Push((bool) Stack[-32] == Stack[-1])
0xde: IF (Stack[-1] == 0) GOTO 0xec; Pop(1)

0xdf: Push("k11q01") // @poff=1145
0xe0: @ GetVariable(Stack[-1], Stack[-2])
0xe1: Pop(1)
0xe2: Push((int) 1000)
0xe3: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0xe4: IF (Stack[-1] == 0) GOTO 0xe9; Pop(1)

0xe5: PushEmpty()
0xe6: Call2 0xed

0xe7: Pop(0)
0xe8: GOTO 0xec

0xe9: PushEmpty()
0xea: Call2 0xfd

0xeb: Pop(0)
0xec: Return(); Pop(30)

0xed: Push("k11q01") // @poff=1145
0xee: Push((int) -1)
0xef: @ SetVariable(Stack[-2], Stack[-1])
0xf0: Pop(2)
0xf1: PushEmpty()
0xf2: Call2 0xfd

0xf3: Pop(0)
0xf4: Return(); Pop(0)

0xf5: Push("k11q01") // @poff=1145
0xf6: Push((int) 1000)
0xf7: @ SetVariable(Stack[-2], Stack[-1])
0xf8: Pop(2)
0xf9: PushEmpty()
0xfa: Call2 0xfd

0xfb: Pop(0)
0xfc: Return(); Pop(0)

0xfd: PushEmpty(object, object)
0xfe: EventDisable(26)
0xff: Push("cot_eva") // @poff=0
0x100: @ GetSceneByName(Stack[-2], Stack[-1])
0x101: Pop(1)
0x102: Push("danko") // @poff=20
0x103: @ Trigger(Stack[-2], Stack[-1])
0x104: Pop(1)
0x105: Push("shouse1_kabak") // @poff=60
0x106: @ GetSceneByName(Stack[-2], Stack[-1])
0x107: Pop(1)
0x108: Push("andrei") // @poff=92
0x109: @ Trigger(Stack[-2], Stack[-1])
0x10a: Pop(1)
0x10b: Push("burah_home") // @poff=963
0x10c: @ GetSceneByName(Stack[-2], Stack[-1])
0x10d: Pop(1)
0x10e: Push("burah") // @poff=951
0x10f: @ Trigger(Stack[-2], Stack[-1])
0x110: Pop(1)
0x111: PushEmpty(object, string)
0x112: Stack[-2] = Stack[0 + Tasks[-1].StackPointer]
0x113: Stack[-1] = "cleanup" // @poff=1129
0x114: Call2 0x1cf

0x115: Pop(2)
0x116: Push( Stack[1 + Tasks[-1].StackPointer] )
0x117: IF (Stack[-1] == 0) GOTO 0x11b; Pop(1)

0x118: Push("cleanup") // @poff=1129
0x119: @ Trigger(Stack[-1]T, Stack[-1])
0x11a: Pop(1)
0x11b: PushEmpty(object)
0x11c: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x11d: Call2 0x1ba

0x11e: Pop(1)
0x11f: Push( Stack[3 + Tasks[-1].StackPointer] )
0x120: IF (Stack[-1] == 0) GOTO 0x124; Pop(1)

0x121: Push("cleanup") // @poff=1129
0x122: @ Trigger(Stack[-3]T, Stack[-1])
0x123: Pop(1)
0x124: Push( Stack[5 + Tasks[-1].StackPointer] )
0x125: IF (Stack[-1] == 0) GOTO 0x129; Pop(1)

0x126: Push("cleanup") // @poff=1129
0x127: @ Trigger(Stack[-5]T, Stack[-1])
0x128: Pop(1)
0x129: Push( Stack[6 + Tasks[-1].StackPointer] )
0x12a: IF (Stack[-1] == 0) GOTO 0x12e; Pop(1)

0x12b: Push("cleanup") // @poff=1129
0x12c: @ Trigger(Stack[-6]T, Stack[-1])
0x12d: Pop(1)
0x12e: Push( Stack[7 + Tasks[-1].StackPointer] )
0x12f: IF (Stack[-1] == 0) GOTO 0x133; Pop(1)

0x130: Push("cleanup") // @poff=1129
0x131: @ Trigger(Stack[-7]T, Stack[-1])
0x132: Pop(1)
0x133: PushEmpty(object)
0x134: Call2 0x13a

0x135: Pop(0)
0x136: @ RemoveActor(Stack[-1])
0x137: Pop(1)
0x138: Return(); Pop(2)

0x139: Stack[-1] = 0
0x13a: PushEmpty(object, object)
0x13b: @ self(Stack[-1])
0x13c: Pop(0)
0x13d: Stack[-1] = Stack[-3]
0x13e: Return(); Pop(2)

0x13f: Stack[-1] = 0
0x140: PushEmpty(object, object)
0x141: @ CreateObjectVector(Stack[-1])
0x142: Pop(0)
0x143: Stack[-1] = Stack[-3]
0x144: Return(); Pop(2)

0x145: Stack[-1] = 0
0x146: PushEmpty(object, object, object, object)
0x147: @ GetMainOutdoorScene(Stack[-2])
0x148: Pop(0)
0x149: Push(".bin") // @poff=1159
0x14a: Pop(1); Push(Stack[-6] + Stack[-1]);
0x14b: @ AddBlankActor(Stack[-2], Stack[-3], Stack[-6], Stack[-1])
0x14c: Pop(1)
0x14d: Stack[-1] = Stack[-6]
0x14e: Return(); Pop(4)

0x14f: Stack[-1] = 0
0x150: Stack[-2] = 0
0x151: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x152: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2]); Obj=12 // @poff=220
0x153: Pop(0)
0x154: Pop(0); Push((bool) Stack[-4] == 0)
0x155: IF (Stack[-1] == 0) GOTO 0x15e; Pop(1)

0x156: Push("Locator ") // @poff=1169
0x157: Pop(1); Push(Stack[-1] + Stack[-12]);
0x158: Push(" doesn't exist") // @poff=1187
0x159: Pop(2); Push(Stack[-2] + Stack[-1]);
0x15a: @ Trace(Stack[-1])
0x15b: Pop(1)
0x15c: Stack[-1] = 0
0x15d: GOTO 0x160

0x15e: @ AddActor(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0x15f: Pop(0)
0x160: Stack[-1] = Stack[-13]
0x161: Return(); Pop(8)

0x162: Stack[-1] = 0
0x163: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x164: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2]); Obj=12 // @poff=220
0x165: Pop(0)
0x166: Pop(0); Push((bool) Stack[-4] == 0)
0x167: IF (Stack[-1] == 0) GOTO 0x170; Pop(1)

0x168: Push("Locator ") // @poff=1169
0x169: Pop(1); Push(Stack[-1] + Stack[-12]);
0x16a: Push(" doesn't exist") // @poff=1187
0x16b: Pop(2); Push(Stack[-2] + Stack[-1]);
0x16c: @ Trace(Stack[-1])
0x16d: Pop(1)
0x16e: Stack[-1] = 0
0x16f: GOTO 0x172

0x170: @@ AddStationaryActor(Stack[-1], Stack[-3], Stack[-2], Stack[-10], Stack[-9]); Obj=12 // @poff=1217
0x171: Pop(0)
0x172: Stack[-1] = Stack[-13]
0x173: Return(); Pop(8)

0x174: Stack[-1] = 0
0x175: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x176: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2]); Obj=12 // @poff=220
0x177: Pop(0)
0x178: Pop(0); Push((bool) Stack[-4] == 0)
0x179: IF (Stack[-1] == 0) GOTO 0x182; Pop(1)

0x17a: Push("Locator ") // @poff=1169
0x17b: Pop(1); Push(Stack[-1] + Stack[-12]);
0x17c: Push(" doesn't exist") // @poff=1187
0x17d: Pop(2); Push(Stack[-2] + Stack[-1]);
0x17e: @ Trace(Stack[-1])
0x17f: Pop(1)
0x180: Stack[-1] = 0
0x181: GOTO 0x185

0x182: Push((bool) 1)
0x183: @@ AddStationaryActor(Stack[-2], Stack[-4], Stack[-3], Stack[-11], Stack[-10], Stack[-1]); Obj=13 // @poff=1217
0x184: Pop(1)
0x185: Stack[-1] = Stack[-13]
0x186: Return(); Pop(8)

0x187: Stack[-1] = 0
0x188: PushEmpty(object, object)
0x189: @ FindActor(Stack[-1], Stack[-4])
0x18a: Pop(0)
0x18b: Pop(0); Push((bool) Stack[-1] == 0)
0x18c: IF (Stack[-1] == 0) GOTO 0x194; Pop(1)

0x18d: Push("Door ") // @poff=1236
0x18e: Pop(1); Push(Stack[-1] + Stack[-5]);
0x18f: Push(" not found") // @poff=1248
0x190: Pop(2); Push(Stack[-2] + Stack[-1]);
0x191: @ Trace(Stack[-1])
0x192: Pop(1)
0x193: GOTO 0x197

0x194: Push("locked") // @poff=1270
0x195: @@ SetProperty(Stack[-1], Stack[-4]); Obj=2 // @poff=1284
0x196: Pop(1)
0x197: Return(); Pop(2)

0x198: Stack[-1] = 0
0x199: PushEmpty(object, object)
0x19a: @ FindActor(Stack[-1], Stack[-4])
0x19b: Pop(0)
0x19c: Pop(0); Push((bool) Stack[-1] == 0)
0x19d: IF (Stack[-1] == 0) GOTO 0x1a5; Pop(1)

0x19e: Push("Door ") // @poff=1236
0x19f: Pop(1); Push(Stack[-1] + Stack[-5]);
0x1a0: Push(" not found") // @poff=1248
0x1a1: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1a2: @ Trace(Stack[-1])
0x1a3: Pop(1)
0x1a4: GOTO 0x1ac

0x1a5: Push(Stack[-3])
0x1a6: IF (Stack[-1] == 0) GOTO 0x1a9; Pop(1)

0x1a7: @@ Close(); Obj=1 // @poff=1296
0x1a8: Pop(0)
0x1a9: Push("locked") // @poff=1270
0x1aa: @@ SetProperty(Stack[-1], Stack[-4]); Obj=2 // @poff=1284
0x1ab: Pop(1)
0x1ac: Return(); Pop(2)

0x1ad: Stack[-1] = 0
0x1ae: PushEmpty(object, object)
0x1af: @ FindActor(Stack[-1], Stack[-4])
0x1b0: Pop(0)
0x1b1: Pop(0); PushNull((bool) Stack[-1] == 0)
0x1b2: IF (Stack[-1] == 0) GOTO 0x1b5; Pop(1)

0x1b3: Stack[-5] = (bool) 0
0x1b4: Return(); Pop(2)

0x1b5: @ Trigger(Stack[-1], Stack[-3])
0x1b6: Pop(0)
0x1b7: Stack[-5] = (bool) 1
0x1b8: Return(); Pop(2)

0x1b9: Stack[-1] = 0
0x1ba: PushEmpty(int, int, object, int, int, object)
0x1bb: Push(Stack[-7])
0x1bc: IF (Stack[-1] == 0) GOTO 0x1ce; Pop(1)

0x1bd: @@ size(Stack[-3]); Obj=7 // @poff=1302
0x1be: Pop(0)
0x1bf: Stack[-2] = (int) 0
0x1c0: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0x1c1: IF (Stack[-1] == 0) GOTO 0x1cc; Pop(1)

0x1c2: @@ get(Stack[-1], Stack[-2]); Obj=7 // @poff=1307
0x1c3: Pop(0)
0x1c4: Push(Stack[-1])
0x1c5: IF (Stack[-1] == 0) GOTO 0x1c8; Pop(1)

0x1c6: @@ Remove(); Obj=1 // @poff=584
0x1c7: Pop(0)
0x1c8: Stack[-1] = 0
0x1c9: Push((int) 1)
0x1ca: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x1cb: GOTO 0x1c0

0x1cc: @@ clear(); Obj=7 // @poff=1311
0x1cd: Pop(0)
0x1ce: Return(); Pop(6)

0x1cf: PushEmpty(int, int, object, int, int, object)
0x1d0: Push(Stack[-8])
0x1d1: IF (Stack[-1] == 0) GOTO 0x1e1; Pop(1)

0x1d2: @@ size(Stack[-3]); Obj=8 // @poff=1302
0x1d3: Pop(0)
0x1d4: Stack[-2] = (int) 0
0x1d5: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0x1d6: IF (Stack[-1] == 0) GOTO 0x1e1; Pop(1)

0x1d7: @@ get(Stack[-1], Stack[-2]); Obj=8 // @poff=1307
0x1d8: Pop(0)
0x1d9: Push(Stack[-1])
0x1da: IF (Stack[-1] == 0) GOTO 0x1dd; Pop(1)

0x1db: @ Trigger(Stack[-1], Stack[-7])
0x1dc: Pop(0)
0x1dd: Stack[-1] = 0
0x1de: Push((int) 1)
0x1df: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x1e0: GOTO 0x1d5

0x1e1: Return(); Pop(6)

0x1e2: PushEmpty(bool, string, string)
0x1e3: Stack[-2] = "klara2_npc_positioner" // @poff=1317
0x1e4: Stack[-1] = "init" // @poff=1361
0x1e5: Call2 0x1ae

0x1e6: Pop(3)
0x1e7: Return(); Pop(0)

