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
	fin_utop.wmv
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
		EVENT_100 Op = 0x156 Vars = (int)
		EVENT_200 Op = 0x15e Vars = (int, string, object)
		EVENT_102 Op = 0x3fd Vars = (int)
		EVENT_101 Op = 0x424 Vars = (int)


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
0x74: Stack[-2] = "fin_utop.wmv"
0x75: Stack[-1] = (bool) 0
0x76: Push(-2, 4); TaskCall(0)
0x77: Call2 0x0

0x78: Pop(-2, 4); TaskReturn
0x79: Pop(2)
0x7a: Push("menumusic")
0x7b: @ PlaySound(Stack[-1])
0x7c: Pop(1)
0x7d: PushEmpty(int)
0x7e: Stack[-1] = (int) 8
0x7f: Push(-1, 1); TaskCall(1)
0x80: Call2 0x59

0x81: Pop(-1, 1); TaskReturn
0x82: Pop(1)
0x83: PushEmpty(bool)
0x84: Stack[-1] = (bool) 0
0x85: Call2 0x98

0x86: Pop(1)
0x87: Return(); Pop(0)

0x88: PushEmpty(object, object)
0x89: Push("game_buttons.xml")
0x8a: Push((bool) 0)
0x8b: @ CreateWindow(Stack[-2], Stack[-1], Stack[-3])
0x8c: Pop(2)
0x8d: Stack[-3] = Stack[-1]
0x8e: Return(); Pop(2)

0x8f: Stack[-1] = 0
0x90: PushEmpty(object, object)
0x91: Push("game_logo.xml")
0x92: Push((bool) 0)
0x93: @ CreateWindow(Stack[-2], Stack[-1], Stack[-3])
0x94: Pop(2)
0x95: Stack[-3] = Stack[-1]
0x96: Return(); Pop(2)

0x97: Stack[-1] = 0
0x98: PushEmpty(bool, bool, bool, string, bool, bool, bool, string)
0x99: Stack[14 + Tasks[-1].StackPointer] = Stack[-9]
0x9a: @ CaptureKeyboard()
0x9b: Pop(0)
0x9c: Stack[2 + Tasks[-1].StackPointer] = (int)0
0x9d: @ GetWindowSize(Stack[-0], Stack[-1])
0x9e: Pop(0)
0x9f: Push("default")
0xa0: @ SetCursor(Stack[-1])
0xa1: Pop(1)
0xa2: Push("default")
0xa3: @ SetBackground(Stack[-1])
0xa4: Pop(1)
0xa5: Push("menumusic")
0xa6: @ PlaySound(Stack[-1])
0xa7: Pop(1)
0xa8: Push((bool) 1)
0xa9: @ ShowCursor(Stack[-1])
0xaa: Pop(1)
0xab: PushEmpty(string)
0xac: Stack[-1] = ""
0xad: Call2 0x398

0xae: Pop(1)
0xaf: PushEmpty(string)
0xb0: Stack[-1] = ""
0xb1: Call2 0x39d

0xb2: Pop(1)
0xb3: Push(Stack[-9])
0xb4: IF (Stack[-1] == 0) GOTO 0xba; Pop(1)

0xb5: Push("game_choose_pers.xml")
0xb6: Push((bool) 0)
0xb7: @ CreateWindow(Stack[-2], Stack[-1], Stack[-5])
0xb8: Pop(2)
0xb9: GOTO 0xc2

0xba: PushEmpty(object)
0xbb: Call2 0x88

0xbc: Stack[3 + Tasks[-1].StackPointer] = Stack[-1]
0xbd: Pop(1)
0xbe: PushEmpty(object)
0xbf: Call2 0x90

0xc0: Stack[4 + Tasks[-1].StackPointer] = Stack[-1]
0xc1: Pop(1)
0xc2: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0xc3: IF (Stack[-1] == 0) GOTO 0xc7; Pop(1)

0xc4: @ ProcessEvents()
0xc5: Pop(0)
0xc6: GOTO 0xc2

0xc7: PushEmpty()
0xc8: Call2 0x27e

0xc9: Pop(0)
0xca: Push((int) 1)
0xcb: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] == Stack[-1])
0xcc: IF (Stack[-1] == 0) GOTO 0xe8; Pop(1)

0xcd: Push("menumusic")
0xce: @ PauseSound(Stack[-1])
0xcf: Pop(1)
0xd0: PushEmpty(int)
0xd1: Stack[-1] = (int) 1
0xd2: Push(-1, 1); TaskCall(1)
0xd3: Call2 0x59

0xd4: Pop(-1, 1); TaskReturn
0xd5: Pop(1)
0xd6: PushEmpty(string, bool)
0xd7: Stack[-2] = "intro_danko.wmv"
0xd8: Stack[-1] = (bool) 1
0xd9: Push(-2, 4); TaskCall(0)
0xda: Call2 0x0

0xdb: Pop(-2, 4); TaskReturn
0xdc: Pop(2)
0xdd: @ RemoveWorld()
0xde: Pop(0)
0xdf: @ UISync()
0xe0: Pop(0)
0xe1: @ DestroyWindow()
0xe2: Pop(0)
0xe3: Push("world_danko.xml")
0xe4: Push("player_danko.xml")
0xe5: @ NewGame(Stack[-2], Stack[-1])
0xe6: Pop(2)
0xe7: GOTO 0x155

0xe8: Push((int) 2)
0xe9: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] == Stack[-1])
0xea: IF (Stack[-1] == 0) GOTO 0x106; Pop(1)

