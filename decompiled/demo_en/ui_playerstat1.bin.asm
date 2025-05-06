GlobalVarCount = 0

Strings:
	visir.xml
	charge
	add
	size
	get
	remove
	set
	mail
	diary
	rep_up
	rep_down
	clear
	daychange.xml
	daychangereal.xml
	DestroyWindow
	HasMail
	HasDiary
	ReputationUP
	ReputationDown
	vlevel
	slot
	default
	help
	cross
	player
	vcharge
	GetProperty
	IsVisirOn
	visir
	IsWeaponHolstered

Import:
	CreateWindow (3 args)
	SendMessage (2 args)
	CreateIntVector (1 args)
	CreateStringVector (1 args)
	CreateFloatVector (1 args)
	SetOwnerDraw (1 args)
	SetNeedUpdate (1 args)
	ProcessEvents (0 args)
	Blit (4 args)
	GetInvItemSprite (2 args)
	LoadImage (1 args)
	ReleaseImage (1 args)
	PlaySound (1 args)
	Trace (1 args)
	Print (8 args)
	GetStringByID (2 args)
	Blit (3 args)
	FindActor (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object, object, object, object, object, object, object, object, object, object, int, float) Params = 0
		EVENT_201 Op = 0x13c Vars = (int, object)
		EVENT_1 Op = 0x1c2 Vars = (float)
		EVENT_0 Op = 0x230 Vars = ()


0x0: Stack[10 + Tasks[-1].StackPointer] = (int)-1
0x1: PushEmpty(bool)
0x2: Call2 0x251

0x3: Pop(0)
0x4: IF (Stack[-1] == 0) GOTO 0x12; Pop(1)

0x5: Push("visir.xml")
0x6: Push((bool) 0)
0x7: @ CreateWindow(Stack[-2], Stack[-1], Stack[-0])
0x8: Pop(2)
0x9: PushEmpty(int)
0xa: Call2 0x243

0xb: Pop(0)
0xc: Push("charge")
0xd: @ SendMessage(Stack[-2], Stack[-1])
0xe: Pop(2)
0xf: PushEmpty()
0x10: Call2 0x1d7

0x11: Pop(0)
0x12: @ CreateIntVector(Stack[-5])
0x13: Pop(0)
0x14: @ CreateStringVector(Stack[-2])
0x15: Pop(0)
0x16: @ CreateIntVector(Stack[-3])
0x17: Pop(0)
0x18: @ CreateFloatVector(Stack[-4])
0x19: Pop(0)
0x1a: @ CreateIntVector(Stack[-6])
0x1b: Pop(0)
0x1c: @ CreateIntVector(Stack[-7])
0x1d: Pop(0)
0x1e: @ CreateFloatVector(Stack[-8])
0x1f: Pop(0)
0x20: Push((bool) 1)
0x21: @ SetOwnerDraw(Stack[-1])
0x22: Pop(1)
0x23: Push((bool) 1)
0x24: @ SetNeedUpdate(Stack[-1])
0x25: Pop(1)
0x26: @ ProcessEvents()
0x27: Pop(0)
0x28: Return(); Pop(0)

0x29: PushEmpty(int, int, int, int, int, int)
0x2a: @@ add(Stack[-7])
0x2b: Pop(0)
0x2c: @@ size(Stack[-3])
0x2d: Pop(0)
0x2e: Stack[-2] = (int) 0
0x2f: Push((int) 1)
0x30: Pop(1); Push(Stack[-4] - Stack[-1]);
0x31: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x32: IF (Stack[-1] == 0) GOTO 0x3d; Pop(1)

0x33: @@ get(Stack[-1], Stack[-2])
0x34: Pop(0)
0x35: Pop(0); Push((bool) Stack[-1] == Stack[-7])
0x36: IF (Stack[-1] == 0) GOTO 0x3a; Pop(1)

0x37: @@ remove(Stack[-2])
0x38: Pop(0)
0x39: Return(); Pop(6)

