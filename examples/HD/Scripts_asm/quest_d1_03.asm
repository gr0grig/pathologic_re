GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	W:d1q03
	W:ospina_kabak
	W:pt_d1q04_butcher
	W:pers_butcher
	W:d1q03_butcher.xml
	W:ospina_kabak@door1
	W:unlock_butcher
	W:butcher_fail
	W:butcher_battle
	W:butcher_death
	W:eva_finish
	W:cleanup
	A:GetLocator
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
	W:d1q03IsKapella
// @pool_raw:6400310071003000330000006f007300700069006e0061005f006b006100620061006b000000700074005f00640031007100300034005f006200750074006300680065007200000070006500720073005f0062007500740063006800650072000000640031007100300033005f0062007500740063006800650072002e0078006d006c0000006f007300700069006e0061005f006b006100620061006b00400064006f006f0072003100000075006e006c006f0063006b005f006200750074006300680065007200000062007500740063006800650072005f006600610069006c00000062007500740063006800650072005f0062006100740074006c006500000062007500740063006800650072005f006400650061007400680000006500760061005f00660069006e00690073006800000063006c00650061006e007500700000004765744c6f6361746f72004c006f006300610074006f00720020000000200064006f00650073006e0027007400200065007800690073007400000044006f006f0072002000000020006e006f007400200066006f0075006e00640000006c006f0063006b0065006400000053657450726f706572747900430061006e0027007400200072006500740072006900650076006500200064006900610072007900200072006f006f007400000046696e6400430061006e00270074002000660069006e006400200064006900610072007900200070006100720065006e007400200077006900740068002000690064003a00200000004164644368696c640047657443617465676f72790064003100710030003300490073004b006100700065006c006c0061000000

