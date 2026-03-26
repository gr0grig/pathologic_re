GlobalVarCount = 0

Strings:
	W:d6q03
	W:completed
	W:fail
	W:place_albinos
	W:pt_d6q03_albinos
	W:pers_albinos
	W:d6q03_albinos.xml
	W:albinos_retreated
	W:d6q03AlbinosFlee
	A:Remove
	W:albinos_dead
	W:d6q03AlbinosKilled
	A:GetLocator
	W:Locator 
	W: doesn't exist
	A:AddStationaryActor
	W:Can't retrieve diary root
	A:Find
	W:Can't find diary parent with id: 
	A:AddChild
	A:GetCategory
// @pool_raw:64003600710030003300000063006f006d0070006c00650074006500640000006600610069006c00000070006c006100630065005f0061006c00620069006e006f0073000000700074005f00640036007100300033005f0061006c00620069006e006f007300000070006500720073005f0061006c00620069006e006f0073000000640036007100300033005f0061006c00620069006e006f0073002e0078006d006c00000061006c00620069006e006f0073005f0072006500740072006500610074006500640000006400360071003000330041006c00620069006e006f00730046006c0065006500000052656d6f76650061006c00620069006e006f0073005f00640065006100640000006400360071003000330041006c00620069006e006f0073004b0069006c006c006500640000004765744c6f6361746f72004c006f006300610074006f00720020000000200064006f00650073006e0027007400200065007800690073007400000041646453746174696f6e6172794163746f7200430061006e0027007400200072006500740072006900650076006500200064006900610072007900200072006f006f007400000046696e6400430061006e00270074002000660069006e006400200064006900610072007900200070006100720065006e007400200077006900740068002000690064003a00200000004164644368696c640047657443617465676f727900

