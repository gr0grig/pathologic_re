GlobalVarCount = 0

Strings:
	A:Play
	A:IsLost
	A:Restore
	A:IsPlaying
	A:StretchBlit
	A:Stop
	W:intro.xml
	W:intro
	A:DestroyWindow
	W:world_danko.xml
	W:player_danko.xml
	W:logo_buka.wmv
	W:logo_icepick.wmv
	W:intro.wmv
	W:game_buttons.xml
	W:editbox
	A:get
	W:game_logo.xml
	W:default
	W:menumusic
	W:game_choose_pers.xml
	W:intro_danko.wmv
	W:intro_burah.wmv
	W:world_burah.xml
	W:player_burah.xml
	W:intro_klara.wmv
	W:world_klara.xml
	W:player_klara.xml
	W:Loading : 
	A:GetFileName
	W:world_intro.xml
	W:player_intro.xml
	W:newgame
	W:quitgame
	W:Quit game
	W:loadgame
	W:load.xml
	W:savegame
	W:save.xml
	W:gameoptions
	W:options.xml
	W:continue
	W:credits
	W:danko
	W:player_name
	W:player_desc
	W:burah
	W:klara
	W:load
	W:save
	W:BurahCompleted
	W:DankoCompleted
	W:loading map: 
// @pool_raw:506c61790049734c6f737400526573746f7265004973506c6179696e670053747265746368426c69740053746f700069006e00740072006f002e0078006d006c00000069006e00740072006f00000044657374726f7957696e646f770077006f0072006c0064005f00640061006e006b006f002e0078006d006c00000070006c0061007900650072005f00640061006e006b006f002e0078006d006c0000006c006f0067006f005f00620075006b0061002e0077006d00760000006c006f0067006f005f006900630065007000690063006b002e0077006d007600000069006e00740072006f002e0077006d0076000000670061006d0065005f0062007500740074006f006e0073002e0078006d006c000000650064006900740062006f007800000067657400670061006d0065005f006c006f0067006f002e0078006d006c000000640065006600610075006c00740000006d0065006e0075006d0075007300690063000000670061006d0065005f00630068006f006f00730065005f0070006500720073002e0078006d006c00000069006e00740072006f005f00640061006e006b006f002e0077006d007600000069006e00740072006f005f00620075007200610068002e0077006d007600000077006f0072006c0064005f00620075007200610068002e0078006d006c00000070006c0061007900650072005f00620075007200610068002e0078006d006c00000069006e00740072006f005f006b006c006100720061002e0077006d007600000077006f0072006c0064005f006b006c006100720061002e0078006d006c00000070006c0061007900650072005f006b006c006100720061002e0078006d006c0000004c006f006100640069006e00670020003a002000000047657446696c654e616d650077006f0072006c0064005f0069006e00740072006f002e0078006d006c00000070006c0061007900650072005f0069006e00740072006f002e0078006d006c0000006e0065007700670061006d00650000007100750069007400670061006d006500000051007500690074002000670061006d00650000006c006f0061006400670061006d00650000006c006f00610064002e0078006d006c0000007300610076006500670061006d006500000073006100760065002e0078006d006c000000670061006d0065006f007000740069006f006e00730000006f007000740069006f006e0073002e0078006d006c00000063006f006e00740069006e0075006500000063007200650064006900740073000000640061006e006b006f00000070006c0061007900650072005f006e0061006d006500000070006c0061007900650072005f00640065007300630000006200750072006100680000006b006c0061007200610000006c006f00610064000000730061007600650000004200750072006100680043006f006d0070006c0065007400650064000000440061006e006b006f0043006f006d0070006c00650074006500640000006c006f006100640069006e00670020006d00610070003a0020000000
// @pool_encoding:utf8

Import:
	SetOwnerDraw (1 args)
	ShowCursor (1 args)
	CaptureKeyboard (0 args)
	GetWindowSize (2 args)
	LoadVideo (1 args)
	FindVideo (2 args)
	ProcessEvents (0 args)
	ReleaseVideo (1 args)
	StopEventProcessing (0 args)
	CreateWindow (3 args)
	SendMessage (2 args)
	NewGame (2 args)
	DestroyWindow (0 args)
	SetCursor (1 args)
	SetBackground (1 args)
	PlaySound (1 args)
	PauseSound (1 args)
	RemoveWorld (0 args)
	UISync (0 args)
	Trace (1 args)
	LoadGame (2 args)
	SaveGame (1 args)
	SaveGame (2 args)
	UITrace (1 args)
	Quit (0 args)
	GetRegistryData (3 args)
	LoadMap (2 args)

