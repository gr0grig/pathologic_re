GlobalVarCount = 0

Strings:

Import:
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

RunOp = 0xb
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object, object) Params = 0
		EVENT_5 Op = 0x114 Vars = ()
		EVENT_6 Op = 0x154 Vars = ()


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

0xb: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == 0)
0xc: IF (Stack[-1] == 0) GOTO 0x11; Pop(1)

0xd: PushEmpty(object)
0xe: Call 0x198

0xf: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x10: Pop(1)
0x11: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x12: IF (Stack[-1] == 0) GOTO 0x15; Pop(1)

0x13: @ CreateIntVector(Stack[-0])
0x14: Pop(0)
0x15: PushEmpty()
0x16: Call 0x20

0x17: Pop(0)
0x18: PushEmpty(object)
0x19: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1a: Call 0x0

0x1b: Pop(1)
0x1c: @ Hold()
0x1d: Pop(0)
0x1e: GOTO 0x1c

0x1f: Return(); Pop(0)

0x20: PushEmpty(bool, bool)
0x21: Push("nailed")
0x22: @ GetProperty(Stack[-1], Stack[-2])
0x23: Pop(1)
0x24: PushEmpty(bool)
0x25: Stack[-1] = Stack[-2]
0x26: Call 0x35

0x27: Pop(1)
0x28: PushEmpty(bool)
0x29: Stack[-1] = Stack[-2]
0x2a: Call 0x48

0x2b: Pop(1)
0x2c: PushEmpty(bool)
0x2d: Stack[-1] = Stack[-2]
0x2e: Call 0x5b

0x2f: Pop(1)
0x30: PushEmpty(bool)
0x31: Stack[-1] = Stack[-2]
0x32: Call 0x6e

0x33: Pop(1)
0x34: Return(); Pop(2)

0x35: PushEmpty(int, bool, cvector, cvector, int, bool, cvector, cvector)
0x36: Stack[-4] = (int) 1
0x37: Push("pt_item_food")
0x38: Pop(1); Push(Stack[-1] + Stack[-5]);
0x39: @ GetLocator(Stack[-1], Stack[-4], Stack[-3], Stack[-2])
0x3a: Pop(1)
0x3b: Pop(0); Push((bool) Stack[-3] == 0)
0x3c: IF (Stack[-1] == 0) GOTO 0x3e; Pop(1)

0x3d: GOTO 0x47

0x3e: PushEmpty(cvector, cvector, bool)
0x3f: Stack[-3] = Stack[-5]
0x40: Stack[-2] = Stack[-4]
0x41: Stack[-1] = Stack[-12]
0x42: Call 0x81

0x43: Pop(3)
0x44: Push((int) 1)
0x45: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x46: GOTO 0x37

0x47: Return(); Pop(8)

0x48: PushEmpty(int, bool, cvector, cvector, int, bool, cvector, cvector)
0x49: Stack[-4] = (int) 1
0x4a: Push("pt_item_pfood")
0x4b: Pop(1); Push(Stack[-1] + Stack[-5]);
0x4c: @ GetLocator(Stack[-1], Stack[-4], Stack[-3], Stack[-2])
0x4d: Pop(1)
0x4e: Pop(0); Push((bool) Stack[-3] == 0)
0x4f: IF (Stack[-1] == 0) GOTO 0x51; Pop(1)

0x50: GOTO 0x5a

0x51: PushEmpty(cvector, cvector, bool)
0x52: Stack[-3] = Stack[-5]
0x53: Stack[-2] = Stack[-4]
0x54: Stack[-1] = Stack[-12]
0x55: Call 0xa3

0x56: Pop(3)
0x57: Push((int) 1)
0x58: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x59: GOTO 0x4a

0x5a: Return(); Pop(8)

0x5b: PushEmpty(int, bool, cvector, cvector, int, bool, cvector, cvector)
0x5c: Stack[-4] = (int) 1
0x5d: Push("pt_item_knife")
0x5e: Pop(1); Push(Stack[-1] + Stack[-5]);
0x5f: @ GetLocator(Stack[-1], Stack[-4], Stack[-3], Stack[-2])
0x60: Pop(1)
0x61: Pop(0); Push((bool) Stack[-3] == 0)
0x62: IF (Stack[-1] == 0) GOTO 0x64; Pop(1)

