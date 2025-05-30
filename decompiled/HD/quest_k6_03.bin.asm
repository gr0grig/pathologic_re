GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	pt_k6q03_bomber
	pers_bomber
	k6q03_bomber.xml
	add
	k6q03
	abinos_unload
	completed
	spawning albinos
	pt_k6q03_albinos_path
	pers_albinos
	k6q03_albinos.xml
	Remove
	GetPosition
	GetLocator
	Locator 
	 doesn't exist
	AddStationaryActor
	size
	get
	clear
	player

Import:
	CreateObjectVector (1 args)
	GetMainOutdoorScene (1 args)
	SetVariable (2 args)
	SetTimeEvent (2 args)
	Trace (1 args)
	GetScene (1 args)
	GetVariable (2 args)
	RemoveActor (1 args)
	GetGameTime (1 args)
	Hold (0 args)
	self (1 args)
	FindActor (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object, object) Params = 0
		EVENT_26 Op = 0x30 Vars = (string)
		EVENT_9 Op = 0x41 Vars = (int, float)


0x0: PushEmpty(object, int, object, int)
0x1: @ CreateObjectVector(Stack[-1])
0x2: Pop(0)
0x3: @ GetMainOutdoorScene(Stack[-2])
0x4: Pop(0)
0x5: Stack[-1] = (int) 0
0x6: Push((int) 5)
0x7: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x8: IF (Stack[-1] == 0) GOTO 0x18; Pop(1)

0x9: PushEmpty(object, object, string, string, string)
0xa: Stack[-4] = Stack[-7]
0xb: Push("pt_k6q03_bomber")
0xc: Push((int) 1)
0xd: Pop(1); Push(Stack[-8] + Stack[-1]);
0xe: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0xf: Stack[-2] = "pers_bomber"
0x10: Stack[-1] = "k6q03_bomber.xml"
0x11: Call2 0xd2

0x12: Pop(4)
0x13: @@ add(Stack[-1])
0x14: Pop(1)
0x15: Push((int) 1)
0x16: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x17: GOTO 0x6

0x18: Push("k6q03")
0x19: Push((int) 1)
0x1a: @ SetVariable(Stack[-2], Stack[-1])
0x1b: Pop(2)
0x1c: PushEmpty(int)
0x1d: Call2 0x10c

0x1e: Pop(0)
0x1f: Push((int) 21)
0x20: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x21: IF (Stack[-1] == 0) GOTO 0x27; Pop(1)

0x22: Push((int) 1)
0x23: Push((int) 141)
0x24: @ SetTimeEvent(Stack[-2], Stack[-1])
0x25: Pop(2)
0x26: GOTO 0x2a

0x27: PushEmpty()
0x28: Call2 0x52

0x29: Pop(0)
0x2a: PushEmpty(int)
0x2b: Stack[-1] = (int) 6
0x2c: Call2 0xaf

0x2d: Pop(1)
0x2e: Return(); Pop(4)

0x2f: Stack[-2] = 0
0x30: PushEmpty()
0x31: @ Trace(Stack[-1])
0x32: Pop(0)
0x33: Push("abinos_unload")
0x34: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x35: IF (Stack[-1] == 0) GOTO 0x3a; Pop(1)

0x36: PushEmpty()
0x37: Call2 0x52

0x38: Pop(0)
0x39: GOTO 0x40

0x3a: Push("completed")
0x3b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3c: IF (Stack[-1] == 0) GOTO 0x40; Pop(1)

0x3d: PushEmpty()
0x3e: Call2 0x98

0x3f: Pop(0)
0x40: Return(); Pop(0)

0x41: PushEmpty()
0x42: Push((int) 1)
0x43: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x44: IF (Stack[-1] == 0) GOTO 0x4c; Pop(1)

0x45: Push("spawning albinos")
0x46: @ Trace(Stack[-1])
0x47: Pop(1)
0x48: PushEmpty()
0x49: Call2 0x52

0x4a: Pop(0)
0x4b: GOTO 0x51

0x4c: PushEmpty(int, float)
0x4d: Stack[-2] = Stack[-4]
0x4e: Stack[-1] = Stack[-3]
0x4f: Call2 0xc2

0x50: Pop(2)
0x51: Return(); Pop(0)

0x52: PushEmpty(object, object, int, object, object, int)
0x53: @ GetMainOutdoorScene(Stack[-3])
0x54: Pop(0)
0x55: @ GetScene(Stack[-2])
0x56: Pop(0)
0x57: Pop(0); Push((bool) Stack[-3] != Stack[-2])
0x58: IF (Stack[-1] == 0) GOTO 0x6d; Pop(1)

