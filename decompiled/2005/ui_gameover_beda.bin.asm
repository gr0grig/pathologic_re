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
	fin_beda.wmv
	menumusic
	game_buttons.xml
	game_logo.xml
	default
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
	PlaySound (1 args)
	SetCursor (1 args)
	SetBackground (1 args)
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
		EVENT_100 Op = 0x135 Vars = (int)
		EVENT_200 Op = 0x13d Vars = (int, string, object)


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

0x3c: @ StopEventProcessing()
0x3d: Pop(0)
0x3e: @@ Stop()
0x3f: Pop(0)
0x40: Return(); Pop(0)

0x41: PushEmpty()
0x42: Push("intro.xml")
0x43: Push((bool) 0)
0x44: @ CreateWindow(Stack[-2], Stack[-1], Stack[-0])
0x45: Pop(2)
0x46: Push("intro")
0x47: @ SendMessage(Stack[-2], Stack[-1])
0x48: Pop(1)
0x49: @ ProcessEvents()
0x4a: Pop(0)
0x4b: Return(); Pop(0)

0x4c: PushEmpty()
0x4d: Push("intro")
0x4e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4f: IF (Stack[-1] == 0) GOTO 0x54; Pop(1)

0x50: @@ DestroyWindow()
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
0x5c: Stack[-2] = "fin_beda.wmv"
0x5d: Stack[-1] = (bool) 0
0x5e: Push(-2, 4); TaskCall(0)
0x5f: Call2 0x0

0x60: Pop(-2, 4); TaskReturn
0x61: Pop(2)
0x62: Push("menumusic")
0x63: @ PlaySound(Stack[-1])
0x64: Pop(1)
0x65: PushEmpty(int)
0x66: Stack[-1] = (int) 8
0x67: Push(-1, 1); TaskCall(1)
0x68: Call2 0x41

0x69: Pop(-1, 1); TaskReturn
0x6a: Pop(1)
0x6b: PushEmpty(bool)
0x6c: Stack[-1] = (bool) 0
0x6d: Call2 0x80

0x6e: Pop(1)
0x6f: Return(); Pop(0)

0x70: PushEmpty(object, object)
0x71: Push("game_buttons.xml")
0x72: Push((bool) 0)
0x73: @ CreateWindow(Stack[-2], Stack[-1], Stack[-3])
0x74: Pop(2)
0x75: Stack[-3] = Stack[-1]
0x76: Return(); Pop(2)

0x77: Stack[-1] = 0
0x78: PushEmpty(object, object)
0x79: Push("game_logo.xml")
0x7a: Push((bool) 0)
0x7b: @ CreateWindow(Stack[-2], Stack[-1], Stack[-3])
0x7c: Pop(2)
0x7d: Stack[-3] = Stack[-1]
0x7e: Return(); Pop(2)

0x7f: Stack[-1] = 0
0x80: PushEmpty(bool, bool, bool, string, bool, bool, bool, string)
0x81: @ CaptureKeyboard()
0x82: Pop(0)
0x83: Stack[2 + Tasks[-1].StackPointer] = (int)0
0x84: @ GetWindowSize(Stack[-0], Stack[-1])
0x85: Pop(0)
0x86: Push("default")
0x87: @ SetCursor(Stack[-1])
0x88: Pop(1)
0x89: Push("default")
0x8a: @ SetBackground(Stack[-1])
0x8b: Pop(1)
0x8c: Push("menumusic")
0x8d: @ PlaySound(Stack[-1])
0x8e: Pop(1)
0x8f: Push((bool) 1)
0x90: @ ShowCursor(Stack[-1])
0x91: Pop(1)
0x92: Push(Stack[-9])
0x93: IF (Stack[-1] == 0) GOTO 0x99; Pop(1)

0x94: Push("game_choose_pers.xml")
0x95: Push((bool) 0)
0x96: @ CreateWindow(Stack[-2], Stack[-1], Stack[-5])
0x97: Pop(2)
0x98: GOTO 0xa1

0x99: PushEmpty(object)
0x9a: Call2 0x70

0x9b: Stack[3 + Tasks[-1].StackPointer] = Stack[-1]
0x9c: Pop(1)
0x9d: PushEmpty(object)
0x9e: Call2 0x78