0xeb: Push("menumusic")
0xec: @ PauseSound(Stack[-1])
0xed: Pop(1)
0xee: PushEmpty(int)
0xef: Stack[-1] = (int) 2
0xf0: Push(-1, 1); TaskCall(1)
0xf1: Call2 0x59

0xf2: Pop(-1, 1); TaskReturn
0xf3: Pop(1)
0xf4: PushEmpty(string, bool)
0xf5: Stack[-2] = "intro_burah.wmv"
0xf6: Stack[-1] = (bool) 1
0xf7: Push(-2, 4); TaskCall(0)
0xf8: Call2 0x0

0xf9: Pop(-2, 4); TaskReturn
0xfa: Pop(2)
0xfb: @ RemoveWorld()
0xfc: Pop(0)
0xfd: @ UISync()
0xfe: Pop(0)
0xff: @ DestroyWindow()
0x100: Pop(0)
0x101: Push("world_burah.xml")
0x102: Push("player_burah.xml")
0x103: @ NewGame(Stack[-2], Stack[-1])
0x104: Pop(2)
0x105: GOTO 0x155

0x106: Push((int) 3)
0x107: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] == Stack[-1])
0x108: IF (Stack[-1] == 0) GOTO 0x124; Pop(1)

0x109: Push("menumusic")
0x10a: @ PauseSound(Stack[-1])
0x10b: Pop(1)
0x10c: PushEmpty(int)
0x10d: Stack[-1] = (int) 3
0x10e: Push(-1, 1); TaskCall(1)
0x10f: Call2 0x59

0x110: Pop(-1, 1); TaskReturn
0x111: Pop(1)
0x112: PushEmpty(string, bool)
0x113: Stack[-2] = "intro_klara.wmv"
0x114: Stack[-1] = (bool) 1
0x115: Push(-2, 4); TaskCall(0)
0x116: Call2 0x0

0x117: Pop(-2, 4); TaskReturn
0x118: Pop(2)
0x119: @ RemoveWorld()
0x11a: Pop(0)
0x11b: @ UISync()
0x11c: Pop(0)
0x11d: @ DestroyWindow()
0x11e: Pop(0)
0x11f: Push("world_klara.xml")
0x120: Push("player_klara.xml")
0x121: @ NewGame(Stack[-2], Stack[-1])
0x122: Pop(2)
0x123: GOTO 0x155

0x124: Push((int) 4)
0x125: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] == Stack[-1])
0x126: IF (Stack[-1] == 0) GOTO 0x137; Pop(1)

0x127: Push("menumusic")
0x128: @ PauseSound(Stack[-1])
0x129: Pop(1)
0x12a: Push("Loading : ")
0x12b: Pop(1); Push(Stack[-1] + Stack[10 + StackPtr]);
0x12c: @ Trace(Stack[-1])
0x12d: Pop(1)
0x12e: @ RemoveWorld()
0x12f: Pop(0)
0x130: @ UISync()
0x131: Pop(0)
0x132: @ DestroyWindow()
0x133: Pop(0)
0x134: @ LoadGame(Stack[-4], Stack[-10])
0x135: Pop(0)
0x136: GOTO 0x155

0x137: Push((int) 5)
0x138: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] == Stack[-1])
0x139: IF (Stack[-1] == 0) GOTO 0x148; Pop(1)

0x13a: Pop(0); Push((bool) Stack[9 + Tasks[-1].StackPointer] == 0)
0x13b: IF (Stack[-1] == 0) GOTO 0x141; Pop(1)

0x13c: @ DestroyWindow()
0x13d: Pop(0)
0x13e: @ SaveGame(Stack[-3])
0x13f: Pop(0)
0x140: GOTO 0x147

0x141: @ DestroyWindow()
0x142: Pop(0)
0x143: @@ GetFileName(Stack[-1])
0x144: Pop(0)
0x145: @ SaveGame(Stack[-2], Stack[-1])
0x146: Pop(0)
0x147: GOTO 0x155

0x148: Push((int) 7)
0x149: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] == Stack[-1])
0x14a: IF (Stack[-1] == 0) GOTO 0x155; Pop(1)

0x14b: @ RemoveWorld()
0x14c: Pop(0)
0x14d: @ UISync()
0x14e: Pop(0)
0x14f: @ DestroyWindow()
0x150: Pop(0)
0x151: Push("world_intro.xml")
0x152: Push("player_intro.xml")
0x153: @ NewGame(Stack[-2], Stack[-1])
0x154: Pop(2)
0x155: Return(); Pop(8)

0x156: PushEmpty()
0x157: Push((int) 27)
0x158: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x159: IF (Stack[-1] == 0) GOTO 0x15d; Pop(1)

0x15a: PushEmpty()
0x15b: Call2 0x26e

0x15c: Pop(0)
0x15d: Return(); Pop(0)

0x15e: PushEmpty()
0x15f: Push("newgame")
0x160: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x161: IF (Stack[-1] == 0) GOTO 0x166; Pop(1)

0x162: Stack[2 + Tasks[-1].StackPointer] = (int)7
0x163: @ StopEventProcessing()
0x164: Pop(0)
0x165: GOTO 0x26d

0x166: Push("quitgame")
0x167: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x168: IF (Stack[-1] == 0) GOTO 0x170; Pop(1)

0x169: Push("Quit game")
0x16a: @ UITrace(Stack[-1])
0x16b: Pop(1)
0x16c: @ Quit()
0x16d: Pop(0)
0x16e: Return(); Pop(0)

