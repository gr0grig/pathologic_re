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
	world_danko.xml
	player_danko.xml
	logo_buka.wmv
	logo_icepick.wmv
	intro.wmv
	game_buttons.xml
	editbox
	get
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
	loading map: 

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
	NewGame (2 args)
	DestroyWindow (0 args)
	SetCursor (1 args)
	SetBackground (1 args)
	PlaySound (1 args)
	PauseSound (1 args)
	RemoveWorld (0 args)
	UISync (0 args)
	LoadGame (2 args)
	Trace (1 args)
	SaveGame (1 args)
	SaveGame (2 args)
	UITrace (1 args)
	Quit (0 args)
	LoadMap (2 args)

RunOp = 0x55
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object, int, int, bool) Params = 2
		EVENT_0 Op = 0x1e Vars = ()
		EVENT_101 Op = 0x38 Vars = (int)
	GTASK_1 Vars = (object) Params = 1
		EVENT_200 Op = 0x4c Vars = (int, string, object)
	GTASK_2 Vars = (int, int, int, object, object, object, object, object, object, object, string, object) Params = 0
		EVENT_200 Op = 0x86 Vars = (int, string, object)
		EVENT_100 Op = 0x157 Vars = (int)


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

0x55: Push((bool) 0)
0x56: IF (Stack[-1] == 0) GOTO 0x5e; Pop(1)

0x57: Push("world_danko.xml")
0x58: Push("player_danko.xml")
0x59: @ NewGame(Stack[-2], Stack[-1])
0x5a: Pop(2)
0x5b: @ DestroyWindow()
0x5c: Pop(0)
0x5d: Return(); Pop(0)

0x5e: PushEmpty(string, bool)
0x5f: Stack[-2] = "logo_buka.wmv"
0x60: Stack[-1] = (bool) 1
0x61: Push(-2, 4); TaskCall(0)
0x62: Call2 0x0

0x63: Pop(-2, 4); TaskReturn
0x64: Pop(2)
0x65: PushEmpty(string, bool)
0x66: Stack[-2] = "logo_icepick.wmv"
0x67: Stack[-1] = (bool) 1
0x68: Push(-2, 4); TaskCall(0)
0x69: Call2 0x0

0x6a: Pop(-2, 4); TaskReturn
0x6b: Pop(2)
0x6c: PushEmpty(int)
0x6d: Stack[-1] = (int) 0
0x6e: Push(-1, 1); TaskCall(1)
0x6f: Call2 0x41

0x70: Pop(-1, 1); TaskReturn
0x71: Pop(1)
0x72: PushEmpty(string, bool)
0x73: Stack[-2] = "intro.wmv"
0x74: Stack[-1] = (bool) 1
0x75: Push(-2, 4); TaskCall(0)
0x76: Call2 0x0

0x77: Pop(-2, 4); TaskReturn
0x78: Pop(2)
0x79: PushEmpty(bool)
0x7a: Stack[-1] = (bool) 0
0x7b: Call2 0xa3

0x7c: Pop(1)
0x7d: Return(); Pop(0)

0x7e: PushEmpty(object, object)
0x7f: Push("game_buttons.xml")
0x80: Push((bool) 0)
0x81: @ CreateWindow(Stack[-2], Stack[-1], Stack[-3])
0x82: Pop(2)
0x83: Stack[-3] = Stack[-1]
0x84: Return(); Pop(2)

0x85: Stack[-1] = 0
0x86: PushEmpty(string, string)
0x87: Push("editbox")
0x88: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x89: IF (Stack[-1] == 0) GOTO 0x94; Pop(1)

0x8a: Push((int) 0)
0x8b: @@ get(Stack[-2], Stack[-1])
0x8c: Pop(1)
0x8d: @ DestroyWindow()
0x8e: Pop(0)
0x8f: PushEmpty(string)
0x90: Stack[-1] = Stack[-2]
0x91: Call2 0x26a

0x92: Pop(1)
0x93: Return(); Pop(2)

