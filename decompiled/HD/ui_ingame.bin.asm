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
	continue
	newgame
	loadgame
	savegame
	gameoptions
	quitgame
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
	Quit game
	load.xml
	save.xml
	options.xml
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
	DestroyWindow (0 args)
	Trace (1 args)
	HideCursor (0 args)
	SetCursor (1 args)
	SetBackground (1 args)
	PlaySound (1 args)
	PauseSound (1 args)
	RemoveWorld (0 args)
	UISync (0 args)
	NewGame (2 args)
	LoadGame (2 args)
	SaveGame (1 args)
	SaveGame (2 args)
	UITrace (1 args)
	Quit (0 args)
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
		EVENT_100 Op = 0x7c Vars = (int)
		EVENT_102 Op = 0x18a Vars = (int)
		EVENT_101 Op = 0x19d Vars = (int)
		EVENT_200 Op = 0x288 Vars = (int, string, object)


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

0x6d: PushEmpty(bool)
0x6e: Stack[-1] = (bool) 0
0x6f: Call2 0x1ca

0x70: Pop(1)
0x71: @ DestroyWindow()
0x72: Pop(0)
0x73: Return(); Pop(0)

0x74: PushEmpty(object, object)
0x75: Push("ingame_buttons.xml")
0x76: Push((bool) 0)
0x77: @ CreateWindow(Stack[-2], Stack[-1], Stack[-3])
0x78: Pop(2)
0x79: Stack[-3] = Stack[-1]
0x7a: Return(); Pop(2)

0x7b: Stack[-1] = 0
0x7c: PushEmpty()
0x7d: @ Trace(Stack[-1])
0x7e: Pop(0)
0x7f: Push((int) 27)
0x80: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x81: IF (Stack[-1] == 0) GOTO 0x84; Pop(1)

0x82: @ DestroyWindow()
0x83: Pop(0)
0x84: Push((int) 262)
0x85: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x86: IF (Stack[-1] == 0) GOTO 0x89; Pop(1)

0x87: @ DestroyWindow()
0x88: Pop(0)
0x89: Push((int) 260)
0x8a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x8b: IF (Stack[-1] == 0) GOTO 0x8e; Pop(1)

0x8c: @ DestroyWindow()
0x8d: Pop(0)
0x8e: Push((int) 257)
0x8f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x90: IF (Stack[-1] == 0) GOTO 0x93; Pop(1)

0x91: @ DestroyWindow()
0x92: Pop(0)
0x93: Return(); Pop(0)

0x94: Push((int) 0)
0x95: Push("continue")
0x96: @ SendMessage(Stack[-2], Stack[-1])
0x97: Pop(2)
0x98: Push((int) 0)
0x99: Push("newgame")
0x9a: @ SendMessage(Stack[-2], Stack[-1])
0x9b: Pop(2)
0x9c: Push((int) 0)
0x9d: Push("loadgame")
0x9e: @ SendMessage(Stack[-2], Stack[-1])
0x9f: Pop(2)
0xa0: Push((int) 0)
0xa1: Push("savegame")
0xa2: @ SendMessage(Stack[-2], Stack[-1])
0xa3: Pop(2)
0xa4: Push((int) 0)
0xa5: Push("gameoptions")
0xa6: @ SendMessage(Stack[-2], Stack[-1])
0xa7: Pop(2)
0xa8: Push((int) 0)
0xa9: Push("quitgame")
0xaa: @ SendMessage(Stack[-2], Stack[-1])
0xab: Pop(2)
0xac: Return(); Pop(0)

0xad: PushEmpty()
0xae: Call2 0x94

0xaf: Pop(0)
0xb0: PushEmpty(string)
0xb1: Call2 0x119

0xb2: Pop(0)
0xb3: Push("")
0xb4: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xb5: IF (Stack[-1] == 0) GOTO 0xbf; Pop(1)

0xb6: Push((int) 1)
0xb7: Push("continue")
0xb8: @ SendMessage(Stack[-2], Stack[-1])
0xb9: Pop(2)
0xba: PushEmpty(string)
0xbb: Stack[-1] = "continue"
0xbc: Call2 0x11b

0xbd: Pop(1)
0xbe: GOTO 0x118

0xbf: PushEmpty(string)
0xc0: Call2 0x119

0xc1: Pop(0)
0xc2: Push("continue")
0xc3: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xc4: IF (Stack[-1] == 0) GOTO 0xce; Pop(1)

0xc5: Push((int) 1)
0xc6: Push("newgame")
0xc7: @ SendMessage(Stack[-2], Stack[-1])
0xc8: Pop(2)
0xc9: PushEmpty(string)
0xca: Stack[-1] = "newgame"
0xcb: Call2 0x11b

0xcc: Pop(1)
0xcd: GOTO 0x118

