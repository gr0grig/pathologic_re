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
	UISync (0 args)
	PlaySound (1 args)
	SetCursor (1 args)
	SetBackground (1 args)
	PauseSound (1 args)
	RemoveWorld (0 args)
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
		EVENT_100 Op = 0x134 Vars = (int)
		EVENT_200 Op = 0x13c Vars = (int, string, object)


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
0x80: PushEmpty(bool, bool, bool, bool, string, bool, bool, bool, bool, string)
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
0x92: Push(Stack[-11])
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
0xa1: Push((int) 131072)
0xa2: Push("klara")
0xa3: @ SendMessage(Stack[-2], Stack[-1])
0xa4: Pop(2)
0xa5: Push((int) 131072)
0xa6: Push("danko")
0xa7: @ SendMessage(Stack[-2], Stack[-1])
0xa8: Pop(2)
0xa9: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0xaa: IF (Stack[-1] == 0) GOTO 0xae; Pop(1)

0xab: @ ProcessEvents()
0xac: Pop(0)
0xad: GOTO 0xa9

0xae: PushEmpty()
0xaf: Call2 0x22c

0xb0: Pop(0)
0xb1: Push((int) 1)
0xb2: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] == Stack[-1])
0xb3: IF (Stack[-1] == 0) GOTO 0xcb; Pop(1)

0xb4: Push("menumusic")
0xb5: @ PauseSound(Stack[-1])
0xb6: Pop(1)
0xb7: PushEmpty(int)
0xb8: Stack[-1] = (int) 1
0xb9: Push(-1, 1); TaskCall(1)
0xba: Call2 0x41

0xbb: Pop(-1, 1); TaskReturn
0xbc: Pop(1)
0xbd: PushEmpty(string, bool)
0xbe: Stack[-2] = "intro_danko.wmv"
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
0xca: GOTO 0x133

0xcb: Push((int) 2)
0xcc: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] == Stack[-1])
0xcd: IF (Stack[-1] == 0) GOTO 0xe8; Pop(1)

0xce: Push("menumusic")
0xcf: @ PauseSound(Stack[-1])
0xd0: Pop(1)
0xd1: PushEmpty(int)
0xd2: Stack[-1] = (int) 2
0xd3: Push(-1, 1); TaskCall(1)
0xd4: Call2 0x41

0xd5: Pop(-1, 1); TaskReturn
0xd6: Pop(1)
0xd7: PushEmpty(string, bool)
0xd8: Stack[-2] = "intro_burah.wmv"
0xd9: Stack[-1] = (bool) 1
0xda: Push(-2, 4); TaskCall(0)
0xdb: Call2 0x0

0xdc: Pop(-2, 4); TaskReturn
0xdd: Pop(2)
0xde: @ RemoveWorld()
0xdf: Pop(0)
0xe0: @ UISync()
0xe1: Pop(0)
0xe2: @ DestroyWindow()
0xe3: Pop(0)
0xe4: Push("demo_save")
0xe5: @ LoadGame(Stack[-6], Stack[-1])
0xe6: Pop(1)
0xe7: GOTO 0x133

0xe8: Push((int) 3)
0xe9: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] == Stack[-1])
0xea: IF (Stack[-1] == 0) GOTO 0x102; Pop(1)

0xeb: Push("menumusic")
0xec: @ PauseSound(Stack[-1])
0xed: Pop(1)
0xee: PushEmpty(int)
0xef: Stack[-1] = (int) 3
0xf0: Push(-1, 1); TaskCall(1)
0xf1: Call2 0x41

0xf2: Pop(-1, 1); TaskReturn
0xf3: Pop(1)
0xf4: PushEmpty(string, bool)
0xf5: Stack[-2] = "intro_klara.wmv"
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
0x101: GOTO 0x133

0x102: Push((int) 4)
0x103: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] == Stack[-1])
0x104: IF (Stack[-1] == 0) GOTO 0x115; Pop(1)

0x105: Push("menumusic")
0x106: @ PauseSound(Stack[-1])
0x107: Pop(1)
0x108: Push("Loading : ")
0x109: Pop(1); Push(Stack[-1] + Stack[10 + StackPtr]);
0x10a: @ Trace(Stack[-1])
0x10b: Pop(1)
0x10c: @ RemoveWorld()
0x10d: Pop(0)
0x10e: @ UISync()
0x10f: Pop(0)
0x110: @ DestroyWindow()
0x111: Pop(0)
0x112: @ LoadGame(Stack[-4], Stack[-10])
0x113: Pop(0)
0x114: GOTO 0x133

