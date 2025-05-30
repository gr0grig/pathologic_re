GlobalVarCount = 0

Strings:
	d10q02
	cot_georg@door1
	cot_maria@door1
	cot_viktor@door1
	warehouse_rubin@door1
	unlock_georg
	fail
	completed
	Door 
	 not found
	locked
	SetProperty

Import:
	SetVariable (2 args)
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
	GTASK_0  Params = 0
		EVENT_26 Op = 0x1d Vars = (string)
		EVENT_9 Op = 0x6c Vars = (int, float)


0x0: Push("d10q02")
0x1: Push((int) 1)
0x2: @ SetVariable(Stack[-2], Stack[-1])
0x3: Pop(2)
0x4: PushEmpty(string, bool)
0x5: Stack[-2] = "cot_georg@door1"
0x6: Stack[-1] = (bool) 1
0x7: Call2 0x77

0x8: Pop(2)
0x9: PushEmpty(string, bool)
0xa: Stack[-2] = "cot_maria@door1"
0xb: Stack[-1] = (bool) 0
0xc: Call2 0x77

0xd: Pop(2)
0xe: PushEmpty(string, bool)
0xf: Stack[-2] = "cot_viktor@door1"
0x10: Stack[-1] = (bool) 0
0x11: Call2 0x77

0x12: Pop(2)
0x13: PushEmpty(string, bool)
0x14: Stack[-2] = "warehouse_rubin@door1"
0x15: Stack[-1] = (bool) 0
0x16: Call2 0x77

0x17: Pop(2)
0x18: PushEmpty(int)
0x19: Stack[-1] = (int) 10
0x1a: Call2 0x59

0x1b: Pop(1)
0x1c: Return(); Pop(0)

0x1d: PushEmpty()
0x1e: @ Trace(Stack[-1])
0x1f: Pop(0)
0x20: Push("unlock_georg")
0x21: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x22: IF (Stack[-1] == 0) GOTO 0x29; Pop(1)

0x23: PushEmpty(string, bool)
0x24: Stack[-2] = "cot_georg@door1"
0x25: Stack[-1] = (bool) 0
0x26: Call2 0x77

0x27: Pop(2)
0x28: GOTO 0x36

0x29: Push("fail")
0x2a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2b: IF (Stack[-1] == 0) GOTO 0x30; Pop(1)

0x2c: PushEmpty()
0x2d: Call2 0x42

0x2e: Pop(0)
0x2f: GOTO 0x36

0x30: Push("completed")
0x31: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x32: IF (Stack[-1] == 0) GOTO 0x36; Pop(1)

0x33: PushEmpty()
0x34: Call2 0x4a

0x35: Pop(0)
0x36: Return(); Pop(0)

0x37: PushEmpty(int, int)
0x38: Push("d10q02")
0x39: @ GetVariable(Stack[-1], Stack[-2])
0x3a: Pop(1)
0x3b: Push((int) 1000)
0x3c: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x3d: IF (Stack[-1] == 0) GOTO 0x41; Pop(1)

0x3e: PushEmpty()
0x3f: Call2 0x42

0x40: Pop(0)
0x41: Return(); Pop(2)

0x42: Push("d10q02")
0x43: Push((int) -1)
0x44: @ SetVariable(Stack[-2], Stack[-1])
0x45: Pop(2)
0x46: PushEmpty()
0x47: Call2 0x52

0x48: Pop(0)
0x49: Return(); Pop(0)

0x4a: Push("d10q02")
0x4b: Push((int) 1000)
0x4c: @ SetVariable(Stack[-2], Stack[-1])
0x4d: Pop(2)
0x4e: PushEmpty()
0x4f: Call2 0x52

0x50: Pop(0)
0x51: Return(); Pop(0)

0x52: EventDisable(26)
0x53: PushEmpty(object)
0x54: Call2 0x71

0x55: Pop(0)
0x56: @ RemoveActor(Stack[-1])
0x57: Pop(1)
0x58: Return(); Pop(0)

0x59: PushEmpty(float, float)
0x5a: @ GetGameTime(Stack[-1])
0x5b: Pop(0)
0x5c: Push((int) 24)
0x5d: Pop(1); Push(Stack[-4] * Stack[-1]);
0x5e: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x5f: IF (Stack[-1] == 0) GOTO 0x64; Pop(1)

0x60: PushEmpty()
0x61: Call2 0x52

0x62: Pop(0)
0x63: GOTO 0x6b

0x64: Push((int) 0)
0x65: Push((int) 24)
0x66: Pop(1); Push(Stack[-5] * Stack[-1]);
0x67: @ SetTimeEvent(Stack[-2], Stack[-1])
0x68: Pop(2)
0x69: @ Hold()
0x6a: Pop(0)
0x6b: Return(); Pop(2)

0x6c: PushEmpty()
0x6d: PushEmpty()
0x6e: Call2 0x37

0x6f: Pop(0)
0x70: Return(); Pop(0)

0x71: PushEmpty(object, object)
0x72: @ self(Stack[-1])
0x73: Pop(0)
0x74: Stack[-3] = Stack[-1]
0x75: Return(); Pop(2)

0x76: Stack[-1] = 0
0x77: PushEmpty(object, object)
0x78: @ FindActor(Stack[-1], Stack[-4])
0x79: Pop(0)
0x7a: Pop(0); Push((bool) Stack[-1] == 0)
0x7b: IF (Stack[-1] == 0) GOTO 0x83; Pop(1)

0x7c: Push("Door ")
0x7d: Pop(1); Push(Stack[-1] + Stack[-5]);
0x7e: Push(" not found")
0x7f: Pop(2); Push(Stack[-2] + Stack[-1]);
0x80: @ Trace(Stack[-1])
0x81: Pop(1)
0x82: GOTO 0x86

0x83: Push("locked")
0x84: @@ SetProperty(Stack[-1], Stack[-4])
0x85: Pop(1)
0x86: Return(); Pop(2)

0x87: Stack[-1] = 0
