GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	W:pt_k6q03_bomber
	W:pers_bomber
	W:k6q03_bomber.xml
	A:add
	W:k6q03
	W:abinos_unload
	W:completed
	W:spawning albinos
	W:pt_k6q03_albinos_path
	W:pers_albinos
	W:k6q03_albinos.xml
	A:Remove
	A:GetPosition
	A:GetLocator
	W:Locator 
	W: doesn't exist
	A:AddStationaryActor
	A:size
	A:get
	A:clear
	W:player
// @pool_raw:700074005f006b0036007100300033005f0062006f006d00620065007200000070006500720073005f0062006f006d0062006500720000006b0036007100300033005f0062006f006d006200650072002e0078006d006c000000616464006b00360071003000330000006100620069006e006f0073005f0075006e006c006f0061006400000063006f006d0070006c006500740065006400000073007000610077006e0069006e006700200061006c00620069006e006f0073000000700074005f006b0036007100300033005f0061006c00620069006e006f0073005f007000610074006800000070006500720073005f0061006c00620069006e006f00730000006b0036007100300033005f0061006c00620069006e006f0073002e0078006d006c00000052656d6f766500476574506f736974696f6e004765744c6f6361746f72004c006f006300610074006f00720020000000200064006f00650073006e0027007400200065007800690073007400000041646453746174696f6e6172794163746f720073697a650067657400636c6561720070006c0061007900650072000000

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
		EVENT_26 Op = 0x26 Vars = (string)
		EVENT_9 Op = 0x37 Vars = (int, float)


0x0: PushEmpty(object, int, object, int)
0x1: @ CreateObjectVector(Stack[-1]T)
0x2: Pop(0)
0x3: @ GetMainOutdoorScene(Stack[-2])
0x4: Pop(0)
0x5: Stack[-1] = (int) 0
0x6: Push((int) 5)
0x7: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x8: IF (Stack[-1] == 0) GOTO 0x18; Pop(1)

0x9: PushEmpty(object, object, string, string, string)
0xa: Stack[-7] = Stack[-4]
0xb: Push("pt_k6q03_bomber") // @poff=0
0xc: Push((int) 1)
0xd: Pop(1); Push(Stack[-8] + Stack[-1]);
0xe: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0xf: Stack[-2] = "pers_bomber" // @poff=32
0x10: Stack[-1] = "k6q03_bomber.xml" // @poff=56
0x11: Call2 0xc8

0x12: Pop(4)
0x13: @@@ add(Stack[-1]); Obj=1 // @poff=90
0x14: Pop(1)
0x15: Push((int) 1)
0x16: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x17: GOTO 0x6

0x18: Push("k6q03") // @poff=94
0x19: Push((int) 1)
0x1a: @ SetVariable(Stack[-2], Stack[-1])
0x1b: Pop(2)
0x1c: Push((int) 1)
0x1d: Push((int) 141)
0x1e: @ SetTimeEvent(Stack[-2], Stack[-1])
0x1f: Pop(2)
0x20: PushEmpty(int)
0x21: Stack[-1] = (int) 6
0x22: Call2 0xa5

0x23: Pop(1)
0x24: Return(); Pop(4)

0x25: Stack[-2] = 0
0x26: PushEmpty()
0x27: @ Trace(Stack[-1])
0x28: Pop(0)
0x29: Push("abinos_unload") // @poff=106
0x2a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2b: IF (Stack[-1] == 0) GOTO 0x30; Pop(1)

0x2c: PushEmpty()
0x2d: Call2 0x48

0x2e: Pop(0)
0x2f: GOTO 0x36

0x30: Push("completed") // @poff=134
0x31: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x32: IF (Stack[-1] == 0) GOTO 0x36; Pop(1)

0x33: PushEmpty()
0x34: Call2 0x8e

0x35: Pop(0)
0x36: Return(); Pop(0)

0x37: PushEmpty()
0x38: Push((int) 1)
0x39: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3a: IF (Stack[-1] == 0) GOTO 0x42; Pop(1)

0x3b: Push("spawning albinos") // @poff=154
0x3c: @ Trace(Stack[-1])
0x3d: Pop(1)
0x3e: PushEmpty()
0x3f: Call2 0x48

0x40: Pop(0)
0x41: GOTO 0x47

0x42: PushEmpty(int, float)
0x43: Stack[-4] = Stack[-2]
0x44: Stack[-3] = Stack[-1]
0x45: Call2 0xb8

0x46: Pop(2)
0x47: Return(); Pop(0)