0x3a: Push((int) 1)
0x3b: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x3c: GOTO 0x2f

0x3d: Return(); Pop(6)

0x3e: Push((int) 0)
0x3f: @@ remove(Stack[-1])
0x40: Pop(1)
0x41: Return(); Pop(0)

0x42: PushEmpty(int, int, int, int, int, int)
0x43: @@ size(Stack[-3])
0x44: Pop(0)
0x45: Stack[-2] = (int) 0
0x46: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0x47: IF (Stack[-1] == 0) GOTO 0x53; Pop(1)

0x48: @@ get(Stack[-1], Stack[-2])
0x49: Pop(0)
0x4a: Pop(0); Push((bool) Stack[-7] == Stack[-1])
0x4b: IF (Stack[-1] == 0) GOTO 0x50; Pop(1)

0x4c: Push((float)4.0)
0x4d: @@ set(Stack[-3], Stack[-1])
0x4e: Pop(1)
0x4f: Return(); Pop(6)

0x50: Push((int) 1)
0x51: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x52: GOTO 0x46

0x53: @@ add(Stack[-7])
0x54: Pop(0)
0x55: Push((float)4.0)
0x56: @@ add(Stack[-1])
0x57: Pop(1)
0x58: Return(); Pop(6)

0x59: Push((int) 0)
0x5a: @@ remove(Stack[-1])
0x5b: Pop(1)
0x5c: Push((int) 0)
0x5d: @@ remove(Stack[-1])
0x5e: Pop(1)
0x5f: Return(); Pop(0)

0x60: PushEmpty(int, float, int, float)
0x61: @@ size(Stack[-2])
0x62: Pop(0)
0x63: Pop(0); Push((bool) Stack[-2] == 0)
0x64: IF (Stack[-1] == 0) GOTO 0x66; Pop(1)

0x65: Return(); Pop(4)

0x66: Push((int) 0)
0x67: @@ get(Stack[-2], Stack[-1])
0x68: Pop(1)
0x69: Stack[-1] = Stack[-1] - Stack[-5]; Pop(0);
0x6a: Push((int) 0)
0x6b: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x6c: IF (Stack[-1] == 0) GOTO 0x71; Pop(1)

0x6d: Push((int) 0)
0x6e: @@ set(Stack[-1], Stack[-2])
0x6f: Pop(1)
0x70: GOTO 0x74

0x71: PushEmpty()
0x72: Call2 0x59

0x73: Pop(0)
0x74: Return(); Pop(4)

0x75: PushEmpty(int, int, float, float, int, int, float, float)
0x76: @@ size(Stack[-4])
0x77: Pop(0)
0x78: Pop(0); Push((bool) Stack[-4] == 0)
0x79: IF (Stack[-1] == 0) GOTO 0x7b; Pop(1)

0x7a: Return(); Pop(8)

0x7b: Push((int) 0)
0x7c: @@ get(Stack[-4], Stack[-1])
0x7d: Pop(1)
0x7e: Push((int) 0)
0x7f: @@ get(Stack[-3], Stack[-1])
0x80: Pop(1)
0x81: Push((float)6.283)
0x82: Pop(1); Push(Stack[-1] * Stack[-3]);
0x83: Push((float)4.0)
0x84: Stack[-3] = Stack[-2] / Stack[-1]; Pop(2);
0x85: Push((int) 2)
0x86: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x87: IF (Stack[-1] == 0) GOTO 0x93; Pop(1)