RunOp = 0x55
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object, int, int, bool) Params = 2
		EVENT_0 Op = 0x1e Vars = ()
		EVENT_101 Op = 0x38 Vars = (int)
	GTASK_1 Vars = (object) Params = 1
		EVENT_200 Op = 0x4c Vars = (int, string, object)
	GTASK_2 Vars = (int, int, int, object, object, object, object, object, object, object, string, object) Params = 0
		EVENT_200 Op = 0x86 Vars = (int, string, object)
		EVENT_100 Op = 0x158 Vars = (int)


0x0: PushEmpty()
0x1: Stack[3 + Tasks[-1].StackPointer] = Stack[-1]
0x2: Push((bool) 1)
0x3: @ SetOwnerDraw(Stack[-1])
0x4: Pop(1)
0x5: Push((bool) 0)
0x6: @ ShowCursor(Stack[-1])
0x7: Pop(1)
0x8: @ CaptureKeyboard()
0x9: Pop(0)
0xa: @ GetWindowSize(Stack[-1]T, Stack[-2]T)
0xb: Pop(0)
0xc: @ LoadVideo(Stack[-2])
0xd: Pop(0)
0xe: @ FindVideo(Stack[-0]T, Stack[-2])
0xf: Pop(0)
0x10: Push((bool) 0)
0x11: @@@ Play(Stack[-1]); Obj=0 // @poff=0
0x12: Pop(1)
0x13: @ ProcessEvents()
0x14: Pop(0)
0x15: Push((bool) 0)
0x16: @ SetOwnerDraw(Stack[-1])
0x17: Pop(1)
0x18: Push((bool) 1)
0x19: @ ShowCursor(Stack[-1])
0x1a: Pop(1)
0x1b: @ ReleaseVideo(Stack[-2])
0x1c: Pop(0)
0x1d: Return(); Pop(0)

0x1e: PushEmpty(bool, bool, bool, bool, bool, bool)
0x1f: @@@ IsLost(Stack[-3]); Obj=0 // @poff=5
0x20: Pop(0)
0x21: Push(Stack[-3])
0x22: IF (Stack[-1] == 0) GOTO 0x28; Pop(1)

0x23: @@@ Restore(Stack[-2]); Obj=0 // @poff=12
0x24: Pop(0)
0x25: Pop(0); Push((bool) Stack[-2] == 0)
0x26: IF (Stack[-1] == 0) GOTO 0x28; Pop(1)

0x27: Return(); Pop(6)

0x28: @@@ IsPlaying(Stack[-1]); Obj=0 // @poff=20
0x29: Pop(0)
0x2a: Push(Stack[-1])
0x2b: IF (Stack[-1] == 0) GOTO 0x31; Pop(1)

0x2c: Push((int) 0)
0x2d: Push((int) 0)
0x2e: @@@ StretchBlit(Stack[-2], Stack[-1], Stack[-1]T, Stack[-2]T); Obj=0 // @poff=30
0x2f: Pop(2)
0x30: GOTO 0x37

0x31: Push((int) 0)
0x32: Push((int) 0)
0x33: @@@ StretchBlit(Stack[-2], Stack[-1], Stack[-1]T, Stack[-2]T); Obj=0 // @poff=30
0x34: Pop(2)
0x35: @ StopEventProcessing()
0x36: Pop(0)
0x37: Return(); Pop(6)

0x38: PushEmpty()
0x39: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x3a: IF (Stack[-1] == 0) GOTO 0x3c; Pop(1)

0x3b: Return(); Pop(0)

0x3c: @ StopEventProcessing()
0x3d: Pop(0)
0x3e: @@@ Stop(); Obj=0 // @poff=42
0x3f: Pop(0)
0x40: Return(); Pop(0)

0x41: PushEmpty()
0x42: Push("intro.xml") // @poff=47
0x43: Push((bool) 0)
0x44: @ CreateWindow(Stack[-2], Stack[-1], Stack[-0]T)
0x45: Pop(2)
0x46: Push("intro") // @poff=67
0x47: @ SendMessage(Stack[-2], Stack[-1])
0x48: Pop(1)
0x49: @ ProcessEvents()
0x4a: Pop(0)
0x4b: Return(); Pop(0)

0x4c: PushEmpty()
0x4d: Push("intro") // @poff=67
0x4e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4f: IF (Stack[-1] == 0) GOTO 0x54; Pop(1)