0x115: Push((int) 5)
0x116: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] == Stack[-1])
0x117: IF (Stack[-1] == 0) GOTO 0x126; Pop(1)

0x118: Pop(0); Push((bool) Stack[9 + Tasks[-1].StackPointer] == 0)
0x119: IF (Stack[-1] == 0) GOTO 0x11f; Pop(1)

0x11a: @ DestroyWindow()
0x11b: Pop(0)
0x11c: @ SaveGame(Stack[-3])
0x11d: Pop(0)
0x11e: GOTO 0x125

0x11f: @ DestroyWindow()
0x120: Pop(0)
0x121: @@ GetFileName(Stack[-1])
0x122: Pop(0)
0x123: @ SaveGame(Stack[-2], Stack[-1])
0x124: Pop(0)
0x125: GOTO 0x133

0x126: Push((int) 7)
0x127: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] == Stack[-1])
0x128: IF (Stack[-1] == 0) GOTO 0x133; Pop(1)

0x129: @ RemoveWorld()
0x12a: Pop(0)
0x12b: @ UISync()
0x12c: Pop(0)
0x12d: @ DestroyWindow()
0x12e: Pop(0)
0x12f: Push("world_intro.xml")
0x130: Push("player_intro.xml")
0x131: @ NewGame(Stack[-2], Stack[-1])
0x132: Pop(2)
0x133: Return(); Pop(10)

0x134: PushEmpty()
0x135: Push((int) 27)
0x136: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x137: IF (Stack[-1] == 0) GOTO 0x13b; Pop(1)

0x138: PushEmpty()
0x139: Call2 0x220

0x13a: Pop(0)
0x13b: Return(); Pop(0)

0x13c: PushEmpty()
0x13d: Push("newgame")
0x13e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x13f: IF (Stack[-1] == 0) GOTO 0x144; Pop(1)

0x140: Stack[2 + Tasks[-1].StackPointer] = (int)7
0x141: @ StopEventProcessing()
0x142: Pop(0)
0x143: GOTO 0x21f

0x144: Push("quitgame")
0x145: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x146: IF (Stack[-1] == 0) GOTO 0x14e; Pop(1)

0x147: Push("Quit game")
0x148: @ UITrace(Stack[-1])
0x149: Pop(1)
0x14a: @ Quit()
0x14b: Pop(0)
0x14c: Return(); Pop(0)

0x14d: GOTO 0x21f

0x14e: Push("loadgame")
0x14f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x150: IF (Stack[-1] == 0) GOTO 0x15a; Pop(1)

0x151: PushEmpty()
0x152: Call2 0x22c

0x153: Pop(0)
0x154: Push("load.xml")
0x155: Push((bool) 0)
0x156: @ CreateWindow(Stack[-2], Stack[-1], Stack[-6])
0x157: Pop(2)
0x158: Return(); Pop(0)

0x159: GOTO 0x21f

0x15a: Push("savegame")
0x15b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x15c: IF (Stack[-1] == 0) GOTO 0x166; Pop(1)

0x15d: PushEmpty()
0x15e: Call2 0x22c

0x15f: Pop(0)
0x160: Push("save.xml")
0x161: Push((bool) 0)
0x162: @ CreateWindow(Stack[-2], Stack[-1], Stack[-7])
0x163: Pop(2)
0x164: Return(); Pop(0)

0x165: GOTO 0x21f

0x166: Push("gameoptions")
0x167: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x168: IF (Stack[-1] == 0) GOTO 0x172; Pop(1)

0x169: PushEmpty()
0x16a: Call2 0x22c

0x16b: Pop(0)
0x16c: Push("options.xml")
0x16d: Push((bool) 0)
0x16e: @ CreateWindow(Stack[-2], Stack[-1], Stack[-8])
0x16f: Pop(2)
0x170: Return(); Pop(0)

0x171: GOTO 0x21f

0x172: Push("continue")
0x173: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x174: IF (Stack[-1] == 0) GOTO 0x17a; Pop(1)

0x175: Stack[2 + Tasks[-1].StackPointer] = (int)6
0x176: @ StopEventProcessing()
0x177: Pop(0)
0x178: Return(); Pop(0)

0x179: GOTO 0x21f

0x17a: Push("credits")
0x17b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x17c: IF (Stack[-1] == 0) GOTO 0x192; Pop(1)

0x17d: PushEmpty()
0x17e: Call2 0x22c