0x94: PushEmpty(int, string, object)
0x95: Stack[-3] = Stack[-8]
0x96: Stack[-2] = Stack[-7]
0x97: Stack[-1] = Stack[-6]
0x98: Call2 0x15f

0x99: Pop(3)
0x9a: Return(); Pop(2)

0x9b: PushEmpty(object, object)
0x9c: Push("game_logo.xml")
0x9d: Push((bool) 0)
0x9e: @ CreateWindow(Stack[-2], Stack[-1], Stack[-3])
0x9f: Pop(2)
0xa0: Stack[-3] = Stack[-1]
0xa1: Return(); Pop(2)

0xa2: Stack[-1] = 0
0xa3: PushEmpty(bool, bool, bool, bool, string, bool, bool, bool, bool, string)
0xa4: @ CaptureKeyboard()
0xa5: Pop(0)
0xa6: Stack[2 + Tasks[-1].StackPointer] = (int)0
0xa7: @ GetWindowSize(Stack[-0], Stack[-1])
0xa8: Pop(0)
0xa9: Push("default")
0xaa: @ SetCursor(Stack[-1])
0xab: Pop(1)
0xac: Push("default")
0xad: @ SetBackground(Stack[-1])
0xae: Pop(1)
0xaf: Push("menumusic")
0xb0: @ PlaySound(Stack[-1])
0xb1: Pop(1)
0xb2: Push((bool) 1)
0xb3: @ ShowCursor(Stack[-1])
0xb4: Pop(1)
0xb5: Push(Stack[-11])
0xb6: IF (Stack[-1] == 0) GOTO 0xbc; Pop(1)

0xb7: Push("game_choose_pers.xml")
0xb8: Push((bool) 0)
0xb9: @ CreateWindow(Stack[-2], Stack[-1], Stack[-5])
0xba: Pop(2)
0xbb: GOTO 0xc4

0xbc: PushEmpty(object)
0xbd: Call2 0x7e

0xbe: Stack[3 + Tasks[-1].StackPointer] = Stack[-1]
0xbf: Pop(1)
0xc0: PushEmpty(object)
0xc1: Call2 0x9b

0xc2: Stack[4 + Tasks[-1].StackPointer] = Stack[-1]
0xc3: Pop(1)
0xc4: Push((int) 131072)
0xc5: Push("klara")
0xc6: @ SendMessage(Stack[-2], Stack[-1])
0xc7: Pop(2)
0xc8: Push((int) 131072)
0xc9: Push("danko")
0xca: @ SendMessage(Stack[-2], Stack[-1])
0xcb: Pop(2)
0xcc: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0xcd: IF (Stack[-1] == 0) GOTO 0xd1; Pop(1)

0xce: @ ProcessEvents()
0xcf: Pop(0)
0xd0: GOTO 0xcc

0xd1: PushEmpty()
0xd2: Call2 0x24f

0xd3: Pop(0)
0xd4: Push((int) 1)
0xd5: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] == Stack[-1])
0xd6: IF (Stack[-1] == 0) GOTO 0xee; Pop(1)

0xd7: Push("menumusic")
0xd8: @ PauseSound(Stack[-1])
0xd9: Pop(1)
0xda: PushEmpty(int)
0xdb: Stack[-1] = (int) 1
0xdc: Push(-1, 1); TaskCall(1)
0xdd: Call2 0x41

0xde: Pop(-1, 1); TaskReturn
0xdf: Pop(1)
0xe0: PushEmpty(string, bool)
0xe1: Stack[-2] = "intro_danko.wmv"
0xe2: Stack[-1] = (bool) 1
0xe3: Push(-2, 4); TaskCall(0)
0xe4: Call2 0x0

0xe5: Pop(-2, 4); TaskReturn
0xe6: Pop(2)
0xe7: @ RemoveWorld()
0xe8: Pop(0)
0xe9: @ UISync()
0xea: Pop(0)
0xeb: @ DestroyWindow()
0xec: Pop(0)
0xed: GOTO 0x156

0xee: Push((int) 2)
0xef: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] == Stack[-1])
0xf0: IF (Stack[-1] == 0) GOTO 0x10b; Pop(1)