Import:
	SetVariable (2 args)
	GetSceneByName (2 args)
	Trace (1 args)
	RemoveActor (1 args)
	GetVariable (2 args)
	Trigger (2 args)
	GetGameTime (1 args)
	SetTimeEvent (2 args)
	Hold (0 args)
	self (1 args)
	AddActor (6 args)
	FindActor (2 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 0
		EVENT_26 Op = 0x1b Vars = (string)
		EVENT_9 Op = 0xa4 Vars = (int, float)


0x0: PushEmpty(object, object)
0x1: Push("d1q03") // @poff=0
0x2: Push((int) 1)
0x3: @ SetVariable(Stack[-2], Stack[-1])
0x4: Pop(2)
0x5: Push("ospina_kabak") // @poff=12
0x6: @ GetSceneByName(Stack[-2], Stack[-1])
0x7: Pop(1)
0x8: PushEmpty(object, object, string, string, string)
0x9: Stack[-6] = Stack[-4]
0xa: Stack[-3] = "pt_d1q04_butcher" // @poff=38
0xb: Stack[-2] = "pers_butcher" // @poff=72
0xc: Stack[-1] = "d1q03_butcher.xml" // @poff=98
0xd: Call2 0xaf

0xe: Stack[0 + Tasks[-1].StackPointer] = Stack[-5]
0xf: Pop(5)
0x10: PushEmpty(string, bool)
0x11: Stack[-2] = "ospina_kabak@door1" // @poff=134
0x12: Stack[-1] = (bool) 1
0x13: Call2 0xc1

0x14: Pop(2)
0x15: PushEmpty(int)
0x16: Stack[-1] = (int) 1
0x17: Call2 0x91

0x18: Pop(1)
0x19: Return(); Pop(2)

0x1a: Stack[-1] = 0
0x1b: PushEmpty()
0x1c: @ Trace(Stack[-1])
0x1d: Pop(0)
0x1e: Push("unlock_butcher") // @poff=172
0x1f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x20: IF (Stack[-1] == 0) GOTO 0x27; Pop(1)

0x21: PushEmpty(string, bool)
0x22: Stack[-2] = "ospina_kabak@door1" // @poff=134
0x23: Stack[-1] = (bool) 0
0x24: Call2 0xc1

0x25: Pop(2)
0x26: GOTO 0x64

0x27: Push("butcher_fail") // @poff=202
0x28: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x29: IF (Stack[-1] == 0) GOTO 0x31; Pop(1)

0x2a: PushEmpty()
0x2b: Call2 0x106

0x2c: Pop(0)
0x2d: PushEmpty()
0x2e: Call2 0x6d

0x2f: Pop(0)
0x30: GOTO 0x64

0x31: Push("butcher_battle") // @poff=228
0x32: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x33: IF (Stack[-1] == 0) GOTO 0x39; Pop(1)

0x34: Push("d1q03") // @poff=0
0x35: Push((int) 2)
0x36: @ SetVariable(Stack[-2], Stack[-1])
0x37: Pop(2)
0x38: GOTO 0x64

0x39: Push("butcher_death") // @poff=258
0x3a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3b: IF (Stack[-1] == 0) GOTO 0x4e; Pop(1)

0x3c: PushEmpty(bool)
0x3d: Call2 0x13c

0x3e: Pop(0)
0x3f: IF (Stack[-1] == 0) GOTO 0x47; Pop(1)

0x40: PushEmpty()
0x41: Call2 0xdf

0x42: Pop(0)
0x43: PushEmpty()
0x44: Call2 0x6d

0x45: Pop(0)
0x46: GOTO 0x4d

0x47: PushEmpty()
0x48: Call2 0xec

0x49: Pop(0)
0x4a: PushEmpty()
0x4b: Call2 0x65

0x4c: Pop(0)
0x4d: GOTO 0x64

0x4e: Push("eva_finish") // @poff=286
0x4f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x50: IF (Stack[-1] == 0) GOTO 0x64; Pop(1)

0x51: @ RemoveActor(Stack[-0]T)
0x52: Pop(0)
0x53: PushEmpty(bool)
0x54: Call2 0x13c

0x55: Pop(0)
0x56: IF (Stack[-1] == 0) GOTO 0x5e; Pop(1)

0x57: PushEmpty()
0x58: Call2 0xd2

0x59: Pop(0)
0x5a: PushEmpty()
0x5b: Call2 0x65

0x5c: Pop(0)
0x5d: GOTO 0x64

0x5e: PushEmpty()
0x5f: Call2 0xf9

0x60: Pop(0)
0x61: PushEmpty()
0x62: Call2 0x6d

0x63: Pop(0)
0x64: Return(); Pop(0)

0x65: Push("d1q03") // @poff=0
0x66: Push((int) 1000)
0x67: @ SetVariable(Stack[-2], Stack[-1])
0x68: Pop(2)
0x69: PushEmpty()
0x6a: Call2 0x80

0x6b: Pop(0)
0x6c: Return(); Pop(0)

0x6d: Push("d1q03") // @poff=0
0x6e: Push((int) -1)
0x6f: @ SetVariable(Stack[-2], Stack[-1])
0x70: Pop(2)
0x71: PushEmpty()
0x72: Call2 0x80

0x73: Pop(0)
0x74: Return(); Pop(0)

0x75: PushEmpty(int, int)
0x76: Push("d1q03") // @poff=0
0x77: @ GetVariable(Stack[-1], Stack[-2])
0x78: Pop(1)
0x79: Push((int) 1000)
0x7a: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x7b: IF (Stack[-1] == 0) GOTO 0x7f; Pop(1)

0x7c: PushEmpty()
0x7d: Call2 0x6d

0x7e: Pop(0)
0x7f: Return(); Pop(2)

0x80: EventDisable(26)
0x81: Push( Stack[0 + Tasks[-1].StackPointer] )
0x82: IF (Stack[-1] == 0) GOTO 0x86; Pop(1)

0x83: Push("cleanup") // @poff=308
0x84: @ Trigger(Stack[-0]T, Stack[-1])
0x85: Pop(1)
0x86: PushEmpty(string, bool)
0x87: Stack[-2] = "ospina_kabak@door1" // @poff=134
0x88: Stack[-1] = (bool) 0
0x89: Call2 0xc1

0x8a: Pop(2)
0x8b: PushEmpty(object)
0x8c: Call2 0xa9

0x8d: Pop(0)
0x8e: @ RemoveActor(Stack[-1])
0x8f: Pop(1)
0x90: Return(); Pop(0)

0x91: PushEmpty(float, float)
0x92: @ GetGameTime(Stack[-1])
0x93: Pop(0)
0x94: Push((int) 24)
0x95: Pop(1); Push(Stack[-4] * Stack[-1]);
0x96: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x97: IF (Stack[-1] == 0) GOTO 0x9c; Pop(1)

0x98: PushEmpty()
0x99: Call2 0x80

0x9a: Pop(0)
0x9b: GOTO 0xa3

0x9c: Push((int) 0)
0x9d: Push((int) 24)
0x9e: Pop(1); Push(Stack[-5] * Stack[-1]);
0x9f: @ SetTimeEvent(Stack[-2], Stack[-1])
0xa0: Pop(2)
0xa1: @ Hold()
0xa2: Pop(0)
0xa3: Return(); Pop(2)

0xa4: PushEmpty()
0xa5: PushEmpty()
0xa6: Call2 0x75

0xa7: Pop(0)
0xa8: Return(); Pop(0)

0xa9: PushEmpty(object, object)
0xaa: @ self(Stack[-1])
0xab: Pop(0)
0xac: Stack[-1] = Stack[-3]
0xad: Return(); Pop(2)

0xae: Stack[-1] = 0
0xaf: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0xb0: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2]); Obj=12 // @poff=324
0xb1: Pop(0)
0xb2: Pop(0); Push((bool) Stack[-4] == 0)
0xb3: IF (Stack[-1] == 0) GOTO 0xbc; Pop(1)

