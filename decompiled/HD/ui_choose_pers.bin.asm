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
	SetCursor (1 args)
	SetBackground (1 args)
	PlaySound (1 args)
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
		EVENT_100 Op = 0x140 Vars = (int)
		EVENT_200 Op = 0x148 Vars = (int, string, object)
		EVENT_102 Op = 0x3e7 Vars = (int)
		EVENT_101 Op = 0x40e Vars = (int)


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

0x6d: PushEmpty(bool)
0x6e: Stack[-1] = (bool) 1
0x6f: Call2 0x82

0x70: Pop(1)
0x71: Return(); Pop(0)

0x72: PushEmpty(object, object)
0x73: Push("game_buttons.xml")
0x74: Push((bool) 0)
0x75: @ CreateWindow(Stack[-2], Stack[-1], Stack[-3])
0x76: Pop(2)
0x77: Stack[-3] = Stack[-1]
0x78: Return(); Pop(2)

0x79: Stack[-1] = 0
0x7a: PushEmpty(object, object)
0x7b: Push("game_logo.xml")
0x7c: Push((bool) 0)
0x7d: @ CreateWindow(Stack[-2], Stack[-1], Stack[-3])
0x7e: Pop(2)
0x7f: Stack[-3] = Stack[-1]
0x80: Return(); Pop(2)

0x81: Stack[-1] = 0
0x82: PushEmpty(bool, bool, bool, string, bool, bool, bool, string)
0x83: Stack[14 + Tasks[-1].StackPointer] = Stack[-9]
0x84: @ CaptureKeyboard()
0x85: Pop(0)
0x86: Stack[2 + Tasks[-1].StackPointer] = (int)0
0x87: @ GetWindowSize(Stack[-0], Stack[-1])
0x88: Pop(0)
0x89: Push("default")
0x8a: @ SetCursor(Stack[-1])
0x8b: Pop(1)
0x8c: Push("default")
0x8d: @ SetBackground(Stack[-1])
0x8e: Pop(1)
0x8f: Push("menumusic")
0x90: @ PlaySound(Stack[-1])
0x91: Pop(1)
0x92: Push((bool) 1)
0x93: @ ShowCursor(Stack[-1])
0x94: Pop(1)
0x95: PushEmpty(string)
0x96: Stack[-1] = ""
0x97: Call2 0x382

0x98: Pop(1)
0x99: PushEmpty(string)
0x9a: Stack[-1] = ""
0x9b: Call2 0x387

0x9c: Pop(1)
0x9d: Push(Stack[-9])
0x9e: IF (Stack[-1] == 0) GOTO 0xa4; Pop(1)

0x9f: Push("game_choose_pers.xml")
0xa0: Push((bool) 0)
0xa1: @ CreateWindow(Stack[-2], Stack[-1], Stack[-5])
0xa2: Pop(2)
0xa3: GOTO 0xac

0xa4: PushEmpty(object)
0xa5: Call2 0x72

0xa6: Stack[3 + Tasks[-1].StackPointer] = Stack[-1]
0xa7: Pop(1)
0xa8: PushEmpty(object)
0xa9: Call2 0x7a

0xaa: Stack[4 + Tasks[-1].StackPointer] = Stack[-1]
0xab: Pop(1)
0xac: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0xad: IF (Stack[-1] == 0) GOTO 0xb1; Pop(1)

0xae: @ ProcessEvents()
0xaf: Pop(0)
0xb0: GOTO 0xac

0xb1: PushEmpty()
0xb2: Call2 0x268

0xb3: Pop(0)
0xb4: Push((int) 1)
0xb5: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] == Stack[-1])
0xb6: IF (Stack[-1] == 0) GOTO 0xd2; Pop(1)

0xb7: Push("menumusic")
0xb8: @ PauseSound(Stack[-1])
0xb9: Pop(1)
0xba: PushEmpty(int)
0xbb: Stack[-1] = (int) 1
0xbc: Push(-1, 1); TaskCall(1)
0xbd: Call2 0x59

0xbe: Pop(-1, 1); TaskReturn
0xbf: Pop(1)
0xc0: PushEmpty(string, bool)
0xc1: Stack[-2] = "intro_danko.wmv"
0xc2: Stack[-1] = (bool) 1
0xc3: Push(-2, 4); TaskCall(0)
0xc4: Call2 0x0

0xc5: Pop(-2, 4); TaskReturn
0xc6: Pop(2)
0xc7: @ RemoveWorld()
0xc8: Pop(0)
0xc9: @ UISync()
0xca: Pop(0)
0xcb: @ DestroyWindow()
0xcc: Pop(0)
0xcd: Push("world_danko.xml")
0xce: Push("player_danko.xml")
0xcf: @ NewGame(Stack[-2], Stack[-1])
0xd0: Pop(2)
0xd1: GOTO 0x13f

0xd2: Push((int) 2)
0xd3: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] == Stack[-1])
0xd4: IF (Stack[-1] == 0) GOTO 0xf0; Pop(1)

0xd5: Push("menumusic")
0xd6: @ PauseSound(Stack[-1])
0xd7: Pop(1)
0xd8: PushEmpty(int)
0xd9: Stack[-1] = (int) 2
0xda: Push(-1, 1); TaskCall(1)
0xdb: Call2 0x59

