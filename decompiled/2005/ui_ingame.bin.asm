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
	ingame_buttons.xml
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

0x55: PushEmpty(bool)
0x56: Stack[-1] = (bool) 0
0x57: Call2 0x75

0x58: Pop(1)
0x59: @ DestroyWindow()
0x5a: Pop(0)
0x5b: Return(); Pop(0)

0x5c: PushEmpty(object, object)
0x5d: Push("ingame_buttons.xml")
0x5e: Push((bool) 0)
0x5f: @ CreateWindow(Stack[-2], Stack[-1], Stack[-3])
0x60: Pop(2)
0x61: Stack[-3] = Stack[-1]
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
0x6e: Push("game_logo.xml")
0x6f: Push((bool) 0)
0x70: @ CreateWindow(Stack[-2], Stack[-1], Stack[-3])
0x71: Pop(2)
0x72: Stack[-3] = Stack[-1]
0x73: Return(); Pop(2)

0x74: Stack[-1] = 0
0x75: PushEmpty(bool, bool, bool, string, bool, bool, bool, string)
0x76: @ CaptureKeyboard()
0x77: Pop(0)
0x78: Stack[2 + Tasks[-1].StackPointer] = (int)0
0x79: @ GetWindowSize(Stack[-0], Stack[-1])
0x7a: Pop(0)
0x7b: Push("default")
0x7c: @ SetCursor(Stack[-1])
0x7d: Pop(1)
0x7e: Push("default")
0x7f: @ SetBackground(Stack[-1])
0x80: Pop(1)
0x81: Push("menumusic")
0x82: @ PlaySound(Stack[-1])
0x83: Pop(1)
0x84: Push((bool) 1)
0x85: @ ShowCursor(Stack[-1])
0x86: Pop(1)
0x87: Push(Stack[-9])
0x88: IF (Stack[-1] == 0) GOTO 0x8e; Pop(1)

0x89: Push("game_choose_pers.xml")
0x8a: Push((bool) 0)
0x8b: @ CreateWindow(Stack[-2], Stack[-1], Stack[-5])
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
0x9c: Call2 0x238

0x9d: Pop(0)
0x9e: Push((int) 1)
0x9f: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] == Stack[-1])
0xa0: IF (Stack[-1] == 0) GOTO 0xbc; Pop(1)

0xa1: Push("menumusic")
0xa2: @ PauseSound(Stack[-1])
0xa3: Pop(1)
0xa4: PushEmpty(int)
0xa5: Stack[-1] = (int) 1
0xa6: Push(-1, 1); TaskCall(1)
0xa7: Call2 0x41

0xa8: Pop(-1, 1); TaskReturn
0xa9: Pop(1)
0xaa: PushEmpty(string, bool)
0xab: Stack[-2] = "intro_danko.wmv"
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
0xb7: Push("world_danko.xml")
0xb8: Push("player_danko.xml")
0xb9: @ NewGame(Stack[-2], Stack[-1])
0xba: Pop(2)
0xbb: GOTO 0x129

0xbc: Push((int) 2)
0xbd: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] == Stack[-1])
0xbe: IF (Stack[-1] == 0) GOTO 0xda; Pop(1)

0xbf: Push("menumusic")
0xc0: @ PauseSound(Stack[-1])
0xc1: Pop(1)
0xc2: PushEmpty(int)
0xc3: Stack[-1] = (int) 2
0xc4: Push(-1, 1); TaskCall(1)
0xc5: Call2 0x41

0xc6: Pop(-1, 1); TaskReturn
0xc7: Pop(1)
0xc8: PushEmpty(string, bool)
0xc9: Stack[-2] = "intro_burah.wmv"
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
0xd5: Push("world_burah.xml")
0xd6: Push("player_burah.xml")
0xd7: @ NewGame(Stack[-2], Stack[-1])
0xd8: Pop(2)
0xd9: GOTO 0x129

0xda: Push((int) 3)
0xdb: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] == Stack[-1])
0xdc: IF (Stack[-1] == 0) GOTO 0xf8; Pop(1)

0xdd: Push("menumusic")
0xde: @ PauseSound(Stack[-1])
0xdf: Pop(1)
0xe0: PushEmpty(int)
0xe1: Stack[-1] = (int) 3
0xe2: Push(-1, 1); TaskCall(1)
0xe3: Call2 0x41

0xe4: Pop(-1, 1); TaskReturn
0xe5: Pop(1)
0xe6: PushEmpty(string, bool)
0xe7: Stack[-2] = "intro_klara.wmv"
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
0xf3: Push("world_klara.xml")
0xf4: Push("player_klara.xml")
0xf5: @ NewGame(Stack[-2], Stack[-1])
0xf6: Pop(2)
0xf7: GOTO 0x129