0x59: Push("pt_k6q03_albinos_path")
0x5a: Push((int) -1)
0x5b: @ SetVariable(Stack[-2], Stack[-1])
0x5c: Pop(2)
0x5d: PushEmpty(object, object, string, string, string)
0x5e: Stack[-4] = Stack[-8]
0x5f: Push("pt_k6q03_albinos_path")
0x60: PushEmpty(int, string)
0x61: Stack[-1] = "pt_k6q03_albinos_path"
0x62: Call2 0x15f

0x63: Pop(1)
0x64: Push((int) 1)
0x65: Pop(2); Push(Stack[-2] + Stack[-1]);
0x66: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x67: Stack[-2] = "pers_albinos"
0x68: Stack[-1] = "k6q03_albinos.xml"
0x69: Call2 0xd2

0x6a: Stack[0 + Tasks[-1].StackPointer] = Stack[-5]
0x6b: Pop(5)
0x6c: GOTO 0x82

0x6d: PushEmpty(int, string)
0x6e: Stack[-1] = "pt_k6q03_albinos_path"
0x6f: Call2 0x134

0x70: Stack[-3] = Stack[-2]
0x71: Pop(2)
0x72: @ Trace(Stack[-1])
0x73: Pop(0)
0x74: Push("pt_k6q03_albinos_path")
0x75: @ SetVariable(Stack[-1], Stack[-2])
0x76: Pop(1)
0x77: PushEmpty(object, object, string, string, string)
0x78: Stack[-4] = Stack[-8]
0x79: Push("pt_k6q03_albinos_path")
0x7a: Push((int) 1)
0x7b: Pop(1); Push(Stack[-8] + Stack[-1]);
0x7c: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x7d: Stack[-2] = "pers_albinos"
0x7e: Stack[-1] = "k6q03_albinos.xml"
0x7f: Call2 0xe4

0x80: Stack[0 + Tasks[-1].StackPointer] = Stack[-5]
0x81: Pop(5)
0x82: Return(); Pop(6)

0x83: Stack[-2] = 0
0x84: Stack[-3] = 0
0x85: PushEmpty(int, int)
0x86: Push("k6q03")
0x87: @ GetVariable(Stack[-1], Stack[-2])
0x88: Pop(1)
0x89: Push((int) 1000)
0x8a: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x8b: IF (Stack[-1] == 0) GOTO 0x8f; Pop(1)

0x8c: PushEmpty()
0x8d: Call2 0x90

0x8e: Pop(0)
0x8f: Return(); Pop(2)

0x90: Push("k6q03")
0x91: Push((int) -1)
0x92: @ SetVariable(Stack[-2], Stack[-1])
0x93: Pop(2)
0x94: PushEmpty()
0x95: Call2 0xa0

0x96: Pop(0)
0x97: Return(); Pop(0)

0x98: Push("k6q03")
0x99: Push((int) 1000)
0x9a: @ SetVariable(Stack[-2], Stack[-1])
0x9b: Pop(2)
0x9c: PushEmpty()
0x9d: Call2 0xa0

0x9e: Pop(0)
0x9f: Return(); Pop(0)

0xa0: EventDisable(26)
0xa1: Push( Stack[0 + Tasks[-1].StackPointer] )
0xa2: IF (Stack[-1] == 0) GOTO 0xa5; Pop(1)

0xa3: @@ Remove()
0xa4: Pop(0)
0xa5: PushEmpty(object)
0xa6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa7: Call2 0xf7

0xa8: Pop(1)
0xa9: PushEmpty(object)
0xaa: Call2 0xcc

0xab: Pop(0)
0xac: @ RemoveActor(Stack[-1])
0xad: Pop(1)
0xae: Return(); Pop(0)

0xaf: PushEmpty(float, float)
0xb0: @ GetGameTime(Stack[-1])
0xb1: Pop(0)
0xb2: Push((int) 24)
0xb3: Pop(1); Push(Stack[-4] * Stack[-1]);
0xb4: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0xb5: IF (Stack[-1] == 0) GOTO 0xba; Pop(1)

0xb6: PushEmpty()
0xb7: Call2 0xa0

0xb8: Pop(0)
0xb9: GOTO 0xc1