0xdc: Pop(-1, 1); TaskReturn
0xdd: Pop(1)
0xde: PushEmpty(string, bool)
0xdf: Stack[-2] = "intro_burah.wmv"
0xe0: Stack[-1] = (bool) 1
0xe1: Push(-2, 4); TaskCall(0)
0xe2: Call2 0x0

0xe3: Pop(-2, 4); TaskReturn
0xe4: Pop(2)
0xe5: @ RemoveWorld()
0xe6: Pop(0)
0xe7: @ UISync()
0xe8: Pop(0)
0xe9: @ DestroyWindow()
0xea: Pop(0)
0xeb: Push("world_burah.xml")
0xec: Push("player_burah.xml")
0xed: @ NewGame(Stack[-2], Stack[-1])
0xee: Pop(2)
0xef: GOTO 0x13f

0xf0: Push((int) 3)
0xf1: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] == Stack[-1])
0xf2: IF (Stack[-1] == 0) GOTO 0x10e; Pop(1)

0xf3: Push("menumusic")
0xf4: @ PauseSound(Stack[-1])
0xf5: Pop(1)
0xf6: PushEmpty(int)
0xf7: Stack[-1] = (int) 3
0xf8: Push(-1, 1); TaskCall(1)
0xf9: Call2 0x59

0xfa: Pop(-1, 1); TaskReturn
0xfb: Pop(1)
0xfc: PushEmpty(string, bool)
0xfd: Stack[-2] = "intro_klara.wmv"
0xfe: Stack[-1] = (bool) 1
0xff: Push(-2, 4); TaskCall(0)
0x100: Call2 0x0

0x101: Pop(-2, 4); TaskReturn
0x102: Pop(2)
0x103: @ RemoveWorld()
0x104: Pop(0)
0x105: @ UISync()
0x106: Pop(0)
0x107: @ DestroyWindow()
0x108: Pop(0)
0x109: Push("world_klara.xml")
0x10a: Push("player_klara.xml")
0x10b: @ NewGame(Stack[-2], Stack[-1])
0x10c: Pop(2)
0x10d: GOTO 0x13f

0x10e: Push((int) 4)
0x10f: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] == Stack[-1])
0x110: IF (Stack[-1] == 0) GOTO 0x121; Pop(1)

0x111: Push("menumusic")
0x112: @ PauseSound(Stack[-1])
0x113: Pop(1)
0x114: Push("Loading : ")
0x115: Pop(1); Push(Stack[-1] + Stack[10 + StackPtr]);
0x116: @ Trace(Stack[-1])
0x117: Pop(1)
0x118: @ RemoveWorld()
0x119: Pop(0)
0x11a: @ UISync()
0x11b: Pop(0)
0x11c: @ DestroyWindow()
0x11d: Pop(0)
0x11e: @ LoadGame(Stack[-4], Stack[-10])
0x11f: Pop(0)
0x120: GOTO 0x13f

0x121: Push((int) 5)
0x122: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] == Stack[-1])
0x123: IF (Stack[-1] == 0) GOTO 0x132; Pop(1)

0x124: Pop(0); Push((bool) Stack[9 + Tasks[-1].StackPointer] == 0)
0x125: IF (Stack[-1] == 0) GOTO 0x12b; Pop(1)

0x126: @ DestroyWindow()
0x127: Pop(0)
0x128: @ SaveGame(Stack[-3])
0x129: Pop(0)
0x12a: GOTO 0x131

0x12b: @ DestroyWindow()
0x12c: Pop(0)
0x12d: @@ GetFileName(Stack[-1])
0x12e: Pop(0)
0x12f: @ SaveGame(Stack[-2], Stack[-1])
0x130: Pop(0)
0x131: GOTO 0x13f

0x132: Push((int) 7)
0x133: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] == Stack[-1])
0x134: IF (Stack[-1] == 0) GOTO 0x13f; Pop(1)

0x135: @ RemoveWorld()
0x136: Pop(0)
0x137: @ UISync()
0x138: Pop(0)
0x139: @ DestroyWindow()
0x13a: Pop(0)
0x13b: Push("world_intro.xml")
0x13c: Push("player_intro.xml")
0x13d: @ NewGame(Stack[-2], Stack[-1])
0x13e: Pop(2)
0x13f: Return(); Pop(8)

0x140: PushEmpty()
0x141: Push((int) 27)
0x142: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x143: IF (Stack[-1] == 0) GOTO 0x147; Pop(1)

0x144: PushEmpty()
0x145: Call2 0x258

0x146: Pop(0)
0x147: Return(); Pop(0)

0x148: PushEmpty()
0x149: Push("newgame")
0x14a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x14b: IF (Stack[-1] == 0) GOTO 0x150; Pop(1)

0x14c: Stack[2 + Tasks[-1].StackPointer] = (int)7
0x14d: @ StopEventProcessing()
0x14e: Pop(0)
0x14f: GOTO 0x257

0x150: Push("quitgame")
0x151: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x152: IF (Stack[-1] == 0) GOTO 0x15a; Pop(1)

0x153: Push("Quit game")
0x154: @ UITrace(Stack[-1])
0x155: Pop(1)
0x156: @ Quit()
0x157: Pop(0)
0x158: Return(); Pop(0)

0x159: GOTO 0x257

0x15a: Push("loadgame")
0x15b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x15c: IF (Stack[-1] == 0) GOTO 0x166; Pop(1)

0x15d: PushEmpty()
0x15e: Call2 0x268

