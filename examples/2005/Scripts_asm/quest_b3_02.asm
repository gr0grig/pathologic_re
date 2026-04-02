GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	W:b3q02
	W:place_grabitel1
	W:warehouse_notkin@door1
	W:pt_b3q02_grabitel1_1
	W:pers_grabitel
	W:b3q02_grabitel1.xml
	A:add
	W:pt_b3q02_grabitel1_2
	W:remove_grabitel
	W:grabitel_attack
	A:size
	A:get
	A:GetActor
	A:Remove
	W:grabitel_dead
	A:IsDead
	W:place_grabitel2
	W:pt_b3q02_grabitel2_
	W:b3q02_grabitel2.xml
	W:fail
	W:completed
	A:clear
	W:b3q02Dead
	A:GetLocator
	W:Locator 
	W: doesn't exist
	A:AddStationaryActor
	W:Door 
	W: not found
	W:locked
	A:SetProperty
	W:Can't retrieve diary root
	A:Find
	W:Can't find diary parent with id: 
	A:AddChild
	A:GetCategory
// @pool_raw:62003300710030003200000070006c006100630065005f0067007200610062006900740065006c0031000000770061007200650068006f007500730065005f006e006f0074006b0069006e00400064006f006f00720031000000700074005f00620033007100300032005f0067007200610062006900740065006c0031005f003100000070006500720073005f0067007200610062006900740065006c000000620033007100300032005f0067007200610062006900740065006c0031002e0078006d006c00000061646400700074005f00620033007100300032005f0067007200610062006900740065006c0031005f0032000000720065006d006f00760065005f0067007200610062006900740065006c00000067007200610062006900740065006c005f00610074007400610063006b00000073697a6500676574004765744163746f720052656d6f76650067007200610062006900740065006c005f00640065006100640000004973446561640070006c006100630065005f0067007200610062006900740065006c0032000000700074005f00620033007100300032005f0067007200610062006900740065006c0032005f000000620033007100300032005f0067007200610062006900740065006c0032002e0078006d006c0000006600610069006c00000063006f006d0070006c0065007400650064000000636c6561720062003300710030003200440065006100640000004765744c6f6361746f72004c006f006300610074006f00720020000000200064006f00650073006e0027007400200065007800690073007400000041646453746174696f6e6172794163746f720044006f006f0072002000000020006e006f007400200066006f0075006e00640000006c006f0063006b0065006400000053657450726f706572747900430061006e0027007400200072006500740072006900650076006500200064006900610072007900200072006f006f007400000046696e6400430061006e00270074002000660069006e006400200064006900610072007900200070006100720065006e007400200077006900740068002000690064003a00200000004164644368696c640047657443617465676f727900

