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
	DestroyWindow (0 args)
	Trace (1 args)
	SetCursor (1 args)
	SetBackground (1 args)
	PlaySound (1 args)
	PauseSound (1 args)
	RemoveWorld (0 args)
	UISync (0 args)
	LoadGame (2 args)
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
		EVENT_100 Op = 0x64 Vars = (int)
		EVENT_200 Op = 0x129 Vars = (int, string, object)


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
0x75: PushEmpty(bool, bool, bool, bool, string, bool, bool, bool, bool, string)
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
0x87: Push(Stack[-11])
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
0x96: Push((int) 131072)
0x97: Push("klara")
0x98: @ SendMessage(Stack[-2], Stack[-1])
0x99: Pop(2)
0x9a: Push((int) 131072)
0x9b: Push("danko")
0x9c: @ SendMessage(Stack[-2], Stack[-1])
0x9d: Pop(2)
0x9e: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x9f: IF (Stack[-1] == 0) GOTO 0xa3; Pop(1)

0xa0: @ ProcessEvents()
0xa1: Pop(0)
0xa2: GOTO 0x9e

0xa3: PushEmpty()
0xa4: Call2 0x219

0xa5: Pop(0)
0xa6: Push((int) 1)
0xa7: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] == Stack[-1])
0xa8: IF (Stack[-1] == 0) GOTO 0xc0; Pop(1)

0xa9: Push("menumusic")
0xaa: @ PauseSound(Stack[-1])
0xab: Pop(1)
0xac: PushEmpty(int)
0xad: Stack[-1] = (int) 1
0xae: Push(-1, 1); TaskCall(1)
0xaf: Call2 0x41

0xb0: Pop(-1, 1); TaskReturn
0xb1: Pop(1)
0xb2: PushEmpty(string, bool)
0xb3: Stack[-2] = "intro_danko.wmv"
0xb4: Stack[-1] = (bool) 1
0xb5: Push(-2, 4); TaskCall(0)
0xb6: Call2 0x0

0xb7: Pop(-2, 4); TaskReturn
0xb8: Pop(2)
0xb9: @ RemoveWorld()
0xba: Pop(0)
0xbb: @ UISync()
0xbc: Pop(0)
0xbd: @ DestroyWindow()
0xbe: Pop(0)
0xbf: GOTO 0x128

0xc0: Push((int) 2)
0xc1: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] == Stack[-1])
0xc2: IF (Stack[-1] == 0) GOTO 0xdd; Pop(1)

0xc3: Push("menumusic")
0xc4: @ PauseSound(Stack[-1])
0xc5: Pop(1)
0xc6: PushEmpty(int)
0xc7: Stack[-1] = (int) 2
0xc8: Push(-1, 1); TaskCall(1)
0xc9: Call2 0x41

0xca: Pop(-1, 1); TaskReturn
0xcb: Pop(1)
0xcc: PushEmpty(string, bool)
0xcd: Stack[-2] = "intro_burah.wmv"
0xce: Stack[-1] = (bool) 1
0xcf: Push(-2, 4); TaskCall(0)
0xd0: Call2 0x0

0xd1: Pop(-2, 4); TaskReturn
0xd2: Pop(2)
0xd3: @ RemoveWorld()
0xd4: Pop(0)
0xd5: @ UISync()
0xd6: Pop(0)
0xd7: @ DestroyWindow()
0xd8: Pop(0)
0xd9: Push("demo_save")
0xda: @ LoadGame(Stack[-6], Stack[-1])
0xdb: Pop(1)
0xdc: GOTO 0x128

0xdd: Push((int) 3)
0xde: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] == Stack[-1])
0xdf: IF (Stack[-1] == 0) GOTO 0xf7; Pop(1)

0xe0: Push("menumusic")
0xe1: @ PauseSound(Stack[-1])
0xe2: Pop(1)
0xe3: PushEmpty(int)
0xe4: Stack[-1] = (int) 3
0xe5: Push(-1, 1); TaskCall(1)
0xe6: Call2 0x41

0xe7: Pop(-1, 1); TaskReturn
0xe8: Pop(1)
0xe9: PushEmpty(string, bool)
0xea: Stack[-2] = "intro_klara.wmv"
0xeb: Stack[-1] = (bool) 1
0xec: Push(-2, 4); TaskCall(0)
0xed: Call2 0x0

