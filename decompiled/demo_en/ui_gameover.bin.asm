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

RunOp = 0x55
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object, int, int, bool) Params = 2
		EVENT_0 Op = 0x1e Vars = ()
		EVENT_101 Op = 0x38 Vars = (int)
	GTASK_1 Vars = (object) Params = 1
		EVENT_200 Op = 0x4c Vars = (int, string, object)
	GTASK_2 Vars = (int, int, int, object, object, object, object, object, object, object, string, object) Params = 0
		EVENT_100 Op = 0x12b Vars = (int)
		EVENT_200 Op = 0x133 Vars = (int, string, object)


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
0x5c: Stack[-2] = "death.wmv"
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
0x77: PushEmpty(bool, bool, bool, bool, string, bool, bool, bool, bool, string)
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
0x89: Push(Stack[-11])
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
0x98: Push((int) 131072)
0x99: Push("klara")
0x9a: @ SendMessage(Stack[-2], Stack[-1])
0x9b: Pop(2)
0x9c: Push((int) 131072)
0x9d: Push("danko")
0x9e: @ SendMessage(Stack[-2], Stack[-1])
0x9f: Pop(2)
0xa0: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0xa1: IF (Stack[-1] == 0) GOTO 0xa5; Pop(1)

0xa2: @ ProcessEvents()
0xa3: Pop(0)
0xa4: GOTO 0xa0

0xa5: PushEmpty()
0xa6: Call2 0x223

0xa7: Pop(0)
0xa8: Push((int) 1)
0xa9: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] == Stack[-1])
0xaa: IF (Stack[-1] == 0) GOTO 0xc2; Pop(1)

0xab: Push("menumusic")
0xac: @ PauseSound(Stack[-1])
0xad: Pop(1)
0xae: PushEmpty(int)
0xaf: Stack[-1] = (int) 1
0xb0: Push(-1, 1); TaskCall(1)
0xb1: Call2 0x41

0xb2: Pop(-1, 1); TaskReturn
0xb3: Pop(1)
0xb4: PushEmpty(string, bool)
0xb5: Stack[-2] = "intro_danko.wmv"
0xb6: Stack[-1] = (bool) 1
0xb7: Push(-2, 4); TaskCall(0)
0xb8: Call2 0x0

0xb9: Pop(-2, 4); TaskReturn
0xba: Pop(2)
0xbb: @ RemoveWorld()
0xbc: Pop(0)
0xbd: @ UISync()
0xbe: Pop(0)
0xbf: @ DestroyWindow()
0xc0: Pop(0)
0xc1: GOTO 0x12a

0xc2: Push((int) 2)
0xc3: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] == Stack[-1])
0xc4: IF (Stack[-1] == 0) GOTO 0xdf; Pop(1)

0xc5: Push("menumusic")
0xc6: @ PauseSound(Stack[-1])
0xc7: Pop(1)
0xc8: PushEmpty(int)
0xc9: Stack[-1] = (int) 2
0xca: Push(-1, 1); TaskCall(1)
0xcb: Call2 0x41

0xcc: Pop(-1, 1); TaskReturn
0xcd: Pop(1)
0xce: PushEmpty(string, bool)
0xcf: Stack[-2] = "intro_burah.wmv"
0xd0: Stack[-1] = (bool) 1
0xd1: Push(-2, 4); TaskCall(0)
0xd2: Call2 0x0

0xd3: Pop(-2, 4); TaskReturn
0xd4: Pop(2)
0xd5: @ RemoveWorld()
0xd6: Pop(0)
0xd7: @ UISync()
0xd8: Pop(0)
0xd9: @ DestroyWindow()
0xda: Pop(0)
0xdb: Push("demo_save")
0xdc: @ LoadGame(Stack[-6], Stack[-1])
0xdd: Pop(1)
0xde: GOTO 0x12a

0xdf: Push((int) 3)
0xe0: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] == Stack[-1])
0xe1: IF (Stack[-1] == 0) GOTO 0xf9; Pop(1)

0xe2: Push("menumusic")
0xe3: @ PauseSound(Stack[-1])
0xe4: Pop(1)
0xe5: PushEmpty(int)
0xe6: Stack[-1] = (int) 3
0xe7: Push(-1, 1); TaskCall(1)
0xe8: Call2 0x41

0xe9: Pop(-1, 1); TaskReturn
0xea: Pop(1)
0xeb: PushEmpty(string, bool)
0xec: Stack[-2] = "intro_klara.wmv"
0xed: Stack[-1] = (bool) 1
0xee: Push(-2, 4); TaskCall(0)
0xef: Call2 0x0

0xf0: Pop(-2, 4); TaskReturn
0xf1: Pop(2)
0xf2: @ RemoveWorld()
0xf3: Pop(0)
0xf4: @ UISync()
0xf5: Pop(0)
0xf6: @ DestroyWindow()
0xf7: Pop(0)
0xf8: GOTO 0x12a

