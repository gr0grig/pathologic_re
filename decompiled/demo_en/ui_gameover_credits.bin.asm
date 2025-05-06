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
	klara
	danko
	intro_danko.wmv
	intro_burah.wmv
	demo_save
	intro_klara.wmv
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
	player_name
	player_desc
	burah
	load

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
	LoadGame (2 args)
	Trace (1 args)
	SaveGame (1 args)
	SaveGame (2 args)
	NewGame (2 args)
	UITrace (1 args)
	Quit (0 args)

RunOp = 0x55
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object, int, int, bool) Params = 2
		EVENT_0 Op = 0x1e Vars = ()
		EVENT_101 Op = 0x38 Vars = (int)
	GTASK_1 Vars = (object) Params = 1
		EVENT_200 Op = 0x4c Vars = (int, string, object)
	GTASK_2 Vars = (int, int, int, object, object, object, object, object, object, object, string, object) Params = 0
		EVENT_100 Op = 0x127 Vars = (int)
		EVENT_200 Op = 0x12f Vars = (int, string, object)


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
0x73: PushEmpty(bool, bool, bool, bool, string, bool, bool, bool, bool, string)
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
0x85: Push(Stack[-11])
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
0x94: Push((int) 131072)
0x95: Push("klara")
0x96: @ SendMessage(Stack[-2], Stack[-1])
0x97: Pop(2)
0x98: Push((int) 131072)
0x99: Push("danko")
0x9a: @ SendMessage(Stack[-2], Stack[-1])
0x9b: Pop(2)
0x9c: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x9d: IF (Stack[-1] == 0) GOTO 0xa1; Pop(1)

0x9e: @ ProcessEvents()
0x9f: Pop(0)
0xa0: GOTO 0x9c

0xa1: PushEmpty()
0xa2: Call2 0x21f

0xa3: Pop(0)
0xa4: Push((int) 1)
0xa5: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] == Stack[-1])
0xa6: IF (Stack[-1] == 0) GOTO 0xbe; Pop(1)

0xa7: Push("menumusic")
0xa8: @ PauseSound(Stack[-1])
0xa9: Pop(1)
0xaa: PushEmpty(int)
0xab: Stack[-1] = (int) 1
0xac: Push(-1, 1); TaskCall(1)
0xad: Call2 0x41

0xae: Pop(-1, 1); TaskReturn
0xaf: Pop(1)
0xb0: PushEmpty(string, bool)
0xb1: Stack[-2] = "intro_danko.wmv"
0xb2: Stack[-1] = (bool) 1
0xb3: Push(-2, 4); TaskCall(0)
0xb4: Call2 0x0

0xb5: Pop(-2, 4); TaskReturn
0xb6: Pop(2)
0xb7: @ RemoveWorld()
0xb8: Pop(0)
0xb9: @ UISync()
0xba: Pop(0)
0xbb: @ DestroyWindow()
0xbc: Pop(0)
0xbd: GOTO 0x126

0xbe: Push((int) 2)
0xbf: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] == Stack[-1])
0xc0: IF (Stack[-1] == 0) GOTO 0xdb; Pop(1)

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
0xd7: Push("demo_save")
0xd8: @ LoadGame(Stack[-6], Stack[-1])
0xd9: Pop(1)
0xda: GOTO 0x126

0xdb: Push((int) 3)
0xdc: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] == Stack[-1])
0xdd: IF (Stack[-1] == 0) GOTO 0xf5; Pop(1)

0xde: Push("menumusic")
0xdf: @ PauseSound(Stack[-1])
0xe0: Pop(1)
0xe1: PushEmpty(int)
0xe2: Stack[-1] = (int) 3
0xe3: Push(-1, 1); TaskCall(1)
0xe4: Call2 0x41

0xe5: Pop(-1, 1); TaskReturn
0xe6: Pop(1)
0xe7: PushEmpty(string, bool)
0xe8: Stack[-2] = "intro_klara.wmv"
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
0xf4: GOTO 0x126

0xf5: Push((int) 4)
0xf6: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] == Stack[-1])
0xf7: IF (Stack[-1] == 0) GOTO 0x108; Pop(1)

