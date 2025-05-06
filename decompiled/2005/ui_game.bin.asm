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
	logo_buka.wmv
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

0x55: Push((bool) 0)
0x56: IF (Stack[-1] == 0) GOTO 0x5e; Pop(1)

0x57: Push("world_danko.xml")
0x58: Push("player_danko.xml")
0x59: @ NewGame(Stack[-2], Stack[-1])
0x5a: Pop(2)
0x5b: @ DestroyWindow()
0x5c: Pop(0)
0x5d: Return(); Pop(0)

0x5e: PushEmpty(string, bool)
0x5f: Stack[-2] = "logo_buka.wmv"
0x60: Stack[-1] = (bool) 1
0x61: Push(-2, 4); TaskCall(0)
0x62: Call2 0x0

0x63: Pop(-2, 4); TaskReturn
0x64: Pop(2)
0x65: PushEmpty(string, bool)
0x66: Stack[-2] = "logo_icepick.wmv"
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
0x73: Stack[-2] = "intro.wmv"
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
0x7f: Push("game_buttons.xml")
0x80: Push((bool) 0)
0x81: @ CreateWindow(Stack[-2], Stack[-1], Stack[-3])
0x82: Pop(2)
0x83: Stack[-3] = Stack[-1]
0x84: Return(); Pop(2)

0x85: Stack[-1] = 0
0x86: PushEmpty(string, string)
0x87: Push("editbox")
0x88: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x89: IF (Stack[-1] == 0) GOTO 0x94; Pop(1)

0x8a: Push((int) 0)
0x8b: @@ get(Stack[-2], Stack[-1])
0x8c: Pop(1)
0x8d: @ DestroyWindow()
0x8e: Pop(0)
0x8f: PushEmpty(string)
0x90: Stack[-1] = Stack[-2]
0x91: Call2 0x299

0x92: Pop(1)
0x93: Return(); Pop(2)

0x94: PushEmpty(int, string, object)
0x95: Stack[-3] = Stack[-8]
0x96: Stack[-2] = Stack[-7]
0x97: Stack[-1] = Stack[-6]
0x98: Call2 0x160

0x99: Pop(3)
0x9a: Return(); Pop(2)

0x9b: PushEmpty(object, object)
0x9c: Push("game_logo.xml")
0x9d: Push((bool) 0)
0x9e: @ CreateWindow(Stack[-2], Stack[-1], Stack[-3])
0x9f: Pop(2)
0xa0: Stack[-3] = Stack[-1]
0xa1: Return(); Pop(2)

0xa2: Stack[-1] = 0
0xa3: PushEmpty(bool, bool, bool, string, bool, bool, bool, string)
0xa4: @ CaptureKeyboard()
0xa5: Pop(0)
0xa6: Stack[2 + Tasks[-1].StackPointer] = (int)0
0xa7: @ GetWindowSize(Stack[-0], Stack[-1])
0xa8: Pop(0)
0xa9: Push("default")
0xaa: @ SetCursor(Stack[-1])
0xab: Pop(1)
0xac: Push("default")
0xad: @ SetBackground(Stack[-1])
0xae: Pop(1)
0xaf: Push("menumusic")
0xb0: @ PlaySound(Stack[-1])
0xb1: Pop(1)
0xb2: Push((bool) 1)
0xb3: @ ShowCursor(Stack[-1])
0xb4: Pop(1)
0xb5: Push(Stack[-9])
0xb6: IF (Stack[-1] == 0) GOTO 0xbc; Pop(1)

0xb7: Push("game_choose_pers.xml")
0xb8: Push((bool) 0)
0xb9: @ CreateWindow(Stack[-2], Stack[-1], Stack[-5])
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
0xca: Call2 0x26e

0xcb: Pop(0)
0xcc: Push((int) 1)
0xcd: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] == Stack[-1])
0xce: IF (Stack[-1] == 0) GOTO 0xea; Pop(1)

0xcf: Push("menumusic")
0xd0: @ PauseSound(Stack[-1])
0xd1: Pop(1)
0xd2: PushEmpty(int)
0xd3: Stack[-1] = (int) 1
0xd4: Push(-1, 1); TaskCall(1)
0xd5: Call2 0x41

