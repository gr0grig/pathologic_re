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
		EVENT_100 Op = 0x149 Vars = (int)
		EVENT_200 Op = 0x151 Vars = (int, string, object)
		EVENT_102 Op = 0x3f0 Vars = (int)
		EVENT_101 Op = 0x417 Vars = (int)


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

0x6d: Push("menumusic")
0x6e: @ PlaySound(Stack[-1])
0x6f: Pop(1)
0x70: PushEmpty(int)
0x71: Stack[-1] = (int) 8
0x72: Push(-1, 1); TaskCall(1)
0x73: Call2 0x59

0x74: Pop(-1, 1); TaskReturn
0x75: Pop(1)
0x76: PushEmpty(bool)
0x77: Stack[-1] = (bool) 0
0x78: Call2 0x8b

0x79: Pop(1)
0x7a: Return(); Pop(0)

0x7b: PushEmpty(object, object)
0x7c: Push("game_buttons.xml")
0x7d: Push((bool) 0)
0x7e: @ CreateWindow(Stack[-2], Stack[-1], Stack[-3])
0x7f: Pop(2)
0x80: Stack[-3] = Stack[-1]
0x81: Return(); Pop(2)

0x82: Stack[-1] = 0
0x83: PushEmpty(object, object)
0x84: Push("game_logo.xml")
0x85: Push((bool) 0)
0x86: @ CreateWindow(Stack[-2], Stack[-1], Stack[-3])
0x87: Pop(2)
0x88: Stack[-3] = Stack[-1]
0x89: Return(); Pop(2)

0x8a: Stack[-1] = 0
0x8b: PushEmpty(bool, bool, bool, string, bool, bool, bool, string)
0x8c: Stack[14 + Tasks[-1].StackPointer] = Stack[-9]
0x8d: @ CaptureKeyboard()
0x8e: Pop(0)
0x8f: Stack[2 + Tasks[-1].StackPointer] = (int)0
0x90: @ GetWindowSize(Stack[-0], Stack[-1])
0x91: Pop(0)
0x92: Push("default")
0x93: @ SetCursor(Stack[-1])
0x94: Pop(1)
0x95: Push("default")
0x96: @ SetBackground(Stack[-1])
0x97: Pop(1)
0x98: Push("menumusic")
0x99: @ PlaySound(Stack[-1])
0x9a: Pop(1)
0x9b: Push((bool) 1)
0x9c: @ ShowCursor(Stack[-1])
0x9d: Pop(1)
0x9e: PushEmpty(string)
0x9f: Stack[-1] = ""
0xa0: Call2 0x38b

0xa1: Pop(1)
0xa2: PushEmpty(string)
0xa3: Stack[-1] = ""
0xa4: Call2 0x390

0xa5: Pop(1)
0xa6: Push(Stack[-9])
0xa7: IF (Stack[-1] == 0) GOTO 0xad; Pop(1)

0xa8: Push("game_choose_pers.xml")
0xa9: Push((bool) 0)
0xaa: @ CreateWindow(Stack[-2], Stack[-1], Stack[-5])
0xab: Pop(2)
0xac: GOTO 0xb5

0xad: PushEmpty(object)
0xae: Call2 0x7b

0xaf: Stack[3 + Tasks[-1].StackPointer] = Stack[-1]
0xb0: Pop(1)
0xb1: PushEmpty(object)
0xb2: Call2 0x83

0xb3: Stack[4 + Tasks[-1].StackPointer] = Stack[-1]
0xb4: Pop(1)
0xb5: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0xb6: IF (Stack[-1] == 0) GOTO 0xba; Pop(1)

0xb7: @ ProcessEvents()
0xb8: Pop(0)
0xb9: GOTO 0xb5

0xba: PushEmpty()
0xbb: Call2 0x271

0xbc: Pop(0)
0xbd: Push((int) 1)
0xbe: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] == Stack[-1])
0xbf: IF (Stack[-1] == 0) GOTO 0xdb; Pop(1)

0xc0: Push("menumusic")
0xc1: @ PauseSound(Stack[-1])
0xc2: Pop(1)
0xc3: PushEmpty(int)
0xc4: Stack[-1] = (int) 1
0xc5: Push(-1, 1); TaskCall(1)
0xc6: Call2 0x59

0xc7: Pop(-1, 1); TaskReturn
0xc8: Pop(1)
0xc9: PushEmpty(string, bool)
0xca: Stack[-2] = "intro_danko.wmv"
0xcb: Stack[-1] = (bool) 1
0xcc: Push(-2, 4); TaskCall(0)
0xcd: Call2 0x0

0xce: Pop(-2, 4); TaskReturn
0xcf: Pop(2)
0xd0: @ RemoveWorld()
0xd1: Pop(0)
0xd2: @ UISync()
0xd3: Pop(0)
0xd4: @ DestroyWindow()
0xd5: Pop(0)
0xd6: Push("world_danko.xml")
0xd7: Push("player_danko.xml")
0xd8: @ NewGame(Stack[-2], Stack[-1])
0xd9: Pop(2)
0xda: GOTO 0x148

0xdb: Push((int) 2)
0xdc: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] == Stack[-1])
0xdd: IF (Stack[-1] == 0) GOTO 0xf9; Pop(1)

0xde: Push("menumusic")
0xdf: @ PauseSound(Stack[-1])
0xe0: Pop(1)
0xe1: PushEmpty(int)
0xe2: Stack[-1] = (int) 2
0xe3: Push(-1, 1); TaskCall(1)
0xe4: Call2 0x59