0x16f: GOTO 0x26d

0x170: Push("loadgame")
0x171: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x172: IF (Stack[-1] == 0) GOTO 0x17c; Pop(1)

0x173: PushEmpty()
0x174: Call2 0x27e

0x175: Pop(0)
0x176: Push("load.xml")
0x177: Push((bool) 0)
0x178: @ CreateWindow(Stack[-2], Stack[-1], Stack[-6])
0x179: Pop(2)
0x17a: Return(); Pop(0)

0x17b: GOTO 0x26d

0x17c: Push("savegame")
0x17d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x17e: IF (Stack[-1] == 0) GOTO 0x188; Pop(1)

0x17f: PushEmpty()
0x180: Call2 0x27e

0x181: Pop(0)
0x182: Push("save.xml")
0x183: Push((bool) 0)
0x184: @ CreateWindow(Stack[-2], Stack[-1], Stack[-7])
0x185: Pop(2)
0x186: Return(); Pop(0)

0x187: GOTO 0x26d

0x188: Push("gameoptions")
0x189: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x18a: IF (Stack[-1] == 0) GOTO 0x194; Pop(1)

0x18b: PushEmpty()
0x18c: Call2 0x27e

0x18d: Pop(0)
0x18e: Push("options.xml")
0x18f: Push((bool) 0)
0x190: @ CreateWindow(Stack[-2], Stack[-1], Stack[-8])
0x191: Pop(2)
0x192: Return(); Pop(0)

0x193: GOTO 0x26d

0x194: Push("continue")
0x195: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x196: IF (Stack[-1] == 0) GOTO 0x19c; Pop(1)

0x197: Stack[2 + Tasks[-1].StackPointer] = (int)6
0x198: @ StopEventProcessing()
0x199: Pop(0)
0x19a: Return(); Pop(0)

0x19b: GOTO 0x26d

0x19c: Push("credits")
0x19d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x19e: IF (Stack[-1] == 0) GOTO 0x1ba; Pop(1)

0x19f: PushEmpty()
0x1a0: Call2 0x27e

0x1a1: Pop(0)
0x1a2: PushEmpty(int)
0x1a3: Stack[-1] = (int) 8
0x1a4: Push(-1, 1); TaskCall(1)
0x1a5: Call2 0x59

0x1a6: Pop(-1, 1); TaskReturn
0x1a7: Pop(1)
0x1a8: PushEmpty(object)
0x1a9: Call2 0x88

0x1aa: Stack[3 + Tasks[-1].StackPointer] = Stack[-1]
0x1ab: Pop(1)
0x1ac: PushEmpty(object)
0x1ad: Call2 0x90

0x1ae: Stack[4 + Tasks[-1].StackPointer] = Stack[-1]
0x1af: Pop(1)
0x1b0: Push((bool) 1)
0x1b1: @ ShowCursor(Stack[-1])
0x1b2: Pop(1)
0x1b3: @ CaptureKeyboard()
0x1b4: Pop(0)
0x1b5: PushEmpty(string)
0x1b6: Stack[-1] = ""
0x1b7: Call2 0x398

0x1b8: Pop(1)
0x1b9: GOTO 0x26d

0x1ba: Push("danko")
0x1bb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1bc: IF (Stack[-1] == 0) GOTO 0x1dd; Pop(1)

0x1bd: Push((int) 0)
0x1be: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1bf: IF (Stack[-1] == 0) GOTO 0x1c4; Pop(1)

0x1c0: Stack[2 + Tasks[-1].StackPointer] = (int)1
0x1c1: @ StopEventProcessing()
0x1c2: Pop(0)
0x1c3: GOTO 0x1db

0x1c4: Push((int) 1)
0x1c5: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1c6: IF (Stack[-1] == 0) GOTO 0x1d0; Pop(1)

0x1c7: Push((int) 202)
0x1c8: Push("player_name")
0x1c9: @ SendMessage(Stack[-2], Stack[-1])
0x1ca: Pop(2)
0x1cb: Push((int) 203)
0x1cc: Push("player_desc")
0x1cd: @ SendMessage(Stack[-2], Stack[-1])
0x1ce: Pop(2)
0x1cf: GOTO 0x1db

0x1d0: Push((int) 2)
0x1d1: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1d2: IF (Stack[-1] == 0) GOTO 0x1db; Pop(1)

0x1d3: Push((int) -1)
0x1d4: Push("player_name")
0x1d5: @ SendMessage(Stack[-2], Stack[-1])
0x1d6: Pop(2)
0x1d7: Push((int) -1)
0x1d8: Push("player_desc")
0x1d9: @ SendMessage(Stack[-2], Stack[-1])
0x1da: Pop(2)
0x1db: Return(); Pop(0)

0x1dc: GOTO 0x26d

0x1dd: Push("burah")
0x1de: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1df: IF (Stack[-1] == 0) GOTO 0x200; Pop(1)

0x1e0: Push((int) 0)
0x1e1: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1e2: IF (Stack[-1] == 0) GOTO 0x1e7; Pop(1)

0x1e3: Stack[2 + Tasks[-1].StackPointer] = (int)2
0x1e4: @ StopEventProcessing()
0x1e5: Pop(0)
0x1e6: GOTO 0x1fe

0x1e7: Push((int) 1)
0x1e8: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1e9: IF (Stack[-1] == 0) GOTO 0x1f3; Pop(1)