0xba: Push((int) 0)
0xbb: Push((int) 24)
0xbc: Pop(1); Push(Stack[-5] * Stack[-1]);
0xbd: @ SetTimeEvent(Stack[-2], Stack[-1])
0xbe: Pop(2)
0xbf: @ Hold()
0xc0: Pop(0)
0xc1: Return(); Pop(2)

0xc2: PushEmpty()
0xc3: PushEmpty()
0xc4: Call2 0x85

0xc5: Pop(0)
0xc6: Return(); Pop(0)

0xc7: PushEmpty(cvector, cvector)
0xc8: @@ GetPosition(Stack[-1])
0xc9: Pop(0)
0xca: Stack[-4] = Stack[-1]
0xcb: Return(); Pop(2)

0xcc: PushEmpty(object, object)
0xcd: @ self(Stack[-1])
0xce: Pop(0)
0xcf: Stack[-3] = Stack[-1]
0xd0: Return(); Pop(2)

0xd1: Stack[-1] = 0
0xd2: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0xd3: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0xd4: Pop(0)
0xd5: Pop(0); Push((bool) Stack[-4] == 0)
0xd6: IF (Stack[-1] == 0) GOTO 0xdf; Pop(1)

0xd7: Push("Locator ")
0xd8: Pop(1); Push(Stack[-1] + Stack[-12]);
0xd9: Push(" doesn't exist")
0xda: Pop(2); Push(Stack[-2] + Stack[-1]);
0xdb: @ Trace(Stack[-1])
0xdc: Pop(1)
0xdd: Stack[-1] = 0
0xde: GOTO 0xe1

0xdf: @@ AddStationaryActor(Stack[-1], Stack[-3], Stack[-2], Stack[-10], Stack[-9])
0xe0: Pop(0)
0xe1: Stack[-13] = Stack[-1]
0xe2: Return(); Pop(8)

0xe3: Stack[-1] = 0
0xe4: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0xe5: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0xe6: Pop(0)
0xe7: Pop(0); Push((bool) Stack[-4] == 0)
0xe8: IF (Stack[-1] == 0) GOTO 0xf1; Pop(1)

0xe9: Push("Locator ")
0xea: Pop(1); Push(Stack[-1] + Stack[-12]);
0xeb: Push(" doesn't exist")
0xec: Pop(2); Push(Stack[-2] + Stack[-1]);
0xed: @ Trace(Stack[-1])
0xee: Pop(1)
0xef: Stack[-1] = 0
0xf0: GOTO 0xf4

0xf1: Push((bool) 1)
0xf2: @@ AddStationaryActor(Stack[-2], Stack[-4], Stack[-3], Stack[-11], Stack[-10], Stack[-1])
0xf3: Pop(1)
0xf4: Stack[-13] = Stack[-1]
0xf5: Return(); Pop(8)

0xf6: Stack[-1] = 0
0xf7: PushEmpty(int, int, object, int, int, object)
0xf8: Push(Stack[-7])
0xf9: IF (Stack[-1] == 0) GOTO 0x10b; Pop(1)

0xfa: @@ size(Stack[-3])
0xfb: Pop(0)
0xfc: Stack[-2] = (int) 0
0xfd: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0xfe: IF (Stack[-1] == 0) GOTO 0x109; Pop(1)

0xff: @@ get(Stack[-1], Stack[-2])
0x100: Pop(0)
0x101: Push(Stack[-1])
0x102: IF (Stack[-1] == 0) GOTO 0x105; Pop(1)

0x103: @@ Remove()
0x104: Pop(0)
0x105: Stack[-1] = 0
0x106: Push((int) 1)
0x107: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x108: GOTO 0xfd

0x109: @@ clear()
0x10a: Pop(0)
0x10b: Return(); Pop(6)

0x10c: PushEmpty(float, float)
0x10d: @ GetGameTime(Stack[-1])
0x10e: Pop(0)
0x10f: PushEmpty(int)
0x110: Stack[-1] = Stack[-2]
0x111: Push((int) 24)
0x112: Stack[-5] = Stack[-2] % Stack[-1]; Pop(2);
0x113: Return(); Pop(2)

0x114: PushEmpty()
0x115: PushEmpty(float, cvector)
0x116: Stack[-1] = Stack[-3]
0x117: Call2 0x124

0x118: Pop(1)
0x119: Push((float)12250000.0)
0x11a: Stack[-4] = Stack[-2] < Stack[-1]; Pop(2);
0x11b: Return(); Pop(0)

