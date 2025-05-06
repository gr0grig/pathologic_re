GlobalVarCount = 0

Strings:
	quest_k12_01
	init_hidden_room
	add
	rescue
	rescue_oneday
	rescue_locked
	kill
	disease
	update
	cleanup
	childs_letter
	theater_letter
	get
	size
	Volonteer : 
	Diseased volonteer : 
	Today volonteers: 
	, diseased: 
	Volonteers Cleanup...
	Remove
	Volonteers Init...
	Volonteers count: 
	vol_
	pt_volonteer_
	pers_birdmask
	vbirdmask_
	.xml
	set
	outdoor
	GetLocator
	Locator 
	 doesn't exist
	AddStationaryActor
	alexandr
	andrei
	anna
	bigvlad
	eva
	georg
	grif
	han
	julia
	kapella
	katerina
	klara
	laska
	maria
	mark
	mat
	mishka
	mladvlad
	notkin
	ospina
	petr
	rubin
	spi4ka
	starshina
	viktor
	wasted_woman
	wasted_male
	alkash
	boy
	girl
	littleboy
	littlegirl
	butcher
	dohodyaga
	unosha
	vaxxabit
	vaxxabitka
	worker
	whitemask
	patrol
	danko
	alkash_d
	boy_d
	butcher_d
	dohodyaga_d
	girl_d
	littleboy_d
	littlegirl_d
	unosha2
	unosha_d
	unosha2_d
	vaxxabit_d
	vaxxabitka_d
	wasted_male_d
	wasted_woman_d
	worker2
	worker_d
	worker2_d
	burah
	gorbun_daughter
	gorbun
	albinos
	aglaja
	nude
	block
	officer
	doberman
	grabitel
	gatherer_wife
	rat_prophet
	morlok
	soldier
	britva
	kabaktchik
	sanitar
	salesman
	ayyan
	petrbirdmask
	mogila
	klikusha
	cot_alexandr@door1
	shouse1_kabak@door1
	cot_anna@door1
	cot_bigvlad@door1
	cot_georg@door1
	cot_maria@door1
	cot_julia@door1
	cot_kapella@door1
	cot_katerina@door1
	cot_lara@door1
	vagon_mishka@door1
	house_vlad@door1
	warehouse_notkin@door1
	dt_house_1_04@door1
	house_petr@door1
	house_petr@door2
	house_spi4ka@door1
	house_spi4ka@door2
	cot_viktor@door1
	storojka@door1
	termitnik_mat@door1
	termitnik
	warehouse_grif@door1
	warehouse_rubin@door1
	cot_eva@door1
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	GetCategory
	Door 
	 not found
	dlocked
	SetProperty

Import:
	CreateIntVector (1 args)
	Hold (0 args)
	Trace (1 args)
	irand (2 args)
	CreateObjectVector (1 args)
	CreateStringVector (1 args)
	SetVariable (2 args)
	GetVariable (2 args)
	GetMainOutdoorScene (1 args)
	GetSceneByName (2 args)
	FindActor (2 args)
	Trigger (2 args)
	GetGameTime (1 args)
	_strlwr (1 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)
	AddMessage (4 args)

RunOp = 0x56
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object, object, object, object, object, object, int, bool, bool, bool, bool, bool) Params = 0
		EVENT_26 Op = 0xca Vars = (string, string)


0x0: PushEmpty()
0x1: PushEmpty(int, float)
0x2: Stack[-1] = Stack[-3]
0x3: Call2 0xa2e

0x4: Pop(2)
0x5: Return(); Pop(0)

0x6: PushEmpty()
0x7: PushEmpty(int, float)
0x8: Stack[-1] = Stack[-3]
0x9: Call2 0xa25

0xa: Pop(2)
0xb: PushEmpty(bool, string, string)
0xc: Stack[-2] = "quest_k12_01"
0xd: Stack[-1] = "init_hidden_room"
0xe: Call2 0x454

0xf: Pop(3)
0x10: Return(); Pop(0)

0x11: Return(); Pop(0)

0x12: PushEmpty()
0x13: Call2 0xa44

0x14: Pop(0)
0x15: Return(); Pop(0)

0x16: PushEmpty()
0x17: Call2 0xa37

0x18: Pop(0)
0x19: Return(); Pop(0)

0x1a: PushEmpty()
0x1b: PushEmpty(bool, int)
0x1c: Stack[-1] = Stack[-3]
0x1d: Call2 0x818

0x1e: Stack[-4] = Stack[-2]
0x1f: Pop(2)
0x20: Return(); Pop(0)

0x21: PushEmpty(object, object, int, object, object, int)
0x22: @ CreateIntVector(Stack[-3])
0x23: Pop(0)
0x24: PushEmpty(object, bool, int)
0x25: Stack[-3] = Stack[-6]
0x26: Stack[-2] = (bool) 1
0x27: Stack[-1] = (int) 2
0x28: Call2 0x848

0x29: Pop(3)
0x2a: @ CreateIntVector(Stack[-2])
0x2b: Pop(0)
0x2c: PushEmpty(object, bool, int)
0x2d: Stack[-3] = Stack[-5]
0x2e: Stack[-2] = (bool) 1
0x2f: Stack[-1] = (int) 2
0x30: Call2 0x7d6

0x31: Pop(3)
0x32: PushEmpty(object, bool, int)
0x33: Stack[-3] = Stack[-5]
0x34: Stack[-2] = (bool) 1
0x35: Stack[-1] = (int) 2
0x36: Call2 0x7f7

0x37: Pop(3)
0x38: Stack[-1] = (int) 0
0x39: Push((int) 12)
0x3a: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x3b: IF (Stack[-1] == 0) GOTO 0x43; Pop(1)

0x3c: @@ add(Stack[-3])
0x3d: Pop(0)
0x3e: @@ add(Stack[-2])
0x3f: Pop(0)
0x40: Push((int) 1)
0x41: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x42: GOTO 0x39

0x43: Return(); Pop(6)

0x44: Stack[-2] = 0
0x45: Stack[-3] = 0
0x46: PushEmpty()
0x47: Push((int) 11)
0x48: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x49: IF (Stack[-1] == 0) GOTO 0x4c; Pop(1)

0x4a: Stack[-2] = (int) 0
0x4b: Return(); Pop(0)

0x4c: Stack[-2] = (int) 1
0x4d: Return(); Pop(0)

0x4e: PushEmpty()
0x4f: Push((int) 5)
0x50: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x51: IF (Stack[-1] == 0) GOTO 0x54; Pop(1)

0x52: Stack[-2] = (int) 0
0x53: Return(); Pop(0)

0x54: Stack[-2] = (int) 1
0x55: Return(); Pop(0)

0x56: PushEmpty()
0x57: Call2 0x28e

0x58: Pop(0)
0x59: Stack[7 + Tasks[-1].StackPointer] = (bool)0
0x5a: Stack[8 + Tasks[-1].StackPointer] = (bool)0
0x5b: @ Hold()
0x5c: Pop(0)
0x5d: GOTO 0x5b

0x5e: Return(); Pop(0)

0x5f: PushEmpty(bool)
0x60: Stack[-1] = (bool) 0
0x61: PushEmpty(bool)
0x62: Stack[-1] = (bool) 0
0x63: PushEmpty(bool)
0x64: Stack[-1] = (bool) 0
0x65: Pop(0); Push((bool) Stack[8 + Tasks[-1].StackPointer] == 0)
0x66: IF (Stack[-1] == 0) GOTO 0x6d; Pop(1)

0x67: PushEmpty(bool, int)
0x68: Stack[-1] = (int) 12
0x69: Call2 0x476

0x6a: Pop(1)
0x6b: IF (Stack[-1] == 0) GOTO 0x6d; Pop(1)

0x6c: Stack[-1] = (bool) 1
0x6d: IF (Stack[-1] == 0) GOTO 0x73; Pop(1)

0x6e: PushEmpty(bool)
0x6f: Call2 0xb05

0x70: Pop(0)
0x71: IF (Stack[-1] == 0) GOTO 0x73; Pop(1)

0x72: Stack[-1] = (bool) 1
0x73: IF (Stack[-1] == 0) GOTO 0x7b; Pop(1)

0x74: PushEmpty(int)
0x75: Call2 0x46e

0x76: Pop(0)
0x77: Push((int) 8)
0x78: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x79: IF (Stack[-1] == 0) GOTO 0x7b; Pop(1)

0x7a: Stack[-1] = (bool) 1
0x7b: IF (Stack[-1] == 0) GOTO 0x84; Pop(1)

0x7c: PushEmpty(float)
0x7d: PushEmpty(float)
0x7e: Call2 0x460

0x7f: Stack[-2] = Stack[-1]
0x80: Pop(1)
0x81: Call2 0x6

0x82: Pop(1)
0x83: Stack[8 + Tasks[-1].StackPointer] = (bool)1
0x84: PushEmpty(bool)
0x85: Stack[-1] = (bool) 0
0x86: PushEmpty(bool)
0x87: Stack[-1] = (bool) 0
0x88: Pop(0); Push((bool) Stack[9 + Tasks[-1].StackPointer] == 0)
0x89: IF (Stack[-1] == 0) GOTO 0x90; Pop(1)

0x8a: PushEmpty(bool, int)
0x8b: Stack[-1] = (int) 12
0x8c: Call2 0x476

0x8d: Pop(1)
0x8e: IF (Stack[-1] == 0) GOTO 0x90; Pop(1)

0x8f: Stack[-1] = (bool) 1
0x90: IF (Stack[-1] == 0) GOTO 0x96; Pop(1)

0x91: PushEmpty(bool)
0x92: Call2 0xab9

0x93: Pop(0)
0x94: IF (Stack[-1] == 0) GOTO 0x96; Pop(1)

0x95: Stack[-1] = (bool) 1
0x96: IF (Stack[-1] == 0) GOTO 0x9b; Pop(1)

0x97: Stack[9 + Tasks[-1].StackPointer] = (bool)1
0x98: PushEmpty()
0x99: Call2 0x12

0x9a: Pop(0)
0x9b: PushEmpty(bool)
0x9c: Stack[-1] = (bool) 0
0x9d: PushEmpty(bool)
0x9e: Stack[-1] = (bool) 0
0x9f: Pop(0); Push((bool) Stack[10 + Tasks[-1].StackPointer] == 0)
0xa0: IF (Stack[-1] == 0) GOTO 0xa7; Pop(1)

0xa1: PushEmpty(bool, int)
0xa2: Stack[-1] = (int) 12
0xa3: Call2 0x476

0xa4: Pop(1)
0xa5: IF (Stack[-1] == 0) GOTO 0xa7; Pop(1)

0xa6: Stack[-1] = (bool) 1
0xa7: IF (Stack[-1] == 0) GOTO 0xad; Pop(1)

0xa8: PushEmpty(bool)
0xa9: Call2 0xa93

0xaa: Pop(0)
0xab: IF (Stack[-1] == 0) GOTO 0xad; Pop(1)

0xac: Stack[-1] = (bool) 1
0xad: IF (Stack[-1] == 0) GOTO 0xb2; Pop(1)

0xae: Stack[10 + Tasks[-1].StackPointer] = (bool)1
0xaf: PushEmpty()
0xb0: Call2 0x16

0xb1: Pop(0)
0xb2: PushEmpty(bool)
0xb3: Stack[-1] = (bool) 0
0xb4: PushEmpty(bool)
0xb5: Stack[-1] = (bool) 0
0xb6: Pop(0); Push((bool) Stack[11 + Tasks[-1].StackPointer] == 0)
0xb7: IF (Stack[-1] == 0) GOTO 0xbe; Pop(1)

0xb8: PushEmpty(bool, int)
0xb9: Stack[-1] = (int) 12
0xba: Call2 0x476

0xbb: Pop(1)
0xbc: IF (Stack[-1] == 0) GOTO 0xbe; Pop(1)

0xbd: Stack[-1] = (bool) 1
0xbe: IF (Stack[-1] == 0) GOTO 0xc4; Pop(1)

0xbf: PushEmpty(bool)
0xc0: Call2 0xadf

0xc1: Pop(0)
0xc2: IF (Stack[-1] == 0) GOTO 0xc4; Pop(1)

0xc3: Stack[-1] = (bool) 1
0xc4: IF (Stack[-1] == 0) GOTO 0xc9; Pop(1)

0xc5: Stack[11 + Tasks[-1].StackPointer] = (bool)1
0xc6: PushEmpty()
0xc7: Call2 0x11

0xc8: Pop(0)
0xc9: Return(); Pop(0)

0xca: PushEmpty(int, int)
0xcb: @ Trace(Stack[-4])
0xcc: Pop(0)
0xcd: Push("rescue")
0xce: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0xcf: IF (Stack[-1] == 0) GOTO 0xe0; Pop(1)

0xd0: PushEmpty(int)
0xd1: PushEmpty(int, int)
0xd2: PushEmpty(int, string)
0xd3: Stack[-1] = Stack[-8]
0xd4: Call2 0x47c

0xd5: Stack[-3] = Stack[-2]
0xd6: Pop(2)
0xd7: Call2 0x2d7

0xd8: Stack[-3] = Stack[-2]
0xd9: Pop(2)
0xda: Call2 0x3b0

0xdb: Pop(1)
0xdc: PushEmpty()
0xdd: Call2 0x5f

0xde: Pop(0)
0xdf: GOTO 0x15f

0xe0: Push("rescue_oneday")
0xe1: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0xe2: IF (Stack[-1] == 0) GOTO 0xf0; Pop(1)

0xe3: PushEmpty(int)
0xe4: PushEmpty(int, int)
0xe5: PushEmpty(int, string)
0xe6: Stack[-1] = Stack[-8]
0xe7: Call2 0x47c

0xe8: Stack[-3] = Stack[-2]
0xe9: Pop(2)
0xea: Call2 0x2d7

0xeb: Stack[-3] = Stack[-2]
0xec: Pop(2)
0xed: Call2 0x36a

0xee: Pop(1)
0xef: GOTO 0x15f

0xf0: Push("rescue_locked")
0xf1: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0xf2: IF (Stack[-1] == 0) GOTO 0x116; Pop(1)

0xf3: Stack[-1] = (int) 0
0xf4: PushEmpty(int)
0xf5: Call2 0x2d2

0xf6: Pop(0)
0xf7: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xf8: IF (Stack[-1] == 0) GOTO 0x112; Pop(1)

0xf9: PushEmpty(bool)
0xfa: Stack[-1] = (bool) 0
0xfb: PushEmpty(bool, int)
0xfc: Stack[-1] = Stack[-4]
0xfd: Call2 0x300

0xfe: Pop(1)
0xff: IF (Stack[-1] == 0) GOTO 0x10a; Pop(1)

0x100: PushEmpty(bool, int)
0x101: PushEmpty(int, int)
0x102: Stack[-1] = Stack[-6]
0x103: Call2 0x2e9

0x104: Stack[-3] = Stack[-2]
0x105: Pop(2)
0x106: Call2 0x1a

0x107: Pop(1)
0x108: IF (Stack[-1] == 0) GOTO 0x10a; Pop(1)

0x109: Stack[-1] = (bool) 1
0x10a: IF (Stack[-1] == 0) GOTO 0x10f; Pop(1)

0x10b: PushEmpty(int)
0x10c: Stack[-1] = Stack[-2]
0x10d: Call2 0x3b0

0x10e: Pop(1)
0x10f: Push((int) 1)
0x110: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x111: GOTO 0xf4

0x112: PushEmpty()
0x113: Call2 0x5f

0x114: Pop(0)
0x115: GOTO 0x15f

0x116: Push("kill")
0x117: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x118: IF (Stack[-1] == 0) GOTO 0x126; Pop(1)

0x119: PushEmpty(int)
0x11a: PushEmpty(int, int)
0x11b: PushEmpty(int, string)
0x11c: Stack[-1] = Stack[-8]
0x11d: Call2 0x47c

0x11e: Stack[-3] = Stack[-2]
0x11f: Pop(2)
0x120: Call2 0x2d7

0x121: Stack[-3] = Stack[-2]
0x122: Pop(2)
0x123: Call2 0x3e3

0x124: Pop(1)
0x125: GOTO 0x15f

