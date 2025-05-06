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
	world_danko.xml
	player_danko.xml
	logo_gambitious.wmv
	logo_devolver.wmv
	logo_generalarcade.wmv
	logo_icepick.wmv
	intro.wmv
	game_buttons.xml
	editbox
	get
	game_logo.xml
	default
	menumusic
	game_choose_pers.xml
	intro_danko.wmv
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
	loading map: 

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
	HideCursor (0 args)
	GetRegistryData (3 args)
	LoadMap (2 args)

RunOp = 0x6d
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object, int, int, bool) Params = 2
		EVENT_0 Op = 0x1e Vars = ()
		EVENT_101 Op = 0x38 Vars = (int)
	GTASK_1 Vars = (object) Params = 1
		EVENT_200 Op = 0x64 Vars = (int, string, object)
	GTASK_2 Vars = (int, int, int, object, object, object, object, object, object, object, string, string, string, string, bool, object) Params = 0
		EVENT_200 Op = 0xac Vars = (int, string, object)
		EVENT_100 Op = 0x187 Vars = (int)
		EVENT_102 Op = 0x42e Vars = (int)
		EVENT_101 Op = 0x455 Vars = (int)


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

0x6d: Push((bool) 0)
0x6e: IF (Stack[-1] == 0) GOTO 0x76; Pop(1)

0x6f: Push("world_danko.xml")
0x70: Push("player_danko.xml")
0x71: @ NewGame(Stack[-2], Stack[-1])
0x72: Pop(2)
0x73: @ DestroyWindow()
0x74: Pop(0)
0x75: Return(); Pop(0)

0x76: PushEmpty(string, bool)
0x77: Stack[-2] = "logo_gambitious.wmv"
0x78: Stack[-1] = (bool) 1
0x79: Push(-2, 4); TaskCall(0)
0x7a: Call2 0x0

0x7b: Pop(-2, 4); TaskReturn
0x7c: Pop(2)
0x7d: PushEmpty(string, bool)
0x7e: Stack[-2] = "logo_devolver.wmv"
0x7f: Stack[-1] = (bool) 1
0x80: Push(-2, 4); TaskCall(0)
0x81: Call2 0x0

0x82: Pop(-2, 4); TaskReturn
0x83: Pop(2)
0x84: PushEmpty(string, bool)
0x85: Stack[-2] = "logo_generalarcade.wmv"
0x86: Stack[-1] = (bool) 1
0x87: Push(-2, 4); TaskCall(0)
0x88: Call2 0x0

0x89: Pop(-2, 4); TaskReturn
0x8a: Pop(2)
0x8b: PushEmpty(string, bool)
0x8c: Stack[-2] = "logo_icepick.wmv"
0x8d: Stack[-1] = (bool) 1
0x8e: Push(-2, 4); TaskCall(0)
0x8f: Call2 0x0

0x90: Pop(-2, 4); TaskReturn
0x91: Pop(2)
0x92: PushEmpty(int)
0x93: Stack[-1] = (int) 0
0x94: Push(-1, 1); TaskCall(1)
0x95: Call2 0x59

0x96: Pop(-1, 1); TaskReturn
0x97: Pop(1)
0x98: PushEmpty(string, bool)
0x99: Stack[-2] = "intro.wmv"
0x9a: Stack[-1] = (bool) 1
0x9b: Push(-2, 4); TaskCall(0)
0x9c: Call2 0x0

0x9d: Pop(-2, 4); TaskReturn
0x9e: Pop(2)
0x9f: PushEmpty(bool)
0xa0: Stack[-1] = (bool) 0
0xa1: Call2 0xc9

0xa2: Pop(1)
0xa3: Return(); Pop(0)

0xa4: PushEmpty(object, object)
0xa5: Push("game_buttons.xml")
0xa6: Push((bool) 0)
0xa7: @ CreateWindow(Stack[-2], Stack[-1], Stack[-3])
0xa8: Pop(2)
0xa9: Stack[-3] = Stack[-1]
0xaa: Return(); Pop(2)

0xab: Stack[-1] = 0
0xac: PushEmpty(string, string)
0xad: Push("editbox")
0xae: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0xaf: IF (Stack[-1] == 0) GOTO 0xba; Pop(1)

0xb0: Push((int) 0)
0xb1: @@ get(Stack[-2], Stack[-1])
0xb2: Pop(1)
0xb3: @ DestroyWindow()
0xb4: Pop(0)
0xb5: PushEmpty(string)
0xb6: Stack[-1] = Stack[-2]
0xb7: Call2 0x4ac

0xb8: Pop(1)
0xb9: Return(); Pop(2)

0xba: PushEmpty(int, string, object)
0xbb: Stack[-3] = Stack[-8]
0xbc: Stack[-2] = Stack[-7]
0xbd: Stack[-1] = Stack[-6]
0xbe: Call2 0x18f

0xbf: Pop(3)
0xc0: Return(); Pop(2)

0xc1: PushEmpty(object, object)
0xc2: Push("game_logo.xml")
0xc3: Push((bool) 0)
0xc4: @ CreateWindow(Stack[-2], Stack[-1], Stack[-3])
0xc5: Pop(2)
0xc6: Stack[-3] = Stack[-1]
0xc7: Return(); Pop(2)

0xc8: Stack[-1] = 0
0xc9: PushEmpty(bool, bool, bool, string, bool, bool, bool, string)
0xca: Stack[14 + Tasks[-1].StackPointer] = Stack[-9]
0xcb: @ CaptureKeyboard()
0xcc: Pop(0)
0xcd: Stack[2 + Tasks[-1].StackPointer] = (int)0
0xce: @ GetWindowSize(Stack[-0], Stack[-1])
0xcf: Pop(0)
0xd0: Push("default")
0xd1: @ SetCursor(Stack[-1])
0xd2: Pop(1)
0xd3: Push("default")
0xd4: @ SetBackground(Stack[-1])
0xd5: Pop(1)
0xd6: Push("menumusic")
0xd7: @ PlaySound(Stack[-1])
0xd8: Pop(1)
0xd9: Push((bool) 1)
0xda: @ ShowCursor(Stack[-1])
0xdb: Pop(1)
0xdc: PushEmpty(string)
0xdd: Stack[-1] = ""
0xde: Call2 0x3c9

