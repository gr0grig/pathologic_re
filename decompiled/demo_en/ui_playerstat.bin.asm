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
	GetScreenSize (2 args)
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
		EVENT_0 Op = 0x411 Vars = ()


0x0: PushEmpty(object, object)
0x1: EventDisable(201)
0x2: @ GetWindowSize(Stack[-12], Stack[-13])
0x3: Pop(0)
0x4: Stack[10 + Tasks[-1].StackPointer] = (int)-1
0x5: PushEmpty(bool)
0x6: Call2 0x444

0x7: Pop(0)
0x8: IF (Stack[-1] == 0) GOTO 0x16; Pop(1)

0x9: Push("visir.xml")
0xa: Push((bool) 0)
0xb: @ CreateWindow(Stack[-2], Stack[-1], Stack[-0])
0xc: Pop(2)
0xd: PushEmpty(int)
0xe: Call2 0x436

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
0x35: Call2 0x2ae

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
0x17c: Call2 0x436

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
0x1ec: Call2 0x300

0x1ed: Pop(2)
0x1ee: GOTO 0x227

0x1ef: Push((int) 12)
0x1f0: Pop(1); Push((bool) Stack[-15] == Stack[-1])
0x1f1: IF (Stack[-1] == 0) GOTO 0x1f8; Pop(1)

0x1f2: PushEmpty(string, bool)
0x1f3: Stack[-2] = "hunger"
0x1f4: Stack[-1] = (bool) 1
0x1f5: Call2 0x300

0x1f6: Pop(2)
0x1f7: GOTO 0x227

0x1f8: Push((int) 13)
0x1f9: Pop(1); Push((bool) Stack[-15] == Stack[-1])
0x1fa: IF (Stack[-1] == 0) GOTO 0x201; Pop(1)

0x1fb: PushEmpty(string, bool)
0x1fc: Stack[-2] = "immunity"
0x1fd: Stack[-1] = (bool) 1
0x1fe: Call2 0x300

0x1ff: Pop(2)
0x200: GOTO 0x227

0x201: Push((int) 14)
0x202: Pop(1); Push((bool) Stack[-15] == Stack[-1])
0x203: IF (Stack[-1] == 0) GOTO 0x20a; Pop(1)

0x204: PushEmpty(string, bool)
0x205: Stack[-2] = "disease"
0x206: Stack[-1] = (bool) 1
0x207: Call2 0x300

0x208: Pop(2)
0x209: GOTO 0x227

0x20a: Push((int) 15)
0x20b: Pop(1); Push((bool) Stack[-15] == Stack[-1])
0x20c: IF (Stack[-1] == 0) GOTO 0x213; Pop(1)

0x20d: PushEmpty(string, bool)
0x20e: Stack[-2] = "health"
0x20f: Stack[-1] = (bool) 1
0x210: Call2 0x300

0x211: Pop(2)
0x212: GOTO 0x227

0x213: Push((int) 16)
0x214: Pop(1); Push((bool) Stack[-15] == Stack[-1])
0x215: IF (Stack[-1] == 0) GOTO 0x21c; Pop(1)

0x216: PushEmpty(string, bool)
0x217: Stack[-2] = "repuatation"
0x218: Stack[-1] = (bool) 1
0x219: Call2 0x300

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
0x225: Call2 0x300

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
0x23a: Call2 0x339

0x23b: Pop(1)
0x23c: PushEmpty(float)
0x23d: Stack[-1] = Stack[-2]
0x23e: Call2 0x2a3

0x23f: Pop(1)
0x240: Return(); Pop(0)

0x241: PushEmpty(int, int, int, int)
0x242: PushEmpty(int)
0x243: Call2 0x451

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
0x259: Call2 0x436

0x25a: Pop(0)
0x25b: Push("charge")
0x25c: @ SendMessage(Stack[-2], Stack[-1])
0x25d: Pop(2)
0x25e: Return(); Pop(4)