0xd6: Pop(-1, 1); TaskReturn
0xd7: Pop(1)
0xd8: PushEmpty(string, bool)
0xd9: Stack[-2] = "intro_danko.wmv"
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
0xe5: Push("world_danko.xml")
0xe6: Push("player_danko.xml")
0xe7: @ NewGame(Stack[-2], Stack[-1])
0xe8: Pop(2)
0xe9: GOTO 0x157

0xea: Push((int) 2)
0xeb: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] == Stack[-1])
0xec: IF (Stack[-1] == 0) GOTO 0x108; Pop(1)

0xed: Push("menumusic")
0xee: @ PauseSound(Stack[-1])
0xef: Pop(1)
0xf0: PushEmpty(int)
0xf1: Stack[-1] = (int) 2
0xf2: Push(-1, 1); TaskCall(1)
0xf3: Call2 0x41

0xf4: Pop(-1, 1); TaskReturn
0xf5: Pop(1)
0xf6: PushEmpty(string, bool)
0xf7: Stack[-2] = "intro_burah.wmv"
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
0x103: Push("world_burah.xml")
0x104: Push("player_burah.xml")
0x105: @ NewGame(Stack[-2], Stack[-1])
0x106: Pop(2)
0x107: GOTO 0x157

0x108: Push((int) 3)
0x109: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] == Stack[-1])
0x10a: IF (Stack[-1] == 0) GOTO 0x126; Pop(1)

0x10b: Push("menumusic")
0x10c: @ PauseSound(Stack[-1])
0x10d: Pop(1)
0x10e: PushEmpty(int)
0x10f: Stack[-1] = (int) 3
0x110: Push(-1, 1); TaskCall(1)
0x111: Call2 0x41

0x112: Pop(-1, 1); TaskReturn
0x113: Pop(1)
0x114: PushEmpty(string, bool)
0x115: Stack[-2] = "intro_klara.wmv"
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
0x121: Push("world_klara.xml")
0x122: Push("player_klara.xml")
0x123: @ NewGame(Stack[-2], Stack[-1])
0x124: Pop(2)
0x125: GOTO 0x157

0x126: Push((int) 4)
0x127: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] == Stack[-1])
0x128: IF (Stack[-1] == 0) GOTO 0x139; Pop(1)

0x129: Push("menumusic")
0x12a: @ PauseSound(Stack[-1])
0x12b: Pop(1)
0x12c: Push("Loading : ")
0x12d: Pop(1); Push(Stack[-1] + Stack[10 + StackPtr]);
0x12e: @ Trace(Stack[-1])
0x12f: Pop(1)
0x130: @ RemoveWorld()
0x131: Pop(0)
0x132: @ UISync()
0x133: Pop(0)
0x134: @ DestroyWindow()
0x135: Pop(0)
0x136: @ LoadGame(Stack[-4], Stack[-10])
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
0x145: @@ GetFileName(Stack[-1])
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
0x153: Push("world_intro.xml")
0x154: Push("player_intro.xml")
0x155: @ NewGame(Stack[-2], Stack[-1])
0x156: Pop(2)
0x157: Return(); Pop(8)

0x158: PushEmpty()
0x159: Push((int) 27)
0x15a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x15b: IF (Stack[-1] == 0) GOTO 0x15f; Pop(1)

0x15c: PushEmpty()
0x15d: Call2 0x262

0x15e: Pop(0)
0x15f: Return(); Pop(0)

0x160: PushEmpty(bool, bool)
0x161: Push("newgame")
0x162: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x163: IF (Stack[-1] == 0) GOTO 0x168; Pop(1)

0x164: Stack[2 + Tasks[-1].StackPointer] = (int)7
0x165: @ StopEventProcessing()
0x166: Pop(0)
0x167: GOTO 0x261

0x168: Push("quitgame")
0x169: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x16a: IF (Stack[-1] == 0) GOTO 0x172; Pop(1)

0x16b: Push("Quit game")
0x16c: @ UITrace(Stack[-1])
0x16d: Pop(1)
0x16e: @ Quit()
0x16f: Pop(0)
0x170: Return(); Pop(2)

