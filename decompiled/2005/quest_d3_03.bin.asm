GlobalVarCount = 0

Strings:
	d3q03
	boy
	pt_d3q03_boy
	pers_littleboy
	d3q03_boy.xml
	boy_attacked
	boy_free
	Remove
	fail
	completed
	GetLocator
	Locator 
	 doesn't exist
	AddStationaryActor

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

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 0
		EVENT_26 Op = 0x9 Vars = (string)
		EVENT_9 Op = 0x86 Vars = (int, float)


0x0: Push("d3q03")
0x1: Push((int) 1)
0x2: @ SetVariable(Stack[-2], Stack[-1])
0x3: Pop(2)
0x4: PushEmpty(int)
0x5: Stack[-1] = (int) 3
0x6: Call2 0x73

0x7: Pop(1)
0x8: Return(); Pop(0)

0x9: PushEmpty(object, int, object, int)
0xa: @ Trace(Stack[-5])
0xb: Pop(0)
0xc: Push("boy")
0xd: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0xe: IF (Stack[-1] == 0) GOTO 0x1b; Pop(1)

0xf: @ GetMainOutdoorScene(Stack[-2])
0x10: Pop(0)
0x11: PushEmpty(object, object, string, string, string)
0x12: Stack[-4] = Stack[-7]
0x13: Stack[-3] = "pt_d3q03_boy"
0x14: Stack[-2] = "pers_littleboy"
0x15: Stack[-1] = "d3q03_boy.xml"
0x16: Call2 0x91

0x17: Stack[0 + Tasks[-1].StackPointer] = Stack[-5]
0x18: Pop(5)
0x19: Stack[-2] = 0
0x1a: GOTO 0x3f

0x1b: Push("boy_attacked")
0x1c: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x1d: IF (Stack[-1] == 0) GOTO 0x2a; Pop(1)

0x1e: Push("d3q03")
0x1f: @ GetVariable(Stack[-1], Stack[-2])
0x20: Pop(1)
0x21: PushEmpty(bool, int)
0x22: Stack[-1] = Stack[-3]
0x23: Call2 0xa3

0x24: Pop(1)
0x25: IF (Stack[-1] == 0) GOTO 0x29; Pop(1)

0x26: PushEmpty()
0x27: Call2 0x4b

0x28: Pop(0)
0x29: GOTO 0x3f

0x2a: Push("boy_free")
0x2b: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x2c: IF (Stack[-1] == 0) GOTO 0x32; Pop(1)

0x2d: Push( Stack[0 + Tasks[-1].StackPointer] )
0x2e: IF (Stack[-1] == 0) GOTO 0x31; Pop(1)

0x2f: @@ Remove()
0x30: Pop(0)
0x31: GOTO 0x3f

0x32: Push("fail")
0x33: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x34: IF (Stack[-1] == 0) GOTO 0x39; Pop(1)

0x35: PushEmpty()
0x36: Call2 0x4b

0x37: Pop(0)
0x38: GOTO 0x3f

0x39: Push("completed")
0x3a: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x3b: IF (Stack[-1] == 0) GOTO 0x3f; Pop(1)

0x3c: PushEmpty()
0x3d: Call2 0x53

0x3e: Pop(0)
0x3f: Return(); Pop(4)

0x40: PushEmpty(int, int)
0x41: Push("d3q03")
0x42: @ GetVariable(Stack[-1], Stack[-2])
0x43: Pop(1)
0x44: Push((int) 1000)
0x45: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x46: IF (Stack[-1] == 0) GOTO 0x4a; Pop(1)

0x47: PushEmpty()
0x48: Call2 0x4b

0x49: Pop(0)
0x4a: Return(); Pop(2)

0x4b: Push("d3q03")
0x4c: Push((int) -1)
0x4d: @ SetVariable(Stack[-2], Stack[-1])
0x4e: Pop(2)
0x4f: PushEmpty()
0x50: Call2 0x69

0x51: Pop(0)
0x52: Return(); Pop(0)

0x53: PushEmpty(int, int)
0x54: Push("d3q03")
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

0x61: Push("d3q03")
0x62: Push((int) 1000)
0x63: @ SetVariable(Stack[-2], Stack[-1])
0x64: Pop(2)
0x65: PushEmpty()
0x66: Call2 0x69

0x67: Pop(0)
0x68: Return(); Pop(2)

0x69: Push( Stack[0 + Tasks[-1].StackPointer] )
0x6a: IF (Stack[-1] == 0) GOTO 0x6d; Pop(1)

0x6b: @@ Remove()
0x6c: Pop(0)
0x6d: PushEmpty(object)
0x6e: Call2 0x8b

0x6f: Pop(0)
0x70: @ RemoveActor(Stack[-1])
0x71: Pop(1)
0x72: Return(); Pop(0)

0x73: PushEmpty(float, float)
0x74: @ GetGameTime(Stack[-1])
0x75: Pop(0)
0x76: Push((int) 24)
0x77: Pop(1); Push(Stack[-4] * Stack[-1]);
0x78: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x79: IF (Stack[-1] == 0) GOTO 0x7e; Pop(1)

0x7a: PushEmpty()
0x7b: Call2 0x69

0x7c: Pop(0)
0x7d: GOTO 0x85

0x7e: Push((int) 0)
0x7f: Push((int) 24)
0x80: Pop(1); Push(Stack[-5] * Stack[-1]);
0x81: @ SetTimeEvent(Stack[-2], Stack[-1])
0x82: Pop(2)
0x83: @ Hold()
0x84: Pop(0)
0x85: Return(); Pop(2)

0x86: PushEmpty()
0x87: PushEmpty()
0x88: Call2 0x40

0x89: Pop(0)
0x8a: Return(); Pop(0)

0x8b: PushEmpty(object, object)
0x8c: @ self(Stack[-1])
0x8d: Pop(0)
0x8e: Stack[-3] = Stack[-1]
0x8f: Return(); Pop(2)

0x90: Stack[-1] = 0
0x91: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x92: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0x93: Pop(0)
0x94: Pop(0); Push((bool) Stack[-4] == 0)
0x95: IF (Stack[-1] == 0) GOTO 0x9e; Pop(1)

0x96: Push("Locator ")
0x97: Pop(1); Push(Stack[-1] + Stack[-12]);
0x98: Push(" doesn't exist")
0x99: Pop(2); Push(Stack[-2] + Stack[-1]);
0x9a: @ Trace(Stack[-1])
0x9b: Pop(1)
0x9c: Stack[-1] = 0
0x9d: GOTO 0xa0

0x9e: @@ AddStationaryActor(Stack[-1], Stack[-3], Stack[-2], Stack[-10], Stack[-9])
0x9f: Pop(0)
0xa0: Stack[-13] = Stack[-1]
0xa1: Return(); Pop(8)

0xa2: Stack[-1] = 0
0xa3: PushEmpty()
0xa4: Stack[-2] = (bool) 0
0xa5: Push((int) 1)
0xa6: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0xa7: IF (Stack[-1] == 0) GOTO 0xac; Pop(1)

0xa8: Push((int) 1000)
0xa9: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xaa: IF (Stack[-1] == 0) GOTO 0xac; Pop(1)

0xab: Stack[-2] = (bool) 1
0xac: Return(); Pop(0)

