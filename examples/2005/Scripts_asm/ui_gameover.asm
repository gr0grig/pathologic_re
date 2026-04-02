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
	W:death.wmv
	W:game_buttons.xml
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
// @pool_raw:506c61790049734c6f737400526573746f7265004973506c6179696e670053747265746368426c69740053746f700069006e00740072006f002e0078006d006c00000069006e00740072006f00000044657374726f7957696e646f7700640065006100740068002e0077006d0076000000670061006d0065005f0062007500740074006f006e0073002e0078006d006c000000670061006d0065005f006c006f0067006f002e0078006d006c000000640065006600610075006c00740000006d0065006e0075006d0075007300690063000000670061006d0065005f00630068006f006f00730065005f0070006500720073002e0078006d006c00000069006e00740072006f005f00640061006e006b006f002e0077006d007600000077006f0072006c0064005f00640061006e006b006f002e0078006d006c00000070006c0061007900650072005f00640061006e006b006f002e0078006d006c00000069006e00740072006f005f00620075007200610068002e0077006d007600000077006f0072006c0064005f00620075007200610068002e0078006d006c00000070006c0061007900650072005f00620075007200610068002e0078006d006c00000069006e00740072006f005f006b006c006100720061002e0077006d007600000077006f0072006c0064005f006b006c006100720061002e0078006d006c00000070006c0061007900650072005f006b006c006100720061002e0078006d006c0000004c006f006100640069006e00670020003a002000000047657446696c654e616d650077006f0072006c0064005f0069006e00740072006f002e0078006d006c00000070006c0061007900650072005f0069006e00740072006f002e0078006d006c0000006e0065007700670061006d00650000007100750069007400670061006d006500000051007500690074002000670061006d00650000006c006f0061006400670061006d00650000006c006f00610064002e0078006d006c0000007300610076006500670061006d006500000073006100760065002e0078006d006c000000670061006d0065006f007000740069006f006e00730000006f007000740069006f006e0073002e0078006d006c00000063006f006e00740069006e0075006500000063007200650064006900740073000000640061006e006b006f00000070006c0061007900650072005f006e0061006d006500000070006c0061007900650072005f00640065007300630000006200750072006100680000006b006c0061007200610000006c006f00610064000000730061007600650000004200750072006100680043006f006d0070006c0065007400650064000000440061006e006b006f0043006f006d0070006c0065007400650064000000
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
	UISync (0 args)
	SetCursor (1 args)
	SetBackground (1 args)
	PlaySound (1 args)
	PauseSound (1 args)
	RemoveWorld (0 args)
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
		EVENT_100 Op = 0x12c Vars = (int)
		EVENT_200 Op = 0x134 Vars = (int, string, object)


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

0x55: EventDisable(1)
0x56: EventDisable(0)
0x57: @ UISync()
0x58: Pop(0)
0x59: EventEnable(1)
0x5a: EventEnable(0)
0x5b: PushEmpty(string, bool)
0x5c: Stack[-2] = "death.wmv" // @poff=93
0x5d: Stack[-1] = (bool) 1
0x5e: Push(-2, 4); TaskCall(0)
0x5f: Call2 0x0

0x60: Pop(-2, 4); TaskReturn
0x61: Pop(2)
0x62: PushEmpty(bool)
0x63: Stack[-1] = (bool) 0
0x64: Call2 0x77

0x65: Pop(1)
0x66: Return(); Pop(0)

0x67: PushEmpty(object, object)
0x68: Push("game_buttons.xml") // @poff=113
0x69: Push((bool) 0)
0x6a: @ CreateWindow(Stack[-2], Stack[-1], Stack[-3])
0x6b: Pop(2)
0x6c: Stack[-1] = Stack[-3]
0x6d: Return(); Pop(2)

