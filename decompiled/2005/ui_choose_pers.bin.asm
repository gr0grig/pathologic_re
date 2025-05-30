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
		EVENT_100 Op = 0x11f Vars = (int)
		EVENT_200 Op = 0x127 Vars = (int, string, object)


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
0x56: Stack[-1] = (bool) 1
0x57: Call2 0x6a

0x58: Pop(1)
0x59: Return(); Pop(0)

0x5a: PushEmpty(object, object)
0x5b: Push("game_buttons.xml")
0x5c: Push((bool) 0)
0x5d: @ CreateWindow(Stack[-2], Stack[-1], Stack[-3])
0x5e: Pop(2)
0x5f: Stack[-3] = Stack[-1]
0x60: Return(); Pop(2)

0x61: Stack[-1] = 0
0x62: PushEmpty(object, object)
0x63: Push("game_logo.xml")
0x64: Push((bool) 0)
0x65: @ CreateWindow(Stack[-2], Stack[-1], Stack[-3])
0x66: Pop(2)
0x67: Stack[-3] = Stack[-1]
0x68: Return(); Pop(2)

0x69: Stack[-1] = 0
0x6a: PushEmpty(bool, bool, bool, string, bool, bool, bool, string)
0x6b: @ CaptureKeyboard()
0x6c: Pop(0)
0x6d: Stack[2 + Tasks[-1].StackPointer] = (int)0
0x6e: @ GetWindowSize(Stack[-0], Stack[-1])
0x6f: Pop(0)
0x70: Push("default")
0x71: @ SetCursor(Stack[-1])
0x72: Pop(1)
0x73: Push("default")
0x74: @ SetBackground(Stack[-1])
0x75: Pop(1)
0x76: Push("menumusic")
0x77: @ PlaySound(Stack[-1])
0x78: Pop(1)
0x79: Push((bool) 1)
0x7a: @ ShowCursor(Stack[-1])
0x7b: Pop(1)
0x7c: Push(Stack[-9])
0x7d: IF (Stack[-1] == 0) GOTO 0x83; Pop(1)

0x7e: Push("game_choose_pers.xml")
0x7f: Push((bool) 0)
0x80: @ CreateWindow(Stack[-2], Stack[-1], Stack[-5])
0x81: Pop(2)
0x82: GOTO 0x8b

0x83: PushEmpty(object)
0x84: Call2 0x5a

0x85: Stack[3 + Tasks[-1].StackPointer] = Stack[-1]
0x86: Pop(1)
0x87: PushEmpty(object)
0x88: Call2 0x62

0x89: Stack[4 + Tasks[-1].StackPointer] = Stack[-1]
0x8a: Pop(1)
0x8b: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x8c: IF (Stack[-1] == 0) GOTO 0x90; Pop(1)

0x8d: @ ProcessEvents()
0x8e: Pop(0)
0x8f: GOTO 0x8b

0x90: PushEmpty()
0x91: Call2 0x235

0x92: Pop(0)
0x93: Push((int) 1)
0x94: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] == Stack[-1])
0x95: IF (Stack[-1] == 0) GOTO 0xb1; Pop(1)

0x96: Push("menumusic")
0x97: @ PauseSound(Stack[-1])
0x98: Pop(1)
0x99: PushEmpty(int)
0x9a: Stack[-1] = (int) 1
0x9b: Push(-1, 1); TaskCall(1)
0x9c: Call2 0x41

0x9d: Pop(-1, 1); TaskReturn
0x9e: Pop(1)
0x9f: PushEmpty(string, bool)
0xa0: Stack[-2] = "intro_danko.wmv"
0xa1: Stack[-1] = (bool) 1
0xa2: Push(-2, 4); TaskCall(0)
0xa3: Call2 0x0

