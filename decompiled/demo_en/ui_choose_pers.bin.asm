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
	SetCursor (1 args)
	SetBackground (1 args)
	PlaySound (1 args)
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
		EVENT_100 Op = 0x11e Vars = (int)
		EVENT_200 Op = 0x126 Vars = (int, string, object)


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
0x6a: PushEmpty(bool, bool, bool, bool, string, bool, bool, bool, bool, string)
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
0x7c: Push(Stack[-11])
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
0x8b: Push((int) 131072)
0x8c: Push("klara")
0x8d: @ SendMessage(Stack[-2], Stack[-1])
0x8e: Pop(2)
0x8f: Push((int) 131072)
0x90: Push("danko")
0x91: @ SendMessage(Stack[-2], Stack[-1])
0x92: Pop(2)
0x93: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x94: IF (Stack[-1] == 0) GOTO 0x98; Pop(1)

0x95: @ ProcessEvents()
0x96: Pop(0)
0x97: GOTO 0x93

0x98: PushEmpty()
0x99: Call2 0x216

0x9a: Pop(0)
0x9b: Push((int) 1)
0x9c: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] == Stack[-1])
0x9d: IF (Stack[-1] == 0) GOTO 0xb5; Pop(1)

0x9e: Push("menumusic")
0x9f: @ PauseSound(Stack[-1])
0xa0: Pop(1)
0xa1: PushEmpty(int)
0xa2: Stack[-1] = (int) 1
0xa3: Push(-1, 1); TaskCall(1)
0xa4: Call2 0x41

0xa5: Pop(-1, 1); TaskReturn
0xa6: Pop(1)
0xa7: PushEmpty(string, bool)
0xa8: Stack[-2] = "intro_danko.wmv"
0xa9: Stack[-1] = (bool) 1
0xaa: Push(-2, 4); TaskCall(0)
0xab: Call2 0x0

0xac: Pop(-2, 4); TaskReturn
0xad: Pop(2)
0xae: @ RemoveWorld()
0xaf: Pop(0)
0xb0: @ UISync()
0xb1: Pop(0)
0xb2: @ DestroyWindow()
0xb3: Pop(0)
0xb4: GOTO 0x11d

0xb5: Push((int) 2)
0xb6: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] == Stack[-1])
0xb7: IF (Stack[-1] == 0) GOTO 0xd2; Pop(1)

0xb8: Push("menumusic")
0xb9: @ PauseSound(Stack[-1])
0xba: Pop(1)
0xbb: PushEmpty(int)
0xbc: Stack[-1] = (int) 2
0xbd: Push(-1, 1); TaskCall(1)
0xbe: Call2 0x41

0xbf: Pop(-1, 1); TaskReturn
0xc0: Pop(1)
0xc1: PushEmpty(string, bool)
0xc2: Stack[-2] = "intro_burah.wmv"
0xc3: Stack[-1] = (bool) 1
0xc4: Push(-2, 4); TaskCall(0)
0xc5: Call2 0x0

0xc6: Pop(-2, 4); TaskReturn
0xc7: Pop(2)
0xc8: @ RemoveWorld()
0xc9: Pop(0)
0xca: @ UISync()
0xcb: Pop(0)
0xcc: @ DestroyWindow()
0xcd: Pop(0)
0xce: Push("demo_save")
0xcf: @ LoadGame(Stack[-6], Stack[-1])
0xd0: Pop(1)
0xd1: GOTO 0x11d

0xd2: Push((int) 3)
0xd3: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] == Stack[-1])
0xd4: IF (Stack[-1] == 0) GOTO 0xec; Pop(1)

0xd5: Push("menumusic")
0xd6: @ PauseSound(Stack[-1])
0xd7: Pop(1)
0xd8: PushEmpty(int)
0xd9: Stack[-1] = (int) 3
0xda: Push(-1, 1); TaskCall(1)
0xdb: Call2 0x41

0xdc: Pop(-1, 1); TaskReturn
0xdd: Pop(1)
0xde: PushEmpty(string, bool)
0xdf: Stack[-2] = "intro_klara.wmv"
0xe0: Stack[-1] = (bool) 1
0xe1: Push(-2, 4); TaskCall(0)
0xe2: Call2 0x0

0xe3: Pop(-2, 4); TaskReturn
0xe4: Pop(2)
0xe5: @ RemoveWorld()
0xe6: Pop(0)
0xe7: @ UISync()
0xe8: Pop(0)
0xe9: @ DestroyWindow()
0xea: Pop(0)
0xeb: GOTO 0x11d

0xec: Push((int) 4)
0xed: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] == Stack[-1])
0xee: IF (Stack[-1] == 0) GOTO 0xff; Pop(1)