0x6e: Stack[-1] = 0
0x6f: PushEmpty(object, object)
0x70: Push("game_logo.xml") // @poff=147
0x71: Push((bool) 0)
0x72: @ CreateWindow(Stack[-2], Stack[-1], Stack[-3])
0x73: Pop(2)
0x74: Stack[-1] = Stack[-3]
0x75: Return(); Pop(2)

0x76: Stack[-1] = 0
0x77: PushEmpty(bool, bool, bool, string, bool, bool, bool, string)
0x78: @ CaptureKeyboard()
0x79: Pop(0)
0x7a: Stack[2 + Tasks[-1].StackPointer] = (int)0
0x7b: @ GetWindowSize(Stack[-0]T, Stack[-1]T)
0x7c: Pop(0)
0x7d: Push("default") // @poff=175
0x7e: @ SetCursor(Stack[-1])
0x7f: Pop(1)
0x80: Push("default") // @poff=175
0x81: @ SetBackground(Stack[-1])
0x82: Pop(1)
0x83: Push("menumusic") // @poff=191
0x84: @ PlaySound(Stack[-1])
0x85: Pop(1)
0x86: Push((bool) 1)
0x87: @ ShowCursor(Stack[-1])
0x88: Pop(1)
0x89: Push(Stack[-9])
0x8a: IF (Stack[-1] == 0) GOTO 0x90; Pop(1)

0x8b: Push("game_choose_pers.xml") // @poff=211
0x8c: Push((bool) 0)
0x8d: @ CreateWindow(Stack[-2], Stack[-1], Stack[-5]T)
0x8e: Pop(2)
0x8f: GOTO 0x98

0x90: PushEmpty(object)
0x91: Call2 0x67

0x92: Stack[3 + Tasks[-1].StackPointer] = Stack[-1]
0x93: Pop(1)
0x94: PushEmpty(object)
0x95: Call2 0x6f

0x96: Stack[4 + Tasks[-1].StackPointer] = Stack[-1]
0x97: Pop(1)
0x98: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x99: IF (Stack[-1] == 0) GOTO 0x9d; Pop(1)

0x9a: @ ProcessEvents()
0x9b: Pop(0)
0x9c: GOTO 0x98

0x9d: PushEmpty()
0x9e: Call2 0x237

0x9f: Pop(0)
0xa0: Push((int) 1)
0xa1: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] == Stack[-1])
0xa2: IF (Stack[-1] == 0) GOTO 0xbe; Pop(1)

0xa3: Push("menumusic") // @poff=191
0xa4: @ PauseSound(Stack[-1])
0xa5: Pop(1)
0xa6: PushEmpty(int)
0xa7: Stack[-1] = (int) 1
0xa8: Push(-1, 1); TaskCall(1)
0xa9: Call2 0x41

0xaa: Pop(-1, 1); TaskReturn
0xab: Pop(1)
0xac: PushEmpty(string, bool)
0xad: Stack[-2] = "intro_danko.wmv" // @poff=253
0xae: Stack[-1] = (bool) 1
0xaf: Push(-2, 4); TaskCall(0)
0xb0: Call2 0x0

0xb1: Pop(-2, 4); TaskReturn
0xb2: Pop(2)
0xb3: @ RemoveWorld()
0xb4: Pop(0)
0xb5: @ UISync()
0xb6: Pop(0)
0xb7: @ DestroyWindow()
0xb8: Pop(0)
0xb9: Push("world_danko.xml") // @poff=285
0xba: Push("player_danko.xml") // @poff=317
0xbb: @ NewGame(Stack[-2], Stack[-1])
0xbc: Pop(2)
0xbd: GOTO 0x12b

0xbe: Push((int) 2)
0xbf: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] == Stack[-1])
0xc0: IF (Stack[-1] == 0) GOTO 0xdc; Pop(1)

0xc1: Push("menumusic") // @poff=191
0xc2: @ PauseSound(Stack[-1])
0xc3: Pop(1)
0xc4: PushEmpty(int)
0xc5: Stack[-1] = (int) 2
0xc6: Push(-1, 1); TaskCall(1)
0xc7: Call2 0x41

