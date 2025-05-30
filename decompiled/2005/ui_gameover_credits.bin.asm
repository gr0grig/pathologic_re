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

0x55: Push("menumusic")
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
0x64: Push("game_buttons.xml")
0x65: Push((bool) 0)
0x66: @ CreateWindow(Stack[-2], Stack[-1], Stack[-3])
0x67: Pop(2)
0x68: Stack[-3] = Stack[-1]
0x69: Return(); Pop(2)

0x6a: Stack[-1] = 0
0x6b: PushEmpty(object, object)
0x6c: Push("game_logo.xml")
0x6d: Push((bool) 0)
0x6e: @ CreateWindow(Stack[-2], Stack[-1], Stack[-3])
0x6f: Pop(2)
0x70: Stack[-3] = Stack[-1]
0x71: Return(); Pop(2)

0x72: Stack[-1] = 0
0x73: PushEmpty(bool, bool, bool, string, bool, bool, bool, string)
0x74: @ CaptureKeyboard()
0x75: Pop(0)
0x76: Stack[2 + Tasks[-1].StackPointer] = (int)0
0x77: @ GetWindowSize(Stack[-0], Stack[-1])
0x78: Pop(0)
0x79: Push("default")
0x7a: @ SetCursor(Stack[-1])
0x7b: Pop(1)
0x7c: Push("default")
0x7d: @ SetBackground(Stack[-1])
0x7e: Pop(1)
0x7f: Push("menumusic")
0x80: @ PlaySound(Stack[-1])
0x81: Pop(1)
0x82: Push((bool) 1)
0x83: @ ShowCursor(Stack[-1])
0x84: Pop(1)
0x85: Push(Stack[-9])
0x86: IF (Stack[-1] == 0) GOTO 0x8c; Pop(1)

0x87: Push("game_choose_pers.xml")
0x88: Push((bool) 0)
0x89: @ CreateWindow(Stack[-2], Stack[-1], Stack[-5])
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
0x9a: Call2 0x23e

0x9b: Pop(0)
0x9c: Push((int) 1)
0x9d: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] == Stack[-1])
0x9e: IF (Stack[-1] == 0) GOTO 0xba; Pop(1)

0x9f: Push("menumusic")
0xa0: @ PauseSound(Stack[-1])
0xa1: Pop(1)
0xa2: PushEmpty(int)
0xa3: Stack[-1] = (int) 1
0xa4: Push(-1, 1); TaskCall(1)
0xa5: Call2 0x41

0xa6: Pop(-1, 1); TaskReturn
0xa7: Pop(1)
0xa8: PushEmpty(string, bool)
0xa9: Stack[-2] = "intro_danko.wmv"
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
0xb5: Push("world_danko.xml")
0xb6: Push("player_danko.xml")
0xb7: @ NewGame(Stack[-2], Stack[-1])
0xb8: Pop(2)
0xb9: GOTO 0x127

0xba: Push((int) 2)
0xbb: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] == Stack[-1])
0xbc: IF (Stack[-1] == 0) GOTO 0xd8; Pop(1)

0xbd: Push("menumusic")
0xbe: @ PauseSound(Stack[-1])
0xbf: Pop(1)
0xc0: PushEmpty(int)
0xc1: Stack[-1] = (int) 2
0xc2: Push(-1, 1); TaskCall(1)
0xc3: Call2 0x41

0xc4: Pop(-1, 1); TaskReturn
0xc5: Pop(1)
0xc6: PushEmpty(string, bool)
0xc7: Stack[-2] = "intro_burah.wmv"
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
0xd3: Push("world_burah.xml")
0xd4: Push("player_burah.xml")
0xd5: @ NewGame(Stack[-2], Stack[-1])
0xd6: Pop(2)
0xd7: GOTO 0x127

0xd8: Push((int) 3)
0xd9: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] == Stack[-1])
0xda: IF (Stack[-1] == 0) GOTO 0xf6; Pop(1)

