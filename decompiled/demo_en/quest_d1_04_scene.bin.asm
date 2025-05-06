GlobalVarCount = 0

Strings:
	pt_child
	not enough locators for quest b4q01
	add
	pers_doberman
	d1q04_doberman1.xml
	d1q04_doberman2.xml
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
	Trace (1 args)
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
	AddActor (6 args)

RunOp = 0x39
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object, object) Params = 0
		EVENT_5 Op = 0x178 Vars = ()
		EVENT_6 Op = 0x1b8 Vars = ()


0x0: PushEmpty(int, string, bool, cvector, int, int, string, bool, cvector, int)
0x1: Stack[-5] = (int) 1
0x2: Push((int) 2)
0x3: Pop(1); Push((bool) Stack[-6] <= Stack[-1])
0x4: IF (Stack[-1] == 0) GOTO 0x1b; Pop(1)

0x5: Push("pt_child")
0x6: Stack[-5] = Stack[-1] + Stack[-6]; Pop(1);
0x7: @ GetLocator(Stack[-4], Stack[-3], Stack[-2])
0x8: Pop(0)
0x9: Pop(0); Push((bool) Stack[-3] == 0)
0xa: IF (Stack[-1] == 0) GOTO 0xf; Pop(1)

0xb: Push("not enough locators for quest b4q01")
0xc: @ Trace(Stack[-1])
0xd: Pop(1)
0xe: GOTO 0x1b

0xf: Push((int) 0)
0x10: @@ add(Stack[-1])
0x11: Pop(1)
0x12: @@ add(Stack[-5])
0x13: Pop(0)
0x14: Push((int) 1)
0x15: Stack[-2] = Stack[-6] - Stack[-1]; Pop(1);
0x16: @@ add(Stack[-1])
0x17: Pop(0)
0x18: Push((int) 1)
0x19: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x1a: GOTO 0x2

0x1b: Return(); Pop(10)

0x1c: PushEmpty()
0x1d: Push((int) 0)
0x1e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1f: IF (Stack[-1] == 0) GOTO 0x23; Pop(1)

0x20: Push("pt_child")
0x21: Stack[-4] = Stack[-1] + Stack[-2]; Pop(1);
0x22: Return(); Pop(0)

0x23: Stack[-3] = ""
0x24: Return(); Pop(0)

0x25: PushEmpty()
0x26: Stack[-3] = "pers_doberman"
0x27: Return(); Pop(0)

0x28: PushEmpty()
0x29: Push((int) 0)
0x2a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2b: IF (Stack[-1] == 0) GOTO 0x37; Pop(1)

0x2c: Push((int) 0)
0x2d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2e: IF (Stack[-1] == 0) GOTO 0x32; Pop(1)

0x2f: Stack[-3] = "d1q04_doberman1.xml"
0x30: Return(); Pop(0)

0x31: GOTO 0x37

0x32: Push((int) 1)
0x33: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x34: IF (Stack[-1] == 0) GOTO 0x37; Pop(1)

0x35: Stack[-3] = "d1q04_doberman2.xml"
0x36: Return(); Pop(0)

0x37: Stack[-3] = ""
0x38: Return(); Pop(0)

0x39: PushEmpty()
0x3a: Call2 0x40

0x3b: Pop(0)
0x3c: PushEmpty()
0x3d: Call2 0x166

0x3e: Pop(0)
0x3f: Return(); Pop(0)

0x40: PushEmpty(bool, bool)
0x41: Push("nailed")
0x42: @ GetProperty(Stack[-1], Stack[-2])
0x43: Pop(1)
0x44: PushEmpty(bool)
0x45: Stack[-1] = Stack[-2]
0x46: Call2 0x55

0x47: Pop(1)
0x48: PushEmpty(bool)
0x49: Stack[-1] = Stack[-2]
0x4a: Call2 0x68

0x4b: Pop(1)
0x4c: PushEmpty(bool)
0x4d: Stack[-1] = Stack[-2]
0x4e: Call2 0x7b

