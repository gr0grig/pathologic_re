GlobalVarCount = 9
	G_VAR_0 int ItemID1
	G_VAR_1 int ItemID2
	G_VAR_2 int Container
	G_VAR_3 int 
	G_VAR_4 int 
	G_VAR_5 int 
	G_VAR_6 int 
	G_VAR_7 int 
	G_VAR_8 int 

Strings:
	durability
	HasProperty
	GetProperty
	SetProperty
	armor
	armor_fire
	armor_phys
	armor_bullet
	armor_disease

Import:
	GetGameTime (1 args)
	GetItemPosByID (4 args)
	GetItem (3 args)
	SetItem (4 args)
	sync (0 args)
	GetProperty (2 args)
	SetProperty (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (bool) Params = 0
		EVENT_32 Op = 0x56 Vars = ()
		EVENT_34 Op = 0x9a Vars = (object, int, int, int)
		EVENT_35 Op = 0xa2 Vars = (object, int, int, bool, int)

Events:
EVENT_22 Op = 0x11f Vars = (object, int, float, float)
EVENT_43 Op = 0x171 Vars = (object, int, float, float, cvector, cvector)

0x0: PushEmpty(float, float, float, int, int, object, bool, int, float, float, float, int, int, object, bool, int)
0x1: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x2: Push(GlobalVars[3])
0x3: Stack[-1] = (int) 0
0x4: GlobalVars[3] = Stack[-1]; Pop(1)
0x5: Push(GlobalVars[4])
0x6: Stack[-1] = (int) 0
0x7: GlobalVars[4] = Stack[-1]; Pop(1)
0x8: Push(GlobalVars[5])
0x9: Stack[-1] = (int) 0
0xa: GlobalVars[5] = Stack[-1]; Pop(1)
0xb: Push(GlobalVars[6])
0xc: Stack[-1] = (int) 0
0xd: GlobalVars[6] = Stack[-1]; Pop(1)
0xe: Push(GlobalVars[7])
0xf: Stack[-1] = (int) 0
0x10: GlobalVars[7] = Stack[-1]; Pop(1)
0x11: Push(GlobalVars[8])
0x12: Stack[-1] = (int) 0
0x13: GlobalVars[8] = Stack[-1]; Pop(1)
0x14: PushEmpty()
0x15: Call2 0x99

0x16: Pop(0)
0x17: PushEmpty()
0x18: Call2 0x76

0x19: Pop(0)
0x1a: @ GetGameTime(Stack[-8])
0x1b: Pop(0)
0x1c: @ GetGameTime(Stack[-7])
0x1d: Pop(0)
0x1e: Stack[-6] = Stack[-7] - Stack[-8]; Pop(0);
0x1f: Push((float)0.96)
0x20: Stack[-6] = Stack[-7] / Stack[-1]; Pop(1);
0x21: Push((int) 0)
0x22: Pop(1); Push((bool) Stack[-6] > Stack[-1])
0x23: IF (Stack[-1] == 0) GOTO 0x4f; Pop(1)

0x24: Push((float)0.96)
0x25: Pop(1); Push(Stack[-7] % Stack[-1]);
0x26: Stack[-9] = Stack[-8] - Stack[-1]; Pop(1);
0x27: Push(GlobalVars[0])
0x28: Push(GlobalVars[1])
0x29: Push(GlobalVars[2])
0x2a: @ GetItemPosByID(Stack[-7], Stack[-3], Stack[-2], Stack[-1])
0x2b: Pop(3)
0x2c: Push((int) -1)
0x2d: Pop(1); Push((bool) Stack[-5] != Stack[-1])
0x2e: IF (Stack[-1] == 0) GOTO 0x4f; Pop(1)

0x2f: Push(GlobalVars[2])
0x30: @ GetItem(Stack[-4], Stack[-5], Stack[-1])
0x31: Pop(1)
0x32: Push("durability")
0x33: @@ HasProperty(Stack[-3], Stack[-1])
0x34: Pop(1)
0x35: Push(Stack[-2])
0x36: IF (Stack[-1] == 0) GOTO 0x42; Pop(1)

0x37: Push("durability")
0x38: @@ GetProperty(Stack[-2], Stack[-1])
0x39: Pop(1)
0x3a: PushEmpty(int, int, int, int)
0x3b: Stack[-3] = Stack[-5] - Stack[-9]; Pop(0);
0x3c: Stack[-2] = (int) 0
0x3d: Stack[-1] = (int) 100
0x3e: Call2 0xc9

0x3f: Stack[-5] = Stack[-4]
0x40: Pop(4)
0x41: GOTO 0x43

0x42: Stack[-1] = (int) 100
0x43: Push("durability")
0x44: @@ SetProperty(Stack[-1], Stack[-2])
0x45: Pop(1)
0x46: Push((int) 1)
0x47: Push(GlobalVars[2])
0x48: @ SetItem(Stack[-5], Stack[-2], Stack[-6], Stack[-1])
0x49: Pop(2)
0x4a: PushEmpty(int)
0x4b: Stack[-1] = Stack[-2]
0x4c: Call2 0xd4

0x4d: Pop(1)
0x4e: Stack[-3] = 0
0x4f: @ sync()
0x50: Pop(0)
0x51: Push( Stack[0 + Tasks[-1].StackPointer] )
0x52: IF (Stack[-1] == 0) GOTO 0x54; Pop(1)

0x53: GOTO 0x55

0x54: GOTO 0x1c

0x55: Return(); Pop(16)

0x56: PushEmpty(string, int)
0x57: Stack[-2] = "armor"
0x58: Push(GlobalVars[3])
0x59: Stack[-2] = -Stack[-1]; Pop(1);
0x5a: Call2 0xc2

0x5b: Pop(2)
0x5c: PushEmpty(string, int)
0x5d: Stack[-2] = "armor_fire"
0x5e: Push(GlobalVars[4])
0x5f: Stack[-2] = -Stack[-1]; Pop(1);
0x60: Call2 0xc2

0x61: Pop(2)
0x62: PushEmpty(string, int)
0x63: Stack[-2] = "armor_phys"
0x64: Push(GlobalVars[5])
0x65: Stack[-2] = -Stack[-1]; Pop(1);
0x66: Call2 0xc2

0x67: Pop(2)
0x68: PushEmpty(string, int)
0x69: Stack[-2] = "armor_bullet"
0x6a: Push(GlobalVars[6])
0x6b: Stack[-2] = -Stack[-1]; Pop(1);
0x6c: Call2 0xc2

0x6d: Pop(2)
0x6e: PushEmpty(string, int)
0x6f: Stack[-2] = "armor_disease"
0x70: Push(GlobalVars[7])
0x71: Stack[-2] = -Stack[-1]; Pop(1);
0x72: Call2 0xc2

0x73: Pop(2)
0x74: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x75: Return(); Pop(0)

0x76: PushEmpty(int, object, bool, int, int, object, bool, int)
0x77: Push(GlobalVars[0])
0x78: Push(GlobalVars[1])
0x79: Push(GlobalVars[2])
0x7a: @ GetItemPosByID(Stack[-7], Stack[-3], Stack[-2], Stack[-1])
0x7b: Pop(3)
0x7c: Push((int) -1)
0x7d: Pop(1); Push((bool) Stack[-5] != Stack[-1])
0x7e: IF (Stack[-1] == 0) GOTO 0x98; Pop(1)

0x7f: Push(GlobalVars[2])
0x80: @ GetItem(Stack[-4], Stack[-5], Stack[-1])
0x81: Pop(1)
0x82: Push("durability")
0x83: @@ HasProperty(Stack[-3], Stack[-1])
0x84: Pop(1)
0x85: Pop(0); Push((bool) Stack[-2] == 0)
0x86: IF (Stack[-1] == 0) GOTO 0x90; Pop(1)

0x87: Stack[-1] = (int) 100
0x88: Push("durability")
0x89: @@ SetProperty(Stack[-1], Stack[-2])
0x8a: Pop(1)
0x8b: Push((int) 1)
0x8c: Push(GlobalVars[2])
0x8d: @ SetItem(Stack[-5], Stack[-2], Stack[-6], Stack[-1])
0x8e: Pop(2)
0x8f: GOTO 0x93

0x90: Push("durability")
0x91: @@ GetProperty(Stack[-2], Stack[-1])
0x92: Pop(1)
0x93: PushEmpty(int)
0x94: Stack[-1] = Stack[-2]
0x95: Call2 0xd4

0x96: Pop(1)
0x97: Stack[-3] = 0
0x98: Return(); Pop(8)

0x99: Return(); Pop(0)

0x9a: PushEmpty()
0x9b: PushEmpty(int, int, int)
0x9c: Stack[-3] = Stack[-6]
0x9d: Stack[-2] = Stack[-5]
0x9e: Stack[-1] = Stack[-4]
0x9f: Call2 0xac

0xa0: Pop(3)
0xa1: Return(); Pop(0)

0xa2: PushEmpty()
0xa3: Pop(0); Push((bool) Stack[-2] == 0)
0xa4: IF (Stack[-1] == 0) GOTO 0xab; Pop(1)

0xa5: PushEmpty(int, int, int)
0xa6: Stack[-3] = Stack[-7]
0xa7: Stack[-2] = Stack[-6]
0xa8: Stack[-1] = Stack[-4]
0xa9: Call2 0xac

0xaa: Pop(3)
0xab: Return(); Pop(0)

0xac: PushEmpty()
0xad: PushEmpty(bool)
0xae: Stack[-1] = (bool) 0
0xaf: PushEmpty(bool)
0xb0: Stack[-1] = (bool) 0
0xb1: Push(GlobalVars[0])
0xb2: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0xb3: IF (Stack[-1] == 0) GOTO 0xb8; Pop(1)

0xb4: Push(GlobalVars[1])
0xb5: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0xb6: IF (Stack[-1] == 0) GOTO 0xb8; Pop(1)

0xb7: Stack[-1] = (bool) 1
0xb8: IF (Stack[-1] == 0) GOTO 0xbd; Pop(1)

0xb9: Push(GlobalVars[2])
0xba: Pop(1); Push((bool) Stack[-1] == Stack[-3])
0xbb: IF (Stack[-1] == 0) GOTO 0xbd; Pop(1)

0xbc: Stack[-1] = (bool) 1
0xbd: IF (Stack[-1] == 0) GOTO 0xc1; Pop(1)

0xbe: PushEmpty()
0xbf: Call2 0x56

0xc0: Pop(0)
0xc1: Return(); Pop(0)

0xc2: PushEmpty(int, int)
0xc3: @ GetProperty(Stack[-4], Stack[-1])
0xc4: Pop(0)
0xc5: Pop(0); Push(Stack[-1] + Stack[-3]);
0xc6: @ SetProperty(Stack[-5], Stack[-1])
0xc7: Pop(1)
0xc8: Return(); Pop(2)

0xc9: PushEmpty()
0xca: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0xcb: IF (Stack[-1] == 0) GOTO 0xce; Pop(1)

0xcc: Stack[-4] = Stack[-2]
0xcd: Return(); Pop(0)

0xce: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0xcf: IF (Stack[-1] == 0) GOTO 0xd2; Pop(1)

0xd0: Stack[-4] = Stack[-1]
0xd1: Return(); Pop(0)

0xd2: Stack[-4] = Stack[-3]
0xd3: Return(); Pop(0)

0xd4: PushEmpty()
0xd5: Push(GlobalVars[3])
0xd6: PushEmpty(int, string, int, int, int)
0xd7: Stack[-4] = "armor"
0xd8: Push(GlobalVars[3])
0xd9: Stack[-4] = Stack[-1]
0xda: Pop(1)
0xdb: Stack[-2] = Stack[-7]
0xdc: Stack[-1] = (int) 30
0xdd: Call2 0x112

0xde: Stack[-6] = Stack[-5]
0xdf: Pop(5)
0xe0: GlobalVars[3] = Stack[-1]; Pop(1)
0xe1: Push(GlobalVars[4])
0xe2: PushEmpty(int, string, int, int, int)
0xe3: Stack[-4] = "armor_fire"
0xe4: Push(GlobalVars[4])
0xe5: Stack[-4] = Stack[-1]
0xe6: Pop(1)
0xe7: Stack[-2] = Stack[-7]
0xe8: Stack[-1] = (int) 10
0xe9: Call2 0x112

0xea: Stack[-6] = Stack[-5]
0xeb: Pop(5)
0xec: GlobalVars[4] = Stack[-1]; Pop(1)
0xed: Push(GlobalVars[5])
0xee: PushEmpty(int, string, int, int, int)
0xef: Stack[-4] = "armor_phys"
0xf0: Push(GlobalVars[5])
0xf1: Stack[-4] = Stack[-1]
0xf2: Pop(1)
0xf3: Stack[-2] = Stack[-7]
0xf4: Stack[-1] = (int) 0
0xf5: Call2 0x112

0xf6: Stack[-6] = Stack[-5]
0xf7: Pop(5)
0xf8: GlobalVars[5] = Stack[-1]; Pop(1)
0xf9: Push(GlobalVars[6])
0xfa: PushEmpty(int, string, int, int, int)
0xfb: Stack[-4] = "armor_bullet"
0xfc: Push(GlobalVars[6])
0xfd: Stack[-4] = Stack[-1]
0xfe: Pop(1)
0xff: Stack[-2] = Stack[-7]
0x100: Stack[-1] = (int) 0
0x101: Call2 0x112

0x102: Stack[-6] = Stack[-5]
0x103: Pop(5)
0x104: GlobalVars[6] = Stack[-1]; Pop(1)
0x105: Push(GlobalVars[7])
0x106: PushEmpty(int, string, int, int, int)
0x107: Stack[-4] = "armor_disease"
0x108: Push(GlobalVars[7])
0x109: Stack[-4] = Stack[-1]
0x10a: Pop(1)
0x10b: Stack[-2] = Stack[-7]
0x10c: Stack[-1] = (int) 20
0x10d: Call2 0x112

0x10e: Stack[-6] = Stack[-5]
0x10f: Pop(5)
0x110: GlobalVars[7] = Stack[-1]; Pop(1)
0x111: Return(); Pop(0)

0x112: PushEmpty(int, int)
0x113: Push((float)100.0)
0x114: Pop(1); Push(Stack[-5] / Stack[-1]);
0x115: Stack[-2] = Stack[-4] * Stack[-1]; Pop(1);
0x116: Pop(0); Push((bool) Stack[-1] != Stack[-5])
0x117: IF (Stack[-1] == 0) GOTO 0x11d; Pop(1)

0x118: PushEmpty(string, int)
0x119: Stack[-2] = Stack[-8]
0x11a: Stack[-1] = Stack[-3] - Stack[-7]; Pop(0);
0x11b: Call2 0xc2

0x11c: Pop(2)
0x11d: Stack[-7] = Stack[-1]
0x11e: Return(); Pop(2)

0x11f: PushEmpty(int, int, float, int, object, bool, int, int, int, int, float, int, object, bool, int, int)
0x120: Push((int) 5)
0x121: Pop(1); Push((bool) Stack[-20] == Stack[-1])
0x122: IF (Stack[-1] == 0) GOTO 0x124; Pop(1)

0x123: GOTO 0x170

0x124: Push(GlobalVars[3])
0x125: Stack[-9] = Stack[-1]
0x126: Pop(1)
0x127: Push((int) 4)
0x128: Pop(1); Push((bool) Stack[-20] == Stack[-1])
0x129: IF (Stack[-1] == 0) GOTO 0x12d; Pop(1)

0x12a: Push(GlobalVars[4])
0x12b: Stack[-9] = Stack[-9] + Stack[-1]; Pop(1);
0x12c: GOTO 0x135

0x12d: Push((int) 2)
0x12e: Pop(1); Push((bool) Stack[-20] == Stack[-1])
0x12f: IF (Stack[-1] == 0) GOTO 0x133; Pop(1)

0x130: Push(GlobalVars[6])
0x131: Stack[-9] = Stack[-9] + Stack[-1]; Pop(1);
0x132: GOTO 0x135

0x133: Push(GlobalVars[5])
0x134: Stack[-9] = Stack[-9] + Stack[-1]; Pop(1);
0x135: Push("armor")
0x136: @ GetProperty(Stack[-1], Stack[-8])
0x137: Pop(1)
0x138: Pop(0); Push((bool) Stack[-7] == 0)
0x139: IF (Stack[-1] == 0) GOTO 0x13c; Pop(1)

0x13a: Stack[-6] = (int) 1
0x13b: GOTO 0x13f

0x13c: PushEmpty(float)
0x13d: Stack[-1] = Stack[-9]
0x13e: Stack[-7] = Stack[-1] / Stack[-8]; Pop(1);
0x13f: Push((float)0.75)
0x140: Stack[-7] = Stack[-7] * Stack[-1]; Pop(1);
0x141: Push((int) 0)
0x142: Pop(1); Push((bool) Stack[-7] > Stack[-1])
0x143: IF (Stack[-1] == 0) GOTO 0x170; Pop(1)

0x144: Push(GlobalVars[0])
0x145: Push(GlobalVars[1])
0x146: Push(GlobalVars[2])
0x147: @ GetItemPosByID(Stack[-8], Stack[-3], Stack[-2], Stack[-1])
0x148: Pop(3)
0x149: Push((int) -1)
0x14a: Pop(1); Push((bool) Stack[-6] != Stack[-1])
0x14b: IF (Stack[-1] == 0) GOTO 0x170; Pop(1)

0x14c: Push(GlobalVars[2])
0x14d: @ GetItem(Stack[-5], Stack[-6], Stack[-1])
0x14e: Pop(1)
0x14f: Push("durability")
0x150: @@ HasProperty(Stack[-4], Stack[-1])
0x151: Pop(1)
0x152: Push(Stack[-3])
0x153: IF (Stack[-1] == 0) GOTO 0x16f; Pop(1)

0x154: PushEmpty(int)
0x155: Pop(0); Push(Stack[-7] * Stack[-18]);
0x156: Push((float)100.0)
0x157: Stack[-3] = Stack[-2] * Stack[-1]; Pop(2);
0x158: Stack[-3] = Stack[-1]
0x159: Pop(1)
0x15a: Push("durability")
0x15b: @@ GetProperty(Stack[-2], Stack[-1])
0x15c: Pop(1)
0x15d: PushEmpty(int, int, int, int)
0x15e: Stack[-3] = Stack[-5] - Stack[-6]; Pop(0);
0x15f: Stack[-2] = (int) 0
0x160: Stack[-1] = (int) 100
0x161: Call2 0xc9

0x162: Stack[-5] = Stack[-4]
0x163: Pop(4)
0x164: Push("durability")
0x165: @@ SetProperty(Stack[-1], Stack[-2])
0x166: Pop(1)
0x167: Push((int) 1)
0x168: Push(GlobalVars[2])
0x169: @ SetItem(Stack[-6], Stack[-2], Stack[-7], Stack[-1])
0x16a: Pop(2)
0x16b: PushEmpty(int)
0x16c: Stack[-1] = Stack[-2]
0x16d: Call2 0xd4

0x16e: Pop(1)
0x16f: Stack[-4] = 0
0x170: Return(); Pop(16)

0x171: PushEmpty()
0x172: PushEmpty(object, int, float, float)
0x173: Stack[-4] = Stack[-10]
0x174: Stack[-3] = Stack[-9]
0x175: Stack[-2] = Stack[-8]
0x176: Stack[-1] = Stack[-7]
0x177: Call2 0x11f

0x178: Pop(4)
0x179: Return(); Pop(0)