0xef: Push("menumusic")
0xf0: @ PauseSound(Stack[-1])
0xf1: Pop(1)
0xf2: Push("Loading : ")
0xf3: Pop(1); Push(Stack[-1] + Stack[10 + StackPtr]);
0xf4: @ Trace(Stack[-1])
0xf5: Pop(1)
0xf6: @ RemoveWorld()
0xf7: Pop(0)
0xf8: @ UISync()
0xf9: Pop(0)
0xfa: @ DestroyWindow()
0xfb: Pop(0)
0xfc: @ LoadGame(Stack[-4], Stack[-10])
0xfd: Pop(0)
0xfe: GOTO 0x11d

0xff: Push((int) 5)
0x100: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] == Stack[-1])
0x101: IF (Stack[-1] == 0) GOTO 0x110; Pop(1)

0x102: Pop(0); Push((bool) Stack[9 + Tasks[-1].StackPointer] == 0)
0x103: IF (Stack[-1] == 0) GOTO 0x109; Pop(1)

0x104: @ DestroyWindow()
0x105: Pop(0)
0x106: @ SaveGame(Stack[-3])
0x107: Pop(0)
0x108: GOTO 0x10f

0x109: @ DestroyWindow()
0x10a: Pop(0)
0x10b: @@ GetFileName(Stack[-1])
0x10c: Pop(0)
0x10d: @ SaveGame(Stack[-2], Stack[-1])
0x10e: Pop(0)
0x10f: GOTO 0x11d

0x110: Push((int) 7)
0x111: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] == Stack[-1])
0x112: IF (Stack[-1] == 0) GOTO 0x11d; Pop(1)

0x113: @ RemoveWorld()
0x114: Pop(0)
0x115: @ UISync()
0x116: Pop(0)
0x117: @ DestroyWindow()
0x118: Pop(0)
0x119: Push("world_intro.xml")
0x11a: Push("player_intro.xml")
0x11b: @ NewGame(Stack[-2], Stack[-1])
0x11c: Pop(2)
0x11d: Return(); Pop(10)

0x11e: PushEmpty()
0x11f: Push((int) 27)
0x120: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x121: IF (Stack[-1] == 0) GOTO 0x125; Pop(1)

0x122: PushEmpty()
0x123: Call2 0x20a

0x124: Pop(0)
0x125: Return(); Pop(0)

0x126: PushEmpty()
0x127: Push("newgame")
0x128: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x129: IF (Stack[-1] == 0) GOTO 0x12e; Pop(1)

0x12a: Stack[2 + Tasks[-1].StackPointer] = (int)7
0x12b: @ StopEventProcessing()
0x12c: Pop(0)
0x12d: GOTO 0x209

0x12e: Push("quitgame")
0x12f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x130: IF (Stack[-1] == 0) GOTO 0x138; Pop(1)

0x131: Push("Quit game")
0x132: @ UITrace(Stack[-1])
0x133: Pop(1)
0x134: @ Quit()
0x135: Pop(0)
0x136: Return(); Pop(0)

0x137: GOTO 0x209

0x138: Push("loadgame")
0x139: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x13a: IF (Stack[-1] == 0) GOTO 0x144; Pop(1)

0x13b: PushEmpty()
0x13c: Call2 0x216

0x13d: Pop(0)
0x13e: Push("load.xml")
0x13f: Push((bool) 0)
0x140: @ CreateWindow(Stack[-2], Stack[-1], Stack[-6])
0x141: Pop(2)
0x142: Return(); Pop(0)

0x143: GOTO 0x209

0x144: Push("savegame")
0x145: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x146: IF (Stack[-1] == 0) GOTO 0x150; Pop(1)

0x147: PushEmpty()
0x148: Call2 0x216

0x149: Pop(0)
0x14a: Push("save.xml")
0x14b: Push((bool) 0)
0x14c: @ CreateWindow(Stack[-2], Stack[-1], Stack[-7])
0x14d: Pop(2)
0x14e: Return(); Pop(0)

0x14f: GOTO 0x209

0x150: Push("gameoptions")
0x151: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x152: IF (Stack[-1] == 0) GOTO 0x15c; Pop(1)

0x153: PushEmpty()
0x154: Call2 0x216

0x155: Pop(0)
0x156: Push("options.xml")
0x157: Push((bool) 0)
0x158: @ CreateWindow(Stack[-2], Stack[-1], Stack[-8])
0x159: Pop(2)
0x15a: Return(); Pop(0)

0x15b: GOTO 0x209

0x15c: Push("continue")
0x15d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x15e: IF (Stack[-1] == 0) GOTO 0x164; Pop(1)

