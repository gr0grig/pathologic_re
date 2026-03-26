GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	W:d1q03
	W:dt_house_1_04
	W:pt_butcher
	A:GetLocator
	W:Locator doesn't exist for qd1_03_butcher
	W:pers_butcher
	W:butcher_qd1_03.xml
	W:butcher_fail
	W:butcher_battle
	W:butcher_death
	W:d1q03IsKapella
	W:kapella_finish
	W:cleanup
	W:Can't retrieve diary root
	A:Find
	W:Can't find diary parent with id: 
	A:AddChild
	W:player_diary
	A:GetCategory
	W:Adding diary entry
// @pool_raw:640031007100300033000000640074005f0068006f007500730065005f0031005f00300034000000700074005f00620075007400630068006500720000004765744c6f6361746f72004c006f006300610074006f007200200064006f00650073006e0027007400200065007800690073007400200066006f00720020007100640031005f00300033005f006200750074006300680065007200000070006500720073005f006200750074006300680065007200000062007500740063006800650072005f007100640031005f00300033002e0078006d006c00000062007500740063006800650072005f006600610069006c00000062007500740063006800650072005f0062006100740074006c006500000062007500740063006800650072005f0064006500610074006800000064003100710030003300490073004b006100700065006c006c00610000006b006100700065006c006c0061005f00660069006e00690073006800000063006c00650061006e00750070000000430061006e0027007400200072006500740072006900650076006500200064006900610072007900200072006f006f007400000046696e6400430061006e00270074002000660069006e006400200064006900610072007900200070006100720065006e007400200077006900740068002000690064003a00200000004164644368696c640070006c0061007900650072005f0064006900610072007900000047657443617465676f72790041006400640069006e006700200064006900610072007900200065006e007400720079000000

Import:
	SetVariable (2 args)
	GetSceneByName (2 args)
	Trace (1 args)
	AddActor (6 args)
	GetVariable (2 args)
	RemoveActor (1 args)
	Trigger (2 args)
	GetGameTime (1 args)
	SetTimeEvent (2 args)
	Hold (0 args)
	self (1 args)
	GetDiaryRoot (1 args)
	SetDiarySection (1 args)
	CreateDiaryEntry (4 args)

RunOp = 0x1
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 0
		EVENT_26 Op = 0x1c Vars = (string)
		EVENT_9 Op = 0x8d Vars = (int, float)


0x0: Return(); Pop(0)

0x1: PushEmpty(object, bool, cvector, cvector, object, bool, cvector, cvector)
0x2: Push("d1q03") // @poff=0
0x3: Push((int) 1)
0x4: @ SetVariable(Stack[-2], Stack[-1])
0x5: Pop(2)
0x6: Push("dt_house_1_04") // @poff=12
0x7: @ GetSceneByName(Stack[-5], Stack[-1])
0x8: Pop(1)
0x9: Push("pt_butcher") // @poff=40
0xa: @@ GetLocator(Stack[-1], Stack[-4], Stack[-3], Stack[-2]); Obj=5 // @poff=62
0xb: Pop(1)
0xc: Pop(0); Push((bool) Stack[-3] == 0)
0xd: IF (Stack[-1] == 0) GOTO 0x12; Pop(1)

0xe: Push("Locator doesn't exist for qd1_03_butcher") // @poff=73
0xf: @ Trace(Stack[-1])
0x10: Pop(1)
0x11: GOTO 0x16

0x12: Push("pers_butcher") // @poff=155
0x13: Push("butcher_qd1_03.xml") // @poff=181
0x14: @ AddActor(Stack[-0]T, Stack[-2], Stack[-6], Stack[-4], Stack[-3], Stack[-1])
0x15: Pop(2)
0x16: PushEmpty(int)
0x17: Stack[-1] = (int) 1
0x18: Call 0x7a

0x19: Pop(1)
0x1a: Return(); Pop(8)

0x1b: Stack[-4] = 0
0x1c: PushEmpty(int, int)
0x1d: @ Trace(Stack[-3])
0x1e: Pop(0)
0x1f: Push("butcher_fail") // @poff=219
0x20: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x21: IF (Stack[-1] == 0) GOTO 0x29; Pop(1)

0x22: PushEmpty()
0x23: Call 0xe2

0x24: Pop(0)
0x25: PushEmpty()
0x26: Call 0x58

