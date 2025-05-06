GlobalVarCount = 0

Strings:
	pt_child
	add
	pt_woman
	pt_man
	pers_littleboy
	pers_littlegirl
	pers_boy
	pers_girl
	pers_woman
	pers_wasted_girl
	pers_unosha
	pers_worker
	pers_wasted_male
	ilittleboy.xml
	ilittlegirl.xml
	iboy.xml
	igirl.xml
	igirl2.xml
	iwoman.xml
	iwasted_girl.xml
	iunosha.xml
	iunosha2.xml
	iworker.xml
	iworker2.xml
	iwasted_male.xml
	nailed
	pt_item_food
	pt_item_pfood
	pt_item_knife
	pt_item_bottle
	bread
	bottle_water
	milk
	vegetables
	lemon
	scripted_container
	item_
	_steal.xml
	item_plate.xml
	rusk
	dried_fish
	dried_meat
	smoked_meat
	fresh_fish
	fresh_meat
	tvirin
	item_knife_steal.xml
	bottle_empty
	egg
	size
	get
	IsDead
	ToDie
	remove
	HasProperty
	HasProperty
	GetLocator
	Locator 
	 doesn't exist
	clear

Import:
	GetLocator (3 args)
	irand (2 args)
	GetProperty (2 args)
	GetLocator (4 args)
	RandOneOf (11 args)
	AddActorByType (6 args)
	RandVec2D (2 args)
	RandOneOf (15 args)
	RandOneOf (13 args)
	CreateIntVector (1 args)
	Hold (0 args)
	RemoveActor (1 args)
	self (1 args)
	rand (1 args)
	CreateObjectVector (1 args)
	Trace (1 args)
	AddActor (6 args)

RunOp = 0xfe
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object, object) Params = 0
		EVENT_5 Op = 0x23d Vars = ()
		EVENT_6 Op = 0x27d Vars = ()


0x0: PushEmpty(int, string, bool, cvector, int, int, string, bool, cvector, int, int, string, bool, cvector, int, int, string, bool, cvector, int, int, string, bool, cvector, int, int, string, bool, cvector, int)
0x1: Stack[-15] = (int) 1
0x2: Push("pt_child")
0x3: Stack[-15] = Stack[-1] + Stack[-16]; Pop(1);
0x4: @ GetLocator(Stack[-14], Stack[-13], Stack[-12])
0x5: Pop(0)
0x6: Pop(0); Push((bool) Stack[-13] == 0)
0x7: IF (Stack[-1] == 0) GOTO 0x9; Pop(1)

0x8: GOTO 0x16

0x9: Push((int) 0)
0xa: @@ add(Stack[-1])
0xb: Pop(1)
0xc: @@ add(Stack[-15])
0xd: Pop(0)
0xe: Push((int) 5)
0xf: @ irand(Stack[-12], Stack[-1])
0x10: Pop(1)
0x11: @@ add(Stack[-11])
0x12: Pop(0)
0x13: Push((int) 1)
0x14: Stack[-16] = Stack[-16] + Stack[-1]; Pop(1);
0x15: GOTO 0x2

0x16: Stack[-10] = (int) 1
0x17: Push("pt_woman")
0x18: Stack[-10] = Stack[-1] + Stack[-11]; Pop(1);
0x19: @ GetLocator(Stack[-9], Stack[-8], Stack[-7])
0x1a: Pop(0)
0x1b: Pop(0); Push((bool) Stack[-8] == 0)
0x1c: IF (Stack[-1] == 0) GOTO 0x1e; Pop(1)

0x1d: GOTO 0x2b

0x1e: Push((int) 1)
0x1f: @@ add(Stack[-1])
0x20: Pop(1)
0x21: @@ add(Stack[-10])
0x22: Pop(0)
0x23: Push((int) 2)
0x24: @ irand(Stack[-7], Stack[-1])
0x25: Pop(1)
0x26: @@ add(Stack[-6])
0x27: Pop(0)
0x28: Push((int) 1)
0x29: Stack[-11] = Stack[-11] + Stack[-1]; Pop(1);
0x2a: GOTO 0x17

0x2b: Stack[-5] = (int) 1
0x2c: Push("pt_man")
0x2d: Stack[-5] = Stack[-1] + Stack[-6]; Pop(1);
0x2e: @ GetLocator(Stack[-4], Stack[-3], Stack[-2])
0x2f: Pop(0)
0x30: Pop(0); Push((bool) Stack[-3] == 0)
0x31: IF (Stack[-1] == 0) GOTO 0x33; Pop(1)

0x32: GOTO 0x40