0xf9: Push((int) 4)
0xfa: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] == Stack[-1])
0xfb: IF (Stack[-1] == 0) GOTO 0x10c; Pop(1)

0xfc: Push("menumusic")
0xfd: @ PauseSound(Stack[-1])
0xfe: Pop(1)
0xff: Push("Loading : ")
0x100: Pop(1); Push(Stack[-1] + Stack[10 + StackPtr]);
0x101: @ Trace(Stack[-1])
0x102: Pop(1)
0x103: @ RemoveWorld()
0x104: Pop(0)
0x105: @ UISync()
0x106: Pop(0)
0x107: @ DestroyWindow()
0x108: Pop(0)
0x109: @ LoadGame(Stack[-4], Stack[-10])
0x10a: Pop(0)
0x10b: GOTO 0x12a

0x10c: Push((int) 5)
0x10d: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] == Stack[-1])
0x10e: IF (Stack[-1] == 0) GOTO 0x11d; Pop(1)

0x10f: Pop(0); Push((bool) Stack[9 + Tasks[-1].StackPointer] == 0)
0x110: IF (Stack[-1] == 0) GOTO 0x116; Pop(1)

0x111: @ DestroyWindow()
0x112: Pop(0)
0x113: @ SaveGame(Stack[-3])
0x114: Pop(0)
0x115: GOTO 0x11c

0x116: @ DestroyWindow()
0x117: Pop(0)
0x118: @@ GetFileName(Stack[-1])
0x119: Pop(0)
0x11a: @ SaveGame(Stack[-2], Stack[-1])
0x11b: Pop(0)
0x11c: GOTO 0x12a

0x11d: Push((int) 7)
0x11e: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] == Stack[-1])
0x11f: IF (Stack[-1] == 0) GOTO 0x12a; Pop(1)

0x120: @ RemoveWorld()
0x121: Pop(0)
0x122: @ UISync()
0x123: Pop(0)
0x124: @ DestroyWindow()
0x125: Pop(0)
0x126: Push("world_intro.xml")
0x127: Push("player_intro.xml")
0x128: @ NewGame(Stack[-2], Stack[-1])
0x129: Pop(2)
0x12a: Return(); Pop(10)

0x12b: PushEmpty()
0x12c: Push((int) 27)
0x12d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x12e: IF (Stack[-1] == 0) GOTO 0x132; Pop(1)

0x12f: PushEmpty()
0x130: Call2 0x217

0x131: Pop(0)
0x132: Return(); Pop(0)

0x133: PushEmpty()
0x134: Push("newgame")
0x135: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x136: IF (Stack[-1] == 0) GOTO 0x13b; Pop(1)

0x137: Stack[2 + Tasks[-1].StackPointer] = (int)7
0x138: @ StopEventProcessing()
0x139: Pop(0)
0x13a: GOTO 0x216

0x13b: Push("quitgame")
0x13c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x13d: IF (Stack[-1] == 0) GOTO 0x145; Pop(1)

0x13e: Push("Quit game")
0x13f: @ UITrace(Stack[-1])
0x140: Pop(1)
0x141: @ Quit()
0x142: Pop(0)
0x143: Return(); Pop(0)

0x144: GOTO 0x216

0x145: Push("loadgame")
0x146: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x147: IF (Stack[-1] == 0) GOTO 0x151; Pop(1)

0x148: PushEmpty()
0x149: Call2 0x223

0x14a: Pop(0)
0x14b: Push("load.xml")
0x14c: Push((bool) 0)
0x14d: @ CreateWindow(Stack[-2], Stack[-1], Stack[-6])
0x14e: Pop(2)
0x14f: Return(); Pop(0)

0x150: GOTO 0x216

0x151: Push("savegame")
0x152: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x153: IF (Stack[-1] == 0) GOTO 0x15d; Pop(1)

0x154: PushEmpty()
0x155: Call2 0x223

0x156: Pop(0)
0x157: Push("save.xml")
0x158: Push((bool) 0)
0x159: @ CreateWindow(Stack[-2], Stack[-1], Stack[-7])
0x15a: Pop(2)
0x15b: Return(); Pop(0)

0x15c: GOTO 0x216

0x15d: Push("gameoptions")
0x15e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x15f: IF (Stack[-1] == 0) GOTO 0x169; Pop(1)

0x160: PushEmpty()
0x161: Call2 0x223

0x162: Pop(0)
0x163: Push("options.xml")
0x164: Push((bool) 0)
0x165: @ CreateWindow(Stack[-2], Stack[-1], Stack[-8])
0x166: Pop(2)
0x167: Return(); Pop(0)

0x168: GOTO 0x216