0xdb: Push("menumusic")
0xdc: @ PauseSound(Stack[-1])
0xdd: Pop(1)
0xde: PushEmpty(int)
0xdf: Stack[-1] = (int) 3
0xe0: Push(-1, 1); TaskCall(1)
0xe1: Call2 0x41

0xe2: Pop(-1, 1); TaskReturn
0xe3: Pop(1)
0xe4: PushEmpty(string, bool)
0xe5: Stack[-2] = "intro_klara.wmv"
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
0xf1: Push("world_klara.xml")
0xf2: Push("player_klara.xml")
0xf3: @ NewGame(Stack[-2], Stack[-1])
0xf4: Pop(2)
0xf5: GOTO 0x127

0xf6: Push((int) 4)
0xf7: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] == Stack[-1])
0xf8: IF (Stack[-1] == 0) GOTO 0x109; Pop(1)

0xf9: Push("menumusic")
0xfa: @ PauseSound(Stack[-1])
0xfb: Pop(1)
0xfc: Push("Loading : ")
0xfd: Pop(1); Push(Stack[-1] + Stack[10 + StackPtr]);
0xfe: @ Trace(Stack[-1])
0xff: Pop(1)
0x100: @ RemoveWorld()
0x101: Pop(0)
0x102: @ UISync()
0x103: Pop(0)
0x104: @ DestroyWindow()
0x105: Pop(0)
0x106: @ LoadGame(Stack[-4], Stack[-10])
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
0x115: @@ GetFileName(Stack[-1])
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
0x123: Push("world_intro.xml")
0x124: Push("player_intro.xml")
0x125: @ NewGame(Stack[-2], Stack[-1])
0x126: Pop(2)
0x127: Return(); Pop(8)

0x128: PushEmpty()
0x129: Push((int) 27)
0x12a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x12b: IF (Stack[-1] == 0) GOTO 0x12f; Pop(1)

0x12c: PushEmpty()
0x12d: Call2 0x232

0x12e: Pop(0)
0x12f: Return(); Pop(0)

0x130: PushEmpty(bool, bool)
0x131: Push("newgame")
0x132: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x133: IF (Stack[-1] == 0) GOTO 0x138; Pop(1)

0x134: Stack[2 + Tasks[-1].StackPointer] = (int)7
0x135: @ StopEventProcessing()
0x136: Pop(0)
0x137: GOTO 0x231

0x138: Push("quitgame")
0x139: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x13a: IF (Stack[-1] == 0) GOTO 0x142; Pop(1)

0x13b: Push("Quit game")
0x13c: @ UITrace(Stack[-1])
0x13d: Pop(1)
0x13e: @ Quit()
0x13f: Pop(0)
0x140: Return(); Pop(2)

0x141: GOTO 0x231

0x142: Push("loadgame")
0x143: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x144: IF (Stack[-1] == 0) GOTO 0x14e; Pop(1)

0x145: PushEmpty()
0x146: Call2 0x23e

0x147: Pop(0)
0x148: Push("load.xml")
0x149: Push((bool) 0)
0x14a: @ CreateWindow(Stack[-2], Stack[-1], Stack[-6])
0x14b: Pop(2)
0x14c: Return(); Pop(2)

0x14d: GOTO 0x231

0x14e: Push("savegame")
0x14f: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x150: IF (Stack[-1] == 0) GOTO 0x15a; Pop(1)

0x151: PushEmpty()
0x152: Call2 0x23e

0x153: Pop(0)
0x154: Push("save.xml")
0x155: Push((bool) 0)
0x156: @ CreateWindow(Stack[-2], Stack[-1], Stack[-7])
0x157: Pop(2)
0x158: Return(); Pop(2)

0x159: GOTO 0x231

0x15a: Push("gameoptions")
0x15b: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x15c: IF (Stack[-1] == 0) GOTO 0x166; Pop(1)

