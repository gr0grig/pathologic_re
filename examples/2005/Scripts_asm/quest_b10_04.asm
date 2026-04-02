GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	W:pt_b10q04_bull
	W:pers_avrox
	W:b10q04_bull.xml
	W:termitnik_mat
	W:b8q03MladVladIsVictim
	W:pt_b10q04_prisoner
	W:NPC_MladVlad
	W:b10q04_mladvlad.xml
	W:NPC_BigVlad
	W:b10q04_bigvlad.xml
	W:place_morloks
	W:pt_b10q04_morlok
	W:pers_morlok
	W:b10q04_morlok.xml
	A:add
	W:pt_b10q04_morlok_mishka
	W:b10q04_morlok_mishka.xml
	W:pt_b10q04_morlok_laska
	W:b10q04_morlok_laska.xml
	W:pt_b10q04_morlok_spi4ka
	W:b10q04_morlok_spi4ka.xml
	W:init_storojka
	W:nolaska
	W:pt_b10q04_girl
	W:pers_girl
	W:b10q04_girl_laska.xml
	W:uprava_admin
	W:pt_b10q04_klara
	W:NPC_Klara
	W:b10q04_klara.xml
	W:vagon_army@door1
	W:vagon_army
	W:pt_b10q04_laska
	W:NPC_Laska
	W:b10q04_laska.xml
	W:pt_b10q04_officer
	W:pers_soldat
	W:b10q04_officer.xml
	W:restore_laska
	W:cleanup
	W:fail
	W:completed
	W:b10q04
	A:GetLocator
	W:Locator 
	W: doesn't exist
	W:Door 
	W: not found
	W:locked
	A:SetProperty
	A:size
	A:get
// @pool_raw:700074005f006200310030007100300034005f00620075006c006c00000070006500720073005f006100760072006f00780000006200310030007100300034005f00620075006c006c002e0078006d006c0000007400650072006d00690074006e0069006b005f006d00610074000000620038007100300033004d006c006100640056006c006100640049007300560069006300740069006d000000700074005f006200310030007100300034005f0070007200690073006f006e006500720000004e00500043005f004d006c006100640056006c006100640000006200310030007100300034005f006d006c006100640076006c00610064002e0078006d006c0000004e00500043005f0042006900670056006c006100640000006200310030007100300034005f0062006900670076006c00610064002e0078006d006c00000070006c006100630065005f006d006f0072006c006f006b0073000000700074005f006200310030007100300034005f006d006f0072006c006f006b00000070006500720073005f006d006f0072006c006f006b0000006200310030007100300034005f006d006f0072006c006f006b002e0078006d006c00000061646400700074005f006200310030007100300034005f006d006f0072006c006f006b005f006d006900730068006b00610000006200310030007100300034005f006d006f0072006c006f006b005f006d006900730068006b0061002e0078006d006c000000700074005f006200310030007100300034005f006d006f0072006c006f006b005f006c00610073006b00610000006200310030007100300034005f006d006f0072006c006f006b005f006c00610073006b0061002e0078006d006c000000700074005f006200310030007100300034005f006d006f0072006c006f006b005f0073007000690034006b00610000006200310030007100300034005f006d006f0072006c006f006b005f0073007000690034006b0061002e0078006d006c00000069006e00690074005f00730074006f0072006f006a006b00610000006e006f006c00610073006b0061000000700074005f006200310030007100300034005f006700690072006c00000070006500720073005f006700690072006c0000006200310030007100300034005f006700690072006c005f006c00610073006b0061002e0078006d006c0000007500700072006100760061005f00610064006d0069006e000000700074005f006200310030007100300034005f006b006c0061007200610000004e00500043005f004b006c0061007200610000006200310030007100300034005f006b006c006100720061002e0078006d006c0000007600610067006f006e005f00610072006d007900400064006f006f007200310000007600610067006f006e005f00610072006d0079000000700074005f006200310030007100300034005f006c00610073006b00610000004e00500043005f004c00610073006b00610000006200310030007100300034005f006c00610073006b0061002e0078006d006c000000700074005f006200310030007100300034005f006f00660066006900630065007200000070006500720073005f0073006f006c0064006100740000006200310030007100300034005f006f006600660069006300650072002e0078006d006c00000072006500730074006f00720065005f006c00610073006b006100000063006c00650061006e007500700000006600610069006c00000063006f006d0070006c006500740065006400000062003100300071003000340000004765744c6f6361746f72004c006f006300610074006f00720020000000200064006f00650073006e0027007400200065007800690073007400000044006f006f0072002000000020006e006f007400200066006f0075006e00640000006c006f0063006b0065006400000053657450726f70657274790073697a650067657400

