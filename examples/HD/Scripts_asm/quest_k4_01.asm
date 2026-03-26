GlobalVarCount = 0

Strings:
	W:warehouse_gangster@door1
	W:cot_alexandr@door1
	W:init_volnica
	W:pt_k4q01_grabitel
	A:GetLocator
	W:pers_grabitel
	W:k4q01_grabitel.xml
	A:AddStationaryActor
	A:add
	W:k4q01_grabitel_e.xml
	W:grabitel_entrance_dead
	A:Remove
	W:warehouse_gangster
	W:pt_britva
	W:k4q01_britva.xml
	W:door_open
	W:cutscene
	W:door_close
	W:iwarehouse_gangster@door1
	W:pt_k4q01_meshok
	W:scripted_container
	W:k4q01_meshok.xml
	W:quest_k4_01_cutscene
	W:cutscene_end
	W:pt_britva_attack
	W:k4q01_britva_attack.xml
	W:pt_k4q01_rat
	W:pers_rat
	W:rat_indoor.xml
	W:meshok_taken
	W:warehouse_gangster_unload
	W:cleanup
	W:fail
	W:completed
	W:k4q01
	W:.bin
	W:Locator 
	W: doesn't exist
	W:Door 
	W: not found
	W:locked
	A:SetProperty
	A:size
	A:get
	A:clear
	W:Can't retrieve diary root
	A:Find
	W:Can't find diary parent with id: 
	A:AddChild
	A:GetCategory
// @pool_raw:770061007200650068006f007500730065005f00670061006e0067007300740065007200400064006f006f0072003100000063006f0074005f0061006c006500780061006e0064007200400064006f006f0072003100000069006e00690074005f0076006f006c006e006900630061000000700074005f006b0034007100300031005f0067007200610062006900740065006c0000004765744c6f6361746f720070006500720073005f0067007200610062006900740065006c0000006b0034007100300031005f0067007200610062006900740065006c002e0078006d006c00000041646453746174696f6e6172794163746f7200616464006b0034007100300031005f0067007200610062006900740065006c005f0065002e0078006d006c00000067007200610062006900740065006c005f0065006e007400720061006e00630065005f006400650061006400000052656d6f766500770061007200650068006f007500730065005f00670061006e00670073007400650072000000700074005f0062007200690074007600610000006b0034007100300031005f006200720069007400760061002e0078006d006c00000064006f006f0072005f006f00700065006e0000006300750074007300630065006e006500000064006f006f0072005f0063006c006f007300650000006900770061007200650068006f007500730065005f00670061006e0067007300740065007200400064006f006f00720031000000700074005f006b0034007100300031005f006d006500730068006f006b000000730063007200690070007400650064005f0063006f006e007400610069006e006500720000006b0034007100300031005f006d006500730068006f006b002e0078006d006c000000710075006500730074005f006b0034005f00300031005f006300750074007300630065006e00650000006300750074007300630065006e0065005f0065006e0064000000700074005f006200720069007400760061005f00610074007400610063006b0000006b0034007100300031005f006200720069007400760061005f00610074007400610063006b002e0078006d006c000000700074005f006b0034007100300031005f00720061007400000070006500720073005f0072006100740000007200610074005f0069006e0064006f006f0072002e0078006d006c0000006d006500730068006f006b005f00740061006b0065006e000000770061007200650068006f007500730065005f00670061006e00670073007400650072005f0075006e006c006f0061006400000063006c00650061006e007500700000006600610069006c00000063006f006d0070006c00650074006500640000006b00340071003000310000002e00620069006e0000004c006f006300610074006f00720020000000200064006f00650073006e0027007400200065007800690073007400000044006f006f0072002000000020006e006f007400200066006f0075006e00640000006c006f0063006b0065006400000053657450726f70657274790073697a650067657400636c65617200430061006e0027007400200072006500740072006900650076006500200064006900610072007900200072006f006f007400000046696e6400430061006e00270074002000660069006e006400200064006900610072007900200070006100720065006e007400200077006900740068002000690064003a00200000004164644368696c640047657443617465676f727900

