GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	W:vagon_mishka@door1
	W:place_doll
	W:pt_b10q03_plant
	A:GetLocator
	W:grass_black_tvir
	W:grass_blood_tvir
	W:grass_brown_tvir
	W:grass_savyur
	W:grass_white_plet
	W:scripted
	W:item_
	W:_stat.xml
	A:AddStationaryActorByType
	W:New b10q03 plant: "
	W:" at location #
	W:Total b10q03 plants: 
	W:pt_b10q03_toy
	W:b10q03_toy_burah.xml
	W:pt_b10q03_toy locator not found
	W:place_blood
	W:b10q03_blood
	W:b10q03_blood_sel
	W:b10q03_blood.xml
	W:fail
	W:completed
	W:b10q03
	A:Remove
	W:Door 
	W:locked
	A:SetProperty
// @pool_raw:7600610067006f006e005f006d006900730068006b006100400064006f006f0072003100000070006c006100630065005f0064006f006c006c000000700074005f006200310030007100300033005f0070006c0061006e00740000004765744c6f6361746f7200670072006100730073005f0062006c00610063006b005f0074007600690072000000670072006100730073005f0062006c006f006f0064005f0074007600690072000000670072006100730073005f00620072006f0077006e005f0074007600690072000000670072006100730073005f007300610076007900750072000000670072006100730073005f00770068006900740065005f0070006c006500740000007300630072006900700074006500640000006900740065006d005f0000005f0073007400610074002e0078006d006c00000041646453746174696f6e6172794163746f72427954797065004e00650077002000620031003000710030003300200070006c0061006e0074003a00200022000000220020006100740020006c006f0063006100740069006f006e0020002300000054006f00740061006c002000620031003000710030003300200070006c0061006e00740073003a0020000000700074005f006200310030007100300033005f0074006f00790000006200310030007100300033005f0074006f0079005f00620075007200610068002e0078006d006c000000700074005f006200310030007100300033005f0074006f00790020006c006f006300610074006f00720020006e006f007400200066006f0075006e006400000070006c006100630065005f0062006c006f006f00640000006200310030007100300033005f0062006c006f006f00640000006200310030007100300033005f0062006c006f006f0064005f00730065006c0000006200310030007100300033005f0062006c006f006f0064002e0078006d006c0000006600610069006c00000063006f006d0070006c0065007400650064000000620031003000710030003300000052656d6f76650044006f006f007200200000006c006f0063006b0065006400000053657450726f706572747900

Import:
	Trace (1 args)
	GetMainOutdoorScene (1 args)
	RandOneOf (11 args)
	AddActor (5 args)
	AddActor (6 args)
	GetVariable (2 args)
	SetVariable (2 args)
	RemoveActor (1 args)
	GetGameTime (1 args)
	SetTimeEvent (2 args)
	Hold (0 args)
	self (1 args)
	FindActor (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object, object) Params = 0
		EVENT_26 Op = 0xa Vars = (string)
		EVENT_9 Op = 0xa9 Vars = (int, float)


0x0: PushEmpty(string, bool)
0x1: Stack[-2] = "vagon_mishka@door1" // @poff=0
0x2: Stack[-1] = (bool) 0
0x3: Call2 0xb4

0x4: Pop(2)
0x5: PushEmpty(int)
0x6: Stack[-1] = (int) 10
0x7: Call2 0x96

0x8: Pop(1)
0x9: Return(); Pop(0)

0xa: PushEmpty(object, bool, cvector, cvector, int, string, object, object, object, object, bool, cvector, cvector, int, string, object, object, object)
0xb: @ Trace(Stack[-19])
0xc: Pop(0)
0xd: Push("place_doll") // @poff=38
0xe: Pop(1); Push((bool) Stack[-20] == Stack[-1])
0xf: IF (Stack[-1] == 0) GOTO 0x4f; Pop(1)

0x10: @ GetMainOutdoorScene(Stack[-9])
0x11: Pop(0)
0x12: Stack[-5] = (int) 0
0x13: Push("pt_b10q03_plant") // @poff=60
0x14: Push((int) 1)
0x15: Pop(1); Push(Stack[-7] + Stack[-1]);
0x16: Pop(2); Push(Stack[-2] + Stack[-1]);
0x17: @@ GetLocator(Stack[-1], Stack[-9], Stack[-8], Stack[-7]); Obj=10 // @poff=92
0x18: Pop(1)
0x19: Pop(0); Push((bool) Stack[-8] == 0)
0x1a: IF (Stack[-1] == 0) GOTO 0x1c; Pop(1)