0xf8: Push("menumusic")
0xf9: @ PauseSound(Stack[-1])
0xfa: Pop(1)
0xfb: Push("Loading : ")
0xfc: Pop(1); Push(Stack[-1] + Stack[10 + StackPtr]);
0xfd: @ Trace(Stack[-1])
0xfe: Pop(1)
0xff: @ RemoveWorld()
0x100: Pop(0)
0x101: @ UISync()
0x102: Pop(0)
0x103: @ DestroyWindow()
0x104: Pop(0)
0x105: @ LoadGame(Stack[-4], Stack[-10])
0x106: Pop(0)
0x107: GOTO 0x126

0x108: Push((int) 5)
0x109: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] == Stack[-1])
0x10a: IF (Stack[-1] == 0) GOTO 0x119; Pop(1)

0x10b: Pop(0); Push((bool) Stack[9 + Tasks[-1].StackPointer] == 0)
0x10c: IF (Stack[-1] == 0) GOTO 0x112; Pop(1)

0x10d: @ DestroyWindow()
0x10e: Pop(0)
0x10f: @ SaveGame(Stack[-3])
0x110: Pop(0)
0x111: GOTO 0x118

0x112: @ DestroyWindow()
0x113: Pop(0)
0x114: @@ GetFileName(Stack[-1])
0x115: Pop(0)
0x116: @ SaveGame(Stack[-2], Stack[-1])
0x117: Pop(0)
0x118: GOTO 0x126

0x119: Push((int) 7)
0x11a: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] == Stack[-1])
0x11b: IF (Stack[-1] == 0) GOTO 0x126; Pop(1)

0x11c: @ RemoveWorld()
0x11d: Pop(0)
0x11e: @ UISync()
0x11f: Pop(0)
0x120: @ DestroyWindow()
0x121: Pop(0)
0x122: Push("world_intro.xml")
0x123: Push("player_intro.xml")
0x124: @ NewGame(Stack[-2], Stack[-1])
0x125: Pop(2)
0x126: Return(); Pop(10)

0x127: PushEmpty()
0x128: Push((int) 27)
0x129: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x12a: IF (Stack[-1] == 0) GOTO 0x12e; Pop(1)

0x12b: PushEmpty()
0x12c: Call2 0x213

0x12d: Pop(0)
0x12e: Return(); Pop(0)

0x12f: PushEmpty()
0x130: Push("newgame")
0x131: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x132: IF (Stack[-1] == 0) GOTO 0x137; Pop(1)

0x133: Stack[2 + Tasks[-1].StackPointer] = (int)7
0x134: @ StopEventProcessing()
0x135: Pop(0)
0x136: GOTO 0x212

0x137: Push("quitgame")
0x138: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x139: IF (Stack[-1] == 0) GOTO 0x141; Pop(1)

0x13a: Push("Quit game")
0x13b: @ UITrace(Stack[-1])
0x13c: Pop(1)
0x13d: @ Quit()
0x13e: Pop(0)
0x13f: Return(); Pop(0)

0x140: GOTO 0x212

0x141: Push("loadgame")
0x142: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x143: IF (Stack[-1] == 0) GOTO 0x14d; Pop(1)

0x144: PushEmpty()
0x145: Call2 0x21f

0x146: Pop(0)
0x147: Push("load.xml")
0x148: Push((bool) 0)
0x149: @ CreateWindow(Stack[-2], Stack[-1], Stack[-6])
0x14a: Pop(2)
0x14b: Return(); Pop(0)

0x14c: GOTO 0x212

0x14d: Push("savegame")
0x14e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x14f: IF (Stack[-1] == 0) GOTO 0x159; Pop(1)

0x150: PushEmpty()
0x151: Call2 0x21f

0x152: Pop(0)
0x153: Push("save.xml")
0x154: Push((bool) 0)
0x155: @ CreateWindow(Stack[-2], Stack[-1], Stack[-7])
0x156: Pop(2)
0x157: Return(); Pop(0)

0x158: GOTO 0x212

0x159: Push("gameoptions")
0x15a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x15b: IF (Stack[-1] == 0) GOTO 0x165; Pop(1)

0x15c: PushEmpty()
0x15d: Call2 0x21f

0x15e: Pop(0)
0x15f: Push("options.xml")
0x160: Push((bool) 0)
0x161: @ CreateWindow(Stack[-2], Stack[-1], Stack[-8])
0x162: Pop(2)
0x163: Return(); Pop(0)

0x164: GOTO 0x212

0x165: Push("continue")
0x166: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x167: IF (Stack[-1] == 0) GOTO 0x16d; Pop(1)

