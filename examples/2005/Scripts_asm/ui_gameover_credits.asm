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
	W:menumusic
	W:game_buttons.xml
	W:game_logo.xml
	W:default
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
// @pool_raw:506c61790049734c6f737400526573746f7265004973506c6179696e670053747265746368426c69740053746f700069006e00740072006f002e0078006d006c00000069006e00740072006f00000044657374726f7957696e646f77006d0065006e0075006d0075007300690063000000670061006d0065005f0062007500740074006f006e0073002e0078006d006c000000670061006d0065005f006c006f0067006f002e0078006d006c000000640065006600610075006c0074000000670061006d0065005f00630068006f006f00730065005f0070006500720073002e0078006d006c00000069006e00740072006f005f00640061006e006b006f002e0077006d007600000077006f0072006c0064005f00640061006e006b006f002e0078006d006c00000070006c0061007900650072005f00640061006e006b006f002e0078006d006c00000069006e00740072006f005f00620075007200610068002e0077006d007600000077006f0072006c0064005f00620075007200610068002e0078006d006c00000070006c0061007900650072005f00620075007200610068002e0078006d006c00000069006e00740072006f005f006b006c006100720061002e0077006d007600000077006f0072006c0064005f006b006c006100720061002e0078006d006c00000070006c0061007900650072005f006b006c006100720061002e0078006d006c0000004c006f006100640069006e00670020003a002000000047657446696c654e616d650077006f0072006c0064005f0069006e00740072006f002e0078006d006c00000070006c0061007900650072005f0069006e00740072006f002e0078006d006c0000006e0065007700670061006d00650000007100750069007400670061006d006500000051007500690074002000670061006d00650000006c006f0061006400670061006d00650000006c006f00610064002e0078006d006c0000007300610076006500670061006d006500000073006100760065002e0078006d006c000000670061006d0065006f007000740069006f006e00730000006f007000740069006f006e0073002e0078006d006c00000063006f006e00740069006e0075006500000063007200650064006900740073000000640061006e006b006f00000070006c0061007900650072005f006e0061006d006500000070006c0061007900650072005f00640065007300630000006200750072006100680000006b006c0061007200610000006c006f00610064000000730061007600650000004200750072006100680043006f006d0070006c0065007400650064000000440061006e006b006f0043006f006d0070006c0065007400650064000000
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
	PlaySound (1 args)
	SetCursor (1 args)
	SetBackground (1 args)
	PauseSound (1 args)
	RemoveWorld (0 args)
	UISync (0 args)
	DestroyWindow (0 args)
	NewGame (2 args)
	Trace (1 args)
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
		EVENT_100 Op = 0x128 Vars = (int)
		EVENT_200 Op = 0x130 Vars = (int, string, object)


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

0x55: Push("menumusic") // @poff=93
0x56: @ PlaySound(Stack[-1])
0x57: Pop(1)
0x58: PushEmpty(int)
0x59: Stack[-1] = (int) 8
0x5a: Push(-1, 1); TaskCall(1)
0x5b: Call2 0x41

0x5c: Pop(-1, 1); TaskReturn
0x5d: Pop(1)
0x5e: PushEmpty(bool)
0x5f: Stack[-1] = (bool) 0
0x60: Call2 0x73

0x61: Pop(1)
0x62: Return(); Pop(0)

0x63: PushEmpty(object, object)
0x64: Push("game_buttons.xml") // @poff=113
0x65: Push((bool) 0)
0x66: @ CreateWindow(Stack[-2], Stack[-1], Stack[-3])
0x67: Pop(2)
0x68: Stack[-1] = Stack[-3]
0x69: Return(); Pop(2)

0x6a: Stack[-1] = 0
0x6b: PushEmpty(object, object)
0x6c: Push("game_logo.xml") // @poff=147
0x6d: Push((bool) 0)
0x6e: @ CreateWindow(Stack[-2], Stack[-1], Stack[-3])
0x6f: Pop(2)
0x70: Stack[-1] = Stack[-3]
0x71: Return(); Pop(2)

