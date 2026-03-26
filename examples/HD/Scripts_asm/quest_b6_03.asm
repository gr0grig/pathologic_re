GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	W:init_grave
	W:crypt2
	W:pt_b6q03_diary
	W:scripted_container
	W:b6q03_item_diary.xml
	W:b6q03_light_fire
	W:light_fire.xml
	W:pt_b6q03_fire
	W:scripted
	W:pt_b6q03_agony1
	W:pers_worker
	W:agony1_man.xml
	W:pt_b6q03_agony2
	W:pers_woman
	W:agony1_woman.xml
	W:crypt2_load
	W:crypt2_unload
	W:pt_b6q03_bomber1
	W:pers_bomber
	W:b6q03_bomber.xml
	W:pt_b6q03_bomber2
	W:pt_b6q03_diseased1
	W:pers_vaxxabit
	W:vaxxabit_d.xml
	W:pt_b6q03_diseased2
	W:pt_b6q03_diseased3
	W:pers_vaxxabitka
	W:vaxxabitka_d.xml
	W:pt_b6q03_diseased4
	W:diary_taken
	W:explode
	W:fail
	W:completed
	W:b6q03
	W:cleanup
	A:GetLocator
	W:Locator 
	W: doesn't exist
	W:Can't retrieve diary root
	A:Find
	W:Can't find diary parent with id: 
	A:AddChild
	A:GetCategory
// @pool_raw:69006e00690074005f006700720061007600650000006300720079007000740032000000700074005f00620036007100300033005f00640069006100720079000000730063007200690070007400650064005f0063006f006e007400610069006e00650072000000620036007100300033005f006900740065006d005f00640069006100720079002e0078006d006c000000620036007100300033005f006c0069006700680074005f00660069007200650000006c0069006700680074005f0066006900720065002e0078006d006c000000700074005f00620036007100300033005f0066006900720065000000730063007200690070007400650064000000700074005f00620036007100300033005f00610067006f006e0079003100000070006500720073005f0077006f0072006b00650072000000610067006f006e00790031005f006d0061006e002e0078006d006c000000700074005f00620036007100300033005f00610067006f006e0079003200000070006500720073005f0077006f006d0061006e000000610067006f006e00790031005f0077006f006d0061006e002e0078006d006c0000006300720079007000740032005f006c006f006100640000006300720079007000740032005f0075006e006c006f00610064000000700074005f00620036007100300033005f0062006f006d006200650072003100000070006500720073005f0062006f006d006200650072000000620036007100300033005f0062006f006d006200650072002e0078006d006c000000700074005f00620036007100300033005f0062006f006d0062006500720032000000700074005f00620036007100300033005f00640069007300650061007300650064003100000070006500720073005f00760061007800780061006200690074000000760061007800780061006200690074005f0064002e0078006d006c000000700074005f00620036007100300033005f006400690073006500610073006500640032000000700074005f00620036007100300033005f00640069007300650061007300650064003300000070006500720073005f00760061007800780061006200690074006b0061000000760061007800780061006200690074006b0061005f0064002e0078006d006c000000700074005f00620036007100300033005f006400690073006500610073006500640034000000640069006100720079005f00740061006b0065006e0000006500780070006c006f006400650000006600610069006c00000063006f006d0070006c006500740065006400000062003600710030003300000063006c00650061006e007500700000004765744c6f6361746f72004c006f006300610074006f00720020000000200064006f00650073006e00270074002000650078006900730074000000430061006e0027007400200072006500740072006900650076006500200064006900610072007900200072006f006f007400000046696e6400430061006e00270074002000660069006e006400200064006900610072007900200070006100720065006e007400200077006900740068002000690064003a00200000004164644368696c640047657443617465676f727900

