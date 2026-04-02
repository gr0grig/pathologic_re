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
	W:d1q03IsKapella
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
// @pool_raw:6400310071003000330000006f007300700069006e0061005f006b006100620061006b000000700074005f00640031007100300034005f006200750074006300680065007200000070006500720073005f0062007500740063006800650072000000640031007100300033005f0062007500740063006800650072002e0078006d006c0000006f007300700069006e0061005f006b006100620061006b00400064006f006f0072003100000075006e006c006f0063006b005f006200750074006300680065007200000062007500740063006800650072005f006600610069006c00000062007500740063006800650072005f0062006100740074006c006500000062007500740063006800650072005f0064006500610074006800000064003100710030003300490073004b006100700065006c006c00610000006500760061005f00660069006e00690073006800000063006c00650061006e007500700000004765744c6f6361746f72004c006f006300610074006f00720020000000200064006f00650073006e0027007400200065007800690073007400000044006f006f0072002000000020006e006f007400200066006f0075006e00640000006c006f0063006b0065006400000053657450726f706572747900430061006e0027007400200072006500740072006900650076006500200064006900610072007900200072006f006f007400000046696e6400430061006e00270074002000660069006e006400200064006900610072007900200070006100720065006e007400200077006900740068002000690064003a00200000004164644368696c640047657443617465676f727900

Import:
	SetVariable (2 args)
	GetSceneByName (2 args)
	Trace (1 args)
	GetVariable (2 args)
	RemoveActor (1 args)
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
		EVENT_9 Op = 0x97 Vars = (int, float)


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
0xd: Call2 0xa2

0xe: Stack[0 + Tasks[-1].StackPointer] = Stack[-5]
0xf: Pop(5)
0x10: PushEmpty(string, bool)
0x11: Stack[-2] = "ospina_kabak@door1" // @poff=134
0x12: Stack[-1] = (bool) 1
0x13: Call2 0xb4

0x14: Pop(2)
0x15: PushEmpty(int)
0x16: Stack[-1] = (int) 1
0x17: Call2 0x84

0x18: Pop(1)
0x19: Return(); Pop(2)

0x1a: Stack[-1] = 0
0x1b: PushEmpty(int, int)
0x1c: @ Trace(Stack[-3])
0x1d: Pop(0)
0x1e: Push("unlock_butcher") // @poff=172
0x1f: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x20: IF (Stack[-1] == 0) GOTO 0x27; Pop(1)

0x21: PushEmpty(string, bool)
0x22: Stack[-2] = "ospina_kabak@door1" // @poff=134
0x23: Stack[-1] = (bool) 0
0x24: Call2 0xb4

0x25: Pop(2)
0x26: GOTO 0x57

0x27: Push("butcher_fail") // @poff=202
0x28: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x29: IF (Stack[-1] == 0) GOTO 0x31; Pop(1)

0x2a: PushEmpty()
0x2b: Call2 0xdf

0x2c: Pop(0)
0x2d: PushEmpty()
0x2e: Call2 0x60

0x2f: Pop(0)
0x30: GOTO 0x57

0x31: Push("butcher_battle") // @poff=228
0x32: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x33: IF (Stack[-1] == 0) GOTO 0x39; Pop(1)

0x34: Push("d1q03") // @poff=0
0x35: Push((int) 2)
0x36: @ SetVariable(Stack[-2], Stack[-1])
0x37: Pop(2)
0x38: GOTO 0x57

0x39: Push("butcher_death") // @poff=258
0x3a: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x3b: IF (Stack[-1] == 0) GOTO 0x4f; Pop(1)

0x3c: Push("d1q03IsKapella") // @poff=286
0x3d: @ GetVariable(Stack[-1], Stack[-2])
0x3e: Pop(1)
0x3f: Push(Stack[-1])
0x40: IF (Stack[-1] == 0) GOTO 0x48; Pop(1)

0x41: PushEmpty()
0x42: Call2 0xc5

0x43: Pop(0)
0x44: PushEmpty()
0x45: Call2 0x60

0x46: Pop(0)
0x47: GOTO 0x4e

0x48: PushEmpty()
0x49: Call2 0xd2

0x4a: Pop(0)
0x4b: PushEmpty()
0x4c: Call2 0x58

0x4d: Pop(0)
0x4e: GOTO 0x57