0xdf: Pop(1)
0xe0: PushEmpty(string)
0xe1: Stack[-1] = ""
0xe2: Call2 0x3ce

0xe3: Pop(1)
0xe4: Push(Stack[-9])
0xe5: IF (Stack[-1] == 0) GOTO 0xeb; Pop(1)

0xe6: Push("game_choose_pers.xml")
0xe7: Push((bool) 0)
0xe8: @ CreateWindow(Stack[-2], Stack[-1], Stack[-5])
0xe9: Pop(2)
0xea: GOTO 0xf3

0xeb: PushEmpty(object)
0xec: Call2 0xa4

0xed: Stack[3 + Tasks[-1].StackPointer] = Stack[-1]
0xee: Pop(1)
0xef: PushEmpty(object)
0xf0: Call2 0xc1

0xf1: Stack[4 + Tasks[-1].StackPointer] = Stack[-1]
0xf2: Pop(1)
0xf3: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0xf4: IF (Stack[-1] == 0) GOTO 0xf8; Pop(1)

0xf5: @ ProcessEvents()
0xf6: Pop(0)
0xf7: GOTO 0xf3

0xf8: PushEmpty()
0xf9: Call2 0x2af

0xfa: Pop(0)
0xfb: Push((int) 1)
0xfc: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] == Stack[-1])
0xfd: IF (Stack[-1] == 0) GOTO 0x119; Pop(1)

0xfe: Push("menumusic")
0xff: @ PauseSound(Stack[-1])
0x100: Pop(1)
0x101: PushEmpty(int)
0x102: Stack[-1] = (int) 1
0x103: Push(-1, 1); TaskCall(1)
0x104: Call2 0x59

0x105: Pop(-1, 1); TaskReturn
0x106: Pop(1)
0x107: PushEmpty(string, bool)
0x108: Stack[-2] = "intro_danko.wmv"
0x109: Stack[-1] = (bool) 1
0x10a: Push(-2, 4); TaskCall(0)
0x10b: Call2 0x0

0x10c: Pop(-2, 4); TaskReturn
0x10d: Pop(2)
0x10e: @ RemoveWorld()
0x10f: Pop(0)
0x110: @ UISync()
0x111: Pop(0)
0x112: @ DestroyWindow()
0x113: Pop(0)
0x114: Push("world_danko.xml")
0x115: Push("player_danko.xml")
0x116: @ NewGame(Stack[-2], Stack[-1])
0x117: Pop(2)
0x118: GOTO 0x186

0x119: Push((int) 2)
0x11a: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] == Stack[-1])
0x11b: IF (Stack[-1] == 0) GOTO 0x137; Pop(1)

0x11c: Push("menumusic")
0x11d: @ PauseSound(Stack[-1])
0x11e: Pop(1)
0x11f: PushEmpty(int)
0x120: Stack[-1] = (int) 2
0x121: Push(-1, 1); TaskCall(1)
0x122: Call2 0x59

0x123: Pop(-1, 1); TaskReturn
0x124: Pop(1)
0x125: PushEmpty(string, bool)
0x126: Stack[-2] = "intro_burah.wmv"
0x127: Stack[-1] = (bool) 1
0x128: Push(-2, 4); TaskCall(0)
0x129: Call2 0x0

0x12a: Pop(-2, 4); TaskReturn
0x12b: Pop(2)
0x12c: @ RemoveWorld()
0x12d: Pop(0)
0x12e: @ UISync()
0x12f: Pop(0)
0x130: @ DestroyWindow()
0x131: Pop(0)
0x132: Push("world_burah.xml")
0x133: Push("player_burah.xml")
0x134: @ NewGame(Stack[-2], Stack[-1])
0x135: Pop(2)
0x136: GOTO 0x186

0x137: Push((int) 3)
0x138: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] == Stack[-1])
0x139: IF (Stack[-1] == 0) GOTO 0x155; Pop(1)

0x13a: Push("menumusic")
0x13b: @ PauseSound(Stack[-1])
0x13c: Pop(1)
0x13d: PushEmpty(int)
0x13e: Stack[-1] = (int) 3
0x13f: Push(-1, 1); TaskCall(1)
0x140: Call2 0x59

0x141: Pop(-1, 1); TaskReturn
0x142: Pop(1)
0x143: PushEmpty(string, bool)
0x144: Stack[-2] = "intro_klara.wmv"
0x145: Stack[-1] = (bool) 1
0x146: Push(-2, 4); TaskCall(0)
0x147: Call2 0x0

0x148: Pop(-2, 4); TaskReturn
0x149: Pop(2)
0x14a: @ RemoveWorld()
0x14b: Pop(0)
0x14c: @ UISync()
0x14d: Pop(0)
0x14e: @ DestroyWindow()
0x14f: Pop(0)
0x150: Push("world_klara.xml")
0x151: Push("player_klara.xml")
0x152: @ NewGame(Stack[-2], Stack[-1])
0x153: Pop(2)
0x154: GOTO 0x186

0x155: Push((int) 4)
0x156: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] == Stack[-1])
0x157: IF (Stack[-1] == 0) GOTO 0x168; Pop(1)

0x158: Push("menumusic")
0x159: @ PauseSound(Stack[-1])
0x15a: Pop(1)
0x15b: Push("Loading : ")
0x15c: Pop(1); Push(Stack[-1] + Stack[10 + StackPtr]);
0x15d: @ Trace(Stack[-1])
0x15e: Pop(1)
0x15f: @ RemoveWorld()
0x160: Pop(0)
0x161: @ UISync()
0x162: Pop(0)
0x163: @ DestroyWindow()
0x164: Pop(0)
0x165: @ LoadGame(Stack[-4], Stack[-10])
0x166: Pop(0)
0x167: GOTO 0x186