0x25f: PushEmpty(string, int, int, int, int, string, int, int, int, int)
0x260: @ GetInvItemSprite(Stack[-5], Stack[-14])
0x261: Pop(0)
0x262: @ GetScreenSize(Stack[-4], Stack[-3])
0x263: Pop(0)
0x264: Push((int) 40)
0x265: Push((int) 60)
0x266: Pop(1); Push(Stack[-14] * Stack[-1]);
0x267: Stack[-4] = Stack[-2] + Stack[-1]; Pop(2);
0x268: Stack[-1] = (int) 40
0x269: Push((int) 40)
0x26a: Pop(1); Push(Stack[-5] - Stack[-1]);
0x26b: Push((int) 60)
0x26c: Pop(2); Push(Stack[-2] - Stack[-1]);
0x26d: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x26e: IF (Stack[-1] == 0) GOTO 0x275; Pop(1)

0x26f: Push((int) 80)
0x270: Pop(1); Push(Stack[-5] - Stack[-1]);
0x271: Stack[-3] = Stack[-3] - Stack[-1]; Pop(1);
0x272: Push((int) 60)
0x273: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x274: GOTO 0x269

0x275: Push("slot")
0x276: @ Blit(Stack[-1], Stack[-3], Stack[-2], Stack[-12])
0x277: Pop(1)
0x278: Push((int) 1)
0x279: Pop(1); Push(Stack[-3] + Stack[-1]);
0x27a: Push((int) 1)
0x27b: Pop(1); Push(Stack[-3] + Stack[-1]);
0x27c: @ Blit(Stack[-7], Stack[-2], Stack[-1], Stack[-13])
0x27d: Pop(2)
0x27e: Push((int) 1)
0x27f: Pop(1); Push((bool) Stack[-14] > Stack[-1])
0x280: IF (Stack[-1] == 0) GOTO 0x28b; Pop(1)

0x281: Push("default")
0x282: Push((int) 2)
0x283: Pop(1); Push(Stack[-4] + Stack[-1]);
0x284: Push((int) 35)
0x285: Pop(1); Push(Stack[-4] + Stack[-1]);
0x286: Push((float)1.0)
0x287: Push((float)1.0)
0x288: Push((float)1.0)
0x289: @ Print(Stack[-6], Stack[-5], Stack[-4], Stack[-19], Stack[-3], Stack[-2], Stack[-1], Stack[-17])
0x28a: Pop(6)
0x28b: Return(); Pop(10)

0x28c: PushEmpty(string, float, string, float)
0x28d: Push((int) -1)
0x28e: Pop(1); Push((bool) Stack[10 + Tasks[-1].StackPointer] == Stack[-1])
0x28f: IF (Stack[-1] == 0) GOTO 0x291; Pop(1)

0x290: Return(); Pop(4)

0x291: @ GetStringByID(Stack[-2], Stack[-10])
0x292: Pop(0)
0x293: Push((float)3.14)
0x294: Pop(1); Push(Stack[-1] * Stack[11 + StackPtr]);
0x295: Push((float)1.0)
0x296: Pop(2); Push(Stack[-2] / Stack[-1]);
0x297: Push((float)2.0)
0x298: Pop(2); Push(Stack[-2] / Stack[-1]);
0x299: Stack[-2] = Sin(Stack[-1]); Pop(1);
0x29a: Push("help")
0x29b: Push((int) 10)
0x29c: Push((int) 10)
0x29d: Push((float)1.0)
0x29e: Push((float)1.0)
0x29f: Push((float)1.0)
0x2a0: @ Print(Stack[-6], Stack[-5], Stack[-4], Stack[-8], Stack[-3], Stack[-2], Stack[-1], Stack[-7])
0x2a1: Pop(6)
0x2a2: Return(); Pop(4)

0x2a3: PushEmpty()
0x2a4: Push((int) -1)
0x2a5: Pop(1); Push((bool) Stack[10 + Tasks[-1].StackPointer] == Stack[-1])
0x2a6: IF (Stack[-1] == 0) GOTO 0x2a8; Pop(1)

0x2a7: Return(); Pop(0)