Import:
	SetVariable (2 args)
	Trace (1 args)
	GetMainOutdoorScene (1 args)
	Trigger (2 args)
	GetVariable (2 args)
	RemoveActor (1 args)
	GetGameTime (1 args)
	SetTimeEvent (2 args)
	Hold (0 args)
	self (1 args)
	CreateObjectVector (1 args)
	FindActor (2 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 0
		EVENT_26 Op = 0xd Vars = (string)
		EVENT_9 Op = 0xf3 Vars = (int, float)


0x0: Push("b3q02") // @poff=0
0x1: Push((int) 1)
0x2: @ SetVariable(Stack[-2], Stack[-1])
0x3: Pop(2)
0x4: PushEmpty(object)
0x5: Call2 0xfe

0x6: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x7: Pop(1)
0x8: PushEmpty(int)
0x9: Stack[-1] = (int) 3
0xa: Call2 0xe0

0xb: Pop(1)
0xc: Return(); Pop(0)

0xd: PushEmpty(object, bool, int, int, object, object, int, int, object, object, bool, object, int, object, bool, int, int, object, object, int, int, object, object, bool, object, int)
0xe: @ Trace(Stack[-27])
0xf: Pop(0)
0x10: Push("place_grabitel1") // @poff=12
0x11: Pop(1); Push((bool) Stack[-28] == Stack[-1])
0x12: IF (Stack[-1] == 0) GOTO 0x2e; Pop(1)

0x13: PushEmpty(string, bool)
0x14: Stack[-2] = "warehouse_notkin@door1" // @poff=44
0x15: Stack[-1] = (bool) 1
0x16: Call2 0x116

0x17: Pop(2)
0x18: @ GetMainOutdoorScene(Stack[-13])
0x19: Pop(0)
0x1a: PushEmpty(object, object, string, string, string)
0x1b: Stack[-18] = Stack[-4]
0x1c: Stack[-3] = "pt_b3q02_grabitel1_1" // @poff=90
0x1d: Stack[-2] = "pers_grabitel" // @poff=132
0x1e: Stack[-1] = "b3q02_grabitel1.xml" // @poff=160
0x1f: Call2 0x104

0x20: Pop(4)
0x21: @@@ add(Stack[-1]); Obj=0 // @poff=200
0x22: Pop(1)
0x23: PushEmpty(object, object, string, string, string)
0x24: Stack[-18] = Stack[-4]
0x25: Stack[-3] = "pt_b3q02_grabitel1_2" // @poff=204
0x26: Stack[-2] = "pers_grabitel" // @poff=132
0x27: Stack[-1] = "b3q02_grabitel1.xml" // @poff=160
0x28: Call2 0x104

0x29: Pop(4)
0x2a: @@@ add(Stack[-1]); Obj=0 // @poff=200
0x2b: Pop(1)
0x2c: Stack[-13] = 0
0x2d: GOTO 0x9f

0x2e: Push("remove_grabitel") // @poff=246
0x2f: Pop(1); Push((bool) Stack[-28] == Stack[-1])
0x30: IF (Stack[-1] == 0) GOTO 0x36; Pop(1)

0x31: PushEmpty(object)
0x32: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x33: Call2 0x127

0x34: Pop(1)
0x35: GOTO 0x9f

0x36: Push("grabitel_attack") // @poff=278
0x37: Pop(1); Push((bool) Stack[-28] == Stack[-1])
0x38: IF (Stack[-1] == 0) GOTO 0x59; Pop(1)

0x39: Stack[-12] = (bool) 0
0x3a: @@@ size(Stack[-11]); Obj=0 // @poff=310
0x3b: Pop(0)
0x3c: Stack[-10] = (int) 0
0x3d: Pop(0); Push((bool) Stack[-10] < Stack[-11])
0x3e: IF (Stack[-1] == 0) GOTO 0x53; Pop(1)

0x3f: @@@ get(Stack[-9], Stack[-10]); Obj=0 // @poff=315
0x40: Pop(0)
0x41: Push(Stack[-9])
0x42: IF (Stack[-1] == 0) GOTO 0x4f; Pop(1)

0x43: @@ GetActor(Stack[-8]); Obj=9 // @poff=319
0x44: Pop(0)
0x45: Push(Stack[-8])
0x46: IF (Stack[-1] == 0) GOTO 0x4c; Pop(1)

0x47: Push("attack") // @poff=296
0x48: @ Trigger(Stack[-9], Stack[-1])
0x49: Pop(1)
0x4a: Stack[-12] = (bool) 1
0x4b: GOTO 0x4e

0x4c: @@ Remove(); Obj=9 // @poff=328
0x4d: Pop(0)
0x4e: Stack[-8] = 0
0x4f: Stack[-9] = 0
0x50: Push((int) 1)
0x51: Stack[-11] = Stack[-11] + Stack[-1]; Pop(1);
0x52: GOTO 0x3d

0x53: Pop(0); Push((bool) Stack[-12] == 0)
0x54: IF (Stack[-1] == 0) GOTO 0x58; Pop(1)

0x55: PushEmpty()
0x56: Call2 0xcb

0x57: Pop(0)
0x58: GOTO 0x9f

0x59: Push("grabitel_dead") // @poff=335
0x5a: Pop(1); Push((bool) Stack[-28] == Stack[-1])
0x5b: IF (Stack[-1] == 0) GOTO 0x7a; Pop(1)

0x5c: @@@ size(Stack[-7]); Obj=0 // @poff=310
0x5d: Pop(0)
0x5e: Stack[-6] = (int) 0
0x5f: Pop(0); Push((bool) Stack[-6] < Stack[-7])
0x60: IF (Stack[-1] == 0) GOTO 0x76; Pop(1)

0x61: @@@ get(Stack[-5], Stack[-6]); Obj=0 // @poff=315
0x62: Pop(0)
0x63: Push(Stack[-5])
0x64: IF (Stack[-1] == 0) GOTO 0x72; Pop(1)

0x65: @@ GetActor(Stack[-4]); Obj=5 // @poff=319
0x66: Pop(0)
0x67: Push(Stack[-4])
0x68: IF (Stack[-1] == 0) GOTO 0x6f; Pop(1)

0x69: @@ IsDead(Stack[-3]); Obj=4 // @poff=363
0x6a: Pop(0)
0x6b: Pop(0); Push((bool) Stack[-3] == 0)
0x6c: IF (Stack[-1] == 0) GOTO 0x6e; Pop(1)

0x6d: Return(); Pop(26)

0x6e: GOTO 0x71

0x6f: @@ Remove(); Obj=5 // @poff=328
0x70: Pop(0)
0x71: Stack[-4] = 0
0x72: Stack[-5] = 0
0x73: Push((int) 1)
0x74: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x75: GOTO 0x5f

0x76: PushEmpty()
0x77: Call2 0xcb

0x78: Pop(0)
0x79: GOTO 0x9f

0x7a: Push("place_grabitel2") // @poff=370
0x7b: Pop(1); Push((bool) Stack[-28] == Stack[-1])
0x7c: IF (Stack[-1] == 0) GOTO 0x92; Pop(1)

0x7d: @ GetMainOutdoorScene(Stack[-2])
0x7e: Pop(0)
0x7f: Stack[-1] = (int) 1
0x80: Push((int) 4)
0x81: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x82: IF (Stack[-1] == 0) GOTO 0x90; Pop(1)

0x83: PushEmpty(object, object, string, string, string)
0x84: Stack[-7] = Stack[-4]
0x85: Push("pt_b3q02_grabitel2_") // @poff=402
0x86: Stack[-4] = Stack[-1] + Stack[-7]; Pop(1);
0x87: Stack[-2] = "pers_grabitel" // @poff=132
0x88: Stack[-1] = "b3q02_grabitel2.xml" // @poff=442
0x89: Call2 0x104

0x8a: Pop(4)
0x8b: @@@ add(Stack[-1]); Obj=0 // @poff=200
0x8c: Pop(1)
0x8d: Push((int) 1)
0x8e: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x8f: GOTO 0x80

0x90: Stack[-2] = 0
0x91: GOTO 0x9f

0x92: Push("fail") // @poff=482
0x93: Pop(1); Push((bool) Stack[-28] == Stack[-1])
0x94: IF (Stack[-1] == 0) GOTO 0x99; Pop(1)

0x95: PushEmpty()
0x96: Call2 0xab

0x97: Pop(0)
0x98: GOTO 0x9f

0x99: Push("completed") // @poff=492
0x9a: Pop(1); Push((bool) Stack[-28] == Stack[-1])
0x9b: IF (Stack[-1] == 0) GOTO 0x9f; Pop(1)

0x9c: PushEmpty()
0x9d: Call2 0xb3

0x9e: Pop(0)
0x9f: Return(); Pop(26)

0xa0: PushEmpty(int, int)
0xa1: Push("b3q02") // @poff=0
0xa2: @ GetVariable(Stack[-1], Stack[-2])
0xa3: Pop(1)
0xa4: Push((int) 1000)
0xa5: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0xa6: IF (Stack[-1] == 0) GOTO 0xaa; Pop(1)

0xa7: PushEmpty()
0xa8: Call2 0xab

0xa9: Pop(0)
0xaa: Return(); Pop(2)

0xab: Push("b3q02") // @poff=0
0xac: Push((int) -1)
0xad: @ SetVariable(Stack[-2], Stack[-1])
0xae: Pop(2)
0xaf: PushEmpty()
0xb0: Call2 0xbb

0xb1: Pop(0)
0xb2: Return(); Pop(0)

0xb3: Push("b3q02") // @poff=0
0xb4: Push((int) 1000)
0xb5: @ SetVariable(Stack[-2], Stack[-1])
0xb6: Pop(2)
0xb7: PushEmpty()
0xb8: Call2 0xbb

0xb9: Pop(0)
0xba: Return(); Pop(0)

0xbb: EventDisable(26)
0xbc: PushEmpty(object)
0xbd: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xbe: Call2 0x127

0xbf: Pop(1)
0xc0: PushEmpty(string, bool)
0xc1: Stack[-2] = "warehouse_notkin@door1" // @poff=44
0xc2: Stack[-1] = (bool) 0
0xc3: Call2 0x116

0xc4: Pop(2)
0xc5: PushEmpty(object)
0xc6: Call2 0xf8

0xc7: Pop(0)
0xc8: @ RemoveActor(Stack[-1])
0xc9: Pop(1)
0xca: Return(); Pop(0)

0xcb: PushEmpty(int, int)
0xcc: @@@ size(Stack[-1]); Obj=0 // @poff=310
0xcd: Pop(0)
0xce: Pop(0); Push((bool) Stack[-1] == 0)
0xcf: IF (Stack[-1] == 0) GOTO 0xd1; Pop(1)

0xd0: Return(); Pop(2)

0xd1: @@@ clear(); Obj=0 // @poff=512
0xd2: Pop(0)
0xd3: PushEmpty()
0xd4: Call2 0x13c

0xd5: Pop(0)
0xd6: PushEmpty(string, bool)
0xd7: Stack[-2] = "warehouse_notkin@door1" // @poff=44
0xd8: Stack[-1] = (bool) 0
0xd9: Call2 0x116

0xda: Pop(2)
0xdb: Push("b3q02Dead") // @poff=518
0xdc: Push((bool) 1)
0xdd: @ SetVariable(Stack[-2], Stack[-1])
0xde: Pop(2)
0xdf: Return(); Pop(2)

0xe0: PushEmpty(float, float)
0xe1: @ GetGameTime(Stack[-1])
0xe2: Pop(0)
0xe3: Push((int) 24)
0xe4: Pop(1); Push(Stack[-4] * Stack[-1]);
0xe5: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0xe6: IF (Stack[-1] == 0) GOTO 0xeb; Pop(1)

0xe7: PushEmpty()
0xe8: Call2 0xbb

0xe9: Pop(0)
0xea: GOTO 0xf2

0xeb: Push((int) 0)
0xec: Push((int) 24)
0xed: Pop(1); Push(Stack[-5] * Stack[-1]);
0xee: @ SetTimeEvent(Stack[-2], Stack[-1])
0xef: Pop(2)
0xf0: @ Hold()
0xf1: Pop(0)
0xf2: Return(); Pop(2)

0xf3: PushEmpty()
0xf4: PushEmpty()
0xf5: Call2 0xa0

0xf6: Pop(0)
0xf7: Return(); Pop(0)

0xf8: PushEmpty(object, object)
0xf9: @ self(Stack[-1])
0xfa: Pop(0)
0xfb: Stack[-1] = Stack[-3]
0xfc: Return(); Pop(2)

0xfd: Stack[-1] = 0
0xfe: PushEmpty(object, object)
0xff: @ CreateObjectVector(Stack[-1])
0x100: Pop(0)
0x101: Stack[-1] = Stack[-3]
0x102: Return(); Pop(2)

0x103: Stack[-1] = 0
0x104: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x105: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2]); Obj=12 // @poff=538
0x106: Pop(0)
0x107: Pop(0); Push((bool) Stack[-4] == 0)
0x108: IF (Stack[-1] == 0) GOTO 0x111; Pop(1)

