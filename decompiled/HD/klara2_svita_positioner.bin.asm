GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	place_svita
	wonder
	lightning
	bad_wonder
	pt_k2system
	_albinos
	pers_rat
	k2system_rat.xml
	_patrol
	pers_rat_big
	k2system_rat_big.xml
	_nude
	_dohodyaga1
	_dohodyaga2
	pers_albinos
	_albinos.xml
	add
	pers_patrool
	_patrol.xml
	pers_nudegirl
	_nude.xml
	pers_dohodyaga
	_dohodyaga1.xml
	_dohodyaga2.xml
	clear
	GetLocator
	Locator 
	 doesn't exist
	AddStationaryActor
	size
	get
	Remove
	GetActor
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	GetCategory
	K2SystemSvitaRemoved

Import:
	SetTimeEvent (2 args)
	CreateObjectVector (1 args)
	Hold (0 args)
	Trace (1 args)
	TriggerWorld (1 args)
	GetMainOutdoorScene (1 args)
	rand (1 args)
	AddActor (6 args)
	Trigger (2 args)
	GetGameTime (1 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)
	SetVariable (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object, int) Params = 0
		EVENT_26 Op = 0x17 Vars = (string)
		EVENT_9 Op = 0xa5 Vars = (int, float)


0x0: PushEmpty(int, int)
0x1: Stack[1 + Tasks[-1].StackPointer] = (int)-1
0x2: Stack[-1] = (int) 0
0x3: Push((int) 6)
0x4: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x5: IF (Stack[-1] == 0) GOTO 0x11; Pop(1)

0x6: Push((int) 6)
0x7: Pop(1); Push(Stack[-1] + Stack[-2]);
0x8: Push((int) 6)
0x9: Pop(1); Push(Stack[-3] + Stack[-1]);
0xa: Push((int) 24)
0xb: Pop(2); Push(Stack[-2] * Stack[-1]);
0xc: @ SetTimeEvent(Stack[-2], Stack[-1])
0xd: Pop(2)
0xe: Push((int) 1)
0xf: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x10: GOTO 0x3

0x11: @ CreateObjectVector(Stack[-0])
0x12: Pop(0)
0x13: @ Hold()
0x14: Pop(0)
0x15: GOTO 0x13

0x16: Return(); Pop(2)

0x17: PushEmpty(int, object, int, object)
0x18: @ Trace(Stack[-5])
0x19: Pop(0)
0x1a: Push("place_svita")
0x1b: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x1c: IF (Stack[-1] == 0) GOTO 0x25; Pop(1)

0x1d: PushEmpty(int)
0x1e: PushEmpty(int)
0x1f: Call2 0x177

0x20: Stack[-2] = Stack[-1]
0x21: Pop(1)
0x22: Call2 0xac

0x23: Pop(1)
0x24: GOTO 0xa4

0x25: Push("wonder")
0x26: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x27: IF (Stack[-1] == 0) GOTO 0x3d; Pop(1)

0x28: Push("lightning")
0x29: @ TriggerWorld(Stack[-1])
0x2a: Pop(1)
0x2b: PushEmpty()
0x2c: Call2 0x114

0x2d: Pop(0)
0x2e: PushEmpty()
0x2f: Call2 0x11a

0x30: Pop(0)
0x31: Push((int) -1)
0x32: Pop(1); Push((bool) Stack[1 + Tasks[-1].StackPointer] != Stack[-1])
0x33: IF (Stack[-1] == 0) GOTO 0x3c; Pop(1)

0x34: PushEmpty(int, bool)
0x35: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x36: Stack[-1] = (bool) 1
0x37: Call2 0x1c3

0x38: Pop(2)
0x39: PushEmpty()
0x3a: Call2 0x180

0x3b: Pop(0)
0x3c: GOTO 0xa4

0x3d: Push("bad_wonder")
0x3e: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x3f: IF (Stack[-1] == 0) GOTO 0xa4; Pop(1)

0x40: PushEmpty(int)
0x41: Call2 0x177

0x42: Stack[-3] = Stack[-1]
0x43: Pop(1)
0x44: @ GetMainOutdoorScene(Stack[-1])
0x45: Pop(0)
0x46: PushEmpty(object, object, string, string, string)
0x47: Stack[-4] = Stack[-6]
0x48: Push("pt_k2system")
0x49: PushEmpty(int, int)
0x4a: Stack[-1] = Stack[-10]
0x4b: Call2 0x1ce

0x4c: Pop(1)
0x4d: Pop(2); Push(Stack[-2] + Stack[-1]);
0x4e: Push("_albinos")
0x4f: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x50: Stack[-2] = "pers_rat"
0x51: Stack[-1] = "k2system_rat.xml"
0x52: Call2 0x126

