GlobalVarCount = 0

Strings:
	walk_distance
	flower
	peanut
	hook
	beads
	bracelet
	silver_ring
	gold_ring
	funduk
	needle
	razor
	GetRegionByPt
	GetProperty
	SetProperty
	add
	money
	Money
	GetItemID
	Category
	AddItem
	SetItemName

Import:
	GetScene (1 args)
	GetPosition (1 args)
	sync (1 args)
	GetMainOutdoorScene (1 args)
	rand (2 args)
	SetProperty (2 args)
	irand (2 args)
	self (1 args)
	rand (1 args)
	CreateIntVector (1 args)
	SendWorldWndMessage (2 args)
	GetInvItemByName (2 args)
	GetInvItemProperty (3 args)
	CreateInvItem (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object, cvector, float) Params = 0


0x0: PushEmpty(float, float)
0x1: @ GetScene(Stack[-0])
0x2: Pop(0)
0x3: @ GetPosition(Stack[-1])
0x4: Pop(0)
0x5: Push(CvectorIndex(Stack[-1], 1))
0x6: Stack[-1] = (int) 0
0x7: CvectorIndex(Stack[1 + Tasks[-1].StackPointer], 1) = Stack[-1];
0x8: @ sync(Stack[-1])
0x9: Pop(0)
0xa: PushEmpty(float)
0xb: Stack[-1] = Stack[-2]
0xc: Call2 0x10

0xd: Pop(1)
0xe: GOTO 0x8

0xf: Return(); Pop(2)

0x10: PushEmpty(object, object, cvector, float, float, object, object, cvector, float, float)
0x11: @ GetScene(Stack[-5])
0x12: Pop(0)
0x13: @ GetMainOutdoorScene(Stack[-4])
0x14: Pop(0)
0x15: Pop(0); Push((bool) Stack[-4] != Stack[-5])
0x16: IF (Stack[-1] == 0) GOTO 0x18; Pop(1)

0x17: Return(); Pop(10)

0x18: @ GetPosition(Stack[-3])
0x19: Pop(0)
0x1a: Push(CvectorIndex(Stack[-3], 1))
0x1b: Stack[-1] = (int) 0
0x1c: CvectorIndex(Stack[-4], 1) = Stack[-1];
0x1d: PushEmpty(float, cvector, cvector)
0x1e: Stack[-2] = Stack[-6]
0x1f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x20: Call2 0x194

0x21: Stack[-5] = Stack[-3]
0x22: Pop(3)
0x23: PushEmpty(bool)
0x24: Stack[-1] = (bool) 1
0x25: Pop(0); Push((bool) Stack[-6] != Stack[0 + Tasks[-1].StackPointer])
0x26: IF (Stack[-1] == 0) GOTO 0x2b; Pop(1)

0x27: Push((int) 1000)
0x28: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x29: IF (Stack[-1] == 0) GOTO 0x2b; Pop(1)

0x2a: Stack[-1] = (bool) 0
0x2b: IF (Stack[-1] == 0) GOTO 0x2f; Pop(1)

0x2c: Stack[0 + Tasks[-1].StackPointer] = Stack[-5]
0x2d: Stack[1 + Tasks[-1].StackPointer] = Stack[-3]
0x2e: Return(); Pop(10)