0x109: Push("Locator ") // @poff=549
0x10a: Pop(1); Push(Stack[-1] + Stack[-12]);
0x10b: Push(" doesn't exist") // @poff=567
0x10c: Pop(2); Push(Stack[-2] + Stack[-1]);
0x10d: @ Trace(Stack[-1])
0x10e: Pop(1)
0x10f: Stack[-1] = 0
0x110: GOTO 0x113

0x111: @@ AddStationaryActor(Stack[-1], Stack[-3], Stack[-2], Stack[-10], Stack[-9]); Obj=12 // @poff=597
0x112: Pop(0)
0x113: Stack[-1] = Stack[-13]
0x114: Return(); Pop(8)

0x115: Stack[-1] = 0
0x116: PushEmpty(object, object)
0x117: @ FindActor(Stack[-1], Stack[-4])
0x118: Pop(0)
0x119: Pop(0); Push((bool) Stack[-1] == 0)
0x11a: IF (Stack[-1] == 0) GOTO 0x122; Pop(1)

0x11b: Push("Door ") // @poff=616
0x11c: Pop(1); Push(Stack[-1] + Stack[-5]);
0x11d: Push(" not found") // @poff=628
0x11e: Pop(2); Push(Stack[-2] + Stack[-1]);
0x11f: @ Trace(Stack[-1])
0x120: Pop(1)
0x121: GOTO 0x125