0xf8: Push((int) 4)
0xf9: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] == Stack[-1])
0xfa: IF (Stack[-1] == 0) GOTO 0x10b; Pop(1)

0xfb: Push("menumusic")
0xfc: @ PauseSound(Stack[-1])
0xfd: Pop(1)
0xfe: Push("Loading : ")
0xff: Pop(1); Push(Stack[-1] + Stack[10 + StackPtr]);
0x100: @ Trace(Stack[-1])
0x101: Pop(1)
0x102: @ RemoveWorld()
0x103: Pop(0)
0x104: @ UISync()
0x105: Pop(0)
0x106: @ DestroyWindow()
0x107: Pop(0)
0x108: @ LoadGame(Stack[-4], Stack[-10])
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
0x117: @@ GetFileName(Stack[-1])
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
0x125: Push("world_intro.xml")
0x126: Push("player_intro.xml")
0x127: @ NewGame(Stack[-2], Stack[-1])
0x128: Pop(2)
0x129: Return(); Pop(8)

0x12a: PushEmpty(bool, bool)
0x12b: Push("newgame")
0x12c: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x12d: IF (Stack[-1] == 0) GOTO 0x132; Pop(1)

0x12e: Stack[2 + Tasks[-1].StackPointer] = (int)7
0x12f: @ StopEventProcessing()
0x130: Pop(0)
0x131: GOTO 0x22b

0x132: Push("quitgame")
0x133: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x134: IF (Stack[-1] == 0) GOTO 0x13c; Pop(1)

0x135: Push("Quit game")
0x136: @ UITrace(Stack[-1])
0x137: Pop(1)
0x138: @ Quit()
0x139: Pop(0)
0x13a: Return(); Pop(2)

0x13b: GOTO 0x22b

0x13c: Push("loadgame")
0x13d: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x13e: IF (Stack[-1] == 0) GOTO 0x148; Pop(1)

0x13f: PushEmpty()
0x140: Call2 0x238

0x141: Pop(0)
0x142: Push("load.xml")
0x143: Push((bool) 0)
0x144: @ CreateWindow(Stack[-2], Stack[-1], Stack[-6])
0x145: Pop(2)
0x146: Return(); Pop(2)

0x147: GOTO 0x22b

0x148: Push("savegame")
0x149: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x14a: IF (Stack[-1] == 0) GOTO 0x154; Pop(1)

0x14b: PushEmpty()
0x14c: Call2 0x238

0x14d: Pop(0)
0x14e: Push("save.xml")
0x14f: Push((bool) 0)
0x150: @ CreateWindow(Stack[-2], Stack[-1], Stack[-7])
0x151: Pop(2)
0x152: Return(); Pop(2)

0x153: GOTO 0x22b

0x154: Push("gameoptions")
0x155: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x156: IF (Stack[-1] == 0) GOTO 0x160; Pop(1)

0x157: PushEmpty()
0x158: Call2 0x238

0x159: Pop(0)
0x15a: Push("options.xml")
0x15b: Push((bool) 0)
0x15c: @ CreateWindow(Stack[-2], Stack[-1], Stack[-8])
0x15d: Pop(2)
0x15e: Return(); Pop(2)

0x15f: GOTO 0x22b

0x160: Push("continue")
0x161: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x162: IF (Stack[-1] == 0) GOTO 0x168; Pop(1)

0x163: Stack[2 + Tasks[-1].StackPointer] = (int)6
0x164: @ StopEventProcessing()
0x165: Pop(0)
0x166: Return(); Pop(2)

0x167: GOTO 0x22b

0x168: Push("credits")
0x169: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x16a: IF (Stack[-1] == 0) GOTO 0x180; Pop(1)

0x16b: PushEmpty()
0x16c: Call2 0x238

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
0x17f: GOTO 0x22b

0x180: Push("danko")
0x181: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x182: IF (Stack[-1] == 0) GOTO 0x1a3; Pop(1)

0x183: Push((int) 0)
0x184: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x185: IF (Stack[-1] == 0) GOTO 0x18a; Pop(1)

0x186: Stack[2 + Tasks[-1].StackPointer] = (int)1
0x187: @ StopEventProcessing()
0x188: Pop(0)
0x189: GOTO 0x1a1

0x18a: Push((int) 1)
0x18b: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x18c: IF (Stack[-1] == 0) GOTO 0x196; Pop(1)

0x18d: Push((int) 202)
0x18e: Push("player_name")
0x18f: @ SendMessage(Stack[-2], Stack[-1])
0x190: Pop(2)
0x191: Push((int) 203)
0x192: Push("player_desc")
0x193: @ SendMessage(Stack[-2], Stack[-1])
0x194: Pop(2)
0x195: GOTO 0x1a1

0x196: Push((int) 2)
0x197: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x198: IF (Stack[-1] == 0) GOTO 0x1a1; Pop(1)

