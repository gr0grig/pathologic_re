GlobalVarCount = 0

Strings:
	quest_b12_01
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
	karlik
	lisa
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

RunOp = 0x5d
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object, object, object, object, object, object, int, bool, bool, bool, bool, bool) Params = 0
		EVENT_26 Op = 0xd1 Vars = (string, string)


0x0: PushEmpty()
0x1: PushEmpty(int, float)
0x2: Stack[-1] = Stack[-3]
0x3: Call2 0xa3f

0x4: Pop(2)
0x5: Return(); Pop(0)

0x6: PushEmpty()
0x7: PushEmpty(int, float)
0x8: Stack[-1] = Stack[-3]
0x9: Call2 0xa36

0xa: Pop(2)
0xb: PushEmpty(bool, string, string)
0xc: Stack[-2] = "quest_b12_01"
0xd: Stack[-1] = "init_hidden_room"
0xe: Call2 0x45b

0xf: Pop(3)
0x10: Return(); Pop(0)

0x11: PushEmpty()
0x12: Call2 0xa55

0x13: Pop(0)
0x14: Return(); Pop(0)

0x15: PushEmpty()
0x16: Call2 0xa48

0x17: Pop(0)
0x18: Return(); Pop(0)

0x19: Return(); Pop(0)

0x1a: PushEmpty()
0x1b: PushEmpty(bool, int)
0x1c: Stack[-1] = Stack[-3]
0x1d: Call2 0x7f1

0x1e: Stack[-4] = Stack[-2]
0x1f: Pop(2)
0x20: Return(); Pop(0)

0x21: PushEmpty(object, object, int, object, object, int)
0x22: @ CreateIntVector(Stack[-3])
0x23: Pop(0)
0x24: PushEmpty(object, bool, int)
0x25: Stack[-3] = Stack[-6]
0x26: Stack[-2] = (bool) 1
0x27: Stack[-1] = (int) 1
0x28: Call2 0x817

0x29: Pop(3)
0x2a: @ CreateIntVector(Stack[-2])
0x2b: Pop(0)
0x2c: PushEmpty(object, bool, int)
0x2d: Stack[-3] = Stack[-5]
0x2e: Stack[-2] = (bool) 1
0x2f: Stack[-1] = (int) 1
0x30: Call2 0x838

0x31: Pop(3)
0x32: PushEmpty(object, bool, int)
0x33: Stack[-3] = Stack[-5]
0x34: Stack[-2] = (bool) 1
0x35: Stack[-1] = (int) 1
0x36: Call2 0x859

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
0x47: PushEmpty(bool)
0x48: Stack[-1] = (bool) 1
0x49: Push((int) 1)
0x4a: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x4b: IF (Stack[-1] == 0) GOTO 0x50; Pop(1)

0x4c: Push((int) 11)
0x4d: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x4e: IF (Stack[-1] == 0) GOTO 0x50; Pop(1)

0x4f: Stack[-1] = (bool) 0
0x50: IF (Stack[-1] == 0) GOTO 0x53; Pop(1)

0x51: Stack[-2] = (int) 0
0x52: Return(); Pop(0)

0x53: Stack[-2] = (int) 1
0x54: Return(); Pop(0)

0x55: PushEmpty()
0x56: Push((int) 5)
0x57: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x58: IF (Stack[-1] == 0) GOTO 0x5b; Pop(1)

0x59: Stack[-2] = (int) 0
0x5a: Return(); Pop(0)

0x5b: Stack[-2] = (int) 1
0x5c: Return(); Pop(0)

0x5d: PushEmpty()
0x5e: Call2 0x295

0x5f: Pop(0)
0x60: Stack[7 + Tasks[-1].StackPointer] = (bool)0
0x61: Stack[8 + Tasks[-1].StackPointer] = (bool)0
0x62: @ Hold()
0x63: Pop(0)
0x64: GOTO 0x62

0x65: Return(); Pop(0)

0x66: PushEmpty(bool)
0x67: Stack[-1] = (bool) 0
0x68: PushEmpty(bool)
0x69: Stack[-1] = (bool) 0
0x6a: PushEmpty(bool)
0x6b: Stack[-1] = (bool) 0
0x6c: Pop(0); Push((bool) Stack[8 + Tasks[-1].StackPointer] == 0)
0x6d: IF (Stack[-1] == 0) GOTO 0x74; Pop(1)

0x6e: PushEmpty(bool, int)
0x6f: Stack[-1] = (int) 12
0x70: Call2 0x47d

0x71: Pop(1)
0x72: IF (Stack[-1] == 0) GOTO 0x74; Pop(1)

0x73: Stack[-1] = (bool) 1
0x74: IF (Stack[-1] == 0) GOTO 0x7a; Pop(1)

0x75: PushEmpty(bool)
0x76: Call2 0xb16

0x77: Pop(0)
0x78: IF (Stack[-1] == 0) GOTO 0x7a; Pop(1)

0x79: Stack[-1] = (bool) 1
0x7a: IF (Stack[-1] == 0) GOTO 0x82; Pop(1)

0x7b: PushEmpty(int)
0x7c: Call2 0x475

0x7d: Pop(0)
0x7e: Push((int) 8)
0x7f: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x80: IF (Stack[-1] == 0) GOTO 0x82; Pop(1)

0x81: Stack[-1] = (bool) 1
0x82: IF (Stack[-1] == 0) GOTO 0x8b; Pop(1)

0x83: PushEmpty(float)
0x84: PushEmpty(float)
0x85: Call2 0x467

0x86: Stack[-2] = Stack[-1]
0x87: Pop(1)
0x88: Call2 0x6

0x89: Pop(1)
0x8a: Stack[8 + Tasks[-1].StackPointer] = (bool)1
0x8b: PushEmpty(bool)
0x8c: Stack[-1] = (bool) 0
0x8d: PushEmpty(bool)
0x8e: Stack[-1] = (bool) 0
0x8f: Pop(0); Push((bool) Stack[9 + Tasks[-1].StackPointer] == 0)
0x90: IF (Stack[-1] == 0) GOTO 0x97; Pop(1)

0x91: PushEmpty(bool, int)
0x92: Stack[-1] = (int) 12
0x93: Call2 0x47d

0x94: Pop(1)
0x95: IF (Stack[-1] == 0) GOTO 0x97; Pop(1)

0x96: Stack[-1] = (bool) 1
0x97: IF (Stack[-1] == 0) GOTO 0x9d; Pop(1)

0x98: PushEmpty(bool)
0x99: Call2 0xaca

0x9a: Pop(0)
0x9b: IF (Stack[-1] == 0) GOTO 0x9d; Pop(1)

0x9c: Stack[-1] = (bool) 1
0x9d: IF (Stack[-1] == 0) GOTO 0xa2; Pop(1)

0x9e: Stack[9 + Tasks[-1].StackPointer] = (bool)1
0x9f: PushEmpty()
0xa0: Call2 0x15

0xa1: Pop(0)
0xa2: PushEmpty(bool)
0xa3: Stack[-1] = (bool) 0
0xa4: PushEmpty(bool)
0xa5: Stack[-1] = (bool) 0
0xa6: Pop(0); Push((bool) Stack[10 + Tasks[-1].StackPointer] == 0)
0xa7: IF (Stack[-1] == 0) GOTO 0xae; Pop(1)

0xa8: PushEmpty(bool, int)
0xa9: Stack[-1] = (int) 12
0xaa: Call2 0x47d

0xab: Pop(1)
0xac: IF (Stack[-1] == 0) GOTO 0xae; Pop(1)

0xad: Stack[-1] = (bool) 1
0xae: IF (Stack[-1] == 0) GOTO 0xb4; Pop(1)

0xaf: PushEmpty(bool)
0xb0: Call2 0xaa4

0xb1: Pop(0)
0xb2: IF (Stack[-1] == 0) GOTO 0xb4; Pop(1)

0xb3: Stack[-1] = (bool) 1
0xb4: IF (Stack[-1] == 0) GOTO 0xb9; Pop(1)

0xb5: Stack[10 + Tasks[-1].StackPointer] = (bool)1
0xb6: PushEmpty()
0xb7: Call2 0x19

0xb8: Pop(0)
0xb9: PushEmpty(bool)
0xba: Stack[-1] = (bool) 0
0xbb: PushEmpty(bool)
0xbc: Stack[-1] = (bool) 0
0xbd: Pop(0); Push((bool) Stack[11 + Tasks[-1].StackPointer] == 0)
0xbe: IF (Stack[-1] == 0) GOTO 0xc5; Pop(1)

0xbf: PushEmpty(bool, int)
0xc0: Stack[-1] = (int) 12
0xc1: Call2 0x47d

0xc2: Pop(1)
0xc3: IF (Stack[-1] == 0) GOTO 0xc5; Pop(1)

0xc4: Stack[-1] = (bool) 1
0xc5: IF (Stack[-1] == 0) GOTO 0xcb; Pop(1)

0xc6: PushEmpty(bool)
0xc7: Call2 0xaf0

0xc8: Pop(0)
0xc9: IF (Stack[-1] == 0) GOTO 0xcb; Pop(1)

0xca: Stack[-1] = (bool) 1
0xcb: IF (Stack[-1] == 0) GOTO 0xd0; Pop(1)

0xcc: Stack[11 + Tasks[-1].StackPointer] = (bool)1
0xcd: PushEmpty()
0xce: Call2 0x11

0xcf: Pop(0)
0xd0: Return(); Pop(0)

0xd1: PushEmpty(int, int)
0xd2: @ Trace(Stack[-4])
0xd3: Pop(0)
0xd4: Push("rescue")
0xd5: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0xd6: IF (Stack[-1] == 0) GOTO 0xe7; Pop(1)

0xd7: PushEmpty(int)
0xd8: PushEmpty(int, int)
0xd9: PushEmpty(int, string)
0xda: Stack[-1] = Stack[-8]
0xdb: Call2 0x483

0xdc: Stack[-3] = Stack[-2]
0xdd: Pop(2)
0xde: Call2 0x2de

0xdf: Stack[-3] = Stack[-2]
0xe0: Pop(2)
0xe1: Call2 0x3b7

0xe2: Pop(1)
0xe3: PushEmpty()
0xe4: Call2 0x66

0xe5: Pop(0)
0xe6: GOTO 0x166

0xe7: Push("rescue_oneday")
0xe8: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0xe9: IF (Stack[-1] == 0) GOTO 0xf7; Pop(1)

0xea: PushEmpty(int)
0xeb: PushEmpty(int, int)
0xec: PushEmpty(int, string)
0xed: Stack[-1] = Stack[-8]
0xee: Call2 0x483

0xef: Stack[-3] = Stack[-2]
0xf0: Pop(2)
0xf1: Call2 0x2de

0xf2: Stack[-3] = Stack[-2]
0xf3: Pop(2)
0xf4: Call2 0x371

0xf5: Pop(1)
0xf6: GOTO 0x166

0xf7: Push("rescue_locked")
0xf8: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0xf9: IF (Stack[-1] == 0) GOTO 0x11d; Pop(1)

0xfa: Stack[-1] = (int) 0
0xfb: PushEmpty(int)
0xfc: Call2 0x2d9

0xfd: Pop(0)
0xfe: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xff: IF (Stack[-1] == 0) GOTO 0x119; Pop(1)

0x100: PushEmpty(bool)
0x101: Stack[-1] = (bool) 0
0x102: PushEmpty(bool, int)
0x103: Stack[-1] = Stack[-4]
0x104: Call2 0x307

0x105: Pop(1)
0x106: IF (Stack[-1] == 0) GOTO 0x111; Pop(1)

0x107: PushEmpty(bool, int)
0x108: PushEmpty(int, int)
0x109: Stack[-1] = Stack[-6]
0x10a: Call2 0x2f0

0x10b: Stack[-3] = Stack[-2]
0x10c: Pop(2)
0x10d: Call2 0x1a

0x10e: Pop(1)
0x10f: IF (Stack[-1] == 0) GOTO 0x111; Pop(1)

0x110: Stack[-1] = (bool) 1
0x111: IF (Stack[-1] == 0) GOTO 0x116; Pop(1)

0x112: PushEmpty(int)
0x113: Stack[-1] = Stack[-2]
0x114: Call2 0x3b7

0x115: Pop(1)
0x116: Push((int) 1)
0x117: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x118: GOTO 0xfb

0x119: PushEmpty()
0x11a: Call2 0x66

0x11b: Pop(0)
0x11c: GOTO 0x166

0x11d: Push("kill")
0x11e: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x11f: IF (Stack[-1] == 0) GOTO 0x12d; Pop(1)

0x120: PushEmpty(int)
0x121: PushEmpty(int, int)
0x122: PushEmpty(int, string)
0x123: Stack[-1] = Stack[-8]
0x124: Call2 0x483

0x125: Stack[-3] = Stack[-2]
0x126: Pop(2)
0x127: Call2 0x2de

0x128: Stack[-3] = Stack[-2]
0x129: Pop(2)
0x12a: Call2 0x3ea

0x12b: Pop(1)
0x12c: GOTO 0x166

0x12d: Push("disease")
0x12e: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x12f: IF (Stack[-1] == 0) GOTO 0x13d; Pop(1)

0x130: PushEmpty(int)
0x131: PushEmpty(int, int)
0x132: PushEmpty(int, string)
0x133: Stack[-1] = Stack[-8]
0x134: Call2 0x483

0x135: Stack[-3] = Stack[-2]
0x136: Pop(2)
0x137: Call2 0x2de

0x138: Stack[-3] = Stack[-2]
0x139: Pop(2)
0x13a: Call2 0x32b

0x13b: Pop(1)
0x13c: GOTO 0x166

0x13d: Push("update")
0x13e: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x13f: IF (Stack[-1] == 0) GOTO 0x144; Pop(1)

0x140: PushEmpty()
0x141: Call2 0x1b1

0x142: Pop(0)
0x143: GOTO 0x166

0x144: Push("cleanup")
0x145: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x146: IF (Stack[-1] == 0) GOTO 0x14b; Pop(1)

0x147: PushEmpty()
0x148: Call2 0x27f

0x149: Pop(0)
0x14a: GOTO 0x166

0x14b: Push("childs_letter")
0x14c: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x14d: IF (Stack[-1] == 0) GOTO 0x159; Pop(1)

0x14e: Pop(0); Push((bool) Stack[8 + Tasks[-1].StackPointer] == 0)
0x14f: IF (Stack[-1] == 0) GOTO 0x158; Pop(1)

0x150: PushEmpty(float)
0x151: PushEmpty(float)
0x152: Call2 0x467

0x153: Stack[-2] = Stack[-1]
0x154: Pop(1)
0x155: Call2 0x6

0x156: Pop(1)
0x157: Stack[8 + Tasks[-1].StackPointer] = (bool)1
0x158: GOTO 0x166

0x159: Push("theater_letter")
0x15a: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x15b: IF (Stack[-1] == 0) GOTO 0x166; Pop(1)

0x15c: Pop(0); Push((bool) Stack[7 + Tasks[-1].StackPointer] == 0)
0x15d: IF (Stack[-1] == 0) GOTO 0x166; Pop(1)

0x15e: PushEmpty(float)
0x15f: PushEmpty(float)
0x160: Call2 0x467

0x161: Stack[-2] = Stack[-1]
0x162: Pop(1)
0x163: Call2 0x0

0x164: Pop(1)
0x165: Stack[7 + Tasks[-1].StackPointer] = (bool)1
0x166: Return(); Pop(2)

0x167: PushEmpty(int, int, int, int)
0x168: Stack[-2] = (int) 0
0x169: Pop(0); Push((bool) Stack[-2] < Stack[-7])
0x16a: IF (Stack[-1] == 0) GOTO 0x173; Pop(1)

