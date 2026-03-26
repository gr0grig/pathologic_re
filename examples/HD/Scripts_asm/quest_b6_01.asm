GlobalVarCount = 1
	G_VAR_0 object Bull

Strings:
	W:b6q01KlaraVisit
	W:place_klara
	W:storojka
	W:pt_b6q01_klara
	W:NPC_Klara
	W:b6q01_klara.xml
	W:remove_klara
	W:cleanup
	W:cutscene
	W:cs_burah_danko_microscope
	W:cutscene_end
	W:b6q01MicroscopeCS
	W:init_termitnik
	W:termitnik2
	W:pt_b6q01_mat
	W:NPC_Mat
	W:b6q01_mat.xml
	W:pt_b6q01_agony
	A:GetLocator
	W:pers_worker
	W:agony1_man.xml
	W:pers_morlok
	W:agony1_morlok.xml
	W:pers_woman
	W:agony1_woman.xml
	W:pt_b6q01_butcher1
	W:pers_butcher
	W:b6q01_butcher.xml
	A:add
	W:pt_b6q01_butcher2
	W:pt_b6q01_butcher3
	W:clean_termitnik
	W:init_altar
	W:pt_b6q01_morlok1
	W:b6q01_morlok1.xml
	W:pt_b6q01_morlok2
	W:b6q01_morlok2.xml
	W:pt_b6q01_bull
	W:pers_bull
	W:b6q01_bull.xml
	W:sacrifice
	A:GetActor
	A:Remove
	W:quest_b6_01_cutscene
	W:sacrifice_end
	W:b6q01
	W:fail
	W:completed
	W:.bin
	W:Locator 
	W: doesn't exist
	A:AddStationaryActor
	A:size
	A:get
// @pool_raw:620036007100300031004b006c0061007200610056006900730069007400000070006c006100630065005f006b006c006100720061000000730074006f0072006f006a006b0061000000700074005f00620036007100300031005f006b006c0061007200610000004e00500043005f004b006c006100720061000000620036007100300031005f006b006c006100720061002e0078006d006c000000720065006d006f00760065005f006b006c00610072006100000063006c00650061006e007500700000006300750074007300630065006e0065000000630073005f00620075007200610068005f00640061006e006b006f005f006d006900630072006f00730063006f007000650000006300750074007300630065006e0065005f0065006e0064000000620036007100300031004d006900630072006f00730063006f007000650043005300000069006e00690074005f007400650072006d00690074006e0069006b0000007400650072006d00690074006e0069006b0032000000700074005f00620036007100300031005f006d006100740000004e00500043005f004d00610074000000620036007100300031005f006d00610074002e0078006d006c000000700074005f00620036007100300031005f00610067006f006e00790000004765744c6f6361746f720070006500720073005f0077006f0072006b00650072000000610067006f006e00790031005f006d0061006e002e0078006d006c00000070006500720073005f006d006f0072006c006f006b000000610067006f006e00790031005f006d006f0072006c006f006b002e0078006d006c00000070006500720073005f0077006f006d0061006e000000610067006f006e00790031005f0077006f006d0061006e002e0078006d006c000000700074005f00620036007100300031005f0062007500740063006800650072003100000070006500720073005f0062007500740063006800650072000000620036007100300031005f0062007500740063006800650072002e0078006d006c00000061646400700074005f00620036007100300031005f00620075007400630068006500720032000000700074005f00620036007100300031005f0062007500740063006800650072003300000063006c00650061006e005f007400650072006d00690074006e0069006b00000069006e00690074005f0061006c007400610072000000700074005f00620036007100300031005f006d006f0072006c006f006b0031000000620036007100300031005f006d006f0072006c006f006b0031002e0078006d006c000000700074005f00620036007100300031005f006d006f0072006c006f006b0032000000620036007100300031005f006d006f0072006c006f006b0032002e0078006d006c000000700074005f00620036007100300031005f00620075006c006c00000070006500720073005f00620075006c006c000000620036007100300031005f00620075006c006c002e0078006d006c00000073006100630072006900660069006300650000004765744163746f720052656d6f766500710075006500730074005f00620036005f00300031005f006300750074007300630065006e00650000007300610063007200690066006900630065005f0065006e00640000006200360071003000310000006600610069006c00000063006f006d0070006c00650074006500640000002e00620069006e0000004c006f006300610074006f00720020000000200064006f00650073006e0027007400200065007800690073007400000041646453746174696f6e6172794163746f720073697a650067657400

