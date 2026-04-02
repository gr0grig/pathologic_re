GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	W:d8q01MladVladIsVictim
	W:volonteers_danko
	W:kill
	W:mladvlad
	W:bigvlad
	W:quest_d8_03
	W:block_well
	W:house_vlad
	W:d8q01_well_block
	W:place_toy
	W:r4_house_2_02
	W:pt_d8q01_toy
	W:scripted_container
	W:d8q01_toy.xml
	W:boiny_load
	W:quest_d8_01_cutscene
	W:unlock_boiny
	W:cleanup
	W:d8q01
	W:fail
	W:completed
	W:Boiny unlocked
	W:boiny@door1
	W:.bin
	A:GetLocator
	W:Locator 
	W: doesn't exist
	W:Door 
	W: not found
	A:SetProperty
	W:Can't retrieve diary root
	A:Find
	W:Can't find diary parent with id: 
	A:AddChild
	A:GetCategory
// @pool_raw:640038007100300031004d006c006100640056006c006100640049007300560069006300740069006d00000076006f006c006f006e00740065006500720073005f00640061006e006b006f0000006b0069006c006c0000006d006c006100640076006c0061006400000062006900670076006c00610064000000710075006500730074005f00640038005f0030003300000062006c006f0063006b005f00770065006c006c00000068006f007500730065005f0076006c00610064000000640038007100300031005f00770065006c006c005f0062006c006f0063006b00000070006c006100630065005f0074006f0079000000720034005f0068006f007500730065005f0032005f00300032000000700074005f00640038007100300031005f0074006f0079000000730063007200690070007400650064005f0063006f006e007400610069006e00650072000000640038007100300031005f0074006f0079002e0078006d006c00000062006f0069006e0079005f006c006f00610064000000710075006500730074005f00640038005f00300031005f006300750074007300630065006e006500000075006e006c006f0063006b005f0062006f0069006e007900000063006c00650061006e007500700000006400380071003000310000006600610069006c00000063006f006d0070006c006500740065006400000042006f0069006e007900200075006e006c006f0063006b0065006400000062006f0069006e007900400064006f006f007200310000002e00620069006e0000004765744c6f6361746f72004c006f006300610074006f00720020000000200064006f00650073006e0027007400200065007800690073007400000044006f006f0072002000000020006e006f007400200066006f0075006e006400000053657450726f706572747900430061006e0027007400200072006500740072006900650076006500200064006900610072007900200072006f006f007400000046696e6400430061006e00270074002000660069006e006400200064006900610072007900200070006100720065006e007400200077006900740068002000690064003a00200000004164644368696c640047657443617465676f727900

Import:
	GetVariable (2 args)
	Hold (0 args)
	Trace (1 args)
	GetSceneByName (2 args)
	AddActor (4 args)
	GetGameTime (1 args)
	SetTimeEvent (2 args)
	ReleaseTimeEvent (1 args)
	SetVariable (2 args)
	Trigger (2 args)
	RemoveActor (1 args)
	CameraSwitchToNormal (0 args)
	self (1 args)
	GetMainOutdoorScene (1 args)
	AddBlankActor (4 args)
	AddActorByType (6 args)
	FindActor (2 args)
	Trigger (3 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)

RunOp = 0x15
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object, object, bool) Params = 0
		EVENT_26 Op = 0x1d Vars = (string)
		EVENT_9 Op = 0x7b Vars = (int, float)
		EVENT_24 Op = 0xbc Vars = (int)


0x0: PushEmpty(int, int)
0x1: Push("d8q01MladVladIsVictim") // @poff=0
0x2: @ GetVariable(Stack[-1], Stack[-2])
0x3: Pop(1)
0x4: Push((int) 0)
0x5: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x6: IF (Stack[-1] == 0) GOTO 0xe; Pop(1)

0x7: PushEmpty(bool, string, string, string)
0x8: Stack[-3] = "volonteers_danko" // @poff=44
0x9: Stack[-2] = "kill" // @poff=78
0xa: Stack[-1] = "mladvlad" // @poff=88
0xb: Call2 0xf4

0xc: Pop(4)
0xd: GOTO 0x14

0xe: PushEmpty(bool, string, string, string)
0xf: Stack[-3] = "volonteers_danko" // @poff=44
0x10: Stack[-2] = "kill" // @poff=78
0x11: Stack[-1] = "bigvlad" // @poff=106
0x12: Call2 0xf4