Import:
	Trace (1 args)
	GetSceneByName (2 args)
	GetMainOutdoorScene (1 args)
	AddActor (6 args)
	PlaySound (1 args)
	GetVariable (2 args)
	SetVariable (2 args)
	RemoveActor (1 args)
	Trigger (2 args)
	GetGameTime (1 args)
	SetTimeEvent (2 args)
	Hold (0 args)
	self (1 args)
	AddActorByType (6 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object, object, object, object, object, bool) Params = 0
		EVENT_26 Op = 0x5 Vars = (string)
		EVENT_9 Op = 0xd4 Vars = (int, float)


0x0: PushEmpty(int)
0x1: Stack[-1] = (int) 6
0x2: Call2 0xc1

0x3: Pop(1)
0x4: Return(); Pop(0)

0x5: PushEmpty(object, object, object, object)
0x6: @ Trace(Stack[-5])
0x7: Pop(0)
0x8: Push("init_grave") // @poff=0
0x9: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0xa: IF (Stack[-1] == 0) GOTO 0x38; Pop(1)

0xb: Push("crypt2") // @poff=22
0xc: @ GetSceneByName(Stack[-3], Stack[-1])
0xd: Pop(1)
0xe: PushEmpty(object, object, string, string, string)
0xf: Stack[-7] = Stack[-4]
0x10: Stack[-3] = "pt_b6q03_diary" // @poff=36
0x11: Stack[-2] = "scripted_container" // @poff=66
0x12: Stack[-1] = "b6q03_item_diary.xml" // @poff=104
0x13: Call2 0xf1

0x14: Stack[2 + Tasks[-1].StackPointer] = Stack[-5]
0x15: Pop(5)
0x16: @ GetMainOutdoorScene(Stack[-2])
0x17: Pop(0)
0x18: Push("b6q03_light_fire") // @poff=146
0x19: Push(CVector(0.0, 0.0, 0.0))
0x1a: Push(CVector(0.0, 0.0, 1.0))
0x1b: Push("light_fire.xml") // @poff=180
0x1c: @ AddActor(Stack[-0]T, Stack[-4], Stack[-6], Stack[-3], Stack[-2], Stack[-1])
0x1d: Pop(4)
0x1e: PushEmpty(object, object, string, string, string)
0x1f: Stack[-7] = Stack[-4]
0x20: Stack[-3] = "pt_b6q03_fire" // @poff=210
0x21: Stack[-2] = "scripted" // @poff=238
0x22: Stack[-1] = "fire.xml" // @poff=192
0x23: Call2 0xf1

0x24: Stack[1 + Tasks[-1].StackPointer] = Stack[-5]
0x25: Pop(5)
0x26: PushEmpty(object, object, string, string, string)
0x27: Stack[-7] = Stack[-4]
0x28: Stack[-3] = "pt_b6q03_agony1" // @poff=256
0x29: Stack[-2] = "pers_worker" // @poff=288
0x2a: Stack[-1] = "agony1_man.xml" // @poff=312
0x2b: Call2 0xdf

0x2c: Stack[3 + Tasks[-1].StackPointer] = Stack[-5]
0x2d: Pop(5)
0x2e: PushEmpty(object, object, string, string, string)
0x2f: Stack[-7] = Stack[-4]
0x30: Stack[-3] = "pt_b6q03_agony2" // @poff=342
0x31: Stack[-2] = "pers_woman" // @poff=374
0x32: Stack[-1] = "agony1_woman.xml" // @poff=396
0x33: Call2 0xdf

0x34: Stack[4 + Tasks[-1].StackPointer] = Stack[-5]
0x35: Pop(5)
0x36: Stack[-2] = 0
0x37: GOTO 0x87

0x38: Push("crypt2_load") // @poff=430
0x39: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x3a: IF (Stack[-1] == 0) GOTO 0x3c; Pop(1)

0x3b: GOTO 0x87

0x3c: Push("crypt2_unload") // @poff=454
0x3d: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x3e: IF (Stack[-1] == 0) GOTO 0x70; Pop(1)