Import:
	Hold (0 args)
	GetVariable (2 args)
	Trace (1 args)
	GetSceneByName (2 args)
	GetGameTime (1 args)
	SetTimeEvent (2 args)
	Trigger (2 args)
	SetVariable (2 args)
	irand (2 args)
	AddActor (6 args)
	GetMainOutdoorScene (1 args)
	RemoveActor (1 args)
	self (1 args)
	CreateObjectVector (1 args)
	AddBlankActor (4 args)
	AddMessage (4 args)
	SendWorldWndMessage (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object, object, object, object, object, object) Params = 0
		EVENT_9 Op = 0xc Vars = (int, float)
		EVENT_26 Op = 0x17 Vars = (string)


0x0: PushEmpty(object)
0x1: Call2 0x151

0x2: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x3: Pop(1)
0x4: PushEmpty(object)
0x5: Call2 0x151

0x6: Stack[3 + Tasks[-1].StackPointer] = Stack[-1]
0x7: Pop(1)
0x8: @ Hold()
0x9: Pop(0)
0xa: GOTO 0x8

0xb: Return(); Pop(0)

0xc: PushEmpty(int, int)
0xd: Push("b6q01KlaraVisit") // @poff=0
0xe: @ GetVariable(Stack[-1], Stack[-2])
0xf: Pop(1)
0x10: Pop(0); Push((bool) Stack[-1] == 0)
0x11: IF (Stack[-1] == 0) GOTO 0x16; Pop(1)

0x12: PushEmpty(int, float)
0x13: Stack[-5] = Stack[-1]
0x14: Call2 0x1ac

0x15: Pop(2)
0x16: Return(); Pop(2)

0x17: PushEmpty(object, float, object, int, bool, cvector, cvector, string, string, int, object, object, object, object, int, object, float, object, int, bool, cvector, cvector, string, string, int, object, object, object, object, int)
0x18: @ Trace(Stack[-31])
0x19: Pop(0)
0x1a: Push("place_klara") // @poff=32
0x1b: Pop(1); Push((bool) Stack[-32] == Stack[-1])
0x1c: IF (Stack[-1] == 0) GOTO 0x31; Pop(1)

0x1d: Push("storojka") // @poff=56
0x1e: @ GetSceneByName(Stack[-16], Stack[-1])
0x1f: Pop(1)
0x20: PushEmpty(object, object, string, string, string)
0x21: Stack[-20] = Stack[-4]
0x22: Stack[-3] = "pt_b6q01_klara" // @poff=74
0x23: Stack[-2] = "NPC_Klara" // @poff=104
0x24: Stack[-1] = "b6q01_klara.xml" // @poff=124
0x25: Call2 0x162

0x26: Stack[0 + Tasks[-1].StackPointer] = Stack[-5]
0x27: Pop(5)
0x28: @ GetGameTime(Stack[-14])
0x29: Pop(0)
0x2a: Push((float)0.4000000059604645)
0x2b: Stack[-15] = Stack[-15] + Stack[-1]; Pop(1);
0x2c: Push((int) 0)
0x2d: @ SetTimeEvent(Stack[-1], Stack[-15])
0x2e: Pop(1)
0x2f: Stack[-15] = 0
0x30: GOTO 0x111

0x31: Push("remove_klara") // @poff=156
0x32: Pop(1); Push((bool) Stack[-32] == Stack[-1])
0x33: IF (Stack[-1] == 0) GOTO 0x38; Pop(1)

0x34: Push("cleanup") // @poff=182
0x35: @ Trigger(Stack[-0]T, Stack[-1])
0x36: Pop(1)
0x37: GOTO 0x111

0x38: Push("cutscene") // @poff=198
0x39: Pop(1); Push((bool) Stack[-32] == Stack[-1])
0x3a: IF (Stack[-1] == 0) GOTO 0x40; Pop(1)