0x168: Push((int) 5)
0x169: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] == Stack[-1])
0x16a: IF (Stack[-1] == 0) GOTO 0x179; Pop(1)

0x16b: Pop(0); Push((bool) Stack[9 + Tasks[-1].StackPointer] == 0)
0x16c: IF (Stack[-1] == 0) GOTO 0x172; Pop(1)

0x16d: @ DestroyWindow()
0x16e: Pop(0)
0x16f: @ SaveGame(Stack[-3])
0x170: Pop(0)
0x171: GOTO 0x178

0x172: @ DestroyWindow()
0x173: Pop(0)
0x174: @@ GetFileName(Stack[-1])
0x175: Pop(0)
0x176: @ SaveGame(Stack[-2], Stack[-1])
0x177: Pop(0)
0x178: GOTO 0x186

0x179: Push((int) 7)
0x17a: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] == Stack[-1])
0x17b: IF (Stack[-1] == 0) GOTO 0x186; Pop(1)

0x17c: @ RemoveWorld()
0x17d: Pop(0)
0x17e: @ UISync()
0x17f: Pop(0)
0x180: @ DestroyWindow()
0x181: Pop(0)
0x182: Push("world_intro.xml")
0x183: Push("player_intro.xml")
0x184: @ NewGame(Stack[-2], Stack[-1])
0x185: Pop(2)
0x186: Return(); Pop(8)

0x187: PushEmpty()
0x188: Push((int) 27)
0x189: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x18a: IF (Stack[-1] == 0) GOTO 0x18e; Pop(1)

0x18b: PushEmpty()
0x18c: Call2 0x29f

0x18d: Pop(0)
0x18e: Return(); Pop(0)

0x18f: PushEmpty()
0x190: Push("newgame")
0x191: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x192: IF (Stack[-1] == 0) GOTO 0x197; Pop(1)

0x193: Stack[2 + Tasks[-1].StackPointer] = (int)7
0x194: @ StopEventProcessing()
0x195: Pop(0)
0x196: GOTO 0x29e

0x197: Push("quitgame")
0x198: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x199: IF (Stack[-1] == 0) GOTO 0x1a1; Pop(1)

0x19a: Push("Quit game")
0x19b: @ UITrace(Stack[-1])
0x19c: Pop(1)
0x19d: @ Quit()
0x19e: Pop(0)
0x19f: Return(); Pop(0)

0x1a0: GOTO 0x29e

0x1a1: Push("loadgame")
0x1a2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1a3: IF (Stack[-1] == 0) GOTO 0x1ad; Pop(1)

0x1a4: PushEmpty()
0x1a5: Call2 0x2af

0x1a6: Pop(0)
0x1a7: Push("load.xml")
0x1a8: Push((bool) 0)
0x1a9: @ CreateWindow(Stack[-2], Stack[-1], Stack[-6])
0x1aa: Pop(2)
0x1ab: Return(); Pop(0)

0x1ac: GOTO 0x29e

0x1ad: Push("savegame")
0x1ae: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1af: IF (Stack[-1] == 0) GOTO 0x1b9; Pop(1)

0x1b0: PushEmpty()
0x1b1: Call2 0x2af

0x1b2: Pop(0)
0x1b3: Push("save.xml")
0x1b4: Push((bool) 0)
0x1b5: @ CreateWindow(Stack[-2], Stack[-1], Stack[-7])
0x1b6: Pop(2)
0x1b7: Return(); Pop(0)

0x1b8: GOTO 0x29e

0x1b9: Push("gameoptions")
0x1ba: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1bb: IF (Stack[-1] == 0) GOTO 0x1c5; Pop(1)

0x1bc: PushEmpty()
0x1bd: Call2 0x2af

0x1be: Pop(0)
0x1bf: Push("options.xml")
0x1c0: Push((bool) 0)
0x1c1: @ CreateWindow(Stack[-2], Stack[-1], Stack[-8])
0x1c2: Pop(2)
0x1c3: Return(); Pop(0)

0x1c4: GOTO 0x29e

0x1c5: Push("continue")
0x1c6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1c7: IF (Stack[-1] == 0) GOTO 0x1cd; Pop(1)

0x1c8: Stack[2 + Tasks[-1].StackPointer] = (int)6
0x1c9: @ StopEventProcessing()
0x1ca: Pop(0)
0x1cb: Return(); Pop(0)

0x1cc: GOTO 0x29e

0x1cd: Push("credits")
0x1ce: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1cf: IF (Stack[-1] == 0) GOTO 0x1eb; Pop(1)

0x1d0: PushEmpty()
0x1d1: Call2 0x2af

0x1d2: Pop(0)
0x1d3: PushEmpty(int)
0x1d4: Stack[-1] = (int) 8
0x1d5: Push(-1, 1); TaskCall(1)
0x1d6: Call2 0x59

0x1d7: Pop(-1, 1); TaskReturn
0x1d8: Pop(1)
0x1d9: PushEmpty(object)
0x1da: Call2 0xa4

0x1db: Stack[3 + Tasks[-1].StackPointer] = Stack[-1]
0x1dc: Pop(1)
0x1dd: PushEmpty(object)
0x1de: Call2 0xc1

0x1df: Stack[4 + Tasks[-1].StackPointer] = Stack[-1]
0x1e0: Pop(1)
0x1e1: Push((bool) 1)
0x1e2: @ ShowCursor(Stack[-1])
0x1e3: Pop(1)
0x1e4: @ CaptureKeyboard()
0x1e5: Pop(0)
0x1e6: PushEmpty(string)
0x1e7: Stack[-1] = ""
0x1e8: Call2 0x3c9

0x1e9: Pop(1)
0x1ea: GOTO 0x29e

0x1eb: Push("danko")
0x1ec: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1ed: IF (Stack[-1] == 0) GOTO 0x20e; Pop(1)