0x50: @@@ DestroyWindow(); Obj=0 // @poff=79
0x51: Pop(0)
0x52: @ StopEventProcessing()
0x53: Pop(0)
0x54: Return(); Pop(0)

0x55: Push((bool) 0)
0x56: IF (Stack[-1] == 0) GOTO 0x5e; Pop(1)

0x57: Push("world_danko.xml") // @poff=93
0x58: Push("player_danko.xml") // @poff=125
0x59: @ NewGame(Stack[-2], Stack[-1])
0x5a: Pop(2)
0x5b: @ DestroyWindow()
0x5c: Pop(0)
0x5d: Return(); Pop(0)

0x5e: PushEmpty(string, bool)
0x5f: Stack[-2] = "logo_buka.wmv" // @poff=159
0x60: Stack[-1] = (bool) 1
0x61: Push(-2, 4); TaskCall(0)
0x62: Call2 0x0

0x63: Pop(-2, 4); TaskReturn
0x64: Pop(2)
0x65: PushEmpty(string, bool)
0x66: Stack[-2] = "logo_icepick.wmv" // @poff=187
0x67: Stack[-1] = (bool) 1
0x68: Push(-2, 4); TaskCall(0)
0x69: Call2 0x0

0x6a: Pop(-2, 4); TaskReturn
0x6b: Pop(2)
0x6c: PushEmpty(int)
0x6d: Stack[-1] = (int) 0
0x6e: Push(-1, 1); TaskCall(1)
0x6f: Call2 0x41

0x70: Pop(-1, 1); TaskReturn
0x71: Pop(1)
0x72: PushEmpty(string, bool)
0x73: Stack[-2] = "intro.wmv" // @poff=221
0x74: Stack[-1] = (bool) 1
0x75: Push(-2, 4); TaskCall(0)
0x76: Call2 0x0

0x77: Pop(-2, 4); TaskReturn
0x78: Pop(2)
0x79: PushEmpty(bool)
0x7a: Stack[-1] = (bool) 0
0x7b: Call2 0xa3

0x7c: Pop(1)
0x7d: Return(); Pop(0)

0x7e: PushEmpty(object, object)
0x7f: Push("game_buttons.xml") // @poff=241
0x80: Push((bool) 0)
0x81: @ CreateWindow(Stack[-2], Stack[-1], Stack[-3])
0x82: Pop(2)
0x83: Stack[-1] = Stack[-3]
0x84: Return(); Pop(2)

0x85: Stack[-1] = 0
0x86: PushEmpty(string, string)
0x87: Push("editbox") // @poff=275
0x88: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x89: IF (Stack[-1] == 0) GOTO 0x94; Pop(1)

0x8a: Push((int) 0)
0x8b: @@ get(Stack[-2], Stack[-1]); Obj=4 // @poff=291
0x8c: Pop(1)
0x8d: @ DestroyWindow()
0x8e: Pop(0)
0x8f: PushEmpty(string)
0x90: Stack[-2] = Stack[-1]
0x91: Call2 0x28e

0x92: Pop(1)
0x93: Return(); Pop(2)

0x94: PushEmpty(int, string, object)
0x95: Stack[-8] = Stack[-3]
0x96: Stack[-7] = Stack[-2]
0x97: Stack[-6] = Stack[-1]
0x98: Call2 0x160

0x99: Pop(3)
0x9a: Return(); Pop(2)

0x9b: PushEmpty(object, object)
0x9c: Push("game_logo.xml") // @poff=295
0x9d: Push((bool) 0)
0x9e: @ CreateWindow(Stack[-2], Stack[-1], Stack[-3])
0x9f: Pop(2)
0xa0: Stack[-1] = Stack[-3]
0xa1: Return(); Pop(2)

0xa2: Stack[-1] = 0
0xa3: PushEmpty(bool, bool, bool, string, bool, bool, bool, string)
0xa4: @ CaptureKeyboard()
0xa5: Pop(0)
0xa6: Stack[2 + Tasks[-1].StackPointer] = (int)0
0xa7: @ GetWindowSize(Stack[-0]T, Stack[-1]T)
0xa8: Pop(0)
0xa9: Push("default") // @poff=323
0xaa: @ SetCursor(Stack[-1])
0xab: Pop(1)
0xac: Push("default") // @poff=323
0xad: @ SetBackground(Stack[-1])
0xae: Pop(1)
0xaf: Push("menumusic") // @poff=339
0xb0: @ PlaySound(Stack[-1])
0xb1: Pop(1)
0xb2: Push((bool) 1)
0xb3: @ ShowCursor(Stack[-1])
0xb4: Pop(1)
0xb5: Push(Stack[-9])
0xb6: IF (Stack[-1] == 0) GOTO 0xbc; Pop(1)