0x15f: Pop(0)
0x160: Push("load.xml")
0x161: Push((bool) 0)
0x162: @ CreateWindow(Stack[-2], Stack[-1], Stack[-6])
0x163: Pop(2)
0x164: Return(); Pop(0)

0x165: GOTO 0x257

0x166: Push("savegame")
0x167: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x168: IF (Stack[-1] == 0) GOTO 0x172; Pop(1)

0x169: PushEmpty()
0x16a: Call2 0x268

0x16b: Pop(0)
0x16c: Push("save.xml")
0x16d: Push((bool) 0)
0x16e: @ CreateWindow(Stack[-2], Stack[-1], Stack[-7])
0x16f: Pop(2)
0x170: Return(); Pop(0)

0x171: GOTO 0x257

0x172: Push("gameoptions")
0x173: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x174: IF (Stack[-1] == 0) GOTO 0x17e; Pop(1)

0x175: PushEmpty()
0x176: Call2 0x268

0x177: Pop(0)
0x178: Push("options.xml")
0x179: Push((bool) 0)
0x17a: @ CreateWindow(Stack[-2], Stack[-1], Stack[-8])
0x17b: Pop(2)
0x17c: Return(); Pop(0)

0x17d: GOTO 0x257

0x17e: Push("continue")
0x17f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x180: IF (Stack[-1] == 0) GOTO 0x186; Pop(1)

0x181: Stack[2 + Tasks[-1].StackPointer] = (int)6
0x182: @ StopEventProcessing()
0x183: Pop(0)
0x184: Return(); Pop(0)

0x185: GOTO 0x257

0x186: Push("credits")
0x187: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x188: IF (Stack[-1] == 0) GOTO 0x1a4; Pop(1)

0x189: PushEmpty()
0x18a: Call2 0x268

0x18b: Pop(0)
0x18c: PushEmpty(int)
0x18d: Stack[-1] = (int) 8
0x18e: Push(-1, 1); TaskCall(1)
0x18f: Call2 0x59

0x190: Pop(-1, 1); TaskReturn
0x191: Pop(1)
0x192: PushEmpty(object)
0x193: Call2 0x72

0x194: Stack[3 + Tasks[-1].StackPointer] = Stack[-1]
0x195: Pop(1)
0x196: PushEmpty(object)
0x197: Call2 0x7a

0x198: Stack[4 + Tasks[-1].StackPointer] = Stack[-1]
0x199: Pop(1)
0x19a: Push((bool) 1)
0x19b: @ ShowCursor(Stack[-1])
0x19c: Pop(1)
0x19d: @ CaptureKeyboard()
0x19e: Pop(0)
0x19f: PushEmpty(string)
0x1a0: Stack[-1] = ""
0x1a1: Call2 0x382

0x1a2: Pop(1)
0x1a3: GOTO 0x257

0x1a4: Push("danko")
0x1a5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1a6: IF (Stack[-1] == 0) GOTO 0x1c7; Pop(1)

0x1a7: Push((int) 0)
0x1a8: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1a9: IF (Stack[-1] == 0) GOTO 0x1ae; Pop(1)

0x1aa: Stack[2 + Tasks[-1].StackPointer] = (int)1
0x1ab: @ StopEventProcessing()
0x1ac: Pop(0)
0x1ad: GOTO 0x1c5

0x1ae: Push((int) 1)
0x1af: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1b0: IF (Stack[-1] == 0) GOTO 0x1ba; Pop(1)

0x1b1: Push((int) 202)
0x1b2: Push("player_name")
0x1b3: @ SendMessage(Stack[-2], Stack[-1])
0x1b4: Pop(2)
0x1b5: Push((int) 203)
0x1b6: Push("player_desc")
0x1b7: @ SendMessage(Stack[-2], Stack[-1])
0x1b8: Pop(2)
0x1b9: GOTO 0x1c5

0x1ba: Push((int) 2)
0x1bb: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1bc: IF (Stack[-1] == 0) GOTO 0x1c5; Pop(1)

0x1bd: Push((int) -1)
0x1be: Push("player_name")
0x1bf: @ SendMessage(Stack[-2], Stack[-1])
0x1c0: Pop(2)
0x1c1: Push((int) -1)
0x1c2: Push("player_desc")
0x1c3: @ SendMessage(Stack[-2], Stack[-1])
0x1c4: Pop(2)
0x1c5: Return(); Pop(0)

0x1c6: GOTO 0x257

0x1c7: Push("burah")
0x1c8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1c9: IF (Stack[-1] == 0) GOTO 0x1ea; Pop(1)

0x1ca: Push((int) 0)
0x1cb: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1cc: IF (Stack[-1] == 0) GOTO 0x1d1; Pop(1)

0x1cd: Stack[2 + Tasks[-1].StackPointer] = (int)2
0x1ce: @ StopEventProcessing()
0x1cf: Pop(0)
0x1d0: GOTO 0x1e8

0x1d1: Push((int) 1)
0x1d2: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1d3: IF (Stack[-1] == 0) GOTO 0x1dd; Pop(1)

0x1d4: Push((int) 205)
0x1d5: Push("player_name")
0x1d6: @ SendMessage(Stack[-2], Stack[-1])
0x1d7: Pop(2)
0x1d8: Push((int) 206)
0x1d9: Push("player_desc")
0x1da: @ SendMessage(Stack[-2], Stack[-1])
0x1db: Pop(2)
0x1dc: GOTO 0x1e8