0xce: PushEmpty(string)
0xcf: Call2 0x119

0xd0: Pop(0)
0xd1: Push("newgame")
0xd2: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xd3: IF (Stack[-1] == 0) GOTO 0xdd; Pop(1)

0xd4: Push((int) 1)
0xd5: Push("loadgame")
0xd6: @ SendMessage(Stack[-2], Stack[-1])
0xd7: Pop(2)
0xd8: PushEmpty(string)
0xd9: Stack[-1] = "loadgame"
0xda: Call2 0x11b

0xdb: Pop(1)
0xdc: GOTO 0x118

0xdd: PushEmpty(string)
0xde: Call2 0x119

0xdf: Pop(0)
0xe0: Push("loadgame")
0xe1: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xe2: IF (Stack[-1] == 0) GOTO 0xec; Pop(1)

0xe3: Push((int) 1)
0xe4: Push("savegame")
0xe5: @ SendMessage(Stack[-2], Stack[-1])
0xe6: Pop(2)
0xe7: PushEmpty(string)
0xe8: Stack[-1] = "savegame"
0xe9: Call2 0x11b

0xea: Pop(1)
0xeb: GOTO 0x118

0xec: PushEmpty(string)
0xed: Call2 0x119

0xee: Pop(0)
0xef: Push("savegame")
0xf0: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xf1: IF (Stack[-1] == 0) GOTO 0xfb; Pop(1)

0xf2: Push((int) 1)
0xf3: Push("gameoptions")
0xf4: @ SendMessage(Stack[-2], Stack[-1])
0xf5: Pop(2)
0xf6: PushEmpty(string)
0xf7: Stack[-1] = "gameoptions"
0xf8: Call2 0x11b

0xf9: Pop(1)
0xfa: GOTO 0x118

0xfb: PushEmpty(string)
0xfc: Call2 0x119

0xfd: Pop(0)
0xfe: Push("gameoptions")
0xff: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x100: IF (Stack[-1] == 0) GOTO 0x10a; Pop(1)

0x101: Push((int) 1)
0x102: Push("quitgame")
0x103: @ SendMessage(Stack[-2], Stack[-1])
0x104: Pop(2)
0x105: PushEmpty(string)
0x106: Stack[-1] = "quitgame"
0x107: Call2 0x11b

0x108: Pop(1)
0x109: GOTO 0x118

0x10a: PushEmpty(string)
0x10b: Call2 0x119

0x10c: Pop(0)
0x10d: Push("quitgame")
0x10e: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x10f: IF (Stack[-1] == 0) GOTO 0x118; Pop(1)

0x110: Push((int) 1)
0x111: Push("continue")
0x112: @ SendMessage(Stack[-2], Stack[-1])
0x113: Pop(2)
0x114: PushEmpty(string)
0x115: Stack[-1] = "continue"
0x116: Call2 0x11b

0x117: Pop(1)
0x118: Return(); Pop(0)

0x119: Stack[-1] = Stack[11 + Tasks[-1].StackPointer]
0x11a: Return(); Pop(0)

0x11b: PushEmpty()
0x11c: Stack[11 + Tasks[-1].StackPointer] = Stack[-1]
0x11d: Return(); Pop(0)

0x11e: PushEmpty()
0x11f: Call2 0x94

0x120: Pop(0)
0x121: PushEmpty(string)
0x122: Call2 0x119

0x123: Pop(0)
0x124: Push("")
0x125: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x126: IF (Stack[-1] == 0) GOTO 0x130; Pop(1)

0x127: Push((int) 1)
0x128: Push("quitgame")
0x129: @ SendMessage(Stack[-2], Stack[-1])
0x12a: Pop(2)
0x12b: PushEmpty(string)
0x12c: Stack[-1] = "quitgame"
0x12d: Call2 0x11b

0x12e: Pop(1)
0x12f: GOTO 0x189

0x130: PushEmpty(string)
0x131: Call2 0x119

0x132: Pop(0)
0x133: Push("continue")
0x134: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x135: IF (Stack[-1] == 0) GOTO 0x13f; Pop(1)

0x136: Push((int) 1)
0x137: Push("quitgame")
0x138: @ SendMessage(Stack[-2], Stack[-1])
0x139: Pop(2)
0x13a: PushEmpty(string)
0x13b: Stack[-1] = "quitgame"
0x13c: Call2 0x11b

0x13d: Pop(1)
0x13e: GOTO 0x189

0x13f: PushEmpty(string)
0x140: Call2 0x119

0x141: Pop(0)
0x142: Push("newgame")
0x143: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x144: IF (Stack[-1] == 0) GOTO 0x14e; Pop(1)

