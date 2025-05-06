GlobalVarCount = 0

Strings:
	Play
	IsLost
	Restore
	IsPlaying
	StretchBlit
	Stop
	intro.xml
	intro
	DestroyWindow
	death.wmv
	game_buttons.xml
	game_logo.xml
	default
	menumusic
	game_choose_pers.xml
	intro_danko.wmv
	world_danko.xml
	player_danko.xml
	intro_burah.wmv
	world_burah.xml
	player_burah.xml
	intro_klara.wmv
	world_klara.xml
	player_klara.xml
	Loading : 
	GetFileName
	world_intro.xml
	player_intro.xml
	newgame
	quitgame
	Quit game
	loadgame
	load.xml
	savegame
	save.xml
	gameoptions
	options.xml
	continue
	credits
	danko
	player_name
	player_desc
	burah
	klara
	load
	save
	BurahCompleted
	DankoCompleted

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
	HideCursor (0 args)
	GetRegistryData (3 args)

RunOp = 0x6d
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object, int, int, bool) Params = 2
		EVENT_0 Op = 0x1e Vars = ()
		EVENT_101 Op = 0x38 Vars = (int)
	GTASK_1 Vars = (object) Params = 1
		EVENT_200 Op = 0x64 Vars = (int, string, object)
	GTASK_2 Vars = (int, int, int, object, object, object, object, object, object, object, string, string, string, string, bool, object) Params = 0
		EVENT_100 Op = 0x14d Vars = (int)
		EVENT_200 Op = 0x155 Vars = (int, string, object)
		EVENT_102 Op = 0x3f4 Vars = (int)
		EVENT_101 Op = 0x41b Vars = (int)


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
0xa: @ GetWindowSize(Stack[-1], Stack[-2])
0xb: Pop(0)
0xc: @ LoadVideo(Stack[-2])
0xd: Pop(0)
0xe: @ FindVideo(Stack[-0], Stack[-2])
0xf: Pop(0)
0x10: Push((bool) 0)
0x11: @@ Play(Stack[-1])
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
0x1f: @@ IsLost(Stack[-3])
0x20: Pop(0)
0x21: Push(Stack[-3])
0x22: IF (Stack[-1] == 0) GOTO 0x28; Pop(1)

0x23: @@ Restore(Stack[-2])
0x24: Pop(0)
0x25: Pop(0); Push((bool) Stack[-2] == 0)
0x26: IF (Stack[-1] == 0) GOTO 0x28; Pop(1)

0x27: Return(); Pop(6)

0x28: @@ IsPlaying(Stack[-1])
0x29: Pop(0)
0x2a: Push(Stack[-1])
0x2b: IF (Stack[-1] == 0) GOTO 0x31; Pop(1)

0x2c: Push((int) 0)
0x2d: Push((int) 0)
0x2e: @@ StretchBlit(Stack[-2], Stack[-1], Stack[-1], Stack[-2])
0x2f: Pop(2)
0x30: GOTO 0x37

0x31: Push((int) 0)
0x32: Push((int) 0)
0x33: @@ StretchBlit(Stack[-2], Stack[-1], Stack[-1], Stack[-2])
0x34: Pop(2)
0x35: @ StopEventProcessing()
0x36: Pop(0)
0x37: Return(); Pop(6)

0x38: PushEmpty()
0x39: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x3a: IF (Stack[-1] == 0) GOTO 0x3c; Pop(1)

0x3b: Return(); Pop(0)

0x3c: PushEmpty(bool)
0x3d: Stack[-1] = (bool) 1
0x3e: PushEmpty(bool)
0x3f: Stack[-1] = (bool) 1
0x40: PushEmpty(bool)
0x41: Stack[-1] = (bool) 1
0x42: Push((int) 27)
0x43: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x44: IF (Stack[-1] == 0) GOTO 0x49; Pop(1)

0x45: Push((int) 32)
0x46: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x47: IF (Stack[-1] == 0) GOTO 0x49; Pop(1)

0x48: Stack[-1] = (bool) 0
0x49: IF (Stack[-1] == 0) GOTO 0x4e; Pop(1)

0x4a: Push((int) 257)
0x4b: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x4c: IF (Stack[-1] == 0) GOTO 0x4e; Pop(1)

0x4d: Stack[-1] = (bool) 0
0x4e: IF (Stack[-1] == 0) GOTO 0x53; Pop(1)

0x4f: Push((int) 262)
0x50: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x51: IF (Stack[-1] == 0) GOTO 0x53; Pop(1)

0x52: Stack[-1] = (bool) 0
0x53: IF (Stack[-1] == 0) GOTO 0x58; Pop(1)

0x54: @ StopEventProcessing()
0x55: Pop(0)
0x56: @@ Stop()
0x57: Pop(0)
0x58: Return(); Pop(0)

0x59: PushEmpty()
0x5a: Push("intro.xml")
0x5b: Push((bool) 0)
0x5c: @ CreateWindow(Stack[-2], Stack[-1], Stack[-0])
0x5d: Pop(2)
0x5e: Push("intro")
0x5f: @ SendMessage(Stack[-2], Stack[-1])
0x60: Pop(1)
0x61: @ ProcessEvents()
0x62: Pop(0)
0x63: Return(); Pop(0)

0x64: PushEmpty()
0x65: Push("intro")
0x66: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x67: IF (Stack[-1] == 0) GOTO 0x6c; Pop(1)

0x68: @@ DestroyWindow()
0x69: Pop(0)
0x6a: @ StopEventProcessing()
0x6b: Pop(0)
0x6c: Return(); Pop(0)

0x6d: EventDisable(1)
0x6e: EventDisable(0)
0x6f: @ UISync()
0x70: Pop(0)
0x71: EventEnable(1)
0x72: EventEnable(0)
0x73: PushEmpty(string, bool)
0x74: Stack[-2] = "death.wmv"
0x75: Stack[-1] = (bool) 1
0x76: Push(-2, 4); TaskCall(0)
0x77: Call2 0x0

0x78: Pop(-2, 4); TaskReturn
0x79: Pop(2)
0x7a: PushEmpty(bool)
0x7b: Stack[-1] = (bool) 0
0x7c: Call2 0x8f