0x15f: Stack[2 + Tasks[-1].StackPointer] = (int)6
0x160: @ StopEventProcessing()
0x161: Pop(0)
0x162: Return(); Pop(0)

0x163: GOTO 0x209

0x164: Push("credits")
0x165: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x166: IF (Stack[-1] == 0) GOTO 0x17c; Pop(1)

0x167: PushEmpty()
0x168: Call2 0x216

0x169: Pop(0)
0x16a: PushEmpty(int)
0x16b: Stack[-1] = (int) 8
0x16c: Push(-1, 1); TaskCall(1)
0x16d: Call2 0x41

0x16e: Pop(-1, 1); TaskReturn
0x16f: Pop(1)
0x170: PushEmpty(object)
0x171: Call2 0x5a

0x172: Stack[3 + Tasks[-1].StackPointer] = Stack[-1]
0x173: Pop(1)
0x174: PushEmpty(object)
0x175: Call2 0x62

0x176: Stack[4 + Tasks[-1].StackPointer] = Stack[-1]
0x177: Pop(1)
0x178: Push((bool) 1)
0x179: @ ShowCursor(Stack[-1])
0x17a: Pop(1)
0x17b: GOTO 0x209

0x17c: Push("danko")
0x17d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x17e: IF (Stack[-1] == 0) GOTO 0x19d; Pop(1)

0x17f: Push((int) 0)
0x180: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x181: IF (Stack[-1] == 0) GOTO 0x184; Pop(1)

0x182: Return(); Pop(0)

0x183: GOTO 0x19b

0x184: Push((int) 1)
0x185: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x186: IF (Stack[-1] == 0) GOTO 0x190; Pop(1)

0x187: Push((int) 202)
0x188: Push("player_name")
0x189: @ SendMessage(Stack[-2], Stack[-1])
0x18a: Pop(2)
0x18b: Push((int) 203)
0x18c: Push("player_desc")
0x18d: @ SendMessage(Stack[-2], Stack[-1])
0x18e: Pop(2)
0x18f: GOTO 0x19b

0x190: Push((int) 2)
0x191: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x192: IF (Stack[-1] == 0) GOTO 0x19b; Pop(1)

0x193: Push((int) -1)
0x194: Push("player_name")
0x195: @ SendMessage(Stack[-2], Stack[-1])
0x196: Pop(2)
0x197: Push((int) -1)
0x198: Push("player_desc")
0x199: @ SendMessage(Stack[-2], Stack[-1])
0x19a: Pop(2)
0x19b: Return(); Pop(0)

0x19c: GOTO 0x209

0x19d: Push("burah")
0x19e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x19f: IF (Stack[-1] == 0) GOTO 0x1c0; Pop(1)

0x1a0: Push((int) 0)
0x1a1: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1a2: IF (Stack[-1] == 0) GOTO 0x1a7; Pop(1)

0x1a3: Stack[2 + Tasks[-1].StackPointer] = (int)2
0x1a4: @ StopEventProcessing()
0x1a5: Pop(0)
0x1a6: GOTO 0x1be

0x1a7: Push((int) 1)
0x1a8: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1a9: IF (Stack[-1] == 0) GOTO 0x1b3; Pop(1)

0x1aa: Push((int) 205)
0x1ab: Push("player_name")
0x1ac: @ SendMessage(Stack[-2], Stack[-1])
0x1ad: Pop(2)
0x1ae: Push((int) 206)
0x1af: Push("player_desc")
0x1b0: @ SendMessage(Stack[-2], Stack[-1])
0x1b1: Pop(2)
0x1b2: GOTO 0x1be

0x1b3: Push((int) 2)
0x1b4: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1b5: IF (Stack[-1] == 0) GOTO 0x1be; Pop(1)

0x1b6: Push((int) -1)
0x1b7: Push("player_name")
0x1b8: @ SendMessage(Stack[-2], Stack[-1])
0x1b9: Pop(2)
0x1ba: Push((int) -1)
0x1bb: Push("player_desc")
0x1bc: @ SendMessage(Stack[-2], Stack[-1])
0x1bd: Pop(2)
0x1be: Return(); Pop(0)

0x1bf: GOTO 0x209

0x1c0: Push("klara")
0x1c1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1c2: IF (Stack[-1] == 0) GOTO 0x1e1; Pop(1)

0x1c3: Push((int) 0)
0x1c4: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1c5: IF (Stack[-1] == 0) GOTO 0x1c8; Pop(1)

0x1c6: Return(); Pop(0)

0x1c7: GOTO 0x1df

0x1c8: Push((int) 1)
0x1c9: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1ca: IF (Stack[-1] == 0) GOTO 0x1d4; Pop(1)

