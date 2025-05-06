GlobalVarCount = 0

Strings:
	place_birdmasks
	pt_d7q01_ubirdmask
	pers_birdmask
	d7q01_birdmask1.xml
	pt_d7q01_dbirdmask
	d7q01_birdmask2.xml
	pt_d7q01_mbirdmask
	d7q01_birdmask3.xml
	remove_birdmasks
	kill_player
	die
	sobor_teleport
	sobor
	pt_d7q01_birth
	fail
	completed
	d7q01
	Remove
	GetLocator
	Locator 
	 doesn't exist
	AddStationaryActor
	Teleport location '
	' not found in scene '

Import:
	Hold (0 args)
	Trace (1 args)
	GetMainOutdoorScene (1 args)
	sync (0 args)
	SetVariable (2 args)
	FindActor (2 args)
	Trigger (2 args)
	GetSceneByName (2 args)
	Teleport (4 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object, object, object) Params = 0
		EVENT_26 Op = 0x4 Vars = (string)


0x0: @ Hold()
0x1: Pop(0)
0x2: GOTO 0x0

0x3: Return(); Pop(0)

0x4: PushEmpty(object, object)
0x5: @ Trace(Stack[-3])
0x6: Pop(0)
0x7: Push("place_birdmasks")
0x8: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x9: IF (Stack[-1] == 0) GOTO 0x26; Pop(1)

0xa: @ GetMainOutdoorScene(Stack[-1])
0xb: Pop(0)
0xc: PushEmpty(object, object, string, string, string)
0xd: Stack[-4] = Stack[-6]
0xe: Stack[-3] = "pt_d7q01_ubirdmask"
0xf: Stack[-2] = "pers_birdmask"
0x10: Stack[-1] = "d7q01_birdmask1.xml"
0x11: Call 0x7c

0x12: Stack[0 + Tasks[-1].StackPointer] = Stack[-5]
0x13: Pop(5)
0x14: PushEmpty(object, object, string, string, string)
0x15: Stack[-4] = Stack[-6]
0x16: Stack[-3] = "pt_d7q01_dbirdmask"
0x17: Stack[-2] = "pers_birdmask"
0x18: Stack[-1] = "d7q01_birdmask2.xml"
0x19: Call 0x7c

0x1a: Stack[1 + Tasks[-1].StackPointer] = Stack[-5]
0x1b: Pop(5)
0x1c: PushEmpty(object, object, string, string, string)
0x1d: Stack[-4] = Stack[-6]
0x1e: Stack[-3] = "pt_d7q01_mbirdmask"
0x1f: Stack[-2] = "pers_birdmask"
0x20: Stack[-1] = "d7q01_birdmask3.xml"
0x21: Call 0x7c

0x22: Stack[2 + Tasks[-1].StackPointer] = Stack[-5]
0x23: Pop(5)
0x24: Stack[-1] = 0
0x25: GOTO 0x52

0x26: Push("remove_birdmasks")
0x27: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x28: IF (Stack[-1] == 0) GOTO 0x2d; Pop(1)

0x29: PushEmpty()
0x2a: Call 0x63

0x2b: Pop(0)
0x2c: GOTO 0x52

0x2d: Push("kill_player")
0x2e: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x2f: IF (Stack[-1] == 0) GOTO 0x36; Pop(1)

0x30: PushEmpty(bool, string, string)
0x31: Stack[-2] = "player"
0x32: Stack[-1] = "die"
0x33: Call 0x8e

0x34: Pop(3)
0x35: GOTO 0x52

0x36: Push("sobor_teleport")
0x37: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x38: IF (Stack[-1] == 0) GOTO 0x45; Pop(1)

0x39: PushEmpty(object, string, string)
0x3a: PushEmpty(object)
0x3b: Call 0x75

0x3c: Stack[-4] = Stack[-1]
0x3d: Pop(1)
0x3e: Stack[-2] = "sobor"
0x3f: Stack[-1] = "pt_d7q01_birth"
0x40: Call 0x9a

0x41: Pop(3)
0x42: @ sync()
0x43: Pop(0)
0x44: GOTO 0x52

0x45: Push("fail")
0x46: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x47: IF (Stack[-1] == 0) GOTO 0x4c; Pop(1)

0x48: PushEmpty()
0x49: Call 0x53

0x4a: Pop(0)
0x4b: GOTO 0x52

0x4c: Push("completed")
0x4d: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x4e: IF (Stack[-1] == 0) GOTO 0x52; Pop(1)

0x4f: PushEmpty()
0x50: Call 0x5b

0x51: Pop(0)
0x52: Return(); Pop(2)