0x7d: Pop(1)
0x7e: Return(); Pop(0)

0x7f: PushEmpty(object, object)
0x80: Push("game_buttons.xml")
0x81: Push((bool) 0)
0x82: @ CreateWindow(Stack[-2], Stack[-1], Stack[-3])
0x83: Pop(2)
0x84: Stack[-3] = Stack[-1]
0x85: Return(); Pop(2)

0x86: Stack[-1] = 0
0x87: PushEmpty(object, object)
0x88: Push("game_logo.xml")
0x89: Push((bool) 0)
0x8a: @ CreateWindow(Stack[-2], Stack[-1], Stack[-3])
0x8b: Pop(2)
0x8c: Stack[-3] = Stack[-1]
0x8d: Return(); Pop(2)

0x8e: Stack[-1] = 0
0x8f: PushEmpty(bool, bool, bool, string, bool, bool, bool, string)
0x90: Stack[14 + Tasks[-1].StackPointer] = Stack[-9]
0x91: @ CaptureKeyboard()
0x92: Pop(0)
0x93: Stack[2 + Tasks[-1].StackPointer] = (int)0
0x94: @ GetWindowSize(Stack[-0], Stack[-1])
0x95: Pop(0)
0x96: Push("default")
0x97: @ SetCursor(Stack[-1])
0x98: Pop(1)
0x99: Push("default")
0x9a: @ SetBackground(Stack[-1])
0x9b: Pop(1)
0x9c: Push("menumusic")
0x9d: @ PlaySound(Stack[-1])
0x9e: Pop(1)
0x9f: Push((bool) 1)
0xa0: @ ShowCursor(Stack[-1])
0xa1: Pop(1)
0xa2: PushEmpty(string)
0xa3: Stack[-1] = ""
0xa4: Call2 0x38f

0xa5: Pop(1)
0xa6: PushEmpty(string)
0xa7: Stack[-1] = ""
0xa8: Call2 0x394

0xa9: Pop(1)
0xaa: Push(Stack[-9])
0xab: IF (Stack[-1] == 0) GOTO 0xb1; Pop(1)

0xac: Push("game_choose_pers.xml")
0xad: Push((bool) 0)
0xae: @ CreateWindow(Stack[-2], Stack[-1], Stack[-5])
0xaf: Pop(2)
0xb0: GOTO 0xb9

0xb1: PushEmpty(object)
0xb2: Call2 0x7f

0xb3: Stack[3 + Tasks[-1].StackPointer] = Stack[-1]
0xb4: Pop(1)
0xb5: PushEmpty(object)
0xb6: Call2 0x87

0xb7: Stack[4 + Tasks[-1].StackPointer] = Stack[-1]
0xb8: Pop(1)
0xb9: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0xba: IF (Stack[-1] == 0) GOTO 0xbe; Pop(1)

0xbb: @ ProcessEvents()
0xbc: Pop(0)
0xbd: GOTO 0xb9

0xbe: PushEmpty()
0xbf: Call2 0x275

0xc0: Pop(0)
0xc1: Push((int) 1)
0xc2: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] == Stack[-1])
0xc3: IF (Stack[-1] == 0) GOTO 0xdf; Pop(1)

0xc4: Push("menumusic")
0xc5: @ PauseSound(Stack[-1])
0xc6: Pop(1)
0xc7: PushEmpty(int)
0xc8: Stack[-1] = (int) 1
0xc9: Push(-1, 1); TaskCall(1)
0xca: Call2 0x59

0xcb: Pop(-1, 1); TaskReturn
0xcc: Pop(1)
0xcd: PushEmpty(string, bool)
0xce: Stack[-2] = "intro_danko.wmv"
0xcf: Stack[-1] = (bool) 1
0xd0: Push(-2, 4); TaskCall(0)
0xd1: Call2 0x0

0xd2: Pop(-2, 4); TaskReturn
0xd3: Pop(2)
0xd4: @ RemoveWorld()
0xd5: Pop(0)
0xd6: @ UISync()
0xd7: Pop(0)
0xd8: @ DestroyWindow()
0xd9: Pop(0)
0xda: Push("world_danko.xml")
0xdb: Push("player_danko.xml")
0xdc: @ NewGame(Stack[-2], Stack[-1])
0xdd: Pop(2)
0xde: GOTO 0x14c

0xdf: Push((int) 2)
0xe0: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] == Stack[-1])
0xe1: IF (Stack[-1] == 0) GOTO 0xfd; Pop(1)

0xe2: Push("menumusic")
0xe3: @ PauseSound(Stack[-1])
0xe4: Pop(1)
0xe5: PushEmpty(int)
0xe6: Stack[-1] = (int) 2
0xe7: Push(-1, 1); TaskCall(1)
0xe8: Call2 0x59

0xe9: Pop(-1, 1); TaskReturn
0xea: Pop(1)
0xeb: PushEmpty(string, bool)
0xec: Stack[-2] = "intro_burah.wmv"
0xed: Stack[-1] = (bool) 1
0xee: Push(-2, 4); TaskCall(0)
0xef: Call2 0x0

0xf0: Pop(-2, 4); TaskReturn
0xf1: Pop(2)
0xf2: @ RemoveWorld()
0xf3: Pop(0)
0xf4: @ UISync()
0xf5: Pop(0)
0xf6: @ DestroyWindow()
0xf7: Pop(0)
0xf8: Push("world_burah.xml")
0xf9: Push("player_burah.xml")
0xfa: @ NewGame(Stack[-2], Stack[-1])
0xfb: Pop(2)
0xfc: GOTO 0x14c

0xfd: Push((int) 3)
0xfe: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] == Stack[-1])
0xff: IF (Stack[-1] == 0) GOTO 0x11b; Pop(1)

0x100: Push("menumusic")
0x101: @ PauseSound(Stack[-1])
0x102: Pop(1)
0x103: PushEmpty(int)
0x104: Stack[-1] = (int) 3
0x105: Push(-1, 1); TaskCall(1)
0x106: Call2 0x59