0x168: Stack[2 + Tasks[-1].StackPointer] = (int)6
0x169: @ StopEventProcessing()
0x16a: Pop(0)
0x16b: Return(); Pop(0)

0x16c: GOTO 0x212

0x16d: Push("credits")
0x16e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x16f: IF (Stack[-1] == 0) GOTO 0x185; Pop(1)

0x170: PushEmpty()
0x171: Call2 0x21f

0x172: Pop(0)
0x173: PushEmpty(int)
0x174: Stack[-1] = (int) 8
0x175: Push(-1, 1); TaskCall(1)
0x176: Call2 0x41

0x177: Pop(-1, 1); TaskReturn
0x178: Pop(1)
0x179: PushEmpty(object)
0x17a: Call2 0x63

0x17b: Stack[3 + Tasks[-1].StackPointer] = Stack[-1]
0x17c: Pop(1)
0x17d: PushEmpty(object)
0x17e: Call2 0x6b

0x17f: Stack[4 + Tasks[-1].StackPointer] = Stack[-1]
0x180: Pop(1)
0x181: Push((bool) 1)
0x182: @ ShowCursor(Stack[-1])
0x183: Pop(1)
0x184: GOTO 0x212

0x185: Push("danko")
0x186: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x187: IF (Stack[-1] == 0) GOTO 0x1a6; Pop(1)

0x188: Push((int) 0)
0x189: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x18a: IF (Stack[-1] == 0) GOTO 0x18d; Pop(1)

0x18b: Return(); Pop(0)

0x18c: GOTO 0x1a4

0x18d: Push((int) 1)
0x18e: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x18f: IF (Stack[-1] == 0) GOTO 0x199; Pop(1)

0x190: Push((int) 202)
0x191: Push("player_name")
0x192: @ SendMessage(Stack[-2], Stack[-1])
0x193: Pop(2)
0x194: Push((int) 203)
0x195: Push("player_desc")
0x196: @ SendMessage(Stack[-2], Stack[-1])
0x197: Pop(2)
0x198: GOTO 0x1a4

0x199: Push((int) 2)
0x19a: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x19b: IF (Stack[-1] == 0) GOTO 0x1a4; Pop(1)

0x19c: Push((int) -1)
0x19d: Push("player_name")
0x19e: @ SendMessage(Stack[-2], Stack[-1])
0x19f: Pop(2)
0x1a0: Push((int) -1)
0x1a1: Push("player_desc")
0x1a2: @ SendMessage(Stack[-2], Stack[-1])
0x1a3: Pop(2)
0x1a4: Return(); Pop(0)

0x1a5: GOTO 0x212

0x1a6: Push("burah")
0x1a7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1a8: IF (Stack[-1] == 0) GOTO 0x1c9; Pop(1)

0x1a9: Push((int) 0)
0x1aa: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1ab: IF (Stack[-1] == 0) GOTO 0x1b0; Pop(1)

0x1ac: Stack[2 + Tasks[-1].StackPointer] = (int)2
0x1ad: @ StopEventProcessing()
0x1ae: Pop(0)
0x1af: GOTO 0x1c7

0x1b0: Push((int) 1)
0x1b1: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1b2: IF (Stack[-1] == 0) GOTO 0x1bc; Pop(1)

0x1b3: Push((int) 205)
0x1b4: Push("player_name")
0x1b5: @ SendMessage(Stack[-2], Stack[-1])
0x1b6: Pop(2)
0x1b7: Push((int) 206)
0x1b8: Push("player_desc")
0x1b9: @ SendMessage(Stack[-2], Stack[-1])
0x1ba: Pop(2)
0x1bb: GOTO 0x1c7

0x1bc: Push((int) 2)
0x1bd: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1be: IF (Stack[-1] == 0) GOTO 0x1c7; Pop(1)

0x1bf: Push((int) -1)
0x1c0: Push("player_name")
0x1c1: @ SendMessage(Stack[-2], Stack[-1])
0x1c2: Pop(2)
0x1c3: Push((int) -1)
0x1c4: Push("player_desc")
0x1c5: @ SendMessage(Stack[-2], Stack[-1])
0x1c6: Pop(2)
0x1c7: Return(); Pop(0)

0x1c8: GOTO 0x212

0x1c9: Push("klara")
0x1ca: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1cb: IF (Stack[-1] == 0) GOTO 0x1ea; Pop(1)