0x199: Push((int) -1)
0x19a: Push("player_name")
0x19b: @ SendMessage(Stack[-2], Stack[-1])
0x19c: Pop(2)
0x19d: Push((int) -1)
0x19e: Push("player_desc")
0x19f: @ SendMessage(Stack[-2], Stack[-1])
0x1a0: Pop(2)
0x1a1: Return(); Pop(2)

0x1a2: GOTO 0x22b

0x1a3: Push("burah")
0x1a4: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x1a5: IF (Stack[-1] == 0) GOTO 0x1c6; Pop(1)

0x1a6: Push((int) 0)
0x1a7: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x1a8: IF (Stack[-1] == 0) GOTO 0x1ad; Pop(1)

0x1a9: Stack[2 + Tasks[-1].StackPointer] = (int)2
0x1aa: @ StopEventProcessing()
0x1ab: Pop(0)
0x1ac: GOTO 0x1c4

0x1ad: Push((int) 1)
0x1ae: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x1af: IF (Stack[-1] == 0) GOTO 0x1b9; Pop(1)

0x1b0: Push((int) 205)
0x1b1: Push("player_name")
0x1b2: @ SendMessage(Stack[-2], Stack[-1])
0x1b3: Pop(2)
0x1b4: Push((int) 206)
0x1b5: Push("player_desc")
0x1b6: @ SendMessage(Stack[-2], Stack[-1])
0x1b7: Pop(2)
0x1b8: GOTO 0x1c4

0x1b9: Push((int) 2)
0x1ba: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x1bb: IF (Stack[-1] == 0) GOTO 0x1c4; Pop(1)

0x1bc: Push((int) -1)
0x1bd: Push("player_name")
0x1be: @ SendMessage(Stack[-2], Stack[-1])
0x1bf: Pop(2)
0x1c0: Push((int) -1)
0x1c1: Push("player_desc")
0x1c2: @ SendMessage(Stack[-2], Stack[-1])
0x1c3: Pop(2)
0x1c4: Return(); Pop(2)

0x1c5: GOTO 0x22b

0x1c6: Push("klara")
0x1c7: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x1c8: IF (Stack[-1] == 0) GOTO 0x203; Pop(1)

0x1c9: Stack[-1] = (bool) 1
0x1ca: PushEmpty(bool)
0x1cb: Stack[-1] = (bool) 0
0x1cc: PushEmpty(bool)
0x1cd: Call2 0x25b

0x1ce: Pop(0)
0x1cf: Pop(1); Push((bool) Stack[-1] == 0)
0x1d0: IF (Stack[-1] == 0) GOTO 0x1d7; Pop(1)

0x1d1: PushEmpty(bool)
0x1d2: Call2 0x253

0x1d3: Pop(0)
0x1d4: Pop(1); Push((bool) Stack[-1] == 0)
0x1d5: IF (Stack[-1] == 0) GOTO 0x1d7; Pop(1)

0x1d6: Stack[-1] = (bool) 1
0x1d7: IF (Stack[-1] == 0) GOTO 0x1d9; Pop(1)

0x1d8: Stack[-1] = (bool) 0
0x1d9: Push((int) 0)
0x1da: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x1db: IF (Stack[-1] == 0) GOTO 0x1e3; Pop(1)

0x1dc: Pop(0); Push((bool) Stack[-1] == 0)
0x1dd: IF (Stack[-1] == 0) GOTO 0x1df; Pop(1)

0x1de: Return(); Pop(2)

0x1df: Stack[2 + Tasks[-1].StackPointer] = (int)3
0x1e0: @ StopEventProcessing()
0x1e1: Pop(0)
0x1e2: GOTO 0x201

0x1e3: Push((int) 1)
0x1e4: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x1e5: IF (Stack[-1] == 0) GOTO 0x1f6; Pop(1)

0x1e6: Push((int) 208)
0x1e7: Push("player_name")
0x1e8: @ SendMessage(Stack[-2], Stack[-1])
0x1e9: Pop(2)
0x1ea: Push(Stack[-1])
0x1eb: IF (Stack[-1] == 0) GOTO 0x1f1; Pop(1)

0x1ec: Push((int) 209)
0x1ed: Push("player_desc")
0x1ee: @ SendMessage(Stack[-2], Stack[-1])
0x1ef: Pop(2)
0x1f0: GOTO 0x1f5

0x1f1: Push((int) 213)
0x1f2: Push("player_desc")
0x1f3: @ SendMessage(Stack[-2], Stack[-1])
0x1f4: Pop(2)
0x1f5: GOTO 0x201

0x1f6: Push((int) 2)
0x1f7: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x1f8: IF (Stack[-1] == 0) GOTO 0x201; Pop(1)