0x122: Push("locked") // @poff=650
0x123: @@ SetProperty(Stack[-1], Stack[-4]); Obj=2 // @poff=664
0x124: Pop(1)
0x125: Return(); Pop(2)

0x126: Stack[-1] = 0
0x127: PushEmpty(int, int, object, int, int, object)
0x128: Push(Stack[-7])
0x129: IF (Stack[-1] == 0) GOTO 0x13b; Pop(1)

0x12a: @@ size(Stack[-3]); Obj=7 // @poff=310
0x12b: Pop(0)
0x12c: Stack[-2] = (int) 0
0x12d: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0x12e: IF (Stack[-1] == 0) GOTO 0x139; Pop(1)

0x12f: @@ get(Stack[-1], Stack[-2]); Obj=7 // @poff=315
0x130: Pop(0)
0x131: Push(Stack[-1])
0x132: IF (Stack[-1] == 0) GOTO 0x135; Pop(1)

0x133: @@ Remove(); Obj=1 // @poff=328
0x134: Pop(0)
0x135: Stack[-1] = 0
0x136: Push((int) 1)
0x137: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x138: GOTO 0x12d

0x139: @@ clear(); Obj=7 // @poff=512
0x13a: Pop(0)
0x13b: Return(); Pop(6)

0x13c: PushEmpty(object, object)
0x13d: Push((int) 231)
0x13e: Push((int) 2)
0x13f: Push((int) 519659)
0x140: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x141: Pop(3)
0x142: PushEmpty(bool, object, int)
0x143: Stack[-4] = Stack[-2]
0x144: Stack[-1] = (int) 227
0x145: Call2 0x156