0x3f: Pop(0); Push((bool) Stack[5 + Tasks[-1].StackPointer] == 0)
0x40: IF (Stack[-1] == 0) GOTO 0x6f; Pop(1)

0x41: Stack[5 + Tasks[-1].StackPointer] = (bool)1
0x42: @ GetMainOutdoorScene(Stack[-1])
0x43: Pop(0)
0x44: PushEmpty(object, object, string, string, string)
0x45: Stack[-6] = Stack[-4]
0x46: Stack[-3] = "pt_b6q03_bomber1" // @poff=482
0x47: Stack[-2] = "pers_bomber" // @poff=516
0x48: Stack[-1] = "b6q03_bomber.xml" // @poff=540
0x49: Call2 0xdf

0x4a: Pop(5)
0x4b: PushEmpty(object, object, string, string, string)
0x4c: Stack[-6] = Stack[-4]
0x4d: Stack[-3] = "pt_b6q03_bomber2" // @poff=574
0x4e: Stack[-2] = "pers_bomber" // @poff=516
0x4f: Stack[-1] = "b6q03_bomber.xml" // @poff=540
0x50: Call2 0xdf

0x51: Pop(5)
0x52: PushEmpty(object, object, string, string, string)
0x53: Stack[-6] = Stack[-4]
0x54: Stack[-3] = "pt_b6q03_diseased1" // @poff=608
0x55: Stack[-2] = "pers_vaxxabit" // @poff=646
0x56: Stack[-1] = "vaxxabit_d.xml" // @poff=674
0x57: Call2 0xdf

0x58: Pop(5)
0x59: PushEmpty(object, object, string, string, string)
0x5a: Stack[-6] = Stack[-4]
0x5b: Stack[-3] = "pt_b6q03_diseased2" // @poff=704
0x5c: Stack[-2] = "pers_vaxxabit" // @poff=646
0x5d: Stack[-1] = "vaxxabit_d.xml" // @poff=674
0x5e: Call2 0xdf

0x5f: Pop(5)
0x60: PushEmpty(object, object, string, string, string)
0x61: Stack[-6] = Stack[-4]
0x62: Stack[-3] = "pt_b6q03_diseased3" // @poff=742
0x63: Stack[-2] = "pers_vaxxabitka" // @poff=780
0x64: Stack[-1] = "vaxxabitka_d.xml" // @poff=812
0x65: Call2 0xdf

0x66: Pop(5)
0x67: PushEmpty(object, object, string, string, string)
0x68: Stack[-6] = Stack[-4]
0x69: Stack[-3] = "pt_b6q03_diseased4" // @poff=846
0x6a: Stack[-2] = "pers_vaxxabitka" // @poff=780
0x6b: Stack[-1] = "vaxxabitka_d.xml" // @poff=812
0x6c: Call2 0xdf

0x6d: Pop(5)
0x6e: Stack[-1] = 0
0x6f: GOTO 0x87

0x70: Push("diary_taken") // @poff=884
0x71: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x72: IF (Stack[-1] == 0) GOTO 0x7a; Pop(1)

0x73: PushEmpty()
0x74: Call2 0x103

0x75: Pop(0)
0x76: Push("explode") // @poff=908
0x77: @ PlaySound(Stack[-1])
0x78: Pop(1)
0x79: GOTO 0x87

0x7a: Push("fail") // @poff=924
0x7b: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x7c: IF (Stack[-1] == 0) GOTO 0x81; Pop(1)

0x7d: PushEmpty()
0x7e: Call2 0x93

0x7f: Pop(0)
0x80: GOTO 0x87

0x81: Push("completed") // @poff=934
0x82: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x83: IF (Stack[-1] == 0) GOTO 0x87; Pop(1)

0x84: PushEmpty()
0x85: Call2 0x9b

0x86: Pop(0)
0x87: Return(); Pop(4)

