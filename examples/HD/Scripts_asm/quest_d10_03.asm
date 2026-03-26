GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	W:pt_b10q04_bull
	W:pers_avrox
	W:b10q04_bull.xml
	W:pt_d10q03_morlok1
	W:pers_morlok
	W:d10q03_morlok.xml
	A:add
	W:pt_d10q03_morlok2
	W:pt_d10q03_morlok3
	W:pt_d10q03_salesman
	W:pers_salesman
	W:d10q03_salesman.xml
	W:pt_d10q03_people1
	W:pers_worker
	W:d10q03_worker.xml
	W:pt_d10q03_people2
	W:pers_dohodyaga
	W:d10q03_dohodyaga.xml
	W:pt_d10q03_people3
	W:pers_unosha
	W:d10q03_unosha.xml
	W:pt_d10q03_people4
	W:pers_alkash
	W:d10q03_alkash.xml
	W:place_sanitars
	W:cleanup
	W:pt_b11q04_sanitar
	A:GetLocator
	W:pers_sanitar
	W:b11q04_sanitar.xml
	W:pt_b11q04_corpse
	W:scripted
	W:b11q04_corpse.xml
	W:fail
	W:completed
	W:d10q03
	W:cleaunp
	W:Locator 
	W: doesn't exist
	A:AddStationaryActor
	A:size
	A:get
	A:Remove
	A:clear
// @pool_raw:700074005f006200310030007100300034005f00620075006c006c00000070006500720073005f006100760072006f00780000006200310030007100300034005f00620075006c006c002e0078006d006c000000700074005f006400310030007100300033005f006d006f0072006c006f006b003100000070006500720073005f006d006f0072006c006f006b0000006400310030007100300033005f006d006f0072006c006f006b002e0078006d006c00000061646400700074005f006400310030007100300033005f006d006f0072006c006f006b0032000000700074005f006400310030007100300033005f006d006f0072006c006f006b0033000000700074005f006400310030007100300033005f00730061006c00650073006d0061006e00000070006500720073005f00730061006c00650073006d0061006e0000006400310030007100300033005f00730061006c00650073006d0061006e002e0078006d006c000000700074005f006400310030007100300033005f00700065006f0070006c0065003100000070006500720073005f0077006f0072006b006500720000006400310030007100300033005f0077006f0072006b00650072002e0078006d006c000000700074005f006400310030007100300033005f00700065006f0070006c0065003200000070006500720073005f0064006f0068006f006400790061006700610000006400310030007100300033005f0064006f0068006f00640079006100670061002e0078006d006c000000700074005f006400310030007100300033005f00700065006f0070006c0065003300000070006500720073005f0075006e006f0073006800610000006400310030007100300033005f0075006e006f007300680061002e0078006d006c000000700074005f006400310030007100300033005f00700065006f0070006c0065003400000070006500720073005f0061006c006b0061007300680000006400310030007100300033005f0061006c006b006100730068002e0078006d006c00000070006c006100630065005f00730061006e0069007400610072007300000063006c00650061006e00750070000000700074005f006200310031007100300034005f00730061006e00690074006100720000004765744c6f6361746f720070006500720073005f00730061006e00690074006100720000006200310031007100300034005f00730061006e0069007400610072002e0078006d006c000000700074005f006200310031007100300034005f0063006f00720070007300650000007300630072006900700074006500640000006200310031007100300034005f0063006f0072007000730065002e0078006d006c0000006600610069006c00000063006f006d0070006c0065007400650064000000640031003000710030003300000063006c006500610075006e00700000004c006f006300610074006f00720020000000200064006f00650073006e0027007400200065007800690073007400000041646453746174696f6e6172794163746f720073697a65006765740052656d6f766500636c65617200

Import:
	GetMainOutdoorScene (1 args)
	Trace (1 args)
	Trigger (2 args)
	GetVariable (2 args)
	SetVariable (2 args)
	RemoveActor (1 args)
	GetGameTime (1 args)
	SetTimeEvent (2 args)
	Hold (0 args)
	self (1 args)
	CreateObjectVector (1 args)
	AddActor (6 args)
	AddActorByType (6 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object, object, object, object) Params = 0
		EVENT_26 Op = 0x61 Vars = (string)
		EVENT_9 Op = 0xf4 Vars = (int, float)


0x0: PushEmpty(object, object)
0x1: PushEmpty(object)
0x2: Call2 0xff