0x11c: PushEmpty()
0x11d: PushEmpty(float, cvector)
0x11e: Stack[-1] = Stack[-3]
0x11f: Call2 0x124

0x120: Pop(1)
0x121: Push((float)4000000.0)
0x122: Stack[-4] = Stack[-2] < Stack[-1]; Pop(2);
0x123: Return(); Pop(0)

0x124: PushEmpty(object, cvector, object, cvector)
0x125: Push("player")
0x126: @ FindActor(Stack[-3], Stack[-1])
0x127: Pop(1)
0x128: Pop(0); Push((bool) Stack[-2] == 0)
0x129: IF (Stack[-1] == 0) GOTO 0x12c; Pop(1)

0x12a: Stack[-6] = (int) 0
0x12b: Return(); Pop(4)

0x12c: PushEmpty(cvector, object)
0x12d: Stack[-1] = Stack[-4]
0x12e: Call2 0xc7

0x12f: Pop(1)
0x130: Stack[-2] = Stack[-1] - Stack[-6]; Pop(1);
0x131: Stack[-6] = Stack[-1] | Stack[-1]; Pop(0);
0x132: Return(); Pop(4)

0x133: Stack[-2] = 0
0x134: PushEmpty(cvector, int, object, int, bool, cvector, cvector, cvector, int, object, int, bool, cvector, cvector)
0x135: Stack[-6] = (int) -1
0x136: @ GetMainOutdoorScene(Stack[-5])
0x137: Pop(0)
0x138: Stack[-4] = (int) -1
0x139: Push((int) 1)
0x13a: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x13b: Push((int) 1)
0x13c: Pop(1); Push(Stack[-5] + Stack[-1]);
0x13d: Pop(1); Push(Stack[-16] + Stack[-1]);
0x13e: @@ GetLocator(Stack[-1], Stack[-4], Stack[-3], Stack[-2])
0x13f: Pop(1)
0x140: Pop(0); Push((bool) Stack[-3] == 0)
0x141: IF (Stack[-1] == 0) GOTO 0x143; Pop(1)

0x142: GOTO 0x156

0x143: PushEmpty(bool, cvector)
0x144: Stack[-1] = Stack[-4]
0x145: Call2 0x114

0x146: Pop(1)
0x147: Pop(1); Push((bool) Stack[-1] == 0)
0x148: IF (Stack[-1] == 0) GOTO 0x14a; Pop(1)

0x149: GOTO 0x155

0x14a: PushEmpty(bool, cvector)
0x14b: Stack[-1] = Stack[-4]
0x14c: Call2 0x11c

0x14d: Pop(1)
0x14e: IF (Stack[-1] == 0) GOTO 0x150; Pop(1)

0x14f: GOTO 0x155

0x150: Pop(0); Push((bool) Stack[-4] < Stack[-6])
0x151: IF (Stack[-1] == 0) GOTO 0x153; Pop(1)

0x152: GOTO 0x155

0x153: Stack[-6] = Stack[-4]
0x154: Stack[-7] = Stack[-2]
0x155: GOTO 0x139

0x156: Push((int) -1)
0x157: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x158: IF (Stack[-1] == 0) GOTO 0x15c; Pop(1)

0x159: Push((int) 1)
0x15a: Stack[-17] = Stack[-5] - Stack[-1]; Pop(1);
0x15b: GOTO 0x15d

0x15c: Stack[-16] = Stack[-6]
0x15d: Return(); Pop(14)

0x15e: Stack[-5] = 0
0x15f: PushEmpty(object, int, bool, cvector, cvector, object, int, bool, cvector, cvector)
0x160: @ GetMainOutdoorScene(Stack[-5])
0x161: Pop(0)
0x162: Stack[-4] = (int) 0
0x163: Push((int) 1)
0x164: Pop(1); Push(Stack[-5] + Stack[-1]);
0x165: Pop(1); Push(Stack[-12] + Stack[-1]);
0x166: @@ GetLocator(Stack[-1], Stack[-4], Stack[-3], Stack[-2])
0x167: Pop(1)
0x168: Pop(0); Push((bool) Stack[-3] == 0)
0x169: IF (Stack[-1] == 0) GOTO 0x16b; Pop(1)

0x16a: GOTO 0x16e

0x16b: Push((int) 1)
0x16c: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x16d: GOTO 0x163

0x16e: Stack[-12] = Stack[-4]
0x16f: Return(); Pop(10)

0x170: Stack[-5] = 0
