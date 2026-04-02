GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	W:k5q03
	W:pt_k5q03_enemy1
	W:pers_hunter
	W:k5q03_e_hunter.xml
	A:add
	W:pt_k5q03_enemy2
	W:pt_k5q03_enemy3
	W:pt_k5q03_enemy4
	W:abinos_unload
	W:completed
	W:spawning albinos
	W:pt_k5q03_albinos_path
	W:pers_albinos
	W:k5q03_albinos.xml
	W:cleanup
	A:Remove
	A:GetPosition
	A:GetLocator
	W:Locator 
	W: doesn't exist
	A:AddStationaryActor
	A:size
	A:get
	W:player
// @pool_raw:6b0035007100300033000000700074005f006b0035007100300033005f0065006e0065006d0079003100000070006500720073005f00680075006e0074006500720000006b0035007100300033005f0065005f00680075006e007400650072002e0078006d006c00000061646400700074005f006b0035007100300033005f0065006e0065006d00790032000000700074005f006b0035007100300033005f0065006e0065006d00790033000000700074005f006b0035007100300033005f0065006e0065006d007900340000006100620069006e006f0073005f0075006e006c006f0061006400000063006f006d0070006c006500740065006400000073007000610077006e0069006e006700200061006c00620069006e006f0073000000700074005f006b0035007100300033005f0061006c00620069006e006f0073005f007000610074006800000070006500720073005f0061006c00620069006e006f00730000006b0035007100300033005f0061006c00620069006e006f0073002e0078006d006c00000063006c00650061006e0075007000000052656d6f766500476574506f736974696f6e004765744c6f6361746f72004c006f006300610074006f00720020000000200064006f00650073006e0027007400200065007800690073007400000041646453746174696f6e6172794163746f720073697a65006765740070006c0061007900650072000000

Import:
	SetVariable (2 args)
	SetTimeEvent (2 args)
	CreateObjectVector (1 args)
	GetMainOutdoorScene (1 args)
	Trace (1 args)
	GetScene (1 args)
	GetVariable (2 args)
	RemoveActor (1 args)
	GetGameTime (1 args)
	Hold (0 args)
	self (1 args)
	AddActor (6 args)
	Trigger (2 args)
	FindActor (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object, object) Params = 0
		EVENT_26 Op = 0x41 Vars = (string)
		EVENT_9 Op = 0x52 Vars = (int, float)


0x0: PushEmpty(object, object)
0x1: Push("k5q03") // @poff=0
0x2: Push((int) 1)
0x3: @ SetVariable(Stack[-2], Stack[-1])
0x4: Pop(2)
0x5: PushEmpty(int)
0x6: Call2 0x12f

0x7: Pop(0)
0x8: Push((int) 21)
0x9: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0xa: IF (Stack[-1] == 0) GOTO 0x10; Pop(1)

0xb: Push((int) 1)
0xc: Push((int) 117)
0xd: @ SetTimeEvent(Stack[-2], Stack[-1])
0xe: Pop(2)
0xf: GOTO 0x13

0x10: PushEmpty()
0x11: Call2 0x63

0x12: Pop(0)
0x13: @ CreateObjectVector(Stack[-1]T)
0x14: Pop(0)
0x15: @ GetMainOutdoorScene(Stack[-1])
0x16: Pop(0)
0x17: PushEmpty(object, object, string, string, string)
0x18: Stack[-6] = Stack[-4]
0x19: Stack[-3] = "pt_k5q03_enemy1" // @poff=12
0x1a: Stack[-2] = "pers_hunter" // @poff=44
0x1b: Stack[-1] = "k5q03_e_hunter.xml" // @poff=68
0x1c: Call2 0xe5

0x1d: Pop(4)
0x1e: @@@ add(Stack[-1]); Obj=1 // @poff=106
0x1f: Pop(1)
0x20: PushEmpty(object, object, string, string, string)
0x21: Stack[-6] = Stack[-4]
0x22: Stack[-3] = "pt_k5q03_enemy2" // @poff=110
0x23: Stack[-2] = "pers_hunter" // @poff=44
0x24: Stack[-1] = "k5q03_e_hunter.xml" // @poff=68
0x25: Call2 0xe5

