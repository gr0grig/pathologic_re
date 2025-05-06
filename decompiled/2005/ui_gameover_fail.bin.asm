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
	death_fail.wmv
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
0x5c: Stack[-2] = "death_fail.wmv"
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
0x68: Push("game_buttons.xml")
0x69: Push((bool) 0)
0x6a: @ CreateWindow(Stack[-2], Stack[-1], Stack[-3])
0x6b: Pop(2)
0x6c: Stack[-3] = Stack[-1]
0x6d: Return(); Pop(2)

0x6e: Stack[-1] = 0
0x6f: PushEmpty(object, object)
0x70: Push("game_logo.xml")
0x71: Push((bool) 0)
0x72: @ CreateWindow(Stack[-2], Stack[-1], Stack[-3])
0x73: Pop(2)
0x74: Stack[-3] = Stack[-1]
0x75: Return(); Pop(2)

0x76: Stack[-1] = 0
0x77: PushEmpty(bool, bool, bool, string, bool, bool, bool, string)
0x78: @ CaptureKeyboard()
0x79: Pop(0)
0x7a: Stack[2 + Tasks[-1].StackPointer] = (int)0
0x7b: @ GetWindowSize(Stack[-0], Stack[-1])
0x7c: Pop(0)
0x7d: Push("default")
0x7e: @ SetCursor(Stack[-1])
0x7f: Pop(1)
0x80: Push("default")
0x81: @ SetBackground(Stack[-1])
0x82: Pop(1)
0x83: Push("menumusic")
0x84: @ PlaySound(Stack[-1])
0x85: Pop(1)
0x86: Push((bool) 1)
0x87: @ ShowCursor(Stack[-1])
0x88: Pop(1)
0x89: Push(Stack[-9])
0x8a: IF (Stack[-1] == 0) GOTO 0x90; Pop(1)

0x8b: Push("game_choose_pers.xml")
0x8c: Push((bool) 0)
0x8d: @ CreateWindow(Stack[-2], Stack[-1], Stack[-5])
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
0x9e: Call2 0x242

0x9f: Pop(0)
0xa0: Push((int) 1)
0xa1: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] == Stack[-1])
0xa2: IF (Stack[-1] == 0) GOTO 0xbe; Pop(1)

0xa3: Push("menumusic")
0xa4: @ PauseSound(Stack[-1])
0xa5: Pop(1)
0xa6: PushEmpty(int)
0xa7: Stack[-1] = (int) 1
0xa8: Push(-1, 1); TaskCall(1)
0xa9: Call2 0x41

0xaa: Pop(-1, 1); TaskReturn
0xab: Pop(1)
0xac: PushEmpty(string, bool)
0xad: Stack[-2] = "intro_danko.wmv"
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
0xb9: Push("world_danko.xml")
0xba: Push("player_danko.xml")
0xbb: @ NewGame(Stack[-2], Stack[-1])
0xbc: Pop(2)
0xbd: GOTO 0x12b

0xbe: Push((int) 2)
0xbf: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] == Stack[-1])
0xc0: IF (Stack[-1] == 0) GOTO 0xdc; Pop(1)

0xc1: Push("menumusic")
0xc2: @ PauseSound(Stack[-1])
0xc3: Pop(1)
0xc4: PushEmpty(int)
0xc5: Stack[-1] = (int) 2
0xc6: Push(-1, 1); TaskCall(1)
0xc7: Call2 0x41

0xc8: Pop(-1, 1); TaskReturn
0xc9: Pop(1)
0xca: PushEmpty(string, bool)
0xcb: Stack[-2] = "intro_burah.wmv"
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
0xd7: Push("world_burah.xml")
0xd8: Push("player_burah.xml")
0xd9: @ NewGame(Stack[-2], Stack[-1])
0xda: Pop(2)
0xdb: GOTO 0x12b