0xb7: Push("game_choose_pers.xml") // @poff=359
0xb8: Push((bool) 0)
0xb9: @ CreateWindow(Stack[-2], Stack[-1], Stack[-5]T)
0xba: Pop(2)
0xbb: GOTO 0xc4

0xbc: PushEmpty(object)
0xbd: Call2 0x7e

0xbe: Stack[3 + Tasks[-1].StackPointer] = Stack[-1]
0xbf: Pop(1)
0xc0: PushEmpty(object)
0xc1: Call2 0x9b

0xc2: Stack[4 + Tasks[-1].StackPointer] = Stack[-1]
0xc3: Pop(1)
0xc4: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0xc5: IF (Stack[-1] == 0) GOTO 0xc9; Pop(1)

0xc6: @ ProcessEvents()
0xc7: Pop(0)
0xc8: GOTO 0xc4

0xc9: PushEmpty()
0xca: Call2 0x263

0xcb: Pop(0)
0xcc: Push((int) 1)
0xcd: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] == Stack[-1])
0xce: IF (Stack[-1] == 0) GOTO 0xea; Pop(1)

0xcf: Push("menumusic") // @poff=339
0xd0: @ PauseSound(Stack[-1])
0xd1: Pop(1)
0xd2: PushEmpty(int)
0xd3: Stack[-1] = (int) 1
0xd4: Push(-1, 1); TaskCall(1)
0xd5: Call2 0x41

0xd6: Pop(-1, 1); TaskReturn
0xd7: Pop(1)
0xd8: PushEmpty(string, bool)
0xd9: Stack[-2] = "intro_danko.wmv" // @poff=401
0xda: Stack[-1] = (bool) 1
0xdb: Push(-2, 4); TaskCall(0)
0xdc: Call2 0x0

0xdd: Pop(-2, 4); TaskReturn
0xde: Pop(2)
0xdf: @ RemoveWorld()
0xe0: Pop(0)
0xe1: @ UISync()
0xe2: Pop(0)
0xe3: @ DestroyWindow()
0xe4: Pop(0)
0xe5: Push("world_danko.xml") // @poff=93
0xe6: Push("player_danko.xml") // @poff=125
0xe7: @ NewGame(Stack[-2], Stack[-1])
0xe8: Pop(2)
0xe9: GOTO 0x157

0xea: Push((int) 2)
0xeb: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] == Stack[-1])
0xec: IF (Stack[-1] == 0) GOTO 0x108; Pop(1)

0xed: Push("menumusic") // @poff=339
0xee: @ PauseSound(Stack[-1])
0xef: Pop(1)
0xf0: PushEmpty(int)
0xf1: Stack[-1] = (int) 2
0xf2: Push(-1, 1); TaskCall(1)
0xf3: Call2 0x41

0xf4: Pop(-1, 1); TaskReturn
0xf5: Pop(1)
0xf6: PushEmpty(string, bool)
0xf7: Stack[-2] = "intro_burah.wmv" // @poff=433
0xf8: Stack[-1] = (bool) 1
0xf9: Push(-2, 4); TaskCall(0)
0xfa: Call2 0x0

0xfb: Pop(-2, 4); TaskReturn
0xfc: Pop(2)
0xfd: @ RemoveWorld()
0xfe: Pop(0)
0xff: @ UISync()
0x100: Pop(0)
0x101: @ DestroyWindow()
0x102: Pop(0)
0x103: Push("world_burah.xml") // @poff=465
0x104: Push("player_burah.xml") // @poff=497
0x105: @ NewGame(Stack[-2], Stack[-1])
0x106: Pop(2)
0x107: GOTO 0x157

0x108: Push((int) 3)
0x109: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] == Stack[-1])
0x10a: IF (Stack[-1] == 0) GOTO 0x126; Pop(1)

0x10b: Push("menumusic") // @poff=339
0x10c: @ PauseSound(Stack[-1])
0x10d: Pop(1)
0x10e: PushEmpty(int)
0x10f: Stack[-1] = (int) 3
0x110: Push(-1, 1); TaskCall(1)
0x111: Call2 0x41

