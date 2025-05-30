GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	theater@door1
	pt_b12q01_birdmask_t
	pers_birdmask
	b12q01_birdmask_t.xml
	volonteers_burah
	childs_letter
	pt_b12q01_birdmask_s
	b12q01_birdmask_s.xml
	termitnik2
	pt_b12q01_klara
	NPC_Klara
	b12q01_klara_t2.xml
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
	cleanup
	isobor@door1
	sobor_load
	quest_b12_01_sobor_cutscene
	sobor_cutscene_end
	pt_b12q01_block
	NPC_Block
	b12q01_Block.xml
	pt_b12q01_aglaja
	NPC_Aglaja
	b12q01_Aglaja.xml
	pt_b12q01_kapella
	NPC_Kapella
	b12q01_Kapella.xml
	b12q01_Klara.xml
	pt_b12q01_danko
	NPC_Bakalavr
	b12q01_Danko.xml
	sobor_unload
	Remove
	init_theater
	NPC_Mark
	itheater@door1
	theater_load
	quest_b12_01_theater_cutscene
	b12q01TheaterIsVisited
	theater_cutscene_end
	pt_b12q01_birdmask
	b12q01_tbirdmask.xml
	pt_b12q01_whitemask
	pers_whitemask
	b12q01_twhitemask.xml
	theater_unload
	init_hidden_room
	mnogogrannik_han@door1
	mnogogrannik_han@door2
	imnogogrannik_han@door1
	hidden_room_load
	b12q01ChildsAreVisited
	quest_b12_01_hidden_room_cutscene
	hidden_room_cutscene_end
	pt_girl
	pers_littlegirl2
	b12q01_littlegirl.xml
	pt_boy
	pers_littleboy2
	b12q01_littleboy.xml
	hidden_room_unload
	theater_letter
	b12q01
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
	k12q01ChildsAreVisited
	k12q01TheaterIsVisited
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
	b12q01KlaraInSobor
	b12q01DankoInSobor
	warehouse_rubin
	warehouse_rubin@door1

Import:
	GetMainOutdoorScene (1 args)
	SetTimeEvent (2 args)
	GetSceneByName (2 args)
	GetGameTime (1 args)
	Hold (0 args)
	Trace (1 args)
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
	GTASK_0 Vars = (bool, bool, bool, bool, object, object, object, object, object, object, object, object, object, object, object) Params = 0
		EVENT_9 Op = 0x87 Vars = (int, float)
		EVENT_26 Op = 0xc6 Vars = (string)


0x0: PushEmpty(object, object)
0x1: @ GetMainOutdoorScene(Stack[-1])
0x2: Pop(0)
0x3: PushEmpty(string, bool)
0x4: Stack[-2] = "theater@door1"
0x5: Stack[-1] = (bool) 1
0x6: Call2 0x26b

0x7: Pop(2)
0x8: PushEmpty(object, object, string, string, string)
0x9: Stack[-4] = Stack[-6]
0xa: Stack[-3] = "pt_b12q01_birdmask_t"
0xb: Stack[-2] = "pers_birdmask"
0xc: Stack[-1] = "b12q01_birdmask_t.xml"
0xd: Call2 0x259

0xe: Stack[11 + Tasks[-1].StackPointer] = Stack[-5]
0xf: Pop(5)
0x10: Return(); Pop(2)

0x11: Stack[-1] = 0
0x12: PushEmpty(object, float, object, float)
0x13: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x14: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x15: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x16: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x17: PushEmpty()
0x18: Call2 0x516

0x19: Pop(0)
0x1a: Push((int) 0)
0x1b: Push((int) 288)
0x1c: @ SetTimeEvent(Stack[-2], Stack[-1])
0x1d: Pop(2)
0x1e: PushEmpty(int)
0x1f: Call2 0x294

0x20: Pop(0)
0x21: Push((int) 8)
0x22: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x23: IF (Stack[-1] == 0) GOTO 0x2f; Pop(1)

0x24: PushEmpty(bool)
0x25: Call2 0x3ee

0x26: Pop(0)
0x27: IF (Stack[-1] == 0) GOTO 0x2e; Pop(1)

0x28: PushEmpty(bool, string, string, string)
0x29: Stack[-3] = "volonteers_burah"
0x2a: Stack[-2] = "childs_letter"
0x2b: Stack[-1] = ""
0x2c: Call2 0x27c

0x2d: Pop(4)
0x2e: GOTO 0x33

0x2f: Push((int) 1)
0x30: Push((int) 272)
0x31: @ SetTimeEvent(Stack[-2], Stack[-1])
0x32: Pop(2)
0x33: PushEmpty(int)
0x34: Stack[-1] = (int) 0
0x35: Call2 0x418

0x36: Pop(1)
0x37: PushEmpty()
0x38: Call2 0x29c

0x39: Pop(0)
0x3a: PushEmpty()
0x3b: Call2 0x2a9

0x3c: Pop(0)
0x3d: @ GetMainOutdoorScene(Stack[-2])
0x3e: Pop(0)
0x3f: PushEmpty(object, object, string, string, string)
0x40: Stack[-4] = Stack[-7]
0x41: Stack[-3] = "pt_b12q01_birdmask_s"
0x42: Stack[-2] = "pers_birdmask"
0x43: Stack[-1] = "b12q01_birdmask_s.xml"
0x44: Call2 0x259

0x45: Stack[4 + Tasks[-1].StackPointer] = Stack[-5]
0x46: Pop(5)
0x47: Push("termitnik2")
0x48: @ GetSceneByName(Stack[-3], Stack[-1])
0x49: Pop(1)
0x4a: PushEmpty(object, object, string, string, string)
0x4b: Stack[-4] = Stack[-7]
0x4c: Stack[-3] = "pt_b12q01_klara"
0x4d: Stack[-2] = "NPC_Klara"
0x4e: Stack[-1] = "b12q01_klara_t2.xml"
0x4f: Call2 0x247

0x50: Stack[9 + Tasks[-1].StackPointer] = Stack[-5]
0x51: Pop(5)
0x52: PushEmpty(string, bool)
0x53: Stack[-2] = "sobor@door1"
0x54: Stack[-1] = (bool) 1
0x55: Call2 0x26b

0x56: Pop(2)
0x57: PushEmpty(string, bool)
0x58: Stack[-2] = "hidden_room@door1"
0x59: Stack[-1] = (bool) 1
0x5a: Call2 0x26b

0x5b: Pop(2)
0x5c: PushEmpty(string, bool)
0x5d: Stack[-2] = "mnogogrannik@door1"
0x5e: Stack[-1] = (bool) 1
0x5f: Call2 0x26b

0x60: Pop(2)
0x61: PushEmpty(string, bool)
0x62: Stack[-2] = "cot_eva@door1"
0x63: Stack[-1] = (bool) 0
0x64: Call2 0x26b

0x65: Pop(2)
0x66: PushEmpty(string, bool)
0x67: Stack[-2] = "termitnik2@door1"
0x68: Stack[-1] = (bool) 0
0x69: Call2 0x26b

0x6a: Pop(2)
0x6b: PushEmpty(string, bool)
0x6c: Stack[-2] = "uprava_admin@door1"
0x6d: Stack[-1] = (bool) 0
0x6e: Call2 0x26b

0x6f: Pop(2)
0x70: @ GetGameTime(Stack[-1])
0x71: Pop(0)
0x72: Push((int) 271)
0x73: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x74: IF (Stack[-1] == 0) GOTO 0x7f; Pop(1)

0x75: PushEmpty(string, bool)
0x76: Stack[-2] = "theater@door1"
0x77: Stack[-1] = (bool) 0
0x78: Call2 0x26b

0x79: Pop(2)
0x7a: Push((int) 2)
0x7b: Push((int) 271)
0x7c: @ SetTimeEvent(Stack[-2], Stack[-1])
0x7d: Pop(2)
0x7e: GOTO 0x82

0x7f: PushEmpty()
0x80: Call2 0x0

0x81: Pop(0)
0x82: @ Hold()
0x83: Pop(0)
0x84: GOTO 0x82