0x2a8: Stack[11 + Tasks[-1].StackPointer] = Stack[11 + Tasks[-1].StackPointer] - Stack[-1]; Pop(0);
0x2a9: Push((int) 0)
0x2aa: Pop(1); Push((bool) Stack[11 + Tasks[-1].StackPointer] <= Stack[-1])
0x2ab: IF (Stack[-1] == 0) GOTO 0x2ad; Pop(1)

0x2ac: Stack[10 + Tasks[-1].StackPointer] = (int)-1
0x2ad: Return(); Pop(0)

0x2ae: PushEmpty(object, int, int, string, float, object, int, int, string, float)
0x2af: @ CreateStringVector(Stack[-14])
0x2b0: Pop(0)
0x2b1: @ CreateFloatVector(Stack[-15])
0x2b2: Pop(0)
0x2b3: @ CreateFloatVector(Stack[-16])
0x2b4: Pop(0)
0x2b5: @ CreateFloatVector(Stack[-17])
0x2b6: Pop(0)
0x2b7: @ CreateFloatVector(Stack[-18])
0x2b8: Pop(0)
0x2b9: @ CreateBoolVector(Stack[-19])
0x2ba: Pop(0)
0x2bb: Push("player")
0x2bc: @ FindActor(Stack[-6], Stack[-1])
0x2bd: Pop(1)
0x2be: Push(Stack[-5])
0x2bf: IF (Stack[-1] == 0) GOTO 0x2fb; Pop(1)

0x2c0: Push("health")
0x2c1: @@ add(Stack[-1])
0x2c2: Pop(1)
0x2c3: Push((bool) 0)
0x2c4: @@ add(Stack[-1])
0x2c5: Pop(1)
0x2c6: Push("hunger")
0x2c7: @@ add(Stack[-1])
0x2c8: Pop(1)
0x2c9: Push((bool) 1)
0x2ca: @@ add(Stack[-1])
0x2cb: Pop(1)
0x2cc: Push("tiredness")
0x2cd: @@ add(Stack[-1])
0x2ce: Pop(1)
0x2cf: Push((bool) 1)
0x2d0: @@ add(Stack[-1])
0x2d1: Pop(1)
0x2d2: Push("immunity")
0x2d3: @@ add(Stack[-1])
0x2d4: Pop(1)
0x2d5: Push((bool) 0)
0x2d6: @@ add(Stack[-1])
0x2d7: Pop(1)
0x2d8: Push("disease")
0x2d9: @@ add(Stack[-1])
0x2da: Pop(1)
0x2db: Push((bool) 1)
0x2dc: @@ add(Stack[-1])
0x2dd: Pop(1)
0x2de: Push("reputation")
0x2df: @@ add(Stack[-1])
0x2e0: Pop(1)
0x2e1: Push((bool) 0)
0x2e2: @@ add(Stack[-1])
0x2e3: Pop(1)
0x2e4: @@ size(Stack[-4])
0x2e5: Pop(0)
0x2e6: Stack[-3] = (int) 0
0x2e7: Pop(0); Push((bool) Stack[-3] < Stack[-4])
0x2e8: IF (Stack[-1] == 0) GOTO 0x2fa; Pop(1)

0x2e9: @@ get(Stack[-2], Stack[-3])
0x2ea: Pop(0)
0x2eb: @@ GetProperty(Stack[-2], Stack[-1])
0x2ec: Pop(0)
0x2ed: @@ add(Stack[-1])
0x2ee: Pop(0)
0x2ef: @@ add(Stack[-1])
0x2f0: Pop(0)
0x2f1: Push((int) 0)
0x2f2: @@ add(Stack[-1])
0x2f3: Pop(1)
0x2f4: Push((int) 0)
0x2f5: @@ add(Stack[-1])
0x2f6: Pop(1)
0x2f7: Push((int) 1)
0x2f8: Stack[-4] = Stack[-4] + Stack[-1]; Pop(1);
0x2f9: GOTO 0x2e7

0x2fa: GOTO 0x2fe

0x2fb: Push("BAD PLAYER!")
0x2fc: @ Trace(Stack[-1])
0x2fd: Pop(1)
0x2fe: Return(); Pop(10)

