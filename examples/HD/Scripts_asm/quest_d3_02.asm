GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	W:d3q02
	W:r7_house2_01
	W:pt_d3q02_butcher1
	W:pers_butcher
	W:d3q02_butcher.xml
	W:pt_d3q02_butcher2
	W:d3q02_corpse
	W:actor_disp.bin
	W:d3q02_btrigger
	W:quest_d3_02_btrigger.bin
	W:r7_house2_01@door1
	W:r7_house2_01@door2
	W:pt_d3q02_doberman
	W:pers_doberman
	W:d3q02_doberman.xml
	W:teleport
	W:player
	W:mnogogrannik_han
	W:pt_d3q02_teleport
	A:GetLocator
	W:butcher_trigger
	W:d3q02SeeCorpse
	W:completed
	W:cleanup
	W:Locator 
	W: doesn't exist
	W:Door 
	W: not found
	W:locked
	A:SetProperty
	W:Can't retrieve diary root
	A:Find
	W:Can't find diary parent with id: 
	A:AddChild
	A:GetCategory
// @pool_raw:640033007100300032000000720037005f0068006f0075007300650032005f00300031000000700074005f00640033007100300032005f0062007500740063006800650072003100000070006500720073005f0062007500740063006800650072000000640033007100300032005f0062007500740063006800650072002e0078006d006c000000700074005f00640033007100300032005f00620075007400630068006500720032000000640033007100300032005f0063006f00720070007300650000006100630074006f0072005f0064006900730070002e00620069006e000000640033007100300032005f00620074007200690067006700650072000000710075006500730074005f00640033005f00300032005f00620074007200690067006700650072002e00620069006e000000720037005f0068006f0075007300650032005f0030003100400064006f006f00720031000000720037005f0068006f0075007300650032005f0030003100400064006f006f00720032000000700074005f00640033007100300032005f0064006f006200650072006d0061006e00000070006500720073005f0064006f006200650072006d0061006e000000640033007100300032005f0064006f006200650072006d0061006e002e0078006d006c000000740065006c00650070006f0072007400000070006c00610079006500720000006d006e006f0067006f006700720061006e006e0069006b005f00680061006e000000700074005f00640033007100300032005f00740065006c00650070006f007200740000004765744c6f6361746f720062007500740063006800650072005f00740072006900670067006500720000006400330071003000320053006500650043006f007200700073006500000063006f006d0070006c006500740065006400000063006c00650061006e007500700000004c006f006300610074006f00720020000000200064006f00650073006e0027007400200065007800690073007400000044006f006f0072002000000020006e006f007400200066006f0075006e00640000006c006f0063006b0065006400000053657450726f706572747900430061006e0027007400200072006500740072006900650076006500200064006900610072007900200072006f006f007400000046696e6400430061006e00270074002000660069006e006400200064006900610072007900200070006100720065006e007400200077006900740068002000690064003a00200000004164644368696c640047657443617465676f727900

Import:
	SetVariable (2 args)
	AddScriptedActor (5 args)
	GetMainOutdoorScene (1 args)
	Trace (1 args)
	FindActor (2 args)
	GetSceneByName (2 args)
	Teleport (4 args)
	Trigger (2 args)
	GetVariable (2 args)
	RemoveActor (1 args)
	GetGameTime (1 args)
	SetTimeEvent (2 args)
	Hold (0 args)
	self (1 args)
	AddActor (6 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object, object, object, object, object) Params = 0
		EVENT_26 Op = 0x3e Vars = (string)
		EVENT_9 Op = 0xdd Vars = (int, float)


0x0: PushEmpty(object, object)
0x1: Push("d3q02") // @poff=0
0x2: Push((int) 1)
0x3: @ SetVariable(Stack[-2], Stack[-1])
0x4: Pop(2)
0x5: PushEmpty(object, string)
0x6: Stack[-1] = "r7_house2_01" // @poff=12
0x7: Call2 0xe8