0x85: Return(); Pop(4)

0x86: Stack[-2] = 0
0x87: PushEmpty(float, float)
0x88: EventDisable(26)
0x89: EventDisable(9)
0x8a: Push((int) 0)
0x8b: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x8c: IF (Stack[-1] == 0) GOTO 0xad; Pop(1)

0x8d: Push("final 0")
0x8e: @ Trace(Stack[-1])
0x8f: Pop(1)
0x90: PushEmpty(bool)
0x91: Stack[-1] = (bool) 1
0x92: Push( Stack[3 + Tasks[-1].StackPointer] )
0x93: IF (Stack[-1] == 0) GOTO 0x9a; Pop(1)

0x94: PushEmpty(bool)
0x95: Call2 0x511

0x96: Pop(0)
0x97: Pop(1); Push((bool) Stack[-1] == 0)
0x98: IF (Stack[-1] == 0) GOTO 0x9a; Pop(1)

0x99: Stack[-1] = (bool) 0
0x9a: IF (Stack[-1] == 0) GOTO 0xa9; Pop(1)

0x9b: Push("final 1 locked: ")
0x9c: Pop(1); Push(Stack[-1] + Stack[3 + StackPtr]);
0x9d: @ Trace(Stack[-1])
0x9e: Pop(1)
0x9f: @ GetGameTime(Stack[-1])
0xa0: Pop(0)
0xa1: Push((float)0.00833)
0xa2: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0xa3: Push((int) 0)
0xa4: @ SetTimeEvent(Stack[-1], Stack[-2])
0xa5: Pop(1)
0xa6: EventEnable(26)
0xa7: EventEnable(9)
0xa8: Return(); Pop(2)

0xa9: PushEmpty()
0xaa: Call2 0x423

0xab: Pop(0)
0xac: GOTO 0xc5

0xad: Push((int) 1)
0xae: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0xaf: IF (Stack[-1] == 0) GOTO 0xbd; Pop(1)

0xb0: PushEmpty(bool)
0xb1: Call2 0x3ee

0xb2: Pop(0)
0xb3: IF (Stack[-1] == 0) GOTO 0xba; Pop(1)

0xb4: PushEmpty(bool, string, string, string)
0xb5: Stack[-3] = "volonteers_burah"
0xb6: Stack[-2] = "childs_letter"
0xb7: Stack[-1] = ""
0xb8: Call2 0x27c

0xb9: Pop(4)
0xba: EventEnable(26)
0xbb: EventEnable(9)
0xbc: GOTO 0xc5

0xbd: Push((int) 2)
0xbe: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0xbf: IF (Stack[-1] == 0) GOTO 0xc5; Pop(1)

0xc0: PushEmpty()
0xc1: Call2 0x0

0xc2: Pop(0)
0xc3: EventEnable(26)
0xc4: EventEnable(9)
0xc5: Return(); Pop(2)

0xc6: PushEmpty(object, object, object, object, int, object, object, object, object, int)
0xc7: @ Trace(Stack[-11])
0xc8: Pop(0)
0xc9: Push("init_sobor")
0xca: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0xcb: IF (Stack[-1] == 0) GOTO 0xe4; Pop(1)

0xcc: Push("sobor")
0xcd: @ GetSceneByName(Stack[-6], Stack[-1])
0xce: Pop(1)
0xcf: Push("noaglaja")
0xd0: @ Trigger(Stack[-6], Stack[-1])
0xd1: Pop(1)
0xd2: Push( Stack[9 + Tasks[-1].StackPointer] )
0xd3: IF (Stack[-1] == 0) GOTO 0xd7; Pop(1)

0xd4: Push("cleanup")
0xd5: @ Trigger(Stack[-9], Stack[-1])
0xd6: Pop(1)
0xd7: PushEmpty(string, bool)
0xd8: Stack[-2] = "isobor@door1"
0xd9: Stack[-1] = (bool) 1
0xda: Call2 0x26b

0xdb: Pop(2)
0xdc: PushEmpty(string, bool)
0xdd: Stack[-2] = "sobor@door1"
0xde: Stack[-1] = (bool) 0
0xdf: Call2 0x26b

0xe0: Pop(2)
0xe1: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0xe2: Stack[-5] = 0
0xe3: GOTO 0x21e

0xe4: Push("sobor_load")
0xe5: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0xe6: IF (Stack[-1] == 0) GOTO 0xef; Pop(1)

0xe7: Push( Stack[1 + Tasks[-1].StackPointer] )
0xe8: IF (Stack[-1] == 0) GOTO 0xee; Pop(1)

0xe9: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xea: PushEmpty(object, string)
0xeb: Stack[-1] = "quest_b12_01_sobor_cutscene"
0xec: Call2 0x23c

0xed: Pop(2)
0xee: GOTO 0x21e

0xef: Push("sobor_cutscene_end")
0xf0: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0xf1: IF (Stack[-1] == 0) GOTO 0x127; Pop(1)

0xf2: Push("sobor")
0xf3: @ GetSceneByName(Stack[-5], Stack[-1])
0xf4: Pop(1)
0xf5: PushEmpty(object, object, string, string, string)
0xf6: Stack[-4] = Stack[-9]
0xf7: Stack[-3] = "pt_b12q01_block"
0xf8: Stack[-2] = "NPC_Block"
0xf9: Stack[-1] = "b12q01_Block.xml"
0xfa: Call2 0x247

0xfb: Stack[5 + Tasks[-1].StackPointer] = Stack[-5]
0xfc: Pop(5)
0xfd: PushEmpty(object, object, string, string, string)
0xfe: Stack[-4] = Stack[-9]
0xff: Stack[-3] = "pt_b12q01_aglaja"
0x100: Stack[-2] = "NPC_Aglaja"
0x101: Stack[-1] = "b12q01_Aglaja.xml"
0x102: Call2 0x247

0x103: Stack[6 + Tasks[-1].StackPointer] = Stack[-5]
0x104: Pop(5)
0x105: PushEmpty(object, object, string, string, string)
0x106: Stack[-4] = Stack[-9]
0x107: Stack[-3] = "pt_b12q01_kapella"
0x108: Stack[-2] = "NPC_Kapella"
0x109: Stack[-1] = "b12q01_Kapella.xml"
0x10a: Call2 0x247

0x10b: Stack[7 + Tasks[-1].StackPointer] = Stack[-5]
0x10c: Pop(5)
0x10d: PushEmpty(bool)
0x10e: Call2 0x503

0x10f: Pop(0)
0x110: IF (Stack[-1] == 0) GOTO 0x119; Pop(1)

0x111: PushEmpty(object, object, string, string, string)
0x112: Stack[-4] = Stack[-9]
0x113: Stack[-3] = "pt_b12q01_klara"
0x114: Stack[-2] = "NPC_Klara"
0x115: Stack[-1] = "b12q01_Klara.xml"
0x116: Call2 0x247

0x117: Stack[8 + Tasks[-1].StackPointer] = Stack[-5]
0x118: Pop(5)
0x119: PushEmpty(bool)
0x11a: Call2 0x50a

0x11b: Pop(0)
0x11c: IF (Stack[-1] == 0) GOTO 0x125; Pop(1)

0x11d: PushEmpty(object, object, string, string, string)
0x11e: Stack[-4] = Stack[-9]
0x11f: Stack[-3] = "pt_b12q01_danko"
0x120: Stack[-2] = "NPC_Bakalavr"
0x121: Stack[-1] = "b12q01_Danko.xml"
0x122: Call2 0x247

0x123: Stack[10 + Tasks[-1].StackPointer] = Stack[-5]
0x124: Pop(5)
0x125: Stack[-4] = 0
0x126: GOTO 0x21e

0x127: Push("sobor_unload")
0x128: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0x129: IF (Stack[-1] == 0) GOTO 0x150; Pop(1)

0x12a: Push( Stack[1 + Tasks[-1].StackPointer] )
0x12b: IF (Stack[-1] == 0) GOTO 0x14f; Pop(1)