0x2ff: Stack[-5] = 0
0x300: PushEmpty(object, int, int, string, float, float, float, float, object, int, int, string, float, float, float, float)
0x301: Push("player")
0x302: @ FindActor(Stack[-9], Stack[-1])
0x303: Pop(1)
0x304: Pop(0); Push((bool) Stack[-8] == 0)
0x305: IF (Stack[-1] == 0) GOTO 0x307; Pop(1)

0x306: Return(); Pop(16)

0x307: @@ size(Stack[-7])
0x308: Pop(0)
0x309: Stack[-6] = (int) 0
0x30a: Pop(0); Push((bool) Stack[-6] < Stack[-7])
0x30b: IF (Stack[-1] == 0) GOTO 0x337; Pop(1)

0x30c: @@ get(Stack[-5], Stack[-6])
0x30d: Pop(0)
0x30e: Pop(0); Push((bool) Stack[-5] == Stack[-18])
0x30f: IF (Stack[-1] == 0) GOTO 0x334; Pop(1)

0x310: @@ get(Stack[-4], Stack[-6])
0x311: Pop(0)
0x312: @@ GetProperty(Stack[-5], Stack[-3])
0x313: Pop(0)
0x314: Pop(0); Push((bool) Stack[-4] == Stack[-3])
0x315: IF (Stack[-1] == 0) GOTO 0x317; Pop(1)

0x316: Return(); Pop(16)

0x317: @@ set(Stack[-6], Stack[-3])
0x318: Pop(0)
0x319: Push(Stack[-17])
0x31a: IF (Stack[-1] == 0) GOTO 0x333; Pop(1)

0x31b: @@ get(Stack[-2], Stack[-6])
0x31c: Pop(0)
0x31d: Push((float)2.0)
0x31e: @@ set(Stack[-7], Stack[-1])
0x31f: Pop(1)
0x320: Push((float)10.0)
0x321: Pop(0); Push(Stack[-3] - Stack[-4]);
0x322: Stack[-3] = Stack[-2] * Stack[-1]; Pop(2);
0x323: Push((int) 0)
0x324: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x325: IF (Stack[-1] == 0) GOTO 0x328; Pop(1)

0x326: Push((float)-1.0)
0x327: Stack[-2] = Stack[-2] * Stack[-1]; Pop(1);
0x328: Push((float)0.2)
0x329: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x32a: IF (Stack[-1] == 0) GOTO 0x32d; Pop(1)

0x32b: Stack[-1] = (float) 0.2
0x32c: GOTO 0x331

0x32d: Push((float)1.0)
0x32e: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x32f: IF (Stack[-1] == 0) GOTO 0x331; Pop(1)

0x330: Stack[-1] = (float) 1.0
0x331: @@ set(Stack[-6], Stack[-1])
0x332: Pop(0)
0x333: GOTO 0x337

0x334: Push((int) 1)
0x335: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x336: GOTO 0x30a

0x337: Return(); Pop(16)

0x338: Stack[-8] = 0
0x339: PushEmpty(int, int, float, int, int, float)
0x33a: @@ size(Stack[-3])
0x33b: Pop(0)
0x33c: Stack[-2] = (int) 0
0x33d: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0x33e: IF (Stack[-1] == 0) GOTO 0x34e; Pop(1)

0x33f: @@ get(Stack[-1], Stack[-2])
0x340: Pop(0)
0x341: Push((int) 0)
0x342: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x343: IF (Stack[-1] == 0) GOTO 0x345; Pop(1)

0x344: Stack[-1] = Stack[-1] - Stack[-7]; Pop(0);
0x345: Push((int) 0)
0x346: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x347: IF (Stack[-1] == 0) GOTO 0x349; Pop(1)

0x348: Stack[-1] = (int) 0
0x349: @@ set(Stack[-2], Stack[-1])
0x34a: Pop(0)
0x34b: Push((int) 1)
0x34c: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x34d: GOTO 0x33d

0x34e: Return(); Pop(6)

0x34f: PushEmpty(float, float, float, int, float, float, float, float, int, float)
0x350: Return(); Pop(10)

0x351: PushEmpty(float)
0x352: Call2 0x46c