0x8: Stack[-2] = Stack[-3]
0x9: Pop(2)
0xa: PushEmpty(object, object, string, string, string)
0xb: Stack[-6] = Stack[-4]
0xc: Stack[-3] = "pt_d3q02_butcher1" // @poff=38
0xd: Stack[-2] = "pers_butcher" // @poff=74
0xe: Stack[-1] = "d3q02_butcher.xml" // @poff=100
0xf: Call2 0xee

0x10: Stack[0 + Tasks[-1].StackPointer] = Stack[-5]
0x11: Pop(5)
0x12: PushEmpty(object, object, string, string, string)
0x13: Stack[-6] = Stack[-4]
0x14: Stack[-3] = "pt_d3q02_butcher2" // @poff=136
0x15: Stack[-2] = "pers_butcher" // @poff=74
0x16: Stack[-1] = "d3q02_butcher.xml" // @poff=100
0x17: Call2 0xee

0x18: Stack[1 + Tasks[-1].StackPointer] = Stack[-5]
0x19: Pop(5)
0x1a: Push("d3q02_corpse") // @poff=172
0x1b: Push("actor_disp.bin") // @poff=198
0x1c: Push(CVector(0.0, 0.0, 0.0))
0x1d: @ AddScriptedActor(Stack[-3]T, Stack[-3], Stack[-2], Stack[-4], Stack[-1])
0x1e: Pop(3)
0x1f: Push("d3q02_btrigger") // @poff=228
0x20: Push("quest_d3_02_btrigger.bin") // @poff=258
0x21: Push(CVector(0.0, 0.0, 0.0))
0x22: @ AddScriptedActor(Stack[-4]T, Stack[-3], Stack[-2], Stack[-4], Stack[-1])
0x23: Pop(3)
0x24: PushEmpty(string, bool)
0x25: Stack[-2] = "r7_house2_01@door1" // @poff=308
0x26: Stack[-1] = (bool) 0
0x27: Call2 0x100

0x28: Pop(2)
0x29: PushEmpty(string, bool)
0x2a: Stack[-2] = "r7_house2_01@door2" // @poff=346
0x2b: Stack[-1] = (bool) 0
0x2c: Call2 0x100

0x2d: Pop(2)
0x2e: @ GetMainOutdoorScene(Stack[-1])
0x2f: Pop(0)
0x30: PushEmpty(object, object, string, string, string)
0x31: Stack[-6] = Stack[-4]
0x32: Stack[-3] = "pt_d3q02_doberman" // @poff=384
0x33: Stack[-2] = "pers_doberman" // @poff=420
0x34: Stack[-1] = "d3q02_doberman.xml" // @poff=448
0x35: Call2 0xee

0x36: Stack[2 + Tasks[-1].StackPointer] = Stack[-5]
0x37: Pop(5)
0x38: PushEmpty(int)
0x39: Stack[-1] = (int) 3
0x3a: Call2 0xca

0x3b: Pop(1)
0x3c: Return(); Pop(2)

0x3d: Stack[-1] = 0
0x3e: PushEmpty(object, object, cvector, cvector, bool, object, object, cvector, cvector, bool)
0x3f: @ Trace(Stack[-11])
0x40: Pop(0)
0x41: Push("teleport") // @poff=486
0x42: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0x43: IF (Stack[-1] == 0) GOTO 0x54; Pop(1)

0x44: Push("player") // @poff=504
0x45: @ FindActor(Stack[-6], Stack[-1])
0x46: Pop(1)
0x47: Push(Stack[-5])
0x48: IF (Stack[-1] == 0) GOTO 0x52; Pop(1)

0x49: Push("mnogogrannik_han") // @poff=518
0x4a: @ GetSceneByName(Stack[-5], Stack[-1])
0x4b: Pop(1)
0x4c: Push("pt_d3q02_teleport") // @poff=552
0x4d: @@ GetLocator(Stack[-1], Stack[-2], Stack[-4], Stack[-3]); Obj=5 // @poff=588
0x4e: Pop(1)
0x4f: @ Teleport(Stack[-5], Stack[-4], Stack[-3], Stack[-2])
0x50: Pop(0)
0x51: Stack[-4] = 0
0x52: Stack[-5] = 0
0x53: GOTO 0x72