0x1ea: Push((int) 205)
0x1eb: Push("player_name")
0x1ec: @ SendMessage(Stack[-2], Stack[-1])
0x1ed: Pop(2)
0x1ee: Push((int) 206)
0x1ef: Push("player_desc")
0x1f0: @ SendMessage(Stack[-2], Stack[-1])
0x1f1: Pop(2)
0x1f2: GOTO 0x1fe

0x1f3: Push((int) 2)
0x1f4: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1f5: IF (Stack[-1] == 0) GOTO 0x1fe; Pop(1)

0x1f6: Push((int) -1)
0x1f7: Push("player_name")
0x1f8: @ SendMessage(Stack[-2], Stack[-1])
0x1f9: Pop(2)
0x1fa: Push((int) -1)
0x1fb: Push("player_desc")
0x1fc: @ SendMessage(Stack[-2], Stack[-1])
0x1fd: Pop(2)
0x1fe: Return(); Pop(0)

0x1ff: GOTO 0x26d

0x200: Push("klara")
0x201: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x202: IF (Stack[-1] == 0) GOTO 0x245; Pop(1)

0x203: Push((int) 0)
0x204: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x205: IF (Stack[-1] == 0) GOTO 0x219; Pop(1)

0x206: PushEmpty(bool)
0x207: Stack[-1] = (bool) 0
0x208: PushEmpty(bool)
0x209: Call2 0x473

0x20a: Pop(0)
0x20b: Pop(1); Push((bool) Stack[-1] == 0)
0x20c: IF (Stack[-1] == 0) GOTO 0x213; Pop(1)

0x20d: PushEmpty(bool)
0x20e: Call2 0x46b

0x20f: Pop(0)
0x210: Pop(1); Push((bool) Stack[-1] == 0)
0x211: IF (Stack[-1] == 0) GOTO 0x213; Pop(1)

0x212: Stack[-1] = (bool) 1
0x213: IF (Stack[-1] == 0) GOTO 0x215; Pop(1)

0x214: Return(); Pop(0)

0x215: Stack[2 + Tasks[-1].StackPointer] = (int)3
0x216: @ StopEventProcessing()
0x217: Pop(0)
0x218: GOTO 0x243

0x219: Push((int) 1)
0x21a: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x21b: IF (Stack[-1] == 0) GOTO 0x238; Pop(1)

0x21c: Push((int) 208)
0x21d: Push("player_name")
0x21e: @ SendMessage(Stack[-2], Stack[-1])
0x21f: Pop(2)
0x220: PushEmpty(bool)
0x221: Stack[-1] = (bool) 0
0x222: PushEmpty(bool)
0x223: Call2 0x473

0x224: Pop(0)
0x225: Pop(1); Push((bool) Stack[-1] == 0)
0x226: IF (Stack[-1] == 0) GOTO 0x22d; Pop(1)

0x227: PushEmpty(bool)
0x228: Call2 0x46b

0x229: Pop(0)
0x22a: Pop(1); Push((bool) Stack[-1] == 0)
0x22b: IF (Stack[-1] == 0) GOTO 0x22d; Pop(1)

0x22c: Stack[-1] = (bool) 1
0x22d: IF (Stack[-1] == 0) GOTO 0x233; Pop(1)

0x22e: Push((int) 213)
0x22f: Push("player_desc")
0x230: @ SendMessage(Stack[-2], Stack[-1])
0x231: Pop(2)
0x232: GOTO 0x237

0x233: Push((int) 209)
0x234: Push("player_desc")
0x235: @ SendMessage(Stack[-2], Stack[-1])
0x236: Pop(2)
0x237: GOTO 0x243

0x238: Push((int) 2)
0x239: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x23a: IF (Stack[-1] == 0) GOTO 0x243; Pop(1)

0x23b: Push((int) -1)
0x23c: Push("player_name")
0x23d: @ SendMessage(Stack[-2], Stack[-1])
0x23e: Pop(2)
0x23f: Push((int) -1)
0x240: Push("player_desc")
0x241: @ SendMessage(Stack[-2], Stack[-1])
0x242: Pop(2)
0x243: Return(); Pop(0)

0x244: GOTO 0x26d

0x245: Push("load")
0x246: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x247: IF (Stack[-1] == 0) GOTO 0x256; Pop(1)

0x248: Push((int) 0)
0x249: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x24a: IF (Stack[-1] == 0) GOTO 0x251; Pop(1)

0x24b: Stack[2 + Tasks[-1].StackPointer] = (int)4
0x24c: @@ GetFileName(Stack[-10])
0x24d: Pop(0)
0x24e: @ StopEventProcessing()
0x24f: Pop(0)
0x250: GOTO 0x254

0x251: PushEmpty()
0x252: Call2 0x26e

0x253: Pop(0)
0x254: Return(); Pop(0)

0x255: GOTO 0x26d

0x256: Push("save")
0x257: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x258: IF (Stack[-1] == 0) GOTO 0x266; Pop(1)

0x259: Push((int) 0)
0x25a: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x25b: IF (Stack[-1] == 0) GOTO 0x261; Pop(1)

0x25c: Stack[2 + Tasks[-1].StackPointer] = (int)5
0x25d: Stack[9 + Tasks[-1].StackPointer] = Stack[-1]
0x25e: @ StopEventProcessing()
0x25f: Pop(0)
0x260: GOTO 0x264

0x261: PushEmpty()
0x262: Call2 0x26e

0x263: Pop(0)
0x264: Return(); Pop(0)

