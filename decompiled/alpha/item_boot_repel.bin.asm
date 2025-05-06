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
	armor_disease
	visibility
	audibility

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
		EVENT_34 Op = 0xa0 Vars = (object, int, int, int)
		EVENT_35 Op = 0xa8 Vars = (object, int, int, bool, int)

Events:
EVENT_22 Op = 0x131 Vars = (object, int, float, float)

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
0x15: Call 0x9f

0x16: Pop(0)
0x17: PushEmpty()
0x18: Call 0x7c

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
0x3e: Call 0xcf

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
0x4c: Call 0xda

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
0x5a: Call 0xc8

0x5b: Pop(2)
0x5c: PushEmpty(string, int)
0x5d: Stack[-2] = "armor_fire"
0x5e: Push(GlobalVars[4])
0x5f: Stack[-2] = -Stack[-1]; Pop(1);
0x60: Call 0xc8

0x61: Pop(2)
0x62: PushEmpty(string, int)
0x63: Stack[-2] = "armor_phys"
0x64: Push(GlobalVars[5])
0x65: Stack[-2] = -Stack[-1]; Pop(1);
0x66: Call 0xc8

0x67: Pop(2)
0x68: PushEmpty(string, int)
0x69: Stack[-2] = "armor_disease"
0x6a: Push(GlobalVars[6])
0x6b: Stack[-2] = -Stack[-1]; Pop(1);
0x6c: Call 0xc8

0x6d: Pop(2)
0x6e: PushEmpty(string, int)
0x6f: Stack[-2] = "visibility"
0x70: Push(GlobalVars[7])
0x71: Stack[-2] = -Stack[-1]; Pop(1);
0x72: Call 0xc8

0x73: Pop(2)
0x74: PushEmpty(string, int)
0x75: Stack[-2] = "audibility"
0x76: Push(GlobalVars[8])
0x77: Stack[-2] = -Stack[-1]; Pop(1);
0x78: Call 0xc8

0x79: Pop(2)
0x7a: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x7b: Return(); Pop(0)

0x7c: PushEmpty(int, object, bool, int, int, object, bool, int)
0x7d: Push(GlobalVars[0])
0x7e: Push(GlobalVars[1])
0x7f: Push(GlobalVars[2])
0x80: @ GetItemPosByID(Stack[-7], Stack[-3], Stack[-2], Stack[-1])
0x81: Pop(3)
0x82: Push((int) -1)
0x83: Pop(1); Push((bool) Stack[-5] != Stack[-1])
0x84: IF (Stack[-1] == 0) GOTO 0x9e; Pop(1)

0x85: Push(GlobalVars[2])
0x86: @ GetItem(Stack[-4], Stack[-5], Stack[-1])
0x87: Pop(1)
0x88: Push("durability")
0x89: @@ HasProperty(Stack[-3], Stack[-1])
0x8a: Pop(1)
0x8b: Pop(0); Push((bool) Stack[-2] == 0)
0x8c: IF (Stack[-1] == 0) GOTO 0x96; Pop(1)

0x8d: Stack[-1] = (int) 100
0x8e: Push("durability")
0x8f: @@ SetProperty(Stack[-1], Stack[-2])
0x90: Pop(1)
0x91: Push((int) 1)
0x92: Push(GlobalVars[2])
0x93: @ SetItem(Stack[-5], Stack[-2], Stack[-6], Stack[-1])
0x94: Pop(2)
0x95: GOTO 0x99

0x96: Push("durability")
0x97: @@ GetProperty(Stack[-2], Stack[-1])
0x98: Pop(1)
0x99: PushEmpty(int)
0x9a: Stack[-1] = Stack[-2]
0x9b: Call 0xda

0x9c: Pop(1)
0x9d: Stack[-3] = 0
0x9e: Return(); Pop(8)

0x9f: Return(); Pop(0)

0xa0: PushEmpty()
0xa1: PushEmpty(int, int, int)
0xa2: Stack[-3] = Stack[-6]
0xa3: Stack[-2] = Stack[-5]
0xa4: Stack[-1] = Stack[-4]
0xa5: Call 0xb2

0xa6: Pop(3)
0xa7: Return(); Pop(0)

0xa8: PushEmpty()
0xa9: Pop(0); Push((bool) Stack[-2] == 0)
0xaa: IF (Stack[-1] == 0) GOTO 0xb1; Pop(1)

0xab: PushEmpty(int, int, int)
0xac: Stack[-3] = Stack[-7]
0xad: Stack[-2] = Stack[-6]
0xae: Stack[-1] = Stack[-4]
0xaf: Call 0xb2

0xb0: Pop(3)
0xb1: Return(); Pop(0)

0xb2: PushEmpty()
0xb3: PushEmpty(bool)
0xb4: Stack[-1] = (bool) 0
0xb5: PushEmpty(bool)
0xb6: Stack[-1] = (bool) 0
0xb7: Push(GlobalVars[0])
0xb8: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0xb9: IF (Stack[-1] == 0) GOTO 0xbe; Pop(1)