0xb4: Push("Locator ") // @poff=335
0xb5: Pop(1); Push(Stack[-1] + Stack[-12]);
0xb6: Push(" doesn't exist") // @poff=353
0xb7: Pop(2); Push(Stack[-2] + Stack[-1]);
0xb8: @ Trace(Stack[-1])
0xb9: Pop(1)
0xba: Stack[-1] = 0
0xbb: GOTO 0xbe

0xbc: @ AddActor(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0xbd: Pop(0)
0xbe: Stack[-1] = Stack[-13]
0xbf: Return(); Pop(8)

0xc0: Stack[-1] = 0
0xc1: PushEmpty(object, object)
0xc2: @ FindActor(Stack[-1], Stack[-4])
0xc3: Pop(0)
0xc4: Pop(0); Push((bool) Stack[-1] == 0)
0xc5: IF (Stack[-1] == 0) GOTO 0xcd; Pop(1)

0xc6: Push("Door ") // @poff=383
0xc7: Pop(1); Push(Stack[-1] + Stack[-5]);
0xc8: Push(" not found") // @poff=395
0xc9: Pop(2); Push(Stack[-2] + Stack[-1]);
0xca: @ Trace(Stack[-1])
0xcb: Pop(1)
0xcc: GOTO 0xd0

0xcd: Push("locked") // @poff=417
0xce: @@ SetProperty(Stack[-1], Stack[-4]); Obj=2 // @poff=431
0xcf: Pop(1)
0xd0: Return(); Pop(2)

0xd1: Stack[-1] = 0
0xd2: PushEmpty(object, object)
0xd3: Push((int) 38)
0xd4: Push((int) 2)
0xd5: Push((int) 512120)
0xd6: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xd7: Pop(3)
0xd8: PushEmpty(bool, object, int)
0xd9: Stack[-4] = Stack[-2]
0xda: Stack[-1] = (int) 37
0xdb: Call2 0x120

0xdc: Pop(3)
0xdd: Return(); Pop(2)

0xde: Stack[-1] = 0
0xdf: PushEmpty(object, object)
0xe0: Push((int) 39)
0xe1: Push((int) 2)
0xe2: Push((int) 512121)
0xe3: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xe4: Pop(3)
0xe5: PushEmpty(bool, object, int)
0xe6: Stack[-4] = Stack[-2]
0xe7: Stack[-1] = (int) 37
0xe8: Call2 0x120

0xe9: Pop(3)
0xea: Return(); Pop(2)

0xeb: Stack[-1] = 0
0xec: PushEmpty(object, object)
0xed: Push((int) 40)
0xee: Push((int) 2)
0xef: Push((int) 512122)
0xf0: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xf1: Pop(3)
0xf2: PushEmpty(bool, object, int)
0xf3: Stack[-4] = Stack[-2]
0xf4: Stack[-1] = (int) 37
0xf5: Call2 0x120

0xf6: Pop(3)
0xf7: Return(); Pop(2)

0xf8: Stack[-1] = 0
0xf9: PushEmpty(object, object)
0xfa: Push((int) 41)
0xfb: Push((int) 2)
0xfc: Push((int) 512123)
0xfd: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xfe: Pop(3)
0xff: PushEmpty(bool, object, int)
0x100: Stack[-4] = Stack[-2]
0x101: Stack[-1] = (int) 37
0x102: Call2 0x120

0x103: Pop(3)
0x104: Return(); Pop(2)

0x105: Stack[-1] = 0
0x106: PushEmpty(object, object)
0x107: Push((int) 42)
0x108: Push((int) 2)
0x109: Push((int) 512124)
0x10a: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x10b: Pop(3)
0x10c: PushEmpty(bool, object, int)
0x10d: Stack[-4] = Stack[-2]
0x10e: Stack[-1] = (int) 37
0x10f: Call2 0x120

0x110: Pop(3)
0x111: Return(); Pop(2)

0x112: Stack[-1] = 0
0x113: PushEmpty(object, object)
0x114: @ GetDiaryRoot(Stack[-1])
0x115: Pop(0)
0x116: Pop(0); Push((bool) Stack[-1] == 0)
0x117: IF (Stack[-1] == 0) GOTO 0x11d; Pop(1)

0x118: Push("Can't retrieve diary root") // @poff=443
0x119: @ Trace(Stack[-1])
0x11a: Pop(1)
0x11b: Stack[-3] = (bool) 0
0x11c: Return(); Pop(2)

0x11d: Stack[-1] = Stack[-3]
0x11e: Return(); Pop(2)

0x11f: Stack[-1] = 0
0x120: PushEmpty(object, object, int, object, object, int)
0x121: PushEmpty(object)
0x122: Call2 0x113

0x123: Stack[-1] = Stack[-4]
0x124: Pop(1)
0x125: @@ Find(Stack[-7], Stack[-2]); Obj=3 // @poff=495
0x126: Pop(0)
0x127: Pop(0); Push((bool) Stack[-2] == 0)
0x128: IF (Stack[-1] == 0) GOTO 0x12f; Pop(1)

0x129: Push("Can't find diary parent with id: ") // @poff=500
0x12a: Pop(1); Push(Stack[-1] + Stack[-8]);
0x12b: @ Trace(Stack[-1])
0x12c: Pop(1)
0x12d: Stack[-9] = (bool) 0
0x12e: Return(); Pop(6)

0x12f: @@ AddChild(Stack[-8]); Obj=2 // @poff=568
0x130: Pop(0)
0x131: Push((int) 7)
0x132: @ SendWorldWndMessage(Stack[-1])
0x133: Pop(1)
0x134: @@ GetCategory(Stack[-1]); Obj=8 // @poff=577
0x135: Pop(0)
0x136: @ SetDiarySection(Stack[-1])
0x137: Pop(0)
0x138: Stack[-9] = (bool) 0
0x139: Return(); Pop(6)

0x13a: Stack[-2] = 0
0x13b: Stack[-3] = 0
0x13c: PushEmpty(int, int)
0x13d: Push("d1q03IsKapella") // @poff=589
0x13e: @ GetVariable(Stack[-1], Stack[-2])
0x13f: Pop(1)
0x140: Push((int) 0)
0x141: Stack[-4] = Stack[-2] != Stack[-1]; Pop(1);
0x142: Return(); Pop(2)