0x146: Pop(3)
0x147: Return(); Pop(2)

0x148: Stack[-1] = 0
0x149: PushEmpty(object, object)
0x14a: @ GetDiaryRoot(Stack[-1])
0x14b: Pop(0)
0x14c: Pop(0); Push((bool) Stack[-1] == 0)
0x14d: IF (Stack[-1] == 0) GOTO 0x153; Pop(1)

0x14e: Push("Can't retrieve diary root") // @poff=676
0x14f: @ Trace(Stack[-1])
0x150: Pop(1)
0x151: Stack[-3] = (bool) 0
0x152: Return(); Pop(2)

0x153: Stack[-1] = Stack[-3]
0x154: Return(); Pop(2)

0x155: Stack[-1] = 0
0x156: PushEmpty(object, object, int, object, object, int)
0x157: PushEmpty(object)
0x158: Call2 0x149

0x159: Stack[-1] = Stack[-4]
0x15a: Pop(1)
0x15b: @@ Find(Stack[-7], Stack[-2]); Obj=3 // @poff=728
0x15c: Pop(0)
0x15d: Pop(0); Push((bool) Stack[-2] == 0)
0x15e: IF (Stack[-1] == 0) GOTO 0x165; Pop(1)

0x15f: Push("Can't find diary parent with id: ") // @poff=733
0x160: Pop(1); Push(Stack[-1] + Stack[-8]);
0x161: @ Trace(Stack[-1])
0x162: Pop(1)
0x163: Stack[-9] = (bool) 0
0x164: Return(); Pop(6)

0x165: @@ AddChild(Stack[-8]); Obj=2 // @poff=801
0x166: Pop(0)
0x167: Push((int) 7)
0x168: @ SendWorldWndMessage(Stack[-1])
0x169: Pop(1)
0x16a: @@ GetCategory(Stack[-1]); Obj=8 // @poff=810
0x16b: Pop(0)
0x16c: @ SetDiarySection(Stack[-1])
0x16d: Pop(0)
0x16e: Stack[-9] = (bool) 0
0x16f: Return(); Pop(6)

0x170: Stack[-2] = 0
0x171: Stack[-3] = 0
