GlobalVarCount = 0

Strings:
	W:boiny@door1
	W:cot_eva
	W:icot_eva_door
	W:nodanko
	W:place_mdoberman
	W:pt_b9q01_mdoberman
	W:pers_doberman
	W:b9q01_mdoberman.xml
	W:remove_mdoberman
	A:Remove
	W:init_factory
	W:factory@door1
	W:ifactory_grid_door
	W:pt_b9q01_Danko
	W:NPC_Bakalavr
	W:b9q01_danko.xml
	W:pt_b9q01_doberman1
	W:b9q01_doberman1.xml
	W:pt_b9q01_doberman2
	W:b9q01_doberman2.xml
	W:factory_fight
	W:attack
	W:ifactory@door1
	W:door_close
	W:doberman_dead
	A:IsDead
	W:door_open
	W:b9q01DankoFree
	W:danko_free
	W:reset_factory
	W:cleanup
	W:b9q01
	W:remove_danko
	W:fail
	W:completed
	A:GetLocator
	W:Locator 
	W: doesn't exist
	A:AddStationaryActor
	W:Door 
	W: not found
	W:locked
	A:SetProperty
	A:Close
// @pool_raw:62006f0069006e007900400064006f006f0072003100000063006f0074005f006500760061000000690063006f0074005f006500760061005f0064006f006f00720000006e006f00640061006e006b006f00000070006c006100630065005f006d0064006f006200650072006d0061006e000000700074005f00620039007100300031005f006d0064006f006200650072006d0061006e00000070006500720073005f0064006f006200650072006d0061006e000000620039007100300031005f006d0064006f006200650072006d0061006e002e0078006d006c000000720065006d006f00760065005f006d0064006f006200650072006d0061006e00000052656d6f76650069006e00690074005f0066006100630074006f0072007900000066006100630074006f0072007900400064006f006f00720031000000690066006100630074006f00720079005f0067007200690064005f0064006f006f0072000000700074005f00620039007100300031005f00440061006e006b006f0000004e00500043005f00420061006b0061006c006100760072000000620039007100300031005f00640061006e006b006f002e0078006d006c000000700074005f00620039007100300031005f0064006f006200650072006d0061006e0031000000620039007100300031005f0064006f006200650072006d0061006e0031002e0078006d006c000000700074005f00620039007100300031005f0064006f006200650072006d0061006e0032000000620039007100300031005f0064006f006200650072006d0061006e0032002e0078006d006c00000066006100630074006f00720079005f00660069006700680074000000610074007400610063006b000000690066006100630074006f0072007900400064006f006f0072003100000064006f006f0072005f0063006c006f0073006500000064006f006200650072006d0061006e005f00640065006100640000004973446561640064006f006f0072005f006f00700065006e00000062003900710030003100440061006e006b006f0046007200650065000000640061006e006b006f005f0066007200650065000000720065007300650074005f0066006100630074006f0072007900000063006c00650061006e00750070000000620039007100300031000000720065006d006f00760065005f00640061006e006b006f0000006600610069006c00000063006f006d0070006c00650074006500640000004765744c6f6361746f72004c006f006300610074006f00720020000000200064006f00650073006e0027007400200065007800690073007400000041646453746174696f6e6172794163746f720044006f006f0072002000000020006e006f007400200066006f0075006e00640000006c006f0063006b0065006400000053657450726f706572747900436c6f736500

Import:
	GetSceneByName (2 args)
	Trigger (2 args)
	Hold (0 args)
	Trace (1 args)
	GetMainOutdoorScene (1 args)
	PlaySound (1 args)
	SetVariable (2 args)
	GetVariable (2 args)
	RemoveActor (1 args)
	self (1 args)
	AddActor (6 args)
	FindActor (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object, object, object, object) Params = 0
		EVENT_26 Op = 0x16 Vars = (string)


0x0: PushEmpty(object, object)
0x1: PushEmpty(string, bool)
0x2: Stack[-2] = "boiny@door1" // @poff=0
0x3: Stack[-1] = (bool) 0
0x4: Call2 0x143

0x5: Pop(2)
0x6: Push("cot_eva") // @poff=24
0x7: @ GetSceneByName(Stack[-2], Stack[-1])
0x8: Pop(1)
0x9: PushEmpty(string, bool)
0xa: Stack[-2] = "icot_eva_door" // @poff=40
0xb: Stack[-1] = (bool) 0
0xc: Call2 0x154