0xc8: Pop(-1, 1); TaskReturn
0xc9: Pop(1)
0xca: PushEmpty(string, bool)
0xcb: Stack[-2] = "intro_burah.wmv" // @poff=351
0xcc: Stack[-1] = (bool) 1
0xcd: Push(-2, 4); TaskCall(0)
0xce: Call2 0x0

0xcf: Pop(-2, 4); TaskReturn
0xd0: Pop(2)
0xd1: @ RemoveWorld()
0xd2: Pop(0)
0xd3: @ UISync()
0xd4: Pop(0)
0xd5: @ DestroyWindow()
0xd6: Pop(0)
0xd7: Push("world_burah.xml") // @poff=383
0xd8: Push("player_burah.xml") // @poff=415
0xd9: @ NewGame(Stack[-2], Stack[-1])
0xda: Pop(2)
0xdb: GOTO 0x12b

0xdc: Push((int) 3)
0xdd: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] == Stack[-1])
0xde: IF (Stack[-1] == 0) GOTO 0xfa; Pop(1)

0xdf: Push("menumusic") // @poff=191
0xe0: @ PauseSound(Stack[-1])
0xe1: Pop(1)
0xe2: PushEmpty(int)
0xe3: Stack[-1] = (int) 3
0xe4: Push(-1, 1); TaskCall(1)
0xe5: Call2 0x41

0xe6: Pop(-1, 1); TaskReturn
0xe7: Pop(1)
0xe8: PushEmpty(string, bool)
0xe9: Stack[-2] = "intro_klara.wmv" // @poff=449
0xea: Stack[-1] = (bool) 1
0xeb: Push(-2, 4); TaskCall(0)
0xec: Call2 0x0

0xed: Pop(-2, 4); TaskReturn
0xee: Pop(2)
0xef: @ RemoveWorld()
0xf0: Pop(0)
0xf1: @ UISync()
0xf2: Pop(0)
0xf3: @ DestroyWindow()
0xf4: Pop(0)
0xf5: Push("world_klara.xml") // @poff=481
0xf6: Push("player_klara.xml") // @poff=513
0xf7: @ NewGame(Stack[-2], Stack[-1])
0xf8: Pop(2)
0xf9: GOTO 0x12b

0xfa: Push((int) 4)
0xfb: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] == Stack[-1])
0xfc: IF (Stack[-1] == 0) GOTO 0x10d; Pop(1)

0xfd: Push("menumusic") // @poff=191
0xfe: @ PauseSound(Stack[-1])
0xff: Pop(1)
0x100: Push("Loading : ") // @poff=547
0x101: Pop(1); Push(Stack[-1] + Stack[10 + Tasks[-1].StackPointer]);
0x102: @ Trace(Stack[-1])
0x103: Pop(1)
0x104: @ RemoveWorld()
0x105: Pop(0)
0x106: @ UISync()
0x107: Pop(0)
0x108: @ DestroyWindow()
0x109: Pop(0)
0x10a: @ LoadGame(Stack[-4], Stack[-10]T)
0x10b: Pop(0)
0x10c: GOTO 0x12b

0x10d: Push((int) 5)
0x10e: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] == Stack[-1])
0x10f: IF (Stack[-1] == 0) GOTO 0x11e; Pop(1)

0x110: Pop(0); Push((bool) Stack[9 + Tasks[-1].StackPointer] == 0)
0x111: IF (Stack[-1] == 0) GOTO 0x117; Pop(1)

0x112: @ DestroyWindow()
0x113: Pop(0)
0x114: @ SaveGame(Stack[-3])
0x115: Pop(0)
0x116: GOTO 0x11d

