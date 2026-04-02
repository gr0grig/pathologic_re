GlobalVarCount = 0

Strings:
	W:theater
	W:pt_k7q01_danko
	W:NPC_Bakalavr
	W:k7q01_danko.xml
	W:termitnik2
	W:pt_k7q01_burah
	W:NPC_Burah
	W:k7q01_burah.xml
	W:aglaja.wmv
	W:termitnik2@door1
	W:termitnik@door1
	W:pt_k7q01_birdmask1
	W:pers_birdmask
	W:k7q01_birdmask.xml
	W:pt_k7q01_birdmask2
	W:burah_home
	W:noburah
	W:sobor@door1
	W:place_corpse
	W:d7q02_corpse
	W:k7q01_corpse.xml
	W:place_danko
	W:cot_eva_load
	W:icot_eva_door
	W:theater_load
	W:termitnik2_load
	W:fail
	W:completed
	W:cleanup
	W:k7q01
	A:Remove
	A:GetLocator
	W:Locator 
	W: doesn't exist
	A:AddStationaryActor
	W:Door 
	W: not found
	W:locked
	A:SetProperty
	A:Close
// @pool_raw:74006800650061007400650072000000700074005f006b0037007100300031005f00640061006e006b006f0000004e00500043005f00420061006b0061006c0061007600720000006b0037007100300031005f00640061006e006b006f002e0078006d006c0000007400650072006d00690074006e0069006b0032000000700074005f006b0037007100300031005f006200750072006100680000004e00500043005f004200750072006100680000006b0037007100300031005f00620075007200610068002e0078006d006c000000610067006c0061006a0061002e0077006d00760000007400650072006d00690074006e0069006b003200400064006f006f007200310000007400650072006d00690074006e0069006b00400064006f006f00720031000000700074005f006b0037007100300031005f0062006900720064006d00610073006b003100000070006500720073005f0062006900720064006d00610073006b0000006b0037007100300031005f0062006900720064006d00610073006b002e0078006d006c000000700074005f006b0037007100300031005f0062006900720064006d00610073006b0032000000620075007200610068005f0068006f006d00650000006e006f0062007500720061006800000073006f0062006f007200400064006f006f0072003100000070006c006100630065005f0063006f0072007000730065000000640037007100300032005f0063006f00720070007300650000006b0037007100300031005f0063006f0072007000730065002e0078006d006c00000070006c006100630065005f00640061006e006b006f00000063006f0074005f006500760061005f006c006f00610064000000690063006f0074005f006500760061005f0064006f006f007200000074006800650061007400650072005f006c006f006100640000007400650072006d00690074006e0069006b0032005f006c006f006100640000006600610069006c00000063006f006d0070006c006500740065006400000063006c00650061006e007500700000006b003700710030003100000052656d6f7665004765744c6f6361746f72004c006f006300610074006f00720020000000200064006f00650073006e0027007400200065007800690073007400000041646453746174696f6e6172794163746f720044006f006f0072002000000020006e006f007400200066006f0075006e00640000006c006f0063006b0065006400000053657450726f706572747900436c6f736500

Import:
	GetSceneByName (2 args)
	QueuePlayMovie (1 args)
	GetMainOutdoorScene (1 args)
	GetScene (1 args)
	Trigger (2 args)
	Hold (0 args)
	Trace (1 args)
	AddActor (6 args)
	GetVariable (2 args)
	SetVariable (2 args)
	RemoveActor (1 args)
	self (1 args)
	FindActor (2 args)

RunOp = 0x26
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object, object, object, object, object) Params = 0
		EVENT_26 Op = 0x6a Vars = (string)


0x0: PushEmpty(object, object)
0x1: Push( Stack[3 + Tasks[-1].StackPointer] )
0x2: IF (Stack[-1] == 0) GOTO 0x4; Pop(1)

0x3: Return(); Pop(2)

0x4: Push("theater") // @poff=0
0x5: @ GetSceneByName(Stack[-2], Stack[-1])
0x6: Pop(1)
0x7: PushEmpty(object, object, string, string, string)
0x8: Stack[-6] = Stack[-4]
0x9: Stack[-3] = "pt_k7q01_danko" // @poff=16
0xa: Stack[-2] = "NPC_Bakalavr" // @poff=46
0xb: Stack[-1] = "k7q01_danko.xml" // @poff=72
0xc: Call2 0x10d