0x112: Pop(-1, 1); TaskReturn
0x113: Pop(1)
0x114: PushEmpty(string, bool)
0x115: Stack[-2] = "intro_klara.wmv" // @poff=531
0x116: Stack[-1] = (bool) 1
0x117: Push(-2, 4); TaskCall(0)
0x118: Call2 0x0

0x119: Pop(-2, 4); TaskReturn
0x11a: Pop(2)
0x11b: @ RemoveWorld()
0x11c: Pop(0)
0x11d: @ UISync()
0x11e: Pop(0)
0x11f: @ DestroyWindow()
0x120: Pop(0)
0x121: Push("world_klara.xml") // @poff=563
0x122: Push("player_klara.xml") // @poff=595
0x123: @ NewGame(Stack[-2], Stack[-1])
0x124: Pop(2)
0x125: GOTO 0x157

0x126: Push((int) 4)
0x127: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] == Stack[-1])
0x128: IF (Stack[-1] == 0) GOTO 0x139; Pop(1)

0x129: Push("menumusic") // @poff=339
0x12a: @ PauseSound(Stack[-1])
0x12b: Pop(1)
0x12c: Push("Loading : ") // @poff=629
0x12d: Pop(1); Push(Stack[-1] + Stack[10 + Tasks[-1].StackPointer]);
0x12e: @ Trace(Stack[-1])
0x12f: Pop(1)
0x130: @ RemoveWorld()
0x131: Pop(0)
0x132: @ UISync()
0x133: Pop(0)
0x134: @ DestroyWindow()
0x135: Pop(0)
0x136: @ LoadGame(Stack[-4], Stack[-10]T)
0x137: Pop(0)
0x138: GOTO 0x157

0x139: Push((int) 5)
0x13a: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] == Stack[-1])
0x13b: IF (Stack[-1] == 0) GOTO 0x14a; Pop(1)

0x13c: Pop(0); Push((bool) Stack[9 + Tasks[-1].StackPointer] == 0)
0x13d: IF (Stack[-1] == 0) GOTO 0x143; Pop(1)

0x13e: @ DestroyWindow()
0x13f: Pop(0)
0x140: @ SaveGame(Stack[-3])
0x141: Pop(0)
0x142: GOTO 0x149

0x143: @ DestroyWindow()
0x144: Pop(0)
0x145: @@@ GetFileName(Stack[-1]); Obj=9 // @poff=651
0x146: Pop(0)
0x147: @ SaveGame(Stack[-2], Stack[-1])
0x148: Pop(0)
0x149: GOTO 0x157

0x14a: Push((int) 7)
0x14b: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] == Stack[-1])
0x14c: IF (Stack[-1] == 0) GOTO 0x157; Pop(1)

0x14d: @ RemoveWorld()
0x14e: Pop(0)
0x14f: @ UISync()
0x150: Pop(0)
0x151: @ DestroyWindow()
0x152: Pop(0)
0x153: Push("world_intro.xml") // @poff=663
0x154: Push("player_intro.xml") // @poff=695
0x155: @ NewGame(Stack[-2], Stack[-1])
0x156: Pop(2)
0x157: Return(); Pop(8)

0x158: PushEmpty()
0x159: Push((int) 27)
0x15a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x15b: IF (Stack[-1] == 0) GOTO 0x15f; Pop(1)

0x15c: PushEmpty()
0x15d: Call2 0x257

0x15e: Pop(0)
0x15f: Return(); Pop(0)

0x160: PushEmpty()
0x161: Push("newgame") // @poff=729
0x162: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x163: IF (Stack[-1] == 0) GOTO 0x168; Pop(1)

0x164: Stack[2 + Tasks[-1].StackPointer] = (int)7
0x165: @ StopEventProcessing()
0x166: Pop(0)
0x167: GOTO 0x256

0x168: Push("quitgame") // @poff=745
0x169: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x16a: IF (Stack[-1] == 0) GOTO 0x172; Pop(1)

0x16b: Push("Quit game") // @poff=763
0x16c: @ UITrace(Stack[-1])
0x16d: Pop(1)
0x16e: @ Quit()
0x16f: Pop(0)
0x170: Return(); Pop(0)

0x171: GOTO 0x256

0x172: Push("loadgame") // @poff=783
0x173: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x174: IF (Stack[-1] == 0) GOTO 0x17e; Pop(1)

0x175: PushEmpty()
0x176: Call2 0x263

0x177: Pop(0)
0x178: Push("load.xml") // @poff=801
0x179: Push((bool) 0)
0x17a: @ CreateWindow(Stack[-2], Stack[-1], Stack[-6]T)
0x17b: Pop(2)
0x17c: Return(); Pop(0)