0xdc: Push((int) 3)
0xdd: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] == Stack[-1])
0xde: IF (Stack[-1] == 0) GOTO 0xfa; Pop(1)

0xdf: Push("menumusic")
0xe0: @ PauseSound(Stack[-1])
0xe1: Pop(1)
0xe2: PushEmpty(int)
0xe3: Stack[-1] = (int) 3
0xe4: Push(-1, 1); TaskCall(1)
0xe5: Call2 0x41

0xe6: Pop(-1, 1); TaskReturn
0xe7: Pop(1)
0xe8: PushEmpty(string, bool)
0xe9: Stack[-2] = "intro_klara.wmv"
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
0xf5: Push("world_klara.xml")
0xf6: Push("player_klara.xml")
0xf7: @ NewGame(Stack[-2], Stack[-1])
0xf8: Pop(2)
0xf9: GOTO 0x12b

0xfa: Push((int) 4)
0xfb: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] == Stack[-1])
0xfc: IF (Stack[-1] == 0) GOTO 0x10d; Pop(1)

0xfd: Push("menumusic")
0xfe: @ PauseSound(Stack[-1])
0xff: Pop(1)
0x100: Push("Loading : ")
0x101: Pop(1); Push(Stack[-1] + Stack[10 + StackPtr]);
0x102: @ Trace(Stack[-1])
0x103: Pop(1)
0x104: @ RemoveWorld()
0x105: Pop(0)
0x106: @ UISync()
0x107: Pop(0)
0x108: @ DestroyWindow()
0x109: Pop(0)
0x10a: @ LoadGame(Stack[-4], Stack[-10])
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
0x119: @@ GetFileName(Stack[-1])
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
0x127: Push("world_intro.xml")
0x128: Push("player_intro.xml")
0x129: @ NewGame(Stack[-2], Stack[-1])
0x12a: Pop(2)
0x12b: Return(); Pop(8)

0x12c: PushEmpty()
0x12d: Push((int) 27)
0x12e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x12f: IF (Stack[-1] == 0) GOTO 0x133; Pop(1)

0x130: PushEmpty()
0x131: Call2 0x236

0x132: Pop(0)
0x133: Return(); Pop(0)

0x134: PushEmpty(bool, bool)
0x135: Push("newgame")
0x136: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x137: IF (Stack[-1] == 0) GOTO 0x13c; Pop(1)

0x138: Stack[2 + Tasks[-1].StackPointer] = (int)7
0x139: @ StopEventProcessing()
0x13a: Pop(0)
0x13b: GOTO 0x235

0x13c: Push("quitgame")
0x13d: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x13e: IF (Stack[-1] == 0) GOTO 0x146; Pop(1)

0x13f: Push("Quit game")
0x140: @ UITrace(Stack[-1])
0x141: Pop(1)
0x142: @ Quit()
0x143: Pop(0)
0x144: Return(); Pop(2)

0x145: GOTO 0x235

0x146: Push("loadgame")
0x147: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x148: IF (Stack[-1] == 0) GOTO 0x152; Pop(1)

0x149: PushEmpty()
0x14a: Call2 0x242

0x14b: Pop(0)
0x14c: Push("load.xml")
0x14d: Push((bool) 0)
0x14e: @ CreateWindow(Stack[-2], Stack[-1], Stack[-6])
0x14f: Pop(2)
0x150: Return(); Pop(2)

0x151: GOTO 0x235

0x152: Push("savegame")
0x153: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x154: IF (Stack[-1] == 0) GOTO 0x15e; Pop(1)

0x155: PushEmpty()
0x156: Call2 0x242

0x157: Pop(0)
0x158: Push("save.xml")
0x159: Push((bool) 0)
0x15a: @ CreateWindow(Stack[-2], Stack[-1], Stack[-7])
0x15b: Pop(2)
0x15c: Return(); Pop(2)

0x15d: GOTO 0x235

0x15e: Push("gameoptions")
0x15f: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x160: IF (Stack[-1] == 0) GOTO 0x16a; Pop(1)