0xe5: Pop(-1, 1); TaskReturn
0xe6: Pop(1)
0xe7: PushEmpty(string, bool)
0xe8: Stack[-2] = "intro_burah.wmv"
0xe9: Stack[-1] = (bool) 1
0xea: Push(-2, 4); TaskCall(0)
0xeb: Call2 0x0

0xec: Pop(-2, 4); TaskReturn
0xed: Pop(2)
0xee: @ RemoveWorld()
0xef: Pop(0)
0xf0: @ UISync()
0xf1: Pop(0)
0xf2: @ DestroyWindow()
0xf3: Pop(0)
0xf4: Push("world_burah.xml")
0xf5: Push("player_burah.xml")
0xf6: @ NewGame(Stack[-2], Stack[-1])
0xf7: Pop(2)
0xf8: GOTO 0x148

0xf9: Push((int) 3)
0xfa: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] == Stack[-1])
0xfb: IF (Stack[-1] == 0) GOTO 0x117; Pop(1)

0xfc: Push("menumusic")
0xfd: @ PauseSound(Stack[-1])
0xfe: Pop(1)
0xff: PushEmpty(int)
0x100: Stack[-1] = (int) 3
0x101: Push(-1, 1); TaskCall(1)
0x102: Call2 0x59

0x103: Pop(-1, 1); TaskReturn
0x104: Pop(1)
0x105: PushEmpty(string, bool)
0x106: Stack[-2] = "intro_klara.wmv"
0x107: Stack[-1] = (bool) 1
0x108: Push(-2, 4); TaskCall(0)
0x109: Call2 0x0

0x10a: Pop(-2, 4); TaskReturn
0x10b: Pop(2)
0x10c: @ RemoveWorld()
0x10d: Pop(0)
0x10e: @ UISync()
0x10f: Pop(0)
0x110: @ DestroyWindow()
0x111: Pop(0)
0x112: Push("world_klara.xml")
0x113: Push("player_klara.xml")
0x114: @ NewGame(Stack[-2], Stack[-1])
0x115: Pop(2)
0x116: GOTO 0x148

0x117: Push((int) 4)
0x118: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] == Stack[-1])
0x119: IF (Stack[-1] == 0) GOTO 0x12a; Pop(1)

0x11a: Push("menumusic")
0x11b: @ PauseSound(Stack[-1])
0x11c: Pop(1)
0x11d: Push("Loading : ")
0x11e: Pop(1); Push(Stack[-1] + Stack[10 + StackPtr]);
0x11f: @ Trace(Stack[-1])
0x120: Pop(1)
0x121: @ RemoveWorld()
0x122: Pop(0)
0x123: @ UISync()
0x124: Pop(0)
0x125: @ DestroyWindow()
0x126: Pop(0)
0x127: @ LoadGame(Stack[-4], Stack[-10])
0x128: Pop(0)
0x129: GOTO 0x148

0x12a: Push((int) 5)
0x12b: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] == Stack[-1])
0x12c: IF (Stack[-1] == 0) GOTO 0x13b; Pop(1)

0x12d: Pop(0); Push((bool) Stack[9 + Tasks[-1].StackPointer] == 0)
0x12e: IF (Stack[-1] == 0) GOTO 0x134; Pop(1)

0x12f: @ DestroyWindow()
0x130: Pop(0)
0x131: @ SaveGame(Stack[-3])
0x132: Pop(0)
0x133: GOTO 0x13a

0x134: @ DestroyWindow()
0x135: Pop(0)
0x136: @@ GetFileName(Stack[-1])
0x137: Pop(0)
0x138: @ SaveGame(Stack[-2], Stack[-1])
0x139: Pop(0)
0x13a: GOTO 0x148

0x13b: Push((int) 7)
0x13c: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] == Stack[-1])
0x13d: IF (Stack[-1] == 0) GOTO 0x148; Pop(1)

0x13e: @ RemoveWorld()
0x13f: Pop(0)
0x140: @ UISync()
0x141: Pop(0)
0x142: @ DestroyWindow()
0x143: Pop(0)
0x144: Push("world_intro.xml")
0x145: Push("player_intro.xml")
0x146: @ NewGame(Stack[-2], Stack[-1])
0x147: Pop(2)
0x148: Return(); Pop(8)

0x149: PushEmpty()
0x14a: Push((int) 27)
0x14b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x14c: IF (Stack[-1] == 0) GOTO 0x150; Pop(1)

0x14d: PushEmpty()
0x14e: Call2 0x261

0x14f: Pop(0)
0x150: Return(); Pop(0)

0x151: PushEmpty()
0x152: Push("newgame")
0x153: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x154: IF (Stack[-1] == 0) GOTO 0x159; Pop(1)

0x155: Stack[2 + Tasks[-1].StackPointer] = (int)7
0x156: @ StopEventProcessing()
0x157: Pop(0)
0x158: GOTO 0x260

0x159: Push("quitgame")
0x15a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x15b: IF (Stack[-1] == 0) GOTO 0x163; Pop(1)

0x15c: Push("Quit game")
0x15d: @ UITrace(Stack[-1])
0x15e: Pop(1)
0x15f: @ Quit()
0x160: Pop(0)
0x161: Return(); Pop(0)

0x162: GOTO 0x260

0x163: Push("loadgame")
0x164: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x165: IF (Stack[-1] == 0) GOTO 0x16f; Pop(1)