0x17d: GOTO 0x256

0x17e: Push("savegame") // @poff=819
0x17f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x180: IF (Stack[-1] == 0) GOTO 0x18a; Pop(1)

0x181: PushEmpty()
0x182: Call2 0x263

0x183: Pop(0)
0x184: Push("save.xml") // @poff=837
0x185: Push((bool) 0)
0x186: @ CreateWindow(Stack[-2], Stack[-1], Stack[-7]T)
0x187: Pop(2)
0x188: Return(); Pop(0)

0x189: GOTO 0x256

0x18a: Push("gameoptions") // @poff=855
0x18b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x18c: IF (Stack[-1] == 0) GOTO 0x196; Pop(1)

0x18d: PushEmpty()
0x18e: Call2 0x263

0x18f: Pop(0)
0x190: Push("options.xml") // @poff=879
0x191: Push((bool) 0)
0x192: @ CreateWindow(Stack[-2], Stack[-1], Stack[-8]T)
0x193: Pop(2)
0x194: Return(); Pop(0)

0x195: GOTO 0x256

0x196: Push("continue") // @poff=903
0x197: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x198: IF (Stack[-1] == 0) GOTO 0x19e; Pop(1)

0x199: Stack[2 + Tasks[-1].StackPointer] = (int)6
0x19a: @ StopEventProcessing()
0x19b: Pop(0)
0x19c: Return(); Pop(0)

0x19d: GOTO 0x256

0x19e: Push("credits") // @poff=921
0x19f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1a0: IF (Stack[-1] == 0) GOTO 0x1b6; Pop(1)

0x1a1: PushEmpty()
0x1a2: Call2 0x263

0x1a3: Pop(0)
0x1a4: PushEmpty(int)
0x1a5: Stack[-1] = (int) 8
0x1a6: Push(-1, 1); TaskCall(1)
0x1a7: Call2 0x41

0x1a8: Pop(-1, 1); TaskReturn
0x1a9: Pop(1)
0x1aa: PushEmpty(object)
0x1ab: Call2 0x7e

0x1ac: Stack[3 + Tasks[-1].StackPointer] = Stack[-1]
0x1ad: Pop(1)
0x1ae: PushEmpty(object)
0x1af: Call2 0x9b

0x1b0: Stack[4 + Tasks[-1].StackPointer] = Stack[-1]
0x1b1: Pop(1)
0x1b2: Push((bool) 1)
0x1b3: @ ShowCursor(Stack[-1])
0x1b4: Pop(1)
0x1b5: GOTO 0x256

0x1b6: Push("danko") // @poff=937
0x1b7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1b8: IF (Stack[-1] == 0) GOTO 0x1d9; Pop(1)

0x1b9: Push((int) 0)
0x1ba: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1bb: IF (Stack[-1] == 0) GOTO 0x1c0; Pop(1)

0x1bc: Stack[2 + Tasks[-1].StackPointer] = (int)1
0x1bd: @ StopEventProcessing()
0x1be: Pop(0)
0x1bf: GOTO 0x1d7

0x1c0: Push((int) 1)
0x1c1: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1c2: IF (Stack[-1] == 0) GOTO 0x1cc; Pop(1)

0x1c3: Push((int) 202)
0x1c4: Push("player_name") // @poff=949
0x1c5: @ SendMessage(Stack[-2], Stack[-1])
0x1c6: Pop(2)
0x1c7: Push((int) 203)
0x1c8: Push("player_desc") // @poff=973
0x1c9: @ SendMessage(Stack[-2], Stack[-1])
0x1ca: Pop(2)
0x1cb: GOTO 0x1d7

0x1cc: Push((int) 2)
0x1cd: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1ce: IF (Stack[-1] == 0) GOTO 0x1d7; Pop(1)

0x1cf: Push((int) -1)
0x1d0: Push("player_name") // @poff=949
0x1d1: @ SendMessage(Stack[-2], Stack[-1])
0x1d2: Pop(2)
0x1d3: Push((int) -1)
0x1d4: Push("player_desc") // @poff=973
0x1d5: @ SendMessage(Stack[-2], Stack[-1])
0x1d6: Pop(2)
0x1d7: Return(); Pop(0)

0x1d8: GOTO 0x256

0x1d9: Push("burah") // @poff=997
0x1da: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1db: IF (Stack[-1] == 0) GOTO 0x1fc; Pop(1)

0x1dc: Push((int) 0)
0x1dd: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1de: IF (Stack[-1] == 0) GOTO 0x1e3; Pop(1)