0xee: Pop(-2, 4); TaskReturn
0xef: Pop(2)
0xf0: @ RemoveWorld()
0xf1: Pop(0)
0xf2: @ UISync()
0xf3: Pop(0)
0xf4: @ DestroyWindow()
0xf5: Pop(0)
0xf6: GOTO 0x128

0xf7: Push((int) 4)
0xf8: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] == Stack[-1])
0xf9: IF (Stack[-1] == 0) GOTO 0x10a; Pop(1)

0xfa: Push("menumusic")
0xfb: @ PauseSound(Stack[-1])
0xfc: Pop(1)
0xfd: Push("Loading : ")
0xfe: Pop(1); Push(Stack[-1] + Stack[10 + StackPtr]);
0xff: @ Trace(Stack[-1])
0x100: Pop(1)
0x101: @ RemoveWorld()
0x102: Pop(0)
0x103: @ UISync()
0x104: Pop(0)
0x105: @ DestroyWindow()
0x106: Pop(0)
0x107: @ LoadGame(Stack[-4], Stack[-10])
0x108: Pop(0)
0x109: GOTO 0x128

0x10a: Push((int) 5)
0x10b: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] == Stack[-1])
0x10c: IF (Stack[-1] == 0) GOTO 0x11b; Pop(1)

0x10d: Pop(0); Push((bool) Stack[9 + Tasks[-1].StackPointer] == 0)
0x10e: IF (Stack[-1] == 0) GOTO 0x114; Pop(1)

0x10f: @ DestroyWindow()
0x110: Pop(0)
0x111: @ SaveGame(Stack[-3])
0x112: Pop(0)
0x113: GOTO 0x11a

0x114: @ DestroyWindow()
0x115: Pop(0)
0x116: @@ GetFileName(Stack[-1])
0x117: Pop(0)
0x118: @ SaveGame(Stack[-2], Stack[-1])
0x119: Pop(0)
0x11a: GOTO 0x128

0x11b: Push((int) 7)
0x11c: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] == Stack[-1])
0x11d: IF (Stack[-1] == 0) GOTO 0x128; Pop(1)

0x11e: @ RemoveWorld()
0x11f: Pop(0)
0x120: @ UISync()
0x121: Pop(0)
0x122: @ DestroyWindow()
0x123: Pop(0)
0x124: Push("world_intro.xml")
0x125: Push("player_intro.xml")
0x126: @ NewGame(Stack[-2], Stack[-1])
0x127: Pop(2)
0x128: Return(); Pop(10)

0x129: PushEmpty()
0x12a: Push("newgame")
0x12b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x12c: IF (Stack[-1] == 0) GOTO 0x131; Pop(1)

0x12d: Stack[2 + Tasks[-1].StackPointer] = (int)7
0x12e: @ StopEventProcessing()
0x12f: Pop(0)
0x130: GOTO 0x20c

0x131: Push("quitgame")
0x132: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x133: IF (Stack[-1] == 0) GOTO 0x13b; Pop(1)

0x134: Push("Quit game")
0x135: @ UITrace(Stack[-1])
0x136: Pop(1)
0x137: @ Quit()
0x138: Pop(0)
0x139: Return(); Pop(0)

0x13a: GOTO 0x20c

0x13b: Push("loadgame")
0x13c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x13d: IF (Stack[-1] == 0) GOTO 0x147; Pop(1)

0x13e: PushEmpty()
0x13f: Call2 0x219

0x140: Pop(0)
0x141: Push("load.xml")
0x142: Push((bool) 0)
0x143: @ CreateWindow(Stack[-2], Stack[-1], Stack[-6])
0x144: Pop(2)
0x145: Return(); Pop(0)

0x146: GOTO 0x20c

0x147: Push("savegame")
0x148: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x149: IF (Stack[-1] == 0) GOTO 0x153; Pop(1)

0x14a: PushEmpty()
0x14b: Call2 0x219

0x14c: Pop(0)
0x14d: Push("save.xml")
0x14e: Push((bool) 0)
0x14f: @ CreateWindow(Stack[-2], Stack[-1], Stack[-7])
0x150: Pop(2)
0x151: Return(); Pop(0)

0x152: GOTO 0x20c

0x153: Push("gameoptions")
0x154: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x155: IF (Stack[-1] == 0) GOTO 0x15f; Pop(1)

0x156: PushEmpty()
0x157: Call2 0x219

0x158: Pop(0)
0x159: Push("options.xml")
0x15a: Push((bool) 0)
0x15b: @ CreateWindow(Stack[-2], Stack[-1], Stack[-8])
0x15c: Pop(2)
0x15d: Return(); Pop(0)