0x12c: Push( Stack[4 + Tasks[-1].StackPointer] )
0x12d: IF (Stack[-1] == 0) GOTO 0x130; Pop(1)

0x12e: @@ Remove()
0x12f: Pop(0)
0x130: Push( Stack[5 + Tasks[-1].StackPointer] )
0x131: IF (Stack[-1] == 0) GOTO 0x135; Pop(1)

0x132: Push("cleanup")
0x133: @ Trigger(Stack[-5], Stack[-1])
0x134: Pop(1)
0x135: Push( Stack[6 + Tasks[-1].StackPointer] )
0x136: IF (Stack[-1] == 0) GOTO 0x13a; Pop(1)

0x137: Push("cleanup")
0x138: @ Trigger(Stack[-6], Stack[-1])
0x139: Pop(1)
0x13a: Push( Stack[7 + Tasks[-1].StackPointer] )
0x13b: IF (Stack[-1] == 0) GOTO 0x13f; Pop(1)

0x13c: Push("cleanup")
0x13d: @ Trigger(Stack[-7], Stack[-1])
0x13e: Pop(1)
0x13f: Push( Stack[8 + Tasks[-1].StackPointer] )
0x140: IF (Stack[-1] == 0) GOTO 0x144; Pop(1)

0x141: Push("cleanup")
0x142: @ Trigger(Stack[-8], Stack[-1])
0x143: Pop(1)
0x144: Push( Stack[10 + Tasks[-1].StackPointer] )
0x145: IF (Stack[-1] == 0) GOTO 0x149; Pop(1)

0x146: Push("cleanup")
0x147: @ Trigger(Stack[-10], Stack[-1])
0x148: Pop(1)
0x149: PushEmpty(string, bool)
0x14a: Stack[-2] = "sobor@door1"
0x14b: Stack[-1] = (bool) 1
0x14c: Call2 0x26b

0x14d: Pop(2)
0x14e: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x14f: GOTO 0x21e

0x150: Push("init_theater")
0x151: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0x152: IF (Stack[-1] == 0) GOTO 0x163; Pop(1)

0x153: PushEmpty(bool, string)
0x154: Stack[-1] = "NPC_Mark"
0x155: Call2 0x288

0x156: Pop(2)
0x157: PushEmpty(string, bool)
0x158: Stack[-2] = "itheater@door1"
0x159: Stack[-1] = (bool) 1
0x15a: Call2 0x26b

0x15b: Pop(2)
0x15c: PushEmpty(string, bool)
0x15d: Stack[-2] = "theater@door1"
0x15e: Stack[-1] = (bool) 0
0x15f: Call2 0x26b

0x160: Pop(2)
0x161: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x162: GOTO 0x21e

0x163: Push("theater_load")
0x164: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0x165: IF (Stack[-1] == 0) GOTO 0x172; Pop(1)

0x166: Push( Stack[0 + Tasks[-1].StackPointer] )
0x167: IF (Stack[-1] == 0) GOTO 0x171; Pop(1)

0x168: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x169: PushEmpty(object, string)
0x16a: Stack[-1] = "quest_b12_01_theater_cutscene"
0x16b: Call2 0x23c

0x16c: Pop(2)
0x16d: Push("b12q01TheaterIsVisited")
0x16e: Push((int) 1)
0x16f: @ SetVariable(Stack[-2], Stack[-1])
0x170: Pop(2)
0x171: GOTO 0x21e

0x172: Push("theater_cutscene_end")
0x173: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0x174: IF (Stack[-1] == 0) GOTO 0x18a; Pop(1)

0x175: Push("theater")
0x176: @ GetSceneByName(Stack[-4], Stack[-1])
0x177: Pop(1)
0x178: PushEmpty(object, object, string, string, string)
0x179: Stack[-4] = Stack[-8]
0x17a: Stack[-3] = "pt_b12q01_birdmask"
0x17b: Stack[-2] = "pers_birdmask"
0x17c: Stack[-1] = "b12q01_tbirdmask.xml"
0x17d: Call2 0x247

0x17e: Stack[11 + Tasks[-1].StackPointer] = Stack[-5]
0x17f: Pop(5)
0x180: PushEmpty(object, object, string, string, string)
0x181: Stack[-4] = Stack[-8]
0x182: Stack[-3] = "pt_b12q01_whitemask"
0x183: Stack[-2] = "pers_whitemask"
0x184: Stack[-1] = "b12q01_twhitemask.xml"
0x185: Call2 0x247

0x186: Stack[12 + Tasks[-1].StackPointer] = Stack[-5]
0x187: Pop(5)
0x188: Stack[-3] = 0
0x189: GOTO 0x21e

0x18a: Push("theater_unload")
0x18b: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0x18c: IF (Stack[-1] == 0) GOTO 0x1a0; Pop(1)

0x18d: Push( Stack[0 + Tasks[-1].StackPointer] )
0x18e: IF (Stack[-1] == 0) GOTO 0x19f; Pop(1)

0x18f: Push( Stack[11 + Tasks[-1].StackPointer] )
0x190: IF (Stack[-1] == 0) GOTO 0x194; Pop(1)

0x191: Push("cleanup")
0x192: @ Trigger(Stack[-11], Stack[-1])
0x193: Pop(1)
0x194: Push( Stack[12 + Tasks[-1].StackPointer] )
0x195: IF (Stack[-1] == 0) GOTO 0x199; Pop(1)

0x196: Push("cleanup")
0x197: @ Trigger(Stack[-12], Stack[-1])
0x198: Pop(1)
0x199: PushEmpty(string, bool)
0x19a: Stack[-2] = "theater@door1"
0x19b: Stack[-1] = (bool) 1
0x19c: Call2 0x26b

0x19d: Pop(2)
0x19e: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x19f: GOTO 0x21e

0x1a0: Push("init_hidden_room")
0x1a1: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0x1a2: IF (Stack[-1] == 0) GOTO 0x1be; Pop(1)

0x1a3: PushEmpty(string, bool)
0x1a4: Stack[-2] = "mnogogrannik_han@door1"
0x1a5: Stack[-1] = (bool) 0
0x1a6: Call2 0x26b

0x1a7: Pop(2)
0x1a8: PushEmpty(string, bool)
0x1a9: Stack[-2] = "mnogogrannik_han@door2"
0x1aa: Stack[-1] = (bool) 0
0x1ab: Call2 0x26b

0x1ac: Pop(2)
0x1ad: PushEmpty(string, bool)
0x1ae: Stack[-2] = "hidden_room@door1"
0x1af: Stack[-1] = (bool) 0
0x1b0: Call2 0x26b

0x1b1: Pop(2)
0x1b2: PushEmpty(string, bool)
0x1b3: Stack[-2] = "imnogogrannik_han@door1"
0x1b4: Stack[-1] = (bool) 0
0x1b5: Call2 0x26b

0x1b6: Pop(2)
0x1b7: PushEmpty(string, bool)
0x1b8: Stack[-2] = "mnogogrannik@door1"
0x1b9: Stack[-1] = (bool) 0
0x1ba: Call2 0x26b

0x1bb: Pop(2)
0x1bc: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x1bd: GOTO 0x21e

0x1be: Push("hidden_room_load")
0x1bf: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0x1c0: IF (Stack[-1] == 0) GOTO 0x1cd; Pop(1)

0x1c1: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1c2: IF (Stack[-1] == 0) GOTO 0x1cc; Pop(1)

0x1c3: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1c4: Push("b12q01ChildsAreVisited")
0x1c5: Push((int) 1)
0x1c6: @ SetVariable(Stack[-2], Stack[-1])
0x1c7: Pop(2)
0x1c8: PushEmpty(object, string)
0x1c9: Stack[-1] = "quest_b12_01_hidden_room_cutscene"
0x1ca: Call2 0x23c

0x1cb: Pop(2)
0x1cc: GOTO 0x21e

0x1cd: Push("hidden_room_cutscene_end")
0x1ce: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0x1cf: IF (Stack[-1] == 0) GOTO 0x1e5; Pop(1)