0x1dd: Push((int) 2)
0x1de: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1df: IF (Stack[-1] == 0) GOTO 0x1e8; Pop(1)

0x1e0: Push((int) -1)
0x1e1: Push("player_name")
0x1e2: @ SendMessage(Stack[-2], Stack[-1])
0x1e3: Pop(2)
0x1e4: Push((int) -1)
0x1e5: Push("player_desc")
0x1e6: @ SendMessage(Stack[-2], Stack[-1])
0x1e7: Pop(2)
0x1e8: Return(); Pop(0)

0x1e9: GOTO 0x257

0x1ea: Push("klara")
0x1eb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1ec: IF (Stack[-1] == 0) GOTO 0x22f; Pop(1)

0x1ed: Push((int) 0)
0x1ee: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1ef: IF (Stack[-1] == 0) GOTO 0x203; Pop(1)

0x1f0: PushEmpty(bool)
0x1f1: Stack[-1] = (bool) 0
0x1f2: PushEmpty(bool)
0x1f3: Call2 0x45d

0x1f4: Pop(0)
0x1f5: Pop(1); Push((bool) Stack[-1] == 0)
0x1f6: IF (Stack[-1] == 0) GOTO 0x1fd; Pop(1)

0x1f7: PushEmpty(bool)
0x1f8: Call2 0x455

0x1f9: Pop(0)
0x1fa: Pop(1); Push((bool) Stack[-1] == 0)
0x1fb: IF (Stack[-1] == 0) GOTO 0x1fd; Pop(1)

0x1fc: Stack[-1] = (bool) 1
0x1fd: IF (Stack[-1] == 0) GOTO 0x1ff; Pop(1)

0x1fe: Return(); Pop(0)

0x1ff: Stack[2 + Tasks[-1].StackPointer] = (int)3
0x200: @ StopEventProcessing()
0x201: Pop(0)
0x202: GOTO 0x22d

0x203: Push((int) 1)
0x204: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x205: IF (Stack[-1] == 0) GOTO 0x222; Pop(1)

0x206: Push((int) 208)
0x207: Push("player_name")
0x208: @ SendMessage(Stack[-2], Stack[-1])
0x209: Pop(2)
0x20a: PushEmpty(bool)
0x20b: Stack[-1] = (bool) 0
0x20c: PushEmpty(bool)
0x20d: Call2 0x45d

0x20e: Pop(0)
0x20f: Pop(1); Push((bool) Stack[-1] == 0)
0x210: IF (Stack[-1] == 0) GOTO 0x217; Pop(1)

0x211: PushEmpty(bool)
0x212: Call2 0x455

0x213: Pop(0)
0x214: Pop(1); Push((bool) Stack[-1] == 0)
0x215: IF (Stack[-1] == 0) GOTO 0x217; Pop(1)

0x216: Stack[-1] = (bool) 1
0x217: IF (Stack[-1] == 0) GOTO 0x21d; Pop(1)

0x218: Push((int) 213)
0x219: Push("player_desc")
0x21a: @ SendMessage(Stack[-2], Stack[-1])
0x21b: Pop(2)
0x21c: GOTO 0x221

0x21d: Push((int) 209)
0x21e: Push("player_desc")
0x21f: @ SendMessage(Stack[-2], Stack[-1])
0x220: Pop(2)
0x221: GOTO 0x22d

0x222: Push((int) 2)
0x223: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x224: IF (Stack[-1] == 0) GOTO 0x22d; Pop(1)

0x225: Push((int) -1)
0x226: Push("player_name")
0x227: @ SendMessage(Stack[-2], Stack[-1])
0x228: Pop(2)
0x229: Push((int) -1)
0x22a: Push("player_desc")
0x22b: @ SendMessage(Stack[-2], Stack[-1])
0x22c: Pop(2)
0x22d: Return(); Pop(0)

0x22e: GOTO 0x257

0x22f: Push("load")
0x230: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x231: IF (Stack[-1] == 0) GOTO 0x240; Pop(1)

0x232: Push((int) 0)
0x233: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x234: IF (Stack[-1] == 0) GOTO 0x23b; Pop(1)

0x235: Stack[2 + Tasks[-1].StackPointer] = (int)4
0x236: @@ GetFileName(Stack[-10])
0x237: Pop(0)
0x238: @ StopEventProcessing()
0x239: Pop(0)
0x23a: GOTO 0x23e

0x23b: PushEmpty()
0x23c: Call2 0x258

0x23d: Pop(0)
0x23e: Return(); Pop(0)

0x23f: GOTO 0x257

0x240: Push("save")
0x241: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x242: IF (Stack[-1] == 0) GOTO 0x250; Pop(1)

0x243: Push((int) 0)
0x244: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x245: IF (Stack[-1] == 0) GOTO 0x24b; Pop(1)

0x246: Stack[2 + Tasks[-1].StackPointer] = (int)5
0x247: Stack[9 + Tasks[-1].StackPointer] = Stack[-1]
0x248: @ StopEventProcessing()
0x249: Pop(0)
0x24a: GOTO 0x24e

0x24b: PushEmpty()
0x24c: Call2 0x258

0x24d: Pop(0)
0x24e: Return(); Pop(0)

0x24f: GOTO 0x257

0x250: Push("options")
0x251: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x252: IF (Stack[-1] == 0) GOTO 0x257; Pop(1)

0x253: PushEmpty()
0x254: Call2 0x258