0x72: Stack[-1] = 0
0x73: PushEmpty(bool, bool, bool, string, bool, bool, bool, string)
0x74: @ CaptureKeyboard()
0x75: Pop(0)
0x76: Stack[2 + Tasks[-1].StackPointer] = (int)0
0x77: @ GetWindowSize(Stack[-0]T, Stack[-1]T)
0x78: Pop(0)
0x79: Push("default") // @poff=175
0x7a: @ SetCursor(Stack[-1])
0x7b: Pop(1)
0x7c: Push("default") // @poff=175
0x7d: @ SetBackground(Stack[-1])
0x7e: Pop(1)
0x7f: Push("menumusic") // @poff=93
0x80: @ PlaySound(Stack[-1])
0x81: Pop(1)
0x82: Push((bool) 1)
0x83: @ ShowCursor(Stack[-1])
0x84: Pop(1)
0x85: Push(Stack[-9])
0x86: IF (Stack[-1] == 0) GOTO 0x8c; Pop(1)

0x87: Push("game_choose_pers.xml") // @poff=191
0x88: Push((bool) 0)
0x89: @ CreateWindow(Stack[-2], Stack[-1], Stack[-5]T)
0x8a: Pop(2)
0x8b: GOTO 0x94

0x8c: PushEmpty(object)
0x8d: Call2 0x63

0x8e: Stack[3 + Tasks[-1].StackPointer] = Stack[-1]
0x8f: Pop(1)
0x90: PushEmpty(object)
0x91: Call2 0x6b

0x92: Stack[4 + Tasks[-1].StackPointer] = Stack[-1]
0x93: Pop(1)
0x94: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x95: IF (Stack[-1] == 0) GOTO 0x99; Pop(1)

0x96: @ ProcessEvents()
0x97: Pop(0)
0x98: GOTO 0x94

0x99: PushEmpty()
0x9a: Call2 0x233

0x9b: Pop(0)
0x9c: Push((int) 1)
0x9d: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] == Stack[-1])
0x9e: IF (Stack[-1] == 0) GOTO 0xba; Pop(1)

0x9f: Push("menumusic") // @poff=93
0xa0: @ PauseSound(Stack[-1])
0xa1: Pop(1)
0xa2: PushEmpty(int)
0xa3: Stack[-1] = (int) 1
0xa4: Push(-1, 1); TaskCall(1)
0xa5: Call2 0x41

0xa6: Pop(-1, 1); TaskReturn
0xa7: Pop(1)
0xa8: PushEmpty(string, bool)
0xa9: Stack[-2] = "intro_danko.wmv" // @poff=233
0xaa: Stack[-1] = (bool) 1
0xab: Push(-2, 4); TaskCall(0)
0xac: Call2 0x0

0xad: Pop(-2, 4); TaskReturn
0xae: Pop(2)
0xaf: @ RemoveWorld()
0xb0: Pop(0)
0xb1: @ UISync()
0xb2: Pop(0)
0xb3: @ DestroyWindow()
0xb4: Pop(0)
0xb5: Push("world_danko.xml") // @poff=265
0xb6: Push("player_danko.xml") // @poff=297
0xb7: @ NewGame(Stack[-2], Stack[-1])
0xb8: Pop(2)
0xb9: GOTO 0x127

0xba: Push((int) 2)
0xbb: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] == Stack[-1])
0xbc: IF (Stack[-1] == 0) GOTO 0xd8; Pop(1)

0xbd: Push("menumusic") // @poff=93
0xbe: @ PauseSound(Stack[-1])
0xbf: Pop(1)
0xc0: PushEmpty(int)
0xc1: Stack[-1] = (int) 2
0xc2: Push(-1, 1); TaskCall(1)
0xc3: Call2 0x41

0xc4: Pop(-1, 1); TaskReturn
0xc5: Pop(1)
0xc6: PushEmpty(string, bool)
0xc7: Stack[-2] = "intro_burah.wmv" // @poff=331
0xc8: Stack[-1] = (bool) 1
0xc9: Push(-2, 4); TaskCall(0)
0xca: Call2 0x0

0xcb: Pop(-2, 4); TaskReturn
0xcc: Pop(2)
0xcd: @ RemoveWorld()
0xce: Pop(0)
0xcf: @ UISync()
0xd0: Pop(0)
0xd1: @ DestroyWindow()
0xd2: Pop(0)
0xd3: Push("world_burah.xml") // @poff=363
0xd4: Push("player_burah.xml") // @poff=395
0xd5: @ NewGame(Stack[-2], Stack[-1])
0xd6: Pop(2)
0xd7: GOTO 0x127

0xd8: Push((int) 3)
0xd9: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] == Stack[-1])
0xda: IF (Stack[-1] == 0) GOTO 0xf6; Pop(1)

0xdb: Push("menumusic") // @poff=93
0xdc: @ PauseSound(Stack[-1])
0xdd: Pop(1)
0xde: PushEmpty(int)
0xdf: Stack[-1] = (int) 3
0xe0: Push(-1, 1); TaskCall(1)
0xe1: Call2 0x41