0x4f: Pop(1)
0x50: PushEmpty(bool)
0x51: Stack[-1] = Stack[-2]
0x52: Call2 0x8e

0x53: Pop(1)
0x54: Return(); Pop(2)

0x55: PushEmpty(int, bool, cvector, cvector, int, bool, cvector, cvector)
0x56: Stack[-4] = (int) 1
0x57: Push("pt_item_food")
0x58: Pop(1); Push(Stack[-1] + Stack[-5]);
0x59: @ GetLocator(Stack[-1], Stack[-4], Stack[-3], Stack[-2])
0x5a: Pop(1)
0x5b: Pop(0); Push((bool) Stack[-3] == 0)
0x5c: IF (Stack[-1] == 0) GOTO 0x5e; Pop(1)

0x5d: GOTO 0x67

0x5e: PushEmpty(cvector, cvector, bool)
0x5f: Stack[-3] = Stack[-5]
0x60: Stack[-2] = Stack[-4]
0x61: Stack[-1] = Stack[-12]
0x62: Call2 0xa1

0x63: Pop(3)
0x64: Push((int) 1)
0x65: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x66: GOTO 0x57

0x67: Return(); Pop(8)

0x68: PushEmpty(int, bool, cvector, cvector, int, bool, cvector, cvector)
0x69: Stack[-4] = (int) 1
0x6a: Push("pt_item_pfood")
0x6b: Pop(1); Push(Stack[-1] + Stack[-5]);
0x6c: @ GetLocator(Stack[-1], Stack[-4], Stack[-3], Stack[-2])
0x6d: Pop(1)
0x6e: Pop(0); Push((bool) Stack[-3] == 0)
0x6f: IF (Stack[-1] == 0) GOTO 0x71; Pop(1)

0x70: GOTO 0x7a

0x71: PushEmpty(cvector, cvector, bool)
0x72: Stack[-3] = Stack[-5]
0x73: Stack[-2] = Stack[-4]
0x74: Stack[-1] = Stack[-12]
0x75: Call2 0xdc

0x76: Pop(3)
0x77: Push((int) 1)
0x78: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x79: GOTO 0x6a

0x7a: Return(); Pop(8)

0x7b: PushEmpty(int, bool, cvector, cvector, int, bool, cvector, cvector)
0x7c: Stack[-4] = (int) 1
0x7d: Push("pt_item_knife")
0x7e: Pop(1); Push(Stack[-1] + Stack[-5]);
0x7f: @ GetLocator(Stack[-1], Stack[-4], Stack[-3], Stack[-2])
0x80: Pop(1)
0x81: Pop(0); Push((bool) Stack[-3] == 0)
0x82: IF (Stack[-1] == 0) GOTO 0x84; Pop(1)

0x83: GOTO 0x8d

0x84: PushEmpty(cvector, cvector, bool)
0x85: Stack[-3] = Stack[-5]
0x86: Stack[-2] = Stack[-4]
0x87: Stack[-1] = Stack[-12]
0x88: Call2 0x12f

0x89: Pop(3)
0x8a: Push((int) 1)
0x8b: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x8c: GOTO 0x7d

0x8d: Return(); Pop(8)

0x8e: PushEmpty(int, bool, cvector, cvector, int, bool, cvector, cvector)
0x8f: Stack[-4] = (int) 1
0x90: Push("pt_item_bottle")
0x91: Pop(1); Push(Stack[-1] + Stack[-5]);
0x92: @ GetLocator(Stack[-1], Stack[-4], Stack[-3], Stack[-2])
0x93: Pop(1)
0x94: Pop(0); Push((bool) Stack[-3] == 0)
0x95: IF (Stack[-1] == 0) GOTO 0x97; Pop(1)

0x96: GOTO 0xa0