0x48: PushEmpty(object, object, int, object, object, int)
0x49: @ GetMainOutdoorScene(Stack[-3])
0x4a: Pop(0)
0x4b: @ GetScene(Stack[-2])
0x4c: Pop(0)
0x4d: Pop(0); Push((bool) Stack[-3] != Stack[-2])
0x4e: IF (Stack[-1] == 0) GOTO 0x63; Pop(1)

0x4f: Push("pt_k6q03_albinos_path") // @poff=188
0x50: Push((int) -1)
0x51: @ SetVariable(Stack[-2], Stack[-1])
0x52: Pop(2)
0x53: PushEmpty(object, object, string, string, string)
0x54: Stack[-8] = Stack[-4]
0x55: Push("pt_k6q03_albinos_path") // @poff=188
0x56: PushEmpty(int, string)
0x57: Stack[-1] = "pt_k6q03_albinos_path" // @poff=188
0x58: Call2 0x14d

0x59: Pop(1)
0x5a: Push((int) 1)
0x5b: Pop(2); Push(Stack[-2] + Stack[-1]);
0x5c: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x5d: Stack[-2] = "pers_albinos" // @poff=232
0x5e: Stack[-1] = "k6q03_albinos.xml" // @poff=258
0x5f: Call2 0xc8

0x60: Stack[0 + Tasks[-1].StackPointer] = Stack[-5]
0x61: Pop(5)
0x62: GOTO 0x78

0x63: PushEmpty(int, string)
0x64: Stack[-1] = "pt_k6q03_albinos_path" // @poff=188
0x65: Call2 0x122

0x66: Stack[-2] = Stack[-3]
0x67: Pop(2)
0x68: @ Trace(Stack[-1])
0x69: Pop(0)
0x6a: Push("pt_k6q03_albinos_path") // @poff=188
0x6b: @ SetVariable(Stack[-1], Stack[-2])
0x6c: Pop(1)
0x6d: PushEmpty(object, object, string, string, string)
0x6e: Stack[-8] = Stack[-4]
0x6f: Push("pt_k6q03_albinos_path") // @poff=188
0x70: Push((int) 1)
0x71: Pop(1); Push(Stack[-8] + Stack[-1]);
0x72: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x73: Stack[-2] = "pers_albinos" // @poff=232
0x74: Stack[-1] = "k6q03_albinos.xml" // @poff=258
0x75: Call2 0xda

0x76: Stack[0 + Tasks[-1].StackPointer] = Stack[-5]
0x77: Pop(5)
0x78: Return(); Pop(6)

0x79: Stack[-2] = 0
0x7a: Stack[-3] = 0
0x7b: PushEmpty(int, int)
0x7c: Push("k6q03") // @poff=94
0x7d: @ GetVariable(Stack[-1], Stack[-2])
0x7e: Pop(1)
0x7f: Push((int) 1000)
0x80: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x81: IF (Stack[-1] == 0) GOTO 0x85; Pop(1)

0x82: PushEmpty()
0x83: Call2 0x86

0x84: Pop(0)
0x85: Return(); Pop(2)

0x86: Push("k6q03") // @poff=94
0x87: Push((int) -1)
0x88: @ SetVariable(Stack[-2], Stack[-1])
0x89: Pop(2)
0x8a: PushEmpty()
0x8b: Call2 0x96

0x8c: Pop(0)
0x8d: Return(); Pop(0)

0x8e: Push("k6q03") // @poff=94
0x8f: Push((int) 1000)
0x90: @ SetVariable(Stack[-2], Stack[-1])
0x91: Pop(2)
0x92: PushEmpty()
0x93: Call2 0x96

0x94: Pop(0)
0x95: Return(); Pop(0)

0x96: EventDisable(26)
0x97: Push( Stack[0 + Tasks[-1].StackPointer] )
0x98: IF (Stack[-1] == 0) GOTO 0x9b; Pop(1)

0x99: @@@ Remove(); Obj=0 // @poff=294
0x9a: Pop(0)
0x9b: PushEmpty(object)
0x9c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9d: Call2 0xed

0x9e: Pop(1)
0x9f: PushEmpty(object)
0xa0: Call2 0xc2

0xa1: Pop(0)
0xa2: @ RemoveActor(Stack[-1])
0xa3: Pop(1)
0xa4: Return(); Pop(0)

0xa5: PushEmpty(float, float)
0xa6: @ GetGameTime(Stack[-1])
0xa7: Pop(0)
0xa8: Push((int) 24)
0xa9: Pop(1); Push(Stack[-4] * Stack[-1]);
0xaa: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0xab: IF (Stack[-1] == 0) GOTO 0xb0; Pop(1)