0x17f: Pop(0)
0x180: PushEmpty(int)
0x181: Stack[-1] = (int) 8
0x182: Push(-1, 1); TaskCall(1)
0x183: Call2 0x41

0x184: Pop(-1, 1); TaskReturn
0x185: Pop(1)
0x186: PushEmpty(object)
0x187: Call2 0x70

0x188: Stack[3 + Tasks[-1].StackPointer] = Stack[-1]
0x189: Pop(1)
0x18a: PushEmpty(object)
0x18b: Call2 0x78

0x18c: Stack[4 + Tasks[-1].StackPointer] = Stack[-1]
0x18d: Pop(1)
0x18e: Push((bool) 1)
0x18f: @ ShowCursor(Stack[-1])
0x190: Pop(1)
0x191: GOTO 0x21f

0x192: Push("danko")
0x193: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x194: IF (Stack[-1] == 0) GOTO 0x1b3; Pop(1)

0x195: Push((int) 0)
0x196: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x197: IF (Stack[-1] == 0) GOTO 0x19a; Pop(1)

0x198: Return(); Pop(0)

0x199: GOTO 0x1b1

0x19a: Push((int) 1)
0x19b: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x19c: IF (Stack[-1] == 0) GOTO 0x1a6; Pop(1)

0x19d: Push((int) 202)
0x19e: Push("player_name")
0x19f: @ SendMessage(Stack[-2], Stack[-1])
0x1a0: Pop(2)
0x1a1: Push((int) 203)
0x1a2: Push("player_desc")
0x1a3: @ SendMessage(Stack[-2], Stack[-1])
0x1a4: Pop(2)
0x1a5: GOTO 0x1b1

0x1a6: Push((int) 2)
0x1a7: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1a8: IF (Stack[-1] == 0) GOTO 0x1b1; Pop(1)

0x1a9: Push((int) -1)
0x1aa: Push("player_name")
0x1ab: @ SendMessage(Stack[-2], Stack[-1])
0x1ac: Pop(2)
0x1ad: Push((int) -1)
0x1ae: Push("player_desc")
0x1af: @ SendMessage(Stack[-2], Stack[-1])
0x1b0: Pop(2)
0x1b1: Return(); Pop(0)

0x1b2: GOTO 0x21f

0x1b3: Push("burah")
0x1b4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1b5: IF (Stack[-1] == 0) GOTO 0x1d6; Pop(1)

0x1b6: Push((int) 0)
0x1b7: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1b8: IF (Stack[-1] == 0) GOTO 0x1bd; Pop(1)

0x1b9: Stack[2 + Tasks[-1].StackPointer] = (int)2
0x1ba: @ StopEventProcessing()
0x1bb: Pop(0)
0x1bc: GOTO 0x1d4

0x1bd: Push((int) 1)
0x1be: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1bf: IF (Stack[-1] == 0) GOTO 0x1c9; Pop(1)

0x1c0: Push((int) 205)
0x1c1: Push("player_name")
0x1c2: @ SendMessage(Stack[-2], Stack[-1])
0x1c3: Pop(2)
0x1c4: Push((int) 206)
0x1c5: Push("player_desc")
0x1c6: @ SendMessage(Stack[-2], Stack[-1])
0x1c7: Pop(2)
0x1c8: GOTO 0x1d4

0x1c9: Push((int) 2)
0x1ca: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1cb: IF (Stack[-1] == 0) GOTO 0x1d4; Pop(1)

0x1cc: Push((int) -1)
0x1cd: Push("player_name")
0x1ce: @ SendMessage(Stack[-2], Stack[-1])
0x1cf: Pop(2)
0x1d0: Push((int) -1)
0x1d1: Push("player_desc")
0x1d2: @ SendMessage(Stack[-2], Stack[-1])
0x1d3: Pop(2)
0x1d4: Return(); Pop(0)

0x1d5: GOTO 0x21f

0x1d6: Push("klara")
0x1d7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1d8: IF (Stack[-1] == 0) GOTO 0x1f7; Pop(1)

0x1d9: Push((int) 0)
0x1da: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1db: IF (Stack[-1] == 0) GOTO 0x1de; Pop(1)

0x1dc: Return(); Pop(0)

0x1dd: GOTO 0x1f5

0x1de: Push((int) 1)
0x1df: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1e0: IF (Stack[-1] == 0) GOTO 0x1ea; Pop(1)

