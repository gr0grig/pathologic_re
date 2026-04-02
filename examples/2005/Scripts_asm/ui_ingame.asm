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
	W:ingame_buttons.xml
	W:game_logo.xml
	W:default
	W:menumusic
	W:game_choose_pers.xml
	W:intro_danko.wmv
	W:world_danko.xml
	W:player_danko.xml
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
// @pool_raw:506c61790049734c6f737400526573746f7265004973506c6179696e670053747265746368426c69740053746f700069006e00740072006f002e0078006d006c00000069006e00740072006f00000044657374726f7957696e646f770069006e00670061006d0065005f0062007500740074006f006e0073002e0078006d006c000000670061006d0065005f006c006f0067006f002e0078006d006c000000640065006600610075006c00740000006d0065006e0075006d0075007300690063000000670061006d0065005f00630068006f006f00730065005f0070006500720073002e0078006d006c00000069006e00740072006f005f00640061006e006b006f002e0077006d007600000077006f0072006c0064005f00640061006e006b006f002e0078006d006c00000070006c0061007900650072005f00640061006e006b006f002e0078006d006c00000069006e00740072006f005f00620075007200610068002e0077006d007600000077006f0072006c0064005f00620075007200610068002e0078006d006c00000070006c0061007900650072005f00620075007200610068002e0078006d006c00000069006e00740072006f005f006b006c006100720061002e0077006d007600000077006f0072006c0064005f006b006c006100720061002e0078006d006c00000070006c0061007900650072005f006b006c006100720061002e0078006d006c0000004c006f006100640069006e00670020003a002000000047657446696c654e616d650077006f0072006c0064005f0069006e00740072006f002e0078006d006c00000070006c0061007900650072005f0069006e00740072006f002e0078006d006c0000006e0065007700670061006d00650000007100750069007400670061006d006500000051007500690074002000670061006d00650000006c006f0061006400670061006d00650000006c006f00610064002e0078006d006c0000007300610076006500670061006d006500000073006100760065002e0078006d006c000000670061006d0065006f007000740069006f006e00730000006f007000740069006f006e0073002e0078006d006c00000063006f006e00740069006e0075006500000063007200650064006900740073000000640061006e006b006f00000070006c0061007900650072005f006e0061006d006500000070006c0061007900650072005f00640065007300630000006200750072006100680000006b006c0061007200610000006c006f00610064000000730061007600650000004200750072006100680043006f006d0070006c0065007400650064000000440061006e006b006f0043006f006d0070006c0065007400650064000000
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
	DestroyWindow (0 args)
	Trace (1 args)
	SetCursor (1 args)
	SetBackground (1 args)
	PlaySound (1 args)
	PauseSound (1 args)
	RemoveWorld (0 args)
	UISync (0 args)
	NewGame (2 args)
	LoadGame (2 args)
	SaveGame (1 args)
	SaveGame (2 args)
	UITrace (1 args)
	Quit (0 args)
	GetRegistryData (3 args)

RunOp = 0x55
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object, int, int, bool) Params = 2
		EVENT_0 Op = 0x1e Vars = ()
		EVENT_101 Op = 0x38 Vars = (int)
	GTASK_1 Vars = (object) Params = 1
		EVENT_200 Op = 0x4c Vars = (int, string, object)
	GTASK_2 Vars = (int, int, int, object, object, object, object, object, object, object, string, object) Params = 0
		EVENT_100 Op = 0x64 Vars = (int)
		EVENT_200 Op = 0x12a Vars = (int, string, object)


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

0x55: PushEmpty(bool)
0x56: Stack[-1] = (bool) 0
0x57: Call2 0x75

0x58: Pop(1)
0x59: @ DestroyWindow()
0x5a: Pop(0)
0x5b: Return(); Pop(0)