0x15d: PushEmpty()
0x15e: Call2 0x23e

0x15f: Pop(0)
0x160: Push("options.xml")
0x161: Push((bool) 0)
0x162: @ CreateWindow(Stack[-2], Stack[-1], Stack[-8])
0x163: Pop(2)
0x164: Return(); Pop(2)

0x165: GOTO 0x231

0x166: Push("continue")
0x167: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x168: IF (Stack[-1] == 0) GOTO 0x16e; Pop(1)

0x169: Stack[2 + Tasks[-1].StackPointer] = (int)6
0x16a: @ StopEventProcessing()
0x16b: Pop(0)
0x16c: Return(); Pop(2)

0x16d: GOTO 0x231

0x16e: Push("credits")
0x16f: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x170: IF (Stack[-1] == 0) GOTO 0x186; Pop(1)

0x171: PushEmpty()
0x172: Call2 0x23e

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
0x185: GOTO 0x231

0x186: Push("danko")
0x187: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x188: IF (Stack[-1] == 0) GOTO 0x1a9; Pop(1)

0x189: Push((int) 0)
0x18a: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x18b: IF (Stack[-1] == 0) GOTO 0x190; Pop(1)

0x18c: Stack[2 + Tasks[-1].StackPointer] = (int)1
0x18d: @ StopEventProcessing()
0x18e: Pop(0)
0x18f: GOTO 0x1a7

0x190: Push((int) 1)
0x191: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x192: IF (Stack[-1] == 0) GOTO 0x19c; Pop(1)

0x193: Push((int) 202)
0x194: Push("player_name")
0x195: @ SendMessage(Stack[-2], Stack[-1])
0x196: Pop(2)
0x197: Push((int) 203)
0x198: Push("player_desc")
0x199: @ SendMessage(Stack[-2], Stack[-1])
0x19a: Pop(2)
0x19b: GOTO 0x1a7

0x19c: Push((int) 2)
0x19d: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x19e: IF (Stack[-1] == 0) GOTO 0x1a7; Pop(1)

0x19f: Push((int) -1)
0x1a0: Push("player_name")
0x1a1: @ SendMessage(Stack[-2], Stack[-1])
0x1a2: Pop(2)
0x1a3: Push((int) -1)
0x1a4: Push("player_desc")
0x1a5: @ SendMessage(Stack[-2], Stack[-1])
0x1a6: Pop(2)
0x1a7: Return(); Pop(2)

0x1a8: GOTO 0x231

0x1a9: Push("burah")
0x1aa: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x1ab: IF (Stack[-1] == 0) GOTO 0x1cc; Pop(1)

0x1ac: Push((int) 0)
0x1ad: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x1ae: IF (Stack[-1] == 0) GOTO 0x1b3; Pop(1)

0x1af: Stack[2 + Tasks[-1].StackPointer] = (int)2
0x1b0: @ StopEventProcessing()
0x1b1: Pop(0)
0x1b2: GOTO 0x1ca

0x1b3: Push((int) 1)
0x1b4: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x1b5: IF (Stack[-1] == 0) GOTO 0x1bf; Pop(1)

0x1b6: Push((int) 205)
0x1b7: Push("player_name")
0x1b8: @ SendMessage(Stack[-2], Stack[-1])
0x1b9: Pop(2)
0x1ba: Push((int) 206)
0x1bb: Push("player_desc")
0x1bc: @ SendMessage(Stack[-2], Stack[-1])
0x1bd: Pop(2)
0x1be: GOTO 0x1ca

0x1bf: Push((int) 2)
0x1c0: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x1c1: IF (Stack[-1] == 0) GOTO 0x1ca; Pop(1)

0x1c2: Push((int) -1)
0x1c3: Push("player_name")
0x1c4: @ SendMessage(Stack[-2], Stack[-1])
0x1c5: Pop(2)
0x1c6: Push((int) -1)
0x1c7: Push("player_desc")
0x1c8: @ SendMessage(Stack[-2], Stack[-1])
0x1c9: Pop(2)
0x1ca: Return(); Pop(2)