0xf1: Push("menumusic")
0xf2: @ PauseSound(Stack[-1])
0xf3: Pop(1)
0xf4: PushEmpty(int)
0xf5: Stack[-1] = (int) 2
0xf6: Push(-1, 1); TaskCall(1)
0xf7: Call2 0x41

0xf8: Pop(-1, 1); TaskReturn
0xf9: Pop(1)
0xfa: PushEmpty(string, bool)
0xfb: Stack[-2] = "intro_burah.wmv"
0xfc: Stack[-1] = (bool) 1
0xfd: Push(-2, 4); TaskCall(0)
0xfe: Call2 0x0

0xff: Pop(-2, 4); TaskReturn
0x100: Pop(2)
0x101: @ RemoveWorld()
0x102: Pop(0)
0x103: @ UISync()
0x104: Pop(0)
0x105: @ DestroyWindow()
0x106: Pop(0)
0x107: Push("demo_save")
0x108: @ LoadGame(Stack[-6], Stack[-1])
0x109: Pop(1)
0x10a: GOTO 0x156

0x10b: Push((int) 3)
0x10c: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] == Stack[-1])
0x10d: IF (Stack[-1] == 0) GOTO 0x125; Pop(1)

0x10e: Push("menumusic")
0x10f: @ PauseSound(Stack[-1])
0x110: Pop(1)
0x111: PushEmpty(int)
0x112: Stack[-1] = (int) 3
0x113: Push(-1, 1); TaskCall(1)
0x114: Call2 0x41

0x115: Pop(-1, 1); TaskReturn
0x116: Pop(1)
0x117: PushEmpty(string, bool)
0x118: Stack[-2] = "intro_klara.wmv"
0x119: Stack[-1] = (bool) 1
0x11a: Push(-2, 4); TaskCall(0)
0x11b: Call2 0x0

0x11c: Pop(-2, 4); TaskReturn
0x11d: Pop(2)
0x11e: @ RemoveWorld()
0x11f: Pop(0)
0x120: @ UISync()
0x121: Pop(0)
0x122: @ DestroyWindow()
0x123: Pop(0)
0x124: GOTO 0x156

0x125: Push((int) 4)
0x126: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] == Stack[-1])
0x127: IF (Stack[-1] == 0) GOTO 0x138; Pop(1)

0x128: Push("menumusic")
0x129: @ PauseSound(Stack[-1])
0x12a: Pop(1)
0x12b: Push("Loading : ")
0x12c: Pop(1); Push(Stack[-1] + Stack[10 + StackPtr]);
0x12d: @ Trace(Stack[-1])
0x12e: Pop(1)
0x12f: @ RemoveWorld()
0x130: Pop(0)
0x131: @ UISync()
0x132: Pop(0)
0x133: @ DestroyWindow()
0x134: Pop(0)
0x135: @ LoadGame(Stack[-4], Stack[-10])
0x136: Pop(0)
0x137: GOTO 0x156

0x138: Push((int) 5)
0x139: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] == Stack[-1])
0x13a: IF (Stack[-1] == 0) GOTO 0x149; Pop(1)

0x13b: Pop(0); Push((bool) Stack[9 + Tasks[-1].StackPointer] == 0)
0x13c: IF (Stack[-1] == 0) GOTO 0x142; Pop(1)

0x13d: @ DestroyWindow()
0x13e: Pop(0)
0x13f: @ SaveGame(Stack[-3])
0x140: Pop(0)
0x141: GOTO 0x148

0x142: @ DestroyWindow()
0x143: Pop(0)
0x144: @@ GetFileName(Stack[-1])
0x145: Pop(0)
0x146: @ SaveGame(Stack[-2], Stack[-1])
0x147: Pop(0)
0x148: GOTO 0x156

0x149: Push((int) 7)
0x14a: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] == Stack[-1])
0x14b: IF (Stack[-1] == 0) GOTO 0x156; Pop(1)