0x13: Pop(4)
0x14: Return(); Pop(2)

0x15: PushEmpty(object, string)
0x16: Stack[-1] = "quest_d8_03" // @poff=122
0x17: Call2 0xc6

0x18: Pop(2)
0x19: @ Hold()
0x1a: Pop(0)
0x1b: GOTO 0x19

0x1c: Return(); Pop(0)

0x1d: PushEmpty(object, object, object, float, int, object, object, object, float, int)
0x1e: @ Trace(Stack[-11])
0x1f: Pop(0)
0x20: Push("block_well") // @poff=146
0x21: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0x22: IF (Stack[-1] == 0) GOTO 0x2d; Pop(1)

0x23: Push("house_vlad") // @poff=168
0x24: @ GetSceneByName(Stack[-6], Stack[-1])
0x25: Pop(1)
0x26: Push("d8q01_well_block") // @poff=190
0x27: Push([0.0, 0.0, 0.0])
0x28: @ AddActor(Stack[-6], Stack[-2], Stack[-7], Stack[-1])
0x29: Pop(2)
0x2a: Stack[-4] = 0
0x2b: Stack[-5] = 0
0x2c: GOTO 0x7a

0x2d: Push("place_toy") // @poff=224
0x2e: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0x2f: IF (Stack[-1] == 0) GOTO 0x3d; Pop(1)

0x30: Push("r4_house_2_02") // @poff=244
0x31: @ GetSceneByName(Stack[-4], Stack[-1])
0x32: Pop(1)
0x33: PushEmpty(object, object, string, string, string)
0x34: Stack[-8] = Stack[-4]
0x35: Stack[-3] = "pt_d8q01_toy" // @poff=272
0x36: Stack[-2] = "scripted_container" // @poff=298
0x37: Stack[-1] = "d8q01_toy.xml" // @poff=336
0x38: Call2 0xd1

0x39: Stack[0 + Tasks[-1].StackPointer] = Stack[-5]
0x3a: Pop(5)
0x3b: Stack[-3] = 0
0x3c: GOTO 0x7a

0x3d: Push("boiny_load") // @poff=364
0x3e: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0x3f: IF (Stack[-1] == 0) GOTO 0x48; Pop(1)

0x40: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x41: IF (Stack[-1] == 0) GOTO 0x47; Pop(1)

0x42: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x43: PushEmpty(object, string)
0x44: Stack[-1] = "quest_d8_01_cutscene" // @poff=386
0x45: Call2 0xc6

0x46: Pop(2)
0x47: GOTO 0x7a

0x48: Push("unlock_boiny") // @poff=428
0x49: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0x4a: IF (Stack[-1] == 0) GOTO 0x5c; Pop(1)

0x4b: PushEmpty()
0x4c: Call2 0x0

0x4d: Pop(0)
0x4e: @ GetGameTime(Stack[-2])
0x4f: Pop(0)
0x50: Push((float)191.0)
0x51: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x52: IF (Stack[-1] == 0) GOTO 0x57; Pop(1)

0x53: PushEmpty()
0x54: Call2 0x83

0x55: Pop(0)
0x56: GOTO 0x5b

0x57: Push((int) 0)
0x58: Push((float)191.0)
0x59: @ SetTimeEvent(Stack[-2], Stack[-1])
0x5a: Pop(2)
0x5b: GOTO 0x7a

0x5c: Push("cleanup") // @poff=454
0x5d: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0x5e: IF (Stack[-1] == 0) GOTO 0x6d; Pop(1)

0x5f: Push("d8q01") // @poff=470
0x60: @ GetVariable(Stack[-1], Stack[-2])
0x61: Pop(1)
0x62: Push((int) 1000)
0x63: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x64: IF (Stack[-1] == 0) GOTO 0x69; Pop(1)

0x65: PushEmpty()
0x66: Call2 0x8f

0x67: Pop(0)
0x68: GOTO 0x6c

0x69: PushEmpty()
0x6a: Call2 0x9f

0x6b: Pop(0)
0x6c: GOTO 0x7a

0x6d: Push("fail") // @poff=482
0x6e: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0x6f: IF (Stack[-1] == 0) GOTO 0x74; Pop(1)

0x70: PushEmpty()
0x71: Call2 0x8f

0x72: Pop(0)
0x73: GOTO 0x7a

0x74: Push("completed") // @poff=492
0x75: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0x76: IF (Stack[-1] == 0) GOTO 0x7a; Pop(1)