0x126: Push("disease")
0x127: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x128: IF (Stack[-1] == 0) GOTO 0x136; Pop(1)

0x129: PushEmpty(int)
0x12a: PushEmpty(int, int)
0x12b: PushEmpty(int, string)
0x12c: Stack[-1] = Stack[-8]
0x12d: Call2 0x47c

0x12e: Stack[-3] = Stack[-2]
0x12f: Pop(2)
0x130: Call2 0x2d7

0x131: Stack[-3] = Stack[-2]
0x132: Pop(2)
0x133: Call2 0x324

0x134: Pop(1)
0x135: GOTO 0x15f

0x136: Push("update")
0x137: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x138: IF (Stack[-1] == 0) GOTO 0x13d; Pop(1)

0x139: PushEmpty()
0x13a: Call2 0x1aa

0x13b: Pop(0)
0x13c: GOTO 0x15f

0x13d: Push("cleanup")
0x13e: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x13f: IF (Stack[-1] == 0) GOTO 0x144; Pop(1)

0x140: PushEmpty()
0x141: Call2 0x278

0x142: Pop(0)
0x143: GOTO 0x15f

0x144: Push("childs_letter")
0x145: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x146: IF (Stack[-1] == 0) GOTO 0x152; Pop(1)

0x147: Pop(0); Push((bool) Stack[8 + Tasks[-1].StackPointer] == 0)
0x148: IF (Stack[-1] == 0) GOTO 0x151; Pop(1)

0x149: PushEmpty(float)
0x14a: PushEmpty(float)
0x14b: Call2 0x460

0x14c: Stack[-2] = Stack[-1]
0x14d: Pop(1)
0x14e: Call2 0x6

0x14f: Pop(1)
0x150: Stack[8 + Tasks[-1].StackPointer] = (bool)1
0x151: GOTO 0x15f

0x152: Push("theater_letter")
0x153: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x154: IF (Stack[-1] == 0) GOTO 0x15f; Pop(1)

0x155: Pop(0); Push((bool) Stack[7 + Tasks[-1].StackPointer] == 0)
0x156: IF (Stack[-1] == 0) GOTO 0x15f; Pop(1)

0x157: PushEmpty(float)
0x158: PushEmpty(float)
0x159: Call2 0x460

0x15a: Stack[-2] = Stack[-1]
0x15b: Pop(1)
0x15c: Call2 0x0

0x15d: Pop(1)
0x15e: Stack[7 + Tasks[-1].StackPointer] = (bool)1
0x15f: Return(); Pop(2)

0x160: PushEmpty(int, int, int, int)
0x161: Stack[-2] = (int) 0
0x162: Pop(0); Push((bool) Stack[-2] < Stack[-7])
0x163: IF (Stack[-1] == 0) GOTO 0x16c; Pop(1)

0x164: PushEmpty(int, int, bool)
0x165: Stack[-2] = Stack[-8]
0x166: Stack[-1] = (bool) 1
0x167: Call2 0x178

0x168: Pop(3)
0x169: Push((int) 1)
0x16a: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x16b: GOTO 0x162

0x16c: Stack[-1] = (int) 0
0x16d: Pop(0); Push((bool) Stack[-1] < Stack[-6])
0x16e: IF (Stack[-1] == 0) GOTO 0x177; Pop(1)

0x16f: PushEmpty(int, int, bool)
0x170: Stack[-2] = Stack[-8]
0x171: Stack[-1] = (bool) 0
0x172: Call2 0x178

0x173: Pop(3)
0x174: Push((int) 1)
0x175: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x176: GOTO 0x16d

0x177: Return(); Pop(4)

0x178: PushEmpty(object, int, int, int, int, int, int, object, int, int, int, int, int, int)
0x179: Push(Stack[-15])
0x17a: IF (Stack[-1] == 0) GOTO 0x17e; Pop(1)

0x17b: @@ get(Stack[-7], Stack[-16])
0x17c: Pop(0)
0x17d: GOTO 0x180

0x17e: @@ get(Stack[-7], Stack[-16])
0x17f: Pop(0)
0x180: @@ size(Stack[-6])
0x181: Pop(0)
0x182: Push((int) 0)
0x183: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x184: IF (Stack[-1] == 0) GOTO 0x187; Pop(1)

0x185: Stack[-17] = (int) -1
0x186: Return(); Pop(14)

0x187: Stack[-5] = (int) 0
0x188: Push((int) 1)
0x189: Pop(1); Push((bool) Stack[-7] > Stack[-1])
0x18a: IF (Stack[-1] == 0) GOTO 0x18d; Pop(1)

0x18b: @ irand(Stack[-5], Stack[-6])
0x18c: Pop(0)
0x18d: Stack[-4] = (int) 0
0x18e: Pop(0); Push((bool) Stack[-4] < Stack[-6])
0x18f: IF (Stack[-1] == 0) GOTO 0x1a7; Pop(1)

0x190: Pop(0); Push(Stack[-4] + Stack[-5]);
0x191: Stack[-4] = Stack[-1] % Stack[-7]; Pop(1);
0x192: @@ get(Stack[-2], Stack[-3])
0x193: Pop(0)
0x194: PushEmpty(int, int)
0x195: Stack[-1] = Stack[-4]
0x196: Call2 0x2d7

0x197: Stack[-3] = Stack[-2]
0x198: Pop(2)
0x199: PushEmpty(bool, int)
0x19a: Stack[-1] = Stack[-3]
0x19b: Call2 0x30c

0x19c: Pop(1)
0x19d: IF (Stack[-1] == 0) GOTO 0x1a4; Pop(1)

0x19e: PushEmpty(int)
0x19f: Stack[-1] = Stack[-2]
0x1a0: Call2 0x430

0x1a1: Pop(1)
0x1a2: Stack[-17] = Stack[-1]
0x1a3: Return(); Pop(14)

0x1a4: Push((int) 1)
0x1a5: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x1a6: GOTO 0x18e

0x1a7: Stack[-17] = (int) -1
0x1a8: Return(); Pop(14)

0x1a9: Stack[-7] = 0
0x1aa: PushEmpty(int, int, object, int, int, string, int, int, int, int, int, int, int, int, object, int, int, string, int, int, int, int, int, int)
0x1ab: Push((int) 1)
0x1ac: @ Trace(Stack[-1])
0x1ad: Pop(1)
0x1ae: Stack[-12] = (int) 0
0x1af: PushEmpty(int)
0x1b0: Call2 0x2d2

0x1b1: Pop(0)
0x1b2: Pop(1); Push((bool) Stack[-13] < Stack[-1])
0x1b3: IF (Stack[-1] == 0) GOTO 0x209; Pop(1)

0x1b4: Push((int) 2)
0x1b5: @ Trace(Stack[-1])
0x1b6: Pop(1)
0x1b7: PushEmpty(int, int)
0x1b8: Stack[-1] = Stack[-14]
0x1b9: Call2 0x2e9

0x1ba: Stack[-13] = Stack[-2]
0x1bb: Pop(2)
0x1bc: Push((int) 3)
0x1bd: @ Trace(Stack[-1])
0x1be: Pop(1)
0x1bf: PushEmpty(bool, int)
0x1c0: Stack[-1] = Stack[-14]
0x1c1: Call2 0x300

0x1c2: Pop(1)
0x1c3: IF (Stack[-1] == 0) GOTO 0x1cb; Pop(1)

0x1c4: Push((int) 4)
0x1c5: @ Trace(Stack[-1])
0x1c6: Pop(1)
0x1c7: PushEmpty(int)
0x1c8: Stack[-1] = Stack[-13]
0x1c9: Call2 0x324

0x1ca: Pop(1)
0x1cb: Push((int) 5)
0x1cc: @ Trace(Stack[-1])
0x1cd: Pop(1)
0x1ce: PushEmpty(bool, int)
0x1cf: Stack[-1] = Stack[-14]
0x1d0: Call2 0x2f4

0x1d1: Pop(1)
0x1d2: IF (Stack[-1] == 0) GOTO 0x1da; Pop(1)

0x1d3: Push((int) 6)
0x1d4: @ Trace(Stack[-1])
0x1d5: Pop(1)
0x1d6: PushEmpty(int)
0x1d7: Stack[-1] = Stack[-13]
0x1d8: Call2 0x38c

0x1d9: Pop(1)
0x1da: Push((int) 7)
0x1db: @ Trace(Stack[-1])
0x1dc: Pop(1)
0x1dd: PushEmpty(bool, int)
0x1de: Stack[-1] = Stack[-14]
0x1df: Call2 0x318

0x1e0: Pop(1)
0x1e1: IF (Stack[-1] == 0) GOTO 0x203; Pop(1)

0x1e2: Push((int) 8)
0x1e3: @ Trace(Stack[-1])
0x1e4: Pop(1)
0x1e5: @@ get(Stack[-10], Stack[-12])
0x1e6: Pop(0)
0x1e7: Push((int) 9)
0x1e8: @ Trace(Stack[-1])
0x1e9: Pop(1)
0x1ea: @@ size(Stack[-9])
0x1eb: Pop(0)
0x1ec: Push((int) 10)
0x1ed: @ Trace(Stack[-1])
0x1ee: Pop(1)
0x1ef: Stack[-8] = (int) 0
0x1f0: Pop(0); Push((bool) Stack[-8] < Stack[-9])
0x1f1: IF (Stack[-1] == 0) GOTO 0x1ff; Pop(1)

0x1f2: Push((int) 11)
0x1f3: @ Trace(Stack[-1])
0x1f4: Pop(1)
0x1f5: @@ get(Stack[-7], Stack[-8])
0x1f6: Pop(0)
0x1f7: PushEmpty(string, int)
0x1f8: Stack[-2] = Stack[-9]
0x1f9: Stack[-1] = (int) 1
0x1fa: Call2 0xa82

0x1fb: Pop(2)
0x1fc: Push((int) 1)
0x1fd: Stack[-9] = Stack[-9] + Stack[-1]; Pop(1);
0x1fe: GOTO 0x1f0

0x1ff: Push((int) 12)
0x200: @ Trace(Stack[-1])
0x201: Pop(1)
0x202: Stack[-10] = 0
0x203: Push((int) 13)
0x204: @ Trace(Stack[-1])
0x205: Pop(1)
0x206: Push((int) 1)
0x207: Stack[-13] = Stack[-13] + Stack[-1]; Pop(1);
0x208: GOTO 0x1af

