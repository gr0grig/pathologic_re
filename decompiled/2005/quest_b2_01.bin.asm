GlobalVarCount = 0

Strings:
	place_box
	dt_house_1_04
	b2q01_box
	b2q01_box.xml
	place_mladvlad
	burah_home
	pt_b2q01_mladvlad
	NPC_MladVlad
	b2q01_MladVlad.xml
	house_vlad@door1
	remove_mladvlad
	cleanup
	cutscene
	cs_burah_danko_microscope
	cutscene_end
	b2q01MicroscopeCS
	b2q01
	fail
	completed
	.bin
	GetLocator
	Locator 
	 doesn't exist
	Door 
	 not found
	locked
	SetProperty

Import:
	Hold (0 args)
	Trace (1 args)
	GetSceneByName (2 args)
	AddActor (6 args)
	Trigger (2 args)
	SetVariable (2 args)
	GetVariable (2 args)
	RemoveActor (1 args)
	self (1 args)
	GetMainOutdoorScene (1 args)
	AddBlankActor (4 args)
	FindActor (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object, object) Params = 0
		EVENT_26 Op = 0x4 Vars = (string)


0x0: @ Hold()
0x1: Pop(0)
0x2: GOTO 0x0

0x3: Return(); Pop(0)

0x4: PushEmpty(object, object, int, object, object, int)
0x5: @ Trace(Stack[-7])
0x6: Pop(0)
0x7: Push("place_box")
0x8: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x9: IF (Stack[-1] == 0) GOTO 0x14; Pop(1)

0xa: Push("dt_house_1_04")
0xb: @ GetSceneByName(Stack[-4], Stack[-1])
0xc: Pop(1)
0xd: Push("b2q01_box")
0xe: Push(CVector(0.0, 0.0, 0.0))
0xf: Push(CVector(0.0, 0.0, 1.0))
0x10: Push("b2q01_box.xml")
0x11: @ AddActor(Stack[-0], Stack[-4], Stack[-7], Stack[-3], Stack[-2], Stack[-1])
0x12: Pop(4)
0x13: Stack[-3] = 0
0x14: Push("place_mladvlad")
0x15: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x16: IF (Stack[-1] == 0) GOTO 0x28; Pop(1)

0x17: Push("burah_home")
0x18: @ GetSceneByName(Stack[-3], Stack[-1])
0x19: Pop(1)
0x1a: PushEmpty(object, object, string, string, string)
0x1b: Stack[-4] = Stack[-7]
0x1c: Stack[-3] = "pt_b2q01_mladvlad"
0x1d: Stack[-2] = "NPC_MladVlad"
0x1e: Stack[-1] = "b2q01_MladVlad.xml"
0x1f: Call2 0x94

0x20: Stack[1 + Tasks[-1].StackPointer] = Stack[-5]
0x21: Pop(5)
0x22: PushEmpty(string, bool)
0x23: Stack[-2] = "house_vlad@door1"
0x24: Stack[-1] = (bool) 1
0x25: Call2 0xa6

0x26: Pop(2)
0x27: Stack[-2] = 0
0x28: Push("remove_mladvlad")
0x29: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x2a: IF (Stack[-1] == 0) GOTO 0x36; Pop(1)

0x2b: Push( Stack[1 + Tasks[-1].StackPointer] )
0x2c: IF (Stack[-1] == 0) GOTO 0x30; Pop(1)

0x2d: Push("cleanup")
0x2e: @ Trigger(Stack[-1], Stack[-1])
0x2f: Pop(1)
0x30: PushEmpty(string, bool)
0x31: Stack[-2] = "house_vlad@door1"
0x32: Stack[-1] = (bool) 0
0x33: Call2 0xa6

0x34: Pop(2)
0x35: GOTO 0x64

0x36: Push("cutscene")
0x37: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x38: IF (Stack[-1] == 0) GOTO 0x3e; Pop(1)

0x39: PushEmpty(object, string)
0x3a: Stack[-1] = "cs_burah_danko_microscope"
0x3b: Call2 0x89

0x3c: Pop(2)
0x3d: GOTO 0x64

0x3e: Push("cutscene_end")
0x3f: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x40: IF (Stack[-1] == 0) GOTO 0x46; Pop(1)

0x41: Push("b2q01MicroscopeCS")
0x42: Push((int) 1)
0x43: @ SetVariable(Stack[-2], Stack[-1])
0x44: Pop(2)
0x45: GOTO 0x64

0x46: Push("cleanup")
0x47: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x48: IF (Stack[-1] == 0) GOTO 0x57; Pop(1)