0x16b: PushEmpty(int, int, bool)
0x16c: Stack[-2] = Stack[-8]
0x16d: Stack[-1] = (bool) 1
0x16e: Call2 0x17f

0x16f: Pop(3)
0x170: Push((int) 1)
0x171: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x172: GOTO 0x169

0x173: Stack[-1] = (int) 0
0x174: Pop(0); Push((bool) Stack[-1] < Stack[-6])
0x175: IF (Stack[-1] == 0) GOTO 0x17e; Pop(1)

0x176: PushEmpty(int, int, bool)
0x177: Stack[-2] = Stack[-8]
0x178: Stack[-1] = (bool) 0
0x179: Call2 0x17f

0x17a: Pop(3)
0x17b: Push((int) 1)
0x17c: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x17d: GOTO 0x174

0x17e: Return(); Pop(4)

0x17f: PushEmpty(object, int, int, int, int, int, int, object, int, int, int, int, int, int)
0x180: Push(Stack[-15])
0x181: IF (Stack[-1] == 0) GOTO 0x185; Pop(1)

0x182: @@ get(Stack[-7], Stack[-16])
0x183: Pop(0)
0x184: GOTO 0x187

0x185: @@ get(Stack[-7], Stack[-16])
0x186: Pop(0)
0x187: @@ size(Stack[-6])
0x188: Pop(0)
0x189: Push((int) 0)
0x18a: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x18b: IF (Stack[-1] == 0) GOTO 0x18e; Pop(1)

0x18c: Stack[-17] = (int) -1
0x18d: Return(); Pop(14)

0x18e: Stack[-5] = (int) 0
0x18f: Push((int) 1)
0x190: Pop(1); Push((bool) Stack[-7] > Stack[-1])
0x191: IF (Stack[-1] == 0) GOTO 0x194; Pop(1)

0x192: @ irand(Stack[-5], Stack[-6])
0x193: Pop(0)
0x194: Stack[-4] = (int) 0
0x195: Pop(0); Push((bool) Stack[-4] < Stack[-6])
0x196: IF (Stack[-1] == 0) GOTO 0x1ae; Pop(1)

0x197: Pop(0); Push(Stack[-4] + Stack[-5]);
0x198: Stack[-4] = Stack[-1] % Stack[-7]; Pop(1);
0x199: @@ get(Stack[-2], Stack[-3])
0x19a: Pop(0)
0x19b: PushEmpty(int, int)
0x19c: Stack[-1] = Stack[-4]
0x19d: Call2 0x2de

0x19e: Stack[-3] = Stack[-2]
0x19f: Pop(2)
0x1a0: PushEmpty(bool, int)
0x1a1: Stack[-1] = Stack[-3]
0x1a2: Call2 0x313

0x1a3: Pop(1)
0x1a4: IF (Stack[-1] == 0) GOTO 0x1ab; Pop(1)

0x1a5: PushEmpty(int)
0x1a6: Stack[-1] = Stack[-2]
0x1a7: Call2 0x437

0x1a8: Pop(1)
0x1a9: Stack[-17] = Stack[-1]
0x1aa: Return(); Pop(14)

0x1ab: Push((int) 1)
0x1ac: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x1ad: GOTO 0x195

0x1ae: Stack[-17] = (int) -1
0x1af: Return(); Pop(14)

0x1b0: Stack[-7] = 0
0x1b1: PushEmpty(int, int, object, int, int, string, int, int, int, int, int, int, int, int, object, int, int, string, int, int, int, int, int, int)
0x1b2: Push((int) 1)
0x1b3: @ Trace(Stack[-1])
0x1b4: Pop(1)
0x1b5: Stack[-12] = (int) 0
0x1b6: PushEmpty(int)
0x1b7: Call2 0x2d9

0x1b8: Pop(0)
0x1b9: Pop(1); Push((bool) Stack[-13] < Stack[-1])
0x1ba: IF (Stack[-1] == 0) GOTO 0x210; Pop(1)

0x1bb: Push((int) 2)
0x1bc: @ Trace(Stack[-1])
0x1bd: Pop(1)
0x1be: PushEmpty(int, int)
0x1bf: Stack[-1] = Stack[-14]
0x1c0: Call2 0x2f0

0x1c1: Stack[-13] = Stack[-2]
0x1c2: Pop(2)
0x1c3: Push((int) 3)
0x1c4: @ Trace(Stack[-1])
0x1c5: Pop(1)
0x1c6: PushEmpty(bool, int)
0x1c7: Stack[-1] = Stack[-14]
0x1c8: Call2 0x307

0x1c9: Pop(1)
0x1ca: IF (Stack[-1] == 0) GOTO 0x1d2; Pop(1)

0x1cb: Push((int) 4)
0x1cc: @ Trace(Stack[-1])
0x1cd: Pop(1)
0x1ce: PushEmpty(int)
0x1cf: Stack[-1] = Stack[-13]
0x1d0: Call2 0x32b

0x1d1: Pop(1)
0x1d2: Push((int) 5)
0x1d3: @ Trace(Stack[-1])
0x1d4: Pop(1)
0x1d5: PushEmpty(bool, int)
0x1d6: Stack[-1] = Stack[-14]
0x1d7: Call2 0x2fb

0x1d8: Pop(1)
0x1d9: IF (Stack[-1] == 0) GOTO 0x1e1; Pop(1)

0x1da: Push((int) 6)
0x1db: @ Trace(Stack[-1])
0x1dc: Pop(1)
0x1dd: PushEmpty(int)
0x1de: Stack[-1] = Stack[-13]
0x1df: Call2 0x393

0x1e0: Pop(1)
0x1e1: Push((int) 7)
0x1e2: @ Trace(Stack[-1])
0x1e3: Pop(1)
0x1e4: PushEmpty(bool, int)
0x1e5: Stack[-1] = Stack[-14]
0x1e6: Call2 0x31f

0x1e7: Pop(1)
0x1e8: IF (Stack[-1] == 0) GOTO 0x20a; Pop(1)

0x1e9: Push((int) 8)
0x1ea: @ Trace(Stack[-1])
0x1eb: Pop(1)
0x1ec: @@ get(Stack[-10], Stack[-12])
0x1ed: Pop(0)
0x1ee: Push((int) 9)
0x1ef: @ Trace(Stack[-1])
0x1f0: Pop(1)
0x1f1: @@ size(Stack[-9])
0x1f2: Pop(0)
0x1f3: Push((int) 10)
0x1f4: @ Trace(Stack[-1])
0x1f5: Pop(1)
0x1f6: Stack[-8] = (int) 0
0x1f7: Pop(0); Push((bool) Stack[-8] < Stack[-9])
0x1f8: IF (Stack[-1] == 0) GOTO 0x206; Pop(1)

0x1f9: Push((int) 11)
0x1fa: @ Trace(Stack[-1])
0x1fb: Pop(1)
0x1fc: @@ get(Stack[-7], Stack[-8])
0x1fd: Pop(0)
0x1fe: PushEmpty(string, int)
0x1ff: Stack[-2] = Stack[-9]
0x200: Stack[-1] = (int) 1
0x201: Call2 0xa93

0x202: Pop(2)
0x203: Push((int) 1)
0x204: Stack[-9] = Stack[-9] + Stack[-1]; Pop(1);
0x205: GOTO 0x1f7

0x206: Push((int) 12)
0x207: @ Trace(Stack[-1])
0x208: Pop(1)
0x209: Stack[-10] = 0
0x20a: Push((int) 13)
0x20b: @ Trace(Stack[-1])
0x20c: Pop(1)
0x20d: Push((int) 1)
0x20e: Stack[-13] = Stack[-13] + Stack[-1]; Pop(1);
0x20f: GOTO 0x1b6