0x4f: Push("eva_finish") // @poff=316
0x50: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x51: IF (Stack[-1] == 0) GOTO 0x57; Pop(1)

0x52: @ RemoveActor(Stack[-0]T)
0x53: Pop(0)
0x54: PushEmpty()
0x55: Call2 0x58

0x56: Pop(0)
0x57: Return(); Pop(2)

0x58: Push("d1q03") // @poff=0
0x59: Push((int) 1000)
0x5a: @ SetVariable(Stack[-2], Stack[-1])
0x5b: Pop(2)
0x5c: PushEmpty()
0x5d: Call2 0x73

0x5e: Pop(0)
0x5f: Return(); Pop(0)

0x60: Push("d1q03") // @poff=0
0x61: Push((int) -1)
0x62: @ SetVariable(Stack[-2], Stack[-1])
0x63: Pop(2)
0x64: PushEmpty()
0x65: Call2 0x73

0x66: Pop(0)
0x67: Return(); Pop(0)

0x68: PushEmpty(int, int)
0x69: Push("d1q03") // @poff=0
0x6a: @ GetVariable(Stack[-1], Stack[-2])
0x6b: Pop(1)
0x6c: Push((int) 1000)
0x6d: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x6e: IF (Stack[-1] == 0) GOTO 0x72; Pop(1)

0x6f: PushEmpty()
0x70: Call2 0x60

0x71: Pop(0)
0x72: Return(); Pop(2)

0x73: EventDisable(26)
0x74: Push( Stack[0 + Tasks[-1].StackPointer] )
0x75: IF (Stack[-1] == 0) GOTO 0x79; Pop(1)

0x76: Push("cleanup") // @poff=338
0x77: @ Trigger(Stack[-0]T, Stack[-1])
0x78: Pop(1)
0x79: PushEmpty(string, bool)
0x7a: Stack[-2] = "ospina_kabak@door1" // @poff=134
0x7b: Stack[-1] = (bool) 0
0x7c: Call2 0xb4

0x7d: Pop(2)
0x7e: PushEmpty(object)
0x7f: Call2 0x9c

0x80: Pop(0)
0x81: @ RemoveActor(Stack[-1])
0x82: Pop(1)
0x83: Return(); Pop(0)

0x84: PushEmpty(float, float)
0x85: @ GetGameTime(Stack[-1])
0x86: Pop(0)
0x87: Push((int) 24)
0x88: Pop(1); Push(Stack[-4] * Stack[-1]);
0x89: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x8a: IF (Stack[-1] == 0) GOTO 0x8f; Pop(1)

0x8b: PushEmpty()
0x8c: Call2 0x73

0x8d: Pop(0)
0x8e: GOTO 0x96

0x8f: Push((int) 0)
0x90: Push((int) 24)
0x91: Pop(1); Push(Stack[-5] * Stack[-1]);
0x92: @ SetTimeEvent(Stack[-2], Stack[-1])
0x93: Pop(2)
0x94: @ Hold()
0x95: Pop(0)
0x96: Return(); Pop(2)

0x97: PushEmpty()
0x98: PushEmpty()
0x99: Call2 0x68

0x9a: Pop(0)
0x9b: Return(); Pop(0)

0x9c: PushEmpty(object, object)
0x9d: @ self(Stack[-1])
0x9e: Pop(0)
0x9f: Stack[-1] = Stack[-3]
0xa0: Return(); Pop(2)

0xa1: Stack[-1] = 0
0xa2: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0xa3: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2]); Obj=12 // @poff=354
0xa4: Pop(0)
0xa5: Pop(0); Push((bool) Stack[-4] == 0)
0xa6: IF (Stack[-1] == 0) GOTO 0xaf; Pop(1)

0xa7: Push("Locator ") // @poff=365
0xa8: Pop(1); Push(Stack[-1] + Stack[-12]);
0xa9: Push(" doesn't exist") // @poff=383
0xaa: Pop(2); Push(Stack[-2] + Stack[-1]);
0xab: @ Trace(Stack[-1])
0xac: Pop(1)
0xad: Stack[-1] = 0
0xae: GOTO 0xb1