0x145: Push((int) 1)
0x146: Push("continue")
0x147: @ SendMessage(Stack[-2], Stack[-1])
0x148: Pop(2)
0x149: PushEmpty(string)
0x14a: Stack[-1] = "continue"
0x14b: Call2 0x11b

0x14c: Pop(1)
0x14d: GOTO 0x189

0x14e: PushEmpty(string)
0x14f: Call2 0x119

0x150: Pop(0)
0x151: Push("loadgame")
0x152: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x153: IF (Stack[-1] == 0) GOTO 0x15d; Pop(1)

0x154: Push((int) 1)
0x155: Push("newgame")
0x156: @ SendMessage(Stack[-2], Stack[-1])
0x157: Pop(2)
0x158: PushEmpty(string)
0x159: Stack[-1] = "newgame"
0x15a: Call2 0x11b

0x15b: Pop(1)
0x15c: GOTO 0x189

0x15d: PushEmpty(string)
0x15e: Call2 0x119

0x15f: Pop(0)
0x160: Push("savegame")
0x161: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x162: IF (Stack[-1] == 0) GOTO 0x16c; Pop(1)

0x163: Push((int) 1)
0x164: Push("loadgame")
0x165: @ SendMessage(Stack[-2], Stack[-1])
0x166: Pop(2)
0x167: PushEmpty(string)
0x168: Stack[-1] = "loadgame"
0x169: Call2 0x11b

0x16a: Pop(1)
0x16b: GOTO 0x189

0x16c: PushEmpty(string)
0x16d: Call2 0x119

0x16e: Pop(0)
0x16f: Push("gameoptions")
0x170: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x171: IF (Stack[-1] == 0) GOTO 0x17b; Pop(1)

0x172: Push((int) 1)
0x173: Push("savegame")
0x174: @ SendMessage(Stack[-2], Stack[-1])
0x175: Pop(2)
0x176: PushEmpty(string)
0x177: Stack[-1] = "savegame"
0x178: Call2 0x11b

0x179: Pop(1)
0x17a: GOTO 0x189

0x17b: PushEmpty(string)
0x17c: Call2 0x119

0x17d: Pop(0)
0x17e: Push("quitgame")
0x17f: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x180: IF (Stack[-1] == 0) GOTO 0x189; Pop(1)

0x181: Push((int) 1)
0x182: Push("gameoptions")
0x183: @ SendMessage(Stack[-2], Stack[-1])
0x184: Pop(2)
0x185: PushEmpty(string)
0x186: Stack[-1] = "gameoptions"
0x187: Call2 0x11b

0x188: Pop(1)
0x189: Return(); Pop(0)

0x18a: PushEmpty()
0x18b: Push((int) 272)
0x18c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x18d: IF (Stack[-1] == 0) GOTO 0x194; Pop(1)

0x18e: @ HideCursor()
0x18f: Pop(0)
0x190: PushEmpty()
0x191: Call2 0x11e

0x192: Pop(0)
0x193: GOTO 0x19c

0x194: Push((int) 274)
0x195: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x196: IF (Stack[-1] == 0) GOTO 0x19c; Pop(1)

0x197: @ HideCursor()
0x198: Pop(0)
0x199: PushEmpty()
0x19a: Call2 0xad

0x19b: Pop(0)
0x19c: Return(); Pop(0)

0x19d: PushEmpty()
0x19e: Push((int) 267)
0x19f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1a0: IF (Stack[-1] == 0) GOTO 0x1a7; Pop(1)

0x1a1: @ HideCursor()
0x1a2: Pop(0)
0x1a3: PushEmpty()
0x1a4: Call2 0x11e

0x1a5: Pop(0)
0x1a6: GOTO 0x1c1

0x1a7: Push((int) 268)
0x1a8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1a9: IF (Stack[-1] == 0) GOTO 0x1b0; Pop(1)

0x1aa: @ HideCursor()
0x1ab: Pop(0)
0x1ac: PushEmpty()
0x1ad: Call2 0xad

0x1ae: Pop(0)
0x1af: GOTO 0x1c1

0x1b0: Push((int) 256)
0x1b1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1b2: IF (Stack[-1] == 0) GOTO 0x1c1; Pop(1)

0x1b3: PushEmpty(string)
0x1b4: Call2 0x119

0x1b5: Pop(0)
0x1b6: Push("")
0x1b7: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x1b8: IF (Stack[-1] == 0) GOTO 0x1c1; Pop(1)

0x1b9: @ HideCursor()
0x1ba: Pop(0)
0x1bb: Push((int) 2)
0x1bc: PushEmpty(string)
0x1bd: Call2 0x119

0x1be: Pop(0)
0x1bf: @ SendMessage(Stack[-2], Stack[-1])
0x1c0: Pop(2)
0x1c1: Return(); Pop(0)

