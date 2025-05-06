GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	quest_b1_01
	remove_cutscene
	b1q03
	place_doberman
	pt_b1q03_doberman
	pers_karlik
	b1q03_doberman.xml
	doberman_dead
	b1q03_dead
	cleanup
	Remove
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
	FindActor (2 args)
	Trigger (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 0
		EVENT_26 Op = 0xe Vars = (string)
		EVENT_9 Op = 0x61 Vars = (int, float)


0x0: PushEmpty(bool, string, string)
0x1: Stack[-2] = "quest_b1_01"
0x2: Stack[-1] = "remove_cutscene"
0x3: Call2 0x7e

0x4: Pop(3)
0x5: Push("b1q03")
0x6: Push((int) 1)
0x7: @ SetVariable(Stack[-2], Stack[-1])
0x8: Pop(2)
0x9: PushEmpty(int)
0xa: Stack[-1] = (int) 1
0xb: Call2 0x4e

0xc: Pop(1)
0xd: Return(); Pop(0)

0xe: PushEmpty(object, object)
0xf: @ Trace(Stack[-3])
0x10: Pop(0)
0x11: Push("place_doberman")
0x12: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x13: IF (Stack[-1] == 0) GOTO 0x20; Pop(1)

0x14: @ GetMainOutdoorScene(Stack[-1])
0x15: Pop(0)
0x16: PushEmpty(object, object, string, string, string)
0x17: Stack[-4] = Stack[-6]
0x18: Stack[-3] = "pt_b1q03_doberman"
0x19: Stack[-2] = "pers_karlik"
0x1a: Stack[-1] = "b1q03_doberman.xml"
0x1b: Call2 0x6c

0x1c: Stack[0 + Tasks[-1].StackPointer] = Stack[-5]
0x1d: Pop(5)
0x1e: Stack[-1] = 0
0x1f: GOTO 0x2e

0x20: Push("doberman_dead")
0x21: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x22: IF (Stack[-1] == 0) GOTO 0x28; Pop(1)

0x23: Push("b1q03_dead")
0x24: Push((int) 1)
0x25: @ SetVariable(Stack[-2], Stack[-1])
0x26: Pop(2)
0x27: GOTO 0x2e

0x28: Push("cleanup")
0x29: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x2a: IF (Stack[-1] == 0) GOTO 0x2e; Pop(1)

0x2b: PushEmpty()
0x2c: Call2 0x42

0x2d: Pop(0)
0x2e: Return(); Pop(2)

0x2f: PushEmpty(int, int)
0x30: Push("b1q03")
0x31: @ GetVariable(Stack[-1], Stack[-2])
0x32: Pop(1)
0x33: Push((int) 1000)
0x34: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x35: IF (Stack[-1] == 0) GOTO 0x39; Pop(1)

0x36: PushEmpty()
0x37: Call2 0x3a

0x38: Pop(0)
0x39: Return(); Pop(2)

0x3a: Push("b1q03")
0x3b: Push((int) -1)
0x3c: @ SetVariable(Stack[-2], Stack[-1])
0x3d: Pop(2)
0x3e: PushEmpty()
0x3f: Call2 0x42

0x40: Pop(0)
0x41: Return(); Pop(0)

0x42: EventDisable(26)
0x43: Push( Stack[0 + Tasks[-1].StackPointer] )
0x44: IF (Stack[-1] == 0) GOTO 0x48; Pop(1)

0x45: @@ Remove()
0x46: Pop(0)
0x47: Stack[0 + Tasks[-1].StackPointer] = 0
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
0x63: Call2 0x2f

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

0x79: @@ AddStationaryActor(Stack[-1], Stack[-3], Stack[-2], Stack[-10], Stack[-9])
0x7a: Pop(0)
0x7b: Stack[-13] = Stack[-1]
0x7c: Return(); Pop(8)

0x7d: Stack[-1] = 0
0x7e: PushEmpty(object, object)
0x7f: @ FindActor(Stack[-1], Stack[-4])
0x80: Pop(0)
0x81: Pop(0); Push((bool) Stack[-1] == 0)
0x82: IF (Stack[-1] == 0) GOTO 0x85; Pop(1)

0x83: Stack[-5] = (bool) 0
0x84: Return(); Pop(2)

0x85: @ Trigger(Stack[-1], Stack[-3])
0x86: Pop(0)
0x87: Stack[-5] = (bool) 1
0x88: Return(); Pop(2)

0x89: Stack[-1] = 0
