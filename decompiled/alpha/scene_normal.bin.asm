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
	rusk
	dried_fish
	dried_meat
	smoked_meat
	fresh_fish
	fresh_meat
	tvirin
	item_plate.xml
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
	CreateIntVector (1 args)
	Hold (0 args)
	GetProperty (2 args)
	GetLocator (4 args)
	RandOneOf (11 args)
	AddActorByType (6 args)
	RandOneOf (15 args)
	RandVec2D (2 args)
	RandOneOf (13 args)
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
		EVENT_5 Op = 0x207 Vars = ()
		EVENT_6 Op = 0x247 Vars = ()


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

0xfe: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == 0)
0xff: IF (Stack[-1] == 0) GOTO 0x104; Pop(1)

0x100: PushEmpty(object)
0x101: Call 0x28b

0x102: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x103: Pop(1)
0x104: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x105: IF (Stack[-1] == 0) GOTO 0x108; Pop(1)

0x106: @ CreateIntVector(Stack[-0])
0x107: Pop(0)
0x108: PushEmpty()
0x109: Call 0x113

0x10a: Pop(0)
0x10b: PushEmpty(object)
0x10c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x10d: Call 0x0

0x10e: Pop(1)
0x10f: @ Hold()
0x110: Pop(0)
0x111: GOTO 0x10f

0x112: Return(); Pop(0)

0x113: PushEmpty(bool, bool)
0x114: Push("nailed")
0x115: @ GetProperty(Stack[-1], Stack[-2])
0x116: Pop(1)
0x117: PushEmpty(bool)
0x118: Stack[-1] = Stack[-2]
0x119: Call 0x128

0x11a: Pop(1)
0x11b: PushEmpty(bool)
0x11c: Stack[-1] = Stack[-2]
0x11d: Call 0x13b

0x11e: Pop(1)
0x11f: PushEmpty(bool)
0x120: Stack[-1] = Stack[-2]
0x121: Call 0x14e

0x122: Pop(1)
0x123: PushEmpty(bool)
0x124: Stack[-1] = Stack[-2]
0x125: Call 0x161

0x126: Pop(1)
0x127: Return(); Pop(2)

0x128: PushEmpty(int, bool, cvector, cvector, int, bool, cvector, cvector)
0x129: Stack[-4] = (int) 1
0x12a: Push("pt_item_food")
0x12b: Pop(1); Push(Stack[-1] + Stack[-5]);
0x12c: @ GetLocator(Stack[-1], Stack[-4], Stack[-3], Stack[-2])
0x12d: Pop(1)
0x12e: Pop(0); Push((bool) Stack[-3] == 0)
0x12f: IF (Stack[-1] == 0) GOTO 0x131; Pop(1)

0x130: GOTO 0x13a

0x131: PushEmpty(cvector, cvector, bool)
0x132: Stack[-3] = Stack[-5]
0x133: Stack[-2] = Stack[-4]
0x134: Stack[-1] = Stack[-12]
0x135: Call 0x174

0x136: Pop(3)
0x137: Push((int) 1)
0x138: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x139: GOTO 0x12a

0x13a: Return(); Pop(8)

0x13b: PushEmpty(int, bool, cvector, cvector, int, bool, cvector, cvector)
0x13c: Stack[-4] = (int) 1
0x13d: Push("pt_item_pfood")
0x13e: Pop(1); Push(Stack[-1] + Stack[-5]);
0x13f: @ GetLocator(Stack[-1], Stack[-4], Stack[-3], Stack[-2])
0x140: Pop(1)
0x141: Pop(0); Push((bool) Stack[-3] == 0)
0x142: IF (Stack[-1] == 0) GOTO 0x144; Pop(1)

0x143: GOTO 0x14d

0x144: PushEmpty(cvector, cvector, bool)
0x145: Stack[-3] = Stack[-5]
0x146: Stack[-2] = Stack[-4]
0x147: Stack[-1] = Stack[-12]
0x148: Call 0x196

0x149: Pop(3)
0x14a: Push((int) 1)
0x14b: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x14c: GOTO 0x13d

0x14d: Return(); Pop(8)