0x88: PushEmpty(int, int)
0x89: Push("b6q03") // @poff=954
0x8a: @ GetVariable(Stack[-1], Stack[-2])
0x8b: Pop(1)
0x8c: Push((int) 1000)
0x8d: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x8e: IF (Stack[-1] == 0) GOTO 0x92; Pop(1)

0x8f: PushEmpty()
0x90: Call2 0x93

0x91: Pop(0)
0x92: Return(); Pop(2)

0x93: Push("b6q03") // @poff=954
0x94: Push((int) -1)
0x95: @ SetVariable(Stack[-2], Stack[-1])
0x96: Pop(2)
0x97: PushEmpty()
0x98: Call2 0xa3

0x99: Pop(0)
0x9a: Return(); Pop(0)

0x9b: Push("b6q03") // @poff=954
0x9c: Push((int) 1000)
0x9d: @ SetVariable(Stack[-2], Stack[-1])
0x9e: Pop(2)
0x9f: PushEmpty()
0xa0: Call2 0xa3

0xa1: Pop(0)
0xa2: Return(); Pop(0)

0xa3: EventDisable(26)
0xa4: Push( Stack[1 + Tasks[-1].StackPointer] )
0xa5: IF (Stack[-1] == 0) GOTO 0xa8; Pop(1)

0xa6: @ RemoveActor(Stack[-1]T)
0xa7: Pop(0)
0xa8: Push( Stack[0 + Tasks[-1].StackPointer] )
0xa9: IF (Stack[-1] == 0) GOTO 0xac; Pop(1)

0xaa: @ RemoveActor(Stack[-0]T)
0xab: Pop(0)
0xac: Push( Stack[2 + Tasks[-1].StackPointer] )
0xad: IF (Stack[-1] == 0) GOTO 0xb1; Pop(1)

0xae: Push("cleanup") // @poff=966
0xaf: @ Trigger(Stack[-2]T, Stack[-1])
0xb0: Pop(1)
0xb1: Push( Stack[3 + Tasks[-1].StackPointer] )
0xb2: IF (Stack[-1] == 0) GOTO 0xb6; Pop(1)

0xb3: Push("cleanup") // @poff=966
0xb4: @ Trigger(Stack[-3]T, Stack[-1])
0xb5: Pop(1)
0xb6: Push( Stack[4 + Tasks[-1].StackPointer] )
0xb7: IF (Stack[-1] == 0) GOTO 0xbb; Pop(1)

0xb8: Push("cleanup") // @poff=966
0xb9: @ Trigger(Stack[-4]T, Stack[-1])
0xba: Pop(1)
0xbb: PushEmpty(object)
0xbc: Call2 0xd9

0xbd: Pop(0)
0xbe: @ RemoveActor(Stack[-1])
0xbf: Pop(1)
0xc0: Return(); Pop(0)

0xc1: PushEmpty(float, float)
0xc2: @ GetGameTime(Stack[-1])
0xc3: Pop(0)
0xc4: Push((int) 24)
0xc5: Pop(1); Push(Stack[-4] * Stack[-1]);
0xc6: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0xc7: IF (Stack[-1] == 0) GOTO 0xcc; Pop(1)

0xc8: PushEmpty()
0xc9: Call2 0xa3

0xca: Pop(0)
0xcb: GOTO 0xd3

0xcc: Push((int) 0)
0xcd: Push((int) 24)
0xce: Pop(1); Push(Stack[-5] * Stack[-1]);
0xcf: @ SetTimeEvent(Stack[-2], Stack[-1])
0xd0: Pop(2)
0xd1: @ Hold()
0xd2: Pop(0)
0xd3: Return(); Pop(2)

0xd4: PushEmpty()
0xd5: PushEmpty()
0xd6: Call2 0x88

0xd7: Pop(0)
0xd8: Return(); Pop(0)

0xd9: PushEmpty(object, object)
0xda: @ self(Stack[-1])
0xdb: Pop(0)
0xdc: Stack[-1] = Stack[-3]
0xdd: Return(); Pop(2)