0x3: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x4: Pop(1)
0x5: PushEmpty(object)
0x6: Call2 0xff

0x7: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x8: Pop(1)
0x9: @ GetMainOutdoorScene(Stack[-1])
0xa: Pop(0)
0xb: PushEmpty(object, object, string, string, string)
0xc: Stack[-6] = Stack[-4]
0xd: Stack[-3] = "pt_b10q04_bull" // @poff=0
0xe: Stack[-2] = "pers_avrox" // @poff=30
0xf: Stack[-1] = "b10q04_bull.xml" // @poff=52
0x10: Call2 0x105

0x11: Stack[1 + Tasks[-1].StackPointer] = Stack[-5]
0x12: Pop(5)
0x13: PushEmpty(object, object, string, string, string)
0x14: Stack[-6] = Stack[-4]
0x15: Stack[-3] = "pt_d10q03_morlok1" // @poff=84
0x16: Stack[-2] = "pers_morlok" // @poff=120
0x17: Stack[-1] = "d10q03_morlok.xml" // @poff=144
0x18: Call2 0x105

0x19: Pop(4)
0x1a: @@@ add(Stack[-1]); Obj=0 // @poff=180
0x1b: Pop(1)
0x1c: PushEmpty(object, object, string, string, string)
0x1d: Stack[-6] = Stack[-4]
0x1e: Stack[-3] = "pt_d10q03_morlok2" // @poff=184
0x1f: Stack[-2] = "pers_morlok" // @poff=120
0x20: Stack[-1] = "d10q03_morlok.xml" // @poff=144
0x21: Call2 0x105

0x22: Pop(4)
0x23: @@@ add(Stack[-1]); Obj=0 // @poff=180
0x24: Pop(1)
0x25: PushEmpty(object, object, string, string, string)
0x26: Stack[-6] = Stack[-4]
0x27: Stack[-3] = "pt_d10q03_morlok3" // @poff=220
0x28: Stack[-2] = "pers_morlok" // @poff=120
0x29: Stack[-1] = "d10q03_morlok.xml" // @poff=144
0x2a: Call2 0x105

0x2b: Pop(4)
0x2c: @@@ add(Stack[-1]); Obj=0 // @poff=180
0x2d: Pop(1)
0x2e: PushEmpty(object, object, string, string, string)
0x2f: Stack[-6] = Stack[-4]
0x30: Stack[-3] = "pt_d10q03_salesman" // @poff=256
0x31: Stack[-2] = "pers_salesman" // @poff=294
0x32: Stack[-1] = "d10q03_salesman.xml" // @poff=322
0x33: Call2 0x105

0x34: Pop(4)
0x35: @@@ add(Stack[-1]); Obj=0 // @poff=180
0x36: Pop(1)
0x37: PushEmpty(object, object, string, string, string)
0x38: Stack[-6] = Stack[-4]
0x39: Stack[-3] = "pt_d10q03_people1" // @poff=362
0x3a: Stack[-2] = "pers_worker" // @poff=398
0x3b: Stack[-1] = "d10q03_worker.xml" // @poff=422
0x3c: Call2 0x105

0x3d: Pop(4)
0x3e: @@@ add(Stack[-1]); Obj=0 // @poff=180
0x3f: Pop(1)
0x40: PushEmpty(object, object, string, string, string)
0x41: Stack[-6] = Stack[-4]
0x42: Stack[-3] = "pt_d10q03_people2" // @poff=458
0x43: Stack[-2] = "pers_dohodyaga" // @poff=494
0x44: Stack[-1] = "d10q03_dohodyaga.xml" // @poff=524
0x45: Call2 0x105

0x46: Pop(4)
0x47: @@@ add(Stack[-1]); Obj=0 // @poff=180
0x48: Pop(1)
0x49: PushEmpty(object, object, string, string, string)
0x4a: Stack[-6] = Stack[-4]
0x4b: Stack[-3] = "pt_d10q03_people3" // @poff=566
0x4c: Stack[-2] = "pers_unosha" // @poff=602
0x4d: Stack[-1] = "d10q03_unosha.xml" // @poff=626
0x4e: Call2 0x105