Import:
	Hold (0 args)
	Trace (1 args)
	GetMainOutdoorScene (1 args)
	GetSceneByName (2 args)
	PlaySound (1 args)
	RemoveActor (1 args)
	AddActor (6 args)
	Trigger (2 args)
	GetVariable (2 args)
	SetVariable (2 args)
	self (1 args)
	CreateObjectVector (1 args)
	AddBlankActor (4 args)
	AddActorByType (6 args)
	FindActor (2 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (bool, object, object, object, object) Params = 0
		EVENT_26 Op = 0x12 Vars = (string)


0x0: PushEmpty(object)
0x1: Call2 0x107

0x2: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x3: Pop(1)
0x4: PushEmpty(string, bool)
0x5: Stack[-2] = "warehouse_gangster@door1" // @poff=0
0x6: Stack[-1] = (bool) 1
0x7: Call2 0x14e

0x8: Pop(2)
0x9: PushEmpty(string, bool)
0xa: Stack[-2] = "cot_alexandr@door1" // @poff=50
0xb: Stack[-1] = (bool) 0
0xc: Call2 0x14e

0xd: Pop(2)
0xe: @ Hold()
0xf: Pop(0)
0x10: GOTO 0xe

0x11: Return(); Pop(0)

0x12: PushEmpty(object, int, bool, cvector, cvector, object, object, object, object, int, bool, cvector, cvector, object, int, object, int, bool, cvector, cvector, object, object, object, object, int, bool, cvector, cvector, object, int)
0x13: @ Trace(Stack[-31])
0x14: Pop(0)
0x15: Push("init_volnica") // @poff=88
0x16: Pop(1); Push((bool) Stack[-32] == Stack[-1])
0x17: IF (Stack[-1] == 0) GOTO 0x36; Pop(1)

0x18: @ GetMainOutdoorScene(Stack[-15])
0x19: Pop(0)
0x1a: Stack[-14] = (int) 1
0x1b: Push("pt_k4q01_grabitel") // @poff=114
0x1c: Pop(1); Push(Stack[-1] + Stack[-15]);
0x1d: @@ GetLocator(Stack[-1], Stack[-14], Stack[-13], Stack[-12]); Obj=16 // @poff=150
0x1e: Pop(1)
0x1f: Pop(0); Push((bool) Stack[-13] == 0)
0x20: IF (Stack[-1] == 0) GOTO 0x22; Pop(1)

0x21: GOTO 0x2c

0x22: Push("pers_grabitel") // @poff=161
0x23: Push("k4q01_grabitel.xml") // @poff=189
0x24: @@ AddStationaryActor(Stack[-12], Stack[-14], Stack[-13], Stack[-2], Stack[-1]); Obj=17 // @poff=227
0x25: Pop(2)
0x26: @@@ add(Stack[-10]); Obj=1 // @poff=246
0x27: Pop(0)
0x28: Stack[-10] = 0
0x29: Push((int) 1)
0x2a: Stack[-15] = Stack[-15] + Stack[-1]; Pop(1);
0x2b: GOTO 0x1b

0x2c: PushEmpty(object, object, string, string, string)
0x2d: Stack[-20] = Stack[-4]
0x2e: Stack[-3] = "pt_k4q01_grabitel" // @poff=114
0x2f: Stack[-2] = "pers_grabitel" // @poff=161
0x30: Stack[-1] = "k4q01_grabitel_e.xml" // @poff=250
0x31: Call2 0x13c

0x32: Stack[2 + Tasks[-1].StackPointer] = Stack[-5]
0x33: Pop(5)
0x34: Stack[-15] = 0
0x35: GOTO 0xcf

0x36: Push("grabitel_entrance_dead") // @poff=292
0x37: Pop(1); Push((bool) Stack[-32] == Stack[-1])
0x38: IF (Stack[-1] == 0) GOTO 0x52; Pop(1)

0x39: PushEmpty(string, bool)
0x3a: Stack[-2] = "warehouse_gangster@door1" // @poff=0
0x3b: Stack[-1] = (bool) 0
0x3c: Call2 0x14e

0x3d: Pop(2)
0x3e: Push( Stack[2 + Tasks[-1].StackPointer] )
0x3f: IF (Stack[-1] == 0) GOTO 0x42; Pop(1)

0x40: @@@ Remove(); Obj=2 // @poff=338
0x41: Pop(0)
0x42: Push("warehouse_gangster") // @poff=345
0x43: @ GetSceneByName(Stack[-10], Stack[-1])
0x44: Pop(1)
0x45: PushEmpty(object, object, string, string, string)
0x46: Stack[-14] = Stack[-4]
0x47: Stack[-3] = "pt_britva" // @poff=383
0x48: Stack[-2] = "pers_grabitel" // @poff=161
0x49: Stack[-1] = "k4q01_britva.xml" // @poff=403
0x4a: Call2 0x118

0x4b: Stack[4 + Tasks[-1].StackPointer] = Stack[-5]
0x4c: Pop(5)
0x4d: Push("door_open") // @poff=437
0x4e: @ PlaySound(Stack[-1])
0x4f: Pop(1)
0x50: Stack[-9] = 0
0x51: GOTO 0xcf

0x52: Push("cutscene") // @poff=457
0x53: Pop(1); Push((bool) Stack[-32] == Stack[-1])
0x54: IF (Stack[-1] == 0) GOTO 0x72; Pop(1)

0x55: Push( Stack[4 + Tasks[-1].StackPointer] )
0x56: IF (Stack[-1] == 0) GOTO 0x59; Pop(1)

0x57: @ RemoveActor(Stack[-4]T)
0x58: Pop(0)
0x59: Push("warehouse_gangster") // @poff=345
0x5a: @ GetSceneByName(Stack[-9], Stack[-1])
0x5b: Pop(1)
0x5c: Push("door_close") // @poff=475
0x5d: @ PlaySound(Stack[-1])
0x5e: Pop(1)
0x5f: PushEmpty(string, bool)
0x60: Stack[-2] = "iwarehouse_gangster@door1" // @poff=497
0x61: Stack[-1] = (bool) 1
0x62: Call2 0x14e

0x63: Pop(2)
0x64: PushEmpty(object, object, string, string, string)
0x65: Stack[-13] = Stack[-4]
0x66: Stack[-3] = "pt_k4q01_meshok" // @poff=549
0x67: Stack[-2] = "scripted_container" // @poff=581
0x68: Stack[-1] = "k4q01_meshok.xml" // @poff=619
0x69: Call2 0x12a

0x6a: Stack[3 + Tasks[-1].StackPointer] = Stack[-5]
0x6b: Pop(5)
0x6c: PushEmpty(object, string)
0x6d: Stack[-1] = "quest_k4_01_cutscene" // @poff=653
0x6e: Call2 0x10d

0x6f: Pop(2)
0x70: Stack[-8] = 0
0x71: GOTO 0xcf

0x72: Push("cutscene_end") // @poff=695
0x73: Pop(1); Push((bool) Stack[-32] == Stack[-1])
0x74: IF (Stack[-1] == 0) GOTO 0x92; Pop(1)

0x75: Push("warehouse_gangster") // @poff=345
0x76: @ GetSceneByName(Stack[-8], Stack[-1])
0x77: Pop(1)
0x78: PushEmpty(object, object, string, string, string)
0x79: Stack[-12] = Stack[-4]
0x7a: Stack[-3] = "pt_britva_attack" // @poff=721
0x7b: Stack[-2] = "pers_grabitel" // @poff=161
0x7c: Stack[-1] = "k4q01_britva_attack.xml" // @poff=755
0x7d: Call2 0x118

0x7e: Pop(5)
0x7f: Stack[-6] = (int) 1
0x80: Push("pt_k4q01_rat") // @poff=803
0x81: Pop(1); Push(Stack[-1] + Stack[-7]);
0x82: @@ GetLocator(Stack[-1], Stack[-6], Stack[-5], Stack[-4]); Obj=8 // @poff=150
0x83: Pop(1)
0x84: Pop(0); Push((bool) Stack[-5] == 0)
0x85: IF (Stack[-1] == 0) GOTO 0x87; Pop(1)

0x86: GOTO 0x8f

0x87: Push("pers_rat") // @poff=829
0x88: Push("rat_indoor.xml") // @poff=847
0x89: @ AddActor(Stack[-4], Stack[-2], Stack[-9], Stack[-6], Stack[-5], Stack[-1])
0x8a: Pop(2)
0x8b: Stack[-2] = 0
0x8c: Push((int) 1)
0x8d: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x8e: GOTO 0x80

0x8f: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x90: Stack[-7] = 0
0x91: GOTO 0xcf

0x92: Push("meshok_taken") // @poff=877
0x93: Pop(1); Push((bool) Stack[-32] == Stack[-1])
0x94: IF (Stack[-1] == 0) GOTO 0xa1; Pop(1)

0x95: PushEmpty(string, bool)
0x96: Stack[-2] = "iwarehouse_gangster@door1" // @poff=497
0x97: Stack[-1] = (bool) 0
0x98: Call2 0x14e

0x99: Pop(2)
0x9a: PushEmpty()
0x9b: Call2 0x174

0x9c: Pop(0)
0x9d: Push("door_open") // @poff=437
0x9e: @ PlaySound(Stack[-1])
0x9f: Pop(1)
0xa0: GOTO 0xcf

0xa1: Push("warehouse_gangster_unload") // @poff=903
0xa2: Pop(1); Push((bool) Stack[-32] == Stack[-1])
0xa3: IF (Stack[-1] == 0) GOTO 0xb1; Pop(1)

0xa4: Push( Stack[0 + Tasks[-1].StackPointer] )
0xa5: IF (Stack[-1] == 0) GOTO 0xb0; Pop(1)

0xa6: PushEmpty(string, bool)
0xa7: Stack[-2] = "warehouse_gangster@door1" // @poff=0
0xa8: Stack[-1] = (bool) 1
0xa9: Call2 0x14e

0xaa: Pop(2)
0xab: Push( Stack[4 + Tasks[-1].StackPointer] )
0xac: IF (Stack[-1] == 0) GOTO 0xb0; Pop(1)

0xad: Push("cleanup") // @poff=955
0xae: @ Trigger(Stack[-4]T, Stack[-1])
0xaf: Pop(1)
0xb0: GOTO 0xcf

0xb1: Push("fail") // @poff=971
0xb2: Pop(1); Push((bool) Stack[-32] == Stack[-1])
0xb3: IF (Stack[-1] == 0) GOTO 0xb8; Pop(1)

0xb4: PushEmpty()
0xb5: Call2 0xd0

0xb6: Pop(0)
0xb7: GOTO 0xcf

0xb8: Push("completed") // @poff=981
0xb9: Pop(1); Push((bool) Stack[-32] == Stack[-1])
0xba: IF (Stack[-1] == 0) GOTO 0xbf; Pop(1)

0xbb: PushEmpty()
0xbc: Call2 0xd8

0xbd: Pop(0)
0xbe: GOTO 0xcf

0xbf: Push("cleanup") // @poff=955
0xc0: Pop(1); Push((bool) Stack[-32] == Stack[-1])
0xc1: IF (Stack[-1] == 0) GOTO 0xcf; Pop(1)

0xc2: Push("k4q01") // @poff=1001
0xc3: @ GetVariable(Stack[-1], Stack[-2])
0xc4: Pop(1)
0xc5: Push((int) 1000)
0xc6: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0xc7: IF (Stack[-1] == 0) GOTO 0xcc; Pop(1)

0xc8: PushEmpty()
0xc9: Call2 0xd0

0xca: Pop(0)
0xcb: GOTO 0xcf

0xcc: PushEmpty()
0xcd: Call2 0xe0

0xce: Pop(0)
0xcf: Return(); Pop(30)

0xd0: Push("k4q01") // @poff=1001
0xd1: Push((int) -1)
0xd2: @ SetVariable(Stack[-2], Stack[-1])
0xd3: Pop(2)
0xd4: PushEmpty()
0xd5: Call2 0xe0

0xd6: Pop(0)
0xd7: Return(); Pop(0)

0xd8: Push("k4q01") // @poff=1001
0xd9: Push((int) 1000)
0xda: @ SetVariable(Stack[-2], Stack[-1])
0xdb: Pop(2)
0xdc: PushEmpty()
0xdd: Call2 0xe0

0xde: Pop(0)
0xdf: Return(); Pop(0)

0xe0: EventDisable(26)
0xe1: Push( Stack[1 + Tasks[-1].StackPointer] )
0xe2: IF (Stack[-1] == 0) GOTO 0xe8; Pop(1)

0xe3: PushEmpty(object)
0xe4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xe5: Call2 0x15f

0xe6: Pop(1)
0xe7: Stack[1 + Tasks[-1].StackPointer] = 0
0xe8: Push( Stack[2 + Tasks[-1].StackPointer] )
0xe9: IF (Stack[-1] == 0) GOTO 0xec; Pop(1)

0xea: @@@ Remove(); Obj=2 // @poff=338
0xeb: Pop(0)
0xec: Push( Stack[3 + Tasks[-1].StackPointer] )
0xed: IF (Stack[-1] == 0) GOTO 0xf1; Pop(1)

0xee: Push("cleanup") // @poff=955
0xef: @ Trigger(Stack[-3]T, Stack[-1])
0xf0: Pop(1)
0xf1: Push( Stack[4 + Tasks[-1].StackPointer] )
0xf2: IF (Stack[-1] == 0) GOTO 0xf6; Pop(1)

0xf3: Push("cleanup") // @poff=955
0xf4: @ Trigger(Stack[-4]T, Stack[-1])
0xf5: Pop(1)
0xf6: PushEmpty(string, bool)
0xf7: Stack[-2] = "iwarehouse_gangster@door1" // @poff=497
0xf8: Stack[-1] = (bool) 0
0xf9: Call2 0x14e

0xfa: Pop(2)
0xfb: PushEmpty(object)
0xfc: Call2 0x101

0xfd: Pop(0)
0xfe: @ RemoveActor(Stack[-1])
0xff: Pop(1)
0x100: Return(); Pop(0)

0x101: PushEmpty(object, object)
0x102: @ self(Stack[-1])
0x103: Pop(0)
0x104: Stack[-1] = Stack[-3]
0x105: Return(); Pop(2)

0x106: Stack[-1] = 0
0x107: PushEmpty(object, object)
0x108: @ CreateObjectVector(Stack[-1])
0x109: Pop(0)
0x10a: Stack[-1] = Stack[-3]
0x10b: Return(); Pop(2)

0x10c: Stack[-1] = 0
0x10d: PushEmpty(object, object, object, object)
0x10e: @ GetMainOutdoorScene(Stack[-2])
0x10f: Pop(0)
0x110: Push(".bin") // @poff=1013
0x111: Pop(1); Push(Stack[-6] + Stack[-1]);
0x112: @ AddBlankActor(Stack[-2], Stack[-3], Stack[-6], Stack[-1])
0x113: Pop(1)
0x114: Stack[-1] = Stack[-6]
0x115: Return(); Pop(4)

0x116: Stack[-1] = 0
0x117: Stack[-2] = 0
0x118: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x119: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2]); Obj=12 // @poff=150
0x11a: Pop(0)
0x11b: Pop(0); Push((bool) Stack[-4] == 0)
0x11c: IF (Stack[-1] == 0) GOTO 0x125; Pop(1)