0xe2: Pop(-1, 1); TaskReturn
0xe3: Pop(1)
0xe4: PushEmpty(string, bool)
0xe5: Stack[-2] = "intro_klara.wmv" // @poff=429
0xe6: Stack[-1] = (bool) 1
0xe7: Push(-2, 4); TaskCall(0)
0xe8: Call2 0x0

0xe9: Pop(-2, 4); TaskReturn
0xea: Pop(2)
0xeb: @ RemoveWorld()
0xec: Pop(0)
0xed: @ UISync()
0xee: Pop(0)
0xef: @ DestroyWindow()
0xf0: Pop(0)
0xf1: Push("world_klara.xml") // @poff=461
0xf2: Push("player_klara.xml") // @poff=493
0xf3: @ NewGame(Stack[-2], Stack[-1])
0xf4: Pop(2)
0xf5: GOTO 0x127

0xf6: Push((int) 4)
0xf7: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] == Stack[-1])
0xf8: IF (Stack[-1] == 0) GOTO 0x109; Pop(1)

0xf9: Push("menumusic") // @poff=93
0xfa: @ PauseSound(Stack[-1])
0xfb: Pop(1)
0xfc: Push("Loading : ") // @poff=527
0xfd: Pop(1); Push(Stack[-1] + Stack[10 + Tasks[-1].StackPointer]);
0xfe: @ Trace(Stack[-1])
0xff: Pop(1)
0x100: @ RemoveWorld()
0x101: Pop(0)
0x102: @ UISync()
0x103: Pop(0)
0x104: @ DestroyWindow()
0x105: Pop(0)
0x106: @ LoadGame(Stack[-4], Stack[-10]T)
0x107: Pop(0)
0x108: GOTO 0x127

0x109: Push((int) 5)
0x10a: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] == Stack[-1])
0x10b: IF (Stack[-1] == 0) GOTO 0x11a; Pop(1)

0x10c: Pop(0); Push((bool) Stack[9 + Tasks[-1].StackPointer] == 0)
0x10d: IF (Stack[-1] == 0) GOTO 0x113; Pop(1)

0x10e: @ DestroyWindow()
0x10f: Pop(0)
0x110: @ SaveGame(Stack[-3])
0x111: Pop(0)
0x112: GOTO 0x119

0x113: @ DestroyWindow()
0x114: Pop(0)
0x115: @@@ GetFileName(Stack[-1]); Obj=9 // @poff=549
0x116: Pop(0)
0x117: @ SaveGame(Stack[-2], Stack[-1])
0x118: Pop(0)
0x119: GOTO 0x127

0x11a: Push((int) 7)
0x11b: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] == Stack[-1])
0x11c: IF (Stack[-1] == 0) GOTO 0x127; Pop(1)

0x11d: @ RemoveWorld()
0x11e: Pop(0)
0x11f: @ UISync()
0x120: Pop(0)
0x121: @ DestroyWindow()
0x122: Pop(0)
0x123: Push("world_intro.xml") // @poff=561
0x124: Push("player_intro.xml") // @poff=593
0x125: @ NewGame(Stack[-2], Stack[-1])
0x126: Pop(2)
0x127: Return(); Pop(8)

0x128: PushEmpty()
0x129: Push((int) 27)
0x12a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x12b: IF (Stack[-1] == 0) GOTO 0x12f; Pop(1)

0x12c: PushEmpty()
0x12d: Call2 0x227

0x12e: Pop(0)
0x12f: Return(); Pop(0)

0x130: PushEmpty()
0x131: Push("newgame") // @poff=627
0x132: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x133: IF (Stack[-1] == 0) GOTO 0x138; Pop(1)

0x134: Stack[2 + Tasks[-1].StackPointer] = (int)7
0x135: @ StopEventProcessing()
0x136: Pop(0)
0x137: GOTO 0x226

0x138: Push("quitgame") // @poff=643
0x139: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x13a: IF (Stack[-1] == 0) GOTO 0x142; Pop(1)

0x13b: Push("Quit game") // @poff=661
0x13c: @ UITrace(Stack[-1])
0x13d: Pop(1)
0x13e: @ Quit()
0x13f: Pop(0)
0x140: Return(); Pop(0)

0x141: GOTO 0x226

0x142: Push("loadgame") // @poff=681
0x143: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x144: IF (Stack[-1] == 0) GOTO 0x14e; Pop(1)