0x1cb: GOTO 0x231

0x1cc: Push("klara")
0x1cd: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x1ce: IF (Stack[-1] == 0) GOTO 0x209; Pop(1)

0x1cf: Stack[-1] = (bool) 1
0x1d0: PushEmpty(bool)
0x1d1: Stack[-1] = (bool) 0
0x1d2: PushEmpty(bool)
0x1d3: Call2 0x261

0x1d4: Pop(0)
0x1d5: Pop(1); Push((bool) Stack[-1] == 0)
0x1d6: IF (Stack[-1] == 0) GOTO 0x1dd; Pop(1)

0x1d7: PushEmpty(bool)
0x1d8: Call2 0x259

0x1d9: Pop(0)
0x1da: Pop(1); Push((bool) Stack[-1] == 0)
0x1db: IF (Stack[-1] == 0) GOTO 0x1dd; Pop(1)

0x1dc: Stack[-1] = (bool) 1
0x1dd: IF (Stack[-1] == 0) GOTO 0x1df; Pop(1)

0x1de: Stack[-1] = (bool) 0
0x1df: Push((int) 0)
0x1e0: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x1e1: IF (Stack[-1] == 0) GOTO 0x1e9; Pop(1)

0x1e2: Pop(0); Push((bool) Stack[-1] == 0)
0x1e3: IF (Stack[-1] == 0) GOTO 0x1e5; Pop(1)

0x1e4: Return(); Pop(2)

0x1e5: Stack[2 + Tasks[-1].StackPointer] = (int)3
0x1e6: @ StopEventProcessing()
0x1e7: Pop(0)
0x1e8: GOTO 0x207

0x1e9: Push((int) 1)
0x1ea: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x1eb: IF (Stack[-1] == 0) GOTO 0x1fc; Pop(1)

0x1ec: Push((int) 208)
0x1ed: Push("player_name")
0x1ee: @ SendMessage(Stack[-2], Stack[-1])
0x1ef: Pop(2)
0x1f0: Push(Stack[-1])
0x1f1: IF (Stack[-1] == 0) GOTO 0x1f7; Pop(1)

0x1f2: Push((int) 209)
0x1f3: Push("player_desc")
0x1f4: @ SendMessage(Stack[-2], Stack[-1])
0x1f5: Pop(2)
0x1f6: GOTO 0x1fb

0x1f7: Push((int) 213)
0x1f8: Push("player_desc")
0x1f9: @ SendMessage(Stack[-2], Stack[-1])
0x1fa: Pop(2)
0x1fb: GOTO 0x207

0x1fc: Push((int) 2)
0x1fd: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x1fe: IF (Stack[-1] == 0) GOTO 0x207; Pop(1)

0x1ff: Push((int) -1)
0x200: Push("player_name")
0x201: @ SendMessage(Stack[-2], Stack[-1])
0x202: Pop(2)
0x203: Push((int) -1)
0x204: Push("player_desc")
0x205: @ SendMessage(Stack[-2], Stack[-1])
0x206: Pop(2)
0x207: Return(); Pop(2)

0x208: GOTO 0x231

0x209: Push("load")
0x20a: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x20b: IF (Stack[-1] == 0) GOTO 0x21a; Pop(1)

0x20c: Push((int) 0)
0x20d: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x20e: IF (Stack[-1] == 0) GOTO 0x215; Pop(1)

0x20f: Stack[2 + Tasks[-1].StackPointer] = (int)4
0x210: @@ GetFileName(Stack[-10])
0x211: Pop(0)
0x212: @ StopEventProcessing()
0x213: Pop(0)
0x214: GOTO 0x218

0x215: PushEmpty()
0x216: Call2 0x232