0x255: Pop(0)
0x256: Return(); Pop(0)

0x257: Return(); Pop(0)

0x258: PushEmpty(string)
0x259: Stack[-1] = ""
0x25a: Call2 0x382

0x25b: Pop(1)
0x25c: PushEmpty()
0x25d: Call2 0x268

0x25e: Pop(0)
0x25f: PushEmpty(object)
0x260: Call2 0x72

0x261: Stack[3 + Tasks[-1].StackPointer] = Stack[-1]
0x262: Pop(1)
0x263: PushEmpty(object)
0x264: Call2 0x7a

0x265: Stack[4 + Tasks[-1].StackPointer] = Stack[-1]
0x266: Pop(1)
0x267: Return(); Pop(0)

0x268: Push( Stack[3 + Tasks[-1].StackPointer] )
0x269: IF (Stack[-1] == 0) GOTO 0x26c; Pop(1)

0x26a: @@ DestroyWindow()
0x26b: Pop(0)
0x26c: Push( Stack[4 + Tasks[-1].StackPointer] )
0x26d: IF (Stack[-1] == 0) GOTO 0x270; Pop(1)

0x26e: @@ DestroyWindow()
0x26f: Pop(0)
0x270: Push( Stack[5 + Tasks[-1].StackPointer] )
0x271: IF (Stack[-1] == 0) GOTO 0x274; Pop(1)

0x272: @@ DestroyWindow()
0x273: Pop(0)
0x274: Push( Stack[6 + Tasks[-1].StackPointer] )
0x275: IF (Stack[-1] == 0) GOTO 0x278; Pop(1)

0x276: @@ DestroyWindow()
0x277: Pop(0)
0x278: Push( Stack[7 + Tasks[-1].StackPointer] )
0x279: IF (Stack[-1] == 0) GOTO 0x27c; Pop(1)

0x27a: @@ DestroyWindow()
0x27b: Pop(0)
0x27c: Push( Stack[8 + Tasks[-1].StackPointer] )
0x27d: IF (Stack[-1] == 0) GOTO 0x280; Pop(1)

0x27e: @@ DestroyWindow()
0x27f: Pop(0)
0x280: @ CaptureKeyboard()
0x281: Pop(0)
0x282: Return(); Pop(0)

0x283: Push((int) 0)
0x284: Push("newgame")
0x285: @ SendMessage(Stack[-2], Stack[-1])
0x286: Pop(2)
0x287: Push((int) 0)
0x288: Push("loadgame")
0x289: @ SendMessage(Stack[-2], Stack[-1])
0x28a: Pop(2)
0x28b: Push((int) 0)
0x28c: Push("gameoptions")
0x28d: @ SendMessage(Stack[-2], Stack[-1])
0x28e: Pop(2)
0x28f: Push((int) 0)
0x290: Push("credits")
0x291: @ SendMessage(Stack[-2], Stack[-1])
0x292: Pop(2)
0x293: Push((int) 0)
0x294: Push("quitgame")
0x295: @ SendMessage(Stack[-2], Stack[-1])
0x296: Pop(2)
0x297: Return(); Pop(0)

0x298: Push((int) 0)
0x299: Push("danko")
0x29a: @ SendMessage(Stack[-2], Stack[-1])
0x29b: Pop(2)
0x29c: Push((int) 0)
0x29d: Push("burah")
0x29e: @ SendMessage(Stack[-2], Stack[-1])
0x29f: Pop(2)
0x2a0: Push((int) 0)
0x2a1: Push("klara")
0x2a2: @ SendMessage(Stack[-2], Stack[-1])
0x2a3: Pop(2)
0x2a4: Return(); Pop(0)

0x2a5: PushEmpty()
0x2a6: Call2 0x298

0x2a7: Pop(0)
0x2a8: PushEmpty(string)
0x2a9: Call2 0x385

0x2aa: Pop(0)
0x2ab: Push("")
0x2ac: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x2ad: IF (Stack[-1] == 0) GOTO 0x2b7; Pop(1)

0x2ae: Push((int) 1)
0x2af: Push("danko")
0x2b0: @ SendMessage(Stack[-2], Stack[-1])
0x2b1: Pop(2)
0x2b2: PushEmpty(string)
0x2b3: Stack[-1] = "danko"
0x2b4: Call2 0x387

0x2b5: Pop(1)
0x2b6: GOTO 0x2e3

0x2b7: PushEmpty(string)
0x2b8: Call2 0x385

0x2b9: Pop(0)
0x2ba: Push("danko")
0x2bb: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x2bc: IF (Stack[-1] == 0) GOTO 0x2c6; Pop(1)

0x2bd: Push((int) 1)
0x2be: Push("burah")
0x2bf: @ SendMessage(Stack[-2], Stack[-1])
0x2c0: Pop(2)
0x2c1: PushEmpty(string)
0x2c2: Stack[-1] = "burah"
0x2c3: Call2 0x387

0x2c4: Pop(1)
0x2c5: GOTO 0x2e3

0x2c6: PushEmpty(string)
0x2c7: Call2 0x385

0x2c8: Pop(0)
0x2c9: Push("burah")
0x2ca: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x2cb: IF (Stack[-1] == 0) GOTO 0x2d5; Pop(1)

0x2cc: Push((int) 1)
0x2cd: Push("klara")
0x2ce: @ SendMessage(Stack[-2], Stack[-1])
0x2cf: Pop(2)
0x2d0: PushEmpty(string)
0x2d1: Stack[-1] = "klara"
0x2d2: Call2 0x387