0x145: PushEmpty()
0x146: Call2 0x233

0x147: Pop(0)
0x148: Push("load.xml") // @poff=699
0x149: Push((bool) 0)
0x14a: @ CreateWindow(Stack[-2], Stack[-1], Stack[-6]T)
0x14b: Pop(2)
0x14c: Return(); Pop(0)

0x14d: GOTO 0x226

0x14e: Push("savegame") // @poff=717
0x14f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x150: IF (Stack[-1] == 0) GOTO 0x15a; Pop(1)

0x151: PushEmpty()
0x152: Call2 0x233

0x153: Pop(0)
0x154: Push("save.xml") // @poff=735
0x155: Push((bool) 0)
0x156: @ CreateWindow(Stack[-2], Stack[-1], Stack[-7]T)
0x157: Pop(2)
0x158: Return(); Pop(0)

0x159: GOTO 0x226

0x15a: Push("gameoptions") // @poff=753
0x15b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x15c: IF (Stack[-1] == 0) GOTO 0x166; Pop(1)

0x15d: PushEmpty()
0x15e: Call2 0x233

0x15f: Pop(0)
0x160: Push("options.xml") // @poff=777
0x161: Push((bool) 0)
0x162: @ CreateWindow(Stack[-2], Stack[-1], Stack[-8]T)
0x163: Pop(2)
0x164: Return(); Pop(0)

0x165: GOTO 0x226

0x166: Push("continue") // @poff=801
0x167: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x168: IF (Stack[-1] == 0) GOTO 0x16e; Pop(1)

0x169: Stack[2 + Tasks[-1].StackPointer] = (int)6
0x16a: @ StopEventProcessing()
0x16b: Pop(0)
0x16c: Return(); Pop(0)

0x16d: GOTO 0x226

0x16e: Push("credits") // @poff=819
0x16f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x170: IF (Stack[-1] == 0) GOTO 0x186; Pop(1)

0x171: PushEmpty()
0x172: Call2 0x233

0x173: Pop(0)
0x174: PushEmpty(int)
0x175: Stack[-1] = (int) 8
0x176: Push(-1, 1); TaskCall(1)
0x177: Call2 0x41

0x178: Pop(-1, 1); TaskReturn
0x179: Pop(1)
0x17a: PushEmpty(object)
0x17b: Call2 0x63

0x17c: Stack[3 + Tasks[-1].StackPointer] = Stack[-1]
0x17d: Pop(1)
0x17e: PushEmpty(object)
0x17f: Call2 0x6b

0x180: Stack[4 + Tasks[-1].StackPointer] = Stack[-1]
0x181: Pop(1)
0x182: Push((bool) 1)
0x183: @ ShowCursor(Stack[-1])
0x184: Pop(1)
0x185: GOTO 0x226

0x186: Push("danko") // @poff=835
0x187: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x188: IF (Stack[-1] == 0) GOTO 0x1a9; Pop(1)

0x189: Push((int) 0)
0x18a: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x18b: IF (Stack[-1] == 0) GOTO 0x190; Pop(1)

0x18c: Stack[2 + Tasks[-1].StackPointer] = (int)1
0x18d: @ StopEventProcessing()
0x18e: Pop(0)
0x18f: GOTO 0x1a7

0x190: Push((int) 1)
0x191: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x192: IF (Stack[-1] == 0) GOTO 0x19c; Pop(1)

0x193: Push((int) 202)
0x194: Push("player_name") // @poff=847
0x195: @ SendMessage(Stack[-2], Stack[-1])
0x196: Pop(2)
0x197: Push((int) 203)
0x198: Push("player_desc") // @poff=871
0x199: @ SendMessage(Stack[-2], Stack[-1])
0x19a: Pop(2)
0x19b: GOTO 0x1a7

0x19c: Push((int) 2)
0x19d: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x19e: IF (Stack[-1] == 0) GOTO 0x1a7; Pop(1)

0x19f: Push((int) -1)
0x1a0: Push("player_name") // @poff=847
0x1a1: @ SendMessage(Stack[-2], Stack[-1])
0x1a2: Pop(2)
0x1a3: Push((int) -1)
0x1a4: Push("player_desc") // @poff=871
0x1a5: @ SendMessage(Stack[-2], Stack[-1])
0x1a6: Pop(2)
0x1a7: Return(); Pop(0)

0x1a8: GOTO 0x226

