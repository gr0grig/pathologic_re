GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	W:boiny@door1
	W:storojka
	W:pt_b11q01_klara
	W:NPC_Klara
	W:b11q01_klara_laska.xml
	W:storojka_unload
	W:remove_klara
	W:cleanup
	W:open_shaft
	W:boiny_shaft_trigger
	W:activate
	W:iboiny_stones
	W:shaft_drop
	W:boiny_well.isc
	W:boiny_well
	W:pt_player
	W:b11q01KlaraWillHelp
	W:quest_b11_01_death_effect.bin
	A:ApplyEffect
	W:starshina_fight
	W:boiny_arena.isc
	W:boiny_arena
	W:open_well_exit
	W:well_trigger
	W:fight_win
	W:b11q01
	W:fail
	W:completed
	W:deactivate
	A:GetLocator
	W:Locator 
	W: doesn't exist
	W:Door 
	W: not found
	W:locked
	A:SetProperty
	W:Teleport location '
	W:' not found in scene '
	W:Can't retrieve diary root
	A:Find
	W:Can't find diary parent with id: 
	A:AddChild
	A:GetCategory
// @pool_raw:62006f0069006e007900400064006f006f00720031000000730074006f0072006f006a006b0061000000700074005f006200310031007100300031005f006b006c0061007200610000004e00500043005f004b006c0061007200610000006200310031007100300031005f006b006c006100720061005f006c00610073006b0061002e0078006d006c000000730074006f0072006f006a006b0061005f0075006e006c006f00610064000000720065006d006f00760065005f006b006c00610072006100000063006c00650061006e007500700000006f00700065006e005f0073006800610066007400000062006f0069006e0079005f00730068006100660074005f0074007200690067006700650072000000610063007400690076006100740065000000690062006f0069006e0079005f00730074006f006e00650073000000730068006100660074005f00640072006f007000000062006f0069006e0079005f00770065006c006c002e00690073006300000062006f0069006e0079005f00770065006c006c000000700074005f0070006c00610079006500720000006200310031007100300031004b006c00610072006100570069006c006c00480065006c0070000000710075006500730074005f006200310031005f00300031005f00640065006100740068005f006500660066006500630074002e00620069006e0000004170706c794566666563740073007400610072007300680069006e0061005f0066006900670068007400000062006f0069006e0079005f006100720065006e0061002e00690073006300000062006f0069006e0079005f006100720065006e00610000006f00700065006e005f00770065006c006c005f0065007800690074000000770065006c006c005f0074007200690067006700650072000000660069006700680074005f00770069006e00000062003100310071003000310000006600610069006c00000063006f006d0070006c0065007400650064000000640065006100630074006900760061007400650000004765744c6f6361746f72004c006f006300610074006f00720020000000200064006f00650073006e0027007400200065007800690073007400000044006f006f0072002000000020006e006f007400200066006f0075006e00640000006c006f0063006b0065006400000053657450726f706572747900540065006c00650070006f007200740020006c006f0063006100740069006f006e00200027000000270020006e006f007400200066006f0075006e006400200069006e0020007300630065006e006500200027000000430061006e0027007400200072006500740072006900650076006500200064006900610072007900200072006f006f007400000046696e6400430061006e00270074002000660069006e006400200064006900610072007900200070006100720065006e007400200077006900740068002000690064003a00200000004164644368696c640047657443617465676f727900