0x166: PushEmpty()
0x167: Call2 0x271

0x168: Pop(0)
0x169: Push("load.xml")
0x16a: Push((bool) 0)
0x16b: @ CreateWindow(Stack[-2], Stack[-1], Stack[-6])
0x16c: Pop(2)
0x16d: Return(); Pop(0)

0x16e: GOTO 0x260

0x16f: Push("savegame")
0x170: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x171: IF (Stack[-1] == 0) GOTO 0x17b; Pop(1)

0x172: PushEmpty()
0x173: Call2 0x271

0x174: Pop(0)
0x175: Push("save.xml")
0x176: Push((bool) 0)
0x177: @ CreateWindow(Stack[-2], Stack[-1], Stack[-7])
0x178: Pop(2)
0x179: Return(); Pop(0)

0x17a: GOTO 0x260

0x17b: Push("gameoptions")
0x17c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x17d: IF (Stack[-1] == 0) GOTO 0x187; Pop(1)

0x17e: PushEmpty()
0x17f: Call2 0x271

0x180: Pop(0)
0x181: Push("options.xml")
0x182: Push((bool) 0)
0x183: @ CreateWindow(Stack[-2], Stack[-1], Stack[-8])
0x184: Pop(2)
0x185: Return(); Pop(0)

0x186: GOTO 0x260

0x187: Push("continue")
0x188: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x189: IF (Stack[-1] == 0) GOTO 0x18f; Pop(1)

0x18a: Stack[2 + Tasks[-1].StackPointer] = (int)6
0x18b: @ StopEventProcessing()
0x18c: Pop(0)
0x18d: Return(); Pop(0)

0x18e: GOTO 0x260

0x18f: Push("credits")
0x190: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x191: IF (Stack[-1] == 0) GOTO 0x1ad; Pop(1)

0x192: PushEmpty()
0x193: Call2 0x271

0x194: Pop(0)
0x195: PushEmpty(int)
0x196: Stack[-1] = (int) 8
0x197: Push(-1, 1); TaskCall(1)
0x198: Call2 0x59

0x199: Pop(-1, 1); TaskReturn
0x19a: Pop(1)
0x19b: PushEmpty(object)
0x19c: Call2 0x7b

0x19d: Stack[3 + Tasks[-1].StackPointer] = Stack[-1]
0x19e: Pop(1)
0x19f: PushEmpty(object)
0x1a0: Call2 0x83

0x1a1: Stack[4 + Tasks[-1].StackPointer] = Stack[-1]
0x1a2: Pop(1)
0x1a3: Push((bool) 1)
0x1a4: @ ShowCursor(Stack[-1])
0x1a5: Pop(1)
0x1a6: @ CaptureKeyboard()
0x1a7: Pop(0)
0x1a8: PushEmpty(string)
0x1a9: Stack[-1] = ""
0x1aa: Call2 0x38b

0x1ab: Pop(1)
0x1ac: GOTO 0x260

0x1ad: Push("danko")
0x1ae: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1af: IF (Stack[-1] == 0) GOTO 0x1d0; Pop(1)

0x1b0: Push((int) 0)
0x1b1: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1b2: IF (Stack[-1] == 0) GOTO 0x1b7; Pop(1)

0x1b3: Stack[2 + Tasks[-1].StackPointer] = (int)1
0x1b4: @ StopEventProcessing()
0x1b5: Pop(0)
0x1b6: GOTO 0x1ce

0x1b7: Push((int) 1)
0x1b8: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1b9: IF (Stack[-1] == 0) GOTO 0x1c3; Pop(1)

0x1ba: Push((int) 202)
0x1bb: Push("player_name")
0x1bc: @ SendMessage(Stack[-2], Stack[-1])
0x1bd: Pop(2)
0x1be: Push((int) 203)
0x1bf: Push("player_desc")
0x1c0: @ SendMessage(Stack[-2], Stack[-1])
0x1c1: Pop(2)
0x1c2: GOTO 0x1ce

0x1c3: Push((int) 2)
0x1c4: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1c5: IF (Stack[-1] == 0) GOTO 0x1ce; Pop(1)

0x1c6: Push((int) -1)
0x1c7: Push("player_name")
0x1c8: @ SendMessage(Stack[-2], Stack[-1])
0x1c9: Pop(2)
0x1ca: Push((int) -1)
0x1cb: Push("player_desc")
0x1cc: @ SendMessage(Stack[-2], Stack[-1])
0x1cd: Pop(2)
0x1ce: Return(); Pop(0)

0x1cf: GOTO 0x260

0x1d0: Push("burah")
0x1d1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1d2: IF (Stack[-1] == 0) GOTO 0x1f3; Pop(1)

0x1d3: Push((int) 0)
0x1d4: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1d5: IF (Stack[-1] == 0) GOTO 0x1da; Pop(1)

0x1d6: Stack[2 + Tasks[-1].StackPointer] = (int)2
0x1d7: @ StopEventProcessing()
0x1d8: Pop(0)
0x1d9: GOTO 0x1f1

0x1da: Push((int) 1)
0x1db: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1dc: IF (Stack[-1] == 0) GOTO 0x1e6; Pop(1)

0x1dd: Push((int) 205)
0x1de: Push("player_name")
0x1df: @ SendMessage(Stack[-2], Stack[-1])
0x1e0: Pop(2)
0x1e1: Push((int) 206)
0x1e2: Push("player_desc")
0x1e3: @ SendMessage(Stack[-2], Stack[-1])
0x1e4: Pop(2)
0x1e5: GOTO 0x1f1

