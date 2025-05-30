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
	death.wmv
	game_buttons.xml
	game_logo.xml
	default
	menumusic
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
	SetCursor (1 args)
	SetBackground (1 args)
	PlaySound (1 args)
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
	GetStringByID (2 args)
	GetTextHeightInWidth (4 args)
	PrintInWidth (9 args)

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
	GTASK_3 Vars = (object, int, int, bool, string) Params = 3
		EVENT_0 Op = 0x25f Vars = ()
		EVENT_101 Op = 0x291 Vars = (int)


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
0x5b: PushEmpty(string, int, bool)
0x5c: Stack[-3] = "death.wmv"
0x5d: Stack[-2] = (int) 2000
0x5e: Stack[-1] = (bool) 1
0x5f: Push(-3, 5); TaskCall(3)
0x60: Call2 0x23f

0x61: Pop(-3, 5); TaskReturn
0x62: Pop(3)
0x63: PushEmpty(bool)
0x64: Stack[-1] = (bool) 0
0x65: Call2 0x78

0x66: Pop(1)
0x67: Return(); Pop(0)

0x68: PushEmpty(object, object)
0x69: Push("game_buttons.xml")
0x6a: Push((bool) 0)
0x6b: @ CreateWindow(Stack[-2], Stack[-1], Stack[-3])
0x6c: Pop(2)
0x6d: Stack[-3] = Stack[-1]
0x6e: Return(); Pop(2)

0x6f: Stack[-1] = 0
0x70: PushEmpty(object, object)
0x71: Push("game_logo.xml")
0x72: Push((bool) 0)
0x73: @ CreateWindow(Stack[-2], Stack[-1], Stack[-3])
0x74: Pop(2)
0x75: Stack[-3] = Stack[-1]
0x76: Return(); Pop(2)

0x77: Stack[-1] = 0
0x78: PushEmpty(bool, bool, bool, bool, string, bool, bool, bool, bool, string)
0x79: @ CaptureKeyboard()
0x7a: Pop(0)
0x7b: Stack[2 + Tasks[-1].StackPointer] = (int)0
0x7c: @ GetWindowSize(Stack[-0], Stack[-1])
0x7d: Pop(0)
0x7e: Push("default")
0x7f: @ SetCursor(Stack[-1])
0x80: Pop(1)
0x81: Push("default")
0x82: @ SetBackground(Stack[-1])
0x83: Pop(1)
0x84: Push("menumusic")
0x85: @ PlaySound(Stack[-1])
0x86: Pop(1)
0x87: Push((bool) 1)
0x88: @ ShowCursor(Stack[-1])
0x89: Pop(1)
0x8a: Push(Stack[-11])
0x8b: IF (Stack[-1] == 0) GOTO 0x91; Pop(1)

0x8c: Push("game_choose_pers.xml")
0x8d: Push((bool) 0)
0x8e: @ CreateWindow(Stack[-2], Stack[-1], Stack[-5])
0x8f: Pop(2)
0x90: GOTO 0x99

0x91: PushEmpty(object)
0x92: Call2 0x68

0x93: Stack[3 + Tasks[-1].StackPointer] = Stack[-1]
0x94: Pop(1)
0x95: PushEmpty(object)
0x96: Call2 0x70

0x97: Stack[4 + Tasks[-1].StackPointer] = Stack[-1]
0x98: Pop(1)
0x99: Push((int) 131072)
0x9a: Push("klara")
0x9b: @ SendMessage(Stack[-2], Stack[-1])
0x9c: Pop(2)
0x9d: Push((int) 131072)
0x9e: Push("danko")
0x9f: @ SendMessage(Stack[-2], Stack[-1])
0xa0: Pop(2)
0xa1: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0xa2: IF (Stack[-1] == 0) GOTO 0xa6; Pop(1)

0xa3: @ ProcessEvents()
0xa4: Pop(0)
0xa5: GOTO 0xa1

0xa6: PushEmpty()
0xa7: Call2 0x224

0xa8: Pop(0)
0xa9: Push((int) 1)
0xaa: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] == Stack[-1])
0xab: IF (Stack[-1] == 0) GOTO 0xc3; Pop(1)

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
0xc2: GOTO 0x12b

0xc3: Push((int) 2)
0xc4: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] == Stack[-1])
0xc5: IF (Stack[-1] == 0) GOTO 0xe0; Pop(1)

0xc6: Push("menumusic")
0xc7: @ PauseSound(Stack[-1])
0xc8: Pop(1)
0xc9: PushEmpty(int)
0xca: Stack[-1] = (int) 2
0xcb: Push(-1, 1); TaskCall(1)
0xcc: Call2 0x41