0x1ee: Push((int) 0)
0x1ef: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1f0: IF (Stack[-1] == 0) GOTO 0x1f5; Pop(1)

0x1f1: Stack[2 + Tasks[-1].StackPointer] = (int)1
0x1f2: @ StopEventProcessing()
0x1f3: Pop(0)
0x1f4: GOTO 0x20c

0x1f5: Push((int) 1)
0x1f6: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1f7: IF (Stack[-1] == 0) GOTO 0x201; Pop(1)

0x1f8: Push((int) 202)
0x1f9: Push("player_name")
0x1fa: @ SendMessage(Stack[-2], Stack[-1])
0x1fb: Pop(2)
0x1fc: Push((int) 203)
0x1fd: Push("player_desc")
0x1fe: @ SendMessage(Stack[-2], Stack[-1])
0x1ff: Pop(2)
0x200: GOTO 0x20c

0x201: Push((int) 2)
0x202: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x203: IF (Stack[-1] == 0) GOTO 0x20c; Pop(1)

0x204: Push((int) -1)
0x205: Push("player_name")
0x206: @ SendMessage(Stack[-2], Stack[-1])
0x207: Pop(2)
0x208: Push((int) -1)
0x209: Push("player_desc")
0x20a: @ SendMessage(Stack[-2], Stack[-1])
0x20b: Pop(2)
0x20c: Return(); Pop(0)

0x20d: GOTO 0x29e

0x20e: Push("burah")
0x20f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x210: IF (Stack[-1] == 0) GOTO 0x231; Pop(1)

0x211: Push((int) 0)
0x212: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x213: IF (Stack[-1] == 0) GOTO 0x218; Pop(1)

0x214: Stack[2 + Tasks[-1].StackPointer] = (int)2
0x215: @ StopEventProcessing()
0x216: Pop(0)
0x217: GOTO 0x22f

0x218: Push((int) 1)
0x219: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x21a: IF (Stack[-1] == 0) GOTO 0x224; Pop(1)

0x21b: Push((int) 205)
0x21c: Push("player_name")
0x21d: @ SendMessage(Stack[-2], Stack[-1])
0x21e: Pop(2)
0x21f: Push((int) 206)
0x220: Push("player_desc")
0x221: @ SendMessage(Stack[-2], Stack[-1])
0x222: Pop(2)
0x223: GOTO 0x22f

0x224: Push((int) 2)
0x225: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x226: IF (Stack[-1] == 0) GOTO 0x22f; Pop(1)

0x227: Push((int) -1)
0x228: Push("player_name")
0x229: @ SendMessage(Stack[-2], Stack[-1])
0x22a: Pop(2)
0x22b: Push((int) -1)
0x22c: Push("player_desc")
0x22d: @ SendMessage(Stack[-2], Stack[-1])
0x22e: Pop(2)
0x22f: Return(); Pop(0)

0x230: GOTO 0x29e

0x231: Push("klara")
0x232: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x233: IF (Stack[-1] == 0) GOTO 0x276; Pop(1)

0x234: Push((int) 0)
0x235: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x236: IF (Stack[-1] == 0) GOTO 0x24a; Pop(1)

0x237: PushEmpty(bool)
0x238: Stack[-1] = (bool) 0
0x239: PushEmpty(bool)
0x23a: Call2 0x4a4

0x23b: Pop(0)
0x23c: Pop(1); Push((bool) Stack[-1] == 0)
0x23d: IF (Stack[-1] == 0) GOTO 0x244; Pop(1)

0x23e: PushEmpty(bool)
0x23f: Call2 0x49c

0x240: Pop(0)
0x241: Pop(1); Push((bool) Stack[-1] == 0)
0x242: IF (Stack[-1] == 0) GOTO 0x244; Pop(1)

0x243: Stack[-1] = (bool) 1
0x244: IF (Stack[-1] == 0) GOTO 0x246; Pop(1)

0x245: Return(); Pop(0)

0x246: Stack[2 + Tasks[-1].StackPointer] = (int)3
0x247: @ StopEventProcessing()
0x248: Pop(0)
0x249: GOTO 0x274

0x24a: Push((int) 1)
0x24b: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x24c: IF (Stack[-1] == 0) GOTO 0x269; Pop(1)

0x24d: Push((int) 208)
0x24e: Push("player_name")
0x24f: @ SendMessage(Stack[-2], Stack[-1])
0x250: Pop(2)
0x251: PushEmpty(bool)
0x252: Stack[-1] = (bool) 0
0x253: PushEmpty(bool)
0x254: Call2 0x4a4

0x255: Pop(0)
0x256: Pop(1); Push((bool) Stack[-1] == 0)
0x257: IF (Stack[-1] == 0) GOTO 0x25e; Pop(1)

0x258: PushEmpty(bool)
0x259: Call2 0x49c

0x25a: Pop(0)
0x25b: Pop(1); Push((bool) Stack[-1] == 0)
0x25c: IF (Stack[-1] == 0) GOTO 0x25e; Pop(1)

0x25d: Stack[-1] = (bool) 1
0x25e: IF (Stack[-1] == 0) GOTO 0x264; Pop(1)

0x25f: Push((int) 213)
0x260: Push("player_desc")
0x261: @ SendMessage(Stack[-2], Stack[-1])
0x262: Pop(2)
0x263: GOTO 0x268

0x264: Push((int) 209)
0x265: Push("player_desc")
0x266: @ SendMessage(Stack[-2], Stack[-1])
0x267: Pop(2)
0x268: GOTO 0x274

0x269: Push((int) 2)
0x26a: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x26b: IF (Stack[-1] == 0) GOTO 0x274; Pop(1)

0x26c: Push((int) -1)
0x26d: Push("player_name")
0x26e: @ SendMessage(Stack[-2], Stack[-1])
0x26f: Pop(2)
0x270: Push((int) -1)
0x271: Push("player_desc")
0x272: @ SendMessage(Stack[-2], Stack[-1])
0x273: Pop(2)
0x274: Return(); Pop(0)