0x14c: @ RemoveWorld()
0x14d: Pop(0)
0x14e: @ UISync()
0x14f: Pop(0)
0x150: @ DestroyWindow()
0x151: Pop(0)
0x152: Push("world_intro.xml")
0x153: Push("player_intro.xml")
0x154: @ NewGame(Stack[-2], Stack[-1])
0x155: Pop(2)
0x156: Return(); Pop(10)

0x157: PushEmpty()
0x158: Push((int) 27)
0x159: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x15a: IF (Stack[-1] == 0) GOTO 0x15e; Pop(1)

0x15b: PushEmpty()
0x15c: Call2 0x243

0x15d: Pop(0)
0x15e: Return(); Pop(0)

0x15f: PushEmpty()
0x160: Push("newgame")
0x161: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x162: IF (Stack[-1] == 0) GOTO 0x167; Pop(1)

0x163: Stack[2 + Tasks[-1].StackPointer] = (int)7
0x164: @ StopEventProcessing()
0x165: Pop(0)
0x166: GOTO 0x242

0x167: Push("quitgame")
0x168: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x169: IF (Stack[-1] == 0) GOTO 0x171; Pop(1)

0x16a: Push("Quit game")
0x16b: @ UITrace(Stack[-1])
0x16c: Pop(1)
0x16d: @ Quit()
0x16e: Pop(0)
0x16f: Return(); Pop(0)

0x170: GOTO 0x242

0x171: Push("loadgame")
0x172: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x173: IF (Stack[-1] == 0) GOTO 0x17d; Pop(1)

0x174: PushEmpty()
0x175: Call2 0x24f

0x176: Pop(0)
0x177: Push("load.xml")
0x178: Push((bool) 0)
0x179: @ CreateWindow(Stack[-2], Stack[-1], Stack[-6])
0x17a: Pop(2)
0x17b: Return(); Pop(0)

0x17c: GOTO 0x242

0x17d: Push("savegame")
0x17e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x17f: IF (Stack[-1] == 0) GOTO 0x189; Pop(1)

0x180: PushEmpty()
0x181: Call2 0x24f

0x182: Pop(0)
0x183: Push("save.xml")
0x184: Push((bool) 0)
0x185: @ CreateWindow(Stack[-2], Stack[-1], Stack[-7])
0x186: Pop(2)
0x187: Return(); Pop(0)

0x188: GOTO 0x242

0x189: Push("gameoptions")
0x18a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x18b: IF (Stack[-1] == 0) GOTO 0x195; Pop(1)

0x18c: PushEmpty()
0x18d: Call2 0x24f

0x18e: Pop(0)
0x18f: Push("options.xml")
0x190: Push((bool) 0)
0x191: @ CreateWindow(Stack[-2], Stack[-1], Stack[-8])
0x192: Pop(2)
0x193: Return(); Pop(0)

0x194: GOTO 0x242

0x195: Push("continue")
0x196: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x197: IF (Stack[-1] == 0) GOTO 0x19d; Pop(1)

0x198: Stack[2 + Tasks[-1].StackPointer] = (int)6
0x199: @ StopEventProcessing()
0x19a: Pop(0)
0x19b: Return(); Pop(0)

0x19c: GOTO 0x242

0x19d: Push("credits")
0x19e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x19f: IF (Stack[-1] == 0) GOTO 0x1b5; Pop(1)

0x1a0: PushEmpty()
0x1a1: Call2 0x24f

0x1a2: Pop(0)
0x1a3: PushEmpty(int)
0x1a4: Stack[-1] = (int) 8
0x1a5: Push(-1, 1); TaskCall(1)
0x1a6: Call2 0x41

0x1a7: Pop(-1, 1); TaskReturn
0x1a8: Pop(1)
0x1a9: PushEmpty(object)
0x1aa: Call2 0x7e

0x1ab: Stack[3 + Tasks[-1].StackPointer] = Stack[-1]
0x1ac: Pop(1)
0x1ad: PushEmpty(object)
0x1ae: Call2 0x9b