0x171: GOTO 0x261

0x172: Push("loadgame")
0x173: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x174: IF (Stack[-1] == 0) GOTO 0x17e; Pop(1)

0x175: PushEmpty()
0x176: Call2 0x26e

0x177: Pop(0)
0x178: Push("load.xml")
0x179: Push((bool) 0)
0x17a: @ CreateWindow(Stack[-2], Stack[-1], Stack[-6])
0x17b: Pop(2)
0x17c: Return(); Pop(2)

0x17d: GOTO 0x261

0x17e: Push("savegame")
0x17f: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x180: IF (Stack[-1] == 0) GOTO 0x18a; Pop(1)

0x181: PushEmpty()
0x182: Call2 0x26e

0x183: Pop(0)
0x184: Push("save.xml")
0x185: Push((bool) 0)
0x186: @ CreateWindow(Stack[-2], Stack[-1], Stack[-7])
0x187: Pop(2)
0x188: Return(); Pop(2)

0x189: GOTO 0x261

0x18a: Push("gameoptions")
0x18b: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x18c: IF (Stack[-1] == 0) GOTO 0x196; Pop(1)

0x18d: PushEmpty()
0x18e: Call2 0x26e

0x18f: Pop(0)
0x190: Push("options.xml")
0x191: Push((bool) 0)
0x192: @ CreateWindow(Stack[-2], Stack[-1], Stack[-8])
0x193: Pop(2)
0x194: Return(); Pop(2)

0x195: GOTO 0x261

0x196: Push("continue")
0x197: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x198: IF (Stack[-1] == 0) GOTO 0x19e; Pop(1)

0x199: Stack[2 + Tasks[-1].StackPointer] = (int)6
0x19a: @ StopEventProcessing()
0x19b: Pop(0)
0x19c: Return(); Pop(2)

0x19d: GOTO 0x261

0x19e: Push("credits")
0x19f: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x1a0: IF (Stack[-1] == 0) GOTO 0x1b6; Pop(1)

0x1a1: PushEmpty()
0x1a2: Call2 0x26e

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
0x1b5: GOTO 0x261

0x1b6: Push("danko")
0x1b7: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x1b8: IF (Stack[-1] == 0) GOTO 0x1d9; Pop(1)

0x1b9: Push((int) 0)
0x1ba: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x1bb: IF (Stack[-1] == 0) GOTO 0x1c0; Pop(1)

0x1bc: Stack[2 + Tasks[-1].StackPointer] = (int)1
0x1bd: @ StopEventProcessing()
0x1be: Pop(0)
0x1bf: GOTO 0x1d7

0x1c0: Push((int) 1)
0x1c1: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x1c2: IF (Stack[-1] == 0) GOTO 0x1cc; Pop(1)

0x1c3: Push((int) 202)
0x1c4: Push("player_name")
0x1c5: @ SendMessage(Stack[-2], Stack[-1])
0x1c6: Pop(2)
0x1c7: Push((int) 203)
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

0x1d8: GOTO 0x261

0x1d9: Push("burah")
0x1da: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x1db: IF (Stack[-1] == 0) GOTO 0x1fc; Pop(1)

0x1dc: Push((int) 0)
0x1dd: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x1de: IF (Stack[-1] == 0) GOTO 0x1e3; Pop(1)

0x1df: Stack[2 + Tasks[-1].StackPointer] = (int)2
0x1e0: @ StopEventProcessing()
0x1e1: Pop(0)
0x1e2: GOTO 0x1fa

0x1e3: Push((int) 1)
0x1e4: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x1e5: IF (Stack[-1] == 0) GOTO 0x1ef; Pop(1)

0x1e6: Push((int) 205)
0x1e7: Push("player_name")
0x1e8: @ SendMessage(Stack[-2], Stack[-1])
0x1e9: Pop(2)
0x1ea: Push((int) 206)
0x1eb: Push("player_desc")
0x1ec: @ SendMessage(Stack[-2], Stack[-1])
0x1ed: Pop(2)
0x1ee: GOTO 0x1fa