0x275: GOTO 0x29e

0x276: Push("load")
0x277: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x278: IF (Stack[-1] == 0) GOTO 0x287; Pop(1)

0x279: Push((int) 0)
0x27a: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x27b: IF (Stack[-1] == 0) GOTO 0x282; Pop(1)

0x27c: Stack[2 + Tasks[-1].StackPointer] = (int)4
0x27d: @@ GetFileName(Stack[-10])
0x27e: Pop(0)
0x27f: @ StopEventProcessing()
0x280: Pop(0)
0x281: GOTO 0x285

0x282: PushEmpty()
0x283: Call2 0x29f

0x284: Pop(0)
0x285: Return(); Pop(0)

0x286: GOTO 0x29e

0x287: Push("save")
0x288: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x289: IF (Stack[-1] == 0) GOTO 0x297; Pop(1)

0x28a: Push((int) 0)
0x28b: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x28c: IF (Stack[-1] == 0) GOTO 0x292; Pop(1)

0x28d: Stack[2 + Tasks[-1].StackPointer] = (int)5
0x28e: Stack[9 + Tasks[-1].StackPointer] = Stack[-1]
0x28f: @ StopEventProcessing()
0x290: Pop(0)
0x291: GOTO 0x295

0x292: PushEmpty()
0x293: Call2 0x29f

0x294: Pop(0)
0x295: Return(); Pop(0)

0x296: GOTO 0x29e

0x297: Push("options")
0x298: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x299: IF (Stack[-1] == 0) GOTO 0x29e; Pop(1)

0x29a: PushEmpty()
0x29b: Call2 0x29f

0x29c: Pop(0)
0x29d: Return(); Pop(0)

0x29e: Return(); Pop(0)

0x29f: PushEmpty(string)
0x2a0: Stack[-1] = ""
0x2a1: Call2 0x3c9

0x2a2: Pop(1)
0x2a3: PushEmpty()
0x2a4: Call2 0x2af

0x2a5: Pop(0)
0x2a6: PushEmpty(object)
0x2a7: Call2 0xa4

0x2a8: Stack[3 + Tasks[-1].StackPointer] = Stack[-1]
0x2a9: Pop(1)
0x2aa: PushEmpty(object)
0x2ab: Call2 0xc1

0x2ac: Stack[4 + Tasks[-1].StackPointer] = Stack[-1]
0x2ad: Pop(1)
0x2ae: Return(); Pop(0)

0x2af: Push( Stack[3 + Tasks[-1].StackPointer] )
0x2b0: IF (Stack[-1] == 0) GOTO 0x2b3; Pop(1)

0x2b1: @@ DestroyWindow()
0x2b2: Pop(0)
0x2b3: Push( Stack[4 + Tasks[-1].StackPointer] )
0x2b4: IF (Stack[-1] == 0) GOTO 0x2b7; Pop(1)

0x2b5: @@ DestroyWindow()
0x2b6: Pop(0)
0x2b7: Push( Stack[5 + Tasks[-1].StackPointer] )
0x2b8: IF (Stack[-1] == 0) GOTO 0x2bb; Pop(1)

0x2b9: @@ DestroyWindow()
0x2ba: Pop(0)
0x2bb: Push( Stack[6 + Tasks[-1].StackPointer] )
0x2bc: IF (Stack[-1] == 0) GOTO 0x2bf; Pop(1)

0x2bd: @@ DestroyWindow()
0x2be: Pop(0)
0x2bf: Push( Stack[7 + Tasks[-1].StackPointer] )
0x2c0: IF (Stack[-1] == 0) GOTO 0x2c3; Pop(1)

0x2c1: @@ DestroyWindow()
0x2c2: Pop(0)
0x2c3: Push( Stack[8 + Tasks[-1].StackPointer] )
0x2c4: IF (Stack[-1] == 0) GOTO 0x2c7; Pop(1)

0x2c5: @@ DestroyWindow()
0x2c6: Pop(0)
0x2c7: @ CaptureKeyboard()
0x2c8: Pop(0)
0x2c9: Return(); Pop(0)

0x2ca: Push((int) 0)
0x2cb: Push("newgame")
0x2cc: @ SendMessage(Stack[-2], Stack[-1])
0x2cd: Pop(2)
0x2ce: Push((int) 0)
0x2cf: Push("loadgame")
0x2d0: @ SendMessage(Stack[-2], Stack[-1])
0x2d1: Pop(2)
0x2d2: Push((int) 0)
0x2d3: Push("gameoptions")
0x2d4: @ SendMessage(Stack[-2], Stack[-1])
0x2d5: Pop(2)
0x2d6: Push((int) 0)
0x2d7: Push("credits")
0x2d8: @ SendMessage(Stack[-2], Stack[-1])
0x2d9: Pop(2)
0x2da: Push((int) 0)
0x2db: Push("quitgame")
0x2dc: @ SendMessage(Stack[-2], Stack[-1])
0x2dd: Pop(2)
0x2de: Return(); Pop(0)

0x2df: Push((int) 0)
0x2e0: Push("danko")
0x2e1: @ SendMessage(Stack[-2], Stack[-1])
0x2e2: Pop(2)
0x2e3: Push((int) 0)
0x2e4: Push("burah")
0x2e5: @ SendMessage(Stack[-2], Stack[-1])
0x2e6: Pop(2)
0x2e7: Push((int) 0)
0x2e8: Push("klara")
0x2e9: @ SendMessage(Stack[-2], Stack[-1])
0x2ea: Pop(2)
0x2eb: Return(); Pop(0)

0x2ec: PushEmpty()
0x2ed: Call2 0x2df

0x2ee: Pop(0)
0x2ef: PushEmpty(string)
0x2f0: Call2 0x3cc

0x2f1: Pop(0)
0x2f2: Push("")
0x2f3: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x2f4: IF (Stack[-1] == 0) GOTO 0x2fe; Pop(1)

