GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	vagon_mishka@door1
	place_doll
	pt_b10q03_plant
	GetLocator
	grass_black_tvir
	grass_blood_tvir
	grass_brown_tvir
	grass_savyur
	grass_white_plet
	scripted
	item_
	_stat.xml
	AddStationaryActorByType
	New b10q03 plant: "
	" at location #
	Total b10q03 plants: 
	pt_b10q03_toy
	b10q03_toy_burah.xml
	pt_b10q03_toy locator not found
	place_blood
	b10q03_blood
	b10q03_blood_sel
	b10q03_blood.xml
	fail
	completed
	b10q03
	Remove
	Door 
	locked
	SetProperty

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
0x1: Stack[-2] = "vagon_mishka@door1"
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
0xd: Push("place_doll")
0xe: Pop(1); Push((bool) Stack[-20] == Stack[-1])
0xf: IF (Stack[-1] == 0) GOTO 0x4f; Pop(1)

0x10: @ GetMainOutdoorScene(Stack[-9])
0x11: Pop(0)
0x12: Stack[-5] = (int) 0
0x13: Push("pt_b10q03_plant")
0x14: Push((int) 1)
0x15: Pop(1); Push(Stack[-7] + Stack[-1]);
0x16: Pop(2); Push(Stack[-2] + Stack[-1]);
0x17: @@ GetLocator(Stack[-1], Stack[-9], Stack[-8], Stack[-7])
0x18: Pop(1)
0x19: Pop(0); Push((bool) Stack[-8] == 0)
0x1a: IF (Stack[-1] == 0) GOTO 0x1c; Pop(1)

0x1b: GOTO 0x3c

0x1c: Push((int) 1)
0x1d: Push((int) 1)
0x1e: Push((int) 1)
0x1f: Push((int) 2)
0x20: Push((int) 2)
0x21: Push("grass_black_tvir")
0x22: Push("grass_blood_tvir")
0x23: Push("grass_brown_tvir")
0x24: Push("grass_savyur")
0x25: Push("grass_white_plet")
0x26: @ RandOneOf(Stack[-14], Stack[-10], Stack[-9], Stack[-8], Stack[-7], Stack[-6], Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x27: Pop(10)
0x28: Push("scripted")
0x29: Push("item_")
0x2a: Pop(1); Push(Stack[-1] + Stack[-6]);
0x2b: Push("_stat.xml")
0x2c: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2d: @@ AddStationaryActorByType(Stack[-5], Stack[-9], Stack[-8], Stack[-2], Stack[-1])
0x2e: Pop(2)
0x2f: Push("New b10q03 plant: "")
0x30: Pop(1); Push(Stack[-1] + Stack[-5]);
0x31: Push("" at location #")
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

0x3c: Push("Total b10q03 plants: ")
0x3d: Pop(1); Push(Stack[-1] + Stack[-6]);
0x3e: @ Trace(Stack[-1])
0x3f: Pop(1)
0x40: Push("pt_b10q03_toy")
0x41: @@ GetLocator(Stack[-1], Stack[-9], Stack[-8], Stack[-7])
0x42: Pop(1)
0x43: Push(Stack[-8])
0x44: IF (Stack[-1] == 0) GOTO 0x4a; Pop(1)

0x45: Push("scripted")
0x46: Push("b10q03_toy_burah.xml")
0x47: @@ AddStationaryActorByType(Stack[-0], Stack[-9], Stack[-8], Stack[-2], Stack[-1])
0x48: Pop(2)
0x49: GOTO 0x4d

0x4a: Push("pt_b10q03_toy locator not found")
0x4b: @ Trace(Stack[-1])
0x4c: Pop(1)
0x4d: Stack[-9] = 0
0x4e: GOTO 0x6f

0x4f: Push("place_blood")
0x50: Pop(1); Push((bool) Stack[-20] == Stack[-1])
0x51: IF (Stack[-1] == 0) GOTO 0x62; Pop(1)

0x52: @ GetMainOutdoorScene(Stack[-2])
0x53: Pop(0)
0x54: Push("b10q03_blood")
0x55: Push(CVector(0.0, 0.0, 0.0))
0x56: Push(CVector(0.0, 0.0, 1.0))
0x57: @ AddActor(Stack[-4], Stack[-3], Stack[-5], Stack[-2], Stack[-1])
0x58: Pop(3)
0x59: Push("b10q03_blood_sel")
0x5a: Push(CVector(0.0, 0.0, 0.0))
0x5b: Push(CVector(0.0, 0.0, 1.0))
0x5c: Push("b10q03_blood.xml")
0x5d: @ AddActor(Stack[-1], Stack[-4], Stack[-6], Stack[-3], Stack[-2], Stack[-1])
0x5e: Pop(4)
0x5f: Stack[-1] = 0
0x60: Stack[-2] = 0
0x61: GOTO 0x6f

0x62: Push("fail")
0x63: Pop(1); Push((bool) Stack[-20] == Stack[-1])
0x64: IF (Stack[-1] == 0) GOTO 0x69; Pop(1)

0x65: PushEmpty()
0x66: Call2 0x7b

0x67: Pop(0)
0x68: GOTO 0x6f

0x69: Push("completed")
0x6a: Pop(1); Push((bool) Stack[-20] == Stack[-1])
0x6b: IF (Stack[-1] == 0) GOTO 0x6f; Pop(1)

0x6c: PushEmpty()
0x6d: Call2 0x83

0x6e: Pop(0)
0x6f: Return(); Pop(18)

0x70: PushEmpty(int, int)
0x71: Push("b10q03")
0x72: @ GetVariable(Stack[-1], Stack[-2])
0x73: Pop(1)
0x74: Push((int) 1000)
0x75: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x76: IF (Stack[-1] == 0) GOTO 0x7a; Pop(1)

0x77: PushEmpty()
0x78: Call2 0x7b

0x79: Pop(0)
0x7a: Return(); Pop(2)

0x7b: Push("b10q03")
0x7c: Push((int) -1)
0x7d: @ SetVariable(Stack[-2], Stack[-1])
0x7e: Pop(2)
0x7f: PushEmpty()
0x80: Call2 0x8b

0x81: Pop(0)
0x82: Return(); Pop(0)

0x83: Push("b10q03")
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

0x8e: @@ Remove()
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
0xb1: Stack[-3] = Stack[-1]
0xb2: Return(); Pop(2)

0xb3: Stack[-1] = 0
0xb4: PushEmpty(object, object)
0xb5: @ FindActor(Stack[-1], Stack[-4])
0xb6: Pop(0)
0xb7: Pop(0); Push((bool) Stack[-1] == 0)
0xb8: IF (Stack[-1] == 0) GOTO 0xc0; Pop(1)

0xb9: Push("Door ")
0xba: Pop(1); Push(Stack[-1] + Stack[-5]);
0xbb: Push(" not found")
0xbc: Pop(2); Push(Stack[-2] + Stack[-1]);
0xbd: @ Trace(Stack[-1])
0xbe: Pop(1)
0xbf: GOTO 0xc3

0xc0: Push("locked")
0xc1: @@ SetProperty(Stack[-1], Stack[-4])
0xc2: Pop(1)
0xc3: Return(); Pop(2)

0xc4: Stack[-1] = 0