0x14e: PushEmpty(int, bool, cvector, cvector, int, bool, cvector, cvector)
0x14f: Stack[-4] = (int) 1
0x150: Push("pt_item_knife")
0x151: Pop(1); Push(Stack[-1] + Stack[-5]);
0x152: @ GetLocator(Stack[-1], Stack[-4], Stack[-3], Stack[-2])
0x153: Pop(1)
0x154: Pop(0); Push((bool) Stack[-3] == 0)
0x155: IF (Stack[-1] == 0) GOTO 0x157; Pop(1)

0x156: GOTO 0x160

0x157: PushEmpty(cvector, cvector, bool)
0x158: Stack[-3] = Stack[-5]
0x159: Stack[-2] = Stack[-4]
0x15a: Stack[-1] = Stack[-12]
0x15b: Call 0x1d0

0x15c: Pop(3)
0x15d: Push((int) 1)
0x15e: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x15f: GOTO 0x150

0x160: Return(); Pop(8)

0x161: PushEmpty(int, bool, cvector, cvector, int, bool, cvector, cvector)
0x162: Stack[-4] = (int) 1
0x163: Push("pt_item_bottle")
0x164: Pop(1); Push(Stack[-1] + Stack[-5]);
0x165: @ GetLocator(Stack[-1], Stack[-4], Stack[-3], Stack[-2])
0x166: Pop(1)
0x167: Pop(0); Push((bool) Stack[-3] == 0)
0x168: IF (Stack[-1] == 0) GOTO 0x16a; Pop(1)

0x169: GOTO 0x173

0x16a: PushEmpty(cvector, cvector, bool)
0x16b: Stack[-3] = Stack[-5]
0x16c: Stack[-2] = Stack[-4]
0x16d: Stack[-1] = Stack[-12]
0x16e: Call 0x1e3

0x16f: Pop(3)
0x170: Push((int) 1)
0x171: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x172: GOTO 0x163

0x173: Return(); Pop(8)

0x174: PushEmpty(string, object, string, object)
0x175: PushEmpty(bool, float)
0x176: Push(Stack[-7])
0x177: IF (Stack[-1] == 0) GOTO 0x17a; Pop(1)

0x178: Stack[-1] = (float) 0.1
0x179: GOTO 0x17b

0x17a: Stack[-1] = (float) 0.2
0x17b: Call 0x286

0x17c: Pop(1)
0x17d: IF (Stack[-1] == 0) GOTO 0x195; Pop(1)

