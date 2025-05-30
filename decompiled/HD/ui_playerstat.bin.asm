GlobalVarCount = 0

Strings:
	visir.xml
	charge
	player
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
	tiredness
	hunger
	immunity
	disease
	health
	repuatation
	vlevel
	slot
	default
	help
	reputation
	GetProperty
	BAD PLAYER!
	nerv_v
	nerv_b
	nerv_r
	cross
	vcharge
	IsVisirOn
	visir
	IsWeaponHolstered
	walk_distance
	HasProperty

Import:
	GetWindowSize (2 args)
	CreateWindow (3 args)
	SendMessage (2 args)
	CreateIntVector (1 args)
	CreateStringVector (1 args)
	CreateFloatVector (1 args)
	FindActor (2 args)
	UISync (0 args)
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
	CreateBoolVector (1 args)
	BlitClipped (7 args)
	BlitClipped (8 args)
	Blit (3 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object, object, object, object, object, object, object, object, object, object, int, float, int, int, object, object, object, object, object, object) Params = 0
		EVENT_201 Op = 0x15c Vars = (int, object)
		EVENT_1 Op = 0x228 Vars = (float)
		EVENT_0 Op = 0x403 Vars = ()


0x0: PushEmpty(object, object)
0x1: EventDisable(201)
0x2: @ GetWindowSize(Stack[-12], Stack[-13])
0x3: Pop(0)
0x4: Stack[10 + Tasks[-1].StackPointer] = (int)-1
0x5: PushEmpty(bool)
0x6: Call2 0x436

0x7: Pop(0)
0x8: IF (Stack[-1] == 0) GOTO 0x16; Pop(1)

0x9: Push("visir.xml")
0xa: Push((bool) 0)
0xb: @ CreateWindow(Stack[-2], Stack[-1], Stack[-0])
0xc: Pop(2)
0xd: PushEmpty(int)
0xe: Call2 0x428

0xf: Pop(0)
0x10: Push("charge")
0x11: @ SendMessage(Stack[-2], Stack[-1])
0x12: Pop(2)
0x13: PushEmpty()
0x14: Call2 0x241

0x15: Pop(0)
0x16: @ CreateIntVector(Stack[-5])
0x17: Pop(0)
0x18: @ CreateStringVector(Stack[-2])
0x19: Pop(0)
0x1a: @ CreateIntVector(Stack[-3])
0x1b: Pop(0)
0x1c: @ CreateFloatVector(Stack[-4])
0x1d: Pop(0)
0x1e: @ CreateIntVector(Stack[-6])
0x1f: Pop(0)
0x20: @ CreateIntVector(Stack[-7])
0x21: Pop(0)
0x22: @ CreateFloatVector(Stack[-8])
0x23: Pop(0)
0x24: EventDisable(1)
0x25: EventDisable(0)
0x26: Push((bool) 1)
0x27: IF (Stack[-1] == 0) GOTO 0x32; Pop(1)

0x28: Push("player")
0x29: @ FindActor(Stack[-2], Stack[-1])
0x2a: Pop(1)
0x2b: Push(Stack[-1])
0x2c: IF (Stack[-1] == 0) GOTO 0x2e; Pop(1)

0x2d: GOTO 0x32

0x2e: @ UISync()
0x2f: Pop(0)
0x30: Stack[-1] = 0
0x31: GOTO 0x26

0x32: EventEnable(1)
0x33: EventEnable(0)
0x34: PushEmpty()
0x35: Call2 0x2a0

0x36: Pop(0)
0x37: EventEnable(201)
0x38: Push((bool) 1)
0x39: @ SetOwnerDraw(Stack[-1])
0x3a: Pop(1)
0x3b: Push((bool) 1)
0x3c: @ SetNeedUpdate(Stack[-1])
0x3d: Pop(1)
0x3e: @ ProcessEvents()
0x3f: Pop(0)
0x40: Return(); Pop(2)

0x41: PushEmpty(int, int, int, int, int, int)
0x42: @@ add(Stack[-7])
0x43: Pop(0)
0x44: @@ size(Stack[-3])
0x45: Pop(0)
0x46: Stack[-2] = (int) 0
0x47: Push((int) 1)
0x48: Pop(1); Push(Stack[-4] - Stack[-1]);
0x49: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x4a: IF (Stack[-1] == 0) GOTO 0x55; Pop(1)

0x4b: @@ get(Stack[-1], Stack[-2])
0x4c: Pop(0)
0x4d: Pop(0); Push((bool) Stack[-1] == Stack[-7])
0x4e: IF (Stack[-1] == 0) GOTO 0x52; Pop(1)

0x4f: @@ remove(Stack[-2])
0x50: Pop(0)
0x51: Return(); Pop(6)

0x52: Push((int) 1)
0x53: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x54: GOTO 0x47

0x55: Return(); Pop(6)

0x56: Push((int) 0)
0x57: @@ remove(Stack[-1])
0x58: Pop(1)
0x59: Return(); Pop(0)

0x5a: PushEmpty(int, int, int, int, int, int)
0x5b: @@ size(Stack[-3])
0x5c: Pop(0)
0x5d: Stack[-2] = (int) 0
0x5e: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0x5f: IF (Stack[-1] == 0) GOTO 0x6b; Pop(1)

0x60: @@ get(Stack[-1], Stack[-2])
0x61: Pop(0)
0x62: Pop(0); Push((bool) Stack[-7] == Stack[-1])
0x63: IF (Stack[-1] == 0) GOTO 0x68; Pop(1)

0x64: Push((float)4.0)
0x65: @@ set(Stack[-3], Stack[-1])
0x66: Pop(1)
0x67: Return(); Pop(6)

0x68: Push((int) 1)
0x69: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x6a: GOTO 0x5e

0x6b: @@ add(Stack[-7])
0x6c: Pop(0)
0x6d: Push((float)4.0)
0x6e: @@ add(Stack[-1])
0x6f: Pop(1)
0x70: Return(); Pop(6)

0x71: Push((int) 0)
0x72: @@ remove(Stack[-1])
0x73: Pop(1)
0x74: Push((int) 0)
0x75: @@ remove(Stack[-1])
0x76: Pop(1)
0x77: Return(); Pop(0)

0x78: PushEmpty(int, float, int, float)
0x79: @@ size(Stack[-2])
0x7a: Pop(0)
0x7b: Pop(0); Push((bool) Stack[-2] == 0)
0x7c: IF (Stack[-1] == 0) GOTO 0x7e; Pop(1)

0x7d: Return(); Pop(4)

0x7e: Push((int) 0)
0x7f: @@ get(Stack[-2], Stack[-1])
0x80: Pop(1)
0x81: Stack[-1] = Stack[-1] - Stack[-5]; Pop(0);
0x82: Push((int) 0)
0x83: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x84: IF (Stack[-1] == 0) GOTO 0x89; Pop(1)

0x85: Push((int) 0)
0x86: @@ set(Stack[-1], Stack[-2])
0x87: Pop(1)
0x88: GOTO 0x8c

0x89: PushEmpty()
0x8a: Call2 0x71

0x8b: Pop(0)
0x8c: Return(); Pop(4)