0x1a9: Push("burah") // @poff=895
0x1aa: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1ab: IF (Stack[-1] == 0) GOTO 0x1cc; Pop(1)

0x1ac: Push((int) 0)
0x1ad: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1ae: IF (Stack[-1] == 0) GOTO 0x1b3; Pop(1)

0x1af: Stack[2 + Tasks[-1].StackPointer] = (int)2
0x1b0: @ StopEventProcessing()
0x1b1: Pop(0)
0x1b2: GOTO 0x1ca

0x1b3: Push((int) 1)
0x1b4: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1b5: IF (Stack[-1] == 0) GOTO 0x1bf; Pop(1)

0x1b6: Push((int) 205)
0x1b7: Push("player_name") // @poff=847
0x1b8: @ SendMessage(Stack[-2], Stack[-1])
0x1b9: Pop(2)
0x1ba: Push((int) 206)
0x1bb: Push("player_desc") // @poff=871
0x1bc: @ SendMessage(Stack[-2], Stack[-1])
0x1bd: Pop(2)
0x1be: GOTO 0x1ca

0x1bf: Push((int) 2)
0x1c0: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1c1: IF (Stack[-1] == 0) GOTO 0x1ca; Pop(1)

0x1c2: Push((int) -1)
0x1c3: Push("player_name") // @poff=847
0x1c4: @ SendMessage(Stack[-2], Stack[-1])
0x1c5: Pop(2)
0x1c6: Push((int) -1)
0x1c7: Push("player_desc") // @poff=871
0x1c8: @ SendMessage(Stack[-2], Stack[-1])
0x1c9: Pop(2)
0x1ca: Return(); Pop(0)

0x1cb: GOTO 0x226

0x1cc: Push("klara") // @poff=907
0x1cd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1ce: IF (Stack[-1] == 0) GOTO 0x1fe; Pop(1)

0x1cf: PushEmpty(bool)
0x1d0: Stack[-1] = (bool) 0
0x1d1: PushEmpty(bool)
0x1d2: Call2 0x256

0x1d3: Pop(0)
0x1d4: Pop(1); Push((bool) Stack[-1] == 0)
0x1d5: IF (Stack[-1] == 0) GOTO 0x1dc; Pop(1)

0x1d6: PushEmpty(bool)
0x1d7: Call2 0x24e

0x1d8: Pop(0)
0x1d9: Pop(1); Push((bool) Stack[-1] == 0)
0x1da: IF (Stack[-1] == 0) GOTO 0x1dc; Pop(1)

0x1db: Stack[-1] = (bool) 1
0x1dc: IF (Stack[-1] == 0) GOTO 0x1de; Pop(1)

0x1dd: Return(); Pop(0)

0x1de: Push((int) 0)
0x1df: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1e0: IF (Stack[-1] == 0) GOTO 0x1e5; Pop(1)

0x1e1: Stack[2 + Tasks[-1].StackPointer] = (int)3
0x1e2: @ StopEventProcessing()
0x1e3: Pop(0)
0x1e4: GOTO 0x1fc

0x1e5: Push((int) 1)
0x1e6: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1e7: IF (Stack[-1] == 0) GOTO 0x1f1; Pop(1)

0x1e8: Push((int) 208)
0x1e9: Push("player_name") // @poff=847
0x1ea: @ SendMessage(Stack[-2], Stack[-1])
0x1eb: Pop(2)
0x1ec: Push((int) 209)
0x1ed: Push("player_desc") // @poff=871
0x1ee: @ SendMessage(Stack[-2], Stack[-1])
0x1ef: Pop(2)
0x1f0: GOTO 0x1fc

0x1f1: Push((int) 2)
0x1f2: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1f3: IF (Stack[-1] == 0) GOTO 0x1fc; Pop(1)

0x1f4: Push((int) -1)
0x1f5: Push("player_name") // @poff=847
0x1f6: @ SendMessage(Stack[-2], Stack[-1])
0x1f7: Pop(2)
0x1f8: Push((int) -1)
0x1f9: Push("player_desc") // @poff=871
0x1fa: @ SendMessage(Stack[-2], Stack[-1])
0x1fb: Pop(2)
0x1fc: Return(); Pop(0)

0x1fd: GOTO 0x226

0x1fe: Push("load") // @poff=919
0x1ff: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x200: IF (Stack[-1] == 0) GOTO 0x20f; Pop(1)

0x201: Push((int) 0)
0x202: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x203: IF (Stack[-1] == 0) GOTO 0x20a; Pop(1)

