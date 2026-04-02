GlobalVarCount = 0

Strings:
	W:quest_d8_04
	W:termitnik_load
	W:quest_d8_03
	W:pt_spawn
	W:Not enough spawn points
	A:add
	A:get
	A:remove
	W:pers_butcher
	W:termitnik_butcher.xml
	W:pers_morlok
	W:termitnik_morlok.xml
	W:pt_agony
	W:agony1_morlok.xml
	A:size
	A:IsDead
	W:ToDie
	W:HasProperty
	A:HasProperty
	A:GetLocator
	W:Locator 
	W: doesn't exist
	A:clear
// @pool_raw:710075006500730074005f00640038005f003000340000007400650072006d00690074006e0069006b005f006c006f00610064000000710075006500730074005f00640038005f00300033000000700074005f0073007000610077006e0000004e006f007400200065006e006f00750067006800200073007000610077006e00200070006f0069006e00740073000000616464006765740072656d6f76650070006500720073005f00620075007400630068006500720000007400650072006d00690074006e0069006b005f0062007500740063006800650072002e0078006d006c00000070006500720073005f006d006f0072006c006f006b0000007400650072006d00690074006e0069006b005f006d006f0072006c006f006b002e0078006d006c000000700074005f00610067006f006e0079000000610067006f006e00790031005f006d006f0072006c006f006b002e0078006d006c00000073697a65004973446561640054006f004400690065000000480061007300500072006f0070006500720074007900000048617350726f7065727479004765744c6f6361746f72004c006f006300610074006f00720020000000200064006f00650073006e00270074002000650078006900730074000000636c65617200

Import:
	GetLocator (2 args)
	Trace (1 args)
	CreateIntVector (1 args)
	irand (2 args)
	Hold (0 args)
	RemoveActor (1 args)
	self (1 args)
	CreateObjectVector (1 args)
	AddActor (6 args)
	FindActor (2 args)
	Trigger (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object, object, object) Params = 0
		EVENT_5 Op = 0x8 Vars = ()
		EVENT_6 Op = 0x6e Vars = ()


0x0: PushEmpty(object)
0x1: Call2 0x126

0x2: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x3: Pop(1)
0x4: PushEmpty()
0x5: Call2 0x95

0x6: Pop(0)
0x7: Return(); Pop(0)

0x8: PushEmpty(int, bool, object, int, int, int, int, int, int, int, int, bool, object, int, int, int, int, int, int, int)
0x9: PushEmpty(bool, string, string)
0xa: Stack[-2] = "quest_d8_04" // @poff=0
0xb: Stack[-1] = "termitnik_load" // @poff=24
0xc: Call2 0x13e

0xd: Pop(3)
0xe: PushEmpty(bool, string, string)
0xf: Stack[-2] = "quest_d8_03" // @poff=54
0x10: Stack[-1] = "termitnik_load" // @poff=24
0x11: Call2 0x13e

0x12: Pop(3)
0x13: Stack[-10] = (int) 0
0x14: Push("pt_spawn") // @poff=78
0x15: Push((int) 1)
0x16: Pop(1); Push(Stack[-12] + Stack[-1]);
0x17: Pop(2); Push(Stack[-2] + Stack[-1]);
0x18: @ GetLocator(Stack[-1], Stack[-10])
0x19: Pop(1)
0x1a: Pop(0); Push((bool) Stack[-9] == 0)
0x1b: IF (Stack[-1] == 0) GOTO 0x1d; Pop(1)

0x1c: GOTO 0x20

0x1d: Push((int) 1)
0x1e: Stack[-11] = Stack[-11] + Stack[-1]; Pop(1);
0x1f: GOTO 0x14

0x20: Push((int) 18)
0x21: Pop(1); Push((bool) Stack[-11] < Stack[-1])
0x22: IF (Stack[-1] == 0) GOTO 0x27; Pop(1)

0x23: Push("Not enough spawn points") // @poff=96
0x24: @ Trace(Stack[-1])
0x25: Pop(1)
0x26: GOTO 0x6a

0x27: @ CreateIntVector(Stack[-8])
0x28: Pop(0)
0x29: Stack[-7] = (int) 1
0x2a: Pop(0); Push((bool) Stack[-7] <= Stack[-10])
0x2b: IF (Stack[-1] == 0) GOTO 0x31; Pop(1)

0x2c: @@ add(Stack[-7]); Obj=8 // @poff=144
0x2d: Pop(0)
0x2e: Push((int) 1)
0x2f: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x30: GOTO 0x2a

0x31: Stack[-6] = (int) 0
0x32: Push((int) 12)
0x33: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x34: IF (Stack[-1] == 0) GOTO 0x4d; Pop(1)