0xd: Stack[3 + Tasks[-1].StackPointer] = Stack[-5]
0xe: Pop(5)
0xf: Return(); Pop(2)

0x10: Stack[-1] = 0
0x11: PushEmpty(object, object)
0x12: Push( Stack[4 + Tasks[-1].StackPointer] )
0x13: IF (Stack[-1] == 0) GOTO 0x15; Pop(1)

0x14: Return(); Pop(2)

0x15: Push("termitnik2") // @poff=104
0x16: @ GetSceneByName(Stack[-2], Stack[-1])
0x17: Pop(1)
0x18: PushEmpty(object, object, string, string, string)
0x19: Stack[-6] = Stack[-4]
0x1a: Stack[-3] = "pt_k7q01_burah" // @poff=126
0x1b: Stack[-2] = "NPC_Burah" // @poff=156
0x1c: Stack[-1] = "k7q01_burah.xml" // @poff=176
0x1d: Call2 0x10d

0x1e: Stack[4 + Tasks[-1].StackPointer] = Stack[-5]
0x1f: Pop(5)
0x20: PushEmpty(bool, string)
0x21: Stack[-1] = "NPC_Burah" // @poff=156
0x22: Call2 0x157

0x23: Pop(2)
0x24: Return(); Pop(2)

0x25: Stack[-1] = 0
0x26: PushEmpty(object, object, object, object, object, object)
0x27: Push("aglaja.wmv") // @poff=208
0x28: @ QueuePlayMovie(Stack[-1])
0x29: Pop(1)
0x2a: PushEmpty(string, bool)
0x2b: Stack[-2] = "termitnik2@door1" // @poff=230
0x2c: Stack[-1] = (bool) 0
0x2d: Call2 0x131

0x2e: Pop(2)
0x2f: PushEmpty(string, bool)
0x30: Stack[-2] = "termitnik@door1" // @poff=264
0x31: Stack[-1] = (bool) 1
0x32: Call2 0x131

0x33: Pop(2)
0x34: @ GetMainOutdoorScene(Stack[-3])
0x35: Pop(0)
0x36: PushEmpty(object, object, string, string, string)
0x37: Stack[-8] = Stack[-4]
0x38: Stack[-3] = "pt_k7q01_birdmask1" // @poff=296
0x39: Stack[-2] = "pers_birdmask" // @poff=334
0x3a: Stack[-1] = "k7q01_birdmask.xml" // @poff=362
0x3b: Call2 0x11f

0x3c: Stack[0 + Tasks[-1].StackPointer] = Stack[-5]
0x3d: Pop(5)
0x3e: PushEmpty(object, object, string, string, string)
0x3f: Stack[-8] = Stack[-4]
0x40: Stack[-3] = "pt_k7q01_birdmask2" // @poff=400
0x41: Stack[-2] = "pers_birdmask" // @poff=334
0x42: Stack[-1] = "k7q01_birdmask.xml" // @poff=362
0x43: Call2 0x11f

0x44: Stack[1 + Tasks[-1].StackPointer] = Stack[-5]
0x45: Pop(5)
0x46: @ GetScene(Stack[-3])
0x47: Pop(0)
0x48: Push("theater") // @poff=0
0x49: @ GetSceneByName(Stack[-3], Stack[-1])
0x4a: Pop(1)
0x4b: Pop(0); Push((bool) Stack[-2] != Stack[-3])
0x4c: IF (Stack[-1] == 0) GOTO 0x50; Pop(1)

0x4d: PushEmpty()
0x4e: Call2 0x0

0x4f: Pop(0)
0x50: Push("termitnik2") // @poff=104
0x51: @ GetSceneByName(Stack[-2], Stack[-1])
0x52: Pop(1)
0x53: Pop(0); Push((bool) Stack[-1] != Stack[-3])
0x54: IF (Stack[-1] == 0) GOTO 0x58; Pop(1)

0x55: PushEmpty()
0x56: Call2 0x11