0x107: Pop(-1, 1); TaskReturn
0x108: Pop(1)
0x109: PushEmpty(string, bool)
0x10a: Stack[-2] = "intro_klara.wmv"
0x10b: Stack[-1] = (bool) 1
0x10c: Push(-2, 4); TaskCall(0)
0x10d: Call2 0x0

0x10e: Pop(-2, 4); TaskReturn
0x10f: Pop(2)
0x110: @ RemoveWorld()
0x111: Pop(0)
0x112: @ UISync()
0x113: Pop(0)
0x114: @ DestroyWindow()
0x115: Pop(0)
0x116: Push("world_klara.xml")
0x117: Push("player_klara.xml")
0x118: @ NewGame(Stack[-2], Stack[-1])
0x119: Pop(2)
0x11a: GOTO 0x14c

0x11b: Push((int) 4)
0x11c: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] == Stack[-1])
0x11d: IF (Stack[-1] == 0) GOTO 0x12e; Pop(1)

0x11e: Push("menumusic")
0x11f: @ PauseSound(Stack[-1])
0x120: Pop(1)
0x121: Push("Loading : ")
0x122: Pop(1); Push(Stack[-1] + Stack[10 + StackPtr]);
0x123: @ Trace(Stack[-1])
0x124: Pop(1)
0x125: @ RemoveWorld()
0x126: Pop(0)
0x127: @ UISync()
0x128: Pop(0)
0x129: @ DestroyWindow()
0x12a: Pop(0)
0x12b: @ LoadGame(Stack[-4], Stack[-10])
0x12c: Pop(0)
0x12d: GOTO 0x14c

0x12e: Push((int) 5)
0x12f: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] == Stack[-1])
0x130: IF (Stack[-1] == 0) GOTO 0x13f; Pop(1)

0x131: Pop(0); Push((bool) Stack[9 + Tasks[-1].StackPointer] == 0)
0x132: IF (Stack[-1] == 0) GOTO 0x138; Pop(1)

0x133: @ DestroyWindow()
0x134: Pop(0)
0x135: @ SaveGame(Stack[-3])
0x136: Pop(0)
0x137: GOTO 0x13e

0x138: @ DestroyWindow()
0x139: Pop(0)
0x13a: @@ GetFileName(Stack[-1])
0x13b: Pop(0)
0x13c: @ SaveGame(Stack[-2], Stack[-1])
0x13d: Pop(0)
0x13e: GOTO 0x14c

0x13f: Push((int) 7)
0x140: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] == Stack[-1])
0x141: IF (Stack[-1] == 0) GOTO 0x14c; Pop(1)

0x142: @ RemoveWorld()
0x143: Pop(0)
0x144: @ UISync()
0x145: Pop(0)
0x146: @ DestroyWindow()
0x147: Pop(0)
0x148: Push("world_intro.xml")
0x149: Push("player_intro.xml")
0x14a: @ NewGame(Stack[-2], Stack[-1])
0x14b: Pop(2)
0x14c: Return(); Pop(8)

0x14d: PushEmpty()
0x14e: Push((int) 27)
0x14f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x150: IF (Stack[-1] == 0) GOTO 0x154; Pop(1)

0x151: PushEmpty()
0x152: Call2 0x265

0x153: Pop(0)
0x154: Return(); Pop(0)

0x155: PushEmpty()
0x156: Push("newgame")
0x157: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x158: IF (Stack[-1] == 0) GOTO 0x15d; Pop(1)

0x159: Stack[2 + Tasks[-1].StackPointer] = (int)7
0x15a: @ StopEventProcessing()
0x15b: Pop(0)
0x15c: GOTO 0x264

0x15d: Push("quitgame")
0x15e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x15f: IF (Stack[-1] == 0) GOTO 0x167; Pop(1)

0x160: Push("Quit game")
0x161: @ UITrace(Stack[-1])
0x162: Pop(1)
0x163: @ Quit()
0x164: Pop(0)
0x165: Return(); Pop(0)

0x166: GOTO 0x264

0x167: Push("loadgame")
0x168: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x169: IF (Stack[-1] == 0) GOTO 0x173; Pop(1)

0x16a: PushEmpty()
0x16b: Call2 0x275

0x16c: Pop(0)
0x16d: Push("load.xml")
0x16e: Push((bool) 0)
0x16f: @ CreateWindow(Stack[-2], Stack[-1], Stack[-6])
0x170: Pop(2)
0x171: Return(); Pop(0)

0x172: GOTO 0x264

0x173: Push("savegame")
0x174: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x175: IF (Stack[-1] == 0) GOTO 0x17f; Pop(1)

0x176: PushEmpty()
0x177: Call2 0x275

0x178: Pop(0)
0x179: Push("save.xml")
0x17a: Push((bool) 0)
0x17b: @ CreateWindow(Stack[-2], Stack[-1], Stack[-7])
0x17c: Pop(2)
0x17d: Return(); Pop(0)

0x17e: GOTO 0x264

0x17f: Push("gameoptions")
0x180: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x181: IF (Stack[-1] == 0) GOTO 0x18b; Pop(1)

0x182: PushEmpty()
0x183: Call2 0x275

0x184: Pop(0)
0x185: Push("options.xml")
0x186: Push((bool) 0)
0x187: @ CreateWindow(Stack[-2], Stack[-1], Stack[-8])
0x188: Pop(2)
0x189: Return(); Pop(0)

0x18a: GOTO 0x264

0x18b: Push("continue")
0x18c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x18d: IF (Stack[-1] == 0) GOTO 0x193; Pop(1)

0x18e: Stack[2 + Tasks[-1].StackPointer] = (int)6
0x18f: @ StopEventProcessing()
0x190: Pop(0)
0x191: Return(); Pop(0)

0x192: GOTO 0x264

0x193: Push("credits")
0x194: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x195: IF (Stack[-1] == 0) GOTO 0x1b1; Pop(1)

0x196: PushEmpty()
0x197: Call2 0x275

0x198: Pop(0)
0x199: PushEmpty(int)
0x19a: Stack[-1] = (int) 8
0x19b: Push(-1, 1); TaskCall(1)
0x19c: Call2 0x59

