GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	storojka
	pt_b1q02_agony
	pers_worker
	b1q02_agony.xml
	agony_dead
	b1q02_dead
	agony_cured
	quest_b1_02_cutscene
	fail
	completed
	b1q02
	cleanup
	.bin
	GetLocator
	Locator 
	 doesn't exist

Import:
	GetSceneByName (2 args)
	Trace (1 args)
	SetVariable (2 args)
	RemoveActor (1 args)
	GetVariable (2 args)
	Trigger (2 args)
	CameraSwitchToNormal (0 args)
	GetGameTime (1 args)
	SetTimeEvent (2 args)
	Hold (0 args)
	self (1 args)
	GetMainOutdoorScene (1 args)
	AddBlankActor (4 args)
	AddActor (6 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 0
		EVENT_26 Op = 0x12 Vars = (string)
		EVENT_24 Op = 0x5d Vars = (int)
		EVENT_9 Op = 0x74 Vars = (int, float)


0x0: PushEmpty(object, object)
0x1: Push("storojka")
0x2: @ GetSceneByName(Stack[-2], Stack[-1])
0x3: Pop(1)
0x4: PushEmpty(object, object, string, string, string)
0x5: Stack[-4] = Stack[-6]
0x6: Stack[-3] = "pt_b1q02_agony"
0x7: Stack[-2] = "pers_worker"
0x8: Stack[-1] = "b1q02_agony.xml"
0x9: Call2 0x8a

0xa: Stack[0 + Tasks[-1].StackPointer] = Stack[-5]
0xb: Pop(5)
0xc: PushEmpty(int)
0xd: Stack[-1] = (int) 1
0xe: Call2 0x61

0xf: Pop(1)
0x10: Return(); Pop(2)

0x11: Stack[-1] = 0
0x12: PushEmpty()
0x13: @ Trace(Stack[-1])
0x14: Pop(0)
0x15: Push("agony_dead")
0x16: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x17: IF (Stack[-1] == 0) GOTO 0x1d; Pop(1)

0x18: Push("b1q02_dead")
0x19: Push((bool) 1)
0x1a: @ SetVariable(Stack[-2], Stack[-1])
0x1b: Pop(2)
0x1c: GOTO 0x35

0x1d: Push("agony_cured")
0x1e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1f: IF (Stack[-1] == 0) GOTO 0x28; Pop(1)

0x20: @ RemoveActor(Stack[-0])
0x21: Pop(0)
0x22: Stack[0 + Tasks[-1].StackPointer] = 0
0x23: PushEmpty(object, string)
0x24: Stack[-1] = "quest_b1_02_cutscene"
0x25: Call2 0x7f

0x26: Pop(2)
0x27: GOTO 0x35

0x28: Push("fail")
0x29: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2a: IF (Stack[-1] == 0) GOTO 0x2f; Pop(1)

0x2b: PushEmpty()
0x2c: Call2 0x41

0x2d: Pop(0)
0x2e: GOTO 0x35

0x2f: Push("completed")
0x30: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x31: IF (Stack[-1] == 0) GOTO 0x35; Pop(1)

0x32: PushEmpty()
0x33: Call2 0x49

0x34: Pop(0)
0x35: Return(); Pop(0)

0x36: PushEmpty(int, int)
0x37: Push("b1q02")
0x38: @ GetVariable(Stack[-1], Stack[-2])
0x39: Pop(1)
0x3a: Push((int) 1000)
0x3b: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x3c: IF (Stack[-1] == 0) GOTO 0x40; Pop(1)

0x3d: PushEmpty()
0x3e: Call2 0x41

0x3f: Pop(0)
0x40: Return(); Pop(2)

0x41: Push("b1q02")
0x42: Push((int) -1)
0x43: @ SetVariable(Stack[-2], Stack[-1])
0x44: Pop(2)
0x45: PushEmpty()
0x46: Call2 0x51

0x47: Pop(0)
0x48: Return(); Pop(0)

0x49: Push("b1q02")
0x4a: Push((int) 1000)
0x4b: @ SetVariable(Stack[-2], Stack[-1])
0x4c: Pop(2)
0x4d: PushEmpty()
0x4e: Call2 0x51

0x4f: Pop(0)
0x50: Return(); Pop(0)

0x51: EventDisable(26)
0x52: Push( Stack[0 + Tasks[-1].StackPointer] )
0x53: IF (Stack[-1] == 0) GOTO 0x57; Pop(1)

0x54: Push("cleanup")
0x55: @ Trigger(Stack[-0], Stack[-1])
0x56: Pop(1)
0x57: PushEmpty(object)
0x58: Call2 0x79

0x59: Pop(0)
0x5a: @ RemoveActor(Stack[-1])
0x5b: Pop(1)
0x5c: Return(); Pop(0)

0x5d: PushEmpty()
0x5e: @ CameraSwitchToNormal()
0x5f: Pop(0)
0x60: Return(); Pop(0)

0x61: PushEmpty(float, float)
0x62: @ GetGameTime(Stack[-1])
0x63: Pop(0)
0x64: Push((int) 24)
0x65: Pop(1); Push(Stack[-4] * Stack[-1]);
0x66: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x67: IF (Stack[-1] == 0) GOTO 0x6c; Pop(1)

0x68: PushEmpty()
0x69: Call2 0x51

0x6a: Pop(0)
0x6b: GOTO 0x73

0x6c: Push((int) 0)
0x6d: Push((int) 24)
0x6e: Pop(1); Push(Stack[-5] * Stack[-1]);
0x6f: @ SetTimeEvent(Stack[-2], Stack[-1])
0x70: Pop(2)
0x71: @ Hold()
0x72: Pop(0)
0x73: Return(); Pop(2)

0x74: PushEmpty()
0x75: PushEmpty()
0x76: Call2 0x36

0x77: Pop(0)
0x78: Return(); Pop(0)

0x79: PushEmpty(object, object)
0x7a: @ self(Stack[-1])
0x7b: Pop(0)
0x7c: Stack[-3] = Stack[-1]
0x7d: Return(); Pop(2)

0x7e: Stack[-1] = 0
0x7f: PushEmpty(object, object, object, object)
0x80: @ GetMainOutdoorScene(Stack[-2])
0x81: Pop(0)
0x82: Push(".bin")
0x83: Pop(1); Push(Stack[-6] + Stack[-1]);
0x84: @ AddBlankActor(Stack[-2], Stack[-3], Stack[-6], Stack[-1])
0x85: Pop(1)
0x86: Stack[-6] = Stack[-1]
0x87: Return(); Pop(4)

0x88: Stack[-1] = 0
0x89: Stack[-2] = 0
0x8a: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x8b: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0x8c: Pop(0)
0x8d: Pop(0); Push((bool) Stack[-4] == 0)
0x8e: IF (Stack[-1] == 0) GOTO 0x97; Pop(1)

0x8f: Push("Locator ")
0x90: Pop(1); Push(Stack[-1] + Stack[-12]);
0x91: Push(" doesn't exist")
0x92: Pop(2); Push(Stack[-2] + Stack[-1]);
0x93: @ Trace(Stack[-1])
0x94: Pop(1)
0x95: Stack[-1] = 0
0x96: GOTO 0x99

0x97: @ AddActor(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0x98: Pop(0)
0x99: Stack[-13] = Stack[-1]
0x9a: Return(); Pop(8)

0x9b: Stack[-1] = 0