0x217: Pop(0)
0x218: Return(); Pop(2)

0x219: GOTO 0x231

0x21a: Push("save")
0x21b: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x21c: IF (Stack[-1] == 0) GOTO 0x22a; Pop(1)

0x21d: Push((int) 0)
0x21e: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x21f: IF (Stack[-1] == 0) GOTO 0x225; Pop(1)

0x220: Stack[2 + Tasks[-1].StackPointer] = (int)5
0x221: Stack[9 + Tasks[-1].StackPointer] = Stack[-3]
0x222: @ StopEventProcessing()
0x223: Pop(0)
0x224: GOTO 0x228

0x225: PushEmpty()
0x226: Call2 0x232

0x227: Pop(0)
0x228: Return(); Pop(2)

0x229: GOTO 0x231

0x22a: Push("options")
0x22b: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x22c: IF (Stack[-1] == 0) GOTO 0x231; Pop(1)

0x22d: PushEmpty()
0x22e: Call2 0x232

0x22f: Pop(0)
0x230: Return(); Pop(2)

0x231: Return(); Pop(2)

0x232: PushEmpty()
0x233: Call2 0x23e

0x234: Pop(0)
0x235: PushEmpty(object)
0x236: Call2 0x63

0x237: Stack[3 + Tasks[-1].StackPointer] = Stack[-1]
0x238: Pop(1)
0x239: PushEmpty(object)
0x23a: Call2 0x6b

0x23b: Stack[4 + Tasks[-1].StackPointer] = Stack[-1]
0x23c: Pop(1)
0x23d: Return(); Pop(0)

0x23e: Push( Stack[3 + Tasks[-1].StackPointer] )
0x23f: IF (Stack[-1] == 0) GOTO 0x242; Pop(1)

0x240: @@ DestroyWindow()
0x241: Pop(0)
0x242: Push( Stack[4 + Tasks[-1].StackPointer] )
0x243: IF (Stack[-1] == 0) GOTO 0x246; Pop(1)

0x244: @@ DestroyWindow()
0x245: Pop(0)
0x246: Push( Stack[5 + Tasks[-1].StackPointer] )
0x247: IF (Stack[-1] == 0) GOTO 0x24a; Pop(1)

0x248: @@ DestroyWindow()
0x249: Pop(0)
0x24a: Push( Stack[6 + Tasks[-1].StackPointer] )
0x24b: IF (Stack[-1] == 0) GOTO 0x24e; Pop(1)

0x24c: @@ DestroyWindow()
0x24d: Pop(0)
0x24e: Push( Stack[7 + Tasks[-1].StackPointer] )
0x24f: IF (Stack[-1] == 0) GOTO 0x252; Pop(1)

0x250: @@ DestroyWindow()
0x251: Pop(0)
0x252: Push( Stack[8 + Tasks[-1].StackPointer] )
0x253: IF (Stack[-1] == 0) GOTO 0x256; Pop(1)

0x254: @@ DestroyWindow()
0x255: Pop(0)
0x256: @ CaptureKeyboard()
0x257: Pop(0)
0x258: Return(); Pop(0)

0x259: PushEmpty(int, int)
0x25a: Push("BurahCompleted")
0x25b: Push((int) 0)
0x25c: @ GetRegistryData(Stack[-3], Stack[-2], Stack[-1])
0x25d: Pop(2)
0x25e: Push((int) 0)
0x25f: Stack[-4] = Stack[-2] != Stack[-1]; Pop(1);
0x260: Return(); Pop(2)

0x261: PushEmpty(int, int)
0x262: Push("DankoCompleted")
0x263: Push((int) 0)
0x264: @ GetRegistryData(Stack[-3], Stack[-2], Stack[-1])
0x265: Pop(2)
0x266: Push((int) 0)
0x267: Stack[-4] = Stack[-2] != Stack[-1]; Pop(1);
0x268: Return(); Pop(2)