0x1c2: PushEmpty(object, object)
0x1c3: Push("game_logo.xml")
0x1c4: Push((bool) 0)
0x1c5: @ CreateWindow(Stack[-2], Stack[-1], Stack[-3])
0x1c6: Pop(2)
0x1c7: Stack[-3] = Stack[-1]
0x1c8: Return(); Pop(2)

0x1c9: Stack[-1] = 0
0x1ca: PushEmpty(bool, bool, bool, string, bool, bool, bool, string)
0x1cb: Stack[14 + Tasks[-1].StackPointer] = Stack[-9]
0x1cc: @ CaptureKeyboard()
0x1cd: Pop(0)
0x1ce: Stack[2 + Tasks[-1].StackPointer] = (int)0
0x1cf: @ GetWindowSize(Stack[-0], Stack[-1])
0x1d0: Pop(0)
0x1d1: Push("default")
0x1d2: @ SetCursor(Stack[-1])
0x1d3: Pop(1)
0x1d4: Push("default")
0x1d5: @ SetBackground(Stack[-1])
0x1d6: Pop(1)
0x1d7: Push("menumusic")
0x1d8: @ PlaySound(Stack[-1])
0x1d9: Pop(1)
0x1da: Push((bool) 1)
0x1db: @ ShowCursor(Stack[-1])
0x1dc: Pop(1)
0x1dd: PushEmpty(string)
0x1de: Stack[-1] = ""
0x1df: Call2 0x11b

0x1e0: Pop(1)
0x1e1: PushEmpty(string)
0x1e2: Stack[-1] = ""
0x1e3: Call2 0x3c3

0x1e4: Pop(1)
0x1e5: Push(Stack[-9])
0x1e6: IF (Stack[-1] == 0) GOTO 0x1ec; Pop(1)

0x1e7: Push("game_choose_pers.xml")
0x1e8: Push((bool) 0)
0x1e9: @ CreateWindow(Stack[-2], Stack[-1], Stack[-5])
0x1ea: Pop(2)
0x1eb: GOTO 0x1f4

0x1ec: PushEmpty(object)
0x1ed: Call2 0x74

0x1ee: Stack[3 + Tasks[-1].StackPointer] = Stack[-1]
0x1ef: Pop(1)
0x1f0: PushEmpty(object)
0x1f1: Call2 0x1c2

0x1f2: Stack[4 + Tasks[-1].StackPointer] = Stack[-1]
0x1f3: Pop(1)
0x1f4: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x1f5: IF (Stack[-1] == 0) GOTO 0x1f9; Pop(1)

0x1f6: @ ProcessEvents()
0x1f7: Pop(0)
0x1f8: GOTO 0x1f4

0x1f9: PushEmpty()
0x1fa: Call2 0x3a8

0x1fb: Pop(0)
0x1fc: Push((int) 1)
0x1fd: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] == Stack[-1])
0x1fe: IF (Stack[-1] == 0) GOTO 0x21a; Pop(1)

0x1ff: Push("menumusic")
0x200: @ PauseSound(Stack[-1])
0x201: Pop(1)
0x202: PushEmpty(int)
0x203: Stack[-1] = (int) 1
0x204: Push(-1, 1); TaskCall(1)
0x205: Call2 0x59

0x206: Pop(-1, 1); TaskReturn
0x207: Pop(1)
0x208: PushEmpty(string, bool)
0x209: Stack[-2] = "intro_danko.wmv"
0x20a: Stack[-1] = (bool) 1
0x20b: Push(-2, 4); TaskCall(0)
0x20c: Call2 0x0

0x20d: Pop(-2, 4); TaskReturn
0x20e: Pop(2)
0x20f: @ RemoveWorld()
0x210: Pop(0)
0x211: @ UISync()
0x212: Pop(0)
0x213: @ DestroyWindow()
0x214: Pop(0)
0x215: Push("world_danko.xml")
0x216: Push("player_danko.xml")
0x217: @ NewGame(Stack[-2], Stack[-1])
0x218: Pop(2)
0x219: GOTO 0x287

0x21a: Push((int) 2)
0x21b: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] == Stack[-1])
0x21c: IF (Stack[-1] == 0) GOTO 0x238; Pop(1)

0x21d: Push("menumusic")
0x21e: @ PauseSound(Stack[-1])
0x21f: Pop(1)
0x220: PushEmpty(int)
0x221: Stack[-1] = (int) 2
0x222: Push(-1, 1); TaskCall(1)
0x223: Call2 0x59

0x224: Pop(-1, 1); TaskReturn
0x225: Pop(1)
0x226: PushEmpty(string, bool)
0x227: Stack[-2] = "intro_burah.wmv"
0x228: Stack[-1] = (bool) 1
0x229: Push(-2, 4); TaskCall(0)
0x22a: Call2 0x0