0x353: Stack[-6] = Stack[-1]
0x354: Pop(1)
0x355: Stack[-4] = (int) 59
0x356: Stack[-3] = (int) 400
0x357: Push((int) 800)
0x358: Pop(1); Push((bool) Stack[12 + Tasks[-1].StackPointer] == Stack[-1])
0x359: IF (Stack[-1] == 0) GOTO 0x35d; Pop(1)

0x35a: Stack[-4] = (int) 59
0x35b: Stack[-3] = (int) 400
0x35c: GOTO 0x368

0x35d: Push((int) 1024)
0x35e: Pop(1); Push((bool) Stack[12 + Tasks[-1].StackPointer] == Stack[-1])
0x35f: IF (Stack[-1] == 0) GOTO 0x363; Pop(1)

0x360: Stack[-4] = (int) 75
0x361: Stack[-3] = (int) 512
0x362: GOTO 0x368

0x363: Push((int) 1280)
0x364: Pop(1); Push((bool) Stack[12 + Tasks[-1].StackPointer] == Stack[-1])
0x365: IF (Stack[-1] == 0) GOTO 0x368; Pop(1)

0x366: Stack[-4] = (int) 99
0x367: Stack[-3] = (int) 680
0x368: Pop(0); Push(Stack[13 + StackPtr] - Stack[-3]);
0x369: Push((int) 2)
0x36a: Stack[-4] = Stack[-2] / Stack[-1]; Pop(2);
0x36b: Push((int) 1)
0x36c: Pop(1); Push(Stack[-1] - Stack[-6]);
0x36d: Stack[-2] = Stack[-4] * Stack[-1]; Pop(1);
0x36e: Push("nerv_v")
0x36f: Push((int) 0)
0x370: Push((int) 0)
0x371: Pop(0); Push(Stack[-5] + Stack[-4]);
0x372: Pop(0); Push(Stack[-7] - Stack[-5]);
0x373: @ BlitClipped(Stack[-5], Stack[-4], Stack[-7], Stack[-3], Stack[-2], Stack[-9], Stack[-1])
0x374: Pop(5)
0x375: Return(); Pop(10)

0x376: PushEmpty(float, float, int, int, string, float, float, float, bool, float, float, float, float, float, float, float, int, int, string, float, float, float, bool, float, float, float, float, float)
0x377: Stack[-14] = (int) 20
0x378: Stack[-13] = (int) 20
0x379: @@ size(Stack[-12])
0x37a: Pop(0)
0x37b: Stack[-11] = (int) 0
0x37c: Pop(0); Push((bool) Stack[-11] < Stack[-12])
0x37d: IF (Stack[-1] == 0) GOTO 0x410; Pop(1)

0x37e: @@ get(Stack[-10], Stack[-11])
0x37f: Pop(0)
0x380: @@ get(Stack[-9], Stack[-11])
0x381: Pop(0)
0x382: @@ get(Stack[-8], Stack[-11])
0x383: Pop(0)
0x384: @@ get(Stack[-7], Stack[-11])
0x385: Pop(0)
0x386: @@ get(Stack[-6], Stack[-11])
0x387: Pop(0)
0x388: Push("health")
0x389: Pop(1); Push((bool) Stack[-11] == Stack[-1])
0x38a: IF (Stack[-1] == 0) GOTO 0x396; Pop(1)

0x38b: Push((float)0.33)
0x38c: Pop(1); Push((bool) Stack[-10] <= Stack[-1])
0x38d: IF (Stack[-1] == 0) GOTO 0x390; Pop(1)

0x38e: Stack[-5] = (int) 1
0x38f: GOTO 0x395

0x390: Push((int) 0)
0x391: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x392: IF (Stack[-1] == 0) GOTO 0x394; Pop(1)

0x393: GOTO 0x40d

0x394: Stack[-5] = (float) 0.2
0x395: GOTO 0x3db

0x396: Push("immunity")
0x397: Pop(1); Push((bool) Stack[-11] == Stack[-1])
0x398: IF (Stack[-1] == 0) GOTO 0x3a4; Pop(1)