0x54: Push("butcher_trigger") // @poff=599
0x55: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0x56: IF (Stack[-1] == 0) GOTO 0x6c; Pop(1)

0x57: Push( Stack[0 + Tasks[-1].StackPointer] )
0x58: IF (Stack[-1] == 0) GOTO 0x5c; Pop(1)

0x59: Push("trigger") // @poff=242
0x5a: @ Trigger(Stack[-0]T, Stack[-1])
0x5b: Pop(1)
0x5c: Push( Stack[1 + Tasks[-1].StackPointer] )
0x5d: IF (Stack[-1] == 0) GOTO 0x61; Pop(1)

0x5e: Push("trigger") // @poff=242
0x5f: @ Trigger(Stack[-1]T, Stack[-1])
0x60: Pop(1)
0x61: PushEmpty()
0x62: Call2 0x9c

0x63: Pop(0)
0x64: Push("d3q02SeeCorpse") // @poff=631
0x65: Push((int) 1)
0x66: @ SetVariable(Stack[-2], Stack[-1])
0x67: Pop(2)
0x68: PushEmpty()
0x69: Call2 0x111

0x6a: Pop(0)
0x6b: GOTO 0x72

0x6c: Push("completed") // @poff=661
0x6d: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0x6e: IF (Stack[-1] == 0) GOTO 0x72; Pop(1)

0x6f: PushEmpty()
0x70: Call2 0x86

0x71: Pop(0)
0x72: Return(); Pop(10)

0x73: PushEmpty(int, int)
0x74: Push("d3q02") // @poff=0
0x75: @ GetVariable(Stack[-1], Stack[-2])
0x76: Pop(1)
0x77: Push((int) 1000)
0x78: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x79: IF (Stack[-1] == 0) GOTO 0x7d; Pop(1)

0x7a: PushEmpty()
0x7b: Call2 0x7e

0x7c: Pop(0)
0x7d: Return(); Pop(2)

0x7e: Push("d3q02") // @poff=0
0x7f: Push((int) -1)
0x80: @ SetVariable(Stack[-2], Stack[-1])
0x81: Pop(2)
0x82: PushEmpty()
0x83: Call2 0xb1

0x84: Pop(0)
0x85: Return(); Pop(0)

0x86: PushEmpty(int, int)
0x87: Push("d3q02") // @poff=0
0x88: @ GetVariable(Stack[-1], Stack[-2])
0x89: Pop(1)
0x8a: PushEmpty(bool)
0x8b: Stack[-1] = (bool) 0
0x8c: Push((int) 1000)
0x8d: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x8e: IF (Stack[-1] == 0) GOTO 0x93; Pop(1)

0x8f: Push((int) -1)
0x90: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x91: IF (Stack[-1] == 0) GOTO 0x93; Pop(1)

0x92: Stack[-1] = (bool) 1
0x93: IF (Stack[-1] == 0) GOTO 0x9b; Pop(1)

0x94: Push("d3q02") // @poff=0
0x95: Push((int) 1000)
0x96: @ SetVariable(Stack[-2], Stack[-1])
0x97: Pop(2)
0x98: PushEmpty()
0x99: Call2 0xb1

0x9a: Pop(0)
0x9b: Return(); Pop(2)

0x9c: Push( Stack[0 + Tasks[-1].StackPointer] )
0x9d: IF (Stack[-1] == 0) GOTO 0xa1; Pop(1)

0x9e: Push("cleanup") // @poff=681
0x9f: @ Trigger(Stack[-0]T, Stack[-1])
0xa0: Pop(1)
0xa1: Push( Stack[1 + Tasks[-1].StackPointer] )
0xa2: IF (Stack[-1] == 0) GOTO 0xa6; Pop(1)