0x33: Push((int) 2)
0x34: @@ add(Stack[-1])
0x35: Pop(1)
0x36: @@ add(Stack[-5])
0x37: Pop(0)
0x38: Push((int) 5)
0x39: @ irand(Stack[-2], Stack[-1])
0x3a: Pop(1)
0x3b: @@ add(Stack[-1])
0x3c: Pop(0)
0x3d: Push((int) 1)
0x3e: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x3f: GOTO 0x2c

0x40: Return(); Pop(30)

0x41: PushEmpty()
0x42: Push((int) 0)
0x43: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x44: IF (Stack[-1] == 0) GOTO 0x49; Pop(1)

0x45: Push("pt_child")
0x46: Stack[-4] = Stack[-1] + Stack[-2]; Pop(1);
0x47: Return(); Pop(0)

0x48: GOTO 0x56

0x49: Push((int) 1)
0x4a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4b: IF (Stack[-1] == 0) GOTO 0x50; Pop(1)

0x4c: Push("pt_woman")
0x4d: Stack[-4] = Stack[-1] + Stack[-2]; Pop(1);
0x4e: Return(); Pop(0)

0x4f: GOTO 0x56

0x50: Push((int) 2)
0x51: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x52: IF (Stack[-1] == 0) GOTO 0x56; Pop(1)

0x53: Push("pt_man")
0x54: Stack[-4] = Stack[-1] + Stack[-2]; Pop(1);
0x55: Return(); Pop(0)

0x56: Stack[-3] = ""
0x57: Return(); Pop(0)

0x58: PushEmpty()
0x59: Push((int) 0)
0x5a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5b: IF (Stack[-1] == 0) GOTO 0x7a; Pop(1)

0x5c: Push((int) 0)
0x5d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5e: IF (Stack[-1] == 0) GOTO 0x62; Pop(1)

0x5f: Stack[-3] = "pers_littleboy"
0x60: Return(); Pop(0)

0x61: GOTO 0x79

0x62: Push((int) 1)
0x63: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x64: IF (Stack[-1] == 0) GOTO 0x68; Pop(1)

0x65: Stack[-3] = "pers_littlegirl"
0x66: Return(); Pop(0)

0x67: GOTO 0x79

0x68: Push((int) 2)
0x69: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6a: IF (Stack[-1] == 0) GOTO 0x6e; Pop(1)

0x6b: Stack[-3] = "pers_boy"
0x6c: Return(); Pop(0)

0x6d: GOTO 0x79

0x6e: Push((int) 3)
0x6f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x70: IF (Stack[-1] == 0) GOTO 0x74; Pop(1)

0x71: Stack[-3] = "pers_girl"
0x72: Return(); Pop(0)

0x73: GOTO 0x79

0x74: Push((int) 4)
0x75: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x76: IF (Stack[-1] == 0) GOTO 0x79; Pop(1)

0x77: Stack[-3] = "pers_girl"
0x78: Return(); Pop(0)

0x79: GOTO 0xa9

0x7a: Push((int) 1)
0x7b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7c: IF (Stack[-1] == 0) GOTO 0x89; Pop(1)

0x7d: Push((int) 0)
0x7e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7f: IF (Stack[-1] == 0) GOTO 0x83; Pop(1)

0x80: Stack[-3] = "pers_woman"
0x81: Return(); Pop(0)

0x82: GOTO 0x88

0x83: Push((int) 1)
0x84: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x85: IF (Stack[-1] == 0) GOTO 0x88; Pop(1)

0x86: Stack[-3] = "pers_wasted_girl"
0x87: Return(); Pop(0)

0x88: GOTO 0xa9

0x89: Push((int) 2)
0x8a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8b: IF (Stack[-1] == 0) GOTO 0xa9; Pop(1)

0x8c: Push((int) 0)
0x8d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x8e: IF (Stack[-1] == 0) GOTO 0x92; Pop(1)

0x8f: Stack[-3] = "pers_unosha"
0x90: Return(); Pop(0)

0x91: GOTO 0xa9

0x92: Push((int) 1)
0x93: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x94: IF (Stack[-1] == 0) GOTO 0x98; Pop(1)

0x95: Stack[-3] = "pers_unosha"
0x96: Return(); Pop(0)

0x97: GOTO 0xa9

0x98: Push((int) 2)
0x99: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x9a: IF (Stack[-1] == 0) GOTO 0x9e; Pop(1)

0x9b: Stack[-3] = "pers_worker"
0x9c: Return(); Pop(0)

0x9d: GOTO 0xa9

0x9e: Push((int) 3)
0x9f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa0: IF (Stack[-1] == 0) GOTO 0xa4; Pop(1)

0xa1: Stack[-3] = "pers_worker"
0xa2: Return(); Pop(0)

0xa3: GOTO 0xa9