0x53: Pop(5)
0x54: PushEmpty(bool, float)
0x55: Stack[-1] = (float) 0.5
0x56: Call2 0x121

0x57: Pop(1)
0x58: IF (Stack[-1] == 0) GOTO 0x67; Pop(1)

0x59: PushEmpty(object, object, string, string, string)
0x5a: Stack[-4] = Stack[-6]
0x5b: Push("pt_k2system")
0x5c: PushEmpty(int, int)
0x5d: Stack[-1] = Stack[-10]
0x5e: Call2 0x1ce

0x5f: Pop(1)
0x60: Pop(2); Push(Stack[-2] + Stack[-1]);
0x61: Push("_patrol")
0x62: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x63: Stack[-2] = "pers_rat_big"
0x64: Stack[-1] = "k2system_rat_big.xml"
0x65: Call2 0x126

0x66: Pop(5)
0x67: PushEmpty(bool, float)
0x68: Stack[-1] = (float) 0.5
0x69: Call2 0x121

0x6a: Pop(1)
0x6b: IF (Stack[-1] == 0) GOTO 0x7a; Pop(1)

0x6c: PushEmpty(object, object, string, string, string)
0x6d: Stack[-4] = Stack[-6]
0x6e: Push("pt_k2system")
0x6f: PushEmpty(int, int)
0x70: Stack[-1] = Stack[-10]
0x71: Call2 0x1ce

0x72: Pop(1)
0x73: Pop(2); Push(Stack[-2] + Stack[-1]);
0x74: Push("_nude")
0x75: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x76: Stack[-2] = "pers_rat"
0x77: Stack[-1] = "k2system_rat.xml"
0x78: Call2 0x126

0x79: Pop(5)
0x7a: PushEmpty(bool, float)
0x7b: Stack[-1] = (float) 0.5
0x7c: Call2 0x121

0x7d: Pop(1)
0x7e: IF (Stack[-1] == 0) GOTO 0x8d; Pop(1)

0x7f: PushEmpty(object, object, string, string, string)
0x80: Stack[-4] = Stack[-6]
0x81: Push("pt_k2system")
0x82: PushEmpty(int, int)
0x83: Stack[-1] = Stack[-10]
0x84: Call2 0x1ce

0x85: Pop(1)
0x86: Pop(2); Push(Stack[-2] + Stack[-1]);
0x87: Push("_dohodyaga1")
0x88: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x89: Stack[-2] = "pers_rat_big"
0x8a: Stack[-1] = "k2system_rat_big.xml"
0x8b: Call2 0x126

0x8c: Pop(5)
0x8d: PushEmpty(bool, float)
0x8e: Stack[-1] = (float) 0.5
0x8f: Call2 0x121

0x90: Pop(1)
0x91: IF (Stack[-1] == 0) GOTO 0xa0; Pop(1)

0x92: PushEmpty(object, object, string, string, string)
0x93: Stack[-4] = Stack[-6]
0x94: Push("pt_k2system")
0x95: PushEmpty(int, int)
0x96: Stack[-1] = Stack[-10]
0x97: Call2 0x1ce

0x98: Pop(1)
0x99: Pop(2); Push(Stack[-2] + Stack[-1]);
0x9a: Push("_dohodyaga2")
0x9b: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x9c: Stack[-2] = "pers_rat"
0x9d: Stack[-1] = "k2system_rat.xml"
0x9e: Call2 0x126

0x9f: Pop(5)
0xa0: PushEmpty()
0xa1: Call2 0x18d

0xa2: Pop(0)
0xa3: Stack[-1] = 0
0xa4: Return(); Pop(4)

0xa5: PushEmpty()
0xa6: Pop(0); Push((bool) Stack[-2] == Stack[1 + Tasks[-1].StackPointer])
0xa7: IF (Stack[-1] == 0) GOTO 0xab; Pop(1)

0xa8: PushEmpty()
0xa9: Call2 0x11a

0xaa: Pop(0)
0xab: Return(); Pop(0)

0xac: PushEmpty(object, object)
0xad: @ GetMainOutdoorScene(Stack[-1])
0xae: Pop(0)
0xaf: PushEmpty()
0xb0: Call2 0x11a

0xb1: Pop(0)
0xb2: Stack[1 + Tasks[-1].StackPointer] = Stack[-3]
0xb3: PushEmpty(object, object, string, string, string)
0xb4: Stack[-4] = Stack[-6]
0xb5: Push("pt_k2system")
0xb6: PushEmpty(int, int)
0xb7: Stack[-1] = Stack[-11]
0xb8: Call2 0x1ce