0x117: @ DestroyWindow()
0x118: Pop(0)
0x119: @@@ GetFileName(Stack[-1]); Obj=9 // @poff=569
0x11a: Pop(0)
0x11b: @ SaveGame(Stack[-2], Stack[-1])
0x11c: Pop(0)
0x11d: GOTO 0x12b

0x11e: Push((int) 7)
0x11f: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] == Stack[-1])
0x120: IF (Stack[-1] == 0) GOTO 0x12b; Pop(1)

0x121: @ RemoveWorld()
0x122: Pop(0)
0x123: @ UISync()
0x124: Pop(0)
0x125: @ DestroyWindow()
0x126: Pop(0)
0x127: Push("world_intro.xml") // @poff=581
0x128: Push("player_intro.xml") // @poff=613
0x129: @ NewGame(Stack[-2], Stack[-1])
0x12a: Pop(2)
0x12b: Return(); Pop(8)

0x12c: PushEmpty()
0x12d: Push((int) 27)
0x12e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x12f: IF (Stack[-1] == 0) GOTO 0x133; Pop(1)

0x130: PushEmpty()
0x131: Call2 0x22b

0x132: Pop(0)
0x133: Return(); Pop(0)

0x134: PushEmpty()
0x135: Push("newgame") // @poff=647
0x136: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x137: IF (Stack[-1] == 0) GOTO 0x13c; Pop(1)

0x138: Stack[2 + Tasks[-1].StackPointer] = (int)7
0x139: @ StopEventProcessing()
0x13a: Pop(0)
0x13b: GOTO 0x22a

0x13c: Push("quitgame") // @poff=663
0x13d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x13e: IF (Stack[-1] == 0) GOTO 0x146; Pop(1)

0x13f: Push("Quit game") // @poff=681
0x140: @ UITrace(Stack[-1])
0x141: Pop(1)
0x142: @ Quit()
0x143: Pop(0)
0x144: Return(); Pop(0)

0x145: GOTO 0x22a

0x146: Push("loadgame") // @poff=701
0x147: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x148: IF (Stack[-1] == 0) GOTO 0x152; Pop(1)

0x149: PushEmpty()
0x14a: Call2 0x237

0x14b: Pop(0)
0x14c: Push("load.xml") // @poff=719
0x14d: Push((bool) 0)
0x14e: @ CreateWindow(Stack[-2], Stack[-1], Stack[-6]T)
0x14f: Pop(2)
0x150: Return(); Pop(0)

0x151: GOTO 0x22a

0x152: Push("savegame") // @poff=737
0x153: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x154: IF (Stack[-1] == 0) GOTO 0x15e; Pop(1)

0x155: PushEmpty()
0x156: Call2 0x237

0x157: Pop(0)
0x158: Push("save.xml") // @poff=755
0x159: Push((bool) 0)
0x15a: @ CreateWindow(Stack[-2], Stack[-1], Stack[-7]T)
0x15b: Pop(2)
0x15c: Return(); Pop(0)

0x15d: GOTO 0x22a

0x15e: Push("gameoptions") // @poff=773
0x15f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x160: IF (Stack[-1] == 0) GOTO 0x16a; Pop(1)

0x161: PushEmpty()
0x162: Call2 0x237

0x163: Pop(0)
0x164: Push("options.xml") // @poff=797
0x165: Push((bool) 0)
0x166: @ CreateWindow(Stack[-2], Stack[-1], Stack[-8]T)
0x167: Pop(2)
0x168: Return(); Pop(0)

0x169: GOTO 0x22a

0x16a: Push("continue") // @poff=821
0x16b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x16c: IF (Stack[-1] == 0) GOTO 0x172; Pop(1)

0x16d: Stack[2 + Tasks[-1].StackPointer] = (int)6
0x16e: @ StopEventProcessing()
0x16f: Pop(0)
0x170: Return(); Pop(0)

0x171: GOTO 0x22a

