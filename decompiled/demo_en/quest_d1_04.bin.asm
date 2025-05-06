GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	d1q04
	r2_house_2_02
	pt_powder
	GetLocator
	Locator doesn't exist for d1_04_powder
	scripted_container
	d1q04_item_powder.xml
	r2_house_2_02@door1
	r2_house_2_02@door2
	fail
	completed
	Door 
	 not found
	locked
	SetProperty

Import:
	SetVariable (2 args)
	GetSceneByName (2 args)
	Trace (1 args)
	AddActorByType (6 args)
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
		EVENT_26 Op = 0x25 Vars = (string)
		EVENT_9 Op = 0x6b Vars = (int, float)


0x0: PushEmpty(object, bool, cvector, cvector, object, bool, cvector, cvector)
0x1: Push("d1q04")
0x2: Push((int) 1)
0x3: @ SetVariable(Stack[-2], Stack[-1])
0x4: Pop(2)
0x5: Push("r2_house_2_02")
0x6: @ GetSceneByName(Stack[-5], Stack[-1])
0x7: Pop(1)
0x8: Push("pt_powder")
0x9: @@ GetLocator(Stack[-1], Stack[-4], Stack[-3], Stack[-2])
0xa: Pop(1)
0xb: Pop(0); Push((bool) Stack[-3] == 0)
0xc: IF (Stack[-1] == 0) GOTO 0x11; Pop(1)

0xd: Push("Locator doesn't exist for d1_04_powder")
0xe: @ Trace(Stack[-1])
0xf: Pop(1)
0x10: GOTO 0x15

0x11: Push("scripted_container")
0x12: Push("d1q04_item_powder.xml")
0x13: @ AddActorByType(Stack[-0], Stack[-2], Stack[-6], Stack[-4], Stack[-3], Stack[-1])
0x14: Pop(2)
0x15: PushEmpty(string, bool)
0x16: Stack[-2] = "r2_house_2_02@door1"
0x17: Stack[-1] = (bool) 0
0x18: Call2 0x76

0x19: Pop(2)
0x1a: PushEmpty(string, bool)
0x1b: Stack[-2] = "r2_house_2_02@door2"
0x1c: Stack[-1] = (bool) 0
0x1d: Call2 0x76

0x1e: Pop(2)
0x1f: PushEmpty(int)
0x20: Stack[-1] = (int) 1
0x21: Call2 0x58

0x22: Pop(1)
0x23: Return(); Pop(8)

0x24: Stack[-4] = 0
0x25: PushEmpty()
0x26: @ Trace(Stack[-1])
0x27: Pop(0)
0x28: Push("fail")
0x29: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2a: IF (Stack[-1] == 0) GOTO 0x2f; Pop(1)

0x2b: PushEmpty()
0x2c: Call2 0x3e

0x2d: Pop(0)
0x2e: GOTO 0x35

0x2f: Push("completed")
0x30: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x31: IF (Stack[-1] == 0) GOTO 0x35; Pop(1)

0x32: PushEmpty()
0x33: Call2 0x36

0x34: Pop(0)
0x35: Return(); Pop(0)

0x36: Push("d1q04")
0x37: Push((int) 1000)
0x38: @ SetVariable(Stack[-2], Stack[-1])
0x39: Pop(2)
0x3a: PushEmpty()
0x3b: Call2 0x51

0x3c: Pop(0)
0x3d: Return(); Pop(0)

0x3e: Push("d1q04")
0x3f: Push((int) -1)
0x40: @ SetVariable(Stack[-2], Stack[-1])
0x41: Pop(2)
0x42: PushEmpty()
0x43: Call2 0x51

0x44: Pop(0)
0x45: Return(); Pop(0)

0x46: PushEmpty(int, int)
0x47: Push("d1q04")
0x48: @ GetVariable(Stack[-1], Stack[-2])
0x49: Pop(1)
0x4a: Push((int) 1000)
0x4b: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x4c: IF (Stack[-1] == 0) GOTO 0x50; Pop(1)

0x4d: PushEmpty()
0x4e: Call2 0x3e

0x4f: Pop(0)
0x50: Return(); Pop(2)

0x51: EventDisable(26)
0x52: PushEmpty(object)
0x53: Call2 0x70

0x54: Pop(0)
0x55: @ RemoveActor(Stack[-1])
0x56: Pop(1)
0x57: Return(); Pop(0)

0x58: PushEmpty(float, float)
0x59: @ GetGameTime(Stack[-1])
0x5a: Pop(0)
0x5b: Push((int) 24)
0x5c: Pop(1); Push(Stack[-4] * Stack[-1]);
0x5d: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x5e: IF (Stack[-1] == 0) GOTO 0x63; Pop(1)

0x5f: PushEmpty()
0x60: Call2 0x51

0x61: Pop(0)
0x62: GOTO 0x6a

0x63: Push((int) 0)
0x64: Push((int) 24)
0x65: Pop(1); Push(Stack[-5] * Stack[-1]);
0x66: @ SetTimeEvent(Stack[-2], Stack[-1])
0x67: Pop(2)
0x68: @ Hold()
0x69: Pop(0)
0x6a: Return(); Pop(2)

0x6b: PushEmpty()
0x6c: PushEmpty()
0x6d: Call2 0x46

0x6e: Pop(0)
0x6f: Return(); Pop(0)

0x70: PushEmpty(object, object)
0x71: @ self(Stack[-1])
0x72: Pop(0)
0x73: Stack[-3] = Stack[-1]
0x74: Return(); Pop(2)

0x75: Stack[-1] = 0
0x76: PushEmpty(object, object)
0x77: @ FindActor(Stack[-1], Stack[-4])
0x78: Pop(0)
0x79: Pop(0); Push((bool) Stack[-1] == 0)
0x7a: IF (Stack[-1] == 0) GOTO 0x82; Pop(1)

0x7b: Push("Door ")
0x7c: Pop(1); Push(Stack[-1] + Stack[-5]);
0x7d: Push(" not found")
0x7e: Pop(2); Push(Stack[-2] + Stack[-1]);
0x7f: @ Trace(Stack[-1])
0x80: Pop(1)
0x81: GOTO 0x85

0x82: Push("locked")
0x83: @@ SetProperty(Stack[-1], Stack[-4])
0x84: Pop(1)
0x85: Return(); Pop(2)

0x86: Stack[-1] = 0