0x19d: Pop(-1, 1); TaskReturn
0x19e: Pop(1)
0x19f: PushEmpty(object)
0x1a0: Call2 0x7f

0x1a1: Stack[3 + Tasks[-1].StackPointer] = Stack[-1]
0x1a2: Pop(1)
0x1a3: PushEmpty(object)
0x1a4: Call2 0x87

0x1a5: Stack[4 + Tasks[-1].StackPointer] = Stack[-1]
0x1a6: Pop(1)
0x1a7: Push((bool) 1)
0x1a8: @ ShowCursor(Stack[-1])
0x1a9: Pop(1)
0x1aa: @ CaptureKeyboard()
0x1ab: Pop(0)
0x1ac: PushEmpty(string)
0x1ad: Stack[-1] = ""
0x1ae: Call2 0x38f

0x1af: Pop(1)
0x1b0: GOTO 0x264

0x1b1: Push("danko")
0x1b2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1b3: IF (Stack[-1] == 0) GOTO 0x1d4; Pop(1)

0x1b4: Push((int) 0)
0x1b5: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1b6: IF (Stack[-1] == 0) GOTO 0x1bb; Pop(1)

0x1b7: Stack[2 + Tasks[-1].StackPointer] = (int)1
0x1b8: @ StopEventProcessing()
0x1b9: Pop(0)
0x1ba: GOTO 0x1d2

0x1bb: Push((int) 1)
0x1bc: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1bd: IF (Stack[-1] == 0) GOTO 0x1c7; Pop(1)

0x1be: Push((int) 202)
0x1bf: Push("player_name")
0x1c0: @ SendMessage(Stack[-2], Stack[-1])
0x1c1: Pop(2)
0x1c2: Push((int) 203)
0x1c3: Push("player_desc")
0x1c4: @ SendMessage(Stack[-2], Stack[-1])
0x1c5: Pop(2)
0x1c6: GOTO 0x1d2

0x1c7: Push((int) 2)
0x1c8: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1c9: IF (Stack[-1] == 0) GOTO 0x1d2; Pop(1)

0x1ca: Push((int) -1)
0x1cb: Push("player_name")
0x1cc: @ SendMessage(Stack[-2], Stack[-1])
0x1cd: Pop(2)
0x1ce: Push((int) -1)
0x1cf: Push("player_desc")
0x1d0: @ SendMessage(Stack[-2], Stack[-1])
0x1d1: Pop(2)
0x1d2: Return(); Pop(0)

0x1d3: GOTO 0x264

0x1d4: Push("burah")
0x1d5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1d6: IF (Stack[-1] == 0) GOTO 0x1f7; Pop(1)

0x1d7: Push((int) 0)
0x1d8: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1d9: IF (Stack[-1] == 0) GOTO 0x1de; Pop(1)

0x1da: Stack[2 + Tasks[-1].StackPointer] = (int)2
0x1db: @ StopEventProcessing()
0x1dc: Pop(0)
0x1dd: GOTO 0x1f5

0x1de: Push((int) 1)
0x1df: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1e0: IF (Stack[-1] == 0) GOTO 0x1ea; Pop(1)

0x1e1: Push((int) 205)
0x1e2: Push("player_name")
0x1e3: @ SendMessage(Stack[-2], Stack[-1])
0x1e4: Pop(2)
0x1e5: Push((int) 206)
0x1e6: Push("player_desc")
0x1e7: @ SendMessage(Stack[-2], Stack[-1])
0x1e8: Pop(2)
0x1e9: GOTO 0x1f5

0x1ea: Push((int) 2)
0x1eb: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1ec: IF (Stack[-1] == 0) GOTO 0x1f5; Pop(1)

0x1ed: Push((int) -1)
0x1ee: Push("player_name")
0x1ef: @ SendMessage(Stack[-2], Stack[-1])
0x1f0: Pop(2)
0x1f1: Push((int) -1)
0x1f2: Push("player_desc")
0x1f3: @ SendMessage(Stack[-2], Stack[-1])
0x1f4: Pop(2)
0x1f5: Return(); Pop(0)

0x1f6: GOTO 0x264

0x1f7: Push("klara")
0x1f8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1f9: IF (Stack[-1] == 0) GOTO 0x23c; Pop(1)

0x1fa: Push((int) 0)
0x1fb: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1fc: IF (Stack[-1] == 0) GOTO 0x210; Pop(1)

0x1fd: PushEmpty(bool)
0x1fe: Stack[-1] = (bool) 0
0x1ff: PushEmpty(bool)
0x200: Call2 0x46a

0x201: Pop(0)
0x202: Pop(1); Push((bool) Stack[-1] == 0)
0x203: IF (Stack[-1] == 0) GOTO 0x20a; Pop(1)

0x204: PushEmpty(bool)
0x205: Call2 0x462

0x206: Pop(0)
0x207: Pop(1); Push((bool) Stack[-1] == 0)
0x208: IF (Stack[-1] == 0) GOTO 0x20a; Pop(1)

0x209: Stack[-1] = (bool) 1
0x20a: IF (Stack[-1] == 0) GOTO 0x20c; Pop(1)

0x20b: Return(); Pop(0)

0x20c: Stack[2 + Tasks[-1].StackPointer] = (int)3
0x20d: @ StopEventProcessing()
0x20e: Pop(0)
0x20f: GOTO 0x23a

0x210: Push((int) 1)
0x211: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x212: IF (Stack[-1] == 0) GOTO 0x22f; Pop(1)

0x213: Push((int) 208)
0x214: Push("player_name")
0x215: @ SendMessage(Stack[-2], Stack[-1])
0x216: Pop(2)
0x217: PushEmpty(bool)
0x218: Stack[-1] = (bool) 0
0x219: PushEmpty(bool)
0x21a: Call2 0x46a

0x21b: Pop(0)
0x21c: Pop(1); Push((bool) Stack[-1] == 0)
0x21d: IF (Stack[-1] == 0) GOTO 0x224; Pop(1)

0x21e: PushEmpty(bool)
0x21f: Call2 0x462