0x9f: Stack[4 + Tasks[-1].StackPointer] = Stack[-1]
0xa0: Pop(1)
0xa1: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0xa2: IF (Stack[-1] == 0) GOTO 0xa6; Pop(1)

0xa3: @ ProcessEvents()
0xa4: Pop(0)
0xa5: GOTO 0xa1

0xa6: PushEmpty()
0xa7: Call2 0x24b

0xa8: Pop(0)
0xa9: Push((int) 1)
0xaa: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] == Stack[-1])
0xab: IF (Stack[-1] == 0) GOTO 0xc7; Pop(1)

0xac: Push("menumusic")
0xad: @ PauseSound(Stack[-1])
0xae: Pop(1)
0xaf: PushEmpty(int)
0xb0: Stack[-1] = (int) 1
0xb1: Push(-1, 1); TaskCall(1)
0xb2: Call2 0x41

0xb3: Pop(-1, 1); TaskReturn
0xb4: Pop(1)
0xb5: PushEmpty(string, bool)
0xb6: Stack[-2] = "intro_danko.wmv"
0xb7: Stack[-1] = (bool) 1
0xb8: Push(-2, 4); TaskCall(0)
0xb9: Call2 0x0

0xba: Pop(-2, 4); TaskReturn
0xbb: Pop(2)
0xbc: @ RemoveWorld()
0xbd: Pop(0)
0xbe: @ UISync()
0xbf: Pop(0)
0xc0: @ DestroyWindow()
0xc1: Pop(0)
0xc2: Push("world_danko.xml")
0xc3: Push("player_danko.xml")
0xc4: @ NewGame(Stack[-2], Stack[-1])
0xc5: Pop(2)
0xc6: GOTO 0x134

0xc7: Push((int) 2)
0xc8: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] == Stack[-1])
0xc9: IF (Stack[-1] == 0) GOTO 0xe5; Pop(1)

0xca: Push("menumusic")
0xcb: @ PauseSound(Stack[-1])
0xcc: Pop(1)
0xcd: PushEmpty(int)
0xce: Stack[-1] = (int) 2
0xcf: Push(-1, 1); TaskCall(1)
0xd0: Call2 0x41

0xd1: Pop(-1, 1); TaskReturn
0xd2: Pop(1)
0xd3: PushEmpty(string, bool)
0xd4: Stack[-2] = "intro_burah.wmv"
0xd5: Stack[-1] = (bool) 1
0xd6: Push(-2, 4); TaskCall(0)
0xd7: Call2 0x0

0xd8: Pop(-2, 4); TaskReturn
0xd9: Pop(2)
0xda: @ RemoveWorld()
0xdb: Pop(0)
0xdc: @ UISync()
0xdd: Pop(0)
0xde: @ DestroyWindow()
0xdf: Pop(0)
0xe0: Push("world_burah.xml")
0xe1: Push("player_burah.xml")
0xe2: @ NewGame(Stack[-2], Stack[-1])
0xe3: Pop(2)
0xe4: GOTO 0x134

0xe5: Push((int) 3)
0xe6: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] == Stack[-1])
0xe7: IF (Stack[-1] == 0) GOTO 0x103; Pop(1)

0xe8: Push("menumusic")
0xe9: @ PauseSound(Stack[-1])
0xea: Pop(1)
0xeb: PushEmpty(int)
0xec: Stack[-1] = (int) 3
0xed: Push(-1, 1); TaskCall(1)
0xee: Call2 0x41

0xef: Pop(-1, 1); TaskReturn
0xf0: Pop(1)
0xf1: PushEmpty(string, bool)
0xf2: Stack[-2] = "intro_klara.wmv"
0xf3: Stack[-1] = (bool) 1
0xf4: Push(-2, 4); TaskCall(0)
0xf5: Call2 0x0

0xf6: Pop(-2, 4); TaskReturn
0xf7: Pop(2)
0xf8: @ RemoveWorld()
0xf9: Pop(0)
0xfa: @ UISync()
0xfb: Pop(0)
0xfc: @ DestroyWindow()
0xfd: Pop(0)
0xfe: Push("world_klara.xml")
0xff: Push("player_klara.xml")
0x100: @ NewGame(Stack[-2], Stack[-1])
0x101: Pop(2)
0x102: GOTO 0x134