0x1b: GOTO 0x3c

0x1c: Push((int) 1)
0x1d: Push((int) 1)
0x1e: Push((int) 1)
0x1f: Push((int) 2)
0x20: Push((int) 2)
0x21: Push("grass_black_tvir") // @poff=103
0x22: Push("grass_blood_tvir") // @poff=137
0x23: Push("grass_brown_tvir") // @poff=171
0x24: Push("grass_savyur") // @poff=205
0x25: Push("grass_white_plet") // @poff=231
0x26: @ RandOneOf(Stack[-14], Stack[-10], Stack[-9], Stack[-8], Stack[-7], Stack[-6], Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x27: Pop(10)
0x28: Push("scripted") // @poff=265
0x29: Push("item_") // @poff=283
0x2a: Pop(1); Push(Stack[-1] + Stack[-6]);
0x2b: Push("_stat.xml") // @poff=295
0x2c: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2d: @@ AddStationaryActorByType(Stack[-5], Stack[-9], Stack[-8], Stack[-2], Stack[-1]); Obj=11 // @poff=315
0x2e: Pop(2)
0x2f: Push("New b10q03 plant: "") // @poff=340
0x30: Pop(1); Push(Stack[-1] + Stack[-5]);
0x31: Push("" at location #") // @poff=380
0x32: Pop(2); Push(Stack[-2] + Stack[-1]);
0x33: Push((int) 1)
0x34: Pop(1); Push(Stack[-7] + Stack[-1]);
0x35: Pop(2); Push(Stack[-2] + Stack[-1]);
0x36: @ Trace(Stack[-1])
0x37: Pop(1)
0x38: Stack[-3] = 0
0x39: Push((int) 1)
0x3a: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x3b: GOTO 0x13

0x3c: Push("Total b10q03 plants: ") // @poff=412
0x3d: Pop(1); Push(Stack[-1] + Stack[-6]);
0x3e: @ Trace(Stack[-1])
0x3f: Pop(1)
0x40: Push("pt_b10q03_toy") // @poff=456
0x41: @@ GetLocator(Stack[-1], Stack[-9], Stack[-8], Stack[-7]); Obj=10 // @poff=92
0x42: Pop(1)
0x43: Push(Stack[-8])
0x44: IF (Stack[-1] == 0) GOTO 0x4a; Pop(1)

0x45: Push("scripted") // @poff=265
0x46: Push("b10q03_toy_burah.xml") // @poff=484
0x47: @@ AddStationaryActorByType(Stack[-0]T, Stack[-9], Stack[-8], Stack[-2], Stack[-1]); Obj=11 // @poff=315
0x48: Pop(2)
0x49: GOTO 0x4d

0x4a: Push("pt_b10q03_toy locator not found") // @poff=526
0x4b: @ Trace(Stack[-1])
0x4c: Pop(1)
0x4d: Stack[-9] = 0
0x4e: GOTO 0x6f

0x4f: Push("place_blood") // @poff=590
0x50: Pop(1); Push((bool) Stack[-20] == Stack[-1])
0x51: IF (Stack[-1] == 0) GOTO 0x62; Pop(1)

0x52: @ GetMainOutdoorScene(Stack[-2])
0x53: Pop(0)
0x54: Push("b10q03_blood") // @poff=614
0x55: Push(CVector(0.0, 0.0, 0.0))
0x56: Push(CVector(0.0, 0.0, 1.0))
0x57: @ AddActor(Stack[-4], Stack[-3], Stack[-5], Stack[-2], Stack[-1])
0x58: Pop(3)
0x59: Push("b10q03_blood_sel") // @poff=640
0x5a: Push(CVector(0.0, 0.0, 0.0))
0x5b: Push(CVector(0.0, 0.0, 1.0))
0x5c: Push("b10q03_blood.xml") // @poff=674
0x5d: @ AddActor(Stack[-1]T, Stack[-4], Stack[-6], Stack[-3], Stack[-2], Stack[-1])
0x5e: Pop(4)
0x5f: Stack[-1] = 0
0x60: Stack[-2] = 0
0x61: GOTO 0x6f

0x62: Push("fail") // @poff=708
0x63: Pop(1); Push((bool) Stack[-20] == Stack[-1])
0x64: IF (Stack[-1] == 0) GOTO 0x69; Pop(1)

0x65: PushEmpty()
0x66: Call2 0x7b

0x67: Pop(0)
0x68: GOTO 0x6f

0x69: Push("completed") // @poff=718
0x6a: Pop(1); Push((bool) Stack[-20] == Stack[-1])
0x6b: IF (Stack[-1] == 0) GOTO 0x6f; Pop(1)

0x6c: PushEmpty()
0x6d: Call2 0x83

0x6e: Pop(0)
0x6f: Return(); Pop(18)

0x70: PushEmpty(int, int)
0x71: Push("b10q03") // @poff=738
0x72: @ GetVariable(Stack[-1], Stack[-2])
0x73: Pop(1)
0x74: Push((int) 1000)
0x75: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x76: IF (Stack[-1] == 0) GOTO 0x7a; Pop(1)

0x77: PushEmpty()
0x78: Call2 0x7b

0x79: Pop(0)
0x7a: Return(); Pop(2)

0x7b: Push("b10q03") // @poff=738
0x7c: Push((int) -1)
0x7d: @ SetVariable(Stack[-2], Stack[-1])
0x7e: Pop(2)
0x7f: PushEmpty()
0x80: Call2 0x8b

0x81: Pop(0)
0x82: Return(); Pop(0)

0x83: Push("b10q03") // @poff=738
0x84: Push((int) 1000)
0x85: @ SetVariable(Stack[-2], Stack[-1])
0x86: Pop(2)
0x87: PushEmpty()
0x88: Call2 0x8b

0x89: Pop(0)
0x8a: Return(); Pop(0)

0x8b: EventDisable(26)
0x8c: Push( Stack[0 + Tasks[-1].StackPointer] )
0x8d: IF (Stack[-1] == 0) GOTO 0x90; Pop(1)

0x8e: @@@ Remove(); Obj=0 // @poff=752
0x8f: Pop(0)
0x90: PushEmpty(object)
0x91: Call2 0xae

0x92: Pop(0)
0x93: @ RemoveActor(Stack[-1])
0x94: Pop(1)
0x95: Return(); Pop(0)

0x96: PushEmpty(float, float)
0x97: @ GetGameTime(Stack[-1])
0x98: Pop(0)
0x99: Push((int) 24)
0x9a: Pop(1); Push(Stack[-4] * Stack[-1]);
0x9b: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x9c: IF (Stack[-1] == 0) GOTO 0xa1; Pop(1)

0x9d: PushEmpty()
0x9e: Call2 0x8b

0x9f: Pop(0)
0xa0: GOTO 0xa8

0xa1: Push((int) 0)
0xa2: Push((int) 24)
0xa3: Pop(1); Push(Stack[-5] * Stack[-1]);
0xa4: @ SetTimeEvent(Stack[-2], Stack[-1])
0xa5: Pop(2)
0xa6: @ Hold()
0xa7: Pop(0)
0xa8: Return(); Pop(2)

0xa9: PushEmpty()
0xaa: PushEmpty()
0xab: Call2 0x70

0xac: Pop(0)
0xad: Return(); Pop(0)

0xae: PushEmpty(object, object)
0xaf: @ self(Stack[-1])
0xb0: Pop(0)
0xb1: Stack[-1] = Stack[-3]
0xb2: Return(); Pop(2)

0xb3: Stack[-1] = 0
0xb4: PushEmpty(object, object)
0xb5: @ FindActor(Stack[-1], Stack[-4])
0xb6: Pop(0)
0xb7: Pop(0); Push((bool) Stack[-1] == 0)
0xb8: IF (Stack[-1] == 0) GOTO 0xc0; Pop(1)

0xb9: Push("Door ") // @poff=759
0xba: Pop(1); Push(Stack[-1] + Stack[-5]);
0xbb: Push(" not found") // @poff=568
0xbc: Pop(2); Push(Stack[-2] + Stack[-1]);
0xbd: @ Trace(Stack[-1])
0xbe: Pop(1)
0xbf: GOTO 0xc3

0xc0: Push("locked") // @poff=771
0xc1: @@ SetProperty(Stack[-1], Stack[-4]); Obj=2 // @poff=785
0xc2: Pop(1)
0xc3: Return(); Pop(2)

0xc4: Stack[-1] = 0
