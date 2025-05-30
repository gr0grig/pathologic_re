GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	theater@door1
	pt_b12q01_birdmask_t
	pers_birdmask
	k12q01_birdmask_t.xml
	volonteers_klara
	childs_letter
	pt_b12q01_birdmask_s
	k12q01_birdmask_s.xml
	sobor@door1
	hidden_room@door1
	mnogogrannik@door1
	cot_eva@door1
	termitnik2@door1
	uprava_admin@door1
	final 0
	final 1 locked: 
	init_sobor
	noaglaja
	isobor@door1
	sobor_load
	quest_k12_01_sobor_cutscene
	sobor_cutscene_end
	pt_b12q01_block
	NPC_Block
	k12q01_Block.xml
	pt_b12q01_aglaja
	NPC_Aglaja
	k12q01_Aglaja.xml
	pt_b12q01_kapella
	NPC_Klara
	k12q01_Klara2.xml
	pt_d12q01_burah
	NPC_Burah
	k12q01_Burah.xml
	pt_b12q01_danko
	NPC_Bakalavr
	k12q01_Danko.xml
	sobor_unload
	Remove
	cleanup
	init_theater
	NPC_Mark
	itheater@door1
	theater_load
	quest_k12_01_theater_cutscene
	k12q01TheaterIsVisited
	theater_cutscene_end
	pt_b12q01_birdmask
	k12q01_tbirdmask.xml
	pt_b12q01_whitemask
	pers_whitemask
	k12q01_twhitemask.xml
	theater_unload
	init_hidden_room
	mnogogrannik_han@door1
	mnogogrannik_han@door2
	imnogogrannik_han@door1
	hidden_room_load
	k12q01ChildsAreVisited
	quest_k12_01_hidden_room_cutscene
	hidden_room_cutscene_end
	pt_girl
	pers_littlegirl2
	k12q01_littlegirl.xml
	pt_boy
	pers_littleboy2
	k12q01_littleboy.xml
	hidden_room_unload
	theater_letter
	k12q01
	fail
	completed
	.bin
	GetLocator
	Locator 
	 doesn't exist
	AddStationaryActor
	Door 
	 not found
	locked
	SetProperty
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	GetCategory
	branch
	BurahCompleted
	DankoCompleted
	KlaraCompleted
	add
	vol_
	size
	get
	game_final
	d12q01ChildsAreVisited
	d12q01TheaterIsVisited
	b12q01ChildsAreVisited
	b12q01TheaterIsVisited
	PlayFinalMovie
	fin_termit
	ACHIEVEMENT_HELLO_2
	gameover_termit_chudo.xml
	gameover_termit.xml
	fin_utop
	gameover_utopist_chudo.xml
	gameover_utopist.xml
	fin_smiren
	gameover_smirennik_chudo.xml
	gameover_smirennik.xml
	fin_beda
	gameover_beda_chudo.xml
	gameover_beda.xml
	k12q01BurahInSobor
	k12q01DankoInSobor
	warehouse_rubin
	warehouse_rubin@door1
	cot_eva

Import:
	GetMainOutdoorScene (1 args)
	SetTimeEvent (2 args)
	GetGameTime (1 args)
	Hold (0 args)
	Trace (1 args)
	GetSceneByName (2 args)
	Trigger (2 args)
	SetVariable (2 args)
	GetVariable (2 args)
	RemoveActor (1 args)
	self (1 args)
	AddBlankActor (4 args)
	AddActor (6 args)
	FindActor (2 args)
	Trigger (3 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)
	SetRegistryData (2 args)
	CreateIntVector (1 args)
	UnlockAchievement (1 args)
	GameOver (1 args)
	IsOverrideActive (1 args)

RunOp = 0x12
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (bool, bool, bool, bool, object, object, object, object, object, object, object, object, object, object) Params = 0
		EVENT_9 Op = 0x7c Vars = (int, float)
		EVENT_26 Op = 0xbb Vars = (string)


0x0: PushEmpty(object, object)
0x1: @ GetMainOutdoorScene(Stack[-1])
0x2: Pop(0)
0x3: PushEmpty(string, bool)
0x4: Stack[-2] = "theater@door1"
0x5: Stack[-1] = (bool) 1
0x6: Call2 0x25b

0x7: Pop(2)
0x8: PushEmpty(object, object, string, string, string)
0x9: Stack[-4] = Stack[-6]
0xa: Stack[-3] = "pt_b12q01_birdmask_t"
0xb: Stack[-2] = "pers_birdmask"
0xc: Stack[-1] = "k12q01_birdmask_t.xml"
0xd: Call2 0x249

0xe: Stack[10 + Tasks[-1].StackPointer] = Stack[-5]
0xf: Pop(5)
0x10: Return(); Pop(2)

0x11: Stack[-1] = 0
0x12: PushEmpty(object, float, object, float)
0x13: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x14: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x15: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x16: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x17: PushEmpty()
0x18: Call2 0x506

0x19: Pop(0)
0x1a: Push((int) 0)
0x1b: Push((int) 288)
0x1c: @ SetTimeEvent(Stack[-2], Stack[-1])
0x1d: Pop(2)
0x1e: PushEmpty(int)
0x1f: Call2 0x284

0x20: Pop(0)
0x21: Push((int) 8)
0x22: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x23: IF (Stack[-1] == 0) GOTO 0x2f; Pop(1)

0x24: PushEmpty(bool)
0x25: Call2 0x3de

0x26: Pop(0)
0x27: IF (Stack[-1] == 0) GOTO 0x2e; Pop(1)

0x28: PushEmpty(bool, string, string, string)
0x29: Stack[-3] = "volonteers_klara"
0x2a: Stack[-2] = "childs_letter"
0x2b: Stack[-1] = ""
0x2c: Call2 0x26c

0x2d: Pop(4)
0x2e: GOTO 0x33

0x2f: Push((int) 1)
0x30: Push((int) 272)
0x31: @ SetTimeEvent(Stack[-2], Stack[-1])
0x32: Pop(2)
0x33: PushEmpty(int)
0x34: Stack[-1] = (int) 0
0x35: Call2 0x408

0x36: Pop(1)
0x37: PushEmpty()
0x38: Call2 0x28c

0x39: Pop(0)
0x3a: PushEmpty()
0x3b: Call2 0x299

0x3c: Pop(0)
0x3d: @ GetMainOutdoorScene(Stack[-2])
0x3e: Pop(0)
0x3f: PushEmpty(object, object, string, string, string)
0x40: Stack[-4] = Stack[-7]
0x41: Stack[-3] = "pt_b12q01_birdmask_s"
0x42: Stack[-2] = "pers_birdmask"
0x43: Stack[-1] = "k12q01_birdmask_s.xml"
0x44: Call2 0x249

0x45: Stack[4 + Tasks[-1].StackPointer] = Stack[-5]
0x46: Pop(5)
0x47: PushEmpty(string, bool)
0x48: Stack[-2] = "sobor@door1"
0x49: Stack[-1] = (bool) 1
0x4a: Call2 0x25b

0x4b: Pop(2)
0x4c: PushEmpty(string, bool)
0x4d: Stack[-2] = "hidden_room@door1"
0x4e: Stack[-1] = (bool) 1
0x4f: Call2 0x25b

0x50: Pop(2)
0x51: PushEmpty(string, bool)
0x52: Stack[-2] = "mnogogrannik@door1"
0x53: Stack[-1] = (bool) 1
0x54: Call2 0x25b

0x55: Pop(2)
0x56: PushEmpty(string, bool)
0x57: Stack[-2] = "cot_eva@door1"
0x58: Stack[-1] = (bool) 0
0x59: Call2 0x25b

0x5a: Pop(2)
0x5b: PushEmpty(string, bool)
0x5c: Stack[-2] = "termitnik2@door1"
0x5d: Stack[-1] = (bool) 0
0x5e: Call2 0x25b

0x5f: Pop(2)
0x60: PushEmpty(string, bool)
0x61: Stack[-2] = "uprava_admin@door1"
0x62: Stack[-1] = (bool) 0
0x63: Call2 0x25b