0x103: Push((int) 4)
0x104: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] == Stack[-1])
0x105: IF (Stack[-1] == 0) GOTO 0x116; Pop(1)

0x106: Push("menumusic")
0x107: @ PauseSound(Stack[-1])
0x108: Pop(1)
0x109: Push("Loading : ")
0x10a: Pop(1); Push(Stack[-1] + Stack[10 + StackPtr]);
0x10b: @ Trace(Stack[-1])
0x10c: Pop(1)
0x10d: @ RemoveWorld()
0x10e: Pop(0)
0x10f: @ UISync()
0x110: Pop(0)
0x111: @ DestroyWindow()
0x112: Pop(0)
0x113: @ LoadGame(Stack[-4], Stack[-10])
0x114: Pop(0)
0x115: GOTO 0x134

0x116: Push((int) 5)
0x117: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] == Stack[-1])
0x118: IF (Stack[-1] == 0) GOTO 0x127; Pop(1)

0x119: Pop(0); Push((bool) Stack[9 + Tasks[-1].StackPointer] == 0)
0x11a: IF (Stack[-1] == 0) GOTO 0x120; Pop(1)

0x11b: @ DestroyWindow()
0x11c: Pop(0)
0x11d: @ SaveGame(Stack[-3])
0x11e: Pop(0)
0x11f: GOTO 0x126

0x120: @ DestroyWindow()
0x121: Pop(0)
0x122: @@ GetFileName(Stack[-1])
0x123: Pop(0)
0x124: @ SaveGame(Stack[-2], Stack[-1])
0x125: Pop(0)
0x126: GOTO 0x134

0x127: Push((int) 7)
0x128: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] == Stack[-1])
0x129: IF (Stack[-1] == 0) GOTO 0x134; Pop(1)

0x12a: @ RemoveWorld()
0x12b: Pop(0)
0x12c: @ UISync()
0x12d: Pop(0)
0x12e: @ DestroyWindow()
0x12f: Pop(0)
0x130: Push("world_intro.xml")
0x131: Push("player_intro.xml")
0x132: @ NewGame(Stack[-2], Stack[-1])
0x133: Pop(2)
0x134: Return(); Pop(8)

0x135: PushEmpty()
0x136: Push((int) 27)
0x137: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x138: IF (Stack[-1] == 0) GOTO 0x13c; Pop(1)

0x139: PushEmpty()
0x13a: Call2 0x23f

0x13b: Pop(0)
0x13c: Return(); Pop(0)

0x13d: PushEmpty(bool, bool)
0x13e: Push("newgame")
0x13f: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x140: IF (Stack[-1] == 0) GOTO 0x145; Pop(1)

0x141: Stack[2 + Tasks[-1].StackPointer] = (int)7
0x142: @ StopEventProcessing()
0x143: Pop(0)
0x144: GOTO 0x23e

0x145: Push("quitgame")
0x146: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x147: IF (Stack[-1] == 0) GOTO 0x14f; Pop(1)

0x148: Push("Quit game")
0x149: @ UITrace(Stack[-1])
0x14a: Pop(1)
0x14b: @ Quit()
0x14c: Pop(0)
0x14d: Return(); Pop(2)

0x14e: GOTO 0x23e

0x14f: Push("loadgame")
0x150: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x151: IF (Stack[-1] == 0) GOTO 0x15b; Pop(1)

0x152: PushEmpty()
0x153: Call2 0x24b

0x154: Pop(0)
0x155: Push("load.xml")
0x156: Push((bool) 0)
0x157: @ CreateWindow(Stack[-2], Stack[-1], Stack[-6])
0x158: Pop(2)
0x159: Return(); Pop(2)

0x15a: GOTO 0x23e

0x15b: Push("savegame")
0x15c: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x15d: IF (Stack[-1] == 0) GOTO 0x167; Pop(1)

0x15e: PushEmpty()
0x15f: Call2 0x24b

0x160: Pop(0)
0x161: Push("save.xml")
0x162: Push((bool) 0)
0x163: @ CreateWindow(Stack[-2], Stack[-1], Stack[-7])
0x164: Pop(2)
0x165: Return(); Pop(2)