0x26: Pop(4)
0x27: @@@ add(Stack[-1]); Obj=1 // @poff=106
0x28: Pop(1)
0x29: PushEmpty(object, object, string, string, string)
0x2a: Stack[-6] = Stack[-4]
0x2b: Stack[-3] = "pt_k5q03_enemy3" // @poff=142
0x2c: Stack[-2] = "pers_hunter" // @poff=44
0x2d: Stack[-1] = "k5q03_e_hunter.xml" // @poff=68
0x2e: Call2 0xe5

0x2f: Pop(4)
0x30: @@@ add(Stack[-1]); Obj=1 // @poff=106
0x31: Pop(1)
0x32: PushEmpty(object, object, string, string, string)
0x33: Stack[-6] = Stack[-4]
0x34: Stack[-3] = "pt_k5q03_enemy4" // @poff=174
0x35: Stack[-2] = "pers_hunter" // @poff=44
0x36: Stack[-1] = "k5q03_e_hunter.xml" // @poff=68
0x37: Call2 0xe5

0x38: Pop(4)
0x39: @@@ add(Stack[-1]); Obj=1 // @poff=106
0x3a: Pop(1)
0x3b: PushEmpty(int)
0x3c: Stack[-1] = (int) 5
0x3d: Call2 0xc2

0x3e: Pop(1)
0x3f: Return(); Pop(2)

0x40: Stack[-1] = 0
0x41: PushEmpty()
0x42: @ Trace(Stack[-1])
0x43: Pop(0)
0x44: Push("abinos_unload") // @poff=206
0x45: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x46: IF (Stack[-1] == 0) GOTO 0x4b; Pop(1)

0x47: PushEmpty()
0x48: Call2 0x63

0x49: Pop(0)
0x4a: GOTO 0x51

0x4b: Push("completed") // @poff=234
0x4c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4d: IF (Stack[-1] == 0) GOTO 0x51; Pop(1)

0x4e: PushEmpty()
0x4f: Call2 0xa9

0x50: Pop(0)
0x51: Return(); Pop(0)

0x52: PushEmpty()
0x53: Push((int) 1)
0x54: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x55: IF (Stack[-1] == 0) GOTO 0x5d; Pop(1)

0x56: Push("spawning albinos") // @poff=254
0x57: @ Trace(Stack[-1])
0x58: Pop(1)
0x59: PushEmpty()
0x5a: Call2 0x63

0x5b: Pop(0)
0x5c: GOTO 0x62

0x5d: PushEmpty(int, float)
0x5e: Stack[-4] = Stack[-2]
0x5f: Stack[-3] = Stack[-1]
0x60: Call2 0xd5

0x61: Pop(2)
0x62: Return(); Pop(0)

0x63: PushEmpty(object, object, int, object, object, int)
0x64: @ GetMainOutdoorScene(Stack[-3])
0x65: Pop(0)
0x66: @ GetScene(Stack[-2])
0x67: Pop(0)
0x68: Pop(0); Push((bool) Stack[-3] != Stack[-2])
0x69: IF (Stack[-1] == 0) GOTO 0x7e; Pop(1)

0x6a: Push("pt_k5q03_albinos_path") // @poff=288
0x6b: Push((int) -1)
0x6c: @ SetVariable(Stack[-2], Stack[-1])
0x6d: Pop(2)
0x6e: PushEmpty(object, object, string, string, string)
0x6f: Stack[-8] = Stack[-4]
0x70: Push("pt_k5q03_albinos_path") // @poff=288
0x71: PushEmpty(int, string)
0x72: Stack[-1] = "pt_k5q03_albinos_path" // @poff=288
0x73: Call2 0x182

0x74: Pop(1)
0x75: Push((int) 1)
0x76: Pop(2); Push(Stack[-2] + Stack[-1]);
0x77: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x78: Stack[-2] = "pers_albinos" // @poff=332
0x79: Stack[-1] = "k5q03_albinos.xml" // @poff=358
0x7a: Call2 0xf7

0x7b: Stack[0 + Tasks[-1].StackPointer] = Stack[-5]
0x7c: Pop(5)
0x7d: GOTO 0x93

0x7e: PushEmpty(int, string)
0x7f: Stack[-1] = "pt_k5q03_albinos_path" // @poff=288
0x80: Call2 0x157