0x3b: PushEmpty(object, string)
0x3c: Stack[-1] = "cs_burah_danko_microscope" // @poff=216
0x3d: Call2 0x157

0x3e: Pop(2)
0x3f: GOTO 0x111

0x40: Push("cutscene_end") // @poff=268
0x41: Pop(1); Push((bool) Stack[-32] == Stack[-1])
0x42: IF (Stack[-1] == 0) GOTO 0x48; Pop(1)

0x43: Push("b6q01MicroscopeCS") // @poff=294
0x44: Push((int) 1)
0x45: @ SetVariable(Stack[-2], Stack[-1])
0x46: Pop(2)
0x47: GOTO 0x111

0x48: Push("init_termitnik") // @poff=330
0x49: Pop(1); Push((bool) Stack[-32] == Stack[-1])
0x4a: IF (Stack[-1] == 0) GOTO 0x92; Pop(1)

0x4b: Push("termitnik2") // @poff=360
0x4c: @ GetSceneByName(Stack[-14], Stack[-1])
0x4d: Pop(1)
0x4e: PushEmpty(object, object, string, string, string)
0x4f: Stack[-18] = Stack[-4]
0x50: Stack[-3] = "pt_b6q01_mat" // @poff=382
0x51: Stack[-2] = "NPC_Mat" // @poff=408
0x52: Stack[-1] = "b6q01_mat.xml" // @poff=424
0x53: Call2 0x162

0x54: Stack[1 + Tasks[-1].StackPointer] = Stack[-5]
0x55: Pop(5)
0x56: Stack[-12] = (int) 1
0x57: Push("pt_b6q01_agony") // @poff=452
0x58: Pop(1); Push(Stack[-1] + Stack[-13]);
0x59: @@ GetLocator(Stack[-1], Stack[-12], Stack[-11], Stack[-10]); Obj=14 // @poff=482
0x5a: Pop(1)
0x5b: Pop(0); Push((bool) Stack[-11] == 0)
0x5c: IF (Stack[-1] == 0) GOTO 0x5e; Pop(1)

0x5d: GOTO 0x75

0x5e: Push((int) 3)
0x5f: @ irand(Stack[-7], Stack[-1])
0x60: Pop(1)
0x61: Push((int) 0)
0x62: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x63: IF (Stack[-1] == 0) GOTO 0x67; Pop(1)

0x64: Stack[-8] = "pers_worker" // @poff=493
0x65: Stack[-7] = "agony1_man.xml" // @poff=517
0x66: GOTO 0x6f

0x67: Push((int) 1)
0x68: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x69: IF (Stack[-1] == 0) GOTO 0x6d; Pop(1)

0x6a: Stack[-8] = "pers_morlok" // @poff=547
0x6b: Stack[-7] = "agony1_morlok.xml" // @poff=571
0x6c: GOTO 0x6f

0x6d: Stack[-8] = "pers_woman" // @poff=607
0x6e: Stack[-7] = "agony1_woman.xml" // @poff=629
0x6f: @ AddActor(Stack[-5], Stack[-8], Stack[-13], Stack[-10], Stack[-9], Stack[-7])
0x70: Pop(0)
0x71: Stack[-5] = 0
0x72: Push((int) 1)
0x73: Stack[-13] = Stack[-13] + Stack[-1]; Pop(1);
0x74: GOTO 0x57

0x75: PushEmpty(object, object, string, string, string)
0x76: Stack[-18] = Stack[-4]
0x77: Stack[-3] = "pt_b6q01_butcher1" // @poff=663
0x78: Stack[-2] = "pers_butcher" // @poff=699
0x79: Stack[-1] = "b6q01_butcher.xml" // @poff=725
0x7a: Call2 0x162

0x7b: Pop(4)
0x7c: @@@ add(Stack[-1]); Obj=3 // @poff=761
0x7d: Pop(1)
0x7e: PushEmpty(object, object, string, string, string)
0x7f: Stack[-18] = Stack[-4]
0x80: Stack[-3] = "pt_b6q01_butcher2" // @poff=765
0x81: Stack[-2] = "pers_butcher" // @poff=699
0x82: Stack[-1] = "b6q01_butcher.xml" // @poff=725
0x83: Call2 0x162