0x1ef: Push((int) 2)
0x1f0: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x1f1: IF (Stack[-1] == 0) GOTO 0x1fa; Pop(1)

0x1f2: Push((int) -1)
0x1f3: Push("player_name")
0x1f4: @ SendMessage(Stack[-2], Stack[-1])
0x1f5: Pop(2)
0x1f6: Push((int) -1)
0x1f7: Push("player_desc")
0x1f8: @ SendMessage(Stack[-2], Stack[-1])
0x1f9: Pop(2)
0x1fa: Return(); Pop(2)

0x1fb: GOTO 0x261

0x1fc: Push("klara")
0x1fd: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x1fe: IF (Stack[-1] == 0) GOTO 0x239; Pop(1)

0x1ff: Stack[-1] = (bool) 1
0x200: PushEmpty(bool)
0x201: Stack[-1] = (bool) 0
0x202: PushEmpty(bool)
0x203: Call2 0x291

0x204: Pop(0)
0x205: Pop(1); Push((bool) Stack[-1] == 0)
0x206: IF (Stack[-1] == 0) GOTO 0x20d; Pop(1)

0x207: PushEmpty(bool)
0x208: Call2 0x289

0x209: Pop(0)
0x20a: Pop(1); Push((bool) Stack[-1] == 0)
0x20b: IF (Stack[-1] == 0) GOTO 0x20d; Pop(1)

0x20c: Stack[-1] = (bool) 1
0x20d: IF (Stack[-1] == 0) GOTO 0x20f; Pop(1)

0x20e: Stack[-1] = (bool) 0
0x20f: Push((int) 0)
0x210: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x211: IF (Stack[-1] == 0) GOTO 0x219; Pop(1)

0x212: Pop(0); Push((bool) Stack[-1] == 0)
0x213: IF (Stack[-1] == 0) GOTO 0x215; Pop(1)

0x214: Return(); Pop(2)

0x215: Stack[2 + Tasks[-1].StackPointer] = (int)3
0x216: @ StopEventProcessing()
0x217: Pop(0)
0x218: GOTO 0x237

0x219: Push((int) 1)
0x21a: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x21b: IF (Stack[-1] == 0) GOTO 0x22c; Pop(1)

0x21c: Push((int) 208)
0x21d: Push("player_name")
0x21e: @ SendMessage(Stack[-2], Stack[-1])
0x21f: Pop(2)
0x220: Push(Stack[-1])
0x221: IF (Stack[-1] == 0) GOTO 0x227; Pop(1)

0x222: Push((int) 209)
0x223: Push("player_desc")
0x224: @ SendMessage(Stack[-2], Stack[-1])
0x225: Pop(2)
0x226: GOTO 0x22b

0x227: Push((int) 213)
0x228: Push("player_desc")
0x229: @ SendMessage(Stack[-2], Stack[-1])
0x22a: Pop(2)
0x22b: GOTO 0x237

0x22c: Push((int) 2)
0x22d: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x22e: IF (Stack[-1] == 0) GOTO 0x237; Pop(1)

0x22f: Push((int) -1)
0x230: Push("player_name")
0x231: @ SendMessage(Stack[-2], Stack[-1])
0x232: Pop(2)
0x233: Push((int) -1)
0x234: Push("player_desc")
0x235: @ SendMessage(Stack[-2], Stack[-1])
0x236: Pop(2)
0x237: Return(); Pop(2)

0x238: GOTO 0x261

0x239: Push("load")
0x23a: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x23b: IF (Stack[-1] == 0) GOTO 0x24a; Pop(1)

0x23c: Push((int) 0)
0x23d: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x23e: IF (Stack[-1] == 0) GOTO 0x245; Pop(1)

0x23f: Stack[2 + Tasks[-1].StackPointer] = (int)4
0x240: @@ GetFileName(Stack[-10])
0x241: Pop(0)
0x242: @ StopEventProcessing()
0x243: Pop(0)
0x244: GOTO 0x248

0x245: PushEmpty()
0x246: Call2 0x262

0x247: Pop(0)
0x248: Return(); Pop(2)

0x249: GOTO 0x261

