GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	place_birdmask
	theater
	pt_b7q03_birdmask
	pers_birdmask
	b7q03_birdmask.xml
	remove_birdmask
	cleanup
	fail
	completed
	b7q03
	GetLocator
	Locator 
	 doesn't exist

Import:
	Trace (1 args)
	GetSceneByName (2 args)
	Trigger (2 args)
	GetVariable (2 args)
	SetVariable (2 args)
	RemoveActor (1 args)
	GetGameTime (1 args)
	SetTimeEvent (2 args)
	Hold (0 args)
	self (1 args)
	AddActor (6 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 0
		EVENT_26 Op = 0x5 Vars = (string)
		EVENT_9 Op = 0x67 Vars = (int, float)


0x0: PushEmpty(int)
0x1: Stack[-1] = (int) 7
0x2: Call2 0x54

0x3: Pop(1)
0x4: Return(); Pop(0)

0x5: PushEmpty(object, object)
0x6: @ Trace(Stack[-3])
0x7: Pop(0)
0x8: Push("place_birdmask")
0x9: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xa: IF (Stack[-1] == 0) GOTO 0x18; Pop(1)

0xb: Push("theater")
0xc: @ GetSceneByName(Stack[-2], Stack[-1])
0xd: Pop(1)
0xe: PushEmpty(object, object, string, string, string)
0xf: Stack[-4] = Stack[-6]
0x10: Stack[-3] = "pt_b7q03_birdmask"
0x11: Stack[-2] = "pers_birdmask"
0x12: Stack[-1] = "b7q03_birdmask.xml"
0x13: Call2 0x72

0x14: Stack[0 + Tasks[-1].StackPointer] = Stack[-5]
0x15: Pop(5)
0x16: Stack[-1] = 0
0x17: GOTO 0x2c

0x18: Push("remove_birdmask")
0x19: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1a: IF (Stack[-1] == 0) GOTO 0x1f; Pop(1)

0x1b: Push("cleanup")
0x1c: @ Trigger(Stack[-0], Stack[-1])
0x1d: Pop(1)
0x1e: GOTO 0x2c

0x1f: Push("fail")
0x20: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x21: IF (Stack[-1] == 0) GOTO 0x26; Pop(1)

0x22: PushEmpty()
0x23: Call2 0x38

0x24: Pop(0)
0x25: GOTO 0x2c

0x26: Push("completed")
0x27: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x28: IF (Stack[-1] == 0) GOTO 0x2c; Pop(1)

0x29: PushEmpty()
0x2a: Call2 0x40

0x2b: Pop(0)
0x2c: Return(); Pop(2)

0x2d: PushEmpty(int, int)
0x2e: Push("b7q03")
0x2f: @ GetVariable(Stack[-1], Stack[-2])
0x30: Pop(1)
0x31: Push((int) 1000)
0x32: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x33: IF (Stack[-1] == 0) GOTO 0x37; Pop(1)

0x34: PushEmpty()
0x35: Call2 0x38

0x36: Pop(0)
0x37: Return(); Pop(2)

0x38: Push("b7q03")
0x39: Push((int) -1)
0x3a: @ SetVariable(Stack[-2], Stack[-1])
0x3b: Pop(2)
0x3c: PushEmpty()
0x3d: Call2 0x48

0x3e: Pop(0)
0x3f: Return(); Pop(0)

0x40: Push("b7q03")
0x41: Push((int) 1000)
0x42: @ SetVariable(Stack[-2], Stack[-1])
0x43: Pop(2)
0x44: PushEmpty()
0x45: Call2 0x48

0x46: Pop(0)
0x47: Return(); Pop(0)

0x48: EventDisable(26)
0x49: Push( Stack[0 + Tasks[-1].StackPointer] )
0x4a: IF (Stack[-1] == 0) GOTO 0x4e; Pop(1)

0x4b: Push("cleanup")
0x4c: @ Trigger(Stack[-0], Stack[-1])
0x4d: Pop(1)
0x4e: PushEmpty(object)
0x4f: Call2 0x6c

0x50: Pop(0)
0x51: @ RemoveActor(Stack[-1])
0x52: Pop(1)
0x53: Return(); Pop(0)

0x54: PushEmpty(float, float)
0x55: @ GetGameTime(Stack[-1])
0x56: Pop(0)
0x57: Push((int) 24)
0x58: Pop(1); Push(Stack[-4] * Stack[-1]);
0x59: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x5a: IF (Stack[-1] == 0) GOTO 0x5f; Pop(1)

0x5b: PushEmpty()
0x5c: Call2 0x48

0x5d: Pop(0)
0x5e: GOTO 0x66

0x5f: Push((int) 0)
0x60: Push((int) 24)
0x61: Pop(1); Push(Stack[-5] * Stack[-1]);
0x62: @ SetTimeEvent(Stack[-2], Stack[-1])
0x63: Pop(2)
0x64: @ Hold()
0x65: Pop(0)
0x66: Return(); Pop(2)

0x67: PushEmpty()
0x68: PushEmpty()
0x69: Call2 0x2d

0x6a: Pop(0)
0x6b: Return(); Pop(0)

0x6c: PushEmpty(object, object)
0x6d: @ self(Stack[-1])
0x6e: Pop(0)
0x6f: Stack[-3] = Stack[-1]
0x70: Return(); Pop(2)

0x71: Stack[-1] = 0
0x72: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x73: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0x74: Pop(0)
0x75: Pop(0); Push((bool) Stack[-4] == 0)
0x76: IF (Stack[-1] == 0) GOTO 0x7f; Pop(1)

0x77: Push("Locator ")
0x78: Pop(1); Push(Stack[-1] + Stack[-12]);
0x79: Push(" doesn't exist")
0x7a: Pop(2); Push(Stack[-2] + Stack[-1]);
0x7b: @ Trace(Stack[-1])
0x7c: Pop(1)
0x7d: Stack[-1] = 0
0x7e: GOTO 0x81

0x7f: @ AddActor(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0x80: Pop(0)
0x81: Stack[-13] = Stack[-1]
0x82: Return(); Pop(8)

0x83: Stack[-1] = 0