0x63: GOTO 0x6d

0x64: PushEmpty(cvector, cvector, bool)
0x65: Stack[-3] = Stack[-5]
0x66: Stack[-2] = Stack[-4]
0x67: Stack[-1] = Stack[-12]
0x68: Call 0xdd

0x69: Pop(3)
0x6a: Push((int) 1)
0x6b: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x6c: GOTO 0x5d

0x6d: Return(); Pop(8)

0x6e: PushEmpty(int, bool, cvector, cvector, int, bool, cvector, cvector)
0x6f: Stack[-4] = (int) 1
0x70: Push("pt_item_bottle")
0x71: Pop(1); Push(Stack[-1] + Stack[-5]);
0x72: @ GetLocator(Stack[-1], Stack[-4], Stack[-3], Stack[-2])
0x73: Pop(1)
0x74: Pop(0); Push((bool) Stack[-3] == 0)
0x75: IF (Stack[-1] == 0) GOTO 0x77; Pop(1)

0x76: GOTO 0x80

0x77: PushEmpty(cvector, cvector, bool)
0x78: Stack[-3] = Stack[-5]
0x79: Stack[-2] = Stack[-4]
0x7a: Stack[-1] = Stack[-12]
0x7b: Call 0xf0

0x7c: Pop(3)
0x7d: Push((int) 1)
0x7e: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x7f: GOTO 0x70

0x80: Return(); Pop(8)

0x81: PushEmpty(string, object, string, object)
0x82: PushEmpty(bool, float)
0x83: Push(Stack[-7])
0x84: IF (Stack[-1] == 0) GOTO 0x87; Pop(1)

0x85: Stack[-1] = (float) 0.1
0x86: GOTO 0x88

0x87: Stack[-1] = (float) 0.2
0x88: Call 0x193

0x89: Pop(1)
0x8a: IF (Stack[-1] == 0) GOTO 0xa2; Pop(1)