0x49: Push("b2q01")
0x4a: @ GetVariable(Stack[-1], Stack[-2])
0x4b: Pop(1)
0x4c: Push((int) 1000)
0x4d: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x4e: IF (Stack[-1] == 0) GOTO 0x53; Pop(1)

0x4f: PushEmpty()
0x50: Call2 0x65

0x51: Pop(0)
0x52: GOTO 0x56

0x53: PushEmpty()
0x54: Call2 0x72

0x55: Pop(0)
0x56: GOTO 0x64

0x57: Push("fail")
0x58: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x59: IF (Stack[-1] == 0) GOTO 0x5e; Pop(1)

0x5a: PushEmpty()
0x5b: Call2 0x65

0x5c: Pop(0)
0x5d: GOTO 0x64

0x5e: Push("completed")
0x5f: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x60: IF (Stack[-1] == 0) GOTO 0x64; Pop(1)

0x61: PushEmpty()
0x62: Call2 0x6d

0x63: Pop(0)
0x64: Return(); Pop(6)

0x65: Push("b2q01")
0x66: Push((int) -1)
0x67: @ SetVariable(Stack[-2], Stack[-1])
0x68: Pop(2)
0x69: PushEmpty()
0x6a: Call2 0x72

0x6b: Pop(0)
0x6c: Return(); Pop(0)

0x6d: Push("b2q01")
0x6e: Push((int) 1000)
0x6f: @ SetVariable(Stack[-2], Stack[-1])
0x70: Pop(2)
0x71: Return(); Pop(0)

0x72: EventDisable(26)
0x73: Push( Stack[1 + Tasks[-1].StackPointer] )
0x74: IF (Stack[-1] == 0) GOTO 0x78; Pop(1)

0x75: Push("cleanup")
0x76: @ Trigger(Stack[-1], Stack[-1])
0x77: Pop(1)
0x78: PushEmpty(string, bool)
0x79: Stack[-2] = "house_vlad@door1"
0x7a: Stack[-1] = (bool) 0
0x7b: Call2 0xa6

0x7c: Pop(2)
0x7d: PushEmpty(object)
0x7e: Call2 0x83

0x7f: Pop(0)
0x80: @ RemoveActor(Stack[-1])
0x81: Pop(1)
0x82: Return(); Pop(0)

0x83: PushEmpty(object, object)
0x84: @ self(Stack[-1])
0x85: Pop(0)
0x86: Stack[-3] = Stack[-1]
0x87: Return(); Pop(2)

0x88: Stack[-1] = 0
0x89: PushEmpty(object, object, object, object)
0x8a: @ GetMainOutdoorScene(Stack[-2])
0x8b: Pop(0)
0x8c: Push(".bin")
0x8d: Pop(1); Push(Stack[-6] + Stack[-1]);
0x8e: @ AddBlankActor(Stack[-2], Stack[-3], Stack[-6], Stack[-1])
0x8f: Pop(1)
0x90: Stack[-6] = Stack[-1]
0x91: Return(); Pop(4)

0x92: Stack[-1] = 0
0x93: Stack[-2] = 0
0x94: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x95: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0x96: Pop(0)
0x97: Pop(0); Push((bool) Stack[-4] == 0)
0x98: IF (Stack[-1] == 0) GOTO 0xa1; Pop(1)

0x99: Push("Locator ")
0x9a: Pop(1); Push(Stack[-1] + Stack[-12]);
0x9b: Push(" doesn't exist")
0x9c: Pop(2); Push(Stack[-2] + Stack[-1]);
0x9d: @ Trace(Stack[-1])
0x9e: Pop(1)
0x9f: Stack[-1] = 0
0xa0: GOTO 0xa3

0xa1: @ AddActor(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0xa2: Pop(0)
0xa3: Stack[-13] = Stack[-1]
0xa4: Return(); Pop(8)

0xa5: Stack[-1] = 0
0xa6: PushEmpty(object, object)
0xa7: @ FindActor(Stack[-1], Stack[-4])
0xa8: Pop(0)
0xa9: Pop(0); Push((bool) Stack[-1] == 0)
0xaa: IF (Stack[-1] == 0) GOTO 0xb2; Pop(1)

0xab: Push("Door ")
0xac: Pop(1); Push(Stack[-1] + Stack[-5]);
0xad: Push(" not found")
0xae: Pop(2); Push(Stack[-2] + Stack[-1]);
0xaf: @ Trace(Stack[-1])
0xb0: Pop(1)
0xb1: GOTO 0xb5

0xb2: Push("locked")
0xb3: @@ SetProperty(Stack[-1], Stack[-4])
0xb4: Pop(1)
0xb5: Return(); Pop(2)

0xb6: Stack[-1] = 0