0x27: Pop(0)
0x28: GOTO 0x4f

0x29: Push("butcher_battle") // @poff=245
0x2a: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x2b: IF (Stack[-1] == 0) GOTO 0x31; Pop(1)

0x2c: Push("d1q03") // @poff=0
0x2d: Push((int) 2)
0x2e: @ SetVariable(Stack[-2], Stack[-1])
0x2f: Pop(2)
0x30: GOTO 0x4f

0x31: Push("butcher_death") // @poff=275
0x32: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x33: IF (Stack[-1] == 0) GOTO 0x47; Pop(1)

0x34: Push("d1q03IsKapella") // @poff=303
0x35: @ GetVariable(Stack[-1], Stack[-2])
0x36: Pop(1)
0x37: Push(Stack[-1])
0x38: IF (Stack[-1] == 0) GOTO 0x40; Pop(1)

0x39: PushEmpty()
0x3a: Call 0xc2

0x3b: Pop(0)
0x3c: PushEmpty()
0x3d: Call 0x58

0x3e: Pop(0)
0x3f: GOTO 0x46

0x40: PushEmpty()
0x41: Call 0xd2

0x42: Pop(0)
0x43: PushEmpty()
0x44: Call 0x50

0x45: Pop(0)
0x46: GOTO 0x4f

0x47: Push("kapella_finish") // @poff=333
0x48: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x49: IF (Stack[-1] == 0) GOTO 0x4f; Pop(1)

0x4a: @ RemoveActor(Stack[-0]T)
0x4b: Pop(0)
0x4c: PushEmpty()
0x4d: Call 0x50

0x4e: Pop(0)
0x4f: Return(); Pop(2)

0x50: Push("d1q03") // @poff=0
0x51: Push((int) 1000)
0x52: @ SetVariable(Stack[-2], Stack[-1])
0x53: Pop(2)
0x54: PushEmpty()
0x55: Call 0x6b

0x56: Pop(0)
0x57: Return(); Pop(0)

0x58: Push("d1q03") // @poff=0
0x59: Push((int) -1)
0x5a: @ SetVariable(Stack[-2], Stack[-1])
0x5b: Pop(2)
0x5c: PushEmpty()
0x5d: Call 0x6b

0x5e: Pop(0)
0x5f: Return(); Pop(0)

0x60: PushEmpty(int, int)
0x61: Push("d1q03") // @poff=0
0x62: @ GetVariable(Stack[-1], Stack[-2])
0x63: Pop(1)
0x64: Push((int) 1000)
0x65: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x66: IF (Stack[-1] == 0) GOTO 0x6a; Pop(1)

0x67: PushEmpty()
0x68: Call 0x58

0x69: Pop(0)
0x6a: Return(); Pop(2)

0x6b: EventDisable(26)
0x6c: PushEmpty()
0x6d: Call 0x0