0x2f: Push((float)0.5)
0x30: @ rand(Stack[-2], Stack[-1])
0x31: Pop(1)
0x32: Push((float)0.5)
0x33: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x34: Pop(0); Push(Stack[-1] * Stack[-2]);
0x35: Push((float)100.0)
0x36: Pop(2); Push(Stack[-2] / Stack[-1]);
0x37: Stack[2 + Tasks[-1].StackPointer] = Stack[2 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x38: Stack[1 + Tasks[-1].StackPointer] = Stack[-3]
0x39: Stack[0 + Tasks[-1].StackPointer] = Stack[-5]
0x3a: Push((float)50.0)
0x3b: Pop(1); Push((bool) Stack[2 + Tasks[-1].StackPointer] > Stack[-1])
0x3c: IF (Stack[-1] == 0) GOTO 0x45; Pop(1)

0x3d: PushEmpty(int)
0x3e: PushEmpty(int)
0x3f: Call2 0x17c

0x40: Stack[-2] = Stack[-1]
0x41: Pop(1)
0x42: Call2 0x4f

0x43: Pop(1)
0x44: Stack[2 + Tasks[-1].StackPointer] = (int)0
0x45: Push("walk_distance")
0x46: Push((int) 1000)
0x47: Pop(1); Push(Stack[-1] * Stack[2 + StackPtr]);
0x48: Push((float)50.0)
0x49: Pop(2); Push(Stack[-2] / Stack[-1]);
0x4a: @ SetProperty(Stack[-2], Stack[-1])
0x4b: Pop(2)
0x4c: Return(); Pop(10)

0x4d: Stack[-4] = 0
0x4e: Stack[-5] = 0
0x4f: PushEmpty()
0x50: Push((int) 6)
0x51: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x52: IF (Stack[-1] == 0) GOTO 0x57; Pop(1)

0x53: PushEmpty()
0x54: Call2 0x88

0x55: Pop(0)
0x56: GOTO 0x87

0x57: PushEmpty(bool)
0x58: Stack[-1] = (bool) 0
0x59: Push((int) 1)
0x5a: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x5b: IF (Stack[-1] == 0) GOTO 0x60; Pop(1)

0x5c: Push((int) 5)
0x5d: Pop(1); Push((bool) Stack[-3] <= Stack[-1])
0x5e: IF (Stack[-1] == 0) GOTO 0x60; Pop(1)

0x5f: Stack[-1] = (bool) 1
0x60: IF (Stack[-1] == 0) GOTO 0x65; Pop(1)

0x61: PushEmpty()
0x62: Call2 0xb2

0x63: Pop(0)
0x64: GOTO 0x87

0x65: PushEmpty(bool)
0x66: Stack[-1] = (bool) 1
0x67: Push((int) 0)
0x68: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x69: IF (Stack[-1] == 0) GOTO 0x75; Pop(1)

0x6a: PushEmpty(bool)
0x6b: Stack[-1] = (bool) 0
0x6c: Push((int) 7)
0x6d: Pop(1); Push((bool) Stack[-4] >= Stack[-1])
0x6e: IF (Stack[-1] == 0) GOTO 0x73; Pop(1)

0x6f: Push((int) 13)
0x70: Pop(1); Push((bool) Stack[-4] <= Stack[-1])
0x71: IF (Stack[-1] == 0) GOTO 0x73; Pop(1)

0x72: Stack[-1] = (bool) 1
0x73: IF (Stack[-1] == 0) GOTO 0x75; Pop(1)

0x74: Stack[-1] = (bool) 0
0x75: IF (Stack[-1] == 0) GOTO 0x7a; Pop(1)

0x76: PushEmpty()
0x77: Call2 0xf0

0x78: Pop(0)
0x79: GOTO 0x87

0x7a: PushEmpty(bool)
0x7b: Stack[-1] = (bool) 1
0x7c: Push((int) 14)
0x7d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7e: IF (Stack[-1] == 0) GOTO 0x83; Pop(1)

0x7f: Push((int) 15)
0x80: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x81: IF (Stack[-1] == 0) GOTO 0x83; Pop(1)

0x82: Stack[-1] = (bool) 0
0x83: IF (Stack[-1] == 0) GOTO 0x87; Pop(1)

0x84: PushEmpty()
0x85: Call2 0x139

0x86: Pop(0)
0x87: Return(); Pop(0)

0x88: PushEmpty(int, int)
0x89: PushEmpty(bool, float)
0x8a: Stack[-1] = (float) 0.14
0x8b: Call2 0x199

0x8c: Pop(1)
0x8d: IF (Stack[-1] == 0) GOTO 0xb1; Pop(1)

0x8e: Push((int) 3)
0x8f: @ irand(Stack[-2], Stack[-1])
0x90: Pop(1)
0x91: Push((int) 0)
0x92: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x93: IF (Stack[-1] == 0) GOTO 0x9c; Pop(1)

0x94: PushEmpty(string, int, int, int)
0x95: Stack[-4] = "flower"
0x96: Stack[-3] = (int) 1
0x97: Stack[-2] = (int) 5
0x98: Stack[-1] = (int) 1
0x99: Call2 0x1d3

0x9a: Pop(4)
0x9b: GOTO 0xb1

0x9c: Push((int) 1)
0x9d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x9e: IF (Stack[-1] == 0) GOTO 0xa7; Pop(1)

0x9f: PushEmpty(string, int, int, int)
0xa0: Stack[-4] = "peanut"
0xa1: Stack[-3] = (int) 1
0xa2: Stack[-2] = (int) 5
0xa3: Stack[-1] = (int) 1
0xa4: Call2 0x1d3

0xa5: Pop(4)
0xa6: GOTO 0xb1

0xa7: Push((int) 2)
0xa8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa9: IF (Stack[-1] == 0) GOTO 0xb1; Pop(1)

0xaa: PushEmpty(string, int, int, int)
0xab: Stack[-4] = "hook"
0xac: Stack[-3] = (int) 1
0xad: Stack[-2] = (int) 5
0xae: Stack[-1] = (int) 1
0xaf: Call2 0x1d3

0xb0: Pop(4)
0xb1: Return(); Pop(2)

0xb2: PushEmpty(int, int, int, int, int, int)
0xb3: PushEmpty(bool, float)
0xb4: Stack[-1] = (float) 0.14
0xb5: Call2 0x199

0xb6: Pop(1)
0xb7: IF (Stack[-1] == 0) GOTO 0xd1; Pop(1)

0xb8: Push((int) 2)
0xb9: @ irand(Stack[-4], Stack[-1])
0xba: Pop(1)
0xbb: Push((int) 0)
0xbc: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xbd: IF (Stack[-1] == 0) GOTO 0xc6; Pop(1)

0xbe: PushEmpty(string, int, int, int)
0xbf: Stack[-4] = "beads"
0xc0: Stack[-3] = (int) 1
0xc1: Stack[-2] = (int) 9
0xc2: Stack[-1] = (int) 1
0xc3: Call2 0x1d3

0xc4: Pop(4)
0xc5: GOTO 0xd0

0xc6: Push((int) 1)
0xc7: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xc8: IF (Stack[-1] == 0) GOTO 0xd0; Pop(1)

0xc9: PushEmpty(string, int, int, int)
0xca: Stack[-4] = "bracelet"
0xcb: Stack[-3] = (int) 1
0xcc: Stack[-2] = (int) 5
0xcd: Stack[-1] = (int) 1
0xce: Call2 0x1d3

0xcf: Pop(4)
0xd0: GOTO 0xef

0xd1: PushEmpty(bool, float)
0xd2: Stack[-1] = (float) 0.1
0xd3: Call2 0x199

0xd4: Pop(1)
0xd5: IF (Stack[-1] == 0) GOTO 0xe3; Pop(1)

0xd6: Push((int) 10)
0xd7: @ irand(Stack[-3], Stack[-1])
0xd8: Pop(1)
0xd9: PushEmpty(object, int)
0xda: PushEmpty(object)
0xdb: Call2 0x18e

0xdc: Stack[-3] = Stack[-1]
0xdd: Pop(1)
0xde: Push((int) 1)
0xdf: Stack[-2] = Stack[-5] + Stack[-1]; Pop(1);
0xe0: Call2 0x1af

0xe1: Pop(2)
0xe2: GOTO 0xef

0xe3: Push((int) 3)
0xe4: @ irand(Stack[-2], Stack[-1])
0xe5: Pop(1)
0xe6: PushEmpty(object, int)
0xe7: PushEmpty(object)
0xe8: Call2 0x18e

0xe9: Stack[-3] = Stack[-1]
0xea: Pop(1)
0xeb: Push((int) 1)
0xec: Stack[-2] = Stack[-4] + Stack[-1]; Pop(1);
0xed: Call2 0x1af

0xee: Pop(2)
0xef: Return(); Pop(6)

0xf0: PushEmpty(int, int, int, int, int, int)
0xf1: PushEmpty(bool, float)
0xf2: Stack[-1] = (float) 0.14
0xf3: Call2 0x199

0xf4: Pop(1)
0xf5: IF (Stack[-1] == 0) GOTO 0x11a; Pop(1)

0xf6: Push((int) 3)
0xf7: @ irand(Stack[-4], Stack[-1])
0xf8: Pop(1)
0xf9: Push((int) 0)
0xfa: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xfb: IF (Stack[-1] == 0) GOTO 0x104; Pop(1)

0xfc: PushEmpty(string, int, int, int)
0xfd: Stack[-4] = "silver_ring"
0xfe: Stack[-3] = (int) 1
0xff: Stack[-2] = (int) 5
0x100: Stack[-1] = (int) 1
0x101: Call2 0x1d3

0x102: Pop(4)
0x103: GOTO 0x119

0x104: Push((int) 1)
0x105: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x106: IF (Stack[-1] == 0) GOTO 0x10f; Pop(1)

0x107: PushEmpty(string, int, int, int)
0x108: Stack[-4] = "gold_ring"
0x109: Stack[-3] = (int) 1
0x10a: Stack[-2] = (int) 10
0x10b: Stack[-1] = (int) 1
0x10c: Call2 0x1d3

0x10d: Pop(4)
0x10e: GOTO 0x119

0x10f: Push((int) 2)
0x110: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x111: IF (Stack[-1] == 0) GOTO 0x119; Pop(1)

0x112: PushEmpty(string, int, int, int)
0x113: Stack[-4] = "funduk"
0x114: Stack[-3] = (int) 1
0x115: Stack[-2] = (int) 5
0x116: Stack[-1] = (int) 1
0x117: Call2 0x1d3

0x118: Pop(4)
0x119: GOTO 0x138

0x11a: PushEmpty(bool, float)
0x11b: Stack[-1] = (float) 0.1
0x11c: Call2 0x199

0x11d: Pop(1)
0x11e: IF (Stack[-1] == 0) GOTO 0x12c; Pop(1)

0x11f: Push((int) 10)
0x120: @ irand(Stack[-3], Stack[-1])
0x121: Pop(1)
0x122: PushEmpty(object, int)
0x123: PushEmpty(object)
0x124: Call2 0x18e

0x125: Stack[-3] = Stack[-1]
0x126: Pop(1)
0x127: Push((int) 1)
0x128: Stack[-2] = Stack[-5] + Stack[-1]; Pop(1);
0x129: Call2 0x1af

0x12a: Pop(2)
0x12b: GOTO 0x138

0x12c: Push((int) 3)
0x12d: @ irand(Stack[-2], Stack[-1])
0x12e: Pop(1)
0x12f: PushEmpty(object, int)
0x130: PushEmpty(object)
0x131: Call2 0x18e

0x132: Stack[-3] = Stack[-1]
0x133: Pop(1)
0x134: Push((int) 1)
0x135: Stack[-2] = Stack[-4] + Stack[-1]; Pop(1);
0x136: Call2 0x1af

0x137: Pop(2)
0x138: Return(); Pop(6)

0x139: PushEmpty(int, int, int, int, int, int)
0x13a: PushEmpty(bool, float)
0x13b: Stack[-1] = (float) 0.14
0x13c: Call2 0x199

0x13d: Pop(1)
0x13e: IF (Stack[-1] == 0) GOTO 0x158; Pop(1)

0x13f: Push((int) 2)
0x140: @ irand(Stack[-4], Stack[-1])
0x141: Pop(1)
0x142: Push((int) 0)
0x143: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x144: IF (Stack[-1] == 0) GOTO 0x14d; Pop(1)

0x145: PushEmpty(string, int, int, int)
0x146: Stack[-4] = "needle"
0x147: Stack[-3] = (int) 1
0x148: Stack[-2] = (int) 6
0x149: Stack[-1] = (int) 1
0x14a: Call2 0x1d3

0x14b: Pop(4)
0x14c: GOTO 0x157

0x14d: Push((int) 1)
0x14e: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x14f: IF (Stack[-1] == 0) GOTO 0x157; Pop(1)

0x150: PushEmpty(string, int, int, int)
0x151: Stack[-4] = "razor"
0x152: Stack[-3] = (int) 1
0x153: Stack[-2] = (int) 7
0x154: Stack[-1] = (int) 1
0x155: Call2 0x1d3

0x156: Pop(4)
0x157: GOTO 0x176

0x158: PushEmpty(bool, float)
0x159: Stack[-1] = (float) 0.1
0x15a: Call2 0x199

0x15b: Pop(1)
0x15c: IF (Stack[-1] == 0) GOTO 0x16a; Pop(1)

0x15d: Push((int) 10)
0x15e: @ irand(Stack[-3], Stack[-1])
0x15f: Pop(1)
0x160: PushEmpty(object, int)
0x161: PushEmpty(object)
0x162: Call2 0x18e

0x163: Stack[-3] = Stack[-1]
0x164: Pop(1)
0x165: Push((int) 1)
0x166: Stack[-2] = Stack[-5] + Stack[-1]; Pop(1);
0x167: Call2 0x1af

0x168: Pop(2)
0x169: GOTO 0x176

0x16a: Push((int) 3)
0x16b: @ irand(Stack[-2], Stack[-1])
0x16c: Pop(1)
0x16d: PushEmpty(object, int)
0x16e: PushEmpty(object)
0x16f: Call2 0x18e

0x170: Stack[-3] = Stack[-1]
0x171: Pop(1)
0x172: Push((int) 1)
0x173: Stack[-2] = Stack[-4] + Stack[-1]; Pop(1);
0x174: Call2 0x1af

0x175: Pop(2)
0x176: Return(); Pop(6)

0x177: PushEmpty(cvector, cvector)
0x178: @ GetPosition(Stack[-1])
0x179: Pop(0)
0x17a: Stack[-3] = Stack[-1]
0x17b: Return(); Pop(2)

0x17c: PushEmpty(object, int, object, int)
0x17d: @ GetScene(Stack[-2])
0x17e: Pop(0)
0x17f: PushEmpty(cvector)
0x180: Call2 0x177

0x181: Pop(0)
0x182: @@ GetRegionByPt(Stack[-2], Stack[-1])
0x183: Pop(1)
0x184: Stack[-5] = Stack[-1]
0x185: Return(); Pop(4)

0x186: Stack[-2] = 0
0x187: PushEmpty(int, int)
0x188: @@ GetProperty(Stack[-4], Stack[-1])
0x189: Pop(0)
0x18a: Pop(0); Push(Stack[-1] + Stack[-3]);
0x18b: @@ SetProperty(Stack[-5], Stack[-1])
0x18c: Pop(1)
0x18d: Return(); Pop(2)

0x18e: PushEmpty(object, object)
0x18f: @ self(Stack[-1])
0x190: Pop(0)
0x191: Stack[-3] = Stack[-1]
0x192: Return(); Pop(2)

0x193: Stack[-1] = 0
0x194: PushEmpty(cvector, cvector)
0x195: Stack[-1] = Stack[-3] - Stack[-4]; Pop(0);
0x196: Pop(0); Push(Stack[-1] | Stack[-1]);
0x197: Stack[-6] = Sqrt(Stack[-1]); Pop(1);
0x198: Return(); Pop(2)

0x199: PushEmpty(float, float)
0x19a: @ rand(Stack[-1])
0x19b: Pop(0)
0x19c: Stack[-4] = Stack[-1] < Stack[-3]; Pop(0);
0x19d: Return(); Pop(2)

0x19e: PushEmpty(int, int)
0x19f: @ irand(Stack[-1], Stack[-3])
0x1a0: Pop(0)
0x1a1: Stack[-5] = Stack[-1] < Stack[-4]; Pop(0);
0x1a2: Return(); Pop(2)

0x1a3: PushEmpty(object, object)
0x1a4: @ CreateIntVector(Stack[-1])
0x1a5: Pop(0)
0x1a6: @@ add(Stack[-4])
0x1a7: Pop(0)
0x1a8: @@ add(Stack[-3])
0x1a9: Pop(0)
0x1aa: Push((int) 3)
0x1ab: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x1ac: Pop(1)
0x1ad: Return(); Pop(2)

0x1ae: Stack[-1] = 0
0x1af: PushEmpty(int, int)
0x1b0: PushEmpty(object, string, int)
0x1b1: Stack[-3] = Stack[-7]
0x1b2: Stack[-2] = "money"
0x1b3: Stack[-1] = Stack[-6]
0x1b4: Call2 0x187

0x1b5: Pop(3)
0x1b6: Push((int) 0)
0x1b7: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x1b8: IF (Stack[-1] == 0) GOTO 0x1c1; Pop(1)

0x1b9: Push("Money")
0x1ba: @ GetInvItemByName(Stack[-2], Stack[-1])
0x1bb: Pop(1)
0x1bc: PushEmpty(int, int)
0x1bd: Stack[-2] = Stack[-3]
0x1be: Stack[-1] = Stack[-5]
0x1bf: Call2 0x1a3

0x1c0: Pop(2)
0x1c1: Return(); Pop(2)

0x1c2: PushEmpty(int, int, bool, int, int, bool)
0x1c3: @@ GetItemID(Stack[-3])
0x1c4: Pop(0)
0x1c5: Push("Category")
0x1c6: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0x1c7: Pop(1)
0x1c8: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7])
0x1c9: Pop(0)
0x1ca: Push(Stack[-1])
0x1cb: IF (Stack[-1] == 0) GOTO 0x1d1; Pop(1)