0x399: Push((float)0.5)
0x39a: Pop(1); Push((bool) Stack[-10] < Stack[-1])
0x39b: IF (Stack[-1] == 0) GOTO 0x39e; Pop(1)

0x39c: Stack[-5] = (int) 1
0x39d: GOTO 0x3a3

0x39e: Push((int) 0)
0x39f: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x3a0: IF (Stack[-1] == 0) GOTO 0x3a2; Pop(1)

0x3a1: GOTO 0x40d

0x3a2: Stack[-5] = (float) 0.2
0x3a3: GOTO 0x3db

0x3a4: Push("tiredness")
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

0x3af: GOTO 0x40d

0x3b0: Stack[-5] = (float) 0.2
0x3b1: GOTO 0x3db

0x3b2: Push("hunger")
0x3b3: Pop(1); Push((bool) Stack[-11] == Stack[-1])
0x3b4: IF (Stack[-1] == 0) GOTO 0x3c0; Pop(1)

0x3b5: Push((float)0.66)
0x3b6: Pop(1); Push((bool) Stack[-10] >= Stack[-1])
0x3b7: IF (Stack[-1] == 0) GOTO 0x3ba; Pop(1)

0x3b8: Stack[-5] = (int) 1
0x3b9: GOTO 0x3bf

0x3ba: Push((int) 0)
0x3bb: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x3bc: IF (Stack[-1] == 0) GOTO 0x3be; Pop(1)

0x3bd: GOTO 0x40d

0x3be: Stack[-5] = (float) 0.2
0x3bf: GOTO 0x3db

0x3c0: Push("reputation")
0x3c1: Pop(1); Push((bool) Stack[-11] == Stack[-1])
0x3c2: IF (Stack[-1] == 0) GOTO 0x3ce; Pop(1)

0x3c3: Push((float)0.66)
0x3c4: Pop(1); Push((bool) Stack[-10] <= Stack[-1])
0x3c5: IF (Stack[-1] == 0) GOTO 0x3c8; Pop(1)

0x3c6: Stack[-5] = (int) 1
0x3c7: GOTO 0x3cd

0x3c8: Push((int) 0)
0x3c9: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x3ca: IF (Stack[-1] == 0) GOTO 0x3cc; Pop(1)

0x3cb: GOTO 0x40d

0x3cc: Stack[-5] = (float) 0.2
0x3cd: GOTO 0x3db

0x3ce: Push("disease")
0x3cf: Pop(1); Push((bool) Stack[-11] == Stack[-1])
0x3d0: IF (Stack[-1] == 0) GOTO 0x3db; Pop(1)

0x3d1: Push((float)0.33)
0x3d2: Pop(1); Push((bool) Stack[-10] >= Stack[-1])
0x3d3: IF (Stack[-1] == 0) GOTO 0x3d6; Pop(1)

0x3d4: Stack[-5] = (int) 1
0x3d5: GOTO 0x3db

0x3d6: Push((int) 0)
0x3d7: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x3d8: IF (Stack[-1] == 0) GOTO 0x3da; Pop(1)

0x3d9: GOTO 0x40d

0x3da: Stack[-5] = (float) 0.2
0x3db: Push((int) 0)
0x3dc: Pop(1); Push((bool) Stack[-8] > Stack[-1])
0x3dd: IF (Stack[-1] == 0) GOTO 0x3e6; Pop(1)

0x3de: Push((float)2.0)
0x3df: Pop(1); Push(Stack[-8] / Stack[-1]);
0x3e0: Push((float)3.1415)
0x3e1: Pop(2); Push(Stack[-2] * Stack[-1]);
0x3e2: Push((int) 2)
0x3e3: Pop(2); Push(Stack[-2] / Stack[-1]);
0x3e4: Stack[-5] = Sin(Stack[-1]); Pop(1);
0x3e5: GOTO 0x3e7

0x3e6: Stack[-4] = Stack[-5]
0x3e7: Push((int) 1)
0x3e8: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x3e9: IF (Stack[-1] == 0) GOTO 0x3eb; Pop(1)