Import:
	SetVariable (2 args)
	Trace (1 args)
	GetMainOutdoorScene (1 args)
	GetVariable (2 args)
	RemoveActor (1 args)
	GetGameTime (1 args)
	SetTimeEvent (2 args)
	Hold (0 args)
	self (1 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 0
		EVENT_26 Op = 0x9 Vars = (string)
		EVENT_9 Op = 0x87 Vars = (int, float)


0x0: Push("d6q03") // @poff=0
0x1: Push((int) 1)
0x2: @ SetVariable(Stack[-2], Stack[-1])
0x3: Pop(2)
0x4: PushEmpty(int)
0x5: Stack[-1] = (int) 6
0x6: Call2 0x74

0x7: Pop(1)
0x8: Return(); Pop(0)

0x9: PushEmpty(object, object)
0xa: @ Trace(Stack[-3])
0xb: Pop(0)
0xc: Push("completed") // @poff=12
0xd: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xe: IF (Stack[-1] == 0) GOTO 0x13; Pop(1)

0xf: PushEmpty()
0x10: Call2 0x53

0x11: Pop(0)
0x12: GOTO 0x3f

0x13: Push("fail") // @poff=32
0x14: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x15: IF (Stack[-1] == 0) GOTO 0x1a; Pop(1)

0x16: PushEmpty()
0x17: Call2 0x4b

0x18: Pop(0)
0x19: GOTO 0x3f

0x1a: Push("place_albinos") // @poff=42
0x1b: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1c: IF (Stack[-1] == 0) GOTO 0x29; Pop(1)

0x1d: @ GetMainOutdoorScene(Stack[-1])
0x1e: Pop(0)
0x1f: PushEmpty(object, object, string, string, string)
0x20: Stack[-6] = Stack[-4]
0x21: Stack[-3] = "pt_d6q03_albinos" // @poff=70
0x22: Stack[-2] = "pers_albinos" // @poff=104
0x23: Stack[-1] = "d6q03_albinos.xml" // @poff=130
0x24: Call2 0x92

0x25: Stack[0 + Tasks[-1].StackPointer] = Stack[-5]
0x26: Pop(5)
0x27: Stack[-1] = 0
0x28: GOTO 0x3f

0x29: Push("albinos_retreated") // @poff=166
0x2a: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x2b: IF (Stack[-1] == 0) GOTO 0x33; Pop(1)

0x2c: Push("d6q03AlbinosFlee") // @poff=202
0x2d: Push((int) 1)
0x2e: @ SetVariable(Stack[-2], Stack[-1])
0x2f: Pop(2)
0x30: @@@ Remove(); Obj=0 // @poff=236
0x31: Pop(0)
0x32: GOTO 0x3f

0x33: Push("albinos_dead") // @poff=243
0x34: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x35: IF (Stack[-1] == 0) GOTO 0x3f; Pop(1)

0x36: Push("d6q03AlbinosKilled") // @poff=269
0x37: Push((int) 1)
0x38: @ SetVariable(Stack[-2], Stack[-1])
0x39: Pop(2)
0x3a: PushEmpty()
0x3b: Call2 0xa4

0x3c: Pop(0)
0x3d: @@@ Remove(); Obj=0 // @poff=236
0x3e: Pop(0)
0x3f: Return(); Pop(2)

0x40: PushEmpty(int, int)
0x41: Push("d6q03") // @poff=0
0x42: @ GetVariable(Stack[-1], Stack[-2])
0x43: Pop(1)
0x44: Push((int) 1000)
0x45: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x46: IF (Stack[-1] == 0) GOTO 0x4a; Pop(1)

0x47: PushEmpty()
0x48: Call2 0x4b

0x49: Pop(0)
0x4a: Return(); Pop(2)

0x4b: Push("d6q03") // @poff=0
0x4c: Push((int) -1)
0x4d: @ SetVariable(Stack[-2], Stack[-1])
0x4e: Pop(2)
0x4f: PushEmpty()
0x50: Call2 0x69

0x51: Pop(0)
0x52: Return(); Pop(0)

0x53: PushEmpty(int, int)
0x54: Push("d6q03") // @poff=0
0x55: @ GetVariable(Stack[-1], Stack[-2])
0x56: Pop(1)
0x57: PushEmpty(bool)
0x58: Stack[-1] = (bool) 0
0x59: Push((int) 1000)
0x5a: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x5b: IF (Stack[-1] == 0) GOTO 0x60; Pop(1)

0x5c: Push((int) -1)
0x5d: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x5e: IF (Stack[-1] == 0) GOTO 0x60; Pop(1)

0x5f: Stack[-1] = (bool) 1
0x60: IF (Stack[-1] == 0) GOTO 0x68; Pop(1)

0x61: Push("d6q03") // @poff=0
0x62: Push((int) 1000)
0x63: @ SetVariable(Stack[-2], Stack[-1])
0x64: Pop(2)
0x65: PushEmpty()
0x66: Call2 0x69

0x67: Pop(0)
0x68: Return(); Pop(2)

0x69: EventDisable(26)
0x6a: Push( Stack[0 + Tasks[-1].StackPointer] )
0x6b: IF (Stack[-1] == 0) GOTO 0x6e; Pop(1)

0x6c: @@@ Remove(); Obj=0 // @poff=236
0x6d: Pop(0)
0x6e: PushEmpty(object)
0x6f: Call2 0x8c

0x70: Pop(0)
0x71: @ RemoveActor(Stack[-1])
0x72: Pop(1)
0x73: Return(); Pop(0)

0x74: PushEmpty(float, float)
0x75: @ GetGameTime(Stack[-1])
0x76: Pop(0)
0x77: Push((int) 24)
0x78: Pop(1); Push(Stack[-4] * Stack[-1]);
0x79: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x7a: IF (Stack[-1] == 0) GOTO 0x7f; Pop(1)

0x7b: PushEmpty()
0x7c: Call2 0x69

0x7d: Pop(0)
0x7e: GOTO 0x86

0x7f: Push((int) 0)
0x80: Push((int) 24)
0x81: Pop(1); Push(Stack[-5] * Stack[-1]);
0x82: @ SetTimeEvent(Stack[-2], Stack[-1])
0x83: Pop(2)
0x84: @ Hold()
0x85: Pop(0)
0x86: Return(); Pop(2)

0x87: PushEmpty()
0x88: PushEmpty()
0x89: Call2 0x40

0x8a: Pop(0)
0x8b: Return(); Pop(0)

0x8c: PushEmpty(object, object)
0x8d: @ self(Stack[-1])
0x8e: Pop(0)
0x8f: Stack[-1] = Stack[-3]
0x90: Return(); Pop(2)

0x91: Stack[-1] = 0
0x92: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x93: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2]); Obj=12 // @poff=307
0x94: Pop(0)
0x95: Pop(0); Push((bool) Stack[-4] == 0)
0x96: IF (Stack[-1] == 0) GOTO 0x9f; Pop(1)