0x166: GOTO 0x23e

0x167: Push("gameoptions")
0x168: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x169: IF (Stack[-1] == 0) GOTO 0x173; Pop(1)

0x16a: PushEmpty()
0x16b: Call2 0x24b

0x16c: Pop(0)
0x16d: Push("options.xml")
0x16e: Push((bool) 0)
0x16f: @ CreateWindow(Stack[-2], Stack[-1], Stack[-8])
0x170: Pop(2)
0x171: Return(); Pop(2)

0x172: GOTO 0x23e

0x173: Push("continue")
0x174: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x175: IF (Stack[-1] == 0) GOTO 0x17b; Pop(1)

0x176: Stack[2 + Tasks[-1].StackPointer] = (int)6
0x177: @ StopEventProcessing()
0x178: Pop(0)
0x179: Return(); Pop(2)

0x17a: GOTO 0x23e

0x17b: Push("credits")
0x17c: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x17d: IF (Stack[-1] == 0) GOTO 0x193; Pop(1)

0x17e: PushEmpty()
0x17f: Call2 0x24b

0x180: Pop(0)
0x181: PushEmpty(int)
0x182: Stack[-1] = (int) 8
0x183: Push(-1, 1); TaskCall(1)
0x184: Call2 0x41

0x185: Pop(-1, 1); TaskReturn
0x186: Pop(1)
0x187: PushEmpty(object)
0x188: Call2 0x70

0x189: Stack[3 + Tasks[-1].StackPointer] = Stack[-1]
0x18a: Pop(1)
0x18b: PushEmpty(object)
0x18c: Call2 0x78

0x18d: Stack[4 + Tasks[-1].StackPointer] = Stack[-1]
0x18e: Pop(1)
0x18f: Push((bool) 1)
0x190: @ ShowCursor(Stack[-1])
0x191: Pop(1)
0x192: GOTO 0x23e

0x193: Push("danko")
0x194: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x195: IF (Stack[-1] == 0) GOTO 0x1b6; Pop(1)

0x196: Push((int) 0)
0x197: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x198: IF (Stack[-1] == 0) GOTO 0x19d; Pop(1)

0x199: Stack[2 + Tasks[-1].StackPointer] = (int)1
0x19a: @ StopEventProcessing()
0x19b: Pop(0)
0x19c: GOTO 0x1b4

0x19d: Push((int) 1)
0x19e: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x19f: IF (Stack[-1] == 0) GOTO 0x1a9; Pop(1)

0x1a0: Push((int) 202)
0x1a1: Push("player_name")
0x1a2: @ SendMessage(Stack[-2], Stack[-1])
0x1a3: Pop(2)
0x1a4: Push((int) 203)
0x1a5: Push("player_desc")
0x1a6: @ SendMessage(Stack[-2], Stack[-1])
0x1a7: Pop(2)
0x1a8: GOTO 0x1b4

0x1a9: Push((int) 2)
0x1aa: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x1ab: IF (Stack[-1] == 0) GOTO 0x1b4; Pop(1)

0x1ac: Push((int) -1)
0x1ad: Push("player_name")
0x1ae: @ SendMessage(Stack[-2], Stack[-1])
0x1af: Pop(2)
0x1b0: Push((int) -1)
0x1b1: Push("player_desc")
0x1b2: @ SendMessage(Stack[-2], Stack[-1])
0x1b3: Pop(2)
0x1b4: Return(); Pop(2)

0x1b5: GOTO 0x23e

0x1b6: Push("burah")
0x1b7: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x1b8: IF (Stack[-1] == 0) GOTO 0x1d9; Pop(1)

0x1b9: Push((int) 0)
0x1ba: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x1bb: IF (Stack[-1] == 0) GOTO 0x1c0; Pop(1)

0x1bc: Stack[2 + Tasks[-1].StackPointer] = (int)2
0x1bd: @ StopEventProcessing()
0x1be: Pop(0)
0x1bf: GOTO 0x1d7

0x1c0: Push((int) 1)
0x1c1: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x1c2: IF (Stack[-1] == 0) GOTO 0x1cc; Pop(1)