Import:
	GetMainOutdoorScene (1 args)
	GetScene (1 args)
	GetSceneByName (2 args)
	GetVariable (2 args)
	Trace (1 args)
	Trigger (2 args)
	SetVariable (2 args)
	RemoveActor (1 args)
	GetGameTime (1 args)
	SetTimeEvent (2 args)
	Hold (0 args)
	self (1 args)
	CreateObjectVector (1 args)
	AddActor (6 args)
	FindActor (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object, object, object, object, object, object, object) Params = 0
		EVENT_26 Op = 0x34 Vars = (string)
		EVENT_9 Op = 0x121 Vars = (int, float)


0x0: PushEmpty(object, object, object, int, object, object, object, int)
0x1: PushEmpty(object)
0x2: Call2 0x12c

0x3: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x4: Pop(1)
0x5: @ GetMainOutdoorScene(Stack[-4])
0x6: Pop(0)
0x7: PushEmpty(object, object, string, string, string)
0x8: Stack[-9] = Stack[-4]
0x9: Stack[-3] = "pt_b10q04_bull" // @poff=0
0xa: Stack[-2] = "pers_avrox" // @poff=30
0xb: Stack[-1] = "b10q04_bull.xml" // @poff=52
0xc: Call2 0x132

0xd: Stack[1 + Tasks[-1].StackPointer] = Stack[-5]
0xe: Pop(5)
0xf: @ GetScene(Stack[-2])
0x10: Pop(0)
0x11: Push("termitnik_mat") // @poff=84
0x12: @ GetSceneByName(Stack[-4], Stack[-1])
0x13: Pop(1)
0x14: Pop(0); Push((bool) Stack[-2] != Stack[-3])
0x15: IF (Stack[-1] == 0) GOTO 0x2c; Pop(1)

0x16: Push("b8q03MladVladIsVictim") // @poff=112
0x17: @ GetVariable(Stack[-1], Stack[-2])
0x18: Pop(1)
0x19: Push(Stack[-1])
0x1a: IF (Stack[-1] == 0) GOTO 0x24; Pop(1)

0x1b: PushEmpty(object, object, string, string, string)
0x1c: Stack[-8] = Stack[-4]
0x1d: Stack[-3] = "pt_b10q04_prisoner" // @poff=156
0x1e: Stack[-2] = "NPC_MladVlad" // @poff=194
0x1f: Stack[-1] = "b10q04_mladvlad.xml" // @poff=220
0x20: Call2 0x132

0x21: Stack[6 + Tasks[-1].StackPointer] = Stack[-5]
0x22: Pop(5)
0x23: GOTO 0x2c

0x24: PushEmpty(object, object, string, string, string)
0x25: Stack[-8] = Stack[-4]
0x26: Stack[-3] = "pt_b10q04_prisoner" // @poff=156
0x27: Stack[-2] = "NPC_BigVlad" // @poff=260
0x28: Stack[-1] = "b10q04_bigvlad.xml" // @poff=284
0x29: Call2 0x132

0x2a: Stack[6 + Tasks[-1].StackPointer] = Stack[-5]
0x2b: Pop(5)
0x2c: PushEmpty(int)
0x2d: Stack[-1] = (int) 10
0x2e: Call2 0x10e