0x204: Stack[2 + Tasks[-1].StackPointer] = (int)4
0x205: @@ GetFileName(Stack[-10]T); Obj=1 // @poff=549
0x206: Pop(0)
0x207: @ StopEventProcessing()
0x208: Pop(0)
0x209: GOTO 0x20d

0x20a: PushEmpty()
0x20b: Call2 0x227

0x20c: Pop(0)
0x20d: Return(); Pop(0)

0x20e: GOTO 0x226

0x20f: Push("save") // @poff=929
0x210: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x211: IF (Stack[-1] == 0) GOTO 0x21f; Pop(1)

0x212: Push((int) 0)
0x213: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x214: IF (Stack[-1] == 0) GOTO 0x21a; Pop(1)

0x215: Stack[2 + Tasks[-1].StackPointer] = (int)5
0x216: Stack[9 + Tasks[-1].StackPointer] = Stack[-1]
0x217: @ StopEventProcessing()
0x218: Pop(0)
0x219: GOTO 0x21d

0x21a: PushEmpty()
0x21b: Call2 0x227

0x21c: Pop(0)
0x21d: Return(); Pop(0)

0x21e: GOTO 0x226

0x21f: Push("options") // @poff=761
0x220: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x221: IF (Stack[-1] == 0) GOTO 0x226; Pop(1)

0x222: PushEmpty()
0x223: Call2 0x227

0x224: Pop(0)
0x225: Return(); Pop(0)

0x226: Return(); Pop(0)

0x227: PushEmpty()
0x228: Call2 0x233

0x229: Pop(0)
0x22a: PushEmpty(object)
0x22b: Call2 0x63

0x22c: Stack[3 + Tasks[-1].StackPointer] = Stack[-1]
0x22d: Pop(1)
0x22e: PushEmpty(object)
0x22f: Call2 0x6b

0x230: Stack[4 + Tasks[-1].StackPointer] = Stack[-1]
0x231: Pop(1)
0x232: Return(); Pop(0)

0x233: Push( Stack[3 + Tasks[-1].StackPointer] )
0x234: IF (Stack[-1] == 0) GOTO 0x237; Pop(1)

0x235: @@@ DestroyWindow(); Obj=3 // @poff=79
0x236: Pop(0)
0x237: Push( Stack[4 + Tasks[-1].StackPointer] )
0x238: IF (Stack[-1] == 0) GOTO 0x23b; Pop(1)

0x239: @@@ DestroyWindow(); Obj=4 // @poff=79
0x23a: Pop(0)
0x23b: Push( Stack[5 + Tasks[-1].StackPointer] )
0x23c: IF (Stack[-1] == 0) GOTO 0x23f; Pop(1)

0x23d: @@@ DestroyWindow(); Obj=5 // @poff=79
0x23e: Pop(0)
0x23f: Push( Stack[6 + Tasks[-1].StackPointer] )
0x240: IF (Stack[-1] == 0) GOTO 0x243; Pop(1)

0x241: @@@ DestroyWindow(); Obj=6 // @poff=79
0x242: Pop(0)
0x243: Push( Stack[7 + Tasks[-1].StackPointer] )
0x244: IF (Stack[-1] == 0) GOTO 0x247; Pop(1)

0x245: @@@ DestroyWindow(); Obj=7 // @poff=79
0x246: Pop(0)
0x247: Push( Stack[8 + Tasks[-1].StackPointer] )
0x248: IF (Stack[-1] == 0) GOTO 0x24b; Pop(1)

0x249: @@@ DestroyWindow(); Obj=8 // @poff=79
0x24a: Pop(0)
0x24b: @ CaptureKeyboard()
0x24c: Pop(0)
0x24d: Return(); Pop(0)

0x24e: PushEmpty(int, int)
0x24f: Push("BurahCompleted") // @poff=939
0x250: Push((int) 0)
0x251: @ GetRegistryData(Stack[-3], Stack[-2], Stack[-1])
0x252: Pop(2)
0x253: Push((int) 0)
0x254: Stack[-4] = Stack[-2] != Stack[-1]; Pop(1);
0x255: Return(); Pop(2)

0x256: PushEmpty(int, int)
0x257: Push("DankoCompleted") // @poff=969
0x258: Push((int) 0)
0x259: @ GetRegistryData(Stack[-3], Stack[-2], Stack[-1])
0x25a: Pop(2)
0x25b: Push((int) 0)
0x25c: Stack[-4] = Stack[-2] != Stack[-1]; Pop(1);
0x25d: Return(); Pop(2)