0xa3: Push("cleanup") // @poff=681
0xa4: @ Trigger(Stack[-1]T, Stack[-1])
0xa5: Pop(1)
0xa6: Push( Stack[3 + Tasks[-1].StackPointer] )
0xa7: IF (Stack[-1] == 0) GOTO 0xab; Pop(1)

0xa8: Push("cleanup") // @poff=681
0xa9: @ Trigger(Stack[-3]T, Stack[-1])
0xaa: Pop(1)
0xab: Push( Stack[4 + Tasks[-1].StackPointer] )
0xac: IF (Stack[-1] == 0) GOTO 0xb0; Pop(1)

0xad: Push("cleanup") // @poff=681
0xae: @ Trigger(Stack[-4]T, Stack[-1])
0xaf: Pop(1)
0xb0: Return(); Pop(0)

0xb1: EventDisable(26)
0xb2: PushEmpty()
0xb3: Call2 0x9c

0xb4: Pop(0)
0xb5: Push( Stack[2 + Tasks[-1].StackPointer] )
0xb6: IF (Stack[-1] == 0) GOTO 0xba; Pop(1)

0xb7: Push("cleanup") // @poff=681
0xb8: @ Trigger(Stack[-2]T, Stack[-1])
0xb9: Pop(1)
0xba: PushEmpty(string, bool)
0xbb: Stack[-2] = "r7_house2_01@door1" // @poff=308
0xbc: Stack[-1] = (bool) 1
0xbd: Call2 0x100

0xbe: Pop(2)
0xbf: PushEmpty(string, bool)
0xc0: Stack[-2] = "r7_house2_01@door2" // @poff=346
0xc1: Stack[-1] = (bool) 1
0xc2: Call2 0x100

0xc3: Pop(2)
0xc4: PushEmpty(object)
0xc5: Call2 0xe2

0xc6: Pop(0)
0xc7: @ RemoveActor(Stack[-1])
0xc8: Pop(1)
0xc9: Return(); Pop(0)

0xca: PushEmpty(float, float)
0xcb: @ GetGameTime(Stack[-1])
0xcc: Pop(0)
0xcd: Push((int) 24)
0xce: Pop(1); Push(Stack[-4] * Stack[-1]);
0xcf: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0xd0: IF (Stack[-1] == 0) GOTO 0xd5; Pop(1)

0xd1: PushEmpty()
0xd2: Call2 0xb1

0xd3: Pop(0)
0xd4: GOTO 0xdc

0xd5: Push((int) 0)
0xd6: Push((int) 24)
0xd7: Pop(1); Push(Stack[-5] * Stack[-1]);
0xd8: @ SetTimeEvent(Stack[-2], Stack[-1])
0xd9: Pop(2)
0xda: @ Hold()
0xdb: Pop(0)
0xdc: Return(); Pop(2)

0xdd: PushEmpty()
0xde: PushEmpty()
0xdf: Call2 0x73

0xe0: Pop(0)
0xe1: Return(); Pop(0)

0xe2: PushEmpty(object, object)
0xe3: @ self(Stack[-1])
0xe4: Pop(0)
0xe5: Stack[-1] = Stack[-3]
0xe6: Return(); Pop(2)

0xe7: Stack[-1] = 0
0xe8: PushEmpty(object, object)
0xe9: @ GetSceneByName(Stack[-1], Stack[-3])
0xea: Pop(0)
0xeb: Stack[-1] = Stack[-4]
0xec: Return(); Pop(2)

0xed: Stack[-1] = 0
0xee: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0xef: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2]); Obj=12 // @poff=588
0xf0: Pop(0)
0xf1: Pop(0); Push((bool) Stack[-4] == 0)
0xf2: IF (Stack[-1] == 0) GOTO 0xfb; Pop(1)