0x1d0: Push("hidden_room")
0x1d1: @ GetSceneByName(Stack[-3], Stack[-1])
0x1d2: Pop(1)
0x1d3: PushEmpty(object, object, string, string, string)
0x1d4: Stack[-4] = Stack[-7]
0x1d5: Stack[-3] = "pt_girl"
0x1d6: Stack[-2] = "pers_littlegirl2"
0x1d7: Stack[-1] = "b12q01_littlegirl.xml"
0x1d8: Call2 0x247

0x1d9: Stack[13 + Tasks[-1].StackPointer] = Stack[-5]
0x1da: Pop(5)
0x1db: PushEmpty(object, object, string, string, string)
0x1dc: Stack[-4] = Stack[-7]
0x1dd: Stack[-3] = "pt_boy"
0x1de: Stack[-2] = "pers_littleboy2"
0x1df: Stack[-1] = "b12q01_littleboy.xml"
0x1e0: Call2 0x247

0x1e1: Stack[14 + Tasks[-1].StackPointer] = Stack[-5]
0x1e2: Pop(5)
0x1e3: Stack[-2] = 0
0x1e4: GOTO 0x21e

0x1e5: Push("hidden_room_unload")
0x1e6: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0x1e7: IF (Stack[-1] == 0) GOTO 0x200; Pop(1)

0x1e8: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1e9: IF (Stack[-1] == 0) GOTO 0x1ff; Pop(1)

0x1ea: PushEmpty(string, bool)
0x1eb: Stack[-2] = "hidden_room@door1"
0x1ec: Stack[-1] = (bool) 1
0x1ed: Call2 0x26b

0x1ee: Pop(2)
0x1ef: PushEmpty(string, bool)
0x1f0: Stack[-2] = "mnogogrannik@door1"
0x1f1: Stack[-1] = (bool) 1
0x1f2: Call2 0x26b

0x1f3: Pop(2)
0x1f4: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x1f5: PushEmpty(bool)
0x1f6: Call2 0x405

0x1f7: Pop(0)
0x1f8: IF (Stack[-1] == 0) GOTO 0x1ff; Pop(1)

0x1f9: PushEmpty(bool, string, string, string)
0x1fa: Stack[-3] = "volonteers_burah"
0x1fb: Stack[-2] = "theater_letter"
0x1fc: Stack[-1] = ""
0x1fd: Call2 0x27c

0x1fe: Pop(4)
0x1ff: GOTO 0x21e

0x200: Push("cleanup")
0x201: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0x202: IF (Stack[-1] == 0) GOTO 0x211; Pop(1)

0x203: Push("b12q01")
0x204: @ GetVariable(Stack[-1], Stack[-2])
0x205: Pop(1)
0x206: Push((int) 1000)
0x207: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x208: IF (Stack[-1] == 0) GOTO 0x20d; Pop(1)

0x209: PushEmpty()
0x20a: Call2 0x21f

0x20b: Pop(0)
0x20c: GOTO 0x210

0x20d: PushEmpty()
0x20e: Call2 0x22f

0x20f: Pop(0)
0x210: GOTO 0x21e

0x211: Push("fail")
0x212: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0x213: IF (Stack[-1] == 0) GOTO 0x218; Pop(1)

0x214: PushEmpty()
0x215: Call2 0x21f

0x216: Pop(0)
0x217: GOTO 0x21e

0x218: Push("completed")
0x219: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0x21a: IF (Stack[-1] == 0) GOTO 0x21e; Pop(1)

0x21b: PushEmpty()
0x21c: Call2 0x227

0x21d: Pop(0)
0x21e: Return(); Pop(10)

0x21f: Push("b12q01")
0x220: Push((int) -1)
0x221: @ SetVariable(Stack[-2], Stack[-1])
0x222: Pop(2)
0x223: PushEmpty()
0x224: Call2 0x22f

0x225: Pop(0)
0x226: Return(); Pop(0)

0x227: Push("b12q01")
0x228: Push((int) 1000)
0x229: @ SetVariable(Stack[-2], Stack[-1])
0x22a: Pop(2)
0x22b: PushEmpty()
0x22c: Call2 0x22f

0x22d: Pop(0)
0x22e: Return(); Pop(0)

0x22f: EventDisable(26)
0x230: PushEmpty(object)
0x231: Call2 0x236

0x232: Pop(0)
0x233: @ RemoveActor(Stack[-1])
0x234: Pop(1)
0x235: Return(); Pop(0)

0x236: PushEmpty(object, object)
0x237: @ self(Stack[-1])
0x238: Pop(0)
0x239: Stack[-3] = Stack[-1]
0x23a: Return(); Pop(2)

0x23b: Stack[-1] = 0
0x23c: PushEmpty(object, object, object, object)
0x23d: @ GetMainOutdoorScene(Stack[-2])
0x23e: Pop(0)
0x23f: Push(".bin")
0x240: Pop(1); Push(Stack[-6] + Stack[-1]);
0x241: @ AddBlankActor(Stack[-2], Stack[-3], Stack[-6], Stack[-1])
0x242: Pop(1)
0x243: Stack[-6] = Stack[-1]
0x244: Return(); Pop(4)

0x245: Stack[-1] = 0
0x246: Stack[-2] = 0
0x247: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x248: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0x249: Pop(0)
0x24a: Pop(0); Push((bool) Stack[-4] == 0)
0x24b: IF (Stack[-1] == 0) GOTO 0x254; Pop(1)

0x24c: Push("Locator ")
0x24d: Pop(1); Push(Stack[-1] + Stack[-12]);
0x24e: Push(" doesn't exist")
0x24f: Pop(2); Push(Stack[-2] + Stack[-1]);
0x250: @ Trace(Stack[-1])
0x251: Pop(1)
0x252: Stack[-1] = 0
0x253: GOTO 0x256