Import:
	GetActiveScene (1 args)
	GetSceneByName (2 args)
	Hold (0 args)
	Trace (1 args)
	Trigger (2 args)
	PlayNSSound (1 args)
	AddScene (1 args)
	sync (0 args)
	GetVariable (2 args)
	SetVariable (2 args)
	RemoveActor (1 args)
	FindActor (2 args)
	self (1 args)
	AddActor (6 args)
	Teleport (4 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (bool, object) Params = 0
		EVENT_26 Op = 0x1d Vars = (string)


0x0: PushEmpty(object, object, object, object)
0x1: PushEmpty(string, bool)
0x2: Stack[-2] = "boiny@door1" // @poff=0
0x3: Stack[-1] = (bool) 0
0x4: Call2 0xf1

0x5: Pop(2)
0x6: @ GetActiveScene(Stack[-2])
0x7: Pop(0)
0x8: Push("storojka") // @poff=24
0x9: @ GetSceneByName(Stack[-2], Stack[-1])
0xa: Pop(1)
0xb: Pop(0); Push((bool) Stack[-2] == Stack[-1])
0xc: IF (Stack[-1] == 0) GOTO 0xf; Pop(1)

0xd: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0xe: GOTO 0x17

0xf: PushEmpty(object, object, string, string, string)
0x10: Stack[-6] = Stack[-4]
0x11: Stack[-3] = "pt_b11q01_klara" // @poff=42
0x12: Stack[-2] = "NPC_Klara" // @poff=74
0x13: Stack[-1] = "b11q01_klara_laska.xml" // @poff=94
0x14: Call2 0xdf

0x15: Stack[1 + Tasks[-1].StackPointer] = Stack[-5]
0x16: Pop(5)
0x17: @ Hold()
0x18: Pop(0)
0x19: GOTO 0x17

0x1a: Return(); Pop(4)

0x1b: Stack[-1] = 0
0x1c: Stack[-2] = 0
0x1d: PushEmpty(object, int, int, object, int, int)
0x1e: @ Trace(Stack[-7])
0x1f: Pop(0)
0x20: Push("storojka_unload") // @poff=140
0x21: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x22: IF (Stack[-1] == 0) GOTO 0x33; Pop(1)

0x23: Push( Stack[0 + Tasks[-1].StackPointer] )
0x24: IF (Stack[-1] == 0) GOTO 0x32; Pop(1)

0x25: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x26: Push("storojka") // @poff=24
0x27: @ GetSceneByName(Stack[-4], Stack[-1])
0x28: Pop(1)
0x29: PushEmpty(object, object, string, string, string)
0x2a: Stack[-8] = Stack[-4]
0x2b: Stack[-3] = "pt_b11q01_klara" // @poff=42
0x2c: Stack[-2] = "NPC_Klara" // @poff=74
0x2d: Stack[-1] = "b11q01_klara_laska.xml" // @poff=94
0x2e: Call2 0xdf

0x2f: Stack[1 + Tasks[-1].StackPointer] = Stack[-5]
0x30: Pop(5)
0x31: Stack[-3] = 0
0x32: GOTO 0xac

0x33: Push("remove_klara") // @poff=172
0x34: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x35: IF (Stack[-1] == 0) GOTO 0x3a; Pop(1)

0x36: Push("cleanup") // @poff=198
0x37: @ Trigger(Stack[-1]T, Stack[-1])
0x38: Pop(1)
0x39: GOTO 0xac

0x3a: Push("open_shaft") // @poff=214
0x3b: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x3c: IF (Stack[-1] == 0) GOTO 0x47; Pop(1)

0x3d: PushEmpty(bool, string, string)
0x3e: Stack[-2] = "boiny_shaft_trigger" // @poff=236
0x3f: Stack[-1] = "activate" // @poff=276
0x40: Call2 0x102

0x41: Pop(3)
0x42: PushEmpty(bool, string)
0x43: Stack[-1] = "iboiny_stones" // @poff=294
0x44: Call2 0x126

0x45: Pop(2)
0x46: GOTO 0xac

0x47: Push("shaft_drop") // @poff=322
0x48: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x49: IF (Stack[-1] == 0) GOTO 0x69; Pop(1)

0x4a: Push("drop") // @poff=334
0x4b: @ PlayNSSound(Stack[-1])
0x4c: Pop(1)
0x4d: Push("boiny_well.isc") // @poff=344
0x4e: @ AddScene(Stack[-1])
0x4f: Pop(1)
0x50: @ sync()
0x51: Pop(0)
0x52: PushEmpty(object, string, string)
0x53: PushEmpty(object)
0x54: Call2 0xd2

0x55: Stack[-1] = Stack[-4]
0x56: Pop(1)
0x57: Stack[-2] = "boiny_well" // @poff=374
0x58: Stack[-1] = "pt_player" // @poff=396
0x59: Call2 0x10e

0x5a: Pop(3)
0x5b: @ sync()
0x5c: Pop(0)
0x5d: Push("b11q01KlaraWillHelp") // @poff=416
0x5e: @ GetVariable(Stack[-1], Stack[-3])
0x5f: Pop(1)
0x60: Pop(0); Push((bool) Stack[-2] == 0)
0x61: IF (Stack[-1] == 0) GOTO 0x68; Pop(1)

0x62: PushEmpty(object)
0x63: Call2 0xd2

0x64: Pop(0)
0x65: Push("quest_b11_01_death_effect.bin") // @poff=456
0x66: @@ ApplyEffect(Stack[-1]); Obj=2 // @poff=516
0x67: Pop(2)
0x68: GOTO 0xac

0x69: Push("starshina_fight") // @poff=528
0x6a: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x6b: IF (Stack[-1] == 0) GOTO 0x7b; Pop(1)

0x6c: Push("boiny_arena.isc") // @poff=560
0x6d: @ AddScene(Stack[-1])
0x6e: Pop(1)
0x6f: @ sync()
0x70: Pop(0)
0x71: PushEmpty(object, string, string)
0x72: PushEmpty(object)
0x73: Call2 0xd2

0x74: Stack[-1] = Stack[-4]
0x75: Pop(1)
0x76: Stack[-2] = "boiny_arena" // @poff=592
0x77: Stack[-1] = "pt_player" // @poff=396
0x78: Call2 0x10e

0x79: Pop(3)
0x7a: GOTO 0xac

0x7b: Push("open_well_exit") // @poff=616
0x7c: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x7d: IF (Stack[-1] == 0) GOTO 0x84; Pop(1)

0x7e: PushEmpty(bool, string, string)
0x7f: Stack[-2] = "well_trigger" // @poff=646
0x80: Stack[-1] = "activate" // @poff=276
0x81: Call2 0x102

0x82: Pop(3)
0x83: GOTO 0xac

0x84: Push("fight_win") // @poff=672
0x85: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x86: IF (Stack[-1] == 0) GOTO 0x8e; Pop(1)

0x87: PushEmpty()
0x88: Call2 0x132

0x89: Pop(0)
0x8a: PushEmpty()
0x8b: Call2 0xb5

0x8c: Pop(0)
0x8d: GOTO 0xac

0x8e: Push("cleanup") // @poff=198
0x8f: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x90: IF (Stack[-1] == 0) GOTO 0x9f; Pop(1)

0x91: Push("b11q01") // @poff=692
0x92: @ GetVariable(Stack[-1], Stack[-2])
0x93: Pop(1)
0x94: Push((int) 1000)
0x95: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x96: IF (Stack[-1] == 0) GOTO 0x9b; Pop(1)

0x97: PushEmpty()
0x98: Call2 0xad

0x99: Pop(0)
0x9a: GOTO 0x9e

0x9b: PushEmpty()
0x9c: Call2 0xbd

0x9d: Pop(0)
0x9e: GOTO 0xac

0x9f: Push("fail") // @poff=706
0xa0: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0xa1: IF (Stack[-1] == 0) GOTO 0xa6; Pop(1)

0xa2: PushEmpty()
0xa3: Call2 0xad

0xa4: Pop(0)
0xa5: GOTO 0xac

0xa6: Push("completed") // @poff=716
0xa7: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0xa8: IF (Stack[-1] == 0) GOTO 0xac; Pop(1)

0xa9: PushEmpty()
0xaa: Call2 0xb5

0xab: Pop(0)
0xac: Return(); Pop(6)

0xad: Push("b11q01") // @poff=692
0xae: Push((int) -1)
0xaf: @ SetVariable(Stack[-2], Stack[-1])
0xb0: Pop(2)
0xb1: PushEmpty()
0xb2: Call2 0xbd

0xb3: Pop(0)
0xb4: Return(); Pop(0)

0xb5: Push("b11q01") // @poff=692
0xb6: Push((int) 1000)
0xb7: @ SetVariable(Stack[-2], Stack[-1])
0xb8: Pop(2)
0xb9: PushEmpty()
0xba: Call2 0xbd

0xbb: Pop(0)
0xbc: Return(); Pop(0)

0xbd: PushEmpty(bool, string, string)
0xbe: Stack[-2] = "boiny_shaft_trigger" // @poff=236
0xbf: Stack[-1] = "deactivate" // @poff=736
0xc0: Call2 0x102

0xc1: Pop(3)
0xc2: PushEmpty(bool, string, string)
0xc3: Stack[-2] = "well_trigger" // @poff=646
0xc4: Stack[-1] = "activate" // @poff=276
0xc5: Call2 0x102

0xc6: Pop(3)
0xc7: Push( Stack[1 + Tasks[-1].StackPointer] )
0xc8: IF (Stack[-1] == 0) GOTO 0xcc; Pop(1)

0xc9: Push("cleanup") // @poff=198
0xca: @ Trigger(Stack[-1]T, Stack[-1])
0xcb: Pop(1)
0xcc: PushEmpty(object)
0xcd: Call2 0xd9

0xce: Pop(0)
0xcf: @ RemoveActor(Stack[-1])
0xd0: Pop(1)
0xd1: Return(); Pop(0)

0xd2: PushEmpty(object, object)
0xd3: Push("player") // @poff=402
0xd4: @ FindActor(Stack[-2], Stack[-1])
0xd5: Pop(1)
0xd6: Stack[-1] = Stack[-3]
0xd7: Return(); Pop(2)

0xd8: Stack[-1] = 0
0xd9: PushEmpty(object, object)
0xda: @ self(Stack[-1])
0xdb: Pop(0)
0xdc: Stack[-1] = Stack[-3]
0xdd: Return(); Pop(2)

0xde: Stack[-1] = 0
0xdf: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0xe0: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2]); Obj=12 // @poff=758
0xe1: Pop(0)
0xe2: Pop(0); Push((bool) Stack[-4] == 0)
0xe3: IF (Stack[-1] == 0) GOTO 0xec; Pop(1)