0xde: Stack[-1] = 0
0xdf: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0xe0: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2]); Obj=12 // @poff=982
0xe1: Pop(0)
0xe2: Pop(0); Push((bool) Stack[-4] == 0)
0xe3: IF (Stack[-1] == 0) GOTO 0xec; Pop(1)

0xe4: Push("Locator ") // @poff=993
0xe5: Pop(1); Push(Stack[-1] + Stack[-12]);
0xe6: Push(" doesn't exist") // @poff=1011
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
0xf1: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0xf2: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2]); Obj=12 // @poff=982
0xf3: Pop(0)
0xf4: Pop(0); Push((bool) Stack[-4] == 0)
0xf5: IF (Stack[-1] == 0) GOTO 0xfe; Pop(1)

0xf6: Push("Locator ") // @poff=993
0xf7: Pop(1); Push(Stack[-1] + Stack[-12]);
0xf8: Push(" doesn't exist") // @poff=1011
0xf9: Pop(2); Push(Stack[-2] + Stack[-1]);
0xfa: @ Trace(Stack[-1])
0xfb: Pop(1)
0xfc: Stack[-1] = 0
0xfd: GOTO 0x100

0xfe: @ AddActorByType(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0xff: Pop(0)
0x100: Stack[-1] = Stack[-13]
0x101: Return(); Pop(8)

0x102: Stack[-1] = 0
0x103: PushEmpty(object, object)
0x104: Push((int) 278)
0x105: Push((int) 2)
0x106: Push((int) 521339)
0x107: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x108: Pop(3)
0x109: PushEmpty(bool, object, int)
0x10a: Stack[-4] = Stack[-2]
0x10b: Stack[-1] = (int) 276
0x10c: Call2 0x11d

0x10d: Pop(3)
0x10e: Return(); Pop(2)

0x10f: Stack[-1] = 0
0x110: PushEmpty(object, object)
0x111: @ GetDiaryRoot(Stack[-1])
0x112: Pop(0)
0x113: Pop(0); Push((bool) Stack[-1] == 0)
0x114: IF (Stack[-1] == 0) GOTO 0x11a; Pop(1)

0x115: Push("Can't retrieve diary root") // @poff=1041
0x116: @ Trace(Stack[-1])
0x117: Pop(1)
0x118: Stack[-3] = (bool) 0
0x119: Return(); Pop(2)

0x11a: Stack[-1] = Stack[-3]
0x11b: Return(); Pop(2)

0x11c: Stack[-1] = 0
0x11d: PushEmpty(object, object, int, object, object, int)
0x11e: PushEmpty(object)
0x11f: Call2 0x110

0x120: Stack[-1] = Stack[-4]
0x121: Pop(1)
0x122: @@ Find(Stack[-7], Stack[-2]); Obj=3 // @poff=1093
0x123: Pop(0)
0x124: Pop(0); Push((bool) Stack[-2] == 0)
0x125: IF (Stack[-1] == 0) GOTO 0x12c; Pop(1)

0x126: Push("Can't find diary parent with id: ") // @poff=1098
0x127: Pop(1); Push(Stack[-1] + Stack[-8]);
0x128: @ Trace(Stack[-1])
0x129: Pop(1)
0x12a: Stack[-9] = (bool) 0
0x12b: Return(); Pop(6)

0x12c: @@ AddChild(Stack[-8]); Obj=2 // @poff=1166
0x12d: Pop(0)
0x12e: Push((int) 7)
0x12f: @ SendWorldWndMessage(Stack[-1])
0x130: Pop(1)
0x131: @@ GetCategory(Stack[-1]); Obj=8 // @poff=1175
0x132: Pop(0)
0x133: @ SetDiarySection(Stack[-1])
0x134: Pop(0)
0x135: Stack[-9] = (bool) 0
0x136: Return(); Pop(6)

0x137: Stack[-2] = 0
0x138: Stack[-3] = 0