0x2f5: Push((int) 1)
0x2f6: Push("danko")
0x2f7: @ SendMessage(Stack[-2], Stack[-1])
0x2f8: Pop(2)
0x2f9: PushEmpty(string)
0x2fa: Stack[-1] = "danko"
0x2fb: Call2 0x3ce

0x2fc: Pop(1)
0x2fd: GOTO 0x32a

0x2fe: PushEmpty(string)
0x2ff: Call2 0x3cc

0x300: Pop(0)
0x301: Push("danko")
0x302: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x303: IF (Stack[-1] == 0) GOTO 0x30d; Pop(1)

0x304: Push((int) 1)
0x305: Push("burah")
0x306: @ SendMessage(Stack[-2], Stack[-1])
0x307: Pop(2)
0x308: PushEmpty(string)
0x309: Stack[-1] = "burah"
0x30a: Call2 0x3ce

0x30b: Pop(1)
0x30c: GOTO 0x32a

0x30d: PushEmpty(string)
0x30e: Call2 0x3cc

0x30f: Pop(0)
0x310: Push("burah")
0x311: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x312: IF (Stack[-1] == 0) GOTO 0x31c; Pop(1)

0x313: Push((int) 1)
0x314: Push("klara")
0x315: @ SendMessage(Stack[-2], Stack[-1])
0x316: Pop(2)
0x317: PushEmpty(string)
0x318: Stack[-1] = "klara"
0x319: Call2 0x3ce

0x31a: Pop(1)
0x31b: GOTO 0x32a

0x31c: PushEmpty(string)
0x31d: Call2 0x3cc

0x31e: Pop(0)
0x31f: Push("klara")
0x320: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x321: IF (Stack[-1] == 0) GOTO 0x32a; Pop(1)

0x322: Push((int) 1)
0x323: Push("danko")
0x324: @ SendMessage(Stack[-2], Stack[-1])
0x325: Pop(2)
0x326: PushEmpty(string)
0x327: Stack[-1] = "danko"
0x328: Call2 0x3ce

0x329: Pop(1)
0x32a: Return(); Pop(0)

0x32b: PushEmpty()
0x32c: Call2 0x2df

0x32d: Pop(0)
0x32e: PushEmpty(string)
0x32f: Call2 0x3cc

0x330: Pop(0)
0x331: Push("")
0x332: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x333: IF (Stack[-1] == 0) GOTO 0x33d; Pop(1)

0x334: Push((int) 1)
0x335: Push("klara")
0x336: @ SendMessage(Stack[-2], Stack[-1])
0x337: Pop(2)
0x338: PushEmpty(string)
0x339: Stack[-1] = "klara"
0x33a: Call2 0x3ce

0x33b: Pop(1)
0x33c: GOTO 0x369

0x33d: PushEmpty(string)
0x33e: Call2 0x3cc

0x33f: Pop(0)
0x340: Push("klara")
0x341: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x342: IF (Stack[-1] == 0) GOTO 0x34c; Pop(1)

0x343: Push((int) 1)
0x344: Push("burah")
0x345: @ SendMessage(Stack[-2], Stack[-1])
0x346: Pop(2)
0x347: PushEmpty(string)
0x348: Stack[-1] = "burah"
0x349: Call2 0x3ce

0x34a: Pop(1)
0x34b: GOTO 0x369

0x34c: PushEmpty(string)
0x34d: Call2 0x3cc

0x34e: Pop(0)
0x34f: Push("burah")
0x350: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x351: IF (Stack[-1] == 0) GOTO 0x35b; Pop(1)

0x352: Push((int) 1)
0x353: Push("danko")
0x354: @ SendMessage(Stack[-2], Stack[-1])
0x355: Pop(2)
0x356: PushEmpty(string)
0x357: Stack[-1] = "danko"
0x358: Call2 0x3ce

0x359: Pop(1)
0x35a: GOTO 0x369

0x35b: PushEmpty(string)
0x35c: Call2 0x3cc

0x35d: Pop(0)
0x35e: Push("danko")
0x35f: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x360: IF (Stack[-1] == 0) GOTO 0x369; Pop(1)

0x361: Push((int) 1)
0x362: Push("klara")
0x363: @ SendMessage(Stack[-2], Stack[-1])
0x364: Pop(2)
0x365: PushEmpty(string)
0x366: Stack[-1] = "klara"
0x367: Call2 0x3ce

0x368: Pop(1)
0x369: Return(); Pop(0)

0x36a: PushEmpty()
0x36b: Call2 0x2ca

0x36c: Pop(0)
0x36d: PushEmpty(string)
0x36e: Call2 0x3c7

0x36f: Pop(0)
0x370: Push("")
0x371: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x372: IF (Stack[-1] == 0) GOTO 0x37c; Pop(1)

0x373: Push((int) 1)
0x374: Push("newgame")
0x375: @ SendMessage(Stack[-2], Stack[-1])
0x376: Pop(2)
0x377: PushEmpty(string)
0x378: Stack[-1] = "newgame"
0x379: Call2 0x3c9

0x37a: Pop(1)
0x37b: GOTO 0x3c6

0x37c: PushEmpty(string)
0x37d: Call2 0x3c7

0x37e: Pop(0)
0x37f: Push("newgame")
0x380: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x381: IF (Stack[-1] == 0) GOTO 0x38b; Pop(1)

0x382: Push((int) 1)
0x383: Push("loadgame")
0x384: @ SendMessage(Stack[-2], Stack[-1])
0x385: Pop(2)
0x386: PushEmpty(string)
0x387: Stack[-1] = "loadgame"
0x388: Call2 0x3c9

0x389: Pop(1)
0x38a: GOTO 0x3c6

0x38b: PushEmpty(string)
0x38c: Call2 0x3c7

0x38d: Pop(0)
0x38e: Push("loadgame")
0x38f: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x390: IF (Stack[-1] == 0) GOTO 0x39a; Pop(1)

0x391: Push((int) 1)
0x392: Push("gameoptions")
0x393: @ SendMessage(Stack[-2], Stack[-1])
0x394: Pop(2)
0x395: PushEmpty(string)
0x396: Stack[-1] = "gameoptions"
0x397: Call2 0x3c9

