GlobalVarCount = 0

Strings:

Import:
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

RunOp = 0xb
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object, object) Params = 0
		EVENT_5 Op = 0x14a Vars = ()
		EVENT_6 Op = 0x18a Vars = ()


0x0: PushEmpty()
0x1: Return(); Pop(0)

0x2: PushEmpty()
0x3: Stack[-3] = ""
0x4: Return(); Pop(0)

0x5: PushEmpty()
0x6: Stack[-3] = ""
0x7: Return(); Pop(0)

0x8: PushEmpty()
0x9: Stack[-3] = ""
0xa: Return(); Pop(0)

0xb: PushEmpty()
0xc: Call2 0x12

0xd: Pop(0)
0xe: PushEmpty()
0xf: Call2 0x138

0x10: Pop(0)
0x11: Return(); Pop(0)

0x12: PushEmpty(bool, bool)
0x13: Push("nailed")
0x14: @ GetProperty(Stack[-1], Stack[-2])
0x15: Pop(1)
0x16: PushEmpty(bool)
0x17: Stack[-1] = Stack[-2]
0x18: Call2 0x27

0x19: Pop(1)
0x1a: PushEmpty(bool)
0x1b: Stack[-1] = Stack[-2]
0x1c: Call2 0x3a

0x1d: Pop(1)
0x1e: PushEmpty(bool)
0x1f: Stack[-1] = Stack[-2]
0x20: Call2 0x4d

0x21: Pop(1)
0x22: PushEmpty(bool)
0x23: Stack[-1] = Stack[-2]
0x24: Call2 0x60

0x25: Pop(1)
0x26: Return(); Pop(2)

0x27: PushEmpty(int, bool, cvector, cvector, int, bool, cvector, cvector)
0x28: Stack[-4] = (int) 1
0x29: Push("pt_item_food")
0x2a: Pop(1); Push(Stack[-1] + Stack[-5]);
0x2b: @ GetLocator(Stack[-1], Stack[-4], Stack[-3], Stack[-2])
0x2c: Pop(1)
0x2d: Pop(0); Push((bool) Stack[-3] == 0)
0x2e: IF (Stack[-1] == 0) GOTO 0x30; Pop(1)

0x2f: GOTO 0x39

0x30: PushEmpty(cvector, cvector, bool)
0x31: Stack[-3] = Stack[-5]
0x32: Stack[-2] = Stack[-4]
0x33: Stack[-1] = Stack[-12]
0x34: Call2 0x73

0x35: Pop(3)
0x36: Push((int) 1)
0x37: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x38: GOTO 0x29

0x39: Return(); Pop(8)

0x3a: PushEmpty(int, bool, cvector, cvector, int, bool, cvector, cvector)
0x3b: Stack[-4] = (int) 1
0x3c: Push("pt_item_pfood")
0x3d: Pop(1); Push(Stack[-1] + Stack[-5]);
0x3e: @ GetLocator(Stack[-1], Stack[-4], Stack[-3], Stack[-2])
0x3f: Pop(1)
0x40: Pop(0); Push((bool) Stack[-3] == 0)
0x41: IF (Stack[-1] == 0) GOTO 0x43; Pop(1)

0x42: GOTO 0x4c

0x43: PushEmpty(cvector, cvector, bool)
0x44: Stack[-3] = Stack[-5]
0x45: Stack[-2] = Stack[-4]
0x46: Stack[-1] = Stack[-12]
0x47: Call2 0xae

0x48: Pop(3)
0x49: Push((int) 1)
0x4a: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x4b: GOTO 0x3c

0x4c: Return(); Pop(8)

0x4d: PushEmpty(int, bool, cvector, cvector, int, bool, cvector, cvector)
0x4e: Stack[-4] = (int) 1
0x4f: Push("pt_item_knife")
0x50: Pop(1); Push(Stack[-1] + Stack[-5]);
0x51: @ GetLocator(Stack[-1], Stack[-4], Stack[-3], Stack[-2])
0x52: Pop(1)
0x53: Pop(0); Push((bool) Stack[-3] == 0)
0x54: IF (Stack[-1] == 0) GOTO 0x56; Pop(1)