0x77: PushEmpty()
0x78: Call2 0x97

0x79: Pop(0)
0x7a: Return(); Pop(10)

0x7b: PushEmpty()
0x7c: Push((int) 0)
0x7d: @ ReleaseTimeEvent(Stack[-1])
0x7e: Pop(1)
0x7f: PushEmpty()
0x80: Call2 0x83

0x81: Pop(0)
0x82: Return(); Pop(0)

0x83: Push("Boiny unlocked") // @poff=512
0x84: @ Trace(Stack[-1])
0x85: Pop(1)
0x86: PushEmpty(string, bool)
0x87: Stack[-2] = "boiny@door1" // @poff=542
0x88: Stack[-1] = (bool) 0
0x89: Call2 0xe3

0x8a: Pop(2)
0x8b: PushEmpty()
0x8c: Call2 0x100

0x8d: Pop(0)
0x8e: Return(); Pop(0)

0x8f: Push("d8q01") // @poff=470
0x90: Push((int) -1)
0x91: @ SetVariable(Stack[-2], Stack[-1])
0x92: Pop(2)
0x93: PushEmpty()
0x94: Call2 0x9f

0x95: Pop(0)
0x96: Return(); Pop(0)

0x97: Push("d8q01") // @poff=470
0x98: Push((int) 1000)
0x99: @ SetVariable(Stack[-2], Stack[-1])
0x9a: Pop(2)
0x9b: PushEmpty()
0x9c: Call2 0x9f

0x9d: Pop(0)
0x9e: Return(); Pop(0)

0x9f: EventDisable(26)
0xa0: EventDisable(9)
0xa1: Push((int) 0)
0xa2: @ ReleaseTimeEvent(Stack[-1])
0xa3: Pop(1)
0xa4: Push( Stack[0 + Tasks[-1].StackPointer] )
0xa5: IF (Stack[-1] == 0) GOTO 0xa9; Pop(1)

0xa6: Push("cleanup") // @poff=454
0xa7: @ Trigger(Stack[-0]T, Stack[-1])
0xa8: Pop(1)
0xa9: Push( Stack[1 + Tasks[-1].StackPointer] )
0xaa: IF (Stack[-1] == 0) GOTO 0xae; Pop(1)

0xab: Push("cleanup") // @poff=454
0xac: @ Trigger(Stack[-1]T, Stack[-1])
0xad: Pop(1)
0xae: PushEmpty(string, bool)
0xaf: Stack[-2] = "boiny@door1" // @poff=542
0xb0: Stack[-1] = (bool) 1
0xb1: Call2 0xe3

0xb2: Pop(2)
0xb3: PushEmpty()
0xb4: Call2 0x0

0xb5: Pop(0)
0xb6: PushEmpty(object)
0xb7: Call2 0xc0

0xb8: Pop(0)
0xb9: @ RemoveActor(Stack[-1])
0xba: Pop(1)
0xbb: Return(); Pop(0)

0xbc: PushEmpty()
0xbd: @ CameraSwitchToNormal()
0xbe: Pop(0)
0xbf: Return(); Pop(0)

0xc0: PushEmpty(object, object)
0xc1: @ self(Stack[-1])
0xc2: Pop(0)
0xc3: Stack[-1] = Stack[-3]
0xc4: Return(); Pop(2)

0xc5: Stack[-1] = 0
0xc6: PushEmpty(object, object, object, object)
0xc7: @ GetMainOutdoorScene(Stack[-2])
0xc8: Pop(0)
0xc9: Push(".bin") // @poff=566
0xca: Pop(1); Push(Stack[-6] + Stack[-1]);
0xcb: @ AddBlankActor(Stack[-2], Stack[-3], Stack[-6], Stack[-1])
0xcc: Pop(1)
0xcd: Stack[-1] = Stack[-6]
0xce: Return(); Pop(4)

0xcf: Stack[-1] = 0
0xd0: Stack[-2] = 0
0xd1: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0xd2: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2]); Obj=12 // @poff=576
0xd3: Pop(0)
0xd4: Pop(0); Push((bool) Stack[-4] == 0)
0xd5: IF (Stack[-1] == 0) GOTO 0xde; Pop(1)

0xd6: Push("Locator ") // @poff=587
0xd7: Pop(1); Push(Stack[-1] + Stack[-12]);
0xd8: Push(" doesn't exist") // @poff=605
0xd9: Pop(2); Push(Stack[-2] + Stack[-1]);
0xda: @ Trace(Stack[-1])
0xdb: Pop(1)
0xdc: Stack[-1] = 0
0xdd: GOTO 0xe0