0x1df: Stack[2 + Tasks[-1].StackPointer] = (int)2
0x1e0: @ StopEventProcessing()
0x1e1: Pop(0)
0x1e2: GOTO 0x1fa

0x1e3: Push((int) 1)
0x1e4: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1e5: IF (Stack[-1] == 0) GOTO 0x1ef; Pop(1)

0x1e6: Push((int) 205)
0x1e7: Push("player_name") // @poff=949
0x1e8: @ SendMessage(Stack[-2], Stack[-1])
0x1e9: Pop(2)
0x1ea: Push((int) 206)
0x1eb: Push("player_desc") // @poff=973
0x1ec: @ SendMessage(Stack[-2], Stack[-1])
0x1ed: Pop(2)
0x1ee: GOTO 0x1fa

0x1ef: Push((int) 2)
0x1f0: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1f1: IF (Stack[-1] == 0) GOTO 0x1fa; Pop(1)

0x1f2: Push((int) -1)
0x1f3: Push("player_name") // @poff=949
0x1f4: @ SendMessage(Stack[-2], Stack[-1])
0x1f5: Pop(2)
0x1f6: Push((int) -1)
0x1f7: Push("player_desc") // @poff=973
0x1f8: @ SendMessage(Stack[-2], Stack[-1])
0x1f9: Pop(2)
0x1fa: Return(); Pop(0)

0x1fb: GOTO 0x256

0x1fc: Push("klara") // @poff=1009
0x1fd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1fe: IF (Stack[-1] == 0) GOTO 0x22e; Pop(1)

0x1ff: PushEmpty(bool)
0x200: Stack[-1] = (bool) 0
0x201: PushEmpty(bool)
0x202: Call2 0x286

0x203: Pop(0)
0x204: Pop(1); Push((bool) Stack[-1] == 0)
0x205: IF (Stack[-1] == 0) GOTO 0x20c; Pop(1)

0x206: PushEmpty(bool)
0x207: Call2 0x27e

0x208: Pop(0)
0x209: Pop(1); Push((bool) Stack[-1] == 0)
0x20a: IF (Stack[-1] == 0) GOTO 0x20c; Pop(1)

0x20b: Stack[-1] = (bool) 1
0x20c: IF (Stack[-1] == 0) GOTO 0x20e; Pop(1)

0x20d: Return(); Pop(0)

0x20e: Push((int) 0)
0x20f: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x210: IF (Stack[-1] == 0) GOTO 0x215; Pop(1)

0x211: Stack[2 + Tasks[-1].StackPointer] = (int)3
0x212: @ StopEventProcessing()
0x213: Pop(0)
0x214: GOTO 0x22c

0x215: Push((int) 1)
0x216: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x217: IF (Stack[-1] == 0) GOTO 0x221; Pop(1)

0x218: Push((int) 208)
0x219: Push("player_name") // @poff=949
0x21a: @ SendMessage(Stack[-2], Stack[-1])
0x21b: Pop(2)
0x21c: Push((int) 209)
0x21d: Push("player_desc") // @poff=973
0x21e: @ SendMessage(Stack[-2], Stack[-1])
0x21f: Pop(2)
0x220: GOTO 0x22c

0x221: Push((int) 2)
0x222: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x223: IF (Stack[-1] == 0) GOTO 0x22c; Pop(1)

0x224: Push((int) -1)
0x225: Push("player_name") // @poff=949
0x226: @ SendMessage(Stack[-2], Stack[-1])
0x227: Pop(2)
0x228: Push((int) -1)
0x229: Push("player_desc") // @poff=973
0x22a: @ SendMessage(Stack[-2], Stack[-1])
0x22b: Pop(2)
0x22c: Return(); Pop(0)

0x22d: GOTO 0x256

0x22e: Push("load") // @poff=1021
0x22f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x230: IF (Stack[-1] == 0) GOTO 0x23f; Pop(1)

0x231: Push((int) 0)
0x232: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x233: IF (Stack[-1] == 0) GOTO 0x23a; Pop(1)

0x234: Stack[2 + Tasks[-1].StackPointer] = (int)4
0x235: @@ GetFileName(Stack[-10]T); Obj=1 // @poff=651
0x236: Pop(0)
0x237: @ StopEventProcessing()
0x238: Pop(0)
0x239: GOTO 0x23d

0x23a: PushEmpty()
0x23b: Call2 0x257

0x23c: Pop(0)
0x23d: Return(); Pop(0)