0x22b: Pop(-2, 4); TaskReturn
0x22c: Pop(2)
0x22d: @ RemoveWorld()
0x22e: Pop(0)
0x22f: @ UISync()
0x230: Pop(0)
0x231: @ DestroyWindow()
0x232: Pop(0)
0x233: Push("world_burah.xml")
0x234: Push("player_burah.xml")
0x235: @ NewGame(Stack[-2], Stack[-1])
0x236: Pop(2)
0x237: GOTO 0x287

0x238: Push((int) 3)
0x239: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] == Stack[-1])
0x23a: IF (Stack[-1] == 0) GOTO 0x256; Pop(1)

0x23b: Push("menumusic")
0x23c: @ PauseSound(Stack[-1])
0x23d: Pop(1)
0x23e: PushEmpty(int)
0x23f: Stack[-1] = (int) 3
0x240: Push(-1, 1); TaskCall(1)
0x241: Call2 0x59

0x242: Pop(-1, 1); TaskReturn
0x243: Pop(1)
0x244: PushEmpty(string, bool)
0x245: Stack[-2] = "intro_klara.wmv"
0x246: Stack[-1] = (bool) 1
0x247: Push(-2, 4); TaskCall(0)
0x248: Call2 0x0

0x249: Pop(-2, 4); TaskReturn
0x24a: Pop(2)
0x24b: @ RemoveWorld()
0x24c: Pop(0)
0x24d: @ UISync()
0x24e: Pop(0)
0x24f: @ DestroyWindow()
0x250: Pop(0)
0x251: Push("world_klara.xml")
0x252: Push("player_klara.xml")
0x253: @ NewGame(Stack[-2], Stack[-1])
0x254: Pop(2)
0x255: GOTO 0x287

0x256: Push((int) 4)
0x257: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] == Stack[-1])
0x258: IF (Stack[-1] == 0) GOTO 0x269; Pop(1)

0x259: Push("menumusic")
0x25a: @ PauseSound(Stack[-1])
0x25b: Pop(1)
0x25c: Push("Loading : ")
0x25d: Pop(1); Push(Stack[-1] + Stack[10 + StackPtr]);
0x25e: @ Trace(Stack[-1])
0x25f: Pop(1)
0x260: @ RemoveWorld()
0x261: Pop(0)
0x262: @ UISync()
0x263: Pop(0)
0x264: @ DestroyWindow()
0x265: Pop(0)
0x266: @ LoadGame(Stack[-4], Stack[-10])
0x267: Pop(0)
0x268: GOTO 0x287

0x269: Push((int) 5)
0x26a: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] == Stack[-1])
0x26b: IF (Stack[-1] == 0) GOTO 0x27a; Pop(1)

0x26c: Pop(0); Push((bool) Stack[9 + Tasks[-1].StackPointer] == 0)
0x26d: IF (Stack[-1] == 0) GOTO 0x273; Pop(1)

0x26e: @ DestroyWindow()
0x26f: Pop(0)
0x270: @ SaveGame(Stack[-3])
0x271: Pop(0)
0x272: GOTO 0x279

0x273: @ DestroyWindow()
0x274: Pop(0)
0x275: @@ GetFileName(Stack[-1])
0x276: Pop(0)
0x277: @ SaveGame(Stack[-2], Stack[-1])
0x278: Pop(0)
0x279: GOTO 0x287

0x27a: Push((int) 7)
0x27b: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] == Stack[-1])
0x27c: IF (Stack[-1] == 0) GOTO 0x287; Pop(1)

0x27d: @ RemoveWorld()
0x27e: Pop(0)
0x27f: @ UISync()
0x280: Pop(0)
0x281: @ DestroyWindow()
0x282: Pop(0)
0x283: Push("world_intro.xml")
0x284: Push("player_intro.xml")
0x285: @ NewGame(Stack[-2], Stack[-1])
0x286: Pop(2)
0x287: Return(); Pop(8)

0x288: PushEmpty()
0x289: Push("newgame")
0x28a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x28b: IF (Stack[-1] == 0) GOTO 0x290; Pop(1)

0x28c: Stack[2 + Tasks[-1].StackPointer] = (int)7
0x28d: @ StopEventProcessing()
0x28e: Pop(0)
0x28f: GOTO 0x397

0x290: Push("quitgame")
0x291: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x292: IF (Stack[-1] == 0) GOTO 0x29a; Pop(1)

0x293: Push("Quit game")
0x294: @ UITrace(Stack[-1])
0x295: Pop(1)
0x296: @ Quit()
0x297: Pop(0)
0x298: Return(); Pop(0)

0x299: GOTO 0x397

0x29a: Push("loadgame")
0x29b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x29c: IF (Stack[-1] == 0) GOTO 0x2a6; Pop(1)

0x29d: PushEmpty()
0x29e: Call2 0x3a8