0x2f: Pop(1)
0x30: Return(); Pop(8)

0x31: Stack[-2] = 0
0x32: Stack[-3] = 0
0x33: Stack[-4] = 0
0x34: PushEmpty(object, object, object, object, object, object)
0x35: @ Trace(Stack[-7])
0x36: Pop(0)
0x37: Push("place_morloks") // @poff=322
0x38: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x39: IF (Stack[-1] == 0) GOTO 0x61; Pop(1)

0x3a: @ GetMainOutdoorScene(Stack[-3])
0x3b: Pop(0)
0x3c: PushEmpty(object, object, string, string, string)
0x3d: Stack[-8] = Stack[-4]
0x3e: Stack[-3] = "pt_b10q04_morlok" // @poff=350
0x3f: Stack[-2] = "pers_morlok" // @poff=384
0x40: Stack[-1] = "b10q04_morlok.xml" // @poff=408
0x41: Call2 0x132

0x42: Pop(4)
0x43: @@@ add(Stack[-1]); Obj=0 // @poff=444
0x44: Pop(1)
0x45: PushEmpty(object, object, string, string, string)
0x46: Stack[-8] = Stack[-4]
0x47: Stack[-3] = "pt_b10q04_morlok_mishka" // @poff=448
0x48: Stack[-2] = "pers_morlok" // @poff=384
0x49: Stack[-1] = "b10q04_morlok_mishka.xml" // @poff=496
0x4a: Call2 0x132

0x4b: Pop(4)
0x4c: @@@ add(Stack[-1]); Obj=0 // @poff=444
0x4d: Pop(1)
0x4e: PushEmpty(object, object, string, string, string)
0x4f: Stack[-8] = Stack[-4]
0x50: Stack[-3] = "pt_b10q04_morlok_laska" // @poff=546
0x51: Stack[-2] = "pers_morlok" // @poff=384
0x52: Stack[-1] = "b10q04_morlok_laska.xml" // @poff=592
0x53: Call2 0x132

0x54: Pop(4)
0x55: @@@ add(Stack[-1]); Obj=0 // @poff=444
0x56: Pop(1)
0x57: PushEmpty(object, object, string, string, string)
0x58: Stack[-8] = Stack[-4]
0x59: Stack[-3] = "pt_b10q04_morlok_spi4ka" // @poff=640
0x5a: Stack[-2] = "pers_morlok" // @poff=384
0x5b: Stack[-1] = "b10q04_morlok_spi4ka.xml" // @poff=688
0x5c: Call2 0x132

0x5d: Pop(4)
0x5e: @@@ add(Stack[-1]); Obj=0 // @poff=444
0x5f: Pop(1)
0x60: Stack[-3] = 0
0x61: Push("init_storojka") // @poff=738
0x62: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x63: IF (Stack[-1] == 0) GOTO 0x97; Pop(1)

0x64: Push("storojka") // @poff=748
0x65: @ GetSceneByName(Stack[-3], Stack[-1])
0x66: Pop(1)
0x67: Push("nolaska") // @poff=766
0x68: @ Trigger(Stack[-3], Stack[-1])
0x69: Pop(1)
0x6a: PushEmpty(object, object, string, string, string)
0x6b: Stack[-7] = Stack[-4]
0x6c: Stack[-3] = "pt_b10q04_girl" // @poff=782
0x6d: Stack[-2] = "pers_girl" // @poff=812
0x6e: Stack[-1] = "b10q04_girl_laska.xml" // @poff=832
0x6f: Call2 0x132

0x70: Stack[2 + Tasks[-1].StackPointer] = Stack[-5]
0x71: Pop(5)
0x72: Push("uprava_admin") // @poff=876
0x73: @ GetSceneByName(Stack[-3], Stack[-1])
0x74: Pop(1)
0x75: PushEmpty(object, object, string, string, string)
0x76: Stack[-7] = Stack[-4]
0x77: Stack[-3] = "pt_b10q04_klara" // @poff=902
0x78: Stack[-2] = "NPC_Klara" // @poff=934
0x79: Stack[-1] = "b10q04_klara.xml" // @poff=954
0x7a: Call2 0x132

