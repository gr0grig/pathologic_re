GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	place_trigger
	b10q02_trigger
	b10q02_trigger.xml
	place_bomb
	b10q02_bomb
	b10q02_bomb.xml
	remove_bomb
	cleanup
	fail
	completed
	b10q02

Import:
	Trace (1 args)
	GetMainOutdoorScene (1 args)
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
	GTASK_0 Vars = (object, object) Params = 0
		EVENT_26 Op = 0x5 Vars = (string)
		EVENT_9 Op = 0x78 Vars = (int, float)


0x0: PushEmpty(int)
0x1: Stack[-1] = (int) 10
0x2: Call2 0x65

0x3: Pop(1)
0x4: Return(); Pop(0)

0x5: PushEmpty(object, object, object, object)
0x6: @ Trace(Stack[-5])
0x7: Pop(0)
0x8: Push("place_trigger")
0x9: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0xa: IF (Stack[-1] == 0) GOTO 0x16; Pop(1)

0xb: @ GetMainOutdoorScene(Stack[-2])
0xc: Pop(0)
0xd: PushEmpty(object, object, string, string)
0xe: Stack[-3] = Stack[-6]
0xf: Stack[-2] = "b10q02_trigger"
0x10: Stack[-1] = "b10q02_trigger.xml"
0x11: Call2 0x83

0x12: Stack[0 + Tasks[-1].StackPointer] = Stack[-4]
0x13: Pop(4)
0x14: Stack[-2] = 0
0x15: GOTO 0x38

0x16: Push("place_bomb")
0x17: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x18: IF (Stack[-1] == 0) GOTO 0x24; Pop(1)

0x19: @ GetMainOutdoorScene(Stack[-1])
0x1a: Pop(0)
0x1b: PushEmpty(object, object, string, string)
0x1c: Stack[-3] = Stack[-5]
0x1d: Stack[-2] = "b10q02_bomb"
0x1e: Stack[-1] = "b10q02_bomb.xml"
0x1f: Call2 0x83

0x20: Stack[1 + Tasks[-1].StackPointer] = Stack[-4]
0x21: Pop(4)
0x22: Stack[-1] = 0
0x23: GOTO 0x38

0x24: Push("remove_bomb")
0x25: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x26: IF (Stack[-1] == 0) GOTO 0x2b; Pop(1)

0x27: Push("cleanup")
0x28: @ Trigger(Stack[-1], Stack[-1])
0x29: Pop(1)
0x2a: GOTO 0x38

0x2b: Push("fail")
0x2c: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x2d: IF (Stack[-1] == 0) GOTO 0x32; Pop(1)

0x2e: PushEmpty()
0x2f: Call2 0x44

0x30: Pop(0)
0x31: GOTO 0x38

0x32: Push("completed")
0x33: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x34: IF (Stack[-1] == 0) GOTO 0x38; Pop(1)

0x35: PushEmpty()
0x36: Call2 0x4c

0x37: Pop(0)
0x38: Return(); Pop(4)

0x39: PushEmpty(int, int)
0x3a: Push("b10q02")
0x3b: @ GetVariable(Stack[-1], Stack[-2])
0x3c: Pop(1)
0x3d: Push((int) 1000)
0x3e: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x3f: IF (Stack[-1] == 0) GOTO 0x43; Pop(1)

0x40: PushEmpty()
0x41: Call2 0x44

0x42: Pop(0)
0x43: Return(); Pop(2)

0x44: Push("b10q02")
0x45: Push((int) -1)
0x46: @ SetVariable(Stack[-2], Stack[-1])
0x47: Pop(2)
0x48: PushEmpty()
0x49: Call2 0x54

0x4a: Pop(0)
0x4b: Return(); Pop(0)

0x4c: Push("b10q02")
0x4d: Push((int) 1000)
0x4e: @ SetVariable(Stack[-2], Stack[-1])
0x4f: Pop(2)
0x50: PushEmpty()
0x51: Call2 0x54

0x52: Pop(0)
0x53: Return(); Pop(0)

0x54: EventDisable(26)
0x55: Push( Stack[0 + Tasks[-1].StackPointer] )
0x56: IF (Stack[-1] == 0) GOTO 0x5a; Pop(1)

0x57: Push("cleanup")
0x58: @ Trigger(Stack[-0], Stack[-1])
0x59: Pop(1)
0x5a: Push( Stack[1 + Tasks[-1].StackPointer] )
0x5b: IF (Stack[-1] == 0) GOTO 0x5f; Pop(1)

0x5c: Push("cleanup")
0x5d: @ Trigger(Stack[-1], Stack[-1])
0x5e: Pop(1)
0x5f: PushEmpty(object)
0x60: Call2 0x7d

0x61: Pop(0)
0x62: @ RemoveActor(Stack[-1])
0x63: Pop(1)
0x64: Return(); Pop(0)

0x65: PushEmpty(float, float)
0x66: @ GetGameTime(Stack[-1])
0x67: Pop(0)
0x68: Push((int) 24)
0x69: Pop(1); Push(Stack[-4] * Stack[-1]);
0x6a: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x6b: IF (Stack[-1] == 0) GOTO 0x70; Pop(1)

0x6c: PushEmpty()
0x6d: Call2 0x54

0x6e: Pop(0)
0x6f: GOTO 0x77

0x70: Push((int) 0)
0x71: Push((int) 24)
0x72: Pop(1); Push(Stack[-5] * Stack[-1]);
0x73: @ SetTimeEvent(Stack[-2], Stack[-1])
0x74: Pop(2)
0x75: @ Hold()
0x76: Pop(0)
0x77: Return(); Pop(2)

0x78: PushEmpty()
0x79: PushEmpty()
0x7a: Call2 0x39

0x7b: Pop(0)
0x7c: Return(); Pop(0)

0x7d: PushEmpty(object, object)
0x7e: @ self(Stack[-1])
0x7f: Pop(0)
0x80: Stack[-3] = Stack[-1]
0x81: Return(); Pop(2)

0x82: Stack[-1] = 0
0x83: PushEmpty(object, object)
0x84: Push(CVector(0.0, 0.0, 0.0))
0x85: Push(CVector(0.0, 0.0, 1.0))
0x86: @ AddActor(Stack[-3], Stack[-6], Stack[-7], Stack[-2], Stack[-1], Stack[-5])
0x87: Pop(2)
0x88: Stack[-6] = Stack[-1]
0x89: Return(); Pop(2)

0x8a: Stack[-1] = 0
