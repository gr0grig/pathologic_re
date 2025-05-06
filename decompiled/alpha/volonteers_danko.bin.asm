GlobalVarCount = 0

Strings:
	add
	get
	rescue
	rescue_locked
	update
	cleanup
	size
	Volonteers update...
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
	GetLocator
	Locator 
	 doesn't exist
	AddStationaryActor
	Door 
	 not found
	SetProperty
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
	cot_alexandr@door1
	shouse1_kabak@door1
	cot_anna@door1
	cot_bigvad@door1
	cot_georg@door1
	cot_georg@door2
	cot_julia@door1
	cot_kapella@door1
	cot_katerina@door1
	cot_lara@door1
	vagon_mishka@door1
	house_vlad@door1
	warehouse_notkin@door1
	dt_house_1_04@door1
	house_petr@door1
	house_spi4ka@door1
	house_spi4ka@door2
	cot_viktor@door1
	cot_viktor@door2

Import:
	CreateIntVector (1 args)
	Hold (0 args)
	Trace (1 args)
	irand (2 args)
	CreateObjectVector (1 args)
	SetVariable (2 args)
	GetVariable (2 args)
	GetMainOutdoorScene (1 args)
	FindActor (2 args)
	_strlwr (1 args)
	CreateStringVector (1 args)

RunOp = 0x19e
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object, object, object, object, int) Params = 0
		EVENT_26 Op = 0x1a5 Vars = (string, string)


0x0: PushEmpty(int, object, object, int, object, object)
0x1: Stack[-3] = (int) 0
0x2: Push((int) 12)
0x3: Pop(1); Push((bool) Stack[-4] < Stack[-1])
0x4: IF (Stack[-1] == 0) GOTO 0xd; Pop(1)

0x5: @ CreateIntVector(Stack[-2])
0x6: Pop(0)
0x7: @@ add(Stack[-2])
0x8: Pop(0)
0x9: Stack[-2] = 0
0xa: Push((int) 1)
0xb: Stack[-4] = Stack[-4] + Stack[-1]; Pop(1);
0xc: GOTO 0x2

0xd: Push((int) 0)
0xe: @@ get(Stack[-2], Stack[-1])
0xf: Pop(1)
0x10: Push((int) 1)
0x11: @@ get(Stack[-2], Stack[-1])
0x12: Pop(1)
0x13: PushEmpty(int, int)
0x14: Stack[-1] = (int) 11
0x15: Call 0x2e6

0x16: Pop(1)
0x17: @@ add(Stack[-1])
0x18: Pop(1)
0x19: PushEmpty(int, int)
0x1a: Stack[-1] = (int) 18
0x1b: Call 0x2e6

0x1c: Pop(1)
0x1d: @@ add(Stack[-1])
0x1e: Pop(1)
0x1f: PushEmpty(int, int)
0x20: Stack[-1] = (int) 21
0x21: Call 0x2e6

0x22: Pop(1)
0x23: @@ add(Stack[-1])
0x24: Pop(1)
0x25: Push((int) 2)
0x26: @@ get(Stack[-2], Stack[-1])
0x27: Pop(1)
0x28: PushEmpty(int, int)
0x29: Stack[-1] = (int) 2
0x2a: Call 0x2e6

0x2b: Pop(1)
0x2c: @@ add(Stack[-1])
0x2d: Pop(1)
0x2e: PushEmpty(int, int)
0x2f: Stack[-1] = (int) 9
0x30: Call 0x2e6

0x31: Pop(1)
0x32: @@ add(Stack[-1])
0x33: Pop(1)
0x34: PushEmpty(int, int)
0x35: Stack[-1] = (int) 11
0x36: Call 0x2e6

0x37: Pop(1)
0x38: @@ add(Stack[-1])
0x39: Pop(1)
0x3a: PushEmpty(int, int)
0x3b: Stack[-1] = (int) 13
0x3c: Call 0x2e6

0x3d: Pop(1)
0x3e: @@ add(Stack[-1])
0x3f: Pop(1)
0x40: PushEmpty(int, int)
0x41: Stack[-1] = (int) 24
0x42: Call 0x2e6

0x43: Pop(1)
0x44: @@ add(Stack[-1])
0x45: Pop(1)
0x46: Push((int) 3)
0x47: @@ get(Stack[-2], Stack[-1])
0x48: Pop(1)
0x49: PushEmpty(int, int)
0x4a: Stack[-1] = (int) 10
0x4b: Call 0x2e6

0x4c: Pop(1)
0x4d: @@ add(Stack[-1])
0x4e: Pop(1)
0x4f: PushEmpty(int, int)
0x50: Stack[-1] = (int) 11
0x51: Call 0x2e6

0x52: Pop(1)
0x53: @@ add(Stack[-1])
0x54: Pop(1)
0x55: PushEmpty(int, int)
0x56: Stack[-1] = (int) 18
0x57: Call 0x2e6

0x58: Pop(1)
0x59: @@ add(Stack[-1])
0x5a: Pop(1)
0x5b: PushEmpty(int, int)
0x5c: Stack[-1] = (int) 20
0x5d: Call 0x2e6

0x5e: Pop(1)
0x5f: @@ add(Stack[-1])
0x60: Pop(1)
0x61: PushEmpty(int, int)
0x62: Stack[-1] = (int) 24
0x63: Call 0x2e6

0x64: Pop(1)
0x65: @@ add(Stack[-1])
0x66: Pop(1)
0x67: PushEmpty(int, int)
0x68: Stack[-1] = (int) 26
0x69: Call 0x2e6

0x6a: Pop(1)
0x6b: @@ add(Stack[-1])
0x6c: Pop(1)
0x6d: Push((int) 4)
0x6e: @@ get(Stack[-2], Stack[-1])
0x6f: Pop(1)
0x70: PushEmpty(int, int)
0x71: Stack[-1] = (int) 9
0x72: Call 0x2e6

0x73: Pop(1)
0x74: @@ add(Stack[-1])
0x75: Pop(1)
0x76: PushEmpty(int, int)
0x77: Stack[-1] = (int) 10
0x78: Call 0x2e6

0x79: Pop(1)
0x7a: @@ add(Stack[-1])
0x7b: Pop(1)
0x7c: PushEmpty(int, int)
0x7d: Stack[-1] = (int) 18
0x7e: Call 0x2e6

0x7f: Pop(1)
0x80: @@ add(Stack[-1])
0x81: Pop(1)
0x82: PushEmpty(int, int)
0x83: Stack[-1] = (int) 20
0x84: Call 0x2e6

0x85: Pop(1)
0x86: @@ add(Stack[-1])
0x87: Pop(1)
0x88: PushEmpty(int, int)
0x89: Stack[-1] = (int) 21
0x8a: Call 0x2e6

0x8b: Pop(1)
0x8c: @@ add(Stack[-1])
0x8d: Pop(1)
0x8e: PushEmpty(int, int)
0x8f: Stack[-1] = (int) 24
0x90: Call 0x2e6

0x91: Pop(1)
0x92: @@ add(Stack[-1])
0x93: Pop(1)
0x94: Push((int) 5)
0x95: @@ get(Stack[-2], Stack[-1])
0x96: Pop(1)
0x97: PushEmpty(int, int)
0x98: Stack[-1] = (int) 20
0x99: Call 0x2e6

0x9a: Pop(1)
0x9b: @@ add(Stack[-1])
0x9c: Pop(1)
0x9d: Push((int) 6)
0x9e: @@ get(Stack[-2], Stack[-1])
0x9f: Pop(1)
0xa0: PushEmpty(int, int)
0xa1: Stack[-1] = (int) 3
0xa2: Call 0x2e6

0xa3: Pop(1)
0xa4: @@ add(Stack[-1])
0xa5: Pop(1)
0xa6: PushEmpty(int, int)
0xa7: Stack[-1] = (int) 9
0xa8: Call 0x2e6

0xa9: Pop(1)
0xaa: @@ add(Stack[-1])
0xab: Pop(1)
0xac: PushEmpty(int, int)
0xad: Stack[-1] = (int) 10
0xae: Call 0x2e6

0xaf: Pop(1)
0xb0: @@ add(Stack[-1])
0xb1: Pop(1)
0xb2: PushEmpty(int, int)
0xb3: Stack[-1] = (int) 11
0xb4: Call 0x2e6

0xb5: Pop(1)
0xb6: @@ add(Stack[-1])
0xb7: Pop(1)
0xb8: PushEmpty(int, int)
0xb9: Stack[-1] = (int) 13
0xba: Call 0x2e6

0xbb: Pop(1)
0xbc: @@ add(Stack[-1])
0xbd: Pop(1)
0xbe: PushEmpty(int, int)
0xbf: Stack[-1] = (int) 18
0xc0: Call 0x2e6

0xc1: Pop(1)
0xc2: @@ add(Stack[-1])
0xc3: Pop(1)
0xc4: PushEmpty(int, int)
0xc5: Stack[-1] = (int) 19
0xc6: Call 0x2e6

0xc7: Pop(1)
0xc8: @@ add(Stack[-1])
0xc9: Pop(1)
0xca: PushEmpty(int, int)
0xcb: Stack[-1] = (int) 20
0xcc: Call 0x2e6

0xcd: Pop(1)
0xce: @@ add(Stack[-1])
0xcf: Pop(1)
0xd0: PushEmpty(int, int)
0xd1: Stack[-1] = (int) 21
0xd2: Call 0x2e6

0xd3: Pop(1)
0xd4: @@ add(Stack[-1])
0xd5: Pop(1)
0xd6: PushEmpty(int, int)
0xd7: Stack[-1] = (int) 24
0xd8: Call 0x2e6

0xd9: Pop(1)
0xda: @@ add(Stack[-1])
0xdb: Pop(1)
0xdc: PushEmpty(int, int)
0xdd: Stack[-1] = (int) 26
0xde: Call 0x2e6

0xdf: Pop(1)
0xe0: @@ add(Stack[-1])
0xe1: Pop(1)
0xe2: Push((int) 7)
0xe3: @@ get(Stack[-2], Stack[-1])
0xe4: Pop(1)
0xe5: PushEmpty(int, int)
0xe6: Stack[-1] = (int) 3
0xe7: Call 0x2e6