0xa4: Pop(-2, 4); TaskReturn
0xa5: Pop(2)
0xa6: @ RemoveWorld()
0xa7: Pop(0)
0xa8: @ UISync()
0xa9: Pop(0)
0xaa: @ DestroyWindow()
0xab: Pop(0)
0xac: Push("world_danko.xml")
0xad: Push("player_danko.xml")
0xae: @ NewGame(Stack[-2], Stack[-1])
0xaf: Pop(2)
0xb0: GOTO 0x11e

0xb1: Push((int) 2)
0xb2: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] == Stack[-1])
0xb3: IF (Stack[-1] == 0) GOTO 0xcf; Pop(1)

0xb4: Push("menumusic")
0xb5: @ PauseSound(Stack[-1])
0xb6: Pop(1)
0xb7: PushEmpty(int)
0xb8: Stack[-1] = (int) 2
0xb9: Push(-1, 1); TaskCall(1)
0xba: Call2 0x41

0xbb: Pop(-1, 1); TaskReturn
0xbc: Pop(1)
0xbd: PushEmpty(string, bool)
0xbe: Stack[-2] = "intro_burah.wmv"
0xbf: Stack[-1] = (bool) 1
0xc0: Push(-2, 4); TaskCall(0)
0xc1: Call2 0x0

0xc2: Pop(-2, 4); TaskReturn
0xc3: Pop(2)
0xc4: @ RemoveWorld()
0xc5: Pop(0)
0xc6: @ UISync()
0xc7: Pop(0)
0xc8: @ DestroyWindow()
0xc9: Pop(0)
0xca: Push("world_burah.xml")
0xcb: Push("player_burah.xml")
0xcc: @ NewGame(Stack[-2], Stack[-1])
0xcd: Pop(2)
0xce: GOTO 0x11e

0xcf: Push((int) 3)
0xd0: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] == Stack[-1])
0xd1: IF (Stack[-1] == 0) GOTO 0xed; Pop(1)

0xd2: Push("menumusic")
0xd3: @ PauseSound(Stack[-1])
0xd4: Pop(1)
0xd5: PushEmpty(int)
0xd6: Stack[-1] = (int) 3
0xd7: Push(-1, 1); TaskCall(1)
0xd8: Call2 0x41

0xd9: Pop(-1, 1); TaskReturn
0xda: Pop(1)
0xdb: PushEmpty(string, bool)
0xdc: Stack[-2] = "intro_klara.wmv"
0xdd: Stack[-1] = (bool) 1
0xde: Push(-2, 4); TaskCall(0)
0xdf: Call2 0x0

0xe0: Pop(-2, 4); TaskReturn
0xe1: Pop(2)
0xe2: @ RemoveWorld()
0xe3: Pop(0)
0xe4: @ UISync()
0xe5: Pop(0)
0xe6: @ DestroyWindow()
0xe7: Pop(0)
0xe8: Push("world_klara.xml")
0xe9: Push("player_klara.xml")
0xea: @ NewGame(Stack[-2], Stack[-1])
0xeb: Pop(2)
0xec: GOTO 0x11e

0xed: Push((int) 4)
0xee: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] == Stack[-1])
0xef: IF (Stack[-1] == 0) GOTO 0x100; Pop(1)

0xf0: Push("menumusic")
0xf1: @ PauseSound(Stack[-1])
0xf2: Pop(1)
0xf3: Push("Loading : ")
0xf4: Pop(1); Push(Stack[-1] + Stack[10 + StackPtr]);
0xf5: @ Trace(Stack[-1])
0xf6: Pop(1)
0xf7: @ RemoveWorld()
0xf8: Pop(0)
0xf9: @ UISync()
0xfa: Pop(0)
0xfb: @ DestroyWindow()
0xfc: Pop(0)
0xfd: @ LoadGame(Stack[-4], Stack[-10])
0xfe: Pop(0)
0xff: GOTO 0x11e

0x100: Push((int) 5)
0x101: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] == Stack[-1])
0x102: IF (Stack[-1] == 0) GOTO 0x111; Pop(1)