0xba: Push(GlobalVars[1])
0xbb: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0xbc: IF (Stack[-1] == 0) GOTO 0xbe; Pop(1)

0xbd: Stack[-1] = (bool) 1
0xbe: IF (Stack[-1] == 0) GOTO 0xc3; Pop(1)

0xbf: Push(GlobalVars[2])
0xc0: Pop(1); Push((bool) Stack[-1] == Stack[-3])
0xc1: IF (Stack[-1] == 0) GOTO 0xc3; Pop(1)

0xc2: Stack[-1] = (bool) 1
0xc3: IF (Stack[-1] == 0) GOTO 0xc7; Pop(1)

0xc4: PushEmpty()
0xc5: Call 0x56

0xc6: Pop(0)
0xc7: Return(); Pop(0)

0xc8: PushEmpty(int, int)
0xc9: @ GetProperty(Stack[-4], Stack[-1])
0xca: Pop(0)
0xcb: Pop(0); Push(Stack[-1] + Stack[-3]);
0xcc: @ SetProperty(Stack[-5], Stack[-1])
0xcd: Pop(1)
0xce: Return(); Pop(2)

0xcf: PushEmpty()
0xd0: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0xd1: IF (Stack[-1] == 0) GOTO 0xd4; Pop(1)

0xd2: Stack[-4] = Stack[-2]
0xd3: Return(); Pop(0)

0xd4: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0xd5: IF (Stack[-1] == 0) GOTO 0xd8; Pop(1)

0xd6: Stack[-4] = Stack[-1]
0xd7: Return(); Pop(0)

0xd8: Stack[-4] = Stack[-3]
0xd9: Return(); Pop(0)

0xda: PushEmpty()
0xdb: Push(GlobalVars[3])
0xdc: PushEmpty(int, string, int, int, int)
0xdd: Stack[-4] = "armor"
0xde: Push(GlobalVars[3])
0xdf: Stack[-4] = Stack[-1]
0xe0: Pop(1)
0xe1: Stack[-2] = Stack[-7]
0xe2: Stack[-1] = (int) 15
0xe3: Call 0x124

0xe4: Stack[-6] = Stack[-5]
0xe5: Pop(5)
0xe6: GlobalVars[3] = Stack[-1]; Pop(1)
0xe7: Push(GlobalVars[4])
0xe8: PushEmpty(int, string, int, int, int)
0xe9: Stack[-4] = "armor_fire"
0xea: Push(GlobalVars[4])
0xeb: Stack[-4] = Stack[-1]
0xec: Pop(1)
0xed: Stack[-2] = Stack[-7]
0xee: Stack[-1] = (int) 10
0xef: Call 0x124

0xf0: Stack[-6] = Stack[-5]
0xf1: Pop(5)
0xf2: GlobalVars[4] = Stack[-1]; Pop(1)
0xf3: Push(GlobalVars[5])
0xf4: PushEmpty(int, string, int, int, int)
0xf5: Stack[-4] = "armor_phys"
0xf6: Push(GlobalVars[5])
0xf7: Stack[-4] = Stack[-1]
0xf8: Pop(1)
0xf9: Stack[-2] = Stack[-7]
0xfa: Stack[-1] = (int) 0
0xfb: Call 0x124

0xfc: Stack[-6] = Stack[-5]
0xfd: Pop(5)
0xfe: GlobalVars[5] = Stack[-1]; Pop(1)
0xff: Push(GlobalVars[6])
0x100: PushEmpty(int, string, int, int, int)
0x101: Stack[-4] = "armor_disease"
0x102: Push(GlobalVars[6])
0x103: Stack[-4] = Stack[-1]
0x104: Pop(1)
0x105: Stack[-2] = Stack[-7]
0x106: Stack[-1] = (int) 30
0x107: Call 0x124

0x108: Stack[-6] = Stack[-5]
0x109: Pop(5)
0x10a: GlobalVars[6] = Stack[-1]; Pop(1)
0x10b: Push(GlobalVars[7])
0x10c: PushEmpty(int, string, int, int, int)
0x10d: Stack[-4] = "visibility"
0x10e: Push(GlobalVars[7])
0x10f: Stack[-4] = Stack[-1]
0x110: Pop(1)
0x111: Stack[-2] = Stack[-7]
0x112: Stack[-1] = (int) 0
0x113: Call 0x124

0x114: Stack[-6] = Stack[-5]
0x115: Pop(5)
0x116: GlobalVars[7] = Stack[-1]; Pop(1)
0x117: Push(GlobalVars[8])
0x118: PushEmpty(int, string, int, int, int)
0x119: Stack[-4] = "audibility"
0x11a: Push(GlobalVars[8])
0x11b: Stack[-4] = Stack[-1]
0x11c: Pop(1)
0x11d: Stack[-2] = Stack[-7]
0x11e: Stack[-1] = (int) -10
0x11f: Call 0x124