0x15e: GOTO 0x20c

0x15f: Push("continue")
0x160: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x161: IF (Stack[-1] == 0) GOTO 0x167; Pop(1)

0x162: Stack[2 + Tasks[-1].StackPointer] = (int)6
0x163: @ StopEventProcessing()
0x164: Pop(0)
0x165: Return(); Pop(0)

0x166: GOTO 0x20c

0x167: Push("credits")
0x168: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x169: IF (Stack[-1] == 0) GOTO 0x17f; Pop(1)

0x16a: PushEmpty()
0x16b: Call2 0x219

0x16c: Pop(0)
0x16d: PushEmpty(int)
0x16e: Stack[-1] = (int) 8
0x16f: Push(-1, 1); TaskCall(1)
0x170: Call2 0x41

0x171: Pop(-1, 1); TaskReturn
0x172: Pop(1)
0x173: PushEmpty(object)
0x174: Call2 0x5c

0x175: Stack[3 + Tasks[-1].StackPointer] = Stack[-1]
0x176: Pop(1)
0x177: PushEmpty(object)
0x178: Call2 0x6d

0x179: Stack[4 + Tasks[-1].StackPointer] = Stack[-1]
0x17a: Pop(1)
0x17b: Push((bool) 1)
0x17c: @ ShowCursor(Stack[-1])
0x17d: Pop(1)
0x17e: GOTO 0x20c

0x17f: Push("danko")
0x180: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x181: IF (Stack[-1] == 0) GOTO 0x1a0; Pop(1)

0x182: Push((int) 0)
0x183: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x184: IF (Stack[-1] == 0) GOTO 0x187; Pop(1)

0x185: Return(); Pop(0)

0x186: GOTO 0x19e

0x187: Push((int) 1)
0x188: Pop(1); Push((bool) Stack[-4] == Stack[-1])
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
0x194: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x195: IF (Stack[-1] == 0) GOTO 0x19e; Pop(1)

0x196: Push((int) -1)
0x197: Push("player_name")
0x198: @ SendMessage(Stack[-2], Stack[-1])
0x199: Pop(2)
0x19a: Push((int) -1)
0x19b: Push("player_desc")
0x19c: @ SendMessage(Stack[-2], Stack[-1])
0x19d: Pop(2)
0x19e: Return(); Pop(0)

0x19f: GOTO 0x20c

0x1a0: Push("burah")
0x1a1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1a2: IF (Stack[-1] == 0) GOTO 0x1c3; Pop(1)

0x1a3: Push((int) 0)
0x1a4: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1a5: IF (Stack[-1] == 0) GOTO 0x1aa; Pop(1)

0x1a6: Stack[2 + Tasks[-1].StackPointer] = (int)2
0x1a7: @ StopEventProcessing()
0x1a8: Pop(0)
0x1a9: GOTO 0x1c1

0x1aa: Push((int) 1)
0x1ab: Pop(1); Push((bool) Stack[-4] == Stack[-1])
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
0x1b7: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1b8: IF (Stack[-1] == 0) GOTO 0x1c1; Pop(1)

0x1b9: Push((int) -1)
0x1ba: Push("player_name")
0x1bb: @ SendMessage(Stack[-2], Stack[-1])
0x1bc: Pop(2)
0x1bd: Push((int) -1)
0x1be: Push("player_desc")
0x1bf: @ SendMessage(Stack[-2], Stack[-1])
0x1c0: Pop(2)
0x1c1: Return(); Pop(0)

0x1c2: GOTO 0x20c

0x1c3: Push("klara")
0x1c4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1c5: IF (Stack[-1] == 0) GOTO 0x1e4; Pop(1)

0x1c6: Push((int) 0)
0x1c7: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1c8: IF (Stack[-1] == 0) GOTO 0x1cb; Pop(1)

0x1c9: Return(); Pop(0)

0x1ca: GOTO 0x1e2

0x1cb: Push((int) 1)
0x1cc: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1cd: IF (Stack[-1] == 0) GOTO 0x1d7; Pop(1)

0x1ce: Push((int) 208)
0x1cf: Push("player_name")
0x1d0: @ SendMessage(Stack[-2], Stack[-1])
0x1d1: Pop(2)
0x1d2: Push((int) 209)
0x1d3: Push("player_desc")
0x1d4: @ SendMessage(Stack[-2], Stack[-1])
0x1d5: Pop(2)
0x1d6: GOTO 0x1e2