0x103: Pop(0); Push((bool) Stack[9 + Tasks[-1].StackPointer] == 0)
0x104: IF (Stack[-1] == 0) GOTO 0x10a; Pop(1)

0x105: @ DestroyWindow()
0x106: Pop(0)
0x107: @ SaveGame(Stack[-3])
0x108: Pop(0)
0x109: GOTO 0x110

0x10a: @ DestroyWindow()
0x10b: Pop(0)
0x10c: @@ GetFileName(Stack[-1])
0x10d: Pop(0)
0x10e: @ SaveGame(Stack[-2], Stack[-1])
0x10f: Pop(0)
0x110: GOTO 0x11e

0x111: Push((int) 7)
0x112: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] == Stack[-1])
0x113: IF (Stack[-1] == 0) GOTO 0x11e; Pop(1)

0x114: @ RemoveWorld()
0x115: Pop(0)
0x116: @ UISync()
0x117: Pop(0)
0x118: @ DestroyWindow()
0x119: Pop(0)
0x11a: Push("world_intro.xml")
0x11b: Push("player_intro.xml")
0x11c: @ NewGame(Stack[-2], Stack[-1])
0x11d: Pop(2)
0x11e: Return(); Pop(8)

0x11f: PushEmpty()
0x120: Push((int) 27)
0x121: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x122: IF (Stack[-1] == 0) GOTO 0x126; Pop(1)

0x123: PushEmpty()
0x124: Call2 0x229

0x125: Pop(0)
0x126: Return(); Pop(0)

0x127: PushEmpty(bool, bool)
0x128: Push("newgame")
0x129: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x12a: IF (Stack[-1] == 0) GOTO 0x12f; Pop(1)

0x12b: Stack[2 + Tasks[-1].StackPointer] = (int)7
0x12c: @ StopEventProcessing()
0x12d: Pop(0)
0x12e: GOTO 0x228

0x12f: Push("quitgame")
0x130: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x131: IF (Stack[-1] == 0) GOTO 0x139; Pop(1)

0x132: Push("Quit game")
0x133: @ UITrace(Stack[-1])
0x134: Pop(1)
0x135: @ Quit()
0x136: Pop(0)
0x137: Return(); Pop(2)

0x138: GOTO 0x228

0x139: Push("loadgame")
0x13a: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x13b: IF (Stack[-1] == 0) GOTO 0x145; Pop(1)

0x13c: PushEmpty()
0x13d: Call2 0x235

0x13e: Pop(0)
0x13f: Push("load.xml")
0x140: Push((bool) 0)
0x141: @ CreateWindow(Stack[-2], Stack[-1], Stack[-6])
0x142: Pop(2)
0x143: Return(); Pop(2)

0x144: GOTO 0x228

0x145: Push("savegame")
0x146: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x147: IF (Stack[-1] == 0) GOTO 0x151; Pop(1)

0x148: PushEmpty()
0x149: Call2 0x235

0x14a: Pop(0)
0x14b: Push("save.xml")
0x14c: Push((bool) 0)
0x14d: @ CreateWindow(Stack[-2], Stack[-1], Stack[-7])
0x14e: Pop(2)
0x14f: Return(); Pop(2)

0x150: GOTO 0x228

0x151: Push("gameoptions")
0x152: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x153: IF (Stack[-1] == 0) GOTO 0x15d; Pop(1)

0x154: PushEmpty()
0x155: Call2 0x235

0x156: Pop(0)
0x157: Push("options.xml")
0x158: Push((bool) 0)
0x159: @ CreateWindow(Stack[-2], Stack[-1], Stack[-8])
0x15a: Pop(2)
0x15b: Return(); Pop(2)

0x15c: GOTO 0x228

0x15d: Push("continue")
0x15e: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x15f: IF (Stack[-1] == 0) GOTO 0x165; Pop(1)

0x160: Stack[2 + Tasks[-1].StackPointer] = (int)6
0x161: @ StopEventProcessing()
0x162: Pop(0)
0x163: Return(); Pop(2)