0x5c: PushEmpty(object, object)
0x5d: Push("ingame_buttons.xml") // @poff=93
0x5e: Push((bool) 0)
0x5f: @ CreateWindow(Stack[-2], Stack[-1], Stack[-3])
0x60: Pop(2)
0x61: Stack[-1] = Stack[-3]
0x62: Return(); Pop(2)

0x63: Stack[-1] = 0
0x64: PushEmpty()
0x65: @ Trace(Stack[-1])
0x66: Pop(0)
0x67: Push((int) 27)
0x68: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x69: IF (Stack[-1] == 0) GOTO 0x6c; Pop(1)

0x6a: @ DestroyWindow()
0x6b: Pop(0)
0x6c: Return(); Pop(0)

0x6d: PushEmpty(object, object)
0x6e: Push("game_logo.xml") // @poff=131
0x6f: Push((bool) 0)
0x70: @ CreateWindow(Stack[-2], Stack[-1], Stack[-3])
0x71: Pop(2)
0x72: Stack[-1] = Stack[-3]
0x73: Return(); Pop(2)

0x74: Stack[-1] = 0
0x75: PushEmpty(bool, bool, bool, string, bool, bool, bool, string)
0x76: @ CaptureKeyboard()
0x77: Pop(0)
0x78: Stack[2 + Tasks[-1].StackPointer] = (int)0
0x79: @ GetWindowSize(Stack[-0]T, Stack[-1]T)
0x7a: Pop(0)
0x7b: Push("default") // @poff=159
0x7c: @ SetCursor(Stack[-1])
0x7d: Pop(1)
0x7e: Push("default") // @poff=159
0x7f: @ SetBackground(Stack[-1])
0x80: Pop(1)
0x81: Push("menumusic") // @poff=175
0x82: @ PlaySound(Stack[-1])
0x83: Pop(1)
0x84: Push((bool) 1)
0x85: @ ShowCursor(Stack[-1])
0x86: Pop(1)
0x87: Push(Stack[-9])
0x88: IF (Stack[-1] == 0) GOTO 0x8e; Pop(1)

0x89: Push("game_choose_pers.xml") // @poff=195
0x8a: Push((bool) 0)
0x8b: @ CreateWindow(Stack[-2], Stack[-1], Stack[-5]T)
0x8c: Pop(2)
0x8d: GOTO 0x96

0x8e: PushEmpty(object)
0x8f: Call2 0x5c

0x90: Stack[3 + Tasks[-1].StackPointer] = Stack[-1]
0x91: Pop(1)
0x92: PushEmpty(object)
0x93: Call2 0x6d

0x94: Stack[4 + Tasks[-1].StackPointer] = Stack[-1]
0x95: Pop(1)
0x96: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x97: IF (Stack[-1] == 0) GOTO 0x9b; Pop(1)

0x98: @ ProcessEvents()
0x99: Pop(0)
0x9a: GOTO 0x96

0x9b: PushEmpty()
0x9c: Call2 0x22d

0x9d: Pop(0)
0x9e: Push((int) 1)
0x9f: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] == Stack[-1])
0xa0: IF (Stack[-1] == 0) GOTO 0xbc; Pop(1)

0xa1: Push("menumusic") // @poff=175
0xa2: @ PauseSound(Stack[-1])
0xa3: Pop(1)
0xa4: PushEmpty(int)
0xa5: Stack[-1] = (int) 1
0xa6: Push(-1, 1); TaskCall(1)
0xa7: Call2 0x41

0xa8: Pop(-1, 1); TaskReturn
0xa9: Pop(1)
0xaa: PushEmpty(string, bool)
0xab: Stack[-2] = "intro_danko.wmv" // @poff=237
0xac: Stack[-1] = (bool) 1
0xad: Push(-2, 4); TaskCall(0)
0xae: Call2 0x0