0xb9: Pop(1)
0xba: Pop(2); Push(Stack[-2] + Stack[-1]);
0xbb: Push("_albinos")
0xbc: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0xbd: Stack[-2] = "pers_albinos"
0xbe: Push("k2system")
0xbf: Pop(1); Push(Stack[-1] + Stack[-9]);
0xc0: Push("_albinos.xml")
0xc1: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0xc2: Call2 0x138

0xc3: Pop(4)
0xc4: @@ add(Stack[-1])
0xc5: Pop(1)
0xc6: PushEmpty(object, object, string, string, string)
0xc7: Stack[-4] = Stack[-6]
0xc8: Push("pt_k2system")
0xc9: PushEmpty(int, int)
0xca: Stack[-1] = Stack[-11]
0xcb: Call2 0x1ce

0xcc: Pop(1)
0xcd: Pop(2); Push(Stack[-2] + Stack[-1]);
0xce: Push("_patrol")
0xcf: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0xd0: Stack[-2] = "pers_patrool"
0xd1: Push("k2system")
0xd2: Pop(1); Push(Stack[-1] + Stack[-9]);
0xd3: Push("_patrol.xml")
0xd4: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0xd5: Call2 0x138

0xd6: Pop(4)
0xd7: @@ add(Stack[-1])
0xd8: Pop(1)
0xd9: PushEmpty(object, object, string, string, string)
0xda: Stack[-4] = Stack[-6]
0xdb: Push("pt_k2system")
0xdc: PushEmpty(int, int)
0xdd: Stack[-1] = Stack[-11]
0xde: Call2 0x1ce

0xdf: Pop(1)
0xe0: Pop(2); Push(Stack[-2] + Stack[-1]);
0xe1: Push("_nude")
0xe2: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0xe3: Stack[-2] = "pers_nudegirl"
0xe4: Push("k2system")
0xe5: Pop(1); Push(Stack[-1] + Stack[-9]);
0xe6: Push("_nude.xml")
0xe7: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0xe8: Call2 0x138

0xe9: Pop(4)
0xea: @@ add(Stack[-1])
0xeb: Pop(1)
0xec: PushEmpty(object, object, string, string, string)
0xed: Stack[-4] = Stack[-6]
0xee: Push("pt_k2system")
0xef: PushEmpty(int, int)
0xf0: Stack[-1] = Stack[-11]
0xf1: Call2 0x1ce

0xf2: Pop(1)
0xf3: Pop(2); Push(Stack[-2] + Stack[-1]);
0xf4: Push("_dohodyaga1")
0xf5: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0xf6: Stack[-2] = "pers_dohodyaga"
0xf7: Push("k2system")
0xf8: Pop(1); Push(Stack[-1] + Stack[-9]);
0xf9: Push("_dohodyaga1.xml")
0xfa: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0xfb: Call2 0x138

0xfc: Pop(4)
0xfd: @@ add(Stack[-1])
0xfe: Pop(1)
0xff: PushEmpty(object, object, string, string, string)
0x100: Stack[-4] = Stack[-6]
0x101: Push("pt_k2system")
0x102: PushEmpty(int, int)
0x103: Stack[-1] = Stack[-11]
0x104: Call2 0x1ce

0x105: Pop(1)
0x106: Pop(2); Push(Stack[-2] + Stack[-1]);
0x107: Push("_dohodyaga2")
0x108: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x109: Stack[-2] = "pers_dohodyaga"
0x10a: Push("k2system")
0x10b: Pop(1); Push(Stack[-1] + Stack[-9]);
0x10c: Push("_dohodyaga2.xml")
0x10d: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x10e: Call2 0x138

0x10f: Pop(4)
0x110: @@ add(Stack[-1])
0x111: Pop(1)
0x112: Return(); Pop(2)

0x113: Stack[-1] = 0
0x114: PushEmpty(object, string)
0x115: Stack[-2] = Stack[0 + Tasks[-1].StackPointer]
0x116: Stack[-1] = "wonder"
0x117: Call2 0x15f

0x118: Pop(2)
0x119: Return(); Pop(0)

0x11a: PushEmpty(object)
0x11b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x11c: Call2 0x14a

0x11d: Pop(1)
0x11e: @@ clear()
0x11f: Pop(0)
0x120: Return(); Pop(0)

0x121: PushEmpty(float, float)
0x122: @ rand(Stack[-1])
0x123: Pop(0)
0x124: Stack[-4] = Stack[-1] < Stack[-3]; Pop(0);
0x125: Return(); Pop(2)

