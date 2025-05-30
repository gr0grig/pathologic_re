GlobalVarCount = 0

Strings:
	place_rifles
	d9q01_rifle
	d9q01_rifle.xml
	unlock_polyh
	polyh@door1
	fail
	completed
	d9q01
	Door 
	 not found
	locked
	SetProperty

Import:
	Hold (0 args)
	Trace (1 args)
	GetMainOutdoorScene (1 args)
	AddActor (6 args)
	SetVariable (2 args)
	FindActor (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_26 Op = 0x4 Vars = (string)


0x0: @ Hold()
0x1: Pop(0)
0x2: GOTO 0x0

0x3: Return(); Pop(0)

0x4: PushEmpty(object, int, object, object, int, object)
0x5: @ Trace(Stack[-7])
0x6: Pop(0)
0x7: Push("place_rifles")
0x8: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x9: IF (Stack[-1] == 0) GOTO 0x1d; Pop(1)

0xa: @ GetMainOutdoorScene(Stack[-3])
0xb: Pop(0)
0xc: Stack[-2] = (int) 1
0xd: Push((int) 5)
0xe: Pop(1); Push((bool) Stack[-3] <= Stack[-1])
0xf: IF (Stack[-1] == 0) GOTO 0x1b; Pop(1)

0x10: Push("d9q01_rifle")
0x11: Pop(1); Push(Stack[-1] + Stack[-3]);
0x12: Push(CVector(0.0, 0.0, 0.0))
0x13: Push(CVector(0.0, 0.0, 1.0))
0x14: Push("d9q01_rifle.xml")
0x15: @ AddActor(Stack[-5], Stack[-4], Stack[-7], Stack[-3], Stack[-2], Stack[-1])
0x16: Pop(4)
0x17: Stack[-1] = 0
0x18: Push((int) 1)
0x19: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x1a: GOTO 0xd

0x1b: Stack[-3] = 0
0x1c: GOTO 0x33

0x1d: Push("unlock_polyh")
0x1e: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x1f: IF (Stack[-1] == 0) GOTO 0x26; Pop(1)

0x20: PushEmpty(string, bool)
0x21: Stack[-2] = "polyh@door1"
0x22: Stack[-1] = (bool) 0
0x23: Call 0x4b

0x24: Pop(2)
0x25: GOTO 0x33

0x26: Push("fail")
0x27: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x28: IF (Stack[-1] == 0) GOTO 0x2d; Pop(1)

0x29: PushEmpty()
0x2a: Call 0x34

0x2b: Pop(0)
0x2c: GOTO 0x33

0x2d: Push("completed")
0x2e: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x2f: IF (Stack[-1] == 0) GOTO 0x33; Pop(1)

0x30: PushEmpty()
0x31: Call 0x3c

0x32: Pop(0)
0x33: Return(); Pop(6)

0x34: Push("d9q01")
0x35: Push((int) -1)
0x36: @ SetVariable(Stack[-2], Stack[-1])
0x37: Pop(2)
0x38: PushEmpty()
0x39: Call 0x44

0x3a: Pop(0)
0x3b: Return(); Pop(0)

0x3c: Push("d9q01")
0x3d: Push((int) 1000)
0x3e: @ SetVariable(Stack[-2], Stack[-1])
0x3f: Pop(2)
0x40: PushEmpty()
0x41: Call 0x44

0x42: Pop(0)
0x43: Return(); Pop(0)

0x44: EventDisable(26)
0x45: PushEmpty(string, bool)
0x46: Stack[-2] = "polyh@door1"
0x47: Stack[-1] = (bool) 1
0x48: Call 0x4b

0x49: Pop(2)
0x4a: Return(); Pop(0)

0x4b: PushEmpty(object, object)
0x4c: @ FindActor(Stack[-1], Stack[-4])
0x4d: Pop(0)
0x4e: Pop(0); Push((bool) Stack[-1] == 0)
0x4f: IF (Stack[-1] == 0) GOTO 0x56; Pop(1)

0x50: Push("Door ")
0x51: Pop(1); Push(Stack[-1] + Stack[-5]);
0x52: Push(" not found")
0x53: Pop(2); Push(Stack[-2] + Stack[-1]);
0x54: @ Trace(Stack[-1])
0x55: Pop(1)
0x56: Push("locked")
0x57: @@ SetProperty(Stack[-1], Stack[-4])
0x58: Pop(1)
0x59: Return(); Pop(2)

0x5a: Stack[-1] = 0