0x11d: Push("Locator ") // @poff=1023
0x11e: Pop(1); Push(Stack[-1] + Stack[-12]);
0x11f: Push(" doesn't exist") // @poff=1041
0x120: Pop(2); Push(Stack[-2] + Stack[-1]);
0x121: @ Trace(Stack[-1])
0x122: Pop(1)
0x123: Stack[-1] = 0
0x124: GOTO 0x127

0x125: @ AddActor(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0x126: Pop(0)
0x127: Stack[-1] = Stack[-13]
0x128: Return(); Pop(8)

0x129: Stack[-1] = 0
0x12a: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x12b: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2]); Obj=12 // @poff=150
0x12c: Pop(0)
0x12d: Pop(0); Push((bool) Stack[-4] == 0)
0x12e: IF (Stack[-1] == 0) GOTO 0x137; Pop(1)

0x12f: Push("Locator ") // @poff=1023
0x130: Pop(1); Push(Stack[-1] + Stack[-12]);
0x131: Push(" doesn't exist") // @poff=1041
0x132: Pop(2); Push(Stack[-2] + Stack[-1]);
0x133: @ Trace(Stack[-1])
0x134: Pop(1)
0x135: Stack[-1] = 0
0x136: GOTO 0x139

0x137: @ AddActorByType(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0x138: Pop(0)
0x139: Stack[-1] = Stack[-13]
0x13a: Return(); Pop(8)

0x13b: Stack[-1] = 0
0x13c: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x13d: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2]); Obj=12 // @poff=150
0x13e: Pop(0)
0x13f: Pop(0); Push((bool) Stack[-4] == 0)
0x140: IF (Stack[-1] == 0) GOTO 0x149; Pop(1)