0x265: GOTO 0x26d

0x266: Push("options")
0x267: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x268: IF (Stack[-1] == 0) GOTO 0x26d; Pop(1)

0x269: PushEmpty()
0x26a: Call2 0x26e

0x26b: Pop(0)
0x26c: Return(); Pop(0)

0x26d: Return(); Pop(0)

0x26e: PushEmpty(string)
0x26f: Stack[-1] = ""
0x270: Call2 0x398

0x271: Pop(1)
0x272: PushEmpty()
0x273: Call2 0x27e

0x274: Pop(0)
0x275: PushEmpty(object)
0x276: Call2 0x88

0x277: Stack[3 + Tasks[-1].StackPointer] = Stack[-1]
0x278: Pop(1)
0x279: PushEmpty(object)
0x27a: Call2 0x90

0x27b: Stack[4 + Tasks[-1].StackPointer] = Stack[-1]
0x27c: Pop(1)
0x27d: Return(); Pop(0)

0x27e: Push( Stack[3 + Tasks[-1].StackPointer] )
0x27f: IF (Stack[-1] == 0) GOTO 0x282; Pop(1)

0x280: @@ DestroyWindow()
0x281: Pop(0)
0x282: Push( Stack[4 + Tasks[-1].StackPointer] )
0x283: IF (Stack[-1] == 0) GOTO 0x286; Pop(1)

0x284: @@ DestroyWindow()
0x285: Pop(0)
0x286: Push( Stack[5 + Tasks[-1].StackPointer] )
0x287: IF (Stack[-1] == 0) GOTO 0x28a; Pop(1)

0x288: @@ DestroyWindow()
0x289: Pop(0)
0x28a: Push( Stack[6 + Tasks[-1].StackPointer] )
0x28b: IF (Stack[-1] == 0) GOTO 0x28e; Pop(1)

0x28c: @@ DestroyWindow()
0x28d: Pop(0)
0x28e: Push( Stack[7 + Tasks[-1].StackPointer] )
0x28f: IF (Stack[-1] == 0) GOTO 0x292; Pop(1)

0x290: @@ DestroyWindow()
0x291: Pop(0)
0x292: Push( Stack[8 + Tasks[-1].StackPointer] )
0x293: IF (Stack[-1] == 0) GOTO 0x296; Pop(1)

0x294: @@ DestroyWindow()
0x295: Pop(0)
0x296: @ CaptureKeyboard()
0x297: Pop(0)
0x298: Return(); Pop(0)

0x299: Push((int) 0)
0x29a: Push("newgame")
0x29b: @ SendMessage(Stack[-2], Stack[-1])
0x29c: Pop(2)
0x29d: Push((int) 0)
0x29e: Push("loadgame")
0x29f: @ SendMessage(Stack[-2], Stack[-1])
0x2a0: Pop(2)
0x2a1: Push((int) 0)
0x2a2: Push("gameoptions")
0x2a3: @ SendMessage(Stack[-2], Stack[-1])
0x2a4: Pop(2)
0x2a5: Push((int) 0)
0x2a6: Push("credits")
0x2a7: @ SendMessage(Stack[-2], Stack[-1])
0x2a8: Pop(2)
0x2a9: Push((int) 0)
0x2aa: Push("quitgame")
0x2ab: @ SendMessage(Stack[-2], Stack[-1])
0x2ac: Pop(2)
0x2ad: Return(); Pop(0)

0x2ae: Push((int) 0)
0x2af: Push("danko")
0x2b0: @ SendMessage(Stack[-2], Stack[-1])
0x2b1: Pop(2)
0x2b2: Push((int) 0)
0x2b3: Push("burah")
0x2b4: @ SendMessage(Stack[-2], Stack[-1])
0x2b5: Pop(2)
0x2b6: Push((int) 0)
0x2b7: Push("klara")
0x2b8: @ SendMessage(Stack[-2], Stack[-1])
0x2b9: Pop(2)
0x2ba: Return(); Pop(0)

0x2bb: PushEmpty()
0x2bc: Call2 0x2ae

0x2bd: Pop(0)
0x2be: PushEmpty(string)
0x2bf: Call2 0x39b

0x2c0: Pop(0)
0x2c1: Push("")
0x2c2: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x2c3: IF (Stack[-1] == 0) GOTO 0x2cd; Pop(1)

0x2c4: Push((int) 1)
0x2c5: Push("danko")
0x2c6: @ SendMessage(Stack[-2], Stack[-1])
0x2c7: Pop(2)
0x2c8: PushEmpty(string)
0x2c9: Stack[-1] = "danko"
0x2ca: Call2 0x39d

0x2cb: Pop(1)
0x2cc: GOTO 0x2f9

0x2cd: PushEmpty(string)
0x2ce: Call2 0x39b

0x2cf: Pop(0)
0x2d0: Push("danko")
0x2d1: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x2d2: IF (Stack[-1] == 0) GOTO 0x2dc; Pop(1)

0x2d3: Push((int) 1)
0x2d4: Push("burah")
0x2d5: @ SendMessage(Stack[-2], Stack[-1])
0x2d6: Pop(2)
0x2d7: PushEmpty(string)
0x2d8: Stack[-1] = "burah"
0x2d9: Call2 0x39d

0x2da: Pop(1)
0x2db: GOTO 0x2f9

0x2dc: PushEmpty(string)
0x2dd: Call2 0x39b

0x2de: Pop(0)
0x2df: Push("burah")
0x2e0: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x2e1: IF (Stack[-1] == 0) GOTO 0x2eb; Pop(1)

