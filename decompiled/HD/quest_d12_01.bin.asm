GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	theater@door1
	pt_b12q01_birdmask_t
	pers_birdmask
	d12q01_birdmask_t.xml
	volonteers_danko
	childs_letter
	pt_b12q01_birdmask_s
	d12q01_birdmask_s.xml
	termitnik2
	pt_b12q01_klara
	NPC_Klara
	d12q01_klara_t2.xml
	factory
	pt_d12q01_burah
	NPC_Burah
	d12q01_burah_factory.xml
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
	quest_d12_01_sobor_cutscene
	sobor_cutscene_end
	pt_b12q01_block
	NPC_Block
	d12q01_Block.xml
	pt_b12q01_aglaja
	NPC_Aglaja
	d12q01_Aglaja.xml
	pt_b12q01_kapella
	NPC_Maria
	d12q01_maria.xml
	d12q01_Klara.xml
	d12q01_Burah.xml
	pt_d12q01_eva
	NPC_Eva
	d12q01_Eva.xml
	sobor_unload
	Remove
	init_theater
	NPC_Mark
	itheater@door1
	theater_load
	quest_d12_01_theater_cutscene
	d12q01TheaterIsVisited
	theater_cutscene_end
	pt_b12q01_birdmask
	d12q01_tbirdmask.xml
	pt_b12q01_whitemask
	pers_whitemask
	d12q01_twhitemask.xml
	theater_unload
	init_hidden_room
	mnogogrannik_han@door1
	mnogogrannik_han@door2
	imnogogrannik_han@door1
	hidden_room_load
	d12q01ChildsAreVisited
	quest_d12_01_hidden_room_cutscene
	hidden_room_cutscene_end
	pt_girl
	pers_littlegirl2
	d12q01_littlegirl.xml
	pt_boy
	pers_littleboy2
	d12q01_littleboy.xml
	hidden_room_unload
	theater_letter
	d12q01
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
	b12q01ChildsAreVisited
	b12q01TheaterIsVisited
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
	d12q01KlaraInSobor
	d12q01BurahInSobor
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
	GTASK_0 Vars = (bool, bool, bool, bool, object, object, object, object, object, object, object, object, object, object, object, object, object) Params = 0
		EVENT_9 Op = 0x92 Vars = (int, float)
		EVENT_26 Op = 0xd1 Vars = (string)


0x0: PushEmpty(object, object)
0x1: @ GetMainOutdoorScene(Stack[-1])
0x2: Pop(0)
0x3: PushEmpty(string, bool)
0x4: Stack[-2] = "theater@door1"
0x5: Stack[-1] = (bool) 1
0x6: Call2 0x288

0x7: Pop(2)
0x8: PushEmpty(object, object, string, string, string)
0x9: Stack[-4] = Stack[-6]
0xa: Stack[-3] = "pt_b12q01_birdmask_t"
0xb: Stack[-2] = "pers_birdmask"
0xc: Stack[-1] = "d12q01_birdmask_t.xml"
0xd: Call2 0x276

0xe: Stack[13 + Tasks[-1].StackPointer] = Stack[-5]
0xf: Pop(5)
0x10: Return(); Pop(2)

0x11: Stack[-1] = 0
0x12: PushEmpty(object, float, object, float)
0x13: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x14: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x15: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x16: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x17: PushEmpty()
0x18: Call2 0x533

0x19: Pop(0)
0x1a: Push((int) 0)
0x1b: Push((int) 288)
0x1c: @ SetTimeEvent(Stack[-2], Stack[-1])
0x1d: Pop(2)
0x1e: PushEmpty(int)
0x1f: Call2 0x2b1

0x20: Pop(0)
0x21: Push((int) 8)
0x22: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x23: IF (Stack[-1] == 0) GOTO 0x2f; Pop(1)

0x24: PushEmpty(bool)
0x25: Call2 0x40b

0x26: Pop(0)
0x27: IF (Stack[-1] == 0) GOTO 0x2e; Pop(1)

0x28: PushEmpty(bool, string, string, string)
0x29: Stack[-3] = "volonteers_danko"
0x2a: Stack[-2] = "childs_letter"
0x2b: Stack[-1] = ""
0x2c: Call2 0x299

0x2d: Pop(4)
0x2e: GOTO 0x33

0x2f: Push((int) 1)
0x30: Push((int) 272)
0x31: @ SetTimeEvent(Stack[-2], Stack[-1])
0x32: Pop(2)
0x33: PushEmpty(int)
0x34: Stack[-1] = (int) 0
0x35: Call2 0x435

0x36: Pop(1)
0x37: PushEmpty()
0x38: Call2 0x2b9

0x39: Pop(0)
0x3a: PushEmpty()
0x3b: Call2 0x2c6

0x3c: Pop(0)
0x3d: @ GetMainOutdoorScene(Stack[-2])
0x3e: Pop(0)
0x3f: PushEmpty(object, object, string, string, string)
0x40: Stack[-4] = Stack[-7]
0x41: Stack[-3] = "pt_b12q01_birdmask_s"
0x42: Stack[-2] = "pers_birdmask"
0x43: Stack[-1] = "d12q01_birdmask_s.xml"
0x44: Call2 0x276

0x45: Stack[4 + Tasks[-1].StackPointer] = Stack[-5]
0x46: Pop(5)
0x47: Push("termitnik2")
0x48: @ GetSceneByName(Stack[-3], Stack[-1])
0x49: Pop(1)
0x4a: PushEmpty(object, object, string, string, string)
0x4b: Stack[-4] = Stack[-7]
0x4c: Stack[-3] = "pt_b12q01_klara"
0x4d: Stack[-2] = "NPC_Klara"
0x4e: Stack[-1] = "d12q01_klara_t2.xml"
0x4f: Call2 0x264

0x50: Stack[9 + Tasks[-1].StackPointer] = Stack[-5]
0x51: Pop(5)
0x52: Push("factory")
0x53: @ GetSceneByName(Stack[-3], Stack[-1])
0x54: Pop(1)
0x55: PushEmpty(object, object, string, string, string)
0x56: Stack[-4] = Stack[-7]
0x57: Stack[-3] = "pt_d12q01_burah"
0x58: Stack[-2] = "NPC_Burah"
0x59: Stack[-1] = "d12q01_burah_factory.xml"
0x5a: Call2 0x264

0x5b: Stack[11 + Tasks[-1].StackPointer] = Stack[-5]
0x5c: Pop(5)
0x5d: PushEmpty(string, bool)
0x5e: Stack[-2] = "sobor@door1"
0x5f: Stack[-1] = (bool) 1
0x60: Call2 0x288

0x61: Pop(2)
0x62: PushEmpty(string, bool)
0x63: Stack[-2] = "hidden_room@door1"
0x64: Stack[-1] = (bool) 1
0x65: Call2 0x288

0x66: Pop(2)
0x67: PushEmpty(string, bool)
0x68: Stack[-2] = "mnogogrannik@door1"
0x69: Stack[-1] = (bool) 1
0x6a: Call2 0x288

0x6b: Pop(2)
0x6c: PushEmpty(string, bool)
0x6d: Stack[-2] = "cot_eva@door1"
0x6e: Stack[-1] = (bool) 0
0x6f: Call2 0x288

0x70: Pop(2)
0x71: PushEmpty(string, bool)
0x72: Stack[-2] = "termitnik2@door1"
0x73: Stack[-1] = (bool) 0
0x74: Call2 0x288

0x75: Pop(2)
0x76: PushEmpty(string, bool)
0x77: Stack[-2] = "uprava_admin@door1"
0x78: Stack[-1] = (bool) 0
0x79: Call2 0x288

0x7a: Pop(2)
0x7b: @ GetGameTime(Stack[-1])
0x7c: Pop(0)
0x7d: Push((int) 271)
0x7e: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x7f: IF (Stack[-1] == 0) GOTO 0x8a; Pop(1)

0x80: Push((int) 2)
0x81: Push((int) 271)
0x82: @ SetTimeEvent(Stack[-2], Stack[-1])
0x83: Pop(2)
0x84: PushEmpty(string, bool)
0x85: Stack[-2] = "theater@door1"
0x86: Stack[-1] = (bool) 0
0x87: Call2 0x288