0xaf: @ AddActor(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0xb0: Pop(0)
0xb1: Stack[-1] = Stack[-13]
0xb2: Return(); Pop(8)

0xb3: Stack[-1] = 0
0xb4: PushEmpty(object, object)
0xb5: @ FindActor(Stack[-1], Stack[-4])
0xb6: Pop(0)
0xb7: Pop(0); Push((bool) Stack[-1] == 0)
0xb8: IF (Stack[-1] == 0) GOTO 0xc0; Pop(1)

0xb9: Push("Door ") // @poff=413
0xba: Pop(1); Push(Stack[-1] + Stack[-5]);
0xbb: Push(" not found") // @poff=425
0xbc: Pop(2); Push(Stack[-2] + Stack[-1]);
0xbd: @ Trace(Stack[-1])
0xbe: Pop(1)
0xbf: GOTO 0xc3

0xc0: Push("locked") // @poff=447
0xc1: @@ SetProperty(Stack[-1], Stack[-4]); Obj=2 // @poff=461
0xc2: Pop(1)
0xc3: Return(); Pop(2)

0xc4: Stack[-1] = 0
0xc5: PushEmpty(object, object)
0xc6: Push((int) 39)
0xc7: Push((int) 2)
0xc8: Push((int) 512121)
0xc9: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xca: Pop(3)
0xcb: PushEmpty(bool, object, int)
0xcc: Stack[-4] = Stack[-2]
0xcd: Stack[-1] = (int) 37
0xce: Call2 0xf9

0xcf: Pop(3)
0xd0: Return(); Pop(2)

0xd1: Stack[-1] = 0
0xd2: PushEmpty(object, object)
0xd3: Push((int) 40)
0xd4: Push((int) 2)
0xd5: Push((int) 512122)
0xd6: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xd7: Pop(3)
0xd8: PushEmpty(bool, object, int)
0xd9: Stack[-4] = Stack[-2]
0xda: Stack[-1] = (int) 37
0xdb: Call2 0xf9

0xdc: Pop(3)
0xdd: Return(); Pop(2)

0xde: Stack[-1] = 0
0xdf: PushEmpty(object, object)
0xe0: Push((int) 42)
0xe1: Push((int) 2)
0xe2: Push((int) 512124)
0xe3: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xe4: Pop(3)
0xe5: PushEmpty(bool, object, int)
0xe6: Stack[-4] = Stack[-2]
0xe7: Stack[-1] = (int) 37
0xe8: Call2 0xf9

0xe9: Pop(3)
0xea: Return(); Pop(2)

0xeb: Stack[-1] = 0
0xec: PushEmpty(object, object)
0xed: @ GetDiaryRoot(Stack[-1])
0xee: Pop(0)
0xef: Pop(0); Push((bool) Stack[-1] == 0)
0xf0: IF (Stack[-1] == 0) GOTO 0xf6; Pop(1)

0xf1: Push("Can't retrieve diary root") // @poff=473
0xf2: @ Trace(Stack[-1])
0xf3: Pop(1)
0xf4: Stack[-3] = (bool) 0
0xf5: Return(); Pop(2)

0xf6: Stack[-1] = Stack[-3]
0xf7: Return(); Pop(2)

0xf8: Stack[-1] = 0
0xf9: PushEmpty(object, object, int, object, object, int)
0xfa: PushEmpty(object)
0xfb: Call2 0xec

0xfc: Stack[-1] = Stack[-4]
0xfd: Pop(1)
0xfe: @@ Find(Stack[-7], Stack[-2]); Obj=3 // @poff=525
0xff: Pop(0)
0x100: Pop(0); Push((bool) Stack[-2] == 0)
0x101: IF (Stack[-1] == 0) GOTO 0x108; Pop(1)

0x102: Push("Can't find diary parent with id: ") // @poff=530
0x103: Pop(1); Push(Stack[-1] + Stack[-8]);
0x104: @ Trace(Stack[-1])
0x105: Pop(1)
0x106: Stack[-9] = (bool) 0
0x107: Return(); Pop(6)

0x108: @@ AddChild(Stack[-8]); Obj=2 // @poff=598
0x109: Pop(0)
0x10a: Push((int) 7)
0x10b: @ SendWorldWndMessage(Stack[-1])
0x10c: Pop(1)
0x10d: @@ GetCategory(Stack[-1]); Obj=8 // @poff=607
0x10e: Pop(0)
0x10f: @ SetDiarySection(Stack[-1])
0x110: Pop(0)
0x111: Stack[-9] = (bool) 0
0x112: Return(); Pop(6)

0x113: Stack[-2] = 0
0x114: Stack[-3] = 0