0x1e6: Push((int) 2)
0x1e7: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1e8: IF (Stack[-1] == 0) GOTO 0x1f1; Pop(1)

0x1e9: Push((int) -1)
0x1ea: Push("player_name")
0x1eb: @ SendMessage(Stack[-2], Stack[-1])
0x1ec: Pop(2)
0x1ed: Push((int) -1)
0x1ee: Push("player_desc")
0x1ef: @ SendMessage(Stack[-2], Stack[-1])
0x1f0: Pop(2)
0x1f1: Return(); Pop(0)

0x1f2: GOTO 0x260

0x1f3: Push("klara")
0x1f4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1f5: IF (Stack[-1] == 0) GOTO 0x238; Pop(1)

0x1f6: Push((int) 0)
0x1f7: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1f8: IF (Stack[-1] == 0) GOTO 0x20c; Pop(1)

0x1f9: PushEmpty(bool)
0x1fa: Stack[-1] = (bool) 0
0x1fb: PushEmpty(bool)
0x1fc: Call2 0x466

0x1fd: Pop(0)
0x1fe: Pop(1); Push((bool) Stack[-1] == 0)
0x1ff: IF (Stack[-1] == 0) GOTO 0x206; Pop(1)

0x200: PushEmpty(bool)
0x201: Call2 0x45e

0x202: Pop(0)
0x203: Pop(1); Push((bool) Stack[-1] == 0)
0x204: IF (Stack[-1] == 0) GOTO 0x206; Pop(1)

0x205: Stack[-1] = (bool) 1
0x206: IF (Stack[-1] == 0) GOTO 0x208; Pop(1)

0x207: Return(); Pop(0)

0x208: Stack[2 + Tasks[-1].StackPointer] = (int)3
0x209: @ StopEventProcessing()
0x20a: Pop(0)
0x20b: GOTO 0x236

0x20c: Push((int) 1)
0x20d: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x20e: IF (Stack[-1] == 0) GOTO 0x22b; Pop(1)

0x20f: Push((int) 208)
0x210: Push("player_name")
0x211: @ SendMessage(Stack[-2], Stack[-1])
0x212: Pop(2)
0x213: PushEmpty(bool)
0x214: Stack[-1] = (bool) 0
0x215: PushEmpty(bool)
0x216: Call2 0x466

0x217: Pop(0)
0x218: Pop(1); Push((bool) Stack[-1] == 0)
0x219: IF (Stack[-1] == 0) GOTO 0x220; Pop(1)

0x21a: PushEmpty(bool)
0x21b: Call2 0x45e

0x21c: Pop(0)
0x21d: Pop(1); Push((bool) Stack[-1] == 0)
0x21e: IF (Stack[-1] == 0) GOTO 0x220; Pop(1)

0x21f: Stack[-1] = (bool) 1
0x220: IF (Stack[-1] == 0) GOTO 0x226; Pop(1)

0x221: Push((int) 213)
0x222: Push("player_desc")
0x223: @ SendMessage(Stack[-2], Stack[-1])
0x224: Pop(2)
0x225: GOTO 0x22a

0x226: Push((int) 209)
0x227: Push("player_desc")
0x228: @ SendMessage(Stack[-2], Stack[-1])
0x229: Pop(2)
0x22a: GOTO 0x236

0x22b: Push((int) 2)
0x22c: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x22d: IF (Stack[-1] == 0) GOTO 0x236; Pop(1)

0x22e: Push((int) -1)
0x22f: Push("player_name")
0x230: @ SendMessage(Stack[-2], Stack[-1])
0x231: Pop(2)
0x232: Push((int) -1)
0x233: Push("player_desc")
0x234: @ SendMessage(Stack[-2], Stack[-1])
0x235: Pop(2)
0x236: Return(); Pop(0)

0x237: GOTO 0x260

0x238: Push("load")
0x239: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x23a: IF (Stack[-1] == 0) GOTO 0x249; Pop(1)

0x23b: Push((int) 0)
0x23c: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x23d: IF (Stack[-1] == 0) GOTO 0x244; Pop(1)

0x23e: Stack[2 + Tasks[-1].StackPointer] = (int)4
0x23f: @@ GetFileName(Stack[-10])
0x240: Pop(0)
0x241: @ StopEventProcessing()
0x242: Pop(0)
0x243: GOTO 0x247

0x244: PushEmpty()
0x245: Call2 0x261

0x246: Pop(0)
0x247: Return(); Pop(0)

0x248: GOTO 0x260

0x249: Push("save")
0x24a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x24b: IF (Stack[-1] == 0) GOTO 0x259; Pop(1)

0x24c: Push((int) 0)
0x24d: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x24e: IF (Stack[-1] == 0) GOTO 0x254; Pop(1)

0x24f: Stack[2 + Tasks[-1].StackPointer] = (int)5
0x250: Stack[9 + Tasks[-1].StackPointer] = Stack[-1]
0x251: @ StopEventProcessing()
0x252: Pop(0)
0x253: GOTO 0x257

0x254: PushEmpty()
0x255: Call2 0x261

0x256: Pop(0)
0x257: Return(); Pop(0)

0x258: GOTO 0x260

0x259: Push("options")
0x25a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x25b: IF (Stack[-1] == 0) GOTO 0x260; Pop(1)