0xac: PushEmpty()
0xad: Call2 0x96

0xae: Pop(0)
0xaf: GOTO 0xb7

0xb0: Push((int) 0)
0xb1: Push((int) 24)
0xb2: Pop(1); Push(Stack[-5] * Stack[-1]);
0xb3: @ SetTimeEvent(Stack[-2], Stack[-1])
0xb4: Pop(2)
0xb5: @ Hold()
0xb6: Pop(0)
0xb7: Return(); Pop(2)

0xb8: PushEmpty()
0xb9: PushEmpty()
0xba: Call2 0x7b

0xbb: Pop(0)
0xbc: Return(); Pop(0)

0xbd: PushEmpty(cvector, cvector)
0xbe: @@ GetPosition(Stack[-1]); Obj=3 // @poff=301
0xbf: Pop(0)
0xc0: Stack[-1] = Stack[-4]
0xc1: Return(); Pop(2)

0xc2: PushEmpty(object, object)
0xc3: @ self(Stack[-1])
0xc4: Pop(0)
0xc5: Stack[-1] = Stack[-3]
0xc6: Return(); Pop(2)

0xc7: Stack[-1] = 0
0xc8: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0xc9: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2]); Obj=12 // @poff=313
0xca: Pop(0)
0xcb: Pop(0); Push((bool) Stack[-4] == 0)
0xcc: IF (Stack[-1] == 0) GOTO 0xd5; Pop(1)

0xcd: Push("Locator ") // @poff=324
0xce: Pop(1); Push(Stack[-1] + Stack[-12]);
0xcf: Push(" doesn't exist") // @poff=342
0xd0: Pop(2); Push(Stack[-2] + Stack[-1]);
0xd1: @ Trace(Stack[-1])
0xd2: Pop(1)
0xd3: Stack[-1] = 0
0xd4: GOTO 0xd7

0xd5: @@ AddStationaryActor(Stack[-1], Stack[-3], Stack[-2], Stack[-10], Stack[-9]); Obj=12 // @poff=372
0xd6: Pop(0)
0xd7: Stack[-1] = Stack[-13]
0xd8: Return(); Pop(8)

0xd9: Stack[-1] = 0
0xda: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0xdb: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2]); Obj=12 // @poff=313
0xdc: Pop(0)
0xdd: Pop(0); Push((bool) Stack[-4] == 0)
0xde: IF (Stack[-1] == 0) GOTO 0xe7; Pop(1)

0xdf: Push("Locator ") // @poff=324
0xe0: Pop(1); Push(Stack[-1] + Stack[-12]);
0xe1: Push(" doesn't exist") // @poff=342
0xe2: Pop(2); Push(Stack[-2] + Stack[-1]);
0xe3: @ Trace(Stack[-1])
0xe4: Pop(1)
0xe5: Stack[-1] = 0
0xe6: GOTO 0xea

0xe7: Push((bool) 1)
0xe8: @@ AddStationaryActor(Stack[-2], Stack[-4], Stack[-3], Stack[-11], Stack[-10], Stack[-1]); Obj=13 // @poff=372
0xe9: Pop(1)
0xea: Stack[-1] = Stack[-13]
0xeb: Return(); Pop(8)

0xec: Stack[-1] = 0
0xed: PushEmpty(int, int, object, int, int, object)
0xee: Push(Stack[-7])
0xef: IF (Stack[-1] == 0) GOTO 0x101; Pop(1)

0xf0: @@ size(Stack[-3]); Obj=7 // @poff=391
0xf1: Pop(0)
0xf2: Stack[-2] = (int) 0
0xf3: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0xf4: IF (Stack[-1] == 0) GOTO 0xff; Pop(1)

0xf5: @@ get(Stack[-1], Stack[-2]); Obj=7 // @poff=396
0xf6: Pop(0)
0xf7: Push(Stack[-1])
0xf8: IF (Stack[-1] == 0) GOTO 0xfb; Pop(1)

0xf9: @@ Remove(); Obj=1 // @poff=294
0xfa: Pop(0)
0xfb: Stack[-1] = 0
0xfc: Push((int) 1)
0xfd: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0xfe: GOTO 0xf3

0xff: @@ clear(); Obj=7 // @poff=400
0x100: Pop(0)
0x101: Return(); Pop(6)

0x102: PushEmpty()
0x103: PushEmpty(float, cvector)
0x104: Stack[-3] = Stack[-1]
0x105: Call2 0x112

0x106: Pop(1)
0x107: Push((float)12250000.0)
0x108: Stack[-4] = Stack[-2] < Stack[-1]; Pop(2);
0x109: Return(); Pop(0)