0x254: @ AddActor(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0x255: Pop(0)
0x256: Stack[-13] = Stack[-1]
0x257: Return(); Pop(8)

0x258: Stack[-1] = 0
0x259: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x25a: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0x25b: Pop(0)
0x25c: Pop(0); Push((bool) Stack[-4] == 0)
0x25d: IF (Stack[-1] == 0) GOTO 0x266; Pop(1)

0x25e: Push("Locator ")
0x25f: Pop(1); Push(Stack[-1] + Stack[-12]);
0x260: Push(" doesn't exist")
0x261: Pop(2); Push(Stack[-2] + Stack[-1]);
0x262: @ Trace(Stack[-1])
0x263: Pop(1)
0x264: Stack[-1] = 0
0x265: GOTO 0x268

0x266: @@ AddStationaryActor(Stack[-1], Stack[-3], Stack[-2], Stack[-10], Stack[-9])
0x267: Pop(0)
0x268: Stack[-13] = Stack[-1]
0x269: Return(); Pop(8)

0x26a: Stack[-1] = 0
0x26b: PushEmpty(object, object)
0x26c: @ FindActor(Stack[-1], Stack[-4])
0x26d: Pop(0)
0x26e: Pop(0); Push((bool) Stack[-1] == 0)
0x26f: IF (Stack[-1] == 0) GOTO 0x277; Pop(1)

0x270: Push("Door ")
0x271: Pop(1); Push(Stack[-1] + Stack[-5]);
0x272: Push(" not found")
0x273: Pop(2); Push(Stack[-2] + Stack[-1]);
0x274: @ Trace(Stack[-1])
0x275: Pop(1)
0x276: GOTO 0x27a

0x277: Push("locked")
0x278: @@ SetProperty(Stack[-1], Stack[-4])
0x279: Pop(1)
0x27a: Return(); Pop(2)

0x27b: Stack[-1] = 0
0x27c: PushEmpty(object, object)
0x27d: @ FindActor(Stack[-1], Stack[-5])
0x27e: Pop(0)
0x27f: Pop(0); Push((bool) Stack[-1] == 0)
0x280: IF (Stack[-1] == 0) GOTO 0x283; Pop(1)

0x281: Stack[-6] = (bool) 0
0x282: Return(); Pop(2)

0x283: @ Trigger(Stack[-1], Stack[-4], Stack[-3])
0x284: Pop(0)
0x285: Stack[-6] = (bool) 1
0x286: Return(); Pop(2)

0x287: Stack[-1] = 0
0x288: PushEmpty(object, object)
0x289: @ FindActor(Stack[-1], Stack[-3])
0x28a: Pop(0)
0x28b: Pop(0); Push((bool) Stack[-1] == 0)
0x28c: IF (Stack[-1] == 0) GOTO 0x28f; Pop(1)

0x28d: Stack[-4] = (bool) 0
0x28e: Return(); Pop(2)

0x28f: @ RemoveActor(Stack[-1])
0x290: Pop(0)
0x291: Stack[-4] = (bool) 1
0x292: Return(); Pop(2)

0x293: Stack[-1] = 0
0x294: PushEmpty(float, float)
0x295: @ GetGameTime(Stack[-1])
0x296: Pop(0)
0x297: PushEmpty(int)
0x298: Stack[-1] = Stack[-2]
0x299: Push((int) 24)
0x29a: Stack[-5] = Stack[-2] % Stack[-1]; Pop(2);
0x29b: Return(); Pop(2)

0x29c: PushEmpty(object, object)
0x29d: Push((int) 613)
0x29e: Push((int) 1)
0x29f: Push((int) 532002)
0x2a0: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x2a1: Pop(3)
0x2a2: PushEmpty(bool, object, int)
0x2a3: Stack[-2] = Stack[-4]
0x2a4: Stack[-1] = (int) -1
0x2a5: Call2 0x2c3

0x2a6: Pop(3)
0x2a7: Return(); Pop(2)

0x2a8: Stack[-1] = 0
0x2a9: PushEmpty(object, object)
0x2aa: Push((int) 694)
0x2ab: Push((int) 1)
0x2ac: Push((int) 535402)
0x2ad: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x2ae: Pop(3)
0x2af: PushEmpty(bool, object, int)
0x2b0: Stack[-2] = Stack[-4]
0x2b1: Stack[-1] = (int) 613
0x2b2: Call2 0x2c3

0x2b3: Pop(3)
0x2b4: Return(); Pop(2)

0x2b5: Stack[-1] = 0
0x2b6: PushEmpty(object, object)
0x2b7: @ GetDiaryRoot(Stack[-1])
0x2b8: Pop(0)
0x2b9: Pop(0); Push((bool) Stack[-1] == 0)
0x2ba: IF (Stack[-1] == 0) GOTO 0x2c0; Pop(1)

0x2bb: Push("Can't retrieve diary root")
0x2bc: @ Trace(Stack[-1])
0x2bd: Pop(1)
0x2be: Stack[-3] = (bool) 0
0x2bf: Return(); Pop(2)

0x2c0: Stack[-3] = Stack[-1]
0x2c1: Return(); Pop(2)

0x2c2: Stack[-1] = 0
0x2c3: PushEmpty(object, object, int, object, object, int)
0x2c4: PushEmpty(object)
0x2c5: Call2 0x2b6

0x2c6: Stack[-4] = Stack[-1]
0x2c7: Pop(1)
0x2c8: @@ Find(Stack[-7], Stack[-2])
0x2c9: Pop(0)
0x2ca: Pop(0); Push((bool) Stack[-2] == 0)
0x2cb: IF (Stack[-1] == 0) GOTO 0x2d2; Pop(1)

0x2cc: Push("Can't find diary parent with id: ")
0x2cd: Pop(1); Push(Stack[-1] + Stack[-8]);
0x2ce: @ Trace(Stack[-1])
0x2cf: Pop(1)
0x2d0: Stack[-9] = (bool) 0
0x2d1: Return(); Pop(6)

0x2d2: @@ AddChild(Stack[-8])
0x2d3: Pop(0)
0x2d4: Push((int) 7)
0x2d5: @ SendWorldWndMessage(Stack[-1])
0x2d6: Pop(1)
0x2d7: @@ GetCategory(Stack[-1])
0x2d8: Pop(0)
0x2d9: @ SetDiarySection(Stack[-1])
0x2da: Pop(0)
0x2db: Stack[-9] = (bool) 0
0x2dc: Return(); Pop(6)

0x2dd: Stack[-2] = 0
0x2de: Stack[-3] = 0
0x2df: PushEmpty(int, int)
0x2e0: Push("branch")
0x2e1: @ GetVariable(Stack[-1], Stack[-2])
0x2e2: Pop(1)
0x2e3: Stack[-3] = Stack[-1]
0x2e4: Return(); Pop(2)

0x2e5: PushEmpty(int)
0x2e6: Call2 0x2df

0x2e7: Pop(0)
0x2e8: Push((int) 1)
0x2e9: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x2ea: IF (Stack[-1] == 0) GOTO 0x2f0; Pop(1)

0x2eb: Push("BurahCompleted")
0x2ec: Push((int) 1)
0x2ed: @ SetRegistryData(Stack[-2], Stack[-1])
0x2ee: Pop(2)
0x2ef: GOTO 0x305

0x2f0: PushEmpty(int)
0x2f1: Call2 0x2df

0x2f2: Pop(0)
0x2f3: Push((int) 0)
0x2f4: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x2f5: IF (Stack[-1] == 0) GOTO 0x2fb; Pop(1)

0x2f6: Push("DankoCompleted")
0x2f7: Push((int) 1)
0x2f8: @ SetRegistryData(Stack[-2], Stack[-1])
0x2f9: Pop(2)
0x2fa: GOTO 0x305

0x2fb: PushEmpty(int)
0x2fc: Call2 0x2df

0x2fd: Pop(0)
0x2fe: Push((int) 2)
0x2ff: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x300: IF (Stack[-1] == 0) GOTO 0x305; Pop(1)

0x301: Push("KlaraCompleted")
0x302: Push((int) 1)
0x303: @ SetRegistryData(Stack[-2], Stack[-1])
0x304: Pop(2)
0x305: Return(); Pop(0)

0x306: PushEmpty()
0x307: Push((int) 18)
0x308: @@ add(Stack[-1])
0x309: Pop(1)
0x30a: Push((int) 24)
0x30b: @@ add(Stack[-1])
0x30c: Pop(1)
0x30d: Push((int) 20)
0x30e: @@ add(Stack[-1])
0x30f: Pop(1)
0x310: Push((int) 14)
0x311: @@ add(Stack[-1])
0x312: Pop(1)
0x313: Push((bool) 0)
0x314: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x315: IF (Stack[-1] == 0) GOTO 0x320; Pop(1)

0x316: Push((int) 10)
0x317: @@ add(Stack[-1])
0x318: Pop(1)
0x319: Push((int) 17)
0x31a: @@ add(Stack[-1])
0x31b: Pop(1)
0x31c: Push((int) 8)
0x31d: @@ add(Stack[-1])
0x31e: Pop(1)
0x31f: GOTO 0x326

0x320: Push((int) 1)
0x321: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x322: IF (Stack[-1] == 0) GOTO 0x326; Pop(1)

0x323: Push((int) 10)
0x324: @@ add(Stack[-1])
0x325: Pop(1)
0x326: Return(); Pop(0)

0x327: PushEmpty()
0x328: Push((int) 6)
0x329: @@ add(Stack[-1])
0x32a: Pop(1)
0x32b: Push((int) 26)
0x32c: @@ add(Stack[-1])
0x32d: Pop(1)
0x32e: Push((int) 2)
0x32f: @@ add(Stack[-1])
0x330: Pop(1)
0x331: Push((int) 22)
0x332: @@ add(Stack[-1])
0x333: Pop(1)
0x334: Push((bool) 0)
0x335: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x336: IF (Stack[-1] == 0) GOTO 0x341; Pop(1)

0x337: Push((int) 15)
0x338: @@ add(Stack[-1])
0x339: Pop(1)
0x33a: Push((int) 5)
0x33b: @@ add(Stack[-1])
0x33c: Pop(1)
0x33d: Push((int) 16)
0x33e: @@ add(Stack[-1])
0x33f: Pop(1)
0x340: GOTO 0x347

0x341: Push((int) 0)
0x342: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x343: IF (Stack[-1] == 0) GOTO 0x347; Pop(1)

0x344: Push((int) 15)
0x345: @@ add(Stack[-1])
0x346: Pop(1)
0x347: Return(); Pop(0)

0x348: PushEmpty()
0x349: Push((int) 7)
0x34a: @@ add(Stack[-1])
0x34b: Pop(1)
0x34c: Push((int) 23)
0x34d: @@ add(Stack[-1])
0x34e: Pop(1)
0x34f: Push((int) 21)
0x350: @@ add(Stack[-1])
0x351: Pop(1)
0x352: Push((int) 9)
0x353: @@ add(Stack[-1])
0x354: Pop(1)
0x355: Push((int) 3)
0x356: @@ add(Stack[-1])
0x357: Pop(1)
0x358: Push((int) 1)
0x359: @@ add(Stack[-1])
0x35a: Pop(1)
0x35b: Push((int) 11)
0x35c: @@ add(Stack[-1])
0x35d: Pop(1)
0x35e: Push((int) 13)
0x35f: @@ add(Stack[-1])
0x360: Pop(1)
0x361: Push((bool) 0)
0x362: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x363: IF (Stack[-1] == 0) GOTO 0x367; Pop(1)

0x364: Push((int) 25)
0x365: @@ add(Stack[-1])
0x366: Pop(1)
0x367: Return(); Pop(0)

0x368: PushEmpty(int, int)
0x369: Push("vol_")
0x36a: Pop(1); Push(Stack[-1] + Stack[-4]);
0x36b: @ GetVariable(Stack[-1], Stack[-2])
0x36c: Pop(1)
0x36d: Push((int) 4)
0x36e: Pop(1); Push(Stack[-2] & Stack[-1]);
0x36f: Push((int) 0)
0x370: Stack[-6] = Stack[-2] != Stack[-1]; Pop(2);
0x371: Return(); Pop(2)

0x372: PushEmpty(int, int)
0x373: Push("vol_")
0x374: Pop(1); Push(Stack[-1] + Stack[-4]);
0x375: @ GetVariable(Stack[-1], Stack[-2])
0x376: Pop(1)
0x377: Push((int) 16)
0x378: Pop(1); Push(Stack[-2] & Stack[-1]);
0x379: Push((int) 0)
0x37a: Stack[-6] = Stack[-2] != Stack[-1]; Pop(2);
0x37b: Return(); Pop(2)

0x37c: PushEmpty(object, int, int, int, object, int, int, int)
0x37d: @ CreateIntVector(Stack[-4])
0x37e: Pop(0)
0x37f: PushEmpty(object, bool, int)
0x380: Stack[-3] = Stack[-7]
0x381: Stack[-2] = (bool) 0
0x382: Stack[-1] = (int) -1
0x383: Call2 0x306

0x384: Pop(3)
0x385: @@ size(Stack[-3])
0x386: Pop(0)
0x387: Stack[-2] = (int) 0
0x388: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0x389: IF (Stack[-1] == 0) GOTO 0x39f; Pop(1)

0x38a: @@ get(Stack[-1], Stack[-2])
0x38b: Pop(0)
0x38c: PushEmpty(bool)
0x38d: Stack[-1] = (bool) 1
0x38e: PushEmpty(bool, int)
0x38f: Stack[-1] = Stack[-4]
0x390: Call2 0x372

0x391: Pop(1)
0x392: IF (Stack[-1] == 0) GOTO 0x399; Pop(1)

0x393: PushEmpty(bool, int)
0x394: Stack[-1] = Stack[-4]
0x395: Call2 0x368

0x396: Pop(1)
0x397: IF (Stack[-1] == 0) GOTO 0x399; Pop(1)

0x398: Stack[-1] = (bool) 0
0x399: IF (Stack[-1] == 0) GOTO 0x39c; Pop(1)

0x39a: Stack[-9] = (bool) 0
0x39b: Return(); Pop(8)

0x39c: Push((int) 1)
0x39d: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x39e: GOTO 0x388

0x39f: Stack[-9] = (bool) 1
0x3a0: Return(); Pop(8)

0x3a1: Stack[-4] = 0
0x3a2: PushEmpty(object, int, int, int, object, int, int, int)
0x3a3: @ CreateIntVector(Stack[-4])
0x3a4: Pop(0)
0x3a5: PushEmpty(object, bool, int)
0x3a6: Stack[-3] = Stack[-7]
0x3a7: Stack[-2] = (bool) 0
0x3a8: Stack[-1] = (int) -1
0x3a9: Call2 0x327

0x3aa: Pop(3)
0x3ab: @@ size(Stack[-3])
0x3ac: Pop(0)
0x3ad: Stack[-2] = (int) 0
0x3ae: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0x3af: IF (Stack[-1] == 0) GOTO 0x3c5; Pop(1)

0x3b0: @@ get(Stack[-1], Stack[-2])
0x3b1: Pop(0)
0x3b2: PushEmpty(bool)
0x3b3: Stack[-1] = (bool) 1
0x3b4: PushEmpty(bool, int)
0x3b5: Stack[-1] = Stack[-4]
0x3b6: Call2 0x372

0x3b7: Pop(1)
0x3b8: IF (Stack[-1] == 0) GOTO 0x3bf; Pop(1)

0x3b9: PushEmpty(bool, int)
0x3ba: Stack[-1] = Stack[-4]
0x3bb: Call2 0x368

0x3bc: Pop(1)
0x3bd: IF (Stack[-1] == 0) GOTO 0x3bf; Pop(1)

0x3be: Stack[-1] = (bool) 0
0x3bf: IF (Stack[-1] == 0) GOTO 0x3c2; Pop(1)

0x3c0: Stack[-9] = (bool) 0
0x3c1: Return(); Pop(8)

0x3c2: Push((int) 1)
0x3c3: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x3c4: GOTO 0x3ae

0x3c5: Stack[-9] = (bool) 1
0x3c6: Return(); Pop(8)

0x3c7: Stack[-4] = 0
0x3c8: PushEmpty(object, int, int, int, object, int, int, int)
0x3c9: @ CreateIntVector(Stack[-4])
0x3ca: Pop(0)
0x3cb: PushEmpty(object, bool, int)
0x3cc: Stack[-3] = Stack[-7]
0x3cd: Stack[-2] = (bool) 0
0x3ce: Stack[-1] = (int) -1
0x3cf: Call2 0x348

0x3d0: Pop(3)
0x3d1: @@ size(Stack[-3])
0x3d2: Pop(0)
0x3d3: Stack[-2] = (int) 0
0x3d4: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0x3d5: IF (Stack[-1] == 0) GOTO 0x3eb; Pop(1)

0x3d6: @@ get(Stack[-1], Stack[-2])
0x3d7: Pop(0)
0x3d8: PushEmpty(bool)
0x3d9: Stack[-1] = (bool) 1
0x3da: PushEmpty(bool, int)
0x3db: Stack[-1] = Stack[-4]
0x3dc: Call2 0x372

0x3dd: Pop(1)
0x3de: IF (Stack[-1] == 0) GOTO 0x3e5; Pop(1)

0x3df: PushEmpty(bool, int)
0x3e0: Stack[-1] = Stack[-4]
0x3e1: Call2 0x368

0x3e2: Pop(1)
0x3e3: IF (Stack[-1] == 0) GOTO 0x3e5; Pop(1)

0x3e4: Stack[-1] = (bool) 0
0x3e5: IF (Stack[-1] == 0) GOTO 0x3e8; Pop(1)

0x3e6: Stack[-9] = (bool) 0
0x3e7: Return(); Pop(8)

0x3e8: Push((int) 1)
0x3e9: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x3ea: GOTO 0x3d4

0x3eb: Stack[-9] = (bool) 1
0x3ec: Return(); Pop(8)

0x3ed: Stack[-4] = 0
0x3ee: PushEmpty(int, int)
0x3ef: Stack[-1] = (int) 0
0x3f0: PushEmpty(bool)
0x3f1: Call2 0x3c8

0x3f2: Pop(0)
0x3f3: IF (Stack[-1] == 0) GOTO 0x3f6; Pop(1)

0x3f4: Push((int) 1)
0x3f5: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x3f6: PushEmpty(bool)
0x3f7: Call2 0x3a2

0x3f8: Pop(0)
0x3f9: IF (Stack[-1] == 0) GOTO 0x3fc; Pop(1)

0x3fa: Push((int) 1)
0x3fb: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x3fc: PushEmpty(bool)
0x3fd: Call2 0x37c

0x3fe: Pop(0)
0x3ff: IF (Stack[-1] == 0) GOTO 0x402; Pop(1)

0x400: Push((int) 1)
0x401: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x402: Push((int) 2)
0x403: Stack[-4] = Stack[-2] >= Stack[-1]; Pop(1);
0x404: Return(); Pop(2)

0x405: Stack[-1] = (bool) 0
0x406: PushEmpty(bool)
0x407: Stack[-1] = (bool) 0
0x408: PushEmpty(bool)
0x409: Call2 0x3c8

0x40a: Pop(0)
0x40b: IF (Stack[-1] == 0) GOTO 0x411; Pop(1)

0x40c: PushEmpty(bool)
0x40d: Call2 0x3a2

0x40e: Pop(0)
0x40f: IF (Stack[-1] == 0) GOTO 0x411; Pop(1)

0x410: Stack[-1] = (bool) 1
0x411: IF (Stack[-1] == 0) GOTO 0x417; Pop(1)

0x412: PushEmpty(bool)
0x413: Call2 0x37c

0x414: Pop(0)
0x415: IF (Stack[-1] == 0) GOTO 0x417; Pop(1)

0x416: Stack[-1] = (bool) 1
0x417: Return(); Pop(0)

0x418: PushEmpty()
0x419: Push("game_final")
0x41a: @ SetVariable(Stack[-1], Stack[-2])
0x41b: Pop(1)
0x41c: Return(); Pop(0)

0x41d: PushEmpty(int, int)
0x41e: Push("game_final")
0x41f: @ GetVariable(Stack[-1], Stack[-2])
0x420: Pop(1)
0x421: Stack[-3] = Stack[-1]
0x422: Return(); Pop(2)

0x423: PushEmpty(int, int, bool, bool, int, int, int, bool, bool, int, int, bool, bool, int, int, int, bool, bool)
0x424: PushEmpty()
0x425: Call2 0x2e5

0x426: Pop(0)
0x427: PushEmpty(int)
0x428: Call2 0x2df

0x429: Stack[-10] = Stack[-1]
0x42a: Pop(1)
0x42b: PushEmpty(int)
0x42c: Call2 0x41d

0x42d: Stack[-9] = Stack[-1]
0x42e: Pop(1)
0x42f: Stack[-7] = (bool) 0
0x430: Stack[-6] = (bool) 0
0x431: Push((int) 0)
0x432: Pop(1); Push((bool) Stack[-10] == Stack[-1])
0x433: IF (Stack[-1] == 0) GOTO 0x43f; Pop(1)

0x434: Push("d12q01ChildsAreVisited")
0x435: @ GetVariable(Stack[-1], Stack[-6])
0x436: Pop(1)
0x437: Push((int) 0)
0x438: Stack[-8] = Stack[-6] != Stack[-1]; Pop(1);
0x439: Push("d12q01TheaterIsVisited")
0x43a: @ GetVariable(Stack[-1], Stack[-6])
0x43b: Pop(1)
0x43c: Push((int) 0)
0x43d: Stack[-7] = Stack[-6] != Stack[-1]; Pop(1);
0x43e: GOTO 0x45a

0x43f: Push((int) 1)
0x440: Pop(1); Push((bool) Stack[-10] == Stack[-1])
0x441: IF (Stack[-1] == 0) GOTO 0x44d; Pop(1)

0x442: Push("b12q01ChildsAreVisited")
0x443: @ GetVariable(Stack[-1], Stack[-5])
0x444: Pop(1)
0x445: Push((int) 0)
0x446: Stack[-8] = Stack[-5] != Stack[-1]; Pop(1);
0x447: Push("b12q01TheaterIsVisited")
0x448: @ GetVariable(Stack[-1], Stack[-5])
0x449: Pop(1)
0x44a: Push((int) 0)
0x44b: Stack[-7] = Stack[-5] != Stack[-1]; Pop(1);
0x44c: GOTO 0x45a

0x44d: Push((int) 2)
0x44e: Pop(1); Push((bool) Stack[-10] == Stack[-1])
0x44f: IF (Stack[-1] == 0) GOTO 0x45a; Pop(1)

0x450: Push("k12q01ChildsAreVisited")
0x451: @ GetVariable(Stack[-1], Stack[-4])
0x452: Pop(1)
0x453: Push((int) 0)
0x454: Stack[-8] = Stack[-4] != Stack[-1]; Pop(1);
0x455: Push("k12q01TheaterIsVisited")
0x456: @ GetVariable(Stack[-1], Stack[-4])
0x457: Pop(1)
0x458: Push((int) 0)
0x459: Stack[-7] = Stack[-4] != Stack[-1]; Pop(1);
0x45a: Stack[-2] = (bool) 0
0x45b: PushEmpty(bool)
0x45c: Stack[-1] = (bool) 0
0x45d: Push((int) 0)
0x45e: Pop(1); Push((bool) Stack[-11] == Stack[-1])
0x45f: IF (Stack[-1] == 0) GOTO 0x464; Pop(1)

0x460: Push((int) 2)
0x461: Pop(1); Push((bool) Stack[-10] == Stack[-1])
0x462: IF (Stack[-1] == 0) GOTO 0x464; Pop(1)

0x463: Stack[-1] = (bool) 1
0x464: IF (Stack[-1] == 0) GOTO 0x466; Pop(1)

0x465: Stack[-2] = (bool) 1
0x466: PushEmpty(bool)
0x467: Stack[-1] = (bool) 0
0x468: Push((int) 1)
0x469: Pop(1); Push((bool) Stack[-11] == Stack[-1])
0x46a: IF (Stack[-1] == 0) GOTO 0x46f; Pop(1)

0x46b: Push((int) 1)
0x46c: Pop(1); Push((bool) Stack[-10] == Stack[-1])
0x46d: IF (Stack[-1] == 0) GOTO 0x46f; Pop(1)

0x46e: Stack[-1] = (bool) 1
0x46f: IF (Stack[-1] == 0) GOTO 0x471; Pop(1)

0x470: Stack[-2] = (bool) 1
0x471: PushEmpty(bool)
0x472: Stack[-1] = (bool) 0
0x473: Push((int) 2)
0x474: Pop(1); Push((bool) Stack[-11] == Stack[-1])
0x475: IF (Stack[-1] == 0) GOTO 0x47a; Pop(1)

0x476: Push((int) 3)
0x477: Pop(1); Push((bool) Stack[-10] == Stack[-1])
0x478: IF (Stack[-1] == 0) GOTO 0x47a; Pop(1)

0x479: Stack[-1] = (bool) 1
0x47a: IF (Stack[-1] == 0) GOTO 0x47c; Pop(1)

0x47b: Stack[-2] = (bool) 1
0x47c: Stack[-1] = (bool) 0
0x47d: PushEmpty(bool)
0x47e: Stack[-1] = (bool) 0
0x47f: PushEmpty(bool)
0x480: Stack[-1] = (bool) 0
0x481: Push((int) 4)
0x482: Pop(1); Push((bool) Stack[-11] == Stack[-1])
0x483: IF (Stack[-1] == 0) GOTO 0x487; Pop(1)

0x484: Pop(0); Push((bool) Stack[-9] == 0)
0x485: IF (Stack[-1] == 0) GOTO 0x487; Pop(1)

0x486: Stack[-1] = (bool) 1
0x487: IF (Stack[-1] == 0) GOTO 0x48b; Pop(1)

0x488: Pop(0); Push((bool) Stack[-7] == 0)
0x489: IF (Stack[-1] == 0) GOTO 0x48b; Pop(1)

0x48a: Stack[-1] = (bool) 1
0x48b: IF (Stack[-1] == 0) GOTO 0x48d; Pop(1)

0x48c: Stack[-1] = (bool) 1
0x48d: PushEmpty(bool)
0x48e: Stack[-1] = (bool) 0
0x48f: PushEmpty(bool)
0x490: Stack[-1] = (bool) 0
0x491: Pop(0); Push((bool) Stack[-4] == 0)
0x492: IF (Stack[-1] == 0) GOTO 0x496; Pop(1)

0x493: Push(Stack[-9])
0x494: IF (Stack[-1] == 0) GOTO 0x496; Pop(1)

0x495: Stack[-1] = (bool) 1
0x496: IF (Stack[-1] == 0) GOTO 0x49a; Pop(1)

0x497: Pop(0); Push((bool) Stack[-7] == 0)
0x498: IF (Stack[-1] == 0) GOTO 0x49a; Pop(1)

0x499: Stack[-1] = (bool) 1
0x49a: IF (Stack[-1] == 0) GOTO 0x49c; Pop(1)

0x49b: Stack[-1] = (bool) 1
0x49c: PushEmpty(bool)
0x49d: Stack[-1] = (bool) 0
0x49e: PushEmpty(bool)
0x49f: Stack[-1] = (bool) 0
0x4a0: Push(Stack[-4])
0x4a1: IF (Stack[-1] == 0) GOTO 0x4a5; Pop(1)

0x4a2: Push(Stack[-9])
0x4a3: IF (Stack[-1] == 0) GOTO 0x4a5; Pop(1)

0x4a4: Stack[-1] = (bool) 1
0x4a5: IF (Stack[-1] == 0) GOTO 0x4a9; Pop(1)

0x4a6: Push(Stack[-7])
0x4a7: IF (Stack[-1] == 0) GOTO 0x4a9; Pop(1)

0x4a8: Stack[-1] = (bool) 1
0x4a9: IF (Stack[-1] == 0) GOTO 0x4ab; Pop(1)

0x4aa: Stack[-1] = (bool) 1
0x4ab: Push("PlayFinalMovie")
0x4ac: @ Trace(Stack[-1])
0x4ad: Pop(1)
0x4ae: PushEmpty(int)
0x4af: Call2 0x41d

0x4b0: Pop(0)
0x4b1: Push((int) 1)
0x4b2: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x4b3: IF (Stack[-1] == 0) GOTO 0x4c6; Pop(1)

0x4b4: Push("fin_termit")
0x4b5: @ Trace(Stack[-1])
0x4b6: Pop(1)
0x4b7: Pop(0); Push((bool) Stack[-2] == 0)
0x4b8: IF (Stack[-1] == 0) GOTO 0x4bc; Pop(1)

0x4b9: Push("ACHIEVEMENT_HELLO_2")
0x4ba: @ UnlockAchievement(Stack[-1])
0x4bb: Pop(1)
0x4bc: Push(Stack[-1])
0x4bd: IF (Stack[-1] == 0) GOTO 0x4c2; Pop(1)

0x4be: Push("gameover_termit_chudo.xml")
0x4bf: @ GameOver(Stack[-1])
0x4c0: Pop(1)
0x4c1: GOTO 0x4c5

0x4c2: Push("gameover_termit.xml")
0x4c3: @ GameOver(Stack[-1])
0x4c4: Pop(1)
0x4c5: GOTO 0x502

0x4c6: PushEmpty(int)
0x4c7: Call2 0x41d

0x4c8: Pop(0)
0x4c9: Push((int) 2)
0x4ca: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x4cb: IF (Stack[-1] == 0) GOTO 0x4de; Pop(1)

0x4cc: Push("fin_utop")
0x4cd: @ Trace(Stack[-1])
0x4ce: Pop(1)
0x4cf: Pop(0); Push((bool) Stack[-2] == 0)
0x4d0: IF (Stack[-1] == 0) GOTO 0x4d4; Pop(1)

0x4d1: Push("ACHIEVEMENT_HELLO_2")
0x4d2: @ UnlockAchievement(Stack[-1])
0x4d3: Pop(1)
0x4d4: Push(Stack[-1])
0x4d5: IF (Stack[-1] == 0) GOTO 0x4da; Pop(1)

0x4d6: Push("gameover_utopist_chudo.xml")
0x4d7: @ GameOver(Stack[-1])
0x4d8: Pop(1)
0x4d9: GOTO 0x4dd

0x4da: Push("gameover_utopist.xml")
0x4db: @ GameOver(Stack[-1])
0x4dc: Pop(1)
0x4dd: GOTO 0x502

0x4de: PushEmpty(int)
0x4df: Call2 0x41d

0x4e0: Pop(0)
0x4e1: Push((int) 3)
0x4e2: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x4e3: IF (Stack[-1] == 0) GOTO 0x4f6; Pop(1)

0x4e4: Push("fin_smiren")
0x4e5: @ Trace(Stack[-1])
0x4e6: Pop(1)
0x4e7: Pop(0); Push((bool) Stack[-2] == 0)
0x4e8: IF (Stack[-1] == 0) GOTO 0x4ec; Pop(1)

0x4e9: Push("ACHIEVEMENT_HELLO_2")
0x4ea: @ UnlockAchievement(Stack[-1])
0x4eb: Pop(1)
0x4ec: Push(Stack[-1])
0x4ed: IF (Stack[-1] == 0) GOTO 0x4f2; Pop(1)

0x4ee: Push("gameover_smirennik_chudo.xml")
0x4ef: @ GameOver(Stack[-1])
0x4f0: Pop(1)
0x4f1: GOTO 0x4f5

0x4f2: Push("gameover_smirennik.xml")
0x4f3: @ GameOver(Stack[-1])
0x4f4: Pop(1)
0x4f5: GOTO 0x502

0x4f6: Push("fin_beda")
0x4f7: @ Trace(Stack[-1])
0x4f8: Pop(1)
0x4f9: Push(Stack[-1])
0x4fa: IF (Stack[-1] == 0) GOTO 0x4ff; Pop(1)

0x4fb: Push("gameover_beda_chudo.xml")
0x4fc: @ GameOver(Stack[-1])
0x4fd: Pop(1)
0x4fe: GOTO 0x502

0x4ff: Push("gameover_beda.xml")
0x500: @ GameOver(Stack[-1])
0x501: Pop(1)
0x502: Return(); Pop(18)

0x503: PushEmpty(int, int)
0x504: Push("b12q01KlaraInSobor")
0x505: @ GetVariable(Stack[-1], Stack[-2])
0x506: Pop(1)
0x507: Push((int) 0)
0x508: Stack[-4] = Stack[-2] != Stack[-1]; Pop(1);
0x509: Return(); Pop(2)

0x50a: PushEmpty(int, int)
0x50b: Push("b12q01DankoInSobor")
0x50c: @ GetVariable(Stack[-1], Stack[-2])
0x50d: Pop(1)
0x50e: Push((int) 0)
0x50f: Stack[-4] = Stack[-2] != Stack[-1]; Pop(1);
0x510: Return(); Pop(2)

0x511: PushEmpty(bool, bool)
0x512: @ IsOverrideActive(Stack[-1])
0x513: Pop(0)
0x514: Stack[-3] = !Stack[-1]; Pop(0);
0x515: Return(); Pop(2)

0x516: PushEmpty(object, object)
0x517: Push("warehouse_rubin")
0x518: @ GetSceneByName(Stack[-2], Stack[-1])
0x519: Pop(1)
0x51a: Push("rubin")
0x51b: @ Trigger(Stack[-2], Stack[-1])
0x51c: Pop(1)
0x51d: PushEmpty(string, bool)
0x51e: Stack[-2] = "warehouse_rubin@door1"
0x51f: Stack[-1] = (bool) 0
0x520: Call2 0x26b

0x521: Pop(2)
0x522: Return(); Pop(2)

0x523: Stack[-1] = 0