0x64: Pop(2)
0x65: @ GetGameTime(Stack[-1])
0x66: Pop(0)
0x67: Push((int) 271)
0x68: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x69: IF (Stack[-1] == 0) GOTO 0x74; Pop(1)

0x6a: PushEmpty(string, bool)
0x6b: Stack[-2] = "theater@door1"
0x6c: Stack[-1] = (bool) 0
0x6d: Call2 0x25b

0x6e: Pop(2)
0x6f: Push((int) 2)
0x70: Push((int) 271)
0x71: @ SetTimeEvent(Stack[-2], Stack[-1])
0x72: Pop(2)
0x73: GOTO 0x77

0x74: PushEmpty()
0x75: Call2 0x0

0x76: Pop(0)
0x77: @ Hold()
0x78: Pop(0)
0x79: GOTO 0x77

0x7a: Return(); Pop(4)

0x7b: Stack[-2] = 0
0x7c: PushEmpty(float, float)
0x7d: EventDisable(26)
0x7e: EventDisable(9)
0x7f: Push((int) 0)
0x80: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x81: IF (Stack[-1] == 0) GOTO 0xa2; Pop(1)

0x82: Push("final 0")
0x83: @ Trace(Stack[-1])
0x84: Pop(1)
0x85: PushEmpty(bool)
0x86: Stack[-1] = (bool) 1
0x87: Push( Stack[3 + Tasks[-1].StackPointer] )
0x88: IF (Stack[-1] == 0) GOTO 0x8f; Pop(1)

0x89: PushEmpty(bool)
0x8a: Call2 0x501

0x8b: Pop(0)
0x8c: Pop(1); Push((bool) Stack[-1] == 0)
0x8d: IF (Stack[-1] == 0) GOTO 0x8f; Pop(1)

0x8e: Stack[-1] = (bool) 0
0x8f: IF (Stack[-1] == 0) GOTO 0x9e; Pop(1)

0x90: Push("final 1 locked: ")
0x91: Pop(1); Push(Stack[-1] + Stack[3 + StackPtr]);
0x92: @ Trace(Stack[-1])
0x93: Pop(1)
0x94: @ GetGameTime(Stack[-1])
0x95: Pop(0)
0x96: Push((float)0.00833)
0x97: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x98: Push((int) 0)
0x99: @ SetTimeEvent(Stack[-1], Stack[-2])
0x9a: Pop(1)
0x9b: EventEnable(26)
0x9c: EventEnable(9)
0x9d: Return(); Pop(2)

0x9e: PushEmpty()
0x9f: Call2 0x413

0xa0: Pop(0)
0xa1: GOTO 0xba

0xa2: Push((int) 1)
0xa3: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0xa4: IF (Stack[-1] == 0) GOTO 0xb2; Pop(1)

0xa5: PushEmpty(bool)
0xa6: Call2 0x3de

0xa7: Pop(0)
0xa8: IF (Stack[-1] == 0) GOTO 0xaf; Pop(1)

0xa9: PushEmpty(bool, string, string, string)
0xaa: Stack[-3] = "volonteers_klara"
0xab: Stack[-2] = "childs_letter"
0xac: Stack[-1] = ""
0xad: Call2 0x26c

0xae: Pop(4)
0xaf: EventEnable(26)
0xb0: EventEnable(9)
0xb1: GOTO 0xba

0xb2: Push((int) 2)
0xb3: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0xb4: IF (Stack[-1] == 0) GOTO 0xba; Pop(1)

0xb5: PushEmpty()
0xb6: Call2 0x0

0xb7: Pop(0)
0xb8: EventEnable(26)
0xb9: EventEnable(9)
0xba: Return(); Pop(2)

0xbb: PushEmpty(object, object, object, object, int, object, object, object, object, int)
0xbc: @ Trace(Stack[-11])
0xbd: Pop(0)
0xbe: Push("init_sobor")
0xbf: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0xc0: IF (Stack[-1] == 0) GOTO 0xd4; Pop(1)

0xc1: Push("sobor")
0xc2: @ GetSceneByName(Stack[-6], Stack[-1])
0xc3: Pop(1)
0xc4: Push("noaglaja")
0xc5: @ Trigger(Stack[-6], Stack[-1])
0xc6: Pop(1)
0xc7: PushEmpty(string, bool)
0xc8: Stack[-2] = "isobor@door1"
0xc9: Stack[-1] = (bool) 1
0xca: Call2 0x25b

0xcb: Pop(2)
0xcc: PushEmpty(string, bool)
0xcd: Stack[-2] = "sobor@door1"
0xce: Stack[-1] = (bool) 0
0xcf: Call2 0x25b

0xd0: Pop(2)
0xd1: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0xd2: Stack[-5] = 0
0xd3: GOTO 0x20e

0xd4: Push("sobor_load")
0xd5: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0xd6: IF (Stack[-1] == 0) GOTO 0xdf; Pop(1)

0xd7: Push( Stack[1 + Tasks[-1].StackPointer] )
0xd8: IF (Stack[-1] == 0) GOTO 0xde; Pop(1)

0xd9: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xda: PushEmpty(object, string)
0xdb: Stack[-1] = "quest_k12_01_sobor_cutscene"
0xdc: Call2 0x22c

0xdd: Pop(2)
0xde: GOTO 0x20e

0xdf: Push("sobor_cutscene_end")
0xe0: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0xe1: IF (Stack[-1] == 0) GOTO 0x117; Pop(1)

0xe2: Push("sobor")
0xe3: @ GetSceneByName(Stack[-5], Stack[-1])
0xe4: Pop(1)
0xe5: PushEmpty(object, object, string, string, string)
0xe6: Stack[-4] = Stack[-9]
0xe7: Stack[-3] = "pt_b12q01_block"
0xe8: Stack[-2] = "NPC_Block"
0xe9: Stack[-1] = "k12q01_Block.xml"
0xea: Call2 0x237

0xeb: Stack[5 + Tasks[-1].StackPointer] = Stack[-5]
0xec: Pop(5)
0xed: PushEmpty(object, object, string, string, string)
0xee: Stack[-4] = Stack[-9]
0xef: Stack[-3] = "pt_b12q01_aglaja"
0xf0: Stack[-2] = "NPC_Aglaja"
0xf1: Stack[-1] = "k12q01_Aglaja.xml"
0xf2: Call2 0x237

0xf3: Stack[6 + Tasks[-1].StackPointer] = Stack[-5]
0xf4: Pop(5)
0xf5: PushEmpty(object, object, string, string, string)
0xf6: Stack[-4] = Stack[-9]
0xf7: Stack[-3] = "pt_b12q01_kapella"
0xf8: Stack[-2] = "NPC_Klara"
0xf9: Stack[-1] = "k12q01_Klara2.xml"
0xfa: Call2 0x237

0xfb: Stack[7 + Tasks[-1].StackPointer] = Stack[-5]
0xfc: Pop(5)
0xfd: PushEmpty(bool)
0xfe: Call2 0x4f3

0xff: Pop(0)
0x100: IF (Stack[-1] == 0) GOTO 0x109; Pop(1)

0x101: PushEmpty(object, object, string, string, string)
0x102: Stack[-4] = Stack[-9]
0x103: Stack[-3] = "pt_d12q01_burah"
0x104: Stack[-2] = "NPC_Burah"
0x105: Stack[-1] = "k12q01_Burah.xml"
0x106: Call2 0x237

0x107: Stack[8 + Tasks[-1].StackPointer] = Stack[-5]
0x108: Pop(5)
0x109: PushEmpty(bool)
0x10a: Call2 0x4fa

0x10b: Pop(0)
0x10c: IF (Stack[-1] == 0) GOTO 0x115; Pop(1)

0x10d: PushEmpty(object, object, string, string, string)
0x10e: Stack[-4] = Stack[-9]
0x10f: Stack[-3] = "pt_b12q01_danko"
0x110: Stack[-2] = "NPC_Bakalavr"
0x111: Stack[-1] = "k12q01_Danko.xml"
0x112: Call2 0x237

0x113: Stack[9 + Tasks[-1].StackPointer] = Stack[-5]
0x114: Pop(5)
0x115: Stack[-4] = 0
0x116: GOTO 0x20e