0x161: PushEmpty()
0x162: Call2 0x242

0x163: Pop(0)
0x164: Push("options.xml")
0x165: Push((bool) 0)
0x166: @ CreateWindow(Stack[-2], Stack[-1], Stack[-8])
0x167: Pop(2)
0x168: Return(); Pop(2)

0x169: GOTO 0x235

0x16a: Push("continue")
0x16b: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x16c: IF (Stack[-1] == 0) GOTO 0x172; Pop(1)

0x16d: Stack[2 + Tasks[-1].StackPointer] = (int)6
0x16e: @ StopEventProcessing()
0x16f: Pop(0)
0x170: Return(); Pop(2)

0x171: GOTO 0x235

0x172: Push("credits")
0x173: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x174: IF (Stack[-1] == 0) GOTO 0x18a; Pop(1)

0x175: PushEmpty()
0x176: Call2 0x242

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
0x189: GOTO 0x235

0x18a: Push("danko")
0x18b: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x18c: IF (Stack[-1] == 0) GOTO 0x1ad; Pop(1)

0x18d: Push((int) 0)
0x18e: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x18f: IF (Stack[-1] == 0) GOTO 0x194; Pop(1)

0x190: Stack[2 + Tasks[-1].StackPointer] = (int)1
0x191: @ StopEventProcessing()
0x192: Pop(0)
0x193: GOTO 0x1ab

0x194: Push((int) 1)
0x195: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x196: IF (Stack[-1] == 0) GOTO 0x1a0; Pop(1)

0x197: Push((int) 202)
0x198: Push("player_name")
0x199: @ SendMessage(Stack[-2], Stack[-1])
0x19a: Pop(2)
0x19b: Push((int) 203)
0x19c: Push("player_desc")
0x19d: @ SendMessage(Stack[-2], Stack[-1])
0x19e: Pop(2)
0x19f: GOTO 0x1ab

0x1a0: Push((int) 2)
0x1a1: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x1a2: IF (Stack[-1] == 0) GOTO 0x1ab; Pop(1)

0x1a3: Push((int) -1)
0x1a4: Push("player_name")
0x1a5: @ SendMessage(Stack[-2], Stack[-1])
0x1a6: Pop(2)
0x1a7: Push((int) -1)
0x1a8: Push("player_desc")
0x1a9: @ SendMessage(Stack[-2], Stack[-1])
0x1aa: Pop(2)
0x1ab: Return(); Pop(2)

0x1ac: GOTO 0x235

0x1ad: Push("burah")
0x1ae: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x1af: IF (Stack[-1] == 0) GOTO 0x1d0; Pop(1)

0x1b0: Push((int) 0)
0x1b1: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x1b2: IF (Stack[-1] == 0) GOTO 0x1b7; Pop(1)

0x1b3: Stack[2 + Tasks[-1].StackPointer] = (int)2
0x1b4: @ StopEventProcessing()
0x1b5: Pop(0)
0x1b6: GOTO 0x1ce

0x1b7: Push((int) 1)
0x1b8: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x1b9: IF (Stack[-1] == 0) GOTO 0x1c3; Pop(1)

0x1ba: Push((int) 205)
0x1bb: Push("player_name")
0x1bc: @ SendMessage(Stack[-2], Stack[-1])
0x1bd: Pop(2)
0x1be: Push((int) 206)
0x1bf: Push("player_desc")
0x1c0: @ SendMessage(Stack[-2], Stack[-1])
0x1c1: Pop(2)
0x1c2: GOTO 0x1ce

0x1c3: Push((int) 2)
0x1c4: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x1c5: IF (Stack[-1] == 0) GOTO 0x1ce; Pop(1)

