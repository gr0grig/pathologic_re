GlobalVarCount = 0

Strings:
	kill the one
	b8q03MladVladIsVictim
	volonteers_burah
	kill
	mladvlad
	bigvlad
	boiny@door1
	vagon_mishka@door1
	place_klara
	vagon_mishka
	pt_b8q01_klara
	NPC_Klara
	b8q01_klara.xml
	remove_klara
	cleanup
	unlock_boiny
	b8q01
	fail
	completed
	GetLocator
	Locator 
	 doesn't exist
	Door 
	 not found
	locked
	SetProperty

Import:
	Trace (1 args)
	GetVariable (2 args)
	Hold (0 args)
	GetSceneByName (2 args)
	Trigger (2 args)
	SetVariable (2 args)
	RemoveActor (1 args)
	self (1 args)
	AddActor (6 args)
	FindActor (2 args)
	Trigger (3 args)

RunOp = 0x18
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 0
		EVENT_26 Op = 0x26 Vars = (string)


0x0: PushEmpty(int, int)
0x1: Push("kill the one")
0x2: @ Trace(Stack[-1])
0x3: Pop(1)
0x4: Push("b8q03MladVladIsVictim")
0x5: @ GetVariable(Stack[-1], Stack[-2])
0x6: Pop(1)
0x7: Push((int) 0)
0x8: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x9: IF (Stack[-1] == 0) GOTO 0x11; Pop(1)

0xa: PushEmpty(bool, string, string, string)
0xb: Stack[-3] = "volonteers_burah"
0xc: Stack[-2] = "kill"
0xd: Stack[-1] = "mladvlad"
0xe: Call2 0xb8

0xf: Pop(4)
0x10: GOTO 0x17

0x11: PushEmpty(bool, string, string, string)
0x12: Stack[-3] = "volonteers_burah"
0x13: Stack[-2] = "kill"
0x14: Stack[-1] = "bigvlad"
0x15: Call2 0xb8

0x16: Pop(4)
0x17: Return(); Pop(2)

0x18: PushEmpty(string, bool)
0x19: Stack[-2] = "boiny@door1"
0x1a: Stack[-1] = (bool) 1
0x1b: Call2 0xa7

0x1c: Pop(2)
0x1d: PushEmpty(string, bool)
0x1e: Stack[-2] = "vagon_mishka@door1"
0x1f: Stack[-1] = (bool) 0
0x20: Call2 0xa7

0x21: Pop(2)
0x22: @ Hold()
0x23: Pop(0)
0x24: GOTO 0x22

0x25: Return(); Pop(0)

0x26: PushEmpty(object, int, object, int)
0x27: @ Trace(Stack[-5])
0x28: Pop(0)
0x29: Push("place_klara")
0x2a: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x2b: IF (Stack[-1] == 0) GOTO 0x39; Pop(1)

0x2c: Push("vagon_mishka")
0x2d: @ GetSceneByName(Stack[-3], Stack[-1])
0x2e: Pop(1)
0x2f: PushEmpty(object, object, string, string, string)
0x30: Stack[-4] = Stack[-7]
0x31: Stack[-3] = "pt_b8q01_klara"
0x32: Stack[-2] = "NPC_Klara"
0x33: Stack[-1] = "b8q01_klara.xml"
0x34: Call2 0x95

0x35: Stack[0 + Tasks[-1].StackPointer] = Stack[-5]
0x36: Pop(5)
0x37: Stack[-2] = 0
0x38: GOTO 0x6a

0x39: Push("remove_klara")
0x3a: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x3b: IF (Stack[-1] == 0) GOTO 0x40; Pop(1)

0x3c: Push("cleanup")
0x3d: @ Trigger(Stack[-0], Stack[-1])
0x3e: Pop(1)
0x3f: GOTO 0x6a

0x40: Push("unlock_boiny")
0x41: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x42: IF (Stack[-1] == 0) GOTO 0x49; Pop(1)

0x43: PushEmpty(string, bool)
0x44: Stack[-2] = "boiny@door1"
0x45: Stack[-1] = (bool) 0
0x46: Call2 0xa7

0x47: Pop(2)
0x48: GOTO 0x6a

0x49: Push("cleanup")
0x4a: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x4b: IF (Stack[-1] == 0) GOTO 0x5d; Pop(1)

0x4c: Push("b8q01")
0x4d: @ GetVariable(Stack[-1], Stack[-2])
0x4e: Pop(1)
0x4f: Push((int) 1000)
0x50: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x51: IF (Stack[-1] == 0) GOTO 0x56; Pop(1)

0x52: PushEmpty()
0x53: Call2 0x6b

0x54: Pop(0)
0x55: GOTO 0x59

