GlobalVarCount = 0

Strings:
	W:cot_eva
	W:noeva
	W:lock_danko
	W:icot_eva_door
	W:teleport
	W:icot_eva@door1
	W:door_close
	W:cleanup
	W:pt_k6q01_klara
	W:player
	W:cot_eva_load
	W:k6q01
	W:k6q01DoorWasLocked
	W:unlock_eva
	W:door_open
	A:ClearSubContainer
	W:place_danko
	W:cot_anna
	W:pt_k6q01_danko
	W:NPC_Bakalavr
	W:k6q01_danko.xml
	W:k6q01DankoPos
	W:cot_lara
	W:dt_house_1_04
	W:fail
	W:completed
	W:0: placing danko to lara
	W:0: placing danko to ospina
	W:1: placing danko to ospina
	W:1: placing danko to eva
	A:GetItemCount
	A:GetItem
	A:add
	A:GetItemAmount
	A:GetLocator
	W:Locator 
	W: doesn't exist
	W:Door 
	W: not found
	W:locked
	A:SetProperty
	A:Close
	A:GetItemID
	W:Category
	A:AddItem
	A:DropItems
	W:Teleport location '
	W:' not found in scene '
	A:size
	A:get
// @pool_raw:63006f0074005f0065007600610000006e006f0065007600610000006c006f0063006b005f00640061006e006b006f000000690063006f0074005f006500760061005f0064006f006f0072000000740065006c00650070006f00720074000000690063006f0074005f00650076006100400064006f006f0072003100000064006f006f0072005f0063006c006f0073006500000063006c00650061006e00750070000000700074005f006b0036007100300031005f006b006c00610072006100000070006c006100790065007200000063006f0074005f006500760061005f006c006f006100640000006b00360071003000310000006b00360071003000310044006f006f0072005700610073004c006f0063006b0065006400000075006e006c006f0063006b005f00650076006100000064006f006f0072005f006f00700065006e000000436c656172537562436f6e7461696e65720070006c006100630065005f00640061006e006b006f00000063006f0074005f0061006e006e0061000000700074005f006b0036007100300031005f00640061006e006b006f0000004e00500043005f00420061006b0061006c0061007600720000006b0036007100300031005f00640061006e006b006f002e0078006d006c0000006b003600710030003100440061006e006b006f0050006f007300000063006f0074005f006c006100720061000000640074005f0068006f007500730065005f0031005f003000340000006600610069006c00000063006f006d0070006c006500740065006400000030003a00200070006c006100630069006e0067002000640061006e006b006f00200074006f0020006c00610072006100000030003a00200070006c006100630069006e0067002000640061006e006b006f00200074006f0020006f007300700069006e006100000031003a00200070006c006100630069006e0067002000640061006e006b006f00200074006f0020006f007300700069006e006100000031003a00200070006c006100630069006e0067002000640061006e006b006f00200074006f00200065007600610000004765744974656d436f756e74004765744974656d00616464004765744974656d416d6f756e74004765744c6f6361746f72004c006f006300610074006f00720020000000200064006f00650073006e0027007400200065007800690073007400000044006f006f0072002000000020006e006f007400200066006f0075006e00640000006c006f0063006b0065006400000053657450726f706572747900436c6f7365004765744974656d494400430061007400650067006f007200790000004164644974656d0044726f704974656d7300540065006c00650070006f007200740020006c006f0063006100740069006f006e00200027000000270020006e006f007400200066006f0075006e006400200069006e0020007300630065006e00650020002700000073697a650067657400