0x1e1: Push((int) 208)
0x1e2: Push("player_name")
0x1e3: @ SendMessage(Stack[-2], Stack[-1])
0x1e4: Pop(2)
0x1e5: Push((int) 209)
0x1e6: Push("player_desc")
0x1e7: @ SendMessage(Stack[-2], Stack[-1])
0x1e8: Pop(2)
0x1e9: GOTO 0x1f5

0x1ea: Push((int) 2)
0x1eb: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1ec: IF (Stack[-1] == 0) GOTO 0x1f5; Pop(1)

0x1ed: Push((int) -1)
0x1ee: Push("player_name")
0x1ef: @ SendMessage(Stack[-2], Stack[-1])
0x1f0: Pop(2)
0x1f1: Push((int) -1)
0x1f2: Push("player_desc")
0x1f3: @ SendMessage(Stack[-2], Stack[-1])
0x1f4: Pop(2)
0x1f5: Return(); Pop(0)

0x1f6: GOTO 0x21f

0x1f7: Push("load")
0x1f8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1f9: IF (Stack[-1] == 0) GOTO 0x208; Pop(1)

0x1fa: Push((int) 0)
0x1fb: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1fc: IF (Stack[-1] == 0) GOTO 0x203; Pop(1)

0x1fd: Stack[2 + Tasks[-1].StackPointer] = (int)4
0x1fe: @@ GetFileName(Stack[-10])
0x1ff: Pop(0)
0x200: @ StopEventProcessing()
0x201: Pop(0)
0x202: GOTO 0x206

0x203: PushEmpty()
0x204: Call2 0x220

0x205: Pop(0)
0x206: Return(); Pop(0)

0x207: GOTO 0x21f

0x208: Push("save")
0x209: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x20a: IF (Stack[-1] == 0) GOTO 0x218; Pop(1)

0x20b: Push((int) 0)
0x20c: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x20d: IF (Stack[-1] == 0) GOTO 0x213; Pop(1)

0x20e: Stack[2 + Tasks[-1].StackPointer] = (int)5
0x20f: Stack[9 + Tasks[-1].StackPointer] = Stack[-1]
0x210: @ StopEventProcessing()
0x211: Pop(0)
0x212: GOTO 0x216

0x213: PushEmpty()
0x214: Call2 0x220

0x215: Pop(0)
0x216: Return(); Pop(0)

0x217: GOTO 0x21f

0x218: Push("options")
0x219: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x21a: IF (Stack[-1] == 0) GOTO 0x21f; Pop(1)

0x21b: PushEmpty()
0x21c: Call2 0x220

0x21d: Pop(0)
0x21e: Return(); Pop(0)

0x21f: Return(); Pop(0)

0x220: PushEmpty()
0x221: Call2 0x22c

0x222: Pop(0)
0x223: PushEmpty(object)
0x224: Call2 0x70

0x225: Stack[3 + Tasks[-1].StackPointer] = Stack[-1]
0x226: Pop(1)
0x227: PushEmpty(object)
0x228: Call2 0x78

0x229: Stack[4 + Tasks[-1].StackPointer] = Stack[-1]
0x22a: Pop(1)
0x22b: Return(); Pop(0)

0x22c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x22d: IF (Stack[-1] == 0) GOTO 0x230; Pop(1)

0x22e: @@ DestroyWindow()
0x22f: Pop(0)
0x230: Push( Stack[4 + Tasks[-1].StackPointer] )
0x231: IF (Stack[-1] == 0) GOTO 0x234; Pop(1)

0x232: @@ DestroyWindow()
0x233: Pop(0)
0x234: Push( Stack[5 + Tasks[-1].StackPointer] )
0x235: IF (Stack[-1] == 0) GOTO 0x238; Pop(1)

0x236: @@ DestroyWindow()
0x237: Pop(0)
0x238: Push( Stack[6 + Tasks[-1].StackPointer] )
0x239: IF (Stack[-1] == 0) GOTO 0x23c; Pop(1)

0x23a: @@ DestroyWindow()
0x23b: Pop(0)
0x23c: Push( Stack[7 + Tasks[-1].StackPointer] )
0x23d: IF (Stack[-1] == 0) GOTO 0x240; Pop(1)

0x23e: @@ DestroyWindow()
0x23f: Pop(0)
0x240: Push( Stack[8 + Tasks[-1].StackPointer] )
0x241: IF (Stack[-1] == 0) GOTO 0x244; Pop(1)

0x242: @@ DestroyWindow()
0x243: Pop(0)
0x244: @ CaptureKeyboard()
0x245: Pop(0)
0x246: Return(); Pop(0)