0xd: Pop(2)
0xe: Push("nodanko") // @poff=68
0xf: @ Trigger(Stack[-2], Stack[-1])
0x10: Pop(1)
0x11: @ Hold()
0x12: Pop(0)
0x13: GOTO 0x11

0x14: Return(); Pop(2)

0x15: Stack[-1] = 0
0x16: PushEmpty(object, object, bool, int, object, object, object, bool, int, object)
0x17: @ Trace(Stack[-11])
0x18: Pop(0)
0x19: Push("place_mdoberman") // @poff=84
0x1a: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0x1b: IF (Stack[-1] == 0) GOTO 0x28; Pop(1)

0x1c: @ GetMainOutdoorScene(Stack[-5])
0x1d: Pop(0)
0x1e: PushEmpty(object, object, string, string, string)
0x1f: Stack[-10] = Stack[-4]
0x20: Stack[-3] = "pt_b9q01_mdoberman" // @poff=116
0x21: Stack[-2] = "pers_doberman" // @poff=154
0x22: Stack[-1] = "b9q01_mdoberman.xml" // @poff=182
0x23: Call2 0x131

0x24: Stack[0 + Tasks[-1].StackPointer] = Stack[-5]
0x25: Pop(5)
0x26: Stack[-5] = 0
0x27: GOTO 0xd2

0x28: Push("remove_mdoberman") // @poff=222
0x29: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0x2a: IF (Stack[-1] == 0) GOTO 0x2e; Pop(1)

0x2b: @@@ Remove(); Obj=0 // @poff=256
0x2c: Pop(0)
0x2d: GOTO 0xd2

0x2e: Push("init_factory") // @poff=263
0x2f: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0x30: IF (Stack[-1] == 0) GOTO 0x58; Pop(1)

0x31: Push("factory") // @poff=273
0x32: @ GetSceneByName(Stack[-5], Stack[-1])
0x33: Pop(1)
0x34: PushEmpty(string, bool)
0x35: Stack[-2] = "factory@door1" // @poff=289
0x36: Stack[-1] = (bool) 0
0x37: Call2 0x143

0x38: Pop(2)
0x39: PushEmpty(string, bool)
0x3a: Stack[-2] = "ifactory_grid_door" // @poff=317
0x3b: Stack[-1] = (bool) 1
0x3c: Call2 0x154

0x3d: Pop(2)
0x3e: PushEmpty(object, object, string, string, string)
0x3f: Stack[-9] = Stack[-4]
0x40: Stack[-3] = "pt_b9q01_Danko" // @poff=355
0x41: Stack[-2] = "NPC_Bakalavr" // @poff=385
0x42: Stack[-1] = "b9q01_danko.xml" // @poff=411
0x43: Call2 0x11f

0x44: Stack[1 + Tasks[-1].StackPointer] = Stack[-5]
0x45: Pop(5)
0x46: PushEmpty(object, object, string, string, string)
0x47: Stack[-9] = Stack[-4]
0x48: Stack[-3] = "pt_b9q01_doberman1" // @poff=443
0x49: Stack[-2] = "pers_doberman" // @poff=154
0x4a: Stack[-1] = "b9q01_doberman1.xml" // @poff=481
0x4b: Call2 0x11f

0x4c: Stack[2 + Tasks[-1].StackPointer] = Stack[-5]
0x4d: Pop(5)
0x4e: PushEmpty(object, object, string, string, string)
0x4f: Stack[-9] = Stack[-4]
0x50: Stack[-3] = "pt_b9q01_doberman2" // @poff=521
0x51: Stack[-2] = "pers_doberman" // @poff=154
0x52: Stack[-1] = "b9q01_doberman2.xml" // @poff=559
0x53: Call2 0x11f

0x54: Stack[3 + Tasks[-1].StackPointer] = Stack[-5]
0x55: Pop(5)
0x56: Stack[-4] = 0
0x57: GOTO 0xd2

0x58: Push("factory_fight") // @poff=599
0x59: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0x5a: IF (Stack[-1] == 0) GOTO 0x6a; Pop(1)

