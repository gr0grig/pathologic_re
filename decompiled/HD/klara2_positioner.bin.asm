GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	add
	sleep_end
	remove_klara
	klara_stay
	cleanup
	set
	get
	Klara scene: 
	pt_klara
	NPC_Klara
	k2system_klara2.xml
	day
	SetProperty
	ERROR: Klara2 scene was not found: 
	GetLocator
	Locator 
	 doesn't exist
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	GetCategory
	K2System
	lc_House6_04
	r2_house3_03
	house1_se_04r
	r7_house3_02_i2
	house5_15
	r5_house2_01
	k2system_klara_day

Import:
	CreateBoolVector (1 args)
	Hold (0 args)
	Trace (1 args)
	Trigger (2 args)
	RemoveActor (1 args)
	GetSceneByName (2 args)
	AddActor (6 args)
	GetGameTime (1 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)
	AddMessage (4 args)
	SetVariable (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (int, object, object, object) Params = 0
		EVENT_26 Op = 0x2c Vars = (string)


0x0: PushEmpty(int, int)
0x1: Stack[0 + Tasks[-1].StackPointer] = (int)-1
0x2: @ CreateBoolVector(Stack[-2])
0x3: Pop(0)
0x4: @ CreateBoolVector(Stack[-3])
0x5: Pop(0)
0x6: Stack[-1] = (int) 0
0x7: Push((int) 12)
0x8: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x9: IF (Stack[-1] == 0) GOTO 0x25; Pop(1)

0xa: Push((bool) 0)
0xb: @@ add(Stack[-1])
0xc: Pop(1)
0xd: PushEmpty(bool)
0xe: Stack[-1] = (bool) 1
0xf: Push((int) 1)
0x10: Pop(1); Push(Stack[-3] + Stack[-1]);
0x11: Push((int) 6)
0x12: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x13: IF (Stack[-1] == 0) GOTO 0x1a; Pop(1)

0x14: Push((int) 1)
0x15: Pop(1); Push(Stack[-3] + Stack[-1]);
0x16: Push((int) 12)
0x17: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x18: IF (Stack[-1] == 0) GOTO 0x1a; Pop(1)

0x19: Stack[-1] = (bool) 0
0x1a: IF (Stack[-1] == 0) GOTO 0x1f; Pop(1)

0x1b: Push((bool) 0)
0x1c: @@ add(Stack[-1])
0x1d: Pop(1)
0x1e: GOTO 0x22

0x1f: Push((bool) 1)
0x20: @@ add(Stack[-1])
0x21: Pop(1)
0x22: Push((int) 1)
0x23: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x24: GOTO 0x7

0x25: PushEmpty()
0x26: Call2 0xa8

0x27: Pop(0)
0x28: @ Hold()
0x29: Pop(0)
0x2a: GOTO 0x28

0x2b: Return(); Pop(2)

0x2c: PushEmpty()
0x2d: @ Trace(Stack[-1])
0x2e: Pop(0)
0x2f: Push("sleep_end")
0x30: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x31: IF (Stack[-1] == 0) GOTO 0x45; Pop(1)

0x32: PushEmpty(int)
0x33: PushEmpty(int)
0x34: Call2 0xd0

0x35: Stack[-2] = Stack[-1]
0x36: Pop(1)
0x37: Call2 0x64

0x38: Pop(1)
0x39: PushEmpty(int, float)
0x3a: PushEmpty(int)
0x3b: Call2 0xd0

0x3c: Stack[-3] = Stack[-1]
0x3d: Pop(1)
0x3e: PushEmpty(float)
0x3f: Call2 0xcb

0x40: Stack[-2] = Stack[-1]
0x41: Pop(1)
0x42: Call2 0x95

0x43: Pop(2)
0x44: GOTO 0x55

0x45: Push("remove_klara")
0x46: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x47: IF (Stack[-1] == 0) GOTO 0x4f; Pop(1)

0x48: PushEmpty()
0x49: Call2 0x56

0x4a: Pop(0)
0x4b: PushEmpty()
0x4c: Call2 0x129

0x4d: Pop(0)
0x4e: GOTO 0x55

0x4f: Push("klara_stay")
0x50: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x51: IF (Stack[-1] == 0) GOTO 0x55; Pop(1)

0x52: PushEmpty()
0x53: Call2 0x136

0x54: Pop(0)
0x55: Return(); Pop(0)

0x56: Push( Stack[1 + Tasks[-1].StackPointer] )
0x57: IF (Stack[-1] == 0) GOTO 0x5b; Pop(1)

0x58: Push("cleanup")
0x59: @ Trigger(Stack[-1], Stack[-1])
0x5a: Pop(1)
0x5b: Push((int) 1)
0x5c: Pop(1); Push(Stack[0 + StackPtr] - Stack[-1]);
0x5d: Push((bool) 0)
0x5e: @@ set(Stack[-2], Stack[-1])
0x5f: Pop(2)
0x60: PushEmpty()
0x61: Call2 0xa8

0x62: Pop(0)
0x63: Return(); Pop(0)

0x64: PushEmpty(bool, object, string, bool, object, string)
0x65: Push( Stack[1 + Tasks[-1].StackPointer] )
0x66: IF (Stack[-1] == 0) GOTO 0x69; Pop(1)

0x67: @ RemoveActor(Stack[-1])
0x68: Pop(0)
0x69: Push((int) 1)
0x6a: Pop(1); Push(Stack[-8] - Stack[-1]);
0x6b: @@ get(Stack[-4], Stack[-1])
0x6c: Pop(1)
0x6d: Pop(0); Push((bool) Stack[-3] == 0)
0x6e: IF (Stack[-1] == 0) GOTO 0x70; Pop(1)

0x6f: Return(); Pop(6)

0x70: PushEmpty(string, int)
0x71: Stack[-1] = Stack[-9]
0x72: Call2 0x17f

0x73: Stack[-3] = Stack[-2]
0x74: Pop(2)
0x75: Push("Klara scene: ")
0x76: Pop(1); Push(Stack[-1] + Stack[-2]);
0x77: @ Trace(Stack[-1])
0x78: Pop(1)
0x79: @ GetSceneByName(Stack[-2], Stack[-1])
0x7a: Pop(0)
0x7b: Push(Stack[-2])
0x7c: IF (Stack[-1] == 0) GOTO 0x8f; Pop(1)

0x7d: PushEmpty(object, object, string, string, string)
0x7e: Stack[-4] = Stack[-7]
0x7f: Push("pt_klara")
0x80: Stack[-4] = Stack[-1] + Stack[-13]; Pop(1);
0x81: Stack[-2] = "NPC_Klara"
0x82: Stack[-1] = "k2system_klara2.xml"
0x83: Call2 0xb9

0x84: Stack[1 + Tasks[-1].StackPointer] = Stack[-5]
0x85: Pop(5)
0x86: Push("day")
0x87: @@ SetProperty(Stack[-1], Stack[-8])
0x88: Pop(1)
0x89: PushEmpty(int)
0x8a: Stack[-1] = Stack[-8]
0x8b: Call2 0x1fa

0x8c: Pop(1)
0x8d: Stack[0 + Tasks[-1].StackPointer] = Stack[-7]
0x8e: GOTO 0x93

0x8f: Push("ERROR: Klara2 scene was not found: ")
0x90: Pop(1); Push(Stack[-1] + Stack[-2]);
0x91: @ Trace(Stack[-1])
0x92: Pop(1)
0x93: Return(); Pop(6)

0x94: Stack[-2] = 0
0x95: PushEmpty(bool, bool)
0x96: Push((int) 1)
0x97: Pop(1); Push(Stack[-5] - Stack[-1]);
0x98: @@ get(Stack[-2], Stack[-1])
0x99: Pop(1)
0x9a: Push(Stack[-1])
0x9b: IF (Stack[-1] == 0) GOTO 0x9d; Pop(1)

0x9c: Return(); Pop(2)

0x9d: Push((int) 1)
0x9e: Pop(1); Push(Stack[-5] - Stack[-1]);
0x9f: Push((bool) 1)
0xa0: @@ set(Stack[-2], Stack[-1])
0xa1: Pop(2)
0xa2: PushEmpty(int, float)
0xa3: Stack[-2] = Stack[-6]
0xa4: Stack[-1] = Stack[-5]
0xa5: Call2 0x1a5

0xa6: Pop(2)
0xa7: Return(); Pop(2)

0xa8: PushEmpty(int, bool, int, bool)
0xa9: Stack[-2] = (int) 0
0xaa: Push((int) 12)
0xab: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0xac: IF (Stack[-1] == 0) GOTO 0xb8; Pop(1)

0xad: @@ get(Stack[-1], Stack[-2])
0xae: Pop(0)
0xaf: PushEmpty(int, bool)
0xb0: Push((int) 1)
0xb1: Stack[-3] = Stack[-5] + Stack[-1]; Pop(1);
0xb2: Stack[-1] = Stack[-3]
0xb3: Call2 0x174

0xb4: Pop(2)
0xb5: Push((int) 1)
0xb6: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0xb7: GOTO 0xaa

0xb8: Return(); Pop(4)

0xb9: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0xba: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0xbb: Pop(0)
0xbc: Pop(0); Push((bool) Stack[-4] == 0)
0xbd: IF (Stack[-1] == 0) GOTO 0xc6; Pop(1)

0xbe: Push("Locator ")
0xbf: Pop(1); Push(Stack[-1] + Stack[-12]);
0xc0: Push(" doesn't exist")
0xc1: Pop(2); Push(Stack[-2] + Stack[-1]);
0xc2: @ Trace(Stack[-1])
0xc3: Pop(1)
0xc4: Stack[-1] = 0
0xc5: GOTO 0xc8

0xc6: @ AddActor(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0xc7: Pop(0)
0xc8: Stack[-13] = Stack[-1]
0xc9: Return(); Pop(8)

0xca: Stack[-1] = 0
0xcb: PushEmpty(float, float)
0xcc: @ GetGameTime(Stack[-1])
0xcd: Pop(0)
0xce: Stack[-3] = Stack[-1]
0xcf: Return(); Pop(2)

0xd0: PushEmpty(float, float)
0xd1: @ GetGameTime(Stack[-1])
0xd2: Pop(0)
0xd3: Push((int) 1)
0xd4: PushEmpty(int)
0xd5: Push((int) 24)
0xd6: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0xd7: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0xd8: Return(); Pop(2)

0xd9: PushEmpty()
0xda: PushEmpty(int, int, int, float)
0xdb: Stack[-3] = (int) 538512
0xdc: Stack[-2] = (int) 538511
0xdd: Stack[-1] = Stack[-5]
0xde: Call2 0x16c

0xdf: Stack[-6] = Stack[-4]
0xe0: Pop(4)
0xe1: Return(); Pop(0)

0xe2: PushEmpty()
0xe3: PushEmpty(int, int, int, float)
0xe4: Stack[-3] = (int) 538514
0xe5: Stack[-2] = (int) 538513
0xe6: Stack[-1] = Stack[-5]
0xe7: Call2 0x16c

0xe8: Stack[-6] = Stack[-4]
0xe9: Pop(4)
0xea: Return(); Pop(0)

0xeb: PushEmpty()
0xec: PushEmpty(int, int, int, float)
0xed: Stack[-3] = (int) 538504
0xee: Stack[-2] = (int) 538503
0xef: Stack[-1] = Stack[-5]
0xf0: Call2 0x16c

0xf1: Stack[-6] = Stack[-4]
0xf2: Pop(4)
0xf3: Return(); Pop(0)

0xf4: PushEmpty()
0xf5: PushEmpty(int, int, int, float)
0xf6: Stack[-3] = (int) 538506
0xf7: Stack[-2] = (int) 538505
0xf8: Stack[-1] = Stack[-5]
0xf9: Call2 0x16c

0xfa: Stack[-6] = Stack[-4]
0xfb: Pop(4)
0xfc: Return(); Pop(0)

0xfd: PushEmpty()
0xfe: PushEmpty(int, int, int, float)
0xff: Stack[-3] = (int) 538508
0x100: Stack[-2] = (int) 538507
0x101: Stack[-1] = Stack[-5]
0x102: Call2 0x16c

0x103: Stack[-6] = Stack[-4]
0x104: Pop(4)
0x105: Return(); Pop(0)

0x106: PushEmpty()
0x107: PushEmpty(int, int, int, float)
0x108: Stack[-3] = (int) 538510
0x109: Stack[-2] = (int) 538509
0x10a: Stack[-1] = Stack[-5]
0x10b: Call2 0x16c

0x10c: Stack[-6] = Stack[-4]
0x10d: Pop(4)
0x10e: Return(); Pop(0)

0x10f: PushEmpty(object, object)
0x110: Push((int) 723)
0x111: Push((int) 2)
0x112: Push((int) 539102)
0x113: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x114: Pop(3)
0x115: PushEmpty(bool, object, int)
0x116: Stack[-2] = Stack[-4]
0x117: Stack[-1] = (int) -1
0x118: Call2 0x150

0x119: Pop(3)
0x11a: Return(); Pop(2)

0x11b: Stack[-1] = 0
0x11c: PushEmpty(object, object)
0x11d: Push((int) 724)
0x11e: Push((int) 2)
0x11f: Push((int) 539103)
0x120: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x121: Pop(3)
0x122: PushEmpty(bool, object, int)
0x123: Stack[-2] = Stack[-4]
0x124: Stack[-1] = (int) 723
0x125: Call2 0x150

0x126: Pop(3)
0x127: Return(); Pop(2)

0x128: Stack[-1] = 0
0x129: PushEmpty(object, object)
0x12a: Push((int) 725)
0x12b: Push((int) 2)
0x12c: Push((int) 539104)
0x12d: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x12e: Pop(3)
0x12f: PushEmpty(bool, object, int)
0x130: Stack[-2] = Stack[-4]
0x131: Stack[-1] = (int) 723
0x132: Call2 0x150

0x133: Pop(3)
0x134: Return(); Pop(2)

0x135: Stack[-1] = 0
0x136: PushEmpty(object, object)
0x137: Push((int) 726)
0x138: Push((int) 2)
0x139: Push((int) 539105)
0x13a: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x13b: Pop(3)
0x13c: PushEmpty(bool, object, int)
0x13d: Stack[-2] = Stack[-4]
0x13e: Stack[-1] = (int) 723
0x13f: Call2 0x150

0x140: Pop(3)
0x141: Return(); Pop(2)

0x142: Stack[-1] = 0
0x143: PushEmpty(object, object)
0x144: @ GetDiaryRoot(Stack[-1])
0x145: Pop(0)
0x146: Pop(0); Push((bool) Stack[-1] == 0)
0x147: IF (Stack[-1] == 0) GOTO 0x14d; Pop(1)

0x148: Push("Can't retrieve diary root")
0x149: @ Trace(Stack[-1])
0x14a: Pop(1)
0x14b: Stack[-3] = (bool) 0
0x14c: Return(); Pop(2)

0x14d: Stack[-3] = Stack[-1]
0x14e: Return(); Pop(2)

0x14f: Stack[-1] = 0
0x150: PushEmpty(object, object, int, object, object, int)
0x151: PushEmpty(object)
0x152: Call2 0x143

0x153: Stack[-4] = Stack[-1]
0x154: Pop(1)
0x155: @@ Find(Stack[-7], Stack[-2])
0x156: Pop(0)
0x157: Pop(0); Push((bool) Stack[-2] == 0)
0x158: IF (Stack[-1] == 0) GOTO 0x15f; Pop(1)

0x159: Push("Can't find diary parent with id: ")
0x15a: Pop(1); Push(Stack[-1] + Stack[-8]);
0x15b: @ Trace(Stack[-1])
0x15c: Pop(1)
0x15d: Stack[-9] = (bool) 0
0x15e: Return(); Pop(6)

0x15f: @@ AddChild(Stack[-8])
0x160: Pop(0)
0x161: Push((int) 7)
0x162: @ SendWorldWndMessage(Stack[-1])
0x163: Pop(1)
0x164: @@ GetCategory(Stack[-1])
0x165: Pop(0)
0x166: @ SetDiarySection(Stack[-1])
0x167: Pop(0)
0x168: Stack[-9] = (bool) 0
0x169: Return(); Pop(6)

0x16a: Stack[-2] = 0
0x16b: Stack[-3] = 0
0x16c: PushEmpty(int, int)
0x16d: @ AddMessage(Stack[-5], Stack[-4], Stack[-3], Stack[-1])
0x16e: Pop(0)
0x16f: Push((int) 6)
0x170: @ SendWorldWndMessage(Stack[-1])
0x171: Pop(1)
0x172: Stack[-6] = Stack[-1]
0x173: Return(); Pop(2)

0x174: PushEmpty()
0x175: Push("K2System")
0x176: Pop(1); Push(Stack[-1] + Stack[-3]);
0x177: Push(Stack[-2])
0x178: IF (Stack[-1] == 0) GOTO 0x17b; Pop(1)

0x179: Push((int) 1)
0x17a: GOTO 0x17c

0x17b: Push((int) 0)
0x17c: @ SetVariable(Stack[-2], Stack[-1])
0x17d: Pop(2)
0x17e: Return(); Pop(0)

0x17f: PushEmpty()
0x180: Push((int) 6)
0x181: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x182: IF (Stack[-1] == 0) GOTO 0x186; Pop(1)

0x183: Stack[-2] = "lc_House6_04"
0x184: Return(); Pop(0)

0x185: GOTO 0x1a3

0x186: Push((int) 7)
0x187: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x188: IF (Stack[-1] == 0) GOTO 0x18c; Pop(1)

0x189: Stack[-2] = "r2_house3_03"
0x18a: Return(); Pop(0)

0x18b: GOTO 0x1a3

0x18c: Push((int) 8)
0x18d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x18e: IF (Stack[-1] == 0) GOTO 0x192; Pop(1)

0x18f: Stack[-2] = "house1_se_04r"
0x190: Return(); Pop(0)

0x191: GOTO 0x1a3

0x192: Push((int) 9)
0x193: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x194: IF (Stack[-1] == 0) GOTO 0x198; Pop(1)

0x195: Stack[-2] = "r7_house3_02_i2"
0x196: Return(); Pop(0)

0x197: GOTO 0x1a3

0x198: Push((int) 10)
0x199: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x19a: IF (Stack[-1] == 0) GOTO 0x19e; Pop(1)

0x19b: Stack[-2] = "house5_15"
0x19c: Return(); Pop(0)

0x19d: GOTO 0x1a3

0x19e: Push((int) 11)
0x19f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1a0: IF (Stack[-1] == 0) GOTO 0x1a3; Pop(1)

0x1a1: Stack[-2] = "r5_house2_01"
0x1a2: Return(); Pop(0)

0x1a3: Stack[-2] = ""
0x1a4: Return(); Pop(0)

0x1a5: PushEmpty()
0x1a6: Push((int) 6)
0x1a7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1a8: IF (Stack[-1] == 0) GOTO 0x1b4; Pop(1)

0x1a9: PushEmpty(int, float)
0x1aa: Stack[-1] = Stack[-3]
0x1ab: Call2 0xeb

0x1ac: Pop(2)
0x1ad: PushEmpty()
0x1ae: Call2 0x10f

0x1af: Pop(0)
0x1b0: PushEmpty()
0x1b1: Call2 0x11c

0x1b2: Pop(0)
0x1b3: GOTO 0x1f9

0x1b4: Push((int) 7)
0x1b5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1b6: IF (Stack[-1] == 0) GOTO 0x1c2; Pop(1)

0x1b7: PushEmpty(int, float)
0x1b8: Stack[-1] = Stack[-3]
0x1b9: Call2 0xf4

0x1ba: Pop(2)
0x1bb: PushEmpty()
0x1bc: Call2 0x10f

0x1bd: Pop(0)
0x1be: PushEmpty()
0x1bf: Call2 0x11c

0x1c0: Pop(0)
0x1c1: GOTO 0x1f9

0x1c2: Push((int) 8)
0x1c3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1c4: IF (Stack[-1] == 0) GOTO 0x1d0; Pop(1)

0x1c5: PushEmpty(int, float)
0x1c6: Stack[-1] = Stack[-3]
0x1c7: Call2 0xfd

0x1c8: Pop(2)
0x1c9: PushEmpty()
0x1ca: Call2 0x10f

0x1cb: Pop(0)
0x1cc: PushEmpty()
0x1cd: Call2 0x11c

0x1ce: Pop(0)
0x1cf: GOTO 0x1f9

0x1d0: Push((int) 9)
0x1d1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1d2: IF (Stack[-1] == 0) GOTO 0x1de; Pop(1)

0x1d3: PushEmpty(int, float)
0x1d4: Stack[-1] = Stack[-3]
0x1d5: Call2 0x106

0x1d6: Pop(2)
0x1d7: PushEmpty()
0x1d8: Call2 0x10f

0x1d9: Pop(0)
0x1da: PushEmpty()
0x1db: Call2 0x11c

0x1dc: Pop(0)
0x1dd: GOTO 0x1f9

0x1de: Push((int) 10)
0x1df: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1e0: IF (Stack[-1] == 0) GOTO 0x1ec; Pop(1)

0x1e1: PushEmpty(int, float)
0x1e2: Stack[-1] = Stack[-3]
0x1e3: Call2 0xd9

0x1e4: Pop(2)
0x1e5: PushEmpty()
0x1e6: Call2 0x10f

0x1e7: Pop(0)
0x1e8: PushEmpty()
0x1e9: Call2 0x11c

0x1ea: Pop(0)
0x1eb: GOTO 0x1f9

0x1ec: Push((int) 11)
0x1ed: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1ee: IF (Stack[-1] == 0) GOTO 0x1f9; Pop(1)

0x1ef: PushEmpty(int, float)
0x1f0: Stack[-1] = Stack[-3]
0x1f1: Call2 0xe2

0x1f2: Pop(2)
0x1f3: PushEmpty()
0x1f4: Call2 0x10f

0x1f5: Pop(0)
0x1f6: PushEmpty()
0x1f7: Call2 0x11c

0x1f8: Pop(0)
0x1f9: Return(); Pop(0)

0x1fa: PushEmpty()
0x1fb: Push("k2system_klara_day")
0x1fc: @ SetVariable(Stack[-1], Stack[-2])
0x1fd: Pop(1)
0x1fe: Return(); Pop(0)