0x29f: Pop(0)
0x2a0: Push("load.xml")
0x2a1: Push((bool) 0)
0x2a2: @ CreateWindow(Stack[-2], Stack[-1], Stack[-6])
0x2a3: Pop(2)
0x2a4: Return(); Pop(0)

0x2a5: GOTO 0x397

0x2a6: Push("savegame")
0x2a7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2a8: IF (Stack[-1] == 0) GOTO 0x2b2; Pop(1)

0x2a9: PushEmpty()
0x2aa: Call2 0x3a8

0x2ab: Pop(0)
0x2ac: Push("save.xml")
0x2ad: Push((bool) 0)
0x2ae: @ CreateWindow(Stack[-2], Stack[-1], Stack[-7])
0x2af: Pop(2)
0x2b0: Return(); Pop(0)

0x2b1: GOTO 0x397

0x2b2: Push("gameoptions")
0x2b3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2b4: IF (Stack[-1] == 0) GOTO 0x2be; Pop(1)

0x2b5: PushEmpty()
0x2b6: Call2 0x3a8

0x2b7: Pop(0)
0x2b8: Push("options.xml")
0x2b9: Push((bool) 0)
0x2ba: @ CreateWindow(Stack[-2], Stack[-1], Stack[-8])
0x2bb: Pop(2)
0x2bc: Return(); Pop(0)

0x2bd: GOTO 0x397

0x2be: Push("continue")
0x2bf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2c0: IF (Stack[-1] == 0) GOTO 0x2c6; Pop(1)

0x2c1: Stack[2 + Tasks[-1].StackPointer] = (int)6
0x2c2: @ StopEventProcessing()
0x2c3: Pop(0)
0x2c4: Return(); Pop(0)

0x2c5: GOTO 0x397

0x2c6: Push("credits")
0x2c7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2c8: IF (Stack[-1] == 0) GOTO 0x2e4; Pop(1)

0x2c9: PushEmpty()
0x2ca: Call2 0x3a8

0x2cb: Pop(0)
0x2cc: PushEmpty(int)
0x2cd: Stack[-1] = (int) 8
0x2ce: Push(-1, 1); TaskCall(1)
0x2cf: Call2 0x59

0x2d0: Pop(-1, 1); TaskReturn
0x2d1: Pop(1)
0x2d2: PushEmpty(object)
0x2d3: Call2 0x74

0x2d4: Stack[3 + Tasks[-1].StackPointer] = Stack[-1]
0x2d5: Pop(1)
0x2d6: PushEmpty(object)
0x2d7: Call2 0x1c2

0x2d8: Stack[4 + Tasks[-1].StackPointer] = Stack[-1]
0x2d9: Pop(1)
0x2da: Push((bool) 1)
0x2db: @ ShowCursor(Stack[-1])
0x2dc: Pop(1)
0x2dd: @ CaptureKeyboard()
0x2de: Pop(0)
0x2df: PushEmpty(string)
0x2e0: Stack[-1] = ""
0x2e1: Call2 0x11b

0x2e2: Pop(1)
0x2e3: GOTO 0x397

0x2e4: Push("danko")
0x2e5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2e6: IF (Stack[-1] == 0) GOTO 0x307; Pop(1)

0x2e7: Push((int) 0)
0x2e8: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x2e9: IF (Stack[-1] == 0) GOTO 0x2ee; Pop(1)

0x2ea: Stack[2 + Tasks[-1].StackPointer] = (int)1
0x2eb: @ StopEventProcessing()
0x2ec: Pop(0)
0x2ed: GOTO 0x305

0x2ee: Push((int) 1)
0x2ef: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x2f0: IF (Stack[-1] == 0) GOTO 0x2fa; Pop(1)

0x2f1: Push((int) 202)
0x2f2: Push("player_name")
0x2f3: @ SendMessage(Stack[-2], Stack[-1])
0x2f4: Pop(2)
0x2f5: Push((int) 203)
0x2f6: Push("player_desc")
0x2f7: @ SendMessage(Stack[-2], Stack[-1])
0x2f8: Pop(2)
0x2f9: GOTO 0x305

0x2fa: Push((int) 2)
0x2fb: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x2fc: IF (Stack[-1] == 0) GOTO 0x305; Pop(1)

0x2fd: Push((int) -1)
0x2fe: Push("player_name")
0x2ff: @ SendMessage(Stack[-2], Stack[-1])
0x300: Pop(2)
0x301: Push((int) -1)
0x302: Push("player_desc")
0x303: @ SendMessage(Stack[-2], Stack[-1])
0x304: Pop(2)
0x305: Return(); Pop(0)

0x306: GOTO 0x397

0x307: Push("burah")
0x308: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x309: IF (Stack[-1] == 0) GOTO 0x32a; Pop(1)