0x117: Push("sobor_unload")
0x118: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0x119: IF (Stack[-1] == 0) GOTO 0x140; Pop(1)

0x11a: Push( Stack[1 + Tasks[-1].StackPointer] )
0x11b: IF (Stack[-1] == 0) GOTO 0x13f; Pop(1)

0x11c: Push( Stack[4 + Tasks[-1].StackPointer] )
0x11d: IF (Stack[-1] == 0) GOTO 0x120; Pop(1)

0x11e: @@ Remove()
0x11f: Pop(0)
0x120: Push( Stack[5 + Tasks[-1].StackPointer] )
0x121: IF (Stack[-1] == 0) GOTO 0x125; Pop(1)

0x122: Push("cleanup")
0x123: @ Trigger(Stack[-5], Stack[-1])
0x124: Pop(1)
0x125: Push( Stack[6 + Tasks[-1].StackPointer] )
0x126: IF (Stack[-1] == 0) GOTO 0x12a; Pop(1)

0x127: Push("cleanup")
0x128: @ Trigger(Stack[-6], Stack[-1])
0x129: Pop(1)
0x12a: Push( Stack[7 + Tasks[-1].StackPointer] )
0x12b: IF (Stack[-1] == 0) GOTO 0x12f; Pop(1)

0x12c: Push("cleanup")
0x12d: @ Trigger(Stack[-7], Stack[-1])
0x12e: Pop(1)
0x12f: Push( Stack[8 + Tasks[-1].StackPointer] )
0x130: IF (Stack[-1] == 0) GOTO 0x134; Pop(1)

0x131: Push("cleanup")
0x132: @ Trigger(Stack[-8], Stack[-1])
0x133: Pop(1)
0x134: Push( Stack[9 + Tasks[-1].StackPointer] )
0x135: IF (Stack[-1] == 0) GOTO 0x139; Pop(1)

0x136: Push("cleanup")
0x137: @ Trigger(Stack[-9], Stack[-1])
0x138: Pop(1)
0x139: PushEmpty(string, bool)
0x13a: Stack[-2] = "sobor@door1"
0x13b: Stack[-1] = (bool) 1
0x13c: Call2 0x25b

0x13d: Pop(2)
0x13e: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x13f: GOTO 0x20e

0x140: Push("init_theater")
0x141: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0x142: IF (Stack[-1] == 0) GOTO 0x153; Pop(1)

0x143: PushEmpty(bool, string)
0x144: Stack[-1] = "NPC_Mark"
0x145: Call2 0x278

0x146: Pop(2)
0x147: PushEmpty(string, bool)
0x148: Stack[-2] = "itheater@door1"
0x149: Stack[-1] = (bool) 1
0x14a: Call2 0x25b

0x14b: Pop(2)
0x14c: PushEmpty(string, bool)
0x14d: Stack[-2] = "theater@door1"
0x14e: Stack[-1] = (bool) 0
0x14f: Call2 0x25b

0x150: Pop(2)
0x151: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x152: GOTO 0x20e

0x153: Push("theater_load")
0x154: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0x155: IF (Stack[-1] == 0) GOTO 0x162; Pop(1)

0x156: Push( Stack[0 + Tasks[-1].StackPointer] )
0x157: IF (Stack[-1] == 0) GOTO 0x161; Pop(1)

0x158: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x159: PushEmpty(object, string)
0x15a: Stack[-1] = "quest_k12_01_theater_cutscene"
0x15b: Call2 0x22c

0x15c: Pop(2)
0x15d: Push("k12q01TheaterIsVisited")
0x15e: Push((int) 1)
0x15f: @ SetVariable(Stack[-2], Stack[-1])
0x160: Pop(2)
0x161: GOTO 0x20e

0x162: Push("theater_cutscene_end")
0x163: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0x164: IF (Stack[-1] == 0) GOTO 0x17a; Pop(1)

0x165: Push("theater")
0x166: @ GetSceneByName(Stack[-4], Stack[-1])
0x167: Pop(1)
0x168: PushEmpty(object, object, string, string, string)
0x169: Stack[-4] = Stack[-8]
0x16a: Stack[-3] = "pt_b12q01_birdmask"
0x16b: Stack[-2] = "pers_birdmask"
0x16c: Stack[-1] = "k12q01_tbirdmask.xml"
0x16d: Call2 0x237

0x16e: Stack[10 + Tasks[-1].StackPointer] = Stack[-5]
0x16f: Pop(5)
0x170: PushEmpty(object, object, string, string, string)
0x171: Stack[-4] = Stack[-8]
0x172: Stack[-3] = "pt_b12q01_whitemask"
0x173: Stack[-2] = "pers_whitemask"
0x174: Stack[-1] = "k12q01_twhitemask.xml"
0x175: Call2 0x237

0x176: Stack[11 + Tasks[-1].StackPointer] = Stack[-5]
0x177: Pop(5)
0x178: Stack[-3] = 0
0x179: GOTO 0x20e

0x17a: Push("theater_unload")
0x17b: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0x17c: IF (Stack[-1] == 0) GOTO 0x190; Pop(1)

0x17d: Push( Stack[0 + Tasks[-1].StackPointer] )
0x17e: IF (Stack[-1] == 0) GOTO 0x18f; Pop(1)

0x17f: Push( Stack[10 + Tasks[-1].StackPointer] )
0x180: IF (Stack[-1] == 0) GOTO 0x184; Pop(1)

0x181: Push("cleanup")
0x182: @ Trigger(Stack[-10], Stack[-1])
0x183: Pop(1)
0x184: Push( Stack[11 + Tasks[-1].StackPointer] )
0x185: IF (Stack[-1] == 0) GOTO 0x189; Pop(1)

0x186: Push("cleanup")
0x187: @ Trigger(Stack[-11], Stack[-1])
0x188: Pop(1)
0x189: PushEmpty(string, bool)
0x18a: Stack[-2] = "theater@door1"
0x18b: Stack[-1] = (bool) 1
0x18c: Call2 0x25b

0x18d: Pop(2)
0x18e: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x18f: GOTO 0x20e

0x190: Push("init_hidden_room")
0x191: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0x192: IF (Stack[-1] == 0) GOTO 0x1ae; Pop(1)

0x193: PushEmpty(string, bool)
0x194: Stack[-2] = "mnogogrannik_han@door1"
0x195: Stack[-1] = (bool) 0
0x196: Call2 0x25b

0x197: Pop(2)
0x198: PushEmpty(string, bool)
0x199: Stack[-2] = "mnogogrannik_han@door2"
0x19a: Stack[-1] = (bool) 0
0x19b: Call2 0x25b

0x19c: Pop(2)
0x19d: PushEmpty(string, bool)
0x19e: Stack[-2] = "hidden_room@door1"
0x19f: Stack[-1] = (bool) 0
0x1a0: Call2 0x25b

0x1a1: Pop(2)
0x1a2: PushEmpty(string, bool)
0x1a3: Stack[-2] = "imnogogrannik_han@door1"
0x1a4: Stack[-1] = (bool) 0
0x1a5: Call2 0x25b

0x1a6: Pop(2)
0x1a7: PushEmpty(string, bool)
0x1a8: Stack[-2] = "mnogogrannik@door1"
0x1a9: Stack[-1] = (bool) 0
0x1aa: Call2 0x25b

0x1ab: Pop(2)
0x1ac: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x1ad: GOTO 0x20e

0x1ae: Push("hidden_room_load")
0x1af: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0x1b0: IF (Stack[-1] == 0) GOTO 0x1bd; Pop(1)

0x1b1: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1b2: IF (Stack[-1] == 0) GOTO 0x1bc; Pop(1)

0x1b3: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1b4: Push("k12q01ChildsAreVisited")
0x1b5: Push((int) 1)
0x1b6: @ SetVariable(Stack[-2], Stack[-1])
0x1b7: Pop(2)
0x1b8: PushEmpty(object, string)
0x1b9: Stack[-1] = "quest_k12_01_hidden_room_cutscene"
0x1ba: Call2 0x22c

0x1bb: Pop(2)
0x1bc: GOTO 0x20e

0x1bd: Push("hidden_room_cutscene_end")
0x1be: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0x1bf: IF (Stack[-1] == 0) GOTO 0x1d5; Pop(1)