0x220: Pop(0)
0x221: Pop(1); Push((bool) Stack[-1] == 0)
0x222: IF (Stack[-1] == 0) GOTO 0x224; Pop(1)

0x223: Stack[-1] = (bool) 1
0x224: IF (Stack[-1] == 0) GOTO 0x22a; Pop(1)

0x225: Push((int) 213)
0x226: Push("player_desc")
0x227: @ SendMessage(Stack[-2], Stack[-1])
0x228: Pop(2)
0x229: GOTO 0x22e

0x22a: Push((int) 209)
0x22b: Push("player_desc")
0x22c: @ SendMessage(Stack[-2], Stack[-1])
0x22d: Pop(2)
0x22e: GOTO 0x23a

0x22f: Push((int) 2)
0x230: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x231: IF (Stack[-1] == 0) GOTO 0x23a; Pop(1)

0x232: Push((int) -1)
0x233: Push("player_name")
0x234: @ SendMessage(Stack[-2], Stack[-1])
0x235: Pop(2)
0x236: Push((int) -1)
0x237: Push("player_desc")
0x238: @ SendMessage(Stack[-2], Stack[-1])
0x239: Pop(2)
0x23a: Return(); Pop(0)

0x23b: GOTO 0x264

0x23c: Push("load")
0x23d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x23e: IF (Stack[-1] == 0) GOTO 0x24d; Pop(1)

0x23f: Push((int) 0)
0x240: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x241: IF (Stack[-1] == 0) GOTO 0x248; Pop(1)

0x242: Stack[2 + Tasks[-1].StackPointer] = (int)4
0x243: @@ GetFileName(Stack[-10])
0x244: Pop(0)
0x245: @ StopEventProcessing()
0x246: Pop(0)
0x247: GOTO 0x24b

0x248: PushEmpty()
0x249: Call2 0x265

0x24a: Pop(0)
0x24b: Return(); Pop(0)

0x24c: GOTO 0x264

0x24d: Push("save")
0x24e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x24f: IF (Stack[-1] == 0) GOTO 0x25d; Pop(1)

0x250: Push((int) 0)
0x251: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x252: IF (Stack[-1] == 0) GOTO 0x258; Pop(1)

0x253: Stack[2 + Tasks[-1].StackPointer] = (int)5
0x254: Stack[9 + Tasks[-1].StackPointer] = Stack[-1]
0x255: @ StopEventProcessing()
0x256: Pop(0)
0x257: GOTO 0x25b

0x258: PushEmpty()
0x259: Call2 0x265

0x25a: Pop(0)
0x25b: Return(); Pop(0)

0x25c: GOTO 0x264

0x25d: Push("options")
0x25e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x25f: IF (Stack[-1] == 0) GOTO 0x264; Pop(1)

0x260: PushEmpty()
0x261: Call2 0x265

0x262: Pop(0)
0x263: Return(); Pop(0)

0x264: Return(); Pop(0)

0x265: PushEmpty(string)
0x266: Stack[-1] = ""
0x267: Call2 0x38f

0x268: Pop(1)
0x269: PushEmpty()
0x26a: Call2 0x275

0x26b: Pop(0)
0x26c: PushEmpty(object)
0x26d: Call2 0x7f

0x26e: Stack[3 + Tasks[-1].StackPointer] = Stack[-1]
0x26f: Pop(1)
0x270: PushEmpty(object)
0x271: Call2 0x87

0x272: Stack[4 + Tasks[-1].StackPointer] = Stack[-1]
0x273: Pop(1)
0x274: Return(); Pop(0)

0x275: Push( Stack[3 + Tasks[-1].StackPointer] )
0x276: IF (Stack[-1] == 0) GOTO 0x279; Pop(1)

0x277: @@ DestroyWindow()
0x278: Pop(0)
0x279: Push( Stack[4 + Tasks[-1].StackPointer] )
0x27a: IF (Stack[-1] == 0) GOTO 0x27d; Pop(1)

0x27b: @@ DestroyWindow()
0x27c: Pop(0)
0x27d: Push( Stack[5 + Tasks[-1].StackPointer] )
0x27e: IF (Stack[-1] == 0) GOTO 0x281; Pop(1)

0x27f: @@ DestroyWindow()
0x280: Pop(0)
0x281: Push( Stack[6 + Tasks[-1].StackPointer] )
0x282: IF (Stack[-1] == 0) GOTO 0x285; Pop(1)

0x283: @@ DestroyWindow()
0x284: Pop(0)
0x285: Push( Stack[7 + Tasks[-1].StackPointer] )
0x286: IF (Stack[-1] == 0) GOTO 0x289; Pop(1)

0x287: @@ DestroyWindow()
0x288: Pop(0)
0x289: Push( Stack[8 + Tasks[-1].StackPointer] )
0x28a: IF (Stack[-1] == 0) GOTO 0x28d; Pop(1)

0x28b: @@ DestroyWindow()
0x28c: Pop(0)
0x28d: @ CaptureKeyboard()
0x28e: Pop(0)
0x28f: Return(); Pop(0)

0x290: Push((int) 0)
0x291: Push("newgame")
0x292: @ SendMessage(Stack[-2], Stack[-1])
0x293: Pop(2)
0x294: Push((int) 0)
0x295: Push("loadgame")
0x296: @ SendMessage(Stack[-2], Stack[-1])
0x297: Pop(2)
0x298: Push((int) 0)
0x299: Push("gameoptions")
0x29a: @ SendMessage(Stack[-2], Stack[-1])
0x29b: Pop(2)
0x29c: Push((int) 0)
0x29d: Push("credits")
0x29e: @ SendMessage(Stack[-2], Stack[-1])
0x29f: Pop(2)
0x2a0: Push((int) 0)
0x2a1: Push("quitgame")
0x2a2: @ SendMessage(Stack[-2], Stack[-1])
0x2a3: Pop(2)
0x2a4: Return(); Pop(0)