Import:
	Hold (0 args)
	GetSceneByName (2 args)
	Trigger (2 args)
	Trace (1 args)
	GetScene (1 args)
	PlaySound (1 args)
	sync (0 args)
	FindActor (2 args)
	GetVariable (2 args)
	SetVariable (2 args)
	CreateIntVector (1 args)
	GetGameTime (1 args)
	SetTimeEvent (2 args)
	RemoveActor (1 args)
	self (1 args)
	CreateObjectVector (1 args)
	AddActor (6 args)
	SendWorldWndMessage (2 args)
	GetInvItemProperty (3 args)
	Teleport (4 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (bool, object, object, object, object, object, object, object, object, object, object, object) Params = 0
		EVENT_26 Op = 0xe Vars = (string)
		EVENT_9 Op = 0x152 Vars = (int, float)


0x0: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x1: @ Hold()
0x2: Pop(0)
0x3: GOTO 0x1

0x4: Return(); Pop(0)

0x5: PushEmpty(object, object)
0x6: Push("cot_eva") // @poff=0
0x7: @ GetSceneByName(Stack[-2], Stack[-1])
0x8: Pop(1)
0x9: Push("noeva") // @poff=16
0xa: @ Trigger(Stack[-2], Stack[-1])
0xb: Pop(1)
0xc: Return(); Pop(2)

0xd: Stack[-1] = 0
0xe: PushEmpty(object, object, object, int, int, object, float, object, int, object, object, object, int, int, object, float, object, int)
0xf: @ Trace(Stack[-19])
0x10: Pop(0)
0x11: Push("lock_danko") // @poff=28
0x12: Pop(1); Push((bool) Stack[-20] == Stack[-1])
0x13: IF (Stack[-1] == 0) GOTO 0x1a; Pop(1)

0x14: PushEmpty(string, bool)
0x15: Stack[-2] = "icot_eva_door" // @poff=50
0x16: Stack[-1] = (bool) 1
0x17: Call2 0x256

0x18: Pop(2)
0x19: GOTO 0x151

0x1a: Push("teleport") // @poff=78
0x1b: Pop(1); Push((bool) Stack[-20] == Stack[-1])
0x1c: IF (Stack[-1] == 0) GOTO 0x6b; Pop(1)

0x1d: PushEmpty()
0x1e: Call2 0x5

0x1f: Pop(0)
0x20: @ GetScene(Stack[-9])
0x21: Pop(0)
0x22: Push("cot_eva") // @poff=0
0x23: @ GetSceneByName(Stack[-9], Stack[-1])
0x24: Pop(1)
0x25: PushEmpty(string, bool)
0x26: Stack[-2] = "icot_eva_door" // @poff=50
0x27: Stack[-1] = (bool) 0
0x28: Call2 0x256

0x29: Pop(2)
0x2a: PushEmpty(string, bool)
0x2b: Stack[-2] = "icot_eva@door1" // @poff=96
0x2c: Stack[-1] = (bool) 1
0x2d: Call2 0x245

0x2e: Pop(2)
0x2f: Push("door_close") // @poff=126
0x30: @ PlaySound(Stack[-1])
0x31: Pop(1)
0x32: Push( Stack[1 + Tasks[-1].StackPointer] )
0x33: IF (Stack[-1] == 0) GOTO 0x37; Pop(1)

0x34: Push("cleanup") // @poff=148
0x35: @ Trigger(Stack[-1]T, Stack[-1])
0x36: Pop(1)
0x37: Pop(0); Push((bool) Stack[-9] != Stack[-8])
0x38: IF (Stack[-1] == 0) GOTO 0x44; Pop(1)

0x39: PushEmpty(object, string, string)
0x3a: PushEmpty(object)
0x3b: Call2 0x207

0x3c: Stack[-1] = Stack[-4]
0x3d: Pop(1)
0x3e: Stack[-2] = "cot_eva" // @poff=0
0x3f: Stack[-1] = "pt_k6q01_klara" // @poff=164
0x40: Call2 0x28a

0x41: Pop(3)
0x42: @ sync()
0x43: Pop(0)
0x44: Push("player") // @poff=194
0x45: @ FindActor(Stack[-8], Stack[-1])
0x46: Pop(1)
0x47: PushEmpty(bool)
0x48: Stack[-1] = (bool) 0
0x49: Push(Stack[-8])
0x4a: IF (Stack[-1] == 0) GOTO 0x4e; Pop(1)

0x4b: Push( Stack[0 + Tasks[-1].StackPointer] )
0x4c: IF (Stack[-1] == 0) GOTO 0x4e; Pop(1)

0x4d: Stack[-1] = (bool) 1
0x4e: IF (Stack[-1] == 0) GOTO 0x67; Pop(1)

0x4f: PushEmpty(object, object, object)
0x50: Stack[-10] = Stack[-3]
0x51: Stack[-2] = Stack[2 + Tasks[-1].StackPointer]
0x52: Stack[-1] = Stack[3 + Tasks[-1].StackPointer]
0x53: Call2 0x2a2

0x54: Pop(3)
0x55: PushEmpty(object, object, object)
0x56: Stack[-10] = Stack[-3]
0x57: Stack[-2] = Stack[4 + Tasks[-1].StackPointer]
0x58: Stack[-1] = Stack[5 + Tasks[-1].StackPointer]
0x59: Call2 0x2a2

0x5a: Pop(3)
0x5b: PushEmpty(object, object, object)
0x5c: Stack[-10] = Stack[-3]
0x5d: Stack[-2] = Stack[8 + Tasks[-1].StackPointer]
0x5e: Stack[-1] = Stack[9 + Tasks[-1].StackPointer]
0x5f: Call2 0x2a2

0x60: Pop(3)
0x61: PushEmpty(object, object, object)
0x62: Stack[-10] = Stack[-3]
0x63: Stack[-2] = Stack[10 + Tasks[-1].StackPointer]
0x64: Stack[-1] = Stack[11 + Tasks[-1].StackPointer]
0x65: Call2 0x2a2

0x66: Pop(3)
0x67: Stack[-7] = 0
0x68: Stack[-8] = 0
0x69: Stack[-9] = 0
0x6a: GOTO 0x151

0x6b: Push("cot_eva_load") // @poff=208
0x6c: Pop(1); Push((bool) Stack[-20] == Stack[-1])
0x6d: IF (Stack[-1] == 0) GOTO 0x8a; Pop(1)

0x6e: Push("k6q01") // @poff=234
0x6f: @ GetVariable(Stack[-1], Stack[-7])
0x70: Pop(1)
0x71: Push("k6q01DoorWasLocked") // @poff=246
0x72: @ GetVariable(Stack[-1], Stack[-6])
0x73: Pop(1)
0x74: PushEmpty(bool)
0x75: Stack[-1] = (bool) 0
0x76: Push((int) 2)
0x77: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x78: IF (Stack[-1] == 0) GOTO 0x7c; Pop(1)

0x79: Pop(0); Push((bool) Stack[-6] == 0)
0x7a: IF (Stack[-1] == 0) GOTO 0x7c; Pop(1)

0x7b: Stack[-1] = (bool) 1
0x7c: IF (Stack[-1] == 0) GOTO 0x89; Pop(1)

0x7d: PushEmpty(string, bool)
0x7e: Stack[-2] = "icot_eva@door1" // @poff=96
0x7f: Stack[-1] = (bool) 1
0x80: Call2 0x245

0x81: Pop(2)
0x82: Push("k6q01DoorWasLocked") // @poff=246
0x83: Push((int) 1)
0x84: @ SetVariable(Stack[-2], Stack[-1])
0x85: Pop(2)
0x86: Push("door_close") // @poff=126
0x87: @ PlaySound(Stack[-1])
0x88: Pop(1)
0x89: GOTO 0x151

0x8a: Push("unlock_eva") // @poff=284
0x8b: Pop(1); Push((bool) Stack[-20] == Stack[-1])
0x8c: IF (Stack[-1] == 0) GOTO 0xcf; Pop(1)

0x8d: PushEmpty(string, bool)
0x8e: Stack[-2] = "icot_eva@door1" // @poff=96
0x8f: Stack[-1] = (bool) 0
0x90: Call2 0x245

0x91: Pop(2)
0x92: Push("door_open") // @poff=306
0x93: @ PlaySound(Stack[-1])
0x94: Pop(1)
0x95: @ CreateIntVector(Stack[-3]T)
0x96: Pop(0)
0x97: @ CreateIntVector(Stack[-5]T)
0x98: Pop(0)
0x99: @ CreateIntVector(Stack[-7]T)
0x9a: Pop(0)
0x9b: @ CreateIntVector(Stack[-9]T)
0x9c: Pop(0)
0x9d: @ CreateIntVector(Stack[-11]T)
0x9e: Pop(0)
0x9f: Push("player") // @poff=194
0xa0: @ FindActor(Stack[-5], Stack[-1])
0xa1: Pop(1)
0xa2: Push(Stack[-4])
0xa3: IF (Stack[-1] == 0) GOTO 0xcd; Pop(1)

0xa4: PushEmpty(object, object, int, object)
0xa5: Stack[-8] = Stack[-3]
0xa6: Stack[-2] = (int) 0
0xa7: Stack[-1] = Stack[3 + Tasks[-1].StackPointer]
0xa8: Call2 0x20e

0xa9: Stack[2 + Tasks[-1].StackPointer] = Stack[-4]
0xaa: Pop(4)
0xab: PushEmpty(object, object, int, object)
0xac: Stack[-8] = Stack[-3]
0xad: Stack[-2] = (int) 1
0xae: Stack[-1] = Stack[5 + Tasks[-1].StackPointer]
0xaf: Call2 0x20e

0xb0: Stack[4 + Tasks[-1].StackPointer] = Stack[-4]
0xb1: Pop(4)
0xb2: PushEmpty(object, object, int, object)
0xb3: Stack[-8] = Stack[-3]
0xb4: Stack[-2] = (int) 3
0xb5: Stack[-1] = Stack[9 + Tasks[-1].StackPointer]
0xb6: Call2 0x20e

0xb7: Stack[8 + Tasks[-1].StackPointer] = Stack[-4]
0xb8: Pop(4)
0xb9: PushEmpty(object, object, int, object)
0xba: Stack[-8] = Stack[-3]
0xbb: Stack[-2] = (int) 4
0xbc: Stack[-1] = Stack[11 + Tasks[-1].StackPointer]
0xbd: Call2 0x20e

0xbe: Stack[10 + Tasks[-1].StackPointer] = Stack[-4]
0xbf: Pop(4)
0xc0: Push((int) 0)
0xc1: @@ ClearSubContainer(Stack[-1]); Obj=5 // @poff=326
0xc2: Pop(1)
0xc3: Push((int) 1)
0xc4: @@ ClearSubContainer(Stack[-1]); Obj=5 // @poff=326
0xc5: Pop(1)
0xc6: Push((int) 3)
0xc7: @@ ClearSubContainer(Stack[-1]); Obj=5 // @poff=326
0xc8: Pop(1)
0xc9: Push((int) 4)
0xca: @@ ClearSubContainer(Stack[-1]); Obj=5 // @poff=326
0xcb: Pop(1)
0xcc: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0xcd: Stack[-4] = 0
0xce: GOTO 0x151

0xcf: Push("place_danko") // @poff=344
0xd0: Pop(1); Push((bool) Stack[-20] == Stack[-1])
0xd1: IF (Stack[-1] == 0) GOTO 0x133; Pop(1)

0xd2: @ GetGameTime(Stack[-3])
0xd3: Pop(0)
0xd4: Push((int) 134)
0xd5: Pop(1); Push((bool) Stack[-4] < Stack[-1])
0xd6: IF (Stack[-1] == 0) GOTO 0xf3; Pop(1)

0xd7: Push("cot_anna") // @poff=368
0xd8: @ GetSceneByName(Stack[-3], Stack[-1])
0xd9: Pop(1)
0xda: PushEmpty(object, object, string, string, string)
0xdb: Stack[-7] = Stack[-4]
0xdc: Stack[-3] = "pt_k6q01_danko" // @poff=386
0xdd: Stack[-2] = "NPC_Bakalavr" // @poff=416
0xde: Stack[-1] = "k6q01_danko.xml" // @poff=442
0xdf: Call2 0x233

0xe0: Stack[1 + Tasks[-1].StackPointer] = Stack[-5]
0xe1: Pop(5)
0xe2: Push((int) 1)
0xe3: Push((int) 134)
0xe4: @ SetTimeEvent(Stack[-2], Stack[-1])
0xe5: Pop(2)
0xe6: Push((int) 2)
0xe7: Push((int) 136)
0xe8: @ SetTimeEvent(Stack[-2], Stack[-1])
0xe9: Pop(2)
0xea: Push((int) 3)
0xeb: Push((int) 138)
0xec: @ SetTimeEvent(Stack[-2], Stack[-1])
0xed: Pop(2)
0xee: Push("k6q01DankoPos") // @poff=474
0xef: Push((int) 1)
0xf0: @ SetVariable(Stack[-2], Stack[-1])
0xf1: Pop(2)
0xf2: GOTO 0x131

0xf3: Push((int) 136)
0xf4: Pop(1); Push((bool) Stack[-4] < Stack[-1])
0xf5: IF (Stack[-1] == 0) GOTO 0x10e; Pop(1)

0xf6: Push("cot_lara") // @poff=502
0xf7: @ GetSceneByName(Stack[-3], Stack[-1])
0xf8: Pop(1)
0xf9: PushEmpty(object, object, string, string, string)
0xfa: Stack[-7] = Stack[-4]
0xfb: Stack[-3] = "pt_k6q01_danko" // @poff=386
0xfc: Stack[-2] = "NPC_Bakalavr" // @poff=416
0xfd: Stack[-1] = "k6q01_danko.xml" // @poff=442
0xfe: Call2 0x233

0xff: Stack[1 + Tasks[-1].StackPointer] = Stack[-5]
0x100: Pop(5)
0x101: Push((int) 2)
0x102: Push((int) 136)
0x103: @ SetTimeEvent(Stack[-2], Stack[-1])
0x104: Pop(2)
0x105: Push((int) 3)
0x106: Push((int) 138)
0x107: @ SetTimeEvent(Stack[-2], Stack[-1])
0x108: Pop(2)
0x109: Push("k6q01DankoPos") // @poff=474
0x10a: Push((int) 2)
0x10b: @ SetVariable(Stack[-2], Stack[-1])
0x10c: Pop(2)
0x10d: GOTO 0x131

0x10e: Push((int) 138)
0x10f: Pop(1); Push((bool) Stack[-4] < Stack[-1])
0x110: IF (Stack[-1] == 0) GOTO 0x125; Pop(1)

0x111: Push("dt_house_1_04") // @poff=520
0x112: @ GetSceneByName(Stack[-3], Stack[-1])
0x113: Pop(1)
0x114: PushEmpty(object, object, string, string, string)
0x115: Stack[-7] = Stack[-4]
0x116: Stack[-3] = "pt_k6q01_danko" // @poff=386
0x117: Stack[-2] = "NPC_Bakalavr" // @poff=416
0x118: Stack[-1] = "k6q01_danko.xml" // @poff=442
0x119: Call2 0x233

0x11a: Stack[1 + Tasks[-1].StackPointer] = Stack[-5]
0x11b: Pop(5)
0x11c: Push((int) 3)
0x11d: Push((int) 138)
0x11e: @ SetTimeEvent(Stack[-2], Stack[-1])
0x11f: Pop(2)
0x120: Push("k6q01DankoPos") // @poff=474
0x121: Push((int) 3)
0x122: @ SetVariable(Stack[-2], Stack[-1])
0x123: Pop(2)
0x124: GOTO 0x131

0x125: PushEmpty(string, bool)
0x126: Stack[-2] = "icot_eva_door" // @poff=50
0x127: Stack[-1] = (bool) 0
0x128: Call2 0x256

0x129: Pop(2)
0x12a: PushEmpty()
0x12b: Call2 0x5

0x12c: Pop(0)
0x12d: Push("k6q01DankoPos") // @poff=474
0x12e: Push((int) 4)
0x12f: @ SetVariable(Stack[-2], Stack[-1])
0x130: Pop(2)
0x131: Stack[-2] = 0
0x132: GOTO 0x151

0x133: Push("fail") // @poff=548
0x134: Pop(1); Push((bool) Stack[-20] == Stack[-1])
0x135: IF (Stack[-1] == 0) GOTO 0x13a; Pop(1)

0x136: PushEmpty()
0x137: Call2 0x1d7

0x138: Pop(0)
0x139: GOTO 0x151

0x13a: Push("completed") // @poff=558
0x13b: Pop(1); Push((bool) Stack[-20] == Stack[-1])
0x13c: IF (Stack[-1] == 0) GOTO 0x141; Pop(1)

0x13d: PushEmpty()
0x13e: Call2 0x1df

0x13f: Pop(0)
0x140: GOTO 0x151

0x141: Push("cleanup") // @poff=148
0x142: Pop(1); Push((bool) Stack[-20] == Stack[-1])
0x143: IF (Stack[-1] == 0) GOTO 0x151; Pop(1)

0x144: Push("k6q01") // @poff=234
0x145: @ GetVariable(Stack[-1], Stack[-2])
0x146: Pop(1)
0x147: Push((int) 1000)
0x148: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x149: IF (Stack[-1] == 0) GOTO 0x14e; Pop(1)

0x14a: PushEmpty()
0x14b: Call2 0x1d7

0x14c: Pop(0)
0x14d: GOTO 0x151

0x14e: PushEmpty()
0x14f: Call2 0x1e4

0x150: Pop(0)
0x151: Return(); Pop(18)

0x152: PushEmpty(int, object, object, object, object, object, object, object, int, object, object, object, object, object, object, object)
0x153: Push("k6q01DankoPos") // @poff=474
0x154: @ GetVariable(Stack[-1], Stack[-9])
0x155: Pop(1)
0x156: Push((int) 1)
0x157: Pop(1); Push((bool) Stack[-19] == Stack[-1])
0x158: IF (Stack[-1] == 0) GOTO 0x187; Pop(1)

0x159: Push((int) 1)
0x15a: Pop(1); Push((bool) Stack[-9] != Stack[-1])
0x15b: IF (Stack[-1] == 0) GOTO 0x15d; Pop(1)

0x15c: Return(); Pop(16)

0x15d: @ GetScene(Stack[-7])
0x15e: Pop(0)
0x15f: Push("cot_lara") // @poff=502
0x160: @ GetSceneByName(Stack[-7], Stack[-1])
0x161: Pop(1)
0x162: Push( Stack[1 + Tasks[-1].StackPointer] )
0x163: IF (Stack[-1] == 0) GOTO 0x167; Pop(1)

0x164: Push("cleanup") // @poff=148
0x165: @ Trigger(Stack[-1]T, Stack[-1])
0x166: Pop(1)
0x167: Pop(0); Push((bool) Stack[-7] != Stack[-6])
0x168: IF (Stack[-1] == 0) GOTO 0x172; Pop(1)

0x169: Stack[-6] = Stack[-7]
0x16a: Push("0: placing danko to lara") // @poff=578
0x16b: @ Trace(Stack[-1])
0x16c: Pop(1)
0x16d: Push("k6q01DankoPos") // @poff=474
0x16e: Push((int) 2)
0x16f: @ SetVariable(Stack[-2], Stack[-1])
0x170: Pop(2)
0x171: GOTO 0x17c

0x172: Push("dt_house_1_04") // @poff=520
0x173: @ GetSceneByName(Stack[-8], Stack[-1])
0x174: Pop(1)
0x175: Push("0: placing danko to ospina") // @poff=628
0x176: @ Trace(Stack[-1])
0x177: Pop(1)
0x178: Push("k6q01DankoPos") // @poff=474
0x179: Push((int) 3)
0x17a: @ SetVariable(Stack[-2], Stack[-1])
0x17b: Pop(2)
0x17c: PushEmpty(object, object, string, string, string)
0x17d: Stack[-12] = Stack[-4]
0x17e: Stack[-3] = "pt_k6q01_danko" // @poff=386
0x17f: Stack[-2] = "NPC_Bakalavr" // @poff=416
0x180: Stack[-1] = "k6q01_danko.xml" // @poff=442
0x181: Call2 0x233

0x182: Stack[1 + Tasks[-1].StackPointer] = Stack[-5]
0x183: Pop(5)
0x184: Stack[-6] = 0
0x185: Stack[-7] = 0
0x186: GOTO 0x1d6

0x187: Push((int) 2)
0x188: Pop(1); Push((bool) Stack[-19] == Stack[-1])
0x189: IF (Stack[-1] == 0) GOTO 0x1bd; Pop(1)

0x18a: Push((int) 2)
0x18b: Pop(1); Push((bool) Stack[-9] != Stack[-1])
0x18c: IF (Stack[-1] == 0) GOTO 0x18e; Pop(1)

0x18d: Return(); Pop(16)

0x18e: @ GetScene(Stack[-5])
0x18f: Pop(0)
0x190: Push("dt_house_1_04") // @poff=520
0x191: @ GetSceneByName(Stack[-5], Stack[-1])
0x192: Pop(1)
0x193: Push( Stack[1 + Tasks[-1].StackPointer] )
0x194: IF (Stack[-1] == 0) GOTO 0x198; Pop(1)

0x195: Push("cleanup") // @poff=148
0x196: @ Trigger(Stack[-1]T, Stack[-1])
0x197: Pop(1)
0x198: Pop(0); Push((bool) Stack[-5] != Stack[-4])
0x199: IF (Stack[-1] == 0) GOTO 0x1aa; Pop(1)

0x19a: PushEmpty(object, object, string, string, string)
0x19b: Stack[-9] = Stack[-4]
0x19c: Stack[-3] = "pt_k6q01_danko" // @poff=386
0x19d: Stack[-2] = "NPC_Bakalavr" // @poff=416
0x19e: Stack[-1] = "k6q01_danko.xml" // @poff=442
0x19f: Call2 0x233

0x1a0: Stack[1 + Tasks[-1].StackPointer] = Stack[-5]
0x1a1: Pop(5)
0x1a2: Push("1: placing danko to ospina") // @poff=682
0x1a3: @ Trace(Stack[-1])
0x1a4: Pop(1)
0x1a5: Push("k6q01DankoPos") // @poff=474
0x1a6: Push((int) 3)
0x1a7: @ SetVariable(Stack[-2], Stack[-1])
0x1a8: Pop(2)
0x1a9: GOTO 0x1ba

0x1aa: PushEmpty(string, bool)
0x1ab: Stack[-2] = "icot_eva_door" // @poff=50
0x1ac: Stack[-1] = (bool) 0
0x1ad: Call2 0x256

0x1ae: Pop(2)
0x1af: PushEmpty()
0x1b0: Call2 0x5

0x1b1: Pop(0)
0x1b2: Push("k6q01DankoPos") // @poff=474
0x1b3: Push((int) 4)
0x1b4: @ SetVariable(Stack[-2], Stack[-1])
0x1b5: Pop(2)
0x1b6: Push("1: placing danko to eva") // @poff=736
0x1b7: @ Trace(Stack[-1])
0x1b8: Pop(1)
0x1b9: Stack[-3] = 0
0x1ba: Stack[-4] = 0
0x1bb: Stack[-5] = 0
0x1bc: GOTO 0x1d6

0x1bd: Push((int) 3)
0x1be: Pop(1); Push((bool) Stack[-19] == Stack[-1])
0x1bf: IF (Stack[-1] == 0) GOTO 0x1d6; Pop(1)

0x1c0: Push((int) 3)
0x1c1: Pop(1); Push((bool) Stack[-9] != Stack[-1])
0x1c2: IF (Stack[-1] == 0) GOTO 0x1c4; Pop(1)

0x1c3: Return(); Pop(16)

0x1c4: @ GetScene(Stack[-2])
0x1c5: Pop(0)
0x1c6: Push("cot_eva") // @poff=0
0x1c7: @ GetSceneByName(Stack[-2], Stack[-1])
0x1c8: Pop(1)
0x1c9: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x1ca: IF (Stack[-1] == 0) GOTO 0x1d4; Pop(1)

0x1cb: PushEmpty(string, bool)
0x1cc: Stack[-2] = "icot_eva_door" // @poff=50
0x1cd: Stack[-1] = (bool) 0
0x1ce: Call2 0x256

0x1cf: Pop(2)
0x1d0: Push("k6q01DankoPos") // @poff=474
0x1d1: Push((int) 4)
0x1d2: @ SetVariable(Stack[-2], Stack[-1])
0x1d3: Pop(2)
0x1d4: Stack[-1] = 0
0x1d5: Stack[-2] = 0
0x1d6: Return(); Pop(16)

0x1d7: Push("k6q01") // @poff=234
0x1d8: Push((int) -1)
0x1d9: @ SetVariable(Stack[-2], Stack[-1])
0x1da: Pop(2)
0x1db: PushEmpty()
0x1dc: Call2 0x1e4

0x1dd: Pop(0)
0x1de: Return(); Pop(0)

0x1df: Push("k6q01") // @poff=234
0x1e0: Push((int) 1000)
0x1e1: @ SetVariable(Stack[-2], Stack[-1])
0x1e2: Pop(2)
0x1e3: Return(); Pop(0)

0x1e4: PushEmpty(int, int)
0x1e5: EventDisable(26)
0x1e6: PushEmpty(string, bool)
0x1e7: Stack[-2] = "icot_eva_door" // @poff=50
0x1e8: Stack[-1] = (bool) 0
0x1e9: Call2 0x256

0x1ea: Pop(2)
0x1eb: Push( Stack[1 + Tasks[-1].StackPointer] )
0x1ec: IF (Stack[-1] == 0) GOTO 0x1f0; Pop(1)

0x1ed: Push("cleanup") // @poff=148
0x1ee: @ Trigger(Stack[-1]T, Stack[-1])
0x1ef: Pop(1)
0x1f0: Push("k6q01") // @poff=234
0x1f1: @ GetVariable(Stack[-1], Stack[-2])
0x1f2: Pop(1)
0x1f3: PushEmpty(string, bool)
0x1f4: Stack[-2] = "icot_eva@door1" // @poff=96
0x1f5: Stack[-1] = (bool) 0
0x1f6: Call2 0x245

0x1f7: Pop(2)
0x1f8: Push((int) 1000)
0x1f9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1fa: IF (Stack[-1] == 0) GOTO 0x1fe; Pop(1)

0x1fb: Push("door_open") // @poff=306
0x1fc: @ PlaySound(Stack[-1])
0x1fd: Pop(1)
0x1fe: PushEmpty()
0x1ff: Call2 0x5

0x200: Pop(0)
0x201: PushEmpty(object)
0x202: Call2 0x227

0x203: Pop(0)
0x204: @ RemoveActor(Stack[-1])
0x205: Pop(1)
0x206: Return(); Pop(2)

0x207: PushEmpty(object, object)
0x208: Push("player") // @poff=194
0x209: @ FindActor(Stack[-2], Stack[-1])
0x20a: Pop(1)
0x20b: Stack[-1] = Stack[-3]
0x20c: Return(); Pop(2)

0x20d: Stack[-1] = 0
0x20e: PushEmpty(object, int, int, object, int, object, int, int, object, int)
0x20f: PushEmpty(object)
0x210: Call2 0x22d

0x211: Stack[-1] = Stack[-6]
0x212: Pop(1)
0x213: @@ GetItemCount(Stack[-4], Stack[-12]); Obj=13 // @poff=784
0x214: Pop(0)
0x215: Stack[-3] = (int) 0
0x216: Pop(0); Push((bool) Stack[-3] < Stack[-4])
0x217: IF (Stack[-1] == 0) GOTO 0x224; Pop(1)

0x218: @@ GetItem(Stack[-2], Stack[-3], Stack[-12]); Obj=13 // @poff=797
0x219: Pop(0)
0x21a: @@ add(Stack[-2]); Obj=5 // @poff=805
0x21b: Pop(0)
0x21c: @@ GetItemAmount(Stack[-1], Stack[-3], Stack[-12]); Obj=13 // @poff=809
0x21d: Pop(0)
0x21e: @@ add(Stack[-1]); Obj=11 // @poff=805
0x21f: Pop(0)
0x220: Stack[-2] = 0
0x221: Push((int) 1)
0x222: Stack[-4] = Stack[-4] + Stack[-1]; Pop(1);
0x223: GOTO 0x216

0x224: Stack[-5] = Stack[-14]
0x225: Return(); Pop(10)

0x226: Stack[-5] = 0
0x227: PushEmpty(object, object)
0x228: @ self(Stack[-1])
0x229: Pop(0)
0x22a: Stack[-1] = Stack[-3]
0x22b: Return(); Pop(2)

0x22c: Stack[-1] = 0
0x22d: PushEmpty(object, object)
0x22e: @ CreateObjectVector(Stack[-1])
0x22f: Pop(0)
0x230: Stack[-1] = Stack[-3]
0x231: Return(); Pop(2)

0x232: Stack[-1] = 0
0x233: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x234: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2]); Obj=12 // @poff=823
0x235: Pop(0)
0x236: Pop(0); Push((bool) Stack[-4] == 0)
0x237: IF (Stack[-1] == 0) GOTO 0x240; Pop(1)