0x164: GOTO 0x228

0x165: Push("credits")
0x166: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x167: IF (Stack[-1] == 0) GOTO 0x17d; Pop(1)

0x168: PushEmpty()
0x169: Call2 0x235

0x16a: Pop(0)
0x16b: PushEmpty(int)
0x16c: Stack[-1] = (int) 8
0x16d: Push(-1, 1); TaskCall(1)
0x16e: Call2 0x41

0x16f: Pop(-1, 1); TaskReturn
0x170: Pop(1)
0x171: PushEmpty(object)
0x172: Call2 0x5a

0x173: Stack[3 + Tasks[-1].StackPointer] = Stack[-1]
0x174: Pop(1)
0x175: PushEmpty(object)
0x176: Call2 0x62

0x177: Stack[4 + Tasks[-1].StackPointer] = Stack[-1]
0x178: Pop(1)
0x179: Push((bool) 1)
0x17a: @ ShowCursor(Stack[-1])
0x17b: Pop(1)
0x17c: GOTO 0x228

0x17d: Push("danko")
0x17e: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x17f: IF (Stack[-1] == 0) GOTO 0x1a0; Pop(1)

0x180: Push((int) 0)
0x181: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x182: IF (Stack[-1] == 0) GOTO 0x187; Pop(1)

0x183: Stack[2 + Tasks[-1].StackPointer] = (int)1
0x184: @ StopEventProcessing()
0x185: Pop(0)
0x186: GOTO 0x19e

0x187: Push((int) 1)
0x188: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x189: IF (Stack[-1] == 0) GOTO 0x193; Pop(1)

0x18a: Push((int) 202)
0x18b: Push("player_name")
0x18c: @ SendMessage(Stack[-2], Stack[-1])
0x18d: Pop(2)
0x18e: Push((int) 203)
0x18f: Push("player_desc")
0x190: @ SendMessage(Stack[-2], Stack[-1])
0x191: Pop(2)
0x192: GOTO 0x19e

0x193: Push((int) 2)
0x194: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x195: IF (Stack[-1] == 0) GOTO 0x19e; Pop(1)

0x196: Push((int) -1)
0x197: Push("player_name")
0x198: @ SendMessage(Stack[-2], Stack[-1])
0x199: Pop(2)
0x19a: Push((int) -1)
0x19b: Push("player_desc")
0x19c: @ SendMessage(Stack[-2], Stack[-1])
0x19d: Pop(2)
0x19e: Return(); Pop(2)

0x19f: GOTO 0x228

0x1a0: Push("burah")
0x1a1: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x1a2: IF (Stack[-1] == 0) GOTO 0x1c3; Pop(1)

0x1a3: Push((int) 0)
0x1a4: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x1a5: IF (Stack[-1] == 0) GOTO 0x1aa; Pop(1)

0x1a6: Stack[2 + Tasks[-1].StackPointer] = (int)2
0x1a7: @ StopEventProcessing()
0x1a8: Pop(0)
0x1a9: GOTO 0x1c1

0x1aa: Push((int) 1)
0x1ab: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x1ac: IF (Stack[-1] == 0) GOTO 0x1b6; Pop(1)

0x1ad: Push((int) 205)
0x1ae: Push("player_name")
0x1af: @ SendMessage(Stack[-2], Stack[-1])
0x1b0: Pop(2)
0x1b1: Push((int) 206)
0x1b2: Push("player_desc")
0x1b3: @ SendMessage(Stack[-2], Stack[-1])
0x1b4: Pop(2)
0x1b5: GOTO 0x1c1

0x1b6: Push((int) 2)
0x1b7: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x1b8: IF (Stack[-1] == 0) GOTO 0x1c1; Pop(1)