0x24a: Push("save")
0x24b: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x24c: IF (Stack[-1] == 0) GOTO 0x25a; Pop(1)

0x24d: Push((int) 0)
0x24e: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x24f: IF (Stack[-1] == 0) GOTO 0x255; Pop(1)

0x250: Stack[2 + Tasks[-1].StackPointer] = (int)5
0x251: Stack[9 + Tasks[-1].StackPointer] = Stack[-3]
0x252: @ StopEventProcessing()
0x253: Pop(0)
0x254: GOTO 0x258

0x255: PushEmpty()
0x256: Call2 0x262

0x257: Pop(0)
0x258: Return(); Pop(2)

0x259: GOTO 0x261

0x25a: Push("options")
0x25b: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x25c: IF (Stack[-1] == 0) GOTO 0x261; Pop(1)

0x25d: PushEmpty()
0x25e: Call2 0x262

0x25f: Pop(0)
0x260: Return(); Pop(2)

0x261: Return(); Pop(2)

0x262: PushEmpty()
0x263: Call2 0x26e

0x264: Pop(0)
0x265: PushEmpty(object)
0x266: Call2 0x7e

0x267: Stack[3 + Tasks[-1].StackPointer] = Stack[-1]
0x268: Pop(1)
0x269: PushEmpty(object)
0x26a: Call2 0x9b

0x26b: Stack[4 + Tasks[-1].StackPointer] = Stack[-1]
0x26c: Pop(1)
0x26d: Return(); Pop(0)

0x26e: Push( Stack[3 + Tasks[-1].StackPointer] )
0x26f: IF (Stack[-1] == 0) GOTO 0x272; Pop(1)

0x270: @@ DestroyWindow()
0x271: Pop(0)
0x272: Push( Stack[4 + Tasks[-1].StackPointer] )
0x273: IF (Stack[-1] == 0) GOTO 0x276; Pop(1)

0x274: @@ DestroyWindow()
0x275: Pop(0)
0x276: Push( Stack[5 + Tasks[-1].StackPointer] )
0x277: IF (Stack[-1] == 0) GOTO 0x27a; Pop(1)

0x278: @@ DestroyWindow()
0x279: Pop(0)
0x27a: Push( Stack[6 + Tasks[-1].StackPointer] )
0x27b: IF (Stack[-1] == 0) GOTO 0x27e; Pop(1)

0x27c: @@ DestroyWindow()
0x27d: Pop(0)
0x27e: Push( Stack[7 + Tasks[-1].StackPointer] )
0x27f: IF (Stack[-1] == 0) GOTO 0x282; Pop(1)

0x280: @@ DestroyWindow()
0x281: Pop(0)
0x282: Push( Stack[8 + Tasks[-1].StackPointer] )
0x283: IF (Stack[-1] == 0) GOTO 0x286; Pop(1)

0x284: @@ DestroyWindow()
0x285: Pop(0)
0x286: @ CaptureKeyboard()
0x287: Pop(0)
0x288: Return(); Pop(0)

0x289: PushEmpty(int, int)
0x28a: Push("BurahCompleted")
0x28b: Push((int) 0)
0x28c: @ GetRegistryData(Stack[-3], Stack[-2], Stack[-1])
0x28d: Pop(2)
0x28e: Push((int) 0)
0x28f: Stack[-4] = Stack[-2] != Stack[-1]; Pop(1);
0x290: Return(); Pop(2)

0x291: PushEmpty(int, int)
0x292: Push("DankoCompleted")
0x293: Push((int) 0)
0x294: @ GetRegistryData(Stack[-3], Stack[-2], Stack[-1])
0x295: Pop(2)
0x296: Push((int) 0)
0x297: Stack[-4] = Stack[-2] != Stack[-1]; Pop(1);
0x298: Return(); Pop(2)

0x299: PushEmpty(bool, bool)
0x29a: Push("loading map: ")
0x29b: Pop(1); Push(Stack[-1] + Stack[-4]);
0x29c: @ UITrace(Stack[-1])
0x29d: Pop(1)
0x29e: @ LoadMap(Stack[-1], Stack[-3])
0x29f: Pop(0)
0x2a0: Return(); Pop(2)

