GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	k7q03
	place_family
	burah_home
	pt_k7q03_father
	pers_unosha
	k7q03_father.xml
	pt_k7q03_daughter
	pers_littlegirl
	k7q03_daughter.xml
	pt_k7q03_son
	pers_littleboy
	k7q03_son.xml
	completed
	fail
	cleanup
	GetLocator
	Locator 
	 doesn't exist

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

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object, object, object) Params = 0
		EVENT_26 Op = 0x9 Vars = (string)
		EVENT_9 Op = 0x7e Vars = (int, float)


0x0: Push("k7q03")
0x1: Push((int) 1)
0x2: @ SetVariable(Stack[-2], Stack[-1])
0x3: Pop(2)
0x4: PushEmpty(int)
0x5: Stack[-1] = (int) 7
0x6: Call2 0x6b

0x7: Pop(1)
0x8: Return(); Pop(0)

0x9: PushEmpty(object, object)
0xa: @ Trace(Stack[-3])
0xb: Pop(0)
0xc: Push("place_family")
0xd: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xe: IF (Stack[-1] == 0) GOTO 0x2c; Pop(1)

0xf: Push("burah_home")
0x10: @ GetSceneByName(Stack[-2], Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(object, object, string, string, string)
0x13: Stack[-4] = Stack[-6]
0x14: Stack[-3] = "pt_k7q03_father"
0x15: Stack[-2] = "pers_unosha"
0x16: Stack[-1] = "k7q03_father.xml"
0x17: Call2 0x89

0x18: Stack[0 + Tasks[-1].StackPointer] = Stack[-5]
0x19: Pop(5)
0x1a: PushEmpty(object, object, string, string, string)
0x1b: Stack[-4] = Stack[-6]
0x1c: Stack[-3] = "pt_k7q03_daughter"
0x1d: Stack[-2] = "pers_littlegirl"
0x1e: Stack[-1] = "k7q03_daughter.xml"
0x1f: Call2 0x89

0x20: Stack[1 + Tasks[-1].StackPointer] = Stack[-5]
0x21: Pop(5)
0x22: PushEmpty(object, object, string, string, string)
0x23: Stack[-4] = Stack[-6]
0x24: Stack[-3] = "pt_k7q03_son"
0x25: Stack[-2] = "pers_littleboy"
0x26: Stack[-1] = "k7q03_son.xml"
0x27: Call2 0x89

0x28: Stack[2 + Tasks[-1].StackPointer] = Stack[-5]
0x29: Pop(5)
0x2a: Stack[-1] = 0
0x2b: GOTO 0x39

0x2c: Push("completed")
0x2d: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x2e: IF (Stack[-1] == 0) GOTO 0x33; Pop(1)

0x2f: PushEmpty()
0x30: Call2 0x4d

0x31: Pop(0)
0x32: GOTO 0x39

0x33: Push("fail")
0x34: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x35: IF (Stack[-1] == 0) GOTO 0x39; Pop(1)

0x36: PushEmpty()
0x37: Call2 0x45

0x38: Pop(0)
0x39: Return(); Pop(2)

0x3a: PushEmpty(int, int)
0x3b: Push("k7q03")
0x3c: @ GetVariable(Stack[-1], Stack[-2])
0x3d: Pop(1)
0x3e: Push((int) 1000)
0x3f: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x40: IF (Stack[-1] == 0) GOTO 0x44; Pop(1)

0x41: PushEmpty()
0x42: Call2 0x45

0x43: Pop(0)
0x44: Return(); Pop(2)

0x45: Push("k7q03")
0x46: Push((int) -1)
0x47: @ SetVariable(Stack[-2], Stack[-1])
0x48: Pop(2)
0x49: PushEmpty()
0x4a: Call2 0x55

0x4b: Pop(0)
0x4c: Return(); Pop(0)

0x4d: Push("k7q03")
0x4e: Push((int) 1000)
0x4f: @ SetVariable(Stack[-2], Stack[-1])
0x50: Pop(2)
0x51: PushEmpty()
0x52: Call2 0x55

0x53: Pop(0)
0x54: Return(); Pop(0)

0x55: EventDisable(26)
0x56: Push( Stack[0 + Tasks[-1].StackPointer] )
0x57: IF (Stack[-1] == 0) GOTO 0x5b; Pop(1)

0x58: Push("cleanup")
0x59: @ Trigger(Stack[-0], Stack[-1])
0x5a: Pop(1)
0x5b: Push( Stack[1 + Tasks[-1].StackPointer] )
0x5c: IF (Stack[-1] == 0) GOTO 0x60; Pop(1)

0x5d: Push("cleanup")
0x5e: @ Trigger(Stack[-1], Stack[-1])
0x5f: Pop(1)
0x60: Push( Stack[2 + Tasks[-1].StackPointer] )
0x61: IF (Stack[-1] == 0) GOTO 0x65; Pop(1)

0x62: Push("cleanup")
0x63: @ Trigger(Stack[-2], Stack[-1])
0x64: Pop(1)
0x65: PushEmpty(object)
0x66: Call2 0x83

0x67: Pop(0)
0x68: @ RemoveActor(Stack[-1])
0x69: Pop(1)
0x6a: Return(); Pop(0)

0x6b: PushEmpty(float, float)
0x6c: @ GetGameTime(Stack[-1])
0x6d: Pop(0)
0x6e: Push((int) 24)
0x6f: Pop(1); Push(Stack[-4] * Stack[-1]);
0x70: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x71: IF (Stack[-1] == 0) GOTO 0x76; Pop(1)

0x72: PushEmpty()
0x73: Call2 0x55

0x74: Pop(0)
0x75: GOTO 0x7d

0x76: Push((int) 0)
0x77: Push((int) 24)
0x78: Pop(1); Push(Stack[-5] * Stack[-1]);
0x79: @ SetTimeEvent(Stack[-2], Stack[-1])
0x7a: Pop(2)
0x7b: @ Hold()
0x7c: Pop(0)
0x7d: Return(); Pop(2)

0x7e: PushEmpty()
0x7f: PushEmpty()
0x80: Call2 0x3a

0x81: Pop(0)
0x82: Return(); Pop(0)

0x83: PushEmpty(object, object)
0x84: @ self(Stack[-1])
0x85: Pop(0)
0x86: Stack[-3] = Stack[-1]
0x87: Return(); Pop(2)

0x88: Stack[-1] = 0
0x89: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x8a: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0x8b: Pop(0)
0x8c: Pop(0); Push((bool) Stack[-4] == 0)
0x8d: IF (Stack[-1] == 0) GOTO 0x96; Pop(1)

0x8e: Push("Locator ")
0x8f: Pop(1); Push(Stack[-1] + Stack[-12]);
0x90: Push(" doesn't exist")
0x91: Pop(2); Push(Stack[-2] + Stack[-1]);
0x92: @ Trace(Stack[-1])
0x93: Pop(1)
0x94: Stack[-1] = 0
0x95: GOTO 0x98

0x96: @ AddActor(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0x97: Pop(0)
0x98: Stack[-13] = Stack[-1]
0x99: Return(); Pop(8)

0x9a: Stack[-1] = 0