0x2d3: Pop(1)
0x2d4: GOTO 0x2e3

0x2d5: PushEmpty(string)
0x2d6: Call2 0x385

0x2d7: Pop(0)
0x2d8: Push("klara")
0x2d9: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x2da: IF (Stack[-1] == 0) GOTO 0x2e3; Pop(1)

0x2db: Push((int) 1)
0x2dc: Push("danko")
0x2dd: @ SendMessage(Stack[-2], Stack[-1])
0x2de: Pop(2)
0x2df: PushEmpty(string)
0x2e0: Stack[-1] = "danko"
0x2e1: Call2 0x387

0x2e2: Pop(1)
0x2e3: Return(); Pop(0)

0x2e4: PushEmpty()
0x2e5: Call2 0x298

0x2e6: Pop(0)
0x2e7: PushEmpty(string)
0x2e8: Call2 0x385

0x2e9: Pop(0)
0x2ea: Push("")
0x2eb: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x2ec: IF (Stack[-1] == 0) GOTO 0x2f6; Pop(1)

0x2ed: Push((int) 1)
0x2ee: Push("klara")
0x2ef: @ SendMessage(Stack[-2], Stack[-1])
0x2f0: Pop(2)
0x2f1: PushEmpty(string)
0x2f2: Stack[-1] = "klara"
0x2f3: Call2 0x387

0x2f4: Pop(1)
0x2f5: GOTO 0x322

0x2f6: PushEmpty(string)
0x2f7: Call2 0x385

0x2f8: Pop(0)
0x2f9: Push("klara")
0x2fa: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x2fb: IF (Stack[-1] == 0) GOTO 0x305; Pop(1)

0x2fc: Push((int) 1)
0x2fd: Push("burah")
0x2fe: @ SendMessage(Stack[-2], Stack[-1])
0x2ff: Pop(2)
0x300: PushEmpty(string)
0x301: Stack[-1] = "burah"
0x302: Call2 0x387

0x303: Pop(1)
0x304: GOTO 0x322

0x305: PushEmpty(string)
0x306: Call2 0x385

0x307: Pop(0)
0x308: Push("burah")
0x309: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x30a: IF (Stack[-1] == 0) GOTO 0x314; Pop(1)

0x30b: Push((int) 1)
0x30c: Push("danko")
0x30d: @ SendMessage(Stack[-2], Stack[-1])
0x30e: Pop(2)
0x30f: PushEmpty(string)
0x310: Stack[-1] = "danko"
0x311: Call2 0x387

0x312: Pop(1)
0x313: GOTO 0x322

0x314: PushEmpty(string)
0x315: Call2 0x385

0x316: Pop(0)
0x317: Push("danko")
0x318: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x319: IF (Stack[-1] == 0) GOTO 0x322; Pop(1)

0x31a: Push((int) 1)
0x31b: Push("klara")
0x31c: @ SendMessage(Stack[-2], Stack[-1])
0x31d: Pop(2)
0x31e: PushEmpty(string)
0x31f: Stack[-1] = "klara"
0x320: Call2 0x387

0x321: Pop(1)
0x322: Return(); Pop(0)

0x323: PushEmpty()
0x324: Call2 0x283

0x325: Pop(0)
0x326: PushEmpty(string)
0x327: Call2 0x380

0x328: Pop(0)
0x329: Push("")
0x32a: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x32b: IF (Stack[-1] == 0) GOTO 0x335; Pop(1)

0x32c: Push((int) 1)
0x32d: Push("newgame")
0x32e: @ SendMessage(Stack[-2], Stack[-1])
0x32f: Pop(2)
0x330: PushEmpty(string)
0x331: Stack[-1] = "newgame"
0x332: Call2 0x382

0x333: Pop(1)
0x334: GOTO 0x37f

0x335: PushEmpty(string)
0x336: Call2 0x380

0x337: Pop(0)
0x338: Push("newgame")
0x339: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x33a: IF (Stack[-1] == 0) GOTO 0x344; Pop(1)

0x33b: Push((int) 1)
0x33c: Push("loadgame")
0x33d: @ SendMessage(Stack[-2], Stack[-1])
0x33e: Pop(2)
0x33f: PushEmpty(string)
0x340: Stack[-1] = "loadgame"
0x341: Call2 0x382

0x342: Pop(1)
0x343: GOTO 0x37f

0x344: PushEmpty(string)
0x345: Call2 0x380

0x346: Pop(0)
0x347: Push("loadgame")
0x348: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x349: IF (Stack[-1] == 0) GOTO 0x353; Pop(1)

0x34a: Push((int) 1)
0x34b: Push("gameoptions")
0x34c: @ SendMessage(Stack[-2], Stack[-1])
0x34d: Pop(2)
0x34e: PushEmpty(string)
0x34f: Stack[-1] = "gameoptions"
0x350: Call2 0x382

0x351: Pop(1)
0x352: GOTO 0x37f

0x353: PushEmpty(string)
0x354: Call2 0x380

0x355: Pop(0)
0x356: Push("gameoptions")
0x357: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x358: IF (Stack[-1] == 0) GOTO 0x362; Pop(1)

0x359: Push((int) 1)
0x35a: Push("credits")
0x35b: @ SendMessage(Stack[-2], Stack[-1])
0x35c: Pop(2)
0x35d: PushEmpty(string)
0x35e: Stack[-1] = "credits"
0x35f: Call2 0x382