0x88: Pop(2)
0x89: GOTO 0x8d

0x8a: PushEmpty()
0x8b: Call2 0x0

0x8c: Pop(0)
0x8d: @ Hold()
0x8e: Pop(0)
0x8f: GOTO 0x8d

0x90: Return(); Pop(4)

0x91: Stack[-2] = 0
0x92: PushEmpty(float, float)
0x93: EventDisable(26)
0x94: EventDisable(9)
0x95: Push((int) 0)
0x96: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x97: IF (Stack[-1] == 0) GOTO 0xb8; Pop(1)

0x98: Push("final 0")
0x99: @ Trace(Stack[-1])
0x9a: Pop(1)
0x9b: PushEmpty(bool)
0x9c: Stack[-1] = (bool) 1
0x9d: Push( Stack[3 + Tasks[-1].StackPointer] )
0x9e: IF (Stack[-1] == 0) GOTO 0xa5; Pop(1)

0x9f: PushEmpty(bool)
0xa0: Call2 0x52e

0xa1: Pop(0)
0xa2: Pop(1); Push((bool) Stack[-1] == 0)
0xa3: IF (Stack[-1] == 0) GOTO 0xa5; Pop(1)

0xa4: Stack[-1] = (bool) 0
0xa5: IF (Stack[-1] == 0) GOTO 0xb4; Pop(1)

0xa6: Push("final 1 locked: ")
0xa7: Pop(1); Push(Stack[-1] + Stack[3 + StackPtr]);
0xa8: @ Trace(Stack[-1])
0xa9: Pop(1)
0xaa: @ GetGameTime(Stack[-1])
0xab: Pop(0)
0xac: Push((float)0.00833)
0xad: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0xae: Push((int) 0)
0xaf: @ SetTimeEvent(Stack[-1], Stack[-2])
0xb0: Pop(1)
0xb1: EventEnable(26)
0xb2: EventEnable(9)
0xb3: Return(); Pop(2)

0xb4: PushEmpty()
0xb5: Call2 0x440

0xb6: Pop(0)
0xb7: GOTO 0xd0

0xb8: Push((int) 1)
0xb9: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0xba: IF (Stack[-1] == 0) GOTO 0xc8; Pop(1)

0xbb: PushEmpty(bool)
0xbc: Call2 0x40b

0xbd: Pop(0)
0xbe: IF (Stack[-1] == 0) GOTO 0xc5; Pop(1)

0xbf: PushEmpty(bool, string, string, string)
0xc0: Stack[-3] = "volonteers_danko"
0xc1: Stack[-2] = "childs_letter"
0xc2: Stack[-1] = ""
0xc3: Call2 0x299

0xc4: Pop(4)
0xc5: EventEnable(26)
0xc6: EventEnable(9)
0xc7: GOTO 0xd0

0xc8: Push((int) 2)
0xc9: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0xca: IF (Stack[-1] == 0) GOTO 0xd0; Pop(1)

0xcb: PushEmpty()
0xcc: Call2 0x0

0xcd: Pop(0)
0xce: EventEnable(26)
0xcf: EventEnable(9)
0xd0: Return(); Pop(2)

0xd1: PushEmpty(object, object, object, object, int, object, object, object, object, int)
0xd2: @ Trace(Stack[-11])
0xd3: Pop(0)
0xd4: Push("init_sobor")
0xd5: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0xd6: IF (Stack[-1] == 0) GOTO 0xf4; Pop(1)

0xd7: Push("sobor")
0xd8: @ GetSceneByName(Stack[-6], Stack[-1])
0xd9: Pop(1)
0xda: Push("noaglaja")
0xdb: @ Trigger(Stack[-6], Stack[-1])
0xdc: Pop(1)
0xdd: Push( Stack[9 + Tasks[-1].StackPointer] )
0xde: IF (Stack[-1] == 0) GOTO 0xe2; Pop(1)

0xdf: Push("cleanup")
0xe0: @ Trigger(Stack[-9], Stack[-1])
0xe1: Pop(1)
0xe2: Push( Stack[11 + Tasks[-1].StackPointer] )
0xe3: IF (Stack[-1] == 0) GOTO 0xe7; Pop(1)

0xe4: Push("cleanup")
0xe5: @ Trigger(Stack[-11], Stack[-1])
0xe6: Pop(1)
0xe7: PushEmpty(string, bool)
0xe8: Stack[-2] = "isobor@door1"
0xe9: Stack[-1] = (bool) 1
0xea: Call2 0x288

0xeb: Pop(2)
0xec: PushEmpty(string, bool)
0xed: Stack[-2] = "sobor@door1"
0xee: Stack[-1] = (bool) 0
0xef: Call2 0x288

0xf0: Pop(2)
0xf1: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0xf2: Stack[-5] = 0
0xf3: GOTO 0x23b

0xf4: Push("sobor_load")
0xf5: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0xf6: IF (Stack[-1] == 0) GOTO 0xff; Pop(1)

0xf7: Push( Stack[1 + Tasks[-1].StackPointer] )
0xf8: IF (Stack[-1] == 0) GOTO 0xfe; Pop(1)

0xf9: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xfa: PushEmpty(object, string)
0xfb: Stack[-1] = "quest_d12_01_sobor_cutscene"
0xfc: Call2 0x259

0xfd: Pop(2)
0xfe: GOTO 0x23b

0xff: Push("sobor_cutscene_end")
0x100: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0x101: IF (Stack[-1] == 0) GOTO 0x13f; Pop(1)

0x102: Push("sobor")
0x103: @ GetSceneByName(Stack[-5], Stack[-1])
0x104: Pop(1)
0x105: PushEmpty(object, object, string, string, string)
0x106: Stack[-4] = Stack[-9]
0x107: Stack[-3] = "pt_b12q01_block"
0x108: Stack[-2] = "NPC_Block"
0x109: Stack[-1] = "d12q01_Block.xml"
0x10a: Call2 0x264

0x10b: Stack[5 + Tasks[-1].StackPointer] = Stack[-5]
0x10c: Pop(5)
0x10d: PushEmpty(object, object, string, string, string)
0x10e: Stack[-4] = Stack[-9]
0x10f: Stack[-3] = "pt_b12q01_aglaja"
0x110: Stack[-2] = "NPC_Aglaja"
0x111: Stack[-1] = "d12q01_Aglaja.xml"
0x112: Call2 0x264

0x113: Stack[6 + Tasks[-1].StackPointer] = Stack[-5]
0x114: Pop(5)
0x115: PushEmpty(object, object, string, string, string)
0x116: Stack[-4] = Stack[-9]
0x117: Stack[-3] = "pt_b12q01_kapella"
0x118: Stack[-2] = "NPC_Maria"
0x119: Stack[-1] = "d12q01_maria.xml"
0x11a: Call2 0x264

0x11b: Stack[7 + Tasks[-1].StackPointer] = Stack[-5]
0x11c: Pop(5)
0x11d: PushEmpty(bool)
0x11e: Call2 0x520

0x11f: Pop(0)
0x120: IF (Stack[-1] == 0) GOTO 0x129; Pop(1)

0x121: PushEmpty(object, object, string, string, string)
0x122: Stack[-4] = Stack[-9]
0x123: Stack[-3] = "pt_b12q01_klara"
0x124: Stack[-2] = "NPC_Klara"
0x125: Stack[-1] = "d12q01_Klara.xml"
0x126: Call2 0x264

0x127: Stack[8 + Tasks[-1].StackPointer] = Stack[-5]
0x128: Pop(5)
0x129: PushEmpty(bool)
0x12a: Call2 0x527

0x12b: Pop(0)
0x12c: IF (Stack[-1] == 0) GOTO 0x135; Pop(1)

0x12d: PushEmpty(object, object, string, string, string)
0x12e: Stack[-4] = Stack[-9]
0x12f: Stack[-3] = "pt_d12q01_burah"
0x130: Stack[-2] = "NPC_Burah"
0x131: Stack[-1] = "d12q01_Burah.xml"
0x132: Call2 0x264