0x1cc: PushEmpty(int, int)
0x1cd: Stack[-2] = Stack[-5]
0x1ce: Stack[-1] = Stack[-9]
0x1cf: Call2 0x1a3

0x1d0: Pop(2)
0x1d1: Stack[-10] = Stack[-1]
0x1d2: Return(); Pop(6)

0x1d3: PushEmpty(int, object, int, object)
0x1d4: PushEmpty(bool, int, int)
0x1d5: Stack[-2] = Stack[-10]
0x1d6: Stack[-1] = Stack[-9]
0x1d7: Call2 0x19e

0x1d8: Pop(2)
0x1d9: IF (Stack[-1] == 0) GOTO 0x1eb; Pop(1)

0x1da: @ irand(Stack[-2], Stack[-5])
0x1db: Pop(0)
0x1dc: @ CreateInvItem(Stack[-1])
0x1dd: Pop(0)
0x1de: @@ SetItemName(Stack[-8])
0x1df: Pop(0)
0x1e0: PushEmpty(bool, object, object, int)
0x1e1: PushEmpty(object)
0x1e2: Call2 0x18e

0x1e3: Stack[-4] = Stack[-1]
0x1e4: Pop(1)
0x1e5: Stack[-2] = Stack[-5]
0x1e6: Push((int) 1)
0x1e7: Stack[-2] = Stack[-7] + Stack[-1]; Pop(1);
0x1e8: Call2 0x1c2

0x1e9: Pop(4)
0x1ea: Stack[-1] = 0
0x1eb: Return(); Pop(4)