0xde: @ AddActorByType(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0xdf: Pop(0)
0xe0: Stack[-1] = Stack[-13]
0xe1: Return(); Pop(8)

0xe2: Stack[-1] = 0
0xe3: PushEmpty(object, object)
0xe4: @ FindActor(Stack[-1], Stack[-4])
0xe5: Pop(0)
0xe6: Pop(0); Push((bool) Stack[-1] == 0)
0xe7: IF (Stack[-1] == 0) GOTO 0xef; Pop(1)

0xe8: Push("Door ") // @poff=635
0xe9: Pop(1); Push(Stack[-1] + Stack[-5]);
0xea: Push(" not found") // @poff=647
0xeb: Pop(2); Push(Stack[-2] + Stack[-1]);
0xec: @ Trace(Stack[-1])
0xed: Pop(1)
0xee: GOTO 0xf2

0xef: Push("locked") // @poff=528
0xf0: @@ SetProperty(Stack[-1], Stack[-4]); Obj=2 // @poff=669
0xf1: Pop(1)
0xf2: Return(); Pop(2)

0xf3: Stack[-1] = 0
0xf4: PushEmpty(object, object)
0xf5: @ FindActor(Stack[-1], Stack[-5])
0xf6: Pop(0)
0xf7: Pop(0); PushNull((bool) Stack[-1] == 0)
0xf8: IF (Stack[-1] == 0) GOTO 0xfb; Pop(1)

0xf9: Stack[-6] = (bool) 0
0xfa: Return(); Pop(2)

0xfb: @ Trigger(Stack[-1], Stack[-4], Stack[-3])
0xfc: Pop(0)
0xfd: Stack[-6] = (bool) 1
0xfe: Return(); Pop(2)

0xff: Stack[-1] = 0
0x100: PushEmpty(object, object)
0x101: Push((int) 716)
0x102: Push((int) 1)
0x103: Push((int) 536363)
0x104: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x105: Pop(3)
0x106: PushEmpty(bool, object, int)
0x107: Stack[-4] = Stack[-2]
0x108: Stack[-1] = (int) 175
0x109: Call2 0x11a

0x10a: Pop(3)
0x10b: Return(); Pop(2)

0x10c: Stack[-1] = 0
0x10d: PushEmpty(object, object)
0x10e: @ GetDiaryRoot(Stack[-1])
0x10f: Pop(0)
0x110: Pop(0); Push((bool) Stack[-1] == 0)
0x111: IF (Stack[-1] == 0) GOTO 0x117; Pop(1)

0x112: Push("Can't retrieve diary root") // @poff=681
0x113: @ Trace(Stack[-1])
0x114: Pop(1)
0x115: Stack[-3] = (bool) 0
0x116: Return(); Pop(2)

0x117: Stack[-1] = Stack[-3]
0x118: Return(); Pop(2)

0x119: Stack[-1] = 0
0x11a: PushEmpty(object, object, int, object, object, int)
0x11b: PushEmpty(object)
0x11c: Call2 0x10d

0x11d: Stack[-1] = Stack[-4]
0x11e: Pop(1)
0x11f: @@ Find(Stack[-7], Stack[-2]); Obj=3 // @poff=733
0x120: Pop(0)
0x121: Pop(0); Push((bool) Stack[-2] == 0)
0x122: IF (Stack[-1] == 0) GOTO 0x129; Pop(1)

0x123: Push("Can't find diary parent with id: ") // @poff=738
0x124: Pop(1); Push(Stack[-1] + Stack[-8]);
0x125: @ Trace(Stack[-1])
0x126: Pop(1)
0x127: Stack[-9] = (bool) 0
0x128: Return(); Pop(6)

0x129: @@ AddChild(Stack[-8]); Obj=2 // @poff=806
0x12a: Pop(0)
0x12b: Push((int) 7)
0x12c: @ SendWorldWndMessage(Stack[-1])
0x12d: Pop(1)
0x12e: @@ GetCategory(Stack[-1]); Obj=8 // @poff=815
0x12f: Pop(0)
0x130: @ SetDiarySection(Stack[-1])
0x131: Pop(0)
0x132: Stack[-9] = (bool) 0
0x133: Return(); Pop(6)

0x134: Stack[-2] = 0
0x135: Stack[-3] = 0