0x398: Pop(1)
0x399: GOTO 0x3c6

0x39a: PushEmpty(string)
0x39b: Call2 0x3c7

0x39c: Pop(0)
0x39d: Push("gameoptions")
0x39e: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x39f: IF (Stack[-1] == 0) GOTO 0x3a9; Pop(1)

0x3a0: Push((int) 1)
0x3a1: Push("credits")
0x3a2: @ SendMessage(Stack[-2], Stack[-1])
0x3a3: Pop(2)
0x3a4: PushEmpty(string)
0x3a5: Stack[-1] = "credits"
0x3a6: Call2 0x3c9

0x3a7: Pop(1)
0x3a8: GOTO 0x3c6

0x3a9: PushEmpty(string)
0x3aa: Call2 0x3c7

0x3ab: Pop(0)
0x3ac: Push("credits")
0x3ad: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x3ae: IF (Stack[-1] == 0) GOTO 0x3b8; Pop(1)

0x3af: Push((int) 1)
0x3b0: Push("quitgame")
0x3b1: @ SendMessage(Stack[-2], Stack[-1])
0x3b2: Pop(2)
0x3b3: PushEmpty(string)
0x3b4: Stack[-1] = "quitgame"
0x3b5: Call2 0x3c9

0x3b6: Pop(1)
0x3b7: GOTO 0x3c6

0x3b8: PushEmpty(string)
0x3b9: Call2 0x3c7

0x3ba: Pop(0)
0x3bb: Push("quitgame")
0x3bc: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x3bd: IF (Stack[-1] == 0) GOTO 0x3c6; Pop(1)

0x3be: Push((int) 1)
0x3bf: Push("newgame")
0x3c0: @ SendMessage(Stack[-2], Stack[-1])
0x3c1: Pop(2)
0x3c2: PushEmpty(string)
0x3c3: Stack[-1] = "newgame"
0x3c4: Call2 0x3c9

0x3c5: Pop(1)
0x3c6: Return(); Pop(0)

0x3c7: Stack[-1] = Stack[11 + Tasks[-1].StackPointer]
0x3c8: Return(); Pop(0)

0x3c9: PushEmpty()
0x3ca: Stack[11 + Tasks[-1].StackPointer] = Stack[-1]
0x3cb: Return(); Pop(0)

0x3cc: Stack[-1] = Stack[12 + Tasks[-1].StackPointer]
0x3cd: Return(); Pop(0)

0x3ce: PushEmpty()
0x3cf: Stack[12 + Tasks[-1].StackPointer] = Stack[-1]
0x3d0: Return(); Pop(0)

0x3d1: PushEmpty()
0x3d2: Call2 0x2ca

0x3d3: Pop(0)
0x3d4: PushEmpty(string)
0x3d5: Call2 0x3c7

0x3d6: Pop(0)
0x3d7: Push("")
0x3d8: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x3d9: IF (Stack[-1] == 0) GOTO 0x3e3; Pop(1)

0x3da: Push((int) 1)
0x3db: Push("quitgame")
0x3dc: @ SendMessage(Stack[-2], Stack[-1])
0x3dd: Pop(2)
0x3de: PushEmpty(string)
0x3df: Stack[-1] = "quitgame"
0x3e0: Call2 0x3c9

0x3e1: Pop(1)
0x3e2: GOTO 0x42d

0x3e3: PushEmpty(string)
0x3e4: Call2 0x3c7

0x3e5: Pop(0)
0x3e6: Push("newgame")
0x3e7: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x3e8: IF (Stack[-1] == 0) GOTO 0x3f2; Pop(1)

0x3e9: Push((int) 1)
0x3ea: Push("quitgame")
0x3eb: @ SendMessage(Stack[-2], Stack[-1])
0x3ec: Pop(2)
0x3ed: PushEmpty(string)
0x3ee: Stack[-1] = "quitgame"
0x3ef: Call2 0x3c9

0x3f0: Pop(1)
0x3f1: GOTO 0x42d

0x3f2: PushEmpty(string)
0x3f3: Call2 0x3c7

0x3f4: Pop(0)
0x3f5: Push("loadgame")
0x3f6: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x3f7: IF (Stack[-1] == 0) GOTO 0x401; Pop(1)

0x3f8: Push((int) 1)
0x3f9: Push("newgame")
0x3fa: @ SendMessage(Stack[-2], Stack[-1])
0x3fb: Pop(2)
0x3fc: PushEmpty(string)
0x3fd: Stack[-1] = "newgame"
0x3fe: Call2 0x3c9

0x3ff: Pop(1)
0x400: GOTO 0x42d

0x401: PushEmpty(string)
0x402: Call2 0x3c7

0x403: Pop(0)
0x404: Push("gameoptions")
0x405: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x406: IF (Stack[-1] == 0) GOTO 0x410; Pop(1)

0x407: Push((int) 1)
0x408: Push("loadgame")
0x409: @ SendMessage(Stack[-2], Stack[-1])
0x40a: Pop(2)
0x40b: PushEmpty(string)
0x40c: Stack[-1] = "loadgame"
0x40d: Call2 0x3c9

0x40e: Pop(1)
0x40f: GOTO 0x42d

0x410: PushEmpty(string)
0x411: Call2 0x3c7

0x412: Pop(0)
0x413: Push("credits")
0x414: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x415: IF (Stack[-1] == 0) GOTO 0x41f; Pop(1)

0x416: Push((int) 1)
0x417: Push("gameoptions")
0x418: @ SendMessage(Stack[-2], Stack[-1])
0x419: Pop(2)
0x41a: PushEmpty(string)
0x41b: Stack[-1] = "gameoptions"
0x41c: Call2 0x3c9

0x41d: Pop(1)
0x41e: GOTO 0x42d

0x41f: PushEmpty(string)
0x420: Call2 0x3c7