0x1b9: Push((int) -1)
0x1ba: Push("player_name")
0x1bb: @ SendMessage(Stack[-2], Stack[-1])
0x1bc: Pop(2)
0x1bd: Push((int) -1)
0x1be: Push("player_desc")
0x1bf: @ SendMessage(Stack[-2], Stack[-1])
0x1c0: Pop(2)
0x1c1: Return(); Pop(2)

0x1c2: GOTO 0x228

0x1c3: Push("klara")
0x1c4: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x1c5: IF (Stack[-1] == 0) GOTO 0x200; Pop(1)

0x1c6: Stack[-1] = (bool) 1
0x1c7: PushEmpty(bool)
0x1c8: Stack[-1] = (bool) 0
0x1c9: PushEmpty(bool)
0x1ca: Call2 0x258

0x1cb: Pop(0)
0x1cc: Pop(1); Push((bool) Stack[-1] == 0)
0x1cd: IF (Stack[-1] == 0) GOTO 0x1d4; Pop(1)

0x1ce: PushEmpty(bool)
0x1cf: Call2 0x250

0x1d0: Pop(0)
0x1d1: Pop(1); Push((bool) Stack[-1] == 0)
0x1d2: IF (Stack[-1] == 0) GOTO 0x1d4; Pop(1)

0x1d3: Stack[-1] = (bool) 1
0x1d4: IF (Stack[-1] == 0) GOTO 0x1d6; Pop(1)

0x1d5: Stack[-1] = (bool) 0
0x1d6: Push((int) 0)
0x1d7: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x1d8: IF (Stack[-1] == 0) GOTO 0x1e0; Pop(1)

0x1d9: Pop(0); Push((bool) Stack[-1] == 0)
0x1da: IF (Stack[-1] == 0) GOTO 0x1dc; Pop(1)

0x1db: Return(); Pop(2)

0x1dc: Stack[2 + Tasks[-1].StackPointer] = (int)3
0x1dd: @ StopEventProcessing()
0x1de: Pop(0)
0x1df: GOTO 0x1fe

0x1e0: Push((int) 1)
0x1e1: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x1e2: IF (Stack[-1] == 0) GOTO 0x1f3; Pop(1)

0x1e3: Push((int) 208)
0x1e4: Push("player_name")
0x1e5: @ SendMessage(Stack[-2], Stack[-1])
0x1e6: Pop(2)
0x1e7: Push(Stack[-1])
0x1e8: IF (Stack[-1] == 0) GOTO 0x1ee; Pop(1)

0x1e9: Push((int) 209)
0x1ea: Push("player_desc")
0x1eb: @ SendMessage(Stack[-2], Stack[-1])
0x1ec: Pop(2)
0x1ed: GOTO 0x1f2

0x1ee: Push((int) 213)
0x1ef: Push("player_desc")
0x1f0: @ SendMessage(Stack[-2], Stack[-1])
0x1f1: Pop(2)
0x1f2: GOTO 0x1fe

0x1f3: Push((int) 2)
0x1f4: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x1f5: IF (Stack[-1] == 0) GOTO 0x1fe; Pop(1)

0x1f6: Push((int) -1)
0x1f7: Push("player_name")
0x1f8: @ SendMessage(Stack[-2], Stack[-1])
0x1f9: Pop(2)
0x1fa: Push((int) -1)
0x1fb: Push("player_desc")
0x1fc: @ SendMessage(Stack[-2], Stack[-1])
0x1fd: Pop(2)
0x1fe: Return(); Pop(2)

0x1ff: GOTO 0x228

0x200: Push("load")
0x201: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x202: IF (Stack[-1] == 0) GOTO 0x211; Pop(1)

0x203: Push((int) 0)
0x204: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x205: IF (Stack[-1] == 0) GOTO 0x20c; Pop(1)

0x206: Stack[2 + Tasks[-1].StackPointer] = (int)4
0x207: @@ GetFileName(Stack[-10])
0x208: Pop(0)
0x209: @ StopEventProcessing()
0x20a: Pop(0)
0x20b: GOTO 0x20f

0x20c: PushEmpty()
0x20d: Call2 0x229