0x209: Push((int) 14)
0x20a: @ Trace(Stack[-1])
0x20b: Pop(1)
0x20c: Push((int) 1)
0x20d: Stack[6 + Tasks[-1].StackPointer] = Stack[6 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x20e: PushEmpty(int, int, int)
0x20f: PushEmpty(int, int)
0x210: Stack[-1] = Stack[6 + Tasks[-1].StackPointer]
0x211: Call2 0x46

0x212: Stack[-5] = Stack[-2]
0x213: Pop(2)
0x214: PushEmpty(int, int)
0x215: Stack[-1] = Stack[6 + Tasks[-1].StackPointer]
0x216: Call2 0x4e

0x217: Stack[-4] = Stack[-2]
0x218: Pop(2)
0x219: Stack[-1] = Stack[6 + Tasks[-1].StackPointer]
0x21a: Call2 0x160

0x21b: Pop(3)
0x21c: Push((int) 15)
0x21d: @ Trace(Stack[-1])
0x21e: Pop(1)
0x21f: Stack[-6] = (int) 0
0x220: Stack[-5] = (int) 0
0x221: PushEmpty(int)
0x222: Call2 0x2d2

0x223: Pop(0)
0x224: Pop(1); Push((bool) Stack[-6] < Stack[-1])
0x225: IF (Stack[-1] == 0) GOTO 0x246; Pop(1)

0x226: Push((int) 16)
0x227: @ Trace(Stack[-1])
0x228: Pop(1)
0x229: PushEmpty(int, int)
0x22a: Stack[-1] = Stack[-7]
0x22b: Call2 0x2e9

0x22c: Stack[-6] = Stack[-2]
0x22d: Pop(2)
0x22e: Push((int) 17)
0x22f: @ Trace(Stack[-1])
0x230: Pop(1)
0x231: PushEmpty(bool, int)
0x232: Stack[-1] = Stack[-7]
0x233: Call2 0x300

0x234: Pop(1)
0x235: IF (Stack[-1] == 0) GOTO 0x243; Pop(1)

0x236: Push((int) 18)
0x237: @ Trace(Stack[-1])
0x238: Pop(1)
0x239: Push("Volonteer : ")
0x23a: PushEmpty(string, int)
0x23b: Stack[-1] = Stack[-7]
0x23c: Call2 0x62a

0x23d: Pop(1)
0x23e: Pop(2); Push(Stack[-2] + Stack[-1]);
0x23f: @ Trace(Stack[-1])
0x240: Pop(1)
0x241: Push((int) 1)
0x242: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x243: Push((int) 1)
0x244: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x245: GOTO 0x221

0x246: Push((int) 19)
0x247: @ Trace(Stack[-1])
0x248: Pop(1)
0x249: Stack[-3] = (int) 0
0x24a: Stack[-2] = (int) 0
0x24b: PushEmpty(int)
0x24c: Call2 0x2d2

0x24d: Pop(0)
0x24e: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x24f: IF (Stack[-1] == 0) GOTO 0x26d; Pop(1)

0x250: Push((int) 20)
0x251: @ Trace(Stack[-1])
0x252: Pop(1)
0x253: PushEmpty(int, int)
0x254: Stack[-1] = Stack[-4]
0x255: Call2 0x2e9

0x256: Stack[-3] = Stack[-2]
0x257: Pop(2)
0x258: PushEmpty(bool, int)
0x259: Stack[-1] = Stack[-4]
0x25a: Call2 0x318

0x25b: Pop(1)
0x25c: IF (Stack[-1] == 0) GOTO 0x26a; Pop(1)

0x25d: Push((int) 21)
0x25e: @ Trace(Stack[-1])
0x25f: Pop(1)
0x260: Push((int) 1)
0x261: Stack[-4] = Stack[-4] + Stack[-1]; Pop(1);
0x262: Push("Diseased volonteer : ")
0x263: PushEmpty(string, int)
0x264: Stack[-1] = Stack[-4]
0x265: Call2 0x62a

0x266: Pop(1)
0x267: Pop(2); Push(Stack[-2] + Stack[-1]);
0x268: @ Trace(Stack[-1])
0x269: Pop(1)
0x26a: Push((int) 1)
0x26b: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x26c: GOTO 0x24b

0x26d: Push((int) 22)
0x26e: @ Trace(Stack[-1])
0x26f: Pop(1)
0x270: Push("Today volonteers: ")
0x271: Pop(1); Push(Stack[-1] + Stack[-7]);
0x272: Push(", diseased: ")
0x273: Pop(2); Push(Stack[-2] + Stack[-1]);
0x274: Pop(1); Push(Stack[-1] + Stack[-4]);
0x275: @ Trace(Stack[-1])
0x276: Pop(1)
0x277: Return(); Pop(24)

0x278: PushEmpty(int, object, int, object)
0x279: EventDisable(26)
0x27a: Push("Volonteers Cleanup...")
0x27b: @ Trace(Stack[-1])
0x27c: Pop(1)
0x27d: Stack[-2] = (int) 0
0x27e: PushEmpty(int)
0x27f: Call2 0x2d2

0x280: Pop(0)
0x281: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x282: IF (Stack[-1] == 0) GOTO 0x28d; Pop(1)

0x283: @@ get(Stack[-1], Stack[-2])
0x284: Pop(0)
0x285: Pop(0); Push(( Stack[-1] != 0 )
0x286: IF (Stack[-1] == 0) GOTO 0x289; Pop(1)

0x287: @@ Remove()
0x288: Pop(0)
0x289: Stack[-1] = 0
0x28a: Push((int) 1)
0x28b: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x28c: GOTO 0x27e

0x28d: Return(); Pop(4)

0x28e: PushEmpty(object, object, object, object, object, object, int, object, object, object, object, object, object, object, int, object)
0x28f: Push("Volonteers Init...")
0x290: @ Trace(Stack[-1])
0x291: Pop(1)
0x292: @ CreateIntVector(Stack[-8])
0x293: Pop(0)
0x294: @ CreateObjectVector(Stack[-7])
0x295: Pop(0)
0x296: @ CreateStringVector(Stack[-6])
0x297: Pop(0)
0x298: PushEmpty(object, object, object)
0x299: Stack[-3] = Stack[-11]
0x29a: Stack[-2] = Stack[-10]
0x29b: Stack[-1] = Stack[-9]
0x29c: Call2 0x868

0x29d: Pop(3)
0x29e: Stack[0 + Tasks[-1].StackPointer] = Stack[-8]
0x29f: Stack[4 + Tasks[-1].StackPointer] = Stack[-7]
0x2a0: Stack[5 + Tasks[-1].StackPointer] = Stack[-6]
0x2a1: @ CreateObjectVector(Stack[-5])
0x2a2: Pop(0)
0x2a3: @ CreateObjectVector(Stack[-4])
0x2a4: Pop(0)
0x2a5: PushEmpty(object, object)
0x2a6: Stack[-2] = Stack[-7]
0x2a7: Stack[-1] = Stack[-6]
0x2a8: Call2 0x21

0x2a9: Pop(2)
0x2aa: Stack[1 + Tasks[-1].StackPointer] = Stack[-5]
0x2ab: Stack[2 + Tasks[-1].StackPointer] = Stack[-4]
0x2ac: @ CreateObjectVector(Stack[-3])
0x2ad: Pop(0)
0x2ae: Stack[3 + Tasks[-1].StackPointer] = Stack[-3]
0x2af: Stack[-2] = (int) 0
0x2b0: PushEmpty(int)
0x2b1: Call2 0x2d2

0x2b2: Pop(0)
0x2b3: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x2b4: IF (Stack[-1] == 0) GOTO 0x2c3; Pop(1)

0x2b5: PushEmpty(string, int)
0x2b6: Stack[-1] = Stack[-4]
0x2b7: Call2 0x2ee

0x2b8: Pop(1)
0x2b9: Push((int) 0)
0x2ba: @ SetVariable(Stack[-2], Stack[-1])
0x2bb: Pop(2)
0x2bc: Stack[-1] = 0
0x2bd: @@ add(Stack[-1])
0x2be: Pop(0)
0x2bf: Stack[-1] = 0
0x2c0: Push((int) 1)
0x2c1: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x2c2: GOTO 0x2b0

0x2c3: Stack[6 + Tasks[-1].StackPointer] = (int)0
0x2c4: Push("Volonteers count: ")
0x2c5: PushEmpty(int)
0x2c6: Call2 0x2d2

0x2c7: Pop(0)
0x2c8: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2c9: @ Trace(Stack[-1])
0x2ca: Pop(1)
0x2cb: Return(); Pop(16)

0x2cc: Stack[-3] = 0
0x2cd: Stack[-4] = 0
0x2ce: Stack[-5] = 0
0x2cf: Stack[-6] = 0
0x2d0: Stack[-7] = 0
0x2d1: Stack[-8] = 0
0x2d2: PushEmpty(int, int)
0x2d3: @@ size(Stack[-1])
0x2d4: Pop(0)
0x2d5: Stack[-3] = Stack[-1]
0x2d6: Return(); Pop(2)

0x2d7: PushEmpty(int, int, int, int)
0x2d8: Stack[-2] = (int) 0
0x2d9: PushEmpty(int)
0x2da: Call2 0x2d2

0x2db: Pop(0)
0x2dc: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x2dd: IF (Stack[-1] == 0) GOTO 0x2e7; Pop(1)

0x2de: @@ get(Stack[-1], Stack[-2])
0x2df: Pop(0)
0x2e0: Pop(0); Push((bool) Stack[-5] == Stack[-1])
0x2e1: IF (Stack[-1] == 0) GOTO 0x2e4; Pop(1)

0x2e2: Stack[-6] = Stack[-2]
0x2e3: Return(); Pop(4)

0x2e4: Push((int) 1)
0x2e5: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x2e6: GOTO 0x2d9

0x2e7: Stack[-6] = (int) -1
0x2e8: Return(); Pop(4)

0x2e9: PushEmpty(int, int)
0x2ea: @@ get(Stack[-1], Stack[-3])
0x2eb: Pop(0)
0x2ec: Stack[-4] = Stack[-1]
0x2ed: Return(); Pop(2)

0x2ee: PushEmpty(int, int)
0x2ef: @@ get(Stack[-1], Stack[-3])
0x2f0: Pop(0)
0x2f1: Push("vol_")
0x2f2: Stack[-5] = Stack[-1] + Stack[-2]; Pop(1);
0x2f3: Return(); Pop(2)

0x2f4: PushEmpty(int, int)
0x2f5: PushEmpty(string, int)
0x2f6: Stack[-1] = Stack[-5]
0x2f7: Call2 0x2ee

0x2f8: Pop(1)
0x2f9: @ GetVariable(Stack[-1], Stack[-2])
0x2fa: Pop(1)
0x2fb: Push((int) 32)
0x2fc: Pop(1); Push(Stack[-2] & Stack[-1]);
0x2fd: Push((int) 0)
0x2fe: Stack[-6] = Stack[-2] != Stack[-1]; Pop(2);
0x2ff: Return(); Pop(2)

0x300: PushEmpty(int, int)
0x301: PushEmpty(string, int)
0x302: Stack[-1] = Stack[-5]
0x303: Call2 0x2ee

0x304: Pop(1)
0x305: @ GetVariable(Stack[-1], Stack[-2])
0x306: Pop(1)
0x307: Push((int) 2)
0x308: Pop(1); Push(Stack[-2] & Stack[-1]);
0x309: Push((int) 0)
0x30a: Stack[-6] = Stack[-2] != Stack[-1]; Pop(2);
0x30b: Return(); Pop(2)

0x30c: PushEmpty(int, int)
0x30d: PushEmpty(string, int)
0x30e: Stack[-1] = Stack[-5]
0x30f: Call2 0x2ee

0x310: Pop(1)
0x311: @ GetVariable(Stack[-1], Stack[-2])
0x312: Pop(1)
0x313: Push((int) 1)
0x314: Pop(1); Push(Stack[-2] & Stack[-1]);
0x315: Push((int) 0)
0x316: Stack[-6] = Stack[-2] == Stack[-1]; Pop(2);
0x317: Return(); Pop(2)

0x318: PushEmpty(int, int)
0x319: PushEmpty(string, int)
0x31a: Stack[-1] = Stack[-5]
0x31b: Call2 0x2ee

0x31c: Pop(1)
0x31d: @ GetVariable(Stack[-1], Stack[-2])
0x31e: Pop(1)
0x31f: Push((int) 4)
0x320: Pop(1); Push(Stack[-2] & Stack[-1]);
0x321: Push((int) 0)
0x322: Stack[-6] = Stack[-2] != Stack[-1]; Pop(2);
0x323: Return(); Pop(2)

0x324: PushEmpty(int, object, object, string, object, int, int, string, int, object, object, string, object, int, int, string)
0x325: PushEmpty(string, int)
0x326: Stack[-1] = Stack[-19]
0x327: Call2 0x2ee

0x328: Pop(1)
0x329: @ GetVariable(Stack[-1], Stack[-9])
0x32a: Pop(1)
0x32b: PushEmpty(string, int)
0x32c: Stack[-1] = Stack[-19]
0x32d: Call2 0x2ee

0x32e: Pop(1)
0x32f: Push((int) 8)
0x330: Pop(1); Push(Stack[-10] & Stack[-1]);
0x331: Push((int) 5)
0x332: Pop(2); Push(Stack[-2] | Stack[-1]);
0x333: @ SetVariable(Stack[-2], Stack[-1])
0x334: Pop(2)
0x335: @@ get(Stack[-7], Stack[-17])
0x336: Pop(0)
0x337: Pop(0); Push((bool) Stack[-7] == 0)
0x338: IF (Stack[-1] == 0) GOTO 0x356; Pop(1)

0x339: PushEmpty(object, int)
0x33a: Stack[-1] = Stack[-19]
0x33b: Call2 0x420

0x33c: Stack[-8] = Stack[-2]
0x33d: Pop(2)
0x33e: PushEmpty(string, int)
0x33f: PushEmpty(int, int)
0x340: Stack[-1] = Stack[-21]
0x341: Call2 0x2e9

0x342: Stack[-3] = Stack[-2]
0x343: Pop(2)
0x344: Call2 0x62a

0x345: Stack[-7] = Stack[-2]
0x346: Pop(2)
0x347: PushEmpty(object, object, string, string, string)
0x348: Stack[-4] = Stack[-11]
0x349: Push("pt_volonteer_")
0x34a: Stack[-4] = Stack[-1] + Stack[-11]; Pop(1);
0x34b: Stack[-2] = "pers_birdmask"
0x34c: Push("vbirdmask_")
0x34d: Pop(1); Push(Stack[-1] + Stack[-11]);
0x34e: Push(".xml")
0x34f: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x350: Call2 0x442

0x351: Stack[-12] = Stack[-5]
0x352: Pop(5)
0x353: @@ set(Stack[-17], Stack[-7])
0x354: Pop(0)
0x355: Stack[-6] = 0
0x356: @@ get(Stack[-4], Stack[-17])
0x357: Pop(0)
0x358: @@ size(Stack[-3])
0x359: Pop(0)
0x35a: Stack[-2] = (int) 0
0x35b: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0x35c: IF (Stack[-1] == 0) GOTO 0x367; Pop(1)

0x35d: @@ get(Stack[-1], Stack[-2])
0x35e: Pop(0)
0x35f: PushEmpty(string, int)
0x360: Stack[-2] = Stack[-3]
0x361: Stack[-1] = (int) 1
0x362: Call2 0xa82

0x363: Pop(2)
0x364: Push((int) 1)
0x365: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x366: GOTO 0x35b

0x367: Return(); Pop(16)

0x368: Stack[-4] = 0
0x369: Stack[-7] = 0
0x36a: PushEmpty(int, object, int, int, string, int, object, int, int, string)
0x36b: PushEmpty(string, int)
0x36c: Stack[-1] = Stack[-13]
0x36d: Call2 0x2ee

0x36e: Pop(1)
0x36f: @ GetVariable(Stack[-1], Stack[-6])
0x370: Pop(1)
0x371: PushEmpty(string, int)
0x372: Stack[-1] = Stack[-13]
0x373: Call2 0x2ee

0x374: Pop(1)
0x375: Push((int) 32)
0x376: Pop(1); Push(Stack[-7] | Stack[-1]);
0x377: @ SetVariable(Stack[-2], Stack[-1])
0x378: Pop(2)
0x379: @@ get(Stack[-4], Stack[-11])
0x37a: Pop(0)
0x37b: @@ size(Stack[-3])
0x37c: Pop(0)
0x37d: Stack[-2] = (int) 0
0x37e: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0x37f: IF (Stack[-1] == 0) GOTO 0x38a; Pop(1)

0x380: @@ get(Stack[-1], Stack[-2])
0x381: Pop(0)
0x382: PushEmpty(string, int)
0x383: Stack[-2] = Stack[-3]
0x384: Stack[-1] = (int) 0
0x385: Call2 0xa82

0x386: Pop(2)
0x387: Push((int) 1)
0x388: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x389: GOTO 0x37e

0x38a: Return(); Pop(10)

0x38b: Stack[-4] = 0
0x38c: PushEmpty(int, object, int, int, string, int, object, int, int, string)
0x38d: PushEmpty(string, int)
0x38e: Stack[-1] = Stack[-13]
0x38f: Call2 0x2ee

0x390: Pop(1)
0x391: @ GetVariable(Stack[-1], Stack[-6])
0x392: Pop(1)
0x393: PushEmpty(string, int)
0x394: Stack[-1] = Stack[-13]
0x395: Call2 0x2ee

0x396: Pop(1)
0x397: Push((int) 32)
0x398: Pop(1); Push(Stack[-7] | Stack[-1]);
0x399: Push((int) 32)
0x39a: Pop(2); Push(Stack[-2] - Stack[-1]);
0x39b: @ SetVariable(Stack[-2], Stack[-1])
0x39c: Pop(2)
0x39d: @@ get(Stack[-4], Stack[-11])
0x39e: Pop(0)
0x39f: @@ size(Stack[-3])
0x3a0: Pop(0)
0x3a1: Stack[-2] = (int) 0
0x3a2: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0x3a3: IF (Stack[-1] == 0) GOTO 0x3ae; Pop(1)

0x3a4: @@ get(Stack[-1], Stack[-2])
0x3a5: Pop(0)
0x3a6: PushEmpty(string, int)
0x3a7: Stack[-2] = Stack[-3]
0x3a8: Stack[-1] = (int) 1
0x3a9: Call2 0xa82

0x3aa: Pop(2)
0x3ab: Push((int) 1)
0x3ac: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x3ad: GOTO 0x3a2

0x3ae: Return(); Pop(10)

0x3af: Stack[-4] = 0
0x3b0: PushEmpty(int, object, object, int, int, string, int, object, object, int, int, string)
0x3b1: PushEmpty(string, int)
0x3b2: Stack[-1] = Stack[-15]
0x3b3: Call2 0x2ee

0x3b4: Pop(1)
0x3b5: @ GetVariable(Stack[-1], Stack[-7])
0x3b6: Pop(1)
0x3b7: PushEmpty(string, int)
0x3b8: Stack[-1] = Stack[-15]
0x3b9: Call2 0x2ee

0x3ba: Pop(1)
0x3bb: Push((int) 4)
0x3bc: Pop(1); Push(Stack[-8] | Stack[-1]);
0x3bd: Push((int) 1)
0x3be: Pop(2); Push(Stack[-2] | Stack[-1]);
0x3bf: Push((int) 2)
0x3c0: Pop(2); Push(Stack[-2] | Stack[-1]);
0x3c1: Push((int) 4)
0x3c2: Pop(2); Push(Stack[-2] - Stack[-1]);
0x3c3: Push((int) 1)
0x3c4: Pop(2); Push(Stack[-2] - Stack[-1]);
0x3c5: Push((int) 2)
0x3c6: Pop(2); Push(Stack[-2] - Stack[-1]);
0x3c7: @ SetVariable(Stack[-2], Stack[-1])
0x3c8: Pop(2)
0x3c9: @@ get(Stack[-5], Stack[-13])
0x3ca: Pop(0)
0x3cb: Pop(0); Push(( Stack[-5] != 0 )
0x3cc: IF (Stack[-1] == 0) GOTO 0x3cf; Pop(1)

0x3cd: @@ Remove()
0x3ce: Pop(0)
0x3cf: @@ get(Stack[-4], Stack[-13])
0x3d0: Pop(0)
0x3d1: @@ size(Stack[-3])
0x3d2: Pop(0)
0x3d3: Stack[-2] = (int) 0
0x3d4: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0x3d5: IF (Stack[-1] == 0) GOTO 0x3e0; Pop(1)

0x3d6: @@ get(Stack[-1], Stack[-2])
0x3d7: Pop(0)
0x3d8: PushEmpty(string, int)
0x3d9: Stack[-2] = Stack[-3]
0x3da: Stack[-1] = (int) 0
0x3db: Call2 0xa82

0x3dc: Pop(2)
0x3dd: Push((int) 1)
0x3de: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x3df: GOTO 0x3d4

0x3e0: Return(); Pop(12)

0x3e1: Stack[-4] = 0
0x3e2: Stack[-5] = 0
0x3e3: PushEmpty(int, object, object, string, object, int, int, string, int, object, object, string, object, int, int, string)
0x3e4: PushEmpty(string, int)
0x3e5: Stack[-1] = Stack[-19]
0x3e6: Call2 0x2ee

0x3e7: Pop(1)
0x3e8: Push((int) 17)
0x3e9: @ SetVariable(Stack[-2], Stack[-1])
0x3ea: Pop(2)
0x3eb: @@ get(Stack[-7], Stack[-17])
0x3ec: Pop(0)
0x3ed: Pop(0); Push((bool) Stack[-7] == 0)
0x3ee: IF (Stack[-1] == 0) GOTO 0x40c; Pop(1)

0x3ef: PushEmpty(object, int)
0x3f0: Stack[-1] = Stack[-19]
0x3f1: Call2 0x420

0x3f2: Stack[-8] = Stack[-2]
0x3f3: Pop(2)
0x3f4: PushEmpty(string, int)
0x3f5: PushEmpty(int, int)
0x3f6: Stack[-1] = Stack[-21]
0x3f7: Call2 0x2e9

0x3f8: Stack[-3] = Stack[-2]
0x3f9: Pop(2)
0x3fa: Call2 0x62a

0x3fb: Stack[-7] = Stack[-2]
0x3fc: Pop(2)
0x3fd: PushEmpty(object, object, string, string, string)
0x3fe: Stack[-4] = Stack[-11]
0x3ff: Push("pt_volonteer_")
0x400: Stack[-4] = Stack[-1] + Stack[-11]; Pop(1);
0x401: Stack[-2] = "pers_birdmask"
0x402: Push("vbirdmask_")
0x403: Pop(1); Push(Stack[-1] + Stack[-11]);
0x404: Push(".xml")
0x405: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x406: Call2 0x442

0x407: Stack[-12] = Stack[-5]
0x408: Pop(5)
0x409: @@ set(Stack[-17], Stack[-7])
0x40a: Pop(0)
0x40b: Stack[-6] = 0
0x40c: @@ get(Stack[-4], Stack[-17])
0x40d: Pop(0)
0x40e: @@ size(Stack[-3])
0x40f: Pop(0)
0x410: Stack[-2] = (int) 0
0x411: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0x412: IF (Stack[-1] == 0) GOTO 0x41d; Pop(1)

0x413: @@ get(Stack[-1], Stack[-2])
0x414: Pop(0)
0x415: PushEmpty(string, int)
0x416: Stack[-2] = Stack[-3]
0x417: Stack[-1] = (int) 2
0x418: Call2 0xa82

0x419: Pop(2)
0x41a: Push((int) 1)
0x41b: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x41c: GOTO 0x411

0x41d: Return(); Pop(16)

0x41e: Stack[-4] = 0
0x41f: Stack[-7] = 0
0x420: PushEmpty(string, object, object, string, object, object)
0x421: @@ get(Stack[-3], Stack[-7])
0x422: Pop(0)
0x423: Push("outdoor")
0x424: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x425: IF (Stack[-1] == 0) GOTO 0x42b; Pop(1)

0x426: @ GetMainOutdoorScene(Stack[-2])
0x427: Pop(0)
0x428: Stack[-8] = Stack[-2]
0x429: Return(); Pop(6)

0x42a: Stack[-2] = 0
0x42b: @ GetSceneByName(Stack[-1], Stack[-3])
0x42c: Pop(0)
0x42d: Stack[-8] = Stack[-1]
0x42e: Return(); Pop(6)

0x42f: Stack[-1] = 0
0x430: PushEmpty(int, int)
0x431: PushEmpty(string, int)
0x432: Stack[-1] = Stack[-5]
0x433: Call2 0x2ee

0x434: Pop(1)
0x435: @ GetVariable(Stack[-1], Stack[-2])
0x436: Pop(1)
0x437: PushEmpty(string, int)
0x438: Stack[-1] = Stack[-5]
0x439: Call2 0x2ee

0x43a: Pop(1)
0x43b: Push((int) 8)
0x43c: Pop(1); Push(Stack[-3] & Stack[-1]);
0x43d: Push((int) 3)
0x43e: Pop(2); Push(Stack[-2] | Stack[-1]);
0x43f: @ SetVariable(Stack[-2], Stack[-1])
0x440: Pop(2)
0x441: Return(); Pop(2)

0x442: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x443: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0x444: Pop(0)
0x445: Pop(0); Push((bool) Stack[-4] == 0)
0x446: IF (Stack[-1] == 0) GOTO 0x44f; Pop(1)

0x447: Push("Locator ")
0x448: Pop(1); Push(Stack[-1] + Stack[-12]);
0x449: Push(" doesn't exist")
0x44a: Pop(2); Push(Stack[-2] + Stack[-1]);
0x44b: @ Trace(Stack[-1])
0x44c: Pop(1)
0x44d: Stack[-1] = 0
0x44e: GOTO 0x451

0x44f: @@ AddStationaryActor(Stack[-1], Stack[-3], Stack[-2], Stack[-10], Stack[-9])
0x450: Pop(0)
0x451: Stack[-13] = Stack[-1]
0x452: Return(); Pop(8)

0x453: Stack[-1] = 0
0x454: PushEmpty(object, object)
0x455: @ FindActor(Stack[-1], Stack[-4])
0x456: Pop(0)
0x457: Pop(0); Push((bool) Stack[-1] == 0)
0x458: IF (Stack[-1] == 0) GOTO 0x45b; Pop(1)

0x459: Stack[-5] = (bool) 0
0x45a: Return(); Pop(2)

0x45b: @ Trigger(Stack[-1], Stack[-3])
0x45c: Pop(0)
0x45d: Stack[-5] = (bool) 1
0x45e: Return(); Pop(2)

0x45f: Stack[-1] = 0
0x460: PushEmpty(float, float)
0x461: @ GetGameTime(Stack[-1])
0x462: Pop(0)
0x463: Stack[-3] = Stack[-1]
0x464: Return(); Pop(2)

0x465: PushEmpty(float, float)
0x466: @ GetGameTime(Stack[-1])
0x467: Pop(0)
0x468: Push((int) 1)
0x469: PushEmpty(int)
0x46a: Push((int) 24)
0x46b: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x46c: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x46d: Return(); Pop(2)

0x46e: PushEmpty(float, float)
0x46f: @ GetGameTime(Stack[-1])
0x470: Pop(0)
0x471: PushEmpty(int)
0x472: Stack[-1] = Stack[-2]
0x473: Push((int) 24)
0x474: Stack[-5] = Stack[-2] % Stack[-1]; Pop(2);
0x475: Return(); Pop(2)

0x476: PushEmpty()
0x477: PushEmpty(int)
0x478: Call2 0x465

0x479: Pop(0)
0x47a: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0x47b: Return(); Pop(0)

0x47c: PushEmpty()
0x47d: @ _strlwr(Stack[-1])
0x47e: Pop(0)
0x47f: Push("alexandr")
0x480: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x481: IF (Stack[-1] == 0) GOTO 0x484; Pop(1)

0x482: Stack[-2] = (int) 1
0x483: Return(); Pop(0)

0x484: Push("andrei")
0x485: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x486: IF (Stack[-1] == 0) GOTO 0x489; Pop(1)

0x487: Stack[-2] = (int) 2
0x488: Return(); Pop(0)

0x489: Push("anna")
0x48a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x48b: IF (Stack[-1] == 0) GOTO 0x48e; Pop(1)

0x48c: Stack[-2] = (int) 3
0x48d: Return(); Pop(0)

0x48e: Push("bigvlad")
0x48f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x490: IF (Stack[-1] == 0) GOTO 0x493; Pop(1)

0x491: Stack[-2] = (int) 4
0x492: Return(); Pop(0)

0x493: Push("eva")
0x494: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x495: IF (Stack[-1] == 0) GOTO 0x498; Pop(1)

0x496: Stack[-2] = (int) 5
0x497: Return(); Pop(0)

0x498: Push("georg")
0x499: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x49a: IF (Stack[-1] == 0) GOTO 0x49d; Pop(1)

0x49b: Stack[-2] = (int) 6
0x49c: Return(); Pop(0)

0x49d: Push("grif")
0x49e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x49f: IF (Stack[-1] == 0) GOTO 0x4a2; Pop(1)

0x4a0: Stack[-2] = (int) 7
0x4a1: Return(); Pop(0)

0x4a2: Push("han")
0x4a3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4a4: IF (Stack[-1] == 0) GOTO 0x4a7; Pop(1)

0x4a5: Stack[-2] = (int) 8
0x4a6: Return(); Pop(0)

0x4a7: Push("julia")
0x4a8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4a9: IF (Stack[-1] == 0) GOTO 0x4ac; Pop(1)

0x4aa: Stack[-2] = (int) 9
0x4ab: Return(); Pop(0)

0x4ac: Push("kapella")
0x4ad: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4ae: IF (Stack[-1] == 0) GOTO 0x4b1; Pop(1)

0x4af: Stack[-2] = (int) 10
0x4b0: Return(); Pop(0)

0x4b1: Push("katerina")
0x4b2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4b3: IF (Stack[-1] == 0) GOTO 0x4b6; Pop(1)

0x4b4: Stack[-2] = (int) 11
0x4b5: Return(); Pop(0)

0x4b6: Push("klara")
0x4b7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4b8: IF (Stack[-1] == 0) GOTO 0x4bb; Pop(1)

0x4b9: Stack[-2] = (int) 12
0x4ba: Return(); Pop(0)

0x4bb: Push("lara")
0x4bc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4bd: IF (Stack[-1] == 0) GOTO 0x4c0; Pop(1)

0x4be: Stack[-2] = (int) 13
0x4bf: Return(); Pop(0)

0x4c0: Push("laska")
0x4c1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4c2: IF (Stack[-1] == 0) GOTO 0x4c5; Pop(1)

0x4c3: Stack[-2] = (int) 14
0x4c4: Return(); Pop(0)

0x4c5: Push("maria")
0x4c6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4c7: IF (Stack[-1] == 0) GOTO 0x4ca; Pop(1)

0x4c8: Stack[-2] = (int) 15
0x4c9: Return(); Pop(0)

0x4ca: Push("mark")
0x4cb: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4cc: IF (Stack[-1] == 0) GOTO 0x4cf; Pop(1)

0x4cd: Stack[-2] = (int) 16
0x4ce: Return(); Pop(0)

0x4cf: Push("mat")
0x4d0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4d1: IF (Stack[-1] == 0) GOTO 0x4d4; Pop(1)

0x4d2: Stack[-2] = (int) 17
0x4d3: Return(); Pop(0)

0x4d4: Push("mishka")
0x4d5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4d6: IF (Stack[-1] == 0) GOTO 0x4d9; Pop(1)

0x4d7: Stack[-2] = (int) 18
0x4d8: Return(); Pop(0)

0x4d9: Push("mladvlad")
0x4da: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4db: IF (Stack[-1] == 0) GOTO 0x4de; Pop(1)

0x4dc: Stack[-2] = (int) 19
0x4dd: Return(); Pop(0)

0x4de: Push("notkin")
0x4df: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4e0: IF (Stack[-1] == 0) GOTO 0x4e3; Pop(1)

0x4e1: Stack[-2] = (int) 20
0x4e2: Return(); Pop(0)

0x4e3: Push("ospina")
0x4e4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4e5: IF (Stack[-1] == 0) GOTO 0x4e8; Pop(1)

0x4e6: Stack[-2] = (int) 21
0x4e7: Return(); Pop(0)

0x4e8: Push("petr")
0x4e9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4ea: IF (Stack[-1] == 0) GOTO 0x4ed; Pop(1)

0x4eb: Stack[-2] = (int) 22
0x4ec: Return(); Pop(0)

0x4ed: Push("rubin")
0x4ee: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4ef: IF (Stack[-1] == 0) GOTO 0x4f2; Pop(1)

0x4f0: Stack[-2] = (int) 23
0x4f1: Return(); Pop(0)

0x4f2: Push("spi4ka")
0x4f3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4f4: IF (Stack[-1] == 0) GOTO 0x4f7; Pop(1)

0x4f5: Stack[-2] = (int) 24
0x4f6: Return(); Pop(0)

0x4f7: Push("starshina")
0x4f8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4f9: IF (Stack[-1] == 0) GOTO 0x4fc; Pop(1)

0x4fa: Stack[-2] = (int) 25
0x4fb: Return(); Pop(0)

0x4fc: Push("viktor")
0x4fd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4fe: IF (Stack[-1] == 0) GOTO 0x501; Pop(1)

0x4ff: Stack[-2] = (int) 26
0x500: Return(); Pop(0)

0x501: Push("wasted_woman")
0x502: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x503: IF (Stack[-1] == 0) GOTO 0x506; Pop(1)

0x504: Stack[-2] = (int) 27
0x505: Return(); Pop(0)

0x506: Push("wasted_male")
0x507: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x508: IF (Stack[-1] == 0) GOTO 0x50b; Pop(1)

0x509: Stack[-2] = (int) 28
0x50a: Return(); Pop(0)

0x50b: Push("alkash")
0x50c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x50d: IF (Stack[-1] == 0) GOTO 0x510; Pop(1)

0x50e: Stack[-2] = (int) 29
0x50f: Return(); Pop(0)

0x510: Push("boy")
0x511: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x512: IF (Stack[-1] == 0) GOTO 0x515; Pop(1)

0x513: Stack[-2] = (int) 30
0x514: Return(); Pop(0)

0x515: Push("girl")
0x516: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x517: IF (Stack[-1] == 0) GOTO 0x51a; Pop(1)

0x518: Stack[-2] = (int) 31
0x519: Return(); Pop(0)

0x51a: Push("littleboy")
0x51b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x51c: IF (Stack[-1] == 0) GOTO 0x51f; Pop(1)

0x51d: Stack[-2] = (int) 32
0x51e: Return(); Pop(0)

0x51f: Push("littlegirl")
0x520: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x521: IF (Stack[-1] == 0) GOTO 0x524; Pop(1)

0x522: Stack[-2] = (int) 33
0x523: Return(); Pop(0)

0x524: Push("butcher")
0x525: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x526: IF (Stack[-1] == 0) GOTO 0x529; Pop(1)

0x527: Stack[-2] = (int) 34
0x528: Return(); Pop(0)

0x529: Push("dohodyaga")
0x52a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x52b: IF (Stack[-1] == 0) GOTO 0x52e; Pop(1)

0x52c: Stack[-2] = (int) 35
0x52d: Return(); Pop(0)

0x52e: Push("unosha")
0x52f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x530: IF (Stack[-1] == 0) GOTO 0x533; Pop(1)

0x531: Stack[-2] = (int) 36
0x532: Return(); Pop(0)

0x533: Push("vaxxabit")
0x534: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x535: IF (Stack[-1] == 0) GOTO 0x538; Pop(1)

0x536: Stack[-2] = (int) 37
0x537: Return(); Pop(0)

0x538: Push("vaxxabitka")
0x539: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x53a: IF (Stack[-1] == 0) GOTO 0x53d; Pop(1)

0x53b: Stack[-2] = (int) 38
0x53c: Return(); Pop(0)

0x53d: Push("woman")
0x53e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x53f: IF (Stack[-1] == 0) GOTO 0x542; Pop(1)

0x540: Stack[-2] = (int) 39
0x541: Return(); Pop(0)

0x542: Push("worker")
0x543: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x544: IF (Stack[-1] == 0) GOTO 0x547; Pop(1)

0x545: Stack[-2] = (int) 40
0x546: Return(); Pop(0)

0x547: Push("whitemask")
0x548: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x549: IF (Stack[-1] == 0) GOTO 0x54c; Pop(1)

0x54a: Stack[-2] = (int) 42
0x54b: Return(); Pop(0)

0x54c: Push("birdmask")
0x54d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x54e: IF (Stack[-1] == 0) GOTO 0x551; Pop(1)

0x54f: Stack[-2] = (int) 43
0x550: Return(); Pop(0)

0x551: Push("birdmask")
0x552: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x553: IF (Stack[-1] == 0) GOTO 0x556; Pop(1)

0x554: Stack[-2] = (int) 44
0x555: Return(); Pop(0)

0x556: Push("patrol")
0x557: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x558: IF (Stack[-1] == 0) GOTO 0x55b; Pop(1)

0x559: Stack[-2] = (int) 46
0x55a: Return(); Pop(0)

0x55b: Push("danko")
0x55c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x55d: IF (Stack[-1] == 0) GOTO 0x560; Pop(1)

0x55e: Stack[-2] = (int) 47
0x55f: Return(); Pop(0)

0x560: Push("alkash_d")
0x561: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x562: IF (Stack[-1] == 0) GOTO 0x565; Pop(1)

0x563: Stack[-2] = (int) 48
0x564: Return(); Pop(0)

0x565: Push("boy_d")
0x566: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x567: IF (Stack[-1] == 0) GOTO 0x56a; Pop(1)

0x568: Stack[-2] = (int) 49
0x569: Return(); Pop(0)

0x56a: Push("butcher_d")
0x56b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x56c: IF (Stack[-1] == 0) GOTO 0x56f; Pop(1)

0x56d: Stack[-2] = (int) 50
0x56e: Return(); Pop(0)

0x56f: Push("dohodyaga_d")
0x570: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x571: IF (Stack[-1] == 0) GOTO 0x574; Pop(1)

0x572: Stack[-2] = (int) 51
0x573: Return(); Pop(0)

0x574: Push("girl_d")
0x575: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x576: IF (Stack[-1] == 0) GOTO 0x579; Pop(1)

0x577: Stack[-2] = (int) 52
0x578: Return(); Pop(0)

0x579: Push("littleboy_d")
0x57a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x57b: IF (Stack[-1] == 0) GOTO 0x57e; Pop(1)

0x57c: Stack[-2] = (int) 53
0x57d: Return(); Pop(0)

0x57e: Push("littlegirl_d")
0x57f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x580: IF (Stack[-1] == 0) GOTO 0x583; Pop(1)

0x581: Stack[-2] = (int) 54
0x582: Return(); Pop(0)

0x583: Push("unosha2")
0x584: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x585: IF (Stack[-1] == 0) GOTO 0x588; Pop(1)

0x586: Stack[-2] = (int) 55
0x587: Return(); Pop(0)

0x588: Push("unosha_d")
0x589: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x58a: IF (Stack[-1] == 0) GOTO 0x58d; Pop(1)

0x58b: Stack[-2] = (int) 56
0x58c: Return(); Pop(0)

0x58d: Push("unosha2_d")
0x58e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x58f: IF (Stack[-1] == 0) GOTO 0x592; Pop(1)

0x590: Stack[-2] = (int) 57
0x591: Return(); Pop(0)

0x592: Push("vaxxabit_d")
0x593: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x594: IF (Stack[-1] == 0) GOTO 0x597; Pop(1)

0x595: Stack[-2] = (int) 58
0x596: Return(); Pop(0)

0x597: Push("vaxxabitka_d")
0x598: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x599: IF (Stack[-1] == 0) GOTO 0x59c; Pop(1)

0x59a: Stack[-2] = (int) 59
0x59b: Return(); Pop(0)

0x59c: Push("wasted_male_d")
0x59d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x59e: IF (Stack[-1] == 0) GOTO 0x5a1; Pop(1)

0x59f: Stack[-2] = (int) 60
0x5a0: Return(); Pop(0)

0x5a1: Push("wasted_woman_d")
0x5a2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5a3: IF (Stack[-1] == 0) GOTO 0x5a6; Pop(1)

0x5a4: Stack[-2] = (int) 61
0x5a5: Return(); Pop(0)

0x5a6: Push("woman_d")
0x5a7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5a8: IF (Stack[-1] == 0) GOTO 0x5ab; Pop(1)

0x5a9: Stack[-2] = (int) 62
0x5aa: Return(); Pop(0)

0x5ab: Push("worker2")
0x5ac: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5ad: IF (Stack[-1] == 0) GOTO 0x5b0; Pop(1)

0x5ae: Stack[-2] = (int) 63
0x5af: Return(); Pop(0)

0x5b0: Push("worker_d")
0x5b1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5b2: IF (Stack[-1] == 0) GOTO 0x5b5; Pop(1)

0x5b3: Stack[-2] = (int) 64
0x5b4: Return(); Pop(0)

0x5b5: Push("worker2_d")
0x5b6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5b7: IF (Stack[-1] == 0) GOTO 0x5ba; Pop(1)

0x5b8: Stack[-2] = (int) 65
0x5b9: Return(); Pop(0)

0x5ba: Push("burah")
0x5bb: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5bc: IF (Stack[-1] == 0) GOTO 0x5bf; Pop(1)

0x5bd: Stack[-2] = (int) 66
0x5be: Return(); Pop(0)

0x5bf: Push("gorbun_daughter")
0x5c0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5c1: IF (Stack[-1] == 0) GOTO 0x5c4; Pop(1)

0x5c2: Stack[-2] = (int) 67
0x5c3: Return(); Pop(0)

0x5c4: Push("gorbun")
0x5c5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5c6: IF (Stack[-1] == 0) GOTO 0x5c9; Pop(1)

0x5c7: Stack[-2] = (int) 68
0x5c8: Return(); Pop(0)

0x5c9: Push("albinos")
0x5ca: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5cb: IF (Stack[-1] == 0) GOTO 0x5ce; Pop(1)

0x5cc: Stack[-2] = (int) 69
0x5cd: Return(); Pop(0)

0x5ce: Push("aglaja")
0x5cf: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5d0: IF (Stack[-1] == 0) GOTO 0x5d3; Pop(1)

0x5d1: Stack[-2] = (int) 70
0x5d2: Return(); Pop(0)

0x5d3: Push("nude")
0x5d4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5d5: IF (Stack[-1] == 0) GOTO 0x5d8; Pop(1)

0x5d6: Stack[-2] = (int) 71
0x5d7: Return(); Pop(0)

0x5d8: Push("block")
0x5d9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5da: IF (Stack[-1] == 0) GOTO 0x5dd; Pop(1)

0x5db: Stack[-2] = (int) 72
0x5dc: Return(); Pop(0)

0x5dd: Push("officer")
0x5de: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5df: IF (Stack[-1] == 0) GOTO 0x5e2; Pop(1)

0x5e0: Stack[-2] = (int) 73
0x5e1: Return(); Pop(0)

0x5e2: Push("doberman")
0x5e3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5e4: IF (Stack[-1] == 0) GOTO 0x5e7; Pop(1)

0x5e5: Stack[-2] = (int) 74
0x5e6: Return(); Pop(0)

0x5e7: Push("grabitel")
0x5e8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5e9: IF (Stack[-1] == 0) GOTO 0x5ec; Pop(1)

0x5ea: Stack[-2] = (int) 75
0x5eb: Return(); Pop(0)

0x5ec: Push("gatherer_wife")
0x5ed: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5ee: IF (Stack[-1] == 0) GOTO 0x5f1; Pop(1)

0x5ef: Stack[-2] = (int) 76
0x5f0: Return(); Pop(0)

0x5f1: Push("rat_prophet")
0x5f2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5f3: IF (Stack[-1] == 0) GOTO 0x5f6; Pop(1)

0x5f4: Stack[-2] = (int) 77
0x5f5: Return(); Pop(0)

0x5f6: Push("morlok")
0x5f7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5f8: IF (Stack[-1] == 0) GOTO 0x5fb; Pop(1)

0x5f9: Stack[-2] = (int) 78
0x5fa: Return(); Pop(0)

0x5fb: Push("soldier")
0x5fc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5fd: IF (Stack[-1] == 0) GOTO 0x600; Pop(1)

0x5fe: Stack[-2] = (int) 79
0x5ff: Return(); Pop(0)

0x600: Push("britva")
0x601: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x602: IF (Stack[-1] == 0) GOTO 0x605; Pop(1)

0x603: Stack[-2] = (int) 80
0x604: Return(); Pop(0)

0x605: Push("kabaktchik")
0x606: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x607: IF (Stack[-1] == 0) GOTO 0x60a; Pop(1)

0x608: Stack[-2] = (int) 81
0x609: Return(); Pop(0)

0x60a: Push("sanitar")
0x60b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x60c: IF (Stack[-1] == 0) GOTO 0x60f; Pop(1)

0x60d: Stack[-2] = (int) 82
0x60e: Return(); Pop(0)

0x60f: Push("salesman")
0x610: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x611: IF (Stack[-1] == 0) GOTO 0x614; Pop(1)

0x612: Stack[-2] = (int) 83
0x613: Return(); Pop(0)

0x614: Push("ayyan")
0x615: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x616: IF (Stack[-1] == 0) GOTO 0x619; Pop(1)

0x617: Stack[-2] = (int) 84
0x618: Return(); Pop(0)

0x619: Push("petrbirdmask")
0x61a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x61b: IF (Stack[-1] == 0) GOTO 0x61e; Pop(1)

0x61c: Stack[-2] = (int) 85
0x61d: Return(); Pop(0)

0x61e: Push("mogila")
0x61f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x620: IF (Stack[-1] == 0) GOTO 0x623; Pop(1)

0x621: Stack[-2] = (int) 86
0x622: Return(); Pop(0)

0x623: Push("klikusha")
0x624: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x625: IF (Stack[-1] == 0) GOTO 0x628; Pop(1)

0x626: Stack[-2] = (int) 87
0x627: Return(); Pop(0)

0x628: Stack[-2] = (int) -1
0x629: Return(); Pop(0)

0x62a: PushEmpty()
0x62b: Push((int) 1)
0x62c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x62d: IF (Stack[-1] == 0) GOTO 0x630; Pop(1)

0x62e: Stack[-2] = "alexandr"
0x62f: Return(); Pop(0)

0x630: Push((int) 2)
0x631: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x632: IF (Stack[-1] == 0) GOTO 0x635; Pop(1)

0x633: Stack[-2] = "andrei"
0x634: Return(); Pop(0)

0x635: Push((int) 3)
0x636: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x637: IF (Stack[-1] == 0) GOTO 0x63a; Pop(1)

0x638: Stack[-2] = "anna"
0x639: Return(); Pop(0)

0x63a: Push((int) 4)
0x63b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x63c: IF (Stack[-1] == 0) GOTO 0x63f; Pop(1)

0x63d: Stack[-2] = "bigvlad"
0x63e: Return(); Pop(0)

0x63f: Push((int) 5)
0x640: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x641: IF (Stack[-1] == 0) GOTO 0x644; Pop(1)

0x642: Stack[-2] = "eva"
0x643: Return(); Pop(0)

0x644: Push((int) 6)
0x645: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x646: IF (Stack[-1] == 0) GOTO 0x649; Pop(1)

0x647: Stack[-2] = "georg"
0x648: Return(); Pop(0)

0x649: Push((int) 7)
0x64a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x64b: IF (Stack[-1] == 0) GOTO 0x64e; Pop(1)

0x64c: Stack[-2] = "grif"
0x64d: Return(); Pop(0)

0x64e: Push((int) 8)
0x64f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x650: IF (Stack[-1] == 0) GOTO 0x653; Pop(1)

0x651: Stack[-2] = "han"
0x652: Return(); Pop(0)

0x653: Push((int) 9)
0x654: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x655: IF (Stack[-1] == 0) GOTO 0x658; Pop(1)

0x656: Stack[-2] = "julia"
0x657: Return(); Pop(0)

0x658: Push((int) 10)
0x659: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x65a: IF (Stack[-1] == 0) GOTO 0x65d; Pop(1)

0x65b: Stack[-2] = "kapella"
0x65c: Return(); Pop(0)

0x65d: Push((int) 11)
0x65e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x65f: IF (Stack[-1] == 0) GOTO 0x662; Pop(1)

0x660: Stack[-2] = "katerina"
0x661: Return(); Pop(0)

0x662: Push((int) 12)
0x663: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x664: IF (Stack[-1] == 0) GOTO 0x667; Pop(1)

0x665: Stack[-2] = "klara"
0x666: Return(); Pop(0)

0x667: Push((int) 13)
0x668: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x669: IF (Stack[-1] == 0) GOTO 0x66c; Pop(1)

0x66a: Stack[-2] = "lara"
0x66b: Return(); Pop(0)

0x66c: Push((int) 14)
0x66d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x66e: IF (Stack[-1] == 0) GOTO 0x671; Pop(1)

0x66f: Stack[-2] = "laska"
0x670: Return(); Pop(0)

0x671: Push((int) 15)
0x672: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x673: IF (Stack[-1] == 0) GOTO 0x676; Pop(1)

0x674: Stack[-2] = "maria"
0x675: Return(); Pop(0)

0x676: Push((int) 16)
0x677: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x678: IF (Stack[-1] == 0) GOTO 0x67b; Pop(1)

0x679: Stack[-2] = "mark"
0x67a: Return(); Pop(0)

0x67b: Push((int) 17)
0x67c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x67d: IF (Stack[-1] == 0) GOTO 0x680; Pop(1)

0x67e: Stack[-2] = "mat"
0x67f: Return(); Pop(0)

0x680: Push((int) 18)
0x681: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x682: IF (Stack[-1] == 0) GOTO 0x685; Pop(1)

0x683: Stack[-2] = "mishka"
0x684: Return(); Pop(0)

0x685: Push((int) 19)
0x686: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x687: IF (Stack[-1] == 0) GOTO 0x68a; Pop(1)

0x688: Stack[-2] = "mladvlad"
0x689: Return(); Pop(0)

0x68a: Push((int) 20)
0x68b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x68c: IF (Stack[-1] == 0) GOTO 0x68f; Pop(1)

0x68d: Stack[-2] = "notkin"
0x68e: Return(); Pop(0)

0x68f: Push((int) 21)
0x690: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x691: IF (Stack[-1] == 0) GOTO 0x694; Pop(1)

0x692: Stack[-2] = "ospina"
0x693: Return(); Pop(0)

0x694: Push((int) 22)
0x695: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x696: IF (Stack[-1] == 0) GOTO 0x699; Pop(1)

0x697: Stack[-2] = "petr"
0x698: Return(); Pop(0)

0x699: Push((int) 23)
0x69a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x69b: IF (Stack[-1] == 0) GOTO 0x69e; Pop(1)

0x69c: Stack[-2] = "rubin"
0x69d: Return(); Pop(0)

0x69e: Push((int) 24)
0x69f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6a0: IF (Stack[-1] == 0) GOTO 0x6a3; Pop(1)

0x6a1: Stack[-2] = "spi4ka"
0x6a2: Return(); Pop(0)

0x6a3: Push((int) 25)
0x6a4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6a5: IF (Stack[-1] == 0) GOTO 0x6a8; Pop(1)

0x6a6: Stack[-2] = "starshina"
0x6a7: Return(); Pop(0)

0x6a8: Push((int) 26)
0x6a9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6aa: IF (Stack[-1] == 0) GOTO 0x6ad; Pop(1)

0x6ab: Stack[-2] = "viktor"
0x6ac: Return(); Pop(0)

0x6ad: Push((int) 27)
0x6ae: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6af: IF (Stack[-1] == 0) GOTO 0x6b2; Pop(1)

0x6b0: Stack[-2] = "wasted_woman"
0x6b1: Return(); Pop(0)

0x6b2: Push((int) 28)
0x6b3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6b4: IF (Stack[-1] == 0) GOTO 0x6b7; Pop(1)

0x6b5: Stack[-2] = "wasted_male"
0x6b6: Return(); Pop(0)

0x6b7: Push((int) 29)
0x6b8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6b9: IF (Stack[-1] == 0) GOTO 0x6bc; Pop(1)

0x6ba: Stack[-2] = "alkash"
0x6bb: Return(); Pop(0)

0x6bc: Push((int) 30)
0x6bd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6be: IF (Stack[-1] == 0) GOTO 0x6c1; Pop(1)

0x6bf: Stack[-2] = "boy"
0x6c0: Return(); Pop(0)

0x6c1: Push((int) 31)
0x6c2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6c3: IF (Stack[-1] == 0) GOTO 0x6c6; Pop(1)

0x6c4: Stack[-2] = "girl"
0x6c5: Return(); Pop(0)

0x6c6: Push((int) 32)
0x6c7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6c8: IF (Stack[-1] == 0) GOTO 0x6cb; Pop(1)

0x6c9: Stack[-2] = "littleboy"
0x6ca: Return(); Pop(0)

0x6cb: Push((int) 33)
0x6cc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6cd: IF (Stack[-1] == 0) GOTO 0x6d0; Pop(1)

0x6ce: Stack[-2] = "littlegirl"
0x6cf: Return(); Pop(0)

0x6d0: Push((int) 34)
0x6d1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6d2: IF (Stack[-1] == 0) GOTO 0x6d5; Pop(1)

0x6d3: Stack[-2] = "butcher"
0x6d4: Return(); Pop(0)

0x6d5: Push((int) 35)
0x6d6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6d7: IF (Stack[-1] == 0) GOTO 0x6da; Pop(1)

0x6d8: Stack[-2] = "dohodyaga"
0x6d9: Return(); Pop(0)

0x6da: Push((int) 36)
0x6db: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6dc: IF (Stack[-1] == 0) GOTO 0x6df; Pop(1)

0x6dd: Stack[-2] = "unosha"
0x6de: Return(); Pop(0)

0x6df: Push((int) 37)
0x6e0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6e1: IF (Stack[-1] == 0) GOTO 0x6e4; Pop(1)

0x6e2: Stack[-2] = "vaxxabit"
0x6e3: Return(); Pop(0)

0x6e4: Push((int) 38)
0x6e5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6e6: IF (Stack[-1] == 0) GOTO 0x6e9; Pop(1)

0x6e7: Stack[-2] = "vaxxabitka"
0x6e8: Return(); Pop(0)

0x6e9: Push((int) 39)
0x6ea: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6eb: IF (Stack[-1] == 0) GOTO 0x6ee; Pop(1)

0x6ec: Stack[-2] = "woman"
0x6ed: Return(); Pop(0)

0x6ee: Push((int) 40)
0x6ef: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6f0: IF (Stack[-1] == 0) GOTO 0x6f3; Pop(1)

0x6f1: Stack[-2] = "worker"
0x6f2: Return(); Pop(0)

0x6f3: Push((int) 42)
0x6f4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6f5: IF (Stack[-1] == 0) GOTO 0x6f8; Pop(1)

0x6f6: Stack[-2] = "whitemask"
0x6f7: Return(); Pop(0)

0x6f8: Push((int) 43)
0x6f9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6fa: IF (Stack[-1] == 0) GOTO 0x6fd; Pop(1)

0x6fb: Stack[-2] = "birdmask"
0x6fc: Return(); Pop(0)

0x6fd: Push((int) 44)
0x6fe: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6ff: IF (Stack[-1] == 0) GOTO 0x702; Pop(1)

0x700: Stack[-2] = "birdmask"
0x701: Return(); Pop(0)

0x702: Push((int) 46)
0x703: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x704: IF (Stack[-1] == 0) GOTO 0x707; Pop(1)

0x705: Stack[-2] = "patrol"
0x706: Return(); Pop(0)

0x707: Push((int) 47)
0x708: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x709: IF (Stack[-1] == 0) GOTO 0x70c; Pop(1)

0x70a: Stack[-2] = "danko"
0x70b: Return(); Pop(0)

0x70c: Push((int) 48)
0x70d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x70e: IF (Stack[-1] == 0) GOTO 0x711; Pop(1)

0x70f: Stack[-2] = "alkash_d"
0x710: Return(); Pop(0)

0x711: Push((int) 49)
0x712: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x713: IF (Stack[-1] == 0) GOTO 0x716; Pop(1)

0x714: Stack[-2] = "boy_d"
0x715: Return(); Pop(0)

0x716: Push((int) 50)
0x717: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x718: IF (Stack[-1] == 0) GOTO 0x71b; Pop(1)

0x719: Stack[-2] = "butcher_d"
0x71a: Return(); Pop(0)

0x71b: Push((int) 51)
0x71c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x71d: IF (Stack[-1] == 0) GOTO 0x720; Pop(1)

0x71e: Stack[-2] = "dohodyaga_d"
0x71f: Return(); Pop(0)

0x720: Push((int) 52)
0x721: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x722: IF (Stack[-1] == 0) GOTO 0x725; Pop(1)

0x723: Stack[-2] = "girl_d"
0x724: Return(); Pop(0)

0x725: Push((int) 53)
0x726: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x727: IF (Stack[-1] == 0) GOTO 0x72a; Pop(1)

0x728: Stack[-2] = "littleboy_d"
0x729: Return(); Pop(0)

0x72a: Push((int) 54)
0x72b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x72c: IF (Stack[-1] == 0) GOTO 0x72f; Pop(1)

0x72d: Stack[-2] = "littlegirl_d"
0x72e: Return(); Pop(0)

0x72f: Push((int) 55)
0x730: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x731: IF (Stack[-1] == 0) GOTO 0x734; Pop(1)

0x732: Stack[-2] = "unosha2"
0x733: Return(); Pop(0)

0x734: Push((int) 56)
0x735: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x736: IF (Stack[-1] == 0) GOTO 0x739; Pop(1)

0x737: Stack[-2] = "unosha_d"
0x738: Return(); Pop(0)

0x739: Push((int) 57)
0x73a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x73b: IF (Stack[-1] == 0) GOTO 0x73e; Pop(1)

0x73c: Stack[-2] = "unosha2_d"
0x73d: Return(); Pop(0)

0x73e: Push((int) 58)
0x73f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x740: IF (Stack[-1] == 0) GOTO 0x743; Pop(1)

0x741: Stack[-2] = "vaxxabit_d"
0x742: Return(); Pop(0)

0x743: Push((int) 59)
0x744: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x745: IF (Stack[-1] == 0) GOTO 0x748; Pop(1)

0x746: Stack[-2] = "vaxxabitka_d"
0x747: Return(); Pop(0)

0x748: Push((int) 60)
0x749: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x74a: IF (Stack[-1] == 0) GOTO 0x74d; Pop(1)

0x74b: Stack[-2] = "wasted_male_d"
0x74c: Return(); Pop(0)

0x74d: Push((int) 61)
0x74e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x74f: IF (Stack[-1] == 0) GOTO 0x752; Pop(1)

0x750: Stack[-2] = "wasted_woman_d"
0x751: Return(); Pop(0)

0x752: Push((int) 62)
0x753: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x754: IF (Stack[-1] == 0) GOTO 0x757; Pop(1)

0x755: Stack[-2] = "woman_d"
0x756: Return(); Pop(0)

0x757: Push((int) 63)
0x758: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x759: IF (Stack[-1] == 0) GOTO 0x75c; Pop(1)

0x75a: Stack[-2] = "worker2"
0x75b: Return(); Pop(0)

0x75c: Push((int) 64)
0x75d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x75e: IF (Stack[-1] == 0) GOTO 0x761; Pop(1)

0x75f: Stack[-2] = "worker_d"
0x760: Return(); Pop(0)

0x761: Push((int) 65)
0x762: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x763: IF (Stack[-1] == 0) GOTO 0x766; Pop(1)

0x764: Stack[-2] = "worker2_d"
0x765: Return(); Pop(0)

0x766: Push((int) 66)
0x767: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x768: IF (Stack[-1] == 0) GOTO 0x76b; Pop(1)

0x769: Stack[-2] = "burah"
0x76a: Return(); Pop(0)

0x76b: Push((int) 67)
0x76c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x76d: IF (Stack[-1] == 0) GOTO 0x770; Pop(1)

0x76e: Stack[-2] = "gorbun_daughter"
0x76f: Return(); Pop(0)

0x770: Push((int) 68)
0x771: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x772: IF (Stack[-1] == 0) GOTO 0x775; Pop(1)

0x773: Stack[-2] = "gorbun"
0x774: Return(); Pop(0)

0x775: Push((int) 69)
0x776: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x777: IF (Stack[-1] == 0) GOTO 0x77a; Pop(1)

0x778: Stack[-2] = "albinos"
0x779: Return(); Pop(0)

0x77a: Push((int) 70)
0x77b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x77c: IF (Stack[-1] == 0) GOTO 0x77f; Pop(1)

0x77d: Stack[-2] = "aglaja"
0x77e: Return(); Pop(0)

0x77f: Push((int) 71)
0x780: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x781: IF (Stack[-1] == 0) GOTO 0x784; Pop(1)

0x782: Stack[-2] = "nude"
0x783: Return(); Pop(0)

0x784: Push((int) 72)
0x785: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x786: IF (Stack[-1] == 0) GOTO 0x789; Pop(1)

0x787: Stack[-2] = "block"
0x788: Return(); Pop(0)

0x789: Push((int) 73)
0x78a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x78b: IF (Stack[-1] == 0) GOTO 0x78e; Pop(1)

0x78c: Stack[-2] = "officer"
0x78d: Return(); Pop(0)

0x78e: Push((int) 74)
0x78f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x790: IF (Stack[-1] == 0) GOTO 0x793; Pop(1)

0x791: Stack[-2] = "doberman"
0x792: Return(); Pop(0)

0x793: Push((int) 75)
0x794: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x795: IF (Stack[-1] == 0) GOTO 0x798; Pop(1)

0x796: Stack[-2] = "grabitel"
0x797: Return(); Pop(0)

0x798: Push((int) 76)
0x799: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x79a: IF (Stack[-1] == 0) GOTO 0x79d; Pop(1)

0x79b: Stack[-2] = "gatherer_wife"
0x79c: Return(); Pop(0)

0x79d: Push((int) 77)
0x79e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x79f: IF (Stack[-1] == 0) GOTO 0x7a2; Pop(1)

0x7a0: Stack[-2] = "rat_prophet"
0x7a1: Return(); Pop(0)

0x7a2: Push((int) 78)
0x7a3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7a4: IF (Stack[-1] == 0) GOTO 0x7a7; Pop(1)

0x7a5: Stack[-2] = "morlok"
0x7a6: Return(); Pop(0)

0x7a7: Push((int) 79)
0x7a8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7a9: IF (Stack[-1] == 0) GOTO 0x7ac; Pop(1)

0x7aa: Stack[-2] = "soldier"
0x7ab: Return(); Pop(0)

0x7ac: Push((int) 80)
0x7ad: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7ae: IF (Stack[-1] == 0) GOTO 0x7b1; Pop(1)

0x7af: Stack[-2] = "britva"
0x7b0: Return(); Pop(0)

0x7b1: Push((int) 81)
0x7b2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7b3: IF (Stack[-1] == 0) GOTO 0x7b6; Pop(1)

0x7b4: Stack[-2] = "kabaktchik"
0x7b5: Return(); Pop(0)

0x7b6: Push((int) 82)
0x7b7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7b8: IF (Stack[-1] == 0) GOTO 0x7bb; Pop(1)

0x7b9: Stack[-2] = "sanitar"
0x7ba: Return(); Pop(0)

0x7bb: Push((int) 83)
0x7bc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7bd: IF (Stack[-1] == 0) GOTO 0x7c0; Pop(1)

0x7be: Stack[-2] = "salesman"
0x7bf: Return(); Pop(0)

0x7c0: Push((int) 84)
0x7c1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7c2: IF (Stack[-1] == 0) GOTO 0x7c5; Pop(1)

0x7c3: Stack[-2] = "ayyan"
0x7c4: Return(); Pop(0)

0x7c5: Push((int) 85)
0x7c6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7c7: IF (Stack[-1] == 0) GOTO 0x7ca; Pop(1)

0x7c8: Stack[-2] = "petrbirdmask"
0x7c9: Return(); Pop(0)

0x7ca: Push((int) 86)
0x7cb: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7cc: IF (Stack[-1] == 0) GOTO 0x7cf; Pop(1)

0x7cd: Stack[-2] = "mogila"
0x7ce: Return(); Pop(0)

0x7cf: Push((int) 87)
0x7d0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7d1: IF (Stack[-1] == 0) GOTO 0x7d4; Pop(1)

0x7d2: Stack[-2] = "klikusha"
0x7d3: Return(); Pop(0)

0x7d4: Stack[-2] = ""
0x7d5: Return(); Pop(0)

0x7d6: PushEmpty()
0x7d7: Push((int) 18)
0x7d8: @@ add(Stack[-1])
0x7d9: Pop(1)
0x7da: Push((int) 24)
0x7db: @@ add(Stack[-1])
0x7dc: Pop(1)
0x7dd: Push((int) 20)
0x7de: @@ add(Stack[-1])
0x7df: Pop(1)
0x7e0: Push((int) 14)
0x7e1: @@ add(Stack[-1])
0x7e2: Pop(1)
0x7e3: Push((bool) 0)
0x7e4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7e5: IF (Stack[-1] == 0) GOTO 0x7f0; Pop(1)

0x7e6: Push((int) 10)
0x7e7: @@ add(Stack[-1])
0x7e8: Pop(1)
0x7e9: Push((int) 17)
0x7ea: @@ add(Stack[-1])
0x7eb: Pop(1)
0x7ec: Push((int) 8)
0x7ed: @@ add(Stack[-1])
0x7ee: Pop(1)
0x7ef: GOTO 0x7f6

0x7f0: Push((int) 1)
0x7f1: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x7f2: IF (Stack[-1] == 0) GOTO 0x7f6; Pop(1)

0x7f3: Push((int) 10)
0x7f4: @@ add(Stack[-1])
0x7f5: Pop(1)
0x7f6: Return(); Pop(0)

0x7f7: PushEmpty()
0x7f8: Push((int) 6)
0x7f9: @@ add(Stack[-1])
0x7fa: Pop(1)
0x7fb: Push((int) 26)
0x7fc: @@ add(Stack[-1])
0x7fd: Pop(1)
0x7fe: Push((int) 2)
0x7ff: @@ add(Stack[-1])
0x800: Pop(1)
0x801: Push((int) 22)
0x802: @@ add(Stack[-1])
0x803: Pop(1)
0x804: Push((bool) 0)
0x805: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x806: IF (Stack[-1] == 0) GOTO 0x811; Pop(1)

0x807: Push((int) 15)
0x808: @@ add(Stack[-1])
0x809: Pop(1)
0x80a: Push((int) 5)
0x80b: @@ add(Stack[-1])
0x80c: Pop(1)
0x80d: Push((int) 16)
0x80e: @@ add(Stack[-1])
0x80f: Pop(1)
0x810: GOTO 0x817

0x811: Push((int) 0)
0x812: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x813: IF (Stack[-1] == 0) GOTO 0x817; Pop(1)

0x814: Push((int) 15)
0x815: @@ add(Stack[-1])
0x816: Pop(1)
0x817: Return(); Pop(0)

0x818: PushEmpty()
0x819: Push((int) 7)
0x81a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x81b: IF (Stack[-1] == 0) GOTO 0x81e; Pop(1)

0x81c: Stack[-2] = (bool) 1
0x81d: Return(); Pop(0)

0x81e: Push((int) 23)
0x81f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x820: IF (Stack[-1] == 0) GOTO 0x823; Pop(1)

0x821: Stack[-2] = (bool) 1
0x822: Return(); Pop(0)

0x823: Push((int) 21)
0x824: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x825: IF (Stack[-1] == 0) GOTO 0x828; Pop(1)

0x826: Stack[-2] = (bool) 1
0x827: Return(); Pop(0)

0x828: Push((int) 9)
0x829: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x82a: IF (Stack[-1] == 0) GOTO 0x82d; Pop(1)

0x82b: Stack[-2] = (bool) 1
0x82c: Return(); Pop(0)

0x82d: Push((int) 3)
0x82e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x82f: IF (Stack[-1] == 0) GOTO 0x832; Pop(1)

0x830: Stack[-2] = (bool) 1
0x831: Return(); Pop(0)

0x832: Push((int) 1)
0x833: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x834: IF (Stack[-1] == 0) GOTO 0x837; Pop(1)

0x835: Stack[-2] = (bool) 1
0x836: Return(); Pop(0)

0x837: Push((int) 11)
0x838: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x839: IF (Stack[-1] == 0) GOTO 0x83c; Pop(1)

0x83a: Stack[-2] = (bool) 1
0x83b: Return(); Pop(0)

0x83c: Push((int) 13)
0x83d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x83e: IF (Stack[-1] == 0) GOTO 0x841; Pop(1)

0x83f: Stack[-2] = (bool) 1
0x840: Return(); Pop(0)

0x841: Push((int) 25)
0x842: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x843: IF (Stack[-1] == 0) GOTO 0x846; Pop(1)

0x844: Stack[-2] = (bool) 1
0x845: Return(); Pop(0)

0x846: Stack[-2] = (bool) 0
0x847: Return(); Pop(0)

0x848: PushEmpty()
0x849: Push((int) 7)
0x84a: @@ add(Stack[-1])
0x84b: Pop(1)
0x84c: Push((int) 23)
0x84d: @@ add(Stack[-1])
0x84e: Pop(1)
0x84f: Push((int) 21)
0x850: @@ add(Stack[-1])
0x851: Pop(1)
0x852: Push((int) 9)
0x853: @@ add(Stack[-1])
0x854: Pop(1)
0x855: Push((int) 3)
0x856: @@ add(Stack[-1])
0x857: Pop(1)
0x858: Push((int) 1)
0x859: @@ add(Stack[-1])
0x85a: Pop(1)
0x85b: Push((int) 11)
0x85c: @@ add(Stack[-1])
0x85d: Pop(1)
0x85e: Push((int) 13)
0x85f: @@ add(Stack[-1])
0x860: Pop(1)
0x861: Push((bool) 0)
0x862: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x863: IF (Stack[-1] == 0) GOTO 0x867; Pop(1)

0x864: Push((int) 25)
0x865: @@ add(Stack[-1])
0x866: Pop(1)
0x867: Return(); Pop(0)

0x868: PushEmpty(object, object)
0x869: Push((int) 1)
0x86a: @@ add(Stack[-1])
0x86b: Pop(1)
0x86c: Push(Stack[-4])
0x86d: IF (Stack[-1] == 0) GOTO 0x875; Pop(1)

0x86e: @ CreateStringVector(Stack[-1])
0x86f: Pop(0)
0x870: Push("cot_alexandr@door1")
0x871: @@ add(Stack[-1])
0x872: Pop(1)
0x873: @@ add(Stack[-1])
0x874: Pop(0)
0x875: Push(Stack[-3])
0x876: IF (Stack[-1] == 0) GOTO 0x87a; Pop(1)

0x877: Push("outdoor")
0x878: @@ add(Stack[-1])
0x879: Pop(1)
0x87a: Push((int) 2)
0x87b: @@ add(Stack[-1])
0x87c: Pop(1)
0x87d: Push(Stack[-4])
0x87e: IF (Stack[-1] == 0) GOTO 0x886; Pop(1)

0x87f: @ CreateStringVector(Stack[-1])
0x880: Pop(0)
0x881: Push("shouse1_kabak@door1")
0x882: @@ add(Stack[-1])
0x883: Pop(1)
0x884: @@ add(Stack[-1])
0x885: Pop(0)
0x886: Push(Stack[-3])
0x887: IF (Stack[-1] == 0) GOTO 0x88b; Pop(1)

0x888: Push("outdoor")
0x889: @@ add(Stack[-1])
0x88a: Pop(1)
0x88b: Push((int) 3)
0x88c: @@ add(Stack[-1])
0x88d: Pop(1)
0x88e: Push(Stack[-4])
0x88f: IF (Stack[-1] == 0) GOTO 0x897; Pop(1)

0x890: @ CreateStringVector(Stack[-1])
0x891: Pop(0)
0x892: Push("cot_anna@door1")
0x893: @@ add(Stack[-1])
0x894: Pop(1)
0x895: @@ add(Stack[-1])
0x896: Pop(0)
0x897: Push(Stack[-3])
0x898: IF (Stack[-1] == 0) GOTO 0x89c; Pop(1)

0x899: Push("outdoor")
0x89a: @@ add(Stack[-1])
0x89b: Pop(1)
0x89c: Push((int) 4)
0x89d: @@ add(Stack[-1])
0x89e: Pop(1)
0x89f: Push(Stack[-4])
0x8a0: IF (Stack[-1] == 0) GOTO 0x8a8; Pop(1)

0x8a1: @ CreateStringVector(Stack[-1])
0x8a2: Pop(0)
0x8a3: Push("cot_bigvlad@door1")
0x8a4: @@ add(Stack[-1])
0x8a5: Pop(1)
0x8a6: @@ add(Stack[-1])
0x8a7: Pop(0)
0x8a8: Push(Stack[-3])
0x8a9: IF (Stack[-1] == 0) GOTO 0x8ad; Pop(1)

0x8aa: Push("outdoor")
0x8ab: @@ add(Stack[-1])
0x8ac: Pop(1)
0x8ad: Push((int) 6)
0x8ae: @@ add(Stack[-1])
0x8af: Pop(1)
0x8b0: Push(Stack[-4])
0x8b1: IF (Stack[-1] == 0) GOTO 0x8b9; Pop(1)

0x8b2: @ CreateStringVector(Stack[-1])
0x8b3: Pop(0)
0x8b4: Push("cot_georg@door1")
0x8b5: @@ add(Stack[-1])
0x8b6: Pop(1)
0x8b7: @@ add(Stack[-1])
0x8b8: Pop(0)
0x8b9: Push(Stack[-3])
0x8ba: IF (Stack[-1] == 0) GOTO 0x8be; Pop(1)

0x8bb: Push("outdoor")
0x8bc: @@ add(Stack[-1])
0x8bd: Pop(1)
0x8be: Push((int) 15)
0x8bf: @@ add(Stack[-1])
0x8c0: Pop(1)
0x8c1: Push(Stack[-4])
0x8c2: IF (Stack[-1] == 0) GOTO 0x8ca; Pop(1)

0x8c3: @ CreateStringVector(Stack[-1])
0x8c4: Pop(0)
0x8c5: Push("cot_maria@door1")
0x8c6: @@ add(Stack[-1])
0x8c7: Pop(1)
0x8c8: @@ add(Stack[-1])
0x8c9: Pop(0)
0x8ca: Push(Stack[-3])
0x8cb: IF (Stack[-1] == 0) GOTO 0x8cf; Pop(1)

0x8cc: Push("outdoor")
0x8cd: @@ add(Stack[-1])
0x8ce: Pop(1)
0x8cf: Push((int) 9)
0x8d0: @@ add(Stack[-1])
0x8d1: Pop(1)
0x8d2: Push(Stack[-4])
0x8d3: IF (Stack[-1] == 0) GOTO 0x8db; Pop(1)

0x8d4: @ CreateStringVector(Stack[-1])
0x8d5: Pop(0)
0x8d6: Push("cot_julia@door1")
0x8d7: @@ add(Stack[-1])
0x8d8: Pop(1)
0x8d9: @@ add(Stack[-1])
0x8da: Pop(0)
0x8db: Push(Stack[-3])
0x8dc: IF (Stack[-1] == 0) GOTO 0x8e0; Pop(1)

0x8dd: Push("outdoor")
0x8de: @@ add(Stack[-1])
0x8df: Pop(1)
0x8e0: Push((int) 10)
0x8e1: @@ add(Stack[-1])
0x8e2: Pop(1)
0x8e3: Push(Stack[-4])
0x8e4: IF (Stack[-1] == 0) GOTO 0x8ec; Pop(1)

0x8e5: @ CreateStringVector(Stack[-1])
0x8e6: Pop(0)
0x8e7: Push("cot_kapella@door1")
0x8e8: @@ add(Stack[-1])
0x8e9: Pop(1)
0x8ea: @@ add(Stack[-1])
0x8eb: Pop(0)
0x8ec: Push(Stack[-3])
0x8ed: IF (Stack[-1] == 0) GOTO 0x8f1; Pop(1)

0x8ee: Push("outdoor")
0x8ef: @@ add(Stack[-1])
0x8f0: Pop(1)
0x8f1: Push((int) 11)
0x8f2: @@ add(Stack[-1])
0x8f3: Pop(1)
0x8f4: Push(Stack[-4])
0x8f5: IF (Stack[-1] == 0) GOTO 0x8fd; Pop(1)

0x8f6: @ CreateStringVector(Stack[-1])
0x8f7: Pop(0)
0x8f8: Push("cot_katerina@door1")
0x8f9: @@ add(Stack[-1])
0x8fa: Pop(1)
0x8fb: @@ add(Stack[-1])
0x8fc: Pop(0)
0x8fd: Push(Stack[-3])
0x8fe: IF (Stack[-1] == 0) GOTO 0x902; Pop(1)

0x8ff: Push("outdoor")
0x900: @@ add(Stack[-1])
0x901: Pop(1)
0x902: Push((int) 13)
0x903: @@ add(Stack[-1])
0x904: Pop(1)
0x905: Push(Stack[-4])
0x906: IF (Stack[-1] == 0) GOTO 0x90e; Pop(1)

0x907: @ CreateStringVector(Stack[-1])
0x908: Pop(0)
0x909: Push("cot_lara@door1")
0x90a: @@ add(Stack[-1])
0x90b: Pop(1)
0x90c: @@ add(Stack[-1])
0x90d: Pop(0)
0x90e: Push(Stack[-3])
0x90f: IF (Stack[-1] == 0) GOTO 0x913; Pop(1)

0x910: Push("outdoor")
0x911: @@ add(Stack[-1])
0x912: Pop(1)
0x913: Push((int) 18)
0x914: @@ add(Stack[-1])
0x915: Pop(1)
0x916: Push(Stack[-4])
0x917: IF (Stack[-1] == 0) GOTO 0x91f; Pop(1)

0x918: @ CreateStringVector(Stack[-1])
0x919: Pop(0)
0x91a: Push("vagon_mishka@door1")
0x91b: @@ add(Stack[-1])
0x91c: Pop(1)
0x91d: @@ add(Stack[-1])
0x91e: Pop(0)
0x91f: Push(Stack[-3])
0x920: IF (Stack[-1] == 0) GOTO 0x924; Pop(1)

0x921: Push("outdoor")
0x922: @@ add(Stack[-1])
0x923: Pop(1)
0x924: Push((int) 19)
0x925: @@ add(Stack[-1])
0x926: Pop(1)
0x927: Push(Stack[-4])
0x928: IF (Stack[-1] == 0) GOTO 0x930; Pop(1)

0x929: @ CreateStringVector(Stack[-1])
0x92a: Pop(0)
0x92b: Push("house_vlad@door1")
0x92c: @@ add(Stack[-1])
0x92d: Pop(1)
0x92e: @@ add(Stack[-1])
0x92f: Pop(0)
0x930: Push(Stack[-3])
0x931: IF (Stack[-1] == 0) GOTO 0x935; Pop(1)

0x932: Push("outdoor")
0x933: @@ add(Stack[-1])
0x934: Pop(1)
0x935: Push((int) 20)
0x936: @@ add(Stack[-1])
0x937: Pop(1)
0x938: Push(Stack[-4])
0x939: IF (Stack[-1] == 0) GOTO 0x941; Pop(1)

0x93a: @ CreateStringVector(Stack[-1])
0x93b: Pop(0)
0x93c: Push("warehouse_notkin@door1")
0x93d: @@ add(Stack[-1])
0x93e: Pop(1)
0x93f: @@ add(Stack[-1])
0x940: Pop(0)
0x941: Push(Stack[-3])
0x942: IF (Stack[-1] == 0) GOTO 0x946; Pop(1)

0x943: Push("outdoor")
0x944: @@ add(Stack[-1])
0x945: Pop(1)
0x946: Push((int) 21)
0x947: @@ add(Stack[-1])
0x948: Pop(1)
0x949: Push(Stack[-4])
0x94a: IF (Stack[-1] == 0) GOTO 0x952; Pop(1)

0x94b: @ CreateStringVector(Stack[-1])
0x94c: Pop(0)
0x94d: Push("dt_house_1_04@door1")
0x94e: @@ add(Stack[-1])
0x94f: Pop(1)
0x950: @@ add(Stack[-1])
0x951: Pop(0)
0x952: Push(Stack[-3])
0x953: IF (Stack[-1] == 0) GOTO 0x957; Pop(1)

0x954: Push("outdoor")
0x955: @@ add(Stack[-1])
0x956: Pop(1)
0x957: Push((int) 22)
0x958: @@ add(Stack[-1])
0x959: Pop(1)
0x95a: Push(Stack[-4])
0x95b: IF (Stack[-1] == 0) GOTO 0x966; Pop(1)

0x95c: @ CreateStringVector(Stack[-1])
0x95d: Pop(0)
0x95e: Push("house_petr@door1")
0x95f: @@ add(Stack[-1])
0x960: Pop(1)
0x961: Push("house_petr@door2")
0x962: @@ add(Stack[-1])
0x963: Pop(1)
0x964: @@ add(Stack[-1])
0x965: Pop(0)
0x966: Push(Stack[-3])
0x967: IF (Stack[-1] == 0) GOTO 0x96b; Pop(1)

0x968: Push("outdoor")
0x969: @@ add(Stack[-1])
0x96a: Pop(1)
0x96b: Push((int) 24)
0x96c: @@ add(Stack[-1])
0x96d: Pop(1)
0x96e: Push(Stack[-4])
0x96f: IF (Stack[-1] == 0) GOTO 0x97a; Pop(1)

0x970: @ CreateStringVector(Stack[-1])
0x971: Pop(0)
0x972: Push("house_spi4ka@door1")
0x973: @@ add(Stack[-1])
0x974: Pop(1)
0x975: Push("house_spi4ka@door2")
0x976: @@ add(Stack[-1])
0x977: Pop(1)
0x978: @@ add(Stack[-1])
0x979: Pop(0)
0x97a: Push(Stack[-3])
0x97b: IF (Stack[-1] == 0) GOTO 0x97f; Pop(1)

0x97c: Push("outdoor")
0x97d: @@ add(Stack[-1])
0x97e: Pop(1)
0x97f: Push((int) 26)
0x980: @@ add(Stack[-1])
0x981: Pop(1)
0x982: Push(Stack[-4])
0x983: IF (Stack[-1] == 0) GOTO 0x98b; Pop(1)

0x984: @ CreateStringVector(Stack[-1])
0x985: Pop(0)
0x986: Push("cot_viktor@door1")
0x987: @@ add(Stack[-1])
0x988: Pop(1)
0x989: @@ add(Stack[-1])
0x98a: Pop(0)
0x98b: Push(Stack[-3])
0x98c: IF (Stack[-1] == 0) GOTO 0x990; Pop(1)

0x98d: Push("outdoor")
0x98e: @@ add(Stack[-1])
0x98f: Pop(1)
0x990: Push((int) 8)
0x991: @@ add(Stack[-1])
0x992: Pop(1)
0x993: Push(Stack[-4])
0x994: IF (Stack[-1] == 0) GOTO 0x999; Pop(1)

0x995: @ CreateStringVector(Stack[-1])
0x996: Pop(0)
0x997: @@ add(Stack[-1])
0x998: Pop(0)
0x999: Push(Stack[-3])
0x99a: IF (Stack[-1] == 0) GOTO 0x99e; Pop(1)

0x99b: Push("outdoor")
0x99c: @@ add(Stack[-1])
0x99d: Pop(1)
0x99e: Push((int) 14)
0x99f: @@ add(Stack[-1])
0x9a0: Pop(1)
0x9a1: Push(Stack[-4])
0x9a2: IF (Stack[-1] == 0) GOTO 0x9aa; Pop(1)

0x9a3: @ CreateStringVector(Stack[-1])
0x9a4: Pop(0)
0x9a5: Push("storojka@door1")
0x9a6: @@ add(Stack[-1])
0x9a7: Pop(1)
0x9a8: @@ add(Stack[-1])
0x9a9: Pop(0)
0x9aa: Push(Stack[-3])
0x9ab: IF (Stack[-1] == 0) GOTO 0x9af; Pop(1)

0x9ac: Push("outdoor")
0x9ad: @@ add(Stack[-1])
0x9ae: Pop(1)
0x9af: Push((int) 17)
0x9b0: @@ add(Stack[-1])
0x9b1: Pop(1)
0x9b2: Push(Stack[-4])
0x9b3: IF (Stack[-1] == 0) GOTO 0x9bb; Pop(1)

0x9b4: @ CreateStringVector(Stack[-1])
0x9b5: Pop(0)
0x9b6: Push("termitnik_mat@door1")
0x9b7: @@ add(Stack[-1])
0x9b8: Pop(1)
0x9b9: @@ add(Stack[-1])
0x9ba: Pop(0)
0x9bb: Push(Stack[-3])
0x9bc: IF (Stack[-1] == 0) GOTO 0x9c0; Pop(1)

0x9bd: Push("termitnik")
0x9be: @@ add(Stack[-1])
0x9bf: Pop(1)
0x9c0: Push((int) 16)
0x9c1: @@ add(Stack[-1])
0x9c2: Pop(1)
0x9c3: Push(Stack[-4])
0x9c4: IF (Stack[-1] == 0) GOTO 0x9c9; Pop(1)

0x9c5: @ CreateStringVector(Stack[-1])
0x9c6: Pop(0)
0x9c7: @@ add(Stack[-1])
0x9c8: Pop(0)
0x9c9: Push(Stack[-3])
0x9ca: IF (Stack[-1] == 0) GOTO 0x9ce; Pop(1)

0x9cb: Push("outdoor")
0x9cc: @@ add(Stack[-1])
0x9cd: Pop(1)
0x9ce: Push((int) 7)
0x9cf: @@ add(Stack[-1])
0x9d0: Pop(1)
0x9d1: Push(Stack[-4])
0x9d2: IF (Stack[-1] == 0) GOTO 0x9da; Pop(1)

0x9d3: @ CreateStringVector(Stack[-1])
0x9d4: Pop(0)
0x9d5: Push("warehouse_grif@door1")
0x9d6: @@ add(Stack[-1])
0x9d7: Pop(1)
0x9d8: @@ add(Stack[-1])
0x9d9: Pop(0)
0x9da: Push(Stack[-3])
0x9db: IF (Stack[-1] == 0) GOTO 0x9df; Pop(1)

0x9dc: Push("outdoor")
0x9dd: @@ add(Stack[-1])
0x9de: Pop(1)
0x9df: Push((int) 23)
0x9e0: @@ add(Stack[-1])
0x9e1: Pop(1)
0x9e2: Push(Stack[-4])
0x9e3: IF (Stack[-1] == 0) GOTO 0x9eb; Pop(1)

0x9e4: @ CreateStringVector(Stack[-1])
0x9e5: Pop(0)
0x9e6: Push("warehouse_rubin@door1")
0x9e7: @@ add(Stack[-1])
0x9e8: Pop(1)
0x9e9: @@ add(Stack[-1])
0x9ea: Pop(0)
0x9eb: Push(Stack[-3])
0x9ec: IF (Stack[-1] == 0) GOTO 0x9f0; Pop(1)

0x9ed: Push("outdoor")
0x9ee: @@ add(Stack[-1])
0x9ef: Pop(1)
0x9f0: Push((int) 5)
0x9f1: @@ add(Stack[-1])
0x9f2: Pop(1)
0x9f3: Push(Stack[-4])
0x9f4: IF (Stack[-1] == 0) GOTO 0x9fc; Pop(1)

0x9f5: @ CreateStringVector(Stack[-1])
0x9f6: Pop(0)
0x9f7: Push("cot_eva@door1")
0x9f8: @@ add(Stack[-1])
0x9f9: Pop(1)
0x9fa: @@ add(Stack[-1])
0x9fb: Pop(0)
0x9fc: Push(Stack[-3])
0x9fd: IF (Stack[-1] == 0) GOTO 0xa01; Pop(1)

0x9fe: Push("outdoor")
0x9ff: @@ add(Stack[-1])
0xa00: Pop(1)
0xa01: Push((int) 25)
0xa02: @@ add(Stack[-1])
0xa03: Pop(1)
0xa04: Push(Stack[-4])
0xa05: IF (Stack[-1] == 0) GOTO 0xa0a; Pop(1)

0xa06: @ CreateStringVector(Stack[-1])
0xa07: Pop(0)
0xa08: @@ add(Stack[-1])
0xa09: Pop(0)
0xa0a: Push(Stack[-3])
0xa0b: IF (Stack[-1] == 0) GOTO 0xa0f; Pop(1)

0xa0c: Push("outdoor")
0xa0d: @@ add(Stack[-1])
0xa0e: Pop(1)
0xa0f: Return(); Pop(2)

0xa10: Stack[-1] = 0
0xa11: PushEmpty(int, int)
0xa12: Push("vol_")
0xa13: Pop(1); Push(Stack[-1] + Stack[-4]);
0xa14: @ GetVariable(Stack[-1], Stack[-2])
0xa15: Pop(1)
0xa16: Push((int) 4)
0xa17: Pop(1); Push(Stack[-2] & Stack[-1]);
0xa18: Push((int) 0)
0xa19: Stack[-6] = Stack[-2] != Stack[-1]; Pop(2);
0xa1a: Return(); Pop(2)

0xa1b: PushEmpty(int, int)
0xa1c: Push("vol_")
0xa1d: Pop(1); Push(Stack[-1] + Stack[-4]);
0xa1e: @ GetVariable(Stack[-1], Stack[-2])
0xa1f: Pop(1)
0xa20: Push((int) 16)
0xa21: Pop(1); Push(Stack[-2] & Stack[-1]);
0xa22: Push((int) 0)
0xa23: Stack[-6] = Stack[-2] != Stack[-1]; Pop(2);
0xa24: Return(); Pop(2)

0xa25: PushEmpty()
0xa26: PushEmpty(int, int, int, float)
0xa27: Stack[-3] = (int) 539371
0xa28: Stack[-2] = (int) 539370
0xa29: Stack[-1] = Stack[-5]
0xa2a: Call2 0xa7a

0xa2b: Stack[-6] = Stack[-4]
0xa2c: Pop(4)
0xa2d: Return(); Pop(0)

0xa2e: PushEmpty()
0xa2f: PushEmpty(int, int, int, float)
0xa30: Stack[-3] = (int) 539373
0xa31: Stack[-2] = (int) 539372
0xa32: Stack[-1] = Stack[-5]
0xa33: Call2 0xa7a

0xa34: Stack[-6] = Stack[-4]
0xa35: Pop(4)
0xa36: Return(); Pop(0)

0xa37: PushEmpty(object, object)
0xa38: Push((int) 739)
0xa39: Push((int) 1)
0xa3a: Push((int) 539369)
0xa3b: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xa3c: Pop(3)
0xa3d: PushEmpty(bool, object, int)
0xa3e: Stack[-2] = Stack[-4]
0xa3f: Stack[-1] = (int) 738
0xa40: Call2 0xa5e

0xa41: Pop(3)
0xa42: Return(); Pop(2)

0xa43: Stack[-1] = 0
0xa44: PushEmpty(object, object)
0xa45: Push((int) 737)
0xa46: Push((int) 1)
0xa47: Push((int) 539367)
0xa48: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xa49: Pop(3)
0xa4a: PushEmpty(bool, object, int)
0xa4b: Stack[-2] = Stack[-4]
0xa4c: Stack[-1] = (int) 736
0xa4d: Call2 0xa5e

0xa4e: Pop(3)
0xa4f: Return(); Pop(2)

0xa50: Stack[-1] = 0
0xa51: PushEmpty(object, object)
0xa52: @ GetDiaryRoot(Stack[-1])
0xa53: Pop(0)
0xa54: Pop(0); Push((bool) Stack[-1] == 0)
0xa55: IF (Stack[-1] == 0) GOTO 0xa5b; Pop(1)

0xa56: Push("Can't retrieve diary root")
0xa57: @ Trace(Stack[-1])
0xa58: Pop(1)
0xa59: Stack[-3] = (bool) 0
0xa5a: Return(); Pop(2)

0xa5b: Stack[-3] = Stack[-1]
0xa5c: Return(); Pop(2)

0xa5d: Stack[-1] = 0
0xa5e: PushEmpty(object, object, int, object, object, int)
0xa5f: PushEmpty(object)
0xa60: Call2 0xa51

0xa61: Stack[-4] = Stack[-1]
0xa62: Pop(1)
0xa63: @@ Find(Stack[-7], Stack[-2])
0xa64: Pop(0)
0xa65: Pop(0); Push((bool) Stack[-2] == 0)
0xa66: IF (Stack[-1] == 0) GOTO 0xa6d; Pop(1)

0xa67: Push("Can't find diary parent with id: ")
0xa68: Pop(1); Push(Stack[-1] + Stack[-8]);
0xa69: @ Trace(Stack[-1])
0xa6a: Pop(1)
0xa6b: Stack[-9] = (bool) 0
0xa6c: Return(); Pop(6)

0xa6d: @@ AddChild(Stack[-8])
0xa6e: Pop(0)
0xa6f: Push((int) 7)
0xa70: @ SendWorldWndMessage(Stack[-1])
0xa71: Pop(1)
0xa72: @@ GetCategory(Stack[-1])
0xa73: Pop(0)
0xa74: @ SetDiarySection(Stack[-1])
0xa75: Pop(0)
0xa76: Stack[-9] = (bool) 0
0xa77: Return(); Pop(6)

0xa78: Stack[-2] = 0
0xa79: Stack[-3] = 0
0xa7a: PushEmpty(int, int)
0xa7b: @ AddMessage(Stack[-5], Stack[-4], Stack[-3], Stack[-1])
0xa7c: Pop(0)
0xa7d: Push((int) 6)
0xa7e: @ SendWorldWndMessage(Stack[-1])
0xa7f: Pop(1)
0xa80: Stack[-6] = Stack[-1]
0xa81: Return(); Pop(2)

0xa82: PushEmpty(object, object)
0xa83: @ FindActor(Stack[-1], Stack[-4])
0xa84: Pop(0)
0xa85: Pop(0); Push((bool) Stack[-1] == 0)
0xa86: IF (Stack[-1] == 0) GOTO 0xa8e; Pop(1)

0xa87: Push("Door ")
0xa88: Pop(1); Push(Stack[-1] + Stack[-5]);
0xa89: Push(" not found")
0xa8a: Pop(2); Push(Stack[-2] + Stack[-1]);
0xa8b: @ Trace(Stack[-1])
0xa8c: Pop(1)
0xa8d: GOTO 0xa91

0xa8e: Push("dlocked")
0xa8f: @@ SetProperty(Stack[-1], Stack[-4])
0xa90: Pop(1)
0xa91: Return(); Pop(2)

0xa92: Stack[-1] = 0
0xa93: PushEmpty(object, int, int, int, object, int, int, int)
0xa94: @ CreateIntVector(Stack[-4])
0xa95: Pop(0)
0xa96: PushEmpty(object, bool, int)
0xa97: Stack[-3] = Stack[-7]
0xa98: Stack[-2] = (bool) 0
0xa99: Stack[-1] = (int) -1
0xa9a: Call2 0x7d6

0xa9b: Pop(3)
0xa9c: @@ size(Stack[-3])
0xa9d: Pop(0)
0xa9e: Stack[-2] = (int) 0
0xa9f: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0xaa0: IF (Stack[-1] == 0) GOTO 0xab6; Pop(1)

0xaa1: @@ get(Stack[-1], Stack[-2])
0xaa2: Pop(0)
0xaa3: PushEmpty(bool)
0xaa4: Stack[-1] = (bool) 1
0xaa5: PushEmpty(bool, int)
0xaa6: Stack[-1] = Stack[-4]
0xaa7: Call2 0xa1b

0xaa8: Pop(1)
0xaa9: IF (Stack[-1] == 0) GOTO 0xab0; Pop(1)

0xaaa: PushEmpty(bool, int)
0xaab: Stack[-1] = Stack[-4]
0xaac: Call2 0xa11

0xaad: Pop(1)
0xaae: IF (Stack[-1] == 0) GOTO 0xab0; Pop(1)

0xaaf: Stack[-1] = (bool) 0
0xab0: IF (Stack[-1] == 0) GOTO 0xab3; Pop(1)

0xab1: Stack[-9] = (bool) 0
0xab2: Return(); Pop(8)

0xab3: Push((int) 1)
0xab4: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0xab5: GOTO 0xa9f

0xab6: Stack[-9] = (bool) 1
0xab7: Return(); Pop(8)

0xab8: Stack[-4] = 0
0xab9: PushEmpty(object, int, int, int, object, int, int, int)
0xaba: @ CreateIntVector(Stack[-4])
0xabb: Pop(0)
0xabc: PushEmpty(object, bool, int)
0xabd: Stack[-3] = Stack[-7]
0xabe: Stack[-2] = (bool) 0
0xabf: Stack[-1] = (int) -1
0xac0: Call2 0x7f7

0xac1: Pop(3)
0xac2: @@ size(Stack[-3])
0xac3: Pop(0)
0xac4: Stack[-2] = (int) 0
0xac5: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0xac6: IF (Stack[-1] == 0) GOTO 0xadc; Pop(1)

0xac7: @@ get(Stack[-1], Stack[-2])
0xac8: Pop(0)
0xac9: PushEmpty(bool)
0xaca: Stack[-1] = (bool) 1
0xacb: PushEmpty(bool, int)
0xacc: Stack[-1] = Stack[-4]
0xacd: Call2 0xa1b

0xace: Pop(1)
0xacf: IF (Stack[-1] == 0) GOTO 0xad6; Pop(1)

0xad0: PushEmpty(bool, int)
0xad1: Stack[-1] = Stack[-4]
0xad2: Call2 0xa11

0xad3: Pop(1)
0xad4: IF (Stack[-1] == 0) GOTO 0xad6; Pop(1)

0xad5: Stack[-1] = (bool) 0
0xad6: IF (Stack[-1] == 0) GOTO 0xad9; Pop(1)

0xad7: Stack[-9] = (bool) 0
0xad8: Return(); Pop(8)

0xad9: Push((int) 1)
0xada: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0xadb: GOTO 0xac5

0xadc: Stack[-9] = (bool) 1
0xadd: Return(); Pop(8)

0xade: Stack[-4] = 0
0xadf: PushEmpty(object, int, int, int, object, int, int, int)
0xae0: @ CreateIntVector(Stack[-4])
0xae1: Pop(0)
0xae2: PushEmpty(object, bool, int)
0xae3: Stack[-3] = Stack[-7]
0xae4: Stack[-2] = (bool) 0
0xae5: Stack[-1] = (int) -1
0xae6: Call2 0x848

0xae7: Pop(3)
0xae8: @@ size(Stack[-3])
0xae9: Pop(0)
0xaea: Stack[-2] = (int) 0
0xaeb: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0xaec: IF (Stack[-1] == 0) GOTO 0xb02; Pop(1)

0xaed: @@ get(Stack[-1], Stack[-2])
0xaee: Pop(0)
0xaef: PushEmpty(bool)
0xaf0: Stack[-1] = (bool) 1
0xaf1: PushEmpty(bool, int)
0xaf2: Stack[-1] = Stack[-4]
0xaf3: Call2 0xa1b

0xaf4: Pop(1)
0xaf5: IF (Stack[-1] == 0) GOTO 0xafc; Pop(1)

0xaf6: PushEmpty(bool, int)
0xaf7: Stack[-1] = Stack[-4]
0xaf8: Call2 0xa11

0xaf9: Pop(1)
0xafa: IF (Stack[-1] == 0) GOTO 0xafc; Pop(1)

0xafb: Stack[-1] = (bool) 0
0xafc: IF (Stack[-1] == 0) GOTO 0xaff; Pop(1)

0xafd: Stack[-9] = (bool) 0
0xafe: Return(); Pop(8)

0xaff: Push((int) 1)
0xb00: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0xb01: GOTO 0xaeb

0xb02: Stack[-9] = (bool) 1
0xb03: Return(); Pop(8)

0xb04: Stack[-4] = 0
0xb05: PushEmpty(int, int)
0xb06: Stack[-1] = (int) 0
0xb07: PushEmpty(bool)
0xb08: Call2 0xadf

0xb09: Pop(0)
0xb0a: IF (Stack[-1] == 0) GOTO 0xb0d; Pop(1)

0xb0b: Push((int) 1)
0xb0c: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0xb0d: PushEmpty(bool)
0xb0e: Call2 0xab9

0xb0f: Pop(0)
0xb10: IF (Stack[-1] == 0) GOTO 0xb13; Pop(1)

0xb11: Push((int) 1)
0xb12: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0xb13: PushEmpty(bool)
0xb14: Call2 0xa93

0xb15: Pop(0)
0xb16: IF (Stack[-1] == 0) GOTO 0xb19; Pop(1)

0xb17: Push((int) 1)
0xb18: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0xb19: Push((int) 2)
0xb1a: Stack[-4] = Stack[-2] >= Stack[-1]; Pop(1);
0xb1b: Return(); Pop(2)