0x81: Stack[-2] = Stack[-3]
0x82: Pop(2)
0x83: @ Trace(Stack[-1])
0x84: Pop(0)
0x85: Push("pt_k5q03_albinos_path") // @poff=288
0x86: @ SetVariable(Stack[-1], Stack[-2])
0x87: Pop(1)
0x88: PushEmpty(object, object, string, string, string)
0x89: Stack[-8] = Stack[-4]
0x8a: Push("pt_k5q03_albinos_path") // @poff=288
0x8b: Push((int) 1)
0x8c: Pop(1); Push(Stack[-8] + Stack[-1]);
0x8d: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x8e: Stack[-2] = "pers_albinos" // @poff=332
0x8f: Stack[-1] = "k5q03_albinos.xml" // @poff=358
0x90: Call2 0x109

0x91: Stack[0 + Tasks[-1].StackPointer] = Stack[-5]
0x92: Pop(5)
0x93: Return(); Pop(6)

0x94: Stack[-2] = 0
0x95: Stack[-3] = 0
0x96: PushEmpty(int, int)
0x97: Push("k5q03") // @poff=0
0x98: @ GetVariable(Stack[-1], Stack[-2])
0x99: Pop(1)
0x9a: Push((int) 1000)
0x9b: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x9c: IF (Stack[-1] == 0) GOTO 0xa0; Pop(1)

0x9d: PushEmpty()
0x9e: Call2 0xa1

0x9f: Pop(0)
0xa0: Return(); Pop(2)

0xa1: Push("k5q03") // @poff=0
0xa2: Push((int) -1)
0xa3: @ SetVariable(Stack[-2], Stack[-1])
0xa4: Pop(2)
0xa5: PushEmpty()
0xa6: Call2 0xb1

0xa7: Pop(0)
0xa8: Return(); Pop(0)

0xa9: Push("k5q03") // @poff=0
0xaa: Push((int) 1000)
0xab: @ SetVariable(Stack[-2], Stack[-1])
0xac: Pop(2)
0xad: PushEmpty()
0xae: Call2 0xb1

0xaf: Pop(0)
0xb0: Return(); Pop(0)

0xb1: EventDisable(26)
0xb2: EventDisable(9)
0xb3: PushEmpty(object, string)
0xb4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb5: Stack[-1] = "cleanup" // @poff=394
0xb6: Call2 0x11c

0xb7: Pop(2)
0xb8: Push( Stack[0 + Tasks[-1].StackPointer] )
0xb9: IF (Stack[-1] == 0) GOTO 0xbc; Pop(1)

0xba: @@@ Remove(); Obj=0 // @poff=410
0xbb: Pop(0)
0xbc: PushEmpty(object)
0xbd: Call2 0xdf

0xbe: Pop(0)
0xbf: @ RemoveActor(Stack[-1])
0xc0: Pop(1)
0xc1: Return(); Pop(0)

0xc2: PushEmpty(float, float)
0xc3: @ GetGameTime(Stack[-1])
0xc4: Pop(0)
0xc5: Push((int) 24)
0xc6: Pop(1); Push(Stack[-4] * Stack[-1]);
0xc7: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0xc8: IF (Stack[-1] == 0) GOTO 0xcd; Pop(1)

0xc9: PushEmpty()
0xca: Call2 0xb1

0xcb: Pop(0)
0xcc: GOTO 0xd4

0xcd: Push((int) 0)
0xce: Push((int) 24)
0xcf: Pop(1); Push(Stack[-5] * Stack[-1]);
0xd0: @ SetTimeEvent(Stack[-2], Stack[-1])
0xd1: Pop(2)
0xd2: @ Hold()
0xd3: Pop(0)
0xd4: Return(); Pop(2)

0xd5: PushEmpty()
0xd6: PushEmpty()
0xd7: Call2 0x96

0xd8: Pop(0)
0xd9: Return(); Pop(0)

0xda: PushEmpty(cvector, cvector)
0xdb: @@ GetPosition(Stack[-1]); Obj=3 // @poff=417
0xdc: Pop(0)
0xdd: Stack[-1] = Stack[-4]
0xde: Return(); Pop(2)

0xdf: PushEmpty(object, object)
0xe0: @ self(Stack[-1])
0xe1: Pop(0)
0xe2: Stack[-1] = Stack[-3]
0xe3: Return(); Pop(2)

0xe4: Stack[-1] = 0
0xe5: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0xe6: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2]); Obj=12 // @poff=429
0xe7: Pop(0)
0xe8: Pop(0); Push((bool) Stack[-4] == 0)
0xe9: IF (Stack[-1] == 0) GOTO 0xf2; Pop(1)