0x20e: Pop(0)
0x20f: Return(); Pop(2)

0x210: GOTO 0x228

0x211: Push("save")
0x212: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x213: IF (Stack[-1] == 0) GOTO 0x221; Pop(1)

0x214: Push((int) 0)
0x215: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x216: IF (Stack[-1] == 0) GOTO 0x21c; Pop(1)

0x217: Stack[2 + Tasks[-1].StackPointer] = (int)5
0x218: Stack[9 + Tasks[-1].StackPointer] = Stack[-3]
0x219: @ StopEventProcessing()
0x21a: Pop(0)
0x21b: GOTO 0x21f

0x21c: PushEmpty()
0x21d: Call2 0x229

0x21e: Pop(0)
0x21f: Return(); Pop(2)

0x220: GOTO 0x228

0x221: Push("options")
0x222: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x223: IF (Stack[-1] == 0) GOTO 0x228; Pop(1)

0x224: PushEmpty()
0x225: Call2 0x229

0x226: Pop(0)
0x227: Return(); Pop(2)

0x228: Return(); Pop(2)

0x229: PushEmpty()
0x22a: Call2 0x235

0x22b: Pop(0)
0x22c: PushEmpty(object)
0x22d: Call2 0x5a

0x22e: Stack[3 + Tasks[-1].StackPointer] = Stack[-1]
0x22f: Pop(1)
0x230: PushEmpty(object)
0x231: Call2 0x62

0x232: Stack[4 + Tasks[-1].StackPointer] = Stack[-1]
0x233: Pop(1)
0x234: Return(); Pop(0)

0x235: Push( Stack[3 + Tasks[-1].StackPointer] )
0x236: IF (Stack[-1] == 0) GOTO 0x239; Pop(1)

0x237: @@ DestroyWindow()
0x238: Pop(0)
0x239: Push( Stack[4 + Tasks[-1].StackPointer] )
0x23a: IF (Stack[-1] == 0) GOTO 0x23d; Pop(1)

0x23b: @@ DestroyWindow()
0x23c: Pop(0)
0x23d: Push( Stack[5 + Tasks[-1].StackPointer] )
0x23e: IF (Stack[-1] == 0) GOTO 0x241; Pop(1)

0x23f: @@ DestroyWindow()
0x240: Pop(0)
0x241: Push( Stack[6 + Tasks[-1].StackPointer] )
0x242: IF (Stack[-1] == 0) GOTO 0x245; Pop(1)

0x243: @@ DestroyWindow()
0x244: Pop(0)
0x245: Push( Stack[7 + Tasks[-1].StackPointer] )
0x246: IF (Stack[-1] == 0) GOTO 0x249; Pop(1)

0x247: @@ DestroyWindow()
0x248: Pop(0)
0x249: Push( Stack[8 + Tasks[-1].StackPointer] )
0x24a: IF (Stack[-1] == 0) GOTO 0x24d; Pop(1)

0x24b: @@ DestroyWindow()
0x24c: Pop(0)
0x24d: @ CaptureKeyboard()
0x24e: Pop(0)
0x24f: Return(); Pop(0)

0x250: PushEmpty(int, int)
0x251: Push("BurahCompleted")
0x252: Push((int) 0)
0x253: @ GetRegistryData(Stack[-3], Stack[-2], Stack[-1])
0x254: Pop(2)
0x255: Push((int) 0)
0x256: Stack[-4] = Stack[-2] != Stack[-1]; Pop(1);
0x257: Return(); Pop(2)

0x258: PushEmpty(int, int)
0x259: Push("DankoCompleted")
0x25a: Push((int) 0)
0x25b: @ GetRegistryData(Stack[-3], Stack[-2], Stack[-1])
0x25c: Pop(2)
0x25d: Push((int) 0)
0x25e: Stack[-4] = Stack[-2] != Stack[-1]; Pop(1);
0x25f: Return(); Pop(2)