0x5b: Push("attack") // @poff=627
0x5c: @ Trigger(Stack[-2]T, Stack[-1])
0x5d: Pop(1)
0x5e: Push("attack") // @poff=627
0x5f: @ Trigger(Stack[-3]T, Stack[-1])
0x60: Pop(1)
0x61: PushEmpty(string, bool)
0x62: Stack[-2] = "ifactory@door1" // @poff=641
0x63: Stack[-1] = (bool) 1
0x64: Call2 0x143

0x65: Pop(2)
0x66: Push("door_close") // @poff=671
0x67: @ PlaySound(Stack[-1])
0x68: Pop(1)
0x69: GOTO 0xd2

0x6a: Push("doberman_dead") // @poff=693
0x6b: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0x6c: IF (Stack[-1] == 0) GOTO 0x87; Pop(1)

0x6d: @@@ IsDead(Stack[-3]); Obj=2 // @poff=721
0x6e: Pop(0)
0x6f: Push(Stack[-3])
0x70: IF (Stack[-1] == 0) GOTO 0x86; Pop(1)

0x71: @@@ IsDead(Stack[-3]); Obj=3 // @poff=721
0x72: Pop(0)
0x73: Push(Stack[-3])
0x74: IF (Stack[-1] == 0) GOTO 0x86; Pop(1)

0x75: PushEmpty(string, bool)
0x76: Stack[-2] = "ifactory@door1" // @poff=641
0x77: Stack[-1] = (bool) 0
0x78: Call2 0x143

0x79: Pop(2)
0x7a: PushEmpty(string, bool)
0x7b: Stack[-2] = "ifactory_grid_door" // @poff=317
0x7c: Stack[-1] = (bool) 0
0x7d: Call2 0x154

0x7e: Pop(2)
0x7f: Push("door_open") // @poff=728
0x80: @ PlaySound(Stack[-1])
0x81: Pop(1)
0x82: Push("b9q01DankoFree") // @poff=748
0x83: Push((int) 1)
0x84: @ SetVariable(Stack[-2], Stack[-1])
0x85: Pop(2)
0x86: GOTO 0xd2

0x87: Push("danko_free") // @poff=778
0x88: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0x89: IF (Stack[-1] == 0) GOTO 0x98; Pop(1)

0x8a: PushEmpty(string, bool)
0x8b: Stack[-2] = "ifactory_grid_door" // @poff=317
0x8c: Stack[-1] = (bool) 0
0x8d: Call2 0x154

0x8e: Pop(2)
0x8f: Push("door_open") // @poff=728
0x90: @ PlaySound(Stack[-1])
0x91: Pop(1)
0x92: PushEmpty(string, bool)
0x93: Stack[-2] = "factory@door1" // @poff=289
0x94: Stack[-1] = (bool) 1
0x95: Call2 0x143

0x96: Pop(2)
0x97: GOTO 0xd2

0x98: Push("reset_factory") // @poff=800
0x99: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0x9a: IF (Stack[-1] == 0) GOTO 0xa4; Pop(1)

0x9b: PushEmpty()
0x9c: Call2 0xe3

0x9d: Pop(0)
0x9e: PushEmpty(string, bool)
0x9f: Stack[-2] = "factory@door1" // @poff=289
0xa0: Stack[-1] = (bool) 1
0xa1: Call2 0x143

0xa2: Pop(2)
0xa3: GOTO 0xd2

0xa4: Push("cleanup") // @poff=828
0xa5: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0xa6: IF (Stack[-1] == 0) GOTO 0xb5; Pop(1)

0xa7: Push("b9q01") // @poff=844
0xa8: @ GetVariable(Stack[-1], Stack[-3])
0xa9: Pop(1)
0xaa: Push((int) 1000)
0xab: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0xac: IF (Stack[-1] == 0) GOTO 0xb1; Pop(1)

0xad: PushEmpty()
0xae: Call2 0xd3

0xaf: Pop(0)
0xb0: GOTO 0xb4

0xb1: PushEmpty()
0xb2: Call2 0xf0

0xb3: Pop(0)
0xb4: GOTO 0xd2

0xb5: Push("remove_danko") // @poff=856
0xb6: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0xb7: IF (Stack[-1] == 0) GOTO 0xc5; Pop(1)