0x1f9: Push((int) -1)
0x1fa: Push("player_name")
0x1fb: @ SendMessage(Stack[-2], Stack[-1])
0x1fc: Pop(2)
0x1fd: Push((int) -1)
0x1fe: Push("player_desc")
0x1ff: @ SendMessage(Stack[-2], Stack[-1])
0x200: Pop(2)
0x201: Return(); Pop(2)

0x202: GOTO 0x22b

0x203: Push("load")
0x204: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x205: IF (Stack[-1] == 0) GOTO 0x214; Pop(1)

0x206: Push((int) 0)
0x207: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x208: IF (Stack[-1] == 0) GOTO 0x20f; Pop(1)

0x209: Stack[2 + Tasks[-1].StackPointer] = (int)4
0x20a: @@ GetFileName(Stack[-10])
0x20b: Pop(0)
0x20c: @ StopEventProcessing()
0x20d: Pop(0)
0x20e: GOTO 0x212

0x20f: PushEmpty()
0x210: Call2 0x22c

0x211: Pop(0)
0x212: Return(); Pop(2)

0x213: GOTO 0x22b

0x214: Push("save")
0x215: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x216: IF (Stack[-1] == 0) GOTO 0x224; Pop(1)

0x217: Push((int) 0)
0x218: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x219: IF (Stack[-1] == 0) GOTO 0x21f; Pop(1)

0x21a: Stack[2 + Tasks[-1].StackPointer] = (int)5
0x21b: Stack[9 + Tasks[-1].StackPointer] = Stack[-3]
0x21c: @ StopEventProcessing()
0x21d: Pop(0)
0x21e: GOTO 0x222

0x21f: PushEmpty()
0x220: Call2 0x22c

0x221: Pop(0)
0x222: Return(); Pop(2)

0x223: GOTO 0x22b

0x224: Push("options")
0x225: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x226: IF (Stack[-1] == 0) GOTO 0x22b; Pop(1)

0x227: PushEmpty()
0x228: Call2 0x22c

0x229: Pop(0)
0x22a: Return(); Pop(2)

0x22b: Return(); Pop(2)

0x22c: PushEmpty()
0x22d: Call2 0x238

0x22e: Pop(0)
0x22f: PushEmpty(object)
0x230: Call2 0x5c

0x231: Stack[3 + Tasks[-1].StackPointer] = Stack[-1]
0x232: Pop(1)
0x233: PushEmpty(object)
0x234: Call2 0x6d

0x235: Stack[4 + Tasks[-1].StackPointer] = Stack[-1]
0x236: Pop(1)
0x237: Return(); Pop(0)

0x238: Push( Stack[3 + Tasks[-1].StackPointer] )
0x239: IF (Stack[-1] == 0) GOTO 0x23c; Pop(1)

0x23a: @@ DestroyWindow()
0x23b: Pop(0)
0x23c: Push( Stack[4 + Tasks[-1].StackPointer] )
0x23d: IF (Stack[-1] == 0) GOTO 0x240; Pop(1)

0x23e: @@ DestroyWindow()
0x23f: Pop(0)
0x240: Push( Stack[5 + Tasks[-1].StackPointer] )
0x241: IF (Stack[-1] == 0) GOTO 0x244; Pop(1)

0x242: @@ DestroyWindow()
0x243: Pop(0)
0x244: Push( Stack[6 + Tasks[-1].StackPointer] )
0x245: IF (Stack[-1] == 0) GOTO 0x248; Pop(1)

0x246: @@ DestroyWindow()
0x247: Pop(0)
0x248: Push( Stack[7 + Tasks[-1].StackPointer] )
0x249: IF (Stack[-1] == 0) GOTO 0x24c; Pop(1)

0x24a: @@ DestroyWindow()
0x24b: Pop(0)
0x24c: Push( Stack[8 + Tasks[-1].StackPointer] )
0x24d: IF (Stack[-1] == 0) GOTO 0x250; Pop(1)

0x24e: @@ DestroyWindow()
0x24f: Pop(0)
0x250: @ CaptureKeyboard()
0x251: Pop(0)
0x252: Return(); Pop(0)

0x253: PushEmpty(int, int)
0x254: Push("BurahCompleted")
0x255: Push((int) 0)
0x256: @ GetRegistryData(Stack[-3], Stack[-2], Stack[-1])
0x257: Pop(2)
0x258: Push((int) 0)
0x259: Stack[-4] = Stack[-2] != Stack[-1]; Pop(1);
0x25a: Return(); Pop(2)

0x25b: PushEmpty(int, int)
0x25c: Push("DankoCompleted")
0x25d: Push((int) 0)
0x25e: @ GetRegistryData(Stack[-3], Stack[-2], Stack[-1])
0x25f: Pop(2)
0x260: Push((int) 0)
0x261: Stack[-4] = Stack[-2] != Stack[-1]; Pop(1);
0x262: Return(); Pop(2)