0x25c: PushEmpty()
0x25d: Call2 0x261

0x25e: Pop(0)
0x25f: Return(); Pop(0)

0x260: Return(); Pop(0)

0x261: PushEmpty(string)
0x262: Stack[-1] = ""
0x263: Call2 0x38b

0x264: Pop(1)
0x265: PushEmpty()
0x266: Call2 0x271

0x267: Pop(0)
0x268: PushEmpty(object)
0x269: Call2 0x7b

0x26a: Stack[3 + Tasks[-1].StackPointer] = Stack[-1]
0x26b: Pop(1)
0x26c: PushEmpty(object)
0x26d: Call2 0x83

0x26e: Stack[4 + Tasks[-1].StackPointer] = Stack[-1]
0x26f: Pop(1)
0x270: Return(); Pop(0)

0x271: Push( Stack[3 + Tasks[-1].StackPointer] )
0x272: IF (Stack[-1] == 0) GOTO 0x275; Pop(1)

0x273: @@ DestroyWindow()
0x274: Pop(0)
0x275: Push( Stack[4 + Tasks[-1].StackPointer] )
0x276: IF (Stack[-1] == 0) GOTO 0x279; Pop(1)

0x277: @@ DestroyWindow()
0x278: Pop(0)
0x279: Push( Stack[5 + Tasks[-1].StackPointer] )
0x27a: IF (Stack[-1] == 0) GOTO 0x27d; Pop(1)

0x27b: @@ DestroyWindow()
0x27c: Pop(0)
0x27d: Push( Stack[6 + Tasks[-1].StackPointer] )
0x27e: IF (Stack[-1] == 0) GOTO 0x281; Pop(1)

0x27f: @@ DestroyWindow()
0x280: Pop(0)
0x281: Push( Stack[7 + Tasks[-1].StackPointer] )
0x282: IF (Stack[-1] == 0) GOTO 0x285; Pop(1)

0x283: @@ DestroyWindow()
0x284: Pop(0)
0x285: Push( Stack[8 + Tasks[-1].StackPointer] )
0x286: IF (Stack[-1] == 0) GOTO 0x289; Pop(1)

0x287: @@ DestroyWindow()
0x288: Pop(0)
0x289: @ CaptureKeyboard()
0x28a: Pop(0)
0x28b: Return(); Pop(0)

0x28c: Push((int) 0)
0x28d: Push("newgame")
0x28e: @ SendMessage(Stack[-2], Stack[-1])
0x28f: Pop(2)
0x290: Push((int) 0)
0x291: Push("loadgame")
0x292: @ SendMessage(Stack[-2], Stack[-1])
0x293: Pop(2)
0x294: Push((int) 0)
0x295: Push("gameoptions")
0x296: @ SendMessage(Stack[-2], Stack[-1])
0x297: Pop(2)
0x298: Push((int) 0)
0x299: Push("credits")
0x29a: @ SendMessage(Stack[-2], Stack[-1])
0x29b: Pop(2)
0x29c: Push((int) 0)
0x29d: Push("quitgame")
0x29e: @ SendMessage(Stack[-2], Stack[-1])
0x29f: Pop(2)
0x2a0: Return(); Pop(0)

0x2a1: Push((int) 0)
0x2a2: Push("danko")
0x2a3: @ SendMessage(Stack[-2], Stack[-1])
0x2a4: Pop(2)
0x2a5: Push((int) 0)
0x2a6: Push("burah")
0x2a7: @ SendMessage(Stack[-2], Stack[-1])
0x2a8: Pop(2)
0x2a9: Push((int) 0)
0x2aa: Push("klara")
0x2ab: @ SendMessage(Stack[-2], Stack[-1])
0x2ac: Pop(2)
0x2ad: Return(); Pop(0)

0x2ae: PushEmpty()
0x2af: Call2 0x2a1

0x2b0: Pop(0)
0x2b1: PushEmpty(string)
0x2b2: Call2 0x38e

0x2b3: Pop(0)
0x2b4: Push("")
0x2b5: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x2b6: IF (Stack[-1] == 0) GOTO 0x2c0; Pop(1)

0x2b7: Push((int) 1)
0x2b8: Push("danko")
0x2b9: @ SendMessage(Stack[-2], Stack[-1])
0x2ba: Pop(2)
0x2bb: PushEmpty(string)
0x2bc: Stack[-1] = "danko"
0x2bd: Call2 0x390

0x2be: Pop(1)
0x2bf: GOTO 0x2ec

0x2c0: PushEmpty(string)
0x2c1: Call2 0x38e

0x2c2: Pop(0)
0x2c3: Push("danko")
0x2c4: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x2c5: IF (Stack[-1] == 0) GOTO 0x2cf; Pop(1)

0x2c6: Push((int) 1)
0x2c7: Push("burah")
0x2c8: @ SendMessage(Stack[-2], Stack[-1])
0x2c9: Pop(2)
0x2ca: PushEmpty(string)
0x2cb: Stack[-1] = "burah"
0x2cc: Call2 0x390

0x2cd: Pop(1)
0x2ce: GOTO 0x2ec

0x2cf: PushEmpty(string)
0x2d0: Call2 0x38e

0x2d1: Pop(0)
0x2d2: Push("burah")
0x2d3: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x2d4: IF (Stack[-1] == 0) GOTO 0x2de; Pop(1)