0x1c3: Push((int) 205)
0x1c4: Push("player_name")
0x1c5: @ SendMessage(Stack[-2], Stack[-1])
0x1c6: Pop(2)
0x1c7: Push((int) 206)
0x1c8: Push("player_desc")
0x1c9: @ SendMessage(Stack[-2], Stack[-1])
0x1ca: Pop(2)
0x1cb: GOTO 0x1d7

0x1cc: Push((int) 2)
0x1cd: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x1ce: IF (Stack[-1] == 0) GOTO 0x1d7; Pop(1)

0x1cf: Push((int) -1)
0x1d0: Push("player_name")
0x1d1: @ SendMessage(Stack[-2], Stack[-1])
0x1d2: Pop(2)
0x1d3: Push((int) -1)
0x1d4: Push("player_desc")
0x1d5: @ SendMessage(Stack[-2], Stack[-1])
0x1d6: Pop(2)
0x1d7: Return(); Pop(2)

0x1d8: GOTO 0x23e

0x1d9: Push("klara")
0x1da: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x1db: IF (Stack[-1] == 0) GOTO 0x216; Pop(1)

0x1dc: Stack[-1] = (bool) 1
0x1dd: PushEmpty(bool)
0x1de: Stack[-1] = (bool) 0
0x1df: PushEmpty(bool)
0x1e0: Call2 0x26e

0x1e1: Pop(0)
0x1e2: Pop(1); Push((bool) Stack[-1] == 0)
0x1e3: IF (Stack[-1] == 0) GOTO 0x1ea; Pop(1)

0x1e4: PushEmpty(bool)
0x1e5: Call2 0x266

0x1e6: Pop(0)
0x1e7: Pop(1); Push((bool) Stack[-1] == 0)
0x1e8: IF (Stack[-1] == 0) GOTO 0x1ea; Pop(1)

0x1e9: Stack[-1] = (bool) 1
0x1ea: IF (Stack[-1] == 0) GOTO 0x1ec; Pop(1)

0x1eb: Stack[-1] = (bool) 0
0x1ec: Push((int) 0)
0x1ed: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x1ee: IF (Stack[-1] == 0) GOTO 0x1f6; Pop(1)

0x1ef: Pop(0); Push((bool) Stack[-1] == 0)
0x1f0: IF (Stack[-1] == 0) GOTO 0x1f2; Pop(1)

0x1f1: Return(); Pop(2)

0x1f2: Stack[2 + Tasks[-1].StackPointer] = (int)3
0x1f3: @ StopEventProcessing()
0x1f4: Pop(0)
0x1f5: GOTO 0x214

0x1f6: Push((int) 1)
0x1f7: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x1f8: IF (Stack[-1] == 0) GOTO 0x209; Pop(1)

0x1f9: Push((int) 208)
0x1fa: Push("player_name")
0x1fb: @ SendMessage(Stack[-2], Stack[-1])
0x1fc: Pop(2)
0x1fd: Push(Stack[-1])
0x1fe: IF (Stack[-1] == 0) GOTO 0x204; Pop(1)

0x1ff: Push((int) 209)
0x200: Push("player_desc")
0x201: @ SendMessage(Stack[-2], Stack[-1])
0x202: Pop(2)
0x203: GOTO 0x208

0x204: Push((int) 213)
0x205: Push("player_desc")
0x206: @ SendMessage(Stack[-2], Stack[-1])
0x207: Pop(2)
0x208: GOTO 0x214

0x209: Push((int) 2)
0x20a: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x20b: IF (Stack[-1] == 0) GOTO 0x214; Pop(1)

0x20c: Push((int) -1)
0x20d: Push("player_name")
0x20e: @ SendMessage(Stack[-2], Stack[-1])
0x20f: Pop(2)
0x210: Push((int) -1)
0x211: Push("player_desc")
0x212: @ SendMessage(Stack[-2], Stack[-1])
0x213: Pop(2)
0x214: Return(); Pop(2)

0x215: GOTO 0x23e

0x216: Push("load")
0x217: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x218: IF (Stack[-1] == 0) GOTO 0x227; Pop(1)

0x219: Push((int) 0)
0x21a: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x21b: IF (Stack[-1] == 0) GOTO 0x222; Pop(1)