0xe8: Pop(1)
0xe9: @@ add(Stack[-1])
0xea: Pop(1)
0xeb: PushEmpty(int, int)
0xec: Stack[-1] = (int) 9
0xed: Call 0x2e6

0xee: Pop(1)
0xef: @@ add(Stack[-1])
0xf0: Pop(1)
0xf1: PushEmpty(int, int)
0xf2: Stack[-1] = (int) 11
0xf3: Call 0x2e6

0xf4: Pop(1)
0xf5: @@ add(Stack[-1])
0xf6: Pop(1)
0xf7: PushEmpty(int, int)
0xf8: Stack[-1] = (int) 13
0xf9: Call 0x2e6

0xfa: Pop(1)
0xfb: @@ add(Stack[-1])
0xfc: Pop(1)
0xfd: PushEmpty(int, int)
0xfe: Stack[-1] = (int) 18
0xff: Call 0x2e6

0x100: Pop(1)
0x101: @@ add(Stack[-1])
0x102: Pop(1)
0x103: PushEmpty(int, int)
0x104: Stack[-1] = (int) 19
0x105: Call 0x2e6

0x106: Pop(1)
0x107: @@ add(Stack[-1])
0x108: Pop(1)
0x109: PushEmpty(int, int)
0x10a: Stack[-1] = (int) 20
0x10b: Call 0x2e6

0x10c: Pop(1)
0x10d: @@ add(Stack[-1])
0x10e: Pop(1)
0x10f: PushEmpty(int, int)
0x110: Stack[-1] = (int) 21
0x111: Call 0x2e6

0x112: Pop(1)
0x113: @@ add(Stack[-1])
0x114: Pop(1)
0x115: PushEmpty(int, int)
0x116: Stack[-1] = (int) 24
0x117: Call 0x2e6

0x118: Pop(1)
0x119: @@ add(Stack[-1])
0x11a: Pop(1)
0x11b: PushEmpty(int, int)
0x11c: Stack[-1] = (int) 26
0x11d: Call 0x2e6

0x11e: Pop(1)
0x11f: @@ add(Stack[-1])
0x120: Pop(1)
0x121: Push((int) 8)
0x122: @@ get(Stack[-2], Stack[-1])
0x123: Pop(1)
0x124: PushEmpty(int, int)
0x125: Stack[-1] = (int) 3
0x126: Call 0x2e6

0x127: Pop(1)
0x128: @@ add(Stack[-1])
0x129: Pop(1)
0x12a: PushEmpty(int, int)
0x12b: Stack[-1] = (int) 9
0x12c: Call 0x2e6

0x12d: Pop(1)
0x12e: @@ add(Stack[-1])
0x12f: Pop(1)
0x130: PushEmpty(int, int)
0x131: Stack[-1] = (int) 10
0x132: Call 0x2e6

0x133: Pop(1)
0x134: @@ add(Stack[-1])
0x135: Pop(1)
0x136: PushEmpty(int, int)
0x137: Stack[-1] = (int) 11
0x138: Call 0x2e6

0x139: Pop(1)
0x13a: @@ add(Stack[-1])
0x13b: Pop(1)
0x13c: PushEmpty(int, int)
0x13d: Stack[-1] = (int) 13
0x13e: Call 0x2e6

0x13f: Pop(1)
0x140: @@ add(Stack[-1])
0x141: Pop(1)
0x142: PushEmpty(int, int)
0x143: Stack[-1] = (int) 18
0x144: Call 0x2e6

0x145: Pop(1)
0x146: @@ add(Stack[-1])
0x147: Pop(1)
0x148: PushEmpty(int, int)
0x149: Stack[-1] = (int) 19
0x14a: Call 0x2e6

0x14b: Pop(1)
0x14c: @@ add(Stack[-1])
0x14d: Pop(1)
0x14e: PushEmpty(int, int)
0x14f: Stack[-1] = (int) 20
0x150: Call 0x2e6

0x151: Pop(1)
0x152: @@ add(Stack[-1])
0x153: Pop(1)
0x154: PushEmpty(int, int)
0x155: Stack[-1] = (int) 21
0x156: Call 0x2e6

0x157: Pop(1)
0x158: @@ add(Stack[-1])
0x159: Pop(1)
0x15a: PushEmpty(int, int)
0x15b: Stack[-1] = (int) 24
0x15c: Call 0x2e6

0x15d: Pop(1)
0x15e: @@ add(Stack[-1])
0x15f: Pop(1)
0x160: Push((int) 9)
0x161: @@ get(Stack[-2], Stack[-1])
0x162: Pop(1)
0x163: PushEmpty(int, int)
0x164: Stack[-1] = (int) 3
0x165: Call 0x2e6

0x166: Pop(1)
0x167: @@ add(Stack[-1])
0x168: Pop(1)
0x169: PushEmpty(int, int)
0x16a: Stack[-1] = (int) 9
0x16b: Call 0x2e6

0x16c: Pop(1)
0x16d: @@ add(Stack[-1])
0x16e: Pop(1)
0x16f: PushEmpty(int, int)
0x170: Stack[-1] = (int) 10
0x171: Call 0x2e6

0x172: Pop(1)
0x173: @@ add(Stack[-1])
0x174: Pop(1)
0x175: PushEmpty(int, int)
0x176: Stack[-1] = (int) 11
0x177: Call 0x2e6

0x178: Pop(1)
0x179: @@ add(Stack[-1])
0x17a: Pop(1)
0x17b: PushEmpty(int, int)
0x17c: Stack[-1] = (int) 13
0x17d: Call 0x2e6

0x17e: Pop(1)
0x17f: @@ add(Stack[-1])
0x180: Pop(1)
0x181: PushEmpty(int, int)
0x182: Stack[-1] = (int) 18
0x183: Call 0x2e6

0x184: Pop(1)
0x185: @@ add(Stack[-1])
0x186: Pop(1)
0x187: PushEmpty(int, int)
0x188: Stack[-1] = (int) 19
0x189: Call 0x2e6

0x18a: Pop(1)
0x18b: @@ add(Stack[-1])
0x18c: Pop(1)
0x18d: PushEmpty(int, int)
0x18e: Stack[-1] = (int) 21
0x18f: Call 0x2e6

0x190: Pop(1)
0x191: @@ add(Stack[-1])
0x192: Pop(1)
0x193: PushEmpty(int, int)
0x194: Stack[-1] = (int) 24
0x195: Call 0x2e6

0x196: Pop(1)
0x197: @@ add(Stack[-1])
0x198: Pop(1)
0x199: Return(); Pop(6)

0x19a: Stack[-1] = 0
0x19b: PushEmpty()
0x19c: Stack[-2] = (int) 2
0x19d: Return(); Pop(0)

0x19e: PushEmpty()
0x19f: Call 0x2a7

0x1a0: Pop(0)
0x1a1: @ Hold()
0x1a2: Pop(0)
0x1a3: GOTO 0x1a1

0x1a4: Return(); Pop(0)

0x1a5: PushEmpty(int, int)
0x1a6: @ Trace(Stack[-4])
0x1a7: Pop(0)
0x1a8: Push("rescue")
0x1a9: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x1aa: IF (Stack[-1] == 0) GOTO 0x1b8; Pop(1)

0x1ab: PushEmpty(int)
0x1ac: PushEmpty(int, int)
0x1ad: PushEmpty(int, string)
0x1ae: Stack[-1] = Stack[-8]
0x1af: Call 0x3b4

0x1b0: Stack[-3] = Stack[-2]
0x1b1: Pop(2)
0x1b2: Call 0x2e6

0x1b3: Stack[-3] = Stack[-2]
0x1b4: Pop(2)
0x1b5: Call 0x358

0x1b6: Pop(1)
0x1b7: GOTO 0x1db

0x1b8: Push("rescue_locked")
0x1b9: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x1ba: IF (Stack[-1] == 0) GOTO 0x1ce; Pop(1)

0x1bb: Stack[-1] = (int) 0
0x1bc: PushEmpty(int)
0x1bd: Call 0x2e1

0x1be: Pop(0)
0x1bf: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x1c0: IF (Stack[-1] == 0) GOTO 0x1cd; Pop(1)

0x1c1: PushEmpty(bool, int)
0x1c2: Stack[-1] = Stack[-3]
0x1c3: Call 0x303

0x1c4: Pop(1)
0x1c5: IF (Stack[-1] == 0) GOTO 0x1ca; Pop(1)

0x1c6: PushEmpty(int)
0x1c7: Stack[-1] = Stack[-2]
0x1c8: Call 0x358

0x1c9: Pop(1)
0x1ca: Push((int) 1)
0x1cb: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x1cc: GOTO 0x1bc

0x1cd: GOTO 0x1db

0x1ce: Push("update")
0x1cf: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x1d0: IF (Stack[-1] == 0) GOTO 0x1d5; Pop(1)

0x1d1: PushEmpty()
0x1d2: Call 0x210

0x1d3: Pop(0)
0x1d4: GOTO 0x1db

0x1d5: Push("cleanup")
0x1d6: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x1d7: IF (Stack[-1] == 0) GOTO 0x1db; Pop(1)

0x1d8: PushEmpty()
0x1d9: Call 0x291

0x1da: Pop(0)
0x1db: Return(); Pop(2)

0x1dc: PushEmpty(int, int)
0x1dd: Stack[-1] = (int) 0
0x1de: Pop(0); Push((bool) Stack[-1] < Stack[-4])
0x1df: IF (Stack[-1] == 0) GOTO 0x1e7; Pop(1)

0x1e0: PushEmpty(int, int)
0x1e1: Stack[-1] = Stack[-5]
0x1e2: Call 0x1e8

0x1e3: Pop(2)
0x1e4: Push((int) 1)
0x1e5: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x1e6: GOTO 0x1de

0x1e7: Return(); Pop(2)

0x1e8: PushEmpty(object, int, int, int, int, int, object, int, int, int, int, int)
0x1e9: @@ get(Stack[-6], Stack[-13])
0x1ea: Pop(0)
0x1eb: @@ size(Stack[-5])
0x1ec: Pop(0)
0x1ed: Push((int) 0)
0x1ee: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x1ef: IF (Stack[-1] == 0) GOTO 0x1f2; Pop(1)