0x10a: PushEmpty()
0x10b: PushEmpty(float, cvector)
0x10c: Stack[-3] = Stack[-1]
0x10d: Call2 0x112

0x10e: Pop(1)
0x10f: Push((float)4000000.0)
0x110: Stack[-4] = Stack[-2] < Stack[-1]; Pop(2);
0x111: Return(); Pop(0)

0x112: PushEmpty(object, cvector, object, cvector)
0x113: Push("player") // @poff=406
0x114: @ FindActor(Stack[-3], Stack[-1])
0x115: Pop(1)
0x116: Pop(0); Push((bool) Stack[-2] == 0)
0x117: IF (Stack[-1] == 0) GOTO 0x11a; Pop(1)

0x118: Stack[-6] = (int) 0
0x119: Return(); Pop(4)

0x11a: PushEmpty(cvector, object)
0x11b: Stack[-4] = Stack[-1]
0x11c: Call2 0xbd

0x11d: Pop(1)
0x11e: Stack[-2] = Stack[-1] - Stack[-6]; Pop(1);
0x11f: Stack[-6] = Stack[-1] | Stack[-1]; Pop(0);
0x120: Return(); Pop(4)

0x121: Stack[-2] = 0
0x122: PushEmpty(cvector, int, object, int, bool, cvector, cvector, cvector, int, object, int, bool, cvector, cvector)
0x123: Stack[-6] = (int) -1
0x124: @ GetMainOutdoorScene(Stack[-5])
0x125: Pop(0)
0x126: Stack[-4] = (int) -1
0x127: Push((int) 1)
0x128: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x129: Push((int) 1)
0x12a: Pop(1); Push(Stack[-5] + Stack[-1]);
0x12b: Pop(1); Push(Stack[-16] + Stack[-1]);
0x12c: @@ GetLocator(Stack[-1], Stack[-4], Stack[-3], Stack[-2]); Obj=6 // @poff=313
0x12d: Pop(1)
0x12e: Pop(0); Push((bool) Stack[-3] == 0)
0x12f: IF (Stack[-1] == 0) GOTO 0x131; Pop(1)

0x130: GOTO 0x144

0x131: PushEmpty(bool, cvector)
0x132: Stack[-4] = Stack[-1]
0x133: Call2 0x102

0x134: Pop(1)
0x135: Pop(1); Push((bool) Stack[-1] == 0)
0x136: IF (Stack[-1] == 0) GOTO 0x138; Pop(1)

0x137: GOTO 0x143

0x138: PushEmpty(bool, cvector)
0x139: Stack[-4] = Stack[-1]
0x13a: Call2 0x10a

0x13b: Pop(1)
0x13c: IF (Stack[-1] == 0) GOTO 0x13e; Pop(1)

0x13d: GOTO 0x143

0x13e: Pop(0); Push((bool) Stack[-4] < Stack[-6])
0x13f: IF (Stack[-1] == 0) GOTO 0x141; Pop(1)

0x140: GOTO 0x143

0x141: Stack[-4] = Stack[-6]
0x142: Stack[-2] = Stack[-7]
0x143: GOTO 0x127

0x144: Push((int) -1)
0x145: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x146: IF (Stack[-1] == 0) GOTO 0x14a; Pop(1)

0x147: Push((int) 1)
0x148: Stack[-17] = Stack[-5] - Stack[-1]; Pop(1);
0x149: GOTO 0x14b

0x14a: Stack[-6] = Stack[-16]
0x14b: Return(); Pop(14)

0x14c: Stack[-5] = 0
0x14d: PushEmpty(object, int, bool, cvector, cvector, object, int, bool, cvector, cvector)
0x14e: @ GetMainOutdoorScene(Stack[-5])
0x14f: Pop(0)
0x150: Stack[-4] = (int) 0
0x151: Push((int) 1)
0x152: Pop(1); Push(Stack[-5] + Stack[-1]);
0x153: Pop(1); Push(Stack[-12] + Stack[-1]);
0x154: @@ GetLocator(Stack[-1], Stack[-4], Stack[-3], Stack[-2]); Obj=6 // @poff=313
0x155: Pop(1)
0x156: Pop(0); Push((bool) Stack[-3] == 0)
0x157: IF (Stack[-1] == 0) GOTO 0x159; Pop(1)

0x158: GOTO 0x15c

0x159: Push((int) 1)
0x15a: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x15b: GOTO 0x151

0x15c: Stack[-4] = Stack[-12]
0x15d: Return(); Pop(10)

0x15e: Stack[-5] = 0