0x2a5: Push((int) 0)
0x2a6: Push("danko")
0x2a7: @ SendMessage(Stack[-2], Stack[-1])
0x2a8: Pop(2)
0x2a9: Push((int) 0)
0x2aa: Push("burah")
0x2ab: @ SendMessage(Stack[-2], Stack[-1])
0x2ac: Pop(2)
0x2ad: Push((int) 0)
0x2ae: Push("klara")
0x2af: @ SendMessage(Stack[-2], Stack[-1])
0x2b0: Pop(2)
0x2b1: Return(); Pop(0)

0x2b2: PushEmpty()
0x2b3: Call2 0x2a5

0x2b4: Pop(0)
0x2b5: PushEmpty(string)
0x2b6: Call2 0x392

0x2b7: Pop(0)
0x2b8: Push("")
0x2b9: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x2ba: IF (Stack[-1] == 0) GOTO 0x2c4; Pop(1)

0x2bb: Push((int) 1)
0x2bc: Push("danko")
0x2bd: @ SendMessage(Stack[-2], Stack[-1])
0x2be: Pop(2)
0x2bf: PushEmpty(string)
0x2c0: Stack[-1] = "danko"
0x2c1: Call2 0x394

0x2c2: Pop(1)
0x2c3: GOTO 0x2f0

0x2c4: PushEmpty(string)
0x2c5: Call2 0x392

0x2c6: Pop(0)
0x2c7: Push("danko")
0x2c8: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x2c9: IF (Stack[-1] == 0) GOTO 0x2d3; Pop(1)

0x2ca: Push((int) 1)
0x2cb: Push("burah")
0x2cc: @ SendMessage(Stack[-2], Stack[-1])
0x2cd: Pop(2)
0x2ce: PushEmpty(string)
0x2cf: Stack[-1] = "burah"
0x2d0: Call2 0x394

0x2d1: Pop(1)
0x2d2: GOTO 0x2f0

0x2d3: PushEmpty(string)
0x2d4: Call2 0x392

0x2d5: Pop(0)
0x2d6: Push("burah")
0x2d7: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x2d8: IF (Stack[-1] == 0) GOTO 0x2e2; Pop(1)

0x2d9: Push((int) 1)
0x2da: Push("klara")
0x2db: @ SendMessage(Stack[-2], Stack[-1])
0x2dc: Pop(2)
0x2dd: PushEmpty(string)
0x2de: Stack[-1] = "klara"
0x2df: Call2 0x394

0x2e0: Pop(1)
0x2e1: GOTO 0x2f0

0x2e2: PushEmpty(string)
0x2e3: Call2 0x392

0x2e4: Pop(0)
0x2e5: Push("klara")
0x2e6: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x2e7: IF (Stack[-1] == 0) GOTO 0x2f0; Pop(1)

0x2e8: Push((int) 1)
0x2e9: Push("danko")
0x2ea: @ SendMessage(Stack[-2], Stack[-1])
0x2eb: Pop(2)
0x2ec: PushEmpty(string)
0x2ed: Stack[-1] = "danko"
0x2ee: Call2 0x394

0x2ef: Pop(1)
0x2f0: Return(); Pop(0)

0x2f1: PushEmpty()
0x2f2: Call2 0x2a5

0x2f3: Pop(0)
0x2f4: PushEmpty(string)
0x2f5: Call2 0x392

0x2f6: Pop(0)
0x2f7: Push("")
0x2f8: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x2f9: IF (Stack[-1] == 0) GOTO 0x303; Pop(1)

0x2fa: Push((int) 1)
0x2fb: Push("klara")
0x2fc: @ SendMessage(Stack[-2], Stack[-1])
0x2fd: Pop(2)
0x2fe: PushEmpty(string)
0x2ff: Stack[-1] = "klara"
0x300: Call2 0x394

0x301: Pop(1)
0x302: GOTO 0x32f

0x303: PushEmpty(string)
0x304: Call2 0x392

0x305: Pop(0)
0x306: Push("klara")
0x307: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x308: IF (Stack[-1] == 0) GOTO 0x312; Pop(1)

0x309: Push((int) 1)
0x30a: Push("burah")
0x30b: @ SendMessage(Stack[-2], Stack[-1])
0x30c: Pop(2)
0x30d: PushEmpty(string)
0x30e: Stack[-1] = "burah"
0x30f: Call2 0x394

0x310: Pop(1)
0x311: GOTO 0x32f

0x312: PushEmpty(string)
0x313: Call2 0x392

0x314: Pop(0)
0x315: Push("burah")
0x316: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x317: IF (Stack[-1] == 0) GOTO 0x321; Pop(1)

0x318: Push((int) 1)
0x319: Push("danko")
0x31a: @ SendMessage(Stack[-2], Stack[-1])
0x31b: Pop(2)
0x31c: PushEmpty(string)
0x31d: Stack[-1] = "danko"
0x31e: Call2 0x394

0x31f: Pop(1)
0x320: GOTO 0x32f

0x321: PushEmpty(string)
0x322: Call2 0x392

0x323: Pop(0)
0x324: Push("danko")
0x325: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x326: IF (Stack[-1] == 0) GOTO 0x32f; Pop(1)

0x327: Push((int) 1)
0x328: Push("klara")
0x329: @ SendMessage(Stack[-2], Stack[-1])
0x32a: Pop(2)
0x32b: PushEmpty(string)
0x32c: Stack[-1] = "klara"
0x32d: Call2 0x394

0x32e: Pop(1)
0x32f: Return(); Pop(0)

0x330: PushEmpty()
0x331: Call2 0x290

0x332: Pop(0)
0x333: PushEmpty(string)
0x334: Call2 0x38d

0x335: Pop(0)
0x336: Push("")
0x337: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x338: IF (Stack[-1] == 0) GOTO 0x342; Pop(1)

0x339: Push((int) 1)
0x33a: Push("newgame")
0x33b: @ SendMessage(Stack[-2], Stack[-1])
0x33c: Pop(2)
0x33d: PushEmpty(string)
0x33e: Stack[-1] = "newgame"
0x33f: Call2 0x38f

0x340: Pop(1)
0x341: GOTO 0x38c

0x342: PushEmpty(string)
0x343: Call2 0x38d

0x344: Pop(0)
0x345: Push("newgame")
0x346: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x347: IF (Stack[-1] == 0) GOTO 0x351; Pop(1)