0x360: Pop(1)
0x361: GOTO 0x37f

0x362: PushEmpty(string)
0x363: Call2 0x380

0x364: Pop(0)
0x365: Push("credits")
0x366: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x367: IF (Stack[-1] == 0) GOTO 0x371; Pop(1)

0x368: Push((int) 1)
0x369: Push("quitgame")
0x36a: @ SendMessage(Stack[-2], Stack[-1])
0x36b: Pop(2)
0x36c: PushEmpty(string)
0x36d: Stack[-1] = "quitgame"
0x36e: Call2 0x382

0x36f: Pop(1)
0x370: GOTO 0x37f

0x371: PushEmpty(string)
0x372: Call2 0x380

0x373: Pop(0)
0x374: Push("quitgame")
0x375: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x376: IF (Stack[-1] == 0) GOTO 0x37f; Pop(1)

0x377: Push((int) 1)
0x378: Push("newgame")
0x379: @ SendMessage(Stack[-2], Stack[-1])
0x37a: Pop(2)
0x37b: PushEmpty(string)
0x37c: Stack[-1] = "newgame"
0x37d: Call2 0x382

0x37e: Pop(1)
0x37f: Return(); Pop(0)

0x380: Stack[-1] = Stack[11 + Tasks[-1].StackPointer]
0x381: Return(); Pop(0)

0x382: PushEmpty()
0x383: Stack[11 + Tasks[-1].StackPointer] = Stack[-1]
0x384: Return(); Pop(0)

0x385: Stack[-1] = Stack[12 + Tasks[-1].StackPointer]
0x386: Return(); Pop(0)

0x387: PushEmpty()
0x388: Stack[12 + Tasks[-1].StackPointer] = Stack[-1]
0x389: Return(); Pop(0)

0x38a: PushEmpty()
0x38b: Call2 0x283

0x38c: Pop(0)
0x38d: PushEmpty(string)
0x38e: Call2 0x380

0x38f: Pop(0)
0x390: Push("")
0x391: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x392: IF (Stack[-1] == 0) GOTO 0x39c; Pop(1)

0x393: Push((int) 1)
0x394: Push("quitgame")
0x395: @ SendMessage(Stack[-2], Stack[-1])
0x396: Pop(2)
0x397: PushEmpty(string)
0x398: Stack[-1] = "quitgame"
0x399: Call2 0x382

0x39a: Pop(1)
0x39b: GOTO 0x3e6

0x39c: PushEmpty(string)
0x39d: Call2 0x380

0x39e: Pop(0)
0x39f: Push("newgame")
0x3a0: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x3a1: IF (Stack[-1] == 0) GOTO 0x3ab; Pop(1)

0x3a2: Push((int) 1)
0x3a3: Push("quitgame")
0x3a4: @ SendMessage(Stack[-2], Stack[-1])
0x3a5: Pop(2)
0x3a6: PushEmpty(string)
0x3a7: Stack[-1] = "quitgame"
0x3a8: Call2 0x382

0x3a9: Pop(1)
0x3aa: GOTO 0x3e6

0x3ab: PushEmpty(string)
0x3ac: Call2 0x380

0x3ad: Pop(0)
0x3ae: Push("loadgame")
0x3af: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x3b0: IF (Stack[-1] == 0) GOTO 0x3ba; Pop(1)

0x3b1: Push((int) 1)
0x3b2: Push("newgame")
0x3b3: @ SendMessage(Stack[-2], Stack[-1])
0x3b4: Pop(2)
0x3b5: PushEmpty(string)
0x3b6: Stack[-1] = "newgame"
0x3b7: Call2 0x382

0x3b8: Pop(1)
0x3b9: GOTO 0x3e6

0x3ba: PushEmpty(string)
0x3bb: Call2 0x380

0x3bc: Pop(0)
0x3bd: Push("gameoptions")
0x3be: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x3bf: IF (Stack[-1] == 0) GOTO 0x3c9; Pop(1)

0x3c0: Push((int) 1)
0x3c1: Push("loadgame")
0x3c2: @ SendMessage(Stack[-2], Stack[-1])
0x3c3: Pop(2)
0x3c4: PushEmpty(string)
0x3c5: Stack[-1] = "loadgame"
0x3c6: Call2 0x382

0x3c7: Pop(1)
0x3c8: GOTO 0x3e6

0x3c9: PushEmpty(string)
0x3ca: Call2 0x380

0x3cb: Pop(0)
0x3cc: Push("credits")
0x3cd: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x3ce: IF (Stack[-1] == 0) GOTO 0x3d8; Pop(1)

0x3cf: Push((int) 1)
0x3d0: Push("gameoptions")
0x3d1: @ SendMessage(Stack[-2], Stack[-1])
0x3d2: Pop(2)
0x3d3: PushEmpty(string)
0x3d4: Stack[-1] = "gameoptions"
0x3d5: Call2 0x382

0x3d6: Pop(1)
0x3d7: GOTO 0x3e6

0x3d8: PushEmpty(string)
0x3d9: Call2 0x380

0x3da: Pop(0)
0x3db: Push("quitgame")
0x3dc: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x3dd: IF (Stack[-1] == 0) GOTO 0x3e6; Pop(1)