0x55: GOTO 0x5f

0x56: PushEmpty(cvector, cvector, bool)
0x57: Stack[-3] = Stack[-5]
0x58: Stack[-2] = Stack[-4]
0x59: Stack[-1] = Stack[-12]
0x5a: Call2 0x101

0x5b: Pop(3)
0x5c: Push((int) 1)
0x5d: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x5e: GOTO 0x4f

0x5f: Return(); Pop(8)

0x60: PushEmpty(int, bool, cvector, cvector, int, bool, cvector, cvector)
0x61: Stack[-4] = (int) 1
0x62: Push("pt_item_bottle")
0x63: Pop(1); Push(Stack[-1] + Stack[-5]);
0x64: @ GetLocator(Stack[-1], Stack[-4], Stack[-3], Stack[-2])
0x65: Pop(1)
0x66: Pop(0); Push((bool) Stack[-3] == 0)
0x67: IF (Stack[-1] == 0) GOTO 0x69; Pop(1)

0x68: GOTO 0x72

0x69: PushEmpty(cvector, cvector, bool)
0x6a: Stack[-3] = Stack[-5]
0x6b: Stack[-2] = Stack[-4]
0x6c: Stack[-1] = Stack[-12]
0x6d: Call2 0x114

0x6e: Pop(3)
0x6f: Push((int) 1)
0x70: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x71: GOTO 0x62

0x72: Return(); Pop(8)

0x73: PushEmpty(string, object, object, float, float, cvector, string, object, object, float, float, cvector)
0x74: PushEmpty(bool, float)
0x75: Push(Stack[-15])
0x76: IF (Stack[-1] == 0) GOTO 0x79; Pop(1)

0x77: Stack[-1] = (float) 0.05
0x78: GOTO 0x7a

0x79: Stack[-1] = (float) 0.2
0x7a: Call2 0x1c9

0x7b: Pop(1)
0x7c: IF (Stack[-1] == 0) GOTO 0x95; Pop(1)