0x141: Push("Locator ") // @poff=1023
0x142: Pop(1); Push(Stack[-1] + Stack[-12]);
0x143: Push(" doesn't exist") // @poff=1041
0x144: Pop(2); Push(Stack[-2] + Stack[-1]);
0x145: @ Trace(Stack[-1])
0x146: Pop(1)
0x147: Stack[-1] = 0
0x148: GOTO 0x14b

0x149: @@ AddStationaryActor(Stack[-1], Stack[-3], Stack[-2], Stack[-10], Stack[-9]); Obj=12 // @poff=227
0x14a: Pop(0)
0x14b: Stack[-1] = Stack[-13]
0x14c: Return(); Pop(8)

0x14d: Stack[-1] = 0
0x14e: PushEmpty(object, object)
0x14f: @ FindActor(Stack[-1], Stack[-4])
0x150: Pop(0)
0x151: Pop(0); Push((bool) Stack[-1] == 0)
0x152: IF (Stack[-1] == 0) GOTO 0x15a; Pop(1)

0x153: Push("Door ") // @poff=1071
0x154: Pop(1); Push(Stack[-1] + Stack[-5]);
0x155: Push(" not found") // @poff=1083
0x156: Pop(2); Push(Stack[-2] + Stack[-1]);
0x157: @ Trace(Stack[-1])
0x158: Pop(1)
0x159: GOTO 0x15d