0x84: Pop(4)
0x85: @@@ add(Stack[-1]); Obj=3 // @poff=761
0x86: Pop(1)
0x87: PushEmpty(object, object, string, string, string)
0x88: Stack[-18] = Stack[-4]
0x89: Stack[-3] = "pt_b6q01_butcher3" // @poff=801
0x8a: Stack[-2] = "pers_butcher" // @poff=699
0x8b: Stack[-1] = "b6q01_butcher.xml" // @poff=725
0x8c: Call2 0x162

0x8d: Pop(4)
0x8e: @@@ add(Stack[-1]); Obj=3 // @poff=761
0x8f: Pop(1)
0x90: Stack[-13] = 0
0x91: GOTO 0x111

0x92: Push("clean_termitnik") // @poff=837
0x93: Pop(1); Push((bool) Stack[-32] == Stack[-1])
0x94: IF (Stack[-1] == 0) GOTO 0xa3; Pop(1)

0x95: Push("cleanup") // @poff=182
0x96: @ Trigger(Stack[-1]T, Stack[-1])
0x97: Pop(1)
0x98: PushEmpty(object, string)
0x99: Stack[-2] = Stack[2 + Tasks[-1].StackPointer]
0x9a: Stack[-1] = "cleanup" // @poff=182
0x9b: Call2 0x199

0x9c: Pop(2)
0x9d: PushEmpty(object, string)
0x9e: Stack[-2] = Stack[3 + Tasks[-1].StackPointer]
0x9f: Stack[-1] = "cleanup" // @poff=182
0xa0: Call2 0x199

0xa1: Pop(2)
0xa2: GOTO 0x111

0xa3: Push("init_altar") // @poff=869
0xa4: Pop(1); Push((bool) Stack[-32] == Stack[-1])
0xa5: IF (Stack[-1] == 0) GOTO 0xc4; Pop(1)

0xa6: @ GetMainOutdoorScene(Stack[-4])
0xa7: Pop(0)
0xa8: PushEmpty(object, object, string, string, string)
0xa9: Stack[-9] = Stack[-4]
0xaa: Stack[-3] = "pt_b6q01_morlok1" // @poff=891
0xab: Stack[-2] = "pers_morlok" // @poff=547
0xac: Stack[-1] = "b6q01_morlok1.xml" // @poff=925
0xad: Call2 0x174

0xae: Stack[4 + Tasks[-1].StackPointer] = Stack[-5]
0xaf: Pop(5)
0xb0: PushEmpty(object, object, string, string, string)
0xb1: Stack[-9] = Stack[-4]
0xb2: Stack[-3] = "pt_b6q01_morlok2" // @poff=961
0xb3: Stack[-2] = "pers_morlok" // @poff=547
0xb4: Stack[-1] = "b6q01_morlok2.xml" // @poff=995
0xb5: Call2 0x174

0xb6: Stack[5 + Tasks[-1].StackPointer] = Stack[-5]
0xb7: Pop(5)
0xb8: Push(GlobalVars[0])
0xb9: PushEmpty(object, object, string, string, string)
0xba: Stack[-10] = Stack[-4]
0xbb: Stack[-3] = "pt_b6q01_bull" // @poff=1031
0xbc: Stack[-2] = "pers_bull" // @poff=1059
0xbd: Stack[-1] = "b6q01_bull.xml" // @poff=1079
0xbe: Call2 0x162

0xbf: Stack[-5] = Stack[-6]
0xc0: Pop(5)
0xc1: GlobalVars[0] = Stack[-1]; Pop(1)
0xc2: Stack[-4] = 0
0xc3: GOTO 0x111

0xc4: Push("sacrifice") // @poff=1109
0xc5: Pop(1); Push((bool) Stack[-32] == Stack[-1])
0xc6: IF (Stack[-1] == 0) GOTO 0xdc; Pop(1)