0xaf: Pop(-2, 4); TaskReturn
0xb0: Pop(2)
0xb1: @ RemoveWorld()
0xb2: Pop(0)
0xb3: @ UISync()
0xb4: Pop(0)
0xb5: @ DestroyWindow()
0xb6: Pop(0)
0xb7: Push("world_danko.xml") // @poff=269
0xb8: Push("player_danko.xml") // @poff=301
0xb9: @ NewGame(Stack[-2], Stack[-1])
0xba: Pop(2)
0xbb: GOTO 0x129

0xbc: Push((int) 2)
0xbd: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] == Stack[-1])
0xbe: IF (Stack[-1] == 0) GOTO 0xda; Pop(1)

0xbf: Push("menumusic") // @poff=175
0xc0: @ PauseSound(Stack[-1])
0xc1: Pop(1)
0xc2: PushEmpty(int)
0xc3: Stack[-1] = (int) 2
0xc4: Push(-1, 1); TaskCall(1)
0xc5: Call2 0x41

0xc6: Pop(-1, 1); TaskReturn
0xc7: Pop(1)
0xc8: PushEmpty(string, bool)
0xc9: Stack[-2] = "intro_burah.wmv" // @poff=335
0xca: Stack[-1] = (bool) 1
0xcb: Push(-2, 4); TaskCall(0)
0xcc: Call2 0x0

0xcd: Pop(-2, 4); TaskReturn
0xce: Pop(2)
0xcf: @ RemoveWorld()
0xd0: Pop(0)
0xd1: @ UISync()
0xd2: Pop(0)
0xd3: @ DestroyWindow()
0xd4: Pop(0)
0xd5: Push("world_burah.xml") // @poff=367
0xd6: Push("player_burah.xml") // @poff=399
0xd7: @ NewGame(Stack[-2], Stack[-1])
0xd8: Pop(2)
0xd9: GOTO 0x129

0xda: Push((int) 3)
0xdb: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] == Stack[-1])
0xdc: IF (Stack[-1] == 0) GOTO 0xf8; Pop(1)

0xdd: Push("menumusic") // @poff=175
0xde: @ PauseSound(Stack[-1])
0xdf: Pop(1)
0xe0: PushEmpty(int)
0xe1: Stack[-1] = (int) 3
0xe2: Push(-1, 1); TaskCall(1)
0xe3: Call2 0x41

0xe4: Pop(-1, 1); TaskReturn
0xe5: Pop(1)
0xe6: PushEmpty(string, bool)
0xe7: Stack[-2] = "intro_klara.wmv" // @poff=433
0xe8: Stack[-1] = (bool) 1
0xe9: Push(-2, 4); TaskCall(0)
0xea: Call2 0x0

0xeb: Pop(-2, 4); TaskReturn
0xec: Pop(2)
0xed: @ RemoveWorld()
0xee: Pop(0)
0xef: @ UISync()
0xf0: Pop(0)
0xf1: @ DestroyWindow()
0xf2: Pop(0)
0xf3: Push("world_klara.xml") // @poff=465
0xf4: Push("player_klara.xml") // @poff=497
0xf5: @ NewGame(Stack[-2], Stack[-1])
0xf6: Pop(2)
0xf7: GOTO 0x129

0xf8: Push((int) 4)
0xf9: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] == Stack[-1])
0xfa: IF (Stack[-1] == 0) GOTO 0x10b; Pop(1)

0xfb: Push("menumusic") // @poff=175
0xfc: @ PauseSound(Stack[-1])
0xfd: Pop(1)
0xfe: Push("Loading : ") // @poff=531
0xff: Pop(1); Push(Stack[-1] + Stack[10 + Tasks[-1].StackPointer]);
0x100: @ Trace(Stack[-1])
0x101: Pop(1)
0x102: @ RemoveWorld()
0x103: Pop(0)
0x104: @ UISync()
0x105: Pop(0)
0x106: @ DestroyWindow()
0x107: Pop(0)
0x108: @ LoadGame(Stack[-4], Stack[-10]T)
0x109: Pop(0)
0x10a: GOTO 0x129