0x53: Push("d7q01")
0x54: Push((int) -1)
0x55: @ SetVariable(Stack[-2], Stack[-1])
0x56: Pop(2)
0x57: PushEmpty()
0x58: Call 0x70

0x59: Pop(0)
0x5a: Return(); Pop(0)

0x5b: Push("d7q01")
0x5c: Push((int) 1000)
0x5d: @ SetVariable(Stack[-2], Stack[-1])
0x5e: Pop(2)
0x5f: PushEmpty()
0x60: Call 0x70

0x61: Pop(0)
0x62: Return(); Pop(0)

0x63: Push( Stack[0 + Tasks[-1].StackPointer] )
0x64: IF (Stack[-1] == 0) GOTO 0x67; Pop(1)

0x65: @@ Remove()
0x66: Pop(0)
0x67: Push( Stack[1 + Tasks[-1].StackPointer] )
0x68: IF (Stack[-1] == 0) GOTO 0x6b; Pop(1)

0x69: @@ Remove()
0x6a: Pop(0)
0x6b: Push( Stack[2 + Tasks[-1].StackPointer] )
0x6c: IF (Stack[-1] == 0) GOTO 0x6f; Pop(1)

0x6d: @@ Remove()
0x6e: Pop(0)
0x6f: Return(); Pop(0)

0x70: EventDisable(26)
0x71: PushEmpty()
0x72: Call 0x63

0x73: Pop(0)
0x74: Return(); Pop(0)

0x75: PushEmpty(object, object)
0x76: Push("player")
0x77: @ FindActor(Stack[-2], Stack[-1])
0x78: Pop(1)
0x79: Stack[-3] = Stack[-1]
0x7a: Return(); Pop(2)

0x7b: Stack[-1] = 0
0x7c: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x7d: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0x7e: Pop(0)
0x7f: Pop(0); Push((bool) Stack[-4] == 0)
0x80: IF (Stack[-1] == 0) GOTO 0x89; Pop(1)

0x81: Push("Locator ")
0x82: Pop(1); Push(Stack[-1] + Stack[-12]);
0x83: Push(" doesn't exist")
0x84: Pop(2); Push(Stack[-2] + Stack[-1]);
0x85: @ Trace(Stack[-1])
0x86: Pop(1)
0x87: Stack[-1] = 0
0x88: GOTO 0x8b

0x89: @@ AddStationaryActor(Stack[-1], Stack[-3], Stack[-2], Stack[-10], Stack[-9])
0x8a: Pop(0)
0x8b: Stack[-13] = Stack[-1]
0x8c: Return(); Pop(8)

0x8d: Stack[-1] = 0
0x8e: PushEmpty(object, object)
0x8f: @ FindActor(Stack[-1], Stack[-4])
0x90: Pop(0)
0x91: Pop(0); Push((bool) Stack[-1] == 0)
0x92: IF (Stack[-1] == 0) GOTO 0x95; Pop(1)

0x93: Stack[-5] = (bool) 0
0x94: Return(); Pop(2)

0x95: @ Trigger(Stack[-1], Stack[-3])
0x96: Pop(0)
0x97: Stack[-5] = (bool) 1
0x98: Return(); Pop(2)

0x99: Stack[-1] = 0
0x9a: PushEmpty(object, bool, cvector, cvector, object, bool, cvector, cvector)
0x9b: Pop(0); Push((bool) Stack[-11] == 0)
0x9c: IF (Stack[-1] == 0) GOTO 0x9e; Pop(1)

0x9d: Return(); Pop(8)

0x9e: @ GetSceneByName(Stack[-4], Stack[-10])
0x9f: Pop(0)
0xa0: @@ GetLocator(Stack[-9], Stack[-3], Stack[-2], Stack[-1])
0xa1: Pop(0)
0xa2: Pop(0); Push((bool) Stack[-3] == 0)
0xa3: IF (Stack[-1] == 0) GOTO 0xae; Pop(1)

0xa4: Push("Teleport location '")
0xa5: Pop(1); Push(Stack[-1] + Stack[-10]);
0xa6: Push("' not found in scene '")
0xa7: Pop(2); Push(Stack[-2] + Stack[-1]);
0xa8: Pop(1); Push(Stack[-1] + Stack[-11]);
0xa9: Push("'")
0xaa: Pop(2); Push(Stack[-2] + Stack[-1]);
0xab: @ Trace(Stack[-1])
0xac: Pop(1)
0xad: GOTO 0xb0

0xae: @ Teleport(Stack[-11], Stack[-4], Stack[-2], Stack[-1])
0xaf: Pop(0)
0xb0: Return(); Pop(8)

0xb1: Stack[-4] = 0