0x7b: Stack[4 + Tasks[-1].StackPointer] = Stack[-5]
0x7c: Pop(5)
0x7d: PushEmpty(string, bool)
0x7e: Stack[-2] = "vagon_army@door1" // @poff=988
0x7f: Stack[-1] = (bool) 0
0x80: Call2 0x144

0x81: Pop(2)
0x82: Push("vagon_army") // @poff=1022
0x83: @ GetSceneByName(Stack[-3], Stack[-1])
0x84: Pop(1)
0x85: PushEmpty(object, object, string, string, string)
0x86: Stack[-7] = Stack[-4]
0x87: Stack[-3] = "pt_b10q04_laska" // @poff=1044
0x88: Stack[-2] = "NPC_Laska" // @poff=1076
0x89: Stack[-1] = "b10q04_laska.xml" // @poff=1096
0x8a: Call2 0x132

0x8b: Stack[3 + Tasks[-1].StackPointer] = Stack[-5]
0x8c: Pop(5)
0x8d: PushEmpty(object, object, string, string, string)
0x8e: Stack[-7] = Stack[-4]
0x8f: Stack[-3] = "pt_b10q04_officer" // @poff=1130
0x90: Stack[-2] = "pers_soldat" // @poff=1166
0x91: Stack[-1] = "b10q04_officer.xml" // @poff=1190
0x92: Call2 0x132

0x93: Stack[5 + Tasks[-1].StackPointer] = Stack[-5]
0x94: Pop(5)
0x95: Stack[-2] = 0
0x96: GOTO 0xb4

0x97: Push("restore_laska") // @poff=1228
0x98: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x99: IF (Stack[-1] == 0) GOTO 0xa7; Pop(1)

0x9a: Push( Stack[3 + Tasks[-1].StackPointer] )
0x9b: IF (Stack[-1] == 0) GOTO 0x9f; Pop(1)

0x9c: Push("cleanup") // @poff=1256
0x9d: @ Trigger(Stack[-3]T, Stack[-1])
0x9e: Pop(1)
0x9f: Push("storojka") // @poff=748
0xa0: @ GetSceneByName(Stack[-2], Stack[-1])
0xa1: Pop(1)
0xa2: Push("laska") // @poff=580
0xa3: @ Trigger(Stack[-2], Stack[-1])
0xa4: Pop(1)
0xa5: Stack[-1] = 0
0xa6: GOTO 0xb4

0xa7: Push("fail") // @poff=1272
0xa8: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0xa9: IF (Stack[-1] == 0) GOTO 0xae; Pop(1)

0xaa: PushEmpty()
0xab: Call2 0xc3

0xac: Pop(0)
0xad: GOTO 0xb4

0xae: Push("completed") // @poff=1282
0xaf: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0xb0: IF (Stack[-1] == 0) GOTO 0xb4; Pop(1)

0xb1: PushEmpty()
0xb2: Call2 0xcb

0xb3: Pop(0)
0xb4: Return(); Pop(6)

0xb5: PushEmpty(int, int)
0xb6: Push("b10q04") // @poff=1302
0xb7: @ GetVariable(Stack[-1], Stack[-2])
0xb8: Pop(1)
0xb9: Push((int) 1000)
0xba: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0xbb: IF (Stack[-1] == 0) GOTO 0xbf; Pop(1)

0xbc: PushEmpty()
0xbd: Call2 0xc3

0xbe: Pop(0)
0xbf: PushEmpty()
0xc0: Call2 0xf5

0xc1: Pop(0)
0xc2: Return(); Pop(2)

0xc3: Push("b10q04") // @poff=1302
0xc4: Push((int) -1)
0xc5: @ SetVariable(Stack[-2], Stack[-1])
0xc6: Pop(2)
0xc7: PushEmpty()
0xc8: Call2 0xd3