0x10b: Push((int) 5)
0x10c: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] == Stack[-1])
0x10d: IF (Stack[-1] == 0) GOTO 0x11c; Pop(1)

0x10e: Pop(0); Push((bool) Stack[9 + Tasks[-1].StackPointer] == 0)
0x10f: IF (Stack[-1] == 0) GOTO 0x115; Pop(1)

0x110: @ DestroyWindow()
0x111: Pop(0)
0x112: @ SaveGame(Stack[-3])
0x113: Pop(0)
0x114: GOTO 0x11b

0x115: @ DestroyWindow()
0x116: Pop(0)
0x117: @@@ GetFileName(Stack[-1]); Obj=9 // @poff=553
0x118: Pop(0)
0x119: @ SaveGame(Stack[-2], Stack[-1])
0x11a: Pop(0)
0x11b: GOTO 0x129

0x11c: Push((int) 7)
0x11d: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] == Stack[-1])
0x11e: IF (Stack[-1] == 0) GOTO 0x129; Pop(1)

0x11f: @ RemoveWorld()
0x120: Pop(0)
0x121: @ UISync()
0x122: Pop(0)
0x123: @ DestroyWindow()
0x124: Pop(0)
0x125: Push("world_intro.xml") // @poff=565
0x126: Push("player_intro.xml") // @poff=597
0x127: @ NewGame(Stack[-2], Stack[-1])
0x128: Pop(2)
0x129: Return(); Pop(8)

0x12a: PushEmpty()
0x12b: Push("newgame") // @poff=631
0x12c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x12d: IF (Stack[-1] == 0) GOTO 0x132; Pop(1)

0x12e: Stack[2 + Tasks[-1].StackPointer] = (int)7
0x12f: @ StopEventProcessing()
0x130: Pop(0)
0x131: GOTO 0x220

0x132: Push("quitgame") // @poff=647
0x133: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x134: IF (Stack[-1] == 0) GOTO 0x13c; Pop(1)

0x135: Push("Quit game") // @poff=665
0x136: @ UITrace(Stack[-1])
0x137: Pop(1)
0x138: @ Quit()
0x139: Pop(0)
0x13a: Return(); Pop(0)

0x13b: GOTO 0x220

0x13c: Push("loadgame") // @poff=685
0x13d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x13e: IF (Stack[-1] == 0) GOTO 0x148; Pop(1)

0x13f: PushEmpty()
0x140: Call2 0x22d

0x141: Pop(0)
0x142: Push("load.xml") // @poff=703
0x143: Push((bool) 0)
0x144: @ CreateWindow(Stack[-2], Stack[-1], Stack[-6]T)
0x145: Pop(2)
0x146: Return(); Pop(0)

0x147: GOTO 0x220

0x148: Push("savegame") // @poff=721
0x149: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x14a: IF (Stack[-1] == 0) GOTO 0x154; Pop(1)

0x14b: PushEmpty()
0x14c: Call2 0x22d

0x14d: Pop(0)
0x14e: Push("save.xml") // @poff=739
0x14f: Push((bool) 0)
0x150: @ CreateWindow(Stack[-2], Stack[-1], Stack[-7]T)
0x151: Pop(2)
0x152: Return(); Pop(0)

0x153: GOTO 0x220

0x154: Push("gameoptions") // @poff=757
0x155: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x156: IF (Stack[-1] == 0) GOTO 0x160; Pop(1)

0x157: PushEmpty()
0x158: Call2 0x22d

0x159: Pop(0)
0x15a: Push("options.xml") // @poff=781
0x15b: Push((bool) 0)
0x15c: @ CreateWindow(Stack[-2], Stack[-1], Stack[-8]T)
0x15d: Pop(2)
0x15e: Return(); Pop(0)

0x15f: GOTO 0x220

0x160: Push("continue") // @poff=805
0x161: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x162: IF (Stack[-1] == 0) GOTO 0x168; Pop(1)