0x3de: Push((int) 1)
0x3df: Push("credits")
0x3e0: @ SendMessage(Stack[-2], Stack[-1])
0x3e1: Pop(2)
0x3e2: PushEmpty(string)
0x3e3: Stack[-1] = "credits"
0x3e4: Call2 0x382

0x3e5: Pop(1)
0x3e6: Return(); Pop(0)

0x3e7: PushEmpty()
0x3e8: Pop(0); Push((bool) Stack[14 + Tasks[-1].StackPointer] == 0)
0x3e9: IF (Stack[-1] == 0) GOTO 0x3fc; Pop(1)

0x3ea: Push((int) 272)
0x3eb: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3ec: IF (Stack[-1] == 0) GOTO 0x3f3; Pop(1)

0x3ed: @ HideCursor()
0x3ee: Pop(0)
0x3ef: PushEmpty()
0x3f0: Call2 0x38a

0x3f1: Pop(0)
0x3f2: GOTO 0x3fb

0x3f3: Push((int) 274)
0x3f4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3f5: IF (Stack[-1] == 0) GOTO 0x3fb; Pop(1)

0x3f6: @ HideCursor()
0x3f7: Pop(0)
0x3f8: PushEmpty()
0x3f9: Call2 0x323

0x3fa: Pop(0)
0x3fb: GOTO 0x40d

0x3fc: Push((int) 271)
0x3fd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3fe: IF (Stack[-1] == 0) GOTO 0x405; Pop(1)

0x3ff: @ HideCursor()
0x400: Pop(0)
0x401: PushEmpty()
0x402: Call2 0x2a5

0x403: Pop(0)
0x404: GOTO 0x40d

0x405: Push((int) 273)
0x406: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x407: IF (Stack[-1] == 0) GOTO 0x40d; Pop(1)

0x408: @ HideCursor()
0x409: Pop(0)
0x40a: PushEmpty()
0x40b: Call2 0x2e4

0x40c: Pop(0)
0x40d: Return(); Pop(0)

0x40e: PushEmpty()
0x40f: Pop(0); Push((bool) Stack[14 + Tasks[-1].StackPointer] == 0)
0x410: IF (Stack[-1] == 0) GOTO 0x433; Pop(1)

0x411: Push((int) 267)
0x412: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x413: IF (Stack[-1] == 0) GOTO 0x41a; Pop(1)

0x414: @ HideCursor()
0x415: Pop(0)
0x416: PushEmpty()
0x417: Call2 0x38a

0x418: Pop(0)
0x419: GOTO 0x432

0x41a: Push((int) 268)
0x41b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x41c: IF (Stack[-1] == 0) GOTO 0x423; Pop(1)

0x41d: @ HideCursor()
0x41e: Pop(0)
0x41f: PushEmpty()
0x420: Call2 0x323

0x421: Pop(0)
0x422: GOTO 0x432

0x423: Push((int) 256)
0x424: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x425: IF (Stack[-1] == 0) GOTO 0x432; Pop(1)

0x426: PushEmpty(string)
0x427: Call2 0x380

0x428: Pop(0)
0x429: Push("")
0x42a: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x42b: IF (Stack[-1] == 0) GOTO 0x432; Pop(1)

0x42c: Push((int) 2)
0x42d: PushEmpty(string)
0x42e: Call2 0x380

0x42f: Pop(0)
0x430: @ SendMessage(Stack[-2], Stack[-1])
0x431: Pop(2)
0x432: GOTO 0x454

0x433: Push((int) 270)
0x434: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x435: IF (Stack[-1] == 0) GOTO 0x43c; Pop(1)

0x436: @ HideCursor()
0x437: Pop(0)
0x438: PushEmpty()
0x439: Call2 0x2a5

0x43a: Pop(0)
0x43b: GOTO 0x454

0x43c: Push((int) 269)
0x43d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x43e: IF (Stack[-1] == 0) GOTO 0x445; Pop(1)

0x43f: @ HideCursor()
0x440: Pop(0)
0x441: PushEmpty()
0x442: Call2 0x2e4

0x443: Pop(0)
0x444: GOTO 0x454

0x445: Push((int) 256)
0x446: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x447: IF (Stack[-1] == 0) GOTO 0x454; Pop(1)

0x448: PushEmpty(string)
0x449: Call2 0x385

0x44a: Pop(0)
0x44b: Push("")
0x44c: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x44d: IF (Stack[-1] == 0) GOTO 0x454; Pop(1)

0x44e: Push((int) 2)
0x44f: PushEmpty(string)
0x450: Call2 0x385

0x451: Pop(0)
0x452: @ SendMessage(Stack[-2], Stack[-1])
0x453: Pop(2)
0x454: Return(); Pop(0)

0x455: PushEmpty(int, int)
0x456: Push("BurahCompleted")
0x457: Push((int) 0)
0x458: @ GetRegistryData(Stack[-3], Stack[-2], Stack[-1])
0x459: Pop(2)
0x45a: Push((int) 0)
0x45b: Stack[-4] = Stack[-2] != Stack[-1]; Pop(1);
0x45c: Return(); Pop(2)

0x45d: PushEmpty(int, int)
0x45e: Push("DankoCompleted")
0x45f: Push((int) 0)
0x460: @ GetRegistryData(Stack[-3], Stack[-2], Stack[-1])
0x461: Pop(2)
0x462: Push((int) 0)
0x463: Stack[-4] = Stack[-2] != Stack[-1]; Pop(1);
0x464: Return(); Pop(2)