0xc7: Push(GlobalVars[0])
0xc8: @ RemoveActor(Stack[-1])
0xc9: Pop(1)
0xca: @@@ GetActor(Stack[-3]); Obj=4 // @poff=1129
0xcb: Pop(0)
0xcc: @ RemoveActor(Stack[-3])
0xcd: Pop(0)
0xce: @@@ Remove(); Obj=4 // @poff=1138
0xcf: Pop(0)
0xd0: @@@ GetActor(Stack[-3]); Obj=5 // @poff=1129
0xd1: Pop(0)
0xd2: @ RemoveActor(Stack[-3])
0xd3: Pop(0)
0xd4: @@@ Remove(); Obj=5 // @poff=1138
0xd5: Pop(0)
0xd6: PushEmpty(object, string)
0xd7: Stack[-1] = "quest_b6_01_cutscene" // @poff=1145
0xd8: Call2 0x157

0xd9: Pop(2)
0xda: Stack[-3] = 0
0xdb: GOTO 0x111

0xdc: Push("sacrifice_end") // @poff=1187
0xdd: Pop(1); Push((bool) Stack[-32] == Stack[-1])
0xde: IF (Stack[-1] == 0) GOTO 0xf3; Pop(1)

0xdf: @ GetMainOutdoorScene(Stack[-2])
0xe0: Pop(0)
0xe1: PushEmpty(object, object, string, string, string)
0xe2: Stack[-7] = Stack[-4]
0xe3: Stack[-3] = "pt_b6q01_morlok1" // @poff=891
0xe4: Stack[-2] = "pers_morlok" // @poff=547
0xe5: Stack[-1] = "b6q01_morlok1.xml" // @poff=925
0xe6: Call2 0x186

0xe7: Stack[4 + Tasks[-1].StackPointer] = Stack[-5]
0xe8: Pop(5)
0xe9: PushEmpty(object, object, string, string, string)
0xea: Stack[-7] = Stack[-4]
0xeb: Stack[-3] = "pt_b6q01_morlok2" // @poff=961
0xec: Stack[-2] = "pers_morlok" // @poff=547
0xed: Stack[-1] = "b6q01_morlok2.xml" // @poff=995
0xee: Call2 0x186

0xef: Stack[5 + Tasks[-1].StackPointer] = Stack[-5]
0xf0: Pop(5)
0xf1: Stack[-2] = 0
0xf2: GOTO 0x111

0xf3: Push("cleanup") // @poff=182
0xf4: Pop(1); Push((bool) Stack[-32] == Stack[-1])
0xf5: IF (Stack[-1] == 0) GOTO 0x104; Pop(1)

0xf6: Push("b6q01") // @poff=1215
0xf7: @ GetVariable(Stack[-1], Stack[-2])
0xf8: Pop(1)
0xf9: Push((int) 1000)
0xfa: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0xfb: IF (Stack[-1] == 0) GOTO 0x100; Pop(1)

0xfc: PushEmpty()
0xfd: Call2 0x112

0xfe: Pop(0)
0xff: GOTO 0x103

0x100: PushEmpty()
0x101: Call2 0x122

0x102: Pop(0)
0x103: GOTO 0x111

0x104: Push("fail") // @poff=1227
0x105: Pop(1); Push((bool) Stack[-32] == Stack[-1])
0x106: IF (Stack[-1] == 0) GOTO 0x10b; Pop(1)

0x107: PushEmpty()
0x108: Call2 0x112

0x109: Pop(0)
0x10a: GOTO 0x111

0x10b: Push("completed") // @poff=1237
0x10c: Pop(1); Push((bool) Stack[-32] == Stack[-1])
0x10d: IF (Stack[-1] == 0) GOTO 0x111; Pop(1)

0x10e: PushEmpty()
0x10f: Call2 0x11a

0x110: Pop(0)
0x111: Return(); Pop(30)

0x112: Push("b6q01") // @poff=1215
0x113: Push((int) -1)
0x114: @ SetVariable(Stack[-2], Stack[-1])
0x115: Pop(2)
0x116: PushEmpty()
0x117: Call2 0x122

0x118: Pop(0)
0x119: Return(); Pop(0)