0x2e2: Push((int) 1)
0x2e3: Push("klara")
0x2e4: @ SendMessage(Stack[-2], Stack[-1])
0x2e5: Pop(2)
0x2e6: PushEmpty(string)
0x2e7: Stack[-1] = "klara"
0x2e8: Call2 0x39d

0x2e9: Pop(1)
0x2ea: GOTO 0x2f9

0x2eb: PushEmpty(string)
0x2ec: Call2 0x39b

0x2ed: Pop(0)
0x2ee: Push("klara")
0x2ef: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x2f0: IF (Stack[-1] == 0) GOTO 0x2f9; Pop(1)

0x2f1: Push((int) 1)
0x2f2: Push("danko")
0x2f3: @ SendMessage(Stack[-2], Stack[-1])
0x2f4: Pop(2)
0x2f5: PushEmpty(string)
0x2f6: Stack[-1] = "danko"
0x2f7: Call2 0x39d

0x2f8: Pop(1)
0x2f9: Return(); Pop(0)

0x2fa: PushEmpty()
0x2fb: Call2 0x2ae

0x2fc: Pop(0)
0x2fd: PushEmpty(string)
0x2fe: Call2 0x39b

0x2ff: Pop(0)
0x300: Push("")
0x301: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x302: IF (Stack[-1] == 0) GOTO 0x30c; Pop(1)

0x303: Push((int) 1)
0x304: Push("klara")
0x305: @ SendMessage(Stack[-2], Stack[-1])
0x306: Pop(2)
0x307: PushEmpty(string)
0x308: Stack[-1] = "klara"
0x309: Call2 0x39d

0x30a: Pop(1)
0x30b: GOTO 0x338

0x30c: PushEmpty(string)
0x30d: Call2 0x39b

0x30e: Pop(0)
0x30f: Push("klara")
0x310: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x311: IF (Stack[-1] == 0) GOTO 0x31b; Pop(1)

0x312: Push((int) 1)
0x313: Push("burah")
0x314: @ SendMessage(Stack[-2], Stack[-1])
0x315: Pop(2)
0x316: PushEmpty(string)
0x317: Stack[-1] = "burah"
0x318: Call2 0x39d

0x319: Pop(1)
0x31a: GOTO 0x338

0x31b: PushEmpty(string)
0x31c: Call2 0x39b

0x31d: Pop(0)
0x31e: Push("burah")
0x31f: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x320: IF (Stack[-1] == 0) GOTO 0x32a; Pop(1)

0x321: Push((int) 1)
0x322: Push("danko")
0x323: @ SendMessage(Stack[-2], Stack[-1])
0x324: Pop(2)
0x325: PushEmpty(string)
0x326: Stack[-1] = "danko"
0x327: Call2 0x39d

0x328: Pop(1)
0x329: GOTO 0x338

0x32a: PushEmpty(string)
0x32b: Call2 0x39b

0x32c: Pop(0)
0x32d: Push("danko")
0x32e: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x32f: IF (Stack[-1] == 0) GOTO 0x338; Pop(1)

0x330: Push((int) 1)
0x331: Push("klara")
0x332: @ SendMessage(Stack[-2], Stack[-1])
0x333: Pop(2)
0x334: PushEmpty(string)
0x335: Stack[-1] = "klara"
0x336: Call2 0x39d

0x337: Pop(1)
0x338: Return(); Pop(0)

0x339: PushEmpty()
0x33a: Call2 0x299

0x33b: Pop(0)
0x33c: PushEmpty(string)
0x33d: Call2 0x396

0x33e: Pop(0)
0x33f: Push("")
0x340: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x341: IF (Stack[-1] == 0) GOTO 0x34b; Pop(1)

0x342: Push((int) 1)
0x343: Push("newgame")
0x344: @ SendMessage(Stack[-2], Stack[-1])
0x345: Pop(2)
0x346: PushEmpty(string)
0x347: Stack[-1] = "newgame"
0x348: Call2 0x398

0x349: Pop(1)
0x34a: GOTO 0x395

0x34b: PushEmpty(string)
0x34c: Call2 0x396

0x34d: Pop(0)
0x34e: Push("newgame")
0x34f: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x350: IF (Stack[-1] == 0) GOTO 0x35a; Pop(1)

0x351: Push((int) 1)
0x352: Push("loadgame")
0x353: @ SendMessage(Stack[-2], Stack[-1])
0x354: Pop(2)
0x355: PushEmpty(string)
0x356: Stack[-1] = "loadgame"
0x357: Call2 0x398

0x358: Pop(1)
0x359: GOTO 0x395

0x35a: PushEmpty(string)
0x35b: Call2 0x396

0x35c: Pop(0)
0x35d: Push("loadgame")
0x35e: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x35f: IF (Stack[-1] == 0) GOTO 0x369; Pop(1)

0x360: Push((int) 1)
0x361: Push("gameoptions")
0x362: @ SendMessage(Stack[-2], Stack[-1])
0x363: Pop(2)
0x364: PushEmpty(string)
0x365: Stack[-1] = "gameoptions"
0x366: Call2 0x398

0x367: Pop(1)
0x368: GOTO 0x395

0x369: PushEmpty(string)
0x36a: Call2 0x396

0x36b: Pop(0)
0x36c: Push("gameoptions")
0x36d: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x36e: IF (Stack[-1] == 0) GOTO 0x378; Pop(1)