0xea: Push("Locator ") // @poff=440
0xeb: Pop(1); Push(Stack[-1] + Stack[-12]);
0xec: Push(" doesn't exist") // @poff=458
0xed: Pop(2); Push(Stack[-2] + Stack[-1]);
0xee: @ Trace(Stack[-1])
0xef: Pop(1)
0xf0: Stack[-1] = 0
0xf1: GOTO 0xf4

0xf2: @ AddActor(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0xf3: Pop(0)
0xf4: Stack[-1] = Stack[-13]
0xf5: Return(); Pop(8)

0xf6: Stack[-1] = 0
0xf7: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0xf8: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2]); Obj=12 // @poff=429
0xf9: Pop(0)
0xfa: Pop(0); Push((bool) Stack[-4] == 0)
0xfb: IF (Stack[-1] == 0) GOTO 0x104; Pop(1)

0xfc: Push("Locator ") // @poff=440
0xfd: Pop(1); Push(Stack[-1] + Stack[-12]);
0xfe: Push(" doesn't exist") // @poff=458
0xff: Pop(2); Push(Stack[-2] + Stack[-1]);
0x100: @ Trace(Stack[-1])
0x101: Pop(1)
0x102: Stack[-1] = 0
0x103: GOTO 0x106

0x104: @@ AddStationaryActor(Stack[-1], Stack[-3], Stack[-2], Stack[-10], Stack[-9]); Obj=12 // @poff=488
0x105: Pop(0)
0x106: Stack[-1] = Stack[-13]
0x107: Return(); Pop(8)

0x108: Stack[-1] = 0
0x109: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x10a: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2]); Obj=12 // @poff=429
0x10b: Pop(0)
0x10c: Pop(0); Push((bool) Stack[-4] == 0)
0x10d: IF (Stack[-1] == 0) GOTO 0x116; Pop(1)

0x10e: Push("Locator ") // @poff=440
0x10f: Pop(1); Push(Stack[-1] + Stack[-12]);
0x110: Push(" doesn't exist") // @poff=458
0x111: Pop(2); Push(Stack[-2] + Stack[-1]);
0x112: @ Trace(Stack[-1])
0x113: Pop(1)
0x114: Stack[-1] = 0
0x115: GOTO 0x119

0x116: Push((bool) 1)
0x117: @@ AddStationaryActor(Stack[-2], Stack[-4], Stack[-3], Stack[-11], Stack[-10], Stack[-1]); Obj=13 // @poff=488
0x118: Pop(1)
0x119: Stack[-1] = Stack[-13]
0x11a: Return(); Pop(8)

0x11b: Stack[-1] = 0
0x11c: PushEmpty(int, int, object, int, int, object)
0x11d: Push(Stack[-8])
0x11e: IF (Stack[-1] == 0) GOTO 0x12e; Pop(1)

0x11f: @@ size(Stack[-3]); Obj=8 // @poff=507
0x120: Pop(0)
0x121: Stack[-2] = (int) 0
0x122: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0x123: IF (Stack[-1] == 0) GOTO 0x12e; Pop(1)

0x124: @@ get(Stack[-1], Stack[-2]); Obj=8 // @poff=512
0x125: Pop(0)
0x126: Push(Stack[-1])
0x127: IF (Stack[-1] == 0) GOTO 0x12a; Pop(1)

0x128: @ Trigger(Stack[-1], Stack[-7])
0x129: Pop(0)
0x12a: Stack[-1] = 0
0x12b: Push((int) 1)
0x12c: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x12d: GOTO 0x122

0x12e: Return(); Pop(6)

0x12f: PushEmpty(float, float)
0x130: @ GetGameTime(Stack[-1])
0x131: Pop(0)
0x132: PushEmpty(int)
0x133: Stack[-2] = Stack[-1]
0x134: Push((int) 24)
0x135: Stack[-5] = Stack[-2] % Stack[-1]; Pop(2);
0x136: Return(); Pop(2)

0x137: PushEmpty()
0x138: PushEmpty(float, cvector)
0x139: Stack[-3] = Stack[-1]
0x13a: Call2 0x147

0x13b: Pop(1)
0x13c: Push((float)12250000.0)
0x13d: Stack[-4] = Stack[-2] < Stack[-1]; Pop(2);
0x13e: Return(); Pop(0)

0x13f: PushEmpty()
0x140: PushEmpty(float, cvector)
0x141: Stack[-3] = Stack[-1]
0x142: Call2 0x147