0x11a: Push("b6q01") // @poff=1215
0x11b: Push((int) 1000)
0x11c: @ SetVariable(Stack[-2], Stack[-1])
0x11d: Pop(2)
0x11e: PushEmpty()
0x11f: Call2 0x122

0x120: Pop(0)
0x121: Return(); Pop(0)

0x122: EventDisable(9)
0x123: PushEmpty(object, string)
0x124: Stack[-2] = Stack[2 + Tasks[-1].StackPointer]
0x125: Stack[-1] = "cleanup" // @poff=182
0x126: Call2 0x199

0x127: Pop(2)
0x128: PushEmpty(object, string)
0x129: Stack[-2] = Stack[3 + Tasks[-1].StackPointer]
0x12a: Stack[-1] = "cleanup" // @poff=182
0x12b: Call2 0x199

0x12c: Pop(2)
0x12d: Push( Stack[1 + Tasks[-1].StackPointer] )
0x12e: IF (Stack[-1] == 0) GOTO 0x132; Pop(1)

0x12f: Push("cleanup") // @poff=182
0x130: @ Trigger(Stack[-1]T, Stack[-1])
0x131: Pop(1)
0x132: Push( Stack[4 + Tasks[-1].StackPointer] )
0x133: IF (Stack[-1] == 0) GOTO 0x136; Pop(1)

0x134: @@@ Remove(); Obj=4 // @poff=1138
0x135: Pop(0)
0x136: Push( Stack[5 + Tasks[-1].StackPointer] )
0x137: IF (Stack[-1] == 0) GOTO 0x13a; Pop(1)

0x138: @@@ Remove(); Obj=5 // @poff=1138
0x139: Pop(0)
0x13a: Push(GlobalVars[0])
0x13b: IF (Stack[-1] == 0) GOTO 0x140; Pop(1)

0x13c: Push(GlobalVars[0])
0x13d: Push("cleanup") // @poff=182
0x13e: @ Trigger(Stack[-2], Stack[-1])
0x13f: Pop(2)
0x140: Push( Stack[0 + Tasks[-1].StackPointer] )
0x141: IF (Stack[-1] == 0) GOTO 0x145; Pop(1)

0x142: Push("cleanup") // @poff=182
0x143: @ Trigger(Stack[-0]T, Stack[-1])
0x144: Pop(1)
0x145: PushEmpty(object)
0x146: Call2 0x14b

0x147: Pop(0)
0x148: @ RemoveActor(Stack[-1])
0x149: Pop(1)
0x14a: Return(); Pop(0)

0x14b: PushEmpty(object, object)
0x14c: @ self(Stack[-1])
0x14d: Pop(0)
0x14e: Stack[-1] = Stack[-3]
0x14f: Return(); Pop(2)

0x150: Stack[-1] = 0
0x151: PushEmpty(object, object)
0x152: @ CreateObjectVector(Stack[-1])
0x153: Pop(0)
0x154: Stack[-1] = Stack[-3]
0x155: Return(); Pop(2)

0x156: Stack[-1] = 0
0x157: PushEmpty(object, object, object, object)
0x158: @ GetMainOutdoorScene(Stack[-2])
0x159: Pop(0)
0x15a: Push(".bin") // @poff=1257
0x15b: Pop(1); Push(Stack[-6] + Stack[-1]);
0x15c: @ AddBlankActor(Stack[-2], Stack[-3], Stack[-6], Stack[-1])
0x15d: Pop(1)
0x15e: Stack[-1] = Stack[-6]
0x15f: Return(); Pop(4)

0x160: Stack[-1] = 0
0x161: Stack[-2] = 0
0x162: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x163: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2]); Obj=12 // @poff=482
0x164: Pop(0)
0x165: Pop(0); Push((bool) Stack[-4] == 0)
0x166: IF (Stack[-1] == 0) GOTO 0x16f; Pop(1)

0x167: Push("Locator ") // @poff=1267
0x168: Pop(1); Push(Stack[-1] + Stack[-12]);
0x169: Push(" doesn't exist") // @poff=1285
0x16a: Pop(2); Push(Stack[-2] + Stack[-1]);
0x16b: @ Trace(Stack[-1])
0x16c: Pop(1)
0x16d: Stack[-1] = 0
0x16e: GOTO 0x171