0x35: @ irand(Stack[-5], Stack[-10])
0x36: Pop(0)
0x37: @@ get(Stack[-4], Stack[-5]); Obj=8 // @poff=148
0x38: Pop(0)
0x39: @@ remove(Stack[-5]); Obj=8 // @poff=152
0x3a: Pop(0)
0x3b: Push((int) -1)
0x3c: Stack[-11] = Stack[-11] + Stack[-1]; Pop(1);
0x3d: PushEmpty(object, object, string, string, string)
0x3e: PushEmpty(object)
0x3f: Call2 0x120

0x40: Stack[-1] = Stack[-5]
0x41: Pop(1)
0x42: Push("pt_spawn") // @poff=78
0x43: Stack[-4] = Stack[-1] + Stack[-10]; Pop(1);
0x44: Stack[-2] = "pers_butcher" // @poff=159
0x45: Stack[-1] = "termitnik_butcher.xml" // @poff=185
0x46: Call2 0x12c

0x47: Pop(4)
0x48: @@@ add(Stack[-1]); Obj=2 // @poff=144
0x49: Pop(1)
0x4a: Push((int) 1)
0x4b: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x4c: GOTO 0x32

0x4d: Stack[-3] = (int) 0
0x4e: Push((int) 6)
0x4f: Pop(1); Push((bool) Stack[-4] < Stack[-1])
0x50: IF (Stack[-1] == 0) GOTO 0x69; Pop(1)

0x51: @ irand(Stack[-2], Stack[-10])
0x52: Pop(0)
0x53: @@ get(Stack[-1], Stack[-2]); Obj=8 // @poff=148
0x54: Pop(0)
0x55: @@ remove(Stack[-2]); Obj=8 // @poff=152
0x56: Pop(0)
0x57: Push((int) -1)
0x58: Stack[-11] = Stack[-11] + Stack[-1]; Pop(1);
0x59: PushEmpty(object, object, string, string, string)
0x5a: PushEmpty(object)
0x5b: Call2 0x120

0x5c: Stack[-1] = Stack[-5]
0x5d: Pop(1)
0x5e: Push("pt_spawn") // @poff=78
0x5f: Stack[-4] = Stack[-1] + Stack[-7]; Pop(1);
0x60: Stack[-2] = "pers_morlok" // @poff=229
0x61: Stack[-1] = "termitnik_morlok.xml" // @poff=253
0x62: Call2 0x12c

0x63: Pop(4)
0x64: @@@ add(Stack[-1]); Obj=2 // @poff=144
0x65: Pop(1)
0x66: Push((int) 1)
0x67: Stack[-4] = Stack[-4] + Stack[-1]; Pop(1);
0x68: GOTO 0x4e

0x69: Stack[-8] = 0
0x6a: PushEmpty()
0x6b: Call2 0xa7

0x6c: Pop(0)
0x6d: Return(); Pop(20)

0x6e: PushEmpty(object)
0x6f: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x70: Call2 0x14a

0x71: Pop(1)
0x72: PushEmpty()
0x73: Call2 0xe7

0x74: Pop(0)
0x75: Return(); Pop(0)

0x76: PushEmpty(int, bool, int, bool)
0x77: Stack[-2] = (int) 1
0x78: Push("pt_agony") // @poff=295
0x79: Pop(1); Push(Stack[-1] + Stack[-3]);
0x7a: @ GetLocator(Stack[-1], Stack[-2])
0x7b: Pop(1)
0x7c: Pop(0); Push((bool) Stack[-1] == 0)
0x7d: IF (Stack[-1] == 0) GOTO 0x7f; Pop(1)

0x7e: GOTO 0x8a

0x7f: Push((int) 0)
0x80: @@ add(Stack[-1]); Obj=6 // @poff=144
0x81: Pop(1)
0x82: @@ add(Stack[-2]); Obj=5 // @poff=144
0x83: Pop(0)
0x84: Push((int) 0)
0x85: @@ add(Stack[-1]); Obj=6 // @poff=144
0x86: Pop(1)
0x87: Push((int) 1)
0x88: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x89: GOTO 0x78

0x8a: Return(); Pop(4)

0x8b: PushEmpty()
0x8c: Push("pt_agony") // @poff=295
0x8d: Stack[-4] = Stack[-1] + Stack[-2]; Pop(1);
0x8e: Return(); Pop(0)

0x8f: PushEmpty()
0x90: Stack[-3] = "pers_morlok" // @poff=229
0x91: Return(); Pop(0)

0x92: PushEmpty()
0x93: Stack[-3] = "agony1_morlok.xml" // @poff=313
0x94: Return(); Pop(0)

0x95: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == 0)
0x96: IF (Stack[-1] == 0) GOTO 0x9b; Pop(1)

0x97: PushEmpty(object)
0x98: Call2 0x126

