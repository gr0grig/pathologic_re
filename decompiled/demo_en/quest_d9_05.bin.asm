GlobalVarCount = 0

Strings:
	termitnik
	pt_d9q03_burah
	NPC_Burah
	d9q05_burah.xml
	init_soldiers
	fail
	completed
	d9q05
	cleanup
	GetLocator
	Locator 
	 doesn't exist

Import:
	GetSceneByName (2 args)
	Trace (1 args)
	GetVariable (2 args)
	SetVariable (2 args)
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
	GTASK_0 Vars = (object) Params = 0
		EVENT_26 Op = 0x12 Vars = (string)
		EVENT_9 Op = 0x61 Vars = (int, float)


0x0: PushEmpty(object, object)
0x1: Push("termitnik")
0x2: @ GetSceneByName(Stack[-2], Stack[-1])
0x3: Pop(1)
0x4: PushEmpty(object, object, string, string, string)
0x5: Stack[-4] = Stack[-6]
0x6: Stack[-3] = "pt_d9q03_burah"
0x7: Stack[-2] = "NPC_Burah"
0x8: Stack[-1] = "d9q05_burah.xml"
0x9: Call2 0x6c

0xa: Stack[0 + Tasks[-1].StackPointer] = Stack[-5]
0xb: Pop(5)
0xc: PushEmpty(int)
0xd: Stack[-1] = (int) 9
0xe: Call2 0x4e

0xf: Pop(1)
0x10: Return(); Pop(2)

0x11: Stack[-1] = 0
0x12: PushEmpty()
0x13: @ Trace(Stack[-1])
0x14: Pop(0)
0x15: Push("init_soldiers")
0x16: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x17: IF (Stack[-1] == 0) GOTO 0x19; Pop(1)

0x18: GOTO 0x26

0x19: Push("fail")
0x1a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1b: IF (Stack[-1] == 0) GOTO 0x20; Pop(1)

0x1c: PushEmpty()
0x1d: Call2 0x32

0x1e: Pop(0)
0x1f: GOTO 0x26

0x20: Push("completed")
0x21: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x22: IF (Stack[-1] == 0) GOTO 0x26; Pop(1)

0x23: PushEmpty()
0x24: Call2 0x3a

0x25: Pop(0)
0x26: Return(); Pop(0)

0x27: PushEmpty(int, int)
0x28: Push("d9q05")
0x29: @ GetVariable(Stack[-1], Stack[-2])
0x2a: Pop(1)
0x2b: Push((int) 1000)
0x2c: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x2d: IF (Stack[-1] == 0) GOTO 0x31; Pop(1)

0x2e: PushEmpty()
0x2f: Call2 0x32

0x30: Pop(0)
0x31: Return(); Pop(2)

0x32: Push("d9q05")
0x33: Push((int) -1)
0x34: @ SetVariable(Stack[-2], Stack[-1])
0x35: Pop(2)
0x36: PushEmpty()
0x37: Call2 0x42

0x38: Pop(0)
0x39: Return(); Pop(0)

0x3a: Push("d9q05")
0x3b: Push((int) 1000)
0x3c: @ SetVariable(Stack[-2], Stack[-1])
0x3d: Pop(2)
0x3e: PushEmpty()
0x3f: Call2 0x42

0x40: Pop(0)
0x41: Return(); Pop(0)

0x42: EventDisable(26)
0x43: Push( Stack[0 + Tasks[-1].StackPointer] )
0x44: IF (Stack[-1] == 0) GOTO 0x48; Pop(1)

0x45: Push("cleanup")
0x46: @ Trigger(Stack[-0], Stack[-1])
0x47: Pop(1)
0x48: PushEmpty(object)
0x49: Call2 0x66

0x4a: Pop(0)
0x4b: @ RemoveActor(Stack[-1])
0x4c: Pop(1)
0x4d: Return(); Pop(0)

0x4e: PushEmpty(float, float)
0x4f: @ GetGameTime(Stack[-1])
0x50: Pop(0)
0x51: Push((int) 24)
0x52: Pop(1); Push(Stack[-4] * Stack[-1]);
0x53: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x54: IF (Stack[-1] == 0) GOTO 0x59; Pop(1)

0x55: PushEmpty()
0x56: Call2 0x42

0x57: Pop(0)
0x58: GOTO 0x60

0x59: Push((int) 0)
0x5a: Push((int) 24)
0x5b: Pop(1); Push(Stack[-5] * Stack[-1]);
0x5c: @ SetTimeEvent(Stack[-2], Stack[-1])
0x5d: Pop(2)
0x5e: @ Hold()
0x5f: Pop(0)
0x60: Return(); Pop(2)

0x61: PushEmpty()
0x62: PushEmpty()
0x63: Call2 0x27

0x64: Pop(0)
0x65: Return(); Pop(0)

0x66: PushEmpty(object, object)
0x67: @ self(Stack[-1])
0x68: Pop(0)
0x69: Stack[-3] = Stack[-1]
0x6a: Return(); Pop(2)

0x6b: Stack[-1] = 0
0x6c: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x6d: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0x6e: Pop(0)
0x6f: Pop(0); Push((bool) Stack[-4] == 0)
0x70: IF (Stack[-1] == 0) GOTO 0x79; Pop(1)

0x71: Push("Locator ")
0x72: Pop(1); Push(Stack[-1] + Stack[-12]);
0x73: Push(" doesn't exist")
0x74: Pop(2); Push(Stack[-2] + Stack[-1]);
0x75: @ Trace(Stack[-1])
0x76: Pop(1)
0x77: Stack[-1] = 0
0x78: GOTO 0x7b

0x79: @ AddActor(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0x7a: Pop(0)
0x7b: Stack[-13] = Stack[-1]
0x7c: Return(); Pop(8)

0x7d: Stack[-1] = 0