0x238: Push("Locator ") // @poff=834
0x239: Pop(1); Push(Stack[-1] + Stack[-12]);
0x23a: Push(" doesn't exist") // @poff=852
0x23b: Pop(2); Push(Stack[-2] + Stack[-1]);
0x23c: @ Trace(Stack[-1])
0x23d: Pop(1)
0x23e: Stack[-1] = 0
0x23f: GOTO 0x242

0x240: @ AddActor(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0x241: Pop(0)
0x242: Stack[-1] = Stack[-13]
0x243: Return(); Pop(8)

0x244: Stack[-1] = 0
0x245: PushEmpty(object, object)
0x246: @ FindActor(Stack[-1], Stack[-4])
0x247: Pop(0)
0x248: Pop(0); Push((bool) Stack[-1] == 0)
0x249: IF (Stack[-1] == 0) GOTO 0x251; Pop(1)

0x24a: Push("Door ") // @poff=882
0x24b: Pop(1); Push(Stack[-1] + Stack[-5]);
0x24c: Push(" not found") // @poff=894
0x24d: Pop(2); Push(Stack[-2] + Stack[-1]);
0x24e: @ Trace(Stack[-1])
0x24f: Pop(1)
0x250: GOTO 0x254

0x251: Push("locked") // @poff=916
0x252: @@ SetProperty(Stack[-1], Stack[-4]); Obj=2 // @poff=930
0x253: Pop(1)
0x254: Return(); Pop(2)

0x255: Stack[-1] = 0
0x256: PushEmpty(object, object)
0x257: @ FindActor(Stack[-1], Stack[-4])
0x258: Pop(0)
0x259: Pop(0); Push((bool) Stack[-1] == 0)
0x25a: IF (Stack[-1] == 0) GOTO 0x262; Pop(1)

0x25b: Push("Door ") // @poff=882
0x25c: Pop(1); Push(Stack[-1] + Stack[-5]);
0x25d: Push(" not found") // @poff=894
0x25e: Pop(2); Push(Stack[-2] + Stack[-1]);
0x25f: @ Trace(Stack[-1])
0x260: Pop(1)
0x261: GOTO 0x269

0x262: Push(Stack[-3])
0x263: IF (Stack[-1] == 0) GOTO 0x266; Pop(1)

0x264: @@ Close(); Obj=1 // @poff=942
0x265: Pop(0)
0x266: Push("locked") // @poff=916
0x267: @@ SetProperty(Stack[-1], Stack[-4]); Obj=2 // @poff=930
0x268: Pop(1)
0x269: Return(); Pop(2)

0x26a: Stack[-1] = 0
0x26b: PushEmpty(object, object)
0x26c: @ CreateIntVector(Stack[-1])
0x26d: Pop(0)
0x26e: @@ add(Stack[-4]); Obj=1 // @poff=805
0x26f: Pop(0)
0x270: @@ add(Stack[-3]); Obj=1 // @poff=805
0x271: Pop(0)
0x272: Push((int) 3)
0x273: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x274: Pop(1)
0x275: Return(); Pop(2)

0x276: Stack[-1] = 0
0x277: PushEmpty(int, int, bool, int, int, bool)
0x278: @@ GetItemID(Stack[-3]); Obj=8 // @poff=948
0x279: Pop(0)
0x27a: Push("Category") // @poff=958
0x27b: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0x27c: Pop(1)
0x27d: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7]); Obj=9 // @poff=976
0x27e: Pop(0)
0x27f: Pop(0); Push((bool) Stack[-1] == 0)
0x280: IF (Stack[-1] == 0) GOTO 0x284; Pop(1)