0xc9: Pop(0)
0xca: Return(); Pop(0)

0xcb: Push("b10q04") // @poff=1302
0xcc: Push((int) 1000)
0xcd: @ SetVariable(Stack[-2], Stack[-1])
0xce: Pop(2)
0xcf: PushEmpty()
0xd0: Call2 0xd3

0xd1: Pop(0)
0xd2: Return(); Pop(0)

0xd3: PushEmpty(object, object)
0xd4: Push( Stack[2 + Tasks[-1].StackPointer] )
0xd5: IF (Stack[-1] == 0) GOTO 0xd9; Pop(1)

0xd6: Push("cleanup") // @poff=1256
0xd7: @ Trigger(Stack[-2]T, Stack[-1])
0xd8: Pop(1)
0xd9: Push( Stack[3 + Tasks[-1].StackPointer] )
0xda: IF (Stack[-1] == 0) GOTO 0xde; Pop(1)

0xdb: Push("cleanup") // @poff=1256
0xdc: @ Trigger(Stack[-3]T, Stack[-1])
0xdd: Pop(1)
0xde: Push( Stack[4 + Tasks[-1].StackPointer] )
0xdf: IF (Stack[-1] == 0) GOTO 0xe3; Pop(1)

0xe0: Push("cleanup") // @poff=1256
0xe1: @ Trigger(Stack[-4]T, Stack[-1])
0xe2: Pop(1)
0xe3: Push( Stack[5 + Tasks[-1].StackPointer] )
0xe4: IF (Stack[-1] == 0) GOTO 0xe8; Pop(1)

0xe5: Push("cleanup") // @poff=1256
0xe6: @ Trigger(Stack[-5]T, Stack[-1])
0xe7: Pop(1)
0xe8: Push( Stack[6 + Tasks[-1].StackPointer] )
0xe9: IF (Stack[-1] == 0) GOTO 0xed; Pop(1)

0xea: Push("cleanup") // @poff=1256
0xeb: @ Trigger(Stack[-6]T, Stack[-1])
0xec: Pop(1)
0xed: Push("storojka") // @poff=748
0xee: @ GetSceneByName(Stack[-2], Stack[-1])
0xef: Pop(1)
0xf0: Push("laska") // @poff=580
0xf1: @ Trigger(Stack[-2], Stack[-1])
0xf2: Pop(1)
0xf3: Return(); Pop(2)

0xf4: Stack[-1] = 0
0xf5: EventDisable(26)
0xf6: PushEmpty()
0xf7: Call2 0xd3

0xf8: Pop(0)
0xf9: PushEmpty(object, string)
0xfa: Stack[-2] = Stack[0 + Tasks[-1].StackPointer]
0xfb: Stack[-1] = "cleanup" // @poff=1256
0xfc: Call2 0x155

0xfd: Pop(2)
0xfe: PushEmpty(string, bool)
0xff: Stack[-2] = "vagon_army@door1" // @poff=988
0x100: Stack[-1] = (bool) 1
0x101: Call2 0x144

0x102: Pop(2)
0x103: Push( Stack[1 + Tasks[-1].StackPointer] )
0x104: IF (Stack[-1] == 0) GOTO 0x108; Pop(1)

0x105: Push("cleanup") // @poff=1256
0x106: @ Trigger(Stack[-1]T, Stack[-1])
0x107: Pop(1)
0x108: PushEmpty(object)
0x109: Call2 0x126

0x10a: Pop(0)
0x10b: @ RemoveActor(Stack[-1])
0x10c: Pop(1)
0x10d: Return(); Pop(0)

0x10e: PushEmpty(float, float)
0x10f: @ GetGameTime(Stack[-1])
0x110: Pop(0)
0x111: Push((int) 24)
0x112: Pop(1); Push(Stack[-4] * Stack[-1]);
0x113: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x114: IF (Stack[-1] == 0) GOTO 0x119; Pop(1)