0x120: Stack[-6] = Stack[-5]
0x121: Pop(5)
0x122: GlobalVars[8] = Stack[-1]; Pop(1)
0x123: Return(); Pop(0)

0x124: PushEmpty(int, int)
0x125: Push((float)100.0)
0x126: Pop(1); Push(Stack[-5] / Stack[-1]);
0x127: Stack[-2] = Stack[-4] * Stack[-1]; Pop(1);
0x128: Pop(0); Push((bool) Stack[-1] != Stack[-5])
0x129: IF (Stack[-1] == 0) GOTO 0x12f; Pop(1)

0x12a: PushEmpty(string, int)
0x12b: Stack[-2] = Stack[-8]
0x12c: Stack[-1] = Stack[-3] - Stack[-7]; Pop(0);
0x12d: Call 0xc8

0x12e: Pop(2)
0x12f: Stack[-7] = Stack[-1]
0x130: Return(); Pop(2)

0x131: PushEmpty(int, int, float, int, object, bool, int, int, int, int, float, int, object, bool, int, int)
0x132: Push((int) 5)
0x133: Pop(1); Push((bool) Stack[-20] == Stack[-1])
0x134: IF (Stack[-1] == 0) GOTO 0x136; Pop(1)

0x135: GOTO 0x17c

0x136: Push(GlobalVars[3])
0x137: Stack[-9] = Stack[-1]
0x138: Pop(1)
0x139: Push((int) 4)
0x13a: Pop(1); Push((bool) Stack[-20] == Stack[-1])
0x13b: IF (Stack[-1] == 0) GOTO 0x13f; Pop(1)

0x13c: Push(GlobalVars[4])
0x13d: Stack[-9] = Stack[-9] + Stack[-1]; Pop(1);
0x13e: GOTO 0x141

0x13f: Push(GlobalVars[5])
0x140: Stack[-9] = Stack[-9] + Stack[-1]; Pop(1);
0x141: Push("armor")
0x142: @ GetProperty(Stack[-1], Stack[-8])
0x143: Pop(1)
0x144: Pop(0); Push((bool) Stack[-7] == 0)
0x145: IF (Stack[-1] == 0) GOTO 0x148; Pop(1)

0x146: Stack[-6] = (int) 1
0x147: GOTO 0x14b

0x148: PushEmpty(float)
0x149: Stack[-1] = Stack[-9]
0x14a: Stack[-7] = Stack[-1] / Stack[-8]; Pop(1);
0x14b: Push((float)0.75)
0x14c: Stack[-7] = Stack[-7] * Stack[-1]; Pop(1);
0x14d: Push((int) 0)
0x14e: Pop(1); Push((bool) Stack[-7] > Stack[-1])
0x14f: IF (Stack[-1] == 0) GOTO 0x17c; Pop(1)

0x150: Push(GlobalVars[0])
0x151: Push(GlobalVars[1])
0x152: Push(GlobalVars[2])
0x153: @ GetItemPosByID(Stack[-8], Stack[-3], Stack[-2], Stack[-1])
0x154: Pop(3)
0x155: Push((int) -1)
0x156: Pop(1); Push((bool) Stack[-6] != Stack[-1])
0x157: IF (Stack[-1] == 0) GOTO 0x17c; Pop(1)

0x158: Push(GlobalVars[2])
0x159: @ GetItem(Stack[-5], Stack[-6], Stack[-1])
0x15a: Pop(1)
0x15b: Push("durability")
0x15c: @@ HasProperty(Stack[-4], Stack[-1])
0x15d: Pop(1)
0x15e: Push(Stack[-3])
0x15f: IF (Stack[-1] == 0) GOTO 0x17b; Pop(1)

0x160: PushEmpty(int)
0x161: Pop(0); Push(Stack[-7] * Stack[-18]);
0x162: Push((float)100.0)
0x163: Stack[-3] = Stack[-2] * Stack[-1]; Pop(2);
0x164: Stack[-3] = Stack[-1]
0x165: Pop(1)
0x166: Push("durability")
0x167: @@ GetProperty(Stack[-2], Stack[-1])
0x168: Pop(1)
0x169: PushEmpty(int, int, int, int)
0x16a: Stack[-3] = Stack[-5] - Stack[-6]; Pop(0);
0x16b: Stack[-2] = (int) 0
0x16c: Stack[-1] = (int) 100
0x16d: Call 0xcf

0x16e: Stack[-5] = Stack[-4]
0x16f: Pop(4)
0x170: Push("durability")
0x171: @@ SetProperty(Stack[-1], Stack[-2])
0x172: Pop(1)
0x173: Push((int) 1)
0x174: Push(GlobalVars[2])
0x175: @ SetItem(Stack[-6], Stack[-2], Stack[-7], Stack[-1])
0x176: Pop(2)
0x177: PushEmpty(int)
0x178: Stack[-1] = Stack[-2]
0x179: Call 0xda

0x17a: Pop(1)
0x17b: Stack[-4] = 0
0x17c: Return(); Pop(16)