0x1c6: Push((int) -1)
0x1c7: Push("player_name")
0x1c8: @ SendMessage(Stack[-2], Stack[-1])
0x1c9: Pop(2)
0x1ca: Push((int) -1)
0x1cb: Push("player_desc")
0x1cc: @ SendMessage(Stack[-2], Stack[-1])
0x1cd: Pop(2)
0x1ce: Return(); Pop(2)

0x1cf: GOTO 0x235

0x1d0: Push("klara")
0x1d1: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x1d2: IF (Stack[-1] == 0) GOTO 0x20d; Pop(1)

0x1d3: Stack[-1] = (bool) 1
0x1d4: PushEmpty(bool)
0x1d5: Stack[-1] = (bool) 0
0x1d6: PushEmpty(bool)
0x1d7: Call2 0x265

0x1d8: Pop(0)
0x1d9: Pop(1); Push((bool) Stack[-1] == 0)
0x1da: IF (Stack[-1] == 0) GOTO 0x1e1; Pop(1)

0x1db: PushEmpty(bool)
0x1dc: Call2 0x25d

0x1dd: Pop(0)
0x1de: Pop(1); Push((bool) Stack[-1] == 0)
0x1df: IF (Stack[-1] == 0) GOTO 0x1e1; Pop(1)

0x1e0: Stack[-1] = (bool) 1
0x1e1: IF (Stack[-1] == 0) GOTO 0x1e3; Pop(1)

0x1e2: Stack[-1] = (bool) 0
0x1e3: Push((int) 0)
0x1e4: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x1e5: IF (Stack[-1] == 0) GOTO 0x1ed; Pop(1)

0x1e6: Pop(0); Push((bool) Stack[-1] == 0)
0x1e7: IF (Stack[-1] == 0) GOTO 0x1e9; Pop(1)

0x1e8: Return(); Pop(2)

0x1e9: Stack[2 + Tasks[-1].StackPointer] = (int)3
0x1ea: @ StopEventProcessing()
0x1eb: Pop(0)
0x1ec: GOTO 0x20b

0x1ed: Push((int) 1)
0x1ee: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x1ef: IF (Stack[-1] == 0) GOTO 0x200; Pop(1)

0x1f0: Push((int) 208)
0x1f1: Push("player_name")
0x1f2: @ SendMessage(Stack[-2], Stack[-1])
0x1f3: Pop(2)
0x1f4: Push(Stack[-1])
0x1f5: IF (Stack[-1] == 0) GOTO 0x1fb; Pop(1)

0x1f6: Push((int) 209)
0x1f7: Push("player_desc")
0x1f8: @ SendMessage(Stack[-2], Stack[-1])
0x1f9: Pop(2)
0x1fa: GOTO 0x1ff

0x1fb: Push((int) 213)
0x1fc: Push("player_desc")
0x1fd: @ SendMessage(Stack[-2], Stack[-1])
0x1fe: Pop(2)
0x1ff: GOTO 0x20b

0x200: Push((int) 2)
0x201: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x202: IF (Stack[-1] == 0) GOTO 0x20b; Pop(1)

0x203: Push((int) -1)
0x204: Push("player_name")
0x205: @ SendMessage(Stack[-2], Stack[-1])
0x206: Pop(2)
0x207: Push((int) -1)
0x208: Push("player_desc")
0x209: @ SendMessage(Stack[-2], Stack[-1])
0x20a: Pop(2)
0x20b: Return(); Pop(2)

0x20c: GOTO 0x235

0x20d: Push("load")
0x20e: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x20f: IF (Stack[-1] == 0) GOTO 0x21e; Pop(1)

0x210: Push((int) 0)
0x211: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x212: IF (Stack[-1] == 0) GOTO 0x219; Pop(1)

0x213: Stack[2 + Tasks[-1].StackPointer] = (int)4
0x214: @@ GetFileName(Stack[-10])
0x215: Pop(0)
0x216: @ StopEventProcessing()
0x217: Pop(0)
0x218: GOTO 0x21c

0x219: PushEmpty()
0x21a: Call2 0x236