0x30a: Push((int) 0)
0x30b: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x30c: IF (Stack[-1] == 0) GOTO 0x311; Pop(1)

0x30d: Stack[2 + Tasks[-1].StackPointer] = (int)2
0x30e: @ StopEventProcessing()
0x30f: Pop(0)
0x310: GOTO 0x328

0x311: Push((int) 1)
0x312: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x313: IF (Stack[-1] == 0) GOTO 0x31d; Pop(1)

0x314: Push((int) 205)
0x315: Push("player_name")
0x316: @ SendMessage(Stack[-2], Stack[-1])
0x317: Pop(2)
0x318: Push((int) 206)
0x319: Push("player_desc")
0x31a: @ SendMessage(Stack[-2], Stack[-1])
0x31b: Pop(2)
0x31c: GOTO 0x328

0x31d: Push((int) 2)
0x31e: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x31f: IF (Stack[-1] == 0) GOTO 0x328; Pop(1)

0x320: Push((int) -1)
0x321: Push("player_name")
0x322: @ SendMessage(Stack[-2], Stack[-1])
0x323: Pop(2)
0x324: Push((int) -1)
0x325: Push("player_desc")
0x326: @ SendMessage(Stack[-2], Stack[-1])
0x327: Pop(2)
0x328: Return(); Pop(0)

0x329: GOTO 0x397

0x32a: Push("klara")
0x32b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x32c: IF (Stack[-1] == 0) GOTO 0x36f; Pop(1)

0x32d: Push((int) 0)
0x32e: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x32f: IF (Stack[-1] == 0) GOTO 0x343; Pop(1)

0x330: PushEmpty(bool)
0x331: Stack[-1] = (bool) 0
0x332: PushEmpty(bool)
0x333: Call2 0x3ce

0x334: Pop(0)
0x335: Pop(1); Push((bool) Stack[-1] == 0)
0x336: IF (Stack[-1] == 0) GOTO 0x33d; Pop(1)

0x337: PushEmpty(bool)
0x338: Call2 0x3c6

0x339: Pop(0)
0x33a: Pop(1); Push((bool) Stack[-1] == 0)
0x33b: IF (Stack[-1] == 0) GOTO 0x33d; Pop(1)

0x33c: Stack[-1] = (bool) 1
0x33d: IF (Stack[-1] == 0) GOTO 0x33f; Pop(1)

0x33e: Return(); Pop(0)

0x33f: Stack[2 + Tasks[-1].StackPointer] = (int)3
0x340: @ StopEventProcessing()
0x341: Pop(0)
0x342: GOTO 0x36d

0x343: Push((int) 1)
0x344: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x345: IF (Stack[-1] == 0) GOTO 0x362; Pop(1)

0x346: Push((int) 208)
0x347: Push("player_name")
0x348: @ SendMessage(Stack[-2], Stack[-1])
0x349: Pop(2)
0x34a: PushEmpty(bool)
0x34b: Stack[-1] = (bool) 0
0x34c: PushEmpty(bool)
0x34d: Call2 0x3ce

0x34e: Pop(0)
0x34f: Pop(1); Push((bool) Stack[-1] == 0)
0x350: IF (Stack[-1] == 0) GOTO 0x357; Pop(1)

0x351: PushEmpty(bool)
0x352: Call2 0x3c6

0x353: Pop(0)
0x354: Pop(1); Push((bool) Stack[-1] == 0)
0x355: IF (Stack[-1] == 0) GOTO 0x357; Pop(1)

0x356: Stack[-1] = (bool) 1
0x357: IF (Stack[-1] == 0) GOTO 0x35d; Pop(1)

0x358: Push((int) 213)
0x359: Push("player_desc")
0x35a: @ SendMessage(Stack[-2], Stack[-1])
0x35b: Pop(2)
0x35c: GOTO 0x361

0x35d: Push((int) 209)
0x35e: Push("player_desc")
0x35f: @ SendMessage(Stack[-2], Stack[-1])
0x360: Pop(2)
0x361: GOTO 0x36d

0x362: Push((int) 2)
0x363: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x364: IF (Stack[-1] == 0) GOTO 0x36d; Pop(1)

0x365: Push((int) -1)
0x366: Push("player_name")
0x367: @ SendMessage(Stack[-2], Stack[-1])
0x368: Pop(2)
0x369: Push((int) -1)
0x36a: Push("player_desc")
0x36b: @ SendMessage(Stack[-2], Stack[-1])
0x36c: Pop(2)
0x36d: Return(); Pop(0)

0x36e: GOTO 0x397

0x36f: Push("load")
0x370: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x371: IF (Stack[-1] == 0) GOTO 0x380; Pop(1)

0x372: Push((int) 0)
0x373: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x374: IF (Stack[-1] == 0) GOTO 0x37b; Pop(1)

