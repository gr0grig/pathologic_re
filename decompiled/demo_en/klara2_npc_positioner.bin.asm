GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	init
	to late for k2system quest
	remove_danko
	inited
	SetProperty
	remove_burah
	id = 
	, fTime = 
	, GetDay() = 
	K2System wrong danko scene: 
	K2System wrong burah scene: 
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	GetCategory
	k2system_burah_day
	k2system_danko_day
	house5_unoin_solidl
	r4_house4_02_i2
	dt_house1_union2_01r
	dt_house_1_03
	r5_House6_01
	dt_house2_01
	house7_02
	lc_house3_05

Import:
	Hold (0 args)
	Trace (1 args)
	GetGameTime (1 args)
	rand (3 args)
	SetTimeEvent (2 args)
	GetSceneByName (2 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)
	AddMessage (4 args)
	SetVariable (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (int) Params = 0
		EVENT_26 Op = 0x5 Vars = (string)
		EVENT_9 Op = 0x5d Vars = (int, float)


0x0: Stack[0 + Tasks[-1].StackPointer] = (int)-1
0x1: @ Hold()
0x2: Pop(0)
0x3: GOTO 0x1

0x4: Return(); Pop(0)

0x5: PushEmpty(int, float, float, float, object, object, int, float, float, float, object, object)
0x6: @ Trace(Stack[-13])
0x7: Pop(0)
0x8: Push("init")
0x9: Pop(1); Push((bool) Stack[-14] == Stack[-1])
0xa: IF (Stack[-1] == 0) GOTO 0x3b; Pop(1)

0xb: PushEmpty(int)
0xc: Call2 0xcc

0xd: Stack[-7] = Stack[-1]
0xe: Pop(1)
0xf: Push((int) 22)
0x10: Pop(1); Push((bool) Stack[-7] > Stack[-1])
0x11: IF (Stack[-1] == 0) GOTO 0x16; Pop(1)

0x12: Push("to late for k2system quest")
0x13: @ Trace(Stack[-1])
0x14: Pop(1)
0x15: Return(); Pop(12)

0x16: Stack[-5] = (int) 0
0x17: PushEmpty(int)
0x18: Call2 0xcc

0x19: Pop(0)
0x1a: Push((int) 7)
0x1b: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x1c: IF (Stack[-1] == 0) GOTO 0x22; Pop(1)

0x1d: Push((int) 7)
0x1e: PushEmpty(int)
0x1f: Call2 0xcc

0x20: Pop(0)
0x21: Stack[-7] = Stack[-2] - Stack[-1]; Pop(2);
0x22: @ GetGameTime(Stack[-4])
0x23: Pop(0)
0x24: Push((float)0.3)
0x25: Push((int) 1)
0x26: @ rand(Stack[-5], Stack[-2], Stack[-1])
0x27: Pop(2)
0x28: Push((int) 0)
0x29: Pop(0); Push(Stack[-5] + Stack[-4]);
0x2a: Pop(1); Push(Stack[-1] + Stack[-7]);
0x2b: @ SetTimeEvent(Stack[-2], Stack[-1])
0x2c: Pop(2)
0x2d: Push((float)0.3)
0x2e: Push((int) 1)
0x2f: @ rand(Stack[-5], Stack[-2], Stack[-1])
0x30: Pop(2)
0x31: Push((int) 1)
0x32: Pop(0); Push(Stack[-5] + Stack[-4]);
0x33: Pop(1); Push(Stack[-1] + Stack[-7]);
0x34: @ SetTimeEvent(Stack[-2], Stack[-1])
0x35: Pop(2)
0x36: PushEmpty(int)
0x37: Call2 0xc3

0x38: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x39: Pop(1)
0x3a: GOTO 0x5c

0x3b: Push("remove_danko")
0x3c: Pop(1); Push((bool) Stack[-14] == Stack[-1])
0x3d: IF (Stack[-1] == 0) GOTO 0x4c; Pop(1)

0x3e: PushEmpty(string, int)
0x3f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x40: Call2 0x1a5

0x41: Pop(1)
0x42: @ GetSceneByName(Stack[-3], Stack[-1])
0x43: Pop(1)
0x44: Push(Stack[-2])
0x45: IF (Stack[-1] == 0) GOTO 0x4a; Pop(1)

0x46: Push("inited")
0x47: Push((int) 0)
0x48: @@ SetProperty(Stack[-2], Stack[-1])
0x49: Pop(2)
0x4a: Stack[-2] = 0
0x4b: GOTO 0x5c

0x4c: Push("remove_burah")
0x4d: Pop(1); Push((bool) Stack[-14] == Stack[-1])
0x4e: IF (Stack[-1] == 0) GOTO 0x5c; Pop(1)

0x4f: PushEmpty(string, int)
0x50: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x51: Call2 0x18b

0x52: Pop(1)
0x53: @ GetSceneByName(Stack[-2], Stack[-1])
0x54: Pop(1)
0x55: Push(Stack[-1])
0x56: IF (Stack[-1] == 0) GOTO 0x5b; Pop(1)

0x57: Push("inited")
0x58: Push((int) 0)
0x59: @@ SetProperty(Stack[-2], Stack[-1])
0x5a: Pop(2)
0x5b: Stack[-1] = 0
0x5c: Return(); Pop(12)

0x5d: PushEmpty(object, object, object, object)
0x5e: Push("id = ")
0x5f: Pop(1); Push(Stack[-1] + Stack[-7]);
0x60: Push(", fTime = ")
0x61: Pop(2); Push(Stack[-2] + Stack[-1]);
0x62: Pop(1); Push(Stack[-1] + Stack[-6]);
0x63: Push(", GetDay() = ")
0x64: Pop(2); Push(Stack[-2] + Stack[-1]);
0x65: PushEmpty(int)
0x66: Call2 0xc3

0x67: Pop(0)
0x68: Pop(2); Push(Stack[-2] + Stack[-1]);
0x69: @ Trace(Stack[-1])
0x6a: Pop(1)
0x6b: PushEmpty(bool)
0x6c: Stack[-1] = (bool) 0
0x6d: Push((int) 0)
0x6e: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x6f: IF (Stack[-1] == 0) GOTO 0x76; Pop(1)

0x70: PushEmpty(int)
0x71: Call2 0xc3

0x72: Pop(0)
0x73: Pop(1); Push((bool) Stack[0 + Tasks[-1].StackPointer] == Stack[-1])
0x74: IF (Stack[-1] == 0) GOTO 0x76; Pop(1)

0x75: Stack[-1] = (bool) 1
0x76: IF (Stack[-1] == 0) GOTO 0x97; Pop(1)

0x77: PushEmpty(int, float)
0x78: Stack[-2] = Stack[0 + Tasks[-1].StackPointer]
0x79: Stack[-1] = Stack[-7]
0x7a: Call2 0x1f8

0x7b: Pop(2)
0x7c: PushEmpty(string, int)
0x7d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x7e: Call2 0x1a5

0x7f: Pop(1)
0x80: @ GetSceneByName(Stack[-3], Stack[-1])
0x81: Pop(1)
0x82: Pop(0); Push((bool) Stack[-2] == 0)
0x83: IF (Stack[-1] == 0) GOTO 0x8d; Pop(1)

0x84: Push("K2System wrong danko scene: ")
0x85: PushEmpty(string, int)
0x86: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x87: Call2 0x1a5

0x88: Pop(1)
0x89: Pop(2); Push(Stack[-2] + Stack[-1]);
0x8a: @ Trace(Stack[-1])
0x8b: Pop(1)
0x8c: GOTO 0x95

0x8d: Push("inited")
0x8e: Push((int) 1)
0x8f: @@ SetProperty(Stack[-2], Stack[-1])
0x90: Pop(2)
0x91: PushEmpty(int)
0x92: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x93: Call2 0x186

0x94: Pop(1)
0x95: Stack[-2] = 0
0x96: GOTO 0xc2

0x97: PushEmpty(bool)
0x98: Stack[-1] = (bool) 0
0x99: Push((int) 1)
0x9a: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x9b: IF (Stack[-1] == 0) GOTO 0xa2; Pop(1)

0x9c: PushEmpty(int)
0x9d: Call2 0xc3

0x9e: Pop(0)
0x9f: Pop(1); Push((bool) Stack[0 + Tasks[-1].StackPointer] == Stack[-1])
0xa0: IF (Stack[-1] == 0) GOTO 0xa2; Pop(1)

0xa1: Stack[-1] = (bool) 1
0xa2: IF (Stack[-1] == 0) GOTO 0xc2; Pop(1)

0xa3: PushEmpty(int, float)
0xa4: Stack[-2] = Stack[0 + Tasks[-1].StackPointer]
0xa5: Stack[-1] = Stack[-7]
0xa6: Call2 0x1bf

0xa7: Pop(2)
0xa8: PushEmpty(string, int)
0xa9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xaa: Call2 0x18b

0xab: Pop(1)
0xac: @ GetSceneByName(Stack[-2], Stack[-1])
0xad: Pop(1)
0xae: Pop(0); Push((bool) Stack[-1] == 0)
0xaf: IF (Stack[-1] == 0) GOTO 0xb9; Pop(1)

0xb0: Push("K2System wrong burah scene: ")
0xb1: PushEmpty(string, int)
0xb2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb3: Call2 0x18b

0xb4: Pop(1)
0xb5: Pop(2); Push(Stack[-2] + Stack[-1]);
0xb6: @ Trace(Stack[-1])
0xb7: Pop(1)
0xb8: GOTO 0xc1

0xb9: Push("inited")
0xba: Push((int) 1)
0xbb: @@ SetProperty(Stack[-2], Stack[-1])
0xbc: Pop(2)
0xbd: PushEmpty(int)
0xbe: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xbf: Call2 0x181

0xc0: Pop(1)
0xc1: Stack[-1] = 0
0xc2: Return(); Pop(4)

0xc3: PushEmpty(float, float)
0xc4: @ GetGameTime(Stack[-1])
0xc5: Pop(0)
0xc6: Push((int) 1)
0xc7: PushEmpty(int)
0xc8: Push((int) 24)
0xc9: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0xca: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0xcb: Return(); Pop(2)

0xcc: PushEmpty(float, float)
0xcd: @ GetGameTime(Stack[-1])
0xce: Pop(0)
0xcf: PushEmpty(int)
0xd0: Stack[-1] = Stack[-2]
0xd1: Push((int) 24)
0xd2: Stack[-5] = Stack[-2] % Stack[-1]; Pop(2);
0xd3: Return(); Pop(2)

0xd4: PushEmpty()
0xd5: PushEmpty(int, int, int, float)
0xd6: Stack[-3] = (int) 539089
0xd7: Stack[-2] = (int) 539088
0xd8: Stack[-1] = Stack[-5]
0xd9: Call2 0x179

0xda: Stack[-6] = Stack[-4]
0xdb: Pop(4)
0xdc: Return(); Pop(0)

0xdd: PushEmpty()
0xde: PushEmpty(int, int, int, float)
0xdf: Stack[-3] = (int) 539097
0xe0: Stack[-2] = (int) 539096
0xe1: Stack[-1] = Stack[-5]
0xe2: Call2 0x179

0xe3: Stack[-6] = Stack[-4]
0xe4: Pop(4)
0xe5: Return(); Pop(0)

0xe6: PushEmpty()
0xe7: PushEmpty(int, int, int, float)
0xe8: Stack[-3] = (int) 539091
0xe9: Stack[-2] = (int) 539090
0xea: Stack[-1] = Stack[-5]
0xeb: Call2 0x179

0xec: Stack[-6] = Stack[-4]
0xed: Pop(4)
0xee: Return(); Pop(0)

0xef: PushEmpty()
0xf0: PushEmpty(int, int, int, float)
0xf1: Stack[-3] = (int) 539099
0xf2: Stack[-2] = (int) 539098
0xf3: Stack[-1] = Stack[-5]
0xf4: Call2 0x179

0xf5: Stack[-6] = Stack[-4]
0xf6: Pop(4)
0xf7: Return(); Pop(0)

0xf8: PushEmpty()
0xf9: PushEmpty(int, int, int, float)
0xfa: Stack[-3] = (int) 539085
0xfb: Stack[-2] = (int) 539084
0xfc: Stack[-1] = Stack[-5]
0xfd: Call2 0x179

0xfe: Stack[-6] = Stack[-4]
0xff: Pop(4)
0x100: Return(); Pop(0)

0x101: PushEmpty()
0x102: PushEmpty(int, int, int, float)
0x103: Stack[-3] = (int) 539101
0x104: Stack[-2] = (int) 539100
0x105: Stack[-1] = Stack[-5]
0x106: Call2 0x179

0x107: Stack[-6] = Stack[-4]
0x108: Pop(4)
0x109: Return(); Pop(0)

0x10a: PushEmpty()
0x10b: PushEmpty(int, int, int, float)
0x10c: Stack[-3] = (int) 539087
0x10d: Stack[-2] = (int) 539086
0x10e: Stack[-1] = Stack[-5]
0x10f: Call2 0x179

0x110: Stack[-6] = Stack[-4]
0x111: Pop(4)
0x112: Return(); Pop(0)

0x113: PushEmpty()
0x114: PushEmpty(int, int, int, float)
0x115: Stack[-3] = (int) 539095
0x116: Stack[-2] = (int) 539094
0x117: Stack[-1] = Stack[-5]
0x118: Call2 0x179

0x119: Stack[-6] = Stack[-4]
0x11a: Pop(4)
0x11b: Return(); Pop(0)

0x11c: PushEmpty(object, object)
0x11d: Push((int) 751)
0x11e: Push((int) 2)
0x11f: Push((int) 539736)
0x120: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x121: Pop(3)
0x122: PushEmpty(bool, object, int)
0x123: Stack[-2] = Stack[-4]
0x124: Stack[-1] = (int) -1
0x125: Call2 0x15d

0x126: Pop(3)
0x127: Return(); Pop(2)

0x128: Stack[-1] = 0
0x129: PushEmpty(object, object)
0x12a: Push((int) 752)
0x12b: Push((int) 2)
0x12c: Push((int) 539737)
0x12d: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x12e: Pop(3)
0x12f: PushEmpty(bool, object, int)
0x130: Stack[-2] = Stack[-4]
0x131: Stack[-1] = (int) 751
0x132: Call2 0x15d

0x133: Pop(3)
0x134: Return(); Pop(2)

0x135: Stack[-1] = 0
0x136: PushEmpty(object, object)
0x137: Push((int) 757)
0x138: Push((int) 2)
0x139: Push((int) 539742)
0x13a: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x13b: Pop(3)
0x13c: PushEmpty(bool, object, int)
0x13d: Stack[-2] = Stack[-4]
0x13e: Stack[-1] = (int) -1
0x13f: Call2 0x15d

0x140: Pop(3)
0x141: Return(); Pop(2)

0x142: Stack[-1] = 0
0x143: PushEmpty(object, object)
0x144: Push((int) 758)
0x145: Push((int) 2)
0x146: Push((int) 539743)
0x147: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x148: Pop(3)
0x149: PushEmpty(bool, object, int)
0x14a: Stack[-2] = Stack[-4]
0x14b: Stack[-1] = (int) 757
0x14c: Call2 0x15d

0x14d: Pop(3)
0x14e: Return(); Pop(2)

0x14f: Stack[-1] = 0
0x150: PushEmpty(object, object)
0x151: @ GetDiaryRoot(Stack[-1])
0x152: Pop(0)
0x153: Pop(0); Push((bool) Stack[-1] == 0)
0x154: IF (Stack[-1] == 0) GOTO 0x15a; Pop(1)

0x155: Push("Can't retrieve diary root")
0x156: @ Trace(Stack[-1])
0x157: Pop(1)
0x158: Stack[-3] = (bool) 0
0x159: Return(); Pop(2)

0x15a: Stack[-3] = Stack[-1]
0x15b: Return(); Pop(2)

0x15c: Stack[-1] = 0
0x15d: PushEmpty(object, object, int, object, object, int)
0x15e: PushEmpty(object)
0x15f: Call2 0x150

0x160: Stack[-4] = Stack[-1]
0x161: Pop(1)
0x162: @@ Find(Stack[-7], Stack[-2])
0x163: Pop(0)
0x164: Pop(0); Push((bool) Stack[-2] == 0)
0x165: IF (Stack[-1] == 0) GOTO 0x16c; Pop(1)

0x166: Push("Can't find diary parent with id: ")
0x167: Pop(1); Push(Stack[-1] + Stack[-8]);
0x168: @ Trace(Stack[-1])
0x169: Pop(1)
0x16a: Stack[-9] = (bool) 0
0x16b: Return(); Pop(6)

0x16c: @@ AddChild(Stack[-8])
0x16d: Pop(0)
0x16e: Push((int) 7)
0x16f: @ SendWorldWndMessage(Stack[-1])
0x170: Pop(1)
0x171: @@ GetCategory(Stack[-1])
0x172: Pop(0)
0x173: @ SetDiarySection(Stack[-1])
0x174: Pop(0)
0x175: Stack[-9] = (bool) 0
0x176: Return(); Pop(6)

0x177: Stack[-2] = 0
0x178: Stack[-3] = 0
0x179: PushEmpty(int, int)
0x17a: @ AddMessage(Stack[-5], Stack[-4], Stack[-3], Stack[-1])
0x17b: Pop(0)
0x17c: Push((int) 6)
0x17d: @ SendWorldWndMessage(Stack[-1])
0x17e: Pop(1)
0x17f: Stack[-6] = Stack[-1]
0x180: Return(); Pop(2)

0x181: PushEmpty()
0x182: Push("k2system_burah_day")
0x183: @ SetVariable(Stack[-1], Stack[-2])
0x184: Pop(1)
0x185: Return(); Pop(0)

0x186: PushEmpty()
0x187: Push("k2system_danko_day")
0x188: @ SetVariable(Stack[-1], Stack[-2])
0x189: Pop(1)
0x18a: Return(); Pop(0)

0x18b: PushEmpty()
0x18c: Push((int) 8)
0x18d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x18e: IF (Stack[-1] == 0) GOTO 0x192; Pop(1)

0x18f: Stack[-2] = "house5_unoin_solidl"
0x190: Return(); Pop(0)

0x191: GOTO 0x1a3

0x192: Push((int) 9)
0x193: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x194: IF (Stack[-1] == 0) GOTO 0x198; Pop(1)

0x195: Stack[-2] = "r4_house4_02_i2"
0x196: Return(); Pop(0)

0x197: GOTO 0x1a3

0x198: Push((int) 10)
0x199: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x19a: IF (Stack[-1] == 0) GOTO 0x19e; Pop(1)

0x19b: Stack[-2] = "dt_house1_union2_01r"
0x19c: Return(); Pop(0)

0x19d: GOTO 0x1a3

0x19e: Push((int) 11)
0x19f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1a0: IF (Stack[-1] == 0) GOTO 0x1a3; Pop(1)

0x1a1: Stack[-2] = "dt_house_1_03"
0x1a2: Return(); Pop(0)

0x1a3: Stack[-2] = ""
0x1a4: Return(); Pop(0)

0x1a5: PushEmpty()
0x1a6: Push((int) 8)
0x1a7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1a8: IF (Stack[-1] == 0) GOTO 0x1ac; Pop(1)

0x1a9: Stack[-2] = "r5_House6_01"
0x1aa: Return(); Pop(0)

0x1ab: GOTO 0x1bd

0x1ac: Push((int) 9)
0x1ad: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1ae: IF (Stack[-1] == 0) GOTO 0x1b2; Pop(1)

0x1af: Stack[-2] = "dt_house2_01"
0x1b0: Return(); Pop(0)

0x1b1: GOTO 0x1bd

0x1b2: Push((int) 10)
0x1b3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1b4: IF (Stack[-1] == 0) GOTO 0x1b8; Pop(1)

0x1b5: Stack[-2] = "house7_02"
0x1b6: Return(); Pop(0)

0x1b7: GOTO 0x1bd

0x1b8: Push((int) 11)
0x1b9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1ba: IF (Stack[-1] == 0) GOTO 0x1bd; Pop(1)

0x1bb: Stack[-2] = "lc_house3_05"
0x1bc: Return(); Pop(0)

0x1bd: Stack[-2] = ""
0x1be: Return(); Pop(0)

0x1bf: PushEmpty()
0x1c0: Push((int) 8)
0x1c1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1c2: IF (Stack[-1] == 0) GOTO 0x1ce; Pop(1)

0x1c3: PushEmpty()
0x1c4: Call2 0x11c

0x1c5: Pop(0)
0x1c6: PushEmpty()
0x1c7: Call2 0x129

0x1c8: Pop(0)
0x1c9: PushEmpty(int, float)
0x1ca: Stack[-1] = Stack[-3]
0x1cb: Call2 0xf8

0x1cc: Pop(2)
0x1cd: GOTO 0x1f7

0x1ce: Push((int) 9)
0x1cf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1d0: IF (Stack[-1] == 0) GOTO 0x1dc; Pop(1)

0x1d1: PushEmpty()
0x1d2: Call2 0x11c

0x1d3: Pop(0)
0x1d4: PushEmpty()
0x1d5: Call2 0x129

0x1d6: Pop(0)
0x1d7: PushEmpty(int, float)
0x1d8: Stack[-1] = Stack[-3]
0x1d9: Call2 0x10a

0x1da: Pop(2)
0x1db: GOTO 0x1f7

0x1dc: Push((int) 10)
0x1dd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1de: IF (Stack[-1] == 0) GOTO 0x1ea; Pop(1)

0x1df: PushEmpty()
0x1e0: Call2 0x11c

0x1e1: Pop(0)
0x1e2: PushEmpty()
0x1e3: Call2 0x129

0x1e4: Pop(0)
0x1e5: PushEmpty(int, float)
0x1e6: Stack[-1] = Stack[-3]
0x1e7: Call2 0xd4

0x1e8: Pop(2)
0x1e9: GOTO 0x1f7

0x1ea: Push((int) 11)
0x1eb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1ec: IF (Stack[-1] == 0) GOTO 0x1f7; Pop(1)

0x1ed: PushEmpty()
0x1ee: Call2 0x11c

0x1ef: Pop(0)
0x1f0: PushEmpty()
0x1f1: Call2 0x129

0x1f2: Pop(0)
0x1f3: PushEmpty(int, float)
0x1f4: Stack[-1] = Stack[-3]
0x1f5: Call2 0xe6

0x1f6: Pop(2)
0x1f7: Return(); Pop(0)

0x1f8: PushEmpty()
0x1f9: Push((int) 8)
0x1fa: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1fb: IF (Stack[-1] == 0) GOTO 0x207; Pop(1)

0x1fc: PushEmpty()
0x1fd: Call2 0x136

0x1fe: Pop(0)
0x1ff: PushEmpty()
0x200: Call2 0x143

0x201: Pop(0)
0x202: PushEmpty(int, float)
0x203: Stack[-1] = Stack[-3]
0x204: Call2 0x101

0x205: Pop(2)
0x206: GOTO 0x230

0x207: Push((int) 9)
0x208: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x209: IF (Stack[-1] == 0) GOTO 0x215; Pop(1)

0x20a: PushEmpty()
0x20b: Call2 0x136

0x20c: Pop(0)
0x20d: PushEmpty()
0x20e: Call2 0x143

0x20f: Pop(0)
0x210: PushEmpty(int, float)
0x211: Stack[-1] = Stack[-3]
0x212: Call2 0x113

0x213: Pop(2)
0x214: GOTO 0x230

0x215: Push((int) 10)
0x216: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x217: IF (Stack[-1] == 0) GOTO 0x223; Pop(1)

0x218: PushEmpty()
0x219: Call2 0x136

0x21a: Pop(0)
0x21b: PushEmpty()
0x21c: Call2 0x143

0x21d: Pop(0)
0x21e: PushEmpty(int, float)
0x21f: Stack[-1] = Stack[-3]
0x220: Call2 0xdd

0x221: Pop(2)
0x222: GOTO 0x230

0x223: Push((int) 11)
0x224: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x225: IF (Stack[-1] == 0) GOTO 0x230; Pop(1)

0x226: PushEmpty()
0x227: Call2 0x136

0x228: Pop(0)
0x229: PushEmpty()
0x22a: Call2 0x143

0x22b: Pop(0)
0x22c: PushEmpty(int, float)
0x22d: Stack[-1] = Stack[-3]
0x22e: Call2 0xef

0x22f: Pop(2)
0x230: Return(); Pop(0)