0xcd: Pop(-1, 1); TaskReturn
0xce: Pop(1)
0xcf: PushEmpty(string, bool)
0xd0: Stack[-2] = "intro_burah.wmv"
0xd1: Stack[-1] = (bool) 1
0xd2: Push(-2, 4); TaskCall(0)
0xd3: Call2 0x0

0xd4: Pop(-2, 4); TaskReturn
0xd5: Pop(2)
0xd6: @ RemoveWorld()
0xd7: Pop(0)
0xd8: @ UISync()
0xd9: Pop(0)
0xda: @ DestroyWindow()
0xdb: Pop(0)
0xdc: Push("demo_save")
0xdd: @ LoadGame(Stack[-6], Stack[-1])
0xde: Pop(1)
0xdf: GOTO 0x12b

0xe0: Push((int) 3)
0xe1: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] == Stack[-1])
0xe2: IF (Stack[-1] == 0) GOTO 0xfa; Pop(1)

0xe3: Push("menumusic")
0xe4: @ PauseSound(Stack[-1])
0xe5: Pop(1)
0xe6: PushEmpty(int)
0xe7: Stack[-1] = (int) 3
0xe8: Push(-1, 1); TaskCall(1)
0xe9: Call2 0x41

0xea: Pop(-1, 1); TaskReturn
0xeb: Pop(1)
0xec: PushEmpty(string, bool)
0xed: Stack[-2] = "intro_klara.wmv"
0xee: Stack[-1] = (bool) 1
0xef: Push(-2, 4); TaskCall(0)
0xf0: Call2 0x0

0xf1: Pop(-2, 4); TaskReturn
0xf2: Pop(2)
0xf3: @ RemoveWorld()
0xf4: Pop(0)
0xf5: @ UISync()
0xf6: Pop(0)
0xf7: @ DestroyWindow()
0xf8: Pop(0)
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
0x12b: Return(); Pop(10)

0x12c: PushEmpty()
0x12d: Push((int) 27)
0x12e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x12f: IF (Stack[-1] == 0) GOTO 0x133; Pop(1)

0x130: PushEmpty()
0x131: Call2 0x218

0x132: Pop(0)
0x133: Return(); Pop(0)

0x134: PushEmpty()
0x135: Push("newgame")
0x136: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x137: IF (Stack[-1] == 0) GOTO 0x13c; Pop(1)

0x138: Stack[2 + Tasks[-1].StackPointer] = (int)7
0x139: @ StopEventProcessing()
0x13a: Pop(0)
0x13b: GOTO 0x217

0x13c: Push("quitgame")
0x13d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x13e: IF (Stack[-1] == 0) GOTO 0x146; Pop(1)

0x13f: Push("Quit game")
0x140: @ UITrace(Stack[-1])
0x141: Pop(1)
0x142: @ Quit()
0x143: Pop(0)
0x144: Return(); Pop(0)

0x145: GOTO 0x217

0x146: Push("loadgame")
0x147: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x148: IF (Stack[-1] == 0) GOTO 0x152; Pop(1)

0x149: PushEmpty()
0x14a: Call2 0x224

0x14b: Pop(0)
0x14c: Push("load.xml")
0x14d: Push((bool) 0)
0x14e: @ CreateWindow(Stack[-2], Stack[-1], Stack[-6])
0x14f: Pop(2)
0x150: Return(); Pop(0)

0x151: GOTO 0x217

0x152: Push("savegame")
0x153: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x154: IF (Stack[-1] == 0) GOTO 0x15e; Pop(1)

0x155: PushEmpty()
0x156: Call2 0x224

0x157: Pop(0)
0x158: Push("save.xml")
0x159: Push((bool) 0)
0x15a: @ CreateWindow(Stack[-2], Stack[-1], Stack[-7])
0x15b: Pop(2)
0x15c: Return(); Pop(0)

0x15d: GOTO 0x217

0x15e: Push("gameoptions")
0x15f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x160: IF (Stack[-1] == 0) GOTO 0x16a; Pop(1)

0x161: PushEmpty()
0x162: Call2 0x224

0x163: Pop(0)
0x164: Push("options.xml")
0x165: Push((bool) 0)
0x166: @ CreateWindow(Stack[-2], Stack[-1], Stack[-8])
0x167: Pop(2)
0x168: Return(); Pop(0)

0x169: GOTO 0x217

0x16a: Push("continue")
0x16b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x16c: IF (Stack[-1] == 0) GOTO 0x172; Pop(1)