0x133: Stack[10 + Tasks[-1].StackPointer] = Stack[-5]
0x134: Pop(5)
0x135: PushEmpty(object, object, string, string, string)
0x136: Stack[-4] = Stack[-9]
0x137: Stack[-3] = "pt_d12q01_eva"
0x138: Stack[-2] = "NPC_Eva"
0x139: Stack[-1] = "d12q01_Eva.xml"
0x13a: Call2 0x264

0x13b: Stack[12 + Tasks[-1].StackPointer] = Stack[-5]
0x13c: Pop(5)
0x13d: Stack[-4] = 0
0x13e: GOTO 0x23b

0x13f: Push("sobor_unload")
0x140: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0x141: IF (Stack[-1] == 0) GOTO 0x16d; Pop(1)

0x142: Push( Stack[1 + Tasks[-1].StackPointer] )
0x143: IF (Stack[-1] == 0) GOTO 0x16c; Pop(1)

0x144: Push( Stack[4 + Tasks[-1].StackPointer] )
0x145: IF (Stack[-1] == 0) GOTO 0x148; Pop(1)

0x146: @@ Remove()
0x147: Pop(0)
0x148: Push( Stack[5 + Tasks[-1].StackPointer] )
0x149: IF (Stack[-1] == 0) GOTO 0x14d; Pop(1)

0x14a: Push("cleanup")
0x14b: @ Trigger(Stack[-5], Stack[-1])
0x14c: Pop(1)
0x14d: Push( Stack[6 + Tasks[-1].StackPointer] )
0x14e: IF (Stack[-1] == 0) GOTO 0x152; Pop(1)

0x14f: Push("cleanup")
0x150: @ Trigger(Stack[-6], Stack[-1])
0x151: Pop(1)
0x152: Push( Stack[7 + Tasks[-1].StackPointer] )
0x153: IF (Stack[-1] == 0) GOTO 0x157; Pop(1)

0x154: Push("cleanup")
0x155: @ Trigger(Stack[-7], Stack[-1])
0x156: Pop(1)
0x157: Push( Stack[8 + Tasks[-1].StackPointer] )
0x158: IF (Stack[-1] == 0) GOTO 0x15c; Pop(1)

0x159: Push("cleanup")
0x15a: @ Trigger(Stack[-8], Stack[-1])
0x15b: Pop(1)
0x15c: Push( Stack[10 + Tasks[-1].StackPointer] )
0x15d: IF (Stack[-1] == 0) GOTO 0x161; Pop(1)

0x15e: Push("cleanup")
0x15f: @ Trigger(Stack[-10], Stack[-1])
0x160: Pop(1)
0x161: Push( Stack[12 + Tasks[-1].StackPointer] )
0x162: IF (Stack[-1] == 0) GOTO 0x166; Pop(1)

0x163: Push("cleanup")
0x164: @ Trigger(Stack[-12], Stack[-1])
0x165: Pop(1)
0x166: PushEmpty(string, bool)
0x167: Stack[-2] = "sobor@door1"
0x168: Stack[-1] = (bool) 1
0x169: Call2 0x288

0x16a: Pop(2)
0x16b: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x16c: GOTO 0x23b

0x16d: Push("init_theater")
0x16e: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0x16f: IF (Stack[-1] == 0) GOTO 0x180; Pop(1)

0x170: PushEmpty(bool, string)
0x171: Stack[-1] = "NPC_Mark"
0x172: Call2 0x2a5

0x173: Pop(2)
0x174: PushEmpty(string, bool)
0x175: Stack[-2] = "itheater@door1"
0x176: Stack[-1] = (bool) 1
0x177: Call2 0x288

0x178: Pop(2)
0x179: PushEmpty(string, bool)
0x17a: Stack[-2] = "theater@door1"
0x17b: Stack[-1] = (bool) 0
0x17c: Call2 0x288

0x17d: Pop(2)
0x17e: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x17f: GOTO 0x23b

0x180: Push("theater_load")
0x181: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0x182: IF (Stack[-1] == 0) GOTO 0x18f; Pop(1)

0x183: Push( Stack[0 + Tasks[-1].StackPointer] )
0x184: IF (Stack[-1] == 0) GOTO 0x18e; Pop(1)

0x185: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x186: PushEmpty(object, string)
0x187: Stack[-1] = "quest_d12_01_theater_cutscene"
0x188: Call2 0x259

0x189: Pop(2)
0x18a: Push("d12q01TheaterIsVisited")
0x18b: Push((int) 1)
0x18c: @ SetVariable(Stack[-2], Stack[-1])
0x18d: Pop(2)
0x18e: GOTO 0x23b

0x18f: Push("theater_cutscene_end")
0x190: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0x191: IF (Stack[-1] == 0) GOTO 0x1a7; Pop(1)

0x192: Push("theater")
0x193: @ GetSceneByName(Stack[-4], Stack[-1])
0x194: Pop(1)
0x195: PushEmpty(object, object, string, string, string)
0x196: Stack[-4] = Stack[-8]
0x197: Stack[-3] = "pt_b12q01_birdmask"
0x198: Stack[-2] = "pers_birdmask"
0x199: Stack[-1] = "d12q01_tbirdmask.xml"
0x19a: Call2 0x264

0x19b: Stack[13 + Tasks[-1].StackPointer] = Stack[-5]
0x19c: Pop(5)
0x19d: PushEmpty(object, object, string, string, string)
0x19e: Stack[-4] = Stack[-8]
0x19f: Stack[-3] = "pt_b12q01_whitemask"
0x1a0: Stack[-2] = "pers_whitemask"
0x1a1: Stack[-1] = "d12q01_twhitemask.xml"
0x1a2: Call2 0x264

0x1a3: Stack[14 + Tasks[-1].StackPointer] = Stack[-5]
0x1a4: Pop(5)
0x1a5: Stack[-3] = 0
0x1a6: GOTO 0x23b

0x1a7: Push("theater_unload")
0x1a8: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0x1a9: IF (Stack[-1] == 0) GOTO 0x1bd; Pop(1)

0x1aa: Push( Stack[0 + Tasks[-1].StackPointer] )
0x1ab: IF (Stack[-1] == 0) GOTO 0x1bc; Pop(1)

0x1ac: Push( Stack[13 + Tasks[-1].StackPointer] )
0x1ad: IF (Stack[-1] == 0) GOTO 0x1b1; Pop(1)

0x1ae: Push("cleanup")
0x1af: @ Trigger(Stack[-13], Stack[-1])
0x1b0: Pop(1)
0x1b1: Push( Stack[14 + Tasks[-1].StackPointer] )
0x1b2: IF (Stack[-1] == 0) GOTO 0x1b6; Pop(1)

0x1b3: Push("cleanup")
0x1b4: @ Trigger(Stack[-14], Stack[-1])
0x1b5: Pop(1)
0x1b6: PushEmpty(string, bool)
0x1b7: Stack[-2] = "theater@door1"
0x1b8: Stack[-1] = (bool) 1
0x1b9: Call2 0x288

0x1ba: Pop(2)
0x1bb: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x1bc: GOTO 0x23b

0x1bd: Push("init_hidden_room")
0x1be: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0x1bf: IF (Stack[-1] == 0) GOTO 0x1db; Pop(1)

0x1c0: PushEmpty(string, bool)
0x1c1: Stack[-2] = "mnogogrannik_han@door1"
0x1c2: Stack[-1] = (bool) 0
0x1c3: Call2 0x288

0x1c4: Pop(2)
0x1c5: PushEmpty(string, bool)
0x1c6: Stack[-2] = "mnogogrannik_han@door2"
0x1c7: Stack[-1] = (bool) 0
0x1c8: Call2 0x288

0x1c9: Pop(2)
0x1ca: PushEmpty(string, bool)
0x1cb: Stack[-2] = "hidden_room@door1"
0x1cc: Stack[-1] = (bool) 0
0x1cd: Call2 0x288

0x1ce: Pop(2)
0x1cf: PushEmpty(string, bool)
0x1d0: Stack[-2] = "imnogogrannik_han@door1"
0x1d1: Stack[-1] = (bool) 0
0x1d2: Call2 0x288

0x1d3: Pop(2)
0x1d4: PushEmpty(string, bool)
0x1d5: Stack[-2] = "mnogogrannik@door1"
0x1d6: Stack[-1] = (bool) 0
0x1d7: Call2 0x288

0x1d8: Pop(2)
0x1d9: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x1da: GOTO 0x23b