0x2d5: Push((int) 1)
0x2d6: Push("klara")
0x2d7: @ SendMessage(Stack[-2], Stack[-1])
0x2d8: Pop(2)
0x2d9: PushEmpty(string)
0x2da: Stack[-1] = "klara"
0x2db: Call2 0x390

0x2dc: Pop(1)
0x2dd: GOTO 0x2ec

0x2de: PushEmpty(string)
0x2df: Call2 0x38e

0x2e0: Pop(0)
0x2e1: Push("klara")
0x2e2: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x2e3: IF (Stack[-1] == 0) GOTO 0x2ec; Pop(1)

0x2e4: Push((int) 1)
0x2e5: Push("danko")
0x2e6: @ SendMessage(Stack[-2], Stack[-1])
0x2e7: Pop(2)
0x2e8: PushEmpty(string)
0x2e9: Stack[-1] = "danko"
0x2ea: Call2 0x390

0x2eb: Pop(1)
0x2ec: Return(); Pop(0)

0x2ed: PushEmpty()
0x2ee: Call2 0x2a1

0x2ef: Pop(0)
0x2f0: PushEmpty(string)
0x2f1: Call2 0x38e

0x2f2: Pop(0)
0x2f3: Push("")
0x2f4: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x2f5: IF (Stack[-1] == 0) GOTO 0x2ff; Pop(1)

0x2f6: Push((int) 1)
0x2f7: Push("klara")
0x2f8: @ SendMessage(Stack[-2], Stack[-1])
0x2f9: Pop(2)
0x2fa: PushEmpty(string)
0x2fb: Stack[-1] = "klara"
0x2fc: Call2 0x390

0x2fd: Pop(1)
0x2fe: GOTO 0x32b

0x2ff: PushEmpty(string)
0x300: Call2 0x38e

0x301: Pop(0)
0x302: Push("klara")
0x303: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x304: IF (Stack[-1] == 0) GOTO 0x30e; Pop(1)

0x305: Push((int) 1)
0x306: Push("burah")
0x307: @ SendMessage(Stack[-2], Stack[-1])
0x308: Pop(2)
0x309: PushEmpty(string)
0x30a: Stack[-1] = "burah"
0x30b: Call2 0x390

0x30c: Pop(1)
0x30d: GOTO 0x32b

0x30e: PushEmpty(string)
0x30f: Call2 0x38e

0x310: Pop(0)
0x311: Push("burah")
0x312: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x313: IF (Stack[-1] == 0) GOTO 0x31d; Pop(1)

0x314: Push((int) 1)
0x315: Push("danko")
0x316: @ SendMessage(Stack[-2], Stack[-1])
0x317: Pop(2)
0x318: PushEmpty(string)
0x319: Stack[-1] = "danko"
0x31a: Call2 0x390

0x31b: Pop(1)
0x31c: GOTO 0x32b

0x31d: PushEmpty(string)
0x31e: Call2 0x38e

0x31f: Pop(0)
0x320: Push("danko")
0x321: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x322: IF (Stack[-1] == 0) GOTO 0x32b; Pop(1)

0x323: Push((int) 1)
0x324: Push("klara")
0x325: @ SendMessage(Stack[-2], Stack[-1])
0x326: Pop(2)
0x327: PushEmpty(string)
0x328: Stack[-1] = "klara"
0x329: Call2 0x390

0x32a: Pop(1)
0x32b: Return(); Pop(0)

0x32c: PushEmpty()
0x32d: Call2 0x28c

0x32e: Pop(0)
0x32f: PushEmpty(string)
0x330: Call2 0x389

0x331: Pop(0)
0x332: Push("")
0x333: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x334: IF (Stack[-1] == 0) GOTO 0x33e; Pop(1)

0x335: Push((int) 1)
0x336: Push("newgame")
0x337: @ SendMessage(Stack[-2], Stack[-1])
0x338: Pop(2)
0x339: PushEmpty(string)
0x33a: Stack[-1] = "newgame"
0x33b: Call2 0x38b

0x33c: Pop(1)
0x33d: GOTO 0x388

0x33e: PushEmpty(string)
0x33f: Call2 0x389

0x340: Pop(0)
0x341: Push("newgame")
0x342: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x343: IF (Stack[-1] == 0) GOTO 0x34d; Pop(1)

0x344: Push((int) 1)
0x345: Push("loadgame")
0x346: @ SendMessage(Stack[-2], Stack[-1])
0x347: Pop(2)
0x348: PushEmpty(string)
0x349: Stack[-1] = "loadgame"
0x34a: Call2 0x38b

0x34b: Pop(1)
0x34c: GOTO 0x388

0x34d: PushEmpty(string)
0x34e: Call2 0x389

0x34f: Pop(0)
0x350: Push("loadgame")
0x351: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x352: IF (Stack[-1] == 0) GOTO 0x35c; Pop(1)

0x353: Push((int) 1)
0x354: Push("gameoptions")
0x355: @ SendMessage(Stack[-2], Stack[-1])
0x356: Pop(2)
0x357: PushEmpty(string)
0x358: Stack[-1] = "gameoptions"
0x359: Call2 0x38b

0x35a: Pop(1)
0x35b: GOTO 0x388

0x35c: PushEmpty(string)
0x35d: Call2 0x389

0x35e: Pop(0)
0x35f: Push("gameoptions")
0x360: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x361: IF (Stack[-1] == 0) GOTO 0x36b; Pop(1)