0x16d: Stack[2 + Tasks[-1].StackPointer] = (int)6
0x16e: @ StopEventProcessing()
0x16f: Pop(0)
0x170: Return(); Pop(0)

0x171: GOTO 0x217

0x172: Push("credits")
0x173: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x174: IF (Stack[-1] == 0) GOTO 0x18a; Pop(1)

0x175: PushEmpty()
0x176: Call2 0x224

0x177: Pop(0)
0x178: PushEmpty(int)
0x179: Stack[-1] = (int) 8
0x17a: Push(-1, 1); TaskCall(1)
0x17b: Call2 0x41

0x17c: Pop(-1, 1); TaskReturn
0x17d: Pop(1)
0x17e: PushEmpty(object)
0x17f: Call2 0x68

0x180: Stack[3 + Tasks[-1].StackPointer] = Stack[-1]
0x181: Pop(1)
0x182: PushEmpty(object)
0x183: Call2 0x70

0x184: Stack[4 + Tasks[-1].StackPointer] = Stack[-1]
0x185: Pop(1)
0x186: Push((bool) 1)
0x187: @ ShowCursor(Stack[-1])
0x188: Pop(1)
0x189: GOTO 0x217

0x18a: Push("danko")
0x18b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x18c: IF (Stack[-1] == 0) GOTO 0x1ab; Pop(1)

0x18d: Push((int) 0)
0x18e: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x18f: IF (Stack[-1] == 0) GOTO 0x192; Pop(1)

0x190: Return(); Pop(0)

0x191: GOTO 0x1a9

0x192: Push((int) 1)
0x193: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x194: IF (Stack[-1] == 0) GOTO 0x19e; Pop(1)

0x195: Push((int) 202)
0x196: Push("player_name")
0x197: @ SendMessage(Stack[-2], Stack[-1])
0x198: Pop(2)
0x199: Push((int) 203)
0x19a: Push("player_desc")
0x19b: @ SendMessage(Stack[-2], Stack[-1])
0x19c: Pop(2)
0x19d: GOTO 0x1a9

0x19e: Push((int) 2)
0x19f: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1a0: IF (Stack[-1] == 0) GOTO 0x1a9; Pop(1)

0x1a1: Push((int) -1)
0x1a2: Push("player_name")
0x1a3: @ SendMessage(Stack[-2], Stack[-1])
0x1a4: Pop(2)
0x1a5: Push((int) -1)
0x1a6: Push("player_desc")
0x1a7: @ SendMessage(Stack[-2], Stack[-1])
0x1a8: Pop(2)
0x1a9: Return(); Pop(0)

0x1aa: GOTO 0x217

0x1ab: Push("burah")
0x1ac: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1ad: IF (Stack[-1] == 0) GOTO 0x1ce; Pop(1)

0x1ae: Push((int) 0)
0x1af: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1b0: IF (Stack[-1] == 0) GOTO 0x1b5; Pop(1)

0x1b1: Stack[2 + Tasks[-1].StackPointer] = (int)2
0x1b2: @ StopEventProcessing()
0x1b3: Pop(0)
0x1b4: GOTO 0x1cc

0x1b5: Push((int) 1)
0x1b6: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1b7: IF (Stack[-1] == 0) GOTO 0x1c1; Pop(1)

0x1b8: Push((int) 205)
0x1b9: Push("player_name")
0x1ba: @ SendMessage(Stack[-2], Stack[-1])
0x1bb: Pop(2)
0x1bc: Push((int) 206)
0x1bd: Push("player_desc")
0x1be: @ SendMessage(Stack[-2], Stack[-1])
0x1bf: Pop(2)
0x1c0: GOTO 0x1cc

0x1c1: Push((int) 2)
0x1c2: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1c3: IF (Stack[-1] == 0) GOTO 0x1cc; Pop(1)

0x1c4: Push((int) -1)
0x1c5: Push("player_name")
0x1c6: @ SendMessage(Stack[-2], Stack[-1])
0x1c7: Pop(2)
0x1c8: Push((int) -1)
0x1c9: Push("player_desc")
0x1ca: @ SendMessage(Stack[-2], Stack[-1])
0x1cb: Pop(2)
0x1cc: Return(); Pop(0)

0x1cd: GOTO 0x217

0x1ce: Push("klara")
0x1cf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1d0: IF (Stack[-1] == 0) GOTO 0x1ef; Pop(1)

0x1d1: Push((int) 0)
0x1d2: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1d3: IF (Stack[-1] == 0) GOTO 0x1d6; Pop(1)

0x1d4: Return(); Pop(0)

0x1d5: GOTO 0x1ed