0xa4: Push((int) 4)
0xa5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa6: IF (Stack[-1] == 0) GOTO 0xa9; Pop(1)

0xa7: Stack[-3] = "pers_wasted_male"
0xa8: Return(); Pop(0)

0xa9: Stack[-3] = ""
0xaa: Return(); Pop(0)

0xab: PushEmpty()
0xac: Push((int) 0)
0xad: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xae: IF (Stack[-1] == 0) GOTO 0xcd; Pop(1)

0xaf: Push((int) 0)
0xb0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb1: IF (Stack[-1] == 0) GOTO 0xb5; Pop(1)

0xb2: Stack[-3] = "ilittleboy.xml"
0xb3: Return(); Pop(0)

0xb4: GOTO 0xcc

0xb5: Push((int) 1)
0xb6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb7: IF (Stack[-1] == 0) GOTO 0xbb; Pop(1)

0xb8: Stack[-3] = "ilittlegirl.xml"
0xb9: Return(); Pop(0)

0xba: GOTO 0xcc

0xbb: Push((int) 2)
0xbc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xbd: IF (Stack[-1] == 0) GOTO 0xc1; Pop(1)

0xbe: Stack[-3] = "iboy.xml"
0xbf: Return(); Pop(0)

0xc0: GOTO 0xcc

0xc1: Push((int) 3)
0xc2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc3: IF (Stack[-1] == 0) GOTO 0xc7; Pop(1)

0xc4: Stack[-3] = "igirl.xml"
0xc5: Return(); Pop(0)

0xc6: GOTO 0xcc

0xc7: Push((int) 4)
0xc8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc9: IF (Stack[-1] == 0) GOTO 0xcc; Pop(1)

0xca: Stack[-3] = "igirl2.xml"
0xcb: Return(); Pop(0)

0xcc: GOTO 0xfc

0xcd: Push((int) 1)
0xce: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcf: IF (Stack[-1] == 0) GOTO 0xdc; Pop(1)

0xd0: Push((int) 0)
0xd1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd2: IF (Stack[-1] == 0) GOTO 0xd6; Pop(1)

0xd3: Stack[-3] = "iwoman.xml"
0xd4: Return(); Pop(0)

0xd5: GOTO 0xdb

0xd6: Push((int) 1)
0xd7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd8: IF (Stack[-1] == 0) GOTO 0xdb; Pop(1)

0xd9: Stack[-3] = "iwasted_girl.xml"
0xda: Return(); Pop(0)

0xdb: GOTO 0xfc

0xdc: Push((int) 2)
0xdd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xde: IF (Stack[-1] == 0) GOTO 0xfc; Pop(1)

0xdf: Push((int) 0)
0xe0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xe1: IF (Stack[-1] == 0) GOTO 0xe5; Pop(1)

0xe2: Stack[-3] = "iunosha.xml"
0xe3: Return(); Pop(0)

0xe4: GOTO 0xfc

0xe5: Push((int) 1)
0xe6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xe7: IF (Stack[-1] == 0) GOTO 0xeb; Pop(1)

0xe8: Stack[-3] = "iunosha2.xml"
0xe9: Return(); Pop(0)

0xea: GOTO 0xfc

0xeb: Push((int) 2)
0xec: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xed: IF (Stack[-1] == 0) GOTO 0xf1; Pop(1)

0xee: Stack[-3] = "iworker.xml"
0xef: Return(); Pop(0)

0xf0: GOTO 0xfc

0xf1: Push((int) 3)
0xf2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf3: IF (Stack[-1] == 0) GOTO 0xf7; Pop(1)

0xf4: Stack[-3] = "iworker2.xml"
0xf5: Return(); Pop(0)

0xf6: GOTO 0xfc

0xf7: Push((int) 4)
0xf8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf9: IF (Stack[-1] == 0) GOTO 0xfc; Pop(1)

0xfa: Stack[-3] = "iwasted_male.xml"
0xfb: Return(); Pop(0)

0xfc: Stack[-3] = ""
0xfd: Return(); Pop(0)

0xfe: PushEmpty()
0xff: Call2 0x105

0x100: Pop(0)
0x101: PushEmpty()
0x102: Call2 0x22b

0x103: Pop(0)
0x104: Return(); Pop(0)

0x105: PushEmpty(bool, bool)
0x106: Push("nailed")
0x107: @ GetProperty(Stack[-1], Stack[-2])
0x108: Pop(1)
0x109: PushEmpty(bool)
0x10a: Stack[-1] = Stack[-2]
0x10b: Call2 0x11a

0x10c: Pop(1)
0x10d: PushEmpty(bool)
0x10e: Stack[-1] = Stack[-2]
0x10f: Call2 0x12d