0x1af: Stack[4 + Tasks[-1].StackPointer] = Stack[-1]
0x1b0: Pop(1)
0x1b1: Push((bool) 1)
0x1b2: @ ShowCursor(Stack[-1])
0x1b3: Pop(1)
0x1b4: GOTO 0x242

0x1b5: Push("danko")
0x1b6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1b7: IF (Stack[-1] == 0) GOTO 0x1d6; Pop(1)

0x1b8: Push((int) 0)
0x1b9: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1ba: IF (Stack[-1] == 0) GOTO 0x1bd; Pop(1)

0x1bb: Return(); Pop(0)

0x1bc: GOTO 0x1d4

0x1bd: Push((int) 1)
0x1be: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1bf: IF (Stack[-1] == 0) GOTO 0x1c9; Pop(1)

0x1c0: Push((int) 202)
0x1c1: Push("player_name")
0x1c2: @ SendMessage(Stack[-2], Stack[-1])
0x1c3: Pop(2)
0x1c4: Push((int) 203)
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

0x1d5: GOTO 0x242

0x1d6: Push("burah")
0x1d7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1d8: IF (Stack[-1] == 0) GOTO 0x1f9; Pop(1)

0x1d9: Push((int) 0)
0x1da: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1db: IF (Stack[-1] == 0) GOTO 0x1e0; Pop(1)

0x1dc: Stack[2 + Tasks[-1].StackPointer] = (int)2
0x1dd: @ StopEventProcessing()
0x1de: Pop(0)
0x1df: GOTO 0x1f7

0x1e0: Push((int) 1)
0x1e1: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1e2: IF (Stack[-1] == 0) GOTO 0x1ec; Pop(1)

0x1e3: Push((int) 205)
0x1e4: Push("player_name")
0x1e5: @ SendMessage(Stack[-2], Stack[-1])
0x1e6: Pop(2)
0x1e7: Push((int) 206)
0x1e8: Push("player_desc")
0x1e9: @ SendMessage(Stack[-2], Stack[-1])
0x1ea: Pop(2)
0x1eb: GOTO 0x1f7

0x1ec: Push((int) 2)
0x1ed: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1ee: IF (Stack[-1] == 0) GOTO 0x1f7; Pop(1)

0x1ef: Push((int) -1)
0x1f0: Push("player_name")
0x1f1: @ SendMessage(Stack[-2], Stack[-1])
0x1f2: Pop(2)
0x1f3: Push((int) -1)
0x1f4: Push("player_desc")
0x1f5: @ SendMessage(Stack[-2], Stack[-1])
0x1f6: Pop(2)
0x1f7: Return(); Pop(0)

0x1f8: GOTO 0x242

0x1f9: Push("klara")
0x1fa: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1fb: IF (Stack[-1] == 0) GOTO 0x21a; Pop(1)

0x1fc: Push((int) 0)
0x1fd: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1fe: IF (Stack[-1] == 0) GOTO 0x201; Pop(1)

0x1ff: Return(); Pop(0)

0x200: GOTO 0x218

0x201: Push((int) 1)
0x202: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x203: IF (Stack[-1] == 0) GOTO 0x20d; Pop(1)

0x204: Push((int) 208)
0x205: Push("player_name")
0x206: @ SendMessage(Stack[-2], Stack[-1])
0x207: Pop(2)
0x208: Push((int) 209)
0x209: Push("player_desc")
0x20a: @ SendMessage(Stack[-2], Stack[-1])
0x20b: Pop(2)
0x20c: GOTO 0x218

0x20d: Push((int) 2)
0x20e: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x20f: IF (Stack[-1] == 0) GOTO 0x218; Pop(1)

0x210: Push((int) -1)
0x211: Push("player_name")
0x212: @ SendMessage(Stack[-2], Stack[-1])
0x213: Pop(2)
0x214: Push((int) -1)
0x215: Push("player_desc")
0x216: @ SendMessage(Stack[-2], Stack[-1])
0x217: Pop(2)
0x218: Return(); Pop(0)

0x219: GOTO 0x242