0x1d7: Push((int) 2)
0x1d8: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1d9: IF (Stack[-1] == 0) GOTO 0x1e2; Pop(1)

0x1da: Push((int) -1)
0x1db: Push("player_name")
0x1dc: @ SendMessage(Stack[-2], Stack[-1])
0x1dd: Pop(2)
0x1de: Push((int) -1)
0x1df: Push("player_desc")
0x1e0: @ SendMessage(Stack[-2], Stack[-1])
0x1e1: Pop(2)
0x1e2: Return(); Pop(0)

0x1e3: GOTO 0x20c

0x1e4: Push("load")
0x1e5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1e6: IF (Stack[-1] == 0) GOTO 0x1f5; Pop(1)

0x1e7: Push((int) 0)
0x1e8: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1e9: IF (Stack[-1] == 0) GOTO 0x1f0; Pop(1)

0x1ea: Stack[2 + Tasks[-1].StackPointer] = (int)4
0x1eb: @@ GetFileName(Stack[-10])
0x1ec: Pop(0)
0x1ed: @ StopEventProcessing()
0x1ee: Pop(0)
0x1ef: GOTO 0x1f3

0x1f0: PushEmpty()
0x1f1: Call2 0x20d

0x1f2: Pop(0)
0x1f3: Return(); Pop(0)

0x1f4: GOTO 0x20c

0x1f5: Push("save")
0x1f6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1f7: IF (Stack[-1] == 0) GOTO 0x205; Pop(1)

0x1f8: Push((int) 0)
0x1f9: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1fa: IF (Stack[-1] == 0) GOTO 0x200; Pop(1)

0x1fb: Stack[2 + Tasks[-1].StackPointer] = (int)5
0x1fc: Stack[9 + Tasks[-1].StackPointer] = Stack[-1]
0x1fd: @ StopEventProcessing()
0x1fe: Pop(0)
0x1ff: GOTO 0x203

0x200: PushEmpty()
0x201: Call2 0x20d

0x202: Pop(0)
0x203: Return(); Pop(0)

0x204: GOTO 0x20c

0x205: Push("options")
0x206: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x207: IF (Stack[-1] == 0) GOTO 0x20c; Pop(1)

0x208: PushEmpty()
0x209: Call2 0x20d

0x20a: Pop(0)
0x20b: Return(); Pop(0)

0x20c: Return(); Pop(0)

0x20d: PushEmpty()
0x20e: Call2 0x219

0x20f: Pop(0)
0x210: PushEmpty(object)
0x211: Call2 0x5c

0x212: Stack[3 + Tasks[-1].StackPointer] = Stack[-1]
0x213: Pop(1)
0x214: PushEmpty(object)
0x215: Call2 0x6d

0x216: Stack[4 + Tasks[-1].StackPointer] = Stack[-1]
0x217: Pop(1)
0x218: Return(); Pop(0)

0x219: Push( Stack[3 + Tasks[-1].StackPointer] )
0x21a: IF (Stack[-1] == 0) GOTO 0x21d; Pop(1)

0x21b: @@ DestroyWindow()
0x21c: Pop(0)
0x21d: Push( Stack[4 + Tasks[-1].StackPointer] )
0x21e: IF (Stack[-1] == 0) GOTO 0x221; Pop(1)

0x21f: @@ DestroyWindow()
0x220: Pop(0)
0x221: Push( Stack[5 + Tasks[-1].StackPointer] )
0x222: IF (Stack[-1] == 0) GOTO 0x225; Pop(1)

0x223: @@ DestroyWindow()
0x224: Pop(0)
0x225: Push( Stack[6 + Tasks[-1].StackPointer] )
0x226: IF (Stack[-1] == 0) GOTO 0x229; Pop(1)

0x227: @@ DestroyWindow()
0x228: Pop(0)
0x229: Push( Stack[7 + Tasks[-1].StackPointer] )
0x22a: IF (Stack[-1] == 0) GOTO 0x22d; Pop(1)

0x22b: @@ DestroyWindow()
0x22c: Pop(0)
0x22d: Push( Stack[8 + Tasks[-1].StackPointer] )
0x22e: IF (Stack[-1] == 0) GOTO 0x231; Pop(1)

0x22f: @@ DestroyWindow()
0x230: Pop(0)
0x231: @ CaptureKeyboard()
0x232: Pop(0)
0x233: Return(); Pop(0)