0x169: Push("continue")
0x16a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x16b: IF (Stack[-1] == 0) GOTO 0x171; Pop(1)

0x16c: Stack[2 + Tasks[-1].StackPointer] = (int)6
0x16d: @ StopEventProcessing()
0x16e: Pop(0)
0x16f: Return(); Pop(0)

0x170: GOTO 0x216

0x171: Push("credits")
0x172: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x173: IF (Stack[-1] == 0) GOTO 0x189; Pop(1)

0x174: PushEmpty()
0x175: Call2 0x223

0x176: Pop(0)
0x177: PushEmpty(int)
0x178: Stack[-1] = (int) 8
0x179: Push(-1, 1); TaskCall(1)
0x17a: Call2 0x41

0x17b: Pop(-1, 1); TaskReturn
0x17c: Pop(1)
0x17d: PushEmpty(object)
0x17e: Call2 0x67

0x17f: Stack[3 + Tasks[-1].StackPointer] = Stack[-1]
0x180: Pop(1)
0x181: PushEmpty(object)
0x182: Call2 0x6f

0x183: Stack[4 + Tasks[-1].StackPointer] = Stack[-1]
0x184: Pop(1)
0x185: Push((bool) 1)
0x186: @ ShowCursor(Stack[-1])
0x187: Pop(1)
0x188: GOTO 0x216

0x189: Push("danko")
0x18a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x18b: IF (Stack[-1] == 0) GOTO 0x1aa; Pop(1)

0x18c: Push((int) 0)
0x18d: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x18e: IF (Stack[-1] == 0) GOTO 0x191; Pop(1)

0x18f: Return(); Pop(0)

0x190: GOTO 0x1a8

0x191: Push((int) 1)
0x192: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x193: IF (Stack[-1] == 0) GOTO 0x19d; Pop(1)

0x194: Push((int) 202)
0x195: Push("player_name")
0x196: @ SendMessage(Stack[-2], Stack[-1])
0x197: Pop(2)
0x198: Push((int) 203)
0x199: Push("player_desc")
0x19a: @ SendMessage(Stack[-2], Stack[-1])
0x19b: Pop(2)
0x19c: GOTO 0x1a8

0x19d: Push((int) 2)
0x19e: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x19f: IF (Stack[-1] == 0) GOTO 0x1a8; Pop(1)

0x1a0: Push((int) -1)
0x1a1: Push("player_name")
0x1a2: @ SendMessage(Stack[-2], Stack[-1])
0x1a3: Pop(2)
0x1a4: Push((int) -1)
0x1a5: Push("player_desc")
0x1a6: @ SendMessage(Stack[-2], Stack[-1])
0x1a7: Pop(2)
0x1a8: Return(); Pop(0)

0x1a9: GOTO 0x216

0x1aa: Push("burah")
0x1ab: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1ac: IF (Stack[-1] == 0) GOTO 0x1cd; Pop(1)

0x1ad: Push((int) 0)
0x1ae: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1af: IF (Stack[-1] == 0) GOTO 0x1b4; Pop(1)

0x1b0: Stack[2 + Tasks[-1].StackPointer] = (int)2
0x1b1: @ StopEventProcessing()
0x1b2: Pop(0)
0x1b3: GOTO 0x1cb

0x1b4: Push((int) 1)
0x1b5: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1b6: IF (Stack[-1] == 0) GOTO 0x1c0; Pop(1)

0x1b7: Push((int) 205)
0x1b8: Push("player_name")
0x1b9: @ SendMessage(Stack[-2], Stack[-1])
0x1ba: Pop(2)
0x1bb: Push((int) 206)
0x1bc: Push("player_desc")
0x1bd: @ SendMessage(Stack[-2], Stack[-1])
0x1be: Pop(2)
0x1bf: GOTO 0x1cb

0x1c0: Push((int) 2)
0x1c1: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1c2: IF (Stack[-1] == 0) GOTO 0x1cb; Pop(1)

0x1c3: Push((int) -1)
0x1c4: Push("player_name")
0x1c5: @ SendMessage(Stack[-2], Stack[-1])
0x1c6: Pop(2)
0x1c7: Push((int) -1)
0x1c8: Push("player_desc")
0x1c9: @ SendMessage(Stack[-2], Stack[-1])
0x1ca: Pop(2)
0x1cb: Return(); Pop(0)

0x1cc: GOTO 0x216

0x1cd: Push("klara")
0x1ce: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1cf: IF (Stack[-1] == 0) GOTO 0x1ee; Pop(1)

0x1d0: Push((int) 0)
0x1d1: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1d2: IF (Stack[-1] == 0) GOTO 0x1d5; Pop(1)

0x1d3: Return(); Pop(0)

0x1d4: GOTO 0x1ec

0x1d5: Push((int) 1)
0x1d6: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1d7: IF (Stack[-1] == 0) GOTO 0x1e1; Pop(1)

