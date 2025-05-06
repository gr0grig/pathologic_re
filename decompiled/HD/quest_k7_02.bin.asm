GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	k7q02
	gatherer3
	pt_gatherer3
	pers_morlok
	k7q02_gatherer.xml
	place_gatherer
	completed
	Remove
	GetLocator
	Locator 
	 doesn't exist
	AddStationaryActor

Import:
	SetVariable (2 args)
	GetMainOutdoorScene (1 args)
	Trace (1 args)
	GetVariable (2 args)
	RemoveActor (1 args)
	GetGameTime (1 args)
	SetTimeEvent (2 args)
	Hold (0 args)
	self (1 args)
	FindActor (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 0
		EVENT_26 Op = 0x19 Vars = (string)
		EVENT_9 Op = 0x60 Vars = (int, float)


0x0: PushEmpty(object, object)
0x1: Push("k7q02")
0x2: Push((int) 1)
0x3: @ SetVariable(Stack[-2], Stack[-1])
0x4: Pop(2)
0x5: PushEmpty(bool, string)
0x6: Stack[-1] = "gatherer3"
0x7: Call2 0x7d

0x8: Pop(2)
0x9: @ GetMainOutdoorScene(Stack[-1])
0xa: Pop(0)
0xb: PushEmpty(object, object, string, string, string)
0xc: Stack[-4] = Stack[-6]
0xd: Stack[-3] = "pt_gatherer3"
0xe: Stack[-2] = "pers_morlok"
0xf: Stack[-1] = "k7q02_gatherer.xml"
0x10: Call2 0x6b

0x11: Stack[0 + Tasks[-1].StackPointer] = Stack[-5]
0x12: Pop(5)
0x13: PushEmpty(int)
0x14: Stack[-1] = (int) 7
0x15: Call2 0x4d

0x16: Pop(1)
0x17: Return(); Pop(2)

0x18: Stack[-1] = 0
0x19: PushEmpty()
0x1a: @ Trace(Stack[-1])
0x1b: Pop(0)
0x1c: Push("place_gatherer")
0x1d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1e: IF (Stack[-1] == 0) GOTO 0x20; Pop(1)

0x1f: GOTO 0x26

0x20: Push("completed")
0x21: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x22: IF (Stack[-1] == 0) GOTO 0x26; Pop(1)

0x23: PushEmpty()
0x24: Call2 0x3a

0x25: Pop(0)
0x26: Return(); Pop(0)

0x27: PushEmpty(int, int)
0x28: Push("k7q02")
0x29: @ GetVariable(Stack[-1], Stack[-2])
0x2a: Pop(1)
0x2b: Push((int) 1000)
0x2c: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x2d: IF (Stack[-1] == 0) GOTO 0x31; Pop(1)

0x2e: PushEmpty()
0x2f: Call2 0x32

0x30: Pop(0)
0x31: Return(); Pop(2)

0x32: Push("k7q02")
0x33: Push((int) -1)
0x34: @ SetVariable(Stack[-2], Stack[-1])
0x35: Pop(2)
0x36: PushEmpty()
0x37: Call2 0x42

0x38: Pop(0)
0x39: Return(); Pop(0)

0x3a: Push("k7q02")
0x3b: Push((int) 1000)
0x3c: @ SetVariable(Stack[-2], Stack[-1])
0x3d: Pop(2)
0x3e: PushEmpty()
0x3f: Call2 0x42

0x40: Pop(0)
0x41: Return(); Pop(0)

0x42: EventDisable(26)
0x43: Push( Stack[0 + Tasks[-1].StackPointer] )
0x44: IF (Stack[-1] == 0) GOTO 0x47; Pop(1)

0x45: @@ Remove()
0x46: Pop(0)
0x47: PushEmpty(object)
0x48: Call2 0x65

0x49: Pop(0)
0x4a: @ RemoveActor(Stack[-1])
0x4b: Pop(1)
0x4c: Return(); Pop(0)

0x4d: PushEmpty(float, float)
0x4e: @ GetGameTime(Stack[-1])
0x4f: Pop(0)
0x50: Push((int) 24)
0x51: Pop(1); Push(Stack[-4] * Stack[-1]);
0x52: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x53: IF (Stack[-1] == 0) GOTO 0x58; Pop(1)

0x54: PushEmpty()
0x55: Call2 0x42

0x56: Pop(0)
0x57: GOTO 0x5f

0x58: Push((int) 0)
0x59: Push((int) 24)
0x5a: Pop(1); Push(Stack[-5] * Stack[-1]);
0x5b: @ SetTimeEvent(Stack[-2], Stack[-1])
0x5c: Pop(2)
0x5d: @ Hold()
0x5e: Pop(0)
0x5f: Return(); Pop(2)

0x60: PushEmpty()
0x61: PushEmpty()
0x62: Call2 0x27

0x63: Pop(0)
0x64: Return(); Pop(0)

0x65: PushEmpty(object, object)
0x66: @ self(Stack[-1])
0x67: Pop(0)
0x68: Stack[-3] = Stack[-1]
0x69: Return(); Pop(2)

0x6a: Stack[-1] = 0
0x6b: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x6c: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0x6d: Pop(0)
0x6e: Pop(0); Push((bool) Stack[-4] == 0)
0x6f: IF (Stack[-1] == 0) GOTO 0x78; Pop(1)

0x70: Push("Locator ")
0x71: Pop(1); Push(Stack[-1] + Stack[-12]);
0x72: Push(" doesn't exist")
0x73: Pop(2); Push(Stack[-2] + Stack[-1]);
0x74: @ Trace(Stack[-1])
0x75: Pop(1)
0x76: Stack[-1] = 0
0x77: GOTO 0x7a

0x78: @@ AddStationaryActor(Stack[-1], Stack[-3], Stack[-2], Stack[-10], Stack[-9])
0x79: Pop(0)
0x7a: Stack[-13] = Stack[-1]
0x7b: Return(); Pop(8)

0x7c: Stack[-1] = 0
0x7d: PushEmpty(object, object)
0x7e: @ FindActor(Stack[-1], Stack[-3])
0x7f: Pop(0)
0x80: Pop(0); Push((bool) Stack[-1] == 0)
0x81: IF (Stack[-1] == 0) GOTO 0x84; Pop(1)

0x82: Stack[-4] = (bool) 0
0x83: Return(); Pop(2)

0x84: @ RemoveActor(Stack[-1])
0x85: Pop(0)
0x86: Stack[-4] = (bool) 1
0x87: Return(); Pop(2)

0x88: Stack[-1] = 0