0x36f: Push((int) 1)
0x370: Push("credits")
0x371: @ SendMessage(Stack[-2], Stack[-1])
0x372: Pop(2)
0x373: PushEmpty(string)
0x374: Stack[-1] = "credits"
0x375: Call2 0x398

0x376: Pop(1)
0x377: GOTO 0x395

0x378: PushEmpty(string)
0x379: Call2 0x396

0x37a: Pop(0)
0x37b: Push("credits")
0x37c: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x37d: IF (Stack[-1] == 0) GOTO 0x387; Pop(1)

0x37e: Push((int) 1)
0x37f: Push("quitgame")
0x380: @ SendMessage(Stack[-2], Stack[-1])
0x381: Pop(2)
0x382: PushEmpty(string)
0x383: Stack[-1] = "quitgame"
0x384: Call2 0x398

0x385: Pop(1)
0x386: GOTO 0x395

0x387: PushEmpty(string)
0x388: Call2 0x396

0x389: Pop(0)
0x38a: Push("quitgame")
0x38b: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x38c: IF (Stack[-1] == 0) GOTO 0x395; Pop(1)

0x38d: Push((int) 1)
0x38e: Push("newgame")
0x38f: @ SendMessage(Stack[-2], Stack[-1])
0x390: Pop(2)
0x391: PushEmpty(string)
0x392: Stack[-1] = "newgame"
0x393: Call2 0x398

0x394: Pop(1)
0x395: Return(); Pop(0)

0x396: Stack[-1] = Stack[11 + Tasks[-1].StackPointer]
0x397: Return(); Pop(0)

0x398: PushEmpty()
0x399: Stack[11 + Tasks[-1].StackPointer] = Stack[-1]
0x39a: Return(); Pop(0)

0x39b: Stack[-1] = Stack[12 + Tasks[-1].StackPointer]
0x39c: Return(); Pop(0)

0x39d: PushEmpty()
0x39e: Stack[12 + Tasks[-1].StackPointer] = Stack[-1]
0x39f: Return(); Pop(0)

0x3a0: PushEmpty()
0x3a1: Call2 0x299

0x3a2: Pop(0)
0x3a3: PushEmpty(string)
0x3a4: Call2 0x396

0x3a5: Pop(0)
0x3a6: Push("")
0x3a7: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x3a8: IF (Stack[-1] == 0) GOTO 0x3b2; Pop(1)

0x3a9: Push((int) 1)
0x3aa: Push("quitgame")
0x3ab: @ SendMessage(Stack[-2], Stack[-1])
0x3ac: Pop(2)
0x3ad: PushEmpty(string)
0x3ae: Stack[-1] = "quitgame"
0x3af: Call2 0x398

0x3b0: Pop(1)
0x3b1: GOTO 0x3fc

0x3b2: PushEmpty(string)
0x3b3: Call2 0x396

0x3b4: Pop(0)
0x3b5: Push("newgame")
0x3b6: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x3b7: IF (Stack[-1] == 0) GOTO 0x3c1; Pop(1)

0x3b8: Push((int) 1)
0x3b9: Push("quitgame")
0x3ba: @ SendMessage(Stack[-2], Stack[-1])
0x3bb: Pop(2)
0x3bc: PushEmpty(string)
0x3bd: Stack[-1] = "quitgame"
0x3be: Call2 0x398

0x3bf: Pop(1)
0x3c0: GOTO 0x3fc

0x3c1: PushEmpty(string)
0x3c2: Call2 0x396

0x3c3: Pop(0)
0x3c4: Push("loadgame")
0x3c5: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x3c6: IF (Stack[-1] == 0) GOTO 0x3d0; Pop(1)

0x3c7: Push((int) 1)
0x3c8: Push("newgame")
0x3c9: @ SendMessage(Stack[-2], Stack[-1])
0x3ca: Pop(2)
0x3cb: PushEmpty(string)
0x3cc: Stack[-1] = "newgame"
0x3cd: Call2 0x398

0x3ce: Pop(1)
0x3cf: GOTO 0x3fc

0x3d0: PushEmpty(string)
0x3d1: Call2 0x396

0x3d2: Pop(0)
0x3d3: Push("gameoptions")
0x3d4: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x3d5: IF (Stack[-1] == 0) GOTO 0x3df; Pop(1)

0x3d6: Push((int) 1)
0x3d7: Push("loadgame")
0x3d8: @ SendMessage(Stack[-2], Stack[-1])
0x3d9: Pop(2)
0x3da: PushEmpty(string)
0x3db: Stack[-1] = "loadgame"
0x3dc: Call2 0x398

0x3dd: Pop(1)
0x3de: GOTO 0x3fc

0x3df: PushEmpty(string)
0x3e0: Call2 0x396

0x3e1: Pop(0)
0x3e2: Push("credits")
0x3e3: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x3e4: IF (Stack[-1] == 0) GOTO 0x3ee; Pop(1)

0x3e5: Push((int) 1)
0x3e6: Push("gameoptions")
0x3e7: @ SendMessage(Stack[-2], Stack[-1])
0x3e8: Pop(2)
0x3e9: PushEmpty(string)
0x3ea: Stack[-1] = "gameoptions"
0x3eb: Call2 0x398

0x3ec: Pop(1)
0x3ed: GOTO 0x3fc

0x3ee: PushEmpty(string)
0x3ef: Call2 0x396

0x3f0: Pop(0)
0x3f1: Push("quitgame")
0x3f2: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x3f3: IF (Stack[-1] == 0) GOTO 0x3fc; Pop(1)