0x362: Push((int) 1)
0x363: Push("credits")
0x364: @ SendMessage(Stack[-2], Stack[-1])
0x365: Pop(2)
0x366: PushEmpty(string)
0x367: Stack[-1] = "credits"
0x368: Call2 0x38b

0x369: Pop(1)
0x36a: GOTO 0x388

0x36b: PushEmpty(string)
0x36c: Call2 0x389

0x36d: Pop(0)
0x36e: Push("credits")
0x36f: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x370: IF (Stack[-1] == 0) GOTO 0x37a; Pop(1)

0x371: Push((int) 1)
0x372: Push("quitgame")
0x373: @ SendMessage(Stack[-2], Stack[-1])
0x374: Pop(2)
0x375: PushEmpty(string)
0x376: Stack[-1] = "quitgame"
0x377: Call2 0x38b

0x378: Pop(1)
0x379: GOTO 0x388

0x37a: PushEmpty(string)
0x37b: Call2 0x389

0x37c: Pop(0)
0x37d: Push("quitgame")
0x37e: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x37f: IF (Stack[-1] == 0) GOTO 0x388; Pop(1)

0x380: Push((int) 1)
0x381: Push("newgame")
0x382: @ SendMessage(Stack[-2], Stack[-1])
0x383: Pop(2)
0x384: PushEmpty(string)
0x385: Stack[-1] = "newgame"
0x386: Call2 0x38b

0x387: Pop(1)
0x388: Return(); Pop(0)

0x389: Stack[-1] = Stack[11 + Tasks[-1].StackPointer]
0x38a: Return(); Pop(0)

0x38b: PushEmpty()
0x38c: Stack[11 + Tasks[-1].StackPointer] = Stack[-1]
0x38d: Return(); Pop(0)

0x38e: Stack[-1] = Stack[12 + Tasks[-1].StackPointer]
0x38f: Return(); Pop(0)

0x390: PushEmpty()
0x391: Stack[12 + Tasks[-1].StackPointer] = Stack[-1]
0x392: Return(); Pop(0)

0x393: PushEmpty()
0x394: Call2 0x28c

0x395: Pop(0)
0x396: PushEmpty(string)
0x397: Call2 0x389

0x398: Pop(0)
0x399: Push("")
0x39a: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x39b: IF (Stack[-1] == 0) GOTO 0x3a5; Pop(1)

0x39c: Push((int) 1)
0x39d: Push("quitgame")
0x39e: @ SendMessage(Stack[-2], Stack[-1])
0x39f: Pop(2)
0x3a0: PushEmpty(string)
0x3a1: Stack[-1] = "quitgame"
0x3a2: Call2 0x38b

0x3a3: Pop(1)
0x3a4: GOTO 0x3ef

0x3a5: PushEmpty(string)
0x3a6: Call2 0x389

0x3a7: Pop(0)
0x3a8: Push("newgame")
0x3a9: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x3aa: IF (Stack[-1] == 0) GOTO 0x3b4; Pop(1)

0x3ab: Push((int) 1)
0x3ac: Push("quitgame")
0x3ad: @ SendMessage(Stack[-2], Stack[-1])
0x3ae: Pop(2)
0x3af: PushEmpty(string)
0x3b0: Stack[-1] = "quitgame"
0x3b1: Call2 0x38b

0x3b2: Pop(1)
0x3b3: GOTO 0x3ef

0x3b4: PushEmpty(string)
0x3b5: Call2 0x389

0x3b6: Pop(0)
0x3b7: Push("loadgame")
0x3b8: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x3b9: IF (Stack[-1] == 0) GOTO 0x3c3; Pop(1)

0x3ba: Push((int) 1)
0x3bb: Push("newgame")
0x3bc: @ SendMessage(Stack[-2], Stack[-1])
0x3bd: Pop(2)
0x3be: PushEmpty(string)
0x3bf: Stack[-1] = "newgame"
0x3c0: Call2 0x38b

0x3c1: Pop(1)
0x3c2: GOTO 0x3ef

0x3c3: PushEmpty(string)
0x3c4: Call2 0x389

0x3c5: Pop(0)
0x3c6: Push("gameoptions")
0x3c7: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x3c8: IF (Stack[-1] == 0) GOTO 0x3d2; Pop(1)

0x3c9: Push((int) 1)
0x3ca: Push("loadgame")
0x3cb: @ SendMessage(Stack[-2], Stack[-1])
0x3cc: Pop(2)
0x3cd: PushEmpty(string)
0x3ce: Stack[-1] = "loadgame"
0x3cf: Call2 0x38b

0x3d0: Pop(1)
0x3d1: GOTO 0x3ef

0x3d2: PushEmpty(string)
0x3d3: Call2 0x389

0x3d4: Pop(0)
0x3d5: Push("credits")
0x3d6: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x3d7: IF (Stack[-1] == 0) GOTO 0x3e1; Pop(1)

0x3d8: Push((int) 1)
0x3d9: Push("gameoptions")
0x3da: @ SendMessage(Stack[-2], Stack[-1])
0x3db: Pop(2)
0x3dc: PushEmpty(string)
0x3dd: Stack[-1] = "gameoptions"
0x3de: Call2 0x38b

0x3df: Pop(1)
0x3e0: GOTO 0x3ef

0x3e1: PushEmpty(string)
0x3e2: Call2 0x389

0x3e3: Pop(0)
0x3e4: Push("quitgame")
0x3e5: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x3e6: IF (Stack[-1] == 0) GOTO 0x3ef; Pop(1)