0x16f: @ AddActor(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0x170: Pop(0)
0x171: Stack[-1] = Stack[-13]
0x172: Return(); Pop(8)

0x173: Stack[-1] = 0
0x174: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x175: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2]); Obj=12 // @poff=482
0x176: Pop(0)
0x177: Pop(0); Push((bool) Stack[-4] == 0)
0x178: IF (Stack[-1] == 0) GOTO 0x181; Pop(1)

0x179: Push("Locator ") // @poff=1267
0x17a: Pop(1); Push(Stack[-1] + Stack[-12]);
0x17b: Push(" doesn't exist") // @poff=1285
0x17c: Pop(2); Push(Stack[-2] + Stack[-1]);
0x17d: @ Trace(Stack[-1])
0x17e: Pop(1)
0x17f: Stack[-1] = 0
0x180: GOTO 0x183

0x181: @@ AddStationaryActor(Stack[-1], Stack[-3], Stack[-2], Stack[-10], Stack[-9]); Obj=12 // @poff=1315
0x182: Pop(0)
0x183: Stack[-1] = Stack[-13]
0x184: Return(); Pop(8)

0x185: Stack[-1] = 0
0x186: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x187: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2]); Obj=12 // @poff=482
0x188: Pop(0)
0x189: Pop(0); Push((bool) Stack[-4] == 0)
0x18a: IF (Stack[-1] == 0) GOTO 0x193; Pop(1)

0x18b: Push("Locator ") // @poff=1267
0x18c: Pop(1); Push(Stack[-1] + Stack[-12]);
0x18d: Push(" doesn't exist") // @poff=1285
0x18e: Pop(2); Push(Stack[-2] + Stack[-1]);
0x18f: @ Trace(Stack[-1])
0x190: Pop(1)
0x191: Stack[-1] = 0
0x192: GOTO 0x196

0x193: Push((bool) 1)
0x194: @@ AddStationaryActor(Stack[-2], Stack[-4], Stack[-3], Stack[-11], Stack[-10], Stack[-1]); Obj=13 // @poff=1315
0x195: Pop(1)
0x196: Stack[-1] = Stack[-13]
0x197: Return(); Pop(8)

0x198: Stack[-1] = 0
0x199: PushEmpty(int, int, object, int, int, object)
0x19a: Push(Stack[-8])
0x19b: IF (Stack[-1] == 0) GOTO 0x1ab; Pop(1)

0x19c: @@ size(Stack[-3]); Obj=8 // @poff=1334
0x19d: Pop(0)
0x19e: Stack[-2] = (int) 0
0x19f: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0x1a0: IF (Stack[-1] == 0) GOTO 0x1ab; Pop(1)

0x1a1: @@ get(Stack[-1], Stack[-2]); Obj=8 // @poff=1339
0x1a2: Pop(0)
0x1a3: Push(Stack[-1])
0x1a4: IF (Stack[-1] == 0) GOTO 0x1a7; Pop(1)

0x1a5: @ Trigger(Stack[-1], Stack[-7])
0x1a6: Pop(0)
0x1a7: Stack[-1] = 0
0x1a8: Push((int) 1)
0x1a9: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x1aa: GOTO 0x19f

0x1ab: Return(); Pop(6)

0x1ac: PushEmpty()
0x1ad: PushEmpty(int, int, int, float)
0x1ae: Stack[-3] = (int) 525670
0x1af: Stack[-2] = (int) 525669
0x1b0: Stack[-5] = Stack[-1]
0x1b1: Call2 0x1b5

0x1b2: Stack[-4] = Stack[-6]
0x1b3: Pop(4)
0x1b4: Return(); Pop(0)

0x1b5: PushEmpty(int, int)
0x1b6: @ AddMessage(Stack[-5], Stack[-4], Stack[-3], Stack[-1])
0x1b7: Pop(0)
0x1b8: Push((int) 6)
0x1b9: @ SendWorldWndMessage(Stack[-1])
0x1ba: Pop(1)
0x1bb: Stack[-1] = Stack[-6]
0x1bc: Return(); Pop(2)