0xe4: Push("Locator ") // @poff=769
0xe5: Pop(1); Push(Stack[-1] + Stack[-12]);
0xe6: Push(" doesn't exist") // @poff=787
0xe7: Pop(2); Push(Stack[-2] + Stack[-1]);
0xe8: @ Trace(Stack[-1])
0xe9: Pop(1)
0xea: Stack[-1] = 0
0xeb: GOTO 0xee

0xec: @ AddActor(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0xed: Pop(0)
0xee: Stack[-1] = Stack[-13]
0xef: Return(); Pop(8)

0xf0: Stack[-1] = 0
0xf1: PushEmpty(object, object)
0xf2: @ FindActor(Stack[-1], Stack[-4])
0xf3: Pop(0)
0xf4: Pop(0); Push((bool) Stack[-1] == 0)
0xf5: IF (Stack[-1] == 0) GOTO 0xfd; Pop(1)

0xf6: Push("Door ") // @poff=817
0xf7: Pop(1); Push(Stack[-1] + Stack[-5]);
0xf8: Push(" not found") // @poff=829
0xf9: Pop(2); Push(Stack[-2] + Stack[-1]);
0xfa: @ Trace(Stack[-1])
0xfb: Pop(1)
0xfc: GOTO 0x100

0xfd: Push("locked") // @poff=851
0xfe: @@ SetProperty(Stack[-1], Stack[-4]); Obj=2 // @poff=865
0xff: Pop(1)
0x100: Return(); Pop(2)

0x101: Stack[-1] = 0
0x102: PushEmpty(object, object)
0x103: @ FindActor(Stack[-1], Stack[-4])
0x104: Pop(0)
0x105: Pop(0); PushNull((bool) Stack[-1] == 0)
0x106: IF (Stack[-1] == 0) GOTO 0x109; Pop(1)

0x107: Stack[-5] = (bool) 0
0x108: Return(); Pop(2)

0x109: @ Trigger(Stack[-1], Stack[-3])
0x10a: Pop(0)
0x10b: Stack[-5] = (bool) 1
0x10c: Return(); Pop(2)

0x10d: Stack[-1] = 0
0x10e: PushEmpty(object, bool, cvector, cvector, object, bool, cvector, cvector)
0x10f: Pop(0); Push((bool) Stack[-11] == 0)
0x110: IF (Stack[-1] == 0) GOTO 0x112; Pop(1)

0x111: Return(); Pop(8)

0x112: @ GetSceneByName(Stack[-4], Stack[-10])
0x113: Pop(0)
0x114: @@ GetLocator(Stack[-9], Stack[-3], Stack[-2], Stack[-1]); Obj=4 // @poff=758
0x115: Pop(0)
0x116: Pop(0); Push((bool) Stack[-3] == 0)
0x117: IF (Stack[-1] == 0) GOTO 0x122; Pop(1)

0x118: Push("Teleport location '") // @poff=877
0x119: Pop(1); Push(Stack[-1] + Stack[-10]);
0x11a: Push("' not found in scene '") // @poff=917
0x11b: Pop(2); Push(Stack[-2] + Stack[-1]);
0x11c: Pop(1); Push(Stack[-1] + Stack[-11]);
0x11d: Push("'") // @poff=913
0x11e: Pop(2); Push(Stack[-2] + Stack[-1]);
0x11f: @ Trace(Stack[-1])
0x120: Pop(1)
0x121: GOTO 0x124

0x122: @ Teleport(Stack[-11], Stack[-4], Stack[-2], Stack[-1])
0x123: Pop(0)
0x124: Return(); Pop(8)

0x125: Stack[-4] = 0
0x126: PushEmpty(object, object)
0x127: @ FindActor(Stack[-1], Stack[-3])
0x128: Pop(0)
0x129: Pop(0); Push((bool) Stack[-1] == 0)
0x12a: IF (Stack[-1] == 0) GOTO 0x12d; Pop(1)

0x12b: Stack[-4] = (bool) 0
0x12c: Return(); Pop(2)

0x12d: @ RemoveActor(Stack[-1])
0x12e: Pop(0)
0x12f: Stack[-4] = (bool) 1
0x130: Return(); Pop(2)

0x131: Stack[-1] = 0
0x132: PushEmpty(object, object)
0x133: Push((int) 317)
0x134: Push((int) 1)
0x135: Push((int) 522059)
0x136: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x137: Pop(3)
0x138: PushEmpty(bool, object, int)
0x139: Stack[-4] = Stack[-2]
0x13a: Stack[-1] = (int) 313
0x13b: Call2 0x14c

0x13c: Pop(3)
0x13d: Return(); Pop(2)

0x13e: Stack[-1] = 0
0x13f: PushEmpty(object, object)
0x140: @ GetDiaryRoot(Stack[-1])
0x141: Pop(0)
0x142: Pop(0); Push((bool) Stack[-1] == 0)
0x143: IF (Stack[-1] == 0) GOTO 0x149; Pop(1)

0x144: Push("Can't retrieve diary root") // @poff=963
0x145: @ Trace(Stack[-1])
0x146: Pop(1)
0x147: Stack[-3] = (bool) 0
0x148: Return(); Pop(2)

0x149: Stack[-1] = Stack[-3]
0x14a: Return(); Pop(2)

0x14b: Stack[-1] = 0
0x14c: PushEmpty(object, object, int, object, object, int)
0x14d: PushEmpty(object)
0x14e: Call2 0x13f

0x14f: Stack[-1] = Stack[-4]
0x150: Pop(1)
0x151: @@ Find(Stack[-7], Stack[-2]); Obj=3 // @poff=1015
0x152: Pop(0)
0x153: Pop(0); Push((bool) Stack[-2] == 0)
0x154: IF (Stack[-1] == 0) GOTO 0x15b; Pop(1)

0x155: Push("Can't find diary parent with id: ") // @poff=1020
0x156: Pop(1); Push(Stack[-1] + Stack[-8]);
0x157: @ Trace(Stack[-1])
0x158: Pop(1)
0x159: Stack[-9] = (bool) 0
0x15a: Return(); Pop(6)

0x15b: @@ AddChild(Stack[-8]); Obj=2 // @poff=1088
0x15c: Pop(0)
0x15d: Push((int) 7)
0x15e: @ SendWorldWndMessage(Stack[-1])
0x15f: Pop(1)
0x160: @@ GetCategory(Stack[-1]); Obj=8 // @poff=1097
0x161: Pop(0)
0x162: @ SetDiarySection(Stack[-1])
0x163: Pop(0)
0x164: Stack[-9] = (bool) 0
0x165: Return(); Pop(6)

0x166: Stack[-2] = 0
0x167: Stack[-3] = 0