0x99: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x9a: Pop(1)
0x9b: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x9c: IF (Stack[-1] == 0) GOTO 0x9f; Pop(1)

0x9d: @ CreateIntVector(Stack[-0]T)
0x9e: Pop(0)
0x9f: PushEmpty(object)
0xa0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa1: Call2 0x76

0xa2: Pop(1)
0xa3: @ Hold()
0xa4: Pop(0)
0xa5: GOTO 0xa3

0xa6: Return(); Pop(0)

0xa7: PushEmpty(int, int, int, int, int, string, string, string, int, int, int, int, int, string, string, string)
0xa8: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == 0)
0xa9: IF (Stack[-1] == 0) GOTO 0xae; Pop(1)

0xaa: PushEmpty(object)
0xab: Call2 0x126

0xac: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0xad: Pop(1)
0xae: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0xaf: IF (Stack[-1] == 0) GOTO 0xb2; Pop(1)

0xb0: @ CreateIntVector(Stack[-0]T)
0xb1: Pop(0)
0xb2: PushEmpty(object)
0xb3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb4: Call2 0x14a

0xb5: Pop(1)
0xb6: @@@ size(Stack[-8]); Obj=0 // @poff=349
0xb7: Pop(0)
0xb8: Stack[-7] = (int) 0
0xb9: Pop(0); Push((bool) Stack[-7] < Stack[-8])
0xba: IF (Stack[-1] == 0) GOTO 0xe6; Pop(1)

0xbb: @@@ get(Stack[-6], Stack[-7]); Obj=0 // @poff=148
0xbc: Pop(0)
0xbd: Push((int) 1)
0xbe: Pop(1); Push(Stack[-8] + Stack[-1]);
0xbf: @@@ get(Stack[-6], Stack[-1]); Obj=0 // @poff=148
0xc0: Pop(1)
0xc1: Push((int) 2)
0xc2: Pop(1); Push(Stack[-8] + Stack[-1]);
0xc3: @@@ get(Stack[-5], Stack[-1]); Obj=0 // @poff=148
0xc4: Pop(1)
0xc5: PushEmpty(string, int, int)
0xc6: Stack[-9] = Stack[-2]
0xc7: Stack[-8] = Stack[-1]
0xc8: Call2 0x8b

0xc9: Stack[-3] = Stack[-6]
0xca: Pop(3)
0xcb: PushEmpty(string, int, int)
0xcc: Stack[-9] = Stack[-2]
0xcd: Stack[-7] = Stack[-1]
0xce: Call2 0x8f

0xcf: Stack[-3] = Stack[-5]
0xd0: Pop(3)
0xd1: PushEmpty(string, int, int)
0xd2: Stack[-9] = Stack[-2]
0xd3: Stack[-7] = Stack[-1]
0xd4: Call2 0x92

0xd5: Stack[-3] = Stack[-4]
0xd6: Pop(3)
0xd7: PushEmpty(object, object, string, string, string)
0xd8: PushEmpty(object)
0xd9: Call2 0x120

0xda: Stack[-1] = Stack[-5]
0xdb: Pop(1)
0xdc: Stack[-8] = Stack[-3]
0xdd: Stack[-7] = Stack[-2]
0xde: Stack[-6] = Stack[-1]
0xdf: Call2 0x12c

0xe0: Pop(4)
0xe1: @@@ add(Stack[-1]); Obj=1 // @poff=144
0xe2: Pop(1)
0xe3: Push((int) 3)
0xe4: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0xe5: GOTO 0xb9

0xe6: Return(); Pop(16)

0xe7: PushEmpty(int, int, object, bool, int, int, object, bool)
0xe8: @@@ size(Stack[-4]); Obj=1 // @poff=349
0xe9: Pop(0)
0xea: Stack[-3] = (int) 0
0xeb: Pop(0); Push((bool) Stack[-3] < Stack[-4])
0xec: IF (Stack[-1] == 0) GOTO 0x10f; Pop(1)