0x21a: Push("load")
0x21b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x21c: IF (Stack[-1] == 0) GOTO 0x22b; Pop(1)

0x21d: Push((int) 0)
0x21e: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x21f: IF (Stack[-1] == 0) GOTO 0x226; Pop(1)

0x220: Stack[2 + Tasks[-1].StackPointer] = (int)4
0x221: @@ GetFileName(Stack[-10])
0x222: Pop(0)
0x223: @ StopEventProcessing()
0x224: Pop(0)
0x225: GOTO 0x229

0x226: PushEmpty()
0x227: Call2 0x243

0x228: Pop(0)
0x229: Return(); Pop(0)

0x22a: GOTO 0x242

0x22b: Push("save")
0x22c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x22d: IF (Stack[-1] == 0) GOTO 0x23b; Pop(1)

0x22e: Push((int) 0)
0x22f: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x230: IF (Stack[-1] == 0) GOTO 0x236; Pop(1)

0x231: Stack[2 + Tasks[-1].StackPointer] = (int)5
0x232: Stack[9 + Tasks[-1].StackPointer] = Stack[-1]
0x233: @ StopEventProcessing()
0x234: Pop(0)
0x235: GOTO 0x239

0x236: PushEmpty()
0x237: Call2 0x243

0x238: Pop(0)
0x239: Return(); Pop(0)

0x23a: GOTO 0x242

0x23b: Push("options")
0x23c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x23d: IF (Stack[-1] == 0) GOTO 0x242; Pop(1)

0x23e: PushEmpty()
0x23f: Call2 0x243

0x240: Pop(0)
0x241: Return(); Pop(0)

0x242: Return(); Pop(0)

0x243: PushEmpty()
0x244: Call2 0x24f

0x245: Pop(0)
0x246: PushEmpty(object)
0x247: Call2 0x7e

0x248: Stack[3 + Tasks[-1].StackPointer] = Stack[-1]
0x249: Pop(1)
0x24a: PushEmpty(object)
0x24b: Call2 0x9b

0x24c: Stack[4 + Tasks[-1].StackPointer] = Stack[-1]
0x24d: Pop(1)
0x24e: Return(); Pop(0)

0x24f: Push( Stack[3 + Tasks[-1].StackPointer] )
0x250: IF (Stack[-1] == 0) GOTO 0x253; Pop(1)

0x251: @@ DestroyWindow()
0x252: Pop(0)
0x253: Push( Stack[4 + Tasks[-1].StackPointer] )
0x254: IF (Stack[-1] == 0) GOTO 0x257; Pop(1)

0x255: @@ DestroyWindow()
0x256: Pop(0)
0x257: Push( Stack[5 + Tasks[-1].StackPointer] )
0x258: IF (Stack[-1] == 0) GOTO 0x25b; Pop(1)

0x259: @@ DestroyWindow()
0x25a: Pop(0)
0x25b: Push( Stack[6 + Tasks[-1].StackPointer] )
0x25c: IF (Stack[-1] == 0) GOTO 0x25f; Pop(1)

0x25d: @@ DestroyWindow()
0x25e: Pop(0)
0x25f: Push( Stack[7 + Tasks[-1].StackPointer] )
0x260: IF (Stack[-1] == 0) GOTO 0x263; Pop(1)

0x261: @@ DestroyWindow()
0x262: Pop(0)
0x263: Push( Stack[8 + Tasks[-1].StackPointer] )
0x264: IF (Stack[-1] == 0) GOTO 0x267; Pop(1)

0x265: @@ DestroyWindow()
0x266: Pop(0)
0x267: @ CaptureKeyboard()
0x268: Pop(0)
0x269: Return(); Pop(0)

0x26a: PushEmpty(bool, bool)
0x26b: Push("loading map: ")
0x26c: Pop(1); Push(Stack[-1] + Stack[-4]);
0x26d: @ UITrace(Stack[-1])
0x26e: Pop(1)
0x26f: @ LoadMap(Stack[-1], Stack[-3])
0x270: Pop(0)
0x271: Return(); Pop(2)