0x1f0: Stack[-14] = (int) -1
0x1f1: Return(); Pop(12)

0x1f2: Stack[-4] = (int) 0
0x1f3: Push((int) 1)
0x1f4: Pop(1); Push((bool) Stack[-6] > Stack[-1])
0x1f5: IF (Stack[-1] == 0) GOTO 0x1f8; Pop(1)

0x1f6: @ irand(Stack[-4], Stack[-5])
0x1f7: Pop(0)
0x1f8: Stack[-3] = (int) 0
0x1f9: Pop(0); Push((bool) Stack[-3] < Stack[-5])
0x1fa: IF (Stack[-1] == 0) GOTO 0x20d; Pop(1)

0x1fb: Pop(0); Push(Stack[-3] + Stack[-4]);
0x1fc: Stack[-3] = Stack[-1] % Stack[-6]; Pop(1);
0x1fd: @@ get(Stack[-1], Stack[-2])
0x1fe: Pop(0)
0x1ff: PushEmpty(bool, int)
0x200: Stack[-1] = Stack[-3]
0x201: Call 0x30f

0x202: Pop(1)
0x203: IF (Stack[-1] == 0) GOTO 0x20a; Pop(1)

0x204: PushEmpty(int)
0x205: Stack[-1] = Stack[-2]
0x206: Call 0x380

0x207: Pop(1)
0x208: Stack[-14] = Stack[-1]
0x209: Return(); Pop(12)

0x20a: Push((int) 1)
0x20b: Stack[-4] = Stack[-4] + Stack[-1]; Pop(1);
0x20c: GOTO 0x1f9

0x20d: Stack[-14] = (int) -1
0x20e: Return(); Pop(12)

0x20f: Stack[-6] = 0
0x210: PushEmpty(int, int, object, int, int, string, int, int, int, int, int, int, int, int, object, int, int, string, int, int, int, int, int, int)
0x211: Push("Volonteers update...")
0x212: @ Trace(Stack[-1])
0x213: Pop(1)
0x214: Stack[-12] = (int) 0
0x215: PushEmpty(int)
0x216: Call 0x2e1

0x217: Pop(0)
0x218: Pop(1); Push((bool) Stack[-13] < Stack[-1])
0x219: IF (Stack[-1] == 0) GOTO 0x242; Pop(1)

0x21a: PushEmpty(int, int)
0x21b: Stack[-1] = Stack[-14]
0x21c: Call 0x2f8

0x21d: Stack[-13] = Stack[-2]
0x21e: Pop(2)
0x21f: PushEmpty(bool, int)
0x220: Stack[-1] = Stack[-14]
0x221: Call 0x303

0x222: Pop(1)
0x223: IF (Stack[-1] == 0) GOTO 0x228; Pop(1)

0x224: PushEmpty(int)
0x225: Stack[-1] = Stack[-13]
0x226: Call 0x327

0x227: Pop(1)
0x228: PushEmpty(bool, int)
0x229: Stack[-1] = Stack[-14]
0x22a: Call 0x31b

0x22b: Pop(1)
0x22c: IF (Stack[-1] == 0) GOTO 0x23f; Pop(1)

0x22d: @@ get(Stack[-10], Stack[-12])
0x22e: Pop(0)
0x22f: @@ size(Stack[-9])
0x230: Pop(0)
0x231: Stack[-8] = (int) 0
0x232: Pop(0); Push((bool) Stack[-8] < Stack[-9])
0x233: IF (Stack[-1] == 0) GOTO 0x23e; Pop(1)

0x234: @@ get(Stack[-7], Stack[-8])
0x235: Pop(0)
0x236: PushEmpty(string, bool)
0x237: Stack[-2] = Stack[-9]
0x238: Stack[-1] = (bool) 1
0x239: Call 0x3a4

0x23a: Pop(2)
0x23b: Push((int) 1)
0x23c: Stack[-9] = Stack[-9] + Stack[-1]; Pop(1);
0x23d: GOTO 0x232

0x23e: Stack[-10] = 0
0x23f: Push((int) 1)
0x240: Stack[-13] = Stack[-13] + Stack[-1]; Pop(1);
0x241: GOTO 0x215