0x143: Pop(1)
0x144: Push((float)4000000.0)
0x145: Stack[-4] = Stack[-2] < Stack[-1]; Pop(2);
0x146: Return(); Pop(0)

0x147: PushEmpty(object, cvector, object, cvector)
0x148: Push("player") // @poff=516
0x149: @ FindActor(Stack[-3], Stack[-1])
0x14a: Pop(1)
0x14b: Pop(0); Push((bool) Stack[-2] == 0)
0x14c: IF (Stack[-1] == 0) GOTO 0x14f; Pop(1)

0x14d: Stack[-6] = (int) 0
0x14e: Return(); Pop(4)

0x14f: PushEmpty(cvector, object)
0x150: Stack[-4] = Stack[-1]
0x151: Call2 0xda

0x152: Pop(1)
0x153: Stack[-2] = Stack[-1] - Stack[-6]; Pop(1);
0x154: Stack[-6] = Stack[-1] | Stack[-1]; Pop(0);
0x155: Return(); Pop(4)

0x156: Stack[-2] = 0
0x157: PushEmpty(cvector, int, object, int, bool, cvector, cvector, cvector, int, object, int, bool, cvector, cvector)
0x158: Stack[-6] = (int) -1
0x159: @ GetMainOutdoorScene(Stack[-5])
0x15a: Pop(0)
0x15b: Stack[-4] = (int) -1
0x15c: Push((int) 1)
0x15d: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x15e: Push((int) 1)
0x15f: Pop(1); Push(Stack[-5] + Stack[-1]);
0x160: Pop(1); Push(Stack[-16] + Stack[-1]);
0x161: @@ GetLocator(Stack[-1], Stack[-4], Stack[-3], Stack[-2]); Obj=6 // @poff=429
0x162: Pop(1)
0x163: Pop(0); Push((bool) Stack[-3] == 0)
0x164: IF (Stack[-1] == 0) GOTO 0x166; Pop(1)

0x165: GOTO 0x179

0x166: PushEmpty(bool, cvector)
0x167: Stack[-4] = Stack[-1]
0x168: Call2 0x137

0x169: Pop(1)
0x16a: Pop(1); Push((bool) Stack[-1] == 0)
0x16b: IF (Stack[-1] == 0) GOTO 0x16d; Pop(1)

0x16c: GOTO 0x178

0x16d: PushEmpty(bool, cvector)
0x16e: Stack[-4] = Stack[-1]
0x16f: Call2 0x13f

0x170: Pop(1)
0x171: IF (Stack[-1] == 0) GOTO 0x173; Pop(1)

0x172: GOTO 0x178

0x173: Pop(0); Push((bool) Stack[-4] < Stack[-6])
0x174: IF (Stack[-1] == 0) GOTO 0x176; Pop(1)

0x175: GOTO 0x178

0x176: Stack[-4] = Stack[-6]
0x177: Stack[-2] = Stack[-7]
0x178: GOTO 0x15c

0x179: Push((int) -1)
0x17a: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x17b: IF (Stack[-1] == 0) GOTO 0x17f; Pop(1)

0x17c: Push((int) 1)
0x17d: Stack[-17] = Stack[-5] - Stack[-1]; Pop(1);
0x17e: GOTO 0x180

0x17f: Stack[-6] = Stack[-16]
0x180: Return(); Pop(14)

0x181: Stack[-5] = 0
0x182: PushEmpty(object, int, bool, cvector, cvector, object, int, bool, cvector, cvector)
0x183: @ GetMainOutdoorScene(Stack[-5])
0x184: Pop(0)
0x185: Stack[-4] = (int) 0
0x186: Push((int) 1)
0x187: Pop(1); Push(Stack[-5] + Stack[-1]);
0x188: Pop(1); Push(Stack[-12] + Stack[-1]);
0x189: @@ GetLocator(Stack[-1], Stack[-4], Stack[-3], Stack[-2]); Obj=6 // @poff=429
0x18a: Pop(1)
0x18b: Pop(0); Push((bool) Stack[-3] == 0)
0x18c: IF (Stack[-1] == 0) GOTO 0x18e; Pop(1)

0x18d: GOTO 0x191

0x18e: Push((int) 1)
0x18f: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x190: GOTO 0x186

0x191: Stack[-4] = Stack[-12]
0x192: Return(); Pop(10)

0x193: Stack[-5] = 0