0x8d: PushEmpty(int, int, float, float, int, int, float, float)
0x8e: @@ size(Stack[-4])
0x8f: Pop(0)
0x90: Pop(0); Push((bool) Stack[-4] == 0)
0x91: IF (Stack[-1] == 0) GOTO 0x93; Pop(1)

0x92: Return(); Pop(8)

0x93: Push((int) 0)
0x94: @@ get(Stack[-4], Stack[-1])
0x95: Pop(1)
0x96: Push((int) 0)
0x97: @@ get(Stack[-3], Stack[-1])
0x98: Pop(1)
0x99: Push((float)6.283)
0x9a: Pop(1); Push(Stack[-1] * Stack[-3]);
0x9b: Push((float)4.0)
0x9c: Stack[-3] = Stack[-2] / Stack[-1]; Pop(2);
0x9d: Push((int) 2)
0x9e: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x9f: IF (Stack[-1] == 0) GOTO 0xac; Pop(1)

0xa0: Push("mail")
0xa1: Push((int) 20)
0xa2: Push((int) 130)
0xa3: Pop(1); Push(Stack[13 + StackPtr] - Stack[-1]);
0xa4: Push((float)0.5)
0xa5: Push((float)0.5)
0xa6: Pop(0); Push(Cos(Stack[-6]))
0xa7: Pop(2); Push(Stack[-2] * Stack[-1]);
0xa8: Pop(2); Push(Stack[-2] - Stack[-1]);
0xa9: @ Blit(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xaa: Pop(4)
0xab: GOTO 0xd8

0xac: Push((int) 3)
0xad: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xae: IF (Stack[-1] == 0) GOTO 0xbb; Pop(1)

0xaf: Push("diary")
0xb0: Push((int) 20)
0xb1: Push((int) 130)
0xb2: Pop(1); Push(Stack[13 + StackPtr] - Stack[-1]);
0xb3: Push((float)0.5)
0xb4: Push((float)0.5)
0xb5: Pop(0); Push(Cos(Stack[-6]))
0xb6: Pop(2); Push(Stack[-2] * Stack[-1]);
0xb7: Pop(2); Push(Stack[-2] - Stack[-1]);
0xb8: @ Blit(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xb9: Pop(4)
0xba: GOTO 0xd8

0xbb: Push((int) 4)
0xbc: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xbd: IF (Stack[-1] == 0) GOTO 0xca; Pop(1)

0xbe: Push("rep_up")
0xbf: Push((int) 20)
0xc0: Push((int) 100)
0xc1: Pop(1); Push(Stack[13 + StackPtr] - Stack[-1]);
0xc2: Push((float)0.5)
0xc3: Push((float)0.5)
0xc4: Pop(0); Push(Cos(Stack[-6]))
0xc5: Pop(2); Push(Stack[-2] * Stack[-1]);
0xc6: Pop(2); Push(Stack[-2] - Stack[-1]);
0xc7: @ Blit(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xc8: Pop(4)
0xc9: GOTO 0xd8

0xca: Push((int) 5)
0xcb: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xcc: IF (Stack[-1] == 0) GOTO 0xd8; Pop(1)

0xcd: Push("rep_down")
0xce: Push((int) 20)
0xcf: Push((int) 100)
0xd0: Pop(1); Push(Stack[13 + StackPtr] - Stack[-1]);
0xd1: Push((float)0.5)
0xd2: Push((float)0.5)
0xd3: Pop(0); Push(Cos(Stack[-6]))
0xd4: Pop(2); Push(Stack[-2] * Stack[-1]);
0xd5: Pop(2); Push(Stack[-2] - Stack[-1]);
0xd6: @ Blit(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xd7: Pop(4)
0xd8: Return(); Pop(8)

0xd9: PushEmpty(string, string)
0xda: @@ add(Stack[-4])
0xdb: Pop(0)
0xdc: @@ add(Stack[-3])
0xdd: Pop(0)
0xde: Push((float)4.0)
0xdf: @@ add(Stack[-1])
0xe0: Pop(1)
0xe1: @ GetInvItemSprite(Stack[-1], Stack[-4])
0xe2: Pop(0)
0xe3: @ LoadImage(Stack[-1])
0xe4: Pop(0)
0xe5: @@ add(Stack[-1])
0xe6: Pop(0)
0xe7: Return(); Pop(2)

0xe8: PushEmpty()
0xe9: @@ remove(Stack[-1])
0xea: Pop(0)
0xeb: @@ remove(Stack[-1])
0xec: Pop(0)
0xed: @@ remove(Stack[-1])
0xee: Pop(0)
0xef: Return(); Pop(0)

0xf0: PushEmpty(int, int, float, int, int, string, int, int, float, int, int, string)
0xf1: @@ size(Stack[-6])
0xf2: Pop(0)
0xf3: Pop(0); Push((bool) Stack[-6] == 0)
0xf4: IF (Stack[-1] == 0) GOTO 0xf6; Pop(1)

0xf5: Return(); Pop(12)

0xf6: Stack[-5] = (int) 0
0xf7: Pop(0); Push((bool) Stack[-5] < Stack[-6])
0xf8: IF (Stack[-1] == 0) GOTO 0x10d; Pop(1)

0xf9: @@ get(Stack[-4], Stack[-5])
0xfa: Pop(0)
0xfb: Stack[-4] = Stack[-4] - Stack[-13]; Pop(0);
0xfc: Push((int) 0)
0xfd: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0xfe: IF (Stack[-1] == 0) GOTO 0x102; Pop(1)

0xff: @@ set(Stack[-5], Stack[-4])
0x100: Pop(0)
0x101: GOTO 0x10a

0x102: PushEmpty(int)
0x103: Stack[-1] = Stack[-6]
0x104: Call2 0xe8

0x105: Pop(1)
0x106: Push((int) -1)
0x107: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x108: Push((int) -1)
0x109: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x10a: Push((int) 1)
0x10b: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x10c: GOTO 0xf7

0x10d: Push((int) 0)
0x10e: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x10f: IF (Stack[-1] == 0) GOTO 0x11e; Pop(1)

0x110: @@ size(Stack[-3])
0x111: Pop(0)
0x112: Stack[-2] = (int) 0
0x113: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0x114: IF (Stack[-1] == 0) GOTO 0x11c; Pop(1)

0x115: @@ get(Stack[-1], Stack[-2])
0x116: Pop(0)
0x117: @ ReleaseImage(Stack[-1])
0x118: Pop(0)
0x119: Push((int) 1)
0x11a: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x11b: GOTO 0x113

0x11c: @@ clear()
0x11d: Pop(0)
0x11e: Return(); Pop(12)

0x11f: PushEmpty(int, int, int, int)
0x120: @@ size(Stack[-2])
0x121: Pop(0)
0x122: Pop(0); Push((bool) Stack[-2] == 0)
0x123: IF (Stack[-1] == 0) GOTO 0x125; Pop(1)

0x124: Return(); Pop(4)

0x125: Push( Stack[1 + Tasks[-1].StackPointer] )
0x126: IF (Stack[-1] == 0) GOTO 0x128; Pop(1)

0x127: Return(); Pop(4)

0x128: Push((int) 0)
0x129: @@ get(Stack[-2], Stack[-1])
0x12a: Pop(1)
0x12b: Push((int) 100)
0x12c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x12d: IF (Stack[-1] == 0) GOTO 0x133; Pop(1)

0x12e: Push("daychange.xml")
0x12f: Push((bool) 0)
0x130: @ CreateWindow(Stack[-2], Stack[-1], Stack[-1])
0x131: Pop(2)
0x132: GOTO 0x137

0x133: Push("daychangereal.xml")
0x134: Push((bool) 0)
0x135: @ CreateWindow(Stack[-2], Stack[-1], Stack[-1])
0x136: Pop(2)
0x137: PushEmpty()
0x138: Call2 0x56

0x139: Pop(0)
0x13a: Return(); Pop(4)

0x13b: PushEmpty(int, int, int, int, float, float, int, int, int, int, float, float)
0x13c: Push((int) -1)
0x13d: Pop(1); Push((bool) Stack[10 + Tasks[-1].StackPointer] != Stack[-1])
0x13e: IF (Stack[-1] == 0) GOTO 0x140; Pop(1)

0x13f: Return(); Pop(12)

0x140: @@ size(Stack[-6])
0x141: Pop(0)
0x142: Pop(0); Push((bool) Stack[-6] == 0)
0x143: IF (Stack[-1] == 0) GOTO 0x145; Pop(1)

0x144: Return(); Pop(12)

0x145: Stack[-5] = (int) 0
0x146: Pop(0); Push((bool) Stack[-5] < Stack[-6])
0x147: IF (Stack[-1] == 0) GOTO 0x15b; Pop(1)

0x148: @@ get(Stack[-4], Stack[-5])
0x149: Pop(0)
0x14a: @@ get(Stack[-3], Stack[-5])
0x14b: Pop(0)
0x14c: @@ get(Stack[-2], Stack[-5])
0x14d: Pop(0)
0x14e: Push((float)4.0)
0x14f: Pop(1); Push(Stack[-3] / Stack[-1]);
0x150: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x151: PushEmpty(int, int, int, float)
0x152: Stack[-4] = Stack[-8]
0x153: Stack[-3] = Stack[-7]
0x154: Stack[-2] = Stack[-9]
0x155: Stack[-1] = Stack[-5]
0x156: Call2 0x25f

0x157: Pop(4)
0x158: Push((int) 1)
0x159: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x15a: GOTO 0x146

0x15b: Return(); Pop(12)

0x15c: PushEmpty(int, int, int, int, int, string, int, int, int, int, int, string)
0x15d: Push((int) 1000)
0x15e: Pop(1); Push((bool) Stack[-15] == Stack[-1])
0x15f: IF (Stack[-1] == 0) GOTO 0x163; Pop(1)

0x160: Stack[10 + Tasks[-1].StackPointer] = (int)109
0x161: Stack[11 + Tasks[-1].StackPointer] = (float)1.0
0x162: GOTO 0x227

0x163: Push((int) 200)
0x164: Pop(1); Push((bool) Stack[-15] == Stack[-1])
0x165: IF (Stack[-1] == 0) GOTO 0x172; Pop(1)

0x166: Push(Stack[-13])
0x167: IF (Stack[-1] == 0) GOTO 0x171; Pop(1)

0x168: @@ size(Stack[-6])
0x169: Pop(0)
0x16a: Push((int) 1)
0x16b: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x16c: IF (Stack[-1] == 0) GOTO 0x171; Pop(1)

0x16d: Push((int) 0)
0x16e: @@ get(Stack[-10], Stack[-1])
0x16f: Pop(1)
0x170: Stack[11 + Tasks[-1].StackPointer] = (float)1.0
0x171: GOTO 0x227

0x172: Push((int) 1)
0x173: Pop(1); Push((bool) Stack[-15] == Stack[-1])
0x174: IF (Stack[-1] == 0) GOTO 0x185; Pop(1)

0x175: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x176: IF (Stack[-1] == 0) GOTO 0x17b; Pop(1)

0x177: Push("visir.xml")
0x178: Push((bool) 0)
0x179: @ CreateWindow(Stack[-2], Stack[-1], Stack[-0])
0x17a: Pop(2)
0x17b: PushEmpty(int)
0x17c: Call2 0x428

0x17d: Pop(0)
0x17e: Push("charge")
0x17f: @ SendMessage(Stack[-2], Stack[-1])
0x180: Pop(2)
0x181: PushEmpty()
0x182: Call2 0x241

0x183: Pop(0)
0x184: GOTO 0x227

0x185: Push((int) 2)
0x186: Pop(1); Push((bool) Stack[-15] == Stack[-1])
0x187: IF (Stack[-1] == 0) GOTO 0x18d; Pop(1)

0x188: Push( Stack[0 + Tasks[-1].StackPointer] )
0x189: IF (Stack[-1] == 0) GOTO 0x18c; Pop(1)

0x18a: @@ DestroyWindow()
0x18b: Pop(0)
0x18c: GOTO 0x227

0x18d: Push((int) 3)
0x18e: Pop(1); Push((bool) Stack[-15] == Stack[-1])
0x18f: IF (Stack[-1] == 0) GOTO 0x19c; Pop(1)

0x190: Push((int) 0)
0x191: @@ get(Stack[-6], Stack[-1])
0x192: Pop(1)
0x193: Push((int) 1)
0x194: @@ get(Stack[-5], Stack[-1])
0x195: Pop(1)
0x196: PushEmpty(int, int)
0x197: Stack[-2] = Stack[-7]
0x198: Stack[-1] = Stack[-6]
0x199: Call2 0xd9

0x19a: Pop(2)
0x19b: GOTO 0x227

0x19c: Push((int) 4)
0x19d: Pop(1); Push((bool) Stack[-15] == Stack[-1])
0x19e: IF (Stack[-1] == 0) GOTO 0x1a6; Pop(1)

0x19f: Push((int) 0)
0x1a0: @@ get(Stack[-4], Stack[-1])
0x1a1: Pop(1)
0x1a2: Push((int) 1)
0x1a3: @@ get(Stack[-3], Stack[-1])
0x1a4: Pop(1)
0x1a5: GOTO 0x227

0x1a6: Push((int) 100)
0x1a7: Pop(1); Push((bool) Stack[-15] == Stack[-1])
0x1a8: IF (Stack[-1] == 0) GOTO 0x1ae; Pop(1)

0x1a9: PushEmpty(int)
0x1aa: Stack[-1] = (int) 100
0x1ab: Call2 0x41

0x1ac: Pop(1)
0x1ad: GOTO 0x227

0x1ae: Push((int) 101)
0x1af: Pop(1); Push((bool) Stack[-15] == Stack[-1])
0x1b0: IF (Stack[-1] == 0) GOTO 0x1b6; Pop(1)

0x1b1: PushEmpty(int)
0x1b2: Stack[-1] = (int) 101
0x1b3: Call2 0x41

0x1b4: Pop(1)
0x1b5: GOTO 0x227

0x1b6: Push((int) 6)
0x1b7: Pop(1); Push((bool) Stack[-15] == Stack[-1])
0x1b8: IF (Stack[-1] == 0) GOTO 0x1c4; Pop(1)

0x1b9: PushEmpty(int)
0x1ba: Stack[-1] = (int) 2
0x1bb: Call2 0x5a

0x1bc: Pop(1)
0x1bd: Push("mail")
0x1be: @ PlaySound(Stack[-1])
0x1bf: Pop(1)
0x1c0: Push("HasMail")
0x1c1: @ Trace(Stack[-1])
0x1c2: Pop(1)
0x1c3: GOTO 0x227

0x1c4: Push((int) 7)
0x1c5: Pop(1); Push((bool) Stack[-15] == Stack[-1])
0x1c6: IF (Stack[-1] == 0) GOTO 0x1d2; Pop(1)

0x1c7: PushEmpty(int)
0x1c8: Stack[-1] = (int) 3
0x1c9: Call2 0x5a

0x1ca: Pop(1)
0x1cb: Push("diary")
0x1cc: @ PlaySound(Stack[-1])
0x1cd: Pop(1)
0x1ce: Push("HasDiary")
0x1cf: @ Trace(Stack[-1])
0x1d0: Pop(1)
0x1d1: GOTO 0x227

0x1d2: Push((int) 8)
0x1d3: Pop(1); Push((bool) Stack[-15] == Stack[-1])
0x1d4: IF (Stack[-1] == 0) GOTO 0x1dc; Pop(1)

0x1d5: Push("rep_up")
0x1d6: @ PlaySound(Stack[-1])
0x1d7: Pop(1)
0x1d8: Push("ReputationUP")
0x1d9: @ Trace(Stack[-1])
0x1da: Pop(1)
0x1db: GOTO 0x227

0x1dc: Push((int) 9)
0x1dd: Pop(1); Push((bool) Stack[-15] == Stack[-1])
0x1de: IF (Stack[-1] == 0) GOTO 0x1e6; Pop(1)

0x1df: Push("rep_down")
0x1e0: @ PlaySound(Stack[-1])
0x1e1: Pop(1)
0x1e2: Push("ReputationDown")
0x1e3: @ Trace(Stack[-1])
0x1e4: Pop(1)
0x1e5: GOTO 0x227

0x1e6: Push((int) 11)
0x1e7: Pop(1); Push((bool) Stack[-15] == Stack[-1])
0x1e8: IF (Stack[-1] == 0) GOTO 0x1ef; Pop(1)

0x1e9: PushEmpty(string, bool)
0x1ea: Stack[-2] = "tiredness"
0x1eb: Stack[-1] = (bool) 1
0x1ec: Call2 0x2f2

0x1ed: Pop(2)
0x1ee: GOTO 0x227

0x1ef: Push((int) 12)
0x1f0: Pop(1); Push((bool) Stack[-15] == Stack[-1])
0x1f1: IF (Stack[-1] == 0) GOTO 0x1f8; Pop(1)

0x1f2: PushEmpty(string, bool)
0x1f3: Stack[-2] = "hunger"
0x1f4: Stack[-1] = (bool) 1
0x1f5: Call2 0x2f2

0x1f6: Pop(2)
0x1f7: GOTO 0x227

0x1f8: Push((int) 13)
0x1f9: Pop(1); Push((bool) Stack[-15] == Stack[-1])
0x1fa: IF (Stack[-1] == 0) GOTO 0x201; Pop(1)

0x1fb: PushEmpty(string, bool)
0x1fc: Stack[-2] = "immunity"
0x1fd: Stack[-1] = (bool) 1
0x1fe: Call2 0x2f2

0x1ff: Pop(2)
0x200: GOTO 0x227

0x201: Push((int) 14)
0x202: Pop(1); Push((bool) Stack[-15] == Stack[-1])
0x203: IF (Stack[-1] == 0) GOTO 0x20a; Pop(1)

0x204: PushEmpty(string, bool)
0x205: Stack[-2] = "disease"
0x206: Stack[-1] = (bool) 1
0x207: Call2 0x2f2

0x208: Pop(2)
0x209: GOTO 0x227

0x20a: Push((int) 15)
0x20b: Pop(1); Push((bool) Stack[-15] == Stack[-1])
0x20c: IF (Stack[-1] == 0) GOTO 0x213; Pop(1)

0x20d: PushEmpty(string, bool)
0x20e: Stack[-2] = "health"
0x20f: Stack[-1] = (bool) 1
0x210: Call2 0x2f2

0x211: Pop(2)
0x212: GOTO 0x227

0x213: Push((int) 16)
0x214: Pop(1); Push((bool) Stack[-15] == Stack[-1])
0x215: IF (Stack[-1] == 0) GOTO 0x21c; Pop(1)

0x216: PushEmpty(string, bool)
0x217: Stack[-2] = "repuatation"
0x218: Stack[-1] = (bool) 1
0x219: Call2 0x2f2

0x21a: Pop(2)
0x21b: GOTO 0x227

0x21c: Push((int) 10)
0x21d: Pop(1); Push((bool) Stack[-15] == Stack[-1])
0x21e: IF (Stack[-1] == 0) GOTO 0x227; Pop(1)

0x21f: Push((int) 0)
0x220: @@ get(Stack[-2], Stack[-1])
0x221: Pop(1)
0x222: PushEmpty(string, bool)
0x223: Stack[-2] = Stack[-3]
0x224: Stack[-1] = (bool) 0
0x225: Call2 0x2f2

0x226: Pop(2)
0x227: Return(); Pop(12)

0x228: PushEmpty()
0x229: PushEmpty(float)
0x22a: Stack[-1] = Stack[-2]
0x22b: Call2 0x78

0x22c: Pop(1)
0x22d: PushEmpty(float)
0x22e: Stack[-1] = Stack[-2]
0x22f: Call2 0xf0

0x230: Pop(1)
0x231: PushEmpty(float)
0x232: Stack[-1] = Stack[-2]
0x233: Call2 0x11f

0x234: Pop(1)
0x235: PushEmpty()
0x236: Call2 0x241

0x237: Pop(0)
0x238: PushEmpty(float)
0x239: Stack[-1] = Stack[-2]
0x23a: Call2 0x32b

0x23b: Pop(1)
0x23c: PushEmpty(float)
0x23d: Stack[-1] = Stack[-2]
0x23e: Call2 0x295

0x23f: Pop(1)
0x240: Return(); Pop(0)

0x241: PushEmpty(int, int, int, int)
0x242: PushEmpty(int)
0x243: Call2 0x443

0x244: Stack[-3] = Stack[-1]
0x245: Pop(1)
0x246: Stack[-1] = (int) 0
0x247: Push((int) 4)
0x248: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x249: IF (Stack[-1] == 0) GOTO 0x258; Pop(1)

0x24a: Pop(0); Push((bool) Stack[-1] < Stack[-2])
0x24b: IF (Stack[-1] == 0) GOTO 0x24e; Pop(1)

0x24c: Push((int) 1)
0x24d: GOTO 0x24f

0x24e: Push((int) 0)
0x24f: Push("vlevel")
0x250: Push((int) 1)
0x251: Pop(1); Push(Stack[-4] + Stack[-1]);
0x252: Pop(2); Push(Stack[-2] + Stack[-1]);
0x253: @ SendMessage(Stack[-2], Stack[-1])
0x254: Pop(2)
0x255: Push((int) 1)
0x256: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x257: GOTO 0x247

0x258: PushEmpty(int)
0x259: Call2 0x428

0x25a: Pop(0)
0x25b: Push("charge")
0x25c: @ SendMessage(Stack[-2], Stack[-1])
0x25d: Pop(2)
0x25e: Return(); Pop(4)

0x25f: PushEmpty(string, int, int, string, int, int)
0x260: @ GetInvItemSprite(Stack[-3], Stack[-10])
0x261: Pop(0)
0x262: Push((int) 40)
0x263: Push((int) 60)
0x264: Pop(1); Push(Stack[-10] * Stack[-1]);
0x265: Stack[-4] = Stack[-2] + Stack[-1]; Pop(2);
0x266: Stack[-1] = (int) 40
0x267: Push("slot")
0x268: @ Blit(Stack[-1], Stack[-3], Stack[-2], Stack[-8])
0x269: Pop(1)
0x26a: Push((int) 1)
0x26b: Pop(1); Push(Stack[-3] + Stack[-1]);
0x26c: Push((int) 1)
0x26d: Pop(1); Push(Stack[-3] + Stack[-1]);
0x26e: @ Blit(Stack[-5], Stack[-2], Stack[-1], Stack[-9])
0x26f: Pop(2)
0x270: Push((int) 1)
0x271: Pop(1); Push((bool) Stack[-10] > Stack[-1])
0x272: IF (Stack[-1] == 0) GOTO 0x27d; Pop(1)

0x273: Push("default")
0x274: Push((int) 2)
0x275: Pop(1); Push(Stack[-4] + Stack[-1]);
0x276: Push((int) 35)
0x277: Pop(1); Push(Stack[-4] + Stack[-1]);
0x278: Push((float)1.0)
0x279: Push((float)1.0)
0x27a: Push((float)1.0)
0x27b: @ Print(Stack[-6], Stack[-5], Stack[-4], Stack[-15], Stack[-3], Stack[-2], Stack[-1], Stack[-13])
0x27c: Pop(6)
0x27d: Return(); Pop(6)

0x27e: PushEmpty(string, float, string, float)
0x27f: Push((int) -1)
0x280: Pop(1); Push((bool) Stack[10 + Tasks[-1].StackPointer] == Stack[-1])
0x281: IF (Stack[-1] == 0) GOTO 0x283; Pop(1)

0x282: Return(); Pop(4)

0x283: @ GetStringByID(Stack[-2], Stack[-10])
0x284: Pop(0)
0x285: Push((float)3.14)
0x286: Pop(1); Push(Stack[-1] * Stack[11 + StackPtr]);
0x287: Push((float)1.0)
0x288: Pop(2); Push(Stack[-2] / Stack[-1]);
0x289: Push((float)2.0)
0x28a: Pop(2); Push(Stack[-2] / Stack[-1]);
0x28b: Stack[-2] = Sin(Stack[-1]); Pop(1);
0x28c: Push("help")
0x28d: Push((int) 10)
0x28e: Push((int) 10)
0x28f: Push((float)1.0)
0x290: Push((float)1.0)
0x291: Push((float)1.0)
0x292: @ Print(Stack[-6], Stack[-5], Stack[-4], Stack[-8], Stack[-3], Stack[-2], Stack[-1], Stack[-7])
0x293: Pop(6)
0x294: Return(); Pop(4)

0x295: PushEmpty()
0x296: Push((int) -1)
0x297: Pop(1); Push((bool) Stack[10 + Tasks[-1].StackPointer] == Stack[-1])
0x298: IF (Stack[-1] == 0) GOTO 0x29a; Pop(1)

0x299: Return(); Pop(0)

0x29a: Stack[11 + Tasks[-1].StackPointer] = Stack[11 + Tasks[-1].StackPointer] - Stack[-1]; Pop(0);
0x29b: Push((int) 0)
0x29c: Pop(1); Push((bool) Stack[11 + Tasks[-1].StackPointer] <= Stack[-1])
0x29d: IF (Stack[-1] == 0) GOTO 0x29f; Pop(1)

0x29e: Stack[10 + Tasks[-1].StackPointer] = (int)-1
0x29f: Return(); Pop(0)

0x2a0: PushEmpty(object, int, int, string, float, object, int, int, string, float)
0x2a1: @ CreateStringVector(Stack[-14])
0x2a2: Pop(0)
0x2a3: @ CreateFloatVector(Stack[-15])
0x2a4: Pop(0)
0x2a5: @ CreateFloatVector(Stack[-16])
0x2a6: Pop(0)
0x2a7: @ CreateFloatVector(Stack[-17])
0x2a8: Pop(0)
0x2a9: @ CreateFloatVector(Stack[-18])
0x2aa: Pop(0)
0x2ab: @ CreateBoolVector(Stack[-19])
0x2ac: Pop(0)
0x2ad: Push("player")
0x2ae: @ FindActor(Stack[-6], Stack[-1])
0x2af: Pop(1)
0x2b0: Push(Stack[-5])
0x2b1: IF (Stack[-1] == 0) GOTO 0x2ed; Pop(1)

0x2b2: Push("health")
0x2b3: @@ add(Stack[-1])
0x2b4: Pop(1)
0x2b5: Push((bool) 0)
0x2b6: @@ add(Stack[-1])
0x2b7: Pop(1)
0x2b8: Push("hunger")
0x2b9: @@ add(Stack[-1])
0x2ba: Pop(1)
0x2bb: Push((bool) 1)
0x2bc: @@ add(Stack[-1])
0x2bd: Pop(1)
0x2be: Push("tiredness")
0x2bf: @@ add(Stack[-1])
0x2c0: Pop(1)
0x2c1: Push((bool) 1)
0x2c2: @@ add(Stack[-1])
0x2c3: Pop(1)
0x2c4: Push("immunity")
0x2c5: @@ add(Stack[-1])
0x2c6: Pop(1)
0x2c7: Push((bool) 0)
0x2c8: @@ add(Stack[-1])
0x2c9: Pop(1)
0x2ca: Push("disease")
0x2cb: @@ add(Stack[-1])
0x2cc: Pop(1)
0x2cd: Push((bool) 1)
0x2ce: @@ add(Stack[-1])
0x2cf: Pop(1)
0x2d0: Push("reputation")
0x2d1: @@ add(Stack[-1])
0x2d2: Pop(1)
0x2d3: Push((bool) 0)
0x2d4: @@ add(Stack[-1])
0x2d5: Pop(1)
0x2d6: @@ size(Stack[-4])
0x2d7: Pop(0)
0x2d8: Stack[-3] = (int) 0
0x2d9: Pop(0); Push((bool) Stack[-3] < Stack[-4])
0x2da: IF (Stack[-1] == 0) GOTO 0x2ec; Pop(1)

0x2db: @@ get(Stack[-2], Stack[-3])
0x2dc: Pop(0)
0x2dd: @@ GetProperty(Stack[-2], Stack[-1])
0x2de: Pop(0)
0x2df: @@ add(Stack[-1])
0x2e0: Pop(0)
0x2e1: @@ add(Stack[-1])
0x2e2: Pop(0)
0x2e3: Push((int) 0)
0x2e4: @@ add(Stack[-1])
0x2e5: Pop(1)
0x2e6: Push((int) 0)
0x2e7: @@ add(Stack[-1])
0x2e8: Pop(1)
0x2e9: Push((int) 1)
0x2ea: Stack[-4] = Stack[-4] + Stack[-1]; Pop(1);
0x2eb: GOTO 0x2d9

0x2ec: GOTO 0x2f0

0x2ed: Push("BAD PLAYER!")
0x2ee: @ Trace(Stack[-1])
0x2ef: Pop(1)
0x2f0: Return(); Pop(10)

0x2f1: Stack[-5] = 0
0x2f2: PushEmpty(object, int, int, string, float, float, float, float, object, int, int, string, float, float, float, float)
0x2f3: Push("player")
0x2f4: @ FindActor(Stack[-9], Stack[-1])
0x2f5: Pop(1)
0x2f6: Pop(0); Push((bool) Stack[-8] == 0)
0x2f7: IF (Stack[-1] == 0) GOTO 0x2f9; Pop(1)

0x2f8: Return(); Pop(16)

0x2f9: @@ size(Stack[-7])
0x2fa: Pop(0)
0x2fb: Stack[-6] = (int) 0
0x2fc: Pop(0); Push((bool) Stack[-6] < Stack[-7])
0x2fd: IF (Stack[-1] == 0) GOTO 0x329; Pop(1)

0x2fe: @@ get(Stack[-5], Stack[-6])
0x2ff: Pop(0)
0x300: Pop(0); Push((bool) Stack[-5] == Stack[-18])
0x301: IF (Stack[-1] == 0) GOTO 0x326; Pop(1)

0x302: @@ get(Stack[-4], Stack[-6])
0x303: Pop(0)
0x304: @@ GetProperty(Stack[-5], Stack[-3])
0x305: Pop(0)
0x306: Pop(0); Push((bool) Stack[-4] == Stack[-3])
0x307: IF (Stack[-1] == 0) GOTO 0x309; Pop(1)

0x308: Return(); Pop(16)

0x309: @@ set(Stack[-6], Stack[-3])
0x30a: Pop(0)
0x30b: Push(Stack[-17])
0x30c: IF (Stack[-1] == 0) GOTO 0x325; Pop(1)

0x30d: @@ get(Stack[-2], Stack[-6])
0x30e: Pop(0)
0x30f: Push((float)2.0)
0x310: @@ set(Stack[-7], Stack[-1])
0x311: Pop(1)
0x312: Push((float)10.0)
0x313: Pop(0); Push(Stack[-3] - Stack[-4]);
0x314: Stack[-3] = Stack[-2] * Stack[-1]; Pop(2);
0x315: Push((int) 0)
0x316: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x317: IF (Stack[-1] == 0) GOTO 0x31a; Pop(1)

0x318: Push((float)-1.0)
0x319: Stack[-2] = Stack[-2] * Stack[-1]; Pop(1);
0x31a: Push((float)0.2)
0x31b: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x31c: IF (Stack[-1] == 0) GOTO 0x31f; Pop(1)

0x31d: Stack[-1] = (float) 0.2
0x31e: GOTO 0x323

0x31f: Push((float)1.0)
0x320: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x321: IF (Stack[-1] == 0) GOTO 0x323; Pop(1)

0x322: Stack[-1] = (float) 1.0
0x323: @@ set(Stack[-6], Stack[-1])
0x324: Pop(0)
0x325: GOTO 0x329

0x326: Push((int) 1)
0x327: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x328: GOTO 0x2fc

0x329: Return(); Pop(16)

0x32a: Stack[-8] = 0
0x32b: PushEmpty(int, int, float, int, int, float)
0x32c: @@ size(Stack[-3])
0x32d: Pop(0)
0x32e: Stack[-2] = (int) 0
0x32f: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0x330: IF (Stack[-1] == 0) GOTO 0x340; Pop(1)

0x331: @@ get(Stack[-1], Stack[-2])
0x332: Pop(0)
0x333: Push((int) 0)
0x334: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x335: IF (Stack[-1] == 0) GOTO 0x337; Pop(1)

0x336: Stack[-1] = Stack[-1] - Stack[-7]; Pop(0);
0x337: Push((int) 0)
0x338: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x339: IF (Stack[-1] == 0) GOTO 0x33b; Pop(1)

0x33a: Stack[-1] = (int) 0
0x33b: @@ set(Stack[-2], Stack[-1])
0x33c: Pop(0)
0x33d: Push((int) 1)
0x33e: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x33f: GOTO 0x32f

0x340: Return(); Pop(6)

0x341: PushEmpty(float, float, float, int, float, float, float, float, int, float)
0x342: Return(); Pop(10)

0x343: PushEmpty(float)
0x344: Call2 0x45e

0x345: Stack[-6] = Stack[-1]
0x346: Pop(1)
0x347: Stack[-4] = (int) 59
0x348: Stack[-3] = (int) 400
0x349: Push((int) 800)
0x34a: Pop(1); Push((bool) Stack[12 + Tasks[-1].StackPointer] == Stack[-1])
0x34b: IF (Stack[-1] == 0) GOTO 0x34f; Pop(1)

0x34c: Stack[-4] = (int) 59
0x34d: Stack[-3] = (int) 400
0x34e: GOTO 0x35a

0x34f: Push((int) 1024)
0x350: Pop(1); Push((bool) Stack[12 + Tasks[-1].StackPointer] == Stack[-1])
0x351: IF (Stack[-1] == 0) GOTO 0x355; Pop(1)

0x352: Stack[-4] = (int) 75
0x353: Stack[-3] = (int) 512
0x354: GOTO 0x35a

0x355: Push((int) 1280)
0x356: Pop(1); Push((bool) Stack[12 + Tasks[-1].StackPointer] == Stack[-1])
0x357: IF (Stack[-1] == 0) GOTO 0x35a; Pop(1)

0x358: Stack[-4] = (int) 99
0x359: Stack[-3] = (int) 680
0x35a: Pop(0); Push(Stack[13 + StackPtr] - Stack[-3]);
0x35b: Push((int) 2)
0x35c: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0x35d: Push((int) 1)
0x35e: Pop(1); Push(Stack[-1] - Stack[-6]);
0x35f: Stack[-2] = Stack[-4] * Stack[-1]; Pop(1);
0x360: Push("nerv_v")
0x361: Push((int) 0)
0x362: Push((int) 0)
0x363: Pop(0); Push(Stack[-5] + Stack[-4]);
0x364: Pop(0); Push(Stack[-7] - Stack[-5]);
0x365: @ BlitClipped(Stack[-5], Stack[-4], Stack[-7], Stack[-3], Stack[-2], Stack[-9], Stack[-1])
0x366: Pop(5)
0x367: Return(); Pop(10)

0x368: PushEmpty(float, float, int, int, string, float, float, float, bool, float, float, float, float, float, float, float, int, int, string, float, float, float, bool, float, float, float, float, float)
0x369: Stack[-14] = (int) 20
0x36a: Stack[-13] = (int) 20
0x36b: @@ size(Stack[-12])
0x36c: Pop(0)
0x36d: Stack[-11] = (int) 0
0x36e: Pop(0); Push((bool) Stack[-11] < Stack[-12])
0x36f: IF (Stack[-1] == 0) GOTO 0x402; Pop(1)

0x370: @@ get(Stack[-10], Stack[-11])
0x371: Pop(0)
0x372: @@ get(Stack[-9], Stack[-11])
0x373: Pop(0)
0x374: @@ get(Stack[-8], Stack[-11])
0x375: Pop(0)
0x376: @@ get(Stack[-7], Stack[-11])
0x377: Pop(0)
0x378: @@ get(Stack[-6], Stack[-11])
0x379: Pop(0)
0x37a: Push("health")
0x37b: Pop(1); Push((bool) Stack[-11] == Stack[-1])
0x37c: IF (Stack[-1] == 0) GOTO 0x388; Pop(1)

0x37d: Push((float)0.33)
0x37e: Pop(1); Push((bool) Stack[-10] <= Stack[-1])
0x37f: IF (Stack[-1] == 0) GOTO 0x382; Pop(1)

0x380: Stack[-5] = (int) 1
0x381: GOTO 0x387

0x382: Push((int) 0)
0x383: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x384: IF (Stack[-1] == 0) GOTO 0x386; Pop(1)

0x385: GOTO 0x3ff

0x386: Stack[-5] = (float) 0.2
0x387: GOTO 0x3cd

0x388: Push("immunity")
0x389: Pop(1); Push((bool) Stack[-11] == Stack[-1])
0x38a: IF (Stack[-1] == 0) GOTO 0x396; Pop(1)

0x38b: Push((float)0.5)
0x38c: Pop(1); Push((bool) Stack[-10] < Stack[-1])
0x38d: IF (Stack[-1] == 0) GOTO 0x390; Pop(1)

0x38e: Stack[-5] = (int) 1
0x38f: GOTO 0x395

0x390: Push((int) 0)
0x391: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x392: IF (Stack[-1] == 0) GOTO 0x394; Pop(1)

0x393: GOTO 0x3ff

0x394: Stack[-5] = (float) 0.2
0x395: GOTO 0x3cd

0x396: Push("tiredness")
0x397: Pop(1); Push((bool) Stack[-11] == Stack[-1])
0x398: IF (Stack[-1] == 0) GOTO 0x3a4; Pop(1)

0x399: Push((float)0.66)
0x39a: Pop(1); Push((bool) Stack[-10] >= Stack[-1])
0x39b: IF (Stack[-1] == 0) GOTO 0x39e; Pop(1)

0x39c: Stack[-5] = (int) 1
0x39d: GOTO 0x3a3

0x39e: Push((int) 0)
0x39f: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x3a0: IF (Stack[-1] == 0) GOTO 0x3a2; Pop(1)

0x3a1: GOTO 0x3ff

0x3a2: Stack[-5] = (float) 0.2
0x3a3: GOTO 0x3cd

0x3a4: Push("hunger")
0x3a5: Pop(1); Push((bool) Stack[-11] == Stack[-1])
0x3a6: IF (Stack[-1] == 0) GOTO 0x3b2; Pop(1)

0x3a7: Push((float)0.66)
0x3a8: Pop(1); Push((bool) Stack[-10] >= Stack[-1])
0x3a9: IF (Stack[-1] == 0) GOTO 0x3ac; Pop(1)

0x3aa: Stack[-5] = (int) 1
0x3ab: GOTO 0x3b1

0x3ac: Push((int) 0)
0x3ad: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x3ae: IF (Stack[-1] == 0) GOTO 0x3b0; Pop(1)

0x3af: GOTO 0x3ff

0x3b0: Stack[-5] = (float) 0.2
0x3b1: GOTO 0x3cd

0x3b2: Push("reputation")
0x3b3: Pop(1); Push((bool) Stack[-11] == Stack[-1])
0x3b4: IF (Stack[-1] == 0) GOTO 0x3c0; Pop(1)

0x3b5: Push((float)0.66)
0x3b6: Pop(1); Push((bool) Stack[-10] <= Stack[-1])
0x3b7: IF (Stack[-1] == 0) GOTO 0x3ba; Pop(1)

0x3b8: Stack[-5] = (int) 1
0x3b9: GOTO 0x3bf

0x3ba: Push((int) 0)
0x3bb: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x3bc: IF (Stack[-1] == 0) GOTO 0x3be; Pop(1)

0x3bd: GOTO 0x3ff

0x3be: Stack[-5] = (float) 0.2
0x3bf: GOTO 0x3cd

0x3c0: Push("disease")
0x3c1: Pop(1); Push((bool) Stack[-11] == Stack[-1])
0x3c2: IF (Stack[-1] == 0) GOTO 0x3cd; Pop(1)

0x3c3: Push((float)0.33)
0x3c4: Pop(1); Push((bool) Stack[-10] >= Stack[-1])
0x3c5: IF (Stack[-1] == 0) GOTO 0x3c8; Pop(1)

0x3c6: Stack[-5] = (int) 1
0x3c7: GOTO 0x3cd

0x3c8: Push((int) 0)
0x3c9: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x3ca: IF (Stack[-1] == 0) GOTO 0x3cc; Pop(1)

0x3cb: GOTO 0x3ff

0x3cc: Stack[-5] = (float) 0.2
0x3cd: Push((int) 0)
0x3ce: Pop(1); Push((bool) Stack[-8] > Stack[-1])
0x3cf: IF (Stack[-1] == 0) GOTO 0x3d8; Pop(1)

0x3d0: Push((float)2.0)
0x3d1: Pop(1); Push(Stack[-8] / Stack[-1]);
0x3d2: Push((float)3.1415)
0x3d3: Pop(2); Push(Stack[-2] * Stack[-1]);
0x3d4: Push((int) 2)
0x3d5: Pop(2); Push(Stack[-2] / Stack[-1]);
0x3d6: Stack[-5] = Sin(Stack[-1]); Pop(1);
0x3d7: GOTO 0x3d9

0x3d8: Stack[-4] = Stack[-5]
0x3d9: Push((int) 1)
0x3da: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x3db: IF (Stack[-1] == 0) GOTO 0x3dd; Pop(1)

0x3dc: Stack[-4] = (int) 1
0x3dd: Push((int) 0)
0x3de: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x3df: IF (Stack[-1] == 0) GOTO 0x3e1; Pop(1)

0x3e0: Stack[-4] = (int) 0
0x3e1: Stack[-3] = (int) 256
0x3e2: Stack[-2] = (int) 64
0x3e3: Push("nerv_b")
0x3e4: Pop(0); Push(Stack[12 + StackPtr] - Stack[-4]);
0x3e5: Pop(1); Push(Stack[-1] - Stack[-15]);
0x3e6: Pop(0); Push(Stack[12 + StackPtr] - Stack[-5]);
0x3e7: Pop(1); Push(Stack[-1] - Stack[-16]);
0x3e8: Push((int) 43)
0x3e9: @ BlitClipped(Stack[-4], Stack[-3], Stack[-18], Stack[-2], Stack[-18], Stack[-7], Stack[-1], Stack[-8])
0x3ea: Pop(4)
0x3eb: Pop(0); Push(Stack[-3] - Stack[-2]);
0x3ec: Pop(1); Push(Stack[-1] * Stack[-10]);
0x3ed: Stack[-2] = Stack[-1] + Stack[-3]; Pop(1);
0x3ee: Push("nerv_r")
0x3ef: Pop(0); Push(Stack[12 + StackPtr] - Stack[-4]);
0x3f0: Pop(1); Push(Stack[-1] - Stack[-15]);
0x3f1: Pop(0); Push(Stack[12 + StackPtr] - Stack[-5]);
0x3f2: Pop(1); Push(Stack[-1] - Stack[-16]);
0x3f3: Push((int) 43)
0x3f4: @ BlitClipped(Stack[-4], Stack[-3], Stack[-18], Stack[-2], Stack[-18], Stack[-5], Stack[-1], Stack[-8])
0x3f5: Pop(4)
0x3f6: Pop(0); Push(Stack[12 + StackPtr] - Stack[-3]);
0x3f7: Pop(1); Push(Stack[-1] - Stack[-14]);
0x3f8: Pop(0); Push(Stack[12 + StackPtr] - Stack[-4]);
0x3f9: Pop(1); Push(Stack[-1] - Stack[-15]);
0x3fa: Push((int) 43)
0x3fb: @ BlitClipped(Stack[-13], Stack[-3], Stack[-17], Stack[-2], Stack[-17], Stack[-6], Stack[-1], Stack[-7])
0x3fc: Pop(3)
0x3fd: Push((int) 25)
0x3fe: Stack[-15] = Stack[-15] + Stack[-1]; Pop(1);
0x3ff: Push((int) 1)
0x400: Stack[-12] = Stack[-12] + Stack[-1]; Pop(1);
0x401: GOTO 0x36e

0x402: Return(); Pop(28)

0x403: PushEmpty(bool)
0x404: Stack[-1] = (bool) 0
0x405: PushEmpty(bool)
0x406: Call2 0x451

0x407: Pop(0)
0x408: IF (Stack[-1] == 0) GOTO 0x40c; Pop(1)

0x409: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == 0)
0x40a: IF (Stack[-1] == 0) GOTO 0x40c; Pop(1)

0x40b: Stack[-1] = (bool) 1
0x40c: IF (Stack[-1] == 0) GOTO 0x418; Pop(1)

0x40d: Push("cross")
0x40e: Push((int) 2)
0x40f: Pop(1); Push(Stack[12 + StackPtr] / Stack[-1]);
0x410: Push((int) 1)
0x411: Pop(2); Push(Stack[-2] - Stack[-1]);
0x412: Push((int) 2)
0x413: Pop(1); Push(Stack[13 + StackPtr] / Stack[-1]);
0x414: Push((int) 1)
0x415: Pop(2); Push(Stack[-2] - Stack[-1]);
0x416: @ Blit(Stack[-3], Stack[-2], Stack[-1])
0x417: Pop(3)
0x418: PushEmpty()
0x419: Call2 0x8d

0x41a: Pop(0)
0x41b: PushEmpty()
0x41c: Call2 0x13b

0x41d: Pop(0)
0x41e: PushEmpty()
0x41f: Call2 0x368

0x420: Pop(0)
0x421: PushEmpty()
0x422: Call2 0x341

0x423: Pop(0)
0x424: PushEmpty()
0x425: Call2 0x27e

0x426: Pop(0)
0x427: Return(); Pop(0)

0x428: PushEmpty(object, int, object, int)
0x429: Push("player")
0x42a: @ FindActor(Stack[-3], Stack[-1])
0x42b: Pop(1)
0x42c: Pop(0); Push((bool) Stack[-2] == 0)
0x42d: IF (Stack[-1] == 0) GOTO 0x430; Pop(1)

0x42e: Stack[-5] = (int) 0
0x42f: Return(); Pop(4)

0x430: Push("vcharge")
0x431: @@ GetProperty(Stack[-1], Stack[-2])
0x432: Pop(1)
0x433: Stack[-5] = Stack[-1]
0x434: Return(); Pop(4)

0x435: Stack[-2] = 0
0x436: PushEmpty(object, bool, object, bool)
0x437: Push("player")
0x438: @ FindActor(Stack[-3], Stack[-1])
0x439: Pop(1)
0x43a: Pop(0); Push((bool) Stack[-2] == 0)
0x43b: IF (Stack[-1] == 0) GOTO 0x43e; Pop(1)

0x43c: Stack[-5] = (bool) 0
0x43d: Return(); Pop(4)

0x43e: @@ IsVisirOn(Stack[-1])
0x43f: Pop(0)
0x440: Stack[-5] = Stack[-1]
0x441: Return(); Pop(4)

0x442: Stack[-2] = 0
0x443: PushEmpty(object, int, object, int)
0x444: Push("player")
0x445: @ FindActor(Stack[-3], Stack[-1])
0x446: Pop(1)
0x447: Pop(0); Push((bool) Stack[-2] == 0)
0x448: IF (Stack[-1] == 0) GOTO 0x44b; Pop(1)

0x449: Stack[-5] = (int) 0
0x44a: Return(); Pop(4)

0x44b: Push("visir")
0x44c: @@ GetProperty(Stack[-1], Stack[-2])
0x44d: Pop(1)
0x44e: Stack[-5] = Stack[-1]
0x44f: Return(); Pop(4)

0x450: Stack[-2] = 0
0x451: PushEmpty(object, bool, object, bool)
0x452: Push("player")
0x453: @ FindActor(Stack[-3], Stack[-1])
0x454: Pop(1)
0x455: Pop(0); Push((bool) Stack[-2] == 0)
0x456: IF (Stack[-1] == 0) GOTO 0x459; Pop(1)

0x457: Stack[-5] = (bool) 0
0x458: Return(); Pop(4)

0x459: @@ IsWeaponHolstered(Stack[-1])
0x45a: Pop(0)
0x45b: Stack[-5] = !Stack[-1]; Pop(0);
0x45c: Return(); Pop(4)

0x45d: Stack[-2] = 0
0x45e: PushEmpty(object, bool, int, object, bool, int)
0x45f: Push("player")
0x460: @ FindActor(Stack[-4], Stack[-1])
0x461: Pop(1)
0x462: Pop(0); Push((bool) Stack[-3] == 0)
0x463: IF (Stack[-1] == 0) GOTO 0x466; Pop(1)

0x464: Stack[-7] = (int) 0
0x465: Return(); Pop(6)

0x466: Push("walk_distance")
0x467: @@ HasProperty(Stack[-1], Stack[-3])
0x468: Pop(1)
0x469: Pop(0); Push((bool) Stack[-2] == 0)
0x46a: IF (Stack[-1] == 0) GOTO 0x46d; Pop(1)

0x46b: Stack[-7] = (int) 0
0x46c: Return(); Pop(6)

0x46d: Push("walk_distance")
0x46e: @@ GetProperty(Stack[-1], Stack[-2])
0x46f: Pop(1)
0x470: Push((float)1000.0)
0x471: Stack[-8] = Stack[-2] / Stack[-1]; Pop(1);
0x472: Return(); Pop(6)

0x473: Stack[-3] = 0