0x6e: Pop(0)
0x6f: Pop(0); Push(( Stack[0 + Tasks[-1].StackPointer] != 0 )
0x70: IF (Stack[-1] == 0) GOTO 0x74; Pop(1)

0x71: Push("cleanup") // @poff=363
0x72: @ Trigger(Stack[-0]T, Stack[-1])
0x73: Pop(1)
0x74: PushEmpty(object)
0x75: Call 0x92

0x76: Pop(0)
0x77: @ RemoveActor(Stack[-1])
0x78: Pop(1)
0x79: Return(); Pop(0)

0x7a: PushEmpty(float, float)
0x7b: @ GetGameTime(Stack[-1])
0x7c: Pop(0)
0x7d: Push((int) 24)
0x7e: Pop(1); Push(Stack[-4] * Stack[-1]);
0x7f: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x80: IF (Stack[-1] == 0) GOTO 0x85; Pop(1)

0x81: PushEmpty()
0x82: Call 0x6b

0x83: Pop(0)
0x84: GOTO 0x8c

0x85: Push((int) 0)
0x86: Push((int) 24)
0x87: Pop(1); Push(Stack[-5] * Stack[-1]);
0x88: @ SetTimeEvent(Stack[-2], Stack[-1])
0x89: Pop(2)
0x8a: @ Hold()
0x8b: Pop(0)
0x8c: Return(); Pop(2)

0x8d: PushEmpty()
0x8e: PushEmpty()
0x8f: Call 0x60

0x90: Pop(0)
0x91: Return(); Pop(0)

0x92: PushEmpty(object, object)
0x93: @ self(Stack[-1])
0x94: Pop(0)
0x95: Stack[-1] = Stack[-3]
0x96: Return(); Pop(2)

0x97: Stack[-1] = 0
0x98: PushEmpty(object, object)
0x99: @ GetDiaryRoot(Stack[-1])
0x9a: Pop(0)
0x9b: Pop(0); Push((bool) Stack[-1] == 0)
0x9c: IF (Stack[-1] == 0) GOTO 0xa2; Pop(1)

0x9d: Push("Can't retrieve diary root") // @poff=379
0x9e: @ Trace(Stack[-1])
0x9f: Pop(1)
0xa0: Stack[-3] = (bool) 0
0xa1: Return(); Pop(2)

0xa2: Stack[-1] = Stack[-3]
0xa3: Return(); Pop(2)

0xa4: Stack[-1] = 0
0xa5: PushEmpty(object, object, int, object, object, int)
0xa6: PushEmpty(object)
0xa7: Call 0x98

0xa8: Stack[-1] = Stack[-4]
0xa9: Pop(1)
0xaa: @@ Find(Stack[-7], Stack[-2]); Obj=3 // @poff=431
0xab: Pop(0)
0xac: Pop(0); Push((bool) Stack[-2] == 0)
0xad: IF (Stack[-1] == 0) GOTO 0xb4; Pop(1)

0xae: Push("Can't find diary parent with id: ") // @poff=436
0xaf: Pop(1); Push(Stack[-1] + Stack[-8]);
0xb0: @ Trace(Stack[-1])
0xb1: Pop(1)
0xb2: Stack[-9] = (bool) 0
0xb3: Return(); Pop(6)

0xb4: @@ AddChild(Stack[-8]); Obj=2 // @poff=504
0xb5: Pop(0)
0xb6: Push("player_diary") // @poff=513
0xb7: Push((int) 1)
0xb8: @ SetVariable(Stack[-2], Stack[-1])
0xb9: Pop(2)
0xba: @@ GetCategory(Stack[-1]); Obj=8 // @poff=539
0xbb: Pop(0)
0xbc: @ SetDiarySection(Stack[-1])
0xbd: Pop(0)
0xbe: Stack[-9] = (bool) 0
0xbf: Return(); Pop(6)

0xc0: Stack[-2] = 0
0xc1: Stack[-3] = 0
0xc2: PushEmpty(object, object)
0xc3: Push("Adding diary entry") // @poff=551
0xc4: @ Trace(Stack[-1])
0xc5: Pop(1)
0xc6: Push((int) 39)
0xc7: Push((int) 2)
0xc8: Push((int) 12121)
0xc9: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xca: Pop(3)
0xcb: PushEmpty(bool, object, int)
0xcc: Stack[-4] = Stack[-2]
0xcd: Stack[-1] = (int) 37
0xce: Call 0xa5

0xcf: Pop(3)
0xd0: Return(); Pop(2)

0xd1: Stack[-1] = 0
0xd2: PushEmpty(object, object)
0xd3: Push("Adding diary entry") // @poff=551
0xd4: @ Trace(Stack[-1])
0xd5: Pop(1)
0xd6: Push((int) 40)
0xd7: Push((int) 2)
0xd8: Push((int) 12122)
0xd9: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xda: Pop(3)
0xdb: PushEmpty(bool, object, int)
0xdc: Stack[-4] = Stack[-2]
0xdd: Stack[-1] = (int) 37
0xde: Call 0xa5

0xdf: Pop(3)
0xe0: Return(); Pop(2)

0xe1: Stack[-1] = 0
0xe2: PushEmpty(object, object)
0xe3: Push("Adding diary entry") // @poff=551
0xe4: @ Trace(Stack[-1])
0xe5: Pop(1)
0xe6: Push((int) 42)
0xe7: Push((int) 2)
0xe8: Push((int) 12124)
0xe9: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xea: Pop(3)
0xeb: PushEmpty(bool, object, int)
0xec: Stack[-4] = Stack[-2]
0xed: Stack[-1] = (int) 37
0xee: Call 0xa5

0xef: Pop(3)
0xf0: Return(); Pop(2)

0xf1: Stack[-1] = 0
