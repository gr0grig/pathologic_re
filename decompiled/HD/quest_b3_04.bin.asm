GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	pt_d3q01_gpatrol1
	pers_patrool
	b3q04_gpatrol.xml
	d3q01_graveyard_fire
	d3q01_graveyard_fire.xml
	put_item
	b3q04
	fail
	completed
	Remove
	cleanup
	GetLocator
	Locator 
	 doesn't exist
	AddStationaryActor

Import:
	GetMainOutdoorScene (1 args)
	AddActor (6 args)
	sync (0 args)
	Trigger (2 args)
	SetVariable (2 args)
	Trace (1 args)
	GetVariable (2 args)
	RemoveActor (1 args)
	GetGameTime (1 args)
	SetTimeEvent (2 args)
	Hold (0 args)
	self (1 args)

RunOp = 0x18
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object, object) Params = 0
		EVENT_26 Op = 0x24 Vars = (string)
		EVENT_9 Op = 0x73 Vars = (int, float)


0x0: PushEmpty(object, object)
0x1: @ GetMainOutdoorScene(Stack[-1])
0x2: Pop(0)
0x3: PushEmpty(object, object, string, string, string)
0x4: Stack[-4] = Stack[-6]
0x5: Stack[-3] = "pt_d3q01_gpatrol1"
0x6: Stack[-2] = "pers_patrool"
0x7: Stack[-1] = "b3q04_gpatrol.xml"
0x8: Call2 0x7e

0x9: Stack[0 + Tasks[-1].StackPointer] = Stack[-5]
0xa: Pop(5)
0xb: Push("d3q01_graveyard_fire")
0xc: Push(CVector(0.0, 0.0, 0.0))
0xd: Push(CVector(0.0, 0.0, 1.0))
0xe: Push("d3q01_graveyard_fire.xml")
0xf: @ AddActor(Stack[-1], Stack[-4], Stack[-5], Stack[-3], Stack[-2], Stack[-1])
0x10: Pop(4)
0x11: @ sync()
0x12: Pop(0)
0x13: Push("put_item")
0x14: @ Trigger(Stack[-1], Stack[-1])
0x15: Pop(1)
0x16: Return(); Pop(2)

0x17: Stack[-1] = 0
0x18: Push("b3q04")
0x19: Push((int) 1)
0x1a: @ SetVariable(Stack[-2], Stack[-1])
0x1b: Pop(2)
0x1c: PushEmpty()
0x1d: Call2 0x0

0x1e: Pop(0)
0x1f: PushEmpty(int)
0x20: Stack[-1] = (int) 3
0x21: Call2 0x60

0x22: Pop(1)
0x23: Return(); Pop(0)

0x24: PushEmpty()
0x25: @ Trace(Stack[-1])
0x26: Pop(0)
0x27: Push("fail")
0x28: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x29: IF (Stack[-1] == 0) GOTO 0x2e; Pop(1)

0x2a: PushEmpty()
0x2b: Call2 0x40

0x2c: Pop(0)
0x2d: GOTO 0x34

0x2e: Push("completed")
0x2f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x30: IF (Stack[-1] == 0) GOTO 0x34; Pop(1)

0x31: PushEmpty()
0x32: Call2 0x48

0x33: Pop(0)
0x34: Return(); Pop(0)

0x35: PushEmpty(int, int)
0x36: Push("b3q04")
0x37: @ GetVariable(Stack[-1], Stack[-2])
0x38: Pop(1)
0x39: Push((int) 1000)
0x3a: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x3b: IF (Stack[-1] == 0) GOTO 0x3f; Pop(1)

0x3c: PushEmpty()
0x3d: Call2 0x40

0x3e: Pop(0)
0x3f: Return(); Pop(2)

0x40: Push("b3q04")
0x41: Push((int) -1)
0x42: @ SetVariable(Stack[-2], Stack[-1])
0x43: Pop(2)
0x44: PushEmpty()
0x45: Call2 0x50

0x46: Pop(0)
0x47: Return(); Pop(0)

0x48: Push("b3q04")
0x49: Push((int) 1000)
0x4a: @ SetVariable(Stack[-2], Stack[-1])
0x4b: Pop(2)
0x4c: PushEmpty()
0x4d: Call2 0x50

0x4e: Pop(0)
0x4f: Return(); Pop(0)

0x50: EventDisable(26)
0x51: Push( Stack[0 + Tasks[-1].StackPointer] )
0x52: IF (Stack[-1] == 0) GOTO 0x55; Pop(1)

0x53: @@ Remove()
0x54: Pop(0)
0x55: Push( Stack[1 + Tasks[-1].StackPointer] )
0x56: IF (Stack[-1] == 0) GOTO 0x5a; Pop(1)

0x57: Push("cleanup")
0x58: @ Trigger(Stack[-1], Stack[-1])
0x59: Pop(1)
0x5a: PushEmpty(object)
0x5b: Call2 0x78

0x5c: Pop(0)
0x5d: @ RemoveActor(Stack[-1])
0x5e: Pop(1)
0x5f: Return(); Pop(0)

0x60: PushEmpty(float, float)
0x61: @ GetGameTime(Stack[-1])
0x62: Pop(0)
0x63: Push((int) 24)
0x64: Pop(1); Push(Stack[-4] * Stack[-1]);
0x65: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x66: IF (Stack[-1] == 0) GOTO 0x6b; Pop(1)

0x67: PushEmpty()
0x68: Call2 0x50

0x69: Pop(0)
0x6a: GOTO 0x72

0x6b: Push((int) 0)
0x6c: Push((int) 24)
0x6d: Pop(1); Push(Stack[-5] * Stack[-1]);
0x6e: @ SetTimeEvent(Stack[-2], Stack[-1])
0x6f: Pop(2)
0x70: @ Hold()
0x71: Pop(0)
0x72: Return(); Pop(2)

0x73: PushEmpty()
0x74: PushEmpty()
0x75: Call2 0x35

0x76: Pop(0)
0x77: Return(); Pop(0)

0x78: PushEmpty(object, object)
0x79: @ self(Stack[-1])
0x7a: Pop(0)
0x7b: Stack[-3] = Stack[-1]
0x7c: Return(); Pop(2)

0x7d: Stack[-1] = 0
0x7e: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x7f: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0x80: Pop(0)
0x81: Pop(0); Push((bool) Stack[-4] == 0)
0x82: IF (Stack[-1] == 0) GOTO 0x8b; Pop(1)

0x83: Push("Locator ")
0x84: Pop(1); Push(Stack[-1] + Stack[-12]);
0x85: Push(" doesn't exist")
0x86: Pop(2); Push(Stack[-2] + Stack[-1]);
0x87: @ Trace(Stack[-1])
0x88: Pop(1)
0x89: Stack[-1] = 0
0x8a: GOTO 0x8d

0x8b: @@ AddStationaryActor(Stack[-1], Stack[-3], Stack[-2], Stack[-10], Stack[-9])
0x8c: Pop(0)
0x8d: Stack[-13] = Stack[-1]
0x8e: Return(); Pop(8)

0x8f: Stack[-1] = 0