0x126: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x127: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0x128: Pop(0)
0x129: Pop(0); Push((bool) Stack[-4] == 0)
0x12a: IF (Stack[-1] == 0) GOTO 0x133; Pop(1)

0x12b: Push("Locator ")
0x12c: Pop(1); Push(Stack[-1] + Stack[-12]);
0x12d: Push(" doesn't exist")
0x12e: Pop(2); Push(Stack[-2] + Stack[-1]);
0x12f: @ Trace(Stack[-1])
0x130: Pop(1)
0x131: Stack[-1] = 0
0x132: GOTO 0x135

0x133: @ AddActor(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0x134: Pop(0)
0x135: Stack[-13] = Stack[-1]
0x136: Return(); Pop(8)

0x137: Stack[-1] = 0
0x138: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x139: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0x13a: Pop(0)
0x13b: Pop(0); Push((bool) Stack[-4] == 0)
0x13c: IF (Stack[-1] == 0) GOTO 0x145; Pop(1)

0x13d: Push("Locator ")
0x13e: Pop(1); Push(Stack[-1] + Stack[-12]);
0x13f: Push(" doesn't exist")
0x140: Pop(2); Push(Stack[-2] + Stack[-1]);
0x141: @ Trace(Stack[-1])
0x142: Pop(1)
0x143: Stack[-1] = 0
0x144: GOTO 0x147

0x145: @@ AddStationaryActor(Stack[-1], Stack[-3], Stack[-2], Stack[-10], Stack[-9])
0x146: Pop(0)
0x147: Stack[-13] = Stack[-1]
0x148: Return(); Pop(8)

0x149: Stack[-1] = 0
0x14a: PushEmpty(int, int, object, int, int, object)
0x14b: Push(Stack[-7])
0x14c: IF (Stack[-1] == 0) GOTO 0x15e; Pop(1)

0x14d: @@ size(Stack[-3])
0x14e: Pop(0)
0x14f: Stack[-2] = (int) 0
0x150: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0x151: IF (Stack[-1] == 0) GOTO 0x15c; Pop(1)

0x152: @@ get(Stack[-1], Stack[-2])
0x153: Pop(0)
0x154: Push(Stack[-1])
0x155: IF (Stack[-1] == 0) GOTO 0x158; Pop(1)

0x156: @@ Remove()
0x157: Pop(0)
0x158: Stack[-1] = 0
0x159: Push((int) 1)
0x15a: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x15b: GOTO 0x150

0x15c: @@ clear()
0x15d: Pop(0)
0x15e: Return(); Pop(6)

0x15f: PushEmpty(int, int, object, object, int, int, object, object)
0x160: Push(Stack[-10])
0x161: IF (Stack[-1] == 0) GOTO 0x176; Pop(1)

0x162: @@ size(Stack[-4])
0x163: Pop(0)
0x164: Stack[-3] = (int) 0
0x165: Pop(0); Push((bool) Stack[-3] < Stack[-4])
0x166: IF (Stack[-1] == 0) GOTO 0x176; Pop(1)

0x167: @@ get(Stack[-2], Stack[-3])
0x168: Pop(0)
0x169: Push(Stack[-2])
0x16a: IF (Stack[-1] == 0) GOTO 0x172; Pop(1)

0x16b: @@ GetActor(Stack[-1])
0x16c: Pop(0)
0x16d: Push(Stack[-1])
0x16e: IF (Stack[-1] == 0) GOTO 0x171; Pop(1)

0x16f: @ Trigger(Stack[-1], Stack[-9])
0x170: Pop(0)
0x171: Stack[-1] = 0
0x172: Stack[-2] = 0
0x173: Push((int) 1)
0x174: Stack[-4] = Stack[-4] + Stack[-1]; Pop(1);
0x175: GOTO 0x165

0x176: Return(); Pop(8)

0x177: PushEmpty(float, float)
0x178: @ GetGameTime(Stack[-1])
0x179: Pop(0)
0x17a: Push((int) 1)
0x17b: PushEmpty(int)
0x17c: Push((int) 24)
0x17d: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x17e: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x17f: Return(); Pop(2)

0x180: PushEmpty(object, object)
0x181: Push((int) 727)
0x182: Push((int) 2)
0x183: Push((int) 539106)
0x184: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x185: Pop(3)
0x186: PushEmpty(bool, object, int)
0x187: Stack[-2] = Stack[-4]
0x188: Stack[-1] = (int) 723
0x189: Call2 0x1a7

0x18a: Pop(3)
0x18b: Return(); Pop(2)

0x18c: Stack[-1] = 0
0x18d: PushEmpty(object, object)
0x18e: Push((int) 728)
0x18f: Push((int) 2)
0x190: Push((int) 539107)
0x191: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x192: Pop(3)
0x193: PushEmpty(bool, object, int)
0x194: Stack[-2] = Stack[-4]
0x195: Stack[-1] = (int) 723
0x196: Call2 0x1a7

0x197: Pop(3)
0x198: Return(); Pop(2)

0x199: Stack[-1] = 0
0x19a: PushEmpty(object, object)
0x19b: @ GetDiaryRoot(Stack[-1])
0x19c: Pop(0)
0x19d: Pop(0); Push((bool) Stack[-1] == 0)
0x19e: IF (Stack[-1] == 0) GOTO 0x1a4; Pop(1)

0x19f: Push("Can't retrieve diary root")
0x1a0: @ Trace(Stack[-1])
0x1a1: Pop(1)
0x1a2: Stack[-3] = (bool) 0
0x1a3: Return(); Pop(2)

0x1a4: Stack[-3] = Stack[-1]
0x1a5: Return(); Pop(2)

0x1a6: Stack[-1] = 0
0x1a7: PushEmpty(object, object, int, object, object, int)
0x1a8: PushEmpty(object)
0x1a9: Call2 0x19a

0x1aa: Stack[-4] = Stack[-1]
0x1ab: Pop(1)
0x1ac: @@ Find(Stack[-7], Stack[-2])
0x1ad: Pop(0)
0x1ae: Pop(0); Push((bool) Stack[-2] == 0)
0x1af: IF (Stack[-1] == 0) GOTO 0x1b6; Pop(1)

0x1b0: Push("Can't find diary parent with id: ")
0x1b1: Pop(1); Push(Stack[-1] + Stack[-8]);
0x1b2: @ Trace(Stack[-1])
0x1b3: Pop(1)
0x1b4: Stack[-9] = (bool) 0
0x1b5: Return(); Pop(6)

0x1b6: @@ AddChild(Stack[-8])
0x1b7: Pop(0)
0x1b8: Push((int) 7)
0x1b9: @ SendWorldWndMessage(Stack[-1])
0x1ba: Pop(1)
0x1bb: @@ GetCategory(Stack[-1])
0x1bc: Pop(0)
0x1bd: @ SetDiarySection(Stack[-1])
0x1be: Pop(0)
0x1bf: Stack[-9] = (bool) 0
0x1c0: Return(); Pop(6)

0x1c1: Stack[-2] = 0
0x1c2: Stack[-3] = 0
0x1c3: PushEmpty()
0x1c4: Push("K2SystemSvitaRemoved")
0x1c5: Pop(1); Push(Stack[-1] + Stack[-3]);
0x1c6: Push(Stack[-2])
0x1c7: IF (Stack[-1] == 0) GOTO 0x1ca; Pop(1)

0x1c8: Push((int) 1)
0x1c9: GOTO 0x1cb

0x1ca: Push((int) 0)
0x1cb: @ SetVariable(Stack[-2], Stack[-1])
0x1cc: Pop(2)
0x1cd: Return(); Pop(0)

0x1ce: PushEmpty()
0x1cf: Push((int) 6)
0x1d0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1d1: IF (Stack[-1] == 0) GOTO 0x1d4; Pop(1)

0x1d2: Stack[-2] = (int) 7
0x1d3: Return(); Pop(0)

0x1d4: Push((int) 7)
0x1d5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1d6: IF (Stack[-1] == 0) GOTO 0x1d9; Pop(1)

0x1d7: Stack[-2] = (int) 11
0x1d8: Return(); Pop(0)

0x1d9: Push((int) 8)
0x1da: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1db: IF (Stack[-1] == 0) GOTO 0x1de; Pop(1)

0x1dc: Stack[-2] = (int) 6
0x1dd: Return(); Pop(0)

0x1de: Push((int) 9)
0x1df: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1e0: IF (Stack[-1] == 0) GOTO 0x1e3; Pop(1)

0x1e1: Stack[-2] = (int) 9
0x1e2: Return(); Pop(0)

0x1e3: Push((int) 10)
0x1e4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1e5: IF (Stack[-1] == 0) GOTO 0x1e8; Pop(1)

0x1e6: Stack[-2] = (int) 10
0x1e7: Return(); Pop(0)

0x1e8: Push((int) 11)
0x1e9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1ea: IF (Stack[-1] == 0) GOTO 0x1ed; Pop(1)

0x1eb: Stack[-2] = (int) 8
0x1ec: Return(); Pop(0)

0x1ed: Stack[-2] = Stack[-1]
0x1ee: Return(); Pop(0)