0x7d: Push((int) 5)
0x7e: Push((int) 5)
0x7f: Push((int) 3)
0x80: Push((int) 2)
0x81: Push((int) 3)
0x82: Push("bread")
0x83: Push("bottle_water")
0x84: Push("milk")
0x85: Push("vegetables")
0x86: Push("lemon")
0x87: @ RandOneOf(Stack[-16], Stack[-10], Stack[-9], Stack[-8], Stack[-7], Stack[-6], Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x88: Pop(10)
0x89: Push("scripted_container")
0x8a: PushEmpty(object)
0x8b: Call2 0x1c3

0x8c: Pop(0)
0x8d: Push("item_")
0x8e: Pop(1); Push(Stack[-1] + Stack[-9]);
0x8f: Push("_steal.xml")
0x90: Pop(2); Push(Stack[-2] + Stack[-1]);
0x91: @ AddActorByType(Stack[-8], Stack[-3], Stack[-2], Stack[-18], Stack[-17], Stack[-1])
0x92: Pop(3)
0x93: Stack[-5] = 0
0x94: GOTO 0xad

0x95: PushEmpty(bool, float)
0x96: Stack[-1] = (float) 0.5
0x97: Call2 0x1c9

0x98: Pop(1)
0x99: IF (Stack[-1] == 0) GOTO 0xad; Pop(1)

0x9a: @ RandVec2D(Stack[-3], Stack[-2])
0x9b: Pop(0)
0x9c: Push(CvectorIndex(Stack[-1], 0))
0x9d: Stack[-1] = Stack[-4]
0x9e: CvectorIndex(Stack[-2], 0) = Stack[-1];
0x9f: Push(CvectorIndex(Stack[-1], 1))
0xa0: Stack[-1] = (int) 0
0xa1: CvectorIndex(Stack[-2], 1) = Stack[-1];
0xa2: Push(CvectorIndex(Stack[-1], 2))
0xa3: Stack[-1] = Stack[-3]
0xa4: CvectorIndex(Stack[-2], 2) = Stack[-1];
0xa5: Push("scripted_container")
0xa6: PushEmpty(object)
0xa7: Call2 0x1c3

0xa8: Pop(0)
0xa9: Push("item_plate.xml")
0xaa: @ AddActorByType(Stack[-7], Stack[-3], Stack[-2], Stack[-18], Stack[-4], Stack[-1])
0xab: Pop(3)
0xac: Stack[-4] = 0
0xad: Return(); Pop(12)

0xae: PushEmpty(string, object, float, float, cvector, object, float, float, cvector, string, object, float, float, cvector, object, float, float, cvector)
0xaf: PushEmpty(bool, float)
0xb0: Push(Stack[-21])
0xb1: IF (Stack[-1] == 0) GOTO 0xb4; Pop(1)

0xb2: Stack[-1] = (float) 0.05
0xb3: GOTO 0xb5

0xb4: Stack[-1] = (float) 0.2
0xb5: Call2 0x1c9

0xb6: Pop(1)
0xb7: IF (Stack[-1] == 0) GOTO 0xe8; Pop(1)

0xb8: Push((int) 8)
0xb9: Push((int) 3)
0xba: Push((int) 3)
0xbb: Push((int) 3)
0xbc: Push((int) 2)
0xbd: Push((int) 2)
0xbe: Push((int) 1)
0xbf: Push("rusk")
0xc0: Push("dried_fish")
0xc1: Push("dried_meat")
0xc2: Push("smoked_meat")
0xc3: Push("fresh_fish")
0xc4: Push("fresh_meat")
0xc5: Push("tvirin")
0xc6: @ RandOneOf(Stack[-23], Stack[-14], Stack[-13], Stack[-12], Stack[-11], Stack[-10], Stack[-9], Stack[-8], Stack[-7], Stack[-6], Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xc7: Pop(14)
0xc8: @ RandVec2D(Stack[-7], Stack[-6])
0xc9: Pop(0)
0xca: Push(CvectorIndex(Stack[-5], 0))
0xcb: Stack[-1] = Stack[-8]
0xcc: CvectorIndex(Stack[-6], 0) = Stack[-1];
0xcd: Push(CvectorIndex(Stack[-5], 1))
0xce: Stack[-1] = (int) 0
0xcf: CvectorIndex(Stack[-6], 1) = Stack[-1];
0xd0: Push(CvectorIndex(Stack[-5], 2))
0xd1: Stack[-1] = Stack[-7]
0xd2: CvectorIndex(Stack[-6], 2) = Stack[-1];
0xd3: Push("scripted_container")
0xd4: PushEmpty(object)
0xd5: Call2 0x1c3

0xd6: Pop(0)
0xd7: Push("item_plate.xml")
0xd8: @ AddActorByType(Stack[-11], Stack[-3], Stack[-2], Stack[-24], Stack[-8], Stack[-1])
0xd9: Pop(3)
0xda: Push("scripted_container")
0xdb: PushEmpty(object)
0xdc: Call2 0x1c3

0xdd: Pop(0)
0xde: Push(CVector(0.0, 5.0, 0.0))
0xdf: Pop(1); Push(Stack[-24] + Stack[-1]);
0xe0: Push("item_")
0xe1: Pop(1); Push(Stack[-1] + Stack[-13]);
0xe2: Push("_steal.xml")
0xe3: Pop(2); Push(Stack[-2] + Stack[-1]);
0xe4: @ AddActorByType(Stack[-12], Stack[-4], Stack[-3], Stack[-2], Stack[-24], Stack[-1])
0xe5: Pop(4)
0xe6: Stack[-8] = 0
0xe7: GOTO 0x100

0xe8: PushEmpty(bool, float)
0xe9: Stack[-1] = (float) 0.5
0xea: Call2 0x1c9

0xeb: Pop(1)
0xec: IF (Stack[-1] == 0) GOTO 0x100; Pop(1)

0xed: @ RandVec2D(Stack[-3], Stack[-2])
0xee: Pop(0)
0xef: Push(CvectorIndex(Stack[-1], 0))
0xf0: Stack[-1] = Stack[-4]
0xf1: CvectorIndex(Stack[-2], 0) = Stack[-1];
0xf2: Push(CvectorIndex(Stack[-1], 1))
0xf3: Stack[-1] = (int) 0
0xf4: CvectorIndex(Stack[-2], 1) = Stack[-1];
0xf5: Push(CvectorIndex(Stack[-1], 2))
0xf6: Stack[-1] = Stack[-3]
0xf7: CvectorIndex(Stack[-2], 2) = Stack[-1];
0xf8: Push("scripted_container")
0xf9: PushEmpty(object)
0xfa: Call2 0x1c3

0xfb: Pop(0)
0xfc: Push("item_plate.xml")
0xfd: @ AddActorByType(Stack[-7], Stack[-3], Stack[-2], Stack[-24], Stack[-4], Stack[-1])
0xfe: Pop(3)
0xff: Stack[-4] = 0
0x100: Return(); Pop(18)

0x101: PushEmpty(object, object)
0x102: PushEmpty(bool, float)
0x103: Push(Stack[-5])
0x104: IF (Stack[-1] == 0) GOTO 0x107; Pop(1)

0x105: Stack[-1] = (float) 0.05
0x106: GOTO 0x108

0x107: Stack[-1] = (float) 0.05
0x108: Call2 0x1c9

0x109: Pop(1)
0x10a: IF (Stack[-1] == 0) GOTO 0x113; Pop(1)

0x10b: Push("scripted_container")
0x10c: PushEmpty(object)
0x10d: Call2 0x1c3

0x10e: Pop(0)
0x10f: Push("item_knife_steal.xml")
0x110: @ AddActorByType(Stack[-4], Stack[-3], Stack[-2], Stack[-8], Stack[-7], Stack[-1])
0x111: Pop(3)
0x112: Stack[-1] = 0
0x113: Return(); Pop(2)

0x114: PushEmpty(string, object, string, object)
0x115: PushEmpty(bool, float)
0x116: Push(Stack[-7])
0x117: IF (Stack[-1] == 0) GOTO 0x11a; Pop(1)

0x118: Stack[-1] = (float) 0.2
0x119: GOTO 0x11b

0x11a: Stack[-1] = (float) 0.4
0x11b: Call2 0x1c9

0x11c: Pop(1)
0x11d: IF (Stack[-1] == 0) GOTO 0x137; Pop(1)

0x11e: Push((int) 10)
0x11f: Push((int) 15)
0x120: Push((int) 3)
0x121: Push((int) 3)
0x122: Push((int) 3)
0x123: Push((int) 1)
0x124: Push("bottle_water")
0x125: Push("bottle_empty")
0x126: Push("vegetables")
0x127: Push("milk")
0x128: Push("egg")
0x129: Push("tvirin")
0x12a: @ RandOneOf(Stack[-14], Stack[-12], Stack[-11], Stack[-10], Stack[-9], Stack[-8], Stack[-7], Stack[-6], Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x12b: Pop(12)
0x12c: Push("scripted_container")
0x12d: PushEmpty(object)
0x12e: Call2 0x1c3

0x12f: Pop(0)
0x130: Push("item_")
0x131: Pop(1); Push(Stack[-1] + Stack[-5]);
0x132: Push("_steal.xml")
0x133: Pop(2); Push(Stack[-2] + Stack[-1]);
0x134: @ AddActorByType(Stack[-4], Stack[-3], Stack[-2], Stack[-10], Stack[-9], Stack[-1])
0x135: Pop(3)
0x136: Stack[-1] = 0
0x137: Return(); Pop(4)

0x138: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == 0)
0x139: IF (Stack[-1] == 0) GOTO 0x13e; Pop(1)

0x13a: PushEmpty(object)
0x13b: Call2 0x1ce

0x13c: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x13d: Pop(1)
0x13e: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x13f: IF (Stack[-1] == 0) GOTO 0x142; Pop(1)

0x140: @ CreateIntVector(Stack[-0])
0x141: Pop(0)
0x142: PushEmpty(object)
0x143: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x144: Call2 0x0

0x145: Pop(1)
0x146: @ Hold()
0x147: Pop(0)
0x148: GOTO 0x146

0x149: Return(); Pop(0)

0x14a: PushEmpty(int, int, int, int, int, string, string, string, int, int, int, int, int, string, string, string)
0x14b: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == 0)
0x14c: IF (Stack[-1] == 0) GOTO 0x151; Pop(1)

0x14d: PushEmpty(object)
0x14e: Call2 0x1ce

0x14f: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x150: Pop(1)
0x151: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x152: IF (Stack[-1] == 0) GOTO 0x155; Pop(1)

0x153: @ CreateIntVector(Stack[-0])
0x154: Pop(0)
0x155: PushEmpty(object)
0x156: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x157: Call2 0x1e6

0x158: Pop(1)
0x159: @@ size(Stack[-8])
0x15a: Pop(0)
0x15b: Stack[-7] = (int) 0
0x15c: Pop(0); Push((bool) Stack[-7] < Stack[-8])
0x15d: IF (Stack[-1] == 0) GOTO 0x189; Pop(1)

0x15e: @@ get(Stack[-6], Stack[-7])
0x15f: Pop(0)
0x160: Push((int) 1)
0x161: Pop(1); Push(Stack[-8] + Stack[-1]);
0x162: @@ get(Stack[-6], Stack[-1])
0x163: Pop(1)
0x164: Push((int) 2)
0x165: Pop(1); Push(Stack[-8] + Stack[-1]);
0x166: @@ get(Stack[-5], Stack[-1])
0x167: Pop(1)
0x168: PushEmpty(string, int, int)
0x169: Stack[-2] = Stack[-9]
0x16a: Stack[-1] = Stack[-8]
0x16b: Call2 0x2

0x16c: Stack[-6] = Stack[-3]
0x16d: Pop(3)
0x16e: PushEmpty(string, int, int)
0x16f: Stack[-2] = Stack[-9]
0x170: Stack[-1] = Stack[-7]
0x171: Call2 0x5

0x172: Stack[-5] = Stack[-3]
0x173: Pop(3)
0x174: PushEmpty(string, int, int)
0x175: Stack[-2] = Stack[-9]
0x176: Stack[-1] = Stack[-7]
0x177: Call2 0x8

0x178: Stack[-4] = Stack[-3]
0x179: Pop(3)
0x17a: PushEmpty(object, object, string, string, string)
0x17b: PushEmpty(object)
0x17c: Call2 0x1c3

0x17d: Stack[-5] = Stack[-1]
0x17e: Pop(1)
0x17f: Stack[-3] = Stack[-8]
0x180: Stack[-2] = Stack[-7]
0x181: Stack[-1] = Stack[-6]
0x182: Call2 0x1d4

0x183: Pop(4)
0x184: @@ add(Stack[-1])
0x185: Pop(1)
0x186: Push((int) 3)
0x187: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x188: GOTO 0x15c

0x189: Return(); Pop(16)

0x18a: PushEmpty(int, int, object, bool, int, int, object, bool)
0x18b: @@ size(Stack[-4])
0x18c: Pop(0)
0x18d: Stack[-3] = (int) 0
0x18e: Pop(0); Push((bool) Stack[-3] < Stack[-4])
0x18f: IF (Stack[-1] == 0) GOTO 0x1b2; Pop(1)

0x190: @@ get(Stack[-2], Stack[-3])
0x191: Pop(0)
0x192: Pop(0); Push(( Stack[-2] != 0 )
0x193: IF (Stack[-1] == 0) GOTO 0x1a4; Pop(1)

0x194: @@ IsDead(Stack[-1])
0x195: Pop(0)
0x196: Pop(0); Push((bool) Stack[-1] == 0)
0x197: IF (Stack[-1] == 0) GOTO 0x1a2; Pop(1)

0x198: PushEmpty(bool, object, string)
0x199: Stack[-2] = Stack[-5]
0x19a: Stack[-1] = "ToDie"
0x19b: Call2 0x1b7

0x19c: Pop(2)
0x19d: Pop(1); Push((bool) Stack[-1] == 0)
0x19e: IF (Stack[-1] == 0) GOTO 0x1a2; Pop(1)

0x19f: Push((int) 1)
0x1a0: Stack[-4] = Stack[-4] + Stack[-1]; Pop(1);
0x1a1: GOTO 0x1b1

0x1a2: @ RemoveActor(Stack[-2])
0x1a3: Pop(0)
0x1a4: @@ remove(Stack[-3])
0x1a5: Pop(0)
0x1a6: Push((int) 3)
0x1a7: Pop(1); Push(Stack[-4] * Stack[-1]);
0x1a8: Push((int) 1)
0x1a9: Pop(1); Push(Stack[-5] + Stack[-1]);
0x1aa: Push((int) 3)
0x1ab: Pop(2); Push(Stack[-2] * Stack[-1]);
0x1ac: @@ remove(Stack[-2], Stack[-1])
0x1ad: Pop(2)
0x1ae: Push((int) -1)
0x1af: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x1b0: Stack[-2] = 0
0x1b1: GOTO 0x18e

0x1b2: PushEmpty(object)
0x1b3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1b4: Call2 0x1e6

0x1b5: Pop(1)
0x1b6: Return(); Pop(8)

0x1b7: PushEmpty(bool, bool)
0x1b8: Push("HasProperty")
0x1b9: Push((int) 2)
0x1ba: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x1bb: Pop(1); Push((bool) Stack[-1] == 0)
0x1bc: IF (Stack[-1] == 0) GOTO 0x1bf; Pop(1)

0x1bd: Stack[-5] = (bool) 0
0x1be: Return(); Pop(2)

0x1bf: @@ HasProperty(Stack[-3], Stack[-1])
0x1c0: Pop(0)
0x1c1: Stack[-5] = Stack[-1]
0x1c2: Return(); Pop(2)

0x1c3: PushEmpty(object, object)
0x1c4: @ self(Stack[-1])
0x1c5: Pop(0)
0x1c6: Stack[-3] = Stack[-1]
0x1c7: Return(); Pop(2)

0x1c8: Stack[-1] = 0
0x1c9: PushEmpty(float, float)
0x1ca: @ rand(Stack[-1])
0x1cb: Pop(0)
0x1cc: Stack[-4] = Stack[-1] < Stack[-3]; Pop(0);
0x1cd: Return(); Pop(2)

0x1ce: PushEmpty(object, object)
0x1cf: @ CreateObjectVector(Stack[-1])
0x1d0: Pop(0)
0x1d1: Stack[-3] = Stack[-1]
0x1d2: Return(); Pop(2)

0x1d3: Stack[-1] = 0
0x1d4: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x1d5: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0x1d6: Pop(0)
0x1d7: Pop(0); Push((bool) Stack[-4] == 0)
0x1d8: IF (Stack[-1] == 0) GOTO 0x1e1; Pop(1)

0x1d9: Push("Locator ")
0x1da: Pop(1); Push(Stack[-1] + Stack[-12]);
0x1db: Push(" doesn't exist")
0x1dc: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1dd: @ Trace(Stack[-1])
0x1de: Pop(1)
0x1df: Stack[-1] = 0
0x1e0: GOTO 0x1e3

0x1e1: @ AddActor(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0x1e2: Pop(0)
0x1e3: Stack[-13] = Stack[-1]
0x1e4: Return(); Pop(8)

0x1e5: Stack[-1] = 0
0x1e6: PushEmpty(int, int, object, int, int, object)
0x1e7: Push(Stack[-7])
0x1e8: IF (Stack[-1] == 0) GOTO 0x1fa; Pop(1)

0x1e9: @@ size(Stack[-3])
0x1ea: Pop(0)
0x1eb: Stack[-2] = (int) 0
0x1ec: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0x1ed: IF (Stack[-1] == 0) GOTO 0x1f8; Pop(1)

0x1ee: @@ get(Stack[-1], Stack[-2])
0x1ef: Pop(0)
0x1f0: Push(Stack[-1])
0x1f1: IF (Stack[-1] == 0) GOTO 0x1f4; Pop(1)

0x1f2: @ RemoveActor(Stack[-1])
0x1f3: Pop(0)
0x1f4: Stack[-1] = 0
0x1f5: Push((int) 1)
0x1f6: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x1f7: GOTO 0x1ec

0x1f8: @@ clear()
0x1f9: Pop(0)
0x1fa: Return(); Pop(6)

