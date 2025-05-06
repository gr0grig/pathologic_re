GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	burah_home@door1
	k4q03
	place_burah
	house5_08
	pt_k4q03_burah
	NPC_Burah
	k4q03_burah.xml
	completed
	cleanup
	GetLocator
	Locator 
	 doesn't exist
	Door 
	 not found
	locked
	SetProperty

Import:
	SetVariable (2 args)
	Trace (1 args)
	GetSceneByName (2 args)
	GetVariable (2 args)
	Trigger (2 args)
	RemoveActor (1 args)
	GetGameTime (1 args)
	SetTimeEvent (2 args)
	Hold (0 args)
	self (1 args)
	AddActor (6 args)
	FindActor (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 0
		EVENT_26 Op = 0xe Vars = (string)
		EVENT_9 Op = 0x66 Vars = (int, float)


0x0: PushEmpty(string, bool)
0x1: Stack[-2] = "burah_home@door1"
0x2: Stack[-1] = (bool) 1
0x3: Call2 0x83

0x4: Pop(2)
0x5: Push("k4q03")
0x6: Push((int) 1)
0x7: @ SetVariable(Stack[-2], Stack[-1])
0x8: Pop(2)
0x9: PushEmpty(int)
0xa: Stack[-1] = (int) 4
0xb: Call2 0x53

0xc: Pop(1)
0xd: Return(); Pop(0)

0xe: PushEmpty(object, object)
0xf: @ Trace(Stack[-3])
0x10: Pop(0)
0x11: Push("place_burah")
0x12: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x13: IF (Stack[-1] == 0) GOTO 0x20; Pop(1)

0x14: Push("house5_08")
0x15: @ GetSceneByName(Stack[-2], Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(object, object, string, string, string)
0x18: Stack[-4] = Stack[-6]
0x19: Stack[-3] = "pt_k4q03_burah"
0x1a: Stack[-2] = "NPC_Burah"
0x1b: Stack[-1] = "k4q03_burah.xml"
0x1c: Call2 0x71

0x1d: Stack[0 + Tasks[-1].StackPointer] = Stack[-5]
0x1e: Pop(5)
0x1f: Stack[-1] = 0
0x20: Push("completed")
0x21: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x22: IF (Stack[-1] == 0) GOTO 0x26; Pop(1)

0x23: PushEmpty()
0x24: Call2 0x3a

0x25: Pop(0)
0x26: Return(); Pop(2)

0x27: PushEmpty(int, int)
0x28: Push("k4q03")
0x29: @ GetVariable(Stack[-1], Stack[-2])
0x2a: Pop(1)
0x2b: Push((int) 1000)
0x2c: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x2d: IF (Stack[-1] == 0) GOTO 0x31; Pop(1)

0x2e: PushEmpty()
0x2f: Call2 0x32

0x30: Pop(0)
0x31: Return(); Pop(2)

0x32: Push("k4q03")
0x33: Push((int) -1)
0x34: @ SetVariable(Stack[-2], Stack[-1])
0x35: Pop(2)
0x36: PushEmpty()
0x37: Call2 0x42

0x38: Pop(0)
0x39: Return(); Pop(0)

0x3a: Push("k4q03")
0x3b: Push((int) 1000)
0x3c: @ SetVariable(Stack[-2], Stack[-1])
0x3d: Pop(2)
0x3e: PushEmpty()
0x3f: Call2 0x42

0x40: Pop(0)
0x41: Return(); Pop(0)

0x42: EventDisable(26)
0x43: PushEmpty(string, bool)
0x44: Stack[-2] = "burah_home@door1"
0x45: Stack[-1] = (bool) 0
0x46: Call2 0x83

0x47: Pop(2)
0x48: Push( Stack[0 + Tasks[-1].StackPointer] )
0x49: IF (Stack[-1] == 0) GOTO 0x4d; Pop(1)

0x4a: Push("cleanup")
0x4b: @ Trigger(Stack[-0], Stack[-1])
0x4c: Pop(1)
0x4d: PushEmpty(object)
0x4e: Call2 0x6b

0x4f: Pop(0)
0x50: @ RemoveActor(Stack[-1])
0x51: Pop(1)
0x52: Return(); Pop(0)

0x53: PushEmpty(float, float)
0x54: @ GetGameTime(Stack[-1])
0x55: Pop(0)
0x56: Push((int) 24)
0x57: Pop(1); Push(Stack[-4] * Stack[-1]);
0x58: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x59: IF (Stack[-1] == 0) GOTO 0x5e; Pop(1)

0x5a: PushEmpty()
0x5b: Call2 0x42

0x5c: Pop(0)
0x5d: GOTO 0x65

0x5e: Push((int) 0)
0x5f: Push((int) 24)
0x60: Pop(1); Push(Stack[-5] * Stack[-1]);
0x61: @ SetTimeEvent(Stack[-2], Stack[-1])
0x62: Pop(2)
0x63: @ Hold()
0x64: Pop(0)
0x65: Return(); Pop(2)

0x66: PushEmpty()
0x67: PushEmpty()
0x68: Call2 0x27

0x69: Pop(0)
0x6a: Return(); Pop(0)

0x6b: PushEmpty(object, object)
0x6c: @ self(Stack[-1])
0x6d: Pop(0)
0x6e: Stack[-3] = Stack[-1]
0x6f: Return(); Pop(2)

0x70: Stack[-1] = 0
0x71: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x72: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0x73: Pop(0)
0x74: Pop(0); Push((bool) Stack[-4] == 0)
0x75: IF (Stack[-1] == 0) GOTO 0x7e; Pop(1)

0x76: Push("Locator ")
0x77: Pop(1); Push(Stack[-1] + Stack[-12]);
0x78: Push(" doesn't exist")
0x79: Pop(2); Push(Stack[-2] + Stack[-1]);
0x7a: @ Trace(Stack[-1])
0x7b: Pop(1)
0x7c: Stack[-1] = 0
0x7d: GOTO 0x80

0x7e: @ AddActor(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0x7f: Pop(0)
0x80: Stack[-13] = Stack[-1]
0x81: Return(); Pop(8)

0x82: Stack[-1] = 0
0x83: PushEmpty(object, object)
0x84: @ FindActor(Stack[-1], Stack[-4])
0x85: Pop(0)
0x86: Pop(0); Push((bool) Stack[-1] == 0)
0x87: IF (Stack[-1] == 0) GOTO 0x8f; Pop(1)

0x88: Push("Door ")
0x89: Pop(1); Push(Stack[-1] + Stack[-5]);
0x8a: Push(" not found")
0x8b: Pop(2); Push(Stack[-2] + Stack[-1]);
0x8c: @ Trace(Stack[-1])
0x8d: Pop(1)
0x8e: GOTO 0x92

0x8f: Push("locked")
0x90: @@ SetProperty(Stack[-1], Stack[-4])
0x91: Pop(1)
0x92: Return(); Pop(2)

0x93: Stack[-1] = 0