0x375: Stack[2 + Tasks[-1].StackPointer] = (int)4
0x376: @@ GetFileName(Stack[-10])
0x377: Pop(0)
0x378: @ StopEventProcessing()
0x379: Pop(0)
0x37a: GOTO 0x37e

0x37b: PushEmpty()
0x37c: Call2 0x398

0x37d: Pop(0)
0x37e: Return(); Pop(0)

0x37f: GOTO 0x397

0x380: Push("save")
0x381: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x382: IF (Stack[-1] == 0) GOTO 0x390; Pop(1)

0x383: Push((int) 0)
0x384: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x385: IF (Stack[-1] == 0) GOTO 0x38b; Pop(1)

0x386: Stack[2 + Tasks[-1].StackPointer] = (int)5
0x387: Stack[9 + Tasks[-1].StackPointer] = Stack[-1]
0x388: @ StopEventProcessing()
0x389: Pop(0)
0x38a: GOTO 0x38e

0x38b: PushEmpty()
0x38c: Call2 0x398

0x38d: Pop(0)
0x38e: Return(); Pop(0)

0x38f: GOTO 0x397

0x390: Push("options")
0x391: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x392: IF (Stack[-1] == 0) GOTO 0x397; Pop(1)

0x393: PushEmpty()
0x394: Call2 0x398

0x395: Pop(0)
0x396: Return(); Pop(0)

0x397: Return(); Pop(0)

0x398: PushEmpty(string)
0x399: Stack[-1] = ""
0x39a: Call2 0x11b

0x39b: Pop(1)
0x39c: PushEmpty()
0x39d: Call2 0x3a8

0x39e: Pop(0)
0x39f: PushEmpty(object)
0x3a0: Call2 0x74

0x3a1: Stack[3 + Tasks[-1].StackPointer] = Stack[-1]
0x3a2: Pop(1)
0x3a3: PushEmpty(object)
0x3a4: Call2 0x1c2

0x3a5: Stack[4 + Tasks[-1].StackPointer] = Stack[-1]
0x3a6: Pop(1)
0x3a7: Return(); Pop(0)

0x3a8: Push( Stack[3 + Tasks[-1].StackPointer] )
0x3a9: IF (Stack[-1] == 0) GOTO 0x3ac; Pop(1)

0x3aa: @@ DestroyWindow()
0x3ab: Pop(0)
0x3ac: Push( Stack[4 + Tasks[-1].StackPointer] )
0x3ad: IF (Stack[-1] == 0) GOTO 0x3b0; Pop(1)

0x3ae: @@ DestroyWindow()
0x3af: Pop(0)
0x3b0: Push( Stack[5 + Tasks[-1].StackPointer] )
0x3b1: IF (Stack[-1] == 0) GOTO 0x3b4; Pop(1)

0x3b2: @@ DestroyWindow()
0x3b3: Pop(0)
0x3b4: Push( Stack[6 + Tasks[-1].StackPointer] )
0x3b5: IF (Stack[-1] == 0) GOTO 0x3b8; Pop(1)

0x3b6: @@ DestroyWindow()
0x3b7: Pop(0)
0x3b8: Push( Stack[7 + Tasks[-1].StackPointer] )
0x3b9: IF (Stack[-1] == 0) GOTO 0x3bc; Pop(1)

0x3ba: @@ DestroyWindow()
0x3bb: Pop(0)
0x3bc: Push( Stack[8 + Tasks[-1].StackPointer] )
0x3bd: IF (Stack[-1] == 0) GOTO 0x3c0; Pop(1)

0x3be: @@ DestroyWindow()
0x3bf: Pop(0)
0x3c0: @ CaptureKeyboard()
0x3c1: Pop(0)
0x3c2: Return(); Pop(0)

0x3c3: PushEmpty()
0x3c4: Stack[12 + Tasks[-1].StackPointer] = Stack[-1]
0x3c5: Return(); Pop(0)

0x3c6: PushEmpty(int, int)
0x3c7: Push("BurahCompleted")
0x3c8: Push((int) 0)
0x3c9: @ GetRegistryData(Stack[-3], Stack[-2], Stack[-1])
0x3ca: Pop(2)
0x3cb: Push((int) 0)
0x3cc: Stack[-4] = Stack[-2] != Stack[-1]; Pop(1);
0x3cd: Return(); Pop(2)

0x3ce: PushEmpty(int, int)
0x3cf: Push("DankoCompleted")
0x3d0: Push((int) 0)
0x3d1: @ GetRegistryData(Stack[-3], Stack[-2], Stack[-1])
0x3d2: Pop(2)
0x3d3: Push((int) 0)
0x3d4: Stack[-4] = Stack[-2] != Stack[-1]; Pop(1);
0x3d5: Return(); Pop(2)