0x110: Pop(1)
0x111: PushEmpty(bool)
0x112: Stack[-1] = Stack[-2]
0x113: Call2 0x140

0x114: Pop(1)
0x115: PushEmpty(bool)
0x116: Stack[-1] = Stack[-2]
0x117: Call2 0x153

0x118: Pop(1)
0x119: Return(); Pop(2)

0x11a: PushEmpty(int, bool, cvector, cvector, int, bool, cvector, cvector)
0x11b: Stack[-4] = (int) 1
0x11c: Push("pt_item_food")
0x11d: Pop(1); Push(Stack[-1] + Stack[-5]);
0x11e: @ GetLocator(Stack[-1], Stack[-4], Stack[-3], Stack[-2])
0x11f: Pop(1)
0x120: Pop(0); Push((bool) Stack[-3] == 0)
0x121: IF (Stack[-1] == 0) GOTO 0x123; Pop(1)

0x122: GOTO 0x12c

0x123: PushEmpty(cvector, cvector, bool)
0x124: Stack[-3] = Stack[-5]
0x125: Stack[-2] = Stack[-4]
0x126: Stack[-1] = Stack[-12]
0x127: Call2 0x166

0x128: Pop(3)
0x129: Push((int) 1)
0x12a: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x12b: GOTO 0x11c

0x12c: Return(); Pop(8)

0x12d: PushEmpty(int, bool, cvector, cvector, int, bool, cvector, cvector)
0x12e: Stack[-4] = (int) 1
0x12f: Push("pt_item_pfood")
0x130: Pop(1); Push(Stack[-1] + Stack[-5]);
0x131: @ GetLocator(Stack[-1], Stack[-4], Stack[-3], Stack[-2])
0x132: Pop(1)
0x133: Pop(0); Push((bool) Stack[-3] == 0)
0x134: IF (Stack[-1] == 0) GOTO 0x136; Pop(1)

0x135: GOTO 0x13f

0x136: PushEmpty(cvector, cvector, bool)
0x137: Stack[-3] = Stack[-5]
0x138: Stack[-2] = Stack[-4]
0x139: Stack[-1] = Stack[-12]
0x13a: Call2 0x1a1

0x13b: Pop(3)
0x13c: Push((int) 1)
0x13d: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x13e: GOTO 0x12f

0x13f: Return(); Pop(8)

0x140: PushEmpty(int, bool, cvector, cvector, int, bool, cvector, cvector)
0x141: Stack[-4] = (int) 1
0x142: Push("pt_item_knife")
0x143: Pop(1); Push(Stack[-1] + Stack[-5]);
0x144: @ GetLocator(Stack[-1], Stack[-4], Stack[-3], Stack[-2])
0x145: Pop(1)
0x146: Pop(0); Push((bool) Stack[-3] == 0)
0x147: IF (Stack[-1] == 0) GOTO 0x149; Pop(1)

0x148: GOTO 0x152

0x149: PushEmpty(cvector, cvector, bool)
0x14a: Stack[-3] = Stack[-5]
0x14b: Stack[-2] = Stack[-4]
0x14c: Stack[-1] = Stack[-12]
0x14d: Call2 0x1f4

0x14e: Pop(3)
0x14f: Push((int) 1)
0x150: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x151: GOTO 0x142

0x152: Return(); Pop(8)

0x153: PushEmpty(int, bool, cvector, cvector, int, bool, cvector, cvector)
0x154: Stack[-4] = (int) 1
0x155: Push("pt_item_bottle")
0x156: Pop(1); Push(Stack[-1] + Stack[-5]);
0x157: @ GetLocator(Stack[-1], Stack[-4], Stack[-3], Stack[-2])
0x158: Pop(1)
0x159: Pop(0); Push((bool) Stack[-3] == 0)
0x15a: IF (Stack[-1] == 0) GOTO 0x15c; Pop(1)

0x15b: GOTO 0x165

0x15c: PushEmpty(cvector, cvector, bool)
0x15d: Stack[-3] = Stack[-5]
0x15e: Stack[-2] = Stack[-4]
0x15f: Stack[-1] = Stack[-12]
0x160: Call2 0x207

0x161: Pop(3)
0x162: Push((int) 1)
0x163: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x164: GOTO 0x155

0x165: Return(); Pop(8)

0x166: PushEmpty(string, object, object, float, float, cvector, string, object, object, float, float, cvector)
0x167: PushEmpty(bool, float)
0x168: Push(Stack[-15])
0x169: IF (Stack[-1] == 0) GOTO 0x16c; Pop(1)

0x16a: Stack[-1] = (float) 0.05
0x16b: GOTO 0x16d

0x16c: Stack[-1] = (float) 0.2
0x16d: Call2 0x2bc