0x15a: Push("locked") // @poff=1105
0x15b: @@ SetProperty(Stack[-1], Stack[-4]); Obj=2 // @poff=1119
0x15c: Pop(1)
0x15d: Return(); Pop(2)

0x15e: Stack[-1] = 0
0x15f: PushEmpty(int, int, object, int, int, object)
0x160: Push(Stack[-7])
0x161: IF (Stack[-1] == 0) GOTO 0x173; Pop(1)

0x162: @@ size(Stack[-3]); Obj=7 // @poff=1131
0x163: Pop(0)
0x164: Stack[-2] = (int) 0
0x165: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0x166: IF (Stack[-1] == 0) GOTO 0x171; Pop(1)

0x167: @@ get(Stack[-1], Stack[-2]); Obj=7 // @poff=1136
0x168: Pop(0)
0x169: Push(Stack[-1])
0x16a: IF (Stack[-1] == 0) GOTO 0x16d; Pop(1)

0x16b: @@ Remove(); Obj=1 // @poff=338
0x16c: Pop(0)
0x16d: Stack[-1] = 0
0x16e: Push((int) 1)
0x16f: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x170: GOTO 0x165

0x171: @@ clear(); Obj=7 // @poff=1140
0x172: Pop(0)
0x173: Return(); Pop(6)