0x172: Push("credits") // @poff=839
0x173: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x174: IF (Stack[-1] == 0) GOTO 0x18a; Pop(1)

0x175: PushEmpty()
0x176: Call2 0x237

0x177: Pop(0)
0x178: PushEmpty(int)
0x179: Stack[-1] = (int) 8
0x17a: Push(-1, 1); TaskCall(1)
0x17b: Call2 0x41

0x17c: Pop(-1, 1); TaskReturn
0x17d: Pop(1)
0x17e: PushEmpty(object)
0x17f: Call2 0x67

0x180: Stack[3 + Tasks[-1].StackPointer] = Stack[-1]
0x181: Pop(1)
0x182: PushEmpty(object)
0x183: Call2 0x6f

0x184: Stack[4 + Tasks[-1].StackPointer] = Stack[-1]
0x185: Pop(1)
0x186: Push((bool) 1)
0x187: @ ShowCursor(Stack[-1])
0x188: Pop(1)
0x189: GOTO 0x22a

0x18a: Push("danko") // @poff=855
0x18b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x18c: IF (Stack[-1] == 0) GOTO 0x1ad; Pop(1)

0x18d: Push((int) 0)
0x18e: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x18f: IF (Stack[-1] == 0) GOTO 0x194; Pop(1)

0x190: Stack[2 + Tasks[-1].StackPointer] = (int)1
0x191: @ StopEventProcessing()
0x192: Pop(0)
0x193: GOTO 0x1ab

0x194: Push((int) 1)
0x195: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x196: IF (Stack[-1] == 0) GOTO 0x1a0; Pop(1)

0x197: Push((int) 202)
0x198: Push("player_name") // @poff=867
0x199: @ SendMessage(Stack[-2], Stack[-1])
0x19a: Pop(2)
0x19b: Push((int) 203)
0x19c: Push("player_desc") // @poff=891
0x19d: @ SendMessage(Stack[-2], Stack[-1])
0x19e: Pop(2)
0x19f: GOTO 0x1ab

0x1a0: Push((int) 2)
0x1a1: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1a2: IF (Stack[-1] == 0) GOTO 0x1ab; Pop(1)

0x1a3: Push((int) -1)
0x1a4: Push("player_name") // @poff=867
0x1a5: @ SendMessage(Stack[-2], Stack[-1])
0x1a6: Pop(2)
0x1a7: Push((int) -1)
0x1a8: Push("player_desc") // @poff=891
0x1a9: @ SendMessage(Stack[-2], Stack[-1])
0x1aa: Pop(2)
0x1ab: Return(); Pop(0)

0x1ac: GOTO 0x22a

0x1ad: Push("burah") // @poff=915
0x1ae: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1af: IF (Stack[-1] == 0) GOTO 0x1d0; Pop(1)

0x1b0: Push((int) 0)
0x1b1: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1b2: IF (Stack[-1] == 0) GOTO 0x1b7; Pop(1)

0x1b3: Stack[2 + Tasks[-1].StackPointer] = (int)2
0x1b4: @ StopEventProcessing()
0x1b5: Pop(0)
0x1b6: GOTO 0x1ce

0x1b7: Push((int) 1)
0x1b8: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1b9: IF (Stack[-1] == 0) GOTO 0x1c3; Pop(1)

0x1ba: Push((int) 205)
0x1bb: Push("player_name") // @poff=867
0x1bc: @ SendMessage(Stack[-2], Stack[-1])
0x1bd: Pop(2)
0x1be: Push((int) 206)
0x1bf: Push("player_desc") // @poff=891
0x1c0: @ SendMessage(Stack[-2], Stack[-1])
0x1c1: Pop(2)
0x1c2: GOTO 0x1ce

0x1c3: Push((int) 2)
0x1c4: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1c5: IF (Stack[-1] == 0) GOTO 0x1ce; Pop(1)