0x16e: Pop(1)
0x16f: IF (Stack[-1] == 0) GOTO 0x188; Pop(1)

0x170: Push((int) 5)
0x171: Push((int) 5)
0x172: Push((int) 3)
0x173: Push((int) 2)
0x174: Push((int) 3)
0x175: Push("bread")
0x176: Push("bottle_water")
0x177: Push("milk")
0x178: Push("vegetables")
0x179: Push("lemon")
0x17a: @ RandOneOf(Stack[-16], Stack[-10], Stack[-9], Stack[-8], Stack[-7], Stack[-6], Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x17b: Pop(10)
0x17c: Push("scripted_container")
0x17d: PushEmpty(object)
0x17e: Call2 0x2b6

0x17f: Pop(0)
0x180: Push("item_")
0x181: Pop(1); Push(Stack[-1] + Stack[-9]);
0x182: Push("_steal.xml")
0x183: Pop(2); Push(Stack[-2] + Stack[-1]);
0x184: @ AddActorByType(Stack[-8], Stack[-3], Stack[-2], Stack[-18], Stack[-17], Stack[-1])
0x185: Pop(3)
0x186: Stack[-5] = 0
0x187: GOTO 0x1a0

0x188: PushEmpty(bool, float)
0x189: Stack[-1] = (float) 0.5
0x18a: Call2 0x2bc

0x18b: Pop(1)
0x18c: IF (Stack[-1] == 0) GOTO 0x1a0; Pop(1)

0x18d: @ RandVec2D(Stack[-3], Stack[-2])
0x18e: Pop(0)
0x18f: Push(CvectorIndex(Stack[-1], 0))
0x190: Stack[-1] = Stack[-4]
0x191: CvectorIndex(Stack[-2], 0) = Stack[-1];
0x192: Push(CvectorIndex(Stack[-1], 1))
0x193: Stack[-1] = (int) 0
0x194: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x195: Push(CvectorIndex(Stack[-1], 2))
0x196: Stack[-1] = Stack[-3]
0x197: CvectorIndex(Stack[-2], 2) = Stack[-1];
0x198: Push("scripted_container")
0x199: PushEmpty(object)
0x19a: Call2 0x2b6

0x19b: Pop(0)
0x19c: Push("item_plate.xml")
0x19d: @ AddActorByType(Stack[-7], Stack[-3], Stack[-2], Stack[-18], Stack[-4], Stack[-1])
0x19e: Pop(3)
0x19f: Stack[-4] = 0
0x1a0: Return(); Pop(12)

0x1a1: PushEmpty(string, object, float, float, cvector, object, float, float, cvector, string, object, float, float, cvector, object, float, float, cvector)
0x1a2: PushEmpty(bool, float)
0x1a3: Push(Stack[-21])
0x1a4: IF (Stack[-1] == 0) GOTO 0x1a7; Pop(1)

0x1a5: Stack[-1] = (float) 0.05
0x1a6: GOTO 0x1a8

0x1a7: Stack[-1] = (float) 0.2
0x1a8: Call2 0x2bc

0x1a9: Pop(1)
0x1aa: IF (Stack[-1] == 0) GOTO 0x1db; Pop(1)

0x1ab: Push((int) 8)
0x1ac: Push((int) 3)
0x1ad: Push((int) 3)
0x1ae: Push((int) 3)
0x1af: Push((int) 2)
0x1b0: Push((int) 2)
0x1b1: Push((int) 1)
0x1b2: Push("rusk")
0x1b3: Push("dried_fish")
0x1b4: Push("dried_meat")
0x1b5: Push("smoked_meat")
0x1b6: Push("fresh_fish")
0x1b7: Push("fresh_meat")
0x1b8: Push("tvirin")
0x1b9: @ RandOneOf(Stack[-23], Stack[-14], Stack[-13], Stack[-12], Stack[-11], Stack[-10], Stack[-9], Stack[-8], Stack[-7], Stack[-6], Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1ba: Pop(14)
0x1bb: @ RandVec2D(Stack[-7], Stack[-6])
0x1bc: Pop(0)
0x1bd: Push(CvectorIndex(Stack[-5], 0))
0x1be: Stack[-1] = Stack[-8]
0x1bf: CvectorIndex(Stack[-6], 0) = Stack[-1];
0x1c0: Push(CvectorIndex(Stack[-5], 1))
0x1c1: Stack[-1] = (int) 0
0x1c2: CvectorIndex(Stack[-6], 1) = Stack[-1];
0x1c3: Push(CvectorIndex(Stack[-5], 2))
0x1c4: Stack[-1] = Stack[-7]
0x1c5: CvectorIndex(Stack[-6], 2) = Stack[-1];
0x1c6: Push("scripted_container")
0x1c7: PushEmpty(object)
0x1c8: Call2 0x2b6

0x1c9: Pop(0)
0x1ca: Push("item_plate.xml")
0x1cb: @ AddActorByType(Stack[-11], Stack[-3], Stack[-2], Stack[-24], Stack[-8], Stack[-1])
0x1cc: Pop(3)
0x1cd: Push("scripted_container")
0x1ce: PushEmpty(object)
0x1cf: Call2 0x2b6

0x1d0: Pop(0)
0x1d1: Push(CVector(0.0, 5.0, 0.0))
0x1d2: Pop(1); Push(Stack[-24] + Stack[-1]);
0x1d3: Push("item_")
0x1d4: Pop(1); Push(Stack[-1] + Stack[-13]);
0x1d5: Push("_steal.xml")
0x1d6: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1d7: @ AddActorByType(Stack[-12], Stack[-4], Stack[-3], Stack[-2], Stack[-24], Stack[-1])
0x1d8: Pop(4)
0x1d9: Stack[-8] = 0
0x1da: GOTO 0x1f3

0x1db: PushEmpty(bool, float)
0x1dc: Stack[-1] = (float) 0.5
0x1dd: Call2 0x2bc

0x1de: Pop(1)
0x1df: IF (Stack[-1] == 0) GOTO 0x1f3; Pop(1)

0x1e0: @ RandVec2D(Stack[-3], Stack[-2])
0x1e1: Pop(0)
0x1e2: Push(CvectorIndex(Stack[-1], 0))
0x1e3: Stack[-1] = Stack[-4]
0x1e4: CvectorIndex(Stack[-2], 0) = Stack[-1];
0x1e5: Push(CvectorIndex(Stack[-1], 1))
0x1e6: Stack[-1] = (int) 0
0x1e7: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x1e8: Push(CvectorIndex(Stack[-1], 2))
0x1e9: Stack[-1] = Stack[-3]
0x1ea: CvectorIndex(Stack[-2], 2) = Stack[-1];
0x1eb: Push("scripted_container")
0x1ec: PushEmpty(object)
0x1ed: Call2 0x2b6

0x1ee: Pop(0)
0x1ef: Push("item_plate.xml")
0x1f0: @ AddActorByType(Stack[-7], Stack[-3], Stack[-2], Stack[-24], Stack[-4], Stack[-1])
0x1f1: Pop(3)
0x1f2: Stack[-4] = 0
0x1f3: Return(); Pop(18)

0x1f4: PushEmpty(object, object)
0x1f5: PushEmpty(bool, float)
0x1f6: Push(Stack[-5])
0x1f7: IF (Stack[-1] == 0) GOTO 0x1fa; Pop(1)

0x1f8: Stack[-1] = (float) 0.05
0x1f9: GOTO 0x1fb

0x1fa: Stack[-1] = (float) 0.05
0x1fb: Call2 0x2bc

0x1fc: Pop(1)
0x1fd: IF (Stack[-1] == 0) GOTO 0x206; Pop(1)

0x1fe: Push("scripted_container")
0x1ff: PushEmpty(object)
0x200: Call2 0x2b6

0x201: Pop(0)
0x202: Push("item_knife_steal.xml")
0x203: @ AddActorByType(Stack[-4], Stack[-3], Stack[-2], Stack[-8], Stack[-7], Stack[-1])
0x204: Pop(3)
0x205: Stack[-1] = 0
0x206: Return(); Pop(2)

0x207: PushEmpty(string, object, string, object)
0x208: PushEmpty(bool, float)
0x209: Push(Stack[-7])
0x20a: IF (Stack[-1] == 0) GOTO 0x20d; Pop(1)

0x20b: Stack[-1] = (float) 0.2
0x20c: GOTO 0x20e

0x20d: Stack[-1] = (float) 0.4
0x20e: Call2 0x2bc

0x20f: Pop(1)
0x210: IF (Stack[-1] == 0) GOTO 0x22a; Pop(1)

0x211: Push((int) 10)
0x212: Push((int) 15)
0x213: Push((int) 3)
0x214: Push((int) 3)
0x215: Push((int) 3)
0x216: Push((int) 1)
0x217: Push("bottle_water")
0x218: Push("bottle_empty")
0x219: Push("vegetables")
0x21a: Push("milk")
0x21b: Push("egg")
0x21c: Push("tvirin")
0x21d: @ RandOneOf(Stack[-14], Stack[-12], Stack[-11], Stack[-10], Stack[-9], Stack[-8], Stack[-7], Stack[-6], Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x21e: Pop(12)
0x21f: Push("scripted_container")
0x220: PushEmpty(object)
0x221: Call2 0x2b6

0x222: Pop(0)
0x223: Push("item_")
0x224: Pop(1); Push(Stack[-1] + Stack[-5]);
0x225: Push("_steal.xml")
0x226: Pop(2); Push(Stack[-2] + Stack[-1]);
0x227: @ AddActorByType(Stack[-4], Stack[-3], Stack[-2], Stack[-10], Stack[-9], Stack[-1])
0x228: Pop(3)
0x229: Stack[-1] = 0
0x22a: Return(); Pop(4)

0x22b: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == 0)
0x22c: IF (Stack[-1] == 0) GOTO 0x231; Pop(1)

0x22d: PushEmpty(object)
0x22e: Call2 0x2c1

0x22f: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x230: Pop(1)
0x231: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x232: IF (Stack[-1] == 0) GOTO 0x235; Pop(1)

0x233: @ CreateIntVector(Stack[-0])
0x234: Pop(0)
0x235: PushEmpty(object)
0x236: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x237: Call2 0x0

0x238: Pop(1)
0x239: @ Hold()
0x23a: Pop(0)
0x23b: GOTO 0x239

0x23c: Return(); Pop(0)

0x23d: PushEmpty(int, int, int, int, int, string, string, string, int, int, int, int, int, string, string, string)
0x23e: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == 0)
0x23f: IF (Stack[-1] == 0) GOTO 0x244; Pop(1)

0x240: PushEmpty(object)
0x241: Call2 0x2c1

0x242: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x243: Pop(1)
0x244: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x245: IF (Stack[-1] == 0) GOTO 0x248; Pop(1)

0x246: @ CreateIntVector(Stack[-0])
0x247: Pop(0)
0x248: PushEmpty(object)
0x249: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x24a: Call2 0x2d9

0x24b: Pop(1)
0x24c: @@ size(Stack[-8])
0x24d: Pop(0)
0x24e: Stack[-7] = (int) 0
0x24f: Pop(0); Push((bool) Stack[-7] < Stack[-8])
0x250: IF (Stack[-1] == 0) GOTO 0x27c; Pop(1)

0x251: @@ get(Stack[-6], Stack[-7])
0x252: Pop(0)
0x253: Push((int) 1)
0x254: Pop(1); Push(Stack[-8] + Stack[-1]);
0x255: @@ get(Stack[-6], Stack[-1])
0x256: Pop(1)
0x257: Push((int) 2)
0x258: Pop(1); Push(Stack[-8] + Stack[-1]);
0x259: @@ get(Stack[-5], Stack[-1])
0x25a: Pop(1)
0x25b: PushEmpty(string, int, int)
0x25c: Stack[-2] = Stack[-9]
0x25d: Stack[-1] = Stack[-8]
0x25e: Call2 0x41

0x25f: Stack[-6] = Stack[-3]
0x260: Pop(3)
0x261: PushEmpty(string, int, int)
0x262: Stack[-2] = Stack[-9]
0x263: Stack[-1] = Stack[-7]
0x264: Call2 0x58

0x265: Stack[-5] = Stack[-3]
0x266: Pop(3)
0x267: PushEmpty(string, int, int)
0x268: Stack[-2] = Stack[-9]
0x269: Stack[-1] = Stack[-7]
0x26a: Call2 0xab

0x26b: Stack[-4] = Stack[-3]
0x26c: Pop(3)
0x26d: PushEmpty(object, object, string, string, string)
0x26e: PushEmpty(object)
0x26f: Call2 0x2b6

0x270: Stack[-5] = Stack[-1]
0x271: Pop(1)
0x272: Stack[-3] = Stack[-8]
0x273: Stack[-2] = Stack[-7]
0x274: Stack[-1] = Stack[-6]
0x275: Call2 0x2c7

0x276: Pop(4)
0x277: @@ add(Stack[-1])
0x278: Pop(1)
0x279: Push((int) 3)
0x27a: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x27b: GOTO 0x24f

0x27c: Return(); Pop(16)

0x27d: PushEmpty(int, int, object, bool, int, int, object, bool)
0x27e: @@ size(Stack[-4])
0x27f: Pop(0)
0x280: Stack[-3] = (int) 0
0x281: Pop(0); Push((bool) Stack[-3] < Stack[-4])
0x282: IF (Stack[-1] == 0) GOTO 0x2a5; Pop(1)

0x283: @@ get(Stack[-2], Stack[-3])
0x284: Pop(0)
0x285: Pop(0); Push(( Stack[-2] != 0 )
0x286: IF (Stack[-1] == 0) GOTO 0x297; Pop(1)

0x287: @@ IsDead(Stack[-1])
0x288: Pop(0)
0x289: Pop(0); Push((bool) Stack[-1] == 0)
0x28a: IF (Stack[-1] == 0) GOTO 0x295; Pop(1)

0x28b: PushEmpty(bool, object, string)
0x28c: Stack[-2] = Stack[-5]
0x28d: Stack[-1] = "ToDie"
0x28e: Call2 0x2aa

0x28f: Pop(2)
0x290: Pop(1); Push((bool) Stack[-1] == 0)
0x291: IF (Stack[-1] == 0) GOTO 0x295; Pop(1)

0x292: Push((int) 1)
0x293: Stack[-4] = Stack[-4] + Stack[-1]; Pop(1);
0x294: GOTO 0x2a4

0x295: @ RemoveActor(Stack[-2])
0x296: Pop(0)
0x297: @@ remove(Stack[-3])
0x298: Pop(0)
0x299: Push((int) 3)
0x29a: Pop(1); Push(Stack[-4] * Stack[-1]);
0x29b: Push((int) 1)
0x29c: Pop(1); Push(Stack[-5] + Stack[-1]);
0x29d: Push((int) 3)
0x29e: Pop(2); Push(Stack[-2] * Stack[-1]);
0x29f: @@ remove(Stack[-2], Stack[-1])
0x2a0: Pop(2)
0x2a1: Push((int) -1)
0x2a2: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x2a3: Stack[-2] = 0
0x2a4: GOTO 0x281

0x2a5: PushEmpty(object)
0x2a6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2a7: Call2 0x2d9

0x2a8: Pop(1)
0x2a9: Return(); Pop(8)

0x2aa: PushEmpty(bool, bool)
0x2ab: Push("HasProperty")
0x2ac: Push((int) 2)
0x2ad: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x2ae: Pop(1); Push((bool) Stack[-1] == 0)
0x2af: IF (Stack[-1] == 0) GOTO 0x2b2; Pop(1)

0x2b0: Stack[-5] = (bool) 0
0x2b1: Return(); Pop(2)

0x2b2: @@ HasProperty(Stack[-3], Stack[-1])
0x2b3: Pop(0)
0x2b4: Stack[-5] = Stack[-1]
0x2b5: Return(); Pop(2)

0x2b6: PushEmpty(object, object)
0x2b7: @ self(Stack[-1])
0x2b8: Pop(0)
0x2b9: Stack[-3] = Stack[-1]
0x2ba: Return(); Pop(2)

0x2bb: Stack[-1] = 0
0x2bc: PushEmpty(float, float)
0x2bd: @ rand(Stack[-1])
0x2be: Pop(0)
0x2bf: Stack[-4] = Stack[-1] < Stack[-3]; Pop(0);
0x2c0: Return(); Pop(2)

0x2c1: PushEmpty(object, object)
0x2c2: @ CreateObjectVector(Stack[-1])
0x2c3: Pop(0)
0x2c4: Stack[-3] = Stack[-1]
0x2c5: Return(); Pop(2)

0x2c6: Stack[-1] = 0
0x2c7: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x2c8: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0x2c9: Pop(0)
0x2ca: Pop(0); Push((bool) Stack[-4] == 0)
0x2cb: IF (Stack[-1] == 0) GOTO 0x2d4; Pop(1)

0x2cc: Push("Locator ")
0x2cd: Pop(1); Push(Stack[-1] + Stack[-12]);
0x2ce: Push(" doesn't exist")
0x2cf: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2d0: @ Trace(Stack[-1])
0x2d1: Pop(1)
0x2d2: Stack[-1] = 0
0x2d3: GOTO 0x2d6

0x2d4: @ AddActor(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0x2d5: Pop(0)
0x2d6: Stack[-13] = Stack[-1]
0x2d7: Return(); Pop(8)

0x2d8: Stack[-1] = 0
0x2d9: PushEmpty(int, int, object, int, int, object)
0x2da: Push(Stack[-7])
0x2db: IF (Stack[-1] == 0) GOTO 0x2ed; Pop(1)

0x2dc: @@ size(Stack[-3])
0x2dd: Pop(0)
0x2de: Stack[-2] = (int) 0
0x2df: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0x2e0: IF (Stack[-1] == 0) GOTO 0x2eb; Pop(1)

0x2e1: @@ get(Stack[-1], Stack[-2])
0x2e2: Pop(0)
0x2e3: Push(Stack[-1])
0x2e4: IF (Stack[-1] == 0) GOTO 0x2e7; Pop(1)

0x2e5: @ RemoveActor(Stack[-1])
0x2e6: Pop(0)
0x2e7: Stack[-1] = 0
0x2e8: Push((int) 1)
0x2e9: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x2ea: GOTO 0x2df

0x2eb: @@ clear()
0x2ec: Pop(0)
0x2ed: Return(); Pop(6)