0x163: Stack[2 + Tasks[-1].StackPointer] = (int)6
0x164: @ StopEventProcessing()
0x165: Pop(0)
0x166: Return(); Pop(0)

0x167: GOTO 0x220

0x168: Push("credits") // @poff=823
0x169: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x16a: IF (Stack[-1] == 0) GOTO 0x180; Pop(1)

0x16b: PushEmpty()
0x16c: Call2 0x22d

0x16d: Pop(0)
0x16e: PushEmpty(int)
0x16f: Stack[-1] = (int) 8
0x170: Push(-1, 1); TaskCall(1)
0x171: Call2 0x41

0x172: Pop(-1, 1); TaskReturn
0x173: Pop(1)
0x174: PushEmpty(object)
0x175: Call2 0x5c

0x176: Stack[3 + Tasks[-1].StackPointer] = Stack[-1]
0x177: Pop(1)
0x178: PushEmpty(object)
0x179: Call2 0x6d

0x17a: Stack[4 + Tasks[-1].StackPointer] = Stack[-1]
0x17b: Pop(1)
0x17c: Push((bool) 1)
0x17d: @ ShowCursor(Stack[-1])
0x17e: Pop(1)
0x17f: GOTO 0x220

0x180: Push("danko") // @poff=839
0x181: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x182: IF (Stack[-1] == 0) GOTO 0x1a3; Pop(1)

0x183: Push((int) 0)
0x184: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x185: IF (Stack[-1] == 0) GOTO 0x18a; Pop(1)

0x186: Stack[2 + Tasks[-1].StackPointer] = (int)1
0x187: @ StopEventProcessing()
0x188: Pop(0)
0x189: GOTO 0x1a1

0x18a: Push((int) 1)
0x18b: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x18c: IF (Stack[-1] == 0) GOTO 0x196; Pop(1)

0x18d: Push((int) 202)
0x18e: Push("player_name") // @poff=851
0x18f: @ SendMessage(Stack[-2], Stack[-1])
0x190: Pop(2)
0x191: Push((int) 203)
0x192: Push("player_desc") // @poff=875
0x193: @ SendMessage(Stack[-2], Stack[-1])
0x194: Pop(2)
0x195: GOTO 0x1a1

0x196: Push((int) 2)
0x197: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x198: IF (Stack[-1] == 0) GOTO 0x1a1; Pop(1)

0x199: Push((int) -1)
0x19a: Push("player_name") // @poff=851
0x19b: @ SendMessage(Stack[-2], Stack[-1])
0x19c: Pop(2)
0x19d: Push((int) -1)
0x19e: Push("player_desc") // @poff=875
0x19f: @ SendMessage(Stack[-2], Stack[-1])
0x1a0: Pop(2)
0x1a1: Return(); Pop(0)

0x1a2: GOTO 0x220

0x1a3: Push("burah") // @poff=899
0x1a4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1a5: IF (Stack[-1] == 0) GOTO 0x1c6; Pop(1)

0x1a6: Push((int) 0)
0x1a7: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1a8: IF (Stack[-1] == 0) GOTO 0x1ad; Pop(1)

0x1a9: Stack[2 + Tasks[-1].StackPointer] = (int)2
0x1aa: @ StopEventProcessing()
0x1ab: Pop(0)
0x1ac: GOTO 0x1c4

0x1ad: Push((int) 1)
0x1ae: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1af: IF (Stack[-1] == 0) GOTO 0x1b9; Pop(1)

0x1b0: Push((int) 205)
0x1b1: Push("player_name") // @poff=851
0x1b2: @ SendMessage(Stack[-2], Stack[-1])
0x1b3: Pop(2)
0x1b4: Push((int) 206)
0x1b5: Push("player_desc") // @poff=875
0x1b6: @ SendMessage(Stack[-2], Stack[-1])
0x1b7: Pop(2)
0x1b8: GOTO 0x1c4

0x1b9: Push((int) 2)
0x1ba: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1bb: IF (Stack[-1] == 0) GOTO 0x1c4; Pop(1)