0x57: Pop(0)
0x58: Push("burah_home") // @poff=438
0x59: @ GetSceneByName(Stack[-4], Stack[-1])
0x5a: Pop(1)
0x5b: Push("noburah") // @poff=460
0x5c: @ Trigger(Stack[-4], Stack[-1])
0x5d: Pop(1)
0x5e: PushEmpty(string, bool)
0x5f: Stack[-2] = "sobor@door1" // @poff=476
0x60: Stack[-1] = (bool) 1
0x61: Call2 0x131

0x62: Pop(2)
0x63: @ Hold()
0x64: Pop(0)
0x65: GOTO 0x63

0x66: Return(); Pop(6)

0x67: Stack[-1] = 0
0x68: Stack[-2] = 0
0x69: Stack[-3] = 0
0x6a: PushEmpty(object, int, object, int)
0x6b: @ Trace(Stack[-5])
0x6c: Pop(0)
0x6d: Push("place_corpse") // @poff=500
0x6e: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x6f: IF (Stack[-1] == 0) GOTO 0x7a; Pop(1)

0x70: @ GetMainOutdoorScene(Stack[-2])
0x71: Pop(0)
0x72: Push("d7q02_corpse") // @poff=526
0x73: Push([0.0, 0.0, 0.0])
0x74: Push([0.0, 0.0, 1.0])
0x75: Push("k7q01_corpse.xml") // @poff=552
0x76: @ AddActor(Stack[-2]T, Stack[-4], Stack[-6], Stack[-3], Stack[-2], Stack[-1])
0x77: Pop(4)
0x78: Stack[-2] = 0
0x79: GOTO 0xb8

0x7a: Push("place_danko") // @poff=586
0x7b: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x7c: IF (Stack[-1] == 0) GOTO 0x83; Pop(1)

0x7d: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x7e: IF (Stack[-1] == 0) GOTO 0x82; Pop(1)

0x7f: PushEmpty()
0x80: Call2 0x0

0x81: Pop(0)
0x82: GOTO 0xb8

0x83: Push("cot_eva_load") // @poff=610
0x84: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x85: IF (Stack[-1] == 0) GOTO 0x8c; Pop(1)

0x86: PushEmpty(string, bool)
0x87: Stack[-2] = "icot_eva_door" // @poff=636
0x88: Stack[-1] = (bool) 1
0x89: Call2 0x142

0x8a: Pop(2)
0x8b: GOTO 0xb8

0x8c: Push("theater_load") // @poff=664
0x8d: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x8e: IF (Stack[-1] == 0) GOTO 0x93; Pop(1)

0x8f: PushEmpty()
0x90: Call2 0x0

0x91: Pop(0)
0x92: GOTO 0xb8

0x93: Push("termitnik2_load") // @poff=690
0x94: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x95: IF (Stack[-1] == 0) GOTO 0x9a; Pop(1)

0x96: PushEmpty()
0x97: Call2 0x11

0x98: Pop(0)
0x99: GOTO 0xb8

0x9a: Push("fail") // @poff=722
0x9b: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x9c: IF (Stack[-1] == 0) GOTO 0xa1; Pop(1)

0x9d: PushEmpty()
0x9e: Call2 0xb9

0x9f: Pop(0)
0xa0: GOTO 0xb8

0xa1: Push("completed") // @poff=732
0xa2: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0xa3: IF (Stack[-1] == 0) GOTO 0xa8; Pop(1)

0xa4: PushEmpty()
0xa5: Call2 0xc1

0xa6: Pop(0)
0xa7: GOTO 0xb8

0xa8: Push("cleanup") // @poff=752
0xa9: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0xaa: IF (Stack[-1] == 0) GOTO 0xb8; Pop(1)

0xab: Push("k7q01") // @poff=768
0xac: @ GetVariable(Stack[-1], Stack[-2])
0xad: Pop(1)
0xae: Push((int) 1000)
0xaf: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0xb0: IF (Stack[-1] == 0) GOTO 0xb5; Pop(1)

0xb1: Push("k7q01") // @poff=768
0xb2: Push((int) -1)
0xb3: @ SetVariable(Stack[-2], Stack[-1])
0xb4: Pop(2)
0xb5: PushEmpty()
0xb6: Call2 0xdc

0xb7: Pop(0)
0xb8: Return(); Pop(4)