0x1d6: Push((int) 1)
0x1d7: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1d8: IF (Stack[-1] == 0) GOTO 0x1e2; Pop(1)

0x1d9: Push((int) 208)
0x1da: Push("player_name")
0x1db: @ SendMessage(Stack[-2], Stack[-1])
0x1dc: Pop(2)
0x1dd: Push((int) 209)
0x1de: Push("player_desc")
0x1df: @ SendMessage(Stack[-2], Stack[-1])
0x1e0: Pop(2)
0x1e1: GOTO 0x1ed

0x1e2: Push((int) 2)
0x1e3: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1e4: IF (Stack[-1] == 0) GOTO 0x1ed; Pop(1)

0x1e5: Push((int) -1)
0x1e6: Push("player_name")
0x1e7: @ SendMessage(Stack[-2], Stack[-1])
0x1e8: Pop(2)
0x1e9: Push((int) -1)
0x1ea: Push("player_desc")
0x1eb: @ SendMessage(Stack[-2], Stack[-1])
0x1ec: Pop(2)
0x1ed: Return(); Pop(0)

0x1ee: GOTO 0x217

0x1ef: Push("load")
0x1f0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1f1: IF (Stack[-1] == 0) GOTO 0x200; Pop(1)

0x1f2: Push((int) 0)
0x1f3: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1f4: IF (Stack[-1] == 0) GOTO 0x1fb; Pop(1)

0x1f5: Stack[2 + Tasks[-1].StackPointer] = (int)4
0x1f6: @@ GetFileName(Stack[-10])
0x1f7: Pop(0)
0x1f8: @ StopEventProcessing()
0x1f9: Pop(0)
0x1fa: GOTO 0x1fe

0x1fb: PushEmpty()
0x1fc: Call2 0x218

0x1fd: Pop(0)
0x1fe: Return(); Pop(0)

0x1ff: GOTO 0x217

0x200: Push("save")
0x201: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x202: IF (Stack[-1] == 0) GOTO 0x210; Pop(1)

0x203: Push((int) 0)
0x204: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x205: IF (Stack[-1] == 0) GOTO 0x20b; Pop(1)

0x206: Stack[2 + Tasks[-1].StackPointer] = (int)5
0x207: Stack[9 + Tasks[-1].StackPointer] = Stack[-1]
0x208: @ StopEventProcessing()
0x209: Pop(0)
0x20a: GOTO 0x20e

0x20b: PushEmpty()
0x20c: Call2 0x218

0x20d: Pop(0)
0x20e: Return(); Pop(0)

0x20f: GOTO 0x217

0x210: Push("options")
0x211: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x212: IF (Stack[-1] == 0) GOTO 0x217; Pop(1)

0x213: PushEmpty()
0x214: Call2 0x218

0x215: Pop(0)
0x216: Return(); Pop(0)

0x217: Return(); Pop(0)

0x218: PushEmpty()
0x219: Call2 0x224

0x21a: Pop(0)
0x21b: PushEmpty(object)
0x21c: Call2 0x68

0x21d: Stack[3 + Tasks[-1].StackPointer] = Stack[-1]
0x21e: Pop(1)
0x21f: PushEmpty(object)
0x220: Call2 0x70

0x221: Stack[4 + Tasks[-1].StackPointer] = Stack[-1]
0x222: Pop(1)
0x223: Return(); Pop(0)

0x224: Push( Stack[3 + Tasks[-1].StackPointer] )
0x225: IF (Stack[-1] == 0) GOTO 0x228; Pop(1)

0x226: @@ DestroyWindow()
0x227: Pop(0)
0x228: Push( Stack[4 + Tasks[-1].StackPointer] )
0x229: IF (Stack[-1] == 0) GOTO 0x22c; Pop(1)

0x22a: @@ DestroyWindow()
0x22b: Pop(0)
0x22c: Push( Stack[5 + Tasks[-1].StackPointer] )
0x22d: IF (Stack[-1] == 0) GOTO 0x230; Pop(1)

0x22e: @@ DestroyWindow()
0x22f: Pop(0)
0x230: Push( Stack[6 + Tasks[-1].StackPointer] )
0x231: IF (Stack[-1] == 0) GOTO 0x234; Pop(1)

0x232: @@ DestroyWindow()
0x233: Pop(0)
0x234: Push( Stack[7 + Tasks[-1].StackPointer] )
0x235: IF (Stack[-1] == 0) GOTO 0x238; Pop(1)

0x236: @@ DestroyWindow()
0x237: Pop(0)
0x238: Push( Stack[8 + Tasks[-1].StackPointer] )
0x239: IF (Stack[-1] == 0) GOTO 0x23c; Pop(1)