0x1db: Push("hidden_room_load")
0x1dc: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0x1dd: IF (Stack[-1] == 0) GOTO 0x1ea; Pop(1)

0x1de: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1df: IF (Stack[-1] == 0) GOTO 0x1e9; Pop(1)

0x1e0: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1e1: Push("d12q01ChildsAreVisited")
0x1e2: Push((int) 1)
0x1e3: @ SetVariable(Stack[-2], Stack[-1])
0x1e4: Pop(2)
0x1e5: PushEmpty(object, string)
0x1e6: Stack[-1] = "quest_d12_01_hidden_room_cutscene"
0x1e7: Call2 0x259

0x1e8: Pop(2)
0x1e9: GOTO 0x23b

0x1ea: Push("hidden_room_cutscene_end")
0x1eb: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0x1ec: IF (Stack[-1] == 0) GOTO 0x202; Pop(1)

0x1ed: Push("hidden_room")
0x1ee: @ GetSceneByName(Stack[-3], Stack[-1])
0x1ef: Pop(1)
0x1f0: PushEmpty(object, object, string, string, string)
0x1f1: Stack[-4] = Stack[-7]
0x1f2: Stack[-3] = "pt_girl"
0x1f3: Stack[-2] = "pers_littlegirl2"
0x1f4: Stack[-1] = "d12q01_littlegirl.xml"
0x1f5: Call2 0x264

0x1f6: Stack[15 + Tasks[-1].StackPointer] = Stack[-5]
0x1f7: Pop(5)
0x1f8: PushEmpty(object, object, string, string, string)
0x1f9: Stack[-4] = Stack[-7]
0x1fa: Stack[-3] = "pt_boy"
0x1fb: Stack[-2] = "pers_littleboy2"
0x1fc: Stack[-1] = "d12q01_littleboy.xml"
0x1fd: Call2 0x264

0x1fe: Stack[16 + Tasks[-1].StackPointer] = Stack[-5]
0x1ff: Pop(5)
0x200: Stack[-2] = 0
0x201: GOTO 0x23b

0x202: Push("hidden_room_unload")
0x203: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0x204: IF (Stack[-1] == 0) GOTO 0x21d; Pop(1)

0x205: Push( Stack[2 + Tasks[-1].StackPointer] )
0x206: IF (Stack[-1] == 0) GOTO 0x21c; Pop(1)

0x207: PushEmpty(string, bool)
0x208: Stack[-2] = "hidden_room@door1"
0x209: Stack[-1] = (bool) 1
0x20a: Call2 0x288

0x20b: Pop(2)
0x20c: PushEmpty(string, bool)
0x20d: Stack[-2] = "mnogogrannik@door1"
0x20e: Stack[-1] = (bool) 1
0x20f: Call2 0x288

0x210: Pop(2)
0x211: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x212: PushEmpty(bool)
0x213: Call2 0x422

0x214: Pop(0)
0x215: IF (Stack[-1] == 0) GOTO 0x21c; Pop(1)

0x216: PushEmpty(bool, string, string, string)
0x217: Stack[-3] = "volonteers_danko"
0x218: Stack[-2] = "theater_letter"
0x219: Stack[-1] = ""
0x21a: Call2 0x299

0x21b: Pop(4)
0x21c: GOTO 0x23b

0x21d: Push("cleanup")
0x21e: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0x21f: IF (Stack[-1] == 0) GOTO 0x22e; Pop(1)

0x220: Push("d12q01")
0x221: @ GetVariable(Stack[-1], Stack[-2])
0x222: Pop(1)
0x223: Push((int) 1000)
0x224: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x225: IF (Stack[-1] == 0) GOTO 0x22a; Pop(1)

0x226: PushEmpty()
0x227: Call2 0x23c

0x228: Pop(0)
0x229: GOTO 0x22d

0x22a: PushEmpty()
0x22b: Call2 0x24c

0x22c: Pop(0)
0x22d: GOTO 0x23b

0x22e: Push("fail")
0x22f: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0x230: IF (Stack[-1] == 0) GOTO 0x235; Pop(1)

0x231: PushEmpty()
0x232: Call2 0x23c

0x233: Pop(0)
0x234: GOTO 0x23b

0x235: Push("completed")
0x236: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0x237: IF (Stack[-1] == 0) GOTO 0x23b; Pop(1)

0x238: PushEmpty()
0x239: Call2 0x244

0x23a: Pop(0)
0x23b: Return(); Pop(10)

0x23c: Push("d12q01")
0x23d: Push((int) -1)
0x23e: @ SetVariable(Stack[-2], Stack[-1])
0x23f: Pop(2)
0x240: PushEmpty()
0x241: Call2 0x24c

0x242: Pop(0)
0x243: Return(); Pop(0)

0x244: Push("d12q01")
0x245: Push((int) 1000)
0x246: @ SetVariable(Stack[-2], Stack[-1])
0x247: Pop(2)
0x248: PushEmpty()
0x249: Call2 0x24c

0x24a: Pop(0)
0x24b: Return(); Pop(0)

0x24c: EventDisable(26)
0x24d: PushEmpty(object)
0x24e: Call2 0x253

0x24f: Pop(0)
0x250: @ RemoveActor(Stack[-1])
0x251: Pop(1)
0x252: Return(); Pop(0)

0x253: PushEmpty(object, object)
0x254: @ self(Stack[-1])
0x255: Pop(0)
0x256: Stack[-3] = Stack[-1]
0x257: Return(); Pop(2)

0x258: Stack[-1] = 0
0x259: PushEmpty(object, object, object, object)
0x25a: @ GetMainOutdoorScene(Stack[-2])
0x25b: Pop(0)
0x25c: Push(".bin")
0x25d: Pop(1); Push(Stack[-6] + Stack[-1]);
0x25e: @ AddBlankActor(Stack[-2], Stack[-3], Stack[-6], Stack[-1])
0x25f: Pop(1)
0x260: Stack[-6] = Stack[-1]
0x261: Return(); Pop(4)

0x262: Stack[-1] = 0
0x263: Stack[-2] = 0
0x264: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x265: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0x266: Pop(0)
0x267: Pop(0); Push((bool) Stack[-4] == 0)
0x268: IF (Stack[-1] == 0) GOTO 0x271; Pop(1)

0x269: Push("Locator ")
0x26a: Pop(1); Push(Stack[-1] + Stack[-12]);
0x26b: Push(" doesn't exist")
0x26c: Pop(2); Push(Stack[-2] + Stack[-1]);
0x26d: @ Trace(Stack[-1])
0x26e: Pop(1)
0x26f: Stack[-1] = 0
0x270: GOTO 0x273