0x281: @@ DropItems(Stack[-8], Stack[-7]); Obj=9 // @poff=984
0x282: Pop(0)
0x283: GOTO 0x289

0x284: PushEmpty(int, int)
0x285: Stack[-5] = Stack[-2]
0x286: Stack[-9] = Stack[-1]
0x287: Call2 0x26b

0x288: Pop(2)
0x289: Return(); Pop(6)

0x28a: PushEmpty(object, bool, cvector, cvector, object, bool, cvector, cvector)
0x28b: Pop(0); Push((bool) Stack[-11] == 0)
0x28c: IF (Stack[-1] == 0) GOTO 0x28e; Pop(1)

0x28d: Return(); Pop(8)

0x28e: @ GetSceneByName(Stack[-4], Stack[-10])
0x28f: Pop(0)
0x290: @@ GetLocator(Stack[-9], Stack[-3], Stack[-2], Stack[-1]); Obj=4 // @poff=823
0x291: Pop(0)
0x292: Pop(0); Push((bool) Stack[-3] == 0)
0x293: IF (Stack[-1] == 0) GOTO 0x29e; Pop(1)

0x294: Push("Teleport location '") // @poff=994
0x295: Pop(1); Push(Stack[-1] + Stack[-10]);
0x296: Push("' not found in scene '") // @poff=1034
0x297: Pop(2); Push(Stack[-2] + Stack[-1]);
0x298: Pop(1); Push(Stack[-1] + Stack[-11]);
0x299: Push("'") // @poff=1030
0x29a: Pop(2); Push(Stack[-2] + Stack[-1]);
0x29b: @ Trace(Stack[-1])
0x29c: Pop(1)
0x29d: GOTO 0x2a0