0x3ea: Stack[-4] = (int) 1
0x3eb: Push((int) 0)
0x3ec: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x3ed: IF (Stack[-1] == 0) GOTO 0x3ef; Pop(1)

0x3ee: Stack[-4] = (int) 0
0x3ef: Stack[-3] = (int) 256
0x3f0: Stack[-2] = (int) 64
0x3f1: Push("nerv_b")
0x3f2: Pop(0); Push(Stack[12 + StackPtr] - Stack[-4]);
0x3f3: Pop(1); Push(Stack[-1] - Stack[-15]);
0x3f4: Pop(0); Push(Stack[12 + StackPtr] - Stack[-5]);
0x3f5: Pop(1); Push(Stack[-1] - Stack[-16]);
0x3f6: Push((int) 43)
0x3f7: @ BlitClipped(Stack[-4], Stack[-3], Stack[-18], Stack[-2], Stack[-18], Stack[-7], Stack[-1], Stack[-8])
0x3f8: Pop(4)
0x3f9: Pop(0); Push(Stack[-3] - Stack[-2]);
0x3fa: Pop(1); Push(Stack[-1] * Stack[-10]);
0x3fb: Stack[-2] = Stack[-1] + Stack[-3]; Pop(1);
0x3fc: Push("nerv_r")
0x3fd: Pop(0); Push(Stack[12 + StackPtr] - Stack[-4]);
0x3fe: Pop(1); Push(Stack[-1] - Stack[-15]);
0x3ff: Pop(0); Push(Stack[12 + StackPtr] - Stack[-5]);
0x400: Pop(1); Push(Stack[-1] - Stack[-16]);
0x401: Push((int) 43)
0x402: @ BlitClipped(Stack[-4], Stack[-3], Stack[-18], Stack[-2], Stack[-18], Stack[-5], Stack[-1], Stack[-8])
0x403: Pop(4)
0x404: Pop(0); Push(Stack[12 + StackPtr] - Stack[-3]);
0x405: Pop(1); Push(Stack[-1] - Stack[-14]);
0x406: Pop(0); Push(Stack[12 + StackPtr] - Stack[-4]);
0x407: Pop(1); Push(Stack[-1] - Stack[-15]);
0x408: Push((int) 43)
0x409: @ BlitClipped(Stack[-13], Stack[-3], Stack[-17], Stack[-2], Stack[-17], Stack[-6], Stack[-1], Stack[-7])
0x40a: Pop(3)
0x40b: Push((int) 25)
0x40c: Stack[-15] = Stack[-15] + Stack[-1]; Pop(1);
0x40d: Push((int) 1)
0x40e: Stack[-12] = Stack[-12] + Stack[-1]; Pop(1);
0x40f: GOTO 0x37c

0x410: Return(); Pop(28)

0x411: PushEmpty(bool)
0x412: Stack[-1] = (bool) 0
0x413: PushEmpty(bool)
0x414: Call2 0x45f

0x415: Pop(0)
0x416: IF (Stack[-1] == 0) GOTO 0x41a; Pop(1)

0x417: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == 0)
0x418: IF (Stack[-1] == 0) GOTO 0x41a; Pop(1)

0x419: Stack[-1] = (bool) 1
0x41a: IF (Stack[-1] == 0) GOTO 0x426; Pop(1)

0x41b: Push("cross")
0x41c: Push((int) 2)
0x41d: Pop(1); Push(Stack[12 + StackPtr] / Stack[-1]);
0x41e: Push((int) 1)
0x41f: Pop(2); Push(Stack[-2] - Stack[-1]);
0x420: Push((int) 2)
0x421: Pop(1); Push(Stack[13 + StackPtr] / Stack[-1]);
0x422: Push((int) 1)
0x423: Pop(2); Push(Stack[-2] - Stack[-1]);
0x424: @ Blit(Stack[-3], Stack[-2], Stack[-1])
0x425: Pop(3)
0x426: PushEmpty()
0x427: Call2 0x8d

0x428: Pop(0)
0x429: PushEmpty()
0x42a: Call2 0x13b

0x42b: Pop(0)
0x42c: PushEmpty()
0x42d: Call2 0x376