0x4f: Pop(4)
0x50: @@@ add(Stack[-1]); Obj=0 // @poff=180
0x51: Pop(1)
0x52: PushEmpty(object, object, string, string, string)
0x53: Stack[-6] = Stack[-4]
0x54: Stack[-3] = "pt_d10q03_people4" // @poff=662
0x55: Stack[-2] = "pers_alkash" // @poff=698
0x56: Stack[-1] = "d10q03_alkash.xml" // @poff=722
0x57: Call2 0x105

0x58: Pop(4)
0x59: @@@ add(Stack[-1]); Obj=0 // @poff=180
0x5a: Pop(1)
0x5b: PushEmpty(int)
0x5c: Stack[-1] = (int) 10
0x5d: Call2 0xe1

0x5e: Pop(1)
0x5f: Return(); Pop(2)

0x60: Stack[-1] = 0
0x61: PushEmpty(object, int, bool, cvector, cvector, object, int, bool, cvector, cvector)
0x62: @ Trace(Stack[-11])
0x63: Pop(0)
0x64: Push("place_sanitars") // @poff=758
0x65: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0x66: IF (Stack[-1] == 0) GOTO 0x92; Pop(1)

0x67: PushEmpty(object, string)
0x68: Stack[-2] = Stack[0 + Tasks[-1].StackPointer]
0x69: Stack[-1] = "cleanup" // @poff=788
0x6a: Call2 0x150

0x6b: Pop(2)
0x6c: Push( Stack[1 + Tasks[-1].StackPointer] )
0x6d: IF (Stack[-1] == 0) GOTO 0x71; Pop(1)

0x6e: Push("cleanup") // @poff=788
0x6f: @ Trigger(Stack[-1]T, Stack[-1])
0x70: Pop(1)
0x71: @ GetMainOutdoorScene(Stack[-5])
0x72: Pop(0)
0x73: Stack[-4] = (int) 1
0x74: Push("pt_b11q04_sanitar") // @poff=804
0x75: Pop(1); Push(Stack[-1] + Stack[-5]);
0x76: @@ GetLocator(Stack[-1], Stack[-4], Stack[-3], Stack[-2]); Obj=6 // @poff=840
0x77: Pop(1)
0x78: Pop(0); Push((bool) Stack[-3] == 0)
0x79: IF (Stack[-1] == 0) GOTO 0x7b; Pop(1)

0x7a: GOTO 0x88

0x7b: PushEmpty(object, object, string, string, string)
0x7c: Stack[-10] = Stack[-4]
0x7d: Push("pt_b11q04_sanitar") // @poff=804
0x7e: Stack[-4] = Stack[-1] + Stack[-10]; Pop(1);
0x7f: Stack[-2] = "pers_sanitar" // @poff=851
0x80: Stack[-1] = "b11q04_sanitar.xml" // @poff=877
0x81: Call2 0x129

0x82: Pop(4)
0x83: @@@ add(Stack[-1]); Obj=2 // @poff=180
0x84: Pop(1)
0x85: Push((int) 1)
0x86: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x87: GOTO 0x74

0x88: PushEmpty(object, object, string, string, string)
0x89: Stack[-10] = Stack[-4]
0x8a: Stack[-3] = "pt_b11q04_corpse" // @poff=915
0x8b: Stack[-2] = "scripted" // @poff=949
0x8c: Stack[-1] = "b11q04_corpse.xml" // @poff=967
0x8d: Call2 0x117

0x8e: Stack[3 + Tasks[-1].StackPointer] = Stack[-5]
0x8f: Pop(5)
0x90: Stack[-5] = 0
0x91: GOTO 0x9f

0x92: Push("fail") // @poff=1003
0x93: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0x94: IF (Stack[-1] == 0) GOTO 0x99; Pop(1)

0x95: PushEmpty()
0x96: Call2 0xae

0x97: Pop(0)
0x98: GOTO 0x9f

0x99: Push("completed") // @poff=1013
0x9a: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0x9b: IF (Stack[-1] == 0) GOTO 0x9f; Pop(1)

0x9c: PushEmpty()
0x9d: Call2 0xb6

0x9e: Pop(0)
0x9f: Return(); Pop(10)

0xa0: PushEmpty(int, int)
0xa1: Push("d10q03") // @poff=1033
0xa2: @ GetVariable(Stack[-1], Stack[-2])
0xa3: Pop(1)
0xa4: Push((int) 1000)
0xa5: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0xa6: IF (Stack[-1] == 0) GOTO 0xaa; Pop(1)

0xa7: PushEmpty()
0xa8: Call2 0xae