0x21c: Stack[2 + Tasks[-1].StackPointer] = (int)4
0x21d: @@ GetFileName(Stack[-10])
0x21e: Pop(0)
0x21f: @ StopEventProcessing()
0x220: Pop(0)
0x221: GOTO 0x225

0x222: PushEmpty()
0x223: Call2 0x23f

0x224: Pop(0)
0x225: Return(); Pop(2)

0x226: GOTO 0x23e

0x227: Push("save")
0x228: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x229: IF (Stack[-1] == 0) GOTO 0x237; Pop(1)

0x22a: Push((int) 0)
0x22b: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x22c: IF (Stack[-1] == 0) GOTO 0x232; Pop(1)

0x22d: Stack[2 + Tasks[-1].StackPointer] = (int)5
0x22e: Stack[9 + Tasks[-1].StackPointer] = Stack[-3]
0x22f: @ StopEventProcessing()
0x230: Pop(0)
0x231: GOTO 0x235

0x232: PushEmpty()
0x233: Call2 0x23f

0x234: Pop(0)
0x235: Return(); Pop(2)

0x236: GOTO 0x23e

0x237: Push("options")
0x238: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x239: IF (Stack[-1] == 0) GOTO 0x23e; Pop(1)

0x23a: PushEmpty()
0x23b: Call2 0x23f

0x23c: Pop(0)
0x23d: Return(); Pop(2)

0x23e: Return(); Pop(2)

0x23f: PushEmpty()
0x240: Call2 0x24b

0x241: Pop(0)
0x242: PushEmpty(object)
0x243: Call2 0x70

0x244: Stack[3 + Tasks[-1].StackPointer] = Stack[-1]
0x245: Pop(1)
0x246: PushEmpty(object)
0x247: Call2 0x78

0x248: Stack[4 + Tasks[-1].StackPointer] = Stack[-1]
0x249: Pop(1)
0x24a: Return(); Pop(0)

0x24b: Push( Stack[3 + Tasks[-1].StackPointer] )
0x24c: IF (Stack[-1] == 0) GOTO 0x24f; Pop(1)

0x24d: @@ DestroyWindow()
0x24e: Pop(0)
0x24f: Push( Stack[4 + Tasks[-1].StackPointer] )
0x250: IF (Stack[-1] == 0) GOTO 0x253; Pop(1)

0x251: @@ DestroyWindow()
0x252: Pop(0)
0x253: Push( Stack[5 + Tasks[-1].StackPointer] )
0x254: IF (Stack[-1] == 0) GOTO 0x257; Pop(1)

0x255: @@ DestroyWindow()
0x256: Pop(0)
0x257: Push( Stack[6 + Tasks[-1].StackPointer] )
0x258: IF (Stack[-1] == 0) GOTO 0x25b; Pop(1)

0x259: @@ DestroyWindow()
0x25a: Pop(0)
0x25b: Push( Stack[7 + Tasks[-1].StackPointer] )
0x25c: IF (Stack[-1] == 0) GOTO 0x25f; Pop(1)

0x25d: @@ DestroyWindow()
0x25e: Pop(0)
0x25f: Push( Stack[8 + Tasks[-1].StackPointer] )
0x260: IF (Stack[-1] == 0) GOTO 0x263; Pop(1)

0x261: @@ DestroyWindow()
0x262: Pop(0)
0x263: @ CaptureKeyboard()
0x264: Pop(0)
0x265: Return(); Pop(0)

0x266: PushEmpty(int, int)
0x267: Push("BurahCompleted")
0x268: Push((int) 0)
0x269: @ GetRegistryData(Stack[-3], Stack[-2], Stack[-1])
0x26a: Pop(2)
0x26b: Push((int) 0)
0x26c: Stack[-4] = Stack[-2] != Stack[-1]; Pop(1);
0x26d: Return(); Pop(2)

0x26e: PushEmpty(int, int)
0x26f: Push("DankoCompleted")
0x270: Push((int) 0)
0x271: @ GetRegistryData(Stack[-3], Stack[-2], Stack[-1])
0x272: Pop(2)
0x273: Push((int) 0)
0x274: Stack[-4] = Stack[-2] != Stack[-1]; Pop(1);
0x275: Return(); Pop(2)