0x174: PushEmpty(object, object)
0x175: Push((int) 373)
0x176: Push((int) 1)
0x177: Push((int) 525730)
0x178: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x179: Pop(3)
0x17a: PushEmpty(bool, object, int)
0x17b: Stack[-4] = Stack[-2]
0x17c: Stack[-1] = (int) 368
0x17d: Call2 0x18e

0x17e: Pop(3)
0x17f: Return(); Pop(2)

0x180: Stack[-1] = 0
0x181: PushEmpty(object, object)
0x182: @ GetDiaryRoot(Stack[-1])
0x183: Pop(0)
0x184: Pop(0); Push((bool) Stack[-1] == 0)
0x185: IF (Stack[-1] == 0) GOTO 0x18b; Pop(1)

0x186: Push("Can't retrieve diary root") // @poff=1146
0x187: @ Trace(Stack[-1])
0x188: Pop(1)
0x189: Stack[-3] = (bool) 0
0x18a: Return(); Pop(2)

0x18b: Stack[-1] = Stack[-3]
0x18c: Return(); Pop(2)

0x18d: Stack[-1] = 0
0x18e: PushEmpty(object, object, int, object, object, int)
0x18f: PushEmpty(object)
0x190: Call2 0x181

0x191: Stack[-1] = Stack[-4]
0x192: Pop(1)
0x193: @@ Find(Stack[-7], Stack[-2]); Obj=3 // @poff=1198
0x194: Pop(0)
0x195: Pop(0); Push((bool) Stack[-2] == 0)
0x196: IF (Stack[-1] == 0) GOTO 0x19d; Pop(1)

0x197: Push("Can't find diary parent with id: ") // @poff=1203
0x198: Pop(1); Push(Stack[-1] + Stack[-8]);
0x199: @ Trace(Stack[-1])
0x19a: Pop(1)
0x19b: Stack[-9] = (bool) 0
0x19c: Return(); Pop(6)

0x19d: @@ AddChild(Stack[-8]); Obj=2 // @poff=1271
0x19e: Pop(0)
0x19f: Push((int) 7)
0x1a0: @ SendWorldWndMessage(Stack[-1])
0x1a1: Pop(1)
0x1a2: @@ GetCategory(Stack[-1]); Obj=8 // @poff=1280
0x1a3: Pop(0)
0x1a4: @ SetDiarySection(Stack[-1])
0x1a5: Pop(0)
0x1a6: Stack[-9] = (bool) 0
0x1a7: Return(); Pop(6)

0x1a8: Stack[-2] = 0
0x1a9: Stack[-3] = 0