0xf3: Push("Locator ") // @poff=697
0xf4: Pop(1); Push(Stack[-1] + Stack[-12]);
0xf5: Push(" doesn't exist") // @poff=715
0xf6: Pop(2); Push(Stack[-2] + Stack[-1]);
0xf7: @ Trace(Stack[-1])
0xf8: Pop(1)
0xf9: Stack[-1] = 0
0xfa: GOTO 0xfd

0xfb: @ AddActor(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0xfc: Pop(0)
0xfd: Stack[-1] = Stack[-13]
0xfe: Return(); Pop(8)

0xff: Stack[-1] = 0
0x100: PushEmpty(object, object)
0x101: @ FindActor(Stack[-1], Stack[-4])
0x102: Pop(0)
0x103: Pop(0); Push((bool) Stack[-1] == 0)
0x104: IF (Stack[-1] == 0) GOTO 0x10c; Pop(1)

0x105: Push("Door ") // @poff=745
0x106: Pop(1); Push(Stack[-1] + Stack[-5]);
0x107: Push(" not found") // @poff=757
0x108: Pop(2); Push(Stack[-2] + Stack[-1]);
0x109: @ Trace(Stack[-1])
0x10a: Pop(1)
0x10b: GOTO 0x10f

0x10c: Push("locked") // @poff=779
0x10d: @@ SetProperty(Stack[-1], Stack[-4]); Obj=2 // @poff=793
0x10e: Pop(1)
0x10f: Return(); Pop(2)

0x110: Stack[-1] = 0
0x111: PushEmpty(object, object)
0x112: Push((int) 80)
0x113: Push((int) 2)
0x114: Push((int) 512162)
0x115: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x116: Pop(3)
0x117: PushEmpty(bool, object, int)
0x118: Stack[-4] = Stack[-2]
0x119: Stack[-1] = (int) 26
0x11a: Call2 0x12b

0x11b: Pop(3)
0x11c: Return(); Pop(2)

0x11d: Stack[-1] = 0
0x11e: PushEmpty(object, object)
0x11f: @ GetDiaryRoot(Stack[-1])
0x120: Pop(0)
0x121: Pop(0); Push((bool) Stack[-1] == 0)
0x122: IF (Stack[-1] == 0) GOTO 0x128; Pop(1)

0x123: Push("Can't retrieve diary root") // @poff=805
0x124: @ Trace(Stack[-1])
0x125: Pop(1)
0x126: Stack[-3] = (bool) 0
0x127: Return(); Pop(2)

0x128: Stack[-1] = Stack[-3]
0x129: Return(); Pop(2)

0x12a: Stack[-1] = 0
0x12b: PushEmpty(object, object, int, object, object, int)
0x12c: PushEmpty(object)
0x12d: Call2 0x11e

0x12e: Stack[-1] = Stack[-4]
0x12f: Pop(1)
0x130: @@ Find(Stack[-7], Stack[-2]); Obj=3 // @poff=857
0x131: Pop(0)
0x132: Pop(0); Push((bool) Stack[-2] == 0)
0x133: IF (Stack[-1] == 0) GOTO 0x13a; Pop(1)

0x134: Push("Can't find diary parent with id: ") // @poff=862
0x135: Pop(1); Push(Stack[-1] + Stack[-8]);
0x136: @ Trace(Stack[-1])
0x137: Pop(1)
0x138: Stack[-9] = (bool) 0
0x139: Return(); Pop(6)

0x13a: @@ AddChild(Stack[-8]); Obj=2 // @poff=930
0x13b: Pop(0)
0x13c: Push((int) 7)
0x13d: @ SendWorldWndMessage(Stack[-1])
0x13e: Pop(1)
0x13f: @@ GetCategory(Stack[-1]); Obj=8 // @poff=939
0x140: Pop(0)
0x141: @ SetDiarySection(Stack[-1])
0x142: Pop(0)
0x143: Stack[-9] = (bool) 0
0x144: Return(); Pop(6)

0x145: Stack[-2] = 0
0x146: Stack[-3] = 0