0x97: Push("Locator ") // @poff=318
0x98: Pop(1); Push(Stack[-1] + Stack[-12]);
0x99: Push(" doesn't exist") // @poff=336
0x9a: Pop(2); Push(Stack[-2] + Stack[-1]);
0x9b: @ Trace(Stack[-1])
0x9c: Pop(1)
0x9d: Stack[-1] = 0
0x9e: GOTO 0xa1

0x9f: @@ AddStationaryActor(Stack[-1], Stack[-3], Stack[-2], Stack[-10], Stack[-9]); Obj=12 // @poff=366
0xa0: Pop(0)
0xa1: Stack[-1] = Stack[-13]
0xa2: Return(); Pop(8)

0xa3: Stack[-1] = 0
0xa4: PushEmpty(object, object)
0xa5: Push((int) 108)
0xa6: Push((int) 2)
0xa7: Push((int) 513731)
0xa8: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xa9: Pop(3)
0xaa: PushEmpty(bool, object, int)
0xab: Stack[-4] = Stack[-2]
0xac: Stack[-1] = (int) 107
0xad: Call2 0xbe

0xae: Pop(3)
0xaf: Return(); Pop(2)

0xb0: Stack[-1] = 0
0xb1: PushEmpty(object, object)
0xb2: @ GetDiaryRoot(Stack[-1])
0xb3: Pop(0)
0xb4: Pop(0); Push((bool) Stack[-1] == 0)
0xb5: IF (Stack[-1] == 0) GOTO 0xbb; Pop(1)

0xb6: Push("Can't retrieve diary root") // @poff=385
0xb7: @ Trace(Stack[-1])
0xb8: Pop(1)
0xb9: Stack[-3] = (bool) 0
0xba: Return(); Pop(2)

0xbb: Stack[-1] = Stack[-3]
0xbc: Return(); Pop(2)

0xbd: Stack[-1] = 0
0xbe: PushEmpty(object, object, int, object, object, int)
0xbf: PushEmpty(object)
0xc0: Call2 0xb1

0xc1: Stack[-1] = Stack[-4]
0xc2: Pop(1)
0xc3: @@ Find(Stack[-7], Stack[-2]); Obj=3 // @poff=437
0xc4: Pop(0)
0xc5: Pop(0); Push((bool) Stack[-2] == 0)
0xc6: IF (Stack[-1] == 0) GOTO 0xcd; Pop(1)

0xc7: Push("Can't find diary parent with id: ") // @poff=442
0xc8: Pop(1); Push(Stack[-1] + Stack[-8]);
0xc9: @ Trace(Stack[-1])
0xca: Pop(1)
0xcb: Stack[-9] = (bool) 0
0xcc: Return(); Pop(6)

0xcd: @@ AddChild(Stack[-8]); Obj=2 // @poff=510
0xce: Pop(0)
0xcf: Push((int) 7)
0xd0: @ SendWorldWndMessage(Stack[-1])
0xd1: Pop(1)
0xd2: @@ GetCategory(Stack[-1]); Obj=8 // @poff=519
0xd3: Pop(0)
0xd4: @ SetDiarySection(Stack[-1])
0xd5: Pop(0)
0xd6: Stack[-9] = (bool) 0
0xd7: Return(); Pop(6)

0xd8: Stack[-2] = 0
0xd9: Stack[-3] = 0