0x1c6: Push((int) -1)
0x1c7: Push("player_name") // @poff=867
0x1c8: @ SendMessage(Stack[-2], Stack[-1])
0x1c9: Pop(2)
0x1ca: Push((int) -1)
0x1cb: Push("player_desc") // @poff=891
0x1cc: @ SendMessage(Stack[-2], Stack[-1])
0x1cd: Pop(2)
0x1ce: Return(); Pop(0)

0x1cf: GOTO 0x22a

0x1d0: Push("klara") // @poff=927
0x1d1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1d2: IF (Stack[-1] == 0) GOTO 0x202; Pop(1)

0x1d3: PushEmpty(bool)
0x1d4: Stack[-1] = (bool) 0
0x1d5: PushEmpty(bool)
0x1d6: Call2 0x25a

0x1d7: Pop(0)
0x1d8: Pop(1); Push((bool) Stack[-1] == 0)
0x1d9: IF (Stack[-1] == 0) GOTO 0x1e0; Pop(1)

0x1da: PushEmpty(bool)
0x1db: Call2 0x252

0x1dc: Pop(0)
0x1dd: Pop(1); Push((bool) Stack[-1] == 0)
0x1de: IF (Stack[-1] == 0) GOTO 0x1e0; Pop(1)

0x1df: Stack[-1] = (bool) 1
0x1e0: IF (Stack[-1] == 0) GOTO 0x1e2; Pop(1)

0x1e1: Return(); Pop(0)

0x1e2: Push((int) 0)
0x1e3: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1e4: IF (Stack[-1] == 0) GOTO 0x1e9; Pop(1)

0x1e5: Stack[2 + Tasks[-1].StackPointer] = (int)3
0x1e6: @ StopEventProcessing()
0x1e7: Pop(0)
0x1e8: GOTO 0x200

0x1e9: Push((int) 1)
0x1ea: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1eb: IF (Stack[-1] == 0) GOTO 0x1f5; Pop(1)

0x1ec: Push((int) 208)
0x1ed: Push("player_name") // @poff=867
0x1ee: @ SendMessage(Stack[-2], Stack[-1])
0x1ef: Pop(2)
0x1f0: Push((int) 209)
0x1f1: Push("player_desc") // @poff=891
0x1f2: @ SendMessage(Stack[-2], Stack[-1])
0x1f3: Pop(2)
0x1f4: GOTO 0x200

0x1f5: Push((int) 2)
0x1f6: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1f7: IF (Stack[-1] == 0) GOTO 0x200; Pop(1)

0x1f8: Push((int) -1)
0x1f9: Push("player_name") // @poff=867
0x1fa: @ SendMessage(Stack[-2], Stack[-1])
0x1fb: Pop(2)
0x1fc: Push((int) -1)
0x1fd: Push("player_desc") // @poff=891
0x1fe: @ SendMessage(Stack[-2], Stack[-1])
0x1ff: Pop(2)
0x200: Return(); Pop(0)

0x201: GOTO 0x22a

0x202: Push("load") // @poff=939
0x203: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x204: IF (Stack[-1] == 0) GOTO 0x213; Pop(1)

0x205: Push((int) 0)
0x206: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x207: IF (Stack[-1] == 0) GOTO 0x20e; Pop(1)

0x208: Stack[2 + Tasks[-1].StackPointer] = (int)4
0x209: @@ GetFileName(Stack[-10]T); Obj=1 // @poff=569
0x20a: Pop(0)
0x20b: @ StopEventProcessing()
0x20c: Pop(0)
0x20d: GOTO 0x211

0x20e: PushEmpty()
0x20f: Call2 0x22b

0x210: Pop(0)
0x211: Return(); Pop(0)

0x212: GOTO 0x22a

0x213: Push("save") // @poff=949
0x214: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x215: IF (Stack[-1] == 0) GOTO 0x223; Pop(1)

0x216: Push((int) 0)
0x217: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x218: IF (Stack[-1] == 0) GOTO 0x21e; Pop(1)