0xb8: Push("cot_eva") // @poff=24
0xb9: @ GetSceneByName(Stack[-2], Stack[-1])
0xba: Pop(1)
0xbb: PushEmpty(string, bool)
0xbc: Stack[-2] = "icot_eva_door" // @poff=40
0xbd: Stack[-1] = (bool) 0
0xbe: Call2 0x154

0xbf: Pop(2)
0xc0: Push("nodanko") // @poff=68
0xc1: @ Trigger(Stack[-2], Stack[-1])
0xc2: Pop(1)
0xc3: Stack[-1] = 0
0xc4: GOTO 0xd2

0xc5: Push("fail") // @poff=882
0xc6: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0xc7: IF (Stack[-1] == 0) GOTO 0xcc; Pop(1)

0xc8: PushEmpty()
0xc9: Call2 0xd3

0xca: Pop(0)
0xcb: GOTO 0xd2

0xcc: Push("completed") // @poff=892
0xcd: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0xce: IF (Stack[-1] == 0) GOTO 0xd2; Pop(1)

0xcf: PushEmpty()
0xd0: Call2 0xdb

0xd1: Pop(0)
0xd2: Return(); Pop(10)

0xd3: Push("b9q01") // @poff=844
0xd4: Push((int) -1)
0xd5: @ SetVariable(Stack[-2], Stack[-1])
0xd6: Pop(2)
0xd7: PushEmpty()
0xd8: Call2 0xf0

0xd9: Pop(0)
0xda: Return(); Pop(0)

0xdb: Push("b9q01") // @poff=844
0xdc: Push((int) 1000)
0xdd: @ SetVariable(Stack[-2], Stack[-1])
0xde: Pop(2)
0xdf: PushEmpty()
0xe0: Call2 0xf0

0xe1: Pop(0)
0xe2: Return(); Pop(0)

0xe3: Push( Stack[1 + Tasks[-1].StackPointer] )
0xe4: IF (Stack[-1] == 0) GOTO 0xe7; Pop(1)

0xe5: @ RemoveActor(Stack[-1]T)
0xe6: Pop(0)
0xe7: Push( Stack[2 + Tasks[-1].StackPointer] )
0xe8: IF (Stack[-1] == 0) GOTO 0xeb; Pop(1)

0xe9: @ RemoveActor(Stack[-2]T)
0xea: Pop(0)
0xeb: Push( Stack[3 + Tasks[-1].StackPointer] )
0xec: IF (Stack[-1] == 0) GOTO 0xef; Pop(1)

0xed: @ RemoveActor(Stack[-3]T)
0xee: Pop(0)
0xef: Return(); Pop(0)

0xf0: PushEmpty(object, object)
0xf1: Push( Stack[0 + Tasks[-1].StackPointer] )
0xf2: IF (Stack[-1] == 0) GOTO 0xf5; Pop(1)

0xf3: @@@ Remove(); Obj=0 // @poff=256
0xf4: Pop(0)
0xf5: PushEmpty()
0xf6: Call2 0xe3

0xf7: Pop(0)
0xf8: PushEmpty(string, bool)
0xf9: Stack[-2] = "ifactory@door1" // @poff=641
0xfa: Stack[-1] = (bool) 0
0xfb: Call2 0x143

0xfc: Pop(2)
0xfd: PushEmpty(string, bool)
0xfe: Stack[-2] = "ifactory_grid_door" // @poff=317
0xff: Stack[-1] = (bool) 0
0x100: Call2 0x154

0x101: Pop(2)
0x102: PushEmpty(string, bool)
0x103: Stack[-2] = "boiny@door1" // @poff=0
0x104: Stack[-1] = (bool) 1
0x105: Call2 0x143

0x106: Pop(2)
0x107: Push("cot_eva") // @poff=24
0x108: @ GetSceneByName(Stack[-2], Stack[-1])
0x109: Pop(1)
0x10a: PushEmpty(string, bool)
0x10b: Stack[-2] = "icot_eva_door" // @poff=40
0x10c: Stack[-1] = (bool) 0
0x10d: Call2 0x154

0x10e: Pop(2)
0x10f: Push("danko") // @poff=72
0x110: @ Trigger(Stack[-2], Stack[-1])
0x111: Pop(1)
0x112: PushEmpty(object)
0x113: Call2 0x119