0x348: Push((int) 1)
0x349: Push("loadgame")
0x34a: @ SendMessage(Stack[-2], Stack[-1])
0x34b: Pop(2)
0x34c: PushEmpty(string)
0x34d: Stack[-1] = "loadgame"
0x34e: Call2 0x38f

0x34f: Pop(1)
0x350: GOTO 0x38c

0x351: PushEmpty(string)
0x352: Call2 0x38d

0x353: Pop(0)
0x354: Push("loadgame")
0x355: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x356: IF (Stack[-1] == 0) GOTO 0x360; Pop(1)

0x357: Push((int) 1)
0x358: Push("gameoptions")
0x359: @ SendMessage(Stack[-2], Stack[-1])
0x35a: Pop(2)
0x35b: PushEmpty(string)
0x35c: Stack[-1] = "gameoptions"
0x35d: Call2 0x38f

0x35e: Pop(1)
0x35f: GOTO 0x38c

0x360: PushEmpty(string)
0x361: Call2 0x38d

0x362: Pop(0)
0x363: Push("gameoptions")
0x364: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x365: IF (Stack[-1] == 0) GOTO 0x36f; Pop(1)

0x366: Push((int) 1)
0x367: Push("credits")
0x368: @ SendMessage(Stack[-2], Stack[-1])
0x369: Pop(2)
0x36a: PushEmpty(string)
0x36b: Stack[-1] = "credits"
0x36c: Call2 0x38f

0x36d: Pop(1)
0x36e: GOTO 0x38c

0x36f: PushEmpty(string)
0x370: Call2 0x38d

0x371: Pop(0)
0x372: Push("credits")
0x373: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x374: IF (Stack[-1] == 0) GOTO 0x37e; Pop(1)

0x375: Push((int) 1)
0x376: Push("quitgame")
0x377: @ SendMessage(Stack[-2], Stack[-1])
0x378: Pop(2)
0x379: PushEmpty(string)
0x37a: Stack[-1] = "quitgame"
0x37b: Call2 0x38f

0x37c: Pop(1)
0x37d: GOTO 0x38c

0x37e: PushEmpty(string)
0x37f: Call2 0x38d

0x380: Pop(0)
0x381: Push("quitgame")
0x382: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x383: IF (Stack[-1] == 0) GOTO 0x38c; Pop(1)

0x384: Push((int) 1)
0x385: Push("newgame")
0x386: @ SendMessage(Stack[-2], Stack[-1])
0x387: Pop(2)
0x388: PushEmpty(string)
0x389: Stack[-1] = "newgame"
0x38a: Call2 0x38f

0x38b: Pop(1)
0x38c: Return(); Pop(0)

0x38d: Stack[-1] = Stack[11 + Tasks[-1].StackPointer]
0x38e: Return(); Pop(0)

0x38f: PushEmpty()
0x390: Stack[11 + Tasks[-1].StackPointer] = Stack[-1]
0x391: Return(); Pop(0)

0x392: Stack[-1] = Stack[12 + Tasks[-1].StackPointer]
0x393: Return(); Pop(0)

0x394: PushEmpty()
0x395: Stack[12 + Tasks[-1].StackPointer] = Stack[-1]
0x396: Return(); Pop(0)

0x397: PushEmpty()
0x398: Call2 0x290

0x399: Pop(0)
0x39a: PushEmpty(string)
0x39b: Call2 0x38d

0x39c: Pop(0)
0x39d: Push("")
0x39e: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x39f: IF (Stack[-1] == 0) GOTO 0x3a9; Pop(1)

0x3a0: Push((int) 1)
0x3a1: Push("quitgame")
0x3a2: @ SendMessage(Stack[-2], Stack[-1])
0x3a3: Pop(2)
0x3a4: PushEmpty(string)
0x3a5: Stack[-1] = "quitgame"
0x3a6: Call2 0x38f

0x3a7: Pop(1)
0x3a8: GOTO 0x3f3

0x3a9: PushEmpty(string)
0x3aa: Call2 0x38d

0x3ab: Pop(0)
0x3ac: Push("newgame")
0x3ad: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x3ae: IF (Stack[-1] == 0) GOTO 0x3b8; Pop(1)

0x3af: Push((int) 1)
0x3b0: Push("quitgame")
0x3b1: @ SendMessage(Stack[-2], Stack[-1])
0x3b2: Pop(2)
0x3b3: PushEmpty(string)
0x3b4: Stack[-1] = "quitgame"
0x3b5: Call2 0x38f

0x3b6: Pop(1)
0x3b7: GOTO 0x3f3

0x3b8: PushEmpty(string)
0x3b9: Call2 0x38d

0x3ba: Pop(0)
0x3bb: Push("loadgame")
0x3bc: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x3bd: IF (Stack[-1] == 0) GOTO 0x3c7; Pop(1)

0x3be: Push((int) 1)
0x3bf: Push("newgame")
0x3c0: @ SendMessage(Stack[-2], Stack[-1])
0x3c1: Pop(2)
0x3c2: PushEmpty(string)
0x3c3: Stack[-1] = "newgame"
0x3c4: Call2 0x38f

0x3c5: Pop(1)
0x3c6: GOTO 0x3f3

0x3c7: PushEmpty(string)
0x3c8: Call2 0x38d

0x3c9: Pop(0)
0x3ca: Push("gameoptions")
0x3cb: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x3cc: IF (Stack[-1] == 0) GOTO 0x3d6; Pop(1)

0x3cd: Push((int) 1)
0x3ce: Push("loadgame")
0x3cf: @ SendMessage(Stack[-2], Stack[-1])
0x3d0: Pop(2)
0x3d1: PushEmpty(string)
0x3d2: Stack[-1] = "loadgame"
0x3d3: Call2 0x38f

0x3d4: Pop(1)
0x3d5: GOTO 0x3f3

0x3d6: PushEmpty(string)
0x3d7: Call2 0x38d

0x3d8: Pop(0)
0x3d9: Push("credits")
0x3da: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x3db: IF (Stack[-1] == 0) GOTO 0x3e5; Pop(1)