0x3e7: Push((int) 1)
0x3e8: Push("credits")
0x3e9: @ SendMessage(Stack[-2], Stack[-1])
0x3ea: Pop(2)
0x3eb: PushEmpty(string)
0x3ec: Stack[-1] = "credits"
0x3ed: Call2 0x38b

0x3ee: Pop(1)
0x3ef: Return(); Pop(0)

0x3f0: PushEmpty()
0x3f1: Pop(0); Push((bool) Stack[14 + Tasks[-1].StackPointer] == 0)
0x3f2: IF (Stack[-1] == 0) GOTO 0x405; Pop(1)

0x3f3: Push((int) 272)
0x3f4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3f5: IF (Stack[-1] == 0) GOTO 0x3fc; Pop(1)

0x3f6: @ HideCursor()
0x3f7: Pop(0)
0x3f8: PushEmpty()
0x3f9: Call2 0x393

0x3fa: Pop(0)
0x3fb: GOTO 0x404

0x3fc: Push((int) 274)
0x3fd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3fe: IF (Stack[-1] == 0) GOTO 0x404; Pop(1)

0x3ff: @ HideCursor()
0x400: Pop(0)
0x401: PushEmpty()
0x402: Call2 0x32c

0x403: Pop(0)
0x404: GOTO 0x416

0x405: Push((int) 271)
0x406: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x407: IF (Stack[-1] == 0) GOTO 0x40e; Pop(1)

0x408: @ HideCursor()
0x409: Pop(0)
0x40a: PushEmpty()
0x40b: Call2 0x2ae

0x40c: Pop(0)
0x40d: GOTO 0x416

0x40e: Push((int) 273)
0x40f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x410: IF (Stack[-1] == 0) GOTO 0x416; Pop(1)

0x411: @ HideCursor()
0x412: Pop(0)
0x413: PushEmpty()
0x414: Call2 0x2ed

0x415: Pop(0)
0x416: Return(); Pop(0)

0x417: PushEmpty()
0x418: Pop(0); Push((bool) Stack[14 + Tasks[-1].StackPointer] == 0)
0x419: IF (Stack[-1] == 0) GOTO 0x43c; Pop(1)

0x41a: Push((int) 267)
0x41b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x41c: IF (Stack[-1] == 0) GOTO 0x423; Pop(1)

0x41d: @ HideCursor()
0x41e: Pop(0)
0x41f: PushEmpty()
0x420: Call2 0x393

0x421: Pop(0)
0x422: GOTO 0x43b

0x423: Push((int) 268)
0x424: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x425: IF (Stack[-1] == 0) GOTO 0x42c; Pop(1)

0x426: @ HideCursor()
0x427: Pop(0)
0x428: PushEmpty()
0x429: Call2 0x32c

0x42a: Pop(0)
0x42b: GOTO 0x43b

0x42c: Push((int) 256)
0x42d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x42e: IF (Stack[-1] == 0) GOTO 0x43b; Pop(1)

0x42f: PushEmpty(string)
0x430: Call2 0x389

0x431: Pop(0)
0x432: Push("")
0x433: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x434: IF (Stack[-1] == 0) GOTO 0x43b; Pop(1)

0x435: Push((int) 2)
0x436: PushEmpty(string)
0x437: Call2 0x389

0x438: Pop(0)
0x439: @ SendMessage(Stack[-2], Stack[-1])
0x43a: Pop(2)
0x43b: GOTO 0x45d

0x43c: Push((int) 270)
0x43d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x43e: IF (Stack[-1] == 0) GOTO 0x445; Pop(1)

0x43f: @ HideCursor()
0x440: Pop(0)
0x441: PushEmpty()
0x442: Call2 0x2ae

0x443: Pop(0)
0x444: GOTO 0x45d

0x445: Push((int) 269)
0x446: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x447: IF (Stack[-1] == 0) GOTO 0x44e; Pop(1)

0x448: @ HideCursor()
0x449: Pop(0)
0x44a: PushEmpty()
0x44b: Call2 0x2ed

0x44c: Pop(0)
0x44d: GOTO 0x45d

0x44e: Push((int) 256)
0x44f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x450: IF (Stack[-1] == 0) GOTO 0x45d; Pop(1)

0x451: PushEmpty(string)
0x452: Call2 0x38e

0x453: Pop(0)
0x454: Push("")
0x455: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x456: IF (Stack[-1] == 0) GOTO 0x45d; Pop(1)

0x457: Push((int) 2)
0x458: PushEmpty(string)
0x459: Call2 0x38e

0x45a: Pop(0)
0x45b: @ SendMessage(Stack[-2], Stack[-1])
0x45c: Pop(2)
0x45d: Return(); Pop(0)

0x45e: PushEmpty(int, int)
0x45f: Push("BurahCompleted")
0x460: Push((int) 0)
0x461: @ GetRegistryData(Stack[-3], Stack[-2], Stack[-1])
0x462: Pop(2)
0x463: Push((int) 0)
0x464: Stack[-4] = Stack[-2] != Stack[-1]; Pop(1);
0x465: Return(); Pop(2)

0x466: PushEmpty(int, int)
0x467: Push("DankoCompleted")
0x468: Push((int) 0)
0x469: @ GetRegistryData(Stack[-3], Stack[-2], Stack[-1])
0x46a: Pop(2)
0x46b: Push((int) 0)
0x46c: Stack[-4] = Stack[-2] != Stack[-1]; Pop(1);
0x46d: Return(); Pop(2)