0x421: Pop(0)
0x422: Push("quitgame")
0x423: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x424: IF (Stack[-1] == 0) GOTO 0x42d; Pop(1)

0x425: Push((int) 1)
0x426: Push("credits")
0x427: @ SendMessage(Stack[-2], Stack[-1])
0x428: Pop(2)
0x429: PushEmpty(string)
0x42a: Stack[-1] = "credits"
0x42b: Call2 0x3c9

0x42c: Pop(1)
0x42d: Return(); Pop(0)

0x42e: PushEmpty()
0x42f: Pop(0); Push((bool) Stack[14 + Tasks[-1].StackPointer] == 0)
0x430: IF (Stack[-1] == 0) GOTO 0x443; Pop(1)

0x431: Push((int) 272)
0x432: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x433: IF (Stack[-1] == 0) GOTO 0x43a; Pop(1)

0x434: @ HideCursor()
0x435: Pop(0)
0x436: PushEmpty()
0x437: Call2 0x3d1

0x438: Pop(0)
0x439: GOTO 0x442

0x43a: Push((int) 274)
0x43b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x43c: IF (Stack[-1] == 0) GOTO 0x442; Pop(1)

0x43d: @ HideCursor()
0x43e: Pop(0)
0x43f: PushEmpty()
0x440: Call2 0x36a

0x441: Pop(0)
0x442: GOTO 0x454

0x443: Push((int) 271)
0x444: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x445: IF (Stack[-1] == 0) GOTO 0x44c; Pop(1)

0x446: @ HideCursor()
0x447: Pop(0)
0x448: PushEmpty()
0x449: Call2 0x2ec

0x44a: Pop(0)
0x44b: GOTO 0x454

0x44c: Push((int) 273)
0x44d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x44e: IF (Stack[-1] == 0) GOTO 0x454; Pop(1)

0x44f: @ HideCursor()
0x450: Pop(0)
0x451: PushEmpty()
0x452: Call2 0x32b

0x453: Pop(0)
0x454: Return(); Pop(0)

0x455: PushEmpty()
0x456: Pop(0); Push((bool) Stack[14 + Tasks[-1].StackPointer] == 0)
0x457: IF (Stack[-1] == 0) GOTO 0x47a; Pop(1)

0x458: Push((int) 267)
0x459: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x45a: IF (Stack[-1] == 0) GOTO 0x461; Pop(1)

0x45b: @ HideCursor()
0x45c: Pop(0)
0x45d: PushEmpty()
0x45e: Call2 0x3d1

0x45f: Pop(0)
0x460: GOTO 0x479

0x461: Push((int) 268)
0x462: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x463: IF (Stack[-1] == 0) GOTO 0x46a; Pop(1)

0x464: @ HideCursor()
0x465: Pop(0)
0x466: PushEmpty()
0x467: Call2 0x36a

0x468: Pop(0)
0x469: GOTO 0x479

0x46a: Push((int) 256)
0x46b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x46c: IF (Stack[-1] == 0) GOTO 0x479; Pop(1)

0x46d: PushEmpty(string)
0x46e: Call2 0x3c7

0x46f: Pop(0)
0x470: Push("")
0x471: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x472: IF (Stack[-1] == 0) GOTO 0x479; Pop(1)

0x473: Push((int) 2)
0x474: PushEmpty(string)
0x475: Call2 0x3c7

0x476: Pop(0)
0x477: @ SendMessage(Stack[-2], Stack[-1])
0x478: Pop(2)
0x479: GOTO 0x49b

0x47a: Push((int) 270)
0x47b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x47c: IF (Stack[-1] == 0) GOTO 0x483; Pop(1)

0x47d: @ HideCursor()
0x47e: Pop(0)
0x47f: PushEmpty()
0x480: Call2 0x2ec

0x481: Pop(0)
0x482: GOTO 0x49b

0x483: Push((int) 269)
0x484: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x485: IF (Stack[-1] == 0) GOTO 0x48c; Pop(1)

0x486: @ HideCursor()
0x487: Pop(0)
0x488: PushEmpty()
0x489: Call2 0x32b

0x48a: Pop(0)
0x48b: GOTO 0x49b

0x48c: Push((int) 256)
0x48d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x48e: IF (Stack[-1] == 0) GOTO 0x49b; Pop(1)

0x48f: PushEmpty(string)
0x490: Call2 0x3cc

0x491: Pop(0)
0x492: Push("")
0x493: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x494: IF (Stack[-1] == 0) GOTO 0x49b; Pop(1)

0x495: Push((int) 2)
0x496: PushEmpty(string)
0x497: Call2 0x3cc

0x498: Pop(0)
0x499: @ SendMessage(Stack[-2], Stack[-1])
0x49a: Pop(2)
0x49b: Return(); Pop(0)

0x49c: PushEmpty(int, int)
0x49d: Push("BurahCompleted")
0x49e: Push((int) 0)
0x49f: @ GetRegistryData(Stack[-3], Stack[-2], Stack[-1])
0x4a0: Pop(2)
0x4a1: Push((int) 0)
0x4a2: Stack[-4] = Stack[-2] != Stack[-1]; Pop(1);
0x4a3: Return(); Pop(2)

0x4a4: PushEmpty(int, int)
0x4a5: Push("DankoCompleted")
0x4a6: Push((int) 0)
0x4a7: @ GetRegistryData(Stack[-3], Stack[-2], Stack[-1])
0x4a8: Pop(2)
0x4a9: Push((int) 0)
0x4aa: Stack[-4] = Stack[-2] != Stack[-1]; Pop(1);
0x4ab: Return(); Pop(2)

0x4ac: PushEmpty(bool, bool)
0x4ad: Push("loading map: ")
0x4ae: Pop(1); Push(Stack[-1] + Stack[-4]);
0x4af: @ UITrace(Stack[-1])
0x4b0: Pop(1)
0x4b1: @ LoadMap(Stack[-1], Stack[-3])
0x4b2: Pop(0)
0x4b3: Return(); Pop(2)