0x21b: Pop(0)
0x21c: Return(); Pop(2)

0x21d: GOTO 0x235

0x21e: Push("save")
0x21f: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x220: IF (Stack[-1] == 0) GOTO 0x22e; Pop(1)

0x221: Push((int) 0)
0x222: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x223: IF (Stack[-1] == 0) GOTO 0x229; Pop(1)

0x224: Stack[2 + Tasks[-1].StackPointer] = (int)5
0x225: Stack[9 + Tasks[-1].StackPointer] = Stack[-3]
0x226: @ StopEventProcessing()
0x227: Pop(0)
0x228: GOTO 0x22c

0x229: PushEmpty()
0x22a: Call2 0x236

0x22b: Pop(0)
0x22c: Return(); Pop(2)

0x22d: GOTO 0x235

0x22e: Push("options")
0x22f: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x230: IF (Stack[-1] == 0) GOTO 0x235; Pop(1)

0x231: PushEmpty()
0x232: Call2 0x236

0x233: Pop(0)
0x234: Return(); Pop(2)

0x235: Return(); Pop(2)

0x236: PushEmpty()
0x237: Call2 0x242

0x238: Pop(0)
0x239: PushEmpty(object)
0x23a: Call2 0x67

0x23b: Stack[3 + Tasks[-1].StackPointer] = Stack[-1]
0x23c: Pop(1)
0x23d: PushEmpty(object)
0x23e: Call2 0x6f

0x23f: Stack[4 + Tasks[-1].StackPointer] = Stack[-1]
0x240: Pop(1)
0x241: Return(); Pop(0)

0x242: Push( Stack[3 + Tasks[-1].StackPointer] )
0x243: IF (Stack[-1] == 0) GOTO 0x246; Pop(1)

0x244: @@ DestroyWindow()
0x245: Pop(0)
0x246: Push( Stack[4 + Tasks[-1].StackPointer] )
0x247: IF (Stack[-1] == 0) GOTO 0x24a; Pop(1)

0x248: @@ DestroyWindow()
0x249: Pop(0)
0x24a: Push( Stack[5 + Tasks[-1].StackPointer] )
0x24b: IF (Stack[-1] == 0) GOTO 0x24e; Pop(1)

0x24c: @@ DestroyWindow()
0x24d: Pop(0)
0x24e: Push( Stack[6 + Tasks[-1].StackPointer] )
0x24f: IF (Stack[-1] == 0) GOTO 0x252; Pop(1)

0x250: @@ DestroyWindow()
0x251: Pop(0)
0x252: Push( Stack[7 + Tasks[-1].StackPointer] )
0x253: IF (Stack[-1] == 0) GOTO 0x256; Pop(1)

0x254: @@ DestroyWindow()
0x255: Pop(0)
0x256: Push( Stack[8 + Tasks[-1].StackPointer] )
0x257: IF (Stack[-1] == 0) GOTO 0x25a; Pop(1)

0x258: @@ DestroyWindow()
0x259: Pop(0)
0x25a: @ CaptureKeyboard()
0x25b: Pop(0)
0x25c: Return(); Pop(0)

0x25d: PushEmpty(int, int)
0x25e: Push("BurahCompleted")
0x25f: Push((int) 0)
0x260: @ GetRegistryData(Stack[-3], Stack[-2], Stack[-1])
0x261: Pop(2)
0x262: Push((int) 0)
0x263: Stack[-4] = Stack[-2] != Stack[-1]; Pop(1);
0x264: Return(); Pop(2)

0x265: PushEmpty(int, int)
0x266: Push("DankoCompleted")
0x267: Push((int) 0)
0x268: @ GetRegistryData(Stack[-3], Stack[-2], Stack[-1])
0x269: Pop(2)
0x26a: Push((int) 0)
0x26b: Stack[-4] = Stack[-2] != Stack[-1]; Pop(1);
0x26c: Return(); Pop(2)