0x1bc: Push((int) -1)
0x1bd: Push("player_name") // @poff=851
0x1be: @ SendMessage(Stack[-2], Stack[-1])
0x1bf: Pop(2)
0x1c0: Push((int) -1)
0x1c1: Push("player_desc") // @poff=875
0x1c2: @ SendMessage(Stack[-2], Stack[-1])
0x1c3: Pop(2)
0x1c4: Return(); Pop(0)

0x1c5: GOTO 0x220

0x1c6: Push("klara") // @poff=911
0x1c7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1c8: IF (Stack[-1] == 0) GOTO 0x1f8; Pop(1)

0x1c9: PushEmpty(bool)
0x1ca: Stack[-1] = (bool) 0
0x1cb: PushEmpty(bool)
0x1cc: Call2 0x250

0x1cd: Pop(0)
0x1ce: Pop(1); Push((bool) Stack[-1] == 0)
0x1cf: IF (Stack[-1] == 0) GOTO 0x1d6; Pop(1)

0x1d0: PushEmpty(bool)
0x1d1: Call2 0x248

0x1d2: Pop(0)
0x1d3: Pop(1); Push((bool) Stack[-1] == 0)
0x1d4: IF (Stack[-1] == 0) GOTO 0x1d6; Pop(1)

0x1d5: Stack[-1] = (bool) 1
0x1d6: IF (Stack[-1] == 0) GOTO 0x1d8; Pop(1)

0x1d7: Return(); Pop(0)

0x1d8: Push((int) 0)
0x1d9: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1da: IF (Stack[-1] == 0) GOTO 0x1df; Pop(1)

0x1db: Stack[2 + Tasks[-1].StackPointer] = (int)3
0x1dc: @ StopEventProcessing()
0x1dd: Pop(0)
0x1de: GOTO 0x1f6

0x1df: Push((int) 1)
0x1e0: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1e1: IF (Stack[-1] == 0) GOTO 0x1eb; Pop(1)

0x1e2: Push((int) 208)
0x1e3: Push("player_name") // @poff=851
0x1e4: @ SendMessage(Stack[-2], Stack[-1])
0x1e5: Pop(2)
0x1e6: Push((int) 209)
0x1e7: Push("player_desc") // @poff=875
0x1e8: @ SendMessage(Stack[-2], Stack[-1])
0x1e9: Pop(2)
0x1ea: GOTO 0x1f6

0x1eb: Push((int) 2)
0x1ec: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1ed: IF (Stack[-1] == 0) GOTO 0x1f6; Pop(1)

0x1ee: Push((int) -1)
0x1ef: Push("player_name") // @poff=851
0x1f0: @ SendMessage(Stack[-2], Stack[-1])
0x1f1: Pop(2)
0x1f2: Push((int) -1)
0x1f3: Push("player_desc") // @poff=875
0x1f4: @ SendMessage(Stack[-2], Stack[-1])
0x1f5: Pop(2)
0x1f6: Return(); Pop(0)

0x1f7: GOTO 0x220

0x1f8: Push("load") // @poff=923
0x1f9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1fa: IF (Stack[-1] == 0) GOTO 0x209; Pop(1)

0x1fb: Push((int) 0)
0x1fc: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1fd: IF (Stack[-1] == 0) GOTO 0x204; Pop(1)

0x1fe: Stack[2 + Tasks[-1].StackPointer] = (int)4
0x1ff: @@ GetFileName(Stack[-10]T); Obj=1 // @poff=553
0x200: Pop(0)
0x201: @ StopEventProcessing()
0x202: Pop(0)
0x203: GOTO 0x207

0x204: PushEmpty()
0x205: Call2 0x221

0x206: Pop(0)
0x207: Return(); Pop(0)

0x208: GOTO 0x220

0x209: Push("save") // @poff=933
0x20a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x20b: IF (Stack[-1] == 0) GOTO 0x219; Pop(1)