0xb9: Push("k7q01") // @poff=768
0xba: Push((int) -1)
0xbb: @ SetVariable(Stack[-2], Stack[-1])
0xbc: Pop(2)
0xbd: PushEmpty()
0xbe: Call2 0xc9

0xbf: Pop(0)
0xc0: Return(); Pop(0)

0xc1: Push("k7q01") // @poff=768
0xc2: Push((int) 1000)
0xc3: @ SetVariable(Stack[-2], Stack[-1])
0xc4: Pop(2)
0xc5: PushEmpty()
0xc6: Call2 0xc9

0xc7: Pop(0)
0xc8: Return(); Pop(0)

0xc9: Push( Stack[0 + Tasks[-1].StackPointer] )
0xca: IF (Stack[-1] == 0) GOTO 0xcd; Pop(1)

0xcb: @@@ Remove(); Obj=0 // @poff=780
0xcc: Pop(0)
0xcd: Push( Stack[1 + Tasks[-1].StackPointer] )
0xce: IF (Stack[-1] == 0) GOTO 0xd1; Pop(1)

0xcf: @@@ Remove(); Obj=1 // @poff=780
0xd0: Pop(0)
0xd1: PushEmpty(string, bool)
0xd2: Stack[-2] = "sobor@door1" // @poff=476
0xd3: Stack[-1] = (bool) 0
0xd4: Call2 0x131

0xd5: Pop(2)
0xd6: PushEmpty(string, bool)
0xd7: Stack[-2] = "termitnik@door1" // @poff=264
0xd8: Stack[-1] = (bool) 0
0xd9: Call2 0x131

0xda: Pop(2)
0xdb: Return(); Pop(0)

0xdc: PushEmpty(object, object)
0xdd: EventDisable(26)
0xde: PushEmpty()
0xdf: Call2 0xc9

0xe0: Pop(0)
0xe1: Push( Stack[3 + Tasks[-1].StackPointer] )
0xe2: IF (Stack[-1] == 0) GOTO 0xe6; Pop(1)

0xe3: Push("cleanup") // @poff=752
0xe4: @ Trigger(Stack[-3]T, Stack[-1])
0xe5: Pop(1)
0xe6: PushEmpty(string, bool)
0xe7: Stack[-2] = "icot_eva_door" // @poff=636
0xe8: Stack[-1] = (bool) 0
0xe9: Call2 0x142

0xea: Pop(2)
0xeb: Push( Stack[4 + Tasks[-1].StackPointer] )
0xec: IF (Stack[-1] == 0) GOTO 0xf0; Pop(1)

0xed: Push("cleanup") // @poff=752
0xee: @ Trigger(Stack[-4]T, Stack[-1])
0xef: Pop(1)
0xf0: Push( Stack[2 + Tasks[-1].StackPointer] )
0xf1: IF (Stack[-1] == 0) GOTO 0xf5; Pop(1)

0xf2: Push("cleanup") // @poff=752
0xf3: @ Trigger(Stack[-2]T, Stack[-1])
0xf4: Pop(1)
0xf5: Push("burah_home") // @poff=438
0xf6: @ GetSceneByName(Stack[-2], Stack[-1])
0xf7: Pop(1)
0xf8: Push("burah") // @poff=144
0xf9: @ Trigger(Stack[-2], Stack[-1])
0xfa: Pop(1)
0xfb: PushEmpty(string, bool)
0xfc: Stack[-2] = "termitnik2@door1" // @poff=230
0xfd: Stack[-1] = (bool) 1
0xfe: Call2 0x131

0xff: Pop(2)
0x100: PushEmpty(object)
0x101: Call2 0x107

0x102: Pop(0)
0x103: @ RemoveActor(Stack[-1])
0x104: Pop(1)
0x105: Return(); Pop(2)

0x106: Stack[-1] = 0
0x107: PushEmpty(object, object)
0x108: @ self(Stack[-1])
0x109: Pop(0)
0x10a: Stack[-1] = Stack[-3]
0x10b: Return(); Pop(2)

0x10c: Stack[-1] = 0
0x10d: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x10e: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2]); Obj=12 // @poff=787
0x10f: Pop(0)
0x110: Pop(0); Push((bool) Stack[-4] == 0)
0x111: IF (Stack[-1] == 0) GOTO 0x11a; Pop(1)