0x23e: GOTO 0x256

0x23f: Push("save") // @poff=1031
0x240: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x241: IF (Stack[-1] == 0) GOTO 0x24f; Pop(1)

0x242: Push((int) 0)
0x243: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x244: IF (Stack[-1] == 0) GOTO 0x24a; Pop(1)

0x245: Stack[2 + Tasks[-1].StackPointer] = (int)5
0x246: Stack[9 + Tasks[-1].StackPointer] = Stack[-1]
0x247: @ StopEventProcessing()
0x248: Pop(0)
0x249: GOTO 0x24d

0x24a: PushEmpty()
0x24b: Call2 0x257

0x24c: Pop(0)
0x24d: Return(); Pop(0)

0x24e: GOTO 0x256

0x24f: Push("options") // @poff=863
0x250: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x251: IF (Stack[-1] == 0) GOTO 0x256; Pop(1)

0x252: PushEmpty()
0x253: Call2 0x257

0x254: Pop(0)
0x255: Return(); Pop(0)

0x256: Return(); Pop(0)

0x257: PushEmpty()
0x258: Call2 0x263

0x259: Pop(0)
0x25a: PushEmpty(object)
0x25b: Call2 0x7e

0x25c: Stack[3 + Tasks[-1].StackPointer] = Stack[-1]
0x25d: Pop(1)
0x25e: PushEmpty(object)
0x25f: Call2 0x9b

0x260: Stack[4 + Tasks[-1].StackPointer] = Stack[-1]
0x261: Pop(1)
0x262: Return(); Pop(0)

0x263: Push( Stack[3 + Tasks[-1].StackPointer] )
0x264: IF (Stack[-1] == 0) GOTO 0x267; Pop(1)

0x265: @@@ DestroyWindow(); Obj=3 // @poff=79
0x266: Pop(0)
0x267: Push( Stack[4 + Tasks[-1].StackPointer] )
0x268: IF (Stack[-1] == 0) GOTO 0x26b; Pop(1)

0x269: @@@ DestroyWindow(); Obj=4 // @poff=79
0x26a: Pop(0)
0x26b: Push( Stack[5 + Tasks[-1].StackPointer] )
0x26c: IF (Stack[-1] == 0) GOTO 0x26f; Pop(1)

0x26d: @@@ DestroyWindow(); Obj=5 // @poff=79
0x26e: Pop(0)
0x26f: Push( Stack[6 + Tasks[-1].StackPointer] )
0x270: IF (Stack[-1] == 0) GOTO 0x273; Pop(1)

0x271: @@@ DestroyWindow(); Obj=6 // @poff=79
0x272: Pop(0)
0x273: Push( Stack[7 + Tasks[-1].StackPointer] )
0x274: IF (Stack[-1] == 0) GOTO 0x277; Pop(1)

0x275: @@@ DestroyWindow(); Obj=7 // @poff=79
0x276: Pop(0)
0x277: Push( Stack[8 + Tasks[-1].StackPointer] )
0x278: IF (Stack[-1] == 0) GOTO 0x27b; Pop(1)

0x279: @@@ DestroyWindow(); Obj=8 // @poff=79
0x27a: Pop(0)
0x27b: @ CaptureKeyboard()
0x27c: Pop(0)
0x27d: Return(); Pop(0)

0x27e: PushEmpty(int, int)
0x27f: Push("BurahCompleted") // @poff=1041
0x280: Push((int) 0)
0x281: @ GetRegistryData(Stack[-3], Stack[-2], Stack[-1])
0x282: Pop(2)
0x283: Push((int) 0)
0x284: Stack[-4] = Stack[-2] != Stack[-1]; Pop(1);
0x285: Return(); Pop(2)

0x286: PushEmpty(int, int)
0x287: Push("DankoCompleted") // @poff=1071
0x288: Push((int) 0)
0x289: @ GetRegistryData(Stack[-3], Stack[-2], Stack[-1])
0x28a: Pop(2)
0x28b: Push((int) 0)
0x28c: Stack[-4] = Stack[-2] != Stack[-1]; Pop(1);
0x28d: Return(); Pop(2)

0x28e: PushEmpty(bool, bool)
0x28f: Push("loading map: ") // @poff=1101
0x290: Pop(1); Push(Stack[-1] + Stack[-4]);
0x291: @ UITrace(Stack[-1])
0x292: Pop(1)
0x293: @ LoadMap(Stack[-1], Stack[-3])
0x294: Pop(0)
0x295: Return(); Pop(2)