0x97: PushEmpty(cvector, cvector, bool)
0x98: Stack[-3] = Stack[-5]
0x99: Stack[-2] = Stack[-4]
0x9a: Stack[-1] = Stack[-12]
0x9b: Call2 0x142

0x9c: Pop(3)
0x9d: Push((int) 1)
0x9e: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x9f: GOTO 0x90

0xa0: Return(); Pop(8)

0xa1: PushEmpty(string, object, object, float, float, cvector, string, object, object, float, float, cvector)
0xa2: PushEmpty(bool, float)
0xa3: Push(Stack[-15])
0xa4: IF (Stack[-1] == 0) GOTO 0xa7; Pop(1)

0xa5: Stack[-1] = (float) 0.05
0xa6: GOTO 0xa8

0xa7: Stack[-1] = (float) 0.2
0xa8: Call2 0x1f7

0xa9: Pop(1)
0xaa: IF (Stack[-1] == 0) GOTO 0xc3; Pop(1)

0xab: Push((int) 5)
0xac: Push((int) 5)
0xad: Push((int) 3)
0xae: Push((int) 2)
0xaf: Push((int) 3)
0xb0: Push("bread")
0xb1: Push("bottle_water")
0xb2: Push("milk")
0xb3: Push("vegetables")
0xb4: Push("lemon")
0xb5: @ RandOneOf(Stack[-16], Stack[-10], Stack[-9], Stack[-8], Stack[-7], Stack[-6], Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xb6: Pop(10)
0xb7: Push("scripted_container")
0xb8: PushEmpty(object)
0xb9: Call2 0x1f1

0xba: Pop(0)
0xbb: Push("item_")
0xbc: Pop(1); Push(Stack[-1] + Stack[-9]);
0xbd: Push("_steal.xml")
0xbe: Pop(2); Push(Stack[-2] + Stack[-1]);
0xbf: @ AddActorByType(Stack[-8], Stack[-3], Stack[-2], Stack[-18], Stack[-17], Stack[-1])
0xc0: Pop(3)
0xc1: Stack[-5] = 0
0xc2: GOTO 0xdb

0xc3: PushEmpty(bool, float)
0xc4: Stack[-1] = (float) 0.5
0xc5: Call2 0x1f7

0xc6: Pop(1)
0xc7: IF (Stack[-1] == 0) GOTO 0xdb; Pop(1)

0xc8: @ RandVec2D(Stack[-3], Stack[-2])
0xc9: Pop(0)
0xca: Push(CvectorIndex(Stack[-1], 0))
0xcb: Stack[-1] = Stack[-4]
0xcc: CvectorIndex(Stack[-2], 0) = Stack[-1];
0xcd: Push(CvectorIndex(Stack[-1], 1))
0xce: Stack[-1] = (int) 0
0xcf: CvectorIndex(Stack[-2], 1) = Stack[-1];
0xd0: Push(CvectorIndex(Stack[-1], 2))
0xd1: Stack[-1] = Stack[-3]
0xd2: CvectorIndex(Stack[-2], 2) = Stack[-1];
0xd3: Push("scripted_container")
0xd4: PushEmpty(object)
0xd5: Call2 0x1f1

0xd6: Pop(0)
0xd7: Push("item_plate.xml")
0xd8: @ AddActorByType(Stack[-7], Stack[-3], Stack[-2], Stack[-18], Stack[-4], Stack[-1])
0xd9: Pop(3)
0xda: Stack[-4] = 0
0xdb: Return(); Pop(12)

0xdc: PushEmpty(string, object, float, float, cvector, object, float, float, cvector, string, object, float, float, cvector, object, float, float, cvector)
0xdd: PushEmpty(bool, float)
0xde: Push(Stack[-21])
0xdf: IF (Stack[-1] == 0) GOTO 0xe2; Pop(1)

0xe0: Stack[-1] = (float) 0.05
0xe1: GOTO 0xe3

0xe2: Stack[-1] = (float) 0.2
0xe3: Call2 0x1f7

0xe4: Pop(1)
0xe5: IF (Stack[-1] == 0) GOTO 0x116; Pop(1)

0xe6: Push((int) 8)
0xe7: Push((int) 3)
0xe8: Push((int) 3)
0xe9: Push((int) 3)
0xea: Push((int) 2)
0xeb: Push((int) 2)
0xec: Push((int) 1)
0xed: Push("rusk")
0xee: Push("dried_fish")
0xef: Push("dried_meat")
0xf0: Push("smoked_meat")
0xf1: Push("fresh_fish")
0xf2: Push("fresh_meat")
0xf3: Push("tvirin")
0xf4: @ RandOneOf(Stack[-23], Stack[-14], Stack[-13], Stack[-12], Stack[-11], Stack[-10], Stack[-9], Stack[-8], Stack[-7], Stack[-6], Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xf5: Pop(14)
0xf6: @ RandVec2D(Stack[-7], Stack[-6])
0xf7: Pop(0)
0xf8: Push(CvectorIndex(Stack[-5], 0))
0xf9: Stack[-1] = Stack[-8]
0xfa: CvectorIndex(Stack[-6], 0) = Stack[-1];
0xfb: Push(CvectorIndex(Stack[-5], 1))
0xfc: Stack[-1] = (int) 0
0xfd: CvectorIndex(Stack[-6], 1) = Stack[-1];
0xfe: Push(CvectorIndex(Stack[-5], 2))
0xff: Stack[-1] = Stack[-7]
0x100: CvectorIndex(Stack[-6], 2) = Stack[-1];
0x101: Push("scripted_container")
0x102: PushEmpty(object)
0x103: Call2 0x1f1

0x104: Pop(0)
0x105: Push("item_plate.xml")
0x106: @ AddActorByType(Stack[-11], Stack[-3], Stack[-2], Stack[-24], Stack[-8], Stack[-1])
0x107: Pop(3)
0x108: Push("scripted_container")
0x109: PushEmpty(object)
0x10a: Call2 0x1f1

0x10b: Pop(0)
0x10c: Push(CVector(0.0, 5.0, 0.0))
0x10d: Pop(1); Push(Stack[-24] + Stack[-1]);
0x10e: Push("item_")
0x10f: Pop(1); Push(Stack[-1] + Stack[-13]);
0x110: Push("_steal.xml")
0x111: Pop(2); Push(Stack[-2] + Stack[-1]);
0x112: @ AddActorByType(Stack[-12], Stack[-4], Stack[-3], Stack[-2], Stack[-24], Stack[-1])
0x113: Pop(4)
0x114: Stack[-8] = 0
0x115: GOTO 0x12e

0x116: PushEmpty(bool, float)
0x117: Stack[-1] = (float) 0.5
0x118: Call2 0x1f7

0x119: Pop(1)
0x11a: IF (Stack[-1] == 0) GOTO 0x12e; Pop(1)

0x11b: @ RandVec2D(Stack[-3], Stack[-2])
0x11c: Pop(0)
0x11d: Push(CvectorIndex(Stack[-1], 0))
0x11e: Stack[-1] = Stack[-4]
0x11f: CvectorIndex(Stack[-2], 0) = Stack[-1];
0x120: Push(CvectorIndex(Stack[-1], 1))
0x121: Stack[-1] = (int) 0
0x122: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x123: Push(CvectorIndex(Stack[-1], 2))
0x124: Stack[-1] = Stack[-3]
0x125: CvectorIndex(Stack[-2], 2) = Stack[-1];
0x126: Push("scripted_container")
0x127: PushEmpty(object)
0x128: Call2 0x1f1

0x129: Pop(0)
0x12a: Push("item_plate.xml")
0x12b: @ AddActorByType(Stack[-7], Stack[-3], Stack[-2], Stack[-24], Stack[-4], Stack[-1])
0x12c: Pop(3)
0x12d: Stack[-4] = 0
0x12e: Return(); Pop(18)

0x12f: PushEmpty(object, object)
0x130: PushEmpty(bool, float)
0x131: Push(Stack[-5])
0x132: IF (Stack[-1] == 0) GOTO 0x135; Pop(1)

0x133: Stack[-1] = (float) 0.05
0x134: GOTO 0x136

0x135: Stack[-1] = (float) 0.05
0x136: Call2 0x1f7

0x137: Pop(1)
0x138: IF (Stack[-1] == 0) GOTO 0x141; Pop(1)

0x139: Push("scripted_container")
0x13a: PushEmpty(object)
0x13b: Call2 0x1f1

0x13c: Pop(0)
0x13d: Push("item_knife_steal.xml")
0x13e: @ AddActorByType(Stack[-4], Stack[-3], Stack[-2], Stack[-8], Stack[-7], Stack[-1])
0x13f: Pop(3)
0x140: Stack[-1] = 0
0x141: Return(); Pop(2)

0x142: PushEmpty(string, object, string, object)
0x143: PushEmpty(bool, float)
0x144: Push(Stack[-7])
0x145: IF (Stack[-1] == 0) GOTO 0x148; Pop(1)

0x146: Stack[-1] = (float) 0.2
0x147: GOTO 0x149

0x148: Stack[-1] = (float) 0.4
0x149: Call2 0x1f7

0x14a: Pop(1)
0x14b: IF (Stack[-1] == 0) GOTO 0x165; Pop(1)

0x14c: Push((int) 10)
0x14d: Push((int) 15)
0x14e: Push((int) 3)
0x14f: Push((int) 3)
0x150: Push((int) 3)
0x151: Push((int) 1)
0x152: Push("bottle_water")
0x153: Push("bottle_empty")
0x154: Push("vegetables")
0x155: Push("milk")
0x156: Push("egg")
0x157: Push("tvirin")
0x158: @ RandOneOf(Stack[-14], Stack[-12], Stack[-11], Stack[-10], Stack[-9], Stack[-8], Stack[-7], Stack[-6], Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x159: Pop(12)
0x15a: Push("scripted_container")
0x15b: PushEmpty(object)
0x15c: Call2 0x1f1

0x15d: Pop(0)
0x15e: Push("item_")
0x15f: Pop(1); Push(Stack[-1] + Stack[-5]);
0x160: Push("_steal.xml")
0x161: Pop(2); Push(Stack[-2] + Stack[-1]);
0x162: @ AddActorByType(Stack[-4], Stack[-3], Stack[-2], Stack[-10], Stack[-9], Stack[-1])
0x163: Pop(3)
0x164: Stack[-1] = 0
0x165: Return(); Pop(4)

0x166: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == 0)
0x167: IF (Stack[-1] == 0) GOTO 0x16c; Pop(1)

0x168: PushEmpty(object)
0x169: Call2 0x1fc

0x16a: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x16b: Pop(1)
0x16c: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x16d: IF (Stack[-1] == 0) GOTO 0x170; Pop(1)

0x16e: @ CreateIntVector(Stack[-0])
0x16f: Pop(0)
0x170: PushEmpty(object)
0x171: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x172: Call2 0x0

0x173: Pop(1)
0x174: @ Hold()
0x175: Pop(0)
0x176: GOTO 0x174

0x177: Return(); Pop(0)

0x178: PushEmpty(int, int, int, int, int, string, string, string, int, int, int, int, int, string, string, string)
0x179: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == 0)
0x17a: IF (Stack[-1] == 0) GOTO 0x17f; Pop(1)

0x17b: PushEmpty(object)
0x17c: Call2 0x1fc

0x17d: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x17e: Pop(1)
0x17f: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x180: IF (Stack[-1] == 0) GOTO 0x183; Pop(1)

0x181: @ CreateIntVector(Stack[-0])
0x182: Pop(0)
0x183: PushEmpty(object)
0x184: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x185: Call2 0x214

0x186: Pop(1)
0x187: @@ size(Stack[-8])
0x188: Pop(0)
0x189: Stack[-7] = (int) 0
0x18a: Pop(0); Push((bool) Stack[-7] < Stack[-8])
0x18b: IF (Stack[-1] == 0) GOTO 0x1b7; Pop(1)

0x18c: @@ get(Stack[-6], Stack[-7])
0x18d: Pop(0)
0x18e: Push((int) 1)
0x18f: Pop(1); Push(Stack[-8] + Stack[-1]);
0x190: @@ get(Stack[-6], Stack[-1])
0x191: Pop(1)
0x192: Push((int) 2)
0x193: Pop(1); Push(Stack[-8] + Stack[-1]);
0x194: @@ get(Stack[-5], Stack[-1])
0x195: Pop(1)
0x196: PushEmpty(string, int, int)
0x197: Stack[-2] = Stack[-9]
0x198: Stack[-1] = Stack[-8]
0x199: Call2 0x1c

0x19a: Stack[-6] = Stack[-3]
0x19b: Pop(3)
0x19c: PushEmpty(string, int, int)
0x19d: Stack[-2] = Stack[-9]
0x19e: Stack[-1] = Stack[-7]
0x19f: Call2 0x25

0x1a0: Stack[-5] = Stack[-3]
0x1a1: Pop(3)
0x1a2: PushEmpty(string, int, int)
0x1a3: Stack[-2] = Stack[-9]
0x1a4: Stack[-1] = Stack[-7]
0x1a5: Call2 0x28

0x1a6: Stack[-4] = Stack[-3]
0x1a7: Pop(3)
0x1a8: PushEmpty(object, object, string, string, string)
0x1a9: PushEmpty(object)
0x1aa: Call2 0x1f1

0x1ab: Stack[-5] = Stack[-1]
0x1ac: Pop(1)
0x1ad: Stack[-3] = Stack[-8]
0x1ae: Stack[-2] = Stack[-7]
0x1af: Stack[-1] = Stack[-6]
0x1b0: Call2 0x202

0x1b1: Pop(4)
0x1b2: @@ add(Stack[-1])
0x1b3: Pop(1)
0x1b4: Push((int) 3)
0x1b5: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x1b6: GOTO 0x18a

0x1b7: Return(); Pop(16)

0x1b8: PushEmpty(int, int, object, bool, int, int, object, bool)
0x1b9: @@ size(Stack[-4])
0x1ba: Pop(0)
0x1bb: Stack[-3] = (int) 0
0x1bc: Pop(0); Push((bool) Stack[-3] < Stack[-4])
0x1bd: IF (Stack[-1] == 0) GOTO 0x1e0; Pop(1)

0x1be: @@ get(Stack[-2], Stack[-3])
0x1bf: Pop(0)
0x1c0: Pop(0); Push(( Stack[-2] != 0 )
0x1c1: IF (Stack[-1] == 0) GOTO 0x1d2; Pop(1)

0x1c2: @@ IsDead(Stack[-1])
0x1c3: Pop(0)
0x1c4: Pop(0); Push((bool) Stack[-1] == 0)
0x1c5: IF (Stack[-1] == 0) GOTO 0x1d0; Pop(1)

0x1c6: PushEmpty(bool, object, string)
0x1c7: Stack[-2] = Stack[-5]
0x1c8: Stack[-1] = "ToDie"
0x1c9: Call2 0x1e5

0x1ca: Pop(2)
0x1cb: Pop(1); Push((bool) Stack[-1] == 0)
0x1cc: IF (Stack[-1] == 0) GOTO 0x1d0; Pop(1)

0x1cd: Push((int) 1)
0x1ce: Stack[-4] = Stack[-4] + Stack[-1]; Pop(1);
0x1cf: GOTO 0x1df

0x1d0: @ RemoveActor(Stack[-2])
0x1d1: Pop(0)
0x1d2: @@ remove(Stack[-3])
0x1d3: Pop(0)
0x1d4: Push((int) 3)
0x1d5: Pop(1); Push(Stack[-4] * Stack[-1]);
0x1d6: Push((int) 1)
0x1d7: Pop(1); Push(Stack[-5] + Stack[-1]);
0x1d8: Push((int) 3)
0x1d9: Pop(2); Push(Stack[-2] * Stack[-1]);
0x1da: @@ remove(Stack[-2], Stack[-1])
0x1db: Pop(2)
0x1dc: Push((int) -1)
0x1dd: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x1de: Stack[-2] = 0
0x1df: GOTO 0x1bc

0x1e0: PushEmpty(object)
0x1e1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1e2: Call2 0x214

0x1e3: Pop(1)
0x1e4: Return(); Pop(8)

0x1e5: PushEmpty(bool, bool)
0x1e6: Push("HasProperty")
0x1e7: Push((int) 2)
0x1e8: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x1e9: Pop(1); Push((bool) Stack[-1] == 0)
0x1ea: IF (Stack[-1] == 0) GOTO 0x1ed; Pop(1)

0x1eb: Stack[-5] = (bool) 0
0x1ec: Return(); Pop(2)

0x1ed: @@ HasProperty(Stack[-3], Stack[-1])
0x1ee: Pop(0)
0x1ef: Stack[-5] = Stack[-1]
0x1f0: Return(); Pop(2)

0x1f1: PushEmpty(object, object)
0x1f2: @ self(Stack[-1])
0x1f3: Pop(0)
0x1f4: Stack[-3] = Stack[-1]
0x1f5: Return(); Pop(2)

0x1f6: Stack[-1] = 0
0x1f7: PushEmpty(float, float)
0x1f8: @ rand(Stack[-1])
0x1f9: Pop(0)
0x1fa: Stack[-4] = Stack[-1] < Stack[-3]; Pop(0);
0x1fb: Return(); Pop(2)

0x1fc: PushEmpty(object, object)
0x1fd: @ CreateObjectVector(Stack[-1])
0x1fe: Pop(0)
0x1ff: Stack[-3] = Stack[-1]
0x200: Return(); Pop(2)

0x201: Stack[-1] = 0
0x202: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x203: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0x204: Pop(0)
0x205: Pop(0); Push((bool) Stack[-4] == 0)
0x206: IF (Stack[-1] == 0) GOTO 0x20f; Pop(1)

0x207: Push("Locator ")
0x208: Pop(1); Push(Stack[-1] + Stack[-12]);
0x209: Push(" doesn't exist")
0x20a: Pop(2); Push(Stack[-2] + Stack[-1]);
0x20b: @ Trace(Stack[-1])
0x20c: Pop(1)
0x20d: Stack[-1] = 0
0x20e: GOTO 0x211

0x20f: @ AddActor(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0x210: Pop(0)
0x211: Stack[-13] = Stack[-1]
0x212: Return(); Pop(8)

0x213: Stack[-1] = 0
0x214: PushEmpty(int, int, object, int, int, object)
0x215: Push(Stack[-7])
0x216: IF (Stack[-1] == 0) GOTO 0x228; Pop(1)

0x217: @@ size(Stack[-3])
0x218: Pop(0)
0x219: Stack[-2] = (int) 0
0x21a: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0x21b: IF (Stack[-1] == 0) GOTO 0x226; Pop(1)

0x21c: @@ get(Stack[-1], Stack[-2])
0x21d: Pop(0)
0x21e: Push(Stack[-1])
0x21f: IF (Stack[-1] == 0) GOTO 0x222; Pop(1)

0x220: @ RemoveActor(Stack[-1])
0x221: Pop(0)
0x222: Stack[-1] = 0
0x223: Push((int) 1)
0x224: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x225: GOTO 0x21a

0x226: @@ clear()
0x227: Pop(0)
0x228: Return(); Pop(6)