0x115: PushEmpty()
0x116: Call2 0xf5

0x117: Pop(0)
0x118: GOTO 0x120

0x119: Push((int) 0)
0x11a: Push((int) 24)
0x11b: Pop(1); Push(Stack[-5] * Stack[-1]);
0x11c: @ SetTimeEvent(Stack[-2], Stack[-1])
0x11d: Pop(2)
0x11e: @ Hold()
0x11f: Pop(0)
0x120: Return(); Pop(2)

0x121: PushEmpty()
0x122: PushEmpty()
0x123: Call2 0xb5

0x124: Pop(0)
0x125: Return(); Pop(0)

0x126: PushEmpty(object, object)
0x127: @ self(Stack[-1])
0x128: Pop(0)
0x129: Stack[-1] = Stack[-3]
0x12a: Return(); Pop(2)

0x12b: Stack[-1] = 0
0x12c: PushEmpty(object, object)
0x12d: @ CreateObjectVector(Stack[-1])
0x12e: Pop(0)
0x12f: Stack[-1] = Stack[-3]
0x130: Return(); Pop(2)

0x131: Stack[-1] = 0
0x132: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x133: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2]); Obj=12 // @poff=1316
0x134: Pop(0)
0x135: Pop(0); Push((bool) Stack[-4] == 0)
0x136: IF (Stack[-1] == 0) GOTO 0x13f; Pop(1)

0x137: Push("Locator ") // @poff=1327
0x138: Pop(1); Push(Stack[-1] + Stack[-12]);
0x139: Push(" doesn't exist") // @poff=1345
0x13a: Pop(2); Push(Stack[-2] + Stack[-1]);
0x13b: @ Trace(Stack[-1])
0x13c: Pop(1)
0x13d: Stack[-1] = 0
0x13e: GOTO 0x141

0x13f: @ AddActor(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0x140: Pop(0)
0x141: Stack[-1] = Stack[-13]
0x142: Return(); Pop(8)

0x143: Stack[-1] = 0
0x144: PushEmpty(object, object)
0x145: @ FindActor(Stack[-1], Stack[-4])
0x146: Pop(0)
0x147: Pop(0); Push((bool) Stack[-1] == 0)
0x148: IF (Stack[-1] == 0) GOTO 0x150; Pop(1)

0x149: Push("Door ") // @poff=1375
0x14a: Pop(1); Push(Stack[-1] + Stack[-5]);
0x14b: Push(" not found") // @poff=1387
0x14c: Pop(2); Push(Stack[-2] + Stack[-1]);
0x14d: @ Trace(Stack[-1])
0x14e: Pop(1)
0x14f: GOTO 0x153

0x150: Push("locked") // @poff=1409
0x151: @@ SetProperty(Stack[-1], Stack[-4]); Obj=2 // @poff=1423
0x152: Pop(1)
0x153: Return(); Pop(2)

0x154: Stack[-1] = 0
0x155: PushEmpty(int, int, object, int, int, object)
0x156: Push(Stack[-8])
0x157: IF (Stack[-1] == 0) GOTO 0x167; Pop(1)

0x158: @@ size(Stack[-3]); Obj=8 // @poff=1435
0x159: Pop(0)
0x15a: Stack[-2] = (int) 0
0x15b: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0x15c: IF (Stack[-1] == 0) GOTO 0x167; Pop(1)

0x15d: @@ get(Stack[-1], Stack[-2]); Obj=8 // @poff=1440
0x15e: Pop(0)
0x15f: Push(Stack[-1])
0x160: IF (Stack[-1] == 0) GOTO 0x163; Pop(1)

0x161: @ Trigger(Stack[-1], Stack[-7])
0x162: Pop(0)
0x163: Stack[-1] = 0
0x164: Push((int) 1)
0x165: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x166: GOTO 0x15b

0x167: Return(); Pop(6)