0xa9: Pop(0)
0xaa: PushEmpty()
0xab: Call2 0xc9

0xac: Pop(0)
0xad: Return(); Pop(2)

0xae: Push("d10q03") // @poff=1033
0xaf: Push((int) -1)
0xb0: @ SetVariable(Stack[-2], Stack[-1])
0xb1: Pop(2)
0xb2: PushEmpty()
0xb3: Call2 0xbe

0xb4: Pop(0)
0xb5: Return(); Pop(0)

0xb6: Push("d10q03") // @poff=1033
0xb7: Push((int) 1000)
0xb8: @ SetVariable(Stack[-2], Stack[-1])
0xb9: Pop(2)
0xba: PushEmpty()
0xbb: Call2 0xbe

0xbc: Pop(0)
0xbd: Return(); Pop(0)

0xbe: PushEmpty(object, string)
0xbf: Stack[-2] = Stack[0 + Tasks[-1].StackPointer]
0xc0: Stack[-1] = "cleanup" // @poff=788
0xc1: Call2 0x150

0xc2: Pop(2)
0xc3: Push( Stack[1 + Tasks[-1].StackPointer] )
0xc4: IF (Stack[-1] == 0) GOTO 0xc8; Pop(1)

0xc5: Push("cleanup") // @poff=788
0xc6: @ Trigger(Stack[-1]T, Stack[-1])
0xc7: Pop(1)
0xc8: Return(); Pop(0)

0xc9: EventDisable(26)
0xca: PushEmpty()
0xcb: Call2 0xbe

0xcc: Pop(0)
0xcd: PushEmpty(object)
0xce: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xcf: Call2 0x13b

0xd0: Pop(1)
0xd1: Push( Stack[3 + Tasks[-1].StackPointer] )
0xd2: IF (Stack[-1] == 0) GOTO 0xd6; Pop(1)

0xd3: Push("cleaunp") // @poff=1047
0xd4: @ Trigger(Stack[-3]T, Stack[-1])
0xd5: Pop(1)
0xd6: Push( Stack[1 + Tasks[-1].StackPointer] )
0xd7: IF (Stack[-1] == 0) GOTO 0xdb; Pop(1)

0xd8: Push("cleanup") // @poff=788
0xd9: @ Trigger(Stack[-1]T, Stack[-1])
0xda: Pop(1)
0xdb: PushEmpty(object)
0xdc: Call2 0xf9

0xdd: Pop(0)
0xde: @ RemoveActor(Stack[-1])
0xdf: Pop(1)
0xe0: Return(); Pop(0)

0xe1: PushEmpty(float, float)
0xe2: @ GetGameTime(Stack[-1])
0xe3: Pop(0)
0xe4: Push((int) 24)
0xe5: Pop(1); Push(Stack[-4] * Stack[-1]);
0xe6: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0xe7: IF (Stack[-1] == 0) GOTO 0xec; Pop(1)

0xe8: PushEmpty()
0xe9: Call2 0xc9

0xea: Pop(0)
0xeb: GOTO 0xf3

0xec: Push((int) 0)
0xed: Push((int) 24)
0xee: Pop(1); Push(Stack[-5] * Stack[-1]);
0xef: @ SetTimeEvent(Stack[-2], Stack[-1])
0xf0: Pop(2)
0xf1: @ Hold()
0xf2: Pop(0)
0xf3: Return(); Pop(2)

0xf4: PushEmpty()
0xf5: PushEmpty()
0xf6: Call2 0xa0

0xf7: Pop(0)
0xf8: Return(); Pop(0)

0xf9: PushEmpty(object, object)
0xfa: @ self(Stack[-1])
0xfb: Pop(0)
0xfc: Stack[-1] = Stack[-3]
0xfd: Return(); Pop(2)

0xfe: Stack[-1] = 0
0xff: PushEmpty(object, object)
0x100: @ CreateObjectVector(Stack[-1])
0x101: Pop(0)
0x102: Stack[-1] = Stack[-3]
0x103: Return(); Pop(2)

0x104: Stack[-1] = 0
0x105: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x106: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2]); Obj=12 // @poff=840
0x107: Pop(0)
0x108: Pop(0); Push((bool) Stack[-4] == 0)
0x109: IF (Stack[-1] == 0) GOTO 0x112; Pop(1)