0x1c0: Push("hidden_room")
0x1c1: @ GetSceneByName(Stack[-3], Stack[-1])
0x1c2: Pop(1)
0x1c3: PushEmpty(object, object, string, string, string)
0x1c4: Stack[-4] = Stack[-7]
0x1c5: Stack[-3] = "pt_girl"
0x1c6: Stack[-2] = "pers_littlegirl2"
0x1c7: Stack[-1] = "k12q01_littlegirl.xml"
0x1c8: Call2 0x237

0x1c9: Stack[12 + Tasks[-1].StackPointer] = Stack[-5]
0x1ca: Pop(5)
0x1cb: PushEmpty(object, object, string, string, string)
0x1cc: Stack[-4] = Stack[-7]
0x1cd: Stack[-3] = "pt_boy"
0x1ce: Stack[-2] = "pers_littleboy2"
0x1cf: Stack[-1] = "k12q01_littleboy.xml"
0x1d0: Call2 0x237

0x1d1: Stack[13 + Tasks[-1].StackPointer] = Stack[-5]
0x1d2: Pop(5)
0x1d3: Stack[-2] = 0
0x1d4: GOTO 0x20e

0x1d5: Push("hidden_room_unload")
0x1d6: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0x1d7: IF (Stack[-1] == 0) GOTO 0x1f0; Pop(1)

0x1d8: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1d9: IF (Stack[-1] == 0) GOTO 0x1ef; Pop(1)

0x1da: PushEmpty(string, bool)
0x1db: Stack[-2] = "hidden_room@door1"
0x1dc: Stack[-1] = (bool) 1
0x1dd: Call2 0x25b

0x1de: Pop(2)
0x1df: PushEmpty(string, bool)
0x1e0: Stack[-2] = "mnogogrannik@door1"
0x1e1: Stack[-1] = (bool) 1
0x1e2: Call2 0x25b

0x1e3: Pop(2)
0x1e4: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x1e5: PushEmpty(bool)
0x1e6: Call2 0x3f5

0x1e7: Pop(0)
0x1e8: IF (Stack[-1] == 0) GOTO 0x1ef; Pop(1)

0x1e9: PushEmpty(bool, string, string, string)
0x1ea: Stack[-3] = "volonteers_klara"
0x1eb: Stack[-2] = "theater_letter"
0x1ec: Stack[-1] = ""
0x1ed: Call2 0x26c

0x1ee: Pop(4)
0x1ef: GOTO 0x20e

0x1f0: Push("cleanup")
0x1f1: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0x1f2: IF (Stack[-1] == 0) GOTO 0x201; Pop(1)

0x1f3: Push("k12q01")
0x1f4: @ GetVariable(Stack[-1], Stack[-2])
0x1f5: Pop(1)
0x1f6: Push((int) 1000)
0x1f7: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x1f8: IF (Stack[-1] == 0) GOTO 0x1fd; Pop(1)

0x1f9: PushEmpty()
0x1fa: Call2 0x20f

0x1fb: Pop(0)
0x1fc: GOTO 0x200

0x1fd: PushEmpty()
0x1fe: Call2 0x21f

0x1ff: Pop(0)
0x200: GOTO 0x20e

0x201: Push("fail")
0x202: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0x203: IF (Stack[-1] == 0) GOTO 0x208; Pop(1)

0x204: PushEmpty()
0x205: Call2 0x20f

0x206: Pop(0)
0x207: GOTO 0x20e

0x208: Push("completed")
0x209: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0x20a: IF (Stack[-1] == 0) GOTO 0x20e; Pop(1)

0x20b: PushEmpty()
0x20c: Call2 0x217

0x20d: Pop(0)
0x20e: Return(); Pop(10)

0x20f: Push("k12q01")
0x210: Push((int) -1)
0x211: @ SetVariable(Stack[-2], Stack[-1])
0x212: Pop(2)
0x213: PushEmpty()
0x214: Call2 0x21f

0x215: Pop(0)
0x216: Return(); Pop(0)

0x217: Push("k12q01")
0x218: Push((int) 1000)
0x219: @ SetVariable(Stack[-2], Stack[-1])
0x21a: Pop(2)
0x21b: PushEmpty()
0x21c: Call2 0x21f

0x21d: Pop(0)
0x21e: Return(); Pop(0)

0x21f: EventDisable(26)
0x220: PushEmpty(object)
0x221: Call2 0x226

0x222: Pop(0)
0x223: @ RemoveActor(Stack[-1])
0x224: Pop(1)
0x225: Return(); Pop(0)

0x226: PushEmpty(object, object)
0x227: @ self(Stack[-1])
0x228: Pop(0)
0x229: Stack[-3] = Stack[-1]
0x22a: Return(); Pop(2)

0x22b: Stack[-1] = 0
0x22c: PushEmpty(object, object, object, object)
0x22d: @ GetMainOutdoorScene(Stack[-2])
0x22e: Pop(0)
0x22f: Push(".bin")
0x230: Pop(1); Push(Stack[-6] + Stack[-1]);
0x231: @ AddBlankActor(Stack[-2], Stack[-3], Stack[-6], Stack[-1])
0x232: Pop(1)
0x233: Stack[-6] = Stack[-1]
0x234: Return(); Pop(4)

0x235: Stack[-1] = 0
0x236: Stack[-2] = 0
0x237: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x238: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0x239: Pop(0)
0x23a: Pop(0); Push((bool) Stack[-4] == 0)
0x23b: IF (Stack[-1] == 0) GOTO 0x244; Pop(1)

0x23c: Push("Locator ")
0x23d: Pop(1); Push(Stack[-1] + Stack[-12]);
0x23e: Push(" doesn't exist")
0x23f: Pop(2); Push(Stack[-2] + Stack[-1]);
0x240: @ Trace(Stack[-1])
0x241: Pop(1)
0x242: Stack[-1] = 0
0x243: GOTO 0x246