0x20c: Push((int) 0)
0x20d: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x20e: IF (Stack[-1] == 0) GOTO 0x214; Pop(1)

0x20f: Stack[2 + Tasks[-1].StackPointer] = (int)5
0x210: Stack[9 + Tasks[-1].StackPointer] = Stack[-1]
0x211: @ StopEventProcessing()
0x212: Pop(0)
0x213: GOTO 0x217

0x214: PushEmpty()
0x215: Call2 0x221

0x216: Pop(0)
0x217: Return(); Pop(0)

0x218: GOTO 0x220

0x219: Push("options") // @poff=765
0x21a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x21b: IF (Stack[-1] == 0) GOTO 0x220; Pop(1)

0x21c: PushEmpty()
0x21d: Call2 0x221

0x21e: Pop(0)
0x21f: Return(); Pop(0)

0x220: Return(); Pop(0)

0x221: PushEmpty()
0x222: Call2 0x22d

0x223: Pop(0)
0x224: PushEmpty(object)
0x225: Call2 0x5c

0x226: Stack[3 + Tasks[-1].StackPointer] = Stack[-1]
0x227: Pop(1)
0x228: PushEmpty(object)
0x229: Call2 0x6d

0x22a: Stack[4 + Tasks[-1].StackPointer] = Stack[-1]
0x22b: Pop(1)
0x22c: Return(); Pop(0)

0x22d: Push( Stack[3 + Tasks[-1].StackPointer] )
0x22e: IF (Stack[-1] == 0) GOTO 0x231; Pop(1)

0x22f: @@@ DestroyWindow(); Obj=3 // @poff=79
0x230: Pop(0)
0x231: Push( Stack[4 + Tasks[-1].StackPointer] )
0x232: IF (Stack[-1] == 0) GOTO 0x235; Pop(1)

0x233: @@@ DestroyWindow(); Obj=4 // @poff=79
0x234: Pop(0)
0x235: Push( Stack[5 + Tasks[-1].StackPointer] )
0x236: IF (Stack[-1] == 0) GOTO 0x239; Pop(1)

0x237: @@@ DestroyWindow(); Obj=5 // @poff=79
0x238: Pop(0)
0x239: Push( Stack[6 + Tasks[-1].StackPointer] )
0x23a: IF (Stack[-1] == 0) GOTO 0x23d; Pop(1)

0x23b: @@@ DestroyWindow(); Obj=6 // @poff=79
0x23c: Pop(0)
0x23d: Push( Stack[7 + Tasks[-1].StackPointer] )
0x23e: IF (Stack[-1] == 0) GOTO 0x241; Pop(1)

0x23f: @@@ DestroyWindow(); Obj=7 // @poff=79
0x240: Pop(0)
0x241: Push( Stack[8 + Tasks[-1].StackPointer] )
0x242: IF (Stack[-1] == 0) GOTO 0x245; Pop(1)

0x243: @@@ DestroyWindow(); Obj=8 // @poff=79
0x244: Pop(0)
0x245: @ CaptureKeyboard()
0x246: Pop(0)
0x247: Return(); Pop(0)

0x248: PushEmpty(int, int)
0x249: Push("BurahCompleted") // @poff=943
0x24a: Push((int) 0)
0x24b: @ GetRegistryData(Stack[-3], Stack[-2], Stack[-1])
0x24c: Pop(2)
0x24d: Push((int) 0)
0x24e: Stack[-4] = Stack[-2] != Stack[-1]; Pop(1);
0x24f: Return(); Pop(2)

0x250: PushEmpty(int, int)
0x251: Push("DankoCompleted") // @poff=973
0x252: Push((int) 0)
0x253: @ GetRegistryData(Stack[-3], Stack[-2], Stack[-1])
0x254: Pop(2)
0x255: Push((int) 0)
0x256: Stack[-4] = Stack[-2] != Stack[-1]; Pop(1);
0x257: Return(); Pop(2)