0x1cc: Push((int) 0)
0x1cd: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1ce: IF (Stack[-1] == 0) GOTO 0x1d1; Pop(1)

0x1cf: Return(); Pop(0)

0x1d0: GOTO 0x1e8

0x1d1: Push((int) 1)
0x1d2: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1d3: IF (Stack[-1] == 0) GOTO 0x1dd; Pop(1)

0x1d4: Push((int) 208)
0x1d5: Push("player_name")
0x1d6: @ SendMessage(Stack[-2], Stack[-1])
0x1d7: Pop(2)
0x1d8: Push((int) 209)
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

0x1e9: GOTO 0x212

0x1ea: Push("load")
0x1eb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1ec: IF (Stack[-1] == 0) GOTO 0x1fb; Pop(1)

0x1ed: Push((int) 0)
0x1ee: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1ef: IF (Stack[-1] == 0) GOTO 0x1f6; Pop(1)

0x1f0: Stack[2 + Tasks[-1].StackPointer] = (int)4
0x1f1: @@ GetFileName(Stack[-10])
0x1f2: Pop(0)
0x1f3: @ StopEventProcessing()
0x1f4: Pop(0)
0x1f5: GOTO 0x1f9

0x1f6: PushEmpty()
0x1f7: Call2 0x213

0x1f8: Pop(0)
0x1f9: Return(); Pop(0)

0x1fa: GOTO 0x212

0x1fb: Push("save")
0x1fc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1fd: IF (Stack[-1] == 0) GOTO 0x20b; Pop(1)

0x1fe: Push((int) 0)
0x1ff: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x200: IF (Stack[-1] == 0) GOTO 0x206; Pop(1)

0x201: Stack[2 + Tasks[-1].StackPointer] = (int)5
0x202: Stack[9 + Tasks[-1].StackPointer] = Stack[-1]
0x203: @ StopEventProcessing()
0x204: Pop(0)
0x205: GOTO 0x209

0x206: PushEmpty()
0x207: Call2 0x213

0x208: Pop(0)
0x209: Return(); Pop(0)

0x20a: GOTO 0x212

0x20b: Push("options")
0x20c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x20d: IF (Stack[-1] == 0) GOTO 0x212; Pop(1)

0x20e: PushEmpty()
0x20f: Call2 0x213

0x210: Pop(0)
0x211: Return(); Pop(0)

0x212: Return(); Pop(0)

0x213: PushEmpty()
0x214: Call2 0x21f

0x215: Pop(0)
0x216: PushEmpty(object)
0x217: Call2 0x63

0x218: Stack[3 + Tasks[-1].StackPointer] = Stack[-1]
0x219: Pop(1)
0x21a: PushEmpty(object)
0x21b: Call2 0x6b

0x21c: Stack[4 + Tasks[-1].StackPointer] = Stack[-1]
0x21d: Pop(1)
0x21e: Return(); Pop(0)

0x21f: Push( Stack[3 + Tasks[-1].StackPointer] )
0x220: IF (Stack[-1] == 0) GOTO 0x223; Pop(1)

0x221: @@ DestroyWindow()
0x222: Pop(0)
0x223: Push( Stack[4 + Tasks[-1].StackPointer] )
0x224: IF (Stack[-1] == 0) GOTO 0x227; Pop(1)

0x225: @@ DestroyWindow()
0x226: Pop(0)
0x227: Push( Stack[5 + Tasks[-1].StackPointer] )
0x228: IF (Stack[-1] == 0) GOTO 0x22b; Pop(1)

0x229: @@ DestroyWindow()
0x22a: Pop(0)
0x22b: Push( Stack[6 + Tasks[-1].StackPointer] )
0x22c: IF (Stack[-1] == 0) GOTO 0x22f; Pop(1)

0x22d: @@ DestroyWindow()
0x22e: Pop(0)
0x22f: Push( Stack[7 + Tasks[-1].StackPointer] )
0x230: IF (Stack[-1] == 0) GOTO 0x233; Pop(1)

0x231: @@ DestroyWindow()
0x232: Pop(0)
0x233: Push( Stack[8 + Tasks[-1].StackPointer] )
0x234: IF (Stack[-1] == 0) GOTO 0x237; Pop(1)

0x235: @@ DestroyWindow()
0x236: Pop(0)
0x237: @ CaptureKeyboard()
0x238: Pop(0)
0x239: Return(); Pop(0)