0x114: Pop(0)
0x115: @ RemoveActor(Stack[-1])
0x116: Pop(1)
0x117: Return(); Pop(2)

0x118: Stack[-1] = 0
0x119: PushEmpty(object, object)
0x11a: @ self(Stack[-1])
0x11b: Pop(0)
0x11c: Stack[-1] = Stack[-3]
0x11d: Return(); Pop(2)

0x11e: Stack[-1] = 0
0x11f: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x120: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2]); Obj=12 // @poff=912
0x121: Pop(0)
0x122: Pop(0); Push((bool) Stack[-4] == 0)
0x123: IF (Stack[-1] == 0) GOTO 0x12c; Pop(1)

0x124: Push("Locator ") // @poff=923
0x125: Pop(1); Push(Stack[-1] + Stack[-12]);
0x126: Push(" doesn't exist") // @poff=941
0x127: Pop(2); Push(Stack[-2] + Stack[-1]);
0x128: @ Trace(Stack[-1])
0x129: Pop(1)
0x12a: Stack[-1] = 0
0x12b: GOTO 0x12e

0x12c: @ AddActor(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0x12d: Pop(0)
0x12e: Stack[-1] = Stack[-13]
0x12f: Return(); Pop(8)

0x130: Stack[-1] = 0
0x131: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x132: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2]); Obj=12 // @poff=912
0x133: Pop(0)
0x134: Pop(0); Push((bool) Stack[-4] == 0)
0x135: IF (Stack[-1] == 0) GOTO 0x13e; Pop(1)

0x136: Push("Locator ") // @poff=923
0x137: Pop(1); Push(Stack[-1] + Stack[-12]);
0x138: Push(" doesn't exist") // @poff=941
0x139: Pop(2); Push(Stack[-2] + Stack[-1]);
0x13a: @ Trace(Stack[-1])
0x13b: Pop(1)
0x13c: Stack[-1] = 0
0x13d: GOTO 0x140

0x13e: @@ AddStationaryActor(Stack[-1], Stack[-3], Stack[-2], Stack[-10], Stack[-9]); Obj=12 // @poff=971
0x13f: Pop(0)
0x140: Stack[-1] = Stack[-13]
0x141: Return(); Pop(8)

0x142: Stack[-1] = 0
0x143: PushEmpty(object, object)
0x144: @ FindActor(Stack[-1], Stack[-4])
0x145: Pop(0)
0x146: Pop(0); Push((bool) Stack[-1] == 0)
0x147: IF (Stack[-1] == 0) GOTO 0x14f; Pop(1)

0x148: Push("Door ") // @poff=990
0x149: Pop(1); Push(Stack[-1] + Stack[-5]);
0x14a: Push(" not found") // @poff=1002
0x14b: Pop(2); Push(Stack[-2] + Stack[-1]);
0x14c: @ Trace(Stack[-1])
0x14d: Pop(1)
0x14e: GOTO 0x152

0x14f: Push("locked") // @poff=1024
0x150: @@ SetProperty(Stack[-1], Stack[-4]); Obj=2 // @poff=1038
0x151: Pop(1)
0x152: Return(); Pop(2)

0x153: Stack[-1] = 0
0x154: PushEmpty(object, object)
0x155: @ FindActor(Stack[-1], Stack[-4])
0x156: Pop(0)
0x157: Pop(0); Push((bool) Stack[-1] == 0)
0x158: IF (Stack[-1] == 0) GOTO 0x160; Pop(1)

0x159: Push("Door ") // @poff=990
0x15a: Pop(1); Push(Stack[-1] + Stack[-5]);
0x15b: Push(" not found") // @poff=1002
0x15c: Pop(2); Push(Stack[-2] + Stack[-1]);
0x15d: @ Trace(Stack[-1])
0x15e: Pop(1)
0x15f: GOTO 0x167

0x160: Push(Stack[-3])
0x161: IF (Stack[-1] == 0) GOTO 0x164; Pop(1)

0x162: @@ Close(); Obj=1 // @poff=1050
0x163: Pop(0)
0x164: Push("locked") // @poff=1024
0x165: @@ SetProperty(Stack[-1], Stack[-4]); Obj=2 // @poff=1038
0x166: Pop(1)
0x167: Return(); Pop(2)

0x168: Stack[-1] = 0