0x210: Push((int) 14)
0x211: @ Trace(Stack[-1])
0x212: Pop(1)
0x213: Push((int) 1)
0x214: Stack[6 + Tasks[-1].StackPointer] = Stack[6 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x215: PushEmpty(int, int, int)
0x216: PushEmpty(int, int)
0x217: Stack[-1] = Stack[6 + Tasks[-1].StackPointer]
0x218: Call2 0x46

0x219: Stack[-5] = Stack[-2]
0x21a: Pop(2)
0x21b: PushEmpty(int, int)
0x21c: Stack[-1] = Stack[6 + Tasks[-1].StackPointer]
0x21d: Call2 0x55

0x21e: Stack[-4] = Stack[-2]
0x21f: Pop(2)
0x220: Stack[-1] = Stack[6 + Tasks[-1].StackPointer]
0x221: Call2 0x167

0x222: Pop(3)
0x223: Push((int) 15)
0x224: @ Trace(Stack[-1])
0x225: Pop(1)
0x226: Stack[-6] = (int) 0
0x227: Stack[-5] = (int) 0
0x228: PushEmpty(int)
0x229: Call2 0x2d9

0x22a: Pop(0)
0x22b: Pop(1); Push((bool) Stack[-6] < Stack[-1])
0x22c: IF (Stack[-1] == 0) GOTO 0x24d; Pop(1)

0x22d: Push((int) 16)
0x22e: @ Trace(Stack[-1])
0x22f: Pop(1)
0x230: PushEmpty(int, int)
0x231: Stack[-1] = Stack[-7]
0x232: Call2 0x2f0

0x233: Stack[-6] = Stack[-2]
0x234: Pop(2)
0x235: Push((int) 17)
0x236: @ Trace(Stack[-1])
0x237: Pop(1)
0x238: PushEmpty(bool, int)
0x239: Stack[-1] = Stack[-7]
0x23a: Call2 0x307

0x23b: Pop(1)
0x23c: IF (Stack[-1] == 0) GOTO 0x24a; Pop(1)

0x23d: Push((int) 18)
0x23e: @ Trace(Stack[-1])
0x23f: Pop(1)
0x240: Push("Volonteer : ")
0x241: PushEmpty(string, int)
0x242: Stack[-1] = Stack[-7]
0x243: Call2 0x63b

0x244: Pop(1)
0x245: Pop(2); Push(Stack[-2] + Stack[-1]);
0x246: @ Trace(Stack[-1])
0x247: Pop(1)
0x248: Push((int) 1)
0x249: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x24a: Push((int) 1)
0x24b: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x24c: GOTO 0x228

0x24d: Push((int) 19)
0x24e: @ Trace(Stack[-1])
0x24f: Pop(1)
0x250: Stack[-3] = (int) 0
0x251: Stack[-2] = (int) 0
0x252: PushEmpty(int)
0x253: Call2 0x2d9

0x254: Pop(0)
0x255: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x256: IF (Stack[-1] == 0) GOTO 0x274; Pop(1)

0x257: Push((int) 20)
0x258: @ Trace(Stack[-1])
0x259: Pop(1)
0x25a: PushEmpty(int, int)
0x25b: Stack[-1] = Stack[-4]
0x25c: Call2 0x2f0

0x25d: Stack[-3] = Stack[-2]
0x25e: Pop(2)
0x25f: PushEmpty(bool, int)
0x260: Stack[-1] = Stack[-4]
0x261: Call2 0x31f

0x262: Pop(1)
0x263: IF (Stack[-1] == 0) GOTO 0x271; Pop(1)

0x264: Push((int) 21)
0x265: @ Trace(Stack[-1])
0x266: Pop(1)
0x267: Push((int) 1)
0x268: Stack[-4] = Stack[-4] + Stack[-1]; Pop(1);
0x269: Push("Diseased volonteer : ")
0x26a: PushEmpty(string, int)
0x26b: Stack[-1] = Stack[-4]
0x26c: Call2 0x63b

0x26d: Pop(1)
0x26e: Pop(2); Push(Stack[-2] + Stack[-1]);
0x26f: @ Trace(Stack[-1])
0x270: Pop(1)
0x271: Push((int) 1)
0x272: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x273: GOTO 0x252

0x274: Push((int) 22)
0x275: @ Trace(Stack[-1])
0x276: Pop(1)
0x277: Push("Today volonteers: ")
0x278: Pop(1); Push(Stack[-1] + Stack[-7]);
0x279: Push(", diseased: ")
0x27a: Pop(2); Push(Stack[-2] + Stack[-1]);
0x27b: Pop(1); Push(Stack[-1] + Stack[-4]);
0x27c: @ Trace(Stack[-1])
0x27d: Pop(1)
0x27e: Return(); Pop(24)

0x27f: PushEmpty(int, object, int, object)
0x280: EventDisable(26)
0x281: Push("Volonteers Cleanup...")
0x282: @ Trace(Stack[-1])
0x283: Pop(1)
0x284: Stack[-2] = (int) 0
0x285: PushEmpty(int)
0x286: Call2 0x2d9

0x287: Pop(0)
0x288: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x289: IF (Stack[-1] == 0) GOTO 0x294; Pop(1)

0x28a: @@ get(Stack[-1], Stack[-2])
0x28b: Pop(0)
0x28c: Pop(0); Push(( Stack[-1] != 0 )
0x28d: IF (Stack[-1] == 0) GOTO 0x290; Pop(1)

0x28e: @@ Remove()
0x28f: Pop(0)
0x290: Stack[-1] = 0
0x291: Push((int) 1)
0x292: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x293: GOTO 0x285

0x294: Return(); Pop(4)

0x295: PushEmpty(object, object, object, object, object, object, int, object, object, object, object, object, object, object, int, object)
0x296: Push("Volonteers Init...")
0x297: @ Trace(Stack[-1])
0x298: Pop(1)
0x299: @ CreateIntVector(Stack[-8])
0x29a: Pop(0)
0x29b: @ CreateObjectVector(Stack[-7])
0x29c: Pop(0)
0x29d: @ CreateStringVector(Stack[-6])
0x29e: Pop(0)
0x29f: PushEmpty(object, object, object)
0x2a0: Stack[-3] = Stack[-11]
0x2a1: Stack[-2] = Stack[-10]
0x2a2: Stack[-1] = Stack[-9]
0x2a3: Call2 0x879

0x2a4: Pop(3)
0x2a5: Stack[0 + Tasks[-1].StackPointer] = Stack[-8]
0x2a6: Stack[4 + Tasks[-1].StackPointer] = Stack[-7]
0x2a7: Stack[5 + Tasks[-1].StackPointer] = Stack[-6]
0x2a8: @ CreateObjectVector(Stack[-5])
0x2a9: Pop(0)
0x2aa: @ CreateObjectVector(Stack[-4])
0x2ab: Pop(0)
0x2ac: PushEmpty(object, object)
0x2ad: Stack[-2] = Stack[-7]
0x2ae: Stack[-1] = Stack[-6]
0x2af: Call2 0x21

0x2b0: Pop(2)
0x2b1: Stack[1 + Tasks[-1].StackPointer] = Stack[-5]
0x2b2: Stack[2 + Tasks[-1].StackPointer] = Stack[-4]
0x2b3: @ CreateObjectVector(Stack[-3])
0x2b4: Pop(0)
0x2b5: Stack[3 + Tasks[-1].StackPointer] = Stack[-3]
0x2b6: Stack[-2] = (int) 0
0x2b7: PushEmpty(int)
0x2b8: Call2 0x2d9

0x2b9: Pop(0)
0x2ba: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x2bb: IF (Stack[-1] == 0) GOTO 0x2ca; Pop(1)

0x2bc: PushEmpty(string, int)
0x2bd: Stack[-1] = Stack[-4]
0x2be: Call2 0x2f5

0x2bf: Pop(1)
0x2c0: Push((int) 0)
0x2c1: @ SetVariable(Stack[-2], Stack[-1])
0x2c2: Pop(2)
0x2c3: Stack[-1] = 0
0x2c4: @@ add(Stack[-1])
0x2c5: Pop(0)
0x2c6: Stack[-1] = 0
0x2c7: Push((int) 1)
0x2c8: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x2c9: GOTO 0x2b7

0x2ca: Stack[6 + Tasks[-1].StackPointer] = (int)0
0x2cb: Push("Volonteers count: ")
0x2cc: PushEmpty(int)
0x2cd: Call2 0x2d9

0x2ce: Pop(0)
0x2cf: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2d0: @ Trace(Stack[-1])
0x2d1: Pop(1)
0x2d2: Return(); Pop(16)

0x2d3: Stack[-3] = 0
0x2d4: Stack[-4] = 0
0x2d5: Stack[-5] = 0
0x2d6: Stack[-6] = 0
0x2d7: Stack[-7] = 0
0x2d8: Stack[-8] = 0
0x2d9: PushEmpty(int, int)
0x2da: @@ size(Stack[-1])
0x2db: Pop(0)
0x2dc: Stack[-3] = Stack[-1]
0x2dd: Return(); Pop(2)

0x2de: PushEmpty(int, int, int, int)
0x2df: Stack[-2] = (int) 0
0x2e0: PushEmpty(int)
0x2e1: Call2 0x2d9

0x2e2: Pop(0)
0x2e3: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x2e4: IF (Stack[-1] == 0) GOTO 0x2ee; Pop(1)

0x2e5: @@ get(Stack[-1], Stack[-2])
0x2e6: Pop(0)
0x2e7: Pop(0); Push((bool) Stack[-5] == Stack[-1])
0x2e8: IF (Stack[-1] == 0) GOTO 0x2eb; Pop(1)

0x2e9: Stack[-6] = Stack[-2]
0x2ea: Return(); Pop(4)

0x2eb: Push((int) 1)
0x2ec: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x2ed: GOTO 0x2e0

0x2ee: Stack[-6] = (int) -1
0x2ef: Return(); Pop(4)

0x2f0: PushEmpty(int, int)
0x2f1: @@ get(Stack[-1], Stack[-3])
0x2f2: Pop(0)
0x2f3: Stack[-4] = Stack[-1]
0x2f4: Return(); Pop(2)

0x2f5: PushEmpty(int, int)
0x2f6: @@ get(Stack[-1], Stack[-3])
0x2f7: Pop(0)
0x2f8: Push("vol_")
0x2f9: Stack[-5] = Stack[-1] + Stack[-2]; Pop(1);
0x2fa: Return(); Pop(2)

0x2fb: PushEmpty(int, int)
0x2fc: PushEmpty(string, int)
0x2fd: Stack[-1] = Stack[-5]
0x2fe: Call2 0x2f5

0x2ff: Pop(1)
0x300: @ GetVariable(Stack[-1], Stack[-2])
0x301: Pop(1)
0x302: Push((int) 32)
0x303: Pop(1); Push(Stack[-2] & Stack[-1]);
0x304: Push((int) 0)
0x305: Stack[-6] = Stack[-2] != Stack[-1]; Pop(2);
0x306: Return(); Pop(2)

0x307: PushEmpty(int, int)
0x308: PushEmpty(string, int)
0x309: Stack[-1] = Stack[-5]
0x30a: Call2 0x2f5

0x30b: Pop(1)
0x30c: @ GetVariable(Stack[-1], Stack[-2])
0x30d: Pop(1)
0x30e: Push((int) 2)
0x30f: Pop(1); Push(Stack[-2] & Stack[-1]);
0x310: Push((int) 0)
0x311: Stack[-6] = Stack[-2] != Stack[-1]; Pop(2);
0x312: Return(); Pop(2)

0x313: PushEmpty(int, int)
0x314: PushEmpty(string, int)
0x315: Stack[-1] = Stack[-5]
0x316: Call2 0x2f5

0x317: Pop(1)
0x318: @ GetVariable(Stack[-1], Stack[-2])
0x319: Pop(1)
0x31a: Push((int) 1)
0x31b: Pop(1); Push(Stack[-2] & Stack[-1]);
0x31c: Push((int) 0)
0x31d: Stack[-6] = Stack[-2] == Stack[-1]; Pop(2);
0x31e: Return(); Pop(2)

0x31f: PushEmpty(int, int)
0x320: PushEmpty(string, int)
0x321: Stack[-1] = Stack[-5]
0x322: Call2 0x2f5

0x323: Pop(1)
0x324: @ GetVariable(Stack[-1], Stack[-2])
0x325: Pop(1)
0x326: Push((int) 4)
0x327: Pop(1); Push(Stack[-2] & Stack[-1]);
0x328: Push((int) 0)
0x329: Stack[-6] = Stack[-2] != Stack[-1]; Pop(2);
0x32a: Return(); Pop(2)

0x32b: PushEmpty(int, object, object, string, object, int, int, string, int, object, object, string, object, int, int, string)
0x32c: PushEmpty(string, int)
0x32d: Stack[-1] = Stack[-19]
0x32e: Call2 0x2f5

0x32f: Pop(1)
0x330: @ GetVariable(Stack[-1], Stack[-9])
0x331: Pop(1)
0x332: PushEmpty(string, int)
0x333: Stack[-1] = Stack[-19]
0x334: Call2 0x2f5

0x335: Pop(1)
0x336: Push((int) 8)
0x337: Pop(1); Push(Stack[-10] & Stack[-1]);
0x338: Push((int) 5)
0x339: Pop(2); Push(Stack[-2] | Stack[-1]);
0x33a: @ SetVariable(Stack[-2], Stack[-1])
0x33b: Pop(2)
0x33c: @@ get(Stack[-7], Stack[-17])
0x33d: Pop(0)
0x33e: Pop(0); Push((bool) Stack[-7] == 0)
0x33f: IF (Stack[-1] == 0) GOTO 0x35d; Pop(1)

0x340: PushEmpty(object, int)
0x341: Stack[-1] = Stack[-19]
0x342: Call2 0x427

0x343: Stack[-8] = Stack[-2]
0x344: Pop(2)
0x345: PushEmpty(string, int)
0x346: PushEmpty(int, int)
0x347: Stack[-1] = Stack[-21]
0x348: Call2 0x2f0

0x349: Stack[-3] = Stack[-2]
0x34a: Pop(2)
0x34b: Call2 0x63b

0x34c: Stack[-7] = Stack[-2]
0x34d: Pop(2)
0x34e: PushEmpty(object, object, string, string, string)
0x34f: Stack[-4] = Stack[-11]
0x350: Push("pt_volonteer_")
0x351: Stack[-4] = Stack[-1] + Stack[-11]; Pop(1);
0x352: Stack[-2] = "pers_birdmask"
0x353: Push("vbirdmask_")
0x354: Pop(1); Push(Stack[-1] + Stack[-11]);
0x355: Push(".xml")
0x356: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x357: Call2 0x449

0x358: Stack[-12] = Stack[-5]
0x359: Pop(5)
0x35a: @@ set(Stack[-17], Stack[-7])
0x35b: Pop(0)
0x35c: Stack[-6] = 0
0x35d: @@ get(Stack[-4], Stack[-17])
0x35e: Pop(0)
0x35f: @@ size(Stack[-3])
0x360: Pop(0)
0x361: Stack[-2] = (int) 0
0x362: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0x363: IF (Stack[-1] == 0) GOTO 0x36e; Pop(1)

0x364: @@ get(Stack[-1], Stack[-2])
0x365: Pop(0)
0x366: PushEmpty(string, int)
0x367: Stack[-2] = Stack[-3]
0x368: Stack[-1] = (int) 1
0x369: Call2 0xa93

0x36a: Pop(2)
0x36b: Push((int) 1)
0x36c: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x36d: GOTO 0x362

0x36e: Return(); Pop(16)

0x36f: Stack[-4] = 0
0x370: Stack[-7] = 0
0x371: PushEmpty(int, object, int, int, string, int, object, int, int, string)
0x372: PushEmpty(string, int)
0x373: Stack[-1] = Stack[-13]
0x374: Call2 0x2f5

0x375: Pop(1)
0x376: @ GetVariable(Stack[-1], Stack[-6])
0x377: Pop(1)
0x378: PushEmpty(string, int)
0x379: Stack[-1] = Stack[-13]
0x37a: Call2 0x2f5

0x37b: Pop(1)
0x37c: Push((int) 32)
0x37d: Pop(1); Push(Stack[-7] | Stack[-1]);
0x37e: @ SetVariable(Stack[-2], Stack[-1])
0x37f: Pop(2)
0x380: @@ get(Stack[-4], Stack[-11])
0x381: Pop(0)
0x382: @@ size(Stack[-3])
0x383: Pop(0)
0x384: Stack[-2] = (int) 0
0x385: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0x386: IF (Stack[-1] == 0) GOTO 0x391; Pop(1)

0x387: @@ get(Stack[-1], Stack[-2])
0x388: Pop(0)
0x389: PushEmpty(string, int)
0x38a: Stack[-2] = Stack[-3]
0x38b: Stack[-1] = (int) 0
0x38c: Call2 0xa93

0x38d: Pop(2)
0x38e: Push((int) 1)
0x38f: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x390: GOTO 0x385

0x391: Return(); Pop(10)

0x392: Stack[-4] = 0
0x393: PushEmpty(int, object, int, int, string, int, object, int, int, string)
0x394: PushEmpty(string, int)
0x395: Stack[-1] = Stack[-13]
0x396: Call2 0x2f5

0x397: Pop(1)
0x398: @ GetVariable(Stack[-1], Stack[-6])
0x399: Pop(1)
0x39a: PushEmpty(string, int)
0x39b: Stack[-1] = Stack[-13]
0x39c: Call2 0x2f5

0x39d: Pop(1)
0x39e: Push((int) 32)
0x39f: Pop(1); Push(Stack[-7] | Stack[-1]);
0x3a0: Push((int) 32)
0x3a1: Pop(2); Push(Stack[-2] - Stack[-1]);
0x3a2: @ SetVariable(Stack[-2], Stack[-1])
0x3a3: Pop(2)
0x3a4: @@ get(Stack[-4], Stack[-11])
0x3a5: Pop(0)
0x3a6: @@ size(Stack[-3])
0x3a7: Pop(0)
0x3a8: Stack[-2] = (int) 0
0x3a9: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0x3aa: IF (Stack[-1] == 0) GOTO 0x3b5; Pop(1)

0x3ab: @@ get(Stack[-1], Stack[-2])
0x3ac: Pop(0)
0x3ad: PushEmpty(string, int)
0x3ae: Stack[-2] = Stack[-3]
0x3af: Stack[-1] = (int) 1
0x3b0: Call2 0xa93

0x3b1: Pop(2)
0x3b2: Push((int) 1)
0x3b3: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x3b4: GOTO 0x3a9

0x3b5: Return(); Pop(10)

0x3b6: Stack[-4] = 0
0x3b7: PushEmpty(int, object, object, int, int, string, int, object, object, int, int, string)
0x3b8: PushEmpty(string, int)
0x3b9: Stack[-1] = Stack[-15]
0x3ba: Call2 0x2f5

0x3bb: Pop(1)
0x3bc: @ GetVariable(Stack[-1], Stack[-7])
0x3bd: Pop(1)
0x3be: PushEmpty(string, int)
0x3bf: Stack[-1] = Stack[-15]
0x3c0: Call2 0x2f5

0x3c1: Pop(1)
0x3c2: Push((int) 4)
0x3c3: Pop(1); Push(Stack[-8] | Stack[-1]);
0x3c4: Push((int) 1)
0x3c5: Pop(2); Push(Stack[-2] | Stack[-1]);
0x3c6: Push((int) 2)
0x3c7: Pop(2); Push(Stack[-2] | Stack[-1]);
0x3c8: Push((int) 4)
0x3c9: Pop(2); Push(Stack[-2] - Stack[-1]);
0x3ca: Push((int) 1)
0x3cb: Pop(2); Push(Stack[-2] - Stack[-1]);
0x3cc: Push((int) 2)
0x3cd: Pop(2); Push(Stack[-2] - Stack[-1]);
0x3ce: @ SetVariable(Stack[-2], Stack[-1])
0x3cf: Pop(2)
0x3d0: @@ get(Stack[-5], Stack[-13])
0x3d1: Pop(0)
0x3d2: Pop(0); Push(( Stack[-5] != 0 )
0x3d3: IF (Stack[-1] == 0) GOTO 0x3d6; Pop(1)

0x3d4: @@ Remove()
0x3d5: Pop(0)
0x3d6: @@ get(Stack[-4], Stack[-13])
0x3d7: Pop(0)
0x3d8: @@ size(Stack[-3])
0x3d9: Pop(0)
0x3da: Stack[-2] = (int) 0
0x3db: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0x3dc: IF (Stack[-1] == 0) GOTO 0x3e7; Pop(1)

0x3dd: @@ get(Stack[-1], Stack[-2])
0x3de: Pop(0)
0x3df: PushEmpty(string, int)
0x3e0: Stack[-2] = Stack[-3]
0x3e1: Stack[-1] = (int) 0
0x3e2: Call2 0xa93

0x3e3: Pop(2)
0x3e4: Push((int) 1)
0x3e5: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x3e6: GOTO 0x3db

0x3e7: Return(); Pop(12)

0x3e8: Stack[-4] = 0
0x3e9: Stack[-5] = 0
0x3ea: PushEmpty(int, object, object, string, object, int, int, string, int, object, object, string, object, int, int, string)
0x3eb: PushEmpty(string, int)
0x3ec: Stack[-1] = Stack[-19]
0x3ed: Call2 0x2f5

0x3ee: Pop(1)
0x3ef: Push((int) 17)
0x3f0: @ SetVariable(Stack[-2], Stack[-1])
0x3f1: Pop(2)
0x3f2: @@ get(Stack[-7], Stack[-17])
0x3f3: Pop(0)
0x3f4: Pop(0); Push((bool) Stack[-7] == 0)
0x3f5: IF (Stack[-1] == 0) GOTO 0x413; Pop(1)

0x3f6: PushEmpty(object, int)
0x3f7: Stack[-1] = Stack[-19]
0x3f8: Call2 0x427

0x3f9: Stack[-8] = Stack[-2]
0x3fa: Pop(2)
0x3fb: PushEmpty(string, int)
0x3fc: PushEmpty(int, int)
0x3fd: Stack[-1] = Stack[-21]
0x3fe: Call2 0x2f0

0x3ff: Stack[-3] = Stack[-2]
0x400: Pop(2)
0x401: Call2 0x63b

0x402: Stack[-7] = Stack[-2]
0x403: Pop(2)
0x404: PushEmpty(object, object, string, string, string)
0x405: Stack[-4] = Stack[-11]
0x406: Push("pt_volonteer_")
0x407: Stack[-4] = Stack[-1] + Stack[-11]; Pop(1);
0x408: Stack[-2] = "pers_birdmask"
0x409: Push("vbirdmask_")
0x40a: Pop(1); Push(Stack[-1] + Stack[-11]);
0x40b: Push(".xml")
0x40c: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x40d: Call2 0x449

0x40e: Stack[-12] = Stack[-5]
0x40f: Pop(5)
0x410: @@ set(Stack[-17], Stack[-7])
0x411: Pop(0)
0x412: Stack[-6] = 0
0x413: @@ get(Stack[-4], Stack[-17])
0x414: Pop(0)
0x415: @@ size(Stack[-3])
0x416: Pop(0)
0x417: Stack[-2] = (int) 0
0x418: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0x419: IF (Stack[-1] == 0) GOTO 0x424; Pop(1)

0x41a: @@ get(Stack[-1], Stack[-2])
0x41b: Pop(0)
0x41c: PushEmpty(string, int)
0x41d: Stack[-2] = Stack[-3]
0x41e: Stack[-1] = (int) 2
0x41f: Call2 0xa93

0x420: Pop(2)
0x421: Push((int) 1)
0x422: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x423: GOTO 0x418

0x424: Return(); Pop(16)

0x425: Stack[-4] = 0
0x426: Stack[-7] = 0
0x427: PushEmpty(string, object, object, string, object, object)
0x428: @@ get(Stack[-3], Stack[-7])
0x429: Pop(0)
0x42a: Push("outdoor")
0x42b: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x42c: IF (Stack[-1] == 0) GOTO 0x432; Pop(1)

0x42d: @ GetMainOutdoorScene(Stack[-2])
0x42e: Pop(0)
0x42f: Stack[-8] = Stack[-2]
0x430: Return(); Pop(6)

0x431: Stack[-2] = 0
0x432: @ GetSceneByName(Stack[-1], Stack[-3])
0x433: Pop(0)
0x434: Stack[-8] = Stack[-1]
0x435: Return(); Pop(6)

0x436: Stack[-1] = 0
0x437: PushEmpty(int, int)
0x438: PushEmpty(string, int)
0x439: Stack[-1] = Stack[-5]
0x43a: Call2 0x2f5

0x43b: Pop(1)
0x43c: @ GetVariable(Stack[-1], Stack[-2])
0x43d: Pop(1)
0x43e: PushEmpty(string, int)
0x43f: Stack[-1] = Stack[-5]
0x440: Call2 0x2f5

0x441: Pop(1)
0x442: Push((int) 8)
0x443: Pop(1); Push(Stack[-3] & Stack[-1]);
0x444: Push((int) 3)
0x445: Pop(2); Push(Stack[-2] | Stack[-1]);
0x446: @ SetVariable(Stack[-2], Stack[-1])
0x447: Pop(2)
0x448: Return(); Pop(2)

0x449: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x44a: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0x44b: Pop(0)
0x44c: Pop(0); Push((bool) Stack[-4] == 0)
0x44d: IF (Stack[-1] == 0) GOTO 0x456; Pop(1)

0x44e: Push("Locator ")
0x44f: Pop(1); Push(Stack[-1] + Stack[-12]);
0x450: Push(" doesn't exist")
0x451: Pop(2); Push(Stack[-2] + Stack[-1]);
0x452: @ Trace(Stack[-1])
0x453: Pop(1)
0x454: Stack[-1] = 0
0x455: GOTO 0x458

0x456: @@ AddStationaryActor(Stack[-1], Stack[-3], Stack[-2], Stack[-10], Stack[-9])
0x457: Pop(0)
0x458: Stack[-13] = Stack[-1]
0x459: Return(); Pop(8)

0x45a: Stack[-1] = 0
0x45b: PushEmpty(object, object)
0x45c: @ FindActor(Stack[-1], Stack[-4])
0x45d: Pop(0)
0x45e: Pop(0); Push((bool) Stack[-1] == 0)
0x45f: IF (Stack[-1] == 0) GOTO 0x462; Pop(1)

0x460: Stack[-5] = (bool) 0
0x461: Return(); Pop(2)

0x462: @ Trigger(Stack[-1], Stack[-3])
0x463: Pop(0)
0x464: Stack[-5] = (bool) 1
0x465: Return(); Pop(2)

0x466: Stack[-1] = 0
0x467: PushEmpty(float, float)
0x468: @ GetGameTime(Stack[-1])
0x469: Pop(0)
0x46a: Stack[-3] = Stack[-1]
0x46b: Return(); Pop(2)

0x46c: PushEmpty(float, float)
0x46d: @ GetGameTime(Stack[-1])
0x46e: Pop(0)
0x46f: Push((int) 1)
0x470: PushEmpty(int)
0x471: Push((int) 24)
0x472: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x473: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x474: Return(); Pop(2)

0x475: PushEmpty(float, float)
0x476: @ GetGameTime(Stack[-1])
0x477: Pop(0)
0x478: PushEmpty(int)
0x479: Stack[-1] = Stack[-2]
0x47a: Push((int) 24)
0x47b: Stack[-5] = Stack[-2] % Stack[-1]; Pop(2);
0x47c: Return(); Pop(2)

0x47d: PushEmpty()
0x47e: PushEmpty(int)
0x47f: Call2 0x46c

0x480: Pop(0)
0x481: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0x482: Return(); Pop(0)

0x483: PushEmpty()
0x484: @ _strlwr(Stack[-1])
0x485: Pop(0)
0x486: Push("alexandr")
0x487: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x488: IF (Stack[-1] == 0) GOTO 0x48b; Pop(1)

0x489: Stack[-2] = (int) 1
0x48a: Return(); Pop(0)

0x48b: Push("andrei")
0x48c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x48d: IF (Stack[-1] == 0) GOTO 0x490; Pop(1)

0x48e: Stack[-2] = (int) 2
0x48f: Return(); Pop(0)

0x490: Push("anna")
0x491: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x492: IF (Stack[-1] == 0) GOTO 0x495; Pop(1)

0x493: Stack[-2] = (int) 3
0x494: Return(); Pop(0)

0x495: Push("bigvlad")
0x496: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x497: IF (Stack[-1] == 0) GOTO 0x49a; Pop(1)

0x498: Stack[-2] = (int) 4
0x499: Return(); Pop(0)

0x49a: Push("eva")
0x49b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x49c: IF (Stack[-1] == 0) GOTO 0x49f; Pop(1)

0x49d: Stack[-2] = (int) 5
0x49e: Return(); Pop(0)

0x49f: Push("georg")
0x4a0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4a1: IF (Stack[-1] == 0) GOTO 0x4a4; Pop(1)

0x4a2: Stack[-2] = (int) 6
0x4a3: Return(); Pop(0)

0x4a4: Push("grif")
0x4a5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4a6: IF (Stack[-1] == 0) GOTO 0x4a9; Pop(1)

0x4a7: Stack[-2] = (int) 7
0x4a8: Return(); Pop(0)

0x4a9: Push("han")
0x4aa: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4ab: IF (Stack[-1] == 0) GOTO 0x4ae; Pop(1)

0x4ac: Stack[-2] = (int) 8
0x4ad: Return(); Pop(0)

0x4ae: Push("julia")
0x4af: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4b0: IF (Stack[-1] == 0) GOTO 0x4b3; Pop(1)

0x4b1: Stack[-2] = (int) 9
0x4b2: Return(); Pop(0)

0x4b3: Push("kapella")
0x4b4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4b5: IF (Stack[-1] == 0) GOTO 0x4b8; Pop(1)

0x4b6: Stack[-2] = (int) 10
0x4b7: Return(); Pop(0)

0x4b8: Push("katerina")
0x4b9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4ba: IF (Stack[-1] == 0) GOTO 0x4bd; Pop(1)

0x4bb: Stack[-2] = (int) 11
0x4bc: Return(); Pop(0)

0x4bd: Push("klara")
0x4be: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4bf: IF (Stack[-1] == 0) GOTO 0x4c2; Pop(1)

0x4c0: Stack[-2] = (int) 12
0x4c1: Return(); Pop(0)

0x4c2: Push("lara")
0x4c3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4c4: IF (Stack[-1] == 0) GOTO 0x4c7; Pop(1)

0x4c5: Stack[-2] = (int) 13
0x4c6: Return(); Pop(0)

0x4c7: Push("laska")
0x4c8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4c9: IF (Stack[-1] == 0) GOTO 0x4cc; Pop(1)

0x4ca: Stack[-2] = (int) 14
0x4cb: Return(); Pop(0)

0x4cc: Push("maria")
0x4cd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4ce: IF (Stack[-1] == 0) GOTO 0x4d1; Pop(1)

0x4cf: Stack[-2] = (int) 15
0x4d0: Return(); Pop(0)

0x4d1: Push("mark")
0x4d2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4d3: IF (Stack[-1] == 0) GOTO 0x4d6; Pop(1)

0x4d4: Stack[-2] = (int) 16
0x4d5: Return(); Pop(0)

0x4d6: Push("mat")
0x4d7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4d8: IF (Stack[-1] == 0) GOTO 0x4db; Pop(1)

0x4d9: Stack[-2] = (int) 17
0x4da: Return(); Pop(0)

0x4db: Push("mishka")
0x4dc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4dd: IF (Stack[-1] == 0) GOTO 0x4e0; Pop(1)

0x4de: Stack[-2] = (int) 18
0x4df: Return(); Pop(0)

0x4e0: Push("mladvlad")
0x4e1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4e2: IF (Stack[-1] == 0) GOTO 0x4e5; Pop(1)

0x4e3: Stack[-2] = (int) 19
0x4e4: Return(); Pop(0)

0x4e5: Push("notkin")
0x4e6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4e7: IF (Stack[-1] == 0) GOTO 0x4ea; Pop(1)

0x4e8: Stack[-2] = (int) 20
0x4e9: Return(); Pop(0)

0x4ea: Push("ospina")
0x4eb: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4ec: IF (Stack[-1] == 0) GOTO 0x4ef; Pop(1)

0x4ed: Stack[-2] = (int) 21
0x4ee: Return(); Pop(0)

0x4ef: Push("petr")
0x4f0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4f1: IF (Stack[-1] == 0) GOTO 0x4f4; Pop(1)

0x4f2: Stack[-2] = (int) 22
0x4f3: Return(); Pop(0)

0x4f4: Push("rubin")
0x4f5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4f6: IF (Stack[-1] == 0) GOTO 0x4f9; Pop(1)

0x4f7: Stack[-2] = (int) 23
0x4f8: Return(); Pop(0)

0x4f9: Push("spi4ka")
0x4fa: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4fb: IF (Stack[-1] == 0) GOTO 0x4fe; Pop(1)

0x4fc: Stack[-2] = (int) 24
0x4fd: Return(); Pop(0)

0x4fe: Push("starshina")
0x4ff: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x500: IF (Stack[-1] == 0) GOTO 0x503; Pop(1)

0x501: Stack[-2] = (int) 25
0x502: Return(); Pop(0)

0x503: Push("viktor")
0x504: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x505: IF (Stack[-1] == 0) GOTO 0x508; Pop(1)

0x506: Stack[-2] = (int) 26
0x507: Return(); Pop(0)

0x508: Push("wasted_woman")
0x509: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x50a: IF (Stack[-1] == 0) GOTO 0x50d; Pop(1)

0x50b: Stack[-2] = (int) 27
0x50c: Return(); Pop(0)

0x50d: Push("wasted_male")
0x50e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x50f: IF (Stack[-1] == 0) GOTO 0x512; Pop(1)

0x510: Stack[-2] = (int) 28
0x511: Return(); Pop(0)

0x512: Push("alkash")
0x513: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x514: IF (Stack[-1] == 0) GOTO 0x517; Pop(1)

0x515: Stack[-2] = (int) 29
0x516: Return(); Pop(0)

0x517: Push("boy")
0x518: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x519: IF (Stack[-1] == 0) GOTO 0x51c; Pop(1)

0x51a: Stack[-2] = (int) 30
0x51b: Return(); Pop(0)

0x51c: Push("girl")
0x51d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x51e: IF (Stack[-1] == 0) GOTO 0x521; Pop(1)

0x51f: Stack[-2] = (int) 31
0x520: Return(); Pop(0)

0x521: Push("littleboy")
0x522: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x523: IF (Stack[-1] == 0) GOTO 0x526; Pop(1)

0x524: Stack[-2] = (int) 32
0x525: Return(); Pop(0)

0x526: Push("littlegirl")
0x527: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x528: IF (Stack[-1] == 0) GOTO 0x52b; Pop(1)

0x529: Stack[-2] = (int) 33
0x52a: Return(); Pop(0)

0x52b: Push("butcher")
0x52c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x52d: IF (Stack[-1] == 0) GOTO 0x530; Pop(1)

0x52e: Stack[-2] = (int) 34
0x52f: Return(); Pop(0)

0x530: Push("dohodyaga")
0x531: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x532: IF (Stack[-1] == 0) GOTO 0x535; Pop(1)

0x533: Stack[-2] = (int) 35
0x534: Return(); Pop(0)

0x535: Push("unosha")
0x536: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x537: IF (Stack[-1] == 0) GOTO 0x53a; Pop(1)

0x538: Stack[-2] = (int) 36
0x539: Return(); Pop(0)

0x53a: Push("vaxxabit")
0x53b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x53c: IF (Stack[-1] == 0) GOTO 0x53f; Pop(1)

0x53d: Stack[-2] = (int) 37
0x53e: Return(); Pop(0)

0x53f: Push("vaxxabitka")
0x540: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x541: IF (Stack[-1] == 0) GOTO 0x544; Pop(1)

0x542: Stack[-2] = (int) 38
0x543: Return(); Pop(0)

0x544: Push("woman")
0x545: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x546: IF (Stack[-1] == 0) GOTO 0x549; Pop(1)

0x547: Stack[-2] = (int) 39
0x548: Return(); Pop(0)

0x549: Push("worker")
0x54a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x54b: IF (Stack[-1] == 0) GOTO 0x54e; Pop(1)

0x54c: Stack[-2] = (int) 40
0x54d: Return(); Pop(0)

0x54e: Push("whitemask")
0x54f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x550: IF (Stack[-1] == 0) GOTO 0x553; Pop(1)

0x551: Stack[-2] = (int) 42
0x552: Return(); Pop(0)

0x553: Push("birdmask")
0x554: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x555: IF (Stack[-1] == 0) GOTO 0x558; Pop(1)

0x556: Stack[-2] = (int) 43
0x557: Return(); Pop(0)

0x558: Push("birdmask")
0x559: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x55a: IF (Stack[-1] == 0) GOTO 0x55d; Pop(1)

0x55b: Stack[-2] = (int) 44
0x55c: Return(); Pop(0)

0x55d: Push("patrol")
0x55e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x55f: IF (Stack[-1] == 0) GOTO 0x562; Pop(1)

0x560: Stack[-2] = (int) 46
0x561: Return(); Pop(0)

0x562: Push("danko")
0x563: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x564: IF (Stack[-1] == 0) GOTO 0x567; Pop(1)

0x565: Stack[-2] = (int) 47
0x566: Return(); Pop(0)

0x567: Push("alkash_d")
0x568: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x569: IF (Stack[-1] == 0) GOTO 0x56c; Pop(1)

0x56a: Stack[-2] = (int) 48
0x56b: Return(); Pop(0)

0x56c: Push("boy_d")
0x56d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x56e: IF (Stack[-1] == 0) GOTO 0x571; Pop(1)

0x56f: Stack[-2] = (int) 49
0x570: Return(); Pop(0)

0x571: Push("butcher_d")
0x572: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x573: IF (Stack[-1] == 0) GOTO 0x576; Pop(1)

0x574: Stack[-2] = (int) 50
0x575: Return(); Pop(0)

0x576: Push("dohodyaga_d")
0x577: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x578: IF (Stack[-1] == 0) GOTO 0x57b; Pop(1)

0x579: Stack[-2] = (int) 51
0x57a: Return(); Pop(0)

0x57b: Push("girl_d")
0x57c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x57d: IF (Stack[-1] == 0) GOTO 0x580; Pop(1)

0x57e: Stack[-2] = (int) 52
0x57f: Return(); Pop(0)

0x580: Push("littleboy_d")
0x581: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x582: IF (Stack[-1] == 0) GOTO 0x585; Pop(1)

0x583: Stack[-2] = (int) 53
0x584: Return(); Pop(0)

0x585: Push("littlegirl_d")
0x586: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x587: IF (Stack[-1] == 0) GOTO 0x58a; Pop(1)

0x588: Stack[-2] = (int) 54
0x589: Return(); Pop(0)

0x58a: Push("unosha2")
0x58b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x58c: IF (Stack[-1] == 0) GOTO 0x58f; Pop(1)

0x58d: Stack[-2] = (int) 55
0x58e: Return(); Pop(0)

0x58f: Push("unosha_d")
0x590: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x591: IF (Stack[-1] == 0) GOTO 0x594; Pop(1)

0x592: Stack[-2] = (int) 56
0x593: Return(); Pop(0)

0x594: Push("unosha2_d")
0x595: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x596: IF (Stack[-1] == 0) GOTO 0x599; Pop(1)

0x597: Stack[-2] = (int) 57
0x598: Return(); Pop(0)

0x599: Push("vaxxabit_d")
0x59a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x59b: IF (Stack[-1] == 0) GOTO 0x59e; Pop(1)

0x59c: Stack[-2] = (int) 58
0x59d: Return(); Pop(0)

0x59e: Push("vaxxabitka_d")
0x59f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5a0: IF (Stack[-1] == 0) GOTO 0x5a3; Pop(1)

0x5a1: Stack[-2] = (int) 59
0x5a2: Return(); Pop(0)

0x5a3: Push("wasted_male_d")
0x5a4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5a5: IF (Stack[-1] == 0) GOTO 0x5a8; Pop(1)

0x5a6: Stack[-2] = (int) 60
0x5a7: Return(); Pop(0)

0x5a8: Push("wasted_woman_d")
0x5a9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5aa: IF (Stack[-1] == 0) GOTO 0x5ad; Pop(1)

0x5ab: Stack[-2] = (int) 61
0x5ac: Return(); Pop(0)

0x5ad: Push("woman_d")
0x5ae: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5af: IF (Stack[-1] == 0) GOTO 0x5b2; Pop(1)

0x5b0: Stack[-2] = (int) 62
0x5b1: Return(); Pop(0)

0x5b2: Push("worker2")
0x5b3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5b4: IF (Stack[-1] == 0) GOTO 0x5b7; Pop(1)

0x5b5: Stack[-2] = (int) 63
0x5b6: Return(); Pop(0)

0x5b7: Push("worker_d")
0x5b8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5b9: IF (Stack[-1] == 0) GOTO 0x5bc; Pop(1)

0x5ba: Stack[-2] = (int) 64
0x5bb: Return(); Pop(0)

0x5bc: Push("worker2_d")
0x5bd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5be: IF (Stack[-1] == 0) GOTO 0x5c1; Pop(1)

0x5bf: Stack[-2] = (int) 65
0x5c0: Return(); Pop(0)

0x5c1: Push("burah")
0x5c2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5c3: IF (Stack[-1] == 0) GOTO 0x5c6; Pop(1)

0x5c4: Stack[-2] = (int) 66
0x5c5: Return(); Pop(0)

0x5c6: Push("gorbun_daughter")
0x5c7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5c8: IF (Stack[-1] == 0) GOTO 0x5cb; Pop(1)

0x5c9: Stack[-2] = (int) 67
0x5ca: Return(); Pop(0)

0x5cb: Push("gorbun")
0x5cc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5cd: IF (Stack[-1] == 0) GOTO 0x5d0; Pop(1)

0x5ce: Stack[-2] = (int) 68
0x5cf: Return(); Pop(0)

0x5d0: Push("albinos")
0x5d1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5d2: IF (Stack[-1] == 0) GOTO 0x5d5; Pop(1)

0x5d3: Stack[-2] = (int) 69
0x5d4: Return(); Pop(0)

0x5d5: Push("aglaja")
0x5d6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5d7: IF (Stack[-1] == 0) GOTO 0x5da; Pop(1)

0x5d8: Stack[-2] = (int) 70
0x5d9: Return(); Pop(0)

0x5da: Push("nude")
0x5db: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5dc: IF (Stack[-1] == 0) GOTO 0x5df; Pop(1)

0x5dd: Stack[-2] = (int) 71
0x5de: Return(); Pop(0)

0x5df: Push("block")
0x5e0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5e1: IF (Stack[-1] == 0) GOTO 0x5e4; Pop(1)

0x5e2: Stack[-2] = (int) 72
0x5e3: Return(); Pop(0)

0x5e4: Push("officer")
0x5e5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5e6: IF (Stack[-1] == 0) GOTO 0x5e9; Pop(1)

0x5e7: Stack[-2] = (int) 73
0x5e8: Return(); Pop(0)

0x5e9: Push("doberman")
0x5ea: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5eb: IF (Stack[-1] == 0) GOTO 0x5ee; Pop(1)

0x5ec: Stack[-2] = (int) 74
0x5ed: Return(); Pop(0)

0x5ee: Push("grabitel")
0x5ef: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5f0: IF (Stack[-1] == 0) GOTO 0x5f3; Pop(1)

0x5f1: Stack[-2] = (int) 75
0x5f2: Return(); Pop(0)

0x5f3: Push("gatherer_wife")
0x5f4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5f5: IF (Stack[-1] == 0) GOTO 0x5f8; Pop(1)

0x5f6: Stack[-2] = (int) 76
0x5f7: Return(); Pop(0)

0x5f8: Push("rat_prophet")
0x5f9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5fa: IF (Stack[-1] == 0) GOTO 0x5fd; Pop(1)

0x5fb: Stack[-2] = (int) 77
0x5fc: Return(); Pop(0)

0x5fd: Push("morlok")
0x5fe: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5ff: IF (Stack[-1] == 0) GOTO 0x602; Pop(1)

0x600: Stack[-2] = (int) 78
0x601: Return(); Pop(0)

0x602: Push("soldier")
0x603: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x604: IF (Stack[-1] == 0) GOTO 0x607; Pop(1)

0x605: Stack[-2] = (int) 79
0x606: Return(); Pop(0)

0x607: Push("britva")
0x608: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x609: IF (Stack[-1] == 0) GOTO 0x60c; Pop(1)

0x60a: Stack[-2] = (int) 80
0x60b: Return(); Pop(0)

0x60c: Push("kabaktchik")
0x60d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x60e: IF (Stack[-1] == 0) GOTO 0x611; Pop(1)

0x60f: Stack[-2] = (int) 81
0x610: Return(); Pop(0)

0x611: Push("sanitar")
0x612: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x613: IF (Stack[-1] == 0) GOTO 0x616; Pop(1)

0x614: Stack[-2] = (int) 82
0x615: Return(); Pop(0)

0x616: Push("salesman")
0x617: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x618: IF (Stack[-1] == 0) GOTO 0x61b; Pop(1)

0x619: Stack[-2] = (int) 83
0x61a: Return(); Pop(0)

0x61b: Push("ayyan")
0x61c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x61d: IF (Stack[-1] == 0) GOTO 0x620; Pop(1)

0x61e: Stack[-2] = (int) 84
0x61f: Return(); Pop(0)

0x620: Push("petrbirdmask")
0x621: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x622: IF (Stack[-1] == 0) GOTO 0x625; Pop(1)

0x623: Stack[-2] = (int) 85
0x624: Return(); Pop(0)

0x625: Push("mogila")
0x626: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x627: IF (Stack[-1] == 0) GOTO 0x62a; Pop(1)

0x628: Stack[-2] = (int) 86
0x629: Return(); Pop(0)

0x62a: Push("klikusha")
0x62b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x62c: IF (Stack[-1] == 0) GOTO 0x62f; Pop(1)

0x62d: Stack[-2] = (int) 87
0x62e: Return(); Pop(0)

0x62f: Push("karlik")
0x630: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x631: IF (Stack[-1] == 0) GOTO 0x634; Pop(1)

0x632: Stack[-2] = (int) 88
0x633: Return(); Pop(0)

0x634: Push("lisa")
0x635: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x636: IF (Stack[-1] == 0) GOTO 0x639; Pop(1)

0x637: Stack[-2] = (int) 89
0x638: Return(); Pop(0)

0x639: Stack[-2] = (int) -1
0x63a: Return(); Pop(0)

0x63b: PushEmpty()
0x63c: Push((int) 1)
0x63d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x63e: IF (Stack[-1] == 0) GOTO 0x641; Pop(1)

0x63f: Stack[-2] = "alexandr"
0x640: Return(); Pop(0)

0x641: Push((int) 2)
0x642: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x643: IF (Stack[-1] == 0) GOTO 0x646; Pop(1)

0x644: Stack[-2] = "andrei"
0x645: Return(); Pop(0)

0x646: Push((int) 3)
0x647: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x648: IF (Stack[-1] == 0) GOTO 0x64b; Pop(1)

0x649: Stack[-2] = "anna"
0x64a: Return(); Pop(0)

0x64b: Push((int) 4)
0x64c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x64d: IF (Stack[-1] == 0) GOTO 0x650; Pop(1)

0x64e: Stack[-2] = "bigvlad"
0x64f: Return(); Pop(0)

0x650: Push((int) 5)
0x651: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x652: IF (Stack[-1] == 0) GOTO 0x655; Pop(1)

0x653: Stack[-2] = "eva"
0x654: Return(); Pop(0)

0x655: Push((int) 6)
0x656: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x657: IF (Stack[-1] == 0) GOTO 0x65a; Pop(1)

0x658: Stack[-2] = "georg"
0x659: Return(); Pop(0)

0x65a: Push((int) 7)
0x65b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x65c: IF (Stack[-1] == 0) GOTO 0x65f; Pop(1)

0x65d: Stack[-2] = "grif"
0x65e: Return(); Pop(0)

0x65f: Push((int) 8)
0x660: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x661: IF (Stack[-1] == 0) GOTO 0x664; Pop(1)

0x662: Stack[-2] = "han"
0x663: Return(); Pop(0)

0x664: Push((int) 9)
0x665: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x666: IF (Stack[-1] == 0) GOTO 0x669; Pop(1)

0x667: Stack[-2] = "julia"
0x668: Return(); Pop(0)

0x669: Push((int) 10)
0x66a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x66b: IF (Stack[-1] == 0) GOTO 0x66e; Pop(1)

0x66c: Stack[-2] = "kapella"
0x66d: Return(); Pop(0)

0x66e: Push((int) 11)
0x66f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x670: IF (Stack[-1] == 0) GOTO 0x673; Pop(1)

0x671: Stack[-2] = "katerina"
0x672: Return(); Pop(0)

0x673: Push((int) 12)
0x674: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x675: IF (Stack[-1] == 0) GOTO 0x678; Pop(1)

0x676: Stack[-2] = "klara"
0x677: Return(); Pop(0)

0x678: Push((int) 13)
0x679: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x67a: IF (Stack[-1] == 0) GOTO 0x67d; Pop(1)

0x67b: Stack[-2] = "lara"
0x67c: Return(); Pop(0)

0x67d: Push((int) 14)
0x67e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x67f: IF (Stack[-1] == 0) GOTO 0x682; Pop(1)

0x680: Stack[-2] = "laska"
0x681: Return(); Pop(0)

0x682: Push((int) 15)
0x683: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x684: IF (Stack[-1] == 0) GOTO 0x687; Pop(1)

0x685: Stack[-2] = "maria"
0x686: Return(); Pop(0)

0x687: Push((int) 16)
0x688: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x689: IF (Stack[-1] == 0) GOTO 0x68c; Pop(1)

0x68a: Stack[-2] = "mark"
0x68b: Return(); Pop(0)

0x68c: Push((int) 17)
0x68d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x68e: IF (Stack[-1] == 0) GOTO 0x691; Pop(1)

0x68f: Stack[-2] = "mat"
0x690: Return(); Pop(0)

0x691: Push((int) 18)
0x692: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x693: IF (Stack[-1] == 0) GOTO 0x696; Pop(1)

0x694: Stack[-2] = "mishka"
0x695: Return(); Pop(0)

0x696: Push((int) 19)
0x697: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x698: IF (Stack[-1] == 0) GOTO 0x69b; Pop(1)

0x699: Stack[-2] = "mladvlad"
0x69a: Return(); Pop(0)

0x69b: Push((int) 20)
0x69c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x69d: IF (Stack[-1] == 0) GOTO 0x6a0; Pop(1)

0x69e: Stack[-2] = "notkin"
0x69f: Return(); Pop(0)

0x6a0: Push((int) 21)
0x6a1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6a2: IF (Stack[-1] == 0) GOTO 0x6a5; Pop(1)

0x6a3: Stack[-2] = "ospina"
0x6a4: Return(); Pop(0)

0x6a5: Push((int) 22)
0x6a6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6a7: IF (Stack[-1] == 0) GOTO 0x6aa; Pop(1)

0x6a8: Stack[-2] = "petr"
0x6a9: Return(); Pop(0)

0x6aa: Push((int) 23)
0x6ab: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6ac: IF (Stack[-1] == 0) GOTO 0x6af; Pop(1)

0x6ad: Stack[-2] = "rubin"
0x6ae: Return(); Pop(0)

0x6af: Push((int) 24)
0x6b0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6b1: IF (Stack[-1] == 0) GOTO 0x6b4; Pop(1)

0x6b2: Stack[-2] = "spi4ka"
0x6b3: Return(); Pop(0)

0x6b4: Push((int) 25)
0x6b5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6b6: IF (Stack[-1] == 0) GOTO 0x6b9; Pop(1)

0x6b7: Stack[-2] = "starshina"
0x6b8: Return(); Pop(0)

0x6b9: Push((int) 26)
0x6ba: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6bb: IF (Stack[-1] == 0) GOTO 0x6be; Pop(1)

0x6bc: Stack[-2] = "viktor"
0x6bd: Return(); Pop(0)

0x6be: Push((int) 27)
0x6bf: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6c0: IF (Stack[-1] == 0) GOTO 0x6c3; Pop(1)

0x6c1: Stack[-2] = "wasted_woman"
0x6c2: Return(); Pop(0)

0x6c3: Push((int) 28)
0x6c4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6c5: IF (Stack[-1] == 0) GOTO 0x6c8; Pop(1)

0x6c6: Stack[-2] = "wasted_male"
0x6c7: Return(); Pop(0)

0x6c8: Push((int) 29)
0x6c9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6ca: IF (Stack[-1] == 0) GOTO 0x6cd; Pop(1)

0x6cb: Stack[-2] = "alkash"
0x6cc: Return(); Pop(0)

0x6cd: Push((int) 30)
0x6ce: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6cf: IF (Stack[-1] == 0) GOTO 0x6d2; Pop(1)

0x6d0: Stack[-2] = "boy"
0x6d1: Return(); Pop(0)

0x6d2: Push((int) 31)
0x6d3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6d4: IF (Stack[-1] == 0) GOTO 0x6d7; Pop(1)

0x6d5: Stack[-2] = "girl"
0x6d6: Return(); Pop(0)

0x6d7: Push((int) 32)
0x6d8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6d9: IF (Stack[-1] == 0) GOTO 0x6dc; Pop(1)

0x6da: Stack[-2] = "littleboy"
0x6db: Return(); Pop(0)

0x6dc: Push((int) 33)
0x6dd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6de: IF (Stack[-1] == 0) GOTO 0x6e1; Pop(1)

0x6df: Stack[-2] = "littlegirl"
0x6e0: Return(); Pop(0)

0x6e1: Push((int) 34)
0x6e2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6e3: IF (Stack[-1] == 0) GOTO 0x6e6; Pop(1)

0x6e4: Stack[-2] = "butcher"
0x6e5: Return(); Pop(0)

0x6e6: Push((int) 35)
0x6e7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6e8: IF (Stack[-1] == 0) GOTO 0x6eb; Pop(1)

0x6e9: Stack[-2] = "dohodyaga"
0x6ea: Return(); Pop(0)

0x6eb: Push((int) 36)
0x6ec: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6ed: IF (Stack[-1] == 0) GOTO 0x6f0; Pop(1)

0x6ee: Stack[-2] = "unosha"
0x6ef: Return(); Pop(0)

0x6f0: Push((int) 37)
0x6f1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6f2: IF (Stack[-1] == 0) GOTO 0x6f5; Pop(1)

0x6f3: Stack[-2] = "vaxxabit"
0x6f4: Return(); Pop(0)

0x6f5: Push((int) 38)
0x6f6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6f7: IF (Stack[-1] == 0) GOTO 0x6fa; Pop(1)

0x6f8: Stack[-2] = "vaxxabitka"
0x6f9: Return(); Pop(0)

0x6fa: Push((int) 39)
0x6fb: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6fc: IF (Stack[-1] == 0) GOTO 0x6ff; Pop(1)

0x6fd: Stack[-2] = "woman"
0x6fe: Return(); Pop(0)

0x6ff: Push((int) 40)
0x700: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x701: IF (Stack[-1] == 0) GOTO 0x704; Pop(1)

0x702: Stack[-2] = "worker"
0x703: Return(); Pop(0)

0x704: Push((int) 42)
0x705: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x706: IF (Stack[-1] == 0) GOTO 0x709; Pop(1)

0x707: Stack[-2] = "whitemask"
0x708: Return(); Pop(0)

0x709: Push((int) 43)
0x70a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x70b: IF (Stack[-1] == 0) GOTO 0x70e; Pop(1)

0x70c: Stack[-2] = "birdmask"
0x70d: Return(); Pop(0)

0x70e: Push((int) 44)
0x70f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x710: IF (Stack[-1] == 0) GOTO 0x713; Pop(1)

0x711: Stack[-2] = "birdmask"
0x712: Return(); Pop(0)

0x713: Push((int) 46)
0x714: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x715: IF (Stack[-1] == 0) GOTO 0x718; Pop(1)

0x716: Stack[-2] = "patrol"
0x717: Return(); Pop(0)

0x718: Push((int) 47)
0x719: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x71a: IF (Stack[-1] == 0) GOTO 0x71d; Pop(1)

0x71b: Stack[-2] = "danko"
0x71c: Return(); Pop(0)

0x71d: Push((int) 48)
0x71e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x71f: IF (Stack[-1] == 0) GOTO 0x722; Pop(1)

0x720: Stack[-2] = "alkash_d"
0x721: Return(); Pop(0)

0x722: Push((int) 49)
0x723: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x724: IF (Stack[-1] == 0) GOTO 0x727; Pop(1)

0x725: Stack[-2] = "boy_d"
0x726: Return(); Pop(0)

0x727: Push((int) 50)
0x728: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x729: IF (Stack[-1] == 0) GOTO 0x72c; Pop(1)

0x72a: Stack[-2] = "butcher_d"
0x72b: Return(); Pop(0)

0x72c: Push((int) 51)
0x72d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x72e: IF (Stack[-1] == 0) GOTO 0x731; Pop(1)

0x72f: Stack[-2] = "dohodyaga_d"
0x730: Return(); Pop(0)

0x731: Push((int) 52)
0x732: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x733: IF (Stack[-1] == 0) GOTO 0x736; Pop(1)

0x734: Stack[-2] = "girl_d"
0x735: Return(); Pop(0)

0x736: Push((int) 53)
0x737: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x738: IF (Stack[-1] == 0) GOTO 0x73b; Pop(1)

0x739: Stack[-2] = "littleboy_d"
0x73a: Return(); Pop(0)

0x73b: Push((int) 54)
0x73c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x73d: IF (Stack[-1] == 0) GOTO 0x740; Pop(1)

0x73e: Stack[-2] = "littlegirl_d"
0x73f: Return(); Pop(0)

0x740: Push((int) 55)
0x741: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x742: IF (Stack[-1] == 0) GOTO 0x745; Pop(1)

0x743: Stack[-2] = "unosha2"
0x744: Return(); Pop(0)

0x745: Push((int) 56)
0x746: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x747: IF (Stack[-1] == 0) GOTO 0x74a; Pop(1)

0x748: Stack[-2] = "unosha_d"
0x749: Return(); Pop(0)

0x74a: Push((int) 57)
0x74b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x74c: IF (Stack[-1] == 0) GOTO 0x74f; Pop(1)

0x74d: Stack[-2] = "unosha2_d"
0x74e: Return(); Pop(0)

0x74f: Push((int) 58)
0x750: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x751: IF (Stack[-1] == 0) GOTO 0x754; Pop(1)

0x752: Stack[-2] = "vaxxabit_d"
0x753: Return(); Pop(0)

0x754: Push((int) 59)
0x755: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x756: IF (Stack[-1] == 0) GOTO 0x759; Pop(1)

0x757: Stack[-2] = "vaxxabitka_d"
0x758: Return(); Pop(0)

0x759: Push((int) 60)
0x75a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x75b: IF (Stack[-1] == 0) GOTO 0x75e; Pop(1)

0x75c: Stack[-2] = "wasted_male_d"
0x75d: Return(); Pop(0)

0x75e: Push((int) 61)
0x75f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x760: IF (Stack[-1] == 0) GOTO 0x763; Pop(1)

0x761: Stack[-2] = "wasted_woman_d"
0x762: Return(); Pop(0)

0x763: Push((int) 62)
0x764: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x765: IF (Stack[-1] == 0) GOTO 0x768; Pop(1)

0x766: Stack[-2] = "woman_d"
0x767: Return(); Pop(0)

0x768: Push((int) 63)
0x769: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x76a: IF (Stack[-1] == 0) GOTO 0x76d; Pop(1)

0x76b: Stack[-2] = "worker2"
0x76c: Return(); Pop(0)

0x76d: Push((int) 64)
0x76e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x76f: IF (Stack[-1] == 0) GOTO 0x772; Pop(1)

0x770: Stack[-2] = "worker_d"
0x771: Return(); Pop(0)

0x772: Push((int) 65)
0x773: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x774: IF (Stack[-1] == 0) GOTO 0x777; Pop(1)

0x775: Stack[-2] = "worker2_d"
0x776: Return(); Pop(0)

0x777: Push((int) 66)
0x778: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x779: IF (Stack[-1] == 0) GOTO 0x77c; Pop(1)

0x77a: Stack[-2] = "burah"
0x77b: Return(); Pop(0)

0x77c: Push((int) 67)
0x77d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x77e: IF (Stack[-1] == 0) GOTO 0x781; Pop(1)

0x77f: Stack[-2] = "gorbun_daughter"
0x780: Return(); Pop(0)

0x781: Push((int) 68)
0x782: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x783: IF (Stack[-1] == 0) GOTO 0x786; Pop(1)

0x784: Stack[-2] = "gorbun"
0x785: Return(); Pop(0)

0x786: Push((int) 69)
0x787: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x788: IF (Stack[-1] == 0) GOTO 0x78b; Pop(1)

0x789: Stack[-2] = "albinos"
0x78a: Return(); Pop(0)

0x78b: Push((int) 70)
0x78c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x78d: IF (Stack[-1] == 0) GOTO 0x790; Pop(1)

0x78e: Stack[-2] = "aglaja"
0x78f: Return(); Pop(0)

0x790: Push((int) 71)
0x791: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x792: IF (Stack[-1] == 0) GOTO 0x795; Pop(1)

0x793: Stack[-2] = "nude"
0x794: Return(); Pop(0)

0x795: Push((int) 72)
0x796: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x797: IF (Stack[-1] == 0) GOTO 0x79a; Pop(1)

0x798: Stack[-2] = "block"
0x799: Return(); Pop(0)

0x79a: Push((int) 73)
0x79b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x79c: IF (Stack[-1] == 0) GOTO 0x79f; Pop(1)

0x79d: Stack[-2] = "officer"
0x79e: Return(); Pop(0)

0x79f: Push((int) 74)
0x7a0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7a1: IF (Stack[-1] == 0) GOTO 0x7a4; Pop(1)

0x7a2: Stack[-2] = "doberman"
0x7a3: Return(); Pop(0)

0x7a4: Push((int) 75)
0x7a5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7a6: IF (Stack[-1] == 0) GOTO 0x7a9; Pop(1)

0x7a7: Stack[-2] = "grabitel"
0x7a8: Return(); Pop(0)

0x7a9: Push((int) 76)
0x7aa: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7ab: IF (Stack[-1] == 0) GOTO 0x7ae; Pop(1)

0x7ac: Stack[-2] = "gatherer_wife"
0x7ad: Return(); Pop(0)

0x7ae: Push((int) 77)
0x7af: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7b0: IF (Stack[-1] == 0) GOTO 0x7b3; Pop(1)

0x7b1: Stack[-2] = "rat_prophet"
0x7b2: Return(); Pop(0)

0x7b3: Push((int) 78)
0x7b4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7b5: IF (Stack[-1] == 0) GOTO 0x7b8; Pop(1)

0x7b6: Stack[-2] = "morlok"
0x7b7: Return(); Pop(0)

0x7b8: Push((int) 79)
0x7b9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7ba: IF (Stack[-1] == 0) GOTO 0x7bd; Pop(1)

0x7bb: Stack[-2] = "soldier"
0x7bc: Return(); Pop(0)

0x7bd: Push((int) 80)
0x7be: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7bf: IF (Stack[-1] == 0) GOTO 0x7c2; Pop(1)

0x7c0: Stack[-2] = "britva"
0x7c1: Return(); Pop(0)

0x7c2: Push((int) 81)
0x7c3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7c4: IF (Stack[-1] == 0) GOTO 0x7c7; Pop(1)

0x7c5: Stack[-2] = "kabaktchik"
0x7c6: Return(); Pop(0)

0x7c7: Push((int) 82)
0x7c8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7c9: IF (Stack[-1] == 0) GOTO 0x7cc; Pop(1)

0x7ca: Stack[-2] = "sanitar"
0x7cb: Return(); Pop(0)

0x7cc: Push((int) 83)
0x7cd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7ce: IF (Stack[-1] == 0) GOTO 0x7d1; Pop(1)

0x7cf: Stack[-2] = "salesman"
0x7d0: Return(); Pop(0)

0x7d1: Push((int) 84)
0x7d2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7d3: IF (Stack[-1] == 0) GOTO 0x7d6; Pop(1)

0x7d4: Stack[-2] = "ayyan"
0x7d5: Return(); Pop(0)

0x7d6: Push((int) 85)
0x7d7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7d8: IF (Stack[-1] == 0) GOTO 0x7db; Pop(1)

0x7d9: Stack[-2] = "petrbirdmask"
0x7da: Return(); Pop(0)

0x7db: Push((int) 86)
0x7dc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7dd: IF (Stack[-1] == 0) GOTO 0x7e0; Pop(1)

0x7de: Stack[-2] = "mogila"
0x7df: Return(); Pop(0)

0x7e0: Push((int) 87)
0x7e1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7e2: IF (Stack[-1] == 0) GOTO 0x7e5; Pop(1)

0x7e3: Stack[-2] = "klikusha"
0x7e4: Return(); Pop(0)

0x7e5: Push((int) 88)
0x7e6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7e7: IF (Stack[-1] == 0) GOTO 0x7ea; Pop(1)

0x7e8: Stack[-2] = "karlik"
0x7e9: Return(); Pop(0)

0x7ea: Push((int) 89)
0x7eb: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7ec: IF (Stack[-1] == 0) GOTO 0x7ef; Pop(1)

0x7ed: Stack[-2] = "lisa"
0x7ee: Return(); Pop(0)

0x7ef: Stack[-2] = ""
0x7f0: Return(); Pop(0)

0x7f1: PushEmpty()
0x7f2: Push((int) 18)
0x7f3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7f4: IF (Stack[-1] == 0) GOTO 0x7f7; Pop(1)

0x7f5: Stack[-2] = (bool) 1
0x7f6: Return(); Pop(0)

0x7f7: Push((int) 24)
0x7f8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7f9: IF (Stack[-1] == 0) GOTO 0x7fc; Pop(1)

0x7fa: Stack[-2] = (bool) 1
0x7fb: Return(); Pop(0)

0x7fc: Push((int) 20)
0x7fd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7fe: IF (Stack[-1] == 0) GOTO 0x801; Pop(1)

0x7ff: Stack[-2] = (bool) 1
0x800: Return(); Pop(0)

0x801: Push((int) 14)
0x802: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x803: IF (Stack[-1] == 0) GOTO 0x806; Pop(1)

0x804: Stack[-2] = (bool) 1
0x805: Return(); Pop(0)

0x806: Push((int) 10)
0x807: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x808: IF (Stack[-1] == 0) GOTO 0x80b; Pop(1)

0x809: Stack[-2] = (bool) 1
0x80a: Return(); Pop(0)

0x80b: Push((int) 17)
0x80c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x80d: IF (Stack[-1] == 0) GOTO 0x810; Pop(1)

0x80e: Stack[-2] = (bool) 1
0x80f: Return(); Pop(0)

0x810: Push((int) 8)
0x811: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x812: IF (Stack[-1] == 0) GOTO 0x815; Pop(1)

0x813: Stack[-2] = (bool) 1
0x814: Return(); Pop(0)

0x815: Stack[-2] = (bool) 0
0x816: Return(); Pop(0)

0x817: PushEmpty()
0x818: Push((int) 18)
0x819: @@ add(Stack[-1])
0x81a: Pop(1)
0x81b: Push((int) 24)
0x81c: @@ add(Stack[-1])
0x81d: Pop(1)
0x81e: Push((int) 20)
0x81f: @@ add(Stack[-1])
0x820: Pop(1)
0x821: Push((int) 14)
0x822: @@ add(Stack[-1])
0x823: Pop(1)
0x824: Push((bool) 0)
0x825: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x826: IF (Stack[-1] == 0) GOTO 0x831; Pop(1)

0x827: Push((int) 10)
0x828: @@ add(Stack[-1])
0x829: Pop(1)
0x82a: Push((int) 17)
0x82b: @@ add(Stack[-1])
0x82c: Pop(1)
0x82d: Push((int) 8)
0x82e: @@ add(Stack[-1])
0x82f: Pop(1)
0x830: GOTO 0x837

0x831: Push((int) 1)
0x832: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x833: IF (Stack[-1] == 0) GOTO 0x837; Pop(1)

0x834: Push((int) 10)
0x835: @@ add(Stack[-1])
0x836: Pop(1)
0x837: Return(); Pop(0)

0x838: PushEmpty()
0x839: Push((int) 6)
0x83a: @@ add(Stack[-1])
0x83b: Pop(1)
0x83c: Push((int) 26)
0x83d: @@ add(Stack[-1])
0x83e: Pop(1)
0x83f: Push((int) 2)
0x840: @@ add(Stack[-1])
0x841: Pop(1)
0x842: Push((int) 22)
0x843: @@ add(Stack[-1])
0x844: Pop(1)
0x845: Push((bool) 0)
0x846: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x847: IF (Stack[-1] == 0) GOTO 0x852; Pop(1)

0x848: Push((int) 15)
0x849: @@ add(Stack[-1])
0x84a: Pop(1)
0x84b: Push((int) 5)
0x84c: @@ add(Stack[-1])
0x84d: Pop(1)
0x84e: Push((int) 16)
0x84f: @@ add(Stack[-1])
0x850: Pop(1)
0x851: GOTO 0x858

0x852: Push((int) 0)
0x853: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x854: IF (Stack[-1] == 0) GOTO 0x858; Pop(1)

0x855: Push((int) 15)
0x856: @@ add(Stack[-1])
0x857: Pop(1)
0x858: Return(); Pop(0)

0x859: PushEmpty()
0x85a: Push((int) 7)
0x85b: @@ add(Stack[-1])
0x85c: Pop(1)
0x85d: Push((int) 23)
0x85e: @@ add(Stack[-1])
0x85f: Pop(1)
0x860: Push((int) 21)
0x861: @@ add(Stack[-1])
0x862: Pop(1)
0x863: Push((int) 9)
0x864: @@ add(Stack[-1])
0x865: Pop(1)
0x866: Push((int) 3)
0x867: @@ add(Stack[-1])
0x868: Pop(1)
0x869: Push((int) 1)
0x86a: @@ add(Stack[-1])
0x86b: Pop(1)
0x86c: Push((int) 11)
0x86d: @@ add(Stack[-1])
0x86e: Pop(1)
0x86f: Push((int) 13)
0x870: @@ add(Stack[-1])
0x871: Pop(1)
0x872: Push((bool) 0)
0x873: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x874: IF (Stack[-1] == 0) GOTO 0x878; Pop(1)

0x875: Push((int) 25)
0x876: @@ add(Stack[-1])
0x877: Pop(1)
0x878: Return(); Pop(0)

0x879: PushEmpty(object, object)
0x87a: Push((int) 1)
0x87b: @@ add(Stack[-1])
0x87c: Pop(1)
0x87d: Push(Stack[-4])
0x87e: IF (Stack[-1] == 0) GOTO 0x886; Pop(1)

0x87f: @ CreateStringVector(Stack[-1])
0x880: Pop(0)
0x881: Push("cot_alexandr@door1")
0x882: @@ add(Stack[-1])
0x883: Pop(1)
0x884: @@ add(Stack[-1])
0x885: Pop(0)
0x886: Push(Stack[-3])
0x887: IF (Stack[-1] == 0) GOTO 0x88b; Pop(1)

0x888: Push("outdoor")
0x889: @@ add(Stack[-1])
0x88a: Pop(1)
0x88b: Push((int) 2)
0x88c: @@ add(Stack[-1])
0x88d: Pop(1)
0x88e: Push(Stack[-4])
0x88f: IF (Stack[-1] == 0) GOTO 0x897; Pop(1)

0x890: @ CreateStringVector(Stack[-1])
0x891: Pop(0)
0x892: Push("shouse1_kabak@door1")
0x893: @@ add(Stack[-1])
0x894: Pop(1)
0x895: @@ add(Stack[-1])
0x896: Pop(0)
0x897: Push(Stack[-3])
0x898: IF (Stack[-1] == 0) GOTO 0x89c; Pop(1)

0x899: Push("outdoor")
0x89a: @@ add(Stack[-1])
0x89b: Pop(1)
0x89c: Push((int) 3)
0x89d: @@ add(Stack[-1])
0x89e: Pop(1)
0x89f: Push(Stack[-4])
0x8a0: IF (Stack[-1] == 0) GOTO 0x8a8; Pop(1)

0x8a1: @ CreateStringVector(Stack[-1])
0x8a2: Pop(0)
0x8a3: Push("cot_anna@door1")
0x8a4: @@ add(Stack[-1])
0x8a5: Pop(1)
0x8a6: @@ add(Stack[-1])
0x8a7: Pop(0)
0x8a8: Push(Stack[-3])
0x8a9: IF (Stack[-1] == 0) GOTO 0x8ad; Pop(1)

0x8aa: Push("outdoor")
0x8ab: @@ add(Stack[-1])
0x8ac: Pop(1)
0x8ad: Push((int) 4)
0x8ae: @@ add(Stack[-1])
0x8af: Pop(1)
0x8b0: Push(Stack[-4])
0x8b1: IF (Stack[-1] == 0) GOTO 0x8b9; Pop(1)

0x8b2: @ CreateStringVector(Stack[-1])
0x8b3: Pop(0)
0x8b4: Push("cot_bigvlad@door1")
0x8b5: @@ add(Stack[-1])
0x8b6: Pop(1)
0x8b7: @@ add(Stack[-1])
0x8b8: Pop(0)
0x8b9: Push(Stack[-3])
0x8ba: IF (Stack[-1] == 0) GOTO 0x8be; Pop(1)

0x8bb: Push("outdoor")
0x8bc: @@ add(Stack[-1])
0x8bd: Pop(1)
0x8be: Push((int) 6)
0x8bf: @@ add(Stack[-1])
0x8c0: Pop(1)
0x8c1: Push(Stack[-4])
0x8c2: IF (Stack[-1] == 0) GOTO 0x8ca; Pop(1)

0x8c3: @ CreateStringVector(Stack[-1])
0x8c4: Pop(0)
0x8c5: Push("cot_georg@door1")
0x8c6: @@ add(Stack[-1])
0x8c7: Pop(1)
0x8c8: @@ add(Stack[-1])
0x8c9: Pop(0)
0x8ca: Push(Stack[-3])
0x8cb: IF (Stack[-1] == 0) GOTO 0x8cf; Pop(1)

0x8cc: Push("outdoor")
0x8cd: @@ add(Stack[-1])
0x8ce: Pop(1)
0x8cf: Push((int) 15)
0x8d0: @@ add(Stack[-1])
0x8d1: Pop(1)
0x8d2: Push(Stack[-4])
0x8d3: IF (Stack[-1] == 0) GOTO 0x8db; Pop(1)

0x8d4: @ CreateStringVector(Stack[-1])
0x8d5: Pop(0)
0x8d6: Push("cot_maria@door1")
0x8d7: @@ add(Stack[-1])
0x8d8: Pop(1)
0x8d9: @@ add(Stack[-1])
0x8da: Pop(0)
0x8db: Push(Stack[-3])
0x8dc: IF (Stack[-1] == 0) GOTO 0x8e0; Pop(1)

0x8dd: Push("outdoor")
0x8de: @@ add(Stack[-1])
0x8df: Pop(1)
0x8e0: Push((int) 9)
0x8e1: @@ add(Stack[-1])
0x8e2: Pop(1)
0x8e3: Push(Stack[-4])
0x8e4: IF (Stack[-1] == 0) GOTO 0x8ec; Pop(1)

0x8e5: @ CreateStringVector(Stack[-1])
0x8e6: Pop(0)
0x8e7: Push("cot_julia@door1")
0x8e8: @@ add(Stack[-1])
0x8e9: Pop(1)
0x8ea: @@ add(Stack[-1])
0x8eb: Pop(0)
0x8ec: Push(Stack[-3])
0x8ed: IF (Stack[-1] == 0) GOTO 0x8f1; Pop(1)

0x8ee: Push("outdoor")
0x8ef: @@ add(Stack[-1])
0x8f0: Pop(1)
0x8f1: Push((int) 10)
0x8f2: @@ add(Stack[-1])
0x8f3: Pop(1)
0x8f4: Push(Stack[-4])
0x8f5: IF (Stack[-1] == 0) GOTO 0x8fd; Pop(1)

0x8f6: @ CreateStringVector(Stack[-1])
0x8f7: Pop(0)
0x8f8: Push("cot_kapella@door1")
0x8f9: @@ add(Stack[-1])
0x8fa: Pop(1)
0x8fb: @@ add(Stack[-1])
0x8fc: Pop(0)
0x8fd: Push(Stack[-3])
0x8fe: IF (Stack[-1] == 0) GOTO 0x902; Pop(1)

0x8ff: Push("outdoor")
0x900: @@ add(Stack[-1])
0x901: Pop(1)
0x902: Push((int) 11)
0x903: @@ add(Stack[-1])
0x904: Pop(1)
0x905: Push(Stack[-4])
0x906: IF (Stack[-1] == 0) GOTO 0x90e; Pop(1)

0x907: @ CreateStringVector(Stack[-1])
0x908: Pop(0)
0x909: Push("cot_katerina@door1")
0x90a: @@ add(Stack[-1])
0x90b: Pop(1)
0x90c: @@ add(Stack[-1])
0x90d: Pop(0)
0x90e: Push(Stack[-3])
0x90f: IF (Stack[-1] == 0) GOTO 0x913; Pop(1)

0x910: Push("outdoor")
0x911: @@ add(Stack[-1])
0x912: Pop(1)
0x913: Push((int) 13)
0x914: @@ add(Stack[-1])
0x915: Pop(1)
0x916: Push(Stack[-4])
0x917: IF (Stack[-1] == 0) GOTO 0x91f; Pop(1)

0x918: @ CreateStringVector(Stack[-1])
0x919: Pop(0)
0x91a: Push("cot_lara@door1")
0x91b: @@ add(Stack[-1])
0x91c: Pop(1)
0x91d: @@ add(Stack[-1])
0x91e: Pop(0)
0x91f: Push(Stack[-3])
0x920: IF (Stack[-1] == 0) GOTO 0x924; Pop(1)

0x921: Push("outdoor")
0x922: @@ add(Stack[-1])
0x923: Pop(1)
0x924: Push((int) 18)
0x925: @@ add(Stack[-1])
0x926: Pop(1)
0x927: Push(Stack[-4])
0x928: IF (Stack[-1] == 0) GOTO 0x930; Pop(1)

0x929: @ CreateStringVector(Stack[-1])
0x92a: Pop(0)
0x92b: Push("vagon_mishka@door1")
0x92c: @@ add(Stack[-1])
0x92d: Pop(1)
0x92e: @@ add(Stack[-1])
0x92f: Pop(0)
0x930: Push(Stack[-3])
0x931: IF (Stack[-1] == 0) GOTO 0x935; Pop(1)

0x932: Push("outdoor")
0x933: @@ add(Stack[-1])
0x934: Pop(1)
0x935: Push((int) 19)
0x936: @@ add(Stack[-1])
0x937: Pop(1)
0x938: Push(Stack[-4])
0x939: IF (Stack[-1] == 0) GOTO 0x941; Pop(1)

0x93a: @ CreateStringVector(Stack[-1])
0x93b: Pop(0)
0x93c: Push("house_vlad@door1")
0x93d: @@ add(Stack[-1])
0x93e: Pop(1)
0x93f: @@ add(Stack[-1])
0x940: Pop(0)
0x941: Push(Stack[-3])
0x942: IF (Stack[-1] == 0) GOTO 0x946; Pop(1)

0x943: Push("outdoor")
0x944: @@ add(Stack[-1])
0x945: Pop(1)
0x946: Push((int) 20)
0x947: @@ add(Stack[-1])
0x948: Pop(1)
0x949: Push(Stack[-4])
0x94a: IF (Stack[-1] == 0) GOTO 0x952; Pop(1)

0x94b: @ CreateStringVector(Stack[-1])
0x94c: Pop(0)
0x94d: Push("warehouse_notkin@door1")
0x94e: @@ add(Stack[-1])
0x94f: Pop(1)
0x950: @@ add(Stack[-1])
0x951: Pop(0)
0x952: Push(Stack[-3])
0x953: IF (Stack[-1] == 0) GOTO 0x957; Pop(1)

0x954: Push("outdoor")
0x955: @@ add(Stack[-1])
0x956: Pop(1)
0x957: Push((int) 21)
0x958: @@ add(Stack[-1])
0x959: Pop(1)
0x95a: Push(Stack[-4])
0x95b: IF (Stack[-1] == 0) GOTO 0x963; Pop(1)

0x95c: @ CreateStringVector(Stack[-1])
0x95d: Pop(0)
0x95e: Push("dt_house_1_04@door1")
0x95f: @@ add(Stack[-1])
0x960: Pop(1)
0x961: @@ add(Stack[-1])
0x962: Pop(0)
0x963: Push(Stack[-3])
0x964: IF (Stack[-1] == 0) GOTO 0x968; Pop(1)

0x965: Push("outdoor")
0x966: @@ add(Stack[-1])
0x967: Pop(1)
0x968: Push((int) 22)
0x969: @@ add(Stack[-1])
0x96a: Pop(1)
0x96b: Push(Stack[-4])
0x96c: IF (Stack[-1] == 0) GOTO 0x977; Pop(1)

0x96d: @ CreateStringVector(Stack[-1])
0x96e: Pop(0)
0x96f: Push("house_petr@door1")
0x970: @@ add(Stack[-1])
0x971: Pop(1)
0x972: Push("house_petr@door2")
0x973: @@ add(Stack[-1])
0x974: Pop(1)
0x975: @@ add(Stack[-1])
0x976: Pop(0)
0x977: Push(Stack[-3])
0x978: IF (Stack[-1] == 0) GOTO 0x97c; Pop(1)

0x979: Push("outdoor")
0x97a: @@ add(Stack[-1])
0x97b: Pop(1)
0x97c: Push((int) 24)
0x97d: @@ add(Stack[-1])
0x97e: Pop(1)
0x97f: Push(Stack[-4])
0x980: IF (Stack[-1] == 0) GOTO 0x98b; Pop(1)

0x981: @ CreateStringVector(Stack[-1])
0x982: Pop(0)
0x983: Push("house_spi4ka@door1")
0x984: @@ add(Stack[-1])
0x985: Pop(1)
0x986: Push("house_spi4ka@door2")
0x987: @@ add(Stack[-1])
0x988: Pop(1)
0x989: @@ add(Stack[-1])
0x98a: Pop(0)
0x98b: Push(Stack[-3])
0x98c: IF (Stack[-1] == 0) GOTO 0x990; Pop(1)

0x98d: Push("outdoor")
0x98e: @@ add(Stack[-1])
0x98f: Pop(1)
0x990: Push((int) 26)
0x991: @@ add(Stack[-1])
0x992: Pop(1)
0x993: Push(Stack[-4])
0x994: IF (Stack[-1] == 0) GOTO 0x99c; Pop(1)

0x995: @ CreateStringVector(Stack[-1])
0x996: Pop(0)
0x997: Push("cot_viktor@door1")
0x998: @@ add(Stack[-1])
0x999: Pop(1)
0x99a: @@ add(Stack[-1])
0x99b: Pop(0)
0x99c: Push(Stack[-3])
0x99d: IF (Stack[-1] == 0) GOTO 0x9a1; Pop(1)

0x99e: Push("outdoor")
0x99f: @@ add(Stack[-1])
0x9a0: Pop(1)
0x9a1: Push((int) 8)
0x9a2: @@ add(Stack[-1])
0x9a3: Pop(1)
0x9a4: Push(Stack[-4])
0x9a5: IF (Stack[-1] == 0) GOTO 0x9aa; Pop(1)

0x9a6: @ CreateStringVector(Stack[-1])
0x9a7: Pop(0)
0x9a8: @@ add(Stack[-1])
0x9a9: Pop(0)
0x9aa: Push(Stack[-3])
0x9ab: IF (Stack[-1] == 0) GOTO 0x9af; Pop(1)

0x9ac: Push("outdoor")
0x9ad: @@ add(Stack[-1])
0x9ae: Pop(1)
0x9af: Push((int) 14)
0x9b0: @@ add(Stack[-1])
0x9b1: Pop(1)
0x9b2: Push(Stack[-4])
0x9b3: IF (Stack[-1] == 0) GOTO 0x9bb; Pop(1)

0x9b4: @ CreateStringVector(Stack[-1])
0x9b5: Pop(0)
0x9b6: Push("storojka@door1")
0x9b7: @@ add(Stack[-1])
0x9b8: Pop(1)
0x9b9: @@ add(Stack[-1])
0x9ba: Pop(0)
0x9bb: Push(Stack[-3])
0x9bc: IF (Stack[-1] == 0) GOTO 0x9c0; Pop(1)

0x9bd: Push("outdoor")
0x9be: @@ add(Stack[-1])
0x9bf: Pop(1)
0x9c0: Push((int) 17)
0x9c1: @@ add(Stack[-1])
0x9c2: Pop(1)
0x9c3: Push(Stack[-4])
0x9c4: IF (Stack[-1] == 0) GOTO 0x9cc; Pop(1)

0x9c5: @ CreateStringVector(Stack[-1])
0x9c6: Pop(0)
0x9c7: Push("termitnik_mat@door1")
0x9c8: @@ add(Stack[-1])
0x9c9: Pop(1)
0x9ca: @@ add(Stack[-1])
0x9cb: Pop(0)
0x9cc: Push(Stack[-3])
0x9cd: IF (Stack[-1] == 0) GOTO 0x9d1; Pop(1)

0x9ce: Push("termitnik")
0x9cf: @@ add(Stack[-1])
0x9d0: Pop(1)
0x9d1: Push((int) 16)
0x9d2: @@ add(Stack[-1])
0x9d3: Pop(1)
0x9d4: Push(Stack[-4])
0x9d5: IF (Stack[-1] == 0) GOTO 0x9da; Pop(1)

0x9d6: @ CreateStringVector(Stack[-1])
0x9d7: Pop(0)
0x9d8: @@ add(Stack[-1])
0x9d9: Pop(0)
0x9da: Push(Stack[-3])
0x9db: IF (Stack[-1] == 0) GOTO 0x9df; Pop(1)

0x9dc: Push("outdoor")
0x9dd: @@ add(Stack[-1])
0x9de: Pop(1)
0x9df: Push((int) 7)
0x9e0: @@ add(Stack[-1])
0x9e1: Pop(1)
0x9e2: Push(Stack[-4])
0x9e3: IF (Stack[-1] == 0) GOTO 0x9eb; Pop(1)

0x9e4: @ CreateStringVector(Stack[-1])
0x9e5: Pop(0)
0x9e6: Push("warehouse_grif@door1")
0x9e7: @@ add(Stack[-1])
0x9e8: Pop(1)
0x9e9: @@ add(Stack[-1])
0x9ea: Pop(0)
0x9eb: Push(Stack[-3])
0x9ec: IF (Stack[-1] == 0) GOTO 0x9f0; Pop(1)

0x9ed: Push("outdoor")
0x9ee: @@ add(Stack[-1])
0x9ef: Pop(1)
0x9f0: Push((int) 23)
0x9f1: @@ add(Stack[-1])
0x9f2: Pop(1)
0x9f3: Push(Stack[-4])
0x9f4: IF (Stack[-1] == 0) GOTO 0x9fc; Pop(1)

0x9f5: @ CreateStringVector(Stack[-1])
0x9f6: Pop(0)
0x9f7: Push("warehouse_rubin@door1")
0x9f8: @@ add(Stack[-1])
0x9f9: Pop(1)
0x9fa: @@ add(Stack[-1])
0x9fb: Pop(0)
0x9fc: Push(Stack[-3])
0x9fd: IF (Stack[-1] == 0) GOTO 0xa01; Pop(1)

0x9fe: Push("outdoor")
0x9ff: @@ add(Stack[-1])
0xa00: Pop(1)
0xa01: Push((int) 5)
0xa02: @@ add(Stack[-1])
0xa03: Pop(1)
0xa04: Push(Stack[-4])
0xa05: IF (Stack[-1] == 0) GOTO 0xa0d; Pop(1)

0xa06: @ CreateStringVector(Stack[-1])
0xa07: Pop(0)
0xa08: Push("cot_eva@door1")
0xa09: @@ add(Stack[-1])
0xa0a: Pop(1)
0xa0b: @@ add(Stack[-1])
0xa0c: Pop(0)
0xa0d: Push(Stack[-3])
0xa0e: IF (Stack[-1] == 0) GOTO 0xa12; Pop(1)

0xa0f: Push("outdoor")
0xa10: @@ add(Stack[-1])
0xa11: Pop(1)
0xa12: Push((int) 25)
0xa13: @@ add(Stack[-1])
0xa14: Pop(1)
0xa15: Push(Stack[-4])
0xa16: IF (Stack[-1] == 0) GOTO 0xa1b; Pop(1)

0xa17: @ CreateStringVector(Stack[-1])
0xa18: Pop(0)
0xa19: @@ add(Stack[-1])
0xa1a: Pop(0)
0xa1b: Push(Stack[-3])
0xa1c: IF (Stack[-1] == 0) GOTO 0xa20; Pop(1)

0xa1d: Push("outdoor")
0xa1e: @@ add(Stack[-1])
0xa1f: Pop(1)
0xa20: Return(); Pop(2)

0xa21: Stack[-1] = 0
0xa22: PushEmpty(int, int)
0xa23: Push("vol_")
0xa24: Pop(1); Push(Stack[-1] + Stack[-4]);
0xa25: @ GetVariable(Stack[-1], Stack[-2])
0xa26: Pop(1)
0xa27: Push((int) 4)
0xa28: Pop(1); Push(Stack[-2] & Stack[-1]);
0xa29: Push((int) 0)
0xa2a: Stack[-6] = Stack[-2] != Stack[-1]; Pop(2);
0xa2b: Return(); Pop(2)

0xa2c: PushEmpty(int, int)
0xa2d: Push("vol_")
0xa2e: Pop(1); Push(Stack[-1] + Stack[-4]);
0xa2f: @ GetVariable(Stack[-1], Stack[-2])
0xa30: Pop(1)
0xa31: Push((int) 16)
0xa32: Pop(1); Push(Stack[-2] & Stack[-1]);
0xa33: Push((int) 0)
0xa34: Stack[-6] = Stack[-2] != Stack[-1]; Pop(2);
0xa35: Return(); Pop(2)

0xa36: PushEmpty()
0xa37: PushEmpty(int, int, int, float)
0xa38: Stack[-3] = (int) 522709
0xa39: Stack[-2] = (int) 522708
0xa3a: Stack[-1] = Stack[-5]
0xa3b: Call2 0xa8b

0xa3c: Stack[-6] = Stack[-4]
0xa3d: Pop(4)
0xa3e: Return(); Pop(0)

0xa3f: PushEmpty()
0xa40: PushEmpty(int, int, int, float)
0xa41: Stack[-3] = (int) 522711
0xa42: Stack[-2] = (int) 522710
0xa43: Stack[-1] = Stack[-5]
0xa44: Call2 0xa8b

0xa45: Stack[-6] = Stack[-4]
0xa46: Pop(4)
0xa47: Return(); Pop(0)

0xa48: PushEmpty(object, object)
0xa49: Push((int) 697)
0xa4a: Push((int) 1)
0xa4b: Push((int) 535405)
0xa4c: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xa4d: Pop(3)
0xa4e: PushEmpty(bool, object, int)
0xa4f: Stack[-2] = Stack[-4]
0xa50: Stack[-1] = (int) 695
0xa51: Call2 0xa6f

0xa52: Pop(3)
0xa53: Return(); Pop(2)

0xa54: Stack[-1] = 0
0xa55: PushEmpty(object, object)
0xa56: Push((int) 698)
0xa57: Push((int) 1)
0xa58: Push((int) 535406)
0xa59: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xa5a: Pop(3)
0xa5b: PushEmpty(bool, object, int)
0xa5c: Stack[-2] = Stack[-4]
0xa5d: Stack[-1] = (int) 696
0xa5e: Call2 0xa6f

0xa5f: Pop(3)
0xa60: Return(); Pop(2)

0xa61: Stack[-1] = 0
0xa62: PushEmpty(object, object)
0xa63: @ GetDiaryRoot(Stack[-1])
0xa64: Pop(0)
0xa65: Pop(0); Push((bool) Stack[-1] == 0)
0xa66: IF (Stack[-1] == 0) GOTO 0xa6c; Pop(1)

0xa67: Push("Can't retrieve diary root")
0xa68: @ Trace(Stack[-1])
0xa69: Pop(1)
0xa6a: Stack[-3] = (bool) 0
0xa6b: Return(); Pop(2)

0xa6c: Stack[-3] = Stack[-1]
0xa6d: Return(); Pop(2)

0xa6e: Stack[-1] = 0
0xa6f: PushEmpty(object, object, int, object, object, int)
0xa70: PushEmpty(object)
0xa71: Call2 0xa62

0xa72: Stack[-4] = Stack[-1]
0xa73: Pop(1)
0xa74: @@ Find(Stack[-7], Stack[-2])
0xa75: Pop(0)
0xa76: Pop(0); Push((bool) Stack[-2] == 0)
0xa77: IF (Stack[-1] == 0) GOTO 0xa7e; Pop(1)

0xa78: Push("Can't find diary parent with id: ")
0xa79: Pop(1); Push(Stack[-1] + Stack[-8]);
0xa7a: @ Trace(Stack[-1])
0xa7b: Pop(1)
0xa7c: Stack[-9] = (bool) 0
0xa7d: Return(); Pop(6)

0xa7e: @@ AddChild(Stack[-8])
0xa7f: Pop(0)
0xa80: Push((int) 7)
0xa81: @ SendWorldWndMessage(Stack[-1])
0xa82: Pop(1)
0xa83: @@ GetCategory(Stack[-1])
0xa84: Pop(0)
0xa85: @ SetDiarySection(Stack[-1])
0xa86: Pop(0)
0xa87: Stack[-9] = (bool) 0
0xa88: Return(); Pop(6)

0xa89: Stack[-2] = 0
0xa8a: Stack[-3] = 0
0xa8b: PushEmpty(int, int)
0xa8c: @ AddMessage(Stack[-5], Stack[-4], Stack[-3], Stack[-1])
0xa8d: Pop(0)
0xa8e: Push((int) 6)
0xa8f: @ SendWorldWndMessage(Stack[-1])
0xa90: Pop(1)
0xa91: Stack[-6] = Stack[-1]
0xa92: Return(); Pop(2)

0xa93: PushEmpty(object, object)
0xa94: @ FindActor(Stack[-1], Stack[-4])
0xa95: Pop(0)
0xa96: Pop(0); Push((bool) Stack[-1] == 0)
0xa97: IF (Stack[-1] == 0) GOTO 0xa9f; Pop(1)

0xa98: Push("Door ")
0xa99: Pop(1); Push(Stack[-1] + Stack[-5]);
0xa9a: Push(" not found")
0xa9b: Pop(2); Push(Stack[-2] + Stack[-1]);
0xa9c: @ Trace(Stack[-1])
0xa9d: Pop(1)
0xa9e: GOTO 0xaa2

0xa9f: Push("dlocked")
0xaa0: @@ SetProperty(Stack[-1], Stack[-4])
0xaa1: Pop(1)
0xaa2: Return(); Pop(2)

0xaa3: Stack[-1] = 0
0xaa4: PushEmpty(object, int, int, int, object, int, int, int)
0xaa5: @ CreateIntVector(Stack[-4])
0xaa6: Pop(0)
0xaa7: PushEmpty(object, bool, int)
0xaa8: Stack[-3] = Stack[-7]
0xaa9: Stack[-2] = (bool) 0
0xaaa: Stack[-1] = (int) -1
0xaab: Call2 0x817

0xaac: Pop(3)
0xaad: @@ size(Stack[-3])
0xaae: Pop(0)
0xaaf: Stack[-2] = (int) 0
0xab0: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0xab1: IF (Stack[-1] == 0) GOTO 0xac7; Pop(1)

0xab2: @@ get(Stack[-1], Stack[-2])
0xab3: Pop(0)
0xab4: PushEmpty(bool)
0xab5: Stack[-1] = (bool) 1
0xab6: PushEmpty(bool, int)
0xab7: Stack[-1] = Stack[-4]
0xab8: Call2 0xa2c

0xab9: Pop(1)
0xaba: IF (Stack[-1] == 0) GOTO 0xac1; Pop(1)

0xabb: PushEmpty(bool, int)
0xabc: Stack[-1] = Stack[-4]
0xabd: Call2 0xa22

0xabe: Pop(1)
0xabf: IF (Stack[-1] == 0) GOTO 0xac1; Pop(1)

0xac0: Stack[-1] = (bool) 0
0xac1: IF (Stack[-1] == 0) GOTO 0xac4; Pop(1)

0xac2: Stack[-9] = (bool) 0
0xac3: Return(); Pop(8)

0xac4: Push((int) 1)
0xac5: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0xac6: GOTO 0xab0

0xac7: Stack[-9] = (bool) 1
0xac8: Return(); Pop(8)

0xac9: Stack[-4] = 0
0xaca: PushEmpty(object, int, int, int, object, int, int, int)
0xacb: @ CreateIntVector(Stack[-4])
0xacc: Pop(0)
0xacd: PushEmpty(object, bool, int)
0xace: Stack[-3] = Stack[-7]
0xacf: Stack[-2] = (bool) 0
0xad0: Stack[-1] = (int) -1
0xad1: Call2 0x838

0xad2: Pop(3)
0xad3: @@ size(Stack[-3])
0xad4: Pop(0)
0xad5: Stack[-2] = (int) 0
0xad6: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0xad7: IF (Stack[-1] == 0) GOTO 0xaed; Pop(1)

0xad8: @@ get(Stack[-1], Stack[-2])
0xad9: Pop(0)
0xada: PushEmpty(bool)
0xadb: Stack[-1] = (bool) 1
0xadc: PushEmpty(bool, int)
0xadd: Stack[-1] = Stack[-4]
0xade: Call2 0xa2c

0xadf: Pop(1)
0xae0: IF (Stack[-1] == 0) GOTO 0xae7; Pop(1)

0xae1: PushEmpty(bool, int)
0xae2: Stack[-1] = Stack[-4]
0xae3: Call2 0xa22

0xae4: Pop(1)
0xae5: IF (Stack[-1] == 0) GOTO 0xae7; Pop(1)

0xae6: Stack[-1] = (bool) 0
0xae7: IF (Stack[-1] == 0) GOTO 0xaea; Pop(1)

0xae8: Stack[-9] = (bool) 0
0xae9: Return(); Pop(8)

0xaea: Push((int) 1)
0xaeb: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0xaec: GOTO 0xad6

0xaed: Stack[-9] = (bool) 1
0xaee: Return(); Pop(8)

0xaef: Stack[-4] = 0
0xaf0: PushEmpty(object, int, int, int, object, int, int, int)
0xaf1: @ CreateIntVector(Stack[-4])
0xaf2: Pop(0)
0xaf3: PushEmpty(object, bool, int)
0xaf4: Stack[-3] = Stack[-7]
0xaf5: Stack[-2] = (bool) 0
0xaf6: Stack[-1] = (int) -1
0xaf7: Call2 0x859

0xaf8: Pop(3)
0xaf9: @@ size(Stack[-3])
0xafa: Pop(0)
0xafb: Stack[-2] = (int) 0
0xafc: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0xafd: IF (Stack[-1] == 0) GOTO 0xb13; Pop(1)

0xafe: @@ get(Stack[-1], Stack[-2])
0xaff: Pop(0)
0xb00: PushEmpty(bool)
0xb01: Stack[-1] = (bool) 1
0xb02: PushEmpty(bool, int)
0xb03: Stack[-1] = Stack[-4]
0xb04: Call2 0xa2c

0xb05: Pop(1)
0xb06: IF (Stack[-1] == 0) GOTO 0xb0d; Pop(1)

0xb07: PushEmpty(bool, int)
0xb08: Stack[-1] = Stack[-4]
0xb09: Call2 0xa22

0xb0a: Pop(1)
0xb0b: IF (Stack[-1] == 0) GOTO 0xb0d; Pop(1)

0xb0c: Stack[-1] = (bool) 0
0xb0d: IF (Stack[-1] == 0) GOTO 0xb10; Pop(1)

0xb0e: Stack[-9] = (bool) 0
0xb0f: Return(); Pop(8)

0xb10: Push((int) 1)
0xb11: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0xb12: GOTO 0xafc

0xb13: Stack[-9] = (bool) 1
0xb14: Return(); Pop(8)

0xb15: Stack[-4] = 0
0xb16: PushEmpty(int, int)
0xb17: Stack[-1] = (int) 0
0xb18: PushEmpty(bool)
0xb19: Call2 0xaf0

0xb1a: Pop(0)
0xb1b: IF (Stack[-1] == 0) GOTO 0xb1e; Pop(1)

0xb1c: Push((int) 1)
0xb1d: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0xb1e: PushEmpty(bool)
0xb1f: Call2 0xaca

0xb20: Pop(0)
0xb21: IF (Stack[-1] == 0) GOTO 0xb24; Pop(1)

0xb22: Push((int) 1)
0xb23: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0xb24: PushEmpty(bool)
0xb25: Call2 0xaa4

0xb26: Pop(0)
0xb27: IF (Stack[-1] == 0) GOTO 0xb2a; Pop(1)

0xb28: Push((int) 1)
0xb29: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0xb2a: Push((int) 2)
0xb2b: Stack[-4] = Stack[-2] >= Stack[-1]; Pop(1);
0xb2c: Return(); Pop(2)