0x29e: @ Teleport(Stack[-11], Stack[-4], Stack[-2], Stack[-1])
0x29f: Pop(0)
0x2a0: Return(); Pop(8)

0x2a1: Stack[-4] = 0
0x2a2: PushEmpty(int, int, object, int, int, int, object, int)
0x2a3: @@ size(Stack[-4]); Obj=10 // @poff=1080
0x2a4: Pop(0)
0x2a5: Stack[-3] = (int) 0
0x2a6: Pop(0); Push((bool) Stack[-3] < Stack[-4])
0x2a7: IF (Stack[-1] == 0) GOTO 0x2b6; Pop(1)

0x2a8: @@ get(Stack[-2], Stack[-3]); Obj=10 // @poff=1085
0x2a9: Pop(0)
0x2aa: @@ get(Stack[-1], Stack[-3]); Obj=9 // @poff=1085
0x2ab: Pop(0)
0x2ac: PushEmpty(object, object, int)
0x2ad: Stack[-14] = Stack[-3]
0x2ae: Stack[-5] = Stack[-2]
0x2af: Stack[-4] = Stack[-1]
0x2b0: Call2 0x277

0x2b1: Pop(3)
0x2b2: Stack[-2] = 0
0x2b3: Push((int) 1)
0x2b4: Stack[-4] = Stack[-4] + Stack[-1]; Pop(1);
0x2b5: GOTO 0x2a6

0x2b6: Return(); Pop(8)