0x3f4: Push((int) 1)
0x3f5: Push("credits")
0x3f6: @ SendMessage(Stack[-2], Stack[-1])
0x3f7: Pop(2)
0x3f8: PushEmpty(string)
0x3f9: Stack[-1] = "credits"
0x3fa: Call2 0x398

0x3fb: Pop(1)
0x3fc: Return(); Pop(0)

0x3fd: PushEmpty()
0x3fe: Pop(0); Push((bool) Stack[14 + Tasks[-1].StackPointer] == 0)
0x3ff: IF (Stack[-1] == 0) GOTO 0x412; Pop(1)

0x400: Push((int) 272)
0x401: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x402: IF (Stack[-1] == 0) GOTO 0x409; Pop(1)

0x403: @ HideCursor()
0x404: Pop(0)
0x405: PushEmpty()
0x406: Call2 0x3a0

0x407: Pop(0)
0x408: GOTO 0x411

0x409: Push((int) 274)
0x40a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x40b: IF (Stack[-1] == 0) GOTO 0x411; Pop(1)

0x40c: @ HideCursor()
0x40d: Pop(0)
0x40e: PushEmpty()
0x40f: Call2 0x339

0x410: Pop(0)
0x411: GOTO 0x423

0x412: Push((int) 271)
0x413: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x414: IF (Stack[-1] == 0) GOTO 0x41b; Pop(1)

0x415: @ HideCursor()
0x416: Pop(0)
0x417: PushEmpty()
0x418: Call2 0x2bb

0x419: Pop(0)
0x41a: GOTO 0x423

0x41b: Push((int) 273)
0x41c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x41d: IF (Stack[-1] == 0) GOTO 0x423; Pop(1)

0x41e: @ HideCursor()
0x41f: Pop(0)
0x420: PushEmpty()
0x421: Call2 0x2fa

0x422: Pop(0)
0x423: Return(); Pop(0)

0x424: PushEmpty()
0x425: Pop(0); Push((bool) Stack[14 + Tasks[-1].StackPointer] == 0)
0x426: IF (Stack[-1] == 0) GOTO 0x449; Pop(1)

0x427: Push((int) 267)
0x428: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x429: IF (Stack[-1] == 0) GOTO 0x430; Pop(1)

0x42a: @ HideCursor()
0x42b: Pop(0)
0x42c: PushEmpty()
0x42d: Call2 0x3a0

0x42e: Pop(0)
0x42f: GOTO 0x448

0x430: Push((int) 268)
0x431: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x432: IF (Stack[-1] == 0) GOTO 0x439; Pop(1)

0x433: @ HideCursor()
0x434: Pop(0)
0x435: PushEmpty()
0x436: Call2 0x339

0x437: Pop(0)
0x438: GOTO 0x448

0x439: Push((int) 256)
0x43a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x43b: IF (Stack[-1] == 0) GOTO 0x448; Pop(1)

0x43c: PushEmpty(string)
0x43d: Call2 0x396

0x43e: Pop(0)
0x43f: Push("")
0x440: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x441: IF (Stack[-1] == 0) GOTO 0x448; Pop(1)

0x442: Push((int) 2)
0x443: PushEmpty(string)
0x444: Call2 0x396

0x445: Pop(0)
0x446: @ SendMessage(Stack[-2], Stack[-1])
0x447: Pop(2)
0x448: GOTO 0x46a

0x449: Push((int) 270)
0x44a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x44b: IF (Stack[-1] == 0) GOTO 0x452; Pop(1)

0x44c: @ HideCursor()
0x44d: Pop(0)
0x44e: PushEmpty()
0x44f: Call2 0x2bb

0x450: Pop(0)
0x451: GOTO 0x46a

0x452: Push((int) 269)
0x453: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x454: IF (Stack[-1] == 0) GOTO 0x45b; Pop(1)

0x455: @ HideCursor()
0x456: Pop(0)
0x457: PushEmpty()
0x458: Call2 0x2fa

0x459: Pop(0)
0x45a: GOTO 0x46a

0x45b: Push((int) 256)
0x45c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x45d: IF (Stack[-1] == 0) GOTO 0x46a; Pop(1)

0x45e: PushEmpty(string)
0x45f: Call2 0x39b

0x460: Pop(0)
0x461: Push("")
0x462: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x463: IF (Stack[-1] == 0) GOTO 0x46a; Pop(1)

0x464: Push((int) 2)
0x465: PushEmpty(string)
0x466: Call2 0x39b

0x467: Pop(0)
0x468: @ SendMessage(Stack[-2], Stack[-1])
0x469: Pop(2)
0x46a: Return(); Pop(0)

0x46b: PushEmpty(int, int)
0x46c: Push("BurahCompleted")
0x46d: Push((int) 0)
0x46e: @ GetRegistryData(Stack[-3], Stack[-2], Stack[-1])
0x46f: Pop(2)
0x470: Push((int) 0)
0x471: Stack[-4] = Stack[-2] != Stack[-1]; Pop(1);
0x472: Return(); Pop(2)

0x473: PushEmpty(int, int)
0x474: Push("DankoCompleted")
0x475: Push((int) 0)
0x476: @ GetRegistryData(Stack[-3], Stack[-2], Stack[-1])
0x477: Pop(2)
0x478: Push((int) 0)
0x479: Stack[-4] = Stack[-2] != Stack[-1]; Pop(1);
0x47a: Return(); Pop(2)