0x242: Push((int) 1)
0x243: Stack[4 + Tasks[-1].StackPointer] = Stack[4 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x244: PushEmpty(int, int)
0x245: PushEmpty(int, int)
0x246: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x247: Call 0x19b

0x248: Stack[-4] = Stack[-2]
0x249: Pop(2)
0x24a: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x24b: Call 0x1dc

0x24c: Pop(2)
0x24d: Stack[-6] = (int) 0
0x24e: Stack[-5] = (int) 0
0x24f: PushEmpty(int)
0x250: Call 0x2e1

0x251: Pop(0)
0x252: Pop(1); Push((bool) Stack[-6] < Stack[-1])
0x253: IF (Stack[-1] == 0) GOTO 0x26b; Pop(1)

0x254: PushEmpty(int, int)
0x255: Stack[-1] = Stack[-7]
0x256: Call 0x2f8

0x257: Stack[-6] = Stack[-2]
0x258: Pop(2)
0x259: PushEmpty(bool, int)
0x25a: Stack[-1] = Stack[-7]
0x25b: Call 0x303

0x25c: Pop(1)
0x25d: IF (Stack[-1] == 0) GOTO 0x268; Pop(1)

0x25e: Push("Volonteer : ")
0x25f: PushEmpty(string, int)
0x260: Stack[-1] = Stack[-7]
0x261: Call 0x51c

0x262: Pop(1)
0x263: Pop(2); Push(Stack[-2] + Stack[-1]);
0x264: @ Trace(Stack[-1])
0x265: Pop(1)
0x266: Push((int) 1)
0x267: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x268: Push((int) 1)
0x269: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x26a: GOTO 0x24f

0x26b: Stack[-3] = (int) 0
0x26c: Stack[-2] = (int) 0
0x26d: PushEmpty(int)
0x26e: Call 0x2e1

0x26f: Pop(0)
0x270: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x271: IF (Stack[-1] == 0) GOTO 0x289; Pop(1)

0x272: PushEmpty(int, int)
0x273: Stack[-1] = Stack[-4]
0x274: Call 0x2f8

0x275: Stack[-3] = Stack[-2]
0x276: Pop(2)
0x277: PushEmpty(bool, int)
0x278: Stack[-1] = Stack[-4]
0x279: Call 0x31b

0x27a: Pop(1)
0x27b: IF (Stack[-1] == 0) GOTO 0x286; Pop(1)

0x27c: Push((int) 1)
0x27d: Stack[-4] = Stack[-4] + Stack[-1]; Pop(1);
0x27e: Push("Diseased volonteer : ")
0x27f: PushEmpty(string, int)
0x280: Stack[-1] = Stack[-4]
0x281: Call 0x51c

0x282: Pop(1)
0x283: Pop(2); Push(Stack[-2] + Stack[-1]);
0x284: @ Trace(Stack[-1])
0x285: Pop(1)
0x286: Push((int) 1)
0x287: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x288: GOTO 0x26d

0x289: Push("Today volonteers: ")
0x28a: Pop(1); Push(Stack[-1] + Stack[-7]);
0x28b: Push(", diseased: ")
0x28c: Pop(2); Push(Stack[-2] + Stack[-1]);
0x28d: Pop(1); Push(Stack[-1] + Stack[-4]);
0x28e: @ Trace(Stack[-1])
0x28f: Pop(1)
0x290: Return(); Pop(24)

0x291: PushEmpty(int, object, int, object)
0x292: EventDisable(26)
0x293: Push("Volonteers Cleanup...")
0x294: @ Trace(Stack[-1])
0x295: Pop(1)
0x296: Stack[-2] = (int) 0
0x297: PushEmpty(int)
0x298: Call 0x2e1

0x299: Pop(0)
0x29a: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x29b: IF (Stack[-1] == 0) GOTO 0x2a6; Pop(1)

0x29c: @@ get(Stack[-1], Stack[-2])
0x29d: Pop(0)
0x29e: Pop(0); Push(( Stack[-1] != 0 )
0x29f: IF (Stack[-1] == 0) GOTO 0x2a2; Pop(1)

0x2a0: @@ Remove()
0x2a1: Pop(0)
0x2a2: Stack[-1] = 0
0x2a3: Push((int) 1)
0x2a4: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x2a5: GOTO 0x297

0x2a6: Return(); Pop(4)

0x2a7: PushEmpty(object, object, object, object, int, object, object, object, object, object, int, object)
0x2a8: Push("Volonteers Init...")
0x2a9: @ Trace(Stack[-1])
0x2aa: Pop(1)
0x2ab: @ CreateIntVector(Stack[-6])
0x2ac: Pop(0)
0x2ad: @ CreateObjectVector(Stack[-5])
0x2ae: Pop(0)
0x2af: PushEmpty(object, object)
0x2b0: Stack[-2] = Stack[-8]
0x2b1: Stack[-1] = Stack[-7]
0x2b2: Call 0x682

0x2b3: Pop(2)
0x2b4: Stack[0 + Tasks[-1].StackPointer] = Stack[-6]
0x2b5: Stack[3 + Tasks[-1].StackPointer] = Stack[-5]
0x2b6: @ CreateObjectVector(Stack[-4])
0x2b7: Pop(0)
0x2b8: PushEmpty(object)
0x2b9: Stack[-1] = Stack[-5]
0x2ba: Call 0x0

0x2bb: Pop(1)
0x2bc: Stack[1 + Tasks[-1].StackPointer] = Stack[-4]
0x2bd: @ CreateObjectVector(Stack[-3])
0x2be: Pop(0)
0x2bf: Stack[2 + Tasks[-1].StackPointer] = Stack[-3]
0x2c0: Stack[-2] = (int) 0
0x2c1: PushEmpty(int)
0x2c2: Call 0x2e1

0x2c3: Pop(0)
0x2c4: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x2c5: IF (Stack[-1] == 0) GOTO 0x2d4; Pop(1)

0x2c6: PushEmpty(string, int)
0x2c7: Stack[-1] = Stack[-4]
0x2c8: Call 0x2fd

0x2c9: Pop(1)
0x2ca: Push((int) 0)
0x2cb: @ SetVariable(Stack[-2], Stack[-1])
0x2cc: Pop(2)
0x2cd: Stack[-1] = 0
0x2ce: @@ add(Stack[-1])
0x2cf: Pop(0)
0x2d0: Stack[-1] = 0
0x2d1: Push((int) 1)
0x2d2: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x2d3: GOTO 0x2c1

0x2d4: Stack[4 + Tasks[-1].StackPointer] = (int)0
0x2d5: Push("Volonteers count: ")
0x2d6: PushEmpty(int)
0x2d7: Call 0x2e1

0x2d8: Pop(0)
0x2d9: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2da: @ Trace(Stack[-1])
0x2db: Pop(1)
0x2dc: Return(); Pop(12)

0x2dd: Stack[-3] = 0
0x2de: Stack[-4] = 0
0x2df: Stack[-5] = 0
0x2e0: Stack[-6] = 0
0x2e1: PushEmpty(int, int)
0x2e2: @@ size(Stack[-1])
0x2e3: Pop(0)
0x2e4: Stack[-3] = Stack[-1]
0x2e5: Return(); Pop(2)

0x2e6: PushEmpty(int, int, int, int)
0x2e7: Stack[-2] = (int) 0
0x2e8: PushEmpty(int)
0x2e9: Call 0x2e1

0x2ea: Pop(0)
0x2eb: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x2ec: IF (Stack[-1] == 0) GOTO 0x2f6; Pop(1)

0x2ed: @@ get(Stack[-1], Stack[-2])
0x2ee: Pop(0)
0x2ef: Pop(0); Push((bool) Stack[-5] == Stack[-1])
0x2f0: IF (Stack[-1] == 0) GOTO 0x2f3; Pop(1)

0x2f1: Stack[-6] = Stack[-2]
0x2f2: Return(); Pop(4)

0x2f3: Push((int) 1)
0x2f4: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x2f5: GOTO 0x2e8

0x2f6: Stack[-6] = (int) -1
0x2f7: Return(); Pop(4)

0x2f8: PushEmpty(int, int)
0x2f9: @@ get(Stack[-1], Stack[-3])
0x2fa: Pop(0)
0x2fb: Stack[-4] = Stack[-1]
0x2fc: Return(); Pop(2)

0x2fd: PushEmpty(int, int)
0x2fe: @@ get(Stack[-1], Stack[-3])
0x2ff: Pop(0)
0x300: Push("vol_")
0x301: Stack[-5] = Stack[-1] + Stack[-2]; Pop(1);
0x302: Return(); Pop(2)

0x303: PushEmpty(int, int)
0x304: PushEmpty(string, int)
0x305: Stack[-1] = Stack[-5]
0x306: Call 0x2fd

0x307: Pop(1)
0x308: @ GetVariable(Stack[-1], Stack[-2])
0x309: Pop(1)
0x30a: Push((int) 2)
0x30b: Pop(1); Push(Stack[-2] & Stack[-1]);
0x30c: Push((int) 0)
0x30d: Stack[-6] = Stack[-2] != Stack[-1]; Pop(2);
0x30e: Return(); Pop(2)

0x30f: PushEmpty(int, int)
0x310: PushEmpty(string, int)
0x311: Stack[-1] = Stack[-5]
0x312: Call 0x2fd

0x313: Pop(1)
0x314: @ GetVariable(Stack[-1], Stack[-2])
0x315: Pop(1)
0x316: Push((int) 1)
0x317: Pop(1); Push(Stack[-2] & Stack[-1]);
0x318: Push((int) 0)
0x319: Stack[-6] = Stack[-2] == Stack[-1]; Pop(2);
0x31a: Return(); Pop(2)

0x31b: PushEmpty(int, int)
0x31c: PushEmpty(string, int)
0x31d: Stack[-1] = Stack[-5]
0x31e: Call 0x2fd

0x31f: Pop(1)
0x320: @ GetVariable(Stack[-1], Stack[-2])
0x321: Pop(1)
0x322: Push((int) 4)
0x323: Pop(1); Push(Stack[-2] & Stack[-1]);
0x324: Push((int) 0)
0x325: Stack[-6] = Stack[-2] != Stack[-1]; Pop(2);
0x326: Return(); Pop(2)

0x327: PushEmpty(int, object, object, string, int, object, object, string)
0x328: PushEmpty(string, int)
0x329: Stack[-1] = Stack[-11]
0x32a: Call 0x2fd

0x32b: Pop(1)
0x32c: @ GetVariable(Stack[-1], Stack[-5])
0x32d: Pop(1)
0x32e: PushEmpty(string, int)
0x32f: Stack[-1] = Stack[-11]
0x330: Call 0x2fd

0x331: Pop(1)
0x332: Push((int) 8)
0x333: Pop(1); Push(Stack[-6] & Stack[-1]);
0x334: Push((int) 5)
0x335: Pop(2); Push(Stack[-2] | Stack[-1]);
0x336: @ SetVariable(Stack[-2], Stack[-1])
0x337: Pop(2)
0x338: @@ get(Stack[-3], Stack[-9])
0x339: Pop(0)
0x33a: Pop(0); Push((bool) Stack[-3] == 0)
0x33b: IF (Stack[-1] == 0) GOTO 0x356; Pop(1)

0x33c: @ GetMainOutdoorScene(Stack[-2])
0x33d: Pop(0)
0x33e: PushEmpty(string, int)
0x33f: PushEmpty(int, int)
0x340: Stack[-1] = Stack[-13]
0x341: Call 0x2f8

0x342: Stack[-3] = Stack[-2]
0x343: Pop(2)
0x344: Call 0x51c

0x345: Stack[-3] = Stack[-2]
0x346: Pop(2)
0x347: PushEmpty(object, object, string, string, string)
0x348: Stack[-4] = Stack[-7]
0x349: Push("pt_volonteer_")
0x34a: Stack[-4] = Stack[-1] + Stack[-7]; Pop(1);
0x34b: Stack[-2] = "pers_birdmask"
0x34c: Push("vbirdmask_")
0x34d: Pop(1); Push(Stack[-1] + Stack[-7]);
0x34e: Push(".xml")
0x34f: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x350: Call 0x392

0x351: Stack[-8] = Stack[-5]
0x352: Pop(5)
0x353: @@ set(Stack[-9], Stack[-3])
0x354: Pop(0)
0x355: Stack[-2] = 0
0x356: Return(); Pop(8)

0x357: Stack[-3] = 0
0x358: PushEmpty(int, object, object, int, int, string, int, object, object, int, int, string)
0x359: PushEmpty(string, int)
0x35a: Stack[-1] = Stack[-15]
0x35b: Call 0x2fd

0x35c: Pop(1)
0x35d: @ GetVariable(Stack[-1], Stack[-7])
0x35e: Pop(1)
0x35f: PushEmpty(string, int)
0x360: Stack[-1] = Stack[-15]
0x361: Call 0x2fd

0x362: Pop(1)
0x363: Push((int) 1)
0x364: @ SetVariable(Stack[-2], Stack[-1])
0x365: Pop(2)
0x366: @@ get(Stack[-5], Stack[-13])
0x367: Pop(0)
0x368: Pop(0); Push(( Stack[-5] != 0 )
0x369: IF (Stack[-1] == 0) GOTO 0x36c; Pop(1)

0x36a: @@ Remove()
0x36b: Pop(0)
0x36c: @@ get(Stack[-4], Stack[-13])
0x36d: Pop(0)
0x36e: @@ size(Stack[-3])
0x36f: Pop(0)
0x370: Stack[-2] = (int) 0
0x371: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0x372: IF (Stack[-1] == 0) GOTO 0x37d; Pop(1)

0x373: @@ get(Stack[-1], Stack[-2])
0x374: Pop(0)
0x375: PushEmpty(string, bool)
0x376: Stack[-2] = Stack[-3]
0x377: Stack[-1] = (bool) 0
0x378: Call 0x3a4

0x379: Pop(2)
0x37a: Push((int) 1)
0x37b: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x37c: GOTO 0x371

0x37d: Return(); Pop(12)

0x37e: Stack[-4] = 0
0x37f: Stack[-5] = 0
0x380: PushEmpty(int, int)
0x381: PushEmpty(string, int)
0x382: Stack[-1] = Stack[-5]
0x383: Call 0x2fd

0x384: Pop(1)
0x385: @ GetVariable(Stack[-1], Stack[-2])
0x386: Pop(1)
0x387: PushEmpty(string, int)
0x388: Stack[-1] = Stack[-5]
0x389: Call 0x2fd

0x38a: Pop(1)
0x38b: Push((int) 8)
0x38c: Pop(1); Push(Stack[-3] & Stack[-1]);
0x38d: Push((int) 3)
0x38e: Pop(2); Push(Stack[-2] | Stack[-1]);
0x38f: @ SetVariable(Stack[-2], Stack[-1])
0x390: Pop(2)
0x391: Return(); Pop(2)

0x392: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x393: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0x394: Pop(0)
0x395: Pop(0); Push((bool) Stack[-4] == 0)
0x396: IF (Stack[-1] == 0) GOTO 0x39f; Pop(1)

0x397: Push("Locator ")
0x398: Pop(1); Push(Stack[-1] + Stack[-12]);
0x399: Push(" doesn't exist")
0x39a: Pop(2); Push(Stack[-2] + Stack[-1]);
0x39b: @ Trace(Stack[-1])
0x39c: Pop(1)
0x39d: Stack[-1] = 0
0x39e: GOTO 0x3a1

0x39f: @@ AddStationaryActor(Stack[-1], Stack[-3], Stack[-2], Stack[-10], Stack[-9])
0x3a0: Pop(0)
0x3a1: Stack[-13] = Stack[-1]
0x3a2: Return(); Pop(8)

0x3a3: Stack[-1] = 0
0x3a4: PushEmpty(object, object)
0x3a5: @ FindActor(Stack[-1], Stack[-4])
0x3a6: Pop(0)
0x3a7: Pop(0); Push((bool) Stack[-1] == 0)
0x3a8: IF (Stack[-1] == 0) GOTO 0x3af; Pop(1)

0x3a9: Push("Door ")
0x3aa: Pop(1); Push(Stack[-1] + Stack[-5]);
0x3ab: Push(" not found")
0x3ac: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3ad: @ Trace(Stack[-1])
0x3ae: Pop(1)
0x3af: Push("locked")
0x3b0: @@ SetProperty(Stack[-1], Stack[-4])
0x3b1: Pop(1)
0x3b2: Return(); Pop(2)

0x3b3: Stack[-1] = 0
0x3b4: PushEmpty()
0x3b5: @ _strlwr(Stack[-1])
0x3b6: Pop(0)
0x3b7: Push("alexandr")
0x3b8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3b9: IF (Stack[-1] == 0) GOTO 0x3bc; Pop(1)

0x3ba: Stack[-2] = (int) 1
0x3bb: Return(); Pop(0)

0x3bc: Push("andrei")
0x3bd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3be: IF (Stack[-1] == 0) GOTO 0x3c1; Pop(1)

0x3bf: Stack[-2] = (int) 2
0x3c0: Return(); Pop(0)

0x3c1: Push("anna")
0x3c2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3c3: IF (Stack[-1] == 0) GOTO 0x3c6; Pop(1)

0x3c4: Stack[-2] = (int) 3
0x3c5: Return(); Pop(0)

0x3c6: Push("bigvlad")
0x3c7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3c8: IF (Stack[-1] == 0) GOTO 0x3cb; Pop(1)

0x3c9: Stack[-2] = (int) 4
0x3ca: Return(); Pop(0)

0x3cb: Push("eva")
0x3cc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3cd: IF (Stack[-1] == 0) GOTO 0x3d0; Pop(1)

0x3ce: Stack[-2] = (int) 5
0x3cf: Return(); Pop(0)

0x3d0: Push("georg")
0x3d1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3d2: IF (Stack[-1] == 0) GOTO 0x3d5; Pop(1)

0x3d3: Stack[-2] = (int) 6
0x3d4: Return(); Pop(0)

0x3d5: Push("grif")
0x3d6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3d7: IF (Stack[-1] == 0) GOTO 0x3da; Pop(1)

0x3d8: Stack[-2] = (int) 7
0x3d9: Return(); Pop(0)

0x3da: Push("han")
0x3db: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3dc: IF (Stack[-1] == 0) GOTO 0x3df; Pop(1)

0x3dd: Stack[-2] = (int) 8
0x3de: Return(); Pop(0)

0x3df: Push("julia")
0x3e0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3e1: IF (Stack[-1] == 0) GOTO 0x3e4; Pop(1)

0x3e2: Stack[-2] = (int) 9
0x3e3: Return(); Pop(0)

0x3e4: Push("kapella")
0x3e5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3e6: IF (Stack[-1] == 0) GOTO 0x3e9; Pop(1)

0x3e7: Stack[-2] = (int) 10
0x3e8: Return(); Pop(0)

0x3e9: Push("katerina")
0x3ea: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3eb: IF (Stack[-1] == 0) GOTO 0x3ee; Pop(1)

0x3ec: Stack[-2] = (int) 11
0x3ed: Return(); Pop(0)

0x3ee: Push("klara")
0x3ef: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3f0: IF (Stack[-1] == 0) GOTO 0x3f3; Pop(1)

0x3f1: Stack[-2] = (int) 12
0x3f2: Return(); Pop(0)

0x3f3: Push("lara")
0x3f4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3f5: IF (Stack[-1] == 0) GOTO 0x3f8; Pop(1)

0x3f6: Stack[-2] = (int) 13
0x3f7: Return(); Pop(0)

0x3f8: Push("laska")
0x3f9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3fa: IF (Stack[-1] == 0) GOTO 0x3fd; Pop(1)

0x3fb: Stack[-2] = (int) 14
0x3fc: Return(); Pop(0)

0x3fd: Push("maria")
0x3fe: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3ff: IF (Stack[-1] == 0) GOTO 0x402; Pop(1)

0x400: Stack[-2] = (int) 15
0x401: Return(); Pop(0)

0x402: Push("mark")
0x403: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x404: IF (Stack[-1] == 0) GOTO 0x407; Pop(1)

0x405: Stack[-2] = (int) 16
0x406: Return(); Pop(0)

0x407: Push("mat")
0x408: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x409: IF (Stack[-1] == 0) GOTO 0x40c; Pop(1)

0x40a: Stack[-2] = (int) 17
0x40b: Return(); Pop(0)

0x40c: Push("mishka")
0x40d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x40e: IF (Stack[-1] == 0) GOTO 0x411; Pop(1)

0x40f: Stack[-2] = (int) 18
0x410: Return(); Pop(0)

0x411: Push("mladvlad")
0x412: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x413: IF (Stack[-1] == 0) GOTO 0x416; Pop(1)

0x414: Stack[-2] = (int) 19
0x415: Return(); Pop(0)

0x416: Push("notkin")
0x417: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x418: IF (Stack[-1] == 0) GOTO 0x41b; Pop(1)

0x419: Stack[-2] = (int) 20
0x41a: Return(); Pop(0)

0x41b: Push("ospina")
0x41c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x41d: IF (Stack[-1] == 0) GOTO 0x420; Pop(1)

0x41e: Stack[-2] = (int) 21
0x41f: Return(); Pop(0)

0x420: Push("petr")
0x421: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x422: IF (Stack[-1] == 0) GOTO 0x425; Pop(1)

0x423: Stack[-2] = (int) 22
0x424: Return(); Pop(0)

0x425: Push("rubin")
0x426: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x427: IF (Stack[-1] == 0) GOTO 0x42a; Pop(1)

0x428: Stack[-2] = (int) 23
0x429: Return(); Pop(0)

0x42a: Push("spi4ka")
0x42b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x42c: IF (Stack[-1] == 0) GOTO 0x42f; Pop(1)

0x42d: Stack[-2] = (int) 24
0x42e: Return(); Pop(0)

0x42f: Push("starshina")
0x430: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x431: IF (Stack[-1] == 0) GOTO 0x434; Pop(1)

0x432: Stack[-2] = (int) 25
0x433: Return(); Pop(0)

0x434: Push("viktor")
0x435: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x436: IF (Stack[-1] == 0) GOTO 0x439; Pop(1)

0x437: Stack[-2] = (int) 26
0x438: Return(); Pop(0)

0x439: Push("wasted_woman")
0x43a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x43b: IF (Stack[-1] == 0) GOTO 0x43e; Pop(1)

0x43c: Stack[-2] = (int) 27
0x43d: Return(); Pop(0)

0x43e: Push("wasted_male")
0x43f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x440: IF (Stack[-1] == 0) GOTO 0x443; Pop(1)

0x441: Stack[-2] = (int) 28
0x442: Return(); Pop(0)

0x443: Push("alkash")
0x444: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x445: IF (Stack[-1] == 0) GOTO 0x448; Pop(1)

0x446: Stack[-2] = (int) 29
0x447: Return(); Pop(0)

0x448: Push("boy")
0x449: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x44a: IF (Stack[-1] == 0) GOTO 0x44d; Pop(1)

0x44b: Stack[-2] = (int) 30
0x44c: Return(); Pop(0)

0x44d: Push("girl")
0x44e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x44f: IF (Stack[-1] == 0) GOTO 0x452; Pop(1)

0x450: Stack[-2] = (int) 31
0x451: Return(); Pop(0)

0x452: Push("littleboy")
0x453: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x454: IF (Stack[-1] == 0) GOTO 0x457; Pop(1)

0x455: Stack[-2] = (int) 32
0x456: Return(); Pop(0)

0x457: Push("littlegirl")
0x458: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x459: IF (Stack[-1] == 0) GOTO 0x45c; Pop(1)

0x45a: Stack[-2] = (int) 33
0x45b: Return(); Pop(0)

0x45c: Push("butcher")
0x45d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x45e: IF (Stack[-1] == 0) GOTO 0x461; Pop(1)

0x45f: Stack[-2] = (int) 34
0x460: Return(); Pop(0)

0x461: Push("dohodyaga")
0x462: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x463: IF (Stack[-1] == 0) GOTO 0x466; Pop(1)

0x464: Stack[-2] = (int) 35
0x465: Return(); Pop(0)

0x466: Push("unosha")
0x467: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x468: IF (Stack[-1] == 0) GOTO 0x46b; Pop(1)

0x469: Stack[-2] = (int) 36
0x46a: Return(); Pop(0)

0x46b: Push("vaxxabit")
0x46c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x46d: IF (Stack[-1] == 0) GOTO 0x470; Pop(1)

0x46e: Stack[-2] = (int) 37
0x46f: Return(); Pop(0)

0x470: Push("vaxxabitka")
0x471: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x472: IF (Stack[-1] == 0) GOTO 0x475; Pop(1)

0x473: Stack[-2] = (int) 38
0x474: Return(); Pop(0)

0x475: Push("woman")
0x476: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x477: IF (Stack[-1] == 0) GOTO 0x47a; Pop(1)

0x478: Stack[-2] = (int) 39
0x479: Return(); Pop(0)

0x47a: Push("worker")
0x47b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x47c: IF (Stack[-1] == 0) GOTO 0x47f; Pop(1)

0x47d: Stack[-2] = (int) 40
0x47e: Return(); Pop(0)

0x47f: Push("whitemask")
0x480: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x481: IF (Stack[-1] == 0) GOTO 0x484; Pop(1)

0x482: Stack[-2] = (int) 42
0x483: Return(); Pop(0)

0x484: Push("birdmask")
0x485: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x486: IF (Stack[-1] == 0) GOTO 0x489; Pop(1)

0x487: Stack[-2] = (int) 43
0x488: Return(); Pop(0)

0x489: Push("birdmask")
0x48a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x48b: IF (Stack[-1] == 0) GOTO 0x48e; Pop(1)

0x48c: Stack[-2] = (int) 44
0x48d: Return(); Pop(0)

0x48e: Push("patrol")
0x48f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x490: IF (Stack[-1] == 0) GOTO 0x493; Pop(1)

0x491: Stack[-2] = (int) 46
0x492: Return(); Pop(0)

0x493: Push("danko")
0x494: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x495: IF (Stack[-1] == 0) GOTO 0x498; Pop(1)

0x496: Stack[-2] = (int) 47
0x497: Return(); Pop(0)

0x498: Push("alkash_d")
0x499: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x49a: IF (Stack[-1] == 0) GOTO 0x49d; Pop(1)

0x49b: Stack[-2] = (int) 48
0x49c: Return(); Pop(0)

0x49d: Push("boy_d")
0x49e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x49f: IF (Stack[-1] == 0) GOTO 0x4a2; Pop(1)

0x4a0: Stack[-2] = (int) 49
0x4a1: Return(); Pop(0)

0x4a2: Push("butcher_d")
0x4a3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4a4: IF (Stack[-1] == 0) GOTO 0x4a7; Pop(1)

0x4a5: Stack[-2] = (int) 50
0x4a6: Return(); Pop(0)

0x4a7: Push("dohodyaga_d")
0x4a8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4a9: IF (Stack[-1] == 0) GOTO 0x4ac; Pop(1)

0x4aa: Stack[-2] = (int) 51
0x4ab: Return(); Pop(0)

0x4ac: Push("girl_d")
0x4ad: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4ae: IF (Stack[-1] == 0) GOTO 0x4b1; Pop(1)

0x4af: Stack[-2] = (int) 52
0x4b0: Return(); Pop(0)

0x4b1: Push("littleboy_d")
0x4b2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4b3: IF (Stack[-1] == 0) GOTO 0x4b6; Pop(1)

0x4b4: Stack[-2] = (int) 53
0x4b5: Return(); Pop(0)

0x4b6: Push("littlegirl_d")
0x4b7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4b8: IF (Stack[-1] == 0) GOTO 0x4bb; Pop(1)

0x4b9: Stack[-2] = (int) 54
0x4ba: Return(); Pop(0)

0x4bb: Push("unosha2")
0x4bc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4bd: IF (Stack[-1] == 0) GOTO 0x4c0; Pop(1)

0x4be: Stack[-2] = (int) 55
0x4bf: Return(); Pop(0)

0x4c0: Push("unosha_d")
0x4c1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4c2: IF (Stack[-1] == 0) GOTO 0x4c5; Pop(1)

0x4c3: Stack[-2] = (int) 56
0x4c4: Return(); Pop(0)

0x4c5: Push("unosha2_d")
0x4c6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4c7: IF (Stack[-1] == 0) GOTO 0x4ca; Pop(1)

0x4c8: Stack[-2] = (int) 57
0x4c9: Return(); Pop(0)

0x4ca: Push("vaxxabit_d")
0x4cb: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4cc: IF (Stack[-1] == 0) GOTO 0x4cf; Pop(1)

0x4cd: Stack[-2] = (int) 58
0x4ce: Return(); Pop(0)

0x4cf: Push("vaxxabitka_d")
0x4d0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4d1: IF (Stack[-1] == 0) GOTO 0x4d4; Pop(1)

0x4d2: Stack[-2] = (int) 59
0x4d3: Return(); Pop(0)

0x4d4: Push("wasted_male_d")
0x4d5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4d6: IF (Stack[-1] == 0) GOTO 0x4d9; Pop(1)

0x4d7: Stack[-2] = (int) 60
0x4d8: Return(); Pop(0)

0x4d9: Push("wasted_woman_d")
0x4da: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4db: IF (Stack[-1] == 0) GOTO 0x4de; Pop(1)

0x4dc: Stack[-2] = (int) 61
0x4dd: Return(); Pop(0)

0x4de: Push("woman_d")
0x4df: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4e0: IF (Stack[-1] == 0) GOTO 0x4e3; Pop(1)

0x4e1: Stack[-2] = (int) 62
0x4e2: Return(); Pop(0)

0x4e3: Push("worker2")
0x4e4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4e5: IF (Stack[-1] == 0) GOTO 0x4e8; Pop(1)

0x4e6: Stack[-2] = (int) 63
0x4e7: Return(); Pop(0)

0x4e8: Push("worker_d")
0x4e9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4ea: IF (Stack[-1] == 0) GOTO 0x4ed; Pop(1)

0x4eb: Stack[-2] = (int) 64
0x4ec: Return(); Pop(0)

0x4ed: Push("worker2_d")
0x4ee: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4ef: IF (Stack[-1] == 0) GOTO 0x4f2; Pop(1)

0x4f0: Stack[-2] = (int) 65
0x4f1: Return(); Pop(0)

0x4f2: Push("burah")
0x4f3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4f4: IF (Stack[-1] == 0) GOTO 0x4f7; Pop(1)

0x4f5: Stack[-2] = (int) 66
0x4f6: Return(); Pop(0)

0x4f7: Push("gorbun_daughter")
0x4f8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4f9: IF (Stack[-1] == 0) GOTO 0x4fc; Pop(1)

0x4fa: Stack[-2] = (int) 67
0x4fb: Return(); Pop(0)

0x4fc: Push("gorbun")
0x4fd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4fe: IF (Stack[-1] == 0) GOTO 0x501; Pop(1)

0x4ff: Stack[-2] = (int) 68
0x500: Return(); Pop(0)

0x501: Push("albinos")
0x502: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x503: IF (Stack[-1] == 0) GOTO 0x506; Pop(1)

0x504: Stack[-2] = (int) 69
0x505: Return(); Pop(0)

0x506: Push("aglaja")
0x507: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x508: IF (Stack[-1] == 0) GOTO 0x50b; Pop(1)

0x509: Stack[-2] = (int) 70
0x50a: Return(); Pop(0)

0x50b: Push("nude")
0x50c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x50d: IF (Stack[-1] == 0) GOTO 0x510; Pop(1)

0x50e: Stack[-2] = (int) 71
0x50f: Return(); Pop(0)

0x510: Push("block")
0x511: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x512: IF (Stack[-1] == 0) GOTO 0x515; Pop(1)

0x513: Stack[-2] = (int) 72
0x514: Return(); Pop(0)

0x515: Push("officer")
0x516: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x517: IF (Stack[-1] == 0) GOTO 0x51a; Pop(1)

0x518: Stack[-2] = (int) 73
0x519: Return(); Pop(0)

0x51a: Stack[-2] = (int) -1
0x51b: Return(); Pop(0)

0x51c: PushEmpty()
0x51d: Push((int) 1)
0x51e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x51f: IF (Stack[-1] == 0) GOTO 0x522; Pop(1)

0x520: Stack[-2] = "alexandr"
0x521: Return(); Pop(0)

0x522: Push((int) 2)
0x523: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x524: IF (Stack[-1] == 0) GOTO 0x527; Pop(1)

0x525: Stack[-2] = "andrei"
0x526: Return(); Pop(0)

0x527: Push((int) 3)
0x528: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x529: IF (Stack[-1] == 0) GOTO 0x52c; Pop(1)

0x52a: Stack[-2] = "anna"
0x52b: Return(); Pop(0)

0x52c: Push((int) 4)
0x52d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x52e: IF (Stack[-1] == 0) GOTO 0x531; Pop(1)

0x52f: Stack[-2] = "bigvlad"
0x530: Return(); Pop(0)

0x531: Push((int) 5)
0x532: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x533: IF (Stack[-1] == 0) GOTO 0x536; Pop(1)

0x534: Stack[-2] = "eva"
0x535: Return(); Pop(0)

0x536: Push((int) 6)
0x537: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x538: IF (Stack[-1] == 0) GOTO 0x53b; Pop(1)

0x539: Stack[-2] = "georg"
0x53a: Return(); Pop(0)

0x53b: Push((int) 7)
0x53c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x53d: IF (Stack[-1] == 0) GOTO 0x540; Pop(1)

0x53e: Stack[-2] = "grif"
0x53f: Return(); Pop(0)

0x540: Push((int) 8)
0x541: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x542: IF (Stack[-1] == 0) GOTO 0x545; Pop(1)

0x543: Stack[-2] = "han"
0x544: Return(); Pop(0)

0x545: Push((int) 9)
0x546: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x547: IF (Stack[-1] == 0) GOTO 0x54a; Pop(1)

0x548: Stack[-2] = "julia"
0x549: Return(); Pop(0)

0x54a: Push((int) 10)
0x54b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x54c: IF (Stack[-1] == 0) GOTO 0x54f; Pop(1)

0x54d: Stack[-2] = "kapella"
0x54e: Return(); Pop(0)

0x54f: Push((int) 11)
0x550: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x551: IF (Stack[-1] == 0) GOTO 0x554; Pop(1)

0x552: Stack[-2] = "katerina"
0x553: Return(); Pop(0)

0x554: Push((int) 12)
0x555: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x556: IF (Stack[-1] == 0) GOTO 0x559; Pop(1)

0x557: Stack[-2] = "klara"
0x558: Return(); Pop(0)

0x559: Push((int) 13)
0x55a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x55b: IF (Stack[-1] == 0) GOTO 0x55e; Pop(1)

0x55c: Stack[-2] = "lara"
0x55d: Return(); Pop(0)

0x55e: Push((int) 14)
0x55f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x560: IF (Stack[-1] == 0) GOTO 0x563; Pop(1)

0x561: Stack[-2] = "laska"
0x562: Return(); Pop(0)

0x563: Push((int) 15)
0x564: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x565: IF (Stack[-1] == 0) GOTO 0x568; Pop(1)

0x566: Stack[-2] = "maria"
0x567: Return(); Pop(0)

0x568: Push((int) 16)
0x569: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x56a: IF (Stack[-1] == 0) GOTO 0x56d; Pop(1)

0x56b: Stack[-2] = "mark"
0x56c: Return(); Pop(0)

0x56d: Push((int) 17)
0x56e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x56f: IF (Stack[-1] == 0) GOTO 0x572; Pop(1)

0x570: Stack[-2] = "mat"
0x571: Return(); Pop(0)

0x572: Push((int) 18)
0x573: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x574: IF (Stack[-1] == 0) GOTO 0x577; Pop(1)

0x575: Stack[-2] = "mishka"
0x576: Return(); Pop(0)

0x577: Push((int) 19)
0x578: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x579: IF (Stack[-1] == 0) GOTO 0x57c; Pop(1)

0x57a: Stack[-2] = "mladvlad"
0x57b: Return(); Pop(0)

0x57c: Push((int) 20)
0x57d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x57e: IF (Stack[-1] == 0) GOTO 0x581; Pop(1)

0x57f: Stack[-2] = "notkin"
0x580: Return(); Pop(0)

0x581: Push((int) 21)
0x582: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x583: IF (Stack[-1] == 0) GOTO 0x586; Pop(1)

0x584: Stack[-2] = "ospina"
0x585: Return(); Pop(0)

0x586: Push((int) 22)
0x587: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x588: IF (Stack[-1] == 0) GOTO 0x58b; Pop(1)

0x589: Stack[-2] = "petr"
0x58a: Return(); Pop(0)

0x58b: Push((int) 23)
0x58c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x58d: IF (Stack[-1] == 0) GOTO 0x590; Pop(1)

0x58e: Stack[-2] = "rubin"
0x58f: Return(); Pop(0)

0x590: Push((int) 24)
0x591: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x592: IF (Stack[-1] == 0) GOTO 0x595; Pop(1)

0x593: Stack[-2] = "spi4ka"
0x594: Return(); Pop(0)

0x595: Push((int) 25)
0x596: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x597: IF (Stack[-1] == 0) GOTO 0x59a; Pop(1)

0x598: Stack[-2] = "starshina"
0x599: Return(); Pop(0)

0x59a: Push((int) 26)
0x59b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x59c: IF (Stack[-1] == 0) GOTO 0x59f; Pop(1)

0x59d: Stack[-2] = "viktor"
0x59e: Return(); Pop(0)

0x59f: Push((int) 27)
0x5a0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5a1: IF (Stack[-1] == 0) GOTO 0x5a4; Pop(1)

0x5a2: Stack[-2] = "wasted_woman"
0x5a3: Return(); Pop(0)

0x5a4: Push((int) 28)
0x5a5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5a6: IF (Stack[-1] == 0) GOTO 0x5a9; Pop(1)

0x5a7: Stack[-2] = "wasted_male"
0x5a8: Return(); Pop(0)

0x5a9: Push((int) 29)
0x5aa: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5ab: IF (Stack[-1] == 0) GOTO 0x5ae; Pop(1)

0x5ac: Stack[-2] = "alkash"
0x5ad: Return(); Pop(0)

0x5ae: Push((int) 30)
0x5af: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5b0: IF (Stack[-1] == 0) GOTO 0x5b3; Pop(1)

0x5b1: Stack[-2] = "boy"
0x5b2: Return(); Pop(0)

0x5b3: Push((int) 31)
0x5b4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5b5: IF (Stack[-1] == 0) GOTO 0x5b8; Pop(1)

0x5b6: Stack[-2] = "girl"
0x5b7: Return(); Pop(0)

0x5b8: Push((int) 32)
0x5b9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5ba: IF (Stack[-1] == 0) GOTO 0x5bd; Pop(1)

0x5bb: Stack[-2] = "littleboy"
0x5bc: Return(); Pop(0)

0x5bd: Push((int) 33)
0x5be: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5bf: IF (Stack[-1] == 0) GOTO 0x5c2; Pop(1)

0x5c0: Stack[-2] = "littlegirl"
0x5c1: Return(); Pop(0)

0x5c2: Push((int) 34)
0x5c3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5c4: IF (Stack[-1] == 0) GOTO 0x5c7; Pop(1)

0x5c5: Stack[-2] = "butcher"
0x5c6: Return(); Pop(0)

0x5c7: Push((int) 35)
0x5c8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5c9: IF (Stack[-1] == 0) GOTO 0x5cc; Pop(1)

0x5ca: Stack[-2] = "dohodyaga"
0x5cb: Return(); Pop(0)

0x5cc: Push((int) 36)
0x5cd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5ce: IF (Stack[-1] == 0) GOTO 0x5d1; Pop(1)

0x5cf: Stack[-2] = "unosha"
0x5d0: Return(); Pop(0)

0x5d1: Push((int) 37)
0x5d2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5d3: IF (Stack[-1] == 0) GOTO 0x5d6; Pop(1)

0x5d4: Stack[-2] = "vaxxabit"
0x5d5: Return(); Pop(0)

0x5d6: Push((int) 38)
0x5d7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5d8: IF (Stack[-1] == 0) GOTO 0x5db; Pop(1)

0x5d9: Stack[-2] = "vaxxabitka"
0x5da: Return(); Pop(0)

0x5db: Push((int) 39)
0x5dc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5dd: IF (Stack[-1] == 0) GOTO 0x5e0; Pop(1)

0x5de: Stack[-2] = "woman"
0x5df: Return(); Pop(0)

0x5e0: Push((int) 40)
0x5e1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5e2: IF (Stack[-1] == 0) GOTO 0x5e5; Pop(1)

0x5e3: Stack[-2] = "worker"
0x5e4: Return(); Pop(0)

0x5e5: Push((int) 42)
0x5e6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5e7: IF (Stack[-1] == 0) GOTO 0x5ea; Pop(1)

0x5e8: Stack[-2] = "whitemask"
0x5e9: Return(); Pop(0)

0x5ea: Push((int) 43)
0x5eb: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5ec: IF (Stack[-1] == 0) GOTO 0x5ef; Pop(1)

0x5ed: Stack[-2] = "birdmask"
0x5ee: Return(); Pop(0)

0x5ef: Push((int) 44)
0x5f0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5f1: IF (Stack[-1] == 0) GOTO 0x5f4; Pop(1)

0x5f2: Stack[-2] = "birdmask"
0x5f3: Return(); Pop(0)

0x5f4: Push((int) 46)
0x5f5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5f6: IF (Stack[-1] == 0) GOTO 0x5f9; Pop(1)

0x5f7: Stack[-2] = "patrol"
0x5f8: Return(); Pop(0)

0x5f9: Push((int) 47)
0x5fa: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5fb: IF (Stack[-1] == 0) GOTO 0x5fe; Pop(1)

0x5fc: Stack[-2] = "danko"
0x5fd: Return(); Pop(0)

0x5fe: Push((int) 48)
0x5ff: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x600: IF (Stack[-1] == 0) GOTO 0x603; Pop(1)

0x601: Stack[-2] = "alkash_d"
0x602: Return(); Pop(0)

0x603: Push((int) 49)
0x604: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x605: IF (Stack[-1] == 0) GOTO 0x608; Pop(1)

0x606: Stack[-2] = "boy_d"
0x607: Return(); Pop(0)

0x608: Push((int) 50)
0x609: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x60a: IF (Stack[-1] == 0) GOTO 0x60d; Pop(1)

0x60b: Stack[-2] = "butcher_d"
0x60c: Return(); Pop(0)

0x60d: Push((int) 51)
0x60e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x60f: IF (Stack[-1] == 0) GOTO 0x612; Pop(1)

0x610: Stack[-2] = "dohodyaga_d"
0x611: Return(); Pop(0)

0x612: Push((int) 52)
0x613: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x614: IF (Stack[-1] == 0) GOTO 0x617; Pop(1)

0x615: Stack[-2] = "girl_d"
0x616: Return(); Pop(0)

0x617: Push((int) 53)
0x618: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x619: IF (Stack[-1] == 0) GOTO 0x61c; Pop(1)

0x61a: Stack[-2] = "littleboy_d"
0x61b: Return(); Pop(0)

0x61c: Push((int) 54)
0x61d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x61e: IF (Stack[-1] == 0) GOTO 0x621; Pop(1)

0x61f: Stack[-2] = "littlegirl_d"
0x620: Return(); Pop(0)

0x621: Push((int) 55)
0x622: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x623: IF (Stack[-1] == 0) GOTO 0x626; Pop(1)

0x624: Stack[-2] = "unosha2"
0x625: Return(); Pop(0)

0x626: Push((int) 56)
0x627: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x628: IF (Stack[-1] == 0) GOTO 0x62b; Pop(1)

0x629: Stack[-2] = "unosha_d"
0x62a: Return(); Pop(0)

0x62b: Push((int) 57)
0x62c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x62d: IF (Stack[-1] == 0) GOTO 0x630; Pop(1)

0x62e: Stack[-2] = "unosha2_d"
0x62f: Return(); Pop(0)

0x630: Push((int) 58)
0x631: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x632: IF (Stack[-1] == 0) GOTO 0x635; Pop(1)

0x633: Stack[-2] = "vaxxabit_d"
0x634: Return(); Pop(0)

0x635: Push((int) 59)
0x636: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x637: IF (Stack[-1] == 0) GOTO 0x63a; Pop(1)

0x638: Stack[-2] = "vaxxabitka_d"
0x639: Return(); Pop(0)

0x63a: Push((int) 60)
0x63b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x63c: IF (Stack[-1] == 0) GOTO 0x63f; Pop(1)

0x63d: Stack[-2] = "wasted_male_d"
0x63e: Return(); Pop(0)

0x63f: Push((int) 61)
0x640: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x641: IF (Stack[-1] == 0) GOTO 0x644; Pop(1)

0x642: Stack[-2] = "wasted_woman_d"
0x643: Return(); Pop(0)

0x644: Push((int) 62)
0x645: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x646: IF (Stack[-1] == 0) GOTO 0x649; Pop(1)

0x647: Stack[-2] = "woman_d"
0x648: Return(); Pop(0)

0x649: Push((int) 63)
0x64a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x64b: IF (Stack[-1] == 0) GOTO 0x64e; Pop(1)

0x64c: Stack[-2] = "worker2"
0x64d: Return(); Pop(0)

0x64e: Push((int) 64)
0x64f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x650: IF (Stack[-1] == 0) GOTO 0x653; Pop(1)

0x651: Stack[-2] = "worker_d"
0x652: Return(); Pop(0)

0x653: Push((int) 65)
0x654: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x655: IF (Stack[-1] == 0) GOTO 0x658; Pop(1)

0x656: Stack[-2] = "worker2_d"
0x657: Return(); Pop(0)

0x658: Push((int) 66)
0x659: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x65a: IF (Stack[-1] == 0) GOTO 0x65d; Pop(1)

0x65b: Stack[-2] = "burah"
0x65c: Return(); Pop(0)

0x65d: Push((int) 67)
0x65e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x65f: IF (Stack[-1] == 0) GOTO 0x662; Pop(1)

0x660: Stack[-2] = "gorbun_daughter"
0x661: Return(); Pop(0)

0x662: Push((int) 68)
0x663: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x664: IF (Stack[-1] == 0) GOTO 0x667; Pop(1)

0x665: Stack[-2] = "gorbun"
0x666: Return(); Pop(0)

0x667: Push((int) 69)
0x668: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x669: IF (Stack[-1] == 0) GOTO 0x66c; Pop(1)

0x66a: Stack[-2] = "albinos"
0x66b: Return(); Pop(0)

0x66c: Push((int) 70)
0x66d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x66e: IF (Stack[-1] == 0) GOTO 0x671; Pop(1)

0x66f: Stack[-2] = "aglaja"
0x670: Return(); Pop(0)

0x671: Push((int) 71)
0x672: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x673: IF (Stack[-1] == 0) GOTO 0x676; Pop(1)

0x674: Stack[-2] = "nude"
0x675: Return(); Pop(0)

0x676: Push((int) 72)
0x677: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x678: IF (Stack[-1] == 0) GOTO 0x67b; Pop(1)

0x679: Stack[-2] = "block"
0x67a: Return(); Pop(0)

0x67b: Push((int) 73)
0x67c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x67d: IF (Stack[-1] == 0) GOTO 0x680; Pop(1)

0x67e: Stack[-2] = "officer"
0x67f: Return(); Pop(0)

0x680: Stack[-2] = ""
0x681: Return(); Pop(0)

0x682: PushEmpty(object, object)
0x683: Push((int) 1)
0x684: @@ add(Stack[-1])
0x685: Pop(1)
0x686: Push(Stack[-3])
0x687: IF (Stack[-1] == 0) GOTO 0x68f; Pop(1)

0x688: @ CreateStringVector(Stack[-1])
0x689: Pop(0)
0x68a: Push("cot_alexandr@door1")
0x68b: @@ add(Stack[-1])
0x68c: Pop(1)
0x68d: @@ add(Stack[-1])
0x68e: Pop(0)
0x68f: Push((int) 2)
0x690: @@ add(Stack[-1])
0x691: Pop(1)
0x692: Push(Stack[-3])
0x693: IF (Stack[-1] == 0) GOTO 0x69b; Pop(1)

0x694: @ CreateStringVector(Stack[-1])
0x695: Pop(0)
0x696: Push("shouse1_kabak@door1")
0x697: @@ add(Stack[-1])
0x698: Pop(1)
0x699: @@ add(Stack[-1])
0x69a: Pop(0)
0x69b: Push((int) 3)
0x69c: @@ add(Stack[-1])
0x69d: Pop(1)
0x69e: Push(Stack[-3])
0x69f: IF (Stack[-1] == 0) GOTO 0x6a7; Pop(1)

0x6a0: @ CreateStringVector(Stack[-1])
0x6a1: Pop(0)
0x6a2: Push("cot_anna@door1")
0x6a3: @@ add(Stack[-1])
0x6a4: Pop(1)
0x6a5: @@ add(Stack[-1])
0x6a6: Pop(0)
0x6a7: Push((int) 4)
0x6a8: @@ add(Stack[-1])
0x6a9: Pop(1)
0x6aa: Push(Stack[-3])
0x6ab: IF (Stack[-1] == 0) GOTO 0x6b3; Pop(1)

0x6ac: @ CreateStringVector(Stack[-1])
0x6ad: Pop(0)
0x6ae: Push("cot_bigvad@door1")
0x6af: @@ add(Stack[-1])
0x6b0: Pop(1)
0x6b1: @@ add(Stack[-1])
0x6b2: Pop(0)
0x6b3: Push((int) 6)
0x6b4: @@ add(Stack[-1])
0x6b5: Pop(1)
0x6b6: Push(Stack[-3])
0x6b7: IF (Stack[-1] == 0) GOTO 0x6c2; Pop(1)

0x6b8: @ CreateStringVector(Stack[-1])
0x6b9: Pop(0)
0x6ba: Push("cot_georg@door1")
0x6bb: @@ add(Stack[-1])
0x6bc: Pop(1)
0x6bd: Push("cot_georg@door2")
0x6be: @@ add(Stack[-1])
0x6bf: Pop(1)
0x6c0: @@ add(Stack[-1])
0x6c1: Pop(0)
0x6c2: Push((int) 9)
0x6c3: @@ add(Stack[-1])
0x6c4: Pop(1)
0x6c5: Push(Stack[-3])
0x6c6: IF (Stack[-1] == 0) GOTO 0x6ce; Pop(1)

0x6c7: @ CreateStringVector(Stack[-1])
0x6c8: Pop(0)
0x6c9: Push("cot_julia@door1")
0x6ca: @@ add(Stack[-1])
0x6cb: Pop(1)
0x6cc: @@ add(Stack[-1])
0x6cd: Pop(0)
0x6ce: Push((int) 10)
0x6cf: @@ add(Stack[-1])
0x6d0: Pop(1)
0x6d1: Push(Stack[-3])
0x6d2: IF (Stack[-1] == 0) GOTO 0x6da; Pop(1)

0x6d3: @ CreateStringVector(Stack[-1])
0x6d4: Pop(0)
0x6d5: Push("cot_kapella@door1")
0x6d6: @@ add(Stack[-1])
0x6d7: Pop(1)
0x6d8: @@ add(Stack[-1])
0x6d9: Pop(0)
0x6da: Push((int) 11)
0x6db: @@ add(Stack[-1])
0x6dc: Pop(1)
0x6dd: Push(Stack[-3])
0x6de: IF (Stack[-1] == 0) GOTO 0x6e6; Pop(1)

0x6df: @ CreateStringVector(Stack[-1])
0x6e0: Pop(0)
0x6e1: Push("cot_katerina@door1")
0x6e2: @@ add(Stack[-1])
0x6e3: Pop(1)
0x6e4: @@ add(Stack[-1])
0x6e5: Pop(0)
0x6e6: Push((int) 13)
0x6e7: @@ add(Stack[-1])
0x6e8: Pop(1)
0x6e9: Push(Stack[-3])
0x6ea: IF (Stack[-1] == 0) GOTO 0x6f2; Pop(1)

0x6eb: @ CreateStringVector(Stack[-1])
0x6ec: Pop(0)
0x6ed: Push("cot_lara@door1")
0x6ee: @@ add(Stack[-1])
0x6ef: Pop(1)
0x6f0: @@ add(Stack[-1])
0x6f1: Pop(0)
0x6f2: Push((int) 18)
0x6f3: @@ add(Stack[-1])
0x6f4: Pop(1)
0x6f5: Push(Stack[-3])
0x6f6: IF (Stack[-1] == 0) GOTO 0x6fe; Pop(1)

0x6f7: @ CreateStringVector(Stack[-1])
0x6f8: Pop(0)
0x6f9: Push("vagon_mishka@door1")
0x6fa: @@ add(Stack[-1])
0x6fb: Pop(1)
0x6fc: @@ add(Stack[-1])
0x6fd: Pop(0)
0x6fe: Push((int) 19)
0x6ff: @@ add(Stack[-1])
0x700: Pop(1)
0x701: Push(Stack[-3])
0x702: IF (Stack[-1] == 0) GOTO 0x70a; Pop(1)

0x703: @ CreateStringVector(Stack[-1])
0x704: Pop(0)
0x705: Push("house_vlad@door1")
0x706: @@ add(Stack[-1])
0x707: Pop(1)
0x708: @@ add(Stack[-1])
0x709: Pop(0)
0x70a: Push((int) 20)
0x70b: @@ add(Stack[-1])
0x70c: Pop(1)
0x70d: Push(Stack[-3])
0x70e: IF (Stack[-1] == 0) GOTO 0x716; Pop(1)

0x70f: @ CreateStringVector(Stack[-1])
0x710: Pop(0)
0x711: Push("warehouse_notkin@door1")
0x712: @@ add(Stack[-1])
0x713: Pop(1)
0x714: @@ add(Stack[-1])
0x715: Pop(0)
0x716: Push((int) 21)
0x717: @@ add(Stack[-1])
0x718: Pop(1)
0x719: Push(Stack[-3])
0x71a: IF (Stack[-1] == 0) GOTO 0x722; Pop(1)

0x71b: @ CreateStringVector(Stack[-1])
0x71c: Pop(0)
0x71d: Push("dt_house_1_04@door1")
0x71e: @@ add(Stack[-1])
0x71f: Pop(1)
0x720: @@ add(Stack[-1])
0x721: Pop(0)
0x722: Push((int) 22)
0x723: @@ add(Stack[-1])
0x724: Pop(1)
0x725: Push(Stack[-3])
0x726: IF (Stack[-1] == 0) GOTO 0x72e; Pop(1)

0x727: @ CreateStringVector(Stack[-1])
0x728: Pop(0)
0x729: Push("house_petr@door1")
0x72a: @@ add(Stack[-1])
0x72b: Pop(1)
0x72c: @@ add(Stack[-1])
0x72d: Pop(0)
0x72e: Push((int) 24)
0x72f: @@ add(Stack[-1])
0x730: Pop(1)
0x731: Push(Stack[-3])
0x732: IF (Stack[-1] == 0) GOTO 0x73d; Pop(1)

0x733: @ CreateStringVector(Stack[-1])
0x734: Pop(0)
0x735: Push("house_spi4ka@door1")
0x736: @@ add(Stack[-1])
0x737: Pop(1)
0x738: Push("house_spi4ka@door2")
0x739: @@ add(Stack[-1])
0x73a: Pop(1)
0x73b: @@ add(Stack[-1])
0x73c: Pop(0)
0x73d: Push((int) 26)
0x73e: @@ add(Stack[-1])
0x73f: Pop(1)
0x740: Push(Stack[-3])
0x741: IF (Stack[-1] == 0) GOTO 0x74c; Pop(1)

0x742: @ CreateStringVector(Stack[-1])
0x743: Pop(0)
0x744: Push("cot_viktor@door1")
0x745: @@ add(Stack[-1])
0x746: Pop(1)
0x747: Push("cot_viktor@door2")
0x748: @@ add(Stack[-1])
0x749: Pop(1)
0x74a: @@ add(Stack[-1])
0x74b: Pop(0)
0x74c: Return(); Pop(2)

0x74d: Stack[-1] = 0