0x112: Push("Locator ") // @poff=798
0x113: Pop(1); Push(Stack[-1] + Stack[-12]);
0x114: Push(" doesn't exist") // @poff=816
0x115: Pop(2); Push(Stack[-2] + Stack[-1]);
0x116: @ Trace(Stack[-1])
0x117: Pop(1)
0x118: Stack[-1] = 0
0x119: GOTO 0x11c

0x11a: @ AddActor(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0x11b: Pop(0)
0x11c: Stack[-1] = Stack[-13]
0x11d: Return(); Pop(8)

0x11e: Stack[-1] = 0
0x11f: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x120: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2]); Obj=12 // @poff=787
0x121: Pop(0)
0x122: Pop(0); Push((bool) Stack[-4] == 0)
0x123: IF (Stack[-1] == 0) GOTO 0x12c; Pop(1)

0x124: Push("Locator ") // @poff=798
0x125: Pop(1); Push(Stack[-1] + Stack[-12]);
0x126: Push(" doesn't exist") // @poff=816
0x127: Pop(2); Push(Stack[-2] + Stack[-1]);
0x128: @ Trace(Stack[-1])
0x129: Pop(1)
0x12a: Stack[-1] = 0
0x12b: GOTO 0x12e

0x12c: @@ AddStationaryActor(Stack[-1], Stack[-3], Stack[-2], Stack[-10], Stack[-9]); Obj=12 // @poff=846
0x12d: Pop(0)
0x12e: Stack[-1] = Stack[-13]
0x12f: Return(); Pop(8)

0x130: Stack[-1] = 0
0x131: PushEmpty(object, object)
0x132: @ FindActor(Stack[-1], Stack[-4])
0x133: Pop(0)
0x134: Pop(0); Push((bool) Stack[-1] == 0)
0x135: IF (Stack[-1] == 0) GOTO 0x13d; Pop(1)

0x136: Push("Door ") // @poff=865
0x137: Pop(1); Push(Stack[-1] + Stack[-5]);
0x138: Push(" not found") // @poff=877
0x139: Pop(2); Push(Stack[-2] + Stack[-1]);
0x13a: @ Trace(Stack[-1])
0x13b: Pop(1)
0x13c: GOTO 0x140

0x13d: Push("locked") // @poff=899
0x13e: @@ SetProperty(Stack[-1], Stack[-4]); Obj=2 // @poff=913
0x13f: Pop(1)
0x140: Return(); Pop(2)

0x141: Stack[-1] = 0
0x142: PushEmpty(object, object)
0x143: @ FindActor(Stack[-1], Stack[-4])
0x144: Pop(0)
0x145: Pop(0); Push((bool) Stack[-1] == 0)
0x146: IF (Stack[-1] == 0) GOTO 0x14e; Pop(1)

0x147: Push("Door ") // @poff=865
0x148: Pop(1); Push(Stack[-1] + Stack[-5]);
0x149: Push(" not found") // @poff=877
0x14a: Pop(2); Push(Stack[-2] + Stack[-1]);
0x14b: @ Trace(Stack[-1])
0x14c: Pop(1)
0x14d: GOTO 0x155

0x14e: Push(Stack[-3])
0x14f: IF (Stack[-1] == 0) GOTO 0x152; Pop(1)

0x150: @@ Close(); Obj=1 // @poff=925
0x151: Pop(0)
0x152: Push("locked") // @poff=899
0x153: @@ SetProperty(Stack[-1], Stack[-4]); Obj=2 // @poff=913
0x154: Pop(1)
0x155: Return(); Pop(2)

0x156: Stack[-1] = 0
0x157: PushEmpty(object, object)
0x158: @ FindActor(Stack[-1], Stack[-3])
0x159: Pop(0)
0x15a: Pop(0); Push((bool) Stack[-1] == 0)
0x15b: IF (Stack[-1] == 0) GOTO 0x15e; Pop(1)

0x15c: Stack[-4] = (bool) 0
0x15d: Return(); Pop(2)

0x15e: @ RemoveActor(Stack[-1])
0x15f: Pop(0)
0x160: Stack[-4] = (bool) 1
0x161: Return(); Pop(2)

0x162: Stack[-1] = 0