0x3dc: Push((int) 1)
0x3dd: Push("gameoptions")
0x3de: @ SendMessage(Stack[-2], Stack[-1])
0x3df: Pop(2)
0x3e0: PushEmpty(string)
0x3e1: Stack[-1] = "gameoptions"
0x3e2: Call2 0x38f

0x3e3: Pop(1)
0x3e4: GOTO 0x3f3

0x3e5: PushEmpty(string)
0x3e6: Call2 0x38d

0x3e7: Pop(0)
0x3e8: Push("quitgame")
0x3e9: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x3ea: IF (Stack[-1] == 0) GOTO 0x3f3; Pop(1)

0x3eb: Push((int) 1)
0x3ec: Push("credits")
0x3ed: @ SendMessage(Stack[-2], Stack[-1])
0x3ee: Pop(2)
0x3ef: PushEmpty(string)
0x3f0: Stack[-1] = "credits"
0x3f1: Call2 0x38f

0x3f2: Pop(1)
0x3f3: Return(); Pop(0)

0x3f4: PushEmpty()
0x3f5: Pop(0); Push((bool) Stack[14 + Tasks[-1].StackPointer] == 0)
0x3f6: IF (Stack[-1] == 0) GOTO 0x409; Pop(1)

0x3f7: Push((int) 272)
0x3f8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3f9: IF (Stack[-1] == 0) GOTO 0x400; Pop(1)

0x3fa: @ HideCursor()
0x3fb: Pop(0)
0x3fc: PushEmpty()
0x3fd: Call2 0x397

0x3fe: Pop(0)
0x3ff: GOTO 0x408

0x400: Push((int) 274)
0x401: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x402: IF (Stack[-1] == 0) GOTO 0x408; Pop(1)

0x403: @ HideCursor()
0x404: Pop(0)
0x405: PushEmpty()
0x406: Call2 0x330

0x407: Pop(0)
0x408: GOTO 0x41a

0x409: Push((int) 271)
0x40a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x40b: IF (Stack[-1] == 0) GOTO 0x412; Pop(1)

0x40c: @ HideCursor()
0x40d: Pop(0)
0x40e: PushEmpty()
0x40f: Call2 0x2b2

0x410: Pop(0)
0x411: GOTO 0x41a

0x412: Push((int) 273)
0x413: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x414: IF (Stack[-1] == 0) GOTO 0x41a; Pop(1)

0x415: @ HideCursor()
0x416: Pop(0)
0x417: PushEmpty()
0x418: Call2 0x2f1

0x419: Pop(0)
0x41a: Return(); Pop(0)

0x41b: PushEmpty()
0x41c: Pop(0); Push((bool) Stack[14 + Tasks[-1].StackPointer] == 0)
0x41d: IF (Stack[-1] == 0) GOTO 0x440; Pop(1)

0x41e: Push((int) 267)
0x41f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x420: IF (Stack[-1] == 0) GOTO 0x427; Pop(1)

0x421: @ HideCursor()
0x422: Pop(0)
0x423: PushEmpty()
0x424: Call2 0x397

0x425: Pop(0)
0x426: GOTO 0x43f

0x427: Push((int) 268)
0x428: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x429: IF (Stack[-1] == 0) GOTO 0x430; Pop(1)

0x42a: @ HideCursor()
0x42b: Pop(0)
0x42c: PushEmpty()
0x42d: Call2 0x330

0x42e: Pop(0)
0x42f: GOTO 0x43f

0x430: Push((int) 256)
0x431: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x432: IF (Stack[-1] == 0) GOTO 0x43f; Pop(1)

0x433: PushEmpty(string)
0x434: Call2 0x38d

0x435: Pop(0)
0x436: Push("")
0x437: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x438: IF (Stack[-1] == 0) GOTO 0x43f; Pop(1)

0x439: Push((int) 2)
0x43a: PushEmpty(string)
0x43b: Call2 0x38d

0x43c: Pop(0)
0x43d: @ SendMessage(Stack[-2], Stack[-1])
0x43e: Pop(2)
0x43f: GOTO 0x461

0x440: Push((int) 270)
0x441: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x442: IF (Stack[-1] == 0) GOTO 0x449; Pop(1)

0x443: @ HideCursor()
0x444: Pop(0)
0x445: PushEmpty()
0x446: Call2 0x2b2

0x447: Pop(0)
0x448: GOTO 0x461

0x449: Push((int) 269)
0x44a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x44b: IF (Stack[-1] == 0) GOTO 0x452; Pop(1)

0x44c: @ HideCursor()
0x44d: Pop(0)
0x44e: PushEmpty()
0x44f: Call2 0x2f1

0x450: Pop(0)
0x451: GOTO 0x461

0x452: Push((int) 256)
0x453: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x454: IF (Stack[-1] == 0) GOTO 0x461; Pop(1)

0x455: PushEmpty(string)
0x456: Call2 0x392

0x457: Pop(0)
0x458: Push("")
0x459: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x45a: IF (Stack[-1] == 0) GOTO 0x461; Pop(1)

0x45b: Push((int) 2)
0x45c: PushEmpty(string)
0x45d: Call2 0x392

0x45e: Pop(0)
0x45f: @ SendMessage(Stack[-2], Stack[-1])
0x460: Pop(2)
0x461: Return(); Pop(0)

0x462: PushEmpty(int, int)
0x463: Push("BurahCompleted")
0x464: Push((int) 0)
0x465: @ GetRegistryData(Stack[-3], Stack[-2], Stack[-1])
0x466: Pop(2)
0x467: Push((int) 0)
0x468: Stack[-4] = Stack[-2] != Stack[-1]; Pop(1);
0x469: Return(); Pop(2)

0x46a: PushEmpty(int, int)
0x46b: Push("DankoCompleted")
0x46c: Push((int) 0)
0x46d: @ GetRegistryData(Stack[-3], Stack[-2], Stack[-1])
0x46e: Pop(2)
0x46f: Push((int) 0)
0x470: Stack[-4] = Stack[-2] != Stack[-1]; Pop(1);
0x471: Return(); Pop(2)