0x56: PushEmpty()
0x57: Call2 0x7b

0x58: Pop(0)
0x59: PushEmpty()
0x5a: Call2 0x81

0x5b: Pop(0)
0x5c: GOTO 0x6a

0x5d: Push("fail")
0x5e: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x5f: IF (Stack[-1] == 0) GOTO 0x64; Pop(1)

0x60: PushEmpty()
0x61: Call2 0x6b

0x62: Pop(0)
0x63: GOTO 0x6a

0x64: Push("completed")
0x65: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x66: IF (Stack[-1] == 0) GOTO 0x6a; Pop(1)

0x67: PushEmpty()
0x68: Call2 0x73

0x69: Pop(0)
0x6a: Return(); Pop(4)

0x6b: Push("b8q01")
0x6c: Push((int) -1)
0x6d: @ SetVariable(Stack[-2], Stack[-1])
0x6e: Pop(2)
0x6f: PushEmpty()
0x70: Call2 0x7b

0x71: Pop(0)
0x72: Return(); Pop(0)

0x73: Push("b8q01")
0x74: Push((int) 1000)
0x75: @ SetVariable(Stack[-2], Stack[-1])
0x76: Pop(2)
0x77: PushEmpty()
0x78: Call2 0x7b

0x79: Pop(0)
0x7a: Return(); Pop(0)

0x7b: Push( Stack[0 + Tasks[-1].StackPointer] )
0x7c: IF (Stack[-1] == 0) GOTO 0x80; Pop(1)

0x7d: Push("cleanup")
0x7e: @ Trigger(Stack[-0], Stack[-1])
0x7f: Pop(1)
0x80: Return(); Pop(0)

0x81: PushEmpty()
0x82: Call2 0x0

0x83: Pop(0)
0x84: PushEmpty(object)
0x85: Call2 0x8f

0x86: Pop(0)
0x87: @ RemoveActor(Stack[-1])
0x88: Pop(1)
0x89: PushEmpty(string, bool)
0x8a: Stack[-2] = "boiny@door1"
0x8b: Stack[-1] = (bool) 1
0x8c: Call2 0xa7

0x8d: Pop(2)
0x8e: Return(); Pop(0)

0x8f: PushEmpty(object, object)
0x90: @ self(Stack[-1])
0x91: Pop(0)
0x92: Stack[-3] = Stack[-1]
0x93: Return(); Pop(2)

0x94: Stack[-1] = 0
0x95: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x96: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0x97: Pop(0)
0x98: Pop(0); Push((bool) Stack[-4] == 0)
0x99: IF (Stack[-1] == 0) GOTO 0xa2; Pop(1)

0x9a: Push("Locator ")
0x9b: Pop(1); Push(Stack[-1] + Stack[-12]);
0x9c: Push(" doesn't exist")
0x9d: Pop(2); Push(Stack[-2] + Stack[-1]);
0x9e: @ Trace(Stack[-1])
0x9f: Pop(1)
0xa0: Stack[-1] = 0
0xa1: GOTO 0xa4

0xa2: @ AddActor(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0xa3: Pop(0)
0xa4: Stack[-13] = Stack[-1]
0xa5: Return(); Pop(8)

0xa6: Stack[-1] = 0
0xa7: PushEmpty(object, object)
0xa8: @ FindActor(Stack[-1], Stack[-4])
0xa9: Pop(0)
0xaa: Pop(0); Push((bool) Stack[-1] == 0)
0xab: IF (Stack[-1] == 0) GOTO 0xb3; Pop(1)

0xac: Push("Door ")
0xad: Pop(1); Push(Stack[-1] + Stack[-5]);
0xae: Push(" not found")
0xaf: Pop(2); Push(Stack[-2] + Stack[-1]);
0xb0: @ Trace(Stack[-1])
0xb1: Pop(1)
0xb2: GOTO 0xb6

0xb3: Push("locked")
0xb4: @@ SetProperty(Stack[-1], Stack[-4])
0xb5: Pop(1)
0xb6: Return(); Pop(2)

0xb7: Stack[-1] = 0
0xb8: PushEmpty(object, object)
0xb9: @ FindActor(Stack[-1], Stack[-5])
0xba: Pop(0)
0xbb: Pop(0); Push((bool) Stack[-1] == 0)
0xbc: IF (Stack[-1] == 0) GOTO 0xbf; Pop(1)

0xbd: Stack[-6] = (bool) 0
0xbe: Return(); Pop(2)

0xbf: @ Trigger(Stack[-1], Stack[-4], Stack[-3])
0xc0: Pop(0)
0xc1: Stack[-6] = (bool) 1
0xc2: Return(); Pop(2)

0xc3: Stack[-1] = 0