0x8b: Push((int) 5)
0x8c: Push((int) 5)
0x8d: Push((int) 3)
0x8e: Push((int) 2)
0x8f: Push((int) 3)
0x90: Push("bread")
0x91: Push("bottle_water")
0x92: Push("milk")
0x93: Push("vegetables")
0x94: Push("lemon")
0x95: @ RandOneOf(Stack[-12], Stack[-10], Stack[-9], Stack[-8], Stack[-7], Stack[-6], Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x96: Pop(10)
0x97: Push("scripted_container")
0x98: PushEmpty(object)
0x99: Call 0x18d

0x9a: Pop(0)
0x9b: Push("item_")
0x9c: Pop(1); Push(Stack[-1] + Stack[-5]);
0x9d: Push("_steal.xml")
0x9e: Pop(2); Push(Stack[-2] + Stack[-1]);
0x9f: @ AddActorByType(Stack[-4], Stack[-3], Stack[-2], Stack[-10], Stack[-9], Stack[-1])
0xa0: Pop(3)
0xa1: Stack[-1] = 0
0xa2: Return(); Pop(4)

0xa3: PushEmpty(string, object, float, float, cvector, string, object, float, float, cvector)
0xa4: PushEmpty(bool, float)
0xa5: Push(Stack[-13])
0xa6: IF (Stack[-1] == 0) GOTO 0xa9; Pop(1)

0xa7: Stack[-1] = (float) 0.1
0xa8: GOTO 0xaa

0xa9: Stack[-1] = (float) 0.2
0xaa: Call 0x193

0xab: Pop(1)
0xac: IF (Stack[-1] == 0) GOTO 0xdc; Pop(1)

0xad: Push((int) 8)
0xae: Push((int) 3)
0xaf: Push((int) 3)
0xb0: Push((int) 3)
0xb1: Push((int) 2)
0xb2: Push((int) 2)
0xb3: Push((int) 1)
0xb4: Push("rusk")
0xb5: Push("dried_fish")
0xb6: Push("dried_meat")
0xb7: Push("smoked_meat")
0xb8: Push("fresh_fish")
0xb9: Push("fresh_meat")
0xba: Push("tvirin")
0xbb: @ RandOneOf(Stack[-19], Stack[-14], Stack[-13], Stack[-12], Stack[-11], Stack[-10], Stack[-9], Stack[-8], Stack[-7], Stack[-6], Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xbc: Pop(14)
0xbd: @ RandVec2D(Stack[-3], Stack[-2])
0xbe: Pop(0)
0xbf: Push(CvectorIndex(Stack[-1], 0))
0xc0: Stack[-1] = Stack[-4]
0xc1: CvectorIndex(Stack[-2], 0) = Stack[-1];
0xc2: Push(CvectorIndex(Stack[-1], 1))
0xc3: Stack[-1] = (int) 0
0xc4: CvectorIndex(Stack[-2], 1) = Stack[-1];
0xc5: Push(CvectorIndex(Stack[-1], 2))
0xc6: Stack[-1] = Stack[-3]
0xc7: CvectorIndex(Stack[-2], 2) = Stack[-1];
0xc8: Push("scripted_container")
0xc9: PushEmpty(object)
0xca: Call 0x18d

0xcb: Pop(0)
0xcc: Push("item_plate.xml")
0xcd: @ AddActorByType(Stack[-7], Stack[-3], Stack[-2], Stack[-16], Stack[-4], Stack[-1])
0xce: Pop(3)
0xcf: Push("scripted_container")
0xd0: PushEmpty(object)
0xd1: Call 0x18d

0xd2: Pop(0)
0xd3: Push(CVector(0.0, 5.0, 0.0))
0xd4: Pop(1); Push(Stack[-16] + Stack[-1]);
0xd5: Push("item_")
0xd6: Pop(1); Push(Stack[-1] + Stack[-9]);
0xd7: Push("_steal.xml")
0xd8: Pop(2); Push(Stack[-2] + Stack[-1]);
0xd9: @ AddActorByType(Stack[-8], Stack[-4], Stack[-3], Stack[-2], Stack[-16], Stack[-1])
0xda: Pop(4)
0xdb: Stack[-4] = 0
0xdc: Return(); Pop(10)

0xdd: PushEmpty(object, object)
0xde: PushEmpty(bool, float)
0xdf: Push(Stack[-5])
0xe0: IF (Stack[-1] == 0) GOTO 0xe3; Pop(1)

0xe1: Stack[-1] = (float) 0.1
0xe2: GOTO 0xe4

0xe3: Stack[-1] = (float) 0.1
0xe4: Call 0x193

0xe5: Pop(1)
0xe6: IF (Stack[-1] == 0) GOTO 0xef; Pop(1)

0xe7: Push("scripted_container")
0xe8: PushEmpty(object)
0xe9: Call 0x18d

0xea: Pop(0)
0xeb: Push("item_knife_steal.xml")
0xec: @ AddActorByType(Stack[-4], Stack[-3], Stack[-2], Stack[-8], Stack[-7], Stack[-1])
0xed: Pop(3)
0xee: Stack[-1] = 0
0xef: Return(); Pop(2)

0xf0: PushEmpty(string, object, string, object)
0xf1: PushEmpty(bool, float)
0xf2: Push(Stack[-7])
0xf3: IF (Stack[-1] == 0) GOTO 0xf6; Pop(1)

0xf4: Stack[-1] = (float) 0.2
0xf5: GOTO 0xf7

0xf6: Stack[-1] = (float) 0.4
0xf7: Call 0x193

0xf8: Pop(1)
0xf9: IF (Stack[-1] == 0) GOTO 0x113; Pop(1)

0xfa: Push((int) 10)
0xfb: Push((int) 15)
0xfc: Push((int) 3)
0xfd: Push((int) 3)
0xfe: Push((int) 3)
0xff: Push((int) 1)
0x100: Push("bottle_water")
0x101: Push("bottle_empty")
0x102: Push("vegetables")
0x103: Push("milk")
0x104: Push("egg")
0x105: Push("tvirin")
0x106: @ RandOneOf(Stack[-14], Stack[-12], Stack[-11], Stack[-10], Stack[-9], Stack[-8], Stack[-7], Stack[-6], Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x107: Pop(12)
0x108: Push("scripted_container")
0x109: PushEmpty(object)
0x10a: Call 0x18d

0x10b: Pop(0)
0x10c: Push("item_")
0x10d: Pop(1); Push(Stack[-1] + Stack[-5]);
0x10e: Push("_steal.xml")
0x10f: Pop(2); Push(Stack[-2] + Stack[-1]);
0x110: @ AddActorByType(Stack[-4], Stack[-3], Stack[-2], Stack[-10], Stack[-9], Stack[-1])
0x111: Pop(3)
0x112: Stack[-1] = 0
0x113: Return(); Pop(4)

0x114: PushEmpty(int, int, int, int, int, string, string, string, int, int, int, int, int, string, string, string)
0x115: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == 0)
0x116: IF (Stack[-1] == 0) GOTO 0x11b; Pop(1)

0x117: PushEmpty(object)
0x118: Call 0x198

0x119: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x11a: Pop(1)
0x11b: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x11c: IF (Stack[-1] == 0) GOTO 0x11f; Pop(1)

0x11d: @ CreateIntVector(Stack[-0])
0x11e: Pop(0)
0x11f: PushEmpty(object)
0x120: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x121: Call 0x1b0

0x122: Pop(1)
0x123: @@ size(Stack[-8])
0x124: Pop(0)
0x125: Stack[-7] = (int) 0
0x126: Pop(0); Push((bool) Stack[-7] < Stack[-8])
0x127: IF (Stack[-1] == 0) GOTO 0x153; Pop(1)

0x128: @@ get(Stack[-6], Stack[-7])
0x129: Pop(0)
0x12a: Push((int) 1)
0x12b: Pop(1); Push(Stack[-8] + Stack[-1]);
0x12c: @@ get(Stack[-6], Stack[-1])
0x12d: Pop(1)
0x12e: Push((int) 2)
0x12f: Pop(1); Push(Stack[-8] + Stack[-1]);
0x130: @@ get(Stack[-5], Stack[-1])
0x131: Pop(1)
0x132: PushEmpty(string, int, int)
0x133: Stack[-2] = Stack[-9]
0x134: Stack[-1] = Stack[-8]
0x135: Call 0x2

0x136: Stack[-6] = Stack[-3]
0x137: Pop(3)
0x138: PushEmpty(string, int, int)
0x139: Stack[-2] = Stack[-9]
0x13a: Stack[-1] = Stack[-7]
0x13b: Call 0x5

0x13c: Stack[-5] = Stack[-3]
0x13d: Pop(3)
0x13e: PushEmpty(string, int, int)
0x13f: Stack[-2] = Stack[-9]
0x140: Stack[-1] = Stack[-7]
0x141: Call 0x8

0x142: Stack[-4] = Stack[-3]
0x143: Pop(3)
0x144: PushEmpty(object, object, string, string, string)
0x145: PushEmpty(object)
0x146: Call 0x18d

0x147: Stack[-5] = Stack[-1]
0x148: Pop(1)
0x149: Stack[-3] = Stack[-8]
0x14a: Stack[-2] = Stack[-7]
0x14b: Stack[-1] = Stack[-6]
0x14c: Call 0x19e

0x14d: Pop(4)
0x14e: @@ add(Stack[-1])
0x14f: Pop(1)
0x150: Push((int) 3)
0x151: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x152: GOTO 0x126

0x153: Return(); Pop(16)

0x154: PushEmpty(int, int, object, bool, int, int, object, bool)
0x155: @@ size(Stack[-4])
0x156: Pop(0)
0x157: Stack[-3] = (int) 0
0x158: Pop(0); Push((bool) Stack[-3] < Stack[-4])
0x159: IF (Stack[-1] == 0) GOTO 0x17c; Pop(1)

0x15a: @@ get(Stack[-2], Stack[-3])
0x15b: Pop(0)
0x15c: Pop(0); Push(( Stack[-2] != 0 )
0x15d: IF (Stack[-1] == 0) GOTO 0x16e; Pop(1)

0x15e: @@ IsDead(Stack[-1])
0x15f: Pop(0)
0x160: Pop(0); Push((bool) Stack[-1] == 0)
0x161: IF (Stack[-1] == 0) GOTO 0x16c; Pop(1)

0x162: PushEmpty(bool, object, string)
0x163: Stack[-2] = Stack[-5]
0x164: Stack[-1] = "ToDie"
0x165: Call 0x181

0x166: Pop(2)
0x167: Pop(1); Push((bool) Stack[-1] == 0)
0x168: IF (Stack[-1] == 0) GOTO 0x16c; Pop(1)

0x169: Push((int) 1)
0x16a: Stack[-4] = Stack[-4] + Stack[-1]; Pop(1);
0x16b: GOTO 0x17b

0x16c: @ RemoveActor(Stack[-2])
0x16d: Pop(0)
0x16e: @@ remove(Stack[-3])
0x16f: Pop(0)
0x170: Push((int) 3)
0x171: Pop(1); Push(Stack[-4] * Stack[-1]);
0x172: Push((int) 1)
0x173: Pop(1); Push(Stack[-5] + Stack[-1]);
0x174: Push((int) 3)
0x175: Pop(2); Push(Stack[-2] * Stack[-1]);
0x176: @@ remove(Stack[-2], Stack[-1])
0x177: Pop(2)
0x178: Push((int) -1)
0x179: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x17a: Stack[-2] = 0
0x17b: GOTO 0x158

0x17c: PushEmpty(object)
0x17d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x17e: Call 0x1b0

0x17f: Pop(1)
0x180: Return(); Pop(8)

0x181: PushEmpty(bool, bool)
0x182: Push("HasProperty")
0x183: Push((int) 2)
0x184: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x185: Pop(1); Push((bool) Stack[-1] == 0)
0x186: IF (Stack[-1] == 0) GOTO 0x189; Pop(1)

0x187: Stack[-5] = (bool) 0
0x188: Return(); Pop(2)

0x189: @@ HasProperty(Stack[-3], Stack[-1])
0x18a: Pop(0)
0x18b: Stack[-5] = Stack[-1]
0x18c: Return(); Pop(2)

0x18d: PushEmpty(object, object)
0x18e: @ self(Stack[-1])
0x18f: Pop(0)
0x190: Stack[-3] = Stack[-1]
0x191: Return(); Pop(2)

0x192: Stack[-1] = 0
0x193: PushEmpty(float, float)
0x194: @ rand(Stack[-1])
0x195: Pop(0)
0x196: Stack[-4] = Stack[-1] < Stack[-3]; Pop(0);
0x197: Return(); Pop(2)

0x198: PushEmpty(object, object)
0x199: @ CreateObjectVector(Stack[-1])
0x19a: Pop(0)
0x19b: Stack[-3] = Stack[-1]
0x19c: Return(); Pop(2)

0x19d: Stack[-1] = 0
0x19e: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x19f: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0x1a0: Pop(0)
0x1a1: Pop(0); Push((bool) Stack[-4] == 0)
0x1a2: IF (Stack[-1] == 0) GOTO 0x1ab; Pop(1)

0x1a3: Push("Locator ")
0x1a4: Pop(1); Push(Stack[-1] + Stack[-12]);
0x1a5: Push(" doesn't exist")
0x1a6: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1a7: @ Trace(Stack[-1])
0x1a8: Pop(1)
0x1a9: Stack[-1] = 0
0x1aa: GOTO 0x1ad

0x1ab: @ AddActor(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0x1ac: Pop(0)
0x1ad: Stack[-13] = Stack[-1]
0x1ae: Return(); Pop(8)

0x1af: Stack[-1] = 0
0x1b0: PushEmpty(int, int, object, int, int, object)
0x1b1: @@ size(Stack[-3])
0x1b2: Pop(0)
0x1b3: Stack[-2] = (int) 0
0x1b4: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0x1b5: IF (Stack[-1] == 0) GOTO 0x1c0; Pop(1)

0x1b6: @@ get(Stack[-1], Stack[-2])
0x1b7: Pop(0)
0x1b8: Push(Stack[-1])
0x1b9: IF (Stack[-1] == 0) GOTO 0x1bc; Pop(1)

0x1ba: @ RemoveActor(Stack[-1])
0x1bb: Pop(0)
0x1bc: Stack[-1] = 0
0x1bd: Push((int) 1)
0x1be: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x1bf: GOTO 0x1b4

0x1c0: @@ clear()
0x1c1: Pop(0)
0x1c2: Return(); Pop(6)