0x17e: Push((int) 5)
0x17f: Push((int) 5)
0x180: Push((int) 3)
0x181: Push((int) 2)
0x182: Push((int) 3)
0x183: Push("bread")
0x184: Push("bottle_water")
0x185: Push("milk")
0x186: Push("vegetables")
0x187: Push("lemon")
0x188: @ RandOneOf(Stack[-12], Stack[-10], Stack[-9], Stack[-8], Stack[-7], Stack[-6], Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x189: Pop(10)
0x18a: Push("scripted_container")
0x18b: PushEmpty(object)
0x18c: Call 0x280

0x18d: Pop(0)
0x18e: Push("item_")
0x18f: Pop(1); Push(Stack[-1] + Stack[-5]);
0x190: Push("_steal.xml")
0x191: Pop(2); Push(Stack[-2] + Stack[-1]);
0x192: @ AddActorByType(Stack[-4], Stack[-3], Stack[-2], Stack[-10], Stack[-9], Stack[-1])
0x193: Pop(3)
0x194: Stack[-1] = 0
0x195: Return(); Pop(4)

0x196: PushEmpty(string, object, float, float, cvector, string, object, float, float, cvector)
0x197: PushEmpty(bool, float)
0x198: Push(Stack[-13])
0x199: IF (Stack[-1] == 0) GOTO 0x19c; Pop(1)

0x19a: Stack[-1] = (float) 0.1
0x19b: GOTO 0x19d

0x19c: Stack[-1] = (float) 0.2
0x19d: Call 0x286

0x19e: Pop(1)
0x19f: IF (Stack[-1] == 0) GOTO 0x1cf; Pop(1)

0x1a0: Push((int) 8)
0x1a1: Push((int) 3)
0x1a2: Push((int) 3)
0x1a3: Push((int) 3)
0x1a4: Push((int) 2)
0x1a5: Push((int) 2)
0x1a6: Push((int) 1)
0x1a7: Push("rusk")
0x1a8: Push("dried_fish")
0x1a9: Push("dried_meat")
0x1aa: Push("smoked_meat")
0x1ab: Push("fresh_fish")
0x1ac: Push("fresh_meat")
0x1ad: Push("tvirin")
0x1ae: @ RandOneOf(Stack[-19], Stack[-14], Stack[-13], Stack[-12], Stack[-11], Stack[-10], Stack[-9], Stack[-8], Stack[-7], Stack[-6], Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1af: Pop(14)
0x1b0: @ RandVec2D(Stack[-3], Stack[-2])
0x1b1: Pop(0)
0x1b2: Push(CvectorIndex(Stack[-1], 0))
0x1b3: Stack[-1] = Stack[-4]
0x1b4: CvectorIndex(Stack[-2], 0) = Stack[-1];
0x1b5: Push(CvectorIndex(Stack[-1], 1))
0x1b6: Stack[-1] = (int) 0
0x1b7: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x1b8: Push(CvectorIndex(Stack[-1], 2))
0x1b9: Stack[-1] = Stack[-3]
0x1ba: CvectorIndex(Stack[-2], 2) = Stack[-1];
0x1bb: Push("scripted_container")
0x1bc: PushEmpty(object)
0x1bd: Call 0x280

0x1be: Pop(0)
0x1bf: Push("item_plate.xml")
0x1c0: @ AddActorByType(Stack[-7], Stack[-3], Stack[-2], Stack[-16], Stack[-4], Stack[-1])
0x1c1: Pop(3)
0x1c2: Push("scripted_container")
0x1c3: PushEmpty(object)
0x1c4: Call 0x280

0x1c5: Pop(0)
0x1c6: Push(CVector(0.0, 5.0, 0.0))
0x1c7: Pop(1); Push(Stack[-16] + Stack[-1]);
0x1c8: Push("item_")
0x1c9: Pop(1); Push(Stack[-1] + Stack[-9]);
0x1ca: Push("_steal.xml")
0x1cb: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1cc: @ AddActorByType(Stack[-8], Stack[-4], Stack[-3], Stack[-2], Stack[-16], Stack[-1])
0x1cd: Pop(4)
0x1ce: Stack[-4] = 0
0x1cf: Return(); Pop(10)

0x1d0: PushEmpty(object, object)
0x1d1: PushEmpty(bool, float)
0x1d2: Push(Stack[-5])
0x1d3: IF (Stack[-1] == 0) GOTO 0x1d6; Pop(1)

0x1d4: Stack[-1] = (float) 0.1
0x1d5: GOTO 0x1d7

0x1d6: Stack[-1] = (float) 0.1
0x1d7: Call 0x286

0x1d8: Pop(1)
0x1d9: IF (Stack[-1] == 0) GOTO 0x1e2; Pop(1)

0x1da: Push("scripted_container")
0x1db: PushEmpty(object)
0x1dc: Call 0x280

0x1dd: Pop(0)
0x1de: Push("item_knife_steal.xml")
0x1df: @ AddActorByType(Stack[-4], Stack[-3], Stack[-2], Stack[-8], Stack[-7], Stack[-1])
0x1e0: Pop(3)
0x1e1: Stack[-1] = 0
0x1e2: Return(); Pop(2)

0x1e3: PushEmpty(string, object, string, object)
0x1e4: PushEmpty(bool, float)
0x1e5: Push(Stack[-7])
0x1e6: IF (Stack[-1] == 0) GOTO 0x1e9; Pop(1)

0x1e7: Stack[-1] = (float) 0.2
0x1e8: GOTO 0x1ea

0x1e9: Stack[-1] = (float) 0.4
0x1ea: Call 0x286

0x1eb: Pop(1)
0x1ec: IF (Stack[-1] == 0) GOTO 0x206; Pop(1)

0x1ed: Push((int) 10)
0x1ee: Push((int) 15)
0x1ef: Push((int) 3)
0x1f0: Push((int) 3)
0x1f1: Push((int) 3)
0x1f2: Push((int) 1)
0x1f3: Push("bottle_water")
0x1f4: Push("bottle_empty")
0x1f5: Push("vegetables")
0x1f6: Push("milk")
0x1f7: Push("egg")
0x1f8: Push("tvirin")
0x1f9: @ RandOneOf(Stack[-14], Stack[-12], Stack[-11], Stack[-10], Stack[-9], Stack[-8], Stack[-7], Stack[-6], Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1fa: Pop(12)
0x1fb: Push("scripted_container")
0x1fc: PushEmpty(object)
0x1fd: Call 0x280

0x1fe: Pop(0)
0x1ff: Push("item_")
0x200: Pop(1); Push(Stack[-1] + Stack[-5]);
0x201: Push("_steal.xml")
0x202: Pop(2); Push(Stack[-2] + Stack[-1]);
0x203: @ AddActorByType(Stack[-4], Stack[-3], Stack[-2], Stack[-10], Stack[-9], Stack[-1])
0x204: Pop(3)
0x205: Stack[-1] = 0
0x206: Return(); Pop(4)

0x207: PushEmpty(int, int, int, int, int, string, string, string, int, int, int, int, int, string, string, string)
0x208: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == 0)
0x209: IF (Stack[-1] == 0) GOTO 0x20e; Pop(1)

0x20a: PushEmpty(object)
0x20b: Call 0x28b

0x20c: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x20d: Pop(1)
0x20e: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x20f: IF (Stack[-1] == 0) GOTO 0x212; Pop(1)

0x210: @ CreateIntVector(Stack[-0])
0x211: Pop(0)
0x212: PushEmpty(object)
0x213: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x214: Call 0x2a3

0x215: Pop(1)
0x216: @@ size(Stack[-8])
0x217: Pop(0)
0x218: Stack[-7] = (int) 0
0x219: Pop(0); Push((bool) Stack[-7] < Stack[-8])
0x21a: IF (Stack[-1] == 0) GOTO 0x246; Pop(1)

0x21b: @@ get(Stack[-6], Stack[-7])
0x21c: Pop(0)
0x21d: Push((int) 1)
0x21e: Pop(1); Push(Stack[-8] + Stack[-1]);
0x21f: @@ get(Stack[-6], Stack[-1])
0x220: Pop(1)
0x221: Push((int) 2)
0x222: Pop(1); Push(Stack[-8] + Stack[-1]);
0x223: @@ get(Stack[-5], Stack[-1])
0x224: Pop(1)
0x225: PushEmpty(string, int, int)
0x226: Stack[-2] = Stack[-9]
0x227: Stack[-1] = Stack[-8]
0x228: Call 0x41

0x229: Stack[-6] = Stack[-3]
0x22a: Pop(3)
0x22b: PushEmpty(string, int, int)
0x22c: Stack[-2] = Stack[-9]
0x22d: Stack[-1] = Stack[-7]
0x22e: Call 0x58

0x22f: Stack[-5] = Stack[-3]
0x230: Pop(3)
0x231: PushEmpty(string, int, int)
0x232: Stack[-2] = Stack[-9]
0x233: Stack[-1] = Stack[-7]
0x234: Call 0xab

0x235: Stack[-4] = Stack[-3]
0x236: Pop(3)
0x237: PushEmpty(object, object, string, string, string)
0x238: PushEmpty(object)
0x239: Call 0x280

0x23a: Stack[-5] = Stack[-1]
0x23b: Pop(1)
0x23c: Stack[-3] = Stack[-8]
0x23d: Stack[-2] = Stack[-7]
0x23e: Stack[-1] = Stack[-6]
0x23f: Call 0x291

0x240: Pop(4)
0x241: @@ add(Stack[-1])
0x242: Pop(1)
0x243: Push((int) 3)
0x244: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x245: GOTO 0x219

0x246: Return(); Pop(16)

0x247: PushEmpty(int, int, object, bool, int, int, object, bool)
0x248: @@ size(Stack[-4])
0x249: Pop(0)
0x24a: Stack[-3] = (int) 0
0x24b: Pop(0); Push((bool) Stack[-3] < Stack[-4])
0x24c: IF (Stack[-1] == 0) GOTO 0x26f; Pop(1)

0x24d: @@ get(Stack[-2], Stack[-3])
0x24e: Pop(0)
0x24f: Pop(0); Push(( Stack[-2] != 0 )
0x250: IF (Stack[-1] == 0) GOTO 0x261; Pop(1)

0x251: @@ IsDead(Stack[-1])
0x252: Pop(0)
0x253: Pop(0); Push((bool) Stack[-1] == 0)
0x254: IF (Stack[-1] == 0) GOTO 0x25f; Pop(1)

0x255: PushEmpty(bool, object, string)
0x256: Stack[-2] = Stack[-5]
0x257: Stack[-1] = "ToDie"
0x258: Call 0x274

0x259: Pop(2)
0x25a: Pop(1); Push((bool) Stack[-1] == 0)
0x25b: IF (Stack[-1] == 0) GOTO 0x25f; Pop(1)

0x25c: Push((int) 1)
0x25d: Stack[-4] = Stack[-4] + Stack[-1]; Pop(1);
0x25e: GOTO 0x26e

0x25f: @ RemoveActor(Stack[-2])
0x260: Pop(0)
0x261: @@ remove(Stack[-3])
0x262: Pop(0)
0x263: Push((int) 3)
0x264: Pop(1); Push(Stack[-4] * Stack[-1]);
0x265: Push((int) 1)
0x266: Pop(1); Push(Stack[-5] + Stack[-1]);
0x267: Push((int) 3)
0x268: Pop(2); Push(Stack[-2] * Stack[-1]);
0x269: @@ remove(Stack[-2], Stack[-1])
0x26a: Pop(2)
0x26b: Push((int) -1)
0x26c: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x26d: Stack[-2] = 0
0x26e: GOTO 0x24b

0x26f: PushEmpty(object)
0x270: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x271: Call 0x2a3

0x272: Pop(1)
0x273: Return(); Pop(8)

0x274: PushEmpty(bool, bool)
0x275: Push("HasProperty")
0x276: Push((int) 2)
0x277: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x278: Pop(1); Push((bool) Stack[-1] == 0)
0x279: IF (Stack[-1] == 0) GOTO 0x27c; Pop(1)

0x27a: Stack[-5] = (bool) 0
0x27b: Return(); Pop(2)

0x27c: @@ HasProperty(Stack[-3], Stack[-1])
0x27d: Pop(0)
0x27e: Stack[-5] = Stack[-1]
0x27f: Return(); Pop(2)

0x280: PushEmpty(object, object)
0x281: @ self(Stack[-1])
0x282: Pop(0)
0x283: Stack[-3] = Stack[-1]
0x284: Return(); Pop(2)

0x285: Stack[-1] = 0
0x286: PushEmpty(float, float)
0x287: @ rand(Stack[-1])
0x288: Pop(0)
0x289: Stack[-4] = Stack[-1] < Stack[-3]; Pop(0);
0x28a: Return(); Pop(2)

0x28b: PushEmpty(object, object)
0x28c: @ CreateObjectVector(Stack[-1])
0x28d: Pop(0)
0x28e: Stack[-3] = Stack[-1]
0x28f: Return(); Pop(2)

0x290: Stack[-1] = 0
0x291: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x292: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0x293: Pop(0)
0x294: Pop(0); Push((bool) Stack[-4] == 0)
0x295: IF (Stack[-1] == 0) GOTO 0x29e; Pop(1)

0x296: Push("Locator ")
0x297: Pop(1); Push(Stack[-1] + Stack[-12]);
0x298: Push(" doesn't exist")
0x299: Pop(2); Push(Stack[-2] + Stack[-1]);
0x29a: @ Trace(Stack[-1])
0x29b: Pop(1)
0x29c: Stack[-1] = 0
0x29d: GOTO 0x2a0

0x29e: @ AddActor(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0x29f: Pop(0)
0x2a0: Stack[-13] = Stack[-1]
0x2a1: Return(); Pop(8)

0x2a2: Stack[-1] = 0
0x2a3: PushEmpty(int, int, object, int, int, object)
0x2a4: @@ size(Stack[-3])
0x2a5: Pop(0)
0x2a6: Stack[-2] = (int) 0
0x2a7: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0x2a8: IF (Stack[-1] == 0) GOTO 0x2b3; Pop(1)

0x2a9: @@ get(Stack[-1], Stack[-2])
0x2aa: Pop(0)
0x2ab: Push(Stack[-1])
0x2ac: IF (Stack[-1] == 0) GOTO 0x2af; Pop(1)

0x2ad: @ RemoveActor(Stack[-1])
0x2ae: Pop(0)
0x2af: Stack[-1] = 0
0x2b0: Push((int) 1)
0x2b1: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x2b2: GOTO 0x2a7

0x2b3: @@ clear()
0x2b4: Pop(0)
0x2b5: Return(); Pop(6)