0x219: Stack[2 + Tasks[-1].StackPointer] = (int)5
0x21a: Stack[9 + Tasks[-1].StackPointer] = Stack[-1]
0x21b: @ StopEventProcessing()
0x21c: Pop(0)
0x21d: GOTO 0x221

0x21e: PushEmpty()
0x21f: Call2 0x22b

0x220: Pop(0)
0x221: Return(); Pop(0)

0x222: GOTO 0x22a

0x223: Push("options") // @poff=781
0x224: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x225: IF (Stack[-1] == 0) GOTO 0x22a; Pop(1)

0x226: PushEmpty()
0x227: Call2 0x22b

0x228: Pop(0)
0x229: Return(); Pop(0)

0x22a: Return(); Pop(0)

0x22b: PushEmpty()
0x22c: Call2 0x237

0x22d: Pop(0)
0x22e: PushEmpty(object)
0x22f: Call2 0x67

0x230: Stack[3 + Tasks[-1].StackPointer] = Stack[-1]
0x231: Pop(1)
0x232: PushEmpty(object)
0x233: Call2 0x6f

0x234: Stack[4 + Tasks[-1].StackPointer] = Stack[-1]
0x235: Pop(1)
0x236: Return(); Pop(0)

0x237: Push( Stack[3 + Tasks[-1].StackPointer] )
0x238: IF (Stack[-1] == 0) GOTO 0x23b; Pop(1)

0x239: @@@ DestroyWindow(); Obj=3 // @poff=79
0x23a: Pop(0)
0x23b: Push( Stack[4 + Tasks[-1].StackPointer] )
0x23c: IF (Stack[-1] == 0) GOTO 0x23f; Pop(1)

0x23d: @@@ DestroyWindow(); Obj=4 // @poff=79
0x23e: Pop(0)
0x23f: Push( Stack[5 + Tasks[-1].StackPointer] )
0x240: IF (Stack[-1] == 0) GOTO 0x243; Pop(1)

0x241: @@@ DestroyWindow(); Obj=5 // @poff=79
0x242: Pop(0)
0x243: Push( Stack[6 + Tasks[-1].StackPointer] )
0x244: IF (Stack[-1] == 0) GOTO 0x247; Pop(1)

0x245: @@@ DestroyWindow(); Obj=6 // @poff=79
0x246: Pop(0)
0x247: Push( Stack[7 + Tasks[-1].StackPointer] )
0x248: IF (Stack[-1] == 0) GOTO 0x24b; Pop(1)

0x249: @@@ DestroyWindow(); Obj=7 // @poff=79
0x24a: Pop(0)
0x24b: Push( Stack[8 + Tasks[-1].StackPointer] )
0x24c: IF (Stack[-1] == 0) GOTO 0x24f; Pop(1)

0x24d: @@@ DestroyWindow(); Obj=8 // @poff=79
0x24e: Pop(0)
0x24f: @ CaptureKeyboard()
0x250: Pop(0)
0x251: Return(); Pop(0)

0x252: PushEmpty(int, int)
0x253: Push("BurahCompleted") // @poff=959
0x254: Push((int) 0)
0x255: @ GetRegistryData(Stack[-3], Stack[-2], Stack[-1])
0x256: Pop(2)
0x257: Push((int) 0)
0x258: Stack[-4] = Stack[-2] != Stack[-1]; Pop(1);
0x259: Return(); Pop(2)

0x25a: PushEmpty(int, int)
0x25b: Push("DankoCompleted") // @poff=989
0x25c: Push((int) 0)
0x25d: @ GetRegistryData(Stack[-3], Stack[-2], Stack[-1])
0x25e: Pop(2)
0x25f: Push((int) 0)
0x260: Stack[-4] = Stack[-2] != Stack[-1]; Pop(1);
0x261: Return(); Pop(2)