0x42e: Pop(0)
0x42f: PushEmpty()
0x430: Call2 0x34f

0x431: Pop(0)
0x432: PushEmpty()
0x433: Call2 0x28c

0x434: Pop(0)
0x435: Return(); Pop(0)

0x436: PushEmpty(object, int, object, int)
0x437: Push("player")
0x438: @ FindActor(Stack[-3], Stack[-1])
0x439: Pop(1)
0x43a: Pop(0); Push((bool) Stack[-2] == 0)
0x43b: IF (Stack[-1] == 0) GOTO 0x43e; Pop(1)

0x43c: Stack[-5] = (int) 0
0x43d: Return(); Pop(4)

0x43e: Push("vcharge")
0x43f: @@ GetProperty(Stack[-1], Stack[-2])
0x440: Pop(1)
0x441: Stack[-5] = Stack[-1]
0x442: Return(); Pop(4)

0x443: Stack[-2] = 0
0x444: PushEmpty(object, bool, object, bool)
0x445: Push("player")
0x446: @ FindActor(Stack[-3], Stack[-1])
0x447: Pop(1)
0x448: Pop(0); Push((bool) Stack[-2] == 0)
0x449: IF (Stack[-1] == 0) GOTO 0x44c; Pop(1)

0x44a: Stack[-5] = (bool) 0
0x44b: Return(); Pop(4)

0x44c: @@ IsVisirOn(Stack[-1])
0x44d: Pop(0)
0x44e: Stack[-5] = Stack[-1]
0x44f: Return(); Pop(4)

0x450: Stack[-2] = 0
0x451: PushEmpty(object, int, object, int)
0x452: Push("player")
0x453: @ FindActor(Stack[-3], Stack[-1])
0x454: Pop(1)
0x455: Pop(0); Push((bool) Stack[-2] == 0)
0x456: IF (Stack[-1] == 0) GOTO 0x459; Pop(1)

0x457: Stack[-5] = (int) 0
0x458: Return(); Pop(4)

0x459: Push("visir")
0x45a: @@ GetProperty(Stack[-1], Stack[-2])
0x45b: Pop(1)
0x45c: Stack[-5] = Stack[-1]
0x45d: Return(); Pop(4)

0x45e: Stack[-2] = 0
0x45f: PushEmpty(object, bool, object, bool)
0x460: Push("player")
0x461: @ FindActor(Stack[-3], Stack[-1])
0x462: Pop(1)
0x463: Pop(0); Push((bool) Stack[-2] == 0)
0x464: IF (Stack[-1] == 0) GOTO 0x467; Pop(1)

0x465: Stack[-5] = (bool) 0
0x466: Return(); Pop(4)

0x467: @@ IsWeaponHolstered(Stack[-1])
0x468: Pop(0)
0x469: Stack[-5] = !Stack[-1]; Pop(0);
0x46a: Return(); Pop(4)

0x46b: Stack[-2] = 0
0x46c: PushEmpty(object, bool, int, object, bool, int)
0x46d: Push("player")
0x46e: @ FindActor(Stack[-4], Stack[-1])
0x46f: Pop(1)
0x470: Pop(0); Push((bool) Stack[-3] == 0)
0x471: IF (Stack[-1] == 0) GOTO 0x474; Pop(1)

0x472: Stack[-7] = (int) 0
0x473: Return(); Pop(6)

0x474: Push("walk_distance")
0x475: @@ HasProperty(Stack[-1], Stack[-3])
0x476: Pop(1)
0x477: Pop(0); Push((bool) Stack[-2] == 0)
0x478: IF (Stack[-1] == 0) GOTO 0x47b; Pop(1)

0x479: Stack[-7] = (int) 0
0x47a: Return(); Pop(6)

0x47b: Push("walk_distance")
0x47c: @@ GetProperty(Stack[-1], Stack[-2])
0x47d: Pop(1)
0x47e: Push((float)1000.0)
0x47f: Stack[-8] = Stack[-2] / Stack[-1]; Pop(1);
0x480: Return(); Pop(6)

0x481: Stack[-3] = 0