0x23a: @@ DestroyWindow()
0x23b: Pop(0)
0x23c: @ CaptureKeyboard()
0x23d: Pop(0)
0x23e: Return(); Pop(0)

0x23f: PushEmpty()
0x240: Stack[3 + Tasks[-1].StackPointer] = Stack[-1]
0x241: @ GetStringByID(Stack[-4], Stack[-2])
0x242: Pop(0)
0x243: Push((bool) 1)
0x244: @ SetOwnerDraw(Stack[-1])
0x245: Pop(1)
0x246: Push((bool) 0)
0x247: @ ShowCursor(Stack[-1])
0x248: Pop(1)
0x249: @ CaptureKeyboard()
0x24a: Pop(0)
0x24b: @ GetWindowSize(Stack[-1], Stack[-2])
0x24c: Pop(0)
0x24d: @ LoadVideo(Stack[-3])
0x24e: Pop(0)
0x24f: @ FindVideo(Stack[-0], Stack[-3])
0x250: Pop(0)
0x251: Push((bool) 0)
0x252: @@ Play(Stack[-1])
0x253: Pop(1)
0x254: @ ProcessEvents()
0x255: Pop(0)
0x256: Push((bool) 0)
0x257: @ SetOwnerDraw(Stack[-1])
0x258: Pop(1)
0x259: Push((bool) 1)
0x25a: @ ShowCursor(Stack[-1])
0x25b: Pop(1)
0x25c: @ ReleaseVideo(Stack[-3])
0x25d: Pop(0)
0x25e: Return(); Pop(0)

0x25f: PushEmpty(bool, bool, bool, int, int, int, bool, bool, bool, int, int, int)
0x260: @@ IsLost(Stack[-6])
0x261: Pop(0)
0x262: Push(Stack[-6])
0x263: IF (Stack[-1] == 0) GOTO 0x269; Pop(1)

0x264: @@ Restore(Stack[-5])
0x265: Pop(0)
0x266: Pop(0); Push((bool) Stack[-5] == 0)
0x267: IF (Stack[-1] == 0) GOTO 0x269; Pop(1)

0x268: Return(); Pop(12)

0x269: @@ IsPlaying(Stack[-4])
0x26a: Pop(0)
0x26b: Push(Stack[-4])
0x26c: IF (Stack[-1] == 0) GOTO 0x28a; Pop(1)

0x26d: Push((int) 0)
0x26e: Push((int) 0)
0x26f: @@ StretchBlit(Stack[-2], Stack[-1], Stack[-1], Stack[-2])
0x270: Pop(2)
0x271: @ GetWindowSize(Stack[-3], Stack[-2])
0x272: Pop(0)
0x273: Push("default")
0x274: Push((int) 2)
0x275: Pop(1); Push(Stack[-5] * Stack[-1]);
0x276: Push((int) 3)
0x277: Pop(2); Push(Stack[-2] / Stack[-1]);
0x278: @ GetTextHeightInWidth(Stack[-3], Stack[-2], Stack[-1], Stack[-4])
0x279: Pop(2)
0x27a: Push("default")
0x27b: Push((int) 6)
0x27c: Pop(1); Push(Stack[-5] / Stack[-1]);
0x27d: Pop(0); Push(Stack[-4] - Stack[-3]);
0x27e: Push((int) 2)
0x27f: Pop(2); Push(Stack[-2] / Stack[-1]);
0x280: Push((int) 2)
0x281: Pop(1); Push(Stack[-7] * Stack[-1]);
0x282: Push((int) 3)
0x283: Pop(2); Push(Stack[-2] / Stack[-1]);
0x284: Push((int) 1)
0x285: Push((int) 1)
0x286: Push((int) 1)
0x287: @ PrintInWidth(Stack[-8], Stack[-7], Stack[-6], Stack[-5], Stack[-4], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x288: Pop(7)
0x289: GOTO 0x290

0x28a: Push((int) 0)
0x28b: Push((int) 0)
0x28c: @@ StretchBlit(Stack[-2], Stack[-1], Stack[-1], Stack[-2])
0x28d: Pop(2)
0x28e: @ StopEventProcessing()
0x28f: Pop(0)
0x290: Return(); Pop(12)

0x291: PushEmpty()
0x292: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x293: IF (Stack[-1] == 0) GOTO 0x295; Pop(1)

0x294: Return(); Pop(0)

0x295: @ StopEventProcessing()
0x296: Pop(0)
0x297: @@ Stop()
0x298: Pop(0)
0x299: Return(); Pop(0)