0x1cb: Push((int) 208)
0x1cc: Push("player_name")
0x1cd: @ SendMessage(Stack[-2], Stack[-1])
0x1ce: Pop(2)
0x1cf: Push((int) 209)
0x1d0: Push("player_desc")
0x1d1: @ SendMessage(Stack[-2], Stack[-1])
0x1d2: Pop(2)
0x1d3: GOTO 0x1df

0x1d4: Push((int) 2)
0x1d5: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1d6: IF (Stack[-1] == 0) GOTO 0x1df; Pop(1)

0x1d7: Push((int) -1)
0x1d8: Push("player_name")
0x1d9: @ SendMessage(Stack[-2], Stack[-1])
0x1da: Pop(2)
0x1db: Push((int) -1)
0x1dc: Push("player_desc")
0x1dd: @ SendMessage(Stack[-2], Stack[-1])
0x1de: Pop(2)
0x1df: Return(); Pop(0)

0x1e0: GOTO 0x209

0x1e1: Push("load")
0x1e2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1e3: IF (Stack[-1] == 0) GOTO 0x1f2; Pop(1)

0x1e4: Push((int) 0)
0x1e5: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1e6: IF (Stack[-1] == 0) GOTO 0x1ed; Pop(1)

0x1e7: Stack[2 + Tasks[-1].StackPointer] = (int)4
0x1e8: @@ GetFileName(Stack[-10])
0x1e9: Pop(0)
0x1ea: @ StopEventProcessing()
0x1eb: Pop(0)
0x1ec: GOTO 0x1f0

0x1ed: PushEmpty()
0x1ee: Call2 0x20a

0x1ef: Pop(0)
0x1f0: Return(); Pop(0)

0x1f1: GOTO 0x209

0x1f2: Push("save")
0x1f3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1f4: IF (Stack[-1] == 0) GOTO 0x202; Pop(1)

0x1f5: Push((int) 0)
0x1f6: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1f7: IF (Stack[-1] == 0) GOTO 0x1fd; Pop(1)

0x1f8: Stack[2 + Tasks[-1].StackPointer] = (int)5
0x1f9: Stack[9 + Tasks[-1].StackPointer] = Stack[-1]
0x1fa: @ StopEventProcessing()
0x1fb: Pop(0)
0x1fc: GOTO 0x200

0x1fd: PushEmpty()
0x1fe: Call2 0x20a

0x1ff: Pop(0)
0x200: Return(); Pop(0)

0x201: GOTO 0x209

0x202: Push("options")
0x203: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x204: IF (Stack[-1] == 0) GOTO 0x209; Pop(1)

0x205: PushEmpty()
0x206: Call2 0x20a

0x207: Pop(0)
0x208: Return(); Pop(0)

0x209: Return(); Pop(0)

0x20a: PushEmpty()
0x20b: Call2 0x216

0x20c: Pop(0)
0x20d: PushEmpty(object)
0x20e: Call2 0x5a

0x20f: Stack[3 + Tasks[-1].StackPointer] = Stack[-1]
0x210: Pop(1)
0x211: PushEmpty(object)
0x212: Call2 0x62

0x213: Stack[4 + Tasks[-1].StackPointer] = Stack[-1]
0x214: Pop(1)
0x215: Return(); Pop(0)

0x216: Push( Stack[3 + Tasks[-1].StackPointer] )
0x217: IF (Stack[-1] == 0) GOTO 0x21a; Pop(1)

0x218: @@ DestroyWindow()
0x219: Pop(0)
0x21a: Push( Stack[4 + Tasks[-1].StackPointer] )
0x21b: IF (Stack[-1] == 0) GOTO 0x21e; Pop(1)

0x21c: @@ DestroyWindow()
0x21d: Pop(0)
0x21e: Push( Stack[5 + Tasks[-1].StackPointer] )
0x21f: IF (Stack[-1] == 0) GOTO 0x222; Pop(1)

0x220: @@ DestroyWindow()
0x221: Pop(0)
0x222: Push( Stack[6 + Tasks[-1].StackPointer] )
0x223: IF (Stack[-1] == 0) GOTO 0x226; Pop(1)

0x224: @@ DestroyWindow()
0x225: Pop(0)
0x226: Push( Stack[7 + Tasks[-1].StackPointer] )
0x227: IF (Stack[-1] == 0) GOTO 0x22a; Pop(1)

0x228: @@ DestroyWindow()
0x229: Pop(0)
0x22a: Push( Stack[8 + Tasks[-1].StackPointer] )
0x22b: IF (Stack[-1] == 0) GOTO 0x22e; Pop(1)

0x22c: @@ DestroyWindow()
0x22d: Pop(0)
0x22e: @ CaptureKeyboard()
0x22f: Pop(0)
0x230: Return(); Pop(0)