0xed: @@@ get(Stack[-2], Stack[-3]); Obj=1 // @poff=148
0xee: Pop(0)
0xef: Pop(0); Push(( Stack[-2] != 0 )
0xf0: IF (Stack[-1] == 0) GOTO 0x101; Pop(1)

0xf1: @@ IsDead(Stack[-1]); Obj=2 // @poff=354
0xf2: Pop(0)
0xf3: Pop(0); Push((bool) Stack[-1] == 0)
0xf4: IF (Stack[-1] == 0) GOTO 0xff; Pop(1)

0xf5: PushEmpty(bool, object, string)
0xf6: Stack[-5] = Stack[-2]
0xf7: Stack[-1] = "ToDie" // @poff=361
0xf8: Call2 0x114

0xf9: Pop(2)
0xfa: Pop(1); Push((bool) Stack[-1] == 0)
0xfb: IF (Stack[-1] == 0) GOTO 0xff; Pop(1)

0xfc: Push((int) 1)
0xfd: Stack[-4] = Stack[-4] + Stack[-1]; Pop(1);
0xfe: GOTO 0x10e

0xff: @ RemoveActor(Stack[-2])
0x100: Pop(0)
0x101: @@@ remove(Stack[-3]); Obj=1 // @poff=152
0x102: Pop(0)
0x103: Push((int) 3)
0x104: Pop(1); Push(Stack[-4] * Stack[-1]);
0x105: Push((int) 1)
0x106: Pop(1); Push(Stack[-5] + Stack[-1]);
0x107: Push((int) 3)
0x108: Pop(2); Push(Stack[-2] * Stack[-1]);
0x109: @@@ remove(Stack[-2], Stack[-1]); Obj=0 // @poff=152
0x10a: Pop(2)
0x10b: Push((int) -1)
0x10c: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x10d: Stack[-2] = 0
0x10e: GOTO 0xeb

0x10f: PushEmpty(object)
0x110: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x111: Call2 0x14a

0x112: Pop(1)
0x113: Return(); Pop(8)

0x114: PushEmpty(bool, bool)
0x115: Push("HasProperty") // @poff=373
0x116: Push((int) 2)
0x117: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x118: Pop(1); Push((bool) Stack[-1] == 0)
0x119: IF (Stack[-1] == 0) GOTO 0x11c; Pop(1)

0x11a: Stack[-5] = (bool) 0
0x11b: Return(); Pop(2)

0x11c: @@ HasProperty(Stack[-3], Stack[-1]); Obj=4 // @poff=397
0x11d: Pop(0)
0x11e: Stack[-1] = Stack[-5]
0x11f: Return(); Pop(2)

0x120: PushEmpty(object, object)
0x121: @ self(Stack[-1])
0x122: Pop(0)
0x123: Stack[-1] = Stack[-3]
0x124: Return(); Pop(2)

0x125: Stack[-1] = 0
0x126: PushEmpty(object, object)
0x127: @ CreateObjectVector(Stack[-1])
0x128: Pop(0)
0x129: Stack[-1] = Stack[-3]
0x12a: Return(); Pop(2)

0x12b: Stack[-1] = 0
0x12c: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x12d: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2]); Obj=12 // @poff=409
0x12e: Pop(0)
0x12f: Pop(0); Push((bool) Stack[-4] == 0)
0x130: IF (Stack[-1] == 0) GOTO 0x139; Pop(1)

0x131: Push("Locator ") // @poff=420
0x132: Pop(1); Push(Stack[-1] + Stack[-12]);
0x133: Push(" doesn't exist") // @poff=438
0x134: Pop(2); Push(Stack[-2] + Stack[-1]);
0x135: @ Trace(Stack[-1])
0x136: Pop(1)
0x137: Stack[-1] = 0
0x138: GOTO 0x13b

0x139: @ AddActor(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0x13a: Pop(0)
0x13b: Stack[-1] = Stack[-13]
0x13c: Return(); Pop(8)

0x13d: Stack[-1] = 0
0x13e: PushEmpty(object, object)
0x13f: @ FindActor(Stack[-1], Stack[-4])
0x140: Pop(0)
0x141: Pop(0); PushNull((bool) Stack[-1] == 0)
0x142: IF (Stack[-1] == 0) GOTO 0x145; Pop(1)

0x143: Stack[-5] = (bool) 0
0x144: Return(); Pop(2)

0x145: @ Trigger(Stack[-1], Stack[-3])
0x146: Pop(0)
0x147: Stack[-5] = (bool) 1
0x148: Return(); Pop(2)

0x149: Stack[-1] = 0
0x14a: PushEmpty(int, int, object, int, int, object)
0x14b: Push(Stack[-7])
0x14c: IF (Stack[-1] == 0) GOTO 0x15e; Pop(1)

0x14d: @@ size(Stack[-3]); Obj=7 // @poff=349
0x14e: Pop(0)
0x14f: Stack[-2] = (int) 0
0x150: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0x151: IF (Stack[-1] == 0) GOTO 0x15c; Pop(1)

0x152: @@ get(Stack[-1], Stack[-2]); Obj=7 // @poff=148
0x153: Pop(0)
0x154: Push(Stack[-1])
0x155: IF (Stack[-1] == 0) GOTO 0x158; Pop(1)

0x156: @ RemoveActor(Stack[-1])
0x157: Pop(0)
0x158: Stack[-1] = 0
0x159: Push((int) 1)
0x15a: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x15b: GOTO 0x150

0x15c: @@ clear(); Obj=7 // @poff=468
0x15d: Pop(0)
0x15e: Return(); Pop(6)