0x271: @ AddActor(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0x272: Pop(0)
0x273: Stack[-13] = Stack[-1]
0x274: Return(); Pop(8)

0x275: Stack[-1] = 0
0x276: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x277: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0x278: Pop(0)
0x279: Pop(0); Push((bool) Stack[-4] == 0)
0x27a: IF (Stack[-1] == 0) GOTO 0x283; Pop(1)

0x27b: Push("Locator ")
0x27c: Pop(1); Push(Stack[-1] + Stack[-12]);
0x27d: Push(" doesn't exist")
0x27e: Pop(2); Push(Stack[-2] + Stack[-1]);
0x27f: @ Trace(Stack[-1])
0x280: Pop(1)
0x281: Stack[-1] = 0
0x282: GOTO 0x285

0x283: @@ AddStationaryActor(Stack[-1], Stack[-3], Stack[-2], Stack[-10], Stack[-9])
0x284: Pop(0)
0x285: Stack[-13] = Stack[-1]
0x286: Return(); Pop(8)

0x287: Stack[-1] = 0
0x288: PushEmpty(object, object)
0x289: @ FindActor(Stack[-1], Stack[-4])
0x28a: Pop(0)
0x28b: Pop(0); Push((bool) Stack[-1] == 0)
0x28c: IF (Stack[-1] == 0) GOTO 0x294; Pop(1)

0x28d: Push("Door ")
0x28e: Pop(1); Push(Stack[-1] + Stack[-5]);
0x28f: Push(" not found")
0x290: Pop(2); Push(Stack[-2] + Stack[-1]);
0x291: @ Trace(Stack[-1])
0x292: Pop(1)
0x293: GOTO 0x297

0x294: Push("locked")
0x295: @@ SetProperty(Stack[-1], Stack[-4])
0x296: Pop(1)
0x297: Return(); Pop(2)

0x298: Stack[-1] = 0
0x299: PushEmpty(object, object)
0x29a: @ FindActor(Stack[-1], Stack[-5])
0x29b: Pop(0)
0x29c: Pop(0); Push((bool) Stack[-1] == 0)
0x29d: IF (Stack[-1] == 0) GOTO 0x2a0; Pop(1)

0x29e: Stack[-6] = (bool) 0
0x29f: Return(); Pop(2)

0x2a0: @ Trigger(Stack[-1], Stack[-4], Stack[-3])
0x2a1: Pop(0)
0x2a2: Stack[-6] = (bool) 1
0x2a3: Return(); Pop(2)

0x2a4: Stack[-1] = 0
0x2a5: PushEmpty(object, object)
0x2a6: @ FindActor(Stack[-1], Stack[-3])
0x2a7: Pop(0)
0x2a8: Pop(0); Push((bool) Stack[-1] == 0)
0x2a9: IF (Stack[-1] == 0) GOTO 0x2ac; Pop(1)

0x2aa: Stack[-4] = (bool) 0
0x2ab: Return(); Pop(2)

0x2ac: @ RemoveActor(Stack[-1])
0x2ad: Pop(0)
0x2ae: Stack[-4] = (bool) 1
0x2af: Return(); Pop(2)

0x2b0: Stack[-1] = 0
0x2b1: PushEmpty(float, float)
0x2b2: @ GetGameTime(Stack[-1])
0x2b3: Pop(0)
0x2b4: PushEmpty(int)
0x2b5: Stack[-1] = Stack[-2]
0x2b6: Push((int) 24)
0x2b7: Stack[-5] = Stack[-2] % Stack[-1]; Pop(2);
0x2b8: Return(); Pop(2)

0x2b9: PushEmpty(object, object)
0x2ba: Push((int) 699)
0x2bb: Push((int) 1)
0x2bc: Push((int) 535682)
0x2bd: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x2be: Pop(3)
0x2bf: PushEmpty(bool, object, int)
0x2c0: Stack[-2] = Stack[-4]
0x2c1: Stack[-1] = (int) -1
0x2c2: Call2 0x2e0

0x2c3: Pop(3)
0x2c4: Return(); Pop(2)

0x2c5: Stack[-1] = 0
0x2c6: PushEmpty(object, object)
0x2c7: Push((int) 705)
0x2c8: Push((int) 1)
0x2c9: Push((int) 535688)
0x2ca: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x2cb: Pop(3)
0x2cc: PushEmpty(bool, object, int)
0x2cd: Stack[-2] = Stack[-4]
0x2ce: Stack[-1] = (int) 699
0x2cf: Call2 0x2e0

0x2d0: Pop(3)
0x2d1: Return(); Pop(2)

0x2d2: Stack[-1] = 0
0x2d3: PushEmpty(object, object)
0x2d4: @ GetDiaryRoot(Stack[-1])
0x2d5: Pop(0)
0x2d6: Pop(0); Push((bool) Stack[-1] == 0)
0x2d7: IF (Stack[-1] == 0) GOTO 0x2dd; Pop(1)

0x2d8: Push("Can't retrieve diary root")
0x2d9: @ Trace(Stack[-1])
0x2da: Pop(1)
0x2db: Stack[-3] = (bool) 0
0x2dc: Return(); Pop(2)

0x2dd: Stack[-3] = Stack[-1]
0x2de: Return(); Pop(2)

0x2df: Stack[-1] = 0
0x2e0: PushEmpty(object, object, int, object, object, int)
0x2e1: PushEmpty(object)
0x2e2: Call2 0x2d3

0x2e3: Stack[-4] = Stack[-1]
0x2e4: Pop(1)
0x2e5: @@ Find(Stack[-7], Stack[-2])
0x2e6: Pop(0)
0x2e7: Pop(0); Push((bool) Stack[-2] == 0)
0x2e8: IF (Stack[-1] == 0) GOTO 0x2ef; Pop(1)

0x2e9: Push("Can't find diary parent with id: ")
0x2ea: Pop(1); Push(Stack[-1] + Stack[-8]);
0x2eb: @ Trace(Stack[-1])
0x2ec: Pop(1)
0x2ed: Stack[-9] = (bool) 0
0x2ee: Return(); Pop(6)

0x2ef: @@ AddChild(Stack[-8])
0x2f0: Pop(0)
0x2f1: Push((int) 7)
0x2f2: @ SendWorldWndMessage(Stack[-1])
0x2f3: Pop(1)
0x2f4: @@ GetCategory(Stack[-1])
0x2f5: Pop(0)
0x2f6: @ SetDiarySection(Stack[-1])
0x2f7: Pop(0)
0x2f8: Stack[-9] = (bool) 0
0x2f9: Return(); Pop(6)

0x2fa: Stack[-2] = 0
0x2fb: Stack[-3] = 0
0x2fc: PushEmpty(int, int)
0x2fd: Push("branch")
0x2fe: @ GetVariable(Stack[-1], Stack[-2])
0x2ff: Pop(1)
0x300: Stack[-3] = Stack[-1]
0x301: Return(); Pop(2)

0x302: PushEmpty(int)
0x303: Call2 0x2fc

0x304: Pop(0)
0x305: Push((int) 1)
0x306: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x307: IF (Stack[-1] == 0) GOTO 0x30d; Pop(1)

0x308: Push("BurahCompleted")
0x309: Push((int) 1)
0x30a: @ SetRegistryData(Stack[-2], Stack[-1])
0x30b: Pop(2)
0x30c: GOTO 0x322

0x30d: PushEmpty(int)
0x30e: Call2 0x2fc

0x30f: Pop(0)
0x310: Push((int) 0)
0x311: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x312: IF (Stack[-1] == 0) GOTO 0x318; Pop(1)

0x313: Push("DankoCompleted")
0x314: Push((int) 1)
0x315: @ SetRegistryData(Stack[-2], Stack[-1])
0x316: Pop(2)
0x317: GOTO 0x322

0x318: PushEmpty(int)
0x319: Call2 0x2fc

0x31a: Pop(0)
0x31b: Push((int) 2)
0x31c: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x31d: IF (Stack[-1] == 0) GOTO 0x322; Pop(1)

0x31e: Push("KlaraCompleted")
0x31f: Push((int) 1)
0x320: @ SetRegistryData(Stack[-2], Stack[-1])
0x321: Pop(2)
0x322: Return(); Pop(0)

0x323: PushEmpty()
0x324: Push((int) 18)
0x325: @@ add(Stack[-1])
0x326: Pop(1)
0x327: Push((int) 24)
0x328: @@ add(Stack[-1])
0x329: Pop(1)
0x32a: Push((int) 20)
0x32b: @@ add(Stack[-1])
0x32c: Pop(1)
0x32d: Push((int) 14)
0x32e: @@ add(Stack[-1])
0x32f: Pop(1)
0x330: Push((bool) 0)
0x331: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x332: IF (Stack[-1] == 0) GOTO 0x33d; Pop(1)

0x333: Push((int) 10)
0x334: @@ add(Stack[-1])
0x335: Pop(1)
0x336: Push((int) 17)
0x337: @@ add(Stack[-1])
0x338: Pop(1)
0x339: Push((int) 8)
0x33a: @@ add(Stack[-1])
0x33b: Pop(1)
0x33c: GOTO 0x343

0x33d: Push((int) 1)
0x33e: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x33f: IF (Stack[-1] == 0) GOTO 0x343; Pop(1)

0x340: Push((int) 10)
0x341: @@ add(Stack[-1])
0x342: Pop(1)
0x343: Return(); Pop(0)

0x344: PushEmpty()
0x345: Push((int) 6)
0x346: @@ add(Stack[-1])
0x347: Pop(1)
0x348: Push((int) 26)
0x349: @@ add(Stack[-1])
0x34a: Pop(1)
0x34b: Push((int) 2)
0x34c: @@ add(Stack[-1])
0x34d: Pop(1)
0x34e: Push((int) 22)
0x34f: @@ add(Stack[-1])
0x350: Pop(1)
0x351: Push((bool) 0)
0x352: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x353: IF (Stack[-1] == 0) GOTO 0x35e; Pop(1)

0x354: Push((int) 15)
0x355: @@ add(Stack[-1])
0x356: Pop(1)
0x357: Push((int) 5)
0x358: @@ add(Stack[-1])
0x359: Pop(1)
0x35a: Push((int) 16)
0x35b: @@ add(Stack[-1])
0x35c: Pop(1)
0x35d: GOTO 0x364

0x35e: Push((int) 0)
0x35f: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x360: IF (Stack[-1] == 0) GOTO 0x364; Pop(1)

0x361: Push((int) 15)
0x362: @@ add(Stack[-1])
0x363: Pop(1)
0x364: Return(); Pop(0)

0x365: PushEmpty()
0x366: Push((int) 7)
0x367: @@ add(Stack[-1])
0x368: Pop(1)
0x369: Push((int) 23)
0x36a: @@ add(Stack[-1])
0x36b: Pop(1)
0x36c: Push((int) 21)
0x36d: @@ add(Stack[-1])
0x36e: Pop(1)
0x36f: Push((int) 9)
0x370: @@ add(Stack[-1])
0x371: Pop(1)
0x372: Push((int) 3)
0x373: @@ add(Stack[-1])
0x374: Pop(1)
0x375: Push((int) 1)
0x376: @@ add(Stack[-1])
0x377: Pop(1)
0x378: Push((int) 11)
0x379: @@ add(Stack[-1])
0x37a: Pop(1)
0x37b: Push((int) 13)
0x37c: @@ add(Stack[-1])
0x37d: Pop(1)
0x37e: Push((bool) 0)
0x37f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x380: IF (Stack[-1] == 0) GOTO 0x384; Pop(1)

0x381: Push((int) 25)
0x382: @@ add(Stack[-1])
0x383: Pop(1)
0x384: Return(); Pop(0)

0x385: PushEmpty(int, int)
0x386: Push("vol_")
0x387: Pop(1); Push(Stack[-1] + Stack[-4]);
0x388: @ GetVariable(Stack[-1], Stack[-2])
0x389: Pop(1)
0x38a: Push((int) 4)
0x38b: Pop(1); Push(Stack[-2] & Stack[-1]);
0x38c: Push((int) 0)
0x38d: Stack[-6] = Stack[-2] != Stack[-1]; Pop(2);
0x38e: Return(); Pop(2)

0x38f: PushEmpty(int, int)
0x390: Push("vol_")
0x391: Pop(1); Push(Stack[-1] + Stack[-4]);
0x392: @ GetVariable(Stack[-1], Stack[-2])
0x393: Pop(1)
0x394: Push((int) 16)
0x395: Pop(1); Push(Stack[-2] & Stack[-1]);
0x396: Push((int) 0)
0x397: Stack[-6] = Stack[-2] != Stack[-1]; Pop(2);
0x398: Return(); Pop(2)

0x399: PushEmpty(object, int, int, int, object, int, int, int)
0x39a: @ CreateIntVector(Stack[-4])
0x39b: Pop(0)
0x39c: PushEmpty(object, bool, int)
0x39d: Stack[-3] = Stack[-7]
0x39e: Stack[-2] = (bool) 0
0x39f: Stack[-1] = (int) -1
0x3a0: Call2 0x323

0x3a1: Pop(3)
0x3a2: @@ size(Stack[-3])
0x3a3: Pop(0)
0x3a4: Stack[-2] = (int) 0
0x3a5: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0x3a6: IF (Stack[-1] == 0) GOTO 0x3bc; Pop(1)

0x3a7: @@ get(Stack[-1], Stack[-2])
0x3a8: Pop(0)
0x3a9: PushEmpty(bool)
0x3aa: Stack[-1] = (bool) 1
0x3ab: PushEmpty(bool, int)
0x3ac: Stack[-1] = Stack[-4]
0x3ad: Call2 0x38f

0x3ae: Pop(1)
0x3af: IF (Stack[-1] == 0) GOTO 0x3b6; Pop(1)

0x3b0: PushEmpty(bool, int)
0x3b1: Stack[-1] = Stack[-4]
0x3b2: Call2 0x385

0x3b3: Pop(1)
0x3b4: IF (Stack[-1] == 0) GOTO 0x3b6; Pop(1)

0x3b5: Stack[-1] = (bool) 0
0x3b6: IF (Stack[-1] == 0) GOTO 0x3b9; Pop(1)

0x3b7: Stack[-9] = (bool) 0
0x3b8: Return(); Pop(8)

0x3b9: Push((int) 1)
0x3ba: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x3bb: GOTO 0x3a5

0x3bc: Stack[-9] = (bool) 1
0x3bd: Return(); Pop(8)

0x3be: Stack[-4] = 0
0x3bf: PushEmpty(object, int, int, int, object, int, int, int)
0x3c0: @ CreateIntVector(Stack[-4])
0x3c1: Pop(0)
0x3c2: PushEmpty(object, bool, int)
0x3c3: Stack[-3] = Stack[-7]
0x3c4: Stack[-2] = (bool) 0
0x3c5: Stack[-1] = (int) -1
0x3c6: Call2 0x344

0x3c7: Pop(3)
0x3c8: @@ size(Stack[-3])
0x3c9: Pop(0)
0x3ca: Stack[-2] = (int) 0
0x3cb: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0x3cc: IF (Stack[-1] == 0) GOTO 0x3e2; Pop(1)

0x3cd: @@ get(Stack[-1], Stack[-2])
0x3ce: Pop(0)
0x3cf: PushEmpty(bool)
0x3d0: Stack[-1] = (bool) 1
0x3d1: PushEmpty(bool, int)
0x3d2: Stack[-1] = Stack[-4]
0x3d3: Call2 0x38f

0x3d4: Pop(1)
0x3d5: IF (Stack[-1] == 0) GOTO 0x3dc; Pop(1)

0x3d6: PushEmpty(bool, int)
0x3d7: Stack[-1] = Stack[-4]
0x3d8: Call2 0x385

0x3d9: Pop(1)
0x3da: IF (Stack[-1] == 0) GOTO 0x3dc; Pop(1)

0x3db: Stack[-1] = (bool) 0
0x3dc: IF (Stack[-1] == 0) GOTO 0x3df; Pop(1)

0x3dd: Stack[-9] = (bool) 0
0x3de: Return(); Pop(8)

0x3df: Push((int) 1)
0x3e0: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x3e1: GOTO 0x3cb

0x3e2: Stack[-9] = (bool) 1
0x3e3: Return(); Pop(8)

0x3e4: Stack[-4] = 0
0x3e5: PushEmpty(object, int, int, int, object, int, int, int)
0x3e6: @ CreateIntVector(Stack[-4])
0x3e7: Pop(0)
0x3e8: PushEmpty(object, bool, int)
0x3e9: Stack[-3] = Stack[-7]
0x3ea: Stack[-2] = (bool) 0
0x3eb: Stack[-1] = (int) -1
0x3ec: Call2 0x365

0x3ed: Pop(3)
0x3ee: @@ size(Stack[-3])
0x3ef: Pop(0)
0x3f0: Stack[-2] = (int) 0
0x3f1: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0x3f2: IF (Stack[-1] == 0) GOTO 0x408; Pop(1)

0x3f3: @@ get(Stack[-1], Stack[-2])
0x3f4: Pop(0)
0x3f5: PushEmpty(bool)
0x3f6: Stack[-1] = (bool) 1
0x3f7: PushEmpty(bool, int)
0x3f8: Stack[-1] = Stack[-4]
0x3f9: Call2 0x38f

0x3fa: Pop(1)
0x3fb: IF (Stack[-1] == 0) GOTO 0x402; Pop(1)

0x3fc: PushEmpty(bool, int)
0x3fd: Stack[-1] = Stack[-4]
0x3fe: Call2 0x385

0x3ff: Pop(1)
0x400: IF (Stack[-1] == 0) GOTO 0x402; Pop(1)

0x401: Stack[-1] = (bool) 0
0x402: IF (Stack[-1] == 0) GOTO 0x405; Pop(1)

0x403: Stack[-9] = (bool) 0
0x404: Return(); Pop(8)

0x405: Push((int) 1)
0x406: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x407: GOTO 0x3f1

0x408: Stack[-9] = (bool) 1
0x409: Return(); Pop(8)

0x40a: Stack[-4] = 0
0x40b: PushEmpty(int, int)
0x40c: Stack[-1] = (int) 0
0x40d: PushEmpty(bool)
0x40e: Call2 0x3e5

0x40f: Pop(0)
0x410: IF (Stack[-1] == 0) GOTO 0x413; Pop(1)

0x411: Push((int) 1)
0x412: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x413: PushEmpty(bool)
0x414: Call2 0x3bf

0x415: Pop(0)
0x416: IF (Stack[-1] == 0) GOTO 0x419; Pop(1)

0x417: Push((int) 1)
0x418: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x419: PushEmpty(bool)
0x41a: Call2 0x399

0x41b: Pop(0)
0x41c: IF (Stack[-1] == 0) GOTO 0x41f; Pop(1)

0x41d: Push((int) 1)
0x41e: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x41f: Push((int) 2)
0x420: Stack[-4] = Stack[-2] >= Stack[-1]; Pop(1);
0x421: Return(); Pop(2)

0x422: Stack[-1] = (bool) 0
0x423: PushEmpty(bool)
0x424: Stack[-1] = (bool) 0
0x425: PushEmpty(bool)
0x426: Call2 0x3e5

0x427: Pop(0)
0x428: IF (Stack[-1] == 0) GOTO 0x42e; Pop(1)

0x429: PushEmpty(bool)
0x42a: Call2 0x3bf

0x42b: Pop(0)
0x42c: IF (Stack[-1] == 0) GOTO 0x42e; Pop(1)

0x42d: Stack[-1] = (bool) 1
0x42e: IF (Stack[-1] == 0) GOTO 0x434; Pop(1)

0x42f: PushEmpty(bool)
0x430: Call2 0x399

0x431: Pop(0)
0x432: IF (Stack[-1] == 0) GOTO 0x434; Pop(1)

0x433: Stack[-1] = (bool) 1
0x434: Return(); Pop(0)

0x435: PushEmpty()
0x436: Push("game_final")
0x437: @ SetVariable(Stack[-1], Stack[-2])
0x438: Pop(1)
0x439: Return(); Pop(0)

0x43a: PushEmpty(int, int)
0x43b: Push("game_final")
0x43c: @ GetVariable(Stack[-1], Stack[-2])
0x43d: Pop(1)
0x43e: Stack[-3] = Stack[-1]
0x43f: Return(); Pop(2)

0x440: PushEmpty(int, int, bool, bool, int, int, int, bool, bool, int, int, bool, bool, int, int, int, bool, bool)
0x441: PushEmpty()
0x442: Call2 0x302

0x443: Pop(0)
0x444: PushEmpty(int)
0x445: Call2 0x2fc

0x446: Stack[-10] = Stack[-1]
0x447: Pop(1)
0x448: PushEmpty(int)
0x449: Call2 0x43a

0x44a: Stack[-9] = Stack[-1]
0x44b: Pop(1)
0x44c: Stack[-7] = (bool) 0
0x44d: Stack[-6] = (bool) 0
0x44e: Push((int) 0)
0x44f: Pop(1); Push((bool) Stack[-10] == Stack[-1])
0x450: IF (Stack[-1] == 0) GOTO 0x45c; Pop(1)

0x451: Push("d12q01ChildsAreVisited")
0x452: @ GetVariable(Stack[-1], Stack[-6])
0x453: Pop(1)
0x454: Push((int) 0)
0x455: Stack[-8] = Stack[-6] != Stack[-1]; Pop(1);
0x456: Push("d12q01TheaterIsVisited")
0x457: @ GetVariable(Stack[-1], Stack[-6])
0x458: Pop(1)
0x459: Push((int) 0)
0x45a: Stack[-7] = Stack[-6] != Stack[-1]; Pop(1);
0x45b: GOTO 0x477

0x45c: Push((int) 1)
0x45d: Pop(1); Push((bool) Stack[-10] == Stack[-1])
0x45e: IF (Stack[-1] == 0) GOTO 0x46a; Pop(1)

0x45f: Push("b12q01ChildsAreVisited")
0x460: @ GetVariable(Stack[-1], Stack[-5])
0x461: Pop(1)
0x462: Push((int) 0)
0x463: Stack[-8] = Stack[-5] != Stack[-1]; Pop(1);
0x464: Push("b12q01TheaterIsVisited")
0x465: @ GetVariable(Stack[-1], Stack[-5])
0x466: Pop(1)
0x467: Push((int) 0)
0x468: Stack[-7] = Stack[-5] != Stack[-1]; Pop(1);
0x469: GOTO 0x477

0x46a: Push((int) 2)
0x46b: Pop(1); Push((bool) Stack[-10] == Stack[-1])
0x46c: IF (Stack[-1] == 0) GOTO 0x477; Pop(1)

0x46d: Push("k12q01ChildsAreVisited")
0x46e: @ GetVariable(Stack[-1], Stack[-4])
0x46f: Pop(1)
0x470: Push((int) 0)
0x471: Stack[-8] = Stack[-4] != Stack[-1]; Pop(1);
0x472: Push("k12q01TheaterIsVisited")
0x473: @ GetVariable(Stack[-1], Stack[-4])
0x474: Pop(1)
0x475: Push((int) 0)
0x476: Stack[-7] = Stack[-4] != Stack[-1]; Pop(1);
0x477: Stack[-2] = (bool) 0
0x478: PushEmpty(bool)
0x479: Stack[-1] = (bool) 0
0x47a: Push((int) 0)
0x47b: Pop(1); Push((bool) Stack[-11] == Stack[-1])
0x47c: IF (Stack[-1] == 0) GOTO 0x481; Pop(1)

0x47d: Push((int) 2)
0x47e: Pop(1); Push((bool) Stack[-10] == Stack[-1])
0x47f: IF (Stack[-1] == 0) GOTO 0x481; Pop(1)

0x480: Stack[-1] = (bool) 1
0x481: IF (Stack[-1] == 0) GOTO 0x483; Pop(1)

0x482: Stack[-2] = (bool) 1
0x483: PushEmpty(bool)
0x484: Stack[-1] = (bool) 0
0x485: Push((int) 1)
0x486: Pop(1); Push((bool) Stack[-11] == Stack[-1])
0x487: IF (Stack[-1] == 0) GOTO 0x48c; Pop(1)

0x488: Push((int) 1)
0x489: Pop(1); Push((bool) Stack[-10] == Stack[-1])
0x48a: IF (Stack[-1] == 0) GOTO 0x48c; Pop(1)

0x48b: Stack[-1] = (bool) 1
0x48c: IF (Stack[-1] == 0) GOTO 0x48e; Pop(1)

0x48d: Stack[-2] = (bool) 1
0x48e: PushEmpty(bool)
0x48f: Stack[-1] = (bool) 0
0x490: Push((int) 2)
0x491: Pop(1); Push((bool) Stack[-11] == Stack[-1])
0x492: IF (Stack[-1] == 0) GOTO 0x497; Pop(1)

0x493: Push((int) 3)
0x494: Pop(1); Push((bool) Stack[-10] == Stack[-1])
0x495: IF (Stack[-1] == 0) GOTO 0x497; Pop(1)

0x496: Stack[-1] = (bool) 1
0x497: IF (Stack[-1] == 0) GOTO 0x499; Pop(1)

0x498: Stack[-2] = (bool) 1
0x499: Stack[-1] = (bool) 0
0x49a: PushEmpty(bool)
0x49b: Stack[-1] = (bool) 0
0x49c: PushEmpty(bool)
0x49d: Stack[-1] = (bool) 0
0x49e: Push((int) 4)
0x49f: Pop(1); Push((bool) Stack[-11] == Stack[-1])
0x4a0: IF (Stack[-1] == 0) GOTO 0x4a4; Pop(1)

0x4a1: Pop(0); Push((bool) Stack[-9] == 0)
0x4a2: IF (Stack[-1] == 0) GOTO 0x4a4; Pop(1)

0x4a3: Stack[-1] = (bool) 1
0x4a4: IF (Stack[-1] == 0) GOTO 0x4a8; Pop(1)

0x4a5: Pop(0); Push((bool) Stack[-7] == 0)
0x4a6: IF (Stack[-1] == 0) GOTO 0x4a8; Pop(1)

0x4a7: Stack[-1] = (bool) 1
0x4a8: IF (Stack[-1] == 0) GOTO 0x4aa; Pop(1)

0x4a9: Stack[-1] = (bool) 1
0x4aa: PushEmpty(bool)
0x4ab: Stack[-1] = (bool) 0
0x4ac: PushEmpty(bool)
0x4ad: Stack[-1] = (bool) 0
0x4ae: Pop(0); Push((bool) Stack[-4] == 0)
0x4af: IF (Stack[-1] == 0) GOTO 0x4b3; Pop(1)

0x4b0: Push(Stack[-9])
0x4b1: IF (Stack[-1] == 0) GOTO 0x4b3; Pop(1)

0x4b2: Stack[-1] = (bool) 1
0x4b3: IF (Stack[-1] == 0) GOTO 0x4b7; Pop(1)

0x4b4: Pop(0); Push((bool) Stack[-7] == 0)
0x4b5: IF (Stack[-1] == 0) GOTO 0x4b7; Pop(1)

0x4b6: Stack[-1] = (bool) 1
0x4b7: IF (Stack[-1] == 0) GOTO 0x4b9; Pop(1)

0x4b8: Stack[-1] = (bool) 1
0x4b9: PushEmpty(bool)
0x4ba: Stack[-1] = (bool) 0
0x4bb: PushEmpty(bool)
0x4bc: Stack[-1] = (bool) 0
0x4bd: Push(Stack[-4])
0x4be: IF (Stack[-1] == 0) GOTO 0x4c2; Pop(1)

0x4bf: Push(Stack[-9])
0x4c0: IF (Stack[-1] == 0) GOTO 0x4c2; Pop(1)

0x4c1: Stack[-1] = (bool) 1
0x4c2: IF (Stack[-1] == 0) GOTO 0x4c6; Pop(1)

0x4c3: Push(Stack[-7])
0x4c4: IF (Stack[-1] == 0) GOTO 0x4c6; Pop(1)

0x4c5: Stack[-1] = (bool) 1
0x4c6: IF (Stack[-1] == 0) GOTO 0x4c8; Pop(1)

0x4c7: Stack[-1] = (bool) 1
0x4c8: Push("PlayFinalMovie")
0x4c9: @ Trace(Stack[-1])
0x4ca: Pop(1)
0x4cb: PushEmpty(int)
0x4cc: Call2 0x43a

0x4cd: Pop(0)
0x4ce: Push((int) 1)
0x4cf: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x4d0: IF (Stack[-1] == 0) GOTO 0x4e3; Pop(1)

0x4d1: Push("fin_termit")
0x4d2: @ Trace(Stack[-1])
0x4d3: Pop(1)
0x4d4: Pop(0); Push((bool) Stack[-2] == 0)
0x4d5: IF (Stack[-1] == 0) GOTO 0x4d9; Pop(1)

0x4d6: Push("ACHIEVEMENT_HELLO_2")
0x4d7: @ UnlockAchievement(Stack[-1])
0x4d8: Pop(1)
0x4d9: Push(Stack[-1])
0x4da: IF (Stack[-1] == 0) GOTO 0x4df; Pop(1)

0x4db: Push("gameover_termit_chudo.xml")
0x4dc: @ GameOver(Stack[-1])
0x4dd: Pop(1)
0x4de: GOTO 0x4e2

0x4df: Push("gameover_termit.xml")
0x4e0: @ GameOver(Stack[-1])
0x4e1: Pop(1)
0x4e2: GOTO 0x51f

0x4e3: PushEmpty(int)
0x4e4: Call2 0x43a

0x4e5: Pop(0)
0x4e6: Push((int) 2)
0x4e7: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x4e8: IF (Stack[-1] == 0) GOTO 0x4fb; Pop(1)

0x4e9: Push("fin_utop")
0x4ea: @ Trace(Stack[-1])
0x4eb: Pop(1)
0x4ec: Pop(0); Push((bool) Stack[-2] == 0)
0x4ed: IF (Stack[-1] == 0) GOTO 0x4f1; Pop(1)

0x4ee: Push("ACHIEVEMENT_HELLO_2")
0x4ef: @ UnlockAchievement(Stack[-1])
0x4f0: Pop(1)
0x4f1: Push(Stack[-1])
0x4f2: IF (Stack[-1] == 0) GOTO 0x4f7; Pop(1)

0x4f3: Push("gameover_utopist_chudo.xml")
0x4f4: @ GameOver(Stack[-1])
0x4f5: Pop(1)
0x4f6: GOTO 0x4fa

0x4f7: Push("gameover_utopist.xml")
0x4f8: @ GameOver(Stack[-1])
0x4f9: Pop(1)
0x4fa: GOTO 0x51f

0x4fb: PushEmpty(int)
0x4fc: Call2 0x43a

0x4fd: Pop(0)
0x4fe: Push((int) 3)
0x4ff: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x500: IF (Stack[-1] == 0) GOTO 0x513; Pop(1)

0x501: Push("fin_smiren")
0x502: @ Trace(Stack[-1])
0x503: Pop(1)
0x504: Pop(0); Push((bool) Stack[-2] == 0)
0x505: IF (Stack[-1] == 0) GOTO 0x509; Pop(1)

0x506: Push("ACHIEVEMENT_HELLO_2")
0x507: @ UnlockAchievement(Stack[-1])
0x508: Pop(1)
0x509: Push(Stack[-1])
0x50a: IF (Stack[-1] == 0) GOTO 0x50f; Pop(1)

0x50b: Push("gameover_smirennik_chudo.xml")
0x50c: @ GameOver(Stack[-1])
0x50d: Pop(1)
0x50e: GOTO 0x512

0x50f: Push("gameover_smirennik.xml")
0x510: @ GameOver(Stack[-1])
0x511: Pop(1)
0x512: GOTO 0x51f

0x513: Push("fin_beda")
0x514: @ Trace(Stack[-1])
0x515: Pop(1)
0x516: Push(Stack[-1])
0x517: IF (Stack[-1] == 0) GOTO 0x51c; Pop(1)

0x518: Push("gameover_beda_chudo.xml")
0x519: @ GameOver(Stack[-1])
0x51a: Pop(1)
0x51b: GOTO 0x51f

0x51c: Push("gameover_beda.xml")
0x51d: @ GameOver(Stack[-1])
0x51e: Pop(1)
0x51f: Return(); Pop(18)

0x520: PushEmpty(int, int)
0x521: Push("d12q01KlaraInSobor")
0x522: @ GetVariable(Stack[-1], Stack[-2])
0x523: Pop(1)
0x524: Push((int) 0)
0x525: Stack[-4] = Stack[-2] != Stack[-1]; Pop(1);
0x526: Return(); Pop(2)

0x527: PushEmpty(int, int)
0x528: Push("d12q01BurahInSobor")
0x529: @ GetVariable(Stack[-1], Stack[-2])
0x52a: Pop(1)
0x52b: Push((int) 0)
0x52c: Stack[-4] = Stack[-2] != Stack[-1]; Pop(1);
0x52d: Return(); Pop(2)

0x52e: PushEmpty(bool, bool)
0x52f: @ IsOverrideActive(Stack[-1])
0x530: Pop(0)
0x531: Stack[-3] = !Stack[-1]; Pop(0);
0x532: Return(); Pop(2)

0x533: PushEmpty(object, object)
0x534: Push("warehouse_rubin")
0x535: @ GetSceneByName(Stack[-2], Stack[-1])
0x536: Pop(1)
0x537: Push("rubin")
0x538: @ Trigger(Stack[-2], Stack[-1])
0x539: Pop(1)
0x53a: PushEmpty(string, bool)
0x53b: Stack[-2] = "warehouse_rubin@door1"
0x53c: Stack[-1] = (bool) 0
0x53d: Call2 0x288

0x53e: Pop(2)
0x53f: Return(); Pop(2)

0x540: Stack[-1] = 0