0x10a: Push("Locator ") // @poff=1063
0x10b: Pop(1); Push(Stack[-1] + Stack[-12]);
0x10c: Push(" doesn't exist") // @poff=1081
0x10d: Pop(2); Push(Stack[-2] + Stack[-1]);
0x10e: @ Trace(Stack[-1])
0x10f: Pop(1)
0x110: Stack[-1] = 0
0x111: GOTO 0x114

0x112: @ AddActor(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0x113: Pop(0)
0x114: Stack[-1] = Stack[-13]
0x115: Return(); Pop(8)

0x116: Stack[-1] = 0
0x117: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x118: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2]); Obj=12 // @poff=840
0x119: Pop(0)
0x11a: Pop(0); Push((bool) Stack[-4] == 0)
0x11b: IF (Stack[-1] == 0) GOTO 0x124; Pop(1)

0x11c: Push("Locator ") // @poff=1063
0x11d: Pop(1); Push(Stack[-1] + Stack[-12]);
0x11e: Push(" doesn't exist") // @poff=1081
0x11f: Pop(2); Push(Stack[-2] + Stack[-1]);
0x120: @ Trace(Stack[-1])
0x121: Pop(1)
0x122: Stack[-1] = 0
0x123: GOTO 0x126

0x124: @ AddActorByType(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0x125: Pop(0)
0x126: Stack[-1] = Stack[-13]
0x127: Return(); Pop(8)

0x128: Stack[-1] = 0
0x129: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x12a: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2]); Obj=12 // @poff=840
0x12b: Pop(0)
0x12c: Pop(0); Push((bool) Stack[-4] == 0)
0x12d: IF (Stack[-1] == 0) GOTO 0x136; Pop(1)

0x12e: Push("Locator ") // @poff=1063
0x12f: Pop(1); Push(Stack[-1] + Stack[-12]);
0x130: Push(" doesn't exist") // @poff=1081
0x131: Pop(2); Push(Stack[-2] + Stack[-1]);
0x132: @ Trace(Stack[-1])
0x133: Pop(1)
0x134: Stack[-1] = 0
0x135: GOTO 0x138

0x136: @@ AddStationaryActor(Stack[-1], Stack[-3], Stack[-2], Stack[-10], Stack[-9]); Obj=12 // @poff=1111
0x137: Pop(0)
0x138: Stack[-1] = Stack[-13]
0x139: Return(); Pop(8)

0x13a: Stack[-1] = 0
0x13b: PushEmpty(int, int, object, int, int, object)
0x13c: Push(Stack[-7])
0x13d: IF (Stack[-1] == 0) GOTO 0x14f; Pop(1)

0x13e: @@ size(Stack[-3]); Obj=7 // @poff=1130
0x13f: Pop(0)
0x140: Stack[-2] = (int) 0
0x141: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0x142: IF (Stack[-1] == 0) GOTO 0x14d; Pop(1)

0x143: @@ get(Stack[-1], Stack[-2]); Obj=7 // @poff=1135
0x144: Pop(0)
0x145: Push(Stack[-1])
0x146: IF (Stack[-1] == 0) GOTO 0x149; Pop(1)

0x147: @@ Remove(); Obj=1 // @poff=1139
0x148: Pop(0)
0x149: Stack[-1] = 0
0x14a: Push((int) 1)
0x14b: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x14c: GOTO 0x141

0x14d: @@ clear(); Obj=7 // @poff=1146
0x14e: Pop(0)
0x14f: Return(); Pop(6)

0x150: PushEmpty(int, int, object, int, int, object)
0x151: Push(Stack[-8])
0x152: IF (Stack[-1] == 0) GOTO 0x162; Pop(1)

0x153: @@ size(Stack[-3]); Obj=8 // @poff=1130
0x154: Pop(0)
0x155: Stack[-2] = (int) 0
0x156: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0x157: IF (Stack[-1] == 0) GOTO 0x162; Pop(1)

0x158: @@ get(Stack[-1], Stack[-2]); Obj=8 // @poff=1135
0x159: Pop(0)
0x15a: Push(Stack[-1])
0x15b: IF (Stack[-1] == 0) GOTO 0x15e; Pop(1)

0x15c: @ Trigger(Stack[-1], Stack[-7])
0x15d: Pop(0)
0x15e: Stack[-1] = 0
0x15f: Push((int) 1)
0x160: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x161: GOTO 0x156

0x162: Return(); Pop(6)