0x1d8: Push((int) 208)
0x1d9: Push("player_name")
0x1da: @ SendMessage(Stack[-2], Stack[-1])
0x1db: Pop(2)
0x1dc: Push((int) 209)
0x1dd: Push("player_desc")
0x1de: @ SendMessage(Stack[-2], Stack[-1])
0x1df: Pop(2)
0x1e0: GOTO 0x1ec

0x1e1: Push((int) 2)
0x1e2: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1e3: IF (Stack[-1] == 0) GOTO 0x1ec; Pop(1)

0x1e4: Push((int) -1)
0x1e5: Push("player_name")
0x1e6: @ SendMessage(Stack[-2], Stack[-1])
0x1e7: Pop(2)
0x1e8: Push((int) -1)
0x1e9: Push("player_desc")
0x1ea: @ SendMessage(Stack[-2], Stack[-1])
0x1eb: Pop(2)
0x1ec: Return(); Pop(0)

0x1ed: GOTO 0x216

0x1ee: Push("load")
0x1ef: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1f0: IF (Stack[-1] == 0) GOTO 0x1ff; Pop(1)

0x1f1: Push((int) 0)
0x1f2: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1f3: IF (Stack[-1] == 0) GOTO 0x1fa; Pop(1)

0x1f4: Stack[2 + Tasks[-1].StackPointer] = (int)4
0x1f5: @@ GetFileName(Stack[-10])
0x1f6: Pop(0)
0x1f7: @ StopEventProcessing()
0x1f8: Pop(0)
0x1f9: GOTO 0x1fd

0x1fa: PushEmpty()
0x1fb: Call2 0x217

0x1fc: Pop(0)
0x1fd: Return(); Pop(0)

0x1fe: GOTO 0x216

0x1ff: Push("save")
0x200: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x201: IF (Stack[-1] == 0) GOTO 0x20f; Pop(1)

0x202: Push((int) 0)
0x203: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x204: IF (Stack[-1] == 0) GOTO 0x20a; Pop(1)

0x205: Stack[2 + Tasks[-1].StackPointer] = (int)5
0x206: Stack[9 + Tasks[-1].StackPointer] = Stack[-1]
0x207: @ StopEventProcessing()
0x208: Pop(0)
0x209: GOTO 0x20d

0x20a: PushEmpty()
0x20b: Call2 0x217

0x20c: Pop(0)
0x20d: Return(); Pop(0)

0x20e: GOTO 0x216

0x20f: Push("options")
0x210: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x211: IF (Stack[-1] == 0) GOTO 0x216; Pop(1)

0x212: PushEmpty()
0x213: Call2 0x217

0x214: Pop(0)
0x215: Return(); Pop(0)

0x216: Return(); Pop(0)

0x217: PushEmpty()
0x218: Call2 0x223

0x219: Pop(0)
0x21a: PushEmpty(object)
0x21b: Call2 0x67

0x21c: Stack[3 + Tasks[-1].StackPointer] = Stack[-1]
0x21d: Pop(1)
0x21e: PushEmpty(object)
0x21f: Call2 0x6f

0x220: Stack[4 + Tasks[-1].StackPointer] = Stack[-1]
0x221: Pop(1)
0x222: Return(); Pop(0)

0x223: Push( Stack[3 + Tasks[-1].StackPointer] )
0x224: IF (Stack[-1] == 0) GOTO 0x227; Pop(1)

0x225: @@ DestroyWindow()
0x226: Pop(0)
0x227: Push( Stack[4 + Tasks[-1].StackPointer] )
0x228: IF (Stack[-1] == 0) GOTO 0x22b; Pop(1)

0x229: @@ DestroyWindow()
0x22a: Pop(0)
0x22b: Push( Stack[5 + Tasks[-1].StackPointer] )
0x22c: IF (Stack[-1] == 0) GOTO 0x22f; Pop(1)

0x22d: @@ DestroyWindow()
0x22e: Pop(0)
0x22f: Push( Stack[6 + Tasks[-1].StackPointer] )
0x230: IF (Stack[-1] == 0) GOTO 0x233; Pop(1)

0x231: @@ DestroyWindow()
0x232: Pop(0)
0x233: Push( Stack[7 + Tasks[-1].StackPointer] )
0x234: IF (Stack[-1] == 0) GOTO 0x237; Pop(1)

0x235: @@ DestroyWindow()
0x236: Pop(0)
0x237: Push( Stack[8 + Tasks[-1].StackPointer] )
0x238: IF (Stack[-1] == 0) GOTO 0x23b; Pop(1)

0x239: @@ DestroyWindow()
0x23a: Pop(0)
0x23b: @ CaptureKeyboard()
0x23c: Pop(0)
0x23d: Return(); Pop(0)