0x244: @ AddActor(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0x245: Pop(0)
0x246: Stack[-13] = Stack[-1]
0x247: Return(); Pop(8)

0x248: Stack[-1] = 0
0x249: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x24a: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0x24b: Pop(0)
0x24c: Pop(0); Push((bool) Stack[-4] == 0)
0x24d: IF (Stack[-1] == 0) GOTO 0x256; Pop(1)

0x24e: Push("Locator ")
0x24f: Pop(1); Push(Stack[-1] + Stack[-12]);
0x250: Push(" doesn't exist")
0x251: Pop(2); Push(Stack[-2] + Stack[-1]);
0x252: @ Trace(Stack[-1])
0x253: Pop(1)
0x254: Stack[-1] = 0
0x255: GOTO 0x258

0x256: @@ AddStationaryActor(Stack[-1], Stack[-3], Stack[-2], Stack[-10], Stack[-9])
0x257: Pop(0)
0x258: Stack[-13] = Stack[-1]
0x259: Return(); Pop(8)

0x25a: Stack[-1] = 0
0x25b: PushEmpty(object, object)
0x25c: @ FindActor(Stack[-1], Stack[-4])
0x25d: Pop(0)
0x25e: Pop(0); Push((bool) Stack[-1] == 0)
0x25f: IF (Stack[-1] == 0) GOTO 0x267; Pop(1)

0x260: Push("Door ")
0x261: Pop(1); Push(Stack[-1] + Stack[-5]);
0x262: Push(" not found")
0x263: Pop(2); Push(Stack[-2] + Stack[-1]);
0x264: @ Trace(Stack[-1])
0x265: Pop(1)
0x266: GOTO 0x26a

0x267: Push("locked")
0x268: @@ SetProperty(Stack[-1], Stack[-4])
0x269: Pop(1)
0x26a: Return(); Pop(2)

0x26b: Stack[-1] = 0
0x26c: PushEmpty(object, object)
0x26d: @ FindActor(Stack[-1], Stack[-5])
0x26e: Pop(0)
0x26f: Pop(0); Push((bool) Stack[-1] == 0)
0x270: IF (Stack[-1] == 0) GOTO 0x273; Pop(1)

0x271: Stack[-6] = (bool) 0
0x272: Return(); Pop(2)

0x273: @ Trigger(Stack[-1], Stack[-4], Stack[-3])
0x274: Pop(0)
0x275: Stack[-6] = (bool) 1
0x276: Return(); Pop(2)

0x277: Stack[-1] = 0
0x278: PushEmpty(object, object)
0x279: @ FindActor(Stack[-1], Stack[-3])
0x27a: Pop(0)
0x27b: Pop(0); Push((bool) Stack[-1] == 0)
0x27c: IF (Stack[-1] == 0) GOTO 0x27f; Pop(1)

0x27d: Stack[-4] = (bool) 0
0x27e: Return(); Pop(2)

0x27f: @ RemoveActor(Stack[-1])
0x280: Pop(0)
0x281: Stack[-4] = (bool) 1
0x282: Return(); Pop(2)

0x283: Stack[-1] = 0
0x284: PushEmpty(float, float)
0x285: @ GetGameTime(Stack[-1])
0x286: Pop(0)
0x287: PushEmpty(int)
0x288: Stack[-1] = Stack[-2]
0x289: Push((int) 24)
0x28a: Stack[-5] = Stack[-2] % Stack[-1]; Pop(2);
0x28b: Return(); Pop(2)

0x28c: PushEmpty(object, object)
0x28d: Push((int) 729)
0x28e: Push((int) 1)
0x28f: Push((int) 539359)
0x290: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x291: Pop(3)
0x292: PushEmpty(bool, object, int)
0x293: Stack[-2] = Stack[-4]
0x294: Stack[-1] = (int) -1
0x295: Call2 0x2b3

0x296: Pop(3)
0x297: Return(); Pop(2)

0x298: Stack[-1] = 0
0x299: PushEmpty(object, object)
0x29a: Push((int) 735)
0x29b: Push((int) 1)
0x29c: Push((int) 539365)
0x29d: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x29e: Pop(3)
0x29f: PushEmpty(bool, object, int)
0x2a0: Stack[-2] = Stack[-4]
0x2a1: Stack[-1] = (int) 729
0x2a2: Call2 0x2b3

0x2a3: Pop(3)
0x2a4: Return(); Pop(2)

0x2a5: Stack[-1] = 0
0x2a6: PushEmpty(object, object)
0x2a7: @ GetDiaryRoot(Stack[-1])
0x2a8: Pop(0)
0x2a9: Pop(0); Push((bool) Stack[-1] == 0)
0x2aa: IF (Stack[-1] == 0) GOTO 0x2b0; Pop(1)

0x2ab: Push("Can't retrieve diary root")
0x2ac: @ Trace(Stack[-1])
0x2ad: Pop(1)
0x2ae: Stack[-3] = (bool) 0
0x2af: Return(); Pop(2)

0x2b0: Stack[-3] = Stack[-1]
0x2b1: Return(); Pop(2)

0x2b2: Stack[-1] = 0
0x2b3: PushEmpty(object, object, int, object, object, int)
0x2b4: PushEmpty(object)
0x2b5: Call2 0x2a6

0x2b6: Stack[-4] = Stack[-1]
0x2b7: Pop(1)
0x2b8: @@ Find(Stack[-7], Stack[-2])
0x2b9: Pop(0)
0x2ba: Pop(0); Push((bool) Stack[-2] == 0)
0x2bb: IF (Stack[-1] == 0) GOTO 0x2c2; Pop(1)

0x2bc: Push("Can't find diary parent with id: ")
0x2bd: Pop(1); Push(Stack[-1] + Stack[-8]);
0x2be: @ Trace(Stack[-1])
0x2bf: Pop(1)
0x2c0: Stack[-9] = (bool) 0
0x2c1: Return(); Pop(6)

0x2c2: @@ AddChild(Stack[-8])
0x2c3: Pop(0)
0x2c4: Push((int) 7)
0x2c5: @ SendWorldWndMessage(Stack[-1])
0x2c6: Pop(1)
0x2c7: @@ GetCategory(Stack[-1])
0x2c8: Pop(0)
0x2c9: @ SetDiarySection(Stack[-1])
0x2ca: Pop(0)
0x2cb: Stack[-9] = (bool) 0
0x2cc: Return(); Pop(6)

0x2cd: Stack[-2] = 0
0x2ce: Stack[-3] = 0
0x2cf: PushEmpty(int, int)
0x2d0: Push("branch")
0x2d1: @ GetVariable(Stack[-1], Stack[-2])
0x2d2: Pop(1)
0x2d3: Stack[-3] = Stack[-1]
0x2d4: Return(); Pop(2)

0x2d5: PushEmpty(int)
0x2d6: Call2 0x2cf

0x2d7: Pop(0)
0x2d8: Push((int) 1)
0x2d9: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x2da: IF (Stack[-1] == 0) GOTO 0x2e0; Pop(1)

0x2db: Push("BurahCompleted")
0x2dc: Push((int) 1)
0x2dd: @ SetRegistryData(Stack[-2], Stack[-1])
0x2de: Pop(2)
0x2df: GOTO 0x2f5

0x2e0: PushEmpty(int)
0x2e1: Call2 0x2cf

0x2e2: Pop(0)
0x2e3: Push((int) 0)
0x2e4: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x2e5: IF (Stack[-1] == 0) GOTO 0x2eb; Pop(1)

0x2e6: Push("DankoCompleted")
0x2e7: Push((int) 1)
0x2e8: @ SetRegistryData(Stack[-2], Stack[-1])
0x2e9: Pop(2)
0x2ea: GOTO 0x2f5

0x2eb: PushEmpty(int)
0x2ec: Call2 0x2cf

0x2ed: Pop(0)
0x2ee: Push((int) 2)
0x2ef: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x2f0: IF (Stack[-1] == 0) GOTO 0x2f5; Pop(1)

0x2f1: Push("KlaraCompleted")
0x2f2: Push((int) 1)
0x2f3: @ SetRegistryData(Stack[-2], Stack[-1])
0x2f4: Pop(2)
0x2f5: Return(); Pop(0)

0x2f6: PushEmpty()
0x2f7: Push((int) 18)
0x2f8: @@ add(Stack[-1])
0x2f9: Pop(1)
0x2fa: Push((int) 24)
0x2fb: @@ add(Stack[-1])
0x2fc: Pop(1)
0x2fd: Push((int) 20)
0x2fe: @@ add(Stack[-1])
0x2ff: Pop(1)
0x300: Push((int) 14)
0x301: @@ add(Stack[-1])
0x302: Pop(1)
0x303: Push((bool) 0)
0x304: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x305: IF (Stack[-1] == 0) GOTO 0x310; Pop(1)

0x306: Push((int) 10)
0x307: @@ add(Stack[-1])
0x308: Pop(1)
0x309: Push((int) 17)
0x30a: @@ add(Stack[-1])
0x30b: Pop(1)
0x30c: Push((int) 8)
0x30d: @@ add(Stack[-1])
0x30e: Pop(1)
0x30f: GOTO 0x316

0x310: Push((int) 1)
0x311: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x312: IF (Stack[-1] == 0) GOTO 0x316; Pop(1)

0x313: Push((int) 10)
0x314: @@ add(Stack[-1])
0x315: Pop(1)
0x316: Return(); Pop(0)

0x317: PushEmpty()
0x318: Push((int) 6)
0x319: @@ add(Stack[-1])
0x31a: Pop(1)
0x31b: Push((int) 26)
0x31c: @@ add(Stack[-1])
0x31d: Pop(1)
0x31e: Push((int) 2)
0x31f: @@ add(Stack[-1])
0x320: Pop(1)
0x321: Push((int) 22)
0x322: @@ add(Stack[-1])
0x323: Pop(1)
0x324: Push((bool) 0)
0x325: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x326: IF (Stack[-1] == 0) GOTO 0x331; Pop(1)

0x327: Push((int) 15)
0x328: @@ add(Stack[-1])
0x329: Pop(1)
0x32a: Push((int) 5)
0x32b: @@ add(Stack[-1])
0x32c: Pop(1)
0x32d: Push((int) 16)
0x32e: @@ add(Stack[-1])
0x32f: Pop(1)
0x330: GOTO 0x337

0x331: Push((int) 0)
0x332: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x333: IF (Stack[-1] == 0) GOTO 0x337; Pop(1)

0x334: Push((int) 15)
0x335: @@ add(Stack[-1])
0x336: Pop(1)
0x337: Return(); Pop(0)

0x338: PushEmpty()
0x339: Push((int) 7)
0x33a: @@ add(Stack[-1])
0x33b: Pop(1)
0x33c: Push((int) 23)
0x33d: @@ add(Stack[-1])
0x33e: Pop(1)
0x33f: Push((int) 21)
0x340: @@ add(Stack[-1])
0x341: Pop(1)
0x342: Push((int) 9)
0x343: @@ add(Stack[-1])
0x344: Pop(1)
0x345: Push((int) 3)
0x346: @@ add(Stack[-1])
0x347: Pop(1)
0x348: Push((int) 1)
0x349: @@ add(Stack[-1])
0x34a: Pop(1)
0x34b: Push((int) 11)
0x34c: @@ add(Stack[-1])
0x34d: Pop(1)
0x34e: Push((int) 13)
0x34f: @@ add(Stack[-1])
0x350: Pop(1)
0x351: Push((bool) 0)
0x352: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x353: IF (Stack[-1] == 0) GOTO 0x357; Pop(1)

0x354: Push((int) 25)
0x355: @@ add(Stack[-1])
0x356: Pop(1)
0x357: Return(); Pop(0)

0x358: PushEmpty(int, int)
0x359: Push("vol_")
0x35a: Pop(1); Push(Stack[-1] + Stack[-4]);
0x35b: @ GetVariable(Stack[-1], Stack[-2])
0x35c: Pop(1)
0x35d: Push((int) 4)
0x35e: Pop(1); Push(Stack[-2] & Stack[-1]);
0x35f: Push((int) 0)
0x360: Stack[-6] = Stack[-2] != Stack[-1]; Pop(2);
0x361: Return(); Pop(2)

0x362: PushEmpty(int, int)
0x363: Push("vol_")
0x364: Pop(1); Push(Stack[-1] + Stack[-4]);
0x365: @ GetVariable(Stack[-1], Stack[-2])
0x366: Pop(1)
0x367: Push((int) 16)
0x368: Pop(1); Push(Stack[-2] & Stack[-1]);
0x369: Push((int) 0)
0x36a: Stack[-6] = Stack[-2] != Stack[-1]; Pop(2);
0x36b: Return(); Pop(2)

0x36c: PushEmpty(object, int, int, int, object, int, int, int)
0x36d: @ CreateIntVector(Stack[-4])
0x36e: Pop(0)
0x36f: PushEmpty(object, bool, int)
0x370: Stack[-3] = Stack[-7]
0x371: Stack[-2] = (bool) 0
0x372: Stack[-1] = (int) -1
0x373: Call2 0x2f6

0x374: Pop(3)
0x375: @@ size(Stack[-3])
0x376: Pop(0)
0x377: Stack[-2] = (int) 0
0x378: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0x379: IF (Stack[-1] == 0) GOTO 0x38f; Pop(1)

0x37a: @@ get(Stack[-1], Stack[-2])
0x37b: Pop(0)
0x37c: PushEmpty(bool)
0x37d: Stack[-1] = (bool) 1
0x37e: PushEmpty(bool, int)
0x37f: Stack[-1] = Stack[-4]
0x380: Call2 0x362

0x381: Pop(1)
0x382: IF (Stack[-1] == 0) GOTO 0x389; Pop(1)

0x383: PushEmpty(bool, int)
0x384: Stack[-1] = Stack[-4]
0x385: Call2 0x358

0x386: Pop(1)
0x387: IF (Stack[-1] == 0) GOTO 0x389; Pop(1)

0x388: Stack[-1] = (bool) 0
0x389: IF (Stack[-1] == 0) GOTO 0x38c; Pop(1)

0x38a: Stack[-9] = (bool) 0
0x38b: Return(); Pop(8)

0x38c: Push((int) 1)
0x38d: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x38e: GOTO 0x378

0x38f: Stack[-9] = (bool) 1
0x390: Return(); Pop(8)

0x391: Stack[-4] = 0
0x392: PushEmpty(object, int, int, int, object, int, int, int)
0x393: @ CreateIntVector(Stack[-4])
0x394: Pop(0)
0x395: PushEmpty(object, bool, int)
0x396: Stack[-3] = Stack[-7]
0x397: Stack[-2] = (bool) 0
0x398: Stack[-1] = (int) -1
0x399: Call2 0x317

0x39a: Pop(3)
0x39b: @@ size(Stack[-3])
0x39c: Pop(0)
0x39d: Stack[-2] = (int) 0
0x39e: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0x39f: IF (Stack[-1] == 0) GOTO 0x3b5; Pop(1)

0x3a0: @@ get(Stack[-1], Stack[-2])
0x3a1: Pop(0)
0x3a2: PushEmpty(bool)
0x3a3: Stack[-1] = (bool) 1
0x3a4: PushEmpty(bool, int)
0x3a5: Stack[-1] = Stack[-4]
0x3a6: Call2 0x362

0x3a7: Pop(1)
0x3a8: IF (Stack[-1] == 0) GOTO 0x3af; Pop(1)

0x3a9: PushEmpty(bool, int)
0x3aa: Stack[-1] = Stack[-4]
0x3ab: Call2 0x358

0x3ac: Pop(1)
0x3ad: IF (Stack[-1] == 0) GOTO 0x3af; Pop(1)

0x3ae: Stack[-1] = (bool) 0
0x3af: IF (Stack[-1] == 0) GOTO 0x3b2; Pop(1)

0x3b0: Stack[-9] = (bool) 0
0x3b1: Return(); Pop(8)

0x3b2: Push((int) 1)
0x3b3: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x3b4: GOTO 0x39e

0x3b5: Stack[-9] = (bool) 1
0x3b6: Return(); Pop(8)

0x3b7: Stack[-4] = 0
0x3b8: PushEmpty(object, int, int, int, object, int, int, int)
0x3b9: @ CreateIntVector(Stack[-4])
0x3ba: Pop(0)
0x3bb: PushEmpty(object, bool, int)
0x3bc: Stack[-3] = Stack[-7]
0x3bd: Stack[-2] = (bool) 0
0x3be: Stack[-1] = (int) -1
0x3bf: Call2 0x338

0x3c0: Pop(3)
0x3c1: @@ size(Stack[-3])
0x3c2: Pop(0)
0x3c3: Stack[-2] = (int) 0
0x3c4: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0x3c5: IF (Stack[-1] == 0) GOTO 0x3db; Pop(1)

0x3c6: @@ get(Stack[-1], Stack[-2])
0x3c7: Pop(0)
0x3c8: PushEmpty(bool)
0x3c9: Stack[-1] = (bool) 1
0x3ca: PushEmpty(bool, int)
0x3cb: Stack[-1] = Stack[-4]
0x3cc: Call2 0x362

0x3cd: Pop(1)
0x3ce: IF (Stack[-1] == 0) GOTO 0x3d5; Pop(1)

0x3cf: PushEmpty(bool, int)
0x3d0: Stack[-1] = Stack[-4]
0x3d1: Call2 0x358

0x3d2: Pop(1)
0x3d3: IF (Stack[-1] == 0) GOTO 0x3d5; Pop(1)

0x3d4: Stack[-1] = (bool) 0
0x3d5: IF (Stack[-1] == 0) GOTO 0x3d8; Pop(1)

0x3d6: Stack[-9] = (bool) 0
0x3d7: Return(); Pop(8)

0x3d8: Push((int) 1)
0x3d9: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x3da: GOTO 0x3c4

0x3db: Stack[-9] = (bool) 1
0x3dc: Return(); Pop(8)

0x3dd: Stack[-4] = 0
0x3de: PushEmpty(int, int)
0x3df: Stack[-1] = (int) 0
0x3e0: PushEmpty(bool)
0x3e1: Call2 0x3b8

0x3e2: Pop(0)
0x3e3: IF (Stack[-1] == 0) GOTO 0x3e6; Pop(1)

0x3e4: Push((int) 1)
0x3e5: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x3e6: PushEmpty(bool)
0x3e7: Call2 0x392

0x3e8: Pop(0)
0x3e9: IF (Stack[-1] == 0) GOTO 0x3ec; Pop(1)

0x3ea: Push((int) 1)
0x3eb: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x3ec: PushEmpty(bool)
0x3ed: Call2 0x36c

0x3ee: Pop(0)
0x3ef: IF (Stack[-1] == 0) GOTO 0x3f2; Pop(1)

0x3f0: Push((int) 1)
0x3f1: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x3f2: Push((int) 2)
0x3f3: Stack[-4] = Stack[-2] >= Stack[-1]; Pop(1);
0x3f4: Return(); Pop(2)

0x3f5: Stack[-1] = (bool) 0
0x3f6: PushEmpty(bool)
0x3f7: Stack[-1] = (bool) 0
0x3f8: PushEmpty(bool)
0x3f9: Call2 0x3b8

0x3fa: Pop(0)
0x3fb: IF (Stack[-1] == 0) GOTO 0x401; Pop(1)

0x3fc: PushEmpty(bool)
0x3fd: Call2 0x392

0x3fe: Pop(0)
0x3ff: IF (Stack[-1] == 0) GOTO 0x401; Pop(1)

0x400: Stack[-1] = (bool) 1
0x401: IF (Stack[-1] == 0) GOTO 0x407; Pop(1)

0x402: PushEmpty(bool)
0x403: Call2 0x36c

0x404: Pop(0)
0x405: IF (Stack[-1] == 0) GOTO 0x407; Pop(1)

0x406: Stack[-1] = (bool) 1
0x407: Return(); Pop(0)

0x408: PushEmpty()
0x409: Push("game_final")
0x40a: @ SetVariable(Stack[-1], Stack[-2])
0x40b: Pop(1)
0x40c: Return(); Pop(0)

0x40d: PushEmpty(int, int)
0x40e: Push("game_final")
0x40f: @ GetVariable(Stack[-1], Stack[-2])
0x410: Pop(1)
0x411: Stack[-3] = Stack[-1]
0x412: Return(); Pop(2)

0x413: PushEmpty(int, int, bool, bool, int, int, int, bool, bool, int, int, bool, bool, int, int, int, bool, bool)
0x414: PushEmpty()
0x415: Call2 0x2d5

0x416: Pop(0)
0x417: PushEmpty(int)
0x418: Call2 0x2cf

0x419: Stack[-10] = Stack[-1]
0x41a: Pop(1)
0x41b: PushEmpty(int)
0x41c: Call2 0x40d

0x41d: Stack[-9] = Stack[-1]
0x41e: Pop(1)
0x41f: Stack[-7] = (bool) 0
0x420: Stack[-6] = (bool) 0
0x421: Push((int) 0)
0x422: Pop(1); Push((bool) Stack[-10] == Stack[-1])
0x423: IF (Stack[-1] == 0) GOTO 0x42f; Pop(1)

0x424: Push("d12q01ChildsAreVisited")
0x425: @ GetVariable(Stack[-1], Stack[-6])
0x426: Pop(1)
0x427: Push((int) 0)
0x428: Stack[-8] = Stack[-6] != Stack[-1]; Pop(1);
0x429: Push("d12q01TheaterIsVisited")
0x42a: @ GetVariable(Stack[-1], Stack[-6])
0x42b: Pop(1)
0x42c: Push((int) 0)
0x42d: Stack[-7] = Stack[-6] != Stack[-1]; Pop(1);
0x42e: GOTO 0x44a

0x42f: Push((int) 1)
0x430: Pop(1); Push((bool) Stack[-10] == Stack[-1])
0x431: IF (Stack[-1] == 0) GOTO 0x43d; Pop(1)

0x432: Push("b12q01ChildsAreVisited")
0x433: @ GetVariable(Stack[-1], Stack[-5])
0x434: Pop(1)
0x435: Push((int) 0)
0x436: Stack[-8] = Stack[-5] != Stack[-1]; Pop(1);
0x437: Push("b12q01TheaterIsVisited")
0x438: @ GetVariable(Stack[-1], Stack[-5])
0x439: Pop(1)
0x43a: Push((int) 0)
0x43b: Stack[-7] = Stack[-5] != Stack[-1]; Pop(1);
0x43c: GOTO 0x44a

0x43d: Push((int) 2)
0x43e: Pop(1); Push((bool) Stack[-10] == Stack[-1])
0x43f: IF (Stack[-1] == 0) GOTO 0x44a; Pop(1)

0x440: Push("k12q01ChildsAreVisited")
0x441: @ GetVariable(Stack[-1], Stack[-4])
0x442: Pop(1)
0x443: Push((int) 0)
0x444: Stack[-8] = Stack[-4] != Stack[-1]; Pop(1);
0x445: Push("k12q01TheaterIsVisited")
0x446: @ GetVariable(Stack[-1], Stack[-4])
0x447: Pop(1)
0x448: Push((int) 0)
0x449: Stack[-7] = Stack[-4] != Stack[-1]; Pop(1);
0x44a: Stack[-2] = (bool) 0
0x44b: PushEmpty(bool)
0x44c: Stack[-1] = (bool) 0
0x44d: Push((int) 0)
0x44e: Pop(1); Push((bool) Stack[-11] == Stack[-1])
0x44f: IF (Stack[-1] == 0) GOTO 0x454; Pop(1)

0x450: Push((int) 2)
0x451: Pop(1); Push((bool) Stack[-10] == Stack[-1])
0x452: IF (Stack[-1] == 0) GOTO 0x454; Pop(1)

0x453: Stack[-1] = (bool) 1
0x454: IF (Stack[-1] == 0) GOTO 0x456; Pop(1)

0x455: Stack[-2] = (bool) 1
0x456: PushEmpty(bool)
0x457: Stack[-1] = (bool) 0
0x458: Push((int) 1)
0x459: Pop(1); Push((bool) Stack[-11] == Stack[-1])
0x45a: IF (Stack[-1] == 0) GOTO 0x45f; Pop(1)

0x45b: Push((int) 1)
0x45c: Pop(1); Push((bool) Stack[-10] == Stack[-1])
0x45d: IF (Stack[-1] == 0) GOTO 0x45f; Pop(1)

0x45e: Stack[-1] = (bool) 1
0x45f: IF (Stack[-1] == 0) GOTO 0x461; Pop(1)

0x460: Stack[-2] = (bool) 1
0x461: PushEmpty(bool)
0x462: Stack[-1] = (bool) 0
0x463: Push((int) 2)
0x464: Pop(1); Push((bool) Stack[-11] == Stack[-1])
0x465: IF (Stack[-1] == 0) GOTO 0x46a; Pop(1)

0x466: Push((int) 3)
0x467: Pop(1); Push((bool) Stack[-10] == Stack[-1])
0x468: IF (Stack[-1] == 0) GOTO 0x46a; Pop(1)

0x469: Stack[-1] = (bool) 1
0x46a: IF (Stack[-1] == 0) GOTO 0x46c; Pop(1)

0x46b: Stack[-2] = (bool) 1
0x46c: Stack[-1] = (bool) 0
0x46d: PushEmpty(bool)
0x46e: Stack[-1] = (bool) 0
0x46f: PushEmpty(bool)
0x470: Stack[-1] = (bool) 0
0x471: Push((int) 4)
0x472: Pop(1); Push((bool) Stack[-11] == Stack[-1])
0x473: IF (Stack[-1] == 0) GOTO 0x477; Pop(1)

0x474: Pop(0); Push((bool) Stack[-9] == 0)
0x475: IF (Stack[-1] == 0) GOTO 0x477; Pop(1)

0x476: Stack[-1] = (bool) 1
0x477: IF (Stack[-1] == 0) GOTO 0x47b; Pop(1)

0x478: Pop(0); Push((bool) Stack[-7] == 0)
0x479: IF (Stack[-1] == 0) GOTO 0x47b; Pop(1)

0x47a: Stack[-1] = (bool) 1
0x47b: IF (Stack[-1] == 0) GOTO 0x47d; Pop(1)

0x47c: Stack[-1] = (bool) 1
0x47d: PushEmpty(bool)
0x47e: Stack[-1] = (bool) 0
0x47f: PushEmpty(bool)
0x480: Stack[-1] = (bool) 0
0x481: Pop(0); Push((bool) Stack[-4] == 0)
0x482: IF (Stack[-1] == 0) GOTO 0x486; Pop(1)

0x483: Push(Stack[-9])
0x484: IF (Stack[-1] == 0) GOTO 0x486; Pop(1)

0x485: Stack[-1] = (bool) 1
0x486: IF (Stack[-1] == 0) GOTO 0x48a; Pop(1)

0x487: Pop(0); Push((bool) Stack[-7] == 0)
0x488: IF (Stack[-1] == 0) GOTO 0x48a; Pop(1)

0x489: Stack[-1] = (bool) 1
0x48a: IF (Stack[-1] == 0) GOTO 0x48c; Pop(1)

0x48b: Stack[-1] = (bool) 1
0x48c: PushEmpty(bool)
0x48d: Stack[-1] = (bool) 0
0x48e: PushEmpty(bool)
0x48f: Stack[-1] = (bool) 0
0x490: Push(Stack[-4])
0x491: IF (Stack[-1] == 0) GOTO 0x495; Pop(1)

0x492: Push(Stack[-9])
0x493: IF (Stack[-1] == 0) GOTO 0x495; Pop(1)

0x494: Stack[-1] = (bool) 1
0x495: IF (Stack[-1] == 0) GOTO 0x499; Pop(1)

0x496: Push(Stack[-7])
0x497: IF (Stack[-1] == 0) GOTO 0x499; Pop(1)

0x498: Stack[-1] = (bool) 1
0x499: IF (Stack[-1] == 0) GOTO 0x49b; Pop(1)

0x49a: Stack[-1] = (bool) 1
0x49b: Push("PlayFinalMovie")
0x49c: @ Trace(Stack[-1])
0x49d: Pop(1)
0x49e: PushEmpty(int)
0x49f: Call2 0x40d

0x4a0: Pop(0)
0x4a1: Push((int) 1)
0x4a2: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x4a3: IF (Stack[-1] == 0) GOTO 0x4b6; Pop(1)

0x4a4: Push("fin_termit")
0x4a5: @ Trace(Stack[-1])
0x4a6: Pop(1)
0x4a7: Pop(0); Push((bool) Stack[-2] == 0)
0x4a8: IF (Stack[-1] == 0) GOTO 0x4ac; Pop(1)

0x4a9: Push("ACHIEVEMENT_HELLO_2")
0x4aa: @ UnlockAchievement(Stack[-1])
0x4ab: Pop(1)
0x4ac: Push(Stack[-1])
0x4ad: IF (Stack[-1] == 0) GOTO 0x4b2; Pop(1)

0x4ae: Push("gameover_termit_chudo.xml")
0x4af: @ GameOver(Stack[-1])
0x4b0: Pop(1)
0x4b1: GOTO 0x4b5

0x4b2: Push("gameover_termit.xml")
0x4b3: @ GameOver(Stack[-1])
0x4b4: Pop(1)
0x4b5: GOTO 0x4f2

0x4b6: PushEmpty(int)
0x4b7: Call2 0x40d

0x4b8: Pop(0)
0x4b9: Push((int) 2)
0x4ba: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x4bb: IF (Stack[-1] == 0) GOTO 0x4ce; Pop(1)

0x4bc: Push("fin_utop")
0x4bd: @ Trace(Stack[-1])
0x4be: Pop(1)
0x4bf: Pop(0); Push((bool) Stack[-2] == 0)
0x4c0: IF (Stack[-1] == 0) GOTO 0x4c4; Pop(1)

0x4c1: Push("ACHIEVEMENT_HELLO_2")
0x4c2: @ UnlockAchievement(Stack[-1])
0x4c3: Pop(1)
0x4c4: Push(Stack[-1])
0x4c5: IF (Stack[-1] == 0) GOTO 0x4ca; Pop(1)

0x4c6: Push("gameover_utopist_chudo.xml")
0x4c7: @ GameOver(Stack[-1])
0x4c8: Pop(1)
0x4c9: GOTO 0x4cd

0x4ca: Push("gameover_utopist.xml")
0x4cb: @ GameOver(Stack[-1])
0x4cc: Pop(1)
0x4cd: GOTO 0x4f2

0x4ce: PushEmpty(int)
0x4cf: Call2 0x40d

0x4d0: Pop(0)
0x4d1: Push((int) 3)
0x4d2: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x4d3: IF (Stack[-1] == 0) GOTO 0x4e6; Pop(1)

0x4d4: Push("fin_smiren")
0x4d5: @ Trace(Stack[-1])
0x4d6: Pop(1)
0x4d7: Pop(0); Push((bool) Stack[-2] == 0)
0x4d8: IF (Stack[-1] == 0) GOTO 0x4dc; Pop(1)

0x4d9: Push("ACHIEVEMENT_HELLO_2")
0x4da: @ UnlockAchievement(Stack[-1])
0x4db: Pop(1)
0x4dc: Push(Stack[-1])
0x4dd: IF (Stack[-1] == 0) GOTO 0x4e2; Pop(1)

0x4de: Push("gameover_smirennik_chudo.xml")
0x4df: @ GameOver(Stack[-1])
0x4e0: Pop(1)
0x4e1: GOTO 0x4e5

0x4e2: Push("gameover_smirennik.xml")
0x4e3: @ GameOver(Stack[-1])
0x4e4: Pop(1)
0x4e5: GOTO 0x4f2

0x4e6: Push("fin_beda")
0x4e7: @ Trace(Stack[-1])
0x4e8: Pop(1)
0x4e9: Push(Stack[-1])
0x4ea: IF (Stack[-1] == 0) GOTO 0x4ef; Pop(1)

0x4eb: Push("gameover_beda_chudo.xml")
0x4ec: @ GameOver(Stack[-1])
0x4ed: Pop(1)
0x4ee: GOTO 0x4f2

0x4ef: Push("gameover_beda.xml")
0x4f0: @ GameOver(Stack[-1])
0x4f1: Pop(1)
0x4f2: Return(); Pop(18)

0x4f3: PushEmpty(int, int)
0x4f4: Push("k12q01BurahInSobor")
0x4f5: @ GetVariable(Stack[-1], Stack[-2])
0x4f6: Pop(1)
0x4f7: Push((int) 0)
0x4f8: Stack[-4] = Stack[-2] != Stack[-1]; Pop(1);
0x4f9: Return(); Pop(2)

0x4fa: PushEmpty(int, int)
0x4fb: Push("k12q01DankoInSobor")
0x4fc: @ GetVariable(Stack[-1], Stack[-2])
0x4fd: Pop(1)
0x4fe: Push((int) 0)
0x4ff: Stack[-4] = Stack[-2] != Stack[-1]; Pop(1);
0x500: Return(); Pop(2)

0x501: PushEmpty(bool, bool)
0x502: @ IsOverrideActive(Stack[-1])
0x503: Pop(0)
0x504: Stack[-3] = !Stack[-1]; Pop(0);
0x505: Return(); Pop(2)

0x506: PushEmpty(object, object)
0x507: Push("warehouse_rubin")
0x508: @ GetSceneByName(Stack[-2], Stack[-1])
0x509: Pop(1)
0x50a: Push("rubin")
0x50b: @ Trigger(Stack[-2], Stack[-1])
0x50c: Pop(1)
0x50d: PushEmpty(string, bool)
0x50e: Stack[-2] = "warehouse_rubin@door1"
0x50f: Stack[-1] = (bool) 0
0x510: Call2 0x25b

0x511: Pop(2)
0x512: Push("cot_eva")
0x513: @ GetSceneByName(Stack[-2], Stack[-1])
0x514: Pop(1)
0x515: Push("danko")
0x516: @ Trigger(Stack[-2], Stack[-1])
0x517: Pop(1)
0x518: PushEmpty(string, bool)
0x519: Stack[-2] = "cot_eva@door1"
0x51a: Stack[-1] = (bool) 0
0x51b: Call2 0x25b

0x51c: Pop(2)
0x51d: Return(); Pop(2)

0x51e: Stack[-1] = 0