0x88: Push("mail")
0x89: Push((int) 20)
0x8a: Push((int) 500)
0x8b: Push((float)0.5)
0x8c: Push((float)0.5)
0x8d: Pop(0); Push(Cos(Stack[-6]))
0x8e: Pop(2); Push(Stack[-2] * Stack[-1]);
0x8f: Pop(2); Push(Stack[-2] - Stack[-1]);
0x90: @ Blit(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x91: Pop(4)
0x92: GOTO 0xbc

0x93: Push((int) 3)
0x94: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x95: IF (Stack[-1] == 0) GOTO 0xa1; Pop(1)

0x96: Push("diary")
0x97: Push((int) 20)
0x98: Push((int) 470)
0x99: Push((float)0.5)
0x9a: Push((float)0.5)
0x9b: Pop(0); Push(Cos(Stack[-6]))
0x9c: Pop(2); Push(Stack[-2] * Stack[-1]);
0x9d: Pop(2); Push(Stack[-2] - Stack[-1]);
0x9e: @ Blit(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x9f: Pop(4)
0xa0: GOTO 0xbc

0xa1: Push((int) 4)
0xa2: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xa3: IF (Stack[-1] == 0) GOTO 0xaf; Pop(1)

0xa4: Push("rep_up")
0xa5: Push((int) 20)
0xa6: Push((int) 500)
0xa7: Push((float)0.5)
0xa8: Push((float)0.5)
0xa9: Pop(0); Push(Cos(Stack[-6]))
0xaa: Pop(2); Push(Stack[-2] * Stack[-1]);
0xab: Pop(2); Push(Stack[-2] - Stack[-1]);
0xac: @ Blit(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xad: Pop(4)
0xae: GOTO 0xbc

0xaf: Push((int) 5)
0xb0: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xb1: IF (Stack[-1] == 0) GOTO 0xbc; Pop(1)

0xb2: Push("rep_down")
0xb3: Push((int) 20)
0xb4: Push((int) 500)
0xb5: Push((float)0.5)
0xb6: Push((float)0.5)
0xb7: Pop(0); Push(Cos(Stack[-6]))
0xb8: Pop(2); Push(Stack[-2] * Stack[-1]);
0xb9: Pop(2); Push(Stack[-2] - Stack[-1]);
0xba: @ Blit(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xbb: Pop(4)
0xbc: Return(); Pop(8)

0xbd: PushEmpty(string, string)
0xbe: @@ add(Stack[-4])
0xbf: Pop(0)
0xc0: @@ add(Stack[-3])
0xc1: Pop(0)
0xc2: Push((float)4.0)
0xc3: @@ add(Stack[-1])
0xc4: Pop(1)
0xc5: @ GetInvItemSprite(Stack[-1], Stack[-4])
0xc6: Pop(0)
0xc7: @ LoadImage(Stack[-1])
0xc8: Pop(0)
0xc9: @@ add(Stack[-1])
0xca: Pop(0)
0xcb: Return(); Pop(2)

0xcc: PushEmpty()
0xcd: @@ remove(Stack[-1])
0xce: Pop(0)
0xcf: @@ remove(Stack[-1])
0xd0: Pop(0)
0xd1: @@ remove(Stack[-1])
0xd2: Pop(0)
0xd3: Return(); Pop(0)

0xd4: PushEmpty(int, int, float, int, int, string, int, int, float, int, int, string)
0xd5: @@ size(Stack[-6])
0xd6: Pop(0)
0xd7: Pop(0); Push((bool) Stack[-6] == 0)
0xd8: IF (Stack[-1] == 0) GOTO 0xda; Pop(1)

0xd9: Return(); Pop(12)

0xda: Stack[-5] = (int) 0
0xdb: Pop(0); Push((bool) Stack[-5] < Stack[-6])
0xdc: IF (Stack[-1] == 0) GOTO 0xf1; Pop(1)

0xdd: @@ get(Stack[-4], Stack[-5])
0xde: Pop(0)
0xdf: Stack[-4] = Stack[-4] - Stack[-13]; Pop(0);
0xe0: Push((int) 0)
0xe1: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0xe2: IF (Stack[-1] == 0) GOTO 0xe6; Pop(1)

0xe3: @@ set(Stack[-5], Stack[-4])
0xe4: Pop(0)
0xe5: GOTO 0xee

0xe6: PushEmpty(int)
0xe7: Stack[-1] = Stack[-6]
0xe8: Call2 0xcc

0xe9: Pop(1)
0xea: Push((int) -1)
0xeb: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0xec: Push((int) -1)
0xed: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0xee: Push((int) 1)
0xef: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0xf0: GOTO 0xdb

0xf1: Push((int) 0)
0xf2: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0xf3: IF (Stack[-1] == 0) GOTO 0x102; Pop(1)

0xf4: @@ size(Stack[-3])
0xf5: Pop(0)
0xf6: Stack[-2] = (int) 0
0xf7: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0xf8: IF (Stack[-1] == 0) GOTO 0x100; Pop(1)

0xf9: @@ get(Stack[-1], Stack[-2])
0xfa: Pop(0)
0xfb: @ ReleaseImage(Stack[-1])
0xfc: Pop(0)
0xfd: Push((int) 1)
0xfe: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0xff: GOTO 0xf7

0x100: @@ clear()
0x101: Pop(0)
0x102: Return(); Pop(12)

0x103: PushEmpty(int, int, int, int)
0x104: @@ size(Stack[-2])
0x105: Pop(0)
0x106: Pop(0); Push((bool) Stack[-2] == 0)
0x107: IF (Stack[-1] == 0) GOTO 0x109; Pop(1)

0x108: Return(); Pop(4)

0x109: Push( Stack[1 + Tasks[-1].StackPointer] )
0x10a: IF (Stack[-1] == 0) GOTO 0x10c; Pop(1)

0x10b: Return(); Pop(4)

0x10c: Push((int) 0)
0x10d: @@ get(Stack[-2], Stack[-1])
0x10e: Pop(1)
0x10f: Push((int) 100)
0x110: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x111: IF (Stack[-1] == 0) GOTO 0x117; Pop(1)

0x112: Push("daychange.xml")
0x113: Push((bool) 0)
0x114: @ CreateWindow(Stack[-2], Stack[-1], Stack[-1])
0x115: Pop(2)
0x116: GOTO 0x11b

0x117: Push("daychangereal.xml")
0x118: Push((bool) 0)
0x119: @ CreateWindow(Stack[-2], Stack[-1], Stack[-1])
0x11a: Pop(2)
0x11b: PushEmpty()
0x11c: Call2 0x3e

0x11d: Pop(0)
0x11e: Return(); Pop(4)

0x11f: PushEmpty(int, int, int, int, float, float, int, int, int, int, float, float)
0x120: @@ size(Stack[-6])
0x121: Pop(0)
0x122: Pop(0); Push((bool) Stack[-6] == 0)
0x123: IF (Stack[-1] == 0) GOTO 0x125; Pop(1)

0x124: Return(); Pop(12)

0x125: Stack[-5] = (int) 0
0x126: Pop(0); Push((bool) Stack[-5] < Stack[-6])
0x127: IF (Stack[-1] == 0) GOTO 0x13b; Pop(1)

0x128: @@ get(Stack[-4], Stack[-5])
0x129: Pop(0)
0x12a: @@ get(Stack[-3], Stack[-5])
0x12b: Pop(0)
0x12c: @@ get(Stack[-2], Stack[-5])
0x12d: Pop(0)
0x12e: Push((float)4.0)
0x12f: Pop(1); Push(Stack[-3] / Stack[-1]);
0x130: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x131: PushEmpty(int, int, int, float)
0x132: Stack[-4] = Stack[-8]
0x133: Stack[-3] = Stack[-7]
0x134: Stack[-2] = Stack[-9]
0x135: Stack[-1] = Stack[-5]
0x136: Call2 0x1ef

0x137: Pop(4)
0x138: Push((int) 1)
0x139: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x13a: GOTO 0x126

0x13b: Return(); Pop(12)

0x13c: PushEmpty(int, int, int, int, int, int, int, int, int, int)
0x13d: Push((int) 200)
0x13e: Pop(1); Push((bool) Stack[-13] == Stack[-1])
0x13f: IF (Stack[-1] == 0) GOTO 0x14c; Pop(1)

0x140: Push(Stack[-11])
0x141: IF (Stack[-1] == 0) GOTO 0x14b; Pop(1)

0x142: @@ size(Stack[-5])
0x143: Pop(0)
0x144: Push((int) 1)
0x145: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x146: IF (Stack[-1] == 0) GOTO 0x14b; Pop(1)

0x147: Push((int) 0)
0x148: @@ get(Stack[-10], Stack[-1])
0x149: Pop(1)
0x14a: Stack[11 + Tasks[-1].StackPointer] = (float)1.0
0x14b: GOTO 0x1c1

0x14c: Push((int) 1)
0x14d: Pop(1); Push((bool) Stack[-13] == Stack[-1])
0x14e: IF (Stack[-1] == 0) GOTO 0x15f; Pop(1)

0x14f: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x150: IF (Stack[-1] == 0) GOTO 0x155; Pop(1)

0x151: Push("visir.xml")
0x152: Push((bool) 0)
0x153: @ CreateWindow(Stack[-2], Stack[-1], Stack[-0])
0x154: Pop(2)
0x155: PushEmpty(int)
0x156: Call2 0x243

0x157: Pop(0)
0x158: Push("charge")
0x159: @ SendMessage(Stack[-2], Stack[-1])
0x15a: Pop(2)
0x15b: PushEmpty()
0x15c: Call2 0x1d7

0x15d: Pop(0)
0x15e: GOTO 0x1c1

0x15f: Push((int) 2)
0x160: Pop(1); Push((bool) Stack[-13] == Stack[-1])
0x161: IF (Stack[-1] == 0) GOTO 0x167; Pop(1)

0x162: Push( Stack[0 + Tasks[-1].StackPointer] )
0x163: IF (Stack[-1] == 0) GOTO 0x166; Pop(1)

0x164: @@ DestroyWindow()
0x165: Pop(0)
0x166: GOTO 0x1c1

0x167: Push((int) 3)
0x168: Pop(1); Push((bool) Stack[-13] == Stack[-1])
0x169: IF (Stack[-1] == 0) GOTO 0x176; Pop(1)

0x16a: Push((int) 0)
0x16b: @@ get(Stack[-5], Stack[-1])
0x16c: Pop(1)
0x16d: Push((int) 1)
0x16e: @@ get(Stack[-4], Stack[-1])
0x16f: Pop(1)
0x170: PushEmpty(int, int)
0x171: Stack[-2] = Stack[-6]
0x172: Stack[-1] = Stack[-5]
0x173: Call2 0xbd

0x174: Pop(2)
0x175: GOTO 0x1c1

0x176: Push((int) 4)
0x177: Pop(1); Push((bool) Stack[-13] == Stack[-1])
0x178: IF (Stack[-1] == 0) GOTO 0x180; Pop(1)

0x179: Push((int) 0)
0x17a: @@ get(Stack[-3], Stack[-1])
0x17b: Pop(1)
0x17c: Push((int) 1)
0x17d: @@ get(Stack[-2], Stack[-1])
0x17e: Pop(1)
0x17f: GOTO 0x1c1

0x180: Push((int) 100)
0x181: Pop(1); Push((bool) Stack[-13] == Stack[-1])
0x182: IF (Stack[-1] == 0) GOTO 0x188; Pop(1)

0x183: PushEmpty(int)
0x184: Stack[-1] = (int) 100
0x185: Call2 0x29

0x186: Pop(1)
0x187: GOTO 0x1c1

0x188: Push((int) 101)
0x189: Pop(1); Push((bool) Stack[-13] == Stack[-1])
0x18a: IF (Stack[-1] == 0) GOTO 0x190; Pop(1)

0x18b: PushEmpty(int)
0x18c: Stack[-1] = (int) 101
0x18d: Call2 0x29

0x18e: Pop(1)
0x18f: GOTO 0x1c1

0x190: Push((int) 6)
0x191: Pop(1); Push((bool) Stack[-13] == Stack[-1])
0x192: IF (Stack[-1] == 0) GOTO 0x19e; Pop(1)

0x193: PushEmpty(int)
0x194: Stack[-1] = (int) 2
0x195: Call2 0x42

0x196: Pop(1)
0x197: Push("mail")
0x198: @ PlaySound(Stack[-1])
0x199: Pop(1)
0x19a: Push("HasMail")
0x19b: @ Trace(Stack[-1])
0x19c: Pop(1)
0x19d: GOTO 0x1c1

0x19e: Push((int) 7)
0x19f: Pop(1); Push((bool) Stack[-13] == Stack[-1])
0x1a0: IF (Stack[-1] == 0) GOTO 0x1ac; Pop(1)

0x1a1: PushEmpty(int)
0x1a2: Stack[-1] = (int) 3
0x1a3: Call2 0x42

0x1a4: Pop(1)
0x1a5: Push("diary")
0x1a6: @ PlaySound(Stack[-1])
0x1a7: Pop(1)
0x1a8: Push("HasDiary")
0x1a9: @ Trace(Stack[-1])
0x1aa: Pop(1)
0x1ab: GOTO 0x1c1

0x1ac: Push((int) 8)
0x1ad: Pop(1); Push((bool) Stack[-13] == Stack[-1])
0x1ae: IF (Stack[-1] == 0) GOTO 0x1b7; Pop(1)

0x1af: PushEmpty(int)
0x1b0: Stack[-1] = (int) 4
0x1b1: Call2 0x42

0x1b2: Pop(1)
0x1b3: Push("ReputationUP")
0x1b4: @ Trace(Stack[-1])
0x1b5: Pop(1)
0x1b6: GOTO 0x1c1

0x1b7: Push((int) 9)
0x1b8: Pop(1); Push((bool) Stack[-13] == Stack[-1])
0x1b9: IF (Stack[-1] == 0) GOTO 0x1c1; Pop(1)

0x1ba: PushEmpty(int)
0x1bb: Stack[-1] = (int) 5
0x1bc: Call2 0x42

0x1bd: Pop(1)
0x1be: Push("ReputationDown")
0x1bf: @ Trace(Stack[-1])
0x1c0: Pop(1)
0x1c1: Return(); Pop(10)

0x1c2: PushEmpty()
0x1c3: PushEmpty(float)
0x1c4: Stack[-1] = Stack[-2]
0x1c5: Call2 0x60

0x1c6: Pop(1)
0x1c7: PushEmpty(float)
0x1c8: Stack[-1] = Stack[-2]
0x1c9: Call2 0xd4

0x1ca: Pop(1)
0x1cb: PushEmpty(float)
0x1cc: Stack[-1] = Stack[-2]
0x1cd: Call2 0x103

0x1ce: Pop(1)
0x1cf: PushEmpty()
0x1d0: Call2 0x1d7

0x1d1: Pop(0)
0x1d2: PushEmpty(float)
0x1d3: Stack[-1] = Stack[-2]
0x1d4: Call2 0x225

0x1d5: Pop(1)
0x1d6: Return(); Pop(0)

0x1d7: PushEmpty(int, int, int, int)
0x1d8: PushEmpty(int)
0x1d9: Call2 0x25e

0x1da: Stack[-3] = Stack[-1]
0x1db: Pop(1)
0x1dc: Stack[-1] = (int) 0
0x1dd: Push((int) 4)
0x1de: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x1df: IF (Stack[-1] == 0) GOTO 0x1ee; Pop(1)

0x1e0: Pop(0); Push((bool) Stack[-1] < Stack[-2])
0x1e1: IF (Stack[-1] == 0) GOTO 0x1e4; Pop(1)

0x1e2: Push((int) 1)
0x1e3: GOTO 0x1e5

0x1e4: Push((int) 0)
0x1e5: Push("vlevel")
0x1e6: Push((int) 1)
0x1e7: Pop(1); Push(Stack[-4] + Stack[-1]);
0x1e8: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1e9: @ SendMessage(Stack[-2], Stack[-1])
0x1ea: Pop(2)
0x1eb: Push((int) 1)
0x1ec: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x1ed: GOTO 0x1dd

0x1ee: Return(); Pop(4)

0x1ef: PushEmpty(string, int, int, string, int, int)
0x1f0: @ GetInvItemSprite(Stack[-3], Stack[-10])
0x1f1: Pop(0)
0x1f2: Push((int) 40)
0x1f3: Push((int) 60)
0x1f4: Pop(1); Push(Stack[-10] * Stack[-1]);
0x1f5: Stack[-4] = Stack[-2] + Stack[-1]; Pop(2);
0x1f6: Stack[-1] = (int) 40
0x1f7: Push("slot")
0x1f8: @ Blit(Stack[-1], Stack[-3], Stack[-2], Stack[-8])
0x1f9: Pop(1)
0x1fa: Push((int) 1)
0x1fb: Pop(1); Push(Stack[-3] + Stack[-1]);
0x1fc: Push((int) 1)
0x1fd: Pop(1); Push(Stack[-3] + Stack[-1]);
0x1fe: @ Blit(Stack[-5], Stack[-2], Stack[-1], Stack[-9])
0x1ff: Pop(2)
0x200: Push((int) 1)
0x201: Pop(1); Push((bool) Stack[-10] > Stack[-1])
0x202: IF (Stack[-1] == 0) GOTO 0x20d; Pop(1)

0x203: Push("default")
0x204: Push((int) 2)
0x205: Pop(1); Push(Stack[-4] + Stack[-1]);
0x206: Push((int) 35)
0x207: Pop(1); Push(Stack[-4] + Stack[-1]);
0x208: Push((float)1.0)
0x209: Push((float)1.0)
0x20a: Push((float)1.0)
0x20b: @ Print(Stack[-6], Stack[-5], Stack[-4], Stack[-15], Stack[-3], Stack[-2], Stack[-1], Stack[-13])
0x20c: Pop(6)
0x20d: Return(); Pop(6)

0x20e: PushEmpty(string, float, string, float)
0x20f: Push((int) -1)
0x210: Pop(1); Push((bool) Stack[10 + Tasks[-1].StackPointer] == Stack[-1])
0x211: IF (Stack[-1] == 0) GOTO 0x213; Pop(1)

0x212: Return(); Pop(4)

0x213: @ GetStringByID(Stack[-2], Stack[-10])
0x214: Pop(0)
0x215: Push((float)3.14)
0x216: Pop(1); Push(Stack[-1] * Stack[11 + StackPtr]);
0x217: Push((float)1.0)
0x218: Pop(2); Push(Stack[-2] / Stack[-1]);
0x219: Push((float)2.0)
0x21a: Pop(2); Push(Stack[-2] / Stack[-1]);
0x21b: Stack[-2] = Sin(Stack[-1]); Pop(1);
0x21c: Push("help")
0x21d: Push((int) 40)
0x21e: Push((int) 80)
0x21f: Push((float)1.0)
0x220: Push((float)1.0)
0x221: Push((float)1.0)
0x222: @ Print(Stack[-6], Stack[-5], Stack[-4], Stack[-8], Stack[-3], Stack[-2], Stack[-1], Stack[-7])
0x223: Pop(6)
0x224: Return(); Pop(4)

0x225: PushEmpty()
0x226: Push((int) -1)
0x227: Pop(1); Push((bool) Stack[10 + Tasks[-1].StackPointer] == Stack[-1])
0x228: IF (Stack[-1] == 0) GOTO 0x22a; Pop(1)

0x229: Return(); Pop(0)

0x22a: Stack[11 + Tasks[-1].StackPointer] = Stack[11 + Tasks[-1].StackPointer] - Stack[-1]; Pop(0);
0x22b: Push((int) 0)
0x22c: Pop(1); Push((bool) Stack[11 + Tasks[-1].StackPointer] <= Stack[-1])
0x22d: IF (Stack[-1] == 0) GOTO 0x22f; Pop(1)

0x22e: Stack[10 + Tasks[-1].StackPointer] = (int)-1
0x22f: Return(); Pop(0)

0x230: PushEmpty(bool)
0x231: Call2 0x26c

0x232: Pop(0)
0x233: IF (Stack[-1] == 0) GOTO 0x239; Pop(1)

0x234: Push("cross")
0x235: Push((int) 399)
0x236: Push((int) 299)
0x237: @ Blit(Stack[-3], Stack[-2], Stack[-1])
0x238: Pop(3)
0x239: PushEmpty()
0x23a: Call2 0x75

0x23b: Pop(0)
0x23c: PushEmpty()
0x23d: Call2 0x11f

0x23e: Pop(0)
0x23f: PushEmpty()
0x240: Call2 0x20e

0x241: Pop(0)
0x242: Return(); Pop(0)

0x243: PushEmpty(object, int, object, int)
0x244: Push("player")
0x245: @ FindActor(Stack[-3], Stack[-1])
0x246: Pop(1)
0x247: Pop(0); Push((bool) Stack[-2] == 0)
0x248: IF (Stack[-1] == 0) GOTO 0x24b; Pop(1)

0x249: Stack[-5] = (int) 0
0x24a: Return(); Pop(4)

0x24b: Push("vcharge")
0x24c: @@ GetProperty(Stack[-1], Stack[-2])
0x24d: Pop(1)
0x24e: Stack[-5] = Stack[-1]
0x24f: Return(); Pop(4)

0x250: Stack[-2] = 0
0x251: PushEmpty(object, bool, object, bool)
0x252: Push("player")
0x253: @ FindActor(Stack[-3], Stack[-1])
0x254: Pop(1)
0x255: Pop(0); Push((bool) Stack[-2] == 0)
0x256: IF (Stack[-1] == 0) GOTO 0x259; Pop(1)

0x257: Stack[-5] = (bool) 0
0x258: Return(); Pop(4)

0x259: @@ IsVisirOn(Stack[-1])
0x25a: Pop(0)
0x25b: Stack[-5] = Stack[-1]
0x25c: Return(); Pop(4)

0x25d: Stack[-2] = 0
0x25e: PushEmpty(object, int, object, int)
0x25f: Push("player")
0x260: @ FindActor(Stack[-3], Stack[-1])
0x261: Pop(1)
0x262: Pop(0); Push((bool) Stack[-2] == 0)
0x263: IF (Stack[-1] == 0) GOTO 0x266; Pop(1)

0x264: Stack[-5] = (int) 0
0x265: Return(); Pop(4)

0x266: Push("visir")
0x267: @@ GetProperty(Stack[-1], Stack[-2])
0x268: Pop(1)
0x269: Stack[-5] = Stack[-1]
0x26a: Return(); Pop(4)

0x26b: Stack[-2] = 0
0x26c: PushEmpty(object, bool, object, bool)
0x26d: Push("player")
0x26e: @ FindActor(Stack[-3], Stack[-1])
0x26f: Pop(1)
0x270: Pop(0); Push((bool) Stack[-2] == 0)
0x271: IF (Stack[-1] == 0) GOTO 0x274; Pop(1)

0x272: Stack[-5] = (bool) 0
0x273: Return(); Pop(4)

0x274: @@ IsWeaponHolstered(Stack[-1])
0x275: Pop(0)
0x276: Stack[-5] = !Stack[-1]; Pop(0);
0x277: Return(); Pop(4)

0x278: Stack[-2] = 0
